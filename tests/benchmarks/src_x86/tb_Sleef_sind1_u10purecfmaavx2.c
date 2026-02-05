/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind1_u10purecfma.c --function Sleef_sind1_u10purecfma \
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
     0.0, 0.0, 0x1.82ed8291a247cp-874, 0x1.68aa393c67c6ep-547,
     0x1.f8f7de9c09cfbp-198, 0x1.2fad672720f7fp-823, 0.0, 0.0, 0.0, 0.0,
     0x1.f272bc36576b4p-748, 0x1.3d7fc6ebc9e87p-644, 0.0, 0.0, 0x1.cb122456136ffp-280,
     0x1.9caf6e1df080cp-654, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75c3354d602a2p-915, 0.0,
     0.0, 0x1.3951271ce1bf3p-615, 0.0, 0.0, 0.0, 0.0, 0x1.77daf526edd0cp-390,
     0x1.4b68084ad6d38p-164, 0.0, 0x1.ca509326d6ba4p-636, 0.0, 0.0,
     0x1.cef4904f81feap-281, 0.0, 0x1.cdf40a51d89dfp-46, 0x1.9d1c02404e68bp-625,
     0x1.59998ee15a538p-636, 0.0, 0.0, 0.0, 0.0, 0x1.e7e081563d7ccp-690, 0.0, 0.0,
     0x1.065412932cbfcp-311, 0x1.1e0bd88cca258p-38, 0.0, 0x1.88dc62849129p-635,
     0x1.3a4220263dcecp-87, 0x1.1c50dd7bf6c1ap-853, 0x1.7d89c89b5024dp-340, 0.0,
     0x1.f4c295bce1317p-440, 0x1.fe20dd42706b4p-601, 0.0, 0x1.5b067a05de53dp-738,
     0x1.7e1ff413e3586p-398, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.530b5aba858bap-686, 0.0,
     0x1.fbb769dde105dp-535, 0.0, 0.0, 0x1.766ae8480abf8p-775, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e9bfeb51a6b2cp-813, 0x1.3bb7e9c3e5194p-364, 0x1.25e2a70420de7p-633, 0.0,
     0.0, 0x1.d467125c19605p-560, 0x1.73b4e9817a47bp-939, 0.0, 0x1.dfb8b38cb4d02p-173,
     0x1.937a72dac247fp-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.637fc90f66836p-540, 0.0,
     0.0, 0.0, 0.0, 0x1.d339a442b5cc6p-218, 0.0, 0x1.105913fda3b0ap-529, 0.0, 0.0,
     0.0, 0.0, 0x1.f4c0454ef77d3p-454, 0.0, 0.0, 0.0, 0x1.f07dd9e49d03bp-124,
     0x1.2f505b8e784fbp-335, 0x1.ad5e9da068555p-222, 0x1.493ece9bbd0fdp-466, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.474bf895942c7p-179, 0x1.bf36b41e5fb09p-479, 0.0, 0.0, 0.0,
     0.0, 0x1.0fcc3634506d7p-239, 0.0, 0x1.58fc343e72fb4p-440, 0x1.c877455b424f2p-168,
     0x1.25e2a7c43d12fp-481, 0.0, 0.0, 0.0, 0x1.4ad87adec531cp-936, 0.0, 0.0, 0.0,
     0x1.34ec9687a0834p-173, 0x1.9763f21aedfbbp-534, 0x1.8c0853b94c90fp-642, 0.0, 0.0,
     0.0, 0x1.bae669c7b2ed4p-178, 0.0, 0x1.0561aa5099c5bp-622, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.337b21ccfe88cp-673, 0x1.894767c8352b6p-67, 0.0, 0.0,
     0x1.878c1d7df527cp-842, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8642d88f5590bp-607,
     0.0, 0.0, 0.0, 0.0, 0x1.04621eef77bfbp-42, 0x1.32c9d60da9a36p-151,
     0x1.8bb30ce24b4d3p-209, 0.0, 0.0, 0x1.8982c87788bc7p-944, 0x1.69163734521edp-30,
     0.0, 0.0, 0x1.c5e4eb429df68p-179, 0.0, 0.0, 0x1.89c2e133c21bcp-722,
     0x1.efca314a99526p-919, 0x1.0ed66c81883b2p-371, 0x1.f967385e61558p-854,
     0x1.b33d89fe53d02p-701, 0x1.726d0fd92c406p-586, 0.0, 0x1.85d5083cbedp-772, 0.0,
     0.0, 0.0, 0.0, 0x1.cfca160103a2bp-426, 0x1.c759715f6e058p-1005, 0.0,
     0x1.c7565db34c58dp-214, 0x1.d8de2282d1da8p-305, 0x1.4192359d80a89p-986,
     0x1.cf3090cddb459p-884, 0x1.ec8ff048f7e2p-728, 0x1.33b49ea011eb9p-640,
     0x1.bed770bf9598dp-740, 0x1.d5c4cb731870ep-774, 0x1.270526bbb195p-818,
     0x1.b2770efbd0784p-36, 0.0, 0x1.7ed0e2964b30bp-58, 0x1.c4b7fda5a1031p-554,
     0x1.ae012fe18250fp-244, 0x1.9dd5b1bb7e733p-424, 0.0, 0x1.993ce079c6778p-75, 0.0,
     0x1.d171ae652cd82p-972, 0x1.0ebb1fce63e12p-894, 0x1.0e559c79e55a7p-204,
     0x1.855a697c72dcp-321, 0x1.8c7a028e41608p-231, 0x1.a53e1f8346c28p-745, 0.0,
     0x1.ebee6b73e7803p-375, 0.0, 0.0, 0x1.a1bcf6098d373p-515, 0.0, 0.0, 0.0,
     0x1.64aabc41d3af4p-634, 0.0, 0.0, 0x1.26071557701afp-880, 0x1.1f3f1e2ca7302p-778,
     0x1.99558fe0932ccp-1020, 0.0, 0.0, 0.0, 0x1.416cb05f9749p-957, 0.0,
     0x1.7af1899cc579p-487, 0x1.df0e191195f05p-706, 0x1.64ec5a045e6a7p-133, 0.0,
     0x1.362981d6637c7p-89, 0x1.221b958a8c2a3p-520, 0x1.5cf70678c9154p-60, 0.0,
     0x1.511739017f121p-202, 0.0, 0.0, 0.0, 0x1.ab247cefea083p-620,
     0x1.5f25dc305565p-5, 0x1.e8aac14cbab4fp-680, 0x1.54eebd37f902p-28, 0.0,
     0x1.bc77df15dee1ep-907, 0.0, 0x1.05d3f3f21902p-1001, 0.0, 0.0, 0.0,
     0x1.0e285390a1725p-710, 0x1.610945d6d48e2p-841, 0.0, 0x1.55d0f694bac0bp-127,
     0x1.56112b61594dep-970, 0.0, 0x1.84453f68440c2p-50, 0x1.6ba2b3f6f2b5dp-192, 0.0,
     0.0, 0x1.81680e222692bp-363, 0.0, 0x1.6e383d123bc52p-942, 0x1.d8910cceacabfp-789,
     0.0, 0x1.a0aa89b2aac65p-391, 0.0, 0x1.338afefd042aep-434, 0.0,
     0x1.1f0a2f4581f5fp-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4f37bad28c8cdp-978, 0.0,
     0x1.12ef9028c6506p-26, 0.0, 0x1.cacdd195f4dbcp-736, 0x1.ad148d86beb95p-380, 0.0,
     0.0, 0.0, 0x1.7e06d53703531p-532, 0.0, 0.0, 0x1.dd048db300b66p-879,
     0x1.e34008602ee0bp-972, 0.0, 0.0, 0x1.9c2f07220089cp-687, 0x1.c650248612e09p-348,
     0x1.9e95c96063a07p-427, 0x1.8382a80afe60dp-240, 0x1.54dcac0e54c4p-330, 0.0, 0.0,
     0x1.639eefc13f846p-528, 0x1.524bc45e56a07p-660, 0.0, 0.0, 0x1.a8e1d6dc38416p-7,
     0.0, 0.0, 0x1.30abeee6ad1e4p-785, 0x1.819549e2c6362p-678, 0x1.10434eaed287bp-424,
     0x1.91ec56bd6cc7ep-375, 0x1.283533323bfb8p-818, 0.0, 0.0, 0x1.88c742fc5be4bp-777,
     0.0, 0x1.e4a8998a1ba0ep-403, 0x1.b6f094dfcc2bp-757, 0x1.9168882d4f122p-775, 0.0,
     0.0, 0x1.488833cb4d9b1p-919, 0.0, 0x1.ac158f0cf8cf4p-948, 0x1.62adb75c49425p-521,
     0.0, 0.0, 0x1.fd63d380f40a3p-515, 0.0, 0.0, 0x1.2758467141d0cp-142, 0.0, 0.0,
     0x1.ca96844b748f9p-1013, 0.0, 0x1.8947e3d9f57d6p-449, 0x1.54cb012a9b1c9p-246,
     0x1.de6f75bd335ffp-975, 0x1.e6687d7dd84f3p-566, 0.0, 0.0, 0x1.79d25080db431p-660,
     0.0, 0.0, 0.0, 0x1.5d323fc867ba9p-719, 0.0, 0.0, 0x1.99632080a82c6p-971,
     0x1.fe83fcc0a5974p-331, 0.0, 0.0, 0x1.ceedd557f98ecp-834, 0.0, 0.0,
     0x1.5d003e1aa147p-477, 0.0, 0x1.759810684619ap-160, 0.0, 0x1.b0dd577b97e6bp-251,
     0.0, 0x1.941d816c55d79p-415, 0.0, 0x1.fd00cc5bac061p-642, 0x1.71d7a2a5d94dcp-742,
     0.0, 0.0, 0x1.eaa5c88cf71b6p-54, 0x1.2cbee4a16a2a8p-956, 0x1.934a3a740d908p-609,
     0x1.e725e553b1abbp-434, 0.0, 0x1.06965ce148197p-677, 0.0, 0.0, 0.0,
     0x1.ca779cb934d64p-651, 0x1.e8a4cf569ca05p-463, 0.0, 0.0, 0x1.abfd0c42c46f2p-98,
     0x1.34e7cffe44e3ep-635, 0.0, 0.0, 0x1.f68ab5dd224d3p-235, 0x1.dcc8ef99112ebp-675,
     0x1.472ca6fcd14f6p-106, 0.0, 0x1.f6f775dfe8cd5p-653, 0.0, 0x1.baa5224fbd28p-517,
     0.0, 0.0, 0.0, 0.0, 0x1.1ee45dec465b6p-494, 0x1.33b068af83875p-559, 0.0, 0.0,
     0.0, 0x1.93284d7fc3499p-412, 0x1.379ab39fb0225p-328, 0x1.1761ac726eaffp-59, 0.0,
     0x1.0572fd7eb9114p-438, 0.0, 0x1.e6d98b21d7ca8p-831, 0x1.7a3a5e02f8611p-132,
     0x1.fe71b5358a8d4p-636, 0.0, 0x1.a9a869b37db58p-32, 0x1.cd941e3da4fa6p-521,
     0x1.31d9e7ce17badp-210, 0.0, 0.0, 0x1.c343d3129fccep-700, 0x1.c3a1d5a41699fp-63,
     0x1.b073c68e50fcp-914, 0x1.dfb449030abf6p-20, 0x1.c0de51d68729fp-232, 0.0, 0.0,
     0x1.5e0a3c512d0eep-976, 0.0, 0.0, 0x1.9f17c132c3d35p-1009,
     0x1.e47c6668128f1p-962, 0x1.aededa5198f21p-913, 0x1.1a5fd4c740388p-366,
     0x1.9cbc35faf3f9dp-64, 0x1.dbd5c5c9baa28p-54, 0.0, 0.0, 0x1.b9ca221616cacp-120,
     0x1.036069f2087e5p-650, 0x1.9629fffd9e1e2p-457, 0x1.5e65ad077b373p-999,
     0x1.5eda2d1da021bp-113, 0.0, 0.0, 0x1.0e6a1c01e68e3p-340, 0x1.a34b220eee9cfp-502,
     0.0, 0.0, 0x1.d296073afb1bbp-110, 0.0, 0x1.d019074ee466dp-5, 0.0,
     0x1.e617c0ecb5e48p-577, 0x1.a420a674f3bb7p-74, 0.0, 0.0, 0.0, 0.0,
     0x1.d2e4408f148bdp-65, 0.0, 0x1.8ca18e8f152fp-485, 0x1.501125ee7915dp-548, 0.0,
     0x1.2c4366eb2115bp-991, 0x1.92ae2ad2dc8a6p-433, 0.0, 0x1.0436861753172p-599,
     0x1.7628c8b152c55p-175, 0x1.de6187c70b197p-304, 0x1.6f06574bcb492p-677, 0.0, 0.0,
     0x1.904bb50781dc6p-781, 0.0, 0.0, 0x1.a48f29c202245p-1009, 0.0, 0.0, 0.0, 0.0,
     0x1.16e848a244fd7p-113, 0.0, 0x1.a49a373a1942dp-354, 0.0, 0x1.23297e805a26p-895,
     0.0, 0.0, 0x1.4b703c98f062ep-831, 0.0, 0x1.296adf384a3d2p-153,
     0x1.24997eb4bda01p-667, 0.0, 0x1.c8b3e1c078bf7p-211, 0.0, 0.0, 0.0,
     0x1.1dcf0e8ebe6dfp-5, 0.0, 0.0, 0x1.a8cbcd6fe3ecdp-268, 0x1.c896411e4b456p-813,
     0x1.c09935f0c8654p-775, 0.0, 0x1.a31b77b95ec1ap-908, 0x1.3ca611eee3946p-54,
     0x1.ce75137b0fb69p-607, 0x1.5676ab41db02fp-302, 0.0, 0.0, 0.0,
     0x1.5e7f1ff02ef98p-375, 0.0, 0x1.4076cd68e8f63p-225, 0.0, 0.0, 0.0, 0.0,
     0x1.9afb6364a8aep-430, 0x1.c0b605b2f14efp-331, 0x1.5a6624ed08f65p-15, 0.0, 0.0,
     0.0, 0x1.47dc873cb36f6p-95, 0.0, 0.0, 0.0, 0x1.7be5d62ca3118p-926, 0.0,
     0x1.edbe2d0f768f5p-846, 0.0, 0x1.3b9d2b6cebc3ap-2, 0.0, 0.0,
     0x1.394d5683848dfp-158, 0x1.3b608c1b64dc4p-481, 0x1.082b68eb0f395p-99,
     0x1.645a8f344a55ap-390, 0.0, 0x1.18eb5801c22dbp-488, 0.0, 0x1.24d5341193ea9p-422,
     0x1.63b7283ce493dp-361, 0.0, 0x1.e346a665bd1d5p-661, 0.0, 0.0, 0.0, 0.0,
     0x1.d39afcaa216dfp-908, 0.0, 0x1.f6925e50e7e1p-225, 0.0, 0.0, 0.0,
     0x1.792e89c786295p-1001, 0x1.5297f014bbe55p-365, 0x1.59dcbcdc82996p-401, 0.0,
     0.0, 0x1.51cd39ad729dep-822, 0x1.1d39f7fc4e075p-605, 0.0, 0x1.9cde2a850735cp-421,
     0x1.b7457592c194ep-836, 0.0, 0.0, 0.0, 0.0, 0x1.8b263f781e635p-767,
     0x1.f107481351f4ep-3, 0x1.00e383ca14a7ep-783, 0x1.1233f9597d9dfp-54, 0.0,
     0x1.693ee0c457812p-173, 0.0, 0.0, 0x1.98a33485d73acp-165, 0.0,
     0x1.2218fedcedf21p-158, 0x1.78c4b2f1c59dbp-800, 0.0, 0.0, 0x1.33f4908e5861ep-623,
     0.0, 0.0, 0.0, 0x1.650c5fb042d06p-899, 0x1.1438f25f018bbp-132,
     0x1.9c9a786933408p-102, 0.0, 0.0, 0.0, 0x1.f99f51e35837bp-240, 0.0,
     0x1.973509621d26ap-638, 0.0, 0.0, 0.0, 0.0, 0x1.cefe4855455a5p-864, 0.0, 0.0,
     0x1.90c2bb89b17b9p-4, 0x1.ea578980f659cp-903, 0.0, 0.0, 0x1.b9052ae74c208p-53,
     0.0, 0x1.524fc4bd36823p-737, 0x1.6bd38eaf7c9a5p-859, 0x1.3c547e84bca77p-679, 0.0,
     0x1.a68e9792325fap-573, 0.0, 0.0, 0.0, 0x1.5b5de59a28a77p-533, 0.0,
     0x1.049f71a471d41p-509, 0x1.b9691cbc13c5dp-153, 0x1.1701dd686087p-444,
     0x1.f5c1245da9f88p-58, 0x1.959cdabba9005p-637, 0.0, 0.0, 0x1.48aea15375f38p-252,
     0.0, 0x1.d988e3b6535f7p-291, 0x1.f409e42cbcd7bp-511, 0x1.683cdba83d6fbp-68, 0.0,
     0x1.178f5369b8fafp-18, 0.0, 0.0, 0.0, 0x1.4f3e211114f2ep-411, 0.0,
     0x1.e69b135165b7fp-699, 0x1.52592ebc6fee5p-38, 0.0, 0.0, 0.0,
     0x1.57ec4d48afc2bp-69, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e50cd4c712a42p-311, 0.0,
     0x1.fea7c043d7264p-895, 0.0, 0x1.3eb4b2ebfda13p-574, 0x1.b38f920e53f9ap-324,
     0x1.e368fe64ae06p-775, 0x1.6cbedd2233279p-336, 0.0, 0x1.4d40bc18e5eb2p-580,
     0x1.599db81a3b944p-433, 0x1.1bdc17344bd7fp-654, 0x1.4b8fa0d34ad2cp-773, 0.0,
     0x1.41cc23a3d1c5ap-499, 0x1.35f5da3e3ed62p-1020, 0.0, 0x1.4d4e80f6b73e1p-201,
     0x1.20767b29eb359p-380, 0x1.41080fa7810fap-230, 0x1.aadc489ab11aep-341,
     0x1.b1e036f3a8078p-576, 0x1.df60f9b6a1c3ep-855, 0.0, 0x1.3769eac23b4a7p-929,
     0x1.7648494f21054p-350, 0x1.87609dda09625p-159, 0x1.cfe56cfa81d3bp-405, 0.0, 0.0,
     0.0, 0x1.7ced7dbc70768p-319, 0.0, 0.0, 0x1.97b2a354ecacfp-689,
     0x1.f96ac89b28ce9p-84, 0.0, 0x1.9a287804ecafdp-895, 0.0, 0.0, 0.0,
     0x1.d661953e7ef83p-938, 0x1.d35f84fceedafp-605, 0.0, 0.0, 0.0, 0.0,
     0x1.7b1c5976bc302p-407, 0x1.7d17bd2d4a8ebp-312, 0x1.ea26be1fd9284p-719,
     0x1.70df728c302cbp-442, 0x1.36c091bf06a96p-702, 0.0, 0x1.9c5fb3b1c3e81p-532,
     0x1.09de2bbadf536p-649, 0x1.a57e517cf5fe3p-791, 0.0, 0x1.c78ba6a9708eap-805, 0.0,
     0.0, 0x1.741541e22caccp-662, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f0c42b8f01f58p-244, 0x1.2a5deb36e6e4ep-541, 0x1.579bde10dbc47p-977,
     0x1.f5d1fbd1cabf1p-665, 0.0, 0x1.4252bfc0efaebp-112, 0.0, 0.0,
     0x1.aac0913e779a1p-860, 0.0, 0.0, 0x1.8e7eafaf27722p-944, 0.0,
     0x1.dfcb84edd0d32p-437, 0.0, 0.0, 0.0, 0x1.5460c35ff539p-837, 0.0, 0.0,
     0x1.629bf22890b19p-533, 0.0, 0.0, 0x1.1682919c35b04p-856, 0x1.6fc53b2a452fp-915,
     0x1.a5bffb904b5cbp-291, 0.0, 0.0, 0.0, 0x1.50cd105efc702p-963, 0.0, 0.0,
     0x1.5ba6a57cbcee5p-480, 0x1.334c33102b4dbp-176, 0x1.d0c348ecb5461p-150,
     0x1.e64ccfdcd44e5p-628, 0.0, 0x1.5fd5cfae53f93p-750, 0.0, 0.0,
     0x1.59cea394746d4p-298, 0x1.e899ed2037643p-753, 0x1.b07d5eb25dc9cp-142,
     0x1.b5f59eed397a2p-881, 0.0, 0.0, 0.0, 0x1.ae6f320c03569p-627, 0.0,
     0x1.3c944ac15c6eap-714, 0.0, 0x1.598d7e5d9b812p-384, 0x1.c3063eaedc414p-586, 0.0,
     0.0, 0x1.90c6014c4004ap-372, 0.0, 0.0, 0.0, 0x1.72cc0a58b0553p-951, 0.0,
     0x1.09d9c770aa61p-580, 0x1.7c6e3bd5f5ed8p-483, 0x1.65703905d9bfap-906, 0.0, 0.0,
     0x1.6b6729ff14a87p-447, 0x1.fb85d459dde14p-731, 0x1.04415e05b8bffp-287,
     0x1.a0322e26096d4p-379, 0.0, 0.0, 0x1.c8261043110abp-577, 0.0, 0.0,
     0x1.af8e1625e00e1p-567, 0.0, 0.0, 0x1.c9f94121a3533p-924, 0x1.092b8cd2f1e2bp-243,
     0.0, 0.0, 0x1.21c5cdd1b44bp-69, 0x1.85cd3ebf3faf7p-966, 0x1.4b80860592217p-825,
     0x1.ebf5867849537p-414, 0x1.ed96596dc2098p-893, 0.0, 0x1.d0776ebfe61ddp-804,
     0x1.38fcd19b31bbap-749, 0.0, 0x1.aafcbf2dcf7d6p-1003, 0.0, 0.0, 0.0,
     0x1.15d5c250d941dp-278, 0x1.4b3a5f767ff49p-236, 0.0, 0x1.23c0e3722148fp-988, 0.0,
     0x1.fd8867c309233p-92, 0.0, 0.0, 0x1.a5469ea793a59p-571, 0.0, 0.0,
     0x1.4db9afd91fa52p-511, 0x1.ce1a1aa5cc1aap-337, 0.0, 0.0, 0.0,
     0x1.9eb869439e556p-788, 0.0, 0.0, 0.0, 0x1.a254875420b07p-305,
     0x1.51362e2066fep-390, 0x1.3d38eb1ae20b4p-856, 0.0, 0x1.17ecb373b202dp-262, 0.0,
     0.0, 0.0, 0x1.5b670c8f30a57p-165, 0.0, 0.0, 0x1.346808309bd88p-551, 0.0,
     0x1.0488ee221d407p-1022, 0x1.74d9b5064485p-846, 0x1.7d7224ee42f6p-1013,
     0x1.bf5fa1e4037f1p-32, 0x1.aef859fe1c645p-908, 0.0, 0.0, 0.0, 0.0,
     0x1.c4daed96a0853p-989, 0x1.ffb42d4c619f2p-751, 0x1.981549cb3a43p-605, 0.0,
     0x1.14bfe857c1633p-984, 0x1.eae33e547d271p-369, 0.0, 0x1.19453ddc89465p-492,
     0x1.60ebca172b7e5p-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a589506ff5dcbp-381,
     0.0, 0x1.decd710b4cb58p-412, 0x1.94c803203dddbp-142, 0.0, 0x1.132c4f12de9f4p-775,
     0.0, 0.0, 0x1.b1e867dadfcf5p-794, 0.0, 0.0, 0.0, 0x1.f96482f98c06cp-425,
     0x1.af9a41a3cb173p-558, 0.0, 0.0, 0x1.1106a2e1f497bp-114, 0.0,
     0x1.e5377bbe45635p-940, 0.0, 0.0, 0.0, 0x1.93db704dd50a4p-178,
     0x1.5ad4db26ab6f9p-382, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eb4f9cec9c5f7p-731, 0.0,
     0x1.a0d3371867ac2p-234, 0.0, 0.0, 0x1.f49f0453e9efbp-388, 0x1.262cf56048288p-344,
     0.0, 0.0, 0.0, 0.0, 0x1.d7db7291086e3p-298, 0.0, 0.0, 0.0,
     0x1.45b16bd95a58dp-840, 0.0, 0x1.8df21acd62f0ap-675, 0.0, 0.0,
     0x1.c0d56f3df258p-908, 0x1.fa3a6643e47p-967, 0.0, 0x1.181e93ab8d038p-510,
     0x1.aea0347329e62p-780, 0.0, 0x1.65a7a24af78d3p-100, 0x1.68cb69fee35c3p-312,
     0x1.294b36444a9d1p-494, 0.0, 0x1.3e034c1b38ee1p-142, 0.0, 0x1.559ed77abb943p-675,
     0x1.63532c40466edp-491, 0x1.441cda90744eep-506, 0.0, 0x1.cf1f6d68eaea4p-127, 0.0,
     0x1.ada08d0ce1251p-96, 0.0, 0.0, 0x1.b3cbcf8207902p-467, 0x1.e0f6eeddbb4bdp-998,
     0.0, 0.0, 0.0, 0.0, 0x1.ac863013027dep-741, 0.0, 0x1.f36946d5ba076p-584, 0.0,
     0.0, 0x1.750f9ca38a521p-831, 0x1.7880e4c14d5c5p-260, 0x1.f9764a0e2e99dp-228, 0.0,
     0.0, 0.0, 0.0, 0x1.6295ec872ddeap-417, 0x1.20b7c9566fbefp-357,
     0x1.e8c471ae2d502p-872, 0.0, 0x1.163a7984a4265p-111, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a31e7639c367bp-701, 0.0, 0x1.b0c0d60c08642p-624, 0.0, 0x1.4221ff84d202ap-463,
     0.0, 0x1.f3457625f7b19p-787, 0x1.b026b42352297p-604, 0.0, 0.0, 0.0, 0.0,
     0x1.02c21ff286a7cp-353, 0x1.575ca90b855d2p-106, 0.0, 0.0, 0.0,
     0x1.02ac9e30a83bcp-495, 0x1.76af23414e167p-290, 0.0, 0.0, 0.0,
     0x1.c0e0f1a633b24p-567, 0.0, 0x1.7359342fa838fp-818, 0x1.7fdd843b55d2ap-840, 0.0,
     0.0, 0x1.37bff601560f1p-890, 0.0, 0.0
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
            tmp1 = Sleef_sind1_u10purecfma(tmp0);
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
    printf("Sleef_sind1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sind1_u10purecfma bench acc %la\n", global_bench_acc);
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
