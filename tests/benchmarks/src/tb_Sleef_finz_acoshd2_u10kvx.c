/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshd2_u10kvx.c --function \
 *     Sleef_finz_acoshd2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.54223313cf18cp-869, 0x1.2bf3c5eeefca9p-158, 0.0, 0x1.34cff21c91e5p-701,
     0.0, 0x1.fa5b4586d524fp-38, 0x1.e1ff21dc1c4c3p-896, 0.0, 0x1.2e9f5525554f3p-585,
     0.0, 0.0, 0x1.c6ff22a48788dp-664, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d20174c91c84cp-709, 0.0, 0x1.9663357b941a6p-1017, 0.0,
     0x1.28278f6c90bd1p-1016, 0x1.6dee6711daf3ap-101, 0.0, 0x1.3366fce65051p-106,
     0x1.c2ff64e2ef30dp-788, 0x1.b43f058250cfp-116, 0x1.e79cf76e1b195p-271, 0.0, 0.0,
     0.0, 0x1.33bc7ad0f07a2p-719, 0x1.a58ed50710dd4p-643, 0x1.82bbfce5194cap-670,
     0x1.33885d8251796p-870, 0.0, 0x1.be25e01825475p-477, 0.0, 0x1.7610a2678688fp-484,
     0x1.636f98151d852p-815, 0.0, 0.0, 0x1.eb504431a3cebp-332, 0.0, 0.0,
     0x1.d35c013d12689p-805, 0.0, 0x1.1ebe8dc0b3161p-1, 0x1.4a6264a00d6c4p-905,
     0x1.aacc9541408dep-175, 0x1.c9dfd03354d97p-127, 0x1.148ef8a303d88p-255,
     0x1.33b1e6289febbp-248, 0x1.f5d749eaabb96p-1016, 0x1.2b9241ba46e1bp-158,
     0x1.72e6d1b0e37bep-387, 0x1.48631bfa3b9bdp-28, 0.0, 0x1.4e5c5916f15dep-116, 0.0,
     0.0, 0x1.c5ec417e85199p-536, 0.0, 0.0, 0.0, 0.0, 0x1.3dd16197e163bp-452,
     0x1.1bcd8879da4ddp-657, 0x1.30ce94324b156p-619, 0x1.35b6aaac3cdd7p-734,
     0x1.05e5c148ce802p-446, 0x1.50b056981c73bp-561, 0x1.0cf71bf344582p-90, 0.0,
     0x1.6127768ecfd1ap-846, 0x1.2c3e178b7f8abp-369, 0x1.a44f55610875dp-282,
     0x1.483f1582620abp-224, 0x1.f8c1dae951536p-804, 0.0, 0x1.941e598b8171dp-435, 0.0,
     0.0, 0x1.9cfd08a7cbdccp-121, 0x1.d5f80f862843ep-373, 0.0, 0x1.fa2ffcc111096p-760,
     0x1.3f3b527c18cc1p-220, 0x1.a8764aa9f2132p-186, 0x1.660e7ff143b32p-310, 0.0, 0.0,
     0x1.00986edce7d62p-945, 0x1.4b5a2f1aa1cacp-937, 0x1.ab5363a1e21abp-920,
     0x1.cddc11e976d06p-6, 0x1.8e4f0851894fap-504, 0.0, 0.0, 0.0, 0.0,
     0x1.97af7df897359p-507, 0x1.70b734d77e8cfp-222, 0.0, 0.0, 0.0, 0.0,
     0x1.8e9236015585cp-462, 0x1.23650d0cc9965p-962, 0x1.bd72752b7cc6dp-203,
     0x1.b21a840d80269p-649, 0x1.ec2d5f27fe423p-362, 0.0, 0.0, 0.0, 0.0,
     0x1.d263a5717374fp-13, 0x1.87055f45da474p-1003, 0x1.ce7fa5cb5a213p-684, 0.0,
     0x1.c749f0c1d6158p-28, 0.0, 0x1.258ad9c30efd2p-163, 0x1.80a9c7adabec3p-1017, 0.0,
     0x1.0b998034a111ep-621, 0.0, 0.0, 0.0, 0x1.4c2791c6705e3p-64, 0.0,
     0x1.700f25279dc8ep-965, 0x1.fdec636321934p-209, 0x1.e580f356d0321p-91, 0.0,
     0x1.86de06ee9f276p-326, 0.0, 0.0, 0.0, 0x1.4c9cf45a8a102p-46,
     0x1.fcd8e0fd3b337p-276, 0x1.31eb554eabb07p-492, 0x1.4d10107743371p-665, 0.0, 0.0,
     0.0, 0x1.0d30aee25765p-415, 0x1.db72e06088c9dp-960, 0x1.f27f59f6b8e5cp-551,
     0x1.59c1d6d72af46p-398, 0.0, 0.0, 0x1.7cfe34838818bp-976, 0.0,
     0x1.d63573fd3a86cp-106, 0.0, 0.0, 0.0, 0x1.89f6f58727c4bp-605,
     0x1.a693928f81e7ep-836, 0x1.12738977ed26bp-851, 0x1.ef7787b4b284dp-386, 0.0,
     0x1.bdb7772cbab92p-1018, 0x1.e64da44fcd06p-799, 0.0, 0x1.aca2e35b895bdp-129,
     0x1.2d329d6fcb0eap-812, 0.0, 0x1.abbe4662d5ad5p-226, 0x1.f38de9f3d3322p-442, 0.0,
     0.0, 0.0, 0.0, 0x1.2bbd35812d1f4p-474, 0.0, 0x1.0f50eb1dec44ep-357, 0.0,
     0x1.32620f607978fp-855, 0.0, 0x1.e651e8b7b902fp-123, 0x1.d22060017d895p-411, 0.0,
     0.0, 0x1.a39c996fd2851p-403, 0.0, 0.0, 0.0, 0x1.40e65f703c343p-416,
     0x1.d5d52f54d6324p-270, 0.0, 0x1.0f99f68141e67p-210, 0x1.02057817f03dcp-226,
     0x1.df747ddfdf003p-672, 0.0, 0.0, 0x1.31d0f83b1a93p-956, 0.0, 0.0,
     0x1.cc7548d0fccd1p-477, 0x1.4943c2905f5d6p-45, 0.0, 0.0, 0x1.202f10a4406edp-173,
     0x1.78e3c9f5233cdp-606, 0.0, 0x1.38a1a7af4ac9dp-155, 0x1.2a330b25d687dp-157,
     0x1.b5576b7b0087ep-863, 0x1.a6cf0c8923d8ep-926, 0.0, 0.0, 0x1.15bd0d3c716dcp-288,
     0x1.6ab00e0eed98ap-954, 0x1.16b9345c49f3cp-444, 0x1.ecd0591c28b8ap-35,
     0x1.20eefef9181b7p-496, 0.0, 0x1.3eb45dbd6f8f7p-616, 0.0, 0.0, 0.0,
     0x1.019dc679ff953p-885, 0.0, 0.0, 0.0, 0.0, 0x1.9389005dcaf51p-732,
     0x1.90cdff8687b11p-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5961b070e92ep-840,
     0.0, 0x1.cb5769f252bb4p-432, 0.0, 0x1.d40827934bb07p-846, 0x1.e59d8b7e22d84p-14,
     0x1.aabbfa1fe8ed7p-590, 0.0, 0x1.118c4aa708b8ep-647, 0.0, 0.0,
     0x1.ec5a999850c64p-803, 0.0, 0.0, 0.0, 0x1.c1fb6f1dfad0dp-347, 0.0,
     0x1.b4bdafd6eabdbp-371, 0x1.f3f69fdf06956p-122, 0x1.c5c9584d30ca2p-514, 0.0,
     0x1.acddd6e6c61cdp-642, 0x1.638829f626855p-721, 0.0, 0.0, 0x1.1c00c65c2a108p-700,
     0x1.a189b781c1f37p-305, 0.0, 0.0, 0.0, 0x1.f964993ed138ep-979, 0.0,
     0x1.d5348ada8803dp-1010, 0.0, 0x1.5112c50410541p-925, 0x1.816c71dd928bfp-753,
     0.0, 0x1.27d8c33c04a1p-97, 0.0, 0x1.b8894e0c0041p-702, 0x1.f270aed7a838fp-1017,
     0x1.aadeccaea606dp-820, 0x1.da8f81ff104ap-636, 0x1.99efa37524743p-181, 0.0, 0.0,
     0x1.b2f27fb5a912bp-514, 0.0, 0.0, 0.0, 0x1.98deb43689095p-934, 0.0,
     0x1.18e105a75f64ep-345, 0x1.8faff8b062c8p-376, 0x1.f5bf4e0c1e0c3p-796,
     0x1.2446469312478p-435, 0.0, 0x1.6365233ec3e96p-803, 0.0, 0.0,
     0x1.bb068bd3550abp-546, 0.0, 0x1.53b81ea6762e4p-177, 0.0, 0.0, 0.0, 0.0,
     0x1.5c9faa55ee76ep-411, 0.0, 0x1.375885c9801e4p-809, 0x1.edb65eb24e987p-903, 0.0,
     0.0, 0x1.2bd97268007bep-218, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.86e783715303dp-864, 0x1.49531d37a30e6p-882, 0.0, 0x1.8daeadd53deb9p-795, 0.0,
     0.0, 0.0, 0x1.cd1c24757b6b8p-113, 0.0, 0x1.775d843458fa1p-354, 0.0,
     0x1.e3078f481c442p-666, 0x1.78d773b9b36d6p-631, 0x1.3f5ba36548a93p-200, 0.0,
     0x1.3369f47f8721p-975, 0x1.fcaae6dc5f148p-595, 0.0, 0x1.cd74379c6a0b3p-849, 0.0,
     0x1.81d0aadb50058p-712, 0.0, 0x1.6456942073e26p-590, 0.0, 0x1.182be785dae6cp-943,
     0x1.04c87c20252cep-120, 0x1.94220bb384f98p-287, 0.0, 0x1.c0a253c02f803p-707, 0.0,
     0.0, 0x1.11b3b2c0688c2p-876, 0x1.c445a90c6b0fep-793, 0x1.054f80542b693p-599,
     0x1.b4f40f6ff9791p-607, 0x1.0fb47752a182fp-225, 0x1.f59df425959bep-715, 0.0,
     0x1.8e1d48f2d1a7cp-368, 0.0, 0x1.5da6e7ceff796p-807, 0x1.b3f94c00f0998p-237,
     0x1.ecc3fb03ac5b8p-944, 0.0, 0x1.af75b9f06bbdcp-799, 0x1.88bec20f77e36p-266,
     0x1.37727011a0137p-716, 0x1.ef3e8bb1c06f4p-829, 0.0, 0.0, 0x1.c86e4159a2c1fp-239,
     0x1.90ce41c16e5c4p-929, 0x1.2e22d2f24f538p-896, 0x1.ad4dff342ca66p-341,
     0x1.b51d88822c19ap-449, 0x1.3a95d40daa763p-498, 0x1.2e1751a15d25bp-661, 0.0, 0.0,
     0x1.fd7f2912abf38p-879, 0.0, 0.0, 0x1.d086e889ccf9ap-557, 0x1.7773b8aeee745p-60,
     0.0, 0x1.4cfec4af0110cp-29, 0.0, 0x1.de4857e770bd7p-551, 0x1.bc6fdcdee166cp-402,
     0.0, 0x1.af395799069d2p-725, 0.0, 0.0, 0x1.d84f682a062ddp-201,
     0x1.31f0673399fb6p-660, 0.0, 0.0, 0.0, 0.0, 0x1.f65f3d42e993cp-47, 0.0, 0.0,
     0x1.e7ac83b427a2ep-675, 0x1.0520ed6079441p-337, 0x1.f53a6bf6cace6p-794,
     0x1.e38951782f8eep-620, 0x1.d014f0ccb74fbp-464, 0x1.1a5c491178901p-334, 0.0,
     0x1.64a3ed8be102p-557, 0x1.c3a2c7bc9017fp-753, 0x1.b6781b5f02f32p-368,
     0x1.f0d550e98c3c9p-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b65d43ff64c2p-842,
     0.0, 0x1.9c00c323a03a1p-291, 0x1.734736f71ed42p-913, 0.0, 0x1.ea00cd2b34065p-668,
     0x1.be211890da3b9p-294, 0x1.2f7eefd7e7fa9p-368, 0x1.8d01426f7e538p-43,
     0x1.452192f984f45p-900, 0.0, 0x1.1b199b13135bdp-102, 0.0, 0x1.4091cb587e2f2p-42,
     0.0, 0x1.b9809c83df55bp-96, 0x1.929b95b3934b9p-905, 0x1.2a1d690a1465dp-772,
     0x1.5e212f823bc6dp-530, 0.0, 0.0, 0.0, 0x1.cb842167d4381p-518, 0.0,
     0x1.a370e6598d8b5p-597, 0x1.80f68bbaa416bp-793, 0x1.ca15b3123a665p-100,
     0x1.5a07a2f692789p-526, 0.0, 0x1.032c2a6f4f5cfp-600, 0x1.6eda56e2589c5p-872,
     0x1.fd8c8a5e7d24fp-610, 0x1.b1696e5133b7p-488, 0x1.a1be0ae93956ap-999, 0.0,
     0x1.c1990777cb30bp-671, 0.0, 0.0, 0x1.3feccab1e99eep-433, 0.0,
     0x1.b60c7b9be4a88p-358, 0.0, 0x1.fe132d72428c5p-469, 0x1.196c5293663e3p-514, 0.0,
     0x1.cf3d4079d68d4p-213, 0.0, 0.0, 0.0, 0x1.3c1dd26020906p-1009, 0.0, 0.0,
     0x1.87d923a923e69p-465, 0x1.5881414c3ed7ep-857, 0.0, 0x1.c20bc1dc29debp-751, 0.0,
     0x1.bc990dbece544p-865, 0x1.60a615a8ce7dbp-90, 0x1.05095aa15066cp-670, 0.0,
     0x1.e8333f1ce650bp-695, 0.0, 0x1.64e2e0eca3c9ep-943, 0x1.0f87eec764fa7p-751,
     0x1.0f8da9d85d4c6p-122, 0.0, 0.0, 0x1.34aa8a2f23baep-69, 0x1.a907ffbf197c9p-871,
     0.0, 0.0, 0x1.6f3bd6de41a88p-314, 0.0, 0x1.c17d7ea79c7bap-251, 0.0, 0.0, 0.0,
     0x1.2556868781afdp-98, 0x1.76d9370cd405bp-97, 0x1.05250cb6b7ad7p-677, 0.0,
     0x1.8fd7c27fa18ebp-25, 0.0, 0x1.6ac27710e487ep-547, 0x1.22cfbe488f42dp-123,
     0x1.6d919f83b3e4fp-465, 0x1.561eeecc40148p-876, 0x1.0c76b12af9569p-377,
     0x1.9124eb93e5b42p-2, 0.0, 0.0, 0.0, 0x1.38cffd63b7edep-162, 0.0,
     0x1.0465958b1e07p-517, 0.0, 0x1.205a564601d6ap-140, 0.0, 0x1.fe93ebf6151d7p-229,
     0.0, 0x1.868e3d20798a2p-863, 0x1.0d8072c6ed594p-614, 0x1.2cf00b2568654p-384,
     0x1.74cfe073248d5p-970, 0.0, 0.0, 0.0, 0x1.75fdf2d746853p-999,
     0x1.7f2d3953ad3a2p-478, 0.0, 0x1.0836c32884ad4p-524, 0.0, 0.0, 0.0, 0.0,
     0x1.89ae0f93ec98p-739, 0x1.8b4f7b61e07cfp-269, 0x1.852da62bd4279p-316,
     0x1.26455eb884ca2p-569, 0x1.35716b8696702p-645, 0.0, 0.0, 0x1.d138746581d3ep-421,
     0.0, 0x1.449a47d3139ffp-793, 0.0, 0x1.37dff447a2af9p-493, 0.0, 0.0, 0.0,
     0x1.5a11710c4cbd9p-851, 0x1.978258de76a4ap-693, 0.0, 0.0, 0x1.11ed41bb4d6c9p-629,
     0x1.e2975094c5236p-322, 0x1.0d6b5f48a0fdp-522, 0.0, 0x1.53eb436398596p-377, 0.0,
     0.0, 0x1.e322baa9a9c11p-883, 0.0, 0.0, 0x1.6b91015db21fbp-911,
     0x1.e5ef03481a5dcp-536, 0.0, 0.0, 0.0, 0x1.bea15e378a7f2p-498, 0.0, 0.0,
     0x1.2a94dc625b987p-980, 0x1.6e25e77713062p-332, 0x1.851627ee520bep-903,
     0x1.c257c35500c82p-976, 0x1.102f6bebbae5cp-350, 0.0, 0x1.c1485053d5fe4p-726,
     0x1.38f4080502063p-884, 0x1.1873592e7a92cp-96, 0.0, 0.0, 0x1.1d463733396efp-554,
     0x1.7fd7c81979641p-411, 0x1.02b4cebf7079bp-691, 0.0, 0x1.97401183e139bp-870, 0.0,
     0.0, 0.0, 0.0, 0x1.fc3230b9b8ae2p-965, 0x1.46e0a6c33c289p-72,
     0x1.55c8b5efc97bcp-697, 0x1.2fdb0ed478761p-850, 0x1.785a4d485da7bp-467,
     0x1.755a91bf766d6p-1009, 0.0, 0.0, 0.0, 0x1.b18c2ae46386p-1015,
     0x1.c49597cac60c8p-806, 0.0, 0x1.c796b619d8e48p-326, 0.0, 0.0, 0.0,
     0x1.416c4830b41e1p-97, 0.0, 0.0, 0x1.928b355779585p-802, 0.0, 0.0,
     0x1.b1de12d98731dp-76, 0x1.87c8799bd0096p-971, 0.0, 0.0, 0x1.0c0dec740dc45p-849,
     0.0, 0x1.95ffeda53b95bp-164, 0x1.313e8f7255f76p-528, 0.0, 0x1.670311c672676p-51,
     0.0, 0.0, 0x1.6e71748cfefa5p-346, 0.0, 0x1.b206bc511ff29p-297,
     0x1.516a1beda7b09p-22, 0x1.0cf77d7096535p-333, 0.0, 0x1.378dd6a6ebc89p-921,
     0x1.f20b999fbcae1p-195, 0x1.f00f6095c8a0ap-870, 0x1.071a28cbb027bp-772, 0.0,
     0x1.cc9978980a1bdp-759, 0x1.d47ac9186ccc9p-749, 0x1.bb68863ce4754p-330,
     0x1.d5d960e22664fp-837, 0x1.a2c7c3fa2038bp-913, 0x1.654c8ea18f905p-93,
     0x1.9719e35006689p-466, 0x1.bf8968f0f13f5p-299, 0x1.8246830c89c1dp-919,
     0x1.e3e70dc9cf4ebp-936, 0x1.551cd7e65c64fp-233, 0x1.6e3c349184a0bp-981, 0.0,
     0x1.9e926077f98e8p-287, 0x1.99517d48cbfap-110, 0x1.13fb3c1d6d6eap-159,
     0x1.a2306658f75b1p-108, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6705cec182129p-727,
     0x1.9a09ef56ce6p-125, 0.0, 0x1.6c2f998b485b1p-610, 0.0, 0x1.e902d30a22cafp-449,
     0x1.459f6bf1ef76dp-409, 0.0, 0.0, 0x1.a0f7e678a5d18p-61, 0x1.af82f45e7c8dep-74,
     0.0, 0x1.56189ced1a9cbp-916, 0.0, 0x1.9e3f89e54a83p-840, 0x1.6e4efdf9bbc31p-601,
     0.0, 0.0, 0.0, 0x1.94880af5697e9p-252, 0x1.8a9db89ae120cp-199,
     0x1.9f3553d6c3536p-22, 0.0, 0.0, 0.0, 0.0, 0x1.838d541667bd1p-1015,
     0x1.99096a9a39cbp-888, 0x1.06789ebb49723p-664, 0.0, 0.0, 0x1.f325d20c27f59p-196,
     0x1.610c5b5b39e67p-673, 0x1.9c4b24cb90b69p-51, 0.0, 0.0, 0.0,
     0x1.226ad9d8ff066p-623, 0.0, 0.0, 0x1.4253c91a432f5p-760, 0x1.3011298414a08p-768,
     0.0, 0x1.ed72c1bff5e9ep-144, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4852f2f7a3641p-684, 0x1.dbf1130f4052cp-691, 0.0, 0x1.d3feb3ba313b3p-867,
     0x1.cef40df84ee2ap-887, 0x1.50bdd311a124dp-461, 0x1.75044f7c7f67ap-41, 0.0, 0.0,
     0.0, 0x1.d48008f065b1fp-457, 0x1.c6d88c4866178p-443, 0x1.f4d220a252e2fp-434, 0.0,
     0x1.6a8dff377ffdap-844, 0x1.db23312f327b4p-232, 0x1.26d3ff24ecf26p-695,
     0x1.3f08a53fd8203p-141, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.71d08a00ae702p-230, 0.0,
     0.0, 0.0, 0.0, 0x1.a888910070694p-116, 0x1.4598713351f89p-463, 0.0,
     0x1.a21ed04836804p-73, 0x1.ec87a7621615ap-779, 0.0, 0.0, 0x1.abe7b659956e4p-302,
     0x1.c919643e77cep-154, 0.0, 0.0, 0x1.7774f848ab574p-226, 0x1.237314197e4cdp-861,
     0.0, 0.0, 0.0, 0x1.8380d13434c0fp-658, 0x1.6b7c86849be27p-167,
     0x1.30bda1561aeep-717, 0.0, 0x1.40ed5f3edc92p-180, 0x1.8b0e39977a3f2p-966,
     0x1.33241eded89bap-344, 0x1.4e9a179a56e8cp-759, 0.0, 0.0, 0x1.e758314809c23p-311,
     0.0, 0x1.5652e9f11cb73p-17, 0.0, 0.0, 0x1.967618bf74a14p-453, 0.0,
     0x1.d88915b515371p-919, 0.0, 0.0, 0.0, 0.0, 0x1.f390ef0b7e63cp-577, 0.0, 0.0,
     0x1.1f547339a3569p-364, 0.0, 0x1.ddbc89f6e1ffep-141, 0.0, 0.0, 0.0,
     0x1.1dd02c18da1fap-774, 0.0, 0x1.7175d059f4834p-367, 0.0, 0x1.8407b8c1f816ap-654,
     0.0, 0x1.8309baa4159bep-493, 0x1.63b77d0d9ff9fp-526, 0.0, 0x1.9be10ddddc059p-115,
     0.0, 0x1.553eef0f814ffp-240, 0x1.ad4c66fa5e7c4p-496, 0.0, 0x1.b83f0d612c557p-423,
     0.0, 0.0, 0x1.1fbf477ee388cp-812, 0.0, 0x1.a4a363423e58dp-357,
     0x1.ec22002147e2ap-138, 0.0, 0x1.c17f872a64d57p-43, 0x1.41333b5557672p-19, 0.0,
     0.0, 0.0, 0x1.dcd6b3d408254p-828, 0.0, 0x1.24e70e25f4eafp-309, 0.0,
     0x1.e343df7806dd2p-950, 0.0, 0.0, 0.0, 0x1.e89fa55ad7facp-736, 0.0,
     0x1.46d93a7b86461p-806, 0.0, 0x1.4ee1448fff95p-186, 0.0, 0.0, 0.0,
     0x1.d61c18294b064p-781, 0x1.ccb2e0222967ap-39, 0.0, 0.0, 0x1.dbe000e426113p-988,
     0x1.713e5b0fb91a5p-163, 0.0, 0.0, 0.0, 0x1.e5fb21422fed1p-54,
     0x1.6fda637c2ad2bp-335, 0x1.c5439898d5aa7p-338, 0.0, 0x1.5791a4d53fe0ap-722,
     0x1.e63f800f3aac7p-105, 0.0, 0x1.c271a457e071bp-757, 0x1.4d47ade2c58c8p-733, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3aa57aba5417dp-366, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.05bc60096b529p-89, 0x1.b129356bd99a8p-571, 0.0,
     0x1.3cf3f4dad5acdp-220, 0.0, 0.0, 0x1.9d4010055804fp-693, 0.0,
     0x1.b7dd422669b87p-920, 0x1.9995503631b59p-726, 0x1.39c65d2f50582p-334,
     0x1.818f61994c09p-685, 0x1.cb3309a42ce51p-406, 0x1.b4d35f1a2a9eap-215, 0.0,
     0x1.66c25374949f8p-146, 0.0, 0x1.1b187ae7cbdfap-819, 0x1.239a6a3542faep-208,
     0x1.f85910da4c067p-194, 0x1.5a7de0decf324p-839, 0x1.ea4b934616df2p-115, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.40cd720f24a14p-863, 0.0, 0.0, 0.0, 0x1.7c31e0d79456ap-874,
     0x1.095af0abe4347p-411, 0.0, 0.0, 0.0, 0x1.c9e3cf59c508cp-990,
     0x1.7be36a229122ap-371, 0x1.9d1cc067a2b25p-897, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d9ad7fa150f8p-740, 0.0, 0x1.ba8268ae8a789p-537, 0x1.caf3e8be50dbp-617, 0.0,
     0x1.3ef1b212e5abap-38, 0x1.c4b1783672cc6p-466, 0.0, 0.0, 0x1.b6917adb51ef3p-475,
     0.0, 0.0, 0x1.ca1b72ae04621p-481, 0.0, 0x1.be019b70d7826p-100, 0.0, 0.0, 0.0,
     0x1.b2ed62cf02acfp-384, 0.0, 0.0, 0.0, 0.0, 0x1.f2d64e87537e8p-723,
     0x1.b61e399537154p-315, 0x1.923566de876d7p-579, 0x1.d47104afe5d1fp-828,
     0x1.608963153ac1bp-164, 0x1.1f842b0e2afb2p-838, 0x1.26df932fdbc74p-450, 0.0, 0.0,
     0x1.8d029abb00cfbp-184, 0x1.e3c3b120367a6p-447, 0x1.f9f32f1ea06aap-793, 0.0,
     0x1.e5822851f027p-533, 0.0, 0.0, 0x1.792632073d4a3p-812, 0x1.f47c33fc78ddcp-388,
     0x1.fd2881623cc66p-940, 0x1.41e289e4e30b7p-828, 0x1.b6505f074d397p-259,
     0x1.7e49f05d5727cp-867, 0x1.91a19c42abe96p-460, 0x1.17a6fe6b65379p-235, 0.0,
     0x1.4fb07fe524f27p-897, 0.0, 0x1.55e37a91017p-848, 0.0, 0.0,
     0x1.625947867da6dp-790, 0x1.3125a685ce304p-303, 0x1.e3134e9718981p-269,
     0x1.b6e0fa2fd7013p-968, 0.0, 0x1.cf3b6100dd8ccp-503, 0x1.12b604838668fp-37, 0.0,
     0x1.08fbd769d0a3ap-882, 0x1.cb30e2433ee82p-946, 0.0, 0.0, 0.0,
     0x1.e75312fb55f12p-589, 0x1.d0ceea93c3944p-649, 0.0, 0x1.c605cc9857bep-268, 0.0,
     0.0, 0.0, 0.0, 0x1.7bb72501f8e2ap-674, 0x1.9314b086b2326p-129, 0.0, 0.0,
     0x1.8378f6437aa3ap-482, 0x1.46597b1e9611p-67, 0x1.e0edcb6c28548p-740, 0.0, 0.0,
     0x1.38b5696329328p-898, 0x1.9d194436e25a2p-1022, 0x1.456047d63ace5p-614,
     0x1.629ca062ac3afp-1013, 0x1.0fb85f26604ccp-55, 0.0, 0.0, 0.0,
     0x1.708179b414c3ep-705, 0.0, 0.0, 0x1.b3e1fcb3d0b79p-363, 0.0, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_acoshd2_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_acoshd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_acoshd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
