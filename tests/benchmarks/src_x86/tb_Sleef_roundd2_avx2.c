/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundd2_avx2128.c --function Sleef_roundd2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.9a12647f7ef3dp-384, 0x1.0d24c1e2ef2bfp-405, 0x1.e0579d99ca0d3p-883,
     0x1.9d0d96198a1ecp-359, 0x1.f2407ce8b9075p-215, 0.0, 0.0, 0.0, 0.0,
     0x1.698c4ec6d2073p-614, 0x1.7569b4d61f6b1p-425, 0x1.971650e81051dp-211, 0.0,
     0x1.dead7fbe8e99ap-545, 0x1.4f82f829e879ep-349, 0.0, 0.0, 0.0,
     0x1.27a61e6be87acp-719, 0x1.8129011cc2e38p-724, 0.0, 0.0,
     0x1.a3322e64ab521p-1011, 0.0, 0x1.4c755655ecde1p-448, 0x1.7f2bc8f198f33p-786,
     0x1.c2ac5fb707384p-383, 0x1.04741e603f69ep-1020, 0.0, 0x1.0a8595c14cf23p-82,
     0x1.d2bb112666023p-805, 0.0, 0.0, 0.0, 0.0, 0x1.93df37db3f60ep-30,
     0x1.1df8978c90212p-283, 0.0, 0.0, 0.0, 0.0, 0x1.b0e1a540f9993p-245, 0.0,
     0x1.afc91064804e7p-951, 0x1.9c37d68feb319p-712, 0x1.686bb5ac474dcp-849,
     0x1.3d22770243e9bp-359, 0.0, 0x1.c39a34f244b1fp-242, 0.0, 0x1.72df281041f83p-134,
     0.0, 0.0, 0x1.c527f6c4fc1f9p-654, 0.0, 0.0, 0.0, 0x1.2ee2011c28906p-726,
     0x1.d2686185fd01fp-157, 0x1.81196e8a58225p-603, 0x1.881385f9414f2p-600, 0.0, 0.0,
     0x1.7ea88530df6eep-518, 0.0, 0x1.05a4137465f2dp-227, 0x1.2d42085141267p-989,
     0x1.2252f8b53b886p-276, 0x1.1a848d4ac9b3fp-491, 0x1.0fd4d185c0553p-896, 0.0,
     0x1.943f663d46302p-425, 0x1.b9787685d2b9fp-509, 0x1.857a40739a0b3p-5,
     0x1.32c89d31a6366p-955, 0x1.b803adc23f00cp-436, 0.0, 0x1.abf97cda2d04bp-599, 0.0,
     0.0, 0.0, 0x1.121f678b9e59cp-75, 0.0, 0.0, 0x1.7ceaf45ecc4f5p-953, 0.0, 0.0,
     0x1.7eee872c07ea7p-668, 0x1.efe30f033685p-709, 0.0, 0x1.e90bf61c989f4p-625, 0.0,
     0.0, 0.0, 0x1.e41e568198ca7p-237, 0x1.c4f0fd06a79abp-110, 0x1.40858f41994e9p-896,
     0x1.1ad27723dc5abp-804, 0.0, 0x1.e5a0e287c8f16p-431, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fa68963523567p-52, 0x1.61f7101bae085p-251, 0.0, 0x1.7b9e1bd5d99aap-503,
     0x1.e3b10a9a40c2dp-47, 0.0, 0x1.7b816d3ef11d9p-359, 0.0, 0x1.d4876f6d89bbap-533,
     0x1.03c8b5be3487bp-216, 0.0, 0x1.5a26242a36773p-284, 0.0, 0x1.44e5e1a84b111p-515,
     0x1.c37be49439641p-1001, 0.0, 0x1.0db73fc1cbb1fp-140, 0x1.13268ae7e161dp-923,
     0x1.c60a487f648e4p-573, 0.0, 0x1.7bcb3f0ac8648p-390, 0x1.4b2cbde4d866p-806, 0.0,
     0x1.769d4400e359p-689, 0.0, 0x1.f4ec9a502bf3ap-700, 0x1.5253d10e663cbp-794, 0.0,
     0.0, 0.0, 0x1.6383c5512e05cp-900, 0.0, 0x1.25b65c18a2908p-373, 0.0, 0.0, 0.0,
     0x1.cc9dd51f89a42p-1011, 0x1.daf5577affe56p-904, 0.0, 0.0,
     0x1.aa81000e14f4ap-103, 0x1.8cb453adfe765p-738, 0.0, 0.0, 0x1.d98cde2d5a286p-821,
     0x1.d0aa6902b627fp-887, 0x1.bc19ca012b655p-658, 0.0, 0.0, 0x1.b227bd5276864p-368,
     0x1.f1b5ccb8c055p-974, 0.0, 0x1.a549f62c22d49p-390, 0.0, 0.0, 0.0,
     0x1.4aed0f5b799ecp-252, 0x1.be91f8299c63p-970, 0x1.4ea9b8eb8a1c9p-555, 0.0, 0.0,
     0x1.18289973f15e5p-180, 0x1.e6a1267f14d38p-64, 0.0, 0x1.31c09f9dae1c8p-503,
     0x1.9012f68e9bf14p-384, 0.0, 0x1.2a712fad95fbap-634, 0.0, 0x1.b2acd25adf6b5p-119,
     0x1.aa9439f268ca2p-869, 0.0, 0.0, 0.0, 0x1.6954cb1f39703p-728,
     0x1.4378d831d3748p-443, 0.0, 0.0, 0x1.b7b6832a122e5p-151, 0.0,
     0x1.d33d4fa07b57bp-635, 0x1.d4d19d7f3cb27p-457, 0x1.8692805ddd2c8p-952, 0.0, 0.0,
     0x1.15df9a86d154ap-415, 0.0, 0x1.aaf60ffb6b277p-843, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a27fa9f42c8cep-235, 0x1.5cb05b234cdc5p-156, 0x1.20de66efde0bp-370, 0.0, 0.0,
     0.0, 0x1.6d5c55b0a5643p-146, 0.0, 0.0, 0x1.4314694899528p-423,
     0x1.7c84a7515e58fp-226, 0x1.97e1e1e3c983cp-742, 0.0, 0x1.886a6eb0ed79bp-901, 0.0,
     0x1.006905426c46ap-243, 0x1.2ed4f3f25ec8bp-1003, 0x1.3e02f89ac3b11p-232,
     0x1.ac3befca8a2ffp-178, 0x1.3d1e21ca3cd0ap-54, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9d3deb8f5f5cp-118, 0x1.6848978074e44p-848, 0.0, 0.0, 0x1.82cb89d5672ap-606,
     0x1.84f1381126c04p-783, 0x1.c93789b69ed8ep-10, 0.0, 0.0, 0.0,
     0x1.4cfd0b498c1fp-189, 0.0, 0.0, 0x1.08b7f15698946p-311, 0x1.184935dbdaf44p-557,
     0.0, 0.0, 0.0, 0.0, 0x1.b4201cf0e0afbp-213, 0x1.287c46610b6bdp-1010, 0.0,
     0x1.bcbf932dcdda9p-574, 0.0, 0.0, 0x1.01701011e28d7p-60, 0.0,
     0x1.f7d7c414d2abep-87, 0x1.6dc960f52c2f6p-767, 0x1.c275beea2e764p-1000,
     0x1.9e9674ac1a5cbp-395, 0x1.49032cff4c6d5p-156, 0.0, 0.0, 0.0,
     0x1.6221b80f2fae1p-200, 0.0, 0x1.d52c073a0ecd4p-35, 0.0, 0x1.11ff6444c30a6p-54,
     0x1.b792efb9bee8fp-128, 0.0, 0.0, 0x1.4ed9c78df143ap-712, 0.0,
     0x1.6cf9418afdd6cp-616, 0.0, 0.0, 0x1.379f0462c7735p-805, 0.0, 0.0,
     0x1.e3244eb9aa4b9p-702, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eb881bae28fcp-52,
     0x1.a1203f7b64da5p-42, 0.0, 0x1.457798f198ebfp-16, 0x1.dd423c8afa1dbp-62, 0.0,
     0.0, 0x1.f062eb77441ebp-907, 0.0, 0.0, 0x1.a517ea77240ebp-722,
     0x1.aa2e59e4f392fp-561, 0x1.0ce93c04a60bap-66, 0.0, 0x1.8d6154044af2ep-542,
     0x1.74bf6f98944f4p-458, 0.0, 0x1.877b17e9b570bp-119, 0x1.e1dcee7ca76e4p-298, 0.0,
     0x1.41f00e9d5bcf3p-999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d5011a46ae75p-311,
     0x1.c64af6c578ed5p-37, 0.0, 0.0, 0x1.d0acbe4bd104p-479, 0x1.4c832097e9887p-630,
     0x1.5bde059cad763p-886, 0.0, 0x1.d02c3f03d4c9ap-499, 0.0, 0x1.3c06b8f25c975p-61,
     0x1.aea9fb01078f7p-126, 0.0, 0x1.38634b946f94cp-908, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b944c31073103p-204, 0.0, 0x1.44ff84587fbbep-91, 0x1.944dd53edbf06p-482,
     0x1.178f514e8d1b9p-29, 0.0, 0.0, 0x1.46c93651af6f8p-708, 0.0, 0.0, 0.0,
     0x1.909fa96fadc57p-1004, 0x1.7417ebb1f674dp-437, 0.0, 0.0, 0.0,
     0x1.2942d8f9503a7p-840, 0.0, 0x1.fabfd608eceedp-923, 0x1.4a9ae5ad6dfc4p-590, 0.0,
     0x1.bdd8f97a659e7p-267, 0.0, 0x1.fa0540bcfed3ap-965, 0x1.ff15c4114880dp-1011,
     0.0, 0x1.c7c83928eedbp-31, 0x1.f9fd6950446acp-23, 0x1.180b6738eabe2p-812, 0.0,
     0x1.d010dbdec9809p-133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a696aaf8e1493p-725, 0x1.71eaed98e9e95p-1019, 0x1.9d0559f33d433p-492,
     0x1.cffa2e83b3e72p-295, 0x1.024f3b42242aep-624, 0x1.2929f7752e157p-1006, 0.0,
     0.0, 0.0, 0.0, 0x1.661678b312bd5p-906, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7e9eca2ddc248p-797, 0x1.0858765c4e5a8p-92, 0.0, 0x1.feb5ee31f8811p-704,
     0x1.e7135fcd9d5e3p-993, 0x1.25d3ac28c2c09p-883, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b0a30ae7828cep-933, 0x1.53093602d0a94p-427, 0x1.f64114d92f6e7p-338, 0.0,
     0x1.a15f21aeb6403p-491, 0x1.9b6e1d62e885cp-454, 0x1.ee771a5366331p-412,
     0x1.6ab0b6917f9acp-1003, 0.0, 0.0, 0.0, 0x1.772540b05ae5ep-253,
     0x1.c00e210c1e00ep-268, 0x1.d15d9b1a65b7fp-37, 0.0, 0.0, 0.0,
     0x1.dc16a544aa77ap-171, 0.0, 0x1.78ac0c340b9abp-224, 0x1.029aac1cd96d4p-47,
     0x1.63c7bfd9f81fep-985, 0.0, 0x1.c9a1cc7ff8e33p-772, 0x1.2cf1b7857e60fp-496, 0.0,
     0.0, 0.0, 0.0, 0x1.513c6a086e8ap-417, 0.0, 0.0, 0x1.c99f501aa55dep-289, 0.0,
     0x1.1cd9725800be7p-157, 0.0, 0.0, 0.0, 0.0, 0x1.4f1ca8c948263p-960,
     0x1.41786e45ccb86p-306, 0x1.8473ec4a7a653p-413, 0.0, 0.0, 0x1.5cd3394d13aaap-170,
     0.0, 0x1.8d68f6d3f45abp-985, 0x1.2880c340126p-266, 0.0, 0x1.f971344fd9badp-446,
     0.0, 0.0, 0.0, 0x1.cfe4509336b05p-663, 0.0, 0.0, 0.0, 0x1.1d899cea3b0d7p-87, 0.0,
     0x1.d9962069003ep-358, 0.0, 0.0, 0x1.2c2961093e196p-707, 0x1.390122fd04972p-279,
     0x1.4604a9df38bedp-637, 0x1.3f73395b3a38ap-997, 0x1.1eb07d88c0dcfp-401,
     0x1.d67567a753ecap-339, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1389e017ac661p-99, 0.0, 0.0,
     0x1.ae82fc318a32dp-949, 0.0, 0x1.b2c4ddbf59fe5p-452, 0x1.81e6b12bec93ep-1019,
     0x1.2c55b2a9dc8ccp-608, 0x1.373127e25d13ap-384, 0.0, 0.0, 0x1.672dbb1af9349p-168,
     0x1.b00921052149ap-832, 0.0, 0x1.8aefb8201865ap-382, 0x1.45b87fb4136c4p-893, 0.0,
     0x1.a87e578744b82p-711, 0.0, 0.0, 0x1.174a604eda1f1p-942, 0x1.ed843e5bd1d19p-457,
     0x1.2fa9d128974a9p-235, 0x1.e4dada9963c85p-205, 0.0, 0x1.83e73833c2efdp-790,
     0x1.203f379fe349cp-575, 0.0, 0x1.8250b37de489p-252, 0x1.fd34aea8053d1p-865, 0.0,
     0.0, 0x1.97a3c0cb217b1p-990, 0x1.1d803d43bbcd3p-514, 0.0, 0x1.499533b294fc5p-458,
     0x1.9d9f80e8d8e88p-254, 0.0, 0x1.32f9a7758b262p-394, 0x1.d0a7596174974p-187, 0.0,
     0.0, 0.0, 0x1.cdd3f4ad63968p-439, 0.0, 0x1.1bbf85dfcae51p-82, 0.0, 0.0,
     0x1.22879fcf69c33p-620, 0x1.bb43cdead39bep-638, 0x1.e1599ea392068p-795, 0.0,
     0x1.f3a76c40a43abp-923, 0.0, 0.0, 0x1.0e7d17448cf54p-702, 0x1.3b3a5586d0a77p-255,
     0x1.e9f3412f15092p-783, 0.0, 0.0, 0x1.3dfe4d837ef8ap-40, 0x1.00c274c9c2984p-801,
     0x1.395de62626c92p-573, 0x1.789f24c75e198p-578, 0x1.bf39b6fcee56fp-942, 0.0, 0.0,
     0.0, 0x1.28c2c8af2a352p-757, 0.0, 0.0, 0x1.8112816d1222bp-711, 0.0,
     0x1.1150c2eeacec3p-491, 0.0, 0.0, 0.0, 0.0, 0x1.d356034b17bf2p-983, 0.0, 0.0,
     0x1.a57b2a6b0a2d5p-353, 0x1.c5bd33e07d845p-196, 0.0, 0x1.eec56a7073953p-840, 0.0,
     0x1.75620f8e688c8p-144, 0.0, 0x1.d2b6612768a67p-429, 0x1.e8171e8f1ea06p-235,
     0x1.869acd157ff36p-108, 0.0, 0.0, 0.0, 0x1.be1f45d4c3914p-578, 0.0, 0.0, 0.0,
     0x1.0586a1076ecf4p-715, 0.0, 0x1.fcb23692da475p-113, 0x1.18da06e545411p-70,
     0x1.df4f0ed5dcd26p-986, 0.0, 0x1.b2cc8509e7a46p-460, 0x1.8a0951ff26462p-980, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a795105a361cbp-87, 0x1.5e39e93a248cep-153,
     0x1.a123e075cfdb5p-453, 0x1.8d3a72c15153ep-238, 0x1.036a681ab812cp-295, 0.0, 0.0,
     0x1.a30e8a4ea26adp-213, 0x1.cb3f03e029666p-349, 0.0, 0.0, 0.0,
     0x1.324c038ad0cecp-358, 0.0, 0x1.b8b46e5db3bd6p-145, 0.0, 0x1.c0972525fc307p-264,
     0.0, 0.0, 0x1.00f462bec8d5ap-124, 0x1.61d180a30e5ccp-219, 0.0, 0.0,
     0x1.98c9e7fa0c20dp-426, 0.0, 0x1.2e4969078eca4p-961, 0.0, 0x1.19e08ae15954cp-546,
     0x1.fd4f95cb0316p-718, 0x1.6295699e41c5ep-470, 0x1.8f929aad1f637p-206,
     0x1.0abf6110a6becp-112, 0.0, 0.0, 0.0, 0x1.4607742deee59p-409,
     0x1.0bcb0a01da809p-724, 0x1.13c4a7fb73b52p-664, 0x1.1c53fe6e6571ep-814, 0.0, 0.0,
     0.0, 0x1.24c9e15fd8ed4p-233, 0x1.fd22f84b9b25cp-296, 0.0, 0x1.75cc3b0d337acp-349,
     0x1.5dcc9fc9a2d6ep-309, 0.0, 0.0, 0x1.501c1a7672ea8p-701, 0x1.06d22a68a6d36p-147,
     0x1.875f03ce4bc81p-491, 0.0, 0x1.be15014f87191p-673, 0x1.57c7226af457p-403, 0.0,
     0x1.61506531b24ap-471, 0x1.4c3467d1bcd64p-220, 0.0, 0.0, 0x1.c9e6ae68b769ep-381,
     0x1.ca04cf398e644p-452, 0.0, 0x1.934aac855bb6p-595, 0.0, 0.0, 0.0,
     0x1.aef5fe209cceap-631, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab007c7a6d6edp-299,
     0x1.d5f67d212c7f1p-342, 0x1.5d70df92891fcp-785, 0.0, 0.0, 0x1.e3c86ebe6019ap-251,
     0x1.67153a7ad9dfp-892, 0.0, 0.0, 0.0, 0.0, 0x1.8b894dca4e9b3p-528, 0.0,
     0x1.d5960d0800f85p-756, 0x1.4561b1c04d602p-810, 0x1.16a4d10fe9addp-298, 0.0,
     0x1.acde987700176p-256, 0x1.bba40774d2738p-611, 0.0, 0x1.b0eeea8f35b46p-740, 0.0,
     0x1.662f203dd4b6ap-461, 0x1.de9096e02cb2ep-792, 0.0, 0.0, 0x1.52e95b63288b7p-940,
     0.0, 0x1.927db70ff519ep-544, 0.0, 0x1.e3f4e3c97675fp-568, 0.0,
     0x1.ad515fcbff1acp-14, 0.0, 0.0, 0.0, 0x1.19bfe23015549p-206,
     0x1.34ff6f2f00565p-44, 0.0, 0x1.4de489d2aa771p-526, 0x1.9e33b55ccf0fdp-640, 0.0,
     0.0, 0x1.540ffa2ef2943p-327, 0x1.8523d37a3d8e4p-328, 0.0, 0.0, 0.0, 0.0,
     0x1.f1cac5ed1d67ep-213, 0x1.6488d11a4eeap-475, 0x1.a3810079935ddp-2,
     0x1.70cb75520bc6dp-900, 0x1.18e80d0f0e188p-189, 0.0, 0x1.a607ddc81e2d6p-309, 0.0,
     0x1.55250c0832c5bp-29, 0x1.60bc440f4e7a4p-821, 0.0, 0x1.44b2d0a5ff9a5p-254,
     0x1.b32b1380cc079p-764, 0.0, 0.0, 0x1.b268e6822b9d5p-405, 0x1.65ac6b9dcac7bp-326,
     0x1.7d22c1381d64cp-383, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d75ad4e255801p-969,
     0x1.7392582086baap-304, 0.0, 0x1.84e59b832c4a9p-1007, 0x1.05671cf0024bbp-793,
     0x1.b91c422bfd1bp-753, 0x1.a075b0477f7f8p-929, 0.0, 0x1.8b47268ccd161p-644, 0.0,
     0x1.7b20d99da9955p-822, 0x1.06516fae24066p-633, 0.0, 0.0,
     0x1.5a66388e1b4e3p-1005, 0x1.ec8e6f2eb1f14p-832, 0.0, 0.0,
     0x1.7a33ba95da25bp-630, 0.0, 0.0, 0x1.528994e2bea86p-248, 0x1.d147113234ef9p-824,
     0.0, 0x1.623d49a2542b6p-460, 0x1.c7dddf32a6763p-934, 0x1.673b11016451dp-625, 0.0,
     0.0, 0x1.79a1f59fb0f3cp-163, 0.0, 0x1.36cdae0e9bafep-485, 0x1.6a6a69c3c6803p-547,
     0x1.d69756df6ed0fp-724, 0x1.320f076ffee49p-422, 0.0, 0x1.4ecb775f3c9e4p-593,
     0x1.61fc4e35c550cp-57, 0x1.d072ae89ad76dp-179, 0.0, 0.0, 0x1.63685d715fbf6p-493,
     0.0, 0x1.b3d3bf72b3a7bp-637, 0.0, 0x1.4f6bfef728b77p-975, 0x1.70c2fed0d7ac7p-85,
     0x1.5a88c4bbb466bp-37, 0x1.217f0eed3bd9ap-967, 0.0, 0x1.a3d5ff70e9051p-648,
     0x1.7913f0213e479p-508, 0.0, 0.0, 0x1.ebc426ab54613p-321, 0x1.a40d6549355dfp-404,
     0.0, 0x1.96d081a93840bp-423, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b9e12e48d5c35p-1002, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39016cfb6013ap-469,
     0x1.55d85ed3f2146p-822, 0.0, 0x1.d1ae80aeea265p-618, 0.0, 0.0,
     0x1.bc2627a3d21eap-178, 0.0, 0x1.4d29c2077792ep-78, 0x1.866f3f7a93f69p-110, 0.0,
     0x1.a8185fe4e413ap-242, 0.0, 0x1.f5791c29fa4f5p-719, 0.0, 0x1.35ff543dcebf3p-948,
     0x1.40fb625111cp-21, 0.0, 0x1.76d76f9894633p-276, 0.0, 0x1.827879fe3955p-343,
     0x1.30762a136d82p-321, 0x1.9d75d1effc94cp-1007, 0.0, 0x1.cdc28612059e8p-887,
     0x1.25249774c6b92p-932, 0x1.5aa4e63136475p-181, 0.0, 0x1.29bdf615a14cap-564,
     0x1.6d152a4c5e205p-286, 0x1.e9b8d854498fbp-491, 0x1.ae6879ce8d83fp-209, 0.0, 0.0,
     0x1.6e6d944c943b8p-320, 0x1.33e4d0740e254p-238, 0x1.63d14fbfe1d32p-63,
     0x1.e8c831c3b4812p-631, 0.0, 0.0, 0.0, 0x1.e1671d310d771p-461,
     0x1.cbddb42210973p-91, 0.0, 0.0, 0.0, 0.0, 0x1.011b8acfc7286p-82, 0.0, 0.0,
     0x1.33eb94b8fafb2p-317, 0x1.76ba33fe8f32bp-753, 0x1.e7b4d4b87dbd9p-852, 0.0, 0.0,
     0x1.8530ee386d51bp-652, 0.0, 0x1.3a981f10898p-408, 0x1.ba86ea2ca001bp-315, 0.0,
     0x1.921fa78c16d3cp-757, 0.0, 0x1.12704091dcdfap-26, 0x1.96a29d58cc89dp-172, 0.0,
     0.0, 0x1.627d8d8bdbaecp-436, 0x1.ecc5db1f9f2fep-175, 0x1.fd10c56a62ad7p-335,
     0x1.c83bad3b2b47p-563, 0x1.59c2e4e5df331p-463, 0x1.ccedd6d5cb56p-476,
     0x1.bad3563ff5737p-22, 0x1.21f106683d68ap-132, 0x1.e01606ebc18e2p-11,
     0x1.6b7d3e791a1e1p-940, 0x1.faa71ced7266ap-480, 0x1.1df93e4e49ff4p-839, 0.0,
     0x1.91448457826bep-59, 0x1.8edefd18f621fp-987, 0.0, 0.0, 0x1.2890dff302abep-782,
     0.0, 0x1.0ab4f3a3958dap-536, 0x1.14ba63ae0eed6p-42, 0.0, 0x1.af7155d624c7dp-153,
     0.0, 0x1.c1b413e995c99p-474, 0x1.4a740b4a8d935p-222, 0x1.72a28c20ce73cp-8, 0.0,
     0x1.2946d962d9328p-437, 0x1.507fe27409ce3p-795, 0.0, 0x1.26a8104464b58p-741,
     0x1.a58314c242ab7p-173, 0x1.59a70d10b58a1p-919, 0x1.b71affc36537ep-833, 0.0,
     0x1.a4a17b38ddcap-101, 0.0, 0x1.96ab3cff03637p-735, 0.0, 0x1.8fe50b57190e4p-666,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc35250bc1ca1p-846, 0.0,
     0x1.de930778e6d07p-120, 0.0, 0x1.905fe205bce5fp-347, 0x1.9e6ed0d346c52p-723, 0.0,
     0.0, 0x1.30cb30b463c07p-509, 0x1.b72f478d2e8b9p-1012, 0x1.d4b351744113bp-330,
     0.0, 0x1.3bb352c2ed60ep-721, 0x1.7dc4c281a2145p-266, 0x1.19df214d75dbbp-804,
     0x1.43bfe8bc75ab3p-976, 0.0, 0.0, 0.0, 0.0, 0x1.7bba3290ddfcbp-319, 0.0, 0.0,
     0.0, 0x1.5cec6062ea28ep-568, 0.0, 0.0, 0.0, 0x1.3c49b60853457p-183, 0.0, 0.0,
     0.0, 0x1.20c995d2000e6p-378, 0x1.b58d2a6448345p-267, 0x1.3367108e194cep-1001,
     0.0, 0x1.856f6954d65cep-512, 0.0, 0x1.bfb34038aac62p-858, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7277d3f0c6d3p-741, 0x1.dc87ea7dbb6edp-774, 0.0, 0.0,
     0x1.284af344195aap-931, 0x1.220616e18f4e8p-233, 0x1.ff39763c87382p-508, 0.0,
     0x1.d58f787def8b7p-356, 0x1.da2daf3fb2147p-988, 0.0, 0x1.965e2a336df54p-290, 0.0,
     0.0, 0.0, 0.0, 0x1.c8347bc86008bp-412, 0.0, 0x1.9bb645c9c9163p-80, 0.0, 0.0, 0.0,
     0x1.72b0bdee3a87dp-750, 0x1.49fa61610d8e1p-814, 0.0, 0x1.2bde36dd2ce7bp-374, 0.0,
     0x1.adf02891e4a2cp-51, 0x1.07879314dee8ep-295, 0.0, 0x1.c6cf69aa5ef36p-405, 0.0,
     0x1.3c4e49cdfc1c3p-884, 0x1.14d0b330770c8p-585, 0x1.9ff00d33c6367p-307,
     0x1.76fe257d1d9dep-394, 0x1.6ad4691c7eda2p-937, 0.0, 0x1.0ac2e5ea4cd97p-791, 0.0,
     0.0, 0x1.be0e01bcc634p-692, 0x1.f98d276f0c344p-688, 0.0, 0x1.dc9406925e203p-643
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
            tmp1 = Sleef_roundd2_avx2128(tmp0);
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
    printf("Sleef_roundd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_roundd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
