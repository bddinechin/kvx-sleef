/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind1_u35purecfma.c --function \
 *     Sleef_finz_asind1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0.0, 0x1.8a2937adbba09p-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e34a915ecc146p-207, 0.0, 0.0, 0x1.0f2ff90c1c7dfp-921, 0.0,
     0x1.72e9831ffb8fdp-198, 0x1.8f820e49ad8cfp-255, 0x1.6c1eecb1ae33bp-380, 0.0,
     0x1.10e52a3223f35p-214, 0x1.6fb30fa5dde2bp-696, 0.0, 0x1.bc68f70311c13p-345,
     0x1.05583cd7810c7p-11, 0.0, 0x1.68695e5de7fcp-358, 0x1.672710fd4bebdp-1010, 0.0,
     0.0, 0x1.d119123e43547p-50, 0.0, 0.0, 0x1.147d560ba7342p-1017, 0.0, 0.0,
     0x1.30dd25c51f7ddp-212, 0.0, 0x1.e63a04d98ae7bp-527, 0x1.23cc1991db958p-231, 0.0,
     0.0, 0.0, 0x1.3590a09394079p-653, 0x1.48b2d80d1129ep-117, 0x1.e9df833272536p-68,
     0.0, 0x1.34fca9ba50326p-611, 0.0, 0x1.9fec89e09da18p-522, 0.0, 0.0,
     0x1.7039ddae2b6d3p-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95a8bce507447p-996,
     0x1.04ec4eacce72ep-168, 0.0, 0x1.c21a855246f7p-840, 0x1.229a4480ab6b3p-945,
     0x1.de9313829b8a1p-754, 0x1.e7429b5f73191p-489, 0.0, 0x1.c9067952b87c7p-470,
     0x1.68c68f36686c3p-854, 0x1.e280d66a9fe85p-831, 0.0, 0x1.214a1f0588889p-27,
     0x1.e7d136f897d7cp-1016, 0.0, 0.0, 0x1.29454b7e68bbep-738,
     0x1.be97095ff51a1p-346, 0.0, 0x1.77a3c29eb5246p-1020, 0x1.68168158bc33dp-869,
     0x1.2a676961e27e3p-717, 0x1.191c173a258d1p-793, 0x1.9bed3de50c8e4p-290,
     0x1.83a75853b8579p-904, 0x1.c3b55422ee96ap-748, 0.0, 0.0, 0.0,
     0x1.c5b3d96089b9bp-240, 0x1.0a6b13f25ff14p-190, 0x1.807b2d73e7b24p-920,
     0x1.7d1a32b57e304p-383, 0x1.6385ac4a6a719p-199, 0x1.63f019398f98ep-734, 0.0,
     0x1.c02f7ed55420fp-279, 0x1.3914aad92b8c6p-563, 0x1.5c9f614c8fdedp-978, 0.0,
     0x1.a27849a8693cp-964, 0x1.e1d0c6c02ad82p-252, 0x1.b5ffdbfc1dd16p-658, 0.0,
     0x1.5c1b03e147bb3p-888, 0x1.c68515bfeec43p-939, 0.0, 0.0, 0.0,
     0x1.6f265a726fd86p-910, 0x1.cadffd2d19e2p-917, 0.0, 0x1.12ed2cc4de2acp-562,
     0x1.5b2fd0de5c707p-513, 0.0, 0x1.11d61131b562fp-137, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4b8aa9c9b5a27p-973, 0.0, 0.0, 0x1.9d701d842bfdcp-32,
     0x1.30be75abbef01p-726, 0.0, 0.0, 0x1.d8681454f4135p-965, 0.0,
     0x1.70acaef34bb2p-483, 0x1.c174fb5d00db1p-879, 0.0, 0x1.aa47c06c8b065p-237, 0.0,
     0.0, 0x1.2c1ab263c68a8p-529, 0.0, 0x1.c8d2be03c663dp-302, 0.0,
     0x1.387cd3a40e9c9p-965, 0.0, 0x1.dab794369bf62p-113, 0.0, 0x1.c9944c8ad0165p-449,
     0.0, 0x1.2f812086ea7edp-893, 0.0, 0x1.cc7c7095e95c2p-317, 0.0, 0.0, 0.0,
     0x1.2b6e91732254p-823, 0.0, 0.0, 0x1.5c99938d2d34p-718, 0x1.5e766ae821844p-788,
     0x1.4b35296d12c8ep-886, 0x1.72c7ed0b8d7dcp-833, 0.0, 0x1.dcc049ffcff2bp-193, 0.0,
     0x1.05bb5b800294dp-763, 0.0, 0.0, 0.0, 0x1.cf70576242e2dp-207, 0.0, 0.0, 0.0,
     0.0, 0x1.60525bcab41f2p-35, 0x1.f16307b4382f2p-10, 0x1.556994a65e26ep-879, 0.0,
     0.0, 0.0, 0x1.b6de34a12bb6bp-161, 0.0, 0x1.57f137efdbcbbp-112,
     0x1.b5b5bd76f35c8p-74, 0x1.aa651df698e82p-59, 0.0, 0.0, 0x1.7ea8281a27984p-992,
     0.0, 0.0, 0x1.3317fac4ca8dep-810, 0.0, 0.0, 0x1.42988a2cb4523p-382, 0.0,
     0x1.ba4d79dc41b52p-225, 0x1.08ead36bd9ceep-431, 0.0, 0.0, 0.0,
     0x1.21915943d26d9p-247, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56287edd465bap-53,
     0x1.6c14a87b79103p-345, 0x1.14de3650dd443p-828, 0.0, 0.0, 0x1.1a0afd28f8189p-569,
     0.0, 0x1.9705b20469e4ap-835, 0.0, 0x1.8d5ee02981b56p-626, 0.0,
     0x1.f2a260a95e0a5p-315, 0.0, 0x1.c464073696129p-289, 0x1.b7f3c33588e9bp-914, 0.0,
     0x1.2fce0fd504411p-454, 0.0, 0.0, 0x1.03ef4b09f4ca1p-587, 0x1.9e490a1fb90edp-92,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b48eb9f63e07p-340,
     0x1.aeb9d4dade734p-757, 0.0, 0.0, 0.0, 0x1.f5b37cf9783cep-730,
     0x1.38f2a7375b613p-922, 0x1.c13b716f99df8p-963, 0x1.183f3aece3208p-319, 0.0,
     0x1.f95097a3efbf5p-188, 0.0, 0.0, 0x1.279992ecda85cp-766, 0x1.93cd8553cb2dfp-120,
     0.0, 0.0, 0x1.f74fdadbf1e9dp-298, 0x1.ed3d3a8b85d39p-631, 0x1.ab5805893509ep-105,
     0x1.dbac7f5d6d802p-924, 0x1.c600e221f8738p-118, 0.0, 0x1.cd451470006ebp-395,
     0x1.eb41f077bee68p-910, 0x1.051cd299302ccp-832, 0.0, 0.0, 0x1.94d40a8f26ba2p-495,
     0.0, 0.0, 0.0, 0.0, 0x1.f01532de1f5bfp-64, 0x1.9b9a3303744b2p-625, 0.0,
     0x1.c4dd2309505c5p-650, 0x1.c8bcffa3d05e6p-795, 0.0, 0.0, 0x1.5d43d592d9357p-315,
     0.0, 0.0, 0x1.8c45faaa43948p-481, 0x1.a09287e6a1ca1p-371, 0x1.dd668903df0dp-134,
     0.0, 0x1.8f2d6e1920039p-614, 0x1.7399cc8347fcdp-884, 0x1.4f60a0d2458adp-1012,
     0.0, 0x1.18ff77bab127p-638, 0.0, 0x1.b95f8ac0105f4p-495, 0x1.ee800ef48e7aep-295,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5fe116add32ddp-951, 0.0, 0x1.75d4641250298p-602,
     0x1.c763f2e93047fp-100, 0.0, 0x1.bde2d00a01e4dp-959, 0.0, 0.0,
     0x1.d049ff5ca8d02p-260, 0.0, 0x1.6e3da3c31eba6p-284, 0x1.60af8a9ba0ba3p-760, 0.0,
     0.0, 0.0, 0x1.87ac62ccff6f9p-552, 0.0, 0x1.a02aa0f4ff432p-820,
     0x1.990f64e5f1a63p-895, 0.0, 0x1.e314baa223d28p-912, 0.0, 0x1.22c2c99b2c02p-19,
     0x1.3700baf10bc04p-1017, 0x1.c5947e4c4cda6p-639, 0.0, 0x1.4f7a4952915b2p-558,
     0.0, 0x1.8f804941614e7p-683, 0x1.8bce03a902214p-870, 0x1.60bac9378433p-50,
     0x1.a3d6bbd027eb8p-909, 0.0, 0x1.6017f90f39c2fp-464, 0.0, 0.0, 0.0,
     0x1.2ace920ee5e67p-683, 0.0, 0x1.78cb3511fffe6p-585, 0.0, 0.0,
     0x1.bc12696459b6ep-659, 0.0, 0.0, 0x1.dee96e6225384p-8, 0x1.9e43740a6c5e4p-859,
     0x1.dd02468f3eb18p-380, 0x1.87095dca40f36p-74, 0.0, 0x1.32cd21a6d4a31p-884,
     0x1.b2e56dcac5092p-917, 0x1.b9ca80a649a9p-462, 0x1.6fa773664afdap-621,
     0x1.c5f0f83fa29ep-805, 0.0, 0x1.0dc6afec96961p-791, 0x1.b9d1e79a7619ap-623, 0.0,
     0x1.4e38079d6e77bp-728, 0x1.ddd2d059ac56ap-339, 0x1.b11b77de296b8p-597,
     0x1.17d3bc68b2b9ap-231, 0.0, 0x1.e32e68c3bd423p-750, 0.0, 0.0,
     0x1.0dccfd125fcecp-512, 0x1.d104c25671f7cp-180, 0x1.c6b42858c6a58p-1021, 0.0,
     0x1.081c7d8c2c3d7p-969, 0.0, 0x1.f24769ebd75f4p-390, 0x1.b0cf589c00cf6p-197, 0.0,
     0x1.0f07c436c381dp-659, 0x1.44bc3bbff73fbp-641, 0x1.27886aa2037fdp-724, 0.0,
     0x1.4bbcbc37262a7p-450, 0.0, 0x1.0c8b58e7e98ffp-88, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b20a5a373a0bcp-556, 0.0, 0x1.2f86172f76eddp-594, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d684aca763f4dp-928, 0x1.99562845d06a4p-659, 0.0, 0.0, 0.0,
     0x1.ea825b6d5745cp-358, 0.0, 0x1.ada3e7e4e685cp-227, 0.0, 0x1.f0c924b7b3bfap-986,
     0x1.78c54a0486618p-293, 0.0, 0.0, 0.0, 0x1.e6d31a10f5e82p-877, 0.0,
     0x1.edc9755e8054dp-741, 0.0, 0.0, 0.0, 0x1.9363969f57b1fp-809, 0.0, 0.0,
     0x1.4a183ae6b0e15p-741, 0.0, 0.0, 0.0, 0x1.f7e12df721f52p-535, 0.0, 0.0, 0.0,
     0x1.ca10b40aae93dp-22, 0.0, 0.0, 0x1.5ade787dcf45ep-812, 0x1.5ae72f767ea23p-341,
     0x1.98bb2497ac4e9p-703, 0x1.04509b4cd6641p-447, 0.0, 0.0, 0x1.62d9a2846a925p-487,
     0.0, 0.0, 0.0, 0x1.16f2dba34d0d4p-730, 0.0, 0x1.d610715adf395p-932,
     0x1.b6ac1f2208effp-958, 0.0, 0.0, 0.0, 0x1.d418b49965f9bp-907,
     0x1.8622b5fa8bcddp-392, 0.0, 0x1.f1b5e63b6d56ep-614, 0.0, 0x1.5d25e4a9e09adp-109,
     0x1.fce5950826b84p-712, 0x1.b48e188804518p-148, 0.0, 0.0, 0.0, 0.0,
     0x1.4fc04dc42e256p-791, 0.0, 0x1.eed998e414e7ep-887, 0x1.295f62dbee28cp-1003,
     0x1.2608ded48873ep-47, 0x1.a830895aed007p-355, 0.0, 0.0, 0x1.9cf58391f7c9fp-964,
     0.0, 0.0, 0.0, 0.0, 0x1.27b72c551f9e9p-277, 0x1.03fa0faf698c8p-23,
     0x1.a388d150bbb4p-175, 0.0, 0.0, 0x1.a6ae6ae335652p-393, 0.0, 0.0, 0.0,
     0x1.21d9659c5984p-432, 0.0, 0x1.b7c45e0791b2dp-204, 0x1.6f443c0c235d6p-267, 0.0,
     0x1.ca39b21028e1ap-66, 0x1.467dac3159509p-512, 0x1.97ba20bfc9f87p-420, 0.0, 0.0,
     0x1.56e151c514b26p-121, 0.0, 0x1.10779b49d93b1p-407, 0x1.992124a9e8aa8p-317,
     0x1.61e12b64fe3cfp-352, 0.0, 0.0, 0.0, 0.0, 0x1.e0565c8cc5a39p-979, 0.0, 0.0,
     0.0, 0x1.133a5f6c2bc6ep-858, 0x1.b5ab3e0d7974bp-756, 0x1.830f0a631a066p-323,
     0x1.3b8a9e3f1689fp-869, 0x1.1c7428f71a278p-33, 0.0, 0x1.ef390c37603eep-116, 0.0,
     0x1.c119c50c1bc28p-148, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6ef7b7391bfp-597,
     0x1.e2979629a33b4p-207, 0.0, 0x1.b7dcf43aca908p-293, 0x1.40d9f8cce40c8p-60,
     0x1.4dbad274b03c6p-1, 0.0, 0x1.a1d68ccb618d1p-233, 0x1.9413d88137958p-695,
     0x1.855e1993c85a6p-563, 0.0, 0.0, 0x1.0cd6f7a78ef44p-638, 0.0,
     0x1.1e1ae4137f9eep-308, 0.0, 0.0, 0.0, 0x1.86f7b5ea929e4p-585,
     0x1.b86fa10d55ac1p-549, 0.0, 0x1.0860d3a9882f7p-409, 0.0, 0.0,
     0x1.25b246bd6e012p-412, 0.0, 0x1.ef0b21fc17d78p-747, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.538796b4d6d6cp-559, 0.0, 0.0, 0.0, 0x1.e0551ce4895dfp-868, 0.0,
     0.0, 0x1.09800111e0441p-724, 0.0, 0x1.994e536cfa257p-140, 0x1.cccb979ec8722p-691,
     0x1.7843fcd42973cp-395, 0.0, 0x1.b5d8e5399fbe4p-467, 0.0, 0.0,
     0x1.40a50775fc1dbp-823, 0x1.93b6c783d6ddp-279, 0.0, 0.0, 0x1.6d426b1257d4cp-279,
     0x1.2bd8fdbfdeeb5p-349, 0x1.002f11d132996p-465, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb941c78a467dp-342, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83e9189042ccap-41,
     0x1.22479260bd965p-456, 0x1.1c1cda888fp-690, 0x1.e60b28c0dccf7p-120,
     0x1.f7bf1057cd8f8p-472, 0.0, 0x1.af11da645e1cp-863, 0.0, 0.0, 0.0,
     0x1.cff622887069fp-464, 0x1.3b86ae2556fefp-426, 0x1.365ffbaa540adp-486, 0.0,
     0x1.ec72d5480c5eep-555, 0.0, 0x1.b53f7bba7f5e9p-529, 0.0, 0.0,
     0x1.711382047390dp-757, 0x1.2dc1946da34f5p-900, 0x1.e34ddc76bc0aap-979,
     0x1.f3f1b5b19f976p-26, 0x1.3757eea0123d3p-734, 0.0, 0x1.5db6d914ce575p-433, 0.0,
     0x1.3ec6623523132p-778, 0x1.c36ae72e679d7p-84, 0.0, 0x1.dfc0d146024cdp-153, 0.0,
     0.0, 0x1.c3f690f79473cp-221, 0x1.aaa66a16f28d7p-26, 0x1.2ac410ac7ba64p-395, 0.0,
     0.0, 0.0, 0.0, 0x1.82eabde211f3dp-993, 0x1.915cc479e0a07p-98, 0.0,
     0x1.ccede49d4178cp-875, 0.0, 0.0, 0x1.5fcef2c410c8ep-469, 0.0, 0.0,
     0x1.e97052dfcc86dp-897, 0.0, 0x1.0f55625a0c521p-274, 0x1.6583338e5a456p-107, 0.0,
     0.0, 0.0, 0.0, 0x1.8d8fde382310ap-660, 0x1.b1473cf9f4a54p-1022, 0.0,
     0x1.ae2e11d45c437p-156, 0x1.bcfc3d93e5cc2p-916, 0.0, 0x1.a65125d9c6aaep-320,
     0x1.fe4e211bbc416p-34, 0.0, 0.0, 0x1.b516db551ac54p-232, 0x1.75e38ab56429p-340,
     0.0, 0x1.d6933d3d5de43p-451, 0x1.ca77446dc13f4p-326, 0x1.3c8c4c80bc829p-562,
     0x1.f148cf6c8c2e5p-385, 0x1.66baa7ac78f52p-341, 0.0, 0x1.938afe14092dbp-800, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc074dfb16cb9p-967, 0x1.daea07db1498cp-663,
     0x1.b8b6302d9505ep-924, 0.0, 0x1.36e92530ad7ap-558, 0.0, 0x1.0720d820e6e17p-989,
     0x1.b89c6b2d63ab1p-496, 0.0, 0.0, 0x1.ca7ccb666bfffp-674, 0x1.62b783ae18bdep-883,
     0.0, 0x1.115eac27aadccp-668, 0x1.46af27ad01772p-86, 0x1.18b8ee04257a4p-570, 0.0,
     0x1.6fb95f15cf6d8p-373, 0x1.bda9cb11c072fp-103, 0.0, 0x1.0757cf7587a6ap-316,
     0x1.08d4251a3c4aap-855, 0.0, 0.0, 0.0, 0.0, 0x1.4f8025f6fbb5cp-585,
     0x1.5f0a5ba74fa58p-586, 0.0, 0x1.76dad2dbbae9dp-411, 0.0, 0x1.956bf2f675458p-15,
     0x1.346f8ed8e0ae6p-740, 0.0, 0.0, 0x1.eb28b41f1539ap-185, 0x1.51c2ee2829587p-48,
     0.0, 0x1.7ffddd99c08f7p-246, 0x1.136901a995b13p-649, 0x1.5adbe62ac28f4p-151,
     0x1.08ed8f29c7c57p-128, 0x1.12276edea643cp-1000, 0.0, 0.0,
     0x1.22e9ce7e1ecb8p-306, 0x1.35af7685da17ap-729, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9654114d2b155p-409, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fb3d37eac77bdp-271, 0.0, 0.0, 0x1.b4e5a2d3bfe2p-672, 0x1.191362b3d04a9p-445,
     0x1.05f93d8736973p-1016, 0x1.5fb79d622e804p-632, 0x1.3aa2ecd378ba1p-921,
     0x1.87fef4e49d80bp-342, 0.0, 0.0, 0.0, 0x1.8401d8df3eb58p-64,
     0x1.9ba3bc20b7599p-106, 0.0, 0x1.f876bd924e4adp-834, 0.0, 0x1.21233fe84a587p-8,
     0.0, 0x1.a598c2fc88bb8p-498, 0.0, 0.0, 0.0, 0x1.d0ecb2edd7f2fp-1020, 0.0,
     0x1.ff6b1bbfb8059p-691, 0x1.4ea3122830307p-643, 0.0, 0.0, 0.0, 0.0,
     0x1.b3b01bec7b84ep-746, 0x1.79fd5e3aaf2a6p-569, 0.0, 0.0, 0.0,
     0x1.9f698f7588d3cp-835, 0x1.75e546f8a9f21p-78, 0x1.8e29e2ccdb004p-326, 0.0,
     0x1.a8e67bd4c77a9p-146, 0x1.ab3270e5c6d5ap-259, 0x1.c587a0036129ap-989,
     0x1.2b136f79cb006p-300, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf20efb8adec3p-336, 0.0,
     0x1.dbcd0a9e583b5p-393, 0.0, 0.0, 0.0, 0x1.67f937191b52bp-993,
     0x1.6f38710eb30e5p-654, 0x1.4cdbc55bee535p-241, 0.0, 0.0, 0x1.cb835131139f8p-489,
     0.0, 0.0, 0.0, 0x1.cfa5e871164aep-706, 0.0, 0x1.abad701c852eep-542,
     0x1.f2a6de427450dp-840, 0x1.cb5f4e71ba0b7p-316, 0.0, 0.0, 0x1.2dc34d22a0b23p-469,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2194e0c9d696p-346, 0.0, 0.0, 0x1.aa9b3300ec292p-31,
     0.0, 0.0, 0x1.0d379f1178819p-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.308e3ea0c2b21p-672, 0.0, 0x1.7aa1dc50a9464p-453, 0.0, 0.0,
     0x1.fba4d798afd92p-488, 0x1.175abad083ab8p-237, 0x1.b52a6d4fca77dp-694, 0.0, 0.0,
     0x1.0b7fb5f1d3fcp-104, 0x1.23ea12a169b39p-81, 0.0, 0x1.a8bab932845ebp-785, 0.0,
     0.0, 0x1.44dba97f19994p-457, 0.0, 0.0, 0x1.b25127537e246p-107, 0.0, 0.0,
     0x1.ed0ef69aef1d3p-828, 0.0, 0x1.d6da4d2ae5a34p-762, 0.0, 0.0,
     0x1.4af2adfa9f467p-995, 0.0, 0x1.5b22af3a39648p-713, 0x1.d97a0e5feef88p-870,
     0x1.b53fcb31d5606p-613, 0x1.994b75866c4b5p-836, 0x1.3e4ae8b4edf91p-117,
     0x1.a036a43433c0bp-994, 0x1.c49c397bbfe9fp-661, 0x1.44125c2c3e3a6p-177, 0.0, 0.0,
     0.0, 0x1.580e9730f495cp-222, 0.0, 0.0, 0x1.ebb05fc2696fp-980,
     0x1.f5d4e4c183713p-615, 0x1.8524a2701403ep-937, 0x1.5d8bbe2360ec8p-716, 0.0,
     0x1.32d88a19576fep-388, 0x1.aefb505b8047cp-722, 0.0, 0.0, 0.0, 0.0,
     0x1.7f7bb6625d975p-305, 0x1.8f689b040bfa9p-576, 0x1.4f3b764cb271p-86,
     0x1.bc8707de0eb2fp-774, 0.0, 0.0, 0.0, 0x1.20e9d2c10af42p-605,
     0x1.a87abe6ddeee3p-364, 0x1.a3bb8ad88a4c9p-802, 0.0, 0.0, 0x1.43c71cfda32aap-978,
     0x1.e695abba616cbp-310, 0.0, 0x1.647a98f7ca5c4p-878, 0x1.871d6580112b4p-302, 0.0,
     0x1.d1e7ea9d181f2p-517, 0.0, 0.0, 0.0, 0.0, 0x1.82eca88395822p-948,
     0x1.860e25bd4d3fp-178, 0x1.e958a8d60ed79p-597, 0x1.f15f9cc659f19p-98,
     0x1.0f0a4a8d12368p-889, 0x1.ab1a651fce131p-760, 0x1.4e7f4c5c0c48ep-602,
     0x1.72ab2f6a6a6cap-315, 0.0, 0.0, 0.0, 0.0, 0x1.51e7e517d684ap-968, 0.0,
     0x1.2ebfb1f0c33e5p-176, 0.0, 0x1.1490ab1ca3f77p-368, 0x1.2ee31303b2774p-956,
     0x1.7ca52d97c0123p-200, 0.0, 0.0, 0x1.8e787bd6f5d2p-650, 0.0,
     0x1.c8421b8e2d3dfp-771, 0x1.a7761bd2be38bp-221, 0.0, 0.0, 0x1.2b5ed290f6c1cp-334,
     0.0, 0x1.b77edf9ed00b5p-232, 0.0, 0.0, 0x1.b3112feb29cc8p-332,
     0x1.e9ef7fe2f74cbp-939, 0x1.bc82427a0004dp-342, 0x1.14a58a1c8cc51p-742,
     0x1.8cae7b076914dp-238, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab0567e7201a3p-507, 0.0,
     0x1.ffd8d840d27f2p-27, 0.0, 0.0, 0.0, 0x1.3d98bbf023798p-162, 0.0,
     0x1.ec4fdbb342a58p-557, 0x1.6be2ad6f1f9d2p-678, 0x1.1f9f516a9976p-783,
     0x1.977826d42588ep-714, 0x1.ca3c7c2a0f36ap-468, 0x1.94dba74bf060cp-976,
     0x1.1e35563d1ec7ap-662, 0.0, 0x1.94bb4c74536e9p-387, 0x1.06af141245237p-176,
     0x1.e42ff2eee50d8p-230, 0x1.543bf5e8bb1aep-156, 0x1.c93d139a453a2p-383,
     0x1.4043203c73876p-205, 0.0, 0.0, 0.0, 0.0, 0x1.e89277759793cp-956, 0.0, 0.0,
     0.0, 0.0, 0x1.2730bcd3d05d3p-145, 0.0, 0x1.6cabf25e09c39p-259,
     0x1.362e9ef816c7fp-499, 0x1.85984e0656b61p-474, 0.0, 0x1.934085b8b78b7p-242, 0.0,
     0.0, 0.0, 0x1.3010b9944744p-117, 0x1.5d736373d63b1p-336, 0x1.0f52e89eb0964p-474,
     0x1.25698426cdceap-534, 0x1.19d885bb0cfedp-28, 0.0, 0.0, 0x1.6504af78a1b56p-60,
     0.0, 0.0, 0.0, 0.0, 0x1.d35cc8dff3cddp-591, 0.0, 0x1.7bef79c9c57dcp-394,
     0x1.7ea6113e33cdp-583, 0.0, 0x1.15c0634a3b8a6p-335, 0.0, 0x1.56aadd1758ec3p-22
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
    
    global_bench_acc = 0.0;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp1 = Sleef_finz_asind1_u35purecfma(tmp0);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_asind1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asind1_u35purecfma bench acc %la\n", global_bench_acc);
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
