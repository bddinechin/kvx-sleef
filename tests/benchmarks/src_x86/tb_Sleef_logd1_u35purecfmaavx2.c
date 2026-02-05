/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd1_u35purecfma.c --function Sleef_logd1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.5ddd81387a22p-474, 0x1.793d9ace603c2p-199, 0.0, 0.0,
     0x1.0ac5f89b9a0e9p-26, 0x1.5a07684211a45p-332, 0x1.469eacb04f7dep-412, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ce4d7d7315833p-327, 0x1.fde7b020478c9p-812,
     0x1.9ef1e03af292ap-458, 0.0, 0x1.7c9a5c66f8fadp-900, 0.0, 0.0, 0.0, 0.0,
     0x1.d0717a296452dp-604, 0x1.8a8df16981595p-992, 0x1.dfebfd5e680d4p-896, 0.0, 0.0,
     0.0, 0x1.8bb8f27898689p-534, 0x1.c2810b427249p-778, 0x1.37e27891dc538p-49,
     0x1.539840ab0e6d7p-731, 0x1.a2d862d4a85e8p-364, 0x1.97b05a9924601p-513, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2e51bf71fe26ap-248, 0x1.3c52c91b69d81p-300, 0.0,
     0x1.5cc54458a8fbp-216, 0.0, 0x1.b68c75fd1a13dp-547, 0x1.24c67c70b7f2ap-35, 0.0,
     0.0, 0x1.66bfa8f2daebap-779, 0.0, 0.0, 0x1.efce06dfb3cdep-514, 0.0,
     0x1.450e17501ee9dp-187, 0.0, 0x1.a19049ceb5cffp-345, 0.0, 0x1.b87e10b60d04p-569,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c15a40f925743p-982, 0.0, 0x1.16f63c79e5e8fp-246,
     0.0, 0x1.a4758835462b2p-756, 0x1.b8ceb4f4dbe3bp-328, 0.0, 0x1.5b4f2c3cf84bcp-653,
     0.0, 0x1.efaa1948733dap-395, 0.0, 0x1.ef5b4954370cdp-889, 0x1.ef76585147f72p-277,
     0x1.c3b3ec74539abp-363, 0x1.5d0e69684f161p-710, 0.0, 0x1.ac1a0c3fb9f1fp-566,
     0x1.7bb797d9025b2p-643, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7b0bd401ca4dp-406,
     0x1.fb39d8633941fp-897, 0x1.3140ab6fa83f7p-131, 0x1.9c6b0dcdaa8d3p-239, 0.0,
     0x1.43e637d5ba464p-887, 0x1.a7ec4c48911p-578, 0x1.8a904afdac49dp-397,
     0x1.e9f8e8ba714b2p-886, 0x1.4605d3d9f35bap-617, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.643fbb1cdc733p-682, 0x1.ef78237843aaep-459, 0.0, 0x1.3d85846304aa8p-66, 0.0,
     0.0, 0.0, 0x1.bc72cd769ba8bp-521, 0.0, 0x1.c85dec7426695p-882, 0.0, 0.0,
     0x1.fb8180dfe5582p-563, 0.0, 0.0, 0x1.7629da5f56a88p-954, 0.0,
     0x1.2569415b6909dp-545, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d24a17e09b89p-411, 0.0,
     0x1.9c0e35583d91fp-465, 0.0, 0.0, 0x1.f302d2cb08ac8p-688, 0.0, 0.0, 0.0, 0.0,
     0x1.5db204009019cp-834, 0.0, 0x1.cf2f7b591fe07p-449, 0x1.57ac6fd5baac4p-992, 0.0,
     0x1.7fdd1e53b40afp-917, 0x1.582b1e4723f94p-33, 0.0, 0.0, 0x1.318e25da706cap-213,
     0.0, 0.0, 0x1.57695ed413157p-629, 0x1.45666866768a9p-571, 0.0,
     0x1.8fe5baced976ap-105, 0x1.4b4771dd7ac6cp-948, 0x1.60385591d0fe5p-287, 0.0, 0.0,
     0x1.cc59897d548e3p-260, 0x1.2168768568d64p-831, 0.0, 0.0, 0.0, 0.0,
     0x1.0d29c7f9869bfp-824, 0x1.9e77f5f7bc47bp-294, 0.0, 0.0, 0.0,
     0x1.f09356a42ecbep-71, 0x1.137cd9a29fdf4p-713, 0.0, 0.0, 0x1.77ebba67dc842p-351,
     0.0, 0x1.5e78964fefbfbp-651, 0x1.4eb51fce48d1fp-354, 0x1.b6bc9bc8e6a09p-384,
     0x1.5efaddc16a4cp-853, 0x1.02e90a58cbe5ep-187, 0x1.9853aff07ecfap-406,
     0x1.1e33bbcdfbcedp-324, 0x1.5594e411842f3p-4, 0x1.71b0c67fce72dp-346, 0.0, 0.0,
     0x1.b6feb5bda4c57p-976, 0x1.707c05a02c367p-461, 0x1.e1b3b2a96b399p-463, 0.0, 0.0,
     0x1.c8d6f559555b1p-182, 0.0, 0x1.8595d4cb56d2ep-690, 0x1.95da70f68235p-22, 0.0,
     0x1.cc90916a28121p-553, 0.0, 0.0, 0x1.4394c2a24ca1ap-63, 0.0,
     0x1.0b8841fd4a82fp-1009, 0x1p0, 0x1.1e66be0df6d68p-103, 0.0, 0.0,
     0x1.ec55d320be42ep-336, 0x1.1d73e9d1f23dap-334, 0.0, 0.0, 0x1.7b0f40d5624c1p-708,
     0x1.37ec9f0340acdp-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9e6dc2af3c99p-370,
     0.0, 0x1.9aa801992666ap-1006, 0x1.4de27becea1bdp-451, 0x1.0a53027ded6fbp-823,
     0.0, 0x1.3a2d0d33e0f1fp-316, 0.0, 0.0, 0x1.abf17097b2884p-924, 0.0, 0.0,
     0x1.457a16fdb4d77p-160, 0x1.15b3c992a5135p-965, 0.0, 0x1.a6cd279da01dap-730, 0.0,
     0x1.c7255ba5d0e39p-378, 0x1.1bc4d5b2d183fp-142, 0x1.5ebf7496a77d5p-622, 0.0,
     0x1.e6327d2aa6b14p-767, 0.0, 0.0, 0x1.0cf348ba0a135p-735, 0x1.104070a3d5134p-99,
     0x1.a74fb21833cdcp-107, 0x1.027aeb951e552p-1001, 0.0, 0x1.40b8a5f884bbfp-452,
     0.0, 0x1.a0f28765fbd51p-237, 0x1.9ce355c45e9fp-485, 0.0, 0x1.5e750c9f32af2p-113,
     0.0, 0x1.caabde9f5a7a5p-394, 0x1.9617b7a915a36p-824, 0.0, 0.0, 0.0, 0.0,
     0x1.a28b1879c4622p-394, 0.0, 0.0, 0x1.bf9b1b07afedp-1006, 0.0,
     0x1.7df5e49af9a25p-670, 0x1.f449d54b6d78ap-711, 0x1.69287c421aebdp-968,
     0x1.457cea6d9548ep-114, 0.0, 0x1.527600b140681p-328, 0.0, 0.0,
     0x1.89a22317c865cp-165, 0x1.0961d2bcaec48p-555, 0.0, 0x1.24fd82d4b4c1ep-967, 0.0,
     0x1.bc779d7174528p-619, 0x1.98f26ff8b1db5p-235, 0.0, 0x1.39ccb8d7ce3b8p-546, 0.0,
     0x1.0ec925fa81fbfp-159, 0x1.fe44a06d46ba9p-709, 0.0, 0.0, 0x1.5ec9079da6f51p-408,
     0x1.fb812a36e1ce3p-544, 0.0, 0x1.f7692612ea6a2p-662, 0.0, 0x1.f686bf11a0541p-405,
     0.0, 0x1.bb80758258978p-813, 0.0, 0x1.c10c04af9eb95p-585, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8141dec9de63ep-967, 0.0, 0.0,
     0x1.3dfaae791b9cdp-672, 0x1.2314e248abf67p-408, 0.0, 0.0, 0.0, 0.0,
     0x1.561878d2332a8p-235, 0.0, 0.0, 0.0, 0x1.14d4881e1e9b9p-800,
     0x1.d61c7a2ae5df6p-486, 0.0, 0.0, 0x1.264909ec95b89p-374, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.31eab59adeea3p-308, 0.0, 0.0, 0x1.c58d7471d9b0dp-183,
     0x1.016943892995cp-211, 0x1.2d3c749005a9p-722, 0.0, 0.0, 0.0, 0.0,
     0x1.f394a8f07646ap-904, 0x1.2219b055ee7f3p-574, 0x1.60dd23a7707abp-349,
     0x1.905a8ec3497e6p-447, 0.0, 0.0, 0x1.943350ea9323cp-211, 0x1.31d6dec40c37ep-523,
     0x1.2af79c3855419p-491, 0x1.446d05499600ap-517, 0.0, 0.0, 0.0,
     0x1.2110494a5f6d8p-582, 0.0, 0.0, 0x1.eee32af7b2436p-391, 0x1.ea540b0e5c054p-392,
     0.0, 0x1.ea1682fa7edeep-232, 0x1.5389cf742ab0dp-300, 0x1.6e95ecc8b5fa2p-452, 0.0,
     0.0, 0.0, 0x1.40326e64b233fp-853, 0x1.e858d7c0d9306p-835, 0.0, 0.0, 0.0,
     0x1.794671919a36ap-892, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.987653e15ac87p-190, 0.0,
     0.0, 0x1.f30688d2a0efdp-984, 0.0, 0x1.27292ea3d76d9p-813, 0x1.fdb780d0ac917p-941,
     0x1.fa4e99889f793p-395, 0x1.9808ae513987dp-645, 0x1.60a74c6f1efp-693,
     0x1.f8ec744886aa4p-523, 0x1.18f9a36ae5a54p-675, 0x1.340bf760c6b6cp-988,
     0x1.52c4b4cf15076p-44, 0x1.4f4cbbb5d17b6p-236, 0.0, 0.0, 0.0,
     0x1.0fed03699afedp-165, 0x1.bf878e51d9cep-91, 0x1.556ff2e8866dep-124,
     0x1.556a977e67301p-570, 0x1.320ca1746df6p-948, 0.0, 0.0, 0x1.d1a2b25060cd6p-1017,
     0x1.5237817c16a96p-306, 0.0, 0x1.4fdfada6ae0ffp-904, 0x1.bd6ec4eb59c3p-412,
     0x1.d343d569d9a18p-105, 0x1.0e2b102a4e799p-625, 0.0, 0.0, 0x1.e7ab464119414p-364,
     0x1.1d33f1c56cc84p-472, 0.0, 0x1.b0d5c88826b75p-22, 0x1.8394efa5a4f36p-251,
     0x1.a61c78d54fcb4p-511, 0.0, 0x1.eccce3f6be1fdp-223, 0x1.650bc78f1b506p-541,
     0x1.bf38df1a3ffd8p-830, 0x1.4cbc3a3630a1dp-741, 0x1.3f6cdeb321e9ep-616, 0.0,
     0x1.e069891024876p-562, 0x1.d1345b061ef18p-355, 0x1.11838da3905bfp-972,
     0x1.14bcfec4d1f6cp-641, 0x1.9d5c5a6041ec1p-36, 0.0, 0.0, 0x1.06544f597a25p-139,
     0.0, 0x1.aa07d8acc5f4cp-924, 0x1.920626623806bp-647, 0.0, 0.0,
     0x1.bb3da35370a77p-565, 0.0, 0.0, 0.0, 0.0, 0x1.48ddc49989575p-965,
     0x1.9361956da665dp-2, 0x1.4028881db67f4p-174, 0.0, 0x1.ec0a98bb2d998p-674,
     0x1.b1711f904f7a7p-67, 0.0, 0.0, 0.0, 0x1.de8bd8e6f0d1fp-270, 0.0, 0.0, 0.0,
     0x1.fff490fe17dd1p-880, 0x1.54aab806346eap-866, 0.0, 0x1.5ee6a7b7e3686p-686, 0.0,
     0.0, 0.0, 0.0, 0x1.14eacb4296d41p-976, 0.0, 0x1.a262e3f969edfp-83,
     0x1.09c183b5cc579p-726, 0.0, 0x1.5e1be0c610207p-734, 0.0, 0x1.fe4f541415abep-77,
     0.0, 0x1.d892879e39d22p-420, 0.0, 0.0, 0.0, 0x1.6eb6e279b5453p-1005,
     0x1.cb69450f090c6p-588, 0x1.dd10affa508f1p-390, 0x1.1900051bad646p-910, 0.0,
     0x1.a4ac3196b3344p-537, 0x1.89a2196f2012cp-563, 0.0, 0.0, 0x1.bd3f68f0a9849p-785,
     0x1.1ee1b6814ae6ap-885, 0x1.5cd734f84f2fap-945, 0.0, 0.0, 0.0,
     0x1.1e258bcff3addp-428, 0x1.a83a9e082430ap-451, 0x1.292ae293228fdp-315, 0.0,
     0x1.fef0175d03291p-293, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.018ca373f948ep-318, 0.0, 0x1.d715b2cfd0496p-784, 0x1.5c09a6b6ba158p-665, 0.0,
     0.0, 0x1.7a0997b032024p-519, 0x1.208ee0f284ca2p-207, 0x1.ce3492b76e2fbp-767, 0.0,
     0x1.fb5316d504da5p-151, 0.0, 0x1.128ae3d2cb5e5p-251, 0.0, 0x1.d0174964bc8c1p-999,
     0x1.4f2a6ea04c803p-274, 0.0, 0x1.8f92f949fb03dp-545, 0x1.3dba544f70b55p-738, 0.0,
     0x1.c5d440ca79fc4p-802, 0x1.aa676fe3ef243p-538, 0.0, 0x1.8b3aa0238aac6p-399, 0.0,
     0x1.1e1fc8dbc7b07p-705, 0.0, 0x1.085b87a7f890bp-252, 0.0, 0x1.0de795fc55d61p-727,
     0x1.55c1d8b4a4625p-644, 0x1.7d7057f5d9aep-718, 0x1.9e38b80f00b6p-167, 0.0,
     0x1.51d188dfc67ffp-392, 0.0, 0.0, 0x1.f924af47be995p-890, 0x1.e422a84974c49p-119,
     0.0, 0x1.e2ee15013d12fp-855, 0.0, 0x1.b49e05c5b90a7p-840, 0.0,
     0x1.2d63728d636c1p-350, 0x1.9dbfd505c9491p-539, 0.0, 0x1.dc998792d86d1p-925, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.727a4e39264b1p-42, 0.0, 0x1.d80223b209513p-225, 0.0,
     0.0, 0x1.ce6393dd0ebc7p-975, 0.0, 0x1.19aa30bb08c58p-250, 0x1.4aa195c8fa49cp-828,
     0.0, 0x1.107375aed931dp-405, 0.0, 0x1.20d1a5689258ap-881, 0.0,
     0x1.8d3b10444fd3fp-650, 0x1.d206cc0031c3p-148, 0x1.139737bd218cep-532, 0.0, 0.0,
     0.0, 0x1.e687a9adbcf99p-768, 0.0, 0x1.076361eace932p-697, 0x1.d4ed0b87bb8b9p-850,
     0.0, 0.0, 0.0, 0.0, 0x1.640a0eb07624p-993, 0.0, 0.0, 0.0, 0.0,
     0x1.dc4dbc2e6392dp-835, 0x1.98110e8fe1a5bp-87, 0.0, 0x1.880d0e21cc681p-154, 0.0,
     0.0, 0x1.e6c99adf2fe3dp-235, 0.0, 0x1.8fa511c10d8e3p-321, 0x1.be83af3821f0bp-590,
     0x1.d4f72e6f2fe72p-58, 0.0, 0.0, 0.0, 0x1.41aad81d5c10dp-739,
     0x1.6d8c6f87c81e6p-114, 0.0, 0.0, 0x1.f86341e9f79b7p-415, 0.0,
     0x1.65babe526e101p-961, 0.0, 0.0, 0.0, 0.0, 0x1.2ac9e90be8425p-651,
     0x1.fea63ac3c7b8fp-494, 0x1.cf516f06adc74p-311, 0.0, 0.0, 0x1.4966d11d3ed5dp-595,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d0b52ae8d078fp-107, 0.0, 0.0, 0.0,
     0x1.37fd33a1f5cb9p-175, 0.0, 0x1.6eb690e52ad2ep-618, 0x1.54221f3a470bep-639, 0.0,
     0x1.5e989fa39b877p-911, 0x1.db4a8d657a8b7p-329, 0x1.8a5814c44a78p-74, 0.0,
     0x1.a670744eb4642p-835, 0x1.32b2dd780459dp-948, 0.0, 0x1.e52a1d3bb5d8cp-670,
     0x1.b2d3852ee1d32p-677, 0.0, 0.0, 0x1.d9a1d72560bd6p-814, 0.0, 0.0,
     0x1.47a4719692517p-500, 0x1.2c8e8f349ba89p-596, 0.0, 0.0, 0x1.2c3768367c11p-218,
     0x1.e2bc1589b8b91p-248, 0.0, 0x1.2f8f9f0513207p-712, 0x1.f9e3c049efcbcp-923, 0.0,
     0.0, 0.0, 0x1.932f6ac406743p-2, 0.0, 0x1.012b668985accp-800, 0.0,
     0x1.34e60b42517f1p-866, 0x1.9252a72337f4p-739, 0.0, 0x1.b7addfa6d3225p-837,
     0x1.00a7c335bf4e6p-731, 0.0, 0x1.6a45139475de8p-632, 0.0, 0x1.5d052f99374ddp-40,
     0x1.0cfe1b2e3a27dp-297, 0.0, 0.0, 0.0, 0.0, 0x1.ffea00b1b2bbbp-647, 0.0, 0.0,
     0x1.01c370cf4e3e7p-335, 0x1.49c48f4ef7122p-376, 0.0, 0x1.9f1f5766bedc6p-845,
     0x1.2b4de286193a6p-904, 0.0, 0x1.4832a67c5f265p-857, 0x1.f7b2fc70b1a29p-840, 0.0,
     0x1.0887bffdb9e01p-625, 0.0, 0x1.384af4ee2f1e9p-938, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fe0b78d505104p-911, 0.0, 0x1.2fb69e15cece5p-838, 0.0, 0x1.e3faaecb7080bp-650,
     0x1.09a1887d45b75p-853, 0x1.6b9e77933012ep-491, 0x1.efda49b60a884p-890,
     0x1.bc078b98aec4dp-139, 0x1.50822b4752601p-649, 0x1.c998997973594p-298, 0.0,
     0x1.b73bfcd5139f4p-264, 0.0, 0x1.19ae90974095ep-193, 0x1.41b85dbf45977p-581, 0.0,
     0x1.d4de0a85b0551p-473, 0x1.90f720b6ba72cp-474, 0.0, 0x1.7a3e5348585edp-672, 0.0,
     0.0, 0x1.6b3be213a030fp-257, 0x1.63c8682367688p-122, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14bf23b33286dp-730, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e361940097babp-930,
     0x1.5ba46435e3cb4p-430, 0.0, 0.0, 0x1.df48f54cbcc56p-699, 0.0, 0.0,
     0x1.417ea5c74cdbdp-486, 0.0, 0x1.a8692e01c4674p-642, 0x1.d6dbe5b2b3417p-471, 0.0,
     0.0, 0x1.6a6599694b0abp-521, 0x1.9181c85ae6391p-245, 0x1.4776dfe2a1513p-708,
     0x1.d82d3efcd1c98p-695, 0.0, 0x1.72482af2a8167p-506, 0x1.3bb764e482f21p-81,
     0x1.7a1ba501b456ap-761, 0.0, 0x1.901da638b5965p-99, 0x1.d2d76462e70efp-509,
     0x1.69d69cc0cf9d2p-492, 0x1.d76dbef81655cp-460, 0.0, 0x1.2c44fcc26da39p-1017,
     0.0, 0.0, 0x1.795efa0b03dep-647, 0.0, 0x1.49948dd78d938p-602, 0.0, 0.0,
     0x1.b2407aead6ce2p-181, 0.0, 0x1.c7149fc53005bp-75, 0x1.427d34a648a22p-285,
     0x1.89f3c69213533p-502, 0x1.95b781ebdbcecp-166, 0x1.4e78242f8f75bp-731, 0.0, 0.0,
     0.0, 0x1.3261ff669cd03p-799, 0.0, 0x1.9f7c77fa93561p-695, 0.0, 0.0,
     0x1.e7f792b8f85d5p-73, 0x1.c2dbdfa58e68dp-692, 0.0, 0x1.17baf0afe2112p-62, 0.0,
     0x1.5b29a4d85ca8fp-402, 0x1.8150b83a1dc2bp-518, 0.0, 0x1.7094c411844bp-22,
     0x1.43418e0d014ap-53, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a74ee070e2b71p-852,
     0x1.ef42857d67524p-576, 0.0, 0.0, 0x1.176b4ae18dec3p-508, 0x1.aa8ea9dd67b49p-660,
     0.0, 0x1.62be328af2ef1p-817, 0.0, 0.0, 0x1.990eb47db2398p-721, 0.0,
     0x1.0cac435c02705p-228, 0.0, 0.0, 0.0, 0x1.5bbd65d59bdf4p-145,
     0x1.e97da7c1c8b06p-664, 0.0, 0x1.5ccb33ebfcb69p-151, 0x1.dbba8e333dc43p-428, 0.0,
     0x1.5c9b608ac9d78p-357, 0.0, 0x1.7c6608a52785p-357, 0.0, 0x1.577ff2e665cf4p-989,
     0.0, 0x1.d1935197eaf92p-982, 0x1.ca266c8bd4d5p-302, 0.0, 0.0,
     0x1.749400f8dcaa5p-463, 0x1.f8e1c59c2554dp-142, 0.0, 0.0, 0.0,
     0x1.5087adb3be775p-648, 0x1.b0a2295c4d43ep-149, 0.0, 0x1.207a62863bbdp-1009,
     0x1.646e2267f3dc5p-741, 0.0, 0x1.27603c9783454p-969, 0x1.dcb6e602a5744p-794, 0.0,
     0.0, 0.0, 0x1.9c78ce06f4f39p-76, 0x1.5af9c72e210d5p-102, 0.0,
     0x1.143a8a9fed57p-49, 0x1.f171ec9abd7ep-521, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f8a5bb8564e5p-957, 0x1.953b46e77e27bp-667, 0x1.ab2bf2a757ebep-688, 0.0,
     0x1.a6ed7f8703ef1p-927, 0.0, 0.0, 0.0, 0.0, 0x1.0cea7ef25aa91p-626, 0.0, 0.0,
     0x1.4768b9f0f19bdp-983, 0.0, 0.0, 0.0, 0x1.5b6aa8b32b491p-572,
     0x1.1a788d6441f6ep-568, 0x1.479f73cc3679bp-617, 0x1.cf747c17ac14fp-393,
     0x1.8403ca34e787cp-146, 0.0, 0x1.a2c0ff1fd4cbcp-431, 0.0, 0x1.7014f39336353p-310,
     0x1.c241269036eabp-980, 0x1.0a5c6528dcc1dp-307, 0x1.330cc30c6a0d2p-28, 0.0,
     0x1.d5f7418a61e93p-390, 0x1.1e4698253026ap-683, 0.0, 0.0, 0x1.faa477e75579bp-812,
     0.0, 0.0, 0.0, 0x1.c54a6780b60fbp-246, 0x1.15af333d3f1d8p-49, 0.0,
     0x1.0cded23ece6c9p-786, 0.0, 0x1.c57547b7e4955p-403, 0.0, 0.0,
     0x1.9e46b78af4eb2p-284, 0x1.eda17ad6c98a8p-437, 0x1.121821a92270ap-401,
     0x1.40edbc23bfac6p-216, 0.0, 0.0, 0.0, 0x1.c5a46b4c1a662p-959, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30e1190798223p-968,
     0x1.c176f6d979d05p-497, 0.0, 0x1.ca5233c87c2a8p-271, 0.0, 0.0, 0.0,
     0x1.9ebe1f784709dp-342, 0x1.1bca522569d03p-420, 0x1.0e6401cb4da3dp-400, 0.0,
     0x1.ee86e6f17ce62p-542, 0x1.22a9b840abe86p-825, 0.0, 0x1.83409b87ba429p-510,
     0x1.8566f86d5c8aep-858, 0.0, 0x1.1a69cbd948e6bp-462, 0x1.31676d3348f87p-183,
     0x1.c9c693c073051p-597, 0x1.5cc1f1c9a5933p-521, 0x1.5eb6a6b7aca1dp-1000,
     0x1.713608a64ffdap-428, 0.0, 0.0, 0.0, 0x1.9910937ae4761p-233, 0.0, 0.0,
     0x1.35d782003b47fp-109, 0x1.dafb44310e0d5p-841, 0x1.efba5f1ee2665p-138, 0.0,
     0x1.826e5cb352aa7p-919, 0.0, 0.0, 0.0, 0x1.2a217e5118f79p-946, 0.0, 0.0, 0.0,
     0.0, 0x1.f30b68519b507p-474, 0.0, 0x1.dc55da39f499ep-826, 0.0, 0.0, 0.0,
     0x1.fcd97ef03cf01p-1013, 0.0, 0x1.7ac45f56d472bp-612, 0x1.e2b7df4952965p-596,
     0.0, 0.0, 0x1.76e03015d3e76p-156, 0.0, 0x1.6761cc9de5f5cp-548, 0.0,
     0x1.f156589af4c4ap-817, 0.0, 0x1.0aa033c997501p-272, 0.0, 0x1.e9344694ab51cp-525,
     0x1.5ab94bd6e95b3p-65, 0x1.db032720ab7f5p-1022, 0x1.6b505aac44b9fp-455,
     0x1.9743f98a54e64p-767, 0.0, 0x1.ab1068dcfd4b1p-623, 0.0, 0.0,
     0x1.68b6b6259e71bp-681, 0x1.fd140e7c68fbap-393, 0.0, 0x1.6a619426c6a64p-119
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
            tmp1 = Sleef_logd1_u35purecfma(tmp0);
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
    printf("Sleef_logd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logd1_u35purecfma bench acc %la\n", global_bench_acc);
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
