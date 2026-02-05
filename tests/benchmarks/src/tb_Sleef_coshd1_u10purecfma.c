/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd1_u10purecfma.c --function \
 *     Sleef_coshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.3bc36ee5a9ac7p-544, 0x1.b895939b9f754p-728, 0.0, 0.0, 0.0, 0.0,
     0x1.0ee99929b2c9cp-699, 0.0, 0.0, 0.0, 0x1.6a9f569be1686p-889, 0.0,
     0x1.39d6d9bebcf2dp-963, 0x1.d0feff77d524cp-749, 0.0, 0.0, 0x1.711264163b84bp-239,
     0.0, 0.0, 0x1.9094f542faa41p-291, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7d4f3ff9f5a91p-686, 0x1.75923c17591bcp-906, 0x1.81d53acb3f816p-662, 0.0, 0.0,
     0.0, 0x1.4bb2de9e634d1p-296, 0.0, 0x1.30c2ff3897377p-527, 0.0,
     0x1.f5f2139012349p-688, 0.0, 0.0, 0x1.4bf6c71c20433p-383, 0.0, 0.0, 0.0, 0.0,
     0x1.1de778c283909p-764, 0.0, 0x1.4556f889bd6c8p-408, 0x1.25536e51ae02ap-619, 0.0,
     0.0, 0x1.c679fe9479e58p-90, 0.0, 0x1.77a31f831a4a9p-23, 0.0,
     0x1.c343f15d14895p-888, 0x1.48962f9c57b4ep-422, 0x1.b32631d0dff74p-18, 0.0, 0.0,
     0x1.18575dc53c1e8p-585, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a48e88248d84p-171,
     0x1.7818e260adc0bp-737, 0x1.f53d3b11e217fp-865, 0.0, 0x1.488a16c6ecf23p-71,
     0x1.260eeedee8d58p-494, 0x1.674246fd4728ep-708, 0x1.8232fa80f58b3p-478,
     0x1.0bfd6a74d2b44p-933, 0.0, 0.0, 0x1.6b710d1c3a8edp-21, 0x1.f3929305e7af1p-262,
     0.0, 0x1.e16f1e2b251c5p-116, 0x1.72241e108011ap-714, 0.0, 0.0, 0.0, 0.0,
     0x1.197c4b45574bfp-703, 0.0, 0.0, 0x1.307f824446c1ap-355, 0.0,
     0x1.0fcd2ede52aacp-488, 0x1.fb71056fa99ap-247, 0.0, 0x1.3ff632d64fee5p-644,
     0x1.19105b9af29b5p-78, 0x1.ebc07a7e6a085p-667, 0x1.1ec1f43ce34acp-973,
     0x1.9412b6a25a611p-272, 0.0, 0.0, 0x1.8315c9c8b9ab5p-294, 0.0,
     0x1.cfc5e9402bc87p-780, 0x1.d0f36bc4d2adp-553, 0.0, 0x1.c646804cef111p-632,
     0x1.c180dd525130ap-152, 0.0, 0.0, 0.0, 0x1.d7a9ec85bccb9p-427,
     0x1.1e3d2b715bd76p-646, 0x1.c64ab385731ddp-561, 0x1.b9a352cef82fep-236,
     0x1.67b0e75f2f969p-727, 0x1.4659da07ccd8bp-670, 0x1.94bfa4700e1e3p-195,
     0x1.6c39aa582453ap-729, 0.0, 0x1.64bfd8a40c2d2p-417, 0.0,
     0x1.2ea502ceb60ddp-1010, 0x1.307f55fdc15c4p-399, 0.0, 0.0, 0.0, 0.0,
     0x1.6bd1954f42049p-688, 0x1.378b73e959629p-686, 0.0, 0.0, 0x1.f0934b499bdcep-320,
     0x1.cb3fb0867b2ffp-326, 0.0, 0x1.8d3db8c874da2p-409, 0.0,
     0x1.04d53125165e4p-1002, 0x1.4eb51a17f7907p-401, 0x1.7350544b9d44dp-13,
     0x1.8547572accbfbp-521, 0.0, 0.0, 0x1.7f9e9d9217a12p-978, 0x1.c8f19d4758f88p-514,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.27e12cf9c214bp-970,
     0x1.2a0098d04afdcp-971, 0.0, 0.0, 0x1.f3fb2873ab35cp-882, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5ce6a22a3ab5bp-844, 0.0, 0x1.fa0d725bd32fep-432, 0x1.ff7cdba23d4d6p-926,
     0.0, 0.0, 0.0, 0x1.c82d90754818p-627, 0.0, 0x1.7999ba489cb7bp-173,
     0x1.2f9be389855cdp-331, 0x1.5127fba43cbbfp-80, 0x1.3f249a5aa71ecp-936, 0.0,
     0x1.c8e783c6f10dp-183, 0.0, 0.0, 0x1.98d58c626bcp-787, 0x1.c7aa84e06a63cp-948,
     0.0, 0x1.f388f629587b4p-445, 0x1.3c5c59c44ce97p-386, 0x1.b16f6a3ecd744p-438,
     0x1.960e20186a5ccp-219, 0.0, 0x1.875ac6704712ap-289, 0x1.cb61ccc99fef8p-499, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6895cb1fe2939p-30, 0.0, 0x1.433979e18ba82p-578,
     0.0, 0x1.82115421054b6p-49, 0x1.2de5207b84e9bp-976, 0.0, 0x1.2a47489bd5c2p-25,
     0x1.a0ff35b38bf8dp-195, 0.0, 0x1.5a35935be5befp-834, 0.0, 0x1.4a12fadeb9406p-593,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7200025a63bd4p-791, 0x1.d4b50be045b3p-259,
     0x1.926a6931ee53ep-485, 0x1.8cc854a907fe6p-407, 0x1.02a241757735ap-925, 0.0,
     0x1.caae769e9ee41p-972, 0.0, 0x1.6d609323cff4p-423, 0x1.cbb245544314cp-338,
     0x1.af8fb6201dda8p-709, 0.0, 0.0, 0x1.9b072fd8c93cp-821, 0x1.e6f642bf79684p-450,
     0.0, 0.0, 0x1.8ecd3531107ddp-955, 0.0, 0x1.b89ef5daa2b1ep-550, 0.0, 0.0, 0.0,
     0x1.40e43368cc3f3p-591, 0x1.d91f53d441279p-905, 0.0, 0.0, 0x1.f6a86a6c2fabfp-804,
     0.0, 0x1.af1f630363af5p-81, 0.0, 0.0, 0x1.71d6cad0277dbp-306,
     0x1.a9129caf335c1p-169, 0.0, 0.0, 0.0, 0.0, 0x1.cdf9633945094p-936, 0.0, 0.0,
     0x1.a7708e72caa5ap-352, 0x1.2a5e94d6c791fp-57, 0x1.4e082ae86dc2cp-951, 0.0, 0.0,
     0x1.88d3f3606d34fp-642, 0.0, 0.0, 0x1.a77eae760fdb8p-755, 0.0,
     0x1.e849853e681ccp-444, 0x1.3fed9d0c89aeep-215, 0x1.35f15853ccfafp-298, 0.0, 0.0,
     0x1.a9bfdc67f01dcp-751, 0.0, 0.0, 0x1.48d1d921bdf5dp-495, 0x1.2069ab958e24dp-201,
     0x1.6748c1b3585c7p-920, 0x1.98e613fe3cd94p-36, 0x1.a34830768420ep-296, 0.0,
     0x1.cb62f36d214dp-905, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8118249b82fccp-350,
     0x1.dfbdcffadeb48p-140, 0.0, 0.0, 0x1.8b313ca3a38c9p-979, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dc689cbb5cc99p-311, 0x1.a336ca93b694ap-844, 0.0, 0x1.5b0470f011ec7p-293,
     0.0, 0x1.10fe649ab3c28p-272, 0x1.8de110497407ep-604, 0.0, 0.0,
     0x1.7335ac88e0e46p-742, 0x1.2a11eff8602cdp-191, 0x1.965267243b1acp-259,
     0x1.b239901ca12e5p-579, 0.0, 0x1.cd676d3c2918bp-486, 0x1.bdfb971888c11p-371, 0.0,
     0x1.1f032830f98c7p-426, 0.0, 0x1.28755edb2b989p-335, 0x1.42e7956324c02p-48,
     0x1.036543237a68fp-334, 0.0, 0x1.4c4533d0a5d72p-945, 0x1.fa989a049de1cp-823,
     0x1.14744918ea509p-734, 0x1.3e764ddba1fcbp-617, 0.0, 0x1.4c6ede1e2aec2p-194,
     0x1.fc74cd541a183p-659, 0.0, 0.0, 0.0, 0x1.f5ffc6118983ap-639,
     0x1.1538d574db568p-144, 0x1.c95d01ba5523bp-412, 0.0, 0.0, 0x1.bb941099012ffp-9,
     0.0, 0x1.0c0d7688f52c7p-267, 0x1.8f3d9182e497p-107, 0.0, 0.0,
     0x1.4a4b510d7ccbfp-315, 0x1.a95447f08037fp-844, 0.0, 0x1.b8e1df75652d4p-307,
     0x1.c4e6e1d819af5p-179, 0x1.52eee61a7ef62p-583, 0x1.06b892cccc686p-536, 0.0, 0.0,
     0x1.ee972efd4486ep-642, 0x1.529f3d7f20234p-473, 0.0, 0.0, 0x1.fc4ffd20d3f5ap-522,
     0x1.b6c09d17d95ep-934, 0.0, 0x1.176a9fb8de3cep-725, 0x1.6e64403118221p-107, 0.0,
     0.0, 0.0, 0x1.853b760c447fap-867, 0x1.f21a6dbae0935p-461, 0.0, 0.0, 0.0,
     0x1.fd53e145b4b39p-534, 0.0, 0x1.cdbc55715ff67p-147, 0x1.09f8f0a01023dp-170,
     0x1.a668edce364b5p-1001, 0.0, 0.0, 0.0, 0x1.cc51eab955dfap-95, 0.0,
     0x1.cff257a2bac89p-816, 0.0, 0.0, 0x1.d3c4c7e3aee82p-167, 0.0,
     0x1.63626a55955b2p-707, 0x1.e703cf0158aeep-257, 0x1.01f04b48d6a3p-375,
     0x1.909c3547ebfefp-656, 0x1.6d03d9c124265p-691, 0.0, 0.0, 0.0,
     0x1.9f44b474029e1p-385, 0x1.b2c825fe8c983p-968, 0x1.0d3fbc2e86155p-959, 0.0,
     0x1.eaeacae4f4c0dp-244, 0x1.ae5f5b9d865e1p-828, 0x1.501ce8fd6f6cap-114,
     0x1.0feb52cebc3p-927, 0.0, 0x1.9d37ad1e9b7d1p-366, 0.0, 0x1.89bef7d907e05p-102,
     0.0, 0x1.ddacdf061f58ap-896, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87ca9a46db54p-402, 0.0,
     0x1.ac9f0d934214ap-804, 0x1.b1158bdb5858p-965, 0x1.107299dc72275p-838, 0.0, 0.0,
     0x1.7c41329f3f2bcp-835, 0x1.67e4000d72a68p-705, 0.0, 0.0, 0.0,
     0x1.fd751ee3aa1f4p-897, 0x1.891fa4967853dp-310, 0.0, 0x1.9ca3dc50fb5f1p-759, 0.0,
     0x1.e29aeef0c1b12p-997, 0x1.4f71bb068e527p-301, 0x1.e8ab8a5b2d066p-757, 0.0, 0.0,
     0.0, 0.0, 0x1.10ef33996e856p-466, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.948ec7dbdf39ep-415, 0x1.957fca1482d63p-738, 0.0, 0x1.78c3e3aa5f31ep-99, 0.0,
     0x1.e8048bfd28a37p-709, 0x1.18edad1dc8447p-395, 0.0, 0x1.e841d9453bff5p-430,
     0x1.de28758b4e02ap-129, 0x1.add3bbd202ba9p-853, 0.0, 0x1.e4361ae67bd1ep-372, 0.0,
     0x1.773ea3ec9738fp-329, 0.0, 0.0, 0.0, 0.0, 0x1.d4935c220344ep-12, 0.0, 0.0, 0.0,
     0x1.7c8b4812f2ccbp-838, 0.0, 0x1.7bf75d1e38902p-141, 0x1.c427f2da20343p-619,
     0x1.88081c51767b1p-51, 0.0, 0x1.b56a0cb4a90f7p-461, 0x1.5d056d5fdc108p-844,
     0x1.d829d06373cb6p-312, 0x1.a80ecd7f48916p-220, 0x1.06bff8e9e44d4p-188, 0.0,
     0x1.f02d317c22949p-858, 0.0, 0x1.230ddc0dc3305p-427, 0.0, 0.0,
     0x1.42fe4fbc78e3ap-88, 0.0, 0x1.804f18f400b1p-591, 0.0, 0x1.73e500320910bp-442,
     0.0, 0.0, 0x1.9e03a5cdbab01p-334, 0x1.a0823fa195d43p-479, 0.0,
     0x1.836ae6ca7ecf6p-647, 0x1.93f316435050cp-359, 0x1.73dbb10b955f9p-883,
     0x1.222ca5aaab2b7p-451, 0.0, 0x1.e1c6edfc3b186p-490, 0.0, 0x1.d3eafb8173af3p-537,
     0x1.d494df3b79bd4p-816, 0.0, 0x1.fb0e8f995d445p-333, 0x1.47461d3e713f5p-936,
     0x1.2b58e7af5616fp-910, 0.0, 0.0, 0x1.715eeee523c9fp-845, 0x1.9e70531f2c5cdp-243,
     0.0, 0x1.3cda1c7ca3cbdp-256, 0x1.dd06b686b0e93p-727, 0x1.a5d528a20c275p-780, 0.0,
     0.0, 0.0, 0.0, 0x1.d63dd8a29d06fp-524, 0x1.e11fdbba5234ep-38,
     0x1.2b32bcdcd3d25p-17, 0.0, 0x1.a02e956f82641p-62, 0x1.2f072a51e2b46p-671,
     0x1.ec7f3a44e1771p-918, 0x1.3b6cedf8180f2p-263, 0x1.d1e64376a492cp-746,
     0x1.247b7d68a5901p-3, 0x1.d4474b3d4759ep-805, 0.0, 0x1.d883498cb36b5p-268, 0.0,
     0x1.b2b76bafc02a9p-365, 0.0, 0x1.2917f1009c0c2p-406, 0x1.1844a4d1d5d5fp-27, 0.0,
     0.0, 0.0, 0.0, 0x1.f533ac0b1c8bep-659, 0x1.b47e50fc740d7p-966,
     0x1.f81dc536f5fb2p-293, 0x1.14c8eaf78a7c2p-773, 0x1.e8c0cb317b90bp-172,
     0x1.5d72c89e8e086p-331, 0x1.0d4edc157059dp-371, 0.0, 0x1.b5b7043641a17p-724, 0.0,
     0x1.975567d7b629bp-336, 0x1.ed2365daa1e4ep-981, 0x1.d441d4c84d41p-1022,
     0x1.a5ce35f6537acp-518, 0.0, 0.0, 0x1.eeaec52bde589p-976, 0.0,
     0x1.62c20cadf48e1p-538, 0x1.dd4efbb7b61e5p-39, 0.0, 0x1.b309e446e89fep-64, 0.0,
     0x1.4ec4b7bdb52a8p-786, 0.0, 0.0, 0x1.dadbe2cbeee8bp-306, 0.0,
     0x1.a8c70867e5df2p-475, 0x1.ca9c02d71dee1p-467, 0.0, 0x1.e84dc436b1153p-796, 0.0,
     0.0, 0x1.876775bb666d6p-246, 0.0, 0.0, 0.0, 0x1.c13c5f7801ed4p-365,
     0x1.36151faac4e28p-825, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3225736eab9bbp-389, 0.0,
     0x1.a9666dd50fbdcp-995, 0.0, 0x1.d9fa1ad589d84p-412, 0.0, 0.0,
     0x1.d4021c7ddd4b4p-596, 0.0, 0x1.b73be0582e422p-387, 0x1.b9c9bf25a196bp-501, 0.0,
     0x1.e4533d84e9c4cp-745, 0.0, 0x1.0020dcd3f81d8p-916, 0.0, 0x1.fc154cdef0451p-889,
     0x1.54cd8055cd0d3p-1001, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7631ac8e8a869p-481, 0.0,
     0x1.581b4f3ae8aa9p-126, 0x1.e322abf01ceb4p-471, 0x1.4a953c382efb4p-512,
     0x1.8da5a5e5625afp-821, 0.0, 0.0, 0.0, 0x1.6dc40e1c460dcp-142,
     0x1.2759bb2e60793p-614, 0.0, 0x1.88566cdafcf49p-945, 0.0, 0.0,
     0x1.f3bf36cdc8fc9p-348, 0.0, 0x1.6a12a112a09b4p-912, 0x1.cbabacf8d6c36p-106,
     0x1.5178bb7cea4e8p-326, 0x1.dc80456da181bp-126, 0x1.8d9b1284a36f4p-999,
     0x1.20db8e7b3f181p-871, 0.0, 0x1.b153cca11c0e3p-165, 0x1.5a1bc1ed13d85p-183, 0.0,
     0.0, 0x1.d98e8bf086ae3p-85, 0.0, 0x1.c5a5abb350548p-732, 0.0,
     0x1.a1df53f42c551p-64, 0.0, 0x1.aa286e822e98ep-913, 0x1.7fed724fbc81fp-729,
     0x1.df17a40898759p-223, 0x1.27f5b33115321p-1005, 0.0, 0.0,
     0x1.62359644c6804p-866, 0.0, 0.0, 0.0, 0x1.bc3fc8ff8759fp-965,
     0x1.c3fde696dbc19p-673, 0.0, 0x1.25a97441463dep-981, 0x1.a8e2d1bb6f621p-909,
     0x1.81527a6514065p-733, 0.0, 0x1.7370107a59a21p-318, 0.0, 0.0,
     0x1.2012cc843dc1dp-665, 0x1.3b112fd72b279p-482, 0.0, 0x1.adba7ff36a6b8p-752,
     0x1.76e3e3903dedfp-489, 0x1.f3451564bd8c2p-186, 0.0, 0.0, 0.0,
     0x1.5bee03191a3ap-1018, 0x1.5b874f2a9a8b1p-206, 0x1.ff1de90148546p-975,
     0x1.878d4e5d6e4e4p-402, 0x1.186e7ee6b3728p-308, 0.0, 0x1.66e276edbbcaap-47, 0.0,
     0.0, 0.0, 0x1.25af41731e0e2p-674, 0.0, 0.0, 0x1.b0545e8bf955fp-73,
     0x1.3f11192d92961p-144, 0x1.556fc56647639p-819, 0x1.ebe15ba0360d4p-773, 0.0,
     0x1.42c3707180d86p-360, 0x1.b646976b79711p-20, 0x1.506113476f507p-109, 0.0, 0.0,
     0.0, 0x1.7de16cd2ca51ap-933, 0x1.7205d8b0ba59bp-343, 0x1.bef143cbcaee1p-436,
     0x1.8e93c63168f98p-1016, 0x1.1ea27e95c3deep-333, 0x1.de812066859efp-683, 0.0,
     0.0, 0x1.01db7102e26cdp-346, 0x1.1667a49124f47p-68, 0x1.40a3224418cabp-721, 0.0,
     0.0, 0x1.e20cafb441b31p-1000, 0x1.af8d4026db0c4p-955, 0.0, 0.0, 0.0,
     0x1.74605de946707p-96, 0.0, 0x1.d3c01d91d637bp-637, 0x1.e3ec46215755p-325, 0.0,
     0.0, 0.0, 0x1.c5fc0d04a6d0cp-417, 0.0, 0x1.f6a44147b2974p-79, 0.0,
     0x1.5575e08dee6acp-1010, 0x1.8d5a7510f498ap-603, 0.0, 0x1.3f772a037a0adp-421,
     0.0, 0x1.3de5e1a3b7e63p-885, 0x1.f7c9ea335cd24p-616, 0x1.26b76dab79a75p-71, 0.0,
     0.0, 0.0, 0.0, 0x1.3c5f14548a873p-629, 0.0, 0.0, 0x1.42ab2dbec172bp-542,
     0x1.3a6dc32cd27f4p-49, 0.0, 0x1.74616cf29067p-459, 0.0, 0.0, 0.0,
     0x1.1542cae7db5e5p-273, 0x1.dd181e762cc17p-268, 0x1.3c4eabede1309p-484,
     0x1.0e2d1cea29b77p-483, 0x1.36ae3c2c44927p-519, 0x1.ee399229c296cp-622,
     0x1.965b36b4587bcp-458, 0x1.d74252855f66ep-885, 0.0, 0x1.48e903994471dp-171, 0.0,
     0x1.a11d19c1cebc4p-104, 0x1.946bd5e46fe83p-54, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7cf199f7e9309p-617, 0.0, 0x1.af84f9fbf79f1p-660, 0x1.6bb28974bbee4p-780, 0.0,
     0x1.20540b08e1f7dp-316, 0.0, 0x1.c796ffaf3e771p-994, 0x1.ac6c0ddedb43fp-878, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4a69ce9f51de9p-594, 0.0, 0.0, 0.0,
     0x1.51bdb7bc29989p-328, 0x1.2615f966f348p-993, 0x1.c372b95d3fafap-771, 0.0,
     0x1.f6e92bf3b195bp-87, 0x1.f887d568f2c2bp-891, 0x1.7da0fa50a2c79p-709, 0.0,
     0x1.a765976c60562p-20, 0x1.b3f7915fcc293p-329, 0x1.545d3cc0f7841p-16,
     0x1.a614019482b0fp-255, 0.0, 0.0, 0.0, 0.0, 0x1.53bba6125314bp-528,
     0x1.c193c7539aed8p-105, 0.0, 0x1.0230f8db24c77p-519, 0.0, 0.0,
     0x1.9dc24cbb91c8p-376, 0.0, 0.0, 0.0, 0x1.d6ccd02e5833cp-168,
     0x1.f5d81fa0e3855p-650, 0x1.38804108ac6bbp-21, 0.0, 0x1.e27af4c22a9ecp-634, 0.0,
     0x1.d7a5ba8eb58bp-867, 0x1.44333caa07e2bp-324, 0x1.c6d5fe729d0a2p-343,
     0x1.2cdfc082cbfc8p-764, 0x1.5f9a70af8ad12p-668, 0.0, 0.0, 0x1.228a6eee6ae3fp-495,
     0.0, 0.0, 0.0, 0x1.52af850e58bc4p-583, 0x1.dde6e671c18e3p-34, 0.0, 0.0, 0.0,
     0x1.1e5ffc770a5b1p-597, 0.0, 0.0, 0x1.4e7aa1d11a828p-650, 0.0,
     0x1.e70ea6ce21a0cp-156, 0x1.2d39bf498ea7cp-45, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bc5c05f0a423bp-63, 0.0, 0.0, 0.0, 0x1.fc6e09af9c7a1p-657, 0.0,
     0x1.474de1574f8f2p-680, 0x1.01cdbf395a69ap-356, 0.0, 0x1.b9bedecfb490fp-906, 0.0,
     0x1.f74fd62596df6p-428, 0.0, 0x1.d016b3b425e9cp-578, 0x1.4a9a247a4f158p-390, 0.0,
     0x1.4df520ff0738dp-1013, 0x1.476a39cbba8e4p-756, 0.0, 0x1.c120e5d608afep-155,
     0x1.5c45e5eeb640dp-325, 0.0, 0x1.02631ed0885e7p-251, 0x1.9d6cdd5598745p-95,
     0x1.187b7112d05cep-672, 0x1.27561fad63eb5p-328, 0.0, 0x1.6ff63eb8731c8p-243, 0.0,
     0x1.ac8fee9680796p-815, 0.0, 0x1.f8bcb3ac5ca46p-759, 0.0, 0x1.75eb6a6787978p-253,
     0x1.9bace5aae4008p-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1d9521f22eee2p-27,
     0x1.b4ba2337b8a02p-973, 0x1.408180237aeefp-446, 0.0, 0.0, 0x1.9b4d0a64062adp-755,
     0x1.ad59e063479ccp-749, 0x1.0e5c12a4f586ap-575, 0x1.a80ee63a1fcc9p-570, 0.0, 0.0,
     0x1.135eabaf82c28p-131, 0.0, 0.0, 0x1.11b8ccf77497bp-676, 0x1.e8a9377dbb8fep-433,
     0x1.9b0f7575e5967p-417, 0x1.f49d13da3c922p-765, 0.0, 0x1.22e3c5d734053p-852,
     0x1.408dbde489437p-11, 0x1.88a7396f07c46p-708, 0.0, 0x1.a3316e1ee808ap-515, 0.0,
     0.0, 0.0, 0x1.e7dca30cc4c29p-366, 0.0, 0x1.be3adcde1b0a6p-218,
     0x1.460f94a40999ap-187, 0x1.dfa770668b6ffp-643, 0.0, 0x1.f4b9f13982105p-986,
     0x1.0c137d86f9b58p-349, 0x1.feb9396f0ca44p-145, 0x1.1e42eb23a5bc1p-228, 0.0,
     0x1.f467ed7539f6cp-185, 0.0, 0.0, 0x1.68c2e9174cbf6p-420, 0.0, 0.0, 0.0,
     0x1.9be5082c25fdep-847, 0x1.cef809e868e1p-547, 0x1.c406f9f30665ap-953, 0.0, 0.0,
     0x1.a9a0f8c651c31p-726, 0x1.3bd53f6f9cf26p-938, 0.0, 0x1.3ed6bbe258214p-249, 0.0,
     0x1.0b7b682b5a5f4p-247, 0.0, 0x1.1fe5dfccffe36p-269, 0.0, 0.0,
     0x1.dfa8a7e9f8e77p-404, 0x1.f1035d09fa0e4p-371, 0.0, 0.0, 0.0, 0.0,
     0x1.6eb81ce489c1ep-688, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42fae97e80baep-898,
     0x1.5ee627eec28d7p-559, 0x1.79018e46e4f82p-665, 0.0, 0x1.c7ddd0c37c77fp-345, 0.0,
     0x1.b854138a84275p-793, 0.0, 0.0, 0x1.f7180b14cb0d6p-535, 0.0,
     0x1.54208033427a7p-431, 0x1.debec9fe0910cp-292, 0x1.b3115c9ab8d1ep-37, 0.0, 0.0,
     0x1.ee4fe8ce0d4a2p-45, 0.0, 0.0, 0x1.52358bcb81e1dp-723, 0x1.3dd13b6efbe65p-138,
     0x1.f8e7b9121e977p-322, 0.0, 0x1.1b2d5497f778bp-523, 0x1.9bea89e0165adp-830,
     0x1.9250d356262p-755, 0x1.4dd0d2354166fp-543, 0.0, 0x1.3dada3ae0b753p-501, 0.0,
     0x1.d8aac4bb3f49bp-974, 0.0, 0.0, 0x1.dbb8c85966d87p-943, 0.0,
     0x1.5b1d821c10508p-704, 0.0, 0x1.211bfb3261446p-600, 0.0, 0x1.6d3c59aa7303dp-316,
     0.0, 0.0, 0x1.97aaaf2ed9e5ap-980, 0.0, 0.0, 0x1.f6e4607953882p-743, 0.0, 0.0,
     0x1.998a9aec05334p-920, 0x1.408461117ce7dp-380
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
            tmp1 = Sleef_coshd1_u10purecfma(tmp0);
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
    printf("Sleef_coshd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
