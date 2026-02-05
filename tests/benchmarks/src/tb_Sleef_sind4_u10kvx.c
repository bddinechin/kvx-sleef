/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind4_u10kvx.c --function Sleef_sind4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0.0, 0.0, 0x1.c00eea3f557f4p-999, 0.0, 0x1.c4c27366be544p-589, 0.0,
     0x1.991d87dbe2ce5p-464, 0x1.66eedf5d80a13p-515, 0x1.da8648aed3841p-563,
     0x1.adce0bd3bd8eap-829, 0.0, 0.0, 0.0, 0x1.8be7e3d629b7dp-217, 0.0, 0.0, 0.0,
     0.0, 0x1.0866fa76b29e7p-273, 0x1.3ccd55345fc2ap-156, 0x1.a3a446f4ecab6p-241,
     0x1.784c25acb066fp-759, 0x1.1465f6fa19d66p-256, 0x1.55bc7860ba1bdp-766,
     0x1.bcaaf4fda211dp-296, 0x1.94030c5de9de7p-354, 0x1.05bfc2a3075fep-193, 0.0, 0.0,
     0x1.4b64b70c5cb63p-36, 0x1.38a90081b94c6p-437, 0x1.8928f34da3301p-165, 0.0,
     0x1.956050a35ee53p-939, 0x1.705ec7e2ba485p-736, 0x1.cdc6b62de7263p-551,
     0x1.d71ba99eee271p-449, 0x1.7fc552ee52f1ap-1020, 0.0, 0x1.142394549f16bp-556,
     0.0, 0.0, 0x1.1a9a3e8b18d52p-370, 0.0, 0x1.61bfef7fab96ep-996,
     0x1.17ce5ba6a19dbp-826, 0.0, 0.0, 0.0, 0x1.7ee961e1b88a1p-392, 0.0, 0.0, 0.0,
     0.0, 0x1.0c1db4d89e444p-1003, 0.0, 0x1.b5bba1cd6f8c4p-1019, 0.0,
     0x1.450291c215a7cp-844, 0.0, 0x1.effdf43583d21p-656, 0x1.bdbd1682fd7a7p-211, 0.0,
     0x1.51e04762b61dap-465, 0x1.cf7a87b701d27p-729, 0x1.def725a645491p-823,
     0x1.233a34b69ccddp-65, 0x1.ccbba5003590ap-822, 0.0, 0x1.6f73d20285ec2p-1005, 0.0,
     0.0, 0x1.c5468c428652ep-249, 0.0, 0.0, 0x1.7d0893671e811p-622, 0.0, 0.0, 0.0,
     0.0, 0x1.d5561a0f283c3p-649, 0.0, 0.0, 0x1.98025f812b361p-73,
     0x1.5e9feea25572bp-705, 0x1.87fd52973dffap-740, 0.0, 0x1.04eb53933e05ep-666, 0.0,
     0x1.d917249dd7bc6p-909, 0.0, 0.0, 0.0, 0x1.bc3b7be0cc413p-933, 0.0,
     0x1.5e7bba34674fdp-358, 0x1.baec59370fb5ap-39, 0.0, 0.0, 0x1.d77c7334b78f6p-79,
     0.0, 0x1.1e5a17f9a3c0dp-192, 0x1.e31b7bd471b72p-31, 0x1.a8c9c104cf276p-358, 0.0,
     0x1.b201a5e4e7241p-436, 0.0, 0.0, 0x1.43956629f3a2bp-333, 0.0,
     0x1.bd9d2b273e3b6p-65, 0.0, 0x1.1483e59bf56acp-832, 0x1.fd370f0bbc71p-621,
     0x1.adbf6d447aeaap-375, 0.0, 0x1.3c7fe67ba0886p-1009, 0x1.a2964f7928b78p-130,
     0x1.f52964116657p-168, 0.0, 0x1.514d62a9e9909p-601, 0x1.422233ae7ade5p-686, 0.0,
     0x1.33553516fa768p-574, 0.0, 0.0, 0x1.ab5b7b261609dp-127, 0.0,
     0x1.53ca1bb7d6e04p-53, 0x1.85d0dc6660595p-1011, 0.0, 0x1.7d321594aaddap-947,
     0x1.2ea5cced1fa51p-512, 0x1.01fd4d52995b8p-318, 0.0, 0x1.4560e94ad15bp-290,
     0x1.b2a8727906137p-794, 0.0, 0x1.db2ec0bfecf4ap-261, 0.0, 0x1.40eca8566b7p-406,
     0x1.985f342f617cfp-130, 0x1.ece9358a006fp-3, 0.0, 0.0, 0.0,
     0x1.deaff597fb87bp-162, 0x1.71e907c0e05bbp-772, 0.0, 0x1.10b8e11465ee5p-678,
     0x1.ffb2c0bd923bap-605, 0.0, 0.0, 0.0, 0x1.afd7dcc138b12p-831, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.810990f567f94p-396, 0.0, 0.0, 0x1.3899f86b931a4p-604,
     0x1.ba88cea608632p-862, 0x1.04decacefd227p-687, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff6d636acb489p-319,
     0x1.7f6a18bf13effp-261, 0x1.b12a28f3c7651p-714, 0x1.cfc65687fff89p-898, 0.0,
     0x1.d4348bc58d956p-86, 0.0, 0x1.6193cb8c6e5cdp-118, 0.0, 0.0,
     0x1.0e0a5d5334f3bp-680, 0x1.531a0b434c04cp-509, 0x1.f43d3fb761929p-516,
     0x1.8ae07bfe52738p-553, 0.0, 0.0, 0x1.2571ad6cca258p-15, 0.0, 0.0,
     0x1.4a51d01f8ccd5p-98, 0.0, 0x1.cac24fb7aadafp-468, 0.0, 0.0,
     0x1.ca94167486a7ap-889, 0x1.a65e64741e99p-738, 0.0, 0x1.2105222101e5p-763,
     0x1.fd749255db88fp-198, 0x1.ef933106c1f2bp-268, 0x1.fb8cb2900b9fdp-610,
     0x1.8359e8b87a29ap-537, 0x1.78920d37c1a14p-449, 0x1.7689c48069adbp-225,
     0x1.6a69cf7b24eb9p-213, 0x1.467a674fb6c89p-808, 0.0, 0.0, 0x1.e6763608682a2p-230,
     0x1.f02ae20836c96p-42, 0.0, 0.0, 0.0, 0x1.8fc97df224ae9p-376,
     0x1.ba1941c596dafp-182, 0.0, 0x1.f06626eab1e74p-737, 0.0, 0.0,
     0x1.d5337959dffc8p-727, 0x1.5281566f58be2p-984, 0x1.1d0626ee2ed05p-264, 0.0, 0.0,
     0x1.6a16ee946600ap-915, 0x1.32023a9cbe34p-566, 0.0, 0.0, 0x1.df0b609c48565p-650,
     0x1.226c55648009ap-81, 0x1.f9a02864b451bp-896, 0.0, 0.0, 0x1.a05d3ae062a1p-639,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0fac8fde7cb6bp-989, 0x1.8994504b2e33dp-850,
     0x1.31be215a4350ap-86, 0.0, 0x1.0e14da51851e4p-747, 0.0, 0x1.8e819f6fc3a1ep-189,
     0x1.39b25eaa4fba8p-154, 0.0, 0x1.a4808ceae04bap-270, 0x1.3fd2ea6a4da0fp-455,
     0x1.720de08cef828p-230, 0.0, 0x1.36071f0b3f2eep-270, 0x1.fe4a153e57211p-158, 0.0,
     0.0, 0x1.efd7ea2eab727p-502, 0.0, 0x1.3c4eb26118b7p-685, 0.0,
     0x1.a8ab810d8ecc8p-988, 0.0, 0.0, 0.0, 0.0, 0x1.9933957f5a43fp-433,
     0x1.2adb8189d4212p-729, 0x1.caf18d5460aa4p-84, 0.0, 0x1.811148b30258ap-796,
     0x1.390cc04ec2e55p-855, 0.0, 0.0, 0x1.640db944710a8p-89, 0.0, 0.0,
     0x1.e224d9cb91a41p-793, 0.0, 0x1.16b9f28b1017p-999, 0.0, 0x1.096c19c3f1e9dp-606,
     0.0, 0x1.68055caea3fb5p-650, 0.0, 0x1.ee8571291cbc4p-786, 0.0,
     0x1.6a6a272065633p-813, 0x1.ca3c1b24ad146p-955, 0.0, 0x1.606ff7101c239p-219, 0.0,
     0x1.4db0e5389171ap-548, 0.0, 0x1.49aab26bc557cp-680, 0x1.c85f5ff22420dp-835, 0.0,
     0x1.c54360316e30fp-370, 0.0, 0x1.9fa000c8d8f2cp-486, 0x1.26cb5c3495223p-21, 0.0,
     0.0, 0x1.5b3435441309ep-242, 0x1.acd9353049bfap-1017, 0x1.983736022e0f1p-894,
     0x1.75e66957aa27cp-550, 0x1.d430b66ed6134p-106, 0x1.e3c7e108e6333p-243, 0.0, 0.0,
     0.0, 0x1.60940bdb66a8dp-503, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.344bfb94404a9p-372, 0.0, 0x1.338213db3ea05p-16, 0.0, 0x1.b9a18254158d5p-968,
     0.0, 0.0, 0x1.633db01ccd51p-26, 0.0, 0.0, 0.0, 0x1.31a767cb88fcfp-438,
     0x1.ebb56813a16eep-158, 0x1.68ae08fb94694p-635, 0x1.5b3383d874bd5p-449, 0.0, 0.0,
     0.0, 0x1.0f28d09ab7a5dp-627, 0.0, 0x1.e327d7bd65f5fp-238, 0x1.49c82e9552d92p-488,
     0x1.2ee0cc2cad738p-264, 0.0, 0.0, 0.0, 0.0, 0x1.079ab5f8110c3p-238, 0.0, 0.0,
     0x1.9e1af22014a67p-227, 0x1.bca152f0f3c11p-302, 0.0, 0x1.8fc8205439e68p-598,
     0x1.c085ae5e87ee6p-409, 0x1.eb16bc1b6d7efp-1012, 0x1.f294e67e4e582p-817,
     0x1.3f6b963b9a113p-481, 0x1.e55b76cea48fep-677, 0.0, 0x1.347cc88aea559p-825, 0.0,
     0.0, 0x1.cb8aa957e90aep-245, 0x1.25cb175853a9ep-946, 0x1.b31242155e698p-93, 0.0,
     0x1.d889bf051066ep-258, 0.0, 0.0, 0x1.1a9174d66bb89p-913, 0x1.b5d0f926a1ea6p-705,
     0x1.d359da9e9973bp-446, 0x1.796033aa68583p-683, 0x1.d7d294d4105e3p-380,
     0x1.db4cb7265a729p-682, 0x1.a46373d7f49e1p-374, 0.0, 0x1.85085c3d22e26p-789,
     0x1.0e448105bf744p-2, 0.0, 0.0, 0x1.812ad9ef2fb6dp-452, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ea94ac894279bp-911, 0x1.d1eb8eb7f273p-494, 0.0, 0.0,
     0x1.e81b80082d4ep-363, 0x1.c8f60a12942b1p-828, 0x1.744a072c3fb6ap-881, 0.0,
     0x1.f4ac42bb33d32p-690, 0.0, 0.0, 0x1.0ffe19174edd5p-522, 0x1.f81b6bc4ad03cp-664,
     0.0, 0x1.7573d24f52c71p-796, 0x1.6035851cd7a65p-862, 0.0, 0x1.4b31bb0ec85d9p-702,
     0x1.e9969eb6f08abp-132, 0x1.bdda9b4316658p-221, 0.0, 0.0, 0.0,
     0x1.4eab5e813c058p-379, 0x1.d9fec17da7f97p-344, 0.0, 0x1.55a7897f90b7p-346, 0.0,
     0.0, 0.0, 0x1.9785fd6b15008p-598, 0x1.753e5e3cf8f6cp-442, 0.0,
     0x1.d4ca2b3586b54p-489, 0.0, 0.0, 0x1.1b0106bb39a4ep-174, 0.0, 0.0, 0.0,
     0x1.7e2402b62e47dp-476, 0x1.319d6c2227a39p-779, 0x1.7fbc86c128629p-637, 0.0, 0.0,
     0x1.0fc509bc81f8dp-893, 0.0, 0.0, 0x1.908ee29da280cp-228, 0x1.dc881d9699a57p-975,
     0.0, 0x1.213fcb3d198bbp-398, 0.0, 0x1.60f6f13e153fp-178, 0x1.6ef4a26cabbe5p-971,
     0x1.43d97624ba0dfp-12, 0.0, 0x1.79a21f01ee34dp-324, 0x1.8751664e04129p-1005, 0.0,
     0x1.75447d9873a0bp-477, 0.0, 0.0, 0x1.33ec9588b9908p-576, 0.0, 0.0, 0.0, 0.0,
     0x1.1798a8aafa09cp-59, 0x1.3ad23ab699cbep-825, 0x1.2532eaa43f9a5p-172,
     0x1.6fd90927253d7p-177, 0.0, 0x1.961526c1cccffp-934, 0.0, 0.0,
     0x1.c66b5ee32c58ep-788, 0x1.7c7de9f975cb5p-5, 0x1.e6d07a3ac90d7p-996,
     0x1.b7f5644eeba1p-711, 0.0, 0.0, 0x1.579a0bd2dba57p-826, 0.0, 0.0,
     0x1.27a603379d2e9p-711, 0.0, 0.0, 0x1.e8046fd5f68ebp-540, 0.0,
     0x1.dbfc3063196b3p-247, 0.0, 0x1.f53e74b4d48e1p-942, 0x1.3634f360d8f67p-403, 0.0,
     0x1.212528a4f9c9bp-467, 0x1.0b2e2ee8fde3dp-954, 0.0, 0.0, 0x1.b696b2a5deae6p-56,
     0.0, 0.0, 0.0, 0x1.1ae1affde51e6p-37, 0x1.965e07bd5f04p-155,
     0x1.e041eb6a064c8p-193, 0x1.93e30bafdb61ap-560, 0x1.988ccad31d8cap-113, 0.0, 0.0,
     0x1.44fa92c18e392p-814, 0.0, 0.0, 0x1.3874a6ef66bfbp-231, 0.0, 0.0,
     0x1.b25d70a1e0767p-608, 0x1.e8b3010a131ebp-306, 0x1.c3aaeba703989p-694, 0.0,
     0x1.892abd7ed509cp-1020, 0x1.c0b24f9011a7p-539, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b373423ffdfb8p-296, 0.0, 0.0, 0.0, 0x1.7e1ecc3843214p-608, 0.0,
     0x1.f4762ccbfbbebp-609, 0.0, 0x1.a448f4a3cb91dp-460, 0x1.fe48bbfbd4ebdp-561,
     0x1.819fc71af32fcp-938, 0x1.a45bab2b379fap-682, 0x1.ec5297da39fccp-325,
     0x1.00e743b7e14eep-782, 0.0, 0.0, 0.0, 0.0, 0x1.7d37b8eed30a5p-852, 0.0,
     0x1.1e6b1eb70b4d7p-612, 0x1.b61179649773bp-235, 0.0, 0x1.9dfb45662acb2p-1004,
     0x1.6928a30e06d33p-601, 0x1.5bb10016a75d8p-510, 0.0, 0x1.c8382b10d85e7p-378, 0.0,
     0.0, 0x1.846993d8de9b3p-286, 0.0, 0.0, 0.0, 0x1.3ee8dfd224942p-176, 0x1p0,
     0x1.60096330ffd4p-668, 0x1.a3c03bb925ec2p-526, 0.0, 0x1.229484b3ccf3p-307, 0.0,
     0x1.a2efb6d5384edp-214, 0.0, 0.0, 0.0, 0.0, 0x1.0c4baa8f82d13p-218,
     0x1.976f10ad40516p-593, 0.0, 0.0, 0x1.d8f1154e65847p-492, 0.0,
     0x1.7fa7b39f1215p-350, 0.0, 0x1.924643bbd6c97p-577, 0.0, 0x1.c3ee98940de9dp-304,
     0x1.38d2f5e4614fp-71, 0x1.d8bd5861e400fp-70, 0.0, 0.0, 0x1.dc55ee34b63a9p-449,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b27bfb31d0e2p-124, 0.0, 0.0, 0.0,
     0x1.ddb7e224fa997p-1001, 0.0, 0.0, 0.0, 0x1.2f82d3f90fea5p-370,
     0x1.079ad3a8f0979p-567, 0.0, 0.0, 0.0, 0x1.a6e14674f1c68p-799, 0.0,
     0x1.d499ef410b769p-439, 0x1.971af2aec1ac2p-125, 0.0, 0.0, 0x1.b1312d4c6b173p-110,
     0.0, 0x1.7b3f1a9cff8f6p-9, 0.0, 0.0, 0x1.fecfe3cb0096bp-218, 0.0, 0.0,
     0x1.7b021e8e71a9fp-653, 0.0, 0x1.3f21b390df82cp-776, 0.0, 0.0, 0.0,
     0x1.183ded3b0f51ap-301, 0.0, 0.0, 0.0, 0.0, 0x1.140de580fa18ep-984, 0.0,
     0x1.b154a0d7f1a67p-646, 0x1.f60087d975ad3p-471, 0x1.168e7141fb6bfp-245, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f590b942857ap-162, 0.0, 0.0, 0.0,
     0x1.e0ba2aafc7fdp-179, 0x1.1ca9c79788d98p-339, 0x1.c15b209e6ffd1p-134, 0.0, 0.0,
     0.0, 0.0, 0x1.e4fd13bb13fc6p-200, 0.0, 0x1.aa11071304156p-802, 0.0,
     0x1.ce8ee0ef3f473p-182, 0.0, 0x1.7a4cc9e37e691p-620, 0x1.3ea3618542eacp-342,
     0x1.dffa7b7b2faa1p-782, 0.0, 0x1.168d4ffac50dfp-999, 0.0, 0.0, 0.0, 0.0,
     0x1.19432c49f22d4p-990, 0.0, 0x1.a9de6eff9b9c9p-844, 0x1.107e546bdea1bp-461, 0.0,
     0x1.eb9de8084e9f5p-607, 0x1.63a64e404e6bep-640, 0.0, 0x1.320b4cb8aa63ap-17,
     0x1.5bdd481cb3924p-103, 0x1.c85118a182895p-244, 0.0, 0x1.17d732030ccbp-928, 0.0,
     0.0, 0.0, 0x1.f6b35c4adccbfp-535, 0.0, 0x1.5fffb9c0122f1p-465, 0.0,
     0x1.4b5be3c92e198p-824, 0.0, 0.0, 0x1.0bd4d9560d633p-748, 0.0,
     0x1.2dd5723b2f9dbp-1018, 0.0, 0.0, 0x1.f6c78b5f0c299p-323,
     0x1.de264b0863068p-287, 0x1.70b0793d3b746p-570, 0x1.a41f664d3d25ep-813, 0.0,
     0x1.3c38a498184a9p-668, 0x1.d837ee92cf035p-155, 0.0, 0x1.f781bc538729bp-665,
     0x1.b7b8df7393763p-306, 0.0, 0.0, 0x1.5a8eeef6f15a9p-587, 0x1.0a15969c70e51p-943,
     0x1.c251c26725359p-601, 0.0, 0x1.cc593171db27bp-592, 0.0, 0x1.6cc2617cb8b85p-956,
     0.0, 0.0, 0x1.82866905588c9p-364, 0.0, 0x1.4e8424d95df13p-34, 0.0, 0.0, 0.0, 0.0,
     0x1.146f5e8d2378dp-81, 0.0, 0.0, 0x1.455a0d7f466b6p-447, 0.0, 0.0,
     0x1.03b40dd4b6781p-646, 0x1.bc43497e3e433p-348, 0x1.582da2d38a93ep-749, 0.0,
     0x1.04908ab521f62p-506, 0x1.c99b7a3f0051ep-174, 0x1.4f1daeee58047p-302,
     0x1.9a384adaa954p-52, 0.0, 0x1.0d6711c405a0dp-620, 0x1.2898d1d07fa96p-715, 0.0,
     0x1.02a6aa2b13577p-880, 0x1.b8043071f1dccp-391, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.538eda90eec3fp-215, 0.0, 0.0, 0.0, 0.0, 0x1.b450026faaf39p-821,
     0x1.cac2cd14ffabp-761, 0.0, 0x1.66b8d763ea22cp-32, 0.0, 0.0,
     0x1.45e51c4a62334p-73, 0x1.c46b77ed88795p-962, 0.0, 0x1.fe44dc0ca2a19p-145,
     0x1.6207996378955p-598, 0.0, 0x1.c2733976a5fcfp-389, 0.0, 0x1.418151c0297cp-411,
     0x1.871971e04e745p-215, 0.0, 0.0, 0x1.cf716375e073bp-515, 0.0, 0.0,
     0x1.45dd3f5fb87bbp-853, 0.0, 0.0, 0x1.af0278a115f07p-59, 0x1.bfd5c1238d923p-723,
     0.0, 0.0, 0.0, 0.0, 0x1.3f12cfdcdf0ecp-51, 0x1.f747c4024070fp-237, 0.0,
     0x1.e2f78969c70e8p-62, 0x1.1a59d54813278p-90, 0x1.9235223e02e4cp-845,
     0x1.a3c58ce4ec765p-670, 0x1.86fa2aecfa1b9p-828, 0x1.43db95d360b6p-384,
     0x1.8a4f061c3fd86p-213, 0.0, 0x1.0c41786913362p-881, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c9e707de1012p-121, 0.0, 0x1.f2bd0f78db57ap-808, 0x1.a63d03bcc102ap-436,
     0.0, 0x1.0746d4538a082p-206, 0.0, 0x1.ca203e4c0df54p-919, 0.0,
     0x1.b678a12865c5fp-830, 0.0, 0x1.5ae9205ce863ep-566, 0x1.c690c79af7081p-755, 0.0,
     0.0, 0x1.8e7b440b859b1p-159, 0x1.67cd0da3967e8p-465, 0x1.60d056f0f04d3p-183, 0.0,
     0x1.4950b57e30cf2p-606, 0x1.781b70655c496p-28, 0x1.4efacdd740301p-469,
     0x1.bcbd434498465p-723, 0x1.11f918cf18657p-480, 0x1.ab31e6e6740dep-557,
     0x1.a433a9a1254b8p-627, 0x1.24818e3f65c3bp-844, 0x1.27d7573ff20cep-17, 0.0,
     0x1.a11fc1d2e5dd4p-763, 0.0, 0.0, 0.0, 0.0, 0x1.051ccd91f3065p-765, 0.0,
     0x1.96c13e2fc0226p-686, 0x1.16f28089b0fdap-889, 0x1.c7645916d678ap-296, 0.0,
     0x1.ed3d3c931fe8fp-889, 0x1.04fbb93a9cf2fp-485, 0.0, 0x1.92068f20defc2p-546, 0.0,
     0.0, 0x1.1b3f6bb17c37ep-437, 0x1.c212163d00655p-56, 0x1.db3a863748415p-777,
     0x1.74e970a77e5d2p-808, 0.0, 0x1.99f1eaad017c4p-616, 0.0, 0.0,
     0x1.59672496e6677p-259, 0x1.05b112a40bb59p-58, 0x1.c078afc136707p-859, 0.0,
     0x1.4eb19e20c2e01p-619, 0.0, 0x1.62bbebcaf483ep-113, 0.0, 0.0, 0.0,
     0x1.ceb9a81183a1p-198, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db6129e5482ccp-120,
     0x1.5064bc10ba295p-646, 0x1.f20d333155c5bp-451, 0.0, 0x1.3fc187a024076p-322, 0.0,
     0.0, 0.0, 0x1.760148157d8c8p-643, 0x1.5c5a5ae9823c8p-222, 0.0, 0.0,
     0x1.3def169fcee4ep-470, 0x1.78a0150a22616p-532, 0x1.12305d227480bp-786,
     0x1.320c336e2b242p-465, 0.0, 0x1.fc206b561b134p-749, 0x1.40c068f9ed7dfp-194,
     0x1.9f91b99dd3476p-78, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e910fef099caap-513,
     0x1.d2c13db47a741p-642, 0x1.2af136c79df11p-486, 0.0, 0.0, 0x1.3f414c6cd597p-706,
     0x1.95aed0d0e28bap-875, 0x1.28124d5aa0dafp-836, 0.0, 0.0, 0x1.eb80a53c0c15p-310,
     0.0, 0x1.8a368470cb447p-370, 0.0, 0.0, 0.0, 0.0, 0x1.0625db4d0b5ccp-329, 0.0,
     0.0, 0.0, 0x1.81e190c811b6p-320, 0x1.e73c1de83d1b4p-752, 0x1.39605a8a99a1p-983,
     0x1.e067ee25117eap-507, 0x1.975c21d27e146p-128, 0x1.6a3abf1a27109p-489,
     0x1.822aa11eb0accp-314, 0x1.d608dd802e79ep-471, 0.0, 0x1.79e29ba193fd7p-969, 0.0,
     0.0, 0.0, 0x1.e89f3ceeee993p-154, 0x1.1bdc4e11be9b1p-158, 0.0, 0.0, 0.0,
     0x1.6074934c2b1bep-749, 0.0, 0.0, 0x1.2d66042bf7ccfp-266, 0x1.19212ef8f9543p-277,
     0x1.abda953ad45ffp-956, 0x1.ad95295fa4c3ap-813, 0.0, 0.0, 0x1.23fda5b22ba77p-538,
     0x1.7cf16796355b3p-913, 0x1.817a2719ec48ap-914, 0x1.a1b516a2f6095p-431,
     0x1.8397421a1d01bp-93, 0x1.5098fa8f75179p-482, 0x1.1432c94c12fb7p-990,
     0x1.e285e5a40ccf5p-941, 0x1.4e03d3fe07021p-931, 0.0, 0.0, 0x1.741732a5db586p-943,
     0x1.513ed52bddc44p-919, 0.0, 0x1.8dee6c1634052p-1022, 0x1.cb01a6bf8e7f6p-503,
     0.0, 0x1.313e534b3f54fp-973, 0.0, 0x1.c6d109d16b5aep-509, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.df00543a0a63dp-862, 0.0, 0x1.2e8a6aa0fd90ap-666, 0.0, 0.0, 0.0,
     0x1.d154a1d57bad1p-515, 0.0, 0x1.26ee1a90beed9p-477, 0x1.4423ffd90b2eep-29, 0.0,
     0.0, 0x1.b289256e44d91p-621, 0x1.78e139520f45cp-965, 0.0, 0.0,
     0x1.702bb9ac9d5dp-317, 0x1.6196b7ba55558p-459, 0x1.06c8e5225eb6p-836, 0.0,
     0x1.e981dd975681cp-476, 0x1.48bba30870a88p-255, 0x1.108c540c5d44ep-458,
     0x1.5e4c7bbd702c7p-608, 0.0, 0x1.ca80780dbd195p-65
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
            tmp1 = Sleef_sind4_u10kvx(tmp0);
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
    printf("Sleef_sind4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sind4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
