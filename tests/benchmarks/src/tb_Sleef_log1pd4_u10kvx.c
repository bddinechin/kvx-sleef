/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pd4_u10kvx.c --function Sleef_log1pd4_u10kvx \
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
     0.0, 0.0, 0.0, 0x1.ad4ba32965f74p-88, 0.0, 0.0, 0x1.0dc0895c17d65p-5, 0.0,
     0x1.1ee1109ca9727p-507, 0.0, 0.0, 0.0, 0x1.ec1f516728208p-192, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0, 0x1.de65a447740dp-95,
     0x1.009c0b2ac165cp-994, 0x1.74bea56f83aa7p-977, 0.0, 0x1.1f9a56662412fp-285, 0.0,
     0x1.6170d64c205d4p-146, 0.0, 0.0, 0x1.864f040b24a26p-177, 0x1.45b213cc8941cp-817,
     0x1.612fbe25fb73dp-344, 0.0, 0.0, 0.0, 0.0, 0x1.8e2fee9e384a1p-126, 0.0, 0.0,
     0x1.294640c2d973cp-856, 0x1.9c021c5fdadffp-271, 0.0, 0.0, 0x1.8619f783cbe3ap-553,
     0.0, 0.0, 0x1.4e5aec424d9edp-422, 0x1.4601ee2f005cdp-226, 0x1.1bd8a164fce22p-545,
     0.0, 0x1.56ff9d1ab56d1p-89, 0x1.347d9b7d1223ap-785, 0x1.a18def65799e5p-774,
     0x1.0cce5d097984dp-610, 0x1.60c20ee37decdp-1005, 0x1.0f617611beea3p-180,
     0x1.429031c3fe4a8p-415, 0.0, 0x1.081bb7dba0b96p-964, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46a09762759f3p-788, 0.0, 0x1.9ef5b06dff1d3p-982, 0x1.4b72992eb6e24p-890,
     0x1.0f31f522d5208p-620, 0x1.8a585061dac91p-426, 0.0, 0.0, 0x1.8ca43e81fce5cp-618,
     0.0, 0.0, 0x1.c32eb4d93f3ebp-1, 0x1.2c0a4853a33c9p-567, 0.0,
     0x1.e4fcb607048eep-509, 0x1.dd12837662692p-32, 0.0, 0x1.a43c96041caaep-999, 0.0,
     0x1.76648ef19c8d6p-382, 0.0, 0x1.6da8b7ec5c345p-808, 0x1.a004862924429p-718, 0.0,
     0.0, 0x1.ebeff2ed65ba5p-792, 0x1.93c5d0d51a124p-178, 0x1.6f9c1d4746a3ep-513, 0.0,
     0x1.cabebd40c87abp-640, 0x1.1d3b895257f5ep-204, 0x1.4837a10d7f89ap-460,
     0x1.b473f299d51c1p-144, 0x1.3c716478de919p-61, 0x1.04246c30c1aaap-119, 0.0,
     0x1.c8d6e0401314ep-385, 0x1.e73e4552a21dbp-57, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.262a9aa180c4ap-866, 0x1.ac1d376d50644p-820, 0.0, 0x1.6c4da2c021648p-266,
     0x1.517be33c2fbd6p-152, 0x1.7ae448bf3ac6bp-500, 0x1.7bf84cf6ef896p-117,
     0x1.bcb0a68570ff3p-58, 0.0, 0x1.6adf46613efe5p-603, 0x1.e96e47619b713p-1001,
     0x1.4eb5bf2ec49d9p-891, 0x1.c56c9ec13494p-279, 0.0, 0.0, 0.0,
     0x1.2799b1f4f2db9p-556, 0.0, 0x1.5f56c880d075cp-608, 0x1.f519d774ee4e8p-786,
     0x1.b8ddf85dc1313p-495, 0.0, 0.0, 0x1.1d3b2a47bcb3bp-284, 0.0, 0.0, 0.0,
     0x1.4d486038c5b33p-311, 0.0, 0.0, 0x1.77de8f7160b04p-398, 0x1.f8d7919389cc3p-883,
     0x1.9f8f06c3cd5f1p-488, 0.0, 0.0, 0x1.d9dc73fc86eaep-178, 0.0, 0.0,
     0x1.5eb43ff8c731cp-230, 0x1.b2b66d5345695p-164, 0x1.11e3d3542553ap-136,
     0x1.d7187e5de5a3p-940, 0.0, 0.0, 0x1.71da7fb945cc3p-927, 0.0,
     0x1.35320dfbcd68dp-802, 0x1.da783614d9dafp-635, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0cbf67fa76bap-267, 0x1.e5a5b8029641bp-651, 0.0, 0.0, 0.0,
     0x1.12bcbffe2f062p-392, 0x1.744dfc5da65d7p-686, 0.0, 0.0, 0x1.f5af6f989ee64p-796,
     0x1.bc8b92d5822c2p-888, 0.0, 0.0, 0x1.a9437f1fb1d8ep-525, 0x1.9a4a11a5e7d91p-775,
     0.0, 0x1.773ab2835d23ap-144, 0x1.f3cd38a5a9c6bp-297, 0.0, 0x1.9fed646f1c13ep-438,
     0x1.26f2686550173p-668, 0x1.df3c31404926ep-931, 0.0, 0.0, 0.0,
     0x1.27f3cef087d86p-797, 0x1.475c0c81ec373p-119, 0x1.08082c3ea92d9p-24,
     0x1.4226ead7b0cdcp-193, 0.0, 0.0, 0x1.26b186d8e253bp-763, 0.0, 0.0, 0.0,
     0x1.ff15ad72f5aa4p-844, 0.0, 0x1.b1cfe89ecdf36p-968, 0x1.a374b89252789p-652, 0.0,
     0x1.93ffe6ed42391p-874, 0x1.413c5d3a16216p-304, 0.0, 0x1.ca211f8fc1372p-914, 0.0,
     0x1.21674989127dep-767, 0x1.c9744cbb9c353p-294, 0.0, 0x1.52472b60a4cacp-285, 0.0,
     0.0, 0x1.69437367a1685p-457, 0x1.c40f726920fa5p-5, 0x1.84d7581f2d5a4p-597, 0.0,
     0.0, 0.0, 0.0, 0x1.e4aee1bdb1335p-359, 0x1.0c25050a0afd1p-935, 0.0,
     0x1.0a81b7ce5a127p-291, 0.0, 0x1.bb3703408d08dp-339, 0.0, 0x1.a672ac1ec1e0ep-571,
     0.0, 0x1.d3f57b9ea7787p-241, 0x1.e02346c69a439p-515, 0.0, 0x1.d14a507ff4f3p-151,
     0x1.1c6adfa16201dp-893, 0.0, 0.0, 0.0, 0x1.f850e701dbca8p-930, 0.0,
     0x1.4fb28ada8f3a9p-479, 0.0, 0x1.fc67cd946c784p-942, 0.0, 0.0,
     0x1.610c3365e9a8ep-258, 0.0, 0.0, 0.0, 0x1.c357993d66f48p-164, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.727bb2485a06ap-550, 0.0, 0x1.195155c5e7406p-965,
     0x1.ca605f185b6ap-154, 0x1.ffee10a65351ep-624, 0.0, 0x1.7369d19795caep-163,
     0x1.97034b04e764p-292, 0.0, 0x1.c09713c00acd4p-265, 0x1.23a0e136cbafdp-824, 0.0,
     0.0, 0x1.3ef465e48df6ep-934, 0x1.e4b0846f3efb5p-760, 0.0, 0x1.7cbe192fb710cp-552,
     0x1.dfe0173b32a59p-375, 0x1.75c1dd1aa19acp-225, 0.0, 0.0, 0x1.3165b8e5cd2bep-682,
     0.0, 0x1.6c67a10518c7fp-387, 0x1.a26a2a96abb0bp-593, 0x1.928d9a99a9b8cp-917,
     0x1.0725997c2d1abp-843, 0.0, 0.0, 0x1.ffb62d7cb6c3dp-217, 0x1.f91708541b269p-578,
     0x1.b836bbb112043p-339, 0x1.1039fb6d067cbp-382, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.256e97fc5575cp-413, 0.0, 0.0, 0.0, 0.0, 0x1.580f8f9e15281p-322,
     0x1.79282a47f534ap-287, 0.0, 0x1.2ad2f52ce794p-885, 0x1.ac9752655d314p-1004,
     0x1.b0d578ba14a9ap-92, 0.0, 0x1.fb871b5cc56a4p-312, 0x1.f63f7f5956796p-112,
     0x1.8d699966adbffp-707, 0x1.d36e7c89a0798p-372, 0.0, 0.0, 0x1.bc3961bbb402cp-428,
     0x1.e49daeb343c76p-435, 0.0, 0.0, 0.0, 0x1.d88215b61edcdp-548, 0.0,
     0x1.653d0857a7c34p-493, 0x1.c4b477adbeb51p-644, 0x1.fa4e30c0f827cp-703, 0.0,
     0x1.2e61152d82b0cp-98, 0.0, 0.0, 0x1.61954d9bd3d5bp-707, 0x1.2b491c85d4a73p-662,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6bbe7d772e163p-325, 0.0, 0x1.c1d922e7b1c29p-459,
     0.0, 0.0, 0.0, 0x1.6a0ac0fa69e62p-952, 0x1.d6775b2dd1fafp-913, 0.0,
     0x1.a6070e4746e21p-133, 0x1.43de006ac0c05p-30, 0.0, 0x1.05ef0efb59c5fp-891, 0.0,
     0x1.0ff387fc7b664p-355, 0x1.467896afe5b2ap-269, 0.0, 0.0, 0.0,
     0x1.c533254b2fd95p-82, 0x1.864b1cdcfe6fcp-11, 0.0, 0x1.2386a9548ec9cp-846,
     0x1.43991f1e05f85p-446, 0.0, 0.0, 0x1.dc05389e4496p-233, 0x1.0224e4cacbedcp-29,
     0x1.49ca1888ad8ecp-584, 0.0, 0.0, 0.0, 0.0, 0x1.d2130729a92f2p-429, 0.0, 0.0,
     0.0, 0.0, 0x1.668ae8985d35cp-146, 0x1.52056d2199f98p-421, 0.0, 0.0, 0.0,
     0x1.ea1cb682a603fp-858, 0.0, 0x1.46bb23ff5ac62p-154, 0x1.2be42b1a62d41p-478, 0.0,
     0x1.0c5d9ce257259p-791, 0x1.4c480f001d8c3p-817, 0.0, 0x1.b7f1365ffc405p-54, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.561afe49c24b3p-897, 0x1.0ac0fb76f9df3p-896,
     0x1.6a33f8726556p-935, 0.0, 0x1.f6bcc8ccb991dp-714, 0.0, 0.0,
     0x1.f933683d38babp-175, 0x1.7e2246496bff2p-903, 0.0, 0x1.8c197c3b8a4acp-181, 0.0,
     0.0, 0x1.2ec244a072c12p-181, 0x1.59aff757d4d3bp-147, 0.0, 0.0,
     0x1.8d24043e79b33p-224, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68430d785020bp-235,
     0.0, 0x1.8eed9ec1aa179p-859, 0.0, 0x1.7047c32762dfp-858, 0x1.e3d2d9cbed4c9p-390,
     0.0, 0.0, 0x1.e80bd36b21aaap-792, 0x1.01753deaba988p-146, 0.0,
     0x1.f61a176a5b24bp-869, 0x1.93f06982ca1cdp-467, 0.0, 0x1.49b61401914bfp-413,
     0x1.e8b33e1cb6657p-40, 0.0, 0x1.86ec63e468e91p-44, 0x1.83ece813c537fp-678,
     0x1.291e6ad1be7fep-220, 0.0, 0x1.a511d86ca8c58p-255, 0.0, 0x1.f17d57a1e6d25p-962,
     0x1.c13113a9a960bp-159, 0x1.7dde25d05d82dp-326, 0.0, 0x1.3dab5fbc7dc6fp-377, 0.0,
     0.0, 0.0, 0x1.982d89510ecd5p-546, 0x1.00a502f90aa4bp-553, 0.0,
     0x1.07ffdfbdf3fb1p-60, 0.0, 0x1.32045f20db9d1p-423, 0.0, 0.0,
     0x1.03b0eae403b0bp-409, 0.0, 0x1.4d985d54f75a4p-978, 0x1.16582af6cac76p-541,
     0x1.f35df15e0b2d8p-121, 0x1.5b2266bc651c1p-847, 0.0, 0.0, 0x1.6000175e229ffp-511,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.258aa0a37cc3dp-307, 0x1.ed3f88eb9eb36p-376,
     0x1.b150e65ccf104p-96, 0x1.642e030953437p-149, 0x1.51fe0362980acp-621,
     0x1.b16455ca8163cp-856, 0.0, 0x1.c32de922bc75ap-373, 0x1.c0420fd6b6253p-700,
     0x1.97880d054e9a4p-924, 0x1.73849624a38cbp-87, 0x1.d7fa46964349cp-894, 0.0,
     0x1.47dd48199f978p-846, 0x1.0135a03d1329ap-338, 0x1.912ed1e1b78bp-208, 0.0,
     0x1.c3a66cbe2e8c5p-681, 0x1.de1669d6c3beep-285, 0x1.3608a31c47da5p-363, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e3275d7271b1p-266, 0x1.60ef4a376869bp-601,
     0.0, 0x1.6d269fe24510fp-263, 0.0, 0x1.507e6c149a82p-63, 0.0, 0.0,
     0x1.27b36ba1d28bap-494, 0x1.d11ccd66daedp-5, 0.0, 0.0, 0x1.51ef9da573df6p-174,
     0.0, 0.0, 0x1.4726f328c7a81p-182, 0x1.5be550434f136p-767, 0.0,
     0x1.6df3f2bd75eb9p-169, 0x1.7a0cc2185d765p-44, 0x1.1c501efc4f77dp-892,
     0x1.e5bc089312fc8p-510, 0x1.9e26f083c1371p-646, 0.0, 0.0, 0x1.9dbcf96a9424fp-938,
     0x1.55a3f8c801b6p-160, 0.0, 0.0, 0x1.9b57841b91236p-390, 0x1.720d836b58385p-856,
     0.0, 0x1.3d2956021b86p-22, 0x1.c6f788a28f865p-40, 0.0, 0.0,
     0x1.bf29e83bb386dp-762, 0x1.db5c27bffd671p-497, 0x1.6854dd402b87ep-455, 0.0,
     0x1.09e8f3888aeb4p-650, 0.0, 0x1.727357efdb32bp-621, 0x1.00035744987b7p-933,
     0x1.d08338f4e9274p-492, 0x1.73ee110c89eaep-80, 0.0, 0.0, 0x1.6dc9dde8ec18ep-238,
     0.0, 0x1.ae4ec4a7e2753p-544, 0.0, 0x1.da42334bb2c72p-900, 0.0,
     0x1.9accd3e85cb63p-862, 0x1.d73550388e605p-802, 0x1.cc0dcb2674d74p-84,
     0x1.548bad5c16fcp-56, 0.0, 0.0, 0x1.0d3c31b43c256p-541, 0.0,
     0x1.18f3c2530a23bp-169, 0x1.f0e0473a52cfep-312, 0.0, 0x1.88eec4a103ed8p-176,
     0x1.8899180266be2p-597, 0.0, 0x1.c38feb280cc1dp-757, 0.0, 0x1.263c2de6848ap-917,
     0x1.2e93d8c7a17fdp-268, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.559c814ebd756p-522, 0x1.97a2b933728f4p-149, 0.0, 0x1.cf880bffa2b9p-948,
     0x1.53de5ec376e43p-183, 0x1.cda437759c2fdp-870, 0x1.07a04d9253615p-192,
     0x1.aee0d3a846627p-621, 0.0, 0x1.228e2d08a0d25p-603, 0.0, 0x1.cd598471105adp-482,
     0x1.41c7c8f584ec8p-441, 0.0, 0x1.0f6acb56361fp-111, 0.0, 0.0,
     0x1.28d84aead07dcp-169, 0.0, 0x1.99a0df4e237e9p-283, 0.0, 0x1.4d874882329ccp-243,
     0x1.211914195292cp-21, 0x1.dcb623ffb101ep-329, 0x1.502430f25d913p-654,
     0x1.a2500ae9b745ap-258, 0x1.43121ccb5010cp-998, 0.0, 0x1.7ddc80b8c235cp-895, 0.0,
     0x1.053d03ae669e5p-543, 0.0, 0.0, 0.0, 0x1.705d445b41ddep-935,
     0x1.e6cfc2ac9c0c6p-876, 0.0, 0.0, 0x1.35c30d93b352fp-253, 0x1.6b40247a9ced4p-907,
     0x1.04e326bbf2615p-779, 0x1.648ccc1136528p-349, 0x1.bfb5beccdaa68p-68,
     0x1.823dcbc34a95cp-447, 0x1.461850c2e0f99p-512, 0x1.a99ed3e505f73p-229, 0.0,
     0x1.b45c67656e35fp-69, 0.0, 0.0, 0.0, 0.0, 0x1.fb80e5efb2fbap-901, 0.0,
     0x1.3372e3d93ff01p-238, 0x1.7d1c9ec7f0e56p-618, 0x1.22d2dd7be317fp-856, 0.0, 0.0,
     0.0, 0.0, 0x1.4e791a8942548p-762, 0x1.4fa6b55aa0694p-385, 0.0,
     0x1.5c016d7f2198bp-917, 0.0, 0.0, 0.0, 0x1.033e30593111ep-399, 0.0,
     0x1.514fb0dac9021p-490, 0x1.f9d561418712cp-152, 0.0, 0.0, 0.0,
     0x1.2c382e961a5cfp-97, 0.0, 0x1.54e6ffb18a73ep-122, 0x1.fb4bb1d47b225p-158, 0.0,
     0.0, 0.0, 0x1.4c173b6ef354ap-134, 0.0, 0x1.3a6bc06a10fd2p-18, 0.0,
     0x1.144af31ea7c82p-775, 0.0, 0x1.9e1f2ec68be8ap-476, 0x1.29a7f200fd9aep-856, 0.0,
     0x1.de383559058bep-430, 0x1.a74c9927e9592p-438, 0.0, 0x1.12479513ea35dp-4,
     0x1.62afea4e58371p-967, 0x1.ed172e9dfe55p-787, 0x1.035ba60a91b22p-794, 0.0,
     0x1.2b3834c4859f3p-715, 0.0, 0x1.b262af5066706p-440, 0x1.4abd017b8079ep-320,
     0x1.368495c13f32fp-427, 0x1.3da04f6246d5dp-500, 0.0, 0.0, 0x1.86f8a3c5d975cp-537,
     0x1.26b25cea7583ap-699, 0.0, 0x1.0bdd75b85fecp-943, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c437dc7c08d66p-668, 0x1.2e37b762e973ep-413,
     0x1.6aed4a9e8b0fcp-302, 0.0, 0.0, 0x1.38de2f4f421e5p-394, 0x1.468a37d3244a5p-802,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42931a60cf945p-653, 0x1.1511660e4726ap-922, 0.0,
     0.0, 0x1.115bc3676637p-48, 0x1.8cce4ae19caa4p-547, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b8e4d71041bp-519, 0.0, 0x1.ce46546a8533fp-925, 0.0, 0.0,
     0x1.b5ad3fff28a32p-517, 0x1.3f5deac74200fp-457, 0.0, 0x1.eec18e68c8ffap-299,
     0x1.3fd88fce7f4ccp-473, 0.0, 0.0, 0x1.2ea34eedc9ce4p-277, 0.0,
     0x1.ae9fd3ead1278p-573, 0.0, 0x1.cb2398c51e825p-534, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c636c0fa1c08fp-192, 0x1.18777dedfaddap-482, 0.0, 0.0, 0x1.3106716de69abp-121,
     0x1.c868d8e4d6365p-93, 0x1.b79d3e9e1573bp-806, 0.0, 0x1.f62209655c42p-414, 0.0,
     0x1.d0edbda9c28a5p-188, 0x1.9ba3ef5a2528cp-915, 0x1.22cd907d85cedp-404,
     0x1.06f30363a8587p-604, 0x1.13ebf22fefb48p-749, 0.0, 0x1.45644ea6bb1a6p-540,
     0x1.5cd6e81db399cp-851, 0.0, 0.0, 0.0, 0.0, 0x1.4768382b67eb1p-366,
     0x1.b2c6b68da3c96p-598, 0x1.be4674525bfdcp-697, 0.0, 0.0, 0x1.144e5b28959c9p-160,
     0.0, 0x1.2287efc9960b3p-231, 0x1.03f8b9381062ap-19, 0.0, 0x1.6cab05f82a6d3p-943,
     0x1.e0a9b915137a7p-983, 0x1.0f80098356881p-691, 0.0, 0.0, 0x1.a15c44d643208p-993,
     0.0, 0x1.44f35ae500413p-747, 0x1.ce895fe7399bfp-713, 0x1.a1d3e00189e36p-962,
     0x1.d3c40a4ad0801p-681, 0.0, 0x1.e7df93fcf52b7p-894, 0x1.ce112f7ddca63p-587,
     0x1.6ab1907a64139p-405, 0x1.6576f441feebap-745, 0x1.e20afac4af862p-43, 0.0, 0.0,
     0x1.ee55478be5311p-180, 0.0, 0.0, 0.0, 0x1.ce4a528548633p-538,
     0x1.f30c4a96e28d9p-107, 0.0, 0x1.b412bdad44e1ap-23, 0x1.76924196e0fd2p-497, 0.0,
     0x1.f8b62e5cba867p-868, 0x1.126637e680d99p-633, 0x1.55b8b7bb5c68fp-932,
     0x1.5a5f358f9e834p-735, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3da4a85f72792p-837,
     0.0, 0x1.1a5e6706b8fcep-237, 0x1.99a0fdd29dedcp-605, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.40191f8f8f175p-374, 0x1.05e38c0de4279p-940, 0x1.3d197d53e672dp-530,
     0x1.30bac70b5205cp-499, 0x1.9897b407c5b75p-978, 0x1.a377acde7e475p-976,
     0x1.7a0b8db47e3bdp-838, 0.0, 0.0, 0x1.c47f97ed6c834p-959, 0x1.af6e8c994c003p-346,
     0x1.5a89f240b5434p-105, 0x1.2f4c2840ac5ep-772, 0x1.f1aae603a93b8p-989, 0.0, 0.0,
     0.0, 0x1.16b5a59f982d8p-972, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8bb21407eb196p-550,
     0x1.ceb73604e37b1p-261, 0x1.5e202aa96935fp-241, 0.0, 0.0, 0x1.6d00e600edba4p-243,
     0x1.3c1ad6ce331ebp-784, 0.0, 0.0, 0.0, 0x1.36ef9da5b3f0dp-581, 0.0, 0.0, 0.0,
     0.0, 0x1.fa60fce595e94p-781, 0x1.827003e93d944p-370, 0x1.4c6e72c18e823p-353, 0.0,
     0x1.14c159ce3fb6ap-538, 0x1.81cb2dde243c3p-10, 0x1.c3eaf56651029p-55, 0.0,
     0x1.8cf59abbe8fefp-350, 0.0, 0x1.5a5bcda379df5p-349, 0x1.9ba93b44ed11ap-535, 0.0,
     0x1.ea1d3f5c49874p-494, 0x1.966067bcbc36dp-435, 0x1.26ac0dc814edfp-680, 0.0, 0.0,
     0.0, 0.0, 0x1.1e20ddaeecd2dp-347, 0.0, 0x1.4778d303a1e96p-1002, 0.0, 0.0,
     0x1.dd254dd5ef092p-15, 0x1.85d3de4a15ea1p-1020, 0x1.55f3d7eb1027ap-719, 0.0, 0.0,
     0.0, 0x1.f9f3e2ca1f51bp-234, 0x1.5e48fa9c3570fp-1021, 0x1.bfed6e1882cbep-856,
     0.0, 0.0, 0x1.2bf6677a0d7e2p-586, 0.0, 0x1.2860bacecb65fp-981, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4b7b009b42a4cp-321, 0.0, 0.0, 0.0, 0x1.96695dcf29349p-280,
     0x1.1307ea45f42b1p-313, 0.0, 0x1.d30ab93eb5601p-344, 0x1.8109825ed4295p-654,
     0x1.0d410f465e847p-302, 0.0, 0.0, 0x1.2e6a1f86248a7p-163, 0x1.9435de88b3b3fp-607,
     0.0, 0x1.51601ac7b6da2p-914, 0x1.175d4971d58b1p-653, 0.0, 0.0, 0.0,
     0x1.1f731cd9ea2a7p-77, 0x1.fe188511905e3p-14, 0x1.310b27397f203p-68, 0.0,
     0x1.56146f9b8b756p-937, 0x1.b1cb81be8086bp-606, 0.0, 0.0, 0x1.3e8e9b326ffdap-491,
     0x1.84ba281bb9562p-595, 0.0, 0x1.b8df7c4c2fc27p-126, 0.0, 0.0,
     0x1.5eb25187b462dp-202, 0x1.e6dd98c0736a3p-955, 0x1.2fdbca529be83p-783, 0.0, 0.0,
     0.0, 0.0, 0x1.624122ed43ab5p-989, 0.0, 0x1.7af53a7d5d688p-386,
     0x1.f7ae137700ec2p-415, 0.0, 0.0, 0x1.c5c04608b165ep-505, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8e285ba0f48e5p-538, 0.0, 0.0, 0x1.96a1c5cb1e98fp-189, 0.0,
     0x1.590238b67b1ccp-810, 0x1.d81a261db0ae6p-615, 0x1.84b3ad10e21cap-990,
     0x1.312a010fdc5bfp-392, 0.0, 0x1.915aaba6f4b9cp-159, 0x1.e31645bd6c9f5p-156,
     0x1.59a0d25381996p-508, 0x1.9d24054fd90acp-642, 0.0, 0.0, 0x1.d1d8ac5646eacp-4,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f67b1b77b0caep-38, 0.0,
     0x1.1a3d593ceac06p-769, 0x1.d08972b2d10edp-923, 0x1.c1d22a56782fdp-484,
     0x1.77e0c2660946cp-196, 0x1.2d2fe3eff4a4dp-122, 0x1.5d03e431e5afdp-427, 0.0,
     0x1.0ed0db4a88448p-857, 0x1.6f9d09e613a97p-493, 0x1.147fd25ea2a87p-670,
     0x1.6712032ba164ep-965, 0x1.1fc86b0fbad29p-771, 0x1.38afdb8894542p-934,
     0x1.91de93c57889dp-874, 0x1.eb53213d0a97p-961, 0.0, 0.0, 0x1.e7ce302770fffp-17,
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
            tmp1 = Sleef_log1pd4_u10kvx(tmp0);
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
    printf("Sleef_log1pd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log1pd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
