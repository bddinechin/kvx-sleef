/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f4_u10kvx.c --function \
 *     Sleef_finz_exp2f4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0x1.5e234p-24f, 0x1.af1c5ep-120f, 0.0f, 0x1.4bc2cep-69f, 0x1.5804fep-103f, 0.0f,
     0x1.086ac2p-58f, 0.0f, 0x1.9e9f1cp-109f, 0x1.69c6bap-53f, 0.0f, 0.0f, 0.0f,
     0x1.58ca3p-114f, 0.0f, 0x1.f5b928p-112f, 0x1.ba5ac6p-26f, 0x1.a6f1acp-14f, 0.0f,
     0x1.b68292p-69f, 0.0f, 0.0f, 0.0f, 0x1.adce44p-65f, 0.0f, 0x1.0a0e4ep-111f,
     0x1.14fed6p-107f, 0x1.bf0f1ap-91f, 0.0f, 0x1.a506b6p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8808d4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a0fbp-60f, 0x1.61135p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1dbd8cp-15f, 0x1.8df056p-44f, 0x1.6489b2p-33f,
     0x1.bfb0ep-115f, 0x1.ffce1cp-88f, 0x1.c9957p-47f, 0x1.e3067ep-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4210f2p-104f, 0.0f, 0x1.0a8c5ap-84f, 0x1.6f698ep-43f,
     0x1.e7768ep-50f, 0x1.7fcd5ap-56f, 0.0f, 0.0f, 0x1.ef2b88p-119f, 0x1.aa7cc6p-66f,
     0x1.3d5326p-10f, 0.0f, 0.0f, 0x1.42a872p-65f, 0x1.05d034p-109f, 0x1.0d4b9ap-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.723106p-84f, 0x1.70b90cp-92f, 0.0f, 0.0f,
     0x1.05cd4p-59f, 0x1.91aafep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb0316p-25f, 0x1.e79574p-52f, 0x1.86e99cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd1252p-125f, 0x1.e402bp-93f, 0x1.942408p-63f, 0.0f, 0x1.87866cp-86f,
     0.0f, 0x1.690ec6p-22f, 0x1.9737a6p-14f, 0x1.b45054p-49f, 0x1.782a18p-76f,
     0x1.bc7e52p-28f, 0.0f, 0.0f, 0x1.a887acp-118f, 0.0f, 0.0f, 0x1.2628aap-57f,
     0x1.630918p-90f, 0.0f, 0.0f, 0x1.03774cp-119f, 0.0f, 0.0f, 0x1.f044cap-93f, 0.0f,
     0.0f, 0x1.ae9cdcp-6f, 0.0f, 0.0f, 0.0f, 0x1.27ca1ap-113f, 0x1.aa6568p-108f,
     0x1.fe99aap-66f, 0x1.c7359cp-23f, 0x1.ebefc8p-71f, 0.0f, 0x1.e53856p-78f, 0.0f,
     0.0f, 0x1.a6b7fp-80f, 0x1.912eb6p-108f, 0x1.acd4c4p-87f, 0.0f, 0.0f,
     0x1.f4e814p-79f, 0.0f, 0x1.3fa06ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd653ap-7f,
     0x1.c63898p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a0048p-34f,
     0x1.a3e8ap-15f, 0.0f, 0x1.15a612p-73f, 0x1.033af2p-14f, 0x1.bb875ap-48f, 0.0f,
     0x1.54462cp-42f, 0x1.9c135ap-96f, 0x1.bb613p-75f, 0x1.9fc538p-40f,
     0x1.d475d2p-108f, 0x1.2f96cap-94f, 0.0f, 0x1.a9eafap-69f, 0.0f, 0.0f,
     0x1.fb0362p-31f, 0x1.a8f9dp-97f, 0x1.1abad8p-97f, 0x1.5061f2p-95f, 0.0f,
     0x1.1f09dep-4f, 0.0f, 0x1.66a84p-7f, 0x1.0575c2p-67f, 0x1.849feap-77f, 0.0f,
     0x1.292d22p-69f, 0x1.db5cc6p-80f, 0.0f, 0x1.557c6ap-48f, 0x1.13e8p-118f,
     0x1.dfcf9cp-15f, 0x1.69857cp-39f, 0.0f, 0x1.78793cp-16f, 0x1.18db88p-34f, 0.0f,
     0.0f, 0x1.c0f51ap-34f, 0.0f, 0.0f, 0.0f, 0x1.671c64p-70f, 0.0f, 0x1.1d98aap-52f,
     0x1.71cdfcp-106f, 0x1.025e6cp-46f, 0x1.1b285ap-45f, 0x1.5f6eaep-12f, 0.0f, 0.0f,
     0.0f, 0x1.96e4c6p-13f, 0x1.dda5fep-56f, 0x1.4e0f48p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29262ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9d04ap-41f,
     0x1.2eb1fp-19f, 0x1.0366bep-64f, 0x1.c7513cp-21f, 0.0f, 0.0f, 0.0f,
     0x1.940408p-119f, 0x1.087d7ep-10f, 0x1.61e74p-38f, 0.0f, 0.0f, 0x1.1844bcp-64f,
     0x1.dbede2p-119f, 0x1.cca5ecp-89f, 0.0f, 0.0f, 0x1.da95f2p-108f, 0x1.8065b2p-30f,
     0.0f, 0.0f, 0.0f, 0x1.ee5abcp-89f, 0x1.7c31e4p-122f, 0x1.222e86p-85f, 0.0f,
     0x1.558c28p-19f, 0x1.0dd44ap-55f, 0.0f, 0x1.fa60c4p-70f, 0x1.f56ea4p-81f,
     0x1.e7a72p-102f, 0x1.4f3254p-25f, 0.0f, 0.0f, 0.0f, 0x1.48d1a4p-37f, 0.0f, 0.0f,
     0.0f, 0x1.9e804ap-38f, 0x1.2f57ap-119f, 0x1.c82962p-108f, 0x1.43a62cp-8f,
     0x1.4564fap-70f, 0.0f, 0x1.7cd432p-23f, 0.0f, 0x1.9352a8p-68f, 0x1.4d54cp-109f,
     0x1.0cabfep-45f, 0x1.34057p-30f, 0x1.8ae04p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ce8dap-27f, 0.0f, 0x1.f5ecccp-83f, 0x1.d181eap-63f, 0.0f, 0x1.b4351ap-14f,
     0x1.a33274p-98f, 0x1.303134p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa4102p-39f,
     0x1.0f7236p-5f, 0x1.5ce4fap-15f, 0x1.05c454p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e67262p-118f, 0.0f, 0x1.6ac9a2p-45f, 0.0f, 0x1.909412p-104f, 0x1.b74c02p-81f,
     0.0f, 0x1.dece98p-64f, 0x1.f8c39ap-41f, 0x1.1b3376p-80f, 0x1.76cdfp-2f,
     0x1.5e0cc2p-100f, 0x1.892ac8p-66f, 0.0f, 0x1.1eebc6p-86f, 0.0f, 0.0f, 0.0f,
     0x1.02bf36p-86f, 0x1.23d61cp-126f, 0.0f, 0.0f, 0x1.cda412p-87f, 0x1.799f6cp-107f,
     0x1.26929cp-26f, 0.0f, 0x1.27ff1p-20f, 0.0f, 0x1.687972p-26f, 0x1.e44af6p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86ead8p-37f, 0x1.03bbe6p-83f, 0.0f, 0.0f, 0.0f,
     0x1.f2a306p-34f, 0x1.028e54p-102f, 0x1.444228p-32f, 0x1.49f8eep-106f,
     0x1.59d3c4p-67f, 0x1.e7c144p-16f, 0.0f, 0.0f, 0x1.ad74dep-3f, 0x1.92d34ap-16f,
     0x1.42b2c4p-15f, 0x1.84a422p-99f, 0.0f, 0.0f, 0x1.c37166p-35f, 0.0f,
     0x1.10f6bcp-121f, 0x1.de94aap-107f, 0.0f, 0x1.778af6p-13f, 0x1.322118p-11f,
     0x1.f933bcp-32f, 0x1.81e246p-84f, 0.0f, 0x1.bb706ep-97f, 0.0f, 0.0f, 0.0f,
     0x1.b02d4cp-116f, 0.0f, 0x1.72ce5p-3f, 0x1.d04448p-1f, 0x1.23d2e6p-57f,
     0x1.480574p-44f, 0x1.a07ecp-19f, 0.0f, 0.0f, 0x1p0f, 0x1.96a804p-14f, 0.0f,
     0x1.e50eccp-51f, 0.0f, 0x1.a35bbcp-10f, 0.0f, 0x1.5741e2p-18f, 0.0f, 0.0f, 0.0f,
     0x1.f9418p-89f, 0.0f, 0.0f, 0x1.9bad3ep-120f, 0.0f, 0x1.85738p-101f, 0.0f, 0.0f,
     0x1.5f13acp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c54da4p-99f, 0.0f, 0.0f,
     0.0f, 0x1.9f2568p-5f, 0.0f, 0x1.93a51ap-111f, 0.0f, 0.0f, 0x1.fc07d4p-20f, 0.0f,
     0x1.dfa9bcp-17f, 0.0f, 0.0f, 0.0f, 0x1.d8c4dp-76f, 0.0f, 0x1.22db1p-52f, 0.0f,
     0.0f, 0.0f, 0x1.b96a54p-116f, 0x1.89c552p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa9c26p-107f, 0.0f, 0.0f, 0x1.378f14p-77f, 0x1.57fcf2p-48f, 0.0f,
     0x1.2f8822p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.747934p-70f, 0x1.a2f6b6p-58f,
     0x1.18b93p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.331246p-123f, 0.0f, 0x1.001906p-14f,
     0x1.4ecf9p-68f, 0.0f, 0x1.c1fb96p-94f, 0.0f, 0.0f, 0x1.265bacp-74f,
     0x1.8460ecp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ca17cp-21f, 0x1.48388ap-80f,
     0x1.09ed02p-80f, 0x1.669e1ep-80f, 0x1.402c96p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37b596p-46f, 0.0f, 0x1.21b5a8p-17f, 0x1.ee3cf6p-42f, 0x1.a48fe6p-126f,
     0x1.e60cbp-16f, 0.0f, 0x1.c49e22p-125f, 0.0f, 0x1.23c37cp-85f, 0x1.2fb66ap-33f,
     0x1.a10a1p-43f, 0x1.5de65ep-124f, 0.0f, 0x1.1a1012p-75f, 0x1.b4e47ep-68f,
     0x1.463e26p-84f, 0x1.d02b8ap-110f, 0x1.5f639ap-67f, 0x1.755126p-11f, 0.0f,
     0x1.9ffe38p-77f, 0.0f, 0x1.e37fdp-72f, 0x1.d67e46p-32f, 0.0f, 0x1.3198d2p-35f,
     0.0f, 0.0f, 0x1.9cab8cp-118f, 0.0f, 0x1.373d08p-96f, 0.0f, 0.0f, 0x1.4c96p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1862ap-38f, 0x1.c4bbb6p-39f, 0x1.161d3ep-45f,
     0x1.6d16a4p-109f, 0.0f, 0x1.0213e4p-17f, 0.0f, 0.0f, 0x1.743eb8p-102f,
     0x1.0efb86p-55f, 0x1.581cf4p-69f, 0.0f, 0x1.cc6bdcp-53f, 0.0f, 0.0f,
     0x1.e337d2p-116f, 0.0f, 0.0f, 0x1.642404p-21f, 0x1.7312dp-13f, 0.0f,
     0x1.30f1ecp-85f, 0x1.1abe18p-93f, 0x1.d891e8p-52f, 0.0f, 0x1.b1ab3ap-115f,
     0x1.b98768p-46f, 0.0f, 0.0f, 0x1.5d61c2p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.182fdap-121f, 0x1.cbde38p-43f, 0.0f, 0x1.83bd88p-47f, 0x1.6373a2p-101f,
     0x1.9f1cf8p-26f, 0.0f, 0x1.17187cp-32f, 0x1.b4edbep-116f, 0.0f, 0x1.d9ab46p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.756a4ep-2f, 0x1.b38c34p-122f, 0.0f,
     0x1.70099ep-47f, 0.0f, 0.0f, 0x1.53388cp-79f, 0x1.5f011ep-116f, 0x1p0f,
     0x1.807e86p-104f, 0.0f, 0x1.8ff3e8p-78f, 0.0f, 0.0f, 0.0f, 0x1.2fc67ap-82f, 0.0f,
     0x1.c3e68ep-27f, 0x1.bf976p-50f, 0.0f, 0.0f, 0x1.c5e268p-88f, 0x1.fa194ap-113f,
     0.0f, 0.0f, 0.0f, 0x1.55f67ep-48f, 0x1.4ecb1ep-96f, 0x1.45dcbp-94f, 0.0f,
     0x1.68b4d2p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a54466p-71f, 0.0f, 0.0f, 0.0f,
     0x1.2dd8a2p-63f, 0x1.c8723cp-103f, 0x1.051294p-61f, 0.0f, 0.0f, 0x1.b99054p-65f,
     0.0f, 0x1.f11f7ap-17f, 0x1.49746cp-23f, 0x1.3c2e2p-89f, 0.0f, 0x1.1685cap-42f,
     0.0f, 0x1.b70b3ap-51f, 0.0f, 0x1.92fbcp-114f, 0x1.d23cc4p-105f, 0.0f,
     0x1.331dap-2f, 0.0f, 0.0f, 0x1.88ff06p-50f, 0x1.5b5f5ep-5f, 0.0f, 0.0f, 0.0f,
     0x1.3e46bp-121f, 0x1.5186p-103f, 0.0f, 0x1.169b42p-95f, 0x1.919492p-89f,
     0x1.196ea2p-74f, 0.0f, 0x1.2bb084p-70f, 0.0f, 0.0f, 0x1.a2defap-39f,
     0x1.08ec64p-119f, 0x1.61b58cp-16f, 0x1.90b2fp-65f, 0.0f, 0.0f, 0x1.2d750ep-23f,
     0x1.b7bc6ap-122f, 0x1.48c1cep-104f, 0.0f, 0.0f, 0x1.7bbe4ap-3f, 0.0f, 0.0f,
     0x1.04db54p-23f, 0.0f, 0x1.b3d6b8p-85f, 0x1p0f, 0x1.dc4ed6p-50f, 0x1.178b98p-81f,
     0.0f, 0x1.33d99cp-40f, 0.0f, 0x1.1a0492p-95f, 0.0f, 0.0f, 0.0f, 0x1.f3624ap-6f,
     0x1.fdf072p-100f, 0.0f, 0.0f, 0x1.141414p-114f, 0.0f, 0x1.28935ap-63f, 0.0f,
     0x1.08ad7ep-98f, 0.0f, 0x1.a31832p-102f, 0.0f, 0.0f, 0.0f, 0x1.c6d79p-113f, 0.0f,
     0x1.b0b48ep-58f, 0x1.32be02p-98f, 0.0f, 0x1.c58d24p-75f, 0x1.cbd436p-125f,
     0x1.6de2d8p-84f, 0x1.f2b4aep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c347d6p-108f,
     0x1p0f, 0x1.e9c6f8p-47f, 0x1.f303aap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3526dp-94f,
     0x1.7f8064p-110f, 0x1.4f2fb6p-28f, 0x1.624bfap-120f, 0x1.e339ccp-59f,
     0x1.d1f0d8p-83f, 0.0f, 0x1.44d928p-81f, 0.0f, 0.0f, 0.0f, 0x1.e7590ep-60f,
     0x1.215416p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c6e32p-1f, 0.0f, 0x1.47804p-91f,
     0x1.5a7cd8p-35f, 0x1.e51406p-34f, 0x1.62d68p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5117eep-17f, 0x1.91de2cp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe3752p-11f,
     0.0f, 0.0f, 0x1.d8ba28p-40f, 0.0f, 0x1.13c8f8p-45f, 0.0f, 0x1.0438bap-70f,
     0x1.420942p-109f, 0.0f, 0x1.f77476p-10f, 0x1.e7285ap-95f, 0x1.90e79p-106f,
     0x1.7a6e74p-14f, 0x1.3d84f4p-42f, 0.0f, 0.0f, 0x1.b4dea2p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f80b6p-63f, 0x1.201a6ep-86f, 0x1.df167p-59f,
     0x1.0173c8p-81f, 0.0f, 0.0f, 0x1.2dcc8ep-68f, 0.0f, 0.0f, 0.0f, 0x1.43a688p-113f,
     0.0f, 0.0f, 0x1.f6f9d2p-109f, 0x1.c056eep-10f, 0x1.3d46c2p-56f, 0x1.bc217ep-123f,
     0x1.adc5ecp-12f, 0x1.fd1ba8p-88f, 0.0f, 0x1.96017cp-69f, 0.0f, 0.0f, 0.0f,
     0x1.866aa8p-20f, 0x1.a0c102p-49f, 0x1.9eb34ep-10f, 0x1.c0096p-53f, 0x1.4d479p-6f,
     0.0f, 0x1.3b3bfcp-65f, 0x1.a6cab6p-70f, 0x1.98a6b6p-9f, 0.0f, 0.0f, 0.0f,
     0x1.4fcc02p-68f, 0x1.af3818p-108f, 0x1.258fa2p-103f, 0x1.71967ep-112f, 0.0f,
     0x1.9bf64ap-60f, 0x1.c14cacp-105f, 0.0f, 0.0f, 0x1.30934ep-58f, 0x1.46c066p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.583a9p-34f, 0.0f, 0x1.2ea012p-98f, 0.0f,
     0x1.f00ddp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ba5a4p-66f, 0.0f, 0x1.84176ap-47f,
     0.0f, 0x1.5823d2p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e4568p-105f, 0.0f, 0.0f,
     0.0f, 0x1.c8e30ap-64f, 0x1.d1d246p-47f, 0x1.91a71p-50f, 0.0f, 0x1.97963ep-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0ef28p-86f, 0x1.12a024p-35f, 0x1.388beap-39f,
     0x1.dacf74p-89f, 0.0f, 0x1.014914p-63f, 0.0f, 0x1.3f36a4p-110f, 0x1.f4e384p-32f,
     0x1.74358cp-19f, 0.0f, 0x1.d4d4fep-11f, 0x1.a6eb8ap-35f, 0x1.da0466p-71f, 0.0f,
     0x1.4bd936p-70f, 0.0f, 0x1.0b5854p-48f, 0x1.b37a7cp-62f, 0.0f, 0.0f, 0.0f,
     0x1.f450d8p-67f, 0.0f, 0x1.9e8f9cp-16f, 0.0f, 0x1.93d806p-63f, 0.0f, 0.0f,
     0x1.475c46p-105f, 0x1.7f11a8p-70f, 0x1.6a2b5ap-120f, 0x1.a39a4ap-73f,
     0x1.7dc2aap-28f, 0.0f, 0.0f, 0x1.9f6e48p-109f, 0.0f, 0x1.8b5cfcp-93f, 0.0f,
     0x1.795b6p-22f, 0x1.1c3dc6p-73f, 0.0f, 0.0f, 0.0f, 0x1.d5798ep-56f, 0.0f,
     0x1.d1b686p-64f, 0.0f, 0x1.59869ep-92f, 0.0f, 0x1.4ce7b6p-94f, 0x1.42dfaap-124f,
     0x1.5cbf12p-31f, 0.0f, 0x1.c7dba8p-91f, 0.0f, 0.0f, 0x1.c59d2p-1f, 0.0f,
     0x1.fa6312p-56f, 0.0f, 0x1.dc2c88p-44f, 0.0f, 0.0f, 0.0f, 0x1.d36ba2p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.102fcp-100f, 0.0f, 0x1.612288p-11f, 0x1p0f, 0.0f,
     0x1.0ba19ap-117f, 0x1.c2749ap-65f, 0x1.213792p-67f, 0x1.66a1d2p-46f,
     0x1.8dcd7p-69f, 0.0f, 0x1.9dcb2ap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.025224p-96f,
     0.0f, 0x1.8313c2p-38f, 0.0f, 0x1.8bc578p-67f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.541c62p-92f, 0x1.1c9818p-115f, 0x1.7c786ep-59f, 0x1.97e1e2p-48f,
     0.0f, 0.0f, 0.0f, 0x1.9b6f58p-115f, 0.0f, 0x1.9ab466p-103f, 0x1.8f514p-61f, 0.0f,
     0.0f, 0.0f, 0x1.a1e5aap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec5522p-7f,
     0x1.ebb5cap-100f, 0x1.124fp-31f, 0x1.1cffdp-90f, 0.0f, 0x1.8b182cp-94f, 0.0f,
     0.0f, 0x1.a0adbep-70f, 0x1.ba3f5cp-113f, 0.0f, 0.0f, 0x1.c08e74p-56f,
     0x1.b55042p-97f, 0.0f, 0.0f, 0x1.42874p-68f, 0.0f, 0.0f, 0x1.9f553p-110f,
     0x1.3aab46p-51f, 0x1.08edaap-66f, 0x1.a4be1p-102f, 0x1.3b0022p-123f, 0.0f, 0.0f,
     0x1.9f85ap-65f, 0.0f, 0x1.cb55b6p-86f, 0x1.dba988p-33f, 0x1.c940e2p-120f,
     0x1.ad1508p-17f, 0.0f, 0x1.3b166ap-20f, 0x1.8ecceap-75f, 0x1.550636p-77f, 0.0f,
     0x1.d2333ap-35f, 0x1.ca4a4ap-43f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_exp2f4_u10kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
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
    printf("Sleef_finz_exp2f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp2f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
