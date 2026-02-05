/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expfrexpd1_purecfma.c --function \
 *     Sleef_expfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision int32 --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.0c88f9bf1e7b5p-848, 0.0, 0x1.e828a86306e12p-581, 0.0,
     0x1.e1e41d3c52313p-205, 0x1.61e6b1eb3cf19p-863, 0x1.1690b8eb846b4p-224, 0.0,
     0x1.a6b27ca6981f8p-424, 0x1.e84ec2f2cb676p-962, 0.0, 0x1.5607470fe70c5p-863, 0.0,
     0x1.50eaa1ae96aaap-876, 0.0, 0x1.67ba905e4fa66p-882, 0x1.03252c8e46ea7p-948, 0.0,
     0x1.046cbb12e303bp-536, 0.0, 0.0, 0x1.7b492ba5f9738p-181, 0.0,
     0x1.c7b7f14d57ae7p-437, 0.0, 0x1.fab09aef53e5cp-849, 0x1.3868f54692378p-883,
     0x1.9e18da103a2ap-851, 0x1.d50fd43191aa7p-431, 0.0, 0.0, 0.0,
     0x1.5975ae27c46dep-110, 0x1.841d46dec2b21p-316, 0.0, 0x1.b9ed3ecb05762p-301, 0.0,
     0x1.4b469b4c97df5p-980, 0.0, 0.0, 0x1.65815ef076e3ep-215, 0.0,
     0x1.199e27df14514p-911, 0.0, 0.0, 0x1.58e495ba9c325p-981, 0x1.b24edf2550df1p-665,
     0x1.8f4226b41dc91p-655, 0x1.8c7ea081acdb4p-947, 0.0, 0.0, 0x1.f6ed5223caf4cp-986,
     0x1.b7bfee017fc15p-508, 0x1.1d260404972fep-265, 0.0, 0.0, 0.0,
     0x1.ad4ac5998a248p-924, 0.0, 0x1.1b2e82794e498p-633, 0x1.fef3a0b9fbbe8p-532, 0.0,
     0x1.9464b6ca45119p-358, 0x1.dc030e9b4c03fp-287, 0.0, 0x1.733016cc19b15p-182, 0.0,
     0x1.e2a584d1ddaf5p-859, 0.0, 0x1.9682f97921b21p-634, 0.0, 0x1.0468f929f4462p-430,
     0.0, 0.0, 0x1.73e6b02e9b2ddp-380, 0x1.d8d4ca873c63cp-460, 0x1.7a86cddeb4f12p-48,
     0x1.64a32fe60fcf7p-683, 0.0, 0.0, 0x1.44e65caf319eep-588, 0x1.af971f2830194p-260,
     0x1.d25a818596958p-911, 0.0, 0.0, 0.0, 0.0, 0x1.99beb56b95327p-883, 0.0, 0.0,
     0.0, 0x1.75ec1e0a36affp-338, 0.0, 0.0, 0x1.a7a028db03a1fp-270,
     0x1.40299d40ed786p-551, 0.0, 0x1.a028a61f365d3p-82, 0.0, 0.0, 0.0,
     0x1.fc6f019f4e082p-481, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dff15a663db2ep-101, 0.0,
     0x1.df1b2a7375ddbp-748, 0.0, 0.0, 0x1.fd9f91703c575p-205, 0.0, 0.0,
     0x1.cfc93a22b8552p-765, 0.0, 0x1.4cab9bfbc1e0dp-419, 0x1.d184dd6bc1da9p-40,
     0x1.c7af719d0f372p-638, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f799a6a67004cp-689, 0x1.fc3ba1fb7f5cap-171, 0.0, 0x1.8d5d9f303f13cp-935, 0.0,
     0.0, 0.0, 0x1.360b54cef1ef3p-363, 0.0, 0.0, 0.0, 0x1.f5c38ce5d18c1p-566, 0.0,
     0x1.b33c8c437ecf8p-1008, 0.0, 0x1.afe3fe5419dcp-263, 0x1.e9457a86510f1p-629, 0.0,
     0x1.fe24a88c5d38fp-616, 0.0, 0.0, 0x1.614b2351b7144p-740, 0x1.62270bc1660a5p-297,
     0x1.47d0e91389ea8p-941, 0.0, 0.0, 0x1.bc4a1c13c0a11p-591, 0x1.110bc767dbf84p-876,
     0.0, 0.0, 0.0, 0x1.1b87b82afbfdp-356, 0.0, 0.0, 0.0, 0x1.c492aa0db1f38p-864, 0.0,
     0x1.35459dcbefa44p-871, 0.0, 0x1.6d66269758379p-849, 0.0, 0x1.8adcfba222c8dp-607,
     0.0, 0.0, 0.0, 0x1.7c7388c4cba8bp-954, 0.0, 0.0, 0.0, 0x1.1e9d942da98dp-419,
     0x1.5b79aa432b786p-483, 0.0, 0x1.fae2c7c4b6e98p-950, 0.0, 0.0,
     0x1.867e4ae1bdea6p-970, 0.0, 0.0, 0.0, 0x1.7655a887b65dp-252,
     0x1.595c10a0c0bd1p-556, 0x1.0bb1d22a8b7e1p-748, 0x1.4b4b365637c45p-579, 0.0,
     0x1.d75389561a2eep-204, 0x1.9ff47d429fdc9p-322, 0.0, 0x1.d4408f53bd53p-957, 0.0,
     0x1.b121dbb14cf27p-530, 0x1.ba0ab17882634p-86, 0.0, 0.0, 0.0, 0.0,
     0x1.99756687edc03p-711, 0.0, 0.0, 0x1.bfae55977e63bp-575, 0.0,
     0x1.2ea082cb429a4p-186, 0x1.9305b620b56a5p-654, 0.0, 0x1.f4b322c005126p-942, 0.0,
     0.0, 0x1.d15e0649f93a8p-214, 0.0, 0x1.66de8c4421575p-740, 0.0, 0.0,
     0x1.c1bbddfa88f81p-759, 0.0, 0.0, 0x1.76f9786e3c16fp-235, 0x1.ad4c45b121778p-945,
     0.0, 0x1.dc3c3b51f49fp-924, 0.0, 0x1.56dd8f93b297cp-977, 0x1.feef1c97abceep-865,
     0x1.a16bef7e07f19p-892, 0x1.2f3f7146bb23cp-604, 0x1.b224163dfe46ap-855, 0.0,
     0x1.fd6d4e1378424p-120, 0.0, 0.0, 0.0, 0.0, 0x1.bcbb1a3c04c53p-782, 0.0,
     0x1.635cce1ea7a49p-952, 0x1.48f67b603d975p-966, 0.0, 0x1.b8d07b66304e4p-884,
     0x1.2b01b0ba7c6acp-938, 0x1.abd47ef00aaefp-533, 0.0, 0.0, 0.0, 0.0,
     0x1.60683c8aed354p-329, 0.0, 0.0, 0.0, 0x1.8a630a513fdb4p-967, 0.0,
     0x1.d01f1a1b3664p-595, 0x1.009c97fc3b481p-898, 0x1.6332848af1d6fp-33,
     0x1.6e1a80843260ap-533, 0.0, 0x1.25bc84166cee4p-360, 0x1.0cb66f9556419p-667,
     0x1.6eff393395d71p-8, 0x1.6a2b4ecdb8c47p-890, 0x1.694e4de1df659p-558, 0.0, 0.0,
     0.0, 0x1.06fa34e535363p-748, 0.0, 0.0, 0x1.58ef86ba34c8ap-865, 0.0,
     0x1.6b66a9f71554dp-949, 0x1.bffb8b4d8b6d7p-563, 0.0, 0x1.3a46c22520bd6p-586, 0.0,
     0.0, 0.0, 0.0, 0x1.a1f8c4176ec75p-901, 0.0, 0.0, 0x1.697d8df245f3ap-330, 0.0,
     0x1.c97797bc7537bp-436, 0.0, 0.0, 0x1.3d302cb54bb1dp-241, 0x1.9cb3eb2c77cp-365,
     0.0, 0.0, 0x1.321d634d76be7p-909, 0.0, 0.0, 0.0, 0x1.50709cb874eeap-370, 0.0,
     0x1.c7409854a4407p-595, 0x1.709f302c14798p-815, 0x1.31306e4c9bcf1p-656, 0.0,
     0x1.57daae350c048p-806, 0.0, 0x1.f706fbeb3930fp-106, 0x1.950070b34ef45p-940, 0.0,
     0.0, 0.0, 0x1.316ca900d7d83p-437, 0.0, 0x1.8b40edadc5abcp-531,
     0x1.f2f7eaf75644ap-351, 0x1.432956da36f69p-907, 0x1.0a1695d04b865p-471,
     0x1.1ff73c96f8b76p-573, 0.0, 0x1.dd3d9f2a874dep-560, 0.0, 0x1.9a8e71d582cb6p-339,
     0x1.eea20b4122e99p-50, 0.0, 0x1.c70bbb9c78d67p-116, 0x1.8127836df6693p-539,
     0x1.17cc2a18af162p-718, 0x1.faa02c7be47a8p-120, 0x1.0039e24087784p-765,
     0x1.596b9005ea8bp-518, 0.0, 0.0, 0.0, 0x1.74597f3f5f3b1p-465,
     0x1.b71c53fb08e3ep-775, 0x1.4e101f09509p-398, 0x1.74bb4fc88817p-811, 0.0, 0.0,
     0.0, 0x1.aaf9b1a7a6d27p-609, 0x1.f74eebc69013dp-198, 0.0, 0.0,
     0x1.9f8b727e57a25p-613, 0.0, 0.0, 0.0, 0x1.7303aabcd1ecfp-369, 0.0, 0.0, 0.0,
     0x1.6ed3104ebd1e9p-523, 0.0, 0x1.72e0cd40f0833p-166, 0.0, 0x1.66f79a633b2a4p-625,
     0x1.0ea0c3ed4852ep-940, 0x1.edffddf91fa5p-378, 0.0, 0x1.dc0243c43d93bp-418, 0.0,
     0x1.c59e02efe05bdp-784, 0x1.015069508a239p-700, 0x1.64b048d8ed23ap-625, 0.0, 0.0,
     0x1.8c559818311b1p-781, 0x1.2196f644ce2a9p-588, 0.0, 0x1.ad441119bd5c8p-80, 0.0,
     0x1.b4241d1010096p-730, 0.0, 0.0, 0x1.2aa3070d98bp-560, 0x1.10e537b621887p-643,
     0x1.83b98ccb119cep-441, 0x1.34a4146fef25ap-444, 0.0, 0x1.5efebb581aec3p-476, 0.0,
     0x1.67e713ac564f9p-533, 0x1.ee02bac78ee6fp-717, 0x1.58919d78c63dfp-428,
     0x1.61495d693f347p-867, 0x1.cf807f842c419p-689, 0x1.8e13d0c42682p-990, 0.0,
     0x1.853e1e90a6174p-250, 0.0, 0x1.278181c903e2cp-191, 0.0, 0x1.b6e51cbed1944p-102,
     0.0, 0x1.19cfcc2eed113p-839, 0.0, 0.0, 0x1.2382cf9a196c7p-374,
     0x1.86a667a837757p-672, 0x1.0ba0a388a63b4p-945, 0.0, 0.0, 0.0,
     0x1.2360b41deeaa2p-328, 0.0, 0x1.b8988083de804p-46, 0x1.f0065b6ce26d4p-25,
     0x1.169f02d5b7df5p-263, 0.0, 0.0, 0.0, 0.0, 0x1.4e5c90b93fa0fp-619, 0.0, 0.0,
     0x1.273bce5c0d56ap-580, 0x1.2aee8a16e4ab1p-742, 0.0, 0.0, 0x1.cd366350866b7p-57,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed3d3cd12a9d9p-316, 0.0, 0.0,
     0.0, 0x1.80581b2353e04p-298, 0.0, 0x1.5e559a147534ap-230, 0x1.13dd658731fdp-878,
     0.0, 0.0, 0x1.bf1d0aceae76bp-969, 0x1.3fee02567f1dp-568, 0.0, 0.0, 0.0,
     0x1.b86fca32d9921p-141, 0.0, 0x1.22849c175c732p-154, 0.0, 0x1.e0e1387d41774p-14,
     0.0, 0x1.d3cad6f5ed224p-702, 0.0, 0x1.a3bb17e3b9a93p-996, 0x1.4bde17f3db98p-332,
     0x1.965fccedf78aap-854, 0x1.23894ab67f715p-576, 0.0, 0x1.f3720e6469d46p-9,
     0x1.94e63a4e42d55p-504, 0x1.b1a145030a5b1p-235, 0.0, 0x1.2d036a12d04e6p-20,
     0x1.66a94c616ce7ep-175, 0.0, 0.0, 0x1.f09b5eb1c47bcp-973, 0x1.5f649f79c9247p-355,
     0x1.34346bb8cb471p-253, 0.0, 0x1.2f0a33b302425p-107, 0x1.5bcad180733a9p-915,
     0x1.10d7102368b24p-150, 0x1.b12cce175054cp-614, 0.0, 0x1.b4b1dca57c90bp-209, 0.0,
     0x1.4a416338ee6b4p-101, 0.0, 0.0, 0.0, 0x1.4842122f5f275p-415, 0.0,
     0x1.85926e55a919cp-786, 0.0, 0.0, 0x1.098689ce1d76ap-613, 0x1.b0824001391f8p-697,
     0x1.bb1f3fc76caep-475, 0x1.15fa80f18ea67p-140, 0.0, 0.0, 0.0,
     0x1.cd802d1620c03p-853, 0.0, 0.0, 0x1.48b0a2c19e5e8p-458, 0.0,
     0x1.222f9e4407d2dp-235, 0.0, 0x1.233f7fbf0b3dbp-329, 0x1.b01db5e858345p-73, 0.0,
     0.0, 0x1.92ebf8c7405e2p-665, 0.0, 0x1.f0145b8f139a4p-656, 0x1.805c2b4f3d52cp-197,
     0.0, 0x1.43ca27a8bb24bp-960, 0x1.2075756dc4171p-229, 0.0, 0x1.1da9adc27ff8bp-869,
     0x1.9dfc859ba7067p-40, 0.0, 0x1.586948b73dcd5p-603, 0.0, 0x1.54b861986c869p-544,
     0x1.4699221fd8bb9p-2, 0x1.b73384025c78dp-444, 0.0, 0x1.4577893d2f96fp-224, 0.0,
     0.0, 0x1.f3cd25a2e4216p-731, 0.0, 0.0, 0.0, 0.0, 0x1.e763c1e5638dbp-926, 0.0,
     0.0, 0x1.226174febbc04p-566, 0.0, 0.0, 0.0, 0.0, 0x1.59df02e969cc5p-467,
     0x1.7c9c267d13ccap-862, 0x1.75d9267fffed3p-639, 0x1.8894c6b18c21fp-343, 0.0,
     0x1.a1abe0e6d1e0bp-675, 0x1.81d033a79900ep-456, 0x1.6953ed40a0188p-919, 0.0,
     0x1.7b6750b04ffdp-276, 0x1.403f9e4481e9cp-369, 0.0, 0x1.8b6d35ded62a4p-770, 0.0,
     0x1.46b9aa9fe65adp-401, 0x1.9dc7896c5f655p-782, 0x1.b91d321383d7bp-826, 0.0, 0.0,
     0.0, 0x1.26f43321d3236p-308, 0.0, 0x1.2ed4becf27873p-590, 0x1.8767cc5605615p-592,
     0x1.f3b10fa81c21ap-229, 0x1.c4db9a9ba525ap-306, 0.0, 0.0, 0x1.0605d840953adp-949,
     0x1.c8e2b06a76b44p-710, 0.0, 0.0, 0x1.366457751136ep-17, 0.0,
     0x1.da712a3f21d1ap-1012, 0.0, 0.0, 0x1.00d13493070fap-760,
     0x1.849deff169b25p-147, 0x1.0a2d5906272b5p-670, 0x1.d1c5445e6d1a2p-607,
     0x1.ec0ecde6ec02cp-307, 0.0, 0.0, 0x1.d8593d57040c9p-809, 0x1.cbcd2739eab01p-745,
     0x1.7d86db844977ep-551, 0x1.dfc845de24aa2p-631, 0x1.c7183cf8f83cfp-798,
     0x1.58a6e06464998p-977, 0x1.131e8b96237c8p-27, 0x1.56aba90b31974p-729, 0.0, 0.0,
     0.0, 0x1.e02a23779a633p-576, 0x1.07b64422e366cp-489, 0.0, 0x1.6ed23cfb568c4p-340,
     0x1.9f0b63d30f3e1p-660, 0.0, 0.0, 0.0, 0.0, 0x1.84b131c1ae727p-312, 0.0,
     0x1.a2f98461c2bdap-1021, 0x1.fafb024fbe7fap-521, 0x1.fc954a224ecf4p-517, 0.0,
     0x1.9925757cbcc91p-510, 0.0, 0x1.f05cb297afe0ap-398, 0.0, 0.0,
     0x1.a354862cf8bb1p-97, 0.0, 0x1.d8cdf0423a8aap-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2042908ef3ec8p-456, 0.0, 0.0, 0.0, 0.0, 0x1.0b9894151bb6bp-977, 0.0, 0.0,
     0.0, 0.0, 0x1.9084f681b6c39p-115, 0x1.507142f8d1331p-497, 0.0,
     0x1.0de34c8df5734p-369, 0.0, 0x1.12f7d9d24cdfp-812, 0x1.f531b4806603dp-427, 0.0,
     0.0, 0x1.1ccfad263f626p-873, 0.0, 0.0, 0x1.818239c1ec1fdp-899,
     0x1.1d90d3ed6b0b3p-57, 0.0, 0.0, 0x1.a0ffcadf59907p-742, 0.0,
     0x1.43e3a43ad7c46p-87, 0x1.6267e96c941fcp-71, 0.0, 0.0, 0x1.72c63cdc8b271p-303,
     0x1.9495188a84accp-365, 0.0, 0x1.12aa61f817ce6p-998, 0.0, 0x1.b3c866f391eb6p-87,
     0x1.7eb2fc4767655p-420, 0.0, 0.0, 0x1.a9b32607df508p-988, 0.0,
     0x1.c042b18918732p-754, 0x1.4b210cfbc6adp-16, 0x1.cc19272d8b753p-397,
     0x1.4f1b601c84a9fp-230, 0x1.0a5fb645645f3p-819, 0.0, 0.0, 0x1.c124e1d51782bp-410,
     0x1.fbb62b5595df6p-93, 0x1.8fc4aab6f0e15p-521, 0x1.c41970ea7cf6p-324, 0.0,
     0x1.8891e584bcecp-595, 0x1.5e65bbd8d387ap-510, 0x1.89cec802b0aaap-176, 0.0,
     0x1.8260b1eed5cfdp-790, 0.0, 0x1.7ee60741bf5f7p-871, 0.0, 0x1.4386d3dc0a0c1p-12,
     0.0, 0x1.da7ca4cf9cb2p-264, 0.0, 0x1.4d59dac32a73p-409, 0.0, 0.0, 0.0, 0.0,
     0x1.ca4635e7624e9p-751, 0.0, 0x1.04b3468883e31p-909, 0.0, 0.0,
     0x1.037ec5b9eeae2p-908, 0.0, 0.0, 0.0, 0x1.6fb726237d403p-527, 0.0, 0.0,
     0x1.33fb4704b68dp-559, 0x1.32b8511a6e424p-147, 0.0, 0x1.b9db6473fae51p-470, 0.0,
     0.0, 0x1.67f24bededc94p-373, 0.0, 0.0, 0.0, 0.0, 0x1.e52b0c80f5e0bp-270,
     0x1.1a398c65ea5fdp-693, 0x1.e4dc7919961b5p-517, 0.0, 0x1.7b92ec8bef6fep-890, 0.0,
     0.0, 0x1.a116017f912a8p-1017, 0x1.d6b06c40b129cp-316, 0x1.560db3a70f2d6p-43, 0.0,
     0x1.e3a4f8791de07p-835, 0.0, 0.0, 0x1.07a116c7a0786p-78, 0.0,
     0x1.7a94f3565cfe2p-958, 0.0, 0.0, 0.0, 0.0, 0x1.9cb2c24a9c53ap-781,
     0x1.11d1190cebdcdp-855, 0.0, 0.0, 0x1.d3cd3ebada8afp-977, 0x1.66daf81e0328p-479,
     0.0, 0x1.272b9fb3adcap-742, 0.0, 0x1.eb08915bba374p-561, 0x1.fc3d1064582e9p-363,
     0x1.255826a04c097p-57, 0x1.aab278404c258p-865, 0.0, 0.0, 0.0,
     0x1.b4f83cf239344p-308, 0x1.6f107423bcdafp-79, 0.0, 0x1.a8f67ff424b94p-755,
     0x1.93875fb2cd2e3p-196, 0.0, 0x1.5afba2939687ap-385, 0x1.768a34a107e57p-713, 0.0,
     0x1.0369a1e8aadb8p-358, 0x1.d67069ffd224bp-214, 0.0, 0x1.2ab16ee19b7cep-172, 0.0,
     0x1.ecbf6aff172a7p-943, 0x1.6fd9f1adb554dp-157, 0x1.110ca429d480fp-203, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d05db53d2f59p-902, 0.0, 0.0, 0.0,
     0x1.35b846a80bd7ep-526, 0.0, 0x1.1454d0a512f12p-62, 0x1.2efb66e720732p-824,
     0x1.8bd30b4108b0ap-176, 0.0, 0.0, 0.0, 0x1.5501fce48e706p-161,
     0x1.14adde1294985p-305, 0.0, 0.0, 0x1.5f8efb923911ep-253, 0.0,
     0x1.055ef88507b55p-60, 0x1.750b346a7339fp-430, 0.0, 0x1.b2f698b76bbbdp-915,
     0x1.50750a63ed857p-584, 0.0, 0x1.db93f6821a8c7p-880, 0x1.2b8d712d075cdp-441, 0.0,
     0.0, 0.0, 0x1.4208f2a320a67p-107, 0x1.47e2ec194c5dep-508, 0.0, 0.0,
     0x1.9e417e0e18ceep-324, 0x1.2d2cb08fcb616p-183, 0x1.bdb1a2eca746dp-524, 0.0,
     0x1.20a46df7dac1fp-632, 0x1.1c434560a9e4ep-155, 0.0, 0x1.fdb2d22f68939p-669, 0.0,
     0x1.46548ad8909dap-363, 0.0, 0.0, 0.0, 0x1.877a036a04662p-87,
     0x1.3eda87013fb5ap-81, 0.0, 0x1.d3f60c8595526p-447, 0.0, 0x1.3b654ace559f1p-407,
     0x1.62cff49d27e46p-303, 0.0, 0x1.1d1228a2230d3p-364, 0.0, 0x1.a19e2c9cfaf5fp-451,
     0x1.2d018d9cbefd4p-491, 0x1.35b352ea61a01p-561, 0x1.63dc18e52120cp-842,
     0x1.020f166a86505p-371, 0x1.666f8c553c475p-668, 0.0, 0x1.c1c043706c056p-418, 0.0,
     0x1.0982615772b19p-879, 0.0, 0x1.81864535ca5c4p-719, 0.0, 0x1.6d9695fb1f3ffp-489,
     0x1.9f61d00b421f7p-823, 0.0, 0.0, 0.0, 0x1.0e1f03a6020bp-856,
     0x1.ff370dacf4f1fp-1002, 0.0, 0.0, 0.0, 0x1.8a35d66a022d2p-761,
     0x1.30c8a2b1a6c76p-595, 0x1.17358c271bcf2p-318, 0.0, 0.0, 0.0,
     0x1.c96424fb443e1p-569, 0x1.7f2de8c0b3313p-679, 0x1.dcd696da84ec9p-372,
     0x1.6dc340b3b7596p-208, 0x1.4eafa95e8fd33p-380, 0x1.54e57eece084fp-793,
     0x1.9e05618ec2283p-228, 0.0, 0.0, 0.0, 0x1.cabd398e69d32p-152, 0.0, 0.0,
     0x1.9e4faa7870f66p-527, 0x1.bd7b5decb4012p-888, 0.0, 0x1.588745b5247dap-146,
     0x1.62290c032094bp-636, 0x1.7c215d7d47095p-695, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.15a99ca340ca7p-672, 0x1.c0e419a239092p-27, 0.0, 0.0, 0.0, 0.0,
     0x1.c35382a765a87p-915, 0x1.561dfa6407d76p-17, 0x1.d808f6da58103p-580,
     0x1.9a14acb2a093fp-354, 0.0, 0.0, 0.0, 0x1.f90dda98240a6p-323, 0.0, 0.0, 0.0,
     0x1.46cf193aafdd5p-1012, 0.0, 0x1.12d548302de41p-466, 0x1.c25748a5c195ep-294,
     0.0, 0x1.d703285bb44f1p-710, 0x1.1ac47d33ed9bcp-800, 0x1.c9a6ea1925087p-441, 0.0,
     0.0, 0x1.3e1b7698a38b1p-744, 0x1.7b10049ea194ap-123, 0.0, 0.0,
     0x1.6c511d63563aep-933, 0.0, 0.0, 0.0, 0x1.48a84a6f3f35cp-437, 0.0, 0.0, 0.0,
     0.0, 0x1.513d923fec2a7p-517, 0x1.714a4e0a0a397p-243, 0x1.be2d67e214aa9p-531, 0.0,
     0.0, 0x1.82994b57c00d8p-49, 0.0, 0x1.d4b4f58606224p-486, 0.0,
     0x1.bed7bdede5d2ep-742, 0x1.fa30d21739ddfp-526, 0x1.7d488d9fa0efap-915,
     0x1.acdcca6fa6678p-443, 0.0, 0.0, 0x1.945c3bdb8cf9fp-662, 0x1.88ca3c34f2767p-174,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff84b144cd9f2p-528, 0x1.991a2e3bc2a18p-127,
     0x1.20d5d48af1cb6p-748, 0x1.8b8645f9a7619p-146, 0.0, 0x1.be2db4d993787p-14, 0.0,
     0x1.892a102a06b75p-511, 0x1.1577b658d25cp-826, 0x1.5df82c2508386p-918, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cf3838415859ep-227, 0.0, 0.0, 0x1.3aa3b3f236ea8p-429, 0.0,
     0x1.b090d88f984bap-590, 0.0, 0x1.803b9d965123ep-606, 0x1.487871c934d1p-742,
     0x1.9efe7026900f1p-98, 0.0, 0.0, 0.0, 0x1.920272b729671p-305, 0.0, 0.0, 0.0, 0.0,
     0x1.b6efb787c4263p-684, 0x1.9413ad39332b2p-164, 0x1.4f0c60511bfddp-735,
     0x1.65504270dd81cp-969, 0x1.1d952366fc543p-186, 0x1.c6eb77b7271d8p-124, 0.0, 0.0,
     0.0, 0x1.f5212ddfaec3p-6, 0x1.e0f62e8bf3bcbp-362, 0x1.0095841032e4ep-576,
     0x1.0bebf97371f41p-351, 0.0, 0.0, 0.0, 0.0, 0x1.38dc62d39406cp-54
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = INT32_C(0);
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
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_expfrexpd1_purecfma(tmp0);
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
    printf("Sleef_expfrexpd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expfrexpd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
