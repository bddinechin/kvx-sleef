/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modfd1_purecfma.c --function \
 *     Sleef_finz_modfd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.816dabf2c47dep-159, 0.0, 0x1.3ebbd484083efp-794,
     0x1.c84285614b931p-612, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51acc93a22bfap-604,
     0x1.3b0e66b0cbeb5p-344, 0.0, 0x1.ea6adf8a97014p-104, 0x1.51770202854c2p-849, 0.0,
     0x1.e1100ee256cdp-115, 0.0, 0.0, 0x1.466a47a585a2ap-40, 0x1.2f976639f9f7fp-63,
     0.0, 0.0, 0x1.5788736e694a5p-32, 0x1.c08f5f21fb13bp-355, 0.0,
     0x1.cc38ac07f53c7p-353, 0.0, 0.0, 0x1.8dabfc854f724p-706, 0x1.66096262c2ba6p-432,
     0.0, 0x1.73acb71a3e241p-37, 0x1.41af468272da2p-366, 0.0, 0x1.67e50c6032dc2p-801,
     0x1.dca850b2d948ep-50, 0.0, 0x1.0e04f77371178p-906, 0.0, 0x1.203de3f525f5ep-607,
     0.0, 0x1.eccac0b90e955p-682, 0.0, 0.0, 0x1.6e2d5b77eb599p-408,
     0x1.cf2b4e1556809p-646, 0.0, 0.0, 0.0, 0.0, 0x1.a5a1bb3f70052p-410,
     0x1.0a5b6fdef3976p-378, 0x1.6b65e3ec5cdbfp-258, 0.0, 0x1.370aae8a7e743p-663, 0.0,
     0x1.f1f903d0679c4p-105, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db32492f485f2p-822,
     0x1.75165867bd678p-893, 0x1.8e52f422ab32cp-402, 0.0, 0.0, 0x1.f216520004851p-942,
     0x1.37969ca7d81a1p-1002, 0x1.cab38fa202776p-392, 0x1.5ec754d753854p-299, 0.0,
     0x1.7b61be2afbc32p-937, 0.0, 0x1.fb78f1a7d8ea3p-651, 0x1.7485700a3ce6dp-133, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.788ac9e5654d1p-531,
     0x1.ee0e9aeae23c1p-883, 0x1.36a2117a6325dp-150, 0x1.9f8c7d6a9f68p-229, 0.0,
     0x1.94971755a7a47p-423, 0x1.577fc941688b1p-225, 0x1.b7aef3685d36ep-411,
     0x1.2f967bf7474f3p-897, 0x1.267787d0e78f5p-338, 0x1.aa6295840b465p-699, 0.0,
     0x1.06d50002f030dp-335, 0x1.77c07d91982f8p-29, 0.0, 0.0, 0x1.9b547dd27f435p-501,
     0.0, 0x1.4efd1250d16e6p-1022, 0.0, 0.0, 0x1.998f6f82efea5p-332, 0.0,
     0x1.eff53813d13c3p-27, 0x1.e8230d681beefp-738, 0.0, 0x1.62fb15f8349d6p-257, 0.0,
     0.0, 0.0, 0.0, 0x1.0b99ea1a30791p-783, 0x1.0a19f2ad55ec7p-86, 0.0,
     0x1.a1442d7b2b002p-986, 0.0, 0x1.648b6b71815ap-552, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cd92a521259c1p-739, 0.0, 0.0, 0x1.4c6571175a76bp-892, 0x1.01af4d483cb0dp-831,
     0.0, 0x1.6f3e7cb938a83p-428, 0x1.b450df6098e56p-561, 0x1.394af7b4aae04p-172,
     0x1.9c4046a6c190ap-539, 0x1.5372b045bef55p-688, 0x1.2a99b07559b6fp-41,
     0x1.7e3d6f2a56edbp-443, 0.0, 0x1.0bbc197ec2812p-789, 0.0, 0x1.0e6816094cf93p-819,
     0.0, 0.0, 0x1.522bbc962bba3p-480, 0x1.99c76973101d1p-790, 0x1.e34a37222409p-961,
     0x1.68d253a0b553ep-585, 0x1.185dee70c5e16p-430, 0.0, 0x1.bad2ef915f043p-403,
     0x1.d0e2d4ead0424p-900, 0.0, 0.0, 0x1.414185284a7dfp-382, 0.0, 0.0, 0.0, 0.0,
     0x1.ea9fea39e912cp-820, 0x1.1a330f5d5d43dp-917, 0x1.eef1abd92a2e7p-72, 0.0, 0.0,
     0x1.16646a78c7234p-80, 0.0, 0.0, 0x1.f28e17093cbb6p-998, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bd072ed6a37d1p-224, 0x1.f3b0775c1282cp-444, 0x1.4702d810239e4p-971, 0.0,
     0x1.4efa18ebe25fbp-110, 0x1.6ab824fd6adf9p-31, 0x1.0c79e58c5549dp-690, 0.0,
     0x1.baa2ec5d85c0bp-201, 0.0, 0x1.df4e470ef042ap-611, 0.0, 0x1.e234a0e4e639cp-202,
     0.0, 0.0, 0.0, 0.0, 0x1.62df98e60e549p-299, 0x1.a80c0d0127796p-410, 0.0,
     0x1.26c188ed07657p-162, 0.0, 0.0, 0x1.26ee3aeaad35ap-936, 0.0, 0.0,
     0x1.4d5fcd13866f5p-190, 0x1.21ac8cd123a2cp-442, 0.0, 0x1.098f91201524bp-579, 0.0,
     0x1.949a7d837ab98p-441, 0.0, 0x1.a9953851a44cdp-990, 0x1.13e05cb0630ecp-738,
     0x1.a81405353d723p-103, 0.0, 0x1.1db096cde195ap-76, 0.0, 0.0,
     0x1.2c36ab80a09e6p-753, 0x1.47e3737988c1ap-805, 0x1.bb2ae448bce8cp-856, 0.0,
     0x1.6632c5ee774e9p-726, 0.0, 0.0, 0.0, 0.0, 0x1.5de059a05d1c3p-75,
     0x1.b523e7f638c97p-142, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.12dd5c326f6f7p-28,
     0x1.8926ec5850835p-39, 0.0, 0.0, 0x1.ddeedc7143343p-858, 0.0, 0.0,
     0x1.d3bca76aa81c2p-790, 0x1.169a0f6119f73p-350, 0.0, 0x1.2b5a86b122b1cp-593,
     0x1.de8044a29f517p-953, 0.0, 0.0, 0.0, 0x1.6b9170997172ep-625,
     0x1.9a028f7932844p-185, 0x1.d2e1874116c1bp-249, 0.0, 0.0, 0.0, 0.0,
     0x1.391b3dc8bbdb5p-744, 0.0, 0.0, 0x1.7e734a6eb4f83p-318, 0x1.990f556352899p-486,
     0.0, 0.0, 0.0, 0x1.a7ad9cabaef2p-294, 0x1.3415b0a4d1e9p-716, 0.0,
     0x1.19713fa65228fp-199, 0x1.0db010a106ec8p-711, 0x1.dae170cf04ea3p-286, 0.0,
     0x1.d431171839e8p-29, 0x1.90e877f7b5a2fp-11, 0.0, 0.0, 0x1.e60327e0b86f2p-866,
     0x1.178be7f166979p-360, 0.0, 0x1.af49fe2822cdfp-189, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.26b266e1d5acap-364, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0296ead7f47c4p-922, 0.0, 0x1.2c8d5ded7e458p-627, 0.0, 0.0,
     0x1.d82b128055993p-557, 0.0, 0x1.333f0291bf17bp-504, 0x1.2aeb4531ea067p-549, 0.0,
     0x1.c881f71c33c31p-729, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c35a0d638a3abp-374,
     0.0, 0x1.d50d1feae0f84p-936, 0x1.eeefaab224d4cp-533, 0x1.b1a3c203f5eefp-542, 0.0,
     0.0, 0x1.fd8ac582a02eap-867, 0x1.a424e10f02facp-703, 0x1.901777606d3fcp-68,
     0x1.27a044dd101efp-709, 0.0, 0x1.d3bd619384c73p-637, 0x1.904e8fc758a11p-1001,
     0.0, 0.0, 0x1.e4ac185614fb7p-590, 0.0, 0.0, 0.0, 0x1.788b2c8606d4dp-564,
     0x1.eaed0f9b2f792p-41, 0x1.b3b724815f3e9p-663, 0x1.ced3e425aef2cp-369, 0.0, 0.0,
     0.0, 0.0, 0x1.241408963dcdep-587, 0x1.fe1aecce28cddp-764, 0.0,
     0x1.b2534b03c7adep-617, 0.0, 0x1.e1f694391ff36p-1005, 0.0,
     0x1.ad76cf4ef048ap-808, 0.0, 0.0, 0x1.f174945600affp-469, 0.0,
     0x1.612eb02732736p-938, 0x1.881dce70a523bp-568, 0x1.ea9ea264f1b3bp-575, 0.0,
     0x1.d5dc971099c3cp-426, 0.0, 0x1.017e65747037fp-44, 0.0, 0x1.a8011907ff764p-740,
     0.0, 0.0, 0x1.0e801341bc209p-615, 0x1.4b8806221fac6p-817, 0x1.0c79f1018efa1p-967,
     0x1.81eea3789d01dp-117, 0.0, 0x1.06a15a4d6d5dcp-916, 0x1.866b07b461725p-915,
     0x1.157169ab1570fp-713, 0x1.93625f9b863edp-70, 0.0, 0.0, 0x1.078696364eacep-234,
     0x1.fbfa9dd5ff388p-959, 0x1.3964627b1d11ep-92, 0x1.8b8c7a4266ac8p-14, 0.0,
     0x1.77ced7362b3e9p-311, 0x1.17c9ee47509ep-846, 0.0, 0x1.04168697c7ccdp-778, 0.0,
     0x1.f121d1ef61348p-382, 0x1.c768be940da67p-290, 0x1.26c3efd215027p-774, 0.0,
     0x1.3ef98bf8cbe1fp-70, 0x1.c41bf58a609bep-800, 0.0, 0x1.6829813abf1cep-859,
     0x1.27e47a05b5e82p-378, 0x1.ea5fe5f28d27dp-913, 0x1.9ce3547297592p-350, 0.0, 0.0,
     0.0, 0x1.41bd514546b72p-724, 0x1.176778bc6732ap-839, 0x1.51b78218720ffp-711,
     0x1.a0ad4880959f5p-916, 0.0, 0.0, 0x1.4da1637f79af7p-505, 0x1.9ebbcdb310919p-182,
     0x1.d4cef2c472d88p-277, 0x1.6dae442a4282bp-734, 0.0, 0.0, 0x1.950637e69ceacp-498,
     0.0, 0.0, 0.0, 0x1.862e4ac4c79c5p-505, 0.0, 0x1.e601b2ab38bccp-584,
     0x1.00778dccfe124p-841, 0.0, 0.0, 0x1.13d1261ada2a2p-823, 0x1.8bbb31b29e14cp-917,
     0x1.d472ea120bb4ep-360, 0x1.2ba1d40b9ca7bp-627, 0.0, 0x1.294a8f798a4b4p-565, 0.0,
     0x1.1561768897adfp-893, 0x1.9f7d84f191559p-281, 0.0, 0x1.3d775982b49e6p-53, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d64d72c97645p-749, 0.0, 0.0, 0.0,
     0x1.00b450d8187e1p-60, 0x1.6354e03f4bc0dp-133, 0.0, 0.0, 0.0, 0.0,
     0x1.6b8e18f21ce39p-436, 0x1.d07e98e73f12ap-183, 0x1.680d28f1ee148p-697,
     0x1.5356128062446p-707, 0x1.df57e6f848ba2p-697, 0.0, 0.0, 0.0, 0.0,
     0x1.106da58e50474p-251, 0.0, 0x1.df3ec3ff6a209p-355, 0x1.67d8c81391f13p-227, 0.0,
     0x1.bcabdc269e865p-684, 0x1.f05db9a56fc84p-533, 0.0, 0.0, 0.0, 0.0,
     0x1.83df92157cf9bp-440, 0.0, 0x1.b038b4927e337p-285, 0.0, 0x1.47daba1fdbcap-159,
     0.0, 0.0, 0x1.052fbaa5f33b8p-962, 0.0, 0x1.bd5280b6878fbp-947,
     0x1.1d0f1a0e3df89p-462, 0.0, 0.0, 0.0, 0x1.2839a4c29c6c8p-55, 0.0, 0.0, 0.0,
     0x1.527bde7527623p-165, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7c2bb7270c983p-211, 0.0,
     0.0, 0x1.b80eb7313a2a7p-234, 0x1.6495bb3c33202p-525, 0.0, 0.0,
     0x1.acc5d5f6dcd16p-645, 0x1.58eaae3dba9d5p-697, 0.0, 0x1.4a3399fdf6ac3p-834,
     0x1.5a88aa3b76a2dp-65, 0x1.9f036c9ff0d69p-403, 0x1.e5e4868975c9fp-896, 0.0,
     0x1.624e62663aa8dp-463, 0x1.37361bbee7325p-558, 0.0, 0x1.bd9e1f2a631a1p-678, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.491e55f84a60dp-219, 0.0, 0.0, 0.0,
     0x1.c6c4090d09ea9p-392, 0x1.1105c4cadb4a1p-416, 0x1.a10d08cd4f92dp-549,
     0x1.26468759be5abp-121, 0x1.82d4393a1f27dp-263, 0x1.18465b9185954p-484, 0.0,
     0x1.304c6937a5d8bp-80, 0x1.c285ba4b86ca3p-626, 0.0, 0.0, 0.0, 0.0,
     0x1.ac00d1eff81aep-346, 0x1.2e8fffc31fdd2p-718, 0x1.3d60069b995d4p-128,
     0x1.d63bc92dc2822p-105, 0x1.d52afa62b91b7p-295, 0x1.5e88adf9a980cp-340,
     0x1.e0fac72ae907dp-806, 0.0, 0.0, 0.0, 0x1.1b5372e2f4a98p-137, 0.0,
     0x1.2b8f035c9aa6p-615, 0.0, 0x1.3784323028d34p-478, 0x1.5ee6f2d985ef2p-511, 0.0,
     0x1.e543f16834388p-157, 0x1.78698b850f8ddp-828, 0x1.14cbd2f80f7d1p-399,
     0x1.22ea7e4f0ee48p-855, 0.0, 0x1.8251a3a88b276p-619, 0x1.18fedb8a953ccp-31,
     0x1.c6115326c71b6p-528, 0.0, 0x1.1c6f8744fe726p-253, 0x1.f54ad2c117126p-215, 0.0,
     0x1.36904b9f1d281p-679, 0.0, 0x1.170fd35078a7ep-698, 0x1.fbe558e585e1ap-43,
     0x1.c1e5f07232649p-809, 0.0, 0x1.caa11c2f31ff7p-638, 0.0, 0x1.5f58b585ae04dp-68,
     0x1.2bd6f37027c22p-15, 0.0, 0.0, 0x1.de6bd7ba97808p-108, 0.0, 0.0, 0.0, 0.0,
     0x1.087d59c878e83p-211, 0x1.8f8fb4e783e27p-998, 0.0, 0x1.c591da50463b3p-450, 0.0,
     0.0, 0.0, 0x1.b86c94964aaa9p-751, 0.0, 0x1.7860e7a735117p-312,
     0x1.373a4a8edd40ap-751, 0.0, 0.0, 0.0, 0.0, 0x1.27d0da9daf7abp-927,
     0x1.ba1355e56508ap-337, 0.0, 0x1.3e977e6701525p-552, 0.0, 0.0,
     0x1.8713997ef6634p-126, 0x1.61a8903e48daep-47, 0x1.572cb1a0ec3b2p-275,
     0x1.9dbb74bbbce5ep-153, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d5e74de35041p-353,
     0x1.57c4965b21c2fp-417, 0x1.df188b27ae9d1p-624, 0x1.d1cc8b32e3a89p-822,
     0x1.d7f38fc20be9dp-978, 0.0, 0x1.2920d456d38e1p-776, 0x1.1f458ab469943p-369,
     0x1.e51eadc996132p-669, 0x1.a373b762cfdc5p-430, 0.0, 0.0, 0.0,
     0x1.9d2aaaeae70cbp-34, 0x1.0dd60cba0b5dep-589, 0.0, 0x1.4368ab8cb6846p-379, 0.0,
     0.0, 0x1.987f3e964d3b7p-684, 0.0, 0.0, 0.0, 0.0, 0x1.0abb3de870b96p-110,
     0x1.d8011b8e245bcp-453, 0.0, 0x1.fb4fc866989e3p-783, 0.0, 0x1.32d6df3817f91p-62,
     0.0, 0x1.7f6e3001f6351p-947, 0.0, 0.0, 0.0, 0x1.fd3bc9b99b298p-672,
     0x1.976f46d4e1026p-835, 0.0, 0x1.d7fc8685789a5p-682, 0.0, 0x1.ee08a72e5329ap-243,
     0.0, 0.0, 0x1.5ae1e95853911p-343, 0.0, 0.0, 0.0, 0x1.1b313d0aa575cp-905,
     0x1.f7676de68c688p-901, 0.0, 0.0, 0.0, 0.0, 0x1.3e1b1616606e5p-919, 0.0,
     0x1.7f373b63f38b6p-186, 0.0, 0x1.bc2d2ff1c2ae6p-371, 0x1.d1caf9c2c6b98p-929,
     0x1.0d4ddb7498a22p-147, 0.0, 0.0, 0x1.dc5e10bde5849p-684, 0x1.de4f51c979cfcp-374,
     0x1.85b082321e3fap-23, 0x1.4c67845d75d6cp-716, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.59dbc86bd9e1p-324, 0.0, 0.0, 0.0, 0.0, 0x1.b7f5dc7e5c307p-288,
     0x1.d4287c8f50e24p-357, 0.0, 0x1.f0fd2f2fc08f3p-791, 0x1.7ea15f3544ee7p-134,
     0x1.b187f8fae20e9p-73, 0.0, 0.0, 0.0, 0x1.19324daf1becp-799,
     0x1.9146c7ff9739fp-390, 0x1.b6d0cf9214016p-608, 0.0, 0.0, 0.0, 0.0,
     0x1.3a8aa8eacfe09p-776, 0x1.75ad715404ef1p-413, 0.0, 0x1.1eb3772a9ee98p-877,
     0x1.fee67f1ad9b33p-23, 0x1.b8ebcfa065a79p-4, 0.0, 0.0, 0x1.49b11c44bb47fp-684,
     0x1.c068db86ccd33p-14, 0.0, 0x1.64abd68d092bap-746, 0.0, 0.0, 0.0,
     0x1.d05af97f2e24fp-16, 0.0, 0x1.84991510b016cp-950, 0x1.650f9b645324cp-436, 0.0,
     0.0, 0x1.31c6c1f1988a5p-369, 0.0, 0.0, 0x1.dba8133ebffc3p-331, 0.0,
     0x1.fbda57dc5b9eap-1004, 0.0, 0.0, 0.0, 0x1.2e04ac0d62dd2p-366,
     0x1.354da7f3fae45p-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44d555efe111ep-527, 0.0,
     0x1.9e3aafe4def72p-638, 0x1.71d13e6147268p-544, 0.0, 0x1.0e4a4ff0d108ep-371,
     0x1.2f49ea65fa6bbp-136, 0x1.69e91200b9a37p-459, 0.0, 0x1.689b02ad388p-693, 0.0,
     0.0, 0x1.d59e4cc387055p-500, 0.0, 0x1.90175b0ac4ep-790, 0.0,
     0x1.05eb69566d829p-40, 0x1.a62d5bafd57c7p-919, 0x1.ccba1211cbbe9p-251, 0.0, 0.0,
     0x1.16e954bdb754fp-309, 0.0, 0x1.b0c01bd97a75bp-670, 0x1.a806d8f5171b3p-699, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5eaf7df58abdp-890,
     0x1.71a596e78376p-474, 0x1.ebb706f1ec128p-214, 0.0, 0x1.d55fce5a5837dp-597, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e04af520ab117p-950, 0.0, 0x1.a677f3aa068aep-482,
     0x1.c4cc65dbb9f67p-899, 0.0, 0x1.8dd3e88cfa653p-353, 0x1.6f5a5e1bbdb25p-877,
     0x1.716e5684a0ed5p-648, 0.0, 0x1.03a2fb0c07f0bp-184, 0x1.b80ebddbec8bap-927, 0.0,
     0x1.a254b47c2aa4cp-644, 0x1.d92c17925f731p-629, 0x1.f3641bf726386p-767,
     0x1.8fc5dbc785c54p-270, 0x1.23d0e06e2a49cp-655, 0x1.eb7ebd2c68352p-458, 0.0, 0.0,
     0.0, 0.0, 0x1.3b0807740a153p-933, 0x1.0cad60f5fc865p-890, 0.0, 0.0,
     0x1.e2167680ddc51p-467, 0.0, 0.0, 0.0, 0x1.2b7987c7c1ba3p-132,
     0x1.2c4952fdc98eap-594, 0.0, 0x1.af945a451785ep-1017, 0.0,
     0x1.a04eb3d1c376dp-419, 0x1.eae98ec139195p-200, 0x1.79fedb0ef94e4p-259,
     0x1.95fc8781efc28p-321, 0x1.bdd9c4cc68f8fp-740, 0x1.dbfbb87431e7p-440, 0.0,
     0x1.0fd6b20090593p-45, 0x1.f580ca4aaf17bp-364, 0.0, 0.0, 0x1.d1e4b03b39062p-802,
     0.0, 0.0, 0.0, 0x1.d639b27d87af1p-606, 0x1.65a1c2a1d0522p-349, 0.0,
     0x1.230fe19f8f5f4p-757, 0.0, 0x1.5038d4c8c2d32p-553, 0.0, 0x1.17ad4012311aep-196,
     0x1.cd67cae655992p-927, 0.0, 0.0, 0.0, 0.0, 0x1.7842d4224b2dfp-78, 0.0,
     0x1.621d58f7bb0ccp-359, 0.0, 0x1.a3dd400a77b73p-654, 0.0, 0.0, 0.0, 0.0,
     0x1.16c685b486023p-706, 0x1.a1dab4bbfc204p-579, 0.0, 0.0, 0x1.d15174df19d7p-67,
     0.0, 0x1.18ed079e02c98p-636, 0.0, 0x1.999edf7c928b8p-915, 0.0, 0.0,
     0x1.d09c541955b7fp-647, 0.0, 0.0, 0x1.58a04978954ap-80, 0.0, 0.0,
     0x1.1a2e90a5306d5p-1002, 0.0, 0x1.3b1360e8890ebp-184, 0.0,
     0x1.fab47a221c036p-147, 0x1.3b6d64d30226dp-905, 0x1.c1abf1c6dbb5fp-829,
     0x1.987b26a870fa6p-552, 0.0, 0x1.b92cedaedb4eep-258, 0.0, 0x1.669afc541984cp-829,
     0x1.3aff74a5c3ab9p-365, 0x1.92fa31dba374fp-835, 0x1.c3c82c2c1e104p-503, 0.0, 0.0,
     0x1.596f210866f78p-131, 0.0, 0.0, 0.0, 0x1.14ce7840ebbfbp-514,
     0x1.347d793ed5fd4p-968, 0.0, 0.0, 0.0, 0x1.48621705ad63ap-654,
     0x1.791b10cfc5bb4p-288, 0x1.7c5460abd2361p-498, 0x1.1e4b524ecb9fp-754,
     0x1.9aa48bee89b84p-678, 0x1.4ea67eab637a6p-493, 0.0, 0.0, 0x1.7fc63c341ffd6p-242,
     0.0, 0x1.c6700e238e3f5p-717, 0x1.267bed3e7b464p-78, 0x1.4de0a8f3ef869p-39,
     0x1.3ce7f7903b4cbp-130, 0x1.a3110f65158d8p-683, 0.0, 0x1.597a8ea2091f3p-256, 0.0,
     0x1.04c291c147ef4p-642, 0.0, 0x1.84fdc35b377ccp-121, 0x1.244f0063b0735p-159,
     0x1.bc45bca68aefbp-166, 0.0, 0.0, 0x1.d22b76d54855dp-170, 0x1.c4366c6528757p-682,
     0x1.b27c33cd17157p-398, 0x1.1c73d5453728p-794, 0.0, 0.0, 0.0,
     0x1.906d75fdb232p-857, 0.0, 0.0, 0x1.29cff96f2bbe5p-497, 0.0,
     0x1.5524d77ddd5ebp-872, 0.0, 0x1.b1ebe3ab285c2p-673, 0x1.2d65302a002ccp-180, 0.0,
     0.0, 0x1.9933465ffc0cfp-662, 0.0, 0x1.46794e3ba974cp-184, 0x1.512ad16c9b5cbp-192,
     0.0, 0.0, 0x1.0a99c7202bc3ap-470, 0x1.3152341d0a3fbp-624, 0x1.af639eb523bcfp-336,
     0.0, 0x1.2cec8890c2cfbp-553, 0x1.220680c15bf98p-999, 0x1.c7ae7c8ee379fp-66, 0.0,
     0x1.87f48abb5c2d9p-729, 0.0, 0x1.d16b4d1582251p-386, 0.0, 0.0,
     0x1.f25e00f81beb4p-265, 0.0, 0x1.ae71ddce383c2p-21, 0.0, 0.0, 0.0,
     0x1.94f503376bf4ap-347, 0x1.12f8ea6e3470dp-39, 0.0, 0x1.33e7363b6df5dp-12, 0.0,
     0x1.dea9e7b350307p-508, 0.0, 0x1.71022e02ecd84p-898, 0x1.b4054112fa14cp-826,
     0x1.b2ff565b0726ep-952, 0.0, 0x1.13208e2bb4c0bp-348, 0.0, 0.0,
     0x1.939d1c9339012p-998, 0x1.baaec4e729d7cp-602, 0x1.f26cb1a6262f4p-868,
     0x1.969f01422af1ap-808, 0.0, 0.0, 0.0, 0x1.2cd1308518f0ap-231, 0.0,
     0x1.2976112f29e48p-744, 0x1.b83d2799c1447p-943, 0x1.d74bde24dd03cp-782,
     0x1.a75b0034c7f9p-553, 0x1.2c4402e0c60acp-790, 0x1.85c341bd06a63p-641, 0.0, 0.0
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
            tmp1 = Sleef_finz_modfd1_purecfma(tmp0);
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
    printf("Sleef_finz_modfd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_modfd1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
