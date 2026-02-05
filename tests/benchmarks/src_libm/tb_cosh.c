/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_cosh.c --function cosh --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.3dd5059350fbfp-687, 0x1.73068a5a99b4ap-628, 0.0, 0x1.5440114448222p-857,
     0x1.9ef401e3a700bp-433, 0.0, 0x1.2613a4cfe796p-390, 0x1.3c849629266bdp-675,
     0x1.fcf2efe77baffp-193, 0x1.20f3d6c09119cp-711, 0.0, 0x1.8b7a47eebb731p-975,
     0x1.f80f580bfe218p-76, 0x1.1a68dab058398p-577, 0x1.2c307bcfc7b0fp-439, 0.0, 0.0,
     0x1.9be06723079d6p-157, 0.0, 0.0, 0.0, 0x1.94db2a43c0b69p-353,
     0x1.b875ab0afb7e9p-724, 0.0, 0x1.aea7fb5da08f7p-587, 0x1.caeaf8764b3a8p-407,
     0x1.dd0581e657306p-764, 0.0, 0x1.f6869b56e4e7dp-562, 0.0, 0x1.b6fc3b259bd9ap-591,
     0.0, 0x1.e42d9b8877573p-389, 0x1.c0cd085135ee3p-31, 0x1.b36a5d51a8ce5p-269, 0.0,
     0.0, 0x1.bb947f37851dfp-755, 0x1.91f1ebeda62b6p-579, 0.0, 0x1.5bcc47b66f915p-298,
     0x1.02229c073eedep-366, 0.0, 0x1.f8a16b72ef7ccp-22, 0.0, 0x1.1c72685158749p-271,
     0x1.73fe0bf58a357p-730, 0.0, 0.0, 0.0, 0x1.db0069bf8734p-1017,
     0x1.49d2e149026e4p-567, 0x1.e0a4b6f2cf567p-371, 0x1.8d973a1ab2bfdp-476,
     0x1.b4a2580344c06p-610, 0.0, 0.0, 0.0, 0x1.ed91ffff84522p-875,
     0x1.c83931a6e44a3p-662, 0x1.5e726e46b4fe2p-184, 0x1.725931d518eb1p-960, 0.0,
     0x1.beee7b0c17c23p-725, 0x1.1a491db8a2389p-877, 0.0, 0x1.acabfd91c20f3p-1000,
     0.0, 0.0, 0x1.1bb7e8e791c7p-596, 0.0, 0x1.95edb80809593p-417,
     0x1.9030b4670abc5p-1020, 0x1.71f76b92136b7p-269, 0x1.e18478758c5c5p-116,
     0x1.0a768963a92a7p-524, 0x1.788de9d014537p-407, 0.0, 0x1.dfe31f52a3a62p-593, 0.0,
     0x1.fefedaa665784p-931, 0.0, 0.0, 0x1.5964efccee5d1p-442, 0x1.f9f1459f2b282p-605,
     0x1.cf67a4ef29333p-554, 0x1.4d83b45308344p-176, 0.0, 0.0, 0x1.84f306e34de57p-400,
     0.0, 0x1.924b33290b433p-110, 0x1.24fb32a96a9f6p-396, 0.0, 0.0,
     0x1.9620fce58b01p-670, 0x1.8a38dd0ace10cp-566, 0.0, 0x1.7a353289fd682p-920, 0.0,
     0.0, 0.0, 0.0, 0x1.44f03c994d7abp-722, 0.0, 0x1.f03e43d7a233p-667, 0.0,
     0x1.0759e74efbdd1p-419, 0.0, 0.0, 0x1.9dce9839fec19p-700, 0x1.67e019fbc67bap-3,
     0x1.c85a3b5d76846p-337, 0.0, 0.0, 0.0, 0x1.fba7cc942a01ep-367, 0.0, 0.0,
     0x1.294fe5fd92f06p-731, 0x1.f6e6f9026c6dcp-993, 0.0, 0.0, 0.0,
     0x1.da1fb626a6989p-412, 0.0, 0x1.bf9a3804f068fp-687, 0x1.1bec129d4c378p-877, 0.0,
     0.0, 0x1.885dd99cfb01ep-1009, 0.0, 0x1.e9ad49df06ea1p-424, 0.0, 0.0,
     0x1.1a3e83e624ef6p-686, 0.0, 0x1.a6fcfa26a3b64p-691, 0x1.e5f7559d3da8fp-481,
     0x1.95d402065a51cp-742, 0.0, 0x1.02d75d424998dp-615, 0x1.714a175873df3p-517,
     0x1.fc72f0d1dc639p-434, 0.0, 0.0, 0.0, 0x1.7aa1cf718273bp-67,
     0x1.0039fdd97d066p-585, 0x1.29419b1394a17p-524, 0x1.3d1c707ae7b9cp-294,
     0x1.8ca32d6a3e349p-589, 0x1.2ad1573093e76p-457, 0x1.6db33b387e65p-327, 0.0,
     0x1.bc33a2ec5b242p-283, 0x1.11ea002024c1ap-199, 0.0, 0x1.40df8fd8c3523p-505,
     0x1.a8eb77a425f12p-191, 0x1.95f57a022d1d7p-350, 0x1.da29ec9c1770cp-395, 0.0, 0.0,
     0.0, 0.0, 0x1.fdf6e8fe22854p-674, 0x1.3eb45f1fa6de8p-840, 0x1.2c302448956b5p-917,
     0x1.9dfb51dd80cep-630, 0x1.0f227283431ebp-860, 0.0, 0x1.4dd25d8a3ae64p-99,
     0x1.0465380b582f9p-913, 0x1.1fae08866c89bp-383, 0.0, 0.0, 0x1.6edc9da4b7b13p-183,
     0.0, 0x1.90eac33fd5074p-875, 0.0, 0.0, 0x1.a5bccb6a6d71cp-208,
     0x1.acc01d59c1c35p-374, 0x1.827f9bc2285d3p-984, 0.0, 0.0, 0.0, 0.0,
     0x1.1562967cfa181p-126, 0x1.5111394844551p-188, 0x1.7f762b4bd53f5p-818,
     0x1.c7e5235fb0cc6p-108, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82a43c476503ep-269,
     0.0, 0x1.72c27e6394e19p-276, 0.0, 0.0, 0.0, 0x1.774d29f41fc78p-601,
     0x1.dc6c02e72e19ap-462, 0.0, 0x1.42c58d38c582ep-686, 0.0, 0x1.779d14a253b1p-279,
     0.0, 0x1.77339cfb99464p-625, 0x1.47e6000ebe83bp-61, 0x1.ff5c87eb60f61p-913,
     0x1.a7b3dc0c25326p-75, 0x1.9588818804f61p-354, 0x1.802056fa8fe0fp-873, 0.0,
     0x1.0440c721d7765p-717, 0x1.0c88da085d2aep-929, 0x1.1fa6204542f78p-797,
     0x1.a468f8aeb01e4p-450, 0.0, 0.0, 0.0, 0x1.273f5381eecbdp-626, 0.0,
     0x1.bc24a4a61a5c8p-876, 0.0, 0x1.0fc517e615657p-958, 0.0, 0x1.b7f035467af2ap-877,
     0.0, 0.0, 0.0, 0.0, 0x1.13a8f19260ba6p-721, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d2a61852b153ep-955, 0.0, 0.0, 0x1.aae397c3d4afbp-811, 0.0,
     0x1.04aa6f4e65864p-461, 0.0, 0x1.d141a3279a587p-758, 0x1.24305c03ee989p-326, 0.0,
     0x1.d4b0ad5d53615p-608, 0x1.be980d3c08cb8p-216, 0x1.bd6ee73e8f0c7p-304, 0.0,
     0x1.b0229ea0bbf32p-220, 0.0, 0x1.0e5f60853f57ep-376, 0.0, 0.0, 0.0,
     0x1.aa5fe3978f276p-503, 0x1.7df2f2ab8f424p-639, 0x1.29f224c4ee7ecp-843, 0.0,
     0x1.01ff53c6d9cd7p-407, 0.0, 0.0, 0.0, 0.0, 0x1.88d49d6c3ba0ap-380, 0.0, 0.0,
     0x1.b7edf8a77ca27p-750, 0.0, 0x1.ec7b61011d4f4p-388, 0.0, 0.0, 0.0, 0.0,
     0x1.e08c0e4fccb15p-988, 0.0, 0.0, 0.0, 0x1.202f62436ab37p-235,
     0x1.6cdc77b5d71c3p-649, 0.0, 0.0, 0x1.d908ce7b2bdb4p-415, 0.0, 0.0,
     0x1.ba849c9e559a9p-857, 0x1.dfe77452392b3p-897, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ce9503451535p-866, 0.0, 0.0, 0.0, 0x1.fac1ca24acd87p-960, 0.0, 0.0,
     0x1.a4ac58d01ce23p-28, 0.0, 0x1.77938e3f93deap-125, 0.0, 0x1.017232b5f4935p-685,
     0x1.292354ddef6f2p-351, 0x1.903ed72283583p-334, 0.0, 0x1.32068b07dfe89p-357,
     0x1.dfae07b8f0ee1p-247, 0.0, 0x1.c52b57385a5aap-218, 0x1.b65273f067bbcp-637, 0.0,
     0.0, 0x1.c2f51628c549ep-462, 0x1.c9c5b4b314ea9p-833, 0.0, 0x1.a74e58f03f78dp-683,
     0x1.d5db5dfb46a4dp-920, 0x1.cacfe3cae1ed3p-435, 0.0, 0x1.3a5d940fa1b91p-225,
     0x1.cf3b956c50a7ep-240, 0.0, 0x1.80ba1eb1c5594p-30, 0x1.ebc6cdae3e745p-956, 0.0,
     0x1.40c5da11ddeb8p-675, 0x1.3c3b4d898665ep-837, 0.0, 0x1.c1077818c1e4cp-19,
     0x1.8dba37cafb64cp-598, 0x1.6dbeb6316d429p-244, 0x1.550193f3cd57ap-52, 0.0, 0.0,
     0.0, 0x1.fd407811f9384p-89, 0.0, 0x1.d480aa3c8de8dp-976, 0.0,
     0x1.eff9fd97b486dp-781, 0x1.6c65e9c2854afp-285, 0.0, 0x1.57b3bfc93ae9dp-986, 0.0,
     0.0, 0.0, 0x1.b80ad6208687fp-591, 0x1.1f6d3db56f921p-622, 0x1.bb879c544a278p-445,
     0.0, 0.0, 0.0, 0x1.2c9a73cdab44ap-130, 0x1.c56ab8eb174b8p-272, 0.0,
     0x1.c11a343ffe9eep-702, 0x1.10475efa5dd8cp-236, 0x1.b77629c65714dp-786, 0.0,
     0x1.0327782f35efep-538, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.582998ddf11dbp-913,
     0.0, 0x1.3bbc2d1f259edp-578, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87b9631b819a6p-957, 0.0, 0.0, 0.0, 0x1.6021268dea76p-679,
     0x1.3a56b30cd171cp-204, 0.0, 0x1.304dfbe61af4bp-610, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8256e7ce3745fp-846, 0.0, 0.0, 0.0, 0x1.68a51a2e0eb73p-676,
     0.0, 0.0, 0x1.f59cbe7f3393p-812, 0.0, 0x1.dc31af8dfa862p-591, 0.0, 0.0, 0.0,
     0x1.9f1e9ef73bdbdp-25, 0x1.e1f99c9328b8fp-652, 0x1.2c1df1f56eb42p-569,
     0x1.aacd9219a9f98p-293, 0x1.0d69c10f6817ep-923, 0x1.5c584f5b26f91p-46,
     0x1.f6db93351d125p-666, 0x1.93fac384e346dp-606, 0.0, 0.0, 0.0,
     0x1.8da9cf63dbb48p-758, 0x1.91e76c8496ffep-83, 0.0, 0x1.5a05039efbc6fp-638, 0.0,
     0x1.c4dbe09bf3af4p-400, 0.0, 0x1.86f042c546181p-441, 0x1.a1666a883df1ep-591,
     0x1.5a2b835d8c7acp-717, 0.0, 0.0, 0x1.21fb95e5173f8p-422, 0.0,
     0x1.1ed583ec234d1p-101, 0.0, 0.0, 0.0, 0.0, 0x1.e382a6cf29f8ep-173,
     0x1.87eae1e56a588p-774, 0.0, 0x1.0dc547a6b04a5p-86, 0.0, 0.0,
     0x1.3ddaf0b298df8p-423, 0x1.442ad0846a901p-553, 0.0, 0.0, 0x1.f959104fea9b3p-27,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e76167b4dde1p-171, 0x1.821dcfcb7d9e5p-566,
     0x1.29a39cd689ff3p-319, 0x1.fd80c38713d77p-308, 0.0, 0.0, 0x1.5eeb418d324ccp-751,
     0.0, 0.0, 0x1.9fbe27c80bb12p-103, 0.0, 0x1.2678c218797c6p-815,
     0x1.84082cc3d9c06p-282, 0.0, 0x1.f1c01d74acb1cp-198, 0.0, 0.0,
     0x1.de5d163fbbcdfp-278, 0x1.867d292d58e2ap-428, 0.0, 0.0, 0x1.5f6e305e9f803p-497,
     0.0, 0x1.15c34bcb130dp-926, 0x1.1f9741965cd79p-604, 0x1.09178d2c8e782p-890, 0.0,
     0x1.7922ad09b74ep-499, 0x1.5dc21f31b34c8p-397, 0x1.5e434dc6e678dp-365, 0.0,
     0x1.ea307aff833a6p-252, 0x1.e9cd57db32cf6p-179, 0.0, 0.0, 0x1.f10cc598133c7p-8,
     0x1.bcd4556161f11p-921, 0x1.0b0d9d77010ecp-663, 0.0, 0x1.4b11943521849p-263,
     0x1.8b9f48e3d1e62p-511, 0x1.5b19afb71b8d5p-871, 0.0, 0.0, 0x1.d6d1a682cb95dp-845,
     0x1.6d11e7a3a21eap-241, 0.0, 0x1.69637bacaf00fp-759, 0x1.cd9c5b4257193p-974,
     0x1.54388249c6e37p-848, 0x1.25c1dd50857afp-927, 0x1.39e965ee6d566p-525,
     0x1.24ead7d51b993p-512, 0x1.639ec1cb94969p-198, 0x1.ad712f887ce35p-381,
     0x1.8f802f1f92b6fp-81, 0x1.1b0ffb97f5bfep-163, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.33c593007a19p-119, 0x1.0d6d7c03800c4p-955, 0x1.bc7a75f3828f6p-301, 0.0, 0.0,
     0x1.85adc91c0624fp-619, 0.0, 0x1.947ae282e92a5p-32, 0x1.8df1883af9dfcp-466,
     0x1.038e1e1cc941ep-471, 0x1.d8572e40e4441p-925, 0x1.0937dff8888cdp-591, 0.0,
     0x1.e338406f91a14p-598, 0x1.55a22175b5bc9p-839, 0.0, 0x1.94f119777a1b9p-52, 0.0,
     0x1.5f3361214641ep-495, 0x1.ff7467685795cp-583, 0x1.22a37312cb907p-150, 0.0,
     0x1.37360567ab857p-809, 0x1.0a64bbfeaa2efp-334, 0.0, 0.0, 0x1.1c27c08811a95p-491,
     0x1.db337d5be64cbp-552, 0x1.7ff57c19be77bp-791, 0x1.ed352c3e48ff1p-604, 0.0,
     0x1.636a080e66bd1p-545, 0.0, 0x1.61f8a3695dc03p-522, 0.0, 0x1.7d2882df329c5p-269,
     0x1.e8bb36a528cafp-861, 0.0, 0x1.3f7261dd9e1f4p-709, 0x1.8e97423c2fb6fp-983, 0.0,
     0x1.22b8072aa5bf6p-307, 0.0, 0.0, 0.0, 0x1.9dc42c896de42p-39,
     0x1.5e117f84e0c2dp-621, 0x1.e2d5c3fca5eadp-611, 0x1.99cf35fa8dab8p-307, 0.0,
     0x1.e68502ce44c25p-479, 0x1.b68354d9d5eecp-701, 0x1.4295eb2b0fa15p-984,
     0x1.93350b8f6e046p-855, 0x1.6bb380b532fc6p-384, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3e4ebce06b69fp-364, 0x1.abcddd5271259p-108, 0.0, 0x1.fb7c69557f482p-636, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8b8bc867582dbp-997, 0x1.e459773e666a1p-835, 0.0,
     0x1.a4426cd7c52aep-9, 0x1.9c218ead12cadp-669, 0x1.447dcd7768634p-859, 0.0,
     0x1.931bb5f58c47fp-253, 0.0, 0.0, 0.0, 0x1.23f7d5e67d94ap-31,
     0x1.08081c3e8899fp-841, 0.0, 0x1.5fec1ea643b9p-141, 0x1.665cf7290cd2cp-592, 0.0,
     0.0, 0x1.d7269014dd66dp-21, 0.0, 0x1.e3766ca84155fp-443, 0x1.344e16fa304f8p-861,
     0.0, 0.0, 0.0, 0.0, 0x1.f07fa2fd11935p-118, 0.0, 0x1.f4ab4f69c57dcp-51,
     0x1.0cd511ba06c1dp-120, 0.0, 0x1.22ef6fccb5ab9p-692, 0.0, 0.0, 0.0, 0.0,
     0x1.78e86ab4c162dp-748, 0x1.ee1514dfa4ffap-18, 0.0, 0x1.65d01a075ef96p-563,
     0x1.84c1b125d64d4p-736, 0x1.f33f99d720efap-174, 0x1.9ff2557bb4dddp-972,
     0x1.8bcda003bb253p-437, 0x1.102ec818723dp-563, 0x1.3ef5508f53e43p-123, 0.0, 0.0,
     0x1.17d0241ed8347p-1015, 0.0, 0x1.6c5f31caf3d11p-723, 0.0,
     0x1.1a8478c702b02p-477, 0.0, 0.0, 0x1.c9afaccca9fffp-179, 0x1.49f99079f4d81p-54,
     0.0, 0x1.eaf8586c4240bp-810, 0x1.c887151fddee5p-590, 0.0, 0x1.53f3aa20d36a6p-937,
     0x1.4a25670a76aefp-731, 0x1.34f761fb26a5cp-981, 0x1.bfc7be051e95p-598, 0.0,
     0x1.ee263d8cdb4ebp-78, 0x1.96b518988ea55p-529, 0.0, 0x1.84fdb0a04c2eep-1012,
     0x1.0639ff0fe787ep-483, 0.0, 0x1.3043478b3c0fbp-410, 0.0, 0.0,
     0x1.766842a5adb56p-220, 0.0, 0.0, 0.0, 0.0, 0x1.2cad10e87f75bp-847, 0.0,
     0x1.36c752b7c17f1p-900, 0.0, 0x1.3f515560a5b5dp-450, 0x1.a3a2307ac45d6p-524,
     0x1.c1f43bfc56142p-525, 0.0, 0x1.1fd075d5a2cddp-636, 0.0, 0.0,
     0x1.ea55fb9864eb3p-742, 0.0, 0x1.5777ac50e40adp-568, 0.0, 0.0, 0.0,
     0x1.b82b24fd6482ep-562, 0x1.d0517bb543a75p-328, 0x1.e8125a85501aap-583,
     0x1.6bf2e6c077062p-852, 0.0, 0x1.c59a7d6d2156bp-1003, 0x1.87293ef7343a6p-160,
     0x1.40ef89a493db3p-590, 0.0, 0x1.2a46f10f15caap-1016, 0.0,
     0x1.aa4b0a898deaap-651, 0x1.d4c4d1b2772b1p-954, 0.0, 0.0, 0x1.802a52aadbb5cp-211,
     0.0, 0.0, 0x1.3ec0183564851p-370, 0.0, 0.0, 0.0, 0x1.f91161d48a7dp-179, 0.0,
     0x1.fc00ffbed2095p-873, 0.0, 0x1.5f68214e9233dp-949, 0.0, 0.0,
     0x1.50bbdfbf3af91p-961, 0x1.191f65048356fp-362, 0.0, 0x1.03fb2d797916bp-485,
     0x1.672cc11f5803dp-616, 0x1.c86d9b1e35c7fp-291, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7aded0223e509p-797, 0.0, 0.0, 0x1.359d64ebd5f4cp-13, 0.0, 0.0,
     0x1.259d88ce76f89p-761, 0x1.7d1cb2909c888p-310, 0x1.56a383a53049fp-1006, 0.0,
     0x1.c686bd89ed77p-923, 0.0, 0.0, 0.0, 0x1.811384be8f0a1p-643,
     0x1.020e289eba24dp-858, 0.0, 0x1.8a34b9753e728p-940, 0x1.8e24155ff977ep-721, 0.0,
     0x1.89fe95d8bbb74p-126, 0.0, 0x1.0a4f528399cfcp-586, 0.0, 0x1.e3dc1894c0f64p-716,
     0.0, 0x1.9f5319160da3fp-479, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d6aeba822826p-597, 0.0, 0x1.43b66bc45bf75p-187, 0x1.1e481a32eced2p-923,
     0x1.1791345697a0dp-884, 0x1.a6a92060c1a92p-979, 0.0, 0.0,
     0x1.c78dfc0a8b93ap-1021, 0x1.e409e5a73cbbdp-646, 0x1.0d7f054f7302bp-872,
     0x1.4d26f20cd0291p-300, 0.0, 0.0, 0x1.56511fac02ebdp-220, 0x1.e12e2f3b47b0bp-295,
     0x1.487d04a1d1dfdp-639, 0x1.47451ab00185cp-865, 0x1.f37fe13368286p-645,
     0x1.7da83d6dab08bp-912, 0.0, 0x1.86b146d7c625ep-179, 0x1.2966c681f9551p-308,
     0x1.29e2b44248ea9p-267, 0.0, 0.0, 0x1.27aa490573672p-854, 0x1.35e193f504f0dp-165,
     0x1.8db702895f2f2p-944, 0x1.f48c35971f8a2p-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c2369f61d063p-698, 0x1.fd495e6bc98e5p-91, 0x1.4e189c3c26f04p-251,
     0x1.a7e75830d8bf4p-955, 0.0, 0x1.b2a65686fc764p-879, 0x1.fa70a8ba2430dp-119,
     0x1.dde1b957639b6p-674, 0.0, 0.0, 0x1.3341dfe9dcfebp-800, 0x1.fc2cf5d01767p-133,
     0x1.fb52789942f08p-174, 0.0, 0x1.15d33c1fb0918p-204, 0x1.1c07dce2bddbdp-875,
     0x1.a1f52ad6b0161p-415, 0x1.1273aec1e11e9p-255, 0x1.7552f2379f87bp-340,
     0x1.5d169dc1e98e6p-893, 0x1.4e92b02016607p-217, 0.0, 0.0, 0x1.758620d9adf61p-142,
     0.0, 0.0, 0x1.f0005b2e6fffap-642, 0.0, 0x1.ccbc4b0dc6207p-78,
     0x1.699a3f2132b8fp-74, 0x1.dbaa699969c64p-85, 0.0, 0x1.62e32b730b2edp-423,
     0x1.90d0ea2de0e0ap-394, 0.0, 0x1.8fa97991fb10cp-528, 0x1.a604947df47f1p-541, 0.0,
     0.0, 0.0, 0x1.183fb726ae7fbp-167, 0x1.eb9b50f959bd6p-673, 0.0,
     0x1.2d40470df39c9p-674, 0.0, 0.0, 0.0, 0x1.2eb61d474c257p-462, 0.0, 0.0,
     0x1.7f7cf070406c4p-89, 0.0, 0x1.727bc4ae60b25p-462, 0x1.d12397c8b86c8p-410, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cb28190186d82p-959, 0x1.a6af82bc47721p-874, 0.0, 0.0,
     0.0, 0x1.d2c02507ebdd2p-327, 0.0, 0.0, 0x1.2b427d80f4e34p-587, 0.0, 0.0, 0.0,
     0x1.0ee42b769270bp-446, 0x1.d7f64bb86b70ep-715, 0x1.0e48d3f514a67p-964, 0.0,
     0x1.4b9b4f969ceeep-597, 0.0, 0x1.b38b25de4c7c8p-535, 0x1.38cc81113e1c9p-562,
     0x1.26e98067c4a0dp-475, 0x1.569aadc0d3cafp-1009, 0.0, 0x1.2ab68cce69d4ap-433,
     0x1.8956f74676942p-811, 0x1.5b7bf7b963bb7p-687, 0x1.5a68812a49d52p-588,
     0x1.c8553d7eab1cdp-431, 0x1.30f799fe8588cp-735, 0x1.086fdef663fcbp-364, 0.0,
     0x1.6158acb146e96p-639, 0x1.3c4fa3668c56dp-604, 0x1.997a685c7d433p-662, 0.0,
     0x1.ae7952a2d72c8p-152, 0.0, 0.0, 0.0, 0.0, 0x1.849b02c6d7ac7p-459,
     0x1.a16952cb71caap-95, 0.0, 0x1.5c4809c00182fp-925, 0.0, 0x1.b8685f7ab5159p-557,
     0.0, 0.0, 0.0, 0x1.f650d511155b8p-324, 0.0, 0x1.ba5e61e3acfcp-650,
     0x1.af96cc038e49ep-499, 0x1.d53b1207980b5p-120, 0x1.ce9f838b224f8p-894,
     0x1.652d15d51da66p-906, 0x1.837a7059fcae8p-549, 0x1.9032baa9a0b87p-28, 0.0,
     0x1.2ea3daad67275p-956, 0.0, 0x1.cd0e868f977c7p-959, 0.0, 0x1.e453156a56fbep-412,
     0x1.b814a5f8684c8p-81, 0.0, 0x1.60d931facd9a5p-841, 0x1.3f74704f3c443p-307,
     0x1.730bc4a24bbcdp-553, 0.0, 0.0, 0x1.3a6a88b60b678p-220, 0.0, 0.0, 0.0, 0.0,
     0x1.73cacbab98062p-397, 0x1.4ca1dc995cf73p-889, 0x1.eae7b7dcae765p-284,
     0x1.64705153cea58p-387, 0x1.9269d58ece8fbp-774, 0.0, 0.0, 0x1.f972fec28abd4p-579,
     0.0, 0.0, 0x1.5b489c27d1542p-800, 0x1.f6e8e043509c5p-120, 0.0, 0.0,
     0x1.45b96d8268102p-99, 0x1.60c30e12be121p-224, 0x1.55a62da69ca61p-1004,
     0x1.389b99a2b22bbp-409, 0x1.40835dcd990a2p-756, 0.0, 0.0, 0x1.68b82cd05376p-63,
     0.0, 0.0, 0.0, 0.0, 0x1.f10d2df436a1ep-96, 0.0, 0.0, 0x1.2f17e2aab188bp-651,
     0x1.6879f1c8f8058p-114, 0x1.fa74184f29719p-867, 0x1.d3aa6324ade4p-247,
     0x1.d3b11b36a36ebp-861, 0.0, 0.0, 0.0, 0x1.c159a479a7fafp-300,
     0x1.bd27ea625ae1ap-641, 0x1.e305d6915e2a9p-418, 0.0, 0.0, 0x1.30422fb5db859p-252,
     0.0, 0x1.5837cbe4d2096p-830, 0.0, 0.0, 0x1.d088707707ce4p-316,
     0x1.1ccb1a0a382d3p-635, 0.0, 0x1.99236405b650ap-510, 0.0, 0.0,
     0x1.1221223f1c48p-867, 0.0, 0x1.52a0169ab3e1ap-439, 0x1.523d598d48ee2p-757, 0.0,
     0.0, 0.0, 0.0, 0x1.4ab46c6ab2b64p-504, 0.0
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
            tmp1 = cosh(tmp0);
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
    printf("cosh %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("cosh bench acc %la\n", global_bench_acc);
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
