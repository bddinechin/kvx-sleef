/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1d4_u10kvx.c --function Sleef_expm1d4_u10kvx \
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
     0x1.1bdd2a9afafe5p-131, 0x1.423a581edd7f9p-910, 0x1.0065eb976605bp-315,
     0x1.720739c774ccfp-255, 0.0, 0x1.65c77916ff09ep-606, 0x1.442d2c2886abbp-884, 0.0,
     0.0, 0.0, 0x1.38bfd364fcf47p-280, 0.0, 0.0, 0x1.beb5307432baep-614, 0.0,
     0x1.e9803b72b8da1p-148, 0x1.697d2abdc02c9p-208, 0.0, 0x1.2f7fc115adcabp-841,
     0x1.7f808851b52efp-524, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9e2ab87b88f8p-198,
     0x1.65781f31c6d1bp-817, 0.0, 0.0, 0x1.5a6b73de19235p-41, 0x1.810b4de0b99c4p-651,
     0.0, 0x1.9fbc18abaa3ddp-10, 0.0, 0x1.6ea1e34711675p-471, 0x1.9498713bfa139p-274,
     0.0, 0x1.3185cbc9814c6p-37, 0.0, 0.0, 0x1.210bac5dbfed3p-533, 0.0, 0.0, 0.0,
     0x1.fc697094fe188p-452, 0x1.86bcf66997fbfp-787, 0x1.fc75caa1f1607p-381, 0.0,
     0x1.84f61a43608d4p-473, 0.0, 0x1.141ec6f935d87p-380, 0.0, 0x1.cab0a0953b3ffp-95,
     0.0, 0x1.55b963be374d6p-823, 0.0, 0.0, 0.0, 0x1.89a4e6fcb3ee5p-516, 0.0, 0.0,
     0x1.5dcfe023bab66p-517, 0x1.e88dab5a5468ap-683, 0.0, 0.0, 0x1.9059248ac7326p-584,
     0x1.ef1c3440dfc76p-253, 0x1.fc5be35242b2bp-666, 0.0, 0x1.b95cd09a85393p-71, 0.0,
     0.0, 0x1.5b22bf4a92986p-762, 0x1.ee4e89aa1d889p-159, 0.0, 0.0,
     0x1.a6fb1ed6f51a4p-839, 0.0, 0.0, 0x1.25016698356fdp-163, 0.0, 0.0,
     0x1.a71585ce6dap-740, 0x1.8f659ef3c3793p-543, 0.0, 0.0, 0x1.e55ab005965a9p-832,
     0x1.11c2e09fadd4dp-423, 0x1.8e29c95aff193p-538, 0.0, 0x1.3ec961dffb3f8p-721, 0.0,
     0x1.06716e93736d6p-68, 0x1.27a39527d8a8cp-1007, 0x1.1bad097cd822p-343,
     0x1.e7870790d2f1p-1011, 0.0, 0x1.02f175b76bdd9p-423, 0x1.71579d0eba044p-937, 0.0,
     0x1.c2a2cd787d45fp-940, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40991f8c72c5fp-998, 0.0,
     0.0, 0.0, 0x1.af348144c8659p-785, 0x1.a97114867d93dp-22, 0.0,
     0x1.61df26934e206p-403, 0.0, 0.0, 0x1.6f84b39baf42p-730, 0x1.3437fcc297d91p-947,
     0.0, 0x1.d3091caa7b2c9p-913, 0.0, 0.0, 0.0, 0x1.240399f0f349p-424, 0.0, 0.0,
     0x1.39e4fcb8fa7bbp-632, 0.0, 0.0, 0x1.d87f19c07b1ep-558, 0x1.f4be95dd9d6cfp-146,
     0.0, 0x1.67f2932fd76adp-90, 0x1.9a93b3e69a32ap-209, 0x1.132025f02d75ap-276,
     0x1.99868be0d5b62p-175, 0.0, 0.0, 0x1.70820bae3ae8ap-295, 0.0,
     0x1.7fcc8f5bdffc4p-211, 0x1.c395a628a3adap-734, 0x1.67fdfd0e25f5fp-777,
     0x1.cbe416886d62fp-814, 0x1.e04696f187badp-606, 0.0, 0x1.b8659452780c3p-633, 0.0,
     0x1.c10b2f531c75dp-860, 0x1.da958e0febab3p-282, 0x1.574f8f635d892p-67, 0.0,
     0x1.0fba2a6879c6bp-301, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.077af381426e6p-857, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.278c3e335e02dp-741, 0x1.b3ee1aac7d89dp-172, 0.0, 0.0,
     0.0, 0x1.a4b47caf0181fp-408, 0.0, 0.0, 0x1.29dc49e62146fp-114,
     0x1.4c9ae6fcd8223p-649, 0.0, 0x1.989e99312eab7p-282, 0.0, 0.0,
     0x1.d6395d8dfe43ap-879, 0x1.e558caad05ba2p-443, 0x1.4963f98460d73p-94, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.aec16bd8c237bp-331, 0x1.bdbd4332fc0f8p-269, 0.0,
     0x1.ac599fd28a3d3p-706, 0x1.8bf982ba5459bp-172, 0.0, 0.0, 0x1.71861ece27eddp-967,
     0.0, 0.0, 0.0, 0x1.56c3a4cf41cf4p-136, 0x1.66b220f8ca73bp-769,
     0x1.64d04a2c22fd5p-26, 0.0, 0.0, 0x1.c6c1c9a23ba0ep-1018, 0x1.7a2503f078e15p-858,
     0.0, 0x1.257ed73560d82p-346, 0.0, 0x1.a39efe568e7b6p-692, 0x1.9c2f93ce77c9ep-153,
     0x1.b3fd6c685d0d2p-319, 0x1.5d9eb735827efp-644, 0x1.b57a0f8f9452ep-942,
     0x1.9fcd8c74022d2p-733, 0x1.32209187fe7a5p-182, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.001872119f2dcp-393, 0.0, 0.0, 0x1.4f8b0c6f21351p-815, 0.0, 0.0,
     0x1.dc06756a05874p-867, 0.0, 0x1.8cff30f582c92p-794, 0.0, 0.0,
     0x1.4bb618984260cp-642, 0x1.b4f8a5fdcde5bp-302, 0x1.51d06478e8f63p-941, 0.0, 0.0,
     0.0, 0x1.f9b6a25b52165p-928, 0x1.e9e051d572a29p-904, 0x1.0381f1b6b9e2fp-763,
     0x1.8405d682a229bp-514, 0x1.c2331f4c0fbd7p-72, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ef7b949fc6ee1p-107, 0x1.75cf194a6036p-459, 0x1.091a77b366ccfp-382,
     0x1.70cd773a8908cp-256, 0.0, 0.0, 0.0, 0.0, 0x1.be260391755a6p-42,
     0x1.d76bf7c803815p-670, 0.0, 0.0, 0x1.91a04ed07ed0ap-1010, 0.0, 0.0,
     0x1.e6ba86f7aec74p-459, 0x1.a874f5e80a68ap-469, 0x1.1fff9e63b16aap-346, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3634cb3653b5dp-368, 0.0, 0x1.7338355a7acacp-107, 0.0,
     0x1.9a953187204eep-24, 0x1.c84aea2713169p-218, 0x1.a073f880e9fd9p-585,
     0x1.52a12d78545f5p-275, 0x1.6dbaf9177e8eap-89, 0.0, 0x1.ae88e324c1b57p-72,
     0x1.b744cb4fbf1dap-157, 0x1.0fa6f361fb69cp-388, 0x1.b0a4ab36a6c21p-770, 0.0, 0.0,
     0.0, 0x1.67ef63107a41ap-351, 0x1.b0ce8e5053d69p-827, 0x1.6adc7928ea06cp-136,
     0x1.43af605aa3d33p-726, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3e8063539e4a7p-708, 0.0,
     0.0, 0x1.505c2f08fd872p-473, 0.0, 0x1.c748d64d5717ep-292, 0x1.b4ef07253c2e8p-458,
     0x1.1ca399ad89a7p-611, 0x1.3e83d08be35e4p-719, 0.0, 0x1.56d8df2b9e024p-163, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.720aa9fa1b963p-353,
     0x1.a72e4f58805c1p-475, 0.0, 0.0, 0x1.7116047b6ddf7p-901, 0.0, 0.0, 0.0,
     0x1.305baab9bccf6p-811, 0.0, 0.0, 0.0, 0x1.4fbcddf33ce97p-727, 0.0, 0.0,
     0x1.94fa0c351e87p-475, 0x1.2fafcddf85cp-644, 0.0, 0.0, 0x1.a39c776cc8674p-262,
     0x1.e822847322e6p-712, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08990f193ec47p-699,
     0.0, 0.0, 0.0, 0.0, 0x1.152335fe0cf98p-676, 0x1.b5e811bbbf1bp-224,
     0x1.68fb0e2d6dcb4p-497, 0x1.0a48324601a89p-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a5657f39c81a7p-25, 0.0, 0x1.b89a1da7bdc8ap-1011, 0.0,
     0x1.2358d7d41cbdcp-504, 0x1.808f324a4cf12p-942, 0.0, 0x1.69abcdeab9b8dp-727, 0.0,
     0x1.419d53cb3cd97p-926, 0.0, 0.0, 0x1.233a80fb37d06p-126, 0.0,
     0x1.b886ba24a9fbbp-514, 0x1.062b36cbd07bcp-630, 0x1.6e76f338b121bp-554,
     0x1.bece1e09424f9p-129, 0.0, 0.0, 0.0, 0x1.0557271f1538cp-266, 0.0, 0.0,
     0x1.3070c267dd4d6p-65, 0x1.5e8dd574049cep-640, 0.0, 0x1.81848996b2b7p-395,
     0x1.82f7f7b2a41a8p-617, 0.0, 0x1.c35adddf1ca2bp-202, 0x1.169236a0b0b18p-262, 0.0,
     0.0, 0.0, 0x1.51f3c44a8cd1cp-656, 0.0, 0.0, 0.0, 0x1.3691b192d2899p-219, 0.0,
     0x1.646127139cfb8p-782, 0x1.4c20636e77e6fp-557, 0.0, 0x1.724fd0d88ebb2p-59,
     0x1.5c5f1f1cbd67ap-1015, 0x1.31ea4c1469571p-802, 0x1.163969d3a4d59p-969,
     0x1.175aa4e5d60d2p-138, 0x1.f65bd7e375226p-167, 0.0, 0x1.1168925bba24dp-324,
     0x1.5af2c1d0500dbp-455, 0.0, 0x1.9d3518dabbdcfp-126, 0x1.62b5ac47c822p-84,
     0x1.e6ccb76941a38p-793, 0x1.97a2fc6b4a49dp-183, 0x1.a49dbf53b1b4ep-673, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ce14f07318002p-323, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.00317e9be019p-407, 0x1.a15e844ebd5d6p-557, 0x1.9fbe39f847808p-386, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ef54126231f6dp-683, 0.0, 0x1.17d50c4fa3af1p-367,
     0x1.d1eab36f51a1cp-804, 0.0, 0.0, 0x1.241133dbb0f79p-373, 0x1.797365c1e21abp-47,
     0x1.25787729e75d1p-731, 0x1.080445d83366ep-901, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49f193f537951p-775, 0x1.d250f6c86fec2p-675, 0x1.d4583b6e94879p-220,
     0x1.ca432ff0357cep-202, 0.0, 0.0, 0x1.aa0abbbbd945bp-621, 0x1.0475822cf2b57p-69,
     0x1.c93ca5baa6507p-417, 0x1.966f715e1e15p-736, 0x1.7aa00f4f88c29p-232,
     0x1.feb97be975c77p-978, 0x1.cf6b22d81b585p-87, 0.0, 0x1.110da6ebee648p-479,
     0x1.1767f0f5edc4ap-781, 0x1.a12da734c2ceap-365, 0x1.3899744d96d7ap-337, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.67acc4816bca3p-824, 0.0, 0.0,
     0x1.f330366f1d3d8p-795, 0x1.cc643529909ecp-965, 0x1.3b42afcb3b0f6p-779,
     0x1.6be15cbc9c075p-653, 0.0, 0.0, 0x1.37117b75ce2dcp-659, 0x1.83032e7a77a9ep-901,
     0x1.f237542a193f7p-579, 0x1.37deb4195ae0dp-25, 0.0, 0.0, 0x1.b0083eea8f53ap-302,
     0x1.f2a072432ab27p-61, 0x1.727b35bf44484p-973, 0x1.34b84f838eacp-308,
     0x1.d55df1488ddcap-9, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ff97a2143f24p-459,
     0x1.99b127eb642b4p-806, 0x1.8f51067095dfcp-565, 0x1.f35afd1672d36p-1015, 0.0,
     0.0, 0x1.2acc99fd5ff37p-1017, 0x1.f737e999a80a3p-517, 0x1.780a23422acdcp-501,
     0.0, 0.0, 0.0, 0.0, 0x1.4c897d3bef236p-49, 0.0, 0x1.8f802805fd658p-894,
     0x1.b5960fdc618dcp-794, 0x1.dfc469ee66aa4p-577, 0x1.b0faa34014d19p-902,
     0x1.3d318c925f3b1p-141, 0x1.2220adef2eac2p-983, 0.0, 0.0, 0.0,
     0x1.1f1b36fc44f34p-16, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.396b8256b4a44p-763,
     0x1.7d6518f886b33p-607, 0x1.9aebbd32b3216p-416, 0.0, 0.0, 0x1.df64a049a01bdp-272,
     0x1.7d9c778b5cf3cp-206, 0x1.4465a2ffc22f3p-862, 0x1.c77329ba831d3p-681,
     0x1.5ad03d1910306p-493, 0x1.42929a186f27ep-28, 0x1.d8bfff953c19cp-135, 0.0, 0.0,
     0x1.88c2ca3087af1p-388, 0x1.e1a3ebd7fc8c7p-7, 0x1.e450d73a42672p-839,
     0x1.2414a8227d22cp-996, 0.0, 0x1.7845ffba3b14fp-60, 0.0, 0x1.52aa72a963cbap-104,
     0.0, 0.0, 0x1.7dc5d6fe8eebfp-73, 0x1.8f8e019b30dc3p-978, 0x1.967341990d8edp-591,
     0.0, 0x1.6aade1ff60f48p-473, 0.0, 0.0, 0x1.b088087afcef7p-235,
     0x1.9595ec554717ep-131, 0x1.906ad0607d0cp-606, 0x1.8a51b250891ffp-712,
     0x1.065f8ebe6ad0ap-245, 0x1.e972d69271cf9p-763, 0x1.8c7be8fa42448p-854, 0.0,
     0x1.9b622092683p-29, 0x1.664396062f966p-330, 0.0, 0.0, 0x1.dc30de1c0bfecp-140,
     0.0, 0x1.455e1f7c09a8ap-303, 0.0, 0x1.46d259bd802acp-604, 0.0,
     0x1.b8ac50ac467ecp-811, 0.0, 0x1.3582fac2cd1b9p-340, 0.0, 0x1.986459043ff09p-457,
     0.0, 0x1.a057deda40723p-142, 0.0, 0.0, 0.0, 0x1.e78f9f42fe3c6p-927, 0.0,
     0x1.693007afa5236p-694, 0x1.fcf10e76ff86fp-783, 0.0, 0.0, 0x1.d2a127c9a43bbp-148,
     0x1.88cb3a282dba2p-646, 0.0, 0x1.2b2cca6ea6576p-147, 0.0, 0x1.ebbf841cee83dp-555,
     0.0, 0.0, 0x1.2bee760c47cd4p-629, 0x1.e8d98f3cedcbbp-268, 0x1.3c1aeb7821e36p-846,
     0.0, 0.0, 0x1.a00a91e46b82p-138, 0x1.b6eb290674672p-501, 0.0, 0.0,
     0x1.deb014c1db7f6p-834, 0.0, 0.0, 0.0, 0x1.e1666b5b5b6c6p-789, 0.0, 0.0,
     0x1.e651b51981361p-755, 0.0, 0x1.33851f654a5b9p-859, 0x1.0d882de700ecbp-346,
     0x1.728e1520fbcdbp-591, 0x1.a36863f79d179p-417, 0x1.6549782af7d14p-516,
     0x1.b03e2738c14fep-955, 0x1.cfcb16879245p-289, 0.0, 0.0, 0.0,
     0x1.03390cd8f871cp-568, 0.0, 0.0, 0x1.755d11dc0ee87p-302, 0.0,
     0x1.25342f5954ba3p-213, 0x1.88f9e834b40bap-352, 0.0, 0x1.58d637522c856p-946, 0.0,
     0x1.11e028dc85d2bp-810, 0.0, 0x1.9fabd9e7ba2f9p-656, 0x1.356ff7a01a3dap-176,
     0x1.911e584c60787p-632, 0.0, 0.0, 0x1.ea809b68f43a6p-724, 0x1.c24b303e9a935p-855,
     0x1.5626553cb1d3bp-843, 0.0, 0.0, 0.0, 0.0, 0x1.bd2f9ad021935p-28,
     0x1.3928483291677p-681, 0.0, 0x1.8a9d24675f09dp-683, 0.0, 0x1.4db83a7333786p-995,
     0x1.0e55fabbd55bbp-37, 0.0, 0x1.fcae99aa0be94p-485, 0x1.14f8efd8b887ap-109, 0.0,
     0.0, 0.0, 0.0, 0x1.1fedff5b7d0b3p-1001, 0.0, 0x1.a01ea36b41b8p-305,
     0x1.2573236ca1e1fp-625, 0.0, 0x1.03399daf17ea5p-157, 0.0, 0.0, 0.0,
     0x1.ea8e24f6f4afp-879, 0x1.8c3480a750696p-609, 0x1.f920da97c6c1fp-1018, 0.0, 0.0,
     0.0, 0x1.1c0147ed02dfap-50, 0.0, 0x1.18d3421e9d881p-130, 0.0,
     0x1.8137bda33f003p-816, 0.0, 0.0, 0.0, 0x1.170a7957f4d46p-126,
     0x1.22289d29454f4p-35, 0x1.960ca95cf338bp-726, 0.0, 0x1.fd1fe91da3a4p-492, 0.0,
     0x1.e2aae3a481c6p-119, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a4985fc3e536p-882,
     0x1.aa5b136d1d50cp-68, 0.0, 0x1.22e789a259318p-864, 0.0, 0.0,
     0x1.8cd09297385dbp-32, 0.0, 0.0, 0.0, 0x1.d06536137c987p-395,
     0x1.21b1b8bf67dap-753, 0x1.dd45de9f73709p-260, 0x1.cdbbf074b6275p-314,
     0x1.936595d6acb5p-381, 0x1.67ba396bca61fp-183, 0.0, 0.0, 0.0, 0.0,
     0x1.38c5ff3e5b857p-735, 0.0, 0.0, 0.0, 0x1.875f8881e9e37p-405, 0.0,
     0x1.675bd8199a39ep-795, 0.0, 0.0, 0.0, 0x1.9a3847695eac8p-408,
     0x1.e7ac1887c74bp-62, 0x1.a60a3fef125f4p-273, 0.0, 0.0, 0x1.74be9124b2d36p-623,
     0.0, 0x1.63bf0f9e8b536p-76, 0x1.df99b488e896ep-1001, 0.0, 0.0,
     0x1.17356aeb06dcap-505, 0.0, 0x1.cb45a5506fba1p-422, 0.0, 0.0, 0.0, 0.0,
     0x1.82f229ca57a0bp-839, 0x1.34eda09ace2d1p-54, 0x1.90cec0568e3fap-699, 0.0,
     0x1.d283fbe58424fp-527, 0x1.f7a377d53b6bp-635, 0x1.e991d08011c7dp-437,
     0x1.d576314e7f9cp-664, 0.0, 0.0, 0.0, 0x1.56d1140f27542p-950, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c353ab84901afp-997, 0.0, 0.0, 0x1.f198c8c127ef6p-296,
     0x1.a725ee50dbedcp-47, 0.0, 0x1.5a9d52798d091p-562, 0.0, 0x1.b3089492fdf87p-277,
     0.0, 0x1.9eb921c0023cdp-264, 0.0, 0.0, 0.0, 0x1.37cc974d928a6p-806,
     0x1.20dba7a0a3fcap-305, 0x1.7973be2225281p-508, 0x1.6a01930c491d5p-172, 0.0,
     0x1.81eee2b276db4p-900, 0.0, 0.0, 0.0, 0x1.7558478d4879ap-58, 0.0, 0.0,
     0x1.3dccb8cd482f1p-589, 0x1.58629c6d76aaep-969, 0x1.990dd9621ac8ap-835,
     0x1.08e237058bc77p-628, 0x1.1942caa499a29p-191, 0x1.5c2c1cb5176cap-779,
     0x1.7fd3fafa28752p-163, 0x1.a0b9327c502b5p-227, 0.0, 0x1.d0ae569664d75p-582,
     0x1.a9d829dcba3dcp-904, 0.0, 0.0, 0x1.b339839d3a82dp-402, 0x1.1ddcef3a78df8p-898,
     0x1.ed64229aea90dp-399, 0x1.cb531773c8afbp-484, 0x1.74155ff60001dp-805, 0x1p0,
     0x1.f6ce82d9a982ap-405, 0.0, 0.0, 0x1.5334093728205p-874, 0x1.0a1e0b330322ep-246,
     0x1.fc7ab24e9848p-196, 0x1.a7b74c13f0524p-363, 0x1.9c79a1767290bp-916, 0.0, 0.0,
     0.0, 0x1.166ce9a6bc114p-103, 0x1.51f9a4dd357adp-484, 0.0, 0x1.171f046878da5p-878,
     0x1.85b01583918d4p-581, 0x1.7ad48a717ea2dp-182, 0x1.df7adf5384aafp-14,
     0x1.1530da0540375p-637, 0x1.28d5329a0320cp-677, 0.0, 0.0, 0x1.d453946ca87a7p-347,
     0.0, 0.0, 0x1.8a180e672f719p-44, 0x1.f0dc5716c3eb6p-532, 0x1.7f3f67636a959p-136,
     0.0, 0.0, 0x1.a7a86661536p-362, 0x1.ffd4df8259aa8p-177, 0.0,
     0x1.4e2968601937dp-750, 0.0, 0x1.245cf8d9dfae2p-755, 0x1.74afb1472d6ep-16,
     0x1.d67436ed62ed9p-668, 0x1.207ce5f043262p-692, 0.0, 0x1.27f3295adc84dp-746, 0.0,
     0x1.1de1dd28ce532p-309, 0.0, 0x1.a8d7ac35c515bp-593, 0x1.23a577b9f140cp-255,
     0x1.4d6f8114635a8p-992, 0.0, 0x1.5b11aec01c223p-938, 0.0, 0.0, 0.0,
     0x1.7ab83810c08bap-402, 0x1.07624d3e0267p-789, 0.0, 0.0, 0.0,
     0x1.2c0cabb944544p-9, 0.0, 0x1.9e59f25f344d8p-902, 0.0, 0x1.02aeecd447a75p-742,
     0.0, 0x1.3be40ffa41ebp-873, 0x1.9e9d6be890e49p-817, 0.0, 0x1.1ef74c6257091p-549,
     0.0, 0x1.77331b1e3f479p-581, 0x1.de845ae3890a6p-49, 0x1.9e5656962f338p-968,
     0x1.0029f791ac98bp-487, 0x1.d517bd9504447p-264, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0b74b0d0c7e9p-470, 0.0, 0.0, 0x1.0ed3dc5ba9627p-324, 0.0, 0.0, 0.0,
     0x1.3bcdef179b829p-344, 0.0, 0x1.95e89fe1532f5p-959, 0x1.b4c10d7b3d872p-685,
     0x1.d1540ab595d6dp-760, 0x1.b8f103b8acc1p-920, 0.0, 0.0, 0x1.8bc1d91e27441p-408,
     0.0, 0.0, 0x1.8470d8a0b6ad7p-968, 0x1.901880950b3cbp-629, 0.0, 0.0,
     0x1.213f3b4a0dd2bp-216, 0.0, 0x1.adb2c6c7e8cb7p-262, 0x1.2af058e9b515p-906,
     0x1.1a5665e0ca6f2p-785, 0.0, 0.0, 0x1.3784edcf8584ep-833, 0x1.d827a6dde3357p-715,
     0x1.ffec000db72fap-675, 0.0, 0x1.d99d110e27c91p-474, 0.0, 0x1.95499a4abfa19p-396,
     0x1.8c39e0e08ab3ep-438, 0.0, 0x1.55fae9fdb9e12p-1008, 0.0, 0.0,
     0x1.32d067955bcd9p-852, 0x1.8b56fac1b444fp-334, 0.0, 0.0, 0.0,
     0x1.9b08d6ac07b8ap-604, 0x1.da01cc9b553cap-173, 0x1.00a3ace44cbdp-188, 0.0,
     0x1.2af68744253a6p-305, 0.0, 0.0, 0x1.bc88bd600c2f2p-693, 0x1.a3b67217d4ap-943,
     0.0, 0x1.d9e16619e8775p-891, 0x1.6e2f159ecf0a3p-452, 0x1.9dc9036c6af73p-87,
     0x1.1c51dcf33c859p-802, 0x1.d7447ba802efap-248, 0x1.56aea71f5e728p-897,
     0x1.c6613d7e8563bp-591, 0x1.bb93ee9bceef7p-555, 0x1.f2e13b3749541p-416,
     0x1.374ed46f20e7ap-152, 0.0, 0x1.4bf6bce050faep-510, 0.0, 0x1.78ead5a0e5b7ep-196,
     0x1.73f8c6e30146ap-503, 0.0, 0x1.41e41121c49d8p-796, 0x1.e5569cbfb55dp-446,
     0x1.b233abedf93e4p-623, 0x1.89d108e40782p-262, 0x1.123383bee210cp-552,
     0x1.9f5b52dc11154p-623, 0.0, 0x1.ecd94ff5f0e5cp-434, 0x1.014ef82af4d78p-905, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3132da9960eabp-705, 0.0, 0x1.7f9db1b6f927p-571,
     0x1.5ac1a4b97e541p-64, 0x1.3d2ad07634b73p-44, 0x1.d65c734ca4b28p-940, 0.0, 0.0,
     0.0, 0.0, 0x1.6c28a13c1b862p-652, 0.0, 0x1.74a927d72f5e2p-971,
     0x1.314269203a359p-9, 0.0, 0x1.480f5785b79ecp-215
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
            tmp1 = Sleef_expm1d4_u10kvx(tmp0);
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
    printf("Sleef_expm1d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_expm1d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
