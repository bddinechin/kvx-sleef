/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd4_u35kvx.c --function \
 *     Sleef_finz_acosd4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.86052d0a1c706p-915, 0.0, 0.0, 0x1.fa98f34ae9985p-964, 0.0, 0.0,
     0x1.fa140b65143abp-994, 0x1.c0e2e95f6a23dp-681, 0.0, 0.0, 0.0,
     0x1.d8654ac01b854p-748, 0.0, 0x1.f33b86b7fba0ep-15, 0.0, 0.0,
     0x1.54ff5f22be48fp-545, 0.0, 0x1.c225d97779b67p-946, 0x1.be37a6c6f01e8p-495,
     0x1.5a54576a059edp-640, 0x1.a3b9daaf89a16p-135, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8acbb866b399p-393, 0x1.3abd5f50c81dep-473, 0x1.80f808d19062bp-233,
     0x1.a7aef14a54fe9p-281, 0x1.a5318a4190425p-97, 0x1.1f33a5e034cd9p-852, 0.0, 0.0,
     0.0, 0x1.50165994c324p-704, 0.0, 0.0, 0.0, 0x1.00e2f64f8aa96p-125,
     0x1.43cbded23b418p-608, 0x1.bed3b2c0f8b07p-924, 0.0, 0x1.76c59c3d144d8p-248,
     0x1.6f941139a245ap-388, 0.0, 0.0, 0x1.74aadbcd1485bp-138, 0.0,
     0x1.26510153c45c9p-838, 0.0, 0x1.471c74a5bf969p-355, 0x1.cacce2d614f06p-386, 0.0,
     0.0, 0.0, 0x1.02bdf6358d7d6p-965, 0.0, 0x1.520d098dcbd6p-573, 0.0, 0.0,
     0x1.aa9bdd735aee3p-673, 0x1.ebf7934dd4bd5p-892, 0x1.bbae49f464f23p-169, 0.0, 0.0,
     0x1.05f23851da1e5p-834, 0x1.1fe7d9fa4475bp-902, 0.0, 0.0, 0.0, 0.0,
     0x1.96703b806a80bp-131, 0.0, 0.0, 0x1.00f3dfb9f860ap-640, 0.0,
     0x1.7c2bd36c27b51p-824, 0.0, 0x1.34cd5c91b8c56p-732, 0x1.72e17a4277eb2p-31, 0.0,
     0.0, 0.0, 0x1.69b58c412079dp-528, 0x1.eb7c2b0a60059p-511, 0x1.23e32d062f332p-22,
     0.0, 0.0, 0x1.6701e78e19be4p-527, 0.0, 0x1.63916930a3884p-1010, 0.0, 0.0,
     0x1.e29a21ea0604bp-334, 0x1.7cf45a09803a6p-557, 0x1.05c0f64f97ab1p-993, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e1faf1627dbfp-404, 0x1.7e4a497f2b3e6p-112,
     0x1.39be17502e47fp-14, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.572e0987757acp-32,
     0x1.52b295539ff78p-679, 0x1.5e5e6cc025c0fp-302, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4d295010becedp-655, 0x1.aa73d40cd360fp-309, 0x1.2a4f5639f7325p-427,
     0x1.3a9161d12173bp-832, 0x1.edf61114f2b73p-512, 0x1.9c08af8d51928p-510, 0.0, 0.0,
     0.0, 0x1.34c9972870935p-524, 0.0, 0.0, 0x1.831a2e92ac948p-905, 0.0,
     0x1.85275d6f79c8p-358, 0x1.b2c4b0e849097p-669, 0.0, 0.0, 0.0,
     0x1.04653c586e95bp-160, 0x1.7b1d5f8beac99p-986, 0x1.5d0353fde0964p-366,
     0x1.eeae65c82b2a6p-609, 0.0, 0x1.4ed0d7116a0bdp-918, 0x1.57e654bc61567p-923, 0.0,
     0.0, 0.0, 0.0, 0x1.763bea0c7d46bp-868, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.82ac1d045d4e6p-501, 0x1.deb872c311022p-239, 0.0, 0x1.91b8a5f81d67fp-204, 0.0,
     0.0, 0x1.f7d6e14b29effp-718, 0x1.201ee4168b53ep-468, 0.0, 0.0, 0.0,
     0x1.9847d9af810ffp-799, 0.0, 0.0, 0x1.3ce73f6c80f41p-699, 0.0,
     0x1.d30bfd7a2dcdcp-199, 0x1.448dd0170e9e4p-708, 0.0, 0.0, 0.0,
     0x1.c8d45a29a44b4p-693, 0.0, 0x1.d0bf9d82f2344p-444, 0x1.414826d36cf3bp-870,
     0x1.47ffc3ee394c5p-792, 0x1.7ba65de612cbdp-1018, 0.0, 0.0, 0.0,
     0x1.e195c0b28cde1p-873, 0x1.5e6489b44e196p-898, 0x1.61e8516ae3f56p-240,
     0x1.e8f1ed44ee597p-545, 0x1.f9857b9be5027p-139, 0.0, 0.0, 0.0, 0.0,
     0x1.f7a01ab79770bp-603, 0x1.763872e7e007ep-761, 0.0, 0.0, 0.0,
     0x1.941c6233ec2ebp-21, 0.0, 0.0, 0x1.4764537be453bp-908, 0.0, 0.0,
     0x1.402054d950d71p-55, 0x1.47179059fce77p-235, 0x1.5b88b7dc3935cp-417,
     0x1.262e2c652734bp-804, 0x1.cf1a264a6491cp-131, 0x1.87aceec3d5f65p-49, 0.0,
     0x1.99671d828080ep-41, 0x1.ad29a46a682c7p-15, 0.0, 0.0, 0x1.45de4a303c81cp-108,
     0x1.acb9ab3777a5p-861, 0.0, 0x1.902bde978b82p-439, 0x1.d746ea17e25f4p-805, 0.0,
     0.0, 0x1.22d47b066b7f4p-242, 0.0, 0x1.32483af7bd3ap-241, 0.0,
     0x1.87f73c05966b2p-377, 0x1.303387d3aa54p-524, 0.0, 0x1.49dde3902fb56p-288,
     0x1.a355796d8c049p-635, 0x1.73f8689e95e94p-300, 0x1.784052154e974p-232,
     0x1.e608a77f7e221p-860, 0x1.844941d3ffdfap-684, 0.0, 0.0, 0.0,
     0x1.b1d5dfae7311p-927, 0.0, 0.0, 0.0, 0x1.e93bc0504ffc5p-509,
     0x1.02af278a3ba3p-910, 0x1.e451707132d65p-971, 0x1.2c65dbfc60c62p-532, 0.0,
     0x1.f2746ebdc3f22p-552, 0.0, 0.0, 0.0, 0.0, 0x1.1bcc99e91cb2fp-336, 0.0,
     0x1.289251cbca77dp-228, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10a298e005564p-503, 0.0,
     0x1.56866e53a085ap-523, 0x1.142e321a560f2p-708, 0x1.b30769814acccp-36,
     0x1.014e116365c57p-399, 0x1.603e7e923ba46p-179, 0.0, 0x1.b5685e16e9d83p-258, 0.0,
     0x1.ec7f991358ccfp-14, 0x1.41d6386aba573p-1011, 0x1.182ab6097b119p-564, 0.0,
     0x1.ac525d94aae85p-333, 0x1.da17e58254246p-300, 0.0, 0x1.d4d2ae38dd6f9p-785, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.27f4e79ffe03p-670, 0.0, 0.0,
     0x1.54d86578f6e55p-690, 0x1.c640531462d5ep-107, 0x1.a07212e6f79bdp-755,
     0x1.7d176819b5323p-678, 0x1.e0cefa8e732bp-61, 0x1.3bcac1902ae1ap-717,
     0x1.dc5f45844d106p-295, 0x1.338c6250b4a37p-94, 0.0, 0.0, 0.0, 0.0,
     0x1.a35edf7ddea5ap-130, 0x1.e10c20e81285bp-134, 0x1.fe29a4ff947d3p-219,
     0x1.c3d25eb251147p-210, 0x1.7cf3a4e8ade3ap-41, 0.0, 0x1.1fe599080f6e3p-358, 0.0,
     0x1.711f3e72d239fp-817, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19565e5cf781p-11, 0.0,
     0x1.7e9fb86b483aep-639, 0x1.1b96223b801e6p-306, 0x1.49dea56b62e9cp-232, 0.0,
     0x1.258e405ec9f1ap-689, 0x1.dfafbeda124b2p-713, 0x1.8976d6e4c375ap-1019, 0.0,
     0x1.3069a35ebd431p-1009, 0x1.4a662d2af969dp-557, 0.0, 0.0,
     0x1.a698f28eaae0fp-418, 0x1.371b4602ef422p-360, 0x1.af74e44ad7954p-961,
     0x1.4e084d47e6ae7p-180, 0.0, 0.0, 0x1.421f78477e066p-677, 0x1.7e96c7b596706p-372,
     0x1.d8c4a609fbc1fp-236, 0.0, 0x1.234c926957d9ep-929, 0.0, 0x1.43f8862d1bc43p-8,
     0x1.a62d6b795a90ep-337, 0.0, 0x1.711a4325872c8p-724, 0.0, 0x1.1001e3100abadp-455,
     0x1.598cc6a2cbcedp-101, 0.0, 0.0, 0.0, 0x1.62af8130939a6p-104, 0.0, 0.0,
     0x1.c3ea03e2a3d98p-977, 0.0, 0x1.535c3b8e2b574p-941, 0x1.ee08e4868c3c9p-211, 0.0,
     0.0, 0.0, 0x1.912ceb2020cb2p-723, 0.0, 0x1.546247b1271dbp-745, 0.0,
     0x1.d631beecb18dbp-499, 0x1.caf963138d383p-172, 0.0, 0x1.7ba1cf9d0be7bp-450, 0.0,
     0.0, 0x1.c500999f92a55p-1012, 0.0, 0x1.a4a33cd4600a1p-133, 0.0,
     0x1.d757f9ef9e463p-79, 0.0, 0x1.998fd9cebcde9p-598, 0x1.677e14c52a243p-588, 0.0,
     0.0, 0x1.9600d4c0ebb97p-994, 0x1.5d3ad2e509d69p-251, 0.0, 0x1.255da0dd38704p-750,
     0.0, 0.0, 0.0, 0.0, 0x1.7c262853259a9p-938, 0x1.afeb769caba5cp-716, 0.0,
     0x1.a232429e0d24dp-756, 0x1.02084cdcb285ep-992, 0x1.495b25c8f75ccp-722,
     0x1.94ea11de15311p-23, 0x1.9484a1d34c01bp-535, 0.0, 0x1.f52184550a621p-460,
     0x1.0dc72e0d2f34dp-212, 0x1.82b7fce42aa16p-149, 0.0, 0x1.5442435ede9c2p-866, 0.0,
     0x1.2bc56bb2c1d5dp-124, 0.0, 0.0, 0x1.ba92f38668c19p-510, 0.0,
     0x1.31ccf63867e8cp-500, 0x1.35d7c5d65a66bp-271, 0x1.d3d16d1252381p-1007, 0.0,
     0x1.1542f618db179p-658, 0x1.74496d29bd0c6p-477, 0x1.1d68f766182b3p-960,
     0x1.3936f4a8d0fc3p-382, 0x1.6525f1846ca73p-928, 0.0, 0.0, 0.0,
     0x1.8f32b07d9993ep-197, 0.0, 0.0, 0x1.685d2ef7ccc48p-573, 0x1.f4c6b229f5a85p-651,
     0x1.da00dee5e37c3p-350, 0x1.01258c9bd834dp-364, 0.0, 0x1.79a3b3f8b931ep-132, 0.0,
     0.0, 0.0, 0x1.85d890ccbbb09p-946, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a3abc31e66c4bp-820, 0.0, 0.0, 0.0, 0x1.ce59bbca188c3p-260, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c703f6c9574b4p-938, 0.0, 0x1.ae81fc86a9b3cp-742,
     0x1.f0c2d187a39ffp-292, 0x1.af29ad448680fp-585, 0x1.4345a6bd64f5ep-958, 0.0,
     0x1.17d343bdebabfp-605, 0.0, 0x1.34dad228afefcp-721, 0x1.d84b870c2fa3ap-744,
     0x1.8848a20435ba6p-185, 0x1.5617bdcf12057p-1008, 0x1.9e86eb45654edp-331,
     0x1.c1e64991eff41p-239, 0x1.81232eafb8cbp-51, 0x1.53c48df01d7afp-481, 0.0, 0.0,
     0x1.cb7e3e2194c38p-39, 0x1.9e7e8ce988844p-922, 0.0, 0x1.09036b84d1312p-459,
     0x1.daa396c399579p-148, 0x1.6f658a67c99edp-730, 0.0, 0x1.72676f6e094a8p-533,
     0x1.2f8ee586488e3p-836, 0.0, 0.0, 0.0, 0x1.6e155d85f0611p-553, 0.0, 0.0, 0.0,
     0x1.2df402d6e1f56p-267, 0x1.b7494e54798a4p-316, 0.0, 0x1.0bce10c240eefp-498, 0.0,
     0.0, 0x1.3fdcd02425dc8p-776, 0x1.25cacf02f6de2p-173, 0.0, 0x1.987e64b00aee5p-348,
     0x1.10d10183e0653p-710, 0x1.172c7770d2fe9p-509, 0x1.10f2235e3b47ap-972,
     0x1.7c51e295d3b66p-1005, 0.0, 0x1.d6b0c86839d94p-1018, 0x1.a1a8dc3a629b6p-212,
     0.0, 0x1.98838435f0a8ep-563, 0x1.d5ab845f3cd04p-877, 0.0, 0x1.60098592d675ep-708,
     0x1.54a341a3a5536p-453, 0.0, 0x1.042e6bae7000fp-76, 0x1.39c8a63485755p-349,
     0x1.98fa2fc63b779p-995, 0x1.df48d29ed9969p-858, 0x1.afd5096af66a1p-420, 0.0, 0.0,
     0x1.6a17cca0091e2p-14, 0x1.2bcd2b54ebc75p-513, 0.0, 0x1.eb296693337d1p-10,
     0x1.400d7f35a1751p-33, 0x1.ad92524fb2f0bp-11, 0x1.f0ce48bae5dfbp-711, 0.0, 0.0,
     0x1.33094c1d34ee5p-295, 0.0, 0x1.81d3be940f32bp-986, 0x1.465c7ab565168p-493,
     0x1.dcd7183a104bdp-367, 0.0, 0.0, 0x1.b49625d6af316p-202, 0x1.31c4f11cf7aadp-557,
     0.0, 0x1.c20ce4c54560bp-983, 0x1.5fe98c758a20fp-730, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a57890ad4e63p-757, 0.0, 0.0, 0x1.e27452e9d3807p-394, 0x1.64b05ae7c2a3ep-834,
     0.0, 0x1.41312ef0b8149p-794, 0x1.c736a64e0d77dp-209, 0x1.522c658808b9fp-7,
     0x1.bc318246067f1p-38, 0.0, 0.0, 0x1.faa666a18662p-106, 0.0, 0.0,
     0x1.6dacb5f3ace72p-900, 0x1.75bd8dd49097p-229, 0x1.318048a560a75p-776, 0.0, 0.0,
     0x1.11ffe56bbc4dep-693, 0x1.7b6d207dbf2ccp-205, 0.0, 0.0, 0.0,
     0x1.b61efe2afde26p-534, 0.0, 0.0, 0x1.54fb1ea146094p-683, 0x1.6ed872870428p-103,
     0x1.d7557192c1673p-729, 0x1.bd12f218d90ffp-876, 0.0, 0.0, 0.0, 0.0,
     0x1.9f854f0d18762p-948, 0.0, 0.0, 0x1.5670c980f3968p-724, 0x1.037a9c98d6da8p-615,
     0x1.91ff285acf65ep-742, 0.0, 0.0, 0.0, 0x1.04092d12120a6p-1002,
     0x1.b4a7509d2715fp-936, 0.0, 0x1.3bc1283f8f778p-481, 0x1.13bdc95a6e77ep-93,
     0x1.7f406927ed428p-495, 0x1.ffac89dd78b2p-806, 0x1.25d38222b7101p-117, 0.0,
     0x1.287089fb78e89p-296, 0x1.004c7eda367d8p-625, 0.0, 0.0, 0.0,
     0x1.bc1d6ba5e9361p-410, 0.0, 0x1.a83dbdeaac551p-778, 0x1.e476647edb744p-42,
     0x1.db3e8aa560692p-861, 0.0, 0x1.90ae4cba1bc51p-477, 0x1.2a5f14a727c38p-681,
     0x1.2e8d985703f6dp-900, 0.0, 0x1.e079dcd4f496dp-690, 0x1.9cdf95e0b5593p-73, 0.0,
     0.0, 0x1.b5c1ed43bbb77p-399, 0x1.03703b4912064p-209, 0.0, 0x1.fac2691e91df7p-921,
     0.0, 0.0, 0x1.01bab642f8be4p-455, 0x1.22058428843adp-231, 0x1.ac07c69d3430ap-267,
     0.0, 0x1.8819168cb8d54p-975, 0x1.bad4bbb2ada54p-923, 0x1.f154fd537a5afp-425,
     0x1.057b0ca1aeddcp-448, 0x1.d2b8fbebddf3p-815, 0.0, 0.0, 0x1.9201aef180b08p-225,
     0x1.2e6fc414d018dp-530, 0x1.18ddac92bc7edp-469, 0.0, 0.0, 0x1.f611014fbc9b3p-794,
     0x1.0560072ae719cp-924, 0x1.4cc072d5058efp-198, 0.0, 0.0, 0x1.b389df0d2ffe1p-822,
     0x1.524fb8ded3b18p-150, 0x1.35c45e9ba293cp-646, 0x1.99e2500a75d59p-581,
     0x1.4ac821990c977p-617, 0x1.d1c2bef6a28e6p-703, 0.0, 0x1.e7e5ad988d655p-942, 0.0,
     0x1.9e6d77cb1d036p-38, 0.0, 0x1.fb3a5a042ed96p-624, 0.0, 0.0, 0.0,
     0x1.dd14f2ce7bfe2p-766, 0x1.7d8a5f115d9b8p-711, 0.0, 0.0, 0x1.84c34a8f23d9fp-649,
     0x1.caa9dad6ed5f6p-835, 0x1.2840b3ff148c5p-827, 0.0, 0.0, 0.0, 0.0,
     0x1.fa2bf0b1308e7p-93, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a16c2d21abc9bp-423,
     0x1.b91dc604607b1p-109, 0x1.96dd5247fffdep-378, 0.0, 0.0, 0.0,
     0x1.cef8891a0a7dap-507, 0.0, 0x1.b351a6c9a992dp-763, 0.0, 0.0,
     0x1.042a00ad18824p-518, 0.0, 0.0, 0.0, 0x1.306d74f52a545p-177,
     0x1.9da6bbdd7b5a3p-160, 0.0, 0x1.c6178cc77e52ep-449, 0x1.56f41d02c59d4p-397,
     0x1.98058e90b7686p-468, 0x1.32e8137e8d01p-363, 0.0, 0.0, 0x1.843fee8875d1ap-588,
     0.0, 0x1.a3af6b23aec42p-670, 0.0, 0.0, 0.0, 0x1.841b9496c067dp-169, 0.0, 0.0,
     0x1.eddcbca8b34c5p-859, 0.0, 0x1.22acdd9ddf416p-740, 0.0, 0x1.7a2c1cae127f9p-690,
     0.0, 0x1.eb04f45802be3p-55, 0x1.7abd885f2b8aap-367, 0x1.cdda8bc5502d6p-862,
     0x1.0e540ec2b3dbap-653, 0.0, 0.0, 0x1.7b19dd74b0b53p-236, 0.0,
     0x1.49bc82ac83d1ap-787, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d77ebc3eade8p-909, 0.0,
     0x1.6be8a8a64f208p-548, 0.0, 0.0, 0.0, 0.0, 0x1.7a594ead161e8p-477,
     0x1.0be0ffde80022p-898, 0x1.39d8f9b16ca24p-354, 0.0, 0x1.36d72529eb901p-471,
     0x1.8b7a3ffdd48d1p-399, 0x1.a0356854f6da4p-453, 0x1.0f717df7f21e3p-480,
     0x1.daffad89abd89p-401, 0.0, 0x1.986b8e3bed15ep-241, 0x1.808c84f6ca5eep-53,
     0x1.b05558f29809p-783, 0x1.160fca6892b31p-432, 0.0, 0.0, 0x1.5006e2448f6bep-536,
     0.0, 0x1.29fdba1828e93p-10, 0.0, 0.0, 0x1.3e6dd28ee899p-1004,
     0x1.0caa66e76a459p-127, 0.0, 0x1.9fc1aa145b3cbp-581, 0x1.d1d12850e873dp-200, 0.0,
     0.0, 0.0, 0x1.0f7a7b23a42cbp-941, 0.0, 0x1.6de93e490fcd9p-188, 0.0, 0.0,
     0x1.9beaf0b289c58p-911, 0x1.7d9ed6e376ab7p-919, 0.0, 0x1.c81d2a605602bp-556, 0.0,
     0.0, 0.0, 0x1.6158956ee494cp-661, 0.0, 0.0, 0x1.adba491de74d6p-1001,
     0x1.be0ef0400264fp-1013, 0x1.8110b01ce2cfdp-694, 0x1.b5131710e3dbp-780, 0.0, 0.0,
     0x1.6f4dcfc2d033ap-48, 0.0, 0.0, 0.0, 0x1.893bd513f4713p-227, 0.0,
     0x1.ebcd5d497ac63p-633, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0da645e172a38p-312,
     0x1.40664f25b2f81p-722, 0x1.2fd19e403988ep-520, 0x1.dfd9604e1f504p-23,
     0x1.c570c4cee347fp-624, 0x1.6c17f10ff8aebp-364, 0x1.2ae57d0fc3a52p-838,
     0x1.78e7471930d8dp-454, 0x1.9af3c2e1f22acp-129, 0x1.3ea23ca1a43a2p-612, 0.0, 0.0,
     0x1.986aa4d69c7bcp-515, 0x1.17bf9bec67cd9p-98, 0x1.e4e9d3e16ed0cp-84,
     0x1.8022cb799e48fp-613, 0.0, 0.0, 0x1.d1af97dd97fdp-53, 0x1.55de2409d6d59p-359,
     0.0, 0.0, 0.0, 0x1.845e9eaf88e32p-643, 0x1.81827782c30adp-943, 0.0,
     0x1.09afcd49c6d2ap-778, 0x1.8223cf13f13d1p-923, 0x1.b6df6d0e25f62p-109, 0.0,
     0x1.8fb858e87adb4p-1021, 0x1.298c9beeec3cbp-385, 0.0, 0x1.13997b6fac50ep-96,
     0x1.88e68e373e33ap-279, 0x1.16cf8c48b4499p-545, 0x1.82e6d337efb35p-971,
     0x1.68f98d9c2edb4p-921, 0x1.f1a940cfa6236p-834, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6b0eb0d68e88p-301, 0.0, 0x1.27d1a8b43832bp-910, 0.0, 0x1.551e894d0fa6cp-91,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.061ad46bc0018p-1008, 0.0,
     0x1.df3e6c6399b9ap-249, 0.0, 0.0, 0.0, 0.0, 0x1.30c45cb35bce6p-610, 0.0, 0.0,
     0x1.44e9b392ca38ep-73, 0.0, 0.0, 0x1.a889194295e52p-102, 0.0,
     0x1.a2657902ac4d5p-896, 0.0, 0.0, 0x1.62e5df0875d6bp-336, 0.0,
     0x1.f20cef5becfap-381, 0.0, 0x1.2f41f9022a4ddp-986, 0x1.15edafe0b95bdp-585,
     0x1.081b613224e47p-159, 0x1.994708f467b83p-366, 0x1.3bf28d55528cbp-790, 0.0,
     0x1.65fc17adf320fp-845, 0x1.f0a028f378162p-299, 0.0, 0.0, 0x1.55347a72b6652p-218,
     0.0, 0x1.a03d6245e3103p-482, 0.0, 0x1.a559791b9c788p-247, 0x1.7334609b4832fp-157,
     0x1.3fda426a25f2cp-830, 0.0, 0x1.c133c001bd049p-283, 0x1.f5b21d419335ep-95, 0.0,
     0.0, 0x1.83428aaff329fp-872, 0x1.2890dec96e885p-858, 0x1.645d02a313d48p-666,
     0x1.dacfd8339e54ap-649, 0.0, 0.0, 0x1.52f39a7d97a6fp-759, 0x1.41cdb4d1bb97p-997,
     0x1.b756c875f11dcp-715, 0x1.f6a137312cb81p-778, 0x1.0dc53c8f7de68p-814, 0.0,
     0x1.4844d4751c176p-637, 0.0, 0x1.1bfd78a3ff4cp-346, 0x1.96c320f9764dfp-436,
     0x1.6b788c458e3a5p-201, 0x1.b84a4bc6668bdp-645, 0x1.8fd2e439b1238p-580,
     0x1.25ff4c7667924p-247, 0x1.d092a1ce979d7p-616, 0x1.9aaa7d2e453cp-466,
     0x1.7cbb01052f21fp-161, 0.0, 0x1.c328ccbd0ca9fp-684, 0.0, 0.0,
     0x1.ea8a4441b2319p-886, 0x1.13325d8483907p-374, 0x1.913aede6c3cd7p-162, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2429968c73f21p-322, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e60d510327125p-445, 0x1.0c3b1ea28886fp-893, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8c80579cc4f2p-476, 0.0, 0.0, 0x1.3594f53891fe9p-2, 0x1.55307996e0768p-759,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61feb5393fb63p-424, 0.0, 0x1.dd38dbf687149p-513,
     0.0, 0.0, 0x1.85b747c373a5dp-820, 0.0, 0.0, 0.0, 0.0, 0x1.36ca324d42eb9p-749,
     0.0, 0x1.959c59a58ecc5p-98, 0.0, 0x1.fe8b65c78720dp-38, 0x1.7c030ee296877p-811,
     0.0, 0.0, 0x1.bb5910fa2aab1p-64, 0.0, 0.0, 0.0, 0x1.94f967556a43ap-379, 0.0,
     0x1p0, 0.0, 0x1.381a76ee6ba4ep-185, 0.0, 0x1.405d720708b7ap-994,
     0x1.008562ea6235bp-244, 0.0, 0x1.eb2236ac8c1dcp-588, 0.0, 0.0, 0.0,
     0x1.5de9057e0ee2p-309, 0x1.43bc033bb37aep-147, 0.0, 0.0, 0.0,
     0x1.9f4130ef53387p-203, 0.0
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
            tmp1 = Sleef_finz_acosd4_u35kvx(tmp0);
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
    printf("Sleef_finz_acosd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acosd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
