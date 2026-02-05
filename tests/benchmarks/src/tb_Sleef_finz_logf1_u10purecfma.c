/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf1_u10purecfma.c --function \
 *     Sleef_finz_logf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b2e5cp-109f, 0.0f, 0x1.bef924p-24f,
     0x1.6be0eep-70f, 0.0f, 0.0f, 0x1.bd6712p-4f, 0.0f, 0x1.844df6p-86f,
     0x1.4a64a6p-115f, 0x1.d2a9d2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b26c4cp-116f, 0x1.c41716p-101f, 0x1.74cb1p-84f, 0.0f, 0x1.77fce8p-40f,
     0x1.112b0cp-114f, 0x1.1b2c06p-74f, 0x1.796c18p-113f, 0.0f, 0.0f, 0.0f,
     0x1.dd8ea6p-7f, 0x1.833d2cp-48f, 0x1.252f1ep-20f, 0.0f, 0.0f, 0x1.10c8b4p-96f,
     0x1.ad7c08p-106f, 0.0f, 0x1.8e396p-65f, 0x1.0b7876p-108f, 0.0f, 0x1.8fe7ap-25f,
     0.0f, 0x1.dfef5cp-53f, 0.0f, 0.0f, 0x1.767b1ep-90f, 0x1.4927b8p-38f,
     0x1.92962p-77f, 0x1.b98c2p-107f, 0.0f, 0.0f, 0x1.10fcf6p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48a2ap-126f, 0x1.b4904ap-45f, 0.0f,
     0x1.03e356p-50f, 0.0f, 0x1.a8d508p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17fb3ap-38f, 0.0f, 0x1.ff6f4ap-85f, 0x1.eaf5e2p-14f, 0x1.6b8cf8p-19f, 0.0f,
     0.0f, 0.0f, 0x1.11428p-8f, 0.0f, 0.0f, 0x1.883dc6p-47f, 0.0f, 0.0f,
     0x1.3e3decp-21f, 0x1.f6f058p-31f, 0.0f, 0x1p0f, 0x1.682984p-34f, 0.0f, 0.0f,
     0x1.13ac12p-3f, 0x1.0b922ep-105f, 0.0f, 0x1.d4a586p-93f, 0.0f, 0x1.69056ap-80f,
     0.0f, 0.0f, 0.0f, 0x1.954fa4p-7f, 0.0f, 0x1.bff76cp-114f, 0.0f, 0x1.50d6fp-33f,
     0x1.88ca5cp-78f, 0.0f, 0x1.197d48p-63f, 0x1.8acc6ap-6f, 0.0f, 0x1.4f41f8p-87f,
     0.0f, 0x1.e4868p-51f, 0.0f, 0.0f, 0.0f, 0x1.966d1ap-62f, 0x1.1ebecep-118f,
     0x1.de7e1ap-41f, 0.0f, 0.0f, 0x1.b3d8fp-11f, 0x1.91e386p-112f, 0.0f,
     0x1.424d26p-22f, 0x1.82fc98p-56f, 0x1.cc4964p-5f, 0.0f, 0.0f, 0x1.6795cep-126f,
     0x1.46d752p-64f, 0x1.67fe98p-94f, 0.0f, 0.0f, 0x1.b2048ep-19f, 0x1.c03f4cp-3f,
     0.0f, 0.0f, 0x1.bad472p-27f, 0x1.e24f28p-118f, 0x1.a5adc8p-34f, 0.0f, 0.0f,
     0x1.10877ap-35f, 0.0f, 0x1.68b88p-57f, 0x1.a0d15cp-58f, 0.0f, 0.0f,
     0x1.d9732p-56f, 0.0f, 0x1.4e3c9cp-78f, 0.0f, 0.0f, 0x1.27db34p-70f,
     0x1.046916p-44f, 0x1.5cfe54p-60f, 0x1.217b82p-86f, 0x1.51f138p-99f,
     0x1.14a11cp-115f, 0.0f, 0.0f, 0x1.829798p-112f, 0.0f, 0x1.8f5bd2p-95f,
     0x1.682894p-16f, 0x1.d4eaeep-91f, 0.0f, 0.0f, 0x1.57703cp-71f, 0x1.64ec4ap-113f,
     0.0f, 0x1.f0e73cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6baa68p-42f, 0.0f,
     0x1.75ba48p-92f, 0x1.c68542p-74f, 0.0f, 0x1.b6f29ep-86f, 0x1.f67f4ap-14f,
     0x1.e6810ap-90f, 0x1.e7bafap-58f, 0x1.3a597ep-18f, 0.0f, 0.0f, 0x1.2106f2p-94f,
     0x1.3be956p-45f, 0x1.11025ap-47f, 0.0f, 0x1.784826p-13f, 0x1.45c6d6p-6f,
     0x1.3296cap-44f, 0.0f, 0x1.e98c94p-95f, 0.0f, 0x1.b3d1d2p-93f, 0.0f,
     0x1.5f3ccp-126f, 0.0f, 0x1.e987ecp-117f, 0.0f, 0.0f, 0x1.3d450cp-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f98e5cp-114f, 0.0f, 0.0f, 0x1.ca33aep-34f, 0.0f, 0x1.4c1e92p-72f,
     0x1.625728p-24f, 0x1.3d7f94p-56f, 0x1.1f9492p-106f, 0x1.abe382p-81f,
     0x1.34b228p-25f, 0x1.62d3cap-35f, 0.0f, 0x1.dc6944p-62f, 0.0f, 0.0f, 0.0f,
     0x1.0a8e6cp-105f, 0x1.ade1f6p-56f, 0x1.fd8b72p-97f, 0x1.e4171p-109f, 0.0f,
     0x1.e836dap-40f, 0.0f, 0.0f, 0x1.9d5458p-5f, 0x1.d4d30ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.8355d8p-101f, 0x1.981112p-91f, 0.0f, 0x1.85b53cp-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2b87fap-96f, 0.0f, 0.0f, 0.0f, 0x1.055b44p-82f, 0x1.b32ccp-26f, 0.0f,
     0.0f, 0x1.2ca4c2p-121f, 0x1.d04f96p-83f, 0x1.c4660ap-53f, 0x1.2680bcp-87f,
     0x1.dbc044p-9f, 0.0f, 0x1.6e8f26p-34f, 0.0f, 0x1.f6a008p-38f, 0x1.f51ebp-87f,
     0.0f, 0x1.1f835cp-34f, 0.0f, 0.0f, 0x1.0be636p-88f, 0.0f, 0.0f, 0x1.25d9c2p-123f,
     0.0f, 0x1.b7eef2p-75f, 0.0f, 0.0f, 0x1.82970ap-98f, 0.0f, 0.0f, 0.0f,
     0x1.ebc81ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fe956p-48f, 0.0f, 0x1.89507ep-37f,
     0.0f, 0x1.7bc728p-83f, 0.0f, 0x1.5e7216p-1f, 0.0f, 0.0f, 0.0f, 0x1.992054p-94f,
     0x1.4a845ep-95f, 0x1.12d732p-8f, 0x1.6a2cd2p-51f, 0x1.1eafe6p-12f,
     0x1.957708p-126f, 0x1.6323e8p-93f, 0x1.3f0abap-114f, 0.0f, 0.0f, 0x1.305efp-80f,
     0x1.c07948p-37f, 0.0f, 0x1.03905ep-97f, 0.0f, 0x1.af7d18p-32f, 0.0f,
     0x1.6027bap-72f, 0.0f, 0x1.3dcbbp-10f, 0x1.876bap-57f, 0.0f, 0x1.76891ep-104f,
     0x1.975fccp-64f, 0x1.761a2ap-12f, 0.0f, 0x1.ff768cp-92f, 0.0f, 0x1.be8a2cp-61f,
     0.0f, 0x1.884a4ep-46f, 0.0f, 0x1.992de8p-104f, 0x1.813db6p-122f, 0.0f, 0.0f,
     0.0f, 0x1.77c9d4p-18f, 0x1.a14b38p-10f, 0x1.1d96dp-125f, 0x1.0c6caep-9f,
     0x1.8d43fcp-11f, 0.0f, 0x1.2f66a6p-30f, 0x1.88822ep-13f, 0.0f, 0x1.178364p-13f,
     0x1.4c1a46p-64f, 0x1.0de3eap-20f, 0.0f, 0x1.cdea2ep-109f, 0x1.691986p-100f, 0.0f,
     0x1.3ae2fep-62f, 0x1.3b2e16p-71f, 0x1.898d88p-50f, 0.0f, 0x1.252b86p-4f, 0.0f,
     0x1.183e32p-64f, 0.0f, 0x1.c3519ep-60f, 0x1.4e62d8p-47f, 0.0f, 0.0f,
     0x1.bd028cp-14f, 0x1.a24e06p-105f, 0.0f, 0.0f, 0.0f, 0x1.583046p-115f,
     0x1.644a88p-11f, 0.0f, 0x1.694394p-72f, 0.0f, 0x1.e819bcp-37f, 0.0f,
     0x1.3c9aaap-48f, 0.0f, 0x1.9b8ebep-47f, 0.0f, 0x1p0f, 0x1.4d6fd4p-106f,
     0x1.d831c8p-59f, 0x1.0bded4p-75f, 0.0f, 0x1.ad037ap-8f, 0x1.9ee9a8p-88f,
     0x1.d68bbep-76f, 0.0f, 0x1.30dd48p-29f, 0x1.ea5d22p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.53ef14p-88f, 0x1.76f1dep-34f, 0.0f, 0.0f, 0x1.9bbc7cp-82f, 0.0f,
     0.0f, 0x1.4f7e38p-56f, 0.0f, 0x1.625074p-121f, 0x1.753002p-112f, 0.0f,
     0x1.6cc86p-121f, 0x1.555ff2p-102f, 0x1.612e58p-49f, 0.0f, 0x1.29d18ep-86f,
     0x1.a52c42p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96b1fep-29f, 0x1.edc352p-21f,
     0.0f, 0x1.a1e4fp-42f, 0x1.d91afcp-126f, 0x1.c9f4d2p-6f, 0.0f, 0.0f,
     0x1.e58cdcp-110f, 0x1.ad7036p-60f, 0x1.600adcp-61f, 0.0f, 0x1.d7e896p-86f,
     0x1.92600ap-22f, 0.0f, 0x1.52a31ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.020206p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b9b5p-73f, 0.0f, 0x1.bf1464p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e1fda2p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6cf34p-13f,
     0x1.ca312ep-38f, 0x1.b315cp-59f, 0.0f, 0x1.2e7cdap-5f, 0x1.e51582p-76f, 0.0f,
     0.0f, 0.0f, 0x1.58229p-80f, 0.0f, 0x1.2f0accp-38f, 0.0f, 0.0f, 0.0f,
     0x1.76141ap-41f, 0.0f, 0.0f, 0x1.42a08ap-87f, 0x1.0358dap-66f, 0.0f,
     0x1.4e44d2p-24f, 0.0f, 0.0f, 0x1.ada8ccp-7f, 0.0f, 0.0f, 0x1.33c532p-102f, 0.0f,
     0x1.5b01p-20f, 0.0f, 0x1.db9e3cp-64f, 0x1.3fe3a6p-54f, 0x1.68590ep-57f, 0.0f,
     0.0f, 0x1.1306a2p-109f, 0.0f, 0.0f, 0x1.26cfaep-40f, 0x1.5d046cp-82f,
     0x1.d7fd5ep-21f, 0x1.73b448p-57f, 0.0f, 0x1.415b86p-111f, 0.0f, 0x1.45fdcep-67f,
     0.0f, 0x1.5ee8f2p-29f, 0.0f, 0.0f, 0.0f, 0x1.e457eep-68f, 0x1.67a32p-44f,
     0x1.62ef3p-75f, 0.0f, 0x1.0fc472p-119f, 0x1.2120e8p-55f, 0.0f, 0x1.8b0f74p-96f,
     0.0f, 0.0f, 0x1.88bb9ap-10f, 0.0f, 0.0f, 0x1.65bfa8p-1f, 0x1.e3c4acp-39f,
     0x1.d8aecep-20f, 0x1.a452d8p-117f, 0.0f, 0x1.4cb8e2p-121f, 0.0f, 0x1.3abc4ap-23f,
     0x1.d49a2p-9f, 0.0f, 0x1.4c9268p-2f, 0.0f, 0x1.ecc486p-120f, 0.0f,
     0x1.c101aap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6a39ep-77f, 0x1.ce1534p-116f,
     0x1.f468a4p-114f, 0x1.24ef4cp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f2108p-103f, 0.0f, 0x1.96f9cep-55f, 0x1.741e94p-125f, 0x1.46e6a6p-53f, 0.0f,
     0x1.136616p-52f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.976eb4p-3f,
     0x1.33aac8p-77f, 0.0f, 0x1.488bc6p-120f, 0.0f, 0x1.9a8252p-20f, 0.0f,
     0x1.6140c8p-24f, 0.0f, 0x1.164292p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba6e8cp-104f, 0x1.a4c6a6p-126f, 0.0f, 0x1.f1e8bep-75f, 0x1.5fd674p-105f,
     0.0f, 0x1.10326p-89f, 0.0f, 0.0f, 0.0f, 0x1.d5597p-27f, 0.0f, 0.0f, 0.0f,
     0x1.f019ecp-57f, 0.0f, 0x1.4705eep-33f, 0x1.b39c76p-69f, 0.0f, 0x1.62acc6p-96f,
     0x1.188cf6p-14f, 0x1.035b98p-118f, 0.0f, 0x1.cbf1eep-16f, 0.0f, 0x1.bc40ccp-67f,
     0x1.0025aep-61f, 0.0f, 0x1.58b05ap-54f, 0.0f, 0x1.f65212p-72f, 0.0f, 0.0f, 0.0f,
     0x1.b47556p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56343ep-77f,
     0x1.a0f088p-72f, 0.0f, 0x1.7c0b68p-110f, 0.0f, 0x1.709a9ap-116f, 0x1.60270ep-64f,
     0.0f, 0.0f, 0x1.2f828p-8f, 0x1.2caec2p-27f, 0.0f, 0.0f, 0x1.2756e6p-115f,
     0x1.3ca75ap-11f, 0.0f, 0.0f, 0x1.da8016p-33f, 0x1.0f5378p-84f, 0.0f,
     0x1.d27d92p-65f, 0.0f, 0x1.bc8a56p-53f, 0.0f, 0x1.f36e1cp-114f, 0x1.9b6246p-123f,
     0x1.f2a968p-115f, 0.0f, 0x1.97d722p-10f, 0.0f, 0x1.a93614p-58f, 0x1.80d2d2p-119f,
     0x1.d9831ep-26f, 0.0f, 0.0f, 0x1.17f3ep-11f, 0.0f, 0x1.7d5146p-120f, 0.0f, 0.0f,
     0x1.bb49c8p-91f, 0.0f, 0.0f, 0x1.708aeap-104f, 0.0f, 0x1.508cacp-96f,
     0x1.735942p-16f, 0.0f, 0.0f, 0x1.578cfcp-88f, 0.0f, 0.0f, 0x1.d4d686p-54f,
     0x1.f2818ep-109f, 0.0f, 0.0f, 0x1.f9b1fep-115f, 0.0f, 0x1.2d0404p-42f,
     0x1.f2a802p-113f, 0x1.4d2c22p-80f, 0x1.3db2eep-37f, 0.0f, 0x1.c656acp-16f, 0.0f,
     0.0f, 0.0f, 0x1.7f9e56p-110f, 0.0f, 0x1.4854fcp-84f, 0x1.594914p-59f, 0.0f,
     0x1.5b765p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.156a6ep-38f,
     0x1.2a10bep-102f, 0x1.d9f0b8p-43f, 0x1.459fcep-60f, 0.0f, 0.0f, 0x1.eb829ap-18f,
     0x1.76b61ap-7f, 0.0f, 0x1.eebfe4p-106f, 0.0f, 0x1.c23bap-89f, 0x1.f62f48p-86f,
     0x1.e189dep-57f, 0.0f, 0x1.9aced4p-42f, 0.0f, 0.0f, 0.0f, 0x1.f5b9fap-65f,
     0x1.5072d2p-98f, 0x1.b8d648p-124f, 0.0f, 0.0f, 0x1.5d5404p-48f, 0x1.3eed1ep-70f,
     0.0f, 0.0f, 0x1.081b34p-21f, 0x1.aa59e4p-95f, 0x1.5997dap-38f, 0x1.37ea16p-36f,
     0.0f, 0.0f, 0.0f, 0x1.d1f58cp-14f, 0x1.bd690cp-60f, 0x1.265d46p-17f,
     0x1.3b6e1ep-45f, 0x1.a6b236p-70f, 0.0f, 0x1.da7b8p-20f, 0.0f, 0x1.e74254p-23f,
     0x1.16e1ap-108f, 0.0f, 0x1.a9eab2p-78f, 0.0f, 0x1.86bf18p-61f, 0x1.78c6fep-46f,
     0x1.fa6cc6p-41f, 0x1.dd146cp-36f, 0.0f, 0x1.dddf5ap-23f, 0.0f, 0x1.9ef748p-100f,
     0x1.b643ap-20f, 0x1.357b08p-66f, 0x1.2bc20ep-45f, 0x1.9ab5a4p-72f,
     0x1.3ef25cp-117f, 0x1.e30f7p-27f, 0.0f, 0x1.4db9eap-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.041688p-17f, 0x1.a1dda6p-80f, 0x1.199bf2p-117f, 0x1.e8bf72p-46f,
     0x1.c6bf72p-118f, 0.0f, 0x1.18f38ap-65f, 0x1.b028c8p-78f, 0x1.0673ap-114f,
     0x1.71bd1ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da3906p-60f, 0.0f, 0x1.f61a42p-91f,
     0x1.93613ap-50f, 0x1.48e15ep-86f, 0x1.52cf8ap-123f, 0x1.94e7e4p-125f,
     0x1.022694p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88c746p-75f,
     0.0f, 0x1.99901cp-108f, 0x1.962494p-116f, 0x1.22f07ep-10f, 0x1.867b36p-69f,
     0x1.2f8998p-96f, 0x1.1cc916p-71f, 0.0f, 0.0f, 0x1.f44164p-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f7f1f4p-16f, 0.0f, 0.0f, 0x1.819056p-70f, 0x1.52ab0ap-28f, 0.0f,
     0x1.77230ep-67f, 0.0f, 0.0f, 0x1.7e20a8p-103f, 0.0f, 0x1.7ed732p-91f, 0.0f, 0.0f,
     0.0f, 0x1.ba779cp-72f, 0.0f, 0x1.d44e16p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11a5acp-35f, 0x1.278568p-100f, 0.0f, 0.0f, 0x1.f4145p-45f, 0.0f, 0.0f,
     0x1.daf974p-56f, 0x1.746fd4p-16f, 0.0f, 0x1.1724aap-95f, 0.0f, 0.0f, 0.0f,
     0x1.56fa46p-93f, 0x1.9e462ep-58f, 0.0f, 0x1.a3420ep-101f, 0x1.c9b3e4p-105f,
     0x1.4de81ep-20f, 0x1.9fd3ap-50f, 0x1.2014c8p-9f, 0.0f, 0x1.335c02p-32f, 0.0f,
     0.0f, 0x1.7d0988p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ef692p-66f, 0.0f,
     0x1.eb8a5p-12f, 0.0f, 0x1.c412b4p-29f, 0.0f, 0x1.4c156p-97f, 0.0f, 0.0f,
     0x1.4d587ep-19f, 0x1.8f9944p-119f, 0x1.e32be2p-34f, 0.0f, 0.0f, 0x1.ca19d6p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c33314p-67f, 0.0f, 0.0f, 0x1.d0cb34p-47f,
     0x1.8ff9dap-55f, 0.0f, 0.0f, 0x1.90e5c6p-72f, 0x1.571ef6p-125f, 0.0f, 0.0f,
     0x1.83cb36p-15f, 0.0f, 0.0f, 0.0f, 0x1.5fe98ep-92f, 0x1.9f3cecp-65f,
     0x1.8c7018p-116f, 0x1.4ce8dcp-26f, 0.0f, 0.0f, 0x1.d6f81p-48f, 0.0f, 0.0f,
     0x1.41d81ap-9f, 0.0f, 0.0f, 0x1.d8af48p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8543c4p-40f, 0x1.7e6ab2p-64f, 0.0f, 0x1.dc5a66p-38f, 0x1.e15a86p-28f,
     0x1.8ae8dp-28f, 0.0f, 0.0f, 0.0f, 0x1.ea1ebap-101f, 0.0f, 0x1.80c5c2p-86f, 0.0f,
     0x1.0c484cp-57f, 0.0f, 0.0f, 0x1.ee00b6p-86f, 0x1.c4e144p-71f, 0.0f, 0.0f,
     0x1.a77b14p-46f, 0x1.d8e928p-108f, 0x1.72342p-30f, 0x1.03d93p-101f, 0.0f, 0.0f,
     0x1.edade4p-119f, 0x1.c7a16ep-96f, 0.0f, 0.0f, 0x1.13bcdcp-105f, 0.0f,
     0x1.c19f7ap-16f, 0.0f, 0.0f, 0x1.ec854cp-30f, 0x1.14a804p-93f, 0.0f, 0.0f, 0.0f,
     0x1.972d46p-13f, 0.0f, 0.0f, 0x1.bd3ee4p-113f, 0x1.1ae032p-124f, 0.0f,
     0x1.7294f8p-120f, 0.0f, 0x1.aea406p-125f, 0x1.72c1fep-77f, 0.0f, 0.0f,
     0x1.fda2a4p-103f, 0x1.86989ap-60f, 0x1.878298p-82f, 0.0f, 0.0f, 0x1.db870cp-124f,
     0.0f, 0.0f, 0x1.851adep-36f, 0.0f, 0.0f, 0.0f, 0x1.bde674p-73f, 0x1.f6780ap-50f,
     0x1.cdc2eep-97f, 0x1.0e3382p-108f, 0.0f, 0x1.c62c64p-57f, 0.0f
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
            tmp1 = Sleef_finz_logf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_logf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logf1_u10purecfma bench acc %a\n", global_bench_acc);
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
