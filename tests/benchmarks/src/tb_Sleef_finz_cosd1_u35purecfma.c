/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd1_u35purecfma.c --function \
 *     Sleef_finz_cosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.f5124fa50880dp-148, 0.0, 0x1.17c7096149d26p-172, 0.0,
     0x1.b26c5d9e35bc8p-522, 0x1.349099c09f49ep-224, 0x1.7e824e404d98fp-397,
     0x1.3bb6eb31278bfp-68, 0x1.bba7b838a5e34p-908, 0.0, 0.0, 0.0,
     0x1.87f620079f3dep-606, 0.0, 0.0, 0.0, 0x1.e64ace0f16f7bp-680,
     0x1.5ba2832ea9b3ap-159, 0.0, 0.0, 0x1.8d8e062418cb2p-65, 0.0,
     0x1.7c66aa634c38fp-557, 0x1.9e88afc175491p-544, 0.0, 0.0, 0.0,
     0x1.32a0e34fb94a9p-659, 0x1.d7676c9a8be41p-43, 0.0, 0.0, 0x1.f95ffc677f5cbp-221,
     0.0, 0x1.77ae833979462p-993, 0x1.b2b9783998726p-782, 0.0, 0.0,
     0x1.38c0558866f81p-972, 0x1.1b5ee5875fc32p-722, 0.0, 0x1.6b67532a60a5cp-982,
     0x1.ea8dc75a7c91fp-330, 0x1.817cb0c908c25p-657, 0x1.c224e32899083p-170, 0.0,
     0x1.09a8df992d139p-972, 0x1.7210228358238p-618, 0x1.7c63a34934f9fp-521,
     0x1.c92ab7bb28706p-411, 0x1.a1a49b8bf1b05p-1002, 0x1.8f5a69db2789ap-873, 0.0,
     0.0, 0.0, 0.0, 0x1.8e8faff81cd7cp-249, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b036798787187p-20, 0.0, 0x1.d1163c395304cp-40, 0x1.1def36a57faaap-237, 0.0,
     0x1.19b40b43594eep-237, 0x1.b8605b3ed03b6p-165, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0bd2ad08109bep-504, 0x1.0177ca9dd30c5p-336, 0x1.ea9e5cabad66cp-2, 0.0,
     0x1.f0feee4006694p-1022, 0.0, 0x1.2003fe41d66e7p-127, 0.0,
     0x1.f277e4e1ee088p-779, 0x1.250d828194786p-964, 0x1.b212c22d6b923p-157, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3fbebcc9077f2p-783, 0x1.ca4edfea07609p-381,
     0x1.85667cd63d229p-889, 0.0, 0x1.168dd507b7036p-255, 0x1.c82b8914cba8fp-283,
     0x1.84ee25e90141fp-829, 0x1.adbfb25e819edp-384, 0.0, 0.0, 0x1.3e01e55a3bc99p-116,
     0x1.35edcecacb4eap-577, 0.0, 0x1p0, 0.0, 0x1.e8630dce1a46p-1004, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.aba959319e653p-405, 0x1.4cd6af0ff5cfbp-297, 0x1.9ec211499e1a8p-354,
     0x1.d851b1b94d0c2p-357, 0.0, 0x1.917eded7c43e5p-791, 0.0, 0.0,
     0x1.b9e917876e33bp-188, 0.0, 0.0, 0x1.95a5bb1866736p-315, 0.0,
     0x1.b37956956c081p-842, 0x1.59d8836333e45p-346, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c46f01ef274bp-159, 0.0, 0.0, 0.0, 0x1.5d0bca111467cp-532,
     0x1.4d0831e3b46ccp-234, 0x1.cdc192001601cp-547, 0.0, 0.0, 0.0,
     0x1.2f192303f3a76p-347, 0.0, 0.0, 0.0, 0x1.54dbfa19d03f6p-855, 0.0, 0.0,
     0x1.189ed095a6842p-747, 0.0, 0x1.fe40dff80f1d4p-24, 0x1.64af98febc99p-332,
     0x1.67e4f84f47f24p-996, 0x1.2bfc89fc1ebddp-327, 0x1.e81836bbd5346p-115,
     0x1.130ce4c71f0a3p-336, 0x1.70cb91c441cacp-696, 0.0, 0x1.47b5af1222a1dp-985, 0.0,
     0.0, 0x1.b36ff4971e595p-141, 0.0, 0x1.c6267583ba15cp-483, 0x1.3c0eb73f7cc46p-127,
     0x1.6ef5253c3af83p-78, 0.0, 0.0, 0.0, 0.0, 0x1.f89237c27d3dfp-101, 0.0,
     0x1.41f6dc990f894p-701, 0.0, 0.0, 0.0, 0x1.c357a81649065p-612, 0.0, 0.0, 0.0,
     0x1.90b2b936d9f89p-788, 0.0, 0.0, 0x1.b07d57b3fd6f9p-176,
     0x1.3fc55930b0d8fp-1001, 0.0, 0x1.878f059f8755p-194, 0.0, 0x1.cc3047355fcb5p-321,
     0x1.46010e3257c97p-676, 0x1.2f2706464442ap-1002, 0x1.e76d004aa476bp-209,
     0x1.ee5a1431d20b2p-949, 0x1.2c70b0633087ap-560, 0.0, 0.0, 0x1.1a5332928293ap-116,
     0x1.a92e4818b8513p-889, 0x1.cbeb34de79a8ep-538, 0x1.1405250c5b238p-67,
     0x1.68d12127b018cp-21, 0.0, 0x1.1d21ce36824b7p-52, 0x1.2bb840cb02ad5p-29,
     0x1.8b5a6483bfe03p-446, 0x1.68862e40e5584p-272, 0.0, 0x1.fca96856dcb75p-391, 0.0,
     0.0, 0x1.5206b028c0aa3p-18, 0.0, 0x1.5e61f9bf4742ep-713, 0.0, 0.0,
     0x1.955338e5c0eb8p-286, 0.0, 0x1.cb8e485aeab72p-487, 0x1.2fb9bb4d916b6p-128, 0.0,
     0x1.48b1329f2e636p-137, 0.0, 0.0, 0x1.fdcfe0626b41ap-108, 0.0, 0.0, 0.0, 0.0,
     0x1.7923e8183e69ep-151, 0x1.cd73fa2df021ap-468, 0x1.fb81c22a6fe8dp-756, 0.0,
     0x1.673f6def6bfccp-992, 0x1.61bb83c7665cfp-972, 0.0, 0x1.0fc1199743194p-889,
     0x1.51217af0f797ep-248, 0.0, 0x1.80ee7e2bf773bp-306, 0.0, 0x1.2642199dd1affp-38,
     0x1.39fe5a9993227p-345, 0.0, 0x1.e0291cd1a926ap-896, 0.0, 0.0, 0.0,
     0x1.424c8d5db18b2p-484, 0.0, 0.0, 0x1.97357754b4592p-135, 0x1.4b4f427792385p-104,
     0.0, 0.0, 0x1.ebb21694848a1p-258, 0.0, 0x1.be50233b4be5fp-526, 0.0,
     0x1.ef2c554b989b4p-865, 0x1.d05537ec69bf4p-838, 0x1.e9a6c4e4d82e1p-285, 0.0,
     0x1.b74705c85bb8ap-4, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3bef731259d82p-709,
     0x1.57a544364b87dp-581, 0x1.8ebc53e76e34cp-33, 0x1.091eb7af64522p-254,
     0x1.53d77c546f641p-393, 0.0, 0x1.cb634864a402p-434, 0x1.2e10875a85e85p-426, 0.0,
     0.0, 0.0, 0x1.90aa21fbacad7p-186, 0x1.3695b239f52aap-206, 0x1.032f2ee91d547p-411,
     0x1.11edd8ae33397p-829, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42c7973ed1891p-790, 0.0,
     0.0, 0x1.0fd87dbf5d007p-478, 0x1.10d56919283e7p-622, 0.0, 0.0, 0.0,
     0x1.35119eb7d79bbp-235, 0x1.049e98eff6c79p-185, 0.0, 0.0, 0x1.3660970e22fd7p-692,
     0x1.7de21b5b0f82ap-352, 0x1.ab90ffdc47f1ep-364, 0x1.b21f4b9a3532ap-860, 0.0,
     0x1.0e6a14a5148ddp-418, 0.0, 0x1.4d83aa0753a37p-570, 0x1.e7aabd3f7f1dcp-579,
     0x1.97a62d8b254fdp-715, 0x1.9ed791df59925p-573, 0.0, 0x1.332d889cd7dcep-699,
     0x1.48b3da2bdac48p-63, 0.0, 0x1.019af58d4ba6bp-3, 0.0, 0.0, 0.0,
     0x1.b2ee7958ee0dcp-911, 0x1.6a935f72d9918p-236, 0x1.760c5a1e54b92p-545,
     0x1.ebf42e8f71dep-812, 0.0, 0x1.be6d74c8187f6p-290, 0x1.9e7ebf75fa34ap-41,
     0x1.40e1357c3f52p-576, 0x1.4f93ab082c0b7p-109, 0x1.8acb56e14168cp-57, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bf63957be8f8ep-838, 0x1.3c7b03012482ap-270,
     0x1.18394ec52368dp-136, 0.0, 0x1.0696d8a94dad7p-967, 0.0, 0x1.5fc544beb96e9p-956,
     0x1.9fb9a9e7ca27dp-844, 0x1.ebd20c2e6cfbep-284, 0x1.4d7a44fe099b2p-929, 0.0,
     0x1.8674bf8c23494p-621, 0.0, 0.0, 0.0, 0.0, 0x1.290ac8d11c11fp-432, 0.0, 0.0,
     0x1.9670d120c1f2dp-172, 0x1.90a73b56a2791p-681, 0.0, 0.0, 0.0,
     0x1.64e95ec42356bp-505, 0.0, 0.0, 0x1.38209a5edf6dbp-58, 0x1.dc71d53a74b8bp-644,
     0x1.8b4b556d01294p-158, 0.0, 0x1.07a319ef8881p-966, 0x1.816189eea93b2p-743, 0.0,
     0x1.7bd85fd456186p-422, 0x1.c7e0c05ed6e22p-751, 0x1.ecac492aed445p-944, 0.0,
     0x1.9ea0e0169eaa4p-584, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72f32cf92d343p-229, 0.0, 0.0, 0.0, 0x1.eadd745092962p-854,
     0x1.5a958fb14a8cdp-413, 0.0, 0.0, 0x1.438e609fea516p-181, 0.0, 0.0,
     0x1.7e7650f0655ebp-284, 0x1.d586979bc65aep-333, 0.0, 0x1.efcee8f0c5868p-207, 0.0,
     0x1.7a8aa85f4b54cp-1, 0x1.04004e9bd7746p-985, 0.0, 0.0, 0x1.cadc4eb0febd9p-365,
     0x1.aae1cd48eff81p-85, 0x1.32201a2ff0f16p-217, 0x1.4cbb144b99363p-123, 0.0,
     0x1.b796f35b66284p-575, 0x1.8b67f9849f063p-252, 0.0, 0x1.c08f9f108aa57p-1008,
     0.0, 0.0, 0.0, 0x1.593373ad99a67p-737, 0x1.32d01887d4d88p-385,
     0x1.70f16a87985bfp-943, 0.0, 0.0, 0.0, 0x1.8c8a5132085p-698,
     0x1.96d04d1cfb256p-589, 0x1.68a771ffa6bc5p-782, 0.0, 0x1.bdb1d523f3944p-601, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.71795756187fp-176, 0.0, 0x1.f885cdad6d698p-387,
     0x1.5178a5a1b594fp-19, 0x1.7a2aac578808ep-17, 0x1.c2da3e6851dep-434, 0.0, 0.0,
     0x1.b584f8fa319d7p-930, 0.0, 0x1.cd13e00ae7388p-968, 0x1.3456a487c322bp-616, 0.0,
     0x1.6b4fd16b22ba2p-982, 0x1.eb1582c8278d3p-710, 0x1.81bb2aae542f7p-454,
     0x1.e3cdeb8362d98p-915, 0x1.f2b9d6186045bp-983, 0.0, 0x1.16e51daf44192p-396, 0.0,
     0.0, 0x1.4123792946eb5p-875, 0.0, 0.0, 0x1.bfa335b4d3c3ap-119, 0.0, 0.0,
     0x1.c4f11513e29a8p-885, 0x1.073d22ad22752p-115, 0.0, 0.0, 0.0,
     0x1.6ca8329ba624ap-768, 0.0, 0x1.7e29c6d9dab7fp-810, 0x1.32f1797dcc4eep-536, 0.0,
     0x1.911efd953c639p-171, 0x1.fc31509daa187p-905, 0x1.5f044695f119ap-32, 0.0,
     0x1.eb4bf7fef16b4p-723, 0.0, 0.0, 0x1.0891dedc38114p-436, 0x1.0c00fe634fa7cp-706,
     0x1.cfbfce87ad2bcp-355, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.333c770e307edp-209, 0x1.ea0dd904c2152p-150, 0x1.df5925fd359e2p-811,
     0x1.52b2f15762026p-822, 0.0, 0.0, 0.0, 0x1.0ddc86e31abbep-532, 0.0, 0.0, 0.0,
     0x1.78d384a069e2ap-458, 0.0, 0.0, 0x1.17084bf48c376p-855, 0x1.e6406e87bc8e4p-902,
     0.0, 0.0, 0.0, 0x1.9b2cca740183dp-979, 0x1.af14fd1782199p-255, 0.0, 0.0,
     0x1.6b8205c9d3ad8p-97, 0x1.83a7dfa035796p-416, 0.0, 0.0, 0.0, 0.0,
     0x1.08a9c94be682ep-533, 0.0, 0x1.5db46f1b92834p-215, 0x1.82f783e544754p-534, 0.0,
     0x1.11d125376f62fp-387, 0x1.bb99bf43e9fb5p-125, 0x1.6d7baf89ccec6p-136, 0.0, 0.0,
     0.0, 0.0, 0x1.0d4bcd9aaaec3p-739, 0.0, 0.0, 0x1.e79e318a5530dp-587, 0.0,
     0x1.df820399a5298p-361, 0.0, 0.0, 0.0, 0x1.43ca2c61df9bcp-991,
     0x1.3f3e5b9af9235p-318, 0x1.4e0246b0d18bep-476, 0x1.fc535853bd9c7p-114,
     0x1.ebb96769f2ac8p-898, 0x1.26c5085e7cbdap-262, 0.0, 0x1.c23c754f9033ep-962, 0.0,
     0.0, 0.0, 0x1.97ad34b4fe7c2p-108, 0.0, 0x1.810824b83498dp-614,
     0x1.b075d726e43c7p-505, 0.0, 0.0, 0.0, 0.0, 0x1.a20c002978c49p-710, 0.0,
     0x1.db318c1834d4ep-307, 0.0, 0.0, 0x1.25185d99f80d3p-609, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4ddb9e9082521p-75, 0.0, 0x1.bd3fac86702ecp-181, 0.0,
     0x1.b3057b41d4fc7p-834, 0x1.9555c57e5ce5cp-299, 0x1.8dda6e25d0ep-87, 0.0,
     0x1.90ca72907e456p-117, 0.0, 0x1.5e0adfa7805b6p-848, 0x1.02a7c6c81c38ep-870,
     0x1.6310a9364ae2bp-983, 0.0, 0x1.d0b292bdc0173p-696, 0.0, 0x1.e062ae81ce003p-407,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b620ac9f1e963p-812, 0.0, 0.0,
     0x1.321b15ac01145p-11, 0.0, 0x1.feb4695ad0706p-209, 0.0, 0x1.ba1985f6c77eep-938,
     0.0, 0x1.06663f5468a03p-110, 0.0, 0x1.7802820e68884p-308, 0x1.ee273e37c2951p-883,
     0.0, 0x1.c211e574d47d6p-737, 0x1.32d57227ce044p-515, 0.0, 0x1.c481ffcd5099bp-249,
     0x1.a399c0a0b8c4dp-240, 0x1.32277637fbf01p-182, 0x1.476fb3c862083p-824,
     0x1.702064d0255a2p-130, 0x1.effc43fddaedap-357, 0x1.1af4abdf5e09bp-2,
     0x1.1eb8e227934e9p-90, 0.0, 0x1.5fb0e2e06edb7p-487, 0.0, 0.0,
     0x1.719e260592363p-763, 0.0, 0x1.ea5088e942b8ep-43, 0x1.0a9014d3c7625p-978, 0.0,
     0.0, 0.0, 0x1.3d477dc83b353p-848, 0.0, 0x1.6a756999afeap-763,
     0x1.23b93e7c003b4p-924, 0.0, 0.0, 0x1.1a5680808ad44p-922, 0.0, 0.0,
     0x1.7bbfb6af64fdep-839, 0.0, 0x1.6605fee831424p-95, 0x1.8841ee5f042afp-62,
     0x1.7af6c15cd7f4p-708, 0.0, 0.0, 0x1.f2510a7103029p-498, 0.0,
     0x1.ac7c602affeb7p-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.89e72c5572f3ap-228, 0x1.8f141f9ec28dbp-371, 0.0, 0x1.98374cb6b70ddp-552, 0.0,
     0.0, 0.0, 0.0, 0x1.613e80ab90316p-810, 0.0, 0x1.c387617bf85eep-768,
     0x1.0d43c8659ca44p-744, 0.0, 0.0, 0x1.957c6dae331f8p-6, 0x1.32566d7c2e76dp-14,
     0.0, 0.0, 0x1.f2869b23368bbp-936, 0.0, 0x1.afaaed781e981p-221,
     0x1.976164da65ab9p-867, 0x1.ad2cfa44b617dp-711, 0x1.2170be38bce6dp-859,
     0x1.0ebaec963a75ap-921, 0x1.18f1d7363004ep-153, 0x1.46fadf34c906bp-504,
     0x1.97a38a8cf065ap-78, 0.0, 0.0, 0.0, 0x1.0e118e6d795eap-240,
     0x1.d45c21a54544bp-70, 0.0, 0.0, 0x1.c3d995e8cf0d9p-81, 0x1.819dc1beab0f3p-346,
     0x1.557126bffc3acp-417, 0.0, 0x1.fe210cb4b6c42p-267, 0x1.0ef051cf4b664p-81,
     0x1.ae70c31d81a3cp-591, 0.0, 0x1.1d1734078921fp-381, 0.0, 0x1.7a291d387cb24p-727,
     0x1.75d6511c33a64p-855, 0x1.223b23c1392acp-304, 0.0, 0x1.12f9ba5fb93aap-762,
     0x1.955f91af36eccp-499, 0x1.b0a4221afcf07p-680, 0x1.7cd7464fd5b6cp-112,
     0x1.2dff1a2771b4fp-791, 0.0, 0.0, 0.0, 0x1.2dc8e08010f0ep-620, 0.0,
     0x1.961393d2f7755p-645, 0.0, 0.0, 0.0, 0x1.d15f0769202a5p-597, 0.0,
     0x1.d04439118c9f1p-809, 0x1.971733fb7dccp-886, 0.0, 0x1.0bf40b1ddc16bp-753, 0.0,
     0.0, 0x1.6a5589660311bp-250, 0x1.dc80b135e8f86p-254, 0.0, 0x1.0f7081b326bd6p-893,
     0x1.1b3d267142373p-970, 0.0, 0.0, 0.0, 0x1.30132958532c7p-924,
     0x1.696b9921cb271p-253, 0x1.a7f723c4730ep-6, 0x1.857b54e28b24ep-225, 0.0,
     0x1.367ca9b25d2dbp-878, 0.0, 0x1.4bd52a31b3abbp-353, 0x1.e1173ab09017cp-922, 0.0,
     0.0, 0x1.a8573936ed552p-531, 0.0, 0x1.1cfa33cad6366p-906, 0.0, 0.0,
     0x1.d39a122d67953p-742, 0.0, 0.0, 0x1.a44100b43161cp-58, 0.0, 0.0, 0.0, 0.0,
     0x1.eeb0e5c4cd73bp-288, 0.0, 0x1.a40c7df374486p-983, 0x1.c729276990f76p-646,
     0x1.7d05d88cb234dp-122, 0.0, 0x1.3443e8abf21b2p-518, 0x1.647280d8cd336p-374, 0.0,
     0.0, 0.0, 0x1.beeedfe12a97dp-338, 0.0, 0.0, 0.0, 0x1.82d2a8e675e78p-203,
     0x1.9f0b16f51dd96p-735, 0.0, 0x1.93c0e557ca1fep-241, 0x1.629a147e2e397p-48, 0.0,
     0x1.8ca70f555f795p-646, 0.0, 0x1.9a0b026c8dad1p-361, 0x1.412b64d1cedf9p-307,
     0x1.3ff5e2eceb1c3p-561, 0.0, 0x1.b442b7bc93da6p-477, 0x1.71cb87719e6fbp-855,
     0x1.9279749364233p-508, 0x1.897f8337dcd8ep-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.53e74d8c6662ep-265, 0.0, 0.0, 0.0, 0x1.6c44f9e5bf147p-417, 0.0,
     0.0, 0.0, 0x1.bb489a5040f37p-505, 0.0, 0x1.53101557d5d59p-49,
     0x1.ae4d61c4d6c12p-882, 0x1.236c3e16457dp-934, 0x1.6c771649d9225p-320, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b932a292deb5ep-868, 0.0, 0x1.a0b2e5fd40423p-82, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e2ef423c62b75p-744, 0x1.f068bc6dec38bp-1005,
     0x1.a7be1dbbfe11fp-929, 0x1.ad09e72a65737p-236, 0x1.2e24258ebc574p-537,
     0x1.94a198ab4074fp-171, 0x1.d419fd26608abp-983, 0x1.8fabdfa0b2258p-523, 0.0, 0.0,
     0.0, 0.0, 0x1.f65c2664906b8p-366, 0.0, 0.0, 0.0, 0x1.c6d00d4b380a4p-439,
     0x1.cf9d95b8d75ap-406, 0.0, 0.0, 0x1.b22cf0ebcc754p-87, 0.0,
     0x1.d00938fffe777p-378, 0x1.654ce056f8385p-33, 0x1.8e8165907af0dp-742, 0.0,
     0x1.fb6558ae6b27dp-657, 0x1.cdf49f93ebd7dp-586, 0x1.f97c538db48ap-830, 0.0, 0.0,
     0.0, 0x1.8504e3d082c6ap-356, 0.0, 0x1.bc939caa12cd8p-181, 0.0,
     0x1.5872da4edef29p-94, 0x1.0d8beca609ff9p-96, 0x1.86e38590a24b9p-531,
     0x1.61375f2408079p-488, 0.0, 0x1.ceac7daea894p-245, 0.0, 0.0,
     0x1.8ea10fd867d5p-621, 0x1.fa8ef35e55c6fp-778, 0.0, 0x1.61635a94bbda6p-366,
     0x1.7fa49e828015fp-243, 0.0, 0.0, 0x1.bb815c4315085p-666, 0x1.69ad34cfbd706p-585,
     0.0, 0.0, 0x1.2f4449c8ad74ep-847, 0x1.f70e237b79d09p-815, 0.0, 0.0, 0.0,
     0x1.b4e2e21a815e8p-825, 0x1.33f55d2b8993ep-513, 0x1.1ad905308e9d4p-760, 0.0,
     0x1.433ddca75b7a8p-988, 0.0, 0.0, 0.0, 0x1.b2c0a6dc0a73dp-982, 0.0, 0.0,
     0x1.ebc9272e198a2p-223, 0.0, 0x1.e4949bac9bda4p-101, 0x1.936e362f3a911p-506,
     0x1.af4094406fa84p-125, 0.0, 0.0, 0x1.a1beea173c13ep-278, 0x1.d6e77dd2a1985p-503,
     0x1.d8b6ce7fbeda7p-1003, 0.0, 0.0, 0x1.0443de004e66bp-596,
     0x1.a43568a07035ep-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a27c5c26e363p-753,
     0.0, 0.0, 0.0, 0x1.5d601f9f6b57dp-120, 0.0, 0.0, 0x1.6a749debbd327p-888,
     0x1.3853e04aa3decp-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52ab732ffa74p-1011,
     0x1.cfbd987801485p-108, 0.0, 0x1.72ea4105747b6p-628, 0x1.93dd2eb041f73p-462,
     0x1.f26ef8a44e594p-106, 0x1.0ddba86eca5edp-855, 0.0, 0.0, 0.0,
     0x1.3a03df4e198b5p-235, 0x1.bcabff687f51cp-41, 0.0, 0.0, 0x1.092f91e6774a5p-484,
     0.0, 0x1.4caadc5d7dbeap-497, 0.0, 0.0, 0.0, 0x1.bb08dd4467c2fp-217, 0.0, 0.0,
     0.0, 0x1.d02259edcbb7fp-220, 0.0, 0.0, 0x1.e5f4f582b676dp-162,
     0x1.bf5424ea75acp-709, 0x1.f500c0f842cdp-518, 0x1.3f3c7c862a799p-479, 0.0, 0.0,
     0.0, 0.0, 0x1.94a668f3da57fp-362, 0x1.2a647d062d3b6p-976, 0x1.a9c9da4f6416fp-398,
     0.0, 0x1.5d386ef72babap-151, 0x1.3e7b18e864bf2p-346, 0.0, 0x1.2c0689ddb376ep-36,
     0x1.ff8be56d5adf3p-720, 0.0, 0.0, 0.0, 0x1.d885ac6943ce4p-717, 0.0,
     0x1.76ef237ec8c04p-1005, 0.0, 0.0, 0x1.559ea7b811c6ep-713, 0.0,
     0x1.e7a286d76dc01p-887, 0.0, 0.0, 0.0, 0x1.da837bce30827p-661,
     0x1.90f14b6d39cb3p-254, 0x1.4da2b85391fbbp-468, 0.0, 0.0, 0x1.95aeec0d22b9bp-162,
     0x1.cb98b62fad828p-976, 0.0, 0x1.453df01df9675p-311, 0.0, 0.0, 0.0,
     0x1.8938753f6640cp-962, 0x1.40bcd08dfa5cp-685
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_cosd1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_cosd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
