#ifndef HAR_DBSCAN_H_INCLUDED
#define HAR_DBSCAN_H_INCLUDED
#define NUM_CORE_POINTS 20139
#define NUM_FEATURES 10
#define NUM_CLUSTERS 3
#define EPS 2
extern const float CORE_POINTS[NUM_CORE_POINTS][NUM_FEATURES];
extern const int LABELS[NUM_CORE_POINTS];
extern const int MEANS[NUM_FEATURES];
extern const int STDDEV[NUM_FEATURES];
#endif
