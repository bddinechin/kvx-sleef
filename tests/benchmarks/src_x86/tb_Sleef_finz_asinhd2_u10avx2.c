/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhd2_u10avx2128.c --function \
 *     Sleef_finz_asinhd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.10b3cc9580a25p-947, 0x1.dd9fb73e78b01p-787, 0.0, 0x1.ed6155c0a4a5fp-468,
     0x1.a802e9cf10889p-38, 0.0, 0.0, 0.0, 0.0, 0x1.346f3e73424a8p-745, 0.0,
     0x1.cf66ce5417a71p-117, 0.0, 0x1.8a2a995d34c98p-914, 0.0, 0.0,
     0x1.8c2ca03c6929ap-17, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b2d29db6aa8p-589,
     0.0, 0.0, 0x1.aaf7ae6ae7d4ap-244, 0.0, 0x1.fdc071e23112bp-686, 0.0, 0.0,
     0x1.5a5d0ede139adp-560, 0x1.8bebad9085dc3p-506, 0x1.b1594c05fffa6p-262, 0.0, 0.0,
     0x1.a914b82a23c37p-550, 0x1.2bab1fee1b337p-530, 0x1.77442eedac975p-638,
     0x1.0090f41127c2dp-96, 0.0, 0x1.47badb6fa640dp-711, 0.0, 0x1.05dbf35ec6e44p-843,
     0x1.5f3bcd3c1b64bp-482, 0x1.bfeec9b1c074p-1006, 0.0, 0.0, 0.0, 0.0,
     0x1.5fe0f26561fedp-62, 0x1.76adb402425b4p-940, 0.0, 0x1.0ca76acb6ed69p-564,
     0x1.dc82449822816p-235, 0.0, 0.0, 0x1.4757942ef76d7p-673, 0x1.058fc8eecc3abp-374,
     0.0, 0x1.7772d645b7dfap-241, 0x1.7d02db1ce4eadp-811, 0.0, 0.0,
     0x1.3bdd73df8c83ap-175, 0.0, 0.0, 0.0, 0x1.f207a4afd2a59p-448, 0.0, 0.0, 0.0,
     0x1.6c9b43cb7c47p-281, 0.0, 0x1.be9c1b369837bp-3, 0x1.dd2501fb59acp-270, 0.0,
     0.0, 0x1.da57b39871f96p-505, 0.0, 0x1.862a2cacaff3fp-952, 0.0,
     0x1.0ae7b78a1f69ap-81, 0x1.3144a2ab168dap-23, 0x1.d9ab0d3d68ce6p-808,
     0x1.03d738a7dc3cap-68, 0x1.41ecd588fbf7dp-350, 0x1.f17cf60789b81p-481, 0.0, 0.0,
     0.0, 0x1.9bf8875f0641p-302, 0x1.e01a0ad12827ep-917, 0.0, 0x1.5d98de90be4b9p-878,
     0.0, 0x1.ba45d41ad1573p-723, 0x1.50378b2060e09p-899, 0.0, 0x1.1beae8c49b85p-512,
     0x1.a49994208c23p-238, 0x1.7aa46b7957af5p-253, 0.0, 0x1.aa916dec2609dp-887,
     0x1.a17fce8e18997p-544, 0x1.a115931ab6184p-208, 0.0, 0.0, 0.0,
     0x1.b3f3b1c026171p-572, 0.0, 0x1.88a8af870c303p-475, 0.0, 0.0, 0.0,
     0x1.874f6b6f0297bp-651, 0x1.999c72c984507p-614, 0x1.1a82eb5ce96bbp-724,
     0x1.19e5a45c72025p-357, 0x1.b3f78a98a68e9p-1010, 0x1.e2a26cc229b0dp-532,
     0x1.ac631b29f0f9ep-817, 0.0, 0.0, 0x1.9572142b8c13ep-653, 0x1.555e06d4d6e94p-973,
     0x1.bc3aacc26c45dp-181, 0x1.dd9e317d8dc5dp-261, 0x1.c18eac16cb3a9p-274, 0.0, 0.0,
     0.0, 0x1.41dbf18275fd2p-741, 0x1.c1551b55bba27p-814, 0x1.c816e7e3a8a32p-5,
     0x1.4aecdfd081277p-776, 0.0, 0.0, 0.0, 0x1.65670a8b4ff89p-955,
     0x1.ef0a48893527bp-858, 0.0, 0.0, 0x1.ec0a7f27e7734p-655, 0.0, 0.0, 0.0,
     0x1.9e6bdc962f64cp-764, 0.0, 0.0, 0x1.ae35b95b697c4p-963, 0x1.666583e76138bp-529,
     0.0, 0x1.e5de5c019fa67p-895, 0.0, 0.0, 0.0, 0x1.38c5731813796p-594,
     0x1.274f6651b1954p-939, 0x1.7deb3a2a4997dp-383, 0.0, 0.0, 0x1.7448a3189645p-552,
     0x1.77f89ea93679ap-801, 0x1.c45b06a141bbep-539, 0x1.8eb2601d732ffp-24,
     0x1.e4fbcd27cc644p-679, 0.0, 0x1.9d3d260b15112p-612, 0x1.9226557517142p-934,
     0x1.6e510b664b7bfp-401, 0x1.73390ab1ae782p-603, 0x1.81dab3271161cp-657, 0.0, 0.0,
     0.0, 0.0, 0x1.0b0394c66a112p-309, 0.0, 0x1.92f3bd5d56b0ap-699, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4d39c6146e451p-826, 0.0, 0x1.54e0ceb12ea87p-469,
     0x1.6bc9cb4095a7ep-791, 0x1.f3a681c36fa17p-275, 0x1.8f5fd81158482p-973,
     0x1.f35e95d31b08p-883, 0x1.2f1ebbfa56fa6p-170, 0.0, 0.0, 0.0,
     0x1.21c5440c4e454p-70, 0.0, 0x1.1db671fc61cd8p-399, 0x1.6be259ade04c2p-1010, 0.0,
     0.0, 0x1.54233502fec5ap-31, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fad17b0b3cbccp-654,
     0x1.44bd11e2c586cp-445, 0x1.cbc1f9ecfa8f1p-963, 0.0, 0.0, 0.0, 0.0,
     0x1.023bbaac7c0fbp-393, 0x1.39890eb09718ap-377, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.805b9d5c0d95p-859, 0x1.5b0d27ba1b54ap-126, 0.0, 0x1.c2c327220fb8cp-373, 0.0,
     0.0, 0x1.c9e7ccf8697c7p-884, 0.0, 0x1.7383560d28a91p-946, 0x1.b29d910225ad2p-866,
     0.0, 0x1.4d1c736bf1c76p-498, 0.0, 0.0, 0x1.b2c05bcddaadap-319,
     0x1.f47fd7e50287ap-610, 0x1.284a879d5da62p-332, 0.0, 0x1.711eecab7f893p-488,
     0x1.63ca3856ef8a5p-378, 0x1.0bbf5212a67f6p-331, 0x1.f086c9227c269p-338,
     0x1.bc4c8b10a2f6ep-72, 0x1.fc5e7e1e3089cp-697, 0x1.5202e9f2f6f35p-769,
     0x1.0e0a0132b0a0fp-988, 0x1.cbe8ee3f33c2ap-212, 0.0, 0x1.c5454c0279d94p-308, 0.0,
     0x1.768bd7211f388p-63, 0x1.63ac12fc1a62ap-681, 0x1.e17115b9ca13cp-964, 0.0, 0.0,
     0.0, 0x1.67b09f1fc1e38p-188, 0.0, 0.0, 0.0, 0x1.f05fca18f2e5bp-499, 0.0,
     0x1.c4326f7d566ep-1019, 0x1.cf0beed6281fdp-201, 0.0, 0x1.53b1504273147p-604, 0.0,
     0.0, 0.0, 0x1.91a3d7fa629eep-148, 0.0, 0x1.de41b2d9b3d24p-100,
     0x1.0c4f2665820ccp-543, 0.0, 0.0, 0x1.5dc3b081541c5p-787, 0x1.2966e46b098bfp-987,
     0.0, 0.0, 0.0, 0x1.ef07c4e48df27p-415, 0.0, 0.0, 0x1.9844e417d7343p-247,
     0x1.5593cab9f9d12p-114, 0.0, 0x1.192ad3b514449p-235, 0x1.d5cda23c3fe52p-470,
     0x1.1f3d8a74d9617p-560, 0.0, 0.0, 0x1.2b421fb19d24bp-498, 0x1.0c3cc2e6ca9a6p-860,
     0x1.9316460179428p-166, 0.0, 0x1.3f68581c93d5p-305, 0.0, 0x1.845a826233f9dp-631,
     0.0, 0.0, 0x1.6b5e1e0816dafp-596, 0.0, 0x1.154c2283aa7a8p-872,
     0x1.4d5889660b0b2p-940, 0x1.fa0dae8dfa9fp-881, 0.0, 0x1.fa7a382db778fp-345, 0.0,
     0x1.0a6645ea1aaf6p-827, 0x1.26824b9d81bafp-25, 0.0, 0x1.eb7f6541379dbp-779, 0.0,
     0x1.7290f76827a92p-181, 0x1.2ed469ddd38d4p-536, 0.0, 0x1.049f2d6bf2789p-151,
     0x1.cb7b2c3cccca1p-965, 0x1.202b587bbb429p-547, 0x1.f0450ebccac7ap-655, 0.0,
     0x1.384c00eedd0cfp-599, 0.0, 0x1.86d4e8899bbf1p-60, 0.0, 0.0,
     0x1.a8c01e9f05828p-297, 0x1.83a335c550bcap-460, 0.0, 0x1.4f6350c07e8bp-402,
     0x1.a4706e6edfd2ep-341, 0x1.1b6d3ea2af41cp-372, 0.0, 0.0, 0.0,
     0x1.7ed611acdf175p-24, 0.0, 0x1.dfbfe66849262p-17, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cc897df2616ep-328, 0x1.cd7e7a951cc03p-950, 0x1.684935c2420acp-461,
     0x1.615cbdd506adap-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08dca9a19e353p-6, 0.0,
     0x1.764a198d760e8p-231, 0.0, 0.0, 0x1.f243db10c92f1p-663, 0.0, 0.0,
     0x1.7c42b2e0c5be9p-810, 0.0, 0x1.1cfa5150225a8p-775, 0x1.fd79461221083p-372,
     0x1.9df9ae789689ap-451, 0.0, 0x1.0dfd23d4b7741p-667, 0x1.59b9526bda8d9p-530,
     0x1.ac5231dd495ep-303, 0x1.f83841216c9a2p-882, 0x1.a73c3138ad62dp-504,
     0x1.d6e5ef33e8329p-582, 0.0, 0.0, 0.0, 0.0, 0x1.6b52643ec392bp-313,
     0x1.ee61e1273b7a1p-139, 0.0, 0x1.1d33005996b4ap-197, 0.0, 0.0,
     0x1.ca4b664100299p-579, 0x1.abc0035a04764p-284, 0x1.ad9df046c2f3ap-805,
     0x1.7cc969a51682bp-524, 0x1.e902e16d79222p-82, 0.0, 0.0, 0.0,
     0x1.ab7a681056fcep-203, 0x1.9d85d342d72e1p-552, 0x1.4acf856aa5a09p-184, 0.0,
     0x1.c98860b683822p-140, 0.0, 0.0, 0.0, 0x1.9878ac76dea4fp-97, 0.0, 0.0,
     0x1.9ab044a8f68e6p-712, 0x1.c51bbebc7b2bbp-521, 0x1.bdfb76fda2a06p-528, 0.0,
     0x1.beede8e157f65p-752, 0x1.5ef18409a72a5p-256, 0.0, 0.0, 0x1.3623ca8fe1265p-260,
     0x1.4d6b29a8bdb2cp-910, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e87dffbc337ep-663, 0x1.b9c48c7bd4711p-821, 0x1.7c6a9f050fa79p-752,
     0x1.0f0aa8898af78p-872, 0x1.a087afc0e2a6cp-468, 0x1.5829bdb44ecbp-1017,
     0x1.0efbc98d0666ep-792, 0.0, 0.0, 0.0, 0x1.b052ed1d349d7p-70,
     0x1.6157f12012708p-70, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5516cf4a36b71p-390, 0.0,
     0.0, 0x1.954a3a2a28b3cp-223, 0.0, 0.0, 0x1.76a9c3d6d78f6p-747,
     0x1.d75fb1f94d723p-349, 0x1.3abce90258622p-142, 0.0, 0x1.249e1b7386c44p-831, 0.0,
     0.0, 0.0, 0.0, 0x1.92578184abdccp-304, 0x1.63d4fe39ccba4p-768,
     0x1.7f012fa83522dp-546, 0.0, 0.0, 0x1.e2469c7c68193p-847, 0x1.10e22f733bb93p-388,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e0bafe3918f66p-597, 0.0, 0.0,
     0x1.71d30350d09ddp-936, 0x1.2187d8116ad6dp-534, 0.0, 0.0, 0x1.a2585b6f6b4c2p-666,
     0x1.ba8a40c9d46e6p-9, 0.0, 0x1.de864fd92ca56p-571, 0x1.bc90b18b38dd8p-446, 0.0,
     0x1.7ec1ac709782dp-746, 0x1.e5ca1a00f18c3p-740, 0x1.fcef8129f9545p-418, 0.0, 0.0,
     0.0, 0.0, 0x1.3d02adca161p-726, 0x1.5bd45c12e09f8p-311, 0x1.984f1ee97e327p-347,
     0.0, 0.0, 0.0, 0x1.cd53e015532a3p-682, 0.0, 0x1.c0be42f0560c5p-213, 0.0, 0.0,
     0x1.498bbbc214727p-866, 0x1.45922772f015cp-749, 0.0, 0x1.457bbfddb427p-447, 0.0,
     0.0, 0x1.c1e459ba444f4p-654, 0.0, 0.0, 0x1.596dc3999b905p-887, 0.0,
     0x1.548ff197eca36p-767, 0.0, 0.0, 0x1.4a8972d1c9f1cp-755, 0.0,
     0x1.91078f6d9b24fp-872, 0.0, 0.0, 0.0, 0x1.cbf5803cf3a8fp-812, 0.0,
     0x1.c734d53bf4605p-748, 0.0, 0x1.00c6eb980a706p-861, 0.0, 0x1.6792d3d91b8f5p-714,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c533b35c137f3p-1004, 0x1.8a30e6bbbace2p-630, 0.0,
     0x1.eabe9e2037d01p-741, 0.0, 0x1.cce1067f3aa87p-1016, 0.0, 0.0,
     0x1.81f76a2936027p-327, 0.0, 0.0, 0.0, 0x1.c39ef71a20994p-475, 0.0, 0.0,
     0x1.64987f2062479p-868, 0.0, 0x1.ee65f85f9e17ap-974, 0x1.bb0102bcc88fp-298,
     0x1.963d7f7a72141p-635, 0x1.38dcee2f8031cp-657, 0x1.965746f16ce34p-397, 0.0, 0.0,
     0x1.80886093fa25cp-1008, 0x1.38ea9ab609ec8p-173, 0x1.0555db9ce4d8fp-888, 0.0,
     0x1.559de14fa5b43p-538, 0.0, 0x1.1cf272bb2d6cfp-378, 0x1.591b73df636dcp-21,
     0x1.4662ba9b5c9c9p-997, 0.0, 0x1.b23a2303b2482p-442, 0x1.a75962d777336p-855,
     0x1.9ac8d00eb71cdp-495, 0.0, 0x1.c5b4496e1cf52p-101, 0.0, 0x1.75084e8cbfeadp-676,
     0x1.d65e3e4b15182p-536, 0x1.445967cc75b1bp-872, 0x1.361577cc40a87p-1001, 0.0,
     0x1.92a8f0199d7dp-679, 0.0, 0x1.0b0d347685c8p-614, 0x1.7655a50aa8b03p-651, 0.0,
     0.0, 0x1.cb9e06f8ccb1bp-625, 0.0, 0x1.80e44f1663a21p-470, 0x1.df15a7275207fp-423,
     0x1.b2347283fa38ap-183, 0.0, 0x1.aec83cc438d8cp-359, 0x1.6f9843f345cd9p-843,
     0x1.100a961451ec3p-525, 0.0, 0x1.a206286deae5bp-186, 0x1.a5d5156b28668p-142, 0.0,
     0x1.f8e6b123d02dcp-481, 0x1.85572d2c12e5cp-168, 0x1.9fc994c9a4ab3p-830, 0.0,
     0x1.bcaeb70abef97p-865, 0.0, 0.0, 0.0, 0.0, 0x1.73355a0e6e5efp-844, 0.0, 0.0,
     0.0, 0x1.a87f90cfbffcep-940, 0x1.d0c4bac5dace7p-374, 0.0, 0x1.1190bfbdd81d8p-972,
     0x1.4a4ed58de684p-141, 0.0, 0.0, 0.0, 0x1.38fdc34ca8f2ep-1016, 0.0, 0.0,
     0x1.5fe9e60011dc1p-304, 0.0, 0x1.541ea0cd37466p-646, 0x1.ce2e395aa528fp-531,
     0x1.986c0629beff2p-723, 0x1.eddf721625e86p-763, 0x1.cb0b20b6e6352p-985, 0.0,
     0x1.692616a115af4p-1021, 0.0, 0.0, 0x1.be60e2e9bfdcdp-365, 0.0, 0.0, 0.0,
     0x1.af39c38bbbeb1p-169, 0x1.033865aa40f1ap-300, 0.0, 0.0, 0.0, 0.0,
     0x1.27647edc14051p-936, 0.0, 0x1.8c0b44c1d5abep-368, 0.0, 0x1.e8b30a6521bebp-90,
     0x1.e54376df058c9p-652, 0x1.adac81b65a6ep-87, 0x1.f7e535a3cdd97p-1013, 0.0,
     0x1.c819e5409f20bp-112, 0.0, 0.0, 0.0, 0x1.fa1854e4f00ffp-881, 0.0, 0.0,
     0x1.e203e788a5377p-827, 0.0, 0x1.ea3f5cc88126cp-677, 0x1.52fe609d86ed8p-483,
     0x1.b13b673987278p-683, 0.0, 0x1.7860e5522c5b8p-807, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.da77fc3042d6ep-409, 0.0, 0.0, 0x1.8fba3fabef6c9p-69, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.822afa84ce10cp-201, 0x1.5d9186ee65956p-383, 0x1.d4603f5decb7cp-99,
     0.0, 0x1.36114ee2cb6fap-987, 0x1.d693d649568ddp-344, 0.0, 0x1.5f4b529898e13p-276,
     0x1.50aa0babbf3fcp-957, 0x1.f7b7ecaafb33bp-259, 0.0, 0.0, 0x1.c679c469dfb2p-577,
     0.0, 0x1.14cc4ba33a7ffp-171, 0.0, 0x1.9d87aff7a8edp-144, 0x1.f90aa32984e19p-517,
     0.0, 0x1.44f982a6575e8p-242, 0.0, 0.0, 0x1.ed51c8703424p-544, 0.0,
     0x1.584b547425c6fp-213, 0.0, 0.0, 0x1.3398bd378567bp-666, 0.0, 0.0, 0.0, 0.0,
     0x1.464f57ce63bb2p-930, 0.0, 0.0, 0x1.8d2c929e28ep-1006, 0.0, 0.0,
     0x1.bb7279c9aac6bp-2, 0.0, 0.0, 0.0, 0x1.8024ba3fb9007p-725,
     0x1.af1bb57dec0ffp-501, 0x1.ef15d0e44a90dp-265, 0x1p0, 0x1.95533dcada917p-328,
     0.0, 0.0, 0x1.c54e820308691p-544, 0x1.d045eef0b069ep-570, 0.0,
     0x1.7489c0f994cc7p-996, 0.0, 0x1.05f9d8526f09fp-396, 0x1.0e4f3ea58d0ep-292, 0.0,
     0.0, 0.0, 0x1.dfb6704ba6326p-549, 0x1.14c45b88d2084p-815, 0x1.985fe36c47359p-268,
     0.0, 0.0, 0x1.fb1c8e4b3e57bp-296, 0x1.82d28116a9b9ap-834, 0x1.954d84b7da587p-114,
     0.0, 0.0, 0.0, 0.0, 0x1.810c7fe088e98p-346, 0x1.4cc23a5ee16dp-577,
     0x1.6e3619638e264p-946, 0.0, 0x1.204191157256bp-78, 0x1.5686b2eff2fe8p-402, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc959ccf088e9p-541, 0.0, 0.0,
     0x1.9d91da1ab56c1p-585, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.070836fb5f906p-412, 0.0,
     0x1.11337876739b4p-675, 0x1.575ba8141da2ap-16, 0x1.2399fbfb99178p-38,
     0x1.1784d67975821p-872, 0.0, 0.0, 0x1.90e3ce3edfba8p-8, 0x1.5d499fc6a26ap-995,
     0.0, 0x1.fe0aca64685c2p-205, 0.0, 0x1.615f7c513db1dp-672, 0.0,
     0x1.50bdf92cfbc2ap-632, 0.0, 0.0, 0x1.1713fe0846a66p-98, 0x1.0ae307924033ep-796,
     0.0, 0x1.ce75e1319d6cap-622, 0x1.988d3858f01cep-983, 0x1.8578f2e739319p-1011,
     0x1.f40fd1fa10a87p-765, 0.0, 0.0, 0x1.b57f02640e125p-396, 0.0, 0.0,
     0x1.5c6678eae4691p-189, 0x1.e5c4f299b7525p-691, 0x1.8d39d7d0522d3p-872,
     0x1.a175e1fc27d62p-568, 0.0, 0x1.45f63fb73112p-843, 0.0, 0x1.33b4f365a067ap-150,
     0x1.9e5c0058410d3p-238, 0.0, 0x1.4ec43cba233dcp-253, 0x1.26285d3e133d7p-868,
     0x1.abd6691df81ddp-431, 0x1.c2708f78bdb95p-19, 0x1.154c727c013a6p-665,
     0x1.52d1a8923dp-684, 0.0, 0.0, 0x1.5d36bdec9e43ap-383, 0.0,
     0x1.59bebf2508ebcp-126, 0x1.30a1e53ce90cfp-224, 0x1.404db5edc7724p-923, 0.0,
     0x1.02e77d641381p-926, 0.0, 0.0, 0.0, 0x1.75bae288e91ep-1007, 0.0,
     0x1.f8f36b7451872p-19, 0.0, 0.0, 0.0, 0.0, 0x1.21d140e2ce45ep-53, 0.0,
     0x1.6a6038aa07f91p-243, 0x1.5c082909f7b95p-791, 0x1.3ac67170d34f1p-826, 0.0,
     0x1.e24137fdb197ap-28, 0.0, 0.0, 0.0, 0x1.4b7e4710e2d03p-433, 0.0, 0.0, 0.0,
     0x1.1a0894ec12a99p-893, 0.0, 0x1.76a6e5671ed81p-160, 0x1.5e537fda526d7p-81, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83b253939ba2bp-387, 0x1.a198121a8015p-320, 0.0,
     0.0, 0.0, 0.0, 0x1.28ed06068b3bbp-108, 0x1.3735ebaee3689p-644,
     0x1.5025f6368faa6p-818, 0x1.bc8fb99cb3566p-460, 0x1.53fd3328175ccp-268,
     0x1.26ccfd83c6376p-629, 0x1.e40b4aba780dcp-872, 0.0, 0x1.0e49ac4f74031p-470,
     0x1.9db59d0a74b26p-1008, 0.0, 0x1.18c51ba87604dp-594, 0x1.ae28fdbd297ep-290, 0.0,
     0.0, 0x1.dfeca692f5239p-785, 0x1.92e3592c5f98ap-924, 0.0, 0.0,
     0x1.6f66dc7816d1fp-193, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98f6c4afd4ae7p-342,
     0x1.6baeb51cd42bfp-72, 0.0, 0x1.d5a05a1f0743p-774, 0.0, 0.0,
     0x1.81f5612d994adp-804, 0x1.1bc692f139d51p-455, 0x1.eae4d815dbbd9p-826, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0b3e0061052d5p-633, 0.0, 0x1.d9778927c053bp-125,
     0x1.de87f8a10f5cfp-211, 0x1.46dbbb96f9096p-305, 0.0, 0x1.ecdf82606334dp-607,
     0x1.5bdaf28dba6fdp-209, 0x1.b887d02fbda24p-846, 0.0, 0x1.ad82b6ee98a83p-622,
     0x1.647428d780c81p-336, 0x1.3eb5562064f7bp-1001, 0x1.607600fa986c8p-43, 0.0, 0.0,
     0x1.889f1a7bf7eddp-950, 0x1.74b5ecea64c7ep-129, 0x1.5ced3a1cafefcp-993,
     0x1.415dbe77c0cdcp-50, 0x1.cb2082c92aa5ep-739, 0x1.a97e730a5b3a5p-16, 0.0, 0.0,
     0x1.8ca0c85dd2815p-701, 0x1.9a26af0482455p-891, 0x1.173c14b1dc542p-1012,
     0x1.c5fadbd17a2d8p-683, 0.0, 0.0, 0x1.49e024186dd47p-663,
     0x1.6265a2b617ef9p-1018, 0x1.90bd757a3a476p-300, 0x1.0d2af6c34b0f9p-16,
     0x1.b55d88678334p-612, 0x1.6370037705e52p-889, 0.0, 0x1.69bda125eaf44p-88, 0.0,
     0.0, 0.0, 0.0, 0x1.4f02602d2b1b8p-335, 0x1.21ae332a0ab89p-524, 0.0,
     0x1.a07aad4ac38ap-174, 0x1.d6bbc5e7b4fdcp-903, 0.0, 0x1.c015925e19df1p-1015,
     0x1.9e3a12046f088p-207, 0x1.8b935117813a9p-64, 0.0, 0x1.2d0028cfcf5b3p-308, 0.0,
     0x1.9ef470e346bf4p-384, 0x1.836025b715443p-69, 0x1.f58778e7034dcp-677, 0.0, 0.0,
     0x1.e41fef0a38e13p-335, 0.0, 0.0, 0x1.8c597abf64005p-827, 0.0, 0.0, 0.0, 0.0,
     0x1.d9ab30bc74a05p-662, 0x1.b78ac03c11cb1p-948, 0x1.ebfb5a23f2d57p-885, 0.0, 0.0,
     0.0, 0x1.5be2ecfa4f646p-860, 0.0, 0x1.400a2ddd0fa6ep-428, 0.0, 0.0, 0.0,
     0x1.9dc65f1e20d3ap-261, 0.0, 0.0, 0.0, 0x1.347b6c27e8641p-938,
     0x1.a3c0ff4ee735p-255, 0x1.7637b8f601b25p-420, 0x1.8ec85f6dfcaf9p-30, 0.0,
     0x1.c41add1d13a37p-753, 0.0, 0x1.e677dd374094ap-388, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_asinhd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_asinhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_asinhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
