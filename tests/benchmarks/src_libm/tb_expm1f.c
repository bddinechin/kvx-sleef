/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_expm1f.c --function expm1f --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0x1.7ded08p-8f, 0.0f, 0x1.48de22p-113f, 0.0f, 0.0f, 0x1.c17eccp-52f,
     0.0f, 0x1.b0ff98p-8f, 0.0f, 0.0f, 0.0f, 0x1.9fce36p-77f, 0x1.71ff3p-102f, 0.0f,
     0x1.3ff3bp-66f, 0x1.8f70e8p-116f, 0.0f, 0.0f, 0x1.74be92p-122f, 0.0f,
     0x1.bb4b14p-96f, 0.0f, 0x1.8c8678p-47f, 0.0f, 0x1.da385ap-110f, 0.0f, 0.0f,
     0x1.e48e0cp-110f, 0.0f, 0.0f, 0.0f, 0x1.dcfd64p-52f, 0x1.189bc4p-108f,
     0x1.c2183ap-119f, 0x1.fa0f2p-125f, 0x1.95d82ap-75f, 0x1.b1031cp-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.515b4ep-126f, 0.0f, 0x1.113488p-63f, 0.0f, 0x1.a3e4a4p-71f, 0.0f,
     0.0f, 0x1.03429cp-89f, 0x1.e70fdp-29f, 0.0f, 0x1.dfb5a8p-99f, 0.0f,
     0x1.bbdb36p-113f, 0x1.d26b74p-17f, 0.0f, 0x1.9b1c1p-94f, 0x1.06b6f8p-20f,
     0x1.b5c6cap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99d4a4p-91f,
     0.0f, 0x1.f4ea62p-119f, 0.0f, 0.0f, 0.0f, 0x1.b79de6p-40f, 0.0f, 0.0f,
     0x1.8c8faep-65f, 0x1.b8525ep-11f, 0.0f, 0.0f, 0.0f, 0x1.f40ef4p-37f,
     0x1.a0b134p-120f, 0.0f, 0x1.bb9fc2p-81f, 0x1.5f72a4p-25f, 0x1.3197aep-72f,
     0x1.e169f2p-54f, 0x1.f52e3ap-59f, 0.0f, 0.0f, 0x1.2d0fdp-56f, 0x1.58427ap-3f,
     0x1.8680a6p-2f, 0x1.da88a6p-120f, 0.0f, 0x1.ceea16p-21f, 0.0f, 0.0f, 0.0f,
     0x1.88fae4p-87f, 0.0f, 0x1.f2a114p-14f, 0x1.c51662p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.514a0ap-92f, 0x1.dac86p-97f, 0x1.ad7638p-36f, 0x1.b4d93ap-32f,
     0x1.7cf32ap-47f, 0.0f, 0.0f, 0x1.3628e2p-101f, 0x1.7cc63p-111f, 0x1.2cd13p-28f,
     0.0f, 0.0f, 0.0f, 0x1.7705fcp-8f, 0.0f, 0.0f, 0.0f, 0x1.58263p-7f, 0.0f,
     0x1.06284ap-90f, 0.0f, 0.0f, 0x1.ff3efep-52f, 0x1.a64f5p-12f, 0.0f, 0.0f,
     0x1.7b78aep-99f, 0x1.abe5aep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.546fbcp-119f,
     0x1.295926p-17f, 0.0f, 0x1.4fb4e6p-52f, 0.0f, 0x1.956444p-16f, 0.0f,
     0x1.fd5a08p-73f, 0.0f, 0x1.def84ap-94f, 0x1.8261eap-86f, 0.0f, 0x1.b72fbap-119f,
     0x1.d0c486p-113f, 0.0f, 0.0f, 0x1.05f456p-91f, 0x1.99cb5ap-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6335fp-16f, 0.0f, 0x1.41435ap-3f, 0.0f, 0.0f, 0x1.e7bd08p-123f, 0.0f,
     0x1.6b3836p-69f, 0x1.b14a7p-24f, 0.0f, 0x1.de82c8p-112f, 0.0f, 0x1.dcb61cp-26f,
     0x1.c0dc8ep-28f, 0x1.69251p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f5b14p-11f, 0.0f,
     0.0f, 0x1.08881ap-88f, 0.0f, 0.0f, 0.0f, 0x1.aca572p-118f, 0x1.61fbe8p-45f,
     0x1.fff754p-28f, 0.0f, 0x1.c3650cp-109f, 0.0f, 0x1.65cca2p-115f, 0.0f,
     0x1.91d17p-54f, 0x1p0f, 0x1.b249fep-107f, 0.0f, 0x1.3894f6p-54f, 0.0f,
     0x1.1dacb8p-72f, 0.0f, 0x1.4a8d52p-3f, 0.0f, 0.0f, 0x1.d5724p-108f,
     0x1.6cc524p-100f, 0.0f, 0x1.ccc7e4p-126f, 0x1.cefeeap-7f, 0.0f, 0.0f,
     0x1.84dcfep-72f, 0x1.03610cp-76f, 0.0f, 0x1.0cf8bep-106f, 0.0f, 0.0f,
     0x1.9d4f6p-38f, 0.0f, 0x1.5b946cp-53f, 0.0f, 0x1.9b6bd4p-32f, 0.0f,
     0x1.240b0ap-22f, 0.0f, 0x1.83ec4p-59f, 0.0f, 0x1.936c48p-69f, 0.0f, 0.0f, 0.0f,
     0x1.c6eca4p-27f, 0x1.fe13a6p-100f, 0x1.302dbp-30f, 0.0f, 0.0f, 0.0f,
     0x1.320574p-64f, 0x1.ce2afcp-77f, 0.0f, 0x1.24c0b8p-41f, 0x1.2838fap-68f,
     0x1.b1778ep-61f, 0.0f, 0.0f, 0.0f, 0x1.3ade3ap-55f, 0x1.ab22c6p-84f,
     0x1.4e73acp-116f, 0x1.49247ep-95f, 0x1.4a98d8p-62f, 0x1.8712bep-98f, 0.0f, 0.0f,
     0x1.64d7d4p-102f, 0.0f, 0x1.016eap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfa894p-45f,
     0x1.5ffc0ep-96f, 0x1.e6b388p-58f, 0.0f, 0.0f, 0x1.0d70d2p-98f, 0x1.85a3a2p-126f,
     0x1.b9e3cap-92f, 0x1.895fa6p-87f, 0.0f, 0.0f, 0.0f, 0x1.be7d28p-59f,
     0x1.dd54ep-117f, 0x1.107996p-54f, 0.0f, 0.0f, 0x1.551258p-81f, 0.0f,
     0x1.409a74p-75f, 0.0f, 0.0f, 0.0f, 0x1.3bfcb6p-84f, 0.0f, 0.0f, 0x1.f73078p-97f,
     0x1.e39c86p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cb384p-35f,
     0.0f, 0x1.83a9fap-10f, 0.0f, 0.0f, 0x1.3ccdeep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cba6e8p-100f, 0x1.96f604p-12f, 0.0f, 0x1.c3b77p-96f, 0.0f,
     0x1.27dbe6p-100f, 0.0f, 0.0f, 0x1.2866a2p-96f, 0.0f, 0.0f, 0x1.19f7a4p-37f,
     0x1.fb5c8ap-79f, 0.0f, 0x1.0df7b8p-124f, 0x1.5d51f4p-27f, 0.0f, 0x1.d1c04ap-107f,
     0.0f, 0x1.30975p-1f, 0.0f, 0.0f, 0x1.31256ep-84f, 0.0f, 0x1.c1d90ep-120f,
     0x1.e9897p-119f, 0.0f, 0x1.df5f48p-87f, 0.0f, 0x1.131c5cp-119f, 0.0f,
     0x1.dd1376p-95f, 0.0f, 0x1.63e4cep-36f, 0x1.5d5c0ep-87f, 0x1.5281ecp-79f, 0.0f,
     0.0f, 0x1.7a3982p-2f, 0x1.28a86ap-119f, 0.0f, 0x1.6ef27p-54f, 0x1.31c4bp-115f,
     0.0f, 0.0f, 0x1.4da408p-106f, 0x1.0d1a14p-90f, 0.0f, 0x1.c26e9p-73f, 0.0f,
     0x1.7ac1bcp-38f, 0x1.9240c4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8da8e2p-52f,
     0x1.f35246p-109f, 0x1.2c168ap-53f, 0x1.4743aap-1f, 0.0f, 0x1.f1b99ap-123f, 0.0f,
     0x1.555838p-24f, 0x1.f729d4p-75f, 0.0f, 0x1.62db94p-123f, 0x1.cb5076p-89f, 0.0f,
     0x1.361032p-77f, 0x1.131a1cp-50f, 0.0f, 0x1.db2a7p-78f, 0.0f, 0.0f, 0.0f,
     0x1.7b32dp-23f, 0x1.3d788p-59f, 0.0f, 0x1.a876bp-86f, 0x1.6d1bcp-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6be32ep-38f, 0.0f, 0.0f, 0x1.61a8cap-3f, 0x1.db950ep-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.74a234p-113f, 0.0f, 0.0f, 0x1.79a73p-88f,
     0x1.ff826p-22f, 0x1.492edcp-11f, 0.0f, 0x1.2c39dep-97f, 0x1.3d7af2p-56f,
     0x1.022a92p-40f, 0.0f, 0x1.b99458p-32f, 0x1.62a1d2p-114f, 0x1.089f1p-77f, 0.0f,
     0.0f, 0x1.294a6ep-88f, 0.0f, 0x1.2eb7eap-49f, 0.0f, 0.0f, 0.0f, 0x1.e89a08p-27f,
     0.0f, 0x1.ffd88ap-68f, 0.0f, 0.0f, 0x1.b9addp-14f, 0x1.cce67ep-10f,
     0x1.11ce3p-40f, 0x1.275526p-118f, 0x1.462a3ep-68f, 0.0f, 0.0f, 0.0f,
     0x1.5be7d2p-1f, 0x1.af690ap-48f, 0x1.14bb3ep-105f, 0x1.79da04p-55f, 0.0f, 0.0f,
     0x1.dfeefcp-85f, 0x1.5e171cp-75f, 0x1.e9db6cp-103f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.aabd54p-31f, 0x1.2068cap-91f, 0x1.8d2716p-61f, 0.0f, 0x1.b20904p-107f,
     0x1.23d6a4p-104f, 0.0f, 0x1.baf4bap-68f, 0x1.ed3586p-58f, 0x1.25f36ap-14f,
     0x1.2f8a6ep-115f, 0x1.ddc0fcp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ccd6ep-60f,
     0x1.0abd1cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83995p-5f,
     0x1.456064p-79f, 0.0f, 0x1.3c63fp-32f, 0x1.8ca99ep-108f, 0x1.455178p-19f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.5dc008p-80f, 0.0f, 0.0f, 0x1.5199bap-9f,
     0x1.84984p-39f, 0.0f, 0x1.ec1deep-66f, 0x1.9dc0fcp-122f, 0.0f, 0.0f,
     0x1.3224aap-90f, 0.0f, 0x1.507f7p-13f, 0x1.6c4338p-117f, 0.0f, 0x1.3d0dd2p-15f,
     0x1.1f2d82p-66f, 0x1.0cfcacp-48f, 0.0f, 0x1.a41016p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44c27ep-30f, 0x1.bb0666p-58f, 0x1.e5368cp-85f, 0x1.30adfap-47f,
     0x1.b1ee1p-103f, 0x1.94ce5ap-13f, 0x1.7a1d7ep-36f, 0x1.24752p-42f,
     0x1.3d2bf2p-62f, 0.0f, 0x1.d4704p-123f, 0x1.9e193p-59f, 0x1.67ee88p-46f, 0.0f,
     0x1.094b5p-112f, 0x1.23ee38p-73f, 0.0f, 0x1.e09176p-75f, 0.0f, 0.0f,
     0x1.7a40d8p-23f, 0x1.d96a5ap-33f, 0.0f, 0.0f, 0.0f, 0x1.1c9fap-28f,
     0x1.9fe8dp-80f, 0.0f, 0x1.d0a3ecp-47f, 0x1.0b93a8p-84f, 0.0f, 0x1.70761cp-49f,
     0.0f, 0.0f, 0.0f, 0x1.c7512p-121f, 0x1.aa2296p-23f, 0x1.3755f4p-3f,
     0x1.c827d2p-25f, 0.0f, 0.0f, 0.0f, 0x1.e41fa8p-52f, 0x1.453bbp-26f, 0.0f, 0.0f,
     0x1.31ba34p-31f, 0.0f, 0x1.15c17ap-94f, 0x1.7ce0aap-52f, 0.0f, 0.0f,
     0x1.b2e28cp-81f, 0x1.53502ep-79f, 0.0f, 0.0f, 0x1.df759ap-27f, 0.0f, 0.0f,
     0x1.312712p-123f, 0x1.6e671cp-33f, 0.0f, 0.0f, 0.0f, 0x1.a5598cp-122f,
     0x1.db08a2p-97f, 0x1.9df668p-49f, 0.0f, 0.0f, 0.0f, 0x1.9e7d3ap-85f,
     0x1.e9842ap-22f, 0x1.196a36p-41f, 0.0f, 0x1.0c4b8p-67f, 0.0f, 0x1.14ba74p-23f,
     0.0f, 0.0f, 0.0f, 0x1.751e7ap-124f, 0x1.0db796p-68f, 0x1.7a3ff2p-81f,
     0x1.adece6p-18f, 0x1.f02e34p-70f, 0.0f, 0.0f, 0x1.9ae62p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c8d5ap-39f, 0x1.27d9ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.469bfep-70f,
     0x1.2e8cf6p-72f, 0.0f, 0.0f, 0.0f, 0x1.f41882p-10f, 0x1p0f, 0x1.06d7b6p-109f,
     0.0f, 0x1.72d30cp-98f, 0x1.829ae4p-97f, 0x1.9448f8p-126f, 0.0f, 0x1.575682p-87f,
     0x1.23c3ecp-20f, 0x1.a4efb8p-34f, 0x1.b801d4p-114f, 0x1.964b98p-123f, 0.0f, 0.0f,
     0x1.6f72bp-60f, 0.0f, 0x1.0393eep-68f, 0.0f, 0x1.c8b708p-10f, 0.0f, 0.0f, 0.0f,
     0x1.e327cp-123f, 0x1.fdede2p-114f, 0x1.e4972ep-29f, 0.0f, 0.0f, 0x1.160ff4p-116f,
     0.0f, 0x1.a38b2cp-79f, 0x1.6a4c2ep-123f, 0x1.0f65f2p-58f, 0x1.d3839p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6a0aa2p-87f, 0x1.9cd44cp-9f, 0x1.0b7d98p-62f, 0.0f, 0.0f,
     0x1.2215p-119f, 0x1.93771p-104f, 0x1.350a3ap-121f, 0x1.2dc59p-104f,
     0x1.604074p-58f, 0x1.1f46dep-107f, 0x1.4c8642p-11f, 0x1.1791dap-47f,
     0x1.64d11cp-32f, 0x1.6008p-112f, 0.0f, 0x1.19ed7cp-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92c226p-114f, 0.0f, 0x1.b63ed4p-110f, 0x1.bc021cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.a9e426p-102f, 0.0f, 0x1.f6f5f6p-58f, 0x1.4c6d68p-6f, 0x1.15f4c2p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7dbd88p-111f, 0x1.3c7cbcp-112f, 0x1.bb1636p-107f,
     0x1.bcec3ep-69f, 0.0f, 0x1.1915dep-53f, 0.0f, 0x1.a796fp-6f, 0x1.4d948cp-27f,
     0x1.e0c0ap-54f, 0.0f, 0x1.2986f8p-116f, 0x1.f0be6ep-69f, 0.0f, 0x1.701362p-14f,
     0x1.a560fp-115f, 0x1.c3f91ep-42f, 0.0f, 0x1.5410b6p-83f, 0x1.30ad3ep-3f,
     0x1.57ef3ap-24f, 0.0f, 0.0f, 0.0f, 0x1.0f67b2p-5f, 0.0f, 0x1.e952bep-112f, 0.0f,
     0.0f, 0.0f, 0x1.16140ep-21f, 0.0f, 0.0f, 0x1.97726ap-9f, 0x1.84bedcp-6f,
     0x1.38486ep-97f, 0.0f, 0x1.4c3b82p-22f, 0x1.d99564p-79f, 0.0f, 0.0f,
     0x1.9d2038p-6f, 0x1.c766cep-87f, 0.0f, 0x1.f96ec4p-51f, 0.0f, 0x1.9178cap-19f,
     0x1.b7fd72p-116f, 0.0f, 0.0f, 0x1.250e6ap-104f, 0.0f, 0x1.8f66e2p-126f,
     0x1.86258ap-75f, 0x1.3307e2p-29f, 0.0f, 0x1.cbc94ap-105f, 0.0f, 0x1.4835b4p-69f,
     0.0f, 0.0f, 0.0f, 0x1.3efd52p-23f, 0x1.f0d84ep-20f, 0x1.2979ap-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.39b69cp-54f, 0.0f, 0.0f, 0x1.1c141ap-36f, 0.0f, 0.0f, 0.0f,
     0x1.d59206p-6f, 0.0f, 0.0f, 0x1.22f574p-46f, 0.0f, 0x1.fc9922p-47f,
     0x1.746c88p-72f, 0x1.0b8e3ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a946b8p-55f,
     0x1.889258p-108f, 0x1.863ee2p-85f, 0.0f, 0.0f, 0.0f, 0x1.444bf4p-85f,
     0x1.61746cp-35f, 0x1.2409aep-110f, 0x1.e6e4a2p-45f, 0.0f, 0.0f, 0x1.f02574p-5f,
     0.0f, 0.0f, 0x1.37ccbep-31f, 0.0f, 0x1.dfca0cp-109f, 0.0f, 0x1.bd499ap-74f,
     0x1.08763ap-112f, 0x1.89bf72p-122f, 0x1.aef35ep-68f, 0x1.32e1f2p-119f, 0.0f,
     0.0f, 0.0f, 0x1.c8263cp-113f, 0.0f, 0x1.d44c9p-93f, 0x1.a1421cp-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.48c9b8p-29f, 0x1.3ac2a6p-106f, 0.0f, 0.0f, 0.0f, 0x1.481336p-99f,
     0.0f, 0x1.f6af74p-33f, 0x1.47fe0ep-84f, 0.0f, 0x1.d27c1cp-22f, 0x1.cd4d92p-61f,
     0.0f, 0.0f, 0.0f, 0x1.18d7ap-8f, 0.0f, 0x1.29169cp-78f, 0.0f, 0x1.3e414cp-52f,
     0x1.0f01d4p-52f, 0.0f, 0x1.a0ff24p-77f, 0x1.921f2ap-106f, 0x1.5075e4p-63f,
     0x1.c520f2p-3f, 0.0f, 0x1.ef9e48p-67f, 0x1.cb270ep-83f, 0.0f, 0x1.912e8ap-16f,
     0.0f, 0.0f, 0.0f, 0x1.5e1f9ap-106f, 0.0f, 0x1.373408p-54f, 0.0f, 0.0f,
     0x1.b0a6p-62f, 0x1.d9d0f2p-73f, 0x1.403242p-76f, 0.0f, 0x1.8dd0b4p-106f,
     0x1.980ee2p-22f, 0x1.4dc46p-105f, 0x1.c5861p-40f, 0.0f, 0x1.9f499p-11f, 0.0f,
     0x1.f0c4cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57f8p-66f, 0x1.f4c8f4p-4f, 0.0f, 0.0f, 0x1.7ce6cap-109f, 0x1.ee751ep-126f,
     0x1.190652p-52f, 0x1.4403fap-2f, 0.0f, 0x1.c589b2p-63f, 0.0f, 0x1.f92dc6p-9f,
     0x1.f030c6p-85f, 0.0f, 0.0f, 0x1.c0c58p-51f, 0.0f, 0.0f, 0x1.8e37bap-11f, 0.0f,
     0.0f, 0x1.23fdeap-29f, 0x1.0ff766p-125f, 0.0f, 0.0f, 0x1.7bb9dcp-33f, 0.0f,
     0x1.226b8p-26f, 0x1.8f599p-102f, 0x1.fa5d62p-55f, 0.0f, 0x1.d1ad98p-3f,
     0x1.600058p-48f, 0x1.c759a4p-6f, 0x1.03a47p-13f, 0.0f, 0x1.655a9cp-87f,
     0x1.15f994p-102f, 0x1.4dcf7p-96f, 0x1.50b6b8p-87f, 0.0f, 0.0f, 0x1.ed8a28p-15f,
     0.0f, 0.0f, 0x1.0592eap-100f, 0x1.758f7ep-7f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8cad2p-81f, 0.0f, 0.0f, 0.0f,
     0x1.8cc99ep-24f, 0.0f, 0.0f, 0x1.98d05p-57f, 0.0f, 0x1.bb87fap-16f, 0.0f,
     0x1.622336p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.546302p-76f, 0.0f,
     0x1.e9ed7cp-8f, 0.0f, 0x1.293e2cp-77f, 0.0f, 0x1.cfef78p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3465cp-96f, 0x1.cdf046p-40f, 0.0f, 0x1.fec9b8p-41f, 0x1.cc378cp-125f,
     0x1.1aaf48p-123f, 0x1.0a38d4p-55f, 0x1.ca0254p-117f, 0x1.a66074p-26f,
     0x1.48f31cp-63f, 0x1.18036p-106f, 0x1.a1115ap-21f, 0x1.a1dd8ap-114f,
     0x1.f0027ep-39f, 0x1.adb84cp-18f, 0x1.c44a86p-16f, 0.0f, 0x1.da96bep-121f, 0.0f,
     0x1.2eca98p-86f, 0x1.f52dcap-90f, 0.0f, 0.0f, 0.0f, 0x1.25ec56p-29f,
     0x1.4acb2p-69f, 0x1.808614p-118f, 0x1.eeabb4p-23f, 0x1.78d964p-21f,
     0x1.1e149p-57f, 0x1.397c94p-89f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = expm1f(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("expm1f %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("expm1f bench acc %a\n", global_bench_acc);
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
