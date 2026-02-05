/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf8_u35kvx.c --function Sleef_cbrtf8_u35kvx \
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
     0.0f, 0x1p0f, 0.0f, 0x1.68091ap-21f, 0x1.196428p-48f, 0x1.3a5a8p-119f, 0.0f,
     0.0f, 0x1.048c44p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2de8dp-26f, 0.0f, 0.0f,
     0x1.4a23a4p-21f, 0x1.e1e004p-59f, 0.0f, 0.0f, 0x1.430098p-8f, 0x1.98204ep-89f,
     0.0f, 0.0f, 0x1.63cbccp-25f, 0x1.ca398p-123f, 0.0f, 0.0f, 0.0f, 0x1.2f6108p-15f,
     0.0f, 0.0f, 0x1.d6502ep-18f, 0.0f, 0.0f, 0x1.8ac892p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c15f1p-29f, 0.0f, 0.0f, 0.0f, 0x1.af9c96p-27f, 0.0f, 0x1.bd97aap-77f,
     0x1.62b03cp-75f, 0x1.ed472ep-100f, 0.0f, 0x1.014d94p-62f, 0x1.233ebep-29f, 0.0f,
     0.0f, 0x1.1ac0fep-49f, 0x1.d33c1ep-119f, 0x1.a2b54cp-118f, 0x1.d43042p-13f,
     0x1.eab262p-18f, 0.0f, 0x1.868404p-85f, 0.0f, 0x1.787a42p-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.254e64p-27f, 0.0f, 0x1.e0358ep-87f, 0x1.0a898ep-123f, 0.0f, 0.0f,
     0x1.6b97d8p-68f, 0.0f, 0x1.f1c512p-19f, 0.0f, 0x1.b3e7f4p-91f, 0.0f, 0.0f,
     0x1.cf9d94p-10f, 0x1.fdc70ap-109f, 0x1.cbb11p-19f, 0.0f, 0x1.3dab18p-25f,
     0x1.ab4acp-50f, 0.0f, 0x1.602f06p-115f, 0x1.4f7e52p-22f, 0.0f, 0x1.24233ap-64f,
     0.0f, 0x1.4540e2p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.853c12p-46f, 0.0f,
     0x1.7e49f4p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2088fep-112f, 0x1.770b56p-30f,
     0.0f, 0.0f, 0x1.f8f28ap-103f, 0.0f, 0x1.d0362cp-14f, 0.0f, 0.0f, 0.0f,
     0x1.9f7ab8p-11f, 0x1.09b844p-119f, 0x1.d8aa06p-43f, 0.0f, 0x1.cce75p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8975bcp-73f, 0x1.ee3d14p-71f, 0.0f,
     0x1.d80cdcp-18f, 0x1.d237bep-70f, 0x1.e6d662p-4f, 0.0f, 0x1.7cbf9ap-122f, 0.0f,
     0.0f, 0x1.e1179ep-109f, 0x1.614e96p-101f, 0x1.e0e4p-92f, 0.0f, 0.0f,
     0x1.f9b392p-71f, 0.0f, 0x1.22f21ep-124f, 0.0f, 0.0f, 0.0f, 0x1.2e0bap-37f,
     0x1.fb05b6p-53f, 0.0f, 0x1.99121ep-48f, 0x1.48092ap-71f, 0.0f, 0x1.fd1dcep-118f,
     0x1.f7ec0cp-68f, 0x1.af95ccp-117f, 0x1.c1b8d8p-6f, 0.0f, 0x1.a7724cp-92f,
     0x1.69266p-19f, 0.0f, 0.0f, 0x1.592772p-64f, 0.0f, 0x1.208888p-5f, 0.0f,
     0x1.005858p-100f, 0x1.0c71b8p-27f, 0.0f, 0x1.36c088p-9f, 0x1.7af3eep-50f, 0.0f,
     0.0f, 0x1.27e144p-121f, 0x1.76c0eep-72f, 0.0f, 0.0f, 0x1.8fba0cp-18f,
     0x1.b360b4p-13f, 0x1.2e188ep-106f, 0x1.41e026p-95f, 0.0f, 0.0f, 0.0f,
     0x1.f03bap-73f, 0x1.bae41cp-42f, 0x1.ad2f6cp-123f, 0x1.40400cp-72f, 0.0f, 0.0f,
     0.0f, 0x1.48fb62p-93f, 0.0f, 0.0f, 0x1.3124f2p-66f, 0.0f, 0x1.2327a4p-60f, 0.0f,
     0.0f, 0x1.9346ap-1f, 0x1.3844f6p-114f, 0x1.620d6ep-42f, 0x1.b11afap-13f,
     0x1.2cde38p-91f, 0x1.4a62bap-90f, 0x1.983ec4p-12f, 0.0f, 0x1.4a438ep-71f,
     0x1.0c4d38p-62f, 0x1.8b728cp-63f, 0.0f, 0x1.d3a02ap-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.875a2p-116f, 0.0f, 0x1.e496bap-53f, 0.0f, 0.0f, 0.0f, 0x1.5ea52ep-75f,
     0x1.b11b92p-40f, 0x1.1e3078p-66f, 0.0f, 0x1.a35256p-56f, 0x1.123106p-74f, 0.0f,
     0.0f, 0x1.ab9046p-92f, 0x1.d45096p-116f, 0x1.a8f8dep-65f, 0x1.e11b1p-109f,
     0x1.41a72ap-93f, 0x1.997d8p-102f, 0x1.2ef0dp-121f, 0.0f, 0x1.9f09f8p-119f, 0.0f,
     0.0f, 0x1.173c86p-7f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9d50cp-15f, 0.0f, 0x1.848452p-105f, 0.0f, 0.0f, 0x1.a9836ap-75f,
     0x1.54f756p-42f, 0.0f, 0.0f, 0x1.95879p-42f, 0x1.7d47bp-27f, 0x1.5d9912p-76f,
     0.0f, 0.0f, 0x1.479ebcp-13f, 0x1.cae3e4p-21f, 0.0f, 0x1.28fcaep-109f, 0.0f,
     0x1.06cc6cp-124f, 0x1.c3e03ap-97f, 0x1.de1d8cp-41f, 0.0f, 0x1.ff8148p-28f,
     0x1.24502p-18f, 0.0f, 0.0f, 0x1.6c0cfap-32f, 0x1.829386p-17f, 0x1.970782p-46f,
     0.0f, 0.0f, 0.0f, 0x1.5ce652p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1a49cp-121f, 0.0f, 0x1.927bdap-22f, 0x1.6c8f56p-31f, 0x1.b2569p-26f,
     0x1.0de068p-107f, 0x1.bd85bp-66f, 0.0f, 0x1.7cf734p-104f, 0.0f, 0.0f,
     0x1.43508ep-54f, 0x1.7d099ep-84f, 0x1.e28c9cp-114f, 0.0f, 0.0f, 0x1.399602p-107f,
     0x1.4499b4p-13f, 0.0f, 0x1.457c46p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.786ce8p-13f, 0x1.f8bf4cp-35f, 0.0f, 0x1.10b034p-121f, 0x1.f6aabp-94f,
     0x1.5c9fe2p-112f, 0x1.567d72p-13f, 0.0f, 0.0f, 0x1.519796p-99f, 0.0f,
     0x1.de41ecp-119f, 0.0f, 0x1.dd1f06p-122f, 0.0f, 0x1.b38be6p-13f, 0.0f,
     0x1.d52cd2p-31f, 0x1.0488a8p-2f, 0x1.5af318p-67f, 0.0f, 0.0f, 0x1.3a5c3ap-66f,
     0x1.1301a6p-53f, 0.0f, 0x1.544296p-2f, 0x1.1df914p-76f, 0.0f, 0x1.960e1p-83f,
     0.0f, 0x1.ad3e58p-16f, 0x1.e42cf8p-114f, 0.0f, 0.0f, 0.0f, 0x1.ff1678p-122f,
     0.0f, 0x1.5468e2p-78f, 0x1.a46f54p-7f, 0x1.ed60a6p-94f, 0.0f, 0.0f,
     0x1.7f4b1ap-10f, 0.0f, 0x1.631c0cp-70f, 0x1.31326ap-16f, 0.0f, 0.0f,
     0x1.8c4d5p-59f, 0x1.5a1cc2p-64f, 0x1.d78f66p-76f, 0x1.7a557ep-115f,
     0x1.a1c7cap-107f, 0.0f, 0.0f, 0.0f, 0x1.162394p-43f, 0x1.34f6a8p-91f,
     0x1.bd9652p-18f, 0.0f, 0x1.a3fd7p-80f, 0.0f, 0.0f, 0.0f, 0x1.d3868p-53f, 0.0f,
     0x1.5f12c2p-85f, 0x1.df38c8p-94f, 0x1.30f3cp-14f, 0.0f, 0.0f, 0x1.7eeebcp-33f,
     0x1.a2bb14p-23f, 0x1.4a1e5ep-53f, 0.0f, 0.0f, 0x1.02c846p-3f, 0.0f, 0.0f,
     0x1.935d06p-95f, 0.0f, 0.0f, 0x1.420ff2p-88f, 0x1.85577ap-18f, 0x1.f2aad6p-122f,
     0.0f, 0.0f, 0x1.3eca66p-66f, 0x1.58654ap-9f, 0x1.93b8p-122f, 0x1p0f, 0.0f,
     0x1.953cc6p-125f, 0x1.17ccb4p-60f, 0.0f, 0.0f, 0.0f, 0x1.b954dap-98f,
     0x1.24ff38p-35f, 0x1.5ceef6p-12f, 0.0f, 0.0f, 0x1.13e04ap-5f, 0.0f,
     0x1.b58fe2p-86f, 0.0f, 0x1.8e5c1ep-29f, 0x1.a478dcp-106f, 0x1.7422e4p-102f, 0.0f,
     0x1.022a5ap-38f, 0x1.334f5ap-30f, 0x1.3b2034p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c91c32p-79f, 0x1.f2cb54p-92f, 0x1.64f89cp-116f, 0.0f, 0x1.036e4p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2bb47p-120f, 0x1.9cca68p-23f, 0x1.ee7566p-74f,
     0x1.c8a212p-69f, 0.0f, 0.0f, 0.0f, 0x1.164872p-43f, 0x1.66b91ap-25f,
     0x1.273746p-112f, 0x1.a5b7b6p-36f, 0.0f, 0.0f, 0x1.bab3f4p-19f, 0.0f,
     0x1.cff8c2p-3f, 0x1.cfa67ep-101f, 0.0f, 0.0f, 0x1.f54bfap-100f, 0x1.dd7612p-95f,
     0.0f, 0x1.dc69e8p-42f, 0x1.74fc94p-14f, 0x1.69416ep-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7a1d56p-119f, 0x1.81cd7ep-31f, 0x1.9b600cp-3f,
     0x1.378e84p-49f, 0.0f, 0x1.948bfep-31f, 0x1.f57526p-26f, 0x1.e94d5cp-100f,
     0x1.5d2db2p-42f, 0x1.b54964p-27f, 0x1.67b396p-37f, 0.0f, 0x1.c77812p-42f,
     0x1.d7a51p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5d5ecp-47f, 0.0f, 0x1p0f,
     0x1.025caep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6844fep-66f, 0x1.1618a8p-22f, 0.0f,
     0.0f, 0x1.bfde68p-42f, 0.0f, 0x1.26bbf2p-75f, 0.0f, 0x1.ab30eep-10f,
     0x1.0e1a46p-6f, 0x1.9278acp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1b914p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e1d26p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bf189ap-126f, 0x1.64fe4cp-84f, 0x1.a64244p-6f, 0.0f,
     0x1.11242p-125f, 0.0f, 0x1.766e7cp-117f, 0.0f, 0.0f, 0x1.ece0ap-18f,
     0x1.a91b8p-97f, 0.0f, 0.0f, 0x1.7e04aep-97f, 0x1.3845ep-49f, 0.0f,
     0x1.4fa3p-106f, 0x1.38ae2ep-111f, 0.0f, 0x1.3b6b9cp-1f, 0x1.c5fc1ap-84f, 0.0f,
     0x1.d2eap-17f, 0.0f, 0.0f, 0.0f, 0x1.6f782p-125f, 0x1.e12e0ap-43f, 0.0f, 0.0f,
     0x1.abefeep-59f, 0.0f, 0.0f, 0.0f, 0x1.1d828cp-81f, 0x1.680a3ep-58f, 0.0f,
     0x1.533634p-45f, 0.0f, 0.0f, 0x1.c3cffap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af51b4p-7f, 0x1.883098p-13f, 0.0f, 0.0f, 0x1.d5371cp-52f, 0x1.7d03bp-64f,
     0x1.5390b8p-80f, 0x1.40598p-54f, 0x1.bcde42p-88f, 0x1.a72572p-101f, 0.0f, 0.0f,
     0x1.8c6644p-80f, 0.0f, 0.0f, 0x1.74c31cp-118f, 0x1.f1991cp-60f, 0.0f,
     0x1.1c227ap-22f, 0.0f, 0.0f, 0.0f, 0x1.881404p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3260e6p-84f, 0x1.8ca57ap-13f, 0.0f, 0.0f, 0x1.9fc896p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba18a6p-64f, 0x1.d6014ep-58f, 0.0f, 0.0f, 0x1.82e208p-23f, 0.0f, 0.0f,
     0x1.e5d61cp-50f, 0.0f, 0x1.b29b2p-37f, 0.0f, 0.0f, 0x1.25e774p-9f, 0.0f,
     0x1.ddf1cap-39f, 0.0f, 0x1.05934cp-12f, 0.0f, 0x1.2b4e42p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6fbe4p-27f, 0.0f, 0x1.771ff6p-94f, 0.0f, 0.0f, 0.0f, 0x1.f023p-66f,
     0x1.ce6174p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a40b3ap-41f, 0x1.ef3aeap-73f,
     0x1.759d6ap-4f, 0.0f, 0.0f, 0.0f, 0x1.19f314p-32f, 0.0f, 0.0f, 0x1.d1ec44p-83f,
     0x1.82cd4p-77f, 0x1.479d78p-121f, 0.0f, 0.0f, 0x1.4eeeeap-68f, 0.0f, 0.0f,
     0x1.c4975cp-59f, 0x1.d261ecp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a970ep-31f,
     0.0f, 0.0f, 0.0f, 0x1.998428p-40f, 0x1.f5a28cp-1f, 0x1.6f4c82p-49f, 0.0f,
     0x1.4ff892p-92f, 0.0f, 0x1.9d0c72p-86f, 0x1.8d4cdep-14f, 0.0f, 0x1.655942p-107f,
     0.0f, 0.0f, 0.0f, 0x1.8e108ap-31f, 0x1p0f, 0x1.573c46p-123f, 0x1.cf96b4p-122f,
     0x1.ae8c5ep-44f, 0x1.12f4b4p-4f, 0x1.16b1ep-33f, 0.0f, 0x1.91ec96p-44f, 0.0f,
     0.0f, 0.0f, 0x1.dc265ap-81f, 0x1.42b774p-111f, 0x1.22574p-53f, 0x1.da054p-4f,
     0.0f, 0.0f, 0.0f, 0x1.137f76p-29f, 0x1.1b2a3cp-55f, 0x1.cf2414p-104f,
     0x1.fe4d7p-89f, 0x1.78011ep-79f, 0.0f, 0x1.c07b38p-16f, 0.0f, 0.0f, 0.0f,
     0x1.9d0ea4p-91f, 0.0f, 0x1.469932p-2f, 0x1.dd9d66p-85f, 0x1.8a314cp-53f,
     0x1.8529fp-67f, 0x1.2fc4f4p-123f, 0x1.14c828p-80f, 0.0f, 0x1.149f82p-33f, 0.0f,
     0x1.dc9e6ep-57f, 0x1.3630aep-31f, 0x1.0bccccp-124f, 0x1.9ca70ep-43f, 0.0f,
     0x1.71133p-8f, 0.0f, 0.0f, 0x1.7c24c6p-38f, 0.0f, 0.0f, 0x1.3e04bap-116f,
     0x1.fb620ep-115f, 0x1.2566f2p-94f, 0.0f, 0x1.11ed02p-1f, 0.0f, 0.0f, 0.0f,
     0x1.1ccdf4p-92f, 0.0f, 0.0f, 0x1.bfaaep-98f, 0.0f, 0x1.309b7ap-61f,
     0x1.f41b5ap-14f, 0.0f, 0x1.d64304p-119f, 0x1.9d411ap-26f, 0x1.84462ep-74f,
     0x1.108cdep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27671p-72f, 0.0f, 0x1p0f, 0.0f,
     0x1.2e4e2ep-50f, 0x1.844978p-67f, 0.0f, 0x1.cedac6p-125f, 0x1.cc830ep-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1cc59ap-76f, 0x1.5025a4p-110f, 0x1.cfc254p-83f,
     0x1.b79d32p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e6732p-45f, 0x1.56e488p-6f,
     0.0f, 0.0f, 0x1.725902p-28f, 0x1.30d14p-23f, 0x1.4926eap-50f, 0.0f,
     0x1.0e3f6ap-82f, 0x1.1751a6p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df6d1p-90f, 0x1.9a8e76p-59f, 0x1.183156p-106f, 0x1.40824ap-101f, 0.0f,
     0x1.2039b6p-9f, 0x1.d9082ap-6f, 0.0f, 0.0f, 0x1.1e790ap-72f, 0x1.b7d362p-40f,
     0.0f, 0x1.137da6p-51f, 0.0f, 0.0f, 0x1.74b168p-86f, 0.0f, 0.0f, 0x1.0767eep-114f,
     0.0f, 0x1.05a624p-110f, 0x1.be4f88p-7f, 0x1.8d39c6p-87f, 0.0f, 0.0f,
     0x1.d83802p-29f, 0x1.e4f70ep-79f, 0.0f, 0x1.d7590ep-97f, 0.0f, 0x1.c1ef3cp-37f,
     0.0f, 0x1.27d6ecp-37f, 0.0f, 0.0f, 0x1.a46234p-119f, 0.0f, 0.0f,
     0x1.535df2p-125f, 0x1.2655a2p-103f, 0.0f, 0x1.286d26p-26f, 0x1.f29554p-124f,
     0x1.110b42p-75f, 0x1.66eb68p-82f, 0.0f, 0x1.efc162p-82f, 0x1.08b97p-37f,
     0x1.1f4834p-21f, 0x1.e9fd06p-99f, 0x1.3be676p-111f, 0x1.05615cp-30f, 0.0f,
     0x1.713dfcp-29f, 0x1.30a266p-116f, 0x1p0f, 0.0f, 0x1.fbb2ccp-126f, 0.0f, 0.0f,
     0.0f, 0x1.e07ffcp-121f, 0.0f, 0.0f, 0.0f, 0x1.bfec5p-80f, 0x1.cc00bp-116f, 0.0f,
     0x1.069a78p-110f, 0.0f, 0x1.5ee706p-92f, 0x1.54d5eap-99f, 0.0f, 0.0f,
     0x1.0c661ap-79f, 0x1.75612ep-73f, 0x1.efcad6p-48f, 0x1.09f0f8p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b198c4p-103f, 0.0f, 0x1.d410b6p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc052cp-84f, 0x1.fcd618p-101f, 0x1.6d438cp-97f, 0x1.1930d6p-98f, 0.0f,
     0x1.d57302p-30f, 0.0f, 0x1.39749p-48f, 0x1.3f8a46p-122f, 0.0f, 0x1.3e3482p-83f,
     0x1.2ff994p-60f, 0.0f, 0.0f, 0x1.eb6738p-107f, 0x1.db91cap-15f, 0x1.26db98p-85f,
     0.0f, 0x1.4d7c8cp-124f, 0x1.3dd246p-71f, 0.0f, 0.0f, 0.0f, 0x1.ce92d8p-3f, 0.0f,
     0.0f, 0x1.bafe44p-100f, 0.0f, 0x1.3b813ap-95f, 0.0f, 0x1.84a25p-17f,
     0x1.e7fe4ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8405cp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4ab52p-82f, 0x1.412a94p-88f, 0.0f, 0x1.df475ap-89f, 0x1.fc93b8p-114f, 0.0f,
     0.0f, 0.0f, 0x1.95bf02p-58f, 0.0f, 0.0f, 0x1.b58fa4p-6f, 0x1.c9318p-97f,
     0x1.e6d5dep-75f, 0x1.3bbd7ep-72f, 0x1.17e8dap-38f, 0.0f, 0x1.1f2468p-103f, 0.0f,
     0x1.1b1d2ap-84f, 0.0f, 0.0f, 0x1.4da9ep-87f, 0.0f, 0x1.3533b8p-42f, 0.0f, 0.0f,
     0x1.b6fedep-123f, 0.0f, 0x1.f045b4p-116f, 0.0f, 0x1p0f, 0x1.5c6bccp-16f,
     0x1.8ec554p-18f, 0.0f, 0.0f, 0x1.3ed8aap-106f, 0.0f, 0.0f, 0x1.4ced74p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b1f9dp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.6c9b5cp-59f, 0.0f, 0x1.ca22f4p-14f, 0.0f, 0x1.3d4142p-9f, 0.0f,
     0x1.6f7578p-58f, 0x1.f2c542p-52f, 0.0f, 0.0f, 0.0f, 0x1.d586dep-2f,
     0x1.355caep-55f, 0.0f, 0.0f, 0.0f, 0x1.2d5ea4p-44f, 0x1.24e274p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_cbrtf8_u35kvx(tmp0);
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
    printf("Sleef_cbrtf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_cbrtf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
