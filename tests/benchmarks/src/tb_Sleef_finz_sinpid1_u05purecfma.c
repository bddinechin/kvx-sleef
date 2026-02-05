/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpid1_u05purecfma.c --function \
 *     Sleef_finz_sinpid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.735b542a2e047p-753, 0.0, 0x1.c9490003e8538p-933, 0.0,
     0x1.eb63f8d5f3b7dp-214, 0x1.9c7888fd78626p-941, 0.0, 0x1.162013c6b91adp-146,
     0x1.182dbdaa3b585p-762, 0x1.f4f5dd494e802p-646, 0.0, 0.0, 0x1.ee18aa659a4b8p-180,
     0.0, 0.0, 0.0, 0x1.9f57c5aec47cap-483, 0x1.70aa3b4c5abfap-444, 0.0,
     0x1.cf933d370cad3p-933, 0.0, 0.0, 0.0, 0x1.6a3df2b6aa2e2p-917, 0.0, 0.0, 0.0,
     0x1.2a535e8ffb889p-995, 0x1.0ea0206d2b81ap-639, 0x1.edbd6615ac12p-375, 0.0,
     0x1.29cbf3b90c2acp-454, 0.0, 0x1.3fc1e711b0fb5p-494, 0.0, 0x1.5cb89bccf7f8ap-143,
     0x1.120b36a645e04p-838, 0.0, 0x1.218089604994dp-528, 0.0, 0x1.367c5dfb67aep-277,
     0.0, 0.0, 0x1.2ef469afa812dp-633, 0x1.1265f762e35abp-131, 0.0,
     0x1.d2be7819a9441p-482, 0.0, 0x1.db5a3b7aab9d8p-457, 0x1.7242a95b00f41p-117, 0.0,
     0x1.a0596c3b84c43p-517, 0x1.99344e6b26be9p-671, 0.0, 0.0, 0x1.314531a5e5a2fp-301,
     0x1.e1d50ae8abe3cp-645, 0.0, 0.0, 0x1.5e866e93cc59p-332, 0x1.c2aca5b5d7729p-470,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a613d82a2ecddp-584, 0x1.8e5291847872ap-789,
     0x1.e9243cf03e4e5p-436, 0.0, 0x1.648525f18d018p-552, 0.0, 0x1.8a3855e852dbfp-361,
     0x1.2707dde14bccep-649, 0.0, 0.0, 0.0, 0.0, 0x1.c0e0778539c88p-960,
     0x1.f9b2d7f5ec238p-917, 0.0, 0x1.acbd98f03e3a8p-707, 0.0, 0x1.b3a46e2b1bd68p-625,
     0.0, 0.0, 0x1.bffc6fbe8fa68p-1005, 0.0, 0.0, 0.0, 0x1.9e24ab1c4e7e3p-64, 0.0,
     0x1.dc53dd218e19ap-772, 0x1.7921ecb4c3c7cp-743, 0x1.a48a0646add6ap-374, 0.0,
     0x1.6cac1f8a58962p-331, 0.0, 0x1.f118a4d57bc9cp-215, 0x1.2b0ec48a1819ap-802,
     0x1.b74a26cb2ec78p-618, 0x1.4bc3f2c20b20fp-109, 0x1.aa126f5ad42fbp-465, 0.0,
     0x1.276cbef678d3dp-94, 0x1.2a53144a996edp-245, 0x1.19288ecc7316p-370, 0.0,
     0x1.310485781e735p-527, 0x1.ba3836201777cp-856, 0x1.84e198bbb5bc4p-37, 0.0,
     0x1.f84389b12ab75p-266, 0.0, 0.0, 0x1.2d9fe4f922777p-139, 0x1.a20eefc5bf975p-476,
     0x1.98a04715bccf4p-197, 0x1.e16845a50a6adp-212, 0x1.28a8de1776b8bp-19, 0.0, 0.0,
     0x1.7f4bef334667bp-333, 0x1.e325673adcf52p-58, 0x1.2fd4cfbbafe0dp-557,
     0x1.f56d11d4a9857p-843, 0.0, 0x1.a528d597ffcabp-917, 0x1.d832db645aeb5p-674,
     0x1.2277ff189f2b6p-512, 0.0, 0x1.9e65add086c38p-476, 0.0, 0.0, 0.0, 0.0,
     0x1.d1930845917bbp-208, 0x1.5c8124db668b9p-444, 0x1.2bdb1849ad538p-858, 0.0,
     0x1.ebcea80542504p-704, 0.0, 0.0, 0x1.2da8198686dc4p-1007,
     0x1.8f4591c4e042bp-225, 0.0, 0.0, 0x1.fe46340d632dp-115, 0.0,
     0x1.d4965c8808cd8p-936, 0x1.f40e92199a751p-681, 0x1.61ca3fe6bb3f7p-291, 0.0, 0.0,
     0.0, 0x1.79ecb050f8438p-836, 0x1.6c087aecb6d78p-768, 0.0, 0x1.ffac918166c2bp-364,
     0x1.cb4df33d46a3bp-496, 0.0, 0.0, 0.0, 0.0, 0x1.965cc31fbbf8fp-943,
     0x1.4cf942ecc4c0dp-33, 0.0, 0x1.099caaac203dbp-379, 0x1.ce423eec2b7d7p-644, 0.0,
     0x1.a08da8bedf9b1p-810, 0.0, 0x1.dcc5ff6818fc7p-745, 0x1.755ba6fd99c0bp-964, 0.0,
     0x1.bb31dbfe78e5p-939, 0.0, 0x1.33830e3b1714bp-199, 0.0, 0x1.f5bbb0e5b311p-141,
     0.0, 0x1.2e41880782bbbp-138, 0x1.a4a4d30344a59p-658, 0.0, 0x1.89e384fdc2eeep-544,
     0x1.cabef9d7a4d24p-998, 0x1.d500337d83dcfp-991, 0x1.8117f8b02691ep-686,
     0x1.87c4201ae743fp-506, 0x1.fdad5da8d323dp-960, 0x1.1758c1c07acbbp-102,
     0x1.60b79be322515p-987, 0x1.1219a91563647p-334, 0x1.79a895d57b6d7p-599,
     0x1.c01b200e1d23cp-1022, 0x1.991f545ba4e22p-105, 0x1.6812c4507d37bp-570, 0.0,
     0x1.210fa0e818de7p-794, 0.0, 0.0, 0.0, 0x1.f713f9ab5626ep-568,
     0x1.17f7a2a9c9aa2p-682, 0.0, 0x1.a4b515e19974fp-227, 0.0, 0.0,
     0x1.57260fb3358edp-872, 0.0, 0x1.10f18859f36f7p-575, 0x1.63aa04fd5c62p-174, 0.0,
     0.0, 0.0, 0x1.8628fdabed303p-896, 0x1.25ef545bbab8ap-55, 0x1.3e69be252562p-562,
     0x1.fd28b26c79244p-246, 0.0, 0x1.458587ac9e58fp-404, 0x1.9ee24e70d79b8p-768,
     0x1.1eae645ef0a19p-777, 0x1.acca02365440ap-611, 0.0, 0x1.73d1f67d1769ep-445,
     0x1.5c0d7e616f002p-1008, 0x1.19242e9169591p-566, 0x1.a533d925d541dp-557,
     0x1.6d111727dc4f9p-824, 0.0, 0x1.59d3b2a691e7bp-407, 0.0, 0x1.0c8bab6998754p-439,
     0x1.39cd9ae1aed2bp-765, 0.0, 0x1.ed5eea780a5fdp-696, 0x1.b131cd52f079cp-24, 0.0,
     0x1.dd538a0ae700fp-440, 0x1.fc4b8c3d61d8dp-946, 0x1.f588ad4919818p-89, 0.0, 0.0,
     0.0, 0.0, 0x1.19351aeb5289bp-397, 0.0, 0.0, 0.0, 0x1.92700cb4842f6p-753,
     0x1.7389f8846d305p-275, 0.0, 0x1.353c13b850c5p-1018, 0.0, 0.0, 0.0, 0.0,
     0x1.96980793a7e75p-949, 0x1.96ef0a4b8d4f7p-407, 0x1.64af3c12f7e72p-93, 0.0,
     0x1.5a0b0bb2363a3p-959, 0.0, 0.0, 0x1.0fe6aa99287b8p-210, 0x1.1dad18160a154p-787,
     0.0, 0x1.7ce55635ed35dp-821, 0x1.b1d10d3a32506p-790, 0.0, 0.0,
     0x1.3dc7311697d5fp-121, 0x1.3644a2128db03p-274, 0.0, 0.0, 0.0,
     0x1.4792654e7294ap-481, 0.0, 0x1.e0600d7af4f5p-776, 0.0, 0x1.bc329cf16e52fp-493,
     0x1.c37328ded01dap-80, 0.0, 0x1.a7d5ac547526fp-949, 0.0, 0.0,
     0x1.0f52441a67625p-533, 0.0, 0.0, 0x1.50c4c682be2bcp-334, 0.0,
     0x1.bf3ef5913028p-779, 0.0, 0x1.0635eb19984c6p-454, 0.0, 0x1.39ba0003915f7p-975,
     0x1.e7f9d7c5c452ap-197, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b1953034c282p-577,
     0x1.ed3e35551bca7p-215, 0.0, 0x1.d7023772463dbp-128, 0.0, 0x1.bc2993108fd9ep-12,
     0x1.ab02e37bee00fp-380, 0.0, 0.0, 0x1.62c1b7c3173bdp-127, 0x1.0f437e70cbd59p-610,
     0x1.19f08bc8bb3c6p-1011, 0x1.29af6fed43c1ep-907, 0x1.2586227948561p-237, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7aace28a166ffp-270, 0.0, 0x1.1fd3b1ec0e9e5p-433,
     0.0, 0x1.6e03e2463f699p-978, 0.0, 0.0, 0.0, 0.0, 0x1.49cf9b6934cfdp-239, 0.0,
     0.0, 0.0, 0x1.3bc1c6a9485aap-357, 0.0, 0.0, 0x1.288ce8b6f0fbfp-164, 0.0,
     0x1.4d23a0d60a4efp-309, 0x1.c6e2257f7f8ebp-590, 0.0, 0x1.0f6565934033ap-244, 0.0,
     0x1.90ddc110a4feep-342, 0.0, 0x1.701bb35291135p-97, 0x1.b68e5ac438116p-251,
     0x1.56664192c593ap-889, 0.0, 0x1.5a8a45ee496a2p-258, 0x1.0cbedb9840d6dp-334,
     0x1.2f3db2896cf98p-343, 0.0, 0x1.0994a3cc275b4p-909, 0x1.d6d2177c7c9edp-712,
     0x1.44d2a76beafcep-859, 0.0, 0.0, 0x1.f15dfecbde2cdp-801, 0x1.5efe1306ca66fp-115,
     0.0, 0.0, 0x1.4c419d4e11442p-656, 0x1.f08392acd5a05p-524, 0.0,
     0x1.9d6d88a4a50eep-213, 0.0, 0.0, 0.0, 0.0, 0x1.aaeb9428cf77fp-221,
     0x1.d9891eeed22dep-588, 0.0, 0.0, 0.0, 0x1.dd538fe967bcap-181,
     0x1.39e1c3470958ep-110, 0x1.7489c460f4794p-160, 0x1.10ddc2a0b7da9p-421,
     0x1.33a873412bff1p-482, 0x1.baa0c67bdb0c2p-468, 0x1.27936f816bac1p-952,
     0x1.d1ae837c26b81p-564, 0.0, 0.0, 0.0, 0.0, 0x1.61d0d240298fp-461, 0.0, 0.0, 0.0,
     0x1.6925ea3e1e504p-318, 0x1.e05317bfcf59bp-52, 0.0, 0x1.5faf792a5facap-868, 0.0,
     0x1.7f98404c530b9p-107, 0.0, 0.0, 0x1.1b0f82953870dp-200, 0x1.4cb4b839ed90fp-60,
     0x1.479c3d56069a1p-725, 0x1.0bbab4a7416f9p-283, 0.0, 0x1.824cdbd505b7ep-903, 0.0,
     0x1.6cf6fb000e86cp-527, 0.0, 0x1.6e75a445a2d62p-867, 0x1.ddf8a75abb0cfp-133,
     0x1.3fa98b800d86cp-466, 0.0, 0.0, 0x1.c158186038ec1p-608, 0x1.bfacc20bb4db6p-66,
     0.0, 0.0, 0x1.d3ce23c772abfp-937, 0.0, 0x1.dba7b9eb4dd7bp-799, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.18a71afa4be12p-946, 0x1.e80ae68951f15p-128,
     0x1.96798ca373a94p-852, 0x1.e60ab8b1f0f29p-969, 0.0, 0.0, 0.0,
     0x1.2eac153d57e4fp-264, 0x1.5bfdd0e37315cp-864, 0.0, 0.0, 0x1.391202dd3e8ccp-116,
     0.0, 0.0, 0x1.c6d43ea1637bfp-1001, 0x1.1760914a71bfdp-712, 0.0,
     0x1.d55c3654e16e7p-189, 0.0, 0x1.6c8e8c2511543p-812, 0x1.44d15933649bbp-769, 0.0,
     0x1.cbc96d874d14cp-50, 0x1.bca1804003f87p-100, 0x1.6ab0012a50684p-497, 0.0, 0.0,
     0.0, 0.0, 0x1.e65c0b15cdba3p-24, 0x1.787c56368dce3p-358, 0.0, 0.0, 0.0,
     0x1.9541048ff75ebp-993, 0x1.950fe351d4efdp-165, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.532f15cb59448p-623, 0x1.c76814643ddfap-697, 0x1.6fcdb97029d42p-60,
     0x1.f32cab15c39d3p-783, 0x1.a68a12751d8f4p-338, 0x1.2d6a1da587eap-210, 0.0,
     0x1.a518dbb37f14cp-229, 0x1.fa09ddadfa2edp-229, 0x1.30799fd094c13p-228,
     0x1.93d64f5007498p-311, 0.0, 0x1.1df8d16814791p-219, 0.0, 0x1.dc4adffd21948p-239,
     0x1.b36b3a0204b05p-119, 0x1.d5575c4e228fp-75, 0x1.24e002bbfe306p-617,
     0x1.8ed1003bd3945p-587, 0.0, 0x1.e4ad9c25cad32p-894, 0.0, 0x1.778f24ef942c9p-537,
     0x1.f0cc586289a54p-372, 0x1.4e699e975662p-149, 0.0, 0x1.a1bb9209c47cep-681, 0.0,
     0.0, 0.0, 0.0, 0x1.bbcd2b0eb122cp-542, 0.0, 0.0, 0.0, 0x1.7a6fccdb4462ap-623,
     0.0, 0x1.02a5f7d7f6caep-610, 0.0, 0.0, 0x1.4e94904423931p-866, 0.0,
     0x1.04f94f4b68e9cp-792, 0.0, 0x1.2b8d6a942ae34p-789, 0.0, 0.0,
     0x1.06cfe154b8c3dp-873, 0.0, 0x1.cd0187cf01f7dp-425, 0x1.e074a2db87e6ap-140, 0.0,
     0.0, 0x1.45467a59f7fa1p-453, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09c71fcfe397dp-441,
     0.0, 0x1.79a07364bf425p-130, 0.0, 0.0, 0x1.fde950007b114p-267,
     0x1.87a54c5472109p-1007, 0x1.0d2b6d11b8e3dp-948, 0.0, 0.0, 0.0,
     0x1.07908d890b08ep-860, 0.0, 0x1.b08125600d788p-742, 0x1.e57bf6a6cc88ap-282,
     0x1.3fa9e7941e155p-430, 0x1.7216e280f61d9p-229, 0x1.ef01988949e33p-675,
     0x1.9b6b6f8982f9bp-283, 0.0, 0.0, 0x1.25eed9d9ad1efp-880, 0.0,
     0x1.ab249033270e6p-519, 0.0, 0x1.536bb85ed8d46p-117, 0x1.f2a06cb175ba6p-937, 0.0,
     0.0, 0x1.c725c16474b16p-336, 0x1.3090ae91f8442p-932, 0.0, 0.0,
     0x1.ecd60854b5989p-37, 0.0, 0.0, 0.0, 0x1.97798061a87bep-119,
     0x1.a50b00427a7fp-457, 0.0, 0x1.f3cdb9339d314p-709, 0x1.ae683666075fdp-848,
     0x1.7e5503624e27bp-687, 0.0, 0x1.da7ef174a633cp-552, 0.0, 0.0,
     0x1.6557ea3243638p-728, 0x1.9738260f6d5dp-643, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b553c303cec26p-222, 0x1.55c95743d80fep-93, 0.0, 0.0, 0.0, 0.0,
     0x1.b522b84c80e2bp-713, 0x1.c506d1a44897dp-219, 0.0, 0.0, 0x1.547eeb678544ep-882,
     0x1.e3129ed1088ep-927, 0.0, 0.0, 0x1.8445d5872b80fp-755, 0x1.2f00d3e7077c1p-134,
     0.0, 0x1.90a1a24a5426fp-975, 0.0, 0.0, 0x1.baa7c0406197dp-598, 0.0, 0.0, 0.0,
     0x1.e4e01463f538bp-907, 0.0, 0x1.758d957ce7d57p-376, 0.0, 0x1.1369c2e0b1e0fp-406,
     0x1.69393c67dd387p-301, 0.0, 0x1.b0d0232063ae5p-703, 0.0, 0.0,
     0x1.ba79505f4222bp-827, 0.0, 0.0, 0.0, 0.0, 0x1.a2a8f1817043fp-870, 0.0, 0.0,
     0x1.ee573f7e33fap-377, 0x1.dc9e73a67e071p-641, 0.0, 0.0, 0x1.65ac80e7036b7p-33,
     0x1.050dcfc1b6a25p-414, 0x1.6b98ccd3617ebp-905, 0.0, 0.0, 0x1.dbec07679d02dp-60,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.532810ec8b995p-673, 0.0, 0.0,
     0x1.d3394d190c376p-250, 0x1.1014dd767e1e8p-342, 0x1.71bfe803c377cp-143,
     0x1.80f51d114c221p-978, 0.0, 0.0, 0.0, 0x1.ca2686170bcc6p-975,
     0x1.ae31a8768b67bp-463, 0.0, 0x1.d8cb81c59864bp-302, 0.0, 0.0,
     0x1.6c849a5058191p-599, 0x1.8077b8310ac4dp-352, 0x1.4dd226445b3fp-851, 0.0,
     0x1.70191c4c62ca2p-968, 0x1.2f654a30c8a7bp-823, 0.0, 0.0, 0.0, 0.0,
     0x1.980ce1aa5a991p-528, 0x1.dd481763cf8abp-482, 0.0, 0.0, 0x1.20cb43a53ea3ep-989,
     0x1.61236f790240dp-808, 0x1.1624db34b4e23p-759, 0x1.5e9fd79ed13cep-971, 0.0,
     0x1.cc13ddcfd177ap-178, 0x1.90a4c7cc78f47p-286, 0.0, 0x1.2f829542961c6p-727, 0.0,
     0x1.a96b359efa866p-376, 0.0, 0.0, 0x1.1f2b2e10ece94p-778, 0x1.923c79f63b33bp-641,
     0x1.f945920acb904p-159, 0x1.b646c51010d39p-278, 0x1.1aa63118f2da3p-405,
     0x1.1b0b23615a591p-403, 0.0, 0x1.303d2be15fa35p-473, 0x1.0923dfa21b647p-185,
     0x1.76e67c148d354p-343, 0x1.d51fea4f04b5bp-481, 0.0, 0x1.7bb3fa983d047p-86,
     0x1.68b3245ecefd3p-850, 0x1.1507deb0f5d8ap-659, 0.0, 0.0, 0x1.0dd04475e0883p-404,
     0x1.cfc5ccbf62aebp-390, 0.0, 0.0, 0x1.45cb23c20f05cp-126, 0x1.c184b20850394p-532,
     0x1.b8f7b23163e51p-348, 0.0, 0x1.964a78dd2c792p-455, 0x1.88c09bc245d4bp-247, 0.0,
     0x1.2049d7d78e3b1p-623, 0x1.cd2a81f44adc3p-938, 0.0, 0.0, 0x1.1a0e1fc36786cp-429,
     0x1.700c99cfab3cfp-646, 0x1.1b908b8ca6128p-661, 0x1.fcf88569af7b8p-158, 0.0,
     0x1.cd2cac4617d4bp-374, 0.0, 0x1.7ab2cb099fb4ep-435, 0.0, 0.0,
     0x1.a8056105020efp-861, 0x1.7da678cfa601fp-707, 0.0, 0.0, 0x1.8de8a05e71e3ep-20,
     0.0, 0.0, 0x1.ae1b0859e1386p-945, 0x1.2b4e5cd1a9b35p-745, 0.0,
     0x1.a05b5f8a31db3p-878, 0.0, 0.0, 0x1.98b51274a3811p-299, 0.0, 0.0, 0.0, 0.0,
     0x1.dd841f7b92428p-806, 0x1.fb691f7c2c63dp-123, 0.0, 0.0, 0.0, 0.0,
     0x1.ef7a3b217b6ddp-668, 0.0, 0x1.87aed88b5e577p-536, 0.0, 0.0,
     0x1.c17666c8bc1a6p-242, 0x1.0bfdde38ade01p-383, 0x1.b4f9e5ebef12fp-263, 0.0,
     0x1.68a42cb5dc71p-91, 0x1.fae8dd3a4d19bp-865, 0x1.838179b9673d1p-950, 0.0,
     0x1.6acfd449ad421p-860, 0x1.7d20fe86e5e1cp-927, 0.0, 0.0, 0x1.764b56445cf17p-693,
     0.0, 0.0, 0.0, 0x1.98fe6b29f37bp-878, 0.0, 0.0, 0x1.ed3b08290b32cp-318,
     0x1.aaa4804e2ebccp-680, 0x1.36fa083820016p-285, 0.0, 0.0, 0x1.5ed6b9d10746bp-225,
     0.0, 0x1.fc825f7ff9991p-16, 0x1.02f8a0fb3f29ap-952, 0.0, 0.0,
     0x1.ece1a730fd6cfp-672, 0x1.6510c0b1c9c23p-708, 0.0, 0x1.162f4969f1f28p-289, 0.0,
     0x1.ccfedb8648f18p-274, 0x1.2559ae8de78f9p-637, 0.0, 0.0, 0.0,
     0x1.3a3a051996799p-828, 0x1.7a77763b4d807p-862, 0.0, 0.0, 0.0,
     0x1.5b40dd47db624p-767, 0.0, 0x1.b448ba55ea099p-429, 0.0, 0x1.3654b776edb5bp-109,
     0.0, 0.0, 0x1.963a6eaf16d45p-288, 0.0, 0.0, 0.0, 0x1.b704175a7b96ep-883,
     0x1.12e3cb9d6c461p-202, 0.0, 0x1.3f92c00020c57p-663, 0x1.b8b83a9b45615p-13,
     0x1.bb4e9904f2c75p-279, 0.0, 0x1.00706928aa5bp-883, 0x1.85de0805b57ep-825, 0.0,
     0x1.e494252667c94p-724, 0x1.db271d50e74fep-161, 0.0, 0.0, 0x1.3b880f82c946p-516,
     0x1.aec470a460146p-646, 0.0, 0.0, 0.0, 0x1.3928fd62f39e2p-780,
     0x1.4657821f7ba3fp-960, 0.0, 0.0, 0x1.8bf0eeab3f0c1p-197, 0.0, 0.0, 0.0,
     0x1.03488bbf074d2p-942, 0x1.abb3b03d5d82dp-412, 0x1.e50ec821bbe07p-554, 0.0,
     0x1.1019f548a0a09p-554, 0x1.c6defee7c6c57p-342, 0.0, 0.0, 0x1.caf135cf21aap-790,
     0x1.71c5ad313900bp-960, 0.0, 0x1.5bd468bc13dbap-416, 0.0, 0.0,
     0x1.ea2b8ffb8e83bp-165, 0x1.2c75460519758p-502, 0.0, 0x1.789378a69b72dp-56, 0.0,
     0.0, 0x1.6f5c97d5c01bep-200, 0x1.1e86201518234p-799, 0.0, 0.0, 0.0,
     0x1.d4d467fb8588cp-325, 0x1.0fad7f4481499p-399, 0x1.b6502016c9415p-514,
     0x1.388072b7e8674p-431, 0.0, 0x1.62503a2a9c7afp-607, 0x1.7299b3a7d098bp-800, 0.0,
     0x1.e043fe31cba65p-504, 0x1.48685101f53fcp-689, 0.0, 0.0, 0x1.fdbd3b56d31d7p-880,
     0x1.5902198f229dbp-759, 0x1.991b74e64aab9p-296, 0.0, 0x1p0, 0.0,
     0x1.3efbeab67619ep-842, 0.0, 0x1.a652458489475p-190, 0x1.67970ff721246p-581, 0.0,
     0.0, 0.0, 0.0, 0x1.d0d09f9c0424fp-978, 0.0, 0x1.31151ef1b35a7p-676,
     0x1.ca9b5e5de70d2p-104, 0x1.0f4db7404fae3p-162, 0.0, 0.0, 0x1.23f8a5e4283f4p-50,
     0x1.391b3cf5b9f58p-524, 0x1.d2bb2e4379b03p-4, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba67abee0a742p-380, 0x1.9f50da6ed7662p-977, 0.0, 0x1.e162b847682dfp-527, 0.0,
     0.0, 0x1.2282260a482cbp-231, 0x1.2e41eba92f9e2p-606, 0.0, 0x1.781f20547d1b8p-984,
     0.0, 0x1.9f71e69a7889p-749, 0x1.3c3986627c2d6p-386, 0x1.3e7da4d168dbap-398, 0.0,
     0x1.7c540a96350cap-165, 0x1.a92f1974cbd4p-1016, 0.0, 0x1.290c17b04c05ap-126, 0.0,
     0x1.76b168d063a4dp-807, 0.0, 0x1.dcce2385e39dap-239, 0.0, 0x1.d4e17c765508ap-34,
     0x1.3651b91a9a6ebp-472, 0.0, 0.0, 0x1.3a6ce5c58b08bp-614, 0x1.44a6a7b7d89e3p-274,
     0.0, 0x1.1fc9d61ddf38p-127, 0x1.ea69e4fde1649p-366, 0x1.fcda857997bddp-198, 0.0,
     0.0, 0x1.b2380f7dd3006p-278, 0x1.d8cfe8b10c3c1p-990, 0.0, 0.0, 0.0,
     0x1.659d7fa0526fep-170, 0.0, 0x1.67fabf6faf297p-280, 0x1.df8412bc92e6ep-844, 0.0,
     0x1.5ec09d84f0ec2p-379, 0x1.20611b1acd0fcp-19, 0x1.c26095df14d84p-749,
     0x1.7132aed36fe45p-959, 0.0, 0.0, 0x1.4b57b619f2bcap-990, 0x1.7f4dbe1198e87p-261,
     0.0, 0.0, 0x1.23da0f218aa89p-185, 0x1.4f861583af7d1p-23, 0x1.549e4959a99e8p-26,
     0x1.a58a2f83c3628p-705, 0x1.31750fc49b706p-417, 0x1.70bf2ed30dd97p-102,
     0x1.ca9542824309cp-154, 0.0, 0x1.886d136ca3304p-592, 0.0, 0x1.a521cee0847b2p-398,
     0.0, 0.0, 0.0, 0.0, 0x1.b47a0de95eab7p-760, 0x1.3db092d5b624cp-639,
     0x1.b9fec25826a63p-430, 0.0, 0x1.2c90538284747p-604, 0x1.a9a89d821aa99p-873,
     0x1.a2bd69ea85c7p-720, 0x1.6bd29db35e335p-955, 0x1.f1304658fcc9fp-295, 0.0, 0.0,
     0x1.25db6c77f44b6p-821, 0x1.8aa9837a638e5p-382, 0.0, 0.0, 0.0, 0.0,
     0x1.e38456d3ead9cp-424, 0.0, 0x1.1eac0bea487b7p-308, 0x1.87ea1b92cccb7p-183,
     0x1.9342e39766289p-649, 0x1.b7f84c7cd2407p-649
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
            tmp1 = Sleef_finz_sinpid1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sinpid1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinpid1_u05purecfma bench acc %la\n", global_bench_acc);
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
