/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pf4_u10avx2128.c --function Sleef_log1pf4_u10avx2128 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.693b7cp-40f, 0.0f, 0.0f, 0x1.bac0e6p-62f,
     0x1.daf446p-81f, 0.0f, 0x1.a7a346p-41f, 0.0f, 0.0f, 0.0f, 0x1.6169ccp-93f,
     0x1.2542bcp-21f, 0x1.63936cp-73f, 0.0f, 0.0f, 0x1.e1989cp-125f, 0x1.2dc3dap-10f,
     0.0f, 0.0f, 0.0f, 0x1.dd0606p-113f, 0.0f, 0x1.309122p-65f, 0.0f, 0x1.0347d2p-36f,
     0x1.f85856p-64f, 0.0f, 0x1.a78ab6p-65f, 0.0f, 0x1.b4214ep-75f, 0x1.e5a644p-82f,
     0x1.101b82p-75f, 0x1.2bb766p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0b03ep-25f,
     0x1.e7cb7p-123f, 0x1.2a04eap-16f, 0x1.a481d2p-50f, 0x1.464e3ep-115f,
     0x1.f3df7p-42f, 0x1.4a5e26p-17f, 0x1.404d02p-6f, 0.0f, 0.0f, 0.0f,
     0x1.aa9bbcp-49f, 0x1.b3f264p-112f, 0.0f, 0x1.5346f2p-82f, 0.0f, 0x1.41c44cp-89f,
     0.0f, 0x1.7ec648p-43f, 0x1.bc7c16p-103f, 0.0f, 0.0f, 0x1.27358p-96f,
     0x1.702664p-4f, 0.0f, 0x1.7a39fap-32f, 0x1.017p-95f, 0x1.6bdab8p-47f, 0.0f, 0.0f,
     0x1p0f, 0x1.da95ccp-106f, 0.0f, 0x1.3ebf18p-26f, 0x1.96aa7ep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.169972p-121f, 0x1.458c46p-96f, 0.0f,
     0.0f, 0x1.279596p-22f, 0x1.4303c2p-32f, 0.0f, 0.0f, 0x1.6fc154p-110f, 0.0f, 0.0f,
     0x1.f94186p-95f, 0x1.66536ep-110f, 0x1.c74d64p-107f, 0x1.92fa66p-21f,
     0x1.404c56p-88f, 0.0f, 0x1.025db2p-90f, 0.0f, 0.0f, 0x1.876d24p-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.abfbp-48f, 0x1.e5773ap-63f, 0x1.1110cep-42f, 0x1.8c0a36p-97f,
     0x1.f155fp-90f, 0.0f, 0.0f, 0x1.492e86p-13f, 0.0f, 0.0f, 0x1.f20a72p-125f, 0.0f,
     0x1.8f582cp-63f, 0.0f, 0.0f, 0x1.f2a99ap-98f, 0.0f, 0x1.8279ecp-41f, 0.0f, 0.0f,
     0x1.311dccp-46f, 0.0f, 0x1.87cb64p-78f, 0x1.93bf26p-47f, 0.0f, 0.0f,
     0x1.a611ep-19f, 0x1.3c7abep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bdd46p-28f,
     0.0f, 0x1.d3be4p-35f, 0.0f, 0x1.e9e3bap-10f, 0.0f, 0x1.77f516p-88f,
     0x1.60ba54p-107f, 0x1.f96932p-30f, 0.0f, 0.0f, 0x1.27a77p-81f, 0.0f, 0.0f,
     0x1.60700ep-102f, 0.0f, 0x1.e03614p-54f, 0x1.dc6c74p-95f, 0x1.10dcfp-2f,
     0x1.fd9806p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.632c5ap-44f, 0x1.d18f4cp-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9abcfcp-103f, 0x1.f8ab34p-83f, 0x1.9584a6p-62f,
     0x1.2679bcp-25f, 0.0f, 0x1.9b4cbcp-80f, 0x1.8de3bap-102f, 0x1.614ee6p-84f, 0.0f,
     0x1.4301a4p-83f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.8d846p-84f, 0x1.9e7a3ep-31f, 0.0f,
     0x1.c8ccd6p-34f, 0.0f, 0.0f, 0x1.589a34p-5f, 0.0f, 0x1.1040b6p-24f,
     0x1.3fe6e4p-120f, 0x1.e2a7f2p-125f, 0x1.b9c752p-31f, 0x1.513936p-103f,
     0x1.842944p-27f, 0.0f, 0x1.92beap-59f, 0x1.d95fa4p-2f, 0.0f, 0x1.f18bd4p-41f,
     0.0f, 0.0f, 0x1.ac06bap-11f, 0x1.8d65ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a570ep-109f, 0.0f, 0x1.e80a7cp-59f, 0x1.b8d5aap-4f, 0.0f, 0x1.269534p-118f,
     0.0f, 0x1.fce7b8p-95f, 0x1.8e5cfp-61f, 0.0f, 0x1.7f6d62p-36f, 0x1.79e1a8p-25f,
     0.0f, 0x1.74625ep-67f, 0x1.dd71d2p-42f, 0x1.da7006p-2f, 0x1.683e16p-103f, 0.0f,
     0x1p0f, 0x1.a0fb3ap-39f, 0x1.80ac04p-42f, 0.0f, 0x1.bf611p-14f, 0x1.a64c1p-119f,
     0.0f, 0x1.042538p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.658b9p-9f, 0.0f,
     0x1.365842p-92f, 0.0f, 0x1.a1c0c4p-17f, 0x1.9a1966p-86f, 0x1.47d1ccp-16f,
     0x1.6bfc4cp-40f, 0.0f, 0x1.14721ep-98f, 0x1.67f838p-87f, 0.0f, 0.0f,
     0x1.91f80cp-93f, 0x1.b77f0ep-73f, 0.0f, 0x1.1cfbd4p-93f, 0.0f, 0x1.dfd626p-99f,
     0x1.038d06p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12de48p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.41a2dp-50f, 0x1.8c2858p-33f, 0x1.38a9eep-86f, 0.0f,
     0.0f, 0x1.04ef6ap-10f, 0x1.6ed798p-41f, 0x1.9f2c58p-123f, 0x1.2c898ep-62f,
     0x1.c02f0ep-100f, 0.0f, 0x1.144c26p-1f, 0x1.d8ea18p-87f, 0.0f, 0x1.902cc4p-105f,
     0x1.75338ep-115f, 0.0f, 0.0f, 0.0f, 0x1.0dd13cp-51f, 0x1.79c21cp-9f, 0.0f, 0.0f,
     0x1.f290ecp-114f, 0x1.5e6984p-116f, 0.0f, 0x1.17e14ap-48f, 0x1.1ab1ecp-8f, 0.0f,
     0.0f, 0x1.3e625cp-37f, 0.0f, 0x1.5f17b2p-12f, 0x1.6b5a6cp-61f, 0x1.b31124p-98f,
     0.0f, 0x1.9ade54p-110f, 0x1.f62ea2p-125f, 0.0f, 0.0f, 0x1.84073ep-86f,
     0x1.3ca346p-85f, 0x1.7fd8acp-104f, 0x1.743beap-115f, 0.0f, 0x1.6633bp-37f, 0.0f,
     0.0f, 0x1.c59152p-103f, 0.0f, 0x1.61a3e4p-111f, 0.0f, 0.0f, 0x1.3b0176p-21f,
     0.0f, 0.0f, 0x1.f70014p-73f, 0x1.a434aep-56f, 0.0f, 0.0f, 0.0f, 0x1.9db6d2p-100f,
     0.0f, 0x1.ee8f92p-119f, 0.0f, 0x1.858918p-27f, 0.0f, 0.0f, 0x1p0f,
     0x1.ca65acp-102f, 0x1.7d490ap-98f, 0x1.33c77ep-123f, 0x1.a9b7b4p-54f,
     0x1.4a8ad2p-66f, 0.0f, 0x1.affb2ep-67f, 0x1.37f63ep-43f, 0.0f, 0x1.23fd5ap-121f,
     0x1.316c5ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0059bcp-23f, 0.0f, 0.0f,
     0x1.bebb88p-113f, 0x1.22e10ap-61f, 0x1.1bcec4p-111f, 0.0f, 0x1.49e956p-82f, 0.0f,
     0x1.292064p-100f, 0.0f, 0.0f, 0x1.8ab1c2p-46f, 0x1.b2d734p-76f, 0.0f, 0.0f,
     0x1.6600c8p-32f, 0x1.b8d0f2p-30f, 0x1.82140ep-92f, 0.0f, 0.0f, 0.0f,
     0x1.3d348p-51f, 0.0f, 0.0f, 0x1.3924c2p-26f, 0.0f, 0.0f, 0x1.c46b44p-88f, 0.0f,
     0x1.b9e032p-103f, 0x1.ed43ep-82f, 0x1.b2d896p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.efa70cp-124f, 0x1.fdaf64p-1f, 0x1.85678ap-76f, 0.0f, 0.0f, 0.0f,
     0x1.afaadp-117f, 0.0f, 0x1.041c3p-53f, 0x1.64451cp-29f, 0x1.c06204p-113f,
     0x1.7692fp-38f, 0.0f, 0x1.88e8c2p-11f, 0x1.b76824p-123f, 0.0f, 0x1.82f272p-52f,
     0.0f, 0x1.36a86cp-112f, 0.0f, 0x1.8458eap-68f, 0x1.50b49p-15f, 0x1.67f722p-104f,
     0.0f, 0x1.f6cb2ep-51f, 0x1.fa361ep-83f, 0.0f, 0.0f, 0x1.9ef2b8p-21f,
     0x1.e2847cp-7f, 0.0f, 0x1.947854p-89f, 0x1.810a34p-48f, 0.0f, 0.0f, 0.0f,
     0x1.083c16p-121f, 0x1.d103b6p-108f, 0.0f, 0.0f, 0.0f, 0x1.ae11dp-45f,
     0x1.4c0e8ap-31f, 0x1.a8eadap-42f, 0x1.f38126p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.756076p-116f, 0.0f, 0x1.d3e9a6p-97f, 0x1.e3cb2ap-82f, 0x1.c270c2p-122f,
     0x1.e2ee9cp-13f, 0x1.9e9e3ap-77f, 0.0f, 0x1.3c9d38p-70f, 0x1.76275cp-69f,
     0x1.6785f6p-24f, 0.0f, 0x1.92a30ap-70f, 0x1.8ffe02p-57f, 0.0f, 0.0f,
     0x1.7e4532p-70f, 0x1.43988ep-43f, 0.0f, 0x1.06ab4ep-15f, 0x1.ef41fp-55f, 0.0f,
     0x1.21278ep-6f, 0x1.207a0cp-83f, 0.0f, 0x1.550028p-85f, 0.0f, 0.0f,
     0x1.9fb5e2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c809e4p-115f, 0x1.6850d8p-39f,
     0.0f, 0x1.cd8c1cp-98f, 0x1.9b54eep-4f, 0x1.5ce9dep-14f, 0x1.bd9658p-3f,
     0x1.591126p-8f, 0x1.c6b5c4p-7f, 0x1.79da02p-46f, 0x1.7cb714p-9f, 0x1.431124p-90f,
     0x1.8635bp-62f, 0x1.89828ap-19f, 0x1.0b8074p-23f, 0.0f, 0x1.6ae26cp-30f,
     0x1.677b9ep-73f, 0x1.b7fe1ep-102f, 0x1.fc904cp-2f, 0.0f, 0x1.0cbbeap-21f, 0.0f,
     0x1.8115a4p-124f, 0.0f, 0.0f, 0x1.2c9cdcp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f68a66p-88f, 0.0f, 0.0f, 0x1.b45d7ap-110f, 0x1.1a7758p-81f, 0x1.9d735cp-81f,
     0.0f, 0x1.818432p-85f, 0.0f, 0x1.ca0fb8p-68f, 0x1.6f434p-112f, 0x1.519eb4p-125f,
     0.0f, 0.0f, 0.0f, 0x1.c7678ap-44f, 0x1.419104p-32f, 0x1.36ae6ep-97f,
     0x1.8c0af2p-101f, 0x1.dd7c56p-122f, 0.0f, 0x1.0d234ep-49f, 0.0f, 0.0f, 0.0f,
     0x1.2d934ep-96f, 0.0f, 0.0f, 0x1.47a3b8p-26f, 0.0f, 0x1.cfede8p-31f,
     0x1.79e026p-28f, 0.0f, 0.0f, 0x1.b23ad6p-103f, 0x1.b19914p-57f, 0x1.95071cp-36f,
     0x1.a4cab2p-40f, 0x1.d2ef84p-48f, 0x1.3c8acp-108f, 0x1.6002dap-43f, 0.0f, 0.0f,
     0x1.595f56p-112f, 0.0f, 0.0f, 0.0f, 0x1.bbbd58p-124f, 0.0f, 0.0f, 0x1.18819ap-7f,
     0.0f, 0.0f, 0.0f, 0x1.ce6b2p-125f, 0x1.944a18p-118f, 0x1.efa1dap-23f,
     0x1.5e9748p-119f, 0.0f, 0x1.0fe9d6p-85f, 0x1.2f51c6p-69f, 0.0f, 0.0f,
     0x1.1bf694p-99f, 0.0f, 0x1.7974c4p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8066bp-75f, 0.0f, 0x1.05f5bep-83f, 0x1.17c1bcp-106f, 0x1.e1432cp-43f,
     0x1.c876a6p-57f, 0x1.06079p-47f, 0.0f, 0x1.f74bc6p-14f, 0.0f, 0.0f,
     0x1.ec7892p-53f, 0x1.526624p-54f, 0x1.c0a9e4p-18f, 0.0f, 0x1.b34adcp-87f,
     0x1.01abcp-14f, 0x1.98ea5cp-110f, 0.0f, 0x1.93777ap-51f, 0x1.c9101ap-89f,
     0x1.ff30aep-86f, 0x1.7f959cp-57f, 0x1.0a5b4ap-64f, 0x1.75cb9ep-116f, 0.0f,
     0x1.e31526p-25f, 0.0f, 0.0f, 0.0f, 0x1.41a35ep-90f, 0.0f, 0.0f, 0.0f,
     0x1.de8bfap-50f, 0.0f, 0x1.1e57dep-119f, 0.0f, 0x1.aa3ddep-88f, 0.0f,
     0x1.bba1a2p-49f, 0x1.d766aap-53f, 0x1.781406p-115f, 0.0f, 0.0f, 0.0f,
     0x1.8d386ep-24f, 0x1.aedee6p-15f, 0.0f, 0.0f, 0x1.2e377p-111f, 0x1.af8438p-106f,
     0.0f, 0.0f, 0.0f, 0x1.1fa8dap-115f, 0.0f, 0.0f, 0.0f, 0x1.cf82f4p-95f,
     0x1.d5f88cp-79f, 0x1.8fecbcp-66f, 0.0f, 0.0f, 0x1.1fe0eap-108f, 0.0f,
     0x1.4a5766p-39f, 0x1.83f484p-103f, 0.0f, 0x1.b5bf6cp-48f, 0x1.74fbb8p-99f, 0.0f,
     0x1.1910f6p-67f, 0x1.444486p-109f, 0x1.973f1ep-116f, 0.0f, 0x1.87ff34p-39f,
     0x1.64adfcp-121f, 0x1.6f6026p-79f, 0x1.a74b88p-57f, 0x1.069482p-51f,
     0x1.8f3042p-79f, 0.0f, 0x1.4dec34p-43f, 0x1.c84f26p-64f, 0x1.7264f2p-47f,
     0x1.86ea8p-101f, 0x1.1a0ba4p-67f, 0.0f, 0.0f, 0x1.174b3ep-74f, 0x1.a2eecap-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.03c75ap-3f, 0.0f, 0x1.a6fddcp-118f, 0x1.4ee962p-61f,
     0x1.8e07bcp-84f, 0x1.0e2da8p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8dbc08p-44f, 0.0f, 0.0f, 0x1.71ed92p-100f, 0x1.fb39dcp-78f, 0.0f,
     0x1.7edb82p-94f, 0.0f, 0x1.bb5978p-55f, 0.0f, 0.0f, 0x1.9f2b6ep-66f,
     0x1.4301b4p-24f, 0x1.efe11ap-11f, 0.0f, 0x1.7e6c1ap-68f, 0.0f, 0x1.bf1818p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdf4cap-13f, 0x1.403054p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a728ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ab192p-102f,
     0x1.13cf1ap-54f, 0x1.c210aap-88f, 0x1.3ab73ap-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1333d6p-114f, 0.0f, 0.0f, 0.0f, 0x1.7f8dfcp-96f, 0.0f, 0.0f, 0.0f,
     0x1.3da7acp-27f, 0x1.d2499cp-96f, 0.0f, 0x1.94af88p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d4626p-110f, 0x1.d06602p-41f, 0.0f, 0.0f, 0x1.2932dp-106f, 0x1.7390a8p-28f,
     0.0f, 0x1.8aef4cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92f344p-105f, 0x1.38f5fep-87f,
     0x1.cfd75p-20f, 0x1.e0cd16p-123f, 0.0f, 0x1.29657p-105f, 0x1.893516p-7f, 0.0f,
     0x1.b26316p-92f, 0x1.4da254p-121f, 0x1.1badfcp-52f, 0x1.7a887p-96f,
     0x1.0243d4p-81f, 0.0f, 0.0f, 0.0f, 0x1.31e71cp-72f, 0.0f, 0x1p0f,
     0x1.f61bdcp-113f, 0x1.6af3d6p-1f, 0x1.f38ca6p-38f, 0x1.d241f6p-40f, 0.0f, 0.0f,
     0x1.6b8da6p-112f, 0x1.461e8p-43f, 0.0f, 0x1.96487ap-91f, 0.0f, 0x1.79db64p-97f,
     0.0f, 0x1.4af234p-53f, 0.0f, 0x1.db1846p-54f, 0x1.efd22cp-93f, 0.0f, 0.0f,
     0x1.2429b6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a89726p-62f, 0.0f, 0x1.c956b6p-44f,
     0.0f, 0x1.431fbcp-85f, 0x1.1b4104p-118f, 0x1.34d728p-109f, 0x1.74920ap-4f,
     0x1.2e15c8p-61f, 0.0f, 0.0f, 0.0f, 0x1.79696ap-41f, 0x1.864a4ap-87f, 0.0f,
     0x1.d227bcp-126f, 0x1.60c292p-30f, 0x1.f5e296p-19f, 0x1.c31492p-69f, 0.0f, 0.0f,
     0.0f, 0x1.fd0b7p-78f, 0.0f, 0.0f, 0x1.22bd3cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cba81p-66f, 0.0f, 0.0f, 0.0f, 0x1.a585f6p-86f, 0.0f, 0x1.3b2e72p-72f,
     0x1.43232cp-80f, 0x1.47c28ap-66f, 0x1.395accp-91f, 0x1.9fdb2cp-26f,
     0x1.3b2fa4p-67f, 0x1.3e9a7ep-39f, 0x1.981a6ep-52f, 0.0f, 0x1.c41e9ep-25f, 0.0f,
     0x1.f130a8p-121f, 0.0f, 0x1.e8053ap-36f, 0.0f, 0.0f, 0.0f, 0x1.2d6c46p-93f,
     0x1.eac1aep-50f, 0.0f, 0x1.6bfca2p-1f, 0.0f, 0x1.54b18p-91f, 0.0f, 0.0f,
     0x1.c582b2p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.832c42p-110f, 0.0f, 0x1.5ed108p-64f,
     0.0f, 0.0f, 0.0f, 0x1.c0338ap-67f, 0x1.fc282p-29f, 0.0f, 0x1.c16274p-113f, 0.0f,
     0x1.074902p-5f, 0.0f, 0.0f, 0x1.19a90ap-123f, 0x1.fb64a8p-9f, 0x1.cbd9c6p-68f,
     0x1.bc7ee2p-123f, 0.0f, 0x1.caadfcp-78f, 0x1.42d30ep-19f, 0x1.7b815cp-66f,
     0x1.4b179p-62f, 0.0f, 0.0f, 0x1.89538ap-20f, 0.0f, 0x1.8bfe2p-87f, 0.0f,
     0x1.0ad64cp-80f, 0.0f, 0.0f, 0x1.3544b2p-16f, 0.0f, 0x1.1e5b4p-45f, 0.0f,
     0x1.4f335ep-24f, 0x1.0fbf68p-104f, 0x1.f79092p-98f, 0.0f, 0.0f, 0x1.de27d2p-91f,
     0x1.c99da6p-126f, 0.0f, 0.0f, 0x1.c6d71cp-36f, 0x1.c5ae84p-14f, 0.0f,
     0x1.aa84acp-96f, 0.0f, 0x1.1b55e8p-65f, 0x1.4b52b4p-13f, 0.0f, 0x1.5dfe5ep-42f,
     0x1.9e84fap-43f, 0.0f, 0x1.d5f2fep-20f, 0.0f, 0x1.6968aap-32f, 0x1.9f84b2p-48f,
     0.0f, 0x1.a0d562p-118f, 0x1.b616eep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b52e4p-85f, 0.0f, 0.0f, 0x1.eebcbep-55f, 0x1.9d2f6ep-9f, 0.0f,
     0x1.64b93cp-57f, 0x1.9089eap-78f, 0.0f, 0x1.7e9b14p-38f, 0x1.316622p-2f, 0.0f,
     0.0f, 0.0f, 0x1.826ab8p-83f, 0x1.32390ep-85f, 0.0f, 0x1.28c0ecp-122f,
     0x1.890c4ap-99f, 0.0f, 0.0f, 0x1.d991a2p-4f, 0x1.b5c352p-7f, 0x1.9cc21p-50f,
     0x1.64621ap-17f, 0x1.1bd92ap-20f, 0x1.4f00c6p-86f, 0x1.ba63d6p-30f, 0.0f,
     0x1.ada6fp-17f, 0x1.6a31a2p-115f, 0.0f, 0.0f, 0x1.d73b0cp-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.56a3p-12f, 0x1.0f7796p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ceaeb6p-110f, 0.0f, 0x1.4f5a7ap-101f, 0x1.5238cp-2f, 0x1.e705c6p-106f, 0.0f,
     0x1.9559d8p-7f, 0.0f, 0.0f, 0x1.a95b06p-84f, 0x1.a1237ep-25f, 0.0f, 0.0f
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
            tmp1 = Sleef_log1pf4_u10avx2128(tmp0);
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
    printf("Sleef_log1pf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log1pf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
