/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d4_u35kvx.c --function Sleef_exp10d4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.7b3fc71cf0408p-880, 0x1.2ff48cb32aff4p-933, 0.0, 0x1.4b8f5e7940144p-407,
     0.0, 0x1.fb9c3bac756a7p-71, 0x1.14078b55af80bp-620, 0.0, 0.0, 0.0, 0.0,
     0x1.efd5bbe13d316p-791, 0.0, 0.0, 0x1.db5d198926624p-653, 0x1.db8f58e26c635p-605,
     0x1.dd7ddb9a879b5p-160, 0.0, 0x1.148b693198657p-125, 0x1.77b49102e8addp-243,
     0x1.c9e08f5b46f58p-312, 0.0, 0.0, 0x1.dc6b009426204p-246, 0.0,
     0x1.6733d7f4fd07fp-600, 0x1.be955258f55fcp-108, 0x1.b5ba70d1feca4p-884,
     0x1.2fc16db1e227ap-502, 0.0, 0.0, 0x1.7917cce7f91ddp-114, 0x1.74a6e45ddfe84p-466,
     0x1.cdd9c3735f716p-125, 0x1.95368a4a70c42p-913, 0x1.8a2bf5e37bf8fp-543, 0.0,
     0x1.5ed2c22a72823p-525, 0x1.0ae601ddcfd6ap-441, 0x1.e1e2da7cb6f02p-616,
     0x1.1d1de11a49cd3p-553, 0.0, 0x1.18847d8b9f952p-216, 0x1.1f947cace43bap-421, 0.0,
     0.0, 0.0, 0x1.2735fa73b3ccbp-589, 0.0, 0x1.367f47e1a587bp-91,
     0x1.9532abc898ffp-253, 0x1.4a8716c060941p-767, 0.0, 0x1.964554630f08dp-523, 0.0,
     0.0, 0x1.083741992ddd4p-910, 0.0, 0.0, 0x1.19f305936e243p-546, 0.0,
     0x1.cba17a690716ap-747, 0.0, 0.0, 0.0, 0x1.9976125edfffp-84,
     0x1.ccd7b8731c02cp-116, 0x1.6ad5e3aaa3c1dp-720, 0x1.231921f60d5b8p-343, 0.0, 0.0,
     0x1.9952b3601490ep-37, 0.0, 0x1.6db11fe80c2bep-341, 0x1.6d06c4f762fc7p-235, 0.0,
     0x1.df68aac202152p-587, 0x1.011fa162970c4p-198, 0x1.c2416cc153fe5p-612, 0.0, 0.0,
     0.0, 0x1.04e377c8752aep-400, 0x1.b6e6cbe7c8dbp-450, 0x1.e0c1e93180138p-951,
     0x1.283d4068339b8p-622, 0x1.42cd0fae95ab8p-542, 0x1.1b6e9f1f8af7ep-930, 0.0,
     0x1.eb37ed58d74b5p-532, 0.0, 0x1.9f4b6201a177cp-431, 0x1.71db4956ccb7ap-492,
     0x1.dbafac02ca654p-737, 0x1.552c4a6995765p-280, 0x1.891020221bbafp-78, 0.0,
     0x1.6a820fd4ff54dp-302, 0.0, 0.0, 0x1.c982d797d2af2p-842, 0x1.21e569803cabdp-418,
     0.0, 0x1.db21ef70c8232p-788, 0x1.064d635f69626p-221, 0x1.05098c11b7f12p-108, 0.0,
     0.0, 0x1.987ee37c2a5a2p-402, 0.0, 0.0, 0x1.0d77413d9d442p-51,
     0x1.26876b56a1c1ep-831, 0x1.bae588db17ac5p-641, 0.0, 0x1.e337008f44863p-686, 0.0,
     0x1.97babf3781baap-794, 0.0, 0x1.fd2ffb45100a6p-668, 0.0, 0x1.e7959ab004e64p-364,
     0x1.aa682a60b97afp-183, 0.0, 0.0, 0x1.44222e29b41f1p-509, 0x1.5df0e5f6c6a16p-765,
     0x1.8084bcf90d0bfp-652, 0.0, 0.0, 0.0, 0x1.0b83fa5318c71p-683, 0.0, 0.0,
     0x1.2d0e45cd691b5p-877, 0x1.2d9ab00fecd37p-337, 0.0, 0x1.436b2db289578p-344,
     0x1.4151b5f912e45p-719, 0x1.5f0e9fd26a7a8p-965, 0.0, 0x1.86d30b862436cp-904, 0.0,
     0x1.92456b49d13ecp-178, 0.0, 0x1.b5c2b8543c706p-910, 0x1.7bb0e33b2fccbp-575,
     0x1.4e1846dc63e2p-79, 0x1.60eed3dda8026p-573, 0.0, 0.0, 0x1.1b57bbd58898dp-743,
     0x1.e3cfefcac6a2p-443, 0x1.1b7298a9ca3e5p-73, 0.0, 0x1.93968eb40ea77p-621, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8e878e691ff9dp-161, 0x1.556d5715ff0dap-306, 0.0,
     0x1.63da90e967027p-880, 0.0, 0.0, 0x1.1d1a3f2125265p-7, 0.0, 0.0,
     0x1.4b73ae7c6ecc8p-408, 0x1.f54194164bc4dp-380, 0.0, 0x1.65a0d6c605996p-557, 0.0,
     0.0, 0x1.7affed16282bbp-314, 0.0, 0x1.1548adf480dfbp-372, 0x1.4f6b8c4e455f9p-303,
     0x1.a183a8fe57b6p-358, 0.0, 0.0, 0x1.d13cd8f826203p-447, 0.0, 0.0,
     0x1.6f0f92cf59a94p-986, 0x1.ca88461223eeap-560, 0x1.6bfbec8ec57ffp-832,
     0x1.940204c38f8a1p-175, 0x1.5cd1bc15f91f8p-828, 0x1.a51c60554b175p-717,
     0x1.1ca1359ef7d3ep-800, 0.0, 0.0, 0x1.b6856e55607fap-675, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a3b78391e287ep-415, 0.0, 0x1.f99af9c31297fp-823, 0.0,
     0x1.08629b1b4257cp-891, 0x1.aa17623015adp-34, 0x1.1ba0a4dc233cdp-685,
     0x1.bcacd1f7aeef1p-590, 0x1.c5f41b150d1d8p-356, 0x1.7cf40394031d8p-595,
     0x1.2f3eef69b565bp-762, 0x1.a2c71b28b2ec9p-106, 0x1.f884d85b79053p-557, 0.0, 0.0,
     0x1.d3da35ae43fdfp-310, 0x1.59cd1b34103dap-164, 0x1.72d6cb65944e6p-548, 0.0,
     0x1.2dfe7d2b949ep-553, 0.0, 0.0, 0x1.3c8ddb79962e8p-448, 0.0,
     0x1.f50a564e95f55p-300, 0.0, 0.0, 0.0, 0x1.d8037ef88248ap-535, 0x1p0,
     0x1.21181bae888a3p-929, 0x1.106e137efebb3p-551, 0.0, 0x1.830bbeb74895dp-639,
     0x1.35aa661bf2414p-780, 0x1.ad8a37467052ap-349, 0.0, 0x1.abfa57daf5c8cp-255,
     0x1.dfba1972db15ap-492, 0x1.79069d7341ac6p-898, 0x1.ebb3bb2d26be3p-845, 0.0, 0.0,
     0.0, 0x1.739c9e2c4a9e1p-516, 0x1.73d5f7bdbf054p-326, 0.0, 0.0,
     0x1.8dc8c94845fa6p-285, 0x1.6b55ba23e4cecp-576, 0.0, 0.0, 0x1.bbc211b7a97b6p-848,
     0x1.2154a92d54cc9p-334, 0.0, 0x1.60db84882926dp-841, 0.0, 0.0,
     0x1.3dcfe1f3a8055p-576, 0.0, 0x1.fbcf2fe837d16p-984, 0.0, 0x1.72f2a591c4dbcp-193,
     0.0, 0x1.f93faf081aff1p-564, 0x1.f8548905a60d7p-549, 0.0, 0x1.3cd545aa27c82p-39,
     0.0, 0x1.4417a2d817d0fp-884, 0x1.78de67f25649p-1013, 0.0, 0x1.84c79262282d7p-907,
     0.0, 0.0, 0x1.5323394d872aap-344, 0.0, 0x1.f7b3b70c183c4p-10,
     0x1.808bbd09d3f95p-495, 0.0, 0x1.d8726fbbee52ap-532, 0.0, 0x1.5f8bdbf87c79fp-450,
     0x1.ced41a7d47956p-170, 0x1.365f3f177c71ep-462, 0x1.d5618069b3869p-354,
     0x1.69ffb8b8e44fdp-634, 0x1.9a519b6a52ce6p-917, 0.0, 0.0, 0x1.6f66c188b577ep-837,
     0.0, 0x1.b8daf073d70dbp-68, 0.0, 0.0, 0x1.772522c88b95bp-753, 0.0, 0.0,
     0x1.e23a30fd0be99p-465, 0.0, 0.0, 0x1.3c5314000962ap-234, 0x1.bda3988b9ebfep-300,
     0x1.710b251878eccp-563, 0x1.50b20e6a56477p-717, 0x1.6c5fffb9fd82cp-287,
     0x1.5a086c84c9644p-1, 0.0, 0x1.671083d9cda2dp-881, 0x1.88552a5a10fc5p-396, 0.0,
     0.0, 0.0, 0x1.d46adddb38632p-659, 0.0, 0.0, 0x1.52449ce1bbdeep-439,
     0x1.0eab5460f30c5p-876, 0.0, 0x1.bd764a6f69bd1p-906, 0x1.dc23b5b1248afp-936, 0.0,
     0x1.c8010a2320706p-666, 0x1.5a831e0e1b57p-103, 0x1.1a91c809cf5ddp-542,
     0x1.b372e22e63172p-348, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95a8bad5652ap-240,
     0x1.0569c6aeea156p-399, 0.0, 0.0, 0.0, 0x1.294b6436e8b01p-907,
     0x1.fa283009771d6p-966, 0x1.6589182e7a75cp-721, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.83fe00fb0d0f8p-422, 0x1.71c04acdb1ac2p-658, 0x1.acc11ffd3212fp-452,
     0x1.86c107759184fp-60, 0.0, 0.0, 0x1.9eb4e7ae5c5cfp-985, 0x1.d49cab487e27ep-426,
     0x1.d552ada93dd53p-642, 0x1.110c88c2c73c5p-738, 0.0, 0x1.23d51da9d3442p-761,
     0x1.3fdd537fd49a1p-788, 0.0, 0.0, 0.0, 0.0, 0x1.b7826367750b3p-603, 0.0,
     0x1.ea99e69f63a96p-549, 0.0, 0x1.384fea169a3adp-692, 0.0, 0x1.6bcd7611102f7p-53,
     0.0, 0x1.b2667eedfca78p-868, 0x1.c6197c241201bp-113, 0x1.96ac611d8051cp-264, 0.0,
     0x1.8a61b432c6f68p-717, 0x1.78abe1d1eb57cp-457, 0x1.e47a9a7bf0b1fp-991, 0.0,
     0x1.63eb3b32798abp-9, 0x1.a5c53c9493722p-1019, 0.0, 0.0, 0x1.92e6150d89139p-776,
     0x1.ca7654a6d435dp-256, 0.0, 0.0, 0.0, 0x1.31f3292755a59p-838, 0.0,
     0x1.f79fd5c596a3cp-915, 0x1.ef4a5174056ebp-207, 0x1.70d0fe1ec6cd2p-549, 0.0,
     0x1.5dfaba7ff3ae3p-352, 0.0, 0x1.9d99253b67c1fp-706, 0.0, 0x1.6f3fad512eb98p-228,
     0.0, 0.0, 0.0, 0.0, 0x1.656fffa98c331p-628, 0.0, 0x1.fad15fcf5784dp-70,
     0x1.f5fae3889c7a8p-1007, 0.0, 0.0, 0.0, 0.0, 0x1.ae3a3e65e37f1p-437, 0.0, 0.0,
     0.0, 0x1.8a4c9e103bcfcp-1021, 0.0, 0.0, 0x1.2507c24e6c4e7p-803,
     0x1.22ecb6f7f0e17p-604, 0.0, 0x1.1f26dbdc1a5b7p-529, 0.0, 0.0,
     0x1.3a1ae9df74c92p-790, 0x1.73eb23f357bbp-618, 0.0, 0.0, 0.0,
     0x1.1ad2c5e54cc0cp-500, 0x1.788c42248bd51p-1008, 0.0, 0.0, 0.0,
     0x1.7ab0763036d8fp-449, 0.0, 0.0, 0.0, 0x1.5351e311263a5p-17, 0.0,
     0x1.969b0fccb4fb6p-790, 0x1.eebd6c7b781f5p-710, 0.0, 0x1.0db1ebf41175ep-677,
     0x1.731a69c651c51p-169, 0.0, 0x1.90aac7bfa31acp-1020, 0x1.89b6045a813bdp-281,
     0x1.a024e08738d6fp-536, 0x1.a4cd91e2143c9p-227, 0.0, 0x1.42c922f34e0bbp-593,
     0x1.0b8b74b3174ecp-238, 0.0, 0x1.128ff9a2a0b06p-264, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7783ef9649e56p-322, 0x1.b13c8233246a8p-562,
     0x1.efe70d381bee6p-983, 0.0, 0.0, 0x1.7f11a3f6d34bp-128, 0.0,
     0x1.d4149d4109cdcp-415, 0x1.8440892e8dd85p-178, 0.0, 0x1.6e8f68c2137f3p-833, 0.0,
     0x1.ddf5796b5bbc2p-399, 0x1.3a17c77dd4772p-115, 0x1.d0671a6e904a5p-1002, 0.0,
     0x1.cdcf9095cc1f9p-773, 0x1.268a03759d54bp-475, 0x1.0c39b1b3d21aep-301,
     0x1.d98f0c82e0694p-553, 0x1.9d46c41d7bd14p-291, 0.0, 0x1.9761151300fcep-459, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9d8a696b20b19p-260, 0x1.eb2e5f1176a68p-690, 0.0,
     0x1.f2691861f809ep-769, 0.0, 0x1.be3dbed77aaedp-692, 0x1.58d29af84c93p-353, 0.0,
     0x1.b11c20de9973fp-572, 0.0, 0.0, 0.0, 0x1.592ad68a9c884p-963, 0.0,
     0x1.7d7e6917a1d0ep-126, 0.0, 0.0, 0x1.05202957fc142p-507, 0.0,
     0x1.b31dd04980e42p-747, 0x1.07ee3e5d50381p-482, 0x1.d2c3ec7b3aa13p-856,
     0x1.e2864003e5873p-95, 0.0, 0.0, 0x1.e69ae3dbd8ed1p-477, 0.0,
     0x1.e4fe37cb6f7b9p-428, 0.0, 0.0, 0.0, 0.0, 0x1.d7e19938f4e26p-694,
     0x1.e0f377f7d5643p-911, 0x1.9a46f3c3787c9p-150, 0.0, 0x1.196ef57f97c48p-788,
     0x1.62b0ea6cf55ccp-331, 0x1.004232d43204ep-76, 0x1.9a016ab554e46p-744, 0.0, 0.0,
     0.0, 0x1.7459b8936906p-132, 0.0, 0x1.d76cdebac965ep-808, 0x1.bbada55d8f538p-18,
     0.0, 0.0, 0x1.070126f751198p-271, 0x1.12c3ebb495cafp-66, 0x1.a39b80d921211p-454,
     0x1.f423edaaac3d2p-889, 0.0, 0x1.1ca639cc8d1cfp-2, 0x1.a9a1a28bd85bbp-184,
     0x1.c26dda69c7486p-265, 0.0, 0.0, 0x1.3155f53d08ab7p-99, 0x1.41979444a7618p-850,
     0.0, 0.0, 0.0, 0.0, 0x1.340e0ef340eedp-466, 0x1.7cbaed7b8b984p-37, 0.0, 0.0,
     0x1.9e02e0ed229ffp-622, 0x1.b76a32dfb026p-600, 0.0, 0x1.38ac73234baadp-20,
     0x1.b869a3e395235p-573, 0.0, 0x1p0, 0x1.aaa04439d76c7p-482, 0.0,
     0x1.e62747dda172ep-1003, 0.0, 0.0, 0x1.a0b0b56209492p-365,
     0x1.37088e60ee00cp-800, 0.0, 0x1.a58fc25aa02b9p-806, 0x1.909d273085898p-706,
     0x1.885b3e8449d1ep-492, 0x1.fa0e53f5b757ep-987, 0x1.358a92f5bce6ap-108, 0.0,
     0x1.4e5c9bf5e9817p-307, 0x1.ccf077d19b6f6p-38, 0.0, 0.0, 0.0,
     0x1.bbccc024d4311p-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5cf8f0af8a9c3p-730,
     0.0, 0x1.1f07bcf68595p-735, 0.0, 0x1.50585a6ab2399p-639, 0.0,
     0x1.f1269cdabf16ap-433, 0x1.578d32b35af1fp-219, 0.0, 0x1.b2a0aca3fe6bcp-989, 0.0,
     0x1.45be9ec61c1dap-883, 0.0, 0.0, 0x1.8cb2df5cb462ep-950, 0x1.e759350ca3845p-945,
     0.0, 0.0, 0.0, 0.0, 0x1.9d8e71e6b8007p-397, 0.0, 0.0, 0x1.0b2f30ace2a3ap-907,
     0.0, 0.0, 0x1.2dab32ab36a06p-396, 0.0, 0x1.8e0ac476de5e9p-119, 0.0,
     0x1.405d33a9c6ee9p-748, 0x1.acfe76c2ee1e4p-399, 0x1.2e9301ccaf7dep-186,
     0x1.e789d8e9192cbp-846, 0.0, 0x1.877eb49901de2p-75, 0.0, 0x1.338f87de38f64p-184,
     0.0, 0x1.e0fcd104b6051p-735, 0.0, 0.0, 0x1.52b6a7abf1d5bp-964, 0.0, 0.0,
     0x1.c84ca6ffee2d8p-580, 0.0, 0.0, 0.0, 0x1.acc1f2b667007p-1007, 0.0,
     0x1.50ff6faa47e1ap-482, 0x1.08fb1ab281b3cp-926, 0x1.e3b496e98fbf7p-271,
     0x1.ec0b61c48a41ep-72, 0.0, 0.0, 0x1.ee0533b533acp-556, 0.0, 0.0,
     0x1.4fb7d09831ef7p-478, 0.0, 0x1.bcd7252a40ccbp-336, 0x1.43a5c75c0214dp-218,
     0x1.55369a7912614p-382, 0x1.1519d2d6a5f51p-557, 0x1.62cd5abb4d965p-922,
     0x1.9276516fe37a8p-130, 0x1.ebc381a7a1ba3p-669, 0.0, 0x1.1364c2e969634p-125, 0.0,
     0x1.5e7c9e0a4907dp-821, 0.0, 0x1.0817839dbfc5ap-175, 0x1.7f125e718d75dp-192, 0.0,
     0.0, 0x1.5cfc71308fcd7p-972, 0x1.7f2a3bb89540cp-532, 0x1.d3273a82632dp-659, 0.0,
     0.0, 0.0, 0.0, 0x1.9dadcbb0e78ap-170, 0x1.a04c7ef23694bp-556,
     0x1.403bab7d387fap-385, 0x1.fb03007480da6p-556, 0x1.2025495a3617cp-170, 0.0,
     0x1.4d48e4220fd0dp-349, 0x1.d920eac6791fcp-128, 0x1.983104ac420c6p-412, 0.0, 0.0,
     0.0, 0x1.ec2ee10081189p-589, 0.0, 0x1.63da9dc078a38p-909, 0.0,
     0x1.d670b3c4ef97ap-104, 0.0, 0x1.388207d4ce123p-188, 0.0, 0x1.ffe27094d711p-132,
     0x1.62b1534d7ff34p-990, 0.0, 0x1.6e6e6aada7269p-491, 0.0, 0.0, 0.0, 0.0,
     0x1.5ebfc60eb099fp-731, 0x1.c41119c21cef3p-746, 0x1.ff6cd64c3d55ep-778,
     0x1.a25bfa9181226p-897, 0x1.bcac132a8d3bdp-250, 0.0, 0.0, 0x1.7c7651a986c75p-311,
     0.0, 0.0, 0x1.4e149874469dp-5, 0.0, 0x1.05681420281f7p-205,
     0x1.6fa1d7341681ep-95, 0.0, 0.0, 0x1.e6166ac112ce5p-445, 0.0,
     0x1.e6c0516231649p-392, 0.0, 0.0, 0.0, 0x1.760b1e0a3a5c8p-507,
     0x1.0900f760545f9p-150, 0x1.25c039cc8dfa1p-181, 0.0, 0x1.1b1fb9b9c866bp-726, 0.0,
     0.0, 0.0, 0x1.28fe907fd2acep-116, 0x1.7444e7039bb74p-936, 0x1.a897d33bf6451p-371,
     0x1.082065f10a9fbp-306, 0.0, 0.0, 0x1.7931cedd3a1f2p-752, 0.0,
     0x1.9583cadb391bfp-212, 0.0, 0.0, 0x1.52205ea8b158dp-178, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5e06355dde3d5p-431, 0.0, 0.0, 0.0, 0.0, 0x1.49ed600889d4ap-538, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4ac44e14ac91dp-587, 0x1.ae62deb2a9432p-415,
     0x1.bc427dcf32e1cp-285, 0x1.d57ca01aa824dp-632, 0x1.b5103008bde7dp-418,
     0x1.eae18d4fecb86p-787, 0.0, 0x1.87c6f00506293p-263, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c547469c2113ep-882, 0.0, 0.0, 0x1.a7c57d5445ed7p-523, 0.0,
     0x1.dc6a5beb3b933p-798, 0.0, 0x1.06c424b678a16p-988, 0.0, 0x1.9fbcf372042ffp-308,
     0x1.a47f95e416dcdp-722, 0x1.fa4f21cd934d4p-766, 0x1.a678132210932p-261,
     0x1.8332b58bc3b3p-403, 0x1.196cd79a2a61fp-214, 0x1.2155bff0beca7p-992, 0.0, 0.0,
     0.0, 0x1.2c4463b3b0447p-384, 0.0, 0.0, 0x1.60add9095857fp-380, 0.0, 0.0,
     0x1.041b9b7452393p-100, 0x1.f36157cdf6f53p-187, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ddfcc5c56584p-776, 0.0, 0x1.4096ddd3efa6fp-700, 0.0, 0.0,
     0x1.bb120fe8db20ap-541, 0.0, 0x1.86e9b0725efbap-46, 0x1.1ddaa1264a50ap-848, 0.0,
     0x1.286e5f501c83p-692, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.776f67f7ba7dep-639,
     0x1.d6891889a7507p-888, 0.0, 0.0, 0x1.2b6a8b16b164fp-919, 0x1.0587d3715e684p-289,
     0.0, 0x1.fe435dcfdc0dbp-912, 0.0, 0x1.cfd0146e9be3bp-855, 0.0, 0.0,
     0x1.658648bb1ee8ep-277, 0.0, 0x1.c8d90fb051175p-651, 0x1.1c1be4c1a3828p-101, 0.0,
     0x1.3a76c48781f5fp-868, 0x1.414f6b10ad5d4p-861, 0x1.2a76e9ec812d2p-861,
     0x1.07b98aed29d21p-671, 0x1.e16f5e5d694f7p-231, 0x1.cb55e1f689178p-713,
     0x1.37ebe9be96b6ep-264, 0.0, 0x1.e2df2585b09dbp-748, 0.0, 0x1.003fa2b53c905p-820,
     0.0, 0x1.e31dd9ff27adp-320, 0x1.65f81e35cd436p-331, 0x1.4dda258472465p-549,
     0x1.b514305cf57dap-584, 0x1.e08301d32441dp-576, 0.0, 0.0, 0x1.b77b2f1586b17p-966,
     0.0, 0x1.ece62ee35553p-250, 0x1.c614df5527e4ep-496, 0x1.39bec80ee1a04p-723, 0.0,
     0.0, 0.0, 0x1.c3d36bfa58b91p-484, 0x1.189c41ba9cc8p-649, 0.0, 0.0,
     0x1.97e6c70c2184cp-944, 0x1.fba4c9a38152bp-997, 0x1.d8df96242655bp-271, 0.0,
     0x1.eb3ae84b8dea7p-256, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be1281dcbdd59p-608,
     0x1.83cb33f4b7c8ep-709, 0.0, 0.0, 0.0, 0x1.c2dc0aff11e99p-814,
     0x1.80b5cb4708489p-727, 0x1.a4217649dc454p-644, 0x1.71ad0ab36c43ap-320,
     0x1.c5ccc9d8f6d12p-104, 0x1.c62802bc0dd09p-804, 0x1.70e06fc535159p-316, 0.0,
     0x1.4fbc9ecf7074ep-678, 0.0, 0x1.64488d2afacfdp-838, 0x1.a429e5ab5eae5p-638, 0.0,
     0x1.a8883d03f1a1ap-596, 0.0, 0.0, 0.0, 0x1.9b43b3a374927p-550, 0.0, 0.0, 0.0,
     0.0, 0x1.7100bdcce619ep-620, 0x1.2cba5439243fbp-658, 0x1.b3d9b842544d8p-306, 0.0,
     0x1.70af5596f3b02p-278, 0.0, 0x1.8200e5fc8d5ep-80, 0.0, 0x1.a1d98126bb358p-928,
     0x1.a1e2e6ecc996dp-1001, 0.0, 0.0, 0x1.2c2030c5169f5p-891, 0.0,
     0x1.d982cffd7c4ep-7, 0x1.34ee392464c8p-337, 0.0, 0x1.a9a154b1e95c6p-996, 0.0,
     0x1.ed1e7170b6118p-573, 0.0, 0x1.5a7a4a59e2074p-298, 0x1.8684d3cfd4a52p-817,
     0x1.55a7484eb32d7p-938, 0x1.61b3aed0c20ffp-885, 0.0, 0x1.e5c5e7ca5a7c1p-240, 0.0,
     0.0, 0x1.418aa1b08dbcbp-801, 0.0, 0x1.27d2b07dedb5p-166, 0.0,
     0x1.c65578c738615p-174, 0.0, 0x1.0a843be94ac32p-1006, 0.0, 0.0, 0.0,
     0x1.d635ca24bcf54p-333, 0x1.cf8ad11049642p-1003, 0.0, 0x1.c9c05cd601aa1p-345,
     0.0, 0x1.9ca5dc5858b23p-324, 0.0, 0x1.bfd0e1a9e841p-460, 0.0,
     0x1.a6888a1f82ad9p-39, 0.0, 0.0, 0x1.e32de17f44937p-949, 0x1.9f71bb6923a48p-199,
     0.0, 0.0, 0.0, 0x1.78135b631a002p-547, 0x1.fa2c4a09c50fp-284,
     0x1.1063bb8904f8dp-442, 0.0, 0x1.78adb499c7101p-307, 0.0, 0x1.76877dd720bbcp-41,
     0x1.539b2e0bf81ebp-606, 0x1.d666447afa1d2p-633, 0.0, 0x1.f65e5c09ddb53p-388, 0.0,
     0x1.16531b1729e52p-616, 0x1.40666cdd409fbp-796, 0x1.f0aa3e6fae282p-29,
     0x1.eb38f005ee8b1p-599, 0.0, 0x1.73602e2b61723p-163, 0.0, 0.0,
     0x1.cb9d535457176p-439, 0.0, 0x1.c5c18cb41718cp-111, 0x1.66b0a3ca1583ap-295,
     0x1.346cc7ba94f49p-214, 0.0, 0.0, 0x1.470673b18793fp-235, 0x1.9339a4634db0ap-630,
     0.0, 0.0, 0.0, 0.0, 0x1.d93a326abab95p-241, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_exp10d4_u35kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_exp10d4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp10d4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
