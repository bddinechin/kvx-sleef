/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd2_u35avx2128.c --function Sleef_finz_logd2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.2a56457e0c606p-8, 0x1.3bbb04dfa7571p-513, 0.0, 0.0, 0x1.2365ff679457p-372,
     0.0, 0.0, 0x1.ea91709fd004cp-177, 0.0, 0x1.5dbf630539225p-713, 0.0,
     0x1.4fe3e0473a54p-118, 0.0, 0.0, 0x1.ab1463f94b692p-992, 0.0, 0.0,
     0x1.5b341373d6f5fp-934, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5164be9faa06ap-557, 0.0,
     0x1.e2b1b480d3f47p-904, 0x1.5a306d753908ap-551, 0x1.7b0c8cdb8dff9p-475,
     0x1.197e618f404f3p-80, 0x1.1e11697953495p-277, 0.0, 0.0, 0x1.15bfe9d29c2bp-476,
     0x1.fed4b784092b5p-744, 0.0, 0.0, 0.0, 0x1.622bfa0756ff7p-317,
     0x1.c9b037db3fe2cp-661, 0x1.f2e68750dd7e8p-396, 0.0, 0x1.38e18ebc8f466p-672,
     0x1.35ea6c6dc74fcp-480, 0.0, 0x1.073ec22b201ccp-404, 0.0, 0x1.7baf68f8d490cp-339,
     0x1.d9c3a8d1ba50ap-613, 0.0, 0.0, 0x1.62ab50b6a0f54p-361, 0.0, 0.0, 0.0, 0.0,
     0x1.c16e980224c74p-52, 0x1.b39b040668924p-153, 0x1.46d9ec5cbac1fp-121,
     0x1.ab519117c8c54p-73, 0.0, 0x1.681134bf254cap-536, 0.0, 0.0, 0.0,
     0x1.0f0a8b9cbfe2ep-964, 0.0, 0.0, 0.0, 0x1.433ee500e8bd6p-674,
     0x1.20507cb3b1a3dp-316, 0x1.963153d3ac82fp-1004, 0.0, 0.0, 0.0, 0.0,
     0x1.5b9d13b9abf5dp-234, 0.0, 0.0, 0x1.53b501f786f1bp-633, 0.0,
     0x1.14b3859649d6cp-734, 0.0, 0x1.80f329ee193aep-96, 0.0, 0x1.0692844a03f9ep-926,
     0.0, 0.0, 0x1.e5b0e84802dc2p-629, 0x1.32bcd9314b24bp-828, 0x1.c855f68fc09c5p-780,
     0.0, 0x1.a37c7930369bfp-333, 0.0, 0x1.a8b4a3254df9p-271, 0x1.1b68c32a9a3abp-718,
     0x1.c845024ebc9adp-167, 0.0, 0.0, 0.0, 0.0, 0x1.bf01ba803af2fp-99,
     0x1.0de153536bdbbp-966, 0x1.93064be5ef076p-165, 0.0, 0.0, 0.0, 0.0,
     0x1.6c980f7120d17p-120, 0.0, 0.0, 0.0, 0x1.866e9494b7467p-538,
     0x1.a4dea763a6404p-30, 0.0, 0x1.b0608d00995a3p-519, 0x1.b8e961ce2435p-81, 0.0,
     0.0, 0.0, 0x1.320643841bc0cp-214, 0x1.d821c459a815fp-625, 0x1.9eacfe0e86658p-793,
     0.0, 0x1.e748168799735p-655, 0x1.5a282e92db096p-402, 0.0, 0.0,
     0x1.71540c22ea443p-522, 0.0, 0x1.2886d3b875731p-67, 0.0, 0x1.3fa791f3f7p-786,
     0.0, 0.0, 0.0, 0x1.2002c25e0a2f8p-819, 0.0, 0x1.0b8710ae05c66p-37,
     0x1.86a7df5c8a5e5p-726, 0x1.7c997f2ad82d9p-445, 0x1.42f0260fb94ccp-625, 0.0, 0.0,
     0.0, 0x1.3dd5a9ccd291ap-535, 0x1.3975fb988ca5ep-821, 0x1.295e0c2b65657p-855, 0.0,
     0x1.781e879c0c835p-784, 0x1.daf2ab7227dbcp-82, 0x1.8bbb3e43596c1p-273, 0.0,
     0x1.0c8481063e733p-250, 0x1.1d76a073fcb5ap-569, 0x1.ff70dc75cec1ap-766, 0.0,
     0x1.40d3e984b0e7ap-483, 0x1.dd8887046fdacp-30, 0x1.655413ba893c6p-353,
     0x1.d7afcaa79f203p-195, 0x1.63c19b65b83dep-504, 0x1.1b5b1eb9eef4cp-1001,
     0x1.8d2aa00874ff4p-394, 0.0, 0x1.beaf26c3c02ecp-613, 0x1.1751d98b6ccdbp-297,
     0x1.b3c0f9f58297ep-442, 0x1.263bcde80f158p-376, 0x1.74142adc87612p-404, 0.0,
     0x1.c1e0739c709a3p-315, 0x1.554a1652e1e52p-763, 0.0, 0.0, 0x1.feded7330839bp-368,
     0x1.763b9ba3bc056p-842, 0.0, 0.0, 0x1.25e9bdb88a5ebp-747, 0x1.80fdb97a0da25p-224,
     0x1.a61f0ff6f85d4p-772, 0.0, 0.0, 0x1.bc1128f06c62ap-981, 0x1.fba2041207dfp-282,
     0x1.ed8c8b88b1442p-764, 0x1.445d44ca35f18p-774, 0.0, 0x1.5c979e0f314acp-439, 0.0,
     0.0, 0.0, 0x1.fc9b6fc8fcefp-601, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c7caf4a552e84p-866, 0.0, 0x1.7eef808d7a189p-262, 0.0, 0x1.6a8b471aeab68p-418,
     0x1.ca90bc13ad73p-288, 0.0, 0x1.2a85205adf64cp-806, 0x1.e0a994d9c6618p-295, 0.0,
     0x1.3bf27c7bc997p-939, 0x1.69ba9d7160a9dp-937, 0.0, 0x1.564c75d4f57f8p-388, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd3c1e6dee94p-698, 0x1.5799e0292a0ap-15, 0.0,
     0x1.956c47904e4dcp-281, 0.0, 0.0, 0.0, 0x1.23de6b95b629ep-245, 0.0, 0.0, 0.0,
     0x1.6361f7d68e4cap-311, 0.0, 0.0, 0x1.3d68d11048a3ap-756, 0x1.97e98984d2068p-573,
     0.0, 0x1.025c27e4ac1bdp-42, 0x1.f66da1c6ea74ap-976, 0x1.e3fa498ce8ed3p-22, 0.0,
     0.0, 0x1.707297f6f63ffp-275, 0.0, 0.0, 0x1.0d5318d8f93dep-200,
     0x1.ce87d3dd93985p-685, 0.0, 0.0, 0.0, 0x1.97bc906ddef12p-791, 0.0, 0.0, 0.0,
     0x1.924cb575feb7fp-365, 0.0, 0.0, 0.0, 0.0, 0x1.f787704b2f1a6p-364,
     0x1.956661852a3abp-473, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8dfee65e4506p-248, 0.0,
     0x1.b277ff6c4b307p-594, 0.0, 0x1.8d01adc79672ep-552, 0x1.afbdd5b74f144p-286,
     0x1.553c2243f5fa8p-990, 0x1.55bb1a9a8f354p-363, 0x1.be964e311f305p-35,
     0x1.b0c95ea0450fep-430, 0x1.71d51b1475eb6p-50, 0.0, 0.0, 0x1.cc6f72580bf73p-353,
     0.0, 0x1.b8f7504ffe27cp-598, 0.0, 0.0, 0x1.6f41cd82d9515p-68,
     0x1.ab662fe552f72p-471, 0x1.e0501456b80edp-363, 0.0, 0x1.5b66601c28b94p-173, 0.0,
     0.0, 0.0, 0x1.0d4dca1645fa1p-725, 0x1.7fd22e8560fe1p-805, 0x1.524bd9087f837p-308,
     0.0, 0x1.50d2c619e5db1p-102, 0x1.167294ea479eep-988, 0x1.e8ca3f519848ep-928, 0.0,
     0.0, 0.0, 0.0, 0x1.ed4d2b8a78a2p-27, 0x1.9d3b46ac334e1p-607, 0.0,
     0x1.ed2939716cc03p-968, 0.0, 0.0, 0x1.f87293878d9a8p-352, 0.0,
     0x1.99a7834f4ede5p-143, 0.0, 0x1.7005e59beece9p-930, 0x1.020428c8d8402p-1021,
     0x1.e48a8d6deed14p-978, 0.0, 0x1.082b8b5bb86c3p-402, 0x1.e298200b49ccdp-990,
     0x1.78126d3a089c4p-1001, 0.0, 0x1.83dcf0701567p-870, 0x1.7902d3389e1fap-939,
     0x1.fe72acbd317a9p-476, 0.0, 0x1.78cf1eda96d71p-540, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.703c376db91c5p-208, 0x1.6baf1bd50caf9p-33, 0.0, 0x1.6fce89d1c6b2p-957, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6d134d957fecbp-889, 0x1.7a2c9efb82274p-331,
     0x1.44315c085fe9fp-750, 0.0, 0x1.f9d7611776107p-696, 0.0, 0.0,
     0x1.fd6c91db8fd6fp-872, 0.0, 0.0, 0.0, 0.0, 0x1.af1241c71ccd3p-506, 0.0,
     0x1.62ea89ae4c35ap-47, 0x1.d4862005a60a1p-352, 0x1.82d2c6cc97747p-488,
     0x1.0529f1f934a03p-35, 0x1.8c3ae3f85e9a4p-602, 0x1.9408d9022e1eap-977,
     0x1.84c29fb424d17p-935, 0x1.6411aae354cebp-145, 0x1.f9480b7f959a6p-342,
     0x1.4ac651d355279p-425, 0x1.83e17ace92799p-999, 0.0, 0.0, 0x1.9317189655a62p-151,
     0.0, 0x1.ee46bfc26d51cp-618, 0.0, 0x1.dadace1c5852bp-378, 0x1.a71a2a70a7b89p-771,
     0.0, 0.0, 0x1.c87b3eec2dc09p-898, 0x1.d28a03bd6b48ap-981, 0.0,
     0x1.2d09af9f9cbe1p-68, 0.0, 0.0, 0x1.4d073d0e4ed92p-605, 0.0, 0.0,
     0x1.53dee59c93287p-940, 0x1.c102ce2a0f9e8p-494, 0x1.c205f37af9a3ap-260,
     0x1.8a8a9a3c5c475p-569, 0x1.1082a510ac338p-216, 0x1.77043ec235da5p-632,
     0x1.3ddb55750fbbbp-595, 0x1.8a706fa7f34bbp-717, 0.0, 0.0, 0x1.2d4f3a408d4dbp-406,
     0x1.a50ae15b195p-665, 0x1.6a7234c3f2f3cp-248, 0x1.85517414137c6p-561,
     0x1.b442c829c4213p-559, 0x1.0ecf870de9beep-65, 0.0, 0x1.6df5142615023p-792,
     0x1.00c2afd73b5e7p-365, 0.0, 0.0, 0.0, 0x1.f43be922cd926p-969, 0.0,
     0x1.6bbb9624a8ccp-351, 0.0, 0x1.cf513db25baddp-688, 0.0, 0.0,
     0x1.3e07ff3c567efp-322, 0.0, 0x1.0027b87eb1fe5p-485, 0.0, 0x1.8179ce4bf91c5p-992,
     0x1.894862f36f3bep-411, 0x1.4b10cfdceeb2cp-199, 0x1.dc6da020c5b9bp-785,
     0x1.445b62e302b25p-310, 0x1.13371914233dfp-577, 0.0, 0x1.525482783986ap-868, 0.0,
     0x1.cdd4183fe8ef5p-863, 0x1.31f99b6276916p-534, 0x1.1ed27de55e2e1p-111,
     0x1.d5b2045f15c12p-55, 0.0, 0x1.2908f266e8b2cp-542, 0x1.e9907a65d950cp-987,
     0x1.db0d7a26cc1aep-655, 0x1.1500a2ecd8ef2p-713, 0x1.2b5e158d86555p-465,
     0x1.0bb3c331fddafp-28, 0.0, 0x1.0d5b59abec34cp-564, 0x1.906689eb5df66p-299,
     0x1.fe73e5894ee99p-317, 0.0, 0x1.cd35e006708f4p-752, 0.0, 0x1.629fdce8e1fa2p-168,
     0x1.d06aa8eeb3b07p-771, 0.0, 0.0, 0x1.203c63f52b787p-265, 0x1.b95a55856fb0fp-867,
     0x1.53c368b78fcdep-539, 0.0, 0x1.6f5fea698029p-55, 0x1.2d3e88c943d9bp-149, 0.0,
     0x1.6b00cd45c46c4p-455, 0x1.d30b2d494f4bp-143, 0.0, 0.0, 0x1.49ca8b1f4a80fp-557,
     0.0, 0x1.6a1bed29863c7p-403, 0x1.45fab42d944b7p-242, 0x1.b6c934889d59cp-626, 0.0,
     0x1.4f6de92cc4d96p-583, 0x1.67ef6c2a33e95p-167, 0x1.5c40aad4debccp-56, 0.0, 0.0,
     0.0, 0x1.5257a72af7e58p-258, 0x1.63773fc88bec8p-500, 0.0, 0.0, 0.0,
     0x1.96ef798e885f2p-301, 0x1.d7f9bb8eff666p-932, 0.0, 0.0, 0.0,
     0x1.d44ed6b67dd99p-620, 0x1.7f9cd80c9894bp-687, 0.0, 0.0, 0.0,
     0x1.4a5da6d790e8p-312, 0x1.5e189ed3a45bdp-810, 0.0, 0x1.ea83374f640e2p-972,
     0x1.c5b3fd6b3d02ap-974, 0x1.ab1f7ccf868a5p-856, 0.0, 0.0, 0.0,
     0x1.ad11b1e4262c3p-711, 0x1.58aa701a7448ep-745, 0.0, 0.0, 0x1.c359f3a21f467p-912,
     0.0, 0x1.b407e1bf5199fp-1008, 0x1.67382f43bbd7fp-609, 0.0,
     0x1.96414f73bf937p-334, 0.0, 0.0, 0.0, 0x1.8bf9aa8b1df04p-926,
     0x1.5944021dbe58dp-211, 0x1.85ce4cf18a65ep-830, 0.0, 0x1.ce1e1ad602dbdp-985, 0.0,
     0x1.d97fc1c5ab6f2p-165, 0x1.d5fceaeb60284p-373, 0x1.bfd9bcee20efdp-249,
     0x1.a3b7919c90b43p-659, 0x1.619892d45b611p-781, 0.0, 0x1.608e656223b57p-74,
     0x1.9b7a3b50d83d9p-370, 0x1.a960220486c3fp-335, 0x1.19e9eac2a6365p-68,
     0x1.fb648cf50401p-594, 0.0, 0x1.10e4899a33597p-234, 0x1.c6aae26925b49p-630,
     0x1.f4d99cef4cb1bp-209, 0.0, 0.0, 0.0, 0x1.dc4b81e19628bp-153, 0.0,
     0x1.c6bb71795ea4fp-681, 0.0, 0x1.a118c1673a0afp-412, 0.0, 0.0,
     0x1.5fdde64969dbcp-50, 0x1.f65a6883f7723p-69, 0x1.4ff0208e875ffp-851,
     0x1.247312fd9a0efp-373, 0.0, 0x1.9f3a99a8d2faap-42, 0x1.61214329b7d53p-240,
     0x1.daa9099a193ddp-47, 0x1.485edff7de711p-422, 0.0, 0x1.62a4b63aaead7p-473,
     0x1.efc72cbb3b3d9p-885, 0.0, 0.0, 0x1.cee1bb2a17041p-301, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4b6d3603f025dp-779, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8defa2758b7ep-969, 0.0, 0.0, 0x1.d14e0167d7587p-925, 0x1.fb65598161757p-815,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73ce8be52f263p-688, 0x1.2a65fa4d0c08ep-959, 0.0,
     0x1.5175d4e097697p-953, 0x1.c8d8bab813b8cp-994, 0x1.747f25e8ff14cp-364, 0.0, 0.0,
     0.0, 0x1.eee675bcc443dp-260, 0.0, 0.0, 0x1.bc53264195916p-925,
     0x1.b7c732ea61f93p-661, 0.0, 0x1.4a30f34f39acfp-888, 0.0, 0.0,
     0x1.bd5a497741b54p-560, 0.0, 0x1.608a80657c931p-771, 0.0, 0x1.f116b8f1725fp-957,
     0.0, 0.0, 0.0, 0x1.218fe732cfdfap-625, 0.0, 0x1.af325ba9756a2p-996,
     0x1.d25e37aa8f926p-119, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5cf956deeab1p-112, 0.0,
     0.0, 0x1.f2b9bcafcabcfp-324, 0x1.071104f0333ffp-931, 0.0, 0.0, 0.0, 0.0,
     0x1.49cf7d2201a1p-826, 0.0, 0x1.c80aad1e7e482p-757, 0x1.a7e805dd93db6p-971,
     0x1.94a0fe0cda753p-319, 0x1.e1d45729fe91bp-447, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a316ab61a105p-317, 0.0, 0x1.db2f496f83cb5p-632, 0x1.ba07ebecfe262p-657, 0.0,
     0x1.df2c282982298p-914, 0.0, 0.0, 0x1.0fb6f841cb91bp-288, 0.0, 0.0,
     0x1.a2db6641ee52cp-365, 0x1.52c2ecb6901a4p-643, 0x1.8e6c932785be6p-84,
     0x1.0bc4c60fb830cp-281, 0.0, 0x1.780f5e8c15a5ap-579, 0.0, 0.0, 0.0,
     0x1.f0e8b9d3d3719p-225, 0.0, 0x1.a34ca38d89272p-73, 0x1.def44ae714124p-467, 0.0,
     0x1.c9f1e1c1b1b2ep-932, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.58d905665bdbap-885, 0.0, 0x1.4fa76c94c9da7p-319, 0.0, 0.0,
     0x1.af961fe4768fcp-75, 0x1.14ab3a30ed47fp-968, 0x1.57e5e80957cafp-80, 0.0, 0.0,
     0x1.c5cc2ec85be22p-245, 0.0, 0x1.4f6d3be55a724p-819, 0x1.d60afba51c87ep-38,
     0x1.9b1277148bb16p-61, 0x1.a3bba46cb34d9p-628, 0.0, 0x1.0a8d2acf195cfp-665, 0.0,
     0.0, 0x1.1141067c97d4ap-411, 0x1.1779e11642ec1p-878, 0.0, 0x1.08aa47d3fdabp-1007,
     0.0, 0x1.92cba4ef2af77p-618, 0.0, 0x1.4cd7e10963f3p-718, 0.0,
     0x1.85ad30105819dp-507, 0x1.cea917a236b3ap-316, 0x1.d38218329bap-225, 0.0,
     0x1.b70265d0a8702p-939, 0x1.b9844369d7e78p-713, 0.0, 0.0, 0.0,
     0x1.e557095f5cd3cp-990, 0.0, 0x1.d5a2c103db5d3p-631, 0.0, 0.0,
     0x1.a0eca658b28c7p-362, 0.0, 0.0, 0x1.558994af5a5c3p-923, 0x1.b2fc393321fbbp-110,
     0x1.2abeda7a30efap-101, 0.0, 0x1.c0fe157d3c349p-4, 0.0, 0x1.73e5fb9772415p-50,
     0x1.4dbe3a6f69b8p-809, 0x1.8d57c443e60d7p-958, 0.0, 0x1.83534591aedffp-172,
     0x1.7e3278400d9f7p-692, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2bc391e4accf3p-940,
     0x1.14d81b7285b16p-273, 0.0, 0.0, 0.0, 0x1.35799f772adddp-1003, 0.0, 0.0,
     0x1.ad526f2f826a6p-781, 0.0, 0x1.b1929d68e2872p-617, 0.0, 0.0, 0.0, 0.0,
     0x1.1104582221857p-965, 0x1.88cccf388d14ap-735, 0x1.b21f448308302p-486,
     0x1.85c0dac2e2b7p-560, 0.0, 0x1.d4a54abcfcbb3p-723, 0x1.02c2729f05be5p-793,
     0x1.d1eae9b0d3364p-50, 0x1.7dc601869e945p-616, 0.0, 0.0, 0x1.37f8371944008p-355,
     0x1.ae7f79542e6a4p-918, 0x1.0698e111b480cp-737, 0x1.4365a2d1d74c9p-188, 0.0, 0.0,
     0.0, 0x1.9b73118e56952p-277, 0x1.1743139a13b64p-428, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.165bfcb93578dp-353, 0.0, 0x1.70e787da1e99dp-259,
     0x1.449ad2925163p-458, 0x1.84d427afaf112p-480, 0.0, 0x1.5fd426b57857ap-404, 0.0,
     0.0, 0x1.9d8e3f825ff5bp-950, 0x1.b901a7d7b1508p-308, 0x1.fa56e279ad181p-184,
     0x1.ed8c0d981f8e4p-845, 0x1.cbc3bba681f74p-1003, 0.0, 0.0,
     0x1.ddf59de029926p-804, 0x1.6324bc644f79ep-24, 0x1.d46a857bc4f2fp-568, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.57fbe805124cfp-631, 0.0, 0x1.ee927043ebb34p-312, 0.0,
     0x1.501bada6df548p-689, 0.0, 0.0, 0.0, 0.0, 0x1.3569a429f5e2cp-180, 0.0,
     0x1.a77952897fd29p-966, 0.0, 0x1.09b05702f3b6ep-583, 0x1.932ce4e5db066p-454, 0.0,
     0x1.d775bd6409a74p-481, 0x1.24f84b1470633p-294, 0.0, 0.0, 0x1.3a384fa9424b1p-290,
     0.0, 0x1.3f2acbc5ea898p-335, 0x1.1f3c1e7cab1eep-754, 0.0, 0.0,
     0x1.1fb2830a48b6fp-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bbc9ba868f078p-91, 0.0, 0.0, 0x1.cec4a602bbcd6p-850, 0x1.6c40276bd6fb2p-460,
     0.0, 0x1.f39f34bbad521p-911, 0x1.1bd81671aa3dcp-884, 0x1.36d160687461dp-580,
     0x1.d54ac17ccfdfep-110, 0x1.1e654cdea0925p-816, 0x1.c7376d74e32b1p-668,
     0x1.4f9f2658b5d3p-506, 0x1.3adb1d68f5fdfp-210, 0x1.2200203c332c5p-5, 0.0,
     0x1.45acb32f4116bp-75, 0.0, 0.0, 0x1.64ab0b22e8739p-482, 0.0, 0.0, 0.0,
     0x1.6b15ba8ce3919p-941, 0.0, 0.0, 0x1.4a76fc707c6c3p-386, 0x1.4ff381f484175p-351,
     0.0, 0x1.4d2cb04a284a9p-217, 0.0, 0x1.796c2793e256ap-384, 0x1.811b44a866caap-363,
     0x1.706e81a802ddap-173, 0.0, 0x1.c86c57c1dcb46p-522, 0x1.218f6e34f33dbp-179, 0.0,
     0x1.cf8105bae8749p-228, 0x1.a2c72fda8c3bcp-353, 0x1.cbf0d5c126fb7p-766, 0.0, 0.0,
     0x1.a6eadfc5c7207p-502, 0x1.d4915ee124c5dp-918, 0.0, 0.0, 0x1.cc85f3c6bbef1p-539,
     0.0, 0.0, 0x1.bc408c8f62bf2p-10, 0x1.7a61d46ca47e1p-707, 0x1.6e9fab8bbb3d9p-14,
     0.0, 0x1.9aea40801b926p-266, 0.0, 0x1.f195e06c6dd89p-565, 0.0, 0.0,
     0x1.1d606c33f7dd4p-88, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ce4feb9ee3e6bp-626, 0.0, 0.0, 0.0, 0x1.bf36e4280acf7p-523, 0.0,
     0x1.19c248600be4p-918, 0x1.dd8e7875467fcp-497, 0x1.c6a8b63467473p-564, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d72b7f78d3c91p-745, 0.0, 0.0, 0.0,
     0x1.782a250334122p-190, 0x1.53eb5ea7de218p-105, 0.0, 0x1.bda5eb59fe4ebp-394,
     0x1.759d4e475028ap-919, 0x1.ecad17ed0b268p-143, 0x1.0c14791d83caap-769, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6b2b5c9a0578cp-490, 0.0, 0x1.1f808c8133ed6p-618,
     0x1.f24382e5dc48ep-30, 0.0, 0.0, 0x1.ad5f9157342dp-685, 0.0, 0.0,
     0x1.a7373b20a1e83p-234, 0.0, 0x1.1246eff7ce08cp-442, 0.0, 0.0,
     0x1.974a874e728d8p-702, 0x1.2a5380f11b807p-335, 0.0, 0x1.71f022cd37a89p-862,
     0x1.82a5429cbf2abp-118, 0.0, 0x1.bcca3cef64bf6p-538, 0.0, 0.0,
     0x1.5937d7c6db12ap-85, 0x1.8f93b3a833382p-179, 0x1.cbe1765bff36dp-704,
     0x1.e2f5f56f895c4p-932, 0x1.a78e0eaf7de2ap-123, 0.0, 0x1.8bcb7d197c1d4p-388, 0.0,
     0x1.579a8cc521b31p-968, 0x1.e05fcb1d07badp-663, 0x1.7bf2e03c74deep-907,
     0x1.84d00f97c026ap-88, 0x1.8da1ec9dc91c3p-579, 0.0, 0.0, 0x1.a286b8d4d8d3p-691,
     0.0, 0x1.7e4faab96be0dp-429, 0x1.9b7e8ce207343p-915, 0.0, 0x1.a23ebfd28fd92p-800,
     0x1.055e5e70c081p-770, 0.0, 0x1.c42718c91df99p-133, 0x1.9310306df3386p-328, 0.0,
     0x1.ab40817a606eep-798, 0.0, 0x1.6dccdfd0f9667p-1001, 0.0,
     0x1.aca9784464264p-133, 0.0, 0x1.d652d389a3ff7p-364, 0.0, 0x1.27e3a9d9c3b4dp-400,
     0.0, 0x1.e4ad99b947355p-586, 0x1.947d56cb5d856p-820, 0.0, 0.0, 0.0,
     0x1.40ae70627974p-465, 0.0, 0.0, 0x1.fd27996818133p-398, 0x1.1e225a0ebdb11p-897
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_logd2_u35avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_logd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_logd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
