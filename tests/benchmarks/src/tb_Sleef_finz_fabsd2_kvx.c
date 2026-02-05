/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsd2_kvx.c --function Sleef_finz_fabsd2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.ed1f64d2b9348p-518, 0x1.cde506df2c364p-772, 0.0, 0.0,
     0x1.a8e98d5b0333bp-337, 0.0, 0x1.b55cd34ce514ap-45, 0x1.1b724295ef78bp-625, 0.0,
     0x1.f32b8ea6ad422p-938, 0x1.e72443949997ap-249, 0x1.e1f5f850565f1p-999, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4211913e63ea5p-382, 0.0, 0x1.76da8ef208dedp-182,
     0.0, 0.0, 0x1.7da0caca58a42p-166, 0x1.7f033555e5562p-868, 0.0, 0.0,
     0x1.b0142f68cb2ap-292, 0x1.6bcedcaad4404p-341, 0.0, 0x1.0d05d903e767ap-512,
     0x1.41f37741be6ffp-417, 0x1.92742107c61ccp-961, 0x1.638b279fdf03cp-880,
     0x1.778292001c7aap-703, 0x1.45afa67e1da6p-341, 0.0, 0x1.7e8217dce3e22p-429, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2bab0c135e81p-132, 0.0, 0x1.e6e20e4bc1a3ep-824,
     0.0, 0x1.aa9ea19a963acp-588, 0x1.06c71611bb229p-902, 0x1.36d99240a4957p-117, 0.0,
     0x1.bac7b1da4cfadp-668, 0.0, 0.0, 0x1.97abcb597b6cdp-83, 0x1.1299f7c6ebec5p-993,
     0.0, 0.0, 0.0, 0x1.c878db2f5a7a7p-397, 0x1.cafd8c14f4466p-151,
     0x1.259bac3178e79p-175, 0.0, 0x1.79966b0cbb0c5p-587, 0x1.30ddd3c5b650dp-687,
     0x1.eecf227460cd9p-510, 0x1.b1a39428eeb57p-844, 0.0, 0x1.834570a84c1dcp-875, 0.0,
     0.0, 0.0, 0x1.a88d71d0116aap-592, 0x1.28181db6f8ae9p-181, 0x1.6db7642ceaf5fp-116,
     0x1.5cbff6354569dp-369, 0x1.87a6b20d89133p-174, 0.0, 0x1.32a39bba0ba03p-503,
     0x1.4e51b6a1310e5p-622, 0x1.9db3f02a7abfap-76, 0.0, 0.0, 0x1.76327e15b6a44p-715,
     0.0, 0x1.13a2251c75aa2p-435, 0x1.152297e9e7148p-491, 0.0, 0x1.67fcecebe7dafp-96,
     0x1.f039eb3b4e213p-158, 0x1.5ac8fb8fdb56dp-277, 0.0, 0x1.80702108dd844p-125, 0.0,
     0.0, 0x1.38c73c33cfe44p-776, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c0f67061374a9p-449, 0.0, 0.0, 0.0, 0x1.967e0593f9521p-861,
     0x1.91012b979c32p-243, 0.0, 0x1.22efc59477937p-583, 0.0, 0.0,
     0x1.a15e9e504449ep-877, 0x1.e6700673d2797p-506, 0x1.29e7343946b5p-61, 0.0,
     0x1.099be1ce73fd8p-158, 0x1.498d25c039dffp-251, 0x1.121466f19184ap-111, 0.0, 0.0,
     0.0, 0x1.b3ecacdfc7431p-726, 0x1.e679ebddeccd2p-1022, 0x1.847f46897079dp-937,
     0x1.9d378e5e87f57p-473, 0x1.e28e6f2345ee9p-414, 0x1.02b5ebc7b8876p-690,
     0x1.a8df38d2d2193p-43, 0x1.e5666ebb12a8ap-707, 0.0, 0.0, 0.0, 0.0,
     0x1.e3cc6df5c0a4bp-1016, 0x1.39123e1292c5ep-951, 0.0, 0.0, 0.0,
     0x1.e0d0a7e18e5a9p-907, 0.0, 0.0, 0x1.809cdbb704059p-342, 0x1.f41c04c574174p-56,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.79ad74edf0879p-233, 0.0, 0x1.0a93b610fbac8p-1010,
     0.0, 0.0, 0x1.8b6f6c6de965bp-425, 0.0, 0x1.7ff4670935304p-564, 0.0,
     0x1.c8896edf0e55ep-606, 0x1.579b4c3f189d2p-638, 0.0, 0.0, 0x1.3db0c002a3136p-445,
     0x1.16f284e380bc7p-62, 0.0, 0x1.ebdf6e9eec81ap-581, 0.0, 0x1.88c37a454b84ap-2,
     0x1.3fb24740e0461p-633, 0.0, 0x1.c2252bc3331bcp-901, 0x1.0be189a835866p-671,
     0x1.0edc77dcc2a4fp-77, 0x1.fab814c010164p-896, 0.0, 0.0, 0x1.d141ddc9cc763p-277,
     0.0, 0x1.de4584daaeb5ap-156, 0x1.7f09558ee3444p-219, 0.0, 0.0,
     0x1.4f191b1ed24a6p-311, 0x1.5ee160f3b9ae6p-704, 0.0, 0x1.ad3de7e6d5cedp-189,
     0x1.adda088d1c645p-18, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8eb5678f9e5fcp-544,
     0x1.0558ff56c30e1p-646, 0.0, 0x1.9aa86da6bccf4p-180, 0x1.2e950a6e1430fp-999, 0.0,
     0x1.2174484a9579dp-164, 0.0, 0.0, 0x1.11a0fd19572acp-367, 0x1.56e65c1b1a5c9p-250,
     0x1.2f99e94031041p-492, 0x1.4f7244d8a38d2p-32, 0x1.f5aef714426ap-870,
     0x1.9f06348f7d043p-722, 0.0, 0.0, 0x1.f5c94309b78cp-501, 0x1.0cbb8e6cba0bp-887,
     0x1.19ef69ba98486p-879, 0.0, 0x1.f96c5a46b0505p-210, 0.0, 0x1.115f0015fb3dcp-376,
     0x1.ca38f3941c5fbp-690, 0.0, 0.0, 0x1.d8ac5252b2d64p-515, 0.0, 0.0,
     0x1.7241f774d4fcap-194, 0.0, 0.0, 0x1.e11c29378a5fdp-251, 0x1.d7d336ceefba5p-890,
     0x1.6a104bfd031acp-666, 0x1.9e6d86dfca532p-268, 0x1.de768ed3b8f45p-85,
     0x1.f9cf4631360dep-288, 0.0, 0x1.05911aeff9022p-876, 0x1.682478e02c69p-883,
     0x1.f5f3c96f5ffe9p-465, 0.0, 0.0, 0x1.22383e154e495p-191, 0x1.4515c76d44cf8p-714,
     0.0, 0x1.c4e01e270949bp-592, 0x1.e6ae163fa6386p-360, 0x1.ca6f44a2c3f14p-425,
     0x1.47f4a06050d5ep-397, 0x1.14d3ebc5de08ep-558, 0.0, 0x1.b2c2e5f52f398p-226, 0.0,
     0x1.013d6265441dbp-602, 0.0, 0.0, 0x1.1a23f533b788p-1012, 0.0, 0.0, 0.0, 0.0,
     0x1.551ad0b9df90bp-690, 0x1.8b73a5455933ep-592, 0x1.f0c44306543edp-985,
     0x1.c00453f0f2c1ap-68, 0.0, 0x1.8ed7227d1c50bp-362, 0.0, 0.0,
     0x1.05baba081c456p-125, 0.0, 0x1.e51f7981ddf2bp-578, 0.0, 0x1.f6b578d12458fp-877,
     0.0, 0.0, 0.0, 0x1.3d87bacec2d41p-853, 0x1.830553151d59bp-414,
     0x1.02a5c929bd1f4p-21, 0.0, 0x1.1b128c13083b6p-914, 0.0, 0x1.1631cfcc9e5ffp-331,
     0x1.55825847fabe1p-89, 0x1.1f3d446dd1932p-393, 0x1.8811c9a42313ep-696,
     0x1.7e213883e3b6cp-998, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ecd6f7368129p-102,
     0x1.b4d41670366d4p-85, 0.0, 0x1.74932b78a0558p-108, 0x1.267f89e98eea7p-825,
     0x1.0b93a08db68f3p-857, 0x1.c85791a67dd73p-931, 0.0, 0x1.04913d4093938p-976, 0.0,
     0x1.25b6642d2c258p-289, 0x1.52b58b98e8017p-292, 0.0, 0x1.0e5897f3809eep-523,
     0x1.53d933360f29ap-136, 0.0, 0x1.a7cf8830750d7p-799, 0.0, 0x1.46585e9f00dbp-419,
     0x1.da0c972d0899bp-330, 0x1.bf5fc45e16d8bp-353, 0.0, 0.0, 0x1.ea0e2c7cef1a5p-782,
     0x1.55817796acc54p-744, 0x1.5b122acd709a2p-325, 0.0, 0.0, 0x1.c504fdcbd7e37p-746,
     0x1.8f856d5d177ffp-835, 0x1.e01f0728189efp-938, 0.0, 0x1.a029dcdd3e4c4p-578, 0.0,
     0x1.6112a17f752e9p-987, 0.0, 0.0, 0.0, 0.0, 0x1.698495e65433dp-86, 0.0,
     0x1.9cf2203388bddp-472, 0.0, 0.0, 0x1.4ed6e2c4e8b0cp-655, 0.0, 0.0,
     0x1.19fff228360eep-791, 0.0, 0.0, 0.0, 0x1.bd0d2fa40fd2dp-563, 0.0,
     0x1.a0ed3e3e07f1ep-18, 0x1.5d90911c7d24cp-986, 0x1.15acd10e3601ap-397, 0.0, 0.0,
     0x1.46a2eb928b97dp-803, 0.0, 0x1.263dbea8a32dap-59, 0.0, 0.0, 0.0,
     0x1.e1be7805e42fdp-290, 0.0, 0x1.eeb17d47b0506p-215, 0.0, 0x1.4df2db44bfe97p-893,
     0x1.3ea6e4b633efp-262, 0x1.986a01ea54f97p-810, 0.0, 0x1.7415b16515eebp-374, 0.0,
     0x1.61031708d7b85p-365, 0.0, 0x1.ad5ad76d49eedp-747, 0x1.9ccf33f8d4f8dp-417,
     0x1.3bd4cdf8cadbdp-623, 0.0, 0x1.6b9c9c5496a15p-1021, 0x1.ee49bae6a1bedp-199,
     0.0, 0.0, 0x1.02bf314c79a61p-4, 0x1.7d0712c32c392p-487, 0x1.927da9ac6d13dp-89,
     0.0, 0x1.9a2226cf42af4p-534, 0.0, 0.0, 0.0, 0x1.6f581e9bb1a83p-115, 0.0,
     0x1.7313bc526a7c3p-187, 0.0, 0.0, 0x1.4bd199994065p-808, 0x1.6e65e4b4c2028p-52,
     0.0, 0x1.20f818831c643p-47, 0.0, 0.0, 0.0, 0.0, 0x1.c8bcf637d27a4p-325, 0.0, 0.0,
     0x1.5767988360e14p-798, 0.0, 0x1.abec558f3726fp-56, 0.0, 0x1.c64ee03052f47p-165,
     0x1.0c7896a5b643cp-839, 0.0, 0.0, 0x1.939552f3109p-211, 0x1.8d4e07f66e704p-324,
     0.0, 0.0, 0.0, 0x1.06d5ebd03f999p-664, 0x1.457d475f8a864p-774, 0.0, 0.0, 0.0,
     0x1.4ab3b2634c05cp-1018, 0.0, 0x1.e1efa453dfaf4p-806, 0.0, 0.0,
     0x1.d5da1ff1aa295p-446, 0x1.b75b2976b9de2p-873, 0.0, 0x1.5b2769cfaec2dp-499,
     0x1.3eeabac1d14dfp-929, 0.0, 0.0, 0.0, 0.0, 0x1.6398d4556586p-692, 0.0, 0.0,
     0x1.329d21e5f64d3p-904, 0x1.31617c4ea1438p-557, 0x1.f021477320e27p-23, 0.0, 0.0,
     0x1.af55edd530079p-612, 0.0, 0x1.0bc45e82d1bdp-230, 0x1.4c77939dd609cp-968, 0.0,
     0x1.be69973d4690ap-957, 0.0, 0x1.ce45744759f93p-15, 0x1.c33229d236c9cp-183, 0.0,
     0.0, 0x1.dc999aabc8dd3p-652, 0x1.aa553d08d9219p-559, 0x1.f4cecf457ef73p-1022,
     0x1.94f6b3511a44bp-826, 0.0, 0.0, 0x1.cce0f768c4d6ep-718, 0.0, 0.0, 0.0, 0x1p0,
     0x1.5c0a6e133d01cp-47, 0x1.7c2c6cea1f0abp-448, 0x1.0384f8ee8951ap-576,
     0x1.b79b9fb8d6c98p-868, 0.0, 0x1.efde599f9c6bfp-207, 0.0, 0x1.4c32f7cd1b389p-279,
     0.0, 0x1.78d130a0d63fcp-455, 0.0, 0x1.7d2a035645331p-161, 0x1.9faa130900a6bp-624,
     0x1.2a0c475d46d2bp-611, 0.0, 0x1.a38345bf24f38p-470, 0.0, 0.0, 0.0, 0.0,
     0x1.861c5725b5acbp-415, 0x1.317c912501568p-937, 0.0, 0x1.2855561793165p-942, 0.0,
     0.0, 0x1.766523e80f0dcp-290, 0.0, 0.0, 0.0, 0x1.35373f88d2a5bp-143, 0.0, 0.0,
     0x1.3623c812ccf9fp-450, 0.0, 0x1.a51d709e7207ap-39, 0x1.e02f301b3d20ep-6, 0.0,
     0.0, 0x1.37b4d992844d2p-547, 0x1.e76d3d11900d7p-360, 0.0, 0.0, 0.0,
     0x1.0a52f15e2298p-38, 0x1.0a2cfffb96fc7p-449, 0.0, 0x1.9bdd0070312cdp-486, 0.0,
     0x1.7ab86e55ea10ap-270, 0.0, 0.0, 0x1.ded0bc220ea58p-247, 0.0,
     0x1.4cc9fb3ab251p-938, 0x1.0a22e31a2fdd4p-713, 0.0, 0.0, 0.0,
     0x1.d0fe0eb15d6d6p-81, 0x1.88f09de6af169p-364, 0.0, 0.0, 0.0,
     0x1.0bc7fd72e73d3p-846, 0x1.b398519d34535p-43, 0x1.c24ce98a22daep-637,
     0x1.4ad8e00c1b972p-942, 0x1.85acc5e456a23p-314, 0.0, 0.0, 0.0,
     0x1.8fbf67c844649p-142, 0.0, 0.0, 0x1.7ca01d1eb3366p-502, 0.0,
     0x1.0ef3fe92a5e1fp-191, 0x1.e714738168efdp-51, 0.0, 0.0, 0.0, 0.0,
     0x1.26397373bddfp-339, 0x1.bf737dee6d9dep-452, 0x1.70f7606d2973fp-591, 0.0, 0.0,
     0x1.d043b1f4eb5d6p-759, 0x1.ebe437da50147p-484, 0.0, 0x1.d741a8562518ap-62,
     0x1.3ca0662b0a992p-666, 0.0, 0x1.1aecc1aeccf0dp-533, 0.0, 0.0, 0.0,
     0x1.167af50377b57p-974, 0.0, 0x1.9e6d9c9603c1p-620, 0.0, 0x1.984b66361248bp-133,
     0x1.27fb29360fcffp-287, 0.0, 0.0, 0.0, 0.0, 0x1.76ffa7899753p-969,
     0x1.20014eb79862bp-641, 0x1.a81e627f60c6dp-968, 0.0, 0x1.16900926137f8p-259,
     0x1.f8f22c0b8add2p-707, 0.0, 0.0, 0.0, 0.0, 0x1.0010b361d1d85p-603,
     0x1.b21e2d46a6f74p-268, 0x1.9bd735ba1f855p-327, 0.0, 0.0, 0x1.122aa22b87b38p-622,
     0x1.ee993d4861d69p-172, 0x1.fb8e08ac6a2e8p-781, 0.0, 0x1.1d1bae3f22b1ep-214,
     0x1.d6765b03945d5p-990, 0x1.de832964e4771p-1000, 0.0, 0.0,
     0x1.e6524badb9c76p-143, 0x1.dce4d149af19ep-997, 0.0, 0.0, 0x1.2e8fd4b94017ap-332,
     0x1.d5faa386b213dp-345, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a7c60daae2dffp-997,
     0x1.c961f261444cbp-957, 0x1.78534575fd4aap-831, 0x1.ef62278fe4ae3p-411, 0.0,
     0x1.2e5b6ca987c41p-758, 0x1.52ce4fb778f8dp-65, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.61879c2a8b10ap-429, 0x1.5eefeb693bc0ap-253, 0x1.3c4b481c8e636p-584, 0.0, 0.0,
     0.0, 0x1.708efe79288dp-198, 0x1.44427d41eca96p-209, 0.0, 0.0, 0.0,
     0x1.9521b45bf6ee6p-486, 0x1.fca79ebd1554p-728, 0x1.d10205d3a719cp-529, 0.0,
     0x1.44dd6d7fbbb7dp-640, 0x1.8108bb02c61dbp-366, 0.0, 0.0, 0.0,
     0x1.f128767b37e02p-769, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.504aba97553c3p-870,
     0x1.b71bc69439672p-282, 0.0, 0x1.20ae302ca905p-826, 0x1.1149dba093c18p-322, 0.0,
     0.0, 0.0, 0.0, 0x1.df54396d4daccp-262, 0.0, 0.0, 0x1.c3e4630e55b2bp-412,
     0x1.233f6cad4245ep-925, 0x1.8481309197e6ep-843, 0.0, 0x1.37742674fdf92p-501, 0.0,
     0x1.48d87e8184e2ep-656, 0x1.a9c7130da6373p-558, 0x1.e4314a3e669dfp-526, 0.0,
     0x1.8a35c7c24b928p-876, 0x1.340bcf5640472p-866, 0x1.3da8b9b99fc56p-781, 0.0,
     0x1.dc86c73d80446p-912, 0.0, 0.0, 0x1.ddf6b4bd83b24p-572, 0.0,
     0x1.87161d3031b9cp-923, 0.0, 0.0, 0.0, 0x1.f31162ef874ep-966,
     0x1.93faca04d4d13p-473, 0.0, 0x1.7abfef2999f29p-602, 0x1.fcf51950e9437p-68,
     0x1.bc86c0d3fab6cp-992, 0x1.249331bee6e74p-447, 0.0, 0.0, 0x1.3abd5c604c2eap-552,
     0x1.567a3d5f0868dp-792, 0.0, 0.0, 0x1.feec6661ba57cp-945, 0x1.9461208fd4a2fp-143,
     0x1.061b3e847c3bdp-464, 0.0, 0.0, 0x1.68c383fe4e77ep-860, 0.0,
     0x1.511c3d36449ap-959, 0.0, 0.0, 0x1.75967fcf1feefp-777, 0.0, 0.0, 0.0,
     0x1.d7ef9388f5476p-709, 0x1.3f9de868c64a1p-451, 0x1.9bbdd8dfac498p-557,
     0x1.202c130c4be29p-761, 0.0, 0x1.08bd0df588642p-637, 0.0, 0.0,
     0x1.06dd0d18764cap-853, 0.0, 0.0, 0x1.c4454efed21ccp-247, 0.0,
     0x1.cff2ee77b3475p-933, 0x1.3ad84e6cebc5cp-790, 0x1.698c4246001e8p-678, 0.0, 0.0,
     0x1.03a051c638752p-276, 0.0, 0x1.86da2b9f79154p-212, 0.0, 0.0,
     0x1.d4e1224a7f3a4p-811, 0x1.570c297374d6fp-103, 0.0, 0x1.ce611357a8fdbp-863, 0.0,
     0x1.9443b42bb2938p-15, 0.0, 0x1.cf1af58eaf54bp-629, 0x1.0d3952d1b5e0fp-1001,
     0x1.8c895b3bfa6d1p-610, 0x1.34dc6e7908629p-998, 0x1.c12472ca34f39p-500, 0.0, 0.0,
     0.0, 0x1.98151fc23072p-151, 0.0, 0.0, 0.0, 0x1.d4e145e3752fep-321, 0.0,
     0x1.1c1cd237c5225p-395, 0.0, 0.0, 0x1.842ee3204a1b9p-366, 0x1.d76c245ba1a89p-61,
     0.0, 0.0, 0x1.e06878c874fefp-852, 0x1.8401dbe577c9p-556, 0x1.7cad45f9070fp-12,
     0x1.775a439065f33p-425, 0x1.05e6d338ce12cp-463, 0x1.cfebea59b47a4p-592, 0.0,
     0x1.9557425ca83efp-251, 0.0, 0.0, 0x1.1ff864c996a9fp-850, 0x1.40fb8e6d4a24bp-727,
     0x1.db34db2b9d529p-312, 0x1.5042d93e3d691p-940, 0x1.332ba2d7883aap-610,
     0x1.e91d71578e8c4p-385, 0.0, 0x1.77c10ef635ep-941, 0x1.9bbb646db5326p-899,
     0x1.b8d3cfa215f46p-796, 0x1.4fb4ecddad3fp-463, 0.0, 0.0, 0.0,
     0x1.198d02e3aa8c4p-541, 0x1.810dc3279078bp-618, 0x1.cff0fade36cfp-974, 0.0,
     0x1.d57a804754bb1p-993, 0x1.2a889cd316f1ap-365, 0.0, 0x1.bbf2816ab89e1p-412,
     0x1.522f979c5b617p-319, 0.0, 0.0, 0x1.c0e21345993aep-535, 0.0,
     0x1.17e5afaa8e96ap-281, 0.0, 0x1.4b20aa51c275fp-208, 0.0, 0.0,
     0x1.31843a738edadp-15, 0x1.62b36cb720226p-399, 0.0, 0x1.cca3760b61289p-278,
     0x1.0b692b3ee8905p-418, 0x1.92e35262feaeep-493, 0.0, 0x1.40b25448133f3p-609, 0.0,
     0x1.a267a0aba54cap-931, 0x1.bcb0554ffd8afp-427, 0.0, 0x1.711eec8129bafp-106, 0.0,
     0.0, 0x1.c42445e290c75p-629, 0x1.dcb2dcfb1a2c2p-141, 0x1.2921dcb798c1bp-252,
     0x1.b3cfd5c7922bp-83, 0.0, 0.0, 0.0, 0.0, 0x1.36a8ab6412549p-735, 0.0,
     0x1.f411a8b1a85a4p-538, 0.0, 0.0, 0.0, 0x1.9f733114fd8dap-985, 0.0,
     0x1.0e6697cf95a3ep-183, 0x1.44018c64f8c1ap-340, 0.0, 0.0, 0x1.ea394667ba16dp-300,
     0x1.8f3d8b497a9eap-299, 0x1.8ae785b627223p-487, 0.0, 0.0, 0.0, 0.0,
     0x1.831015dc5053cp-365, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.90c69b3ae2697p-382, 0x1.4c3416ba94ae3p-855, 0x1.80170189ba497p-300, 0.0,
     0x1.c08ebada6f361p-623, 0x1.cee2ee158ab45p-357, 0.0, 0x1.8885050cebdbp-184,
     0x1.a8eafb65b523ap-49, 0.0, 0.0, 0x1.5e5f171d13b8ep-816, 0x1.6f0cea905919ap-294,
     0x1.d167fdc98152dp-574, 0x1.4d29b4eb4c4e8p-215, 0.0, 0x1.01945c573c339p-399,
     0x1.50e4dd39b4177p-344, 0x1.746b76dfa4bfp-432, 0x1.07cdd008890e4p-41, 0.0, 0.0,
     0x1.32d8be9d016d4p-68, 0.0, 0x1.b6794db22e0f4p-77, 0x1.518d7c0fbde55p-564, 0.0,
     0x1.20651dbcb4c95p-846, 0.0, 0x1.c296614ba9822p-67, 0x1.e5e262a079619p-934,
     0x1.f8cf4a608d935p-247, 0x1.7db0e0b22d1bap-234, 0.0, 0x1.48972940ac082p-34,
     0x1.b70461d3a8ec9p-502, 0x1.21f3f5c047941p-852, 0.0, 0.0, 0x1.0caa541765995p-80,
     0x1.84fab30f80845p-842, 0x1.3dba0834d7435p-173, 0x1.c2bda69188d84p-980, 0.0,
     0x1.d789714ac5bddp-3, 0x1.0cf6116b97027p-840, 0x1.b5367bfcfe51ep-765, 0.0,
     0x1.101d616158255p-1011, 0x1.1ed71126f2d8cp-303, 0x1.13c94d4a13801p-934,
     0x1.dc4510c04da7fp-214, 0.0, 0x1.6cdae25866778p-577, 0x1.faed8e3f7a7f8p-160, 0.0,
     0.0, 0x1.822972cfee5cdp-1006, 0.0, 0x1.9bded3e4e72dap-102, 0.0, 0.0,
     0x1.0db6a64202624p-149, 0.0, 0x1.061cae0acdc2fp-732, 0x1.9443118dbd575p-210, 0.0,
     0.0, 0x1.e15eba4c142a3p-237, 0x1.942c3eb959652p-672, 0x1.a44966e61e557p-307, 0.0,
     0x1.7928c1edfe696p-189, 0.0, 0.0, 0x1.dd423c95ab5b9p-634, 0.0,
     0x1.82a180d3de11bp-548, 0x1.d8a8804a8cd41p-789, 0x1.5838577e29b0bp-566, 0.0,
     0x1.a02b41111901p-146, 0.0, 0.0, 0x1.ae5d08427c716p-251, 0x1.aec66918f057ep-836,
     0.0, 0x1.6a5385672234ep-838, 0.0, 0x1.38658999425b3p-944, 0.0, 0.0, 0.0,
     0x1.39cd8f4700735p-652, 0.0, 0x1.5cdb02786bcacp-335, 0.0, 0x1.d88873bd7c2p-703,
     0.0, 0x1.dc71db0debad7p-950, 0x1.4f4bee8fa912ep-491, 0.0, 0x1.fca1f7e0ba982p-499,
     0x1.ee29d962e980ep-437, 0.0, 0x1.88782582f9448p-532, 0.0, 0.0,
     0x1.76ae2b628d9a8p-328, 0.0, 0.0, 0.0, 0x1.b4dec94c9fc59p-841,
     0x1.2f3e995956894p-723, 0.0, 0x1.dac35f0c87916p-562, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d75f31afe1132p-890, 0.0, 0.0, 0x1.67590e9bf672fp-453, 0x1.fb790bcf0d303p-727,
     0.0, 0x1.17de1b4107f72p-386, 0x1.1004234863054p-350, 0x1.4e85300a69632p-291,
     0x1.a0e57e1c921a8p-445, 0.0, 0.0, 0.0, 0x1.23c68c8a9b833p-658, 0.0, 0.0,
     0x1.7d7e9c66b3616p-134, 0x1.1d8c55bf88934p-870, 0x1.5c385402fbd4p-291,
     0x1.1294aefb7ceacp-499, 0.0, 0.0, 0.0, 0x1.820dc9044ba56p-126,
     0x1.be459ea225b11p-56, 0.0, 0x1.54f67c77beafcp-957, 0x1.ed54c53674183p-1014, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_fabsd2_kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_fabsd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_fabsd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
