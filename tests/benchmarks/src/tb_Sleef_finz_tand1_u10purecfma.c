/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand1_u10purecfma.c --function \
 *     Sleef_finz_tand1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.149b41e8ae214p-816, 0x1.45b7efb1b693ap-413, 0x1.8aade6e1cb831p-81,
     0x1.e429db0333109p-32, 0x1.d3b41f14c61d1p-553, 0x1.65297ecd32f93p-964,
     0x1.03120f8f46b2bp-889, 0.0, 0x1.13a0925be0ff8p-194, 0.0, 0.0,
     0x1.18a07eec26b7fp-453, 0x1.d8f4a3fe8737bp-9, 0x1.9db92db5bf3ddp-19,
     0x1.0eacb088945c6p-864, 0.0, 0.0, 0x1.78ec8d88807ccp-862, 0.0, 0.0,
     0x1.72a72d71d6785p-638, 0.0, 0x1.0e205bb614735p-650, 0x1.ce26a76b16e3cp-401, 0.0,
     0.0, 0.0, 0.0, 0x1.2de58f029f8dep-991, 0.0, 0x1.775c4f0a89bf2p-261,
     0x1.24285bfe6f23fp-515, 0.0, 0x1.6292858d20cfap-936, 0x1.178e8e681c707p-936, 0.0,
     0x1.ed682c0d78adfp-364, 0.0, 0.0, 0.0, 0x1.1b736d52d5b84p-309,
     0x1.4fd496c7f4a5bp-59, 0x1.1ca4eea25e402p-153, 0.0, 0.0, 0x1.a426d0b6ca882p-395,
     0.0, 0.0, 0.0, 0x1.703d66869caf3p-752, 0.0, 0x1.212ccdd7e0238p-992,
     0x1.fff63efa7cd46p-361, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4aa7f8f909b25p-663, 0x1.7e7ff1c5c1e9cp-145, 0x1.05ed47f971f05p-615,
     0x1.652003eafeecap-503, 0.0, 0x1.0cce835036dfp-855, 0x1.a1364b50ef326p-424, 0.0,
     0.0, 0x1.a7df3079b3b54p-788, 0.0, 0x1.fde292ca504f7p-405, 0.0, 0.0, 0.0,
     0x1.7e63ca4f9dab3p-266, 0.0, 0.0, 0.0, 0x1.e1838b6e52b02p-837, 0.0, 0.0,
     0x1.572a27d192efdp-189, 0x1.ceb0ad59b28b5p-630, 0.0, 0x1.fb715d3a07f71p-668, 0.0,
     0x1.0e256bcbfa55dp-625, 0x1.790289eb0471ap-788, 0.0, 0x1.0d14942ccd632p-693,
     0x1.a555cab4f69a8p-740, 0x1.11b945f3ed293p-50, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a17a616ab6f01p-582, 0.0, 0x1.6373752a06869p-359, 0.0, 0.0,
     0x1.bcc2dc8d6caa9p-512, 0x1.afc565aaa4584p-782, 0x1.250dfea6edb91p-303, 0.0, 0.0,
     0x1.d7a2e273ef4dp-734, 0x1.13e0fa706b089p-328, 0.0, 0.0, 0x1.5ed22c7090e53p-152,
     0x1.be07883a0bcc7p-696, 0x1.19f93389a5b4bp-823, 0.0, 0x1.1cb6e755e6511p-881,
     0x1.caac176f8546ep-788, 0.0, 0x1.f8f23e7944131p-568, 0.0, 0x1.f94ac7212d68dp-15,
     0.0, 0x1.81732adb4e20bp-486, 0.0, 0x1.42b71d8f69af2p-24, 0.0, 0.0,
     0x1.402dcb884c58dp-674, 0.0, 0.0, 0x1.ebe42a69cbd5cp-509, 0.0, 0.0,
     0x1.0a84f14b0fb76p-16, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0fa69d0767fc3p-342,
     0x1.84945ad567f49p-752, 0.0, 0x1.00b260a049705p-104, 0x1.b9465c96f6d54p-710,
     0x1.63f31d25bb6cbp-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7a34f3e2193bcp-951,
     0x1.6796b56bb9f4ap-993, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc6d5cb773892p-695,
     0x1.cd8073fb53512p-521, 0.0, 0x1.f6d7f3f90c7f4p-973, 0x1.ce9b110c2d65p-73, 0.0,
     0.0, 0x1.8ca65325b978bp-553, 0.0, 0.0, 0x1.ddd5f2e744c33p-557, 0.0,
     0x1.474a2c1335402p-973, 0x1.a507d2663a56bp-850, 0x1.6552fe5ab4076p-599, 0.0,
     0x1.3d850b33b0a4ap-802, 0.0, 0.0, 0.0, 0x1.273ac96602825p-908,
     0x1.6656f39bfec45p-299, 0.0, 0x1.7ca4c231297f4p-148, 0x1.5f7b634649699p-58,
     0x1.d9c2bbb00581ep-163, 0.0, 0x1.7d17500d52041p-269, 0.0, 0x1.30ec15ef5c511p-675,
     0x1.f41ac1f178a5ep-213, 0.0, 0x1.2438d7cb8dba5p-260, 0x1.90df2dc6fdbe4p-804, 0.0,
     0x1.6b674471d5f1p-434, 0x1.85e62e44dd652p-547, 0.0, 0x1.ab13eda5f3dap-193,
     0x1.41affaca72219p-410, 0.0, 0.0, 0.0, 0x1.897fc95173951p-116, 0.0,
     0x1.b4a8da958761ep-74, 0.0, 0x1.26eb2c575c7dep-94, 0x1.9926a383362a4p-82,
     0x1.d313ae77c600ap-889, 0x1.09b5a0bd1330dp-645, 0.0, 0.0, 0.0, 0.0,
     0x1.63b1dc4e8cbe5p-27, 0.0, 0x1.1599f7ddde11dp-832, 0.0, 0x1.5eded2c01a10cp-580,
     0x1.e475112cd33e9p-289, 0x1p0, 0.0, 0.0, 0x1.fc88c3ff03433p-512, 0.0,
     0x1.09e36a6954682p-445, 0.0, 0.0, 0.0, 0x1.d8e20d29dfcdep-547, 0.0,
     0x1.f42359500ebd8p-165, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d8fd10ed1d93p-271,
     0x1.9513243a8a0dcp-58, 0.0, 0.0, 0x1.13b3ec22b513fp-99, 0.0, 0.0, 0.0,
     0x1.84630e0547c5p-451, 0.0, 0.0, 0x1.d0c9fab856dbdp-69, 0.0,
     0x1.f79779f4e21dp-884, 0.0, 0.0, 0.0, 0x1.e9982852813f6p-632,
     0x1.77d2ae71021ccp-369, 0.0, 0x1.342e3ecefedcep-65, 0.0, 0x1.b31a70c89bad4p-352,
     0x1.8cb3c6d9cddafp-280, 0x1.2d73a66952ad9p-847, 0x1.4d70cefeda3cap-77, 0.0,
     0x1.2e601db3b9b62p-899, 0.0, 0.0, 0x1.0e2f710d0e0f9p-708, 0x1.19412bdafa9fcp-322,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b39c84f0075f3p-279, 0x1.e856c4781f646p-558,
     0.0, 0.0, 0x1.18737499b2c31p-473, 0x1.7138f12e515afp-263, 0.0,
     0x1.181b0a7aaa90dp-331, 0.0, 0x1.16f0b770566dbp-359, 0x1.4d8c2226af327p-944, 0.0,
     0x1.e72b20cb36d6ap-933, 0.0, 0x1.a10f805bf1c4cp-419, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4046d60566f06p-340, 0.0, 0x1.d2af824e3e8dcp-365, 0x1.a31b0f7e0d36p-585, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5bb1023e9861p-551, 0.0, 0x1.e1edd0179805p-249,
     0.0, 0x1.8e5ebfa98c3d4p-895, 0.0, 0x1.10969d9dc3ae9p-183, 0x1.87f88c35cb448p-588,
     0x1.c2e7206ae2c09p-486, 0.0, 0.0, 0x1.f155b10e377f8p-387, 0.0, 0.0,
     0x1.9eae68b8ff4e5p-7, 0.0, 0.0, 0.0, 0x1.ebef8100cc27bp-283, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c83c4c2f684d6p-523, 0x1.2312d538069fcp-988,
     0x1.68a6310738ebdp-984, 0x1.5fc40a2cdc324p-842, 0.0, 0.0, 0.0,
     0x1.eeda4c1b7a281p-661, 0.0, 0x1.c762788eb7cb8p-529, 0x1.11a55cabead1bp-39,
     0x1.f8b9d8ef596bdp-869, 0.0, 0x1.5d41eac2040cfp-500, 0x1.845847a18f82fp-794, 0.0,
     0.0, 0x1.366a6d467cd67p-950, 0x1.d3320a56f741cp-830, 0.0, 0.0, 0.0, 0.0,
     0x1.11d37a623294p-429, 0x1.9ae700936f376p-839, 0x1.bcabe6728e809p-448,
     0x1.d6a937fe0970ap-848, 0x1.9d3192523eec4p-755, 0x1.1597d77d5cf54p-947,
     0x1.dd08cbfadc3e4p-935, 0.0, 0x1.46fdbc6aca60dp-716, 0.0, 0x1.b0c514703d002p-676,
     0.0, 0.0, 0x1.33b7d397dadbep-960, 0x1.4771b98c07fdcp-84, 0.0, 0.0, 0.0,
     0x1.ee86ddb9af9e7p-73, 0x1.c9fe2f32906e4p-793, 0x1.539cf70cb78aep-950,
     0x1.12bb770e3499fp-881, 0.0, 0x1.bdfc761d30d89p-177, 0x1.234652433dc41p-58,
     0x1.1f1390bf8627p-209, 0x1.d9f5114b03d32p-709, 0x1.75f31d54bf239p-695, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b24d9af797bfap-277, 0.0, 0x1.83de35906a885p-1017,
     0x1.82b78331a39cbp-548, 0x1.cfb11d5caa312p-596, 0.0, 0x1.c08ec0ea45514p-703, 0.0,
     0x1.ceb0cd86e8096p-972, 0.0, 0.0, 0x1.fac2a545f8f13p-675, 0.0, 0.0,
     0x1.88f605d128f5p-711, 0.0, 0x1.980a8e92faeadp-866, 0x1.325f34688551ap-1014, 0.0,
     0.0, 0.0, 0.0, 0x1.860afa312d6fp-262, 0.0, 0.0, 0x1.89f89db44d6b1p-149,
     0x1.172dc9ff6c9c2p-731, 0.0, 0.0, 0.0, 0x1.69318e276bb4dp-987,
     0x1.578758e547c9ap-170, 0x1.5743dc632fec4p-385, 0.0, 0x1.c05dd1bd333a6p-450,
     0x1.20282f1f4beafp-187, 0.0, 0x1.d1b3661b6eab8p-223, 0x1.72626a7cef58ap-308, 0.0,
     0x1.62e2e3e0bd68fp-452, 0x1.535929b669138p-387, 0x1.be198693a9fcdp-655,
     0x1.e8d631c9b9d5ap-677, 0x1.ac8a9c8103127p-874, 0x1.75a135a299c4cp-999, 0.0, 0.0,
     0x1.2033dfa7bbbe4p-906, 0.0, 0.0, 0x1.e90ed3f4f8bp-73, 0.0,
     0x1.85baa2d7c66f3p-62, 0.0, 0.0, 0.0, 0x1.834f9dfef0545p-611, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.eb0410f52d642p-309, 0.0, 0.0, 0.0, 0.0, 0x1.9080e26546928p-23, 0.0,
     0x1.405b069d4c7dep-267, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9423505c4421p-448, 0.0,
     0.0, 0.0, 0.0, 0x1.6021b08adb669p-192, 0x1.ef25f8787ea06p-376,
     0x1.b6fa1ea0db0cap-168, 0.0, 0x1.06f6c5515ccbdp-864, 0x1.c307e6ea2ad33p-863,
     0x1.b89a1824f0a4dp-698, 0x1.09eaf40b2a5dep-580, 0x1.45418fb83c29ep-814,
     0x1.2a730558075afp-367, 0.0, 0.0, 0.0, 0x1.9959200248182p-173, 0.0, 0.0,
     0x1.cbe9886c888d1p-138, 0x1.ef90581f9db51p-336, 0.0, 0x1.e57c2696c3db4p-11, 0.0,
     0x1.3cb886d9587e3p-1016, 0x1.e54dd043fa4aap-12, 0.0, 0.0, 0.0,
     0x1.1274c9b652524p-77, 0.0, 0x1.402fb385350b3p-530, 0x1.d30e26b6493c9p-375, 0.0,
     0.0, 0x1.9b30fba83c749p-600, 0x1.d1bbd85b55311p-390, 0x1.9e3b4af601c49p-822,
     0x1.37599cb0995c6p-636, 0x1.1abbd68126912p-61, 0.0, 0x1.a007998d06135p-933, 0.0,
     0x1.f8c7c41056c1ap-461, 0.0, 0.0, 0x1.e2aeebe5dd98p-796, 0.0,
     0x1.c2866cccb6cf8p-220, 0.0, 0.0, 0.0, 0.0, 0x1.0776cf641058cp-760,
     0x1.663f292f3ac6fp-181, 0.0, 0.0, 0.0, 0.0, 0x1.eabe72f8457dap-285, 0.0,
     0x1.2d26f0c4c381bp-835, 0.0, 0.0, 0.0, 0x1.c0fc96ff9b519p-642, 0.0,
     0x1.b48a800a07124p-345, 0.0, 0.0, 0x1.21f07e4790d14p-438, 0.0,
     0x1.3e156d78e6c77p-255, 0.0, 0x1.b9d69c20e174ep-283, 0x1.6a9d4550ecfdbp-962, 0.0,
     0.0, 0.0, 0x1.bc1f783c15f4p-173, 0x1.09a47189a379dp-907, 0.0,
     0x1.623603354bdc3p-768, 0.0, 0x1.339738564cad3p-997, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5b3792b928c87p-326, 0.0, 0x1.2a932b73b0e97p-279, 0.0, 0.0,
     0x1.490b84fe6afc9p-409, 0x1.e939736c8346dp-322, 0.0, 0x1.735c5cbd513cp-14,
     0x1.3112225393c41p-568, 0x1.0fb3317c6dae1p-227, 0.0, 0.0, 0.0,
     0x1.547d980954081p-169, 0.0, 0x1.23608d17b9bf5p-404, 0x1.7e7e170ff5e6fp-811, 0.0,
     0x1.593597faec16fp-120, 0x1.c795c3e92b8f3p-211, 0x1.4e300fe5558a6p-879,
     0x1.914bfe0457b0ep-703, 0x1.c78e4cfefe5acp-475, 0.0, 0.0, 0x1.1a3dfc4014ad1p-855,
     0x1.d7df202eb8918p-691, 0.0, 0.0, 0x1.66f40cc6764fbp-357, 0x1.a22e3fd5580d4p-684,
     0x1.f6ade926bfc1ap-178, 0.0, 0x1.dd26ece46a2d4p-458, 0.0, 0.0, 0.0,
     0x1.4d1a76c1cf1a7p-388, 0.0, 0x1.13e405e47c45fp-795, 0x1.e993f276a12b2p-636, 0.0,
     0.0, 0.0, 0x1.81138b8455e92p-674, 0.0, 0.0, 0x1.9c44446365874p-201, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0cd9747146b26p-86, 0.0, 0x1.9b6d02281fe21p-857,
     0x1.7b22531ca2ed1p-290, 0.0, 0.0, 0x1.2005f9146bca8p-746, 0x1.8e809bf1b5886p-231,
     0.0, 0x1.db52e4a4f1f5cp-328, 0x1.634900ae7f5fdp-363, 0.0, 0x1.027466fbe7d5cp-897,
     0.0, 0x1.08a12ba371c83p-40, 0x1.fad252959740cp-524, 0x1.34981c5dc256bp-923, 0.0,
     0x1.c546302592f35p-890, 0x1.69456f02665f5p-900, 0x1.6b926bca460cfp-28,
     0x1.d9281bc552247p-735, 0x1.a5d740356aaacp-360, 0.0, 0.0, 0.0, 0.0,
     0x1.2d37e151f32d7p-450, 0x1.030659c695552p-727, 0.0, 0x1.818c8bf060572p-3, 0.0,
     0.0, 0x1.d433004a455bep-149, 0.0, 0x1.8176e7c888d5cp-904, 0.0,
     0x1.e0cec6e0365eap-820, 0.0, 0x1.e1d4c4c035251p-986, 0.0, 0.0, 0.0,
     0x1.bbe97a20a15dbp-398, 0x1.f97d64c757016p-949, 0.0, 0x1.13bce1ae2d523p-549,
     0x1.a3c6817ec9b56p-434, 0.0, 0x1.0ff4ad69ae07p-699, 0x1.efe38fe9d50f8p-963,
     0x1.6192f741167eap-396, 0.0, 0.0, 0x1.83cbc9524ea7p-460, 0x1.3faea198058bdp-339,
     0.0, 0.0, 0x1.69696e1a80db6p-26, 0.0, 0.0, 0.0, 0x1.31a538455f56ep-220,
     0x1.4b64b449d5f06p-234, 0.0, 0.0, 0x1.f6835a7bbee53p-503, 0x1.e259d9b57802ap-247,
     0x1.c396e7462fde6p-1016, 0.0, 0.0, 0.0, 0x1.eada8da4858b8p-557, 0.0,
     0x1.730c1ab64e303p-755, 0x1.01f384dd126f4p-397, 0x1.fdd50584c4617p-301, 0.0, 0.0,
     0.0, 0.0, 0x1.d886a3f6869a1p-56, 0.0, 0x1.b53dc0c3cc5c3p-608,
     0x1.a2f035c25ec55p-196, 0.0, 0.0, 0.0, 0x1.03cf6e0d3e96ap-85, 0.0,
     0x1.d334aaeb4e926p-70, 0x1.24df741f8df6dp-705, 0.0, 0x1.18848b94cac57p-654,
     0x1.7ca45af5b1a1dp-536, 0x1.ae24f37ddf77fp-439, 0x1.a29a91deb215cp-424,
     0x1.97004966649eep-939, 0x1.bb84d7cb8acb7p-882, 0.0, 0x1.a99bdfdb8c303p-219,
     0x1.48f6b877f9b0ep-749, 0.0, 0.0, 0x1.58b331be755b2p-958, 0x1.1cba02bb33284p-807,
     0.0, 0x1.256701427c401p-1018, 0x1.946f674d59ea2p-166, 0x1.c0b205adc3abdp-435,
     0x1.82f153fe3310dp-900, 0x1.e7b9c1ba05bccp-2, 0.0, 0.0, 0x1.ecfb14a129a21p-983,
     0.0, 0.0, 0x1.ca5b93e803a88p-246, 0x1.fb0e6f77f76cfp-138, 0.0, 0.0,
     0x1.20f706fa40608p-336, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a913e3d1e76cp-249,
     0.0, 0x1.628ea47d75754p-186, 0x1.781d84f45b0e1p-90, 0x1.db53fe0fdb00fp-674,
     0x1.84db6c22745dp-523, 0x1.74149b1de688fp-615, 0.0, 0x1.09e0ab61eef3dp-99,
     0x1.a92db088f6bbfp-879, 0x1.bfb5166810cc7p-964, 0.0, 0x1.04968298f7325p-394, 0.0,
     0x1.0fc2f3c02e49fp-800, 0.0, 0.0, 0x1.01bf38f0369d8p-872, 0x1.e1fdbc58bd9f2p-650,
     0x1.85a9f16f5cc19p-991, 0x1.8bc191721be7fp-146, 0.0, 0.0, 0x1.45e840a3e1a61p-998,
     0.0, 0.0, 0.0, 0.0, 0x1.90567dc95b75p-130, 0.0, 0x1.6a666241c7a87p-158,
     0x1.e4a1371ef67f7p-247, 0x1.ca3cf6b02922ep-54, 0x1.1b7da280c68a8p-529,
     0x1.bb146c2b4644dp-30, 0x1.f3e5823dd1d65p-148, 0x1.f724d8c1b1fc8p-378, 0.0, 0.0,
     0x1.e168336caed24p-198, 0x1.d42f2660aebcp-306, 0x1.32e654ac5cb8dp-270, 0.0,
     0x1.e3ddd2f23a46bp-836, 0.0, 0.0, 0.0, 0.0, 0x1.6b81dd6e0f80dp-441, 0.0,
     0x1.5049dc3f5043fp-327, 0x1.7a7a96e183c5fp-237, 0x1.c8d44e9b8ec74p-953, 0.0,
     0x1.5123c4d4babd2p-53, 0.0, 0.0, 0x1.657c3efdb1f2fp-625, 0.0,
     0x1.ce307e62e7c3fp-340, 0x1.7e227948b1dc5p-864, 0x1.5c053e7c01335p-173, 0.0, 0.0,
     0.0, 0x1.592ed69c07582p-455, 0x1.c880a73b9a6e9p-348, 0.0, 0x1.7271986d8a7c2p-781,
     0.0, 0.0, 0.0, 0x1.7d692b4d53cbp-49, 0x1.ff4b210fd7161p-310,
     0x1.02992bdc58de9p-624, 0.0, 0.0, 0x1.f9c17c18f575ep-989, 0x1.542ccf911c265p-853,
     0.0, 0x1.bcdc58a183678p-884, 0.0, 0.0, 0x1.032ed74bd7277p-218, 0.0, 0.0,
     0x1.e667579bb9059p-891, 0.0, 0.0, 0.0, 0x1.9367f304fd56ap-339, 0.0,
     0x1.1ae1b38d189c6p-149, 0.0, 0.0, 0x1.ce54e6fd74f4bp-777, 0x1.8e565fcc592cbp-973,
     0.0, 0x1.28cff51e22027p-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de94fe0d519c6p-89,
     0x1.c833a26fa138ap-787, 0.0, 0.0, 0x1.3394a63ea6c6fp-622, 0.0,
     0x1.87f2792bf662cp-535, 0x1.d0d1431ec3ffcp-45, 0x1.2e0c2b5f4320fp-75,
     0x1.b7fd0f7ed1f19p-588, 0.0, 0x1.acda36de2736fp-230, 0.0, 0.0, 0.0,
     0x1.4a3fb78dd880dp-593, 0x1.dafb8e0664a57p-619, 0.0, 0x1.ba61cbb713d61p-578, 0.0,
     0.0, 0x1.e44f0fe4927f3p-691, 0.0, 0x1.8aa68b3fc02e3p-628, 0x1.2369dac6ae0a7p-550,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.028e72933cf3dp-703, 0x1.ca512d9f16c21p-566,
     0x1.72790389204b5p-401, 0x1.b6c34413e8ab5p-225, 0.0, 0x1.0c5ea1b62e579p-654,
     0x1.3f311c04a4129p-45, 0.0, 0.0, 0.0, 0.0, 0x1.475b13bfb0f3fp-712,
     0x1.1bd7d0954bb38p-929, 0.0, 0x1.39f6251eca679p-740, 0.0, 0x1.01ee270fb4447p-612,
     0.0, 0x1.bab3591ccedddp-682, 0.0, 0x1.eaf22216ce97ep-386, 0.0, 0.0,
     0x1.cba885f22138fp-112, 0.0, 0.0, 0.0, 0x1.5787b0f6c25b5p-488, 0.0, 0.0,
     0x1.09b3af3173781p-189, 0x1.849cb7877e62ep-311, 0.0, 0.0, 0.0, 0.0,
     0x1.4f023e81af9f3p-326, 0x1.97a0891cc3aa8p-246, 0x1.db3d56d673923p-964, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f1a0bbc52782ep-602, 0x1.06ca4e63f781fp-1018, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1da5ebc91f0b7p-195, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cd24bb9f4f54fp-235, 0x1.e120455b76b77p-487, 0x1.16858e9588d4fp-513,
     0x1.f18520617051cp-319, 0x1.e874b0eb2c872p-592, 0.0, 0.0, 0x1.e673cca77e519p-187,
     0.0, 0.0, 0x1.12f29947c3d04p-789, 0x1.b30ee698af014p-925, 0.0,
     0x1.ce88daad6f919p-31, 0.0, 0x1.c6b0438a93393p-527, 0.0, 0x1.963646ccd5fb9p-589,
     0x1.663d422431c82p-39, 0.0, 0x1.7f24db6dbd62ep-39, 0x1.baf34645d1efdp-356, 0.0,
     0.0, 0x1.888840e30b7fbp-963, 0.0, 0x1.8d9218105c2cap-429, 0x1.c719767a89f52p-317,
     0x1.c4c50fd38b797p-784, 0.0, 0.0, 0x1.e3788f0f756p-867, 0.0, 0.0,
     0x1.616bf90db3e1ap-660, 0x1.86d70e3913b05p-672, 0.0, 0.0, 0x1.c1d88b4fb3aa9p-302,
     0.0, 0.0, 0x1.bba336d93aa4ep-407, 0.0, 0x1.5f801f583c569p-353, 0.0, 0.0,
     0x1.eced34a00c2e7p-276, 0x1.ea3989b8c828cp-178, 0.0, 0.0, 0.0,
     0x1.6b1699f42f0adp-649, 0x1.664ecc0c79de3p-881, 0.0, 0.0, 0.0,
     0x1.412b2fa783615p-599, 0x1.015200c844ef9p-307, 0x1.4e85b365ff096p-313,
     0x1.e80da3acf9b5p-132, 0.0, 0x1.4d91f1b22ab31p-61, 0.0, 0.0,
     0x1.f0990f2e11557p-679
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
            tmp1 = Sleef_finz_tand1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tand1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tand1_u10purecfma bench acc %la\n", global_bench_acc);
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
