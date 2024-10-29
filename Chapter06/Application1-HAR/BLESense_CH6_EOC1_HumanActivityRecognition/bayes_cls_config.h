#ifndef BAYES_HAR_CONFIG_H_INCLUDED
#define BAYES_HAR_CONFIG_H_INCLUDED
#define NUM_CLASSES 6
#define NUM_FEATURES 10
#define CASE 3
extern float MEANS[NUM_CLASSES][NUM_FEATURES];
extern const float CLASS_PRIORS[NUM_CLASSES];
extern const float INV_COVS[NUM_CLASSES][NUM_FEATURES][NUM_FEATURES];
extern const float DETS[NUM_CLASSES];
#endif
