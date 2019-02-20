#ifndef CUDA_CMIX_H
#define CUDA_CMIX_H

#include <complex>

typedef std::complex<float> sampleType;

void cmix(sampleType* input , sampleType* output, 
		size_t length, float offset_hz, float input_fs)
// class cudaCmix 
// {
// public:
// 	cudaCmix(float* coeffs, size_t length);
// 	//cudaGenerateTone(float ToneFreqHz, float SampleRateHz, sampleType* output, )
// 	~cudaCmix();

// 	void filter(sampleType * input, 
// 		sampleType * output, 
// 		size_t length);

// private:
	
// 	sampleType * tone;
// 	const size_t cTapsLen;
// 	sampleType * state;
// 	size_t stateLen;
// };

#endif // CUDA_CMIX_H