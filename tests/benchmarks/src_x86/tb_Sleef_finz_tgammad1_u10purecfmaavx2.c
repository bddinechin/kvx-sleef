/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammad1_u10purecfma.c --function \
 *     Sleef_finz_tgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0x1.2419653585d7dp-210, 0x1.4e9407c80a0cfp-272, 0.0, 0.0,
     0x1.aee19de3a951p-560, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c3773e2b3a589p-993,
     0x1.b946628556a78p-435, 0x1.9848cb702444dp-723, 0x1.180ac4aa12ep-315, 0.0, 0.0,
     0.0, 0x1.9f4c0c3934d12p-880, 0x1.9d15acdfdc6bcp-46, 0x1.cbdfddb5ca7acp-50,
     0x1.108148fb4ba1fp-854, 0x1.e12d2ca480f61p-291, 0.0, 0.0, 0.0, 0.0,
     0x1.99587fd8f1c63p-953, 0x1.c0f71fe70f93bp-6, 0x1.d35ad773e93a7p-423,
     0x1.77fdb2a4e076dp-493, 0.0, 0.0, 0.0, 0.0, 0x1.067142ebe30d4p-142, 0.0,
     0x1.2783a158a6af7p-773, 0.0, 0.0, 0x1.777bc205c9486p-305, 0.0, 0.0,
     0x1.c9d17a855d8d7p-922, 0x1.c363b2d9a0a71p-506, 0x1.5f081470116d9p-809,
     0x1.3336d094542ffp-919, 0x1.8fedb83596081p-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9455aa35c435ep-397, 0x1.59d37be10b112p-853, 0.0, 0.0, 0.0,
     0x1.0e12438660797p-848, 0.0, 0x1.7bf77f93e7ddap-445, 0x1.50182956aaaefp-304,
     0x1.35e2a263db6cbp-244, 0.0, 0x1.b6c6f2b35a333p-234, 0.0, 0.0,
     0x1.d2f568db4db7p-562, 0.0, 0x1.d466c44d0b2ecp-725, 0x1.2f82f260eaca9p-940,
     0x1.406b7ad71639ep-12, 0.0, 0.0, 0.0, 0x1.c595994457127p-773,
     0x1.562dea673dda9p-809, 0.0, 0x1.f883e1857ec95p-655, 0x1.e58ecd59c41b1p-178,
     0x1.e2e9466527a79p-73, 0.0, 0.0, 0.0, 0.0, 0x1.5fe3dda5bd168p-96, 0.0,
     0x1.24de572e4fff5p-44, 0.0, 0.0, 0x1.11fb3250a56a8p-149, 0x1.9333604a585a2p-770,
     0x1.94c8f41b9bcf7p-877, 0x1.defc4f0b59021p-791, 0x1.d41146cb1c72p-592, 0.0, 0.0,
     0.0, 0x1.934e7b7d01a71p-386, 0.0, 0x1.67c9e11d7d012p-837, 0x1.20b608297e3fp-77,
     0x1.94fab50913982p-89, 0x1.9ce9fcd5b0cfcp-724, 0x1.0668d667a1063p-98, 0.0, 0.0,
     0.0, 0.0, 0x1.db9d42bb902c6p-858, 0.0, 0.0, 0x1.65adf58cc21ffp-446, 0.0, 0.0,
     0x1.1633cdd682c38p-199, 0x1.93628260aa84ep-71, 0.0, 0.0, 0x1.87939e6bbded4p-926,
     0x1.976f3d078b40fp-1001, 0x1.63ad96682ac5bp-50, 0.0, 0.0, 0.0, 0.0,
     0x1.39a167380f894p-126, 0.0, 0x1.de3f06777705ep-109, 0x1.05f4b4621132fp-1010,
     0.0, 0x1.97697eb8d1533p-200, 0x1.458e2c3015cbap-510, 0.0, 0x1.13dc88b170d58p-486,
     0.0, 0x1.dcd4f5f3a1f8ep-983, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.633b0ce8be326p-723, 0.0, 0x1.8bca6f364c5cp-756, 0x1.79ab12672fdb9p-796,
     0x1.6d524638ae84cp-146, 0.0, 0.0, 0.0, 0.0, 0x1.5f3e963b5c1cbp-844,
     0x1.17504806d1198p-789, 0.0, 0.0, 0x1.a284c810d6487p-759, 0x1.7ff2e8b790964p-863,
     0x1.0f2f49a0ba456p-661, 0.0, 0x1.f269952ef54ecp-77, 0x1.c82bcd317392ep-708,
     0x1.545c6174f1b6ep-194, 0.0, 0.0, 0.0, 0x1.089f85a485b42p-944,
     0x1.2eccc5dfda7cp-199, 0x1.f1e0b41dc7e06p-998, 0x1.3c2ef143a0b51p-946, 0.0, 0.0,
     0.0, 0x1.3394456f4f893p-740, 0.0, 0x1.2febe15fc2e0dp-334, 0.0,
     0x1.9ee7feedeb8a7p-999, 0.0, 0x1.5b7db62dad4f1p-690, 0.0, 0.0, 0.0,
     0x1.cf75cd383f27dp-163, 0x1.cfcd25786dd39p-32, 0x1.af050eb5619e9p-838, 0.0,
     0x1.f2e8e02c1a64ep-734, 0.0, 0x1.1c979221e3fadp-639, 0.0, 0x1.b21c8bc84c805p-923,
     0.0, 0x1.d210d327e5d5p-553, 0.0, 0x1.b88b173577747p-904, 0x1.4d05b0d7cfbcep-236,
     0x1.47147ef94eaf5p-522, 0x1.ae27043613948p-771, 0x1.02abdd941764fp-909,
     0x1.4e13362c40b61p-460, 0x1.3f372323a1dedp-241, 0.0, 0.0, 0x1.a4ee260ba1f13p-170,
     0x1.bc672ef3e1482p-39, 0x1.b0d19900ea8fap-1008, 0.0, 0x1.f34d7769333fp-166,
     0x1.0c8ea8767c3b9p-32, 0x1.be021deb229fdp-454, 0x1.3ca03ce512ff6p-1015,
     0x1.72df911d9fc99p-915, 0x1.5e61f74f3d574p-182, 0.0, 0.0, 0.0,
     0x1.4c69795bd0b8fp-533, 0.0, 0.0, 0.0, 0x1.a1d63a50e675ap-676, 0.0, 0.0,
     0x1.d3350356a1b66p-1008, 0.0, 0.0, 0.0, 0x1.ac47e20486daap-980, 0.0, 0.0,
     0x1.8e2bc27918adcp-653, 0x1.a551df08fe4ddp-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.473d0d8ac8e72p-366, 0.0, 0x1.09690fc114031p-362, 0.0, 0x1.1ee53a0e5d3f3p-857,
     0.0, 0x1.34c50a43d6da7p-957, 0.0, 0x1.f1bdada5ce70ep-142, 0.0,
     0x1.0a622e99f9d2p-786, 0.0, 0x1.d0e40a1e1d69ep-863, 0x1.d821c8ae01aedp-749, 0.0,
     0x1.e2d0e7c55b4a8p-1, 0.0, 0.0, 0x1.363d57be548dap-578, 0x1.5b8075162e44fp-718,
     0x1.21d6a4efc08dep-509, 0x1.9c8bf99ff6c61p-435, 0.0, 0x1.5bea064c565f3p-551, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b10dad4432b7p-828, 0x1.a345fb8a01e38p-846,
     0x1.c96838b63ac76p-42, 0x1.260cb0cc394acp-814, 0.0, 0x1.a96879086eb6dp-80,
     0x1.4a5024d829ecfp-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1443fea88c2d9p-415, 0.0,
     0x1.5070bb266a80ap-788, 0x1.7f943bdb70f07p-906, 0.0, 0x1.28ea1983d5c2cp-429,
     0x1.2fce706886bfap-807, 0x1.c03308e149853p-923, 0x1.0c3a3532f8e4p-311, 0.0,
     0x1.88156e4846852p-371, 0x1.c23acef1678bdp-262, 0x1.08b1acee03bb3p-53, 0.0, 0.0,
     0.0, 0x1.16370a41e9904p-601, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e030dd7706e6bp-928, 0x1.8b1cd8590b8c5p-32, 0x1.a0f05f6423807p-290, 0.0, 0.0,
     0x1.9bf49ff8ba848p-843, 0.0, 0.0, 0x1.2c9cc7e97eaecp-740, 0x1.7efd1117330fcp-756,
     0.0, 0x1.6c084d96fff9cp-441, 0.0, 0x1.595c1b236049ap-802, 0.0,
     0x1.f66117bc38851p-450, 0x1.a5d997a4111dbp-607, 0.0, 0x1.da59ab8ac34f1p-916,
     0x1.1063dccea2c5cp-972, 0x1.4d7b4d58533e4p-829, 0.0, 0x1.c1d873e9cef9bp-6,
     0x1.10cb663f4f5ddp-963, 0x1.76d1b9f03e981p-691, 0.0, 0.0, 0.0, 0.0,
     0x1.a8cc8267dd30cp-797, 0x1.2b1dd66745ca6p-127, 0.0, 0.0, 0x1.a658311828e2dp-142,
     0x1.225e16130406dp-704, 0.0, 0.0, 0.0, 0.0, 0x1.948c908411631p-597,
     0x1.f211103960774p-874, 0x1.c39f49a4a03ebp-974, 0.0, 0.0, 0x1.fa58057893363p-737,
     0x1.b5f85dff318eap-163, 0x1.c4929118c39cbp-471, 0x1.998f4364c5e1p-717, 0.0,
     0x1.b8e26cf44bb5ep-311, 0x1.4ec1ac42e17bfp-159, 0.0, 0.0, 0x1.6d5d57ec0d71fp-365,
     0x1.f498651aed9b9p-179, 0.0, 0.0, 0x1.50c7b3e4db794p-135, 0x1.c1c5cbe866ebap-830,
     0x1.c74164de8ba07p-847, 0.0, 0.0, 0x1.885d5f1fc8e1bp-648, 0.0, 0.0, 0.0, 0.0,
     0x1.2c1398fad12dfp-493, 0x1.1b9946d177b48p-737, 0.0, 0x1.b6b6d08b4a38cp-810, 0.0,
     0.0, 0x1.79fdd0ad008a7p-700, 0.0, 0x1.1761f60a6ef4p-242, 0.0, 0.0,
     0x1.8af7a1afcf422p-696, 0.0, 0.0, 0.0, 0.0, 0x1.98930d46232e3p-885, 0.0,
     0x1.cebd43fc9a18dp-397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8a44fa1984aep-57,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bae48252d0528p-787, 0.0, 0.0,
     0x1.63164d15317b1p-270, 0.0, 0.0, 0x1.14a0a86c63e5p-87, 0x1.5699a19e873b2p-696,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.252c9463339bap-970, 0x1.9a3bc3d917c23p-746,
     0.0, 0x1.89be2f5f81da7p-969, 0x1.ecc536ef920dp-1022, 0x1.684f831bac8b5p-678,
     0x1.cc3d505cc29acp-667, 0.0, 0x1.37479e80408afp-788, 0x1.37b51e38aeb85p-413,
     0x1.34b51a63ac619p-73, 0x1.0c9f25c9f9bcap-86, 0.0, 0x1.63694c532d172p-524,
     0x1.6de9974626e5ap-61, 0x1.15e018b515fa9p-167, 0.0, 0.0, 0x1.227542db540f3p-965,
     0.0, 0.0, 0.0, 0x1.337fd4b8ac867p-478, 0.0, 0x1.35febcd7045a2p-923, 0.0, 0.0,
     0.0, 0x1.6158448faba1bp-955, 0x1.bcc925f22fd6dp-701, 0x1.bafddd5b5273p-629,
     0x1.d482f12c2efbp-442, 0x1.e375fd6b0e563p-311, 0x1.048838b092d48p-904, 0.0, 0.0,
     0x1.e1abe6108c9dp-278, 0.0, 0x1.dd517f9e833d7p-804, 0x1.428ddd8310c5fp-275,
     0x1.791d9397283e8p-380, 0x1.c54d0050f70f3p-56, 0.0, 0.0, 0x1.dce362b963601p-501,
     0.0, 0.0, 0x1.f96aca6fe9f68p-744, 0x1.6764c48b0d9e4p-758, 0x1.de889ec125fb8p-611,
     0.0, 0x1.b05864d6fec8p-231, 0.0, 0x1.a78d58d9280c4p-841, 0.0, 0.0, 0.0, 0.0,
     0x1.3537f001afe8fp-969, 0.0, 0.0, 0x1.23c42efb6b399p-390, 0x1.9be232ced454dp-793,
     0.0, 0x1.dc51317b8d4edp-639, 0x1.b451e83c129bep-571, 0x1.9abed2b6f4115p-347,
     0x1.1f2328dde7489p-1020, 0x1.d901735f25e3fp-290, 0.0, 0x1.0170a39e57a34p-466,
     0.0, 0.0, 0.0, 0x1.508a58674ed06p-672, 0x1.eebd630202e62p-169,
     0x1.648b083db0526p-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09062bc28fb7bp-696, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8f77c0a65a4p-911, 0.0, 0x1.87910c2a09aacp-541,
     0x1.a6c1b6c74a6eap-438, 0x1.b43cf520a4559p-12, 0.0, 0x1.30f4eab82bca7p-695,
     0x1.75edcf084fa03p-564, 0x1.381804a1fc9fap-618, 0.0, 0.0, 0x1.94b62e221ed53p-703,
     0x1.0d1c4c2deff33p-261, 0.0, 0x1.ec6eae880986fp-677, 0.0, 0x1.92276b0b8316fp-127,
     0.0, 0x1.7871f385f224ap-273, 0x1.8fac08ca85582p-337, 0x1.10fefbad28174p-64, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4f8543d3106ap-216, 0.0, 0x1.f52040587a81ap-682, 0.0,
     0.0, 0x1.7cd3187abad97p-621, 0x1.943dc46733913p-952, 0x1.c4d5db26398bap-394,
     0x1.b8207ea234c0dp-482, 0x1.985c2740b8e9ap-753, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c594eae62be7dp-55, 0x1.9ccdfdffe2a3p-11, 0.0, 0.0, 0.0,
     0x1.4cc47c2389e75p-72, 0x1.335b07587c076p-673, 0.0, 0x1.ffabd12e12d45p-765,
     0x1.35ed1934da5dbp-372, 0.0, 0x1.e68722173dd3p-890, 0x1.e726c26eb9c15p-899,
     0x1.9acfad7d10dc2p-430, 0x1.664b15fbe2991p-275, 0x1.e1a2c305c2757p-425, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.25d56ea2fafeap-318, 0.0, 0.0, 0x1.8784ae592cc0bp-69,
     0x1.da07552e96256p-290, 0.0, 0x1.0a661563a36d7p-38, 0.0, 0.0, 0.0,
     0x1.6c238d88e455p-938, 0.0, 0x1.9da160ee9ff0ap-325, 0.0, 0.0,
     0x1.25af6fc87b715p-948, 0.0, 0x1.71f5687114695p-897, 0x1.d0696284a0085p-452, 0.0,
     0x1.c5e00cdffb1c7p-622, 0.0, 0.0, 0x1.48d6e4b78bd0fp-678, 0.0, 0.0,
     0x1.a4e3da22a3198p-221, 0.0, 0x1.5fcaa1b2a04aep-593, 0x1.f127f86cac507p-402,
     0x1.0ebb431995946p-942, 0.0, 0x1.0d03af289ae3ap-750, 0x1.a103ddabf2d91p-679,
     0x1.328a62f296b86p-147, 0x1.dd8ee5d4ef2f1p-144, 0x1.8c4e1093faad8p-267,
     0x1.bb5d6271c379fp-956, 0.0, 0x1.72b73373a514cp-949, 0x1.bef6198968cf4p-434, 0.0,
     0x1.91e346f7e294cp-643, 0x1.a62752e6f39a6p-663, 0x1.7c2151c5489ecp-934,
     0x1.0df5b33cae79fp-286, 0.0, 0x1.7c3c281b3c961p-13, 0x1.ee599f4d1e6b7p-99,
     0x1.9613b82583c61p-53, 0.0, 0.0, 0x1.c265e88cac38dp-273, 0.0,
     0x1.5f41f41c77179p-206, 0x1.4c6c1060d792ap-666, 0x1.fd3443ab9dff4p-276, 0.0, 0.0,
     0x1.30922aa6506a6p-649, 0.0, 0x1.0dfac6779f3e4p-174, 0x1.e731889dedbedp-672, 0.0,
     0x1.f4e79d0ae936ep-95, 0.0, 0.0, 0x1.9f00e40c67b95p-419, 0x1.88bfa925e7d12p-277,
     0x1.05c776687ef9dp-442, 0x1.a6b4724960c29p-640, 0x1.2e2f13459dc4dp-158, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5317abfbcc253p-557, 0.0, 0.0, 0x1.a116dc386a315p-917,
     0.0, 0x1.fb5a17918a18fp-59, 0.0, 0x1.4ba23fc4e351cp-72, 0x1.4fe9cbd6caca8p-548,
     0.0, 0x1.c2b80571f6b6fp-505, 0.0, 0x1.aa4e9d16a37c4p-685, 0.0,
     0x1.fa42002789565p-916, 0x1.1b523c484f22dp-264, 0x1.620443acc666fp-482, 0.0, 0.0,
     0x1.7713f539ba443p-938, 0x1.35941c790344ap-966, 0.0, 0x1.46783e987eaaap-650, 0.0,
     0.0, 0x1.b4cec408f9444p-902, 0.0, 0x1.77b68139ec52p-429, 0.0, 0.0, 0.0,
     0x1.4757ab4e079c5p-965, 0x1.8c18d678ba823p-606, 0x1.54081125e3c03p-115, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.694e9b122c9d4p-954, 0.0, 0x1.a4330b39e1128p-477, 0.0, 0.0,
     0x1.36770e8a3a8dbp-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d03a97f45384fp-441,
     0x1.635e76c679eefp-72, 0.0, 0.0, 0.0, 0x1.d6b113c34bdefp-607,
     0x1.fe32ab09f5ea4p-929, 0x1.4db5136b7393ap-198, 0.0, 0x1.6b131bc15f2f7p-850, 0.0,
     0x1.759b7e8c54d8dp-579, 0x1.56a5e7ce6bcd1p-294, 0.0, 0.0, 0.0,
     0x1.31bf1c868456p-414, 0x1.3c1480c84ff6p-478, 0x1.a87ebe7d690eap-761,
     0x1.9118f696dd047p-841, 0.0, 0.0, 0.0, 0x1.abf47c2fce565p-441,
     0x1.508d55055d8b3p-33, 0x1.5bf669996a7cp-191, 0x1.ed12f4e5faa6dp-839, 0.0,
     0x1.19259744a8f1bp-210, 0.0, 0x1.90d67b7c85482p-79, 0x1.cd61a290125afp-611,
     0x1.da6d816341e08p-854, 0x1.aef3e06cc0f63p-868, 0x1.b6f2ddbd18a6fp-727, 0.0,
     0x1.e8ea298e46b42p-1016, 0.0, 0.0, 0x1.86711e90667b4p-958, 0.0, 0.0, 0.0,
     0x1.46d91a1e5e702p-183, 0.0, 0x1.43a8194bffe9p-728, 0.0, 0x1.bf7c2ab1a9402p-755,
     0x1.52910eabb832dp-379, 0x1.bf468d3ffe4bbp-899, 0.0, 0.0, 0.0,
     0x1.df38abcd30d57p-728, 0.0, 0.0, 0x1.96730ac82685bp-533, 0.0, 0.0,
     0x1.c8922b88adb6cp-427, 0x1.3b9eb715f6fd3p-348, 0.0, 0x1.ebd8e46159393p-536, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f349a156ab25p-707, 0x1.2da70c0bafd8p-750,
     0x1.73749ec6f5a29p-192, 0x1.6e8ae47cb4531p-297, 0x1.544aeb805c188p-466,
     0x1.a246897a50b2ep-439, 0x1.43acd19d96fc8p-403, 0.0, 0.0, 0x1.ad5620ff2ae67p-488,
     0.0, 0.0, 0x1.e3818761bc3a1p-171, 0.0, 0x1.ba16b57b8ed1ep-323,
     0x1.aa46bf724617ep-382, 0.0, 0.0, 0.0, 0x1.17a0567312b96p-182, 0.0,
     0x1.79f4a46664654p-75, 0.0, 0x1.3c30d3df1a127p-535, 0.0, 0x1.f410b8344fb3dp-433,
     0x1.0fa49d4909259p-699, 0.0, 0x1.1b597fcb6cf6dp-8, 0x1.8b4dfa6511b8cp-776, 0.0,
     0x1.7f2ba59aa0393p-956, 0x1.1404856f92067p-107, 0.0, 0x1.07a7d5dd3e3eap-469, 0.0,
     0x1.757d1ae767c7dp-661, 0x1.518ea206d3474p-755, 0x1.892c400598711p-988,
     0x1.5448cba476c21p-157, 0x1.453ad409b5ea6p-297, 0.0, 0.0, 0x1.cd72cb38a77a9p-481,
     0.0, 0.0, 0.0, 0x1.e6eacc8ceb34ep-577, 0x1.68e52e240daap-251,
     0x1.36070324e76a2p-422, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9497aaa14f8ep-257,
     0x1.3e9831583fd44p-970, 0x1.375da654e8dbep-957, 0x1.4372dea028d6dp-134, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d26b5477742c9p-398, 0x1.da7c6bfc146eep-11,
     0x1.63c4101642ef6p-724, 0.0, 0.0, 0.0, 0x1.0020d6cdad898p-851, 0.0, 0.0,
     0x1.0b17f58fd8f02p-523, 0x1.1cfab18e0c3a9p-495, 0x1.f84926cd17c4cp-992, 0.0,
     0x1.ef5b2f4c4db93p-302, 0x1.86684d38b159p-532, 0.0, 0.0, 0x1.91113a0803831p-644,
     0.0, 0x1.a085565f58c2dp-494, 0x1.3b8449f7be38cp-240, 0x1.ab2c28364507fp-788, 0.0,
     0x1.9bc4e32a9d6b1p-473, 0.0, 0x1.4d0ae35d1daaap-183, 0.0, 0.0,
     0x1.e29451b42e9f2p-494, 0x1.a5d401c07077fp-383, 0.0, 0.0, 0x1.cf1777a4a96f8p-735,
     0x1.9480919d71609p-314, 0x1.f725eaf2d6a0cp-350, 0x1.cdad5a42b12e5p-800, 0.0, 0.0,
     0x1.5c33912f6b2afp-205, 0.0, 0x1.1bd9221d6eb1ap-241, 0.0, 0.0,
     0x1.9865e8006424ap-313, 0.0, 0.0, 0x1.26fc4cdfb2526p-680, 0.0,
     0x1.48a7f31980b44p-214, 0.0, 0.0, 0.0, 0x1.6308a28092944p-395,
     0x1.88495e3ffff5bp-483, 0.0, 0x1.f0b70074222b6p-743, 0x1.d270c3523d2b1p-136,
     0x1.5c3e80a89ba6bp-554, 0x1.2d4f4cee171fcp-274, 0.0, 0.0, 0x1.4d88a46375c8fp-59,
     0x1.ac220fd5258e7p-295, 0x1.b3c0cae8bd0b3p-954, 0.0, 0x1.fc039f9471967p-510,
     0x1.cd469422dc2f1p-252, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c98fa8b4cdcd5p-6, 0.0,
     0x1.870a48f04b0cbp-567, 0.0, 0.0, 0.0, 0x1.401215f97b3eep-492, 0.0,
     0x1.2de0aa201354dp-953, 0.0, 0x1.4643babbfa036p-162, 0.0, 0.0, 0.0,
     0x1.987c7c284d612p-788, 0x1.544bcb8ba43a7p-295, 0.0, 0x1.0b0bad6a966f3p-561, 0.0,
     0x1.59fe91a21f4ebp-381, 0.0, 0x1.519dfa5e46e08p-722, 0x1.2297f7e1185dep-673,
     0x1.33ed0ff81354p-327, 0x1.9b671f5836966p-208, 0.0, 0x1.e0ebb1b4fefc4p-932,
     0x1.917a86808cf7p-795, 0.0, 0x1.d91e62d45c99dp-878, 0.0, 0.0,
     0x1.7a7a77e906864p-639, 0.0, 0.0, 0x1.d2b5593a11262p-636, 0.0, 0.0, 0.0,
     0x1.64074d05ff4f2p-816, 0.0, 0x1.3242bccdf2846p-39, 0.0, 0x1.d1f3ceca39ba8p-625,
     0.0, 0x1.1a367d60934dfp-821, 0x1.67650dd169e7bp-39, 0.0, 0.0, 0.0,
     0x1.24af329765619p-133, 0x1.d59902275913bp-521, 0x1.c71f1a8dcc46dp-38, 0.0,
     0x1.b8ecea0b47d6bp-29, 0.0, 0x1.94d4e5976030ep-383, 0x1.3f87387c04375p-310,
     0x1.d01a19162a093p-694, 0.0, 0.0, 0.0, 0x1.7adbd954c2198p-743,
     0x1.18ca3b7c0b50cp-7, 0.0, 0x1.9d1e2188d1143p-170, 0x1.73306c1720cdfp-24, 0.0,
     0.0, 0.0, 0x1.9b39f9f762244p-617, 0x1.023079ee3a945p-787, 0x1.a4afdae12b5a5p-695,
     0.0, 0x1.cd5ce07cde50cp-784, 0.0, 0x1.f6dd938ca5899p-81, 0x1.89500aa5077d3p-566,
     0.0, 0.0, 0x1.040845fe19513p-573, 0.0, 0x1.6fc3cedbc5b4ep-393, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0;
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
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_tgammad1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_tgammad1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
