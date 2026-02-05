/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf4_u10avx2128.c --function Sleef_acosf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.c0a208p-14f, 0.0f, 0x1.2971c2p-23f, 0.0f, 0x1.f9a56ap-88f, 0x1.7bb1b8p-114f,
     0x1.9b2e86p-125f, 0x1.7b2b9cp-59f, 0x1.c132eap-86f, 0x1.9be944p-119f,
     0x1.8373fp-23f, 0x1.3cb752p-102f, 0x1.312d88p-7f, 0x1.9da6f2p-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.540d3ap-5f, 0x1.322ebep-51f, 0x1.41921ep-18f,
     0x1.a7f138p-70f, 0x1.53c8d4p-84f, 0x1.18d83cp-111f, 0x1.d9b008p-9f, 0.0f,
     0x1.77981ep-102f, 0x1.92ccc2p-13f, 0.0f, 0.0f, 0x1.c5bf7ep-104f, 0x1.92dfe2p-91f,
     0.0f, 0x1.b98398p-83f, 0.0f, 0x1.f7a278p-38f, 0.0f, 0x1.53194ep-16f,
     0x1.b8a16cp-122f, 0x1.45da4p-18f, 0x1.2dc68ap-69f, 0.0f, 0x1.c11a54p-111f,
     0x1.c80506p-11f, 0.0f, 0x1.a671fcp-109f, 0.0f, 0.0f, 0.0f, 0x1.6d4a4p-26f, 0.0f,
     0.0f, 0.0f, 0x1.6c78bp-80f, 0x1.a651bap-103f, 0x1.58cdc6p-20f, 0x1.2027c6p-97f,
     0x1.e1e29cp-48f, 0.0f, 0.0f, 0x1.cacd32p-27f, 0x1.116132p-79f, 0.0f,
     0x1.ad4dbep-34f, 0x1.4a2a54p-41f, 0.0f, 0x1.e3a616p-38f, 0x1.4f3ff6p-70f, 0.0f,
     0x1.96b39cp-12f, 0x1.c2326ap-62f, 0.0f, 0.0f, 0x1.8e6ab8p-79f, 0.0f,
     0x1.f89002p-119f, 0x1.ad1bfap-108f, 0x1.6e74fap-37f, 0x1.9d53ccp-108f, 0.0f,
     0x1.543c38p-106f, 0.0f, 0.0f, 0x1.2eab5cp-47f, 0x1.ac9b82p-110f, 0x1.941504p-34f,
     0x1.a199c8p-83f, 0x1.4bf104p-58f, 0x1.f50d96p-87f, 0.0f, 0x1.ab8facp-113f,
     0x1.20a72p-94f, 0x1.2f92dap-126f, 0.0f, 0x1.4247fep-56f, 0.0f, 0.0f,
     0x1.e82264p-39f, 0x1.cec6a4p-43f, 0x1.d6ac58p-77f, 0x1.4de294p-125f,
     0x1.888dd2p-24f, 0.0f, 0.0f, 0x1.df37c4p-109f, 0.0f, 0x1.66f074p-62f, 0.0f,
     0x1.d7e2c2p-26f, 0x1.2ade12p-77f, 0.0f, 0.0f, 0.0f, 0x1.ddbc72p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3012ap-8f, 0.0f, 0.0f, 0x1.f83374p-88f, 0.0f,
     0.0f, 0x1.984184p-36f, 0x1.4d1b6cp-83f, 0x1.4d262cp-123f, 0x1.1699e2p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.511d94p-76f, 0.0f, 0x1.394a2ep-55f, 0x1.9af9p-40f,
     0.0f, 0x1.58c568p-88f, 0.0f, 0x1.46c99p-120f, 0x1.3c041ap-125f, 0x1.dc2e7ap-11f,
     0.0f, 0.0f, 0x1.beaf48p-11f, 0x1.a03478p-67f, 0.0f, 0.0f, 0x1.5ace9p-69f, 0.0f,
     0x1.39c138p-102f, 0.0f, 0x1.641cbp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.023cbep-39f,
     0.0f, 0x1.abcb22p-10f, 0x1.d7f038p-107f, 0x1.35ff44p-121f, 0.0f, 0x1.0a0d68p-72f,
     0.0f, 0.0f, 0.0f, 0x1.792222p-3f, 0.0f, 0.0f, 0.0f, 0x1.7ba846p-126f,
     0x1.307beep-40f, 0x1.7baf4ep-61f, 0.0f, 0x1.a4d9f4p-7f, 0.0f, 0x1.6e2d16p-23f,
     0.0f, 0x1.0a2e4cp-5f, 0.0f, 0.0f, 0.0f, 0x1.7e0606p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0b8c4p-78f, 0.0f, 0x1.f9c854p-65f, 0x1.2844bep-105f, 0.0f, 0.0f,
     0x1.72b408p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad7166p-2f, 0x1.99a7dcp-38f,
     0x1.7ad23p-42f, 0x1.17c132p-71f, 0x1.12c57ap-53f, 0x1.071e68p-66f, 0.0f,
     0x1.ab308ep-33f, 0.0f, 0.0f, 0.0f, 0x1.9420fp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9652c6p-88f, 0.0f, 0.0f, 0.0f, 0x1.e0aca4p-60f, 0x1.8798f2p-97f,
     0x1.e912bp-97f, 0x1.95073p-94f, 0x1.8246dep-16f, 0x1.eb04dp-13f, 0x1.7f1514p-40f,
     0x1.4533bep-107f, 0.0f, 0x1.5eeae2p-51f, 0x1.15b4ap-90f, 0.0f, 0x1.a24f88p-20f,
     0x1.5ebd22p-65f, 0.0f, 0.0f, 0x1.79588ap-49f, 0x1.57d3fep-69f, 0.0f,
     0x1.72a6fep-106f, 0.0f, 0x1.e37246p-40f, 0x1.ba4d08p-33f, 0x1.19049ep-118f, 0.0f,
     0.0f, 0x1.ce437ap-64f, 0.0f, 0x1.9311fcp-48f, 0.0f, 0.0f, 0x1.e41d12p-47f, 0.0f,
     0x1.3725fp-69f, 0x1.c08a22p-92f, 0.0f, 0x1.14239ep-114f, 0.0f, 0.0f, 0.0f,
     0x1.1086e2p-67f, 0.0f, 0.0f, 0x1.bbe2a2p-9f, 0x1.846eaep-103f, 0x1.2c3bb4p-45f,
     0.0f, 0.0f, 0x1.4f120ep-94f, 0x1.7f67e2p-6f, 0x1.11126p-95f, 0x1.f36692p-101f,
     0.0f, 0x1.22982ap-115f, 0.0f, 0x1.5b671p-106f, 0x1.b059d6p-42f, 0.0f,
     0x1.5fba7cp-73f, 0x1.b3d134p-69f, 0.0f, 0.0f, 0.0f, 0x1.554f16p-99f, 0.0f,
     0x1.e819e6p-28f, 0x1.82c6ep-14f, 0.0f, 0x1.ba869ap-93f, 0x1.76e432p-11f, 0.0f,
     0.0f, 0x1.a879eep-76f, 0.0f, 0.0f, 0.0f, 0x1.595ba4p-105f, 0.0f, 0x1.0dd4e6p-49f,
     0.0f, 0x1.862f8p-8f, 0x1.54304ap-99f, 0.0f, 0.0f, 0x1.273bdap-66f,
     0x1.168d4cp-93f, 0.0f, 0.0f, 0x1.589bp-83f, 0x1.4d312p-105f, 0x1.8d17e8p-11f,
     0x1.0713f2p-7f, 0x1.bd1f92p-14f, 0.0f, 0x1.c3c86ap-80f, 0x1.a8b10cp-21f, 0.0f,
     0x1.0a953ap-52f, 0.0f, 0x1.71b216p-26f, 0.0f, 0x1.f399c4p-123f, 0.0f,
     0x1.43ae16p-123f, 0x1.835526p-90f, 0.0f, 0x1.354482p-74f, 0x1.fdd358p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce7ec6p-81f, 0x1.7aa476p-118f, 0.0f, 0.0f,
     0x1.3b0f36p-47f, 0x1.ecfaccp-50f, 0x1.0cd618p-52f, 0x1.4a9816p-42f,
     0x1.d427f6p-79f, 0x1.b641aap-36f, 0.0f, 0x1.8e2a2ep-119f, 0.0f, 0.0f, 0.0f,
     0x1.c32b3cp-32f, 0x1.6626c8p-4f, 0.0f, 0x1.f50c3p-101f, 0x1.407654p-41f,
     0x1.e396d4p-108f, 0x1.7e0898p-26f, 0.0f, 0.0f, 0x1.9866e6p-78f, 0x1.cc3172p-49f,
     0.0f, 0.0f, 0x1.c76504p-43f, 0x1.14843ap-60f, 0x1.8cf69p-111f, 0x1.b8e96ep-89f,
     0.0f, 0.0f, 0x1.ab580ap-3f, 0x1.ed6ce2p-39f, 0x1.61d01ap-10f, 0.0f, 0.0f,
     0x1.32027cp-114f, 0.0f, 0.0f, 0.0f, 0x1.00b21ep-60f, 0x1.ae5668p-11f,
     0x1.2a6cd4p-26f, 0.0f, 0.0f, 0.0f, 0x1.54147cp-16f, 0.0f, 0.0f, 0x1.92a2bcp-61f,
     0.0f, 0x1.d58ea6p-39f, 0x1.b2f1d4p-74f, 0.0f, 0x1.b702bap-69f, 0.0f, 0.0f,
     0x1.61532p-81f, 0x1.cb06bcp-84f, 0.0f, 0x1.3a65ecp-39f, 0.0f, 0.0f,
     0x1.38dc2ap-20f, 0.0f, 0.0f, 0.0f, 0x1.af4f4ep-46f, 0x1.1ba212p-68f, 0.0f,
     0x1.aff6a4p-92f, 0.0f, 0.0f, 0x1.424a8ep-9f, 0.0f, 0.0f, 0x1.536206p-99f,
     0x1.b38cfap-15f, 0.0f, 0.0f, 0x1.0e383ap-27f, 0x1.cc373ap-6f, 0.0f,
     0x1.ff5cb2p-44f, 0x1.3cdc54p-117f, 0x1.6c1bap-56f, 0.0f, 0.0f, 0.0f,
     0x1.efeb54p-58f, 0.0f, 0x1.3cc6dep-58f, 0.0f, 0.0f, 0x1.8c4caep-9f, 0.0f, 0.0f,
     0x1.98db36p-28f, 0x1.c2bfp-98f, 0.0f, 0x1.950aeep-39f, 0x1.43d608p-122f,
     0x1.ba880ap-52f, 0.0f, 0.0f, 0.0f, 0x1.fc9458p-118f, 0.0f, 0x1.c3179ep-7f,
     0x1.601efcp-94f, 0.0f, 0x1.8c40d4p-48f, 0.0f, 0.0f, 0.0f, 0x1.d74c72p-108f,
     0x1.79b1acp-108f, 0x1.4516bap-121f, 0.0f, 0x1.9861ccp-1f, 0x1.77d948p-41f, 0.0f,
     0x1.71ef1ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8d964p-87f, 0x1.2d191ep-78f, 0.0f,
     0x1.d3dc6cp-67f, 0x1.fd1dfcp-19f, 0x1.93ad24p-101f, 0x1.82c522p-39f,
     0x1.c5da48p-57f, 0.0f, 0.0f, 0x1.63731p-97f, 0x1.f7ab54p-113f, 0x1.4f675ep-16f,
     0x1.810c0ap-101f, 0x1.16d92ep-32f, 0x1.9127d4p-70f, 0x1.85cc68p-111f, 0.0f, 0.0f,
     0x1.3511a8p-40f, 0x1.df4c1ap-52f, 0.0f, 0x1.87d458p-91f, 0.0f, 0x1.4b9f5p-40f,
     0.0f, 0.0f, 0x1.9dc5d2p-100f, 0x1.dc4532p-96f, 0x1.4b44b2p-62f, 0.0f,
     0x1.c1ff9cp-64f, 0.0f, 0.0f, 0x1.8f266ep-109f, 0x1.749b6ep-19f, 0.0f,
     0x1.e82cdcp-27f, 0.0f, 0.0f, 0x1.9f093cp-9f, 0x1.117e04p-126f, 0x1.2af51ep-117f,
     0x1.a6faa8p-124f, 0.0f, 0x1.a59f5ap-45f, 0.0f, 0.0f, 0x1.1462f2p-81f,
     0x1.222632p-52f, 0.0f, 0x1.080efp-70f, 0x1.dd175cp-97f, 0.0f, 0.0f,
     0x1.beb3e6p-2f, 0x1.cb4514p-32f, 0.0f, 0.0f, 0.0f, 0x1.c6d90ap-49f,
     0x1.8027d8p-56f, 0x1.69805ap-37f, 0x1.41a138p-77f, 0.0f, 0x1.8da8cap-31f,
     0x1.c6bf1p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2b142p-38f, 0.0f,
     0x1.01672ep-116f, 0x1.85820ap-62f, 0.0f, 0.0f, 0x1.3fe796p-119f, 0x1.ca0038p-63f,
     0x1.111daap-108f, 0x1.4c04c4p-70f, 0.0f, 0x1.f7f546p-117f, 0x1.d8a7a8p-36f, 0.0f,
     0.0f, 0x1.2a5ac8p-66f, 0.0f, 0.0f, 0x1.2a35eap-63f, 0x1.27a348p-126f,
     0x1.5f2cd6p-68f, 0.0f, 0x1.396be4p-45f, 0.0f, 0x1.efc726p-93f, 0.0f, 0.0f, 0.0f,
     0x1.87a1eep-93f, 0.0f, 0.0f, 0.0f, 0x1.0f3dc4p-81f, 0.0f, 0x1.368d64p-102f, 0.0f,
     0.0f, 0x1.1b8166p-113f, 0x1.de8fc8p-116f, 0x1.b3b3c4p-81f, 0.0f, 0x1.1c942p-5f,
     0.0f, 0x1.0b91bap-115f, 0x1.b83298p-48f, 0x1.bc0134p-106f, 0.0f, 0.0f, 0.0f,
     0x1.238f0cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1d6f4p-125f, 0x1.fa4eap-26f,
     0.0f, 0x1.8f577ep-28f, 0x1.dd4dc2p-100f, 0x1.efa42p-112f, 0x1.29639ep-22f, 0.0f,
     0x1.bdfda4p-36f, 0.0f, 0.0f, 0x1.c378fap-95f, 0x1.a4bfc6p-94f, 0.0f,
     0x1.b36234p-56f, 0.0f, 0x1.f0b3e6p-14f, 0x1.47fb96p-84f, 0x1.97954p-113f,
     0x1.ddddbep-117f, 0x1.55b914p-87f, 0x1.c8e93cp-109f, 0x1.5f6a6ap-101f, 0.0f,
     0.0f, 0.0f, 0x1.ac5ee6p-10f, 0x1.643e4ep-100f, 0x1.0faa24p-32f, 0x1.7ca7fep-4f,
     0.0f, 0.0f, 0x1.a2bc82p-41f, 0.0f, 0.0f, 0x1.288648p-24f, 0x1.ed19f4p-99f, 0.0f,
     0x1.f5a8bap-110f, 0.0f, 0.0f, 0.0f, 0x1.1fbfa2p-35f, 0.0f, 0.0f, 0.0f,
     0x1.336ddcp-10f, 0.0f, 0x1.f7d1a2p-41f, 0.0f, 0.0f, 0x1.a67734p-25f,
     0x1.784ff6p-68f, 0.0f, 0.0f, 0.0f, 0x1.ae208ep-115f, 0x1.3ad296p-56f,
     0x1.f504b2p-88f, 0x1.e00b5cp-42f, 0.0f, 0x1.335f8cp-58f, 0x1.c9839cp-99f, 0.0f,
     0x1.0cb08p-116f, 0.0f, 0x1.1d304cp-119f, 0.0f, 0x1.cbf3d8p-6f, 0.0f, 0.0f,
     0x1.335ceap-60f, 0.0f, 0.0f, 0x1.6c8a0ep-5f, 0.0f, 0x1.77ebdp-2f,
     0x1.8015dap-74f, 0.0f, 0.0f, 0x1.2b0e38p-78f, 0x1.458712p-35f, 0.0f,
     0x1.c7f4fp-86f, 0x1.454e3p-5f, 0.0f, 0x1.34be0ep-88f, 0.0f, 0x1.9f42d4p-93f,
     0.0f, 0x1.4ec34ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab1464p-40f, 0.0f,
     0x1.d0c6c6p-22f, 0x1.8a832ap-65f, 0x1.de5ca4p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b15b56p-66f, 0x1.648c0ap-28f, 0.0f, 0x1.23b356p-40f, 0.0f, 0x1.da9d92p-103f,
     0.0f, 0.0f, 0x1.d08aep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6896f8p-40f,
     0.0f, 0.0f, 0x1.df4692p-74f, 0x1.2a5a86p-11f, 0.0f, 0.0f, 0x1.df9132p-58f,
     0x1.ee3aap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84a174p-65f, 0.0f, 0.0f,
     0x1.09a0ap-64f, 0.0f, 0x1.7776f8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.adfce4p-43f, 0x1.1a7748p-31f, 0x1.a58712p-100f, 0.0f, 0x1.01645p-60f, 0.0f,
     0.0f, 0.0f, 0x1.5f2eaap-89f, 0.0f, 0x1.049652p-116f, 0x1.ee242ap-32f, 0.0f, 0.0f,
     0x1.f4ec8cp-121f, 0x1.3e9ab6p-93f, 0x1.ef16cp-105f, 0.0f, 0x1.ec69c8p-116f,
     0x1.ddf82ap-114f, 0x1.398814p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a507cp-54f,
     0.0f, 0.0f, 0.0f, 0x1.0f5c1cp-17f, 0.0f, 0x1.ee8f1cp-81f, 0.0f, 0x1.41c058p-54f,
     0x1.99260ep-20f, 0x1.80434p-99f, 0x1.9988eep-126f, 0.0f, 0x1p0f, 0x1.9b038cp-38f,
     0.0f, 0x1.66ff54p-28f, 0x1.13342cp-126f, 0x1.6471c8p-70f, 0x1.bb1fe4p-106f,
     0x1.68061ep-125f, 0.0f, 0.0f, 0.0f, 0x1.e874d8p-35f, 0x1.8c3402p-65f,
     0x1.191544p-43f, 0.0f, 0.0f, 0x1.000eccp-111f, 0.0f, 0.0f, 0x1.611f12p-35f,
     0x1.526662p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f942ep-89f, 0.0f, 0x1.3c94f2p-25f,
     0x1.fbef9cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4a0ap-9f, 0.0f, 0x1.4c4002p-101f, 0.0f, 0.0f, 0x1.01d0e8p-95f,
     0x1.525ff2p-8f, 0.0f, 0x1.0ca7d8p-101f, 0.0f, 0.0f, 0x1.bbce38p-14f,
     0x1.06c9fcp-27f, 0.0f, 0x1.c96a2ep-21f, 0.0f, 0.0f, 0x1.b6bef4p-109f, 0.0f, 0.0f,
     0.0f, 0x1.ea4ec4p-65f, 0.0f, 0.0f, 0x1.643c2p-126f, 0x1.493f2ep-45f,
     0x1.8daf9ep-8f, 0.0f, 0x1.69c884p-115f, 0x1.8a033p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c607dp-101f, 0.0f, 0x1.ad2b94p-43f, 0.0f, 0.0f, 0x1.5cf098p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c37d4p-4f, 0.0f, 0x1.03418ap-118f, 0.0f,
     0x1.a3eac4p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.479a64p-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b75474p-45f, 0x1.e57026p-68f, 0.0f, 0x1.8e088ap-57f,
     0x1.4c6ca8p-108f, 0x1.5b29ep-90f, 0x1.62703ap-2f, 0x1.44247ep-121f,
     0x1.2f5596p-40f, 0.0f, 0x1.f1f0a8p-54f, 0x1p0f, 0.0f, 0.0f, 0x1.9951acp-121f,
     0.0f, 0.0f, 0.0f, 0x1.425954p-111f, 0.0f, 0.0f, 0x1.3f8a9cp-2f, 0.0f,
     0x1.0fd2fp-74f, 0.0f, 0.0f, 0x1.8475cp-25f, 0.0f, 0.0f, 0x1.22fbeap-34f,
     0x1.07628cp-81f, 0x1.277828p-54f, 0x1.b113ecp-105f, 0.0f, 0.0f, 0x1.21485cp-79f,
     0x1.92e09ep-45f, 0x1.423678p-99f, 0.0f, 0x1.9e4974p-89f, 0.0f, 0x1.9377d4p-74f,
     0x1.827ceap-23f, 0.0f, 0x1.b151f8p-87f, 0x1.60424cp-65f, 0.0f, 0.0f,
     0x1.0d8622p-69f, 0x1.d4f1d8p-70f, 0x1.e844ap-61f, 0x1.c1413ep-92f,
     0x1.5829aep-71f, 0.0f, 0x1.ae773cp-17f, 0.0f, 0.0f, 0x1.d891aap-84f,
     0x1.70fbeep-126f, 0x1.a3a71ep-22f, 0.0f, 0.0f, 0x1.4eabap-46f, 0x1.6770f4p-23f,
     0.0f, 0x1.04e7dep-100f, 0.0f, 0x1.95ebcep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.986dbcp-13f, 0.0f, 0.0f, 0x1.9cdb6p-67f, 0.0f, 0x1.a22622p-59f, 0.0f,
     0.0f, 0.0f, 0x1.7117d6p-123f, 0.0f, 0x1.9a794cp-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.916d8p-31f, 0.0f, 0x1.0e5de4p-40f, 0x1.bffe76p-34f, 0.0f,
     0x1.6aaa0ap-78f, 0x1.7e18cap-74f, 0x1.d2186cp-44f, 0x1.1bd906p-58f,
     0x1.5551ep-73f, 0x1.581d62p-67f, 0.0f, 0.0f, 0x1.45d10ep-120f, 0x1.ed71fcp-84f,
     0x1.6111bap-120f, 0x1.0dd904p-99f, 0.0f, 0.0f, 0.0f, 0x1.548194p-5f,
     0x1.7553bep-53f, 0.0f, 0.0f, 0x1.9d1e0ap-5f, 0.0f, 0x1.1adca4p-18f,
     0x1.252916p-112f, 0x1.01001cp-82f, 0.0f, 0x1.822c94p-29f
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
            tmp1 = Sleef_acosf4_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_acosf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acosf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
