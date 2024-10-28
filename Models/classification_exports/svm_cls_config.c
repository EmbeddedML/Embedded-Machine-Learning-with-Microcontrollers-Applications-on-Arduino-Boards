#include "svm_cls_config.h"
const float coeffs[NUM_CLASSES - 1][NUM_SV] = {{-1.        ,-1.        ,-1.        ,-0.70865367,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-0.03974884,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-0.29445008,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-0.93274183,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-0.84134115,-1.        ,
  -1.        ,-1.        ,-0.46058275,-0.54921601,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-0.87881205,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-1.        ,-1.        ,
  -1.        ,-1.        ,-1.        ,-1.        ,-0.56774498,-1.        ,
  -1.        ,-1.        , 1.        , 1.        , 0.92119317, 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 0.04973443, 1.        , 0.12736999, 0.37680778,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   0.11055395, 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   0.62802248, 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 0.70007862, 1.        , 1.        , 0.35953094,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        , 1.        ,
   1.        , 1.        , 1.        , 1.        , 1.        }};
const float SV[NUM_SV][NUM_FEATURES] = {{-2.70255383e+00,-4.72532919e+00},
 {-2.49731901e+00, 3.77024549e-01},
 {-1.88553527e+00,-1.33454663e+00},
 {-8.97569199e+00, 2.85017097e+00},
 {-1.43058420e+00,-1.06259901e+00},
 { 2.66002597e-01,-2.58447929e+00},
 {-1.92960202e+00, 8.39340015e-01},
 {-1.48692388e+00,-1.05780660e-01},
 {-4.02920180e-01,-1.17635847e+00},
 {-2.16533521e+00, 2.04021104e-01},
 {-5.73979458e+00,-2.28865303e+00},
 {-2.02828334e+00,-8.66052152e-01},
 { 5.71642803e-01,-1.91128496e+00},
 {-1.12295635e+00,-1.19640177e+00},
 {-2.60435568e+00,-3.75537855e+00},
 { 4.99423599e+00,-4.55678945e+00},
 {-7.56294832e-01,-1.86969635e+00},
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
 {-2.45283299e+00,-3.75785266e+00},
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
 {-1.78563541e+00,-1.27797041e+00},
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
 {-3.01758144e+00,-3.33137204e+00},
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
 {-1.11361472e+00,-1.22789600e+00},
 {-9.10441366e-01, 3.82760124e-01},
 {-3.97858815e-01,-2.06241812e+00},
 {-1.35089445e+00,-1.10168507e+00},
 {-2.02915159e+00,-4.57427427e-01},
 {-7.36297469e-01,-1.70979740e+00},
 {-1.16722306e+00,-1.88335870e+00},
 {-9.91322450e-01,-2.02409307e+00},
 {-3.85272923e+00,-2.91866284e+00},
 {-8.13520402e-01,-9.73739320e-01},
 {-2.16050112e+00, 8.47339915e-01},
 {-1.48850821e+00, 5.50283888e-01},
 { 7.00342565e-01,-2.18967382e+00},
 {-1.02625692e+00,-1.39364816e+00},
 {-1.70674629e+00,-8.07404013e-01},
 {-2.72083450e+00, 1.42115741e+00},
 { 1.04291239e+00,-1.42507227e+00},
 {-4.27389075e-01, 1.87597420e+00},
 {-1.18445767e+00,-1.46476711e+00},
 {-1.12547801e+00,-5.76879679e-01},
 {-9.11563487e-01,-3.46376826e-01},
 {-1.42965822e+00,-1.60655425e+00},
 {-2.54302713e+00,-5.12126002e+00},
 {-1.58432637e+00,-5.67094619e-01},
 { 9.56101574e-01,-2.63804036e+00},
 {-2.59222342e+00, 1.71837503e+00},
 {-2.17176049e+00, 1.14407035e-01},
 {-1.93809333e+00,-1.05922394e+00},
 {-1.05556562e+00,-9.47252917e-01},
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
 {-3.30143563e+00,-2.96408614e+00},
 {-2.05112050e+00, 8.93979021e-01},
 {-1.98176616e+00,-9.28065826e-01},
 {-1.91369442e+00, 9.72998592e-01},
 {-1.63627710e+00,-7.39304382e-01},
 {-4.01501150e+00,-2.47830380e+00},
 {-2.82397792e+00, 2.48617394e+00},
 {-6.18846686e-01,-1.43678444e+00},
 {-3.92903642e-01,-1.23545955e-01},
 {-2.52044711e+00,-2.86979420e+00},
 {-3.22344547e+00,-1.77570154e+00},
 { 5.94340927e-01,-8.49800869e-01},
 {-6.88371957e+00,-3.61983311e+00},
 {-1.07995444e+00,-2.41710309e+00},
 {-3.07399208e+00,-4.64655093e+00},
 {-8.94721158e-01,-5.25257114e-01},
 { 5.87213855e-01,-2.93107889e+00},
 {-1.80561135e-01,-2.07861640e+00},
 {-8.31437884e-01, 4.67452847e-01},
 {-2.77902268e-01,-7.50358819e-01},
 {-7.75200583e-01,-5.00690939e-01},
 {-7.11605825e-01,-5.21681897e-01},
 {-8.78353590e-02,-7.54106231e-01},
 {-1.75322005e+00,-2.84869105e+00},
 {-2.66195296e+00,-3.47651107e-02},
 {-1.31336965e+00,-3.52554135e+00},
 {-2.80511881e+00,-6.50934088e-01},
 { 3.65442911e+00, 6.46486178e+00},
 {-1.89965566e+00,-2.16963439e+00},
 { 4.81400284e+00, 6.92816476e+00},
 { 7.39999753e+00, 3.39472468e+00},
 {-2.06775060e+00,-2.81865684e+00},
 {-4.25378288e+00,-5.84264338e+00},
 {-2.55891568e+00,-1.04352482e+00},
 {-2.18299018e+00,-1.01169652e+00},
 {-4.66149267e+00,-2.63403668e-01},
 {-1.83629474e+00,-5.26428355e-01},
 {-2.45910414e+00,-1.90810649e+00},
 {-3.68305753e+00,-1.99936756e+00},
 { 2.42943799e-01,-1.32159149e+00},
 { 3.53509056e-01,-1.05796182e+00},
 {-1.52494429e-01,-3.76157740e-01},
 {-1.68998804e+00,-1.54240646e+00},
 { 8.62183318e+00, 8.88183570e+00},
 { 1.01462640e-01,-5.58261452e-01},
 {-1.94380411e+00, 4.39165940e-01},
 {-8.16146794e-01, 3.82091618e-02},
 {-1.09440010e+00,-6.16362713e-01},
 {-7.41995296e-01, 8.32609711e-02},
 {-1.17049335e-01,-1.96800089e+00},
 {-1.27360676e+00,-2.48526548e+00},
 {-1.30418207e+00,-3.89598830e-02},
 { 1.11687240e-01,-5.91984188e-01},
 {-1.29935749e+00,-8.56521773e-01},
 {-3.81388957e+00,-1.55900751e+00},
 {-1.54041612e-01,-2.61452579e-01},
 {-1.40895207e+00, 6.45358228e-01},
 {-1.93791457e+00,-1.93835817e+00},
 { 1.69164156e+00,-1.48593981e+00},
 {-2.01201194e+00,-2.72724578e+00},
 {-1.29044241e+00, 1.29703130e+00},
 {-2.66518999e+00,-3.53866723e+00},
 {-3.69253217e+00,-1.80973442e+00},
 {-1.21201408e+00, 2.88991129e-01},
 {-7.44291181e-01,-8.31978092e-01},
 {-1.61829314e+00,-6.13424958e-01},
 {-8.06378898e-01, 6.61992844e-02},
 {-3.13333733e+00,-4.50165924e-01},
 {-2.88902409e+00,-9.35352995e-01},
 { 7.09877597e+00, 1.00021168e+01},
 {-2.58400201e+00,-2.58303636e+00},
 {-1.81652214e+00,-9.64998241e-01},
 { 8.50439865e+00, 5.50527573e+00},
 { 3.40216280e-01,-8.54711362e-01},
 {-3.60554829e-01,-1.08632409e+00},
 {-2.07076212e+00, 1.27225842e+00},
 {-1.51553002e+00, 8.25569172e-01},
 {-1.52654138e-01,-2.23739179e+00},
 { 2.22410194e-01,-1.55648401e+00},
 {-1.91279254e+00, 3.63974608e+00},
 {-1.56258434e+00,-3.49040351e+00},
 {-1.96415746e-01,-1.08357093e+00},
 {-1.63152279e+00,-6.44538514e-01},
 {-8.04339114e-01,-1.32350443e-01},
 {-1.57327469e+00,-2.91379742e+00},
 { 5.08975151e-01,-1.34678303e+00},
 {-9.82842199e-01,-3.02735452e-01},
 {-3.54000394e-01,-8.29536406e-01},
 {-3.35630569e-01,-1.03128568e+00},
 {-1.11893181e-01,-7.66588518e-01},
 {-2.32207575e+00, 1.58067290e+00},
 {-4.43634686e-01,-1.09035689e+00},
 {-1.16889860e+00, 4.85151429e-01},
 {-6.29132379e-01,-3.65500104e-01},
 {-2.52972928e+00,-2.52011285e+00},
 {-1.79891233e+00,-3.39823009e+00},
 {-5.57028888e-01, 1.81392182e-01},
 {-1.26018978e+00,-4.71495518e-01},
 {-3.03765591e+00,-8.13070080e-01},
 {-2.44538739e+00,-9.31315420e-01},
 {-9.35908922e-03,-8.94200395e-01},
 {-2.14906695e+00, 1.13196610e+00},
 { 1.30245519e+00,-1.67537927e+00},
 {-1.15207016e-01,-1.68096320e+00},
 {-4.76780935e-01,-2.12827061e+00},
 {-2.68980173e+00,-7.94103531e-01},
 {-1.06566376e+00,-2.39864208e+00},
 {-1.92972184e+00,-1.41968870e+00},
 {-1.97888544e+00,-5.69114238e-01},
 {-5.92472828e-01,-3.06400408e+00},
 {-1.68478164e-01,-7.00647753e-01},
 {-1.38304685e+00,-1.83846344e+00},
 { 7.81105273e-01,-1.15883246e+00},
 {-1.43051284e+00, 9.78136960e-01},
 { 2.36790027e-02,-1.36389860e+00},
 {-4.67536393e-01,-8.35840426e-02},
 {-2.67341435e+00,-1.52202989e+00},
 {-1.66926179e+00, 3.62023223e-01},
 { 1.48438039e-01,-1.73639383e+00},
 { 7.06436910e-01,-2.42861836e+00},
 {-1.00023560e+00, 1.08243524e+00},
 {-1.89155026e+00,-2.19991372e+00},
 {-1.24639573e+00,-1.46975709e-01},
 {-1.57004094e+00,-1.06712772e+00},
 {-9.18757029e-01, 3.14883212e-01},
 {-7.49765244e-01,-1.59889239e+00},
 {-1.94699969e+00,-3.38208633e+00},
 {-1.93716156e+00,-1.91113773e+00},
 {-2.10496780e+00,-4.19721789e+00},
 {-9.07373783e-01, 8.95571790e-01},
 {-2.90213276e+00,-1.14999803e+00},
 {-2.84888148e+00,-3.07380538e+00},
 { 6.34651121e-01,-1.14007754e+00},
 {-1.47163848e+00, 2.37061136e-02},
 {-1.86489237e+00,-3.04160476e+00},
 {-3.28719828e+00,-2.48037925e+00},
 {-3.70996269e+00,-2.45267433e+00},
 {-1.09866726e-01,-1.34981210e+00},
 {-3.56362323e-01,-1.01137140e+00},
 {-2.52225363e+00, 3.35083733e-02},
 {-3.74427801e+00,-3.36982917e+00},
 {-5.51859178e-01,-9.17934582e-01},
 {-7.83719813e-01,-5.85220982e-01},
 {-5.94366640e-03,-1.52064231e+00},
 {-1.55619467e+00,-5.73029299e-01},
 {-2.39109160e+00,-2.38586514e+00},
 {-7.44582083e-01,-9.59138693e-01},
 {-1.89179499e+00,-9.51445978e-01},
 {-1.76063453e+00, 1.19286957e+00},
 {-1.52282334e+00, 5.25663918e-01},
 {-1.91329170e+00,-2.99750785e+00},
 {-2.30758945e+00,-1.99047364e+00},
 { 6.89432801e-01,-1.32295764e+00},
 {-2.20687285e+00, 1.13306521e-01},
 {-6.05541436e-01,-7.23936510e-01},
 {-4.84498630e-01,-1.11838396e+00}};
const float intercepts[NUM_INTERCEPTS] = {-0.00951688};
const float w_sum[NUM_CLASSES + 1] = {  0,146,293};
const float svm_gamma = 0.05397466411641588;
const float coef0 = 0.0;
const int degree = 3;
const enum KernelType type = RBF;