// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4996)
#endif
#include "core/common/common.h"
#ifdef _MSC_VER
#pragma warning(pop)
#endif
#include "core/framework/op_kernel.h"

namespace onnxruntime {

template <bool is_dropout>
class IdentityOp final : public OpKernel {
 public:
  IdentityOp(const OpKernelInfo& info) : OpKernel(info) {
  }

  Status Compute(OpKernelContext* context) const override {
    const auto* X = context->Input<Tensor>(0);
    ORT_ENFORCE(X != nullptr);
    const TensorShape& shape = X->Shape();
    Tensor* Y = context->Output(0, shape);
    auto X_type = X->DataType();

    const void* source = X->DataRaw(X_type);
    void* target = Y->MutableDataRaw(X_type);
    //If source and target pointers are not equal, we need to copy the data.
    if (target != source) {
      if (!utils::IsDataTypeString(X_type)) {
        memcpy(target, source, shape.Size() * X_type->Size());
      } else {
        // handle std::string
        const auto* src = X->template Data<std::string>();
        auto* dst = Y->template MutableData<std::string>();
        std::copy(src, src + shape.Size(), dst);
      }
    }

    if (is_dropout) {
      Tensor* mask = context->Output(1, shape);
      // a 'nullptr' returned would make it an unused optional output
      if (mask != nullptr) {
        // Opset 7 differs with Opset 10 in that the type of the 'mask'
        // output is tied with the type of the input in Opset 7 whereas
        // the type of 'mask' in Opset 10 is 'bool' always
        // so we have a common solution
        void* mask_data = mask->MutableDataRaw();
        // In 'test'/'inference' mode, there are no input values dropped out
        // so fill the buffer with 0/false
        memset(mask_data, 0, mask->SizeInBytes());
      }
    }

    return Status::OK();
  }
};

}  //namespace onnxruntime
