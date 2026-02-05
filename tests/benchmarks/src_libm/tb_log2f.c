/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_log2f.c --function log2f --headers math.h,ml_support_lib.h \
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
     0x1.5a37a8p-78f, 0x1.9469ccp-27f, 0.0f, 0x1.a37fd4p-44f, 0.0f, 0x1.bf7f1ap-79f,
     0x1.4f069ep-108f, 0.0f, 0x1.93e396p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07fdf6p-1f,
     0x1.582c9p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8764cp-120f, 0.0f, 0.0f,
     0x1.29f796p-103f, 0x1.6678cep-31f, 0x1.fe5c0cp-4f, 0x1.e0af88p-24f, 0.0f,
     0x1.6ae2bep-68f, 0x1.ac0f44p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.341e4ap-14f,
     0x1.fdba5ep-53f, 0x1.a22796p-79f, 0.0f, 0x1.8ba218p-9f, 0x1.173a5ep-115f, 0.0f,
     0.0f, 0.0f, 0x1.f2c8c2p-49f, 0.0f, 0.0f, 0x1.093ea8p-34f, 0x1.a5e3b6p-7f, 0.0f,
     0x1.3b3e5ap-76f, 0x1.a4535ep-80f, 0.0f, 0.0f, 0x1.91242cp-83f, 0x1.e7a1f2p-37f,
     0x1.3a9696p-89f, 0x1.215f18p-29f, 0.0f, 0x1.f875e8p-110f, 0.0f, 0x1.7c3a1p-103f,
     0x1.14869cp-109f, 0x1.7ce356p-63f, 0x1.273aa8p-49f, 0x1.b638e4p-33f,
     0x1.2555f6p-45f, 0x1.f8c0aap-61f, 0x1.e0d5e4p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.261cc6p-12f, 0.0f, 0.0f, 0x1.c0ea36p-110f, 0.0f, 0.0f, 0.0f, 0x1.c5150ep-16f,
     0.0f, 0.0f, 0.0f, 0x1.1cfeb4p-54f, 0x1.47d4c4p-92f, 0x1.f21bb8p-81f, 0.0f, 0.0f,
     0x1.7bc7bp-52f, 0x1.4deb8cp-80f, 0.0f, 0.0f, 0x1.d73ed4p-55f, 0x1.b24ad8p-91f,
     0.0f, 0x1.7d3be2p-120f, 0.0f, 0x1.8df85ep-29f, 0x1.214534p-110f, 0x1.054486p-32f,
     0x1.5620dap-98f, 0x1.bc282ap-58f, 0.0f, 0.0f, 0x1.1b2434p-36f, 0.0f, 0.0f,
     0x1.e511b6p-28f, 0x1.523a2p-108f, 0x1.004518p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b972bp-69f, 0x1.d02a08p-55f, 0.0f, 0x1.8b541ap-3f, 0.0f, 0x1.2a0244p-27f,
     0x1.62a0f2p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f011p-65f, 0x1.98613p-9f, 0.0f,
     0.0f, 0x1.ad540ap-84f, 0x1.2d264ep-76f, 0.0f, 0x1.a46ca6p-84f, 0.0f, 0.0f,
     0x1.733052p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbb14ap-103f, 0.0f,
     0x1.4c4496p-18f, 0x1.29c814p-96f, 0x1.fc6542p-77f, 0x1.45a858p-97f,
     0x1.d3ecb2p-42f, 0.0f, 0x1.81010ep-17f, 0x1.67e14cp-116f, 0.0f, 0.0f, 0.0f,
     0x1.4646fp-49f, 0.0f, 0x1.cb6e78p-16f, 0x1.5bc28ep-91f, 0x1.f119e2p-23f,
     0x1.28b7b8p-113f, 0.0f, 0x1.8319p-124f, 0x1.ca7274p-1f, 0x1.38adcap-84f,
     0x1.d3fde6p-57f, 0x1.cde8ccp-57f, 0x1.c2eaa4p-124f, 0x1.413116p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.915188p-59f, 0x1.1d78cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5491ap-35f, 0x1.9eafbep-49f, 0.0f, 0x1.ed3d86p-120f, 0x1.df3caap-64f,
     0x1.355a2cp-70f, 0.0f, 0.0f, 0.0f, 0x1.ed639cp-76f, 0x1.3cbe44p-30f, 0.0f, 0.0f,
     0x1.08d108p-98f, 0.0f, 0.0f, 0.0f, 0x1.cd43cep-112f, 0x1.7b0a94p-32f,
     0x1.e9110cp-87f, 0x1.10da96p-91f, 0.0f, 0.0f, 0x1.08ec58p-50f, 0.0f,
     0x1.4a7582p-56f, 0x1.b581bap-119f, 0x1.d2325ep-100f, 0x1.98c546p-26f, 0.0f, 0.0f,
     0x1.8b74a8p-58f, 0.0f, 0x1.ba83c4p-64f, 0x1.ceece4p-124f, 0x1.83de8cp-13f,
     0x1.7aa8b8p-75f, 0.0f, 0.0f, 0.0f, 0x1.c7a8cep-12f, 0x1.7dccc2p-44f, 0.0f, 0.0f,
     0.0f, 0x1.70e092p-79f, 0.0f, 0.0f, 0x1.77eafap-42f, 0.0f, 0x1.aed222p-79f,
     0x1.09caf8p-27f, 0x1.30fdf8p-18f, 0x1.5767c8p-109f, 0.0f, 0.0f, 0x1.76e328p-115f,
     0.0f, 0.0f, 0x1.6b232p-125f, 0.0f, 0.0f, 0x1.5a91cep-93f, 0.0f, 0x1.4599fap-35f,
     0x1.b5ec7ap-85f, 0x1.cb472cp-124f, 0.0f, 0x1.eff048p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.751f88p-83f, 0.0f, 0x1.dd05b6p-76f, 0.0f, 0.0f, 0.0f, 0x1.832d82p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.648e5ep-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73d6cap-116f, 0x1.64c7cep-108f,
     0x1.8194acp-19f, 0x1.7af09ap-115f, 0x1.0bfaa6p-6f, 0x1.69d8ecp-51f, 0.0f, 0.0f,
     0.0f, 0x1.6c54e6p-6f, 0.0f, 0x1.607deep-32f, 0.0f, 0x1.308accp-115f, 0.0f,
     0x1.e42d3ap-41f, 0x1.aebf1p-59f, 0x1.e912eep-47f, 0.0f, 0.0f, 0x1.c98084p-111f,
     0.0f, 0x1.1099f4p-10f, 0.0f, 0.0f, 0x1.bfdf4p-97f, 0x1.b54168p-57f,
     0x1.70982ep-91f, 0.0f, 0.0f, 0x1.4532acp-7f, 0x1.91e716p-21f, 0x1.4b45d4p-95f,
     0.0f, 0.0f, 0x1.1a4ab8p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.176beep-21f, 0.0f, 0.0f, 0x1.c1787cp-68f, 0.0f, 0x1.9d9696p-12f,
     0x1.2eb822p-121f, 0.0f, 0.0f, 0.0f, 0x1.298f9cp-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11af74p-42f, 0x1.0b3dbcp-43f, 0x1.75a562p-17f, 0.0f, 0x1.90d548p-68f,
     0x1.25994cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a59b4p-90f, 0.0f, 0x1.710b0ap-61f,
     0.0f, 0.0f, 0x1.663612p-21f, 0.0f, 0.0f, 0x1.41152p-25f, 0.0f, 0x1.17154p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.875baep-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b82996p-99f, 0x1.d97e82p-56f, 0.0f, 0x1.75acc2p-35f, 0.0f, 0x1.3d96p-81f,
     0.0f, 0x1.528b0cp-47f, 0.0f, 0.0f, 0.0f, 0x1.92824ep-36f, 0x1.978dep-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5608fap-108f, 0.0f, 0x1.a7d14ep-93f, 0x1.770c3ep-3f,
     0x1.02f35p-77f, 0.0f, 0x1.f3a50ap-91f, 0.0f, 0x1.fb1918p-72f, 0x1.bf5d72p-47f,
     0x1.2b0fp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2434p-100f, 0.0f, 0.0f,
     0x1.4baa2p-39f, 0x1.b8bb4ep-111f, 0.0f, 0x1.c1ee82p-68f, 0.0f, 0x1.d8678ep-101f,
     0x1.dd245ap-55f, 0.0f, 0x1.e13ba6p-21f, 0x1.ce40cp-100f, 0.0f, 0.0f,
     0x1.cada68p-47f, 0x1.d2d7c6p-62f, 0.0f, 0x1.57f8eep-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.659b7ep-57f, 0.0f, 0x1.0c62f8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b84362p-11f,
     0.0f, 0.0f, 0.0f, 0x1.80daa2p-118f, 0x1.f8e53p-111f, 0.0f, 0x1.931fe8p-88f, 0.0f,
     0x1.d2248ap-99f, 0.0f, 0.0f, 0x1.b1619ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10c2b6p-32f, 0.0f, 0.0f, 0x1.d5ba5p-97f, 0x1.7c6652p-22f, 0x1.1617c2p-80f,
     0.0f, 0x1.70d52ep-120f, 0x1.b08f06p-50f, 0.0f, 0x1.d76b3ap-81f, 0.0f,
     0x1.f04d8p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a4ac4p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1e736p-23f, 0.0f, 0x1.da435ap-72f, 0.0f,
     0x1.660402p-51f, 0x1.055b78p-93f, 0.0f, 0x1.974016p-38f, 0.0f, 0.0f, 0.0f,
     0x1.fd43a8p-111f, 0.0f, 0x1.65d8c6p-2f, 0x1.5a53eap-57f, 0x1.321cf2p-77f,
     0x1.43dc22p-89f, 0x1.8979f8p-29f, 0x1.bbd8a6p-31f, 0x1.7f6148p-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05518ap-23f, 0.0f, 0x1.d2ec5ap-32f, 0.0f,
     0x1.c79b8ap-99f, 0.0f, 0x1.a865aap-62f, 0.0f, 0x1.58b1fp-7f, 0x1.6b369ep-51f,
     0x1.1ea93p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7696ap-91f, 0.0f,
     0x1.32476cp-35f, 0.0f, 0.0f, 0x1.f82434p-121f, 0x1.a01fcp-80f, 0.0f, 0.0f,
     0x1.d2a836p-82f, 0x1.e8b01ep-117f, 0.0f, 0.0f, 0x1.6ccf86p-46f, 0x1.132ba2p-77f,
     0x1.ea7a4p-29f, 0x1.7806bp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2bfdep-32f,
     0.0f, 0x1.09f0c4p-114f, 0x1.c491f6p-107f, 0x1.59d01cp-58f, 0x1.25bc5p-73f, 0.0f,
     0x1.128df2p-101f, 0x1.b998cp-5f, 0.0f, 0.0f, 0.0f, 0x1.38964p-29f,
     0x1.b9564cp-61f, 0x1.156d18p-8f, 0.0f, 0x1.3e1346p-30f, 0x1.80be06p-44f,
     0x1.31c7d6p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67127cp-6f, 0.0f, 0.0f, 0.0f,
     0x1.ede196p-50f, 0x1.3ca18p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8c2a6p-72f,
     0x1.cb08f6p-23f, 0x1.ae4a9p-59f, 0.0f, 0x1.ede10cp-76f, 0x1.328ddap-4f,
     0x1.99d54cp-22f, 0x1.3aff12p-21f, 0x1.0a40fep-59f, 0.0f, 0x1.620efcp-119f,
     0x1.be6a84p-73f, 0x1.5f86acp-44f, 0.0f, 0.0f, 0x1.4883c2p-97f, 0.0f,
     0x1.23a938p-92f, 0x1.ae69ap-103f, 0.0f, 0x1.dfe4ep-60f, 0.0f, 0x1.662ca2p-6f,
     0.0f, 0x1.a10f08p-42f, 0x1.ff89ep-64f, 0x1.210dfcp-36f, 0x1.e5785p-89f,
     0x1.4cbc4p-70f, 0x1.2b7d6cp-54f, 0x1.262b26p-76f, 0x1.16fd88p-94f,
     0x1.ec3d8cp-126f, 0x1.1b1ee8p-44f, 0.0f, 0x1.231894p-26f, 0.0f, 0x1.81300cp-9f,
     0x1.02346ap-90f, 0.0f, 0x1.186b16p-62f, 0x1.28470ep-118f, 0.0f, 0x1.f29bdcp-10f,
     0.0f, 0x1.a70c72p-5f, 0.0f, 0x1.389908p-100f, 0x1.a1ae68p-99f, 0x1.5987ccp-77f,
     0.0f, 0.0f, 0.0f, 0x1.b799a6p-27f, 0x1.b90ab6p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f207dep-76f, 0x1.d913b8p-10f, 0x1.99e21cp-103f, 0.0f, 0x1.0dc3eap-98f, 0.0f,
     0x1.5f5614p-99f, 0.0f, 0.0f, 0.0f, 0x1.1c244ep-90f, 0x1.8f709cp-76f, 0.0f,
     0x1.694b3p-112f, 0x1.e222fp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8eaaep-119f,
     0x1.62a7ap-23f, 0x1.d9d874p-31f, 0.0f, 0x1.e8fc8p-89f, 0x1.3c00ecp-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83fde4p-122f, 0.0f, 0x1.782a08p-35f, 0.0f, 0x1.d1c296p-65f,
     0x1.8418fep-116f, 0x1.8c8212p-25f, 0.0f, 0.0f, 0x1.39d5cep-106f, 0.0f, 0.0f,
     0x1.f43cep-19f, 0x1.bc9fe6p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7abdbap-47f, 0x1.f6188ap-5f, 0.0f, 0.0f, 0x1.be58acp-38f, 0.0f,
     0x1.2e0484p-63f, 0.0f, 0.0f, 0.0f, 0x1.9c7e38p-10f, 0.0f, 0x1.967216p-67f, 0.0f,
     0.0f, 0.0f, 0x1.f96632p-42f, 0.0f, 0.0f, 0x1.22213cp-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.701afap-40f, 0x1.acb3a8p-39f, 0x1.be3ap-73f, 0x1.8e1caep-54f,
     0x1.1f5cf6p-66f, 0.0f, 0.0f, 0x1.82db04p-73f, 0.0f, 0x1.7afb64p-86f,
     0x1.bcd25ep-1f, 0x1.6b074ap-66f, 0x1.4a6528p-79f, 0.0f, 0x1.890748p-115f,
     0x1.aba9aap-56f, 0.0f, 0x1.539026p-78f, 0.0f, 0x1.e52144p-104f, 0.0f,
     0x1.63610ap-75f, 0x1.f327b6p-116f, 0.0f, 0x1.a50ba6p-120f, 0.0f, 0x1.7c9b1cp-63f,
     0.0f, 0x1.e979b4p-94f, 0.0f, 0x1.ed59dp-85f, 0.0f, 0x1.d79d52p-62f, 0.0f,
     0x1.7df4dp-91f, 0.0f, 0x1.cfb288p-104f, 0x1.a0efeap-11f, 0.0f, 0x1.710adcp-63f,
     0.0f, 0x1.6bfd7cp-14f, 0x1.e5e1a6p-111f, 0x1.96bf86p-75f, 0x1.2e66c8p-6f,
     0x1.c44eeap-9f, 0.0f, 0.0f, 0.0f, 0x1.925a9ep-80f, 0.0f, 0x1.bbbcd6p-54f,
     0x1.e3b2ap-51f, 0.0f, 0.0f, 0x1.d66af4p-65f, 0.0f, 0.0f, 0x1.3f35fcp-92f,
     0x1.e0f006p-43f, 0.0f, 0x1.0ca5fp-95f, 0.0f, 0x1.753314p-114f, 0.0f,
     0x1.5f9f82p-105f, 0.0f, 0x1.0f98fp-59f, 0.0f, 0x1.725aecp-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9309aap-86f, 0x1.0f3e06p-47f, 0x1.a590bap-30f, 0.0f, 0.0f,
     0x1.7f3ecp-52f, 0x1.eafb84p-54f, 0x1.07751ep-73f, 0x1.efe20ep-78f,
     0x1.878098p-77f, 0.0f, 0.0f, 0x1.a5fed2p-88f, 0.0f, 0x1.4d809ep-108f, 0.0f, 0.0f,
     0.0f, 0x1.b291cp-3f, 0.0f, 0x1.613a46p-67f, 0x1.ddbebcp-54f, 0x1.1b6e96p-69f,
     0.0f, 0x1.e057a2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.013b0ep-31f,
     0x1.fd22c6p-79f, 0x1.fbdbe2p-103f, 0x1.181d78p-86f, 0x1.d8deb6p-98f, 0.0f,
     0x1.c4d32ep-58f, 0x1.3e650cp-74f, 0.0f, 0x1.887588p-6f, 0.0f, 0x1.a6175ap-111f,
     0x1.014dbap-101f, 0.0f, 0x1.57e114p-69f, 0x1.1ff2aap-97f, 0.0f, 0x1.67471cp-84f,
     0.0f, 0.0f, 0x1.5357fap-7f, 0.0f, 0x1.025656p-126f, 0x1.f56afap-113f, 0.0f,
     0x1.fbba9ep-121f, 0x1.160928p-126f, 0.0f, 0x1.808964p-70f, 0.0f, 0.0f,
     0x1.c1f124p-119f, 0.0f, 0x1.8bc41cp-93f, 0x1.6dbd8ap-54f, 0.0f, 0x1.f316c8p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.07e3e2p-25f, 0x1.d10b02p-57f, 0x1.724ddcp-109f,
     0x1.bd122cp-119f, 0.0f, 0.0f, 0.0f, 0x1.75a5e6p-72f, 0x1.10309ap-90f, 0.0f, 0.0f,
     0x1.d8d4eap-7f, 0x1.8c4822p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5711ecp-81f,
     0x1.95a1b6p-77f, 0x1.6fde5cp-10f, 0x1.9e097ap-15f, 0.0f, 0x1.03a7acp-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.96e156p-9f, 0x1.6cb6e4p-121f, 0.0f, 0.0f, 0.0f,
     0x1.18cd64p-15f, 0x1.1206cp-58f, 0x1.40bde2p-12f, 0.0f, 0.0f, 0.0f,
     0x1.84e3b4p-112f, 0.0f, 0x1.e45e8p-107f, 0.0f, 0.0f, 0x1.3f469cp-68f,
     0x1.f78ce2p-122f, 0.0f, 0.0f, 0x1.b158cap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37027cp-56f, 0.0f, 0.0f, 0.0f, 0x1.4de436p-121f, 0x1.5eb9b2p-122f,
     0x1.3234bp-38f, 0x1.4500ep-10f, 0x1.08062p-42f, 0.0f, 0.0f, 0x1.b7deacp-54f,
     0.0f, 0.0f, 0.0f, 0x1.946964p-26f, 0.0f, 0.0f, 0x1.432622p-16f, 0.0f,
     0x1.8ce16cp-125f, 0x1.666896p-37f, 0x1.968d26p-20f, 0.0f, 0x1.ef83b6p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9172ccp-37f, 0.0f, 0x1.9a1e58p-66f, 0x1.58b7ap-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b3361ap-65f, 0x1.782f38p-88f, 0x1.7f76e6p-53f,
     0x1.034ac4p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcf582p-14f, 0.0f, 0.0f,
     0x1.0dc31ap-120f, 0x1.902d22p-120f, 0x1.d79454p-77f, 0.0f, 0x1.dc8b38p-111f,
     0.0f, 0x1.715bacp-124f, 0x1.b015c2p-46f, 0.0f, 0.0f, 0.0f, 0x1.64c604p-84f, 0.0f,
     0.0f, 0x1.364b4cp-61f, 0x1.abaa88p-77f, 0x1.9cebbcp-49f, 0.0f, 0x1.716f06p-126f,
     0.0f, 0x1.fe2a4cp-13f, 0x1.6d64aap-74f, 0x1.a34e9cp-2f, 0x1.e05afcp-58f,
     0x1.7d8c54p-11f, 0x1.c0505p-109f, 0.0f, 0x1.028accp-65f, 0x1.66b3c4p-59f,
     0x1.8a032ep-1f, 0.0f, 0x1.13432cp-103f, 0x1.efa89ep-83f, 0.0f, 0.0f,
     0x1.cb382ep-16f, 0.0f, 0x1.8041dep-10f, 0x1.d4275ap-60f, 0x1.9d1b1cp-51f,
     0x1.07477ep-123f, 0.0f, 0.0f, 0x1.3a8336p-78f, 0x1.64a10ap-60f, 0.0f, 0.0f, 0.0f
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
            tmp1 = log2f(tmp0);
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
    printf("log2f %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("log2f bench acc %a\n", global_bench_acc);
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
