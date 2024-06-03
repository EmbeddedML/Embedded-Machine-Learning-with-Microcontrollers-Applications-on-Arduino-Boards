#include "dt_cls_config.h"
const int LEFT_CHILDREN[NUM_NODES] = {  1,  2,  3,  4, -1,  6,  7, -1,  9, -1, -1, 12, -1, -1, 15, 16, 17, 18,
  -1, 20, 21, -1, -1, 24, -1, 26, -1, 28, 29, -1, 31, -1, 33, -1, -1, -1,
  -1, 38, 39, 40, -1, -1, -1, 44, -1, 46, 47, -1, -1, -1, 51, 52, -1, -1,
  55, 56, 57, 58, 59, 60, -1, 62, 63, -1, 65, -1, -1, 68, -1, 70, 71, 72,
  -1, 74, -1, -1, -1, 78, 79, -1, -1, 82, -1, 84, -1, 86, 87, -1, -1, -1,
  -1, 92, 93, 94, -1, 96, -1, -1, -1, -1,101, -1, -1,104,105, -1, -1, -1,
 109, -1, -1,112,113,114,115, -1,117,118, -1,120, -1,122, -1, -1, -1,126,
  -1,128, -1,130, -1,132, -1, -1,135, -1,137, -1,139,140,141, -1,143, -1,
  -1, -1,147, -1,149,150, -1,152, -1, -1,155,156,157,158,159,160,161, -1,
  -1,164,165, -1, -1, -1,169, -1, -1,172,173, -1,175, -1, -1,178, -1, -1,
 181, -1, -1, -1,185, -1, -1,188,189,190, -1,192,193, -1,195, -1,197, -1,
  -1, -1,201,202, -1,204,205, -1,207,208,209, -1,211, -1,213, -1,215, -1,
  -1,218, -1, -1, -1,222, -1,224,225, -1,227, -1,229, -1,231, -1,233, -1,
  -1, -1, -1,238,239,240, -1, -1, -1,244, -1,246, -1,248,249, -1, -1, -1,
 253,254,255, -1,257, -1,259, -1,261, -1, -1,264, -1, -1,267,268,269,270,
 271, -1,273, -1, -1, -1,277,278,279, -1,281, -1, -1, -1, -1, -1, -1};
const int RIGHT_CHILDREN[NUM_NODES] = {252,111, 14,  5, -1, 11,  8, -1, 10, -1, -1, 13, -1, -1, 50, 37, 36, 19,
  -1, 23, 22, -1, -1, 25, -1, 27, -1, 35, 30, -1, 32, -1, 34, -1, -1, -1,
  -1, 43, 42, 41, -1, -1, -1, 45, -1, 49, 48, -1, -1, -1, 54, 53, -1, -1,
 108,103,100, 91, 90, 61, -1, 67, 64, -1, 66, -1, -1, 69, -1, 77, 76, 73,
  -1, 75, -1, -1, -1, 81, 80, -1, -1, 83, -1, 85, -1, 89, 88, -1, -1, -1,
  -1, 99, 98, 95, -1, 97, -1, -1, -1, -1,102, -1, -1,107,106, -1, -1, -1,
 110, -1, -1,187,134,125,116, -1,124,119, -1,121, -1,123, -1, -1, -1,127,
  -1,129, -1,131, -1,133, -1, -1,136, -1,138, -1,146,145,142, -1,144, -1,
  -1, -1,148, -1,154,151, -1,153, -1, -1,184,183,180,171,168,163,162, -1,
  -1,167,166, -1, -1, -1,170, -1, -1,177,174, -1,176, -1, -1,179, -1, -1,
 182, -1, -1, -1,186, -1, -1,237,200,191, -1,199,194, -1,196, -1,198, -1,
  -1, -1,236,203, -1,221,206, -1,220,217,210, -1,212, -1,214, -1,216, -1,
  -1,219, -1, -1, -1,223, -1,235,226, -1,228, -1,230, -1,232, -1,234, -1,
  -1, -1, -1,243,242,241, -1, -1, -1,245, -1,247, -1,251,250, -1, -1, -1,
 266,263,256, -1,258, -1,260, -1,262, -1, -1,265, -1, -1,286,285,276,275,
 272, -1,274, -1, -1, -1,284,283,280, -1,282, -1, -1, -1, -1, -1, -1} ;
const int SPLIT_FEATURE[NUM_NODES] = { 0, 0, 1, 0,-2, 0, 1,-2, 1,-2,-2, 1,-2,-2, 0, 1, 1, 1,-2, 1, 0,-2,-2, 1,
 -2, 1,-2, 1, 1,-2, 0,-2, 0,-2,-2,-2,-2, 0, 1, 1,-2,-2,-2, 0,-2, 1, 1,-2,
 -2,-2, 0, 1,-2,-2, 1, 0, 0, 0, 0, 1,-2, 0, 1,-2, 1,-2,-2, 0,-2, 1, 1, 0,
 -2, 0,-2,-2,-2, 0, 0,-2,-2, 1,-2, 1,-2, 0, 0,-2,-2,-2,-2, 1, 1, 1,-2, 1,
 -2,-2,-2,-2, 1,-2,-2, 1, 1,-2,-2,-2, 0,-2,-2, 1, 0, 1, 0,-2, 1, 0,-2, 1,
 -2, 0,-2,-2,-2, 0,-2, 1,-2, 0,-2, 1,-2,-2, 1,-2, 1,-2, 1, 0, 1,-2, 1,-2,
 -2,-2, 1,-2, 1, 1,-2, 0,-2,-2, 1, 1, 1, 1, 1, 0, 0,-2,-2, 0, 1,-2,-2,-2,
  0,-2,-2, 0, 1,-2, 1,-2,-2, 0,-2,-2, 0,-2,-2,-2, 0,-2,-2, 0, 1, 1,-2, 1,
  1,-2, 1,-2, 1,-2,-2,-2, 1, 1,-2, 0, 0,-2, 1, 1, 1,-2, 0,-2, 0,-2, 1,-2,
 -2, 0,-2,-2,-2, 0,-2, 0, 1,-2, 1,-2, 0,-2, 0,-2, 1,-2,-2,-2,-2, 0, 0, 1,
 -2,-2,-2, 0,-2, 0,-2, 0, 1,-2,-2,-2, 1, 1, 1,-2, 1,-2, 0,-2, 0,-2,-2, 0,
 -2,-2, 1, 1, 1, 1, 0,-2, 0,-2,-2,-2, 0, 0, 1,-2, 1,-2,-2,-2,-2,-2,-2};
const float THRESHOLDS[NUM_NODES] = {-0.21506915,-2.01799738,-3.3506006 ,-3.05862081,-2.        ,-2.13152432,
 -3.57837701,-2.        ,-3.4928714 ,-2.        ,-2.        ,-4.1834662 ,
 -2.        ,-2.        ,-2.90397394,-1.55331403,-1.5629285 ,-2.4963007 ,
 -2.        ,-2.43667412,-3.86248696,-2.        ,-2.        ,-2.02718407,
 -2.        ,-1.98994845,-2.        ,-1.76131874,-1.81021774,-2.        ,
 -3.48243439,-2.        ,-3.24789107,-2.        ,-2.        ,-2.        ,
 -2.        ,-3.15618181,-0.25743967,-0.265118  ,-2.        ,-2.        ,
 -2.        ,-3.12895262,-2.        ,-0.78963941,-0.89765161,-2.        ,
 -2.        ,-2.        ,-2.8874917 ,-1.30300587,-2.        ,-2.        ,
  1.01297256,-2.1801511 ,-2.21290469,-2.44533837,-2.46028364,-3.03894103,
 -2.        ,-2.69293487,-0.67198396,-2.        ,-0.56798935,-2.        ,
 -2.        ,-2.68709219,-2.        ,-2.49419618,-2.62243783,-2.54236162,
 -2.        ,-2.50657332,-2.        ,-2.        ,-2.        ,-2.65514135,
 -2.67367911,-2.        ,-2.        ,-1.08324534,-2.        ,-0.94270292,
 -2.        ,-2.519629  ,-2.529513  ,-2.        ,-2.        ,-2.        ,
 -2.        ,-1.95346671,-2.00363034,-2.42168152,-2.        ,-2.35121167,
 -2.        ,-2.        ,-2.        ,-2.        ,-1.50883865,-2.        ,
 -2.        ,-2.63893986,-2.85500574,-2.        ,-2.        ,-2.        ,
 -2.40951157,-2.        ,-2.        ,-1.09417474,-1.89042306,-2.23544097,
 -1.99813974,-2.        ,-2.97996116,-1.96414161,-2.        ,-3.20851374,
 -2.        ,-1.92141098,-2.        ,-2.        ,-2.        ,-1.95820981,
 -2.        ,-1.79686451,-2.        ,-1.93364179,-2.        ,-1.39346814,
 -2.        ,-2.        ,-3.52689087,-2.        ,-3.52212775,-2.        ,
 -3.39720774,-1.22674033,-3.44993663,-2.        ,-3.40384996,-2.        ,
 -2.        ,-2.        ,-3.06688023,-2.        ,-3.03526294,-3.0586493 ,
 -2.        ,-1.48330486,-2.        ,-2.        ,-1.14737123,-1.52453458,
 -1.60272336,-2.38731325,-2.50925791,-1.75026959,-1.81822443,-2.        ,
 -2.        ,-1.56643957,-2.85810983,-2.        ,-2.        ,-2.        ,
 -1.38025236,-2.        ,-2.        ,-0.6065392 ,-1.84833592,-2.        ,
 -1.82604742,-2.        ,-2.        ,-0.43731987,-2.        ,-2.        ,
 -1.69632822,-2.        ,-2.        ,-2.        ,-0.91769654,-2.        ,
 -2.        ,-0.84788516,-0.6742292 ,-1.06486338,-2.        ,-0.84733507,
 -0.96817353,-2.        ,-0.94934946,-2.        ,-0.89229381,-2.        ,
 -2.        ,-2.        , 1.05150044,-0.59515232,-2.        ,-1.43402463,
 -1.93670309,-2.        , 0.83245459, 0.24154739,-0.57006195,-2.        ,
 -1.77842194,-2.        ,-1.47928119,-2.        , 0.05727442,-2.        ,
 -2.        ,-1.50201911,-2.        ,-2.        ,-2.        ,-1.19622022,
 -2.        ,-0.90890756,-0.32455614,-2.        ,-0.0936246 ,-2.        ,
 -1.17466247,-2.        ,-1.13748497,-2.        , 0.34882167,-2.        ,
 -2.        ,-2.        ,-2.        ,-0.64305711,-0.70513928,-0.96643901,
 -2.        ,-2.        ,-2.        ,-0.43551189,-2.        ,-0.4149559 ,
 -2.        ,-0.37672924, 0.07827755,-2.        ,-2.        ,-2.        ,
 -1.82383937,-2.23819685,-2.9455024 ,-2.        ,-2.86174738,-2.        ,
  0.61259088,-2.        , 0.74617666,-2.        ,-2.        ,-0.10549591,
 -2.        ,-2.        ,-0.14474951,-0.15939454,-1.20477384,-1.28615338,
  0.86617258,-2.        , 1.17268378,-2.        ,-2.        ,-2.        ,
  0.53788832, 0.50960726,-0.37471621,-2.        ,-0.32696934,-2.        ,
 -2.        ,-2.        ,-2.        ,-2.        ,-2.        };
const int VALUES[NUM_NODES][NUM_CLASSES] = {{806,794},
 {649,127},
 {408, 37},
 { 11,  6},
 {  0,  4},
 { 11,  2},
 { 10,  1},
 {  8,  0},
 {  2,  1},
 {  0,  1},
 {  2,  0},
 {  1,  1},
 {  0,  1},
 {  1,  0},
 {397, 31},
 {272,  9},
 { 50,  6},
 { 50,  5},
 { 21,  0},
 { 29,  5},
 {  1,  2},
 {  1,  0},
 {  0,  2},
 { 28,  3},
 { 11,  0},
 { 17,  3},
 {  0,  1},
 { 17,  2},
 {  8,  2},
 {  7,  0},
 {  1,  2},
 {  0,  1},
 {  1,  1},
 {  1,  0},
 {  0,  1},
 {  9,  0},
 {  0,  1},
 {222,  3},
 {204,  1},
 { 57,  1},
 { 57,  0},
 {  0,  1},
 {147,  0},
 { 18,  2},
 {  0,  1},
 { 18,  1},
 {  6,  1},
 {  6,  0},
 {  0,  1},
 { 12,  0},
 {125, 22},
 {  1,  2},
 {  1,  0},
 {  0,  2},
 {124, 20},
 {120, 17},
 { 86, 16},
 { 85, 14},
 { 56, 12},
 { 56, 10},
 {  0,  1},
 { 56,  9},
 { 24,  1},
 { 17,  0},
 {  7,  1},
 {  0,  1},
 {  7,  0},
 { 32,  8},
 {  0,  1},
 { 32,  7},
 {  5,  3},
 {  5,  1},
 {  4,  0},
 {  1,  1},
 {  0,  1},
 {  1,  0},
 {  0,  2},
 { 27,  4},
 {  2,  2},
 {  2,  0},
 {  0,  2},
 { 25,  2},
 { 18,  0},
 {  7,  2},
 {  0,  1},
 {  7,  1},
 {  3,  1},
 {  3,  0},
 {  0,  1},
 {  4,  0},
 {  0,  2},
 { 29,  2},
 {  7,  2},
 {  7,  1},
 {  4,  0},
 {  3,  1},
 {  0,  1},
 {  3,  0},
 {  0,  1},
 { 22,  0},
 {  1,  2},
 {  1,  0},
 {  0,  2},
 { 34,  1},
 {  8,  1},
 {  8,  0},
 {  0,  1},
 { 26,  0},
 {  4,  3},
 {  4,  0},
 {  0,  3},
 {241, 90},
 {203, 23},
 { 15,  8},
 { 11,  3},
 {  0,  1},
 { 11,  2},
 {  3,  2},
 {  2,  0},
 {  1,  2},
 {  0,  1},
 {  1,  1},
 {  1,  0},
 {  0,  1},
 {  8,  0},
 {  4,  5},
 {  2,  0},
 {  2,  5},
 {  0,  4},
 {  2,  1},
 {  1,  0},
 {  1,  1},
 {  0,  1},
 {  1,  0},
 {188, 15},
 { 63,  0},
 {125, 15},
 {  0,  1},
 {125, 14},
 {  5,  2},
 {  1,  2},
 {  0,  1},
 {  1,  1},
 {  1,  0},
 {  0,  1},
 {  4,  0},
 {120, 12},
 { 23,  0},
 { 97, 12},
 {  1,  2},
 {  0,  1},
 {  1,  1},
 {  0,  1},
 {  1,  0},
 { 96, 10},
 { 94,  9},
 { 72,  9},
 { 71,  7},
 { 30,  5},
 { 29,  2},
 {  1,  1},
 {  1,  0},
 {  0,  1},
 { 28,  1},
 {  6,  1},
 {  0,  1},
 {  6,  0},
 { 22,  0},
 {  1,  3},
 {  1,  0},
 {  0,  3},
 { 41,  2},
 { 38,  1},
 { 26,  0},
 { 12,  1},
 {  0,  1},
 { 12,  0},
 {  3,  1},
 {  0,  1},
 {  3,  0},
 {  1,  2},
 {  1,  0},
 {  0,  2},
 { 22,  0},
 {  2,  1},
 {  2,  0},
 {  0,  1},
 { 38, 67},
 { 32, 32},
 { 16,  4},
 {  0,  1},
 { 16,  3},
 {  7,  3},
 {  5,  0},
 {  2,  3},
 {  0,  2},
 {  2,  1},
 {  2,  0},
 {  0,  1},
 {  9,  0},
 { 16, 28},
 { 16, 22},
 {  0,  3},
 { 16, 19},
 { 11,  8},
 {  0,  2},
 { 11,  6},
 {  8,  6},
 {  7,  3},
 {  0,  1},
 {  7,  2},
 {  0,  1},
 {  7,  1},
 {  6,  0},
 {  1,  1},
 {  0,  1},
 {  1,  0},
 {  1,  3},
 {  0,  3},
 {  1,  0},
 {  3,  0},
 {  5, 11},
 {  0,  6},
 {  5,  5},
 {  5,  3},
 {  2,  0},
 {  3,  3},
 {  0,  1},
 {  3,  2},
 {  1,  0},
 {  2,  2},
 {  0,  1},
 {  2,  1},
 {  0,  1},
 {  2,  0},
 {  0,  2},
 {  0,  6},
 {  6, 35},
 {  4, 12},
 {  1, 12},
 {  1,  0},
 {  0, 12},
 {  3,  0},
 {  2, 23},
 {  0, 14},
 {  2,  9},
 {  1,  0},
 {  1,  9},
 {  1,  2},
 {  1,  0},
 {  0,  2},
 {  0,  7},
 {157,667},
 {152,  5},
 {146,  2},
 {130,  0},
 { 16,  2},
 {  0,  1},
 { 16,  1},
 { 12,  0},
 {  4,  1},
 {  0,  1},
 {  4,  0},
 {  6,  3},
 {  0,  3},
 {  6,  0},
 {  5,662},
 {  5, 58},
 {  4, 58},
 {  2, 11},
 {  1, 11},
 {  0,  9},
 {  1,  2},
 {  1,  0},
 {  0,  2},
 {  1,  0},
 {  2, 47},
 {  2, 20},
 {  1, 20},
 {  0, 14},
 {  1,  6},
 {  1,  0},
 {  0,  6},
 {  1,  0},
 {  0, 27},
 {  1,  0},
 {  0,604}};
