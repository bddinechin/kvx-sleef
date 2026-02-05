/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd4_u35kvx.c --function \
 *     Sleef_finz_cbrtd4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.e2d52d768747ap-408, 0.0, 0x1.fbe710ab9ea09p-217, 0.0, 0.0,
     0x1.0b263a9e9bec9p-367, 0.0, 0x1.cff0dd9603bbp-211, 0.0, 0.0,
     0x1.518a1025cb01cp-304, 0.0, 0.0, 0.0, 0.0, 0x1.61e332e253ed2p-403, 0.0,
     0x1.b5639b84c0737p-972, 0x1.1ecf6e84ed094p-846, 0.0, 0x1.428ebd9fe44f2p-1005,
     0.0, 0x1.b29fe061c200ep-422, 0.0, 0x1.11aef6a8cca87p-799, 0x1.a3d4421a76b66p-254,
     0.0, 0.0, 0x1.7c7defec7dc57p-686, 0.0, 0.0, 0x1.89cc77ef697bbp-488,
     0x1.e01abad6ba10dp-87, 0.0, 0.0, 0x1.47a7dca54ba6dp-551, 0x1.a31706d1fa39cp-950,
     0.0, 0x1.d2fa542d3ad9ep-415, 0.0, 0x1.d848db03e774ep-974, 0x1.eb67199e7985fp-75,
     0.0, 0x1.cfd813687fafap-138, 0.0, 0.0, 0.0, 0x1.04909374690abp-99,
     0x1.73d525458f11bp-800, 0.0, 0.0, 0x1.dc8eeb6509e94p-676, 0x1.8d9f089b0dbfap-63,
     0.0, 0.0, 0.0, 0.0, 0x1.fd7b6809908ccp-619, 0.0, 0x1.7d458d3066d36p-183, 0.0,
     0x1.5876439ede6f6p-795, 0x1.f538e32c95f5ep-686, 0x1.2bb7e84eb194fp-152, 0.0,
     0x1.c8f5a9e7f1e37p-391, 0x1.4161b7dc1c897p-42, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ff677afddc9cap-659, 0x1.cf04b542617a4p-646, 0.0, 0.0, 0.0, 0.0,
     0x1.c720a3eca8c83p-959, 0x1.7d2582f07947cp-214, 0.0, 0x1.e17e3e9648a6bp-657, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63719811d1351p-747, 0.0,
     0.0, 0x1.1ce09dd3a9049p-538, 0x1.b6e8fac2697a4p-1000, 0x1.f922605bde238p-328,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f2a4b72358bep-30,
     0x1.16b894750dbcdp-967, 0.0, 0.0, 0x1.6141c39c605a8p-505, 0x1.d963470ef659bp-140,
     0.0, 0.0, 0x1.f94b6f47a81eep-567, 0.0, 0.0, 0x1.a1cb6c3c2ceaep-812,
     0x1.df02c349f5338p-688, 0.0, 0.0, 0.0, 0.0, 0x1.43072cbbdfe1dp-4,
     0x1.d051f16c4ca0dp-867, 0.0, 0.0, 0x1.fb40adb80743dp-121, 0x1.59bac7886e87bp-805,
     0.0, 0x1.d21b32ff636p-805, 0x1.c9688c55d97ddp-781, 0x1.44f1fc34d278dp-661,
     0x1.da2518c3b7fc6p-11, 0x1.753477978f80bp-534, 0.0, 0.0, 0x1.dffe16b5c9b71p-619,
     0.0, 0x1.f9d10518bda1dp-801, 0x1.414c7511db981p-395, 0.0, 0x1.2838c2666363ep-518,
     0x1.e368441a8a265p-92, 0.0, 0x1.8a12994ea2654p-459, 0.0, 0x1.4c68d4b837c95p-818,
     0.0, 0x1.59673b03a5c1p-667, 0.0, 0.0, 0x1.65c155122477bp-467,
     0x1.14c418b72d4dfp-959, 0.0, 0x1.0a9ae8b058102p-626, 0x1.f4aa697f74b3fp-977,
     0x1.f3cee75efda49p-727, 0x1.c21c68c2efb7cp-754, 0x1.fac0ce7b0f1b9p-305,
     0x1.64f565631b58dp-1012, 0.0, 0.0, 0x1.a44e0622fa4fcp-3, 0x1.5245363f3025ap-221,
     0.0, 0x1.8c272a4e73bc5p-225, 0x1.8046db1d3be7cp-164, 0x1.c52dd77a8df2ap-576, 0.0,
     0.0, 0x1.2ec67dcb93e56p-662, 0.0, 0x1.7368d9fa49c6ap-869, 0.0,
     0x1.9af872cdcb8e7p-1018, 0x1.f136714a3bffep-887, 0.0, 0.0,
     0x1.f74b19d95dd15p-104, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0x1.048357530499ap-709, 0.0,
     0.0, 0.0, 0x1.b77e0bcccfbf2p-225, 0x1.120bbebe7d051p-76, 0.0, 0.0,
     0x1.afa20038b8a9dp-292, 0x1.c544b3a0a4ce2p-310, 0.0, 0.0, 0x1.e871d2e2ff833p-17,
     0.0, 0x1.5ecb3996cfe0bp-131, 0x1.d7d5aef302193p-143, 0.0, 0x1.8d6ede927d32p-484,
     0x1.dcd6ee3605a5p-421, 0.0, 0x1.f45f912f92656p-855, 0.0, 0.0, 0.0, 0.0,
     0x1.0c5ce71f86e6bp-121, 0x1.263a75cfa399bp-155, 0.0, 0x1.a1442128a84aep-684, 0.0,
     0x1.a0b664785920cp-768, 0x1.c8eda751a0dc6p-500, 0x1.f5c1a02b166c7p-155,
     0x1.805cfd7470ca4p-841, 0x1.46d2801ee75bcp-875, 0x1.570c1f7f3949cp-791, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.341a744b28368p-460, 0x1.cc09e6f8665bp-545,
     0x1.b97a3ce7e2d5bp-780, 0.0, 0x1.be58a60ef872ap-857, 0x1.6651a46c8971cp-290, 0.0,
     0x1.fcc50c40eea39p-310, 0x1.ceb0f74288852p-462, 0x1.7d0131613fccbp-21,
     0x1.157925354cdbdp-105, 0x1.294e5ad2500efp-630, 0.0, 0.0, 0x1.d00442c3be7dfp-98,
     0x1.ebb447f70e67ap-164, 0x1.6e976b4ee8a62p-323, 0x1.e0fff5593d245p-328,
     0x1.723d37e9fc691p-138, 0x1.e8edfb4e93c14p-11, 0x1.6f7a98684a53ap-741,
     0x1.0a43bb154af4bp-54, 0x1.7fd894b349bd8p-600, 0x1.3a96e24d4cbc8p-519,
     0x1.0e28706b5b776p-176, 0x1.b854f5f70fbe2p-285, 0x1.1a116a19519e2p-956, 0.0, 0.0,
     0.0, 0x1.89248162547a7p-93, 0x1.beec5342224a7p-833, 0.0, 0x1.c1928fc6f8f8fp-833,
     0.0, 0x1.efafa1994b2f9p-666, 0x1.5f964bdcefb5fp-215, 0.0, 0.0,
     0x1.1ee12fa124095p-916, 0.0, 0.0, 0x1.4af5f7aa21cabp-997, 0x1.e45f1f1175d5ep-277,
     0.0, 0.0, 0x1.cf0eb38dfeecdp-886, 0x1.cd540a0fb1542p-705, 0.0, 0.0, 0.0,
     0x1.b1d3172cec761p-140, 0.0, 0.0, 0.0, 0x1.e42a8dbb3981bp-938,
     0x1.85ddad89ec593p-443, 0x1p0, 0.0, 0.0, 0.0, 0x1.393232e70e6cap-850, 0.0,
     0x1.70b32ee3bd437p-930, 0.0, 0x1.2764405858d4ap-590, 0x1.4b8fcb7071c2bp-278, 0.0,
     0.0, 0.0, 0.0, 0x1.6d9035680e80bp-724, 0.0, 0x1.bf692402fe83dp-371,
     0x1.de73fc2241ceep-833, 0x1.a0a0f49fa8d23p-760, 0x1.f5c105251fe3ep-783, 0.0, 0.0,
     0x1.cbf6798ccdff1p-351, 0.0, 0x1.4aa17c84a9f72p-693, 0.0, 0x1.c3b688f5d6aadp-49,
     0.0, 0x1.518a30c615473p-573, 0.0, 0.0, 0x1.c06d25acaf098p-465, 0.0,
     0x1.d0b0e2c4ed344p-81, 0.0, 0x1.64b19a2f6b42ap-372, 0.0, 0.0,
     0x1.8ef3dfb348972p-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34a55e8835ffap-329,
     0x1.5af4988ad7e3bp-240, 0.0, 0x1.947e81914afadp-504, 0.0, 0x1.04621aece3c05p-859,
     0x1.2f74df386c92ap-221, 0.0, 0x1.1416379332d7fp-242, 0.0, 0x1.ec45018e3cfb7p-577,
     0x1.99081d2b21da4p-2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6c2062e75ec1p-261,
     0.0, 0x1.3c3669a6aee0ap-530, 0.0, 0x1.45dce2a175d2p-505, 0.0,
     0x1.5d5cecfe39443p-697, 0.0, 0x1.4967e67b1ecf8p-462, 0.0, 0.0, 0.0,
     0x1.45642fcf2a487p-557, 0x1.11acfbdf79319p-967, 0x1.b8e49037feda6p-173,
     0x1.8da7193d61465p-645, 0.0, 0x1.3ff355183f4ebp-993, 0.0, 0.0, 0.0,
     0x1.c534a99ea787dp-376, 0.0, 0x1.72a8a1cc56a43p-752, 0x1.384428a8e86eep-240,
     0x1.c0b326aeb574ap-870, 0x1.6d7b6b3bf9c79p-367, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.32d54b9d20d96p-44, 0x1.6aeeb0a403cd3p-205, 0x1.33cb49e0d2bfdp-552, 0.0,
     0x1.0ebcf046fe617p-211, 0x1.1240a658ee0dap-23, 0.0, 0.0, 0.0,
     0x1.a867895a30115p-730, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0010c637d3876p-645, 0x1.d64a76da638aep-507, 0x1.fb772fa24b054p-189,
     0x1.063752db84623p-73, 0x1.7637269cab802p-760, 0.0, 0x1.f06ada7f4c8e6p-469, 0.0,
     0.0, 0.0, 0x1.541082fe25989p-714, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6279709c10827p-915, 0x1.030f97d6f0b48p-647, 0x1.620b79da63c4cp-890, 0.0,
     0x1.46c78a2df4051p-121, 0.0, 0.0, 0x1.28aae682e94e6p-640, 0.0, 0.0,
     0x1.5613092a0469cp-457, 0x1.2f2d27c42567bp-567, 0.0, 0x1.767f1be8c32c6p-7,
     0x1.636c6791f2e5ap-928, 0x1.d7bae21be0825p-847, 0.0, 0.0, 0x1.565687998ce94p-994,
     0.0, 0.0, 0.0, 0x1.5b81ce6fac06dp-333, 0x1.366031a8e23fcp-954,
     0x1.cfd4973f15ecbp-513, 0x1.f5d2bc472cf16p-107, 0x1.38167145fba1fp-587, 0.0,
     0x1.78fc1521105adp-340, 0.0, 0.0, 0x1.936f53a637f91p-243, 0.0,
     0x1.152a65a35c53p-879, 0.0, 0x1.faae7842f8b13p-887, 0x1.e6153d0ae662cp-389,
     0x1.6fe38e9bedfa3p-612, 0.0, 0.0, 0x1.8838593303b8bp-79, 0x1.a376e88a795acp-436,
     0x1.8d642678f9febp-727, 0.0, 0.0, 0x1.ac2bd3c8f9ea7p-966, 0x1.364d468bf185bp-33,
     0x1.0d95fc1ad35f2p-295, 0x1.297395e58a375p-714, 0x1.aa722bbfcb383p-277, 0.0, 0.0,
     0.0, 0.0, 0x1.a4b6d39a33ca3p-177, 0.0, 0.0, 0.0, 0x1.46405160d26fcp-405, 0.0,
     0.0, 0.0, 0.0, 0x1.c153f889908dfp-894, 0.0, 0x1.41323c7a1c0c1p-983, 0.0, 0.0,
     0x1.dcb4d51c6e962p-652, 0x1.92a326ed24e8bp-746, 0x1.6aa625060cc3p-619, 0.0, 0.0,
     0.0, 0x1.dcbdd7ad146d1p-645, 0x1.93b4bdf7af0fep-776, 0x1.21c8001f4d551p-558, 0.0,
     0x1.b3e5858722a07p-363, 0x1.1e4931e685554p-755, 0x1.92472b5077242p-931, 0.0, 0.0,
     0x1.c4b71070c3654p-493, 0.0, 0x1.bd9bd32054034p-545, 0.0, 0.0,
     0x1.f6d9a99ce5329p-960, 0.0, 0.0, 0x1.29be37f90cc08p-329, 0.0, 0.0,
     0x1.3f24f49fb7366p-378, 0x1.78247bc2d3a73p-366, 0x1.deab3f58cc636p-746, 0.0, 0.0,
     0x1.1d10d449936cep-214, 0.0, 0.0, 0x1.6dd7572d1d081p-246, 0x1.2f7f662e99b08p-574,
     0x1.9f195f138d698p-577, 0x1.5da7fbe6d3439p-397, 0.0, 0.0, 0x1.838717d107b3ep-749,
     0x1.0f7a62c66e2d1p-232, 0.0, 0x1.a4cada190696fp-347, 0.0, 0x1.e9513e9ed51bap-552,
     0.0, 0x1.3d59121cb01ap-286, 0.0, 0x1.dc03bfd5ccb67p-10, 0x1.384ba43d35abp-583,
     0x1.7be51fc4e0699p-979, 0x1.fb7f55132b3adp-457, 0x1.ea679e391d1ap-550, 0.0, 0.0,
     0.0, 0x1.8ce8f43427302p-851, 0.0, 0x1.d5a043504cfa8p-420, 0x1.7ff785ca5e132p-943,
     0.0, 0.0, 0.0, 0.0, 0x1.cc043a74eb0f6p-73, 0.0, 0.0, 0.0, 0.0,
     0x1.32489897d2e4fp-55, 0x1.4c2a7fb3face2p-1012, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ab02934034704p-297, 0x1.5a22738913967p-493, 0x1.2deb35c468e64p-395,
     0x1.5dca63d3ae051p-174, 0.0, 0x1.b01466dea5fb3p-523, 0.0, 0x1.48bccf40c2d48p-917,
     0x1.16896793f92b1p-734, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a343db0bb9e9p-151,
     0x1.bfc67e3553ee2p-912, 0x1.1a26885c85807p-566, 0.0, 0x1.7261b282268bp-368, 0.0,
     0x1.7ff75cb500cdep-996, 0x1.7ef40bf2ac7b4p-859, 0.0, 0x1.2178462a2a4b8p-1007,
     0x1.c529a1880976dp-771, 0.0, 0.0, 0x1.f5addf4c6d0afp-2, 0.0, 0.0,
     0x1.5f6542dc45defp-204, 0x1.f4ac8f34ba5d9p-203, 0x1.90f2d4a960b33p-479, 0.0,
     0x1.dd7a1d837ba28p-282, 0x1.a5bcb0dd0530ep-900, 0x1.f0e2cbb2a39ebp-599, 0.0,
     0x1.a2eecc1c17528p-647, 0.0, 0.0, 0.0, 0.0, 0x1.d6141fe1c946ep-676,
     0x1.e912aa65c7bdp-440, 0x1.7159ed5ef85f7p-541, 0x1.843d920c8339bp-586,
     0x1.b205a985c6c54p-44, 0x1.9bbcadf207e88p-577, 0.0, 0.0, 0.0, 0.0,
     0x1.56e83e3af0075p-342, 0x1.3f0028799b1c5p-661, 0.0, 0x1.bdcf1059fa51p-399, 0.0,
     0x1.0def93516e027p-584, 0.0, 0x1.858e7c9c8d51fp-906, 0x1.63289ed00359ep-165,
     0x1.67c2e5e53109cp-369, 0.0, 0x1.41f49079e855ap-629, 0.0, 0x1.b0e73b90a4d05p-394,
     0x1.5a63ac6530d07p-320, 0x1.3de9989436c53p-658, 0x1.3bbc195473aa8p-43,
     0x1.46d95857cbe85p-160, 0x1.1b365624dd829p-377, 0.0, 0.0, 0x1.ec5137a9decc5p-163,
     0x1.3289b98d17b68p-118, 0x1.8c02818e78d5fp-997, 0.0, 0.0, 0x1.b96ab9128ad9ep-922,
     0x1.85a2d45253fbfp-931, 0.0, 0x1.3c6a0101dae64p-108, 0.0, 0x1.44494eef8ef7cp-723,
     0x1.1c19c3d35ebd2p-353, 0.0, 0x1.532ac35286802p-168, 0.0, 0.0,
     0x1.e9f5406c851bfp-460, 0.0, 0.0, 0.0, 0.0, 0x1.85e03827911cfp-594,
     0x1.59a886e488c42p-1019, 0x1.7a75fb9387e89p-910, 0x1.83add78681208p-263,
     0x1.633c507f26affp-490, 0.0, 0.0, 0.0, 0x1.e848704e227e9p-408,
     0x1.126db6bf19598p-228, 0.0, 0x1.b347b7b31b9f8p-960, 0x1.6a04d8a9a01a1p-521, 0.0,
     0.0, 0x1.70705fa705f4ap-912, 0x1.235fc7d9b401fp-74, 0.0, 0x1.10e2be168aa4fp-644,
     0x1.5d017433e85c3p-217, 0x1.15a601c2a7f6p-489, 0.0, 0.0, 0.0,
     0x1.20ee94fab6aabp-813, 0x1.b6aee6f65db28p-238, 0x1.ceba696d4c1p-756,
     0x1.3c0dc410a6b6cp-208, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6b2ca6f4ecbfp-620,
     0x1.d002191b2e7ffp-609, 0.0, 0.0, 0.0, 0.0, 0x1.3ee7c3f37694bp-847, 0.0, 0.0,
     0.0, 0x1.402cd1af692bp-992, 0x1.794cbfcaa84ffp-52, 0.0, 0x1.b0035726641efp-438,
     0.0, 0x1.46d31d4374ae2p-767, 0.0, 0x1.5017652191086p-864, 0.0, 0.0,
     0x1.4369b79ea4379p-529, 0.0, 0.0, 0.0, 0.0, 0x1.d93bca539409bp-294, 0.0, 0.0,
     0.0, 0x1.e0a0213ca4b2p-1021, 0x1.8d769de15b7cfp-167, 0x1.11a10c0054abbp-487, 0.0,
     0.0, 0.0, 0x1.600938f3a89dap-707, 0x1.50332c6d4582dp-530, 0x1.28538fada28a5p-483,
     0.0, 0.0, 0.0, 0x1.9f9b58a8e2cb5p-290, 0.0, 0x1.89d9520f1fb4ep-214,
     0x1.52c2a96ef79d1p-688, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae37181698ba8p-292,
     0x1.ce6528a9cdd35p-951, 0.0, 0x1.42d1212961f61p-547, 0x1.bbf274f224651p-417,
     0x1.46bd98618df1ap-75, 0.0, 0.0, 0x1.21e94ddb6108ap-255, 0x1.5eb63ff238174p-231,
     0x1.15af0f1476afp-548, 0.0, 0x1.61a1c28ac0632p-623, 0x1.43af54decfa5ep-159,
     0x1.9fea881ddb2b8p-844, 0.0, 0.0, 0x1.41babd36a405bp-530, 0.0, 0.0,
     0x1.1af641ca5ddf1p-791, 0x1.5f593b5dde6b3p-165, 0.0, 0x1.481e00476b7d5p-371, 0.0,
     0.0, 0.0, 0x1.bdc6bc9f2e3d1p-810, 0x1.14a8c9feb8368p-1004, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1aa398ade44c7p-620, 0x1.2fe9bf2a96c6bp-48, 0x1.c0f628dbd0e45p-41,
     0x1.51753d197aacfp-45, 0x1.7f952d00c90ffp-324, 0.0, 0.0, 0x1.275402ae56baap-707,
     0x1.5acf533ce1ac9p-94, 0x1.8b93ceb949941p-782, 0x1.4aabf8ba230b2p-781, 0.0, 0.0,
     0.0, 0x1.a663651cd8f18p-774, 0.0, 0.0, 0x1.b49f90f8505a3p-802, 0.0, 0.0,
     0x1.b19dbad59d58dp-91, 0.0, 0.0, 0.0, 0x1.001df25bb3008p-724,
     0x1.2bb45f1a8725cp-4, 0x1.df8e0317a80e7p-836, 0.0, 0.0, 0x1.88274f783e5eap-141,
     0.0, 0x1.34a13f96a22dep-694, 0x1.78ea23c365d09p-9, 0x1.51a87d8647959p-661, 0.0,
     0x1.5970b6f3cff77p-546, 0x1.9a55678556b54p-994, 0x1.e1b91d420a35cp-941, 0.0,
     0x1.a6424099cdff2p-347, 0x1.d28ae492705aep-909, 0.0, 0x1.40edb1cfe2df5p-247, 0.0,
     0x1.f9966a07f127bp-921, 0.0, 0x1.f6359b5bef3a3p-962, 0x1.6bab0abff7dcbp-100,
     0x1.9addc2a698f03p-464, 0x1.2883f904dcf99p-737, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e80d9d1d32f01p-864, 0x1.fddcc0a9f26e2p-789, 0.0,
     0x1.00bdb01814a23p-833, 0.0, 0.0, 0x1.bfb38ec9b9ca5p-841, 0.0, 0.0,
     0x1.cf3726e5cc6ebp-1004, 0.0, 0.0, 0x1.d789cd20d6ff1p-825, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.15d08bc50b90cp-78, 0.0, 0x1.5b76cbb7f7c89p-429,
     0x1.60ac49cc75c62p-553, 0x1.b482de74f847dp-569, 0x1.f291ecb972da8p-386, 0.0,
     0x1.1b4de1cebb27dp-532, 0.0, 0.0, 0x1.9639d5e02783ap-336, 0x1.9655f1543ad82p-762,
     0x1.acb8864f0911ap-584, 0.0, 0.0, 0.0, 0.0, 0x1.36249f95cde42p-747,
     0x1.ff013da3e2556p-685, 0.0, 0.0, 0x1.35d2d5f0e3669p-612, 0.0, 0.0,
     0x1.2cc7585fcbeddp-882, 0.0, 0x1.9bd5a25fe10f4p-280, 0x1.6230f0463d55dp-492,
     0x1.38f684e68ac46p-312, 0.0, 0x1.872ec7d1dd80dp-379, 0.0, 0x1.160c9322ee631p-836,
     0x1.ef214b469206ep-855, 0.0, 0x1.8ade01e6ebbd4p-601, 0x1.3f50bf3cf9e9p-613, 0.0,
     0x1.3f610d4efa844p-589, 0x1.5bdb1aa8976e3p-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.547343dc0ec18p-187, 0.0, 0.0, 0x1.fd752ea0df32dp-507, 0x1.6bf00e966544bp-801,
     0x1.44362f2f227f7p-305, 0x1.32afd6666bcc5p-726, 0.0, 0x1.6793b170a74f7p-984,
     0x1.fc5bc96b40d84p-362, 0.0, 0x1.d28c19fc62a96p-424, 0.0, 0.0,
     0x1.0c6e186f7d522p-482, 0x1.d3c3c9febfdeap-282, 0.0, 0x1.32912f99a6915p-351,
     0x1.04863f8a9f57fp-1003, 0x1.2ca069981a91ep-22, 0.0, 0.0, 0.0, 0.0,
     0x1.6cb9231b5513ep-170, 0.0, 0.0, 0.0, 0.0, 0x1.1a26f3742bdb2p-824,
     0x1.fab838290d3a2p-331, 0.0, 0x1.30c48d3be502bp-231, 0.0, 0.0, 0.0,
     0x1.2501805f05fdfp-458, 0x1.73e6b1d2522fp-104, 0.0, 0x1.dec595dab76f6p-76, 0.0,
     0.0, 0x1.b02b4a02b8c7ap-381, 0.0, 0.0, 0.0, 0x1.339ed8df6a57bp-991, 0.0, 0.0,
     0x1.e24c48debbb4cp-41, 0x1.eb77b73230ba3p-615, 0x1.b7dfabd5b085ap-1006, 0.0, 0.0,
     0.0, 0x1.a5746fd49de76p-749, 0x1.7c89d5a12854bp-748, 0x1.975b6c492b691p-813, 0.0,
     0.0, 0x1.d28882589b90fp-951, 0.0, 0.0, 0x1.2c2d0e9c3ebc3p-464, 0.0, 0.0,
     0x1.e808a0593b306p-160, 0.0, 0.0, 0x1.d2b73e5f8189bp-96, 0.0, 0.0, 0.0, 0.0,
     0x1.7ae191f3646d2p-424, 0.0, 0x1.c804296c7c489p-261, 0x1.71dadd1cf7c42p-359, 0.0,
     0x1.65dc8d667bf71p-84, 0x1.65444c6354581p-94, 0x1.5d61309c51682p-496,
     0x1.fb12611912c27p-1012, 0.0, 0.0, 0x1.e3e304ee7da42p-253, 0.0, 0.0,
     0x1.31f00f6a273c1p-274, 0.0, 0x1.545ec2209d56dp-619, 0x1.d9b27848a1bp-139,
     0x1.133f9402445fp-749, 0x1.a2d6995dbe917p-105, 0x1.ab4b3165e1fdfp-489, 0.0, 0.0,
     0x1.2a16b4d573d33p-534, 0x1.a4ad649369c3cp-815, 0x1.c45ab3642278fp-1004,
     0x1.73657ab2340dbp-368
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
            tmp1 = Sleef_finz_cbrtd4_u35kvx(tmp0);
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
    printf("Sleef_finz_cbrtd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
