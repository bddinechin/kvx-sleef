/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ilogbd2_kvx.c --function Sleef_finz_ilogbd2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --vector-size 2 --function-input-vector-size 2 --precision int32 \
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


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.d5d85f820f2bcp-406, 0.0, 0x1.c160e8a3efff3p-487,
     0x1.3883c9da48182p-380, 0.0, 0.0, 0.0, 0x1.988382d64025cp-976,
     0x1.cbc3d81c27379p-902, 0x1.1c7ea2ce1d1ffp-769, 0.0, 0x1.7e4b73bca1305p-301,
     0x1.82105bb52933fp-995, 0.0, 0.0, 0x1.abe192ed74e3ap-127, 0x1.f2c191ada909cp-178,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd277f6854836p-939, 0.0, 0.0, 0.0,
     0x1.f1e0c30b8e182p-581, 0x1.0438d5614c11fp-464, 0.0, 0x1.52b85915e51fp-314, 0.0,
     0.0, 0.0, 0x1.95601666b5951p-101, 0x1.ce45d4caaf7bcp-738, 0.0, 0.0, 0.0, 0.0,
     0x1.414517596752dp-23, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db70f38439e83p-722,
     0x1.2f37ff24814fap-986, 0.0, 0.0, 0x1.0a1d394002888p-284, 0x1.799c267ad6842p-182,
     0x1.6ccc0a014c7b8p-538, 0.0, 0x1.68a532336f7e7p-882, 0x1.64da7b09524c6p-977,
     0x1.d7a523a05f2ccp-143, 0x1.e27bc6d6c0b99p-388, 0x1.2f48767a077p-252,
     0x1.1964539c81c9cp-965, 0x1.2bd7b91fcd736p-14, 0x1.95f98ff77e51cp-675,
     0x1.8613f025307bep-831, 0x1.8d1d2c54de5dfp-223, 0.0, 0x1.66b934b375db3p-822,
     0x1.4f054c242c57dp-63, 0x1.1a36a321b7e4ap-488, 0x1.376a6e72c3b2ep-919, 0.0, 0.0,
     0x1.8c9daa55d886cp-820, 0.0, 0x1.ab705c1c4fbb5p-850, 0x1.f19e402ec50aep-21, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1b8a7851a503bp-607, 0.0, 0.0, 0x1.df39af8cb57c4p-870,
     0x1.6b513d8a0be5ep-841, 0x1.a16956377af7dp-795, 0x1.9ad986d147ap-622, 0.0,
     0x1.3ad43b3e5da05p-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.937ce59fc9fb5p-48, 0x1.fd188a000471ep-601, 0x1.54eceb3324741p-395, 0.0, 0.0,
     0.0, 0x1.77b8d12b6d242p-985, 0x1.a638c4d436466p-803, 0.0, 0.0, 0.0,
     0x1.88b9964e91f69p-434, 0x1.29bfb1f2053d8p-48, 0.0, 0.0, 0.0, 0.0,
     0x1.baf4b44da01b8p-83, 0.0, 0.0, 0.0, 0x1.dab918e270489p-596, 0.0,
     0x1.123d6a518ca24p-466, 0x1.5a869b1af19afp-11, 0x1.a9a5b5e5b4664p-896,
     0x1.34360ae60abdap-473, 0.0, 0x1.eecfff89f61d1p-783, 0x1.38860cfdb7ba1p-856, 0.0,
     0.0, 0x1.8f3a6c77928ffp-403, 0x1.05dea8bc76b4fp-536, 0.0, 0x1.98ad2ee27e911p-730,
     0x1.58c894acad297p-197, 0x1.0c12ae699c8bp-408, 0.0, 0x1.c1832a6eb7bd1p-489,
     0x1.6e8c550283bcbp-982, 0.0, 0.0, 0x1.7521fb6fd7c96p-230, 0x1.f8247ccee6e4fp-572,
     0.0, 0.0, 0x1.510ef7d1fddaep-817, 0x1.796c31719635ep-608, 0x1.bf9abac110a0ep-484,
     0x1.44fed11388f5cp-564, 0x1.c8249751f3214p-309, 0x1.4fa436923eb5bp-21,
     0x1.3cfc06667d42p-671, 0x1.2012819963ab1p-585, 0x1.bd2d4fb1bfb89p-737, 0.0, 0.0,
     0x1.d5f42b6d4a0c3p-830, 0.0, 0x1.7bfcac34cf6ecp-452, 0x1.1440900ec6e7dp-641, 0.0,
     0.0, 0.0, 0.0, 0x1.9bc294e3376ap-790, 0.0, 0.0, 0.0, 0.0, 0x1.1e4598f65ff63p-571,
     0x1.44e9855b6a964p-810, 0.0, 0.0, 0x1.45c9d8b84d4p-811, 0.0,
     0x1.d22e1ff70a8ecp-214, 0.0, 0x1.ca35686536f7p-268, 0.0, 0x1.f36e77aa1087p-618,
     0.0, 0x1.2b96be1fff2aap-31, 0.0, 0x1p0, 0x1.1b483f9ef93d3p-968,
     0x1.06966ffe4833p-710, 0x1.c788c2213985dp-6, 0x1.22b0fff815daap-86,
     0x1.1d8aa412c0162p-745, 0.0, 0.0, 0.0, 0x1.3abac3a2db3d3p-183, 0.0,
     0x1.107b951a15cedp-276, 0x1.a5e9006469981p-551, 0.0, 0x1.8093f6ea3f45p-781,
     0x1.f7af761b0da42p-526, 0x1.11f8dccca7c38p-318, 0x1.a15b6430f3da8p-889, 0.0,
     0x1.e9b3237e8bd22p-89, 0.0, 0.0, 0x1.2e1338bf4c3c5p-580, 0x1.0721cf3408287p-483,
     0.0, 0.0, 0x1.0362f4ff1de4ap-867, 0.0, 0.0, 0.0, 0x1.f2f1b2f8ff9a1p-462,
     0x1.3045f324bb205p-80, 0x1.4c539e62d0e76p-169, 0x1.155db8b67a939p-468,
     0x1.89a3ce61400f3p-283, 0.0, 0x1.fe11c215c02c6p-974, 0x1.7be4863d87395p-4,
     0x1.de81241a18f2dp-230, 0x1.8963cadd2e85bp-195, 0.0, 0.0, 0x1.47b9b8d111c8ap-186,
     0x1.ecd79b60db5eap-896, 0x1.a43dd2247eb24p-952, 0.0, 0x1.95c5b5fbee8e9p-280, 0.0,
     0x1.047bdcfe17685p-195, 0.0, 0x1.182fed67d46cp-585, 0.0, 0.0, 0.0, 0.0,
     0x1.b0a4bf8441d28p-202, 0.0, 0.0, 0x1.8ea54764d6109p-863, 0x1.62e45bc1f6e62p-815,
     0x1.ed8a54812b63ep-529, 0.0, 0.0, 0.0, 0x1.e0909175fc083p-900,
     0x1.1016e7d115341p-542, 0.0, 0x1.55c1618743ef6p-924, 0x1.4eb667e8a7753p-534,
     0x1.814a96324591p-869, 0x1.00a429d100c25p-907, 0x1.63e77abce9aa6p-858, 0.0, 0.0,
     0x1.ebb589080a064p-588, 0.0, 0x1.78b92d2ab4d5cp-329, 0.0, 0x1.794262fc763cbp-111,
     0x1.3caed10191f29p-652, 0x1.d1ea8d33c190ap-784, 0.0, 0x1.3d5167472e996p-1007,
     0.0, 0x1.ab0cfb71f078bp-435, 0.0, 0x1.51f1f9917c19bp-629, 0.0,
     0x1.55007f781cf57p-527, 0x1.f334a228c45eep-743, 0x1.12f784d7e32b7p-894, 0.0,
     0x1.036b6a8db3b2fp-277, 0x1.36e73413ecaf3p-33, 0.0, 0.0, 0x1.2652f28c635bp-122,
     0.0, 0x1.235639a619f17p-771, 0.0, 0x1.bfaff34a17ec2p-762, 0.0, 0.0,
     0x1.506d93e5a3117p-156, 0.0, 0.0, 0x1.a994938cff0d1p-796, 0.0, 0.0,
     0x1.bc19e65e82a51p-786, 0.0, 0x1.73d0a1bbbda86p-410, 0x1.5b64558a340bdp-7, 0.0,
     0.0, 0x1.853ab38d3f5c7p-838, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4bec2cbcd723p-223, 0x1.f4178e0d0fb18p-88, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.81cc9e06b023dp-412, 0.0, 0.0, 0x1.cbe214fcea7d6p-228, 0x1.4acfaa3b7d393p-598,
     0x1.8b9277488e4bp-38, 0x1.1a31e4b1624ecp-583, 0x1.9a385ef9d5ccap-661,
     0x1.4d31a82db8895p-552, 0x1.54647f9289045p-178, 0.0, 0.0, 0.0,
     0x1.68f67af5a49b7p-997, 0.0, 0.0, 0.0, 0.0, 0x1.79d3024f4ad77p-764,
     0x1.708739f8b44ebp-33, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba47a82d37375p-794,
     0x1.c113683949ef3p-962, 0x1.241ff48d7e9e8p-699, 0.0, 0.0, 0x1.aad4dcfc8b7c6p-270,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a4d0981c84p-625, 0x1.272c18809a24ap-609,
     0x1.f56de1d6ad3fcp-519, 0x1.8977d4a5ed276p-940, 0.0, 0x1.322a271224c2ep-454, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec1cd9af254e3p-402, 0.0,
     0x1.4ce4b63e9d149p-544, 0.0, 0x1.5388fb6ff3d56p-120, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3ea739533f027p-426, 0x1.fe08cdd3efc55p-41, 0x1.a6a9c41d0eae3p-196,
     0x1.e745a9a39101bp-881, 0.0, 0.0, 0.0, 0.0, 0x1.1fe84465eeec6p-359,
     0x1.6c0669d1c939bp-866, 0x1.45611b0155f9bp-366, 0x1.28e696bb5d0f6p-506, 0.0, 0.0,
     0.0, 0x1.03fbc160512d7p-213, 0.0, 0.0, 0x1.18926dd1eb633p-579, 0.0, 0.0,
     0x1.83cfd6950683cp-866, 0x1.a75047b636d5dp-67, 0x1.5abf560ff56f5p-712,
     0x1.a8c4932fa6933p-770, 0.0, 0.0, 0x1.7cdd3f4c4f72fp-46, 0x1.a34e4c48c61fap-808,
     0x1.dd602224d3001p-716, 0.0, 0x1.78708c8fe523dp-328, 0.0, 0x1.4e8929af9d615p-766,
     0.0, 0x1.38ead2b049f6fp-98, 0.0, 0x1.f73035caa3b28p-372, 0.0,
     0x1.cd53816d92753p-936, 0.0, 0.0, 0.0, 0x1.f97f4ae49fe94p-742,
     0x1.e413d168d9befp-954, 0.0, 0.0, 0.0, 0x1.69c4bcafa02e2p-703,
     0x1.d52428c5658f6p-901, 0x1.e027d643ae493p-209, 0.0, 0x1.c349eab161659p-77, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.04df77e60da31p-559, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2668f6904544dp-241, 0.0, 0x1.f45625f64134ap-711, 0.0, 0.0, 0.0,
     0x1.119eae14a0216p-544, 0.0, 0x1.4e950c982f5a7p-756, 0.0, 0x1.48803bc4abbbp-116,
     0x1.9aa04a8ad4e1bp-983, 0x1.a686fe3b61ec3p-875, 0.0, 0x1.81b88c6a1fc1ep-652,
     0x1.eb322df646901p-588, 0.0, 0.0, 0x1.a98b0595ca452p-55, 0.0, 0.0, 0.0,
     0x1.cdad96ebfcd3cp-516, 0.0, 0.0, 0x1.574aa64eae9e4p-765, 0.0, 0.0,
     0x1.6290bb3374408p-83, 0.0, 0x1.f8d0b2453b57p-755, 0.0, 0x1.9daa10f5d73dep-442,
     0.0, 0.0, 0.0, 0x1.0babf87c16bb5p-826, 0.0, 0.0, 0x1.b745fb1b171b9p-999,
     0x1.4f320698a8d4p-676, 0.0, 0x1.b467a01e5db77p-85, 0x1.5b4437326e883p-329, 0.0,
     0.0, 0x1.39fc843fb8f5dp-930, 0.0, 0.0, 0.0, 0x1.7daaa3abdc56cp-971,
     0x1.31dbd86aaea92p-213, 0x1.fc3b90f9d0e47p-184, 0.0, 0x1.d5f9d4457ad63p-724,
     0x1.163de74b303cdp-480, 0.0, 0.0, 0x1.ad707286739dcp-413, 0x1.5fcd600a3dd19p-515,
     0.0, 0x1.2be38cd4cd41p-484, 0x1.b71ed369349a8p-286, 0.0, 0x1.d8314dd9f826dp-517,
     0.0, 0.0, 0x1.f98c334b2dd1dp-918, 0.0, 0x1.f079ae4eb8e8cp-243,
     0x1.eebe388a609b5p-959, 0.0, 0.0, 0.0, 0.0, 0x1.02a8cbd39c442p-565, 0.0, 0.0,
     0x1.8d976d306e17fp-695, 0.0, 0.0, 0x1.724f5153dd86ap-244, 0x1.78008546d984ap-67,
     0x1.4ec7661ab9ed8p-870, 0x1.93c8b1f34e0c4p-447, 0.0, 0.0, 0x1.150441eb202b5p-676,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a61a7449d60fbp-421, 0x1.d7603692b86dcp-147,
     0x1.b97e4537f9c67p-604, 0.0, 0.0, 0x1.685ed3e58201p-1007, 0x1.6e93b5a3a29a9p-774,
     0x1.565b69da4b031p-465, 0.0, 0x1.a41ca5bdb050bp-70, 0x1.f2fa2cc91d4fp-686,
     0x1.c8a49ecee2824p-212, 0.0, 0x1.eebe66e9460b9p-796, 0.0, 0x1.cfd5772e48ab9p-294,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fcabc278a0db9p-152, 0x1.1d53305e91172p-712,
     0x1.12e80a0634da8p-229, 0x1.6869358569822p-800, 0.0, 0x1.450bc8bee1bc7p-326,
     0x1.c1d6e268a9128p-770, 0x1.c3d95334e1daep-295, 0.0, 0x1.e66f83ed7c0cbp-772,
     0x1.5c950bcdbbfebp-701, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.119959d0a5961p-366, 0.0, 0x1.630bccd059c2p-38, 0x1.67e5bfb3ded64p-661, 0.0,
     0x1.302eeb2b5ff6dp-836, 0x1.8af940f9bd0acp-636, 0.0, 0x1.7189fe0400dddp-161, 0.0,
     0.0, 0x1.5c4d63533f438p-453, 0.0, 0x1.f24b0efc40c77p-698, 0x1.82dfc3984a04p-309,
     0.0, 0.0, 0x1.ae8e41b9c16b6p-700, 0.0, 0x1.d864bc9d7314ap-66, 0.0,
     0x1.011e3638ca228p-356, 0x1.74298dec53471p-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8dd406445021dp-687, 0.0, 0.0, 0x1.de0be30ee8ff6p-698, 0x1.70e13128a2333p-959,
     0x1.30dfcd43d823ap-839, 0.0, 0x1.f70b89ee3bb5fp-490, 0.0, 0x1.c061b7ba31105p-942,
     0.0, 0.0, 0x1.83fef2a116e7ep-276, 0.0, 0x1.b76e697e89faep-505, 0.0, 0.0, 0.0,
     0x1.b15a8771df551p-204, 0x1.bc96570b9650ap-485, 0x1.838b27d6eb8e2p-637,
     0x1.d6fb504b0d71ep-480, 0x1.1c54f5ea1e4f5p-641, 0x1.34565bf290c0ap-784,
     0x1.5097ab10e5dd8p-284, 0x1.4339b2e070095p-865, 0.0, 0.0, 0x1.44e7b13023c2bp-960,
     0x1.b964a61591341p-651, 0x1.896f3e218d688p-895, 0x1.6b88316086afbp-341,
     0x1.3bee48fd15fb4p-226, 0x1.66e917c3c7c27p-518, 0x1.332486f755c69p-875,
     0x1.22223a2bb132fp-360, 0x1.794dfcfa7f973p-936, 0.0, 0x1.dcf253ee72df4p-429,
     0x1.df7b608c36853p-304, 0.0, 0.0, 0.0, 0.0, 0x1.cf18c4a35e545p-706,
     0x1.0aa560dcdb06bp-991, 0x1.be7c85babbc62p-31, 0.0, 0x1.00e2d6e55b322p-414, 0.0,
     0.0, 0x1.b4cd2f516a56p-175, 0x1.6061845ad32edp-713, 0x1.6a3cfb83c91dep-347, 0.0,
     0x1.4003fa075c636p-585, 0.0, 0x1.7102bb0481e93p-824, 0x1.1c6638538955dp-71,
     0x1.6e2c43a476da2p-209, 0x1.9bbbfef643b4ap-905, 0.0, 0.0, 0x1.407e8f5c9939fp-213,
     0.0, 0.0, 0x1.f835932c2235ap-921, 0x1.fd2815638f305p-146, 0x1.280e9262ef048p-307,
     0.0, 0x1.80d5a652491cdp-637, 0x1.08780309e531cp-276, 0.0, 0x1.2a1a143112442p-49,
     0x1.387bddf5b0e7dp-358, 0x1.8657bbd3a3871p-813, 0x1.1440293b60649p-924,
     0x1.fc5b34ac18938p-126, 0x1.10569e5438b97p-590, 0x1.01db3bd9cb54p-269,
     0x1.0aa4063aff5d6p-666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0daaa9d580305p-876, 0.0, 0.0, 0.0, 0.0, 0x1.32884f3862bffp-97,
     0x1.82ff5b61ad779p-652, 0x1.c9cde463d79dcp-576, 0x1.0b1704dc383d5p-447,
     0x1.d53ac4433f13dp-975, 0.0, 0x1.398cfdcd0a777p-866, 0.0, 0x1.1e8f4612e5a81p-350,
     0x1.14a44963b131p-970, 0x1.72d235a16c81dp-711, 0.0, 0.0, 0.0, 0.0,
     0x1.2fc4591ac2e77p-409, 0x1.4272b2d90c3a9p-451, 0.0, 0x1.6cb6db1b5f145p-143, 0.0,
     0x1.b9cbe48f9f62ap-159, 0x1.ca285fe96e674p-425, 0.0, 0.0, 0x1.5d88be49199c2p-681,
     0.0, 0x1.5bf60ad46083ep-205, 0x1.96f4f0533bbe7p-633, 0.0, 0.0,
     0x1.2de7d9abc9573p-125, 0x1.f7658d75c3c2p-470, 0.0, 0.0, 0.0, 0.0,
     0x1.86fe38ef415dfp-894, 0x1.a31d274f46e28p-240, 0x1.4d3b76c2d0701p-264,
     0x1.6491f9252d84p-326, 0x1.f7b829f17da22p-724, 0x1.e063ec4317005p-712,
     0x1.cc827f53681c4p-571, 0x1.da81953e13f6ep-191, 0.0, 0x1.f1a162d01ba1dp-712,
     0x1.ec90dceb72ed5p-248, 0x1.b90e189d6f8e2p-173, 0x1.bac46c2bb798bp-352, 0.0,
     0x1.95c1213b23a7cp-632, 0.0, 0x1.68ef6544be92ap-152, 0x1.6f03cceaa3cp-987,
     0x1.8bfdc91b83661p-792, 0x1.a336f99ba51c7p-160, 0x1.c8fabe051b4e1p-69,
     0x1.96b19b10f0cb2p-122, 0x1.ab9d1aebefa9ap-374, 0x1.cd6c4c4467fe1p-881, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.763069494119fp-550, 0x1.bdb625a9427c6p-746,
     0x1.e21e80fe087dep-876, 0.0, 0.0, 0.0, 0x1.b95e0ff89ae1p-822, 0.0, 0.0, 0.0,
     0x1.f28a822a3ca3ep-814, 0x1.aa9347302ea27p-355, 0x1.b29b5a70e2305p-962,
     0x1.c70c9cb4f0653p-782, 0x1.06dead969e803p-763, 0x1.8457ccc76742fp-161, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5703b7f3d1ac3p-977, 0.0, 0.0, 0x1.eebe215124e76p-572, 0.0,
     0x1.d0f30fb791b31p-967, 0x1.5c622709c7de3p-407, 0.0, 0.0, 0x1.812ecb8a6d157p-375,
     0x1.4be28a9161135p-1006, 0x1.c3500599d8a43p-200, 0.0, 0x1.360cdfcfaeb31p-174,
     0.0, 0.0, 0x1.f4b15caa6ac9ep-657, 0.0, 0x1.8d859880aed98p-863,
     0x1.53be8e87e6346p-276, 0.0, 0x1.feddd4a58bc18p-435, 0.0, 0x1.a25aa62d99798p-739,
     0x1.b81debfa309ecp-183, 0.0, 0x1.525b42686a785p-140, 0.0, 0x1.f9689f6763306p-132,
     0.0, 0x1.86ea7164f3863p-935, 0x1.c836d1ff11399p-443, 0.0, 0.0,
     0x1.ffeaf2757074cp-994, 0.0, 0.0, 0x1.2cd17226eaa8ep-37, 0x1.81371bd15c67dp-132,
     0x1.9f732124e9ba5p-996, 0x1.50261660e6be8p-940, 0x1.4a454de31ccdap-72, 0.0, 0.0,
     0.0, 0.0, 0x1.0988655b530ffp-96, 0.0, 0x1.aaafd0790686dp-923,
     0x1.fc5f621778ee7p-182, 0.0, 0.0, 0.0, 0x1.950a9d6276918p-870, 0.0, 0.0,
     0x1.a4437242e9336p-39, 0x1.dd220e35de871p-364, 0x1.024d9f6ada85ap-718,
     0x1.7ac0c84e09501p-890, 0.0, 0.0, 0x1.b27b133df139fp-421, 0.0, 0.0, 0.0, 0.0,
     0x1.1e9f7b12e2eep-795, 0x1.725a1343536fep-778, 0.0, 0.0, 0x1.e6105185d6f66p-714,
     0.0, 0x1.31bc1ad9e99f3p-431, 0x1.1a4487d290ccfp-461, 0.0, 0x1.19bc5fb23d5a2p-778,
     0x1.7fa69779a8f23p-191, 0.0, 0x1.09bf9d426a7e6p-895, 0x1.b8eb2410af1adp-503, 0.0,
     0x1.b59837dfdb4fcp-615, 0.0, 0x1.b12d2db35f09ap-219, 0x1.8e76f7e355228p-226, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7a94ed4e904c2p-513, 0x1.be259a5d8c415p-657, 0.0,
     0x1.a15ca1c3eaa3p-500, 0x1.a1f2874955d9dp-299, 0.0, 0x1.9a1aee0a230ccp-350, 0.0,
     0.0, 0x1.eadc489478dfep-838, 0x1.d6eb18f5e254ap-522, 0.0, 0x1.f4841cad13ecep-123,
     0x1.84bbfb567a808p-315, 0.0, 0.0, 0x1.11c00cb07f669p-1019, 0.0, 0.0, 0.0,
     0x1.15157593f9b8p-1002, 0x1.8fbf7063214c9p-936, 0x1.9c5999ea17b88p-110,
     0x1.d29c3dba0afb3p-367, 0x1.e8ba48880c27bp-838, 0.0, 0.0, 0x1.79a10b08a7525p-231,
     0.0, 0.0, 0.0, 0x1.6ff35d1aea439p-119, 0x1.1830ad1df845ep-377,
     0x1.5c41f445677eep-923, 0x1.2776ae058ef3ep-509, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2ccd693daf786p-654, 0.0, 0x1.fba44723b0cedp-644, 0.0,
     0x1.299387bd91cc1p-433, 0.0, 0x1.6f5587b53088ep-247, 0.0, 0x1.1f8c4b24a1ff9p-440,
     0x1.33d3ceeec512cp-737, 0x1.d36c171658fe6p-661, 0x1.dc427511980fap-559,
     0x1.7dbd188bd5239p-955, 0x1.6cd85ab89e7cp-149, 0.0, 0x1.c52da0c407158p-269,
     0x1.c3c6b5ebb5888p-179, 0x1.bda3c65fc244fp-109, 0x1.b51b2eafb0bp-387,
     0x1.72effb4bdb32cp-451, 0x1.4c4f22ed18d69p-845, 0.0, 0x1.818d01d6d06d1p-889,
     0x1.5af6ed14a9573p-635, 0x1.15e6442e6af84p-654, 0.0, 0.0, 0x1.374e8a7b2fcf1p-935,
     0x1.ae91ba96e0281p-19, 0x1.28798c3f951e4p-820, 0x1.e4afde387bec2p-653,
     0x1.4862a25a8a24fp-204, 0x1.d66e3157f0cbep-73, 0.0, 0x1.ba60bf44d43ddp-666,
     0x1.636ad453bb6bfp-627, 0.0, 0.0, 0x1.09893032ead58p-937, 0x1.bba007a1b9e26p-202,
     0x1.6f21e899c0074p-872, 0x1.9df98cde57614p-471, 0x1.8d3f02878678ep-903, 0.0, 0.0,
     0x1.92eff38fe4208p-356, 0x1.aa9d93191e759p-137, 0.0, 0x1.c9788d4f85f7p-644, 0.0,
     0.0, 0x1.5d86b8730c84ap-541, 0.0, 0.0, 0x1.890ddb5c84db2p-148,
     0x1.eef917683e1ecp-997, 0x1.26c5380dcfd15p-312, 0.0, 0x1.0bc1fd459f43ep-547,
     0x1.84dcec12bf743p-165, 0.0, 0.0, 0x1.c44a3bdfdb011p-881, 0.0, 0.0,
     0x1.e78651da3fffdp-22, 0x1.0a2ad638a82e1p-858, 0x1.0a01e4e6c27fdp-875, 0.0,
     0x1.09f28629ccep-646, 0x1.ad6aa8d2b4b51p-991, 0x1.daa2661eecc81p-210, 0.0, 0.0,
     0x1.359f026dd68e5p-222, 0x1.55138ee7e0b38p-40, 0.0, 0.0, 0x1.5a09ac7fbbcbap-7,
     0x1.43e0ff1a5c537p-197, 0.0, 0.0, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_ilogbd2_kvx(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    printf("Sleef_finz_ilogbd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_ilogbd2_kvx bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
