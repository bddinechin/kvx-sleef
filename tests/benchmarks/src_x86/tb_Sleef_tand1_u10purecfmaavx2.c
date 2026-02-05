/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand1_u10purecfma.c --function Sleef_tand1_u10purecfma \
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
     0.0, 0.0, 0x1.5de38d1e57d2p-995, 0.0, 0x1.1f6fa9da6721p-943, 0.0, 0.0, 0.0,
     0x1.e1086fb89538p-51, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d3549d5b2e5bp-48,
     0x1.805c0717ac9bdp-791, 0x1.ff3a7e297f11ep-472, 0x1.5ff42d190242cp-892,
     0x1.ad3e25a02ebf1p-392, 0x1.f68021e2c45e7p-329, 0.0, 0x1.93b25ba711d16p-170, 0.0,
     0x1.96cc61216a6cep-927, 0.0, 0x1.96e7c78ef80ap-793, 0x1.beadb5179f644p-930, 0.0,
     0x1.003c4bcc2c7a2p-490, 0.0, 0x1.8f8b2c8692babp-882, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.edf4031915cd8p-249, 0.0, 0.0, 0.0, 0x1.b1e12fe874265p-237, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.18dff701d1792p-21, 0.0, 0x1.9d525c6ee7b02p-226, 0.0,
     0x1.0820061e4446p-623, 0.0, 0x1.2817d968a2f34p-656, 0x1.c8e3a14acc2dfp-433,
     0x1.e777a9505152p-878, 0.0, 0x1.5a1be0e8bcb06p-336, 0x1.0e4766dfe0af3p-5, 0.0,
     0.0, 0x1.dfc98152029fp-489, 0.0, 0.0, 0x1.bed3c5a057325p-869,
     0x1.deff0669a1ed2p-740, 0x1.60d63d74a142ep-747, 0.0, 0x1.1bbb1a33d6981p-669, 0.0,
     0.0, 0.0, 0x1.3a46ef8758d19p-225, 0.0, 0x1.9b1c64cd8f9d2p-679,
     0x1.03e085712e7bdp-950, 0x1.d5570221ff9p-309, 0.0, 0.0, 0x1.0a70727972733p-248,
     0.0, 0x1.c23d025f26d8ap-821, 0.0, 0x1.5cb1bb6511358p-809, 0.0,
     0x1.865d13f282ae3p-62, 0x1.fc56ecf87c563p-378, 0x1.a65b6ca2345cbp-171, 0.0,
     0x1.29c242b37bef5p-571, 0x1.a16c72fa8d215p-187, 0.0, 0x1.c7382c569ced3p-886, 0.0,
     0x1.1319ec9619ed8p-61, 0x1.6003d61faca8dp-851, 0x1.ff29b23cfca9cp-610,
     0x1.4cf7d29de46d6p-151, 0x1.fec3230411511p-296, 0.0, 0.0, 0x1.9427d8deb5e09p-902,
     0.0, 0.0, 0.0, 0.0, 0x1.feb730bdbaaf6p-357, 0.0, 0x1.c24abdcbb75d7p-246,
     0x1.f2de39a0fb8abp-1022, 0x1.9da8b89442b77p-680, 0.0, 0x1.3994570d2971bp-379,
     0.0, 0.0, 0x1.e9f01fb0c6f82p-914, 0x1.646005adafeb3p-442, 0.0,
     0x1.fc7cbabfefb05p-140, 0.0, 0x1.4602aebcf38cdp-555, 0x1.ffea539b5fb34p-5, 0.0,
     0.0, 0.0, 0x1.c2648a99d89adp-757, 0x1.f00e9a718d8bp-343, 0.0,
     0x1.2fc56880fce8ep-705, 0x1.62939103241bap-326, 0.0, 0x1.3f5abd48ae7fap-766, 0.0,
     0x1.fa1ed14613054p-893, 0x1.0f77209ddc847p-437, 0x1.92ec8627a1c5ep-40, 0.0, 0.0,
     0x1.5f9e6f9af727bp-691, 0.0, 0.0, 0.0, 0x1.396a86bb7984ep-112,
     0x1.e911a64653b99p-862, 0x1.00f3fa7791ddep-195, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.29ea8de75aa3bp-732, 0.0, 0x1.5649f264bef9bp-763, 0.0, 0.0, 0.0,
     0x1.c2fbe12014125p-835, 0.0, 0x1.f503112a9848dp-158, 0x1.af2eeeac5f5c6p-797,
     0x1.d7dd865e589a9p-5, 0x1.12ba8c0512316p-725, 0.0, 0x1.93761a6bc4ba7p-411, 0.0,
     0x1.610635981d0f6p-577, 0.0, 0.0, 0x1.25178e1dc07dp-155, 0x1.027bb582ad9afp-1005,
     0.0, 0.0, 0x1.491bfad272c56p-183, 0x1.3c5ae373f4483p-233, 0.0,
     0x1.4e29eefeab095p-784, 0x1.e9e56a5864976p-113, 0x1.ae810b96334e9p-9, 0.0, 0.0,
     0x1.5008d19708927p-67, 0.0, 0.0, 0x1.ffcea46523611p-14, 0.0, 0.0,
     0x1.13bc3f8a9ca5ep-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e2ed5537bee8p-808,
     0x1.639c9f4b8a5acp-916, 0x1.ceba77625d704p-345, 0x1.a41845c4d55bbp-922, 0.0,
     0x1.eed205e36b1d1p-46, 0x1.ff052fe62ddfdp-588, 0.0, 0x1.58189cf276875p-393,
     0x1.2dc49f6e787e6p-100, 0x1.54f0e1495398bp-195, 0x1.0f7fc006d3506p-489,
     0x1.c6cb90df4f5ap-613, 0.0, 0.0, 0x1.c277a8c07f7f7p-67, 0.0,
     0x1.5256ed20be151p-910, 0.0, 0x1.f4f7248d67536p-804, 0x1.582553ccc37b1p-421, 0.0,
     0.0, 0x1.4b6f991bd452cp-725, 0x1.21ee8845598aep-135, 0.0, 0.0,
     0x1.efb78753535a1p-941, 0x1.6a4a6a993a7a3p-371, 0.0, 0.0, 0x1.8dbbb36fea71fp-185,
     0.0, 0.0, 0x1.bbcd68fb3616ep-702, 0x1.65c08dcaadf0ep-750, 0.0,
     0x1.c9914cc54925bp-942, 0.0, 0x1.9169464459821p-103, 0x1.e97f0d69b9338p-697,
     0x1.414fa0061bd39p-424, 0x1.becd82ced8655p-988, 0.0, 0.0, 0.0,
     0x1.8d8a257fae91bp-46, 0.0, 0.0, 0.0, 0x1.1b7b8dff3b646p-256,
     0x1.2ae36a2889475p-85, 0x1.11ee8f31e8dc8p-826, 0.0, 0.0, 0.0,
     0x1.95c8e6bc13b57p-979, 0.0, 0x1.c465b02e8539ep-911, 0x1.67ac0a3236c82p-754, 0.0,
     0.0, 0x1.29b764ed0ae77p-441, 0x1.9fc5c601ecda5p-971, 0x1.d98dc10c88d94p-598, 0.0,
     0.0, 0.0, 0.0, 0x1.5d2ddf4b1a6cep-232, 0.0, 0x1.42503ccfe4137p-860,
     0x1.ac309047541a5p-667, 0.0, 0x1.75d210b6b441bp-371, 0.0, 0.0, 0.0,
     0x1.0d6d3f1bfc82dp-541, 0.0, 0.0, 0x1.f93ca3793dec3p-650, 0x1.123133c21623bp-643,
     0x1.9d12cfdf0c879p-574, 0.0, 0.0, 0x1.90a9dace180e1p-636, 0.0, 0.0, 0.0,
     0x1.c63c502b6c5b8p-384, 0x1.f0a9eaa568a0ap-978, 0x1.420338778c7dbp-924, 0.0, 0.0,
     0.0, 0x1.07ca421c1143cp-407, 0x1.82b39414733ecp-846, 0.0, 0x1.7ea294b987755p-442,
     0.0, 0x1.8699c81ccf2c1p-360, 0.0, 0x1.2c74c01ca1533p-755, 0x1.b0a37d62c2b73p-268,
     0x1.004aaf1d3a4f8p-406, 0x1.68a5d05a7e1f3p-600, 0.0, 0x1.5167313e801eap-370,
     0x1.c8b3981f9649dp-711, 0.0, 0x1.d2884cddc8026p-990, 0.0, 0x1.e1645a0018e8cp-302,
     0x1.5c961edf83931p-803, 0.0, 0.0, 0x1.143e02d810274p-471, 0x1.452a8e9003359p-639,
     0x1.84d912978493bp-160, 0.0, 0.0, 0.0, 0x1.772a816cde4bcp-893, 0.0,
     0x1.667840649c263p-341, 0.0, 0x1.ba6c6feb7d6f9p-209, 0.0, 0x1.8d17dddbf81a1p-64,
     0.0, 0.0, 0.0, 0x1.2ea8562b5711p-905, 0x1.b1e91774767ep-235, 0.0,
     0x1.5047fe08c6445p-667, 0x1.6c72017953a2ap-3, 0.0, 0.0, 0x1.aef1133de184ap-994,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74c499062d61p-337,
     0x1.f1afd42c23d6ep-843, 0x1.3e95378cfb327p-318, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eafd512633742p-376, 0.0, 0.0, 0.0, 0x1.83d5ce47304f5p-184,
     0x1.e0c40b3d4b2a1p-737, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2bfa9421b5749p-96,
     0x1.2e814cf8503f2p-885, 0x1.775a01e5f424fp-403, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9368e0fc6eefbp-706, 0x1.4c29a1cef621ep-3, 0.0, 0x1.da0de8a17fa0ap-602, 0.0,
     0x1.42d966e2ceee6p-885, 0x1.f127ee49e7604p-48, 0x1.3b576b5f98f53p-360,
     0x1.5228c78b3b5b5p-464, 0x1.5242766479ac2p-299, 0x1.7a61bb75decc5p-171, 0.0, 0.0,
     0x1.a9f5c02659b15p-925, 0x1.19f4ceb04df37p-924, 0x1.608061b114d54p-105, 0.0, 0.0,
     0.0, 0.0, 0x1.67478a6070dcp-119, 0.0, 0x1.c6d717729e389p-913,
     0x1.4572327192b02p-32, 0x1.17c69619e1fb2p-445, 0x1.49c93a8477e2p-205,
     0x1.6c4142e7662f9p-199, 0x1.af4484af0f912p-42, 0x1.382bf9df68f26p-616, 0.0,
     0x1.a2dc5bf34a11fp-117, 0.0, 0x1.eb21c900270fp-187, 0x1.3ef9cb96fd8c3p-298,
     0x1.2edfc11149bbdp-608, 0.0, 0.0, 0.0, 0.0, 0x1.d3c7b5ed05b7bp-912,
     0x1.71a030c7fc3d2p-683, 0.0, 0.0, 0.0, 0.0, 0x1.a3f54c5412a62p-171,
     0x1.ac01b6ec7be14p-378, 0x1.621bcad3cd926p-150, 0.0, 0.0, 0x1.c4725dbba155ep-358,
     0.0, 0x1.adeb2a3ef1299p-190, 0.0, 0x1.030809090d52bp-514, 0x1.33e7e522d29d8p-616,
     0x1.7023f3bac193dp-495, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d88093e36f298p-437,
     0x1.c931d2636a70ep-548, 0.0, 0.0, 0x1.b31ea9797b65ep-240, 0x1.c8fc9b84bac0bp-220,
     0x1.92f89aced54f2p-985, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d3ddc96477fe4p-445, 0.0, 0x1.e37b0e1a3c651p-496, 0x1.a3d3bc9bd457fp-846,
     0x1.d941c6684a048p-425, 0.0, 0x1.9b53d7808cd94p-365, 0.0, 0.0,
     0x1.653fdebe0facdp-394, 0.0, 0x1.eb72b398d39b6p-698, 0x1.9d55224d6fb14p-745,
     0x1.78fae13c72089p-786, 0x1.0baf234575d37p-442, 0.0, 0.0, 0.0,
     0x1.e633e87fef9bp-981, 0x1.982f51c146822p-739, 0x1.af251a24ad34dp-140,
     0x1.7e9a1741f72fdp-293, 0x1.eecd9c81c5c59p-951, 0x1.14f57d7dc5f58p-274, 0.0, 0.0,
     0.0, 0x1.fd18a82ad406ap-386, 0.0, 0.0, 0.0, 0x1.0e929f393fc49p-399, 0.0,
     0x1.0fed6bd5084a8p-216, 0x1.7bba8702d043cp-304, 0x1.ddea4f47808a7p-323,
     0x1.9317d4fcd207cp-174, 0.0, 0.0, 0.0, 0x1.bb4b930d72b4cp-649,
     0x1.416e929fabe8ap-860, 0.0, 0x1.f67855a731cb9p-614, 0x1.38c475ef4281p-562,
     0x1.0f93998ba23f4p-710, 0x1.45d4a1d9492cep-43, 0x1.78213c0c7bd48p-528, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.872121ca95bafp-109, 0x1.55577225507f9p-880,
     0x1.ea91a94c28093p-538, 0x1.baa9c8c58df2dp-355, 0x1.a9e5626bb0bb1p-874,
     0x1.be7af2f28ca1fp-564, 0.0, 0.0, 0.0, 0x1.9632497f13b77p-822, 0.0,
     0x1.f813269bb0bc6p-290, 0x1.4559acc8bbb19p-261, 0x1.d4a796f873814p-428, 0.0,
     0x1.8bfed77f5707fp-177, 0x1.be0bee8c9de2ap-278, 0x1.b795ff7aba2d6p-265, 0.0, 0.0,
     0.0, 0x1.502182c24a63ap-802, 0.0, 0.0, 0.0, 0x1.985fde07b0ebcp-817,
     0x1.a4f04df5f4a7dp-52, 0.0, 0.0, 0x1.8b8ec77620fc4p-36, 0.0,
     0x1.d45c6be369db8p-374, 0x1.44647019891f4p-274, 0.0, 0x1.cea10e258be6cp-446, 0.0,
     0x1.ca78f71cec347p-897, 0.0, 0x1.9337094c6d587p-814, 0.0, 0.0,
     0x1.2a9ccb76c9421p-387, 0.0, 0.0, 0.0, 0.0, 0x1.909d1a6e67cfbp-461, 0.0,
     0x1.a15610fd504fep-389, 0x1.bb616fd032ab7p-993, 0x1.32a0ef3a58cbp-745, 0.0, 0.0,
     0.0, 0x1.6f485652c2091p-741, 0x1.798ea66f46263p-1014, 0.0,
     0x1.da565715d707ap-683, 0.0, 0.0, 0.0, 0x1.fcd0f6e2e12cap-487,
     0x1.fb3241a77f5efp-973, 0.0, 0.0, 0.0, 0.0, 0x1.37d9a62718acap-664,
     0x1.da5b79834eaacp-144, 0x1.3760e134d3315p-768, 0x1.ef03420fb1be7p-782,
     0x1.e853687705f7ap-870, 0.0, 0x1.8bdecd2afb6f1p-53, 0.0, 0.0,
     0x1.f801307a56d2dp-723, 0x1.cc8e021a18e9bp-749, 0x1.794bac8d198ccp-809,
     0x1.de3bc0fae36adp-807, 0x1.83f5cfa637529p-995, 0x1.26ab12b101b6dp-366, 0.0,
     0x1.d9ff1c2f3fdb9p-556, 0x1.26b01239b51e5p-239, 0x1.0b849aaa97f3fp-853, 0.0, 0.0,
     0x1.ffe641b44d46fp-641, 0x1.1540bcb792ed2p-925, 0x1.e0b5ec5a76996p-732,
     0x1.b6c565ef83bbdp-90, 0.0, 0.0, 0.0, 0x1.49d4fef3236d1p-714,
     0x1.8d4d1f4de35efp-850, 0x1.56acf105be2dfp-334, 0.0, 0x1.b0d9aa7d1cb23p-3,
     0x1.c335f32c4c48dp-907, 0x1.3d2e74a3c79abp-436, 0.0, 0.0, 0x1.9c3957a6f28dbp-597,
     0.0, 0x1.16371e830aedcp-501, 0.0, 0.0, 0x1.aaafe360bf45fp-285,
     0x1.07d890c2b6dc8p-283, 0x1.520ff6f1e4137p-889, 0x1.ad8735a958f58p-986,
     0x1.e7cd1fa264d83p-381, 0.0, 0x1.dcbc86738c293p-590, 0.0, 0.0, 0.0, 0.0,
     0x1.bc0baa63d1f3fp-953, 0x1.8202b4f0b336ap-931, 0x1.e14463d16279ap-673,
     0x1.09c88ec8933fp-783, 0.0, 0x1.930fcdfb79521p-622, 0x1.15504edd6bfb5p-643, 0.0,
     0.0, 0.0, 0x1.f919ce8a97e79p-170, 0x1.caa88c0f37d9cp-28, 0.0,
     0x1.df6250c0b10eap-360, 0.0, 0x1.edbc6950c31f3p-179, 0x1.aa2cbd0e83d6cp-563, 0.0,
     0x1.f698c3de5f656p-533, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.04782827a5012p-839, 0.0,
     0x1.5e9a77fa0d882p-397, 0.0, 0x1.8e738067f0b68p-760, 0x1.d379042bb0247p-239, 0.0,
     0x1.db19a4f2cfc22p-423, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4d8d1e8aba58dp-693, 0.0, 0x1.11c18d711c8dbp-969,
     0x1.f99b073784a1ap-652, 0x1.38a00c3cf2393p-271, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8260015f2876cp-604, 0x1.112570246d80ap-132, 0x1.a808f1e515a4ap-228, 0.0,
     0x1.a15931cd48e03p-989, 0x1.9510955db1459p-605, 0.0, 0x1.2bf18c071e6c1p-104, 0.0,
     0x1.c9fd9427f850ap-118, 0x1.86a3acf5b83ffp-725, 0.0, 0x1.a3380697a01bep-785,
     0x1.499feba3d58a4p-812, 0x1.9ce3ca4f68355p-803, 0.0, 0.0, 0.0, 0.0,
     0x1.a49d2a260a20bp-388, 0.0, 0.0, 0x1.1c0a5e9d9f8a5p-11, 0x1.0a4d34edfcb59p-255,
     0x1.85dcae1b99fd7p-661, 0.0, 0x1.e998380efdb1fp-723, 0.0, 0.0,
     0x1.78ace469f791ep-460, 0x1.d2546b8380eaep-341, 0.0, 0x1.1c8317b11a91dp-991, 0.0,
     0x1.d93d62bc42155p-937, 0x1.290343b41d3fbp-355, 0.0, 0.0, 0.0, 0.0,
     0x1.c0e89dee6042ap-915, 0.0, 0x1.ef0544d515a4dp-447, 0x1.beb6b67dfe37p-626, 0.0,
     0.0, 0x1.a7a9d37418cd3p-743, 0x1.328ab71818754p-816, 0x1.d4e41017c7ac3p-452, 0.0,
     0.0, 0.0, 0x1.8c8518ea3a044p-991, 0x1.51a4790a16aa4p-100, 0.0,
     0x1.fc1cd5e5d18eap-1002, 0x1.558de1d842a74p-764, 0x1.24e31260be1f3p-177,
     0x1.ac09961a9175ep-185, 0x1.d2710c652d0e2p-597, 0x1.db6ec666347c3p-150,
     0x1.4304da5e77581p-667, 0.0, 0x1.384529e4c0fa8p-743, 0.0, 0.0,
     0x1.6374a575b45d8p-145, 0x1.f5a320792a731p-360, 0x1.36f0e847bcb26p-837, 0.0, 0.0,
     0.0, 0x1.2a476b4555a59p-690, 0.0, 0.0, 0x1.8e1d897709297p-381, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.891e50447d398p-42, 0x1.9aaeef751516cp-184, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.12cbe023c668cp-784, 0.0, 0.0, 0x1.414a3b3e16e47p-636,
     0x1.a8c615e21dcc2p-620, 0x1.9ba9b42077188p-831, 0x1.a203b64ab5f64p-133,
     0x1.f0a96fa1636ffp-495, 0.0, 0x1.ed325a19de8c9p-422, 0.0, 0x1.0c24cd65d12c8p-370,
     0.0, 0.0, 0x1.1b1e7fb433403p-809, 0.0, 0x1.6806781d980d8p-283, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3ce91de254dbp-547, 0x1.607f56907eac5p-679, 0.0, 0.0, 0.0, 0.0,
     0x1.3d797adeb2913p-440, 0x1.fcc4e0464ab02p-66, 0.0, 0.0, 0x1.d661a146aaa88p-273,
     0x1.c215ca79df927p-565, 0x1.ab301794a641dp-157, 0x1.be60fcbe64e19p-1005, 0.0,
     0.0, 0x1.d52ce3e0ba6fbp-98, 0x1.ef6929fa1a526p-163, 0.0, 0x1.02ec28087c508p-602,
     0.0, 0x1.1b22c4a92da06p-378, 0x1.abf72856f8151p-69, 0.0, 0.0, 0.0,
     0x1.5ab7061c34d22p-644, 0.0, 0x1.2923f5fe7c5d3p-146, 0x1.ef09c37d4a0e9p-883, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80df728e88b82p-867, 0x1.fdd32d17c3bbap-841,
     0x1.de3553a1f2a9dp-911, 0.0, 0x1.e636c82804102p-700, 0.0, 0.0,
     0x1.bbffa954534fap-226, 0x1.e3c5f244ccff4p-541, 0x1.ca1dd9ef3bbp-780, 0.0, 0.0,
     0.0, 0x1.aacb8cd0beabcp-570, 0.0, 0.0, 0.0, 0.0, 0x1.232e557973acp-198,
     0x1.67a384d24901cp-848, 0.0, 0x1.6c6056554650dp-963, 0.0, 0x1.1401519e2aeadp-125,
     0x1.fcc8c7b0be23cp-920, 0.0, 0.0, 0x1.83f8fa2ada14bp-710, 0x1.4ef65710120e3p-889,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d31114e4bf32bp-795, 0x1.be00a974cf981p-205,
     0x1.89b800e0f3d5dp-710, 0.0, 0.0, 0x1.b1e033196f731p-412, 0x1.2eb31cd40c3d4p-7,
     0x1.1b6f41755576ep-709, 0x1.baf5c9927e0dap-78, 0x1.6c4c20ccb63cap-271, 0.0,
     0x1.a98c3271861e7p-493, 0x1.f7428ff691f6fp-420, 0.0, 0x1.186e33cf25abp-251, 0.0,
     0.0, 0x1.2bc22a60c7ec5p-36, 0x1.24956bf7c304ep-111, 0x1.4a70ea9872fe2p-933, 0.0,
     0.0, 0x1.6ae190d4a87abp-866, 0.0, 0.0, 0.0, 0x1.21301b87d133ap-757, 0.0,
     0x1.1d81626402797p-308, 0x1.5fa17e5a173e8p-169, 0.0, 0x1.3ac1c67dec849p-622,
     0x1.520cda1ebac76p-604, 0.0, 0x1.072c9aa2899abp-897, 0x1.03f493d8072b4p-361,
     0x1.a967c3c50158p-81, 0x1.489e252094375p-4, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b0cf7086896b8p-459, 0.0, 0x1.4ca7e0d0b2481p-831, 0x1.f2e188dfc9a8dp-295, 0.0,
     0x1.925158dbd0a5fp-436, 0x1.70d90f6526ec3p-628, 0x1.6fb9c64cd773ap-909, 0.0, 0.0,
     0x1.dd858c63295p-658, 0.0, 0x1.65a0fb3dfa8b3p-139, 0x1.3ddbeb2503585p-637,
     0x1.56cfae6ff675dp-435, 0.0, 0x1.0d677449cb327p-102, 0.0, 0x1.a41a89c335c13p-117,
     0.0, 0.0, 0.0, 0.0, 0x1.f69ed8e03a412p-640, 0.0, 0x1.25380dfcbe404p-88, 0.0, 0.0,
     0.0, 0.0, 0x1.d98bcac3c6ef3p-473, 0.0, 0.0, 0.0, 0x1.549588d24082ap-33, 0.0,
     0x1.82ed586e43fa6p-371, 0x1.64c28ec615e32p-801, 0x1.fd35883ec4766p-185,
     0x1.2331156e4ba1dp-632, 0x1.a3941db05fdedp-895, 0x1.50c6a25e9f59cp-715, 0.0, 0.0,
     0x1.3ef9c08fde677p-1010, 0.0, 0.0, 0x1.9cd8e0e682169p-904, 0.0, 0.0,
     0x1.84df272bb5f4ap-2, 0x1.990ed94c97836p-430, 0.0, 0.0, 0.0,
     0x1.8a1d92e2416f6p-172, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5677f8a53e9c4p-604, 0.0,
     0.0, 0.0, 0x1.49174f643c50dp-656, 0x1.a4b37c2238cc7p-658, 0x1.e7bf63763c861p-254,
     0.0, 0x1.c264f40d8cf98p-503, 0x1.a52b1c51a22d6p-512, 0.0, 0.0, 0.0,
     0x1.9be12854d419p-524, 0x1.4821ebe379ec4p-550, 0.0, 0.0, 0x1.007c6b509831p-664,
     0x1.8ff6bc8fd107cp-796, 0.0, 0x1.b5ee2314a8f9fp-158, 0x1.69393ab7a8d4fp-374, 0.0,
     0x1.60a0b8f7d96d7p-91, 0.0, 0x1.5466cc8a04563p-564, 0x1.ec7013c25fd44p-745, 0.0,
     0.0, 0x1.d1c2e32ad30f5p-692, 0x1.11857e49ca4cep-822, 0.0, 0x1.ad2b228d78c31p-341,
     0.0, 0.0, 0x1.847caf16a226dp-727, 0.0, 0.0, 0.0, 0x1.8608ebbee75f7p-104
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
            tmp1 = Sleef_tand1_u10purecfma(tmp0);
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
    printf("Sleef_tand1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tand1_u10purecfma bench acc %la\n", global_bench_acc);
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
