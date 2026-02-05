/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceild2_avx2128.c --function Sleef_finz_ceild2_avx2128 \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.214dc3a521b39p-837, 0x1.ada9830ae98e8p-311, 0.0,
     0x1.df8e8d9a3034fp-864, 0.0, 0.0, 0x1.5abea2d9a8fd8p-783, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cdfe858571d83p-684, 0.0, 0x1.ea763e810fc3ap-475, 0x1.63473f1a6ee68p-87,
     0x1.9feed0abe3df4p-906, 0.0, 0x1.bb455b8027864p-308, 0.0, 0.0, 0.0,
     0x1.1435a21ee056ep-303, 0.0, 0x1.d1166cefe2975p-578, 0x1.4823fc147a05ap-495,
     0x1.da2bb7314b306p-488, 0.0, 0x1.f4bbd3b26b50ap-484, 0.0, 0x1.54ddd64235363p-749,
     0.0, 0x1.87d79f0731e36p-641, 0.0, 0.0, 0x1.1da6b0f321b56p-536,
     0x1.6e1345a9895eep-671, 0.0, 0.0, 0.0, 0x1.72503de65b1acp-411,
     0x1.d30381f0a3da5p-235, 0x1.a28c4ec5751e9p-848, 0x1.ab8805b16cc05p-573,
     0x1.153585a919f24p-328, 0.0, 0.0, 0x1.4ea08526199e5p-692, 0x1.0687ab889429ap-269,
     0x1.efe0eda456346p-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.520f81ededcebp-773,
     0x1.cba424045b5bp-999, 0x1.ad8cb3e82b697p-365, 0.0, 0x1.6cc0e79c8d374p-724, 0.0,
     0x1.2bb49eda7ebb5p-618, 0.0, 0.0, 0.0, 0.0, 0x1.e7a5cc31caebap-849, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.daba0a130a598p-764, 0.0, 0.0, 0x1.04499f987391ep-194,
     0x1.6e5ba26f7403dp-603, 0x1.0aba13d39802p-741, 0x1.310e7d7a2d426p-721, 0.0, 0.0,
     0x1.d0710a52576a1p-17, 0x1.8e8f68614ad58p-123, 0x1.4b80a5c39d465p-1006, 0.0,
     0x1.631540b5ec86p-5, 0.0, 0x1.215f84b781bebp-884, 0x1.114e9d7b81b82p-854,
     0x1.6c53ca29bcd98p-662, 0x1.6d5e57e962195p-685, 0x1.8199cde26b8f7p-900,
     0x1.4293c8688ac6p-216, 0.0, 0.0, 0x1.5ee39f51a4599p-989, 0.0, 0.0, 0.0,
     0x1.2a62a68dd352cp-354, 0x1.8b11e8a1817edp-288, 0x1.82eb087637d07p-317,
     0x1.606bf7ba5b666p-443, 0.0, 0x1.14cb9685fa8fep-382, 0.0, 0.0, 0.0,
     0x1.2d51b88d98003p-299, 0.0, 0x1.1fdb8b0f2edecp-711, 0x1.09062645d2d48p-726,
     0x1.c74c640af9d67p-774, 0.0, 0.0, 0.0, 0x1.c0bf1af653095p-801, 0.0,
     0x1.6ea2fc2766d6bp-210, 0x1.5537dc18a81dbp-783, 0.0, 0x1.be213aa5c064fp-812, 0.0,
     0x1.cf0bf9e938e13p-348, 0x1.c387f14800be1p-395, 0x1.189af85439dadp-754,
     0x1.aceb541e02c2ap-575, 0x1.eba8d1588879ap-440, 0x1.2a21eda98aaa7p-384, 0.0, 0.0,
     0x1.1f028a9f0154bp-174, 0x1.6f6ab2d2ee177p-91, 0x1.3022f4cd3d63ap-515,
     0x1.6f21573fb138ep-500, 0.0, 0.0, 0.0, 0x1.af5140fe02646p-401, 0.0,
     0x1.ef4f0ecf74dfdp-440, 0x1.1d7a80e52301p-465, 0x1.717ad5e063749p-106,
     0x1.f15fe5a79313dp-194, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc6f19659a358p-277, 0x1.b6fc9311ecb11p-251, 0x1.607189fc11669p-24,
     0x1.7208b872f5534p-1018, 0x1.e2e6f8b1d58e6p-884, 0.0, 0x1.3f42575ccba8p-474,
     0x1.5b80625ed9743p-557, 0x1.c13577167c235p-245, 0x1.429410158cffp-134,
     0x1.6acb9106a84b9p-62, 0x1.980c782c2b9efp-884, 0.0, 0x1.5ffb2d004bfabp-962, 0.0,
     0x1.9b52d6f46fa47p-352, 0.0, 0x1.e94b7c43b32cap-75, 0x1.59dd44b8a30d5p-507,
     0x1.dcfea00991c89p-387, 0x1.30a8d780dd029p-307, 0x1.58c07734ec16fp-375,
     0x1.c0b895b361eap-885, 0.0, 0.0, 0.0, 0x1.c292fbd4b7886p-783,
     0x1.a4c8190cfd3efp-3, 0.0, 0x1.2630d40b33666p-259, 0x1.3da838870b245p-258, 0.0,
     0x1.f65eccb46548fp-335, 0x1.8aae5ebf0fc77p-993, 0.0, 0.0, 0.0, 0.0,
     0x1.abe0009e2b63cp-790, 0x1.285a89aedfc4ep-42, 0.0, 0x1.45b642b124513p-195,
     0x1.bde32e4bbb59dp-593, 0.0, 0x1.8fd6f72d696d9p-389, 0x1.a2414887f9ec3p-460,
     0x1.9e1f4cf2589fap-769, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dff5a16f06ecdp-611,
     0.0, 0x1.fa6371a494993p-684, 0.0, 0.0, 0.0, 0x1.b8dd29a8a8a11p-400, 0.0, 0.0,
     0x1.2c51d6f8f338fp-629, 0x1.ee65baf460e4dp-813, 0.0, 0.0,
     0x1.c264fcc82e0b8p-1011, 0x1.9facbd7b1ffd9p-413, 0.0, 0.0,
     0x1.b7e08cfe80dd5p-918, 0x1.da93a1bd4d4bdp-526, 0.0, 0.0, 0x1.29aee7419b143p-257,
     0x1.9b4942678de81p-697, 0.0, 0.0, 0x1.102ca40df788ap-83, 0x1.8a4b4548b0c77p-495,
     0.0, 0x1.b7a35ce3f798fp-846, 0x1.845fde2aa84c7p-452, 0x1.8956c8010e7e2p-5,
     0x1.20ebf86401993p-777, 0x1.6a1bae558efd9p-999, 0.0, 0.0, 0x1.c04b8f43f2408p-54,
     0.0, 0.0, 0.0, 0x1.495987a41d093p-294, 0x1.ccd2da1b9c774p-86,
     0x1.cbd54a60d477p-166, 0.0, 0x1.eb2765d58e27bp-486, 0x1.f367b10ce4d87p-721,
     0x1.f6deaa6a16cf1p-515, 0.0, 0.0, 0.0, 0.0, 0x1.73c58f80e3fefp-344, 0.0,
     0x1.b6c7603f89034p-328, 0x1.c99f6f53373bbp-620, 0x1.008408197c0c2p-604,
     0x1.0196bf076f25ep-941, 0x1.c4dea6c6cde1fp-432, 0.0, 0x1.c4a259587ec6cp-560,
     0x1.61b4ee6dd4fd8p-65, 0.0, 0x1.0918fe7b7d4d7p-592, 0x1.98e836674e232p-509,
     0x1.83a2294549c8dp-843, 0.0, 0.0, 0x1.8a485328007aap-582, 0.0,
     0x1.bbd1543d0f74ep-991, 0.0, 0.0, 0.0, 0x1.03d8bbe49a8a4p-941,
     0x1.f22b38fb57d4dp-338, 0x1.79df9e6694a75p-788, 0x1.f5fded34fdd38p-317, 0.0, 0.0,
     0x1.2601b7fb27535p-421, 0.0, 0x1.1da1c650dd402p-599, 0.0, 0.0, 0.0,
     0x1.a4a93a83bf799p-416, 0x1.543dcbbc17326p-480, 0x1.62393a36d4cfbp-776, 0.0, 0.0,
     0.0, 0x1.4a3eaa9bfc16cp-43, 0x1.1bbac9385ddap-308, 0x1.38328150fd5e9p-50, 0.0,
     0.0, 0x1.ac9f5ab67b808p-291, 0x1.3d4fc9949b218p-453, 0.0, 0.0,
     0x1.976648d7a3e46p-706, 0.0, 0.0, 0.0, 0.0, 0x1.31bfa49c7f9dep-686, 0.0,
     0x1.08b33715b9175p-190, 0.0, 0x1.4d3ab5e94511dp-173, 0x1.c8f61b48351a1p-266,
     0x1.6042e9facf4fp-989, 0x1.d7769f7b9f111p-502, 0x1.942def7a569cfp-74, 0.0, 0.0,
     0.0, 0.0, 0x1.ec49957298a7ep-907, 0.0, 0x1.240dd748b555ap-793,
     0x1.54b9b8b232b31p-1013, 0.0, 0x1.42af6a558fc5bp-8, 0.0, 0x1.aecc79f36e44p-971,
     0x1.3ce14cbf4fcfp-608, 0x1.b7d848e6105fcp-232, 0x1.85dad0e069eebp-695,
     0x1.217b05b3949a6p-763, 0x1.2ff7b1b9ed287p-723, 0x1.afd5a1d689c2ep-359,
     0x1.e1c7d9f77fda1p-471, 0.0, 0.0, 0.0, 0.0, 0x1.89e0b617af625p-389, 0.0, 0.0,
     0x1.3bb1c5bf47db9p-503, 0.0, 0x1.84a66c545d313p-567, 0x1.4c73f51fc3eep-266,
     0x1.b4bca9249f57ap-40, 0.0, 0.0, 0x1.6f9ad601bd1f3p-638, 0x1.95febc2408bedp-732,
     0.0, 0.0, 0.0, 0x1.2df4b77f9e53bp-803, 0x1.5485587a7209cp-900,
     0x1.aac9803c8b6dep-50, 0x1.586abf502c98cp-938, 0.0, 0.0, 0x1.ef9fb1fe4ab72p-720,
     0x1.1ffa5949c0d34p-74, 0.0, 0x1.74dd1be2e8c4fp-853, 0x1.565504159ec53p-806, 0.0,
     0x1.cbb540a04f6b3p-775, 0.0, 0.0, 0x1.6ee8bf92c85f1p-449, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2ed599e28ea3p-692, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b93aee4cc6374p-115, 0.0,
     0.0, 0.0, 0x1.f682e109b58edp-235, 0.0, 0x1.b2b94ccaf8562p-921, 0.0, 0.0, 0.0,
     0x1.cf32f9ff309d1p-410, 0.0, 0.0, 0x1.b77a70ce484ap-430, 0.0, 0.0,
     0x1.892220cbb4e85p-80, 0x1.258989ea430e2p-291, 0x1.62bb0c350abb2p-804,
     0x1.10db7626b494bp-570, 0x1.cdd78987a647fp-121, 0.0, 0.0, 0x1.3495bf2172057p-53,
     0x1.71c6583413644p-579, 0.0, 0x1.df47052c10feep-463, 0.0,
     0x1.230041e57b986p-1021, 0.0, 0x1.bb0994eeb5111p-150, 0.0,
     0x1.85b01ed164978p-819, 0.0, 0.0, 0x1.87f9518edca21p-880, 0.0, 0.0,
     0x1.862d102a138bap-485, 0x1.d62678f301719p-803, 0x1.c4bac90463b4bp-37, 0.0,
     0x1.9b681e87aa8e5p-740, 0.0, 0.0, 0.0, 0x1.d0af47168d5d1p-1016,
     0x1.de59e9a00d4a7p-954, 0x1.ebdaa9a69a3e3p-540, 0x1.7ae4c5ad0fff5p-757, 0.0,
     0x1.d0c157fd2f499p-784, 0x1.52f0a969d54f1p-45, 0x1.f3f184304ce25p-166,
     0x1.3e1958ec1e671p-361, 0x1.6cb131cafe97ap-13, 0x1.a9d2a16514d7fp-517, 0.0, 0.0,
     0x1.3237907de2fbp-48, 0.0, 0.0, 0x1.fbb6a76c4e76dp-6, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f70dff5c95d32p-641, 0x1.a8c87e73ba86p-913, 0x1.f931411b22fa8p-369,
     0x1.61f40b5e675f6p-108, 0x1.96246135c701cp-975, 0x1.c44ae1b3173d4p-740,
     0x1.d375a2e0e2414p-681, 0.0, 0.0, 0.0, 0x1.e1b4400d3aff2p-179,
     0x1.adf8473023643p-939, 0x1.888d19145090bp-788, 0x1.f720f35f7c351p-770, 0.0,
     0x1.32eaf7a24a714p-978, 0x1.464c5ad3a49d7p-898, 0x1.9b3435eb772e2p-551, 0.0, 0.0,
     0.0, 0.0, 0x1.479af48b57f14p-54, 0.0, 0x1.8c2f193d05169p-800, 0.0, 0.0,
     0x1.c18c1281721b8p-16, 0x1.ee21fb086486cp-150, 0x1.dbc034b54c1b1p-300, 0.0, 0.0,
     0.0, 0.0, 0x1.1ba8a6db085fcp-503, 0x1.d114557950033p-879, 0x1.3504d2fdccc1dp-900,
     0.0, 0x1.3c68f6948615ap-1001, 0x1.38eb13f5bd049p-807, 0x1.efd91ab48736ap-157,
     0x1.e4fc3741bac98p-78, 0x1.92469d528b9cap-1000, 0.0, 0.0, 0.0,
     0x1.e4d7bc2c232c6p-548, 0x1.babe3f4f0ed3fp-631, 0x1.13ce3e5d5751fp-1016, 0.0,
     0.0, 0x1.33a944acdffcap-758, 0x1.bd2e431835b68p-918, 0.0, 0.0,
     0x1.625d60a090fe6p-551, 0x1.5927aad9817e1p-696, 0x1.c3b96983c38bp-114, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0790c75cb3913p-559, 0x1.4ff2a4820d6edp-506,
     0x1.99f06b1c91e35p-228, 0.0, 0x1.fe98fbc55f2fep-285, 0.0, 0.0,
     0x1.107be9c0015dbp-404, 0x1.139f6ea06afd9p-823, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1451188a5f1e7p-185, 0x1.1d2835c323a62p-906, 0.0, 0x1.70bd1f2f3d1dfp-412, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05a1da123d156p-645, 0.0, 0x1.7e5114b57d3dp-873,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51d00941a20f3p-414, 0x1.8d5d916e449d7p-528, 0.0,
     0x1.0ec87610d09cp-547, 0.0, 0x1.340fcabf7beap-118, 0.0, 0x1.d89ea9abda8a7p-157,
     0x1.053a0a83886ep-237, 0x1.bf7d85ac3cfecp-375, 0.0, 0x1.4b3a103cd258ap-82,
     0x1.1c8987be40b98p-174, 0x1.b0065ebef6162p-23, 0.0, 0x1.bdf9a63b6055cp-45, 0.0,
     0.0, 0x1.6ef77d0415c54p-472, 0x1.e1d7aaf626bdap-264, 0.0, 0x1.b18966a23cc02p-782,
     0x1.f91cf203ab746p-244, 0.0, 0x1.5b84f30f5dabfp-344, 0.0, 0.0,
     0x1.5352f6965efb8p-958, 0.0, 0x1.9d9e9f54bcf94p-234, 0x1.7cb7b699dc6e1p-641, 0.0,
     0.0, 0x1.3008f60ed59a8p-559, 0.0, 0.0, 0.0, 0.0, 0x1.ab2b891201d49p-698, 0.0,
     0.0, 0x1.c9afb87c6a185p-698, 0x1.535d274fa2865p-651, 0.0, 0.0, 0.0, 0.0,
     0x1.387c633cbb1e6p-595, 0x1.02b386cb4ed5fp-394, 0.0, 0x1.621ac7cc2347bp-941,
     0x1.f72903d146ae2p-403, 0.0, 0x1.8716e7017e1c8p-732, 0x1.baad27142280fp-91,
     0x1.3eb4ec5d480c5p-728, 0x1.5475a8025d21ep-217, 0.0, 0x1.9cb1fb7a4de1cp-501,
     0x1.e104032eab1b1p-220, 0.0, 0.0, 0x1.64025ba687d0cp-935, 0x1.e0b2856ae74fp-648,
     0x1.fdda016d08abap-427, 0x1.5292edb9755a4p-1020, 0.0, 0x1.f6631dd06f508p-856,
     0.0, 0x1.ada7b37a14113p-424, 0x1.ad74e66ae383bp-1011, 0x1.7ea2646e4365ep-480,
     0x1.875e3c80a7858p-83, 0x1.b9194f743fac1p-854, 0x1.c1f4b958a3606p-664,
     0x1.6507023ef3a71p-982, 0.0, 0x1.a8055ce617aefp-189, 0.0, 0.0,
     0x1.6d73625092c8cp-219, 0x1.4b41a9705387bp-127, 0.0, 0x1.4c09642731313p-483,
     0x1.12de14156e0b4p-8, 0.0, 0.0, 0.0, 0.0, 0x1.622a00442b1f3p-337, 0.0,
     0x1.2734101290454p-36, 0x1.3fe06afb799ebp-788, 0x1.9a40e3e56df6p-248,
     0x1.eb55b23d2f764p-248, 0x1.f2d993f6c687ap-593, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f4dc730e42f3p-695, 0x1.efd0c0eb7773dp-440, 0.0, 0.0, 0x1.f1e6f4654a0c7p-79,
     0x1.5f39502795b58p-32, 0.0, 0.0, 0.0, 0.0, 0x1.8bfd3765acee8p-975, 0.0,
     0x1.a1293f9963aa6p-149, 0x1.571746467c86p-255, 0x1.73c709a64894dp-32, 0.0,
     0x1.746183518a3fap-510, 0.0, 0.0, 0.0, 0.0, 0x1.bdd1842f341f8p-804, 0.0, 0.0,
     0x1.78890dc135224p-874, 0x1.a868100eb3f85p-142, 0x1.529f2c16e95b5p-823,
     0x1.e3c026cd1cb61p-797, 0.0, 0.0, 0.0, 0x1.48f924a4adebdp-287, 0.0,
     0x1.1ea9d9ff2bd95p-169, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5fe8711da121ep-240, 0x1.fcc6e9a07afdcp-408, 0.0, 0x1.607ed44ceb717p-930,
     0x1.46b29e943ae6ap-792, 0x1.95e4836374ef7p-928, 0x1.eefcf73887983p-905,
     0x1.1e989e613626p-166, 0.0, 0.0, 0.0, 0.0, 0x1.5b5f43f38e87bp-564,
     0x1.e340e0dd660c4p-286, 0.0, 0x1.b7cb919190745p-213, 0.0, 0.0, 0.0, 0.0,
     0x1.eeaafa7ea603cp-913, 0x1.9a80c2379cfa8p-957, 0.0, 0.0, 0x1.3c542457c917bp-776,
     0.0, 0.0, 0x1.5871297aa4ceap-750, 0x1.40c116486d85cp-889, 0.0,
     0x1.15a35f2312424p-534, 0.0, 0x1.245628ef29928p-931, 0x1.6f3958dea6ebcp-91, 0.0,
     0.0, 0x1.b66746ad6101p-669, 0x1.672182cb41e2ap-875, 0.0, 0.0, 0.0,
     0x1.e84b7ddcbd6edp-621, 0x1.f6291dc597e88p-997, 0x1.c7e1cdf7ce7eap-271,
     0x1.e91d7c710d65fp-738, 0x1.d618d9356a9cap-50, 0x1.6aeba466251f1p-240, 0.0, 0.0,
     0x1.72e397c11abb7p-83, 0.0, 0.0, 0x1.036f1680c1b0fp-100, 0x1.65180aa716014p-646,
     0.0, 0.0, 0x1.4b4372daa0a7fp-733, 0.0, 0.0, 0.0, 0x1.dc2fd9839d94bp-197, 0.0,
     0.0, 0x1.6bed2176fae65p-186, 0.0, 0x1.08ed33ee1cc2ap-669, 0.0, 0.0,
     0x1.aff0e32efa4d1p-826, 0x1.5c8d6f3f97322p-244, 0.0, 0x1.a23545ba75f2p-492, 0.0,
     0.0, 0.0, 0x1.fb422c2328d63p-44, 0.0, 0.0, 0x1.6d52f9eaa2471p-575, 0.0,
     0x1.a3a888a5f8f76p-84, 0x1.435dc38273b64p-547, 0.0, 0.0, 0.0, 0.0,
     0x1.244b172ab9249p-951, 0.0, 0.0, 0x1.2d775f5a0fe51p-490, 0.0,
     0x1.b13a2306b1b7fp-131, 0.0, 0.0, 0.0, 0.0, 0x1.0490245d6665bp-332, 0.0, 0.0,
     0.0, 0x1.b415272571ad9p-143, 0x1.715fbe9205badp-307, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.996a9d82fd448p-413, 0x1.5ee4d545a3061p-379, 0x1.3d6f1729a5712p-135, 0.0,
     0.0, 0x1.acff148aa4d21p-244, 0.0, 0.0, 0x1.1f99fbb384e6ep-457, 0.0, 0.0, 0.0,
     0x1.eaaa6d7c37297p-239, 0x1.ca12949f09accp-566, 0.0, 0.0, 0x1.0d1db9b2d2345p-622,
     0x1.631ddcc204a1ep-105, 0x1.71dd7349f8911p-507, 0.0, 0.0, 0.0,
     0x1.f8e2c8a0de047p-654, 0.0, 0x1.1c65ed13915aep-315, 0x1.dd786578a9199p-262, 0.0,
     0x1.65ae0a1adbd52p-846, 0.0, 0x1.7c60d9843e4adp-282, 0.0, 0.0,
     0x1.7a1737a108573p-809, 0.0, 0.0, 0x1.1c9201247d5a5p-357, 0.0,
     0x1.df40689881d77p-1008, 0.0, 0.0, 0x1.9a8f8deded9afp-412, 0x1.cffc6cc6ffecp-128,
     0x1.c0ace55a720e3p-824, 0.0, 0x1.83532223ca8a3p-989, 0.0, 0x1.32c9c44bd5195p-62,
     0.0, 0.0, 0x1.b583662fc1319p-965, 0x1.c52b5d4ea186ap-433, 0.0,
     0x1.8de5481a183c6p-457, 0x1.dad22c4475276p-852, 0.0, 0x1.f062f4ea0439dp-1014,
     0x1.212f182540f07p-499, 0.0, 0x1.d7087f77e2a5p-640, 0x1.57b63dfed66f8p-904,
     0x1.441ea3ea6ea17p-507, 0.0, 0.0, 0x1.1cd444898a944p-470, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d2b26f06b4b02p-353,
     0x1.a72f7c77038aep-994, 0x1.6ead3534a854bp-684, 0.0, 0x1.c7ad2dce2085p-930,
     0x1.5e447b1747337p-703, 0x1.87e274c205e52p-840, 0.0, 0x1.053cc96b2fa17p-814, 0.0,
     0.0, 0x1.bdf1b655f2025p-297, 0x1.f8d4bfa2b2144p-345, 0.0, 0x1.09165579f416bp-321,
     0x1.93d440bc368b9p-740, 0x1.d685ff62434b4p-617, 0.0, 0x1.d480ae95d790fp-828,
     0x1.f8167d0cb8296p-617, 0x1.3ce35908d14a1p-382, 0x1.bc59efdd773d9p-156,
     0x1.7915b66590084p-177, 0x1.b448b59fa095p-53, 0x1.4365a855cf0dfp-696, 0.0, 0.0,
     0.0, 0.0, 0x1.5e2492015a232p-1, 0x1.f5c5b013214d1p-646, 0.0, 0.0, 0.0,
     0x1.e3e0f8e92ebf8p-918, 0.0, 0x1.04890628d5d9cp-825, 0.0, 0.0, 0.0,
     0x1.4d050a5f94908p-866, 0.0, 0x1.b3594aa5d4dbep-410, 0.0, 0.0, 0.0,
     0x1.9abcb93e134d6p-602, 0x1.26af58c2acbbbp-85, 0.0, 0x1.e8dbdeeec0ea6p-913,
     0x1.22c87237bc6ccp-481, 0x1.ccb97001f2dd3p-889, 0x1.705155a884298p-511, 0.0,
     0x1.4690163c92687p-932, 0x1.1fd99a67cc4e9p-943, 0x1.191c7025ff998p-14, 0.0,
     0x1.d7779683ef503p-840, 0.0, 0x1.f805c127c32f9p-128, 0.0, 0.0,
     0x1.4be9ff8e28149p-215, 0x1.fdda9de54dc4ap-167, 0.0, 0.0, 0.0,
     0x1.c1c3f40f75cf8p-243, 0x1.f14ddf90cbdf9p-710, 0.0, 0.0, 0.0, 0.0,
     0x1.9d82469669711p-701, 0x1.cc607489389dfp-769, 0.0, 0.0, 0x1.8861d070fd231p-558,
     0x1.7c49abc190ffep-43, 0.0, 0x1.1b6e971a31bd3p-372, 0.0, 0.0,
     0x1.3e03abe4fc315p-714, 0.0, 0.0, 0x1.6f94c78df442fp-345, 0x1.d418d2f82c858p-703,
     0.0, 0x1.dead7753315d8p-601, 0x1.acbca4c8ee633p-132, 0x1.c28cd116f60dep-775,
     0x1.bf59f346225c7p-57, 0.0, 0x1.5c1fcb9c4b937p-47, 0x1.6476642ebdc93p-788, 0.0,
     0x1.e90f501b1f872p-287, 0x1.7e4646a9bf715p-264, 0x1.eae0274c5f85ap-493,
     0x1.376da19a1dd0fp-1022, 0.0, 0x1.ea2020c44e9e9p-455, 0.0, 0.0, 0.0,
     0x1.05309c6cf08f4p-499, 0x1.d105cef8a856cp-543, 0x1.d5dddfb1b681fp-208, 0.0,
     0x1.84a507cc1be66p-111, 0.0, 0x1.f1b5bf15f7347p-111, 0.0, 0x1.6dd2c2419f4efp-444,
     0x1.9320df789b1dap-531, 0x1.9a0d9ec637de8p-284, 0x1.eb7d5ac236c76p-137, 0.0, 0.0
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
            tmp1 = Sleef_finz_ceild2_avx2128(tmp0);
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
    printf("Sleef_finz_ceild2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_ceild2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
