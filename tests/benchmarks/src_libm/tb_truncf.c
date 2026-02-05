/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_truncf.c --function truncf --headers math.h,ml_support_lib.h \
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
     0x1.124b8cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78fbecp-119f, 0.0f,
     0x1.8e8884p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e35d2p-32f, 0.0f, 0.0f, 0.0f,
     0x1.13fad6p-21f, 0x1.6789a2p-65f, 0.0f, 0.0f, 0x1.ff8266p-3f, 0x1.1b6358p-85f,
     0.0f, 0x1.e653aep-23f, 0x1.bb2706p-20f, 0x1.f4e968p-37f, 0.0f, 0.0f,
     0x1.b9150ep-104f, 0.0f, 0x1.0d8a32p-124f, 0.0f, 0.0f, 0x1.875f76p-36f,
     0x1.59fcdep-32f, 0.0f, 0.0f, 0.0f, 0x1.968e2p-76f, 0.0f, 0x1.8331f4p-63f, 0.0f,
     0.0f, 0.0f, 0x1.c1896cp-104f, 0.0f, 0.0f, 0x1.7082aep-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3aea9ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fb0c6p-52f,
     0x1.bf9bbep-60f, 0x1.e22a68p-105f, 0x1.0c714p-108f, 0x1.b67d66p-94f, 0.0f, 0.0f,
     0x1.1082p-29f, 0.0f, 0x1.2cea98p-30f, 0x1.c97d82p-116f, 0.0f, 0x1.b2c314p-15f,
     0.0f, 0.0f, 0x1.e79c6ep-10f, 0.0f, 0x1.d2529p-17f, 0.0f, 0x1.098202p-17f, 0.0f,
     0.0f, 0.0f, 0x1.b49698p-121f, 0.0f, 0x1.29b6fcp-78f, 0x1.fff08ep-37f,
     0x1.1d148p-7f, 0x1.d3b992p-67f, 0.0f, 0.0f, 0x1.b14e14p-47f, 0.0f,
     0x1.19a12p-79f, 0.0f, 0.0f, 0.0f, 0x1.bc96bep-119f, 0.0f, 0.0f, 0.0f,
     0x1.0d35a6p-78f, 0.0f, 0x1.7d0a7ap-79f, 0.0f, 0.0f, 0x1.6cc64ep-114f, 0.0f, 0.0f,
     0x1.8c9e1ap-22f, 0.0f, 0.0f, 0.0f, 0x1.82c194p-91f, 0.0f, 0.0f, 0x1.0361fap-125f,
     0.0f, 0x1.d1ec8p-72f, 0x1.11783p-18f, 0x1.8dd65ap-37f, 0x1.8c4b1cp-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.84e75p-73f, 0.0f, 0.0f, 0x1.7c4c6ep-94f, 0.0f,
     0x1.7b6378p-90f, 0x1.d4a7fap-9f, 0x1.729b18p-123f, 0x1.ae9df2p-1f,
     0x1.9075a2p-97f, 0.0f, 0.0f, 0x1.f7c198p-60f, 0.0f, 0.0f, 0.0f, 0x1.c0e48ap-89f,
     0x1.1e3dfcp-80f, 0x1.2f4786p-73f, 0.0f, 0x1.4a334cp-23f, 0x1.e41b9p-48f, 0.0f,
     0.0f, 0.0f, 0x1.b57c16p-11f, 0.0f, 0x1.7cac2p-83f, 0.0f, 0x1.581472p-4f,
     0x1.05fa26p-38f, 0.0f, 0.0f, 0x1.ce551ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2d8cp-33f, 0x1.9c4b44p-124f, 0x1.945a3cp-70f, 0x1.359ef8p-25f,
     0x1.7e317ep-78f, 0x1.4a563cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d8eb6p-7f,
     0.0f, 0x1.e56aeap-67f, 0x1.707962p-124f, 0.0f, 0.0f, 0x1.6eb0aap-9f, 0.0f, 0.0f,
     0x1.3bfbdcp-97f, 0.0f, 0.0f, 0x1.2fafd8p-22f, 0x1.1db6bep-48f, 0.0f, 0.0f,
     0x1.4549bep-120f, 0x1.a29c6p-98f, 0x1.f5f9dep-16f, 0x1.eb51e6p-109f,
     0x1.f563eep-87f, 0.0f, 0x1.40a31p-75f, 0.0f, 0.0f, 0.0f, 0x1.f8fddep-118f, 0.0f,
     0x1.cf34ep-56f, 0.0f, 0x1.8b851p-28f, 0.0f, 0.0f, 0.0f, 0x1.b2a2ep-26f, 0.0f,
     0x1.f247a4p-34f, 0.0f, 0.0f, 0.0f, 0x1.1ac402p-91f, 0x1.12aff2p-107f,
     0x1.dd625p-87f, 0x1.7240c8p-104f, 0.0f, 0.0f, 0x1.e157d2p-125f, 0.0f, 0.0f, 0.0f,
     0x1.bdd92ep-21f, 0x1.8ed9ccp-16f, 0.0f, 0x1.a1fccep-9f, 0x1.0bf38cp-116f, 0.0f,
     0x1.44d9bap-6f, 0x1.a9d56p-58f, 0x1.7c04d6p-3f, 0.0f, 0.0f, 0.0f,
     0x1.eefdbep-29f, 0.0f, 0.0f, 0.0f, 0x1.ae640ap-121f, 0x1.358136p-7f,
     0x1.773ed4p-119f, 0x1.5e28f8p-8f, 0x1.f75c66p-125f, 0x1.83df26p-109f, 0.0f, 0.0f,
     0.0f, 0x1.114cdep-57f, 0x1.c091c4p-78f, 0x1.71bd18p-40f, 0.0f, 0.0f,
     0x1.ebdc54p-13f, 0.0f, 0.0f, 0.0f, 0x1.f094c8p-111f, 0.0f, 0x1.e63572p-46f,
     0x1.3b466ap-6f, 0x1.6fc5fp-74f, 0.0f, 0.0f, 0x1.ef2daap-122f, 0.0f, 0.0f, 0.0f,
     0x1.2aabbap-106f, 0.0f, 0x1.035a6ap-77f, 0x1.4bce7ap-60f, 0.0f, 0x1.12deb2p-90f,
     0x1.bc3aa8p-4f, 0.0f, 0x1.dcd8bp-58f, 0x1.e821fap-84f, 0x1.5cf1d6p-20f,
     0x1.88c3e2p-48f, 0x1.67765ep-28f, 0.0f, 0x1.22294p-22f, 0.0f, 0x1.ada838p-96f,
     0x1.6f59f4p-87f, 0.0f, 0x1.089ea4p-103f, 0x1.6848ecp-25f, 0.0f, 0.0f, 0.0f,
     0x1.26cbdp-12f, 0x1.34b0b8p-21f, 0x1.f40414p-55f, 0.0f, 0x1.9294f2p-50f, 0.0f,
     0x1.faf874p-89f, 0x1.4d79d8p-113f, 0.0f, 0.0f, 0x1.209d32p-21f, 0.0f, 0.0f,
     0x1.d46b2ep-72f, 0.0f, 0x1.6709bp-7f, 0.0f, 0.0f, 0.0f, 0x1.1a865ep-118f,
     0x1.90e698p-15f, 0.0f, 0x1.795454p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c9638p-33f,
     0x1.a9433p-99f, 0.0f, 0x1.faaa1cp-49f, 0x1.b1e54p-61f, 0.0f, 0x1.ead47cp-5f,
     0x1.ec76fp-118f, 0.0f, 0x1.409ae2p-59f, 0.0f, 0x1.322df8p-10f, 0.0f, 0.0f,
     0x1.a03326p-12f, 0.0f, 0.0f, 0x1.4cc734p-124f, 0.0f, 0x1.577c6p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.97a048p-101f, 0.0f, 0x1.9e0feep-77f, 0x1.8c0e02p-3f,
     0x1.a79a26p-100f, 0x1.3f119ap-94f, 0.0f, 0x1.05ffc6p-76f, 0x1.c15eb4p-94f, 0.0f,
     0.0f, 0x1.6b0504p-78f, 0.0f, 0.0f, 0.0f, 0x1.0912aep-113f, 0x1.ca266ep-45f,
     0x1.20af7ep-115f, 0x1.c8866ap-12f, 0.0f, 0x1.cd665cp-92f, 0x1.4a411p-16f,
     0x1.09389ap-16f, 0.0f, 0x1.75678ep-89f, 0.0f, 0x1.1566acp-43f, 0x1.6b5bd2p-20f,
     0.0f, 0.0f, 0.0f, 0x1.aea50ep-37f, 0.0f, 0.0f, 0x1.775e1p-55f, 0.0f,
     0x1.fe2918p-99f, 0x1.1830acp-44f, 0x1.0e1414p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9c092p-17f, 0.0f, 0.0f,
     0x1.d28b54p-78f, 0.0f, 0x1.92746ep-115f, 0x1.8ddf7p-2f, 0.0f, 0x1.a503b6p-3f,
     0x1.2332c6p-18f, 0.0f, 0.0f, 0.0f, 0x1.92d5dep-56f, 0x1.c3357ep-56f, 0.0f, 0.0f,
     0.0f, 0x1.b5b5ap-14f, 0x1.1155fap-73f, 0.0f, 0x1.c97184p-95f, 0x1.dafe94p-22f,
     0.0f, 0x1.67591p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e94cep-40f, 0.0f,
     0x1.d2b1cep-72f, 0x1.ee7666p-35f, 0x1.726708p-13f, 0.0f, 0x1.83daf2p-46f,
     0x1.ad559ep-119f, 0.0f, 0.0f, 0x1.727d1cp-33f, 0.0f, 0x1.315448p-114f,
     0x1.5e7a9p-28f, 0x1.e07da8p-59f, 0x1.ddd26cp-27f, 0x1.e3d042p-7f, 0.0f, 0.0f,
     0x1.1024c8p-9f, 0x1.4bc31cp-124f, 0x1.1ef47ep-95f, 0.0f, 0x1.7b0886p-86f, 0.0f,
     0.0f, 0x1.7fda8ap-123f, 0x1.940f14p-17f, 0.0f, 0x1.88c50ap-72f, 0x1.f89d3p-117f,
     0x1.cd26a6p-9f, 0.0f, 0x1.3120f4p-113f, 0.0f, 0x1.36cffap-96f, 0x1.0c29f8p-104f,
     0.0f, 0x1.3becfcp-74f, 0.0f, 0.0f, 0.0f, 0x1.f07cfp-37f, 0.0f, 0x1.ff6228p-113f,
     0x1.cc13dp-115f, 0x1.ca669ap-51f, 0x1.9cffaap-9f, 0x1.232076p-75f,
     0x1.fbc1f8p-101f, 0.0f, 0x1.fdb6ccp-118f, 0.0f, 0x1.6f7bap-92f, 0x1.52a9c8p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3ee7ep-43f, 0x1.56a3ccp-64f, 0x1.9117d4p-123f,
     0x1.1fdf5ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4fd7ep-36f,
     0x1.71f4dp-84f, 0.0f, 0.0f, 0x1.98d03cp-39f, 0x1.74d65p-50f, 0x1.c4fa5ap-81f,
     0x1.2c82eep-94f, 0x1.ba0076p-42f, 0x1.270c1p-86f, 0x1.c215b4p-107f,
     0x1.e57516p-94f, 0x1.a80e4ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8c1792p-63f, 0.0f, 0.0f, 0x1.34b35cp-32f, 0.0f, 0.0f, 0x1.cb1798p-69f, 0.0f,
     0.0f, 0.0f, 0x1.5c1c8cp-65f, 0.0f, 0x1.8c0dacp-45f, 0.0f, 0x1.2a7a5p-46f,
     0x1.04b15ep-7f, 0x1.65edd6p-29f, 0.0f, 0x1.38d2ep-66f, 0x1.501272p-78f,
     0x1.f023c2p-91f, 0x1.7ea8d8p-77f, 0x1.75968cp-59f, 0.0f, 0.0f, 0.0f,
     0x1.ba3376p-66f, 0x1.47757ep-121f, 0x1.2a74aep-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.54d87ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c2c8cp-117f,
     0x1.466ff4p-33f, 0.0f, 0.0f, 0.0f, 0x1.512ba8p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bb48c6p-44f, 0.0f, 0x1.bb821ep-69f, 0x1.f7e324p-28f, 0.0f,
     0.0f, 0.0f, 0x1.888546p-4f, 0.0f, 0x1.361eeep-86f, 0.0f, 0.0f, 0x1.7c5558p-83f,
     0x1.ade732p-58f, 0.0f, 0.0f, 0.0f, 0x1.5eba08p-20f, 0x1.23d46ep-9f, 0.0f, 0.0f,
     0.0f, 0x1.884ff8p-42f, 0x1.a2140ap-51f, 0.0f, 0x1.d5dec8p-97f, 0x1.291d22p-74f,
     0x1.59eebp-106f, 0.0f, 0.0f, 0x1.baa31cp-21f, 0x1.9af2ap-1f, 0.0f,
     0x1.7c69e4p-33f, 0x1.2905e6p-82f, 0.0f, 0x1.33f522p-38f, 0x1.cc748cp-91f,
     0x1.c3997ep-113f, 0.0f, 0.0f, 0x1.e62fb4p-78f, 0.0f, 0x1.eaabc6p-112f,
     0x1.ded9cp-80f, 0.0f, 0.0f, 0.0f, 0x1.ccda58p-3f, 0.0f, 0x1.7d2762p-31f, 0.0f,
     0x1.9650c8p-28f, 0x1.399ca6p-36f, 0.0f, 0x1.7d9868p-14f, 0.0f, 0.0f, 0.0f,
     0x1.6ab378p-13f, 0.0f, 0.0f, 0x1.b0aff2p-98f, 0.0f, 0.0f, 0x1.32b708p-97f, 0.0f,
     0x1.2000e4p-118f, 0x1.947be4p-15f, 0x1.3548f6p-78f, 0x1.e66c84p-40f,
     0x1.6b553ap-4f, 0.0f, 0x1.9f8cf4p-68f, 0x1.bbb8aep-39f, 0x1.60be6p-44f, 0.0f,
     0.0f, 0.0f, 0x1.af0afp-76f, 0.0f, 0x1.df4bc6p-47f, 0.0f, 0x1.105e18p-6f, 0.0f,
     0x1.c87d42p-96f, 0x1.da267p-50f, 0.0f, 0.0f, 0x1.ed38b2p-65f, 0.0f, 0.0f,
     0x1.542cdep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c798f8p-71f, 0.0f,
     0x1.db43dcp-83f, 0.0f, 0x1.4d64eep-25f, 0x1.a77246p-72f, 0x1.1b7b1ep-22f,
     0x1.c7148ep-120f, 0x1.0786a4p-124f, 0.0f, 0x1.2057e2p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ed51f6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc4ae4p-38f, 0.0f, 0.0f,
     0x1.264f44p-56f, 0x1.109bb4p-5f, 0x1.879b98p-101f, 0x1.04adb4p-25f, 0.0f, 0.0f,
     0x1.a2341ep-121f, 0x1.a2bfdep-20f, 0.0f, 0.0f, 0x1.bef8b4p-70f, 0.0f,
     0x1.dd6ef8p-36f, 0.0f, 0.0f, 0x1.55a126p-34f, 0x1.3e130ep-57f, 0.0f,
     0x1.8ec48ap-44f, 0x1.049dc8p-122f, 0.0f, 0x1.bc617ep-122f, 0x1.0ef37ap-70f,
     0x1.bdaa5p-62f, 0x1.814dd8p-63f, 0x1.95a408p-34f, 0.0f, 0.0f, 0x1.e97a14p-124f,
     0x1.821118p-74f, 0x1.10a13cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c527a6p-90f,
     0x1.98405ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aea586p-24f, 0.0f, 0x1.7c545ep-40f,
     0.0f, 0.0f, 0x1.89a646p-70f, 0.0f, 0x1.491daap-109f, 0x1.75f2dcp-122f, 0.0f,
     0x1.580e02p-114f, 0x1.e66a28p-59f, 0.0f, 0x1.4554c2p-115f, 0x1.1bae5ep-7f,
     0x1.a811f4p-61f, 0x1.5174ep-119f, 0x1.7eda52p-66f, 0.0f, 0x1.c5e13cp-117f, 0.0f,
     0x1.ab79dep-1f, 0.0f, 0.0f, 0.0f, 0x1.03c102p-83f, 0x1.beeaf4p-65f, 0.0f, 0.0f,
     0x1.04462ep-15f, 0.0f, 0x1.699558p-61f, 0.0f, 0x1.cbc306p-54f, 0.0f,
     0x1.2727bp-38f, 0x1.34c59ep-87f, 0x1.b8400ep-30f, 0.0f, 0.0f, 0x1.8eacfp-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b155p-23f, 0.0f, 0x1.7a284p-52f, 0.0f, 0.0f,
     0x1.2a8682p-14f, 0.0f, 0.0f, 0x1.5273dp-81f, 0x1.103668p-112f, 0.0f, 0.0f,
     0x1.7a00ap-96f, 0x1.f0677ep-52f, 0x1.cf1234p-124f, 0.0f, 0x1.346d44p-56f, 0.0f,
     0.0f, 0x1.1c804cp-3f, 0x1.509b5p-15f, 0x1.a55c7p-79f, 0x1.0654cep-57f, 0.0f,
     0.0f, 0.0f, 0x1.e6c346p-18f, 0.0f, 0.0f, 0.0f, 0x1.5469e8p-88f, 0x1.4075ep-90f,
     0x1.7760ep-66f, 0x1.61d538p-92f, 0x1.2cb57cp-44f, 0.0f, 0.0f, 0.0f,
     0x1.da5742p-70f, 0.0f, 0x1.266ff4p-42f, 0.0f, 0x1.a44352p-106f, 0.0f,
     0x1.407096p-114f, 0x1.d31cdap-5f, 0x1.a24f9ap-7f, 0.0f, 0x1.2b5edap-34f,
     0x1.809988p-86f, 0x1.05ffe8p-30f, 0.0f, 0x1.ea98e2p-54f, 0x1.33b65cp-113f,
     0x1.f0ce22p-52f, 0.0f, 0x1.ff5c6p-94f, 0.0f, 0.0f, 0.0f, 0x1.fb818p-73f, 0.0f,
     0x1.88a94cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10180ep-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.764e4cp-77f, 0.0f, 0x1.1aa08ap-35f, 0.0f,
     0x1.5a2144p-96f, 0x1.abfa6ap-30f, 0x1.ba5b04p-66f, 0.0f, 0.0f, 0x1.342b64p-43f,
     0.0f, 0.0f, 0x1.dd3fd6p-85f, 0x1.4b0144p-6f, 0.0f, 0.0f, 0x1.794db8p-99f, 0.0f,
     0.0f, 0x1.e944aap-99f, 0x1.6860acp-118f, 0x1.2fd28cp-55f, 0x1.df63fp-31f, 0.0f,
     0.0f, 0x1.021ceep-106f, 0x1.5a3006p-59f, 0.0f, 0x1.244d24p-18f, 0x1.7b3458p-6f,
     0x1.498b2cp-122f, 0.0f, 0x1.7e5024p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d1b676p-110f, 0x1.170b68p-51f, 0.0f, 0x1.c8862cp-73f, 0.0f, 0.0f,
     0x1.8fb5ecp-124f, 0.0f, 0.0f, 0x1.0fdf5cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4b19aep-11f, 0x1.c87f02p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fba2a8p-72f, 0.0f, 0x1.c81d32p-67f, 0x1.499c02p-29f, 0.0f, 0x1.af6d0cp-80f,
     0x1.70c334p-105f, 0x1.8c30a6p-111f, 0x1.b2dbbp-7f, 0x1.0855cp-119f, 0.0f,
     0x1.5feb9ap-91f, 0.0f, 0x1.31b434p-73f, 0x1.c9b11cp-38f, 0.0f, 0x1.a0d95cp-90f,
     0.0f, 0.0f, 0x1.b62164p-5f, 0x1.dd67bap-79f, 0.0f, 0x1.337d28p-5f, 0.0f,
     0x1.ed0dd8p-41f, 0x1.afb28cp-31f, 0.0f, 0.0f, 0.0f, 0x1.762fb8p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e50acap-106f, 0.0f, 0x1.8db61ep-30f, 0x1.ca55d4p-107f,
     0x1.421fa4p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2df292p-62f, 0x1.63bf68p-9f, 0.0f,
     0x1.fda766p-57f, 0.0f, 0.0f, 0x1.06c0acp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8fc262p-32f, 0.0f, 0.0f, 0x1.e6d33p-119f, 0x1.c09976p-77f, 0.0f, 0.0f,
     0x1.72e9eap-23f, 0x1.67b3f4p-60f, 0x1.2f3dcap-71f, 0.0f, 0.0f, 0x1.2c5796p-60f,
     0x1.2266ep-47f, 0x1.bf6e06p-50f, 0x1.b54238p-59f, 0x1.c8c648p-8f, 0.0f,
     0x1.d71128p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.228128p-123f, 0x1.215384p-39f,
     0.0f, 0.0f, 0x1.a93078p-19f, 0x1.80c76ep-97f
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
            tmp1 = truncf(tmp0);
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
    printf("truncf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("truncf bench acc %a\n", global_bench_acc);
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
