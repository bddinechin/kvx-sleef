/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid1_u35purecfma.c --function \
 *     Sleef_finz_sincospid1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.7da9983ae1681p-651, 0.0, 0x1.2c045a61924b1p-528, 0.0,
     0x1.aa8bed7795739p-968, 0.0, 0.0, 0x1.2f0140a12e10fp-443, 0x1.8f44a27be20b4p-929,
     0.0, 0.0, 0.0, 0.0, 0x1.763a3442fd504p-39, 0x1.e7677feb6f294p-614,
     0x1.1a4f5786088e2p-439, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4726db508706p-647, 0x1.0611daaa69fa2p-847, 0x1.f5f3be8fa1b46p-325, 0.0, 0.0,
     0.0, 0.0, 0x1.69d06ff392b94p-779, 0.0, 0.0, 0x1.81545d5d88074p-4,
     0x1.a0aec4e86dac6p-531, 0x1.62a2c57f8a18ap-566, 0x1.2df0f7637c031p-984, 0.0, 0.0,
     0.0, 0x1.62517f8e1cdcp-940, 0.0, 0x1.25dba4d464b7p-330, 0x1.7b5c9c9024964p-1018,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1cc7a64f5822p-960, 0x1.578b23c398799p-658,
     0x1.b1f5dcd5e37ccp-763, 0x1.73f8cb6aada1dp-832, 0x1.49467cbf2dea5p-375, 0.0,
     0x1.5449b7c253959p-1015, 0x1.2fb7fa85b9b9ep-982, 0x1.bac91d4a77faap-99,
     0x1.3abab50206064p-981, 0.0, 0x1.40ede28a9778fp-242, 0x1.55d7eb01b88a6p-402, 0.0,
     0.0, 0x1.5338edd54259ep-256, 0.0, 0x1.6e5696a801d89p-82, 0.0,
     0x1.8f98182b095p-645, 0.0, 0x1.bc960ff4d5bdep-177, 0x1.861e21c94f3b3p-881,
     0x1.2806153de432p-258, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a933308996173p-655, 0x1.4c6dc4bdf8d73p-480, 0.0, 0.0, 0x1.b93897d4d2106p-334,
     0.0, 0.0, 0x1.759450792a54fp-713, 0x1.81cfe3d91f35ap-261, 0.0,
     0x1.31504f101a70ap-789, 0x1.c463fa3aa4541p-144, 0.0, 0x1.df678cd4c66afp-748,
     0x1.5929a9de79e82p-586, 0x1.0419dcea3169ap-291, 0.0, 0x1.034713de06d77p-963, 0.0,
     0x1.c9fd5e712d22p-129, 0x1.e3f57ad1ebfcp-350, 0.0, 0x1.8f466059244b5p-146,
     0x1.9545b6be46f1bp-254, 0x1.bf891dcd3d89fp-846, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a9637e12faf6p-727, 0x1.1fe936ee94631p-643, 0x1.c23721abcec2cp-769,
     0x1.5c909f125c7a7p-122, 0x1.451f87d5c0634p-764, 0.0, 0.0, 0x1.60ee9ed855508p-769,
     0.0, 0x1.4d57fa86a0241p-157, 0.0, 0x1.5b20420af729dp-307, 0.0,
     0x1.5f8795aba2937p-705, 0x1.b4ba2bf35143ep-203, 0x1.47fff245f694p-304, 0.0, 0.0,
     0x1.3e1e3a143d4fbp-235, 0.0, 0.0, 0.0, 0x1.a3cac60984c09p-628, 0.0, 0.0,
     0x1.2fbdd5847e42p-836, 0.0, 0x1.8ffd266e68606p-822, 0x1.cc7fb8cc994e5p-422,
     0x1.1dce19a2fbd35p-819, 0x1.2c5a71bc7e05fp-564, 0x1.143817187a32cp-578, 0.0,
     0x1.60caadee74a49p-701, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c782e5b366c43p-895,
     0x1.9427dcfa945f3p-835, 0x1.7858412f210c3p-257, 0.0, 0.0, 0x1.0e6073687d818p-327,
     0x1.ec948e47f1657p-936, 0x1.bc4c68ee9361p-542, 0.0, 0.0, 0x1.7b0a4c41f7feep-649,
     0x1.728cb76320174p-144, 0x1.bba927a149128p-707, 0x1.49e7d9aaeeee6p-621,
     0x1.5d69f19ba14bdp-33, 0x1.83e11fff821d5p-868, 0.0, 0.0, 0.0,
     0x1.81a829c10fb5dp-953, 0.0, 0.0, 0x1.579d7dcc4f1dap-995, 0x1.7da5a3609a36ap-851,
     0x1.24d9867607eb7p-706, 0.0, 0.0, 0x1.d7d19ea420e6p-146, 0x1.5905c76c95263p-918,
     0x1.3623bc4d321a3p-131, 0x1.da550fda228ccp-60, 0x1.501f9c286ddb2p-588,
     0x1.9a70824eb9cc1p-660, 0x1.c241a67d627cep-474, 0.0, 0.0, 0.0, 0.0,
     0x1.78813e29b3e55p-488, 0.0, 0.0, 0x1.585f55e92dc66p-291, 0.0, 0.0,
     0x1.c5c6fff645537p-585, 0.0, 0.0, 0.0, 0x1.cf6abe940c043p-944,
     0x1.a42a30445e0b3p-898, 0x1.d929a127b5f67p-162, 0.0, 0.0, 0.0,
     0x1.07295f615da1cp-562, 0.0, 0x1.3b75bbc84b4d9p-720, 0x1.c70a3f31e4bfcp-357,
     0x1.82e383ac25a49p-112, 0x1.9f2b8a8ff018cp-1010, 0.0, 0x1.337cdaa288737p-61,
     0x1.c52252fe98647p-520, 0.0, 0.0, 0x1.c51d9fb96e0d7p-723, 0x1.dd912f0fa9e3cp-965,
     0.0, 0.0, 0.0, 0x1.3a3440a7ad53bp-582, 0.0, 0x1.e47c19bfebe27p-398,
     0x1.f91afeedd3c6p-691, 0.0, 0x1.5b912f8974d43p-914, 0.0, 0x1.a36311e58fd79p-476,
     0x1.d32908de2e821p-370, 0.0, 0.0, 0x1.c97d29fc05fe9p-77, 0.0, 0.0,
     0x1.680ebe05b804ep-353, 0.0, 0x1.958c8aafb1c14p-58, 0.0, 0.0, 0.0,
     0x1.c947e57a48e9ep-850, 0.0, 0.0, 0x1.691ed0b5994b2p-483, 0x1.9f270b586e69ap-566,
     0x1.6e7d214a97841p-670, 0.0, 0x1.635f5408a94cfp-978, 0.0, 0x1.7981a3b97a86p-1022,
     0x1.20b624e1cc7f3p-7, 0.0, 0.0, 0x1.ddd64c67b7748p-128, 0x1.af2185934963p-778,
     0.0, 0x1.83173f442f2d3p-556, 0x1.9569e60aedd78p-533, 0x1.cc3b55eb5671p-862, 0.0,
     0x1.667c5978e4312p-504, 0x1.f499b5690b9b9p-432, 0x1.5d86a312706f8p-598, 0.0,
     0x1.92ec3f1866c8bp-92, 0x1.8c6c18fd34bafp-788, 0.0, 0.0, 0x1.8fe8dba976184p-764,
     0.0, 0.0, 0x1.989ab4bad77fdp-723, 0.0, 0x1.9c4087d658158p-167,
     0x1.6dbc06e890aabp-36, 0x1.542c831296a2fp-434, 0.0, 0x1.a806c1018543cp-83,
     0x1.df00933835995p-14, 0.0, 0.0, 0x1.418a9732388f8p-1019, 0.0, 0.0,
     0x1.692a78d4f91bap-784, 0.0, 0x1.f173612ecde65p-9, 0.0, 0x1.386ee5bdd9514p-1013,
     0x1.1a5edf9de061fp-102, 0.0, 0.0, 0.0, 0x1.e19b7ea7e5a31p-995,
     0x1.3ff3b68286209p-517, 0x1.e7bdee2d5dddbp-147, 0.0, 0.0, 0x1.a7190edc8cd6ep-722,
     0.0, 0x1.bbde2e93d78e1p-281, 0.0, 0x1.398faab6024c1p-19, 0.0,
     0x1.21f625aa7592cp-861, 0x1.ddea247be6a57p-279, 0.0, 0x1.ed07484232d95p-893, 0.0,
     0x1.a90157df8d22cp-8, 0x1.5ed58fe0385b3p-615, 0x1.e58e0ebe7634dp-511, 0.0,
     0x1.7d21ce7c37c66p-454, 0x1.ac54935594fc5p-383, 0.0, 0x1.efc852201cebep-917, 0.0,
     0x1.2183ea79cf719p-942, 0.0, 0x1.eec9120770bap-174, 0x1.2b051940ba362p-625, 0.0,
     0x1.8a27f0df4fb1bp-766, 0x1.d9f49cade1674p-151, 0x1.780a329d2b08p-53, 0.0,
     0x1.ebde6076541c1p-913, 0.0, 0.0, 0.0, 0.0, 0x1.dade2ee1053e7p-789, 0.0,
     0x1.c0b38bbb84576p-798, 0.0, 0x1.1321b4e50e8afp-537, 0.0, 0x1.a0efebb4e1ab4p-846,
     0x1.f691512bd1e78p-89, 0.0, 0x1.61feb7337d937p-581, 0x1.da3aac1d94e8dp-51, 0.0,
     0x1.577e141d959dcp-66, 0x1.e8b2b93335936p-915, 0x1.e86dde9e0b8e9p-471,
     0x1.7a6af8a499ffdp-165, 0x1.04f2dec5ed03dp-314, 0x1.d61dadbbd5a11p-207, 0.0,
     0x1.81c5628579267p-812, 0x1.7fa0d45438ed4p-234, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1bc9c33ca0715p-62, 0.0, 0x1.0c4fed8b2c572p-404, 0x1.fcc0f3392e6dap-238, 0.0,
     0.0, 0.0, 0.0, 0x1.865f96dd74c43p-865, 0.0, 0.0, 0.0, 0x1.9b50693fbe1f2p-516,
     0.0, 0x1.dc0990c429b26p-667, 0.0, 0.0, 0x1.879f27a415d17p-646, 0.0,
     0x1.2fb301a2887abp-680, 0x1.cb31d30b0c13cp-968, 0x1.b95c09460abd8p-944,
     0x1.7ff781df69c31p-827, 0x1.fe2c6fcfd87f2p-866, 0.0, 0.0, 0x1.bb447980b2f9bp-628,
     0.0, 0.0, 0.0, 0.0, 0x1.645379dc0aef9p-877, 0.0, 0x1.fdaf6d01c63b9p-984, 0.0,
     0x1.250dd41b2607dp-984, 0.0, 0.0, 0x1.37b6f40e01714p-841, 0.0,
     0x1.3c8351d29f98ap-531, 0.0, 0.0, 0x1.582a8b3f83481p-978, 0x1.40aee2f1fc417p-68,
     0x1.9be2851d5dc9ap-156, 0x1.11295f65106cdp-559, 0x1.ec0bfb3d7512fp-270, 0.0,
     0x1.997d56f608bffp-117, 0x1.494ee9fdcca3p-100, 0x1.16e7bf3a1b62fp-468, 0.0,
     0x1.2b4225350a547p-517, 0.0, 0.0, 0x1.54c94c9f30f44p-452, 0x1.d5d1cd4756d2p-679,
     0.0, 0x1.e37f38307606ap-503, 0.0, 0x1.42e0e3f26d907p-794, 0.0, 0.0, 0.0, 0.0,
     0x1.abd38780844dfp-29, 0x1.9ceac97712efcp-235, 0.0, 0.0, 0x1.0945018e486bdp-799,
     0.0, 0.0, 0.0, 0x1.b213c31ee54bcp-273, 0.0, 0.0, 0.0, 0.0,
     0x1.55ff73d08bf67p-811, 0.0, 0.0, 0.0, 0x1.8a67da4c54c56p-781,
     0x1.8935bf2121c3fp-609, 0.0, 0x1.8195c38da7f1dp-16, 0.0, 0.0, 0.0, 0.0,
     0x1.f6ae03c6175e8p-580, 0.0, 0.0, 0.0, 0x1.21b842b80a863p-859,
     0x1.36f7473bae903p-871, 0.0, 0x1.8b8cbff68cdaep-973, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c4317c94d30dcp-364, 0.0, 0.0, 0.0, 0x1.8873b5a0fb6a3p-236, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d78ececebb911p-111, 0.0, 0.0, 0.0,
     0x1.ee6c17c158fbap-381, 0.0, 0.0, 0x1.34d708bf0cf2bp-167, 0.0,
     0x1.e3a31ae40cadcp-628, 0x1.63283985cb193p-554, 0x1.0f724b9d21aap-926, 0.0, 0.0,
     0x1.d5bbb256b05bp-90, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e711aaadf6b37p-837,
     0x1.06716efb7f043p-371, 0.0, 0.0, 0.0, 0.0, 0x1.74b078c50319fp-257, 0.0, 0.0,
     0.0, 0x1.4197b325c8bfbp-354, 0.0, 0.0, 0x1.7874e8a29af1cp-635,
     0x1.f3a08c7d70dc6p-301, 0.0, 0x1.6bfde142c91e9p-637, 0x1.4d3a1544d1cc2p-430, 0.0,
     0.0, 0.0, 0x1.eecf0e786322bp-997, 0x1.5fe9fb86c3d73p-546, 0x1.a69c48967a0a3p-528,
     0.0, 0x1.181f0d1e66063p-301, 0x1.b34a48bd5f62fp-800, 0x1.47b611c9b6434p-449,
     0x1.1999919cbdcb7p-321, 0x1.168945625e5edp-397, 0.0, 0x1.27d66b7b90651p-116,
     0x1.fda2a07fa6288p-1011, 0.0, 0x1.80bae4a3e952ap-221, 0.0, 0x1.e405be2608d69p-90,
     0.0, 0.0, 0.0, 0x1.370c2c2a9cdcdp-651, 0x1.286cd3633076p-112,
     0x1.6940ecbe84dep-615, 0x1.ad92d14b0fc51p-643, 0x1.840f46cd8d7d9p-402, 0.0,
     0x1.44a94eb04ff55p-333, 0x1.86d077bf6181dp-797, 0.0, 0x1.32563c1f1dfa7p-646, 0.0,
     0x1.f6eb6a8fdbc55p-338, 0.0, 0.0, 0.0, 0x1.6e4b17461c73dp-481, 0.0,
     0x1.ab40c6e8108d4p-307, 0x1.9e7808af1f8d7p-386, 0x1.3f410e55439aap-6,
     0x1.a8489fdb82168p-540, 0.0, 0x1.986be6eafae91p-473, 0.0, 0x1.1a33e729d5ad3p-587,
     0.0, 0x1.664ed0a0d4327p-913, 0.0, 0x1.5701a1811bcb2p-641, 0.0,
     0x1.99e5c0be97d2cp-205, 0.0, 0x1.87e21eb2f4d05p-703, 0x1.d1a900a3002dp-187,
     0x1.157920ce00cb3p-660, 0.0, 0x1.bb62be76fac96p-215, 0x1.aa46c4ed8cc2ep-320,
     0x1.7c6f003ccfc1dp-150, 0x1.d285368be71a5p-545, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2acb5433b34e6p-834, 0.0, 0.0, 0.0, 0x1.7aa2425e63804p-543, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.02ce0a62e2725p-602, 0.0, 0x1.f49b80e4429p-553, 0.0, 0.0,
     0x1.5334449eac609p-967, 0x1.33a76ee34d59p-787, 0x1.ce21397f1e1e2p-395,
     0x1.ab0546ea136f1p-201, 0x1.fdd8bfadc8c3bp-922, 0x1.29748620c4ea4p-296, 0.0,
     0x1.f2afbebb2d537p-578, 0x1.7d8a5cf264cp-66, 0x1.b79080e301aeep-555,
     0x1.10bf3abb0b524p-1003, 0x1.30b2e93e523aep-445, 0x1.5535d47e0610dp-833, 0.0,
     0x1.dd9dd05d241c2p-39, 0x1.f2edccdc33204p-763, 0.0, 0.0, 0x1.ea3ce3e53a1fep-328,
     0.0, 0.0, 0.0, 0.0, 0x1.df3436c902d52p-154, 0x1.7417665784e4fp-461,
     0x1.c4a4f3b12e6fdp-388, 0.0, 0.0, 0.0, 0x1.aaa7209dac44fp-300, 0.0, 0.0,
     0x1.8b4b8fc49d66p-298, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f7a0b1a4ddbcp-719,
     0x1.416fd1727c785p-496, 0.0, 0.0, 0x1.4c66708e499ffp-214, 0x1.de9bf8275c37ap-690,
     0x1.5fe31c0690589p-674, 0x1.4398fafad5b8bp-676, 0x1.9bf7719f9951dp-683, 0.0,
     0x1.84fa9caa88bd9p-360, 0.0, 0.0, 0.0, 0.0, 0x1.b5051a179be59p-477, 0.0, 0.0,
     0x1.ea414ecd6ec0fp-838, 0.0, 0x1.51a6eb042187p-404, 0x1.c5cb07cac546cp-9,
     0x1.4cee2341fcee6p-863, 0x1.0706a259e51b4p-996, 0x1.9b08161ff11afp-322, 0.0, 0.0,
     0.0, 0.0, 0x1.8a36499302b95p-408, 0.0, 0x1.b18596aa59b76p-195, 0.0,
     0x1.bca5dd09e200ap-220, 0x1.b474c6460765cp-620, 0.0, 0x1.df8f61f813677p-585,
     0x1.a92373dadd62ap-888, 0.0, 0.0, 0x1.7eb9d6a9a2d3dp-894, 0x1.32d51cdd33ab9p-580,
     0.0, 0.0, 0.0, 0x1.27e50e78f5d36p-566, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fcc59e3480279p-160, 0x1.8fbbcdf4f8635p-857, 0.0, 0x1.0963c296406ebp-988, 0.0,
     0.0, 0x1.04930279a3abp-895, 0x1.40f26ca49b86fp-23, 0x1.43e1efc59796dp-994,
     0x1.a67ebe514dd29p-611, 0x1.f98f092968fb4p-937, 0.0, 0x1.579fb22dd1127p-983, 0.0,
     0x1.6164cb9ba8a7ap-334, 0x1.549c16742b9p-278, 0x1.89691ac2d71adp-13,
     0x1.7e62af4900427p-506, 0x1.31fc0732c0f3ap-159, 0.0, 0.0, 0.0, 0.0,
     0x1.131943ccef08ap-916, 0x1.bdca82bac4d7cp-253, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d39663c3aba44p-841, 0x1.48fc62b1464cdp-553, 0.0, 0.0, 0.0, 0.0,
     0x1.70e7fec5ddbb6p-49, 0x1.196d7f829961fp-889, 0x1.a86ec0bdf93dbp-354,
     0x1.0a0e5d9d98e82p-201, 0.0, 0x1.2b40ac9702d6cp-409, 0x1.ccaf71deb1f5dp-1022,
     0.0, 0x1.829a4c2f68dcap-716, 0.0, 0.0, 0.0, 0x1.4167b71647c5dp-21, 0.0, 0.0, 0.0,
     0.0, 0x1.65233185e37c1p-624, 0.0, 0.0, 0.0, 0.0, 0x1.23c7d299f57b7p-772, 0.0,
     0.0, 0x1.0bf6c1095e438p-657, 0.0, 0.0, 0x1.2b68a5719a972p-127, 0.0, 0.0,
     0x1.7ca71084de06ep-17, 0.0, 0x1.5cdcfb92cdadfp-253, 0.0, 0.0,
     0x1.93852c38e5337p-193, 0.0, 0x1.33b6168fb8443p-874, 0.0, 0x1.56bd231a25b56p-605,
     0x1.64d34f71f789ap-488, 0x1.880bedfefe263p-605, 0.0, 0.0, 0.0, 0.0,
     0x1.37dea6da35e32p-355, 0x1.0ba21ed43ca04p-325, 0.0, 0.0,
     0x1.a931e7fe757e9p-1013, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ae3c871a3330ap-327, 0x1.12a803c29fd6fp-382, 0.0, 0.0, 0x1.f5d4ea9090b5fp-602,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0672a2b1384b9p-365, 0.0, 0.0,
     0x1.c352c0058f859p-527, 0x1.3398614d137adp-827, 0.0, 0x1.78d07f6150a86p-881,
     0x1.09d54b52e3132p-693, 0.0, 0x1.bf9e01099f639p-927, 0.0, 0.0, 0.0, 0.0,
     0x1.0a9e33b1292dp-619, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90b61c406d49ap-220, 0.0,
     0x1.4899e4dbb30ecp-19, 0.0, 0x1.d366f1f1c27dep-836, 0x1.d5a3ea5d6b4e8p-367, 0.0,
     0.0, 0x1.ff15e2c91d065p-257, 0.0, 0x1.6347d4607805bp-315, 0x1.1b66190ee689bp-894,
     0x1.8566ef97186dfp-685, 0.0, 0x1.ebe8025050ab8p-17, 0x1.5b741630db62ep-541, 0.0,
     0x1.388bf53942205p-949, 0.0, 0.0, 0x1.2e1448eec1957p-305, 0.0, 0.0,
     0x1.c49f036ef5bf9p-622, 0.0, 0x1.7037f333ec109p-68, 0x1.ba14403c804c6p-225,
     0x1.e566442823bbdp-553, 0x1.a411882c4dfafp-359, 0x1.26c8369af6d4ap-649, 0.0,
     0x1.af2b580deb31p-671, 0x1.b1d3bc4a04a05p-501, 0.0, 0.0, 0x1.90f76505f6d5fp-968,
     0x1.101d4d2a3dad1p-278, 0.0, 0x1.d1da351f1a8dcp-504, 0.0, 0x1.9fd88e50d8a0dp-556,
     0.0, 0.0, 0x1.d894d74dd7255p-185, 0x1.8dd350628d18ep-779, 0x1.f014fe55f1756p-808,
     0.0, 0.0, 0x1.fd61890bd6e85p-474, 0x1.6e800e1dfe70cp-711, 0x1.8b4515b36e3c9p-148,
     0.0, 0x1.d5f242c2cdff5p-694, 0.0, 0x1.c756a0c8a63e4p-35, 0.0,
     0x1.0b15f1cbe7fc2p-760, 0x1.fb7ebb7ace894p-344, 0.0, 0x1.363b59366ad5ap-1000,
     0.0, 0.0, 0x1.bb7100da406d9p-468, 0x1.3213e1db4ab3dp-359, 0x1.881271f130671p-870,
     0.0, 0x1.30f5aa2050eccp-1016, 0x1.e314ad85bf644p-543, 0.0, 0.0,
     0x1.f7b07f33d9a21p-1021, 0x1.94ccd9ce832a9p-38, 0x1.883a5b260ddbap-217, 0.0,
     0x1.5d6554965e931p-623, 0.0, 0.0, 0.0, 0x1.aa4dc4c0765b6p-644,
     0x1.ab476804aa2a4p-187, 0.0, 0.0, 0.0, 0.0, 0x1.aad9acd06749bp-800,
     0x1.996febd84f39fp-713, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.891d629f17d14p-450, 0x1.5a54b09bcb40bp-622, 0.0, 0.0, 0x1.b45d744b2fe04p-467,
     0.0, 0x1.387f895802e6ep-581, 0.0, 0x1.aa270b865cb82p-604, 0.0, 0.0, 0.0,
     0x1.ff9188f99fd38p-119, 0x1.b7eba3d778638p-757, 0.0, 0x1.bd1238724525dp-874,
     0x1.9d2955da29defp-610, 0x1.6660e622b6e96p-101, 0x1.84cbc843ca777p-357, 0.0, 0.0,
     0.0, 0x1.70994cd252751p-316, 0x1.ac397649970ffp-340, 0.0, 0.0, 0.0,
     0x1.9efafeb8c6657p-647, 0x1.f169642d900f3p-138, 0.0, 0.0, 0x1.3d5bef90c729cp-261,
     0x1.b4d98cb347a31p-505, 0.0, 0x1.6b363d3ac5c14p-959, 0x1.a64662bda8dc3p-791,
     0x1.f63962f9276b1p-573, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f17e6c707a8d3p-22, 0.0, 0.0,
     0.0, 0x1.533931724cce1p-488, 0.0, 0x1.aa2571651f84cp-39, 0.0, 0.0,
     0x1.042ad726cb98bp-927, 0x1.1a5db7462aaf8p-930, 0x1.abf2c33979eaap-449,
     0x1.abb4d07e54cebp-488, 0.0, 0.0, 0x1.b7780fd2f0a1dp-538, 0.0, 0.0,
     0x1.8752e26af780ap-121, 0x1.5c72a7817b6c6p-928, 0x1.77eca8281fd46p-929, 0.0, 0.0,
     0x1.d3538444f30cep-361, 0x1.ab40e17876e42p-165, 0.0, 0.0, 0.0,
     0x1.6cd1410397c95p-629, 0.0, 0x1.da70f4613367cp-452, 0x1.43d704ce46c17p-836,
     0x1.754a35838652cp-677, 0x1.6634a6cc88e1fp-531, 0.0, 0x1.c8fc7ec7e42b7p-901, 0.0,
     0.0, 0x1.fb81abe028f3bp-496, 0.0, 0x1.c1adcd3cd3908p-886, 0.0,
     0x1.71794cbd78129p-133, 0.0, 0x1.5a302f8389872p-494, 0x1.fbb9483c08754p-491,
     0x1.6feb21ac23534p-61, 0.0, 0.0, 0x1.55ec7a534cd77p-2, 0x1.21d1d86d62796p-637
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincospid1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincospid1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospid1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
