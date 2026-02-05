/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fdimf4_kvx.c --function Sleef_fdimf4_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.9c016p-90f, 0x1.80b26p-108f, 0.0f, 0.0f, 0.0f, 0x1.5e93a2p-8f,
     0x1.beb338p-25f, 0.0f, 0.0f, 0x1.39757ep-113f, 0.0f, 0x1.bd9322p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0705fap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be11acp-2f,
     0x1.928cap-114f, 0x1.d62338p-121f, 0x1.6f67acp-7f, 0x1.c0ea6p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.96e868p-9f, 0x1.879522p-16f, 0.0f, 0x1.ccbc54p-55f, 0.0f,
     0x1.20792ap-10f, 0x1.7af07p-88f, 0x1.eed034p-107f, 0.0f, 0x1.bc492p-70f,
     0x1.4f684ap-116f, 0.0f, 0x1.25de88p-60f, 0x1.9fc41ep-81f, 0x1.1dbfecp-96f, 0.0f,
     0x1.4b768cp-116f, 0.0f, 0x1.a56cbp-99f, 0.0f, 0.0f, 0x1.ab5f54p-49f,
     0x1.9ae204p-69f, 0.0f, 0.0f, 0.0f, 0x1.3412ecp-29f, 0x1.b0aa5cp-34f,
     0x1.06c7aep-89f, 0.0f, 0x1.50b4dcp-88f, 0x1.77adc6p-8f, 0.0f, 0.0f,
     0x1.aad394p-39f, 0.0f, 0x1.a271aep-2f, 0.0f, 0x1.4207aep-85f, 0x1.f4f3p-83f,
     0x1.d41dd8p-97f, 0x1.4e23aep-53f, 0.0f, 0x1.df58f6p-102f, 0x1.bfbb74p-75f,
     0x1.aff14ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91012p-36f, 0.0f, 0x1.845a94p-65f,
     0.0f, 0x1.805a74p-9f, 0x1.20b132p-89f, 0.0f, 0x1.38b94cp-26f, 0x1.b0413ep-89f,
     0x1.cee66ap-104f, 0x1.d451fcp-123f, 0.0f, 0x1.2736acp-22f, 0x1.443cp-13f, 0.0f,
     0x1.3cbcf2p-22f, 0.0f, 0x1.0e282ep-16f, 0x1.ad122p-26f, 0x1p0f, 0x1.352d4ep-66f,
     0.0f, 0.0f, 0x1.b31028p-58f, 0x1.fb68fap-109f, 0.0f, 0x1.73503cp-7f, 0.0f, 0.0f,
     0.0f, 0x1.ddf1fep-31f, 0.0f, 0x1.ca8dc4p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.52af3p-125f, 0.0f, 0x1.aa9568p-15f, 0x1.bb841ep-117f,
     0x1.26fcd4p-19f, 0.0f, 0.0f, 0x1.ba1366p-74f, 0x1.a7294p-20f, 0.0f, 0.0f,
     0x1.215bc2p-58f, 0x1.e2ca42p-16f, 0x1.917c78p-47f, 0.0f, 0.0f, 0x1.273e0ap-54f,
     0x1.fb343cp-95f, 0x1.faae1p-101f, 0.0f, 0x1.4ec906p-106f, 0.0f, 0.0f,
     0x1.b0cf0ep-44f, 0x1.59fb5ap-105f, 0.0f, 0x1.a9d74cp-57f, 0x1.cfcd66p-56f, 0.0f,
     0.0f, 0.0f, 0x1.c8373p-49f, 0.0f, 0x1.bc26fap-47f, 0.0f, 0x1.2976f2p-101f, 0.0f,
     0x1.ad08fp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9104dap-33f, 0.0f, 0x1.88265ap-48f,
     0x1.1b022cp-111f, 0.0f, 0x1.30fd64p-54f, 0x1.28acp-104f, 0x1.0a1bbep-123f, 0.0f,
     0x1.1d3bc4p-21f, 0x1.9e1be2p-73f, 0x1.51a486p-123f, 0.0f, 0x1.137134p-86f, 0.0f,
     0x1.49320ap-82f, 0.0f, 0.0f, 0x1.395d5ep-16f, 0x1.1524f2p-4f, 0x1.e77e86p-22f,
     0.0f, 0x1.8fae74p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.765fep-107f, 0.0f,
     0x1.1918a8p-44f, 0x1.886126p-96f, 0x1.692fp-16f, 0x1.091d62p-91f, 0.0f,
     0x1.a6d79ep-75f, 0x1.84576ap-13f, 0x1.057eb4p-120f, 0.0f, 0x1.3bffeep-126f,
     0x1.ab3058p-105f, 0x1.755a52p-109f, 0.0f, 0.0f, 0x1.6357dap-51f, 0x1.821beep-64f,
     0x1.85eebp-113f, 0x1.1f2d54p-37f, 0.0f, 0.0f, 0x1.c3835p-99f, 0.0f,
     0x1.1f5362p-88f, 0x1.4474aep-89f, 0x1.c1195cp-22f, 0x1.755ac6p-16f, 0.0f, 0.0f,
     0.0f, 0x1.98c488p-11f, 0x1.c95b4ep-113f, 0x1.e89c5p-34f, 0.0f, 0.0f,
     0x1.efbd04p-1f, 0x1.ea6dfep-5f, 0.0f, 0x1.6231acp-106f, 0x1.a20d3cp-96f, 0.0f,
     0x1.fc930ep-95f, 0.0f, 0x1.06f82ep-28f, 0x1.5db652p-20f, 0x1.5f7734p-87f,
     0x1.8c8e72p-67f, 0.0f, 0x1.341692p-21f, 0x1.ab697p-62f, 0.0f, 0x1.59bdc2p-35f,
     0x1.87513ep-122f, 0x1.32c3c2p-114f, 0x1.3e8982p-70f, 0x1.5df63ep-112f,
     0x1.f32666p-122f, 0x1.8ac9e2p-1f, 0.0f, 0.0f, 0x1.110e2ep-100f, 0.0f,
     0x1.ec2c18p-32f, 0.0f, 0.0f, 0.0f, 0x1.a0dd42p-46f, 0x1.39d422p-99f, 0.0f, 0.0f,
     0.0f, 0x1.853072p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfb638p-98f, 0.0f,
     0x1.0f268ep-72f, 0x1.df41fep-105f, 0x1.17d2f2p-73f, 0x1.6aaab4p-58f,
     0x1.be2c1ap-28f, 0.0f, 0x1.e06226p-95f, 0x1.461a4cp-120f, 0.0f, 0.0f, 0.0f,
     0x1.e19a3ap-98f, 0.0f, 0.0f, 0x1.367838p-125f, 0.0f, 0.0f, 0x1.f785f6p-74f, 0.0f,
     0x1.24be32p-82f, 0.0f, 0x1.c8cf7p-67f, 0.0f, 0.0f, 0.0f, 0x1.b5b55ep-12f, 0.0f,
     0.0f, 0.0f, 0x1.e0983ap-27f, 0.0f, 0x1.cb19e8p-51f, 0.0f, 0x1.305a6cp-22f,
     0x1.0a62bap-47f, 0.0f, 0.0f, 0x1.ba4bep-102f, 0x1.fef054p-95f, 0.0f,
     0x1.18d938p-37f, 0x1.e15cdcp-82f, 0x1.a5025ep-7f, 0.0f, 0.0f, 0.0f,
     0x1.8f90ep-82f, 0.0f, 0.0f, 0x1.7b7b64p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4edc18p-41f, 0x1.4c2fb8p-107f, 0.0f, 0.0f, 0x1.a3e048p-22f, 0x1.003374p-32f,
     0.0f, 0x1.a44feep-119f, 0.0f, 0.0f, 0x1.307f8ep-63f, 0x1.712672p-20f,
     0x1.bfcbcp-111f, 0.0f, 0x1.39974p-34f, 0x1.03eee8p-91f, 0x1.0523ep-58f,
     0x1.91f8fp-111f, 0.0f, 0x1.c577eap-93f, 0x1.8d375ap-101f, 0x1.eff418p-46f,
     0x1.4274c8p-50f, 0x1.a25244p-106f, 0x1.de2296p-73f, 0x1.165de6p-65f, 0.0f,
     0x1.c78628p-64f, 0.0f, 0x1.5ead3cp-124f, 0.0f, 0.0f, 0.0f, 0x1.13232p-93f, 0.0f,
     0.0f, 0x1.c9b6a8p-122f, 0x1.028292p-61f, 0x1p0f, 0x1.f51346p-53f,
     0x1.11365ep-67f, 0x1.8226f4p-99f, 0x1.c5941ap-89f, 0.0f, 0x1.a63f64p-4f, 0.0f,
     0.0f, 0.0f, 0x1.b0514ap-92f, 0.0f, 0x1.4969fcp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a1fcc8p-91f, 0.0f, 0x1.1d7f5p-48f, 0x1.95c414p-88f,
     0x1.f36664p-72f, 0.0f, 0x1.35da7ep-120f, 0x1.59bd68p-12f, 0.0f, 0x1.ef47dp-107f,
     0.0f, 0x1.379a1p-82f, 0x1.4876b2p-81f, 0x1.7b9b3cp-39f, 0x1.5d4c1ep-37f, 0.0f,
     0x1.a9a058p-79f, 0x1.b41bdcp-124f, 0.0f, 0.0f, 0x1.32b7aap-97f, 0x1.d4d0ep-122f,
     0.0f, 0x1.eb5d38p-69f, 0x1.786eeep-1f, 0x1.d4c39p-88f, 0.0f, 0x1.0b9bc4p-91f,
     0.0f, 0.0f, 0x1p0f, 0x1.efbc82p-56f, 0x1.e6b612p-102f, 0x1.c6b2cap-55f,
     0x1.1f818cp-26f, 0.0f, 0x1.7856fap-42f, 0x1.40c666p-99f, 0.0f, 0.0f, 0.0f,
     0x1.e5b3bp-82f, 0.0f, 0x1.b26d96p-60f, 0.0f, 0x1.f925bap-107f, 0x1.63ef84p-49f,
     0x1.9c85bcp-95f, 0.0f, 0.0f, 0x1.d69dc8p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf34a2p-19f, 0x1.ac9294p-97f, 0x1.6332acp-30f, 0.0f, 0.0f, 0x1.ce3228p-97f,
     0x1.be5d52p-97f, 0x1.d0f196p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6a94ep-113f, 0x1.5cc934p-78f, 0.0f, 0.0f, 0x1.ddc71cp-117f, 0.0f, 0.0f,
     0.0f, 0x1.c68284p-48f, 0.0f, 0x1.d99816p-67f, 0.0f, 0x1.4a4772p-9f,
     0x1.5c7b7ap-62f, 0.0f, 0.0f, 0x1.6125aep-85f, 0.0f, 0.0f, 0x1.fcebd2p-92f,
     0x1.9325eap-44f, 0x1.257088p-94f, 0x1.0ddd5p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c328cp-44f, 0x1.d48192p-87f, 0.0f, 0.0f, 0x1.971a86p-113f, 0.0f,
     0x1.e27c5ap-1f, 0x1.e3a09ep-1f, 0.0f, 0.0f, 0x1.88c546p-60f, 0.0f,
     0x1.1ee3cp-113f, 0x1.a44802p-65f, 0.0f, 0.0f, 0x1.02c834p-19f, 0x1.b2926p-28f,
     0x1.f9fb0ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e73da6p-76f, 0.0f, 0.0f,
     0x1.b378fcp-44f, 0x1.aefabp-125f, 0.0f, 0x1.cad57ap-92f, 0x1.351d2cp-103f,
     0x1.52adbap-73f, 0.0f, 0x1.60120ep-53f, 0x1.e3a4d2p-73f, 0.0f, 0.0f, 0.0f,
     0x1.c5c29p-35f, 0x1.bb99a8p-53f, 0x1.7b0996p-16f, 0.0f, 0.0f, 0x1.c3fcf6p-62f,
     0x1.c730fp-17f, 0.0f, 0x1.a57ff8p-52f, 0x1.ae758ap-77f, 0.0f, 0x1.409444p-88f,
     0.0f, 0.0f, 0.0f, 0x1.c933c6p-107f, 0.0f, 0.0f, 0x1.957c7p-37f, 0.0f, 0.0f,
     0x1.35b75cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5eac3ap-63f, 0.0f, 0x1.8733e6p-87f,
     0.0f, 0x1.7308d4p-105f, 0x1.e04daap-20f, 0.0f, 0x1.2da80ap-42f, 0.0f, 0.0f,
     0x1.ba837ep-33f, 0x1.9c4f26p-30f, 0.0f, 0x1.f01378p-4f, 0.0f, 0x1.026b98p-53f,
     0x1.4c1c96p-44f, 0x1.a31098p-13f, 0x1.33d9eap-60f, 0.0f, 0.0f, 0x1.aa3d2ep-84f,
     0x1.56f48ep-43f, 0x1.d67dfcp-36f, 0x1.d4ab62p-123f, 0.0f, 0.0f, 0x1.a47342p-9f,
     0x1.f7c342p-46f, 0x1.14c67ap-67f, 0x1.4d9afp-82f, 0x1.c5becap-107f, 0.0f,
     0x1.a94292p-8f, 0.0f, 0x1.17a8e4p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3c9f8p-109f,
     0.0f, 0x1.e5504cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.337fecp-67f, 0x1.bc2e24p-126f,
     0x1.d26ccp-19f, 0.0f, 0x1.bb93p-16f, 0.0f, 0x1.2c87a8p-72f, 0x1.512fd6p-65f,
     0x1.3f980cp-80f, 0x1.0cc978p-14f, 0x1.dbd28ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3a1e4p-60f, 0.0f, 0.0f, 0.0f, 0x1.6fe6f6p-57f, 0x1.d0331cp-2f, 0.0f, 0.0f,
     0x1.89daecp-111f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.0a3714p-46f, 0x1.c260ccp-35f,
     0x1.3dd10cp-98f, 0x1.1b9646p-41f, 0.0f, 0.0f, 0x1.323bdp-42f, 0x1.3d1a56p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c385dp-46f, 0.0f, 0.0f, 0x1.357ecap-46f,
     0x1.8f1b7ap-26f, 0.0f, 0x1.b3718ap-113f, 0.0f, 0.0f, 0x1.1222cp-61f,
     0x1.22b25ep-14f, 0x1.46987p-55f, 0.0f, 0x1.fe5e1p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.527778p-38f, 0x1.38366ap-118f, 0x1.778f84p-81f, 0x1.5a68fp-45f, 0.0f, 0.0f,
     0.0f, 0x1.5ec246p-10f, 0x1.b1bbd6p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84d408p-85f, 0.0f, 0x1.18f57p-28f, 0x1.c0691ep-75f, 0x1.ecf366p-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e5bb3cp-114f, 0x1.b8ac64p-56f, 0.0f, 0x1.f4e11p-53f, 0.0f,
     0.0f, 0.0f, 0x1.c12302p-8f, 0x1.396578p-27f, 0x1.c57742p-110f, 0.0f,
     0x1.2a9384p-51f, 0x1.3cc2a4p-72f, 0.0f, 0x1.ed001cp-97f, 0.0f, 0.0f,
     0x1.4d9daep-68f, 0x1.496b66p-42f, 0.0f, 0x1.cad802p-22f, 0.0f, 0x1.82618p-10f,
     0x1.4bb364p-88f, 0.0f, 0.0f, 0x1.f2649p-3f, 0.0f, 0x1.69fddep-51f,
     0x1.f20c16p-80f, 0.0f, 0x1.682656p-61f, 0x1.e0fb36p-109f, 0x1.adae88p-30f,
     0x1.bc6782p-68f, 0x1.ba7092p-94f, 0.0f, 0x1.b11382p-83f, 0.0f, 0x1p0f,
     0x1.9434acp-55f, 0x1.b5ccp-6f, 0.0f, 0x1.6d0e2ap-116f, 0.0f, 0x1.8d75bep-2f,
     0x1.75253ep-91f, 0x1.ceaa8ap-123f, 0.0f, 0.0f, 0x1.e4c606p-24f, 0.0f, 0.0f, 0.0f,
     0x1.e76866p-120f, 0x1.228e22p-30f, 0x1.a91c36p-43f, 0x1.330c68p-44f,
     0x1.152568p-101f, 0x1.4fade2p-63f, 0x1.cf327ap-118f, 0x1.b704ccp-85f, 0.0f, 0.0f,
     0x1.00302p-21f, 0.0f, 0.0f, 0.0f, 0x1.04c878p-75f, 0.0f, 0.0f, 0x1.de508ap-19f,
     0x1.ee1cc6p-92f, 0.0f, 0x1.3ae27p-9f, 0.0f, 0x1.e6c8d8p-73f, 0.0f, 0.0f,
     0x1.ba24dep-66f, 0x1.c6003ap-23f, 0.0f, 0x1.0375cep-94f, 0x1.d43dd4p-54f,
     0x1.e2aedp-97f, 0.0f, 0x1.0bbe5ep-79f, 0.0f, 0x1.2d09d4p-80f, 0.0f, 0.0f, 0.0f,
     0x1.efca3cp-105f, 0x1.7fabdcp-121f, 0.0f, 0.0f, 0x1.95108ep-61f, 0x1.d0e0cp-84f,
     0.0f, 0.0f, 0x1.ece9a2p-45f, 0.0f, 0.0f, 0x1.353744p-84f, 0x1.eb42b2p-24f, 0.0f,
     0x1.86867cp-123f, 0x1.e5aebep-112f, 0x1.c07ddep-5f, 0x1.697fd2p-23f,
     0x1.e99328p-56f, 0x1.b6ad08p-110f, 0x1.683382p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9f11p-4f, 0.0f, 0x1.f8d4bp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4315ap-31f, 0x1.a677e4p-97f, 0x1.67801p-125f, 0x1.e9fe1ap-118f, 0.0f, 0.0f,
     0.0f, 0x1.904efap-34f, 0.0f, 0x1.c76734p-62f, 0x1.927604p-96f, 0.0f, 0.0f, 0.0f,
     0x1.280902p-5f, 0.0f, 0x1.4e8a6ep-121f, 0x1.e155fp-105f, 0.0f, 0x1.2b0d48p-97f,
     0x1.4aabbap-52f, 0.0f, 0x1.d51bcep-10f, 0x1.c2d1bcp-3f, 0.0f, 0.0f,
     0x1.a1f89cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d16bp-116f, 0.0f, 0.0f, 0.0f,
     0x1.6917d2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b7d2p-102f, 0x1.5c8b8p-121f,
     0x1.381f6cp-112f, 0x1p0f, 0.0f, 0x1.6ea47cp-122f, 0.0f, 0.0f, 0.0f,
     0x1.0cf3ep-61f, 0x1.067e48p-50f, 0x1.5b7f2ep-57f, 0.0f, 0x1.a2ea92p-105f, 0.0f,
     0.0f, 0x1.7c6746p-25f, 0x1.3218d2p-78f, 0x1.83314ap-26f, 0.0f, 0x1.e3c66cp-72f,
     0.0f, 0x1.92de4cp-96f, 0.0f, 0x1.0c7fdcp-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a56a02p-101f, 0x1.e8bda4p-122f, 0x1.d589eap-3f, 0x1.f52fd2p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.954274p-110f, 0x1.1138c2p-99f, 0.0f, 0x1.f0bf7p-30f, 0.0f, 0.0f,
     0x1.7b72b4p-12f, 0x1.e31f32p-32f, 0.0f, 0.0f, 0.0f, 0x1.da74fep-1f, 0.0f, 0.0f,
     0x1.bb867p-122f, 0.0f, 0x1.43065ap-28f, 0.0f, 0x1.727a84p-101f, 0.0f,
     0x1.2aab44p-112f, 0x1.19e7eap-100f, 0.0f, 0.0f, 0x1.de0b6p-74f, 0x1.12f8bcp-22f,
     0x1.667e4cp-72f, 0x1.d5f5bap-84f, 0x1.4a3c9ap-74f, 0x1.1ebcc8p-27f,
     0x1.d78c58p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22fc2ap-98f, 0.0f, 0.0f,
     0x1.bd05dcp-110f, 0.0f, 0.0f, 0x1.787e3ep-91f, 0x1.41efc2p-36f, 0.0f, 0.0f,
     0x1.a630ap-65f, 0x1.9a7e7p-51f, 0.0f, 0x1.3fbb96p-39f, 0x1.ba8744p-36f,
     0x1.cb5c06p-69f, 0x1.166c34p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7495bp-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8239b2p-45f, 0.0f, 0x1.88fb36p-5f, 0.0f,
     0x1.c25efep-13f, 0x1.0f58dp-47f, 0x1.f64ba2p-125f, 0x1.b65de8p-45f, 0.0f, 0.0f,
     0.0f, 0x1.7a77d8p-126f, 0.0f, 0x1.cb0972p-37f, 0x1.3ce8f6p-101f, 0x1.1199dep-88f,
     0.0f, 0x1.311788p-68f, 0.0f, 0x1.7623ccp-2f, 0x1.284cd8p-72f, 0x1.cbd8c4p-54f,
     0.0f, 0.0f, 0x1.6c4336p-45f, 0.0f, 0x1.896eecp-16f, 0.0f, 0x1.5dacdep-93f,
     0x1.13d66ap-64f, 0x1.2c7088p-44f, 0.0f, 0.0f, 0x1.e67d78p-22f, 0.0f,
     0x1.19f828p-29f, 0x1.ca1d84p-54f, 0.0f, 0x1.7afea2p-126f, 0x1.d82f5ap-18f,
     0x1.44f3bp-79f, 0.0f, 0x1.4f8346p-108f, 0.0f, 0x1.39ac5ep-111f, 0x1.031ea6p-87f,
     0x1.997618p-86f, 0x1.04cf08p-110f, 0x1.01ebf2p-34f, 0.0f, 0x1.f8c48cp-35f, 0.0f,
     0.0f, 0x1.e70c6ap-62f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.cd9efep-34f, 0.0f, 0x1.3b2abp-58f, 0.0f, 0x1.5b8842p-44f, 0x1.56ad1ep-71f,
     0x1.e6668ep-84f, 0.0f, 0x1.79bd94p-69f, 0.0f, 0.0f, 0x1.6cd3dep-81f,
     0x1.9d8efp-116f, 0.0f, 0.0f, 0x1.301402p-65f, 0x1.ac1d9ep-89f, 0x1.eccb72p-122f,
     0.0f, 0x1.39e1b4p-66f, 0x1.f68982p-47f, 0x1.39f536p-106f, 0.0f, 0x1.81e242p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.443fap-74f, 0.0f, 0x1.5c877p-90f, 0x1.719dcep-49f,
     0.0f, 0x1.ad4398p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aa986p-60f, 0.0f,
     0x1.5c5f0ep-70f, 0.0f, 0x1.2f6d26p-113f, 0x1.4a25acp-5f, 0x1.4e28a6p-79f, 0.0f,
     0.0f, 0x1.d917p-25f, 0x1.3d774ap-35f, 0.0f, 0x1.43d2dap-94f, 0.0f, 0.0f, 0.0f,
     0x1.c4922cp-62f, 0.0f, 0.0f, 0x1.a376dap-77f, 0x1.fec0a6p-53f, 0.0f,
     0x1.07f442p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ba356p-110f, 0x1.0a108ep-50f, 0.0f,
     0x1.de9806p-31f, 0.0f, 0x1.f11d4ap-40f, 0x1.ae6322p-7f, 0.0f, 0x1.9aadep-27f,
     0x1.b94a0cp-10f, 0.0f, 0.0f, 0x1.4889a4p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.990fd6p-66f, 0x1.180056p-68f, 0x1.dd93dap-90f, 0.0f, 0.0f, 0x1.20557cp-125f,
     0x1.30f6ap-107f, 0x1.15ba7cp-20f, 0x1.320fdcp-76f, 0.0f, 0x1.19574ap-103f, 0.0f,
     0.0f, 0x1.e67e5ep-74f, 0x1.1dc31p-98f, 0.0f, 0.0f, 0.0f, 0x1.85a6acp-108f,
     0x1.cc6accp-87f, 0x1.d107e8p-5f, 0x1.7993dap-73f, 0.0f, 0x1.4589fcp-85f, 0.0f,
     0x1.bda5f2p-117f, 0x1.93c4acp-70f, 0x1.d6936ep-114f, 0.0f, 0.0f, 0x1.86a358p-30f,
     0x1.334864p-57f, 0x1.6a2cp-35f, 0.0f, 0x1.06ee6cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.8e185p-84f, 0x1.b6fc48p-16f, 0.0f, 0.0f, 0x1.049d56p-112f, 0x1.5ca13ep-77f,
     0x1.6893e4p-81f, 0.0f, 0x1.d1dd5p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.976016p-31f,
     0x1.b82304p-120f, 0.0f, 0.0f, 0x1.35a75ep-122f, 0x1.c38c3ep-38f,
     0x1.1ce40ep-125f, 0.0f, 0x1.319a8cp-75f, 0.0f, 0.0f, 0x1.a13998p-45f, 0.0f,
     0x1.8d52dap-96f, 0.0f, 0.0f, 0x1.f61796p-51f, 0x1.4d285cp-46f, 0x1p0f, 0.0f,
     0x1.727d84p-95f, 0.0f, 0.0f, 0.0f, 0x1.dc16dep-102f, 0x1p0f, 0.0f,
     0x1.6b7866p-59f, 0.0f, 0x1.dfeb8p-94f, 0.0f, 0.0f, 0.0f, 0x1.7ac40ap-57f, 0.0f,
     0x1.b66dd2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58ce24p-9f, 0x1.dc7616p-120f, 0.0f,
     0x1.e74c3cp-89f, 0.0f, 0.0f, 0x1.80084ap-12f, 0x1.4766c8p-95f, 0x1.544eacp-120f,
     0x1.246ba4p-46f, 0x1.d34d04p-105f, 0x1.65f654p-47f, 0x1.52380ep-114f,
     0x1.777fc8p-97f, 0.0f, 0x1.e95deep-84f, 0.0f, 0x1.5637a2p-99f, 0.0f, 0.0f, 0.0f,
     0x1.06f802p-11f, 0.0f, 0.0f, 0x1.fa8232p-39f, 0.0f, 0.0f, 0x1.0c462ap-94f,
     0x1.8a5f5p-121f, 0x1.0347cap-116f, 0x1.80993cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ad2aap-40f, 0.0f, 0.0f, 0x1.6c5ad6p-59f, 0.0f, 0x1.da4772p-14f,
     0x1.90b46cp-23f, 0x1.66f2c2p-90f, 0x1.70fc5ep-91f, 0.0f, 0x1.a9b3ccp-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a3fbep-103f, 0x1.7ceb86p-60f, 0.0f,
     0x1.cd2d88p-76f, 0.0f, 0x1.158e78p-59f, 0x1.b9c7c2p-39f, 0.0f, 0x1.a93dbap-5f,
     0.0f, 0x1.9eab22p-9f, 0x1.6ac90ep-61f, 0.0f, 0.0f, 0x1.16d432p-104f, 0.0f, 0.0f,
     0.0f, 0x1.f802fap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2b8c2p-7f, 0.0f,
     0x1.fc2c02p-18f, 0x1.c04a44p-30f, 0.0f, 0x1.bcba56p-8f, 0x1.1cc88ap-20f,
     0x1.9f7ee2p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a7e66p-86f, 0.0f, 0.0f, 0.0f,
     0x1.299758p-50f, 0x1.4dba78p-38f, 0.0f, 0x1.63ee8ap-100f, 0x1.165988p-32f, 0.0f,
     0x1.03d56ap-12f, 0x1.cf626ep-106f, 0.0f, 0.0f, 0x1.ff59ccp-13f, 0x1.24eb68p-111f,
     0.0f, 0.0f, 0x1.ea24acp-50f, 0.0f, 0.0f, 0x1.82c80cp-3f, 0.0f, 0.0f,
     0x1.d9b438p-91f, 0.0f, 0x1.635634p-28f, 0.0f, 0.0f, 0.0f, 0x1.117846p-33f, 0.0f,
     0.0f, 0x1.f58434p-62f, 0x1.cafd54p-114f, 0x1.ac1ef4p-10f, 0x1.13cd6cp-70f,
     0x1.d70db8p-121f, 0.0f, 0.0f, 0x1.c17faap-15f, 0x1.ae1824p-66f, 0.0f, 0.0f, 0.0f,
     0x1.6865f8p-46f, 0.0f, 0x1.ecda02p-8f, 0x1.2e52eap-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.766bccp-80f, 0.0f, 0x1.b0e42ap-119f, 0.0f, 0.0f,
     0x1.11f03ep-121f, 0x1.eeb8eep-76f, 0.0f, 0x1.01b066p-34f, 0x1.033c84p-12f, 0.0f,
     0x1.c60aa2p-126f, 0.0f, 0x1.aad5bcp-90f, 0x1.073f2ap-5f, 0.0f, 0x1.01706ap-58f,
     0x1.ebf554p-121f, 0x1.4526dap-30f, 0x1.60e83ep-59f, 0.0f, 0x1.bf934cp-50f, 0.0f,
     0x1.69d222p-81f, 0.0f, 0.0f, 0.0f, 0x1.e81c4ap-87f, 0x1.4b6f7p-119f, 0.0f, 0.0f,
     0x1.cc8f76p-32f, 0.0f, 0x1.f91818p-72f, 0.0f, 0x1.b1266p-13f, 0x1.49ad3ap-48f,
     0.0f, 0x1.c85da6p-58f, 0x1.3b449p-31f, 0x1p0f, 0.0f, 0x1.3b2e86p-40f, 0.0f,
     0x1.445b12p-81f, 0.0f, 0x1.3243c6p-75f, 0x1.7a41ap-87f, 0x1.f7907ap-66f, 0.0f,
     0x1.8de146p-100f, 0x1.7d4a08p-27f, 0.0f, 0x1.753476p-19f, 0x1.f6082ep-64f, 0.0f,
     0x1.c977a8p-44f, 0x1.9ad228p-101f, 0.0f, 0.0f, 0x1.4d18ep-90f, 0x1.faffap-95f,
     0x1.e484fcp-119f, 0x1.e1509p-125f, 0x1.2c52f8p-41f, 0.0f, 0.0f, 0x1.a46578p-60f,
     0x1.bd1a2ap-109f, 0.0f, 0.0f, 0x1.c7e3ap-5f, 0x1.c2492ap-12f, 0x1.f6550cp-54f,
     0.0f, 0.0f, 0.0f, 0x1.b7914ep-91f, 0.0f, 0.0f, 0x1.9cbcc6p-64f, 0x1.a9d748p-44f,
     0x1.ed101p-14f, 0x1.3051e6p-54f, 0x1.64f8aep-42f, 0x1.9f9bb4p-108f, 0.0f,
     0x1.802cb2p-33f, 0.0f, 0.0f, 0.0f, 0x1.48ec72p-79f, 0.0f, 0x1.7d2a9p-91f, 0.0f,
     0.0f, 0.0f, 0x1.85c87ep-10f, 0x1.ab428ep-65f, 0.0f, 0x1.18363cp-33f, 0.0f, 0.0f,
     0x1.24dea2p-70f, 0x1.5a4feap-47f, 0.0f, 0x1.d97ae8p-55f, 0x1.5e90a4p-53f,
     0x1.3007ep-81f, 0x1.12a14cp-26f, 0x1.97d074p-60f, 0.0f, 0.0f, 0x1.a7c5f4p-13f,
     0.0f, 0.0f, 0.0f, 0x1.dfc12ap-124f, 0.0f, 0x1.425c1p-114f, 0.0f, 0.0f, 0.0f,
     0x1.a1e9a4p-105f, 0x1.39224ap-78f, 0x1.5672ap-35f, 0x1.d817fcp-86f,
     0x1.a24acp-52f, 0.0f, 0x1.c5ad5ap-21f, 0x1.7e60cp-99f, 0.0f, 0x1.72dc7ep-40f,
     0x1.3b70fep-23f, 0x1.acc2dep-75f, 0x1.6026ep-5f, 0x1.fcb5bep-22f, 0.0f,
     0x1.b6b43ap-92f, 0x1.100646p-79f, 0x1.df25d4p-61f, 0x1.2a4ba8p-38f, 0.0f, 0.0f,
     0.0f, 0x1.3e66a4p-38f, 0.0f, 0.0f, 0x1.b34804p-47f, 0.0f, 0x1.bdb772p-60f, 0.0f,
     0.0f, 0x1.ef5368p-120f, 0x1.ae5ep-9f, 0.0f, 0.0f, 0x1.11d74ap-38f,
     0x1.5ff0a2p-40f, 0x1.32715cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44f2dcp-83f, 0x1.58a1c2p-65f, 0x1.2c67ecp-38f, 0.0f, 0.0f, 0x1.2c5e3cp-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4889e2p-33f, 0x1.038ca2p-100f, 0.0f, 0x1.c9d4a4p-72f,
     0x1.24edeep-31f, 0x1.6a5a98p-115f, 0x1.a72338p-121f, 0.0f, 0x1.a85184p-112f,
     0x1.15261ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49d05cp-44f, 0.0f,
     0x1.b582cp-4f, 0x1.0dd314p-20f, 0.0f, 0.0f, 0x1.04648ap-35f, 0.0f, 0.0f,
     0x1.9170ecp-82f, 0.0f, 0x1.79e832p-5f, 0.0f, 0.0f, 0x1.c39a8ap-25f, 0.0f,
     0x1.d5579p-72f, 0.0f, 0x1.bca09p-90f, 0.0f, 0x1.2ee378p-125f, 0.0f, 0.0f,
     0x1.f1b2ecp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e05962p-21f,
     0.0f, 0x1.a2223ap-22f, 0x1.536a22p-4f, 0x1.107f4ap-55f, 0x1.6d8b18p-33f,
     0x1.d08e24p-53f, 0x1.092688p-71f, 0x1.cf5764p-18f, 0x1.e483a8p-113f, 0.0f, 0.0f,
     0.0f, 0x1.5be276p-32f, 0.0f, 0x1.d7ecc6p-24f, 0.0f, 0.0f, 0x1.a14f98p-112f, 0.0f,
     0x1.b95ae2p-121f, 0x1.cd9ac6p-17f, 0x1.ca7ceap-97f, 0.0f, 0.0f, 0.0f,
     0x1.eea364p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c98fap-56f, 0.0f, 0.0f,
     0x1.ac3d7p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e69306p-107f, 0x1.ad04eep-35f, 0x1.2b4ee6p-84f, 0.0f, 0x1.49a2b4p-125f, 0.0f,
     0.0f, 0x1.a6948cp-41f, 0.0f, 0x1.104462p-58f, 0.0f, 0x1.cf8bfp-63f,
     0x1.2ba906p-24f, 0x1.bdcc58p-30f, 0x1.a94ce6p-21f, 0x1.d622e8p-41f,
     0x1.c36edcp-110f, 0.0f, 0x1.d791a4p-105f, 0.0f, 0x1.8e36e4p-87f, 0.0f,
     0x1.e6fa42p-53f, 0.0f, 0.0f, 0x1.96e4cep-34f, 0x1.9ffcep-47f, 0x1.31c7f2p-96f,
     0x1.cee4a8p-122f, 0.0f, 0x1.477b8p-1f, 0.0f, 0x1.0b38f2p-20f, 0x1.de432p-126f,
     0x1.13945ap-46f, 0.0f, 0.0f, 0.0f, 0x1.0a9d4ap-25f, 0x1.16e2ap-66f,
     0x1.bb9972p-17f, 0.0f, 0x1.67882p-40f, 0x1.d12ap-5f, 0.0f, 0x1.b77cb8p-29f,
     0x1.2345bp-68f, 0x1.bb1f5ap-116f, 0.0f, 0x1.3f88aep-113f, 0.0f, 0.0f, 0.0f,
     0x1.248b82p-56f, 0x1.a9dc0ap-120f, 0x1.966e0ep-108f, 0.0f, 0x1.2c608cp-97f, 0.0f,
     0.0f, 0.0f, 0x1.829ceep-11f, 0x1.c99b54p-124f, 0.0f, 0x1.3322ccp-118f,
     0x1.13c52p-96f, 0.0f, 0.0f, 0.0f, 0x1.ecd598p-118f, 0.0f, 0.0f, 0x1.ce1716p-20f,
     0x1.a35f66p-35f, 0x1.50b35ap-43f, 0x1.8ec186p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bec99p-118f, 0x1.9ee378p-42f, 0.0f, 0.0f, 0.0f, 0x1.b5b642p-116f, 0.0f,
     0.0f, 0.0f, 0x1.6aedcep-14f, 0.0f, 0x1.db2072p-47f, 0.0f, 0.0f, 0x1.9729bcp-100f,
     0x1.78b95ep-95f, 0x1.e51fd8p-63f, 0x1.93a9acp-41f, 0x1.36f05ep-49f, 0.0f,
     0x1.1ef4a4p-26f, 0.0f, 0x1.c09accp-45f, 0x1.e0041ep-28f, 0x1.d46a3cp-83f,
     0x1.de51d4p-20f, 0.0f, 0.0f, 0x1.82b3bap-39f, 0x1.d61e88p-6f, 0x1.7d3fecp-78f,
     0x1.bb1d86p-52f, 0x1.46e2aap-93f, 0.0f, 0x1.00a4dcp-62f, 0x1.6f53eap-55f, 0.0f,
     0.0f, 0.0f, 0x1.f4d888p-93f, 0.0f, 0x1.40286cp-87f, 0x1.9de128p-23f, 0.0f, 0.0f,
     0x1.e80164p-53f, 0.0f, 0x1.71746ep-27f, 0.0f, 0.0f, 0x1.97d57cp-40f, 0.0f, 0.0f,
     0x1.7d5f44p-91f, 0x1.228a6cp-31f, 0x1.300062p-28f, 0x1.c70ae8p-40f,
     0x1.5b51f6p-68f, 0.0f, 0x1.f2ece2p-15f, 0x1.d44268p-23f, 0x1.ce33eep-18f, 0.0f,
     0.0f, 0.0f, 0x1.d5a17ap-9f, 0.0f, 0.0f, 0x1.19e3a8p-117f, 0x1.6539e8p-121f, 0.0f,
     0x1.cd693ep-105f, 0x1.ac742cp-43f, 0.0f, 0x1.9f485cp-37f, 0x1.861a02p-33f, 0.0f,
     0.0f, 0x1.a54a6ep-100f, 0x1.25978ep-55f, 0.0f, 0x1.e1fb1p-82f, 0x1.5a6b3ap-118f,
     0x1.31dc3ep-11f, 0x1.dff316p-14f, 0x1.c0d67cp-102f, 0x1.d6b1dep-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9573d6p-92f, 0x1.a60d04p-9f, 0x1.13a9d2p-42f,
     0x1.9ce514p-38f, 0.0f, 0x1.82673p-89f, 0.0f, 0x1.cc6f8p-40f, 0.0f, 0.0f,
     0x1.46dfbap-50f, 0x1.9f8e1ap-62f, 0x1.4579eap-47f, 0.0f, 0.0f, 0x1.57d7dep-63f,
     0x1.c5b692p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c7428p-110f, 0x1.3a6954p-20f,
     0x1.45af0ap-36f, 0.0f, 0x1.330beep-59f, 0.0f, 0x1.fdc7c6p-25f, 0x1.6de6f6p-113f,
     0.0f, 0.0f, 0.0f, 0x1.f6602p-104f, 0x1.2a82a2p-4f, 0.0f, 0.0f, 0x1.489eb8p-125f,
     0.0f, 0.0f, 0.0f, 0x1.bc030ap-88f, 0x1.6f191cp-70f, 0.0f, 0.0f, 0x1.a6475ep-124f,
     0.0f, 0x1.64f9bp-67f, 0x1.ae4674p-124f, 0.0f, 0.0f, 0x1.98fafcp-18f,
     0x1.3b28a6p-106f, 0.0f, 0.0f, 0x1.414f6p-38f, 0x1.529ea2p-23f, 0.0f, 0.0f, 0.0f,
     0x1.2759aap-42f, 0x1.09aaa8p-50f, 0.0f, 0x1.f41612p-90f, 0x1.a66be4p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3bbb8p-21f, 0x1.ef6334p-10f, 0x1.0b2bf8p-19f,
     0x1.1df436p-81f, 0.0f, 0.0f, 0.0f, 0x1.b0d31ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.808a7cp-99f, 0x1.be53bp-64f, 0.0f, 0.0f, 0.0f, 0x1.8e37bp-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7463ep-2f, 0x1.59abe8p-11f, 0.0f, 0.0f, 0x1.01366p-35f, 0.0f,
     0x1.262ff8p-63f, 0x1.3e388ap-49f, 0x1.fbf836p-101f, 0.0f, 0x1.acf6cap-96f,
     0x1.c4e6b2p-95f, 0x1.a82abp-64f, 0x1.fc4788p-16f, 0.0f, 0.0f, 0x1.f3e27p-34f,
     0x1.33afb8p-121f, 0x1.e3fde2p-67f, 0x1.0cdce2p-78f, 0x1.6b535ap-119f, 0.0f, 0.0f,
     0.0f, 0x1.9bc364p-106f, 0.0f, 0.0f, 0x1.77a61p-16f, 0x1.e1e3a4p-114f, 0.0f, 0.0f,
     0x1.f86c32p-36f, 0x1.767d26p-9f, 0x1.e86b18p-109f, 0.0f, 0x1.77d374p-41f,
     0x1.5b6996p-48f, 0.0f, 0x1.a5ec24p-120f, 0x1.fc613ap-125f, 0x1.54b9cp-108f, 0.0f,
     0.0f, 0.0f, 0x1.569cf8p-5f, 0.0f, 0.0f, 0x1.1b992ep-52f, 0x1.8e6216p-28f, 0.0f,
     0.0f, 0x1.ac8e5cp-48f, 0.0f, 0x1.2306e8p-40f, 0x1.9383c4p-29f, 0.0f,
     0x1.c1068ap-110f, 0x1.95616ep-1f, 0x1.0032aep-5f, 0.0f, 0.0f, 0x1.390d0cp-3f,
     0x1.16757p-108f, 0.0f, 0.0f, 0x1.ce56b6p-124f, 0.0f, 0x1.d572f6p-123f, 0.0f,
     0.0f, 0x1.384b3ap-46f, 0x1.673bap-50f, 0x1.298cd4p-90f, 0.0f, 0.0f,
     0x1.5c6136p-64f, 0x1.92aca6p-122f, 0.0f, 0.0f, 0.0f, 0x1.092f56p-28f,
     0x1.78fb48p-45f, 0.0f, 0x1.e9427ap-1f, 0.0f, 0.0f, 0x1.f5406p-57f,
     0x1.b3413p-29f, 0.0f, 0.0f, 0x1.18a268p-111f, 0.0f, 0x1.1b3b62p-16f, 0.0f, 0.0f,
     0x1.073e6p-15f, 0x1.058554p-35f, 0x1.6f1ce8p-86f, 0x1.c4e6ccp-92f, 0.0f,
     0x1.374f16p-30f, 0x1.e7c0fap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d389c2p-16f, 0.0f, 0x1.a4888ep-89f, 0x1.070394p-10f, 0.0f, 0.0f, 0.0f,
     0x1.0b9c8ap-70f, 0x1.9fca82p-30f, 0.0f, 0x1.2fcbc8p-110f, 0x1p0f, 0.0f,
     0x1.7c031cp-45f, 0.0f, 0x1.7c84aep-82f, 0.0f, 0x1.9e62a2p-72f, 0.0f,
     0x1.4c550ep-20f, 0.0f, 0x1.4d8f8cp-91f, 0.0f, 0.0f, 0x1.c8804cp-65f, 0.0f, 0.0f,
     0x1.e6707ap-19f, 0.0f, 0x1.a49f72p-105f, 0x1.560c9ep-86f, 0.0f, 0x1.4b50bp-33f,
     0x1.4f8ddap-37f, 0x1.4d5094p-98f, 0x1.e5ed1ep-17f, 0x1.8772a2p-110f,
     0x1.3ea6fep-94f, 0.0f, 0.0f, 0x1.0160fp-39f, 0.0f, 0.0f, 0x1.cd961ep-45f,
     0x1.3cc198p-85f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_fdimf4_kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_fdimf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fdimf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
