/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd2_u05kvx.c --function Sleef_sqrtd2_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.2029026f7e6c1p-134, 0.0, 0.0, 0x1.fdd98888d4f97p-297, 0.0,
     0x1.564a48f85888dp-979, 0.0, 0x1.39a6229358c7dp-488, 0.0, 0.0,
     0x1.a3667d66b76bfp-55, 0.0, 0.0, 0x1.a554c7158808dp-862, 0.0,
     0x1.d52a2fe29a3e3p-402, 0x1.a0f867045a9bp-751, 0x1.8d026dbcaf714p-499,
     0x1.710d8e031fcdp-57, 0.0, 0x1.69b1f89fc7bc6p-399, 0x1.89cd1e38ab188p-965, 0.0,
     0.0, 0x1.928757018bed2p-385, 0x1.74401201c8e9dp-21, 0.0, 0.0, 0.0,
     0x1.03f9354a3934ep-783, 0x1.d5badbaa25affp-866, 0x1.dd230a308ad5ap-936,
     0x1.bcf35f27e4e86p-331, 0.0, 0.0, 0.0, 0x1.058d44f264919p-230, 0.0,
     0x1.6c04fb65c3669p-253, 0x1.e49685af26cfep-467, 0x1.75bd188c86963p-770, 0.0,
     0x1.c6c39959e4256p-192, 0.0, 0x1.11dd264a4060ep-397, 0x1.ce4952bf8a3fdp-700, 0.0,
     0.0, 0x1.8b417d1ec23cbp-536, 0x1.edcd6ccd5ddf6p-781, 0x1.a6105be338729p-769,
     0x1.bd0d844f493cep-433, 0x1.98e972b0dc2bcp-993, 0x1.2859cdd214f63p-756, 0.0,
     0x1.7f1bbff7d8402p-70, 0x1.d7d384a92dcfep-402, 0.0, 0x1.d5a46a002056fp-554,
     0x1.385ea351955abp-897, 0x1.9c6bcfd6e4df3p-541, 0x1.af90edb1bf1ffp-358, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.78e57611666f1p-281, 0.0, 0x1.1584102e93bbcp-332,
     0x1.1ad90ac46ddp-183, 0.0, 0.0, 0x1.fe16e2e0d13c6p-1016, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a30a44652da18p-227, 0.0, 0.0, 0.0, 0x1.680369b9188fcp-467,
     0x1.ae245d1df02c6p-429, 0.0, 0.0, 0x1.0e864b061d2b9p-172, 0x1.db5b979b2db75p-519,
     0.0, 0.0, 0.0, 0x1.9e8b393aa07dcp-451, 0.0, 0x1.b6207b939d20ep-635, 0.0,
     0x1.d09c4496a6d65p-547, 0.0, 0.0, 0x1.1cece7059f144p-351, 0.0, 0.0,
     0x1.eca68c2ea668fp-729, 0x1.8382d20506a7bp-715, 0x1.8c14809da47d6p-555,
     0x1.86f9bbe459b89p-609, 0.0, 0x1.3b8d17d0ff161p-42, 0.0, 0x1.a67a26cacf14cp-490,
     0x1.0e34b8f77b7b7p-527, 0.0, 0x1.5a3c883868874p-611, 0.0, 0x1.ebfc3929117c4p-660,
     0x1.70667b29d1781p-754, 0.0, 0.0, 0x1.c5a24cfe4392bp-339, 0.0,
     0x1.416cf16208459p-35, 0.0, 0x1.21220f4c3aa5ap-950, 0x1.abf2769d49d6bp-752,
     0x1.32fb1756b0cd8p-391, 0x1.3e6ad504d8acp-137, 0x1.87b497b0d7fe7p-754, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a7f6733858396p-605, 0.0, 0.0, 0x1.08e338a62e4cfp-894,
     0.0, 0.0, 0x1.b9d561cae8045p-122, 0.0, 0x1.7426183c3ab85p-58,
     0x1.b1755973fd492p-867, 0.0, 0x1.2d8a1e2c39662p-144, 0x1.9eae1e7e27528p-991,
     0x1.0e5b528c17135p-138, 0x1.2024366468eb4p-446, 0.0, 0.0, 0x1.2ecec43f5b5f9p-100,
     0.0, 0.0, 0x1.ff48d714d031p-833, 0.0, 0.0, 0x1.eea98cebace45p-84,
     0x1.147f414b772dep-418, 0x1.cbbfa999b3783p-128, 0.0, 0x1.3efaaa98ad5f7p-967, 0.0,
     0x1.cbe34f6fbcc3ep-626, 0.0, 0x1.88b228b2b2ecdp-730, 0.0, 0.0,
     0x1.4da395f2dc392p-416, 0.0, 0.0, 0.0, 0x1.13dda419d02bdp-903,
     0x1.783da14b3d4cbp-103, 0x1.42132eedb74c1p-656, 0x1.c5bb4cec3a01p-987,
     0x1.a3cb58c3572f5p-368, 0.0, 0x1.9d78c2260b0a6p-944, 0x1.327da0d7a14c1p-869,
     0x1.18d41971cd972p-188, 0.0, 0.0, 0.0, 0.0, 0x1.3bda0ffdcf84cp-184,
     0x1.2c313d61b49cp-659, 0x1.a8288a5e3dc3p-114, 0.0, 0x1.857143de6ce4ep-884,
     0x1.f00834935f518p-530, 0x1.eecea807c47e5p-264, 0.0, 0.0, 0.0,
     0x1.bd7698098c617p-905, 0x1.114cd78b5b8dap-411, 0x1.7d0f047e63c4ep-506, 0.0, 0.0,
     0x1.133547e41863fp-500, 0.0, 0x1.5adf7833a3918p-451, 0x1.f7aff7c54e9ccp-953,
     0x1.8e4e17cfcf71ap-538, 0.0, 0x1.3847a7ce13d8ap-519, 0x1.f7fb34496b477p-918, 0.0,
     0x1.177bd4b501b37p-819, 0.0, 0.0, 0.0, 0x1.81ae885046661p-126, 0.0, 0.0,
     0x1.e1ec660590727p-80, 0x1.c931e6d1f279cp-499, 0.0, 0x1.4bd72d230752fp-559, 0.0,
     0.0, 0x1.462ffae4615cdp-435, 0x1.7bc32264c599bp-443, 0x1.a661c6c2eceb9p-316,
     0x1.ae2990c22a928p-17, 0x1.c580f96c4b59p-766, 0x1.56788089e48b5p-935, 0.0, 0.0,
     0x1.969fa112cde6fp-283, 0x1.fd53666db56e2p-899, 0x1.8124d1de5c064p-378,
     0x1.29e1701f4e4e7p-982, 0.0, 0x1.5e7c456ab931cp-925, 0x1.80e4267451f28p-159,
     0x1.0b61735c5858bp-590, 0x1.05865c6c216b2p-430, 0.0, 0.0, 0x1.2a296c9aeae5ep-49,
     0x1.1acc3fcc47b73p-818, 0.0, 0x1.dbdfb820c27c8p-78, 0x1.62be69be8b522p-124,
     0x1.f696ec484d354p-261, 0x1.5d32afba90ca4p-327, 0x1.427db4e08eed5p-448,
     0x1.1391c4dc2c3f7p-231, 0.0, 0.0, 0.0, 0x1.2aea18914d6c4p-218,
     0x1.dd945677954e4p-744, 0x1.2510ba3d5df75p-99, 0x1.cdb3411c4876dp-305, 0.0,
     0x1.423d5845ee4cp-390, 0.0, 0.0, 0x1.abd1fe0059539p-611, 0.0, 0.0,
     0x1.3dd75d4607a2ep-975, 0.0, 0x1.43122b1176d7ep-1007, 0x1.17664f58a299ep-136,
     0x1.d298e716d88fcp-387, 0.0, 0.0, 0.0, 0x1.4fdf313a3e131p-173, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6653d3cac452p-836, 0x1.13b893517bfbap-464,
     0.0, 0.0, 0.0, 0x1.dfe9692874866p-285, 0x1.edd022fed9601p-26,
     0x1.f022ab705efc2p-121, 0x1.2409e603ef7eap-989, 0.0, 0x1.f5a6dfab97a0bp-314,
     0x1.af6c20c439284p-543, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb887896b48adp-940, 0.0,
     0.0, 0.0, 0x1.e78a7560d4b35p-236, 0.0, 0x1.aeaa88fbc02dap-438, 0.0, 0.0,
     0x1.85ba3c5778038p-503, 0.0, 0x1.0814e14e9cd1cp-458, 0.0, 0x1.0a43b647c19eap-301,
     0.0, 0.0, 0x1.6256acdf9ca66p-1020, 0.0, 0x1.0295b4daf284bp-578, 0.0, 0.0, 0.0,
     0.0, 0x1.5c2e22aa5ed51p-245, 0.0, 0x1.9a6cf891d9e9dp-309, 0.0,
     0x1.fe7da59e3b6c4p-399, 0.0, 0x1.11a9b6bb7b78ap-196, 0.0, 0.0, 0.0,
     0x1.d0c386f635e47p-252, 0x1.f0ca83adab2edp-739, 0x1.499cda6451abep-1011,
     0x1.f21651d7c75abp-717, 0x1.1d2d7a6207575p-27, 0x1.ebc9e5d9092a2p-58,
     0x1.7caf5cc5ca60fp-698, 0x1.4dedd3296049bp-717, 0x1.9a794760bcbcbp-864, 0.0,
     0x1.a11824da6d599p-442, 0x1.d7cd63327ab3ep-424, 0.0, 0.0, 0.0,
     0x1.75a48f3beba54p-836, 0.0, 0.0, 0.0, 0x1.faea38102f96ep-712, 0.0,
     0x1.fbb14ea4246ep-880, 0x1.4ca566a563e7bp-669, 0.0, 0x1.2176ed751a3d2p-901, 0.0,
     0.0, 0x1.f45fee7b406f7p-373, 0x1.66818ca94adacp-760, 0x1.6b0e4f8131be7p-10,
     0x1.b91dbdbb5ffbbp-943, 0.0, 0x1.b692e3652d4c4p-289, 0x1.7e5cad143ed24p-799,
     0x1.bbe39a30469e8p-687, 0.0, 0.0, 0.0, 0x1.8521abc8b40e8p-747, 0.0, 0.0,
     0x1.19c4abef14b26p-356, 0x1.4aa7c7aa4759ep-268, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.215887a6c259p-202, 0.0, 0.0, 0x1.3361baa84295cp-202, 0.0, 0.0, 0.0,
     0x1.8eb1b640affbp-850, 0x1.53a77db7271fdp-1012, 0.0, 0x1.8a70b5329c0b4p-562,
     0x1.e1956a57c067ap-521, 0x1.145f03b785bdep-39, 0.0, 0x1.1e1faaf09fc91p-235, 0.0,
     0x1.0d662dcdcd8e2p-906, 0x1.33fcaafd538e8p-331, 0.0, 0x1.f518c561244fcp-747, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.608fbd20f0517p-1013, 0x1.343ba856e6a3bp-33,
     0x1.630a9437a775ap-899, 0.0, 0.0, 0.0, 0.0, 0x1.584a09a9a010fp-393,
     0x1.1bf64e262c3d4p-917, 0x1.8153b57e4c17ep-974, 0x1.865719796192ep-504,
     0x1.f48f0e4c6672ap-281, 0.0, 0.0, 0x1.7c513075ec8ebp-143, 0x1.7bae99bf03428p-337,
     0x1.98c742a161d1ap-61, 0.0, 0.0, 0x1.98af9794a2d76p-156, 0x1.1bce01b4ee421p-178,
     0.0, 0.0, 0x1.4aa017a8dff97p-929, 0.0, 0x1.059b5ecece4a4p-146, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.350c4971a000cp-208, 0.0,
     0x1.4020ecf5d0e6ap-803, 0x1.22be510027e3dp-3, 0x1.81065dbe43b8fp-616, 0.0, 0.0,
     0.0, 0.0, 0x1.90faa608efa0ap-661, 0x1.58ab6e43c8c81p-427, 0.0,
     0x1.7ac6320cb6616p-991, 0x1.7d6acb69067fbp-489, 0x1.019393936c47bp-421, 0.0, 0.0,
     0.0, 0x1.a7ae65986a4fcp-916, 0x1.d83c5ea0e73e8p-207, 0x1.17acbf691bb2ep-471, 0.0,
     0x1.ef0f9f69b8e18p-112, 0x1.498a80ae5614ep-865, 0x1.2f972bb0c02cap-740, 0.0,
     0x1.a8f7932d07aa4p-404, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8959138fd3c14p-218,
     0.0, 0.0, 0.0, 0.0, 0x1.83342cf72f58ap-783, 0.0, 0x1.21a2cd44842e8p-710, 0.0,
     0x1.470b01bdd9943p-131, 0x1.27a8a9633192p-246, 0x1.86f2aee44eb09p-945,
     0x1.4d8c7f408fb95p-836, 0x1.7774fb63cc66fp-917, 0x1.2eb2838b36f4dp-498,
     0x1.637f1832b1601p-482, 0x1.81218253ca684p-595, 0x1.1654c01d9e804p-116,
     0x1.0f9fe31b5d83fp-703, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f566602ebf392p-883,
     0.0, 0.0, 0x1.328cd44a5cb12p-809, 0x1.b47db9aab7f58p-116, 0x1.e30de8809930cp-659,
     0x1.8ccf2d634b4abp-493, 0x1.d7c9540b33845p-198, 0.0, 0.0, 0x1.0e428cfb9774p-86,
     0.0, 0.0, 0x1.78b5f17af86ebp-286, 0x1.269f7f8eea8bfp-716, 0.0, 0.0, 0.0, 0.0,
     0x1.e45f00f1f80a3p-648, 0.0, 0x1.bacb17f09257fp-527, 0.0, 0.0, 0.0, 0.0,
     0x1.d4c77e70b3136p-925, 0x1.28aa3d61f4f6cp-385, 0.0, 0.0, 0x1.b54302d98d3f5p-560,
     0.0, 0.0, 0x1.51fefad78a4e9p-627, 0.0, 0x1.2288e3ce47e0dp-149, 0.0, 0.0,
     0x1.101474fe9ee25p-157, 0x1.e7d3487b3a8fbp-715, 0.0, 0x1.9e7da5be629d9p-181,
     0x1.adb173515c35p-455, 0x1.d71944099fab2p-739, 0x1.bf391760bd82cp-843, 0.0,
     0x1.a226b666d305p-12, 0.0, 0x1.6e55fbf80e7f4p-307, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e40b8a4cc2536p-836, 0x1.385d2989c258ap-849, 0x1.b1aa5bd2127cfp-200, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d371d7e45dc6dp-126, 0.0, 0x1.9e78fb0a293e8p-792, 0.0,
     0x1.c79b0ef2092cp-220, 0x1.ef5037e9c9d43p-495, 0x1.25ad8c9c8a554p-114,
     0x1.4c02caee8e5b2p-47, 0x1.1670acee1dc1ap-1017, 0.0, 0.0, 0x1.1b79583b69456p-675,
     0.0, 0.0, 0.0, 0x1.dacb6a67abe7p-180, 0x1.e5db216bb4dabp-259, 0.0,
     0x1.e767b34381c92p-221, 0.0, 0x1.5f0d7827203dap-647, 0x1.1035b8a2eca2fp-163, 0.0,
     0x1.e52c39ae625d8p-696, 0x1.7caa1d773b408p-1011, 0.0, 0.0, 0x1.14d5932b97b8ap-91,
     0x1.2ed02429a3916p-1019, 0x1.a5225e650967fp-448, 0x1.4ca36f0b7c035p-851, 0.0,
     0x1.f4f9f3a715e9bp-1002, 0x1.c403dd917e95cp-564, 0.0, 0x1.606666497da6dp-814,
     0.0, 0.0, 0x1.cef058de8274ep-138, 0x1.beb091dfa87fap-389, 0.0,
     0x1.78cb286154ecdp-759, 0x1.9a43e156ef91dp-305, 0.0, 0x1.737a35aac4b5cp-264,
     0x1.3ae1fe15d4ed8p-965, 0x1.d36e3558a034fp-685, 0.0, 0x1.65bdc482c4f1dp-947,
     0x1.e7e8402b6c08ap-131, 0x1.2d7261a6580eep-37, 0x1.8d8b11b8428c3p-987, 0.0, 0.0,
     0.0, 0x1.26b7d394aeea2p-625, 0.0, 0.0, 0x1.3c1c94a4f68c9p-873, 0.0,
     0x1.946d7df00ca1cp-403, 0.0, 0.0, 0.0, 0x1.4d9abc4d36a8p-710,
     0x1.2848f2ef5f605p-283, 0.0, 0x1.4bbe65ee251ecp-399, 0.0, 0.0,
     0x1.f4924ea712f41p-482, 0.0, 0x1.15133fd300a77p-141, 0x1.f4124f7960b84p-761,
     0x1.1f88305f9fc1ap-192, 0.0, 0.0, 0x1.c0d6f1a0e382fp-464,
     0x1.e0ac2598a41acp-1010, 0x1.624af7ad41f23p-878, 0.0, 0.0, 0.0, 0.0,
     0x1.9ab6b03349b3ap-222, 0x1.762d27bf92cacp-783, 0x1.2895f17155ccfp-972,
     0x1.77b93e087e026p-940, 0x1.399f0499d1ae9p-712, 0.0, 0x1.89f6caa549474p-942, 0.0,
     0x1.c4402851f1ac6p-211, 0x1.2ad90290d09ccp-640, 0.0, 0x1.5fecd0c9a94b8p-559,
     0x1.569bb035cb8dbp-190, 0.0, 0.0, 0.0, 0x1.ef286d7ae8d8cp-823, 0.0,
     0x1.3e21d724846c7p-821, 0x1.e791ece470df8p-935, 0x1.260af840b60ecp-640,
     0x1.08fcaa0d09e06p-741, 0x1.cfe3fedf76f9ep-380, 0.0, 0.0, 0x1.c4b3d2447d912p-850,
     0x1.ebae68bd6a031p-802, 0.0, 0x1.77c2af7345bb8p-153, 0.0, 0.0,
     0x1.88f5fc9835227p-285, 0.0, 0.0, 0x1.7a9f3ffd0a0dep-688, 0x1.cae498b9ca639p-845,
     0x1.3a5c286bc74cdp-480, 0x1.08723d9ba09fap-824, 0x1.930c138e4a1d3p-337,
     0x1.32a2f3268971p-892, 0.0, 0.0, 0.0, 0.0, 0x1.cf02dbbb6463bp-616,
     0x1.9c34d5eada89dp-829, 0x1.1ca363a01e49bp-434, 0x1.6f3aebc767963p-688,
     0x1.9ac2f49fee12p-393, 0x1.8fddc03ce026ep-848, 0.0, 0x1.f1b62871d6e6ap-854, 0.0,
     0.0, 0x1.3d206d31a8deep-439, 0x1.0ed44484d8894p-186, 0.0, 0.0,
     0x1.59bb5ada98539p-105, 0x1.b0b1e14a5aecap-231, 0.0, 0x1.650a72f99fe9bp-405, 0.0,
     0x1.74b760c377bf1p-314, 0x1.71be22b2978efp-259, 0.0, 0.0, 0.0,
     0x1.37e4591a54e2cp-733, 0.0, 0.0, 0x1.c6a48cd9119fap-359, 0.0,
     0x1.a994f48940c1ap-684, 0.0, 0.0, 0x1.8d5099e82b79bp-26, 0x1.032cceebf704bp-943,
     0x1.13875d55f0d8p-68, 0x1.1b88a2801f49p-820, 0.0, 0x1.dc45c13b66a22p-546, 0.0,
     0.0, 0x1.3d995310b45bfp-826, 0.0, 0.0, 0x1.b5e0f8c5b5911p-612, 0.0,
     0x1.1635b9ca1f49p-943, 0x1.ba156737bb2ap-999, 0x1.149f9b623b437p-289,
     0x1.11bb512e85967p-35, 0x1.09914226cc825p-110, 0.0, 0x1.7042f790350afp-763, 0.0,
     0x1.a312f1257c477p-1013, 0.0, 0x1.bff76706eb3bdp-956, 0x1.6a61d6a6111a2p-981,
     0.0, 0.0, 0x1.93f5b0f9083edp-466, 0x1.f14ad8a84573bp-51, 0x1.a841f5beb552ap-603,
     0.0, 0x1.a86c9e57867cfp-271, 0.0, 0.0, 0x1.193e04dabc483p-369,
     0x1.0360bc80b59e8p-432, 0.0, 0.0, 0x1.ab2a1f29dbef3p-45, 0.0,
     0x1.0c314ee1c78b2p-557, 0.0, 0.0, 0.0, 0.0, 0x1.0d0c50dcb54c2p-627,
     0x1.0bc41497beb02p-1015, 0x1.cf3f809717285p-208, 0.0, 0.0, 0x1.31e2bdc5d88d8p-28,
     0x1.233b4e1c442ffp-241, 0x1.a26e134786af9p-834, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da87ebb5317c3p-749, 0x1.de1d3a90704c7p-838, 0.0, 0x1.88d15c68e3ad6p-485, 0.0,
     0.0, 0.0, 0x1.88dd92e594fe4p-630, 0x1.c5c973d4d7821p-238, 0x1.b23b3ad2a07fbp-601,
     0x1.38f1e22142ed9p-50, 0.0, 0.0, 0.0, 0x1.b31d8b3eb0d69p-172, 0.0,
     0x1.01b9f15a8fb0ap-413, 0x1.f626c2d119f23p-21, 0x1.09b606b8f2a2ap-210, 0.0,
     0x1.ba2b02b491c7dp-303, 0.0, 0.0, 0x1.2a2a1541d104cp-291, 0x1.492ce9b6b810bp-323,
     0x1.8442d7a40f99cp-813, 0x1.45976add18f68p-613, 0.0, 0.0, 0.0,
     0x1.2107125ac1e1p-545, 0x1.c88d85be99dfbp-102, 0x1.cc0748eb88ff8p-523,
     0x1.4e45a8f4c95ecp-867, 0x1.bd41c894f928bp-285, 0x1.b44227700529bp-956, 0.0,
     0x1.51f47d39fe6e9p-704, 0x1.385426ae0f36fp-110, 0x1.bd45de95e2f64p-353,
     0x1.27262b6e44fbbp-970, 0.0, 0.0, 0x1.19d8a4abfd419p-969, 0.0, 0.0, 0.0,
     0x1.ed77af1bb0798p-412, 0x1.0a27b8553a2ep-914, 0.0, 0.0, 0.0, 0.0,
     0x1.460ce984c606dp-704, 0x1.e9b1158f71563p-374, 0x1.5a0c243b1f86cp-714,
     0x1.7d7415f09cc41p-412, 0x1.298ce94b0fd69p-602, 0.0, 0.0, 0x1.37cd8339aa4a7p-624,
     0.0, 0x1.9cf592888bb62p-819, 0x1.25c498d25ea6dp-673, 0x1.adaf409c04e74p-277,
     0x1.b86f4901fbaccp-420, 0x1.821164bfa6d9cp-935, 0.0, 0.0, 0.0,
     0x1.e12b1516fb875p-780, 0.0, 0.0, 0x1.9900d1e5faa4p-270, 0x1.4e51869d504aap-455,
     0.0, 0x1.6722da8ccf811p-770, 0x1.a73dd2b64c775p-566, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3f5254368efbbp-267, 0.0, 0x1.9ee3068651c54p-636, 0.0,
     0x1.15d88c85e12eep-117, 0x1.701e8c0b898bcp-542, 0.0, 0x1.852cc4f374e96p-58,
     0x1.e4a65f861694ap-904, 0.0, 0x1.761181904c455p-798, 0.0, 0.0,
     0x1.2c8cb57cbdcd1p-452, 0.0, 0x1.def15637dd7p-455, 0x1.d828680de8002p-378, 0.0,
     0x1.5f9b7a417a9ffp-515, 0x1.3b24162772395p-215, 0x1.7c540c3f80e3cp-253,
     0x1.d83ba5f04b083p-829, 0.0, 0x1.4a4020517081p-59, 0x1.e1c4e8b310327p-499,
     0x1.72a5b5e216bf3p-539, 0x1.107444031b5d5p-477, 0x1.e3135c848fddfp-19,
     0x1.ea332a1a8e737p-83, 0.0, 0.0, 0x1.be77ff0bbbc65p-330, 0.0, 0.0, 0.0,
     0x1.ffeff4a04bffdp-619, 0.0, 0x1.b809b3cbc7d72p-313, 0x1.7bb98674f9d2p-962, 0.0,
     0.0, 0.0, 0.0, 0x1.afa052a37c926p-674, 0.0, 0x1.1842dd1dd62f7p-64, 0.0, 0.0, 0.0,
     0x1.acd2e1967bd76p-547, 0.0, 0.0, 0x1.53d48632b948dp-360, 0.0,
     0x1.725b02aa23687p-18, 0x1.8d961b7347bep-709, 0.0, 0x1.da803a59c3175p-873,
     0x1.764e5e859e1a7p-614, 0x1.f1cb9528c8741p-465, 0.0, 0x1.c4327a59272e2p-466, 0.0,
     0.0, 0.0, 0.0, 0x1.6b6ff51ab84bcp-624, 0.0, 0.0, 0x1.b5d5128ce301fp-268,
     0x1.45ec06eefb3d2p-460, 0.0, 0.0, 0.0, 0x1.26f09f4e80385p-98,
     0x1.8ab3934c21707p-797, 0.0, 0x1.f9211f9a798a6p-362, 0.0, 0x1.0dfe915dd1f54p-45,
     0.0, 0.0, 0x1.ba06ed39189ebp-34, 0x1.8b39530825675p-972, 0x1.878c49f0fb689p-305,
     0x1.344d8abbd40bcp-813, 0x1.2b8c162513eb2p-106, 0x1.53b54929980f2p-789,
     0x1.cb387ea29ac71p-116, 0.0, 0x1.00a1a8a059396p-815, 0.0, 0.0, 0.0,
     0x1.0f23a974c25e2p-259, 0.0, 0.0, 0x1.92891e85d1c81p-999, 0.0, 0.0, 0.0, 0.0,
     0x1.bff31e1521fap-753, 0x1.debccd3686223p-434, 0x1.a0d7c6a81f6cp-817,
     0x1.c407cc8bdca78p-881, 0x1.c36718168035fp-610, 0x1.3bfe96ea23a6bp-747, 0.0,
     0x1.2947cfbd987a2p-443, 0x1.d962baac72f61p-15, 0.0, 0x1.40d8d417804f6p-147, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.94ca19db81545p-830, 0.0, 0x1.c8dfd39eb8f2ap-322, 0.0,
     0x1.cbbfae3733a14p-676, 0.0, 0x1.7bd940cc214f7p-385, 0x1.b303d0d9f50fep-430,
     0x1.2b852eaad8098p-955, 0x1.80a62dcff40aap-892, 0x1.26b5e57f522ccp-243, 0.0, 0.0,
     0.0, 0.0, 0x1.470464ad45461p-204, 0.0, 0x1.56e957ea91047p-676
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sqrtd2_u05kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sqrtd2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sqrtd2_u05kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
