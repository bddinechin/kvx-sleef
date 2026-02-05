/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floord1_purecfma.c --function Sleef_floord1_purecfma \
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
     0.0, 0x1.fe8d63db0a08bp-1018, 0x1.337ace35feaf2p-292, 0x1.789a2452d1846p-737,
     0x1.a0f91e68e2045p-944, 0.0, 0.0, 0x1.daf11d4a10374p-703, 0x1.6a8c7b3d44aefp-316,
     0x1.6dd2c2f4f8516p-361, 0.0, 0.0, 0x1.9815795d2a9a8p-390, 0x1.0c7f59fc30c49p-962,
     0x1.869aef16c41c1p-971, 0x1.348b535f4d93p-729, 0.0, 0x1.dad78347c80e7p-925, 0.0,
     0x1.6138f6f671339p-884, 0.0, 0x1.dce2c30e9236fp-757, 0x1.30bbb7aa88662p-661, 0.0,
     0x1.264a14568251fp-884, 0x1.7551420446fd5p-408, 0.0, 0.0, 0x1.7061831c7633bp-282,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e2594a349c0c6p-539, 0.0, 0x1.9bf00a9059715p-568,
     0x1.ae03bd0c39551p-807, 0x1.0f3abcb5a0b25p-772, 0.0, 0x1.d3e96feb3ae26p-499, 0.0,
     0.0, 0.0, 0x1.b9ac2fdaae544p-16, 0x1.5d6fd4b3e118fp-892, 0.0,
     0x1.a9c16c8355af6p-602, 0x1.c07f22d71958ep-847, 0.0, 0x1.fcbc7c002832ap-413,
     0x1.d6a95e9b37b09p-174, 0.0, 0x1.1dc10ce64faf6p-928, 0x1.85407f1650658p-195, 0.0,
     0.0, 0x1.af4b3edf2d51dp-771, 0.0, 0.0, 0x1.0e2ce5c9b6f12p-948, 0.0, 0.0,
     0x1.98709cf63879bp-161, 0x1.57b751db8a7abp-885, 0x1.9f657b1346824p-131, 0.0,
     0x1.e96009e9cce5p-751, 0.0, 0x1.5072edd2c15c4p-412, 0x1.1914c85dd8487p-111, 0.0,
     0.0, 0x1.309dd35e1361ap-643, 0.0, 0.0, 0.0, 0x1.114608a6f2a1bp-305,
     0x1.641b8ac9cac6p-1020, 0x1.6e793bcd5047cp-50, 0x1.20b0bd850a03cp-81, 0.0,
     0x1.6174f3be0cd5bp-337, 0x1.7d4244ed39401p-613, 0x1.bbebd32eb6386p-445,
     0x1.a0c08497edcc3p-350, 0.0, 0x1.5be1a57405737p-952, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.23f233859e5ecp-838, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7a4ac405467f6p-240, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e9096bc376995p-584, 0.0, 0x1.9ed8bb1344edbp-940, 0.0, 0x1.64127f1b6605fp-782,
     0x1.bebdc7cb9555p-793, 0.0, 0x1.0d98530c81b7ap-873, 0x1.87e94bddb636bp-489,
     0x1.dee49a08ce95fp-762, 0x1.f5779d81bca3fp-973, 0.0, 0x1.bf5462b8df759p-518, 0.0,
     0x1.16e42aee9a372p-945, 0.0, 0x1.9fde42fae3a87p-292, 0x1.9dd5d8b0224a3p-544, 0.0,
     0.0, 0.0, 0x1.6d434011ba597p-92, 0.0, 0.0, 0x1.73e4b253c2163p-715, 0.0, 0.0,
     0x1.692bdd3207df2p-420, 0.0, 0x1.2ee6e9cadea4cp-225, 0.0, 0x1.74fa47cdd45abp-498,
     0.0, 0x1.aae23508de26bp-719, 0x1.32e3200316f1cp-361, 0x1.b1108fc8a7a13p-821, 0.0,
     0x1.e7b75cc8c3966p-313, 0.0, 0x1.8f4d77ea0132dp-98, 0x1.adc273dcd4f9ep-303,
     0x1.712d25357d45p-912, 0x1.fbdc8d97edb45p-659, 0.0, 0.0, 0x1.1e202fd8bd3b8p-481,
     0x1.db3afd928c8bfp-556, 0x1.89deb3b541c48p-792, 0.0, 0x1.48c0390c8a1f6p-752, 0.0,
     0.0, 0x1.686a5ccbc5772p-162, 0x1.0898f2e1b9d67p-407, 0x1.fa005882520b2p-983, 0.0,
     0x1.90f1fb7772d81p-703, 0x1.648c43c9349b7p-703, 0.0, 0x1.170be71da06efp-249,
     0x1.6f2a709ebc847p-266, 0.0, 0x1.75bbdd83cb611p-36, 0x1.e095492870a8ep-370, 0.0,
     0x1.a26b6bb97a863p-637, 0x1.e3ea6de271575p-520, 0x1.ad6a8bdba7d18p-577,
     0x1.67ed477fb0df1p-590, 0.0, 0.0, 0.0, 0.0, 0x1.ed9832a31c4f3p-846, 0.0,
     0x1.c147c5eba5252p-20, 0x1.b40bd4a16c9dp-983, 0x1.c79852384345bp-905,
     0x1.d6864dd792c0ep-1016, 0x1.6a08b4816c7d1p-150, 0.0, 0x1.13c03b3e05adcp-518,
     0.0, 0x1.e5f4a434e10bfp-693, 0.0, 0x1.7700ddf4c3643p-460, 0x1.b956d1a0021edp-436,
     0x1.7b1d3fa484201p-861, 0.0, 0.0, 0.0, 0.0, 0x1.5999e918387c9p-865,
     0x1.f7b4d52d7bf86p-350, 0x1.40f92801c808dp-540, 0.0, 0x1.0378d0dd227aap-617, 0.0,
     0.0, 0.0, 0x1.13b746900b92ep-315, 0.0, 0.0, 0.0, 0x1.72626be4061d5p-766,
     0x1.c0a06ef6d6f89p-131, 0.0, 0x1.27d85c5a71ae8p-479, 0.0, 0.0,
     0x1.2c76feee8b916p-989, 0.0, 0.0, 0x1.d3c410251018bp-115, 0.0,
     0x1.e09d5c072a77cp-584, 0.0, 0.0, 0.0, 0x1.921e9074d96cdp-318, 0.0, 0.0, 0.0,
     0x1.79f380b40ce03p-482, 0x1.2554c14ffad2ap-770, 0x1.4b64955011259p-465, 0.0, 0.0,
     0.0, 0x1.aa3e6d5460afcp-754, 0.0, 0.0, 0x1.c0466530c2ffep-841,
     0x1.d1173ed0ec596p-745, 0x1.f436aa974bf69p-643, 0.0, 0x1.df7d001a9762ep-861,
     0x1.645a5885cc13fp-210, 0.0, 0x1.b5eb6e1a4d4ecp-719, 0x1.17a474cd1cdb2p-625,
     0x1.b01d1a2771671p-190, 0.0, 0x1.05eff3d6c4cacp-728, 0x1.b0f90bacf6d13p-114,
     0x1.b8c1fc7159ef9p-886, 0x1.7db14805a860dp-495, 0.0, 0x1.af5f710484e8p-419, 0.0,
     0x1.b5f78ca8aa449p-354, 0x1.8c224d5bd983dp-616, 0.0, 0.0, 0.0, 0.0,
     0x1.2e3a809d33052p-239, 0x1.9c3dbe69d0f34p-355, 0x1.12569b69dfc19p-842,
     0x1.59c49c44b1c16p-225, 0.0, 0.0, 0.0, 0x1.1eb3f7e47ffacp-278,
     0x1.374e114548335p-152, 0.0, 0.0, 0.0, 0x1.5304a8ce2edacp-186,
     0x1.c67621cee3301p-428, 0.0, 0x1.44503ff3c07cep-361, 0.0, 0x1.a6ea04f48cff9p-34,
     0x1.267102b4320a5p-598, 0.0, 0x1.28d283a860ca7p-29, 0.0, 0x1.fe5503c073c68p-216,
     0x1.f9e121959ea78p-841, 0.0, 0x1.c3f43ef69ff2ap-436, 0x1.abaaf7ef58fd1p-973, 0.0,
     0x1.526e33b87a43ap-579, 0.0, 0.0, 0.0, 0x1.36ecb82340562p-62,
     0x1.88835bddf3663p-677, 0.0, 0x1.b89c82f9cd213p-259, 0.0, 0.0, 0.0,
     0x1.2571dec657daap-570, 0x1.540c4a2ef5a07p-103, 0.0, 0x1.ee964736a2e47p-97,
     0x1.346756057d8f8p-941, 0x1.9e13537896a9ap-297, 0x1.1b0bb73c9538p-240,
     0x1.a087dbc5d4014p-748, 0.0, 0x1.dcff60d7bb018p-864, 0.0, 0.0,
     0x1.f3161c837e51ap-482, 0.0, 0.0, 0x1.36c969259e0fcp-41, 0x1.0ee9cb89b42f3p-462,
     0.0, 0x1.790553ee87689p-903, 0x1.8f7453d563be9p-920, 0x1.bceed4f0a276bp-139, 0.0,
     0x1.54ddecb3b500dp-877, 0.0, 0x1.e07fed7a5fd7ap-520, 0x1.c32f4210b4068p-347, 0.0,
     0x1.e26ca2e9c8d8cp-660, 0x1.61a020fb891ddp-367, 0x1.809eaead3a94p-191,
     0x1.4accf8925de18p-355, 0x1.842c8e2a962dep-1009, 0x1.1665b6b3f4f4fp-874, 0.0,
     0x1.cca1e7411c38ep-260, 0.0, 0.0, 0.0, 0x1.a108d583713dfp-35,
     0x1.ea0ade42df82ep-347, 0.0, 0.0, 0.0, 0x1.55045bf7f9906p-936, 0.0, 0.0,
     0x1.821da57a42931p-857, 0x1.726fc299e1f53p-968, 0.0, 0.0, 0.0,
     0x1.d1a6477faf239p-544, 0.0, 0x1.b52c10dea459fp-264, 0x1.9757d4eaeb6a8p-638, 0.0,
     0.0, 0.0, 0.0, 0x1.ea182a137a83cp-4, 0.0, 0x1.be728eb41387cp-292,
     0x1.133c524e16f45p-658, 0x1.f0d76b0f82892p-563, 0.0, 0.0, 0.0,
     0x1.dd8139a10efcep-33, 0x1.a700eee3ae97cp-565, 0.0, 0.0, 0x1.492e911e25c46p-545,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d0858aaf3334p-576, 0x1.322202adb0c6p-760,
     0.0, 0x1.28874405afdd7p-686, 0x1.95e1ab8141269p-267, 0x1.2eea717d51857p-822,
     0x1.899b3f67e92f5p-385, 0.0, 0x1.bcf038a65f273p-969, 0x1.e8adacb62d43ap-620,
     0x1.eed250f8bcdcfp-71, 0.0, 0.0, 0.0, 0.0, 0x1.84f4fb1fac80ep-303, 0.0,
     0x1.aa2d9a2327534p-92, 0x1.46f71600ac8aap-708, 0x1.0af424f486ed1p-187, 0.0,
     0x1.006f972080878p-1016, 0.0, 0.0, 0.0, 0.0, 0x1.a2a20bd1f7e93p-602,
     0x1.8436878123225p-464, 0.0, 0.0, 0x1.5744499569f28p-312, 0x1.d1af9ad0f0eecp-682,
     0x1.83bccd360702ep-249, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a32f333bd848p-647,
     0.0, 0.0, 0.0, 0x1.610e0bf08ba38p-408, 0x1.05673c9d2d92ep-309, 0.0,
     0x1.ede8d209fd65ap-41, 0.0, 0.0, 0x1.6599cea734ffp-956, 0x1.a626d31ad0f63p-893,
     0x1.3653c13d2c4ep-451, 0.0, 0.0, 0x1.014a6d02a2ef5p-957, 0x1.63e753a55489ep-370,
     0x1.b76d268403328p-735, 0x1.4d888aedfa298p-695, 0.0, 0.0, 0.0, 0.0,
     0x1.09e88bfef3d9bp-404, 0x1.9719aaf134fe6p-766, 0.0, 0.0, 0.0,
     0x1.ec1f69fda764cp-818, 0x1.714c96ea9d78cp-605, 0.0, 0.0, 0.0, 0.0,
     0x1.ea4d20d47acf6p-43, 0x1.1939d976bbe3dp-481, 0.0, 0x1.30da565af321bp-491,
     0x1.1959931ad61ap-241, 0x1.eeb22535af853p-569, 0.0, 0x1.1b6bfd8c61e44p-678,
     0x1.63232fc09d3dbp-226, 0.0, 0x1.2b6d5cd2e470ep-267, 0.0, 0.0,
     0x1.584e04a89d8bap-3, 0.0, 0.0, 0.0, 0x1.d1ff2b04dabaep-971,
     0x1.fc8764401bdb8p-511, 0.0, 0.0, 0x1.602f2af1c94cfp-699, 0x1.f7faac1962c6bp-849,
     0.0, 0.0, 0.0, 0x1.1cb310b18a8efp-84, 0.0, 0x1.c7b8627dcf5c8p-478, 0.0, 0.0,
     0x1.4bfd5a4ef499fp-122, 0.0, 0.0, 0.0, 0x1.5603df57b1126p-64, 0.0, 0.0, 0.0,
     0x1.b1cc1dc67c897p-1003, 0.0, 0x1.ba4984ef34068p-171, 0x1.b5833308addb2p-446,
     0x1.73406f3327b31p-686, 0.0, 0.0, 0x1.720f302f886a5p-749, 0.0,
     0x1.1dbb5fb03067cp-179, 0x1.d284603a60badp-924, 0x1.feb0937adc10bp-823,
     0x1.bc3e5e4a93bb6p-220, 0.0, 0x1.2ecf40b2e209cp-608, 0.0, 0x1.afdcebebe61bp-828,
     0.0, 0x1.56e14a6580dbp-555, 0x1.bddff0978d8c9p-596, 0x1.3f88c07638814p-796,
     0x1.05bef7df6632ap-377, 0.0, 0x1.2bef9bcf5f7dep-230, 0x1.e61af5083892cp-717,
     0x1.fd10527b09b7ap-573, 0.0, 0x1.36fb7839c2089p-518, 0x1.d54da4d47725bp-17, 0.0,
     0.0, 0x1.76358b93fcb41p-991, 0x1.6e3b92431c20ep-966, 0x1.24cf4ded9d4dfp-226, 0.0,
     0x1.ac6ed0815a903p-318, 0x1.2a72230412c4fp-467, 0x1.8b1de0056279dp-619, 0.0, 0.0,
     0x1.e08ecaf435c35p-869, 0.0, 0x1.a37e517049433p-79, 0.0, 0.0,
     0x1.ebb8dcdd04e5dp-887, 0.0, 0.0, 0.0, 0x1.a1aa5d8926a58p-670,
     0x1.16c99d6b336e8p-137, 0x1.44998994ea3fep-9, 0.0, 0x1.8397bfc3f4c92p-344,
     0x1.7bd977eb5e30bp-390, 0.0, 0.0, 0.0, 0x1.bb27731e57747p-889,
     0x1.78481ff194371p-222, 0.0, 0x1.c5c603f57c622p-337, 0.0, 0x1.9232b374410c6p-480,
     0x1.f4cd38acf19d3p-274, 0.0, 0.0, 0.0, 0.0, 0x1.968360bd32ba9p-4, 0.0, 0.0, 0.0,
     0.0, 0x1.8c894103e845p-987, 0x1.0376efb596299p-81, 0.0, 0.0, 0.0,
     0x1.909b8acbac3b8p-646, 0.0, 0.0, 0.0, 0x1.2eada62565b6ap-692, 0.0, 0.0, 0.0,
     0.0, 0x1.290b2730835ebp-474, 0.0, 0.0, 0.0, 0x1.d0b9085a70748p-799,
     0x1.f8571cea4f99cp-722, 0.0, 0x1.ad4a215504e75p-667, 0.0, 0x1.790658a24ccedp-277,
     0.0, 0x1.75523daa93c6cp-397, 0x1.ea9e8e234eff4p-772, 0x1.2f15be43e3a25p-422,
     0x1.427b5a22785fep-884, 0x1.60b778ade7552p-757, 0.0, 0.0, 0.0,
     0x1.b94e3f5d02926p-119, 0.0, 0x1.c7defffd94bf2p-20, 0x1.f1f49ce902ef4p-691, 0.0,
     0x1.a3d1d0199118p-470, 0x1.7ad9c2dc11c8cp-49, 0x1.b46d5f19015fp-602, 0.0,
     0x1.e3f136ce23ee6p-179, 0.0, 0x1.6d095ee01f25dp-351, 0.0, 0x1.562faa7590164p-899,
     0.0, 0x1.9d1a5812d9911p-778, 0x1.4fc9cdb1de01cp-504, 0.0, 0x1.fb58a2707cc42p-302,
     0.0, 0.0, 0.0, 0x1.a3aa3eb605288p-84, 0x1.90770f1cd33a6p-869,
     0x1.d5a79d2767885p-35, 0.0, 0.0, 0x1.f82d97e7a722dp-123, 0x1.590853577da99p-829,
     0x1.d80e88dded2a3p-62, 0x1.195d9ca5bc16fp-325, 0x1.07252cbaff45p-384,
     0x1.7d45fb5dfd3ffp-467, 0.0, 0x1.05225f3184afp-170, 0x1.476bb348929f7p-856, 0.0,
     0.0, 0.0, 0x1.0e441c075ababp-745, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8b308e406a69p-410, 0.0, 0x1.974baea1d140dp-121, 0.0, 0x1.7b82629c1f404p-617,
     0.0, 0x1.f012870fea876p-516, 0.0, 0x1.4dbc6c63d3b18p-505, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.01966d6e1a58fp-117, 0.0, 0.0, 0.0, 0.0, 0x1.aaa907b7d39afp-922, 0.0,
     0x1.d9209f1d14292p-587, 0.0, 0x1.18f0883b89332p-290, 0.0,
     0x1.c113ac4a89264p-1021, 0.0, 0x1.63455e42cfa9bp-470, 0.0, 0.0, 0.0,
     0x1.b3c5915b7b564p-85, 0x1.516947f45ddbap-273, 0.0, 0.0, 0.0, 0.0,
     0x1.64899d39ae836p-318, 0.0, 0.0, 0x1.a02670a0a0c76p-997, 0.0,
     0x1.6242c5f5984e6p-836, 0x1.e331247c08b68p-539, 0x1.fac2098df9251p-456,
     0x1.68d97780cc7dfp-487, 0x1.f8b3ec3acd78cp-340, 0.0, 0.0, 0.0,
     0x1.d82baad857dc2p-90, 0x1.501c0573434f1p-802, 0.0, 0x1.0aca27e9ef8a2p-208,
     0x1.404ec8b6a4f13p-719, 0.0, 0x1.b821d8076e967p-18, 0x1.3f7bb3250f41fp-881, 0.0,
     0x1.1f4a5d126e072p-7, 0.0, 0x1.1635435f381c5p-107, 0.0, 0.0,
     0x1.a885cd355986bp-225, 0x1.078491b8523b6p-126, 0.0, 0x1.5cd9778ed9a98p-267, 0.0,
     0x1.c43ab85de3e8ap-704, 0.0, 0.0, 0.0, 0x1.d6006a10de459p-367,
     0x1.76f3b94ce72eap-997, 0.0, 0.0, 0x1.7aa7d71f922f8p-212, 0x1.b5d30f71931a1p-116,
     0.0, 0.0, 0.0, 0.0, 0x1.865936fd84f3cp-975, 0x1.7f2adb45e001cp-402,
     0x1.2dd1740799aafp-1020, 0x1.f59394bdbec0ap-115, 0.0, 0x1.8463a544b6e56p-1005,
     0x1.5804a31d089ccp-358, 0x1.ad9697c5b9928p-639, 0.0, 0.0, 0x1.2aeae20a3dd49p-696,
     0.0, 0x1.c0cdc41582741p-590, 0x1.5af5dbceffaddp-1009, 0x1.d151e4096a9f5p-9, 0.0,
     0x1.c5423f80ebc49p-631, 0x1.2e0f804641d6fp-622, 0.0, 0.0, 0.0, 0.0,
     0x1.77b2949805b95p-1006, 0.0, 0x1.0df454c022008p-70, 0.0, 0x1.bab869ce9acd4p-62,
     0x1.649c9e697fdf2p-197, 0x1.182dbdd61eb3cp-881, 0x1.8e76f23aa35fbp-89,
     0x1.99fcf50840ca5p-835, 0x1.09be0d5039bfp-524, 0x1.55645ec846bfbp-250,
     0x1.de906b8666342p-589, 0.0, 0x1.4cae4c1d19e93p-401, 0x1.e15ef2e7fab62p-137, 0.0,
     0x1.494253625638fp-456, 0x1.f562f926d6fa1p-283, 0.0, 0.0, 0.0,
     0x1.82de5d97d08adp-938, 0x1.2c31363c675dcp-707, 0x1.2eb8ca8102d3p-680, 0.0,
     0x1.36aa810d1994dp-451, 0.0, 0.0, 0.0, 0.0, 0x1.3042bd71d8d9ep-820, 0.0,
     0x1.ab902cffd7a6cp-610, 0x1.6a7c83c3fe9e1p-770, 0.0, 0x1.7c939173e4384p-200, 0.0,
     0x1.8b7a1de77e0bap-403, 0x1.2ef90494e3a3fp-774, 0.0, 0x1.eb66bf6ca92c6p-241, 0.0,
     0.0, 0x1.3c41b7ced5029p-201, 0x1.ecc739c89f4bdp-516, 0.0, 0x1.2c30104f49ca8p-146,
     0.0, 0x1.edd9fb702860dp-394, 0.0, 0x1.adfb25ae8afafp-680, 0x1.6782b17369829p-670,
     0x1.c0ae3ed86cee3p-523, 0x1.ed2ff796296adp-90, 0x1.550cc6f8da4f9p-623, 0.0,
     0x1.ea592f764af57p-515, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4eb8049fe1237p-393, 0.0,
     0.0, 0x1.90081a2fdbb22p-162, 0x1.3feb424130fcep-774, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a9ecae5360592p-367, 0x1.61f3a7e8c8627p-703, 0.0, 0x1.25a712336ca95p-163, 0.0,
     0.0, 0.0, 0x1.f720876f2339dp-407, 0.0, 0x1.8792e973f64fbp-649, 0.0, 0.0,
     0x1.30f2371d14544p-469, 0.0, 0x1.aa4850cf7a864p-493, 0.0, 0x1.3bbf46460eec8p-87,
     0.0, 0.0, 0.0, 0.0, 0x1.6b0b8ece6b8b6p-360, 0x1.390cfca2705dfp-27,
     0x1.6197000434dd1p-425, 0x1.2a45e849b7011p-228, 0x1.646133ca4a7adp-768,
     0x1.5986704783d6cp-589, 0x1.835d49ea8b62bp-200, 0.0, 0x1.454e01529c843p-425, 0.0,
     0.0, 0x1.62f697b957309p-997, 0x1.02ccb591a7aa6p-410, 0.0, 0.0,
     0x1.8c87b33403b1dp-42, 0x1.dbb942524e183p-370, 0.0, 0.0, 0x1.9ecacae6ff55dp-960,
     0.0, 0x1.cb07eeef3d544p-114, 0.0, 0.0, 0.0, 0x1.cfca8c8209f08p-704,
     0x1.a142a84f822c5p-323, 0.0, 0.0, 0x1.9ac57d08321bep-275, 0x1.83cda32a18925p-224,
     0.0, 0x1.0455d49cb4283p-619, 0.0, 0x1.b852314f29fbdp-623, 0x1.1774c727b0177p-523,
     0.0, 0.0, 0.0, 0x1.da31087a0999dp-378, 0x1.a95b50f0f6f82p-761, 0.0,
     0x1.7b2964fc38908p-4, 0x1.638fe7c5af273p-878, 0x1.7c0163ee28168p-804,
     0x1.f090a1cd43dcap-984, 0x1.512bb9ba6e86p-746, 0x1.eeb5a5cd6f013p-774, 0.0,
     0x1.d39399bf1be18p-309, 0x1.08d549efb92b4p-743, 0x1.18d2226450e05p-437, 0.0, 0.0,
     0.0, 0x1.28aa503f8dd32p-377, 0.0, 0.0, 0.0, 0.0, 0x1.0eafae54bfc04p-994,
     0x1.742f4996ea9cdp-794, 0x1.e2683c283fc9cp-294, 0.0, 0.0, 0x1.e89737700ffdfp-743,
     0x1.ce9a47c0c69d6p-745, 0x1.1f094d600a9bp-869, 0x1.e05c61c74e0b7p-551, 0.0,
     0x1.e57cd74f63d72p-62, 0.0, 0.0, 0x1.0bfa2a20a5b55p-825, 0.0,
     0x1.b6b0176e613fp-729, 0x1.1bee6851dadb8p-791, 0x1.01c548991c2a2p-637,
     0x1.7c0e33b22aadbp-932, 0x1.198abac654e0fp-686, 0.0, 0.0, 0.0,
     0x1.39e417645c2adp-958, 0.0, 0.0, 0.0, 0x1.fa3fcdf6d7ac7p-527,
     0x1.22c9fa5efcb1bp-340, 0x1.1fd97b32eb841p-327, 0x1.a5c116c35775p-726, 0.0,
     0x1.65536939c011bp-373, 0x1.1402c3dd0d6d5p-774, 0.0, 0x1.076d3755ebfb6p-321, 0.0,
     0.0, 0x1.26e2b85d7b422p-226, 0.0, 0.0, 0.0, 0.0, 0x1.4af2eb6271172p-343, 0.0,
     0x1.42f9cba5bf1c7p-908, 0x1.1af5ba42388c7p-880, 0.0, 0x1.1370c608e1178p-266,
     0x1.7ae2f7d92c49ap-452, 0x1.7cb9156674d17p-277, 0.0, 0x1.910a4b695c788p-20,
     0x1.c88f5237a7429p-746, 0x1.ada0074f729f1p-849, 0x1.bc9eb58fa41b8p-639, 0.0, 0.0,
     0.0, 0x1.599551e4a2ae6p-1004, 0x1.631eaad5aadb9p-451, 0x1.cec6df53ffef5p-435,
     0.0, 0x1.7b2d669b9a4d5p-518, 0x1.525fcb4de872dp-135, 0.0, 0x1.90c4ce4b7fa5dp-667,
     0.0, 0.0, 0x1.b87c594d52cbep-498, 0.0, 0.0, 0x1.c9bf2c028927fp-754, 0.0, 0.0,
     0.0, 0.0, 0x1.1ad7969948028p-240, 0.0, 0.0, 0x1.73a583ccd9212p-354,
     0x1.f07ea34a76644p-172, 0.0, 0x1.872b2f918296ep-507, 0.0, 0.0,
     0x1.37e7e20989f47p-582, 0.0, 0.0
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
            tmp1 = Sleef_floord1_purecfma(tmp0);
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
    printf("Sleef_floord1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_floord1_purecfma bench acc %la\n", global_bench_acc);
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
