/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf8_u35kvx.c --function Sleef_finz_tanf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
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


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0.0f, 0.0f, 0x1.e14324p-125f, 0x1.51e64ap-115f, 0x1.0757d2p-39f, 0.0f,
     0.0f, 0x1.2bd5f2p-73f, 0x1.d49abp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e5774p-43f,
     0.0f, 0x1.5af566p-73f, 0.0f, 0x1.b64e08p-28f, 0.0f, 0x1.dae5d2p-6f,
     0x1.cbced6p-75f, 0.0f, 0.0f, 0.0f, 0x1.b2c5f4p-83f, 0.0f, 0x1.eafe68p-112f, 0.0f,
     0.0f, 0x1.1caa56p-47f, 0.0f, 0x1.d69e98p-106f, 0x1.3f0ce8p-115f,
     0x1.6e0ac4p-119f, 0.0f, 0x1.88762ep-6f, 0x1.adda34p-29f, 0x1.cb6998p-53f,
     0x1.abfbep-76f, 0x1.64036p-122f, 0x1.f82a4cp-46f, 0.0f, 0x1.0c512p-39f,
     0x1.e3a18cp-101f, 0.0f, 0.0f, 0x1.d4b574p-83f, 0.0f, 0x1.60dde8p-109f, 0.0f,
     0x1.13b754p-111f, 0x1.13afe6p-82f, 0.0f, 0.0f, 0x1.acfbcep-70f, 0.0f,
     0x1.6b279p-71f, 0x1.f3630ep-101f, 0.0f, 0x1.160896p-85f, 0x1.593dbap-41f, 0.0f,
     0x1.62d9ccp-64f, 0x1.613ab2p-69f, 0x1.26f664p-55f, 0x1.cd3534p-2f, 0.0f,
     0x1.db1892p-85f, 0x1.4d5df6p-39f, 0x1.454c72p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58dddep-30f, 0x1.9b800ep-108f, 0.0f, 0.0f, 0.0f, 0x1.b4cb9p-70f,
     0x1.6d4598p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.489148p-108f, 0x1.0242c8p-61f,
     0.0f, 0x1.003be6p-25f, 0x1.5de7b4p-53f, 0x1.39e31p-47f, 0x1.a558b6p-37f,
     0x1.54651ep-86f, 0.0f, 0x1.7aa2eep-9f, 0.0f, 0x1.9e52fep-42f, 0x1.dbe026p-83f,
     0x1.6f0eb2p-101f, 0.0f, 0.0f, 0.0f, 0x1.7b0a0ep-86f, 0x1.75e8bep-10f,
     0x1.e4b92cp-102f, 0x1.75c1cep-71f, 0x1.3e2cd4p-97f, 0.0f, 0x1.bfeb3cp-50f, 0.0f,
     0.0f, 0x1.091566p-13f, 0x1.7803aep-110f, 0.0f, 0.0f, 0x1.3483dep-122f,
     0x1.2319bep-79f, 0.0f, 0x1.02c0bcp-62f, 0x1.b9fe28p-45f, 0.0f, 0x1.096792p-44f,
     0x1.4fb4f8p-57f, 0.0f, 0.0f, 0x1.9c2832p-91f, 0.0f, 0x1.6017e6p-83f, 0.0f, 0.0f,
     0x1.d70104p-37f, 0x1.b0dff6p-107f, 0x1.2383b8p-93f, 0.0f, 0.0f, 0x1.060832p-110f,
     0.0f, 0.0f, 0x1.679866p-5f, 0.0f, 0.0f, 0x1.92911ap-45f, 0.0f, 0x1.76ffccp-8f,
     0.0f, 0.0f, 0x1.52fd12p-3f, 0.0f, 0.0f, 0x1.a64502p-20f, 0x1.09627cp-124f,
     0x1.718ee4p-29f, 0.0f, 0x1.5aa86cp-99f, 0.0f, 0x1.13a662p-22f, 0x1.bc9dcap-84f,
     0.0f, 0x1.6146ccp-94f, 0.0f, 0x1.7cd076p-91f, 0x1.51c3eap-22f, 0.0f,
     0x1.0f183ap-26f, 0x1.d90566p-118f, 0x1.3acf38p-78f, 0.0f, 0.0f, 0x1.341496p-20f,
     0.0f, 0.0f, 0.0f, 0x1.608eccp-48f, 0x1.55344cp-102f, 0.0f, 0.0f, 0x1.27782p-77f,
     0x1.982c1cp-22f, 0.0f, 0x1.82821ap-36f, 0x1.bf2fa4p-60f, 0x1.aa1b54p-62f,
     0x1.1b1a72p-13f, 0.0f, 0.0f, 0.0f, 0x1.19a5b4p-98f, 0x1.1a1cacp-52f, 0.0f,
     0x1.4fa3b8p-114f, 0.0f, 0x1.e6b414p-20f, 0x1.6f598ap-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9e9a4p-8f, 0x1.b0cb06p-74f, 0.0f, 0x1.7a18f8p-73f, 0.0f, 0x1.4dba06p-51f,
     0.0f, 0x1.9cbd74p-25f, 0.0f, 0x1.32b976p-13f, 0.0f, 0x1.f5d272p-65f, 0.0f,
     0x1.57eea6p-95f, 0.0f, 0.0f, 0.0f, 0x1.844b92p-118f, 0.0f, 0x1.e0c646p-54f, 0.0f,
     0x1.59751cp-35f, 0.0f, 0x1.b2bbbcp-54f, 0.0f, 0.0f, 0x1.b66fcap-77f,
     0x1.512a82p-69f, 0x1.1cf5c8p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50ecep-30f, 0x1.ba5284p-32f, 0x1.2f22f2p-69f, 0.0f, 0.0f, 0x1.d9c47cp-109f,
     0x1.2dacdep-17f, 0.0f, 0.0f, 0x1.148d8ap-66f, 0.0f, 0.0f, 0x1.cae226p-82f, 0.0f,
     0.0f, 0x1.24e484p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e13fcp-78f,
     0x1.b2690cp-105f, 0x1.493ee8p-99f, 0x1.6a4ba2p-68f, 0x1.d9ffdep-31f, 0.0f,
     0x1.e3fecap-4f, 0x1.dd6fa4p-89f, 0x1.162b34p-53f, 0x1.70e87p-62f, 0.0f,
     0x1.0de89cp-46f, 0.0f, 0.0f, 0x1.774cc2p-68f, 0x1.d96cacp-81f, 0x1.a7d8fcp-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c91378p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2dabp-84f,
     0.0f, 0.0f, 0x1.8aa0fap-7f, 0x1.6ab8b8p-88f, 0x1.8c16acp-125f, 0x1.21d3b2p-71f,
     0.0f, 0x1.2cb51ep-91f, 0x1.0bdc92p-106f, 0.0f, 0.0f, 0x1.2d079p-82f, 0.0f, 0.0f,
     0x1.6194c6p-9f, 0.0f, 0.0f, 0x1.3f5b6ap-50f, 0.0f, 0.0f, 0.0f, 0x1.4cd364p-92f,
     0x1.a98bd8p-96f, 0x1.4fae1ep-20f, 0x1.f3d8a6p-86f, 0x1.aad05cp-12f,
     0x1.6ab962p-69f, 0.0f, 0.0f, 0x1.1ddc1ap-60f, 0x1.254cdp-84f, 0.0f, 0.0f,
     0x1.dd50a6p-106f, 0.0f, 0x1.ba5b4ap-69f, 0x1.4ae8a8p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.494312p-115f, 0.0f, 0.0f, 0.0f, 0x1.2ee08cp-69f, 0.0f, 0x1.4ea412p-2f,
     0x1.9dc2fap-54f, 0.0f, 0x1.922f3ep-56f, 0x1.7eb276p-63f, 0.0f, 0x1.385c08p-63f,
     0x1.42fcaap-96f, 0x1.4d2546p-66f, 0x1.226d98p-54f, 0x1.b9bb96p-17f,
     0x1.288f9cp-126f, 0.0f, 0x1.261eap-52f, 0x1.95e31p-80f, 0.0f, 0.0f,
     0x1.be589ep-43f, 0x1.34a9b6p-20f, 0x1.9e2272p-50f, 0.0f, 0x1.659c96p-19f, 0.0f,
     0x1.94e26ep-123f, 0x1.a91324p-1f, 0x1.d8ff66p-5f, 0x1p0f, 0.0f, 0.0f,
     0x1.8bd7c2p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc6daap-101f, 0x1.c6c628p-15f,
     0x1.5038c4p-101f, 0.0f, 0.0f, 0.0f, 0x1.ca7584p-113f, 0.0f, 0.0f,
     0x1.c2577p-123f, 0.0f, 0.0f, 0.0f, 0x1.99faa6p-30f, 0x1.79141cp-83f,
     0x1.538cap-35f, 0.0f, 0x1.b13312p-110f, 0.0f, 0.0f, 0.0f, 0x1.aec528p-71f,
     0x1.42abb8p-73f, 0x1.f069a6p-52f, 0.0f, 0.0f, 0x1.fcdaacp-44f, 0.0f,
     0x1.8963e4p-117f, 0x1.3bd2a2p-52f, 0x1.61916ep-120f, 0x1.dcb224p-94f, 0.0f, 0.0f,
     0x1.e95bd4p-29f, 0.0f, 0x1.bbc506p-83f, 0.0f, 0.0f, 0x1.c27608p-119f, 0.0f,
     0x1.8bc684p-52f, 0.0f, 0.0f, 0.0f, 0x1.9f1c7ep-75f, 0.0f, 0x1.c5e87ep-54f, 0.0f,
     0x1.2e6aeap-50f, 0x1.e8c77cp-15f, 0x1.77c992p-51f, 0x1.7502eep-121f, 0.0f,
     0x1.8e6a64p-118f, 0.0f, 0.0f, 0x1.28cb1cp-109f, 0.0f, 0.0f, 0x1.02af32p-64f,
     0x1.cdb562p-87f, 0x1.86ad2ep-123f, 0x1.94cd08p-92f, 0.0f, 0.0f, 0x1.16b2dap-13f,
     0x1.8a1bd8p-112f, 0x1.b7c188p-44f, 0x1.78f486p-91f, 0x1.ff31c4p-36f, 0.0f,
     0x1.dfe36p-93f, 0x1.df5beep-18f, 0.0f, 0.0f, 0.0f, 0x1.507b3ep-83f,
     0x1.fe5f2cp-8f, 0x1.85ded4p-35f, 0x1.0bc9ap-23f, 0x1.4012bep-63f,
     0x1.512f8ap-33f, 0.0f, 0x1.fd6c56p-26f, 0x1.7e971p-76f, 0x1.80ae9ap-5f, 0.0f,
     0x1.f3d22cp-6f, 0.0f, 0.0f, 0x1.664a06p-25f, 0.0f, 0.0f, 0.0f, 0x1.4b545ep-58f,
     0x1.d0f252p-123f, 0x1.9a79b8p-16f, 0x1.bbc792p-116f, 0x1.7c9c36p-93f,
     0x1.cfe9e4p-102f, 0x1.144f78p-79f, 0x1.e2d3fep-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82029ap-91f, 0x1.2d007p-50f, 0.0f, 0.0f, 0.0f, 0x1.d1dd3cp-27f, 0.0f,
     0x1.1ed262p-28f, 0.0f, 0x1.cdd4dap-58f, 0x1.fab36ap-57f, 0x1.026666p-56f,
     0x1.a18bfap-15f, 0x1.9b2a24p-15f, 0.0f, 0x1.663e44p-14f, 0x1.e4b048p-28f,
     0x1.f7bea2p-72f, 0.0f, 0x1.c5496p-50f, 0x1.d51f02p-89f, 0.0f, 0.0f,
     0x1.eb0de6p-71f, 0.0f, 0.0f, 0x1.71dc1cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c625cp-27f, 0x1.c2ca0ap-32f, 0x1.29e6d4p-37f, 0x1.8824ap-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d3fbb4p-117f, 0.0f, 0.0f, 0x1.543df6p-35f, 0.0f, 0.0f,
     0x1.83eb58p-55f, 0.0f, 0.0f, 0x1.0c10b8p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ac778p-98f, 0x1.c25c1ep-64f, 0x1.ab9872p-16f, 0.0f, 0x1.9f2664p-9f, 0.0f,
     0x1.2583bap-106f, 0.0f, 0x1.6f928ap-4f, 0.0f, 0.0f, 0.0f, 0x1.9593e6p-30f, 0.0f,
     0.0f, 0.0f, 0x1.0deab6p-86f, 0x1.9a1696p-59f, 0x1.89dce6p-124f, 0.0f, 0.0f,
     0x1.ec50e4p-77f, 0x1.c39534p-27f, 0.0f, 0.0f, 0x1.6618e2p-81f, 0x1.a11576p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b4272p-89f, 0.0f, 0x1.46d97cp-126f, 0.0f,
     0x1.d95394p-23f, 0.0f, 0x1.45859ep-2f, 0x1.3af034p-58f, 0x1.5bf816p-119f, 0.0f,
     0x1.aa32e4p-34f, 0.0f, 0.0f, 0x1.361412p-10f, 0.0f, 0.0f, 0x1.47b2acp-16f,
     0x1.e319a8p-57f, 0.0f, 0x1.4a6a52p-57f, 0x1.3c3e2ep-13f, 0.0f, 0x1.d8c556p-34f,
     0.0f, 0x1.f3cf9cp-21f, 0x1.2f7b02p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a78fdep-83f,
     0x1.49ee38p-29f, 0x1.69d8cp-61f, 0x1.dbac36p-36f, 0x1.01887p-87f, 0.0f, 0.0f,
     0.0f, 0x1.51f81ep-44f, 0x1.54dedcp-66f, 0.0f, 0x1.a28a5ap-59f, 0x1.9061f2p-30f,
     0x1.c59a42p-106f, 0x1.102c3ap-1f, 0x1.3dc6acp-93f, 0.0f, 0.0f, 0x1.4531ccp-19f,
     0.0f, 0.0f, 0x1.b31478p-94f, 0.0f, 0.0f, 0.0f, 0x1.efcd08p-60f, 0.0f,
     0x1.ff621ep-80f, 0x1.d2e98p-30f, 0.0f, 0x1.8006a4p-40f, 0.0f, 0x1.43eebp-24f,
     0x1.8f4b24p-11f, 0x1.82fe22p-58f, 0x1.cc3b76p-74f, 0.0f, 0.0f, 0.0f,
     0x1.5cf228p-5f, 0x1.c55da6p-15f, 0x1.d13d54p-105f, 0.0f, 0x1.37dc42p-15f, 0.0f,
     0x1.8b226ap-26f, 0x1.9cf782p-6f, 0.0f, 0x1.892acep-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21768cp-32f, 0x1.90c63p-74f, 0x1.1ec97p-47f, 0x1.7457e4p-42f, 0.0f,
     0.0f, 0x1.f159c2p-38f, 0.0f, 0.0f, 0x1.5a044cp-15f, 0x1.9de6cap-62f,
     0x1.de130cp-34f, 0.0f, 0.0f, 0x1.893b84p-108f, 0x1.56aebap-69f, 0.0f,
     0x1.3f5eeep-91f, 0.0f, 0x1.b179p-78f, 0.0f, 0x1.63f5dap-94f, 0x1.997ef6p-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.053a9ap-56f, 0x1.fde32p-23f, 0.0f, 0.0f, 0.0f,
     0x1.4e6da8p-105f, 0x1.18fdf2p-98f, 0x1.1fd124p-68f, 0.0f, 0x1.4f4eecp-74f, 0.0f,
     0.0f, 0x1.9a3e18p-125f, 0x1.3dca3cp-40f, 0.0f, 0.0f, 0x1.ab444ep-115f, 0.0f,
     0.0f, 0x1.be8bf4p-97f, 0x1.b37bc8p-97f, 0.0f, 0.0f, 0.0f, 0x1.c2e05cp-100f,
     0x1.2f4c9cp-56f, 0x1.19af02p-3f, 0x1.22a7b2p-42f, 0.0f, 0x1.4c18b4p-90f, 0.0f,
     0x1.d1a3a2p-39f, 0.0f, 0x1.4e3a94p-47f, 0x1.20bddp-30f, 0x1.98b448p-24f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.b617dp-8f, 0x1.38aaecp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01cfaep-14f, 0.0f, 0.0f, 0.0f, 0x1.2ad78p-115f, 0.0f, 0x1.f0aa7cp-113f, 0.0f,
     0x1.61b994p-116f, 0.0f, 0x1.fb9052p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.62b634p-78f, 0x1.d53784p-67f, 0x1.7b7eaep-124f, 0.0f, 0x1.f31ed2p-73f,
     0x1.965bc8p-25f, 0.0f, 0x1p0f, 0.0f, 0x1.03ca5cp-118f, 0x1.1acc1ap-55f, 0.0f,
     0.0f, 0.0f, 0x1.d7b8a8p-31f, 0x1.ea676ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb5138p-23f, 0.0f, 0.0f, 0x1.f87e1ap-108f, 0.0f,
     0x1.039ef8p-4f, 0x1.c4a6b8p-30f, 0.0f, 0x1.329e6p-73f, 0.0f, 0x1.511d76p-67f,
     0x1.f03932p-57f, 0.0f, 0x1.c0c5eap-86f, 0.0f, 0x1.14f1aap-7f, 0x1.72a44ap-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9dbdfep-13f, 0x1.d4515p-111f, 0.0f,
     0.0f, 0.0f, 0x1.22d104p-37f, 0.0f, 0x1.04fed4p-84f, 0.0f, 0x1.6eafa6p-49f,
     0x1.c3732ap-77f, 0x1.cc0744p-46f, 0.0f, 0x1.fcece2p-38f, 0.0f, 0x1.5b49bcp-126f,
     0.0f, 0x1.a069fep-59f, 0x1.b53a1cp-2f, 0x1.5f50e2p-108f, 0.0f, 0x1.a738f6p-99f,
     0.0f, 0x1.c3ff72p-4f, 0x1.da9ffap-47f, 0x1.2ed776p-58f, 0.0f, 0x1.c751ap-24f,
     0.0f, 0x1.401ab8p-121f, 0x1.de77e6p-36f, 0x1.ee35c2p-123f, 0x1.53ad5ep-11f, 0.0f,
     0x1.b97986p-28f, 0x1.89ad24p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ddc05ap-94f, 0.0f, 0x1.09a9b4p-123f, 0x1.39c44ep-97f, 0.0f, 0x1.c13852p-98f,
     0.0f, 0.0f, 0.0f, 0x1.05b736p-123f, 0.0f, 0.0f, 0x1.3c629ep-71f,
     0x1.de17ccp-110f, 0.0f, 0x1.573a4p-79f, 0.0f, 0x1.7a3d74p-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.121e7p-8f, 0x1.6c2766p-79f, 0x1.031da6p-9f, 0x1.52acdcp-87f, 0.0f,
     0x1.4d5092p-80f, 0.0f, 0.0f, 0.0f, 0x1.435cd6p-48f, 0.0f, 0x1.de6212p-90f,
     0x1.348b98p-35f, 0.0f, 0.0f, 0x1.f513c4p-46f, 0x1.a0979p-97f, 0x1.471f7p-51f,
     0.0f, 0x1.0c4f92p-33f, 0x1.696024p-23f, 0x1.a42da6p-89f, 0x1.45ceb6p-28f, 0.0f,
     0.0f, 0x1.e10858p-85f, 0x1.53ee6ep-105f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.f807p-50f,
     0.0f, 0x1.851bccp-100f, 0.0f, 0.0f, 0.0f, 0x1.f2c8d6p-32f, 0x1.876e38p-93f,
     0x1.137468p-115f, 0.0f, 0.0f, 0.0f, 0x1.b70e42p-21f, 0x1.5440a8p-112f, 0.0f,
     0.0f, 0x1.19d46ep-4f, 0x1.d6de5p-5f, 0.0f, 0.0f, 0.0f, 0x1.e5d442p-29f, 0.0f,
     0.0f, 0x1.10b91cp-7f, 0x1.00c5d6p-56f, 0.0f, 0.0f, 0.0f, 0x1.a9e072p-19f, 0.0f,
     0.0f, 0x1.4155a2p-123f, 0.0f, 0.0f, 0.0f, 0x1.235ff2p-62f, 0.0f, 0.0f, 0.0f,
     0x1.d20bdep-45f, 0.0f, 0x1.c9b124p-80f, 0.0f, 0x1.ca0db8p-108f, 0x1.23fb3p-36f,
     0x1.41d296p-78f, 0x1.79fe86p-123f, 0x1.d8d08ap-79f, 0x1.321de4p-101f,
     0x1.0ab356p-6f, 0.0f, 0.0f, 0x1.87e146p-14f, 0x1.c0bd62p-11f, 0x1.e984fep-2f,
     0x1.b5c366p-120f, 0.0f, 0x1.8c7e24p-71f, 0.0f, 0x1.c623c8p-83f, 0x1.35cecap-102f,
     0.0f, 0x1.1fd2eap-38f, 0.0f, 0x1.42d7dcp-93f, 0.0f, 0x1.3c775cp-64f, 0.0f, 0.0f,
     0x1.f0e58ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.359a6ep-44f, 0.0f, 0.0f,
     0x1.df9d9ep-18f, 0x1.b090bap-40f, 0.0f, 0x1.235b58p-3f, 0x1.ca5ba2p-2f,
     0x1.e6d22ep-107f, 0.0f, 0x1.6f2086p-56f, 0.0f, 0x1.09f2a8p-50f, 0.0f, 0.0f,
     0x1.6c0be2p-37f, 0.0f, 0x1.38b53cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e037ap-107f, 0.0f, 0.0f, 0x1.b3afd6p-32f, 0x1.a648e2p-17f, 0.0f,
     0x1.6c0d96p-77f, 0x1.697b9ap-36f, 0.0f, 0x1.786964p-70f, 0x1.219292p-26f, 0.0f,
     0x1.9f951cp-94f, 0.0f, 0.0f, 0x1.ba07dep-16f, 0.0f, 0x1.1b65c6p-75f, 0.0f,
     0x1.4bd29cp-48f, 0x1.b940b8p-71f, 0.0f, 0x1.b3ef3ap-117f, 0.0f, 0x1.d12348p-13f,
     0x1.1b7ff2p-2f, 0x1.416772p-43f, 0.0f, 0x1.ed3c6cp-69f, 0x1.6c3872p-41f, 0.0f,
     0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_tanf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_tanf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_tanf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
