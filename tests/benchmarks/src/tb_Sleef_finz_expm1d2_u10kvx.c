/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1d2_u10kvx.c --function \
 *     Sleef_finz_expm1d2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.39c08ff3d53e1p-227, 0x1.256fb3090cb48p-821, 0.0, 0.0, 0x1.f79f276ced3fp-347,
     0.0, 0x1.487ac3c186c2fp-875, 0.0, 0x1.1944050deac1ap-925, 0x1.f163b77aebcp-759,
     0x1.faf70327f3d1p-194, 0.0, 0.0, 0.0, 0.0, 0x1.5e9c5285a287bp-359, 0.0, 0.0, 0.0,
     0x1.4f4182f9c7e84p-279, 0x1.c3b241ee2c40bp-617, 0.0, 0x1.a094bd2acf4a1p-256, 0.0,
     0x1.b2dd63bf03c19p-401, 0.0, 0x1.86e543ab7872ep-857, 0.0, 0x1.065947319f2f1p-607,
     0.0, 0x1.03ebdae6d2d8ep-149, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cff12ad88bda4p-929,
     0x1.e4268fadb6c31p-610, 0x1.d7194f7504707p-478, 0.0, 0x1.39ac0b711940ep-29,
     0x1.497e8aa4e8befp-546, 0x1.af5cf3188922p-300, 0x1.99d4ff11f86ddp-811,
     0x1.1a08991536c82p-647, 0x1.eb241e1242d01p-720, 0x1.1de19adaa14f2p-373, 0.0, 0.0,
     0x1.7a21ac1d38f65p-727, 0x1.b424abd0d11c2p-262, 0x1.1c80222f3f011p-905,
     0x1.bdd1894a90e4p-822, 0x1.51f5cd23ccdd4p-110, 0x1.661ce306feb65p-362,
     0x1.fdf83fdc810d7p-925, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c5b1a93d7d87p-624,
     0x1.2f19900a4fdfdp-202, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7a8cd3ebc7cf8p-363,
     0x1.5c90eecab9084p-966, 0x1.720b697f71cdcp-54, 0x1.d51b6b2a5e412p-987,
     0x1.760d88eea82d6p-563, 0.0, 0.0, 0x1.6ccae4ab7a001p-108, 0x1.a6880aad172dbp-687,
     0.0, 0.0, 0x1.2ffc09e853a0fp-1022, 0x1.91f084bae42cp-104, 0x1.d16b29599e1cfp-585,
     0.0, 0.0, 0x1.d26767d1327c2p-1004, 0x1.e7854a2340697p-28, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9508b1f464753p-956, 0.0, 0x1.a61128470c6a9p-913, 0.0, 0.0,
     0x1.b927c97b3bf98p-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0fbebe20dacep-63, 0.0,
     0x1.b0111027877dfp-155, 0.0, 0x1.a5d1cbb737aa5p-740, 0.0, 0x1.f3d4a19bd8597p-654,
     0.0, 0x1.31bd2b33d4072p-356, 0.0, 0x1.97d20d3300d1cp-807, 0.0,
     0x1.4a0d7d391be57p-770, 0x1.ff1ce5210af6ep-554, 0x1.8d3f3d253cd93p-666,
     0x1.ad1bc4458383bp-214, 0.0, 0x1.37e7ebf8918f3p-551, 0.0, 0x1.65c100dd4f8e6p-630,
     0.0, 0x1.12f2233531462p-706, 0x1.83643b828f07ep-73, 0x1.18e473c0b691ep-933,
     0x1.7472eedc72134p-818, 0x1.3c117ea1f4f08p-22, 0x1.cc8231fd72575p-365,
     0x1.f34775c912c15p-840, 0.0, 0.0, 0.0, 0.0, 0x1.ae40f13c31508p-902, 0.0, 0.0,
     0x1.7a6387ee33027p-517, 0x1.b2903fb1fa9e6p-916, 0x1.bd3a192757369p-642, 0.0, 0.0,
     0.0, 0.0, 0x1.9b005ba75373bp-531, 0.0, 0x1.c49f0f60c29dcp-475,
     0x1.192ed5f19225ep-288, 0x1.9cd9fbc18b07dp-400, 0x1.e63634dccb318p-81, 0.0, 0.0,
     0x1.c1d8449080858p-593, 0x1.37060153fb68p-844, 0.0, 0.0, 0.0, 0.0,
     0x1.46211064312bap-310, 0x1.7c828ae2d0ef4p-575, 0x1.5691abd6b1f2ep-599,
     0x1.5633532cc9439p-959, 0x1.6055809084edbp-1017, 0x1.095048b9c15dap-392,
     0x1.9017a1434140dp-797, 0.0, 0.0, 0x1.4d5b77862d60bp-63, 0.0, 0.0,
     0x1.0fca5150ceacfp-629, 0x1.c748de243e0c4p-165, 0x1.8cbeaebcde938p-750, 0.0, 0.0,
     0x1.0d1cc0baaf15dp-199, 0x1.6c8a10e91fe21p-777, 0.0, 0x1.c27cd545b195ap-50,
     0x1.7925f8c2c87ap-616, 0x1.16899ae673a43p-486, 0.0, 0.0, 0.0,
     0x1.e7caed8a509d8p-738, 0.0, 0.0, 0.0, 0x1.49a7dbe37c488p-830,
     0x1.7c26e2afb854fp-761, 0x1.c4d20117c8b06p-817, 0x1.9e25a3f81034bp-618,
     0x1.736c89527e28p-514, 0x1.47395576fdb6ep-811, 0x1.5ce168aa26eb7p-451,
     0x1.3ab2d94a8c41bp-886, 0.0, 0x1.83b075525589ep-958, 0.0, 0x1.110db555ddc9ep-888,
     0.0, 0x1.42a16af42260ep-59, 0.0, 0x1.1e0a45d54082bp-1004, 0x1.c0d672020ddaap-356,
     0.0, 0.0, 0.0, 0x1.b32171f8eba74p-875, 0x1.52175b2233e8cp-416, 0.0, 0.0, 0.0,
     0.0, 0x1.415ce13276771p-613, 0.0, 0.0, 0x1.f611e9ba22dd5p-630, 0.0, 0.0,
     0x1.f310b43395784p-603, 0x1.b1e97c636d9cbp-479, 0.0, 0.0, 0.0, 0.0,
     0x1.2f6330ae03821p-102, 0.0, 0x1.fedecb431e786p-268, 0x1.1ad557376a5fdp-745, 0.0,
     0x1.8be25347920b2p-469, 0x1.569b6c1f9ebd8p-595, 0.0, 0x1.07be1cd8637d2p-475, 0.0,
     0.0, 0.0, 0x1.c8b861a5b59e1p-740, 0.0, 0.0, 0x1.1c781fd82dd6ep-195, 0.0,
     0x1.0c15e9765938fp-366, 0x1.7f2582410e5acp-929, 0.0, 0.0, 0x1.ba3135fed8dacp-488,
     0x1.ccdcc3435e555p-796, 0x1.95b9e2bbfa5dp-624, 0.0, 0x1.30dcbe8de7b41p-455,
     0x1.74f4f33d24408p-55, 0x1.2887926ec74ecp-690, 0.0, 0x1.4070c0bd9fab6p-41, 0.0,
     0x1.880235b63b69p-133, 0.0, 0x1.341736c2df86bp-32, 0.0, 0x1.063f861be5311p-441,
     0.0, 0.0, 0x1.e87223a8a8e77p-647, 0.0, 0.0, 0.0, 0x1.7465125adf76cp-517,
     0x1.ab71cc3634c18p-858, 0.0, 0.0, 0.0, 0.0, 0x1.0f639c296c824p-1003, 0.0,
     0x1.6b6bbb133b9d3p-807, 0x1.ecabbe8165d69p-358, 0x1.d83d6b1cc731bp-839, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a585b5591b767p-264, 0.0, 0.0, 0x1.d4102cd028298p-440,
     0x1.79ee0addd0ea8p-68, 0x1.7cdf16d3f0d12p-593, 0.0, 0.0, 0.0,
     0x1.38ffda992ac2ep-271, 0.0, 0.0, 0x1.f1db10870eab9p-231, 0.0,
     0x1.abab74c03c279p-185, 0x1.afcc1e35f168ep-279, 0.0, 0x1.074b05c35cb44p-319, 0.0,
     0x1.7617d5fc39f05p-1017, 0.0, 0.0, 0x1.7ce047ba61628p-628, 0.0, 0.0,
     0x1.977439392c09p-368, 0.0, 0.0, 0x1.e3d2a2508301dp-703, 0.0,
     0x1.ca65a1e08729ap-657, 0.0, 0x1.cb3b97e8bd50bp-507, 0.0, 0x1.708166869c61dp-302,
     0.0, 0.0, 0x1.ebd64c19a3fdp-183, 0x1.88407bec58dd2p-837, 0x1.41e468c81c3a4p-767,
     0x1.eee57919699c3p-972, 0x1.aa6a62911fa3ep-442, 0.0, 0.0, 0x1.0b7515d3a4fb8p-376,
     0.0, 0.0, 0.0, 0.0, 0x1.8e98c88e6bb29p-374, 0x1.98ec1f5973009p-869,
     0x1.1c5a915ccd86fp-485, 0.0, 0x1.b5ffd1ea142b7p-180, 0.0, 0.0, 0.0,
     0x1.9934459d38501p-824, 0x1.b0f87156c089cp-434, 0.0, 0.0, 0.0,
     0x1.3712a3b4ff053p-364, 0.0, 0.0, 0x1.9b61934ef7159p-538, 0x1.ce2b1dd9878f8p-375,
     0.0, 0x1.e9cf727502137p-447, 0x1.13c0647799d6ap-827, 0.0, 0.0, 0.0,
     0x1.65f29cb151498p-977, 0x1.8e06ed3c2c353p-663, 0x1.73b117b841919p-184,
     0x1.4b904d6fbb491p-11, 0.0, 0.0, 0.0, 0.0, 0x1.8c9c65c4ddc6ap-635, 0.0,
     0x1.91348fa6e9884p-500, 0x1.7e4008e42363fp-675, 0.0, 0x1.396204aa5b4a9p-572, 0.0,
     0x1.d3251014f9b14p-958, 0x1.a43eaefce0226p-863, 0.0, 0.0, 0.0,
     0x1.6d4774403e47ep-60, 0.0, 0.0, 0x1.463cc5961c71dp-489, 0.0, 0.0, 0.0, 0.0,
     0x1.cdd23712e9a9bp-567, 0.0, 0.0, 0.0, 0x1.20bb3c968a377p-65, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.344142e73391bp-617, 0x1.bd37ec16cc3c1p-174,
     0x1.0e54ba17f32cap-684, 0.0, 0.0, 0.0, 0x1.d5c78b35c685ep-6, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.32e65562e25a2p-4, 0x1.2ef1568bd960bp-9, 0x1.ed0ac0123ee25p-525, 0.0,
     0.0, 0x1.6099a867caeb2p-424, 0x1.49460e8f52d5dp-607, 0x1.8e472864dc89fp-791, 0.0,
     0.0, 0.0, 0.0, 0x1.23247009a7e35p-56, 0.0, 0x1.c194f791aa454p-210, 0.0, 0.0,
     0x1.c44123a5a4eb7p-107, 0.0, 0x1.3faf6b48be13cp-277, 0.0, 0x1.d5604c5e76d6p-461,
     0.0, 0x1.9e25a8fec0392p-747, 0x1.e7c8bdac2856dp-609, 0x1.a83243de8c6a2p-526,
     0x1.08c94370a332p-565, 0.0, 0.0, 0x1.5af1de73ec6d7p-171, 0x1.589c43d0f972ep-829,
     0x1.31bf269b6fdffp-278, 0.0, 0.0, 0x1.e415667429c9dp-557, 0.0,
     0x1.353cc208c5911p-97, 0x1.aa275b7eab2e3p-784, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eaef89330b98ap-623, 0x1.a985c07bad399p-156, 0x1.d1c0106446572p-526, 0.0, 0.0,
     0.0, 0.0, 0x1.0529acb4f8136p-699, 0.0, 0.0, 0.0, 0x1.2189e133e9514p-506, 0.0,
     0x1.b306ba8fa8cb8p-718, 0x1.6a660734108b1p-873, 0x1.ed8911b7effcep-782,
     0x1.b82d48f827d3p-848, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89b2707b73465p-540,
     0x1.081658bd236d8p-9, 0.0, 0.0, 0.0, 0x1.7ae7373f7f93ep-43, 0.0,
     0x1.de0936c74b4a3p-385, 0x1.a9d2fbc2c7a6ap-439, 0x1.68bf04e8bf3a3p-797, 0.0,
     0x1.4075ce11c76e9p-393, 0x1.8a014fe832a17p-279, 0.0, 0x1.0d09d56987554p-563,
     0x1.fa05dabff5f8cp-793, 0x1.6abf8cdc507cdp-875, 0.0, 0.0, 0.0,
     0x1.0aabd723bfceap-580, 0x1.979bee02cc66fp-498, 0.0, 0.0, 0.0,
     0x1.c3f06c1644ae6p-912, 0.0, 0.0, 0.0, 0.0, 0x1.77ca89bf18ecep-568,
     0x1.77d901b19b5dap-374, 0x1.0330fe2d68d1fp-307, 0.0, 0x1.175584586f22p-931, 0.0,
     0x1.20c830bd2f736p-332, 0x1.fae2522a93cbap-557, 0x1.a51ec0de9e7c7p-790, 0.0,
     0x1.fa873b0cd1c18p-156, 0.0, 0x1.793c304b81395p-649, 0x1.d46afff73873ep-564, 0.0,
     0.0, 0.0, 0.0, 0x1.521daaa4676dcp-925, 0x1.a297fee6d85f8p-321, 0.0,
     0x1.0e50dbc4da393p-271, 0.0, 0x1.8806ccd2cbf01p-353, 0x1.b6ca05ec30654p-706, 0.0,
     0x1.f1a68685b97b5p-455, 0x1.076f717bd3ecbp-772, 0x1.b34487945efd6p-72, 0.0, 0.0,
     0.0, 0x1.83b4e290276d9p-745, 0x1.e2f834b457003p-8, 0.0, 0x1.d0ffc75c60408p-347,
     0x1.50cdb9d17aa86p-812, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85c9ad173ed7p-477,
     0x1.e17838aea76ecp-930, 0x1.51dbc4ba17c02p-223, 0x1.65c699ec7828ep-58,
     0x1.0f0518db33effp-709, 0.0, 0.0, 0x1.4239cd282feffp-477, 0.0,
     0x1.8a141b0cacd26p-114, 0.0, 0x1.ac3489e399397p-338, 0x1.e721a53846521p-772, 0.0,
     0x1.5015b834a50b8p-570, 0.0, 0.0, 0x1.d1042414a3f78p-882, 0.0,
     0x1.6011012f5c196p-668, 0.0, 0.0, 0x1.98e06801aab3bp-891, 0.0,
     0x1.6c19111ee55f3p-280, 0.0, 0x1.ab6f9d1daccc9p-111, 0.0, 0x1.29e89e833661p-244,
     0x1.94a2dfaaa63f8p-650, 0x1.b7a87624b70f2p-591, 0.0, 0.0, 0x1.afcd20ea511ccp-45,
     0.0, 0x1.8031da340bfadp-176, 0.0, 0x1.ac4639b09db9fp-979, 0x1.cc874a72cbd4ep-342,
     0x1.161dbb862eb56p-313, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf326fa1061d1p-943, 0x1.7faf321d7670ap-791, 0x1.1e7934660b8cep-836, 0.0, 0.0,
     0x1.4bc8ab9dcfc7ap-203, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86571f46724ffp-1012, 0.0,
     0x1.21574dc889411p-356, 0.0, 0x1.b4cf26f70e35ep-466, 0x1.4bbc5b2fafa9fp-948, 0.0,
     0x1.62dbff5d2c9d1p-194, 0x1.1d122004aa72fp-546, 0x1.3afb3257774e8p-710, 0.0, 0.0,
     0x1.408216b67011dp-905, 0.0, 0x1.933199df9a988p-819, 0x1.2fb974c7747d4p-970,
     0x1.a8c9188957481p-737, 0x1.64813f28129dbp-453, 0.0, 0.0, 0.0, 0.0,
     0x1.4998f5fccf768p-73, 0.0, 0.0, 0x1.0738cf202e1afp-370, 0.0, 0.0,
     0x1.92c51a0b52b51p-426, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d1eafeee4793fp-104,
     0x1.38086dd5a4be2p-243, 0x1.36d1c35c1c6cap-613, 0x1.12515627bb3afp-604,
     0x1.3899c30efb453p-248, 0x1.f6de573f067e6p-939, 0.0, 0x1.77dbab8e7c7a1p-337, 0.0,
     0.0, 0x1.3392c7b5ff04fp-53, 0.0, 0x1.33750a09ec0f9p-1, 0x1.feada99ac95dfp-1022,
     0.0, 0x1.b9074c7e96bc7p-543, 0.0, 0x1.e6932baa124fbp-215, 0x1.61867dc05122cp-888,
     0.0, 0x1.06b6ad29cf49p-211, 0x1.aa418bea2f942p-690, 0x1.4c714ddad964fp-853,
     0x1.2ccf43c6ef005p-814, 0.0, 0x1.cc55090eab7b2p-472, 0x1.ef9cf29cb7c35p-156,
     0x1.596dbc574b82fp-162, 0x1.4a2e3516ed70dp-57, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f3dc78a96172fp-343, 0x1.9cae796533229p-637, 0.0, 0x1.312f367c913fp-276,
     0x1.938d3ff779c58p-1001, 0.0, 0x1.3cf1be50b719fp-941, 0.0, 0.0,
     0x1.e898b3da625f3p-143, 0x1.8453a776187cdp-869, 0x1.75105045e95ep-640, 0.0,
     0x1.0b471d49a61e2p-246, 0.0, 0x1.c323bdec673eep-2, 0x1.b216e6317aabap-749,
     0x1.0185cf419c1b3p-886, 0x1.be567e0522068p-149, 0x1.b0d5bd3b3ff83p-365,
     0x1.b8082a9241d84p-58, 0.0, 0x1.e43ad7ad5560ep-648, 0x1.5cb8c3386c1dfp-118, 0.0,
     0x1.9e4e268b54f72p-600, 0.0, 0.0, 0x1.92ac019aac0b8p-645, 0.0,
     0x1.c542c78ba9d3ap-404, 0.0, 0.0, 0.0, 0.0, 0x1.d5c16fa46d081p-346,
     0x1.6a9822f7095f1p-237, 0.0, 0x1.4f39303dcd812p-803, 0.0, 0.0,
     0x1.38370c90fd19bp-275, 0x1.221accba9ad7bp-1019, 0.0, 0x1.cc2571cc517acp-695,
     0x1.1131cdb58e0edp-225, 0.0, 0x1.a915149acf8cbp-438, 0.0, 0.0, 0.0,
     0x1.e113c30384314p-104, 0x1.98dc616072a0cp-521, 0.0, 0x1.a10f12cb79c4ep-81,
     0x1.0237eda998194p-255, 0x1.22b3eeb526e32p-319, 0.0, 0.0, 0x1.0d399f946438cp-652,
     0.0, 0x1.5a294fdde1e2cp-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41182939eb221p-791,
     0.0, 0.0, 0.0, 0x1.58c928a215f0ap-778, 0x1.d243988602b49p-957,
     0x1.2c3eb4ca62496p-882, 0x1.d5a26cb02036ap-389, 0.0, 0x1.8e4c96dd1fa86p-26, 0.0,
     0.0, 0x1.de5cf63155e42p-255, 0x1.053caf84ec1e1p-715, 0.0, 0x1.4503e13b9e37ap-758,
     0x1.14bf7c565e19bp-774, 0.0, 0x1.74eb10c6830dbp-293, 0x1.1430b5fa1cd3dp-1022,
     0x1.704ca7819cdc6p-565, 0x1.62b34b3ad4686p-265, 0.0, 0x1.4c9880509347dp-352, 0.0,
     0x1.316720045679p-805, 0x1.42bfc92112709p-668, 0.0, 0.0, 0.0, 0.0,
     0x1.020a8adcf1b24p-562, 0x1.964dec2383a71p-252, 0.0, 0x1.913885c042b62p-421, 0.0,
     0x1.4d60cb5d79028p-1017, 0.0, 0.0, 0.0, 0x1.64842539a4a54p-77, 0.0,
     0x1.dcc5815d2186bp-341, 0x1.4df3263aee393p-763, 0x1.3791138a61eccp-896,
     0x1.6713dd814248cp-782, 0x1.e3397fa40d388p-73, 0x1.f1f5b05186f93p-302,
     0x1.f8cdc185122f3p-845, 0x1.dd9ee0ff09102p-571, 0x1.962c7e93326b6p-499, 0.0,
     0x1.579060c03fe66p-922, 0.0, 0.0, 0x1.d8e2e5563231ep-32, 0.0, 0.0, 0.0, 0.0,
     0x1.8cafa34d7c745p-740, 0x1.d89f4a84e801dp-864, 0x1.b4b4eaf7fab2dp-676,
     0x1.7935905a507d7p-769, 0x1.18c7b1cd1c643p-798, 0.0, 0x1.9cd7227a6712p-328, 0.0,
     0x1.c65baaed31496p-233, 0x1.5602ed476af5fp-665, 0.0, 0.0, 0x1.87a00a66ddc4fp-226,
     0x1.d08b461bdc1d9p-908, 0x1.ff4c5c3f57bcdp-357, 0x1.47be017173a43p-63, 0.0, 0.0,
     0x1.605385184edfep-621, 0x1.c4f5d761e059ap-485, 0.0, 0x1.a896740faa52dp-909, 0.0,
     0x1.621370e070838p-80, 0x1.da622a89860f3p-679, 0.0, 0x1.8c70ed5e5fb41p-175, 0.0,
     0x1.8ff1d9a23dd3cp-165, 0.0, 0.0, 0x1.9acc209624df9p-537, 0.0,
     0x1.0b27eba51fb2p-958, 0x1.e9d6af441b538p-65, 0x1.9f31cd2c3b8c8p-146,
     0x1.72d2e547705b4p-290, 0x1.1a44611978284p-901, 0.0, 0x1.6ee336ca9f397p-542, 0.0,
     0x1.41f7267d45a75p-687, 0x1.f708fa0e1abep-389, 0x1.df74f40e8eab4p-754,
     0x1.56c98c28b4533p-715, 0.0, 0x1.45b674cf40b55p-903, 0.0, 0x1.eb4954b12e82p-21,
     0.0, 0x1.610b14d02478ep-616, 0.0, 0x1.6c730ae36b4f9p-983, 0x1.604ee98f0b161p-221,
     0x1.12049b86fa217p-811, 0.0, 0.0, 0.0, 0.0, 0x1.4a099006c6356p-832,
     0x1.fee30e3437aeep-244, 0.0, 0x1.fd1ed09c0f542p-737, 0x1.b8333b8d1531dp-652,
     0x1.114d4b6f1fd62p-586, 0.0, 0x1.5f221e7f59c56p-409, 0.0, 0.0, 0.0, 0.0,
     0x1.ab2edbfa970e7p-479, 0.0, 0.0, 0.0, 0x1.f53ad169435p-459,
     0x1.683f63f3c28bbp-916, 0.0, 0.0, 0x1.146b7d6783eaap-544, 0x1.fa016c61575dap-139,
     0.0, 0x1.a5011090465afp-3, 0.0, 0.0, 0x1.fa40b275e1288p-227, 0.0,
     0x1.f704385a75fbdp-789, 0x1.b2c5c9ad05715p-549, 0.0, 0.0, 0.0,
     0x1.435247961f23cp-395, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f68e6313c0ac1p-198, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.34c92f38a7561p-612, 0x1.10b087a1024d1p-232, 0.0, 0.0,
     0x1.939ebf7fa6f03p-213, 0x1.df45c1da298d2p-567, 0x1.276a8e9eb1ae8p-213,
     0x1.1cd7bec99969cp-221, 0x1.10733729a3555p-482, 0x1.c23b14edbe5bdp-326,
     0x1.b370a1335bbecp-829, 0.0, 0x1.e7b7e16456eb8p-192, 0x1.83538a5973265p-115, 0.0,
     0x1.3170ee91b37f9p-838, 0.0, 0x1.ffec20678084dp-931, 0.0, 0x1.9d86fb25f26c8p-20,
     0x1.b510314385a49p-967, 0x1.f217f3741e8ffp-518, 0.0, 0x1.6386da18856d4p-341, 0.0,
     0x1.d6f4926469a9p-508, 0x1.2efccef9b5e44p-829, 0x1.51f8c85d7ae1bp-258,
     0x1.b43f318b6d75ap-42, 0.0, 0.0, 0x1.8f3cf093222e4p-796, 0x1.fc3c1a48a07aep-983,
     0x1.fc342155f68a4p-887, 0.0, 0x1.fa9dea6e595e4p-173, 0x1.2f372d7cde437p-440, 0.0,
     0.0, 0.0, 0.0, 0x1.c15f54bd42cbep-114, 0.0, 0.0, 0.0, 0x1.7e22bf9c11151p-791,
     0.0, 0x1.a9bfb1c5458e5p-684, 0.0, 0x1.210d8566fbb1dp-151, 0x1.1e609b35467fep-996,
     0.0, 0.0, 0x1.0a8316da074e7p-155, 0x1.123dbd3dffe97p-236, 0.0,
     0x1.c39dce7572b39p-759, 0.0, 0.0, 0x1.2e11de2792d2ep-756, 0.0, 0.0,
     0x1.1fe7f4d492d1fp-974, 0.0, 0.0, 0x1.dcdd4e80bad8cp-74, 0x1.b93e66965decp-304,
     0x1.3dae5e7dc6255p-151, 0x1.72292d9660b03p-712, 0x1.625ce291f2cedp-459, 0.0,
     0x1.d3dd6f2b5368ep-607, 0x1.4ecc34230377p-817, 0x1.3662bfd5c278ap-440, 0.0, 0.0,
     0x1.7d96f711f3336p-787, 0x1.d866062dc06b6p-736, 0x1.9f73e37b8bc4p-801,
     0x1.1a8343a18e4c4p-467, 0.0, 0x1.7abac8dc5d8aep-190, 0x1.b55eec9284066p-876,
     0x1.58b7cc701fdcbp-665, 0x1.f1783b174f692p-723, 0x1.916c344a16544p-322, 0.0, 0.0,
     0x1.47180d1053f25p-605, 0x1.6d013d4223beep-855
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
            tmp1 = Sleef_finz_expm1d2_u10kvx(tmp0);
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
    printf("Sleef_finz_expm1d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_expm1d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
