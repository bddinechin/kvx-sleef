/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d2_u35kvx.c --function Sleef_log2d2_u35kvx \
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
     0x1.9877cdf7d2346p-796, 0x1.53bcda17d25e5p-924, 0.0, 0x1.13d7fe0fe3f0fp-408,
     0x1.21367d428a7dcp-658, 0x1.94aedbdeedbb4p-866, 0.0, 0x1.a0f14925d494dp-788, 0.0,
     0.0, 0x1.f613bea466e17p-223, 0.0, 0.0, 0.0, 0.0, 0x1.51f1cc120e6b4p-467, 0.0,
     0x1.616477d26afccp-347, 0x1.056b54cf4d21dp-39, 0x1.6e3a550d116a2p-875, 0.0,
     0x1.8806b617bf895p-621, 0.0, 0.0, 0x1.10f073890182bp-454, 0x1.5d3fad39d312ap-701,
     0.0, 0x1.257d9035f83bap-606, 0x1.73f7f98804c7p-229, 0x1.a279dd2756e7ep-219, 0.0,
     0.0, 0.0, 0.0, 0x1.7ba09613c63c7p-192, 0x1.d0c285410b157p-313,
     0x1.e4d5514886e76p-166, 0.0, 0x1.028732269ee7ap-440, 0.0, 0x1.17e268e03bc92p-662,
     0.0, 0.0, 0x1.73bd182d857f2p-945, 0.0, 0x1.78e5a18adef58p-348,
     0x1.c71b4a6c266c4p-777, 0.0, 0.0, 0x1.5687cfad75f01p-36, 0.0, 0.0,
     0x1.fd7127fb21a32p-621, 0.0, 0.0, 0x1.fecf55253c94fp-815, 0x1.57640d57ae9c3p-182,
     0.0, 0.0, 0x1.d80bd7cabc922p-865, 0x1.1e9e9d34be584p-386, 0x1.69f3e9e8ce991p-248,
     0.0, 0.0, 0.0, 0.0, 0x1.a9549c57ffcd5p-656, 0x1.9d3d523c817ep-344,
     0x1.0a29d3807f51ep-589, 0.0, 0x1.f2d3f5cb976c7p-16, 0x1.69cae25628b92p-805,
     0x1.9ff4208a8c4ap-806, 0.0, 0x1.d3efee284ea89p-253, 0x1.f27992cf9cf23p-575,
     0x1.16feb1188fb65p-354, 0.0, 0.0, 0.0, 0x1.ac767ffd70857p-719,
     0x1.db41a21c93a07p-819, 0x1.be9af5b9bd5bcp-1016, 0x1.3a2091ebdd176p-691, 0.0,
     0x1.66aca07917431p-97, 0x1.8f295b3517a5cp-690, 0x1.5560cd35e76e5p-251,
     0x1.536ebbfb3a5adp-333, 0x1.b2843cdf81467p-136, 0x1.8b191a89704b3p-194, 0.0, 0.0,
     0.0, 0x1.ecaf9ecaaa562p-844, 0x1.ce3dc017bf388p-52, 0.0, 0x1.1296de829da8dp-552,
     0.0, 0x1.e18544f454949p-6, 0x1.e305f215a276ap-997, 0.0, 0x1.8c8e33d111e23p-23,
     0x1.150592ceef39p-226, 0x1.92f2e49eebcfdp-545, 0x1.5aa3418c87792p-825, 0.0,
     0x1.2c51f092e9004p-514, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be0b1aaf88009p-497,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f546fe45d9102p-803, 0.0, 0.0, 0.0, 0.0,
     0x1.208a8fd44f5a6p-161, 0x1.412cb52e5a448p-283, 0x1.701ad235877aap-948,
     0x1.dfb07e14ccb04p-933, 0x1.31145fbd3ff53p-217, 0x1.89c09c1666e99p-675, 0.0, 0.0,
     0x1.46969cff1b318p-685, 0x1.5ee9ac624651ap-711, 0x1.dc852adfc989ap-75, 0.0,
     0x1.076aedefaaab9p-406, 0.0, 0.0, 0x1.aa4d1ccfb0df8p-376, 0x1.4159f12a5aa7p-699,
     0.0, 0x1.33f3ec097fce4p-848, 0x1.6777d2d77a88ap-831, 0.0, 0x1.e43a92beddefep-473,
     0.0, 0x1.09d9faad4d5f7p-261, 0x1.e5ff62ab2b703p-430, 0x1.035fee6425717p-350,
     0x1.d13269e7cb46p-184, 0x1.18c3535539b86p-412, 0x1.355dc7e9f9b5dp-282,
     0x1.a95afa099b2b8p-464, 0.0, 0x1.3477b9fb64eedp-550, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d073532fafd85p-434, 0.0, 0x1.3ecd0320bc385p-524, 0x1.2c3619251ccp-810,
     0x1.c4a79702799fep-506, 0x1.47e81af2330ddp-37, 0x1.a3262eac327d5p-618,
     0x1.3ed37e24e5b6ep-517, 0x1.9b23365ca94aep-986, 0x1.b8de8c5816d1p-1003,
     0x1.fb0310ffa9233p-234, 0.0, 0.0, 0.0, 0.0, 0x1.c0992b3e4821ap-717,
     0x1.8ef2785b9ca01p-876, 0x1.7704f4b85f5f4p-776, 0x1.dbe5162b8502bp-378, 0.0,
     0x1.b4a8f478daa58p-689, 0x1.bb497049b9d46p-426, 0.0, 0.0, 0.0,
     0x1.9434679e9dad9p-3, 0x1.a72694aa0b644p-411, 0x1.44a3aa1f2a907p-708,
     0x1.2035f5556e832p-207, 0x1.c7f52acb1fe2cp-851, 0.0, 0.0, 0x1.c2f9d392590d4p-851,
     0.0, 0.0, 0x1.0634ae1f44062p-840, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ca020a2edf01p-315, 0x1.19c7556bc3de4p-246, 0.0, 0.0, 0x1.4b07f15fea094p-323,
     0.0, 0.0, 0.0, 0.0, 0x1.63875c4c90a05p-446, 0x1.41de3f8fc111bp-237,
     0x1.9d5c86035f4b9p-405, 0x1.eb2abb10ab93fp-668, 0x1.15746e753eb87p-713,
     0x1.de1e5231942dfp-90, 0x1.ece9140bc6858p-538, 0.0, 0.0, 0x1.4b68e41afd802p-809,
     0x1.09d2401834d3dp-444, 0.0, 0.0, 0.0, 0.0, 0x1.de6c4d955dc8fp-30,
     0x1.1ef55a6a630e2p-369, 0x1.5707b4fb1da95p-172, 0.0, 0.0, 0.0,
     0x1.b42f43d7973a5p-933, 0.0, 0x1.af8a800331c67p-655, 0.0, 0.0, 0.0,
     0x1.0e6e7f35a655bp-564, 0x1.12ea3cfd50d0ep-366, 0x1.64808933a11f7p-272, 0.0, 0.0,
     0.0, 0x1.38fbfe92137ebp-426, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.71a46e13b5f06p-616,
     0.0, 0x1.614e80f80a957p-527, 0.0, 0x1.b87fbc6b6f677p-586, 0x1.09868e048a0c5p-607,
     0x1.14066a14ac72ep-769, 0x1.a999a86d5b0b3p-832, 0x1.fc4866571d3b5p-500, 0.0,
     0x1.0cb9a15b918e5p-849, 0.0, 0.0, 0x1.7c9d1a73fc163p-706, 0.0, 0.0,
     0x1.ed0297b457975p-821, 0x1.f5ef82d3fcd9fp-122, 0x1.be9d6318feaa5p-936, 0.0, 0.0,
     0x1.7da2a3208690ep-922, 0.0, 0x1.d94c60711ecd9p-339, 0.0, 0x1.f730c73b2a1f3p-440,
     0x1.4458239e546ffp-734, 0x1.08f167d9a16f4p-57, 0x1.c44af8f1cc628p-272,
     0x1.eac1691be7d58p-661, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81efdcc226c76p-227,
     0x1.50e025bacc75bp-715, 0x1.a7959514858c3p-546, 0x1.750c09f80a01bp-597, 0.0, 0.0,
     0.0, 0.0, 0x1.924fc5320e1c4p-956, 0.0, 0.0, 0x1.111a63e3f6797p-974, 0.0,
     0x1.370bb2c039e37p-560, 0.0, 0.0, 0x1.3ce3d4a186644p-910, 0.0,
     0x1.165c4d21a3baep-415, 0x1.2e302dd4f9841p-614, 0x1.8f53805d1fed7p-378,
     0x1.529a8f254acdp-592, 0.0, 0.0, 0x1.eb8847e4aa46dp-990, 0x1.f84228c1f79e5p-370,
     0.0, 0x1.f103cbdace756p-775, 0x1.925aa4210518fp-152, 0.0, 0.0, 0.0, 0.0,
     0x1.0b4d6c40f5b57p-401, 0x1.5ea1b5539877dp-810, 0.0, 0.0,
     0x1.a67c7a1cbb423p-1007, 0.0, 0.0, 0.0, 0.0, 0x1.d5cd6c0559044p-612,
     0x1.a429ccaebe008p-392, 0.0, 0x1.38ecc9ab6a8ffp-396, 0.0, 0.0,
     0x1.e352eddad3e4p-761, 0.0, 0.0, 0x1.fef6ce84dbac5p-805, 0x1.9bef2af8a975bp-106,
     0x1.e613cd8f442c9p-926, 0.0, 0x1.e43dde3fbb64p-822, 0x1.e889783346a13p-331, 0.0,
     0.0, 0x1.3a63b38e15561p-596, 0x1.4ebf9a55f1e9cp-992, 0x1.3aa30752a588fp-418,
     0x1.ff348efbf5e33p-268, 0.0, 0.0, 0x1.9358be1e92effp-758, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.462139806f65fp-97, 0.0, 0x1.a12c8bbe576c9p-798, 0.0, 0.0, 0.0, 0.0,
     0x1.3f8b7dc6afd58p-391, 0x1.786ebb71bf5b2p-880, 0x1.b195d3f4a1a9ep-987,
     0x1.fcc7691b76247p-478, 0.0, 0.0, 0.0, 0.0, 0x1.d7b246ea13e39p-676,
     0x1.bd193942bffaap-785, 0x1.568ede841c883p-407, 0x1.8a8af6a27e066p-660, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.aea978b3e92bep-578, 0x1.58d15245ec1dep-171,
     0x1.5d1dae412284dp-950, 0.0, 0.0, 0x1.23d69253e2b28p-440, 0.0,
     0x1.ab488c8b8b254p-631, 0x1.865ff2a0762a2p-382, 0x1.e4d82fcc537c4p-652,
     0x1.453d06bca96a6p-159, 0x1.f7aee366462dfp-258, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e7bbb2aea58ccp-862, 0x1.c2aa211e2e3f3p-777, 0.0, 0.0, 0.0,
     0x1.0832e5f3a7513p-776, 0.0, 0x1.df72ae8c573f1p-877, 0.0, 0x1.f6b9c89267a88p-953,
     0.0, 0.0, 0.0, 0x1.4abf88d7f856fp-755, 0x1.45462b9202314p-901,
     0x1.bb4445b7c3491p-834, 0.0, 0.0, 0x1.7f4f888285f4ap-940, 0x1.834f3700b8ea9p-217,
     0x1.1439e48b1ba99p-654, 0x1.80df03fb7f56cp-448, 0x1.1acc9d218249dp-166,
     0x1.3e89660a8db2bp-773, 0x1.8ac4c76c13abfp-728, 0.0, 0x1.cbeb8f09cb50ep-233,
     0x1.d7d85b4ce594p-947, 0x1.5a413ccb56f72p-810, 0.0, 0.0, 0x1.6b75d67bbfef5p-467,
     0.0, 0x1.9642376488e2cp-720, 0x1.fa437c5163f88p-563, 0x1.132017b9b12e4p-726,
     0x1.43bc346acf2ep-359, 0x1.eaf03aed963d3p-785, 0x1.8bc3c8362de6ap-813, 0.0,
     0x1.aad699954aa66p-583, 0.0, 0x1.44c077508c2e2p-356, 0.0, 0x1.fe82acb49efcep-609,
     0.0, 0x1.a77b0200ea8d9p-351, 0x1.9820ad65c32a2p-72, 0.0, 0.0, 0.0,
     0x1.3d2179f39720bp-522, 0.0, 0x1.572ad5486eef4p-951, 0x1.9a58c4555d911p-138,
     0x1.cd0cd92540e3dp-390, 0.0, 0.0, 0x1.c6d689d22a2p-351, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.47c88469761f7p-539, 0x1.8d3b477e41006p-545, 0.0, 0x1.bdd09eab3086ep-424,
     0x1.d7e17bb063808p-181, 0.0, 0.0, 0x1.9fbdbad91f40ep-633, 0x1.4d01627833c8fp-494,
     0.0, 0x1.5e72a279c8866p-218, 0.0, 0.0, 0.0, 0.0, 0x1.000239b25b6b4p-203,
     0x1.905527be9178bp-817, 0.0, 0x1.23185469a2a8ep-628, 0.0, 0.0, 0.0, 0.0,
     0x1.e4dd29b86020dp-882, 0x1.516ff53495092p-810, 0.0, 0.0, 0x1.be1a807f7f048p-92,
     0.0, 0x1.9fdfb56e53ecbp-388, 0x1.62a1b6299453fp-953, 0.0, 0x1.853e4ba059a52p-480,
     0.0, 0x1.f84054fa7247fp-937, 0.0, 0x1.7a14ca81d7e7ap-320, 0x1.b19b9a88b8ac7p-594,
     0x1.67d0872697eeap-903, 0.0, 0x1.af21b90031f28p-309, 0.0, 0x1.1e2617e53a53dp-147,
     0x1.c6a998abb49c8p-650, 0.0, 0x1.6c595cec81928p-634, 0x1.db2ca1ceaccfbp-643, 0.0,
     0x1.accc85d564938p-956, 0x1.94aa3bd10ff85p-361, 0.0, 0.0, 0.0,
     0x1.ecbdb37030c33p-533, 0.0, 0x1.e6b32dce1b74cp-422, 0x1.c551ddc4fbedcp-935, 0.0,
     0x1.7c85091cf1dccp-648, 0x1.57c03df7d11d2p-731, 0x1.60e240f5cf20bp-305,
     0x1.b163c0d273472p-489, 0.0, 0x1.4303bd6cfbfe4p-272, 0.0, 0.0, 0.0,
     0x1.306e1d4dfca63p-1009, 0x1.206e53b62e353p-338, 0x1.bd7560c6a9a1ap-177, 0.0,
     0.0, 0.0, 0x1.a4a299716e6c4p-110, 0x1.a031eab01c67p-394, 0x1.07e4ec67fbe7p-47,
     0x1.4fbd63fcb2faep-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.54c32b5c87f53p-741,
     0.0, 0.0, 0x1.3a1b9e10e3e36p-948, 0x1.6ee84391d6563p-683, 0.0, 0.0, 0.0, 0.0,
     0x1.79266688a3742p-483, 0x1.5fd23f66598b2p-520, 0x1.8f4f0cb52a426p-406, 0.0, 0.0,
     0x1.97a0c590a3ed3p-673, 0x1.bbe789e3c139bp-482, 0.0, 0x1.e4317f82f0f37p-898, 0.0,
     0.0, 0.0, 0.0, 0x1.39d9cd597deaap-755, 0x1.73ac8be745938p-589,
     0x1.af345eb6c4a9cp-777, 0.0, 0x1.538febc85edfap-894, 0x1.bef017501a115p-655,
     0x1.95b73f05a1899p-992, 0x1.906f9f7c46a1ep-795, 0x1.b3dee5be6c0cap-172,
     0x1.6bd5223c75248p-853, 0x1.b9cbcc4d39c5cp-455, 0x1.e1b4165d4a216p-397, 0.0, 0.0,
     0.0, 0.0, 0x1.ab34701dcd5a9p-441, 0.0, 0.0, 0.0, 0x1.124959833e97p-68, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3ef9552d02b6ap-689, 0.0, 0x1.c6c0102117551p-495,
     0x1.08d2565de3cd1p-472, 0x1.5135e6cc7ea52p-397, 0.0, 0x1.09e4bcda56ce2p-374,
     0x1.9a314ab2c3232p-137, 0.0, 0.0, 0x1.fa31189fbdfap-628, 0.0,
     0x1.c1a20a74febaap-1013, 0.0, 0x1.785cfcd5185b8p-852, 0x1.3e93cb8080468p-272,
     0.0, 0.0, 0x1.b73e1cbcdfc07p-723, 0.0, 0.0, 0x1.ea1e0e5f040e3p-713, 0.0,
     0x1.568c1f3173414p-999, 0x1.8d95b16d86e8bp-1003, 0x1.4d9630b52a757p-870,
     0x1.56ebb83537205p-395, 0x1.ecd0504274623p-486, 0x1.0b8c9cfdcf59cp-259,
     0x1.04b39cd441c4ap-324, 0x1.2301a50d3b02ap-881, 0.0, 0x1.e4ad795356207p-37, 0.0,
     0x1.bb2235095bf81p-487, 0x1.04c03420bc2e3p-447, 0.0, 0x1.6401e207e1829p-481, 0.0,
     0x1.00e0285a03078p-858, 0x1.d3f1208a36ad9p-695, 0x1.3dcb3e5ff5667p-413,
     0x1.701b9ecd477abp-348, 0x1.9210075c36755p-524, 0x1.d5bb81f1a8d64p-269,
     0x1.8ffb3e963ede4p-697, 0.0, 0.0, 0x1.be543172646b9p-530, 0x1.53eb2b83a5f85p-766,
     0.0, 0.0, 0x1.1e6d122c587b3p-785, 0x1.9f4e644e19879p-880, 0x1.3313744a93c5ap-796,
     0x1.a7f9d8a971ffap-776, 0x1.6c5c0aa9f66dep-597, 0.0, 0.0, 0x1.fbf7844f14ed4p-799,
     0x1.2d4a4ff16ca98p-868, 0.0, 0x1.ceee7ecd429c7p-900, 0.0, 0.0,
     0x1.68ae1884809f1p-66, 0.0, 0x1.8db5079570b8ep-891, 0.0, 0x1.d22c96451e589p-243,
     0x1.96ead8c96bb32p-190, 0x1.f1be48288b2c7p-663, 0.0, 0x1.b3f6e5245a4fp-169,
     0x1.955b98c2241d1p-165, 0.0, 0.0, 0.0, 0x1.7182b0891ae64p-78, 0.0, 0.0,
     0x1.0914cffbd27f4p-795, 0x1.47ca10a1f99e8p-1000, 0.0, 0.0, 0.0,
     0x1.cabc49d552dddp-462, 0x1.a72c5d4c58a49p-669, 0.0, 0x1.539030b1f0b2ep-550,
     0x1.63fb92beafa4fp-1012, 0x1.8a44100aa08e1p-937, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6ae4a65e37741p-710, 0x1.615cfac8f18ap-822,
     0x1.dcc7a142b4918p-162, 0.0, 0x1.c8e967be01ef3p-777, 0x1.835e4af6ce029p-621,
     0x1.7f639678cec4dp-878, 0x1.e1ccb72a1ef01p-179, 0x1.97aa7980e662cp-962,
     0x1.5fd3eb4fed41ap-691, 0.0, 0x1.4dc0247ea9a7ep-667, 0x1.1b7948494155dp-555, 0.0,
     0x1.92dba2c2f8d83p-185, 0x1.f935318f4a90cp-1012, 0.0, 0.0,
     0x1.79df33176f5e3p-432, 0x1.fbc00b80f7de3p-113, 0.0, 0.0, 0x1.e21cf37256272p-675,
     0x1.eec5306a2a64cp-412, 0.0, 0x1.df63404c0357ap-458, 0x1.458b79ceec517p-535, 0.0,
     0.0, 0.0, 0x1.9cbb855f3e9c9p-571, 0x1.96d7683c111f9p-838, 0x1.35aa2da0ea4ccp-931,
     0.0, 0x1.75166d9213d4ap-445, 0.0, 0.0, 0x1.0ff4281599608p-824,
     0x1.d08c5cc38247ep-922, 0x1.58960bc1c0142p-221, 0x1.435f056c3671cp-985,
     0x1.2d20dc9207a2fp-683, 0x1.2ebc7135c12b4p-887, 0x1.7f4e3a47f3c0ap-695,
     0x1.f74a1dade4728p-151, 0.0, 0x1.1ed8d7d566e39p-155, 0.0, 0x1.92ee8ab1f06dbp-546,
     0x1.b03b675eff23ap-578, 0x1.a6a678ac4af7p-96, 0.0, 0.0, 0x1.e3e4b98886972p-120,
     0x1.1079c71dbcbb2p-218, 0x1.29e4571e95151p-329, 0.0, 0.0, 0.0,
     0x1.9b14029498bddp-778, 0x1.79c6dd3d93de8p-763, 0.0, 0x1.f596593c874d4p-711, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57fb0fda86a45p-965, 0.0, 0.0,
     0.0, 0x1.828d00c0dff97p-874, 0x1.a6e4dc8ff4d55p-318, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.542d2170f24bap-295, 0.0, 0x1.3c7849ae40587p-493, 0x1.f6bf72cbd3466p-203,
     0x1.b2c6febc27f74p-175, 0x1.f66f8edd75c15p-105, 0x1.0f25c1084e9ccp-38, 0.0,
     0x1.4309962f2d376p-661, 0.0, 0.0, 0x1.6ab4786f09af5p-172, 0.0,
     0x1.1776323af87a2p-946, 0.0, 0x1.5e76e34d3c5efp-649, 0.0, 0.0,
     0x1.fcea81c475b3cp-345, 0.0, 0.0, 0x1.35f181c29d168p-526,
     0x1.f94126b10f714p-1007, 0x1.d8c50ab70d005p-721, 0x1.6fcbfaa570fdep-180, 0.0,
     0.0, 0.0, 0x1.5d8cbf027168fp-614, 0.0, 0x1.a304a34c4769ap-386,
     0x1.6e044a83a1045p-241, 0x1.eee36026e37ap-1019, 0x1.150206833a268p-453,
     0x1.9d98704266d34p-561, 0x1.d8f8188cba95ep-262, 0x1.47c7a3c3ab1e6p-651, 0.0, 0.0,
     0.0, 0.0, 0x1.ecf89673c44e6p-819, 0.0, 0x1.ec695159b221ap-1001,
     0x1.972cc1fa8f257p-989, 0.0, 0.0, 0.0, 0.0, 0x1.d705dfd6bd687p-977, 0.0,
     0x1.5cc6c8da2e20cp-570, 0x1.00ad2c3ca1917p-602, 0x1.510d026977674p-75,
     0x1.610be051e431fp-153, 0x1.54f3fe094b597p-620, 0x1.feede80e75f1cp-831,
     0x1.3533b8a3b8347p-74, 0x1.e30f9efb0c31p-893, 0x1.dd7960d69cb7bp-104,
     0x1.6fc46d39e8f9fp-786, 0.0, 0.0, 0x1.95707d3cfa888p-441, 0x1.07f2e132e0dp-274,
     0x1.98b4acf8be887p-706, 0.0, 0.0, 0.0, 0.0, 0x1.12aa224fe4a4ap-428,
     0x1.3deaad4eb7102p-506, 0.0, 0x1.5469f89546e4cp-554, 0.0, 0.0,
     0x1.bea85c7268a33p-315, 0x1.789fb9225a945p-315, 0x1.3c70c4c33c9a1p-874, 0.0,
     0x1.fab75a051ca0ep-788, 0x1.41e2e3394f9f1p-793, 0x1.17773b01c1277p-692,
     0x1.ef01f71dee574p-367, 0x1.33ccc8be8741dp-218, 0.0, 0x1.ca5d6112481c1p-435, 0.0,
     0.0, 0x1.bf975e44f9f4ap-637, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d2976a6989599p-366, 0x1.0459fdf53002dp-260, 0x1.22a9fe37209b4p-42, 0.0,
     0x1.4b43e8ab2c34ap-277, 0x1.b18566184e8fdp-342, 0x1.89ba0fe1c5a69p-355,
     0x1.0bc2045159071p-678, 0x1.ed7bbedfa94d1p-555, 0x1.5f18d8b8cdc72p-778, 0.0,
     0x1.eba5733cffd53p-314, 0x1.3983e3b409161p-133, 0x1.8b70a1ff5ff8ap-350, 0.0,
     0x1.72d3787f47fe9p-184, 0x1.8383416e52e39p-267, 0x1.a94d6e1d333d2p-490, 0.0,
     0x1.8e9d54e56d36fp-293, 0x1.ac562bce36151p-77, 0x1.5237d3b2dda31p-509, 0.0,
     0x1.178762d27d7eep-313, 0.0, 0x1.203549b14cac6p-208, 0.0, 0x1.6e63f4c553f92p-273,
     0x1.db71b483ed95dp-395, 0.0, 0x1.858d4eecaab0cp-73, 0.0, 0x1.ee69698e2163ap-927,
     0.0, 0x1.e1b2eeb890624p-901, 0x1.3db1fa002e6eep-328, 0x1.f9c0da859d5a6p-936, 0.0,
     0.0, 0x1.05e223acd3683p-30, 0x1.215edde0dabdcp-45, 0.0, 0x1.9e00279f24b06p-701,
     0x1.5440453070f67p-270, 0.0, 0x1.1e71eb227990dp-522, 0.0, 0.0,
     0x1.febaebd37cdp-706, 0x1.8cae3628ce08cp-570, 0x1.480cf6e58fdc1p-9,
     0x1.83bc14b81fac6p-448, 0.0, 0.0, 0.0, 0x1.04be7f0dc70c4p-371,
     0x1.d9942d9c20fe6p-955, 0x1.8ea2989b6f2b3p-401, 0.0, 0.0, 0x1.34841e76e7b8ep-452,
     0x1.b32eea2080fc8p-512, 0x1.03e0f1085ada5p-362, 0x1.3f6f2b75eacb2p-595, 0.0, 0.0,
     0.0, 0x1.263779576964cp-997, 0x1.2a78d714fbf2cp-755, 0.0, 0x1.1f136ea1aa72dp-863,
     0x1.fe2d498981a3fp-1021, 0.0, 0.0, 0x1.c9111b1695e05p-98, 0x1.fba58cddb6986p-374,
     0x1.fb65793c4bd88p-85, 0x1.9c2ef2ed7c8f1p-230, 0.0, 0.0, 0.0,
     0x1.78bf539e8200cp-269, 0x1.14c0424d4d357p-123, 0.0, 0.0, 0.0,
     0x1.c8953940d9e05p-864, 0.0, 0.0, 0x1.9edd25f99122ep-777, 0.0, 0.0,
     0x1.ce15580e6d1c3p-113, 0.0, 0x1.24ff782d98679p-757, 0x1.10720202c18p-807,
     0x1.a1d4421673183p-721, 0x1.6d431e5951511p-990, 0.0, 0.0, 0x1.ac5d555caf868p-473,
     0.0, 0x1.4961a8dec338cp-520, 0.0, 0x1.f01c3018fb87fp-746, 0.0,
     0x1.bbf8a1a5fad7p-346, 0.0, 0x1.928978a2533bbp-175, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2dc461fd644dap-665
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
            tmp1 = Sleef_log2d2_u35kvx(tmp0);
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
    printf("Sleef_log2d2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log2d2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
