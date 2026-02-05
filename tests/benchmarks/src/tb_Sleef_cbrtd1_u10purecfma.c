/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd1_u10purecfma.c --function \
 *     Sleef_cbrtd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.b2e5b8a3449cbp-925, 0x1.9429b72ca580bp-983,
     0x1.4f737e5562379p-305, 0.0, 0x1.08f5ca5018084p-772, 0x1.77525bd21f593p-688,
     0x1.7d5d120995903p-204, 0.0, 0.0, 0.0, 0x1.a0b2bd6e35977p-471, 0.0,
     0x1.daa237e09843ap-680, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3decc8cb75746p-151,
     0x1.e25beba0f0ceap-641, 0x1.1b9856d0fe6dp-655, 0x1.5296a82d01b17p-122,
     0x1.0673dbc7d33d3p-85, 0x1.0841a664982dbp-1020, 0x1.5344c23f051abp-917,
     0x1.71bc7a68b6ab6p-699, 0x1.885064c377881p-238, 0.0, 0.0, 0x1.fa3798e617645p-917,
     0x1.a6cd748c3a63bp-181, 0x1.8951bdfacdf8p-539, 0.0, 0x1.5285867ce7493p-124, 0.0,
     0.0, 0.0, 0.0, 0x1.406ee2beb4be6p-621, 0x1.00cae04d4817cp-38, 0.0, 0.0, 0.0,
     0x1.f6fcb7267b875p-657, 0.0, 0x1.4adc7180e78fbp-107, 0x1.f43bf2c901ae5p-117, 0.0,
     0x1.14a79caf2ec83p-416, 0x1.52d2a7e5a5803p-338, 0.0, 0.0, 0x1.9195571eee144p-92,
     0x1.1954fef9fa243p-128, 0.0, 0.0, 0.0, 0x1.9e000e36407e9p-759,
     0x1.28aebb2bbf1fcp-580, 0.0, 0x1.c382f803980c9p-897, 0.0, 0.0, 0.0,
     0x1.e651edb774814p-790, 0x1.556eaa07717f4p-765, 0.0, 0x1.99cb449b8efdcp-357, 0.0,
     0x1.6245fa6b7d017p-697, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.beaf7267c5937p-368,
     0x1.01098d03c3c31p-910, 0x1.0d1737b190b09p-135, 0.0, 0.0, 0.0, 0.0,
     0x1.cc6ef91295721p-998, 0x1.5b3bec3b397c7p-940, 0x1.c8c22dea4b893p-115,
     0x1.895348eef63fcp-903, 0x1.9b71ed1db5f89p-256, 0x1.935791d6d611ap-748,
     0x1.bb888c6523336p-588, 0.0, 0.0, 0.0, 0.0, 0x1.27a1e41649ab9p-761,
     0x1.d44d4f826624bp-394, 0.0, 0.0, 0x1.c7214e39bdbddp-883, 0.0,
     0x1.e32889b78034bp-269, 0.0, 0x1.982ab7030e662p-126, 0.0, 0x1.42b8a6aec6687p-785,
     0x1.ad75891d7066ep-337, 0x1.728b754389fb1p-917, 0.0, 0x1.c1e4546abadcdp-1005,
     0x1.8cbd9e19240bdp-12, 0x1.ce6aa000554b8p-220, 0x1.c5c816d9c751bp-354,
     0x1.d834a8e7b9f3dp-703, 0x1.d83c65f99a74p-548, 0x1.5bb607894526ap-301, 0.0,
     0x1.4c1e415756b21p-473, 0x1.a07de5500705ep-775, 0x1.dccb071b5b616p-662, 0.0,
     0x1.e403adadd26c7p-346, 0.0, 0.0, 0.0, 0x1.421c50b560a65p-585,
     0x1.a5fb0dd63493ep-622, 0x1.1a5064ac09f3cp-298, 0.0, 0.0, 0.0, 0.0,
     0x1.6861e14a2409dp-65, 0.0, 0x1.ce4d8890bf80bp-947, 0x1.d4f82ff4bfc68p-697, 0.0,
     0.0, 0.0, 0.0, 0x1.fb11b9d663773p-852, 0x1.85d7558c35451p-801, 0.0, 0.0,
     0x1.e2feab5d96717p-210, 0.0, 0.0, 0x1.269b0cd888019p-62, 0.0,
     0x1.8cf061055d6b6p-586, 0x1.49b6eebbc210ep-182, 0.0, 0.0, 0x1.b1c56719dd99p-204,
     0x1.44c0110571f51p-274, 0x1.6725fd10152d8p-384, 0.0, 0x1.3a43c8fcb47p-881,
     0x1.74f1d3d400822p-447, 0.0, 0x1.bda01c70565b5p-383, 0x1.defd8b7e455fbp-799, 0.0,
     0x1.95330c1126a4bp-210, 0x1.19c9d82cf5ad4p-309, 0x1.e2e3cadf48dbdp-791,
     0x1.dec2893878c25p-544, 0x1.854137aade3cp-858, 0x1.87eaf2a0cafbcp-218,
     0x1.a02bcaefc7debp-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99c4146e3a828p-434,
     0x1.60e0e3e527c58p-112, 0x1.123c3f70d0bddp-385, 0.0, 0.0, 0x1.6644d7fdb205p-790,
     0.0, 0.0, 0x1.479ff2cea93e4p-598, 0.0, 0.0, 0.0, 0x1.49dffce186f15p-660, 0.0,
     0x1.4e61cafa4a3a5p-972, 0x1.9edd6a6999ebp-610, 0x1.cd70fcf7e65bap-1009,
     0x1.52fe502476b7bp-113, 0.0, 0.0, 0.0, 0.0, 0x1.af9eb6b326b21p-272, 0.0, 0.0,
     0.0, 0x1.5258657f125aap-238, 0.0, 0x1.70e9a601678f3p-381, 0.0, 0.0,
     0x1.a38bb90f6b6c3p-673, 0x1.59a8c44b3f45bp-1019, 0x1.0b8ac81f67452p-92, 0.0,
     0x1.25b11f259b939p-860, 0x1.da80defda8712p-879, 0x1.474e531cecdeap-607,
     0x1.d7fe7ed3a9ff3p-652, 0x1.13593ded08b79p-208, 0.0, 0x1.b365111eb4631p-577, 0.0,
     0.0, 0.0, 0x1.44522c6db43d5p-880, 0.0, 0.0, 0x1.ab3fb3632d17ap-865,
     0x1.fb3b5515a4945p-78, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a2937a95250bp-35,
     0.0, 0x1.a381a4cee352ap-360, 0.0, 0x1.45b7f118729c1p-326, 0x1.abe0eb37f5af8p-252,
     0.0, 0x1.25e391e347567p-604, 0x1.41586d051bcp-706, 0.0, 0.0,
     0x1.1ab858aefe419p-86, 0x1.d286a4486a3f8p-340, 0x1.5f2930866c41ap-698,
     0x1.978f9f5ffdfacp-910, 0.0, 0x1.e48f743822c3bp-950, 0.0, 0x1.0fe0f8509afddp-190,
     0.0, 0x1.1152fec0f561p-133, 0.0, 0.0, 0x1.ae5230b6b9743p-1008, 0.0, 0.0, 0.0,
     0x1.0bdfb57fe1208p-924, 0.0, 0.0, 0x1.a2fac89a8a2b6p-367, 0.0,
     0x1.6b7983d4d5f1ep-882, 0.0, 0x1.1acea8ed715d3p-696, 0.0, 0x1.6e6b90817ff8bp-575,
     0x1.751c605884c73p-204, 0.0, 0.0, 0x1.229b45bbf26aep-434, 0.0, 0.0, 0.0,
     0x1.0e4aaf744a191p-41, 0x1.bd49df78a0db6p-393, 0.0, 0x1.74918cf02bb62p-597,
     0x1.b7432a4392ed8p-236, 0x1.d0a87f2936fd3p-197, 0x1.a6e14fb141d06p-903, 0.0,
     0x1.d1a7b8fd86697p-697, 0.0, 0x1.1c5b0184886bp-735, 0.0, 0.0,
     0x1.bb62263b225ffp-264, 0.0, 0.0, 0.0, 0x1.b1f46884e456cp-616, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ec2ad91f63415p-505, 0.0, 0x1.5d7a70502f19cp-523,
     0x1.41f1fa4f6bf0cp-916, 0x1.d89f751b030dep-538, 0.0, 0x1.53a52d3fd5088p-918, 0.0,
     0.0, 0x1.895f78cd258c2p-198, 0x1.a458c99ca1299p-168, 0.0, 0.0, 0.0,
     0x1.7f7e2bc45de33p-1010, 0.0, 0x1.40c9b7483a9adp-223, 0x1.3c66326df1a1ap-1020,
     0x1.7965874ee6bb9p-867, 0.0, 0.0, 0x1.06b89e93bb3efp-580, 0x1.773f148161932p-91,
     0x1.ad3e1db0fe374p-365, 0x1.c2ddaeb47b63bp-821, 0x1.3c4557f0bdde9p-442,
     0x1.11b84e3c974d9p-821, 0.0, 0x1.c243d5b24e5dcp-161, 0x1.671f0c79bed2ep-135, 0.0,
     0x1.3a6eeaa0ab9f3p-948, 0.0, 0.0, 0x1.f71251b791981p-424, 0x1.fbe9eb623eb2p-376,
     0x1.ff639a1087d58p-234, 0.0, 0x1.99cfb5834da43p-7, 0.0, 0.0,
     0x1.2d7097f4c11fep-226, 0.0, 0.0, 0.0, 0x1.c81163b5c783bp-778, 0.0,
     0x1.6a51807529861p-86, 0.0, 0x1.6246c3684df56p-62, 0.0, 0x1.e3d719ff9d763p-776,
     0.0, 0x1.58ca8b504de71p-347, 0x1.00e4258fadb7cp-789, 0.0, 0.0,
     0x1.976bc9f3e7f54p-606, 0x1.dacf5b0967dfep-458, 0x1.9ab422a964662p-629, 0.0,
     0x1.04ff6cf85d951p-968, 0.0, 0.0, 0x1.3d52076b950c9p-331, 0x1.28fcd3ba49e7dp-71,
     0x1.ae13ce2718148p-918, 0x1.9d12f86b0dcdbp-351, 0x1.1a1995a6be769p-642,
     0x1.0398420b1d119p-801, 0.0, 0.0, 0x1.b23be42f73d8dp-675, 0x1.69b9d2a5651f8p-277,
     0x1.5e44c201ea9c4p-102, 0x1.fbaab55c4591bp-53, 0.0, 0.0, 0.0, 0.0,
     0x1.aea0b7513ec57p-465, 0.0, 0.0, 0x1.7eb939a10daa2p-216, 0x1.90b9eba1625bdp-294,
     0x1.4fe1d495e7c12p-679, 0.0, 0.0, 0.0, 0.0, 0x1.2c883104ff08bp-525, 0.0, 0.0,
     0.0, 0x1.b74566e9de451p-793, 0.0, 0x1.42334d7745b04p-332, 0.0, 0.0,
     0x1.5f195d4c0a9f3p-416, 0.0, 0x1.afaf0298e26f1p-690, 0.0, 0x1.af623407b5173p-399,
     0.0, 0x1.ef66005f94b5ap-355, 0x1.7dbd21a4ff63ap-564, 0x1.2c9e398a6cf6dp-341, 0.0,
     0.0, 0x1.2adca8db7a75ap-53, 0.0, 0x1.c20dd0c8545a2p-89, 0x1.5e18d3bf0fcb5p-961,
     0.0, 0.0, 0x1.a6ca85ac7d4bbp-697, 0.0, 0x1.0c770d86d0db9p-367,
     0x1.dcfe1caa4e202p-521, 0x1.82f5b7062a549p-884, 0.0, 0.0, 0x1.291e9b734faecp-442,
     0x1.b2e486ccb02abp-839, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cef96ca9d9bc6p-504, 0x1.fdf63f9bcb398p-732, 0x1.41f23b683f79p-457, 0.0,
     0x1.ea2d8ce91da73p-201, 0.0, 0x1.d1607b64e9b46p-362, 0x1.badae527727aap-853, 0.0,
     0x1.35a8ad638440bp-787, 0.0, 0x1.3eb810332171bp-690, 0.0, 0x1.45057d18a5503p-140,
     0.0, 0x1.c1750b8fa6034p-826, 0.0, 0.0, 0.0, 0x1.c6ef2d2ca296ep-877,
     0x1.aaa083719da68p-1004, 0x1.d53901c99417dp-724, 0x1.64bb95d736ed2p-65, 0.0,
     0x1.ffabb92d5ad12p-945, 0x1.2cf753f6b96d3p-324, 0.0, 0.0, 0.0,
     0x1.4bcccbedcafddp-593, 0.0, 0x1.e4d495052db94p-427, 0.0, 0.0,
     0x1.1c5da7cca73fdp-379, 0x1.fe5c0793b0139p-789, 0.0, 0x1.fe94e6ca9e49p-388,
     0x1.acba9868dda7ap-765, 0.0, 0.0, 0.0, 0x1.e9e538a0cd2dbp-34, 0.0,
     0x1.1dfb8315dd7c6p-380, 0x1.ad71232d1ec79p-940, 0.0, 0.0, 0x1.6d8e515e4f0e8p-913,
     0x1.4caeff8d3a2b1p-899, 0.0, 0x1.d994c78b3f34fp-898, 0.0, 0x1.e172684d3487cp-993,
     0x1.4e19bdd544e8ep-149, 0.0, 0.0, 0.0, 0.0, 0x1.abe4c095103dcp-834,
     0x1.2ed23dadef6fbp-583, 0.0, 0x1.e086b1287e31ep-766, 0.0, 0x1.902dc7d6357dep-19,
     0x1.4ffd7e905057cp-107, 0x1.e1fe781b6a4d6p-136, 0x1.177e884f387c1p-119, 0.0,
     0x1.c8eb1eb035a02p-356, 0x1.699d23c19f969p-978, 0.0, 0.0, 0.0,
     0x1.5b0475d2e4a6ap-618, 0.0, 0x1.18e107f82cff8p-515, 0x1.8581254a9fe1dp-205,
     0x1.71702af0b6e4p-530, 0x1.53b6935d036a4p-165, 0.0, 0.0, 0.0, 0.0,
     0x1.78a3e51cfef09p-710, 0x1.9b9fcfc122e05p-812, 0x1.95ca494234ba2p-981, 0.0, 0.0,
     0.0, 0x1.37eaad640669ap-250, 0.0, 0x1.98a038c6cc8e8p-606, 0x1.beb7a2973ccc5p-544,
     0x1.4b8eded62bc74p-1022, 0x1.4acfc62759252p-533, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.18df0545ec11fp-85, 0.0, 0.0, 0x1.18ee4f65579d7p-979,
     0x1.972931e1260e6p-699, 0.0, 0.0, 0x1.beb2aab0c8525p-542, 0.0, 0.0,
     0x1.e3c7320df13p-385, 0.0, 0x1.a2c409c1ff3c2p-622, 0.0, 0x1.08daf54cc683cp-202,
     0.0, 0x1.78dac14fc5db5p-671, 0.0, 0x1.477cf54a4d389p-742, 0x1.23abea532149cp-821,
     0x1.ed932d95820fap-359, 0x1.a6c2b11cc9a74p-630, 0x1.3bd4d23d07cd5p-1,
     0x1.f96e6f0875f32p-91, 0x1.ed931f7ac90b7p-316, 0x1.eaa9b24ec806fp-505, 0.0,
     0x1.7ce066576633bp-363, 0.0, 0.0, 0.0, 0.0, 0x1.4c74a6cde743ap-654,
     0x1.5fd2e5e8b9131p-859, 0x1.f246f6a228f33p-219, 0.0, 0x1.8e0a739f3e29ep-988,
     0x1.e51ef5350e20ap-774, 0.0, 0x1.8a5b20a4a74efp-388, 0.0, 0x1.2e3520cbaa946p-518,
     0x1.ea72b094a5977p-345, 0.0, 0x1.d6da41003b402p-465, 0.0, 0.0,
     0x1.ebf4e95c21fcbp-248, 0x1.e5dbce82799c4p-458, 0.0, 0x1.630a04215addp-508, 0.0,
     0x1.f3fa1667b6dcp-317, 0x1.b2586f1eb0603p-116, 0x1.692b35fb79846p-602, 0.0,
     0x1.8365bd2193a96p-481, 0x1.e83661a9ef26dp-431, 0.0, 0.0, 0x1.d9718a6dc5898p-14,
     0.0, 0.0, 0.0, 0x1.4f65ec2170b1ap-719, 0.0, 0.0, 0x1.733b17fbdfb24p-337,
     0x1.e4a906b7adb31p-940, 0.0, 0.0, 0.0, 0x1.db33149ba0812p-199, 0.0,
     0x1.e03fe4081f502p-63, 0x1.a20bcc7851967p-541, 0x1.cd939d5de3036p-29, 0.0, 0.0,
     0x1.406c724b38678p-720, 0x1.ff8f30c1cb33bp-646, 0x1.a28097298d23cp-91,
     0x1.d85564eca95b9p-800, 0x1.df46998c2801ap-550, 0.0, 0.0, 0.0, 0.0,
     0x1.3d52228ce573bp-192, 0x1.20f34612a9b7cp-843, 0x1.97d039e5b9ae3p-327, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7aeb77dd76ed7p-129, 0x1.6766385961026p-739,
     0x1.9ae20f2a517a1p-221, 0.0, 0.0, 0x1.ca3300a4ba6e5p-147, 0.0,
     0x1.a79cdd8c1fd77p-386, 0.0, 0x1.704e7e737dcf8p-239, 0x1.8e63c3ca56021p-713,
     0x1.9cebb182f25d6p-25, 0x1.21a725dce9023p-947, 0.0, 0x1.61561d9a42139p-452,
     0x1.d4093798e7fdap-824, 0.0, 0x1.46c6de920841ep-803, 0.0, 0x1.26d214069e6bbp-881,
     0x1.e7f6fe8f2c71dp-181, 0.0, 0x1.c39c5c55aa10ep-510, 0.0, 0.0,
     0x1.9161672044e8dp-374, 0x1.72e846998e09bp-722, 0x1.481656dc366e7p-803,
     0x1.902e5df5c072p-815, 0x1.018eb2a95e7a5p-159, 0x1.be5d47259e04dp-73, 0.0, 0.0,
     0x1.825afbe28bdd7p-24, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.362043829432ep-841,
     0x1.486b06dd90008p-842, 0x1.7ccf090cecf93p-48, 0.0, 0.0, 0x1.79f594bf6ab35p-545,
     0.0, 0.0, 0x1.582914ccab797p-576, 0x1.91c5b2c021c7cp-860, 0.0,
     0x1.3395f2f2dee7cp-888, 0x1.f03504f3be56fp-597, 0.0, 0.0, 0.0,
     0x1.bc20bc9261bdcp-930, 0.0, 0.0, 0x1.27f90d5fc7ad4p-796, 0x1.08ab91cd15c7dp-817,
     0.0, 0.0, 0x1.40112f1307006p-819, 0x1.90ed6ad5d9652p-200, 0.0,
     0x1.2fdd243bcf892p-585, 0x1.65c902f7577p-903, 0x1.394f3e23052bp-127,
     0x1.21454f12ebce9p-287, 0x1.5c99f6a96a712p-587, 0x1.a7aa41f571669p-127, 0.0, 0.0,
     0.0, 0.0, 0x1.79fffdb5dc3fep-699, 0.0, 0.0, 0x1.2c8afa693bb7p-133,
     0x1.a231be2bf48ecp-700, 0x1.a6e36d6c1926cp-229, 0x1.7a4fb9a4b3706p-447, 0.0,
     0x1.670c7bd4acc45p-187, 0x1.e6e49a9a5d7d2p-600, 0.0, 0x1.a96512869a02p-196,
     0x1.992adde0e8e3p-224, 0x1.90b102f14293fp-52, 0.0, 0x1.fc8735fac4128p-739, 0.0,
     0x1.1e6b74c0988c7p-220, 0.0, 0.0, 0x1.76a4b0c6d564fp-721, 0x1.5d6499b570196p-663,
     0.0, 0x1.39c00da1de74cp-991, 0.0, 0x1.165820a479fdfp-611, 0.0, 0.0, 0.0,
     0x1.cf530eff4e49dp-132, 0.0, 0x1.eabc57e12a93fp-403, 0x1.80e1df25e583fp-907,
     0x1.1c7ea1fbf4cabp-790, 0x1.8fbec74160f24p-968, 0.0, 0.0, 0x1.92c39589c471bp-721,
     0x1.dc33128fe27c9p-58, 0.0, 0.0, 0x1.884832808edfdp-245, 0.0, 0.0, 0.0, 0.0,
     0x1.be1cd08fe8725p-383, 0.0, 0.0, 0.0, 0x1.f44992d7b62cp-634, 0.0, 0.0,
     0x1.f7d96e57524aep-698, 0.0, 0x1.3ad5e63df3b9ep-471, 0x1.fbbc60a9333p-76,
     0x1.d8cd49f3c71e4p-166, 0x1.12131be120a9dp-432, 0.0, 0.0, 0x1.8e5bd8069f60ep-368,
     0.0, 0x1.2bf60f939e461p-210, 0.0, 0x1.3ef1600bbca3bp-921, 0.0, 0.0, 0.0, 0.0,
     0x1.e7fc6c5418c37p-126, 0x1.1bc57e4b0dcc2p-286, 0.0, 0x1.2ecc5fb695e0bp-13,
     0x1.bdd5659fe3b0fp-136, 0.0, 0.0, 0.0, 0.0, 0x1.3962c7633e689p-80,
     0x1.3560c5e8010c7p-762, 0x1.18ea4640dd058p-936, 0x1.54cc8d8278f2dp-568,
     0x1.0d53776f76a3ep-156, 0.0, 0x1.b5c4849c0378cp-885, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ec7a8098fe812p-887, 0x1.b135d68736565p-218, 0x1.13813b791189fp-929, 0.0,
     0.0, 0x1.1ee052426b787p-494, 0x1.3edededbc921fp-945, 0.0, 0x1.9b234ddf49338p-170,
     0.0, 0.0, 0x1.71960445f79d7p-128, 0.0, 0.0, 0.0, 0.0, 0x1.88808e6bc13e2p-222,
     0x1.753ea9e2f774p-230, 0.0, 0x1.60cc2f940357ap-173, 0x1.1a789834f9d31p-864,
     0x1.61a61d92a9dc2p-994, 0x1.70a257b375232p-455, 0.0, 0.0, 0x1.2d786ee8a1533p-868,
     0x1.fd71634edb581p-90, 0x1.a612b61582498p-988, 0.0, 0.0, 0.0,
     0x1.58c4ba82112d7p-14, 0x1.f66a490669432p-618, 0x1.25fa19cac08ep-557, 0.0,
     0x1.bef3a51a571a8p-1009, 0x1.045b02a1bee2dp-52, 0.0, 0x1.9cd7f535c11ep-134,
     0x1.19d0561e61036p-861, 0x1.f8ac64fe1d426p-505, 0x1.d70321430e8b2p-910, 0.0, 0.0,
     0x1.b1c99b5ffbd3cp-729, 0x1.55674e4b1567bp-693, 0.0, 0x1.a1400c482a7f3p-990,
     0x1.459a1d5565b54p-57, 0x1.a5bcf0b6aa976p-569, 0.0, 0.0, 0.0,
     0x1.092fbcdba58fbp-648, 0x1.72525e153b2d6p-910, 0x1.eee02e010dbd4p-325,
     0x1.2238ec5f0a9e8p-361, 0x1.fb1c648679318p-128, 0x1.a746bc2636e7fp-111,
     0x1.bb8b992831138p-712, 0x1.bc2c6bfdc4752p-422, 0.0, 0.0, 0x1.352e2b8d60dd1p-337,
     0x1.4db9ed776061dp-394, 0.0, 0.0, 0x1.b5aa99642f2bap-90, 0.0,
     0x1.6db1531e25af4p-45, 0x1.80a169ca98b64p-151, 0x1.6a21f07d8ef0ap-888,
     0x1.800cb3874609dp-692, 0.0, 0.0, 0x1.39271291bd67bp-413, 0x1.3ef3046e6a1e1p-496,
     0x1.c48f41774eff8p-365, 0x1.603f91f2de344p-951, 0.0, 0.0, 0x1.752e5a3ca4302p-852,
     0x1.d7da572c70379p-29, 0x1.40ee9bb24b933p-349, 0.0, 0.0, 0.0,
     0x1.f3f7a6928f432p-935, 0x1.ccb5f375fbdbap-1006, 0x1.3da0af97efa75p-109, 0.0,
     0.0, 0.0, 0x1.fbaf8164f0e75p-615, 0x1.f93ee5abb03f6p-436, 0.0,
     0x1.f8e7f8f30b83dp-994, 0x1.fa5b6ee7f2318p-927, 0.0, 0x1.2fd23efba5f3fp-441, 0.0,
     0.0, 0x1.b02302e75fep-282, 0.0, 0x1.602b00e0278c5p-49, 0x1.33cab567dd82ap-471,
     0.0, 0x1.c21696c7ebfd5p-741, 0.0, 0x1.9af3aa178593dp-316, 0.0,
     0x1.7cea24a18ef9bp-184, 0x1.4c762d6293606p-657, 0x1.2e081afe1599cp-905,
     0x1.e3b3f12f6155ap-104, 0x1.b693b9f80055cp-110, 0x1.3ef89bae45bd9p-741, 0.0,
     0x1.37722d4232f8dp-281, 0.0, 0.0, 0.0, 0x1.210527c93f9cbp-790, 0.0,
     0x1.298ec52185a75p-158, 0.0, 0x1.b30649e701878p-952, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a440b793e5f42p-383, 0.0, 0x1.2028ed4b55ed7p-506, 0x1.5869514b84bc1p-489, 0.0,
     0x1.7b82cd744f7e1p-768, 0.0, 0.0, 0x1.ebc68411116fbp-550, 0.0,
     0x1.aff94ed591d35p-70, 0x1.9077cf688137dp-827, 0.0, 0.0, 0x1.eb75404dfc99bp-363,
     0x1.f7f642ba8d7d1p-25, 0.0, 0x1.a94ff290466e1p-109, 0x1.edad0078efcd4p-612,
     0x1.6abba6f9356bbp-294, 0x1.78d058ed4ca71p-771, 0.0, 0.0, 0x1.3ac043e136fbfp-728,
     0.0, 0x1.baa990632e59cp-103, 0x1.64a20f44d2853p-589, 0x1.b495a43f3e6b4p-47,
     0x1.d0966f34fd478p-481, 0x1.5d71db5d1f4efp-905, 0x1.de953e79bcba3p-863, 0.0, 0.0,
     0.0, 0.0, 0x1.6c40ff358ad52p-501, 0.0, 0x1.61444fa8f017bp-884, 0.0, 0.0, 0.0,
     0x1.3dc5e3c001306p-330, 0x1.dd05d4a3b9e3fp-928, 0.0, 0.0, 0.0, 0.0,
     0x1.1827cbad07989p-254, 0.0, 0.0, 0x1.1a644d8a7f21p-339, 0x1.040fa95086831p-7,
     0x1.e6d67574f0141p-191, 0.0, 0x1.be975497d2571p-594, 0x1.1671ef56223f7p-411,
     0x1.4963dc1b6bcb1p-2, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cbe92b02afa06p-931, 0.0,
     0x1.617cbcb14ff12p-499, 0x1.a61f80b02d66ap-333, 0x1.6fdf1e2d5faa2p-472, 0.0,
     0x1.cc4193f076e64p-196
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
            tmp1 = Sleef_cbrtd1_u10purecfma(tmp0);
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
    printf("Sleef_cbrtd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtd1_u10purecfma bench acc %la\n", global_bench_acc);
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
