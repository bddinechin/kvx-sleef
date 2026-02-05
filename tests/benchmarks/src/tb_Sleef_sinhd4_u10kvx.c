/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd4_u10kvx.c --function Sleef_sinhd4_u10kvx \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.441b30a416f29p-403, 0.0,
     0x1.824878290c46cp-851, 0x1.0f30094539ccfp-19, 0x1.57a625835e493p-390, 0.0,
     0x1.b71d5770d3a7fp-40, 0x1.4bce494b32aaep-565, 0x1.4436f3c2e7a3ap-671, 0.0,
     0x1.ea3079203e8ecp-760, 0x1.babd52f89b5c1p-249, 0x1.247425fbfaa79p-605,
     0x1.9c9feae4441aep-922, 0.0, 0.0, 0x1.ddbed821d9609p-163, 0.0,
     0x1.c4cb3ce657715p-788, 0.0, 0x1.e2cdbd043b07ep-842, 0x1.4d46a800f49cdp-628,
     0x1.8099d6c0ff82fp-677, 0x1.1edd54c3d646ep-385, 0.0, 0x1.e9d1f25281fb9p-368,
     0x1.2f6cdc9f3292bp-245, 0.0, 0.0, 0x1.0cbe95deffdaap-928, 0.0, 0.0, 0.0,
     0x1.031022fc5e1bfp-536, 0.0, 0.0, 0x1.83f475dc3a939p-548, 0x1.39d7e856b871ap-176,
     0.0, 0.0, 0.0, 0x1.8f5c8a02ea3f9p-664, 0x1.66c4805983d9cp-180,
     0x1.269608c13ce47p-170, 0x1.a2725cc0b8f57p-119, 0x1.c7d6f64a5fcf8p-755, 0.0, 0.0,
     0.0, 0x1.ee736e416bee6p-670, 0.0, 0x1.1d190db1569cdp-555, 0x1.efcc1ecf8c9f4p-260,
     0x1.fc7696811a31bp-553, 0.0, 0x1.c4f80462d1a8p-76, 0x1.5f2176634bb61p-381,
     0x1.026b33e506badp-705, 0.0, 0x1.df2e3caab6013p-1005, 0.0,
     0x1.8a79c3737b773p-789, 0x1.ce517334940e2p-537, 0x1.69a855e9759d3p-553,
     0x1.e2da113ac8882p-136, 0.0, 0.0, 0x1.d67c282e1a24dp-346, 0.0, 0.0,
     0x1.211b6937b6259p-473, 0x1.1ec2c00c508f2p-680, 0.0, 0x1.bf06ec6096p-260, 0.0,
     0x1.b473e2be0adabp-811, 0.0, 0x1.d462c8286e4c2p-580, 0x1.c9e3b4e854908p-550, 0.0,
     0.0, 0x1.e3bef35ac84e6p-951, 0.0, 0.0, 0.0, 0x1.0018cd5d67fbep-988,
     0x1.5e35eb6b512d8p-163, 0x1.cacdbc0313865p-187, 0.0, 0.0, 0.0,
     0x1.0c690a6ac8d26p-333, 0x1.b53f9538c7336p-487, 0x1.b76093c2627edp-103, 0.0, 0.0,
     0.0, 0.0, 0x1.007b38511b021p-334, 0.0, 0x1.024c5c7b2561cp-638, 0.0, 0.0, 0.0,
     0.0, 0x1.3a327d17a2194p-348, 0x1.71e662aeb34bp-311, 0.0, 0.0,
     0x1.35f39f22362a8p-159, 0.0, 0.0, 0x1.d138a6f91b724p-240, 0x1.e7881a2d3b004p-229,
     0x1.67895f8a56458p-527, 0.0, 0.0, 0x1.5d54d494a2977p-257, 0x1.a987d4f0facecp-413,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68821493349bp-203, 0.0, 0.0, 0.0,
     0x1.d1af58ac7736bp-478, 0.0, 0x1.d2ffbf98de84ap-503, 0x1.4d08a2c21a80fp-1001,
     0.0, 0x1.75d0be7980845p-611, 0.0, 0.0, 0.0, 0.0, 0x1.04cfd52720419p-78, 0.0, 0.0,
     0.0, 0.0, 0x1.a8e7260fc437ap-693, 0.0, 0x1.8d54875fe0915p-150,
     0x1.e494d827706ebp-394, 0x1.88b74c86524b5p-347, 0x1.7fcb71d7ea469p-83, 0.0,
     0x1.d1c87b7a99ffbp-273, 0.0, 0x1.0ede5521ed2aap-906, 0.0,
     0x1.140117ffef0c6p-1001, 0.0, 0x1.3a8427af0ae9ap-662, 0.0, 0.0,
     0x1.a2402225a14ccp-581, 0.0, 0x1.61d9e1c56ffc5p-2, 0x1.cc6f10563d2cfp-499,
     0x1.301332b409ec7p-440, 0x1.90ac960f4cd1dp-908, 0x1.9e3ce7a8140ap-122, 0.0,
     0x1.170b475fc05dap-284, 0x1.384d82927513ap-863, 0.0, 0x1.849919ece35f8p-562, 0.0,
     0x1.c18c6b975ffe4p-979, 0x1.26160007ccacap-467, 0.0, 0x1.5bca47d49cb46p-879,
     0x1.2ef7844932fd7p-764, 0.0, 0x1.5ecc5f7eb3eeap-715, 0.0, 0.0, 0.0,
     0x1.94fe5cd3756bep-864, 0x1.7ee9900a0e22p-426, 0x1.d2eaf3052ac04p-951,
     0x1.a7281be587961p-205, 0.0, 0x1.110a3bb290f56p-277, 0x1.a499f1359bff6p-712, 0.0,
     0.0, 0.0, 0x1.ba453aabf933dp-363, 0x1.509765164cbc6p-789, 0x1.1cdbeefb0ce5cp-967,
     0x1.b2e313426a1cap-164, 0x1.2ed856a125f4fp-773, 0x1.c95165da86089p-632,
     0x1.1d60d81300a1cp-88, 0x1.fd8e90655b7a3p-747, 0x1.ae8435bcdf688p-758,
     0x1.8627ba25a906dp-108, 0x1.1144cd5012722p-92, 0x1.d271b4507667p-783, 0.0, 0.0,
     0x1.3b279de1e4a16p-727, 0x1.098597d046a27p-234, 0x1.a395889f18e02p-272, 0.0,
     0x1.ba7b492b5fa7bp-149, 0.0, 0x1.b0a31c7ac0285p-502, 0x1.9b156ff81ed1ep-990, 0.0,
     0x1.0dd5a226a5f5ep-74, 0x1.6a6c17396f07fp-640, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9ecab968b4cbdp-512, 0.0, 0.0, 0x1.de1d768afbb86p-239, 0.0,
     0x1.62f71af1c400bp-869, 0x1.abc219eb3ebfcp-629, 0.0, 0.0, 0.0,
     0x1.1868ef5b5bdb3p-270, 0.0, 0x1.49bf648c5b18cp-458, 0x1.9c571d1c8e699p-714,
     0x1.031bbbc665dep-558, 0x1.2b2521e97e6f5p-345, 0x1.2aece4a51585cp-398,
     0x1.439039400e133p-58, 0.0, 0.0, 0.0, 0.0, 0x1.2a7f1a81310cbp-766, 0.0, 0.0,
     0x1.a096c64e1ccd3p-138, 0x1.81c672afcfc07p-612, 0.0, 0x1.3f1c762ee9e2p-587, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e094aef8f261p-290, 0x1.a578ff13374f4p-18, 0.0, 0.0,
     0.0, 0.0, 0x1.d1f7b2d660842p-949, 0x1.9958f0a891d12p-485, 0x1.1d267b6dc9c32p-595,
     0x1.7d28cdcbab6ep-368, 0.0, 0.0, 0x1.fadabe6bf91cfp-365, 0.0,
     0x1.f4972b64df4cep-78, 0x1.e0becfdf840bfp-415, 0.0, 0.0, 0x1.15410948ffba9p-76,
     0x1.fc4bdd072526dp-129, 0x1.b5a7e002d5883p-427, 0.0, 0.0, 0.0,
     0x1.252e70bf18f8p-815, 0.0, 0x1.05923751d5acfp-592, 0.0, 0x1.32e0de7bcb1ddp-646,
     0x1.d606a973b17bfp-699, 0.0, 0x1.6ab0d879ebe3ep-583, 0.0, 0.0, 0.0,
     0x1.6a3668da4fc54p-302, 0.0, 0x1.e98ec0aa03fe8p-357, 0.0, 0x1.1a5a1a594a568p-501,
     0x1.7d2e5d1e9ab0cp-636, 0x1.3cb878bb972b5p-111, 0x1.ac7f120977538p-391,
     0x1.7cbc1891df673p-261, 0x1.d302c3a3f1813p-60, 0.0, 0.0, 0.0, 0.0,
     0x1.cf23a516ad803p-221, 0x1.b47a6bba623ccp-218, 0x1.52bf9d5f65041p-193, 0.0, 0.0,
     0x1.aaf199acc0462p-359, 0.0, 0x1.9ec6fcf6e3efdp-671, 0x1.61469ee69d733p-532, 0.0,
     0x1.abccce3c52209p-596, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0fd2c83aa97adp-267, 0.0, 0.0, 0.0, 0x1.c9fca0ac82671p-485,
     0x1.2cc66da4f3a2bp-1002, 0.0, 0.0, 0.0, 0.0, 0x1.429760fd4b27bp-761, 0.0,
     0x1.e441a3495535p-410, 0x1.41744c6e11b49p-132, 0x1.c6190bb35638p-461, 0.0,
     0x1.b7bd2e2fed239p-408, 0x1.1ef91060109c3p-78, 0x1.e4b2c96d73613p-982,
     0x1.9b1e74000c48dp-1021, 0.0, 0.0, 0.0, 0x1.49030653113b3p-805, 0.0,
     0x1.435322a92068dp-223, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8fcccf115f93dp-803,
     0x1.c5519afb03925p-112, 0x1.53b27204cef04p-888, 0.0, 0x1.dd6ed9709ecbbp-206, 0.0,
     0x1.79c6de1c770f1p-947, 0x1.7f1f5711d6483p-333, 0.0, 0x1.7e49c3ea382a1p-136,
     0x1.9d234f0044c71p-30, 0x1.51c863bd1c7fdp-327, 0.0, 0x1.f4a59c881285fp-706,
     0x1.9f22f8a9833f7p-389, 0.0, 0x1.96b215488bfb8p-687, 0x1.6ccf02a30bedfp-641, 0.0,
     0x1.3ef7541b1283ap-145, 0.0, 0.0, 0x1.44969d3a5a89dp-78, 0.0, 0.0,
     0x1.aa90b2213ba3p-571, 0.0, 0x1.09d8c1868b761p-561, 0.0, 0x1.4d9f59ce19efap-37,
     0.0, 0.0, 0.0, 0x1.259af7d3b66ecp-388, 0.0, 0x1.fb140c94f5bd2p-604,
     0x1.de1e93ea5068bp-711, 0x1.d392b8a13cd55p-355, 0.0, 0.0, 0.0,
     0x1.58116d25a09bap-263, 0x1.8f60f4ef29d31p-552, 0x1.63f81c98f97f4p-909, 0.0,
     0x1.68395ad16e1cap-39, 0.0, 0.0, 0x1.8dbad092ea693p-549, 0x1.9f993ab4bba6fp-677,
     0.0, 0x1.ddbd65f7b363cp-374, 0x1.851de0f02884ap-305, 0x1.65db6af2698f9p-550,
     0x1.e55fc3c880dc5p-653, 0x1.09e1623aa5f4bp-731, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fb7829e440036p-918, 0x1.9faa0098539a9p-45, 0x1.02f7a5210422ep-415,
     0x1.31b808f32eb24p-665, 0.0, 0.0, 0x1.ac7d3453c1375p-27, 0x1.d523e680a52dep-565,
     0x1.6ddd77e912ffap-558, 0.0, 0x1.8d85d3c23dd43p-870, 0.0, 0.0, 0.0,
     0x1.b47fd3eb0787fp-298, 0x1.301dc7da500d3p-365, 0.0, 0.0, 0.0,
     0x1.50373e1060508p-380, 0.0, 0x1.55dea38668976p-841, 0.0, 0x1.b74f8dfd48c55p-853,
     0.0, 0x1.82128e577cf1cp-415, 0.0, 0.0, 0x1.1210f903aced7p-908,
     0x1.f37fe9645c148p-763, 0.0, 0x1.e820760cb182fp-348, 0x1.9dbdd9d667fc6p-909, 0.0,
     0.0, 0x1.6cc14f2935a9ap-342, 0x1.a023454074753p-714, 0.0, 0.0, 0.0,
     0x1.d196d18a79b59p-991, 0x1.d7f422c4a3976p-873, 0.0, 0.0, 0x1.6ca472319db33p-448,
     0x1.85986e444598fp-224, 0x1.c6b5f0ee22606p-228, 0.0, 0x1.f3bb7cc8ea596p-721, 0.0,
     0.0, 0x1.42bedd784326fp-397, 0.0, 0x1.834157e1d6523p-521, 0.0,
     0x1.1aedc7c602e62p-998, 0x1.e671976118588p-751, 0.0, 0.0, 0x1.538b93ccd5bf6p-912,
     0x1.274fa856da072p-713, 0x1.737728f8d8643p-837, 0x1.4a53cc0daa892p-651, 0.0,
     0x1.178d112676854p-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db4cef7b49d95p-144,
     0x1.90942754c98d5p-191, 0.0, 0x1.b5765287457cep-78, 0x1.a355f359c1348p-866, 0.0,
     0x1.de8570249e97cp-926, 0.0, 0.0, 0.0, 0.0, 0x1.7c019cb2299d1p-387,
     0x1.e2d51a5a7d962p-2, 0.0, 0x1.bab2edfefe18ap-983, 0.0, 0x1.dc15837712063p-87,
     0.0, 0x1.db3e0068a7e49p-208, 0.0, 0x1.4f3fd3154c4c9p-255, 0x1.54a97a04e878cp-726,
     0.0, 0x1.fb3064263bbdp-972, 0.0, 0x1.30c9855ce0edfp-354, 0.0,
     0x1.40eb592c8ad45p-804, 0.0, 0x1.463a50ae6c119p-74, 0.0, 0.0,
     0x1.f12ba276fa0d4p-449, 0x1.971fa40661759p-1009, 0.0, 0x1.70b93313ad83fp-545,
     0.0, 0x1.f80b2e9bde0e3p-597, 0x1.ce57a367cb231p-7, 0x1.82297c353db69p-406,
     0x1.9f928ad00a5fp-383, 0x1.3540e8fb2550ep-251, 0x1.b4f57f9d37227p-760, 0.0, 0.0,
     0x1.c64eb2e6250e1p-445, 0x1.0cb6cd5ba8eb4p-503, 0x1.f362f037994fep-221, 0.0, 0.0,
     0x1.944a72140a0bp-659, 0x1.6f37fdd361fdcp-733, 0x1.5b4b8f80c91cep-613,
     0x1.0ac807abbcccap-468, 0x1.d822017d48b5bp-15, 0x1.4bdd340bd3e5bp-29, 0.0,
     0x1.11de52ceff633p-273, 0x1.78888f9a65742p-279, 0x1.b609e6ada51fdp-834, 0.0, 0.0,
     0.0, 0x1.4b5c5b23a9d7bp-1020, 0.0, 0x1.9a3e93706780bp-329, 0.0,
     0x1.c5f74d9400c43p-324, 0x1.6204a5033d90cp-712, 0.0, 0.0, 0x1.50fab6a0de5f8p-214,
     0.0, 0x1.0c6c892c1a204p-139, 0.0, 0x1.350fc0ea22697p-450, 0.0, 0.0, 0.0,
     0x1.be32fed28d9e4p-771, 0x1.f00a27f7a327ap-48, 0x1.54ece89fde6d6p-43,
     0x1.3f6e3d9ec2b23p-228, 0.0, 0x1.8bdb0c7625dep-965, 0.0, 0x1.6491ce3df9c2p-695,
     0.0, 0x1.9f3d2ca999d04p-843, 0.0, 0x1.2ac761d667a18p-201, 0x1.3a702cccc2a53p-914,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d419d7744b321p-855, 0x1.c05e1bd40cb49p-599,
     0x1.c30b3ce6021d4p-555, 0.0, 0x1.70f137b946506p-799, 0.0, 0x1.0b6a0e32dc5c1p-345,
     0x1.3196c97f11dffp-672, 0x1.889b277f86dbfp-862, 0.0, 0.0, 0x1.a9b25c6c5242ap-191,
     0.0, 0.0, 0.0, 0x1.c79e2805953ccp-604, 0.0, 0.0, 0x1.2a0113a846c3ep-918, 0.0,
     0.0, 0.0, 0x1.c1624d41f8dap-57, 0.0, 0.0, 0x1.5eb134374a9d8p-590,
     0x1.e25d7df3cf03p-690, 0x1.501f086c96de3p-272, 0x1.a60e84f442e71p-237,
     0x1.4ed3684c3001fp-185, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7064ac23bbab1p-180,
     0.0, 0x1.95c8ffda26cc8p-617, 0x1.37e994e35ddfep-639, 0x1.fc6217d889b83p-92,
     0x1.7814298a8bbd9p-225, 0x1.b024828dcef5ep-582, 0.0, 0.0, 0x1.5cc1d6e3ceb19p-996,
     0x1.3d0f6f68b3c7fp-959, 0x1.95760361e629ep-959, 0x1.3f7d8be5b3232p-520, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7a28b5ab9bae3p-997, 0x1.e441fafa6a8adp-700,
     0x1.75d2faf44af4dp-348, 0.0, 0x1.4ab45e7e90b6ap-1016, 0.0,
     0x1.d5aae59560318p-793, 0.0, 0.0, 0x1.af5536e2dab25p-341, 0x1.5f5283e75714p-523,
     0x1.3a46b7f1fa2c5p-726, 0x1.55029c9f3acb1p-958, 0.0, 0x1.773c06b610122p-83,
     0x1.a94eb262f9a1fp-695, 0x1.09b5255cc11ep-321, 0.0, 0x1.deded189ce314p-230,
     0x1.df1b65a93cd85p-980, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ffa3b75e0b507p-234, 0.0,
     0.0, 0.0, 0.0, 0x1.7dfa7f4c60383p-949, 0x1.2dcbba9962fd2p-384,
     0x1.63223e221808p-501, 0.0, 0.0, 0.0, 0x1.cbf00e9c728cep-202,
     0x1.4a4ce12be887bp-369, 0.0, 0x1.d734c39e09d79p-157, 0x1.3bb0947c4176p-689,
     0x1.68f09fa6f0a2p-922, 0.0, 0.0, 0x1.bdfa0610413ap-598, 0.0, 0.0,
     0x1.948ee8477d2a5p-480, 0.0, 0x1.811318c5db11cp-748, 0.0, 0.0,
     0x1.fd1c9cad8fe1cp-73, 0.0, 0.0, 0x1.9aad97a015d7dp-205, 0.0,
     0x1.a3d32fc20b108p-524, 0x1.b30ffa76e0812p-613, 0x1.0ed9761a8849dp-907,
     0x1.92ace0984bcc4p-530, 0x1.a2b6701a877e6p-915, 0x1.c53a65f18b959p-791, 0.0, 0.0,
     0.0, 0x1.c94fa3027e687p-436, 0x1.2a5498fe784d8p-841, 0.0, 0.0,
     0x1.3339be33d93a9p-390, 0.0, 0.0, 0x1.79f2696835ad7p-794, 0x1.661ea02b7ce1ep-22,
     0.0, 0x1.106cfb12acc18p-168, 0x1.073c95292f109p-22, 0.0, 0.0,
     0x1.8fb1fedb9c7c6p-24, 0x1.73071c0fa0d29p-40, 0x1.245fab289e63bp-528, 0.0, 0.0,
     0.0, 0x1.97af7341c1fd4p-50, 0x1.ea0b149cc0816p-330, 0x1.2aac8815fd77ep-635,
     0x1.1c5b2b457bb5ep-637, 0x1.1af958be31517p-204, 0.0, 0x1.a8335319cba7dp-890, 0.0,
     0x1.c0500d6decbaep-878, 0x1.bce71ea4c0abbp-185, 0x1.8bb7daf60dcdfp-947,
     0x1.53d27672b4fe4p-633, 0.0, 0.0, 0x1.c8d7c3b4f6be4p-218, 0x1.824fb70e63eabp-133,
     0.0, 0.0, 0x1.411b1a70cce89p-278, 0x1.7c3125335e69ep-805, 0x1.9a8c84364a5cbp-100,
     0.0, 0.0, 0x1.92061b68e8896p-867, 0.0, 0x1.fa896a61aed05p-320, 0.0,
     0x1.2c6cd59c20319p-321, 0x1.fe108bd09c203p-411, 0x1.0f65a744fba8ep-872,
     0x1.e2a127504ee8ep-330, 0.0, 0x1.78b60bdad271ep-309, 0x1.1a5e26350dfb3p-798,
     0x1.df95256d4ce94p-434, 0.0, 0x1.83e7fb2ef6158p-750, 0.0, 0.0, 0.0,
     0x1.947389915402dp-682, 0x1.9b30026527aa2p-55, 0.0, 0.0, 0.0,
     0x1.04c64fe1aaf9cp-241, 0x1.a63af43b0549fp-102, 0.0, 0x1.c590572992338p-968, 0.0,
     0x1.4379f9fc3f951p-551, 0.0, 0.0, 0.0, 0x1.3bc334a5e642bp-789,
     0x1.bb0346e2776bdp-554, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a3a43d27a6814p-382, 0x1.1d9688974a6dp-872, 0x1.5002fc75928c6p-188,
     0x1.b93f3cf2a33afp-353, 0x1.dee440a3046edp-773, 0.0, 0x1.79f97435bce0ap-857,
     0x1.54854266a458dp-466, 0x1.048a16318c698p-644, 0.0, 0x1.d4964adc8e6c3p-710,
     0x1.eb64b28913109p-860, 0.0, 0.0, 0.0, 0.0, 0x1.65864a98d6bcep-362, 0.0, 0.0,
     0x1.3ceb74fc0cf8ap-758, 0.0, 0.0, 0x1.4c1996140f218p-366, 0x1.5a839658c82fbp-527,
     0.0, 0x1.d204f3bf4dd5cp-781, 0x1.6b8992f2546a3p-745, 0x1.a23ca538798f6p-472, 0.0,
     0x1.729b9ebaf2cc1p-293, 0x1.e726460b69458p-95, 0x1.b018429d830e2p-112, 0.0, 0.0,
     0x1.dc86aed7b7029p-637, 0x1.f76a7b84aa349p-40, 0.0, 0x1.c5d8ff7fb1917p-333, 0.0,
     0.0, 0x1.40dfb9b7c99b9p-806, 0.0, 0.0, 0x1.2cb7bc48b13c2p-274,
     0x1.1f7dc48f0917ap-1011, 0.0, 0x1.cbfd59d8d4b95p-173, 0x1.5314d6ef9a936p-484,
     0.0, 0x1.b1c1574125a4dp-278, 0.0, 0.0, 0.0, 0x1.babb13572dbeap-905,
     0x1.9cf0e65509917p-83, 0x1.805c183243671p-976, 0.0, 0.0, 0.0,
     0x1.39e5a40f9addfp-1019, 0.0, 0x1.f5d28cafb751fp-192, 0x1.2dd0f2720ca0ap-447,
     0x1.29897311d6e07p-449, 0x1.f7f760f3c27bfp-396, 0x1.ef171fdd90ed9p-46, 0.0,
     0x1.89881e9799242p-294, 0x1.f9a18846bb12ep-921, 0.0, 0.0, 0x1.5ecf14b72b4e1p-330,
     0x1.1838949542cb2p-201, 0x1.1c55dd06e43d8p-393, 0.0, 0x1.0782647309b99p-36,
     0x1.84cb5468d65ddp-92, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.885377df6864dp-752,
     0x1.498b9e1e6a849p-390, 0.0, 0.0, 0x1.4242be8856ecep-298, 0x1.1c117a5677a21p-420,
     0x1.bafbee923accep-258, 0x1.94b34cd077ee3p-977, 0.0, 0x1.d8eda37b9dc16p-300,
     0x1.6d549f6b637efp-507, 0x1.670ac59379db5p-724, 0.0, 0.0, 0.0, 0.0,
     0x1.4a883e883202dp-860, 0.0, 0.0, 0.0, 0x1.a03144d082c1bp-612, 0.0, 0.0, 0.0,
     0x1.c8e57dc8bb2ecp-615, 0.0, 0x1.ea9b185a7c34dp-776, 0x1.ac0fbff1c9269p-31,
     0x1.d34f5d62bdf58p-453, 0x1.52078a0d185d9p-188, 0.0, 0.0, 0x1.8377f0baf9f7fp-600,
     0.0, 0x1.202ec11094b3p-72, 0x1.759c7f1a7de5ap-67, 0x1.0ad147d6db93dp-270,
     0x1.81933cb42bb04p-364, 0x1.c510a4da1fafdp-723, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.18e48f0e8f24fp-89, 0x1.e74c724752723p-113, 0.0, 0.0, 0x1.c43cd304021f1p-371,
     0.0, 0x1.a976a65a3e23fp-697, 0.0, 0.0, 0.0, 0x1.f55b6b8ccd596p-397,
     0x1.ca29dfd8dba91p-118, 0x1.73c9c944d1f29p-334, 0.0, 0.0, 0x1.993167f4c052ep-207,
     0.0, 0x1.9518f376fd52p-783, 0x1.bda90deb4b17dp-752, 0x1.ed76dc5cfdc86p-97, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63fbacf0e3567p-409, 0x1.4afd28cd4fd2ep-511,
     0.0, 0x1.618b159d44ce6p-292, 0.0, 0.0, 0x1.89409f4d61596p-316,
     0x1.e895ae9030b39p-276, 0x1.48c9e142a1f38p-394, 0x1.c615c939b189bp-475, 0.0, 0.0,
     0x1.49bb9d8d8e966p-637, 0x1.52f2392349eep-856, 0x1.52df1ab6f7433p-103, 0.0,
     0x1.308610aaf3911p-869, 0.0, 0x1.eea302d370fcap-802, 0x1.a49777ff3b753p-680,
     0x1.2b89b83ccb102p-286, 0x1.bcb0814455019p-1009, 0x1.44017feeaf963p-679,
     0x1.56edc4c92d18fp-422, 0x1.311b3f268c893p-117, 0.0, 0x1.2ca4c373632b9p-382,
     0x1.de4e0442a9d92p-19, 0x1.1a7cbfc5a7ae2p-693, 0x1.f4d06a53b04ddp-280, 0.0,
     0x1.6e87b06002bf9p-288, 0x1.f3e3e1ece31dfp-110, 0.0, 0x1.d2463f3a1568dp-89, 0.0,
     0.0, 0x1.aa1e8ac98ff56p-636, 0.0, 0x1.7126a7480517p-640, 0x1.e19ecf6ffadfap-938,
     0x1.bce5bc4b44efep-383, 0.0, 0.0, 0.0, 0x1.5317d68125814p-266,
     0x1.90222416e4d85p-88, 0x1.ec3e2295e16fp-263, 0.0, 0x1.66cf5caa6a04cp-555
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
            tmp1 = Sleef_sinhd4_u10kvx(tmp0);
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
    printf("Sleef_sinhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
