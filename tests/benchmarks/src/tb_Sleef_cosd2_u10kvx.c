/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd2_u10kvx.c --function Sleef_cosd2_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.c2c2c0d20c4fp-88, 0x1.e1a1fc5779ee8p-380, 0x1.9d2b4d95f8b18p-528,
     0x1.3d64a6c1c22c9p-882, 0x1.07b17997a2523p-998, 0x1.37da00ee9795p-741, 0.0, 0.0,
     0.0, 0x1.eb48a41cc2dcdp-927, 0.0, 0.0, 0x1.7b49d629cf2f8p-954, 0.0,
     0x1.2427e5fbbcf51p-39, 0x1.7f930af08c4c9p-90, 0.0, 0x1.427267a936a5dp-662,
     0x1.dbdc723a6e0ffp-560, 0x1.73abe027da10ep-947, 0x1.ef86025793737p-315,
     0x1.159fd06b6bc91p-702, 0.0, 0.0, 0x1.3d92b4c398777p-953, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7d3c94a2d25afp-971, 0x1.d5cb803f9612bp-197, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6e8d17da85634p-260, 0x1.f6da9506a14dbp-429, 0.0,
     0x1.009c203ce8b99p-586, 0x1.401ce5b392213p-138, 0x1.c0b67b74d002p-663,
     0x1.8f65457afdb69p-513, 0.0, 0.0, 0x1.cc1b077041a9ep-41, 0.0, 0.0,
     0x1.73e5ab8a50454p-486, 0.0, 0.0, 0x1.8a27384f23c44p-383, 0x1.c5cb9c020723ap-959,
     0.0, 0.0, 0x1.c4a68260373fcp-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.55b2c8ecf3494p-652, 0.0, 0x1.76cecd79b03d2p-956, 0.0, 0.0,
     0x1.31fa059ff18b7p-111, 0.0, 0.0, 0.0, 0x1.71855cc0eb12bp-672,
     0x1.6b6cf158225c1p-466, 0x1.b42fcf95e441p-718, 0x1.9c17f52402f14p-998,
     0x1.17c4008bc5d5p-557, 0x1.3d2eabcd267ecp-260, 0.0, 0x1.739c3337ef1f5p-702, 0.0,
     0x1.9802f0af35d5fp-633, 0x1.a438b3eaeecbcp-617, 0x1.162339d85660ep-987, 0.0,
     0x1.03f56cd04c47bp-18, 0.0, 0x1.23e27272de1cap-591, 0.0, 0x1.7a7414675f1e9p-202,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f66dfa6569a3p-398, 0x1.e45585ad148ep-543,
     0x1.1d172fd35cbbdp-959, 0.0, 0x1.97dcc6ea10607p-729, 0x1.dfc4e52e94691p-282, 0.0,
     0.0, 0.0, 0x1.1591cbe32d993p-137, 0.0, 0x1.5411c1b4606dfp-617, 0.0, 0.0,
     0x1.7939278a74182p-126, 0x1.ca39272c9908cp-202, 0x1.7be56067c05c8p-313,
     0x1.ec517f01bd605p-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da501fdd32f36p-486, 0.0, 0x1.9042765096cdfp-351, 0.0, 0.0, 0.0,
     0x1.dc049330f9dd6p-778, 0.0, 0.0, 0x1.beb9071f1f8b7p-113, 0.0,
     0x1.24232e7d3502p-793, 0x1.7d32d262028f6p-167, 0x1.d62bab95996adp-605, 0.0, 0.0,
     0.0, 0.0, 0x1.3f6373c70737dp-248, 0.0, 0x1.3e5585adea9ep-606,
     0x1.ad37be334c40dp-142, 0x1.97e9234d8a957p-937, 0.0, 0x1.4f9fca4b806c9p-33,
     0x1.2cabd54fd36e9p-684, 0x1.d59eee5ea201ap-590, 0.0, 0.0, 0x1.215ff2a5194e2p-104,
     0.0, 0.0, 0x1.127b636422f6p-618, 0x1.f494af4bf88p-319, 0x1.692a924280be3p-597,
     0x1.a4c03cdddb214p-911, 0x1.589a17fa0152ep-100, 0.0, 0.0, 0x1.fa4fc14309b93p-810,
     0.0, 0x1.a92e5cd263e33p-432, 0x1.fa1237a5bc2d1p-152, 0x1.ef6520a9a87cap-662,
     0x1.44a65baa92bd7p-727, 0.0, 0.0, 0.0, 0x1.62302fd532a8p-859,
     0x1.c3762db236b28p-546, 0x1.607fe1347021ep-353, 0x1.f80d1ba2f1bc6p-1015,
     0x1.82cd58d7752e9p-830, 0x1.e8be9c348ff76p-730, 0.0, 0.0, 0x1.1657282bcabbep-348,
     0.0, 0x1.971308d685c54p-497, 0.0, 0x1.d1e8a1985dad3p-50, 0.0,
     0x1.68e219c47f816p-215, 0.0, 0x1.da85d62a3800bp-986, 0x1.98ee6b47b2cc9p-754,
     0x1.48ed3a49ec36ap-827, 0.0, 0x1.43f9d1e049d34p-69, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.820ef1385d88bp-936, 0.0, 0.0, 0.0, 0.0, 0x1.23d65888330dp-180,
     0x1.8eded58f56bap-790, 0.0, 0.0, 0.0, 0x1.72efd783fd20bp-25,
     0x1.b23c422cd5e03p-922, 0x1.b57f938372583p-729, 0.0, 0.0, 0x1.60fa09a4204bcp-687,
     0x1.e480b57ba3f97p-71, 0x1.6a6df4655cfp-617, 0.0, 0.0, 0x1.ea668229d0e79p-903,
     0.0, 0x1.192b6ac76c68cp-485, 0x1.562638e4fc37dp-94, 0x1.71c88b49e8c78p-721, 0.0,
     0.0, 0.0, 0.0, 0x1.579485109a45bp-416, 0.0, 0x1.6775654926e82p-426, 0.0, 0.0,
     0x1.5a00275fc861p-388, 0x1.3ca649dc5886cp-895, 0.0, 0x1.1a146853d5979p-27, 0.0,
     0x1.ab20fd98c75d9p-299, 0x1.987001031ad8bp-153, 0x1.80f6a558db30fp-492,
     0x1.eaf3b75dd31fap-745, 0.0, 0.0, 0x1.74bdb2977e999p-42, 0x1.508711fa0ba71p-358,
     0.0, 0x1.a7c4b15822ee2p-64, 0.0, 0x1.6bd8e9fa3a93fp-474, 0.0, 0.0, 0.0,
     0x1.3f3c70799e711p-804, 0.0, 0x1.952a156ea5fe7p-82, 0.0, 0x1.76f705f11b7ebp-559,
     0x1.e0e050719c083p-650, 0.0, 0x1.5a42e857e4b69p-184, 0x1.793fa951a71fep-697,
     0x1.b8c343c28e1e5p-440, 0.0, 0.0, 0.0, 0x1.735bfbc578b63p-697, 0.0,
     0x1.616bc8f8ae0b7p-731, 0.0, 0.0, 0x1.5784b91b89d6ap-111, 0.0,
     0x1.5f67eee25e082p-800, 0.0, 0x1.e106cb0b403b1p-616, 0.0, 0.0, 0.0,
     0x1.725395d81af0bp-684, 0x1.e219e54e23e5ap-708, 0x1.08855eca985f8p-349, 0.0,
     0x1.d88c00be129c5p-732, 0x1.38745aa203c0ep-966, 0.0, 0x1.58a44a338c81dp-173, 0.0,
     0x1.e79d222936ca8p-968, 0.0, 0x1.12f676d9d28d7p-693, 0x1.d4c058f2995acp-762, 0.0,
     0.0, 0.0, 0.0, 0x1.6c0d93f7b6e0fp-537, 0x1.1ab81cfa6fd4bp-113,
     0x1.109e44c0e4592p-956, 0x1.f84fbb6219f04p-462, 0.0, 0x1.dc67aed534bfcp-126,
     0x1.849edaca92ef1p-523, 0x1.67622b1d92bp-828, 0.0, 0x1.ef00d3e1ef0adp-131,
     0x1.ab55e53e859bp-463, 0x1.2a4f4e46a2482p-212, 0.0, 0x1.f07bc13501ff2p-392,
     0x1.8dc691cac6c97p-559, 0.0, 0.0, 0.0, 0.0, 0x1.39073f70d9062p-978, 0.0, 0.0,
     0.0, 0x1.90b149bb12489p-934, 0.0, 0x1.2e148f2d08bf8p-327, 0.0,
     0x1.6c3ffeac3efcp-38, 0.0, 0x1.07d9d800d0328p-484, 0.0, 0.0,
     0x1.1f05ff96d2afbp-992, 0.0, 0.0, 0x1.c784fc2a72d03p-839, 0x1.a8b14fba116bep-432,
     0x1.c43ac1949c1b7p-917, 0x1.d4611926f8793p-408, 0x1.b5619000e499fp-891, 0.0,
     0x1.60a3eb54efa7bp-400, 0x1.43cc54143e74ap-786, 0.0, 0x1.85b1932ef3cb3p-853, 0.0,
     0.0, 0.0, 0x1.f22b7dce5075bp-460, 0.0, 0.0, 0x1.add7393779942p-728,
     0x1.da4cbf3a1e037p-355, 0.0, 0x1.cff29de0f2a3p-981, 0.0, 0.0,
     0x1.042b78c630413p-983, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ae0190c5e737ap-78, 0x1.a8d1acb12c8ecp-824, 0.0, 0.0, 0x1.63ecce1b71fe3p-9,
     0.0, 0.0, 0x1.f3a9e21b0119bp-1013, 0.0, 0x1.f13362a1de788p-606, 0.0, 0.0,
     0x1.775887f4cf139p-920, 0x1.dbf5d78b7168dp-448, 0.0, 0.0, 0.0,
     0x1.322b934c39c6cp-748, 0.0, 0.0, 0.0, 0.0, 0x1.063ac3fa0bf45p-280,
     0x1.5d9fc8e1e084fp-678, 0.0, 0.0, 0x1.5d9ae498afac6p-642, 0x1.1e4fa8e4beb41p-889,
     0.0, 0.0, 0x1.81a9a07d88021p-458, 0x1.c362a72dff7bap-929, 0x1.68996962ad62bp-628,
     0.0, 0x1.76139c35f3189p-1014, 0x1.c596817e25f0fp-419, 0.0, 0.0,
     0x1.3061e11bf1f0cp-640, 0x1.9e493ed0815c2p-5, 0.0, 0.0, 0x1.2f09baa5e4d3cp-618,
     0x1.f8211d7249d67p-868, 0x1.ffd13345ee318p-675, 0.0, 0.0, 0x1.7da921a553e7dp-374,
     0x1.e0c6c29db2b2dp-889, 0x1.7a88e30107293p-727, 0x1.4e21901c468d8p-261,
     0x1.8de1462ea3014p-264, 0.0, 0.0, 0x1.854732f7886f1p-437, 0.0, 0.0,
     0x1.758d132e70291p-644, 0x1.78eec564fb624p-429, 0.0, 0.0, 0x1.18c809c0070e7p-302,
     0.0, 0.0, 0x1.c181ce74b3a47p-649, 0.0, 0x1.4857e51fb58e3p-16, 0.0, 0.0,
     0x1.d784ddeca55e1p-159, 0x1.80dfaca0fbcaap-132, 0.0, 0x1.32ea4480d76d2p-424, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78413075fb901p-240, 0x1.01dcb4a176978p-296,
     0x1.1561d73dceccdp-86, 0x1.201ab313181b7p-929, 0.0, 0x1.9cd925ab7fdcp-989,
     0x1.fcc671347c13fp-711, 0x1.7a1dd1f10c386p-996, 0.0, 0.0, 0x1.d33bef880ecf1p-830,
     0.0, 0.0, 0x1.e2a177e8fdd8bp-91, 0.0, 0x1.61be4733ced08p-443, 0.0, 0.0,
     0x1.9af3f246c3dffp-428, 0x1.e543788b88896p-490, 0.0, 0x1.bcf2c4260fdb7p-354, 0.0,
     0x1.f0eaadbfb54c8p-820, 0x1.afe0c80431444p-390, 0.0, 0x1.31bbe0281908bp-693, 0.0,
     0.0, 0.0, 0.0, 0x1.90238024fac71p-1005, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.de4cf1789ae6dp-238, 0x1.3f3f6e1850a27p-267, 0.0, 0x1.fc479c34f083ep-10,
     0x1.eb7b54fcb1656p-323, 0.0, 0x1.a868c0a625fa3p-660, 0x1.53e91c0a75fa7p-427, 0.0,
     0.0, 0x1.7c4c0e42c8cedp-824, 0.0, 0x1.cdf6b421b25abp-178, 0x1.a7ab3bb33244fp-709,
     0.0, 0x1.9fa185b561ea8p-277, 0x1.d6b15e39e063fp-790, 0.0, 0x1.12762c297db2cp-891,
     0.0, 0.0, 0x1.c261e506a6a58p-206, 0.0, 0x1.6f910c78b7b7ep-233,
     0x1.a84782ff9d003p-562, 0.0, 0.0, 0.0, 0.0, 0x1.6321b62758c91p-952, 0.0, 0.0,
     0.0, 0x1.27bba7d686385p-823, 0x1.3443870662a8dp-385, 0.0, 0.0, 0.0,
     0x1.115a565f8fa4bp-293, 0.0, 0.0, 0.0, 0.0, 0x1.303dfe1a69298p-868,
     0x1.764f99880eb69p-420, 0.0, 0x1.483491d337a47p-981, 0.0, 0x1.b530f5b778bdbp-586,
     0.0, 0.0, 0.0, 0x1.75af9ba5c64b4p-438, 0.0, 0x1.0ac2deb470f38p-954,
     0x1.375b55784bebbp-405, 0.0, 0.0, 0.0, 0x1.3971edcd13dcdp-605, 0.0, 0.0,
     0x1.3f526029e4d54p-812, 0x1.ff7ad9483b85ep-427, 0x1.ed16d45c082edp-74,
     0x1.77d8d0d956458p-749, 0x1.9cc1de70225f8p-384, 0x1.3488809bdbde6p-107, 0.0,
     0x1.6e28d2999d1c7p-930, 0.0, 0.0, 0x1.6e89be79e031dp-587, 0x1.2044daa96c3b2p-691,
     0x1.d0d650319e106p-296, 0x1.daf33fd6a02a2p-54, 0x1.788786b26c971p-120, 0.0, 0.0,
     0x1.27c926d46c649p-195, 0x1.3b6e784dc048fp-403, 0.0, 0.0, 0.0,
     0x1.0e057f09edbcp-72, 0x1.c3327124a7535p-838, 0x1.75435dcc95cfap-196,
     0x1.ec3e18956735p-242, 0.0, 0.0, 0x1.46fc24ae3e6a1p-327, 0.0,
     0x1.43ca94c5f467dp-970, 0x1.378c95657eaa2p-530, 0x1.00a85eac22e6dp-957,
     0x1.2c368f0371f5dp-39, 0x1.ed3f8493ea992p-12, 0.0, 0x1.bc5388007a031p-925,
     0x1.a2b41249a5b48p-773, 0.0, 0.0, 0.0, 0x1.fdbed4394bf61p-653, 0.0,
     0x1.cad11cdab68f1p-433, 0.0, 0x1.d17de01376896p-455, 0x1.16729463c4aa9p-958,
     0x1.fd79ccfdcd264p-581, 0.0, 0x1.05dddbb09b7d2p-359, 0x1.81fb039a35163p-455,
     0x1.5398106a3de51p-858, 0.0, 0.0, 0.0, 0x1.0f4d1a9a9436ap-569,
     0x1.f3d9fc5c3399ep-706, 0.0, 0x1.9f9f1633e48cdp-28, 0x1.acd18798f6befp-903, 0.0,
     0.0, 0x1.662e06e392092p-48, 0x1.962099a1cbcebp-546, 0x1.a83eab9a2ed92p-731, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6ef7439a47095p-537, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45e77062ead39p-105, 0x1.f12007fb08f1fp-511, 0x1.0156eaf842c3bp-704,
     0x1.a4d1f5b934d2cp-319, 0x1.8eab6e57e76cap-932, 0.0, 0x1.8f572341dea24p-574, 0.0,
     0.0, 0x1.dc3725f3b332cp-518, 0.0, 0x1.6b2bb46030adep-42, 0.0,
     0x1.6167b77c84992p-287, 0x1.07ea1263ff92bp-848, 0x1.b41a1d34a25eap-713, 0.0,
     0x1.7f0b1384c3aafp-799, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ae7bf1344f1cp-674, 0.0,
     0x1.f84320b1967d7p-56, 0x1.750da32d2e36bp-360, 0.0, 0x1.d2c5287c3483ep-173,
     0x1.37698bab40b7ap-412, 0x1.18f0e543ec661p-186, 0x1.0b61ebfc2ad8dp-493,
     0x1.3f58789c1b5b1p-379, 0x1.0de10704b1084p-665, 0x1.7c050cf100527p-47, 0.0, 0.0,
     0.0, 0x1.fc0ecaac926p-948, 0.0, 0.0, 0x1.68ae028c9b3b3p-889,
     0x1.78e2ca9266811p-909, 0x1.97b88abca1bd6p-836, 0.0, 0.0, 0.0,
     0x1.b010295845c8cp-536, 0x1.74e216a57d5c7p-439, 0.0, 0.0, 0x1.dd67d75e86022p-880,
     0.0, 0.0, 0x1.03de39fea827dp-775, 0x1.7746c9eaeec18p-121, 0.0,
     0x1.0f3028176cedfp-371, 0x1.f6dfef53b9238p-320, 0x1.9a111e3cd9cf2p-778, 0.0,
     0x1.6cb06e0ff7112p-197, 0.0, 0x1.493c9775f77f1p-407, 0.0, 0x1.a0d0960e4f8acp-928,
     0x1.9a68607c85eb2p-359, 0.0, 0.0, 0x1.918e0196e63c8p-137, 0x1.a39bf00704c73p-817,
     0.0, 0x1.b3d09843d1e61p-349, 0x1.2c520ba141531p-316, 0x1.95eee91e4d84cp-246, 0.0,
     0x1.4fa67b0b75e5ap-922, 0.0, 0.0, 0x1.8547768231641p-686, 0.0,
     0x1.04fe0d7ef66ccp-564, 0.0, 0.0, 0x1.e62b8848ad05bp-452, 0.0, 0.0,
     0x1.f9350710caa7p-144, 0.0, 0.0, 0.0, 0x1.783a745cffb1ep-949, 0.0,
     0x1.ebb8d9d4ffeaep-325, 0x1.f106b32751c38p-840, 0x1.cbd253427198dp-907, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b33c7d1262b34p-580, 0.0, 0.0, 0x1.24d890f6043c5p-208, 0.0,
     0x1.42d3ada73186p-534, 0.0, 0x1.1aceee2c16594p-604, 0.0, 0.0,
     0x1.6b9b2d16c891ep-391, 0x1.80dde37bb71ebp-227, 0.0, 0.0, 0x1.267b39afbbc94p-301,
     0x1.908472b825188p-350, 0.0, 0.0, 0x1.f3abcc95009bfp-513, 0x1.067f2f55c9c74p-94,
     0.0, 0x1.1efde0da3bad9p-210, 0x1.6e949e039e576p-730, 0x1.800306d5a216bp-241, 0.0,
     0.0, 0.0, 0.0, 0x1.751cdc93ea0e4p-1000, 0x1.7b104ccc73ec3p-73,
     0x1.295380b761de2p-47, 0.0, 0x1.7a0263a79dd35p-82, 0x1.4bce24fe043c8p-187,
     0x1.5ea0d8eeeb2f2p-1018, 0x1.383482ff0aee9p-530, 0x1.2557261070666p-849,
     0x1.306389537b07p-43, 0.0, 0x1.4a9ea5975e64p-107, 0x1.a79821ca3f54p-850, 0.0,
     0x1.15e7846a7837p-715, 0x1.46f958a46b013p-84, 0.0, 0.0, 0x1.44729c26c2bap-975,
     0.0, 0x1.7b56737557636p-172, 0x1.c8b01be367086p-246, 0x1.6b4de29c37bdep-41,
     0x1.054a6e603bfap-339, 0x1.ca96e22627e1ap-560, 0.0, 0x1.ff535778acdb9p-865,
     0x1.399481f6a2682p-537, 0.0, 0.0, 0.0, 0x1.dd149ec3212b4p-936,
     0x1.8bdb154023555p-923, 0.0, 0x1.1c2cd9624e88dp-755, 0x1.4634462af20e9p-903, 0.0,
     0x1.c3f708ab3f026p-909, 0x1.b8af0a5a643ffp-937, 0x1.906560cea64d1p-381,
     0x1.afb56afd90e13p-492, 0x1.50ba4d17e93b7p-249, 0.0, 0x1.e46be6431cf33p-111, 0.0,
     0x1.a4548f422a4dfp-543, 0.0, 0.0, 0.0, 0x1.949c35edde9p-1001,
     0x1.7ee53ccde8f37p-412, 0.0, 0x1.b7d14bd98f48cp-168, 0.0, 0.0,
     0x1.d65eaddc78db2p-141, 0.0, 0x1.ed85241084f02p-172, 0x1.cb8bb2e4e006fp-711,
     0x1.08ec066ceb842p-943, 0.0, 0.0, 0.0, 0x1.0ebb24f5fd9fcp-499,
     0x1.e3ea47220a631p-695, 0.0, 0x1.e97eed4c84aabp-329, 0.0, 0x1.99a61b1296165p-508,
     0x1.d7cc2a33c3f36p-484, 0x1.06df4559f8d6ap-269, 0.0, 0.0, 0.0,
     0x1.98b0bcb19052ep-544, 0.0, 0.0, 0.0, 0x1.f8381b6ae162p-882,
     0x1.3035e0fab304p-856, 0x1.439dadb6900ddp-494, 0.0, 0x1.67e01c600502ap-942, 0.0,
     0x1.2f0cabc50e7a3p-423, 0x1.8ca27f750d3e5p-596, 0x1.317fd5eb5b22cp-60,
     0x1.e4ee816417039p-95, 0x1.4e415c914ab89p-214, 0x1.34a8c0b7fe1a1p-768,
     0x1.aa31bcdd085bcp-421, 0.0, 0x1.0feae360e3384p-789, 0x1.a10b97eac496ap-496,
     0x1.59a6741c7c6c6p-337, 0x1.b9b13ebac6a03p-382, 0x1.f475fad2644a8p-377, 0.0,
     0x1.673f83a11f50fp-388, 0x1.14fd7524eda11p-541, 0x1.6d65cb67d18dcp-924,
     0x1.53983947d9f01p-886, 0.0, 0.0, 0x1.77bc5ef9b304bp-115,
     0x1.11990b6ba6e5fp-1001, 0.0, 0x1.cfc31d18b069bp-515, 0x1.ae888a5bb981dp-367,
     0x1.e4fbe21e5195cp-266, 0x1.fcffad20dfe87p-487, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.63dc700ee5ce3p-268, 0x1.c159569e05ddbp-155, 0x1.694ca35b7989bp-985, 0.0,
     0x1.5a28043bc75f8p-597, 0x1.50f2124e8cd85p-63, 0x1.4993b1c219d9cp-251, 0.0,
     0x1.6e1a68dcfdb8ep-710, 0.0, 0x1.7e8e487601625p-529, 0x1.257e856ddd3cp-286, 0.0,
     0.0, 0x1.440fbe4c9f0bfp-477, 0.0, 0x1.fef299cd7c413p-65, 0x1.88641e52b0256p-114,
     0.0, 0x1.754ebbff54618p-152, 0x1.374d4fd7f3dd3p-846, 0x1.809181f17478ep-982,
     0x1.fb909a1f597c6p-491, 0.0, 0.0, 0x1.71c245ce67793p-323, 0.0, 0.0,
     0x1.d220b91ef7407p-855, 0x1.f833514a4c78bp-540, 0.0, 0x1.05e38b5bb0538p-809,
     0x1.683da30055735p-215, 0x1.46882d4be7ac2p-890, 0x1.0edabecc0598cp-547, 0.0,
     0x1.8e8edf20f0d8p-425, 0x1.fd29578c8c9bdp-596, 0x1.8e1c29713eca9p-336, 0.0,
     0x1.4a5a30841bb27p-144, 0x1.5ae6caed7b129p-906, 0x1.edacc38b612aap-219,
     0x1.5902d98a9123p-372, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02d6acdbdd139p-471,
     0x1.3af79625a5b67p-215, 0x1.4862435dbdfap-16, 0x1.3852101aa5e8ep-830,
     0x1.4ae570375be1bp-847, 0.0, 0x1.ac2c68d674075p-874, 0x1.ca69912b50a94p-734, 0.0,
     0.0, 0x1.4c1027a3653bdp-769, 0.0, 0.0, 0x1.a81767c81bc64p-990,
     0x1.9578a9181d184p-797, 0x1.f788645c9a5p-817, 0x1.2f5a06705396dp-912, 0.0, 0.0,
     0x1.e60fe6db2683ap-353, 0x1.7cc86d2ca69acp-528, 0.0, 0x1.0f226a1ccf0f2p-587, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2176ac9e96737p-616, 0.0, 0.0, 0.0,
     0x1.097a5f9fb88c1p-29, 0x1.f740b5ee3c7c7p-497, 0.0, 0.0, 0x1.bcb2ac6dc11bfp-732,
     0x1.1ac5dffa122d9p-49, 0x1.231ba943197d5p-482, 0.0, 0x1.bda2b76daab67p-967,
     0x1.d50e6a1ffc16cp-413, 0.0, 0x1.478d8ab227ccp-646, 0x1.4fae6889fe4eep-121,
     0x1.ce688b2dfc621p-462, 0.0, 0x1.07af31d496197p-371, 0.0, 0.0,
     0x1.c8328c495bcfap-596, 0x1.18d1cbfafb0f5p-283, 0.0, 0.0, 0x1.2781d99ad5581p-286,
     0.0, 0.0, 0x1.7f6e26351e015p-426, 0.0, 0.0, 0x1.8b3624c57f657p-940, 0.0,
     0x1.bd224e762f978p-952, 0.0, 0.0, 0x1.d7b947b65de23p-357, 0x1.bd29386d4b52fp-82,
     0.0, 0x1.be4750f202634p-187, 0.0, 0.0, 0.0, 0x1.6a95905607717p-133,
     0x1.57893df9be9fep-926, 0x1.9e447d8adab4bp-399, 0.0, 0x1.8df842158692cp-644,
     0x1.fe1f5a094d59dp-429, 0x1.834bba9c33aap-829, 0x1.e67b7720a0007p-125, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9d9e0d0d6dccp-344, 0.0, 0x1.f8b289850795cp-1000, 0.0,
     0x1.813bbcbdb0c5bp-1006
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
            tmp1 = Sleef_cosd2_u10kvx(tmp0);
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
    printf("Sleef_cosd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cosd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
