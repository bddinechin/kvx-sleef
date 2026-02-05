/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfd1_u10purecfma.c --function Sleef_erfd1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.5261f655b42ep-418, 0x1.7ca11daf48b7ap-506, 0.0, 0x1.7b31f1413ee03p-836,
     0x1.d51f3b37498c8p-612, 0x1.98d217b027a05p-263, 0.0, 0x1.a33b266d27288p-775, 0.0,
     0.0, 0x1.2ea7b32d883d2p-393, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c2136cca2e65cp-328, 0x1.ab50e0a680021p-236, 0.0, 0x1.c5791c2264c06p-215, 0.0,
     0.0, 0.0, 0x1.c5655f016ec5ap-596, 0.0, 0.0, 0.0, 0x1.9a1ad4fbc5f19p-611,
     0x1.a756b48e562dcp-870, 0x1.52b161b3e27e1p-779, 0x1.e22af6796aa3dp-193,
     0x1.afb4266742f55p-915, 0x1.1309711089988p-836, 0x1.d34a0e5a890c9p-335,
     0x1.1f6caeb98aca6p-1010, 0x1.37050a3cf139ep-84, 0.0, 0x1.ffb968f6ccd66p-151,
     0x1.cb30feede4bd5p-514, 0.0, 0x1.f3f366e8cabfp-437, 0.0, 0.0, 0.0,
     0x1.ad0111488bfdbp-496, 0x1.25e76164ad612p-369, 0.0, 0.0, 0.0,
     0x1.341aa6875f5c9p-465, 0.0, 0.0, 0.0, 0x1.b2006c58e98b3p-880, 0.0,
     0x1.3c1b5f43681e9p-583, 0.0, 0.0, 0x1.dfd0197412424p-810, 0x1.6a636b45f6b5ep-463,
     0.0, 0.0, 0x1.10a0aab5dc6d8p-955, 0x1.2c921cb5d45dcp-461, 0x1.49f6f4a257517p-769,
     0.0, 0x1.dc166d4f78404p-910, 0x1.4562aa63b9fp-885, 0.0, 0.0,
     0x1.b833a99368157p-259, 0.0, 0.0, 0.0, 0x1.85425b884ef9ep-325, 0.0, 0.0, 0.0,
     0.0, 0x1.eca342e51994cp-941, 0x1.4f4a479dcaadcp-266, 0x1.573e316b3aeabp-418, 0.0,
     0.0, 0x1.541ec0d2c3e5dp-778, 0.0, 0.0, 0x1.9aab6cb72739ep-712,
     0x1.201cade3a1b3ap-619, 0.0, 0x1.f4d72b1a68f0dp-96, 0x1.0edde5cfcd467p-202,
     0x1.61f6698f0033bp-537, 0.0, 0.0, 0x1.f331c0fe2624bp-81, 0.0,
     0x1.e16280767480cp-412, 0.0, 0.0, 0.0, 0x1.d92e3ef1461bap-653,
     0x1.e0b440ab088abp-101, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2dbc98032336cp-956, 0x1.1bd7465cd8085p-862, 0.0, 0.0, 0.0,
     0x1.24754cbc107f4p-205, 0x1.42887a27eb751p-136, 0.0, 0.0, 0x1.5789eef2230d8p-892,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1965d815cac3p-159,
     0x1.14c8fc74b9225p-885, 0x1.d89ad7d6a708p-283, 0x1.de1969537d98ep-786, 0.0, 0.0,
     0x1.b35846045c668p-896, 0.0, 0x1.a4effb60d64c8p-807, 0x1.748ecd15a8e1p-328, 0.0,
     0.0, 0x1.8209e1bcbd50cp-258, 0x1.ddfacc606c8ep-834, 0.0, 0x1.efb31f0a27448p-886,
     0x1.c04abf6dd285fp-320, 0.0, 0x1.cc04750d0e9dbp-725, 0.0, 0.0,
     0x1.945cf18c7349p-682, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91eb5a554c583p-529, 0.0,
     0x1.e35977ee3f5e3p-67, 0x1.3378202b04aacp-310, 0x1.db84cacaa8f85p-769, 0.0, 0.0,
     0x1.c329b6bea9543p-42, 0x1.040e8b3713a16p-376, 0.0, 0x1.0620d13195cadp-598,
     0x1.96274b1d9637dp-754, 0.0, 0.0, 0x1.c12f8bfbb1cffp-190, 0.0, 0.0,
     0x1.44ec3d33abe1bp-847, 0.0, 0x1.bf6649e7de0dp-45, 0x1.7b3c17d6657bdp-717, 0.0,
     0x1.cd868ce8aac28p-571, 0.0, 0.0, 0.0, 0x1.09db7501623b9p-539,
     0x1.062f5120405p-707, 0x1.da68ff2e13c19p-238, 0.0, 0x1.341d99c96f2aep-198, 0.0,
     0x1.c31c01c6b29e5p-670, 0.0, 0x1.1c6e35ce54bf8p-483, 0x1.a1188588fbc69p-390, 0.0,
     0x1.f2ceb1d0a59dfp-319, 0x1.8e70934881a18p-203, 0x1.4cb6144af68acp-588, 0.0,
     0x1.938e9d12b14d9p-471, 0x1.331292dbed8a5p-152, 0.0, 0x1.95f8c1736a9b2p-13,
     0x1.fbe077b9a3e15p-375, 0.0, 0.0, 0.0, 0x1.520f76d574a37p-917, 0.0,
     0x1.d973b6c4d2b1p-253, 0.0, 0.0, 0x1.3ba5d24c3e1d5p-272, 0.0,
     0x1.1af3162f7f1d1p-963, 0.0, 0x1.9bb06b968ce83p-444, 0.0, 0x1.e67e8e80c12bep-330,
     0x1.d0db0cd27ae94p-738, 0.0, 0x1.86e2e16235d79p-79, 0.0, 0x1.b49a2251c259p-720,
     0.0, 0x1.d4ac605667c09p-817, 0.0, 0x1.236ba3deb67ccp-137, 0x1.c8141ed06fe26p-391,
     0.0, 0x1.a5e30c5c985a9p-884, 0.0, 0.0, 0x1.219c840ca838p-864, 0.0,
     0x1.f6c9efaf04ad2p-773, 0x1.9ed7c707a508p-718, 0.0, 0.0, 0x1.4fbd1e0e4cbebp-888,
     0.0, 0.0, 0x1.7729faeea58c8p-845, 0.0, 0.0, 0.0, 0x1.95f07e3a151fp-98,
     0x1.017c8be55c992p-970, 0.0, 0.0, 0x1.0d273c28c28b1p-523, 0x1.6521c53156558p-616,
     0x1.abea5cf3e16dep-396, 0x1.8939b138d14b3p-66, 0x1.bfb84362c8953p-135, 0.0, 0.0,
     0x1.4910973a91e21p-274, 0.0, 0x1.6c28588df46c6p-72, 0.0, 0x1.38e92a963f878p-759,
     0.0, 0x1.a1c830ce89328p-69, 0.0, 0.0, 0x1.708ade176762bp-1000,
     0x1.6e573c4ad512ap-132, 0x1.671afce6e3664p-343, 0x1.d4057c499950dp-342, 0.0, 0.0,
     0.0, 0x1.1d2c9062aafc1p-4, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ecc257867b27p-974, 0.0,
     0x1.08f85a9b6aff7p-554, 0x1.68ccf60ec069bp-389, 0x1.46d3f9d338bbdp-114,
     0x1.21310c19b8acep-444, 0x1.99787ec5d53bbp-403, 0x1.6a7783b508fe7p-367,
     0x1.286c10d732a2cp-205, 0x1.04cbf38a30353p-148, 0.0, 0x1.5f4cb181dbf5fp-592, 0.0,
     0x1.b2a357938e7bcp-36, 0x1.721f4396873d8p-176, 0.0, 0.0, 0.0,
     0x1.853722fd041a9p-119, 0.0, 0x1.b877937b45b34p-1017, 0.0, 0.0, 0.0,
     0x1.0572562dda702p-291, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58b7d0325f92ep-775,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.64cd95483bffcp-878, 0x1.d1d264b8b1b96p-883,
     0x1.a591fca09cf94p-881, 0x1.e2554a2081649p-649, 0x1.df686c064f69p-904,
     0x1.305df1ecd14e1p-449, 0x1.4b7f081e54d84p-312, 0x1.ac4db5754cbaep-194,
     0x1.f557ad06c3f69p-31, 0x1.6a3ef50d42a04p-594, 0x1.e8718022ca1eap-335, 0.0,
     0x1.6dd5a1653fa65p-701, 0x1.2a9dc7bf9e984p-129, 0.0, 0.0, 0.0,
     0x1.d7612dd8fe2b4p-787, 0x1.6c823b88fe4e2p-584, 0.0, 0.0, 0x1.d400de90f6eaap-80,
     0x1.d3ca4aade5cb4p-35, 0x1.adefd939ea7ffp-785, 0.0, 0x1.172e69a8a1d4ep-548, 0.0,
     0x1.ecde950ee3da9p-345, 0.0, 0x1.ab5be76c15401p-588, 0x1.822c7f8b39dbfp-429,
     0x1.d07ac78ab90f3p-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a6c101d32539ap-206,
     0x1.08c827eb8b6ep-341, 0.0, 0x1.0d069beb90f11p-435, 0x1.eb6479760d4e1p-660,
     0x1.0c5fb93fe5b0ep-955, 0.0, 0.0, 0.0, 0x1.9cbdf3dba921dp-1,
     0x1.506d9928828a2p-963, 0x1.07c58775f17e7p-437, 0.0, 0x1.78d7d18995033p-714, 0.0,
     0x1.ec65b7a3dc4a1p-22, 0.0, 0.0, 0x1.eea69d2d295dcp-942, 0.0,
     0x1.911922260e084p-470, 0.0, 0x1.5ce19ef4645b8p-887, 0x1.b44aad1a950e4p-148, 0.0,
     0x1.132aad4f0c64p-386, 0.0, 0x1.7a8703efbd0fp-70, 0.0, 0.0,
     0x1.d5aaffa2d3b92p-879, 0.0, 0x1.590bf427eff45p-634, 0.0, 0.0,
     0x1.6b350d1f6887ep-761, 0x1.07752c91c3cd4p-535, 0x1.0469cf34cc579p-443, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.64649a66cd12ap-76, 0x1.a9586b9d6db38p-323, 0.0, 0.0,
     0x1.fe3f7f4a50701p-214, 0.0, 0.0, 0.0, 0x1.7786e7193c866p-570,
     0x1.0c86c9af8d7ap-28, 0.0, 0.0, 0.0, 0x1.446d0f9f9bdacp-761, 0.0,
     0x1.bda7a1fe0ba58p-412, 0x1.c918737d452d5p-774, 0.0, 0x1.ece95381045f7p-785, 0.0,
     0x1.23b9800d07245p-682, 0.0, 0x1.c267daa4414cbp-14, 0.0, 0.0, 0.0, 0.0,
     0x1.701b86670ac2bp-522, 0x1.d539c7200e09bp-720, 0x1.82996daa1aaf2p-514,
     0x1.6cba9f1135571p-406, 0.0, 0x1.4e521a3e2a9f9p-403, 0.0, 0x1.99b576e18bc82p-253,
     0.0, 0x1.b05d852c08e4dp-505, 0.0, 0.0, 0x1.250bbd7aea021p-824, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d2928331dc61dp-307, 0.0, 0x1.aea99e76b57f1p-468,
     0x1.15a248abcda28p-604, 0.0, 0.0, 0.0, 0x1.0525af07db163p-444, 0.0,
     0x1.458b87fec76cbp-61, 0x1.7b8ef494c9618p-608, 0x1.285954c0d99a2p-207,
     0x1.04c7535ba933dp-572, 0.0, 0.0, 0.0, 0x1.4dffc3559c545p-732,
     0x1.60cb56e7a9c91p-379, 0.0, 0x1.9558f0728fc0fp-430, 0x1.bf7fd4bb64d95p-134, 0.0,
     0.0, 0x1.b0fb35f902682p-205, 0x1.f22564162de44p-499, 0x1.1b4d4319dfe02p-425,
     0x1.92b2b97c429cdp-10, 0.0, 0.0, 0.0, 0x1.25231bf33c088p-634, 0.0, 0.0, 0.0,
     0x1.5f40a935aa3e1p-942, 0x1.d2b02876d3c2ep-546, 0.0, 0.0, 0x1.30dd7a360ec6ep-228,
     0x1.78c9269030024p-839, 0x1.f97eea6b83dfap-619, 0x1.6ef9c619dfc1ep-389, 0.0,
     0x1.5d260e40cdb45p-161, 0.0, 0x1.c7747e068a5b7p-263, 0.0, 0.0, 0.0,
     0x1.611184f627f87p-551, 0x1.ee5dcda5a1f38p-213, 0x1.a739cc64d9d9fp-816,
     0x1.5ef2a38a75165p-941, 0x1.401b6b0bcaf01p-844, 0x1.1af56de7dcd48p-731,
     0x1.f1e9d7d701d71p-521, 0x1.f5d9e0620cd55p-667, 0x1.c9c918cf5e939p-377,
     0x1.d5b8d4c7bb91ep-914, 0x1.0adcb69d70eadp-87, 0.0, 0.0, 0x1.9a002f375cca2p-465,
     0x1.5c95ab80c4b6ap-848, 0.0, 0.0, 0x1.6fa42665645a4p-238, 0.0, 0.0,
     0x1.edef1376d1f3cp-766, 0.0, 0.0, 0x1.ec8f9736706f5p-765, 0x1.ec66c7dcfc5a2p-862,
     0x1.03ee993a9f2e4p-95, 0.0, 0x1.12e50cd705e1cp-850, 0x1.4c47064a70c81p-634, 0.0,
     0x1.f05fd3d76e5c4p-320, 0.0, 0.0, 0.0, 0x1.39bed7dc59111p-905, 0.0,
     0x1.91571e4a098b2p-254, 0.0, 0.0, 0.0, 0.0, 0x1.dcbd635cd9e1p-35, 0.0, 0.0,
     0x1.01042ca29b5b8p-470, 0x1.b167ec358ac2ap-236, 0.0, 0.0, 0.0, 0.0,
     0x1.48ba6fa7350ddp-45, 0.0, 0x1.652c84f100e45p-54, 0x1.0226ce2ac1783p-436,
     0x1.a77488f4ea948p-160, 0.0, 0.0, 0.0, 0x1.ae4c287a90619p-627, 0.0,
     0x1.e897784e827eep-698, 0.0, 0x1.edee03f55ca4cp-905, 0.0, 0.0, 0.0,
     0x1.b5aa9eafe938ap-790, 0x1.981370117550ap-63, 0x1.489f8acfa5ed6p-980, 0.0,
     0x1.7c180fbed7c36p-189, 0.0, 0x1.bb7c4dae5a0ap-675, 0.0, 0.0, 0.0,
     0x1.46548d38e8e0bp-34, 0.0, 0x1.1a3ee2b0cee6cp-365, 0x1.d9012d7a4978ap-690, 0.0,
     0x1.91cb8ffcf1466p-117, 0.0, 0.0, 0x1.dfe577315d017p-156, 0x1.a3b249d247584p-304,
     0x1.2500816fd682dp-672, 0x1.5c7aa87e858b9p-722, 0x1.6142a7353ca0dp-191, 0.0,
     0x1.757ca66858639p-834, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e615d0497bdep-565,
     0.0, 0.0, 0.0, 0x1.10b05de987f7p-778, 0.0, 0x1.8b6c1fedc9bbbp-319,
     0x1.d0285cedd864ap-438, 0.0, 0.0, 0x1.f9028a41c117ep-286, 0.0,
     0x1.4804099f6bb2cp-536, 0.0, 0x1.0001e3c09a265p-442, 0x1.db097b0e8c58cp-398, 0.0,
     0.0, 0x1.7b178e4fcdce6p-44, 0x1.1839ed6a925f5p-342, 0.0, 0.0, 0.0, 0.0,
     0x1.0bbbccb82e84cp-751, 0x1.bff171f6e4ab1p-626, 0.0, 0.0, 0x1.7b118644dcff9p-852,
     0x1.94bf0b074f081p-748, 0x1.5dddec780889p-491, 0x1.ba5d6ccbd12fep-473,
     0x1.f20e3cc2865f1p-991, 0x1.5804bd3974215p-950, 0.0, 0x1.48768bf83cf34p-475,
     0x1.c41a8d7d5aff1p-899, 0x1.bf851c4ba2e1cp-50, 0x1.fec3029308a33p-729,
     0x1.cfbdd6b5322d1p-769, 0x1.3ec06a462362dp-545, 0x1.d40c71a918d1p-728,
     0x1.f10c80f407311p-612, 0.0, 0x1.84da3fafeaa6cp-230, 0x1.97da293504dcp-861,
     0x1.c58d15cd5e052p-26, 0.0, 0.0, 0x1.b158601345d85p-345, 0x1.d6f22284dfcc4p-570,
     0.0, 0.0, 0.0, 0x1.b4b2a6b375c19p-233, 0.0, 0.0, 0x1.fdc4421fec146p-18, 0.0, 0.0,
     0x1.4242e8f3871e4p-763, 0x1.c3f2d1ae9452ep-531, 0x1.bbf7305df2268p-653, 0.0,
     0x1.5ffd69485e5b6p-411, 0x1.843331d057dadp-502, 0.0, 0.0, 0x1.c53b15feeeeadp-251,
     0.0, 0x1.0f378980345b2p-721, 0x1.0fa418485545fp-349, 0x1.67213c6bf0593p-366,
     0x1.613050622e499p-204, 0x1.054dda87ad965p-964, 0x1.0da55566c8f28p-487,
     0x1.d7856f8ffdbf1p-474, 0x1.9f53470bc3c46p-311, 0x1.e6cd282451fdep-921,
     0x1.97badd9644e0cp-442, 0.0, 0.0, 0.0, 0x1.c3e285e225febp-848, 0.0, 0.0,
     0x1.eb2a89b27e6bbp-952, 0.0, 0x1.bfa21ab6d33bep-884, 0.0, 0x1.5fb15a392ebd2p-940,
     0.0, 0x1.d9d02aed2ef1bp-301, 0x1.3dba77027202dp-763, 0.0, 0x1.f9d6e203de318p-777,
     0.0, 0x1.b69756d38fbd5p-248, 0x1.061523d1e594dp-922, 0x1.4b698a7e34b0dp-461,
     0x1.613b68b3db058p-952, 0x1.1fdb5f9a08ec3p-514, 0x1.434243e9b1647p-353,
     0x1.2c4175bc64e3cp-96, 0x1.545d9571132fbp-538, 0.0, 0x1.7c4177d6cad3ap-276,
     0x1.ebb14bf0f97aap-857, 0.0, 0x1.5ea9c9ee4febbp-135, 0.0, 0.0, 0.0,
     0x1.c7a2a2a339953p-103, 0.0, 0.0, 0x1.8805a4eb2b22dp-545, 0x1.7c65757884cacp-174,
     0.0, 0.0, 0.0, 0.0, 0x1.089e308bee939p-942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4087d1b8330a4p-571, 0.0, 0x1.75c771bd100f2p-676, 0x1.af1ba7eb94f2dp-576,
     0x1.3a852ac700235p-147, 0x1.5af6f21c8a631p-282, 0.0, 0x1.bc86e826cc594p-409,
     0x1.4a8357e85939bp-738, 0x1.632175dc448dcp-394, 0x1.c1d91cec37515p-365,
     0x1.cd3cd33351394p-504, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3567c78a1fb3p-1017, 0.0,
     0.0, 0x1.63ca88ca36dbp-228, 0.0, 0.0, 0x1.bc459d5c7e8edp-877,
     0x1.0178f03137087p-907, 0x1.441654be60b1cp-670, 0.0, 0.0, 0.0,
     0x1.5fb990a7e1408p-1010, 0.0, 0x1.62ecb86b32861p-597, 0x1.b55ef6ea19c59p-1008,
     0x1.2fad892f8b65dp-648, 0.0, 0x1.97f41797353c7p-510, 0.0, 0x1.771e321d91a5fp-450,
     0.0, 0x1.0174b1aaf33dp-400, 0x1.eeb6ca2260b5bp-704, 0.0, 0x1.60bc3af41c972p-469,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e29eff19959ep-454, 0x1.802ee1308fabdp-909, 0.0,
     0.0, 0x1.314fda9a03aacp-538, 0x1.4c5024af0fde3p-715, 0.0, 0.0, 0.0,
     0x1.4db30304507dap-536, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aa84ba526419p-634, 0.0,
     0x1.1cac84f9c533ep-123, 0x1.4522f005ab371p-207, 0.0, 0x1.328862b9fa9e2p-161,
     0x1.6c7e5ca6f0a1ap-248, 0.0, 0x1.4fcf07ed3323ap-107, 0x1.b8e8e688235d9p-187,
     0x1.6101d4029b646p-425, 0x1.d7f51fff423fap-704, 0x1.2d897647871ddp-522, 0.0,
     0x1.9b0be2aa764aep-24, 0x1.c09c72d0ef1abp-499, 0x1.35eff9882eee6p-515, 0.0,
     0x1.534fe5765bf51p-519, 0x1.0df40f6d4d6f5p-266, 0x1.1a75d2d7e770cp-859,
     0x1.cf2e3d260fdcbp-549, 0x1.3131586220b62p-498, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d321f5a9f7c51p-555, 0.0, 0.0, 0x1.7610529df4bfep-624, 0x1.b831478c00d67p-756,
     0.0, 0.0, 0.0, 0.0, 0x1.f7ced05706cd2p-749, 0.0, 0.0, 0x1.399d895e22537p-187,
     0x1.036a2f3c68cfdp-553, 0x1p0, 0x1.3ade8954dd12cp-65, 0x1.e04db6aea08ebp-938,
     0.0, 0x1.5807efef67fe6p-323, 0x1.a4cec8b4261fcp-322, 0x1.cdc97b32d99d8p-209, 0.0,
     0x1.e2ca215f691c2p-526, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a2f5a806ce94p-935,
     0x1.ced0fa583d3c8p-191, 0x1.03b6b9646d2d8p-518, 0x1.f2df3ed228896p-129, 0.0,
     0x1.a8cfbd00da146p-812, 0.0, 0x1.fd72be6f0a8f3p-33, 0x1.61690e5827848p-690, 0.0,
     0x1.ec33f594efe51p-525, 0x1.a0042ddb0a92p-777, 0.0, 0.0, 0x1.1f0515efeaf25p-517,
     0x1.cf382bc2bcf72p-426, 0x1.92d07315d1302p-155, 0.0, 0x1.a5294e467b447p-75,
     0x1.ca8b89a2ac252p-438, 0.0, 0.0, 0x1.e433cf59d7757p-779, 0.0, 0.0,
     0x1.2f47aea2bdceap-589, 0.0, 0.0, 0x1.e565aac1194a9p-661, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.80c3b4c28f6a4p-3, 0.0, 0x1.8b08ca07e4e42p-33, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.004b401ae067cp-415, 0x1.cb82f30e3b554p-321, 0x1.dd3dbac0967d5p-106,
     0x1.185b4604dac4fp-899, 0.0, 0.0, 0x1.64b9c12509432p-570, 0x1.973e44fa6abcap-98,
     0.0, 0.0, 0x1.917010fc7dc0dp-187, 0.0, 0.0, 0x1.7337b04e85e44p-443, 0.0, 0.0,
     0x1.4bda4ecd5e23cp-687, 0x1.00b98417b2d54p-819, 0.0, 0x1.9c47cc7ac4de3p-980, 0.0,
     0x1.240e41f460a99p-1, 0x1.dcd5f678f5326p-728, 0x1.bd1842c38f526p-1, 0.0, 0.0,
     0x1.a255aa634fca4p-889, 0.0, 0x1.c5a93da2b4f3p-551, 0.0, 0x1.e96a4beb95a2fp-970,
     0x1.f4cc6b91aa589p-35, 0.0, 0.0, 0x1.acd65f2204c2fp-115, 0.0, 0.0,
     0x1.fd5214a47845bp-233, 0x1.63bfbc8e4ceb5p-808, 0x1.b271ad5411635p-629,
     0x1.ec30c8404e088p-466, 0.0, 0.0, 0x1.2788a1fb91b58p-695, 0.0, 0.0,
     0x1.26d2cb1ea9ee7p-589, 0x1.7288be7daf6d9p-620, 0x1.274474e4796dcp-301,
     0x1.ef20c8ed0ad3bp-50, 0x1.9386e100128b6p-819, 0.0, 0.0, 0x1.555ab2b0b5d36p-793,
     0.0, 0.0, 0.0, 0x1.c900be8d24cf6p-487, 0.0, 0x1.609ab76778cccp-967,
     0x1.556dc669ee06dp-526, 0.0, 0.0, 0.0, 0x1.df3d43eada109p-703,
     0x1.9a5630bfc85efp-809, 0.0, 0x1.5cabacdaa39aep-744, 0x1.27827bb8582e1p-820,
     0x1.c1cade4bfd4d3p-45, 0x1.e1f783965846cp-31, 0.0, 0.0, 0.0,
     0x1.6e82c18e8804ap-832, 0.0, 0.0, 0x1.4f5578027bd91p-536, 0x1.dbff6d28b5b77p-761,
     0x1.61d09243bb94bp-589, 0x1.a9a79d80ca7cp-527, 0.0, 0.0, 0.0,
     0x1.d49ca0644901ep-54, 0.0, 0.0, 0x1.af9677466316bp-208, 0x1.4366ca40d060fp-328,
     0x1.581dd4471cf4dp-602, 0.0, 0x1.578beb137d3fcp-922, 0.0, 0x1.30772efd6ca09p-689,
     0x1.3a11cd53155bdp-589, 0.0, 0.0, 0x1.6d72be9d185e1p-787, 0.0, 0.0,
     0x1.eae3292c84b3cp-25, 0x1.3412d2bc6f6fap-374, 0.0, 0x1.95c3f2d2f75edp-835, 0.0,
     0.0, 0x1.b8ac4ea2fc70dp-356, 0.0, 0.0, 0x1.5e0800e4addc6p-829, 0.0, 0.0,
     0x1.ba81d09f06b7bp-326, 0.0, 0x1.242cf6e4b085cp-697, 0x1.fdb960c8bddd6p-796,
     0x1.30514d1a65eefp-607, 0.0, 0.0, 0x1.935336f30e27bp-474
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
            tmp1 = Sleef_erfd1_u10purecfma(tmp0);
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
    printf("Sleef_erfd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erfd1_u10purecfma bench acc %la\n", global_bench_acc);
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
