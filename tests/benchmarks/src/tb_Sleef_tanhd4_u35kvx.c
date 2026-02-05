/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd4_u35kvx.c --function Sleef_tanhd4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.662732acb2ecp-627, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fd9b2a79ac7bp-665,
     0x1.62b847f136dap-152, 0.0, 0x1.b936598337727p-602, 0x1.d303bdc83af2ap-680,
     0x1.93ae819ed4c6p-339, 0x1.e2fc34d97e701p-532, 0.0, 0x1.db84db4bea82ep-758, 0.0,
     0.0, 0.0, 0x1.bd081482f67fap-962, 0x1.19399266139bp-375, 0.0,
     0x1.a1a7792f777c4p-517, 0.0, 0x1.3405597dec441p-181, 0x1.8ea9f43aaf0dap-867, 0.0,
     0x1.c126ab3f333b9p-633, 0x1.8569e3fa66479p-576, 0x1.6ced6d0772512p-491, 0.0, 0.0,
     0.0, 0.0, 0x1.56b6a761bdb22p-420, 0x1.71f073ca9985ap-132, 0.0,
     0x1.199ca55ef3703p-354, 0x1.30c7042cb6214p-264, 0x1.233e8be3ae3a7p-617, 0.0,
     0x1.9cbe39d53a5ep-583, 0.0, 0.0, 0x1.f07e636f355d1p-409, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e66bbe3f714dfp-72, 0.0, 0.0, 0x1.26e729d92d6f6p-297, 0.0, 0.0,
     0x1.289bb3994570bp-74, 0.0, 0.0, 0x1.3ab1c6de0611p-89, 0.0, 0.0,
     0x1.443fd21b0769p-391, 0.0, 0.0, 0x1.a4b4ebc99654ep-227, 0.0,
     0x1.405a17311d788p-184, 0x1.eb1a57523ead2p-292, 0x1.474cf93e1adb2p-889, 0.0, 0.0,
     0x1.474a77b2c7217p-485, 0x1.53945f8dd87e1p-674, 0x1.69967cd5a90abp-935, 0.0,
     0x1.6cf411d60fb52p-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21e2fb49508cp-797,
     0x1.a9d11570ac57ep-89, 0.0, 0.0, 0.0, 0.0, 0x1.48e93f70c50b4p-901,
     0x1.6eac983066588p-546, 0.0, 0x1.bebdbf6f18156p-1010, 0.0,
     0x1.4cee55931b7f9p-996, 0x1.332a10e90b713p-268, 0x1.8ed53d64f162fp-661,
     0x1.ffc7988a0eaf8p-866, 0x1.cdcdb4ffce80cp-579, 0.0, 0.0, 0.0, 0.0,
     0x1.6f509f2b4555ap-416, 0.0, 0x1.c537ded2889b4p-547, 0x1.eb9e2fc36f6ffp-843,
     0x1.ce964e71dd933p-504, 0.0, 0x1.12d657f7b2077p-173, 0x1.4a745687b7b81p-64,
     0x1.79159f7f46e97p-275, 0x1.8ac862a1e915p-853, 0x1.0fe099510aa02p-415,
     0x1.df42af957f968p-336, 0.0, 0.0, 0x1.9eb9239851e61p-412, 0x1.ae939418fa4acp-116,
     0x1.0590ea85a7ad5p-374, 0.0, 0.0, 0x1.66b6a5204fce5p-452, 0.0,
     0x1.6c4a318fc2d9cp-613, 0.0, 0.0, 0x1.780a597832fa1p-397, 0x1.93a88e4a075c4p-4,
     0.0, 0x1.e8cddb06037cbp-78, 0.0, 0.0, 0x1.a6416e405dc58p-215,
     0x1.2d5d78ae18934p-536, 0.0, 0x1.aa5265edad867p-434, 0.0, 0x1.9a2629bb48a5bp-884,
     0x1.3441cb6567764p-396, 0x1.8f140a4a5feep-409, 0x1.b7b0dc93f058dp-372, 0.0, 0.0,
     0x1.557c19c4d56d4p-897, 0.0, 0.0, 0x1.157044ad87971p-314, 0.0,
     0x1.a9c8cc4e4d2edp-838, 0.0, 0.0, 0x1.c763f6c3c022bp-209, 0x1.ca828f2ce3af1p-523,
     0.0, 0.0, 0x1.9f622028930ap-720, 0x1.4a6d739ed86cep-984, 0.0,
     0x1.3ac39130537b3p-122, 0.0, 0x1.f38611b890b1dp-296, 0x1.69dc7cecf63eep-651,
     0x1.2ba17dacfaf33p-798, 0.0, 0x1.0316d167293e5p-227, 0.0, 0.0,
     0x1.45b3e5090f61p-132, 0x1.9bcf6056410dfp-307, 0.0, 0.0, 0.0, 0.0,
     0x1.ca2a8fa2b7cefp-735, 0x1.e45ce8c3c5d63p-277, 0.0, 0.0, 0x1.b3a22ef688c0bp-499,
     0x1.cfed08f27c147p-845, 0x1.9d505000ee861p-520, 0x1.aaba84b6ae2d8p-917,
     0x1.8bc7a6fbc8f91p-73, 0x1.09c04455b386bp-908, 0x1.586fdbe2b1fb8p-168,
     0x1.1cdd09522d59ep-155, 0x1.dbd2bc43b951bp-987, 0.0, 0x1.9f5dc6b093b23p-903,
     0x1.e7833c8ec5fe5p-856, 0.0, 0x1.7d010764530cp-126, 0.0, 0x1.c3707da1eea51p-244,
     0.0, 0.0, 0x1.e173149fba1fp-14, 0x1.b718f21d6f6a3p-374, 0.0,
     0x1.af5f962aadf32p-182, 0.0, 0.0, 0x1.a886220496467p-884, 0x1.5951b20e63bf6p-468,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f730c8b158bf7p-944, 0.0, 0.0, 0.0, 0.0,
     0x1.ca2ed481eefeep-729, 0x1.3812a3c7b29d1p-876, 0.0, 0.0, 0.0,
     0x1.8b97ebb52713cp-552, 0.0, 0x1.95fbe972ec19cp-371, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cbf330844586dp-781, 0x1.874597fd3390cp-174, 0x1.002d8b33b57c9p-383, 0.0,
     0x1.d9139498fcecfp-438, 0.0, 0x1.2fe0da9a3ec0bp-704, 0x1.ba5f31ab9cef6p-819, 0.0,
     0x1.a20ff51106fecp-677, 0.0, 0.0, 0x1.2a8c75752096p-833, 0x1.be6b08bf66a6p-523,
     0.0, 0x1.4585e3dbe4b33p-601, 0x1.c39389aa885cdp-236, 0.0, 0.0,
     0x1.3c6610e37d8b3p-213, 0.0, 0.0, 0x1.1ba2175df578cp-471, 0.0,
     0x1.e81d55458d5bap-319, 0.0, 0x1.c4e743da2e27ap-223, 0x1.328648603f89cp-499,
     0x1.8c56efbda3a49p-469, 0.0, 0x1.b515ae2caee29p-85, 0.0, 0.0, 0.0, 0.0,
     0x1.92c84e496f703p-454, 0.0, 0x1.3bceb07a6c28cp-322, 0.0, 0x1.3d57f0debf207p-341,
     0.0, 0x1.a58bb07a8ca51p-319, 0x1.c40c6b22715d5p-737, 0x1.f22792dd2c08ep-688, 0.0,
     0x1.065e3887fb5aep-385, 0x1.793f3e1bd4d75p-398, 0.0, 0.0, 0x1.6eec1679a7ce7p-986,
     0x1.10d1eb5622388p-308, 0.0, 0x1.7f550abb4ef27p-659, 0.0, 0x1.e45e3837d5528p-443,
     0.0, 0.0, 0.0, 0x1.76edfce5161ecp-697, 0x1.ca959294c8ae2p-509,
     0x1.476d356d4f365p-507, 0.0, 0.0, 0.0, 0x1.9d8ec6ee0b255p-460,
     0x1.ca8cfaf2ee082p-711, 0x1.94e6e1647e905p-353, 0x1.0835dfc8ff1cp-599,
     0x1.998d082e9e993p-834, 0.0, 0.0, 0x1.bc323a150a602p-105, 0.0, 0.0,
     0x1.e9c35747355a6p-736, 0x1.d24f6bab60a6ap-868, 0.0, 0x1.f1de6174d5405p-763, 0.0,
     0.0, 0.0, 0x1.32b2193b2a384p-827, 0x1.0487bd82d5b1p-722, 0x1.7348401711b1dp-63,
     0x1.4baad4eca2dbep-430, 0x1.599779289bef4p-277, 0x1.f44d627ec5fp-325,
     0x1.bc4843a05f9adp-954, 0.0, 0x1.8909fd900a556p-394, 0x1.85f186a1e293ap-809, 0.0,
     0.0, 0.0, 0.0, 0x1.49a0d7c3c148ap-1019, 0.0, 0x1.b1fecdfd043cap-659,
     0x1.a889aeaba03f4p-377, 0.0, 0.0, 0.0, 0.0, 0x1.ca84bf69a036ep-715,
     0x1.c1c413d9c7c22p-742, 0.0, 0.0, 0.0, 0x1.8d75f0376879dp-70, 0.0,
     0x1.f6096cd2b8e8p-102, 0.0, 0x1.b46c76f6837a7p-823, 0.0, 0x1.e21a719ca9a1bp-951,
     0.0, 0x1.cf5b0dafdd5fbp-946, 0x1.d62a482789ce5p-232, 0.0, 0.0, 0.0,
     0x1.299bbf74f05eep-871, 0.0, 0x1.8f66004fc51afp-618, 0x1.d9b43332a0488p-489, 0.0,
     0.0, 0x1.b24ca7f0e62d2p-186, 0x1.5120d58566778p-590, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.caec4ada3ebbp-394, 0.0, 0.0, 0x1.110b61e142b2cp-185, 0.0,
     0x1.f0ae8a9963704p-892, 0.0, 0.0, 0.0, 0x1.7fb144a9e91a4p-904,
     0x1.57ac306c6481dp-150, 0x1.9ca84913b9b8cp-125, 0x1.4be27949275d4p-324, 0.0,
     0x1.47e8ff8381fd6p-782, 0.0, 0x1.fbcd311c206eep-575, 0x1.0ff1e87f9c326p-258,
     0x1.e280adec9c673p-473, 0.0, 0.0, 0x1.740041a89fb5dp-148, 0.0, 0.0, 0.0,
     0x1.070519e8ec397p-649, 0x1.51f96649f3b2cp-850, 0.0, 0x1.a444d121ad7cap-803,
     0x1.cd26d424ced9cp-405, 0x1.afc9bb90c0e8p-300, 0.0, 0.0, 0.0,
     0x1.2e54342dd0fdap-469, 0.0, 0.0, 0x1.786e5e0ad520fp-829, 0.0,
     0x1.61d6ea3f05e73p-958, 0.0, 0.0, 0x1.b95f349e6fe85p-798, 0x1.b09d3aeedaf01p-665,
     0x1.e5e2dfd5dd075p-692, 0x1.d017bb318c943p-1017, 0x1.4ecfa2e00c82p-224,
     0x1.c3c7b8fe42a02p-329, 0.0, 0.0, 0.0, 0.0, 0x1.3dbfb23e4187p-53,
     0x1.f215a856de3ffp-644, 0.0, 0.0, 0.0, 0.0, 0x1.da4bf42ce97f5p-410,
     0x1.0c3771b79d3d1p-414, 0x1.152d390cb8988p-393, 0x1.54a894c5518f4p-961, 0.0,
     0x1.542beb22dbc24p-871, 0x1.b93ba191d201ep-666, 0x1.cfb620fd66e03p-125, 0.0, 0.0,
     0x1.9263e80b0ba68p-908, 0x1.599d08b3af7cap-977, 0x1.83fe4ecc86b68p-777, 0.0,
     0x1.8b6aaf8dcfb65p-739, 0.0, 0x1.1a968394faffcp-444, 0.0, 0.0, 0.0, 0.0,
     0x1.26c3980731602p-60, 0x1.f495fe04f81f4p-56, 0x1.8c3cf9b7411b6p-169, 0.0,
     0x1.3beee00b27d26p-787, 0.0, 0.0, 0.0, 0x1.ff04f910e16c9p-394,
     0x1.49aab717bc816p-244, 0.0, 0.0, 0.0, 0x1.405af37a8512cp-333,
     0x1.ec7ce2c447c74p-436, 0.0, 0x1.9b715c83debd4p-426, 0x1.9c27887750e5cp-849, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4f3f20a9f6813p-613, 0.0, 0.0, 0x1.1a3562ac85afp-286,
     0.0, 0x1.f11baf3afce8bp-423, 0x1.7c19bbfda02a2p-969, 0x1.c08f2b9d8120ep-321,
     0x1.f07c0fad22459p-381, 0.0, 0.0, 0.0, 0x1.404254c3b5f1ep-47,
     0x1.24cf65d55a0b9p-475, 0x1.f86f3784c4922p-279, 0.0, 0x1.d3074497f61ecp-848,
     0x1.5e49535b9d5fcp-529, 0.0, 0x1.9764fe8eaff08p-960, 0x1.23794c981e1cdp-245, 0.0,
     0x1.8355bc02c0be5p-132, 0x1.f2098e393116ep-869, 0x1.f8a83318b4b18p-885, 0.0,
     0x1.19f9c43709c43p-637, 0x1.1cc96be55dda7p-580, 0.0, 0x1.66c99a238d558p-133,
     0x1.e86acf5d8c33p-59, 0.0, 0x1.bfd2bf922e6bdp-214, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87b6c3df7d307p-521, 0.0, 0.0, 0.0, 0x1.9bbfb3e3ccaa7p-699, 0.0,
     0x1.0d23fcd392a31p-192, 0x1.23a132473e2b1p-303, 0.0, 0.0, 0x1.d2375398e7597p-30,
     0.0, 0x1.a8b5bb0a4524bp-1001, 0x1.29c31c9064574p-233, 0x1.58b2b60c5d69ep-408,
     0.0, 0.0, 0.0, 0x1.e6766065a7d2bp-21, 0.0, 0.0, 0x1.0c6b850db5a21p-526, 0.0,
     0x1.c4401484ec546p-473, 0.0, 0.0, 0x1.7397ff995471bp-417, 0x1.de41657d40abep-912,
     0x1.73d1f4ce95379p-622, 0.0, 0x1.7538d13a3e309p-21, 0x1.1a81b551e24bep-557, 0.0,
     0x1.948de350b941dp-273, 0x1.13d98955e00bap-933, 0x1.5d965d648b88ep-331,
     0x1.06692094b56f6p-255, 0x1.e98d19d7d931dp-466, 0x1.555f6b0ff6903p-886,
     0x1.fa6465d65e62dp-589, 0.0, 0x1.8941bfce839cep-330, 0.0, 0x1.db32c58e415cdp-50,
     0x1.30fa693b8d831p-525, 0.0, 0.0, 0x1.f9ea64b32e3bfp-597, 0x1.4df1c845eb249p-349,
     0x1.d3fdd4462f898p-511, 0x1.a0f9c48e63efbp-560, 0x1.71358be482759p-579, 0.0, 0.0,
     0x1.b54c9471cf225p-473, 0.0, 0.0, 0x1.135eccd1f3588p-107, 0.0, 0.0,
     0x1.67068cf6dd314p-633, 0.0, 0.0, 0.0, 0x1.5bca430f359fep-301, 0.0,
     0x1.095f7fc54c81ap-515, 0x1.9c518ca117462p-681, 0.0, 0x1.6b141aeb236bcp-857,
     0x1.afa0a750e9a24p-216, 0.0, 0x1.0d9abdb70175dp-976, 0x1.c620f4d4c3d21p-538, 0.0,
     0.0, 0.0, 0.0, 0x1.bbfc570e19da1p-203, 0.0, 0.0, 0x1.778960bbf1887p-397,
     0x1.dcd9091e903b6p-341, 0x1.93a4cd5ed57bbp-668, 0.0, 0x1.1601366c34df6p-637, 0.0,
     0x1.2683e81d6ee3p-27, 0.0, 0.0, 0x1.5a7c48d74ef83p-712, 0x1.27f6651ac2419p-638,
     0.0, 0x1.f7fd71eb23898p-38, 0.0, 0x1.aeeb130d4d351p-615, 0x1.2732e74fc70d7p-962,
     0.0, 0x1.44a9eeba59947p-911, 0x1.1d16cfe043036p-954, 0x1.1a409e1c3a171p-216, 0.0,
     0x1.c89123dde1123p-194, 0.0, 0x1.c47986e36f106p-530, 0x1.67f3bf1f6080bp-639,
     0x1.d28211047afb6p-1001, 0.0, 0x1.eb4ff64ef7b23p-220, 0x1.70c9dbb32858bp-359,
     0x1.85a5c3f6bbde5p-996, 0.0, 0.0, 0.0, 0x1.04bcc4426eba2p-743,
     0x1.6b35f6664c29fp-225, 0.0, 0x1.d0800811dfb13p-629, 0.0, 0x1.47c55e1bfb8a5p-702,
     0.0, 0.0, 0x1.f75fb2583f8cep-442, 0.0, 0x1.3acc72bf238c6p-400, 0.0,
     0x1.a1e2c8d2b8b7ap-251, 0x1.57e420f4e4db8p-982, 0x1.f833f10f05dp-945, 0.0,
     0x1.3a65063c7f321p-72, 0x1.69f7fcc06c2a4p-337, 0.0, 0.0, 0x1.c045799b5073ep-869,
     0.0, 0x1.39a208dcdb783p-35, 0x1.a589723e9bb69p-47, 0.0, 0x1.80e67d852ed6fp-950,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a62750b7debap-934, 0.0, 0.0,
     0x1.1c0994c88e0c7p-104, 0.0, 0x1.7af2de90f4bdbp-989, 0.0, 0.0,
     0x1.0b7b51a847b25p-275, 0.0, 0x1.e815ea9d63123p-1013, 0.0,
     0x1.ae0e670a48379p-979, 0.0, 0.0, 0.0, 0x1.83c7a849c03bcp-573,
     0x1.716cd5e384c7ap-780, 0.0, 0.0, 0.0, 0x1.276aaa3615ae8p-449, 0.0, 0.0,
     0x1.e30a0c9981029p-51, 0x1.54bfde3bd026ep-921, 0x1.339380f0141b1p-576,
     0x1.b1a43e5295b1bp-187, 0x1.e2dab93d8b057p-686, 0.0, 0x1.d55e8b76a7c62p-391, 0.0,
     0x1.53c70dd992667p-933, 0.0, 0.0, 0x1.4e6a14e3b2da7p-1018,
     0x1.6bddcac174de4p-485, 0x1.9f8750cb1bc6ap-141, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8ff5cea666d43p-417, 0.0, 0x1.14bc1c43b0592p-254, 0.0, 0.0,
     0x1.54a3617177b47p-718, 0.0, 0x1.04b288023f795p-129, 0.0, 0.0,
     0x1.d7495b1f89562p-327, 0x1.4590cc0cf084fp-492, 0x1.ad7f6cb1ec933p-676, 0.0, 0.0,
     0.0, 0x1.edeac4723158ap-395, 0.0, 0.0, 0.0, 0x1.c0ec653777e7cp-559,
     0x1.418c868e47a12p-274, 0.0, 0x1.98c69edd7598dp-173, 0x1.e6080f2c65a84p-396, 0.0,
     0.0, 0x1.af66fdc85f797p-614, 0.0, 0.0, 0x1.ae2d9b9b95cb2p-752, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dc072f9b8398ap-801, 0.0, 0.0, 0.0, 0.0,
     0x1.53880d2bc4ed9p-333, 0.0, 0.0, 0x1.93668bb2eb4f3p-956, 0.0,
     0x1.558fe1202003p-701, 0.0, 0x1.8d1576ddba8ep-412, 0.0, 0.0,
     0x1.4ec8063c0632ap-183, 0x1.62ea1e728733fp-100, 0.0, 0x1.17398c891c237p-743,
     0x1.3a65743dd42d1p-543, 0.0, 0x1.fbcb13558f078p-105, 0x1.e3ecd10b43f45p-160,
     0x1.d564ea3ebd69bp-550, 0x1.40853472f633ep-110, 0.0, 0x1.79b0fbb1cc7f5p-35,
     0x1.b57f683556681p-320, 0.0, 0.0, 0x1.caf85f9402562p-832,
     0x1.a859d432c0134p-1007, 0x1.33f4cae493c25p-499, 0x1.405616593d85ep-518, 0.0,
     0x1.e1e0097d321dap-1013, 0.0, 0.0, 0.0, 0x1.754b49eb3b7c1p-546,
     0x1.bef53d6564246p-890, 0.0, 0x1.727ebcd47e12dp-229, 0x1.5664e858d150dp-623, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e68e64061b643p-453, 0.0, 0x1.85306df16faedp-127, 0.0,
     0x1.e05ae88a8fb08p-606, 0x1.2e06bc3cedeefp-119, 0x1.002aafed7b2acp-474,
     0x1.a93f963ff8b81p-691, 0x1.23909f611db54p-425, 0x1.53dd6f87ec231p-154, 0.0,
     0x1.c6649183a9a13p-897, 0.0, 0x1.6ccef4cef758dp-724, 0.0, 0x1.c3a7c5e751128p-946,
     0x1.b6e20afe38153p-167, 0x1.6dfd96c47ad48p-97, 0x1.7df144bf23e6p-794, 0.0,
     0x1.810c38a3a6cep-244, 0.0, 0x1.a9dc0ff07ba38p-217, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f0f09df30c212p-119, 0x1.1b39faa17a056p-202, 0.0, 0x1.f50a911688303p-789, 0.0,
     0.0, 0.0, 0x1.eca556949afe3p-102, 0x1.030db6802a70ap-738, 0.0, 0.0, 0.0,
     0x1.cc9f09e27e639p-553, 0x1.a6989089ba7fap-1008, 0.0, 0.0,
     0x1.a71ac1f4dcca1p-758, 0.0, 0.0, 0x1.3b24805442adfp-236, 0x1.266749aa5f76p-712,
     0.0, 0x1.9b78a8b111112p-894, 0.0, 0.0, 0x1.48eeb431d1e83p-175,
     0x1.d4230aac5509cp-798, 0.0, 0.0, 0x1.d357b476b8dep-524, 0.0, 0.0, 0.0,
     0x1.c862763c4bda4p-788, 0x1.5926d19817b61p-394, 0.0, 0.0, 0x1.ee77849634e33p-50,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b83b47c0ac6f1p-426, 0x1.8eb345fd8b321p-827,
     0x1.40e459d644d7fp-297, 0.0, 0x1.98a4aef552263p-920, 0.0, 0.0, 0.0,
     0x1.f6f3ff89c8215p-160, 0.0, 0.0, 0x1.9fc304157189ep-213, 0x1.db20914a5f67p-720,
     0.0, 0x1.bf8397ca5fe52p-834, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ad277388fe39p-501,
     0.0, 0.0, 0.0, 0x1.abe68d5df1684p-733, 0x1.cd0e86d245828p-159, 0.0, 0.0, 0.0,
     0x1.f4ebe291e9598p-974, 0x1.9f6a16071ceccp-828, 0x1.7bb4c1ca21db5p-870, 0.0, 0.0,
     0.0, 0.0, 0x1.df9981ef81054p-483, 0x1.7ccf77b29b279p-159, 0.0,
     0x1.1976cb9e2c7adp-732, 0x1.7f9e88e784dcdp-316, 0.0, 0.0, 0.0, 0.0,
     0x1.9b996650fbee8p-352, 0x1.930923bc2ee1dp-345, 0x1.ce91e1b487e02p-129,
     0x1.ab645dbea446ap-806, 0.0, 0x1.32339724a90fbp-709, 0x1.9afa562835b56p-179,
     0x1.e37fc6183c0f2p-697, 0.0, 0x1.4d3ea085e6eb1p-594, 0.0, 0x1.c8c1f8a1b75cep-897,
     0x1.d31ca475b2221p-916, 0.0, 0x1.12f37bf490985p-570, 0.0, 0x1.dd6a5bb0f2b12p-452,
     0x1.d7fcc8a00b9f9p-613, 0.0, 0x1.ff3459c13b121p-672, 0.0, 0x1.cdcd794bef6bdp-94,
     0x1.b0ff57bc7d4ccp-900, 0.0, 0.0, 0.0, 0x1.87d72a8b87087p-35, 0.0,
     0x1.9fcc468ace61fp-883, 0.0, 0.0, 0x1.706654c7b0772p-745, 0.0,
     0x1.95896283cce29p-274, 0x1.d6ad5e36ca547p-684, 0.0, 0x1.c96ad5af3e66ep-787, 0.0,
     0.0, 0.0, 0x1.e274d9d888a92p-520, 0.0, 0x1.dabe6f77dfae1p-890,
     0x1.7143ac2fde86ep-739, 0x1.70787e2254d6ep-179, 0.0, 0x1.febae56522e0ep-682, 0.0,
     0.0, 0x1.e4c7f5086abd9p-17, 0x1.3d04d47f94d9fp-464, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.837533c04caa1p-207, 0.0, 0x1.9ac33db2833fp-735, 0x1.64a2cc3700068p-964, 0.0,
     0x1.782001913bacep-736, 0x1.35e01f1243d55p-936, 0x1.382ae5c19699p-696, 0.0, 0.0,
     0x1.e19265ef09a5cp-638, 0.0, 0x1.e8a209c795f5ap-942, 0.0, 0.0, 0.0,
     0x1.8d78525e5034bp-966, 0x1.fa523ad76ba09p-260, 0x1.628c57cffce52p-877, 0.0,
     0x1.74a0ecd527656p-242, 0x1.e6cfc76672d7ap-749, 0x1.402f26ebe02b6p-807, 0.0, 0.0,
     0.0, 0x1.f80dc3b17ad4ep-79, 0x1.f75d233714a9p-247, 0x1.c9589db228b05p-563, 0.0,
     0.0, 0x1.c46a388559ed3p-224, 0x1.488ae2fe43192p-798, 0.0, 0x1.6221cc570947fp-275,
     0.0, 0.0, 0x1.63e9cacae2ca5p-646, 0.0, 0.0, 0x1.afb8880f368cap-603, 0.0, 0.0,
     0x1.2651db48a85abp-994, 0.0, 0x1.61946e6190cb7p-762, 0x1.c0aa3e23cbbbdp-764, 0.0,
     0.0, 0.0, 0x1.752e6dc4e3ebcp-421, 0.0, 0.0, 0x1.2465978cd992ep-98,
     0x1.45d0db7cbf36cp-683, 0x1.3bf558d758253p-939
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
            tmp1 = Sleef_tanhd4_u35kvx(tmp0);
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
    printf("Sleef_tanhd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanhd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
