## Supported Operators Data Types
*This file is automatically generated from the
            [def files](/onnxruntime/core/providers/cpu/cpu_execution_provider.cc) via [this script](/tools/python/gen_opkernel_doc.py).
            Do not modify directly and instead edit operator definitions.*



## Operators implemented by CPUExecutionProvider

| Op Name | Parameters | OpSet Version | Types Supported |
|---------|------------|---------------|-----------------|
**Operator Domain:** *ai.onnx.ml*
|Abs|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float), tensor(int64), tensor(double), tensor(uint32), tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), unknown|
|Acos|(*in* input:**T**, *out* output:**T**)|7+|**T** = tensor(float)|
|Acosh|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(float)|
|Add|(*in* A:**T**, *in* B:**T**, *out* C:**T**)|7+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|Affine|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|And|(*in* A:**T**, *in* B:**T**, *out* C:**T1**)|7+|**T** = tensor(bool)|
| | ||**T1** = tensor(bool)|
|ArgMax|(*in* data:**T**, *out* reduced:**tensor(int64)**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ArgMin|(*in* data:**T**, *out* reduced:**tensor(int64)**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ArrayFeatureExtractor|(*in* X:**T**, *in* Y:**tensor(int64)**, *out* Z:**T**)|1+|**T** = tensor(string), tensor(int64), tensor(float), tensor(int32), tensor(double)|
|Asin|(*in* input:**T**, *out* output:**T**)|7+|**T** = tensor(float)|
|Asinh|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(float)|
|Atan|(*in* input:**T**, *out* output:**T**)|7+|**T** = tensor(float)|
|Atanh|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(float)|
|AveragePool|(*in* X:**T**, *out* Y:**T**)|11+|**T** = tensor(float)|
| | |[10, 10]|**T** = tensor(float)|
| | |[7, 9]|**T** = tensor(float)|
|BatchNormalization|(*in* X:**T**, *in* scale:**T**, *in* B:**T**, *in* mean:**T**, *in* var:**T**, *out* Y:**T**, *out* mean:**T**, *out* var:**T**, *out* saved_mean:**T**, *out* saved_var:**T**)|9+|**B** = tensor(float)|
| | ||**X** = tensor(float)|
| | ||**mean** = tensor(float)|
| | ||**scale** = tensor(float)|
| | ||**var** = tensor(float)|
| | |[7, 8]|**B** = tensor(float)|
| | ||**X** = tensor(float)|
| | ||**mean** = tensor(float)|
| | ||**scale** = tensor(float)|
| | ||**var** = tensor(float)|
|Binarizer|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|BitShift|(*in* X:**T**, *in* Y:**T**, *out* Z:**T**)|11+|**T** = tensor(uint8), tensor(uint32), tensor(uint64)|
|Cast|(*in* input:**T1**, *out* output:**T2**)|9+|**T1** = tensor(string)|
| | ||**T2** = tensor(MLFloat16), tensor(string), tensor(float), tensor(int64), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[6, 9]|**T1** = tensor(MLFloat16), tensor(int64), tensor(float), tensor(uint32), tensor(double), tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), unknown, tensor(bool)|
| | ||**T2** = tensor(MLFloat16), tensor(string), tensor(float), tensor(int64), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|CastMap|(*in* X:**T1**, *out* Y:**T2**)|1+|**T1** = unknown|
| | ||**T2** = tensor(int64), tensor(string), tensor(float)|
|CategoryMapper|(*in* X:**T1**, *out* Y:**T2**)|1+|**T1** = tensor(string), tensor(int64)|
| | ||**T2** = tensor(string), tensor(int64)|
|Ceil|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|Clip|(*in* input:**T**, *in* min:**T**, *in* max:**T**, *out* output:**T**) or (*in* input:**T**, *out* output:**T**)|11+|**T** = tensor(float)|
| | |[6, 10]|**T** = tensor(float)|
|Compress|(*in* input:**T**, *in* condition:**T1**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**T1** = tensor(bool)|
| | |[9, 10]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**T1** = tensor(bool)|
|Concat|(*in* inputs:**T**, *out* concat_result:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[4, 10]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|ConcatFromSequence|(*in* input_sequence:**S**, *out* concat_result:**T**)|11+|**S** = unknown|
|ConstantOfShape|(*in* input:**T1**, *out* output:**T2**)|9+|**T1** = tensor(int64)|
| | ||**T2** = tensor(MLFloat16), tensor(float), tensor(int64), tensor(double), tensor(uint32), tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), unknown, tensor(bool)|
|Conv|(*in* X:**T**, *in* W:**T**, *in* B:**T**, *out* Y:**T**)|11+|**T** = tensor(float)|
| | |[1, 10]|**T** = tensor(float)|
|ConvInteger|(*in* x:**T1**, *in* w:**T2**, *in* x_zero_point:**T1**, *in* w_zero_point:**T2**, *out* y:**T3**)|10+|**T1** = tensor(uint8)|
| | ||**T2** = tensor(uint8)|
| | ||**T3** = tensor(int32)|
|ConvTranspose|(*in* X:**T**, *in* W:**T**, *in* B:**T**, *out* Y:**T**)|11+|**T** = tensor(float)|
| | |[1, 10]|**T** = tensor(float)|
|Cos|(*in* input:**T**, *out* output:**T**)|7+|**T** = tensor(float)|
|Cosh|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(float)|
|Crop|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|CumSum|(*in* x:**T**, *in* axis:**T2**, *out* y:**T**)|11+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|DepthToSpace|(*in* input:**T**, *out* output:**T**)|11+|**T** = tensor(float)|
| | |[1, 10]|**T** = tensor(float)|
|DequantizeLinear|(*in* x:**T**, *in* x_scale:**tensor(float)**, *in* x_zero_point:**T**, *out* y:**tensor(float)**)|10+|**x** = tensor(uint8), unknown|
| | ||**x_scale** = tensor(float)|
| | ||**x_zero_point** = tensor(uint8), unknown|
| | ||**y** = tensor(float)|
|Det|(*in* X:**T**, *out* Y:**T**)|11+|**T** = tensor(float)|
|DictVectorizer|(*in* X:**T1**, *out* Y:**T2**)|1+|**T1** = unknown|
| | ||**T2** = tensor(float), tensor(double), tensor(string), tensor(int64)|
|Div|(*in* A:**T**, *in* B:**T**, *out* C:**T**)|7+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|Dropout|(*in* data:**T**, *out* output:**T**, *out* mask:**T1**) or (*in* data:**T**, *out* output:**T**, *out* mask:**T**)|10+|**T** = tensor(MLFloat16), tensor(double), tensor(float)|
| | ||**T1** = tensor(bool)|
| | |[7, 9]|**T** = tensor(MLFloat16), tensor(double), tensor(float)|
| | ||**T1** = tensor(bool)|
|DynamicQuantizeLinear|(*in* x:**T1**, *out* y:**T2**, *out* y_scale:**tensor(float)**, *out* y_zero_point:**T2**)|11+|**T2** = tensor(uint8)|
|DynamicSlice|(*in* data:**T**, *in* starts:**Tind**, *in* ends:**Tind**, *in* axes:**Tind**, *out* output:**T**)|1+|**T** = tensor(MLFloat16), tensor(string), tensor(float), tensor(int64), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
|Elu|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|Equal|(*in* A:**T**, *in* B:**T**, *out* C:**T1**)|11+|**T** = tensor(int64), tensor(float), tensor(bool), tensor(int32)|
| | ||**T1** = tensor(bool)|
| | |[7, 10]|**T** = tensor(int64), tensor(bool), tensor(int32)|
| | ||**T1** = tensor(bool)|
|Erf|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(float)|
|Exp|(*in* input:**T**, *out* output:**T**)|6+|**T** = tensor(double), tensor(float)|
|Expand|(*in* input:**T**, *in* shape:**tensor(int64)**, *out* output:**T**)|8+|**T** = tensor(MLFloat16), tensor(float), tensor(int64), tensor(double), tensor(uint32), tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), unknown, tensor(bool)|
|EyeLike|(*in* input:**T1**, *out* output:**T2**)|9+|**T1** = tensor(int64), tensor(float), tensor(int32), tensor(uint64), tensor(double)|
| | ||**T2** = tensor(int64), tensor(float), tensor(int32), tensor(uint64), tensor(double)|
|FeatureVectorizer|(*in* X:**T1**, *out* Y:**tensor(float)**)|1+|**T1** = tensor(int64), tensor(float), tensor(double), tensor(int32)|
|Flatten|(*in* input:**T**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[1, 8]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[9, 10]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|Floor|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|GRU|(*in* X:**T**, *in* W:**T**, *in* R:**T**, *in* B:**T**, *in* sequence_lens:**T1**, *in* initial_h:**T**, *out* Y:**T**, *out* Y_h:**T**)|7+|**T** = tensor(double), tensor(float)|
| | ||**T1** = tensor(int32)|
|Gather|(*in* data:**T**, *in* indices:**Tind**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
| | |[1, 10]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
|GatherElements|(*in* data:**T**, *in* indices:**Tind**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
|GatherND|(*in* data:**T**, *in* indices:**tensor(int64)**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64)|
|Gemm|(*in* A:**T**, *in* B:**T**, *in* C:**T**, *out* Y:**T**)|11+|**T** = tensor(float)|
| | |[7, 8]|**T** = tensor(float)|
| | |[9, 10]|**T** = tensor(float)|
|GlobalAveragePool|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|GlobalLpPool|(*in* X:**T**, *out* Y:**T**)|2+|**T** = tensor(float)|
|GlobalMaxPool|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|Greater|(*in* A:**T**, *in* B:**T**, *out* C:**T1**)|9+|**T** = tensor(int64), tensor(int32)|
| | ||**T1** = tensor(bool)|
| | |[7, 9]|**T** = tensor(float)|
| | ||**T1** = tensor(bool)|
|HardSigmoid|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|Hardmax|(*in* input:**T**, *out* output:**T**)|11+|**T** = tensor(float)|
| | |[1, 10]|**T** = tensor(float)|
|Identity|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|If|(*in* cond:**B**, *out* outputs:**V**)|11+|**B** = tensor(bool)|
| | ||**V** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[1, 10]|**B** = tensor(bool)|
| | ||**V** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|ImageScaler|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|Imputer|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(int64), tensor(float)|
|InstanceNormalization|(*in* input:**T**, *in* scale:**T**, *in* B:**T**, *out* output:**T**)|6+|**T** = tensor(float)|
|IsInf|(*in* X:**T1**, *out* Y:**T2**)|10+|**T1** = tensor(double), tensor(float)|
| | ||**T2** = tensor(bool)|
|IsNaN|(*in* X:**T1**, *out* Y:**T2**)|9+|**T1** = tensor(MLFloat16), tensor(float)|
| | ||**T2** = tensor(bool)|
|LRN|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|LSTM|(*in* X:**T**, *in* W:**T**, *in* R:**T**, *in* B:**T**, *in* sequence_lens:**T1**, *in* initial_h:**T**, *in* initial_c:**T**, *in* P:**T**, *out* Y:**T**, *out* Y_h:**T**, *out* Y_c:**T**)|7+|**T** = tensor(double), tensor(float)|
| | ||**T1** = tensor(int32)|
|LabelEncoder|(*in* X:**T1**, *out* Y:**T2**)|2+|**T1** = tensor(int64), tensor(string), tensor(float)|
| | ||**T2** = tensor(int64), tensor(string), tensor(float)|
| | |[1, 1]|**T1** = tensor(string), tensor(int64)|
| | ||**T2** = tensor(string), tensor(int64)|
|LayerNormalization|(*in* X:**T**, *in* scale:**T**, *in* B:**T**, *out* Y:**T**, *out* mean:**U**, *out* inv_std_var:**U**)|1+|**T** = tensor(double), tensor(float)|
|LeakyRelu|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|Less|(*in* A:**T**, *in* B:**T**, *out* C:**T1**)|9+|**T** = tensor(int64), tensor(int32)|
| | ||**T1** = tensor(bool)|
| | |[7, 9]|**T** = tensor(double), tensor(float)|
| | ||**T1** = tensor(bool)|
|LinearClassifier|(*in* X:**T1**, *out* Y:**T2**, *out* Z:**tensor(float)**)|1+|**T1** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
| | ||**T2** = tensor(string), tensor(int64)|
|LinearRegressor|(*in* X:**T**, *out* Y:**tensor(float)**)|1+|**T** = tensor(float)|
|Log|(*in* input:**T**, *out* output:**T**)|6+|**T** = tensor(float)|
|LogSoftmax|(*in* input:**T**, *out* output:**T**)|11+|**T** = tensor(float)|
| | |[1, 10]|**T** = tensor(float)|
|Loop|(*in* M:**I**, *in* cond:**B**, *in* v_initial:**V**, *out* v_final_and_scan_outputs:**V**)|11+|**B** = tensor(bool)|
| | ||**I** = tensor(int64)|
| | ||**V** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[1, 10]|**B** = tensor(bool)|
| | ||**I** = tensor(int64)|
| | ||**V** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|LpNormalization|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|LpPool|(*in* X:**T**, *out* Y:**T**)|11+|**T** = tensor(float)|
| | |[2, 10]|**T** = tensor(float)|
|MatMul|(*in* A:**T**, *in* B:**T**, *out* Y:**T**)|9+|**T** = tensor(int64), tensor(float), tensor(uint32), tensor(int32), tensor(uint64), tensor(double)|
| | |[1, 8]|**T** = tensor(double), tensor(float)|
|MatMulInteger|(*in* A:**T1**, *in* B:**T2**, *in* a_zero_point:**T1**, *in* b_zero_point:**T2**, *out* Y:**T3**)|10+|**T1** = tensor(uint8)|
| | ||**T2** = tensor(uint8), unknown|
| | ||**T3** = tensor(int32)|
|Max|(*in* data_0:**T**, *out* max:**T**)|8+|**T** = tensor(double), tensor(float)|
| | |[6, 7]|**T** = tensor(float)|
|MaxPool|(*in* X:**T**, *out* Y:**T**) or (*in* X:**T**, *out* Y:**T**, *out* Indices:**I**)|11+|**I** = tensor(int64)|
| | ||**T** = tensor(float)|
| | |[1, 7]|**T** = tensor(float)|
| | |[10, 10]|**I** = tensor(int64)|
| | ||**T** = tensor(float)|
| | |[8, 9]|**I** = tensor(int64)|
| | ||**T** = tensor(float)|
|MaxRoiPool|(*in* X:**T**, *in* rois:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|MaxUnpool|(*in* X:**T1**, *in* I:**T2**, *in* output_shape:**T2**, *out* output:**T1**)|11+|**T1** = tensor(float)|
| | ||**T2** = tensor(int64)|
| | |[9, 10]|**T1** = tensor(float)|
| | ||**T2** = tensor(int64)|
|Mean|(*in* data_0:**T**, *out* mean:**T**)|8+|**T** = tensor(float)|
| | |[6, 7]|**T** = tensor(float)|
|MeanVarianceNormalization|(*in* input:**T**, *out* output:**T**) or (*in* X:**T**, *out* Y:**T**)|9+|**T** = tensor(float)|
| | |[1, 8]|**T** = tensor(float)|
|Min|(*in* data_0:**T**, *out* min:**T**)|8+|**T** = tensor(float)|
| | |[6, 7]|**T** = tensor(float)|
|Mod|(*in* A:**T**, *in* B:**T**, *out* C:**T**)|10+|**T** = tensor(MLFloat16), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double)|
|Mul|(*in* A:**T**, *in* B:**T**, *out* C:**T**)|7+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|Multinomial|(*in* input:**T1**, *out* output:**T2**)|7+|**T1** = tensor(float)|
| | ||**T2** = tensor(int64), tensor(int32)|
|Neg|(*in* X:**T**, *out* Y:**T**)|6+|**T** = unknown, tensor(int32), tensor(double), tensor(float)|
|NonZero|(*in* X:**T**, *out* Y:**tensor(int64)**)|9+|**T** = tensor(int64), tensor(float), tensor(int32), tensor(uint8), tensor(bool)|
|Normalizer|(*in* X:**T**, *out* Y:**tensor(float)**)|1+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|Not|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(bool)|
| | ||**T1** = tensor(bool)|
|OneHot|(*in* indices:**T1**, *in* depth:**T2**, *in* values:**T3**, *out* output:**T3**)|11+|**T1** = tensor(int32), tensor(float), tensor(int64)|
| | ||**T2** = tensor(int32), tensor(float), tensor(int64)|
| | ||**T3** = tensor(int32), tensor(float), tensor(string), tensor(int64)|
| | |[9, 10]|**T1** = tensor(int32), tensor(float), tensor(int64)|
| | ||**T2** = tensor(int32), tensor(float), tensor(int64)|
| | ||**T3** = tensor(int32), tensor(float), tensor(string), tensor(int64)|
|OneHotEncoder|(*in* X:**T**, *out* Y:**tensor(float)**)|1+|**T** = tensor(float), tensor(double), tensor(string), tensor(int64)|
|Or|(*in* A:**T**, *in* B:**T**, *out* C:**T1**)|7+|**T** = tensor(bool)|
| | ||**T1** = tensor(bool)|
|PRelu|(*in* X:**T**, *in* slope:**T**, *out* Y:**T**)|[7, 9]|**T** = tensor(float)|
|Pad|(*in* data:**T**, *in* pads:**tensor(int64)**, *in* constant_value:**T**, *out* output:**T**) or (*in* data:**T**, *out* output:**T**)|11+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
| | |[2, 10]|**T** = tensor(float)|
|ParametricSoftplus|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|Pow|(*in* X:**T**, *in* Y:**T**, *out* Z:**T**)|7+|**T** = tensor(double), tensor(float)|
|QLinearConv|(*in* x:**T1**, *in* x_scale:**tensor(float)**, *in* x_zero_point:**T1**, *in* w:**T2**, *in* w_scale:**tensor(float)**, *in* w_zero_point:**T2**, *in* y_scale:**tensor(float)**, *in* y_zero_point:**T3**, *in* B:**T4**, *out* y:**T3**)|10+|**T1** = tensor(uint8)|
| | ||**T2** = tensor(uint8)|
| | ||**T3** = tensor(uint8)|
| | ||**T4** = tensor(int32)|
|QLinearMatMul|(*in* a:**T1**, *in* a_scale:**tensor(float)**, *in* a_zero_point:**T1**, *in* b:**T2**, *in* b_scale:**tensor(float)**, *in* b_zero_point:**T2**, *in* y_scale:**tensor(float)**, *in* y_zero_point:**T3**, *out* y:**T3**)|10+|**T1** = tensor(uint8)|
| | ||**T2** = tensor(uint8)|
| | ||**T3** = tensor(uint8)|
|QuantizeLinear|(*in* x:**T1**, *in* y_scale:**tensor(float)**, *in* y_zero_point:**T2**, *out* y:**T2**)|10+|**x** = tensor(float)|
| | ||**y** = tensor(uint8), unknown|
| | ||**y_zero_point** = tensor(uint8), unknown|
|RNN|(*in* X:**T**, *in* W:**T**, *in* R:**T**, *in* B:**T**, *in* sequence_lens:**T1**, *in* initial_h:**T**, *out* Y:**T**, *out* Y_h:**T**)|7+|**T** = tensor(float)|
| | ||**T1** = tensor(int32)|
|RandomNormal|(*out* output:**T**)|1+|**T** = tensor(double), tensor(float)|
|RandomNormalLike|(*in* input:**T1**, *out* output:**T2**)|1+|**T1** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**T2** = tensor(double), tensor(float)|
|RandomUniform|(*out* output:**T**)|1+|**T** = tensor(double), tensor(float)|
|RandomUniformLike|(*in* input:**T1**, *out* output:**T2**)|1+|**T1** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**T2** = tensor(double), tensor(float)|
|Range|(*in* start:**T**, *in* limit:**T**, *in* delta:**T**, *out* output:**T**)|11+|**T** = tensor(int64), tensor(float), tensor(int32), tensor(int16), tensor(double)|
|Reciprocal|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|ReduceL1|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ReduceL2|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ReduceLogSum|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ReduceLogSumExp|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ReduceMax|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(int64), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(int64), tensor(float)|
|ReduceMean|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ReduceMin|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(int64), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(int64), tensor(float)|
|ReduceProd|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(float)|
|ReduceSum|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|ReduceSumSquare|(*in* data:**T**, *out* reduced:**T**)|11+|**T** = tensor(int32), tensor(double), tensor(float)|
| | |[1, 10]|**T** = tensor(int32), tensor(double), tensor(float)|
|Relu|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|Reshape|(*in* data:**T**, *in* shape:**tensor(int64)**, *out* reshaped:**T**) or (*in* data:**T**, *out* reshaped:**T**)|5+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**shape** = tensor(int64)|
|Reshape_1||[1, 4]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|Resize|(*in* X:**T1**, *in* roi:**T2**, *in* scales:**tensor(float)**, *in* sizes:**tensor(int64)**, *out* Y:**T1**) or (*in* X:**T**, *in* scales:**tensor(float)**, *out* Y:**T**)|11+|**T** = tensor(int32), tensor(uint8), tensor(float)|
| | |[10, 10]|**T** = tensor(int32), tensor(uint8), tensor(float)|
|ReverseSequence|(*in* input:**T**, *in* sequence_lens:**tensor(int64)**, *out* Y:**T**)|10+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|RoiAlign|(*in* X:**T1**, *in* rois:**T1**, *in* batch_indices:**T2**, *out* Y:**T1**)|10+|**T** = tensor(double), tensor(float)|
| | ||**T2** = tensor(int64)|
|Round|(*in* X:**T**, *out* Y:**T**)|11+|**T** = tensor(MLFloat16), tensor(double), tensor(float)|
|SVMClassifier|(*in* X:**T1**, *out* Y:**T2**, *out* Z:**tensor(float)**)|1+|**T1** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
| | ||**T2** = tensor(string), tensor(int64)|
|SVMRegressor|(*in* X:**T**, *out* Y:**tensor(float)**)|1+|**T** = tensor(float)|
|Scale|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|ScaledTanh|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|Scaler|(*in* X:**T**, *out* Y:**tensor(float)**)|1+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|Scan|(*in* sequence_lens:**I**, *in* initial_state_and_scan_inputs:**V**, *out* final_state_and_scan_outputs:**V**) or (*in* initial_state_and_scan_inputs:**V**, *out* final_state_and_scan_outputs:**V**)|11+|**I** = tensor(int64)|
| | ||**V** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[8, 8]|**I** = tensor(int64)|
| | ||**V** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[9, 10]|**I** = tensor(int64)|
| | ||**V** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|Scatter|(*in* data:**T**, *in* indices:**Tind**, *in* updates:**T**, *out* output:**T**)|[9, 10]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
|ScatterElements|(*in* data:**T**, *in* indices:**Tind**, *in* updates:**T**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
|ScatterND|(*in* data:**T**, *in* indices:**tensor(int64)**, *in* updates:**T**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64)|
|Selu|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|SequenceAt|(*in* input_sequence:**S**, *in* position:**I**, *out* tensor:**T**)|11+|**I** = tensor(int64), tensor(int32)|
| | ||**S** = unknown|
| | ||**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|SequenceConstruct|(*in* inputs:**T**, *out* output_sequence:**S**)|11+|**S** = unknown|
| | ||**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|SequenceEmpty|(*out* output:**S**)|11+|**S** = unknown|
|SequenceErase|(*in* input_sequence:**S**, *in* position:**I**, *out* output_sequence:**S**)|11+|**I** = tensor(int64), tensor(int32)|
| | ||**S** = unknown|
|SequenceInsert|(*in* input_sequence:**S**, *in* tensor:**T**, *in* position:**I**, *out* output_sequence:**S**)|11+|**I** = tensor(int64), tensor(int32)|
| | ||**S** = unknown|
|SequenceLength|(*in* input_sequence:**S**, *out* length:**I**)|11+|**I** = tensor(int64)|
| | ||**S** = unknown|
|Shape|(*in* data:**T**, *out* shape:**T1**)|1+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**T1** = tensor(int64)|
|Shrink|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double)|
|Sigmoid|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(float)|
|Sign|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double)|
|Sin|(*in* input:**T**, *out* output:**T**)|7+|**T** = tensor(double), tensor(float)|
|Sinh|(*in* input:**T**, *out* output:**T**)|9+|**T** = tensor(float)|
|Size|(*in* data:**T**, *out* size:**T1**)|1+|**T** = tensor(string), tensor(float), tensor(int64), tensor(double), tensor(uint32), tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), unknown, tensor(bool)|
| | ||**T1** = tensor(int64)|
|Slice|(*in* data:**T**, *in* starts:**Tind**, *in* ends:**Tind**, *in* axes:**Tind**, *in* steps:**Tind**, *out* output:**T**) or (*in* data:**T**, *out* output:**T**)|11+|**T** = tensor(MLFloat16), tensor(string), tensor(float), tensor(int64), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
| | |[1, 9]|**T** = tensor(MLFloat16), tensor(string), tensor(float), tensor(int64), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[10, 10]|**T** = tensor(MLFloat16), tensor(string), tensor(float), tensor(int64), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
|Softmax|(*in* input:**T**, *out* output:**T**)|11+|**T** = tensor(float)|
| | |[1, 10]|**T** = tensor(float)|
|Softplus|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|Softsign|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|SpaceToDepth|(*in* input:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|Split|(*in* input:**T**, *in* split:**T**, *out* outputs...:**T**) or (*in* input:**T**, *out* outputs:**T**)|11+|**T** = tensor(int32), tensor(string), tensor(float)|
| | |[2, 10]|**T** = tensor(int32), tensor(string), tensor(float)|
|SplitToSequence|(*in* input:**T**, *in* split:**I**, *out* output_sequence:**S**)|11+|**I** = tensor(int64), tensor(int32)|
| | ||**S** = unknown|
| | ||**T** = tensor(int32), tensor(double), tensor(string), tensor(float)|
|Sqrt|(*in* X:**T**, *out* Y:**T**)|6+|**T** = tensor(double), tensor(float)|
|Squeeze|(*in* data:**T**, *out* squeezed:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[1, 10]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|StringNormalizer|(*in* X:**tensor(string)**, *out* Y:**tensor(string)**)|10+|**T** = tensor(string)|
|Sub|(*in* A:**T**, *in* B:**T**, *out* C:**T**)|7+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|Sum|(*in* data_0:**T**, *out* sum:**T**)|8+|**T** = tensor(float)|
| | |[6, 7]|**T** = tensor(float)|
|Tan|(*in* input:**T**, *out* output:**T**)|7+|**T** = tensor(float)|
|Tanh|(*in* input:**T**, *out* output:**T**)|6+|**T** = tensor(float)|
|TfIdfVectorizer|(*in* X:**T**, *out* Y:**T1**)|9+|**T** = tensor(int64), tensor(string), tensor(int32)|
| | ||**T1** = tensor(float)|
|ThresholdedRelu|(*in* X:**T**, *out* Y:**T**)|10+|**T** = tensor(float)|
| | |[1, 9]|**T** = tensor(float)|
|Tile|(*in* input:**T**, *in* tiles:**T**, *in* axis:**T**, *out* output:**T**) or (*in* input:**T**, *in* repeats:**T1**, *out* output:**T**)|6+|**T** = tensor(float), tensor(int64), tensor(double), tensor(uint32), tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), unknown, tensor(bool)|
| | ||**T1** = tensor(int64)|
|TopK|(*in* X:**T**, *in* K:**tensor(int64)**, *out* Values:**T**, *out* Indices:**I**) or (*in* X:**T**, *out* Values:**T**, *out* Indices:**I**)|11+|**I** = tensor(int64)|
| | ||**T** = tensor(float)|
| | |[1, 9]|**I** = tensor(int64)|
| | ||**T** = tensor(float)|
| | |[10, 10]|**I** = tensor(int64)|
| | ||**T** = tensor(float)|
|Transpose|(*in* data:**T**, *out* transposed:**T**)|1+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|TreeEnsembleClassifier|(*in* X:**T1**, *out* Y:**T2**, *out* Z:**tensor(float)**)|1+|**T1** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
| | ||**T2** = tensor(string), tensor(int64)|
|TreeEnsembleRegressor|(*in* X:**T**, *out* Y:**tensor(float)**)|1+|**T** = tensor(int32), tensor(int64), tensor(double), tensor(float)|
|Unique|(*in* X:**T**, *out* Y:**T**, *out* indices:**tensor(int64)**, *out* inverse_indices:**tensor(int64)**, *out* counts:**tensor(int64)**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|Unsqueeze|(*in* data:**T**, *out* expanded:**T**)|11+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | |[1, 10]|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
|Upsample|(*in* X:**T**, *in* scales:**tensor(float)**, *out* Y:**T**) or (*in* X:**T**, *out* Y:**T**)|[7, 9]|**T** = tensor(int32), tensor(uint8), tensor(float)|
|Where|(*in* condition:**B**, *in* X:**T**, *in* Y:**T**, *out* output:**T**)|9+|**T** = tensor(int32), tensor(int64), tensor(string), tensor(float)|
|Xor|(*in* A:**T**, *in* B:**T**, *out* C:**T1**)|7+|**T** = tensor(bool)|
| | ||**T1** = tensor(bool)|
|ZipMap|(*in* X:**tensor(float)**, *out* Z:**T**)|1+|**T** = unknown|
| |
| |
**Operator Domain:** *com.microsoft*
|AttnLSTM|(*in* X:**T**, *in* W:**T**, *in* R:**T**, *in* B:**T**, *in* sequence_lens:**T1**, *in* initial_h:**T**, *in* initial_c:**T**, *in* P:**T**, *in* QW:**T**, *in* MW:**T**, *in* V:**T**, *in* M:**T**, *in* memory_seq_lens:**T1**, *in* AW:**T**, *out* Y:**T**, *out* Y_h:**T**, *out* Y_c:**T**)|1+|**T** = tensor(double), tensor(float)|
| | ||**T1** = tensor(int32)|
|CDist|(*in* A:**T**, *in* B:**T**, *out* C:**T**)|1+|**T** = tensor(double), tensor(float)|
|ConvTransposeWithDynamicPads|(*in* X:**T**, *in* W:**T**, *in* Pads:**tensor(int64)**, *in* B:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|CropAndResize|(*in* X:**T1**, *in* rois:**T1**, *in* batch_indices:**T2**, *in* crop_size:**T2**, *out* Y:**T1**)|1+|**T** = tensor(float)|
| | ||**T2** = tensor(int32)|
|DequantizeLinear|(*in* x:**T2**, *in* x_scale:**T1**, *in* x_zero_point:**T2**, *out* y:**T1**)|1+|**axis** = unknown|
| | ||**x** = tensor(uint8), unknown|
| | ||**x_scale** = tensor(float)|
| | ||**x_zero_point** = tensor(uint8), unknown|
| | ||**y** = tensor(float)|
|ExpandDims|(*in* X:**T**, *in* axis:**tensor(int32)**, *out* Y:**T**)|1+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**axis** = tensor(int32)|
|FusedConv|(*in* X:**T**, *in* W:**T**, *in* B:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|FusedGemm|(*in* A:**T**, *in* B:**T**, *in* C:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|GatherND|(*in* data:**T**, *in* indices:**Tind**, *out* output:**T**)|1+|**T** = tensor(MLFloat16), tensor(bfloat16), tensor(string), tensor(int64), tensor(float), tensor(uint32), unknown, tensor(int32), tensor(uint8), tensor(int16), tensor(uint64), tensor(uint16), tensor(double), tensor(bool)|
| | ||**Tind** = tensor(int64), tensor(int32)|
|Gelu|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|MatMulInteger16|(*in* A:**T1**, *in* B:**T2**, *out* Y:**T3**)|1+|**T1** = tensor(int16)|
| | ||**T2** = tensor(int16)|
| | ||**T3** = tensor(int32)|
|MaxpoolWithMask|(*in* X:**T**, *in* M:**tensor(int32)**, *out* Y:**T**)|1+|**X** = tensor(float)|
|MurmurHash3|(*in* X:**T1**, *out* Y:**T2**)|1+|**T1** = tensor(uint32), tensor(string), tensor(int32)|
| | ||**T2** = tensor(uint32), tensor(int32)|
|Pad|(*in* data:**T**, *in* pads:**tensor(int64)**, *in* value:**T**, *out* output:**T**)|1+|**T** = tensor(float)|
|QuantizeLinear|(*in* x:**T1**, *in* y_scale:**T1**, *in* y_zero_point:**T2**, *out* y:**T2**)|1+|**axis** = unknown|
| | ||**x** = tensor(float)|
| | ||**y** = tensor(uint8)|
| | ||**y_scale** = tensor(float)|
| | ||**y_zero_point** = tensor(uint8)|
|Range|(*in* start:**T**, *in* limit:**T**, *in* delta:**T**, *out* Y:**T**)|1+|**T** = tensor(int64), tensor(float), tensor(int32), tensor(int16), tensor(double)|
|SampleOp|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|Tokenizer|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(string)|
|Unique|(*in* x:**T**, *out* y:**T**, *out* idx:**tensor(int64)**, *out* counts:**tensor(int64)**)|1+|**T** = tensor(float)|
|WordConvEmbedding|(*in* Sequence:**T**, *in* W:**T1**, *in* B:**T1**, *in* C:**T1**, *out* Y:**T1**)|1+|**T** = tensor(int32)|
| | ||**T1** = tensor(float)|
| |
| |
**Operator Domain:** *com.microsoft.nchwc*
|AveragePool|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|Conv|(*in* X:**T**, *in* W:**T**, *in* B:**T**, *in* Sum:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|GlobalAveragePool|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|GlobalMaxPool|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|MaxPool|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|ReorderInput|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
|ReorderOutput|(*in* X:**T**, *out* Y:**T**)|1+|**T** = tensor(float)|
| |
| |
