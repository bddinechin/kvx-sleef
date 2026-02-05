/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintd2_kvx.c --function Sleef_finz_rintd2_kvx \
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
     0.0, 0x1.ed237f308fc7ep-923, 0x1.ae81342db5ec4p-114, 0.0,
     0x1.5cf222fc3e18dp-219, 0.0, 0.0, 0x1.ca018c20a1fc8p-379, 0x1.e797d1b3fc54dp-153,
     0x1.c6d3972718d69p-271, 0.0, 0.0, 0x1.663e35ed1bfeap-680, 0x1.b0c5877b154e1p-150,
     0x1.485e25dd53d09p-12, 0x1.07b7604cc2de5p-637, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1540af13c124bp-47, 0.0, 0.0, 0.0, 0x1.49eeb80e03324p-113, 0.0, 0.0,
     0x1.063ca8cae683cp-83, 0x1.6e3f447ab4f7ep-568, 0.0, 0.0, 0.0, 0.0,
     0x1.c13b10736de4bp-711, 0x1.8ca2198ff73p-945, 0.0, 0x1.74a9b8c008b51p-377, 0.0,
     0.0, 0x1.a641e310d2691p-33, 0x1.5b6d4575172dp-391, 0x1.cd2d1c0f5da44p-245,
     0x1.e5adde5ee9182p-252, 0x1.6db3f4791951bp-806, 0x1.89c417bb1c6d4p-987, 0.0,
     0x1.cbc432b65b7fbp-875, 0x1.71eb20975db9bp-241, 0.0, 0.0, 0.0, 0.0,
     0x1.af196a79e7194p-149, 0.0, 0x1.09ae8fdd1be2bp-590, 0x1.bb482feaaf572p-59,
     0x1.be506f7e99de3p-23, 0x1.50c630d2c100bp-310, 0x1.79abd4a70f615p-529,
     0x1.e7cd7855dbda7p-524, 0.0, 0.0, 0.0, 0x1.b0da88e967e2bp-982,
     0x1.de9b906c99763p-81, 0x1.85357a48fadf8p-84, 0x1.996b0d03d5931p-271, 0.0, 0.0,
     0x1.4ddff5b0ef805p-186, 0.0, 0x1.53168a7a805dap-145, 0x1.54cf8404454d5p-118,
     0x1.8eabe95f2eb6dp-859, 0x1.0d9aa3d3f7747p-575, 0.0, 0x1.a67ed73e0082p-239, 0.0,
     0.0, 0x1.44b3a96b09bb7p-956, 0x1.9af352acfc3d2p-254, 0.0, 0x1.af8e50d5a1bd8p-290,
     0x1.f370116a78476p-274, 0.0, 0x1.4cba5013dd3efp-421, 0.0, 0x1.8e1aac1adc5ep-811,
     0x1.c4c4a6ace611p-807, 0x1.d346dff71af7bp-1020, 0x1.0316ea9f9bb63p-260,
     0x1.f186a62ffb46cp-59, 0.0, 0.0, 0.0, 0.0, 0x1.9e9724d83b8a9p-689,
     0x1.3ac7927bc7c51p-999, 0.0, 0.0, 0x1.48e516fbd99d9p-498, 0x1.b3c89b0054ed2p-44,
     0.0, 0.0, 0.0, 0x1.1a16378c04f57p-165, 0x1.7791bf83fb8f6p-201, 0.0, 0.0,
     0x1.fcbc10fe680ebp-542, 0.0, 0x1.fe40690a5dc71p-654, 0x1.7d52351e01e3cp-673, 0.0,
     0.0, 0.0, 0x1.42ff4ff8f1583p-1006, 0.0, 0.0, 0.0, 0x1.ca4fa8312d6a1p-725,
     0x1.e5368521f2f15p-412, 0.0, 0.0, 0.0, 0x1.36f0b7e29a2c7p-978, 0.0,
     0x1.59949f727f2bfp-384, 0x1.954a8b50ed57ep-428, 0.0, 0x1.c9c9737f71f84p-111, 0.0,
     0x1.194102ee7e6dbp-688, 0x1.e16c01930d1f8p-7, 0.0, 0.0, 0x1.2f8b860072a3ep-145,
     0x1.3d413355251ccp-45, 0.0, 0.0, 0x1.ad6ef63bda63dp-735, 0.0, 0.0,
     0x1.1d64e81690eb3p-722, 0x1.609fc87298ad6p-597, 0x1.9847abc269388p-1003, 0.0,
     0x1.e5949421af6d8p-403, 0.0, 0x1.6f6c803882085p-669, 0.0, 0x1.ed3b549aadbd1p-174,
     0.0, 0.0, 0.0, 0x1.106b145c02675p-622, 0.0, 0.0, 0x1.028a58d5d9129p-990, 0.0,
     0.0, 0.0, 0x1.b36169e8f8042p-138, 0.0, 0.0, 0.0, 0x1.4e2fa9d17c797p-487,
     0x1.0cdfe59442124p-319, 0x1.62749676a6e1p-427, 0x1.32674cb1486bbp-692, 0.0,
     0x1.fd06d598a809p-869, 0x1.8ca2c7cbbb0c5p-780, 0x1.60fdb5af635p-691,
     0x1.1ee4af0f57d11p-390, 0x1.65b9703ce31f1p-602, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.89c8d6e26d402p-714, 0.0, 0.0, 0x1.68578e76b90b2p-880, 0x1.a0d099adb0637p-826,
     0x1.3a54e0da303ddp-526, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.937578dfc69fbp-290,
     0.0, 0x1.8b6d6009215f7p-538, 0.0, 0x1.1ded534976c38p-610, 0x1.81a1d89ae261bp-710,
     0.0, 0.0, 0x1.ee1e823a54883p-210, 0.0, 0.0, 0x1.0b58552952d2bp-929, 0.0,
     0x1.fdf3dd92eb8dcp-990, 0.0, 0x1.266fe0d34dcep-14, 0x1.a6516f9da3942p-435, 0.0,
     0x1.46aaceb660a06p-137, 0x1.a868f3a7785d6p-823, 0.0, 0x1.24e1992722d44p-655, 0.0,
     0.0, 0x1.7782839243f3cp-230, 0.0, 0x1.8cd06d4412138p-759, 0.0,
     0x1.19880a5156014p-996, 0.0, 0x1.de9947f89f925p-231, 0x1.12fbe704277ecp-557,
     0x1.4ca4f5a9bcd9fp-285, 0x1.370450c700396p-276, 0.0, 0x1.695968056f0f4p-1008,
     0.0, 0.0, 0x1.35b83096c647fp-26, 0x1.f6e4dd157d3e6p-529, 0x1.5af06a5a8b56cp-582,
     0.0, 0x1.a3bb09780495dp-519, 0x1.03cbd910f56b7p-2, 0.0, 0x1.24315b46a9f8ep-951,
     0x1.43908f3d09c8ep-350, 0x1.8f794c136f29cp-642, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.809b4af589cd2p-762, 0.0, 0x1.cb71a76952746p-255,
     0x1.eb358b4eb561fp-188, 0.0, 0x1.ad0f4a955bfap-676, 0x1.e837b6aa3fa73p-83,
     0x1.c4c8f97365471p-174, 0x1.db03ae74e7c75p-325, 0.0, 0x1.25903eb71d032p-195, 0.0,
     0x1.c7564d02cf238p-708, 0x1.c240897fe8a9fp-491, 0.0, 0x1.b57b85af7d795p-629,
     0x1.6119b42bfaddep-283, 0x1.e054adb725dafp-245, 0x1.5e1b43e5ade28p-171,
     0x1.6d23115204977p-491, 0x1.1fb97c54aaab3p-242, 0.0, 0x1.c673ae21b469fp-638,
     0x1.fc5406282c214p-96, 0.0, 0.0, 0x1.89069196361ddp-518, 0x1.12e275005b626p-611,
     0.0, 0x1.b2489f2a95f92p-848, 0.0, 0.0, 0x1.54158176dccaep-483,
     0x1.9b55922d03313p-705, 0.0, 0.0, 0.0, 0.0, 0x1.d68ca119847e4p-104, 0.0,
     0x1.ce0573518a886p-144, 0x1.888ed56425301p-300, 0x1.32b2cf131343dp-665, 0.0,
     0x1.bc1d2d79733f7p-267, 0x1.098538896aa41p-386, 0x1.b52d264f94ad4p-388,
     0x1.19f1d83c84338p-493, 0.0, 0.0, 0x1.d95307587fe36p-680, 0x1.e267ea0fe3a0fp-264,
     0x1.972e27b4f7f8cp-1007, 0.0, 0x1.6de44a3089a42p-46, 0.0, 0x1.6d25f4a725ee9p-349,
     0.0, 0x1.a08c4a79bc9d2p-153, 0x1.7342b01d060e9p-321, 0.0, 0x1.a9bbb98bb709dp-301,
     0x1.b76966e0e7b41p-445, 0x1.26ab44efa46b3p-561, 0x1.a5a5aaa009c7cp-778,
     0x1.dfa8df8c8705ap-16, 0.0, 0x1.73ba9bc6932ddp-930, 0x1.53c0afb8354fbp-260,
     0x1.b3b851fa020b7p-622, 0.0, 0x1.1219e866d2c01p-303, 0.0, 0.0,
     0x1.24aca97ac7b6ap-388, 0x1.428a09569f205p-11, 0.0, 0.0, 0x1.cee65cea341cap-493,
     0.0, 0.0, 0x1.d50d5826666ddp-1005, 0.0, 0.0, 0x1.5be5060d1b84fp-599, 0.0, 0.0,
     0.0, 0.0, 0x1.9a3ca02a4282cp-899, 0.0, 0x1.06652ee971404p-352,
     0x1.440241239f3bbp-848, 0.0, 0x1.9e28d48a704d2p-528, 0.0, 0.0, 0.0, 0.0,
     0x1.e4c12df8a00b6p-570, 0.0, 0x1.2058ac6e3d414p-330, 0x1.ef2de9b6c37cfp-882, 0.0,
     0.0, 0x1.3acfc1a6da098p-884, 0.0, 0x1.61571054a738ap-313, 0x1.ce3b43417a961p-4,
     0x1.75b6030e1966fp-220, 0x1.e5456077a9c56p-806, 0.0, 0x1.376de4b94c6a1p-2,
     0x1.2a73dbfdc4687p-449, 0.0, 0.0, 0x1.f0e43be43a16bp-508, 0x1.da188366b190fp-564,
     0.0, 0x1.97225b6efdf96p-322, 0.0, 0x1.3fb69e953fe94p-998,
     0x1.efa73e4d81eb4p-1001, 0.0, 0.0, 0.0, 0x1.7a35da6c656eap-944,
     0x1.0cf09aa47cb91p-759, 0x1.b767a213b4a4bp-858, 0x1.b3a7e034ad716p-353,
     0x1.dc917fec2e28ap-656, 0x1.eb18810e83e3p-643, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5a63aba06aeap-233, 0.0, 0x1.d8af8abfd406ep-409, 0.0, 0.0, 0.0, 0.0,
     0x1.78ca687367754p-460, 0.0, 0x1.6def9cbd557acp-651, 0x1.ee16156f2ccb8p-186,
     0x1.fe84e30d34542p-931, 0.0, 0.0, 0.0, 0x1.bf1d56b0021a3p-425, 0.0, 0.0,
     0x1.283dca79b7b52p-906, 0.0, 0.0, 0x1.08b37e0a84e76p-123, 0x1.396dcf940cabcp-814,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e44b6fc0c2ddbp-60, 0.0,
     0x1.fc149069f0176p-944, 0.0, 0x1.b047fa785598fp-117, 0x1.adb08f6fe2406p-1009,
     0.0, 0x1.d32bb0f49a0fcp-811, 0x1.2c3a2ddfc616cp-353, 0.0, 0.0, 0.0,
     0x1.31a6fbb978234p-231, 0x1.1d3b3912c7eb4p-442, 0x1.e5e0312f9be0ap-675, 0.0,
     0x1.a3cedfb13810dp-492, 0.0, 0x1.d958aa34049dep-48, 0x1.a5e9527994751p-37,
     0x1.79aa17f231b2ap-262, 0.0, 0.0, 0x1.1f64ee8ed4f5ap-928, 0x1.18625f3bdf383p-30,
     0x1.e76e951a52537p-490, 0x1.0444f8e33fb6ap-839, 0.0, 0.0, 0x1.1dc1008a698cp-704,
     0.0, 0x1.46fafb071d6fcp-102, 0x1.61ce99095484fp-816, 0.0, 0x1.2e1938a17bee5p-426,
     0.0, 0x1.138237661f0fep-403, 0x1.08695dcc076d1p-611, 0.0, 0x1.19f4e4d9202ccp-192,
     0.0, 0.0, 0.0, 0x1.5212af07f5057p-642, 0.0, 0.0, 0.0, 0x1.5227afbbc6508p-896,
     0x1.9c61de83b24cbp-675, 0.0, 0x1.9e5d4c34f3cc1p-134, 0x1.5f1440554d7f1p-754, 0.0,
     0.0, 0x1.8f2c61273f63ep-128, 0.0, 0x1.3b30fa126e40fp-463, 0.0,
     0x1.7fe924574a6c4p-782, 0x1.cad09ad3f8d6fp-278, 0x1.ee7cc59b656bcp-982, 0.0,
     0x1.db17b2b32fcabp-1021, 0.0, 0x1.ccd740166afacp-475, 0x1.50858f9cf3329p-757,
     0x1.cd6cc2ed10a7ap-779, 0x1.4b76c3b0b10ebp-206, 0x1.40ad8f57fa1cdp-545, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d41e1c87a42fbp-218, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.811f6fe429adp-1022, 0x1.a45d0383f943bp-73, 0x1.b2da53c217dbcp-1012,
     0x1.9f2546d9d4456p-990, 0x1.cfa70b3de7dp-774, 0.0, 0.0, 0.0,
     0x1.837e72efbe6cp-747, 0x1.b6ae4a99f6c33p-895, 0x1.cf58409d32db3p-492, 0.0, 0.0,
     0x1.118236580a22ap-996, 0.0, 0.0, 0.0, 0x1.39aaffd1c0071p-69, 0.0,
     0x1.3ecc98de0da78p-249, 0x1.a47deafad1516p-993, 0x1.4454523e5002fp-371, 0.0,
     0x1.b9637cdd13b55p-513, 0.0, 0x1.c1e3980e99249p-685, 0x1.868fb6be00a92p-948, 0.0,
     0.0, 0x1.3a14696cc6565p-889, 0x1.94fe5691464fcp-640, 0.0, 0x1.72a8874c4887p-768,
     0.0, 0x1.e2761d0ce229ap-780, 0.0, 0.0, 0x1.52f4451ed3257p-1007, 0.0,
     0x1.725fd27be429dp-398, 0x1.dd3b64360d6f6p-748, 0x1.ae57ab107cfb1p-273,
     0x1.599ecf11d3d88p-404, 0.0, 0x1.c72e6606dee78p-174, 0x1.687e638ce5235p-194,
     0x1.2a3e03409533ep-937, 0x1.3464a0c6e64bp-744, 0.0, 0x1.0418dda39ab6bp-754, 0.0,
     0.0, 0x1.f2af9d0bf0a65p-426, 0.0, 0.0, 0x1.be04421799af2p-622, 0.0, 0.0,
     0x1.5a4fd7aac0771p-133, 0x1.31a8435b7e569p-839, 0.0, 0x1.c090a34d305cfp-534,
     0x1.5cc8e4876fb46p-647, 0.0, 0.0, 0x1.ef2a3e9f5d683p-83, 0.0,
     0x1.8a564aaf7d7dp-797, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18ac55c7a88e5p-138,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db9ee8a80e7e4p-83, 0.0, 0.0, 0.0,
     0x1.001c08c1c4bdep-915, 0x1.b290a4a6dbcd6p-718, 0x1.0c1af90caefcfp-392,
     0x1.d80171bb94ff1p-310, 0.0, 0.0, 0x1.5eedba802406ap-317, 0.0,
     0x1.8e7f1ea75fa68p-540, 0.0, 0x1.1883476d8000fp-461, 0.0, 0x1.de736304f7d0dp-938,
     0.0, 0.0, 0x1.3066da9211dd3p-613, 0x1.d2e3e9031d21cp-505, 0x1.10f37428a888fp-570,
     0.0, 0x1.5862eb5f44de3p-494, 0x1.1ff7a2cf634a9p-985, 0.0, 0x1.dc5589d25d7bp-960,
     0.0, 0.0, 0x1.44f1343f33187p-925, 0.0, 0x1.909fb626f159dp-455, 0.0,
     0x1.fbca6d5cca74ap-186, 0x1.214e67b1e6609p-121, 0.0, 0x1.0976d69c2eac1p-527,
     0x1.21863f421f526p-986, 0x1.d79deabd4f45ep-687, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.78a63db21362ep-730, 0x1.d62b8681ee4b6p-932, 0x1.e3368d88c7c62p-92,
     0x1.47a241678403ap-175, 0.0, 0.0, 0x1.ecc61c9cec07ap-576, 0x1.5be2736cdcadfp-173,
     0x1.14659dfc8b3b8p-984, 0x1.6e708303503efp-562, 0x1.beffef4962a19p-328, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.eb8737559de4fp-468, 0x1.a3102841c5c98p-491,
     0x1.a3cb17f634047p-597, 0x1.f85ba0b490552p-219, 0.0, 0.0, 0.0,
     0x1.0fb1c813764e2p-504, 0x1.4f78ae2c5cad3p-256, 0x1.ecf452b20a3e2p-132,
     0x1.9bb02cd7bb226p-146, 0x1.0f2f33b1c9b8bp-206, 0x1.21b039e514fa1p-1005, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ccaa0bee93e02p-28, 0.0, 0x1.8807db4a016acp-136,
     0x1.0c7447f79c511p-149, 0x1.d0e028e6c64d8p-152, 0.0, 0.0, 0x1.ff1fc4fe3d035p-956,
     0.0, 0x1.dc6fe4b9acfdp-702, 0x1.be4657c288f4cp-807, 0.0, 0x1.b13af4e6741fdp-842,
     0x1.2a341792b9941p-799, 0x1.94519eef82e8ap-125, 0.0, 0.0, 0.0, 0.0,
     0x1.72533bec346e3p-974, 0.0, 0.0, 0x1.b3a017faf34adp-882, 0x1.8a702665cc916p-58,
     0x1.4c3b4241aeecfp-307, 0.0, 0.0, 0x1.266976296134fp-135, 0.0,
     0x1.395ea57b25bc9p-567, 0.0, 0.0, 0x1.30aa9ef83e042p-499, 0.0,
     0x1.7958be00fa134p-520, 0.0, 0x1.8454580e97c34p-725, 0.0, 0x1.faa5e7f33da73p-327,
     0.0, 0x1.6d8903eb78f0ap-729, 0x1.9dc03e11a2641p-873, 0x1.3a2a899e10179p-331,
     0x1.1935127063a8cp-240, 0x1.5796a7c5cd7f6p-590, 0x1.de153a3a49489p-469, 0.0,
     0x1.1238119562f11p-720, 0x1.540ea17803364p-1011, 0.0, 0x1.be394d64f48c6p-294,
     0.0, 0.0, 0x1.3f9d893d90de3p-694, 0.0, 0.0, 0x1.06cea4563806ap-127, 0.0,
     0x1.392b9742e25c3p-43, 0x1.3a399275bca18p-973, 0.0, 0x1.a7a0ead0ccaadp-863,
     0x1.980a1bdc2d59ep-986, 0.0, 0.0, 0x1.2c52afb453a3cp-610, 0x1.f4544fa8c1257p-272,
     0x1.460868c3ca69p-12, 0.0, 0.0, 0x1.d8f4b3d863402p-145, 0.0, 0.0, 0.0, 0.0,
     0x1.10659d867e54bp-123, 0x1.46e8ad05e8997p-757, 0.0, 0x1.99e3b1b007c83p-971,
     0x1.b77a343d60ae8p-21, 0x1.11f8075779fcbp-240, 0.0, 0.0, 0x1.c1fada6ab84edp-927,
     0.0, 0x1.7979ffa5b7476p-1014, 0.0, 0x1.006463a9359e6p-645, 0x1.193b1c0e9e48p-136,
     0x1.08c26272e68d6p-179, 0.0, 0x1.5401700e3cd32p-184, 0x1.e5a6da19508f7p-754,
     0x1.f2b65c4bc3e07p-363, 0.0, 0.0, 0x1.bbdee5ab5d02dp-584, 0x1.b0fe87f249b75p-111,
     0.0, 0.0, 0x1.c5a85de23200cp-646, 0x1.5801ef1c2f90bp-691, 0x1.976c4edaf12bdp-601,
     0.0, 0.0, 0.0, 0x1.e9e3446ad5c5p-88, 0x1.9a2c66bf72e38p-710,
     0x1.09c0197ad4844p-331, 0x1.f3db6a5ac974ep-67, 0.0, 0.0, 0.0, 0.0,
     0x1.a0937a5ecbc73p-531, 0x1.49185fa23ead7p-1009, 0.0, 0.0,
     0x1.247bb9ca033e1p-207, 0x1.19e1ee0eb6cb2p-13, 0x1.4e3671687c439p-448,
     0x1.592dab458d0ddp-537, 0.0, 0.0, 0x1.70f54ccc9a50ap-634, 0.0, 0.0,
     0x1.5a318aa8c2c7cp-475, 0x1.91932ad7e4942p-407, 0x1.45ee791ad9421p-501, 0.0, 0.0,
     0.0, 0x1.f699f7fe9939dp-805, 0x1.3a9e75e13a383p-232, 0.0, 0x1.9a3a01e326453p-85,
     0.0, 0.0, 0.0, 0x1.77972107f3ba7p-604, 0.0, 0x1.249df9e8e9745p-286, 0.0,
     0x1.36b5723fb1accp-839, 0x1.91143b4a17b68p-74, 0x1.d17862081d89ep-365,
     0x1.064e46e03aee2p-832, 0.0, 0x1.6d61c8bd974bp-70, 0x1.f696ab5331042p-980, 0.0,
     0.0, 0x1.f70345084d74bp-371, 0.0, 0.0, 0.0, 0.0, 0x1.aad339472a76cp-601, 0.0,
     0.0, 0.0, 0.0, 0x1.0e26cee587b11p-800, 0x1.9e161e9796f4p-459, 0.0, 0.0,
     0x1.907a6086dbf43p-562, 0.0, 0x1.5abd8b3fe217fp-424, 0.0, 0.0, 0.0,
     0x1.c7020faa7db55p-692, 0x1.fe449d55ac8fcp-843, 0x1.bb48b6a664079p-645,
     0x1.ee823197ac43p-600, 0x1.74f7a0b796e79p-233, 0.0, 0.0, 0.0,
     0x1.e6324783ff05fp-434, 0.0, 0.0, 0x1.9fed3863c5198p-780, 0.0,
     0x1.09de79d666faep-933, 0x1.63f2e6af454adp-245, 0x1.66293545e953dp-583, 0.0,
     0x1.4c2bfa2205765p-477, 0.0, 0.0, 0x1.79d6244a12e14p-203, 0.0,
     0x1.1506264a68307p-836, 0x1.733cd346f42ap-751, 0x1.2b67236e8aa69p-391, 0.0, 0.0,
     0x1.ab3a9f87ebfeep-799, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec52e43eb6488p-962,
     0x1.d6dc78d7fb6bap-978, 0.0, 0.0, 0.0, 0x1.3553deb8232d8p-841, 0.0,
     0x1.0b778558556bdp-833, 0.0, 0.0, 0x1.ec3a846718a7ep-425, 0.0,
     0x1.b84ae9d8cb361p-354, 0.0, 0x1.abb5dd55e8461p-411, 0.0, 0x1.f3fffba1d4d83p-323,
     0x1.5492a3260568ap-989, 0x1.ab6b8eb340ea6p-574, 0.0, 0x1.f489beb7e24fep-685, 0.0,
     0.0, 0x1.f5df8ce991d3ep-38, 0.0, 0x1.7ea39f9a87f2cp-50, 0x1.cf36a2fe5af33p-823,
     0x1.c6069ac9e530cp-1008, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1ddfaa15a7p-944,
     0x1.96b8977a173ebp-657, 0.0, 0.0, 0x1.35b0854011886p-499, 0.0, 0.0, 0.0,
     0x1.1f8cd74d1cc48p-918, 0.0, 0x1.3cd8a6871a006p-232, 0x1.d14eb03e673f8p-702, 0.0,
     0.0, 0x1.446bef6a3a3cep-938, 0x1.098e484889d25p-754, 0x1.c4c6a78a1a18bp-980, 0.0,
     0x1.8fd165cedf96p-11, 0.0, 0.0, 0x1.113a85202f79bp-490, 0.0,
     0x1.9fdbcafe909f7p-961, 0.0, 0.0, 0x1.642ee976fb3eap-782, 0.0, 0.0,
     0x1.d2110bbf28b74p-841, 0.0, 0x1.3123fb20d7bb1p-190, 0.0, 0.0,
     0x1.e8864c7287c2dp-704, 0x1.b75ab137be52dp-836, 0.0, 0x1.248c40c0d8778p-739, 0.0,
     0.0, 0.0, 0x1.8e67c7814df6p-962, 0.0, 0x1.74cbe73a1c73fp-167, 0.0, 0.0,
     0x1.ade7826352365p-530, 0.0, 0.0, 0.0, 0x1.05caa186bd3efp-244,
     0x1.5f7324eb3947cp-519, 0x1.6555dfb69c379p-550, 0x1.fc35553d7c88bp-503, 0.0,
     0x1.83f60241cdebdp-266, 0.0, 0.0, 0.0, 0x1.3eb98e7a0f59fp-9, 0.0,
     0x1.fa6e5423ebf21p-413, 0.0, 0.0, 0.0, 0x1.6661a25332a6fp-597,
     0x1.766ee229109e8p-148, 0x1.2b6abc2375dc9p-760, 0x1.b58d3134d0b35p-455,
     0x1.db125d64768fap-396, 0x1.e0af16266e784p-149, 0x1.6118f45c4b4bdp-919, 0.0,
     0x1.ea9cbd5881324p-770, 0x1.53eafa9a36297p-670, 0x1.4cad05f213466p-957, 0.0,
     0x1.80f5fef5b6ac6p-150, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.72f1677e12d45p-539, 0.0,
     0x1.fcd53685cda64p-335, 0x1.7f5155ff0987ap-993, 0x1.7015f781c79b3p-348, 0.0,
     0x1.2f7db0dcdb4ccp-911, 0.0, 0x1.92f055fe887dep-837
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
            tmp1 = Sleef_finz_rintd2_kvx(tmp0);
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
    printf("Sleef_finz_rintd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_rintd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
