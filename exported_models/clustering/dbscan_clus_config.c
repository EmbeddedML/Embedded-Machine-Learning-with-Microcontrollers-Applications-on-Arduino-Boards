#include "dbscan_clus_config.h"
float CORE_POINTS[NUM_CORE_POINTS][NUM_FEATURES] = {{-2.98837186, 8.82862715},
 {-0.92998481, 9.78172086},
 {-6.63466062,-7.38705277},
 {-6.19767422,-7.19037635},
 {-3.49973395, 8.4479884 },
 {-6.56871963,-5.40475338},
 { 3.40292813, 0.65271307},
 { 3.0323956 , 2.15780354},
 {-6.87438349,-6.833129  },
 {-3.03895783, 9.52755356},
 {-6.52261171,-7.57301919},
 {-6.13233359,-6.26973933},
 {-2.17793419, 9.98983126},
 {-4.23411546, 8.4519986 },
 { 3.97809237, 2.82560302},
 {-4.42796884, 8.98777225},
 { 5.08369826, 2.74780374},
 { 3.92457513, 2.65276743},
 {-3.34841515, 8.70507375},
 { 4.91656964, 2.80035293},
 { 4.89037169, 2.31961789},
 { 5.72293008, 3.02697174},
 {-2.40954626, 8.51081047},
 {-2.62484591, 8.71318243},
 {-7.86113584,-6.41800612},
 {-2.54502366,10.57892978},
 { 4.68545068, 1.32156934},
 { 4.70415886, 0.89542491},
 {-3.05358035, 9.12520872},
 {-1.69568041, 7.78342181},
 { 4.9976662 , 2.53395421},
 {-3.31769123, 8.51252908},
 {-2.96983639,10.07140835},
 {-6.1894832 ,-7.28133007},
 {-3.6601912 , 9.38998415},
 { 5.90678999, 1.26550022},
 {-5.57414838,-6.85910575},
 { 5.14486612, 2.83892488},
 {-6.89187396,-7.77736396},
 {-2.97867201, 9.55684617},
 { 3.75036441, 1.1573594 },
 { 4.81305976, 2.35848706},
 { 3.9095122 , 2.18962827},
 {-6.33252981,-7.08230225},
 { 4.39449072, 1.21943352},
 {-6.46669574,-7.44383415},
 {-2.1475616 , 8.36916637},
 {-6.55690863,-7.70734054},
 {-3.52202874, 9.32853346},
 {-7.32969266,-6.25725966},
 {-7.70512439,-7.20149543},
 { 4.86733877, 3.28031244},
 {-2.26723535, 7.10100588},
 { 5.79847442, 1.15248737},
 {-2.70155859, 9.31583347},
 {-7.03141229,-6.29179239},
 {-7.46899195,-6.0305075 },
 {-3.83738367, 9.21114736},
 {-8.47405485,-7.47948462},
 { 4.56277713, 2.31432166},
 { 3.71294836, 1.91364433},
 {-5.98002732,-6.57281007},
 {-2.16557933, 7.25124597},
 { 3.95985411, 2.20542338},
 { 4.93295131, 1.25881827},
 { 6.50565335, 2.4470026 },
 { 4.16794697, 3.06212028},
 {-6.99416704,-5.64229328},
 {-2.18511365, 8.62920385},
 {-6.80382263,-7.5572713 },
 {-6.00730655,-6.69676759},
 {-6.98838734,-6.47839787},
 {-2.30033403, 7.054616  },
 { 3.43958243, 1.63866845},
 { 5.80304259, 1.98340274},
 {-5.72151632,-6.0884469 },
 {-7.88564457,-8.09429821},
 {-3.18611962, 9.62596242},
 {-2.44166942, 7.58953794},
 {-6.05421084,-6.06659996},
 {-6.02196757,-7.04004812},
 { 4.85397258, 0.72743091},
 {-2.41743685, 7.02671721},
 {-6.59863532,-7.50280911},
 {-6.80982511,-7.26542319},
 { 4.65288073, 3.42670376},
 { 3.86705362, 1.73635108},
 { 6.27229014, 0.54302831},
 {-2.41212007, 9.98293112},
 { 4.41641605, 2.68717018},
 {-1.71816568, 8.10489867},
 {-6.85511702,-6.3821113 },
 {-2.97261532, 8.54855637},
 {-2.67048333, 9.41833699},
 {-1.03130358, 8.49601591},
 {-1.59379551, 9.34303724},
 {-2.52269485, 7.9565752 },
 {-2.14780202,10.55232269},
 {-7.3506655 ,-6.64805966},
 { 4.89976163, 2.75499256},
 {-3.92456837, 8.59364081},
 {-6.55546084,-7.01025265},
 { 3.8473581 , 1.85843324},
 {-7.09730839,-5.78133274},
 { 4.15451529, 2.05504382},
 { 3.44857534, 2.62972329},
 {-2.50408417, 8.77969899},
 {-6.90052879,-6.76278221},
 {-7.70184759,-6.63642238},
 {-3.4172217 , 7.60198243},
 { 6.08115213, 0.53730753},
 {-7.71934903,-7.47950224},
 {-3.29245092, 8.69222461},
 {-6.25550737,-6.25176408},
 {-6.8986434 ,-7.88263896},
 {-3.98771961, 8.29444192},
 { 4.32460959, 2.7321389 },
 {-3.21125072, 8.68662398},
 { 3.26220947, 1.03534464},
 { 4.69808755, 0.83019939},
 { 4.16493353, 1.31984045},
 { 4.38731068, 0.7253865 },
 {-1.6966718 ,10.37052616},
 {-7.77804186,-6.38819042},
 {-1.4781981 , 9.94556625},
 {-1.92234053,11.20474175},
 {-2.25164723, 8.93984021},
 {-7.63875985,-6.72971581},
 {-5.70018707,-7.34928525},
 { 4.19983435, 2.10391026},
 { 5.5938806 , 2.62456094},
 {-6.89814033,-7.16876823},
 {-7.08774944,-7.37311053},
 {-2.90130578, 7.55077118},
 {-5.42848358,-5.92083877},
 {-2.42215055, 8.71527878},
 { 6.40533308, 2.37815139},
 { 3.66519717, 2.76025429},
 { 3.79308512, 0.45832246},
 {-6.65553471,-6.86751719},
 {-6.36028068,-5.34737068},
 {-4.05986105, 9.0828491 },
 { 3.37899488, 2.89103163},
 {-2.85191214, 8.21200886}};
int LABELS[NUM_CORE_POINTS] = {0,0,1,1,0,1,2,2,1,0,1,1,0,0,2,0,2,2,0,2,2,2,0,0,1,0,2,2,0,0,2,0,0,1,0,2,1,
 2,1,0,2,2,2,1,2,1,0,1,0,1,1,2,0,2,0,1,1,0,1,2,2,1,0,2,2,2,2,1,0,1,1,1,0,2,
 2,1,1,0,0,1,1,2,0,1,1,2,2,2,0,2,0,1,0,0,0,0,0,0,1,2,0,1,2,1,2,2,0,1,1,0,2,
 1,0,1,1,0,2,0,2,2,2,2,0,1,0,0,0,1,1,2,2,1,1,0,1,0,2,2,2,1,1,0,2,0};
