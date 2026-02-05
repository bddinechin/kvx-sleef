/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf1_u35purecfma.c --function \
 *     Sleef_finz_hypotf1_u35purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.4a0a3ap-76f, 0.0f, 0x1.7de6ap-22f, 0.0f, 0x1.417c32p-111f, 0.0f, 0.0f,
     0x1.0eb76ap-82f, 0x1.775884p-11f, 0.0f, 0.0f, 0x1.639cb4p-61f, 0x1.e4f4p-74f,
     0x1.2c318cp-80f, 0.0f, 0x1.f9b9a2p-77f, 0x1.758baap-105f, 0.0f, 0.0f, 0.0f,
     0x1.704492p-2f, 0.0f, 0x1.60b28ep-82f, 0.0f, 0x1.725674p-77f, 0.0f, 0.0f,
     0x1.c93d9cp-116f, 0.0f, 0x1.e08054p-123f, 0.0f, 0x1.52cfd6p-22f, 0x1.1aeebp-118f,
     0x1.51738ep-34f, 0x1.4b8aeep-66f, 0.0f, 0x1.e49bcap-103f, 0.0f, 0x1.447c9p-58f,
     0.0f, 0.0f, 0x1.044f4p-95f, 0.0f, 0.0f, 0x1.97b9d4p-36f, 0x1.098e4ep-118f, 0.0f,
     0x1.3b1ffap-76f, 0x1.a4583ep-85f, 0.0f, 0.0f, 0x1.446b56p-70f, 0.0f, 0.0f, 0.0f,
     0x1.30d9d8p-9f, 0x1.ee5dbap-63f, 0.0f, 0x1.62c2ep-94f, 0.0f, 0x1.ff1aeep-107f,
     0x1.49a772p-59f, 0x1.f6e566p-46f, 0x1.444316p-78f, 0x1.12909ep-80f,
     0x1.fd3a3ap-94f, 0.0f, 0x1.9e5b5ap-77f, 0.0f, 0.0f, 0x1.d49e96p-89f,
     0x1.a5deecp-12f, 0x1.b89c3ep-1f, 0x1.e50afp-87f, 0x1.495e4ep-7f,
     0x1.909034p-125f, 0.0f, 0x1.c5298p-81f, 0x1.f26fe2p-53f, 0.0f, 0.0f,
     0x1.fc74c4p-11f, 0x1.17def2p-49f, 0x1.9e61bp-125f, 0.0f, 0x1.743036p-1f,
     0x1.4c9fc6p-107f, 0.0f, 0x1.a6721cp-59f, 0.0f, 0.0f, 0x1.8cecbep-120f,
     0x1.56351cp-94f, 0.0f, 0x1.9ed898p-66f, 0x1.253062p-27f, 0x1.5a2b6p-59f, 0.0f,
     0x1.80f2f2p-121f, 0.0f, 0x1.f90712p-73f, 0x1.3d7efcp-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a82176p-12f, 0x1.58fba2p-88f, 0x1.f91148p-97f, 0x1p0f,
     0x1.98b192p-92f, 0.0f, 0x1.bdf41cp-46f, 0x1.ef4558p-80f, 0.0f, 0.0f, 0.0f,
     0x1.4bb4f8p-8f, 0.0f, 0x1.2dbbb6p-58f, 0x1.2b6e42p-32f, 0x1.a1f80ep-38f, 0.0f,
     0x1.f2d342p-60f, 0x1.a16ca2p-1f, 0.0f, 0x1.b23714p-7f, 0.0f, 0x1.83ed6cp-5f,
     0x1.cd5abp-83f, 0x1.f4e0e6p-2f, 0.0f, 0x1.2acb6ep-71f, 0x1.8973e2p-118f,
     0x1.0a544p-7f, 0.0f, 0.0f, 0x1.39342ep-48f, 0x1.d061bcp-53f, 0x1.705a56p-22f,
     0.0f, 0x1.1aa33ep-117f, 0x1.8d2934p-65f, 0.0f, 0.0f, 0x1.bd668ap-50f,
     0x1.12a046p-17f, 0x1.f88774p-78f, 0x1.683466p-84f, 0.0f, 0.0f, 0x1.501d4ep-24f,
     0x1.865438p-116f, 0x1.64750ap-9f, 0x1.8f078ap-7f, 0.0f, 0.0f, 0x1.3eeb3cp-93f,
     0x1.77d518p-34f, 0x1.120a94p-112f, 0x1.93c182p-97f, 0x1.855fc6p-104f, 0.0f,
     0x1.0d031ap-59f, 0.0f, 0x1.182d3p-120f, 0.0f, 0x1.d9e636p-106f, 0x1.b07342p-12f,
     0.0f, 0x1.ca649ep-83f, 0x1.3dcaaap-27f, 0x1.b50594p-46f, 0x1.beafdp-54f,
     0x1.b9a756p-20f, 0x1.5ef084p-39f, 0x1.6e46fp-4f, 0x1.82b12cp-37f, 0x1.358628p-9f,
     0.0f, 0.0f, 0x1.f0f0f2p-53f, 0.0f, 0.0f, 0x1.c5c836p-123f, 0.0f, 0x1.1dcf34p-23f,
     0x1.08e55p-45f, 0x1.c04abcp-125f, 0.0f, 0x1.10e5f8p-92f, 0.0f, 0.0f,
     0x1.4257f4p-105f, 0x1.4508ccp-44f, 0x1.bb5c1ap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a7668p-58f, 0x1.a5657ep-21f, 0x1.0acb5ap-34f,
     0x1.2769c4p-80f, 0x1.1374f4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bbcfcp-5f,
     0x1.83949ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.537838p-105f, 0.0f, 0x1.313982p-61f,
     0x1.487bfcp-9f, 0.0f, 0.0f, 0x1.bc8a1ep-122f, 0x1.d1ba84p-33f, 0x1.cd65d6p-86f,
     0.0f, 0.0f, 0x1.13621p-125f, 0x1.b6097ap-70f, 0x1.c5238ap-74f, 0x1.82dccep-103f,
     0.0f, 0.0f, 0.0f, 0x1.4fbfcp-90f, 0.0f, 0.0f, 0.0f, 0x1.383fb4p-115f,
     0x1.9d08aep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87a51ep-75f, 0x1.3042bp-33f,
     0x1.955796p-118f, 0.0f, 0.0f, 0.0f, 0x1.3c6ec6p-123f, 0x1.ad760ap-66f, 0.0f,
     0.0f, 0x1.90daa2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.360d46p-66f, 0.0f,
     0x1.d3280ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28d16ep-40f, 0x1.ce6c2p-106f,
     0x1.01b48ap-54f, 0.0f, 0.0f, 0x1.105a6cp-93f, 0x1.54ac5p-56f, 0x1.266804p-105f,
     0.0f, 0x1.23d47p-51f, 0.0f, 0x1.cd1f44p-120f, 0.0f, 0x1.2c85dap-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9977b4p-22f, 0.0f, 0.0f, 0x1.7d8bd8p-115f,
     0x1.b7d6ecp-14f, 0.0f, 0x1.5d63fap-119f, 0.0f, 0x1.8c5a7ep-108f, 0.0f,
     0x1.8814bp-57f, 0x1.491046p-66f, 0.0f, 0x1.f53a06p-29f, 0x1.c663e4p-109f, 0.0f,
     0x1.cbe134p-24f, 0x1.7001a4p-14f, 0x1.96ee58p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5895ecp-120f, 0x1.846bcap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18901cp-40f,
     0x1.8db40ep-3f, 0.0f, 0.0f, 0.0f, 0x1.8cdab8p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9ebc2p-21f, 0.0f, 0x1.2ed298p-24f, 0x1.94bc84p-13f, 0x1.8f2d14p-108f,
     0x1.9501b4p-120f, 0.0f, 0x1.048352p-70f, 0.0f, 0.0f, 0x1.50d92ap-125f,
     0x1.619a16p-109f, 0.0f, 0.0f, 0x1.5b15c2p-64f, 0x1.e57e5p-113f, 0x1.c92614p-1f,
     0x1.c875f6p-22f, 0.0f, 0x1.0bf346p-16f, 0.0f, 0.0f, 0x1.bf7272p-92f,
     0x1.91439cp-117f, 0.0f, 0.0f, 0.0f, 0x1.975fdp-90f, 0.0f, 0.0f, 0x1.0b21a4p-97f,
     0x1.9cbebcp-95f, 0.0f, 0x1.f74a6p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.536132p-119f,
     0x1.e1161cp-123f, 0x1.17565p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.203542p-56f,
     0x1.1f57eep-93f, 0.0f, 0.0f, 0.0f, 0x1.e13f4ep-101f, 0.0f, 0.0f, 0.0f,
     0x1.7febf4p-21f, 0x1.b23144p-63f, 0x1.c6ce4cp-75f, 0.0f, 0x1.a60908p-47f, 0.0f,
     0x1.153422p-8f, 0x1.ce1df8p-11f, 0.0f, 0x1.0814f8p-21f, 0x1.9ffa22p-111f,
     0x1.bbb58ap-42f, 0.0f, 0.0f, 0x1.3ac984p-35f, 0x1.e2a1b4p-62f, 0x1.d7ce44p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a27a4p-67f, 0x1.240424p-96f,
     0.0f, 0.0f, 0x1.7342dcp-91f, 0.0f, 0.0f, 0.0f, 0x1.12a8d8p-30f, 0.0f,
     0x1.c9beecp-52f, 0.0f, 0.0f, 0.0f, 0x1.ad97ecp-55f, 0.0f, 0x1.00056cp-82f, 0.0f,
     0.0f, 0x1.a01914p-104f, 0x1.8dfec8p-66f, 0.0f, 0.0f, 0x1.ec9288p-68f,
     0x1.d8d47ep-66f, 0.0f, 0x1.fc9aap-123f, 0x1.afbf3cp-88f, 0x1.39179p-35f, 0.0f,
     0.0f, 0.0f, 0x1.dd9b3ap-104f, 0.0f, 0x1.9e4c7cp-32f, 0.0f, 0x1.7bf5d6p-72f, 0.0f,
     0x1.be4ec6p-25f, 0.0f, 0.0f, 0.0f, 0x1.b50d5ap-25f, 0x1.543096p-43f, 0.0f, 0.0f,
     0x1.77ca1ep-29f, 0.0f, 0x1.bff65ap-124f, 0.0f, 0.0f, 0.0f, 0x1.02d808p-83f, 0.0f,
     0.0f, 0x1.127f1ap-108f, 0x1.1cdccap-39f, 0x1.bc702cp-19f, 0x1.546ceap-42f,
     0x1.006196p-14f, 0x1.864598p-64f, 0x1.8c4bc8p-11f, 0x1.5a9968p-18f, 0.0f,
     0x1.7cbaf8p-28f, 0.0f, 0x1.2aa3fap-108f, 0x1.24718p-100f, 0x1.71c8aap-47f, 0.0f,
     0x1.5ecf1ep-54f, 0.0f, 0x1.b1d6b6p-44f, 0.0f, 0.0f, 0x1.aa991cp-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.888708p-49f, 0.0f, 0x1.800b1ap-110f, 0.0f, 0x1.e37b92p-120f,
     0x1.4b2f64p-105f, 0x1.1e33ep-113f, 0.0f, 0x1.96db9cp-22f, 0.0f, 0x1.5354bap-73f,
     0x1.a78c18p-23f, 0.0f, 0.0f, 0x1.3f064ep-94f, 0x1.aad018p-52f, 0.0f, 0x1p0f,
     0x1.d4046p-103f, 0.0f, 0x1.0ab73p-77f, 0.0f, 0x1.b863e4p-67f, 0.0f, 0.0f,
     0x1.c24aep-83f, 0.0f, 0x1.42daa2p-66f, 0.0f, 0.0f, 0.0f, 0x1.3140eap-15f, 0.0f,
     0x1.064f76p-23f, 0.0f, 0.0f, 0x1.fccbccp-85f, 0.0f, 0.0f, 0x1.d54282p-30f, 0.0f,
     0x1.5408d8p-74f, 0.0f, 0x1.4d1c8ep-51f, 0.0f, 0x1.d9aed8p-69f, 0x1.8de10ap-1f,
     0x1.1c8fd6p-85f, 0.0f, 0x1.618f04p-27f, 0.0f, 0x1.3cc688p-50f, 0.0f,
     0x1.73d714p-47f, 0.0f, 0x1.3fd66ep-14f, 0x1.4b391p-14f, 0.0f, 0.0f,
     0x1.8da46p-21f, 0x1.58e9d2p-44f, 0x1.197b94p-98f, 0.0f, 0x1.ee452ap-56f,
     0x1.758384p-22f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3c116p-58f,
     0x1.e5236cp-67f, 0x1.da5688p-22f, 0x1.61f482p-36f, 0x1.e53dbep-29f, 0.0f, 0.0f,
     0x1.27eb12p-35f, 0.0f, 0x1.8eaffep-93f, 0x1.ca49a4p-59f, 0x1.98458cp-95f,
     0x1.7e45f6p-120f, 0.0f, 0x1.b2373cp-44f, 0x1.a8f4eep-38f, 0x1.203178p-85f,
     0x1.0bf4acp-123f, 0x1.45f414p-123f, 0.0f, 0.0f, 0x1.8a2fep-96f, 0.0f,
     0x1.a1d54ep-20f, 0.0f, 0x1.8f3992p-100f, 0x1.36b746p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9dc346p-70f, 0.0f, 0.0f, 0x1.488e6cp-46f, 0x1.b6c4a2p-82f, 0x1.957ab4p-56f,
     0.0f, 0.0f, 0x1.c0d49cp-10f, 0.0f, 0x1.a0be8cp-73f, 0.0f, 0x1.f87194p-68f,
     0x1.d0bb48p-58f, 0.0f, 0.0f, 0.0f, 0x1.75be94p-124f, 0.0f, 0x1.1ccba4p-15f, 0.0f,
     0x1.f02cbcp-54f, 0.0f, 0.0f, 0x1.32996ap-91f, 0.0f, 0x1.01e4d6p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fcab0cp-120f, 0x1.a33f3cp-91f, 0.0f, 0x1.74319cp-19f,
     0x1.84458cp-33f, 0.0f, 0.0f, 0x1.f025eap-59f, 0.0f, 0.0f, 0x1.689482p-105f, 0.0f,
     0x1.be50c2p-98f, 0.0f, 0x1.841404p-15f, 0.0f, 0x1.b8ea9ap-1f, 0x1.762bbap-113f,
     0x1.a7c6b4p-125f, 0x1.ab88f8p-66f, 0.0f, 0x1.6cbd9ep-52f, 0.0f, 0.0f,
     0x1.1a5d1ep-68f, 0x1.57781cp-80f, 0x1.b35f52p-16f, 0x1.716232p-52f,
     0x1.683b84p-89f, 0x1.1d6cc4p-65f, 0x1.a14cfap-76f, 0.0f, 0x1.88117ap-3f,
     0x1.b84f84p-11f, 0.0f, 0x1.04cfc4p-113f, 0.0f, 0x1p0f, 0x1.f03d5p-13f,
     0x1.c9c646p-12f, 0.0f, 0.0f, 0x1.40f0a6p-92f, 0x1.05159p-96f, 0.0f, 0.0f,
     0x1.ebfbdcp-32f, 0x1p0f, 0.0f, 0.0f, 0x1.90b7cap-123f, 0x1.2dc8c4p-42f, 0.0f,
     0x1.25f508p-86f, 0.0f, 0x1.e34e58p-70f, 0.0f, 0.0f, 0x1.d63p-82f, 0.0f, 0.0f,
     0x1.93db36p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5348c6p-8f, 0.0f, 0.0f,
     0x1.dbddd6p-27f, 0.0f, 0x1.454b2ap-1f, 0x1.e84afp-21f, 0x1.58661cp-20f,
     0x1.8523d6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.888336p-67f, 0x1.fb94a8p-93f,
     0.0f, 0.0f, 0x1.b703dcp-100f, 0.0f, 0x1.e08648p-105f, 0.0f, 0x1.699c06p-113f,
     0.0f, 0x1.5d336ep-62f, 0.0f, 0x1.26f918p-32f, 0x1.8545p-29f, 0x1.453622p-38f,
     0x1.60448ap-83f, 0.0f, 0x1.d21242p-86f, 0.0f, 0.0f, 0x1.d8edb4p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7eaa52p-99f, 0x1.5ddb6cp-54f, 0.0f, 0x1.1a97a2p-60f, 0.0f, 0.0f,
     0.0f, 0x1.e08fb4p-18f, 0.0f, 0.0f, 0x1.3da3a4p-17f, 0.0f, 0x1.826dd6p-60f, 0.0f,
     0x1.aa0dfep-45f, 0.0f, 0.0f, 0.0f, 0x1.e9c144p-59f, 0x1.cb0a72p-5f, 0.0f,
     0x1.69969p-90f, 0.0f, 0.0f, 0x1.b987b4p-57f, 0.0f, 0.0f, 0.0f, 0x1.b85bap-5f,
     0x1.d667f2p-63f, 0x1.98e6eep-54f, 0x1.734028p-86f, 0x1.d8b82ap-91f,
     0x1.43adep-95f, 0x1.13aedep-44f, 0x1.f1a32p-37f, 0x1.1cba84p-115f, 0.0f,
     0x1.3be58ep-90f, 0x1.5603e8p-60f, 0x1.000d9p-36f, 0x1.0b63f2p-37f, 0.0f,
     0x1.d82d72p-78f, 0x1.a10ef8p-86f, 0x1.893072p-94f, 0.0f, 0.0f, 0x1.10778p-45f,
     0.0f, 0x1.da08e4p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85dde8p-56f, 0.0f, 0x1.5a22c6p-107f, 0x1.0d5a74p-10f, 0.0f, 0.0f,
     0x1.796c2p-61f, 0x1.4c6348p-5f, 0x1.7b0766p-12f, 0x1.6179bp-70f,
     0x1.662e3cp-112f, 0.0f, 0x1.c27dbp-86f, 0.0f, 0.0f, 0x1.4f454ap-101f, 0.0f,
     0x1.fc2972p-117f, 0x1.9706b6p-47f, 0.0f, 0x1.55b63ep-62f, 0x1.6b5becp-91f,
     0x1.81be12p-69f, 0x1.172f38p-50f, 0.0f, 0.0f, 0.0f, 0x1.850a4ap-50f,
     0x1.bd0792p-93f, 0.0f, 0.0f, 0.0f, 0x1.f086aap-41f, 0x1.8e056ap-18f,
     0x1.7df8a8p-40f, 0.0f, 0x1.bd876ap-70f, 0x1.6b530ap-62f, 0x1.326c0ap-38f,
     0x1.73e8fp-20f, 0x1.c0a3fep-54f, 0x1.ff5236p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1d3c9ap-122f, 0.0f, 0.0f, 0.0f, 0x1.95b11cp-13f, 0x1.142e52p-34f,
     0x1.c425f8p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c05a72p-9f, 0.0f,
     0.0f, 0.0f, 0x1.1ddbe8p-93f, 0.0f, 0x1.a15856p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.727564p-52f, 0x1.0e673ep-1f, 0x1.bcbb88p-46f, 0x1.23b22ap-47f, 0.0f,
     0.0f, 0.0f, 0x1.01c032p-99f, 0x1.76d69ap-27f, 0.0f, 0x1.99bc08p-37f, 0.0f, 0.0f,
     0x1.f7557cp-63f, 0x1.6da47ep-28f, 0.0f, 0x1.ec03ecp-60f, 0x1.a8b3bep-57f,
     0x1.85d676p-88f, 0x1.b342aap-37f, 0x1.136462p-2f, 0x1.df81e4p-95f,
     0x1.6261f2p-99f, 0x1.5a7092p-7f, 0x1.894662p-85f, 0x1.107e9ap-100f,
     0x1.64cd6ap-110f, 0x1.72314cp-102f, 0.0f, 0x1.594bdcp-5f, 0.0f, 0x1.dfad26p-44f,
     0x1.577b44p-40f, 0x1.20212cp-20f, 0x1.8092c8p-107f, 0x1.647e8cp-37f,
     0x1.a96032p-51f, 0x1.873f8p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.647adep-122f, 0.0f, 0.0f, 0x1.a003c6p-20f, 0x1.9e7cd6p-82f, 0.0f,
     0x1.9dfcdp-39f, 0x1.2756b8p-43f, 0x1.cd5ad6p-90f, 0x1.523cdep-16f, 0.0f,
     0x1.8457e2p-56f, 0x1.452ddcp-112f, 0x1.df3984p-10f, 0.0f, 0x1.c19bap-68f, 0.0f,
     0.0f, 0x1.c963a4p-63f, 0.0f, 0x1.590e04p-81f, 0.0f, 0x1.49ee7ep-90f,
     0x1.11cf14p-81f, 0.0f, 0x1.b5c28cp-6f, 0x1.e11c4ap-112f, 0.0f, 0.0f, 0.0f,
     0x1.3962b6p-100f, 0.0f, 0x1.ca0be4p-7f, 0x1.89a042p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.beaaep-81f, 0x1.f53a64p-89f, 0x1.06342ep-96f, 0.0f, 0.0f, 0x1.658f1p-3f,
     0.0f, 0x1.ffa942p-88f, 0x1.a8f7a4p-113f, 0x1.2522e8p-114f, 0.0f, 0x1.6833dep-23f,
     0x1.0c2b0ap-69f, 0.0f, 0.0f, 0.0f, 0x1.8d2de8p-42f, 0x1.6b92a8p-15f,
     0x1.bf1414p-29f, 0x1.c4505ep-27f, 0x1.6d74a6p-80f, 0.0f, 0x1.8f790ap-120f,
     0x1.cc2548p-29f, 0x1.9e0fb4p-93f, 0.0f, 0.0f, 0x1.c5e836p-37f, 0.0f, 0.0f, 0.0f,
     0x1.6a54b6p-121f, 0x1.5821dp-29f, 0.0f, 0x1.db20c8p-34f, 0.0f, 0x1.ed7658p-60f,
     0.0f, 0x1.607bcap-106f, 0x1.51b10ap-62f, 0x1.c9d9dep-30f, 0.0f, 0.0f,
     0x1.bfb0c2p-89f, 0.0f, 0.0f, 0x1.e820c8p-54f, 0x1.f1bd14p-65f, 0.0f,
     0x1.07591ap-122f, 0x1.a0bdf6p-27f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.026e66p-110f, 0.0f, 0x1.412f34p-109f, 0x1.cb548ep-39f, 0.0f,
     0x1.5d3fa6p-90f, 0.0f, 0x1.66b602p-3f, 0x1.c32a78p-30f, 0x1.528778p-99f, 0.0f,
     0x1.a29dep-66f, 0x1.f06b9cp-114f, 0.0f, 0.0f, 0x1.96c86p-30f, 0.0f,
     0x1.cba02ap-55f, 0x1.77c124p-81f, 0x1.e3dc3ep-32f, 0x1.a3ffc4p-110f,
     0x1.c0ea16p-64f, 0.0f, 0.0f, 0x1.c3d5p-2f, 0.0f, 0x1.ebf104p-54f, 0x1p0f,
     0x1.e70ff2p-121f, 0x1.16c888p-67f, 0.0f, 0x1.ee35b4p-49f, 0x1.1f2148p-34f, 0.0f,
     0x1.dea8acp-87f, 0.0f, 0.0f, 0.0f, 0x1.7bd0c6p-93f, 0x1.773806p-112f, 0.0f,
     0x1.208b06p-6f, 0x1.15ab0cp-17f, 0x1.bf614ep-119f, 0x1.a2176ep-77f,
     0x1.861432p-95f, 0.0f, 0x1.ede99ap-65f, 0.0f, 0x1.6ec3eep-75f, 0.0f,
     0x1.54dd98p-29f, 0.0f, 0.0f, 0x1.27089p-74f, 0.0f, 0x1.653d5ap-11f,
     0x1.e70d6ep-123f, 0.0f, 0x1.a8f18ep-75f, 0.0f, 0.0f, 0x1.12e8fp-58f, 0.0f,
     0x1.5dd4e6p-83f, 0.0f, 0x1.d88de2p-64f, 0.0f, 0.0f, 0x1.f5fefp-58f,
     0x1.fbdefcp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb3e6p-24f, 0.0f,
     0x1.6fcc1cp-68f, 0x1.65df3cp-28f, 0x1.d6c536p-64f, 0.0f, 0x1.556dap-11f,
     0x1.a33196p-66f, 0x1.2ddb88p-21f, 0x1.4e34bep-100f, 0x1.66bafep-92f, 0.0f, 0.0f,
     0.0f, 0x1.ae4bc8p-10f, 0.0f, 0x1.cbd776p-16f, 0.0f, 0x1.431166p-33f,
     0x1.fc5784p-2f, 0.0f, 0x1.ede794p-60f, 0.0f, 0x1.1e4bep-107f, 0x1.701b32p-40f,
     0.0f, 0x1.882ed2p-45f, 0.0f, 0.0f, 0.0f, 0x1.ba3fcp-104f, 0.0f, 0x1.5033bcp-8f,
     0x1.73359ap-37f, 0x1.c0a8bep-81f, 0x1.4c61a4p-103f, 0x1.7fdbecp-27f,
     0x1.7ba62ap-126f, 0x1.b1c7ccp-14f, 0x1.647d64p-96f, 0x1.bd878cp-88f,
     0x1.68d19ep-83f, 0x1.22adbp-42f, 0x1.c702e4p-45f, 0x1.cdbffep-28f,
     0x1.3d90fep-61f, 0x1.6092fcp-89f, 0.0f, 0x1.902714p-115f, 0.0f, 0x1.b177e4p-122f,
     0.0f, 0.0f, 0.0f, 0x1.cb9866p-86f, 0x1.a1d9ecp-58f, 0.0f, 0.0f, 0x1.341492p-92f,
     0x1.76ac2ap-125f, 0x1.c9d2f6p-36f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.fa7ceep-41f,
     0x1.499638p-17f, 0x1.67842p-78f, 0x1.17fe6cp-59f, 0x1.0e0e9p-26f, 0.0f, 0.0f,
     0x1.80c1fp-70f, 0x1.bfa4bcp-116f, 0x1.4b8ea6p-116f, 0x1.ad5048p-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.039428p-4f, 0x1p0f, 0.0f, 0.0f, 0x1.d45346p-95f, 0.0f,
     0x1.015a56p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e98f2p-67f, 0x1.05a0bap-123f,
     0x1.782ba8p-56f, 0x1.c40ba2p-19f, 0.0f, 0x1.c9a0e8p-32f, 0.0f, 0x1.3c0594p-14f,
     0x1.5461d2p-43f, 0x1.d0033ep-58f, 0.0f, 0x1.318124p-12f, 0.0f, 0x1.24125p-81f,
     0x1.58e72ap-17f, 0x1.e914c4p-117f, 0x1.8d899cp-123f, 0x1.69145ap-43f, 0.0f, 0.0f,
     0.0f, 0x1.845854p-118f, 0.0f, 0.0f, 0.0f, 0x1.5d7fcp-92f, 0.0f, 0x1.d7f06cp-16f,
     0x1.404cf2p-60f, 0.0f, 0x1.66e3d8p-4f, 0x1.cc951cp-74f, 0.0f, 0x1.3b1872p-108f,
     0.0f, 0.0f, 0x1.9ff536p-17f, 0.0f, 0x1.1af37p-67f, 0.0f, 0.0f, 0x1.78f05ap-18f,
     0x1.d958fcp-44f, 0x1.be5614p-63f, 0x1.4d32e8p-51f, 0x1.8ce7b4p-101f, 0.0f,
     0x1.6904ecp-50f, 0x1.f71deep-55f, 0.0f, 0x1.8c7dbap-119f, 0x1.34df78p-19f, 0.0f,
     0.0f, 0.0f, 0x1.49dfcp-93f, 0.0f, 0.0f, 0x1.632b2ap-79f, 0.0f, 0.0f,
     0x1.ffb70ep-91f, 0.0f, 0.0f, 0.0f, 0x1.2b66bcp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b74c8p-4f, 0.0f, 0.0f, 0x1.b73832p-5f, 0.0f, 0.0f, 0x1.fa172ap-117f,
     0x1.936708p-3f, 0.0f, 0x1.a252cep-89f, 0x1.3555f6p-125f, 0x1.106376p-89f, 0.0f,
     0x1.3a01fep-86f, 0x1.75257p-11f, 0x1.26fce6p-107f, 0.0f, 0x1.42f846p-8f, 0.0f,
     0.0f, 0x1.4b4f2p-7f, 0.0f, 0.0f, 0.0f, 0x1.420646p-30f, 0x1.8e391ap-56f,
     0x1.0c2c26p-116f, 0.0f, 0.0f, 0x1.72ba9ep-102f, 0.0f, 0.0f, 0x1.8cea64p-57f,
     0.0f, 0.0f, 0x1.ead196p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cb7p-91f,
     0x1.5dbdd6p-35f, 0.0f, 0.0f, 0x1.52e82ep-1f, 0.0f, 0x1.d21e6cp-74f,
     0x1.1f1054p-2f, 0.0f, 0.0f, 0x1.689b5ep-33f, 0.0f, 0.0f, 0x1.f84ec4p-8f,
     0x1.97bd4p-102f, 0x1.e08cdap-93f, 0x1.3ed6fcp-52f, 0x1.3caae8p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.52410cp-98f, 0x1.a999b6p-46f, 0.0f, 0x1.7fe2dap-100f,
     0x1.295b7p-43f, 0.0f, 0x1.bd49acp-65f, 0x1.9f41eap-71f, 0.0f, 0.0f, 0.0f,
     0x1.ee2ca8p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef5506p-15f,
     0x1.50cc0cp-47f, 0.0f, 0x1.a6d4aep-80f, 0.0f, 0.0f, 0x1.b9dba4p-92f, 0.0f, 0.0f,
     0x1.0fd1f2p-11f, 0x1.b61a1ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5693p-19f,
     0x1.be7a3p-89f, 0x1.c88aa8p-108f, 0.0f, 0x1.a88c5ep-97f, 0x1.d1cbcap-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.feb4fp-109f, 0x1.d458b2p-24f, 0x1.10ed66p-42f, 0.0f,
     0x1.e1e988p-114f, 0.0f, 0.0f, 0.0f, 0x1.88c652p-9f, 0x1.1783f8p-29f,
     0x1.db89b2p-5f, 0x1.0c0924p-109f, 0.0f, 0x1.cc289ep-51f, 0.0f, 0.0f,
     0x1.52088p-69f, 0x1.86112cp-119f, 0.0f, 0x1.c3f932p-47f, 0x1.927cep-96f,
     0x1.19333ap-9f, 0.0f, 0x1.a2e06ap-37f, 0.0f, 0x1.6e705p-13f, 0x1.93a5d6p-26f,
     0.0f, 0.0f, 0x1.c0cb9ep-99f, 0.0f, 0x1.870934p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.158262p-47f, 0x1.d33dd6p-37f, 0x1.acd3bep-115f, 0.0f, 0x1.837ed6p-54f,
     0x1.1de54cp-90f, 0x1.bb5b6ap-35f, 0x1.c4f8b8p-100f, 0x1.5dd0fp-65f, 0.0f, 0.0f,
     0x1.a7c1f4p-4f, 0x1.fed15p-98f, 0.0f, 0x1.84b9aap-62f, 0x1.b7cb78p-48f,
     0x1.32ff4ap-56f, 0x1.224cf6p-60f, 0x1.8b6feap-50f, 0x1.0a767cp-101f, 0.0f,
     0x1.7fa7a8p-12f, 0.0f, 0x1.f8ae54p-49f, 0.0f, 0x1.2914f2p-57f, 0x1.f856cap-63f,
     0.0f, 0.0f, 0x1.31b1aap-29f, 0.0f, 0x1.f022f8p-34f, 0.0f, 0x1.83bd9p-87f, 0.0f,
     0x1.a41708p-8f, 0.0f, 0.0f, 0.0f, 0x1.db5c38p-14f, 0x1.a5a2e6p-75f,
     0x1.fe68f6p-97f, 0.0f, 0x1.5d3bap-40f, 0x1.90a6fcp-104f, 0x1.4f3222p-35f,
     0x1.f063a8p-50f, 0x1.360288p-71f, 0x1.10b61cp-91f, 0x1.a9a60cp-27f,
     0x1.3928a8p-90f, 0.0f, 0x1.7a8f6p-92f, 0.0f, 0x1.bef236p-80f, 0.0f,
     0x1.d9127cp-73f, 0x1.9208fap-6f, 0.0f, 0x1.4bd94ep-77f, 0.0f, 0.0f, 0.0f,
     0x1.39175ap-67f, 0x1.9a39a6p-120f, 0x1.b20878p-52f, 0x1.e67accp-15f,
     0x1.4899f4p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbcca4p-83f, 0.0f, 0.0f, 0x1.672fc6p-117f, 0.0f, 0.0f, 0x1.15dd32p-58f,
     0x1.c7dc5ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d26f1cp-78f, 0x1.675b4ap-126f,
     0x1.a01a92p-90f, 0.0f, 0x1.d49ec6p-19f, 0x1.461266p-20f, 0.0f, 0.0f,
     0x1.63e5bep-73f, 0x1.0559c8p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b49e12p-123f, 0.0f, 0.0f, 0x1.f8038ep-23f, 0x1.864ef2p-46f, 0x1.f77b2ap-97f,
     0x1.c6ddbep-118f, 0.0f, 0x1.156124p-62f, 0x1.adca12p-90f, 0.0f, 0x1.bb33f4p-31f,
     0x1.d0b552p-36f, 0x1.034bb4p-23f, 0x1.6ee394p-93f, 0.0f, 0x1.d29caap-26f,
     0x1.b1cf76p-126f, 0x1.8e2f9ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02c32ep-110f,
     0.0f, 0x1.8a5f0ap-71f, 0x1.2ec0b8p-99f, 0x1.0a1782p-113f, 0x1.f5e5aep-85f, 0.0f,
     0x1.b79d74p-61f, 0.0f, 0.0f, 0.0f, 0x1.3d6544p-102f, 0x1.c6bdcep-71f,
     0x1.83febcp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c7448p-69f, 0x1.e55d86p-15f,
     0x1.49af8cp-10f, 0x1.f6f21ap-9f, 0x1.df4362p-90f, 0x1.709976p-72f,
     0x1.c6998ap-98f, 0.0f, 0.0f, 0x1.d3e92ap-111f, 0.0f, 0.0f, 0.0f, 0x1.c44b02p-19f,
     0x1.81a28p-16f, 0.0f, 0x1.cf2ff2p-63f, 0x1.9bdbaap-105f, 0x1.bddf66p-81f, 0.0f,
     0.0f, 0x1.cb9302p-75f, 0.0f, 0x1.c4ff4cp-38f, 0x1.81e6ep-77f, 0x1.21b1f4p-25f,
     0.0f, 0.0f, 0x1.af50f6p-26f, 0x1.e06836p-60f, 0x1.44e6f2p-14f, 0x1.6fd3e6p-114f,
     0x1.997bb4p-5f, 0x1.914bd6p-117f, 0.0f, 0.0f, 0.0f, 0x1.f46a0ep-35f, 0x1p0f,
     0.0f, 0.0f, 0x1.5f5e6cp-89f, 0x1.754182p-117f, 0.0f, 0x1.20c8cep-81f, 0.0f,
     0x1.cdba52p-114f, 0.0f, 0.0f, 0.0f, 0x1.d1d7b4p-110f, 0.0f, 0.0f,
     0x1.cc77f8p-27f, 0x1.ceab26p-13f, 0x1.15ea76p-20f, 0x1.9d888cp-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0ad28p-93f, 0x1.714462p-66f, 0x1.93ff44p-42f, 0.0f,
     0x1.4950bp-28f, 0.0f, 0.0f, 0x1.7fa2c8p-23f, 0.0f, 0.0f, 0.0f, 0x1.a1bbf4p-34f,
     0.0f, 0x1.d0a974p-92f, 0.0f, 0x1.e495f4p-63f, 0x1.7bff5ap-12f, 0.0f, 0.0f,
     0x1.4e6c26p-33f, 0x1.d8e584p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c5bc4p-97f,
     0x1.55a33cp-42f, 0x1.67cf44p-102f, 0x1.3b3628p-122f, 0x1.093c1cp-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.61eafp-70f, 0x1.ef566cp-49f, 0.0f, 0.0f, 0x1.adec36p-46f, 0.0f,
     0x1.937ca6p-51f, 0x1.59c6p-115f, 0x1.8f5526p-93f, 0x1.c13562p-1f,
     0x1.dc028ep-104f, 0.0f, 0x1.386482p-75f, 0x1.5a60a8p-32f, 0x1.51c6c4p-126f,
     0x1.f25b42p-105f, 0.0f, 0x1.64e0d4p-15f, 0x1.49b3dep-79f, 0x1.850216p-91f,
     0x1.f98532p-74f, 0.0f, 0.0f, 0x1.fd7f98p-97f, 0x1.a45fb8p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.465434p-31f, 0x1.8d11b4p-124f, 0x1.4815f6p-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a474p-73f, 0.0f, 0x1.b8b04ep-68f, 0x1p0f, 0.0f,
     0x1.8ee9e2p-126f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e51e72p-84f,
     0x1.98da38p-70f, 0x1.1bb56p-74f, 0x1.21c5bep-102f, 0x1.3e691p-57f,
     0x1.9ae192p-21f, 0.0f, 0x1.272eb8p-41f, 0.0f, 0x1.6d0444p-8f, 0.0f,
     0x1.7f6dd2p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.560caep-16f, 0x1.09c55p-98f, 0.0f,
     0.0f, 0x1.d85c46p-108f, 0.0f, 0.0f, 0.0f, 0x1.7197a2p-118f, 0x1.4a806ap-63f,
     0x1.6332ccp-2f, 0.0f, 0x1.0d486ep-98f, 0.0f, 0x1.d0f2f4p-116f, 0.0f,
     0x1.bff592p-5f, 0x1.976b12p-125f, 0.0f, 0.0f, 0x1.56ea48p-63f, 0.0f, 0.0f, 0.0f,
     0x1.65914ep-66f, 0x1.cea0aep-49f, 0.0f, 0.0f, 0x1.690fbp-27f, 0x1.5c66b8p-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d0f7cp-27f, 0.0f, 0.0f, 0x1.569586p-42f, 0.0f,
     0x1.22d684p-124f, 0.0f, 0x1.295ca2p-43f, 0.0f, 0.0f, 0x1.afbb46p-60f,
     0x1.bb6f9p-16f, 0.0f, 0x1.ae6b2p-1f, 0x1.3c3974p-112f, 0x1.c88288p-43f,
     0x1.a5973ap-118f, 0.0f, 0x1.b1934cp-44f, 0.0f, 0.0f, 0x1.35fa7p-74f,
     0x1.59712ep-23f, 0.0f, 0.0f, 0.0f, 0x1.4939a8p-59f, 0.0f, 0.0f, 0.0f,
     0x1.8fe796p-119f, 0.0f, 0x1.73fd22p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c52686p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3691dp-52f, 0.0f, 0.0f,
     0x1.b6f796p-25f, 0.0f, 0x1.f35eb4p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddc2e6p-119f,
     0x1.df974ep-93f, 0x1.f92a24p-72f, 0x1.a5a014p-43f, 0.0f, 0x1.682dbep-20f, 0.0f,
     0.0f, 0x1.a685acp-117f, 0x1.e9626ap-2f, 0x1.c42c14p-66f, 0.0f, 0.0f,
     0x1.5dc526p-16f, 0.0f, 0.0f, 0x1.8108a6p-88f, 0x1.236fbap-58f, 0x1.cca32cp-31f,
     0.0f, 0x1.6b8d04p-2f, 0x1.2e159ap-88f, 0.0f, 0.0f, 0.0f, 0x1.c480aep-81f, 0.0f,
     0x1.e1aa1cp-51f, 0x1.6bb05cp-116f, 0.0f, 0x1.d1e5cp-120f, 0.0f, 0x1.d37e48p-120f,
     0.0f, 0.0f, 0.0f, 0x1.26584p-30f, 0x1.f899e8p-121f, 0x1.6eebdp-46f, 0.0f,
     0x1.47d998p-51f, 0x1.0f0c24p-61f, 0.0f, 0x1.38ee8ap-67f, 0x1.be666ap-53f, 0.0f,
     0.0f, 0.0f, 0x1.471f48p-4f, 0x1.67e5f8p-118f, 0.0f, 0x1.591998p-99f, 0.0f, 0.0f,
     0x1.ba5d18p-21f, 0.0f, 0x1.195268p-54f, 0.0f, 0x1.b335p-35f, 0.0f,
     0x1.d0a708p-30f, 0x1.eb487cp-115f, 0.0f, 0x1.a9d19cp-101f, 0x1.6ec4aep-38f,
     0x1.bada7ep-27f, 0x1.a24f92p-18f, 0x1.f5077p-56f, 0x1.599cd2p-69f, 0.0f,
     0x1.2851e4p-51f, 0.0f, 0x1.e2720cp-4f, 0.0f, 0x1.c13814p-42f, 0x1.65a19ep-91f,
     0.0f, 0x1.e7d3bap-14f, 0.0f, 0x1.019cc8p-59f, 0x1.959b58p-19f, 0.0f,
     0x1.55012ep-126f, 0x1.972aa2p-53f, 0.0f, 0.0f, 0x1.aceef4p-114f, 0x1.b7d5dap-31f,
     0.0f, 0.0f, 0x1.88937ep-52f, 0.0f, 0.0f, 0x1.92b362p-42f, 0x1.d219fcp-70f, 0.0f,
     0.0f, 0x1.6a0f2cp-46f, 0x1.cf1ec4p-71f, 0.0f, 0x1.7929fp-16f, 0x1.d96ee4p-115f,
     0x1.61cc8cp-105f, 0x1.adcceap-5f, 0x1.069bf2p-31f, 0x1.56e4acp-84f, 0.0f, 0.0f,
     0x1.95e4ecp-4f, 0x1.08103cp-15f, 0x1.22b662p-21f, 0.0f, 0.0f, 0x1.59b9b6p-65f,
     0x1.4023ecp-105f, 0x1.b0537ep-1f, 0.0f, 0x1.b91f6p-115f, 0x1.526c14p-107f, 0.0f,
     0x1.09f94ep-77f, 0x1.e8c15ap-95f, 0x1.57c20cp-120f, 0x1.55bb64p-90f, 0.0f,
     0x1.183f5ap-108f, 0.0f, 0.0f, 0.0f, 0x1.9a9b8p-96f, 0x1.3b365cp-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.925438p-22f, 0x1.43e73ap-43f, 0x1.09a4bcp-44f, 0x1.2fd6eap-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2c6d8p-27f, 0.0f,
     0.0f, 0x1.2c96dep-105f, 0x1.1aea7cp-125f, 0x1.3f804ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.1f42aep-117f, 0x1.ec3c68p-54f, 0.0f, 0.0f, 0x1.dacb3cp-63f, 0.0f, 0.0f,
     0x1.02bb46p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b4a0ap-36f, 0x1.83f3c4p-86f,
     0x1.d02086p-95f, 0.0f, 0x1.b02d42p-32f, 0x1.f91aep-18f, 0.0f, 0x1.18d01p-18f,
     0.0f, 0x1.1e4bb2p-76f, 0.0f, 0.0f, 0x1.0221bep-95f, 0.0f, 0x1.0d921ap-21f,
     0x1.832c3ep-79f, 0x1.f8b5e8p-88f, 0x1.1082d4p-29f, 0x1.e5795cp-116f,
     0x1.bffb9ep-40f, 0x1.096f66p-14f, 0x1.396b72p-123f, 0x1.560bep-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1b15aep-100f, 0.0f, 0x1.de6f82p-69f, 0.0f, 0.0f, 0x1.f4e6dp-43f,
     0.0f, 0.0f, 0.0f, 0x1.d0e05ep-66f, 0x1.477346p-60f, 0x1.c8397ap-126f, 0.0f,
     0x1.a291bp-10f, 0.0f, 0x1.4dc17p-46f, 0x1.74c546p-77f, 0.0f, 0x1.01e5ap-51f,
     0.0f, 0.0f, 0x1.7c7f24p-109f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_hypotf1_u35purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_hypotf1_u35purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_hypotf1_u35purecfma bench acc %a\n", global_bench_acc);
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
