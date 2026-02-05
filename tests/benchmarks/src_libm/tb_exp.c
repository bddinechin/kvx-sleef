/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_exp.c --function exp --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.145ca818a279ap-717, 0x1.fbd0fab895dc6p-636, 0.0, 0x1.a2866a6feea3dp-662,
     0x1.47a262ec991acp-937, 0x1.a3b95c3575715p-1019, 0x1.22bb75e2e5b03p-260, 0.0,
     0.0, 0.0, 0x1.81b1b295f522cp-499, 0x1.beea0e365ebd7p-535, 0.0, 0.0,
     0x1.79d804a629f0cp-374, 0x1.a38dd33d43e8bp-687, 0.0, 0.0, 0x1.db1ef5dbf490fp-699,
     0x1.ca16f15b9b02dp-20, 0.0, 0.0, 0x1.b05b50bdccb0dp-249, 0.0, 0.0,
     0x1.df5d5e493f1a8p-47, 0x1.40904f2f96b4fp-408, 0.0, 0.0, 0x1.102eae633a657p-478,
     0.0, 0.0, 0.0, 0x1.a00797c50b0c3p-338, 0x1.fa8db19991938p-775,
     0x1.71a513bac6218p-449, 0.0, 0x1.71324381ec274p-119, 0x1.5511689fb4483p-665,
     0x1.812ee0ddbbe35p-549, 0.0, 0.0, 0.0, 0x1.a571f476b78dcp-138, 0.0,
     0x1.caff4b8a7586p-942, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74ccfc6b336bp-775, 0.0, 0.0,
     0x1.20c7c017d5a0ep-752, 0.0, 0x1.e9d670bd91884p-202, 0.0, 0.0, 0.0,
     0x1.d4bcf9665c846p-702, 0x1.c4eacb32e29fdp-68, 0x1.f3789f97735fcp-258, 0.0, 0.0,
     0.0, 0x1.9319011d26b54p-541, 0x1.e520b3faf5303p-1016, 0x1.e2493ba64136cp-259,
     0x1.18aed1c788a29p-247, 0x1.3b4fe94da15bp-456, 0x1.ff86f053b731ep-629, 0.0,
     0x1.50b85758f9782p-339, 0x1.626494517838bp-8, 0x1.88f88aea927bep-455,
     0x1.7c4cd85e70a5fp-595, 0x1.ba00fcbc32b4ap-38, 0x1.03a6fdda4c39p-242, 0.0, 0.0,
     0x1.87b91dda4092bp-997, 0.0, 0x1.e43c555576f33p-221, 0x1.574a9dcb1b188p-865,
     0x1.874485a6c3c8p-353, 0.0, 0x1.4112833d689f6p-546, 0x1.7001bccedc18ep-1003, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a8d9b3f4f1ec9p-1008, 0.0, 0.0, 0.0,
     0x1.e84b9064f21b3p-917, 0x1.4333584086249p-836, 0.0, 0.0, 0x1.1c5e7468dea73p-714,
     0.0, 0x1.a99151b89f6dfp-218, 0.0, 0x1.3b66d94a66695p-746, 0.0,
     0x1.0e77ece94d0a1p-294, 0x1.f81b192717b42p-954, 0x1.1eac0facc2a7p-54, 0.0, 0.0,
     0x1.16f5ee9bd0867p-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb0443e0793p-647, 0.0,
     0x1.f10990be33f7p-190, 0.0, 0x1.07f061bd7aa91p-125, 0x1.a69a72fb9df6cp-528, 0.0,
     0x1.6ad2541580fe3p-457, 0x1.8a9570717e425p-225, 0.0, 0.0, 0.0, 0.0,
     0x1.9b43a771457d1p-590, 0.0, 0.0, 0.0, 0.0, 0x1.a7e5db96b3fb7p-778, 0.0, 0.0,
     0.0, 0x1.a3fbbe16b9f42p-551, 0.0, 0x1.dfde2989886cbp-125,
     0x1.d603f3a2c7fcdp-1003, 0.0, 0.0, 0x1.bac2d54300896p-702,
     0x1.0dd1ac9f6f12fp-536, 0.0, 0x1.0fb61ed7fa587p-334, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.037cadcb045bep-34, 0.0, 0x1.2d83dbc142e9bp-795, 0x1.2c7479ae15308p-742,
     0x1.1ed2ed6dff741p-565, 0.0, 0x1.f37edbd9e7199p-264, 0x1.32c1a1bf921c2p-90, 0.0,
     0x1.aee629d19dcb7p-568, 0.0, 0.0, 0x1.fde5748a343ccp-535, 0x1.9a440af970bf1p-832,
     0.0, 0.0, 0.0, 0.0, 0x1.66004d62b566cp-933, 0x1.ea5b6479ead59p-83, 0.0, 0.0, 0.0,
     0x1.b357f9f3b0ab8p-76, 0.0, 0x1.cd88c98ec1e98p-242, 0x1.8b58938595592p-645, 0.0,
     0.0, 0x1.2f4ccaa48fcbap-273, 0.0, 0.0, 0x1.f55816a9ca4fbp-228,
     0x1.ac64825f32803p-965, 0.0, 0.0, 0.0, 0x1.4c53fef6c027ep-27,
     0x1.5025b82b3fd12p-192, 0.0, 0.0, 0.0, 0.0, 0x1.0632b9d06a9ccp-55, 0.0, 0.0,
     0x1.88a7f5ff5b5f5p-39, 0.0, 0x1.7f14af04f2485p-686, 0.0, 0x1.e153de9cd8a4ap-653,
     0x1.36c06891b6b4p-938, 0.0, 0x1.a52fa4b729a8fp-602, 0x1.71527c22db0e1p-444, 0.0,
     0x1.0c73499eb65a2p-134, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b3f949dec2e01p-95,
     0x1.0cb2ea80dd319p-211, 0x1.92dcfaa24f936p-342, 0.0, 0.0, 0.0,
     0x1.397886df6111ep-78, 0.0, 0.0, 0x1.219a2af09ef06p-657, 0x1.f81ff659af7bep-165,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4736187b84744p-572, 0x1.bb9880c1e0762p-864,
     0x1.b5de3652a3f9p-498, 0.0, 0x1.ef50c43d6f66cp-935, 0x1.f6bffe957e918p-429, 0.0,
     0.0, 0x1.25068fbfb2eecp-986, 0x1.785ddb350c276p-183, 0x1.fb656fc718c3p-680,
     0x1.ba68a07f9dfe9p-549, 0x1.ac3fedb4ff856p-69, 0x1.a3794aa54f505p-566, 0.0,
     0x1.57644470f69ddp-829, 0.0, 0.0, 0x1.4a5c4c63176abp-655,
     0x1.c2a21fc91e26bp-1002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.456cec284a49dp-296, 0x1.e9cc584de7b13p-435, 0.0,
     0x1.6cec84f35010bp-123, 0x1.47fb345c5e0aep-671, 0x1.10c5a15932371p-709,
     0x1.76e1f913559cap-389, 0x1.8b646e435d06cp-223, 0x1.e3cef7a1f9719p-458,
     0x1.e2f36e72a4d77p-233, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14896e7319db5p-670, 0x1.fc17f0ccd876ap-104, 0x1.9c192ae9692e9p-943, 0.0,
     0x1.3ff1b99d9a901p-589, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8b5951d2abfp-370, 0x1.335df4e803b1ep-15, 0.0, 0.0, 0x1.714353730daadp-155,
     0.0, 0.0, 0x1.0c2fca3d9ceffp-519, 0x1.8836c9f0bb601p-135, 0x1.4455ea78e4c0dp-13,
     0.0, 0x1.7ad14692a3e6bp-342, 0x1.0e038a3cb561bp-450, 0x1.b21f6ebe063f2p-503,
     0x1.7e2f112f8779p-645, 0.0, 0.0, 0.0, 0x1.2de35d8f2eb83p-374, 0.0, 0.0,
     0x1.ff0001edf5585p-190, 0.0, 0x1.fd110b5c2c2b2p-537, 0.0, 0.0, 0.0,
     0x1.074c72ce8067dp-989, 0x1.3fc1d71e32bddp-476, 0.0, 0x1.f245fc09361e3p-674, 0.0,
     0.0, 0.0, 0.0, 0x1.a385442becd76p-414, 0x1.14b5613c167f5p-184, 0.0,
     0x1.fd8cb8bd7d82ep-441, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.703d18a106db5p-123, 0x1.ac42ed957502dp-178, 0.0, 0x1.cfc5505efd535p-824, 0.0,
     0x1.f388e08cacefp-476, 0x1.02700046abe87p-580, 0x1.fd36b4f81ce92p-1020, 0.0,
     0x1.b267c82d35b4cp-646, 0x1.807d88e9ac531p-271, 0x1.b59ab77b27e14p-23, 0.0, 0.0,
     0x1.d5bb2ac1f1f2p-476, 0x1.b2fb2d7a554d9p-568, 0x1.86df14f1d5483p-1019, 0.0, 0.0,
     0x1.8c322dfb8c548p-771, 0.0, 0x1.cccb6cd3f0fa2p-897, 0.0, 0.0,
     0x1.e7c10cbaebe61p-485, 0x1.2a4f632dfea6p-121, 0x1.0d3c4501a0f72p-404,
     0x1.c26d458cb4818p-506, 0.0, 0.0, 0x1.aaa825354b45p-233, 0x1.d1f3ae061385dp-136,
     0x1.5404e7eeaf9b3p-415, 0.0, 0x1.836eecc07935ap-984, 0x1.69d98eb757152p-459,
     0x1.d664c0d6f3219p-696, 0x1.57fea315a463ep-418, 0.0, 0x1.bf128dd0fe403p-565,
     0x1.d5c4cd72cfe5cp-245, 0.0, 0.0, 0x1.d365b023013ebp-1008,
     0x1.ad0d759f983c4p-608, 0.0, 0x1.6363534803274p-64, 0x1.8d06b57b247f8p-925, 0.0,
     0x1.2cfb0fc5e0abep-669, 0.0, 0.0, 0.0, 0.0, 0x1.0a6d0e591ace6p-914,
     0x1.c8eb1cd993b6cp-177, 0.0, 0x1.f3abe5c4a4a29p-802, 0x1.66dbb789e283dp-717,
     0x1.43ec15bb95beep-279, 0.0, 0x1.485eebbf3046ap-657, 0.0, 0x1.68848a9a09805p-173,
     0.0, 0x1.e3e7c3cf558d3p-454, 0.0, 0.0, 0.0, 0.0, 0x1.54d59859461e7p-918, 0.0,
     0x1.b54cd05689d29p-426, 0.0, 0x1.4bf16c2ce1d4cp-956, 0x1.a4335830ecad6p-382, 0.0,
     0x1.64c29ecaacc7cp-678, 0x1.e0bab3845d078p-876, 0x1.4a7f2f4a8c335p-216, 0.0, 0.0,
     0.0, 0x1.c80a689d7cd5dp-430, 0x1.9c64777a455d5p-548, 0x1.2dd8d6c3d908dp-110, 0.0,
     0x1.d41b34dec9dcp-972, 0x1.fd85c3763ad93p-143, 0x1.7f3e98c44bc9dp-300,
     0x1.fab68bce491dep-913, 0x1.d560d4aabc17ap-584, 0.0, 0x1.21530871cbe34p-436,
     0x1.ffe7852399f9p-750, 0.0, 0.0, 0x1.a51a6ec3ed932p-1017, 0.0,
     0x1.ea7c280ae3b15p-434, 0x1.efbd355693ad9p-848, 0x1.65753618820c4p-716,
     0x1.2d4d4930efec1p-534, 0.0, 0.0, 0x1.edf3cd7bc8079p-365, 0x1.6dfba0228e7bep-410,
     0.0, 0x1.f6bc8d7bd2a4ap-337, 0.0, 0x1.eae586363c5cap-407, 0.0,
     0x1.c5b216cd5a58ep-203, 0x1.d85d8bdb42b53p-81, 0.0, 0x1.ef8bf259b280fp-308,
     0x1.b37347cbaeaf5p-30, 0x1.8bf57f9cdf8d6p-176, 0x1.1aa365ee8917fp-661, 0.0,
     0x1.14718295d8c85p-633, 0x1.a999d76e282b3p-670, 0x1.6082fa2fbefd8p-320,
     0x1.e16b60b9d999ep-337, 0.0, 0x1.8b0d88df78e39p-691, 0x1.0d00a060d5458p-2, 0.0,
     0.0, 0.0, 0x1.2e99786c510a2p-103, 0x1.e685ba5ad4cf6p-137, 0.0,
     0x1.0902e2a4cbb37p-590, 0x1.28911aa1c200bp-421, 0.0, 0x1.5d9f884009ef9p-436,
     0x1.c181faa9500bep-223, 0.0, 0x1.159374b89548ap-462, 0.0,
     0x1.2edc4cef001b7p-1015, 0.0, 0x1.cc6e4e62a9589p-325, 0x1.3b88cc194617fp-1017,
     0.0, 0.0, 0x1.e57ded3349cfap-564, 0x1.afd3f33dfad54p-298, 0.0, 0.0,
     0x1.1a2e2d4403f1bp-984, 0x1.8558fa1b45c41p-1002, 0.0, 0.0, 0x1.58445404a3e41p-57,
     0x1.f3eddb601e8bbp-195, 0.0, 0.0, 0x1.f6046d8e8416bp-320, 0x1.43194c17bc885p-64,
     0x1.c0889af1b7e2ep-823, 0.0, 0.0, 0.0, 0x1.f9a52aefcce8fp-301, 0.0, 0.0,
     0x1.8d0a8dca0ca3cp-420, 0x1.cb3dd7f0dac6p-152, 0.0, 0.0, 0x1.645e8b2293298p-654,
     0x1.21369b3887456p-145, 0.0, 0.0, 0x1.dd253b8ab3fbcp-136, 0.0, 0.0,
     0x1.a728180d202d8p-132, 0.0, 0.0, 0x1.a15e6d32c85aep-974, 0x1.44617ea1f6878p-753,
     0.0, 0x1.09958ad4087ffp-372, 0x1.fe3a0116f6894p-190, 0x1.ad3c8821105f4p-850,
     0x1.df88a1189d1a8p-269, 0.0, 0.0, 0.0, 0x1.bc6dd00affb37p-954,
     0x1.6e4c0b775833bp-637, 0.0, 0x1.89e07d47e37c1p-348, 0.0, 0.0, 0.0,
     0x1.6dc9060871453p-988, 0x1.cce57af7c2e6p-729, 0x1.21f8b8aa6a9ccp-761,
     0x1.4bafd93e64327p-52, 0x1.3b192db1aef3fp-971, 0x1.19ac27207f7ebp-39, 0.0,
     0x1.297dc516f662dp-559, 0x1.639052c815019p-313, 0.0, 0.0, 0x1.677afdb1f23f6p-931,
     0x1.e74adaef39bfcp-274, 0x1.1a31ab5d0f8e9p-687, 0x1.7e6aa9ae1df6bp-119, 0.0,
     0x1.be54cbffcba29p-660, 0x1.febe4ecf9bee8p-942, 0x1.aa2581349d2fap-946,
     0x1.213347392a102p-208, 0.0, 0x1.1203334028f09p-608, 0.0, 0x1.dfc6343300e0ap-840,
     0x1.ef7e6dd879051p-204, 0x1.ca8b7590112d7p-644, 0.0, 0x1.127afbb6e35c7p-769,
     0x1.3f684f5b5f1d1p-143, 0.0, 0x1.8b6cca7169dabp-224, 0x1.e1e2d5b940189p-88, 0.0,
     0x1.be722d8cccdaap-474, 0.0, 0.0, 0x1.8a3f79a25bab5p-613, 0x1.5e917df75522ep-490,
     0x1.22694bce8b4afp-24, 0.0, 0.0, 0x1.73c16117931cep-208, 0x1.0b66e2aa280c4p-57,
     0.0, 0x1.effac5fc4ae17p-827, 0.0, 0.0, 0x1.d4d8258befdcap-591, 0.0,
     0x1.6ce4bf4d3fc3fp-277, 0x1.de0aafd4643c4p-214, 0.0, 0x1.9e96226898f64p-998, 0.0,
     0x1.b9fb4cfd1aed6p-825, 0x1.a889c7a8741f3p-531, 0.0, 0.0, 0.0, 0.0,
     0x1.5f6f58d1d877ep-203, 0.0, 0x1.5eb29e33ab89ep-11, 0.0, 0.0,
     0x1.8751fc24666f8p-938, 0x1.c5ee798de8345p-227, 0x1.6cc47695f456dp-355, 0.0, 0.0,
     0x1.1c93a64df0224p-439, 0x1.913818afa3997p-18, 0x1.770aa29f26d66p-993, 0.0, 0.0,
     0x1.28b395cfd2755p-482, 0.0, 0x1.2e9e9e3510b6cp-73, 0x1.9aaff89dbc0fap-86,
     0x1.bd93130c34d1dp-564, 0.0, 0x1.efafc24300b1fp-393, 0x1.cbcaf00042f99p-141, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6e4c4d15c8afp-565, 0.0,
     0x1.f8bd08d47a4c7p-303, 0x1.b4a9f2bd6efeep-829, 0x1.18c67e5c189edp-203, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4f68985e522dp-398, 0x1.b56682575e514p-646, 0.0,
     0x1.b17b4e58fcd4p-891, 0x1.d0c1094e72501p-29, 0.0, 0x1.76d854c4e4e6cp-504,
     0x1.50ca2cc03296fp-231, 0.0, 0.0, 0x1.75a24a41fa83ep-993, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a39ae9ff83f51p-717, 0.0, 0.0, 0.0, 0x1.a3109715b4379p-285,
     0x1.ef162132fa353p-652, 0x1.ac113d76821c1p-394, 0x1.00a7aed3fe1cdp-922,
     0x1.2ac07d75ec515p-73, 0.0, 0x1.a5ba9617879f6p-213, 0x1.f6026da456019p-978, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85f3f47eee0ccp-527, 0.0, 0x1.fabf3d5cb0509p-780,
     0x1.505603d90481dp-501, 0.0, 0.0, 0x1.0cf0c6d705a1ap-361, 0x1.3d6e4c85c8868p-206,
     0.0, 0x1.8d1ff66a101d6p-619, 0.0, 0x1.79a14b0c7e8d4p-765, 0.0, 0.0,
     0x1.9f3fe3d6cd44fp-598, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2a5bb934bfcp-851,
     0x1.67688e05c8583p-339, 0x1.c456114b570b8p-864, 0.0, 0.0, 0.0,
     0x1.fb74fa78f117ep-967, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c71c19d86b41p-999, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.caf7e83e68ef4p-805, 0.0, 0x1.cde6821fc08abp-239,
     0x1.1c30f1d0a6bcdp-316, 0.0, 0.0, 0.0, 0x1.f39a8be9508a1p-1021, 0.0,
     0x1.1b46a4adc49p-417, 0x1.307f0aeda2dc1p-179, 0.0, 0x1.aa6e9b182542p-533,
     0x1.92d750f28b37cp-329, 0.0, 0.0, 0.0, 0x1.bb1753aa000f2p-989,
     0x1.10c3f0f14d329p-986, 0.0, 0x1.1c78d4aacc1cap-731, 0.0, 0.0,
     0x1.741012b2f090dp-324, 0x1.aaf3334f9b0fep-589, 0.0, 0x1.04dfeb15d92efp-402,
     0x1.1738ccbecea21p-708, 0.0, 0x1.b3c75340063d2p-636, 0.0, 0x1.3221b833b86b1p-31,
     0.0, 0.0, 0x1.e8752eacaed9fp-620, 0.0, 0.0, 0.0, 0x1.aa072f86d1effp-832,
     0x1.be255ecbc0da7p-659, 0x1.4dbd1c312b75ep-782, 0x1.59816f1e85b2ap-357,
     0x1.705257bfc4fc8p-259, 0x1.dae85bf32ff32p-771, 0x1.3bb106e23558dp-517,
     0x1.9633923c88cbbp-772, 0x1.ccbb30ad994fp-463, 0.0, 0.0, 0.0,
     0x1.5b1af588889a5p-627, 0x1.75bcd86f06d22p-59, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5e7ca4d06c49ap-972, 0x1.ee54d255b600ep-709, 0.0, 0.0, 0.0,
     0x1.25516bec762d4p-355, 0x1.d1cca57f7753ap-733, 0.0, 0x1.a7e7599d1917ap-83, 0.0,
     0.0, 0.0, 0.0, 0x1.db29f63a547c5p-218, 0x1.f58687515c9adp-555, 0.0,
     0x1.6d6fdd75ee9ap-437, 0.0, 0.0, 0.0, 0.0, 0x1.f16bcfe48600dp-287,
     0x1.48a7b2f3c289ep-333, 0.0, 0.0, 0x1.1e837209bb2d4p-567, 0x1.dd822b6b1cd04p-518,
     0x1.b7e9267ed3d56p-163, 0x1.794c422e262d7p-947, 0x1.229830741bc5ep-284, 0.0,
     0x1.59034e574c701p-121, 0x1.61f8fc71da397p-433, 0.0, 0x1.1ee28f965ef23p-722,
     0x1.024e83fb6cc96p-292, 0x1.b8c34c9b38106p-323, 0x1.b682ec5539fc1p-680, 0.0, 0.0,
     0x1.e8b0a381fef45p-990, 0.0, 0x1.55a5a363d2aacp-134, 0.0, 0x1.0f902813e6a2bp-203,
     0.0, 0x1.d5d4bc4d8e4cfp-31, 0x1.29fb3bdecc382p-970, 0x1.a3250f29de189p-492,
     0x1.764db7593a0cp-559, 0x1.ef626b67f33b1p-987, 0.0, 0x1.2e6ce9755dabep-9,
     0x1.773901e98996cp-657, 0.0, 0x1.71d2d02afb3aap-531, 0.0, 0x1.a33615ef97e67p-521,
     0x1.ce29c9952d772p-423, 0.0, 0.0, 0x1.27044d927ea3bp-209, 0x1.e7ca59a53de64p-485,
     0.0, 0.0, 0x1.9e5690c4354bp-72, 0x1.e54562a8e8092p-402, 0.0,
     0x1.c53e60ecb28e4p-998, 0x1.d62962412a12p-270, 0x1.09fe165a47518p-152, 0.0, 0.0,
     0x1.819a68ca2619fp-92, 0x1.e9eca669ea93ep-29, 0.0, 0x1.0fe0f4697ee67p-613,
     0x1.17e0849ae527dp-987, 0x1.a206f5916e794p-550, 0x1.cd95f657c8b3cp-467,
     0x1.adea544d46d3bp-910, 0.0, 0.0, 0x1.9805d0e30d467p-1017,
     0x1.45310e3a9b1f8p-498, 0x1.36594f93786d4p-362, 0x1.712220f776633p-32,
     0x1.4f0abbaeb60efp-418, 0x1.3eae414a03404p-155, 0x1.059a6729cfdd3p-847, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.00130e8ff93a3p-833, 0x1.fff8648dd295ap-323, 0.0, 0.0,
     0.0, 0x1.6c936c7bb71acp-1013, 0x1.d75420bad59d3p-635, 0x1.a92b9197b2df7p-757,
     0.0, 0x1.34d01376cf941p-469, 0x1.c2f54311b562dp-464, 0x1.e912c6315e90cp-181,
     0x1.046d5fd8f4ecep-721, 0.0, 0x1.6198c3f77dc9bp-813, 0x1.63635deef157p-841, 0.0,
     0x1.44357dd1d0eb8p-763, 0.0, 0.0, 0.0, 0.0, 0x1.a9d078fa320b8p-579,
     0x1.563f28b2f36c2p-574, 0.0, 0.0, 0x1.631b6735575c6p-384, 0.0, 0.0, 0.0, 0.0,
     0x1.6fe6d1f034801p-142, 0.0, 0.0, 0x1.360743645e315p-307, 0.0, 0.0, 0.0,
     0x1.1290c281c214ap-246, 0x1.d0faff4370df2p-48, 0x1.eaa4e55930bebp-466, 0.0, 0.0,
     0.0, 0.0, 0x1.0b5a0309512f1p-220, 0x1.217ecce4b2725p-339, 0x1.7a56fa80dea76p-391,
     0.0, 0.0, 0.0, 0.0, 0x1.7da3479f3c46ap-148, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.64ed6a3d02fb5p-694, 0x1.b91261ec21fdcp-202, 0.0, 0x1.4e172b92ed072p-33,
     0x1.2ded2743af06p-872, 0x1.ce3c4bd20aedp-367, 0x1.8ee263ef6d443p-166,
     0x1.72299c54cb521p-484, 0.0, 0x1.11316f296002bp-37, 0x1.330a55eb8009cp-204,
     0x1.039f74a9dc267p-681, 0x1.dc0d677462a7ap-185, 0.0, 0.0, 0.0,
     0x1.7801eb25a6f5fp-917, 0.0, 0x1.947c7d73503b6p-63, 0x1.4dc36f8984ad5p-669,
     0x1.a51d1633c989cp-82, 0x1.c9a650f207a4dp-1019, 0x1.ec425e8ee7007p-1005,
     0x1.d17397b682b67p-186, 0x1.d8e66a33611d7p-36, 0x1.a5c3150948ce3p-1012, 0.0,
     0x1.70381fa72bfb5p-337, 0x1.c82b1ce923e14p-895, 0.0, 0.0, 0x1.c9ee21ba4db34p-595,
     0x1.96f0ce214d7cfp-234, 0x1.44781f6c865d7p-763, 0x1.a46909adf935p-123, 0.0, 0.0,
     0.0, 0.0, 0x1.c588edf7b15bfp-776, 0.0, 0.0, 0.0, 0x1.cd44402ac5d9fp-175,
     0x1.1d11494d8ab7p-253, 0x1.d28bec114fb37p-212, 0x1.8637b331b1343p-329,
     0x1.b2b3b5e30e84fp-591, 0.0, 0x1.132be7ae4b309p-158, 0x1.59b8a34230bc8p-790, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cea09316686a3p-921
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = exp(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("exp %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("exp bench acc %la\n", global_bench_acc);
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
