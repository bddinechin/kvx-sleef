/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd1_u35purecfma.c --function \
 *     Sleef_finz_acosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.810cae9c68e19p-821, 0.0, 0x1.755a1ae718927p-1009,
     0x1.e1852e319b1fap-759, 0x1.be8ffb11e4351p-909, 0.0, 0x1.80ff61b06f681p-525,
     0x1.81214fcb56e9cp-658, 0.0, 0.0, 0x1.9f7dd69146a84p-947, 0x1.e771ebdff04abp-157,
     0.0, 0.0, 0x1.d7077afd36ecbp-431, 0x1.90825fa3f42fp-792, 0.0,
     0x1.b1167d801893fp-546, 0x1.1ebb77790437ep-681, 0.0, 0.0, 0.0,
     0x1.c878bc9de744cp-852, 0x1.69541cade57e7p-255, 0x1.2d092c312a49ep-620, 0.0,
     0x1.88e646ed253f2p-581, 0x1.c21ce40db72b7p-266, 0x1.c9790fa145d17p-970,
     0x1.4781dbbbd0a25p-56, 0x1.08dac47c4c4a3p-5, 0.0, 0x1.387f4f3b2ef62p-499,
     0x1.aeda3850539cp-860, 0.0, 0x1.e0a1445c00c42p-973, 0x1.f29a229b58ddep-490, 0.0,
     0.0, 0.0, 0x1.16b24c916106cp-708, 0x1.08b56922053c1p-212, 0.0,
     0x1.699e68232437dp-24, 0.0, 0x1.9604e1c989e84p-965, 0x1.b2f242e841ff2p-868,
     0x1.836977e2b4b0bp-797, 0.0, 0.0, 0x1.5bb0a4a883c97p-501, 0x1.e7523541b3c85p-662,
     0x1.842563f7c3084p-518, 0.0, 0x1.e8b05d759faf3p-383, 0x1.baf3e7844fa35p-347, 0.0,
     0.0, 0.0, 0.0, 0x1.76357db026c7cp-734, 0.0, 0x1.21eb856ff9c95p-525, 0.0, 0.0,
     0x1.e6ae85d3b2cbp-573, 0x1.164bcf1962ef6p-928, 0x1.60bab553f7b2dp-922,
     0x1.a0f4e4057730ap-899, 0.0, 0x1.0760c3cbd619ep-614, 0x1.1145386f32847p-727, 0.0,
     0.0, 0.0, 0x1.e3b4d6ee8f084p-462, 0x1.485065f2afb0ap-708, 0.0, 0.0, 0.0,
     0x1.a90186c4e55e4p-155, 0x1.b907ab229ade6p-641, 0x1.28eebba843ba5p-42,
     0x1.1e277d78eba5dp-500, 0.0, 0.0, 0x1.b6b7395b4ca7ap-365, 0.0, 0.0,
     0x1.4b2d86da58d38p-879, 0.0, 0x1.6a5e2a9024fd3p-27, 0.0, 0x1.ac95a8da6ba2ep-654,
     0x1.94f811a2ac138p-824, 0x1.17d8178931835p-67, 0.0, 0x1.63c6aca870d0ap-137, 0.0,
     0x1.d9e20c97d85d3p-52, 0.0, 0x1.6a427e2dcd295p-198, 0x1.ae7bc195c879cp-967,
     0x1.14e20e0252f63p-721, 0x1.5be4d1aa43b69p-296, 0x1.66fb19ea24f83p-842, 0.0,
     0x1.ac01dc954c062p-871, 0.0, 0x1.7a4cb4b649fb5p-395, 0.0, 0.0,
     0x1.3420164a71f57p-811, 0x1.d1ba477b0968p-210, 0x1.4f9a9f8d07416p-221,
     0x1.d84af63bdfe1fp-93, 0.0, 0x1.242d008109d0bp-761, 0x1.7248448b77754p-329,
     0x1.b1b80d121117fp-423, 0.0, 0.0, 0.0, 0.0, 0x1.958d530fef275p-423,
     0x1.fb44910bb708ap-935, 0.0, 0x1.a0e5d3457e6bfp-629, 0.0, 0x1.c7edce8484012p-283,
     0x1.8199d98b86c36p-41, 0.0, 0.0, 0x1.05d883f04add8p-196, 0x1.673059bb7f63ep-916,
     0x1.b17d6d4ce821cp-215, 0x1.e8cbe7840a5f8p-529, 0x1.fe5969bbd274p-554,
     0x1.d1e08e34a2af1p-29, 0x1.9d60667e36f85p-101, 0x1.558c418e91ad9p-719, 0.0,
     0x1.0e13e63efdb7bp-850, 0.0, 0.0, 0x1.45f855280bf27p-568, 0x1.356068e73d499p-425,
     0.0, 0.0, 0.0, 0x1.abc97462397fdp-960, 0.0, 0.0, 0x1.777150803b43bp-877, 0.0,
     0.0, 0x1.3f1869aea594fp-890, 0x1.8812914a377f8p-475, 0x1.804cd3206e299p-322, 0.0,
     0.0, 0x1.555a48bbe7c1bp-317, 0.0, 0x1.be4d437d70f6p-259, 0x1.5372bb1625c0ep-917,
     0x1.992aeabef4feep-132, 0x1.1b178acb487d6p-948, 0.0, 0.0, 0x1.a271eabbd2fdp-757,
     0x1.c3624f922d157p-7, 0.0, 0x1.de408bab0f8d4p-679, 0x1.fa30b068a26b1p-862, 0.0,
     0x1.cd118c80e08d1p-566, 0.0, 0x1.d5ebe1ba4a555p-784, 0x1.c09f561f7f117p-597, 0.0,
     0.0, 0x1.9e4e411164354p-289, 0x1.f83f61687652ep-215, 0.0, 0.0,
     0x1.9578d537e3fa5p-568, 0x1.a6f4d15d9a72dp-613, 0x1.1841a843e5b1cp-956,
     0x1.de54ed8627261p-958, 0x1.85b44d398b9d7p-448, 0.0, 0x1.b5598f809562p-560, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.858552960ed7ap-631, 0.0, 0x1.19151c679b37fp-570,
     0x1.490f0ad733675p-952, 0x1.49d68895e4768p-630, 0.0, 0x1.7c3b58681b26p-359, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.347c2d42bfaf4p-793, 0x1.0d328cc5a7044p-610,
     0x1.efc02cae9e06fp-378, 0x1.8f082e1c2696ap-471, 0x1.74ccf14b90e08p-119, 0.0, 0.0,
     0x1.bf8ac71aa3feep-433, 0.0, 0.0, 0.0, 0.0, 0x1.996e186656c4bp-441, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b3bf8d2fcce5ap-150,
     0x1.d03a931283d09p-981, 0.0, 0x1.be34409bca9bap-640, 0x1.8ae7b0429e2f9p-342,
     0x1.de18b1671228cp-381, 0x1.873e231ff3a9ep-596, 0x1.c819956e4a603p-967, 0.0,
     0x1.eb565cd84f2a3p-742, 0x1.661a95b0e5d5dp-727, 0x1.78f9731ec077ep-928,
     0x1.7168b045e8709p-814, 0x1.2da4389d889dp-683, 0x1.787d4535c2c86p-556,
     0x1.544e81960bd45p-177, 0x1.3e6f7c52bb766p-653, 0.0, 0.0, 0x1.c5ed0a49a0c6ep-729,
     0x1.aa5025c7fc7bep-351, 0.0, 0x1.8239c9cb84868p-142, 0x1.f51f9807f6468p-48, 0.0,
     0.0, 0.0, 0x1.485ab39fa936ep-432, 0x1.3d77b593286f9p-48, 0x1.5cb6b8271f752p-980,
     0.0, 0x1.fd355ee504df7p-370, 0x1.4c59c37f590b4p-492, 0.0, 0x1.0a26cbd2fb999p-472,
     0x1.69650845c6731p-697, 0.0, 0x1.62413d448b18bp-282, 0.0, 0.0, 0.0,
     0x1.437341390ab0bp-713, 0.0, 0x1.71a6ea1e1e128p-582, 0x1.4c494e3d556afp-757,
     0x1.88ff3f33dc276p-742, 0x1.7f02181fdb287p-21, 0.0, 0x1.007a0bdcb37c7p-462, 0.0,
     0.0, 0x1.31e3320b63764p-419, 0x1.3e0f3be240939p-387, 0x1.eb760c03004d4p-675, 0.0,
     0x1.de0b50d9369d1p-539, 0x1.2ccb29563defap-426, 0.0, 0x1.89c6f7c838ea2p-74, 0.0,
     0.0, 0.0, 0.0, 0x1.590c02f3db74fp-329, 0x1.9d5a11018a875p-611,
     0x1.018dc3ca3476fp-906, 0.0, 0.0, 0x1.9aa7d0f6b06efp-97, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bdbc0fe4f254dp-816, 0.0, 0.0,
     0x1.eb63141c32e19p-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11478a212a2d2p-727,
     0x1.e4fb9a046f031p-31, 0.0, 0x1.64fdfd246cefbp-904, 0x1.b779aca52d0aap-514, 0.0,
     0x1.237d1c7242725p-771, 0x1.a56ebcb28312ep-988, 0.0, 0.0, 0.0,
     0x1.08e161ce263aap-249, 0x1.0003eda64c92fp-390, 0x1.46ab6bc7875dfp-504,
     0x1.72931678a9fdep-574, 0.0, 0x1.0ae5a249f652cp-771, 0x1.7c6fc2221ce24p-203, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0c084b1c479d5p-976,
     0x1.624cdec39a918p-581, 0.0, 0.0, 0x1.1277ee4e2b8ap-976, 0.0, 0.0,
     0x1.646c3d598acddp-786, 0x1.7bec1dc7f591ep-882, 0x1.6551d4301f9f2p-847, 0.0,
     0x1.eeadfa0153cd6p-415, 0x1.b15b0741aa6dbp-771, 0x1.d85fd14ebb7b3p-453, 0.0,
     0x1.d17a447100b14p-796, 0.0, 0x1.3bb1c40aeb89fp-625, 0x1.6eb3501dfc14dp-660,
     0x1.52390146ed3cap-505, 0.0, 0x1.f870ff0b1d12dp-327, 0x1.5a084d9118b97p-545, 0.0,
     0.0, 0.0, 0x1.e60fc2ffb6df5p-442, 0x1.7cc2feee66ba1p-311, 0.0, 0.0, 0.0, 0.0,
     0x1.6fc0ece964764p-99, 0x1.de78955f34b7ep-411, 0x1.a21caffd46a52p-179, 0.0,
     0x1.3c0ce84f361c9p-666, 0.0, 0x1.2ebfdf468f61cp-603, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2e9ad9bccee2cp-145, 0.0, 0.0, 0.0, 0x1.4dd213ddb2004p-771, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.409b25edd30a4p-615, 0x1.c2fb99e05a2e3p-651, 0.0,
     0x1.c70254b520b8ep-731, 0.0, 0x1.a3a55b85e490dp-901, 0x1.05ace927b60c5p-648, 0.0,
     0.0, 0x1.0440f24684a56p-1013, 0x1.34231c3913f93p-974, 0x1.47f07ded986fcp-1018,
     0x1.39891d8bdcefap-342, 0.0, 0x1.3b61f5b9e2403p-242, 0x1.155499aafb56fp-274, 0.0,
     0x1.1336eb3383ec7p-725, 0x1.eb44a1d5d8c27p-294, 0.0, 0x1.2660795bd5128p-677,
     0x1.b043ee293abf5p-800, 0.0, 0x1.c0c3d7b2f581bp-20, 0x1.3f89a82d16c6ap-619,
     0x1.e66d0a4fce18cp-175, 0x1.ce8ac4ab18f89p-852, 0x1.f0a73aa4cfdc2p-572,
     0x1.5f51457f09c9fp-835, 0x1.007c798e50403p-845, 0x1.c9c987e520b3ep-717,
     0x1.febf9e0833321p-1010, 0x1.5814698f4a02p-435, 0x1.d0dcc237caad7p-721, 0.0, 0.0,
     0x1.b8d98a645d245p-411, 0x1.018657eba90efp-674, 0.0, 0.0, 0x1.12b654f571eaep-91,
     0x1.0f4be2451444bp-402, 0.0, 0.0, 0.0, 0.0, 0x1.e88dbc39a56fep-847,
     0x1.ec4cebdc65a09p-708, 0x1.eb8a17f843e9fp-624, 0.0, 0x1.ffce4895e41b9p-347,
     0x1.88f5daf4132c5p-442, 0x1.e67c28d2e5a31p-572, 0x1.2f8299923850fp-143, 0.0, 0.0,
     0.0, 0.0, 0x1.cc5c7df36bf86p-918, 0x1.1b53be1340372p-715, 0x1.6cea71b2c43b5p-890,
     0.0, 0x1.3c3a86ed2859ep-380, 0x1.7966b827ecb8ap-670, 0.0, 0.0, 0.0, 0.0,
     0x1.d6f698c9144d4p-548, 0.0, 0x1.46732f0bf6883p-647, 0.0, 0.0,
     0x1.ba069e9234581p-212, 0.0, 0x1.20dba4190ab37p-124, 0x1.210295f35d78ap-986, 0.0,
     0x1.213dc57e9f9p-245, 0x1.385e8b9c5ed52p-153, 0x1.5ffa246aeede4p-821, 0.0,
     0x1.d47505f3e1632p-644, 0.0, 0.0, 0.0, 0x1.5dca189f8c217p-418,
     0x1.66338f9bcd4d2p-469, 0.0, 0.0, 0.0, 0.0, 0x1.046e4ef42de7p-261,
     0x1.c48b2ced0ff8p-212, 0.0, 0x1.8195e71f89384p-556, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb680f5af14cbp-756, 0x1.fe1c57c6b49aap-764, 0x1.c131bed585c2fp-974,
     0x1.3c214c0d8c06dp-247, 0.0, 0.0, 0x1.dd51691e7d3d2p-646, 0.0, 0.0,
     0x1.3a0d4cd5f3361p-49, 0.0, 0.0, 0.0, 0x1.ce38ddc4f093p-581, 0.0,
     0x1.3cc1fcd108047p-428, 0x1.d338bcf04c1c4p-466, 0x1.ecdf7ec6fd88p-693, 0.0, 0.0,
     0x1.00a30f0b5e11ep-857, 0x1.2ed474f8aac1dp-536, 0.0, 0x1.74387d3dc10bcp-241,
     0x1.41cebbfadcd78p-508, 0x1.70fa54039466ap-876, 0x1.1532943cc08e9p-4, 0.0, 0.0,
     0.0, 0.0, 0x1.444b8b004a17bp-877, 0.0, 0.0, 0x1.3adcd2626c316p-1006, 0.0,
     0x1.653588c25d6p-68, 0.0, 0.0, 0.0, 0x1.e890749e1d81fp-58, 0.0, 0.0,
     0x1.e6dcb32f57527p-277, 0.0, 0x1.ab8796d2c6b95p-927, 0.0, 0x1.72baad77abde2p-738,
     0.0, 0.0, 0.0, 0x1.8b5a1e1af595bp-951, 0.0, 0.0, 0.0, 0x1.1ab830b7709e1p-271,
     0.0, 0.0, 0.0, 0x1.c9f8fb18e7dfbp-871, 0x1.4f40340770929p-526, 0.0,
     0x1.949e46cb79edcp-215, 0x1.0956831e5ef8bp-370, 0x1.3aed2fd88b77cp-656, 0.0, 0.0,
     0x1.a7e66150d1cf5p-904, 0x1.02a21548363cp-55, 0x1.aec221603d25cp-24,
     0x1.1dabef224e9d3p-132, 0x1.ef1940022888cp-787, 0.0, 0.0, 0x1.e9e363bd3e997p-846,
     0x1.a4c8ac0844ea6p-837, 0x1.ebe528f76c869p-1002, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72b7d91d85cc3p-889, 0x1.579a9e282e4ddp-384, 0x1.758238422083cp-50, 0.0,
     0x1.7913d1a6fb14p-91, 0.0, 0.0, 0x1.fd8214bb28fc1p-658, 0.0,
     0x1.1c2862a5268b6p-581, 0.0, 0.0, 0x1.c59b499b8e8f6p-72, 0.0, 0.0,
     0x1.b548995aaffa1p-332, 0x1.b7bee34962c1cp-645, 0.0, 0x1.112b0a107de5ap-829, 0.0,
     0x1.ddffd71986b46p-527, 0.0, 0.0, 0x1.7a29b04062ee8p-749, 0.0, 0.0,
     0x1.4848efab675abp-222, 0.0, 0.0, 0.0, 0x1.5ea19d6e66c3fp-419, 0.0,
     0x1.053b8cfa849fp-469, 0.0, 0x1.e72ce23fad13cp-433, 0.0, 0x1.06a973a8ba25cp-407,
     0x1.2c9e26bc6d1f7p-25, 0x1.350c49b8735acp-975, 0x1.b497958adc6b2p-764,
     0x1.6b275cbc0c623p-563, 0x1.6b703bec70833p-596, 0.0, 0x1.5995023f32574p-415, 0.0,
     0x1.cb21a44d853cfp-596, 0x1.e1332d062ad65p-84, 0x1.e46cddae71b73p-280, 0.0, 0.0,
     0.0, 0x1.6ca5d391e2ef5p-235, 0x1.d4e2c5c190371p-67, 0x1.6864c597cfcc5p-54, 0.0,
     0.0, 0.0, 0x1.7285c390e308fp-966, 0x1.c36f77bede5a4p-151, 0x1.f74ab8791f61ep-674,
     0.0, 0.0, 0x1.a67671e69eb8p-143, 0.0, 0.0, 0x1.2586fb0448bddp-187,
     0x1.fc92d35aa9c1ap-89, 0x1.667e05c634f28p-896, 0x1.fa61b9671f06ap-39, 0.0, 0.0,
     0x1.5f5878334b6e1p-231, 0x1.53cec7341b6e3p-957, 0x1.b99d208a4e60ap-559, 0.0,
     0x1.78dfbbba900e7p-275, 0.0, 0x1.ebf51772f538dp-518, 0x1.0d3b1ab1f9218p-564,
     0x1.f88e8525c8066p-669, 0x1.72cc0f59ff0dbp-309, 0x1.fdbef8b5eb21bp-264,
     0x1.c2d5da73fe572p-10, 0.0, 0.0, 0x1.69c999cdb4c36p-464, 0.0,
     0x1.f6b109bacf1b8p-119, 0.0, 0x1.24df6aab9a4aap-416, 0x1.753e83528dc3cp-627,
     0x1.dc104a65d6f6dp-9, 0.0, 0x1.ec1b3e65ee0edp-178, 0x1.892e7def23dcep-657, 0.0,
     0x1.e7918277cec76p-544, 0.0, 0x1.76779c6a0c81ap-379, 0.0, 0x1.c2abf2190741ap-895,
     0.0, 0.0, 0.0, 0.0, 0x1.ba59362e0f428p-632, 0x1.a14ef64f218fp-231,
     0x1.8bd8e9f504ec5p-486, 0.0, 0.0, 0x1.3317cc0a47a97p-484, 0.0, 0.0,
     0x1.dcb9a48ed1696p-658, 0x1.9ad732cc0051cp-737, 0.0, 0x1.94896302c0636p-104,
     0x1.2682da8e775dap-594, 0.0, 0.0, 0.0, 0x1.127e9293956e1p-426,
     0x1.07398f570173ap-51, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1f05b6c91c8dp-339, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.95c03fe175285p-749, 0x1.0c22b372eb23bp-393,
     0x1.b226abbf6bc13p-857, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb0ebe470620bp-339, 0.0, 0x1.3c28416802f15p-225, 0.0, 0.0, 0.0,
     0x1.b2889ffce93c2p-965, 0.0, 0x1.4bbdf158b094p-135, 0x1.3e71cbb9e8a2p-360, 0.0,
     0x1.d36a8cef639fp-940, 0.0, 0x1.026c61fc84225p-27, 0.0, 0.0, 0.0, 0.0,
     0x1.f09743410eb31p-642, 0x1.3bc79541ead82p-21, 0x1.f1fc0903e568ep-227,
     0x1.970bb59226b3fp-760, 0.0, 0x1.144f48e110348p-879, 0.0, 0.0, 0.0,
     0x1.2c96327085acp-337, 0.0, 0.0, 0x1.5f92bb29b5613p-646, 0.0, 0.0, 0.0,
     0x1.84ab8728f8017p-976, 0.0, 0x1.f92670b9e7dedp-875, 0x1.6aa76f75e101ep-930, 0.0,
     0x1.10b5563417c2bp-623, 0.0, 0.0, 0.0, 0x1.4c42afe2b375p-214, 0.0,
     0x1.abe5f1ae9ab78p-904, 0x1.4027f46c2ceddp-867, 0x1.aab126421dd4fp-28, 0.0, 0.0,
     0x1.ab17a660f5166p-955, 0x1.5a3e6964efefcp-83, 0x1.c2c720a438d94p-471, 0.0,
     0x1.197be715427e7p-127, 0x1.5af79ceceb0d6p-207, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.50f09e309f6acp-37, 0.0, 0.0, 0.0, 0x1.e39469ec524ebp-34,
     0x1.d33e4d14b644p-518, 0.0, 0x1.7bf2cb4606f13p-34, 0x1.39cdf62f5623dp-372,
     0x1.4dfcf7f71aed4p-91, 0x1.397961601c796p-344, 0x1.2818b7cb7fca7p-256,
     0x1.240d4c66f892dp-327, 0x1.dfc646275a1c2p-468, 0x1.e31187df5303dp-161,
     0x1.6dfc74b572dfep-412, 0x1.c29fb8c97ce9bp-49, 0x1.2c3eb0984421ep-67, 0.0,
     0x1.791f54f5c5bfdp-682, 0.0, 0x1.0552be218a0b4p-837, 0x1.841a625d1daa8p-352,
     0x1.d078e7ea9fe07p-704, 0.0, 0x1.b5e2263cffbf1p-701, 0x1.60a7f2597bed4p-973,
     0x1.bec17e6570354p-99, 0x1.27d3d824d13fep-652, 0.0, 0x1.566c1d046c29ap-471, 0.0,
     0x1.3b13f5bc54c7ep-112, 0x1.c337d53e734b6p-841, 0.0, 0x1.88e47ea6f9ee3p-961,
     0x1.3ca11a827cccdp-721, 0x1.d6ddf7ac731fbp-15, 0x1.17f2c3bda47bbp-420,
     0x1.0bac0145e1bep-884, 0x1.312d4a726f18bp-312, 0.0, 0.0, 0x1.c51961e603995p-68,
     0x1.14c60eb5498cap-703, 0.0, 0.0, 0.0, 0x1.1c4dc94ef4e02p-1002, 0.0, 0.0,
     0x1.4ce4232237c0fp-6, 0x1p0, 0x1.7a5d79de360a1p-606, 0.0, 0x1.e036d75583de5p-401,
     0.0, 0.0, 0.0, 0x1.2a1a2b4a6dad1p-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc978c6d79ff4p-139, 0x1.758f2bc3d740ap-289, 0x1.bd23cf9a77998p-532, 0.0,
     0x1.f533be02d81f5p-76, 0.0, 0.0, 0.0, 0x1.6435224b36c08p-845, 0.0, 0.0, 0.0,
     0x1.c9a7723728f14p-128, 0.0, 0x1.7260d60dd8783p-237, 0.0, 0.0, 0.0,
     0x1.5e8e4878f6efbp-925, 0x1.05864307eca17p-240, 0.0, 0.0, 0.0, 0.0,
     0x1.504aafb8532dp-573, 0x1.218d87fba715dp-860, 0.0, 0.0, 0.0,
     0x1.1e4260cf42c77p-916, 0.0, 0.0, 0x1.05b9aa79ae6cfp-483, 0.0, 0.0, 0.0,
     0x1.6c1f3d73b24fap-566, 0.0, 0x1.9a92a7a292f18p-530, 0.0,
     0x1.37ce0acaa582cp-1005, 0x1.cba579b646e8bp-370, 0.0, 0x1.437f36088c304p-135,
     0x1.a933f5bf1fb1ep-828, 0.0, 0.0, 0x1.12cf15295fc65p-624, 0x1.b7a00ae3281aap-986,
     0x1.bf50b1857057fp-354, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.902b56966951bp-981,
     0.0, 0x1.f5c570bd53195p-618, 0x1.3876c19a2c905p-370, 0x1.b9e7accc7a947p-1004,
     0x1.d604a319b0207p-26, 0x1.73871946fa315p-886, 0.0, 0.0, 0x1.979cf53ccf32fp-896,
     0x1.2c09107eea6f3p-285, 0x1.30cc7f89ff56bp-383, 0.0, 0.0, 0x1.113d0355a0ccap-749,
     0x1.5d707efd33c95p-254, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f83500067bef2p-74,
     0x1.669e32ba00fd8p-884, 0x1.45efabf76cbe5p-1006, 0.0, 0.0, 0.0,
     0x1.00e3318044d2cp-379, 0.0, 0x1.e3b5d717ec36fp-633, 0.0, 0x1.28ba1471cdb41p-815,
     0.0, 0x1.a968732fa86ecp-662, 0x1.3df0c9c628e26p-967, 0x1.f136664ddfecbp-232, 0.0,
     0.0, 0x1.adc278d613211p-902, 0x1.51d1cf6f862fcp-318, 0x1.afe3303b6db15p-857, 0.0,
     0x1.a8e46f340b8fcp-1019, 0x1.40f3d0855e3b7p-754, 0.0, 0x1.f65676a72268ep-560,
     0x1.52f978d2e693bp-351, 0x1.614147d1092d9p-511, 0x1.738b492cb67fap-193,
     0x1.e1130b8bb0022p-521, 0.0, 0x1.897c7a5b6e9bbp-1014, 0x1.003cb9ecbee41p-295,
     0x1.f23132a046b01p-646, 0.0, 0.0, 0.0, 0.0, 0x1.55eb6e83cdd7p-178, 0.0,
     0x1.e6f0a2989f729p-304, 0.0, 0.0, 0x1.854e20b16ee08p-430, 0.0,
     0x1.0eba1d022f285p-258, 0x1.796ea3d9d3541p-701, 0.0, 0x1.7a7c8bf5d6a2p-610,
     0x1.87db704e6eb49p-139, 0x1.fb156d355bbd2p-790, 0.0, 0x1.3e1664de074e5p-401, 0.0,
     0x1.df28e4c846211p-381, 0x1.827c939a34ab5p-587, 0x1.dbf9998972aa7p-144, 0.0,
     0x1.f07367de484ebp-824, 0.0, 0x1.dbe9e4660aecfp-945, 0.0, 0.0, 0.0,
     0x1.42067a2b92651p-611, 0.0, 0x1.c768a35fb71aap-791
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_acosd1_u35purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_acosd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
