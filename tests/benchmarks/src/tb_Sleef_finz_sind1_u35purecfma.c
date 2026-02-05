/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind1_u35purecfma.c --function \
 *     Sleef_finz_sind1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.fbb7082958ee9p-230, 0.0, 0x1.b179fd6c7009fp-484, 0.0, 0.0, 0.0,
     0x1.632f8f8ed7af7p-592, 0x1.e9d5201262254p-352, 0x1.e93c5e7908e89p-639, 0.0, 0.0,
     0x1.9496ed6f50899p-863, 0.0, 0.0, 0.0, 0x1.7e067c99551b9p-587,
     0x1.ba417e67c2851p-637, 0.0, 0x1.7137ffe87e5bdp-366, 0.0, 0.0,
     0x1.7e6d711b6e5a3p-437, 0.0, 0x1.7c62301d5d24ap-673, 0.0, 0x1.d49419a433fcbp-635,
     0x1.8c4ae9bc8030bp-117, 0.0, 0.0, 0x1.4dde99447e447p-109, 0.0, 0.0,
     0x1.bdfc69bb48f3p-1006, 0x1.a0c52103ffc4dp-547, 0x1.d5a98ef6a9eeep-381, 0.0,
     0x1.e5182da8cb2c9p-444, 0.0, 0x1.47f1847f345e8p-375, 0.0, 0x1.1733141b5908fp-584,
     0.0, 0x1.9c3d8c24b6a3cp-504, 0x1.025828ad7111p-930, 0x1.327fffc1b0507p-461,
     0x1.56688001cd2aap-39, 0x1.95ff4cd77608fp-914, 0.0, 0.0, 0x1.51510fac5f9cdp-985,
     0x1.b4c7b6880355p-68, 0.0, 0x1.e3f396ff5a6c3p-215, 0x1.1a6962f41684fp-706,
     0x1.415b390c61956p-784, 0.0, 0.0, 0x1.4bb7867ec4f44p-847, 0.0, 0.0,
     0x1.1b2a6a85d664dp-796, 0x1.6aa3e764dd2a6p-523, 0x1.861c65c345a89p-966,
     0x1.6dc5854572f81p-878, 0.0, 0.0, 0x1.c97fa5edc4e63p-130, 0.0, 0.0, 0.0, 0.0,
     0x1.dfe17a484cd62p-488, 0.0, 0x1.96e905db16455p-541, 0.0, 0x1.31707aff56bfbp-723,
     0.0, 0.0, 0.0, 0x1.e5afa40a4518p-815, 0.0, 0x1.6cedb82993633p-499,
     0x1.5d1b13da8c781p-646, 0.0, 0x1.4f7f00020bc0dp-938, 0.0, 0x1.b3b85af2f162dp-584,
     0x1.5116b05d3f1f3p-283, 0x1.8dde39fec9411p-959, 0.0, 0.0, 0x1.94882e2143329p-171,
     0x1.db14096d5b665p-525, 0x1.9dd827b98861dp-552, 0x1.16b5f2fb5a82fp-803, 0.0, 0.0,
     0.0, 0.0, 0x1.534ea173838f3p-811, 0x1.a366b9704325dp-289, 0.0,
     0x1.19b44c061a427p-360, 0.0, 0.0, 0.0, 0x1.a83847606de2dp-417, 0.0, 0.0, 0.0,
     0x1.7238ad53d953dp-81, 0x1.2d522f95b2e53p-133, 0x1.efb451e0a7dcfp-832,
     0x1.093cac17da451p-150, 0x1.292db796b629fp-711, 0x1.f33977205e605p-1, 0.0,
     0x1.015a8e9dba93bp-363, 0.0, 0x1.7afdaa1201f31p-131, 0x1.bd12f9d6b88a6p-950,
     0x1.d325ae6b7f76p-483, 0.0, 0x1.0ee772c2314a5p-1012, 0.0, 0x1.03dbdb269ab66p-57,
     0.0, 0.0, 0.0, 0x1.70335be0a0f23p-816, 0.0, 0.0, 0x1.778366b819c6cp-493,
     0x1.6cbbc93029496p-104, 0.0, 0x1.c541033020a11p-530, 0x1.64a648a18bcd5p-64,
     0x1.69cf9706a1696p-907, 0.0, 0.0, 0x1.e0f051af6b19ep-684, 0.0, 0.0, 0.0,
     0x1.56292ef69c85bp-956, 0x1.29f9ba76dbf54p-749, 0x1.83271b20e7591p-729, 0.0, 0.0,
     0x1.f181958bfe629p-634, 0.0, 0x1.b5b65d1c450dep-548, 0x1.b982a21f30af6p-634, 0.0,
     0x1.5a0c13e71040bp-676, 0x1.ed88f6792983bp-901, 0.0, 0.0, 0.0,
     0x1.8234497408b02p-320, 0.0, 0x1.b2f6130cb0e4dp-484, 0.0,
     0x1.699a273c78bbep-1015, 0x1.04a3ab882a014p-925, 0.0, 0x1.64a2479b5d137p-53,
     0x1.9fe9cb76ed2bdp-312, 0x1.e67b232bea5bep-757, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ddef7d05ce569p-155, 0.0, 0x1.dd0b25e9aba92p-54, 0.0, 0.0,
     0x1.ecc81fc13d374p-415, 0x1.d22ce7775846ap-589, 0x1.790a027f877fep-832,
     0x1.f3bb6e43bee57p-912, 0.0, 0.0, 0x1.aa22efd62e7b2p-335, 0.0, 0.0,
     0x1.26804a6b4fadp-117, 0.0, 0x1.c24fab88bdf6ep-172, 0.0, 0.0, 0.0,
     0x1.3333e9d2da105p-801, 0.0, 0x1.f691968d755e7p-929, 0x1.a6bb42a922fdep-159, 0.0,
     0x1.fe654a1864debp-325, 0x1.9eb2d656d0a64p-230, 0x1.f50090fb1b352p-557, 0.0,
     0x1.022af6f0d8783p-764, 0x1.86e7907a05363p-732, 0.0, 0.0, 0x1.f5a7b546c5429p-826,
     0.0, 0x1.80c237a37977cp-1005, 0.0, 0.0, 0x1.4dc205f5e6a1dp-453,
     0x1.6c0c048fcf8fp-441, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6b20b3bdf338p-214,
     0x1.96f31a51bfa7p-98, 0.0, 0x1.b9a4c5bfffb98p-875, 0x1.796d655bd4c42p-85, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d769136c6a2e6p-461, 0x1.2fa2212f8358p-989, 0.0, 0.0,
     0x1.5d4bf41ca0a78p-630, 0.0, 0.0, 0.0, 0x1.f656f49ba2d7ap-432, 0.0,
     0x1.c980464bd1a46p-1020, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4317924de530ep-491,
     0x1.b81f277c82491p-251, 0x1.f799992052297p-711, 0x1.33a903a3df04p-124, 0.0, 0.0,
     0.0, 0x1.b1b1d95b3bfbap-1007, 0.0, 0.0, 0.0, 0x1.649f6442d26fp-866, 0.0, 0.0,
     0.0, 0.0, 0x1.27d59e5cc5f79p-398, 0.0, 0.0, 0x1.68bb1d12c1cbdp-146,
     0x1.36317442959aap-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d553fd973f6e3p-673, 0.0,
     0.0, 0x1.2f8dd7f85f581p-917, 0.0, 0.0, 0x1.6d1e47ab76083p-303,
     0x1.b260d6858f814p-786, 0.0, 0.0, 0.0, 0.0, 0x1.c87fe22eb1c88p-348,
     0x1.e0527a5e24d78p-695, 0x1.8d148e00761d9p-23, 0.0, 0.0, 0x1.528a0eaa76b82p-53,
     0x1.d8ddf93a2a5cp-805, 0.0, 0x1.9b629400c8529p-963, 0.0, 0x1.250ff4bb497aep-654,
     0x1.76091a2c83b16p-813, 0x1.3a43e68a99f72p-141, 0.0, 0x1.93267acdca586p-492, 0.0,
     0x1.a2322272b74edp-698, 0x1.6f710a3ae0b59p-543, 0.0, 0x1.5e3491e3264c7p-333,
     0x1.164975adfa2e5p-274, 0x1.a24d77708647ep-318, 0.0, 0.0, 0x1.ea7eaa5e4b18ep-544,
     0x1.f081d8e138ea7p-366, 0.0, 0x1.21141f972f2p-670, 0x1.771893589ac4p-957, 0.0,
     0x1.b410fb2ed80c4p-322, 0.0, 0.0, 0.0, 0x1.e512922956701p-781,
     0x1.0608bbe723b13p-940, 0.0, 0x1.8ef1d4d98aedbp-602, 0.0,
     0x1.c48d72171ff48p-1001, 0x1.50a708ac7bd0ap-606, 0x1.92636e2dc745p-587,
     0x1.d31f52c57bdf1p-863, 0.0, 0x1.e0a3b265ad905p-990, 0.0, 0x1.2d9b88adae429p-750,
     0.0, 0.0, 0.0, 0x1.6fc6077a7f768p-683, 0x1.d8b646d78074ep-374,
     0x1.4a9995349f549p-267, 0.0, 0x1.dd827fdd5b92dp-833, 0.0, 0x1.75fa55cff751cp-948,
     0.0, 0x1.a20913f824543p-487, 0x1.4aedec30a6c09p-807, 0.0, 0.0, 0.0,
     0x1.20c37da19cd88p-136, 0.0, 0.0, 0x1.ac428a0a4f168p-928, 0x1.aa347f7a22d3p-622,
     0x1.fe7370870a686p-642, 0.0, 0.0, 0.0, 0x1.757c075befb26p-319, 0.0,
     0x1.fec0cca47b1a7p-607, 0.0, 0.0, 0.0, 0x1.1cef68d764224p-547, 0.0,
     0x1.198317291d89cp-829, 0x1.0422bc56177afp-4, 0.0, 0x1.8887068d68a47p-913,
     0x1.c348a5945f878p-502, 0.0, 0.0, 0x1.35740659c26c2p-916, 0.0, 0.0,
     0x1.bd7c9924c46d8p-266, 0x1.c935a17a1e561p-380, 0x1.65da53bb97d6ap-892,
     0x1.9d7dd39acafd6p-502, 0x1.551146aca8519p-998, 0.0, 0.0, 0x1.e8b8364c1bb0dp-959,
     0x1.4b05d35b10dbdp-684, 0x1.319889f55af4bp-100, 0x1.abdbe75bba53p-82, 0.0,
     0x1.662ac0e08c6fep-35, 0x1.1eddc6e6701fcp-866, 0x1.13b4f02754aap-623,
     0x1.f37e19ae9dbfp-276, 0x1.6561a5e9f3b05p-154, 0.0, 0.0, 0.0,
     0x1.77b0f76a45f9ep-405, 0x1.1cb67fffe1f0ep-481, 0x1.3598cd2d2ea55p-198,
     0x1.65aead26b062dp-429, 0x1.d317b8013e124p-1011, 0.0, 0.0,
     0x1.8c6db9db8e129p-757, 0.0, 0.0, 0x1.2c017d51adde5p-480, 0x1.2943578ea0b2dp-692,
     0.0, 0.0, 0x1.18a0c5315dba8p-400, 0x1.bc94bb4943212p-117, 0x1.fa28de2550268p-589,
     0.0, 0.0, 0x1.ea3da05cf9e8bp-327, 0x1.21ef653f38acep-702, 0x1.3d6a19892613dp-138,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91f63fe6afcedp-960, 0.0, 0.0,
     0x1.7a8f010748037p-516, 0.0, 0x1.d27457a4ab717p-741, 0x1.683d080bc610fp-596, 0.0,
     0.0, 0.0, 0x1.106df7c9f6b76p-52, 0x1.0e81224d3c5e1p-971, 0.0, 0.0, 0.0,
     0x1.7ab6411fe6d5fp-914, 0.0, 0x1.5059573ac19e7p-290, 0x1.524ccb05ec769p-830, 0.0,
     0.0, 0x1.162ac879bb922p-878, 0x1.e9ddc21cf6828p-132, 0.0, 0.0, 0.0,
     0x1.3173b4159f7bep-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.32abe9f692d39p-161,
     0.0, 0.0, 0.0, 0x1.2b74490b01311p-237, 0.0, 0x1.f84cf7ad54a3p-974,
     0x1.275cd628662dep-738, 0x1.fbf72c5e63e48p-795, 0.0, 0x1.e63b3d37b0455p-49,
     0x1.7a8a5632259d7p-661, 0.0, 0.0, 0x1.b8974dee40c15p-429, 0x1.f3c8a3c9b9b61p-810,
     0.0, 0.0, 0.0, 0x1.04de6f78ea8a4p-73, 0.0, 0.0, 0.0, 0x1.1436f25fd5472p-721, 0.0,
     0x1.fb4b898867fbap-472, 0.0, 0x1.9d66132533a94p-739, 0.0, 0x1.bcc66331505ccp-185,
     0.0, 0x1.24451c47abe78p-938, 0.0, 0.0, 0x1.5dc7c199b7495p-428, 0.0, 0.0, 0.0,
     0x1.0606933ffddd1p-55, 0x1.d7049abc6f91ep-752, 0x1.9ffeb5e3e2472p-205, 0.0,
     0x1.ff604f0e97f2ap-668, 0x1.a8c1d9b9ca625p-315, 0x1.f363c0a428dcap-946, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.92a11ff4f7d12p-1017, 0.0,
     0x1.7c4c00fa72befp-884, 0.0, 0.0, 0.0, 0x1.e000a897e5452p-1000, 0.0,
     0x1.5934f7ea0deap-684, 0x1.6ff25a1f8f0b8p-655, 0x1.a7760c079628fp-770, 0.0,
     0x1.80f07c7a2e6c9p-108, 0x1.b81fbacbc66e7p-891, 0.0, 0x1.37535f5b555f1p-282, 0.0,
     0.0, 0x1.bf9370396afb7p-180, 0.0, 0.0, 0.0, 0x1.a1ffa74fd5cb5p-670,
     0x1.9dd94ee58e49ap-278, 0.0, 0x1.1090ace10bf2bp-106, 0x1.4afdece133413p-338,
     0x1.0662f92411f5p-738, 0x1.649839112551fp-479, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14e78642e8e21p-535, 0.0, 0x1.1e3ab92ef0e0cp-377, 0.0, 0.0,
     0x1.4c096ee1e7da4p-865, 0.0, 0x1.4d7fcaad13ce2p-891, 0.0, 0x1.54b42d962455p-321,
     0.0, 0.0, 0.0, 0.0, 0x1.d72c0945b30e2p-116, 0x1.c4afa7e78a4b9p-896, 0.0, 0.0,
     0x1.53a2e1568a472p-674, 0x1.bddf8fda07061p-362, 0x1.232f8e7889527p-240,
     0x1.b37ac35861d9bp-607, 0x1.06c89a8ab4744p-390, 0.0, 0.0, 0x1.d9a4d0f12dc7dp-504,
     0x1.99618cebcf1e2p-42, 0.0, 0.0, 0.0, 0.0, 0x1.ed795ad4d53dfp-702,
     0x1.e0bd36bf3b3ep-616, 0x1.bc1b8d399813dp-357, 0.0, 0.0, 0x1.31ef59a02a724p-437,
     0x1.395b7066dd89ap-516, 0x1.97224dcd303fp-593, 0.0, 0x1.5340cb044f19fp-819,
     0x1.2adde6936282dp-723, 0.0, 0x1.07523d9ba9e4bp-239, 0.0, 0.0,
     0x1.da953eba86c8ep-948, 0x1.5abea8cdf016ep-731, 0.0, 0.0, 0.0, 0.0,
     0x1.ac0d741f23bd7p-135, 0x1.bf73963efe9c4p-384, 0.0, 0.0, 0x1.4cb478ffa3a65p-252,
     0x1.bee7a2349ea59p-242, 0.0, 0x1.649d476d104ap-438, 0.0, 0x1.62f4813fecb7cp-883,
     0x1.e0e8f5e501fe2p-769, 0x1.6fafffdf1e4c9p-511, 0.0, 0x1.b83493129648p-948,
     0x1.b7616077944adp-652, 0.0, 0x1.2dc9d44222b27p-781, 0.0, 0.0,
     0x1.b83f3db86c5d8p-890, 0x1.e128eb63ce313p-1006, 0x1.9768a92e90f4ap-162, 0.0,
     0.0, 0x1.e254dcf9f4537p-376, 0.0, 0x1.b868a4366d7acp-254, 0x1.a3b5724f8e9f9p-687,
     0x1.37b8a2e1dab2p-371, 0x1.4f530d09a2bddp-107, 0x1.77b268caf0bc4p-664,
     0x1.7e3867c15f14dp-690, 0x1.44fd433d30c81p-887, 0.0, 0x1.bbd9c26853a65p-1014,
     0x1.cb28c93c76e33p-798, 0.0, 0x1.2266db906b948p-5, 0.0, 0.0, 0.0,
     0x1.337c45d686857p-695, 0.0, 0.0, 0x1.21601c6a7693p-774, 0x1.1e0787e1275ccp-580,
     0x1.235450211e867p-1009, 0.0, 0.0, 0.0, 0.0, 0x1.9f02ee65117dbp-1010, 0.0, 0.0,
     0x1.1180a19784275p-273, 0.0, 0x1.8149a5f59a1ep-199, 0.0, 0x1.e3bf3fdcc15b2p-630,
     0x1.12d218d08de43p-96, 0.0, 0x1.a93b3741582afp-13, 0x1.82032724e5d88p-101,
     0x1.50846be3d56b8p-135, 0.0, 0.0, 0x1.0be64ebcf178ap-793, 0.0,
     0x1.eaff9a62747c6p-793, 0x1.dfc83587c7f13p-456, 0.0, 0x1.c3f3b5710249ep-596,
     0x1.67d1ac2c53583p-732, 0x1.89e4b565803d7p-869, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.faedd692adeaap-447, 0x1.6ffc2ea85cb2dp-42, 0.0, 0.0, 0x1.5125fb82e3e25p-227,
     0.0, 0x1.d2050ef080a58p-621, 0x1.ed16812783b21p-866, 0x1.3161a8417e243p-148,
     0x1.b72a3aaccd60fp-984, 0x1.baf30e2ae6ec4p-506, 0.0, 0x1.91a4db6b550d8p-214, 0.0,
     0.0, 0x1.dea964ed62b75p-482, 0x1.62eab39c1ef6cp-655, 0.0, 0x1.3f94b83b7a813p-458,
     0.0, 0x1.a933e15c04c05p-204, 0x1.9780e556ab653p-301, 0x1.38e3d52584286p-211, 0.0,
     0x1.bd07b07eddbf7p-483, 0.0, 0.0, 0x1.b901931533cd8p-663, 0x1.54937158a7015p-22,
     0x1.0608fa7e44a7cp-430, 0.0, 0.0, 0x1.78f21339806b4p-787, 0x1.a25e1e974eb8cp-600,
     0.0, 0.0, 0x1.ac71ac92ab30bp-540, 0x1.0662f410e64a6p-235, 0.0, 0.0,
     0x1.7f1c292299f2dp-208, 0.0, 0.0, 0.0, 0.0, 0x1.5697a2a85d5bp-899, 0.0, 0.0, 0.0,
     0x1.1518ffae63822p-104, 0x1.2b28b8e78502cp-809, 0x1.bc0aaecb9de47p-925, 0.0, 0.0,
     0x1.f912732ebe2aep-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e866903db2f4p-979,
     0x1.a80d60a3c064ep-283, 0x1.a099f698845a3p-389, 0.0, 0.0, 0x1.e61890833fbbcp-32,
     0x1.69fa59d507e86p-741, 0x1.9618c9fcc1e61p-694, 0x1.b800f57f68d61p-490, 0.0,
     0x1.d19819c7b3623p-591, 0x1.6331a15270c9fp-312, 0x1.68a18d36090ebp-890, 0.0, 0.0,
     0.0, 0x1.61f096ab6307fp-956, 0x1.0b66b30df848ep-110, 0x1.872ae29d0b742p-335,
     0x1.f7b88ee7cd89dp-458, 0.0, 0.0, 0.0, 0x1.44f44995de1eap-204,
     0x1.7bc643520e46p-905, 0x1.4341610bc7d7bp-249, 0x1.24712dab8cfe1p-204, 0.0,
     0x1.edc7a271e4bc9p-671, 0x1.94570441d800ep-208, 0.0, 0x1.e6c312e8cfbbdp-138,
     0x1.6451b0dfcdacep-214, 0x1.f048aa697f651p-4, 0.0, 0.0, 0.0, 0.0,
     0x1.48c0996144f17p-783, 0.0, 0x1.bbb1fc5da2c9ap-516, 0.0, 0x1.8bf7d063e83f5p-787,
     0.0, 0.0, 0.0, 0x1.d799f4421a377p-191, 0.0, 0x1.33747ca3a5b91p-182, 0.0,
     0x1.81ffd079b971ap-688, 0.0, 0.0, 0.0, 0x1.a3e0efee8ae0dp-160,
     0x1.9787375079f2p-669, 0x1.3aaa103b1bf84p-479, 0.0, 0.0, 0.0,
     0x1.667f84cd02c5ap-207, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2e1a381231cep-279,
     0x1.06d93c154066fp-961, 0.0, 0.0, 0x1.5e45bb3b41c7dp-711, 0.0, 0.0, 0.0, 0.0,
     0x1.eff6b1ca0df3bp-357, 0.0, 0x1.bd18dbbe990b8p-457, 0.0, 0.0,
     0x1.3415e85968e4p-405, 0x1.19ad072da0049p-990, 0x1.d7ee0bdf2461fp-618, 0.0, 0.0,
     0.0, 0x1.a2c66c9ff203ep-69, 0.0, 0x1.a5683a74a04aap-763, 0.0, 0.0, 0.0,
     0x1.1038be97bb23bp-481, 0.0, 0x1.2be108ddbdb9p-426, 0.0, 0x1.f0f53a86c0967p-93,
     0.0, 0.0, 0.0, 0x1.01a9deff993bdp-439, 0x1.bc0b8e29d068bp-572, 0.0,
     0x1.dcecfce563778p-61, 0.0, 0.0, 0.0, 0x1.99a7c7972c258p-923, 0.0, 0.0, 0.0, 0.0,
     0x1.13096e74555cep-49, 0.0, 0.0, 0x1.3d0be1b53afa4p-946, 0x1.2383bb45ee757p-161,
     0.0, 0x1.a42a09afc5758p-721, 0.0, 0.0, 0x1.6e1e0b4ad9257p-956,
     0x1.8cf9b4374b1acp-632, 0.0, 0.0, 0x1.1b9493b400749p-350, 0.0, 0.0,
     0x1.48b5a6a4402b2p-672, 0x1.d169008fbdf57p-781, 0x1.ae91971259b4p-370, 0.0,
     0x1.e7f3a3b71e66ep-997, 0.0, 0x1.0009fb31b88dp-214, 0x1.5d84be0440678p-469, 0.0,
     0.0, 0x1.1c6f2e705d34dp-254, 0x1.9e91ce2a4c83cp-86, 0.0, 0.0, 0.0, 0.0,
     0x1.bc518ce9418f1p-352, 0.0, 0x1.1c751e6c3565ap-233, 0.0, 0.0,
     0x1.851e3d72792fdp-507, 0.0, 0.0, 0.0, 0x1.4f42b73208639p-521, 0.0,
     0x1.e1a521921ab9cp-578, 0x1.0e7fe3e563c34p-637, 0.0, 0.0, 0.0,
     0x1.781e5d3e76262p-188, 0.0, 0.0, 0.0, 0x1.53a0056156832p-448, 0.0,
     0x1.3f13efed414aep-517, 0.0, 0x1.4ef52a8c217d4p-997, 0x1.4bd55369e6c64p-747,
     0x1.330ca822bd28dp-110, 0x1.adc524f363f7dp-645, 0.0, 0x1.f5b21352cc35bp-306,
     0x1.67174d960e20bp-316, 0.0, 0x1.b17619ff26025p-955, 0.0, 0x1.b122e7d11a153p-785,
     0x1.f141785b18c4cp-244, 0.0, 0x1.c625a8a4a84ep-299, 0x1.2d698c98f0ee9p-937,
     0x1.0bff189140799p-355, 0.0, 0.0, 0.0, 0.0, 0x1.054cc6d936e32p-323, 0.0,
     0x1.d0f2685e0392cp-609, 0x1.6fe4463c43c23p-200, 0x1.af58df91b2684p-122,
     0x1.84e67894ba00ap-37, 0x1.ae85dade68bc5p-189, 0.0, 0.0, 0.0,
     0x1.4d81982a087f9p-413, 0x1.b1baeff5bc646p-476, 0.0, 0.0, 0.0,
     0x1.4ecf5676f8989p-180, 0.0, 0x1.a411faef037a9p-948, 0.0, 0x1.baa9816a2d8a9p-494,
     0x1.e56d845c40ce4p-543, 0x1.8db2ec47c39bfp-84, 0.0, 0.0, 0x1.0d7042c36159ap-257,
     0x1.e0be31f76050ep-746, 0.0, 0x1.4863148ca67f2p-574, 0x1.47c2610467795p-555,
     0x1.b7100ea872075p-639, 0.0, 0x1.230e688e73624p-98, 0x1.846bc3854dfb2p-760,
     0x1.7e83cbe2ac024p-321, 0.0, 0x1.7ca2a4c129aafp-119, 0.0, 0x1.b7284944fa3f7p-443,
     0x1.18f94f2f760abp-208, 0.0, 0.0, 0.0, 0x1.74b308b389adep-330,
     0x1.f595bb271c3a6p-131, 0x1.e007c98cdeaf5p-656, 0x1.ada9bc7888af7p-956,
     0x1.5afcdddeb85cap-32, 0x1.b151d90fc967bp-261, 0x1.8f97325540028p-1022,
     0x1.f8c45bd0a1246p-78, 0.0, 0.0, 0.0, 0x1.2cf7b5707900dp-255,
     0x1.cce16eee9c765p-849, 0.0, 0.0, 0.0, 0x1.35499d5b334b9p-334,
     0x1.13f5408d50c0fp-538, 0x1.7d736b4579e6bp-152, 0x1.c29bdbcc3a51p-847,
     0x1.7ec1a7631efd9p-415, 0.0, 0x1.dd0113fda361dp-479, 0x1.3d33c21f0cd92p-463,
     0x1.6bc19331c9d3ap-401, 0x1.1bd467a48f9e7p-240, 0.0, 0x1.5aeb8af57715cp-378,
     0x1.d0fdabd3010e5p-48, 0.0, 0x1.90cfa2704011ep-171, 0x1.0590768240d58p-449,
     0x1.82557a0aeda76p-203, 0.0, 0x1.af669ac5b081ep-860, 0.0, 0x1.923804d447d3ep-969
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
            tmp1 = Sleef_finz_sind1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sind1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sind1_u35purecfma bench acc %la\n", global_bench_acc);
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
