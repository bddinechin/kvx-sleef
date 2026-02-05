/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d2_u10avx2128.c --function Sleef_exp2d2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.11c7568bba6d1p-378, 0.0, 0.0, 0x1.951267216463bp-167, 0.0,
     0x1.8ba784285c044p-126, 0x1.212c0f59b12ccp-175, 0x1.e574d6707cbecp-547, 0.0,
     0x1.a8427bcdafa47p-737, 0x1.991255fc8354cp-703, 0.0, 0x1.af55b45ea049ep-399, 0.0,
     0.0, 0x1.03b7312bc797cp-416, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f86ca7ee387p-739,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5899928f05b57p-147, 0x1.4b318de6f74cap-457, 0.0,
     0x1.c694718e642bbp-764, 0x1.15a8a8d1ebf49p-167, 0x1.731d637f67926p-952,
     0x1.a084c4a99266ap-581, 0.0, 0.0, 0x1.4f6dbc223089bp-338, 0x1.fe11b22e4f828p-981,
     0.0, 0.0, 0.0, 0x1.26158edca2dd9p-415, 0.0, 0x1.71975e0cedd86p-781, 0.0,
     0x1.475f787890961p-171, 0.0, 0x1.c0c971cf6df1ap-967, 0.0, 0x1.3ba4d23fa8673p-723,
     0x1.c7cff9c3e174ep-365, 0.0, 0.0, 0.0, 0x1.db30b95a0adcap-773,
     0x1.1e16b2c59fd56p-675, 0x1.35d97baae6b82p-853, 0x1.4f12a8adc1c7dp-915,
     0x1.0b0228a611b83p-833, 0x1.112e93d4b37d4p-270, 0x1.2118a3cbc7b6dp-66, 0.0, 0.0,
     0x1.c5996122cc899p-760, 0.0, 0.0, 0x1.ba915f0fef684p-751, 0.0,
     0x1.63b71ee0c9d6dp-875, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c9224c4939bd2p-800,
     0x1.f05a1782adbfdp-464, 0x1.21a71f13be741p-388, 0x1.9c8fc8b48d277p-31, 0.0,
     0x1.6524db2d47c92p-903, 0.0, 0x1.4184f581d0175p-610, 0x1.91fcf5bab6692p-824, 0.0,
     0x1.6f16b58ca0803p-552, 0x1.4d6b0ff60974dp-375, 0x1.2fa72ca03a573p-63,
     0x1.80c13aaceae5p-300, 0.0, 0.0, 0x1.a7fd693364f54p-840, 0.0, 0.0,
     0x1.771bb3638f933p-150, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b20b6a321dea8p-548, 0.0,
     0.0, 0x1.2705e84ab01c1p-886, 0.0, 0x1.ed5d953146379p-520, 0x1.ad047bf3f1ee2p-824,
     0.0, 0.0, 0x1.4b86e99df31bap-839, 0.0, 0x1.a1fe6f995f346p-888,
     0x1.4011362ee95d2p-775, 0.0, 0.0, 0.0, 0.0, 0x1.af999873208aap-359, 0.0,
     0x1.fccf193e8d7e4p-1013, 0x1.805848b466a06p-651, 0x1.468233546945ap-888,
     0x1.2f10fae521a86p-171, 0.0, 0x1.a315ddd822d4cp-76, 0x1.7c98dd5fcdf6dp-610,
     0x1.f1532ea351cfp-771, 0x1.e9ad648c6949ep-633, 0.0, 0.0, 0x1.5c336f9478b02p-432,
     0.0, 0x1.386ee7b6df0e7p-33, 0x1.88dc7930c5465p-939, 0.0, 0.0,
     0x1.3ea9093cea71fp-872, 0.0, 0x1.8a8371be46bf9p-110, 0x1.9d08b4e9af3d3p-515, 0.0,
     0x1.d16baeaaf3127p-496, 0.0, 0x1.21933ac1237cap-184, 0x1.6742301352c7p-852,
     0x1.84a10bc5c3689p-246, 0x1.e557818b08e64p-873, 0.0, 0x1.3987a20886a5bp-289,
     0x1.85cf7e2163ecep-285, 0.0, 0.0, 0x1.9fcb606f8d8ffp-153, 0x1.585841bf1ac2fp-951,
     0.0, 0.0, 0x1.a3107118fabe8p-569, 0.0, 0x1.5ec9d38eedcf3p-284, 0.0, 0.0,
     0x1.19678e8facf52p-413, 0.0, 0x1.267fcc5466bdfp-428, 0.0, 0x1.fe862d03b151bp-192,
     0x1.bf64194463397p-984, 0x1.5f846db1faf15p-120, 0x1.39429c366c239p-814, 0.0, 0.0,
     0.0, 0x1.dbe19781d51c5p-723, 0x1.525a762e2b28dp-945, 0x1.a7b345c1e6499p-515, 0.0,
     0x1.024a6c2f317a6p-155, 0x1.1ab1b4c0990d1p-48, 0.0, 0x1.db1e3522348c2p-658,
     0x1.8dc74aa9fb321p-452, 0x1.886b1d9488d4p-119, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.245b4416f57ccp-840, 0.0, 0x1.51c0ccb3201d1p-353, 0.0, 0x1.34fa4d25f5cb8p-807,
     0.0, 0x1.f6064021e9ba6p-301, 0.0, 0.0, 0.0, 0x1.9c9701ac35e47p-104,
     0x1.06d7507a9f45p-191, 0.0, 0.0, 0x1.1be33d0ac3564p-108, 0x1.9a38d38ac494fp-554,
     0x1.813be8564b61ap-546, 0.0, 0x1.eb21d705f6c06p-220, 0x1.f5a81e4f007e1p-658,
     0x1.a97a1481fff16p-205, 0x1.a222b57de54bcp-174, 0x1.7362a6e3abf58p-808, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fd30ea10493c5p-309, 0.0, 0x1.d6412e889fdfcp-314, 0.0,
     0x1.faea90ccf58e5p-801, 0.0, 0.0, 0x1.aa536b8e820f2p-754, 0x1.2bd64a5c2bd99p-926,
     0.0, 0.0, 0x1.1df3df0c11acep-941, 0.0, 0x1.940b6584d7adp-557,
     0x1.8cb2229d8f7a4p-775, 0x1.fb65ab69e6434p-274, 0x1.f3a5a87b26831p-589, 0.0,
     0x1.1a46d437d6ebfp-322, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a4bd0270962dp-381, 0.0, 0x1.94c5b7042ba9fp-83, 0.0, 0.0, 0.0, 0.0,
     0x1.e767a8c11ae38p-1, 0x1.2d676b91fc335p-294, 0.0, 0x1.ccb2c6e676dcfp-19, 0.0,
     0.0, 0.0, 0x1.4dffddcc3cdfbp-601, 0x1.47b7f37ad3701p-432, 0x1.ec4af27d538p-497,
     0.0, 0x1.8ac19fd2ee973p-472, 0x1.d449a671908c1p-672, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.71edc5c91da94p-729, 0x1.16bf7539268b8p-891, 0x1.0f3d6e3be0bfdp-220, 0.0,
     0x1.2c4ea40bcb6e7p-394, 0x1.9b261937dbc83p-307, 0.0, 0.0, 0x1.b1a64c431ae61p-919,
     0x1.3842a76bfb086p-616, 0x1.c30e5985731eep-1014, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.20af6fbebe3b9p-312, 0x1.81474cab40fa6p-844, 0x1.fa89621d7d0ap-245,
     0x1.36f9116e06cd5p-967, 0x1.bea5de0ac4d67p-900, 0.0, 0x1.e822ef9cc6a98p-967,
     0x1.e6a60f90a2b22p-487, 0.0, 0x1.146424f5abe8cp-106, 0x1.22a58a9dca291p-769, 0.0,
     0x1.afd14cfae0306p-626, 0.0, 0.0, 0x1.6676806594486p-140, 0.0, 0.0,
     0x1.2316d91859caap-574, 0x1.dea48e1d7f03bp-342, 0.0, 0.0, 0x1.b0e3e5be3bd92p-491,
     0.0, 0x1.541d4538aadf5p-357, 0x1.e733b02af0ecdp-447, 0.0, 0x1.9b3beced4ec25p-930,
     0.0, 0x1.53a38517fe963p-595, 0.0, 0.0, 0.0, 0x1.64daa35db2b7ep-333,
     0x1.8805916bef3cap-695, 0.0, 0.0, 0x1.013e64d2f55aep-84, 0x1.92d4b8db9d84dp-154,
     0.0, 0x1.84a098ca16424p-434, 0x1.7a4259373b454p-700, 0.0, 0.0, 0.0,
     0x1.8021629365f23p-728, 0.0, 0.0, 0.0, 0x1.5fdffbb81a9e2p-437, 0.0,
     0x1.1b754d352d66dp-23, 0x1.95ae4ae3a7b3ap-418, 0x1.f56b9fa1b4959p-720,
     0x1.a9e972fd6fbbcp-779, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ec38e449e9fc2p-131, 0x1.b47c6c04aac2p-114, 0x1.935dd5398e06p-86,
     0x1.237f2e9c39b61p-851, 0x1.7a6bef89f1a87p-487, 0.0, 0x1.4d5debcf85d8cp-185,
     0x1.3a13d3e99052fp-158, 0.0, 0x1.3a0e005e5e227p-804, 0.0, 0x1.455943121efb8p-154,
     0x1.24a3eede0d4acp-723, 0.0, 0.0, 0.0, 0x1.f81745187faep-1020,
     0x1.656cf2425a14dp-925, 0x1.8136ba6006148p-104, 0.0, 0.0, 0x1.97b18d75bb9e7p-237,
     0x1.e745ee30a86a7p-722, 0x1.0dc42f60f9d4p-38, 0.0, 0.0, 0x1.9a8cf8798a555p-1008,
     0x1.d9fdbd53861c4p-245, 0x1.4c60173db18cep-522, 0.0, 0.0, 0x1.86f6ec162dd6fp-664,
     0.0, 0x1.b414a4564d69ep-541, 0.0, 0.0, 0x1.4d0c37d8e2b55p-446,
     0x1.4632227e4bbf4p-53, 0.0, 0.0, 0x1.05a7dfe652fa3p-211, 0x1.f3ba1a120ea06p-831,
     0x1.d5dd04266d78p-506, 0.0, 0x1.0743d605cfd26p-223, 0.0, 0.0, 0.0,
     0x1.a328b6bdc935ep-168, 0x1.e48612ee3797cp-879, 0x1.7362ab11a903cp-257, 0.0, 0.0,
     0.0, 0.0, 0x1.b6f24d1b6d2f3p-259, 0x1.657e665ef260dp-525, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ba21b87efe3dfp-55, 0x1.f5f027cff0ad2p-205, 0x1.ac404d67db7e1p-229,
     0.0, 0x1.5b8b607fbf4e9p-996, 0x1.6c54ac5aaae3p-785, 0.0, 0x1.7c412b767e8c7p-380,
     0.0, 0x1.a9fb4ca54610fp-94, 0.0, 0x1.6f627b3e634d3p-500, 0x1.5f67abdd47c16p-918,
     0.0, 0.0, 0x1.c4c83b1b8ea54p-895, 0.0, 0x1.74418cea1cb75p-43, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4d787f4b8f9fdp-156, 0x1.281ec6bb081f7p-236, 0x1.dd8266f6d58a2p-134,
     0x1.c921f1cfb80a5p-831, 0.0, 0.0, 0x1.3193a1ee4182dp-890, 0.0, 0.0,
     0x1.004c8ff024891p-374, 0x1.b7b324769f37p-637, 0x1.499bdb81982e1p-281, 0.0,
     0x1.e561eb2ab04cfp-523, 0.0, 0.0, 0.0, 0x1.89eab81a9232ep-371,
     0x1.afd37b44e44e1p-14, 0x1.8a5a6af1807b1p-692, 0x1.3ce13e2ce0a44p-446, 0.0, 0.0,
     0x1.f49b56dd7281ep-499, 0x1.8ed5944253c0ap-246, 0.0, 0x1.5dd4e1fa15fc9p-49,
     0x1.2a01d8fb7b9a7p-219, 0x1.98267162e586ep-303, 0.0, 0x1.000b1944b18a6p-477,
     0x1.dad4476353e4p-222, 0.0, 0x1.0170965448b42p-623, 0x1.cfb00ef69d13cp-288, 0.0,
     0x1.af516cee80003p-645, 0.0, 0.0, 0x1.389bf7d85912ap-722, 0.0, 0.0,
     0x1.d06b996f98fe8p-240, 0x1.24b09543ebda2p-933, 0.0, 0x1.10bbfbebe24cfp-733,
     0x1.b8ca8dbd9a4ap-944, 0.0, 0x1.47c4fe5964ca6p-822, 0x1.d9cf092d4df65p-522, 0.0,
     0x1.a0e508582980fp-835, 0.0, 0.0, 0x1.49fdf5cfbbc1fp-98, 0.0,
     0x1.c17e6dde93391p-55, 0x1.beb4b52f5c7eap-948, 0x1.807b941e446aep-456, 0.0,
     0x1.e48ca66aa51f4p-720, 0x1.6522afb89445dp-821, 0x1.70bb90c0ea89fp-411, 0.0,
     0x1.0c23321e516a2p-73, 0x1.280ba6f3623a6p-15, 0x1.ccca4cf843cc8p-261,
     0x1.27af68cf149efp-650, 0.0, 0x1.d1acb9d00f039p-794, 0x1.c5ed9d60a9b82p-528, 0.0,
     0.0, 0.0, 0x1.e34afabb89aeap-874, 0.0, 0x1.541f87b574fd6p-789,
     0x1.875a97f609a83p-541, 0.0, 0.0, 0.0, 0x1.dd8ca66837cdap-971,
     0x1.36173559519a2p-708, 0.0, 0x1.20ee4390eb6aap-185, 0x1.ded854cd9484bp-956,
     0x1.d8ee796fc95f4p-53, 0x1.88bf49bfb11dap-392, 0x1.7515acd8b581p-814,
     0x1.6e14cd14b4f9ep-407, 0.0, 0.0, 0x1.d56e8aa1b61b1p-897, 0.0,
     0x1.a99cda12c46fp-948, 0.0, 0x1.ca9371fc1896bp-1005, 0x1.27d476a87036dp-448, 0.0,
     0.0, 0.0, 0x1.e3466a52ee41bp-745, 0x1.20f6d02b22bebp-346, 0.0, 0.0, 0.0,
     0x1.5e749d721ea98p-959, 0x1.2125579aed76cp-487, 0x1.a558047ddcc42p-998, 0.0,
     0x1.07695bbea8b85p-711, 0.0, 0x1.ba59be31041e1p-12, 0x1.f5cf4fcd7fa5bp-668,
     0x1.30de0a4456072p-499, 0x1.487290ce6580fp-662, 0.0, 0x1.106f1bce1d19dp-563, 0.0,
     0x1.e3b50d8e0be2dp-520, 0x1.ca50f3d465f13p-1016, 0.0, 0x1.6ee8f24c53396p-834,
     0x1.aa84e3f78ac2fp-723, 0x1.472cb16eee0f3p-211, 0x1.6afce56330544p-106,
     0x1.73fe86682fea7p-814, 0.0, 0x1.5ff441eb151cap-1007, 0.0,
     0x1.d8f1b25cd41a1p-644, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fed352329d02p-2,
     0x1.ff28398154615p-843, 0x1.1e3ee68760533p-531, 0x1.2bf24df60cf8ep-463, 0.0, 0.0,
     0.0, 0x1.24eeeb3d210e4p-440, 0x1.194a0e7f840b5p-728, 0x1.8ba1ac4859ab1p-262,
     0x1.4e20e239cea4ep-994, 0.0, 0x1.c727ccc15e20ap-855, 0x1.91f027514d682p-724,
     0x1.3938dca50c0ccp-620, 0.0, 0.0, 0.0, 0x1.a75c31cb135b3p-119,
     0x1.175ee63103a86p-399, 0.0, 0x1.6107be52eba44p-395, 0.0, 0.0,
     0x1.8e2323a429f54p-913, 0x1.55016a84ed5cdp-424, 0x1.c8c6a56186199p-163,
     0x1.4771998c633c3p-799, 0x1.3390c19dcbdaap-520, 0x1.f244f9cbf7178p-943, 0.0, 0.0,
     0x1.20aad88cf628cp-181, 0.0, 0x1.0bfc69b2360e9p-234, 0x1.907c7aabf4bap-683,
     0x1.53dc8c65f96bep-875, 0x1.76731ffd6484ap-39, 0.0, 0.0, 0.0,
     0x1.e3d07836e6c64p-801, 0x1.88123b211bc3ap-485, 0.0, 0.0, 0.0,
     0x1.d69e174a33f91p-220, 0x1.d640659c92eb1p-961, 0x1.d8b610ab61d2ep-191, 0.0, 0.0,
     0.0, 0x1.86f65e7a161a5p-162, 0.0, 0x1.ff8d2713ebe28p-730, 0x1.c7d3c256ec5b3p-7,
     0.0, 0.0, 0.0, 0x1.59a92d34f18bcp-728, 0.0, 0.0, 0.0, 0x1.ff24e3e2ffdeep-161,
     0.0, 0x1.85ebeb56a6231p-959, 0.0, 0x1.66a8b2528738ep-730, 0x1.00aa3d42dd447p-103,
     0x1.33ddd7301beefp-810, 0x1.cb3f618c9f7d5p-530, 0x1.522f6a9c2fe7fp-127,
     0x1.ae3020111b2b1p-609, 0.0, 0.0, 0x1.81033b686b213p-792, 0x1.6a8e59a082438p-324,
     0.0, 0.0, 0.0, 0x1.45b24cc7bbd03p-935, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af46ed4a29448p-917, 0.0, 0x1.22e3be94250c3p-533, 0.0, 0x1.48b66163f4c3fp-595,
     0x1.5de0421592414p-842, 0x1.0771475adfc84p-895, 0.0, 0x1.c2fa703786cap-786,
     0x1.d0a867e0c4753p-146, 0.0, 0.0, 0x1.2c7fbdd6d11bdp-199, 0x1.f35e8396b60b2p-791,
     0.0, 0x1.a4678266831a4p-297, 0x1.0cdd8bbcfeb94p-389, 0x1.699b358758d9cp-881, 0.0,
     0x1.a5b709207923cp-499, 0.0, 0x1.b1ff81ce0434p-268, 0x1.3a322422348c1p-337,
     0x1.dabd3c71c1badp-327, 0x1.04e77adfb445bp-701, 0.0, 0.0, 0x1.8bc45759a567fp-656,
     0.0, 0x1.5c30aacb4681ap-588, 0.0, 0.0, 0.0, 0x1.f07cb18ce0022p-15, 0.0,
     0x1.b0ef9fb852ec8p-660, 0.0, 0x1.678cc455a286fp-74, 0x1.33ce7fb24c46cp-996,
     0x1.ff5c71d8d5f4ap-313, 0x1.731f87eee00c4p-614, 0x1.8ae0b3bb1c9acp-857, 0.0, 0.0,
     0x1.46eedc9f5e1d9p-887, 0x1.e59516fc27cdp-553, 0x1.37aeabdde76dp-593, 0.0,
     0x1.b987ebd35c1b4p-551, 0.0, 0x1.5bf9fb667a5c8p-49, 0.0, 0x1.27af6669cf8b7p-587,
     0.0, 0x1.2c6a47e9dd895p-886, 0x1.af5d9d40a6032p-808, 0x1.680378d13da91p-938,
     0x1.4d927af81df0ap-488, 0x1.4c5adc3df9f45p-490, 0x1.815b11bee59c2p-214, 0.0, 0.0,
     0x1.c199e4832f2b1p-317, 0x1.65e9c416cf942p-236, 0.0, 0x1.61aaea18bf2d7p-23, 0.0,
     0.0, 0x1.09fa78b7dd379p-210, 0x1.1aad8d87568f3p-646, 0x1.9f7f6bb97ffe7p-208, 0.0,
     0x1.0b50d642c2b2ap-973, 0.0, 0x1.3376012816c8ep-805, 0x1.df172b7c4dd0bp-708, 0.0,
     0x1.cbe0c141dde5p-1013, 0x1.9b5eadabd05f7p-64, 0.0, 0x1.5f841a9ed9ad1p-596, 0.0,
     0x1.6cddefb50a33cp-546, 0.0, 0.0, 0.0, 0x1.0fde2596180a5p-435,
     0x1.9274955aa46b3p-453, 0x1.c9021d3f58f09p-53, 0x1.ff9dfe48cf72p-225, 0.0, 0.0,
     0.0, 0.0, 0x1.49a6920295c9ap-704, 0.0, 0x1.696d4a8b76b9bp-283, 0.0,
     0x1.e9d36fcf04072p-348, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e120346b74d4p-205, 0.0,
     0x1.9ed6b483414ap-324, 0.0, 0.0, 0x1.72c8a7d2c4b4fp-808, 0.0,
     0x1.a5a8777948579p-893, 0.0, 0.0, 0x1.810377d55636fp-675, 0.0,
     0x1.b752c7a1b6a89p-583, 0.0, 0.0, 0.0, 0.0, 0x1.c42f7f8ec4065p-660,
     0x1.b9ac70fd0f6ffp-598, 0.0, 0x1.2c93ad33c32c3p-817, 0.0, 0.0, 0.0,
     0x1.670c4a5bb3afap-406, 0x1.0315391ad84c8p-808, 0.0, 0x1.9146320ba8241p-659, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.597140e54e166p-956, 0.0, 0x1.98441fe9b76cep-288,
     0x1.262727c286ffep-484, 0.0, 0.0, 0x1.5c92e3badfcf1p-46, 0.0, 0.0,
     0x1.5fa84714be5a2p-137, 0.0, 0.0, 0.0, 0x1.2141c05367c2dp-990,
     0x1.ed460c0215c5fp-315, 0.0, 0.0, 0x1.12fb1de13e8e7p-559, 0x1.844cb6cdbcfc5p-65,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2671762bbd0f1p-772, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.05cd415c70fb9p-339, 0.0, 0.0, 0x1.257d302de0305p-819, 0.0, 0.0,
     0x1.0698b91a43191p-212, 0.0, 0.0, 0.0, 0x1.e5d0a7ad7d313p-262, 0.0, 0.0, 0.0,
     0x1.4605eb489a21cp-481, 0x1.91e44edd167f1p-228, 0x1.4c5deac4b2c82p-213,
     0x1.d4b3ce107a6d1p-871, 0.0, 0.0, 0x1.6410dc137e354p-320, 0x1.6545cbeb3ce0bp-133,
     0.0, 0x1.7edf6ae4cae2bp-713, 0x1.8691ce192a4fbp-668, 0.0, 0x1.48faa905af1eep-613,
     0x1.afcfd0138726cp-886, 0.0, 0x1.42900f7537d3ep-398, 0.0, 0.0, 0.0,
     0x1.6ad02ec17d813p-894, 0.0, 0x1.d8ed8c2b4f9b1p-633, 0x1.546138e171265p-582,
     0x1.96c59fbbd7a26p-690, 0x1.563519b42d2eap-143, 0.0, 0x1.e94349ad2274fp-701, 0.0,
     0.0, 0x1.9c921be4f45c6p-269, 0.0, 0x1.0b6ba5605dc51p-143, 0.0,
     0x1.919248fd28ebdp-196, 0x1.bfa8542e7e56p-815, 0x1.7b58a3843972cp-76,
     0x1.fc9edcf4c4202p-968, 0.0, 0.0, 0.0, 0x1.95e2a8a2f13d2p-681, 0.0, 0.0,
     0x1.acde9bece9aa2p-996, 0.0, 0.0, 0x1.acfcc59e20cb7p-903, 0x1.d2c6e59ef445p-313,
     0.0, 0x1.b7ae271ee6cf5p-373, 0.0, 0x1.87a8d50fa6ae8p-927, 0x1.86fe183fffcefp-907,
     0.0, 0.0, 0.0, 0x1.70a4682488cf5p-727, 0.0, 0x1.fb2d0f7cc2386p-343, 0.0, 0.0,
     0x1.ee150881975ecp-111, 0x1.6fa7d2de97f3fp-841, 0x1.10ca8bb974d8ap-561, 0.0,
     0x1.581eeeaabd1afp-879, 0.0, 0x1.3b2d36db09e8fp-376, 0.0, 0x1.c9d413b08d30ap-363,
     0.0, 0.0, 0.0, 0x1.872b1d6bdc5ep-963, 0x1.4c824b106a66ap-758,
     0x1.0ff28741cfef6p-158, 0.0, 0.0, 0x1.bb2468475e75ep-258, 0.0,
     0x1.efae2d60410ccp-299, 0x1.83ec7f65295fep-301, 0.0, 0x1.190eccd30d859p-467,
     0x1.842c8e2624c7bp-93, 0.0, 0.0, 0x1.f13f12d85f6bp-692, 0x1.b528d282f8667p-1017,
     0x1.4ce46634020f7p-267, 0x1.2b6a1f10a7217p-494, 0.0, 0x1.3d54b3d8e0f56p-315,
     0x1.6c9c8d63cfb86p-382, 0.0, 0.0, 0x1.376aed83ff746p-1010,
     0x1.83d718f25963fp-670, 0x1.e2c54fff5eb24p-612, 0.0, 0.0, 0.0,
     0x1.2c41ff617a58p-246, 0x1.2254dbf1796c4p-233, 0x1.de147da31ef63p-477,
     0x1.f7677601e87f1p-233, 0.0, 0.0, 0x1.de2fbf8eede5bp-682, 0x1.3f7331b7347b4p-900,
     0x1.55647d87ffa24p-850, 0x1.b7ad7332d9f7ap-217, 0.0, 0.0, 0x1.1e77f2fb3ac2ap-582,
     0.0, 0.0, 0x1.1b6308179d53dp-1013, 0x1.3dedaaad29d45p-272, 0.0,
     0x1.d2477e936bf69p-516, 0x1.4d4da21c30fc1p-173, 0.0, 0.0, 0.0,
     0x1.d0ecf56bf2513p-848, 0x1.b745981e6c03cp-939, 0x1.fcf5f48bcf62fp-209, 0.0,
     0x1.eb293e48f23c6p-977, 0x1.bb09c858233fep-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b3f3e6d0fac1p-651, 0x1.c45b5870bf9e4p-616, 0.0, 0x1.722e25f72f08p-1009, 0.0,
     0.0, 0x1.2eb3dc1487724p-515, 0x1.040268baf108bp-305, 0.0, 0x1.6863020007a1ap-884,
     0.0, 0x1.94288da4f3b56p-698, 0x1.db8d11dfd4619p-352, 0.0, 0x1.9181cd2a7661fp-767,
     0.0, 0.0, 0.0, 0x1.479d82149eafp-954, 0.0, 0.0, 0.0, 0.0
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_exp2d2_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_exp2d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp2d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
