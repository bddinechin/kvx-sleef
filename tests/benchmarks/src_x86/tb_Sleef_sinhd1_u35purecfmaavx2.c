/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd1_u35purecfma.c --function \
 *     Sleef_sinhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.188fb07dc864bp-815, 0.0, 0.0, 0.0, 0x1.fc645b5c0504p-819, 0.0, 0.0, 0.0,
     0x1.0d46df915eep-107, 0x1.d518ef98b0869p-323, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.80f6bd9b0f197p-631, 0x1.50f0bf166bc56p-609, 0x1.0be1987b83ebap-751,
     0x1.f4874f9cf67a2p-984, 0x1.ccc2086bbe063p-233, 0x1.1b60695ecd574p-658, 0.0, 0.0,
     0x1.18d3701652a62p-503, 0x1.dae77bfdd29d5p-44, 0x1.f49da19033325p-147,
     0x1.edd3405b6aedfp-995, 0x1.9181badd0c653p-127, 0x1.9b500197fac0ap-674,
     0x1.d2a2d17049fdep-266, 0x1.6c3daf6069a2bp-834, 0.0, 0x1.6305a725d6b67p-193,
     0x1.0bb3e6693b1adp-476, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.84179eabca11cp-10, 0x1.a4866bd8efaddp-910, 0.0, 0.0, 0x1.2c600affb4373p-477,
     0x1.21a2f2120221bp-977, 0x1.c320d8887fc3ap-498, 0.0, 0.0, 0x1.c0e3b531446f4p-766,
     0.0, 0.0, 0x1.210a5e6ec5b35p-65, 0.0, 0.0, 0.0, 0x1.ff6dac4ad9529p-62,
     0x1.774d044093835p-928, 0x1.536d17055d26ap-62, 0x1.3b1097987d4cbp-35, 0.0, 0.0,
     0.0, 0x1.24b1b2911672cp-124, 0x1.3626bff551d7ep-775, 0.0, 0x1.bc3044cf85428p-637,
     0x1.34f15641e3d4ap-268, 0.0, 0.0, 0.0, 0x1.71fd3e51447e7p-343,
     0x1.a18198f3f788dp-264, 0.0, 0x1.c87db2f3b6e51p-958, 0.0, 0.0,
     0x1.5acc02c0d584fp-856, 0.0, 0x1.288dcd1112876p-64, 0x1.7d5fb222c37fcp-989,
     0x1.66311ed3f956fp-784, 0.0, 0x1.e648f27575922p-939, 0.0, 0x1.a8d634e028d4bp-279,
     0x1.bedbe0d87a61fp-329, 0x1.254b64bf29472p-1017, 0.0, 0.0,
     0x1.357c4f762405cp-779, 0.0, 0x1.251838d7ab157p-769, 0x1.d971d7e864959p-222, 0.0,
     0x1.0cdc0f66cc99cp-589, 0x1.2dc383bf183dcp-970, 0x1.e6a789a50b62ap-441,
     0x1.72a817bb36148p-829, 0x1.fabc22a705084p-184, 0x1.e708708e458fdp-169,
     0x1.fd5888d1040c5p-679, 0.0, 0x1.c9f34c804115ep-744, 0.0, 0.0,
     0x1.a00294de13885p-402, 0.0, 0.0, 0.0, 0x1.7ffffaa0656c7p-616, 0.0, 0.0,
     0x1.a20bc381f0f8ep-591, 0x1.7b8e02b3eed77p-240, 0x1.cb86e7a24d60bp-577,
     0x1.2d05ad83ec371p-103, 0x1.8e538a21aec35p-636, 0.0, 0x1.2391c5c2c198fp-242, 0.0,
     0x1.e7cbbe0f722c1p-392, 0x1.4d338294c6cb6p-621, 0.0, 0.0, 0x1.6a0e0e4e2a56ep-677,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f211dccb1c75p-140, 0x1.704e8ce5e08fcp-672,
     0.0, 0.0, 0.0, 0.0, 0x1.183fcfe4d0bcep-943, 0.0, 0.0, 0.0,
     0x1.48cefac1ced11p-485, 0.0, 0x1.11c065108fd4cp-653, 0x1.570a85797d325p-812,
     0x1.df30f454659bep-17, 0x1.5876559fa646dp-776, 0.0, 0.0, 0x1.2dfc2bb14902ep-722,
     0x1.081a71aa58ec8p-720, 0.0, 0.0, 0x1.2a35c0aa128eep-753, 0.0,
     0x1.659f4e10de8eap-416, 0x1.2070183fddfabp-634, 0x1.cb2cf1137d81ap-985,
     0x1.f46e33bbabfdep-92, 0.0, 0.0, 0x1.ee5ea3402dd76p-787, 0x1.c56f3edee3c55p-162,
     0.0, 0.0, 0x1.78a50ae6f278fp-390, 0.0, 0.0, 0.0, 0x1.b3a079b0f554cp-51, 0.0, 0.0,
     0x1.4267acffd60ddp-626, 0x1.ff99c0cc5a564p-532, 0.0, 0x1.c22f2e47ef00ep-386, 0.0,
     0.0, 0.0, 0.0, 0x1.c169b14f0c34cp-326, 0x1.f29f22c9650f8p-940,
     0x1.c684ac99426bap-69, 0x1.0018d965f0066p-821, 0x1.0b74bd06a1df6p-528, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e4bd592c78249p-33, 0x1.518ef635b42f7p-640, 0.0, 0.0, 0.0, 0.0,
     0x1.739dd73c7c36p-807, 0x1.6a5079d2c9ca1p-437, 0x1.c04ffe09eda7ap-819, 0.0, 0.0,
     0.0, 0x1.035279a0cad57p-401, 0x1.e80691a730216p-882, 0.0, 0.0,
     0x1.7f7c255557726p-423, 0x1.69f67bd111a12p-429, 0x1.41459bf36d586p-604,
     0x1.d3ef52d0a6ecfp-220, 0x1.3ab381868de6ep-922, 0x1.40c87a9a4b6bbp-90, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.69f7984db358ap-939, 0x1.ba2bfd0679c43p-24, 0.0, 0.0,
     0x1.c95cd37757c86p-997, 0.0, 0x1.a09bea96c9e99p-882, 0x1.6dee2f6f24147p-254, 0.0,
     0x1.1089c51697875p-184, 0.0, 0x1.6535c210d93e7p-927, 0.0, 0.0, 0.0, 0.0,
     0x1.1058520b75493p-651, 0.0, 0x1.e3d44f25735ebp-464, 0.0, 0x1.700ebd777e9c9p-578,
     0x1.0336725271c9ap-183, 0.0, 0.0, 0x1.692e23ad36c3ap-368, 0.0,
     0x1.97c5e28fed1a9p-148, 0.0, 0x1.3b813317fcdf7p-384, 0x1.274c3d6ba888p-679,
     0x1.840c3a8105873p-84, 0.0, 0.0, 0.0, 0x1.ecdcfca7484d8p-252, 0.0,
     0x1.98158922b8211p-967, 0.0, 0.0, 0x1.7225d0e7c2d16p-605, 0x1.91079ce429d6ap-953,
     0x1.5fd72a5c2b8b4p-920, 0x1.1b08d8677366fp-917, 0x1.a0c66fc0263c6p-300, 0.0,
     0x1.dbc041ef16906p-957, 0x1.4edc8da4e2709p-554, 0x1.762cd351207c9p-908, 0.0,
     0x1.dd74f575a32fp-94, 0.0, 0.0, 0x1.21dc2121a70b3p-740, 0x1.e7633f201dda2p-219,
     0x1.8ddd2d9791a12p-547, 0.0, 0x1.2d8d4b30e6421p-314, 0x1.4f918fca88719p-129,
     0x1.4b345784c1b45p-397, 0.0, 0x1.d87ae8f00e665p-613, 0x1.d01119e6f1a29p-626, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3349cddfc1d4fp-423, 0x1.84d2597f13756p-843, 0.0, 0.0,
     0x1.61a242df7649ep-74, 0x1.d6014f6640c47p-315, 0x1.64f207d7204bbp-11, 0.0,
     0x1.2b6124d9a3802p-283, 0.0, 0x1.ed7276b496e2bp-889, 0x1.c292bf7bc9befp-47,
     0x1.76fdef844f56cp-964, 0x1.505f2704ec896p-641, 0x1.60bbc28a542b5p-498, 0.0,
     0x1.9ffdaed66cbep-493, 0x1.cf83b09c7e41bp-48, 0.0, 0x1.1a1884cad8551p-257, 0.0,
     0x1.9ecdcbb5cf24bp-113, 0.0, 0x1.51feceac8dc09p-758, 0x1.679d3395e8e19p-630, 0.0,
     0.0, 0x1.764b50728af31p-344, 0.0, 0x1.ba7d05d60a496p-935, 0.0,
     0x1.fd0cc36140dfep-201, 0.0, 0.0, 0.0, 0.0, 0x1.2be2c6e8b69dp-7, 0.0, 0.0, 0.0,
     0.0, 0x1.9e915bd4402e8p-66, 0.0, 0.0, 0x1.72db9322dccb5p-816,
     0x1.6b1aed4636ec1p-724, 0x1.b4e8332686c2fp-111, 0x1.8c5f9161a89bcp-217,
     0x1.8a652d5336fcdp-436, 0x1.7e29c7696e3ep-189, 0.0, 0.0, 0.0,
     0x1.a73e2bf23de39p-57, 0x1.8d9cdecadede5p-813, 0.0, 0x1.dc988bf68ed7ep-339,
     0x1.6bd0ec5341319p-397, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0e57b1b1b2f1p-580,
     0x1.869d683388c0cp-699, 0.0, 0x1.e97bc46cbe19bp-389, 0.0, 0.0,
     0x1.295fcb08b6441p-564, 0x1.18c0406e651cfp-449, 0.0, 0x1.d278d116ca09p-418, 0.0,
     0x1.bc8d5da4a102p-682, 0x1.e3384b6a3943ap-887, 0.0, 0x1.3721fd43cbde4p-401,
     0x1.4a96d4937c956p-589, 0x1.3007498ff98edp-997, 0x1.ae89e3e0b3d81p-111, 0.0,
     0x1.6e0625cc5be7ap-25, 0x1.732521227b7cep-243, 0x1.6429d0a9c1fcdp-846, 0.0, 0.0,
     0x1.07f44fed54fcap-950, 0.0, 0.0, 0.0, 0.0, 0x1.6091cdeb78246p-628, 0.0, 0.0,
     0.0, 0.0, 0x1.eb111c0232a96p-745, 0.0, 0x1.b9e5af29e0f55p-374,
     0x1.4dadae2756f77p-997, 0x1.dcf303be6a43p-402, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.add0b63c7dc33p-388, 0.0, 0.0, 0.0, 0x1.fa085e92bc1f5p-46,
     0x1.4aa9b95e8288ap-1008, 0x1.593ce4e9e19bap-352, 0x1.8a4179a966816p-387, 0.0,
     0.0, 0.0, 0.0, 0x1.03853f975fcd6p-962, 0x1.7d2432a6abfb9p-431, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cd582c471c97p-629, 0x1.facadfe1d8b08p-653, 0.0, 0.0,
     0x1.2b61956f70445p-730, 0.0, 0.0, 0.0, 0.0, 0x1.b42258059683ep-427, 0.0,
     0x1.2ef7ec927fb4bp-657, 0.0, 0.0, 0.0, 0x1.36ce130dfe125p-793, 0.0, 0.0,
     0x1.d48feab45266bp-141, 0x1.d8d66ec90fa4fp-260, 0.0, 0x1.1744c9312f349p-435, 0.0,
     0x1.8dad3f39c6f48p-482, 0.0, 0.0, 0x1.84f76a92dbaeap-854, 0.0, 0.0, 0.0,
     0x1.6e9a840380cbp-454, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6880c75fc0c85p-442,
     0x1.b3fb83f204c8dp-813, 0.0, 0x1.f9bc51d43468ep-84, 0.0, 0.0, 0.0,
     0x1.48fbebe8fc32p-722, 0.0, 0.0, 0x1.52e992cc44da5p-464, 0x1.2ff353f4d95a9p-894,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c091d53008edcp-689, 0x1.1e07ae25a9cp-119,
     0x1.17483a798852dp-190, 0x1.41fc45b9c7edp-84, 0.0, 0.0, 0.0,
     0x1.e7ff6ec4d320cp-906, 0.0, 0.0, 0.0, 0.0, 0x1.53123809781ebp-433,
     0x1.80e0a03e3bdc3p-611, 0x1.97d671bde25b1p-911, 0.0, 0x1.5b8319825068bp-777, 0.0,
     0x1.ca1e04296609dp-269, 0x1.dffc8b7100f7dp-964, 0x1.27b0db855add5p-278, 0.0, 0.0,
     0.0, 0.0, 0x1.925dceab96252p-162, 0.0, 0.0, 0.0, 0x1.4f044c2a83ce9p-686, 0.0,
     0.0, 0.0, 0x1.32654f1c29083p-507, 0.0, 0.0, 0x1.47ed8b8c88237p-543, 0.0,
     0x1.50945324c38e3p-552, 0x1.1b07afacb513bp-540, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.95df9819aa755p-294, 0x1.8d50a698eea94p-642, 0.0, 0.0, 0x1.4fa2f2e3f16c2p-931,
     0x1.f30f9697c1941p-953, 0x1.e15789eb4e752p-247, 0x1.43f23904a778dp-946,
     0x1.5f9ec9dbbd8e9p-4, 0.0, 0.0, 0x1.cf96bd4efe736p-208, 0.0,
     0x1.bc89da2abc074p-881, 0x1.a40f64df7501dp-238, 0.0, 0x1.64d896124de31p-725, 0.0,
     0x1.927b2317bcfedp-340, 0x1.4bf8fe6883eaep-282, 0x1.04a70631577e1p-180, 0.0, 0.0,
     0.0, 0x1.33a7b878fea1bp-939, 0.0, 0x1.2b605876051a9p-73, 0x1.441c2258828dfp-322,
     0.0, 0x1.37b77641cb3f4p-1005, 0.0, 0.0, 0x1.945f6fce6f8e6p-968,
     0x1.f202bc38d078p-567, 0.0, 0x1.03512897aa462p-835, 0x1.347693ce462abp-977, 0.0,
     0x1.1ff47fa85b60fp-319, 0x1.eef9ab9c88d4fp-628, 0x1.64d3fcc4b0f2cp-465, 0.0, 0.0,
     0x1.49c886dce2e2bp-457, 0x1.733cd63492bcap-334, 0x1.a1f7b2e5d29aap-946, 0.0,
     0x1.8358819a4583bp-404, 0.0, 0.0, 0.0, 0x1.6d0947b6bde51p-689,
     0x1.4cb02ab8c1b42p-493, 0x1.88ed4775fee64p-605, 0x1.38d410ea1de3ap-797, 0.0,
     0x1.52f41a9e674aap-580, 0.0, 0.0, 0x1.87a8d4ea9dcd6p-737, 0x1.0e8ddff07fa22p-20,
     0x1.c72e6e66afcfbp-708, 0x1.d9a462ba034dap-394, 0x1.2da25963a2a6p-781,
     0x1.caa7cfd555b11p-31, 0.0, 0x1.917dd7b4b017cp-92, 0x1.1b617e19ed3dap-199,
     0x1.2d495addf5e6dp-434, 0.0, 0.0, 0x1.60aaff0bf4585p-983, 0.0, 0.0,
     0x1.285136759a485p-928, 0x1.50ac6e5c9827ap-127, 0.0, 0.0, 0x1.a708af4398c5bp-844,
     0.0, 0x1.db1a5acc60d3ep-83, 0.0, 0x1.45822bee783edp-380, 0x1.e5add2423c83ap-232,
     0x1.b811a2f24a59p-943, 0x1.f1c62cdac4e9dp-995, 0x1.40a16a2f875fcp-651, 0.0,
     0x1.b5c30aacafbc9p-976, 0x1.8e5ed7af99c6bp-571, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.892fff1ee6e65p-260, 0x1.727c3e9223d68p-662, 0x1.2915beb618df8p-738, 0.0,
     0x1.795c86e3f5fc8p-705, 0.0, 0.0, 0.0, 0x1.8ba681ec4ac4p-395,
     0x1.eea13c2c1e04bp-403, 0x1.03a83535601e9p-856, 0x1.8f1ef76a57321p-895,
     0x1.9a80d0a4a0ed3p-976, 0x1.4e94117f72b94p-588, 0.0, 0.0, 0x1.9265ef67a491fp-312,
     0.0, 0x1.7499fda77cea1p-329, 0.0, 0x1.1f7b9745db5e3p-475, 0x1.0212d2e6bd05bp-657,
     0x1.1cd460edb5ccbp-331, 0x1.d031aea3d1301p-134, 0.0, 0x1.9d22ba38eca21p-496, 0.0,
     0x1.229122f2f068bp-755, 0.0, 0.0, 0x1.c6a9f58342871p-811, 0x1.98ff121e8da37p-104,
     0x1.5cc3ab2bb5147p-749, 0.0, 0.0, 0.0, 0.0, 0x1.cd25b499b1b69p-338,
     0x1.380364abb3b1ap-3, 0.0, 0.0, 0x1.5f7058b0b6458p-50, 0x1.a327418a300d2p-996,
     0x1.5045daa014d49p-995, 0x1.cbf0213edcb75p-73, 0.0, 0x1.f0718465832a6p-698,
     0x1.cc8b407f76515p-426, 0.0, 0x1.4afc97f162053p-73, 0.0, 0.0, 0.0,
     0x1.5a8e8b7014e4cp-160, 0x1.6d3c6f8f99bap-241, 0x1.869d010404502p-762, 0.0, 0.0,
     0.0, 0.0, 0x1.2ad3ee3438a6ep-28, 0x1.8795ce02886c6p-671, 0.0, 0.0,
     0x1.0e1d97e001c4ap-753, 0x1.5e89d6a08defep-784, 0x1.d23c7056e509bp-969, 0.0,
     0x1.6a632b3408749p-544, 0.0, 0x1.4a5604e26295cp-851, 0.0, 0.0,
     0x1.820a092b1a6fep-331, 0.0, 0.0, 0.0, 0.0, 0x1.f93e06add8c1bp-385, 0.0,
     0x1.60c1590e4978cp-857, 0.0, 0x1.484356cba7babp-785, 0.0, 0.0,
     0x1.b102e66fcd734p-317, 0.0, 0x1.cf3437dc9688cp-315, 0x1.d05a72ee458f5p-328, 0.0,
     0x1.91a70b1ea7406p-204, 0x1.f8f4ced792597p-926, 0.0, 0x1.7d4ab562b0af4p-566, 0.0,
     0.0, 0x1.7462b0caa67bcp-221, 0x1.693d450c7b604p-290, 0x1.5f0634fbe33b3p-662, 0.0,
     0.0, 0.0, 0x1.0b6d322050a34p-961, 0x1.d13e2a94f1b84p-640, 0.0, 0.0, 0.0,
     0x1.8b8dc6df31676p-1000, 0x1.55b9315f2b5ecp-376, 0x1.3c069f97cdf97p-2,
     0x1.5831da8a29a08p-368, 0.0, 0x1.235f4766bcfb2p-175, 0x1.a92803acb844dp-632, 0.0,
     0.0, 0x1.94d6df754b77bp-1006, 0x1.660367878eaedp-38, 0x1.f58f6a7d1a3p-431, 0.0,
     0x1.dba94355b4619p-140, 0x1.9cfdf5441cf9ep-623, 0x1.b112fa95481a5p-190,
     0x1.b90727013922ep-848, 0x1.85c2ab6b2dee7p-446, 0.0, 0.0, 0x1.dc1f1477efe27p-979,
     0x1.a27561e7eb4ffp-527, 0.0, 0.0, 0.0, 0x1.7a97cab440796p-532,
     0x1.08806df240631p-824, 0.0, 0x1.ede982cf40c89p-474, 0.0, 0.0, 0.0, 0.0,
     0x1.eff7fb5632716p-791, 0x1.207490d37a342p-91, 0x1.47ee85e8bfb67p-581, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9cc260862c9bp-845, 0x1.bf8f37357f09bp-192, 0.0, 0.0,
     0x1.c7b5d0c704595p-700, 0x1.d8a1f5571e7b9p-814, 0.0, 0.0, 0.0, 0.0,
     0x1.2ed93d6463deep-681, 0x1.ae0dccd2b533ep-1000, 0.0, 0.0, 0x1.33f4c1c4c8d1p-822,
     0.0, 0x1.d1854780e8bep-904, 0.0, 0.0, 0.0, 0x1.93067a99861d2p-429,
     0x1.8083b10346b77p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0fd2b7838a14dp-763, 0.0, 0.0, 0.0, 0.0, 0x1.574423a5a17fep-303, 0.0,
     0x1.63a2b0314d364p-812, 0x1.78d5f345a665ep-342, 0x1.14881d5c651acp-545, 0.0,
     0x1.ae5b9c2ceb30bp-821, 0x1.d2899279f003p-1017, 0.0, 0.0, 0.0,
     0x1.9227cc37d04e4p-69, 0.0, 0x1.64ff08a98a7edp-669, 0.0, 0x1.23ae28b7ce4c5p-939,
     0x1.946bc45cea954p-1012, 0.0, 0.0, 0x1.ef28eb8f7fc1ep-111, 0.0,
     0x1.2b6f5ce52936p-779, 0x1.df300ca5ebceap-723, 0.0, 0.0, 0.0,
     0x1.40c57289c95fdp-396, 0.0, 0.0, 0.0, 0x1.e9da7a4dfd83bp-201,
     0x1.8495865391b4p-7, 0.0, 0.0, 0x1.7e793d9a3bd3ep-273, 0.0, 0.0,
     0x1.f06e38afbf5bep-882, 0.0, 0x1.586801bcd28ebp-197, 0.0, 0x1.ff1bee7e4b126p-687,
     0.0, 0.0, 0x1.34ccf61eeb877p-326, 0.0, 0x1.5ecbeea507628p-465, 0.0,
     0x1.55a82caa75b3ap-723, 0.0, 0.0, 0.0, 0x1.1d3f42511e1ffp-834, 0.0,
     0x1.cb8e155943e25p-631, 0.0, 0x1.679ad7d434aedp-586, 0x1.aaf8cd9026b59p-449,
     0x1.81f4a59f84c99p-41, 0x1.f990f460e2015p-609, 0.0, 0.0, 0x1.221509503d92cp-699,
     0x1.b904b0db83407p-53, 0.0, 0.0, 0x1.59eecb1a5cf91p-926, 0.0,
     0x1.11f55e95baccbp-287, 0.0, 0.0, 0x1.5f41349c553f7p-92, 0.0, 0.0,
     0x1.f5f57fb6085aep-683, 0x1.b343d395ce022p-563, 0x1.22e1869f22923p-988, 0.0, 0.0,
     0x1.cdb21020726a8p-222, 0x1.7e7d9a7d3e4b4p-619, 0.0, 0.0, 0x1.e7c02a05b2f59p-637,
     0.0, 0x1.2d59d4d40edf9p-667, 0x1.c52bd9a2fef3ep-508, 0.0, 0.0,
     0x1.700d4a725ff99p-417, 0x1.74279fdc4ff7cp-99, 0.0, 0x1.a93bd4b51477p-219,
     0x1.5c8f523de815dp-129, 0.0, 0.0, 0x1.60a492b69e87ep-699, 0.0,
     0x1.ee9991699906dp-132, 0.0, 0x1.e500aeed088e8p-264, 0x1.742ac63535e67p-5,
     0x1.bca3d21d083b3p-1009, 0x1.b929557cf9e28p-48, 0.0, 0.0, 0x1.751d72054b46bp-234,
     0.0, 0x1.ad009b3e7d2eap-395, 0x1.cdc6e1cb93498p-582, 0x1.102b318151126p-434,
     0x1.8aa386f3e1469p-481, 0x1.3f52660d311bp-147, 0x1.4f4ff6ee3242ap-805, 0.0,
     0x1.48f4d5439937ep-508, 0.0, 0.0, 0.0, 0.0, 0x1.ad0f788d47cebp-587, 0.0, 0.0,
     0.0, 0x1.4fc19f1a3b467p-467, 0x1.7234811cde78p-19, 0.0, 0x1.196e2d1354a4fp-398,
     0.0, 0.0, 0.0, 0x1.0d435112ea1ap-504, 0x1.3107995501e11p-460,
     0x1.28c80498fc353p-302, 0.0, 0x1.e2ee97148bc62p-542, 0x1.9d9abf551db2cp-564,
     0x1.b4cdf84038b08p-736, 0.0, 0x1.c6f41c9382a14p-544, 0x1.b9f20b0624e06p-831, 0.0,
     0.0, 0.0, 0x1.9bcdf457fcc67p-807, 0x1.b7ed671bd19bcp-617, 0.0, 0.0,
     0x1.4a19460f8ccp-216, 0.0, 0.0, 0x1.0977878954489p-318, 0.0, 0.0,
     0x1.72911f4ba7e7bp-476, 0x1.e8198bdd44f35p-220, 0.0, 0x1.1648060db7e24p-617, 0.0,
     0x1.477abf92c8f1ap-807, 0x1.e6a2c43119237p-461, 0x1.8c8d4492aa4f3p-36, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f7a7aa88d4461p-600, 0x1.b3c979c938b4dp-809,
     0x1.b36a85343efb2p-420, 0.0, 0x1.13e246e8b418ap-660, 0.0, 0.0, 0.0,
     0x1.e3372eafd792dp-108, 0.0, 0.0, 0x1.7bb963c41fc97p-495, 0.0,
     0x1.0f1ae175525bcp-206, 0.0, 0x1.7f49f9cca561cp-806, 0.0, 0x1.2338e84aa231dp-390,
     0x1.8aebcf5bcced8p-821, 0x1.ab7a7aefe05c9p-519, 0.0, 0x1.7ba682572c00ep-110, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.769a3307b06e5p-989, 0.0, 0x1.7a74eea899a71p-480, 0.0,
     0.0, 0x1.7c50f6953d532p-971, 0.0, 0.0, 0.0, 0.0, 0x1.1a4d662a97c13p-781, 0.0,
     0x1.8958b41fcadf3p-215, 0x1.b1ed539d03217p-826
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0;
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
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sinhd1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sinhd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
