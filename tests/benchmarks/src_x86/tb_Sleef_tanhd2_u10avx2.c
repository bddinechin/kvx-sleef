/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd2_u10avx2128.c --function Sleef_tanhd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.5af243a2de708p-646, 0.0, 0.0, 0x1.ed1ec1af4039ap-840,
     0x1.8f362123026adp-42, 0.0, 0x1.c8a9fb3193891p-942, 0x1.0240b33bce93ap-446, 0.0,
     0x1.0354327bd94aep-804, 0x1.625f65729f3d7p-692, 0x1.c96e024ad7d65p-497,
     0x1.8a42b4b9573abp-751, 0x1.16753f527a03ap-940, 0.0, 0x1.aee0574162af6p-1003,
     0.0, 0x1.c3a5552d8f453p-989, 0.0, 0.0, 0.0, 0x1.05692fae029efp-789,
     0x1.787a6dcea48bp-993, 0.0, 0.0, 0.0, 0x1.6b72a53efe617p-542,
     0x1.73434ab99f81cp-232, 0x1.c16241ae083fap-688, 0.0, 0x1.6cdc2e3804c69p-934, 0.0,
     0x1.baf70e322f799p-76, 0.0, 0.0, 0x1.7fd422a01b562p-5, 0x1.41abb0254ab28p-420,
     0.0, 0.0, 0x1.4227624eb901bp-906, 0.0, 0x1.694cf7ecbe7b3p-199,
     0x1.b986ee47be47ap-212, 0x1.2b010b51887ddp-166, 0.0, 0.0, 0.0, 0.0,
     0x1.d151bec6ea66bp-697, 0x1.40dcc49614542p-694, 0x1.72755f0532a3dp-245,
     0x1.b680af7b46177p-982, 0x1.9a7ebf12ca4b7p-623, 0x1.3651412d93548p-137,
     0x1.a1c17edf979c9p-243, 0x1.88b5bcdcdffc6p-151, 0.0, 0.0, 0.0,
     0x1.cc922e4e6142cp-785, 0x1.007234ead973dp-667, 0.0, 0x1.e380ac67facf3p-842,
     0x1.b4d1dd8029357p-916, 0.0, 0.0, 0.0, 0.0, 0x1.0387a67cd2c03p-736, 0.0,
     0x1.3e4c617c85abap-294, 0.0, 0x1.fe723e8d78ac5p-810, 0.0, 0.0, 0.0, 0.0,
     0x1.30bb2e698c747p-616, 0.0, 0x1.2ced30aba56b7p-6, 0x1.1fc1df34e31dcp-696, 0.0,
     0.0, 0x1.3c04f4a7755e8p-855, 0.0, 0.0, 0x1.52d626797e498p-677, 0.0, 0.0,
     0x1.7dc218f309b77p-641, 0x1.0bcde3850e80ap-1002, 0.0, 0x1.a336f53cc1419p-827,
     0.0, 0x1.e2ee525fe38fep-335, 0x1.9dc9dcddc0961p-349, 0.0, 0x1.e1a828b7d1f48p-340,
     0.0, 0x1.590823e568b92p-392, 0x1.70d5de879ce91p-1008, 0.0,
     0x1.adfd21d27c36ap-731, 0.0, 0.0, 0.0, 0x1.c914632b40061p-765,
     0x1.02b02ac3be3b7p-1014, 0x1.3214dcf35841dp-800, 0.0, 0x1.f6c5d21df9303p-358,
     0.0, 0.0, 0x1.494904e33043p-314, 0.0, 0x1.dce06615b9166p-613,
     0x1.280efb3a858p-330, 0.0, 0x1.2c32a628211b6p-249, 0x1.c4c6073034f65p-949,
     0x1.d03d87a0ece5ap-136, 0x1.78268a5fa3761p-424, 0.0, 0.0, 0x1.921b1e08835c6p-102,
     0x1.6aa6535cd9fb5p-485, 0x1.adacad5c8fd58p-545, 0.0, 0x1.630fca35d5332p-457,
     0x1.7f568f50a82b9p-408, 0x1.aecb20a8efedep-448, 0.0, 0x1.4f6d9350d66d4p-450, 0.0,
     0.0, 0.0, 0.0, 0x1.9331acccb3c4fp-775, 0x1.a205728cf123bp-899, 0.0, 0.0, 0.0,
     0.0, 0x1.f084ceb9ea399p-314, 0x1.46253be7b5cffp-607, 0.0, 0x1.4b68765c761p-196,
     0.0, 0x1.99ab3e1b67223p-151, 0x1.8a66b27be1f33p-370, 0x1.2315400a8c7a8p-980, 0.0,
     0.0, 0.0, 0.0, 0x1.6d9663b35a5a6p-13, 0.0, 0.0, 0.0, 0.0, 0x1.6c335078fa671p-764,
     0.0, 0.0, 0x1.171085fd07d9fp-64, 0.0, 0x1.9fb8591f94887p-797,
     0x1.29a46ca3e879ep-623, 0.0, 0.0, 0.0, 0x1.42cc79ad2621cp-342, 0.0, 0.0,
     0x1.1c34de9cad508p-343, 0.0, 0.0, 0.0, 0x1.e895416b29fd5p-840, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a1db05029f744p-56, 0.0, 0.0, 0.0, 0x1.456375ad00692p-803, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.227016d52a7c9p-508, 0.0, 0x1.09f487e1e1bf6p-631, 0.0, 0.0,
     0.0, 0x1.ec6b7a4a8117bp-523, 0.0, 0x1.16392814d98e4p-680, 0x1.cf3b8fb1000bbp-76,
     0x1.d4ddd107fb7f4p-265, 0.0, 0.0, 0x1.8e845687e0a5dp-601, 0x1.7da37aeee45c3p-155,
     0.0, 0.0, 0x1.1678b7dbc7333p-157, 0.0, 0.0, 0x1.8f75490c0901ap-485,
     0x1.f9b87d0b40f5p-754, 0.0, 0x1.ff727437cb866p-544, 0.0, 0x1.34a8a3f63e65ap-614,
     0.0, 0x1.7266fc8381981p-111, 0.0, 0.0, 0x1.de40cb3954b2bp-860,
     0x1.d350f14e83315p-690, 0x1.41fb228703d43p-928, 0x1.9bfa8945f5475p-143,
     0x1.1b72de0578492p-77, 0x1.d7aa93d6fd72ap-130, 0.0, 0x1.7b23b0b298291p-938, 0.0,
     0x1.123da4cd57ed8p-669, 0.0, 0.0, 0x1.fd849d862079ap-1012,
     0x1.d40b8b073f453p-1001, 0.0, 0x1.aae2a587d844p-620, 0.0, 0.0,
     0x1.9511c5577f336p-774, 0.0, 0.0, 0x1.2042a52a4f35ap-644, 0x1.6ac7d1721e5d4p-748,
     0.0, 0x1.408ca52d6df1ap-213, 0x1.95b3699dccbc1p-608, 0x1.3b6bd391a32b7p-614,
     0x1.a5fd3b2b51f2bp-477, 0.0, 0x1.010b524bd484ap-211, 0x1.970bed7bc9a65p-547,
     0x1.0ad5c1ecb39c6p-838, 0.0, 0.0, 0.0, 0x1.2a712d405ab3dp-259, 0.0, 0.0, 0.0,
     0.0, 0x1.527d8ce5a4ebfp-38, 0.0, 0.0, 0.0, 0x1.53c6b1773fd61p-949, 0.0,
     0x1.ffefc607a993fp-309, 0x1.5db94d88d5a7p-868, 0.0, 0.0, 0.0,
     0x1.5170e8c936411p-167, 0.0, 0.0, 0x1.e77e7b7ba565cp-472, 0.0,
     0x1.66dbc5ebb9f24p-156, 0x1.a586baeca001ap-318, 0.0, 0.0, 0.0, 0.0,
     0x1.e39c7aeb07c76p-389, 0.0, 0x1.ce3a9ba18118ep-387, 0.0,
     0x1.8c561df24e32cp-1013, 0.0, 0x1.52f9b3da7a941p-623, 0x1.0181390fe130fp-752,
     0.0, 0x1.1464f6c1e08aep-350, 0x1.369063af8baf4p-418, 0x1.530f1e640547ep-600,
     0x1.9dca72906ae6p-517, 0.0, 0x1.86d39f92c3696p-947, 0x1.90d3a42c65b8cp-410, 0.0,
     0.0, 0x1.a68e405ce4ca1p-576, 0.0, 0x1.f5bcd77ac34f8p-84, 0.0,
     0x1.87e762a2bc1cfp-233, 0.0, 0.0, 0.0, 0x1.70d1f5227a631p-617, 0.0, 0.0, 0.0,
     0x1.8327682cbbc43p-920, 0.0, 0x1.99640f1b33ec5p-832, 0x1.3e9f94315028cp-631,
     0x1.6f905b643b942p-1007, 0.0, 0x1.9fc5e122fb5c8p-809, 0x1.a1300bfede21dp-996,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae96e5ff2ff3ep-626, 0.0,
     0x1.76f9234409d68p-850, 0x1.da269b41262a2p-453, 0.0, 0.0, 0.0,
     0x1.c178af21f21e3p-783, 0x1.2a22abe282716p-720, 0.0, 0.0, 0x1.13947cdfb3188p-624,
     0.0, 0.0, 0x1.cd74100e90cffp-542, 0.0, 0.0, 0x1.b571811932dbp-331, 0.0, 0.0,
     0x1.1ab02c1630301p-82, 0x1.dc44933f5154p-420, 0.0, 0.0, 0x1.534845b0d5f39p-792,
     0.0, 0x1.e6fc4b8fc98aep-793, 0x1.a911a38714fa8p-658, 0x1.e99bee978b7d8p-746,
     0x1.329a9b60ff757p-126, 0.0, 0x1.fba445ac5a4b1p-291, 0.0, 0.0,
     0x1.75af0f6a540a8p-844, 0.0, 0x1.fe015e689c932p-706, 0x1.5e5b46d6775b7p-193, 0.0,
     0.0, 0.0, 0x1.eb8d5d12cd85p-18, 0x1.ddcd3e5a0c74dp-587, 0x1.cc56fdfb54c33p-177,
     0.0, 0x1.b3b807a23b878p-590, 0x1.da28250aac377p-280, 0x1.5dc6b4fe6785fp-271, 0.0,
     0.0, 0.0, 0x1.bdaa950b3216bp-372, 0.0, 0.0, 0.0, 0.0, 0x1.e79c88d00cf88p-822,
     0x1.04abdff2c4233p-566, 0.0, 0.0, 0.0, 0x1.b3eff10dbd673p-139, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a5ff26c525ba7p-898, 0.0, 0.0, 0x1.09b8b8850a16cp-117, 0.0,
     0x1.f3b80993494cp-634, 0.0, 0.0, 0.0, 0.0, 0x1.5e4f34abcb3eep-673, 0.0, 0.0, 0.0,
     0x1.014a03932b871p-156, 0x1.b4923566cc09dp-809, 0.0, 0x1.92fced71a38e6p-433,
     0x1.827f84e3ad9afp-40, 0.0, 0x1.85e79fa13325ap-600, 0.0, 0.0,
     0x1.014442aaea271p-707, 0x1.6ffabbd8a9264p-576, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45d3ec18a6d0fp-921, 0.0, 0x1.a7c93f73c7ff2p-682, 0x1.7bf2e4bb63a24p-948, 0.0,
     0x1.67d5123b821f4p-565, 0x1.b53df4c91cec1p-40, 0.0, 0.0, 0x1.f28308d87c248p-588,
     0x1.a0e577912de55p-913, 0x1.1b65789e2a27cp-473, 0x1.66efe8ebdfb25p-359,
     0x1.c1fd5830ab229p-725, 0x1.aa0b1ecda2a8dp-1013, 0x1.5d3f26fda4761p-845, 0.0,
     0.0, 0x1.333babf03cf67p-317, 0.0, 0.0, 0x1.464e1ef6b73d2p-468,
     0x1.80d92061e5812p-957, 0x1.df2fcbcc6953ep-531, 0.0, 0x1.40e0e3ff2b3bdp-933,
     0x1.02bcc7d794d4fp-889, 0x1.bf9b077daa939p-731, 0.0, 0.0, 0x1.88502104099c1p-826,
     0.0, 0.0, 0x1.b1b2f79a7cd77p-86, 0x1.88fc8fd95974p-590, 0.0, 0.0, 0.0, 0.0,
     0x1.06c1ce490f071p-599, 0.0, 0.0, 0.0, 0x1.16d58ab3007d4p-585, 0.0,
     0x1.0aec1f75d1a6ap-104, 0x1.54ef21af6d81bp-983, 0x1.59bc74c9cb1fp-611, 0.0, 0.0,
     0x1.1b316dd236462p-102, 0x1.7634ee251369ap-165, 0.0, 0.0, 0x1.ab93e3de7574fp-600,
     0.0, 0.0, 0x1.9e20d90557d5p-561, 0x1.43467d3c23b26p-699, 0.0, 0.0, 0.0,
     0x1.7c510d4d5133dp-785, 0x1.2e0fdefa5d7e2p-757, 0x1.864108711becap-690,
     0x1.1d24604f7458cp-559, 0x1.6f8df3b1c5cabp-455, 0x1.080b328a70e73p-68, 0.0, 0.0,
     0x1.e04617e4a444p-849, 0.0, 0x1.e1bc2edadc022p-610, 0x1.651189e4a01b5p-682, 0.0,
     0.0, 0x1.25e48967ec126p-449, 0x1.ba7a99a45f81fp-946, 0x1.34b290c684936p-458, 0.0,
     0x1.f1a6b28cd7baap-931, 0.0, 0.0, 0.0, 0x1.aa4802e4303f7p-477,
     0x1.61ef1be7c9c54p-966, 0x1.6b181942aa81bp-400, 0.0, 0x1.d597bb9a66eap-715,
     0x1.1d2825863b3abp-485, 0x1.1acf223004512p-363, 0.0, 0.0, 0x1.be9120110d52bp-992,
     0x1.5f999cacaf488p-374, 0x1.791b8cfbdc01ap-976, 0.0, 0x1.47ff727e4f42ep-330, 0.0,
     0x1.08f58f9a2e7edp-368, 0.0, 0x1.48ad04a7cde38p-381, 0.0, 0x1.6b7cbfc46d0bbp-602,
     0x1.70e119c7288b1p-654, 0.0, 0.0, 0x1.8994a1017cccp-361, 0x1.4134ec6783539p-149,
     0x1.5ce6be7a39cebp-568, 0x1.64abaec6f5f33p-301, 0.0, 0.0, 0x1.73f13b1324ad7p-392,
     0.0, 0x1.c0b75ec6e93f4p-361, 0x1.d0840cc5d1827p-81, 0x1.5e6d6088a50a3p-45,
     0x1.d7d1f1d542816p-182, 0.0, 0x1.43ead3c2845f8p-471, 0x1.1f0f4de6e584bp-408, 0.0,
     0x1.6e2200578a7a5p-63, 0x1.1007dabea489bp-716, 0x1.daa362968ed77p-773, 0.0, 0.0,
     0.0, 0x1.fa6f17aaa2c03p-511, 0x1.2dddbed3ca12ep-206, 0x1.bae2e1e4b5c06p-361, 0.0,
     0x1.12e45fe4161ddp-602, 0x1.b98955f8a1ff4p-863, 0.0, 0.0, 0.0,
     0x1.c9df158058febp-823, 0.0, 0x1.b07f93259cdafp-522, 0.0, 0x1.dfe00b573e32ep-293,
     0.0, 0x1.8498cf455a031p-367, 0.0, 0x1.0332915e07184p-417, 0.0, 0.0, 0.0,
     0x1.b4d729e640318p-904, 0.0, 0x1.94f419bf83d2p-840, 0x1.657842d96e77p-664,
     0x1.128e54a0e8dd3p-165, 0.0, 0x1.6c9d8f75195bcp-649, 0x1.c7a1fb205608p-911,
     0x1.31ed04bb0826ap-478, 0.0, 0x1.4f77811762103p-40, 0.0, 0.0,
     0x1.3b4ed4ebead9ap-13, 0x1.387d11817bf3ap-466, 0x1.0f9acfd6f16e1p-894, 0.0,
     0x1.d0b73cee5a3fp-886, 0.0, 0.0, 0x1.488093e19fb27p-108, 0x1.1d3d45646ec63p-634,
     0x1.32a53764ca2c6p-760, 0x1.080666350308bp-366, 0.0, 0.0, 0x1.3525264028c52p-733,
     0.0, 0x1.7f4784599c5c4p-33, 0x1.2a59c2b902098p-99, 0x1.2932bafea6e8ap-156, 0.0,
     0x1.af03597458267p-86, 0x1.774ac5954d073p-251, 0.0, 0x1.80cb978723134p-724, 0.0,
     0.0, 0x1.c98669583437p-488, 0.0, 0.0, 0x1.db352be79ce86p-239, 0.0, 0.0,
     0x1.e3bc2c96f879dp-690, 0.0, 0x1.4503b37411bdcp-550, 0x1.118666b335dcbp-962, 0.0,
     0.0, 0x1.fe803b76a78edp-919, 0.0, 0x1.3a27b3564d6b7p-558, 0x1.8c4e668ebf5ffp-495,
     0x1.ae3eef4d0f6c9p-129, 0.0, 0x1.3d359b601e392p-995, 0.0, 0.0, 0.0,
     0x1.37098cf8af3b1p-429, 0.0, 0.0, 0x1.b3907ba657ec8p-497, 0.0,
     0x1.ac35746d6ee44p-609, 0x1.ea104f22fde2fp-100, 0x1.7a337eac1426dp-153, 0.0,
     0x1.11dcd95aa13a9p-671, 0x1.97427b834b3d8p-593, 0x1.3afd144ac1688p-178,
     0x1.b4d3683e0c4e8p-189, 0x1.d67e39529492bp-196, 0.0, 0x1.7ce83dd55a2fap-497,
     0x1.64f0d70f65f9ap-921, 0x1.c12082d8b91cbp-814, 0x1.464f4a44825b5p-369, 0.0,
     0x1.59ee636ba5eddp-606, 0x1.0e76553a21ed4p-676, 0.0, 0x1.53061468e8ac3p-776, 0.0,
     0.0, 0.0, 0x1.b435d80175beap-768, 0.0, 0.0, 0.0, 0.0, 0x1.62f48d5ddf3c8p-713,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4979bff72dd4p-130, 0.0,
     0x1.a772021a3a0e4p-372, 0x1.460620a359905p-111, 0.0, 0x1.bbd7467116417p-382, 0.0,
     0.0, 0.0, 0x1.1bf4c6c8f208fp-138, 0.0, 0x1.f238680e7e124p-448, 0.0,
     0x1.d37d6e4e7d17dp-604, 0x1.b90400d3fef4ap-135, 0x1.0159b0b4f7d5ep-574,
     0x1.52a389e3587ffp-57, 0x1.ff09252c62e85p-199, 0.0, 0x1.4349024d1a2dp-962, 0.0,
     0.0, 0x1.63c281771e35fp-550, 0x1.14bd35234d8cfp-528, 0.0, 0x1.3cd965d0c164bp-303,
     0.0, 0.0, 0.0, 0x1.ef2b451d35bcdp-379, 0x1.48970d3c00a59p-784,
     0x1.8a8bdba3452dfp-956, 0.0, 0.0, 0x1.208173e81fc9bp-1006, 0.0,
     0x1.735be5bf5a04bp-747, 0x1.2943654631704p-308, 0.0, 0.0, 0.0, 0.0,
     0x1.85cc0a25be3cbp-450, 0.0, 0.0, 0.0, 0x1.286396b94ca78p-403, 0.0,
     0x1.d6222936275dfp-931, 0.0, 0.0, 0.0, 0.0, 0x1.3079e68e77585p-112, 0.0,
     0x1.3bd953fa206f4p-461, 0.0, 0x1.64c3a0cc42d21p-17, 0x1.2b2621283a607p-892, 0.0,
     0x1.7cabedf97fa4p-143, 0x1.4ef661c6b13b5p-602, 0.0, 0.0, 0x1.79c99a6b78ea4p-876,
     0x1.685df9260c54ep-445, 0x1.d1260422d2565p-898, 0x1.99c2aa847947p-796,
     0x1.27e1568eae341p-749, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8a6e9d632797p-562, 0x1.45a2e39587a79p-93, 0x1.f13ce5af86a6bp-890,
     0x1.3b76b4da5f1bbp-218, 0x1.03d00606d5afcp-485, 0x1.2d0c78197ab2p-169,
     0x1.3607060fa5a72p-712, 0.0, 0x1.281f4786f234ep-646, 0.0, 0x1.b61f4ab6d6dfap-338,
     0x1.a8893452d9c9ap-151, 0.0, 0x1.42812991c2f14p-320, 0x1.353d980405afbp-122,
     0x1.3d21ac2625a6p-831, 0x1.b75c50d8462e2p-892, 0x1.b32bd6d39ddd4p-84,
     0x1.ca6632f287435p-210, 0.0, 0x1.a78ef957a390cp-75, 0x1.e205071977c04p-815, 0.0,
     0x1.1da2ffa7ae5f8p-109, 0x1.01949a455d9bap-42, 0.0, 0.0, 0.0, 0.0,
     0x1.bceb4a5788595p-768, 0.0, 0.0, 0.0, 0x1.e6f611e2ffe1dp-643,
     0x1.dc85c79330734p-655, 0.0, 0x1.182cd150d1e63p-301, 0.0, 0x1.b5abc24f49367p-875,
     0x1.1353f4f8e0bf2p-470, 0x1.d25583803a4fdp-617, 0x1.c76b6cdf84549p-330, 0.0, 0.0,
     0.0, 0x1.781cdb27575e1p-322, 0x1.98f7795b7c47cp-19, 0.0, 0x1.7ab6aa7d0d06dp-622,
     0.0, 0.0, 0x1.90996070109eap-129, 0.0, 0.0, 0.0, 0.0, 0x1.ef246e1dd421fp-682,
     0.0, 0.0, 0x1.55bf087f06ffdp-913, 0x1.12b89aa73de11p-623, 0x1.4dd4a2c778bafp-817,
     0x1.35d50f335aa12p-151, 0x1.5a67662964382p-118, 0x1.72a7e82bfdfe2p-134,
     0x1.611ad7e373d7p-707, 0x1.76553ce0499d7p-150, 0x1.6e43aebf5402cp-976,
     0x1.a4825b2e1113ap-30, 0x1.85cd49996d72p-391, 0x1.43dc5da85408dp-69,
     0x1.e5bb69d3f9d37p-604, 0x1.b0f8e97b1e466p-368, 0.0, 0.0, 0x1.93ec45dd77a42p-961,
     0.0, 0x1.09986514ab711p-683, 0.0, 0.0, 0.0, 0.0, 0x1.553e3ccaa5a2p-657, 0.0, 0.0,
     0x1.a99ed89bd1c5fp-54, 0.0, 0x1.4ed3e0c52ff44p-643, 0.0, 0.0, 0.0,
     0x1.0bc0e226c04b2p-23, 0.0, 0.0, 0.0, 0x1.e1b411a2c226p-139, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bef908b8b069bp-882, 0.0, 0.0, 0x1.ea7dd680c982bp-997,
     0x1.a6275f72d483ap-929, 0x1.918f952708f2cp-296, 0x1.9a238ba80331fp-149, 0.0,
     0x1.ca3c13692c599p-349, 0x1.567f60b865d23p-403, 0x1.23664c170623ap-444, 0.0, 0.0,
     0x1.b9909779ad586p-345, 0.0, 0x1.808beec821716p-795, 0x1.fdbe694a3074dp-606,
     0x1.04c523c4440f9p-199, 0x1.82dd93f321287p-437, 0.0, 0.0, 0x1.31b66f0a617c3p-213,
     0x1.7ab3c93e68ea7p-634, 0.0, 0.0, 0.0, 0x1.b8d350a04469dp-925, 0.0,
     0x1.082b53dbdb191p-344, 0.0, 0x1.cef61d47698bfp-9, 0.0, 0x1.8e958276c990bp-506,
     0x1.768412503b078p-429, 0.0, 0.0, 0x1.2e691eb10f071p-512, 0x1.a2e7e416bc01cp-250,
     0.0, 0.0, 0x1.9c558c4287c1fp-647, 0.0, 0.0, 0.0, 0x1.58797fab7b5c2p-972, 0.0,
     0x1.b505b5ff87dc4p-579, 0.0, 0.0, 0x1.38ba258366128p-819, 0x1.396cc38330dc6p-590,
     0.0, 0.0, 0.0, 0x1.40c9a50187bbfp-34, 0x1.a2788b2c8b953p-170, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2a79ee25c5dd9p-622, 0x1.b5351370e696cp-966, 0.0, 0x1.bfc26d9626a5fp-649,
     0x1.42155519a39cdp-863, 0.0, 0.0, 0x1.2f4ca41190fd7p-601, 0x1.93baf1973241p-113,
     0x1.68457dbb2406fp-6, 0x1.e2b4e26c3c418p-630, 0.0, 0.0, 0x1.02b3edc68a9dep-512,
     0.0, 0x1.1ef972890a15p-507, 0x1.104c01a4f518dp-715, 0.0, 0.0,
     0x1.b7292b557c713p-536, 0x1.f7141968113bp-275, 0.0, 0.0, 0.0, 0.0,
     0x1.cf8a304127217p-344, 0x1.11b4b3b55f2a9p-689, 0.0, 0.0, 0x1.9f9dc65b6bbcp-491,
     0.0, 0x1.4d9e1bb141647p-687, 0x1.21d561b15804dp-550, 0x1.8d3eb0d26ef2p-988,
     0x1.0eae3511225e1p-748, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2acd001bcc27p-726,
     0x1.7e54edca27265p-400, 0x1.c10183d1eae9p-626, 0x1.87f67aab1f49dp-480,
     0x1.46a21b5d704e7p-801, 0x1.d74627bafeaa3p-165, 0x1.8b84ceea06217p-47, 0.0, 0.0,
     0x1.0ee74302bb54fp-268, 0x1.bfeec07d349bfp-443, 0x1.0d7fd3156d203p-139, 0.0,
     0x1.4b40f24948213p-247, 0x1.d233f00baea44p-468, 0x1.98ebf528bf1e1p-648,
     0x1.dcd5fb095c1b6p-255, 0x1.54e89e6a8cc48p-1008, 0.0, 0x1.0d1ccac521c0dp-22, 0.0,
     0.0, 0x1.c5ec8936046efp-360, 0x1.481e0c0e2dc1ap-1021, 0.0, 0.0,
     0x1.c0550e3ec02dp-963, 0x1.334430ba0c5cdp-16, 0x1.ee80a5e9e8f89p-980, 0.0,
     0x1.3fe0c296faf92p-269, 0.0, 0.0, 0.0, 0x1.1b1442d81004dp-810,
     0x1.3f55eaa5328ecp-224, 0x1.642116e04776p-944, 0x1.209321a426a33p-153,
     0x1.65e2a60d1c87p-146, 0x1.7d0d0e8ea5eep-964, 0x1.4b0f26dc6c87fp-685
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
            tmp1 = Sleef_tanhd2_u10avx2128(tmp0);
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
    printf("Sleef_tanhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tanhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
