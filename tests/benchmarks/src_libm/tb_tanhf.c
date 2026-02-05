/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_tanhf.c --function tanhf --headers math.h,ml_support_lib.h \
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
     0x1.429fa6p-88f, 0x1.7e675ap-29f, 0x1.41f9d2p-25f, 0x1.34bdb6p-61f,
     0x1.4840d8p-62f, 0x1.dec1ecp-78f, 0x1.36624ap-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06955p-7f, 0x1.246974p-110f, 0.0f, 0x1.0de87ap-39f, 0x1.c88e94p-22f, 0.0f,
     0.0f, 0x1.ae5ea2p-43f, 0.0f, 0x1.dffcfep-102f, 0.0f, 0.0f, 0x1.40347ap-7f, 0.0f,
     0x1.48140cp-27f, 0x1.cedb46p-39f, 0x1.c1fc18p-5f, 0.0f, 0.0f, 0x1.09e2b6p-3f,
     0x1.d14a92p-67f, 0.0f, 0x1.317124p-115f, 0x1.696f18p-54f, 0x1.cc3334p-61f,
     0x1.25161p-92f, 0x1.ef3db2p-106f, 0x1.d44ef8p-63f, 0.0f, 0x1.246068p-88f, 0.0f,
     0.0f, 0x1.82065cp-118f, 0x1.4f86ap-47f, 0.0f, 0x1.d32682p-82f, 0.0f,
     0x1.8dd9b6p-77f, 0x1.0b552cp-94f, 0.0f, 0.0f, 0x1.8e3a08p-37f, 0x1.f7c48p-71f,
     0.0f, 0x1.46b576p-114f, 0x1.9d5614p-86f, 0.0f, 0.0f, 0x1.c34966p-111f,
     0x1.614c92p-95f, 0x1.ae1c1p-27f, 0x1.716e5cp-97f, 0x1.4e7c6p-64f, 0.0f,
     0x1.fca21p-60f, 0x1.ef9d18p-10f, 0x1.c1b778p-31f, 0.0f, 0.0f, 0x1.3940fp-44f,
     0.0f, 0x1.95b656p-35f, 0x1.8220ecp-113f, 0x1.70e1f2p-84f, 0x1.edf262p-45f, 0.0f,
     0.0f, 0.0f, 0x1.a3036ep-97f, 0.0f, 0x1.aef2eap-39f, 0.0f, 0x1.0218acp-79f,
     0x1.bba604p-88f, 0x1.dcf846p-125f, 0x1.cbcdc6p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.13b62p-126f, 0x1.4791f6p-97f, 0.0f, 0.0f, 0.0f, 0x1.73b50ap-108f,
     0x1.16e3cp-113f, 0.0f, 0x1.6242d8p-111f, 0.0f, 0x1.e6e956p-82f, 0x1.66df52p-9f,
     0.0f, 0x1.53454p-25f, 0.0f, 0.0f, 0x1.7f8d48p-15f, 0x1.68d532p-11f, 0.0f,
     0x1.0b1df6p-47f, 0x1.b3df76p-72f, 0.0f, 0.0f, 0x1.a631p-123f, 0.0f, 0.0f, 0.0f,
     0x1.b1019p-14f, 0x1.361fe6p-107f, 0x1.e9208cp-116f, 0x1.b7cffep-71f, 0.0f,
     0x1.b95ce6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368e98p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9fcd6ap-118f, 0x1.0ffd1p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.331124p-8f, 0x1.93b00ap-5f, 0.0f, 0x1.faaa4p-110f, 0.0f, 0x1.525f8ap-98f,
     0x1.3e3f34p-74f, 0.0f, 0x1.406492p-74f, 0x1.057d94p-21f, 0.0f, 0x1.7b394ep-56f,
     0.0f, 0x1.01708ap-71f, 0x1.d9c6f2p-108f, 0x1.5182d2p-56f, 0.0f, 0x1.6dcb2p-58f,
     0x1.9853bp-65f, 0.0f, 0x1.9d81a8p-11f, 0.0f, 0x1.7d7e52p-122f, 0x1.b11b02p-16f,
     0.0f, 0.0f, 0.0f, 0x1.f8c9fcp-56f, 0x1.3e5756p-23f, 0.0f, 0x1.48721ap-26f, 0.0f,
     0.0f, 0.0f, 0x1.05161ep-15f, 0x1.3cb9a2p-97f, 0x1.4a1c48p-53f, 0.0f, 0.0f,
     0x1.ff56e8p-109f, 0.0f, 0x1.7721e6p-65f, 0x1.a20884p-6f, 0.0f, 0x1.40cd6p-18f,
     0.0f, 0x1.f8cedp-117f, 0.0f, 0.0f, 0.0f, 0x1.f8f408p-124f, 0x1.ddb19ap-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fa5dd8p-83f, 0x1.04b7eep-53f, 0x1.35dcp-1f, 0.0f, 0.0f,
     0.0f, 0x1.1e74a2p-88f, 0.0f, 0x1.d3a6b4p-73f, 0.0f, 0x1.db40dp-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.095754p-39f, 0.0f, 0x1.ff224p-7f, 0x1.412e76p-67f, 0.0f,
     0.0f, 0x1.ab6012p-27f, 0.0f, 0x1.b0c19cp-94f, 0x1.eeccb2p-21f, 0.0f,
     0x1.494e4cp-32f, 0.0f, 0.0f, 0x1.7151c6p-87f, 0x1.70f374p-77f, 0x1.b0e0eep-73f,
     0.0f, 0x1.be9d5p-103f, 0.0f, 0x1.4948f8p-78f, 0.0f, 0.0f, 0.0f, 0x1.4bb5cep-18f,
     0.0f, 0.0f, 0.0f, 0x1.500bc6p-69f, 0x1.11578ap-55f, 0.0f, 0.0f, 0x1.54c722p-25f,
     0.0f, 0x1.4b9efcp-111f, 0x1.6d46d4p-110f, 0.0f, 0x1.7b7246p-33f, 0x1.a6ce68p-52f,
     0.0f, 0.0f, 0x1.d0dd8cp-82f, 0x1.44e61p-33f, 0.0f, 0x1.e7cd84p-52f, 0.0f, 0.0f,
     0.0f, 0x1.6fcfdcp-67f, 0x1.7f75b4p-83f, 0x1.3d4876p-56f, 0.0f, 0.0f, 0.0f,
     0x1.5dc8b6p-18f, 0.0f, 0x1.f31f46p-103f, 0x1.258074p-118f, 0x1.d0dcf8p-74f,
     0x1.ec59ap-93f, 0.0f, 0x1.5d643p-48f, 0x1.898eacp-64f, 0x1.3150a6p-32f,
     0x1.d2b49ep-9f, 0x1.0384e6p-97f, 0.0f, 0.0f, 0x1.249a4cp-21f, 0.0f,
     0x1.a76fcp-120f, 0x1.a97f6ep-97f, 0.0f, 0.0f, 0.0f, 0x1.fae24p-86f, 0.0f, 0.0f,
     0.0f, 0x1.f34d7p-40f, 0x1p0f, 0x1.26e76p-81f, 0.0f, 0x1.fb0da8p-24f, 0.0f,
     0x1.195b42p-38f, 0.0f, 0x1p0f, 0x1.92575p-52f, 0x1.4a73e2p-60f, 0.0f, 0.0f, 0.0f,
     0x1.7d205p-46f, 0.0f, 0x1.aac3fap-79f, 0x1.723f3ap-87f, 0.0f, 0.0f, 0.0f,
     0x1.227b4ep-104f, 0.0f, 0x1.eb38f8p-121f, 0x1.51c222p-62f, 0.0f, 0x1.0a59dep-84f,
     0.0f, 0x1.b6b8cap-113f, 0x1.5ed74ap-47f, 0.0f, 0.0f, 0.0f, 0x1.b51058p-117f,
     0.0f, 0.0f, 0.0f, 0x1.777966p-44f, 0.0f, 0.0f, 0x1.814ac4p-100f, 0x1.be4472p-80f,
     0.0f, 0.0f, 0x1.f17b3ep-76f, 0.0f, 0x1.23e91ap-92f, 0x1.a128fp-126f, 0.0f,
     0x1.5449d6p-37f, 0.0f, 0.0f, 0x1.839112p-27f, 0x1.8e23b6p-66f, 0.0f, 0.0f, 0.0f,
     0x1.e9c73ep-98f, 0x1.97a584p-27f, 0.0f, 0x1.43a4fcp-40f, 0.0f, 0x1.f08d9cp-8f,
     0.0f, 0x1.4c0c38p-59f, 0.0f, 0x1.3f7bfcp-50f, 0.0f, 0.0f, 0.0f, 0x1.14228p-49f,
     0.0f, 0x1.e34712p-119f, 0x1.986ffap-57f, 0x1.29a60ap-30f, 0.0f, 0.0f,
     0x1.f166ep-99f, 0.0f, 0x1.c93e48p-89f, 0.0f, 0.0f, 0.0f, 0x1.8c2f9ep-116f,
     0x1.1ca4a4p-29f, 0x1.24a64ep-38f, 0.0f, 0x1.dca672p-44f, 0x1.eb233ep-121f, 0.0f,
     0.0f, 0x1.8f9bb2p-90f, 0.0f, 0x1.83fbecp-48f, 0.0f, 0.0f, 0.0f, 0x1.8fbb8ep-78f,
     0x1.44f27ap-35f, 0x1.db1f7ep-15f, 0x1.a3d7cep-64f, 0x1.7a4e48p-6f, 0.0f,
     0x1.6ea914p-64f, 0.0f, 0.0f, 0x1.52408cp-123f, 0.0f, 0x1.867c2ep-31f,
     0x1.21eb48p-123f, 0x1.3693eap-125f, 0.0f, 0.0f, 0.0f, 0x1.53cfbp-119f,
     0x1.916644p-28f, 0x1.55f904p-37f, 0.0f, 0x1.2e759p-48f, 0x1.f5ed2ap-40f,
     0x1.f616b4p-102f, 0x1.f2d698p-13f, 0x1.d9b62ep-24f, 0.0f, 0.0f, 0x1.e3b5b4p-33f,
     0x1.be6e6ep-105f, 0.0f, 0.0f, 0x1.b81b88p-55f, 0x1.ffa646p-98f, 0x1.6f9e62p-89f,
     0x1.55a7ecp-68f, 0x1.332728p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7901ep-5f, 0x1.9f35dp-89f, 0x1.b4ade2p-51f, 0.0f, 0x1.58c84p-34f, 0.0f,
     0x1.aeb10ep-75f, 0.0f, 0.0f, 0x1.e1b78cp-47f, 0.0f, 0x1.e61408p-51f,
     0x1.e353cp-69f, 0.0f, 0.0f, 0.0f, 0x1.c14a7p-61f, 0x1.235f48p-58f, 0.0f,
     0x1.a16fc4p-69f, 0.0f, 0.0f, 0.0f, 0x1.132c02p-109f, 0.0f, 0.0f, 0x1.f26d1ep-57f,
     0x1.79b9f6p-113f, 0x1.5831bcp-60f, 0.0f, 0x1.82875p-28f, 0x1.f9810cp-35f, 0.0f,
     0x1.c6decp-124f, 0.0f, 0.0f, 0.0f, 0x1.7884e2p-54f, 0x1.d3c67ap-51f,
     0x1.9d972p-40f, 0x1.c95496p-111f, 0x1.e03edap-23f, 0x1.1a813ep-60f,
     0x1.b59cb4p-28f, 0.0f, 0x1.8dde76p-32f, 0x1.c631cap-50f, 0.0f, 0x1.341334p-102f,
     0x1.66fa9ep-27f, 0.0f, 0.0f, 0.0f, 0x1.eb41e2p-94f, 0x1.22bc0ep-99f, 0.0f,
     0x1.41d22ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4eea2p-93f,
     0.0f, 0.0f, 0x1.efc7d4p-37f, 0.0f, 0x1.c39ca8p-54f, 0.0f, 0.0f, 0x1.cf52fep-32f,
     0x1.6524e6p-3f, 0x1.9263c6p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7b01cp-75f, 0.0f, 0.0f, 0.0f, 0x1.a0a4b6p-116f, 0x1.795928p-114f,
     0x1.68653p-3f, 0.0f, 0.0f, 0x1.6ca246p-48f, 0x1.ff231ep-99f, 0x1.2b7cb2p-84f,
     0x1.2cf18p-29f, 0.0f, 0.0f, 0.0f, 0x1.bceff4p-35f, 0.0f, 0x1.60006p-41f, 0.0f,
     0x1.74cp-113f, 0x1.6038e8p-72f, 0x1.9cbff8p-76f, 0.0f, 0x1.5e791ep-36f,
     0x1.56857cp-23f, 0.0f, 0.0f, 0x1.c1ff94p-11f, 0.0f, 0x1.c29494p-118f,
     0x1.5254acp-40f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78eaap-57f,
     0x1.f9ba64p-80f, 0x1.cbc1aap-119f, 0x1.f65ad8p-85f, 0x1.e0dcb4p-11f,
     0x1.681c42p-66f, 0.0f, 0.0f, 0x1.582f5ep-33f, 0.0f, 0.0f, 0.0f, 0x1.db4f5cp-118f,
     0.0f, 0x1.e2d30cp-109f, 0x1.106b74p-38f, 0x1.bb0a9p-71f, 0x1.8fb2cap-96f,
     0x1.eafd5ep-6f, 0x1.3f91fap-10f, 0x1.29462ap-70f, 0x1.8a9b7ap-59f,
     0x1.5f48a4p-97f, 0.0f, 0.0f, 0x1.378deep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ff7f3cp-41f, 0x1.0d5a9ap-1f, 0x1.3e7abap-93f, 0x1.c39422p-96f,
     0x1.094432p-90f, 0.0f, 0x1.5bfd88p-75f, 0.0f, 0.0f, 0.0f, 0x1.1afa5cp-60f, 0.0f,
     0x1.0a118ap-71f, 0.0f, 0x1.35606p-29f, 0.0f, 0x1.6c2854p-6f, 0.0f, 0.0f, 0.0f,
     0x1.6efbbp-67f, 0x1.a60058p-122f, 0x1.c8d0b4p-89f, 0.0f, 0x1.f43bf2p-47f, 0.0f,
     0x1.89ec98p-30f, 0x1.8eac98p-102f, 0.0f, 0x1.9246d8p-107f, 0.0f, 0x1.1f6602p-52f,
     0x1.ba1204p-95f, 0.0f, 0.0f, 0x1.cef25cp-28f, 0.0f, 0x1.4c2efep-33f, 0.0f, 0.0f,
     0.0f, 0x1.567062p-29f, 0x1.8e53d2p-41f, 0x1.af9ecep-101f, 0x1.194d0ep-95f,
     0x1.bf8d32p-39f, 0.0f, 0x1.6a63c6p-43f, 0x1.1af0dep-67f, 0.0f, 0x1.6e9a9p-68f,
     0.0f, 0x1.4c1732p-30f, 0.0f, 0.0f, 0x1.13c47cp-103f, 0x1.8b637ep-116f,
     0x1.040cf2p-36f, 0x1.b8fb2ep-125f, 0x1.b90d42p-55f, 0x1.4f59fp-46f,
     0x1.7e3c5ap-85f, 0.0f, 0.0f, 0x1.e72be4p-121f, 0.0f, 0x1.90de2cp-101f, 0.0f,
     0x1.474e22p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.459d84p-31f, 0.0f, 0.0f,
     0x1.04b68p-11f, 0x1.3d05d6p-17f, 0x1.05483p-74f, 0.0f, 0x1.949dd2p-10f,
     0x1.64b666p-81f, 0.0f, 0x1.9dbbd6p-93f, 0x1.71c11cp-105f, 0x1.46db6p-67f, 0.0f,
     0x1.16c2dap-117f, 0x1.d5baf2p-107f, 0x1.687p-29f, 0.0f, 0x1.d04e9ap-55f, 0.0f,
     0.0f, 0x1.e4f504p-120f, 0x1.6ca1f8p-123f, 0.0f, 0x1.20e4a6p-111f, 0.0f, 0.0f,
     0.0f, 0x1.3899dp-33f, 0x1.288a26p-45f, 0.0f, 0.0f, 0.0f, 0x1.8cdf5ap-88f,
     0x1.356c72p-120f, 0.0f, 0x1.67149p-121f, 0.0f, 0.0f, 0.0f, 0x1.d664e6p-92f, 0.0f,
     0.0f, 0x1.f08454p-80f, 0x1.d79f02p-84f, 0x1.d594f6p-86f, 0.0f, 0x1.d4ec44p-12f,
     0.0f, 0x1.85d3b8p-121f, 0x1.84694p-119f, 0x1.e17e82p-124f, 0.0f, 0x1.48e098p-10f,
     0.0f, 0.0f, 0.0f, 0x1.16d28p-76f, 0x1.ab19b8p-126f, 0x1.fc8fb6p-20f,
     0x1.e1445p-120f, 0.0f, 0.0f, 0x1.b9215cp-51f, 0x1.52f71ap-115f, 0x1.8e4f72p-116f,
     0.0f, 0.0f, 0x1.232fdp-94f, 0.0f, 0x1.4c6786p-4f, 0.0f, 0.0f, 0x1.332eeap-65f,
     0.0f, 0.0f, 0x1.04e578p-90f, 0x1.2b058cp-88f, 0.0f, 0x1.e27eeap-7f, 0.0f, 0.0f,
     0x1.06c32ap-22f, 0.0f, 0.0f, 0x1.4755c8p-58f, 0.0f, 0x1.67e16ep-100f, 0.0f,
     0x1.87f2d2p-60f, 0x1.edc58ap-11f, 0x1.9c660ap-108f, 0x1.62a6f6p-125f, 0.0f, 0.0f,
     0x1.f8084p-55f, 0x1.7729c8p-110f, 0x1.46a8c4p-68f, 0.0f, 0x1.c7d64p-4f, 0.0f,
     0x1.3a4918p-100f, 0x1.5730acp-18f, 0.0f, 0x1.f9fcbep-118f, 0x1.0d74e2p-73f,
     0x1.3a8fa8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.894a5cp-100f, 0x1.655ddap-111f,
     0x1.06d5b2p-62f, 0.0f, 0.0f, 0.0f, 0x1.78a122p-43f, 0x1.de4c6p-50f,
     0x1.da7b46p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a0764p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d8942ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.78bf9cp-38f, 0x1.98d02ep-63f, 0.0f, 0.0f, 0x1.61578ap-55f, 0.0f,
     0x1.61fa28p-98f, 0x1.d3d1dcp-72f, 0.0f, 0x1.7abb26p-23f, 0x1.755156p-100f, 0.0f,
     0x1.a1908cp-60f, 0x1.79365ep-29f, 0.0f, 0.0f, 0x1.45f39ap-35f, 0.0f,
     0x1.fccf58p-4f, 0.0f, 0.0f, 0x1.de6968p-41f, 0x1.cfc076p-29f, 0x1.a06c3cp-41f,
     0x1.5f831ap-122f, 0x1.eb6bap-64f, 0x1.03ea1ep-43f, 0x1.5782eep-30f,
     0x1.e1a0a4p-10f, 0x1.ba50c4p-17f, 0x1.fa1778p-114f, 0.0f, 0x1.c244f2p-27f, 0.0f,
     0x1.6b9d76p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4728ap-95f, 0.0f,
     0x1.c1997p-54f, 0x1.20e054p-52f, 0x1.839a1ep-85f, 0x1.d5bbaap-126f, 0.0f, 0.0f,
     0x1.d9deb6p-111f, 0x1.b6de0ap-95f, 0x1.a8807p-24f, 0x1.c2d22ep-33f,
     0x1.70d67p-7f, 0x1.4f7b4cp-118f, 0x1.2584d6p-53f, 0.0f, 0.0f, 0x1.603b7p-8f,
     0x1.6d0976p-22f, 0x1.525fdp-109f, 0x1.7ec11p-21f, 0.0f, 0x1.16405ep-109f,
     0x1.42a7b6p-8f, 0.0f, 0.0f, 0x1.95011ep-69f, 0x1.a01dc2p-102f, 0.0f, 0.0f,
     0x1.3841e4p-64f, 0x1.9928fep-96f, 0x1.4dbc3ep-31f, 0.0f, 0x1.8d1e08p-100f,
     0x1.42b228p-3f, 0.0f, 0x1.e8842cp-2f, 0x1.e58888p-86f, 0.0f, 0x1.7f52cp-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.000114p-35f, 0x1.30ce34p-87f, 0x1.8ed15cp-50f,
     0x1.1d5056p-32f, 0.0f, 0x1.278716p-55f, 0.0f, 0.0f, 0.0f, 0x1.6f715p-109f,
     0x1.7051ep-57f, 0.0f, 0.0f, 0x1.27c4e6p-25f, 0x1.95a51ep-75f, 0x1.afaaa8p-117f,
     0x1.555728p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f129dap-94f, 0.0f, 0.0f, 0.0f,
     0x1.e3b1e2p-117f, 0.0f, 0x1.985f76p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.655a9ep-62f,
     0x1.0f215ep-97f, 0.0f, 0.0f, 0x1.bb994ep-55f, 0.0f, 0x1.6f7a56p-121f,
     0x1.3b8ba4p-28f, 0.0f, 0x1.8c2352p-50f, 0.0f, 0.0f, 0x1.a994dap-26f, 0.0f,
     0x1.5668a8p-36f, 0x1.c3c628p-31f, 0.0f, 0x1.33efe6p-95f, 0x1.24e354p-89f,
     0x1.4bcae8p-67f, 0.0f, 0.0f, 0.0f, 0x1.64765ep-17f, 0.0f, 0.0f, 0.0f,
     0x1.7972a4p-123f, 0x1.565d8cp-109f, 0x1.1b266cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.eaee58p-26f, 0x1.05850ap-113f, 0x1.b3e978p-75f, 0x1.a5fa28p-113f,
     0x1.aec5ecp-43f, 0x1.a89ba4p-87f, 0x1.e5d4d4p-16f, 0x1.1f8e6ep-66f,
     0x1.9fe9fap-42f, 0.0f, 0x1.b982c6p-76f, 0.0f, 0x1.7e4d36p-95f, 0x1.8c907p-105f,
     0x1.6c816p-117f, 0x1.64a9fap-56f, 0.0f, 0x1.2b2074p-81f, 0.0f, 0x1.cf7406p-52f,
     0.0f, 0x1.43dc22p-111f, 0x1.f041a2p-121f, 0x1.658e02p-15f, 0.0f, 0.0f, 0.0f,
     0x1.1fa264p-70f, 0x1.413436p-23f, 0x1.2d1f54p-97f, 0x1.1f3088p-31f,
     0x1.f395a6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.154974p-106f, 0x1.9b520ep-45f,
     0x1.232bd6p-124f, 0x1.606ad8p-86f, 0.0f, 0x1.16e598p-84f, 0.0f, 0.0f,
     0x1.386eb2p-110f, 0x1.e215eep-124f, 0.0f, 0.0f
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
            tmp1 = tanhf(tmp0);
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
    printf("tanhf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("tanhf bench acc %a\n", global_bench_acc);
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
