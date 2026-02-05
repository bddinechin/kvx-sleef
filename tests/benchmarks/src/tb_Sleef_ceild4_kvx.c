/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceild4_kvx.c --function Sleef_ceild4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.54a402486572dp-886, 0x1.afc287c4bd648p-652, 0x1.fac4a48074ebp-814, 0.0, 0.0,
     0x1.47ef9f2a3d5e5p-785, 0x1.262ff0e10c7a6p-476, 0x1.2a75e26af8a86p-198,
     0x1.769726bf3bfe4p-22, 0x1.64200f5394c0ep-390, 0.0, 0x1.7256d5d591453p-364,
     0x1.360ab1703fb47p-955, 0.0, 0.0, 0.0, 0x1.40412974650cap-901,
     0x1.2970fdafd73a9p-261, 0x1.0870dc737ed0dp-821, 0.0, 0.0, 0x1.271b1bedd8512p-975,
     0x1.99770ff23b846p-289, 0x1.6e78de20de45dp-819, 0.0, 0x1.d1826b8060bc7p-463, 0.0,
     0.0, 0.0, 0x1.daec58dacaca1p-349, 0.0, 0.0, 0x1.be8043305fb9ep-896,
     0x1.8d69310bb7732p-298, 0.0, 0.0, 0x1.6be55182ff5efp-643, 0.0, 0.0,
     0x1.41307ae50cde6p-1016, 0x1.e1a1d60e2492bp-816, 0x1.b79e4afed5ea5p-909,
     0x1.542e1c70a4353p-793, 0x1.f1b31d1fa4648p-129, 0.0, 0.0, 0x1.066b661833994p-747,
     0.0, 0.0, 0x1.829587d3d3212p-145, 0.0, 0x1.99a1c611c7e9cp-962,
     0x1.a7ba93bab59dbp-577, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aac9961072b14p-768,
     0x1.c44beb566f864p-498, 0x1.56bbcf35c2495p-223, 0x1.c50b5815ebd05p-843, 0.0, 0.0,
     0x1.a432b51be2181p-438, 0x1.fbbe1ab7742e6p-1013, 0x1.5b2d812a6a17dp-847,
     0x1.0709a3b70e662p-806, 0.0, 0.0, 0x1.cbee1837e4d9cp-142, 0.0, 0.0,
     0x1.79270400431e2p-559, 0.0, 0.0, 0.0, 0.0, 0x1.05e478647aaf6p-202,
     0x1.062fb5749a05p-891, 0x1.c3c66bdc404eap-746, 0.0, 0x1.b7b3febb7e54dp-300, 0.0,
     0.0, 0.0, 0x1.640b5020381e2p-801, 0.0, 0x1.3ee7e2ce5321dp-726, 0.0, 0.0,
     0x1.e982a680aa68dp-478, 0x1.41a77ad117f8cp-660, 0x1.e39cd93c301b3p-805,
     0x1.9869a28f86a31p-668, 0.0, 0.0, 0x1.1df8a8eceaf4p-607, 0.0,
     0x1.1131706465d8ep-521, 0.0, 0.0, 0x1.0f062d53c5446p-137, 0x1.dc21e3b21adc3p-617,
     0.0, 0.0, 0x1.ac330c6d6a76dp-528, 0x1.256f1a660b877p-323, 0x1.349052ecfbb9p-616,
     0.0, 0.0, 0x1.083372be9b807p-387, 0x1.66c915d606d3fp-139, 0.0, 0.0, 0.0, 0.0,
     0x1.09857d19b5227p-784, 0x1.13e646d2c9675p-345, 0.0, 0x1.7a3cba980b5c8p-641,
     0x1.1ffb4e4538c1ap-715, 0.0, 0.0, 0x1.5839de9f178a1p-68, 0x1.06a2a2deba35p-1011,
     0.0, 0x1.b1cf01a3087p-734, 0x1.10a75487620e2p-763, 0x1.79dafbeb34a27p-514,
     0x1.9805d3fc249e4p-738, 0.0, 0.0, 0.0, 0x1.a8bcf34084be9p-432, 0.0,
     0x1.181d18f5752b1p-591, 0x1.7864b75da9e19p-22, 0.0, 0.0, 0x1.48d7f652a354dp-550,
     0.0, 0.0, 0x1.dbe43a727ebbep-30, 0x1.3d76908d311cbp-809, 0.0,
     0x1.9592f431a0dc3p-165, 0.0, 0.0, 0x1.adb7e7c944f11p-228, 0.0,
     0x1.d21f07bc7aa24p-305, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac50d90180ff7p-82,
     0x1.063f6a4db2859p-199, 0x1.def7b0d044bcbp-154, 0x1.0c980dfb2b6dbp-734, 0.0, 0.0,
     0x1.aefaf2a3eccaap-900, 0x1.4ca906a2ff82cp-994, 0.0, 0.0, 0x1.38902f13ca63p-434,
     0x1.8f4fcb61a3f8fp-388, 0x1.a771358dc2327p-650, 0x1.30f10c7c578c3p-569,
     0x1.501f3a938745bp-825, 0.0, 0x1.0a957237f9b92p-199, 0.0, 0.0, 0.0,
     0x1.eda257dd60d09p-604, 0x1.1d98f364fff32p-420, 0x1.14e08d4e6007ep-107,
     0x1.ce140650b8a22p-153, 0.0, 0.0, 0x1.60daeb67410ddp-41, 0x1.e794b255643ap-947,
     0.0, 0.0, 0.0, 0x1.f5885511bc11fp-739, 0.0, 0x1.d51e1bb91c035p-393,
     0x1.4a88e03945084p-907, 0x1.6255bda59d087p-893, 0.0, 0x1.60bce05655058p-116,
     0x1.5d516ce8be75dp-224, 0x1.5a8c854711727p-41, 0.0, 0x1.2536a7f6c05b5p-947,
     0x1.8a4bf490e04c7p-1015, 0x1.30d8abecc4aep-288, 0.0, 0.0, 0.0,
     0x1.a009a006ad2bep-569, 0x1.ca242670102d7p-399, 0x1.d5d5b3e161ad6p-390, 0.0,
     0x1.381e86f2f9652p-56, 0x1.5a741e1769f74p-236, 0x1.be7cb4f3a194dp-162,
     0x1.68e5c8caffc7fp-485, 0.0, 0x1.7eb27d8a092c7p-223, 0.0, 0x1.593a48b52f955p-444,
     0x1.d9917ecaa78b5p-793, 0x1.a5bc4bba1b78dp-263, 0x1.8156deb3d6f39p-556,
     0x1.b077c0aef5c8dp-114, 0x1.d5f5407bba1adp-68, 0x1.25e20b26837b3p-896,
     0x1.c555be2527683p-707, 0.0, 0.0, 0.0, 0x1.1c10278ffcfb2p-459, 0.0,
     0x1.256e3f5df6609p-411, 0x1.e10f1b1d31b23p-551, 0x1.96f6da232f4b2p-171,
     0x1.feefa4552c24fp-298, 0x1.965bd19c4b3d5p-375, 0.0, 0x1.b0630c0052972p-4,
     0x1.3f9e1ff6b07ccp-696, 0.0, 0x1.8e3bafc5de73dp-933, 0x1.fbf1a6b7bd4c9p-513, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a2196349d633p-354,
     0x1.f0ddce5734b14p-742, 0x1.cde46cbcbafd4p-395, 0.0, 0x1.ac625ed289908p-72,
     0x1.6aee79ad4d978p-566, 0.0, 0x1.66bd57ed1a312p-893, 0.0, 0x1.f7012a4ad311ap-970,
     0.0, 0x1.d4087a03b65c1p-299, 0.0, 0.0, 0x1.59be71a938d56p-510, 0.0, 0.0,
     0x1.8d132494d9058p-589, 0x1.4bf7d3721022fp-857, 0x1.e9a45b20f4b6ap-216, 0.0,
     0x1.1c3acd3c06663p-209, 0x1.0bf195d213279p-988, 0x1.108a8cd1e772ap-973,
     0x1.008ed8819fd0fp-928, 0x1.b31b43881c737p-832, 0.0, 0.0, 0x1.5d4a3b7fd664cp-718,
     0.0, 0x1.92a0e543f2251p-860, 0.0, 0x1.04d550a777428p-344, 0x1.d288de829e82ep-345,
     0.0, 0x1.0f9a767860e51p-663, 0x1.9b6ab420f6dbp-70, 0.0, 0x1.a651b2ce88d85p-900,
     0.0, 0.0, 0x1.e21355b1bd533p-472, 0x1.68d1e5187e969p-500, 0.0,
     0x1.ecb608c3b9d96p-41, 0x1.db70177ae1212p-964, 0.0, 0.0, 0x1.e86cb939a039ep-758,
     0.0, 0x1.a93cf8b011c05p-385, 0.0, 0x1.79b34eb17d951p-186, 0x1.0eae37139c949p-948,
     0x1.74dd79b63e5c1p-487, 0.0, 0.0, 0x1.4f51b09369dd3p-131, 0.0,
     0x1.965d49c3e2cf9p-364, 0.0, 0x1.f9390a3e6541fp-721, 0.0, 0x1.9303a9d195f8p-975,
     0x1.8fc92ef259e22p-772, 0x1.79863bb4d0ca5p-1021, 0x1.3f8c48d5b4354p-919, 0.0,
     0.0, 0x1.5c486def840d5p-418, 0x1.22abd354ab024p-91, 0.0, 0x1.8d4299d48cae4p-987,
     0x1.4ce1b4da74095p-727, 0.0, 0x1.14e3d5cc328dbp-847, 0x1.381dd96e55f15p-82,
     0x1.3298ae65800fdp-398, 0x1.185bd347d6f58p-534, 0x1.179c4a978df91p-835,
     0x1.5725f2fe358c3p-272, 0x1.100253a170d27p-780, 0x1.97fbd1628e9c7p-201, 0.0,
     0x1.664c9707eb535p-406, 0x1.c87ae6c088b8bp-325, 0.0, 0.0, 0x1.962e2f709ccd7p-312,
     0x1.cdf0f0e6d5bc4p-151, 0x1.c33c188a3ded6p-739, 0.0, 0.0, 0x1.ce2e0bfc76e14p-31,
     0x1.5eadda9655313p-1010, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0c82b5605b29fp-622,
     0.0, 0x1.7f8f50f6278fap-408, 0x1.802bf604e68dbp-417, 0.0, 0x1.f39d8bd304294p-152,
     0x1.0c58e00418d25p-475, 0.0, 0.0, 0x1.82132109deb59p-688, 0.0,
     0x1.23fbf36660344p-217, 0.0, 0x1.e735bf333aa6ep-698, 0.0, 0.0,
     0x1.dbddd9c7eb805p-29, 0.0, 0x1.187c06c179907p-341, 0.0, 0x1.10382d259f381p-108,
     0.0, 0.0, 0.0, 0x1.a98f803645631p-97, 0x1.4d044d84b8e8ap-581,
     0x1.32b12bee0d766p-656, 0.0, 0x1.916c973a5e447p-863, 0x1.09dcbc195b027p-778, 0.0,
     0.0, 0x1.3ecdfe51df38bp-941, 0x1.99b3157ac7d8cp-155, 0.0, 0.0, 0.0,
     0x1.9636840e72183p-387, 0.0, 0x1.da09d2b2b88e2p-770, 0.0, 0x1.88598240c30fcp-585,
     0.0, 0x1.2ee2364a344f6p-196, 0x1.be0260b3531a2p-467, 0x1.f5dc550708d21p-405,
     0x1.91a268e0c401ep-433, 0x1.aec804e3d1079p-815, 0.0, 0.0, 0x1.023224a56c892p-617,
     0.0, 0.0, 0x1.f47fbc62f6dfap-220, 0x1.b2ab1e973c20bp-648, 0x1.88e25cba5e9a8p-467,
     0.0, 0x1.29be01dc2ae77p-29, 0x1.fc77443266384p-148, 0.0, 0.0,
     0x1.7cec04ee413c1p-940, 0.0, 0x1.8a9273a3048bfp-729, 0.0, 0x1.781a5cb682c38p-722,
     0.0, 0x1.e107006636708p-802, 0x1.09c1efc44987ap-15, 0.0, 0.0,
     0x1.1ecd3dd97dbbp-203, 0.0, 0.0, 0x1.c48daa1c83f8fp-270, 0x1.74059b151712ep-943,
     0x1.a680fe978cd9cp-805, 0x1.f982d850f2e18p-715, 0x1.7c65b0efad8dp-258, 0.0,
     0x1.eead28f4ee23bp-832, 0x1.4ade20ce6ac29p-502, 0.0, 0x1.365f1ae589807p-331,
     0x1.2f2230764b9d2p-152, 0.0, 0.0, 0x1.fc6e7f40d2f5ep-543, 0.0, 0.0,
     0x1.aa97d02ee13bdp-845, 0.0, 0x1.3f5ac9599247cp-66, 0x1.bea821a3f3934p-952,
     0x1.2d68a05cf472fp-796, 0.0, 0x1.6b8cd5912198cp-663, 0x1.918688b2706fep-317, 0.0,
     0.0, 0.0, 0.0, 0x1.b1257ee1454b2p-805, 0.0, 0x1.7ec1175f124dep-597,
     0x1.e63f5a2df7925p-535, 0.0, 0x1.2438f99217182p-872, 0x1.aa8456119f6fep-955, 0.0,
     0x1.091f71a723d8fp-423, 0.0, 0x1.6073847dc26dbp-494, 0x1.68f499200c401p-379, 0.0,
     0.0, 0.0, 0.0, 0x1.f0ce947a5dd5fp-494, 0x1.1d984f7a9e768p-322, 0.0, 0.0,
     0x1.5598ac9450b78p-80, 0.0, 0x1.bf3e3d898cb4fp-948, 0x1.e9c01848bf926p-252,
     0x1.24e4b1d988f08p-377, 0.0, 0x1.fb2c3c399e28ap-281, 0x1.71a6644f6ebcp-513,
     0x1.796758b02067dp-628, 0x1.273ebc8a45305p-256, 0x1.5859a7770cd32p-454,
     0x1.4293b32f53914p-473, 0.0, 0x1.3e682f410d6e2p-109, 0x1.cfe4cfe0455dfp-975, 0.0,
     0.0, 0x1.966d12ade9fedp-338, 0.0, 0x1.5f30823f514e7p-724, 0x1.5535dd43029d8p-828,
     0x1.6ae2cb21ff2a3p-716, 0.0, 0.0, 0x1.6553231841654p-869, 0x1.2c3cbb6d65c96p-476,
     0x1.70a59b08cb10cp-578, 0.0, 0.0, 0.0, 0x1.2aba36c5ee35bp-705, 0.0, 0.0, 0.0,
     0x1.c83626cfb3bfdp-713, 0.0, 0.0, 0x1.ac5cce100e7dfp-915, 0x1.3f1b2d30e5cd8p-559,
     0.0, 0x1.753590f04d909p-281, 0x1.ccd67a7ca56ecp-766, 0x1.b7a73aa129684p-352, 0.0,
     0.0, 0x1.7e4ef66360c43p-211, 0x1.f7c87fc29b355p-426, 0.0, 0.0, 0.0, 0.0,
     0x1.d2ebeda82d49ep-180, 0.0, 0x1.fb7e41affa7cfp-198, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c157dacfb44d8p-958, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.012d2b2e24768p-366, 0.0, 0.0, 0x1.0630f62ed44e1p-607, 0x1.179730276091fp-495,
     0.0, 0x1.89e391ccfaed1p-954, 0x1.c7a502d803552p-98, 0x1.8c633a5c0f8ecp-208, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.031cdb831075ap-997, 0x1.7923ac605ec72p-401,
     0x1.c3a2c0749fd4bp-637, 0.0, 0.0, 0.0, 0.0, 0x1.fbaae19e4ae47p-671,
     0x1.2c91a2a5fb1e5p-531, 0x1.33725c5f9dfeep-264, 0x1.6c6c68363ac16p-553, 0.0,
     0x1.8e75406bbb1f5p-765, 0x1.b38e0b61d758p-16, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.983c0e08f086fp-389, 0.0, 0x1.f68132c0039f4p-764, 0.0, 0x1.3ae6db80f5727p-345,
     0x1.3a36850ff22ffp-24, 0x1.02052ee0867f7p-790, 0x1.daaa1f52dcbfap-871,
     0x1.bdbda11325f99p-55, 0.0, 0.0, 0x1.363ba9693e025p-744, 0x1.9b8000a265d17p-834,
     0.0, 0x1.451f60725b871p-205, 0.0, 0x1.4e32ccc59bc56p-717, 0.0, 0.0,
     0x1.81dbb8961b6d3p-760, 0x1.45d4f923fe4abp-358, 0x1.a44c19baeae21p-263,
     0x1.50731b58476eep-179, 0x1.d90edb534a645p-27, 0x1.a7d68315b73ccp-851,
     0x1.f58a802eb6dc6p-390, 0x1.fdd4f577c398ap-608, 0.0, 0.0, 0x1.5b7f2c1d255afp-773,
     0.0, 0.0, 0x1.c40c344adc319p-394, 0x1.77ebdc4a5f0eep-176, 0.0, 0.0,
     0x1.dbd4a5d53407ap-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fdbe05ab55461p-88,
     0x1.1acca9a402ec5p-530, 0x1.9daeec12330eep-706, 0x1.8275d7a865d0ep-95, 0.0, 0.0,
     0.0, 0.0, 0x1.673413ed73a87p-580, 0x1.5532d3124553fp-972, 0.0,
     0x1.16016d5c73b09p-952, 0.0, 0.0, 0.0, 0.0, 0x1.db909f46c7c5p-491, 0.0,
     0x1.7918dcd2fabc3p-967, 0x1.0cdb207a1010ep-311, 0x1.359a49e613faep-866, 0.0,
     0x1.26057ee2197afp-1009, 0.0, 0x1.be7c71269bfp-313, 0.0, 0.0,
     0x1.f8847cb0e854p-900, 0.0, 0x1.2798f8172df4p-358, 0x1.1f24845c5ec52p-619, 0.0,
     0.0, 0.0, 0x1.b9a7da154cc47p-1018, 0.0, 0.0, 0.0, 0x1.40a22faf23e67p-182, 0.0,
     0x1.0e98b22fcf8cp-611, 0.0, 0.0, 0.0, 0x1.e7d9d43673c7fp-342, 0.0,
     0x1.b2e9a61eb3e49p-319, 0.0, 0x1.0285f476f64b7p-387, 0x1.b72fe8e4b8e03p-707,
     0x1.7e63bba63d4a4p-32, 0x1.431ea84a30161p-888, 0.0, 0.0, 0.0,
     0x1.8bd81e42d247p-519, 0.0, 0.0, 0.0, 0.0, 0x1.1be1951da850ep-368, 0.0,
     0x1.0d487138e0f47p-1018, 0x1.022b8e3b2c36ep-859, 0.0, 0x1.cace16a738646p-522,
     0x1.c0fbf9da02882p-2, 0.0, 0x1.4137d2a4815b5p-363, 0x1.f26e6c1ca9433p-251,
     0x1.4abc13d73a47bp-665, 0.0, 0x1.a662c2b8fd3d7p-922, 0x1.469296f811bb9p-590, 0.0,
     0.0, 0.0, 0x1.4c82cfe690579p-606, 0.0, 0x1.ba493aa35c3ecp-630,
     0x1.54421601d68e4p-981, 0.0, 0.0, 0x1.854cd9f725422p-762, 0.0, 0.0, 0.0,
     0x1.985d8e9f85f94p-437, 0x1.cc9af96115132p-346, 0.0, 0.0, 0x1.d51f76f0acfe1p-561,
     0x1.b14f3fc888c93p-919, 0.0, 0.0, 0.0, 0.0, 0x1.77e4cc022da5p-144,
     0x1.627f1350507acp-489, 0x1.2c4d5176a1848p-882, 0.0, 0.0, 0.0,
     0x1.7e236c2dcfb1cp-287, 0.0, 0x1.fa6324d3c9251p-899, 0.0, 0.0, 0.0,
     0x1.5be51d69be1fep-396, 0x1.59344b7709dbcp-977, 0.0, 0x1.aa7bc6d57dfc4p-111,
     0x1.5a2c9025c8303p-898, 0.0, 0x1.d4630aed45161p-986, 0x1.e5c47efa2a01p-444, 0.0,
     0x1.db2a8413d7adep-389, 0x1.55d875f94b8a7p-12, 0x1.700fcc67c90e6p-987, 0.0,
     0x1.f773003adadb3p-298, 0.0, 0.0, 0x1.1b6fc351ee3ffp-673, 0.0,
     0x1.877a97df5e713p-1020, 0.0, 0.0, 0x1.75184c0732f48p-541,
     0x1.d9ed3846df635p-815, 0x1.aec9a91c6d577p-272, 0x1.f631ae77f25ffp-493, 0.0, 0.0,
     0.0, 0x1.d1768d9e69579p-198, 0x1.ce29baf6f6a4p-408, 0.0, 0.0,
     0x1.9995d7542e405p-371, 0x1.f0a62a727fd73p-603, 0x1.c3d4d23f0a09ep-745,
     0x1.db6f1974da609p-164, 0.0, 0.0, 0x1.7c4d178b3686ep-136, 0x1.0068468c9fcd2p-107,
     0.0, 0.0, 0.0, 0.0, 0x1.829b633b207b3p-429, 0.0, 0x1.428a6de23bda9p-714, 0.0,
     0.0, 0x1.740cfcdb0977bp-1021, 0x1.88d3d1ba7c66dp-861, 0x1.59fb5a527bd41p-645,
     0.0, 0x1.bf589a089efep-625, 0.0, 0x1.0f4447403b5a6p-478, 0x1.e944df029dbb4p-139,
     0x1.2432b774bf53bp-768, 0x1.41a8b33e277aep-909, 0x1.2bd69b08930d5p-332, 0.0,
     0x1.8a87b4c368b3ap-746, 0.0, 0.0, 0x1.f9cb3252408dp-791, 0.0,
     0x1.3449fb46d28e7p-1006, 0.0, 0.0, 0.0, 0.0, 0x1.feb6401a0dd7p-46,
     0x1.b2753d539f844p-591, 0.0, 0x1.b0bd1193722f5p-1008, 0x1.30393f2c8fed6p-954,
     0.0, 0.0, 0x1.56f7db7446474p-14, 0x1.6c3816a34cceap-62, 0.0,
     0x1.2a404a3cf218p-67, 0x1.ffd6ef7af9d99p-214, 0.0, 0x1.9a31393ca21c5p-55,
     0x1.dda5bd7062e9ep-738, 0x1.e63b9b7ae6c7ep-938, 0x1.7ed5173743272p-960,
     0x1.b2e4d514beb0ap-503, 0x1.0662ffe80096dp-843, 0.0, 0.0, 0x1.352e4e010d802p-229,
     0.0, 0.0, 0.0, 0x1.006b85bda951dp-103, 0.0, 0x1.72447d98a9968p-468,
     0x1.5ae10b2241d6ep-708, 0.0, 0.0, 0x1.051427dca5301p-639, 0.0,
     0x1.4e50203411b2bp-28, 0.0, 0x1.589a260afe498p-117, 0x1.f026c134c3186p-260,
     0x1.71a82e48f6bf7p-1002, 0x1.1aa2b071a6249p-545, 0.0, 0.0,
     0x1.daa4f9c01209ap-230, 0.0, 0x1.1a0b25e32a81ap-637, 0x1.f20d2e9ae94c9p-700, 0.0,
     0.0, 0.0, 0x1.757cbcaf09b7p-510, 0.0, 0x1.e7fdc23fe6adcp-806, 0.0,
     0x1.e361154ce8fcbp-31, 0x1.6b35a3a88109dp-322, 0x1.608f9143ef0c1p-881, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c5ad881372c04p-1010, 0x1.bd87a18fec5c2p-894,
     0x1.e8bad3a362fedp-994, 0x1.7659a8f1d0fe5p-44, 0x1.9e94417a82e79p-617, 0.0, 0.0,
     0.0, 0x1.ee9f8d0429fc8p-111, 0x1.621ab1c846352p-689, 0x1.5984dab482b29p-283,
     0x1.6679f237af825p-492, 0x1.11b0ad6db5685p-418, 0.0, 0.0, 0x1.3dd95872c3e1dp-369,
     0x1.86c8e65bc99f2p-609, 0x1.14e50d245c85dp-495, 0.0, 0x1.c9b1d8896fb6p-576,
     0x1.d0d6cde8c5946p-520, 0.0, 0.0, 0.0, 0.0, 0x1.e397018a64d6ap-922, 0.0,
     0x1.dd8eaaac5b9a7p-84, 0.0, 0x1.0df2bdcf0c5c3p-272, 0x1.58b0b6b6e356fp-800, 0.0,
     0x1.7eb5d7caa5b5p-869, 0x1.437ca410c0f57p-878, 0.0, 0x1.c8e03a15f69fbp-771,
     0x1.870d5048b63b7p-598, 0.0, 0x1.c44b5d3e9c04dp-507, 0.0, 0.0, 0.0,
     0x1.e3b8e20fbc7bdp-20, 0.0, 0x1.b9053a43898dep-231, 0x1.5e7e7ea879eedp-754,
     0x1.9d55145eb4f18p-850, 0x1.a552d18b93448p-790, 0x1.8da448de68942p-632, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3b670482a3954p-447, 0.0, 0x1.12310726d4758p-708, 0.0,
     0x1.478d3a7557e7p-513, 0x1.b704a9881630dp-441, 0.0, 0x1.12f4a3841069cp-336, 0.0,
     0x1.4bb94921ef63cp-920, 0x1.91b772732c5dap-984, 0.0, 0x1.1dd64383e7cdp-942, 0.0,
     0.0, 0x1.8e2ead99297a1p-433, 0.0, 0x1.c6fe9d16bfc34p-513, 0x1.0355554f70946p-670,
     0.0, 0.0, 0.0, 0x1.8a5b7e79529cdp-53, 0x1.cdab14754e5ap-63, 0.0, 0.0, 0.0,
     0x1.f509d8e3fd8f8p-448, 0x1.c3b354bcc54fep-849, 0x1.bba79e6c2d857p-505, 0.0, 0.0,
     0x1.f6c9ee0abb652p-713, 0x1.9cf8763dbc39dp-769, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f17e6657c83a1p-274, 0.0, 0x1.e25bd7b5ba505p-603, 0.0, 0.0, 0.0,
     0x1.e795d862e6bafp-609, 0.0, 0x1.589e1065d2faep-274, 0.0, 0.0,
     0x1.c89ced003b0bep-400, 0.0, 0.0, 0.0, 0x1.19c18dee79967p-497,
     0x1.ff00f1107755cp-113, 0.0, 0.0, 0.0, 0.0, 0x1.d2c88f0779629p-193, 0.0, 0.0,
     0.0, 0x1.8ad37fb939f3p-707, 0x1.00abeac1b2b08p-85, 0x1.118bf2113db31p-702,
     0x1.36b35ea979c9ap-360, 0x1.0178f397b218bp-345, 0.0, 0x1.55f60d05afaf2p-547, 0.0,
     0.0, 0x1.7d1fe5f5be384p-678, 0.0, 0.0, 0x1.640c31982a17fp-88,
     0x1.86db79f6a4ecdp-463, 0.0, 0x1.54c8b66a1c575p-794, 0.0, 0.0,
     0x1.8398fe5d841a5p-938, 0x1.9cdf6f011430dp-360, 0.0, 0x1.537a8e6e71313p-205,
     0x1.b56645d95650ap-308, 0x1.a896fe3a9317p-227, 0.0, 0x1.5790d85ba6e9dp-321, 0.0,
     0.0
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
            tmp1 = Sleef_ceild4_kvx(tmp0);
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
    printf("Sleef_ceild4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_ceild4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
