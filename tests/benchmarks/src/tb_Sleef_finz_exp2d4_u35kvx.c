/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d4_u35kvx.c --function \
 *     Sleef_finz_exp2d4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.9a9d3ddaa2e7p-151, 0.0, 0x1.3e1fd8473ff27p-14, 0.0,
     0x1.9aa2d8bca2177p-1021, 0x1.5b3c0b1b901b4p-6, 0.0, 0x1.c43c38d8de845p-508, 0.0,
     0.0, 0.0, 0x1.b15fe9bb4461p-476, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.925e380a659bp-244,
     0.0, 0x1.b06a1bbdb4d75p-86, 0x1.8765b7ffdd6b1p-744, 0x1.cd34bbde1920ep-820,
     0x1.0f5afc4215e9ep-81, 0x1.1bb2bbe30e1c6p-853, 0x1.7b005ba867f32p-304, 0.0,
     0x1.53bdb8ed05f17p-897, 0.0, 0.0, 0x1.47a0f00ad2165p-91, 0x1.807523d99551ep-430,
     0x1.fec19afa25e8bp-104, 0x1.77ec37de1211ep-829, 0.0, 0x1.cb4f34d8b535bp-1006,
     0x1.f68b5f43d178dp-136, 0x1.a92de36dbb90cp-419, 0.0, 0x1.c8239564a93a2p-1013,
     0x1.8d51ad902908ep-540, 0x1.e00285a243779p-290, 0x1.d63dac34363adp-83, 0.0, 0.0,
     0.0, 0x1.42c7ac3c715d4p-444, 0.0, 0x1.6845cd121af66p-22, 0x1.47c1265b10681p-963,
     0x1.e3161298c488bp-335, 0x1.5fbb0fff8d9e6p-843, 0x1.2ef7468d5d0a8p-113, 0.0,
     0x1.554672db68d31p-808, 0.0, 0x1.11135ef02bffap-897, 0.0, 0x1.ccdfd9bea55c1p-360,
     0.0, 0x1.45b9e5013b8ecp-469, 0.0, 0.0, 0x1.c0cc2bca550c8p-928, 0.0, 0.0, 0.0,
     0.0, 0x1.2e96fd6e153c9p-736, 0.0, 0.0, 0x1.215de6cfeaf6bp-729, 0.0,
     0x1.279532b20d80bp-106, 0x1.83259b848fp-807, 0x1.654fe7065e471p-674,
     0x1.fc7626b00ff25p-696, 0.0, 0x1.158fc7e54e8e3p-998, 0x1.d71062cb1b215p-1014,
     0.0, 0x1.13895f0f214cap-289, 0x1.01551e17e7b9ap-749, 0x1.9db70b0de898fp-659, 0.0,
     0.0, 0x1.378e10709b909p-931, 0.0, 0.0, 0x1.3f50fc4b55813p-34, 0.0, 0.0,
     0x1.edda2b38831p-176, 0.0, 0.0, 0.0, 0x1.fd6340f9f76a7p-518,
     0x1.ddbe2366c5559p-75, 0.0, 0.0, 0x1.edd47a13d9b07p-872, 0x1.cbfc706dfc968p-916,
     0.0, 0.0, 0.0, 0x1.e0841f42dbfc3p-268, 0x1.8fc7eaf5c3b56p-332, 0.0,
     0x1.129fc6990838dp-152, 0.0, 0x1.d001336bce571p-260, 0.0, 0.0,
     0x1.803b34181272bp-478, 0.0, 0x1.b3b3a66961273p-610, 0.0, 0.0, 0.0, 0.0,
     0x1.b0d602d9c5d9cp-876, 0.0, 0x1.8877404f1d386p-186, 0x1.ac9143d96572cp-488,
     0x1.6faf4e23c9f01p-893, 0x1.e2105a24ea253p-928, 0x1.6aa3040538fd9p-994,
     0x1.1a0aafdd9b521p-139, 0.0, 0x1.de222c964da0fp-374, 0x1.b43140f59bb6fp-947, 0.0,
     0x1.17c1ece7b4b14p-973, 0.0, 0x1.b4179ea4ca109p-601, 0.0, 0.0, 0.0, 0.0,
     0x1.34b2922c555bfp-437, 0x1.2555a30f1fecp-190, 0.0, 0.0, 0x1.21b5257f5a0c6p-493,
     0.0, 0x1.c58da1ffb5c04p-131, 0.0, 0x1.8dbfb231e96bdp-202, 0.0, 0.0, 0.0,
     0x1.25c4ba6abe3dep-168, 0.0, 0x1.d0be792ac4b16p-430, 0.0, 0x1.9c12830b3f6b1p-313,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0fc01c498475ap-882,
     0x1.b5cbebb556b23p-304, 0.0, 0.0, 0.0, 0x1.d2cf40a7469bep-731, 0.0, 0.0,
     0x1.107bd62dfabe7p-511, 0.0, 0x1.c74d619c5e3a4p-235, 0x1.0b97b4353b103p-708, 0.0,
     0.0, 0x1.f01212486b58p-476, 0.0, 0x1.71901261a39dp-762, 0x1.1487811fdd8cap-555,
     0.0, 0x1.7be559671830fp-460, 0.0, 0.0, 0x1.999de2be21db7p-859,
     0x1.13e77eda88214p-995, 0.0, 0.0, 0.0, 0x1.a36e990c625eap-242,
     0x1.2ba1522fd7054p-897, 0x1.2b25c3d1ece36p-31, 0x1.6a2c90513f9d5p-642, 0.0,
     0x1.f9329545ef883p-155, 0x1.45cab82ca4fa4p-926, 0.0, 0x1.852b72792c0a2p-193, 0.0,
     0x1.996d21f707697p-737, 0x1.7f2e1fad35a31p-86, 0x1.ac98f0dd9f168p-73,
     0x1.bc00f3bc30299p-836, 0.0, 0x1.9c1f90dbc9d5bp-805, 0x1.89706bf4da3a2p-62, 0.0,
     0.0, 0.0, 0.0, 0x1.3d116b1a4ab7p-863, 0x1.ba02b1c9d76d1p-172, 0.0,
     0x1.1a62aa7b41262p-265, 0x1.71e22031ba257p-991, 0.0, 0x1.99da60f44a167p-354, 0.0,
     0.0, 0x1.848dba7aa052bp-489, 0.0, 0.0, 0x1.3eed227f7f5e2p-32,
     0x1.9393cb427935p-654, 0.0, 0x1.42b3c0144b507p-494, 0.0, 0x1.0e8f5f12f17bep-357,
     0x1.874998f117a6ap-167, 0x1.0bbf6fbed0f76p-389, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11040a8db4323p-114, 0.0, 0x1.5451044b4457ap-229, 0.0, 0.0, 0.0,
     0x1.53f5c8629c39fp-887, 0x1.42a046e1c2ce7p-914, 0.0, 0.0, 0x1.bba56cfbdbe0fp-641,
     0x1.666d39c01df0ap-299, 0x1.7725f685d5eaap-271, 0x1.022adb1c785dp-807,
     0x1.72f073fbbd9bap-366, 0.0, 0x1.fa2cfe0903456p-886, 0x1.3619fa006ff14p-678,
     0x1.be8301f4b8e3dp-334, 0x1.134a414431fb6p-751, 0.0, 0.0, 0x1.ca5d9ea349919p-441,
     0x1.7b13f34a197efp-606, 0x1.c9b85dd66870dp-530, 0.0, 0.0, 0x1.ef8ea9a8dbc6ap-160,
     0x1.f68697326a339p-918, 0.0, 0.0, 0x1.7397e623c8ab6p-827,
     0x1.5bba864d5177bp-1007, 0x1.d4ba601a32249p-806, 0x1.5c0cf1cdbe642p-474,
     0x1.7bbef9b1fa024p-15, 0.0, 0.0, 0x1.afba0bdc282bdp-313, 0.0,
     0x1.889cd566a0e4bp-234, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd86b9adc9beap-822,
     0x1.ca4d637f1669ep-301, 0x1.551cffc331e52p-46, 0.0, 0.0, 0.0,
     0x1.ee48baf31b4edp-596, 0.0, 0.0, 0x1.9835c5fef58dap-154, 0x1.0727f188c5979p-354,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2340ed4cbfbep-176, 0.0, 0x1.275abc1a67cd1p-199,
     0x1.cc73a47f6ab1bp-989, 0.0, 0x1.10f57df815aecp-567, 0x1.8f28647b25b95p-1009,
     0.0, 0.0, 0.0, 0x1.3084f32c56fcbp-362, 0.0, 0.0, 0.0, 0x1.3d7bef4ef6919p-518,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1cf890515bdp-704, 0x1.23803e75caf11p-100, 0.0,
     0x1.74270ffe87a58p-389, 0.0, 0x1.b89179d077e62p-68, 0.0, 0.0,
     0x1.5bd3eabd281e1p-576, 0x1.8f1a38541b00ap-89, 0.0, 0x1.27c003be94966p-260,
     0x1.e9295fdf05544p-994, 0.0, 0.0, 0.0, 0.0, 0x1.ea258f07d9826p-444, 0.0,
     0x1.7701cbf6588acp-27, 0x1.6c2849251ca7ep-57, 0x1.f6eea6dc52b2cp-687, 0.0,
     0x1.3a8105ad245bfp-452, 0.0, 0.0, 0.0, 0x1.843f35931530cp-286, 0.0, 0.0, 0.0,
     0x1.2b04048de4d37p-348, 0.0, 0x1.8df15a0192fd6p-613, 0.0, 0x1.9287e666dded6p-906,
     0x1.a123855e6ee98p-1014, 0.0, 0.0, 0x1.7944257dc604ep-403, 0.0,
     0x1.d969dfd83feacp-101, 0x1.5e26c51f4393dp-226, 0.0, 0.0, 0.0,
     0x1.5f8758d1106d5p-939, 0x1.3a80a9ec3d867p-21, 0.0, 0x1.6fb6f6f16b94bp-401, 0.0,
     0.0, 0x1.70b7d7c2ca89dp-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f66cba584facp-66, 0x1.ac315faaa63bep-1011, 0.0, 0.0, 0x1.02045e5765fa2p-689,
     0x1.4403f561794f4p-420, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48afcc40de26fp-52,
     0x1.e9b88891ef3f8p-824, 0x1.e524a5313c81ap-691, 0.0, 0.0, 0.0,
     0x1.89159bbd3b9fp-7, 0.0, 0x1.5f339f79c9061p-798, 0x1.8ee683083a587p-388,
     0x1.b02582fafa2e4p-560, 0.0, 0.0, 0.0, 0x1.a0cc1568e918cp-370, 0.0,
     0x1.5f7419b12bfbep-83, 0.0, 0.0, 0x1.6ffc40da1c815p-909, 0x1.55b50e2996e18p-590,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.46cd8ed2d59cp-977, 0.0, 0.0, 0x1.5f2a7cf695301p-872,
     0x1.fdabae3ebd7cbp-34, 0x1.34e818c04a558p-274, 0.0, 0x1.74a3b6105c52fp-411,
     0x1.9e15fc64307dap-434, 0x1.4bab3986a8e36p-786, 0x1.95c7a5c3a9c4dp-466,
     0x1.acc314c63e50fp-780, 0.0, 0x1.b9b530c9a5c5fp-793, 0.0, 0.0,
     0x1.a238971fd9975p-608, 0x1.adda84fa74157p-38, 0x1.09ac3c4e32c1dp-929, 0.0,
     0x1.b82d6c799c134p-709, 0.0, 0.0, 0.0, 0.0, 0x1.6ae519089d68ep-261,
     0x1.75b80ac2a9e36p-521, 0x1.057f1056e69b3p-323, 0x1.c2a7792fb9741p-7, 0.0, 0.0,
     0x1.dca5d8257e51cp-833, 0.0, 0x1.a8f20eb778126p-371, 0.0, 0x1.2c46738c12ec1p-220,
     0.0, 0.0, 0.0, 0x1.208962e49238fp-887, 0.0, 0x1.0c6f41fec3ad1p-657, 0.0,
     0x1.9feab840fe605p-505, 0x1.daed7b33e4c3bp-866, 0x1.7e2f9f593239ap-442, 0.0, 0.0,
     0x1.687c197f272d6p-689, 0.0, 0.0, 0x1.9c307342c0e6ap-793, 0x1.7e1305d853a78p-980,
     0x1.ec1188a8cdb54p-368, 0x1.563cc0b1ad4f1p-550, 0x1.f1cf33aaff6c8p-425,
     0x1.ccb08640f3655p-867, 0.0, 0x1.d3cb797446deep-646, 0x1.b1d72ce06ed17p-559,
     0x1.e97b35e9bf6f8p-786, 0.0, 0x1.b80f42c10b4d9p-374, 0x1.50db902643bfp-77, 0.0,
     0.0, 0.0, 0x1.b402618539992p-875, 0x1.913e90da526a2p-773, 0.0, 0.0, 0.0,
     0x1.8a2aefe28c3fcp-234, 0x1.c455e12e5ff9bp-867, 0x1.3ea7f2a8ae4fep-206,
     0x1.9497ded5250d4p-469, 0.0, 0x1.50e733977471p-250, 0.0, 0.0,
     0x1.8393d3c0ba933p-241, 0x1.c1d8ec861e84p-567, 0x1.03cdb07bf71cp-625, 0.0,
     0x1.ac42994f277e3p-159, 0x1.dfafcdd406936p-99, 0.0, 0.0, 0.0,
     0x1.bd2389d2a3cd6p-76, 0x1.1889f38d3d44ep-154, 0.0, 0.0, 0.0, 0.0,
     0x1.832c4c5f0fb2cp-645, 0.0, 0.0, 0.0, 0.0, 0x1.d8507e3c2a63dp-262, 0.0, 0.0,
     0.0, 0.0, 0x1.eafb632317789p-387, 0.0, 0.0, 0.0, 0.0, 0x1.c8616a2da63d8p-995,
     0.0, 0.0, 0x1.117ed3bc9513cp-511, 0x1.9b179ef3e8e48p-104, 0x1.a8afe6c7ba0edp-909,
     0.0, 0x1.96fdceb5aeabap-848, 0x1.c6b421b6e6f9ep-360, 0x1.aa974f7b9ce1bp-528, 0.0,
     0.0, 0x1.8bee288fb7332p-364, 0.0, 0x1.ab4a85074c384p-316, 0.0,
     0x1.f1d8ea4e5b06ap-596, 0.0, 0.0, 0.0, 0.0, 0x1.5a17a7043faf6p-221, 0.0,
     0x1.f45ccd354f7c1p-712, 0x1.f27ea65bac353p-525, 0.0, 0x1.badf9fd185184p-909,
     0x1.c46ca2c8e2e54p-885, 0.0, 0x1.e97877cd8467dp-179, 0x1.22df916f1c6cep-673, 0.0,
     0x1.0e84ebac53721p-105, 0.0, 0.0, 0x1.f430e4dbc4e1cp-718, 0x1.8b8352e2ba31p-893,
     0.0, 0.0, 0x1.e446968510eedp-476, 0.0, 0x1.26ad9dfe80db5p-572,
     0x1.89c5a03edbd31p-219, 0x1.b41d40788e3b3p-733, 0x1.6bd9e3efc27a1p-882,
     0x1.b3fe48377005fp-438, 0x1.110ebb7bf423dp-874, 0.0, 0x1.d9b656aeba223p-942, 0.0,
     0x1.7148cfc24684bp-1015, 0x1.07dfb9bb28612p-46, 0x1.070b2b2193953p-731, 0.0,
     0x1.6b4b9bd952245p-73, 0x1.ca444a41e8359p-81, 0.0, 0x1.8d061e8e9dbf8p-842, 0.0,
     0x1.11bee50c6c495p-589, 0x1.c07a5cf494edap-809, 0.0, 0x1.a6fec0ea3686p-358,
     0x1.eb92b2da21a44p-475, 0.0, 0x1.6b0e800d03c47p-55, 0.0, 0x1.1c8f47053e9d1p-925,
     0.0, 0x1.0c5dac32968bcp-47, 0.0, 0x1.cb052ad5d8c9ap-550, 0x1.ba5d4aa09747p-531,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00a1fc0594d8fp-318, 0.0, 0.0, 0.0, 0.0,
     0x1.1db345068976cp-776, 0x1.168217f96768ep-13, 0.0, 0x1.48f3778a6936p-1012, 0.0,
     0x1.52aa6e5e19237p-495, 0.0, 0x1.ff37494618e55p-1011, 0.0,
     0x1.8a8ce01ecdb48p-647, 0x1.adeb7e36ad099p-181, 0.0, 0x1.e87902fea3c48p-983, 0.0,
     0x1.0582572440246p-836, 0x1.484038465abdap-818, 0.0, 0.0, 0.0, 0.0,
     0x1.91aa0adce013p-177, 0.0, 0.0, 0x1.164e0631d0bfdp-868, 0x1.a828b6ffc6d3cp-293,
     0.0, 0x1.4c1f6ca44ee0dp-69, 0.0, 0x1.e026bd56d7b45p-794, 0x1.e1c8f5bdd292cp-269,
     0x1.072e11e4c13f4p-467, 0.0, 0x1.1353a7eb7fc66p-440, 0.0, 0.0,
     0x1.82c59ea69d92p-379, 0.0, 0x1.2bfdc8b9f1434p-327, 0.0, 0x1.32548214f5b5ap-365,
     0x1.9ac7d7cca334cp-319, 0.0, 0.0, 0x1.f433aef191d45p-796, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.92fed7f252735p-968, 0x1.1f4f123126614p-409, 0.0, 0x1.cf5a818c06771p-102,
     0.0, 0x1.81961d05e658ep-297, 0x1.4be5cf56a1e6dp-317, 0x1.cf77e0683b5fbp-790, 0.0,
     0.0, 0.0, 0.0, 0x1.4433fe65de12ep-89, 0.0, 0.0, 0.0, 0x1.dacb7a08e4716p-51, 0.0,
     0x1.6efee1c1bbeb4p-761, 0.0, 0x1.03737f650696bp-500, 0x1.2b0a21e7fe6d3p-751,
     0x1.2e2053eeaff23p-878, 0.0, 0x1.ad4419812373cp-467, 0.0, 0x1.5ba56c5d03db9p-723,
     0x1.269b906cd364ep-653, 0.0, 0x1.91f220b4efd3p-53, 0x1.22653ff0b2f9fp-844,
     0x1.7ce894ebf7294p-956, 0x1.bb80620abe31dp-633, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e732a170530f7p-129, 0.0, 0x1.f762cbcd4b763p-581, 0.0,
     0x1.a4e7442cdb05bp-817, 0.0, 0.0, 0.0, 0x1.c7da82e4a9ee3p-439, 0.0, 0.0, 0.0,
     0.0, 0x1.03302c7deae4bp-186, 0.0, 0x1.27c1225b73728p-919, 0.0,
     0x1.a44f7dc8d4ebfp-975, 0x1.a12eff7a47fap-969, 0.0, 0x1.8e40952feb626p-655, 0.0,
     0x1.75e0001c59b26p-704, 0x1.1636122503569p-514, 0.0, 0.0, 0x1.0af18fe90ca78p-945,
     0x1.5be52d07d7932p-387, 0x1.d99a1bc32a23bp-888, 0.0, 0x1.b49e1c93947a9p-469,
     0x1.ab67f4475573bp-685, 0x1.942e1dbb6805ep-861, 0x1.c6c287f8466a5p-199,
     0x1.d1d6df5c3182p-653, 0.0, 0x1.e62806c6e3c93p-270, 0.0, 0.0,
     0x1.3fddfb97a382dp-893, 0x1.0660cc29b7e6cp-344, 0x1.23dcb986178efp-495, 0.0, 0.0,
     0x1.1acb992a2cad3p-938, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.277fedc8586d5p-534,
     0x1.aa8a46938648bp-202, 0x1.73df50e311p-921, 0.0, 0x1.91d01af9f6bedp-323, 0.0,
     0x1.526674674b235p-206, 0.0, 0x1.976f271b875cdp-127, 0.0, 0x1.b5969e10a733fp-379,
     0x1.3644f35031c23p-31, 0x1.0160bfda420cfp-362, 0.0, 0.0, 0.0,
     0x1.b0c49b3b87d58p-789, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fe8813ef55a53p-178, 0.0, 0x1.b9c4af5d44ef5p-10, 0x1.55ffcc776a737p-217,
     0x1.300893d0ed022p-895, 0.0, 0.0, 0x1.5bd3514c82ba8p-471, 0.0, 0.0, 0.0, 0.0,
     0x1.a07ec14e5744cp-13, 0x1.73f6521751df2p-164, 0x1.dbd9c6ca5c955p-614,
     0x1.60be6f2fe86aap-292, 0.0, 0x1.b42eeb0424f32p-231, 0x1.eae1f0e012cc4p-223, 0.0,
     0.0, 0x1.1817bc66eb43p-522, 0.0, 0x1.9753b29878d96p-589, 0.0,
     0x1.0a6880666324dp-372, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.707fda74a45ecp-877,
     0.0, 0x1.8130e152a4b58p-618, 0x1.3ce1c68c29034p-917, 0.0, 0x1.e286a29f1c3b7p-503,
     0.0, 0.0, 0.0, 0.0, 0x1.7d4618567c891p-142, 0x1.1b3279baf2e36p-671,
     0x1.d568fd1fdb5dbp-794, 0x1.84ad86eb6e99fp-112, 0.0, 0.0, 0x1.7356d3735fa37p-23,
     0.0, 0x1.3f86791c5538cp-151, 0.0, 0.0, 0x1.aedd61ec2500ap-242,
     0x1.321dc3946306ap-474, 0x1.7ab747f474621p-155, 0x1.8f82ece4cf813p-696,
     0x1.78c5708e97591p-140, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c59343c50ff64p-469, 0.0,
     0.0, 0x1.29fc41f568ccdp-102, 0x1.6d20f0e42353ep-106, 0x1.a52986b38bffep-548,
     0x1.e375194275dc1p-204, 0.0, 0x1.b793fe6e50691p-430, 0x1.817139460a31p-905,
     0x1.54207eeade209p-851, 0x1.3319f55ae5bfcp-405, 0x1.fb15d455ae039p-336,
     0x1.fc1530953c047p-546, 0x1.6999e130ea05cp-261, 0.0, 0.0, 0x1.f136a19d36b0fp-175,
     0.0, 0.0, 0x1.2aa2a019840e3p-684, 0.0, 0.0, 0x1.78e849f429d52p-129,
     0x1.5d018f053eb64p-462, 0.0, 0.0, 0.0, 0.0, 0x1.9629f273bb995p-676, 0.0,
     0x1.758e054002776p-317, 0.0, 0.0, 0x1.8ecf689ad2a54p-410, 0x1.aec75d76373a7p-388,
     0x1.e6ecfbf68b12dp-816, 0.0, 0.0, 0.0, 0x1.6069c54892d01p-138,
     0x1.e11504064bc2ap-909, 0.0, 0x1.b75a7cead658cp-386, 0x1.9c574cf12121ep-439, 0.0,
     0x1.bf76db03f5dcap-575, 0x1.b4674e623bc97p-636, 0x1.bb26623828d02p-562,
     0x1.6e76681a105cep-15, 0x1.adf18f3f36136p-593, 0x1.0f0556b929ea4p-421, 0.0, 0.0,
     0.0, 0x1.d71587b8eb42p-389, 0x1.03a0bf3eb0e5fp-1014, 0x1.e7c9f79b413c5p-317, 0.0,
     0.0, 0.0, 0.0, 0x1.fd5400bb09407p-878, 0x1.4336e54bd9612p-317,
     0x1.1f5fb6127cfb2p-535, 0x1.a0a69aab5de1ap-402, 0.0, 0.0, 0.0,
     0x1.44e2961d23401p-828, 0.0, 0x1.c4fcfd31fdbfcp-207, 0.0, 0x1.1c20221bc4bf8p-97,
     0x1.d9daa8a7f302ap-5, 0x1.b314439663a4ap-48, 0.0, 0x1.a238fcb1f3e96p-980, 0.0,
     0.0, 0x1.46aff676b156fp-672, 0.0, 0.0, 0x1.640dffc8e3d5dp-722,
     0x1.3ec81006c3841p-258, 0.0, 0.0, 0.0, 0x1.e886e77b4d5e1p-510, 0.0, 0.0, 0.0,
     0x1.ccfae2ae0b7e3p-29, 0x1.9de3c9d3d3ae5p-834, 0x1.69db25cfefedp-934,
     0x1.bbb4e4b75f1a4p-717, 0.0, 0x1.2f91b3c6d820ap-486, 0.0, 0.0,
     0x1.6412c97d596d1p-334, 0x1.223509a28b6f2p-506, 0.0, 0x1.8420d584c8b0fp-959, 0.0,
     0.0, 0x1.dd0faa14f9385p-542, 0x1.d1c0529a4c8cep-388, 0.0, 0.0,
     0x1.2121fc19746a8p-433, 0.0, 0.0, 0.0, 0x1.74152fe621b26p-488, 0.0, 0.0,
     0x1.9659b8dfb9a6ep-1001, 0x1.3ee450729bf9fp-627, 0x1.c392a5486af56p-508,
     0x1.7d9ef9bd108d7p-991, 0.0, 0.0, 0.0, 0.0, 0x1.050c8ae9cce17p-108, 0.0,
     0x1.3414ae6818012p-140, 0.0, 0.0, 0x1.e1e8235052bc6p-979, 0.0,
     0x1.d2bb26484ac4ap-108, 0x1.433aa43a8dc52p-896, 0.0, 0x1.daa4ff36f9f5dp-722, 0.0,
     0.0, 0.0, 0x1.880fb08650284p-176, 0.0, 0x1.3048aa6355033p-913, 0.0,
     0x1.f7b9278bc8522p-748, 0x1.08eeacd5c9fafp-717, 0x1.ce81017b8b963p-595, 0.0,
     0x1.8af0dbdefcab6p-1020, 0.0, 0.0, 0x1.92b99bc79d2f2p-65, 0x1.35526d212c4a8p-623,
     0x1.9d4c41d6a878dp-946, 0.0, 0x1.cc5a8f2d1a207p-155, 0.0, 0x1.c0b0237aca3c1p-316,
     0x1.ce5fbcafc7cdap-566, 0x1.94960f36da722p-336, 0.0, 0.0, 0x1.e6802fd52135fp-778,
     0x1.1b9d8330a2897p-791, 0.0, 0x1.d4a369f9d664bp-84, 0.0, 0x1.d2c0f92f3ded1p-694,
     0x1.e9390153ef9f9p-453
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
            tmp1 = Sleef_finz_exp2d4_u35kvx(tmp0);
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
    printf("Sleef_finz_exp2d4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp2d4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
