#include "bayes_cls_config.h"
float MEANS[NUM_CLASSES][NUM_FEATURES] = {{-2.04824109,-1.90133108},
 { 2.00999565, 1.99583551}};
const float CLASS_PRIORS[NUM_CLASSES] = {0.50375,0.49625};
const float INV_COVS[NUM_CLASSES][NUM_FEATURES][NUM_FEATURES] = {{{ 0.54067245, 0.42838192},
  { 0.42838192, 0.54200413}},

 {{ 0.53804538,-0.44757906},
  {-0.44757906, 0.5506084 }}};
const float DETS[NUM_CLASSES] = { 9.12944908,10.42477877};
