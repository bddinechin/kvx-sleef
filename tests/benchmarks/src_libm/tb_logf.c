/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_logf.c --function logf --headers math.h,ml_support_lib.h \
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
     0x1.38e1b8p-36f, 0x1.5d9308p-62f, 0.0f, 0.0f, 0x1.364278p-96f, 0.0f,
     0x1.5124ap-34f, 0.0f, 0.0f, 0.0f, 0x1.c8d90ep-25f, 0x1.46a5eap-103f,
     0x1.ee830ep-13f, 0x1.110c72p-4f, 0x1.975eap-71f, 0x1.4d3f32p-77f,
     0x1.0580f4p-21f, 0.0f, 0.0f, 0.0f, 0x1.2ea522p-8f, 0.0f, 0x1.290c64p-17f, 0.0f,
     0.0f, 0.0f, 0x1.79785ap-64f, 0x1.0c63d4p-103f, 0x1.5de72p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e22c7ep-3f, 0x1.3e40fep-95f, 0x1.014db6p-62f, 0.0f,
     0x1.6bb556p-117f, 0x1.0fa524p-22f, 0x1.4822bap-13f, 0.0f, 0x1.87312p-121f, 0.0f,
     0.0f, 0x1.fc0c4cp-53f, 0x1.849d04p-97f, 0x1.1fbbc8p-79f, 0.0f, 0.0f,
     0x1.57e8cap-56f, 0.0f, 0x1.e07c3cp-98f, 0.0f, 0.0f, 0.0f, 0x1.0000f2p-46f,
     0x1.67829ap-112f, 0x1.3b27p-5f, 0.0f, 0.0f, 0x1.a08ae8p-11f, 0.0f,
     0x1.182d42p-35f, 0x1.afd464p-47f, 0.0f, 0.0f, 0x1.b0364ep-100f, 0.0f,
     0x1.45dd2p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52f70ap-63f, 0.0f, 0x1.eca99ep-69f,
     0.0f, 0x1.75a126p-54f, 0.0f, 0x1.413af6p-118f, 0.0f, 0x1.63c9ep-93f, 0.0f,
     0x1.f2e302p-74f, 0x1.373112p-69f, 0x1.472c5p-105f, 0.0f, 0.0f, 0.0f,
     0x1.19466ep-107f, 0x1.b682c6p-116f, 0.0f, 0x1.efb99ap-72f, 0x1.15a864p-42f,
     0x1.37bf8ap-91f, 0.0f, 0x1.8df34ep-29f, 0x1.56bb8ep-36f, 0x1.30e42cp-79f,
     0x1.5e06c6p-80f, 0.0f, 0x1.fbecf4p-14f, 0.0f, 0.0f, 0x1.539efp-57f,
     0x1.1da8e4p-21f, 0x1.1b916ep-58f, 0x1.bcd73ep-21f, 0x1.a3997ep-4f,
     0x1.979c6ep-46f, 0x1.b49a06p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80c0a2p-19f, 0x1.5a2944p-33f, 0x1.73a5d2p-121f, 0x1.6d63d6p-50f,
     0x1.204c58p-54f, 0x1.810386p-123f, 0.0f, 0.0f, 0x1.68b444p-109f, 0x1.0d0d6cp-44f,
     0.0f, 0x1.39b5dep-32f, 0x1.2f56f4p-39f, 0.0f, 0.0f, 0x1.9ae6d8p-27f,
     0x1.8881aep-50f, 0x1.a11304p-94f, 0x1.83746cp-109f, 0x1.af190cp-23f, 0.0f, 0.0f,
     0x1.d7283cp-115f, 0.0f, 0.0f, 0x1.a6e9e2p-45f, 0x1.6dcc3p-53f, 0x1.4bcdecp-107f,
     0x1.9aa406p-124f, 0x1.e00c36p-60f, 0x1.169a32p-52f, 0x1.63bd4ep-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c0e5cp-87f, 0x1.221d5ap-62f, 0x1.39d7dap-1f,
     0x1.ac3f8ep-69f, 0x1.160618p-57f, 0.0f, 0x1.7ac54cp-92f, 0x1.097342p-110f, 0.0f,
     0x1.3ed85ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0752d4p-123f, 0x1.e910b8p-54f,
     0x1.64d89ap-65f, 0x1.c932b6p-116f, 0.0f, 0x1.f3da0cp-2f, 0x1.dbde1cp-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f7f126p-117f, 0x1.9ea226p-105f, 0.0f, 0.0f, 0.0f,
     0x1.ea9106p-81f, 0.0f, 0.0f, 0.0f, 0x1.f49fdp-74f, 0x1.a3d3eep-125f,
     0x1.02e076p-125f, 0x1.b8394p-119f, 0x1.699d14p-50f, 0x1.1d17e6p-124f, 0.0f,
     0x1.4c4f04p-20f, 0.0f, 0x1.9818a4p-77f, 0x1.db752cp-108f, 0x1.0719e8p-110f, 0.0f,
     0x1.7f9174p-27f, 0x1.7e82acp-38f, 0.0f, 0.0f, 0x1.6a80b4p-33f, 0x1.7718acp-65f,
     0x1.b7d1d2p-27f, 0x1.179378p-70f, 0x1.e6da82p-82f, 0x1.cf13d4p-69f, 0.0f,
     0x1.882392p-126f, 0.0f, 0x1.a01374p-86f, 0.0f, 0.0f, 0.0f, 0x1.c2b5ccp-20f,
     0x1.ba7068p-107f, 0.0f, 0x1.18770ep-14f, 0x1.a3344ep-95f, 0.0f, 0x1.140b6cp-74f,
     0x1.42ecd2p-30f, 0x1.718832p-25f, 0x1.aa5ac4p-30f, 0x1.24abd6p-2f, 0.0f, 0.0f,
     0x1.c1dc4cp-80f, 0x1.b96b78p-27f, 0x1.4a3ceep-19f, 0x1.d393bap-109f,
     0x1.973b9ap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e86d4p-92f, 0.0f, 0x1.fdba1ep-73f,
     0x1.54e1ap-93f, 0.0f, 0.0f, 0x1.1da86p-44f, 0x1.b66eaep-45f, 0.0f,
     0x1.c99e18p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e6066p-58f, 0x1.359da6p-6f, 0.0f,
     0.0f, 0.0f, 0x1.7da606p-16f, 0x1.f16582p-78f, 0.0f, 0x1.bbaa62p-15f, 0.0f,
     0x1.a3ed54p-15f, 0x1.ad6d36p-30f, 0x1.d4903ep-15f, 0x1.aa2904p-23f, 0.0f,
     0x1.8f558p-20f, 0x1.2c311ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aeb59ap-116f, 0x1.036e7ap-54f, 0x1.37526ep-89f, 0x1.2574d2p-35f,
     0x1.fdc3fp-42f, 0x1.b13c08p-91f, 0x1.1a6d9cp-115f, 0.0f, 0.0f, 0x1.d66eep-116f,
     0.0f, 0x1.ab8b82p-114f, 0x1.3cfc4ap-3f, 0.0f, 0.0f, 0x1.e5de78p-92f, 0.0f, 0.0f,
     0.0f, 0x1.29686p-63f, 0.0f, 0.0f, 0x1.0b4b9p-43f, 0x1.8f5aep-90f,
     0x1.7ecd46p-46f, 0x1.ad8f44p-17f, 0.0f, 0.0f, 0.0f, 0x1.f27178p-94f, 0.0f,
     0x1.d93cbp-28f, 0.0f, 0x1.600e12p-14f, 0.0f, 0.0f, 0x1.b91bb4p-16f,
     0x1.2b9cf4p-115f, 0.0f, 0.0f, 0x1.245be6p-49f, 0.0f, 0x1.9eabd2p-113f, 0.0f,
     0x1.a32264p-83f, 0x1.be57aap-89f, 0x1.f4fe62p-7f, 0x1.52035cp-103f,
     0x1.bb5b52p-47f, 0x1.d4437ep-22f, 0x1.6e2a3ap-118f, 0.0f, 0.0f, 0x1.0436dep-25f,
     0x1.17306ap-55f, 0x1.bd5b56p-12f, 0.0f, 0x1.48984ap-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d50f8p-8f, 0.0f, 0.0f, 0x1.4bb8ecp-106f, 0x1.5c83f6p-45f, 0.0f,
     0x1.6ab2ecp-39f, 0x1.87ac0cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.773ca6p-77f,
     0x1.9dadbep-94f, 0x1.9d6ec8p-81f, 0x1.daefd2p-13f, 0.0f, 0x1.7d8026p-95f,
     0x1.7cd276p-65f, 0x1.912bap-122f, 0x1.54e658p-99f, 0x1.0086f2p-32f, 0.0f,
     0x1.759ba2p-55f, 0x1.4e975ep-19f, 0.0f, 0.0f, 0.0f, 0x1.41f494p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0b4118p-34f, 0x1.92f2b6p-28f, 0x1.bd6c4cp-114f, 0x1.88480cp-35f,
     0x1.3b73f6p-66f, 0x1.28422p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d93fecp-89f,
     0x1.3c9fbcp-52f, 0.0f, 0x1.df0c7ap-42f, 0.0f, 0.0f, 0.0f, 0x1.b5f10cp-106f,
     0x1.88da82p-6f, 0x1.17d698p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e4b3ep-116f,
     0x1.68c3acp-15f, 0.0f, 0.0f, 0x1.0e2f74p-10f, 0x1.135502p-38f, 0x1.ec3a5p-58f,
     0x1.1e1238p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bb402p-126f, 0x1.2e32p-96f,
     0x1.4a8016p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.556d98p-50f, 0x1.f32264p-13f, 0.0f,
     0.0f, 0.0f, 0x1.0c3de6p-23f, 0x1.1fbe5ap-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38352ap-42f, 0x1.105b4p-85f, 0x1.9536d8p-115f, 0.0f, 0x1.3bdd76p-82f,
     0x1.3cb2b8p-23f, 0x1.25ef98p-17f, 0.0f, 0x1.33b94p-13f, 0.0f, 0x1.5d72fap-84f,
     0x1.943078p-109f, 0.0f, 0x1.c33fe4p-4f, 0x1.81be1ep-93f, 0x1.a31764p-6f,
     0x1.b90572p-114f, 0x1.f49554p-84f, 0.0f, 0x1.fdc4p-112f, 0x1.8af0e2p-22f, 0.0f,
     0x1.6409dp-122f, 0x1.af7dc8p-68f, 0x1.b7751cp-30f, 0x1.6a3f56p-76f,
     0x1.c29dc8p-96f, 0x1.815b9cp-6f, 0x1.3187cp-22f, 0x1.5948a8p-3f, 0.0f,
     0x1.059e28p-10f, 0.0f, 0x1.c58b9p-124f, 0.0f, 0x1.5911b4p-64f, 0x1.b71fe2p-94f,
     0x1.49881ep-61f, 0x1.488314p-79f, 0.0f, 0x1.f244c6p-22f, 0.0f, 0.0f,
     0x1.dadc68p-90f, 0x1.855768p-35f, 0.0f, 0x1.25ef7p-122f, 0x1.358c4ep-97f,
     0x1.dafd38p-38f, 0x1.52ce8p-118f, 0.0f, 0.0f, 0.0f, 0x1.1358eep-10f, 0.0f,
     0x1.ffd4fep-23f, 0.0f, 0.0f, 0x1.5a9576p-99f, 0.0f, 0.0f, 0x1.9f844ap-122f,
     0x1.74fda8p-20f, 0x1.176d6ap-16f, 0.0f, 0x1.5099aep-29f, 0x1.2d94a8p-31f,
     0x1.edd50ep-55f, 0x1.a53bf4p-113f, 0x1.f330a2p-40f, 0x1.edcb6p-50f, 0.0f, 0.0f,
     0x1.b660eep-69f, 0.0f, 0x1.8a07f6p-48f, 0x1.4b190ep-97f, 0.0f, 0x1.47297ep-89f,
     0x1.34a692p-74f, 0.0f, 0.0f, 0x1.0160fap-26f, 0x1.717e2ep-118f, 0x1.85893cp-30f,
     0x1.95a694p-118f, 0.0f, 0.0f, 0.0f, 0x1.a6df5ap-57f, 0x1.8bcf54p-62f, 0.0f,
     0x1.db9bbp-118f, 0.0f, 0.0f, 0x1.746e92p-79f, 0.0f, 0.0f, 0x1.1c6666p-16f, 0.0f,
     0.0f, 0.0f, 0x1.384906p-73f, 0x1.26642p-46f, 0.0f, 0.0f, 0.0f, 0x1.df353cp-112f,
     0.0f, 0x1.19894p-86f, 0.0f, 0x1.ae542cp-33f, 0.0f, 0.0f, 0x1.d5fa9ap-12f,
     0x1.a3758cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6ea88p-92f, 0x1.cea98cp-20f,
     0x1.191602p-110f, 0x1.57da44p-43f, 0x1.912f14p-60f, 0x1.6f3a54p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3f92f6p-6f, 0.0f, 0.0f, 0x1.023f5ep-8f, 0.0f,
     0x1.4f3feep-97f, 0x1.d33a6ap-77f, 0x1.b6f0f6p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.452b7ep-90f, 0x1.24198cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15d0fcp-110f,
     0x1.744286p-123f, 0x1.58699ep-118f, 0x1.117414p-41f, 0.0f, 0x1.73eef2p-119f,
     0x1.aa28a2p-91f, 0.0f, 0x1.0b3ee2p-4f, 0.0f, 0x1p0f, 0.0f, 0x1.57b3ap-126f, 0.0f,
     0x1.73d6c4p-95f, 0.0f, 0x1.a3b45cp-16f, 0.0f, 0.0f, 0x1.43e73ep-116f, 0.0f, 0.0f,
     0x1.63039cp-68f, 0.0f, 0x1.c73502p-104f, 0.0f, 0x1.648ee2p-90f, 0.0f, 0.0f,
     0x1.f58c4cp-70f, 0.0f, 0.0f, 0.0f, 0x1.ff54bep-74f, 0.0f, 0x1.7ef356p-72f,
     0x1.1c72aep-44f, 0x1.b17578p-68f, 0.0f, 0.0f, 0x1.3019p-121f, 0.0f,
     0x1.f70506p-48f, 0.0f, 0.0f, 0x1.7c515ap-11f, 0.0f, 0x1.72c4fcp-62f,
     0x1.410fbap-76f, 0.0f, 0x1.182ddep-99f, 0.0f, 0x1.05608ep-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.69246p-89f, 0.0f, 0.0f, 0x1.5300ap-11f, 0x1.d4093cp-74f,
     0x1.d5fa5ap-68f, 0.0f, 0x1.8cd13ap-9f, 0.0f, 0x1.7d0a64p-92f, 0.0f, 0.0f,
     0x1.a2de2cp-114f, 0.0f, 0.0f, 0x1.2147a4p-68f, 0x1.5ef34ap-119f, 0x1.45b172p-92f,
     0x1.2d7c7p-90f, 0x1.f6c008p-88f, 0.0f, 0.0f, 0x1.0d6d52p-17f, 0x1.30a448p-75f,
     0x1.7828a4p-12f, 0x1.0200b2p-110f, 0x1.ca1adcp-110f, 0.0f, 0x1.0f5f76p-79f, 0.0f,
     0x1.d14a5cp-4f, 0.0f, 0.0f, 0x1.c17696p-82f, 0.0f, 0.0f, 0x1.3533aep-57f, 0.0f,
     0.0f, 0.0f, 0x1.920bbcp-65f, 0x1.f54c58p-75f, 0.0f, 0x1.acf98ap-84f, 0.0f, 0.0f,
     0x1.3e3b7p-33f, 0.0f, 0.0f, 0x1.5f0e02p-5f, 0.0f, 0x1p0f, 0x1.7a1318p-74f, 0.0f,
     0.0f, 0x1.2608bp-103f, 0.0f, 0.0f, 0x1.8955eap-17f, 0x1.9a4242p-38f, 0.0f, 0.0f,
     0x1.e7307cp-125f, 0.0f, 0.0f, 0x1.23d0d2p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce08ep-78f, 0x1.d3cf7cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bbb0ap-98f, 0.0f,
     0x1.fab5c4p-125f, 0.0f, 0.0f, 0x1.ee7f4ap-25f, 0.0f, 0.0f, 0.0f,
     0x1.b1b1b4p-125f, 0x1.3994a2p-11f, 0x1.ca018ap-102f, 0x1.f8d09cp-55f,
     0x1.10e0a2p-117f, 0x1.2b09dcp-9f, 0x1.ed3e5ep-34f, 0x1.8d0ceep-123f,
     0x1.4c2c14p-5f, 0.0f, 0x1.72cba4p-40f, 0x1.17031ep-87f, 0.0f, 0x1.fda78ap-84f,
     0.0f, 0.0f, 0x1.eded82p-42f, 0x1.e7e142p-25f, 0x1.ba49dcp-60f, 0x1.1ffe74p-108f,
     0.0f, 0x1.7e8fbcp-42f, 0x1.12103ep-48f, 0.0f, 0x1.0ddee4p-96f, 0.0f,
     0x1.edd84p-84f, 0x1.bf91a4p-72f, 0x1.d66008p-98f, 0x1.555f8cp-60f,
     0x1.c9f61ep-95f, 0.0f, 0x1.6a98a4p-24f, 0.0f, 0x1.3c472p-2f, 0x1.b53efp-48f,
     0x1.9e7ed6p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1513dp-28f, 0x1.995758p-75f,
     0x1.e03fc4p-121f, 0x1.316dcp-114f, 0.0f, 0.0f, 0x1.83959cp-87f, 0x1.745d38p-44f,
     0x1.1d1ceep-69f, 0.0f, 0x1.2c92b4p-11f, 0.0f, 0x1.9976d6p-89f, 0.0f,
     0x1.e02806p-79f, 0x1.a2eb8p-16f, 0x1.62c77p-102f, 0.0f, 0.0f, 0x1.b03aaap-21f,
     0.0f, 0.0f, 0x1.5a75cap-46f, 0x1p0f, 0x1.1b7f94p-5f, 0.0f, 0x1.531daap-98f,
     0x1.6093a2p-2f, 0x1.f1d17ep-49f, 0.0f, 0.0f, 0.0f, 0x1.3e3bfap-104f,
     0x1.0cf848p-117f, 0.0f, 0.0f, 0x1.79072cp-13f, 0.0f, 0x1.312f84p-102f, 0.0f,
     0x1.512d7ep-19f, 0.0f, 0x1.f6076ep-10f, 0.0f, 0x1.a569d4p-17f, 0.0f, 0.0f,
     0x1.c22b5p-41f, 0x1.3d404ep-121f, 0x1.f0ea3ap-35f, 0x1.398caap-82f, 0.0f, 0.0f,
     0x1.ad4ba8p-86f, 0.0f, 0.0f, 0x1.98836ep-16f, 0.0f, 0x1.2de1a8p-92f, 0.0f,
     0x1.4f566cp-55f, 0x1.302e5ap-46f, 0.0f, 0x1.cd4a4ap-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f1e5ecp-109f, 0.0f, 0x1.66ec3ap-60f, 0.0f, 0.0f, 0x1.7082ap-112f, 0.0f,
     0.0f, 0x1.39b30cp-123f, 0x1.893ccp-103f, 0.0f, 0x1.5754d2p-35f, 0x1.a518d8p-48f,
     0.0f, 0.0f, 0x1.94ff5ep-60f, 0.0f, 0x1.fc4856p-121f, 0x1.da7c22p-3f, 0.0f,
     0x1.d2b6ccp-79f, 0.0f, 0.0f, 0.0f, 0x1.7d757cp-63f, 0.0f, 0x1.7514f8p-109f, 0.0f,
     0x1.c8dd7cp-88f, 0x1.f0d5e4p-111f, 0.0f, 0x1.f43dacp-94f, 0x1.a29c88p-29f,
     0x1.e8fe1cp-116f, 0.0f, 0.0f, 0x1.8fb2fcp-90f, 0x1.5449d2p-20f, 0x1.1a7f4cp-45f,
     0x1.089188p-81f, 0x1.9c96cep-71f, 0x1.4ab414p-57f, 0.0f, 0x1.f67cc4p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3207d6p-65f, 0.0f, 0x1.c2497p-105f, 0.0f, 0.0f, 0.0f,
     0x1.d3cb34p-21f, 0.0f, 0x1.313d1cp-100f, 0x1.a421f8p-90f, 0x1.d821bp-71f,
     0x1.269206p-22f, 0.0f, 0x1.a1c1b6p-72f, 0.0f, 0x1.979e5p-99f, 0x1.ae16fp-46f,
     0.0f, 0.0f, 0x1.0ef134p-23f, 0.0f, 0x1.f66ba6p-70f, 0x1.11a6dp-24f,
     0x1.c057cp-10f, 0.0f, 0.0f, 0x1.ec99cp-96f, 0.0f, 0x1.57f81cp-24f,
     0x1.55a4a2p-105f, 0.0f, 0.0f, 0.0f, 0x1.09854cp-75f, 0.0f, 0x1.678e8ap-38f,
     0x1.f5a28ap-32f, 0x1.0c26fap-106f, 0x1.533ff8p-120f, 0x1.1fbecp-92f,
     0x1.3cbc72p-27f, 0x1.50a05ep-44f, 0.0f, 0x1.0b2b54p-126f, 0x1.2ba878p-28f,
     0x1.4749cep-123f, 0x1.634e3ap-66f, 0.0f, 0x1.73d2c8p-78f, 0.0f, 0.0f, 0.0f,
     0x1.5585dcp-5f, 0.0f, 0.0f, 0x1.58ca74p-20f, 0.0f, 0x1.478eacp-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b2f68p-22f, 0x1.896dfcp-43f, 0x1.0177cp-48f,
     0x1.3a6bbap-31f, 0.0f, 0x1.68f0bcp-81f, 0.0f, 0x1.3ae856p-2f, 0.0f, 0.0f, 0.0f,
     0x1.2fac54p-14f, 0.0f, 0x1.e1efep-122f, 0.0f, 0.0f, 0x1.4c3a7cp-60f, 0.0f,
     0x1.ee96dep-40f, 0.0f, 0.0f, 0.0f, 0x1.7a62e6p-107f, 0x1.3c3ba8p-95f,
     0x1.ac741cp-119f, 0x1.1c793p-120f, 0x1.91735cp-118f, 0x1.733c3ap-28f, 0.0f, 0.0f,
     0x1.bb075p-24f, 0x1.c4b324p-120f, 0.0f, 0.0f, 0x1.75e7e2p-80f, 0x1.b9577ep-21f,
     0.0f, 0.0f, 0.0f, 0x1.9c9c5p-77f, 0x1.0a995ep-52f, 0.0f, 0.0f, 0x1.a3922ap-43f,
     0.0f, 0.0f, 0.0f, 0x1.994864p-117f, 0x1.73cd0ep-107f, 0.0f, 0.0f
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
            tmp1 = logf(tmp0);
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
    printf("logf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("logf bench acc %a\n", global_bench_acc);
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
