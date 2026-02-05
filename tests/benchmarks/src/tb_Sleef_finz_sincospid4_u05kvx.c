/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid4_u05kvx.c --function \
 *     Sleef_finz_sincospid4_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.64189883f941cp-1022, 0.0, 0.0, 0.0, 0x1.18e553e5f7347p-305,
     0x1.96b55cf59d8e8p-110, 0x1.d1bedf9841c11p-11, 0x1.34876da340c64p-725,
     0x1.dc925f5b12fa2p-638, 0x1.4f9b058fcb8a4p-190, 0.0, 0.0, 0.0,
     0x1.52473facc65f2p-918, 0.0, 0.0, 0.0, 0.0, 0x1.f7eb89d60d69p-692,
     0x1.64aace9520e0ep-19, 0x1.015bfd69546p-470, 0.0, 0.0, 0x1.b1cbc5b66ff56p-998,
     0x1.0abfc1cce8d28p-875, 0x1.9db0f7193c857p-42, 0x1.ccb1dcdf6e3d1p-193,
     0x1.a0a10ff8fc32ap-481, 0.0, 0.0, 0.0, 0.0, 0x1.ab35b88e07b8ep-6,
     0x1.c5e60716d0a21p-99, 0x1.d85d5867928d7p-115, 0x1.cbfc7638c8802p-150, 0.0,
     0x1.feb3109889d26p-396, 0x1.7110730da017ep-414, 0x1.c3054534c845bp-810,
     0x1.d9e6564539056p-86, 0x1.205894a5debcbp-788, 0.0, 0.0, 0x1.5947123e10bddp-360,
     0.0, 0x1.0547dfb86a00fp-876, 0x1.5c8ae90299095p-475, 0x1.1cf5398c7afc4p-533,
     0x1.9074b948c3276p-323, 0.0, 0.0, 0.0, 0.0, 0x1.4cf543e3d416dp-115,
     0x1.bbfa964bed34fp-157, 0.0, 0.0, 0x1.efd9996049dfp-960, 0.0,
     0x1.dfcc8b32a4c32p-468, 0x1.85549120ac55p-290, 0.0, 0.0, 0.0,
     0x1.dc669d70da692p-274, 0x1.b4ca37fa6bac7p-186, 0x1.7f2a01bc8e204p-231,
     0x1.0dcdde6db5d04p-633, 0x1.e939bb923bdd8p-739, 0x1.ac80b902058f6p-1006,
     0x1.c7195ce6c16a8p-784, 0x1.d0d711dd7cf99p-275, 0.0, 0x1.63698e6ef6c6dp-368, 0.0,
     0.0, 0x1.07e724586ab45p-30, 0.0, 0.0, 0.0, 0x1.5fd3740f42fa1p-936, 0.0,
     0x1.a7229169d79eap-213, 0x1.956dee87ee8f8p-930, 0x1.36b4662433576p-190, 0.0,
     0x1.9e7feb239cdd4p-739, 0x1.9ffc8bf3219f1p-828, 0.0, 0x1.bad56a97e56dfp-290,
     0x1.20795b2ac4deep-420, 0.0, 0x1.7696af8cce52ap-51, 0x1.8ddfc666f7792p-564,
     0x1.a3fcc409aac05p-111, 0.0, 0x1.f7e9b6d623f3p-321, 0x1.d1fd51f9e5e13p-948,
     0x1.cbcdca36b9d3ep-60, 0.0, 0x1.c2553859ed851p-362, 0.0, 0x1.5e5c8b43e003dp-106,
     0x1.9d0b58638fdd5p-572, 0x1.da0d67f70f628p-767, 0x1.5616972115a46p-495, 0.0, 0.0,
     0.0, 0x1.b4abe90680167p-693, 0x1.ab79841c12de9p-585, 0x1.d44b7fe117f0bp-710,
     0x1.68d7fdb7599b7p-503, 0.0, 0x1.f67bf54fd91b6p-504, 0x1.5800743c4d5b4p-1022,
     0.0, 0x1.c43af9d5959dp-924, 0.0, 0.0, 0.0, 0.0, 0x1.ca61a82656ff8p-770,
     0x1.0564120d1b8cfp-342, 0x1.cafa85817f191p-944, 0.0, 0.0, 0.0, 0.0,
     0x1.30ed3b8cf0549p-263, 0.0, 0x1.7da87d7b0c7dap-450, 0.0, 0x1.125dac66b467dp-964,
     0.0, 0x1.0c6be907106f5p-339, 0.0, 0x1.0fa3484d80a51p-316, 0.0, 0.0, 0.0,
     0x1.fd0b947c94c32p-140, 0x1.6f6c81c01a0a6p-707, 0x1.f6efa3cf3f9cfp-564, 0.0,
     0x1.742b17a9915cap-741, 0.0, 0x1.56d8843106235p-364, 0x1.eda393083c865p-397,
     0x1.63f7e77318c47p-892, 0.0, 0x1.99219278d557p-125, 0.0, 0.0,
     0x1.576bc6513c3abp-473, 0x1.c5898e62ba4d1p-1002, 0.0, 0x1.205865e9ad86ap-960,
     0x1.0a2c8e35ce001p-142, 0.0, 0x1.e3ac36c996652p-1005, 0x1.9fd8cd97af58bp-295,
     0x1.688244534fdf9p-944, 0x1.c3bb526cbd104p-58, 0x1.d57502b76055ap-958, 0.0,
     0x1.3192d82e55c5ap-373, 0x1.e15b3378adfd7p-96, 0.0, 0.0, 0.0,
     0x1.c9ec27c528af5p-97, 0x1.d30e6e8d3ffaap-576, 0x1.3e5f9aeb47d6dp-911, 0.0,
     0x1.626ae4a5dcf4ap-773, 0.0, 0.0, 0.0, 0.0, 0x1.2b62a883f67bfp-797, 0.0,
     0x1.f82c88aa205ffp-442, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42464705ee3fp-71,
     0x1.200d148e9d073p-451, 0.0, 0x1.4b1cc37a16a85p-347, 0x1.c0c4aa14d5043p-925,
     0x1.0fdb055cd7947p-979, 0.0, 0x1.97f258aadd91ap-85, 0.0, 0.0, 0.0,
     0x1.92814bebdb0bdp-173, 0x1.4714de639ab82p-570, 0.0, 0x1.7ecd9251f88cap-65, 0.0,
     0.0, 0x1.9995c2da68673p-776, 0x1.d0531e709ea47p-447, 0x1.59a3c04bbf2f9p-311,
     0x1.3d14edfb9de32p-39, 0.0, 0x1.52bb2e22688a2p-448, 0.0, 0.0, 0.0,
     0x1.9148aafb7db4p-530, 0x1.f93691103b44ap-567, 0.0, 0x1.74339bd67272ep-60,
     0x1.ca97c577f5f3fp-900, 0x1.74968d8ce89a3p-843, 0.0, 0x1.4226e4d981c63p-245, 0.0,
     0x1.c9f0c1637500ep-779, 0x1.be5bcde01dedcp-153, 0x1.c7a4e16435facp-684,
     0x1.a495ef8c9b6b4p-655, 0.0, 0.0, 0.0, 0.0, 0x1.eee0e0a2be617p-878, 0.0,
     0x1.020778da75ccdp-314, 0x1.0dc3327bc46bp-820, 0.0, 0x1.d6e23eabaf489p-356, 0.0,
     0.0, 0x1.72e43e9ed920cp-467, 0.0, 0x1.b025839fd5fap-252, 0x1.668b502e0be3cp-105,
     0.0, 0.0, 0x1.9d8cc923d5352p-566, 0.0, 0.0, 0x1.8501784650fd9p-789, 0.0, 0.0,
     0x1.868f60995773cp-118, 0x1.44d86a99de6b1p-583, 0x1.3f5ff80f7548fp-95,
     0x1.3c6e3d1b35e3bp-571, 0x1.7c18ab5e462aap-803, 0.0, 0x1.83527baabdc2dp-14, 0.0,
     0x1.304977174abcfp-723, 0.0, 0.0, 0x1.211b100e6f552p-216, 0.0,
     0x1.6402121af6e99p-304, 0.0, 0.0, 0x1.90c297559bf45p-101, 0.0, 0.0, 0.0,
     0x1.db021f09b6f3p-595, 0.0, 0.0, 0x1.da8c73b27d5d9p-821, 0x1.2359c3e930b08p-95,
     0.0, 0x1.7c550ce55f74bp-591, 0x1.f11bcb921599fp-640, 0x1.e163c9f6949bp-532,
     0x1.5f64944c9301fp-1005, 0.0, 0.0, 0x1.50d46f8664edp-896, 0.0,
     0x1.222aa09092ce4p-88, 0.0, 0x1.a54cdb86822fap-417, 0x1.d08d4c2d4cc3bp-109,
     0x1.98bd8c27be627p-632, 0x1.1678ad3230225p-435, 0x1.04de4e61695ccp-967,
     0x1.cc990943583cdp-32, 0x1.31b9cc6c03107p-42, 0x1.ff23034441f58p-559,
     0x1.ffb443e49b8bep-638, 0x1.c318e5f56f3ffp-243, 0x1.5640e4e31d1f2p-191, 0.0,
     0x1.8aff7c09d4526p-710, 0.0, 0.0, 0x1.63b8c48de95d8p-982, 0.0,
     0x1.266f5a9b32ebp-828, 0x1.7d7415cb8a4b7p-602, 0.0, 0.0, 0x1.4925103e6d31dp-608,
     0.0, 0.0, 0x1.34692c49cff1fp-21, 0x1.22632df6a5a09p-105, 0.0,
     0x1.8f4cb906006d3p-61, 0x1.fbfee382e6308p-648, 0x1.48dc7e00e5c54p-972,
     0x1.15a18369ed454p-212, 0.0, 0x1.be58c1422ecefp-470, 0x1.fb784e8df789p-862, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d7c414a51b24fp-299, 0x1.7930b3a5d4f44p-52, 0.0, 0.0,
     0x1.f9de6f5aaf807p-769, 0.0, 0x1.c8371962c3b29p-351, 0x1.55464979d705dp-408,
     0x1.e0d4710d0896ap-527, 0.0, 0.0, 0x1.7357b9317b381p-227, 0.0, 0.0,
     0x1.440ea006b2c97p-649, 0.0, 0x1.ae7a8be84c9d6p-356, 0x1.32d365e806b73p-405,
     0x1.72c93fbf24546p-94, 0.0, 0.0, 0x1.688894784f4cfp-111, 0x1.049669487e38ap-836,
     0.0, 0.0, 0x1.a10fa7ec95408p-823, 0.0, 0x1.cd6279cba24e4p-770, 0.0, 0.0,
     0x1.64519b651758p-213, 0.0, 0.0, 0x1.727259c2fe31bp-878, 0x1.e6ae1ae1dae1cp-717,
     0x1.65751eee59e54p-469, 0.0, 0x1.82f631e77df8p-376, 0x1.9f3ce00399965p-970,
     0x1.cd54f2f877fb4p-21, 0x1.106f25461aa5ep-285, 0.0, 0x1.6710665fdbeebp-601,
     0x1.b8c56a25ea2cp-246, 0x1.35aecbe295355p-686, 0x1.fbbb9d1466e4ep-91,
     0x1.0bd2ab93d23bp-691, 0.0, 0x1.54dc0989263dfp-503, 0x1.2f949b12a57dap-257,
     0x1.ee5ce373af0d8p-662, 0.0, 0x1.4223ee685a4d6p-346, 0.0, 0x1.55c67854e62cap-480,
     0x1.b76b34b4884ddp-460, 0x1.12a5791d6064ep-94, 0x1.c2bad7011e5dp-673,
     0x1.428da0037a9f8p-100, 0.0, 0.0, 0x1.990f8df2ee1cbp-180, 0x1.4aa18a013548ep-683,
     0x1.aa2ebb71876d7p-542, 0x1.55e5bcfc64562p-226, 0x1.796edaa7e8e02p-817, 0.0, 0.0,
     0.0, 0.0, 0x1.7ef474530f43p-210, 0.0, 0.0, 0x1.5a4514c00e32ap-945, 0.0,
     0x1.4f621e171be8p-632, 0.0, 0.0, 0.0, 0x1.356d6276e18dap-155, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8cc4d8f6acc1bp-70, 0x1.e7f649de5e13ap-485, 0x1.8d6d2c55db879p-410, 0.0,
     0.0, 0.0, 0.0, 0x1.4e2f3a7aa05adp-613, 0.0, 0x1.ddef16f543fdep-110,
     0x1.873315fec6ea5p-777, 0x1.5cec09b3cbbe6p-513, 0x1.160c4a426d8bep-323, 0.0,
     0x1.11d3042e02167p-674, 0.0, 0x1.d66095d42b6e4p-898, 0x1.d2087491c7d5bp-497,
     0x1.c4296cb5cc36dp-139, 0x1.1c398fb3c7336p-908, 0x1.3281d88b4232ap-902, 0.0,
     0x1.fe018f90c4c68p-1021, 0x1.92800b2af0cd4p-203, 0x1.99b5a10a33271p-862,
     0x1.86ad8f3335065p-318, 0.0, 0.0, 0x1.24f2c580767bbp-820, 0.0,
     0x1.32b91bea04b9p-212, 0.0, 0.0, 0x1.fe408eab4736dp-795, 0.0,
     0x1.b74294ee2fee4p-522, 0x1.a27596e3b20edp-854, 0x1.25048b3b43448p-742,
     0x1.c93ce5b93d3d2p-1003, 0x1.9fd51f09ecd08p-485, 0.0, 0.0,
     0x1.6592c4e2c26cfp-492, 0x1.5c641c56ff2f5p-241, 0x1.18f0d9b689eebp-649,
     0x1.a8811450d5c1dp-193, 0x1.457f9a6bf778bp-112, 0.0, 0x1.ac587378d6949p-291, 0.0,
     0x1.5ceeeca8b4138p-817, 0x1.49dcea22be0d9p-1016, 0x1.5de41c49c71a6p-49, 0.0,
     0x1.a58d2df084538p-348, 0x1.d596e32b7b57ep-450, 0.0, 0.0, 0x1.4876efa435489p-309,
     0x1.2fca0c36eed6ep-392, 0.0, 0x1.de5b4ea231aacp-993, 0x1.ee0d745e0d67ap-932, 0.0,
     0.0, 0.0, 0.0, 0x1.e6529d6b049cap-873, 0.0, 0.0, 0x1.68813df0eb74fp-716, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74b9feff36372p-860, 0x1.0574be358c946p-939, 0.0,
     0.0, 0x1.cba30554e7df8p-310, 0.0, 0.0, 0x1.aa79dea35ead5p-87,
     0x1.bf206373bd29dp-327, 0x1.1e1301322a85p-814, 0.0, 0x1.5aef61171914bp-655,
     0x1.32ba72ac434dap-157, 0x1.758393ac2d089p-145, 0.0, 0.0, 0.0, 0.0,
     0x1.1cd3d829efdfbp-822, 0.0, 0x1.b3f8e0ce8f206p-574, 0.0, 0x1.9367f59e87106p-380,
     0.0, 0x1.d9b000d3da28p-89, 0.0, 0x1.b3c5a07d6f3d7p-31, 0x1.f6d8649e0bf92p-559,
     0.0, 0x1.a25b4b2b0756cp-551, 0.0, 0x1.2f10189fb83eap-672, 0x1.06d69b6fd4817p-418,
     0x1.bc9832c8c916cp-226, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5829c189dbcb9p-22,
     0x1.2575c6419dab9p-595, 0x1.e218fcfb44df7p-387, 0x1.96fced0465fe3p-657, 0.0, 0.0,
     0x1.8c156484639ap-235, 0x1.26c034c801e63p-220, 0.0, 0.0, 0x1.5b3577cb83d08p-586,
     0x1.f650732f65914p-61, 0x1.389ff1724910ap-29, 0x1.5152475582b34p-203, 0.0,
     0x1.6130ff4928583p-579, 0x1.29cd16debae3dp-936, 0x1.0e7d2e87e4f67p-116,
     0x1.ef393b0519bf5p-845, 0x1.5d91ae2d5205cp-164, 0x1.728dd3856b781p-55, 0.0,
     0x1.60e5b8dd9b63dp-761, 0x1.4895185a39de8p-199, 0.0, 0.0, 0x1.7bddccd1cae4cp-931,
     0x1.1232e99d39b73p-393, 0x1.6ae8b980316b7p-1005, 0.0, 0.0,
     0x1.b64c38a01f1fbp-332, 0x1.f3332c696cbd3p-832, 0x1.b4f14325006bfp-602,
     0x1.e05ed757b2a21p-796, 0.0, 0.0, 0x1.a03b4f21e5ab1p-918, 0.0, 0.0, 0.0,
     0x1.1ec9d42d750bep-582, 0x1.ad47c12bd1612p-962, 0x1.3d39fd3b66e66p-177, 0.0,
     0x1.463338e5d084ap-9, 0.0, 0x1.fbc19af659abbp-665, 0.0, 0x1.0f1849550ccfbp-34,
     0.0, 0x1.6c73abfbdbff8p-720, 0x1.73cd444103886p-49, 0.0, 0.0, 0.0, 0.0,
     0x1.78782ae8ed3f1p-201, 0x1.34ab1cff8b03cp-759, 0x1.1ce47590e6136p-586,
     0x1.f83a4a8214d66p-762, 0x1.7d824e2dfff18p-775, 0x1.bb63e8bd25f1dp-674,
     0x1.103cbe5e63b91p-550, 0.0, 0.0, 0x1.edb74ddbf0548p-485, 0x1.9a6824f2917b9p-674,
     0.0, 0x1.eaf904c55adfdp-414, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.279cf21f6126p-316, 0.0,
     0.0, 0x1.a29a13a45e59ap-126, 0.0, 0.0, 0x1.2993a9db1191fp-652,
     0x1.186675c561e18p-56, 0.0, 0x1.25a8e006f3e78p-640, 0.0, 0x1.f760c8218dbabp-614,
     0.0, 0.0, 0.0, 0.0, 0x1.7df02088e4883p-559, 0x1.dbfcc0718f33bp-16, 0.0, 0.0,
     0x1.92f6406b3a171p-672, 0x1.31262036e8759p-724, 0x1.07ee7e861cd4bp-718,
     0x1.6e45a2a1f55f8p-917, 0x1.9539e76637523p-198, 0.0, 0.0, 0x1.ed6cac4ecea89p-169,
     0x1.c8bfa59d43e77p-31, 0x1.0afbc5426d0e7p-356, 0x1.5e8047f2b72ecp-693, 0.0, 0.0,
     0x1.229b4f548daf7p-667, 0.0, 0x1.25dd7b145ff52p-626, 0x1.2f413ade2dc93p-967, 0.0,
     0x1.ecb6b0105dff4p-613, 0x1.732241ace5f7bp-306, 0.0, 0x1.bc40638c3a517p-557,
     0x1.24bb60f64850cp-892, 0x1.979bd367ebe4cp-963, 0x1.27a938b42c257p-834, 0.0,
     0x1.b40419329d6cp-23, 0.0, 0x1.b70be96f205f6p-532, 0x1.8a41740f52299p-66,
     0x1.3f32520168708p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b35aadf86a80cp-254, 0.0, 0x1.3099e451da3b2p-19, 0.0, 0.0,
     0x1.3945d44557d96p-107, 0x1.05e3ee698f8fp-790, 0x1.cb31a473231fap-992,
     0x1.eccf993c20e5fp-861, 0x1.843583a83de16p-908, 0x1.3cd0d0f1489a5p-684, 0.0,
     0x1.38c46a0599d2bp-544, 0x1.f15d10ecb607ep-493, 0.0, 0x1.59da8c5d3c625p-122, 0.0,
     0.0, 0.0, 0x1.51e5d9893a2aep-244, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee25cfd290785p-597, 0.0, 0.0, 0x1.b5d6e91946baep-794, 0x1.ea48070985484p-306,
     0x1.143c6b531cfb7p-8, 0.0, 0.0, 0x1.bf79437446241p-308, 0x1.431aff78a33bep-733,
     0.0, 0x1.0269f9c3091ep-342, 0x1.e864ed0cc4116p-568, 0x1.a383a096b30e9p-262,
     0x1.b010899f8841fp-974, 0.0, 0x1.b643c66af0335p-984, 0x1.d3d6a9e050fd2p-983,
     0x1.63e765395e5fbp-470, 0.0, 0.0, 0x1.400d21d89859bp-154, 0.0,
     0x1.9dc7cdb131e64p-903, 0.0, 0x1.17dd291148822p-626, 0.0, 0.0,
     0x1.a3daeaaef9795p-371, 0.0, 0x1.1419514339ae5p-644, 0x1.da228c3c3461fp-306, 0.0,
     0x1.2786e7a2c53a5p-704, 0x1.7763e853ec344p-153, 0x1.30eee1caec449p-35, 0.0, 0.0,
     0x1.e97cd8c5a7551p-685, 0x1.a932130377881p-793, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.12086e17a08edp-666, 0.0, 0.0, 0.0, 0x1.9292bdcfcbb2bp-742, 0.0,
     0x1.db9566aa166b4p-216, 0.0, 0.0, 0x1.7d898fc2cb3b8p-131, 0x1.a6380b46df7a6p-110,
     0x1.595cd24ce79ap-899, 0.0, 0x1.12d9265916b65p-288, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6266db02013ccp-740, 0.0, 0x1.a2bb6eddaf981p-217, 0.0, 0.0,
     0x1.7cd5cd310abacp-901, 0.0, 0x1.1410f282d9a69p-432, 0.0, 0x1.78ec6a2b7192cp-423,
     0x1.e77515cd8c6ep-972, 0x1.907b512082c03p-896, 0.0, 0x1.1fde80ece6a13p-877,
     0x1.5bddfc95df1e3p-491, 0.0, 0x1.a290aaa1d4bc2p-383, 0x1.a03e5e4720e03p-861, 0.0,
     0x1.c147057a14cf7p-683, 0x1.cd8180066283cp-991, 0.0, 0.0, 0x1.7a1014be7be6ep-689,
     0.0, 0x1.932deba9a742dp-581, 0.0, 0x1.d08b4ccdb2e2fp-700, 0.0,
     0x1.7b14032bed038p-847, 0.0, 0x1.4aa6d652f632ep-288, 0x1.7a1eb3ee5bda7p-16, 0.0,
     0.0, 0x1.e61fc39472c8bp-446, 0x1.c96ee9141ba0ap-381, 0x1.c3e5e825cc8dfp-582, 0.0,
     0.0, 0x1.61f233e29be09p-170, 0.0, 0x1.031a29591d29bp-653, 0.0, 0.0,
     0x1.4fa503ef9b5b1p-308, 0x1.f0bbb843fbd35p-846, 0x1.590dec86c3f7ap-710, 0.0, 0.0,
     0.0, 0.0, 0x1.043cd563262d1p-181, 0x1.9226fe5bd6d35p-953, 0x1.b676be85005aep-984,
     0.0, 0x1.9199db097aad6p-460, 0.0, 0x1.b2c4754f3b385p-558, 0x1.75f320dfca1f4p-819,
     0x1.08c10400dfddep-697, 0x1.646974399bb28p-316, 0.0, 0.0, 0x1.d227cedc9b881p-350,
     0x1.57e6990366ba2p-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08cd70ad76309p-4,
     0x1.047a03cc1e36ep-255, 0x1.567939fa82a64p-356, 0.0, 0.0, 0x1.2c7f4be0c223ap-72,
     0x1.1b46dcd13f6b1p-868, 0.0, 0.0, 0.0, 0.0, 0x1.c7c2af0c3c5afp-810, 0.0, 0.0,
     0.0, 0.0, 0x1.3d934ddd2aaap-752, 0.0, 0.0, 0x1.d41c2813103fdp-153,
     0x1.0152b4ac551b4p-242, 0.0, 0.0, 0.0, 0.0, 0x1.ca1bd4e8fca71p-538, 0.0,
     0x1.f0d98a11bfa56p-55, 0x1.512051553a996p-39, 0x1.6675e10dea76ap-398, 0.0, 0.0,
     0x1.4b830a1a83975p-924, 0x1.deb745900fde4p-821, 0x1.bfec134f21adcp-72, 0.0, 0.0,
     0x1.a2f5b7cc7525bp-346, 0x1.5ddca4c905143p-320, 0.0, 0x1.88f5a2fb449bcp-919,
     0x1.d3e442f32f791p-167, 0.0, 0.0, 0.0, 0.0, 0x1.f6c5793262fbp-458,
     0x1.3836fac6cf244p-222, 0x1.d1a7647c34ab1p-397, 0.0, 0x1.1dde8f66ea602p-692,
     0x1.593a9a276829ep-217, 0.0, 0.0, 0.0, 0.0, 0x1.5a8204cc266f4p-436,
     0x1.f2f6a4752c266p-504, 0.0, 0.0, 0x1.cfbc9232bc5a6p-106, 0.0,
     0x1.e4603fc751eb9p-947, 0x1.9f6dc35b7325ap-236, 0.0, 0.0, 0x1.255fdf1a46573p-109,
     0x1.fcd320175f983p-117, 0.0, 0.0, 0.0, 0.0, 0x1.0ef008ee2284ep-868,
     0x1.a955188ae8b59p-626, 0.0, 0x1.0b4bfc74887cp-157, 0x1.8a7c3735b7a17p-901, 0.0,
     0x1.f29d7548a8c34p-95, 0.0, 0.0, 0.0, 0x1.2d4c8563126fbp-507, 0.0,
     0x1.8bc2994d9c525p-87, 0x1.1b9cc7003f864p-538, 0.0, 0.0, 0x1.adc003232e764p-290,
     0x1.a3a7d424e865p-207, 0.0, 0x1.d8b666f51a29ap-61, 0.0, 0x1.a344d7ec85c4fp-772,
     0x1.4a382d70a7d7p-483, 0.0, 0x1.a04514187b065p-385, 0.0, 0.0,
     0x1.8660745eda39p-294, 0.0, 0x1.92a0c423d9bep-771, 0x1.bf6d015e46249p-776, 0.0,
     0x1.46b183584e9a4p-616, 0.0, 0x1.d8f4009001d95p-399, 0x1.1679b1c2b177cp-656, 0.0,
     0x1.03ea4764f0a31p-130, 0x1.2c0473793b8bp-679, 0.0, 0.0, 0x1.25445c5237d8ap-475,
     0.0, 0x1.3c2b6f80cb393p-320, 0.0, 0x1.d5386718d9c44p-694, 0.0, 0.0,
     0x1.6c56f221c4619p-583, 0x1.751368c167ce9p-895, 0x1.d24e0849e3255p-980,
     0x1.5fd8bc09b8ed5p-165, 0.0, 0.0, 0x1.84fbd78d8e3a6p-880, 0x1.d5f16235c268fp-451,
     0x1.acecdc56c0274p-910, 0x1.fede1975c1d15p-305, 0x1.2960aa70c54acp-690,
     0x1.8b9669546fd35p-725, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15e587fc7b96dp-693, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f336fc2ba4ad1p-235, 0x1.3b3f450550163p-932, 0.0, 0.0,
     0x1.4f97086309359p-861, 0x1.f453808ac2e74p-876, 0.0, 0.0, 0x1.b39d96462a923p-578,
     0.0, 0.0, 0.0, 0x1.f72fff53fdb9cp-15, 0x1.2555f4682d6e2p-853, 0.0,
     0x1.40c44e18d298p-74, 0x1.f5dba5535d34cp-619, 0.0, 0.0, 0x1.22cf5505c7029p-816,
     0.0, 0x1.b5aa4fb9d8f16p-671, 0.0, 0x1.94a202e0bafc6p-462, 0x1.3d4e4c0cb6919p-565,
     0.0, 0x1.5fa6e3279529p-162, 0x1.d30fc790d09a4p-441, 0.0, 0.0,
     0x1.e000c648bc54ep-506
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincospid4_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincospid4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincospid4_u05kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
    return cpe_measure;
}
int32_t main(){
    double tmp;
    int tmp1;
    
    tmp = bench_wrapper();
    tmp1 = tmp < 0.0;

    if (tmp1) {

        return INT32_C(1);
    }
    return INT32_C(0);
}
