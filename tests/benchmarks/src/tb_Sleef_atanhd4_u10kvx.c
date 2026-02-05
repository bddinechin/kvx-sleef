/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhd4_u10kvx.c --function Sleef_atanhd4_u10kvx \
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
     0x1.cf932a93eecp-765, 0x1.03359167aa6bcp-2, 0.0, 0x1.d85be3ec0ea2dp-826, 0.0,
     0.0, 0.0, 0.0, 0x1.c8d78f5d601aap-158, 0.0, 0x1.edb5606ac2846p-431,
     0x1.a2fc2ae491883p-192, 0x1.08e4c3cb1051cp-443, 0.0, 0x1.5b130b6f6b908p-761,
     0x1.97a5d5cda71p-482, 0x1.9ea21b38b6741p-624, 0x1.0ca4200abb211p-965, 0.0,
     0x1.044a5e9f07d12p-760, 0x1.1f814e92b0b6ep-926, 0x1.b2882f04744f2p-761,
     0x1.0035eb686480ep-129, 0x1.a46ee1558a8f7p-69, 0x1.8ba57cbc7820ep-392, 0.0,
     0x1.6539c4888edabp-3, 0x1.ecc922e14a95bp-951, 0x1.3e63055c06e0fp-985,
     0x1.5c13bf44d42eap-634, 0.0, 0x1.6335fbe4e0f53p-308, 0x1.2d48cf777fc96p-682, 0.0,
     0x1.456512df410dcp-85, 0x1.f887b27441038p-294, 0x1.cb4b1ce5c1ba8p-300,
     0x1.b36563291e398p-483, 0.0, 0x1.12db8b578355fp-832, 0.0, 0x1.2f2e06820daebp-271,
     0x1.3f868b270523fp-777, 0.0, 0.0, 0x1.eee39190f8747p-181, 0.0, 0.0, 0.0,
     0x1.610d2a3d2daadp-556, 0.0, 0.0, 0.0, 0x1.00e5d7ef132a2p-821,
     0x1.99964c49f7d5dp-624, 0x1.458fe4dd1b995p-753, 0.0, 0.0, 0.0, 0.0,
     0x1.31a6b84b929ep-169, 0.0, 0.0, 0x1.a9fe1f19d137ep-707, 0.0,
     0x1.39a522b36f00cp-21, 0x1.77e0e0be9ea98p-549, 0x1.58b9a5838cbbap-1008,
     0x1.8512b35ccd197p-134, 0.0, 0.0, 0x1.1344f74cafa0ap-537, 0.0,
     0x1.f3a9f1c6f24bbp-43, 0x1.efb4a838b21a9p-927, 0x1.ec5bdd54be3e5p-162, 0.0,
     0x1.e7aafed1b1c7dp-124, 0x1.78e4a36509245p-196, 0x1.3600b3335dda5p-566,
     0x1.06b1ad408a7dep-689, 0x1.360db1c48d80ap-172, 0.0, 0x1.8993f38e271eep-479, 0.0,
     0.0, 0x1.2a9b2d600224fp-644, 0.0, 0.0, 0x1.7f1070749b4bdp-880,
     0x1.f796637805bfap-57, 0x1.089dd52016a72p-153, 0x1.7cf16960e2497p-108, 0.0, 0.0,
     0.0, 0x1.77efd25e7d89ep-461, 0.0, 0x1.5ba5e10005a3bp-136, 0x1.6844a259bddb7p-358,
     0.0, 0x1.62b527c224603p-395, 0x1.162f3346bf68bp-74, 0.0, 0x1.3af057803ff96p-649,
     0.0, 0.0, 0x1.c524cfe4cdd8dp-282, 0.0, 0x1.1acf528b4004dp-507, 0.0,
     0x1.ac9ebc0a0abbap-874, 0.0, 0.0, 0.0, 0x1.c70a13e7a2d69p-424, 0.0, 0.0,
     0x1.0fe63bc26b6e4p-92, 0.0, 0.0, 0x1.e711650d126a4p-588, 0x1.708533634e077p-635,
     0.0, 0.0, 0.0, 0x1.aef1616e17fb4p-310, 0.0, 0x1.647ee525198dcp-232,
     0x1.9380aec49078p-161, 0x1.5e47e5a459775p-623, 0x1.d2189b4159756p-70, 0.0,
     0x1.d37352d1561d2p-979, 0.0, 0x1.b4983db670119p-930, 0x1.e7ad5d10ae189p-482,
     0x1.55a6f5d579c16p-168, 0.0, 0.0, 0x1.5fad57748df64p-167, 0.0,
     0x1.02ac995bb693ap-803, 0x1.24b85111aab96p-898, 0x1.4b3abb73c63a1p-86, 0.0,
     0x1.0651e671f40afp-464, 0.0, 0.0, 0x1.d60e5415a0fe6p-482, 0x1.9e9c4e330a166p-644,
     0.0, 0x1.4c49bfc2892cp-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.704cb652d75fbp-318, 0.0,
     0.0, 0x1.e69717ffb3866p-798, 0x1.d16c9b3a80fe6p-61, 0x1.f1ccc94dd8ba7p-331, 0.0,
     0x1.6d6f687866a68p-111, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.848e139aa35ddp-474, 0.0, 0x1.53c0d2876c472p-728, 0x1.02883bf180863p-617,
     0x1.d6b3d9167b10fp-464, 0.0, 0x1.c8a9aa8db269ap-731, 0x1.af0a84c9d52ddp-271, 0.0,
     0.0, 0x1.be748c923f2fbp-174, 0.0, 0.0, 0x1.dcf56192a2ff1p-845,
     0x1.6f715495eb2aap-394, 0x1.77486157a5967p-724, 0.0, 0x1.25afc15b5bac5p-166,
     0x1.8b0766afd1af1p-512, 0.0, 0x1.1c4609b9dde6p-535, 0x1.0be769a873d2dp-114,
     0x1.a392486a882c3p-619, 0x1.450632467f008p-261, 0.0, 0.0, 0x1.1ce2fd715b3fap-440,
     0.0, 0x1.732d9e2fbbc1bp-793, 0.0, 0.0, 0x1.46f6378ea66fbp-393,
     0x1.24a7308849224p-930, 0x1.fe71d1e47331p-472, 0.0, 0.0, 0x1.c3927b33278a5p-432,
     0x1.63a9871e387cbp-672, 0x1.e827403d8182ap-464, 0.0, 0.0, 0.0,
     0x1.d73c862472befp-949, 0.0, 0x1.fe8aaec1f8abap-658, 0.0, 0.0,
     0x1.2eecb8195893p-397, 0x1.3fd3b30163d2cp-48, 0x1.e957f639320fep-190, 0.0, 0.0,
     0x1.ba95e8983eb5ap-819, 0x1.92e4c9390996cp-479, 0.0, 0.0, 0x1.88851a60f986p-442,
     0.0, 0.0, 0x1.2c576600b9c99p-70, 0.0, 0.0, 0.0, 0x1.d4930a59ff3c8p-599, 0.0, 0.0,
     0.0, 0x1.dcc37ae319654p-814, 0x1.4c6a691d35c01p-122, 0.0, 0.0,
     0x1.49e60aad61bd9p-712, 0x1.ac4cc19248574p-848, 0x1.cea7bbfd493ddp-656,
     0x1.bdccfb9298ad9p-805, 0.0, 0x1.fe3a5718a03acp-204, 0.0, 0x1.8b63236ec85e1p-844,
     0x1.610a53c65b937p-196, 0.0, 0.0, 0.0, 0.0, 0x1.a6514dc28b061p-639, 0.0, 0.0,
     0.0, 0x1.2f2acab3afdb7p-593, 0.0, 0x1.35567278f53a6p-180, 0x1.de29567bcb912p-136,
     0x1.9726b439aec6p-804, 0x1.389eb83a43092p-7, 0x1.fc240efb4f4f5p-265,
     0x1.d7d472585be1fp-108, 0.0, 0x1.90a9378a222fp-264, 0x1.1041af9c2e581p-109, 0.0,
     0x1.a8751502201c4p-1004, 0x1.8f5978cd7d56bp-911, 0.0, 0.0, 0.0, 0.0,
     0x1.35059e165c57fp-1004, 0x1.18937d6cf37e1p-261, 0x1.e5844741d114p-273,
     0x1.801b09179ea6ep-769, 0.0, 0x1.44d846982a8eep-93, 0x1.5809e9833c1aap-478, 0.0,
     0.0, 0.0, 0.0, 0x1.ee0f9beee52b6p-972, 0.0, 0x1.ee6ccba1a8c39p-653,
     0x1.761f227f48d65p-869, 0.0, 0x1.20e4d72b64043p-511, 0.0, 0x1.e9cafb6f14808p-964,
     0x1.c9f59753670f1p-338, 0.0, 0x1.d27ee88156804p-400, 0.0, 0.0, 0.0,
     0x1.da3cc0caf53c8p-198, 0x1.56c44e18fc121p-293, 0.0, 0x1.dfb16fbf6b6fbp-578, 0.0,
     0x1.6a797d3e678bcp-222, 0.0, 0.0, 0x1.a4ee2cc901473p-789, 0x1.13a67cf9ef525p-802,
     0.0, 0x1.b3d299b3e1082p-982, 0x1.405db71892dcap-177, 0.0, 0x1.ce09406de2f7bp-562,
     0.0, 0x1.d13fcdc038dd8p-194, 0x1.d203293839affp-806, 0x1.fe6710aa4112p-708,
     0x1.39eb9f96ac0abp-858, 0x1.af8d2a848a2dep-423, 0x1.6b32527e14285p-913,
     0x1.c01543f3b8366p-591, 0x1.dfb56c4481e0ep-645, 0.0, 0.0, 0x1.26c17b76b5b51p-840,
     0x1.6ccc4bde20236p-469, 0.0, 0.0, 0x1.750ff875bc6eap-587, 0.0,
     0x1.a1b8ad9506332p-60, 0.0, 0.0, 0.0, 0x1.686e05b8abe84p-63, 0.0,
     0x1.75fb6d177a2fbp-813, 0.0, 0x1.407db5c41584ep-90, 0.0, 0x1.589f025b0138ep-832,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b5339d41edfbp-182,
     0x1.9749aa3cc86f5p-105, 0x1.710885089b8f1p-480, 0.0, 0x1.087c9e8658318p-808,
     0x1.038935ffa25bfp-19, 0.0, 0x1.422657b67d16cp-514, 0x1.bc1c34ec74507p-725,
     0x1.4ee9398dab0e3p-211, 0.0, 0x1.5830caf3fb7e2p-759, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a3bed9e6a8573p-624, 0x1.0cc60d71f540cp-988, 0x1.3b1acf491870cp-562, 0.0,
     0x1.2f21a23a3b263p-328, 0x1.3a1d07110ca2ep-685, 0.0, 0x1.9787a149117c2p-934,
     0x1.16e5e28812d77p-713, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21f199741b823p-882,
     0.0, 0x1.3e352a520a92cp-928, 0.0, 0x1.0a6616b425885p-548, 0x1.1cf77a1570503p-753,
     0.0, 0x1.2fe69bf9770ep-212, 0.0, 0x1.1e621bc84d518p-580, 0x1.2f29f96f34fb2p-302,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e674503d707ap-981, 0.0, 0x1.0172a1d4068f3p-649,
     0x1.d00c6be32f1eap-32, 0x1.44bb3bbdcac59p-448, 0x1.d40baa00dc154p-128,
     0x1.801a6554feeap-201, 0.0, 0x1.6479dc545297fp-293, 0x1.af039bb6b8268p-269, 0.0,
     0x1.8063de8e2b44dp-514, 0x1.70a569ab3f4c2p-413, 0x1.4cfeec4266df9p-1018, 0.0,
     0x1.a7603ca852348p-162, 0x1.81f90ee299513p-323, 0x1.b04153ed721edp-728,
     0x1.265ba1e6c409dp-965, 0x1.4301daeb05b15p-411, 0x1.eab439300161p-684,
     0x1.779bcbe4ffe55p-165, 0.0, 0.0, 0.0, 0x1.f2a0ff818298bp-1021,
     0x1.ff2239ac1ce2ap-668, 0x1.cd5daea477ea1p-221, 0.0, 0.0, 0.0, 0.0,
     0x1.7c90ee514afdcp-914, 0.0, 0x1.178e8155dbf33p-189, 0x1.74a51db7227d9p-27, 0.0,
     0x1.79fa9ddd4d4bp-504, 0x1.484b2f8327acbp-548, 0x1.9b0b9328f19c7p-260,
     0x1.41e9631adc361p-58, 0x1.e41afdaf9233cp-894, 0x1.82bd6314ec5adp-6, 0.0,
     0x1.999840ee2884ep-691, 0x1.07f7023244d88p-16, 0.0, 0x1.43035e62ea286p-184, 0.0,
     0.0, 0.0, 0x1.9c77e0a652ad3p-517, 0x1.ab1aab4eee1abp-561, 0x1.ce63354ac9d27p-870,
     0x1.bd3d644fb2736p-51, 0.0, 0x1.1a4b20ad213d5p-931, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.09165d12442e8p-82, 0.0, 0x1p0, 0.0, 0.0, 0x1.723adfafed98ep-731,
     0x1.cd5bf720c4c6ep-192, 0x1.6174787bafa52p-238, 0x1.65045b012ae9p-475,
     0x1.f6b592d8cd23p-681, 0x1.63e6471e409dep-1, 0x1.cb628aef65dbfp-11, 0.0,
     0x1.b471f4a523084p-774, 0.0, 0.0, 0x1.37b1f6bb4b72ep-491, 0x1.bfe3febb813dap-865,
     0x1.503f459323dbbp-726, 0x1.7b2f099493cb6p-784, 0.0, 0x1.8d128a649809ep-514,
     0x1.9b229736e8d05p-102, 0x1.9f848cb05cdbdp-516, 0x1.356401d8d0f6ep-667,
     0x1.966a51c0f2d28p-276, 0.0, 0.0, 0x1.48b4331b5ab64p-318, 0x1.891592348b0c8p-138,
     0x1.198aaf1c09e11p-984, 0x1.5c0e05e32caefp-169, 0x1.1c619709da0abp-864,
     0x1.258d6f63a83c1p-49, 0.0, 0.0, 0x1.3fe33822625e3p-110, 0x1.5ceef0937b0ebp-648,
     0x1.6aab5f6f7baf2p-556, 0.0, 0x1.9239e0cf141a8p-1022, 0.0,
     0x1.2df7f42a0bed5p-281, 0.0, 0x1.04e869dd93acdp-709, 0x1.566675472bdbfp-352, 0.0,
     0.0, 0x1.253b990732345p-204, 0x1.f7cba50f03fadp-11, 0x1.d6f27f7ea4d3ep-785,
     0x1.40ff7abd4a643p-431, 0x1.c7c0670a8e8d2p-742, 0x1.fd54e295662d3p-601, 0.0,
     0x1.b15e977eb8eadp-678, 0x1.7473112303805p-509, 0.0, 0x1.2b53de531b94p-527, 0.0,
     0.0, 0.0, 0.0, 0x1.8f7bf452d8284p-397, 0.0, 0.0, 0.0, 0.0, 0x1.315f9b61e313ap-25,
     0x1.b0b569493646ep-15, 0x1.5606740f68478p-213, 0.0, 0.0, 0x1.a21ffbe63436p-651,
     0.0, 0.0, 0.0, 0.0, 0x1.f2b7b0c42917fp-341, 0.0, 0.0, 0.0,
     0x1.a9afe5abca678p-111, 0x1.722f5e7dab7eep-860, 0.0, 0x1.7f94d3866cca8p-316, 0.0,
     0x1.4ed56a1471e63p-1018, 0x1.4578c0c6c9e1dp-905, 0.0, 0x1.0f24a98738d2p-274, 0.0,
     0x1.1e18414bac67bp-55, 0x1.1972082fa28b2p-209, 0.0, 0x1.625a63cdc3798p-280, 0.0,
     0.0, 0x1.f5eee9b13601ap-619, 0x1.1241b4e79224bp-356, 0.0, 0.0, 0.0, 0.0,
     0x1.2c2224cc7992bp-649, 0.0, 0x1.693ca23926cp-96, 0.0, 0x1.e2c633b8cd42ep-18,
     0.0, 0x1p0, 0x1.4801dc29cf2a6p-95, 0.0, 0x1.312e66bf80455p-490,
     0x1.da5bfac147893p-588, 0x1.e5ad714fe5656p-642, 0x1.85bff1aa73febp-272,
     0x1.12051b332aa6dp-405, 0.0, 0.0, 0.0, 0x1.b101c7d30e4cap-86,
     0x1.b1ceeb8c2cd77p-788, 0x1.a3f5eacbad795p-808, 0x1.969d653831666p-911,
     0x1.80c4f8dfe7bf4p-851, 0.0, 0.0, 0x1.a7999967b987ap-955, 0.0,
     0x1.21871da439928p-76, 0.0, 0x1.1f2bd5277d86cp-935, 0x1.5ebedab1de714p-893,
     0x1.ee6af992cefa4p-646, 0x1.e7cd978408f48p-43, 0x1.5be3805d9c48bp-582,
     0x1.8e81d16176bb7p-81, 0x1.83357ac883799p-605, 0.0, 0x1.295df5c1280a1p-557, 0.0,
     0.0, 0x1.b37bfd3dedfb2p-766, 0.0, 0.0, 0.0, 0x1.ba1b4adbc2382p-174,
     0x1.b14440d298397p-507, 0x1.235395377e31fp-690, 0.0, 0x1.94f5a627a53f1p-976,
     0x1.3af8d7238372cp-884, 0x1.149aa9d3c336cp-385, 0x1.a19842df33ebdp-279, 0.0, 0.0,
     0.0, 0x1.f20ae9980d929p-650, 0x1.9e25bb027c0f8p-466, 0.0, 0.0, 0.0,
     0x1.764bf46e801e7p-600, 0x1.5428b916f7413p-145, 0x1.cb03d7a8cb203p-170, 0.0,
     0x1.b666914ca383ap-703, 0x1.a9bbc87005e9cp-797, 0x1.70cc3817bdbdfp-127, 0.0, 0.0,
     0x1.3a693f9e820d4p-229, 0.0, 0x1.ac718c27b156ap-706, 0x1.cfc5de1002c58p-863, 0.0,
     0x1.5cece3f199e72p-803, 0.0, 0x1.87346dc00968bp-523, 0.0,
     0x1.4a44ebec9dc32p-1017, 0.0, 0x1.c7cbef02d829ap-495, 0.0, 0.0, 0.0,
     0x1.207b910e50a6ep-895, 0x1.1391df2c257a8p-370, 0.0, 0.0, 0.0,
     0x1.071a465633b8bp-811, 0x1.7123d92fa3aacp-154, 0x1.2b566b79adb3cp-971, 0.0, 0.0,
     0.0, 0x1.73950594198a9p-39, 0x1.9f52dc4ec1f34p-351, 0.0, 0x1.a1d560c634c68p-211,
     0x1.3cb1ed5b43037p-923, 0x1.bb73c1b354b17p-417, 0x1.7e9e22edb4468p-877,
     0x1.d70bfd896b2dfp-14, 0x1.c1967ff215a2ep-930, 0.0, 0x1.0fe57700c417cp-105,
     0x1.14c96466a52fdp-549, 0x1.15a74de8c9e79p-14, 0x1.da0d9efbe9873p-750,
     0x1.c594c5ef43b46p-407, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e47e532296f6p-189, 0x1.656e0bab4d3c2p-191, 0.0, 0x1.4842036f4fa57p-636,
     0x1.35de4df8a993dp-557, 0.0, 0.0, 0.0, 0.0, 0x1.68355113d8daep-803,
     0x1.4f716e783f4bep-531, 0.0, 0x1.8bcbd1e78fe0bp-567, 0.0, 0.0,
     0x1.bd53234879117p-95, 0x1.9450092db6a3bp-521, 0x1.d27c028ca474ap-234, 0.0, 0.0,
     0x1.928722115000bp-526, 0.0, 0x1.a37cf20da9e91p-440, 0x1.23831ae1e97f8p-948,
     0x1.fa427930f3cabp-230, 0x1.98b42b05aa291p-1018, 0x1.f7d332d2ef299p-380,
     0x1.0c5a74553293cp-797, 0.0, 0x1.8ffa0ff97df6fp-1001, 0x1.3dacb9cae5e5bp-57, 0.0,
     0x1.d15e0517d7f1dp-519, 0.0, 0.0, 0x1.3bc786d71ad79p-165, 0x1.d7297e924b035p-772,
     0.0, 0x1.748a9c67e3fcbp-213, 0.0, 0.0, 0x1.a7cafe4ca66cap-547,
     0x1.2a26925aecb5cp-804, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a07cd4aaa208ep-161, 0.0, 0.0, 0x1.e8a6a0cb09c5fp-480,
     0x1.9ec7f69b37c24p-319, 0.0, 0.0, 0.0, 0x1.6c1b9662e0a8cp-936, 0.0,
     0x1.076e35851b3f4p-829, 0.0, 0x1.5d4e6ef9ef0d3p-279, 0.0, 0x1.5f79ed9918a16p-33,
     0x1.2671c058b29fbp-938, 0x1.ce24f5322e88ep-51, 0x1.f9e1c9a3e9004p-691, 0.0, 0.0,
     0.0, 0.0, 0x1.1e2640b82f645p-1003, 0x1.e2fb747f6215fp-96, 0.0, 0.0,
     0x1.71ce4775764a9p-888, 0.0, 0x1.2517c3d87e7b2p-62, 0x1.bdf14a214eb39p-117,
     0x1.85134618f0262p-963, 0x1.9c773be98a1cep-249, 0.0, 0.0, 0.0,
     0x1.88bb155c9e956p-864, 0x1.f666f7cd69783p-64, 0x1.8fd6252dc1c6dp-559, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e6df88041f288p-817, 0.0, 0x1.955472ba8e6a8p-172,
     0x1.b1a62d98c2ebbp-710, 0.0, 0x1.0e8d57a22d521p-173, 0x1.d1b5444dcace2p-539, 0.0,
     0.0, 0x1.891c18dc03866p-775, 0x1.a8ddca121b129p-552, 0.0, 0x1.ae9d54ccc1804p-484,
     0.0, 0x1.f6c3e60733409p-248, 0x1.34bc0ecd471abp-601, 0x1.62addb1e3baa3p-124,
     0x1.c7ecb003549e4p-735, 0x1.9128f7cb5f3a6p-12, 0.0, 0.0, 0x1.83d6f4bd83b72p-973,
     0x1.9caf545aaa7b3p-174, 0x1.7cb6183cfbf9bp-68, 0.0, 0x1.5bdc5726fe9bbp-393,
     0x1.68cc36efda10bp-568, 0.0, 0.0, 0.0, 0x1.55a0c732a1663p-344,
     0x1.860e2bda1dbe3p-889, 0x1.21ef6dc98e904p-807, 0x1.f6a467de85d1cp-324, 0.0,
     0x1.79cd06a063b5dp-147, 0x1.fba26afea8436p-514, 0x1.0ee06359d2faep-230, 0.0,
     0x1.e401d766b0943p-318, 0x1.f9c823927f1aap-1014, 0x1.e2c8b3d00b04bp-856, 0.0,
     0x1.43ed7d1ca3dd3p-572, 0x1.fcb651db53be6p-888, 0.0, 0.0, 0x1.6fd142278c607p-947,
     0.0, 0x1.36245a3bd0b1dp-685, 0.0, 0x1.7f278a8f7a15p-558, 0x1.d380c8510fc13p-141,
     0x1.3ad40b8d7b353p-662, 0x1.63476705d8c3p-488, 0x1.bf9c4c13b3875p-670,
     0x1.481ef81d618ddp-535, 0x1.3d465901ae454p-617, 0.0, 0x1.3d873591478b3p-173, 0.0,
     0.0, 0.0, 0x1.32388f6601207p-988, 0.0, 0.0, 0.0, 0x1.6a365856736fap-219, 0.0,
     0x1.edc31241de161p-174, 0.0, 0x1.2f4aff170c27cp-68, 0x1.c68982c91f96ap-129, 0.0,
     0x1.342d22fc39438p-56, 0.0, 0.0, 0.0, 0.0, 0x1.7376855ee1308p-645, 0.0, 0.0,
     0x1.ba2456639e20bp-319, 0x1.08f93785b5a2fp-760, 0x1.2a3e7f8171d14p-385, 0.0,
     0x1.14bc27d00f736p-936, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b9153114dac5p-705,
     0x1.749afe0ecdba6p-349, 0x1.4054a7ed3c2c5p-114, 0x1.c72385ea75414p-715, 0.0,
     0x1.e7abc777a32e5p-963, 0x1.d275d6ff0e713p-348, 0.0, 0x1.654c88207eeep-461,
     0x1.115311742021fp-659, 0x1.89ca33739285ep-702, 0.0, 0x1.08bb9517d2628p-561,
     0x1.7bcf6bca6dec5p-440, 0.0, 0.0, 0.0, 0.0, 0x1.11eadbc481b3bp-24, 0.0, 0.0,
     0x1.d95d301e94e8ap-954, 0x1.ca91e9e03227p-725, 0x1.5915d3e3b836dp-946,
     0x1.26652ba5f0eb8p-285, 0.0, 0.0, 0x1.0cd1f0377f913p-661, 0.0, 0.0,
     0x1.c2c454e2c3099p-571, 0x1.6bf87004b563ap-405, 0x1.74f391fd77396p-857,
     0x1.432fd68ef0549p-108, 0x1.5acfc656f4157p-396, 0.0, 0x1.3d6b1de4df861p-39,
     0x1.24067cda7002ep-880, 0.0, 0x1.eac6f20983465p-241, 0x1.d4de5b8d28d07p-811,
     0x1.6705282624a0fp-248, 0.0, 0x1.ad4a954aeb93dp-94, 0.0, 0x1.132677b352142p-360,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3192a2a0ec09bp-521, 0x1.df8aba642e9bfp-531,
     0x1.91cd45e24dcacp-899, 0.0, 0x1.9d13f2d7e2a4cp-412, 0x1.0443247f71044p-394,
     0x1.d126583f41194p-537, 0x1.517e43fe624adp-466, 0.0, 0x1.8eef95e8af116p-501, 0.0,
     0x1.26ea4254324bp-23, 0.0, 0x1.f3e448ca96bb5p-739, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.33debc3fe1993p-562, 0x1.e127eee2be994p-979, 0x1.b400808fe52afp-321, 0.0,
     0x1.0bb2264b9a621p-787, 0x1.c60f28df601fap-393, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1090736e7a894p-729, 0.0, 0.0, 0x1.d78b9a7e3786p-576,
     0x1.a14345e72b91ep-154, 0.0, 0.0, 0.0, 0x1.4075d778353b4p-776,
     0x1.188c34714043dp-951, 0x1.85baa9eb5bc35p-576, 0x1.a42037dc32adcp-7,
     0x1.720e94608915ap-289, 0x1.f6f74cec05cbap-172, 0x1.832dcb8b0d77fp-842, 0.0,
     0x1.4c1b16dddcef4p-27, 0.0, 0.0, 0.0, 0x1.6c94ac65b9bc2p-232, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.03ccb1a84ddd4p-852, 0x1.6ac5f29ecdb95p-141,
     0x1.9330abbdd6361p-498, 0x1.f784419876602p-602, 0x1.d6c2ef1bfcb5p-431, 0.0,
     0x1.908feef17652ep-802, 0.0, 0x1.65933ef318c9ap-106, 0.0, 0x1.c0177443f14fep-580,
     0.0, 0x1.b43db52398755p-973, 0.0, 0x1.2c2509c8a0152p-73
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
            tmp1 = Sleef_atanhd4_u10kvx(tmp0);
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
    printf("Sleef_atanhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atanhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
