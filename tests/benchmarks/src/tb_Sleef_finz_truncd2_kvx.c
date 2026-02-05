/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncd2_kvx.c --function Sleef_finz_truncd2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.4fa1bbb2895fdp-832, 0x1.dec72ec5e7031p-105, 0.0, 0.0, 0.0,
     0x1.1eac3b11f9079p-104, 0.0, 0x1.295719c47e864p-413, 0x1.6fd60521afc4cp-658,
     0x1.1384769b94501p-843, 0x1.92d1603ed4926p-890, 0.0, 0.0, 0.0,
     0x1.5554ec3862473p-802, 0x1.925f19e5dfc8fp-942, 0x1.a77b9a59652b2p-734,
     0x1.9c31cf7148194p-334, 0.0, 0x1.2088d10f7e024p-947, 0.0, 0x1.89a853a6b6105p-656,
     0x1.95b922c91f4f9p-97, 0.0, 0x1.8beb0cae5b26ep-566, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c1394cef16c38p-8, 0x1.eb50c3c158a25p-265, 0x1.484e12e36644fp-686,
     0x1.56702b542e65dp-336, 0.0, 0x1.5c486d1b0e6aap-769, 0.0, 0.0,
     0x1.173b4b3ac8312p-379, 0.0, 0.0, 0x1.33b433c15f149p-207, 0.0,
     0x1.5ced73f8ca36ep-579, 0.0, 0x1.fb154138ac00ap-685, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.740f690747228p-229, 0x1.e3867940bd48bp-143, 0x1.2738b46094dc8p-208,
     0x1.ba34ccfb270f4p-792, 0.0, 0x1.e24bf1a93b5d5p-340, 0x1.85b94621d04ecp-785,
     0x1.a339fff51e755p-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9af37e58ad9ap-1009,
     0x1.4af1b02f0fb2ep-286, 0.0, 0x1.85f41b97144e4p-213, 0.0, 0x1p0, 0.0, 0.0,
     0x1.cd63d0890a54p-594, 0.0, 0.0, 0x1.bc9ce3642be2dp-180, 0x1.52b5a6d12e765p-609,
     0x1.c05ee6244df5ep-646, 0.0, 0x1.681ab0bd36a9dp-508, 0.0, 0x1.8ce3282d348d3p-601,
     0x1.5bb0c275a2c84p-848, 0.0, 0.0, 0.0, 0x1.36defa53ba4d5p-850, 0.0,
     0x1.d02a52176a842p-328, 0x1.b8b09d4594fd1p-328, 0.0, 0.0,
     0x1.76bea1df1237cp-1014, 0.0, 0x1.d73d9a210bf78p-599, 0.0,
     0x1.d3c6cc151798bp-543, 0x1.b049d3472d029p-966, 0x1.3588ca53d9972p-601, 0.0, 0.0,
     0x1.63cd980d19d0fp-77, 0.0, 0x1.a78a302dcd678p-325, 0.0, 0x1.d2a585a8d6108p-20,
     0.0, 0x1.e529e49135b23p-174, 0.0, 0.0, 0.0, 0x1.55fe7805a6f1dp-964, 0.0, 0.0,
     0.0, 0.0, 0x1.94b3c70411db2p-392, 0x1.bc7fc1d844b87p-784, 0x1.979bf11a554d9p-442,
     0x1.c88be16a0d09ep-887, 0.0, 0x1.6b7b2db05aaa3p-697, 0x1.edee9acb3db28p-476,
     0x1.020329925aa0ep-373, 0x1.75dc859508b9bp-791, 0x1.0781074a8f8p-7, 0.0,
     0x1.4375e59317cfdp-508, 0x1.150cefb4c03fdp-53, 0.0, 0x1.88162349297a6p-288,
     0x1.b65e9e4160b11p-568, 0.0, 0x1.277c3a07bef0ep-377, 0.0, 0x1.73b0e9db4771p-710,
     0.0, 0x1.aef4d427fabf3p-635, 0x1.e1b61c203f3e6p-680, 0.0, 0x1.56cb811a2a313p-389,
     0x1.53da87f6378fep-944, 0x1.a869cb9ae36cdp-627, 0.0, 0.0, 0x1.32fb34cc8d119p-565,
     0.0, 0x1.1d8fe3d89fca4p-331, 0.0, 0x1.d433cbe98ee37p-383, 0x1.676db2088ef6p-303,
     0.0, 0x1.89e5a0a091886p-986, 0x1.1bd934ca4dcdp-864, 0.0, 0x1.16e1ebadd6e29p-740,
     0x1.e7f05601d5a52p-514, 0x1.656b0ec9a23a4p-959, 0.0, 0x1.0b11d9ed0ad41p-458,
     0x1.120d1e6ab8c93p-766, 0.0, 0.0, 0x1.8259dd2efa1bp-682, 0.0, 0.0,
     0x1.6860d47526c8cp-525, 0x1.061bd6e971279p-272, 0x1.73bfaf96a92dap-959,
     0x1.08b893c11781ap-690, 0x1.f6fdb17fabc9dp-548, 0x1.ce22026a158e8p-559,
     0x1.38e3e4d2a9915p-150, 0x1.e5876b3fc2222p-871, 0x1.f875294ceb386p-489, 0.0, 0.0,
     0.0, 0x1.196fb6fd6c68fp-230, 0.0, 0x1.ba7f3f29bc37fp-401, 0.0, 0.0,
     0x1.98b02f5a59e0ep-734, 0.0, 0x1.10d6d9ab991cfp-3, 0.0, 0x1.5abb899052dedp-26,
     0.0, 0.0, 0x1.e2632a264d94fp-699, 0.0, 0x1.81e93701bd8f2p-668, 0.0,
     0x1.5b09e89b37ecfp-882, 0.0, 0.0, 0.0, 0.0, 0x1.f63e9f5bac8e3p-139,
     0x1.19b4fddd44eb6p-936, 0x1.8f83c9eaf1a29p-877, 0x1.22a57cece4052p-582,
     0x1.07f10ca85164ep-880, 0.0, 0.0, 0x1.dcc35613ed22cp-80, 0.0, 0.0, 0.0,
     0x1.fe17b62d8f2e5p-127, 0x1.58d7f63fc9f35p-560, 0.0, 0x1.a8d760eb56d15p-87, 0.0,
     0.0, 0x1.b956e0a5f6836p-835, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ef3b031e79282p-88, 0.0,
     0x1.6049510103b8dp-762, 0.0, 0x1.da36aa1b22b72p-379, 0.0, 0.0, 0.0,
     0x1.97cc7df4873f7p-81, 0.0, 0x1.f3737f1170be4p-467, 0.0, 0x1.5f1aeb7cbfc71p-495,
     0x1.29cdf8ac5c7ccp-717, 0x1.b0a93be1c7543p-979, 0x1.fd11c55c29d45p-559,
     0x1.5313858f2140ep-867, 0.0, 0x1.cf89906bf70d5p-229, 0x1.25dcf653db245p-260, 0.0,
     0.0, 0x1.d45cd7a879da1p-552, 0x1.68b7f16bb3bf8p-560, 0.0, 0.0, 0.0,
     0x1.d16c8282a5cc6p-169, 0.0, 0.0, 0.0, 0.0, 0x1.a2fe47fca3305p-180, 0.0, 0.0,
     0.0, 0x1.f2c66e349babcp-662, 0x1.a94bfb873fff7p-34, 0.0, 0x1.f5a9a036de85fp-972,
     0x1.eb44d52a9039cp-153, 0.0, 0x1.4787c6feebc7ep-844, 0x1.e98d600c573abp-934, 0.0,
     0x1.0363d23a046f2p-38, 0x1.0f99f7adf4cd2p-898, 0.0, 0x1.28be241445dcdp-801,
     0x1.fe925281444a8p-598, 0x1.cf08d4f414d9bp-443, 0x1.ce7a85dcac946p-773,
     0x1.af37216d254d4p-159, 0x1.aa890a8ccca7p-197, 0x1.a42a42489d0ebp-632,
     0x1.6c0b27f7743bbp-52, 0x1.eb39da2f4cefp-31, 0.0, 0.0, 0x1.8215d96452026p-230,
     0.0, 0.0, 0.0, 0.0, 0x1.e79f5a9305575p-661, 0.0, 0.0, 0.0,
     0x1.18d54ad635625p-464, 0x1.b47e2c63bc6e1p-88, 0x1.7b3c2710cec49p-153,
     0x1.a9a3d882cae16p-17, 0x1.d9780d18fa527p-9, 0x1.69c19554d5a61p-541,
     0x1.0bdec7a16276ap-503, 0x1.af45075813127p-360, 0.0, 0x1.220cbe8144e61p-849, 0.0,
     0.0, 0x1.3c2f668bf5b5dp-9, 0.0, 0x1.bb0dcc373dcffp-847, 0x1.a74c317fe508p-881,
     0.0, 0x1.23d766828bc51p-625, 0x1.b60a516b2011dp-512, 0.0, 0x1.d79bad4920f8ap-892,
     0.0, 0.0, 0.0, 0.0, 0x1.5770b0b2eadfap-914, 0x1.3b5feb842e8f7p-375, 0.0,
     0x1.0b912640b3c98p-121, 0.0, 0.0, 0x1.4c0dcb9403e0bp-267, 0.0,
     0x1.48434d2370f96p-853, 0x1.00b535b1c2f4dp-104, 0x1.a112f2874e1ffp-653,
     0x1.d0e3c7805cd3ap-551, 0.0, 0.0, 0.0, 0x1.3286cce19da4fp-46,
     0x1.76f8e23f8db02p-366, 0.0, 0x1.ca246c6552401p-213, 0.0, 0.0, 0.0,
     0x1.98fc2e71a28e5p-193, 0x1.d539518d8d07ep-722, 0x1.e23ef2dcd3833p-557, 0.0,
     0x1.a987074ffb59p-1019, 0.0, 0x1.57d2511a89fep-435, 0x1.560819a9a6f47p-929,
     0x1.84749b6c81e84p-1001, 0x1.b8a513e91cf7dp-269, 0.0, 0x1.678215f810fffp-669,
     0x1.2bb8b9e4571p-220, 0.0, 0.0, 0.0, 0x1.1216efe1f0c82p-349,
     0x1.582cc6e6dc743p-754, 0.0, 0.0, 0.0, 0.0, 0x1.744c44a0459c4p-609, 0.0,
     0x1.5d1e079826022p-872, 0x1.a7762a2a6e4ffp-294, 0.0, 0x1.3e23281f35dffp-246,
     0x1.e63a037bc5e21p-11, 0x1.ebdb9dbe30b4cp-813, 0x1.f53103a71e1d1p-302,
     0x1.1580919320238p-625, 0x1.8c01790a9e866p-799, 0.0, 0x1.6ddda56e2f443p-413,
     0x1.415a96d439806p-823, 0.0, 0x1.bf7c263b0cab4p-299, 0.0, 0.0, 0.0,
     0x1.cb7db7e775769p-571, 0.0, 0x1.293e70bd44cc8p-513, 0x1.8e330eebca5edp-783,
     0x1.17bf51c649p-870, 0x1.9a733de8d136dp-647, 0.0, 0x1.db00f482ab2e1p-794,
     0x1.0b4069848fbf9p-536, 0x1.90e7c891b9903p-858, 0x1.4e0b93d1b80d6p-113, 0.0,
     0x1.fa5976bfdaa21p-573, 0.0, 0x1.30100c8045411p-567, 0.0, 0x1.cf7dd3f064189p-940,
     0.0, 0x1.47829f973cac6p-1016, 0x1.909c9824112f5p-755, 0.0,
     0x1.a2d4f67a11155p-311, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.291bf0de8d9e9p-1003,
     0x1.140e9fe19e188p-665, 0x1.3c3dd4dacbe6dp-700, 0x1.6429c33b4a599p-642, 0.0,
     0x1.0d4e226b64427p-275, 0.0, 0x1.586613250b243p-600, 0.0, 0x1.d619d8cfa4f6bp-586,
     0x1.ae3e0295540c4p-361, 0x1.4d0372e69bf34p-380, 0.0, 0x1.0f7fb9599001cp-117,
     0x1.e25a56c2f867fp-815, 0.0, 0.0, 0.0, 0x1.169a69a6b3b67p-245,
     0x1.47835db83ba74p-904, 0.0, 0x1.6b1aadef9c419p-427, 0x1.6fecb1a9c4192p-720, 0.0,
     0.0, 0.0, 0x1.47f3574dd6c6p-610, 0x1.6351efada17ddp-246, 0.0,
     0x1.8d8c42a80a455p-726, 0x1.e5b55a3e4f22fp-969, 0.0, 0x1.d98a9f454ad16p-145, 0.0,
     0x1.6ebac5e27b596p-438, 0.0, 0.0, 0x1.535934e3c7daep-884, 0.0, 0.0, 0.0, 0.0,
     0x1.ce6b7c55330f9p-683, 0.0, 0x1.fbb6038952624p-919, 0x1.02e77f413a336p-936, 0.0,
     0.0, 0.0, 0.0, 0x1.30eea63bc2332p-599, 0x1.16479a8bec497p-281, 0.0,
     0x1.772b0b45ff37ep-944, 0.0, 0x1.6ec3245088acp-715, 0.0, 0x1.c892270d4657ap-28,
     0x1.0ea7063e987d7p-798, 0.0, 0x1.50edd296d2deap-406, 0x1.d6ba1fba87b67p-908, 0.0,
     0.0, 0x1.c0be3f1422292p-408, 0x1p0, 0.0, 0.0, 0.0, 0x1.f8052be17fe78p-613,
     0x1.70996443f3d0fp-713, 0.0, 0.0, 0x1.ff0de3f38b48ap-190, 0.0,
     0x1.3e57c5510ba4fp-430, 0x1.b38aedd87a20fp-884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74ad8c783b063p-793, 0x1.81f013aabaebp-799, 0x1.c696928a87781p-359,
     0x1.12085bae04f79p-316, 0x1.e49d427395f39p-446, 0.0, 0x1.585812e4df00ap-452, 0.0,
     0.0, 0.0, 0.0, 0x1.8e110872c681bp-908, 0.0, 0.0, 0.0, 0x1.94039599ccd15p-303,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43c48c7f867bdp-296, 0x1.9d67ee9c0bc51p-808,
     0x1.97337220aee34p-911, 0.0, 0x1.8218b1a048ac8p-13, 0.0, 0x1.3ee4f2b61b348p-300,
     0.0, 0x1.4684310d1ff82p-442, 0x1.d4752cbec41e6p-713, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4c884f1860cf8p-925, 0x1.55ed75194cdap-972, 0x1.51f48cb1781c7p-303,
     0x1.2fb517f6896ebp-399, 0.0, 0x1.5514b6f42619bp-235, 0.0, 0x1.04dc9229e1c36p-608,
     0.0, 0.0, 0.0, 0x1.d32e1164a635dp-885, 0.0, 0x1.0199d87b5c30ep-47, 0.0,
     0x1.452177ee19af1p-532, 0x1.a686c1115eb53p-821, 0.0, 0.0, 0.0, 0.0,
     0x1.f595dc56cf0a3p-563, 0x1.0229167d0252fp-653, 0x1.95c55b15d7891p-452,
     0x1.c1de35e94a4bp-841, 0x1.f2dc9375ebafbp-92, 0.0, 0.0, 0x1.1d00677f69ep-980,
     0x1.eca0ec21c0d5bp-358, 0.0, 0x1.9b302fc986fb9p-772, 0x1.89106cabdc3ap-558, 0.0,
     0x1.b5698f7e675d6p-328, 0.0, 0x1.91512527cc65ap-717, 0.0, 0x1.5852eca5900b8p-939,
     0x1.5c408a155bae2p-875, 0.0, 0.0, 0x1.7d03094b5b8fcp-835, 0.0, 0.0,
     0x1.b973b78e8c29dp-1020, 0x1.740469c76ae2ap-55, 0x1.d380f46a07371p-886, 0.0, 0.0,
     0x1.78ff541ba238p-594, 0x1.e11d660d9a782p-654, 0x1.d71effedada93p-935,
     0x1.b614f8bcc20e8p-649, 0.0, 0x1.578cfe89a86e9p-351, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df9b5ba6923bap-385, 0.0, 0x1.c97b865462ccep-713, 0x1.f1ad502a55e78p-761, 0.0,
     0x1.bfe2c253f89fbp-454, 0x1.891b52f4be78bp-726, 0x1.3f7968e2c2133p-67, 0.0, 0.0,
     0x1.7c4e5ec69e19cp-491, 0x1.daee881498d7dp-659, 0x1.2d3ecc889dff7p-399,
     0x1.1a049d11637fbp-372, 0x1.aea1a8dc69072p-1015, 0x1.9c6776d04630dp-603, 0.0,
     0x1.4ed60bb8c544fp-458, 0x1.24f3ed81e6e4ap-311, 0x1.5dee4280c69dcp-199,
     0x1.53b7149c54587p-248, 0.0, 0x1.d598c1e4a02e5p-415, 0.0, 0.0, 0.0,
     0x1.0a3ac190a9ca1p-150, 0x1.1f4338cb95435p-982, 0.0, 0.0, 0.0,
     0x1.1f8caa8fd7194p-873, 0.0, 0.0, 0.0, 0x1.3569349ad2b0ap-491, 0.0, 0.0,
     0x1.a313b1fc18f05p-1020, 0x1.f7e8d75b4007ep-723, 0.0, 0.0, 0.0, 0.0,
     0x1.8f1e51ba1bf3ap-902, 0x1.d6945d88092bfp-207, 0.0, 0x1.981bd54fdab9cp-762, 0.0,
     0x1.dcb435218c5p-344, 0.0, 0.0, 0.0, 0.0, 0x1.1701ec8f5f2ccp-185,
     0x1.daa558bc4ad4dp-1006, 0.0, 0x1.dbf4cab677998p-969, 0.0, 0.0,
     0x1.2d3a8fc0e40ffp-458, 0x1.a26f480ce9ac7p-519, 0x1.ea89c8803dba6p-521,
     0x1.e284217e9ef76p-966, 0.0, 0x1.fbc3e1879eebap-378, 0x1.3dd34a7b8c1d2p-245,
     0x1.3b15267bc517cp-763, 0.0, 0x1.686ae56f1745bp-595, 0x1.cd5fa2dacdf9ap-956, 0.0,
     0.0, 0.0, 0x1.0ddc6c95a2a8ap-981, 0.0, 0x1.e300f5d6a31b9p-660,
     0x1.f4bced2bebc8dp-954, 0x1.9fd4bc5d60588p-185, 0x1.12165b9698851p-38, 0.0,
     0x1.f823ae937e3cdp-821, 0.0, 0.0, 0.0, 0x1.3118142c662afp-744, 0.0, 0.0, 0.0,
     0.0, 0x1.6cdfc95355b06p-931, 0x1.9959d44563b7ep-399, 0x1.d4116dcb44c19p-597,
     0x1.3576b51a2cad1p-450, 0.0, 0.0, 0x1.83ff9a35fe1d5p-331, 0x1.7b7a71e9923a7p-66,
     0.0, 0.0, 0.0, 0x1.6c14725bcf81ap-202, 0x1.10f2f2caac4a7p-491,
     0x1.dba27013183c3p-88, 0x1.5139b70596107p-929, 0x1.66b6acb9eb6f1p-431, 0.0, 0.0,
     0x1.70ee836379fd1p-79, 0.0, 0.0, 0x1.2e48836dc2003p-490, 0x1.e09d671c22364p-654,
     0.0, 0x1.ceacbb43a837cp-756, 0x1.79f296924fcc2p-112, 0x1.7dd6871b84629p-510,
     0x1.ddd4067b5ccb9p-341, 0.0, 0x1.af0072576fe35p-156, 0.0, 0.0, 0.0,
     0x1.24dc70a1a587dp-751, 0x1.fac9a496504e8p-477, 0.0, 0.0, 0x1.066c3243ecd06p-250,
     0.0, 0.0, 0x1.afb7d89e872abp-763, 0.0, 0x1.e7c3121bac333p-65, 0.0, 0.0,
     0x1.a9d40ceca9321p-932, 0.0, 0x1.42d488686d70ap-93, 0.0, 0.0,
     0x1.73bff3078f56p-213, 0x1.34c94ef766847p-851, 0.0, 0x1.b63d8e9fa2ebcp-438, 0.0,
     0.0, 0x1.5d66b2bccaf1fp-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.176d4cafa07efp-739, 0.0, 0.0, 0x1.190120849787ep-212, 0.0,
     0x1.ca5602dcaeb8bp-874, 0x1.be4429258596cp-266, 0.0, 0x1.c61a02618757fp-366,
     0x1.2a62859baf8bdp-306, 0x1.3a8723034d2abp-33, 0x1.bfa847a9b70c9p-410,
     0x1.e1d6d189742e1p-92, 0.0, 0.0, 0x1.6282ea12e5034p-733, 0.0, 0.0,
     0x1.246dc6313bffp-76, 0.0, 0.0, 0x1.c02d0210b3959p-953, 0.0,
     0x1.d18ffdc678bd6p-330, 0.0, 0x1.3f127cd2c3572p-626, 0x1.03e5c4413ed45p-172,
     0x1.3de47e0249d3dp-106, 0.0, 0.0, 0.0, 0.0, 0x1.fe913e5bb119dp-79, 0.0,
     0x1.b4c00c746fda1p-986, 0.0, 0.0, 0.0, 0x1.31fae64d17f4p-602,
     0x1.e9ee91fae8404p-127, 0.0, 0x1.19313a2eb72c2p-522, 0.0, 0.0, 0.0, 0.0,
     0x1.14735ef5ae49bp-1019, 0x1.5a80c121ba45fp-668, 0.0, 0.0,
     0x1.dfcc2df21ba9fp-773, 0x1.ab42d72539fe6p-690, 0.0, 0.0, 0x1.b76f392c760e9p-689,
     0x1.f2ef0b3140b6ep-17, 0x1.5522fe482197ap-942, 0x1.9236c83a7d146p-718, 0.0,
     0x1.783f892b886bfp-60, 0.0, 0x1.3acae504cde34p-67, 0.0, 0.0, 0.0,
     0x1.965e56a6b27cfp-32, 0x1.d280717c9a039p-391, 0x1.5f8e05fad27c1p-240, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f4b123085c542p-852, 0x1.ac54f581ff19ep-204,
     0x1.ee6b67794f397p-814, 0.0, 0x1.7e9db936c0ec6p-89, 0x1.f9b77f1bb49f1p-177, 0.0,
     0.0, 0x1.a79b1a1f2113dp-101, 0.0, 0x1.0ded0b212545ep-539, 0x1.b3912eae31217p-338,
     0x1.18c9c6bc8f7dcp-915, 0x1.8b285ae30b65ap-247, 0x1.3145e61cf75e5p-184, 0.0, 0.0,
     0x1.291079d7fd78bp-146, 0.0, 0x1.143b109c3105fp-906, 0.0, 0x1.f7092f36d320bp-113,
     0x1.f2fa637d12b55p-86, 0.0, 0x1.038086cb7361cp-781, 0x1.0ed6b3935cd49p-82, 0.0,
     0.0, 0.0, 0x1.67a56f41b8736p-495, 0x1.fae1aad10299p-85, 0x1.3f43d55a5c233p-637,
     0x1.48d4a7b80a88ap-607, 0x1.3c60384bae2b6p-515, 0.0, 0x1.d3fca9d82bccep-771, 0.0,
     0x1.2470a8c44e504p-152, 0.0, 0x1.d201b877a332p-806, 0x1.33db6d268ab68p-523,
     0x1.61e401bbdf4a1p-196, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3f986620b3ap-262,
     0.0, 0x1.f222608b7b568p-590, 0x1.e962fc1763143p-183, 0x1.45532587f8849p-885,
     0x1.73fd900cc0a09p-277, 0.0, 0.0, 0x1.242ea07f5e563p-437, 0.0,
     0x1.a115263c6fd61p-860, 0.0, 0x1.cccaba795a5adp-108, 0.0, 0.0, 0.0, 0.0,
     0x1.8eaca86bc526fp-638, 0x1.a1bbe3e7a0ef7p-413, 0x1.9a4d2b388f2dfp-857,
     0x1.c02a3b846cafap-162, 0.0, 0.0, 0x1.592b86c847d62p-869, 0.0, 0.0,
     0x1.95449e4e19968p-259, 0x1.f94a0c80f108ap-976, 0x1.a670b44742992p-81,
     0x1.9a2dedac081c6p-408, 0x1.b3bd2f492f2fdp-232, 0x1.29c7a75ef7f0ap-476, 0.0, 0.0,
     0x1.613eedc187c47p-158, 0x1.047434bcbb256p-900, 0.0, 0x1.aab3eb4262f6ap-702, 0.0,
     0x1.8acaa4edf0912p-3, 0.0, 0.0, 0.0, 0.0, 0x1.7cfba2d37905dp-201,
     0x1.160d0f016af42p-575, 0.0, 0x1.4493309c18ebp-85, 0x1.001f334e53ebfp-1019, 0.0,
     0.0, 0.0, 0.0, 0x1.f66836d4c2042p-102, 0x1.1c562ef100516p-104, 0.0, 0.0,
     0x1.3839641257fdap-296, 0x1.bb5d0f506d8a1p-27, 0.0, 0x1.047ebc3af0169p-964,
     0x1.cdae5fa44bc16p-856, 0.0, 0x1.aee1ca3bbd5d3p-683, 0x1.67fbb97775834p-972, 0.0,
     0.0, 0.0, 0x1.6b2398b89f68cp-160, 0x1.4dbfbad05eadep-857, 0x1.260b42949ccbcp-414,
     0.0, 0x1.fe69e5e9136cbp-430, 0.0, 0.0, 0.0, 0x1.549f293a6695cp-800, 0.0, 0.0,
     0x1.eb227a90f042ap-726, 0x1.f3d5954be384ap-121, 0x1.ea5a89d3f5b8ap-687,
     0x1.6cd7bd710dcd1p-748, 0x1.c58ac10621199p-601, 0.0, 0.0, 0x1.50b4e6b70629cp-324,
     0.0, 0x1.11f49e5124364p-925, 0x1.d154221f1b819p-200, 0.0, 0.0, 0.0,
     0x1.21f1de81b72a9p-631, 0x1.07a0da05b9e71p-85, 0.0, 0x1.494b78acb9e0ap-127,
     0x1.23b62a7c2c50ep-721, 0.0, 0x1.2ce132a5a2096p-442, 0x1.0cb868fc731acp-943, 0.0,
     0.0, 0x1.34f3a52364cdep-154, 0.0, 0.0, 0x1.39a301ec15796p-528, 0.0,
     0x1.18aeae2c41a8ap-709, 0.0, 0x1.5c2d0e123a366p-779, 0x1.db774c20842c8p-595, 0.0,
     0x1.67e545fc36131p-151, 0x1.452d18038b60cp-452, 0.0, 0x1.4aed4235a4fccp-15, 0.0,
     0x1.83ae1d9961e3dp-317, 0.0, 0x1.d7a33eacfcf4cp-180, 0x1.826b57fd2d829p-86,
     0x1.70a858f1360ebp-311, 0x1.8fdeeeef96ae5p-558, 0.0, 0x1.cb037390bab05p-649, 0.0,
     0.0, 0x1.376f352e2d82ap-205, 0.0, 0.0, 0.0, 0.0, 0x1.04c1ac01ccda4p-547
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
            tmp1 = Sleef_finz_truncd2_kvx(tmp0);
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
    printf("Sleef_finz_truncd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_truncd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
