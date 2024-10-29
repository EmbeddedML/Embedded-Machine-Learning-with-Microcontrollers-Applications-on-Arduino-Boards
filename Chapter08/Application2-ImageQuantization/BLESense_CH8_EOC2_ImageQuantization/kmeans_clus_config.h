#ifndef RGB_QUANT_KMEANS_H_INCLUDED
#define RGB_QUANT_KMEANS_H_INCLUDED
#define NUM_CLUSTERS 8
#define NUM_FEATURES 3
extern int num_samples_per_cluster[NUM_CLUSTERS];
extern float centroids[NUM_CLUSTERS][NUM_FEATURES];
#endif