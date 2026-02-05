/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd4_u10kvx.c --function Sleef_finz_logd4_u10kvx \
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
     0x1.a71bc1664a095p-359, 0.0, 0x1.91edb99b49658p-463, 0.0,
     0x1.b6b1ce9360b75p-971, 0.0, 0.0, 0x1.f2871c2b7934p-735, 0.0, 0.0, 0.0,
     0x1.cab450fae2147p-399, 0x1.f24ddc2960eafp-445, 0.0, 0x1.3a014ce71082ep-243, 0.0,
     0x1.55dec8615bcep-533, 0.0, 0.0, 0x1.41ab3269a69eep-506, 0x1.f6a6aaf73e82dp-990,
     0x1.afa51fc25fea5p-675, 0.0, 0x1.9cca6f43d4a54p-78, 0x1.3ac93c3c701afp-317, 0.0,
     0x1.7835eed8f9713p-698, 0.0, 0x1.57dcbd20540f6p-704, 0.0, 0x1.ce8fa033c1acdp-512,
     0x1.1e87f19cd9863p-747, 0x1.43765f4785b02p-54, 0x1.33b04febce6f4p-782, 0.0,
     0x1.adbba28a92672p-919, 0x1.a1ee1e51b422fp-889, 0x1.88bfa0a501505p-688, 0.0, 0.0,
     0x1.2be182014defp-704, 0.0, 0.0, 0.0, 0x1.09733350d7ca2p-245,
     0x1.7e1d7e8cc3756p-226, 0x1.58bfc8d313af6p-681, 0x1.a7a94ed4494eep-874,
     0x1.ff43f590a0807p-917, 0x1.df306e22ef845p-367, 0x1.32cd304e7e035p-677,
     0x1.89355d2087793p-620, 0.0, 0.0, 0.0, 0x1.cea6a18e9dac5p-798, 0.0, 0.0,
     0x1.76d3fff728797p-210, 0x1.656790c309e86p-45, 0x1.7fbca6b3ac2ep-478,
     0x1.2686eb54b9007p-37, 0.0, 0x1.fc896ce086f59p-701, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9e4d7b747a42ep-746, 0.0, 0x1.5e129a527821p-82, 0.0, 0.0,
     0x1.823bb552a6fb4p-968, 0.0, 0x1.b6f54b927e787p-436, 0x1.8df5512412c77p-906, 0.0,
     0.0, 0x1.e2da99d7066b6p-615, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c346088c2dd43p-594,
     0.0, 0.0, 0.0, 0x1.d023a465aba6cp-216, 0x1.7a26e2d287ccp-269,
     0x1.b7708b9484b8ap-629, 0x1.e06e299f82ee1p-113, 0.0, 0.0, 0.0,
     0x1.cda7a856dbe26p-110, 0x1.c41cb9f9142e9p-527, 0x1.ccf2d5e088673p-455, 0.0,
     0x1.b39cb0497938p-27, 0.0, 0x1.f36e16bd87b07p-1018, 0x1.8eee24491c06bp-335, 0.0,
     0x1.4bb40abb481bp-527, 0.0, 0.0, 0x1.3491883212853p-173, 0x1.ac08e30ff3e01p-387,
     0.0, 0.0, 0x1.d8790c44e5e33p-537, 0.0, 0x1.7e437e09ea2a6p-214,
     0x1.4f176ab70a378p-575, 0x1.05a1a9958e4f7p-203, 0.0, 0.0, 0x1.ca0bb4d89aa4ep-298,
     0x1.43b6fb32f9515p-920, 0.0, 0x1.c688a7688cb86p-371, 0.0, 0x1.08aba28665cd4p-735,
     0x1.9457e27bfe00bp-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a3e493c9f335p-278,
     0x1.b6f2888cba9dep-376, 0x1.f4444d765b05ep-200, 0.0, 0.0, 0x1.22b445c7e0521p-256,
     0x1.589587f41da21p-941, 0x1.9d46e7a36a299p-914, 0x1.9f8bd4d694a33p-371,
     0x1.5cd9037bc7bd4p-506, 0.0, 0.0, 0x1.78b243f5860dp-32, 0x1.dd1f4e1328621p-653,
     0.0, 0x1.5e3fbb9c86af3p-963, 0x1.0c9da66717078p-541, 0.0, 0x1.816641309cc17p-218,
     0x1.8e583737468a7p-688, 0x1.4f9023778f776p-465, 0x1.ca48435bfb05cp-64, 0.0, 0.0,
     0.0, 0.0, 0x1.4a0433b87862p-653, 0.0, 0x1.1b4ec0695da8ap-573, 0.0,
     0x1.fe46ea86bb49bp-542, 0.0, 0.0, 0x1.21387be578dd3p-301, 0x1.924780c126dp-869,
     0x1.4000547e827e5p-980, 0.0, 0x1.9069570951b66p-949, 0.0, 0x1.9ff569e05323cp-411,
     0x1.34e731b1ad792p-661, 0x1.42437a2744c43p-903, 0.0, 0x1.3afda9b18b5c3p-218,
     0x1.efc8bb10d288cp-136, 0.0, 0.0, 0x1.62493706656abp-790, 0.0,
     0x1.ea2d624e8cce7p-467, 0x1.f0b8e46dcff73p-424, 0.0, 0x1.f3104b366cfaep-988, 0.0,
     0.0, 0.0, 0x1.22fd644c5d43dp-416, 0x1.8dd2574a5c758p-114, 0x1.d0a86cf8006e7p-275,
     0.0, 0.0, 0x1.40abae9a98f0cp-124, 0x1.b943d7cc650a4p-510, 0x1.3b3f81312eb0dp-549,
     0x1.4017639ee34ecp-554, 0.0, 0x1.b097ccdec7011p-495, 0x1.d5430ae5b1658p-764, 0.0,
     0.0, 0.0, 0x1.14fbfbf38275fp-170, 0.0, 0x1.9e5cb6271dda1p-322, 0.0, 0.0, 0.0,
     0x1.831c255b9578fp-542, 0.0, 0x1.f86ac2a7d53c3p-982, 0.0, 0x1.1af941548580bp-558,
     0x1.302fbc57bed1fp-507, 0x1.2ea6f723556fap-254, 0.0, 0.0, 0.0,
     0x1.d1921bc8919f4p-699, 0x1.d342637d27e93p-699, 0x1.7b2fbe6e51c7ep-811, 0.0,
     0x1.a9040bf87b294p-880, 0x1.b3a78bc4b3b9dp-170, 0x1.b777c80f9e5ffp-369,
     0x1.8dd76a70221ebp-891, 0x1.4157042e960d9p-250, 0.0, 0x1.d767314c65203p-818, 0.0,
     0x1.5d9186697b507p-619, 0x1.0aeabe1dade96p-828, 0x1.1a8deff3475e7p-259,
     0x1.a126c22d6a06cp-991, 0.0, 0x1.647b92d6d89a5p-254, 0x1.fbb0a6ed5b287p-938,
     0x1.e545c586fbd6p-415, 0x1.bc9ca45c3d35bp-177, 0x1.33abd125612bap-62,
     0x1.e262b2449f7b7p-986, 0.0, 0.0, 0x1.cb5c038514772p-816, 0x1.06331531c50abp-11,
     0x1.ade2dd1d055a8p-917, 0x1.573781e99ced8p-21, 0.0, 0.0, 0.0, 0.0,
     0x1.15a991742de2p-1015, 0x1.11b5bab122d38p-525, 0x1.09c082efd8b88p-743, 0.0,
     0x1.4065cc1809aabp-205, 0x1.7efedd37b8ba7p-410, 0.0, 0x1.958246cadf96p-208,
     0x1.15b6c87226cf5p-61, 0.0, 0.0, 0.0, 0x1.a9814fefa4e4ep-47, 0.0, 0.0,
     0x1.16aa806052b62p-731, 0.0, 0x1.e0f45c42a8e04p-549, 0.0, 0x1.b20e2d1aa0cfcp-508,
     0x1.4fbc88018f586p-98, 0.0, 0x1.3f405209d825fp-559, 0x1.7574849980a9ep-283, 0.0,
     0.0, 0x1.d385288db366p-286, 0x1.bb0c9e3c7e3e6p-10, 0.0, 0x1.eb5d8d5e4d81ap-845,
     0x1.3ccf411c7519ap-83, 0.0, 0x1.82a3fc54bff94p-671, 0x1.6469542478b2cp-701, 0.0,
     0x1.dbc4d3505762ap-46, 0x1.fc16017e976c9p-326, 0x1.a1546b885fd1dp-655, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1f8078ea04992p-363, 0x1.2d2e64c3a483dp-998,
     0x1.d5d7690f35a04p-682, 0x1.1b7c7ad2e19d9p-329, 0.0, 0x1.73fbb663f687cp-852, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.608dbcb718997p-294, 0x1.ae5b8f5c4ccc1p-882,
     0x1.d5fd59bdb2745p-693, 0x1.c24b3c15625e3p-104, 0x1.3e7c352fec28ap-364, 0.0, 0.0,
     0.0, 0.0, 0x1.623f0dda64808p-483, 0x1.5a7020ede9335p-28, 0x1.fb71e1a91d21bp-289,
     0.0, 0.0, 0.0, 0.0, 0x1.c068976239369p-245, 0x1.a12d2ff5074ccp-273,
     0x1.05cd447dfeb4ap-922, 0.0, 0.0, 0x1.98f62622bfc11p-184, 0x1.290c45d2d03fp-831,
     0x1.ec1d0bd2b354fp-666, 0x1.d39c5973b4b5fp-1002, 0x1.b3775d676cb2ep-395, 0.0,
     0x1.7b0a1d367400fp-163, 0.0, 0.0, 0.0, 0.0, 0x1.03da68d5e83a3p-12, 0.0, 0.0, 0.0,
     0x1.4cc7df4f1bba6p-1010, 0x1.36296be6bbaf9p-270, 0x1.d495438f8d389p-793,
     0x1.dc155c608cd5dp-255, 0x1.f0233c0147bc4p-958, 0x1.117e2b1067727p-599, 0.0, 0.0,
     0x1.bc5be7b3ea04fp-998, 0.0, 0.0, 0x1.04ec153e64028p-509, 0x1.0dcaf84f085bcp-716,
     0x1.0411f380dac8p-21, 0x1.0415583fb2d6ep-132, 0x1.268b4e0a9a23p-881, 0.0, 0.0,
     0.0, 0x1.7aefff04c71c6p-440, 0x1.7e841830edeep-914, 0.0, 0x1.40f9a2bc1c7fep-783,
     0x1.0550dc560342p-272, 0x1.35c1af0a95297p-106, 0.0, 0x1.0d9a21f4cac36p-293,
     0x1.106ed6885f65cp-660, 0x1.9fca498a08aadp-189, 0.0, 0x1.ecb6d34758043p-335,
     0x1.3e46f6223832fp-717, 0.0, 0x1.03137a3474a13p-205, 0.0, 0x1.5ae851c5d9461p-333,
     0.0, 0.0, 0x1.5424853322357p-854, 0x1.f857e26e343fp-85, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.36bb848cc558cp-814, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8dd8288c9d913p-567, 0x1.ed42067506f05p-877, 0.0, 0x1.6770ae5283999p-870, 0.0,
     0x1.f34a51d5b5d6fp-516, 0.0, 0x1.13d0605b93063p-54, 0.0, 0.0,
     0x1.efac31e35f6f9p-472, 0x1.f80033c9e105dp-71, 0x1.558d735c1ef81p-941, 0.0, 0.0,
     0x1.408e32fd4217dp-213, 0x1.19114d0e5b6a5p-279, 0x1.1546e4ef62987p-715,
     0x1.d8513c5cd2f81p-190, 0x1.1eddaed34af84p-29, 0.0, 0x1.9660dffe6ce4ap-27, 0.0,
     0.0, 0x1.546e41b804384p-229, 0x1.11a96e628545bp-441, 0x1.6719a2017b25cp-282, 0.0,
     0.0, 0x1.b992d6e76bd58p-862, 0.0, 0x1.995d2491a8a06p-989, 0x1.97064d8f81738p-987,
     0x1.a1ec0a2303327p-58, 0.0, 0x1.0b1089e2c3a2p-148, 0.0, 0.0,
     0x1.7433c16c03cd6p-160, 0x1.da5a16a749ffp-32, 0.0, 0x1.ef530e37cb144p-52, 0.0,
     0x1.5fb0ad3fa6e04p-502, 0x1.c941ff313ded4p-900, 0.0, 0.0, 0.0, 0.0,
     0x1.87e9963b497d7p-853, 0x1.1ff83a3572ceep-528, 0x1.a6fce95a5f2b8p-240,
     0x1.f6bdf2bfdadb9p-773, 0x1.ac22788837088p-413, 0.0, 0.0, 0.0, 0.0,
     0x1.9551c0509c619p-393, 0.0, 0.0, 0.0, 0.0, 0x1.62f95ffcd40ddp-867, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4a1acf187e578p-546, 0x1.135c4936c54b2p-634, 0.0, 0.0,
     0x1.3e818266f50a6p-512, 0.0, 0.0, 0.0, 0.0, 0x1.a0d9ce3f2803ep-665,
     0x1.12ba4025ee802p-125, 0.0, 0.0, 0x1.371f3b70587c8p-226, 0.0, 0.0,
     0x1.38b002c72dc0dp-621, 0x1.073668165e827p-223, 0.0, 0.0, 0x1.c35b43674f149p-252,
     0x1.097fe2216256dp-636, 0x1.8e291a81c43bp-791, 0x1.e92baabd7b13ap-366, 0.0,
     0x1.2127b90979e7ap-834, 0x1.1e2d462027309p-607, 0.0, 0x1.8d185860dd232p-263, 0.0,
     0x1.f5cd46460bee1p-704, 0.0, 0.0, 0x1.8795cbc996037p-980, 0x1.63e613e4f3e5p-208,
     0x1.39fc3109df89ep-194, 0.0, 0.0, 0.0, 0x1.77aa31b82402p-207,
     0x1.1e0db3bae22f8p-156, 0.0, 0x1.c7e746ead2761p-1022, 0x1.85cc3a1971cd1p-898,
     0.0, 0x1.1958c579603bp-181, 0.0, 0x1.a0cb5482609e2p-548, 0x1.1db0a63e2ab12p-770,
     0x1.fbabaa2eb2aa9p-642, 0.0, 0x1.cd3414af4e411p-503, 0.0, 0x1.8280e79d2a1dcp-555,
     0x1.fc417461ae49p-56, 0x1.9f07939a9f1b8p-376, 0x1.173258a7ffda9p-814,
     0x1.665305a2bd673p-517, 0.0, 0.0, 0x1.377ea91c4370ap-472, 0x1.da469a2e70cadp-905,
     0x1.16813c35ee728p-666, 0x1.7f7ce18564486p-9, 0x1.3c7aaf15b7c4fp-979,
     0x1.c97b611aa4924p-957, 0.0, 0x1.d1f750d5ba977p-455, 0x1.89bfaf79bd023p-967,
     0x1.c18cd42a3fe83p-345, 0x1.174e1faa1e6bfp-644, 0x1.e23b89bdc3397p-825,
     0x1.12b0e8fda66a6p-663, 0x1.663697b3512b1p-691, 0.0, 0.0, 0x1.11af2fd029dc4p-522,
     0x1.cd54817ba9e6fp-612, 0.0, 0.0, 0x1.6f7d5170aa48bp-844, 0x1.4b6e73c73bdp-499,
     0x1.f493ecdf2d18fp-469, 0x1.1084f00ae7525p-647, 0.0, 0x1.38e16b9bf3b6cp-880, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ea0671527c6f3p-569, 0.0, 0.0, 0x1.eea50c96b03cfp-561,
     0x1.a59aab466b9b4p-182, 0x1.1b26b53e74c9p-824, 0x1.d9aae209283bcp-88,
     0x1.1583ed5307984p-650, 0x1.a1dec7e97776p-957, 0.0, 0x1.bdf7721725b17p-822, 0.0,
     0.0, 0x1.94ba1e3d5b74ap-938, 0x1.ae47ed3cb6ef1p-9, 0.0, 0.0,
     0x1.c24f7f59f485fp-252, 0x1.692f669b0bedep-403, 0x1.621254d5af9f5p-63,
     0x1.0aa5c1ce5308p-216, 0x1.4efe246e4bee6p-525, 0.0, 0.0, 0.0,
     0x1.4bc765249aa15p-204, 0.0, 0.0, 0x1.8426c714ae1cp-842, 0.0, 0.0,
     0x1.9d2bf624893dp-465, 0x1.d04a430338b96p-185, 0x1.d638f7f0d0f5dp-10,
     0x1.05b8ecfe8c363p-556, 0.0, 0.0, 0.0, 0.0, 0x1.a2ce8b6a5d8e5p-260, 0.0, 0.0,
     0x1.bd26df3d7818ep-561, 0.0, 0x1.b0597ad063db5p-451, 0x1.a65ce4f904495p-1012,
     0x1.89b33287c1087p-970, 0.0, 0x1.a435355079fe6p-226, 0x1.35ff76f318fd1p-335, 0.0,
     0x1.8ae19f9548f3dp-118, 0.0, 0x1.6f6a7a18d2914p-823, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1d4739a7e2804p-477, 0x1.1378be3e728fcp-1003, 0.0,
     0x1.82f4aca1f6da5p-437, 0.0, 0x1.4ea84b61b11b8p-306, 0x1.1ba029d48e2abp-1019,
     0.0, 0.0, 0x1.55d93d2d2a499p-991, 0.0, 0x1.cec77b892856ap-228, 0.0,
     0x1.d4721e062faa7p-754, 0x1.94c1e9d72e7d1p-506, 0.0, 0x1.d4443c478cc78p-78,
     0x1.661f00d4ce859p-604, 0x1.a8713d034c647p-576, 0.0, 0.0, 0x1.2312e4008489ap-834,
     0x1.0a267c5609c46p-959, 0x1.95023f49f5051p-144, 0x1.09b2b69796b18p-709,
     0x1.9883b92abfbb5p-850, 0.0, 0x1.1b965da9fd374p-887, 0x1.33a979b2e69fep-430, 0.0,
     0.0, 0x1.9b32374aa35dap-265, 0x1.ce881781cf1bdp-379, 0x1.fff99b89ab06cp-625,
     0x1.36ee3362e0292p-259, 0x1.beeb9eefa9ee1p-290, 0x1.c33776f64d732p-444,
     0x1.89d28b173d9a7p-756, 0.0, 0x1.462fe332305bbp-91, 0.0, 0.0,
     0x1.3952fb4e64168p-864, 0.0, 0x1.725521858953p-653, 0x1.72835075a70cap-461,
     0x1.984148c0d2d69p-315, 0.0, 0.0, 0.0, 0x1.e6338f72b5b9cp-105,
     0x1.dfcfe1813aaa9p-900, 0.0, 0x1.762e2eeee415cp-825, 0x1.517a4431f7664p-980,
     0x1.bed48633ef6eep-566, 0.0, 0.0, 0.0, 0x1.c10bb14edc6c5p-762, 0.0, 0.0, 0.0,
     0x1.b2d94f1cf162dp-194, 0x1.c60de847570b3p-378, 0x1.cedfc29ef145fp-259,
     0x1.8f0a9049b21e8p-905, 0.0, 0.0, 0.0, 0x1.93804466657e5p-331,
     0x1.b597d1b3e1508p-1016, 0x1.b8e4b939bac51p-552, 0x1.6cc376442e33ep-169,
     0x1.14f6f11da9a66p-981, 0x1.c8199612dddc1p-613, 0x1.bc04294612ep-679, 0.0,
     0x1.77c622214dd3dp-388, 0x1.02693bbefa994p-13, 0x1.8d4906c044974p-756,
     0x1.88e017ce97e8p-11, 0.0, 0.0, 0.0, 0x1.63108bc35295cp-523,
     0x1.cbd5dea65248fp-401, 0x1.f74b6fe551a12p-502, 0x1.237974d9cec79p-797,
     0x1.fbe1a19b90f1p-839, 0.0, 0x1.edbf4444856fp-1017, 0x1.d50a74cad7bc4p-1003, 0.0,
     0x1.73f89b72477d5p-661, 0x1.66d493813e5ep-203, 0x1.89c3d5f815b5bp-911, 0.0,
     0x1.a42a7c0ec9f76p-535, 0.0, 0.0, 0x1.bd9958667754bp-273, 0x1.6fe40c09dcd91p-209,
     0.0, 0.0, 0.0, 0x1.29871798d4158p-189, 0x1.ac851bd038fd7p-80, 0.0, 0.0, 0.0,
     0x1.c584eddf6db64p-229, 0x1.c26c4b7cb515ep-596, 0.0, 0x1.85cf727bdf947p-114, 0.0,
     0.0, 0.0, 0x1.9b81d94dcdcf8p-600, 0.0, 0.0, 0x1.4deba8670e21p-370,
     0x1.b31da8a12e4b2p-698, 0.0, 0.0, 0.0, 0x1.2f02fa938dd9dp-320, 0.0, 0.0,
     0x1.ba084847b7d35p-517, 0x1.22cafec0b1e99p-502, 0.0, 0x1.f02821f7dab6ep-36, 0.0,
     0x1p0, 0.0, 0.0, 0x1.7647d11ec196dp-565, 0x1.89dcc82e12bf7p-877, 0.0,
     0x1.bd5cf48425358p-890, 0x1.d4ccad538ac5ap-426, 0.0, 0x1.bec4fcb90df16p-969, 0.0,
     0.0, 0x1.5553233f9a176p-233, 0x1.69ecfaea5c8d2p-301, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a9d37c52390bbp-1000, 0.0, 0.0, 0x1.fba8500aca465p-478, 0.0, 0.0, 0.0,
     0x1.8622b237a4428p-578, 0.0, 0.0, 0x1.750396f1de8e2p-993, 0x1.1dd471bc7270ap-475,
     0x1.1bfea50417fbcp-409, 0x1.abe7df79bee9p-20, 0x1.c0f0e5c5b8772p-357,
     0x1.8ce18f98bc20cp-29, 0x1.758f253677961p-107, 0x1.344651026bf0fp-535,
     0x1.17e9e54ef943cp-6, 0.0, 0x1.00ad3965106fdp-149, 0.0, 0x1.b745ea44fd571p-357,
     0.0, 0x1.dbe928d93a7e1p-513, 0x1.fc0c9e4740953p-412, 0x1.a96e5c36f3633p-123, 0.0,
     0x1.a2ce3af87fbddp-877, 0.0, 0x1.c08ca315bd0e2p-88, 0x1.26780b5cf3441p-558,
     0x1.87914ee38d8dfp-151, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.46cd07a5a7d2dp-18,
     0.0, 0.0, 0.0, 0x1.e571a8952dfc9p-300, 0.0, 0x1.374df5d29860ap-916,
     0x1.37715183ab6e7p-565, 0.0, 0x1.14e1220292606p-418, 0x1.e1a311c63bea3p-472,
     0x1.1ea25a17cc2b2p-791, 0.0, 0x1.f5a92cc0dda77p-575, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0cf06e98bce26p-928, 0.0, 0.0, 0.0, 0x1.347ce3ac7df39p-828,
     0x1.5e6bf71462d66p-32, 0x1.721c798ffb28fp-1018, 0x1.e1133726f37cp-678, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.88d2dba617d19p-84, 0.0, 0x1.1f596a3bb6773p-267,
     0x1.0b3ce69d5878p-7, 0x1.89c938656c0cep-1016, 0x1.ce5f38d20fffbp-265,
     0x1.f3eecdffd1c52p-372, 0x1.6ad899d9e8dabp-271, 0x1.e61367025bf5p-902,
     0x1.a7a8c78ad6733p-527, 0.0, 0x1.baffd419028b7p-112, 0x1.fe6caa01f0145p-85, 0.0,
     0x1.8b1a42bcf33dfp-453, 0x1.477b5bac2ba27p-411, 0.0, 0x1.6ca57b1f232d2p-474, 0.0,
     0x1.ffc2537b8526ep-114, 0x1.a1a2686ebba45p-652, 0.0, 0x1.008491bdc425ep-533,
     0x1.bd509c3e0246ap-1016, 0x1.0eca426870014p-833, 0x1.3d65cd062ad9bp-244,
     0x1.abf930789e2dfp-211, 0x1.45373f673505fp-742, 0x1.2ce7ffbb44deep-349, 0.0,
     0x1.7555e40daa82p-348, 0x1.df5da1a6d59cep-415, 0.0, 0.0, 0x1.a1c15fa182da2p-851,
     0.0, 0.0, 0x1.7af0d4ca07dbap-712, 0.0, 0.0, 0.0, 0x1.946ec2c9fab34p-992,
     0x1.958bab2ca03a7p-657, 0x1.4fe79ea9dccbcp-852, 0.0, 0x1.7a87684ed4a44p-511,
     0x1.60981b67ca417p-867, 0.0, 0x1.2839ef07ec208p-236, 0x1.bdbf8bba5d95fp-130, 0.0,
     0x1.b60c9b4b5d83ep-51, 0.0, 0x1.2b6869b7171a5p-798, 0x1.ed4daa37bd947p-265, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44c8219d1a707p-141, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f4f9ac1e9016cp-555, 0.0, 0.0, 0x1.e55c18535e7e7p-507, 0x1.0783e6bf01966p-605,
     0x1.7618888f67d1ap-842, 0x1.54a9ebc7b369ep-762, 0x1.2cedf687b744fp-763,
     0x1.98fae6a9835f1p-860, 0x1.fb1349065400fp-950, 0.0, 0x1.f01329bbeea8dp-893, 0.0,
     0.0, 0x1.51e8348e4bbd5p-463, 0x1.6bd9bd02efc51p-101, 0.0, 0x1.9f75e6fdb88e2p-896,
     0.0, 0.0, 0.0, 0x1.b3bd8769d5669p-580, 0x1.4164948a42708p-913,
     0x1.eb606eeea32bbp-170, 0.0, 0.0, 0x1.16f63bc8b579cp-750, 0.0,
     0x1.636f09b940d43p-569, 0x1.1cf85c977f3c7p-81, 0.0, 0.0, 0x1.5134aacb0b529p-286,
     0.0, 0.0, 0.0, 0x1.4445ee32eab2fp-861, 0x1.185605754ee07p-130,
     0x1.db6efe6064e0ap-263, 0x1.0ae6c37e3b246p-49, 0x1.50b15567b3462p-512, 0.0, 0.0,
     0x1.751a010aeca22p-799, 0x1.1b5c05f6994a3p-35, 0.0, 0.0, 0.0,
     0x1.32cdc81906e44p-924, 0x1.e20e933ff6c4ep-56, 0.0, 0x1.b45b0a31353a2p-734, 0.0,
     0.0, 0.0, 0x1.474ed1be45dacp-871, 0x1.7ab798e10c876p-136, 0x1.fac283d128e1ap-848,
     0.0, 0.0, 0x1.82365deb0097ap-457, 0.0, 0x1.313478784d517p-151, 0.0,
     0x1.0b1d074dc51fp-64, 0.0, 0.0, 0.0, 0.0, 0x1.c5e89d6466a6ap-884, 0.0, 0.0, 0.0,
     0x1.45902f6d513dbp-531, 0x1.a8f9ffe4ce976p-893, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.02d5eac354153p-569, 0x1.c449ef4082068p-19, 0.0, 0x1.06888dbc13cacp-928,
     0x1.d90d4c8e33f69p-659, 0.0, 0x1.67ee34f7fa25cp-91
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
            tmp1 = Sleef_finz_logd4_u10kvx(tmp0);
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
    printf("Sleef_finz_logd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_logd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
