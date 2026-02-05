/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modfd4_kvx.c --function Sleef_modfd4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision \
 *     sleef_sd2 --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.09ce71c53554ep-656, 0x1.c8ed02c295fffp-784, 0.0, 0x1.a9d8b8ccf86e3p-76, 0.0,
     0x1.eba21a803e362p-593, 0.0, 0x1.40c08cb71b425p-764, 0.0, 0.0,
     0x1.96915507a3c03p-182, 0.0, 0.0, 0.0, 0.0, 0x1.81b942b48067fp-244,
     0x1.169d7789693a3p-880, 0x1.28553fb74cbb6p-638, 0.0, 0.0, 0x1.3603196906083p-938,
     0x1.777a18465d259p-266, 0x1.ef26c403367d1p-806, 0x1.3a69cb63d9f3cp-459,
     0x1.d5c9de591f34ap-983, 0.0, 0.0, 0x1.ade0d38f13474p-758, 0x1.3348734cc67ffp-581,
     0.0, 0x1.6fddb1ad31a13p-352, 0x1.251681297712fp-688, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f2b4b176832dap-604, 0x1.bc6925b0b0ac4p-300, 0x1.ae2160e27a774p-740,
     0x1.c256af65a477ep-98, 0.0, 0x1.dcbf62b4a8961p-498, 0.0, 0x1.7e82467501763p-423,
     0.0, 0.0, 0x1.abb3b5d3e465ap-577, 0x1.a93bccb2c5298p-962, 0x1.d26aca28faadep-584,
     0.0, 0x1.50946c2dbd58p-132, 0x1.d718b788cb108p-293, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46cbab221ea11p-362, 0.0, 0x1.152f0c4390493p-688, 0.0, 0.0,
     0x1.2ccee1be5d161p-872, 0x1.1567c36c648a6p-713, 0.0, 0.0, 0.0, 0.0,
     0x1.5453a80f8c2fep-822, 0x1.c573f580298a9p-183, 0x1.7f932d3b7c93ep-191, 0.0, 0.0,
     0.0, 0x1.a475bd64ed38ap-383, 0x1.789678472544ep-77, 0.0, 0.0,
     0x1.f89a90a75f742p-826, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6448196c1ad3cp-227, 0.0,
     0.0, 0x1.edd761e7788a4p-586, 0.0, 0x1.f0f6cb660017ep-63, 0x1.5513402be0f2cp-71,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b8f106b52a3dp-584, 0.0, 0.0,
     0x1.9e4f47307bdbfp-444, 0.0, 0x1.78a79f9f707f4p-573, 0x1.b463417e552efp-721, 0.0,
     0.0, 0.0, 0x1.614e33e3b6e76p-710, 0x1.154e3b11aab2dp-918, 0x1.ff08c656a70e1p-975,
     0.0, 0x1.b2a71cb98a626p-822, 0x1.5199988c478e5p-332, 0x1.03c46430802c5p-385,
     0x1.ce79f1f742ea1p-209, 0x1.b9c44fb30e71bp-622, 0x1.3f8a62764349bp-426, 0.0, 0.0,
     0x1.1627d77811d1ap-544, 0.0, 0.0, 0x1.a0a795228a3e3p-40, 0.0,
     0x1.f87574647ca65p-946, 0.0, 0.0, 0x1.24b80bad48228p-956, 0.0, 0.0,
     0x1.26c01a99b692cp-130, 0.0, 0x1.4fecf0d443218p-767, 0x1.dceb063d9c67cp-545, 0.0,
     0x1.5c7d169f3bd3dp-56, 0x1.7375fa3d72e3p-963, 0x1.9a88cbc44b532p-771,
     0x1.9e2e91d77ea01p-419, 0x1.a3330d62feda7p-57, 0x1.e718a7e268228p-823, 0.0, 0.0,
     0x1.b4219c3a3830bp-971, 0.0, 0x1.0ea9cee091717p-551, 0.0, 0x1.797d3879cf9ep-513,
     0.0, 0.0, 0.0, 0.0, 0x1.5f4d584b62486p-957, 0.0, 0x1.a864b567053bbp-81,
     0x1.6e4b14aa9a7a1p-757, 0x1.080227f5bb768p-745, 0.0, 0x1.c1f9d13294afbp-773, 0.0,
     0.0, 0.0, 0x1.ff75424d97999p-951, 0.0, 0x1.bd35525087ef2p-1006,
     0x1.75206bb668991p-653, 0x1.775e8ef3b24a9p-900, 0x1.68e499590f12dp-71, 0.0,
     0x1.f928f7d50ef45p-320, 0x1.631c6d984a093p-352, 0.0, 0x1.2340c11ee96b2p-10,
     0x1.cb9e25c08fb63p-593, 0.0, 0.0, 0x1.31efd17536f3p-524, 0x1.62a7671c3b8aap-320,
     0x1.cb1d207fdd0a9p-751, 0.0, 0x1.68ce203b58bdfp-89, 0x1.7d16a2443a8b6p-329, 0.0,
     0x1.054816102545dp-873, 0x1.2b156b91e49c7p-439, 0.0, 0.0, 0x1.9929d85bfbc3dp-931,
     0.0, 0.0, 0.0, 0.0, 0x1.69021439539abp-3, 0x1.d0b28fe928943p-363, 0.0,
     0x1.0d0a23d82dec2p-180, 0x1.3b5053cb85c5ap-168, 0x1.1777cc1df7113p-925, 0.0,
     0x1.6fe3ff2e0122ep-931, 0x1.5aad63f1b4caep-140, 0x1.fa69cc145a339p-82, 0.0,
     0x1.e5ba58e896447p-296, 0x1.a62a6c438ff0ap-505, 0x1.15a3964e43252p-110, 0.0,
     0x1.7f267c99b3492p-363, 0.0, 0x1.474bfac534643p-686, 0x1.713356f9112dbp-27,
     0x1.190b076aceb22p-7, 0x1.a97b75820abe7p-250, 0.0, 0x1.dbf33b0bb9419p-732,
     0x1.66ad9b6a89a38p-695, 0x1.34159f67fcedcp-172, 0x1.32ee81e757384p-368,
     0x1.0f8c915dd60e7p-952, 0.0, 0x1.03f0b8ed60eefp-303, 0x1.ce07fe9fc4d73p-670, 0.0,
     0.0, 0.0, 0x1.dd48891ed087ap-316, 0.0, 0x1.532305759faep-197,
     0x1.603c901e50609p-153, 0.0, 0x1.e895998799f63p-237, 0x1.f50f8149e7d88p-562, 0.0,
     0x1.5c130e6baf16p-527, 0.0, 0x1.1fcd8001bd343p-854, 0x1.960c43d47457fp-176,
     0x1.1cfe1fa1157dbp-674, 0.0, 0.0, 0.0, 0.0, 0x1.1148a5aa4ae53p-936,
     0x1.40a24dae1d7b4p-38, 0x1.d0ed529af2288p-640, 0x1.7c3acafb90df4p-139,
     0x1.ce90fa162bb46p-488, 0.0, 0.0, 0.0, 0x1.65eea4db20de9p-7,
     0x1.a65c246ce71f4p-706, 0x1.a920d3124ee6p-104, 0x1.bad44b0662a3ap-412, 0.0,
     0x1.444982c98ac84p-860, 0x1.ac9300ab4efffp-394, 0x1.d2a34c5a06b25p-545, 0.0,
     0x1.5497820c32bb5p-915, 0.0, 0x1.a0a7895b9d30cp-920, 0x1.446e9464be6ddp-446, 0.0,
     0x1.9bb7f5301a39ep-423, 0x1.b7616a55e33a1p-264, 0x1.16d13ba6f561p-282,
     0x1.f1a1d5ce96d85p-480, 0x1.3123821aedcafp-88, 0x1.4fce4e2ef9cdp-452,
     0x1.6c1802ab40ffap-102, 0.0, 0x1.ad059003f0963p-156, 0.0, 0x1.b75feea80cdc7p-519,
     0.0, 0.0, 0.0, 0x1.f1c9e47d5da46p-627, 0x1.533d7384d81c5p-48,
     0x1.52970537479cep-483, 0x1.ac366a4de3ff9p-277, 0x1.72520c7e35c2ep-718, 0.0,
     0x1.c89ab9ba65a8fp-341, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.be91ccb545fbdp-927, 0x1.e00c2c28832afp-89, 0x1.ffaaaa409963ap-764,
     0x1.c8f474ad6255ap-872, 0x1.4472e76dd7dc2p-732, 0.0, 0.0, 0.0, 0.0,
     0x1.4388e1ce4fc0ep-262, 0x1.07b349545af09p-227, 0.0, 0.0, 0x1.5dda5a27c00e4p-830,
     0.0, 0x1.5611a86a2d39cp-996, 0.0, 0.0, 0.0, 0x1.8ef19970e0888p-86, 0.0,
     0x1.d2fe0e35b57c4p-29, 0.0, 0.0, 0.0, 0x1.0832f96e2250dp-319, 0.0,
     0x1.d0aeba1a5a428p-334, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87b5306b1a45cp-737,
     0x1.8f76117a9b9b1p-995, 0x1.fd3da642fafe9p-143, 0x1.5217dbbc85fadp-664, 0.0,
     0x1.2b432794abccp-397, 0.0, 0.0, 0.0, 0x1.c4597720a1577p-59,
     0x1.f34604b8d569fp-881, 0x1.41f3a6c543832p-350, 0x1.932dd0be66a81p-920, 0.0,
     0x1.fd48e2d0891bep-689, 0x1.4d5c317001f83p-778, 0x1.5da255a8283a2p-725, 0.0, 0.0,
     0x1.707ca268eff79p-852, 0x1.8661b0a88c989p-274, 0.0, 0x1.72862d89e1be4p-823,
     0x1.75e83db297a71p-98, 0x1.b3f63eb6a277p-535, 0x1.9c1ff08f9b2a9p-14, 0.0,
     0x1.7b3cc21904936p-97, 0x1.a199326538df4p-156, 0x1.819f7c12462d3p-940, 0.0, 0.0,
     0x1.1b7dc4ebfc021p-400, 0x1.caf4deec8c748p-713, 0.0, 0.0, 0x1.e578d07932987p-920,
     0.0, 0.0, 0x1.23a9f20f91d84p-836, 0.0, 0x1.e3f59171f4dbep-369,
     0x1.530d36cf10249p-570, 0.0, 0x1.83732c365541p-382, 0x1.e666011d84a7p-786, 0.0,
     0.0, 0x1.dc2da8c23034fp-614, 0x1.7126e61463f5cp-361, 0x1.eef42cd534e13p-385,
     0x1.f51e5577d6dd8p-232, 0x1.e307fdc9ad86ep-400, 0x1.fb53d874410d4p-111,
     0x1.f1aaa8a9e99dp-1008, 0x1.cc171fe7e28c5p-55, 0.0, 0x1.97a3e66e266a3p-830, 0.0,
     0.0, 0x1.13886e3d36d5p-387, 0x1.fc7fbacb23d13p-502, 0x1.a19c7f836318ep-447,
     0x1.157d1511496f4p-362, 0.0, 0.0, 0x1.010528318cf6cp-77, 0.0,
     0x1.f7b02cd4cc11dp-2, 0x1.c6c02ca26c737p-411, 0x1.02ec0b6deb556p-534, 0.0, 0.0,
     0.0, 0.0, 0x1.cde8cc00b165bp-135, 0.0, 0.0, 0x1.a626e8b5466dep-56,
     0x1.44c1b8fb4f017p-795, 0x1.a95bf8f27ec4ep-944, 0x1.baab7f52e289cp-477, 0.0, 0.0,
     0.0, 0x1.ac96ecb46ad3dp-680, 0x1.09687e37f011ap-352, 0x1.bda4bce1721dep-992, 0.0,
     0x1.d41724f32ae73p-814, 0x1.5aa06229bf84dp-624, 0.0, 0x1.0fb8107ee9143p-368,
     0x1.b6020289c76a4p-819, 0x1.c261b295a39c7p-836, 0.0, 0.0, 0x1.fc35cea7520e8p-686,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f325b01f6570bp-761, 0x1.04f455c2caafp-807,
     0x1.7079d714159a8p-747, 0x1.690a5e1b86913p-527, 0x1.9ecaad27ac87dp-982,
     0x1.2acbc416bdaa4p-267, 0x1.30aa4054d758ep-434, 0x1.b69b2ab789721p-608,
     0x1.351108ce8ae2dp-456, 0x1.f1319f3c1cecap-379, 0x1.1f90038b32b87p-152,
     0x1.e9c0fc064a68fp-475, 0x1.cd6c485010eacp-942, 0.0, 0x1.14a74131e85a4p-761, 0.0,
     0.0, 0x1.18d260d3d8996p-880, 0.0, 0x1.3081b1d3edd2p-92, 0.0, 0.0, 0.0,
     0x1.50fa3d8cd30cfp-988, 0.0, 0x1.0bc9199bf59bdp-340, 0x1.b587145153271p-616,
     0x1.7b40b51c664edp-752, 0.0, 0.0, 0.0, 0x1.f9127445a20aep-572, 0.0,
     0x1.a19a4331e834ap-696, 0x1.7840271c1fc74p-422, 0x1.fa60e5d2f4857p-733, 0.0, 0.0,
     0.0, 0x1.1b100a20ce021p-197, 0.0, 0.0, 0.0, 0.0, 0x1.434c7752aef5cp-686, 0.0,
     0x1.d7203b0643bc4p-29, 0x1.cbb39c1cd3953p-852, 0.0, 0x1.1a5e3c35d184p-551, 0.0,
     0x1.2c2d8e1c4f87ep-184, 0.0, 0x1.622a81de1c3b2p-463, 0x1.cc96d808e4ccap-632,
     0x1.04d9e9e750629p-106, 0.0, 0x1.1d28753f12b9dp-851, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b7191dc08fd7ap-498, 0.0, 0x1.2e1245eeb6847p-657, 0.0,
     0x1.a368cce5a2617p-516, 0.0, 0x1.febee5f894a3ap-62, 0.0, 0x1.cb0f014a65483p-707,
     0x1.4f152b245e48dp-977, 0.0, 0x1.e3a973547f78ep-959, 0x1.a83f35cada2afp-922, 0.0,
     0x1.28e9c0dfd660ap-550, 0x1.180bc6b5f2c56p-80, 0.0, 0x1.af79f44028eb6p-644,
     0x1.4067f2b57d92fp-517, 0.0, 0x1.adae450c7e4adp-442, 0x1.182b06c73eaf6p-133, 0.0,
     0.0, 0x1.e4fbe369143b6p-671, 0x1.060f34abc4bp-547, 0.0, 0x1.85b896e10ba61p-792,
     0x1.49e902618dde8p-391, 0.0, 0.0, 0.0, 0.0, 0x1.54100672a6dbfp-630,
     0x1.2b87a4ac8e298p-547, 0.0, 0.0, 0.0, 0x1.83708042bae04p-964,
     0x1.2d406cf54fe13p-265, 0.0, 0.0, 0x1.0acb07e19ae8fp-18, 0x1.be7d755c4539fp-906,
     0x1.90b3c374cad9fp-603, 0x1.dc488e3663d4fp-791, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9a0c7f6c661cdp-962, 0x1.b83db91a50172p-746, 0.0, 0.0, 0.0,
     0x1.67f682b328062p-653, 0x1.1347cb6125f79p-455, 0x1.ec0696985d924p-149, 0.0, 0.0,
     0.0, 0x1.360e444efb4b4p-954, 0x1.a0e657379bdf9p-153, 0.0, 0x1.e035138b8a8d9p-303,
     0x1.978c31a278e5cp-573, 0x1.1efd504c4eae2p-986, 0.0, 0.0, 0.0, 0.0,
     0x1.2a55d5921ff5ep-59, 0x1.c9c012e96df3fp-878, 0x1.9bb4b0bb4269ap-795, 0.0, 0.0,
     0x1.ef1bc417faa97p-401, 0x1.66445656f81acp-892, 0.0, 0x1.80b86a850dbefp-442, 0.0,
     0x1.20f0386a3667dp-14, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f32cffed8c65fp-974,
     0x1.8dc9fd49f77a1p-115, 0.0, 0.0, 0x1.3a2a676774821p-138, 0.0,
     0x1.636b461a583e4p-212, 0x1.70c4c0aacd4a4p-853, 0.0, 0x1.9b2d6562e770ep-860, 0.0,
     0x1.675ae0ed80bb2p-730, 0x1.e49cd98fee036p-726, 0x1.7245bf24761ccp-189,
     0x1.d5d5c1893c969p-953, 0.0, 0.0, 0.0, 0.0, 0x1.94e381533decdp-773, 0.0,
     0x1.a478984c05c36p-363, 0x1.6e99333db4035p-104, 0x1.a35e1d543624fp-894,
     0x1.30d01053624c5p-875, 0.0, 0.0, 0x1.41ec99c26d4c2p-90, 0.0, 0.0, 0.0,
     0x1.28e6c3922bbaap-563, 0x1.dd20fb9e5ebc4p-717, 0.0, 0.0, 0.0,
     0x1.5fe678edae059p-311, 0x1.a3b4d1b814258p-358, 0x1.17fd04f92fe87p-564,
     0x1.1de34eda1155dp-768, 0.0, 0x1.d7e5f44f7fb67p-525, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3a256ad72a1b4p-740, 0x1.006fe9a0abe37p-978, 0x1.d17ae81efa07ap-78, 0.0,
     0x1.9fcc84c9e47e3p-23, 0x1.52829d5299614p-802, 0x1.b652a23b665e9p-237, 0.0, 0.0,
     0.0, 0.0, 0x1.215452aa6086dp-35, 0.0, 0.0, 0x1.c0652f6b4d26p-494, 0.0, 0.0, 0.0,
     0x1.a1509d26e8475p-527, 0.0, 0.0, 0.0, 0x1.b73e1170f6d0cp-283,
     0x1.5eb1e4a7a9bbfp-250, 0.0, 0x1.8aca7f970a536p-966, 0x1.efee5321eb67ep-983, 0.0,
     0.0, 0.0, 0x1.ec0ca6d34133bp-934, 0x1.fd75b5c645013p-945, 0x1.d6c7b4f4d177dp-452,
     0x1.0fb67e5dd954cp-624, 0.0, 0.0, 0x1.d268f0a0ed3a7p-148, 0.0, 0.0,
     0x1.5200d8db39ffcp-10, 0.0, 0x1.748b0d5685c16p-961, 0.0, 0x1.5335f01a66b89p-714,
     0x1.b91cc81fd27cp-305, 0.0, 0.0, 0.0, 0x1.f69e26490a19fp-77, 0.0,
     0x1.d768248016ac1p-691, 0.0, 0x1.cef88abd99f17p-1010, 0x1.e0526ba477fc9p-144,
     0.0, 0x1.80c19bec8fa4ap-241, 0x1.3d280c5a6f009p-448, 0x1.2e81d73f4fd54p-638,
     0x1.297db1497a1p-737, 0.0, 0.0, 0x1.9c06fe59f0734p-588, 0.0,
     0x1.295b845a55f8ap-80, 0.0, 0.0, 0x1.e7dd6d5b4fa49p-979, 0.0,
     0x1.f413f350d2955p-969, 0.0, 0.0, 0x1.5c5101fface95p-68, 0.0, 0.0, 0.0, 0.0,
     0x1.6d96b3fc83d6dp-979, 0x1.519d62e19c817p-13, 0.0, 0.0, 0.0,
     0x1.50aa433ef80adp-841, 0x1.10a9af31aba73p-192, 0.0, 0.0, 0.0,
     0x1.5903a19054602p-713, 0x1.56a0040c1118dp-443, 0.0, 0.0, 0.0, 0.0,
     0x1.a2b157cddcdf6p-196, 0x1.767f3801a2283p-922, 0.0, 0x1.627bcf0dcbc68p-543,
     0x1.77b38b8041e2fp-506, 0.0, 0x1.73f13a9ec69cbp-158, 0x1.efcf9f3a8d36fp-609,
     0x1.91321bc5b93c7p-504, 0.0, 0x1.437a57476f8aap-64, 0.0, 0x1.c1998b7909e1bp-692,
     0.0, 0x1.a8b4273d6c9dfp-777, 0.0, 0.0, 0x1.8329e94d4e6d5p-194, 0.0, 0.0,
     0x1.bbd2a5905f28p-168, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1757c4f752382p-925,
     0x1.2e8eff791b4fbp-225, 0x1.7fcd22de29c27p-8, 0x1.e968eb6a44cb2p-32, 0.0,
     0x1.135a69d1cfebcp-888, 0.0, 0.0, 0x1.02bdacf1beb25p-818, 0x1.b02ac2cfd74e1p-593,
     0x1.484868acb56d9p-257, 0x1.242901c1af2fp-69, 0.0, 0.0, 0.0, 0.0,
     0x1.88f2780c4fd8p-153, 0x1.a91e8790bad4p-64, 0.0, 0x1.e66aff4f7d73bp-747, 0.0,
     0.0, 0.0, 0x1.3114aa873fd5ep-193, 0x1.eec8eb92df0ccp-22, 0.0,
     0x1.a88688bbc6249p-959, 0.0, 0x1.405f4c776442cp-64, 0.0, 0.0, 0.0,
     0x1.803a175b59c3p-644, 0.0, 0x1.1a49988d6b079p-337, 0.0, 0.0, 0.0, 0.0,
     0x1.1072210e26c17p-894, 0x1.a7d8002e2ba9ep-788, 0.0, 0.0, 0x1.6646cc3f03c26p-701,
     0x1.0cc9f32e4e858p-930, 0x1.29c8abf3858a5p-152, 0.0, 0x1.a6a4c481c2e56p-166,
     0x1.e66f0fc3e6a2ep-453, 0x1.bc7ea4a4e7abep-479, 0.0, 0.0, 0.0, 0.0,
     0x1.debd51ada6fddp-956, 0.0, 0x1.f5da5c0e00a24p-869, 0x1.54f6fa9d91ddp-725, 0.0,
     0.0, 0x1.87956dc1cfe84p-454, 0x1.7eb3e077b5aabp-598, 0.0, 0.0, 0.0,
     0x1.cf59aab6e530bp-18, 0x1.d7e5192a4f846p-305, 0x1.a48a11c925077p-579, 0.0,
     0x1.70fd2b2241659p-921, 0.0, 0.0, 0.0, 0.0, 0x1.0ac12dc6d4a3bp-676,
     0x1.f810702292f1ep-748, 0x1.eee17eb4dfd5fp-460, 0x1.c24423820bce5p-125,
     0x1.546aa7a8bdd8dp-455, 0x1.d365ebd9050b6p-669, 0.0, 0.0, 0.0,
     0x1.079e2856a2ecbp-17, 0x1.6ff356157b742p-26, 0x1.21281a5563b96p-842,
     0x1.496e8136340c3p-913, 0.0, 0.0, 0.0, 0x1.c4e5ab7e4daeep-506,
     0x1.818bc984aa534p-983, 0.0, 0x1.248fc023068e1p-214, 0x1.cb05fd5393d5ap-442, 0.0,
     0.0, 0x1.b6a0528dbcecp-760, 0x1.6c6af4662b891p-345, 0x1.fc4c425fbd4fp-250, 0.0,
     0x1.e2b0dc664d587p-145, 0.0, 0.0, 0.0, 0x1.3d3bf54f1e6ffp-2, 0.0, 0.0, 0.0,
     0x1.dd0f37ba67c14p-211, 0.0, 0.0, 0x1.0b65028797ae7p-233, 0.0,
     0x1.e9ae4a7f250a6p-678, 0x1.3d960342327ecp-35, 0x1.7d3fc6ebefb5dp-650,
     0x1.e4c25b35e1d81p-413, 0.0, 0.0, 0.0, 0x1.4cdb8e1c1c5e2p-390, 0.0, 0.0,
     0x1.5da914a44fddp-469, 0.0, 0.0, 0x1.afbc43c6e360ap-563, 0.0, 0.0,
     0x1.3adbbf3942fa9p-106, 0.0, 0.0, 0x1.5c754b76e281ep-774, 0x1.5abeda2242591p-844,
     0.0, 0x1.500e08a8a06b3p-120, 0.0, 0x1.1e7197b64332ap-610, 0.0,
     0x1.af1781fc4065cp-590, 0.0, 0.0, 0x1.b071c6a8babd7p-608, 0x1.6cf3fc28926e3p-900,
     0x1.5365b4758cca6p-962, 0.0, 0x1.612cbcec31a1ap-401, 0x1.5bea8206fa5b3p-454, 0.0,
     0x1.22fb3a67bb359p-3, 0.0, 0.0, 0x1.bc43610b38f6ap-882, 0x1.f48330f19b67p-931,
     0.0, 0x1.48ee22d7d04fap-886, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0484f0cddad4fp-666, 0.0, 0.0, 0.0, 0.0, 0x1.8059d826e44d8p-469, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.44dfd3d933584p-773, 0x1.0f9d34227516cp-409,
     0x1.659c7ffdbca56p-678, 0x1.b5d266a3dfb61p-41, 0.0, 0x1.cc09cddd585fap-772,
     0x1.8e6e71f11a4eap-860, 0.0, 0x1.53b8d46579c04p-256, 0x1.97068bcd17209p-395,
     0x1.0cf0b9fe84a6fp-657, 0x1.f8625956f950bp-880, 0.0, 0x1.b9424d2dddfbdp-997,
     0x1.0611d6f12dd0cp-738, 0x1.b047eca62040cp-685, 0x1.eaccef2b83e71p-374,
     0x1.c42da9a382dbbp-794, 0x1.cf79b213e3773p-870, 0.0, 0x1.32db105be7d6ap-485,
     0x1.22ca5cbcab6d7p-318, 0x1.5e21a514bb8c4p-174, 0.0, 0.0, 0.0, 0.0,
     0x1.69cc6ba052121p-534, 0x1.8bcd42ea31c1ep-928, 0.0, 0.0, 0x1.b9944cffadc21p-709,
     0.0, 0x1.a07af2ee3c547p-903, 0.0, 0x1.2ea3d6e5429fep-309, 0.0,
     0x1.c38316f4d725ap-721, 0x1.43e47d1241a02p-495, 0x1.6185683484978p-445, 0.0, 0.0,
     0x1.ca10dbbebb72dp-77, 0x1.78e7b2d33c41dp-243, 0x1.88cea4edb81ccp-461, 0.0,
     0x1.6ae6f7bd33d26p-952, 0x1.56ed64a58a5dbp-385, 0.0, 0x1.84e852a60112p-259, 0.0,
     0x1.1fdcd89141c61p-415, 0.0, 0x1.0575ccd27b6c7p-41, 0x1.a02af40ba1f87p-153,
     0x1.6c42c35b0538cp-951, 0x1.95908bf3c259ep-94, 0.0, 0x1.52f1b463e59d2p-939, 0.0,
     0x1.542926b6c2d27p-581, 0x1.80c89834b378dp-793, 0.0, 0x1.5faf25f7cd093p-819, 0.0,
     0x1.274ff37756089p-846, 0x1.5ed0effe5254p-475, 0.0, 0.0, 0.0,
     0x1.739304b97325p-610, 0x1.9d26685918d0ap-835, 0x1.3e4d1198ef567p-651, 0.0,
     0x1.058642502a65dp-772, 0x1.bccfecf4b42fap-662
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_modfd4_kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_modfd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_modfd4_kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
