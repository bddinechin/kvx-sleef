/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpid4_u05kvx.c --function \
 *     Sleef_finz_sinpid4_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.efd3051e0fcdep-280, 0x1.fba79c1f86dbdp-414, 0.0, 0x1.9ae42dca89b29p-7,
     0x1.b31a8587e244ap-524, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c69313174e42cp-529, 0.0, 0x1.09fc10a51ddc9p-238, 0x1.6a997a5030afep-39, 0.0,
     0.0, 0x1.4a960ddb63dd5p-209, 0x1.631e2caf8d15fp-59, 0.0, 0.0,
     0x1.c5e4b0f2d6428p-519, 0.0, 0x1.99f5f33d63528p-598, 0.0, 0.0, 0.0,
     0x1.8743513a70926p-47, 0x1.0a7371037998dp-236, 0.0, 0x1.49dfc56939eb3p-304,
     0x1.9f7e518474c78p-275, 0x1.c5fea994cbbc3p-340, 0.0, 0x1.31d10a87ff7cap-685, 0.0,
     0x1.36738ef789831p-985, 0.0, 0x1.1c886bd29b71cp-699, 0x1.a876509dbed02p-543,
     0x1.f14b2e6f90abbp-781, 0x1.11ace8cae3c77p-409, 0.0, 0.0, 0x1.0370fdc54fc16p-810,
     0.0, 0x1.3925de2c7d242p-1005, 0x1.8bd61ef461159p-820, 0.0, 0.0,
     0x1.0aa71d634324ap-802, 0.0, 0x1.23ca8396fbe1ep-925, 0x1.d1b53774c3047p-982,
     0x1.e12f20559b47p-47, 0.0, 0x1.7b917831d56e7p-853, 0x1.9a3db17bef978p-151, 0.0,
     0.0, 0x1.e793122d49194p-432, 0x1.4afc94d437fcap-814, 0.0, 0x1.1097938872ad6p-331,
     0.0, 0.0, 0.0, 0x1.4ab0351287537p-130, 0x1.2aba1130190a3p-1013,
     0x1.32d2c79379dd4p-114, 0x1.17448da69a0a3p-1020, 0.0, 0x1.766bfb49a16f4p-969,
     0x1.99c4bb9cdbb6ap-46, 0.0, 0.0, 0.0, 0.0, 0x1.a8625fd0e93bep-893,
     0x1.4c1cd7ca19ef2p-453, 0x1.4429de0124753p-589, 0.0, 0x1.75ba1fb5e877cp-849,
     0x1.b14d400b88669p-624, 0.0, 0x1.3b9eab9bfdefbp-803, 0x1.2eb1ddbe9002ap-719, 0.0,
     0.0, 0.0, 0x1.7273d2bda7734p-249, 0.0, 0x1.595f791b5655cp-464, 0.0, 0.0,
     0x1.c6e10f9010e7cp-11, 0x1.27c8700018a58p-156, 0.0, 0.0, 0.0,
     0x1.4a7d6851b481p-874, 0.0, 0.0, 0x1.284c6f6c482adp-751, 0x1.8a8aa39c4395ap-688,
     0.0, 0.0, 0.0, 0x1.a922e88ab75f9p-654, 0x1.b07befb6c9636p-460, 0.0, 0.0, 0.0,
     0.0, 0x1.45254e1a5bd23p-196, 0.0, 0x1.e512629464c03p-973, 0x1.1072af160d81p-15,
     0x1.5406445e95311p-466, 0x1.0ba6439630e52p-97, 0x1.0d3874f3a413cp-922, 0.0,
     0x1.115c73668c7aap-195, 0.0, 0.0, 0x1.0226f31469b7dp-843, 0x1.d5f39de4f43a8p-349,
     0x1.5f8dd282a8f69p-185, 0x1.22624120df609p-330, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8b2b1a88be517p-130, 0.0, 0.0, 0.0, 0x1.b307f147ae64ap-217, 0.0, 0.0,
     0x1.f9468c132033cp-952, 0.0, 0x1.24b979cea88c6p-466, 0.0, 0.0,
     0x1.c12e8c35ec1e3p-884, 0.0, 0x1.d9c2ff1271668p-733, 0x1.8f119ecf42d68p-246,
     0x1.79a723ec10b2fp-992, 0.0, 0x1.317baadd2dd0ap-911, 0x1.74d73a38f533cp-909,
     0x1.0d585d58e9a98p-222, 0.0, 0.0, 0x1.0f1defe4806c8p-96, 0.0, 0.0, 0.0,
     0x1.c0cf4b78781fcp-926, 0x1.f3d9ba4b4cebfp-246, 0.0, 0.0, 0x1.730e41ba45cb2p-399,
     0.0, 0.0, 0x1.0be3cdf6acf24p-258, 0x1.ace2c63c7bdb9p-383, 0.0, 0.0,
     0x1.8929d9d268f32p-474, 0.0, 0x1.0e70bf719b15ap-423, 0.0, 0x1.5c02895f6e319p-183,
     0x1.dd993a25769bp-922, 0.0, 0x1.b13484b53e92cp-682, 0x1.38b16ac9ca8f7p-665,
     0x1.eb3cb1eb1be9bp-482, 0x1.c3d6e12889e4dp-353, 0.0, 0.0, 0.0,
     0x1.4defc4262ec3cp-475, 0.0, 0.0, 0.0, 0x1.9db523e39ec9ep-490, 0.0, 0.0, 0.0,
     0x1.1eb61fdcdbd03p-14, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a058c3125aea2p-802, 0.0, 0.0,
     0x1.09fcb7c09f1b2p-803, 0.0, 0x1.d323aacf844fdp-758, 0.0, 0.0,
     0x1.7ea5493940254p-902, 0.0, 0.0, 0x1.f487270c06798p-1005, 0.0,
     0x1.6cffc2d9d08a3p-958, 0x1.906102b6cf3b6p-333, 0x1.dce7e2278cb5bp-580, 0.0, 0.0,
     0.0, 0.0, 0x1.ac69d52de5dcfp-657, 0x1.43c91c1696713p-424, 0x1.9a6f1997aef4ep-717,
     0x1.b56beb1ceb0fp-277, 0x1.949816b4b03abp-727, 0.0, 0.0, 0x1.d3f3d6896a755p-867,
     0x1.bec2525ce6666p-489, 0x1.15262537e5ba2p-518, 0x1.bffcac6d84252p-925, 0.0, 0.0,
     0.0, 0.0, 0x1.d823863f64965p-781, 0x1.c9bc6abe81b29p-793, 0.0,
     0x1.1edf7dd2fd04fp-185, 0.0, 0x1.87da1dfaff143p-1004, 0x1.704e59e734434p-690,
     0.0, 0x1.ff306202fdff8p-988, 0.0, 0.0, 0x1.984019dc95c5fp-563,
     0x1.cafe17de577dp-315, 0.0, 0.0, 0.0, 0.0, 0x1.8644062c2a0bcp-434, 0.0, 0.0,
     0x1.56c6fb1b038dep-25, 0x1.18e7030d748efp-753, 0x1.2fc2821eb87dep-541,
     0x1.4d66fc1b6059p-928, 0x1.e7e3535d502f3p-212, 0.0, 0x1.26267ee4a3696p-675, 0.0,
     0.0, 0.0, 0x1.2126a347b9a14p-645, 0.0, 0x1.d2634c87c5b2bp-959,
     0x1.d7202562b268ap-61, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e31289ef103fp-976,
     0x1.afd77b48036a5p-267, 0.0, 0.0, 0x1.8377894a1dabep-858, 0.0, 0.0,
     0x1.9bc5fa0294521p-1, 0x1.72a55bfed98b8p-516, 0.0, 0x1.3f5667dc2444ap-192, 0.0,
     0.0, 0x1.00d319b841493p-427, 0.0, 0.0, 0x1.e95707fe0516p-781, 0.0,
     0x1.0776c6c2a33cp-3, 0x1.ee6257352f569p-1008, 0.0, 0.0, 0.0, 0.0,
     0x1.9c75bd77a2c5fp-35, 0x1.bb4ed6634c88ap-799, 0x1.1bcd97724f1dp-848, 0.0,
     0x1.1d05ef20545ap-23, 0x1.aecf75aa5905ap-35, 0.0, 0x1.404b7e4e980bfp-114,
     0x1.e4c03c346dd0cp-426, 0.0, 0x1.e8e2e53e8a2bp-95, 0x1.0813dc6ca92fdp-415, 0.0,
     0.0, 0x1.213d64931f0c8p-376, 0x1.2e10cda725979p-520, 0.0, 0.0,
     0x1.b2f88e5594aaap-940, 0.0, 0x1.03faf5f178c33p-705, 0x1.dc206f0d28841p-131,
     0x1.743d3f54f945ep-682, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a719719d2dd6p-435,
     0x1.543f3c7d2c52ep-300, 0x1.9407d370b7cc5p-166, 0.0, 0.0, 0x1.e593d0f0c8a6fp-551,
     0.0, 0x1.35f875bf01aa6p-413, 0.0, 0x1.25851f765c3p-126, 0x1.252e9d1bfdfadp-929,
     0x1.f4159560864aap-239, 0x1.bd7bbc61038adp-72, 0x1.c9c63bcc838a5p-99, 0.0,
     0x1.f302f15c8a549p-905, 0.0, 0x1.871793cdb67aap-662, 0.0, 0x1.3b27c25b3ca32p-277,
     0x1.d8fc6662133fp-630, 0.0, 0.0, 0.0, 0.0, 0x1.481087ece9a6ap-89,
     0x1.b3bd5877127fbp-77, 0x1.d936027fa1869p-421, 0x1.210633493db2ap-997,
     0x1.831261d77e766p-925, 0.0, 0.0, 0.0, 0x1.e2bb784f10f8ap-351, 0.0,
     0x1.2b25fa4c2e519p-974, 0x1.2043c62fed55ap-1004, 0x1.1c6a1ee4ab455p-169, 0.0,
     0x1.13888880a1317p-3, 0.0, 0.0, 0.0, 0x1.d1a531a2f92dp-540,
     0x1.6eb8899041d32p-476, 0x1.5691a36b49682p-396, 0.0, 0.0, 0.0,
     0x1.0b71486ebb1c7p-113, 0.0, 0.0, 0.0, 0.0, 0x1.d8fbdaa5aa2bep-808, 0.0,
     0x1.6aa7be5343818p-698, 0.0, 0x1.0feb1423f7c62p-223, 0.0, 0.0,
     0x1.9aa32fc484bd5p-528, 0.0, 0x1.5949739a053b5p-419, 0.0, 0.0,
     0x1.529cf3c6ebd11p-159, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6cde901ad44ep-814,
     0x1.c486305f4314ap-89, 0.0, 0.0, 0.0, 0x1.e5bba8d1197c7p-1007,
     0x1.675f360cc260ap-519, 0x1.01ae33516a929p-783, 0x1.e75215baecd52p-398, 0.0, 0.0,
     0x1.73b5d86f5bc74p-175, 0.0, 0.0, 0x1.d56aced238a03p-659, 0x1.56d3a438c6c1bp-35,
     0.0, 0.0, 0.0, 0x1.72078984957cfp-253, 0x1.49df623f948b1p-677,
     0x1.d69d9faf563f5p-286, 0.0, 0.0, 0x1.d7d506d6e4845p-855, 0.0, 0.0, 0.0,
     0x1.8069a454cfc88p-364, 0.0, 0.0, 0x1.7dcb2c50c884cp-658, 0.0, 0.0,
     0x1.fe4598f737a69p-519, 0.0, 0.0, 0.0, 0x1.83329d1b7348fp-986,
     0x1.903a6c3641ecbp-144, 0x1.0d021b75a65e7p-859, 0x1.c06d414f4893ap-347, 0.0,
     0x1.b5742d77b6a0cp-149, 0x1.f485b2ef67fafp-317, 0x1.5202176aeadd5p-232,
     0x1.07ee48b9b6f5ep-109, 0x1.559f54c7918d5p-273, 0.0, 0x1.7bb3ed53cadc6p-613,
     0x1.cade352a3e4cbp-27, 0.0, 0x1.f88913180640ep-372, 0x1.4ab8290aed708p-387,
     0x1.1b30efd2a20dfp-898, 0x1.06b703447bfe3p-323, 0x1.0efa46cb5ca07p-738, 0.0,
     0x1.b55bfa6370b22p-261, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.305f3250e2d8p-863,
     0x1.b7ee4bb2d1d3ap-416, 0x1.e5084bcaa175dp-430, 0.0, 0.0, 0.0,
     0x1.5ce57f61f21c9p-567, 0x1.592cce196ce86p-728, 0.0, 0x1.86432375f8158p-808,
     0x1.5a30c9797cc12p-845, 0x1.049bb1fc710dcp-47, 0.0, 0x1.e2903e169c21fp-138,
     0x1.b45568aeb66bbp-681, 0x1.0a44654112168p-280, 0x1.e82488953645dp-544,
     0x1.3ad2c00ea4c43p-187, 0x1.e4022f940791cp-44, 0x1.ad19b19a49f64p-206, 0.0,
     0x1.17b79e3518d6cp-550, 0x1.17ef987c93382p-289, 0x1.a336319b0634ep-661,
     0x1.99c43a797e694p-822, 0x1.db73278b36e2p-61, 0x1.aead80a7f1169p-84, 0.0,
     0x1.f15be4a1a9a6bp-4, 0x1.97401deef61cbp-656, 0x1.321a555c01497p-467,
     0x1.232addd9e0e2bp-721, 0.0, 0.0, 0.0, 0x1.11e5cdb09ae1bp-635,
     0x1.168af6abc1b64p-781, 0.0, 0x1.94bfc56eec5e6p-453, 0x1.82198286d3344p-301,
     0x1.f92f2ac3c09c3p-625, 0x1.8de6d233bbeaap-327, 0.0, 0.0, 0x1.1e1f2f249a85ep-868,
     0x1.80ef915aa65ecp-905, 0x1.1cb1322377874p-581, 0.0, 0x1.0396c56f14f21p-226,
     0x1.15e5bb9744fap-308, 0.0, 0.0, 0x1.c8a4320d9a239p-949, 0.0,
     0x1.9c94b880ea54fp-671, 0.0, 0x1.8df23b6d49196p-232, 0.0, 0.0,
     0x1.dad4ec5fc6f1fp-945, 0x1.d5af04ecf30fdp-683, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.192f392d36ec3p-877, 0x1.3ca8b1856e9a7p-158, 0.0, 0x1.3439f702f59a7p-799,
     0x1.781a4ca810b2p-197, 0x1.1cef02ff073a7p-740, 0x1.b16f52d6ded49p-406,
     0x1.46123bc92c861p-946, 0.0, 0x1.7e486a8d4f014p-807, 0.0, 0x1.7db64fecb015p-478,
     0.0, 0.0, 0.0, 0.0, 0x1.3e058c3f31ff5p-155, 0.0, 0.0, 0.0, 0.0,
     0x1.b93f8ae6e0c1cp-522, 0.0, 0x1.a028d8a4f3c57p-196, 0x1.c344e3d37ef56p-41,
     0x1.ac47b87bb5005p-939, 0x1.9e8da67f4d7c1p-173, 0.0, 0x1.bdd386643d46bp-908,
     0x1.34235eaff6fe9p-701, 0.0, 0.0, 0.0, 0x1.1403ca044b3d4p-942,
     0x1.2b0f5b2a7d55ep-821, 0x1.d93bef3fdeaf7p-853, 0x1.ec790bc26be6ap-787, 0.0, 0.0,
     0.0, 0x1.a3e2e07967932p-127, 0x1.3a68529ad70dfp-449, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2a1b3bb2218aep-344, 0x1.188aa4e0d744cp-615, 0.0, 0.0, 0.0,
     0x1.4226a5ba65c4dp-389, 0.0, 0.0, 0x1.05a76be753348p-42, 0x1.9c670b33c1ec8p-103,
     0x1.0c9b4a40c4d7dp-536, 0.0, 0x1.1293896b05f85p-25, 0x1.61c4910b79a99p-379, 0.0,
     0x1.e3d3d89d8c13fp-214, 0x1.b1af8d8b731b2p-386, 0x1.61d65d198261dp-666,
     0x1.c2dfb0aea7989p-790, 0.0, 0x1.bbf581b54b72dp-992, 0x1.a9686851b0e14p-535, 0.0,
     0.0, 0x1.19a1c5faeeba2p-941, 0x1.e200faac47922p-630, 0x1.ef2038700bf16p-527,
     0x1.76ddbaa29df9bp-640, 0x1.8bac11ff2ab9bp-395, 0x1.e24d86fd31bd4p-134,
     0x1.1ec50543f2ee9p-765, 0.0, 0x1.4419abe75378ep-71, 0.0, 0.0, 0.0,
     0x1.b50ee57ee485cp-493, 0x1.a73ed8b4b72b3p-616, 0.0, 0x1.31757a1a6c9a6p-901,
     0x1.a492d282080fdp-734, 0.0, 0x1.f419b85d82e9ap-953, 0.0, 0.0, 0.0,
     0x1.a7f53273df83bp-921, 0.0, 0.0, 0.0, 0.0, 0x1.eaa560b8f5ac2p-662,
     0x1.caf6a13746ccp-316, 0x1.3412e7c82223ap-475, 0x1.5297ec355c576p-628, 0.0,
     0x1.51c751169f3a4p-389, 0x1.e7e1ab79154c9p-232, 0.0, 0x1.5aeb8a4b6548ap-113,
     0x1.6895c58c696adp-467, 0x1.c1f4e31140a0cp-544, 0x1.9712c6cb5608bp-379,
     0x1.99d837d9a8719p-420, 0x1.03ed4c5e108fdp-572, 0.0, 0x1.1f5710c4bd4c1p-798,
     0x1.9b51666ed97e7p-705, 0.0, 0x1.34d15d03b40e2p-936, 0x1.ebd9b3953bc3fp-725,
     0x1.d6ff58ebfaec5p-553, 0x1.33da703902d5fp-298, 0x1.24c0c905bfe86p-235, 0.0,
     0x1.a8aeaa3ab032ep-680, 0.0, 0x1.1490acd51b323p-636, 0x1.254d92b9a85c1p-594,
     0x1.8c1e1ad1cef5fp-958, 0.0, 0x1.2469d2f0160dfp-238, 0x1.bf21c471dec6cp-128, 0.0,
     0.0, 0x1.e9ddbb0b65e7ep-505, 0.0, 0x1.99a58d97eb179p-993, 0x1.d8195617c0242p-217,
     0.0, 0x1.eb5666c5416d7p-261, 0.0, 0.0, 0x1.a72fce07e8fbcp-745, 0.0, 0.0, 0.0,
     0x1.3efcd5af26168p-974, 0x1.f127a5f3b5a72p-555, 0.0, 0x1.22b47f9dc4c7cp-855, 0.0,
     0x1.0750da8dd964cp-377, 0.0, 0.0, 0x1.41768ba9a11fbp-547, 0.0,
     0x1.cb576159b3ae5p-310, 0.0, 0x1.a57868da869e6p-241, 0x1.7f19097bb1ba9p-848,
     0x1.4e4374a3b4e3fp-999, 0.0, 0.0, 0.0, 0x1.3f527a54e7cc7p-711,
     0x1.4493ce6228da8p-267, 0.0, 0x1.9bc1052a466a6p-810, 0.0, 0x1.33776062e47f7p-889,
     0.0, 0x1.c9d23e474c026p-869, 0.0, 0.0, 0x1.fa02476e558fcp-24, 0.0,
     0x1.814ba5e200d76p-924, 0x1.683af6f09b067p-337, 0.0, 0x1.9e9aaf76c569ep-537,
     0x1.a3210e983045ap-906, 0.0, 0x1.56c784c709d17p-542, 0x1.84c570df22f49p-328,
     0x1.c704cb10169abp-111, 0x1.0083a33f397p-914, 0.0, 0.0, 0.0,
     0x1.f89b2b40918c5p-902, 0.0, 0.0, 0x1.56a16434ecbedp-633, 0x1.195a6e257d52ap-499,
     0x1.b0db4e01b7e77p-313, 0.0, 0x1.7ab970036edbfp-783, 0x1.210f90bdb2796p-775,
     0x1.0cbf87fb3909ep-982, 0.0, 0.0, 0.0, 0x1.d2ceab8792c11p-750, 0.0, 0.0,
     0x1.c74c200058c95p-505, 0x1.d26b19038d555p-68, 0x1.a98211783b1f9p-621, 0.0,
     0x1.8ec4a8920efcbp-783, 0x1.1d38b1800c38fp-864, 0.0, 0.0, 0.0,
     0x1.dfd6303e9536ep-674, 0x1.911bb3fbcf56p-948, 0x1.e7853ef9db435p-405,
     0x1.6bb7f7e121809p-21, 0x1.f0c471dad9119p-924, 0x1.75eb4e8caa014p-612,
     0x1.4331ad41babbp-44, 0.0, 0.0, 0.0, 0x1.c1b72f90ecfdep-658,
     0x1.91f6b198b958cp-171, 0x1.f4b7f0e2200c4p-249, 0x1.f03e151a191d5p-475,
     0x1.66fa4ed28e829p-39, 0.0, 0.0, 0.0, 0x1.f4e0947b98236p-401, 0.0,
     0x1.1ea68d14a7764p-395, 0.0, 0.0, 0.0, 0.0, 0x1.91e599ea57f47p-44, 0.0, 0.0, 0.0,
     0.0, 0x1.2a14e3d10462fp-273, 0.0, 0.0, 0x1.0e5c351ae625fp-399,
     0x1.d950a60b78129p-381, 0x1.ac043488fc8a8p-375, 0.0, 0.0, 0x1.6f9f9ee48fe94p-470,
     0.0, 0x1.bcf4c07f5aeb3p-858, 0.0, 0x1.c26b3e5881fc5p-399, 0.0,
     0x1.3e151e6d60a35p-765, 0x1.73d05cb37bf3p-343, 0.0, 0.0, 0x1.ca65500ba1ad7p-568,
     0x1.1ad9e65dfbbd4p-299, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e98bda23243cbp-616, 0.0, 0.0, 0x1.89672684f487ep-913, 0x1.ad89d69c1a626p-795,
     0.0, 0.0, 0x1.63ddee1122542p-138, 0x1.a95fec8167905p-739, 0.0,
     0x1.c1cf7ef3be3abp-392, 0x1.8550e4f53a186p-283, 0x1.b8a9ff9f859f4p-232, 0.0, 0.0,
     0x1.8c1ec24d429fep-855, 0.0, 0x1.0f2a9938c7aa9p-846, 0.0, 0.0, 0.0,
     0x1.fd9176f1a0e1ep-9, 0x1.d9119ad042c1ep-625, 0.0, 0.0, 0.0,
     0x1.a989617080333p-583, 0.0, 0.0, 0.0, 0.0, 0x1.7c9ff77f90679p-64,
     0x1.e8ff3327db7acp-921, 0x1.09c95c84c73d6p-197, 0x1.09524de49cd84p-552, 0.0, 0.0,
     0.0, 0.0, 0x1.a54cc5371c498p-309, 0.0, 0.0, 0.0, 0.0, 0x1.0fcf9125c8089p-505,
     0.0, 0.0, 0x1.2caef77c3f837p-742, 0.0, 0x1.6c82ea98297afp-65,
     0x1.bbadd340149d8p-402, 0.0, 0x1.487ce3b4e9408p-88, 0x1.99da8eee6c84dp-160, 0.0,
     0.0, 0x1.5e54d7dc4196ep-915, 0.0, 0x1.470acd954755ep-798, 0.0, 0.0, 0.0,
     0x1.467bdf6b9e0cdp-539, 0.0, 0.0, 0.0, 0x1.7423966a327a1p-840, 0.0,
     0x1.ba82379cb081cp-726, 0.0, 0x1.6aae23d19837ap-421, 0x1.4c60f432fc12cp-908, 0.0,
     0x1.6426e943016e4p-170, 0x1.26e728978faf8p-33, 0x1.7db16adccab73p-425,
     0x1.da87964cf2c6dp-300, 0.0, 0.0, 0x1.7b02d6ffa7ed8p-118, 0.0, 0.0, 0.0,
     0x1.4f6863a490c83p-814, 0x1.7939f05716b06p-268, 0.0, 0.0, 0x1.329bd548e779dp-310,
     0.0, 0x1.b4056a6ae689p-1013, 0.0, 0.0, 0.0, 0x1.fb7b71b0cbf35p-878, 0.0,
     0x1.d0378b31f9022p-220, 0.0, 0x1.fbd74881f6dp-240, 0.0, 0x1.725a8f616f194p-865,
     0.0, 0.0, 0x1.23eb6fcb231afp-820, 0x1.522b1b868e722p-205, 0.0,
     0x1.205301b92a82bp-158, 0.0, 0x1.ac3f8aafff7b1p-36, 0x1.b3f586a4f0797p-774,
     0x1.7e34652634886p-722, 0.0, 0x1.dc2d1d60c7654p-636, 0x1.9aae566adbbdap-300, 0.0,
     0.0, 0x1.6b9ca9a7116fbp-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.438f751c10411p-912,
     0.0, 0.0, 0x1.ca8ce1c43d854p-761, 0x1.5bb664dc627e5p-463, 0x1.2c1522fcf2906p-324,
     0x1.1fc497a7d0fcbp-828, 0x1.e8d370f8ba3b4p-179, 0.0, 0x1.bfbb3b4fd2c5bp-626, 0.0,
     0x1.28c45ade2aac6p-546, 0.0, 0x1.6060a5d685eefp-197, 0.0, 0x1.f7da071499916p-147,
     0.0, 0.0, 0x1.67e7fc2f6b7e4p-648, 0.0, 0x1.e9491e21cfbe7p-258,
     0x1.2cdec183330dcp-524, 0.0, 0x1.4e23811cd7988p-17, 0.0, 0x1.f8f38d50afe9dp-328,
     0.0, 0x1.3a1264da67db2p-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb4eab1305f1p-149, 0.0,
     0.0, 0x1.ab8f449c7cb16p-247, 0.0, 0x1.ed1800def496fp-5, 0.0,
     0x1.29a0477f13a4ap-971, 0x1.4bb5a0a9d6254p-560, 0.0, 0.0, 0.0, 0.0,
     0x1.7fb74ef798432p-699, 0.0, 0x1.34035adc73cefp-873, 0.0, 0.0,
     0x1.c8d203654418bp-584, 0x1.d6ddecc3ef795p-286, 0.0, 0.0, 0x1.f1cc8b6288c12p-260,
     0.0, 0.0, 0.0, 0x1.10be7f8bd9858p-767, 0.0, 0x1.4385e4718d876p-910,
     0x1.a592500bc5c6p-367, 0x1.9e5fb49409504p-757, 0.0, 0x1.dde8ee6d1c0bdp-76,
     0x1.4cb4af60cd24cp-446, 0.0, 0.0, 0.0, 0.0, 0x1.61e4ccf1e80a4p-477, 0.0,
     0x1.030286b7a5c0bp-809, 0x1.02a71440ef9fep-398, 0.0, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sinpid4_u05kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_sinpid4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinpid4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
