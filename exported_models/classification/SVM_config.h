#ifndef SVM_CONFIG_H_INCLUDED
#define SVM_CONFIG_H_INCLUDED
#define NUM_CLASSES 3
#define NUM_INTERCEPTS 3
#define NUM_FEATURES 2
#define NUM_SV 300
enum KernelType{
	LINEAR,
	POLY,
	RBF
};
extern const float coeffs[NUM_CLASSES - 1][NUM_SV];
extern const float SV[NUM_SV][NUM_FEATURES];
extern const float intercepts[NUM_INTERCEPTS];
extern const float w_sum[NUM_CLASSES + 1];
extern const float svm_gamma;
extern const float coef0;
extern const int degree;
#endif