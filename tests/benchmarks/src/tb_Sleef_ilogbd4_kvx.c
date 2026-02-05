/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ilogbd4_kvx.c --function Sleef_ilogbd4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --vector-size 4 \
 *     --function-input-vector-size 4 --precision int32 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int4_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
static const ml_int4_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.f26ad0137a07cp-353, 0x1.5072a7e57ff3dp-540, 0.0, 0x1.e95dad15f580ap-87,
     0x1.d4428c161d0d4p-146, 0.0, 0x1.3b85662f8cfeep-287, 0x1.633a2ad4b2e92p-619,
     0x1.39acd1b55913p-938, 0.0, 0.0, 0.0, 0x1.9d30a64f8997cp-324, 0.0, 0.0,
     0x1.197caffd3e422p-999, 0x1.13c18da41fcdbp-292, 0x1.098fc5cffbb0cp-723,
     0x1.b2c32f4f81a0cp-1015, 0.0, 0x1.aed7229227df8p-37, 0.0, 0.0,
     0x1.30c7dd81aeeaep-972, 0.0, 0.0, 0.0, 0x1.098dfe3af52c3p-779,
     0x1.1684c118f23cbp-926, 0.0, 0x1.01c8803d4077fp-498, 0x1.24b0941cb3418p-194, 0.0,
     0x1.28bbf91a3cf57p-689, 0x1.841ea9f862939p-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e04484c654f9cp-673, 0x1.94fff1cfeb49cp-873, 0.0, 0.0,
     0x1.485da747be6cp-539, 0.0, 0.0, 0x1.54bf850ac496p-4, 0x1.f2e632a554b22p-511,
     0x1.0537d8114880ap-739, 0.0, 0x1.0d6654f19f139p-762, 0x1.387eab093f977p-870,
     0x1.79d356e38cc8p-910, 0x1.4a43ef1b6ab5fp-353, 0.0, 0x1.fa887b134bf53p-98,
     0x1.80291fe1d484p-662, 0x1.a5c5d0d04eb01p-736, 0x1.1363b2d56b829p-879,
     0x1.01911ef085346p-578, 0.0, 0x1.fb6c577f64989p-398, 0.0, 0x1.da3dcea9ef89ep-911,
     0x1.99f4ee48b024p-605, 0.0, 0.0, 0x1.4ddaa7b6dd9abp-575, 0x1.7b022fabac9f7p-247,
     0.0, 0x1.12fcf127c6c1dp-959, 0.0, 0.0, 0.0, 0x1.6f3a5eca93916p-7, 0.0, 0.0,
     0x1.ca89a3bbb861ep-497, 0.0, 0.0, 0.0, 0.0, 0x1.880ad83a464d9p-928, 0.0,
     0x1.03e6a220c275bp-478, 0.0, 0.0, 0.0, 0.0, 0x1.3468660be4288p-1021,
     0x1.ca112d6125c62p-881, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6790f004c8c83p-1001,
     0x1.fb1faaf176d19p-333, 0.0, 0x1.212ed009f3c11p-296, 0.0, 0x1.0af174d0d8d7ap-144,
     0x1.bf630e47cb9f9p-653, 0.0, 0x1.02e8c4552dce6p-895, 0.0, 0x1.29750b85f926bp-998,
     0x1.a709937c1e9b9p-653, 0x1.d764dcb12812bp-232, 0x1.c0ad048555d9ep-465, 0.0, 0.0,
     0.0, 0x1.d97b8fa399a6dp-763, 0x1.a29c0adc8ae6fp-747, 0x1.19115d8d39142p-121, 0.0,
     0.0, 0x1.1ec55338df9ebp-779, 0x1.1cca67feb01fdp-681, 0.0, 0x1.5a95e75924628p-753,
     0.0, 0.0, 0.0, 0.0, 0x1.4c71fb3b83eb5p-365, 0x1.ac0ac529c1b9ap-321,
     0x1.0eec802a7384fp-327, 0.0, 0.0, 0.0, 0.0, 0x1.82d651c3ed9cbp-717, 0.0,
     0x1.60abdad645fbdp-204, 0x1.523fc99b43595p-564, 0x1.8f54685def8cap-345, 0.0,
     0x1.bac20761f9b26p-521, 0.0, 0.0, 0x1.89fc61449b916p-874, 0x1.72ebd4a54e7c9p-416,
     0x1.600fb571f17b1p-656, 0x1.0cf107c2b15eap-341, 0.0, 0.0, 0x1.a5ceee3756bd6p-914,
     0x1.e6f42b00205d4p-950, 0.0, 0.0, 0x1.3b5872dc3d8b4p-700, 0.0, 0.0, 0.0,
     0x1.b57ddc6277d7p-434, 0.0, 0.0, 0.0, 0.0, 0x1.c7018f9d4321dp-827,
     0x1.5a9916fd1b9a1p-711, 0.0, 0.0, 0.0, 0.0, 0x1.8b629feed3b3bp-306,
     0x1.c85045116417bp-321, 0.0, 0x1.3a8daa5c1ecc9p-752, 0.0, 0x1.dbf819e04675fp-873,
     0.0, 0x1.733f5a66ea777p-1007, 0.0, 0.0, 0x1.aace6d2c32d13p-365,
     0x1.d0d897ed08348p-344, 0.0, 0.0, 0x1.cb38fdc831ep-4, 0.0,
     0x1.9d850f6f97c54p-253, 0.0, 0x1.65915ce97d50dp-291, 0.0, 0.0, 0.0,
     0x1.2e6adab2201aep-835, 0x1.f15ab03f812b2p-36, 0x1.a361215240b31p-155,
     0x1.50c9db73382e4p-813, 0x1.94258f3f2decep-779, 0.0, 0.0, 0.0, 0.0,
     0x1.79fc7a1453827p-382, 0.0, 0.0, 0x1.cb5b18f6331c5p-199, 0x1.f7dda86c497acp-330,
     0x1.19eeaa0d13643p-579, 0.0, 0.0, 0x1.94f69238f92fdp-276, 0.0, 0.0,
     0x1.feb5e6ba14bc5p-1019, 0.0, 0.0, 0x1.1ea999d258516p-277,
     0x1.0e8915a723322p-107, 0x1.49048fc424c35p-87, 0x1.f6fc25dff4d4ap-40, 0.0,
     0x1.d099e57a20af1p-554, 0.0, 0x1.e9becd38b318ep-732, 0x1.5fa4010bb844ep-704,
     0x1.44dc9c5e6e1c4p-820, 0.0, 0x1.fcd94eff1e562p-286, 0.0, 0.0, 0.0,
     0x1.0a2a84600530fp-512, 0x1.546719a0469dcp-218, 0x1.c3e8e4991339dp-334,
     0x1.4423dd5dc53cap-563, 0x1.c533017053cbcp-746, 0x1.a64cd8569297ap-230,
     0x1.87524f25adb1cp-710, 0.0, 0.0, 0.0, 0x1.0faff11cb95edp-246, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6e09b4267d44bp-629, 0x1.4eff11115e3fap-986, 0.0, 0.0, 0.0, 0.0,
     0x1.e4678af1af736p-417, 0x1.3a6079bf611d2p-117, 0.0, 0.0, 0x1.b4b7d4029387bp-633,
     0.0, 0x1.4538ba79f2aa9p-235, 0.0, 0.0, 0x1.eb9b10340d56bp-240,
     0x1.c5a1768df2769p-962, 0.0, 0.0, 0.0, 0.0, 0x1.65c397e9aad68p-537,
     0x1.b5e2eb2e45664p-913, 0.0, 0.0, 0x1.a6f63e808dc67p-457, 0.0,
     0x1.a86f3ed65a172p-438, 0.0, 0.0, 0.0, 0x1.8b24b7ce689f2p-192,
     0x1.c3143b4d03dfp-434, 0.0, 0.0, 0.0, 0x1.1df8e3cf85d64p-320,
     0x1.d93bc06e12ebbp-667, 0.0, 0x1.2c123fc813832p-914, 0x1.c018e80ed8c69p-765, 0.0,
     0x1.b9c97f5ecf6f7p-144, 0.0, 0x1.04f0419bc7fb7p-762, 0.0, 0x1.057e53291622ep-509,
     0.0, 0x1.6e1e1dad12d68p-251, 0x1.f4e4d65530f7bp-434, 0.0, 0x1.80dac76ee7239p-465,
     0.0, 0.0, 0.0, 0x1.23c790b6bebfap-711, 0x1.d97fff123ecf6p-516, 0.0, 0.0, 0.0,
     0x1.afb1b133fef3cp-188, 0x1.389931a9f0eb4p-573, 0.0, 0x1.764ae9fac5d04p-192,
     0x1.c001e8adbd0c2p-403, 0.0, 0x1.ea7437cf34dafp-66, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c5707e4700b45p-274, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4cc074bd95c02p-374,
     0x1.7cd5b50e2230dp-862, 0.0, 0.0, 0x1.266bac7e1f162p-508, 0x1.81d47b331f54dp-858,
     0x1.323c85f91d64fp-502, 0x1.0a7fe76346d8ep-34, 0.0, 0.0, 0.0, 0.0,
     0x1.6d5f6fcafe9e4p-4, 0.0, 0.0, 0x1.f9eca66d5f48ep-888, 0x1.0f73dba76281ap-372,
     0x1.e39289a25c1c2p-305, 0.0, 0x1.2776def61aedcp-925, 0.0, 0.0, 0.0,
     0x1.893e8ced1b578p-195, 0x1.ddbff43564018p-545, 0x1.434f2de483c5ap-957, 0.0,
     0x1.8c585900a89e2p-814, 0.0, 0.0, 0.0, 0.0, 0x1.66e3eb9476b36p-109, 0.0,
     0x1.b570b7008fbb3p-237, 0x1.f6f94cfb58117p-499, 0x1.1dfc9bb0fce6fp-40, 0.0, 0.0,
     0x1.af8c662a1de5dp-444, 0.0, 0x1.bbeadb3c9e4c1p-210, 0.0, 0x1.e49549452dbecp-939,
     0x1.6a1c8f6fee1a1p-764, 0.0, 0.0, 0x1.1eca11906501dp-6, 0x1.76636ee3a91a9p-510,
     0.0, 0.0, 0.0, 0x1.0a4d05e15fa6ap-552, 0.0, 0x1.6863e6a057b67p-569,
     0x1.d7dfb2ffa1d05p-335, 0.0, 0.0, 0x1.de89a1124d336p-666, 0x1.b537d8ee63b01p-716,
     0.0, 0.0, 0.0, 0.0, 0x1.7a2ec28443f08p-538, 0.0, 0x1.638fea2f00efdp-192, 0.0,
     0x1.82921d729f5c1p-333, 0.0, 0x1.c617bebff5452p-162, 0x1.4a39dfeed762fp-402, 0.0,
     0x1.621cf37fdc9bfp-548, 0.0, 0.0, 0.0, 0x1.2217c0c964974p-275,
     0x1.b77a3ea645cfdp-314, 0.0, 0x1.f12eb8ea3a7ep-861, 0x1.0f3a99805b536p-91, 0.0,
     0x1.27ceb5167d1efp-388, 0.0, 0.0, 0.0, 0x1.7f797ef5f4b4ep-415, 0.0,
     0x1.4fa5b6ab945b7p-289, 0.0, 0x1.5f12f948ed3c9p-772, 0x1.40cb9ee2c58bdp-421, 0.0,
     0.0, 0x1.a1fff5839b6cbp-202, 0x1.28b882f51e8a8p-611, 0x1.7e693c0fb187ep-789,
     0x1.36826086cc9bep-617, 0x1.490dd13f1d66bp-743, 0x1.01189c8c75846p-545,
     0x1.85b27a9f94c17p-373, 0.0, 0x1.cf00b08281caap-978, 0.0, 0x1.07ba34d4edbfbp-869,
     0x1.fda0174dd353fp-798, 0.0, 0x1.3d148c494774ap-403, 0x1.28e3bf9f4374fp-869, 0.0,
     0x1.6464befccb444p-31, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a06a662a6eeep-107, 0.0, 0.0,
     0x1.a4679145c264cp-103, 0x1.9ed7b277c44f6p-753, 0x1.afb18d92ab969p-900, 0.0,
     0x1.335587332c196p-12, 0.0, 0.0, 0x1.5acbdf29d479bp-702, 0.0, 0.0,
     0x1.509c758f6bf03p-299, 0.0, 0x1.6660203a35ab3p-1008, 0.0,
     0x1.da1039019b325p-468, 0.0, 0.0, 0x1.7ed072d0e0bb6p-974, 0.0,
     0x1.0031ecb28cfc8p-289, 0x1.aa89a57ce48f6p-279, 0.0, 0.0, 0x1.dedc54a58a27ep-104,
     0x1.88c425f45f392p-709, 0x1.375a6f35a58f2p-45, 0x1.0b55f6b3d268p-253,
     0x1.4edcc22fe8a57p-277, 0.0, 0.0, 0.0, 0.0, 0x1.ecc8f4065dbd9p-608, 0.0, 0.0,
     0.0, 0x1.14183026b0f6fp-197, 0x1.26a22c01f4b5cp-691, 0x1.46d2437a09865p-165,
     0x1.4b4af1fc0ad89p-181, 0x1.b31d6c7eb1e6bp-245, 0x1.8d8f39f45f5b2p-596,
     0x1.7f8e0c83369a1p-73, 0x1.a3f9d76d3a247p-64, 0.0, 0x1.891f42d166c31p-715, 0.0,
     0.0, 0x1.3ab4464ef9a82p-257, 0.0, 0.0, 0.0, 0x1.a8fa03a496cb6p-82, 0.0, 0.0,
     0x1.1a679781cb309p-932, 0x1.22e6b26a51a1bp-680, 0.0, 0x1.baa6a4e35cdb5p-843,
     0x1.aaa7dabe2e9edp-700, 0x1.839af163b6e87p-464, 0.0, 0x1.e257efebef95dp-296, 0.0,
     0.0, 0x1.28cfcac85f476p-447, 0.0, 0.0, 0x1.dd97e7b6b966ap-407, 0.0,
     0x1.2fd5224f9fc0dp-739, 0.0, 0.0, 0x1.ad915df7ec0f7p-565, 0.0, 0.0, 0.0,
     0x1.802f354244071p-349, 0.0, 0x1.c09a212560306p-481, 0x1.4a4bd62cc2036p-718,
     0x1.3050fee0dd8a4p-938, 0x1.29346d3d23435p-345, 0.0, 0x1.e04671180b55ap-732, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d07253f5ec6ap-534, 0.0, 0.0,
     0x1.0f4e4bfcf38f2p-843, 0x1.ec023c97afc8p-1009, 0.0, 0.0, 0x1.9bcdc0676bcb6p-104,
     0x1.67022955bc577p-448, 0.0, 0.0, 0x1.300915678bfbap-17, 0x1.a7216742507bcp-959,
     0.0, 0.0, 0.0, 0x1.6c8438d4860bep-491, 0x1.7f244653256ap-59,
     0x1.0206d52ea8142p-703, 0x1.65f8e339835b9p-206, 0.0, 0.0, 0x1.094c544ae72dbp-767,
     0.0, 0.0, 0.0, 0.0, 0x1.b760c40183a7cp-848, 0.0, 0x1.bbf9c32e373e2p-124,
     0x1.10d8c67c78f0fp-805, 0.0, 0.0, 0x1.1bac84af6cd3fp-559, 0x1.a62b2342d2d19p-877,
     0x1.f7dd41ed4f8ffp-927, 0.0, 0x1.2576a24e4ff16p-21, 0.0, 0.0,
     0x1.797dd74b18a93p-826, 0x1.1dde32ea347fdp-598, 0x1.a176d3b2c682p-941,
     0x1.81058c7ac473p-167, 0.0, 0.0, 0x1.49d6ba932cc84p-62, 0.0,
     0x1.ec4cc8bd9919ep-64, 0x1.acc770a713929p-52, 0.0, 0x1.d1ba219c533c6p-319, 0.0,
     0x1.bc3dbed32647ap-978, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ad8525483a58p-419,
     0x1.f2a83c1cc810ep-371, 0.0, 0x1.2fc6714ebb51p-581, 0.0, 0x1.d884842151486p-200,
     0x1.ddb69f31a92f2p-425, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f225f3c7e98bp-35, 0x1.9ba2e4d04741ep-809, 0.0, 0x1.8772c03fd9013p-798, 0.0,
     0x1.9d4852de7d495p-804, 0x1.3b92997f9388fp-606, 0.0, 0x1.5befc02373ec9p-611,
     0x1.e2ada316f2d18p-51, 0.0, 0x1.6e04836743d15p-807, 0.0, 0.0,
     0x1.6adc0765f7fe3p-827, 0x1.662424af9858ep-375, 0.0, 0.0, 0x1.7d65c65933829p-490,
     0x1.253e484119d8fp-362, 0.0, 0x1.539619cce313p-744, 0x1.a7bed5cff0644p-78,
     0x1.27b151ecbe375p-891, 0.0, 0.0, 0x1.4d56801c964b1p-920, 0.0,
     0x1.071d68ee4d3f6p-86, 0.0, 0.0, 0.0, 0x1.b5ca70763ab26p-975, 0.0,
     0x1.d994cef0c04eap-371, 0x1.56a9d26bfcba8p-865, 0x1.2956c72a40e74p-51, 0.0, 0.0,
     0.0, 0x1.094f8fb40780ap-689, 0.0, 0x1.b5b077d10e689p-1007, 0.0,
     0x1.ff2c04f225e42p-149, 0x1.682dbf401f501p-697, 0x1.6397e515929cap-209,
     0x1.37da80f61ed04p-160, 0.0, 0.0, 0.0, 0.0, 0x1.97cf4215ff15bp-79,
     0x1.d23944d3b3d81p-730, 0.0, 0x1.e8077b4c2cfa4p-406, 0x1.357ecdd3f907dp-986, 0.0,
     0x1.7669d44299e7p-956, 0x1.d50e3c702e563p-972, 0x1.36061a5f420d7p-147, 0.0, 0.0,
     0x1.798c7b0ddd431p-812, 0x1.8b0f84ea4d98dp-66, 0x1.726ffe6bdcde4p-335,
     0x1.45523ffdcef4fp-430, 0.0, 0x1.bb681df2791dcp-383, 0x1.ab3a186952633p-647,
     0x1.6fb73e31edd56p-76, 0x1.ebd2f90c67edep-835, 0x1.860c10622542bp-779,
     0x1.f85473e505fe7p-556, 0x1.5a496909efddp-32, 0.0, 0x1.f9a7eca9bfbf9p-212, 0.0,
     0x1.39ccc993c4151p-257, 0.0, 0x1.cbb4caf8ca7dbp-53, 0.0, 0x1.93b59fa5ab7fcp-989,
     0.0, 0x1.f97590c8bc777p-127, 0.0, 0.0, 0.0, 0.0, 0x1.c4ec2b4515eep-93,
     0x1.513daac841fep-750, 0.0, 0x1.a7c51e56939afp-867, 0x1.a006f5bfb67f5p-927, 0.0,
     0x1.9eb945a60c2c1p-265, 0x1.235b29987c451p-831, 0.0, 0x1.a480d7d479875p-724,
     0x1.74cd5deb283b4p-10, 0x1.6e4a496a7d303p-265, 0x1.65ed6be9c05d1p-97,
     0x1.a11a28a44a735p-703, 0.0, 0.0, 0.0, 0x1.174842974410ep-731,
     0x1.a8f83f26e9259p-487, 0x1.dd1e424ec2ebap-569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94d5d8eb8bf61p-424, 0x1.9cc3e5b9b5d47p-52, 0.0, 0x1.36c70dea296ap-187, 0.0,
     0.0, 0x1.432efd57b8d66p-705, 0x1.f74424aa4fc33p-714, 0.0, 0.0,
     0x1.37c3ed8e8a407p-897, 0.0, 0x1.6ffa46b3988e2p-978, 0x1.4ec9771bf2b4cp-785, 0.0,
     0x1.603717fca34bp-759, 0x1.5e7a2cc3960c7p-156, 0.0, 0.0, 0x1.40a257932ab45p-819,
     0.0, 0x1.f8d09b94be7aap-435, 0.0, 0x1.187c6d6652c32p-897, 0.0, 0.0,
     0x1.0597ddf0dc46ep-261, 0x1.24d6b8b855633p-362, 0x1.7f30f5ff53518p-819,
     0x1.0c1ec08c9a39fp-266, 0x1.30a5c60c60315p-962, 0x1.240be7e077733p-122,
     0x1.edbc0b12b24a6p-350, 0x1.295c40b757481p-558, 0x1.74d0015e1a38bp-321, 0.0, 0.0,
     0.0, 0x1.72b1681c4e305p-1000, 0x1.76e9edb1cb66ep-820, 0x1.808e1151b4d14p-537,
     0.0, 0x1.f24bbfcbc424bp-341, 0x1.2a377e28500b7p-933, 0.0, 0.0,
     0x1.d0efd5b267a7ep-723, 0.0, 0x1.5a79b0ee0388bp-96, 0x1.c01587969e898p-454,
     0x1.cd638a898865p-798, 0x1.5066187280574p-678, 0.0, 0.0, 0x1.fce797ca614b8p-973,
     0.0, 0.0, 0.0, 0.0, 0x1.b544b088d48e2p-676, 0x1.a0f94af0e5de2p-156,
     0x1.88764eea61685p-823, 0.0, 0.0, 0x1.b7f2445c21ac5p-583, 0x1.010011b454053p-717,
     0x1.42e5fa284f057p-921, 0.0, 0.0, 0.0, 0x1.4a5e5f624ba5ap-428, 0.0,
     0x1.f80fc82a9948cp-1000, 0.0, 0x1.e67a0d9dcb41dp-879, 0.0, 0.0, 0.0,
     0x1.5c1cdafedec78p-257, 0.0, 0x1.239d12f53e321p-888, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a3f8c69fd7ad9p-324, 0.0, 0x1.1be717c69b5eap-76, 0.0, 0x1.a30a15c86f67cp-698,
     0x1.43f9f47c452c2p-604, 0.0, 0x1.814c0e08408cdp-854, 0x1.a92de3ee053fdp-440,
     0x1.aad4725826934p-735, 0.0, 0x1.860c84feb3f4cp-103, 0x1.3190dbb7dd378p-691,
     0x1.478f673f7f484p-395, 0x1.ef5085dc65f0cp-536, 0.0, 0x1.5354c80adb603p-134,
     0x1.2d249f646efcap-54, 0x1.574d359647ec4p-737, 0x1.a33d3f4c29c7bp-652,
     0x1.f0e486f4476a7p-491, 0.0, 0x1.77340bd7f1b4dp-352, 0.0, 0x1.a4eb273546f3cp-225,
     0.0, 0.0, 0.0, 0x1.93e1261c40123p-517, 0.0, 0x1.a0e6872c9b564p-518,
     0x1.e0285d3bbbfe2p-189, 0x1.0ddfed2fa38fp-30, 0.0, 0.0, 0.0, 0.0,
     0x1.01e930e6a4843p-519, 0x1.31b830790d238p-580, 0x1.b593cbb500eb3p-708, 0.0, 0.0,
     0x1.b7178a7e46ae7p-409, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd46779bf95a2p-139, 0.0,
     0.0, 0.0, 0x1.bf822e393c59fp-790, 0x1.1cf0f9e4c0c67p-453, 0.0,
     0x1.d032980e38c01p-844, 0.0, 0.0, 0x1.0a634c82a8896p-584, 0.0,
     0x1.1a0f6a03a972ep-672, 0x1.aecd01755cbcbp-89, 0.0, 0x1.4e652ce3d43cbp-776,
     0x1.4bb5f31b99252p-276, 0.0, 0.0, 0x1.a4a5a0cd2e0cbp-60, 0x1.42f5e308d5ab6p-248,
     0x1.2471e3899ab58p-396, 0.0, 0.0, 0x1.67a40d7458dfap-202, 0.0,
     0x1.6354f0281112p-835, 0.0, 0x1.8453da70b224bp-580, 0x1.63f119924b14dp-436, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1905da1320ac1p-934, 0x1.0aa117bb4bcf5p-285, 0.0, 0.0,
     0.0, 0x1.9f2aa750b9101p-445, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f707ebe5fcb4fp-245,
     0.0, 0.0, 0x1.2693fc4b64064p-24, 0.0, 0.0, 0x1.c56ea7f1cdc9ap-672,
     0x1.b59704c21f077p-670, 0.0, 0x1.b9d53831db08ap-218, 0.0, 0.0,
     0x1.572e960972517p-256, 0.0, 0.0, 0x1.1124a6f03c957p-962, 0.0,
     0x1.fc68619f5664ap-99, 0x1.d9ef3fedc8e16p-822, 0.0, 0x1.79b11949671bcp-24, 0.0,
     0x1.f505b9a550796p-420, 0x1.09fc72a200cd2p-580, 0.0, 0.0, 0x1.fe5bdbc1805a1p-609,
     0.0, 0x1.4224d3abcee38p-109, 0x1.ed42b1064cb9dp-286, 0x1.76c63bdce8a6fp-975, 0.0,
     0x1.3c716242181b7p-276, 0x1.ed7cc330bd778p-154, 0x1.a3b68e65bc91p-76, 0.0,
     0x1.ed170c68a3ce7p-1010, 0x1.68b565f2237f4p-1005, 0.0, 0x1.029fe0a9a7f1fp-581,
     0.0, 0x1.15d4cf6d21675p-745, 0x1.878406bc2e44ap-946, 0x1.23c16f31b0fbbp-586, 0.0,
     0.0, 0.0, 0x1.8d45062db892ep-717, 0x1.f7a520c4f9a67p-249, 0.0, 0.0, 0.0,
     0x1.80d66642832e5p-825, 0x1.14c4fd37f5b01p-590, 0.0, 0x1.705050b6863eep-24,
     0x1.3b22b7a807804p-618, 0x1.80e454ed268abp-274, 0.0, 0x1.5093aeec7284bp-66,
     0x1.bda5012c8e9b4p-394, 0x1.9a4e3d883ac5p-19, 0x1.b2a31c2419fd4p-30, 0.0, 0.0,
     0.0, 0x1.b6e9d90f8d825p-728, 0.0, 0x1.f131004ca402ep-461, 0.0,
     0x1.9cbc65fd0097bp-586, 0.0, 0.0, 0x1.d2987ded01e91p-167, 0x1.fb5aa4e89637fp-621,
     0x1.2cb5fe32344d1p-35, 0x1.659098acb6c7cp-817, 0.0, 0x1.4e91e48e79b9fp-97, 0.0,
     0.0, 0.0, 0x1.fc8e67826df89p-774, 0.0, 0.0, 0x1.361b1287aa13bp-649, 0.0, 0.0,
     0.0, 0x1.91d5ac5ed8a7p-547, 0x1.76a3d00f41f1dp-670, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int4_t global_bench_acc;
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
        ml_int4_t local_acc;
        int32_t i;
        ml_int4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_int4_t tmp1;
            ml_int4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_ilogbd4_kvx(tmp0);
            memcpy(((ml_int4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
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
    printf("Sleef_ilogbd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_ilogbd4_kvx bench acc [%d, %d, %d, %d]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
