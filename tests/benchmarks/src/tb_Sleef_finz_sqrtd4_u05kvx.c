/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd4_u05kvx.c --function \
 *     Sleef_finz_sqrtd4_u05kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.e9d4299492d2ap-611, 0x1.7383c589aae1cp-304, 0.0,
     0x1.29b8e82c0a9b5p-925, 0x1.e5ffd44603f3p-714, 0x1.09afbdbcb2db5p-244,
     0x1.615c0108c8921p-815, 0.0, 0x1.f564d7a611902p-396, 0x1.031baf2d573d8p-991, 0.0,
     0.0, 0.0, 0x1.83a910b0089d8p-413, 0x1.ba1c7d93c767dp-678, 0.0,
     0x1.72cfa232d3af4p-862, 0x1.cb9175a837d0bp-9, 0x1.8e2bf1ea2202bp-88, 0.0, 0.0,
     0x1.ceb19316ee14ep-819, 0x1.3bd3f44328544p-215, 0.0, 0x1.19bb6cbad44efp-949,
     0x1.00bd7a60a00c9p-948, 0.0, 0.0, 0x1.2d8ae27a37545p-478, 0x1.6f4b2a51ee061p-239,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.050f1918abdcap-887, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ce190af065e2dp-917, 0x1.2a9208606daecp-167,
     0x1.44bb22e376d24p-757, 0x1.f0aee7e160d19p-289, 0x1.d88fcab5f0b95p-712,
     0x1.f43c41a8b3b8ep-535, 0.0, 0.0, 0.0, 0.0, 0x1.13fe49a06ce46p-509, 0.0,
     0x1.3f7c008eebbd3p-422, 0.0, 0.0, 0x1.bf0c65e537951p-938, 0.0, 0.0,
     0x1.c213eaca29deep-482, 0.0, 0x1.3bce01ce3982ep-810, 0.0, 0x1.d04a67e702c5dp-267,
     0.0, 0x1.50dab6cc4599ep-909, 0.0, 0.0, 0x1.a9e72d2f77bf8p-721,
     0x1.b8dbdabc38d07p-528, 0.0, 0x1.04f1b72990f4ap-59, 0.0, 0.0, 0.0,
     0x1.f933f476bb97ap-317, 0.0, 0x1.35821598a356p-810, 0x1.0be6ef61b1edcp-400, 0.0,
     0x1.816afb886f861p-950, 0x1.67577bd98b70ap-618, 0.0, 0.0, 0.0,
     0x1.d36ab484314fcp-283, 0x1.68bc1539b7492p-88, 0.0, 0.0, 0.0,
     0x1.fb8284eab71ffp-465, 0.0, 0.0, 0.0, 0x1.97ff424cbf2f4p-431,
     0x1.ab538316424f8p-931, 0.0, 0.0, 0x1.9ca7fc782318ep-17, 0.0,
     0x1.2c2997c2b1da3p-215, 0x1.f3be7e882fc2ep-659, 0x1.2b5897afabfdep-940, 0.0, 0.0,
     0.0, 0.0, 0x1.d71912d5832a3p-775, 0x1.1e075f9cd414fp-265, 0.0,
     0x1.ea2c7c8db26b6p-564, 0x1.74cbbc2f11067p-723, 0.0, 0x1.b63a246f505f9p-330,
     0x1.f9ae3343a7e14p-1000, 0x1.b99a4be639b85p-167, 0.0, 0.0, 0.0,
     0x1.527670b743d5bp-40, 0.0, 0.0, 0x1.888c09fde4d32p-799, 0x1.a9de3bb435964p-678,
     0x1.7090c3a9f7a8fp-743, 0x1.cc1e690b1f382p-518, 0x1.e7c3b634c380dp-928, 0.0,
     0x1.8ae7d88cc8c6dp-80, 0.0, 0.0, 0.0, 0x1.dab86f3512035p-400, 0.0,
     0x1.5a37ea315939ep-741, 0x1.fc8c8f7107f84p-99, 0.0, 0x1.8ae75a36652d6p-861, 0.0,
     0.0, 0x1.7a665125adff7p-331, 0.0, 0x1.4793f284adf3dp-618, 0.0,
     0x1.fc6ba69130bb1p-881, 0x1.103d02b7ae6e8p-916, 0x1.cdd4e177696fcp-856, 0.0,
     0x1.c8a710f696fe3p-447, 0x1.22175008150b3p-368, 0x1.61cb7d732f487p-30, 0.0,
     0x1.3be3437128084p-194, 0.0, 0x1.93dd5521a0d5cp-883, 0.0, 0.0, 0.0, 0.0,
     0x1.04d6c642382adp-376, 0x1.406634bf1a74bp-601, 0x1.8480686c4ac73p-4,
     0x1.9923aefb1537p-970, 0.0, 0.0, 0.0, 0x1.28bf7d7be3767p-816,
     0x1.bf469a007aa23p-401, 0x1.0f66973bbeec2p-352, 0x1.c33ef93a06e36p-290, 0.0,
     0x1.aeb4b44423575p-683, 0x1.b0217ad88c44ep-262, 0.0, 0.0, 0x1.7b924a28b6021p-288,
     0.0, 0.0, 0x1.517fdc9a0660ep-756, 0.0, 0.0, 0x1.149228915b4eep-217, 0.0,
     0x1.38f1bdfef34d4p-274, 0x1.1ad4cc9be677fp-797, 0x1.59725d2777634p-676, 0.0,
     0x1.a5954b8991674p-317, 0x1.52764becc0f2ap-327, 0x1.ba33c502940ecp-131, 0.0, 0.0,
     0x1.7318dfe855ae3p-452, 0.0, 0x1.32770f2b5bb8dp-572, 0x1.e9fb4f87673a3p-566, 0.0,
     0.0, 0.0, 0.0, 0x1.2b52c6e307ecap-89, 0.0, 0.0, 0.0, 0.0, 0x1.0f1e891e16bc4p-427,
     0x1.bcaaa6d19ac21p-894, 0.0, 0.0, 0x1.6410e38a8dc1cp-74, 0.0,
     0x1.a231c6de387c6p-389, 0.0, 0x1.9cd5edb4f0064p-757, 0.0, 0x1.81cffb4e2d771p-932,
     0x1.5c9e08e269e4p-506, 0.0, 0x1.dc291b9d02bd9p-194, 0.0, 0x1.3988470d7eab7p-529,
     0.0, 0x1.75a181d58b04dp-80, 0.0, 0x1.9d96e421fb6a8p-429, 0.0, 0.0,
     0x1.091e771036779p-157, 0.0, 0.0, 0x1.93440a7ae212ap-942, 0x1.f22c857317109p-977,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ae1e378a8e94p-569, 0.0, 0x1.3f93a85305b33p-343,
     0x1.1815455fbddfdp-1004, 0x1.f9c0fcacc59ddp-243, 0.0, 0.0,
     0x1.989f204132903p-903, 0x1.f167cce7c95fep-1017, 0.0, 0.0, 0.0, 0.0,
     0x1.f101badb7646fp-137, 0x1.ee3d8ca1c08b8p-62, 0.0, 0.0, 0x1.98e3f5ae66c8p-769,
     0.0, 0x1.a0b63d8ec60aap-1005, 0x1.88a1614dd722fp-359, 0x1.47b9cf916ac09p-313,
     0x1.0867819fb7c5ep-397, 0.0, 0.0, 0x1.99799a724127dp-578, 0.0,
     0x1.7b5e2a4828da7p-773, 0x1.a297a4fdeb00dp-955, 0x1.e76577d2bcb63p-881,
     0x1.2f01e4777c66p-329, 0x1.bd8db0b6f233ep-620, 0x1.f9726eb41823ep-1,
     0x1.b15c6543a4808p-948, 0x1.711c5201cd1adp-86, 0.0, 0.0, 0.0,
     0x1.e66c3f37fdc9dp-173, 0x1.d2abc7aa32be5p-956, 0.0, 0x1.8673f6bad6f83p-390,
     0x1.002377a3e0a43p-356, 0x1.daefce109a865p-614, 0x1.94065179090abp-608,
     0x1.3adaf1bc77c8cp-179, 0.0, 0x1.f76a505feee33p-665, 0x1.f83aabc367047p-5,
     0x1.9ad76829f9a68p-478, 0.0, 0.0, 0.0, 0.0, 0x1.c5486ef68cf34p-92,
     0x1.55974a32a43ebp-682, 0.0, 0x1.574e05049b6dcp-278, 0.0, 0.0, 0.0,
     0x1.0bea8dd7b7438p-676, 0x1.06af75248a65p-689, 0x1.04cf75e5b88aap-631, 0.0, 0.0,
     0.0, 0x1.f244ea8c88c48p-415, 0x1.6ba412aaed19dp-401, 0x1.2de960419e242p-685,
     0x1.09149167058e5p-750, 0.0, 0x1.a43441a76600cp-405, 0x1.eb04c9d832608p-423,
     0x1.1eccdfcc8c9d1p-18, 0.0, 0.0, 0x1.0d3e13299ddb3p-253, 0.0, 0.0, 0.0,
     0x1.7189438ea03b7p-22, 0.0, 0x1.1c2a176f31ed2p-756, 0x1.82d58bfb4161fp-83, 0.0,
     0.0, 0.0, 0x1.bcd06f76f6e84p-319, 0x1.74403fcc9f0eep-487, 0x1.fa250bae9884p-968,
     0.0, 0.0, 0.0, 0x1.05d9b42b8969cp-832, 0x1.57c24a3ec3914p-405, 0.0,
     0x1.c118b0548321fp-674, 0x1.70622303ddb55p-139, 0.0, 0.0, 0x1.b40652957e63cp-373,
     0x1.e9a01b7ec3b19p-564, 0x1.b4863daac1d01p-196, 0x1.fd788a2792e7p-303, 0.0,
     0x1.64635251d9847p-335, 0x1.6e22ae29ac7b4p-771, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cd12a769ae326p-757, 0x1.36df48ecfa14ap-1012, 0x1.6394c070bf172p-918, 0.0,
     0x1.98b0ff3e88ed4p-901, 0x1.790057801cf3dp-791, 0x1.ccf2cc4778abep-74,
     0x1.7e2f389428b68p-652, 0.0, 0.0, 0.0, 0x1.1ec1068f1d99ap-366,
     0x1.8a46730b04305p-707, 0.0, 0x1.7b409b56ba3f3p-83, 0x1.18fe89e388367p-483, 0.0,
     0x1.09dcaef16df5dp-690, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1f39f69f47891p-439, 0.0, 0x1.ba260502f1697p-154, 0.0, 0x1.bf4a6e5e34fe5p-529,
     0.0, 0x1.64b3f6a009517p-385, 0x1.16ba3ded19d3bp-979, 0.0, 0.0,
     0x1.71d6eb48b296bp-73, 0x1.1eb8d61a173aep-955, 0x1.92ddaba4693eap-773,
     0x1.2013d349862a5p-223, 0.0, 0x1.8c3f3f1321b29p-944, 0x1.6486846ff2506p-136,
     0x1.1f8bbf5c3d3fdp-406, 0.0, 0.0, 0x1.083b7dd118e32p-837, 0.0,
     0x1.b2aa53ad29fb1p-562, 0.0, 0.0, 0x1.ed2ce94e2d557p-381, 0x1.db9f531fbd03cp-669,
     0.0, 0.0, 0.0, 0x1.389e7986657d2p-1, 0.0, 0.0, 0x1.9426b9a3b2f38p-193, 0.0,
     0x1.9a4542878b8e4p-142, 0.0, 0x1.3e93897b9dce2p-632, 0x1.188ff6452a7fcp-348,
     0x1.d4ab3646b7c57p-916, 0x1.3de5b5673f2f5p-216, 0x1.a013c80fe7513p-41,
     0x1.8ede60f1476e8p-490, 0.0, 0x1.566fe55fa9d37p-57, 0x1.7f038c3f8e91fp-462, 0.0,
     0.0, 0x1.7ffb18e908839p-99, 0.0, 0.0, 0x1.41cee51f51ffp-819,
     0x1.924ab5c3dc51ap-106, 0.0, 0x1.6d67e78cd063ep-55, 0x1.92115efe9211dp-868,
     0x1.77095ffb05ba4p-132, 0x1.b724c73a3630dp-179, 0x1.b795932ef904cp-748,
     0x1.72f61c54492c8p-449, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ebf5bc6dfa66fp-189, 0.0,
     0x1.30325e254fd46p-808, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6371eb946296p-311, 0.0,
     0.0, 0x1.b35babd21b1ep-44, 0x1.9a15741971b0dp-43, 0x1.81421f8b8250dp-469,
     0x1.71a852d181332p-852, 0x1.f434a011ed104p-661, 0x1.81fe3bd371bd2p-909,
     0x1.7a5aa72931444p-520, 0x1.2295190d0472ep-195, 0.0, 0x1.8c600bc26021fp-697,
     0x1.aaf2c9d761a8cp-289, 0x1.9119bae348d07p-976, 0.0, 0x1.ca8e48cdd2756p-973, 0.0,
     0x1.e7b0819c6218bp-595, 0.0, 0.0, 0.0, 0.0, 0x1.e2f39d92f5293p-586, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.029dfe5ad1fd2p-563, 0x1.69d0e8964233fp-813,
     0x1.5114dd545d01ep-651, 0.0, 0.0, 0x1.b9c6c875b6bafp-892, 0.0,
     0x1.61ddabc43968ep-138, 0x1.f924d2c7ae4fep-561, 0.0, 0x1.bc80b755302ffp-702, 0.0,
     0x1.95e094b254c86p-692, 0x1.47361f336f953p-287, 0x1.b870da5bdf547p-902,
     0x1.da365c1eb788ep-11, 0x1.33299e90886ccp-593, 0.0, 0.0, 0.0,
     0x1.3a43a6ce9bd65p-650, 0.0, 0x1.0b7584fb806d5p-987, 0x1.40cb936bff936p-521, 0.0,
     0x1.3c0957881fa5cp-481, 0.0, 0x1.11cdca402bbb2p-1013, 0x1.dfa091e83335bp-836,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87413752beb88p-480, 0x1.76e23b7bc9d0ep-782, 0.0,
     0x1.198cfb6b06e74p-375, 0.0, 0x1.10e8352fe469ap-32, 0x1.df0aef32e13bdp-731, 0.0,
     0x1.f5f39e6ac9204p-266, 0.0, 0.0, 0x1.50302aa3818e1p-794, 0.0,
     0x1.3b6c45434c0afp-192, 0.0, 0x1.f257b910a85c7p-389, 0.0, 0.0,
     0x1.f1fe13d4edecap-863, 0x1.16e886814e9f6p-987, 0.0, 0.0, 0x1.52fd1edf0ca46p-737,
     0x1.e5cc92ac7b8bap-177, 0x1.790adeafacf7fp-366, 0.0, 0x1.dac66182e7893p-270, 0.0,
     0x1.699da9943c548p-92, 0x1.5e4d7c7115bdcp-432, 0.0, 0x1.9d2de8ae710e6p-505, 0.0,
     0.0, 0x1.a0de91337d2c5p-365, 0.0, 0.0, 0x1.1ea64e75581f3p-938,
     0x1.4c02d69aecd3ep-751, 0x1.af6185d63917ep-770, 0x1.318a5c4e4aa7ap-57,
     0x1.2b2fc80e17198p-256, 0x1.88cfc653f5d02p-452, 0.0, 0.0, 0x1.8a6c478fa83c6p-441,
     0.0, 0.0, 0.0, 0x1.0195586879b8fp-174, 0.0, 0x1.d444ea8c7fd58p-964, 0.0,
     0x1.6b8e12bfb139ap-454, 0.0, 0x1.e286dd853faaep-57, 0x1.4f411db286b9bp-1002, 0.0,
     0.0, 0.0, 0.0, 0x1.c11921a5599ccp-810, 0x1.ead149446d37fp-229, 0.0,
     0x1.19ff5f7d5f5acp-322, 0x1.33c82adfd48f9p-417, 0x1.d920936d196adp-186, 0.0,
     0x1.35c8421c17a85p-461, 0x1.80e340aac85f6p-484, 0.0, 0x1.d32a2225c753dp-978,
     0x1.998e8b3225c24p-626, 0.0, 0.0, 0.0, 0x1.f587b27e2a076p-918,
     0x1.fb8b8bc8733cdp-51, 0.0, 0.0, 0x1.cd2fe29c206b3p-919, 0.0, 0.0, 0.0,
     0x1.2cac6384e09fbp-56, 0.0, 0x1.17c7d71dc7d1bp-861, 0.0, 0x1.a527862e92bf6p-935,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d7187f4a316dep-527, 0.0,
     0x1.b07aebdcb9d3ap-680, 0x1.913958986a96cp-136, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c950b8426ea3p-309, 0.0, 0x1.bc155056945cap-878, 0x1.3908260d56734p-105,
     0x1.7e1e5999ca66bp-772, 0x1.47a520c3ad21bp-523, 0x1.5d6f41a90f74fp-91,
     0x1.3d59cefd7631p-742, 0.0, 0.0, 0.0, 0.0, 0x1.9b792e07ca224p-856,
     0x1.a1918e9231f1ep-878, 0x1.f6252590c8be3p-343, 0.0, 0x1.fa3ce12b6eeb5p-528,
     0x1.5c57f2b521a85p-598, 0.0, 0.0, 0x1.98f4284a3b59dp-480, 0.0, 0.0,
     0x1.8b39d2090c1ep-225, 0x1.ef657dbb091f6p-706, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.795805aa72bdbp-783, 0x1.15f0428f76113p-264, 0x1.f81796c0e5956p-281, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6763a6fb2bc24p-1017, 0.0, 0.0, 0x1.22e790d5ff74p-248,
     0.0, 0.0, 0.0, 0x1.4f519da104d9fp-600, 0x1.d95b707497ecbp-371, 0.0, 0.0,
     0x1.952f72e1e7d19p-867, 0x1.fdccf4e46d0cbp-265, 0x1.8cea7ba50254fp-811, 0.0,
     0x1.a9a41d2ce3e18p-110, 0.0, 0x1.54d3619e70cd5p-1011, 0x1.93561a3e374e8p-951,
     0.0, 0.0, 0x1.5e84a06b788a8p-236, 0.0, 0x1.92fc7b29377a1p-939, 0.0, 0.0, 0.0,
     0.0, 0x1.8b5d18316ebeap-106, 0.0, 0x1.86c35f64895cdp-536, 0.0,
     0x1.b8bd7e1676daep-292, 0x1.2bfd5b973d4d4p-599, 0x1.0f55947ecc06dp-374, 0.0, 0.0,
     0.0, 0x1.d4bfafcad2001p-259, 0.0, 0.0, 0.0, 0x1.b5d13d2694b5ep-107,
     0x1.3fcf1c8ba5a71p-639, 0x1.9344966462449p-831, 0.0, 0.0, 0.0,
     0x1.8866f80dae2b6p-618, 0x1.08ecda4da164fp-606, 0.0, 0.0, 0x1.40e7cc7fe911ap-600,
     0x1.d2bb2e3dcc717p-28, 0x1.0b7e9b87bd4c4p-838, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e492665def331p-370, 0x1.a48a02b420a1fp-427, 0.0, 0.0, 0.0,
     0x1.a00518f7e009ep-118, 0x1.114eced919b1dp-664, 0.0, 0.0, 0x1.ee0016b650ce8p-408,
     0.0, 0x1.6042e5bebb027p-683, 0.0, 0.0, 0x1.2298bd2a8d858p-776,
     0x1.aa79426e74222p-910, 0.0, 0x1.0781ca1f51b31p-114, 0x1.3d042dd1ee655p-289, 0.0,
     0x1.f6af8b5158f5p-677, 0x1.08ffbae0facd3p-664, 0.0, 0.0, 0x1.a5e234a73e50ap-516,
     0.0, 0x1.381ca372401b5p-616, 0x1.182b1791b7167p-892, 0.0, 0x1.eb9a9d64b24e8p-282,
     0.0, 0x1.b780fb4d60194p-183, 0x1.846911308f20dp-939, 0x1.6c88cc4fe28e6p-303, 0.0,
     0x1.1b987e774d6ffp-474, 0.0, 0x1.e1f06e2ca61f2p-129, 0x1.9e18fd1c02311p-77, 0.0,
     0.0, 0.0, 0x1.4fde2bd2fec71p-630, 0.0, 0.0, 0.0, 0x1.9e1e6ae4c9d16p-550, 0.0,
     0x1.96c12310fa03fp-929, 0x1.f89dd5a6e1d38p-645, 0x1.f1402187bdca7p-723,
     0x1.1f13a2fe1ea33p-555, 0x1.efd0708fc5ba6p-376, 0x1.fa02b40bd307fp-667, 0.0,
     0x1.fff3f4b69f59fp-775, 0.0, 0x1.2909ef3410bffp-564, 0.0, 0x1.3ea2c7caf48d9p-769,
     0.0, 0x1.ae40dcff76d77p-621, 0.0, 0.0, 0x1.1660431031b87p-175,
     0x1.620707ece0792p-18, 0x1.45bb9d009b61cp-74, 0.0, 0x1.cbad42173130dp-836, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.780c622f4b5b6p-773, 0x1.4b0773becc01p-576,
     0x1.a78cd728fb8fdp-290, 0x1.74751bee4ec1ap-565, 0.0, 0x1.dc14ba8da03d2p-5,
     0x1.71f689df6491fp-880, 0.0, 0x1.4250472b3cf7ap-709, 0x1.e61659d1b1f9fp-725, 0.0,
     0.0, 0x1.6ebc23646e6c3p-704, 0x1.248dd959304e3p-902, 0x1.3fe49f1a101bfp-156, 0.0,
     0.0, 0x1.b4f98321e95c8p-67, 0.0, 0x1.2322f9afd6409p-439, 0x1.0fc8ed268ebb3p-833,
     0x1.f9d12df31c7dbp-787, 0x1.c660a5b31df37p-519, 0x1.a59e05b14db59p-217, 0.0, 0.0,
     0x1.caf07ee7c942ap-468, 0.0, 0.0, 0.0, 0x1.8d5f0c9aa42e4p-724, 0.0, 0.0,
     0x1.40f2df06c67c4p-959, 0.0, 0.0, 0x1.bae3a5793d1eep-730, 0x1.c8e993800e362p-76,
     0x1.4584c0d4009afp-925, 0x1.6d5f2049185ffp-347, 0x1.4b15fad5a0c37p-511,
     0x1.667d47a017b37p-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd4c29943a5d5p-514,
     0x1.989c31c727685p-477, 0x1.eb9c52cdff1c1p-335, 0x1.d18e88c106a7dp-907, 0.0,
     0x1.dcbd10ea4a22dp-800, 0.0, 0x1.183138bc88fc5p-94, 0x1.66adb6d972aaep-748,
     0x1.9bc0bc4da6c18p-396, 0.0, 0x1.dd24f86c3ad93p-780, 0x1.b710fc1615cf6p-1021,
     0.0, 0x1.31a707e719ba5p-586, 0.0, 0x1.9593f4661fc8dp-796, 0x1.7895a71d5aad5p-794,
     0.0, 0x1.a0b7eda163332p-933, 0.0, 0x1.d1878d7d6abe9p-158, 0x1.32d252a785586p-831,
     0x1.dc9bd8938876ap-694, 0.0, 0x1.37290de31bb7dp-281, 0.0, 0x1.54d6329ab798cp-657,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3cdb97a850c89p-638, 0.0,
     0x1.a36c4d3fcf869p-391, 0.0, 0.0, 0x1.41043c3a6359dp-733, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fc65d4c98ed9ep-327, 0x1.3f2ce158c12dep-56, 0.0, 0.0, 0.0, 0.0,
     0x1.023e7552521d8p-214, 0x1.f8cc4fa2723bp-363, 0x1.ba487990f0378p-736, 0.0,
     0x1.ff728682d5107p-522, 0.0, 0.0, 0.0, 0.0, 0x1.5a8f62e9a726dp-542,
     0x1.f092bbf4a61e4p-511, 0x1.809772b9d5439p-268, 0x1.d7a7076a55c48p-178,
     0x1.32e601c41dbdap-145, 0.0, 0.0, 0x1.4ef5f584914e3p-455, 0x1.e7b22d174b87ep-575,
     0x1.99dc53fa1b629p-388, 0x1.31ffe07232409p-601, 0x1.103764e023671p-289,
     0x1.45773ce778ca2p-987, 0x1.ef14b2f5b3ffap-649, 0x1.29234b5fb1fb3p-922, 0.0, 0.0,
     0.0, 0.0, 0x1.9ef74f9fea4e5p-256, 0.0, 0x1.4c8cc2ddc6a97p-176,
     0x1.72419545a9554p-868, 0.0, 0x1.ea2da38904c0fp-210, 0x1.02b19e4b4cc95p-631, 0.0,
     0x1.44ea0e9ca24d8p-377, 0x1.777eef5f85dep-716, 0x1.87ad33cdb2a77p-645,
     0x1.179e693c1ddb5p-122, 0.0, 0x1.ac1563d5858bbp-644, 0.0, 0.0,
     0x1.e4578340da75dp-997, 0x1.e8e86ac98d13ep-263, 0x1.34698371669d3p-267, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c9a07c321b7f6p-968, 0.0, 0x1.ccc049d4a912bp-125, 0.0,
     0.0, 0.0, 0x1.80b89cd17def8p-950, 0x1.b289571e7bbb3p-651, 0x1.aeef7dc2cba69p-984,
     0x1.2bd2abd6f6315p-764, 0.0, 0.0, 0x1.296d5da4a8c53p-344, 0x1.db4e9a161a563p-101,
     0.0, 0x1.77bc10be2e29bp-226, 0.0, 0x1.e96836361b7d7p-198, 0.0, 0.0,
     0x1.104a8a209a28fp-439, 0x1.ad26fec17f243p-203, 0.0, 0.0, 0.0,
     0x1.568a6b44c57c4p-966, 0x1.5429123ab7a5dp-358, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4b5f58669b41p-82, 0.0, 0.0, 0x1.6f08bf358509ap-922, 0x1.03d7a58dba02ep-604,
     0.0, 0.0, 0.0, 0x1.e09716b239c54p-1021, 0x1.aaa1c93a0235cp-647, 0.0,
     0x1.6d7c4e0c12b77p-1000, 0.0
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
            tmp1 = Sleef_finz_sqrtd4_u05kvx(tmp0);
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
    printf("Sleef_finz_sqrtd4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
