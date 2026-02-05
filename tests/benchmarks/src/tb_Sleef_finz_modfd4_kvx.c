/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modfd4_kvx.c --function Sleef_finz_modfd4_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.0c0a8da4fa765p-286, 0.0, 0x1.74364ceaecc4ep-283, 0x1.e9752fc309a2cp-505,
     0x1.4e69bbf1cb87ap-34, 0x1.566d6f7971c5fp-434, 0.0, 0x1.c5e1367f063p-150, 0.0,
     0.0, 0x1.02098c732670bp-826, 0x1.c48753cc6578cp-313, 0x1.9320875b85e06p-713,
     0x1.3f98cb0da8ba6p-917, 0.0, 0.0, 0x1.c0299a49d0681p-902, 0x1.ab553ee70c752p-942,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7db56c23cae5ap-709, 0x1.9f71df2077f58p-417,
     0x1.2a8e795e3196cp-387, 0x1.3f054029f117ap-1022, 0.0, 0.0, 0.0,
     0x1.3350ce4415e15p-824, 0.0, 0x1.9fb238802cac5p-352, 0.0, 0x1.19eefb035153ep-915,
     0.0, 0.0, 0x1.5a2f05be7f6f8p-388, 0.0, 0.0, 0x1.6646c4f9c836ep-491, 0.0, 0.0,
     0.0, 0x1.34d04fded105bp-960, 0.0, 0x1.d567df41481a7p-849, 0.0, 0.0,
     0x1.432b2efebf4d9p-711, 0.0, 0.0, 0x1.12b58121109efp-322, 0x1.80d8550520173p-350,
     0x1.62384d302ee5ep-359, 0.0, 0.0, 0x1.a250954abc212p-107, 0.0, 0.0,
     0x1.a16ce8c4e9c87p-1000, 0.0, 0x1.923ab9a616d11p-463, 0.0, 0.0, 0.0,
     0x1.816e58efee615p-814, 0x1.7e00fe15387a9p-214, 0x1.f3adef09ab768p-774, 0.0,
     0x1.71ec46d1d89c2p-942, 0.0, 0.0, 0.0, 0.0, 0x1.e36a94460d8a5p-656,
     0x1.d2ab842538915p-330, 0.0, 0x1.935849473e84bp-887, 0x1.941e54901cf94p-201,
     0x1.b80ab68566216p-900, 0.0, 0x1.b1f8dd090ad1bp-978, 0x1.d9a664b57ab35p-494, 0.0,
     0.0, 0x1.70c1ad80626b6p-303, 0.0, 0.0, 0.0, 0.0, 0x1.c3c89b1998a28p-51, 0.0,
     0x1.dc0c5b760844ap-534, 0.0, 0.0, 0x1.89eee152de58cp-727, 0.0,
     0x1.8278b50a76b78p-835, 0x1.22df2320cf99dp-467, 0.0, 0.0, 0.0,
     0x1.78c5452d80907p-142, 0.0, 0.0, 0x1.d6328a1883e84p-972, 0.0,
     0x1.0c5f3c633b40ep-409, 0x1.c7fc86cef6c7ep-230, 0x1.bc307a53cd033p-797, 0.0,
     0x1.c7ab70ab850a6p-727, 0.0, 0.0, 0.0, 0x1.2b2ddffc4aa1dp-762,
     0x1.7e6d4bb878491p-500, 0.0, 0.0, 0x1.b8a2040009e03p-637, 0.0,
     0x1.3fc2f8569e23ap-125, 0x1.f02b1686d2c8fp-83, 0.0, 0x1.5021f34bb8ddbp-541, 0.0,
     0x1.9149ec8b39d0bp-632, 0.0, 0.0, 0.0, 0x1.891c4e00392fdp-189, 0.0, 0.0,
     0x1.79467c98636e7p-1016, 0x1.1e0c0b192ce0cp-983, 0.0, 0.0,
     0x1.fd8711d32a4c9p-406, 0x1.611b7f28dc707p-537, 0.0, 0x1.215cdf38d5432p-210,
     0x1.ce96a7bde5244p-4, 0x1.5bf408cc74024p-778, 0.0, 0.0, 0x1.2a94166c4bdd6p-969,
     0.0, 0x1.cfb60d6c7359ap-692, 0.0, 0.0, 0x1.13324817ae57cp-824, 0.0, 0.0,
     0x1.f15ce4bf6baf4p-882, 0x1.13df5d233b768p-659, 0x1.39ac235c4a0bfp-543,
     0x1.5689476c6f103p-778, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c076e7ee833ffp-617,
     0x1.aa0ecb4c446dap-700, 0.0, 0x1.0588f7b1634cdp-71, 0.0, 0.0,
     0x1.9e4291e2efb1ap-464, 0x1.d8a3ade423974p-948, 0.0, 0.0, 0x1.520074d15f655p-196,
     0x1.6634005e4d612p-66, 0x1.a50bc35a730cdp-858, 0.0, 0.0, 0.0, 0.0,
     0x1.f725234b37d79p-627, 0.0, 0x1.a425acf09dcf1p-86, 0.0, 0.0, 0.0, 0.0,
     0x1.1365e74268a43p-625, 0.0, 0x1.62af34392d456p-10, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5fb49285900e9p-538, 0x1.1309cdc22e88ep-833, 0x1.06bb4dd45034cp-139,
     0x1.1e02ed6977484p-843, 0x1.60026daae1e37p-345, 0x1.8e2a828449d52p-463, 0.0,
     0x1.5e8e0e38ea119p-834, 0x1.4f2a1964de5e2p-362, 0x1.045c8efb9ed66p-847, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a0e52ff15fb28p-942, 0x1.6cb2b45f14476p-738,
     0x1.338de025ba56ap-438, 0x1.4f0b34d1ec998p-413, 0.0, 0.0, 0x1.a22677284a751p-820,
     0.0, 0.0, 0x1.dc4eafd006c64p-756, 0.0, 0x1.c0c4f1fdd5662p-180, 0.0, 0.0,
     0x1.63da7d1764acbp-62, 0.0, 0x1.4c1782ec8f371p-10, 0.0, 0x1.41a259fcfb139p-184,
     0x1.f8fd354ebddfdp-417, 0.0, 0x1.8dc266b25adcp-425, 0.0, 0.0, 0.0,
     0x1.dc3cd8c4f353bp-261, 0x1.2f627a5522e43p-411, 0.0, 0.0, 0x1.6b1fb7f951ac9p-957,
     0.0, 0.0, 0x1.13f9582b6bf65p-865, 0.0, 0x1.356e7edb9917fp-346, 0.0,
     0x1.bf34d4dfe5fc2p-846, 0.0, 0x1.5c5c9440d28f6p-595, 0.0, 0.0,
     0x1.ab171f9e54659p-336, 0.0, 0.0, 0x1.5a322ccb765cdp-741, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b5aed19fae5c7p-628, 0x1.d78ce787c1e42p-797, 0.0,
     0x1.cc1b0b2acb908p-876, 0x1.6147fca5a1fe3p-980, 0.0, 0x1.553c5f3e9f364p-390, 0.0,
     0x1.6209a920ab107p-775, 0x1.7d0d8271a37c1p-56, 0x1.485a1f87d8cc8p-158,
     0x1.3943f3492bfa5p-360, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0eb5db5e5b5dp-255,
     0x1.ffcbc453dd88ep-900, 0x1.5ce8cfe717815p-944, 0.0, 0.0, 0x1.52d2c3205410ep-577,
     0.0, 0x1.51bf97535a16dp-677, 0x1.3415a32a37234p-1008, 0.0, 0.0, 0.0, 0.0,
     0x1.a9d8ded826d03p-38, 0.0, 0.0, 0.0, 0x1.7fac5bdc8f64bp-780, 0.0, 0.0,
     0x1.329ce91e62b72p-605, 0x1.dc6b37b4c70eep-846, 0.0, 0.0, 0x1.5a34a670a9bfep-668,
     0.0, 0x1.c6030d75e7ccep-1017, 0x1.de87a0d15aa06p-584, 0x1.202d18d5fece7p-924,
     0.0, 0x1.ab78ab8a84bc7p-185, 0x1.0577585b176a1p-964, 0x1.e54d7df90d2d1p-434, 0.0,
     0.0, 0x1.61795ea80fc97p-912, 0.0, 0x1.fb0bfe6548325p-560, 0.0,
     0x1.e43c0c3b399b8p-186, 0x1.fd38118076008p-894, 0.0, 0x1.751b7352bf779p-1016,
     0.0, 0.0, 0.0, 0.0, 0x1.a91f8e3431271p-379, 0x1.d99fb8f035573p-122,
     0x1.79e6f957bc735p-973, 0x1.36cbf22e08e0bp-283, 0x1.43b976e60f70cp-707, 0.0,
     0x1.e59a018787215p-256, 0x1.17ead37ef61d9p-881, 0x1.fd873dd01f63cp-293,
     0x1.3fad99207fa09p-128, 0.0, 0x1.bd91ea7f84118p-734, 0.0, 0.0, 0.0, 0.0,
     0x1.94ecc87097e47p-836, 0x1.aa3483580b296p-702, 0.0, 0x1.e29cbff18aa9bp-51, 0.0,
     0x1.84f8f7ec8a047p-329, 0.0, 0.0, 0x1.2d821e5f554dbp-897, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7210ff2d6ca1cp-137, 0.0, 0.0, 0.0, 0.0, 0x1.6fa7280b74f1dp-781,
     0x1.1b5dfbb080a02p-910, 0x1.17544332a703ap-636, 0x1.b259790af2a17p-408, 0.0, 0.0,
     0x1.40d6f9f1313e2p-228, 0.0, 0.0, 0x1.6c30f0550a593p-999, 0.0,
     0x1.892d18e23d4b9p-899, 0.0, 0x1.e8e82cff313abp-494, 0x1.fcc0cfe752aa7p-69, 0.0,
     0x1.d70df99c8f33ap-128, 0x1.1a67b95054f07p-916, 0x1.1868b2cf31a16p-700, 0.0,
     0x1.044b864b54903p-837, 0.0, 0x1.14422cc771f38p-232, 0.0, 0.0,
     0x1.dbc0d71a5bc3fp-97, 0x1.74b10ace5e5dp-137, 0.0, 0x1.16ce5e42c0ec3p-42,
     0x1.3cfaf0959553cp-959, 0x1.292086ce2b559p-213, 0x1.b4b7fe83833f4p-169,
     0x1.9c8b621a2e209p-45, 0.0, 0.0, 0.0, 0.0, 0x1.41911dfc762bdp-408, 0.0, 0.0, 0.0,
     0.0, 0x1.e96e1edc8f949p-192, 0.0, 0.0, 0.0, 0.0, 0x1.4d6775d6193dbp-756, 0.0,
     0.0, 0x1.855564b3316d1p-61, 0x1.a4a781ab27bf1p-574, 0x1.861da981d8789p-680, 0.0,
     0x1.bab1a60cce825p-370, 0x1.b7a7720c48e91p-181, 0.0, 0x1.3835f077bd866p-219, 0.0,
     0.0, 0x1.a4ce4bc3b1c11p-673, 0.0, 0.0, 0.0, 0.0, 0x1.30598f0a2a3fbp-695, 0.0,
     0x1.db657d9f01a32p-822, 0x1.e78e5b069e3f8p-308, 0.0, 0.0, 0x1.80dd19980b82bp-439,
     0x1.6feaac48f367ep-280, 0x1.834d8d12b1e1dp-139, 0.0, 0.0, 0x1.6fd47efd4c4e8p-67,
     0.0, 0x1.6fe085f62ae1fp-529, 0.0, 0x1.de5a041d19289p-113, 0.0,
     0x1.8baf89af1904ap-266, 0.0, 0x1.0d2db71acf03cp-724, 0x1.a26dc6f28e00cp-127, 0.0,
     0x1.33d915b820bf7p-735, 0x1.7d302963918e9p-623, 0x1.19ce9f7258df3p-250,
     0x1.e09bd3238110bp-221, 0x1.0e1ff3544b92ap-405, 0x1.7266886a1fcb4p-895,
     0x1.ad310bc1a987cp-72, 0x1.5d0630a29617dp-224, 0.0, 0.0, 0.0,
     0x1.e4b15e049d9a9p-1018, 0.0, 0.0, 0x1.2806d3e30f4b1p-1007, 0.0,
     0x1.2edc5d478421cp-401, 0x1.e5fd045fcf971p-685, 0x1.df6c38588feccp-970, 0.0, 0.0,
     0x1.7a5ad933ef3e2p-670, 0x1.1f9dd6467a4dap-657, 0.0, 0.0, 0.0, 0.0,
     0x1.c447ac0806a82p-534, 0.0, 0x1.93e8515357454p-869, 0x1.0d0ebb00a1027p-707, 0.0,
     0x1.b6b072a8e271dp-748, 0x1.6b61752b97efep-619, 0x1.30a26df416cc7p-12,
     0x1.11dda43da5bcep-40, 0x1.ea70228e3bb6bp-743, 0.0, 0x1.36f860015ca98p-214, 0.0,
     0x1.d8c8aa228b387p-201, 0.0, 0.0, 0.0, 0.0, 0x1.aad04e5cb6214p-659,
     0x1.f986f9e6a89bcp-907, 0x1.0d2a201f1cf7cp-863, 0.0, 0.0, 0x1.c75eaa9ec97efp-485,
     0.0, 0x1.327b7213e72bbp-238, 0.0, 0x1.61e7e1853e83p-211, 0x1.65342945b995dp-903,
     0x1.f8e12ae369fbap-74, 0x1.a0f7a4665356ep-336, 0x1.9cb0c493d1a07p-183, 0.0,
     0x1.cfdc07db053e5p-289, 0x1.373c1d33578c7p-954, 0.0, 0.0, 0.0,
     0x1.92e72c28db5e1p-1012, 0.0, 0x1.1f50daf930493p-479, 0.0,
     0x1.76f5099a5a39ap-929, 0.0, 0.0, 0x1.4b4856ae94e37p-815, 0.0,
     0x1.6cce6939d7a1ep-493, 0.0, 0x1.c54d2000fb9d2p-956, 0.0, 0.0,
     0x1.b2369b7d402f2p-828, 0.0, 0x1.222a330ae1c37p-788, 0x1.349bc82c29613p-432, 0.0,
     0.0, 0x1.1cd86eb3bc2f3p-534, 0.0, 0x1.5f5ec9be216eep-700, 0.0,
     0x1.06398978613ebp-545, 0.0, 0x1.ac5d2277786ep-369, 0.0, 0.0, 0.0, 0.0,
     0x1.4e18e1517e2c1p-61, 0x1.b8fb3a16efcfcp-472, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c59f4ebc61bf4p-193, 0.0, 0.0, 0.0, 0x1.71a9286e11929p-123, 0.0, 0.0, 0.0,
     0x1.5c2025d1dad9p-302, 0x1.f8756e015f7e4p-934, 0x1.cfddd5b30dc55p-356, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.104ad91459c9p-884, 0x1.110df9249685bp-555, 0.0, 0.0,
     0x1.ed75ea4d37f3bp-392, 0.0, 0.0, 0.0, 0x1.53188adb91bc1p-359,
     0x1.1ee9b74af9f56p-401, 0x1.a7ce0fdb8c2e4p-290, 0.0, 0x1.e65851e5606d7p-694,
     0x1.ffd726199148ap-100, 0x1.4deacef0a2544p-840, 0x1.b6115d98d51a2p-796,
     0x1.172d519d678d4p-847, 0x1.cb4d803dda99fp-921, 0x1.0616d33df9f8fp-279,
     0x1.7465f64032183p-537, 0.0, 0.0, 0x1.604ef600ee7bap-395, 0.0, 0.0, 0.0,
     0x1.d25499fade054p-459, 0x1.8145a8e97e77cp-396, 0x1.c8c939c12b264p-214, 0.0, 0.0,
     0x1.9e555634facebp-291, 0.0, 0.0, 0x1.8d2e2b182cfd2p-600, 0x1.095c9f9cfb1f5p-995,
     0x1.efec7b397780cp-1007, 0x1.bfcc35784bbb5p-23, 0x1.08ab5ca6bb65cp-981,
     0x1.d30628df8e1ecp-819, 0x1.a67b406d48952p-341, 0x1.0f29115c89a3cp-378,
     0x1.d54112d157908p-504, 0x1.e00703eed92e5p-380, 0x1.4e9b25f99de7ap-521,
     0x1.e0bfde1318f46p-549, 0x1.51e95ebec2de1p-199, 0x1.a7f701b528802p-876, 0.0,
     0x1.79696de46492p-71, 0.0, 0x1.281dc76dece12p-825, 0x1.d0f45b90f341cp-458, 0.0,
     0.0, 0x1.f9498b390c9c7p-291, 0x1.b8f56ea41f75bp-383, 0x1.7e8bae8c0f5efp-897, 0.0,
     0x1.451937fc2251fp-782, 0.0, 0x1.4d139b21ac9b3p-652, 0.0, 0.0,
     0x1.dad9bb28ec4cfp-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.315fbe3b78a4fp-28, 0.0,
     0x1.c00439351c95bp-863, 0.0, 0x1.f4fa6b0d4322ap-413, 0x1.54b29d4ec6c23p-152, 0.0,
     0x1.bc9ce6ec227e4p-879, 0x1.0ac02290c51ecp-807, 0x1.9de91f3aa8986p-168,
     0x1.539caf2694a43p-629, 0.0, 0.0, 0.0, 0.0, 0x1.1bbb52d17ab95p-690, 0.0, 0.0,
     0x1.18fa45f51c1cfp-381, 0.0, 0.0, 0.0, 0x1.deceb51c5b4bap-566,
     0x1.40f88052f17ecp-275, 0.0, 0.0, 0x1.fe9c2a0658e41p-765, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4e500f9b583dap-498, 0.0, 0x1.2a8784ff047fbp-624, 0x1.ea2034c0509ccp-234,
     0.0, 0x1.8bfe4ed549cdp-236, 0.0, 0x1.24a9380ce96bap-740, 0x1.bc09edfa23d58p-53,
     0.0, 0.0, 0x1.4efcab49ab0f5p-545, 0x1.ffa0dc5b34c02p-146, 0.0, 0.0, 0.0,
     0x1.d719dbadf44f3p-1002, 0x1.64769d3c6548dp-1008, 0.0, 0.0, 0.0,
     0x1.1478383b70cddp-133, 0.0, 0x1.f8a567d8c800fp-720, 0.0, 0.0, 0.0,
     0x1.30e8b675f6b16p-657, 0x1.646de0f8644a3p-477, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8fa828aeac92p-110, 0.0, 0.0, 0.0, 0x1.810d77638a824p-735, 0.0, 0.0,
     0x1.6d988c602c4dbp-719, 0x1.b0ec71f8393b2p-480, 0.0, 0x1.b1e621658a771p-502,
     0x1.2cb09f7d17bddp-777, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8937234fc7396p-897,
     0x1.909a708132d05p-993, 0.0, 0x1.f44804afb5b47p-585, 0x1.d42d30b1fc12ep-118,
     0x1.93b6108857d88p-638, 0x1.ebc11c92263p-622, 0.0, 0.0, 0x1.c591505d9c98dp-621,
     0x1.3a60e87baeadep-489, 0x1.d5ec9bc7f08ecp-289, 0.0, 0x1.8f3101477ceap-532,
     0x1.86082440cbd6bp-106, 0x1.2ed34fa31cb3cp-366, 0x1.4a9340bda835bp-1018, 0.0,
     0x1.fccbc628f145dp-1010, 0x1.74a35c50614d5p-500, 0x1.c5cb93ce5ad66p-190, 0.0,
     0x1.d2b14d3a3c71ep-412, 0x1.674ed22ed4044p-454, 0x1.76cbdf43bfb81p-814,
     0x1.05aaa2eaa2d46p-902, 0.0, 0x1.522097f6658a5p-859, 0.0, 0x1.1d813c7c4e13cp-456,
     0.0, 0.0, 0.0, 0x1.3c9b68bd6bcb4p-860, 0x1.3e5c3808a7c29p-366,
     0x1.7700fa6d591fep-443, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3677682b2c35ep-153,
     0.0, 0x1.c0c6464ebc08ap-519, 0x1.0964ae5484affp-933, 0.0, 0x1.7fc85dda88af6p-840,
     0.0, 0.0, 0x1.385ca5bb189ddp-527, 0x1.21cdf4cb82222p-762, 0.0,
     0x1.68c951d3ab887p-606, 0x1.e79066d3e542ep-135, 0x1.a744275e9801ep-796, 0.0,
     0x1.8a18731120456p-197, 0x1.25cd7e5afb55fp-1001, 0.0, 0.0,
     0x1.d7528855675f8p-395, 0x1.a3c72b39e23eap-251, 0x1.d2664df69b26p-2,
     0x1.ea1bc9f4be91dp-333, 0.0, 0x1.842ba1bc9d6c1p-767, 0x1.37cf704835ffbp-508, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07ab050ed0543p-86, 0.0, 0.0, 0x1.3284afc19d516p-737,
     0x1.637c3dfc48fb1p-848, 0.0, 0.0, 0x1.1d1d422d4c7aep-62, 0x1.79a49fb0b2d49p-261,
     0.0, 0x1.ad853b7e02b0cp-370, 0.0, 0.0, 0x1.3f741a26cd1e9p-22, 0.0, 0.0,
     0x1.43a01903e100bp-118, 0.0, 0x1.997bbfde05418p-860, 0x1.ccc806258f6b7p-536,
     0x1.608938a7b8e4ap-653, 0x1.25093fe61fbc6p-812, 0x1.9729b6e936943p-251, 0.0, 0.0,
     0.0, 0.0, 0x1.98be478d95ba9p-147, 0x1.454ea36c0f795p-423, 0x1.1bbfc8823498fp-405,
     0x1.25396c3511423p-272, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48f2abffe0a28p-979, 0.0,
     0x1.53ae5da39c936p-362, 0.0, 0x1.c0746a807ef32p-276, 0x1.7c8139d83f998p-517,
     0x1.5181e795e060cp-974, 0x1.08c8769fab8ep-891, 0x1.2bab9ddfef3p-594,
     0x1.fe296a98552e9p-305, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d36f191bcdc6p-17, 0.0, 0.0,
     0x1.dd88431d7ea8fp-107, 0.0, 0x1.a497c28519b3p-107, 0x1.e1f9fd16a6f36p-760,
     0x1.e6f0118ccac39p-625, 0x1.0c3fd0d251f66p-539, 0.0, 0x1.ce9598fd42275p-257, 0.0,
     0.0, 0x1.258a832b592d6p-833, 0x1.7e62a9850b9b2p-930, 0.0, 0.0,
     0x1.a95ba4a1fdcaep-914, 0x1.f51fab10f577ap-138, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f017acaa07d1ep-78, 0.0, 0x1.9ad33a47c3d72p-874, 0.0, 0.0, 0.0, 0.0,
     0x1.d25161187e606p-504, 0.0, 0.0, 0x1.bd1814d8564bcp-283, 0x1.c5fcfd001fe44p-102,
     0x1.ae052b3fdead3p-517, 0.0, 0x1.3e7bd7b2da7bp-805, 0.0, 0x1.dcbcaf01c7277p-422,
     0.0, 0x1.f347b82595f1bp-107, 0.0, 0.0, 0.0, 0x1.fbfce89318238p-108,
     0x1.075c954a85ee7p-929, 0.0, 0.0, 0.0, 0x1.74e08bc304ef3p-333,
     0x1.db9a8bfd81cadp-586, 0x1.28c7ee7019521p-98, 0x1.6896c033ca33p-330,
     0x1.c41bbec2e8fb6p-969, 0x1.bef7b87d0ccc5p-676, 0x1.f31c1bf577e8ap-783,
     0x1.2ba66be3b98a9p-1001, 0x1.b6111c991f957p-289, 0x1.81a711ece2638p-937,
     0x1.aeb20c0cf8b0ap-882, 0.0, 0x1.e5b5bf26a4527p-521, 0x1.0a77aa94e8396p-518, 0.0,
     0x1.433d8b893a141p-341, 0.0, 0.0, 0x1.69fc2ccd67e5bp-295, 0x1.632b2a45448d8p-574,
     0x1.82553aa6ed9a2p-461, 0x1.b7983f66c7e19p-236, 0.0, 0.0, 0.0,
     0x1.6fb80645b62cp-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2ba137e1227b8p-477, 0.0, 0.0,
     0x1.42b92f3fcd10cp-548, 0.0, 0.0, 0.0, 0.0, 0x1.e9f181b139867p-129, 0.0,
     0x1.8dafa4212f6a7p-908, 0.0, 0x1.13d58bdf10aecp-807, 0x1.8c1f181d75125p-699,
     0x1.37cb0fda14714p-108, 0.0, 0x1.912ac540b6e31p-674, 0.0, 0x1.9bcb19dc71edep-487,
     0x1.4ea38396ce292p-594, 0x1.c0906bec9a7dcp-325, 0x1.a3bbc0beed0e4p-986, 0.0, 0.0,
     0x1.aceae22c2e1aap-43, 0x1.b9ab5aa8922c7p-359, 0x1.1832bdef5e6cbp-751, 0.0,
     0x1.458d889e094dfp-827, 0x1.f75bb328dfb8fp-309, 0x1.a714d9e94c0fdp-413, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0f389cecf8277p-219, 0x1.135c2008d85ddp-955,
     0x1.7f77727060db5p-857, 0.0, 0.0, 0x1.0484595ab7fb6p-28, 0x1.14bfd650ad1e1p-475,
     0x1.d21c156513461p-827, 0x1.1bca13ac61753p-698, 0.0, 0.0, 0.0, 0.0,
     0x1.30fd8884b89ep-63, 0.0, 0x1.f61533bb9aa74p-39, 0x1.603172f692ed1p-901,
     0x1.a6304114411e9p-641, 0x1.4ba5e0a3a1325p-1003, 0x1.af42414f98ee3p-731,
     0x1.85cd2fe211558p-843, 0x1.1ec9a467a2633p-427, 0.0, 0.0, 0.0,
     0x1.6ff347bc3bc1p-65, 0.0, 0x1.b7a3adccde242p-409, 0x1.d209e72575eb2p-128,
     0x1.e36872a5730f3p-865, 0x1.502822ab4bdf1p-80, 0.0, 0x1.94a8c4ba2c70ep-266
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
            tmp1 = Sleef_finz_modfd4_kvx(tmp0);
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
    printf("Sleef_finz_modfd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_modfd4_kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
