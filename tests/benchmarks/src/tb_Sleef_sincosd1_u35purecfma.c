/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd1_u35purecfma.c --function \
 *     Sleef_sincosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.5328c26544b56p-774, 0.0, 0x1.bb634dcacec33p-656, 0.0, 0.0,
     0x1.caac7dd9c0249p-718, 0x1.7235c1c4e22e7p-644, 0x1.f207b7102f2f4p-1022,
     0x1.8372237070447p-774, 0x1.62018e7460ee7p-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7f421045d5b3p-479, 0x1p0, 0x1.e8fdf411664e4p-770, 0x1.0c1953643fad8p-77,
     0.0, 0.0, 0x1.2e9562e4fbf61p-976, 0.0, 0.0, 0x1.ba2be96d5a794p-972, 0.0,
     0x1.00ada18976055p-80, 0.0, 0x1.8adf8891d44d6p-318, 0.0, 0.0, 0.0, 0.0,
     0x1.3c4b88917d2fp-646, 0.0, 0.0, 0x1.ca9ab0b109528p-147, 0x1.97359466c1944p-379,
     0x1.94bbcc1d3b917p-193, 0.0, 0x1.76f0e9a88aa31p-902, 0.0, 0x1.46c54f24fc6f9p-296,
     0.0, 0.0, 0x1.3756b646b4b97p-390, 0.0, 0x1.dcdfa9425868fp-518, 0.0, 0.0,
     0x1.0b4d42b6643afp-725, 0x1.ba4711ad6abf8p-806, 0x1.37aad5d58d6e3p-905,
     0x1.73073c441d71p-505, 0x1.55fd14451e91fp-643, 0.0, 0.0, 0.0,
     0x1.49c2670d7c336p-65, 0x1.46980781065c7p-127, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14181c72a55a4p-917, 0.0, 0x1.47d9f214d4815p-442,
     0x1.b21266561625fp-189, 0x1.e7bf5a43f4215p-826, 0.0, 0.0, 0x1.e8a46cec4945bp-638,
     0.0, 0.0, 0x1.bede1451c8849p-945, 0x1.0faf4a55b2262p-179, 0.0, 0.0, 0.0,
     0x1.298bc0742790fp-61, 0.0, 0.0, 0x1.9651af8dd08cep-364, 0x1.baf8371dac56bp-452,
     0x1.2fdd2db503416p-300, 0x1.271fa68e12071p-309, 0.0, 0x1.89a8471f7045ep-193,
     0x1.66b6dead478dbp-583, 0x1.cd506efcde18dp-728, 0x1.b868a2b3a8762p-473,
     0x1.4994e358f951ap-519, 0.0, 0x1.3a1eb42455394p-492, 0.0, 0.0, 0.0,
     0x1.9629dbf858426p-787, 0.0, 0.0, 0.0, 0x1.48de57e64b0cdp-512,
     0x1.36202a39c5c5cp-740, 0.0, 0x1.ac3a44220356ep-569, 0.0, 0x1.e8a371b58735p-705,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c8183915274cp-598, 0x1.863fa42f4093cp-287, 0.0,
     0x1.312a552186d8cp-991, 0x1.d9e5349f192c6p-89, 0.0, 0x1.8d11e93400f62p-731, 0.0,
     0x1.9325fa7093139p-576, 0x1.ec97e8cbcec7dp-752, 0x1.7694e290648e6p-456, 0.0,
     0x1.cd30564ac842fp-135, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e1035a4b8ab5fp-173, 0.0,
     0.0, 0x1.dd62b177cae0ep-24, 0.0, 0x1.0af8b09147c6ep-37, 0.0,
     0x1.c97f6610280b4p-244, 0.0, 0.0, 0x1.6239722b0d9b7p-272, 0.0, 0.0,
     0x1.f0ebafa5d7cddp-154, 0.0, 0x1.61a76c63b4748p-466, 0x1.46b3e1d87d668p-197,
     0x1.304f8bcab0722p-528, 0x1.7baec487ac965p-634, 0.0, 0.0, 0.0, 0.0,
     0x1.45f00dda404fdp-679, 0.0, 0.0, 0.0, 0x1.d8055722d3a79p-140, 0.0,
     0x1.884d1d9ea9a38p-270, 0.0, 0.0, 0.0, 0.0, 0x1.e9d4f8ee0d756p-939, 0.0,
     0x1.23f32ddd164ep-864, 0x1.b684f0074874bp-959, 0.0, 0x1.231669ca147b5p-185, 0.0,
     0.0, 0x1.e0afb3291fe3fp-325, 0.0, 0x1.1521947b4786ap-296, 0.0, 0.0,
     0x1.57b197cc25353p-521, 0x1.f255a59b3db98p-219, 0x1.14886da5736cep-589, 0.0,
     0x1.194adf0dc47c7p-731, 0.0, 0.0, 0x1.e901984d8f395p-61, 0x1.733696eb928dep-836,
     0x1.0951bb339d6b1p-413, 0.0, 0x1.d654cf89d824ap-194, 0.0, 0.0,
     0x1.7d255028d4c61p-173, 0x1.a843a7dbd19a7p-195, 0.0, 0.0,
     0x1.64c21f2fd3eaep-1011, 0.0, 0.0, 0.0, 0x1.5ee509a97d341p-149, 0.0,
     0x1.9b0c92036d596p-499, 0x1.7282b988c4fbap-547, 0.0, 0x1.208a2e60ed5f3p-82,
     0x1.dd419a7a8f32p-102, 0x1.d04b26f40dd2bp-129, 0.0, 0x1.6b82ad860ad8dp-543,
     0x1.a922d27adb99fp-258, 0x1.7a257a1346a1fp-245, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a928d60d8d277p-97, 0x1.3e9771ccdb30cp-906, 0.0, 0x1.43688d350fe2p-366,
     0x1.89f74ac4c1a5bp-870, 0x1.d7d781f28b346p-917, 0x1.a2a25f85801d3p-127, 0.0, 0.0,
     0x1.1aa9e685d0fcep-575, 0x1.6a84cf716b3e4p-709, 0.0, 0.0, 0.0, 0.0,
     0x1.a037bcadf10e4p-55, 0.0, 0x1.31d50b9367bfep-503, 0x1.e5013324fb61cp-777,
     0x1.5df4d1ec50761p-535, 0x1.0703a389a163dp-158, 0.0, 0x1.1ac4991583c16p-142,
     0x1.db4ef10e6230cp-25, 0.0, 0x1.23a3630b91502p-413, 0.0, 0.0,
     0x1.18602d3f5a21bp-798, 0.0, 0.0, 0x1.c69354c4d0345p-118, 0.0,
     0x1.9078d7886e6e8p-811, 0.0, 0.0, 0x1.8d3e99ac60735p-635, 0.0,
     0x1.1c5b9ddb1f0e2p-873, 0x1.cf26a7f3bf7a1p-546, 0x1.695d2fe1b69abp-341,
     0x1.898778612e5eap-103, 0x1.feccb97e634c3p-79, 0x1.8d54699408391p-793,
     0x1.d69c4f8176392p-983, 0x1.444cc3d8098a3p-815, 0.0, 0x1.2a5cc86b1e941p-104,
     0x1.95eec0bcdea0cp-591, 0x1.58bb65839c026p-571, 0x1.51bba24e65dfcp-607, 0.0,
     0x1.bfbc804202e57p-797, 0.0, 0x1.406a45e6483eap-72, 0.0, 0x1.991a1a027dfb1p-542,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f329877f854p-562, 0.0, 0x1.083750de8a705p-323, 0.0,
     0x1.3c30e6975af01p-396, 0x1.c1765bb99a924p-311, 0.0, 0.0, 0x1.605a534ae7e2dp-877,
     0x1.0604595c18266p-829, 0.0, 0x1.dd4700ef86c9cp-543, 0.0, 0.0, 0.0, 0.0,
     0x1.e2810c155810bp-19, 0.0, 0x1.c7c140fb96d9cp-474, 0.0, 0.0,
     0x1.1861c073dd5c9p-798, 0x1.f02df120d0a1p-151, 0.0, 0x1.dcd9f40c41a4ep-264, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89e48d68e17b4p-70, 0x1.f2adfaa9239a2p-210,
     0x1.63461bde823d3p-559, 0x1.bf890d536ce9fp-300, 0.0, 0x1.92c57ed7b5773p-905,
     0x1.31619e6202d81p-395, 0x1.2119d065ea2d9p-645, 0x1.78d3c34d4b81p-198, 0.0, 0.0,
     0.0, 0x1.bc2c33e90d393p-288, 0x1.dbd3730e9f9abp-502, 0x1.9ed870e799411p-156, 0.0,
     0x1.fb33b891aee1p-161, 0.0, 0x1.d64ba72be856ep-448, 0.0, 0.0, 0.0,
     0x1.ffbf2cfc02925p-941, 0x1.425cf4369aa21p-366, 0x1.08c98c23091c3p-256, 0.0,
     0x1.18be107a6f8e9p-112, 0x1.2d4f871b1037bp-465, 0x1.e5ee7c2e31c0fp-894,
     0x1.50ce1f08bbbf9p-251, 0x1.e1ef1477c75b5p-262, 0.0, 0x1.8afae030e4d0bp-357,
     0x1.c2801709ad9a2p-11, 0.0, 0x1.2262490032847p-103, 0x1.8fb01ff6688abp-674,
     0x1.715812a2a1d77p-81, 0x1.e0852a4d4ee9ep-921, 0.0, 0.0, 0.0,
     0x1.37feda37a28b5p-10, 0.0, 0x1.f553cb8922adbp-99, 0.0, 0x1.2eb089a6d7bc2p-206,
     0.0, 0.0, 0.0, 0.0, 0x1.28b93ef016139p-761, 0.0, 0x1.d652e60e9aaa5p-943,
     0x1.8cb46090f96dcp-631, 0.0, 0x1.9e4a3bb2027f9p-733, 0.0, 0x1.e29094d902361p-424,
     0x1.cead9245f0bc9p-29, 0x1.0bad7ce60016ep-755, 0.0, 0x1.79cd07a978f3ep-294, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae408187fc3efp-670, 0x1.ab810204a3d6fp-637,
     0x1.8eaf9d0485f67p-970, 0x1.a08bd4a2d4dd6p-443, 0.0, 0x1.392b239640199p-485,
     0x1.76fe52cfb6463p-859, 0.0, 0x1.d0aa7fe06f89ep-671, 0.0, 0.0, 0.0,
     0x1.31cbd38146c1fp-726, 0.0, 0.0, 0.0, 0x1.73fc64f9ab2bp-289, 0.0,
     0x1.e6794df8c21d7p-906, 0.0, 0.0, 0.0, 0x1.4e07a6dac91d3p-302, 0.0,
     0x1.7cd45a3f9437dp-868, 0.0, 0x1.5b86b72d48b4p-875, 0x1.18067817877a2p-492, 0.0,
     0x1.b7709cd609a09p-400, 0x1.ed2f0a370be7cp-1017, 0x1.fe534ccfd2cf2p-123, 0.0,
     0.0, 0.0, 0x1.69c023f38393ep-913, 0.0, 0x1.6806a95f4fb98p-631, 0.0, 0.0, 0.0,
     0x1.aab0460ac59d1p-552, 0.0, 0x1.d424f14b3266cp-661, 0x1.de53a92615fd1p-912,
     0x1.f75de1af8032cp-1, 0x1.6cd4c6f63d931p-909, 0.0, 0.0, 0.0,
     0x1.2efe5153c9bdcp-96, 0x1.426bd3b31f917p-347, 0x1.e39d9edee0d5p-930,
     0x1.e70604f9d6a3ap-431, 0x1.710c59f955b05p-729, 0x1.2196f34cc2b29p-367, 0.0,
     0x1.1fbac4454e508p-288, 0.0, 0.0, 0x1.da6fe8cb433cep-425, 0.0, 0.0,
     0x1.13fb0e62a75f4p-893, 0x1.df8ef51599734p-90, 0.0, 0x1.e164f31e545b5p-212,
     0x1.ac6b4100c9468p-474, 0.0, 0x1.2188e05e71123p-675, 0.0, 0.0, 0.0, 0.0,
     0x1.6c835a16b5078p-906, 0x1.55f177efbd678p-304, 0x1.0a7a211cfc70ep-883, 0.0, 0.0,
     0x1.b20fab4d9623dp-767, 0.0, 0x1.deeddb3a67535p-672, 0.0, 0x1.91464cbf40489p-736,
     0.0, 0.0, 0x1.db228e7ed964dp-702, 0x1.07d38a9c043ccp-483, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a1ef244117da4p-681, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ebccc1fe73a4cp-172, 0x1.0d1599290a16dp-25, 0.0, 0x1.f5627d82cec23p-768,
     0x1.a51df61833e97p-133, 0.0, 0x1.5028fbf5d78d3p-76, 0x1.dd7a9acd3d8a5p-484,
     0x1.c10246d974f09p-760, 0.0, 0x1.184592cb6c976p-26, 0.0, 0.0, 0.0, 0.0,
     0x1.503b263297de1p-38, 0x1.2c60fe0f842a1p-226, 0.0, 0.0, 0x1.d307507051f18p-773,
     0x1.7644a7b0908acp-814, 0x1.8b3f263232e1ap-823, 0x1.3ef64cf72babap-943, 0.0, 0.0,
     0.0, 0x1.7e50efd3369dcp-625, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd700c3bbe8e2p-773,
     0.0, 0x1.c6aa3a8497db2p-439, 0x1.2d5673c952a0fp-460, 0.0, 0.0,
     0x1.8f7da5d9f0d7cp-817, 0x1.541005f09e2d7p-672, 0x1.8f1f75476a3cbp-65, 0.0, 0.0,
     0.0, 0x1.0599b6dae2b7ap-550, 0x1.7eda866b72b6dp-214, 0x1.b962bcabc6e9ep-338, 0.0,
     0x1.c61d4b74006c8p-642, 0.0, 0x1.a91a2cb5fc4d6p-70, 0x1.6af7d9392f036p-528,
     0x1.11e8db8f6e194p-599, 0.0, 0x1.a54c80ab8d252p-220, 0x1.6ca31115b0e47p-122, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.137bd544787fep-76, 0x1.1600a40d1cdf1p-19,
     0x1.646418df9ad8bp-311, 0x1.c3bc8912f629fp-939, 0.0, 0x1.05520d6842625p-123,
     0x1.e58ecfb208091p-699, 0x1.a6640dc320c3fp-831, 0x1.ab276e5d7ee73p-74, 0.0,
     0x1.4fecdcde0a603p-284, 0x1.952bc581b9304p-797, 0x1.e67a998ff12fep-251, 0.0,
     0x1.9ed657bdd80c3p-829, 0x1.0da64cd70c296p-8, 0.0, 0.0, 0x1.1fe77ea22c451p-486,
     0.0, 0x1.82c5a809f7cbdp-393, 0.0, 0x1.bb2146455ba5p-743, 0x1.82e8c0269f97cp-374,
     0.0, 0.0, 0x1.1b3c05272ddf9p-9, 0x1.88355988a3e4fp-170, 0x1.e61585e768ecap-33,
     0.0, 0x1.95b496bdb81d8p-294, 0.0, 0x1.9e9dc60f0ad09p-701, 0.0, 0.0, 0.0,
     0x1.f0502614cbaefp-451, 0.0, 0.0, 0.0, 0.0, 0x1.ce36e6f50b37fp-117,
     0x1.0b301db1c7e35p-877, 0x1.d02ed073b56dap-306, 0x1.49f26422ae7a7p-179, 0.0, 0.0,
     0.0, 0x1.a24c52146fb21p-313, 0x1.ccfb2e6f22e84p-1001, 0.0, 0.0,
     0x1.cbd7a20a6b964p-74, 0.0, 0x1.1be21e1a8abedp-268, 0x1.c2922f4098d7fp-907,
     0x1.124828029f544p-762, 0x1.3d12860296c4ap-261, 0.0, 0x1.9b0d6562c8e4dp-305, 0.0,
     0x1.dd0bf2d37b53ap-670, 0.0, 0.0, 0.0, 0.0, 0x1.2462eb3e15531p-1010, 0.0, 0.0,
     0x1.fe42ac1f5fabap-398, 0.0, 0x1.b10bb95138f8cp-262, 0x1.d062dec9568c2p-831, 0.0,
     0x1.8ff2fddac302bp-58, 0.0, 0.0, 0x1.256637912953ep-4, 0x1.86d1770035cecp-242,
     0x1.0cb022ee780b1p-169, 0.0, 0.0, 0.0, 0x1.90fc92c2157ddp-1005, 0.0, 0.0, 0.0,
     0x1.068d9e89f90b4p-924, 0.0, 0x1.a34f39d104223p-218, 0x1.79cabeca3fe7ep-169, 0.0,
     0x1.1b1f9924fcf03p-285, 0x1.7b7e03ecd9845p-1003, 0.0, 0x1.e8d64d9aa153ap-110,
     0.0, 0.0, 0x1.80dd0a5a4cd3ap-907, 0.0, 0x1.bd12727814774p-886, 0.0, 0.0, 0.0,
     0x1.61759d85a7866p-984, 0.0, 0x1.c68819181cad6p-676, 0.0, 0.0, 0.0, 0.0,
     0x1.8ce91a4eac1f3p-791, 0.0, 0x1.5155ee3beaa23p-303, 0x1.69764ba9fca6dp-692,
     0x1.1a364b4dc7ae2p-280, 0.0, 0x1.41df7eec29f46p-876, 0.0, 0x1.9364db128b702p-481,
     0.0, 0x1.e7db1af3443e2p-755, 0x1.179a49042c40fp-14, 0.0, 0.0,
     0x1.b9937321621c3p-907, 0x1.6046c60e39a63p-572, 0.0, 0x1.1eec50fe8caeap-147,
     0x1.96bfbc28be94ap-960, 0.0, 0.0, 0x1.d7e517c30ca7p-208, 0x1.c023ce19aba89p-797,
     0.0, 0.0, 0x1.c5bd5b9367fd4p-392, 0x1.b6bef94a62c58p-679, 0x1.e7a96c36cc929p-861,
     0x1.293a5ae27a43bp-763, 0.0, 0.0, 0.0, 0.0, 0x1.97c6c1031d9cdp-485,
     0x1.0943a7ab73424p-169, 0.0, 0.0, 0x1.e255243397b19p-319, 0x1.de620cb8a74c2p-487,
     0x1.b69e1f5bc963p-995, 0.0, 0x1.716dca2a03808p-334, 0x1.4eeed8b725041p-310, 0.0,
     0x1.7e2bfd9518acfp-206, 0x1.0fc04bccc493ep-250, 0x1.4c530b34eefe4p-43, 0.0, 0.0,
     0.0, 0x1.2ea0694034192p-498, 0x1.62461dda42c8dp-551, 0x1.f530df4f5d3f5p-710, 0.0,
     0.0, 0x1.880f6a7f5a09bp-762, 0x1.8632f00ecc7f4p-976, 0x1.551525f2a01e6p-237,
     0x1.b8db1645a8d55p-310, 0.0, 0.0, 0.0, 0x1.87f09acc269e4p-341, 0.0,
     0x1.7368a601b5f8fp-162, 0.0, 0x1.51eeb00fde0f3p-509, 0.0, 0x1.0e51013adf579p-778,
     0x1.c44d62556e53ep-161, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.efdfe9215d302p-49,
     0x1.1df5de8d6910fp-722, 0x1.1eeea4319a82p-478, 0x1.357d53c6f8af3p-863,
     0x1.1bb82869b836bp-479, 0.0, 0.0, 0x1.8ac88141eec4ap-498, 0.0, 0.0,
     0x1.bbd985fc6be1p-769, 0x1.e6ac525285faep-218, 0.0, 0.0, 0x1.1a09afcf8d318p-328,
     0.0, 0.0, 0.0, 0x1.754006333864fp-603, 0.0, 0.0, 0.0, 0.0, 0x1.7feba656be024p-36,
     0x1.465c2e38ed76fp-204, 0x1.8428b0585fe3ep-105, 0.0, 0x1.f16d33f915bd9p-855,
     0x1.89b656b4a4a91p-708, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f34a4eab75d39p-503,
     0x1.12c33dcedc178p-657, 0.0, 0.0, 0.0, 0x1.15d6f0b83ce89p-15,
     0x1.a570f9dbef79fp-706, 0.0, 0.0, 0.0, 0x1.ca3b295eba268p-466, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bbfbdab958dd2p-223, 0x1.ee37c11b27549p-975, 0x1.a5cb7c1fe8e55p-539,
     0x1.4320b12449becp-710, 0.0, 0x1.5f67e4385f54bp-151, 0x1.921466195d9eep-412, 0.0,
     0.0, 0.0, 0x1.a3f94e419054cp-695, 0.0, 0.0, 0x1.ec21e4ab9fddcp-657, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d3a103edb1f4ep-495, 0.0, 0x1.b1e335bbeedd9p-84,
     0x1.8481c53f023edp-535, 0x1.c1637ffd52badp-920, 0x1.6508551416aep-712, 0.0,
     0x1.9c6ec47349653p-898, 0.0, 0x1.f690a3b5dbff9p-350, 0x1.be79205db9b8p-793,
     0x1.74bb270f5730ep-548, 0x1.7548a68796792p-984, 0x1.fc8dd67b60c39p-227, 0.0,
     0x1.135ca79e3afbp-629, 0x1.92dc139d068d7p-324, 0.0, 0x1.ef973fb34fc8cp-650, 0.0,
     0x1.18bde8aa1f435p-751, 0.0, 0x1.5de917a850701p-652, 0.0, 0x1.22d8c988b6d2dp-63,
     0.0, 0x1.f7dad5c1baf5bp-508, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fb055582843b6p-521,
     0.0, 0.0, 0x1.bd1b7367f1302p-702, 0.0, 0.0, 0.0, 0.0, 0x1.303362d9a8713p-883,
     0.0, 0x1.ffa8ad619369dp-563, 0x1.0cea532855ef8p-582, 0x1.4da9736785baep-520,
     0x1.a65cf707aeec8p-642, 0x1.318f0d6e23429p-890, 0.0, 0.0, 0x1.a47fadf88c2ap-234,
     0x1.7bbf3968c571p-209, 0x1.20a2bf6707574p-450, 0.0, 0x1.f208e7149ed1dp-849,
     0x1.645dd9083fb5fp-16, 0x1.90c201c5ccb37p-921, 0x1.a2356d619e8b6p-695,
     0x1.2dc2396b15ad8p-869, 0x1.b4d12b466701ap-1003, 0x1.4d46760d8996ep-104,
     0x1.05261151617d9p-604, 0x1.b9b61dac8bb69p-246, 0.0, 0x1.4f60a7fb2c396p-863,
     0x1.d24bf27d92f73p-679, 0.0, 0.0, 0x1.0e9616593dd43p-452, 0.0,
     0x1.6f5dfadbadef6p-748, 0.0, 0.0, 0.0, 0x1.afaaf5f362ff4p-717,
     0x1.30d3b246dbe33p-575, 0x1.ef93d000b27d5p-531, 0.0, 0.0, 0x1.7769c75e6088ep-295,
     0x1.063f55a78f409p-1011, 0x1.626a8b4590d81p-944, 0.0, 0x1.4b91e4d1e7dc6p-747,
     0.0, 0.0, 0x1.b49de19c3b2d2p-382, 0.0, 0.0, 0x1.e96e25e7b236ap-334, 0.0,
     0x1.f5bde0680d432p-655, 0.0, 0.0, 0x1.5859a35fb0f76p-901, 0.0, 0.0,
     0x1.210ce4de090e2p-934, 0x1.541f38829fadfp-389, 0.0, 0x1.5460d953efbecp-634,
     0x1.39782b49a9826p-861, 0x1.6183b0314e505p-673, 0.0, 0x1.99ca81117b3afp-933, 0.0,
     0.0, 0.0, 0x1.91acc4714a311p-139, 0x1.b656af40524b2p-404, 0x1.83ce080014b38p-580,
     0x1.0a0ef60ba0a03p-751, 0x1.96d18fc636ed9p-288, 0x1.19813adc0d785p-899,
     0x1.cd4f256d03222p-124, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2d98ab919a17p-34, 0.0,
     0x1.0e2b202f54582p-804, 0x1.d36db8a62777dp-513, 0x1.a096a9ef8d7fcp-954, 0.0,
     0x1.f069863326134p-616, 0.0, 0.0, 0x1.d4de03f49aa38p-997, 0.0,
     0x1.89d7ba59765f2p-935, 0.0, 0x1.ee21a387ef477p-926, 0x1.594d16311e4bap-392,
     0x1.78f2d32ae1cd3p-188, 0x1.305b43dcf2434p-160, 0.0, 0.0, 0x1.68b0bf71875dp-196,
     0.0, 0x1.d1511fe8f765p-689, 0x1.33a666fe3ca7ap-415, 0.0, 0.0, 0.0,
     0x1.0a8bd995e222ap-781, 0x1.db7a09953a00bp-837, 0.0, 0.0, 0x1.8403ddd43b1c5p-691,
     0x1.fdce58b62b8f1p-931, 0x1.787fdc219f8f7p-133, 0.0, 0.0, 0x1.354263cf2c0b6p-714,
     0x1.31a93f536e2e9p-659, 0.0, 0x1.e128d64813cd3p-525, 0x1.86edbfdfda465p-171, 0.0,
     0.0, 0x1.e75a277cdbda3p-530, 0.0, 0x1.b514154922fe3p-501, 0x1.b66bc93a17873p-764,
     0x1.eaf052e167234p-784, 0x1.02134e6d72f9dp-423, 0.0, 0x1.5ba11bf48661p-145,
     0x1.c9a485bd47cc6p-27, 0.0, 0.0, 0x1.08eada2a98754p-60, 0x1.8adb90230b441p-802,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbfdd4bddaa53p-885, 0.0,
     0x1.c3e6cb3a87c21p-621, 0.0, 0x1.435566b8ab316p-439, 0.0, 0.0,
     0x1.347f9964a7c0bp-921
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincosd1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincosd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosd1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
