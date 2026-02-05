/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncd4_kvx.c --function Sleef_finz_truncd4_kvx \
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
     0x1.c88e5c49de362p-475, 0x1.a6bee1bfca92ep-284, 0x1.ce2370c3e3204p-208,
     0x1.8dd7b2927a8d6p-829, 0x1.d9bd33eb53d08p-948, 0x1.5aeee4d854822p-844, 0.0,
     0x1.a519f47796c18p-968, 0x1.6f7ab2064801ap-141, 0x1.e1111f02b3869p-319, 0.0,
     0x1.69359f46c1876p-622, 0x1.bc5f2d6385592p-139, 0x1.9d9b61e19ee1bp-897,
     0x1.eb08b97d342e1p-459, 0x1.19a89e9a518a9p-649, 0x1.f96680b57f8ep-714, 0.0,
     0x1.bf64ecca3787ep-405, 0x1.9a5688bcb638ap-233, 0.0, 0x1.92cf62110f99ap-496,
     0x1.015cc3a3a123dp-64, 0x1.21f620ccd4fb8p-719, 0.0, 0.0, 0x1.6d8911c31ca9dp-692,
     0x1.df16314eb9f98p-744, 0x1.4481f3401d4b3p-1000, 0x1.bd5ee194c150dp-990,
     0x1.44ea9bedfbe33p-716, 0x1.72764bddf8316p-614, 0.0, 0x1.de606ce318776p-919, 0.0,
     0.0, 0x1.96ecde3f8b786p-10, 0x1.078f931b8e196p-806, 0.0, 0.0,
     0x1.48574ce22f572p-887, 0.0, 0x1.71e6ed4b38c6dp-634, 0x1.37a58aa9a4769p-926,
     0x1.c6eeddffdde9fp-193, 0x1.33b30586fc42ap-112, 0.0, 0x1.43c7443c94df8p-520, 0.0,
     0.0, 0x1.b26f21b62c20cp-374, 0x1.b458076127753p-273, 0.0, 0.0, 0.0,
     0x1.18b617d9fa2e3p-866, 0x1.0acd4f8f2792dp-68, 0x1.325a37d1a4497p-339,
     0x1.298af2742ebd7p-354, 0x1.2dda181ab218ap-511, 0.0, 0x1.f75ec2931fbdp-285, 0.0,
     0x1.eeb42ede7c2e9p-1005, 0x1.56457beac7b88p-238, 0.0, 0x1.0209320a6a904p-728,
     0.0, 0.0, 0x1.9c1da2cf6b93fp-659, 0x1.8b897478dc8bp-954, 0.0,
     0x1.1b8d241c8565p-365, 0.0, 0x1.abc8bcf6e45f1p-122, 0x1.2b6020886effbp-425,
     0x1.7916a5b00325ap-433, 0.0, 0x1.9cb5cedc8a52dp-764, 0x1.de8c110703d37p-775, 0.0,
     0.0, 0x1.91d7adc19ad1fp-273, 0x1.aaab287fab96bp-952, 0x1.db1e55acd552dp-783, 0.0,
     0.0, 0.0, 0.0, 0x1.4f2604c3151bp-487, 0.0, 0x1.6809f0fe4f874p-17,
     0x1.d04892cebd174p-997, 0x1.92344e5da548bp-819, 0x1.8ffea7751a4dcp-985, 0.0,
     0x1.b880346f265ap-385, 0.0, 0.0, 0x1.3e871e9b0a925p-291, 0.0,
     0x1.2e7d56219c073p-30, 0x1.a347046625fd3p-780, 0.0, 0.0, 0x1.7a24262f1be62p-561,
     0x1.ce790b28ee72ep-472, 0.0, 0x1.a3fd71da6cc0bp-297, 0.0, 0.0, 0.0, 0.0,
     0x1.2c184d5569e57p-330, 0x1.eda935e3f0402p-189, 0.0, 0x1.b7216642d2036p-677,
     0x1.da27cd167ba0cp-38, 0x1.aeaab5ac8891p-262, 0.0, 0.0, 0.0,
     0x1.0574b95fcd713p-677, 0.0, 0.0, 0.0, 0.0, 0x1.8a63544848d91p-511, 0.0, 0.0,
     0.0, 0.0, 0x1.9df10ee700643p-208, 0x1.84aefab66d1cp-634, 0x1.87af7fcb9c5c2p-837,
     0.0, 0.0, 0x1.ab7e679ba03f3p-917, 0x1.716f89c7339dbp-602, 0.0, 0.0,
     0x1.bb8a9b884f668p-810, 0.0, 0.0, 0x1.e077cc4bc4761p-569, 0x1.a463b58125716p-60,
     0.0, 0.0, 0.0, 0x1.2863fb2971881p-354, 0.0, 0.0, 0.0, 0x1.964eeb0faf14fp-308,
     0.0, 0x1.7aa60496185b5p-626, 0.0, 0x1.3ddeaeba2e46ap-81, 0.0, 0.0,
     0x1.f266f3ed787bdp-146, 0.0, 0.0, 0x1.e5d009d86f39p-946, 0.0,
     0x1.0bf02e2de697ap-621, 0.0, 0.0, 0.0, 0x1.261783e004203p-964, 0.0, 0.0,
     0x1.90fa405a964d4p-213, 0.0, 0x1.a62aed9fe9087p-241, 0x1.0dd8c7c83610bp-480, 0.0,
     0.0, 0x1.0496edfd8eaa4p-856, 0.0, 0.0, 0.0, 0x1.c7deddfaeb9e2p-104,
     0x1.3f19a57ff5e27p-557, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed97d8658c3f8p-24, 0.0, 0.0,
     0x1.2f3beb9978198p-983, 0.0, 0x1.bfedf03de21bfp-116, 0.0, 0x1.e9c07581166a1p-812,
     0x1.dc666571d9ee5p-432, 0x1.f7779c8c0d97p-172, 0.0, 0.0, 0x1.667e89d5bba87p-58,
     0x1.a90563dcffcc3p-45, 0.0, 0.0, 0.0, 0x1.390c7d3144f97p-821, 0.0,
     0x1.7c1caabff081ap-804, 0x1.fb294bdd93dp-973, 0x1.2ce5f2811280dp-309,
     0x1.373bebba48c53p-794, 0.0, 0x1.a6232e6caa5e4p-1021, 0x1.75636e5853247p-279,
     0.0, 0x1.c7df700689138p-752, 0.0, 0.0, 0x1.9b527874a69cfp-539, 0.0, 0.0, 0.0,
     0x1.ce511a8a6556fp-620, 0.0, 0x1.4702aa1d592a8p-356, 0.0, 0x1.13d8581248332p-799,
     0.0, 0x1.81b719ab393d7p-734, 0x1.de90571c2e1f4p-648, 0.0, 0x1.8a35c79a23848p-686,
     0.0, 0x1.34d854bb9717dp-934, 0x1.a2faff6b757ecp-798, 0x1.1152b8183a6b6p-393,
     0x1.97d0c658caaf6p-892, 0x1.48a4b8bcaa286p-331, 0.0, 0.0, 0.0, 0.0,
     0x1.aa61b16a8bc6dp-901, 0.0, 0.0, 0x1.f52de346235fp-1017, 0x1.aef06fc5e19c8p-997,
     0x1.c9616fd6f9352p-28, 0.0, 0x1.3d03a5a070537p-547, 0x1.83c726c68d09cp-575, 0.0,
     0.0, 0.0, 0.0, 0x1.0f93d03c17d13p-428, 0x1.a0e3c9b364d32p-339,
     0x1.f5a69703b8037p-836, 0x1.839a0f6b60c4dp-451, 0x1.72e3fa6b15fd4p-958, 0.0, 0.0,
     0x1.7d8876800a4c8p-215, 0.0, 0.0, 0x1.827648033b5afp-36, 0x1.e64d45a84848bp-562,
     0x1.d8d7bc06cc0cep-136, 0x1.1f1c8acfa0e91p-114, 0.0, 0x1.2b0a01ee04af3p-296,
     0x1.594414a4f92b9p-408, 0x1.0c9b45874a474p-412, 0.0, 0x1.ce41973b21187p-447,
     0x1.36f5eb15ba15fp-407, 0x1.feac912a524a1p-254, 0x1.641406011dc3fp-304,
     0x1.7170f7f2737b1p-429, 0.0, 0.0, 0x1.0a9bc204553e2p-910, 0.0,
     0x1.6131117a0b06fp-967, 0x1.371d85c66c2dfp-153, 0x1.a8c608123c85ep-326,
     0x1.a1b9933009acdp-327, 0.0, 0.0, 0.0, 0x1.82deaab08c5dbp-425, 0.0, 0.0, 0.0,
     0.0, 0x1.45dc6ff2a5a93p-894, 0x1.e7e4f9ebdb0bfp-740, 0x1.96a308203b4ffp-394, 0.0,
     0.0, 0.0, 0x1.fdfdcf27ebb07p-66, 0.0, 0.0, 0.0, 0x1.d86b1a8b7fda2p-535, 0.0, 0.0,
     0.0, 0.0, 0x1.f1421b1055d45p-161, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.81bc20dd6e3cdp-677, 0x1.b861cc6b5e5a7p-193, 0x1.0694cd2e4557p-264,
     0x1.064032124b758p-204, 0.0, 0.0, 0x1.2ed0a04abc892p-266, 0.0,
     0x1.31217ec79ac5bp-121, 0x1.17c8826d1e001p-586, 0x1.3678189d7373p-370, 0.0,
     0x1.0e6ef8a9a45adp-680, 0x1.7fadf4bef0114p-913, 0x1.d6747e5f0d9eap-426,
     0x1.8435e8032d862p-254, 0x1.c35dd4bbea37p-452, 0.0, 0.0, 0.0,
     0x1.e9ae0f533ef2bp-787, 0x1.b86e5faeec294p-541, 0x1.9bc21582ef1dcp-953,
     0x1.881e5135435fp-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d53a761391955p-96, 0x1.470d7b8a69c67p-544, 0x1.f2a2cdaf2c5b3p-718,
     0x1.77194bc10943ap-117, 0.0, 0.0, 0.0, 0.0, 0x1.96d26933f893dp-285,
     0x1.942064e73dda3p-966, 0.0, 0x1.b5d1d21f5179ep-777, 0.0, 0.0,
     0x1.a257321bed77dp-138, 0x1.23bcbb15c7cb7p-856, 0.0, 0.0, 0x1.0a1628a1558a8p-665,
     0.0, 0x1.73c41474dd911p-747, 0x1.bff2117f799dbp-292, 0x1.552b11283c0f2p-1016,
     0.0, 0.0, 0x1.053c2c694656ep-777, 0x1.4b1dfab982921p-116, 0.0,
     0x1.094b73bf14322p-525, 0x1.99f23033f63c7p-233, 0x1.6bb9130c3b881p-431, 0.0, 0.0,
     0x1.430de7cf6495p-537, 0x1.c83ccf559df04p-206, 0x1.8ed589b87cf28p-185,
     0x1.8a92e790136fcp-96, 0x1.ab47f48c6f6c8p-1011, 0x1.332181c0ec0cdp-336, 0.0,
     0x1.695b4d7707effp-696, 0x1.a02021eb86c0bp-274, 0x1.af917513bd894p-371, 0.0,
     0x1.475dcadbf18b7p-334, 0x1.b52c6a30d6505p-38, 0.0, 0x1.53eda4063a53cp-665,
     0x1.b70c89e7db1dfp-887, 0.0, 0x1.0fd5e1bf24fcap-825, 0.0, 0x1.f69c6ae01fd54p-384,
     0.0, 0x1.fa4533bd9ad0dp-895, 0x1.00e924e5f5517p-103, 0x1.4064f7d86a12fp-128, 0.0,
     0x1.32077c2b70628p-1001, 0.0, 0x1.b92bf5f0bd0ecp-286, 0.0, 0.0,
     0x1.0378e2df9b4cfp-366, 0.0, 0x1.21e649aff6ad9p-418, 0.0, 0.0,
     0x1.9f45e6d8095ecp-877, 0.0, 0.0, 0.0, 0x1.5bf7aa35b6fbbp-849, 0.0,
     0x1.2cc05af50ad5fp-423, 0.0, 0x1.7f0bfcb9c8ba8p-701, 0.0, 0.0,
     0x1.d42849cb4a4e9p-524, 0x1.d5c26fbb665e4p-778, 0.0, 0.0, 0.0,
     0x1.3003dd257b87p-439, 0.0, 0.0, 0.0, 0.0, 0x1.dc3feccc601f7p-1, 0.0, 0.0, 0.0,
     0.0, 0x1.6d642cd7e5c9ep-549, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c5145e99ab917p-261, 0x1.85f46d2a7efccp-833, 0.0, 0x1.14827d568a72fp-843, 0.0,
     0x1.6f1c39d80030bp-689, 0.0, 0x1.0f7d9cc6c198cp-153, 0.0, 0.0,
     0x1.a5aad27fc1598p-358, 0x1.7e8778450aaf7p-537, 0.0, 0.0, 0.0, 0.0,
     0x1.8386078256cf4p-818, 0x1.485d7e64d833dp-668, 0.0, 0.0, 0x1.565dcfe67c6e7p-918,
     0x1.9f259d9637512p-663, 0.0, 0.0, 0.0, 0.0, 0x1.e5d27c91bf7d9p-131, 0.0, 0.0,
     0.0, 0.0, 0x1.9c8fa0082e658p-925, 0.0, 0x1.a57f0ecbca004p-339, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3ae97176aaa31p-1012, 0x1.033dec6cf9ce5p-862, 0.0,
     0x1.343edc18e268cp-761, 0x1.b1053bf283083p-641, 0x1.715486081ebffp-307,
     0x1.6c515e983baap-564, 0x1.28a9fbad0b015p-759, 0.0, 0.0, 0.0,
     0x1.0f8126153d146p-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.960e59ac09a75p-230,
     0x1.e80ecb129ce48p-452, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98dc0b5975103p-364,
     0x1.5d9b0cc20b2c4p-791, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.415de8127e9ep-470, 0.0,
     0x1.12e5fc7e92fc7p-318, 0.0, 0.0, 0.0, 0.0, 0x1.15069fdb4de76p-10,
     0x1.62993e374704bp-21, 0.0, 0.0, 0x1.e44f5aca8dc54p-769, 0.0, 0.0,
     0x1.b25564ce37784p-661, 0x1.db5fe49764106p-195, 0x1.cca27e6ced7bdp-112, 0.0,
     0x1.1d53cd8efc3eep-722, 0.0, 0x1.f7b6b34e90b35p-933, 0x1.f88d66a39a06p-351, 0.0,
     0.0, 0x1.d064e5a5abc9ep-910, 0x1.7087ccd69291dp-469, 0x1.a28bf607955c4p-331,
     0x1.b100df445b65ep-262, 0.0, 0x1.0440af59584b8p-471, 0x1.3376a123caa42p-678,
     0x1.8c610762920fcp-332, 0.0, 0.0, 0x1.774b9f25f76f4p-364, 0.0, 0.0, 0.0,
     0x1.982d3178d069fp-550, 0x1.2d624601ce62p-610, 0.0, 0x1.6ee98ff50b665p-452,
     0x1.2e86efeb288bap-467, 0x1.74b5fb018724ap-545, 0x1.e8b088196d104p-727,
     0x1.22a91932eeep-295, 0.0, 0.0, 0.0, 0.0, 0x1.e1276c30e1636p-766, 0.0, 0.0,
     0x1.1ebc7f7b31195p-273, 0x1.a4b70d0b7691ap-735, 0x1.1fd3df8756cc8p-65, 0.0,
     0x1.e02d2ca2fe114p-42, 0x1.4c339b4a517dep-21, 0.0, 0x1.4b74183b7d53ap-17,
     0x1.82eb195daa113p-279, 0.0, 0.0, 0x1.59cd23a0efd0dp-852, 0.0, 0.0,
     0x1.55d1d36f3c5b9p-367, 0.0, 0.0, 0x1.faf81bcebae87p-1021,
     0x1.ede587e3ae12ep-517, 0.0, 0x1.4c1d348110a18p-816, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f3032fa9798f7p-791, 0x1.e4cdae817585cp-818, 0.0, 0x1.58897d9345fd8p-1000,
     0x1.13b595280bec6p-780, 0.0, 0.0, 0x1.ffd4f40380cf7p-24, 0x1.31bf850a3286cp-667,
     0.0, 0x1.0ed3451b9d7e1p-773, 0x1.0dcd0bbf9d427p-953, 0x1.bddc90443d0e1p-845, 0.0,
     0.0, 0.0, 0x1.a555fc54c9c7ap-846, 0x1.e90a49adebbe2p-303, 0x1.b1bab683566b3p-356,
     0.0, 0x1.1cdb9e794df9p-420, 0x1.0de3ec2dec7d8p-938, 0x1.39cbe03595cc2p-887,
     0x1.b06eb695497dcp-195, 0x1.fe948f30d71ccp-656, 0.0, 0.0, 0x1.86f743ca14cebp-973,
     0x1.7967d9693da92p-604, 0.0, 0.0, 0x1.3577b5ca8bd25p-900, 0.0,
     0x1.9a7a1b95d938cp-555, 0x1.379bc66a9b78dp-974, 0.0, 0x1.b91b20c247076p-976, 0.0,
     0x1.e57a1cd2bd6ebp-579, 0.0, 0x1.0cc06107d96f3p-406, 0.0, 0x1.0cba778714932p-846,
     0.0, 0x1.14d4ea3bc1b88p-377, 0x1.cc7135bc50257p-889, 0x1.83f4fb012f9a3p-611,
     0x1.b0b6c19f37c62p-792, 0x1.18a1d1b3cf388p-955, 0x1.0379d7a3ef801p-845, 0.0,
     0x1.1e0e2a19f7ae3p-579, 0x1.15cad501cc24dp-515, 0.0, 0x1.9fb69743aa852p-450, 0.0,
     0x1.6de9e2e67e6d4p-857, 0.0, 0x1.8545ce8e861f8p-500, 0.0, 0.0, 0.0,
     0x1.e18d9c6c5da16p-6, 0.0, 0.0, 0.0, 0.0, 0x1.8e1a1f97bce98p-80,
     0x1.778ff3d2c435bp-264, 0.0, 0.0, 0x1.2eda278531218p-258, 0x1.7e3da10099ee9p-775,
     0.0, 0.0, 0x1.279a67f9acf6ap-550, 0.0, 0x1.3b266c404af89p-506,
     0x1.cfa033ab56b9ep-712, 0x1.6fee7a3419f67p-742, 0x1.0d0fd175a7f3cp-129,
     0x1.3e0aceb1285c6p-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7957047640461p-652, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e62a9dc0218d2p-364, 0.0, 0x1.cc87588aed36bp-846,
     0x1.b56d4fc41574ep-264, 0.0, 0x1.3cc62610f3468p-497, 0.0, 0.0,
     0x1.b7b6f2377e921p-651, 0.0, 0.0, 0.0, 0.0, 0x1.22b7676afcce3p-24,
     0x1.d85a37cc1b4e9p-130, 0x1.f1f9cf35f5253p-361, 0.0, 0x1.4554f39d45114p-381, 0.0,
     0.0, 0x1.1a113450e729dp-912, 0x1.efaefde0ddb2ep-46, 0x1.8362a35fcf362p-1020, 0.0,
     0x1.0e51c8107b01bp-421, 0.0, 0.0, 0x1.78ef9dfb88dbep-316, 0.0, 0.0, 0.0,
     0x1.6eb0936f88f47p-452, 0x1.3cafea649c033p-756, 0.0, 0.0, 0.0, 0.0,
     0x1.bbb8eb3964381p-622, 0.0, 0x1.1d7bc911bc5f7p-140, 0x1.f4a2a8726e192p-528,
     0x1.05f27ce51b6dbp-675, 0x1.d2d5a5a38cf73p-134, 0.0, 0.0,
     0x1.a0680bee9ecc8p-1006, 0.0, 0x1.ac8483f6bdebcp-816, 0x1.77fed401e933ap-903,
     0x1.b1f1dad26bcfcp-156, 0x1.ed0d7b489656dp-195, 0.0, 0.0, 0x1.14be4b7b96dfp-407,
     0.0, 0x1.e715c802b740bp-422, 0x1.51e14a759cb4fp-350, 0.0, 0x1.056f195e2e437p-858,
     0.0, 0x1.f6f2bd9720808p-410, 0x1.7570f56ff68b3p-70, 0x1.6f593062e0ddep-114, 0.0,
     0x1.cb22938ac207fp-957, 0.0, 0x1.5ab37496feee1p-561, 0x1.6f2e1dcce10b2p-578,
     0x1.0e8fe8b604987p-761, 0x1.55731cf26934bp-807, 0.0, 0x1.8e0295fe256c4p-308, 0.0,
     0x1.ff49ca998a838p-1014, 0x1.b7ad2dc3af7afp-326, 0.0, 0x1.cfea6d252953ap-593,
     0x1.f740978b39fddp-716, 0x1.ab951d950b35p-332, 0x1.1d77f20408d1cp-144, 0.0,
     0x1.9b657dd3bc37p-834, 0.0, 0x1.7cbd20b37c882p-311, 0.0, 0.0, 0.0,
     0x1.d036a0c890a58p-245, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1f36b30e9205p-301,
     0.0, 0x1.1b3b26bde205dp-558, 0x1.592354e4b3f66p-271, 0.0, 0.0,
     0x1.9522115c9db7ep-201, 0x1.3393a678d0149p-368, 0x1.c9e8d5cb32d64p-98, 0.0,
     0x1.18e0befa3248bp-707, 0x1.a1dcc147bb7bdp-1000, 0x1.dc37f875fc031p-77, 0.0, 0.0,
     0.0, 0x1.3a57018b233f4p-869, 0x1.e63f1ae955fddp-697, 0x1.0390589d0809bp-306, 0.0,
     0x1.da1a4dfa7da0ep-333, 0x1.98b2cc7a519d7p-876, 0x1.705cd054a66b5p-186,
     0x1.eb95f4415451ap-95, 0x1.2959b2fcbbe66p-18, 0.0, 0.0, 0x1.3afb40498f861p-151,
     0x1.dd1c1150841efp-262, 0x1.24ad1b4e662f9p-209, 0.0, 0x1.f9149185cfe6ap-49,
     0x1.768008a89c846p-437, 0x1.7cba00529ba38p-939, 0x1.51abb2113daf1p-204, 0.0, 0.0,
     0.0, 0.0, 0x1.dfa88c4e3b434p-433, 0x1.f505e62e65798p-793, 0x1.04c23a771f771p-332,
     0x1.47debad08e07p-175, 0x1.c9dd25757c961p-961, 0.0, 0.0, 0.0, 0.0,
     0x1.7f7455ccf9fd1p-497, 0.0, 0x1.014029c001813p-616, 0x1.818bcc02c1c91p-975,
     0x1.654bd3d63018dp-387, 0x1.49f6de97874cp-817, 0.0, 0x1.2593add259369p-558, 0.0,
     0x1.ccf81a4e4b77ap-675, 0.0, 0x1.944c1a63bbcabp-827, 0x1.fceffd3789888p-37,
     0x1.986b74736349bp-552, 0x1.42e1c81347f1bp-74, 0.0, 0.0, 0x1.09c0e57a68416p-224,
     0.0, 0x1.6b307865ac3cep-754, 0x1.7933421865b68p-607, 0.0, 0x1.cdf0e484b25d1p-579,
     0x1.d8e1a3f846c6ep-993, 0.0, 0x1.3fa8e2cb4d2f5p-799, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1c21dca3b13b8p-382, 0.0, 0x1.ae9bb78a10a98p-427, 0.0, 0.0, 0.0,
     0x1.724df31c8769bp-283, 0.0, 0.0, 0.0, 0x1.06ce209311f15p-481,
     0x1.7b640bfd1f9e8p-573, 0.0, 0x1.58ee93169949ep-627, 0.0, 0.0,
     0x1.bc8ec6bd30bd2p-692, 0x1.2efc84964698cp-521, 0.0, 0x1.edfb81cf55838p-307,
     0x1.7b2b228e0d4f6p-758, 0x1.46da4dc57562p-878, 0.0, 0x1.0050e1a98ea37p-1004,
     0x1.cf28bb2dbff38p-664, 0x1.5c1cc52fb4581p-264, 0.0, 0x1.8225efb1721ep-988,
     0x1.555e194bd837dp-9, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b59926c6e957p-645,
     0x1.559efe64123c8p-335, 0.0, 0.0, 0.0, 0x1.e0c75ce39443dp-495,
     0x1.a4f365f7969eep-923, 0x1.6ce33ef8da5c1p-795, 0.0, 0.0, 0.0,
     0x1.e4c1910a0565bp-155, 0x1.0dee4723fdb88p-662, 0.0, 0.0, 0.0, 0.0,
     0x1.29fd938d85ca1p-62, 0.0, 0.0, 0x1.d53146b1bec55p-518, 0.0,
     0x1.8be90478c9a65p-336, 0.0, 0x1.4afd738b6df83p-689, 0.0, 0x1.04b2980b4a6eap-253,
     0x1.5f91651bcd7e4p-953, 0.0, 0x1.178e27e7e3d6ap-713, 0.0, 0x1.511994af4ab2p-340,
     0.0, 0x1.a97d291198a55p-972, 0x1.f27d96056221p-745, 0.0, 0.0,
     0x1.b2b130713369bp-676, 0x1.d76b96db4058ap-481, 0x1.ecdad65054342p-520, 0.0, 0.0,
     0x1.cc513275572eep-880, 0x1.2165104b769bcp-468, 0.0, 0x1.80ce047460a1p-964,
     0x1.ac50290a29b14p-966, 0.0, 0x1.01b6cc44bc0f6p-608, 0x1.3cc93a346966p-712,
     0x1.91eaf5a0f6c91p-216, 0x1.9ea474e7b5f28p-241, 0.0, 0x1.551b4732873efp-932, 0.0,
     0.0, 0.0, 0.0, 0x1.4dab97a53f552p-354, 0.0, 0x1.8f54ac2a3226dp-517, 0.0,
     0x1.40b19286b1f2fp-703, 0x1.5ec47269a6f99p-552, 0x1.e9604fe10b422p-608,
     0x1.3c701b5524ap-743, 0.0, 0x1.0dcb33432e01p-1, 0x1.4e0e10df310b2p-626,
     0x1.910317cc40feap-402, 0x1.c444fc8534704p-856, 0.0, 0x1.d1436e2dda421p-446, 0.0,
     0.0, 0.0, 0x1.b8d37b4be519ap-520, 0.0, 0x1.3e3668f31458cp-363, 0.0,
     0x1.05612ac424ae3p-80, 0.0, 0.0, 0x1.23e77b5ff1ebfp-906, 0x1.d2e7febf471dep-957,
     0x1.5a0ec49d26f58p-605, 0x1.b6bfcc07b7c8p-660, 0.0, 0.0, 0.0, 0.0,
     0x1.b2c05eade0f11p-642, 0x1.ea576ebeda02bp-699, 0x1.3cf00709c2edap-455, 0.0, 0.0,
     0.0, 0x1.d6424b47878acp-447, 0x1.b5b22f85c89dap-171, 0x1.5c10ab4e2aac5p-46,
     0x1.02826f53e200dp-235
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
            tmp1 = Sleef_finz_truncd4_kvx(tmp0);
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
    printf("Sleef_finz_truncd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_truncd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
