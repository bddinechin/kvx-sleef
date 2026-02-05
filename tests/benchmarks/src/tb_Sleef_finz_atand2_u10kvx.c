/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand2_u10kvx.c --function \
 *     Sleef_finz_atand2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.43f4bf8de8417p-275, 0x1.132f2d33ae8cap-497,
     0x1.7551d11f70446p-124, 0.0, 0x1.5e1f0d171d6dfp-320, 0.0, 0.0,
     0x1.8ea0876ab9a4cp-285, 0.0, 0x1.ca6d50656ee34p-190, 0x1.c231981a46205p-777,
     0x1.dc015b9f0cecp-647, 0x1.f6f0fd885f097p-914, 0x1.043b385211ce3p-330,
     0x1.1a87a71e18fecp-253, 0x1.8dedcb116c018p-790, 0.0, 0x1.e75ec35e9bae9p-305,
     0x1.69fda9e97df67p-767, 0x1.bd24cdaeb6c09p-220, 0x1.307c307c6d32ep-24, 0.0, 0.0,
     0.0, 0x1.0308a03b0a276p-309, 0.0, 0x1.a67d5b198fdacp-296, 0x1.94ec6b30dff63p-546,
     0x1.6e62144d8a37ep-1010, 0x1.8ae55733cca36p-86, 0x1.51dc8ff6108f1p-72, 0.0,
     0x1.07d7389e18516p-366, 0x1.1c9e036fde628p-727, 0x1.4600e24d27c01p-325, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f64e2542ada8ap-318, 0.0, 0x1.dca53410d349cp-760, 0.0,
     0x1.56a62ee39fd76p-631, 0x1.b872772ed4f32p-48, 0x1.cdd8e0e46e704p-80,
     0x1.e935113cd789bp-651, 0.0, 0.0, 0x1.2709eeb936d49p-238, 0x1.00a67b771895bp-519,
     0.0, 0.0, 0.0, 0.0, 0x1.cf295639d325fp-162, 0.0, 0.0, 0.0,
     0x1.7d34b626ac5d7p-363, 0.0, 0x1.c3da3baaca74ap-545, 0.0, 0.0,
     0x1.6cd130c252d87p-399, 0.0, 0x1.b0ddc968a8f5ep-935, 0x1.ffdbb2a66c9f8p-21,
     0x1.7174955f4da39p-968, 0.0, 0.0, 0x1.f9e340e67d3c1p-324, 0.0,
     0x1.3414baecee079p-369, 0x1.ca19e214df553p-385, 0x1.07b3ae4ec5aaep-417,
     0x1.8dee0092bb05ap-998, 0.0, 0.0, 0x1.8ef97ea65af92p-912, 0x1.c5e6223d137f1p-705,
     0.0, 0.0, 0.0, 0x1.d396d5671210ap-803, 0.0, 0.0, 0x1.82d1fa37c2ecdp-314, 0.0,
     0.0, 0.0, 0.0, 0x1.58c1c24131c6p-456, 0.0, 0x1.3d07eecf33323p-407,
     0x1.e69f64c3c81e5p-419, 0.0, 0x1.3762d206b0f7dp-437, 0.0, 0x1.fb180d979a2d7p-413,
     0.0, 0x1.73c003de7ffeap-441, 0.0, 0x1.ed3230145d849p-271, 0.0,
     0x1.65fe0ab4ef993p-685, 0x1.ad5506dfb05d3p-843, 0x1.258a624b49bp-839,
     0x1.1b8e023ac3be1p-856, 0.0, 0.0, 0.0, 0.0, 0x1.9ff66aecaca2ap-921,
     0x1.5d24ae5199802p-574, 0.0, 0x1.bf4b9422e282ap-349, 0.0, 0.0,
     0x1.5a5a4dd4cb693p-748, 0.0, 0x1.97855a95c0a84p-269, 0x1.927deea36b4e6p-84, 0.0,
     0.0, 0x1.659cbc6427a11p-38, 0x1.ce194dfe68776p-540, 0x1.9bac16a9766d6p-531,
     0x1.ae7a8860a1192p-950, 0.0, 0.0, 0x1.71479e81ede02p-281, 0x1.47831385abcf4p-924,
     0.0, 0.0, 0.0, 0x1.ff650a2fce6cdp-480, 0x1.6685fca5d11e5p-983,
     0x1.5a6b82d45e601p-864, 0x1.87e4d45e2aec2p-496, 0.0, 0x1.f112e6dfcddf5p-118,
     0x1.78f5e9209f67cp-428, 0x1.e2925468d9243p-965, 0.0, 0.0, 0.0,
     0x1.b24bf9ea80f39p-657, 0.0, 0.0, 0x1.224c65d696db2p-71, 0x1.bd1f8b30234c5p-472,
     0.0, 0.0, 0x1.7ae5f84fc1542p-521, 0.0, 0.0, 0x1.f46d52f590eefp-902,
     0x1.eca2ea2a2c22p-585, 0x1.92bbc5b0e1dfp-57, 0x1.de7560100b0fcp-1006, 0.0,
     0x1.c6787768523a5p-90, 0x1.8239890715e78p-509, 0x1.bf9e3da2191a3p-935, 0.0, 0.0,
     0.0, 0x1.81606395a6ae6p-612, 0.0, 0.0, 0.0, 0.0, 0x1.e44961f9201ep-171, 0.0,
     0x1.25db2674dfea4p-417, 0.0, 0x1.60f16b046ec87p-113, 0x1.c0d3f6d93fe31p-767,
     0x1.e7705723a0c48p-618, 0.0, 0x1.03df9ea3d1654p-624, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.19bafa6d1da73p-721, 0.0, 0.0, 0x1.2a81072d96bcbp-274,
     0x1.ca36e0c2d552cp-944, 0x1.ee344f525c5b9p-937, 0x1.48a2b8db135e4p-983,
     0x1.f48bd7256939ap-635, 0.0, 0x1.ee48c1420ba32p-331, 0x1.642ecfaa6897p-583, 0.0,
     0x1.ef084f4796049p-52, 0.0, 0x1.d045de3464d69p-161, 0x1.2f7321572e873p-745,
     0x1.64e01675844c9p-317, 0.0, 0x1.adf372388ea3ep-96, 0.0, 0x1.40fc9559874d5p-127,
     0.0, 0.0, 0x1.e96388cc09ac3p-691, 0.0, 0x1.4502f36e12055p-645,
     0x1.87f967cde34fep-86, 0.0, 0.0, 0x1.0335a7397116ap-974, 0x1.56011b7218ad5p-875,
     0x1.8b2c6745a11aep-344, 0.0, 0.0, 0x1.a416eded369b3p-562, 0x1.371754244e94ep-911,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cec5ab576595cp-899, 0.0,
     0x1.127ac11e488a1p-895, 0.0, 0x1.861c2bca43c86p-534, 0.0, 0.0,
     0x1.561f0ffcb523cp-109, 0.0, 0.0, 0.0, 0x1.87ff17eb431a8p-174,
     0x1.a72d987f90e87p-765, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26e7ff3349361p-574,
     0.0, 0.0, 0.0, 0x1.42f11c2015127p-985, 0x1.2c15d33070567p-109, 0.0,
     0x1.3dc41887a98aap-136, 0.0, 0x1.81ad3c09c83eap-908, 0.0, 0x1.f7de462c22131p-682,
     0x1.24a84d6700d05p-598, 0.0, 0.0, 0.0, 0x1.34c33dadd3adcp-756, 0.0, 0.0,
     0x1.34eb4feebbb29p-808, 0.0, 0.0, 0.0, 0x1.64a5aa8f00802p-25, 0.0,
     0x1.ef72f1ecf44cdp-868, 0.0, 0x1.d116d07dfbe0ap-58, 0.0, 0.0, 0.0,
     0x1.8292d661f69cep-639, 0x1.ad029ba168e22p-198, 0x1.210209c0dd0a9p-180, 0.0,
     0x1.4a36269bc416ap-920, 0x1.b3e93d6417ee8p-990, 0x1.345d80d8e85e5p-291,
     0x1.b8e54be66199p-939, 0x1.46fb35036195dp-782, 0x1.164f1ba775374p-120,
     0x1.7915de799b1e1p-791, 0x1.593b2a9ce76a9p-675, 0.0, 0.0, 0.0,
     0x1.50670424a1cdcp-797, 0x1.f8ddd61a8d45ep-968, 0x1.ae1d5d710d7a1p-202, 0.0,
     0x1.82ee1619d4682p-810, 0.0, 0x1.71a5e5d5b66a9p-306, 0x1.4293c5621fe08p-806, 0.0,
     0.0, 0x1.feec145e335c8p-558, 0.0, 0.0, 0.0, 0.0, 0x1.474a9d54de3d1p-594, 0.0,
     0x1.499f8827a2dbcp-873, 0.0, 0.0, 0x1.db64c3efab738p-445, 0.0,
     0x1.934a48e31eeafp-327, 0.0, 0x1.8a4c929e16c24p-383, 0.0, 0x1.fce94e8c9d40ep-597,
     0x1.1a109498f0ea7p-138, 0x1.cd59edb8ec10ep-344, 0.0, 0.0, 0x1.28f10207a3097p-556,
     0.0, 0x1.1cf2a4b3bf229p-843, 0x1.10e129675633ep-751, 0x1.fe90b87966947p-114, 0.0,
     0x1.26b5282e4dc12p-537, 0x1.2ed756e1d5fa3p-80, 0x1.f26e9fe0c3a33p-340,
     0x1.485e9c7bad93p-415, 0x1.b8aa793a0af5bp-838, 0.0, 0x1.a3c3c40d00dadp-118,
     0x1.c9410971927bp-130, 0x1.9c4c5559414c4p-390, 0x1.a121622077349p-14,
     0x1.ec1258bd8da6dp-969, 0.0, 0.0, 0.0, 0x1.a7f508e0f4c4p-886, 0.0, 0.0, 0.0, 0.0,
     0x1.d84005d2feecap-757, 0.0, 0.0, 0.0, 0x1.50c077af507eap-961,
     0x1.ca26d197b26e3p-44, 0x1.33da9035d47adp-115, 0x1.832baba4e0893p-23,
     0x1.2dc36856ef78ap-794, 0.0, 0.0, 0.0, 0.0, 0x1.588e3afd40ec2p-715,
     0x1.23c8234f7f71p-88, 0.0, 0.0, 0.0, 0x1.7a8e7e927105ap-172,
     0x1.165a05dbad82cp-934, 0.0, 0.0, 0x1.6ea7b779ae8cbp-583, 0.0,
     0x1.09689596e8388p-83, 0x1.d82ac5c842927p-376, 0.0, 0x1.0ca5ec795698cp-460,
     0x1.296bc2488441p-788, 0x1.2bc5e670afef2p-740, 0.0, 0.0, 0.0,
     0x1.3d8163027402cp-151, 0x1.efe9760ec568cp-603, 0.0, 0x1.cb96e011dfb24p-599, 0.0,
     0.0, 0.0, 0x1.ccbb0850cc74ep-176, 0x1.b777e10f89d76p-441, 0x1.d1a6e80f49a91p-497,
     0x1.dbc9a776c859p-474, 0.0, 0.0, 0x1.38940bb5dbaddp-437, 0.0,
     0x1.940ae6df25c13p-151, 0x1.1994b19adb811p-1006, 0x1.e3c50ac624133p-102,
     0x1.9948bfb63b017p-592, 0x1.cc1d9716edafcp-519, 0.0, 0x1.6e36b7e1530acp-568, 0.0,
     0x1.57d174487fe0ep-945, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd5b968f44121p-63,
     0x1.37628f3eb53edp-601, 0x1.7467afcef9592p-521, 0.0, 0x1.4ac447a858be6p-571, 0.0,
     0x1.f2eb8177df0e6p-222, 0x1.364f86f526e69p-248, 0x1.ac6a50e2f2a28p-743,
     0x1.ec392fe1b7815p-817, 0x1.04d34249dcbcfp-564, 0x1.dc40787cf76c1p-273, 0.0,
     0x1.7c20a76668e4p-355, 0x1.d1cd6f8247aa1p-221, 0x1.f99f645188c41p-738, 0.0,
     0x1.d102c5d95cff5p-490, 0x1.6a4b1ff77f2cap-338, 0.0, 0x1.0eb09c827bcf1p-92, 0.0,
     0x1.08e4936b852e5p-173, 0.0, 0x1.cec8f561db188p-816, 0x1.9fe6897d17fcp-173,
     0x1.fa800a46f7ea7p-362, 0.0, 0x1.738e455a62f3p-627, 0x1.1465ed798f536p-306,
     0x1.7baea1c6b32aep-708, 0.0, 0x1.660f555146adep-550, 0x1.8b0380c638419p-256,
     0x1.1423f9977e787p-854, 0x1.7d26584e3ca0cp-729, 0.0, 0x1.af86162512264p-315,
     0x1.26e765a53413dp-440, 0x1.c36d88b58ba2dp-76, 0.0, 0.0, 0.0, 0.0,
     0x1.0ca42aff6998bp-861, 0x1.375fce46c3dc4p-802, 0x1.f9fb9430ba55p-983,
     0x1.2683fad17e199p-529, 0x1.b06ebd483859cp-924, 0.0, 0x1.98c4b967a7eadp-166, 0.0,
     0.0, 0x1.e1d4f2948637bp-431, 0x1.477a4a859ed5p-200, 0.0, 0x1.e256e6cd30dc8p-289,
     0.0, 0.0, 0x1.16ec74069c4ap-70, 0.0, 0.0, 0.0, 0.0, 0x1.006de08e7f08fp-385,
     0x1.f2ad2c9dca97ep-403, 0.0, 0x1.30fd3c51da4e7p-61, 0x1.b97c6d2ebf63ap-730,
     0x1.d75f1b585a23bp-115, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.739242615f72ep-268, 0.0, 0x1.810ebe4ac665bp-925, 0.0, 0.0,
     0x1.78f204250fa95p-63, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1ef3fbd27e1ep-5, 0.0,
     0x1.22378abd4d5c1p-7, 0x1.612b2f1b3313fp-279, 0x1.558b93f98351ep-277,
     0x1.bb6e32fa7f11p-692, 0.0, 0x1.baa64fc861f9cp-41, 0x1.7e6a3eec61c7bp-236,
     0x1.f1caaaec93009p-327, 0.0, 0x1.3d499fdd578b1p-908, 0.0, 0x1.da90e47c59ad3p-31,
     0.0, 0.0, 0x1.77322742c5cc1p-652, 0x1.c5142377bcd68p-956, 0.0,
     0x1.38f5ee0199e2fp-233, 0.0, 0x1.4a6ee4cdac5eap-589, 0.0, 0.0,
     0x1.149d816401ebfp-343, 0x1.2e1b749fbdddbp-857, 0.0, 0.0, 0.0,
     0x1.426967240c6a4p-633, 0.0, 0.0, 0x1.2cf61b05975cbp-90, 0x1.fa1e34211b1e7p-358,
     0.0, 0x1.61ef37084b33dp-480, 0.0, 0x1.503927e7fa40fp-83, 0x1.fc35de64aa842p-901,
     0.0, 0.0, 0x1.acbfcc09a1f1ep-992, 0x1.765e840a7fe2ep-609, 0.0,
     0x1.958170f481131p-414, 0x1.c4be0fc1aeee2p-272, 0.0, 0x1.4230bbab31638p-272, 0.0,
     0.0, 0x1.4579f1d84a5dcp-301, 0.0, 0.0, 0x1.f1836df93c92ap-143, 0.0, 0.0,
     0x1.0daccc85946e9p-550, 0x1.9c4cd60bf404ep-71, 0x1.c17b5c00cead5p-317, 0.0,
     0x1.cda8396d596a8p-466, 0.0, 0.0, 0x1.047f3b44ad9a8p-519, 0x1.685006dc002dcp-378,
     0.0, 0.0, 0.0, 0x1.7876ecacaa9d8p-422, 0x1.2dd3d6f940fa2p-518,
     0x1.870fed14c6e1dp-408, 0.0, 0x1.b13b9cba5e22ep-590, 0x1.b102e49ec2a13p-684,
     0x1.61a1a991e2532p-295, 0x1.adaed7bbbafd9p-39, 0x1.01e9095d53a7p-108,
     0x1.dd07f5267d7b9p-274, 0.0, 0.0, 0x1.092f77ddd7e9ep-500, 0.0,
     0x1.d00fbbd94b618p-224, 0x1.abfd0607772d3p-445, 0x1.fbfe5e0158dcp-783, 0.0,
     0x1.b8bf501bee857p-856, 0.0, 0.0, 0x1.934386ca5e3dfp-534, 0x1.1bad93cbcc228p-715,
     0.0, 0.0, 0x1.88f784fb1bcccp-663, 0x1.67fc44a3c7907p-459, 0x1.e9d3e497a7451p-513,
     0x1.cec2477c13c43p-656, 0x1.37fba31077f9fp-563, 0x1.76339f47a7aebp-492,
     0x1.6f5867536a61fp-829, 0x1.be60b7cf7964fp-269, 0.0, 0.0, 0x1.36e0f2a949d47p-437,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c5ae048608b6p-320, 0x1.0c4154509ceb2p-27, 0.0,
     0.0, 0x1.f5b21c1053e9fp-22, 0.0, 0.0, 0x1.442585ead7497p-53,
     0x1.192bba290915ep-84, 0x1.2e820c1e4f9b9p-128, 0.0, 0x1.f1237fb6cb54p-74, 0.0,
     0.0, 0.0, 0x1.472dd5fbcafebp-325, 0x1.b6a93e4dd5ecep-691, 0x1.a06a6c29d074ep-517,
     0.0, 0x1.b5eb24ba73378p-76, 0x1.010d87d7e2ca7p-708, 0x1.52937f4e40b7ep-15, 0.0,
     0.0, 0.0, 0x1.700101c154116p-19, 0x1.bd04e84b753bp-1000, 0x1.d49a5fd69db0dp-769,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.993715c2e41bap-278, 0.0,
     0x1.196b73443119ep-242, 0x1.128ffd9e4eca4p-5, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98c054df5b819p-789, 0x1.8149000b03a3p-374, 0x1.734b333ed6188p-939,
     0x1.4fd79d0a32103p-978, 0.0, 0x1.acb29c2c281e6p-620, 0.0, 0x1.6eecf7bb9adbep-41,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5635b669c177p-93, 0x1.04a2f099c5d35p-815,
     0x1.7c0aaf7f20efdp-494, 0.0, 0x1.63028ede498f6p-1002, 0.0, 0.0,
     0x1.6b3f7b5687632p-714, 0x1.8b0367aec693fp-997, 0x1.6cde68d1af4ccp-2,
     0x1.91a0b184e34cdp-213, 0.0, 0.0, 0.0, 0.0, 0x1.69e8357bb6542p-296, 0.0,
     0x1.ff95b94407db1p-1001, 0.0, 0.0, 0x1.1d96a17e16a75p-203, 0x1.4b7bb95d8ccap-855,
     0x1.d95ea2064aabfp-560, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42eaca7e6b708p-937,
     0.0, 0.0, 0x1.75eb3c0c17edfp-525, 0x1.248fcb4d7feabp-16, 0.0,
     0x1.0b81ba0641c1ap-536, 0.0, 0x1.0b10770468e07p-253, 0x1.851c051bd1328p-39,
     0x1.b45b0f946985dp-625, 0x1.828c594c91c02p-641, 0.0, 0.0, 0.0,
     0x1.c05b0f5b8633dp-326, 0x1.079cc15f2463fp-675, 0x1.a8ab0637dfb7ap-182, 0.0,
     0x1.eab85c5545e9fp-331, 0.0, 0x1.97b45394665e9p-135, 0x1.d7eb1c4424614p-609, 0.0,
     0x1.55d1c98e09193p-856, 0.0, 0.0, 0x1.eeaf9c97e3934p-916, 0x1.536b7cad55f7ap-576,
     0x1.1b0dea9ccdf9ap-263, 0.0, 0.0, 0.0, 0x1.7a1c7f5390bfp-290,
     0x1.b7cf4c9bd725cp-357, 0x1.29e5ca28715a4p-228, 0x1.0603080e64963p-958, 0.0,
     0x1.a8ba9e04a222fp-337, 0x1.bcc4651d82544p-855, 0x1.30d976a97bbcp-263, 0.0, 0.0,
     0x1.4f99c36294b9cp-356, 0.0, 0x1.14b1050d54865p-337, 0.0, 0.0,
     0x1.ee67d0dc40e74p-256, 0x1.ac62df71b0131p-630, 0x1p0, 0x1.720ebdec98552p-717,
     0x1.c749751089e27p-409, 0.0, 0.0, 0x1.6e975bd4b25e9p-109, 0.0, 0.0, 0.0,
     0x1.680dab7f1b52dp-631, 0x1.3a62508e8422bp-295, 0x1.efd32bb6c083p-740,
     0x1.627ff474b99a8p-637, 0x1.7adc7d7ff6518p-764, 0x1.1e04b4c6e16f1p-515, 0.0,
     0x1.821710633d5d9p-118, 0.0, 0.0, 0x1.b14b4df410cf3p-663, 0x1.f9c9423458fc4p-451,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1131fce77539dp-77, 0x1.12ac7d985ccedp-844,
     0x1.2bc2c11367e1fp-73, 0x1.68a4daa004495p-868, 0x1.6e295c59404abp-618, 0.0,
     0x1.2f99c8a4c632dp-825, 0x1.c3e47e0bc434ep-309, 0.0, 0.0, 0x1.edd637019b784p-570,
     0.0, 0.0, 0x1.5b52863037b63p-269, 0x1.71d974f8fcb7fp-224, 0x1.56d1afd12c0c9p-586,
     0.0, 0.0, 0x1.00f87557f2221p-865, 0.0, 0.0, 0.0, 0.0, 0x1.d09f6bc8f129ep-196,
     0.0, 0.0, 0x1.9de0dcd8142eep-746, 0x1.a6df00544eb53p-620, 0x1.4dbb1ec29b952p-710,
     0.0, 0.0, 0x1.e91f6729bd71fp-675, 0x1.1568c1256adf4p-199, 0.0, 0.0, 0.0,
     0x1.1cb414cf6704ap-626, 0x1.97922874f5403p-988, 0x1.057c18b88f164p-122,
     0x1.b664f4862b191p-990, 0.0, 0x1.0f4b3085b4ec1p-559, 0x1.87ce8017cd8c3p-660,
     0x1.0b4924ab8bc89p-569, 0x1.3b7380692a0c1p-581, 0x1.674b9974d3abp-43, 0.0, 0.0,
     0x1.43712654eb7cp-692, 0x1.d4cdc353c1049p-610, 0.0, 0.0, 0x1.83b124ce24f87p-747,
     0x1.a61f6c9703194p-27, 0x1.c8c821e1e710ap-164, 0x1.121637205f054p-208,
     0x1.7069b9ff91921p-889, 0x1.37a5aa427450bp-963, 0x1.88e06d16a2785p-982, 0.0, 0.0,
     0x1.ce97a45f5b771p-492, 0.0, 0.0, 0x1.6c4b90074f287p-246, 0x1.27fc84943057dp-373,
     0x1.71a731fa0edbbp-60, 0.0, 0x1.694ba255247abp-79, 0.0, 0x1.7f66f057e8b6ep-992,
     0x1.70704101e470cp-351, 0.0, 0x1.7602603717af6p-382, 0x1.5380a76e6d06p-362, 0.0,
     0x1.03f94cbf75784p-141, 0.0, 0.0, 0.0, 0x1.d651d4fa0032ep-427, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7787ea8da6971p-914, 0x1.ca0ad90853ac2p-868, 0.0, 0.0, 0.0,
     0x1.dd8fbe289a383p-247, 0x1.ca52bcb1a2a36p-161, 0.0, 0x1.325aa256e9bdap-300, 0.0,
     0x1.4ef1657a3990ap-290, 0x1.1c00145927ca6p-606, 0x1.a62fb4dddf31cp-458, 0.0, 0.0,
     0.0, 0x1.abae8fdbd69dep-198, 0x1.f2b529f2864c5p-50, 0x1.1f9bba2bd0114p-723,
     0x1.de71ad6c63ce5p-493, 0x1.268a0609a1a1ap-974, 0.0, 0x1.d42b4a98654c3p-336,
     0x1.ab60ba21867aap-687, 0.0, 0.0, 0.0, 0x1.edf00fe70087p-172, 0.0, 0.0, 0.0, 0.0,
     0x1.517f115553d61p-1017, 0.0, 0x1.8f29fd7ff1f85p-676, 0x1.bb16d19c67588p-139,
     0.0, 0.0, 0.0, 0x1.88d7125b09ce8p-845, 0x1.83b8b0509351fp-629,
     0x1.a902d09a5ce7p-486, 0.0, 0x1.131eee07735f1p-413, 0x1.ac7010e16af9ep-848,
     0x1.e9e214b7469b8p-48, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a531ef4c8f84p-652,
     0x1.8a344f2b88ae6p-984, 0x1.b71ea259f0d8dp-210, 0.0, 0x1.d4ea4af282d51p-795,
     0x1.abb2e7ab24ef6p-209, 0.0, 0.0, 0x1.5fa35dc6f8b61p-272, 0.0, 0.0, 0.0,
     0x1.982719cf859dbp-719, 0x1.335a84df211e9p-901, 0.0, 0x1.48955096d3536p-208, 0.0,
     0x1.b023bc3579cbp-632, 0x1.fd2b9621f4f31p-18, 0.0, 0x1.af61169333e4ep-986,
     0x1.1e2eb36e291ccp-919, 0x1.402473adec381p-807, 0.0, 0x1.12fe6005f5396p-328, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e43ea997aefa3p-183, 0.0, 0x1.42ef1143fa8cp-281,
     0x1.45e33945b65ccp-72, 0x1.5a42fbf8f4843p-167, 0x1.3b2ad6825d0b8p-880, 0.0, 0.0,
     0.0, 0x1.bac98a8648509p-711, 0x1.c9ed5566c2487p-980, 0.0, 0.0,
     0x1.796a57730899fp-235, 0.0, 0.0, 0.0, 0x1.96b2b434b7feep-906, 0.0,
     0x1.729c204fa425bp-286, 0.0, 0.0, 0.0, 0x1.3f77c1a3426acp-889, 0.0,
     0x1.a034fc86b18b5p-446, 0.0, 0.0, 0.0, 0.0, 0x1.da9351a010759p-1018,
     0x1.288bffa923e1cp-721, 0.0, 0.0, 0.0, 0x1.e7a9273cae9c1p-913, 0.0,
     0x1.31958413d1f7cp-759, 0x1.7f4b12cf6d33dp-466, 0x1.1d0376029713dp-547, 0.0,
     0x1.49cf86afa9da1p-481, 0x1.8a495d28137c3p-411, 0.0, 0.0, 0x1.5932454aa4ae7p-669,
     0.0, 0.0, 0.0, 0x1.2eae5c28e3429p-194, 0.0, 0x1.3e92ae35d6dd1p-658,
     0x1.92f67eaceb81fp-59, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_atand2_u10kvx(tmp0);
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
    printf("Sleef_finz_atand2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_atand2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
