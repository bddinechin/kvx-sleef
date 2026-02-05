/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid2_u05kvx.c --function Sleef_sincospid2_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.b83d348f29781p-80, 0.0, 0x1.7dbac7d5a118ep-228, 0.0, 0.0,
     0x1.67c4e275ecd18p-489, 0.0, 0x1.61340c633c54dp-994, 0x1.043c3a12ac853p-845, 0.0,
     0.0, 0x1.68a491e47ff51p-385, 0x1.de4f4b1cf853cp-740, 0.0, 0x1.58157df2b7989p-884,
     0x1.2093bb06fc6b4p-337, 0x1.9fcf44622181cp-300, 0x1.f14ddb54f553ap-389, 0.0, 0.0,
     0x1.7b64b25efcccfp-304, 0x1.1d40464c2bfd8p-584, 0x1.acfc776d33f5ap-315,
     0x1.47cf7dc4c7b39p-273, 0x1.a019d92f73b9cp-395, 0x1.de74507aba095p-462, 0.0, 0.0,
     0x1.2b77acea1a10dp-989, 0.0, 0.0, 0.0, 0x1.2b0b200e10ed3p-870,
     0x1.16dc3d394757ep-860, 0.0, 0x1.de09fe7e14f04p-328, 0x1.b00c3b7ec191p-378, 0.0,
     0x1.804f31caf7758p-251, 0x1.07c7909369ca1p-108, 0x1.f36b407787152p-883,
     0x1.7da8e14a48b8p-174, 0.0, 0.0, 0.0, 0x1.c5bb483a921b1p-456,
     0x1.026666191743dp-454, 0.0, 0x1.541d3f8aba4bdp-585, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b9342e5bc90f1p-649, 0.0, 0x1.cf8b7d1811137p-220, 0x1.e21b46db40a9p-57,
     0x1.c2feedeadd754p-950, 0.0, 0.0, 0.0, 0x1.81961b71dd55fp-408,
     0x1.aca5b8b860b6bp-511, 0x1.5d1fa31d44958p-487, 0.0, 0.0, 0.0, 0.0,
     0x1.98fbe197e7287p-766, 0x1.36bac2f555cbap-920, 0x1.1129a3ee0e525p-410,
     0x1.563c89ee42664p-152, 0.0, 0x1.ffaf6ccd2045p-575, 0x1.5a2fc7dc39977p-666, 0.0,
     0.0, 0x1.0d25756e09586p-300, 0.0, 0.0, 0.0, 0x1.70cf1ee527f93p-660, 0.0,
     0x1.ab3533cd3ba2bp-239, 0x1.81e3d106a666cp-292, 0.0, 0x1.7d581bb4e6e18p-390, 0.0,
     0x1.1678c51160342p-235, 0x1.682f5e4ec3347p-21, 0.0, 0.0, 0.0,
     0x1.3d6bc9d680bfbp-204, 0.0, 0x1.063726401dec9p-753, 0.0, 0.0, 0.0, 0.0,
     0x1.913fcf63e410fp-449, 0.0, 0x1.557dac5c2cdc5p-881, 0.0, 0x1.8fe2ed55ee074p-712,
     0.0, 0x1.29ac89147112fp-140, 0x1.b52e82c926f1p-409, 0.0, 0.0, 0.0,
     0x1.0c7160573212fp-152, 0x1.dc365f1c06dafp-345, 0.0, 0x1.33e6c58ac7f97p-886, 0.0,
     0x1.2a4cd701da8afp-68, 0.0, 0x1.2ea496cf5fe4ep-194, 0.0, 0x1.5841977cb2ea1p-355,
     0x1.11adcf4b86d1cp-565, 0x1.dc9010fe3f414p-539, 0.0, 0x1.fdc91a08fded1p-529,
     0x1.80b79ffe059fcp-723, 0x1.844f9f70aba6fp-200, 0.0, 0.0, 0.0,
     0x1.79840a6ef0d0dp-607, 0.0, 0x1.55be3730ce655p-387, 0x1.c54c71e4c179bp-380,
     0x1.5bdf16d095bbcp-374, 0x1.57618df7203bap-482, 0x1.16e816e6cd4f6p-440, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.22e3c531de882p-162, 0x1.af79a3440666cp-266, 0.0, 0.0, 0.0,
     0.0, 0x1.eb99da14ba829p-281, 0.0, 0.0, 0.0, 0.0, 0x1.803bf78569dacp-738, 0.0,
     0x1.d1e8b1fffad55p-411, 0x1.3e79f0784273dp-787, 0.0, 0x1.4ce098872230bp-970, 0.0,
     0x1.b534961afea61p-812, 0x1.2daa8f189bf81p-189, 0.0, 0x1.3a6aa5d19a5b4p-367,
     0x1.147eeceb44a0bp-647, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61d4f9bf85101p-1020,
     0x1.d82905fc2665fp-458, 0x1.070c6169e60fep-327, 0x1.aa823a13a36abp-659, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b41704c6ad42dp-270, 0x1.290732da72df2p-948,
     0x1.2d702ae8dd69ep-844, 0.0, 0x1.6f6df6dbde3f1p-941, 0.0, 0x1.6767a5e42baacp-103,
     0x1.1ae111b5e7e51p-183, 0.0, 0x1.0113dec3ab766p-861, 0x1.d2cdb2bc0e594p-418, 0.0,
     0x1.21c2ef758aadbp-103, 0.0, 0x1.e8276c18d72efp-115, 0.0, 0.0,
     0x1.c27509e67c017p-669, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b41a12ee1df3p-965, 0.0,
     0x1.98074e15f19eap-724, 0x1.13ea179ed5306p-398, 0x1.52b59d842a92p-198,
     0x1.a792826dbc593p-287, 0.0, 0.0, 0.0, 0x1.ccce911d0f29ep-363,
     0x1.a3ddddfb2f67fp-86, 0.0, 0x1.b0fda276de76p-688, 0.0, 0x1.935235daa127ap-1002,
     0.0, 0.0, 0.0, 0x1.a715728b4e4fcp-957, 0.0, 0.0, 0.0, 0x1.917ccf7fa709cp-69,
     0x1.6477eeab1cd0cp-411, 0.0, 0.0, 0.0, 0x1.8811463b933acp-396, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d1d0304632911p-499, 0x1.8df6c78772035p-110, 0x1.4c30f96480ffap-682,
     0.0, 0x1.80963b1e4fcf1p-800, 0.0, 0x1.1eb5a4e510523p-293, 0.0, 0.0,
     0x1.a0e9f9b18e879p-892, 0x1.44efb6e243464p-845, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ec453c84d3afp-116, 0.0, 0x1.75457619f8654p-44, 0.0, 0x1.070e4b52652cbp-998,
     0x1p0, 0x1.66731ef012b97p-239, 0.0, 0.0, 0x1.1cd37683c7be5p-294,
     0x1.64e25e6927fb8p-271, 0.0, 0x1.517662b4cd534p-758, 0.0, 0x1.d6868f625d184p-435,
     0.0, 0x1.f1616e5e8a2ebp-131, 0x1.84e29738bacc6p-667, 0x1.d2a454b5f7532p-84, 0.0,
     0.0, 0.0, 0x1.c42325503f81fp-90, 0x1.138a5eabea47fp-875, 0x1.4388970cf34ecp-242,
     0x1.e07f1898b12a9p-121, 0x1.1a2703e75445p-804, 0.0, 0.0, 0.0,
     0x1.9b90240e0f41dp-306, 0x1.652fbaf03652dp-75, 0x1.f8e737a613a88p-646,
     0x1.a1d9e252add7p-808, 0x1.97e9024b61945p-500, 0.0, 0x1.5fd0004635ce2p-361,
     0x1.f5188619698bfp-66, 0x1.19adcb5874b4p-144, 0.0, 0x1.54de0440d9a06p-340, 0.0,
     0.0, 0x1.75885a9eda764p-460, 0.0, 0.0, 0.0, 0.0, 0x1.97750fe7b01b5p-697, 0.0,
     0.0, 0.0, 0.0, 0x1.08c870383a446p-749, 0.0, 0.0, 0x1.5184a634e446ep-640, 0.0,
     0x1.c4266e885e19ap-829, 0x1.7027f0f67dfdp-837, 0.0, 0.0, 0x1.759ad9431fd65p-893,
     0x1.aa92a5e01a3c6p-172, 0x1.f26d21fa4fb6p-124, 0.0, 0.0, 0x1.3b09a9bb50bfdp-504,
     0x1.8bb7b489b85d8p-587, 0x1.81e8f9688495dp-309, 0x1.e0f9cfb584417p-293, 0.0,
     0x1.63205eaa37307p-920, 0x1.9b319b7d7776cp-97, 0.0, 0x1.bebc633d1db0ep-339,
     0x1.c29b761f13653p-571, 0.0, 0.0, 0x1.64c1d335f4956p-14, 0x1.8429042864e01p-577,
     0x1.b44454e994e0fp-449, 0.0, 0x1.b75b1ba1246fp-940, 0x1.8a759852e121cp-953,
     0x1.427273492e171p-339, 0.0, 0.0, 0.0, 0.0, 0x1.24a91e2015acfp-1005,
     0x1.2679612eee0f9p-625, 0x1.f4e301511965fp-387, 0x1.ae4948c980ee2p-420, 0.0,
     0x1.2eb59fe350a34p-801, 0x1.f27525409a5d2p-3, 0x1.f4b843651a5d2p-21, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f90434242c233p-931, 0x1.d3fbab300532bp-1008,
     0x1.a6a2a8c36912dp-402, 0x1.be4f6d837cf7dp-621, 0.0, 0.0, 0x1.de41b21d66d0fp-268,
     0x1.142938288dbd6p-144, 0x1.7480f74c5be9ep-91, 0.0, 0.0, 0x1.9b3957f43e5d8p-686,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df9a957488013p-880, 0x1.bc7486a9ccd3p-50,
     0.0, 0x1.dd93feb3f7293p-802, 0.0, 0x1.f5998175b582cp-952, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.810e1bbd4a29fp-753, 0x1.e8f43246d287fp-805, 0x1.072943fdab77dp-438,
     0x1.0a3a010d924e1p-418, 0x1.702676eea4f13p-304, 0x1.6f7c824cc9776p-223, 0.0,
     0x1.b3902777190dap-916, 0x1.9f5e92d3350c2p-259, 0x1.f7a8fea971faap-376,
     0x1.0bfdebfaf9d88p-987, 0x1.a9b04bbdeaa82p-23, 0.0, 0x1.9f5c0cc950f8ap-74, 0.0,
     0.0, 0x1.0676a40d1c99bp-888, 0.0, 0.0, 0x1.3639a29c1456fp-413, 0.0, 0.0,
     0x1.c687c17f53c85p-755, 0.0, 0x1.83ff004b7918dp-620, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e428c9af994cp-985, 0.0, 0x1.a0fb71b0ab43cp-556,
     0x1.1c8ea1a3cc7afp-559, 0.0, 0x1.f2efca3b147d2p-634, 0.0, 0.0, 0.0,
     0x1.267ab9c128de8p-3, 0x1.a7e755e67bf7ap-629, 0.0, 0x1.89ee0e43f0a64p-717,
     0x1.a749019d8294ep-299, 0.0, 0.0, 0x1.3a1b8449eba73p-971, 0x1.54c35715e6d5cp-601,
     0x1.4d409bc75154ap-990, 0x1.70dcf0ddeeb27p-826, 0x1.5faa077c82ef6p-401,
     0x1.6e1f49ab162c5p-235, 0x1.39b0b0de9d703p-873, 0.0, 0x1.32aa27e52f63ap-146,
     0x1.526ef2c180f25p-366, 0x1.653548df3e9aep-861, 0.0, 0x1.56a57a5a5291p-347, 0.0,
     0x1.1cdfc5858b405p-5, 0x1.7b36adea77eap-53, 0.0, 0x1.76ffe4a5c0d57p-946, 0.0,
     0.0, 0x1.e898d3301b9c3p-198, 0x1.419d9fd1a2236p-994, 0x1.3d7ad687d183cp-855,
     0x1.6752258e42b9bp-635, 0.0, 0x1.11e4acd964749p-35, 0.0, 0.0, 0.0,
     0x1.a9168f5adbb56p-982, 0.0, 0x1.2cffca841058dp-1000, 0.0,
     0x1.8011fdd5753cdp-139, 0x1.d37c6563d006cp-118, 0.0, 0x1.30cf07e7eba9p-203, 0.0,
     0.0, 0.0, 0x1.b5de0d4b16f5cp-561, 0x1.5272d226d7817p-996, 0.0,
     0x1.ffea971b0bda9p-161, 0x1.45284aa23f6dap-676, 0.0, 0.0, 0x1.0237ab6208c97p-413,
     0.0, 0x1.56894348226fbp-845, 0x1.5749c348084cp-849, 0.0, 0.0, 0.0,
     0x1.840112a1a006cp-555, 0.0, 0.0, 0.0, 0x1.e9f57aeff01a4p-460,
     0x1.6de625e129cd6p-104, 0.0, 0.0, 0.0, 0x1.3dab7cae61dc7p-169, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.71b5cc73f12b6p-369, 0.0, 0.0, 0x1.7df437f3dd5dcp-802,
     0x1.3cf8877ae907fp-883, 0x1.c9a882249666bp-541, 0.0, 0x1.a07c67d420c25p-766, 0.0,
     0.0, 0.0, 0.0, 0x1.0dfc272ef3dbcp-444, 0.0, 0x1.30cb4f8f517c3p-878, 0.0, 0.0,
     0.0, 0x1.b514abd8f5f04p-294, 0x1.afe295eee7814p-799, 0x1.77e775097ec08p-779,
     0x1.47d1e33acc0bp-1004, 0x1.16b0182d5fe4bp-236, 0x1.1f68d253b079dp-94,
     0x1.c3c8dd0f5768p-443, 0x1.6c2e9ce3fcaffp-146, 0.0, 0.0, 0.0,
     0x1.c096d65c4e0c8p-825, 0.0, 0x1.690d623ab3fa5p-804, 0.0, 0.0,
     0x1.e067f1115bf58p-737, 0.0, 0x1.21c8837d1b2c3p-883, 0x1.04f71253cf4c4p-547, 0.0,
     0x1.269800a9d0a98p-616, 0x1.87ca9c116f5e7p-275, 0x1.752a2b0742fc9p-930, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98724c51a90c6p-273, 0x1.d213f4490cd48p-619,
     0.0, 0.0, 0.0, 0.0, 0x1.d97f14da01d2p-238, 0x1.25b1d999084e9p-661, 0.0,
     0x1.b9395ad5281c4p-307, 0.0, 0x1.c3089df440e3ap-654, 0.0, 0x1.46dffc8de606ep-292,
     0.0, 0.0, 0.0, 0x1.f9472963a7ea6p-768, 0.0, 0x1.26650a1d68abdp-993, 0.0,
     0x1.3dd324851e9c9p-895, 0.0, 0x1.15f2724032e25p-774, 0x1.fb5f3fdd39a4fp-416,
     0x1.cfa392014a1bfp-955, 0.0, 0x1.1b8def5acd58fp-224, 0x1.164412942ac9bp-311, 0.0,
     0.0, 0.0, 0.0, 0x1.982a3b8421b95p-973, 0x1.8be6be2fe60fdp-865, 0.0, 0.0,
     0x1.3c65bea7e5d3p-327, 0x1.2ba8e6e91e39ep-766, 0x1.b94cc0481d7a6p-685,
     0x1.22303b3e8c6ap-397, 0x1.e1c51dd12f6d7p-3, 0.0, 0x1.6e5149cd9dcf6p-154, 0.0,
     0.0, 0x1.dc91a5189db55p-460, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec66ea04f0a1ep-930,
     0x1.05c6e8edab32ep-432, 0x1.fd7710d83396p-761, 0.0, 0x1.3ac4fcbb0e686p-344, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66b0eec97ef44p-778, 0.0,
     0x1.b9bd7a59ef658p-345, 0.0, 0x1.46bbb5309ef9ep-671, 0x1.de1f777c4f029p-926,
     0x1.2c10647612d4ep-348, 0x1.94580a4ea3f85p-377, 0.0, 0.0, 0.0,
     0x1.bc7c9cda4d207p-646, 0.0, 0x1.aa4c84f10c4fdp-147, 0.0, 0x1.9bdb3d3b23ea3p-111,
     0.0, 0.0, 0x1.6c235737443c7p-416, 0.0, 0x1.49bd37f4cfd2cp-824,
     0x1.b71ed22cc9b05p-434, 0.0, 0.0, 0.0, 0x1.0d9938e3a47b7p-821, 0.0,
     0x1.3b862511ae8bp-870, 0.0, 0.0, 0x1.485f7c9d3cb86p-570, 0x1.cc5ae5d777dfbp-919,
     0x1.5ba81e7c12e2ap-244, 0x1.a3c0dab239c4dp-844, 0x1.496edb08cd903p-790,
     0x1.40fdee946720bp-82, 0x1.a7e4174e8148ap-182, 0x1.ff8c7d3542036p-933,
     0x1.9fc49bef7d201p-869, 0x1.ad9f54866b616p-498, 0x1.8e465d6482df3p-142,
     0x1.3567eaf07a38p-488, 0x1.7c3c0f72f057p-892, 0.0, 0.0, 0x1.abd7086cc4dc9p-619,
     0x1.94fd5b2f073cdp-607, 0x1.faf924e246548p-832, 0.0, 0x1.ab42fdc8e2ea3p-73,
     0x1.5f5b800280c5ap-331, 0.0, 0.0, 0x1.594e292a3fd9ep-863, 0x1.0dcfe7ed1c716p-277,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f968749b0daa2p-483, 0x1.5d45261af1d6dp-623, 0.0,
     0x1.2bf3b9a8a318cp-474, 0.0, 0.0, 0.0, 0x1.e6ede08294c42p-169, 0.0,
     0x1.3139ba499f30ap-156, 0x1.6656576b3a85p-734, 0.0, 0.0, 0.0,
     0x1.d53f2316cf5dfp-729, 0x1.cb3ffb5929061p-450, 0x1.d6b7cd2d2ecdep-684,
     0x1.0ca0ef31299eap-797, 0x1.cab95f7569455p-880, 0x1.b63154cd110b4p-335, 0.0, 0.0,
     0x1.43f60e1457d7p-612, 0.0, 0.0, 0x1.d66fdaa184767p-603, 0x1.4450507770422p-918,
     0x1.dd700ca2de0c3p-588, 0.0, 0x1.0160f4db2291ep-736, 0x1.a304ffe128a44p-79, 0.0,
     0x1.0c6d128fe6a28p-65, 0.0, 0.0, 0x1.ea54d4eba9dbdp-635, 0x1.35dd743e3c07cp-331,
     0.0, 0.0, 0x1.32efb0360cd9ap-584, 0.0, 0x1.10f4a1b8b7b8p-655, 0.0, 0.0, 0.0, 0.0,
     0x1.56905f4d74a91p-519, 0.0, 0x1.37ca4e00f4263p-849, 0x1.257d67725ae9fp-861, 0.0,
     0.0, 0.0, 0x1.89d5d3cb19c9dp-284, 0x1.361d73389b73ep-506, 0.0,
     0x1.6913c44f53667p-587, 0.0, 0x1.e0255b9fe38ap-817, 0.0, 0x1.0d4de9feb1541p-793,
     0x1.e60beb53ff11cp-538, 0x1.a6a7786de6145p-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.dad645b806ba3p-403, 0x1.0d56d51f92289p-354, 0.0,
     0x1.c100ba801975ep-617, 0.0, 0.0, 0.0, 0x1.210e0cd1c44a3p-815,
     0x1.667288153fb73p-756, 0x1.3839e4b7a3727p-619, 0x1.c4560ab9d7077p-1005,
     0x1.473d77775e8c6p-425, 0.0, 0x1.93a02d3853ffbp-424, 0x1.5b0dd31889af2p-393, 0.0,
     0x1.cc717ae082325p-545, 0.0, 0.0, 0.0, 0.0, 0x1.5cc7654a9f2f2p-979, 0.0, 0.0,
     0.0, 0x1.9763d40efc553p-411, 0.0, 0x1.d2e5de471ca16p-154, 0.0,
     0x1.de7980e99cb18p-58, 0x1.e1926d1c8fa5bp-279, 0.0, 0x1.d5c95302827cap-961, 0.0,
     0x1.0f6afbc27925fp-383, 0x1.0181d34c1196ap-390, 0.0, 0x1.cd156ab89a9b3p-813, 0.0,
     0x1.39f46aba7943dp-743, 0.0, 0.0, 0.0, 0.0, 0x1.d44cd93bf175cp-153, 0.0,
     0x1.711c785e2d336p-476, 0x1.045ba30a490bcp-22, 0x1.1d4e8dfc2fa76p-645, 0.0, 0.0,
     0x1.0b0b303381572p-968, 0x1.8c2573f725794p-399, 0.0, 0x1.59405d3c039f6p-805, 0.0,
     0x1.63d23daf7be11p-901, 0x1.7b542ccdcb7dfp-933, 0.0, 0x1.0e4b45e8f844bp-795, 0.0,
     0x1.2005a557c8a1dp-399, 0.0, 0.0, 0x1.2088dc8dbd15bp-509, 0.0, 0.0,
     0x1.892f423c544ccp-618, 0x1.a9c5d2a91b115p-945, 0.0, 0.0, 0.0,
     0x1.c45ecc68b5ad7p-704, 0.0, 0x1.2464514d8f678p-416, 0x1.c9810f4fd25b3p-771,
     0x1.8d50604e9fb3cp-640, 0.0, 0x1.4263957e3ab64p-308, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e070d7480e7bp-918, 0x1.ff503a893f929p-982, 0.0, 0x1.2acfd9a682ed9p-602, 0.0,
     0.0, 0.0, 0.0, 0x1.de88aa6831406p-943, 0.0, 0.0, 0.0, 0x1.eac8960e668c2p-956,
     0x1.b1ead246221eep-411, 0x1.5a679573cf1cap-758, 0x1.d26c31a010483p-601, 0.0, 0.0,
     0x1.96c54e1b3bfbbp-588, 0.0, 0x1.01e5f3c235346p-406, 0.0, 0x1.72cc5588930fap-288,
     0x1.c960d6845f4e5p-137, 0.0, 0x1.4ca1d628ac48ep-934, 0x1.f8f5ec501e80ap-757,
     0x1.47f6bf2cdbdacp-648, 0x1.96b54cf74c097p-491, 0x1.70087c6dca916p-569, 0.0, 0.0,
     0x1.6ce1cd2cc2f62p-803, 0x1.5afe8c8920e6p-486, 0x1.d4be0613177cfp-866,
     0x1.049deddbed8b7p-27, 0x1.56d69476d2531p-964, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a64ac81a1280ap-865, 0.0, 0x1.e62f64dabf187p-338, 0x1.aeedbcc483204p-256, 0.0,
     0.0, 0x1.575fc33697ebcp-279, 0.0, 0.0, 0.0, 0.0, 0x1.4b62264d0b806p-498,
     0x1.192ee8a3bb4b8p-894, 0.0, 0x1.dfb56a4b72c41p-31, 0x1.bc2e61a56515fp-442, 0.0,
     0.0, 0.0, 0x1.4e077433c9428p-593, 0.0, 0x1.d32a5ff5b2fcbp-199, 0.0, 0.0, 0.0,
     0x1.72d32c113b48p-913, 0x1.d054362e3ad7dp-546, 0.0, 0x1.2678c522bbc5cp-185, 0.0,
     0.0, 0x1.30f38bc525b25p-29, 0.0, 0.0, 0.0, 0.0, 0x1.7d7bc09309e18p-524, 0.0, 0.0,
     0.0, 0x1.c1a5a60b7ba8cp-72, 0.0, 0x1.043df8943092ap-265, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cec4b085cd203p-948, 0x1.7f1dfa8a705d6p-230, 0x1.a9beb28efdc7ep-39,
     0x1.874980ae340ccp-133, 0x1.84c609594b01bp-361, 0x1.a3e4fece03dfap-376, 0.0, 0.0,
     0x1.f092f44db5382p-514, 0x1.42d598d1a6f55p-242, 0.0, 0x1.aebea6e886c4p-630,
     0x1.bab23a8dac1b8p-1021, 0x1.a9e1e9e1bdd58p-16, 0.0, 0.0, 0.0,
     0x1.1a1ee8596ad61p-399, 0x1.cebbf264652f7p-83, 0.0, 0x1.afc802e84b9fp-227, 0.0,
     0.0, 0.0, 0.0, 0x1.e8c91ea72a60ap-223, 0x1.d287f6a881a41p-917, 0.0,
     0x1.216c4405c83b3p-332, 0x1.4b3e72de804e2p-380, 0.0, 0.0, 0x1.b6df79a0d2d09p-141,
     0x1.900c04874cee6p-285, 0x1.0939d2578687ap-996, 0x1.cd20a3ae43cp-336, 0.0, 0.0,
     0x1.811305b029be3p-659, 0x1.c51899f7e8abdp-184, 0x1.98fddb6af6e7fp-886, 0.0, 0.0,
     0.0, 0.0, 0x1.28be644697b6ep-128, 0x1.6becfddfbfdf7p-13, 0.0,
     0x1.c6d86562f7dd6p-243, 0.0, 0.0, 0x1.c55be0e5bd83p-493, 0.0, 0.0, 0.0, 0.0,
     0x1.3abeeec5ce0e3p-948, 0x1.d2de77d488711p-433, 0x1.99a2b1a59228fp-669,
     0x1.6242b5e1ede19p-763, 0.0, 0.0, 0x1.3cf902c6c994fp-161, 0x1.445f271424ap-919,
     0x1.f3417fae370f3p-937, 0x1.c97f1d370f9a4p-114, 0.0, 0x1.fac4eb482a8a7p-181,
     0x1.3acf0ad686acp-460, 0.0, 0.0, 0x1.0a3313ff6c7a7p-281, 0x1.4628581aad512p-252,
     0x1.a2e5ad2e19bd6p-597, 0x1.270632e3c9f88p-208, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospid2_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincospid2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincospid2_u05kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
