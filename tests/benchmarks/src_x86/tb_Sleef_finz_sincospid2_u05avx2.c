/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid2_u05avx2128.c --function \
 *     Sleef_finz_sincospid2_u05avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.2fd85cc5519f8p-88, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9bc2dee1b72abp-348, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74df9f7265f9dp-1002,
     0x1.f7f0783e4d13p-555, 0x1.bc04378f8f058p-29, 0.0, 0x1.9d5930d3440d5p-683,
     0x1.a02949dda3b44p-366, 0x1.71fd269312cc5p-669, 0.0, 0.0, 0x1.14d941280d7fep-559,
     0x1.3d02772962477p-173, 0.0, 0x1.5fde643a187ap-603, 0x1.7bb36a705d677p-1012, 0.0,
     0.0, 0x1.24f1a5dbb71cbp-824, 0.0, 0.0, 0x1.b44f0dd8073cap-190,
     0x1.9466079a2c356p-32, 0x1.4d3895373069dp-611, 0.0, 0.0, 0x1.a3a8ee56c13e5p-718,
     0.0, 0x1.889d2cc3ae6dep-283, 0x1.58e99b935607p-294, 0x1.cf1b0eadc067dp-744,
     0x1.5461a7eee1165p-999, 0x1.3c0ba0f6d25c5p-662, 0x1.5195eb12ee732p-697, 0.0,
     0x1.1b898930b0684p-166, 0x1.fc1d1d4c60e1ap-944, 0x1.e000d4ec03b01p-918,
     0x1.c36320c787236p-640, 0x1.45558cde59f5ep-230, 0x1.dfead57e8e0dcp-814,
     0x1.17418beaadc25p-327, 0.0, 0.0, 0.0, 0x1.69228881e2046p-391, 0.0,
     0x1.3791be6d85ecdp-433, 0x1.0eeefa50a235fp-152, 0x1.45f4360476d01p-410, 0.0, 0.0,
     0x1.1d4a4062d0665p-772, 0.0, 0.0, 0x1.94144f02ec503p-867, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bd07a13ea3815p-867, 0x1.70dfd2795bcb5p-31, 0x1.5040c5be633c8p-109,
     0x1.4676819bd846bp-156, 0x1.dbe153132675ep-269, 0x1.43f8df7af058fp-852, 0.0,
     0x1.bc1081d1ffe6bp-1003, 0.0, 0x1.ab3ab6ce2a7d8p-789, 0x1.e29842d6ee363p-14,
     0x1.f821b279aadbfp-314, 0x1.4587b52311641p-677, 0.0, 0.0, 0x1.54498871b40e2p-606,
     0x1.a9b7aea8268bap-287, 0.0, 0.0, 0x1.6700bda39cb1ap-415, 0x1.f436b880d6d1dp-942,
     0x1.d0bdca85e7a5ep-369, 0.0, 0.0, 0.0, 0.0, 0x1.e6eca13f0bef9p-551, 0.0, 0.0,
     0x1.5e0283dccd20ap-348, 0x1.66e1e65c7e2eep-739, 0x1.50877ac92edc7p-193, 0.0, 0.0,
     0.0, 0.0, 0x1.7d81a8b7186e3p-134, 0.0, 0x1.7f77a70de1c1cp-601, 0.0,
     0x1.3a9bfd5f4fbf2p-167, 0.0, 0.0, 0.0, 0x1.eb1831c10b071p-815, 0.0, 0.0,
     0x1.42d55caa999fcp-966, 0x1.09bc05ed1cdeap-275, 0.0, 0x1.0b067da3faca2p-499, 0.0,
     0x1.9319f3e7a2422p-877, 0.0, 0.0, 0.0, 0x1.1a26aca7b1946p-821,
     0x1.1d2d4b916daap-237, 0.0, 0.0, 0.0, 0.0, 0x1.7708ce8aad116p-498, 0.0, 0.0,
     0x1.d85f5be47ce1p-33, 0x1.1dc51f84fe0aep-670, 0x1.ebb4a32bbfcb5p-1013,
     0x1.2ac4ad22232c9p-900, 0x1.9195bc694576p-669, 0x1.0a636178ce8fbp-406,
     0x1.c83715f453506p-742, 0x1.012d45c67385bp-980, 0.0, 0x1.1d978022239b8p-750,
     0x1.24742478bc3a2p-467, 0.0, 0x1.7da84d5287414p-428, 0.0, 0.0,
     0x1.b59c571ada48fp-573, 0.0, 0x1.aec762139cabbp-176, 0x1.fcbe2878d4f7ep-794,
     0x1.3c87f6fa78754p-860, 0x1.1041e3959425ap-522, 0x1.15b570a3274afp-421,
     0x1.39144ab5bc6aep-913, 0x1.5273bc9cfe8dbp-389, 0x1.6472685c832dep-868,
     0x1.5523208e19b4bp-847, 0x1.cc4875f5e6efdp-759, 0x1.8595c634a7066p-41,
     0x1.2571fe65c6e8ep-826, 0.0, 0x1.cd9a6f436f3d6p-472, 0x1.e12867be4c7e8p-505,
     0x1.d790e0c7c3a89p-705, 0.0, 0x1.1eedfd62b4949p-632, 0x1.2fc35df2f354cp-247,
     0x1.1039c848dcc2cp-508, 0.0, 0x1.7a9fceb8875d6p-987, 0.0, 0.0,
     0x1.ee4af5f48869p-656, 0x1.431dbc34cf436p-905, 0.0, 0x1.c4f4a6442c3edp-578, 0.0,
     0.0, 0x1.6268e9e2aaf4fp-279, 0.0, 0x1.33baa5237f62cp-271, 0.0, 0.0, 0.0,
     0x1.90b9cc1939243p-528, 0.0, 0.0, 0x1.7f24005185a45p-649, 0.0,
     0x1.20f14336b405cp-490, 0x1.b8f012958f205p-547, 0.0, 0.0, 0.0,
     0x1.1948caaad5847p-189, 0.0, 0x1.86c2c99d80bbp-771, 0.0, 0.0, 0.0,
     0x1.68dd30c5cb101p-128, 0x1.f2f172724052dp-610, 0x1.a3be942bca74dp-68, 0.0, 0.0,
     0x1.4485e8138e4b3p-639, 0x1.99588cd1224cfp-495, 0.0, 0x1.3ed84fec32023p-162,
     0x1.ec68da5b170c6p-914, 0.0, 0.0, 0x1.e42ae04523c45p-313, 0.0, 0.0, 0.0,
     0x1.ac2a3498fb1d1p-228, 0x1.ec2c079392512p-825, 0x1.24304e45a86b1p-905, 0.0, 0.0,
     0x1.fedb6f5ad596ep-763, 0.0, 0x1.12eef709dd3a5p-721, 0x1.10a23b63648c8p-837, 0.0,
     0.0, 0.0, 0x1.0d1862f49a345p-723, 0x1.620d7b8794dd5p-845, 0.0,
     0x1.b25ecef60fbf7p-968, 0.0, 0x1.64a642999ad3bp-318, 0.0, 0x1.638081cb369adp-863,
     0x1.b720c51eec996p-264, 0x1.aec6418fd8518p-773, 0x1.7761f413a8fbep-88, 0.0, 0.0,
     0x1.87f51ef40ccb6p-236, 0x1.e06a9c6669661p-699, 0.0, 0.0, 0.0,
     0x1.34d18c5f302c1p-466, 0x1.219b05794652p-210, 0.0, 0.0, 0x1.767ed61eb344p-602,
     0.0, 0.0, 0x1.2bbcddcfb0023p-554, 0x1.74348b435b547p-18, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2bd940404a2cfp-801, 0x1.b4cc5a14650a8p-611, 0.0, 0.0, 0.0, 0.0,
     0x1.eb10bf875e859p-457, 0x1.a3eef4068154fp-668, 0.0, 0x1.8daefc283fab3p-666, 0.0,
     0.0, 0.0, 0x1.d8245e0f0fd5ap-228, 0x1.0319a3d38ea5p-210, 0x1.590ecb9de2121p-145,
     0x1.447d09600dfedp-258, 0x1.c9fcba3709247p-668, 0x1.2c21afa565857p-850,
     0x1.21dfd3c93e19p-302, 0.0, 0.0, 0.0, 0x1.181ddd7b42325p-433, 0.0, 0.0,
     0x1.66b62688ae982p-675, 0.0, 0x1.76e21bdea0846p-36, 0.0, 0.0, 0.0,
     0x1.280f7f89ce864p-468, 0x1.e7c00f24cf663p-86, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e7cfd00994b7p-1013, 0.0,
     0x1.5c39845d92f36p-298, 0.0, 0.0, 0x1.01c709f82def2p-519, 0.0,
     0x1.6e1aacbb6ed7ep-880, 0x1.ef83c47d22137p-672, 0.0, 0.0, 0x1.65d231f9ad045p-672,
     0.0, 0x1.315670c5c0b3bp-852, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.96c533ff1d184p-224, 0.0, 0.0, 0.0, 0.0, 0x1.b290c252d44fep-72,
     0x1.e57e878010f76p-882, 0x1.dad02ac746311p-153, 0.0, 0.0, 0x1.b8756ddd40f2p-444,
     0.0, 0x1.5f1726c25e807p-736, 0.0, 0.0, 0x1.eb7507226821fp-580, 0.0, 0.0, 0.0,
     0x1.df68c222a294bp-756, 0.0, 0.0, 0x1.6abd8f167a268p-454, 0x1.41db87c67f57ep-454,
     0x1.044c801814c3ap-314, 0x1.b134f61b4c866p-385, 0.0, 0x1.817a97188fcbp-523,
     0x1.54697b5bef98ep-5, 0.0, 0.0, 0x1.0df4e2b7c9909p-713, 0.0, 0.0,
     0x1.1f23b299dc30dp-198, 0x1.6061eeeb6d96bp-730, 0x1.2855fef46d15cp-558,
     0x1.d31007210b4e9p-586, 0x1.fd083c3e706a7p-639, 0x1.931c7366ffa77p-379, 0.0, 0.0,
     0x1.877c52c3fbfddp-995, 0.0, 0.0, 0x1.d737868e03a0ap-280, 0.0,
     0x1.96c41f57b03f4p-35, 0.0, 0x1.60d6b9f733028p-140, 0.0, 0x1.66ea488891405p-197,
     0.0, 0.0, 0x1.456e1485d3cc6p-706, 0.0, 0x1.dc23d0593a74dp-510,
     0x1.fd00659ea0d33p-850, 0.0, 0x1.4494f3c4e2a22p-201, 0.0, 0x1.9f48829a5e30cp-205,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.381792d983235p-962, 0x1.782f71c1c5265p-52,
     0x1.87ecd6198fa6cp-312, 0x1.c99defa0d014cp-29, 0x1.3184952006889p-299,
     0x1.c39c1a7a58ac9p-221, 0.0, 0.0, 0.0, 0x1.fa3e7d0cb5822p-5,
     0x1.1bfbbacb9e75bp-484, 0.0, 0x1.6a5e124edc163p-313, 0.0, 0.0, 0.0,
     0x1.1c901277bffefp-619, 0.0, 0x1.ad1b5b42cc2a6p-508, 0.0, 0x1.45eabdb6fa243p-47,
     0x1.f2962cf4bbce3p-391, 0x1.ae4a386cd131fp-543, 0.0, 0x1.654937e6f5ccp-258, 0.0,
     0.0, 0x1.78cfdee9d23eep-386, 0.0, 0.0, 0x1.1c78ed93976ep-967,
     0x1.1fa52cb6f4936p-915, 0.0, 0x1.014ff02de46e2p-180, 0x1.af8b0be7281f4p-795,
     0x1.71eeb45577f59p-728, 0.0, 0.0, 0.0, 0.0, 0x1.beb0b140d356bp-144, 0.0, 0.0,
     0x1.4b1ffd19e87aap-806, 0x1.1478542cb36acp-75, 0x1.12a454676b132p-818, 0.0,
     0x1.626b99428febbp-305, 0.0, 0x1.7066cc0c5593cp-532, 0x1.b6634a46368cfp-119, 0.0,
     0.0, 0x1.40b05260ac48fp-624, 0x1.dae96422f8c6cp-998, 0.0, 0x1.3f566ac72cd62p-730,
     0.0, 0x1.ba1cca67f6fb4p-200, 0.0, 0x1.2d9f6362e722p-876, 0.0,
     0x1.5950104c7e325p-456, 0.0, 0.0, 0.0, 0x1.fce90162eb16fp-591, 0.0,
     0x1.02be8d4614024p-71, 0x1.102d9c9acee95p-687, 0.0, 0.0, 0x1.f2a5085a85e14p-108,
     0.0, 0.0, 0.0, 0x1.c47bfac97f6bdp-275, 0.0, 0x1.0556c82fd2f7dp-344,
     0x1.dc95563edc309p-496, 0.0, 0.0, 0x1.2bf84b3c5f6fep-272, 0x1.324557258267ep-637,
     0.0, 0x1.cf518597492dfp-849, 0x1.2c708ba53db3cp-70, 0x1.4b10ae08dda5fp-290,
     0x1.87db352e0360ap-482, 0x1.44099220daae7p-965, 0.0, 0.0, 0.0,
     0x1.df13aadff5027p-653, 0.0, 0.0, 0.0, 0x1.ef62112527587p-674, 0.0,
     0x1.cfa634520fd41p-693, 0x1.5e641a5d79fbep-96, 0x1.077adb7f3fedep-917, 0.0,
     0x1.cae9107f553fp-831, 0.0, 0x1.ebe49e8c919fp-983, 0x1.722a9adf76808p-654,
     0x1.8f777f912cca2p-712, 0.0, 0x1.14ec92a466e2ep-319, 0.0, 0.0, 0.0,
     0x1.3ead57a9c75d9p-472, 0.0, 0x1.23073fc0c8afdp-872, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cfd5665e0fcebp-875, 0.0, 0.0, 0x1.634c8c62d3b0bp-496, 0.0, 0.0,
     0x1.4eb3c267b3f8bp-697, 0.0, 0x1.211714c4d7994p-384, 0.0, 0.0, 0.0,
     0x1.63f9502733f4ep-10, 0.0, 0x1.b707fb7244cfbp-926, 0x1.2d70e11234defp-112, 0.0,
     0.0, 0x1.7f496bf14d08p-306, 0x1.5ce1b4b0b6293p-761, 0x1.7a4598994053fp-436,
     0x1.f1a368db637fbp-954, 0x1.37b1d50947565p-182, 0x1.9c7f1f5ea6115p-35, 0.0,
     0x1.c1e3431d9a23p-567, 0.0, 0x1.e6f4fb8a01c66p-724, 0x1.e1381684fb5abp-135, 0.0,
     0.0, 0.0, 0x1.8bbb126d63178p-337, 0.0, 0x1.338efeff21ed5p-489, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.10be7e2102614p-433, 0.0, 0.0, 0x1.f1d65b1388481p-610,
     0x1.0ff3bdc964c19p-136, 0.0, 0x1.98cf107dc954bp-687, 0.0, 0.0,
     0x1.57d4998ae52e4p-483, 0.0, 0.0, 0x1.0dbe627d397dp-357, 0x1.3af0aef0708cap-423,
     0.0, 0.0, 0.0, 0x1.21a833617333fp-734, 0x1.7e5897d1ec247p-330,
     0x1.de1f18291c79dp-223, 0.0, 0x1.9c104e70ebe82p-536, 0.0, 0.0,
     0x1.25b8ecfaa98cfp-885, 0.0, 0x1.9a1e9281f3358p-97, 0x1.584fcbb0f9af2p-585, 0.0,
     0.0, 0x1.e0bdcf988e3f4p-848, 0x1.9aa4a3078abbap-760, 0x1.e092b88bb0325p-659,
     0x1.5b68c411e5b41p-774, 0x1.c931a335b5276p-27, 0x1.95f220ce3c2e2p-783, 0.0,
     0x1.ddb20c6838af3p-575, 0.0, 0x1.25f99fafdf651p-445, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b77520c122793p-63, 0x1.9c7bcd4d13571p-353, 0.0, 0.0,
     0x1.d84a7e4ff6883p-646, 0x1.4e5e9ee31ab14p-995, 0.0, 0x1.113fb4c675f33p-466, 0.0,
     0x1.b181155696511p-642, 0x1.f28f25e3e1ebap-746, 0x1.9bb426b55039p-658, 0.0, 0.0,
     0.0, 0.0, 0x1.bf06e115bd2a4p-324, 0x1.c5581bcc3696dp-23, 0.0, 0.0, 0.0,
     0x1.7e72a5710c68p-469, 0x1.e189a13600cfdp-717, 0x1.9f93e40750fb7p-184,
     0x1.42a0b4de3c55fp-766, 0.0, 0x1.a6c6652fc730cp-246, 0x1.377a48bc6c664p-941,
     0x1.825ed5bc7f5eap-235, 0x1.d5ed0ec50d03dp-219, 0x1.f2914af783a2dp-182,
     0x1.bd53011d6b359p-235, 0.0, 0x1.40c1814e8f5f5p-235, 0.0, 0x1.67daf350c38b9p-981,
     0x1.58e6d34c317ecp-902, 0x1.9fff12bdb4d31p-419, 0x1.4a6f85e572a89p-407, 0.0, 0.0,
     0.0, 0x1.3e53c3eac6a4cp-370, 0.0, 0.0, 0x1.73e33f829b43cp-996,
     0x1.df9823f834b02p-41, 0.0, 0.0, 0x1.3e4d4f3bc18f6p-289, 0.0, 0.0, 0.0,
     0x1.cf137f962935dp-14, 0.0, 0x1.128e348c7599bp-539, 0x1.abbd683b2a538p-454, 0.0,
     0x1.0d62cd787436dp-344, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43b31bea2df03p-42, 0.0,
     0x1.16c9d5d4de6d6p-682, 0x1.d0875b4ea09ebp-516, 0x1.7412982ef4eaap-438, 0.0,
     0x1.7fbd840287347p-742, 0.0, 0.0, 0x1.952b222d5687ep-415, 0x1.9638815f9522p-539,
     0.0, 0x1.0b387d2b5384cp-754, 0x1.63e91c8fb9523p-977, 0x1.eda4f884c807ap-104, 0.0,
     0x1.2647971aaf53dp-148, 0.0, 0.0, 0x1.2ffe19c4cb3c9p-393, 0.0, 0.0,
     0x1.23fc64eb9681p-730, 0x1.b94ee9305893p-195, 0x1.dcad80d68cfc7p-687, 0.0, 0.0,
     0.0, 0x1.3a97f89dfdcddp-833, 0x1.834ed1ba252fdp-171, 0x1.3f92469218716p-221,
     0x1.098bafbb14195p-360, 0x1.48fd298ebc738p-419, 0x1.8f678cce958b1p-473,
     0x1.0498bb98501d7p-167, 0x1.0df6c8837c5d4p-207, 0.0, 0.0, 0x1.bbd600f5a4f4dp-365,
     0.0, 0x1.6520f453a419p-432, 0x1.70225e8c0a123p-851, 0x1.0c1b50a7f5e59p-403, 0.0,
     0.0, 0x1.949cff4765b44p-199, 0.0, 0x1.ce48b08644c9p-903, 0.0, 0.0,
     0x1.be89d32a55ab1p-883, 0x1.906190f3d265bp-146, 0x1.9b518b58f920bp-448, 0.0,
     0x1.5286e9964c39cp-799, 0.0, 0x1.734e9ffc11691p-31, 0x1.f611475676542p-521,
     0x1.89c5cb6ee9af1p-685, 0x1.744a2967c126cp-109, 0x1.9bcb01388ef81p-637,
     0x1.077d035ca6718p-768, 0.0, 0.0, 0.0, 0.0, 0x1.8c06147757effp-247,
     0x1.d0657b99f41d1p-239, 0x1.30eaefe93c9d4p-120, 0x1.e6b61b229ce9p-660,
     0x1.a5077dbe44b57p-861, 0.0, 0.0, 0.0, 0x1.3dbf4b13655cbp-101,
     0x1.1d2113e76ec35p-320, 0x1.95d2156b349e5p-93, 0x1.a6ed9f50b2d2dp-267, 0.0, 0.0,
     0x1.b1e91fc86ea39p-1017, 0.0, 0x1.968ea05f67a93p-124, 0.0, 0.0, 0.0,
     0x1.e58706f095bfp-997, 0x1.e4aea344c9d4bp-292, 0.0, 0.0, 0x1.aa591f66abc96p-213,
     0.0, 0.0, 0x1.486ce2cb3f9e9p-750, 0.0, 0.0, 0.0, 0.0, 0x1.8fd32ca614384p-733,
     0.0, 0.0, 0.0, 0.0, 0x1.c6d9fd79defadp-602, 0.0, 0.0, 0.0, 0x1.3ca7c30a60dfp-635,
     0x1.357c7076593ap-598, 0.0, 0x1.1f1ed764879aep-631, 0.0, 0x1.0500de37a6cffp-860,
     0.0, 0.0, 0x1.e52d352b0ad36p-757, 0x1.92be6bdb837bcp-174, 0.0, 0.0, 0.0,
     0x1.08e4f1cde987bp-527, 0x1.3f9a60ca405e7p-597, 0.0, 0.0, 0.0,
     0x1.19b027546baa5p-478, 0.0, 0x1.cb53ba68ea0bcp-279, 0.0, 0x1.c43ebbed83dp-280,
     0x1.e107615a66a33p-545, 0x1.e42212e7ea30cp-637, 0x1.2f9eef193311cp-185,
     0x1.f5e4f63fa291ap-615, 0x1.e4c63c4a59bc6p-616, 0.0, 0.0, 0.0, 0.0,
     0x1.0b6f35e2fa14cp-578, 0x1.c4900991c7368p-677, 0.0, 0x1.477052a9c836bp-193,
     0x1.3e98ce242b2f8p-462, 0.0, 0.0, 0.0, 0.0, 0x1.07bba23fb9959p-405, 0.0,
     0x1.b97ee9474d87bp-496, 0x1.1a9105a1cdea9p-125, 0x1.f870e8fbc9b64p-476,
     0x1.3d4f22bff6678p-631, 0.0, 0x1.72cf02a9c50d6p-631, 0.0, 0.0, 0.0,
     0x1.4fda26d46141cp-253, 0x1.d16ab7021fbfap-653, 0x1.bc70f3b752c17p-726,
     0x1.2aeead7d8e3b5p-540, 0x1.8091104b77ec1p-858, 0x1.084cf6ffa365ep-442,
     0x1.36445dd775ce5p-539, 0.0, 0x1.4f5cba8b1f2dbp-888, 0.0, 0x1.155d0f6a0e94cp-253,
     0.0, 0x1.2c46dd7b7e7e5p-252, 0x1.078fc2c1b0c39p-450, 0.0, 0.0,
     0x1.b262bc9b1db8dp-409, 0x1.f0dd63472806fp-21, 0x1.d0ec788b5eab1p-944, 0.0, 0.0,
     0.0, 0x1.fe934ba6b72c5p-158, 0.0, 0x1.75c39b4ef8c9bp-192, 0.0,
     0x1.1b9d08918b6cap-7, 0x1.770f545c95916p-141, 0.0, 0.0, 0.0, 0.0,
     0x1.0bcb4c10ead0bp-431, 0.0, 0x1.271e57f122c5ap-266, 0.0, 0x1.b92aa2167cac2p-207,
     0x1.ad7d9f38ff8aep-294, 0.0, 0.0, 0.0, 0x1.c50d1fe9b81e2p-891, 0.0, 0.0,
     0x1.664d30991243cp-300, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ac658b61d84fp-451, 0.0,
     0x1.086e91b2e3556p-791, 0x1.ec50d8bcbe2b1p-435, 0.0, 0.0, 0x1.2f902da069323p-85,
     0.0, 0x1.19e13197c31dep-261, 0x1.fc8bad9d4b45ap-876, 0.0, 0.0,
     0x1.630f677a5c9bfp-264, 0x1.9e8b62f674f0cp-481, 0x1.1a34785a42759p-324, 0.0, 0.0,
     0.0, 0x1.f3aac4996ea2bp-240, 0x1.a1c6e045b1ddbp-203, 0.0, 0x1.21690a2f6aae2p-802,
     0x1.eeab26b3ca44bp-252, 0.0, 0.0, 0.0, 0x1.a5e425d92172dp-489,
     0x1.1bd6ec1388742p-573, 0x1.d622015a4ca2p-716, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.468df65d2a0d6p-879, 0x1.fb14e00a0f753p-889, 0.0, 0.0, 0x1.c39d2d11d7975p-910,
     0x1.deca27b8902e6p-608, 0x1.9996483d3e8a9p-310, 0x1.ab2b478eb11c2p-788, 0.0, 0.0,
     0.0, 0x1.0f24a9740c745p-133, 0x1.5457747977b54p-514, 0x1.aa310ed255a3ep-201, 0.0,
     0x1.8e25a8a6aa5dfp-311, 0.0, 0x1.2271e440ead38p-276, 0.0, 0x1.4fe94e6421893p-155,
     0x1.c5e5cbce00c86p-639, 0.0, 0.0, 0.0, 0.0, 0x1.523eb6d95f22dp-214, 0.0,
     0x1.a81099e196e92p-334, 0x1.0bd3e91e4e4c6p-539, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fdddc8243430fp-805, 0.0, 0.0, 0.0, 0x1.74be7d761c118p-255,
     0x1.b8a5d5ab163c6p-421, 0x1.d5effcc6b027fp-302, 0.0, 0.0, 0x1.05db9a84643c7p-169,
     0x1.1c7a78cc33c32p-684, 0x1.cca51c670b9f8p-724, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.453ad1a093929p-1019, 0x1.a59360f43e74p-89, 0.0, 0.0, 0.0, 0.0,
     0x1.e6b6086107f3p-702, 0x1.3e4842cf7741fp-756, 0.0, 0x1.f2af53be85eddp-13,
     0x1.ac5e063286c93p-313, 0.0, 0x1.acbe8f2cfe738p-739, 0x1.77c40cf467522p-102, 0.0,
     0.0, 0x1.17d1e9100f441p-38, 0x1.6d908db73f579p-561, 0.0, 0.0,
     0x1.b6b3c3c749b59p-157, 0.0, 0x1.c5a080f240c1cp-581, 0x1.a3f1be9a64c86p-860, 0.0,
     0x1.8137066fb1805p-667, 0x1.b8f7127e553eap-648, 0x1.252513b112268p-702, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
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
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincospid2_u05avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincospid2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincospid2_u05avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
