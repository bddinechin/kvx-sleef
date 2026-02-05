/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd2_u10kvx.c --function \
 *     Sleef_finz_tanhd2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0x1.9d82c58aa9c92p-480, 0.0, 0.0, 0.0, 0.0, 0x1.669095bd46834p-300, 0.0, 0.0,
     0x1.44755d5a11afp-191, 0x1.a4e6c1d1444abp-443, 0x1.a1cfdac7aa853p-168, 0.0,
     0x1.d37638874cfd7p-1020, 0x1.cf9143c940ddfp-38, 0.0, 0.0, 0x1.7661533fe71a9p-67,
     0.0, 0.0, 0.0, 0x1.051063b45433ap-260, 0x1.4d92199ae3cfdp-614,
     0x1.0b8df31b7a812p-735, 0x1.0d2d57ce51346p-388, 0x1.7ddd3d24d1b96p-834,
     0x1.81d7c6cc0f5ecp-759, 0x1.b5d92197c1544p-660, 0.0, 0x1.09adadd7c7992p-384,
     0x1.fdd8492fbe9e2p-829, 0.0, 0x1.b7f424ba0c758p-792, 0x1.b66367b114656p-271, 0.0,
     0.0, 0x1.0e94e41174534p-894, 0.0, 0x1.ecb09468af796p-683, 0.0,
     0x1.32a1b58d3f56p-906, 0.0, 0.0, 0x1.7b400395ad6d6p-191, 0.0,
     0x1.1c07319178fbap-122, 0.0, 0x1.cd1de9643553dp-764, 0x1.a34ed45115eaep-43,
     0x1.d5ff60c3259fdp-991, 0.0, 0x1.14469e0a5bfa2p-351, 0x1.26338b2b97db5p-1,
     0x1.894f2c1b5ab23p-145, 0.0, 0x1.e31229cbf5b93p-865, 0x1.01d0dc4997cccp-175, 0.0,
     0.0, 0x1.629ac8ced59f1p-545, 0x1.aa63e42f9aabcp-277, 0.0, 0x1.25070ae56f833p-161,
     0.0, 0.0, 0x1.249259e52a014p-466, 0.0, 0x1.44a132e545f5ap-457,
     0x1.5012df5206db1p-460, 0x1.b8ebe1e93bdc3p-904, 0.0, 0.0, 0.0, 0.0,
     0x1.7763093048cb5p-270, 0.0, 0.0, 0.0, 0x1.728ad37055778p-729,
     0x1.5f50521a5ed15p-929, 0.0, 0.0, 0x1.cb55d5af5b3fep-445, 0x1.53dabcc00a096p-834,
     0.0, 0.0, 0x1.5608d04f85778p-609, 0x1.e2076fd2059d4p-530, 0.0,
     0x1.4723b82d22223p-621, 0x1.65d0755012cd8p-280, 0x1.eb643fa360169p-887,
     0x1.80010f8c1e6fcp-294, 0x1.8f6f4542b7119p-1010, 0x1.abd497fc31484p-566, 0.0,
     0x1.a2731eda01573p-536, 0x1.fd020255121b2p-505, 0.0, 0x1.c8b8698355fcep-742,
     0x1.10f3a9358e34ep-228, 0.0, 0.0, 0x1.580f6d7ae85ddp-239, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1700498c6ce06p-468, 0.0, 0.0, 0.0, 0x1.e14637eadfa1ap-107,
     0x1.1162c7b200328p-151, 0.0, 0.0, 0x1.6115b40157815p-132,
     0x1.b75ad433a4ca6p-1006, 0.0, 0x1.b70eab73670c4p-222, 0.0,
     0x1.4be0d612b7ccep-420, 0x1.4d50582e67b15p-96, 0.0, 0x1.06166a8bf298ap-786, 0.0,
     0.0, 0.0, 0x1.018bdab76f4d3p-361, 0x1.43d478c1d0f31p-450,
     0x1.2e70cc7124eadp-1017, 0.0, 0x1.7cefa768eff43p-53, 0.0, 0.0, 0.0,
     0x1.e0b76e04a18d5p-694, 0.0, 0x1.41d079fb4719dp-615, 0.0, 0.0,
     0x1.70df027b47219p-156, 0.0, 0x1.8bd69cc50e171p-123, 0.0, 0.0,
     0x1.29a06305b4e15p-110, 0.0, 0.0, 0.0, 0x1.ee92f75c38548p-64,
     0x1.2d8c92d902ef9p-745, 0x1.c30e2a569c48ep-127, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8cd6b88ff68d5p-477, 0x1.58b86cfe5fbeap-370, 0x1.8648e1a924171p-39,
     0x1.50c55c04a3106p-151, 0x1.e46b7d9a0642ep-868, 0.0, 0.0, 0x1.06804d51085dcp-982,
     0.0, 0x1.933818e48df84p-88, 0.0, 0.0, 0x1.88d9c18bfc42p-1020, 0.0,
     0x1.0791a02d2173bp-848, 0x1.c1dddb027529ap-864, 0x1.059fddf0d86ebp-607, 0.0,
     0x1.97c4a56a996e9p-713, 0x1.346aec007020ap-5, 0x1.a5763d685ce95p-437,
     0x1.13efce1f413f3p-713, 0x1.033750d7b514fp-673, 0.0, 0x1.53053da87b8e1p-179, 0.0,
     0x1.057e74e43bc99p-856, 0.0, 0x1.f7a7150a62f5p-769, 0.0, 0.0,
     0x1.a87dacd6f6ca6p-18, 0.0, 0.0, 0.0, 0x1.5c863365ec4c1p-281, 0.0, 0.0,
     0x1.186e17f42f1c1p-966, 0x1.b75ef53be0fc7p-404, 0.0, 0.0, 0.0,
     0x1.37c639b587c47p-286, 0x1.3a1623202b2cp-860, 0x1.99264250dfc0cp-173, 0.0, 0.0,
     0.0, 0x1.310b22f315737p-396, 0.0, 0.0, 0.0, 0x1.8baa24472174dp-808,
     0x1.a63f8ffd62408p-207, 0x1.d7b105d594ae9p-676, 0x1.cd5c182f3f805p-457, 0.0,
     0x1.d5ebd42b9ad2dp-172, 0.0, 0x1.9a690762de6b3p-594, 0.0, 0x1.75ac76b64d451p-562,
     0.0, 0.0, 0.0, 0.0, 0x1.ab99a25150909p-1, 0x1.46c39eb42ea1ap-595, 0.0, 0.0,
     0x1.0932e49ff71f5p-846, 0x1.23e4b1a65402ep-833, 0.0, 0x1.9a2ef1f6dffadp-477,
     0x1.c850cb4d01463p-1010, 0.0, 0x1.10e5db1a31d34p-106, 0.0, 0x1.be7e10085d435p-72,
     0.0, 0.0, 0.0, 0x1.7545e1bd7e32cp-935, 0x1.51689f061e396p-357,
     0x1.b10e4116a78f1p-675, 0x1.aea760e40ac03p-250, 0x1.4bbf4a3de56d2p-94, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.957b2466ab55dp-661, 0.0, 0x1.2170d4b84792dp-321, 0.0,
     0x1.8b43e62a3cbafp-710, 0x1.df7419afeb1d8p-143, 0x1.033060ce08ca2p-181,
     0x1.2542705e90418p-120, 0x1.45de68d345ce9p-728, 0.0, 0x1.d0b51b580b9c1p-444,
     0x1.d8b3142b815d2p-772, 0.0, 0x1.d7d54d777e305p-215, 0.0, 0x1.f1e73fec4889ap-21,
     0x1.31cb509472e24p-932, 0.0, 0.0, 0.0, 0x1.504804caff059p-281, 0.0,
     0x1.55f8731459ed6p-526, 0.0, 0x1.98045517eab74p-224, 0x1.8cb960d9702b5p-400, 0.0,
     0.0, 0x1.f9f78962a0d5ep-117, 0x1.2e550f1bb5c9dp-670, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.439847793e6f5p-837, 0.0, 0x1.0f3abcabe5f9p-591, 0.0,
     0x1.191c9added6c3p-999, 0.0, 0.0, 0.0, 0x1.63a2efc47f68ap-461, 0.0, 0.0, 0.0,
     0x1.e0cd87d6aa6f1p-249, 0x1.5a5e7d26359a7p-999, 0x1.326afd04a7393p-777,
     0x1.4d3c9716243e5p-430, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6dd7efd83f7p-219, 0.0,
     0x1.da7857757404fp-148, 0.0, 0.0, 0x1.f435888e8741cp-647, 0.0, 0.0,
     0x1.dbf8129093a26p-915, 0x1.a5142fdb1b49fp-520, 0x1.95d6fb2ecd259p-418,
     0x1.41f4eb99bbcfap-312, 0.0, 0.0, 0.0, 0x1.02e41898e8db5p-305, 0.0,
     0x1.d5ef5f26a9224p-511, 0.0, 0.0, 0.0, 0.0, 0x1.f1f4b2bae2647p-137, 0.0,
     0x1.5658e020fb4ffp-529, 0.0, 0.0, 0.0, 0.0, 0x1.33c1908476ccbp-740,
     0x1.ebaadacc44623p-594, 0.0, 0.0, 0.0, 0.0, 0x1.86dccd7f8d149p-1015, 0.0,
     0x1.e120a1e9cc371p-578, 0x1.2f1725d02dab4p-809, 0x1.e8d56576aeb7fp-124,
     0x1.055ac73d83c99p-373, 0.0, 0x1.be3b1a078964p-357, 0x1.77a2f41da7b93p-583,
     0x1.447998a4752a4p-323, 0.0, 0.0, 0.0, 0.0, 0x1.a6444a130aa3cp-520, 0.0, 0.0,
     0x1.68560b29bc827p-373, 0.0, 0x1.4a2611a1c3186p-299, 0x1.972bae26ddd96p-575, 0.0,
     0x1.daa96dad912e9p-139, 0.0, 0.0, 0.0, 0.0, 0x1.3bccfb59f5637p-684, 0.0,
     0x1.8327b47ab81f2p-219, 0x1.211174f05824dp-861, 0.0, 0.0, 0x1.0d6085c3ca568p-228,
     0x1.d89f17dfd6bd9p-32, 0x1.91f6424c7eb32p-456, 0.0, 0x1.a31f2b59a2247p-531,
     0x1.66f78f62854e8p-223, 0.0, 0.0, 0.0, 0.0, 0x1.279fb7ae798f9p-395, 0.0,
     0x1.608d5b64a075p-843, 0.0, 0x1.1a74ac62ceb43p-411, 0x1.9e06fd852bc9ap-909,
     0x1.7a0ffad69ce17p-1020, 0x1.c92098cb2c0cep-89, 0.0, 0.0, 0x1.c1429bb580b59p-41,
     0x1.72b96145b0318p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.228cf1cd65453p-413, 0.0,
     0.0, 0x1.4671bbe7ca187p-868, 0x1.deac114edc332p-698, 0x1.f2a11c8547331p-370, 0.0,
     0.0, 0.0, 0x1.71eac4df6f35p-970, 0.0, 0x1.b44b5551aa869p-303,
     0x1.11b55641a70a6p-631, 0.0, 0x1.05558e0fa2897p-131, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf0f5ba07485dp-11, 0.0, 0.0, 0x1.ec6ac9e3af624p-829, 0.0, 0.0,
     0x1.bb336ccc1ab9dp-341, 0x1.5dd1c5f9c6b75p-818, 0x1.79e554e3bd4a6p-584,
     0x1.66116eade5185p-17, 0.0, 0x1.9fb72dcddffa6p-261, 0.0, 0.0,
     0x1.e69fba8db7643p-41, 0x1.8e7bd231f116dp-671, 0x1.dd389f1228b53p-19,
     0x1.d277dd754e217p-404, 0.0, 0.0, 0x1.5bb76702a17abp-635, 0.0,
     0x1.5f887e6449a2p-446, 0.0, 0.0, 0x1.a88791656a6b1p-61, 0.0, 0.0,
     0x1.58b32b3f51cf5p-622, 0x1.8dbb904fcea68p-186, 0.0, 0.0, 0.0,
     0x1.b733882f9b99bp-151, 0.0, 0x1.16c4181d53fa2p-15, 0x1.8f4c9424ff836p-322,
     0x1.7185ba62755fbp-954, 0x1.0d0adb9891065p-334, 0.0, 0.0, 0.0,
     0x1.1bb0871fc2691p-968, 0.0, 0x1.4413c545f8795p-280, 0.0, 0.0, 0.0,
     0x1.795f7b8374e65p-919, 0.0, 0.0, 0.0, 0.0, 0x1.fef091c3a6847p-712, 0.0,
     0x1.8f2b9a4c91809p-67, 0x1.fba8d3b716919p-234, 0.0, 0x1.c8dda44ed3b93p-563,
     0x1.fa82c7edc024bp-912, 0x1.d8e1cd8bd1da1p-848, 0.0, 0x1.c6228c7091c8dp-875, 0.0,
     0x1.d1d897c70e956p-857, 0x1.d423f2d66224dp-72, 0.0, 0.0, 0.0, 0.0,
     0x1.51ac2d3a3be77p-216, 0x1.53e4e7e7e318fp-36, 0.0, 0x1.6c3e8d7da5c3ep-660, 0.0,
     0.0, 0x1.c37016ec920b9p-52, 0x1.f8b5e71c494abp-52, 0x1.8df1eae8fa217p-29, 0.0,
     0.0, 0x1.6154f176eea85p-517, 0.0, 0x1.04e0195b7921ap-582, 0.0, 0.0, 0.0,
     0x1.40fdbe3ae4858p-68, 0x1.1f8b44e87b713p-931, 0.0, 0x1.142e07dde8fd7p-772, 0.0,
     0x1.e572c8f11623bp-307, 0x1.52683cd08682cp-45, 0.0, 0x1.c705bb252880cp-412,
     0x1.edc82806c8d73p-892, 0x1.fa9b3e8b9323ep-502, 0x1.14a422c9c5a89p-369, 0.0,
     0x1.0912ae4e492d1p-979, 0.0, 0x1.921cb290c2974p-269, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.59b65bc02e3a5p-185, 0.0, 0.0, 0x1.bd21940795588p-203, 0.0,
     0x1.04f5a8443c9bbp-31, 0.0, 0x1.49af00b8d8595p-793, 0.0, 0.0, 0.0,
     0x1.3c1ddb921bf31p-386, 0.0, 0.0, 0x1.e781db7a8c6c5p-525, 0x1.03d0048b9bf6fp-987,
     0x1.d915bdd60684p-519, 0.0, 0.0, 0x1.3d17e715d1ad2p-750, 0x1.4916e4d8731ddp-712,
     0x1.1e88553ea59c4p-84, 0x1.46785b74eb7ecp-231, 0x1.c19ae869d6e3dp-943, 0.0, 0.0,
     0x1.60dd3b675965dp-788, 0x1.ec0c99a527ff3p-542, 0x1.c4d310523d932p-503, 0.0, 0.0,
     0x1.339dab978516dp-887, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a9a3641b9ff92p-472,
     0x1.0007fb8b56ba9p-346, 0x1.53ffe82943948p-496, 0x1.1988864968bf8p-474,
     0x1.c6eb08010347cp-696, 0x1.0c74d2e3ef74dp-444, 0x1.f9e7682c93316p-869, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.05102b6ff7e27p-312, 0.0, 0.0, 0x1.66881522010fap-825, 0.0,
     0.0, 0x1.92230c68201e9p-575, 0x1.e628a03050a78p-507, 0.0, 0.0,
     0x1.99c3a075d78dfp-482, 0.0, 0x1.d0b80c276dcc3p-646, 0x1.cee63e374b5c4p-996,
     0x1.384302f3b3f11p-567, 0x1.d050ff213b10cp-361, 0.0, 0x1.ead223ce128e2p-769, 0.0,
     0x1.d995981a3f5d8p-878, 0x1.5770d7acfa5f6p-283, 0x1.a3c48e044a731p-966, 0.0, 0.0,
     0x1.673fa00923989p-519, 0.0, 0.0, 0.0, 0.0, 0x1.572a835c5d122p-970,
     0x1.1b0762c2d7d06p-859, 0.0, 0x1.1b87a6a540a39p-343, 0x1.b1d5ebf53887dp-684,
     0x1.fb0a1a8163617p-7, 0x1.37cb7c86e49cfp-565, 0.0, 0x1.e29de45bf0926p-504,
     0x1.30314f8103787p-648, 0x1.ab3c164fa8cc9p-548, 0.0, 0.0, 0.0, 0.0,
     0x1.3b52635826eep-777, 0.0, 0x1.a8396868c0f6bp-87, 0.0, 0.0, 0.0, 0.0,
     0x1.e87c7c2ac0166p-188, 0.0, 0.0, 0x1.49cf56d4a784fp-189, 0x1.a895d6da0612dp-528,
     0.0, 0x1.b7195fa350be4p-537, 0.0, 0.0, 0x1.99817c61b9aedp-130, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95ff96d84f1dfp-965, 0x1.ca683f3e48fdp-583,
     0x1.ad20cac64b3cbp-650, 0x1.fcc73d1af304ep-759, 0x1.0170b78cd56fcp-102,
     0x1.57bdaf86b85f9p-111, 0.0, 0.0, 0x1.cd8b746d2ec86p-722, 0x1.8de3369238773p-48,
     0.0, 0.0, 0.0, 0x1.81d84e8a39ed4p-302, 0.0, 0x1.b86ebfbb58be3p-604,
     0x1.f1003414c8b8fp-122, 0x1.ccb2d970f2f6dp-647, 0.0, 0.0,
     0x1.06c4672339775p-1000, 0x1.1057e1d619813p-403, 0x1.e6d71f4de88a2p-377,
     0x1.649e1f7a1a667p-83, 0.0, 0.0, 0.0, 0x1.dc77bb54e1239p-792, 0.0,
     0x1.f065c992b747dp-55, 0.0, 0x1.8095172b1efdap-211, 0x1.6035177840322p-619,
     0x1.c2b865d51255cp-404, 0.0, 0x1.a46662a296174p-172, 0x1.29c3e12b1c55ap-601,
     0x1.e8a1c65228df5p-616, 0x1.9ed703864b032p-560, 0x1.ca3cb2f0f6051p-1005, 0.0,
     0x1.0dfe1e99d3fdcp-930, 0.0, 0x1.a486a4c10f91p-651, 0.0, 0x1.3458cf05c30c1p-100,
     0.0, 0.0, 0.0, 0x1.dcb1f52e82369p-748, 0.0, 0.0, 0x1.f7fa669b57db9p-715, 0.0,
     0x1.e0e37c5ff36e4p-351, 0x1.4887b3a6394ffp-492, 0.0, 0x1.d12cc831d6c27p-379, 0.0,
     0x1.b536105401c6cp-68, 0.0, 0x1.eeb40b45919a6p-13, 0x1.38d29218b9189p-479, 0.0,
     0x1.2d5f41e484117p-863, 0x1.01f9d7bd653e1p-534, 0.0, 0x1.1ac3a9dc854adp-771,
     0x1.540dab6032603p-340, 0x1.b66565493b3cp-1003, 0.0, 0x1.0f40cfd34e2f9p-264,
     0x1.042b85121717ep-874, 0.0, 0x1.0a5cd836e760dp-86, 0x1.8eba0052c5a9bp-538, 0.0,
     0x1.f35425340dd7ap-188, 0.0, 0.0, 0.0, 0x1.02c48745355ddp-14,
     0x1.8df3bd3299c98p-887, 0.0, 0x1.05e0258c22dc1p-220, 0.0, 0.0,
     0x1.6de2442fc8a12p-811, 0x1.4f700d1f8a397p-157, 0x1.5197dd95491e4p-84,
     0x1.9d5fb784c76e7p-48, 0.0, 0x1.83333eddb9b8p-626, 0.0, 0.0,
     0x1.6f07f0484000dp-195, 0.0, 0x1.bad4cbbf79ef9p-320, 0.0, 0.0,
     0x1.8854254c80694p-375, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f848c95b0f01bp-732, 0.0,
     0x1.ee1b10554d151p-533, 0.0, 0x1.1f34dd96a0d2dp-657, 0.0, 0x1.5731b94545376p-289,
     0x1.9ae4989cb66a9p-538, 0x1.d1d2d98545f62p-769, 0.0, 0.0, 0.0, 0.0,
     0x1.ecd6e1b880d68p-626, 0.0, 0.0, 0x1.937f205c2d1dap-776, 0x1.ca734381a8dccp-97,
     0x1.5893074a1fe17p-450, 0x1.3994bb56162f3p-712, 0x1.bca6ec7460b42p-710,
     0x1.2c7d44e1ef3ccp-139, 0.0, 0.0, 0.0, 0x1.c8767deef0613p-979, 0.0,
     0x1.eef3059b71511p-6, 0x1.0417e0d83df51p-988, 0x1.7e24cad4275aep-897, 0.0,
     0x1.ff7252819c3e6p-355, 0x1.9317d06fe3608p-62, 0.0, 0x1.b468d241bfe5p-618,
     0x1.684f7b8b7ef45p-238, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e3983ab241817p-267, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2cc775f129eccp-532, 0.0, 0.0, 0.0,
     0x1.be93f323c82c3p-627, 0x1.5e67d5072489dp-334, 0x1.fd440280f2c55p-693,
     0x1.591031f017c33p-14, 0x1.dac3048653e02p-621, 0.0, 0x1.eae4940dfa6f4p-841, 0.0,
     0x1.6f79fc1aa28fcp-649, 0x1.77592905baaaep-210, 0x1.9735a71cda40ep-841,
     0x1.8b1ef52ca8a4fp-527, 0.0, 0.0, 0.0, 0x1.a1dd46129a94cp-478,
     0x1.82f8e6baef06ap-23, 0x1.5577b92b630e6p-298, 0x1.6773f78db0751p-341, 0.0,
     0x1.376048da85637p-731, 0.0, 0.0, 0.0, 0x1.aa3619bf98089p-1001,
     0x1.6211949add6cap-825, 0x1.3ebe3c66391dbp-122, 0x1.610fe1a968bb3p-453, 0.0,
     0x1.f7e26efe1b9b7p-932, 0x1.a11b1ca551a27p-971, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6d94cf45746p-642, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8598a50f40a13p-596, 0.0, 0x1.a70c9d201bf0ap-878,
     0x1.58a9a80f69d24p-136, 0.0, 0x1.46f743ae38843p-661, 0x1.5a845a3772a43p-524,
     0x1.b12409205c44ap-290, 0x1.5c2dad5cff36ep-212, 0.0, 0x1.ed800435b950ap-473, 0.0,
     0.0, 0x1.d6666da22f286p-815, 0x1.203de73bcc047p-346, 0x1.7c201eb902a59p-226, 0.0,
     0x1.745bae34f1266p-843, 0x1.224d849256527p-254, 0.0, 0x1.eab9c07934b48p-554, 0.0,
     0.0, 0x1.59ab9af0961f3p-537, 0x1.5440f6e481e2ep-368, 0x1.f731193f935e5p-81,
     0x1.9005c469f84a6p-707, 0.0, 0.0, 0.0, 0x1.9ff764a595231p-984, 0.0, 0.0,
     0x1.116e2eb3a2a0dp-9, 0.0, 0.0, 0x1.89973af5da7d4p-888, 0.0,
     0x1.834679315256cp-561, 0.0, 0.0, 0x1.f31bad29d0c99p-636, 0x1.079942d086566p-267,
     0x1.8ab5c2caeecfap-703, 0.0, 0.0, 0x1.4537566264b38p-855, 0x1.e1dcabd77b911p-198,
     0x1.cad2e04aad2a2p-849, 0x1.4a101bce4f59p-484, 0x1.ea3b83b8a7771p-160,
     0x1.1c3a14fa35bc9p-1012, 0.0, 0x1.d7df4363cdaefp-490, 0x1.61bd9803472f4p-551,
     0.0, 0.0, 0x1.16b8f87ecafbfp-439, 0x1.293d2b0539327p-240, 0x1.22bdb9d24c0b8p-269,
     0.0, 0.0, 0x1.3427bfd55683fp-278, 0x1.e19659d55b383p-798, 0x1.e74c1ad5e833dp-38,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4008ce021642fp-227, 0.0,
     0x1.7e6c62c894933p-674, 0x1.5ca18587910f9p-946, 0x1.48dd434a36725p-11,
     0x1.8f76cf0becf61p-586, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58b7e662ba015p-611, 0.0,
     0.0, 0.0, 0x1.698f9d2a375f2p-619, 0.0, 0.0, 0x1.5143d0dba6c6p-214,
     0x1.1d5a28411411fp-942, 0.0, 0x1.037dd3062d28fp-211, 0x1.1d7e914f630bap-262, 0.0,
     0x1.2c1db92130aaep-697, 0.0, 0.0, 0.0, 0x1.9ddad02aa455dp-573,
     0x1.e626928270872p-253, 0x1.1e9f35b01fceap-83, 0x1.05b9ca8de91ep-122, 0.0,
     0x1.3716d03031391p-882, 0x1.d55e016d71637p-988, 0.0, 0.0, 0x1.918975054a7cdp-579,
     0x1.6454ef71067f4p-541, 0.0, 0.0, 0x1.21a7ab8117defp-251, 0.0,
     0x1.e8b31df3bb1b6p-272, 0x1.7b458d54761dap-141, 0x1.db322b9f186c8p-690,
     0x1.90ff350c06b52p-872, 0.0, 0.0, 0.0, 0.0, 0x1.1fcd5e2136fc2p-334, 0.0, 0.0,
     0.0, 0.0, 0x1.a66438278faf4p-625, 0x1.43288c3965693p-847, 0.0,
     0x1.70ff1f29c2b3fp-238, 0x1.e1a4fc1c7b4e7p-464, 0.0, 0.0, 0x1.fcf3d15bba9cbp-773,
     0.0, 0x1.81ee26cdf0464p-792
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
            tmp1 = Sleef_finz_tanhd2_u10kvx(tmp0);
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
    printf("Sleef_finz_tanhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tanhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
