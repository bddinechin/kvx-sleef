/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind2_u35kvx.c --function Sleef_asind2_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.8669c0535d509p-727, 0x1.68d62986e1895p-549, 0x1.f9494c1cf43cfp-226,
     0x1.27ce67cd662fdp-82, 0x1.749357532e649p-583, 0.0, 0x1.2a7e082c536fcp-218,
     0x1.966a0a1f52cb5p-781, 0x1.a3b668e1db7dp-997, 0.0, 0x1.cfa3c847f5037p-650, 0.0,
     0x1.d2c8585055733p-615, 0x1.d66eabb29c47fp-629, 0.0, 0.0, 0.0,
     0x1.c84668d3a184bp-847, 0.0, 0x1.33c557725ee4ap-29, 0.0, 0x1.c321010308b4ep-703,
     0x1.235b37f4d92efp-224, 0.0, 0x1.e5e7764c71d5dp-66, 0.0, 0x1.3b6cfe7267f56p-938,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fd4abdd49abap-82, 0x1.f074fa2bef531p-928,
     0x1.50e5dbf4909fdp-678, 0x1.e9da173c5c57cp-829, 0.0, 0x1.c047638d493b8p-15,
     0x1.dc4ee98b42328p-693, 0x1.9411f870b9146p-128, 0.0, 0.0, 0.0, 0.0,
     0x1.623fa489e5404p-814, 0x1.15831eac50c69p-954, 0x1.070a0594299fdp-787,
     0x1.c24544391dba3p-182, 0x1.f448cbf8f72ffp-351, 0x1.5caab76acf518p-708,
     0x1.e4eb0009f2493p-650, 0.0, 0x1.8f2863a8b22c4p-765, 0.0, 0.0, 0.0,
     0x1.9dd7755d47e9p-297, 0x1.4f19bd82a4e6ep-372, 0.0, 0x1.d40e02368d683p-567,
     0x1.f7e117a92d39bp-522, 0x1.874c7768f808ep-618, 0.0, 0.0, 0x1.437632f2295dep-239,
     0.0, 0x1.8ae2f83184158p-874, 0x1.bcfd97a719becp-80, 0.0, 0x1.cfc445a775d33p-321,
     0.0, 0x1.9dcbe10429f83p-919, 0x1.1c38b95da8d9ep-113, 0.0, 0x1.89c64e01dcd33p-919,
     0.0, 0.0, 0x1.78185f9ee5e86p-425, 0.0, 0x1.3a0f04dea46f6p-360, 0.0,
     0x1.54409d475c71fp-102, 0.0, 0x1.92aed6b8d1d08p-47, 0x1.07cd1e9271728p-26,
     0x1.4392d383cafebp-206, 0.0, 0x1.652c08413655p-278, 0x1.70afbc1f69188p-668, 0.0,
     0.0, 0.0, 0.0, 0x1.717897a89f47ap-935, 0x1.0975b6727ebbfp-978, 0.0,
     0x1.046365816c2cep-585, 0.0, 0x1.01246405ec36ap-795, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c94ab4c6f262fp-150, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f3223c28d281p-562, 0x1.6ea5f5889410bp-624, 0x1.a3bdd7ab9ebbbp-715,
     0x1.f3e071e3c577ap-151, 0.0, 0x1.e40daa5bbc2f7p-811, 0.0, 0.0,
     0x1.4af40faa26107p-542, 0.0, 0.0, 0x1.a3223c41b5868p-534, 0x1.ffa0ed0b8ccb8p-28,
     0x1.e51ba0d793638p-797, 0.0, 0.0, 0x1.2f837acc07ebp-372, 0.0,
     0x1.fdc84ee834094p-405, 0x1.ec5e5c0490381p-186, 0x1.1d8cf93769effp-19,
     0x1.60cca584f84fdp-503, 0.0, 0x1.d12f7c1587043p-529, 0.0, 0x1.6b12f054123f7p-46,
     0.0, 0x1.3cbdf19396a85p-837, 0.0, 0x1.5fa5f127cb9d8p-240, 0x1.96a926dae9eb8p-610,
     0.0, 0x1.d45cec008c03p-257, 0x1.5a718897ffbbfp-353, 0.0, 0x1.c6b6ade0c80eap-595,
     0.0, 0x1.2c997325ae0fdp-239, 0.0, 0.0, 0.0, 0x1.0b1b6d4c2fea3p-742,
     0x1.6c4ee3126cee3p-494, 0.0, 0x1.abd530988469dp-957, 0x1.15a59da1c1daap-371,
     0x1.7b8005448f54ap-191, 0.0, 0x1.1208d88b2eaa3p-794, 0x1.7d1974e1622c9p-686, 0.0,
     0.0, 0.0, 0x1.9a9fe4a61775bp-629, 0x1.c7d95699706f3p-64, 0.0,
     0x1.3fdac2790f662p-235, 0.0, 0x1.5d99c57031d78p-960, 0x1.0b6043e6ee727p-478,
     0x1.053e9b3fbc1acp-163, 0.0, 0.0, 0x1.644a9018979e6p-409, 0.0, 0.0,
     0x1.ddb7f03cf8639p-19, 0.0, 0.0, 0x1.66d6ef83b96c7p-197, 0x1.16e8510e392adp-661,
     0.0, 0.0, 0.0, 0x1.66ac65f2d4464p-875, 0.0, 0.0, 0.0, 0.0,
     0x1.5cb1bf987aeb1p-127, 0.0, 0x1.98176c7438d32p-673, 0.0, 0x1.86a0d3695c85p-787,
     0.0, 0.0, 0.0, 0x1.9d2c61dfdf055p-384, 0.0, 0x1.030d9e67ed266p-814, 0.0,
     0x1.f61822028c427p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b76058640f51ep-206,
     0.0, 0.0, 0x1.6ef001a5f6b5bp-91, 0x1.8af13aa5ba06bp-177, 0x1.d264bd8305e8ep-260,
     0x1.a0404feb12fa8p-43, 0x1.55611e28e10eep-176, 0x1.25f72779b216ep-937,
     0x1.aa2bf2be35eeap-304, 0x1.bdb561a8c231ep-949, 0.0, 0.0, 0x1.96d3c8a0eff38p-752,
     0.0, 0.0, 0x1.a189c8cdbfc24p-1006, 0x1.a90761c60b3bfp-532,
     0x1.f2509038e6c6bp-851, 0x1.d8349f148594p-915, 0x1.dc6f91536b5f4p-446, 0.0, 0.0,
     0.0, 0x1.7a73699951536p-583, 0x1.477c472384ca1p-102, 0.0, 0x1.d736fd1b70a17p-113,
     0x1.c5ce83bc75339p-984, 0.0, 0.0, 0.0, 0.0, 0x1.da774ed04633bp-480,
     0x1.cf27c96a72809p-211, 0.0, 0x1.8f059eb6cad6bp-689, 0.0, 0x1.304f251d442a8p-47,
     0.0, 0x1.a9c169844fb18p-12, 0x1.f32d9f5cbb1a3p-864, 0x1.122ac6e781c53p-219, 0.0,
     0x1.838818eb4c886p-284, 0.0, 0.0, 0.0, 0x1.beed75a6fef33p-861, 0.0, 0.0,
     0x1.af28c58728288p-159, 0.0, 0.0, 0x1.2d3a091b1f6c7p-317, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6163979900c22p-695, 0x1.70ebdbf0e1ab8p-222, 0x1.e0751c26f0c48p-90,
     0.0, 0.0, 0x1.23293548f48aap-586, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b065679089e17p-17, 0x1.8a739fce304ap-473, 0.0, 0.0, 0x1.dc3342bf93eaep-189,
     0.0, 0.0, 0x1.8547097c924e6p-607, 0.0, 0.0, 0.0, 0.0, 0x1.ec8d4e09380f1p-46, 0.0,
     0.0, 0x1.9904aed7246f8p-78, 0x1.bdf76c85ca50bp-787, 0.0, 0x1.73a320b16cc3bp-896,
     0.0, 0x1.206f95bc83e5ap-268, 0x1.6757e06e273ddp-176, 0x1.5e9569690b3bep-588, 0.0,
     0x1.3df22e3ff1c36p-246, 0x1.c58ea53ab03f9p-501, 0.0, 0x1.813fefa0849b6p-378, 0.0,
     0x1.aaa316489711ap-976, 0.0, 0x1.7d722cc536b36p-456, 0.0, 0x1.2b7b08a8292c7p-777,
     0.0, 0x1.c69c16cfa2ed1p-439, 0x1.687b572e09c71p-688, 0x1.cd334569379f4p-493,
     0x1.199b9f196c352p-949, 0x1.b9624661c8131p-1011, 0x1.2ae2e7cb2b7b5p-355,
     0x1.1117298fdb76ap-56, 0x1.2f0b56b18aefep-101, 0x1.14e264723a209p-1005, 0.0, 0.0,
     0.0, 0x1.afb6a2c6b7d99p-570, 0.0, 0x1.d9cf4aa25f48cp-567, 0.0,
     0x1.44181089aee47p-747, 0.0, 0.0, 0x1.d6a7f81cefe15p-589,
     0x1.ebc7348d78abcp-1005, 0x1.3a9e12ba9ab25p-277, 0x1.b5bfa324f331ap-906,
     0x1.93210b0b18c94p-886, 0.0, 0.0, 0x1.7fd29c2ca6304p-317, 0.0, 0.0, 0.0, 0.0,
     0x1.12bed59f9b5d3p-197, 0.0, 0x1.f8c9cc49eabcep-529, 0x1.ef6be0537c1f8p-133, 0.0,
     0x1.e07bd46dc9d17p-984, 0x1.58ac35a122a4fp-423, 0x1.085aab6ac999fp-963, 0.0,
     0x1.7135005296b5dp-313, 0.0, 0.0, 0.0, 0x1.e4e50225877c4p-121, 0.0, 0.0,
     0x1.de5e963251402p-607, 0x1.2396da8c5fef3p-149, 0x1.b34cae5aedd56p-864,
     0x1.f8e0ce1cbbec7p-126, 0x1.7ac541f9cd153p-970, 0.0, 0x1.89f04f578ff93p-713, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3e64b42bf1f1cp-961, 0.0, 0x1.c485b7b292724p-644, 0.0,
     0x1.f7fc733d81722p-436, 0x1.56b2364ed3918p-956, 0x1.c3cde37bac9e4p-812, 0.0, 0.0,
     0x1.2d93c51013c9ap-516, 0x1.94fe607d89dbdp-865, 0x1.4e01080faceebp-61, 0.0, 0.0,
     0.0, 0x1.8fdec10b5a5a2p-912, 0x1.25ca210821ddfp-894, 0.0, 0x1.64410c101f31ap-686,
     0x1.e84e4dcca50b9p-836, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dbbb4e9a8f2d7p-240,
     0x1.b9934fe878119p-92, 0x1.1b36fb4fb41b6p-63, 0x1.b5403347d560bp-971, 0.0, 0.0,
     0x1.166ae1a38228ap-943, 0.0, 0x1.9baaee0ccbe42p-157, 0x1.24b00e803ba1ep-459, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.008ae99bf6bebp-872, 0x1.06e6b0493c092p-632, 0.0, 0.0,
     0x1.5f6fa7166ce86p-93, 0x1.ea596cd572f8p-220, 0x1.82761f523ab0dp-625, 0.0,
     0x1.32b6d025ad511p-276, 0.0, 0x1.2a6efea681a0cp-979, 0x1.04f3bdf1daed5p-59, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6a801f52da405p-123, 0.0, 0x1.245dc9f82acc1p-401,
     0x1.c7dd5bd9f79c9p-558, 0x1.0a6d358f497ccp-653, 0.0, 0.0, 0.0,
     0x1.e79cc24dcc875p-773, 0.0, 0x1.611ba7c431a41p-782, 0x1.63999b7cd0c51p-700, 0.0,
     0x1.c5642f8010e4p-350, 0.0, 0x1.8ea192f0e58e9p-217, 0.0, 0.0, 0.0,
     0x1.bd8b25add6e4p-102, 0.0, 0x1.3b9590f454725p-363, 0.0, 0.0,
     0x1.7de2b456481d7p-342, 0x1.7f009f587b8bep-556, 0x1.826c390795966p-95, 0.0,
     0x1.dbec1b155215cp-505, 0.0, 0x1.6457c840addcfp-677, 0.0, 0.0, 0.0,
     0x1.547a8a397df21p-605, 0.0, 0x1.478b3f6356561p-188, 0x1.329f7f96e713ep-35,
     0x1.5a9cfc8d5a595p-504, 0.0, 0.0, 0x1.9d26f89dce1cap-240, 0.0,
     0x1.cb9fef4e359abp-511, 0x1.28c532d48f576p-384, 0.0, 0.0, 0.0,
     0x1.a96d06655a956p-568, 0.0, 0.0, 0x1.00c84368e56b4p-234, 0x1.08bbaf5b21eedp-599,
     0.0, 0x1.15bb81ce90fcdp-766, 0x1.c7e9d119bafb4p-559, 0x1.f3446d03b0641p-329,
     0x1.52d6c97b3a34fp-429, 0.0, 0x1.b1281b929bd1dp-457, 0.0, 0x1.fca28d237d92cp-61,
     0x1.1c4895f6e8302p-139, 0x1.6e618bfde2e6fp-980, 0.0, 0x1.3e5a5f727fb8cp-555,
     0x1.5fffa876ae7c6p-991, 0x1.8110504a765f5p-374, 0x1.685ab241ab4f6p-1015, 0.0,
     0x1.4afabaa081236p-406, 0.0, 0x1.204d357f333bbp-224, 0x1.5a122427e0967p-603,
     0x1.445600e685e3bp-69, 0x1.563fe1df20181p-370, 0x1.6c0f9726f92fdp-138, 0.0,
     0x1.739c27956515bp-938, 0x1.244cfab6cfd1p-329, 0.0, 0.0, 0x1.b71e03bb7a3a1p-807,
     0.0, 0x1.4483a7234f10bp-276, 0.0, 0x1.60ea10c967d52p-91, 0.0,
     0x1.4d393bf54d516p-557, 0x1.5fcf519e46f6ap-275, 0.0, 0x1.a5c0f9d708462p-141,
     0x1.addcd68ef050ep-841, 0x1.3bcbc93d9e1b2p-255, 0.0, 0.0, 0.0,
     0x1.beba06d425469p-749, 0.0, 0.0, 0x1.fe62dffee44adp-292, 0x1.964eed82547bep-762,
     0x1.f36d975e81e8ep-841, 0x1.b028367987d41p-509, 0x1.4c9570c212b0ep-8,
     0x1.824bfdb91d971p-863, 0x1.9467ca10a2854p-539, 0.0, 0.0, 0x1.21e77b99fef3dp-974,
     0x1.c33c5e6d64e9ap-806, 0x1.85f79f0acf04bp-584, 0x1.4d3b700168e1ep-713,
     0x1.26bed89385022p-407, 0x1.538ced36dd27ep-876, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a4c876d00bf4p-1, 0.0, 0x1.6602a6bd76d61p-278, 0.0, 0.0,
     0x1.f3f5da91a3fd7p-907, 0x1.f3457834fab94p-164, 0x1.4502c592393e1p-993, 0.0, 0.0,
     0x1.c548fa3679f1fp-126, 0x1.50038995e9067p-442, 0x1.88142b991654fp-291,
     0x1.371493b14c32fp-86, 0x1.e91f687ecbd98p-703, 0x1.26db16a027799p-341, 0.0, 0.0,
     0x1.04b8439c4819ap-855, 0x1.65afc93acb628p-50, 0x1.1c967f9358e21p-244,
     0x1.9ecef792a1ce3p-661, 0x1.92b21c3a0c273p-951, 0.0, 0x1.9dd1cb6694a78p-871, 0.0,
     0x1.ed23a7ddfd12ap-1022, 0x1.a33664cca0e4ap-22, 0.0, 0.0, 0.0,
     0x1.18fcd7da67e76p-286, 0x1.a8b494aa6cbfdp-853, 0.0, 0x1.66ab0a484ed1cp-268, 0.0,
     0x1.03238f6b207e8p-18, 0.0, 0x1.c89e9e5417826p-674, 0x1.3fd45efa7fa95p-66,
     0x1.f49ded3e4663ep-930, 0x1.21b20132913c1p-696, 0.0, 0x1.03c995a1e0cdfp-560,
     0x1.f1232d5fbc422p-202, 0x1.8a9a84715b843p-300, 0.0, 0x1.ec5c46c120c2cp-175, 0.0,
     0x1.6ea011e591da6p-866, 0.0, 0x1.36adcfb874a3bp-901, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.54fa6e6ef482ep-838, 0x1.010234f491bbep-360, 0x1.4484dc4f38ed2p-778, 0.0,
     0x1.fc4cdde193b6bp-570, 0x1.35033b67efc0fp-69, 0.0, 0x1.6f6c8b9cc7f76p-223,
     0x1.c55d13ccc8a96p-779, 0x1.b79e5d3411fecp-567, 0x1.c6d641b75c6bcp-826, 0.0, 0.0,
     0.0, 0x1.41484f72ab9d7p-237, 0.0, 0.0, 0.0, 0x1.79377256988p-25,
     0x1.929600f82b5c1p-87, 0.0, 0x1.b23882d3441aap-834, 0x1.b21b876ea1c44p-656, 0.0,
     0.0, 0.0, 0x1.e63271627e85ap-932, 0x1.954123c59fdb1p-610, 0x1.1d1ea6ef15f86p-936,
     0x1.013e9b2ff4e8fp-443, 0.0, 0.0, 0x1.27ddb32f0ae55p-247, 0.0,
     0x1.00b9d62c0743fp-849, 0.0, 0x1.e6d2831e9e7d3p-527, 0.0, 0x1.c830efb8ecb24p-147,
     0x1.dfe272dfc883ap-522, 0.0, 0.0, 0x1.537e2ba7262cp-665, 0.0,
     0x1.c3e4e324c0d6ap-475, 0.0, 0.0, 0x1.552e45fb5a337p-517, 0.0, 0.0,
     0x1.a45a5f7b3f9d6p-904, 0.0, 0x1.317ec3dad9a18p-61, 0.0, 0.0,
     0x1.f14914355b4e9p-331, 0x1.792160f86b43ep-4, 0.0, 0x1.4e6a9fb2329f2p-311, 0.0,
     0x1.600540df3ef39p-56, 0x1.f6ca6da9325b3p-1009, 0.0, 0.0, 0x1.bc72b048182f9p-842,
     0.0, 0x1.c45f6ec3b4af5p-798, 0.0, 0.0, 0.0, 0x1.6b7c15d97913ap-176, 0.0,
     0x1.90720564cd4aep-318, 0.0, 0x1.4582cc1b98a24p-301, 0.0, 0.0,
     0x1.d2f42821582fcp-247, 0x1.c59cf4520748fp-786, 0x1.a5b0a5a6f5985p-188, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b443f9c5788fcp-481, 0x1.e2d4e19d7f223p-20, 0.0, 0.0,
     0x1.f827e6c02cb8bp-606, 0x1.4ac3819fff297p-309, 0x1.576f4940bed44p-825,
     0x1.3cd50fbab4b18p-19, 0x1.4fef8480803efp-142, 0x1.10173baa85858p-327,
     0x1.4bed9725dece2p-311, 0x1.2435c7b169ecp-35, 0.0, 0x1.5cccbe67ed25cp-116, 0.0,
     0x1.42000edd54304p-696, 0.0, 0x1.f7635e2af8cd4p-135, 0x1.ca5d5a334895bp-644, 0.0,
     0x1.69d3165a41255p-913, 0.0, 0x1.0dc9e65dc7de9p-188, 0x1.f435fb30d4fccp-966, 0.0,
     0x1.dd5bc1a11049bp-385, 0x1.8c397b7b749dfp-316, 0.0, 0.0, 0.0, 0.0,
     0x1.551fb5251f21ep-590, 0x1.3c1ab2c6627e5p-15, 0x1.344d0f59dba63p-419,
     0x1.983e268d0de0fp-779, 0.0, 0.0, 0x1.922c40ce5c945p-510, 0.0, 0.0,
     0x1.7498ef58e4c4ap-410, 0.0, 0x1.c0a9b05f221f3p-541, 0.0, 0x1.b0117043acd1ep-211,
     0.0, 0x1.244163789ec94p-593, 0.0, 0.0, 0.0, 0x1.7b551e47e813bp-1012, 0.0,
     0x1.7b24eae91cb27p-292, 0.0, 0x1.2baf27382c9d2p-245, 0.0, 0.0,
     0x1.e71396707aebfp-71, 0.0, 0x1.3647e3d4ef7ddp-14, 0x1.5c9c1b93a5ccap-238, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73f0021095195p-658, 0x1.73fdd26110796p-187, 0.0,
     0x1.13398b995c5fbp-726, 0x1.42f7aebacbaf4p-527, 0x1.454ceaa14e464p-529, 0.0,
     0x1.060e6e365f8a5p-355, 0.0, 0x1.f9353a47dee72p-871, 0.0, 0x1.94b8e1b13f2fcp-688,
     0x1.d2ca84bdeeda2p-821, 0x1.ee1c80a5aac43p-1002, 0.0, 0.0, 0.0,
     0x1.fccb04f7ae234p-316, 0x1.397d3c099b384p-102, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.313e83e319e39p-163, 0.0, 0x1.3088c91c097a6p-635, 0.0, 0x1.8bd6d508ebd98p-86,
     0x1.7505661662ac2p-379, 0x1.de336a036aa5ap-724, 0.0, 0x1.887bbc798297p-234, 0.0,
     0x1.1458ea929b942p-47, 0.0, 0.0, 0x1.a8b35a29bce55p-89, 0x1.e85268c17bc6ep-415,
     0x1.db3021a5c057ap-1015, 0x1.a79d8abfcbe94p-417, 0x1.5e9ec5512f436p-615, 0.0,
     0.0, 0x1.674f39c67f406p-12, 0.0, 0x1.276368c96ec17p-363, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0b1fa3030059dp-45, 0.0, 0x1.9d4f26dadbaa5p-412, 0.0, 0.0,
     0x1.e4a10c41cbe3cp-347, 0.0, 0.0, 0x1.feddd7dcc3aaep-558, 0.0, 0.0,
     0x1.c93d115d5fe44p-581, 0.0, 0.0, 0.0, 0x1.8abd898765f61p-313, 0.0, 0.0,
     0x1.bae867995df9ap-767, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4fee57274c921p-200,
     0x1.0ee844820cdc6p-976, 0.0, 0.0, 0.0, 0x1.dc3e228c7ee55p-317,
     0x1.3fd7386216f01p-613, 0.0, 0x1.4af6286009114p-802, 0.0, 0x1.7e058e04f4606p-713,
     0.0, 0x1.fdc29db06d5c3p-491, 0x1.7fcdef97ae0fcp-491, 0x1.178475d091e79p-795, 0.0,
     0.0, 0x1.d6872623def9fp-472, 0x1.d5d205bf88f4dp-759, 0.0, 0x1.a27ec51eb4ae9p-62,
     0.0, 0.0, 0x1.cf33e79d2fe2ep-215, 0.0, 0x1.305427b152e69p-579,
     0x1.718776aa0cdap-132, 0.0, 0x1.59020fee45799p-757, 0.0, 0.0, 0.0, 0.0,
     0x1.b330527dd6c7p-925, 0.0, 0.0, 0x1.2e9e610aa33fap-634, 0x1.4bf371d769ebdp-702,
     0x1.3997051588281p-434, 0.0, 0x1.1c5471e1119e3p-782, 0.0, 0x1.6aa2ea68aa37fp-329,
     0x1.d713d8d5df7bp-178, 0.0, 0.0, 0x1.43994f7faf20dp-20, 0x1.968933aab5ffp-446,
     0.0, 0.0, 0x1.37c89f9ec45a7p-563, 0x1.f013f619e9fa9p-923, 0.0, 0.0,
     0x1.fbc538458321ap-425, 0x1.92abf47f43e74p-701, 0.0, 0.0, 0x1.502b82fc01926p-552,
     0x1.c1f0c72992df4p-280, 0.0, 0x1.4b88ecf07d6b4p-254, 0x1.72ceac6765488p-327, 0.0,
     0x1.45e0fcee9495cp-247, 0x1.e816d20ed64afp-1003, 0x1.c06aaca918df7p-998, 0.0,
     0.0, 0x1.827ddeeebca59p-666, 0x1.40b4a9d3d26p-175, 0x1.b9cd1fbadeb7ep-89, 0.0,
     0x1.bc79b54268ea6p-439, 0.0, 0.0, 0.0, 0x1.6a8eb180eefd2p-890,
     0x1.f0bdbdbc2e457p-858, 0x1.37c4f9d836debp-14, 0x1.7c3d0b226e7b4p-30, 0.0,
     0x1.f5cec47ab02d2p-970, 0.0, 0x1.6e9a579eb4b7ep-714, 0x1.6f565f7e72342p-521, 0.0,
     0x1.cba9242d89a29p-359, 0x1.453b7b5caf72bp-987, 0x1.cad5864d56ffap-277, 0.0, 0.0,
     0x1.f610e0c1fc8a4p-285, 0.0, 0x1.b405731d2da96p-5, 0x1.05394b6e80f1fp-940,
     0x1.9fb846c4b41ebp-23, 0.0, 0x1.176618d0a7bdep-154, 0.0, 0.0, 0.0, 0.0,
     0x1.4e66083540f8dp-1004, 0x1.cc646ee0b5908p-674, 0x1.a580846ad5f56p-225, 0.0,
     0x1.562b140d0d188p-434, 0.0, 0.0, 0x1.a14b4f1bcb03dp-109, 0.0, 0.0,
     0x1.6f05a914e3ee7p-119, 0x1.a64a6b7a811b9p-289, 0x1.0f93340ccb6fbp-38, 0.0, 0.0,
     0x1.0107fadafadc8p-705, 0.0, 0.0, 0.0, 0x1.69e72a6258661p-76,
     0x1.e6e527cf71254p-167, 0x1.daf63f221da0ap-623, 0x1.34616c9de4254p-259,
     0x1.f364a0d0dbf9cp-992, 0.0, 0.0, 0x1.eb25168d51505p-518, 0x1.fa81770e251d6p-840,
     0x1.7c31f1db64497p-182, 0.0, 0x1.caa7e43d5a1d5p-744, 0.0, 0x1.f5ff598dd0ebbp-218,
     0x1.4a78ed4d8f3bbp-690, 0x1.13c6f5171de8cp-679, 0.0, 0x1.bcadc4c85f2a9p-931, 0.0,
     0.0, 0x1.1449ae096f79p-933, 0.0, 0.0, 0x1.a3130fb7e3f22p-647, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.67fc9dab76749p-242, 0.0, 0x1.43d60665a7c19p-177, 0.0
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
            tmp1 = Sleef_asind2_u35kvx(tmp0);
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
    printf("Sleef_asind2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_asind2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
