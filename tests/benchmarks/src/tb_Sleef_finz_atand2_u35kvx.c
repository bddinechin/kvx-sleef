/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand2_u35kvx.c --function \
 *     Sleef_finz_atand2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.ca9b7e112d2ebp-906, 0x1.2a3a2934c6156p-257, 0x1.5c5f561a540fep-346,
     0.0, 0x1.a947bddae87fap-448, 0x1.54dd152c222b6p-81, 0.0, 0.0,
     0x1.8e24ea7b18edcp-20, 0x1.c7bf5b23a70b7p-909, 0x1.4e88565395fe1p-266, 0.0,
     0x1.6f00aed30b59fp-937, 0.0, 0.0, 0.0, 0x1.f8742e74d947ap-339, 0.0, 0.0, 0.0,
     0x1.47facc8e436dbp-526, 0x1.4d10229dea95ap-669, 0.0, 0x1.391e9470dadd9p-316,
     0x1.e290f0bd68234p-49, 0x1.07878f5a6075dp-504, 0.0, 0x1.0c13895d09385p-906,
     0x1.bbb2b6b51d09dp-936, 0x1.c49b6e1cbc67dp-220, 0.0, 0.0, 0.0, 0.0,
     0x1.3b3ca107d1326p-673, 0x1.4421045a5a379p-109, 0.0, 0x1.b8ec42927f3aep-408,
     0x1.eeb759ba9dadbp-711, 0x1.0e78d5268dffp-744, 0x1.00c182cd46d44p-667, 0.0, 0.0,
     0x1.eb89af438bc19p-469, 0x1.1644d6917439cp-646, 0.0, 0.0, 0x1.b897fc9062782p-847,
     0x1.cad094ee4b48bp-827, 0.0, 0.0, 0x1.85aeda9e76df3p-827, 0.0, 0.0,
     0x1.ff2a65d6d4d57p-811, 0x1.268fa165c54ap-443, 0x1.b967a6359607bp-262, 0.0,
     0x1.4fd8d980cdc5bp-180, 0.0, 0.0, 0x1.5480549693808p-341, 0x1.6180683f73bd5p-196,
     0x1.9fcc2a2564a23p-674, 0x1.95db8a6cf1c2cp-724, 0x1.01e9ca914ef48p-968,
     0x1.eb66d7066ff6cp-314, 0.0, 0.0, 0x1.288ee3f0027b5p-393, 0x1.8f56cccf514d1p-810,
     0x1.840ef0521f0d3p-59, 0x1.bcba80e50087fp-341, 0.0, 0x1.61c4c433ea342p-815,
     0x1.8fb1ded5bbd86p-810, 0.0, 0.0, 0x1.60daa51f1768dp-447, 0x1.3760902bb13f8p-751,
     0x1.84d16c4056556p-561, 0x1.9d813192fa98ap-715, 0x1.66201ddb5ae59p-84,
     0x1.eb63cf48c812dp-545, 0x1.d5a0b45db1ebbp-207, 0x1.8724be7ece7ddp-420, 0.0,
     0x1.167ee43fc4411p-628, 0x1.f4be607772a57p-524, 0x1.f3a52759f5b9ep-927, 0.0,
     0x1.66636894d13efp-483, 0x1.22858708a8981p-457, 0x1.b3a7a67b166ap-846,
     0x1.aeb8b8c6fbb62p-968, 0x1.0bd9e7074e06ep-343, 0x1.de7f3dc3d0a48p-49,
     0x1.586d89447fbcep-295, 0x1.c65d9277893fep-977, 0x1.a341e4297861bp-211,
     0x1.a7c840d10ac87p-98, 0.0, 0.0, 0x1.d7d4c89e13dd6p-372, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.92515fc5be7dcp-208, 0x1.8e3cb8371ab2bp-90, 0.0, 0x1.e79e86ae6c04ap-177, 0.0,
     0.0, 0.0, 0x1.894595468f6aap-793, 0x1.e9137fccf276p-355, 0x1.a82dce1038535p-649,
     0x1.306f1a3c12124p-186, 0.0, 0x1.c3968310b2a92p-131, 0.0, 0x1.2cb1aabc7ae4fp-357,
     0x1.65c7384706eedp-892, 0x1.6d89aba69b884p-865, 0.0, 0x1.dc915ec0427d2p-868, 0.0,
     0.0, 0x1.b9515411a03f3p-239, 0x1.e6f81de837097p-297, 0x1.c66eec0329f51p-892, 0.0,
     0.0, 0x1.1bba1c11c617bp-998, 0.0, 0x1.8bb8d8ba6c04cp-111, 0x1.3893cde3c7575p-334,
     0x1.29a53b7dba3ccp-386, 0.0, 0.0, 0x1.f0be79c7e030ep-905, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bd64e18df573fp-187, 0x1.3e783fe6acfcbp-540, 0.0, 0x1.0b89e47fc6174p-769,
     0.0, 0.0, 0.0, 0.0, 0x1.61991a946f9e7p-811, 0x1.2e99aa56c4862p-112,
     0x1.cc7c5f9c0080ep-934, 0.0, 0x1.9119f8f658591p-572, 0.0, 0x1.65463465243fdp-54,
     0x1.be9548d083b12p-677, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e94cbb379693p-21, 0.0,
     0.0, 0x1.93db34c134531p-702, 0.0, 0x1.66ff3b2882d18p-641, 0x1.650780ddc8c4p-78,
     0x1.ca223210abb77p-737, 0.0, 0.0, 0x1.24b8e6e7855fdp-510, 0x1.9fd36be42232fp-248,
     0.0, 0.0, 0.0, 0.0, 0x1.a59593989eb46p-708, 0x1.c499a73217039p-519, 0.0,
     0x1.e8812c38f1578p-301, 0x1.d40e39d68d9cdp-430, 0x1.6dbcd64c3ef12p-579, 0.0, 0.0,
     0x1.394c9fb0d0f58p-887, 0.0, 0x1.077b81ae63d2ep-959, 0.0, 0.0, 0.0,
     0x1.4b20146d33521p-956, 0x1.5f3ec783478efp-89, 0x1.937f3e89fd996p-144, 0.0, 0.0,
     0.0, 0x1.2826432ca2601p-485, 0x1.4c8484c792621p-489, 0.0, 0x1.52c08d5d30749p-212,
     0.0, 0x1.0d4b128d08436p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.563dce3c84e99p-950,
     0x1.97f2785cf6cdp-888, 0x1.33508ed1833dfp-16, 0.0, 0x1.2c69e06147f0ap-626,
     0x1.2e998b73ae2fcp-329, 0.0, 0x1.7ae6ae649583dp-957, 0.0, 0.0, 0.0, 0.0,
     0x1.e45bf9516a88cp-719, 0x1.8eeddb1163f55p-961, 0.0, 0x1.5cb8d26d82dfdp-6,
     0x1.dcfbbb580353fp-917, 0x1.21f91b3bd049bp-567, 0.0, 0x1.b1dd4a3e98b34p-921,
     0x1.4f99959d7d064p-63, 0.0, 0x1.c4369ebd3dc73p-381, 0.0, 0.0, 0.0, 0.0,
     0x1.4b00b9a1b34bcp-669, 0.0, 0x1.42f724cce46e1p-506, 0x1.6022c6d94b7acp-824, 0.0,
     0.0, 0x1.dc8d9a9313b24p-704, 0.0, 0x1.79a192e8e2e44p-891, 0x1.6ed4d963b8c5fp-629,
     0.0, 0x1.791c99a88da11p-811, 0x1.8ca5aa4751726p-283, 0x1.55e5ae4d70336p-824, 0.0,
     0.0, 0.0, 0x1.1ef04b7827cp-235, 0.0, 0.0, 0x1.a26abf1ec4bacp-149, 0.0,
     0x1.d8a956f0ddb15p-173, 0x1.fd29dbebef125p-837, 0x1.afe393afffe7cp-653, 0.0,
     0x1.61f8c77c5a9f4p-232, 0.0, 0.0, 0.0, 0x1.70d130eff5fbdp-53,
     0x1.48ca84b189ca3p-736, 0x1.d42db1e0824ecp-126, 0x1.bf36eb838fa36p-164, 0.0, 0.0,
     0.0, 0x1.7aa50caaca029p-826, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9f237dadc675p-369,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.687f3a2f17d23p-296,
     0x1.64013e295a0c8p-58, 0.0, 0.0, 0.0, 0x1.05dab66cb538p-538, 0.0,
     0x1.87ba11c91746ep-283, 0.0, 0x1.cc3cd50a4ec92p-929, 0.0, 0x1.6be0b426ddf87p-36,
     0.0, 0x1.40ec8dc492c2p-544, 0.0, 0x1.d8b048528657bp-262, 0x1.9787fa59dde81p-883,
     0.0, 0.0, 0.0, 0.0, 0x1.1c0e32d749537p-936, 0.0, 0.0, 0.0, 0.0,
     0x1.279e62442b049p-297, 0.0, 0x1.17e354ce739eep-752, 0x1.a2e8a0c78c4c5p-939, 0.0,
     0x1.f70d3d419b1afp-849, 0.0, 0x1.6026d3e4e7e34p-505, 0.0, 0x1.492ac5b4cf38ap-501,
     0x1.64ce20a8b30cdp-784, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a316fd7f62a4p-496, 0.0,
     0x1.0ddc7f7f0e714p-346, 0x1.e748f96cac58dp-198, 0x1.8f6185fdeae9ap-834,
     0x1.fa1e627f76212p-836, 0x1.c9fdf3d440429p-180, 0.0, 0.0, 0.0, 0.0,
     0x1.eb618bf23bf87p-117, 0x1.1401b0ef1b1bap-932, 0.0, 0x1.9e9e9ad5ffa23p-268,
     0x1.9511a0b9cf3b3p-541, 0x1.407dbd6ce5bf9p-838, 0.0, 0.0, 0.0, 0.0,
     0x1.2e305fe1fa7cep-307, 0.0, 0.0, 0.0, 0x1.c5b070123e355p-749, 0.0,
     0x1.853136e7efe57p-115, 0.0, 0.0, 0x1.7b6b211b64662p-57, 0.0, 0.0,
     0x1.5edfca7c6798dp-1003, 0.0, 0.0, 0.0, 0.0, 0x1.1fb4cf7a3eae8p-850, 0.0,
     0x1.d2198f1a549f7p-723, 0.0, 0.0, 0.0, 0x1.29179f0941656p-808, 0.0, 0.0,
     0x1.086bfd770656bp-292, 0x1.da6fd26918a4fp-866, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ef976895dec9p-866, 0x1.205c0b4fffa9cp-944, 0x1.16f239da93ed7p-553,
     0x1.0b46eb999ecf5p-103, 0.0, 0x1.bef77b1d35542p-650, 0x1.9a8bc7e1babaap-11,
     0x1.faf5fa7697294p-736, 0x1.a69f0fcce8f12p-875, 0.0, 0.0, 0.0,
     0x1.6e311d7ee0eb6p-730, 0.0, 0x1.8c6f2808d9a57p-404, 0x1.d63b626b41b49p-217,
     0x1.740f5c4a8fe15p-757, 0.0, 0x1.39b09e87c4efep-464, 0x1.7e97fca1e5893p-731,
     0x1.2c4b330b43503p-888, 0x1.f846132a825afp-971, 0.0, 0.0, 0.0, 0.0,
     0x1.c320e262a8e11p-226, 0x1.819a341453e5ap-714, 0x1.0245eefd32b8cp-275,
     0x1.ffe37eb8367abp-227, 0x1.06e60c2c5ea15p-1016, 0x1.ab2a668f1c489p-380,
     0x1.54278c67d877fp-305, 0.0, 0.0, 0.0, 0x1.9b80185927765p-285,
     0x1.81da652a115dap-373, 0x1.be7b05e8de355p-843, 0x1.a3984db928c63p-785, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2445bc529868dp-779, 0x1.7a6445b9e4995p-560,
     0x1.1f67f6f4258a1p-968, 0x1.03a5e4cf8dfdfp-532, 0x1.878f42e0205b8p-355,
     0x1.32cd764367c73p-689, 0.0, 0.0, 0x1.00e6a39122303p-385, 0.0,
     0x1.17a93b032c51ap-139, 0.0, 0x1.e7e91d6291b94p-522, 0.0, 0.0,
     0x1.c88ced2c0211p-925, 0.0, 0x1.faab284d06136p-462, 0.0, 0x1.27ed6e125454dp-810,
     0x1.e95f1a1b7579cp-246, 0.0, 0x1.5496c07f6c1d4p-261, 0x1.f22f09931e106p-294, 0.0,
     0x1.d3cf7aa6794d4p-135, 0.0, 0x1.6f07b8f498b3ep-290, 0x1.ffd5ad5bd4fd1p-1016,
     0.0, 0x1.4c2de3d8ae8b1p-866, 0x1.98d002b1dc799p-815, 0x1.e9f2070fa121p-304, 0.0,
     0x1.09f9e8a222eb8p-898, 0.0, 0x1.3a2008a106d5cp-808, 0x1.3af0b23a2dcd7p-417, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2355d82ddef09p-63,
     0x1.dec9a5dfb10b3p-344, 0x1.0b613f010f67dp-281, 0.0, 0x1.304514541168ep-798,
     0x1.eb8853eb47df4p-802, 0.0, 0x1.a55be524069e9p-357, 0.0, 0x1.24feb2bdb3ae5p-218,
     0.0, 0.0, 0x1.84707dfba3c94p-54, 0.0, 0x1.bb364106700f8p-930, 0.0,
     0x1.cc3556dee87a8p-982, 0.0, 0.0, 0.0, 0.0, 0x1.53e61a4304fc5p-579, 0.0,
     0x1.7c06adf9265adp-706, 0x1.8fadec05f298ep-655, 0.0, 0.0, 0x1.b4213ab01d726p-938,
     0x1.bc44e919c2009p-839, 0x1.c912f50cedf93p-650, 0.0, 0x1.e4dab4d501a82p-450, 0.0,
     0x1.fdc139c680f96p-174, 0x1.50cbcf958fe64p-915, 0.0, 0x1.222a31855b4abp-955, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f46c91c3c25b2p-913, 0.0, 0.0, 0.0,
     0x1.12019a3534fe6p-546, 0.0, 0x1.29dd9e624f162p-88, 0x1.8eed8ddf563b5p-938,
     0x1.fdf6154b957a6p-677, 0x1.30884c9127929p-1017, 0.0, 0.0,
     0x1.eabd1c3cc9378p-808, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a821ed8122532p-783,
     0x1.3af6ddc7dae67p-533, 0.0, 0x1.8ebba293322dfp-217, 0x1.204759be44767p-142, 0.0,
     0x1.42d19ede0bdbfp-415, 0x1.f915f0d0ef16cp-114, 0x1.6990de7275f8dp-959,
     0x1.103bb07d33676p-994, 0x1.a4567a1509897p-528, 0x1.e450dd3afc91dp-33,
     0x1.f9d30424848c6p-3, 0x1.1bc421eb066c2p-328, 0.0, 0.0, 0x1.c89c8502822cap-340,
     0x1.6d3d9c8686fffp-215, 0x1.8bbb0030f2896p-994, 0.0, 0.0, 0.0,
     0x1.20a84a54ffddfp-835, 0x1.1d9084a2baaaap-147, 0.0, 0x1.15ee700fccbdbp-825,
     0x1.3be34e5b876d2p-639, 0.0, 0.0, 0x1.307e1e12a8c1dp-430, 0.0, 0.0,
     0x1.c292b305c292fp-900, 0x1.f2269995c91afp-369, 0x1.d5f031ef993ep-1, 0.0,
     0x1.9a52f97ff480bp-985, 0x1.be3a5799be313p-764, 0.0, 0x1.25a1852cfd408p-456,
     0x1.5589a488d4154p-634, 0x1.8dd38e88b9292p-637, 0.0, 0x1.9a6fc0d08f482p-204, 0.0,
     0.0, 0x1.75abdc2041f8dp-641, 0x1.bd7a43af392ep-143, 0.0, 0x1.1f6cbf6c8a2e6p-821,
     0.0, 0x1.84c8b3727b698p-785, 0.0, 0.0, 0.0, 0x1.a67f37325c1dfp-411,
     0x1.a41d14eec6409p-922, 0x1.19e7361c293ccp-40, 0x1.21e1d40d7840bp-105,
     0x1.6537fe23160b7p-353, 0x1.31c1098f1df8ep-815, 0x1.9eb4372b650a9p-948, 0.0,
     0x1.d14e2ea4b9f1bp-724, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62dfea34004bcp-792, 0.0,
     0x1.d110ca7beec76p-802, 0.0, 0x1.1c1b93694b2bap-20, 0.0, 0x1.464d884ded099p-110,
     0x1.fab73c886adf3p-206, 0x1.ec73c228d2fb4p-940, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5ee2be037fd7bp-662, 0x1.25db6cba42d88p-404, 0x1.4f0c0bf63852fp-781, 0.0, 0.0,
     0x1.42b9d1af5ddep-923, 0.0, 0x1.1cd8b5704a916p-84, 0.0, 0.0, 0.0,
     0x1.4f58524fd9156p-752, 0.0, 0.0, 0.0, 0x1.a10e50a319494p-31,
     0x1.851dfb91c253p-899, 0x1.7fc43a0cbf6fdp-173, 0x1.bad338b2a729cp-993, 0.0,
     0x1.b90127591a21cp-410, 0.0, 0.0, 0.0, 0.0, 0x1.e3d91ee59c808p-527,
     0x1.7319687dc8301p-104, 0.0, 0x1.6c2b5db13f9d8p-415, 0.0, 0.0,
     0x1.d259e165bf1e9p-520, 0.0, 0x1.62d959194fa0fp-305, 0.0, 0x1.ee0167a9b6857p-932,
     0x1.412f944a59bb2p-314, 0x1.ddacc5e090dcp-189, 0.0, 0x1.8afa292cc8419p-353,
     0x1.7fe5f08739f17p-639, 0x1.902224ede85cap-233, 0.0, 0x1.10e6e2ef0550bp-282, 0.0,
     0x1.5f1215544e315p-571, 0.0, 0.0, 0x1.edbe292a4910ep-536, 0.0,
     0x1.4ba8f1ca86354p-781, 0x1.ee55d0fc51b1bp-19, 0.0, 0x1.674b03917f95ep-614, 0.0,
     0.0, 0x1.15119c906b2bcp-750, 0.0, 0.0, 0x1.4ed6f1644f146p-12,
     0x1.238babfefc1f8p-992, 0.0, 0x1.f5281467a49b3p-948, 0x1.fe28f133ede63p-320,
     0x1.da1ea4ded31c7p-840, 0x1.2c0dacde858c2p-884, 0.0, 0x1.c3aa90e50e9p-426, 0.0,
     0.0, 0x1.0524206482fc6p-874, 0.0, 0.0, 0.0, 0.0, 0x1.116eab35e336cp-248, 0.0,
     0x1.620d5352913a8p-964, 0x1.8c002f52840f5p-218, 0.0, 0.0, 0x1.f3edd9dfd0e48p-814,
     0x1.6342260bf2a13p-731, 0.0, 0x1.d142955ad7da6p-970, 0x1.ad02008839fc7p-51, 0.0,
     0.0, 0.0, 0x1.90e7d8a187565p-1017, 0.0, 0x1.e056405c253adp-476, 0.0, 0.0,
     0x1.33b74706acfeep-224, 0.0, 0.0, 0.0, 0x1.5a4dd99b1f416p-503, 0.0,
     0x1.fcc3c3a892724p-802, 0.0, 0.0, 0.0, 0x1.922855886f468p-905,
     0x1.f7c43ae0f8b17p-753, 0x1.66cc7464c7f49p-310, 0x1.91555ba990df8p-430,
     0x1.cba5d7fd7ca5bp-793, 0x1.540ec7d29a3cp-469, 0x1.fd3c5f0313986p-227, 0.0, 0.0,
     0.0, 0x1.09dcd3e116a66p-832, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.05ec549a7ab44p-355, 0x1.d0d7070d3c97ep-660, 0x1.37966dfb247fcp-606, 0.0, 0.0,
     0x1.1cb20dd9990f2p-900, 0.0, 0x1.7e6692050bd3dp-403, 0.0, 0.0, 0.0,
     0x1.ca3c3e976ac33p-688, 0x1.5be8f04cec736p-267, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c67bb8785c5a1p-52, 0x1.9388a5140003bp-886,
     0x1.1fd4a40782432p-769, 0.0, 0.0, 0x1.34e24913560abp-293, 0.0, 0.0,
     0x1.3a31686a2a284p-479, 0.0, 0.0, 0x1.f931fca462702p-421, 0x1.c1f348e7fb6e7p-127,
     0.0, 0x1.62ee07e65d9cp-160, 0.0, 0.0, 0x1.511dc6de903c9p-436,
     0x1.7ac49a55f673bp-119, 0x1.cf0a929e31a52p-858, 0.0, 0.0, 0x1.7f78a2bbd68cp-469,
     0.0, 0x1.aac95978ecd1ep-597, 0x1.88affd09351f1p-246, 0.0, 0x1.f198682f44c1p-342,
     0.0, 0x1.c56771bff11f8p-70, 0x1.322e6d03a82f6p-514, 0.0, 0.0,
     0x1.3516ea9b9d736p-191, 0x1.44cb73f770a07p-819, 0x1.396fc59ea22e4p-122,
     0x1.65b75f386c981p-813, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9734e8a49d38cp-284,
     0x1.3f5e1d7448c9ap-674, 0x1.9abb4bd2d837ap-294, 0.0, 0.0, 0.0, 0.0,
     0x1.90dfef31d2657p-477, 0x1.fcbeee296a105p-583, 0.0, 0x1.0f2ff644d3247p-897,
     0x1.619591ed2f535p-774, 0.0, 0.0, 0x1.b2beb720db9bdp-673, 0x1.f5a2949743f8cp-802,
     0.0, 0x1.197cc081b6e45p-689, 0.0, 0x1.51df10a9e5beep-931, 0x1.06497288292dap-47,
     0.0, 0x1.9546904350fb3p-134, 0x1.2cc1b1c48d096p-236, 0.0, 0.0,
     0x1.dcb722e51b1a7p-459, 0x1.46e9a06143ba8p-728, 0x1.3204910155d6dp-279,
     0x1.06c461d1e0631p-448, 0.0, 0x1.4141f033ada8cp-271, 0.0, 0x1.8d60b82b7bb65p-282,
     0x1.2682f5234a9afp-368, 0x1.b6503f3523114p-939, 0.0, 0x1.79a7db63f7cecp-93, 0.0,
     0x1.e9be9844c0a2bp-749, 0.0, 0x1.765db0d10cab1p-162, 0.0, 0.0, 0.0,
     0x1.63a902d4b3a2fp-217, 0.0, 0.0, 0x1.bd2b0749338cbp-1000, 0.0, 0.0,
     0x1.73dd3585dd336p-95, 0.0, 0x1.0220d8fe69023p-821, 0x1.29e8db47ca12cp-562,
     0x1.2fcee7f7efb3bp-209, 0.0, 0x1.0b0f264611c33p-674, 0x1.e7c302d4320dfp-947, 0.0,
     0x1.d9b357b2131b8p-358, 0.0, 0x1.684d48f57e771p-269, 0.0, 0.0, 0.0, 0.0,
     0x1.55d1e2b69dccdp-834, 0.0, 0x1.0f4fd752c9286p-502, 0x1.45da187f8b501p-542,
     0x1.7fc447a9129dcp-40, 0.0, 0x1.55c44b044deb9p-570, 0x1.e6f59536e6856p-247, 0.0,
     0x1.7681c3cfed4f9p-976, 0x1.c46a6c4a9736fp-79, 0x1.1a6f29ccc6e9p-583,
     0x1.328f74c3ff628p-149, 0x1.44b06a7a1748dp-305, 0x1.579a6b8b8c782p-642,
     0x1.22a4200ffb312p-540, 0x1.42906ac4275cep-212, 0.0, 0.0, 0x1.ed5bd65963d6p-595,
     0x1.c812132008009p-667, 0.0, 0.0, 0.0, 0x1.95c69e956ccep-95,
     0x1.aa885002cc01ap-646, 0.0, 0x1.8b0fad9c54ab7p-253, 0x1.52f4f9618fa7p-129,
     0x1.b410d07e5aaa4p-300, 0x1.ac298447a3ddep-539, 0x1.387b95aa10d1cp-944,
     0x1.06a4211e9ee96p-309, 0x1.a17fe9e6b2d5fp-73, 0x1.721fd0b32869ep-507, 0.0,
     0x1.f493662757208p-467, 0x1.c823babdff623p-505, 0.0, 0.0, 0x1.4383956f472edp-974,
     0.0, 0x1.79d19a09225c5p-703, 0x1.bdadb17e70908p-646, 0x1.a3dde697b65dfp-632, 0.0,
     0.0, 0x1.266fe891d07c3p-391, 0.0, 0x1.d4922fc68eb3fp-396, 0.0,
     0x1.b9cbef4e7a3dap-263, 0.0, 0x1.b5f7d3ea54dfp-790, 0.0, 0x1.7299ce666010fp-423,
     0x1.de447493df61cp-15, 0.0, 0x1.7625d9dd2ef7fp-635, 0x1.875c4d8cce37bp-21,
     0x1.b2fa920a4dd84p-356, 0x1.e43abbcde15eap-49, 0.0, 0x1.3a35882bf9935p-1000, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aaddb4904693cp-982, 0.0,
     0x1.5f1fb05811c76p-247, 0.0, 0.0, 0x1.deb03aa4a4198p-980, 0.0,
     0x1.c9868ca12d0e7p-220, 0x1.d6a6d02eea652p-359, 0x1.7fd9c908da7eep-1,
     0x1.56a8bdc8e39a8p-203, 0x1.9df34a06f82dep-385, 0x1.2dbcd032a335ap-34, 0.0, 0.0,
     0.0, 0.0, 0x1.78b28fb9e2823p-739, 0x1.eb8b28eded233p-795, 0.0, 0.0,
     0x1.90e0f6df22522p-186, 0x1.6ef0903abb107p-709, 0x1.df0aacbd4c4fbp-619,
     0x1.63e9cf187ac2cp-936, 0.0, 0x1.2500a6e0024cap-285, 0.0, 0x1.429b66bc2133bp-194,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9125fddab09d6p-994, 0.0, 0.0, 0.0,
     0x1.17e967f4499c7p-611
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
            tmp1 = Sleef_finz_atand2_u35kvx(tmp0);
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
    printf("Sleef_finz_atand2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_atand2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
