#include "SVM_config.h"
const float coeffs[NUM_CLASSES - 1][NUM_SV] = {{ 1.        , 1.        , 1.        , 0.65077389, 0.00302028, 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 0.02315947,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 0.30593343,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   0.85014216, 1.        , 1.        , 1.        , 0.35946606, 1.        ,
   1.        , 1.        , 1.        , 1.        , 0.11170725, 1.        ,
   1.        , 1.        , 1.        , 0.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 0.3552215 ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 0.74948998, 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-0.09085583,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-0.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-0.74566612,-1.        ,
  -1.        ,-0.56529863,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-0.        ,-1.        ,-1.        ,-0.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-0.00709343,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        },
 { 0.        , 0.        , 0.        , 0.16142269, 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.12750729,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.0345108 , 0.        ,
   0.00244724, 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.14482232, 0.        , 0.        , 0.        , 0.12731557, 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.08647778, 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.0509324 , 0.15122683,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.11333707,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.10521105, 0.        , 0.        ,
   0.        , 0.10331156, 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.09866006, 0.        , 0.10508636, 0.        , 0.        ,
   0.06209382, 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.05213073, 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.11654051, 0.        ,
   0.        , 0.02948651, 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.10074074, 0.13398554, 0.        , 0.09275312,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        , 0.        ,
   0.        , 0.        , 0.        , 0.        , 0.        ,-1.        }};
const float SV[NUM_SV][NUM_FEATURES] = {{-2.70255383e+00,-4.72532919e+00},
 {-2.49731901e+00, 3.77024549e-01},
 {-3.01508427e+00, 1.29986341e+00},
 {-1.88553527e+00,-1.33454663e+00},
 {-8.97569199e+00, 2.85017097e+00},
 {-2.91536606e+00, 1.33453869e+00},
 {-1.43058420e+00,-1.06259901e+00},
 {-2.33699894e+00,-3.84644146e-01},
 { 2.66002597e-01,-2.58447929e+00},
 {-1.92960202e+00, 8.39340015e-01},
 {-1.48692388e+00,-1.05780660e-01},
 {-4.02920180e-01,-1.17635847e+00},
 {-2.16533521e+00, 2.04021104e-01},
 {-5.73979458e+00,-2.28865303e+00},
 {-2.02828334e+00,-8.66052152e-01},
 { 5.71642803e-01,-1.91128496e+00},
 {-1.12295635e+00,-1.19640177e+00},
 { 4.99423599e+00,-4.55678945e+00},
 {-7.56294832e-01,-1.86969635e+00},
 {-1.90522602e+00,-1.36724760e+00},
 {-1.33506937e+00,-1.02178657e+00},
 {-2.37133086e+00, 5.25220339e-01},
 { 2.15346275e-02,-3.73274695e-01},
 {-1.75212374e+00,-1.49877758e+00},
 {-1.56541915e+00,-1.65324206e+00},
 {-3.66369968e-01,-1.50666275e+00},
 {-2.13510939e+00,-1.81062496e-01},
 {-2.22482100e-01,-2.28252131e+00},
 {-7.59911152e-01,-2.13748235e+00},
 {-1.16027340e+00,-1.03172264e+00},
 {-2.21893645e+00, 8.30574997e-01},
 {-1.12937556e+00,-1.45141461e+00},
 {-9.35694096e-01,-9.71348832e-01},
 {-1.70266845e+00,-1.59305562e+00},
 {-1.10607131e+00, 6.31705039e-01},
 {-6.27958027e+00,-1.81634337e+00},
 {-1.24459512e+00,-1.92339870e+00},
 { 6.61433370e-01,-1.45697341e-01},
 {-1.39352252e+00,-1.42067246e+00},
 { 2.38719414e-02,-1.96847590e+00},
 {-3.07344780e-01,-1.41952531e+00},
 {-2.33841058e+00,-4.33380355e+00},
 { 1.38474229e+00,-2.35104330e+00},
 {-2.90900157e-01,-1.44827133e+00},
 {-7.62475312e-01,-1.63413164e+00},
 { 7.85916359e-01,-2.23900197e+00},
 {-2.11056896e+00,-7.35804412e-01},
 {-8.55764556e-01,-7.73395060e-01},
 {-8.84516337e-01,-1.72145093e+00},
 {-2.53677253e+00, 1.04716173e-01},
 {-1.78563541e+00,-1.27797041e+00},
 {-4.29625385e+00, 3.45178878e+00},
 { 1.87680420e-01,-1.25071526e+00},
 { 1.13146358e+00,-1.94603832e+00},
 {-1.76147921e+00,-7.57700166e-01},
 {-2.15047671e+00,-6.70735327e-01},
 {-1.69080286e+00,-1.24657528e+00},
 {-1.39468034e+00,-1.72755676e+00},
 {-3.04324961e+00,-3.61808683e+00},
 {-2.47358382e+00, 7.95161543e-02},
 {-1.15291227e+00,-7.57544653e-01},
 {-1.52148726e+00, 1.21071543e-01},
 {-1.88929581e+00,-1.34236475e+00},
 {-6.69618219e-01,-8.26091506e-01},
 {-1.80932095e+00, 1.02056559e+00},
 {-1.72054905e+00,-1.04338773e-01},
 {-1.65197607e+00,-2.61555163e-01},
 {-1.79605000e+00,-1.36227086e+00},
 {-3.89393752e+00,-2.81184935e+00},
 { 3.03813641e-01,-2.36006465e+00},
 {-1.53213656e+00,-1.09799256e+00},
 {-1.49835133e+00,-1.81363145e+00},
 {-6.98672703e-01, 3.78008248e-01},
 {-3.58877489e+00,-3.23710762e+00},
 {-8.98915949e-01,-7.03919881e-01},
 {-8.68612812e-01,-1.38085057e+00},
 {-1.13569400e+00,-1.30400151e+00},
 {-6.56981802e-01,-8.05130129e-01},
 {-1.36578992e+00,-1.47771389e+00},
 {-3.01266977e+00,-4.24273836e+00},
 {-1.18042630e+00, 1.15486257e-01},
 {-8.93942556e-02,-2.42708267e+00},
 {-1.84296902e+00,-8.38148378e-01},
 {-2.07748403e+00, 2.45104189e-01},
 {-1.55614519e+00,-1.62461292e+00},
 {-1.87763243e+00,-7.32632651e-01},
 {-2.44528941e+00,-3.79561641e-02},
 { 1.30913830e+00,-2.35005584e+00},
 {-9.89151689e-01,-1.76116444e+00},
 {-3.61060679e+00,-3.20024012e+00},
 {-2.49694722e+00, 1.17941758e+00},
 {-1.67246899e-01,-2.35608663e+00},
 {-1.41498252e+00,-6.64700966e+00},
 {-4.68624671e-01,-1.42317021e+00},
 {-9.39424773e-02,-2.09442681e+00},
 {-2.12083455e+00, 4.23735138e-01},
 { 3.99202959e+00,-8.06881413e+00},
 {-1.55776359e+00,-1.76759880e+00},
 {-1.53609428e+00,-5.34719827e-01},
 {-2.34561683e-01,-2.14129082e+00},
 {-8.90209010e-01,-2.09503300e+00},
 {-1.96807858e+00,-7.73793484e-01},
 {-2.48750211e+00, 1.59568747e-02},
 {-1.11361472e+00,-1.22789600e+00},
 {-9.10441366e-01, 3.82760124e-01},
 {-3.97858815e-01,-2.06241812e+00},
 {-2.02398282e+00,-1.27958592e+00},
 {-1.35089445e+00,-1.10168507e+00},
 {-5.36675903e+00, 3.84918586e+00},
 {-2.02915159e+00,-4.57427427e-01},
 {-7.36297469e-01,-1.70979740e+00},
 {-1.16722306e+00,-1.88335870e+00},
 {-9.91322450e-01,-2.02409307e+00},
 {-3.85272923e+00,-2.91866284e+00},
 {-8.13520402e-01,-9.73739320e-01},
 { 1.67313450e-01,-2.71072889e+00},
 {-2.16050112e+00, 8.47339915e-01},
 {-1.48850821e+00, 5.50283888e-01},
 { 7.00342565e-01,-2.18967382e+00},
 {-1.02625692e+00,-1.39364816e+00},
 { 2.31415782e-01,-2.76076847e+00},
 {-1.70674629e+00,-8.07404013e-01},
 {-2.72083450e+00, 1.42115741e+00},
 { 1.04291239e+00,-1.42507227e+00},
 {-4.27389075e-01, 1.87597420e+00},
 {-1.18445767e+00,-1.46476711e+00},
 {-1.12547801e+00,-5.76879679e-01},
 {-9.11563487e-01,-3.46376826e-01},
 {-1.47275183e+00,-1.95914200e+00},
 {-1.42965822e+00,-1.60655425e+00},
 {-2.54302713e+00,-5.12126002e+00},
 {-1.58432637e+00,-5.67094619e-01},
 { 9.56101574e-01,-2.63804036e+00},
 {-2.59222342e+00, 1.71837503e+00},
 {-2.17176049e+00, 1.14407035e-01},
 {-1.93809333e+00,-1.05922394e+00},
 {-1.05556562e+00,-9.47252917e-01},
 { 5.18744817e-01,-2.77064508e+00},
 {-3.54103498e+00,-3.25269663e+00},
 {-3.90968269e+00,-2.97776645e+00},
 {-1.41222634e+00,-1.63343478e+00},
 { 1.60119279e+00,-2.97910993e+00},
 { 6.55215352e-01,-2.03569842e+00},
 {-5.40640192e+00,-2.75193556e+00},
 { 5.15240733e-01,-6.68340606e-01},
 {-1.43753647e+00, 9.08427166e-02},
 {-1.73141970e+00,-1.24219130e+00},
 {-2.03379255e+00,-7.96393679e-01},
 {-2.05112050e+00, 8.93979021e-01},
 {-1.98176616e+00,-9.28065826e-01},
 {-1.91369442e+00, 9.72998592e-01},
 {-1.63627710e+00,-7.39304382e-01},
 {-2.82397792e+00, 2.48617394e+00},
 {-6.18846686e-01,-1.43678444e+00},
 {-3.92903642e-01,-1.23545955e-01},
 { 3.07746047e+00, 3.54288774e+00},
 {-2.52044711e+00,-2.86979420e+00},
 { 3.02329784e+00, 2.92977220e+00},
 { 3.51771377e+00, 2.53540051e+00},
 {-3.22344547e+00,-1.77570154e+00},
 { 3.72971867e+00, 2.13155929e+00},
 { 5.94340927e-01,-8.49800869e-01},
 {-6.88371957e+00,-3.61983311e+00},
 { 3.03380986e+00, 3.67855575e+00},
 {-1.07995444e+00,-2.41710309e+00},
 { 3.92992919e+00, 2.43573104e+00},
 { 4.63685453e+00, 3.46048028e+00},
 { 2.27583014e+00, 3.56767708e+00},
 { 2.64542721e+00, 2.88649939e+00},
 {-3.07399208e+00,-4.64655093e+00},
 { 4.77124627e+00, 3.35143614e+00},
 {-8.94721158e-01,-5.25257114e-01},
 { 7.02533006e+00, 6.79605213e+00},
 { 2.84567881e+00, 3.52998373e+00},
 { 1.51119204e+00, 3.76061478e+00},
 { 4.51639222e+00, 8.35000447e-01},
 { 4.38446643e+00, 3.05524272e+00},
 { 2.95550856e+00, 5.10410049e+00},
 { 2.88626948e+00, 5.35741421e+00},
 { 5.87213855e-01,-2.93107889e+00},
 { 5.09345539e+00, 4.80639742e+00},
 {-1.80561135e-01,-2.07861640e+00},
 {-8.31437884e-01, 4.67452847e-01},
 {-2.77902268e-01,-7.50358819e-01},
 {-7.75200583e-01,-5.00690939e-01},
 {-7.11605825e-01,-5.21681897e-01},
 { 4.02632719e+00, 2.47047416e+00},
 { 3.60732993e+00, 3.19998144e+00},
 {-8.78353590e-02,-7.54106231e-01},
 { 6.19312819e+00, 7.43262365e+00},
 {-1.75322005e+00,-2.84869105e+00},
 { 3.04327399e+00, 3.51365204e+00},
 { 4.79803708e+00, 4.39761822e+00},
 { 5.33726949e+00, 7.20163052e+00},
 { 6.11036189e+00, 5.44389431e+00},
 { 3.81213838e+00, 5.07113847e+00},
 { 3.05021440e+00, 3.30159101e+00},
 { 3.66757814e+00, 2.10873332e+00},
 { 4.50324611e+00, 5.48318102e+00},
 { 5.45934314e+00, 3.93862177e+00},
 { 2.85330003e+00, 2.76252992e+00},
 { 3.33178786e+00, 3.10156393e+00},
 {-2.66195296e+00,-3.47651107e-02},
 {-1.31336965e+00,-3.52554135e+00},
 { 3.60460888e+00, 3.15761436e+00},
 { 3.09853624e+00, 4.17039960e+00},
 { 4.24083957e+00, 3.26426705e+00},
 {-2.80511881e+00,-6.50934088e-01},
 {-1.89965566e+00,-2.16963439e+00},
 { 7.39999753e+00, 3.39472468e+00},
 { 4.38403680e+00, 3.94519544e+00},
 { 1.73747782e+00, 3.59290302e+00},
 { 6.96320539e+00, 5.22592346e+00},
 { 4.60815202e+00, 3.65073631e+00},
 { 3.02698270e+00, 4.83641935e+00},
 { 5.89723444e+00, 5.00238369e+00},
 {-2.06775060e+00,-2.81865684e+00},
 {-4.25378288e+00,-5.84264338e+00},
 { 4.35086293e+00, 3.33388859e+00},
 { 4.20483485e+00, 2.90640722e+00},
 { 2.71171311e+00, 3.36516589e+00},
 {-2.55891568e+00,-1.04352482e+00},
 { 3.76986175e+00, 3.88037273e+00},
 { 1.31654339e-01,-3.86664860e-01},
 {-2.18299018e+00,-1.01169652e+00},
 {-4.66149267e+00,-2.63403668e-01},
 { 2.89776103e+00, 2.83353987e+00},
 {-1.83629474e+00,-5.26428355e-01},
 { 3.40246387e+00, 2.92034732e+00},
 { 8.49697019e+00, 7.79024500e+00},
 { 2.44657573e+00, 3.68314876e+00},
 { 3.56873613e+00, 2.45244291e+00},
 { 6.07516294e+00, 5.33348127e+00},
 { 4.28580419e+00, 3.21142174e+00},
 { 3.92522421e+00, 4.51946479e+00},
 { 2.61868221e+00, 3.39896154e+00},
 {-2.45910414e+00,-1.90810649e+00},
 {-3.68305753e+00,-1.99936756e+00},
 { 7.08012145e+00, 6.25334712e+00},
 { 2.42943799e-01,-1.32159149e+00},
 { 3.53509056e-01,-1.05796182e+00},
 { 4.19153450e+00, 5.22499103e+00},
 { 3.09771549e+00, 3.38676523e+00},
 { 2.66989346e+00, 4.32695282e+00},
 { 2.94358066e+00, 3.45051063e+00},
 { 2.70795839e+00, 2.60670176e+00},
 { 6.09395394e+00, 4.95858873e+00},
 { 2.33030604e+00, 4.34184079e+00},
 {-1.52494429e-01,-3.76157740e-01},
 { 5.25822700e+00, 3.34526233e+00},
 {-1.68998804e+00,-1.54240646e+00},
 { 2.62102669e+00, 3.83666754e+00},
 { 4.13096266e+00, 2.47084569e+00},
 { 3.85189380e+00, 5.03241045e+00},
 { 2.92428083e+00, 2.71031142e+00},
 { 3.32972928e+00, 2.65162382e+00},
 { 8.62183318e+00, 8.88183570e+00},
 { 3.90559118e+00, 3.94806210e+00},
 { 3.11560895e+00, 3.16431589e+00},
 { 3.14068478e+00, 4.31475330e+00},
 { 3.12775393e+00, 3.46632302e+00},
 { 6.92590253e+00, 4.39958612e+00},
 { 4.51090151e+00, 4.46023649e+00},
 { 2.82757789e+00, 3.01415221e+00},
 { 6.16556599e+00, 4.99389426e+00},
 { 1.01462640e-01,-5.58261452e-01},
 { 3.06416612e+00, 3.27962845e+00},
 { 2.76013522e+00, 2.98365661e+00},
 { 5.25347567e+00, 5.23637931e+00},
 { 3.76628806e+00, 4.68713377e+00},
 { 4.47656615e+00, 2.69677143e+00},
 {-1.94380411e+00, 4.39165940e-01},
 { 3.97592947e+00, 5.13580830e+00},
 { 3.48677979e+00, 3.53507860e+00},
 { 6.09542213e+00, 3.55958666e+00},
 { 3.78186150e+00, 1.87543499e+00},
 { 3.04118730e+00, 3.50718302e+00},
 {-8.16146794e-01, 3.82091618e-02},
 {-1.09440010e+00,-6.16362713e-01},
 { 4.42852664e+00, 6.55468335e+00},
 {-7.41995296e-01, 8.32609711e-02},
 { 4.95041602e+00, 3.06906844e+00},
 {-1.17049335e-01,-1.96800089e+00},
 {-1.27360676e+00,-2.48526548e+00},
 { 2.82411412e+00, 3.52224750e+00},
 { 4.35356177e+00, 4.09687754e+00},
 { 4.29883170e+00, 4.00663922e+00},
 { 3.10327429e+00, 3.61679734e+00},
 {-1.30418207e+00,-3.89598830e-02},
 { 1.11687240e-01,-5.91984188e-01},
 { 2.11732061e+00, 3.89519808e+00},
 { 5.26161941e+00, 3.99579950e+00},
 {-1.29935749e+00,-8.56521773e-01},
 {-3.81388957e+00,-1.55900751e+00},
 { 5.56601402e+00, 5.28843126e+00},
 {-1.54041612e-01,-2.61452579e-01},
 { 2.29923487e+00, 4.97272173e+00},
 { 5.41684564e+00, 5.28695753e+00},
 { 4.62408074e+00, 3.89545190e+00},
 { 3.63444962e+00, 6.04216894e+00},
 { 5.86609698e+00, 3.89027349e+00},
 { 2.97872540e+00, 4.50888300e+00},
 { 4.91182089e+00, 1.79267946e+00},
 { 3.00564575e+00, 5.30864807e+00},
 { 3.29369464e+00, 3.01584894e+00},
 { 1.44560287e+00, 3.55258795e+00},
 { 2.93837218e+00, 3.31099937e+00},
 { 3.30770616e+00, 1.94364373e+00},
 { 2.72433783e+00, 2.92711974e+00},
 {-1.40895207e+00, 6.45358228e-01},
 { 3.04629849e+00, 4.63167526e+00},
 {-1.93791457e+00,-1.93835817e+00},
 { 1.69164156e+00,-1.48593981e+00},
 { 5.68282155e+00, 6.26074390e+00},
 {-2.01201194e+00,-2.72724578e+00},
 { 6.08342969e+00, 6.38507255e+00},
 { 3.51414373e+00, 2.64840897e+00},
 {-1.29044241e+00, 1.29703130e+00},
 { 6.83915439e+00, 5.35237765e+00},
 {-2.66518999e+00,-3.53866723e+00},
 {-3.69253217e+00,-1.80973442e+00},
 { 4.08780942e+00, 4.96845607e+00},
 {-1.21201408e+00, 2.88991129e-01},
 {-7.44291181e-01,-8.31978092e-01},
 { 6.32036626e+00, 3.04484419e+00},
 {-1.61829314e+00,-6.13424958e-01},
 {-8.06378898e-01, 6.61992844e-02},
 { 3.19941193e+00, 2.09101707e+00},
 { 7.86600143e+00, 7.44653514e+00},
 { 2.70378134e+00, 3.08462163e+00},
 {-2.96130259e-01, 4.75303142e-02},
 {-3.13333733e+00,-4.50165924e-01},
 { 3.84612490e+00, 3.98425167e+00},
 { 2.94349484e+00, 2.76851568e+00},
 {-2.88902409e+00,-9.35352995e-01},
 { 7.09877597e+00, 1.00021168e+01},
 { 1.98644461e+00, 4.04054390e+00},
 {-2.58400201e+00,-2.58303636e+00},
 {-1.81652214e+00,-9.64998241e-01},
 { 8.50439865e+00, 5.50527573e+00},
 { 2.62345849e+00, 2.84293126e+00},
 { 3.95556272e+00, 2.18053326e+00},
 { 3.40216280e-01,-8.54711362e-01},
 { 3.61193465e+00, 3.40755439e+00},
 { 3.80461507e+00, 4.47269844e+00},
 { 3.74212446e+00, 1.86680984e+00},
 {-3.60554829e-01,-1.08632409e+00},
 {-2.07076212e+00, 1.27225842e+00},
 { 3.15297885e+00, 3.47006873e+00},
 {-1.51553002e+00, 8.25569172e-01},
 { 3.98966650e+00, 3.55414312e+00},
 { 4.64074817e+00, 3.45716356e+00},
 {-1.52654138e-01,-2.23739179e+00},
 { 3.58368291e+00, 3.69964214e+00},
 { 2.22410194e-01,-1.55648401e+00},
 { 3.92451841e+00,-3.05586650e-01},
 {-1.91279254e+00, 3.63974608e+00},
 {-1.56258434e+00,-3.49040351e+00},
 { 2.82189943e+00, 6.23252529e+00},
 {-1.96415746e-01,-1.08357093e+00},
 { 3.14823129e+00, 2.93491455e+00},
 { 3.37588008e+00, 3.88700135e+00},
 { 7.09495164e-02,-2.44025119e-01},
 { 2.41239924e+00, 3.41977490e+00},
 { 5.15905782e+00, 5.61385930e+00},
 { 3.87556492e+00, 2.87177170e+00},
 {-1.63152279e+00,-6.44538514e-01},
 { 8.28261420e-02,-2.51713553e-01},
 { 4.89597490e+00, 6.05264554e+00},
 { 6.39025814e+00, 6.45663412e+00},
 { 6.13394100e+00, 5.05528527e+00},
 { 3.48882299e+00, 3.73888547e+00},
 { 2.20425628e+00, 4.96658184e+00},
 { 6.70201635e+00, 6.58029542e+00},
 {-8.04339114e-01,-1.32350443e-01},
 {-1.57327469e+00,-2.91379742e+00},
 { 8.02952103e+00, 7.09861720e+00},
 { 5.08975151e-01,-1.34678303e+00},
 {-9.82842199e-01,-3.02735452e-01},
 {-3.54000394e-01,-8.29536406e-01},
 { 5.13788260e+00, 2.43956010e+00},
 { 8.76526249e+00, 8.23518405e+00},
 {-3.35630569e-01,-1.03128568e+00},
 { 3.18502561e+00, 3.06973514e+00},
 {-1.11893181e-01,-7.66588518e-01},
 { 5.64298277e+00, 2.86741090e+00},
 { 5.80842472e+00, 3.73303059e+00},
 { 3.68465747e+00, 4.54484749e+00},
 { 3.68635994e+00, 3.25682647e+00},
 {-2.32207575e+00, 1.58067290e+00},
 {-4.43634686e-01,-1.09035689e+00},
 { 3.01000233e+00, 4.77723033e+00},
 {-1.16889860e+00, 4.85151429e-01},
 { 4.99140401e+00, 3.88158308e+00},
 { 5.06002743e+00, 5.78729348e+00},
 { 2.97182211e+00, 4.08993555e+00},
 { 4.86176390e+00, 5.92324314e+00},
 { 1.68028593e+00, 3.89128631e+00},
 { 3.15939381e+00, 2.57445293e+00},
 { 4.04416107e+00, 5.30804046e+00},
 { 2.70559738e+00, 2.63459733e+00},
 { 1.59005335e+00, 4.25964683e+00},
 { 2.50732146e+00, 2.99146026e+00},
 { 2.74049010e+00, 3.10858232e+00},
 { 5.75789725e+00, 6.63430158e+00},
 { 5.46129045e+00, 6.88612998e+00},
 { 2.86672220e+00, 4.07520336e+00},
 {-6.29132379e-01,-3.65500104e-01},
 { 5.37261666e+00, 4.99551332e+00},
 {-2.52972928e+00,-2.52011285e+00},
 {-4.74332110e-01, 1.79718503e-01},
 {-1.79891233e+00,-3.39823009e+00},
 { 5.47574077e+00, 3.16876839e+00},
 { 3.32765869e+00, 2.23508149e+00},
 {-5.57028888e-01, 1.81392182e-01},
 {-1.26018978e+00,-4.71495518e-01},
 {-3.03765591e+00,-8.13070080e-01},
 { 5.28116446e+00, 5.64599759e+00},
 {-2.44538739e+00,-9.31315420e-01},
 { 3.19351492e+00, 4.85204355e+00},
 { 4.72920323e+00, 4.99716817e+00},
 {-5.62165853e-02, 4.00031792e+00},
 { 5.95621311e+00, 4.08597514e+00},
 { 3.10093510e+00, 3.74919179e+00},
 {-9.35908922e-03,-8.94200395e-01},
 { 5.77412443e+00, 7.03644769e+00},
 { 4.96787657e+00, 4.40829954e+00},
 { 3.03335850e+00, 3.68062508e+00},
 { 3.09040838e+00, 5.00729397e+00},
 {-2.14906695e+00, 1.13196610e+00},
 { 6.87567378e+00, 4.21705922e+00},
 { 4.11265609e+00, 1.84061296e+00},
 { 3.32535241e+00, 4.40585368e+00},
 { 1.30245519e+00,-1.67537927e+00},
 { 6.96971169e+00, 5.05281945e+00},
 { 3.81255612e+00, 4.88381604e+00},
 { 2.81048463e+00, 4.49608483e+00},
 { 4.82127324e+00, 5.31834088e+00},
 { 3.17101081e+00, 2.86178838e+00},
 { 3.00729756e+00, 5.31128673e+00},
 { 6.32446371e+00, 6.22740052e+00},
 { 2.32256646e+00, 4.49158499e+00},
 {-1.15207016e-01,-1.68096320e+00},
 { 6.41090052e+00, 6.61605164e+00},
 { 3.42528957e+00, 5.16477306e+00},
 { 5.58876166e+00, 4.43015609e+00},
 {-4.76780935e-01,-2.12827061e+00},
 { 4.94015770e+00, 2.15567989e+00},
 {-2.68980173e+00,-7.94103531e-01},
 { 4.36853981e+00, 5.22345358e+00},
 {-1.06566376e+00,-2.39864208e+00},
 { 2.42486043e+00, 3.39546130e+00},
 { 3.08943053e+00, 3.77938614e+00},
 {-1.79545669e-01,-1.06486015e-01},
 {-1.92972184e+00,-1.41968870e+00},
 {-1.97888544e+00,-5.69114238e-01},
 { 3.72647487e+00, 2.05200279e+00},
 { 3.67993351e+00, 3.73358572e+00},
 {-5.92472828e-01,-3.06400408e+00},
 {-1.68478164e-01,-7.00647753e-01},
 { 2.70052009e+00, 2.69951799e+00},
 { 3.57876586e+00, 2.26821655e+00},
 { 4.09421185e+00, 2.36786379e+00},
 {-1.38304685e+00,-1.83846344e+00},
 { 7.81105273e-01,-1.15883246e+00},
 { 3.73068373e+00, 2.86605442e+00},
 {-1.43051284e+00, 9.78136960e-01},
 { 3.04292140e+00, 5.74607620e+00},
 { 2.36790027e-02,-1.36389860e+00},
 { 4.44596355e+00, 4.10078163e+00},
 { 2.89162918e+00, 3.14820517e+00},
 { 4.40189016e+00, 5.37728430e+00},
 { 5.42727557e+00, 3.95360223e+00},
 {-4.67536393e-01,-8.35840426e-02},
 { 2.43957998e+00, 2.84592441e+00},
 { 2.02598529e+00, 3.22121916e+00},
 { 4.23836704e+00, 4.18885880e+00},
 {-2.67341435e+00,-1.52202989e+00},
 {-1.66926179e+00, 3.62023223e-01},
 { 4.31099035e+00, 4.65960075e+00},
 { 4.93955239e+00, 3.50288277e+00},
 { 6.14121359e+00, 4.28036902e+00},
 { 1.48438039e-01,-1.73639383e+00},
 { 3.52797219e+00, 1.81751350e+00},
 { 2.54364969e+00, 3.37598971e+00},
 { 4.68960661e+00, 4.84433355e+00},
 { 7.06436910e-01,-2.42861836e+00},
 { 2.57072304e+00, 4.03921249e+00},
 {-7.22575986e-01, 7.41487664e-01},
 { 4.02741672e+00, 4.59017055e+00},
 { 3.51285715e+00, 3.18822633e+00},
 { 3.56243792e+00, 4.46526044e+00},
 { 3.76832097e+00, 3.44230992e+00},
 { 2.68166760e+00, 3.03550413e+00},
 {-1.00023560e+00, 1.08243524e+00},
 { 5.52792741e+00, 6.60232285e+00},
 {-1.89155026e+00,-2.19991372e+00},
 { 3.63315330e+00, 4.35951384e+00},
 { 6.33813172e+00, 5.37991060e+00},
 { 3.82236727e+00, 1.83459532e+00},
 { 2.63671024e+00, 3.81522236e+00},
 { 2.86304190e+00, 3.23905049e+00},
 { 4.74666445e+00, 4.82435302e+00},
 { 4.56628337e+00, 3.62190046e+00},
 { 3.19725680e+00, 2.38606139e+00},
 { 6.37929605e+00, 5.02158556e+00},
 { 6.23643809e+00, 3.97331299e+00},
 { 5.19895014e+00, 3.66336152e+00},
 { 3.33826480e+00, 2.84057290e+00},
 { 5.19706142e+00, 2.93771500e+00},
 {-1.24639573e+00,-1.46975709e-01},
 { 5.88003335e+00, 6.26195213e+00},
 { 6.48663678e+00, 5.03844166e+00},
 {-1.57004094e+00,-1.06712772e+00},
 { 2.88216969e+00, 2.58029622e+00},
 {-4.02522698e-01, 2.80101058e-01},
 { 3.23580859e+00, 4.40010221e+00},
 {-9.18757029e-01, 3.14883212e-01},
 { 1.44762849e+00, 3.98644073e+00},
 { 3.68078770e+00, 2.46063851e+00},
 { 5.94351702e+00, 5.38847905e+00},
 {-7.49765244e-01,-1.59889239e+00},
 { 5.44067351e+00, 7.87976290e+00},
 {-1.94699969e+00,-3.38208633e+00},
 { 2.60789170e+00, 2.82250991e+00},
 {-1.93716156e+00,-1.91113773e+00},
 {-2.10496780e+00,-4.19721789e+00},
 { 2.19502292e+00, 4.15842904e+00},
 { 4.23128206e+00, 3.69669816e+00},
 { 6.74186338e+00, 6.99426749e+00},
 {-9.07373783e-01, 8.95571790e-01},
 {-2.90213276e+00,-1.14999803e+00},
 {-2.84888148e+00,-3.07380538e+00},
 { 6.34651121e-01,-1.14007754e+00},
 {-1.47163848e+00, 2.37061136e-02},
 {-1.86489237e+00,-3.04160476e+00},
 {-3.28719828e+00,-2.48037925e+00},
 { 4.70178406e+00, 4.23397746e+00},
 { 4.99707654e+00, 5.22018491e+00},
 { 2.17063203e+00, 3.58715334e+00},
 { 3.14647422e+00, 3.96958408e+00},
 {-3.70996269e+00,-2.45267433e+00},
 { 6.26126440e+00, 6.46432840e+00},
 {-1.09866726e-01,-1.34981210e+00},
 { 5.62679886e+00, 6.29366049e+00},
 {-3.56362323e-01,-1.01137140e+00},
 { 4.00841783e+00, 1.17452850e+00},
 {-5.02681527e-01, 3.71911224e+00},
 {-2.52225363e+00, 3.35083733e-02},
 { 2.88784213e+00, 2.58849981e+00},
 { 9.80371623e-01, 3.90483281e+00},
 { 4.29701254e+00, 2.07972447e+00},
 { 5.64652665e+00, 5.14161111e+00},
 { 3.85243330e+00, 5.42832215e+00},
 { 3.46439044e+00, 4.88869206e+00},
 { 3.41450300e+00, 3.03032466e+00},
 {-3.74427801e+00,-3.36982917e+00},
 {-5.51859178e-01,-9.17934582e-01},
 {-7.83719813e-01,-5.85220982e-01},
 { 3.22947402e+00, 3.96667513e+00},
 { 5.02507551e+00, 1.64467466e+00},
 { 3.88872879e+00, 4.24989596e+00},
 {-5.94366640e-03,-1.52064231e+00},
 {-1.55619467e+00,-5.73029299e-01},
 { 7.89132427e+00, 7.89609796e+00},
 { 5.47980191e+00, 4.68109085e+00},
 { 4.29062611e+00, 3.71348437e+00},
 { 3.24026955e+00, 2.98207803e+00},
 {-2.39109160e+00,-2.38586514e+00},
 { 4.50211294e+00, 3.24815676e+00},
 { 4.51534728e+00, 4.75895177e+00},
 { 4.48681133e+00, 5.29629347e+00},
 { 3.53049536e+00, 1.72167275e+00},
 {-7.44582083e-01,-9.59138693e-01},
 {-1.89179499e+00,-9.51445978e-01},
 {-1.76063453e+00, 1.19286957e+00},
 { 3.52655786e+00, 3.26559960e+00},
 { 3.20722297e+00, 3.50602323e+00},
 { 3.62277377e+00, 5.37047532e+00},
 {-1.52282334e+00, 5.25663918e-01},
 {-1.91329170e+00,-2.99750785e+00},
 {-2.30758945e+00,-1.99047364e+00},
 { 3.33405784e+00, 3.12613249e+00},
 { 6.89432801e-01,-1.32295764e+00},
 { 4.57717728e+00, 3.06929338e+00},
 { 6.05210954e+00, 7.74151806e+00},
 { 3.84283217e+00, 3.26401940e+00},
 { 4.73406420e+00, 2.78097219e+00},
 { 4.60120286e+00, 3.02570326e+00},
 { 4.45037958e+00, 3.88814800e+00},
 {-2.20687285e+00, 1.13306521e-01},
 { 3.91418342e+00, 1.63508301e+00},
 { 4.31924257e+00, 5.49266141e+00},
 { 3.13402560e+00, 4.15435144e+00},
 { 4.35646356e+00, 3.43427061e+00},
 {-6.05541436e-01,-7.23936510e-01},
 {-4.84498630e-01,-1.11838396e+00},
 { 4.50000000e+01, 4.50000000e+01}};
const float intercepts[NUM_INTERCEPTS] = {-0.03269336, 0.76666174, 0.79602156};
const float w_sum[NUM_CLASSES + 1] = {  0,150,299,300};
const float svm_gamma = 0.047519881572284824;
const float coef0 = 0.0;
const int degree = 3;
enum KernelType type = RBF;
