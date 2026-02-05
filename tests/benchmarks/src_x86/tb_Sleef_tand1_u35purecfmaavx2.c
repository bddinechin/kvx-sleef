/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand1_u35purecfma.c --function Sleef_tand1_u35purecfma \
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
     0x1.3c795cb04e373p-608, 0.0, 0x1.2ddf7c210f6b8p-749, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4b80415287dcep-428, 0.0, 0x1.4ed11f9f45128p-974, 0.0,
     0x1.e174b837919b8p-794, 0x1.843569cc558b6p-717, 0.0, 0.0, 0.0,
     0x1.d2a7254118d28p-889, 0.0, 0.0, 0.0, 0.0, 0x1.96118acf074d5p-309, 0.0,
     0x1.b5133cf85e409p-48, 0.0, 0x1.2027468425dddp-505, 0.0, 0.0, 0.0,
     0x1.adf2ead82e1dep-405, 0x1.fc10ef2c379f4p-333, 0.0, 0.0, 0x1.4869f265d2376p-330,
     0x1.9c8a2ec93616ep-1009, 0.0, 0.0, 0x1.48e05fc566639p-815, 0.0,
     0x1.5e1a9e3ba5c61p-389, 0x1.5c1d6f991d22fp-330, 0.0, 0x1.bc42b90a668f9p-574, 0.0,
     0x1.f482517889139p-820, 0.0, 0.0, 0.0, 0x1.6144b4a5d5f4bp-317,
     0x1.38055d2d1b999p-539, 0x1.480887e34eacbp-905, 0x1.b2f102d5fb448p-663,
     0x1.5ef61591ec37ap-397, 0x1.9b5f3f3badc5ep-390, 0.0, 0.0, 0x1.bc438656dd9ccp-584,
     0x1.b0133bd2745dfp-334, 0.0, 0x1.64367a40f1c9cp-166, 0x1.90067364e545ep-600, 0.0,
     0.0, 0.0, 0x1.f999a41e407b7p-495, 0x1.dc79a3647240fp-60, 0.0, 0.0,
     0x1.393cc43a38adbp-485, 0.0, 0x1.4ad4ad2d5aea8p-219, 0x1.21608ad62bba3p-564,
     0x1.647471d0cebc4p-207, 0.0, 0.0, 0.0, 0x1.e3d0faa4dc72p-28,
     0x1.f9699f6c7c2c6p-876, 0.0, 0x1.ed4b9ba85ee5bp-518, 0.0, 0x1.51a55b67a9f55p-914,
     0x1.305cae301f05bp-290, 0.0, 0.0, 0x1.63140d2acf2e4p-94, 0.0,
     0x1.e9b3941a95065p-989, 0.0, 0.0, 0x1.50f71cea73d65p-638, 0.0,
     0x1.e15aeb58fbac4p-376, 0.0, 0.0, 0.0, 0x1.5519bde72fb9dp-153, 0.0,
     0x1.ad55873a26921p-299, 0x1.2d58b849b1be4p-750, 0x1.a4f1daf8ac844p-151,
     0x1.3044b6b08cb61p-954, 0x1.8008a192c2f07p-247, 0.0, 0.0, 0.0,
     0x1.8abca22944ee1p-817, 0.0, 0x1.81f0779f31feep-492, 0.0, 0x1.3ca1de7f4ca34p-125,
     0x1.0cabb5439f506p-151, 0x1.aa0e5e4c9f028p-841, 0.0, 0.0, 0.0,
     0x1.193deb2955999p-80, 0x1.3e7562ab67acep-436, 0.0, 0x1.6ef7b85cfba1dp-507, 0.0,
     0.0, 0.0, 0x1.494a3ca759321p-749, 0x1.76467151a99d9p-781, 0x1.b1201407d08abp-465,
     0.0, 0x1.d580db9554033p-440, 0x1.848b18f497b09p-778, 0x1.425fc39c49ab4p-424,
     0x1.255afd8071da9p-956, 0.0, 0x1.beae0350a624p-81, 0x1.e18dde547a15bp-333,
     0x1.d31c0038b37c3p-748, 0x1.72c7e36a74789p-845, 0.0, 0.0, 0x1.4f7b91cb04b7fp-988,
     0x1.44af723c42c27p-483, 0.0, 0x1.67d3c68329cc8p-688, 0x1.8ebaea2d0e8d4p-1010,
     0.0, 0x1.4f4ff13d355e8p-878, 0x1.bebbc3f3ac59cp-227, 0x1.bc8608db449e5p-408, 0.0,
     0.0, 0x1.e866e650cef41p-777, 0x1.32f61093eb363p-84, 0.0, 0x1.bc7a46904d59dp-444,
     0x1.584c438573282p-711, 0.0, 0.0, 0.0, 0x1.e8aceaf1c4413p-874, 0.0,
     0x1.e5d210a23ef82p-979, 0x1.617933d99767cp-608, 0x1.96301ee92d8fep-409,
     0x1.8d1115d72c0cfp-323, 0.0, 0.0, 0x1.ef9fc3bb11a07p-430, 0x1.5140e98cb92e5p-12,
     0x1.4635177ab7ab7p-850, 0.0, 0x1.48e154fb8f14bp-43, 0x1.e5c0fbd325688p-172, 0.0,
     0x1.7974147194e59p-890, 0.0, 0x1.7e3f5edf9f91dp-563, 0.0, 0.0,
     0x1.16998658bd259p-1000, 0x1.49a92bece8d05p-768, 0.0, 0x1.0326e82edfc1cp-966,
     0x1.df3e131cdb5a2p-268, 0x1.cf3422a20e788p-365, 0.0, 0x1.07033d75e34b5p-447, 0.0,
     0x1.8c91a2d25f4a6p-366, 0.0, 0.0, 0x1.7a9dd798b9ccbp-727, 0.0, 0.0, 0.0,
     0x1.cc4624a85c6b3p-366, 0x1.605361322fecap-142, 0x1.6082612730999p-740, 0.0, 0.0,
     0x1.8272d5c67b4b8p-641, 0.0, 0x1.0894b55f5e297p-1010, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.74d6c70e6cd9ep-6, 0.0, 0x1.32d7020ecbb64p-860, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6eb39da017727p-540, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f536646a07a3p-515, 0.0, 0x1.cb01facf7c11fp-49, 0x1.4770faea5927cp-227,
     0x1.8c15b0bcb49fbp-1022, 0x1.4378dcf8bb288p-960, 0x1.90060135956bp-558, 0.0,
     0x1.a3d2c27c5f259p-820, 0.0, 0.0, 0.0, 0.0, 0x1.eccec7a301764p-47,
     0x1.aa1dc2691e1bap-390, 0.0, 0.0, 0x1.a11c378d001a4p-315, 0.0,
     0x1.0ed33e7c62da8p-193, 0x1.a77c6ba7328fdp-852, 0.0, 0.0, 0x1.6296f6abf128ap-966,
     0.0, 0x1.c3a321ee06a33p-738, 0.0, 0x1.27a2a09fce37ep-75, 0x1.1d194e934578ap-883,
     0x1.c34a627a675fcp-405, 0x1.4063f994b1af7p-413, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.963f1e39da605p-585, 0x1.15111df8a674ep-409, 0x1.e13a0dc42b209p-285, 0.0, 0.0,
     0x1.6b34c9966aee1p-414, 0.0, 0x1.aa3f76f5e8e9ap-349, 0x1.bb0cd20fe20b8p-833, 0.0,
     0x1.33cdd7d61145p-734, 0.0, 0.0, 0.0, 0x1.8f38bd68c2963p-836,
     0x1.a866e8e39a6eep-693, 0.0, 0.0, 0.0, 0x1.6293f6b7ad147p-686,
     0x1.2244011328d3p-210, 0.0, 0x1.872a018afdc82p-566, 0.0, 0.0, 0.0,
     0x1.fbd52ccae019cp-381, 0x1.32d436b7d508ep-35, 0x1.d3efd8396815ep-241, 0.0, 0.0,
     0.0, 0.0, 0x1.aeab618bf5dbbp-839, 0x1.447b42c7e9fcdp-581, 0.0,
     0x1.9ee687cbd4decp-927, 0x1.cd2fa6ef2b55ap-900, 0.0, 0x1.c748224ddad18p-690, 0.0,
     0.0, 0x1.d67e3bb04fc3bp-216, 0.0, 0.0, 0.0, 0x1.387a0c5b1a55ap-446,
     0x1.146056ec6c7d4p-794, 0x1.c59a4ab09803p-876, 0.0, 0x1.7f0a53c28ff59p-102, 0.0,
     0.0, 0x1.18182ea552255p-457, 0x1.fa00000822883p-888, 0x1.4b3d774ca93ep-883,
     0x1.a72a48fb2a9bep-163, 0.0, 0x1.732b91f801723p-258, 0.0, 0x1.c4e583ce014ecp-726,
     0x1.914d6bf43c15p-1005, 0x1.7327cf1ec15f2p-828, 0x1.784b53883bc0dp-846, 0.0,
     0x1.6bacd530c26bdp-65, 0.0, 0x1.7147da5b8f802p-851, 0x1.a64f406024087p-483, 0.0,
     0.0, 0x1.5ed4325e43951p-353, 0x1.a41fd2e9d9175p-259, 0.0, 0x1.4d755b6b79d23p-506,
     0x1.50f315ddc56d7p-311, 0.0, 0.0, 0.0, 0x1.ffdc10a120aa9p-183, 0.0, 0.0,
     0x1.87874e27911b1p-503, 0x1.fb1a74f1470dfp-162, 0x1.f6addd479c814p-544, 0.0, 0.0,
     0.0, 0.0, 0x1.0ac48bc3f07d6p-945, 0.0, 0x1.88f9652c00c09p-448, 0.0,
     0x1.579d77877a49p-139, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28b2fd25d0202p-36,
     0x1.ab3cd5d34dd7dp-302, 0x1.955abb1118fc5p-1004, 0.0, 0x1.3647ca0ed6ab6p-627,
     0.0, 0.0, 0.0, 0x1.a473e43e32169p-416, 0x1.3ea590563da32p-607,
     0x1.7a54b47686c15p-326, 0x1.de67962f97253p-532, 0.0, 0.0, 0x1.2999d29bcfbefp-605,
     0x1.07fdb8f722ac1p-669, 0.0, 0.0, 0.0, 0.0, 0x1.0c1ed74734691p-416, 0.0, 0.0,
     0x1.fdbe315252d1dp-139, 0x1.5e9faf7db725bp-422, 0x1.f8cd07806cc3fp-966, 0.0, 0.0,
     0.0, 0x1.61a7f594c56a2p-854, 0x1.3f89859bd240bp-747, 0.0, 0.0, 0.0,
     0x1.c56a424d03481p-9, 0.0, 0x1.074458efa149ap-238, 0.0, 0.0, 0.0,
     0x1.34f43e51fcfd8p-456, 0.0, 0.0, 0x1.90f490662f16cp-409, 0.0, 0.0,
     0x1.45e1451861a44p-925, 0x1.4bb768aa7a187p-689, 0x1.0fb0342794ec4p-130,
     0x1.673617f153e3ap-302, 0x1.fd0168171c604p-110, 0x1.ef3ad11c991a1p-429, 0.0, 0.0,
     0.0, 0x1.d6b3f3c2e3ee4p-23, 0.0, 0x1.d979d4a75278cp-29, 0.0,
     0x1.f32899923665dp-3, 0.0, 0.0, 0.0, 0x1.7dd44b48eb752p-490,
     0x1.5570203cffaf6p-995, 0.0, 0.0, 0x1.56799d04043e6p-78, 0.0,
     0x1.9e773874e7d6ep-345, 0.0, 0.0, 0x1.2db1555334111p-29, 0.0,
     0x1.33bcda34e6dc3p-648, 0.0, 0x1.1cc4b3811e471p-751, 0x1.36b850b0b4c11p-210,
     0x1.ae60ab9033207p-402, 0.0, 0x1.0fa5dd4ba0514p-517, 0.0, 0x1.33e4f3fe64906p-810,
     0x1.33ed38735af51p-267, 0.0, 0.0, 0x1.5105ddfc9035fp-132, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.412bd488eb481p-229, 0x1.a38a4fceca09p-530, 0.0, 0.0,
     0x1.84191dff62ecdp-768, 0.0, 0.0, 0.0, 0x1.1c281ae099947p-394,
     0x1.1c93cdacdd3c3p-842, 0.0, 0.0, 0x1.5e1ae47189e82p-574, 0x1.e7d33031d34a3p-338,
     0.0, 0x1.12aa35fc4ac37p-357, 0.0, 0.0, 0.0, 0x1.9331eb593ed59p-680,
     0x1.8a7ba164b7104p-586, 0.0, 0x1.d544497f30b37p-1006, 0x1.cdcde12d32fp-361, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bacee8d90893bp-275, 0.0, 0x1.8ddb898e2b5b4p-450,
     0.0, 0x1.87c31f686f2f2p-801, 0x1.8ce50e982613p-445, 0.0, 0x1.52861f82991f4p-83,
     0x1.b4fd2e79e8edp-183, 0.0, 0.0, 0.0, 0.0, 0x1.a89197f3b4766p-193,
     0x1.f8a34662fe3fdp-655, 0x1.be77d5b491206p-42, 0.0, 0x1.a2ace523e2d74p-693, 0.0,
     0x1.0da4bdb372ecap-58, 0.0, 0.0, 0x1.4bab6d2453fc3p-832, 0.0, 0.0,
     0x1.ee87fbfd1a53ap-327, 0.0, 0.0, 0.0, 0x1.bd3f8409b55acp-806,
     0x1.7b09143541e33p-732, 0.0, 0.0, 0x1.d9a91db78f56dp-833, 0.0,
     0x1.36915894def67p-85, 0.0, 0.0, 0.0, 0x1.0fc756e3c2be9p-842,
     0x1.8f36d495d131p-449, 0.0, 0x1.61a3690379941p-624, 0x1.d980896ec0051p-20, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a2367f2ff1e5bp-88, 0.0, 0.0,
     0x1.30d87cf786695p-124, 0x1.2a537d79053dbp-558, 0.0, 0x1.a72dcc116f8b1p-997, 0.0,
     0.0, 0x1.5c8b93e3a4fa1p-25, 0x1.e38caa344e985p-143, 0.0, 0.0,
     0x1.55d7f18454751p-182, 0.0, 0x1.6409394025865p-31, 0.0, 0.0,
     0x1.966b146b602b3p-169, 0.0, 0x1.6bf401b9268b6p-92, 0.0, 0.0,
     0x1.8a0e345d0d77cp-225, 0.0, 0.0, 0x1.73dc6033b235bp-28, 0x1.4a169d106afbap-854,
     0.0, 0x1.17fce91e0215ap-268, 0.0, 0.0, 0x1.21b8cd4e35333p-138,
     0x1.48cb46dd79e09p-291, 0x1.ad8e5b53007a7p-695, 0.0, 0x1.19961d77096d6p-885, 0.0,
     0x1.3fdb05c017e22p-894, 0.0, 0.0, 0.0, 0.0, 0x1.24bc317ab4c2ap-948,
     0x1.26c70958f823ep-566, 0x1.98a010d84ad9cp-397, 0.0, 0x1.9ef8502ffb52ep-51, 0.0,
     0.0, 0x1.7d0f3b7f59deep-966, 0.0, 0x1.688ac3db69e2ep-821, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cff892d0bad93p-104, 0.0, 0.0, 0x1.003088a2be7fcp-612,
     0x1.164492ed980a4p-153, 0x1.b5210e35f80e7p-168, 0x1.36de32ad72e55p-1020, 0.0,
     0x1.140b3e47448f9p-155, 0.0, 0.0, 0x1.eb734fba19c36p-412, 0.0,
     0x1.a633ff68b372cp-994, 0.0, 0x1.3b9796394536cp-351, 0.0, 0.0,
     0x1.bb2335acdf995p-332, 0.0, 0.0, 0x1.9b2ed2b4ed262p-429, 0.0, 0.0, 0.0,
     0x1.5125778920f59p-796, 0.0, 0x1.266921a5468ep-80, 0.0, 0x1.8c715a769b5e9p-409,
     0x1.382e4eb2603e7p-613, 0.0, 0.0, 0x1.01c84bedab9c2p-938, 0x1.86ae57c5034dcp-340,
     0x1.be27eb5ce1c94p-657, 0x1.5958362030a26p-385, 0x1.9858265e9dbc7p-368,
     0x1.d3cb72f8a0458p-600, 0.0, 0.0, 0x1.c223a12a0dbd9p-748, 0.0, 0.0, 0.0, 0.0,
     0x1.405f060d5f8ffp-357, 0.0, 0.0, 0.0, 0x1.48173b6bbeb29p-36, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2c06c2411c498p-720, 0.0, 0x1.0e49cdedafb7ep-211, 0x1.37e536c72bb12p-247,
     0x1.5005ca274c9fbp-884, 0x1.a492c7d529acfp-220, 0.0, 0.0, 0.0,
     0x1.b86b4e5e83d9ep-416, 0.0, 0.0, 0x1.ef4053d7d6fabp-356, 0x1.96b44232f06dcp-509,
     0.0, 0.0, 0x1.ff52c20513c7ap-946, 0.0, 0x1.5a002bf87ecfap-129, 0.0, 0.0, 0.0,
     0x1.5a149d30daacfp-376, 0.0, 0.0, 0x1.0c028f7f192cep-826, 0.0, 0.0,
     0x1.de0b1482e88bap-921, 0x1.75010e7a5f6c6p-150, 0.0, 0x1.ef8dad67f52aap-173,
     0x1.0ce1ae1cdf18p-933, 0x1.5909ad5b86bfep-347, 0.0, 0.0, 0x1.b99f0a11878c3p-345,
     0.0, 0.0, 0.0, 0.0, 0x1.d67b331371746p-403, 0x1.caa13cf33f4b3p-422, 0.0, 0.0,
     0.0, 0x1.7ed1b37dae96cp-73, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.32b192dfa4b7ap-65, 0.0,
     0x1.57f8cff17eb4ep-183, 0x1.a4aff69dcd29p-544, 0x1.ecc576df09951p-609,
     0x1.a9be54367ff47p-704, 0x1.3729d9b61d986p-70, 0x1.bfc93a21ef6d7p-834,
     0x1.9588e3f5668f3p-417, 0x1.7605f1673d94fp-545, 0x1.2b5630992759ep-92,
     0x1.c47f1107d4bep-323, 0x1.566cfa6357c9bp-272, 0.0, 0x1.b6b4b1d89a95ap-220, 0.0,
     0x1.683ab703bd0c9p-596, 0.0, 0x1.1b4c8d1298dfep-785, 0.0, 0.0,
     0x1.79557d716deccp-829, 0.0, 0.0, 0.0, 0x1.d059de5534043p-219, 0.0, 0.0,
     0x1.e5ba8de23679fp-701, 0x1.5d8a6677b23d5p-803, 0x1.59f91ee5d4afbp-642, 0.0, 0.0,
     0.0, 0.0, 0x1.6f66b9534fcefp-946, 0.0, 0x1.1d20c28d068b5p-243,
     0x1.e8e6659dba8bp-385, 0x1.ac9b23675e6ddp-470, 0.0, 0.0, 0x1.57479370fdc89p-591,
     0x1.4fe06c2d05f4cp-592, 0x1.e56414bea6d51p-864, 0x1.e01d0963f02a8p-352,
     0x1.af52ac99be91p-786, 0x1.3373d83fdd0e1p-880, 0.0, 0.0, 0x1.150ae834260ffp-359,
     0.0, 0x1.1a14742d0bc8p-1010, 0.0, 0.0, 0x1.2c7486ae54084p-490,
     0x1.9c2f7c03ff86cp-831, 0x1.4795a5d35b9cep-923, 0x1.76b95839dd564p-501,
     0x1.4b356df69ec0dp-760, 0x1.5e176ed69dc0ep-283, 0x1.e8137da24caedp-378,
     0x1.57561c8520efbp-138, 0.0, 0.0, 0.0, 0.0, 0x1.41be5fdcd44e8p-710, 0.0,
     0x1.28b38e61fd848p-268, 0x1.1b9bbe43fb966p-81, 0x1.eae7b5c6a5ff1p-272, 0.0, 0.0,
     0x1.2a51c7d9b2126p-144, 0.0, 0.0, 0x1.ead98aad0761p-754, 0.0,
     0x1.236075ed31791p-39, 0x1.6e751de50fcc4p-94, 0x1.ac87a2b0cafe2p-221,
     0x1.7f87749642ccap-289, 0x1.0b70588690cdcp-47, 0x1.5aeee07e95ea3p-679,
     0x1.29d7e2b1ade4ep-615, 0x1.0cc3a30aa729cp-699, 0.0, 0x1.c5f5cd05e6efbp-998,
     0x1.e61fcabd518adp-883, 0.0, 0x1.a73e233eb9fdp-221, 0x1.3463aa423d6bfp-248, 0.0,
     0.0, 0x1.6ad422a499fb9p-177, 0.0, 0x1.f62f6d033fd8fp-917, 0.0, 0.0, 0.0,
     0x1.6ed53a96b1d67p-802, 0.0, 0.0, 0x1.8180275206e77p-451, 0.0,
     0x1.74aaed8cc41a1p-240, 0.0, 0x1.053ae56603b24p-684, 0x1.37668e8d0af7cp-777, 0.0,
     0x1.5bd70113c076dp-489, 0.0, 0.0, 0x1.8a056e488da3dp-150, 0.0, 0.0,
     0x1.9efeae5c36653p-762, 0.0, 0x1.d6f26655f6d65p-38, 0.0, 0x1.448282b45f8d3p-173,
     0x1.d8077f33c8e4ep-962, 0x1.0dcdf33665c69p-1002, 0x1.99b50c373a5ccp-21, 0.0, 0.0,
     0.0, 0x1.56fa37171953dp-339, 0x1.30aa604522e38p-92, 0.0, 0.0,
     0x1.5599a063c790cp-563, 0.0, 0x1.ad332afafb8e2p-975, 0.0, 0x1.a343257e0f627p-676,
     0x1.3a64aee2b0926p-366, 0.0, 0x1.3f6aa83f6e0b4p-812, 0x1.6fad7cb63912cp-254, 0.0,
     0x1.7f0827b537157p-1000, 0.0, 0x1.55aef73919ecap-34, 0.0, 0.0, 0.0, 0.0,
     0x1.1213b15c042efp-941, 0x1.47db21be48bdfp-652, 0x1.fb956051d3b19p-406, 0.0,
     0x1.d3e31eda9a6cfp-587, 0.0, 0.0, 0x1.33e1468e33a6dp-286, 0.0, 0.0, 0.0,
     0x1.6d87e7ddc31acp-18, 0.0, 0x1.58a9c28a83a24p-432, 0.0, 0x1.8b6f927fc8595p-511,
     0.0, 0.0, 0.0, 0x1.0d00c61e0ee3ep-846, 0x1.ca0dd6554aebdp-858,
     0x1.32bf4ad890d2ep-246, 0x1.64fe70e3d3562p-979, 0.0, 0x1.fb907b2afaf84p-143,
     0x1.e5b8061582c31p-522, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be9e0a240902p-1014,
     0x1.ececd05c47e0ap-407, 0x1.57c1a760aac2ap-145, 0x1.7604549d2a7a5p-495, 0.0, 0.0,
     0.0, 0.0, 0x1.aa950947becbep-391, 0.0, 0x1.d136a8d9d4447p-272,
     0x1.bb026f50dbdebp-119, 0x1.7b70f0eb507a3p-437, 0x1.9ccb50788d231p-742, 0.0, 0.0,
     0.0, 0x1.c44c319617fa2p-903, 0x1.fe65708c2e80bp-523, 0.0, 0.0, 0.0, 0.0,
     0x1.92cff34f27fdfp-214, 0.0, 0x1.45df513781ffap-249, 0.0, 0x1.ffbe10abb9e99p-750,
     0.0, 0.0, 0.0, 0x1.f3da7ddb61627p-434, 0x1.144885572cfa1p-196, 0.0, 0.0,
     0x1.83001cdbcbaecp-864, 0x1.0ab26581f9e82p-736, 0x1.5410aba198f84p-597,
     0x1.421157ea973p-585, 0x1.a1f5819bb5df9p-277, 0.0, 0.0, 0x1.daa62fcf55a6ep-463,
     0x1.10cdf02c087f9p-63, 0x1.3fa5c810f691ap-55, 0.0, 0.0, 0x1.246a04e4619bdp-656,
     0x1.b560c8b79e9c1p-408, 0x1.f4a052bf3194dp-181, 0.0, 0x1.b06d8825a94bbp-700,
     0x1.5fb8cc4ead4e3p-647, 0x1.4f0807781688dp-138, 0x1.2f5e2603589d6p-182, 0.0, 0.0,
     0x1.6bbe739f74f9p-578, 0x1.569fd3e8532d1p-956, 0.0, 0x1.034c2ffcb0e08p-461, 0.0,
     0.0, 0x1.d4ad33b61c91dp-160, 0.0, 0x1.c97cb125c66b8p-560, 0x1.8f672c3cedf0cp-66,
     0x1.ee99207cea9fp-918, 0x1.c383c97de5d27p-620, 0.0, 0.0, 0x1.64073621eb651p-499,
     0.0, 0x1.08554b1f204eep-824, 0x1.9b5152b871216p-227, 0x1.49aa6b46aefffp-713, 0.0,
     0.0, 0x1.6f53d8a06cb15p-112, 0x1.470eb25d3fa66p-172, 0.0, 0x1.2397414c7d085p-416,
     0.0, 0x1.8c2208a410d48p-64, 0.0, 0x1.7cd8c63422adep-666, 0x1.9c8d5ccf988a3p-776,
     0x1.ae753d963df97p-155, 0x1.4c84ce843ac4ap-83, 0.0, 0x1.9d1cdc34dce75p-583, 0.0,
     0x1.654154aef2e13p-22, 0x1.f1ae229b79138p-439, 0.0, 0x1.9e9f76a2187a5p-74, 0.0,
     0.0, 0x1.de9523e10d01cp-852, 0.0, 0.0, 0.0, 0.0, 0x1.c87dfaa54e66ep-745, 0.0,
     0x1.facb79f46a2f7p-435, 0x1.fe968f3b0cb37p-259, 0x1.88852aa2e628p-213, 0.0, 0.0,
     0x1.b3a712097ca7p-580, 0x1.209221d8eab61p-799, 0x1.1c0f00902ae2cp-362
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
            tmp1 = Sleef_tand1_u35purecfma(tmp0);
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
    printf("Sleef_tand1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tand1_u35purecfma bench acc %la\n", global_bench_acc);
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
