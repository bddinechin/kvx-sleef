/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhd4_u10kvx.c --function Sleef_asinhd4_u10kvx \
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
     0.0, 0.0, 0.0, 0.0, 0x1.6b033dfef8a3dp-784, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ef7992c087246p-579, 0x1.a2b36eba53664p-263, 0.0, 0.0, 0x1.b1ba9984b6efbp-717,
     0.0, 0.0, 0.0, 0x1.42edc005c93c1p-1004, 0.0, 0.0, 0x1.c38362e5e8c6ap-684, 0.0,
     0.0, 0.0, 0.0, 0x1.ec01bd169aeb6p-933, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6f2cf2e518a09p-816, 0.0, 0x1.abd2a44f74e3fp-173, 0.0, 0x1.50275901a7495p-594,
     0x1.837e824983bd5p-467, 0x1.652dcc34c31f3p-25, 0x1.a05836979af5cp-1009, 0.0,
     0x1.46c5b7f49601ap-605, 0.0, 0.0, 0x1.8a68982fd3e56p-473, 0x1.771f43750aa07p-316,
     0.0, 0.0, 0x1.3287adebb46f1p-512, 0x1.1e389e7a945d3p-656, 0.0,
     0x1.6fd3eee02e103p-590, 0.0, 0x1.bde791f62cd7fp-749, 0.0, 0.0, 0.0,
     0x1.0711edcbd7deep-399, 0.0, 0.0, 0.0, 0x1.c8030badda0ccp-325, 0.0,
     0x1.e08393a4cc06bp-91, 0x1.913948ec21307p-868, 0x1.cb13f31aa40b3p-868, 0.0,
     0x1.1726ccd8b5abap-428, 0x1.0c5758b8dc8bfp-936, 0.0, 0.0, 0x1.6b2ff182bcb3dp-748,
     0.0, 0.0, 0x1.4b150861a215ap-57, 0.0, 0x1.7b7f30cccfc15p-916,
     0x1.faa4a624cae65p-81, 0.0, 0x1.ce162be884a39p-195, 0x1.3f2ea396e57bdp-667,
     0x1.643c576585cbbp-878, 0x1.e2d71cfdddf6cp-763, 0x1.740c033342b21p-213,
     0x1.42ba887596b9cp-26, 0.0, 0.0, 0x1.9a776ada600c7p-831, 0.0,
     0x1.2d2c63d495183p-162, 0x1.75aab37cea6d2p-586, 0x1.861daa86186a8p-723, 0.0,
     0x1.e915fd3f8042cp-596, 0.0, 0x1.970ad0cd2978bp-461, 0x1.83645b4349ff8p-312, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c74bdfa93343p-236, 0x1.d1aa68e9f9e4p-59,
     0x1.534c868c0e3a5p-274, 0.0, 0.0, 0.0, 0x1.713048b453326p-350, 0.0, 0.0,
     0x1.cb429a989d84ep-324, 0.0, 0.0, 0x1.263ec980b9f6cp-864, 0x1.8905a8b33f1edp-1,
     0.0, 0x1.5bcb8f8b6285ep-543, 0.0, 0x1.ac4c3ba1e5533p-942, 0.0,
     0x1.4bea26d34dfc9p-907, 0x1.8c0a3692984edp-556, 0.0, 0x1.1ec0dab00783ap-878,
     0x1.b5e458a8fa0a3p-625, 0x1.8891bd61a21aap-52, 0x1.76d56ce582014p-827,
     0x1.a4a13c8fa6fa9p-347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0adfb3232c294p-254, 0x1.dd8162c1a8f4p-796,
     0x1.419f7a1a6e4b1p-938, 0.0, 0x1.a693f86a1baacp-304, 0x1.4cbebe22f988fp-1009,
     0.0, 0x1.e03bae1b5daep-168, 0.0, 0x1.62051d44f6444p-831, 0x1.82075f1a04331p-877,
     0.0, 0x1.cf85cf205baf2p-159, 0.0, 0x1.bce37fb7d604fp-229, 0.0, 0.0, 0.0, 0.0,
     0x1.b2233bdb797e9p-825, 0.0, 0x1.c8395bc687f3fp-689, 0.0, 0x1.d539cfcbe481p-29,
     0.0, 0x1.d46a745df1a8fp-515, 0.0, 0.0, 0.0, 0.0, 0x1.385ea98fbc242p-592,
     0x1.49dc763182967p-442, 0x1.d3fe3643d587cp-35, 0x1.00d2d759d144ap-232,
     0x1.d2c4dd69def65p-261, 0x1.c34d5d0dbd973p-542, 0x1.17bbf86600d1dp-1017,
     0x1.6ca3c4da27f4bp-821, 0x1.46ca8e68e456dp-172, 0.0, 0x1.b003d834faf07p-847, 0.0,
     0.0, 0.0, 0x1.e276ddc0bb9bp-220, 0.0, 0.0, 0.0, 0.0, 0x1.3a73e5b50f9fcp-347, 0.0,
     0.0, 0x1.b0a3c78c800e9p-748, 0.0, 0.0, 0x1.fed45102c2ac3p-659, 0.0, 0.0,
     0x1.fbba69c1e2247p-804, 0.0, 0.0, 0x1.9dcb40592ee89p-958, 0x1.f906e88bf791dp-443,
     0.0, 0x1.15003a42239f3p-605, 0x1.0d27bb931bf73p-718, 0.0, 0x1.5df7a53d4616p-41,
     0.0, 0.0, 0x1.c5f35a878a8cdp-630, 0x1.dfeab3589ee39p-711, 0.0,
     0x1.8bd868b892b2bp-164, 0.0, 0.0, 0.0, 0x1.231b57f160c8p-941,
     0x1.d62d1879b34fap-426, 0x1.1567ea2e94eeap-338, 0x1.89a4bc3403d76p-592, 0.0, 0.0,
     0.0, 0.0, 0x1.5966d0312d296p-19, 0x1.0b05f21a603fp-25, 0x1.ece971653dc69p-499,
     0.0, 0x1.3e4f033640a52p-293, 0x1.7e939285016e5p-971, 0x1.6c9b73e6491a4p-313,
     0x1.89d8b026129e3p-47, 0x1.60595b0567401p-569, 0x1.b28b240a5ed2p-793,
     0x1.7e7dae6940dafp-123, 0.0, 0.0, 0x1.37bc0cc6f959p-589, 0.0,
     0x1.f855bc94a7501p-483, 0x1.3e08b08049b9fp-213, 0.0, 0.0, 0x1.03056d15b6711p-588,
     0.0, 0x1.81872fb7fb80ep-910, 0.0, 0x1.db6203b8eac3bp-583, 0x1.5e980b4fbc0b6p-755,
     0.0, 0x1.adf6a3bf39f35p-506, 0x1.c7a3707baf0acp-571, 0x1.200d31192d682p-99,
     0x1.f3a6db3c078b7p-97, 0.0, 0x1.49d54f67b81fp-631, 0x1.76b688af7b173p-721, 0.0,
     0.0, 0.0, 0x1.a2ab6167ac897p-697, 0x1.37cae7ad592abp-671, 0x1.b80c3f5cb50fcp-730,
     0x1.e21bbd442f6ebp-49, 0x1.c606b1e7273ffp-280, 0.0, 0.0, 0.0,
     0x1.741c74675db6bp-554, 0x1.244e9d3f4311fp-557, 0x1.0e62e6ec0e4ccp-654,
     0x1.e0302ae21dc7cp-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a97bb2cc1117ep-97, 0.0, 0.0,
     0x1.9d7016ccafbfbp-322, 0.0, 0.0, 0.0, 0x1.fb8dc19a91166p-37, 0.0,
     0x1.7b7ed16e96a5p-432, 0.0, 0.0, 0.0, 0x1.8b439d4ea8bc9p-989,
     0x1.0ae09425a97e5p-517, 0x1.bf4274e7dcfb9p-436, 0x1.e1095dac8d078p-328,
     0x1.c0590751d8f8ep-158, 0.0, 0x1.7d273849d3e3cp-298, 0x1.6a35fd700635p-251,
     0x1.6e1b37edc2055p-650, 0x1.de877d20667f3p-36, 0.0, 0x1.d859a7b7862aep-758,
     0x1.aa2bc313a3bbp-738, 0x1.7110b1af3df82p-378, 0x1.b9b3fa1ce3127p-770, 0.0, 0.0,
     0x1.ec40640257e24p-160, 0x1.974327d4f14bcp-929, 0x1.7935d4b3cae5p-659,
     0x1.15ffdea7cb223p-442, 0.0, 0x1.664809d301b25p-820, 0.0, 0.0, 0.0, 0.0,
     0x1.28e0e2a7b7ba5p-117, 0.0, 0.0, 0.0, 0.0, 0x1.2ba5dd18a1d56p-358,
     0x1.f76f137d58799p-890, 0.0, 0x1.42d0bd8ec88bap-144, 0.0, 0x1.662c17d0109e3p-423,
     0x1.1fd4cb2406693p-679, 0x1.1897468319d49p-444, 0x1.867332fe40aa3p-609, 0.0,
     0x1.664028103205ap-357, 0x1.55286c4725ccfp-37, 0x1.4df2b73420f7dp-942, 0.0,
     0x1.31f885e6a7df2p-156, 0x1.25a9e3a68a044p-21, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5e49d584a59p-520, 0x1.240af30d92cb9p-562, 0x1.2aa0de7d5ce0ep-8, 0.0,
     0x1.d66987589f1adp-418, 0.0, 0.0, 0.0, 0x1.1c0723e49a5fdp-815, 0.0,
     0x1.587491e8bae5fp-279, 0x1.00d8537e44476p-837, 0x1.43036c8840fcfp-281,
     0x1.8d406ecf991bap-585, 0.0, 0x1.b4cafb1693461p-260, 0x1.4f496b22f115ep-800, 0.0,
     0x1.5f461437b74f1p-989, 0.0, 0x1.cb438d83c9bf2p-897, 0.0, 0.0,
     0x1.d0736ae50bacbp-389, 0x1.2f398969f3e83p-462, 0x1.9dc612edc08cp-450, 0.0,
     0x1.68fa1b900318ap-934, 0x1.a70670d2bcdbdp-90, 0.0, 0x1.d3a1628487142p-334,
     0x1.f3a93072a76f4p-172, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5831ca9f9ab7ap-587,
     0x1.fb906d5ca128cp-584, 0x1.b3d13c7247a12p-930, 0x1.fda107534a1c2p-731,
     0x1.e9bc6e9084f6dp-887, 0.0, 0x1.d522bdd21b407p-485, 0.0, 0.0,
     0x1.02c5526bad5e6p-951, 0.0, 0.0, 0x1.e98b74cbbb601p-950, 0x1.df48c4e602ecep-863,
     0x1.2bc2a971f6859p-266, 0x1.cd6c655d2db52p-566, 0x1.c6d75b12660a7p-880,
     0x1.e53b403759cfep-492, 0.0, 0x1.e20f84cf52f6ep-199, 0.0, 0x1.a503aa539b7cep-934,
     0.0, 0x1.1fa81ff0759b6p-306, 0x1p0, 0.0, 0.0, 0.0, 0x1.0ef526f019e95p-665, 0.0,
     0.0, 0.0, 0x1.25aa509b7877cp-119, 0x1.63a4e6c6fafc6p-952, 0.0, 0.0, 0.0,
     0x1.08ecf6b9f1869p-758, 0x1.bf34d56efa6adp-766, 0.0, 0.0, 0x1.fcb8e8d2c0054p-859,
     0.0, 0x1.0397420f011b7p-461, 0x1.f66578fc6721cp-520, 0.0, 0.0,
     0x1.c7cffa0298ed7p-918, 0.0, 0x1.0dc8fd1f7714cp-8, 0.0, 0.0,
     0x1.29b6a0f1f419cp-470, 0.0, 0x1.b5a8d2871e6f9p-475, 0.0, 0.0, 0.0,
     0x1.7529d6bfd09eap-157, 0x1.ae3d9f2d69f6dp-458, 0.0, 0.0, 0.0, 0.0,
     0x1.e74696f502083p-995, 0.0, 0.0, 0.0, 0.0, 0x1.5e743b30f1cccp-237,
     0x1.8d5d9a2a670eep-205, 0x1.657e542ff3209p-114, 0x1.3efcf696619bbp-98,
     0x1.a781b2ee878ep-888, 0.0, 0x1.1699f1e8f4ce3p-310, 0x1.4d91cab3c78ffp-851,
     0x1.bfb42b0b8845bp-949, 0x1.9f64dbea695eap-750, 0x1.323a5480f6817p-1011,
     0x1.fa96a63f4c106p-761, 0x1.54ef567040c82p-153, 0.0, 0x1.44ca12a9dae3p-236,
     0x1.c137c49d2afb9p-34, 0.0, 0.0, 0.0, 0x1.4991e1827f43ep-502,
     0x1.a12c5e7e6af22p-379, 0.0, 0x1.b63813b086c8p-1020, 0x1.801ccc82ba56ap-967, 0.0,
     0.0, 0x1.2906b86eb3846p-724, 0.0, 0x1.e572f8ec8e4b5p-6, 0.0, 0.0,
     0x1.2e86b49898de1p-162, 0.0, 0x1.69fb6b587a7c6p-734, 0.0, 0.0,
     0x1.1b93cce7435f6p-128, 0x1.bc47f808f12e8p-36, 0.0, 0.0, 0.0,
     0x1.d11325e75cd48p-135, 0x1.f303505ddfe82p-462, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7587d12cb3a28p-280, 0.0, 0.0, 0x1.d8802f038349cp-1018,
     0x1.fa736ee43f3dbp-563, 0.0, 0.0, 0x1.d20eb6e88bd7cp-502, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.363c549bb1274p-5, 0.0, 0.0, 0.0, 0.0, 0x1.2c4a784350e34p-358, 0.0, 0.0,
     0.0, 0x1.ac52131e20c7p-34, 0x1.e43dc8f879f0ap-11, 0x1.dd6897aec38eep-935, 0.0,
     0x1.61cbbd2be5386p-28, 0x1.17a86bbdbd217p-379, 0x1.dce49f462cba1p-642, 0.0,
     0x1.02e067b5e3fb9p-282, 0x1.34e189838222ap-421, 0x1.d98d78d91c726p-902,
     0x1.5808aff7b3edcp-330, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe81525934d0ap-13, 0.0, 0.0,
     0x1.f37b3ae426847p-403, 0x1.b1068d8eb1bc4p-527, 0x1.5be19befa7fdcp-697, 0.0,
     0x1.93cc324c6cf7cp-2, 0.0, 0x1.b49386a19fbd2p-43, 0.0, 0.0,
     0x1.b740f8953d7e3p-704, 0.0, 0x1.9c25fa2971388p-268, 0.0, 0x1.c828f7c645003p-377,
     0.0, 0.0, 0.0, 0.0, 0x1.59be852a2fd07p-402, 0x1.b731d22b5b68ep-362,
     0x1.05b8f68ce02cbp-601, 0.0, 0x1.d8c7b773ae0bdp-239, 0x1.569dac39964dep-709, 0.0,
     0x1.58ebdd1b703f5p-488, 0x1.e09224dc7002dp-12, 0x1.100aeff7a8c11p-680, 0.0,
     0x1.def23fbd6145ap-119, 0.0, 0.0, 0x1.a01e2ba25a4b5p-9, 0.0,
     0x1.1a8c966422878p-620, 0.0, 0x1.b3fc05e9f097cp-789, 0.0, 0x1.353c625d568ddp-461,
     0.0, 0x1.a3f38b0225767p-910, 0x1.668ecc42b3107p-657, 0x1.81f2b627282d6p-951,
     0x1.a5bb7d9fcecep-935, 0.0, 0x1.d3e3d58e0fap-738, 0x1.1550a1fabe4adp-537,
     0x1.bd02134f19fbp-247, 0.0, 0.0, 0.0, 0x1.a03be4138f02ep-350,
     0x1.72e415b140fe4p-789, 0.0, 0.0, 0.0, 0.0, 0x1.0b6ba0af0e86fp-385,
     0x1.245e5faf2ba9fp-374, 0.0, 0x1.cee506e1e695bp-659, 0.0, 0.0, 0.0, 0.0,
     0x1.bd38bfc5546a8p-482, 0.0, 0x1.a691ac1c1ce13p-287, 0x1.f8eced76a5a77p-253,
     0x1.61bdf2c250e17p-270, 0.0, 0x1.61a430683c65ap-513, 0.0,
     0x1.3041dbefd65cap-1010, 0.0, 0x1.03dd3f203e237p-686, 0x1.3d97c30af3ef4p-261,
     0x1.c64464651c163p-925, 0.0, 0x1.73db101494fb2p-896, 0x1.2c830a458929ap-38, 0.0,
     0.0, 0x1.a261dfd6d1a4dp-91, 0x1.b706f9e33d311p-133, 0x1.89f26f2566a61p-841,
     0x1.48edd4714ea24p-1017, 0x1.3dd01deaa17fdp-976, 0x1.a8d418050c872p-835, 0.0,
     0x1.dff47cfa5773bp-654, 0.0, 0x1.2f01cc094cb33p-365, 0.0, 0x1.94a130ca7f12cp-748,
     0x1.6bf784fb6b3aap-208, 0x1.49359860563bcp-997, 0.0, 0x1.880cbe47ddb02p-80,
     0x1.86bd94edbadfap-59, 0x1.3d0187ec890bbp-687, 0x1.6030ada18b8fap-912,
     0x1.ba2957e696b1dp-82, 0x1.bf44d8219eddap-332, 0.0, 0.0, 0x1.1b9509155b873p-294,
     0x1.107002196d289p-947, 0x1.5789d924cd4edp-94, 0x1.2e157aa47012bp-469,
     0x1.b061f4027a769p-181, 0.0, 0x1.ad1b7fe28fcf4p-873, 0x1.365d67fde0c8ep-625,
     0x1.db85962148cfep-940, 0x1.3543c55f19726p-168, 0x1.81e0a900dbb91p-668,
     0x1.c17e020e6a3ep-937, 0x1.e48c569e758ccp-527, 0x1.70a7a5989f094p-585,
     0x1.98fa0ef1ebfc9p-324, 0.0, 0.0, 0x1.53af953d9d551p-802, 0x1.f067f4f285d1ap-90,
     0x1.8c3fdb4dae503p-85, 0.0, 0.0, 0.0, 0.0, 0x1.75f63493fb7abp-228, 0.0,
     0x1.456e4bb2eaa4ap-463, 0x1.8c5a6f1d13df4p-193, 0.0, 0.0, 0.0,
     0x1.ae8a79295c826p-486, 0.0, 0x1.d676e62451edp-454, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.504fc0aba5b76p-680, 0x1.7a9377c95fba3p-349, 0.0, 0x1.1f405a9c0eea4p-663, 0.0,
     0.0, 0.0, 0.0, 0x1.073c49956c18dp-814, 0.0, 0x1.3b645696f6664p-812,
     0x1.42f4380aeefd8p-199, 0x1.d9c2c1e504cdep-465, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e473839676cdbp-614, 0.0, 0.0, 0x1.9fa02136644d6p-629, 0.0, 0.0, 0.0,
     0x1.40d431ac9ee02p-885, 0.0, 0.0, 0x1.a5ee852cc8af6p-808, 0x1.02a676e0ec79ep-176,
     0x1.963ce8dce89ecp-556, 0.0, 0x1.9a72ef052adf1p-184, 0x1.50d20b3228b68p-157,
     0x1.701bcd53605cep-790, 0x1.a0f5319a6bf22p-45, 0.0, 0.0, 0x1.c0b214aa516d2p-456,
     0.0, 0x1.93c7f39535317p-192, 0x1.61639ac16bee8p-804, 0.0, 0.0, 0.0,
     0x1.cbc46e4172f1dp-403, 0x1.bda4e2d9c636dp-536, 0x1.96dd4727fecdfp-121,
     0x1.f1fd4d401936ap-535, 0x1.c0d527c1eaab9p-765, 0.0, 0x1.0acc9c059a5b8p-717, 0.0,
     0x1.efdc47aca9876p-270, 0.0, 0x1.59e2fa6140c8p-562, 0.0, 0x1.475b746332b7dp-687,
     0x1.8264fabd1e74ap-386, 0x1.141628c300cfbp-436, 0.0, 0x1.fa8fe44a9c636p-413, 0.0,
     0.0, 0.0, 0x1.be92cf1da1fbep-984, 0.0, 0x1.3efd209bfd63bp-243, 0.0,
     0x1.deeb653e7313fp-731, 0.0, 0.0, 0.0, 0.0, 0x1.9ef2d4b894e4p-645, 0.0,
     0x1.8fcc41ca4b4d4p-556, 0x1.6282fee5da54ep-36, 0x1.03edd95dfabddp-129,
     0x1.042516e8ec73dp-503, 0x1.9df8ea78a1b16p-830, 0x1.fc5844168f26ep-33,
     0x1.a0ddea491053ep-249, 0x1.02d1d3327876bp-29, 0.0, 0x1.8dcf516b2b0dbp-413, 0.0,
     0x1.36cb78deec7d3p-531, 0x1.88e9cc86cec07p-659, 0.0, 0x1.e51ebea51472ap-883,
     0x1.207c988253c82p-361, 0x1.d63c8a3864d8cp-816, 0x1.2119137bee772p-606, 0.0, 0.0,
     0.0, 0x1.8c65bfc9932edp-879, 0.0, 0x1.2f025410ab22ep-242, 0.0, 0.0,
     0x1.06b22ebba7726p-114, 0x1.5aec674902278p-102, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fa314ecb5ed86p-337, 0.0, 0.0, 0x1.bf3b6b015fa2cp-807, 0.0,
     0x1.e3c6eb338a5f1p-225, 0.0, 0.0, 0.0, 0x1.e8a5ad46ea5f3p-764, 0.0, 0.0,
     0x1.e52de33777f4dp-622, 0x1.2711fb7ba5d33p-737, 0.0, 0.0, 0.0,
     0x1.50f30232399b2p-138, 0x1.46e59d4c45bf1p-1016, 0x1.23b5d8287761ap-823,
     0x1.160931bba61e5p-239, 0.0, 0x1.974914fcce25fp-179, 0x1.dad28834358e9p-891, 0.0,
     0.0, 0.0, 0.0, 0x1.e7a277620bd8ap-499, 0x1.7fddebbbe15p-76,
     0x1.59d4ca45c623fp-738, 0x1.4f91d25c280a2p-516, 0.0, 0.0, 0.0,
     0x1.3e7f09140123bp-1002, 0.0, 0x1.eb0be1e6aa145p-833, 0.0, 0.0,
     0x1.ebe3c565669d3p-905, 0.0, 0.0, 0x1.08d839b8f499dp-800, 0.0, 0.0, 0.0,
     0x1.cd6f00495cf8cp-917, 0x1.33fe451737e58p-369, 0x1.f9ac5a2845e4fp-205,
     0x1.992ccfd871c37p-176, 0.0, 0.0, 0.0, 0x1.bbdb9a315192p-68,
     0x1.cecd1cd32f256p-35, 0x1.c1bde44b49a86p-431, 0.0, 0.0, 0.0,
     0x1.614b9a4367d15p-663, 0x1.4ae32f8d4936p-601, 0.0, 0x1.688bb5fe21209p-245, 0.0,
     0x1.fda24a6eec8abp-1004, 0x1.ecd81a50cdec1p-722, 0.0, 0.0,
     0x1.57c82089fbc52p-1019, 0x1.9ff7db61bae82p-907, 0.0, 0x1.31589695b7aa4p-621,
     0x1.ad75d8a041c7p-377, 0.0, 0.0, 0x1.08abc01976deep-142, 0x1.acba307511568p-634,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d93b5b0b65b33p-523,
     0x1.5aa56034a3fb5p-685, 0.0, 0x1.fb2320ba80db7p-118, 0x1.f97ad2bf14fcep-218, 0.0,
     0x1.60f75dfdda2fap-147, 0.0, 0.0, 0.0, 0x1.7685d05fde2c5p-873,
     0x1.39d18795ce80ep-494, 0.0, 0x1.51d39a8c06d21p-501, 0.0, 0.0,
     0x1.1855432bd2ee5p-699, 0.0, 0.0, 0.0, 0x1.ef83768e4e188p-894,
     0x1.16fba8b15bf9p-54, 0x1.3d3c02f304083p-939, 0.0, 0x1.9aea880a6dd11p-441,
     0x1.3e9c74b34d784p-112, 0x1.7afce2fbd08bfp-923, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.31b822ec87b88p-738, 0.0, 0x1.eb3408f42a41cp-594, 0x1.1972e266f2e4p-740, 0.0,
     0x1.16b0c2547287fp-46, 0.0, 0.0, 0.0, 0x1.9b232ba73c86p-625, 0.0, 0.0,
     0x1.489c2dd0087dfp-684, 0x1.1b3169c415908p-280, 0.0, 0x1.2b03b7d787adcp-751, 0.0,
     0.0, 0x1.df4b06c2d08d1p-865, 0.0, 0x1.c4dc25fe48a08p-156, 0.0,
     0x1.8b7a7f6851ebep-895, 0x1.78f74a4e4cfeep-191, 0.0, 0.0,
     0x1.7fb5973756d95p-1010, 0.0, 0x1.ce0c1d4bcad71p-186, 0.0, 0.0,
     0x1.5897d5d9815fep-76, 0x1.acb0e4135df9ap-504, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0410d993d253dp-189, 0x1.64da38c646c4ap-342, 0x1.4c237df037a1dp-31,
     0x1.bc15fc94c0c11p-512, 0.0, 0x1.0bcbce5fe4034p-610, 0.0, 0.0,
     0x1.f5132068915f7p-505, 0.0, 0x1.a7045c65f238dp-516, 0x1.5b577e74cdf94p-171, 0.0,
     0x1.b7af75f961eb1p-542, 0.0, 0.0, 0.0, 0x1.77705610c17b1p-855, 0.0,
     0x1.4952f536ff9dp-994, 0x1.44a95946c8ab9p-873, 0.0, 0.0, 0x1.001e6e5133e4bp-356,
     0.0, 0x1.2496c6c71cbe1p-817, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee77e72ffb25fp-884, 0x1.5ff62ef478073p-989, 0x1.fefb3c7c2c6fbp-629,
     0x1.1554188998382p-846, 0x1.348b4ace2fc2bp-453, 0.0, 0x1.57b361d760388p-842,
     0x1.7706cf03f2bf1p-498, 0x1.62d660b3e0e81p-258, 0.0, 0.0, 0x1.852f3f105416ep-389
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
            tmp1 = Sleef_asinhd4_u10kvx(tmp0);
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
    printf("Sleef_asinhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asinhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
