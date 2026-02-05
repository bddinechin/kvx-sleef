/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floord4_kvx.c --function Sleef_floord4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
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


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0.0, 0x1.09d66f5b3e705p-502, 0.0, 0x1.edb8b8f5d1bd1p-212, 0.0, 0.0,
     0x1.3dd5cdb15baefp-359, 0x1.1e2618b184097p-448, 0x1.75a2da310ced1p-894, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fd9746d35e59cp-162, 0x1.1423040a2660dp-339,
     0x1.29d8e0b8ae8adp-29, 0.0, 0.0, 0.0, 0.0, 0x1.91fc5f9bf1c3p-213, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fa67da9999a3fp-660, 0.0, 0.0, 0x1.1f023a6a20218p-684, 0.0,
     0x1.e1ee1e69015ccp-90, 0.0, 0x1.1a0995d76dc1ap-830, 0x1.21639176d2706p-19, 0.0,
     0x1.abde6d8c61569p-898, 0x1.06140e2799b8p-906, 0.0, 0.0, 0x1.95170f230513p-277,
     0x1.1e8ab25822777p-371, 0.0, 0.0, 0x1.0710c95671e3ep-286, 0.0,
     0x1.db9b148f62109p-161, 0.0, 0.0, 0x1p0, 0x1.9fb1cbed52594p-919,
     0x1.1851faddf176ep-35, 0x1.679d2b7f00582p-972, 0.0, 0x1.084c7ffa921cp-522, 0.0,
     0x1.58eb398488454p-490, 0.0, 0.0, 0.0, 0x1.c883c8b895df9p-950, 0.0,
     0x1.3d8f81ea4cp-855, 0x1.c25cef4add552p-82, 0.0, 0x1.8585e18bf0a25p-904, 0.0,
     0.0, 0x1.99fe102a7f90fp-166, 0x1.aa6bd942214e9p-247, 0x1.9a512b49f55fdp-13,
     0x1.6b28ca465e08bp-887, 0.0, 0.0, 0x1.44d396fd54eccp-429, 0x1.e1baf36ce3674p-518,
     0.0, 0x1.4d74fb305c7fdp-613, 0.0, 0.0, 0x1.52e2441331f2ap-389,
     0x1.ededcf9b2ddd8p-685, 0.0, 0x1.06b82895587c4p-568, 0.0, 0.0,
     0x1.d942d11f492dcp-328, 0x1.eccb2207704dbp-331, 0.0, 0.0, 0x1.37a7b48302dc8p-598,
     0x1.43e6b6de70d16p-290, 0x1.39e722f1a5badp-102, 0.0, 0x1.1c0e13745a6b6p-706,
     0x1.49dd32b65ee5cp-759, 0.0, 0.0, 0.0, 0x1.50f87bce90a3fp-170, 0.0,
     0x1.aeb4bc602d7e8p-860, 0x1.1741513b05fc2p-982, 0.0, 0x1.71d5ab6ad165dp-821,
     0x1.5699ea0a28f62p-674, 0.0, 0.0, 0x1.27cc0174bdbc7p-499, 0x1.f5fa49efa2b54p-67,
     0.0, 0.0, 0x1.20e6bafb006c4p-520, 0x1.7b04084771814p-852, 0.0, 0.0,
     0x1.b9a905ab62275p-84, 0x1.196700a704d58p-999, 0.0, 0.0, 0.0,
     0x1.f6fd5bb218691p-991, 0.0, 0x1.a88c56b1c09d5p-536, 0.0, 0.0,
     0x1.14da3f6f830b2p-151, 0x1.8689838bca1d7p-321, 0x1.74c9f95906692p-687, 0.0, 0.0,
     0.0, 0x1.25c13a89b6829p-405, 0x1.29c7e34c7a79ep-777, 0.0, 0.0, 0.0,
     0x1.c68ca6831f563p-525, 0.0, 0.0, 0x1.f0c73cd448ad5p-868, 0.0,
     0x1.f794f88470a7bp-542, 0x1.1c1c0a0445f14p-741, 0.0, 0x1.6fcc306a370c2p-200,
     0x1.fc5b8f3884ce3p-669, 0x1.6c8432f91d129p-32, 0x1.b6e53a42162dep-252, 0.0,
     0x1.0a1886df2a5cdp-898, 0x1.afbd506eb57bep-570, 0x1.07437897c072p-104, 0.0, 0.0,
     0x1.293e7035a878fp-264, 0.0, 0.0, 0x1.9cd831e644082p-297, 0.0, 0.0,
     0x1.c560a3c0eb45bp-846, 0.0, 0.0, 0.0, 0x1.7c4c01b311df5p-510,
     0x1.a1fef4238f719p-696, 0.0, 0x1.2c3076fd4ee51p-951, 0x1.cf8e10b87d44dp-815, 0.0,
     0.0, 0.0, 0x1.ed6cb8588f70ap-145, 0.0, 0x1.3fc8d6d5c3a04p-398, 0.0,
     0x1.eba686acab72dp-1014, 0.0, 0x1.dbd5833d887ecp-429, 0x1.8fab556f6533ap-428,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b34100eea383p-774, 0.0,
     0x1.c68d8b4466823p-337, 0x1.f6f5e913f9634p-950, 0x1.d54a26a92e425p-937,
     0x1.75e3c0c2faadfp-200, 0x1.dd9bddde1da76p-371, 0.0, 0x1.b6e685c4e2b53p-811,
     0x1.1411d60cdeafp-1003, 0.0, 0.0, 0x1.a0a24584020a6p-495,
     0x1.415dfc449f542p-1021, 0.0, 0.0, 0x1.f401931693c8dp-352,
     0x1.0ed417708c8fep-976, 0.0, 0x1.b2b1304b3affbp-872, 0x1.f9aeff94c3247p-569,
     0x1.1e21320e59fe4p-798, 0.0, 0.0, 0x1.41b3b0d650ae7p-703, 0x1.f0486955b9ad6p-588,
     0x1.618035ae91e95p-299, 0x1.bf2e2f2d7f29ep-376, 0.0, 0.0, 0x1.3352b76bd71d8p-923,
     0.0, 0.0, 0.0, 0x1.823fe049a615ap-792, 0x1.4de44215d7738p-1012, 0.0,
     0x1.32d3ce41b9c3p-898, 0.0, 0x1.7cf1f07a213bep-474, 0x1.b3151de052bc3p-991,
     0x1.aa316de73cc3p-524, 0x1.73559def773d8p-55, 0.0, 0.0, 0.0, 0.0,
     0x1.b1b77a1c076e9p-430, 0.0, 0.0, 0x1.2330f6df8408fp-131, 0x1.222edaffa3a0dp-912,
     0.0, 0.0, 0.0, 0.0, 0x1.0057129e87d9ap-425, 0x1.cdc8cd8e0412ap-738, 0.0,
     0x1.9ffd2906329aap-692, 0.0, 0x1.d577796a4f69ap-881, 0x1.98bd896c60a66p-630,
     0x1.6bd066d65aabdp-106, 0x1.ea6ef25cbacd8p-836, 0x1.dcd006e5aad41p-578,
     0x1.26e1e930cf556p-527, 0x1.faab6e4922449p-1000, 0.0, 0x1.bebfa2ea9f342p-611,
     0x1.3abb7946a337ep-715, 0.0, 0x1.20a2191487d3ap-494, 0x1.36969e0bcc97p-274, 0.0,
     0.0, 0x1.d21a07a6e924ap-683, 0x1.dd97e8f7c2cdp-719, 0.0, 0x1.bceabf41b83d4p-177,
     0.0, 0.0, 0.0, 0.0, 0x1.ed2fa201a7cfp-245, 0.0, 0x1.83cc80614643ep-796,
     0x1.aa5c9cad9bdc1p-592, 0.0, 0.0, 0x1.8de742334617ep-512, 0.0,
     0x1.0bf62387c4a0cp-206, 0x1.f4cc9c684e5fbp-972, 0.0, 0.0, 0.0, 0.0,
     0x1.c0f1065766f58p-703, 0x1.6b12dc0c52c73p-816, 0x1.f2ec8814ab057p-770, 0.0, 0.0,
     0x1.5b721e687c3b4p-512, 0.0, 0x1.0d31736991b9bp-514, 0x1.3085afa68b4dp-720,
     0x1.311438d29ab79p-684, 0.0, 0x1.88e66fa43e63bp-95, 0x1.310a02f25d817p-939,
     0x1.06053743488bbp-921, 0.0, 0x1.d101d4291b57ap-963, 0.0, 0x1.75e48074b8228p-51,
     0x1.837605e994093p-188, 0.0, 0x1.03f1dea9152a8p-564, 0x1.b9c16b048344dp-628, 0.0,
     0.0, 0.0, 0x1.0e328322c3273p-854, 0x1.f509dce0f3015p-355, 0x1.ad830cf49dc8ep-956,
     0x1.403fc4f7463fdp-987, 0.0, 0.0, 0x1.15211015acc4ep-800, 0x1.32256df04efbbp-952,
     0x1.1c449b121262ap-106, 0.0, 0x1.7e4c0b18d73d5p-594, 0.0, 0x1.47a849eeaf97ap-762,
     0.0, 0x1.3f11e93f2bb8ep-1021, 0x1.39f3327373e54p-80, 0x1.2a3fe88cf290ep-252, 0.0,
     0x1.7b4c593f44079p-354, 0.0, 0.0, 0x1.d602f0c708394p-781, 0x1.8b1415a34c54bp-574,
     0x1.51223d5e43482p-766, 0.0, 0x1.301497a73f1e6p-194, 0.0, 0.0,
     0x1.494af9fed7479p-833, 0.0, 0.0, 0x1.d4d97745a6998p-979, 0.0, 0.0, 0.0,
     0x1.dc718cf09f20dp-516, 0x1.9bebff0c7ff0bp-507, 0x1.df23bc7dd6d78p-87, 0.0,
     0x1.ad67cd50338d7p-865, 0x1.5e917073327a6p-871, 0.0, 0.0, 0x1.36f4b6f9cafeep-828,
     0x1.5862eedac852dp-505, 0x1.09c90bef5412p-734, 0x1.653117185dff1p-628,
     0x1.693540ab71873p-372, 0x1.bec7eead0deap-670, 0.0, 0x1.c97a7842ce1eap-721, 0.0,
     0x1.0cf787676b45ap-726, 0x1.e012a8c40cf94p-999, 0x1.b73d998afbba4p-566, 0.0,
     0x1.a253db97c57bep-476, 0x1.d9177f13bbc07p-568, 0x1.30b1c451bef75p-856,
     0x1.ecf458b608ddp-365, 0.0, 0.0, 0.0, 0x1.9f7e18552e51p-338, 0.0,
     0x1.24aac4001e429p-107, 0.0, 0x1.7875cbc2b13fcp-759, 0.0, 0.0, 0.0,
     0x1.8065dc769bad2p-342, 0x1.0791c8a34f81bp-559, 0x1.18e50eaaff82p-889,
     0x1.b8dc44ed9a744p-677, 0x1.7bf399847fb0dp-638, 0.0, 0.0, 0.0,
     0x1.019bc63cccba3p-416, 0x1.208ca0d2f8958p-854, 0x1.008af8aa48644p-881,
     0x1.2999d572696f3p-867, 0.0, 0.0, 0x1.c83b2ab07cc1ap-800, 0.0,
     0x1.a7f47226f4cb9p-749, 0.0, 0.0, 0x1.d89ebc5c9218ap-158, 0.0, 0.0, 0.0,
     0x1.a4a6c6a017f2ep-162, 0x1.983b3d17ad5f2p-986, 0.0, 0.0, 0.0,
     0x1.74232fdb0478dp-856, 0x1.6495b5488bb07p-207, 0x1.1543d9f458c9cp-576, 0.0,
     0x1.22bedb253ab1ap-838, 0x1.84b6af1217622p-710, 0x1.f5d90d18da529p-162, 0.0,
     0x1.f2526d661f891p-968, 0x1.b2797399a464bp-841, 0.0, 0.0, 0.0,
     0x1.d79524fc6f588p-609, 0x1.c88321ebce239p-442, 0x1.45bea99bb1102p-708, 0.0,
     0x1.11405bf4899adp-110, 0.0, 0x1.ba650875dc233p-338, 0x1.546959992ccdp-309, 0.0,
     0x1.56366c701e74fp-713, 0x1.3acf629329fdfp-871, 0.0, 0x1.661b461c0a198p-612, 0.0,
     0x1.3770eeb4fef0cp-297, 0.0, 0.0, 0x1.65b9c84e2a9b2p-398, 0x1.4474ed1881b52p-598,
     0.0, 0.0, 0x1.fb2a5ca6038b6p-722, 0x1.63c6cff830164p-788, 0.0, 0.0, 0.0, 0.0,
     0x1.87a7d005e660dp-538, 0.0, 0x1.4a725bbb3a6c2p-550, 0.0, 0.0,
     0x1.3d9e844d3b2c4p-994, 0x1.aa64754c04333p-193, 0x1.66ed1d38ce176p-534, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b707c7a8de78p-26, 0.0, 0.0,
     0x1.b80e432ca6323p-870, 0x1.558331e9783fcp-11, 0.0, 0.0, 0.0, 0.0,
     0x1.19ae332ec7484p-700, 0.0, 0x1.dcd370a6404cap-890, 0x1.71aa90401c2b4p-368, 0.0,
     0x1.28f45b8d9ccc6p-323, 0.0, 0.0, 0x1.4fd1f2f50d6d5p-810, 0x1.262de1c4f8eeep-603,
     0.0, 0x1.adf07a202acd6p-496, 0x1.3c0f5b09332a9p-2, 0.0, 0.0,
     0x1.9ac5801273fp-106, 0x1.2e566cce22e6p-157, 0x1.1c66437fd983ep-892, 0.0,
     0x1.f91dc9b75b17ap-199, 0.0, 0.0, 0x1.cb6be6cbefafap-646, 0.0,
     0x1.35f29f1324172p-87, 0x1.d61b550e46181p-702, 0.0, 0x1.2d30965c9fecp-88,
     0x1.ea9120b02cbe3p-620, 0.0, 0x1.9ed15417715a6p-617, 0.0, 0x1.16a2d91e7a2c6p-567,
     0x1.961e176053851p-265, 0.0, 0x1.339081862bc2bp-169, 0x1.ed71ca41c3801p-1009,
     0x1.4795e9f6e155ap-211, 0x1.2ed4e69642007p-476, 0x1.4d4991e6555b9p-993, 0.0, 0.0,
     0x1.092f4c4dd4596p-872, 0x1.742558b347786p-479, 0.0, 0.0, 0x1.413c5a297792bp-67,
     0.0, 0x1.705976c63b68fp-295, 0x1.c885707a48c3ap-532, 0x1.4d0603fe04cf6p-266, 0.0,
     0x1.88e94d8b3fab7p-785, 0x1.44553a5427d17p-694, 0x1.3d19c143d971cp-888, 0.0,
     0x1.006dc865c7251p-731, 0x1.f0c353499dd46p-202, 0x1.951815edcfabep-118,
     0x1.78a891022a0fdp-950, 0x1.c48d9e8d00a36p-765, 0x1.5b0d125ea779p-76,
     0x1.afe11e43b0ceap-109, 0x1.3c46ced3af6d7p-785, 0x1.eb7e8fdde19afp-760, 0.0, 0.0,
     0x1.5ce6a33d78e7bp-990, 0.0, 0x1.07adf1a3a27b8p-813, 0.0, 0x1.9192293da9326p-256,
     0x1.d00601dcabd48p-397, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39b6a739ed9efp-588,
     0x1.2f6892efac43fp-551, 0.0, 0x1.4d306d679c063p-873, 0.0, 0x1.669a926879859p-487,
     0x1.a77b3842a3edp-840, 0x1.ce5e1703aa0f4p-514, 0.0, 0x1.67820de700316p-36,
     0x1.4b08f0ced9e5p-137, 0x1.2d6523b0be39bp-414, 0.0, 0.0, 0x1.e64707a3fdfc8p-305,
     0x1.eea891c4018c2p-972, 0.0, 0x1.ef6fa82c8bfdfp-598, 0.0, 0.0, 0.0, 0.0,
     0x1.4872442e93d14p-518, 0x1.77a65005e78e4p-497, 0x1.96bc923f0f13ap-172,
     0x1.21758a69df886p-46, 0.0, 0x1.6280067092191p-507, 0.0, 0x1.14b6e507bf20fp-771,
     0.0, 0.0, 0x1.58dbc6ab82c22p-62, 0.0, 0x1.5baa83d42be1cp-76,
     0x1.287d646736fc6p-496, 0x1.8743279d62534p-736, 0x1.c8f125efe7318p-776,
     0x1.3a22d46eb75b5p-502, 0x1.2945fba5e1a7bp-967, 0x1.27ec6ac78e95cp-520, 0.0,
     0x1.6c02a1e7be2bp-575, 0x1.2407f6e9261d5p-139, 0x1.f3b01daa36d05p-627,
     0x1.0fb30ac59ffa1p-411, 0.0, 0x1.42c3818aaf0a6p-573, 0.0, 0.0,
     0x1.f6fc450c16426p-158, 0.0, 0.0, 0.0, 0.0, 0x1.a7cbc8c99adf9p-714, 0.0,
     0x1.06d794ab4d8eap-659, 0.0, 0x1.0ec7e10073455p-173, 0.0, 0.0,
     0x1.2885a84785705p-931, 0.0, 0.0, 0x1.f01b9c860faa9p-235, 0.0,
     0x1.e92c2823b5afbp-616, 0x1.58157109bdc9ep-921, 0x1.be47f025aaba1p-241,
     0x1.67e18e4b93d8fp-16, 0.0, 0x1.805632d67183ep-845, 0.0, 0x1.60b687152aa98p-539,
     0x1.dbbba30b653b8p-892, 0.0, 0.0, 0x1.7ec00321091b8p-519, 0x1.710b5d613fdaep-852,
     0x1.886f178fca09cp-852, 0x1.b0b857ae4085ep-492, 0.0, 0.0, 0x1.0ed85e2252829p-826,
     0x1.d59ec90ae1a7bp-111, 0x1.821c82a8ec592p-611, 0x1.c8404daedc42fp-801, 0.0, 0.0,
     0x1.9c960a47f0801p-585, 0x1.cf1c3e794fb59p-417, 0.0, 0x1.6af62c1557545p-986,
     0x1.26f5e004bd2e2p-662, 0.0, 0.0, 0x1.f6ef444eeae55p-1017,
     0x1.1969ea907ad05p-418, 0x1.fd73056176557p-6, 0.0, 0x1.e5a7e09441a0ap-246, 0.0,
     0x1.0d001e69fe3bap-331, 0.0, 0.0, 0x1.ada6df5601899p-672, 0.0,
     0x1.fb34c13acd36bp-338, 0.0, 0x1.d6733f6a9215fp-220, 0x1.d0502aece4c71p-791, 0.0,
     0x1.945da710599ccp-861, 0x1.7aaeb5fa316d1p-707, 0.0, 0.0, 0x1.6f4da949fb2a8p-334,
     0.0, 0x1.67566780ec7b3p-267, 0.0, 0x1.7d20b52f0a1ebp-820, 0x1.5bd66e13ce053p-610,
     0x1.00b1842e5657fp-832, 0.0, 0.0, 0x1.f5badbf437155p-490, 0.0,
     0x1.ccf2dd4b21e9ap-369, 0.0, 0.0, 0.0, 0x1.ffc352c2aea45p-65, 0.0,
     0x1.56603007a85d2p-774, 0x1.140127a2a4629p-796, 0.0, 0.0, 0x1.fffc3033d472p-707,
     0.0, 0x1.72101e76a6075p-59, 0x1.0d31c3180c992p-180, 0x1.5b396933bec16p-173, 0.0,
     0x1.fc9b6330230dep-643, 0x1.954caee7f68b4p-41, 0x1.4d769a388d38cp-807, 0.0,
     0x1.383f06102b973p-77, 0x1.5e84680762a6cp-980, 0.0, 0.0, 0.0,
     0x1.2644d26c11565p-287, 0x1.c53ac6d6d5fa1p-821, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f603d492701b2p-962, 0.0, 0.0, 0x1.d6f55531ced2cp-69, 0.0, 0.0, 0.0, 0.0,
     0x1.562277a163916p-899, 0x1.9192cb9750a5ap-472, 0.0, 0x1.5e7410ce50573p-605,
     0x1.fccfe0dfadc65p-501, 0x1.d01873c0ef743p-596, 0.0, 0x1.41a9c8ce5bf6p-471, 0.0,
     0x1.121403c679d9ap-179, 0.0, 0.0, 0x1.2c47cd730e298p-529, 0x1.77fa043d05f4p-621,
     0x1.ee8d1027cf469p-491, 0.0, 0.0, 0x1.44d0ed8579b7cp-647, 0x1.f726ec4bb2a49p-120,
     0.0, 0x1.ccaa2228555a9p-783, 0.0, 0.0, 0x1.54ec08e466e8ep-31, 0.0,
     0x1.d4feadc9fb23ap-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.047794fc889adp-393, 0x1.5690c36a4da07p-168, 0x1.967286d4568a2p-805,
     0x1.ddcb7fd113649p-821, 0x1.03e8b3ff29f31p-941, 0x1.c4f418754dbb7p-961,
     0x1.960959816862dp-162, 0x1.1ed1d4676d0dep-143, 0.0, 0x1.fbd4dc7cadff9p-881, 0.0,
     0.0, 0x1.50e9bc35bde32p-298, 0x1.71d5b23338284p-682, 0x1.e6dc23f643cd5p-457,
     0x1.da0c8375b1e63p-720, 0.0, 0.0, 0.0, 0x1.a49d479527084p-269,
     0x1.f6b3400b71202p-180, 0.0, 0x1.fc16a25b6900bp-614, 0.0, 0x1.5ac52451c1deap-468,
     0x1.11c9340175801p-833, 0x1.f20234bd0a1b8p-520, 0.0, 0x1.825c6d8f23757p-239,
     0x1.db7b509af665ep-554, 0x1.73b635bced63ep-288, 0.0, 0x1.9c40d9566b239p-252,
     0x1.41875a4480c3cp-133, 0.0, 0.0, 0x1.b420c2de72924p-255, 0.0, 0.0, 0.0,
     0x1.1d3296085f41dp-655, 0x1.aa1c552d6898dp-485, 0x1.9aec9684dad4dp-444,
     0x1.5b5783631100ep-795, 0x1.c926c45d6ffc9p-248, 0x1.532c23636580dp-184, 0.0,
     0x1.afaa6d2e54b4bp-946, 0.0, 0.0, 0.0, 0x1.60fcf4153819ep-873, 0.0, 0.0, 0.0,
     0x1.51bfcb4a1648cp-139, 0.0, 0.0, 0.0, 0x1.3213e19f1576p-180, 0.0,
     0x1.27f4ba91c3716p-820, 0x1.8522d9367fb05p-664, 0x1.f99b5e14e2f35p-1011, 0.0,
     0.0, 0.0, 0.0, 0x1.ea2de20498695p-241, 0x1.177e7b6953c21p-560,
     0x1.4ffb3b040b4fp-824, 0x1.6731b312bd6f5p-692, 0x1.3848c6603c01ap-159, 0.0,
     0x1.769eb61e5cefep-601, 0x1.78ebd5d949567p-854, 0x1.b74aa8a9d8226p-278, 0.0,
     0x1.a98bb0abd947fp-18, 0.0, 0.0, 0.0, 0.0, 0x1.e9eb890b4bf16p-201, 0.0,
     0x1.be015d00aa9e9p-106, 0x1.76ccee9183e98p-238, 0x1.6d28688ecfc45p-845, 0.0,
     0x1.9b9695b4f3b73p-674, 0x1.8ad2d62176d03p-93, 0.0, 0.0, 0x1.328f714fb525ap-976,
     0x1.9e4b037ab3ebep-689, 0.0, 0x1.405a46601d971p-349, 0.0, 0x1.f2b392749b369p-335,
     0.0, 0.0, 0.0, 0.0, 0x1.121090e84beb3p-328, 0x1.3a729a3515a1dp-284, 0.0,
     0x1.b18c051ca8823p-905, 0x1.48101c5e71e49p-262, 0.0, 0.0, 0.0, 0.0,
     0x1.79832fc501f2dp-152, 0x1.69782d471bd03p-924, 0.0, 0x1.26e8a11fe8b29p-347, 0.0,
     0x1.c0b98c436f9a9p-895, 0.0, 0.0, 0.0, 0.0, 0x1.3fc44af629013p-979, 0.0, 0.0,
     0x1.e7ad8f2caa29cp-443, 0x1.e6490e8792d9bp-968, 0x1.854938b5fea4bp-650, 0.0, 0.0,
     0x1.6d01bb32ece49p-964, 0x1.7c5bf182167e8p-541, 0.0, 0.0, 0x1.2e6a7445c4062p-613,
     0x1.bbbf36b5d25e5p-881, 0.0, 0.0, 0x1.3c39ae0e906b8p-165, 0x1.83524e41abefp-420,
     0.0, 0x1.facacf8c575edp-284, 0x1.0e704e4d2756dp-365, 0x1.f9c1eb03da9bcp-483,
     0x1.56fa7caed6bfp-456, 0x1.a1d9e13f134e1p-298, 0.0, 0x1.fe68100e56a69p-432, 0.0,
     0x1.888f8661745c8p-665, 0x1.35e9c0472cc02p-787, 0.0, 0x1.c83a4b6967a24p-130, 0.0,
     0x1.cb42896e54d0dp-613, 0.0, 0x1.d3de7253d1b9ep-616, 0x1.a135039a07806p-266, 0.0,
     0.0, 0.0, 0.0, 0x1.d925f871c7ddcp-878, 0x1.46c21789203afp-225,
     0x1.e033e5f28ca13p-577, 0x1.b9ac3a78a734p-369, 0x1.d38dc068e4f12p-887, 0.0,
     0x1.0a90c5b357ff6p-888, 0.0, 0x1.225a1f091f0d1p-649, 0.0, 0.0,
     0x1.339fe29c3e163p-861, 0x1.a69c40c92e87dp-342, 0x1.6e99a7dc79bafp-484, 0.0, 0.0,
     0x1.a3360dbcac54ap-206, 0x1.2167e454165d6p-997, 0x1.a821a2c75d63ep-687,
     0x1.cb027e682a3d4p-548, 0x1.b8d7cc77ca2d3p-562, 0x1.00253130eaa65p-407, 0.0, 0.0,
     0x1.c742cfba65705p-436, 0.0, 0.0, 0.0, 0x1.a1603add09b44p-165, 0.0, 0.0,
     0x1.0ccd4a5715daep-437, 0x1.3e7bdeb30c8p-330, 0x1.d625db7da6a9p-19,
     0x1.2d325377d7b85p-381, 0x1.58fce66f2df15p-815, 0x1.ebbaf547beabdp-886,
     0x1.5885331073efdp-124, 0x1.7642b508c775p-715, 0x1.e5b61a91e3c44p-833,
     0x1.6487012bf19eep-93, 0x1.1b9e968df16abp-536, 0x1.579e3816c0ae1p-607, 0.0, 0.0,
     0x1.aef561db923cbp-606, 0x1.a35c8a6049d5ap-1022, 0.0, 0.0,
     0x1.18a525218becdp-287, 0.0, 0x1.443bc2e5504f1p-63, 0x1.ce53fc4233cep-50,
     0x1.74112a870c1b9p-910, 0.0, 0.0, 0x1.811760cf06a84p-196, 0.0, 0.0,
     0x1.594913db0c2fdp-688, 0x1.dc30161b011dep-323, 0x1.7fe131edd316fp-521, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.df59467f9be09p-680, 0.0, 0.0, 0x1.fecb1b0deb1f6p-826,
     0x1.0fb94448863acp-524, 0x1.c982786ccae7cp-991, 0.0, 0.0, 0.0,
     0x1.5701a077c0545p-1019, 0x1.d7f8e58c4a46ap-616, 0x1.4566ad5e537edp-988, 0.0,
     0x1.030b06dc5a70ap-532, 0.0
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
            tmp1 = Sleef_floord4_kvx(tmp0);
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
    printf("Sleef_floord4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_floord4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
