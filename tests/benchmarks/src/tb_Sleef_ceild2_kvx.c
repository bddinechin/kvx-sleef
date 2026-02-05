/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceild2_kvx.c --function Sleef_ceild2_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.6c219d855814dp-488, 0x1.321ecc84dfc3ep-631, 0x1.1e341fa5733ap-114,
     0x1.9753a12ef24efp-426, 0.0, 0x1.dfca08531b8d5p-812, 0x1.9ddfa2a11aafdp-351,
     0x1.b5d0ba78e41a8p-377, 0.0, 0.0, 0.0, 0x1.de32d0251522ep-1003,
     0x1.45fcc4b78d6b5p-1022, 0x1.ce093c0aeddbdp-298, 0x1.6c7264eff74b4p-694, 0.0,
     0.0, 0.0, 0.0, 0x1.a10fbf8428e83p-51, 0x1.f4ceae77db39fp-295, 0.0, 0.0, 0.0,
     0x1.271af75d65bd5p-297, 0.0, 0.0, 0.0, 0x1.f6c96f166cbb6p-925, 0.0, 0.0, 0.0,
     0x1.82b9a7b0fa13ap-324, 0x1.642210c6afd8ep-204, 0x1.04c82bb0214e3p-393,
     0x1.75907786f89cfp-860, 0x1.4e579cd8fe5edp-138, 0.0, 0x1.c0f4110df0f74p-862, 0.0,
     0.0, 0.0, 0x1.464bf41458e31p-636, 0.0, 0x1.c68d0f1c3a9f7p-12, 0.0,
     0x1.c7b39826cab81p-946, 0x1.1af24abef7299p-852, 0x1.9f618c49a52f6p-582, 0.0, 0.0,
     0x1.69745bbdb3148p-918, 0.0, 0x1.56190be1032f8p-223, 0.0, 0.0,
     0x1.046b7125f3f39p-93, 0x1.ab32d51b374f6p-1010, 0.0, 0x1.a461c9c382d19p-249, 0.0,
     0x1.f9fe07babb44fp-858, 0.0, 0x1.a8c36d04b56dfp-494, 0x1.88acdc92c91e6p-221, 0.0,
     0.0, 0x1.fcae427acf9b2p-187, 0.0, 0.0, 0.0, 0x1.73a5f28f78131p-407, 0.0,
     0x1.57882fda7536fp-279, 0x1.172b02a4785ffp-741, 0x1.a23132a979e25p-972,
     0x1.1bcfe993c7e58p-266, 0.0, 0.0, 0.0, 0x1.af0f0a717cddep-206, 0.0, 0.0,
     0x1.3726ddc663fafp-255, 0.0, 0.0, 0.0, 0x1.bc8b91177ca76p-378, 0.0, 0.0,
     0x1.b123f447327ebp-482, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc6a355d5b7a5p-23, 0x1.788a15c67c02cp-443, 0.0, 0x1.cfe0feff194f9p-266, 0.0,
     0.0, 0x1.20ef5c2566726p-736, 0.0, 0x1.58ca05f576dafp-818, 0.0,
     0x1.bdd9fe49be007p-231, 0x1.2788c6ef376f7p-849, 0.0, 0x1.b332d600ad5cfp-348,
     0x1.338561142e577p-587, 0x1.61972964483d5p-994, 0.0, 0x1.3f6afe548ed0ep-745,
     0x1.269674eada244p-465, 0.0, 0.0, 0x1.3e7c86cfd81c1p-707, 0x1.b416585ce85cbp-24,
     0x1.c2e4dbd7d08cdp-842, 0.0, 0.0, 0x1.ef3ca789a67f6p-239, 0x1.ef3e285e17c4cp-104,
     0.0, 0x1.f3ea894238d2dp-206, 0x1.adcc28b5a2e7p-190, 0.0, 0x1.d21ad778df29cp-983,
     0x1.748114c608354p-120, 0x1.87e5227e9d0efp-350, 0.0, 0.0, 0x1.2c3dba61ca789p-880,
     0.0, 0.0, 0x1.e5f6a69138f7cp-753, 0x1.d652b293bb8bep-576, 0x1.68e34f59fc42ep-997,
     0x1.479ed6726afe2p-74, 0x1.dedf1c4bba523p-422, 0.0, 0x1.2cb0ff1f3657ep-321, 0.0,
     0.0, 0x1.1b54428c804c6p-290, 0.0, 0x1.d2eb866982247p-700, 0x1.16918dc99d585p-194,
     0x1.361500d7f4cb1p-701, 0.0, 0x1.7b4e2fd6226a3p-44, 0.0, 0.0,
     0x1.27258a79812b1p-832, 0.0, 0x1.e11f062c0d066p-55, 0x1.6fc346f8aa9c7p-806,
     0x1.daf6e6a3f2256p-310, 0x1.7bb4043204917p-256, 0.0, 0.0, 0x1.7b96ae1f6b82cp-855,
     0x1.12b143351a5a4p-975, 0.0, 0x1.82eb8612dd324p-514, 0.0, 0.0,
     0x1.dcb624ffd0bf3p-25, 0.0, 0x1.fc0aade524f0bp-56, 0x1.8c6203a58bfd7p-83,
     0x1.4efc5ce9086dfp-352, 0.0, 0x1.ff3cca6e3943fp-864, 0x1.2e3b8dc1c9367p-603,
     0x1.23fbf1562ae6p-598, 0.0, 0x1.2b626d73800ddp-577, 0x1.87f1cb5425013p-607, 0.0,
     0.0, 0.0, 0x1.12d0a2eadeb93p-813, 0x1.19cfa03ad4f7bp-22, 0x1.24a99b88d4e76p-212,
     0.0, 0.0, 0.0, 0.0, 0x1.6c63d6889291fp-429, 0.0, 0x1.b24e71123ec42p-704,
     0x1.8880b30fa6a83p-199, 0.0, 0x1.2eacf756b05ep-961, 0.0, 0.0, 0.0, 0.0,
     0x1.54c41dd0b0288p-355, 0.0, 0.0, 0x1.671c57db5eb7fp-954, 0x1.4e8854d3ceb1ap-717,
     0.0, 0.0, 0x1.664577c1e920cp-112, 0x1.3edb1bef503fep-442, 0x1.006208fb44a2cp-775,
     0x1.dbf12121467f5p-15, 0.0, 0x1.86f3de8e96f56p-619, 0.0, 0.0, 0.0,
     0x1.b44b350346bp-335, 0x1.0cf9dbd7dd4f8p-434, 0.0, 0x1.caa2e07d051ep-671, 0.0,
     0.0, 0x1.09d22b6e04c05p-968, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e27d313d62263p-280, 0.0, 0x1.7eb4b3d40f7b6p-189, 0.0, 0.0,
     0x1.7b3d150a6c239p-387, 0x1.e12d90fc13da8p-355, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.56cf07f102b85p-276, 0x1.5e3ca8e3cc3d8p-822, 0x1.8390a5ea08a56p-97,
     0x1.7e313e23c217fp-550, 0.0, 0.0, 0.0, 0x1.ec668a0d93958p-266, 0.0, 0.0,
     0x1.ac159aa7f24a2p-671, 0x1.117bd943682e9p-35, 0.0, 0.0, 0x1.5560e18cd517fp-684,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3bf9ee43c4404p-884, 0.0,
     0x1.80cb613f558d7p-403, 0x1.8894257f7ed4fp-75, 0.0, 0.0, 0.0,
     0x1.ad8c84d63a01fp-469, 0x1.e4001fcb5baedp-406, 0.0, 0.0, 0.0,
     0x1.3989d040d260dp-891, 0x1.c84a092da5e29p-701, 0x1.88b4ac7659593p-473, 0.0,
     0x1.b4af54b9ad701p-958, 0.0, 0x1.0fe6113ca95d6p-420, 0.0, 0.0,
     0x1.4bdf54c2021dep-848, 0.0, 0x1.72245731ef905p-155, 0.0, 0.0,
     0x1.7408fbf5a36f6p-880, 0x1.a1dae486f69c7p-547, 0.0, 0.0, 0.0,
     0x1.a8c9ab97ac261p-690, 0.0, 0x1.abef0157c1989p-147, 0x1.a123a7a339c8dp-76, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.479bc4d21a7e8p-473, 0.0, 0x1.4ec33ecb3ea6ep-786,
     0.0, 0.0, 0x1.3ca471922825dp-652, 0.0, 0x1.6c13de4167237p-648,
     0x1.885f6fe4f53b2p-417, 0.0, 0x1.345c4b1544a8fp-920, 0x1.e298e4fa5966ep-83, 0.0,
     0.0, 0x1.70f4f47b826a6p-645, 0x1.77b553bfe796cp-576, 0.0, 0.0,
     0x1.92e7c41956ba5p-594, 0.0, 0x1.dc81fd1b0596bp-957, 0x1.bf713e5b185aap-132,
     0x1.1aba3bf047486p-936, 0.0, 0x1.50c45643c2154p-29, 0.0, 0x1.7b17cd523d837p-1002,
     0.0, 0x1.44296c74a512fp-949, 0x1.536d71d9c9a4cp-949, 0x1.5798adc31efe7p-255, 0.0,
     0.0, 0x1.2d1a6de290c8ep-497, 0x1.8c650cc29ebdap-166, 0x1.18e0c7e77ee41p-242, 0.0,
     0x1.0498e4ae18531p-674, 0.0, 0x1.49360d64f0481p-86, 0.0, 0x1.479d905f5df8cp-934,
     0x1.892a6a20a1ffp-262, 0.0, 0x1.182c3ce85c39bp-1010, 0.0, 0x1.46f77b8b3006cp-458,
     0x1.a432b0250fe13p-298, 0.0, 0.0, 0x1.f85cd5271cf82p-756, 0x1.50516e23e7a15p-817,
     0x1.be0e1d6273ea6p-415, 0x1.3a59ac8e03e22p-955, 0x1.04af5a71fe87ap-553, 0.0,
     0x1.af2794c6f27a7p-362, 0x1.a43a49c8335c1p-916, 0x1.b76b8092aa481p-7, 0.0, 0.0,
     0.0, 0.0, 0x1.1dc6a12f39b58p-228, 0.0, 0x1.4d00261a9b0b5p-967,
     0x1.a383f069b90a7p-473, 0x1.0176bd27644f8p-514, 0.0, 0x1.fa9708eb6aa57p-452,
     0x1.54950343efd6ap-605, 0x1.4ea6be05f9f06p-269, 0x1.68213c49a8e0fp-450, 0.0,
     0x1.da907fa19a5bdp-684, 0x1.8871a9c279f8cp-647, 0.0, 0x1.b9c42926d8af4p-393,
     0x1.68c0eae240449p-564, 0.0, 0.0, 0x1.aede922e57539p-379, 0.0,
     0x1.2ffe3706a7916p-224, 0.0, 0.0, 0.0, 0.0, 0x1.f0f9375baa127p-286,
     0x1.da398c54c90d9p-288, 0x1.3aceb639e794ep-466, 0x1.7abab3c7b2149p-14,
     0x1.6edab627c1073p-984, 0.0, 0.0, 0x1.d45d88bbe183ap-204, 0.0, 0.0,
     0x1.379f390f4793fp-528, 0.0, 0.0, 0x1.99132be883c67p-226, 0.0, 0.0, 0.0,
     0x1.67e70367595c6p-732, 0x1.ae1a216b702ddp-123, 0x1.61bf5684360c2p-855, 0.0, 0.0,
     0x1.859c05e6c95ebp-27, 0x1.2987611103eb7p-738, 0.0, 0x1.a309e566d5874p-620,
     0x1.0b98a44a7126dp-998, 0x1.e2c9eb5ec2562p-524, 0x1.b56ed0d4b8d3fp-956,
     0x1.c4f17686e736ap-101, 0.0, 0.0, 0.0, 0x1.6f935a31959bep-95,
     0x1.c87dbb44438b1p-717, 0.0, 0x1.bfc0c3b7689b9p-167, 0x1.7bb6dd8d81764p-390, 0.0,
     0x1.29fe5d935a7e4p-55, 0x1.55ae9eff95515p-226, 0.0, 0x1.8bbeda536cd49p-413,
     0x1.389b538e5ff08p-798, 0x1.c555e392e5b3cp-401, 0.0, 0x1.87161a81d167cp-826,
     0x1.4ecdf6452295bp-48, 0x1.dac30001756e5p-270, 0.0, 0x1.b8c358f5c96aep-159, 0.0,
     0x1.7d48af0a2be1p-371, 0x1.764f8b2b85b3ap-363, 0.0, 0.0, 0x1.0f3df62b3125cp-705,
     0.0, 0x1.0adaf299d4449p-403, 0.0, 0x1.b3c7d33a9aa48p-538, 0x1.e770b2f6b04b9p-863,
     0.0, 0.0, 0x1.8df8548d33337p-117, 0.0, 0.0, 0.0, 0.0, 0x1.297cee5437bf6p-846,
     0.0, 0x1.e7f153d40257cp-114, 0x1.373c58decc3bfp-656, 0.0, 0x1.728b5bc3cebd9p-81,
     0x1.6b41169a723d7p-886, 0.0, 0x1.5cda48cee63e2p-634, 0x1.c8d30c866ff2p-921,
     0x1.fb1e047b0538dp-802, 0x1.a369dd247d3fp-515, 0x1.0179fa5a3a858p-473,
     0x1.ad2ae484787b8p-744, 0x1.ee5a1c291c2a3p-213, 0.0, 0x1.f6321db8ea1d6p-281,
     0x1.a1644f5654b5fp-779, 0.0, 0x1.d615a25236841p-686, 0.0, 0x1.1132b238306aep-295,
     0x1.edd48a4d1bbfp-292, 0.0, 0x1.c12458d3953b4p-229, 0x1.41d1a0bfb2442p-260, 0.0,
     0.0, 0x1.83f224e525036p-616, 0x1.07ee30ab135b6p-889, 0.0, 0x1.189b18445a434p-227,
     0x1.a4939169edfb1p-696, 0x1.effe9690320cfp-776, 0.0, 0x1.d1890ec985d94p-154, 0.0,
     0x1.f0cc5af9f558bp-538, 0x1.aaa130dcbed2fp-620, 0x1.d93ff6460f86cp-994,
     0x1.5470679e5e59ep-259, 0.0, 0x1.fdcf287cc4527p-358, 0x1.0f14ed88a13edp-34, 0.0,
     0x1.dd3ae93d64ecbp-202, 0.0, 0x1.d836fac120c46p-77, 0x1.033ee82fc64ccp-521,
     0x1.ed218a1aa8c3cp-694, 0.0, 0x1.6b3d2acc8758bp-704, 0x1.d749dd417f03ep-183, 0.0,
     0.0, 0x1.4f05ce72ba0d9p-380, 0.0, 0.0, 0x1.7454739d50056p-29, 0.0,
     0x1.2c4dd023fbf33p-309, 0.0, 0.0, 0.0, 0.0, 0x1.54d99fe397ed2p-8, 0.0, 0.0, 0.0,
     0x1.a818dc4c234b8p-629, 0x1.96580ec70f897p-885, 0.0, 0x1.a28d4058821c2p-784, 0.0,
     0.0, 0x1.87fc311ff431cp-569, 0.0, 0.0, 0x1.187abcba6be58p-608,
     0x1.93ff976e443bp-283, 0.0, 0x1.9b5c064cd3f5ep-332, 0.0, 0.0, 0.0, 0.0,
     0x1.a1063fedfe1e3p-914, 0x1.2508b93cac94ep-532, 0.0, 0.0, 0.0, 0.0,
     0x1.1336c1b2a2cfbp-780, 0.0, 0x1.0e58e1a5fa84ep-844, 0x1.eb783177c8b22p-734,
     0x1.bdb21085acd33p-224, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bbf447628205ep-622, 0.0, 0.0, 0x1.59af60c365efbp-886, 0.0,
     0x1.8f3de7ba1f26p-687, 0x1.9f99591609206p-657, 0x1.b97389a570cdp-813, 0.0, 0.0,
     0x1.36beb067a716cp-953, 0x1.a47ae546d6adap-146, 0x1.21c776332fc86p-131,
     0x1.81665335f27c1p-759, 0.0, 0x1.63b07aa74d878p-926, 0.0, 0x1.ab7e3ed96b0b1p-433,
     0.0, 0.0, 0x1.c477c170360ecp-589, 0.0, 0.0, 0x1.6416a149ab3efp-726, 0.0, 0.0,
     0.0, 0x1.c4329a8606d9fp-861, 0x1.98825001213ecp-310, 0x1.f761cff88d7a2p-74,
     0x1.397458f6b1d8ap-153, 0.0, 0x1.35da9d59ea9bdp-946, 0.0, 0.0,
     0x1.c04ffcf800271p-257, 0.0, 0.0, 0x1.fb565187c0964p-398, 0x1.fddf3b28046dfp-35,
     0x1.9df58d84e711fp-429, 0.0, 0.0, 0x1.046692a316eaap-503,
     0x1.d755a71fbb409p-1017, 0.0, 0.0, 0x1.ebb620732832ep-909,
     0x1.b1d9178e79875p-814, 0x1.7e3c09eb29053p-893, 0.0, 0.0, 0x1.2025c43c18c67p-932,
     0x1.fe6365d6bfc28p-655, 0x1.5c342bcceeef3p-43, 0.0, 0.0, 0x1.c98ca360c8eb5p-411,
     0.0, 0.0, 0x1.9792de88b22a1p-276, 0x1.ba87a7449e0e2p-967, 0.0, 0.0,
     0x1.20714c5caf697p-83, 0.0, 0x1.4f441d0858a85p-561, 0x1.63b39624e2ae7p-228, 0.0,
     0x1.ee4c37c77cf8dp-281, 0.0, 0x1.7499e850d8e5ap-428, 0x1.7b051546d216bp-501, 0.0,
     0.0, 0x1.926a8e1c3d0c7p-764, 0.0, 0.0, 0.0, 0x1.0c8e79fabeccdp-12,
     0x1.527ee688a8b45p-155, 0x1.904317b72e09fp-846, 0x1.6379d86da6387p-578,
     0x1.da6dbb672a9a4p-351, 0x1.399fa938ab99bp-607, 0.0, 0.0, 0.0, 0.0,
     0x1.e6be448443efbp-298, 0x1.df70ae65129cfp-339, 0.0, 0.0, 0x1.46ed24a0a355p-787,
     0x1.a84c90b42da3cp-241, 0.0, 0x1.c4c8bfee45497p-496, 0.0, 0x1.45b2c2492b08dp-883,
     0.0, 0.0, 0x1.259ab7250764fp-67, 0.0, 0.0, 0.0, 0x1.d6bb09dd4b07dp-164,
     0x1.8daea19900aeep-690, 0.0, 0.0, 0.0, 0.0, 0x1.c2d6aceb0978bp-849,
     0x1.09bcc1db9a5f5p-888, 0x1.9dcc55fa43aap-39, 0.0, 0x1.97fd4ba16806fp-383, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ae10dfb57df3cp-874, 0.0, 0.0, 0x1.5fb781c697116p-819,
     0.0, 0x1.fa41867852f1cp-892, 0.0, 0.0, 0x1.0241539b46e4ep-743, 0.0, 0.0, 0.0,
     0x1.c297ad0c2c456p-105, 0.0, 0x1.9a370f0a9c88cp-157, 0x1.45b9999ba50c2p-829, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.16eae40f361ffp-16, 0.0, 0.0, 0x1.36902d26a525fp-475, 0.0,
     0x1.64667f975466p-665, 0.0, 0x1.c1ea7065719c8p-275, 0.0, 0x1.e44b004d4cf8dp-988,
     0.0, 0.0, 0.0, 0.0, 0x1.48c7d908a10cbp-791, 0x1.813eba6dc666cp-639,
     0x1.5f6e9e8c04919p-684, 0x1.3c31159b86688p-339, 0.0, 0.0, 0.0,
     0x1.410e387fa2178p-823, 0x1.ee9b2464e182p-652, 0.0, 0x1.6a703879f9329p-106, 0.0,
     0.0, 0x1.a9687407ea182p-46, 0.0, 0.0, 0.0, 0.0, 0x1.ce6c57cc14159p-275,
     0x1.f8b1114232cedp-619, 0.0, 0x1.9900e14acc093p-278, 0x1.0804586695de5p-126, 0.0,
     0.0, 0.0, 0x1.85a8e4a3feb81p-309, 0x1.15948b579ecfp-569, 0x1.6abf707af04d2p-779,
     0.0, 0x1.e825b19537405p-686, 0.0, 0.0, 0x1.2b0815047185cp-904, 0.0, 0.0, 0.0,
     0.0, 0x1.09060848a77bp-543, 0.0, 0x1.814998c1fed3ep-463, 0.0, 0.0, 0.0,
     0x1.85c18cccafcbbp-885, 0.0, 0x1.0dad40f7b152ep-240, 0x1.d3a36cef3eaf2p-265,
     0x1.476fc8505329bp-952, 0x1.d115929966decp-964, 0x1.2d844985c5d0dp-518,
     0x1.5f579249d121ep-228, 0.0, 0.0, 0x1.06a74d343b888p-254, 0.0,
     0x1.0bd499b0a0cb1p-436, 0.0, 0x1.8cfeddfb8eff2p-868, 0x1.340d05db0cb7p-425,
     0x1.c0bde9bc37121p-57, 0.0, 0.0, 0x1.30f3fca9aa05fp-753, 0.0, 0.0,
     0x1.825530429b759p-901, 0x1.9bf3a0cae337ap-239, 0.0, 0x1.40864f6563be9p-968, 0.0,
     0.0, 0x1.4f0dbc79e990cp-546, 0x1.2db9764dbbeccp-763, 0x1.b17ad01c01fbp-828,
     0x1.a69d5036e5313p-253, 0.0, 0.0, 0x1.f3fa50c3b91d9p-244, 0.0, 0.0,
     0x1.0f8e3b3bd5c8bp-960, 0x1.d2a2e836f9c9fp-120, 0x1.ef9023a3a6e6bp-81,
     0x1.67dd7c3aeeebfp-811, 0x1.9d3866577e16cp-543, 0.0, 0.0, 0.0, 0.0,
     0x1.d8e84aed3d78ep-304, 0x1.e80ec02fe71f7p-283, 0.0, 0.0, 0.0, 0.0,
     0x1.1a7b2eb19ccddp-279, 0.0, 0.0, 0.0, 0.0, 0x1.d8c254a9fcd69p-588, 0.0,
     0x1.f419f1bb2c892p-591, 0.0, 0.0, 0.0, 0.0, 0x1.bf5c9792f2eb6p-962,
     0x1.8992655a3d747p-612, 0.0, 0.0, 0x1.c101999dacefep-991, 0x1.b3989fb6373f2p-936,
     0x1.ecec4afb570a8p-310, 0.0, 0.0, 0x1.10ec5a7f4874bp-508, 0x1.85c10177f0012p-26,
     0x1.4fd1dacb1c08ap-612, 0.0, 0x1.36792d361f7a5p-694, 0x1.3752cd7c35301p-1006,
     0.0, 0.0, 0.0, 0x1.c7095479e6badp-106, 0.0, 0x1.a0828f8f0171bp-744,
     0x1.e16c077d2dc15p-30, 0.0, 0.0, 0.0, 0.0, 0x1.deac0af02303p-274, 0.0, 0.0,
     0x1.911516f2429eap-877, 0.0, 0.0, 0.0, 0x1.2ef4d1094d6dfp-584,
     0x1.2709cec680841p-181, 0x1.a2412e819b856p-793, 0.0, 0x1.c554c2ebc4126p-157, 0.0,
     0.0, 0x1.9309f15ac75c9p-646, 0.0, 0x1.ce8dccb70ca3cp-175, 0x1.4ddf4fb8e6a88p-924,
     0x1.270b01b94a6bdp-1, 0x1.c513006ae17adp-70, 0x1.5d86577e65ac8p-740, 0.0, 0.0,
     0.0, 0.0, 0x1.b7c767d80a015p-258, 0x1.3a4cc72e67a3cp-273, 0.0, 0.0,
     0x1.2187b852eb39ap-467, 0.0, 0x1.d42888728af97p-358, 0x1.9e83b747d1f03p-243,
     0x1.2a1a65ff27516p-509, 0x1.6f0dc0cd5595bp-831, 0.0, 0.0, 0.0, 0.0,
     0x1.be60c90a28ed6p-1013, 0.0, 0.0, 0x1.a1bd99e61ee43p-184, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9198cbc6f1e8ep-818, 0x1.54b3088fa5db3p-587, 0x1.bf3e36cd277a4p-952,
     0x1.61c9b330654b6p-508, 0.0, 0.0, 0.0, 0x1.781889d6dce9p-1016,
     0x1.3ef0d78019189p-692, 0.0, 0x1.0573464131f95p-825, 0.0, 0x1.1dbf75cf32f0fp-951,
     0x1.6502e1c6afd11p-697, 0x1.5a100b1e4a6cbp-975, 0x1.322739c22faa1p-882,
     0x1.aff3c42122eb5p-425, 0x1.d29093cad5c5cp-223, 0x1.7ff3cc39098adp-1000, 0.0,
     0x1.a9eedeb5797p-671, 0x1.dc0ad72a0aa3ep-917, 0x1.8e6897ce27002p-447,
     0x1.02f0f4d59af06p-916, 0.0, 0x1.75909ae59102ep-814, 0.0, 0.0,
     0x1.c7efb4fb06cefp-929, 0.0, 0.0, 0x1.22c4dc9d27cf1p-871, 0.0, 0.0, 0.0, 0.0,
     0x1.483baebe67536p-158, 0x1.865ede7dbc582p-261, 0x1.39dfd36577d7p-536,
     0x1.1fc81f37c56bdp-945, 0x1.d9a4721f22d07p-756, 0x1.18d4eaaaa0a62p-175,
     0x1.384685921e2ebp-966, 0.0, 0x1.6470929c5a45dp-110, 0x1.3aac6c85e2e9fp-770,
     0x1.2bd51e5ddb52dp-699, 0x1.a5de2fb77a7b8p-881, 0.0, 0x1.747c276119fe3p-500, 0.0,
     0x1.184724e22c2a4p-10, 0.0, 0.0, 0x1.babeb5f593198p-141, 0.0,
     0x1.af3f7e81f5aabp-900, 0.0, 0x1.5e9a3c77c53a4p-1015, 0.0, 0.0, 0.0, 0.0,
     0x1.acfcd0cd10c2fp-120, 0x1.41dec78dc357fp-260, 0.0, 0.0, 0x1.70158e02c6c7fp-319,
     0x1.7ec2c9d16f86dp-260, 0.0, 0.0, 0.0, 0x1.e83aa88f5cb98p-806, 0.0,
     0x1.f68254c29d4ep-590, 0.0, 0x1.9c09581696a16p-192, 0x1.d1781c6af47bp-480,
     0x1.bda5c319c9f9bp-352, 0.0, 0x1.97a68feb4d96ep-33, 0.0, 0x1.c16510d623cf4p-86,
     0.0, 0x1.af3b1ea913e72p-764, 0x1.13d51197b3793p-546, 0x1.803716bc9fe1dp-420, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ea309d1548538p-84
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
            tmp1 = Sleef_ceild2_kvx(tmp0);
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
    printf("Sleef_ceild2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_ceild2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
