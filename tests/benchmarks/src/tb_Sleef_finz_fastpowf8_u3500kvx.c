/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastpowf8_u3500kvx.c --function \
 *     Sleef_finz_fastpowf8_u3500kvx --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0.0f, 0x1.57d97ap-3f, 0x1.2346cep-117f, 0x1.4a68p-99f, 0.0f, 0.0f, 0.0f,
     0x1.ec42c6p-99f, 0.0f, 0.0f, 0x1.b45e54p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8dcd0cp-99f, 0x1.02ad92p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8895ep-103f,
     0x1.207b1ap-114f, 0.0f, 0x1.60ede2p-103f, 0.0f, 0x1.aade58p-87f, 0.0f, 0.0f,
     0.0f, 0x1.1e2656p-10f, 0.0f, 0.0f, 0x1.55dd9p-46f, 0x1.d82b2cp-60f, 0.0f, 0.0f,
     0.0f, 0x1.108cb6p-42f, 0.0f, 0.0f, 0.0f, 0x1.c7f904p-74f, 0x1.d28c8p-57f,
     0x1.9af89p-84f, 0.0f, 0x1.ea9ec8p-88f, 0x1.6bc45p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5fcd8p-103f, 0x1.e9ae54p-13f, 0x1.0dcf4ep-42f, 0x1.6304d4p-27f,
     0x1.debc7ep-114f, 0.0f, 0x1.e7597ep-104f, 0x1.8226ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.631f12p-68f, 0x1.c09c74p-49f, 0x1.620e4cp-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d71a0ap-92f, 0.0f, 0.0f, 0x1.9f4a3ep-75f, 0.0f, 0x1.f4e85p-20f, 0.0f, 0.0f,
     0x1.4e3ae4p-119f, 0.0f, 0x1.c1f52ap-82f, 0x1.780432p-60f, 0x1.d25e5p-39f, 0.0f,
     0x1.1aff24p-122f, 0.0f, 0.0f, 0.0f, 0x1.ba3f9ep-71f, 0.0f, 0.0f, 0x1.8d2d22p-39f,
     0.0f, 0.0f, 0.0f, 0x1.f8fed2p-76f, 0x1.1ec2dap-101f, 0.0f, 0x1.5f0b2cp-2f, 0.0f,
     0x1.6f6b9ap-101f, 0.0f, 0x1.371718p-113f, 0x1.56c1p-39f, 0.0f, 0x1.2c737cp-95f,
     0.0f, 0.0f, 0.0f, 0x1.99523ap-117f, 0.0f, 0.0f, 0.0f, 0x1.4a087p-26f, 0.0f,
     0x1.9269f2p-50f, 0x1.6c37b8p-106f, 0x1.a250c6p-100f, 0.0f, 0.0f, 0.0f,
     0x1.93c028p-74f, 0x1.47382ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.805dep-101f, 0.0f, 0x1.ba0766p-114f, 0x1.05a578p-59f, 0x1.d4f6b4p-43f,
     0x1.dae402p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b95dep-71f, 0x1.2bcf9ep-119f,
     0x1.f016b4p-54f, 0.0f, 0x1.ed9566p-1f, 0.0f, 0x1.57784ep-39f, 0x1.41918ap-86f,
     0.0f, 0.0f, 0.0f, 0x1.45c87ap-76f, 0x1.bba3a2p-107f, 0x1.61ba96p-4f,
     0x1.d59e8p-42f, 0x1.b9497cp-122f, 0x1.c87cd8p-32f, 0x1.c20d52p-37f,
     0x1.090ec4p-64f, 0.0f, 0.0f, 0x1.43b7a4p-63f, 0.0f, 0x1.c0a554p-50f, 0.0f,
     0x1.c79ccap-42f, 0.0f, 0x1.e22fe8p-72f, 0x1.33430cp-125f, 0.0f, 0x1.3ca8aep-19f,
     0x1.acb04p-85f, 0x1.06eb08p-22f, 0x1.b982e8p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.056724p-80f, 0x1.cb233ep-68f, 0x1.e32fb4p-87f, 0x1.52013ap-12f, 0.0f,
     0x1.e947fap-74f, 0.0f, 0x1.db054ap-2f, 0x1.60cc04p-61f, 0.0f, 0x1.96d81ap-125f,
     0x1.e16ee8p-11f, 0x1.c384d2p-81f, 0x1.1d3754p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.253adap-11f, 0.0f, 0.0f, 0.0f, 0x1.b57facp-32f, 0x1.f9bb2ap-19f,
     0x1.f4011ap-35f, 0.0f, 0x1.ee737cp-70f, 0.0f, 0x1.57e15ep-3f, 0.0f, 0.0f,
     0x1.3e81d6p-94f, 0x1.e30554p-116f, 0x1.5b3196p-99f, 0x1.3dad3p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.385c18p-35f, 0.0f, 0x1.5954fcp-67f, 0.0f, 0x1.a5310ep-86f,
     0.0f, 0x1.1ce2b8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.571072p-38f, 0.0f,
     0x1.0f0776p-5f, 0.0f, 0.0f, 0x1.e46556p-18f, 0.0f, 0.0f, 0x1.5cbc1ap-17f, 0.0f,
     0.0f, 0x1.bf65dep-50f, 0x1.97f728p-70f, 0.0f, 0x1.6cdc5cp-103f, 0.0f,
     0x1.cbb6cep-37f, 0.0f, 0.0f, 0x1.95f4ecp-51f, 0x1.025b94p-58f, 0.0f, 0.0f,
     0x1.1e7332p-113f, 0x1.b1c372p-31f, 0.0f, 0.0f, 0.0f, 0x1.8c84f6p-108f, 0.0f,
     0x1.62741ep-43f, 0.0f, 0.0f, 0x1.df70d4p-93f, 0x1.c81aacp-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bc6bcp-109f, 0.0f, 0.0f, 0x1.0f5afp-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ad1204p-110f, 0x1.74412cp-116f, 0.0f, 0.0f, 0x1.d6b74p-67f, 0.0f,
     0x1.b55424p-101f, 0x1.de93c6p-96f, 0x1.1bd5c2p-13f, 0x1.acdb04p-92f,
     0x1.5573dp-54f, 0x1.7ddb4ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d99b66p-88f,
     0x1.e1a324p-76f, 0x1.864538p-106f, 0.0f, 0.0f, 0x1.e8eadap-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f2e092p-97f, 0.0f, 0.0f, 0.0f, 0x1.8c42eap-14f, 0.0f,
     0x1.ae760ep-116f, 0.0f, 0x1.e4087ep-57f, 0x1.0764d6p-35f, 0.0f, 0x1.58671ap-45f,
     0x1.0c03f4p-116f, 0x1.d7b61ep-90f, 0.0f, 0.0f, 0x1.c304p-81f, 0.0f,
     0x1.932a22p-13f, 0x1.803598p-35f, 0.0f, 0x1.1bf29ap-71f, 0x1.fc7002p-103f,
     0x1.2099acp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9582ep-3f, 0x1.579b4ep-119f, 0.0f,
     0x1.0df766p-108f, 0.0f, 0.0f, 0.0f, 0x1.a80598p-81f, 0.0f, 0x1.3028a4p-26f, 0.0f,
     0x1.a580e8p-33f, 0.0f, 0x1.e2407cp-110f, 0.0f, 0x1.e217fap-51f, 0x1.b5b562p-22f,
     0.0f, 0.0f, 0x1.7fe43p-9f, 0.0f, 0.0f, 0x1.ba00cap-112f, 0.0f, 0x1.53634cp-47f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37e4eep-122f, 0.0f, 0.0f, 0.0f,
     0x1.84303ep-37f, 0.0f, 0x1.e877d2p-50f, 0x1.345f54p-122f, 0x1.802c62p-35f,
     0x1.900abcp-124f, 0x1.874936p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.199944p-90f, 0.0f,
     0.0f, 0x1.6e0f34p-85f, 0x1.1f99c2p-38f, 0.0f, 0x1.0f60cep-70f, 0.0f,
     0x1.461842p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26536cp-42f, 0.0f,
     0x1.c8c01cp-109f, 0x1.80db34p-31f, 0x1.7c38d6p-55f, 0x1.1c4854p-25f, 0.0f,
     0x1.e42826p-24f, 0.0f, 0x1.fe723cp-126f, 0x1.819c68p-1f, 0.0f, 0x1.a003acp-112f,
     0.0f, 0.0f, 0x1.f887cp-13f, 0x1.9572ep-116f, 0x1.c6ef18p-82f, 0x1.077808p-73f,
     0.0f, 0.0f, 0.0f, 0x1.bbfcd4p-91f, 0x1.1252ap-104f, 0.0f, 0x1.d35f64p-81f,
     0x1.8e9bfap-30f, 0x1.ac0726p-40f, 0x1.8764cap-117f, 0x1.963b34p-35f, 0.0f, 0.0f,
     0x1.b87ccp-18f, 0x1.bc594ep-32f, 0.0f, 0.0f, 0x1.e4dfdcp-111f, 0x1.7a97c8p-104f,
     0x1.d169bap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e99d92p-70f, 0x1.92c428p-117f,
     0.0f, 0.0f, 0.0f, 0x1.5de4a4p-122f, 0.0f, 0x1.49358ep-61f, 0x1.e36c2p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cd327ap-83f, 0.0f, 0x1.54426cp-43f, 0.0f, 0.0f, 0.0f,
     0x1.fdcd28p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5aa59cp-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.158544p-4f, 0x1.b19532p-65f, 0.0f, 0x1.c1032p-87f,
     0x1.52f966p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ee43ap-105f, 0.0f, 0.0f,
     0x1.768664p-1f, 0x1.a0f5a8p-77f, 0x1.0965dp-3f, 0.0f, 0x1.bae48cp-49f,
     0x1.42da0ap-14f, 0x1.b9f8eap-70f, 0.0f, 0.0f, 0.0f, 0x1.3053c6p-73f, 0.0f,
     0x1.006e62p-63f, 0x1.3b7de6p-42f, 0x1.b3a8d2p-87f, 0.0f, 0x1.0f9432p-89f, 0.0f,
     0x1.dc9f02p-37f, 0x1.171eep-108f, 0.0f, 0.0f, 0x1.cb9ebp-34f, 0x1.38f5ep-77f,
     0.0f, 0x1.14d8dp-108f, 0.0f, 0x1.606f12p-91f, 0.0f, 0x1.4d4f62p-46f,
     0x1.4c54ecp-12f, 0.0f, 0x1.52cf66p-52f, 0x1.f63dfp-28f, 0x1.58a2e2p-20f, 0.0f,
     0x1.664eaep-46f, 0x1.54daecp-7f, 0x1.c5e35ap-56f, 0x1.1d5f8cp-67f,
     0x1.9ac07ep-68f, 0x1.55ab2cp-36f, 0x1.6b2744p-62f, 0x1.46311ep-83f,
     0x1.faca18p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.250e06p-34f, 0.0f, 0.0f, 0.0f,
     0x1.2bb3bap-30f, 0.0f, 0.0f, 0x1.4f1248p-72f, 0.0f, 0.0f, 0x1.2f2cb6p-107f,
     0x1.b0e084p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d4658p-63f,
     0x1.443598p-37f, 0.0f, 0x1.2e0e58p-50f, 0.0f, 0x1.025812p-94f, 0x1.3114e2p-60f,
     0.0f, 0x1.fdcddp-109f, 0.0f, 0.0f, 0.0f, 0x1.3cd90ap-95f, 0x1.615bdp-113f, 0.0f,
     0.0f, 0x1.6152cap-30f, 0x1.ad0bdap-39f, 0x1.ebcbfp-52f, 0x1.84da78p-73f, 0.0f,
     0x1.3ead26p-48f, 0x1.0a2128p-73f, 0x1.8b87d6p-82f, 0.0f, 0x1.3c9a94p-80f,
     0x1.c2dfbap-87f, 0x1.4db44cp-4f, 0.0f, 0.0f, 0x1.2eb846p-114f, 0x1.77339ap-66f,
     0x1.60cb6p-80f, 0.0f, 0.0f, 0.0f, 0x1.e3f38ep-114f, 0.0f, 0.0f, 0x1.0e1ec6p-87f,
     0.0f, 0x1.776ae4p-50f, 0x1.8fa998p-37f, 0.0f, 0.0f, 0x1.1ba6b8p-121f, 0.0f,
     0x1.72d722p-24f, 0x1.31bfa8p-35f, 0.0f, 0x1p0f, 0.0f, 0x1.e6969ap-27f,
     0x1.11c80ep-76f, 0x1.157fp-119f, 0x1.46a28cp-36f, 0.0f, 0.0f, 0x1.012928p-122f,
     0x1.16f318p-77f, 0.0f, 0.0f, 0x1.46147p-25f, 0.0f, 0.0f, 0.0f, 0x1.632a62p-90f,
     0x1.e356dep-10f, 0x1.9a8958p-32f, 0.0f, 0x1.0e5f82p-69f, 0.0f, 0x1.08f1d8p-28f,
     0.0f, 0.0f, 0.0f, 0x1.f0474ap-42f, 0x1.4a391p-113f, 0.0f, 0x1.191518p-100f,
     0x1.468298p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2a252p-76f, 0x1.c99054p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ad404p-53f, 0.0f, 0x1.246c84p-14f, 0.0f,
     0x1.6c8566p-66f, 0x1.208756p-96f, 0.0f, 0.0f, 0x1.91e262p-96f, 0x1.93ccbcp-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc8cf2p-101f, 0.0f, 0x1.bd0af4p-22f,
     0.0f, 0.0f, 0x1.0dcadcp-29f, 0x1.d27486p-106f, 0.0f, 0x1.cc7d6ap-31f,
     0x1.41806ep-52f, 0.0f, 0.0f, 0x1.ec5dc8p-88f, 0x1.ffe532p-43f, 0x1.0f721ep-121f,
     0.0f, 0.0f, 0x1.f74652p-123f, 0.0f, 0.0f, 0x1.5481fap-42f, 0.0f, 0.0f, 0.0f,
     0x1.0cd334p-124f, 0.0f, 0x1.ffb7c8p-114f, 0.0f, 0x1.e917b6p-118f, 0.0f, 0.0f,
     0x1.ed7b38p-97f, 0.0f, 0.0f, 0x1.2abcbp-44f, 0.0f, 0x1.1df8p-116f,
     0x1.49756ep-74f, 0.0f, 0.0f, 0x1.2ae35cp-78f, 0.0f, 0x1.083bb4p-101f, 0.0f,
     0x1.6aa84ap-16f, 0x1.407804p-118f, 0.0f, 0x1.10054ep-21f, 0.0f, 0x1.467df8p-112f,
     0x1.5d7a86p-31f, 0x1.de5d2p-46f, 0x1.a3d668p-103f, 0.0f, 0.0f, 0x1.55e296p-124f,
     0x1.0bd5bep-116f, 0x1.7eb3ccp-6f, 0.0f, 0x1.c7d766p-45f, 0.0f, 0x1.58f74cp-77f,
     0x1.ff136p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03b76ep-3f, 0.0f, 0.0f, 0.0f,
     0x1.af3512p-89f, 0x1.217da2p-1f, 0x1.0a333ap-45f, 0.0f, 0.0f, 0x1.abd9c4p-88f,
     0x1.a61902p-13f, 0.0f, 0x1.10960cp-72f, 0x1.722aa6p-119f, 0x1.36cc02p-65f, 0.0f,
     0.0f, 0.0f, 0x1.2598a8p-91f, 0.0f, 0.0f, 0x1.74b054p-97f, 0x1.438b6ap-45f,
     0x1.bcc4bp-7f, 0x1.358c32p-100f, 0x1.359b66p-8f, 0x1.2da782p-39f,
     0x1.d290fep-50f, 0x1.0cdcfp-41f, 0x1.56ba4ep-95f, 0x1.9792fep-20f,
     0x1.2c0374p-119f, 0x1.3dcdf4p-37f, 0x1.965a92p-18f, 0x1.86e876p-14f, 0.0f,
     0x1.ef5af4p-2f, 0x1.877a3cp-13f, 0x1.3756cp-53f, 0x1.bc5be4p-64f, 0.0f,
     0x1.54a556p-7f, 0x1.0421a8p-29f, 0.0f, 0.0f, 0.0f, 0x1.73e4d6p-4f, 0.0f,
     0x1.d260cep-6f, 0.0f, 0.0f, 0x1.a31daep-57f, 0x1.c1cfe2p-94f, 0.0f, 0.0f,
     0x1.3ed88p-42f, 0.0f, 0.0f, 0x1.b37b3ap-83f, 0x1.3d5c56p-107f, 0x1.396c92p-116f,
     0x1.783f96p-66f, 0x1.4dbe7ap-23f, 0.0f, 0.0f, 0x1.791606p-5f, 0.0f, 0.0f, 0.0f,
     0x1.a2016p-122f, 0x1.cb020cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.695022p-33f,
     0x1.ad7246p-74f, 0.0f, 0x1.e410acp-4f, 0.0f, 0.0f, 0x1.58229cp-93f,
     0x1.87fe6cp-31f, 0x1.8e9f2p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d239ap-107f, 0.0f,
     0.0f, 0x1.cd152cp-112f, 0.0f, 0x1.15db7ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d5e012p-8f, 0.0f, 0x1.3a83ccp-80f, 0x1.ec2492p-23f, 0.0f,
     0x1.7f6e16p-125f, 0.0f, 0x1.687fc6p-15f, 0.0f, 0x1.c7d404p-94f, 0.0f,
     0x1.ad6c4ep-83f, 0.0f, 0x1.73d23ap-125f, 0.0f, 0x1.145c9p-94f, 0x1p0f,
     0x1.f0e472p-37f, 0x1.fb8ff4p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.085268p-33f,
     0x1.d94decp-61f, 0.0f, 0x1.0ddd8p-123f, 0x1.bcb262p-87f, 0.0f, 0x1.26faa8p-99f,
     0.0f, 0.0f, 0.0f, 0x1.e90bc6p-45f, 0x1.da8e5ap-81f, 0x1.3b0e74p-13f, 0.0f, 0.0f,
     0x1.09b5b6p-68f, 0.0f, 0x1.df3baep-94f, 0.0f, 0x1.f66848p-67f, 0x1.ac76b8p-39f,
     0x1.5a32b4p-89f, 0.0f, 0x1.9424d6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c9834p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74e8dcp-37f, 0.0f,
     0x1.63ab26p-7f, 0.0f, 0.0f, 0x1.4871b8p-54f, 0.0f, 0x1.492cf8p-100f,
     0x1.dbcdcep-35f, 0x1.de967ap-26f, 0.0f, 0x1.cff26ep-26f, 0.0f, 0.0f, 0.0f,
     0x1.18fb62p-26f, 0x1.c6f0ccp-40f, 0x1.cc1d06p-88f, 0x1.f80354p-10f,
     0x1.b6e6fp-80f, 0x1.9a704ep-13f, 0x1.faf594p-40f, 0x1.8150f8p-113f, 0.0f,
     0x1.b8a9b6p-75f, 0x1.085632p-29f, 0x1.40c2c6p-31f, 0.0f, 0x1.4e524p-74f,
     0x1.ee60ccp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4fe46p-114f, 0x1.fb0e54p-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d564ep-99f, 0.0f, 0x1.92f5dep-101f, 0x1.3ce518p-13f,
     0x1.b6cb9p-72f, 0.0f, 0.0f, 0x1.2c4654p-79f, 0x1.559ef6p-71f, 0x1.4bdd28p-23f,
     0.0f, 0x1.c7d8b4p-115f, 0.0f, 0x1.f2b6acp-40f, 0x1.c5f4cep-26f, 0.0f,
     0x1.36215cp-65f, 0.0f, 0x1.831968p-117f, 0.0f, 0x1.c7a6c8p-85f, 0.0f,
     0x1.b615ccp-5f, 0.0f, 0.0f, 0.0f, 0x1.689e56p-61f, 0x1.bf8cb6p-103f,
     0x1.a66894p-107f, 0.0f, 0x1.336a68p-9f, 0x1.9684cap-33f, 0x1.d9a39ep-96f,
     0x1.8e69c8p-122f, 0.0f, 0.0f, 0.0f, 0x1.a73e38p-123f, 0x1.03d074p-12f,
     0x1.c67f32p-39f, 0.0f, 0x1.0c42e8p-29f, 0.0f, 0x1.440d56p-10f, 0x1.128p-105f,
     0.0f, 0.0f, 0x1.94531ep-70f, 0.0f, 0x1.f0dce6p-6f, 0x1.3ac2dp-87f, 0.0f, 0.0f,
     0.0f, 0x1.5332c4p-18f, 0x1.3fc0b4p-87f, 0.0f, 0x1.c84b48p-15f, 0x1.440256p-75f,
     0.0f, 0.0f, 0x1.41e91ap-95f, 0.0f, 0x1.651f14p-114f, 0x1.421226p-84f, 0.0f, 0.0f,
     0.0f, 0x1.fa1d8ap-31f, 0.0f, 0x1.6da9a8p-39f, 0x1.42828ep-64f, 0x1.fa10dap-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cef64p-95f, 0x1.e1f946p-17f, 0.0f, 0x1.77a054p-116f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.b76336p-56f, 0.0f, 0x1.f9ee68p-37f, 0.0f, 0x1.8571cep-19f,
     0x1.a0f914p-31f, 0x1.9ec936p-35f, 0x1.10924p-120f, 0x1.7cb8bp-113f,
     0x1.3485bap-84f, 0x1.d37a26p-88f, 0x1.d40388p-90f, 0.0f, 0x1.5a1dc2p-28f, 0.0f,
     0.0f, 0x1.50f02p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f90d4p-60f, 0x1.5bbdeep-59f,
     0x1p0f, 0x1.868776p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9d93ap-83f, 0.0f, 0.0f,
     0.0f, 0x1.e2b1e6p-14f, 0x1.f2aa8ep-59f, 0x1.718752p-89f, 0.0f, 0x1.8fdf78p-94f,
     0x1.a17db4p-123f, 0.0f, 0.0f, 0x1.a9a114p-91f, 0x1.fad99p-103f, 0x1.fc0972p-75f,
     0.0f, 0x1.9ffa18p-69f, 0x1.347bfcp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e45958p-51f, 0.0f, 0.0f, 0.0f, 0x1.6693f2p-24f, 0x1.dbffbap-36f,
     0x1.b26952p-84f, 0x1.91108ep-56f, 0x1.ecabecp-22f, 0.0f, 0.0f, 0.0f,
     0x1.f4edd6p-110f, 0.0f, 0x1.950898p-33f, 0x1.c2f83cp-10f, 0x1.89101p-14f, 0.0f,
     0.0f, 0x1.d2b66ap-26f, 0x1.0bd39ep-45f, 0x1.6d2d4ap-48f, 0x1.25b44p-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b01f8p-50f, 0x1.d75c54p-14f, 0.0f, 0x1.5851a4p-8f,
     0.0f, 0x1.b71254p-99f, 0.0f, 0.0f, 0x1.7693d8p-78f, 0.0f, 0x1.141c0cp-121f, 0.0f,
     0x1.4931fp-2f, 0.0f, 0x1.f2273ap-120f, 0.0f, 0x1.320c5p-90f, 0.0f, 0.0f, 0.0f,
     0x1.e20b22p-102f, 0.0f, 0x1.203ac6p-66f, 0x1.af4e54p-76f, 0x1.f12548p-92f,
     0x1.b18242p-112f, 0x1.4bc538p-103f, 0.0f, 0x1.7d084cp-26f, 0x1.c26a22p-71f,
     0x1.d60ecp-125f, 0.0f, 0x1.786f4cp-100f, 0x1.1865f2p-40f, 0.0f, 0.0f,
     0x1.4785a2p-98f, 0x1.584c14p-104f, 0.0f, 0.0f, 0x1.f7c29ap-56f, 0x1.55a85ap-31f,
     0.0f, 0.0f, 0.0f, 0x1.ebbba2p-78f, 0x1.7b38dp-91f, 0.0f, 0x1.15b00cp-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82b89ap-111f, 0x1.5d15f8p-79f, 0.0f, 0.0f,
     0x1.b3bc3ap-59f, 0x1.ea30d8p-67f, 0.0f, 0.0f, 0.0f, 0x1.f34d28p-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5c528p-23f, 0x1.a8ce24p-111f, 0x1p0f, 0.0f,
     0x1.094308p-53f, 0x1.4511dp-73f, 0x1.7acc52p-88f, 0x1.ba92acp-49f, 0.0f,
     0x1.da692p-58f, 0x1.e09dd8p-48f, 0x1.dcddaap-106f, 0x1.c2a4cep-113f, 0.0f,
     0x1.f0c866p-118f, 0.0f, 0.0f, 0.0f, 0x1.a8ac8ap-44f, 0x1.05dc44p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c311p-15f, 0.0f, 0x1.688a62p-5f,
     0x1.3675c8p-98f, 0x1.6f06c8p-55f, 0.0f, 0x1.d9454p-120f, 0.0f, 0.0f, 0.0f,
     0x1.7efdf8p-89f, 0.0f, 0.0f, 0.0f, 0x1.79d136p-95f, 0.0f, 0.0f, 0.0f,
     0x1.e798b6p-11f, 0x1.4f3b04p-98f, 0.0f, 0x1.6e8936p-74f, 0.0f, 0x1.e008ccp-58f,
     0x1.902292p-11f, 0.0f, 0.0f, 0.0f, 0x1.6419eap-61f, 0.0f, 0x1.c22dcep-16f,
     0x1.5cc7d2p-91f, 0.0f, 0.0f, 0.0f, 0x1.619178p-43f, 0x1.7382d6p-79f, 0.0f, 0.0f,
     0.0f, 0x1.b523b2p-60f, 0x1.4bfffcp-115f, 0x1.721986p-74f, 0x1.212386p-24f, 0.0f,
     0x1.14a728p-18f, 0.0f, 0x1.0998fep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d9b7cp-41f,
     0x1.cb1548p-105f, 0x1.03d19cp-105f, 0x1.7604a6p-17f, 0x1.07789ep-68f,
     0x1.87df06p-118f, 0x1.d17386p-1f, 0.0f, 0.0f, 0.0f, 0x1.8dae0ap-106f,
     0x1.0fc766p-55f, 0x1.8c6888p-7f, 0.0f, 0.0f, 0.0f, 0x1.cf9612p-28f,
     0x1.7c66f6p-58f, 0x1.f6d4cep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94362ep-75f, 0x1.abfd4p-78f, 0x1.6ee6acp-22f, 0x1.82549cp-1f,
     0x1.0a055cp-13f, 0x1.311324p-118f, 0x1.6a2b34p-49f, 0x1.e0930cp-42f,
     0x1.38bfdap-26f, 0x1.4ee8f2p-8f, 0x1.a27af8p-74f, 0x1.bbdceap-98f,
     0x1.39f6bcp-74f, 0.0f, 0.0f, 0.0f, 0x1.d06ff4p-126f, 0.0f, 0.0f, 0.0f,
     0x1.1d5ccap-51f, 0x1.4c898cp-1f, 0.0f, 0x1.7cee88p-93f, 0.0f, 0x1.47c36p-16f,
     0.0f, 0x1.10aaf2p-29f, 0.0f, 0x1.165e76p-74f, 0x1.d1fb4cp-74f, 0.0f,
     0x1.bbb70ap-44f, 0.0f, 0.0f, 0x1.c080b2p-49f, 0.0f, 0.0f, 0x1.b16202p-9f, 0.0f,
     0x1.85ef34p-115f, 0.0f, 0.0f, 0x1.f00ddcp-49f, 0.0f, 0x1.c24ff8p-54f,
     0x1.a152dep-14f, 0x1.c01f22p-115f, 0x1.f21d54p-4f, 0x1.71acfap-94f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.93acc6p-21f, 0.0f, 0x1.77ba8cp-39f, 0.0f, 0x1.68929ep-10f,
     0.0f, 0.0f, 0x1.60248p-114f, 0x1.95adacp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e7c6p-47f, 0x1.5fe93ep-21f, 0.0f, 0x1.acb4e6p-108f, 0x1.16065ap-67f,
     0x1.22f884p-94f, 0.0f, 0x1.5326b2p-28f, 0x1.448ae2p-30f, 0x1.fc72b8p-66f, 0.0f,
     0.0f, 0x1.033448p-111f, 0.0f, 0.0f, 0x1.c4ee2ap-23f, 0.0f, 0x1.01991p-59f, 0.0f,
     0.0f, 0x1.c2bac8p-87f, 0.0f, 0.0f, 0.0f, 0x1.5450a8p-25f, 0.0f, 0x1.1ebc78p-95f,
     0.0f, 0.0f, 0x1.c61066p-54f, 0x1.bf4c9cp-102f, 0.0f, 0x1.485076p-48f, 0.0f,
     0x1.6e992ep-62f, 0.0f, 0x1.f944e8p-99f, 0.0f, 0x1.375108p-108f, 0.0f,
     0x1.55b87p-21f, 0.0f, 0x1.b50312p-78f, 0x1.192ec4p-17f, 0.0f, 0x1.30866ep-15f,
     0x1.e7e4cp-28f, 0x1.e321c8p-44f, 0x1.aafda8p-123f, 0.0f, 0x1.dcf7b8p-55f,
     0x1.db4584p-101f, 0x1.cf5bc8p-113f, 0.0f, 0.0f, 0x1.c1df52p-66f, 0x1.3bab7ap-31f,
     0x1p0f, 0.0f, 0x1.0e671cp-44f, 0x1.787edep-82f, 0x1.2cd1f8p-5f, 0x1.f5912ep-98f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.20592ep-126f, 0x1.af1fe2p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4475c2p-52f, 0.0f, 0x1.33628p-65f, 0x1.f3e9a8p-86f,
     0.0f, 0x1.aa225cp-65f, 0.0f, 0.0f, 0x1.a7cf4p-49f, 0.0f, 0x1.958802p-28f, 0.0f,
     0.0f, 0.0f, 0x1.d4e56ep-52f, 0x1.5a5e48p-88f, 0.0f, 0x1.473a34p-35f, 0.0f,
     0x1.f0b55ap-8f, 0.0f, 0x1.86e8dap-19f, 0x1.35cd4ap-116f, 0x1.0a82dep-23f, 0.0f,
     0.0f, 0.0f, 0x1.bf3ea2p-54f, 0.0f, 0x1.1e49d4p-8f, 0x1.db4b7ap-75f,
     0x1.4be8dcp-13f, 0x1.be76dep-38f, 0.0f, 0.0f, 0x1.45bdf4p-89f, 0x1.b0fe18p-63f,
     0x1.4c3908p-73f, 0.0f, 0x1.461158p-86f, 0x1.bea57cp-113f, 0x1.0bf5d2p-108f,
     0x1.f9fc56p-97f, 0x1.05c83p-4f, 0x1.b1b5f2p-23f, 0.0f, 0.0f, 0x1.2b991ap-126f,
     0x1.0a43a6p-123f, 0x1.af1256p-17f, 0x1.135b56p-24f, 0.0f, 0.0f, 0x1.ab0bap-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e927a4p-73f, 0x1.65dafp-80f, 0.0f,
     0x1.3c0544p-21f, 0.0f, 0x1.39ca24p-3f, 0x1.db1c18p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.866f14p-2f, 0x1.1843bcp-4f, 0.0f, 0x1.27f67ep-124f, 0x1.43d1cp-104f,
     0x1.c58feap-76f, 0x1.a9cf7cp-57f, 0.0f, 0.0f, 0.0f, 0x1.6e872cp-25f, 0.0f,
     0x1.e82756p-49f, 0.0f, 0x1.b1efacp-106f, 0x1.9a374cp-31f, 0.0f, 0x1.453148p-6f,
     0x1.90d0e8p-90f, 0.0f, 0x1.1db53ep-96f, 0.0f, 0x1.63ae54p-86f, 0x1.7f657ep-50f,
     0x1.2df354p-114f, 0.0f, 0.0f, 0.0f, 0x1.96490ep-114f, 0x1.0e8f94p-8f, 0.0f, 0.0f,
     0x1.86c112p-71f, 0.0f, 0x1.9a83f6p-13f, 0.0f, 0x1.3e0cfap-14f, 0x1.2b61a2p-22f,
     0x1.266ac8p-18f, 0.0f, 0x1.a3607p-8f, 0.0f, 0x1.960d68p-119f, 0.0f,
     0x1.79fa56p-50f, 0.0f, 0x1.8e30c8p-43f, 0x1.dda4e2p-110f, 0.0f, 0.0f,
     0x1.cc2e44p-27f, 0.0f, 0x1.34f7ecp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15e7fap-107f, 0x1.31d24p-8f, 0x1.647e68p-79f, 0.0f, 0.0f, 0x1.181b54p-74f,
     0.0f, 0.0f, 0x1.30db86p-94f, 0.0f, 0x1.38c09p-90f, 0.0f, 0.0f, 0.0f,
     0x1.5ec63cp-51f, 0.0f, 0x1p0f, 0x1.ece942p-4f, 0x1.6e4aa6p-103f, 0.0f, 0.0f,
     0x1.05c9fcp-59f, 0.0f, 0.0f, 0.0f, 0x1.e8c3a8p-78f, 0.0f, 0.0f, 0x1.f29992p-63f,
     0x1.24299cp-87f, 0x1.b2bf82p-92f, 0.0f, 0.0f, 0x1.888ddcp-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a6aa3ep-98f, 0x1p0f, 0x1.93b70ap-93f, 0x1.aac756p-73f,
     0x1.2d7ebap-34f, 0x1.1daf54p-89f, 0x1.4fb682p-88f, 0x1.983184p-18f,
     0x1.338068p-2f, 0x1.062d46p-1f, 0x1.dea35ap-121f, 0.0f, 0x1.0e56c6p-39f,
     0x1.725038p-120f, 0x1.7d166ep-37f, 0x1.2a9b26p-51f, 0x1.2ccf58p-119f,
     0x1.aeacdap-29f, 0x1.5e5ec6p-9f, 0x1.d8312p-117f, 0.0f, 0x1.405028p-5f, 0.0f,
     0.0f, 0x1.a03a02p-59f, 0x1.990eacp-1f, 0x1.bea42cp-56f, 0x1.90d31ap-65f,
     0x1.4876c6p-40f, 0.0f, 0x1.7ec67ap-90f, 0x1p0f, 0.0f, 0x1.18509ap-48f,
     0x1.c2916ap-13f, 0x1.5cedd4p-18f, 0.0f, 0.0f, 0x1.581848p-101f, 0.0f, 0.0f,
     0x1.26516ap-36f, 0x1.9a3b46p-96f, 0x1.00345ep-102f, 0.0f, 0x1.768c78p-14f,
     0x1.98137ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9755cp-103f, 0.0f, 0x1.b4bf88p-83f,
     0x1.ea6264p-84f, 0x1.b80dfcp-43f, 0x1.4dd99ep-21f, 0x1.6e60a4p-50f,
     0x1.38fcc6p-54f, 0x1.e9f546p-92f, 0x1.323bcap-29f, 0x1.71f18ep-97f, 0.0f, 0.0f,
     0x1.d21d54p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c598f2p-23f, 0.0f,
     0x1.e5608cp-118f, 0.0f, 0.0f, 0x1.16c65ep-78f, 0.0f, 0x1.6dd3e8p-70f, 0.0f,
     0x1.c51014p-33f, 0.0f, 0x1.c67a5ap-88f, 0x1.d22dfap-89f, 0x1.ecc2a4p-97f,
     0x1.4245dcp-96f, 0.0f, 0.0f, 0.0f, 0x1.fbecep-75f, 0x1.b3ee52p-57f,
     0x1.c47a38p-91f, 0.0f, 0.0f, 0x1.07bcep-106f, 0x1.c25c08p-71f, 0x1.782dd2p-125f,
     0x1.5bc492p-43f, 0x1.f8f894p-105f, 0.0f, 0.0f, 0x1.3d105cp-63f, 0x1.7cb2e8p-89f,
     0.0f, 0x1.67b4c8p-117f, 0.0f, 0.0f, 0x1.767378p-23f, 0x1.7e1b2ep-109f, 0.0f,
     0.0f, 0.0f, 0x1.875678p-110f, 0.0f, 0.0f, 0x1.d8f072p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4845d6p-112f, 0.0f, 0x1.79901p-51f, 0.0f, 0.0f, 0x1.07d6fep-42f,
     0x1.c6a8d4p-81f, 0x1.f4fe98p-73f, 0x1.8109cap-100f, 0.0f, 0x1.7dc18ep-94f,
     0x1.ff08dap-83f, 0x1.c0dd94p-56f, 0x1.113afap-75f, 0.0f, 0.0f, 0x1.a085c4p-84f,
     0x1.df56cap-55f, 0x1.92d344p-55f, 0.0f, 0x1.d1cd76p-47f, 0x1.84206ep-114f,
     0x1.c50a18p-76f, 0x1.30d042p-43f, 0.0f, 0x1.2107dep-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6feaa4p-82f, 0x1.d5f928p-97f, 0x1.ce2568p-60f, 0x1.a9903ap-102f,
     0x1.8f7f9ep-26f, 0.0f, 0.0f, 0x1.a21e46p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4abd48p-27f, 0x1.4d5c8p-65f, 0.0f,
     0x1.ab5164p-65f, 0.0f, 0x1.db5898p-10f, 0.0f, 0x1.abc71ep-35f, 0.0f,
     0x1.3e930cp-33f, 0x1.6ddf2p-85f, 0.0f, 0x1.b2c6dep-59f, 0.0f, 0x1.d72972p-48f,
     0x1.e57d8cp-111f, 0.0f, 0x1.34a462p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.068eeep-113f, 0x1.064a4ep-59f, 0x1.370148p-3f, 0x1.f45b98p-98f,
     0x1.c0f9fcp-57f, 0x1.4e9f1cp-32f, 0.0f, 0x1.4e7292p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.607e84p-12f, 0.0f, 0x1.6c1ecp-94f, 0x1.8366d6p-112f, 0x1.078ep-33f,
     0x1.b78b0cp-60f, 0x1.5d83ap-23f, 0x1.bae132p-64f, 0x1.ec24fep-50f, 0.0f,
     0x1.4e32a6p-43f, 0.0f, 0.0f, 0x1.519822p-14f, 0x1.ea1c74p-70f, 0.0f,
     0x1.4b57ap-36f, 0.0f, 0.0f, 0.0f, 0x1.7048dcp-45f, 0x1.f4213ep-27f, 0.0f, 0.0f,
     0x1.415c9ap-106f, 0x1.72e774p-116f, 0.0f, 0x1.60f172p-100f, 0x1.e8aeb6p-19f,
     0.0f, 0x1.f1d6e8p-25f, 0x1.fb11bp-94f, 0x1.8fb8ap-20f, 0x1.d78d9ap-10f,
     0x1.ee07b8p-38f, 0x1.724966p-20f, 0x1.59711p-83f, 0.0f, 0.0f, 0.0f,
     0x1.c3e43cp-2f, 0.0f, 0.0f, 0x1.48673ap-30f, 0x1.1a930ep-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.14b8aep-93f, 0.0f, 0x1.c2a7dcp-105f, 0x1.e2cb0cp-13f, 0x1.e44a46p-113f,
     0x1.450578p-43f, 0x1.e4ed3ap-121f, 0x1.80eed8p-69f, 0.0f, 0.0f, 0x1.c6a2d6p-100f,
     0.0f, 0.0f, 0.0f, 0x1.e1f77cp-72f, 0.0f, 0x1.98e402p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.935b7p-11f, 0.0f, 0x1.73ace6p-47f, 0.0f, 0.0f, 0x1.c8081p-37f, 0.0f,
     0x1.362338p-8f, 0x1.882714p-59f, 0.0f, 0.0f, 0x1.9f7c42p-23f, 0.0f,
     0x1.58b59cp-66f, 0.0f, 0x1.3ddecep-15f, 0x1.df2da8p-87f, 0x1.296fd2p-5f,
     0x1.262b7p-82f, 0x1.2fe21ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f6d6ap-14f,
     0.0f, 0.0f, 0x1.8dd04cp-52f, 0.0f, 0.0f, 0x1.379918p-100f, 0.0f, 0x1.cacbbap-40f,
     0.0f, 0x1.cd0cp-29f, 0.0f, 0x1.ca9bc4p-8f, 0.0f, 0.0f, 0x1.973458p-110f,
     0x1.6c4e84p-44f, 0.0f, 0x1.2c7604p-104f, 0x1.77c32ap-15f, 0x1.70a0cp-50f, 0.0f,
     0x1.5689cp-68f, 0x1.e0d9p-103f, 0x1.4e7b3ep-14f, 0x1.b46306p-119f, 0.0f, 0.0f,
     0x1.edd3b2p-37f, 0x1.37f614p-17f, 0x1.666ecap-34f, 0.0f, 0x1.37d3c4p-65f, 0.0f,
     0x1.431a2ep-112f, 0x1.0ba634p-92f, 0.0f, 0x1.2a6834p-87f, 0.0f, 0x1.66aa0ep-73f,
     0x1.7679a8p-12f, 0x1.ff900cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c394p-64f, 0x1.54b77ep-116f, 0x1.3b3374p-91f, 0x1.e8d2b8p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09570ap-80f, 0x1.de8842p-55f, 0.0f,
     0.0f, 0.0f, 0x1.3427eap-4f, 0x1.10166cp-108f, 0.0f, 0x1.e93018p-32f, 0.0f, 0.0f,
     0x1.914bf6p-24f, 0.0f, 0x1.0a9a54p-23f, 0x1.a6469ap-52f, 0.0f, 0.0f,
     0x1.6181fap-101f, 0x1.2df006p-52f, 0x1.b4baeep-85f, 0x1.4ee466p-13f, 0.0f,
     0x1.266c0cp-65f, 0x1.ebdba6p-20f, 0x1.e7505p-52f, 0.0f, 0x1.2a1baap-117f, 0.0f,
     0x1.e50172p-124f, 0x1.926e5ep-48f, 0x1.128142p-106f, 0.0f, 0x1.6727f2p-61f,
     0x1.d2e07p-110f, 0x1.c6347ap-51f, 0x1.551694p-39f, 0.0f, 0.0f, 0.0f,
     0x1.625334p-41f, 0.0f, 0x1.c7c93cp-48f, 0x1.4a75d6p-61f, 0x1.c937e4p-41f, 0.0f,
     0x1.3681b2p-74f, 0x1.72b40ap-116f, 0.0f, 0x1.eea44p-7f, 0.0f, 0x1.e72bb4p-82f,
     0.0f, 0x1.4738aap-78f, 0.0f, 0x1.898ae6p-43f, 0x1.2f8cccp-67f, 0.0f,
     0x1.f53666p-103f, 0.0f, 0x1.638522p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39478cp-72f, 0x1.d6faa6p-36f, 0x1.cd87ecp-25f, 0x1.ea839ap-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47f04ap-89f, 0.0f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_finz_fastpowf8_u3500kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_fastpowf8_u3500kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fastpowf8_u3500kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
