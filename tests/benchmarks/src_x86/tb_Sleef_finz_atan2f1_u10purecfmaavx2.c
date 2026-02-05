/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f1_u10purecfma.c --function \
 *     Sleef_finz_atan2f1_u10purecfma --arity 2 --headers \
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
     0.0f, 0x1.497aa2p-90f, 0x1.ca834ep-23f, 0.0f, 0x1.2f62bp-63f, 0x1.386256p-9f,
     0x1.ce0a0cp-103f, 0x1.4699f6p-34f, 0x1.6d800ap-48f, 0.0f, 0.0f, 0.0f,
     0x1.783102p-98f, 0.0f, 0x1.c50296p-4f, 0x1.87ecfp-109f, 0x1.c4fb1p-108f,
     0x1.e5278cp-25f, 0.0f, 0x1.d005cap-61f, 0.0f, 0x1.c144d2p-25f, 0x1.8b515ap-31f,
     0.0f, 0.0f, 0.0f, 0x1.6fcfcap-21f, 0.0f, 0x1.54d22cp-74f, 0x1.a8f5ap-39f,
     0x1.b435f2p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9246bep-49f, 0x1.39bbacp-18f,
     0x1.c5d6d2p-35f, 0.0f, 0x1.bedd8ep-47f, 0x1.b7934cp-62f, 0x1.daae14p-74f,
     0x1.c313a2p-75f, 0x1.03be2cp-101f, 0x1.bcb86cp-40f, 0x1.c8ba58p-45f, 0.0f, 0.0f,
     0.0f, 0x1.a299b8p-85f, 0x1p0f, 0.0f, 0x1.efc038p-84f, 0.0f, 0.0f,
     0x1.548e7cp-98f, 0x1.a2c85ap-69f, 0x1.2075cap-36f, 0x1.bdceb2p-12f,
     0x1.6ae164p-12f, 0x1.9a720cp-47f, 0.0f, 0x1.a0468ep-51f, 0x1.dce982p-86f,
     0x1.c42d9p-21f, 0x1.a5b0aep-27f, 0x1.9b840cp-122f, 0x1.c4153cp-93f,
     0x1.5dc02ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e33736p-4f, 0.0f,
     0x1.eebe6ap-4f, 0.0f, 0x1.be7792p-65f, 0.0f, 0.0f, 0.0f, 0x1.637a5p-121f, 0.0f,
     0.0f, 0.0f, 0x1.612d82p-19f, 0.0f, 0x1.a8fc64p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.66bae2p-92f, 0.0f, 0.0f, 0x1.90f40ap-14f, 0.0f, 0.0f,
     0x1.84964cp-29f, 0.0f, 0x1.2628e6p-116f, 0x1.4ce47cp-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.90b99p-117f, 0.0f, 0x1.99e128p-67f, 0.0f, 0.0f, 0.0f,
     0x1.2134ep-85f, 0x1.d84b7p-53f, 0x1.778aeep-109f, 0x1.2a817ap-116f, 0.0f,
     0x1.90073ep-110f, 0x1.ad78cap-37f, 0x1.01337cp-26f, 0x1.f354f2p-58f, 0.0f,
     0x1.b0beb2p-69f, 0.0f, 0.0f, 0x1.b5b522p-48f, 0x1.683e14p-103f, 0x1.dff298p-50f,
     0x1.496434p-41f, 0.0f, 0x1.9377c2p-31f, 0.0f, 0.0f, 0x1.79491ep-26f,
     0x1.f3f16ap-54f, 0x1.2aa428p-121f, 0x1.85df2ap-85f, 0x1.44fd98p-125f, 0.0f, 0.0f,
     0x1.ecd4ecp-24f, 0x1.c4b44p-34f, 0x1.c2d8dep-101f, 0x1.dd4576p-116f,
     0x1.d88696p-57f, 0x1.1e3d5ap-89f, 0x1.40ed64p-76f, 0.0f, 0.0f, 0.0f,
     0x1.af176ap-85f, 0.0f, 0x1.9ecdfap-38f, 0.0f, 0.0f, 0x1.fca94ap-78f, 0.0f, 0.0f,
     0.0f, 0x1.75a838p-85f, 0x1.ba281ep-112f, 0x1.e7f5d6p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6d1d3cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d03622p-56f, 0.0f, 0.0f, 0.0f,
     0x1.04157cp-115f, 0.0f, 0x1.c5206cp-43f, 0.0f, 0x1.fcb002p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b8f2e6p-30f, 0x1.d4db4p-118f, 0x1.b8a74ap-20f, 0.0f, 0x1.226072p-123f,
     0x1.61bb58p-116f, 0.0f, 0x1.164ap-56f, 0.0f, 0x1.5cf776p-49f, 0.0f, 0.0f,
     0x1.ad80bap-56f, 0.0f, 0x1.3b7b28p-78f, 0.0f, 0.0f, 0x1.d50d1ap-102f,
     0x1.5196e6p-53f, 0.0f, 0x1.657ecp-97f, 0.0f, 0x1.091416p-107f, 0.0f,
     0x1.a32ccap-10f, 0.0f, 0x1.2b5b7p-39f, 0.0f, 0x1.b855f6p-70f, 0.0f,
     0x1.5f5218p-77f, 0x1.411a68p-84f, 0.0f, 0x1.410baep-34f, 0.0f, 0x1.d267bap-22f,
     0.0f, 0x1.ddf346p-56f, 0.0f, 0.0f, 0.0f, 0x1.c2340ep-112f, 0x1.0d1f94p-30f,
     0x1.654346p-29f, 0x1.8a7d72p-58f, 0x1.cf635cp-94f, 0x1.3c49a2p-43f, 0.0f, 0.0f,
     0x1.fbd962p-10f, 0x1.bb573ap-26f, 0.0f, 0x1.910a0ap-65f, 0x1.7f195ep-42f, 0.0f,
     0x1.9636b4p-112f, 0.0f, 0x1.1ff43cp-104f, 0x1.c9922ep-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.117a9ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd06a8p-30f,
     0x1.d584cap-125f, 0.0f, 0.0f, 0x1.1292a2p-92f, 0x1.84e45ep-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6e796p-36f, 0.0f, 0x1.692582p-18f, 0.0f, 0x1.7f9f1ep-6f,
     0x1.fa2d9p-21f, 0x1.a9a4c4p-4f, 0.0f, 0x1.886afap-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cf84fap-70f, 0.0f, 0x1.e39cd8p-16f, 0.0f, 0x1.fae82ap-13f,
     0x1.2d549p-116f, 0x1.193932p-21f, 0.0f, 0.0f, 0x1.de0fd2p-35f, 0x1.0b5b72p-40f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.160ea8p-31f, 0x1.548ef6p-90f, 0x1.8bfa44p-35f,
     0x1.7f8ap-54f, 0x1.e1d3d8p-76f, 0.0f, 0x1.8c074cp-70f, 0x1.892a1cp-59f, 0.0f,
     0x1.8dfed2p-80f, 0.0f, 0.0f, 0x1.1e28f4p-83f, 0.0f, 0.0f, 0.0f, 0x1.cf6ecap-92f,
     0.0f, 0.0f, 0x1.1e9afp-93f, 0.0f, 0.0f, 0.0f, 0x1.c70554p-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.07f2d6p-23f, 0x1.299152p-26f, 0.0f, 0.0f, 0x1.9f6ba6p-72f,
     0x1.9c777p-72f, 0.0f, 0x1.05c10cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.782ab6p-114f,
     0x1.c8355ep-35f, 0x1.cafa66p-57f, 0x1.7b8a16p-46f, 0x1.651fe2p-48f,
     0x1.de957ap-122f, 0.0f, 0x1.95735p-51f, 0x1.baa038p-100f, 0x1.d3336p-54f,
     0x1.554b22p-116f, 0.0f, 0x1.4d88dp-44f, 0x1.ba08d8p-96f, 0.0f, 0x1.579834p-28f,
     0.0f, 0x1.85d9bep-97f, 0.0f, 0.0f, 0x1.fae57ep-35f, 0x1.54b8e8p-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3593dp-15f, 0x1.625382p-123f, 0.0f, 0x1.ebc3eap-21f,
     0x1.efff1ap-103f, 0x1.0b79cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca00d8p-4f, 0x1.66da0cp-17f, 0x1.4be72ep-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3faf4p-80f, 0x1.ad5362p-81f, 0x1.7cd94p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.97047p-37f, 0x1.7db0aep-108f, 0x1.7e2d96p-56f, 0x1.5658ap-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dd6af8p-125f, 0x1.68291ap-95f, 0.0f, 0.0f, 0.0f,
     0x1.a7307ap-7f, 0x1.0f7c58p-10f, 0x1.c0a148p-72f, 0.0f, 0x1.3bf1f6p-118f, 0.0f,
     0.0f, 0x1.a4078ap-105f, 0x1.033d72p-84f, 0x1.2821b4p-66f, 0x1.8eb2fp-70f, 0.0f,
     0.0f, 0.0f, 0x1.9194c4p-72f, 0.0f, 0x1.c6e548p-101f, 0x1.f921e8p-63f, 0.0f, 0.0f,
     0x1.7db218p-81f, 0x1.00d9ap-81f, 0.0f, 0x1.ad5dfp-38f, 0.0f, 0.0f,
     0x1.a24a58p-99f, 0.0f, 0.0f, 0.0f, 0x1.070bdp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b698b6p-82f, 0.0f, 0x1.9dfafep-33f, 0x1.962734p-99f, 0x1.78c5a6p-10f, 0.0f,
     0x1.f9a978p-115f, 0.0f, 0.0f, 0x1.117fccp-54f, 0.0f, 0x1.8212cep-90f,
     0x1.3fae56p-16f, 0x1.f967ep-81f, 0.0f, 0x1.87fcf2p-27f, 0x1.d4ec9cp-50f,
     0x1.d3916ap-44f, 0.0f, 0x1.ba4336p-37f, 0x1.4e86cp-16f, 0.0f, 0.0f,
     0x1.0294ccp-11f, 0.0f, 0.0f, 0x1.cdb09ap-29f, 0.0f, 0x1.93ba0cp-47f,
     0x1.dada5p-106f, 0.0f, 0x1.4bcd64p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2c1f8p-60f, 0.0f, 0.0f, 0x1.2622fcp-81f, 0.0f, 0.0f, 0x1.0724ccp-124f,
     0x1.e0d3fp-106f, 0.0f, 0x1.553e8ep-85f, 0x1.c67668p-126f, 0x1.83bbfep-18f,
     0x1.f718a6p-54f, 0x1.716644p-34f, 0.0f, 0.0f, 0x1.a74b3ep-93f, 0x1.ca7c44p-48f,
     0.0f, 0.0f, 0x1.39dbe8p-108f, 0x1.0462fp-16f, 0.0f, 0x1.cffd2cp-8f, 0.0f,
     0x1.2b6fe8p-28f, 0.0f, 0.0f, 0x1.5fe388p-16f, 0x1.919adap-83f, 0x1.bff5fap-91f,
     0.0f, 0.0f, 0x1.c1d3f6p-23f, 0x1.4720a6p-116f, 0.0f, 0x1.028712p-6f, 0.0f, 0.0f,
     0x1.ae9fcp-120f, 0.0f, 0x1.401212p-94f, 0x1.1e7958p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a00b6p-39f, 0.0f, 0.0f, 0x1.dd0712p-115f, 0.0f, 0x1.24ad24p-69f, 0.0f,
     0x1.462facp-40f, 0x1.3fab3p-49f, 0.0f, 0x1.6fb9e8p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9f8acp-33f, 0x1.dd88a8p-10f, 0.0f, 0x1.8a8418p-88f, 0.0f, 0.0f,
     0x1.247306p-14f, 0.0f, 0x1.55308ap-81f, 0x1.843c7ap-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e60a4p-51f, 0.0f, 0x1.d76d2cp-122f, 0x1.ae52ap-16f, 0x1.9251bp-102f,
     0x1.4511e6p-28f, 0.0f, 0x1.1bd0e2p-96f, 0.0f, 0x1.bd58a2p-72f, 0x1.05d51ap-86f,
     0.0f, 0x1.e66a58p-72f, 0.0f, 0x1.a3f9ap-115f, 0.0f, 0x1.480792p-113f,
     0x1.0628fep-23f, 0.0f, 0x1.ba957ap-41f, 0x1.921c2ap-65f, 0x1.6825cp-44f, 0.0f,
     0x1.8381b8p-126f, 0x1.54671cp-43f, 0.0f, 0.0f, 0x1.d4a91cp-2f, 0.0f, 0.0f, 0.0f,
     0x1.a245cep-100f, 0.0f, 0x1.a37336p-77f, 0x1.4f2692p-113f, 0x1.95b6dap-95f,
     0x1.bfb736p-97f, 0x1.b7fa7cp-9f, 0.0f, 0x1.6b5de2p-8f, 0x1.36915ap-4f,
     0x1.c748c4p-69f, 0x1.da6144p-70f, 0x1.f62586p-87f, 0x1.15ba0ap-57f,
     0x1.b8ed0ap-63f, 0.0f, 0x1.27908ep-8f, 0.0f, 0x1.079c54p-9f, 0x1.c64cd4p-64f,
     0.0f, 0x1.a215d2p-76f, 0x1.210acep-27f, 0x1.1e9edep-23f, 0.0f, 0.0f,
     0x1.aae90ap-103f, 0.0f, 0.0f, 0.0f, 0x1.f57da4p-86f, 0.0f, 0.0f, 0.0f,
     0x1.838722p-99f, 0x1.09cd46p-100f, 0.0f, 0x1.18898ep-110f, 0x1.f17258p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.23129ep-113f, 0.0f, 0.0f, 0x1.97c66p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.69ebacp-64f, 0.0f, 0.0f, 0x1.aae8fcp-73f, 0x1.17624p-19f,
     0x1.d95742p-69f, 0x1.bae76p-39f, 0x1.a83334p-45f, 0.0f, 0x1.2c9e32p-109f,
     0x1.922fdep-79f, 0x1.20d822p-108f, 0x1.0bf4bap-49f, 0x1.bf8b1ep-6f, 0.0f,
     0x1.0c682ap-8f, 0.0f, 0x1.2ce462p-21f, 0.0f, 0x1.b48104p-123f, 0x1.cf0f5p-80f,
     0.0f, 0x1.773d32p-109f, 0.0f, 0.0f, 0x1.dfa8e2p-11f, 0.0f, 0x1.70b834p-8f, 0.0f,
     0.0f, 0x1.9a0db2p-88f, 0x1.9cd58ep-59f, 0x1.4bdeccp-53f, 0.0f, 0x1.1a1fdp-90f,
     0x1.300eacp-48f, 0x1.afdf1ap-80f, 0x1.7041eap-8f, 0.0f, 0.0f, 0x1.d47f74p-99f,
     0.0f, 0.0f, 0x1.4a9086p-60f, 0x1.ccc47cp-107f, 0.0f, 0.0f, 0x1.567dc6p-49f,
     0x1.ed6978p-23f, 0x1.41b93ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9262f2p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8049a6p-35f, 0.0f,
     0x1.12f6ccp-64f, 0.0f, 0.0f, 0.0f, 0x1.47a2f4p-11f, 0.0f, 0.0f, 0x1.f0a1ccp-95f,
     0.0f, 0.0f, 0x1.922656p-69f, 0x1.f3f58cp-104f, 0.0f, 0x1.fdb60cp-106f, 0.0f,
     0x1.ba7562p-12f, 0x1.f30412p-71f, 0.0f, 0.0f, 0.0f, 0x1.d7d0ecp-5f, 0.0f,
     0x1.37b1a8p-64f, 0x1.770a86p-101f, 0x1.2bbb26p-126f, 0x1.165b1cp-98f,
     0x1.41e15ep-70f, 0.0f, 0x1.066dd2p-117f, 0.0f, 0x1.e3ae54p-63f, 0.0f,
     0x1.b2866ep-40f, 0x1.73f434p-8f, 0x1.0c8c6p-3f, 0x1.605a76p-73f, 0x1.3a241ep-70f,
     0x1.f586a8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c249c8p-51f, 0x1.c597d8p-112f, 0.0f,
     0.0f, 0x1.6e93a4p-42f, 0.0f, 0x1.b82f66p-106f, 0x1.29a3a8p-44f, 0x1.d95a68p-44f,
     0.0f, 0x1.0bbeecp-43f, 0.0f, 0.0f, 0.0f, 0x1.cbe5c6p-88f, 0.0f, 0x1.446cb8p-124f,
     0x1.4b14e8p-25f, 0.0f, 0x1.b96a04p-55f, 0x1.5216a6p-63f, 0.0f, 0x1.dc4132p-44f,
     0.0f, 0.0f, 0x1.995714p-15f, 0x1.8ef29p-18f, 0x1.e52a8cp-18f, 0.0f, 0.0f,
     0x1.491e62p-126f, 0.0f, 0x1.8e36aep-69f, 0.0f, 0.0f, 0.0f, 0x1.f25928p-120f,
     0x1.192b36p-106f, 0x1.031d34p-17f, 0.0f, 0.0f, 0x1.d9aaf4p-10f, 0x1.bb6e82p-29f,
     0.0f, 0x1.a682a8p-120f, 0.0f, 0x1.38ccacp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7faaep-23f, 0x1.8ef232p-91f, 0.0f, 0x1.1ce85ep-108f, 0x1.038ecep-21f,
     0x1.d97f2cp-10f, 0x1.6c07ap-105f, 0x1.cc0ae2p-86f, 0x1.e60f88p-56f,
     0x1.f1637ep-6f, 0.0f, 0.0f, 0x1.2702f4p-45f, 0.0f, 0.0f, 0x1.e5b0ap-34f, 0.0f,
     0.0f, 0x1.f76f9cp-106f, 0x1.d9fb5ep-6f, 0.0f, 0x1.2cdf66p-64f, 0.0f,
     0x1.d40888p-83f, 0.0f, 0.0f, 0x1.8b8c4ep-25f, 0.0f, 0x1.d695fap-40f, 0.0f, 0.0f,
     0x1.51afb6p-7f, 0x1.37e436p-8f, 0x1.c82e58p-80f, 0.0f, 0x1.aabab4p-43f, 0.0f,
     0.0f, 0x1.5dba8p-46f, 0.0f, 0.0f, 0x1.ccf976p-124f, 0.0f, 0.0f, 0.0f,
     0x1.237a66p-27f, 0.0f, 0x1.924498p-118f, 0.0f, 0.0f, 0x1.395af4p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.43e642p-116f, 0.0f, 0x1.6d36c8p-94f, 0.0f, 0.0f, 0x1.4b1ca2p-43f,
     0x1.73535cp-117f, 0x1.87fae4p-97f, 0x1.5bfbfep-67f, 0x1.88428p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe132cp-102f, 0x1.f40ff4p-112f, 0x1.b09b4p-106f,
     0.0f, 0.0f, 0x1.b45086p-9f, 0.0f, 0.0f, 0x1.567d1ep-51f, 0.0f, 0.0f,
     0x1.bef32cp-107f, 0x1.a6e156p-80f, 0x1.4a1ca6p-30f, 0x1.ae2fc6p-29f, 0.0f,
     0x1.73906ep-59f, 0x1.f9bf28p-94f, 0x1.3095c2p-116f, 0x1.5f06f8p-38f,
     0x1.ee4f14p-5f, 0.0f, 0x1.c529f6p-112f, 0.0f, 0.0f, 0x1.21bb04p-75f, 0.0f,
     0x1.c788f4p-114f, 0.0f, 0.0f, 0x1.134cdcp-48f, 0x1.51029ep-49f, 0x1.659354p-44f,
     0x1.8f5b1cp-44f, 0.0f, 0x1.ea7c1cp-14f, 0x1.ce0c1cp-90f, 0x1.6ed136p-11f,
     0x1.379234p-30f, 0.0f, 0.0f, 0x1.d09e1ep-22f, 0x1.0f93ecp-56f, 0.0f,
     0x1.6b09a4p-105f, 0x1.129544p-77f, 0x1.f89e6p-66f, 0.0f, 0x1.6b95c8p-79f, 0.0f,
     0x1.0e2bdcp-70f, 0.0f, 0.0f, 0x1.78a6b6p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48576p-59f, 0.0f, 0x1.9f9c9cp-40f, 0x1.a8fd76p-52f, 0.0f, 0x1.9405cap-11f,
     0x1.1236d4p-102f, 0x1p0f, 0x1.f6ff5ap-40f, 0x1.72b70ap-34f, 0x1.212b1ap-6f,
     0x1.e38f26p-21f, 0x1.4101b2p-115f, 0x1.730122p-40f, 0x1.bb4ac4p-36f, 0.0f,
     0x1.8aba8ep-16f, 0.0f, 0x1.4cf306p-66f, 0x1.f7a55cp-126f, 0x1.942b5p-42f, 0.0f,
     0.0f, 0x1.a94614p-94f, 0.0f, 0.0f, 0x1.974f6ap-72f, 0.0f, 0x1.340ecap-80f,
     0x1.41acp-7f, 0.0f, 0.0f, 0x1.1b6f02p-18f, 0.0f, 0x1.f8add8p-26f, 0.0f,
     0x1.50b9bap-54f, 0.0f, 0x1.f6f15cp-121f, 0.0f, 0.0f, 0x1.128b8ep-29f,
     0x1.5afb78p-64f, 0.0f, 0.0f, 0x1.3f2d68p-23f, 0x1.cb767ap-93f, 0.0f,
     0x1.c8a946p-30f, 0.0f, 0x1.7fe4a4p-118f, 0x1.75be28p-46f, 0x1.cf85aap-111f, 0.0f,
     0x1.c4aa18p-78f, 0x1.aa90ap-74f, 0x1.789e7cp-24f, 0.0f, 0.0f, 0.0f,
     0x1.b34ccp-67f, 0x1.9c7c1p-17f, 0.0f, 0.0f, 0x1.a2822ap-73f, 0x1.943fc8p-97f,
     0x1.85e1dap-114f, 0.0f, 0x1.f2f742p-108f, 0x1.468296p-16f, 0.0f, 0x1.65fd8ep-23f,
     0.0f, 0x1.ff3c4ep-77f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.969c0ep-53f, 0.0f, 0x1.ee788cp-57f, 0x1.1d85c8p-105f,
     0x1.b4042ap-109f, 0.0f, 0x1.c29344p-65f, 0.0f, 0x1.15e188p-18f, 0.0f,
     0x1.28d96cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d62a9p-107f,
     0x1.0639bap-5f, 0x1.dd6d6ep-59f, 0.0f, 0x1.0e36eep-117f, 0x1.a5831ep-4f,
     0x1.1cf9f4p-126f, 0.0f, 0.0f, 0x1.ac0152p-35f, 0x1.fba7cep-74f, 0x1.d2ed38p-31f,
     0.0f, 0x1.600c7ap-73f, 0.0f, 0x1.ec2abcp-75f, 0.0f, 0x1.3a2c5ap-119f, 0.0f,
     0x1.f97b1ep-79f, 0.0f, 0.0f, 0.0f, 0x1.eefc1ep-36f, 0.0f, 0x1.059bacp-49f, 0.0f,
     0x1.5c459ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.253b46p-18f, 0x1.e064c2p-9f,
     0x1.08a39p-40f, 0.0f, 0.0f, 0x1.c45fdep-100f, 0.0f, 0x1.b8c7c2p-91f,
     0x1.3919f8p-103f, 0x1.8eeecap-80f, 0.0f, 0.0f, 0x1.85674p-121f, 0.0f,
     0x1.2a18c2p-80f, 0x1.7cb32cp-61f, 0x1.c5d7aep-79f, 0.0f, 0x1.569122p-60f, 0.0f,
     0x1.e4755ap-126f, 0x1.ee4558p-32f, 0.0f, 0x1.54b374p-3f, 0x1.dadeep-111f,
     0x1.95ebbap-48f, 0.0f, 0x1.2a11b8p-15f, 0x1.621854p-88f, 0.0f, 0.0f,
     0x1.5d1ea8p-1f, 0x1.4e565p-14f, 0.0f, 0x1.e8175ap-72f, 0x1.9326b8p-106f, 0.0f,
     0.0f, 0x1.407a42p-110f, 0x1.0a462ep-82f, 0.0f, 0.0f, 0x1.00a15ap-62f,
     0x1.c2e6d6p-28f, 0.0f, 0.0f, 0x1.381712p-13f, 0.0f, 0.0f, 0x1.95c8f6p-101f, 0.0f,
     0x1.14ff9p-33f, 0x1.98e394p-22f, 0.0f, 0x1.f4adc2p-83f, 0.0f, 0.0f,
     0x1.fe0316p-72f, 0.0f, 0x1.59ff0ep-70f, 0x1.f90ee4p-109f, 0.0f, 0x1.b4cf82p-62f,
     0.0f, 0x1.a5b8a8p-113f, 0x1.ebf51ep-92f, 0x1.d2766ap-121f, 0x1.c8f99ap-44f, 0.0f,
     0x1.efa086p-119f, 0.0f, 0x1.94dfe6p-101f, 0.0f, 0x1p0f, 0.0f, 0x1.ed4c34p-4f,
     0.0f, 0x1.6bb5d6p-89f, 0x1.eb5ceep-39f, 0.0f, 0.0f, 0x1.e160cep-55f,
     0x1.a683fap-68f, 0.0f, 0x1.cce9c8p-100f, 0.0f, 0x1.827c1p-112f, 0.0f, 0.0f, 0.0f,
     0x1.bc91e4p-107f, 0.0f, 0.0f, 0x1.5063f4p-108f, 0x1.e500a2p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f1b458p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.038e12p-104f, 0.0f, 0x1.d18ec8p-90f, 0.0f, 0x1.a57b7cp-122f, 0x1.d56664p-78f,
     0x1.99e84ap-89f, 0x1.c563eap-9f, 0.0f, 0x1.71373p-105f, 0.0f, 0.0f, 0.0f,
     0x1.0ae2bep-33f, 0x1.79bddap-124f, 0.0f, 0.0f, 0x1.4604bap-41f, 0.0f,
     0x1.46f9e4p-38f, 0.0f, 0x1.bdd538p-48f, 0x1.65fdfp-103f, 0.0f, 0.0f, 0.0f,
     0x1.89e3c6p-82f, 0x1.def2bap-28f, 0x1.34d67p-29f, 0x1.e15bdcp-65f,
     0x1.0f34b2p-101f, 0.0f, 0x1.798ac8p-81f, 0x1.bc54d4p-110f, 0.0f, 0.0f,
     0x1.ad1a1p-67f, 0x1.3deba8p-113f, 0.0f, 0.0f, 0x1.f95302p-81f, 0.0f, 0.0f, 0.0f,
     0x1.d004fap-25f, 0x1.6bcffp-27f, 0x1.be4df4p-33f, 0.0f, 0x1.37d716p-120f, 0.0f,
     0x1.b8149cp-121f, 0x1.15e11p-66f, 0x1.7c9966p-89f, 0x1.ed294ep-49f,
     0x1.f75114p-8f, 0.0f, 0x1.bb6418p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e1582p-61f,
     0.0f, 0x1.48d97ap-45f, 0x1.6ce364p-43f, 0x1.f9ce44p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.853c44p-90f, 0.0f, 0x1.343acep-112f, 0x1.ef135ep-40f, 0.0f,
     0x1.bddbccp-24f, 0.0f, 0.0f, 0.0f, 0x1.21a4d6p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5725b8p-49f, 0.0f, 0.0f, 0.0f, 0x1.55418ap-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aca5cp-70f, 0.0f, 0.0f, 0x1.515a9p-23f, 0.0f, 0.0f,
     0.0f, 0x1.3fbf9ep-10f, 0x1.44516ep-120f, 0x1.8783bep-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.35987p-92f, 0x1.be801cp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76409ap-103f, 0x1.62412ap-74f, 0x1.fdc3ecp-121f, 0x1.48d1acp-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6154a2p-52f, 0.0f, 0.0f, 0x1.23ab78p-14f, 0.0f, 0.0f,
     0x1.c80896p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.617a58p-61f, 0x1.774f52p-33f,
     0x1.93139ap-48f, 0x1.73e5cap-28f, 0x1.77f4b6p-13f, 0x1.0bac94p-49f, 0.0f,
     0x1.c148b8p-50f, 0.0f, 0.0f, 0x1.70c438p-112f, 0x1.7a3348p-58f, 0x1.74ff6ep-69f,
     0x1.e7d33cp-73f, 0x1.f2ab54p-4f, 0.0f, 0x1.d4bba6p-116f, 0x1.0732e6p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.445abp-27f, 0x1.b68ddep-69f, 0.0f, 0.0f, 0x1.4c46acp-106f,
     0x1.e50888p-15f, 0x1.55fcacp-69f, 0.0f, 0.0f, 0x1.728ad2p-73f, 0x1.c98bfp-2f,
     0.0f, 0.0f, 0x1.c08d9p-34f, 0.0f, 0x1.b6aeb4p-65f, 0x1.bd943p-117f, 0.0f, 0.0f,
     0x1.b427eep-42f, 0x1.f29a26p-54f, 0.0f, 0x1.319bf8p-52f, 0x1.303f96p-116f, 0.0f,
     0x1.7ec50ep-101f, 0.0f, 0x1.24b9fp-123f, 0.0f, 0.0f, 0.0f, 0x1.87dde6p-49f,
     0x1.1b0e08p-79f, 0x1.434dacp-54f, 0.0f, 0x1.5b8abep-50f, 0.0f, 0x1.f194c4p-90f,
     0x1.43c51p-66f, 0x1.6db71ep-22f, 0x1.c7eea6p-122f, 0.0f, 0.0f, 0x1.7c812ap-55f,
     0.0f, 0.0f, 0.0f, 0x1.b5d53p-125f, 0.0f, 0x1.00b328p-31f, 0.0f, 0x1.f23658p-18f,
     0.0f, 0.0f, 0x1.29a8dap-82f, 0.0f, 0x1.8098bp-38f, 0.0f, 0x1.ed6b98p-6f, 0.0f,
     0.0f, 0x1.b84ccep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.163cf6p-5f, 0.0f, 0.0f,
     0x1.4c205ep-37f, 0x1.15bfe2p-33f, 0x1.07ca92p-3f, 0.0f, 0x1.50e5a6p-75f,
     0x1.fed442p-118f, 0.0f, 0x1.a8d1dap-2f, 0.0f, 0x1.f6aba8p-24f, 0x1.d5c62ap-14f,
     0x1.961176p-25f, 0.0f, 0x1.006474p-52f, 0x1.523c3ap-21f, 0x1.b08b82p-87f,
     0x1.674cc8p-71f, 0x1.9b298ap-119f, 0x1.739758p-39f, 0x1.aecbd6p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7861fp-106f, 0x1.037a12p-47f, 0.0f, 0.0f, 0x1.fbcec2p-2f,
     0.0f, 0x1.96cda4p-82f, 0x1.179cdp-76f, 0.0f, 0x1.bd1fa4p-53f, 0x1.cafe08p-53f,
     0x1.654cfcp-24f, 0.0f, 0x1.761802p-63f, 0x1.6f2c2cp-15f, 0x1.bfffaap-125f,
     0x1.f0e4fap-71f, 0x1.ce9988p-26f, 0.0f, 0.0f, 0x1.9d4198p-34f, 0x1.072fb8p-20f,
     0.0f, 0.0f, 0x1.2353c6p-47f, 0.0f, 0x1.19fda2p-15f, 0.0f, 0.0f, 0x1.ca2db8p-42f,
     0x1.8cf3ccp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a868ep-1f, 0x1.5b16b2p-92f,
     0x1.c592d4p-20f, 0.0f, 0.0f, 0x1.c86b16p-103f, 0x1.4ea892p-97f, 0.0f,
     0x1.c29cfcp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32e352p-122f,
     0.0f, 0.0f, 0x1.577e26p-54f, 0x1.dfb6e6p-40f, 0x1.2e0fcep-38f, 0.0f,
     0x1.3abb6cp-115f, 0.0f, 0x1.710faep-81f, 0x1.eab5b8p-20f, 0x1.d24902p-75f,
     0x1.8b06f8p-74f, 0x1.53ca32p-14f, 0x1.999768p-62f, 0.0f, 0.0f, 0.0f,
     0x1.327b08p-110f, 0x1.e0fe24p-102f, 0x1.52c4cp-65f, 0x1.4f5d8ep-87f,
     0x1.cc0006p-109f, 0x1.71840ap-5f, 0x1.275a14p-19f, 0.0f, 0.0f, 0x1.52564p-30f,
     0.0f, 0x1.1770ap-27f, 0.0f, 0x1.f7b328p-96f, 0x1.983168p-17f, 0x1.2f7ef4p-64f,
     0.0f, 0x1.022d4ap-3f, 0.0f, 0.0f, 0x1.eedcb6p-113f, 0x1.874486p-102f, 0.0f, 0.0f,
     0.0f, 0x1.b2e92ap-117f, 0x1.aa1eeep-23f, 0x1.b5bdfep-29f, 0x1.e2cd68p-111f,
     0x1.93e238p-88f, 0x1.7501fep-81f, 0.0f, 0x1.b3dcfp-63f, 0.0f, 0.0f,
     0x1.f2d104p-71f, 0x1.0d44d2p-97f, 0x1.8971bp-102f, 0x1.bbef78p-68f, 0.0f,
     0x1.88373ap-35f, 0x1.b20f82p-32f, 0x1.dd7c12p-89f, 0.0f, 0.0f, 0.0f,
     0x1.c10e0ap-42f, 0.0f, 0.0f, 0.0f, 0x1.6402ecp-61f, 0.0f, 0x1.fa3c3ap-2f,
     0x1.bf733ap-71f, 0.0f, 0x1.a9af6ap-7f, 0.0f, 0.0f, 0x1.c51248p-76f, 0.0f,
     0x1.5a8baep-27f, 0x1.544562p-97f, 0.0f, 0.0f, 0x1.be8bb2p-114f, 0.0f,
     0x1.f3ab3ap-45f, 0x1.4aa3f2p-70f, 0x1.b06436p-125f, 0x1.80b6aap-65f,
     0x1.cb898ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.604208p-108f,
     0x1.dea554p-102f, 0.0f, 0.0f, 0.0f, 0x1.cf1c7ap-27f, 0.0f, 0x1.add6b8p-62f, 0.0f,
     0.0f, 0x1.e451dap-7f, 0.0f, 0.0f, 0.0f, 0x1.351966p-112f, 0x1.307422p-38f,
     0x1.ee1dc2p-9f, 0x1.cb163ep-78f, 0x1.32370cp-111f, 0x1.6533bcp-46f,
     0x1.4176a8p-53f, 0x1.397052p-88f, 0.0f, 0.0f, 0x1.33b02p-65f, 0.0f,
     0x1.b28fb4p-42f, 0x1.1f8d3p-35f, 0.0f, 0x1.7cc38cp-78f, 0.0f, 0.0f,
     0x1.523d7cp-45f, 0x1.0e43d2p-51f, 0.0f, 0x1.e89236p-38f, 0.0f, 0x1.2f3932p-20f,
     0x1.e126bep-70f, 0x1.9e24fcp-94f, 0.0f, 0x1.58960ap-119f, 0.0f, 0.0f,
     0x1.6a808ep-5f, 0x1.2ec5a4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d17fep-79f, 0.0f, 0x1.378844p-109f, 0.0f, 0.0f, 0.0f, 0x1.d3f716p-97f, 0.0f,
     0.0f, 0x1.74826ap-52f, 0x1.e64886p-113f, 0.0f, 0x1.6c0652p-106f, 0x1.b15206p-87f,
     0x1.0295f8p-106f, 0x1.4e5312p-4f, 0x1.05ede2p-110f, 0.0f, 0x1.1b9468p-123f,
     0x1.3813c4p-4f, 0.0f, 0x1.56274cp-67f, 0x1.c2d618p-31f, 0.0f, 0x1.e0ca5ep-60f,
     0.0f, 0.0f, 0x1.1836ep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee260cp-118f,
     0x1.45583p-27f, 0x1.a0f964p-116f, 0.0f, 0.0f, 0x1.31d258p-114f, 0x1.02a428p-14f,
     0.0f, 0x1.760fd8p-49f, 0x1.ac1feep-37f, 0x1.6b191ap-76f, 0x1.3772a4p-42f,
     0x1.8b979ep-84f, 0x1.d396c6p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c5256p-83f,
     0x1.38841ap-116f, 0x1.2097aep-100f, 0x1.5a3cp-16f, 0x1.dc0c5p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.145b5ap-43f, 0x1.2b2026p-23f, 0x1.3009e4p-96f, 0x1.9c3e6ep-59f,
     0x1.00cf34p-125f, 0.0f, 0.0f, 0.0f, 0x1.0a49c6p-20f, 0x1.19ae0cp-77f,
     0x1.eaafb8p-95f, 0x1.a8f416p-21f, 0.0f, 0.0f, 0x1.b5569cp-9f, 0.0f, 0.0f, 0.0f,
     0x1.9d0deep-43f, 0x1.583abap-41f, 0x1.4b2928p-126f, 0.0f, 0x1.092b02p-50f, 0.0f,
     0x1.dc511cp-16f, 0x1.b740e4p-85f, 0.0f, 0.0f, 0x1.4d0568p-18f, 0x1.caa0ap-65f,
     0x1.69ae78p-69f, 0.0f, 0x1.9bbd9p-37f, 0.0f, 0.0f, 0x1.e1a4c8p-49f,
     0x1.3e4512p-76f, 0.0f, 0.0f, 0x1.16dd7cp-63f, 0.0f, 0.0f, 0x1.05a936p-32f, 0.0f,
     0x1.271cep-1f, 0x1.5a77e4p-94f, 0.0f, 0x1.af88b2p-78f, 0.0f, 0.0f, 0.0f,
     0x1.8ba64ap-42f, 0.0f, 0x1.4b73fap-126f, 0x1.388cf8p-111f, 0.0f, 0.0f,
     0x1.3b841p-48f, 0.0f, 0.0f, 0x1.e516b2p-111f, 0.0f, 0.0f, 0.0f, 0x1.c8a354p-69f,
     0x1.508768p-84f, 0x1.90c13ap-39f, 0x1.bb69ep-14f, 0.0f, 0x1.5fb11cp-40f, 0.0f,
     0x1.c7cf48p-114f, 0x1.abb64p-117f, 0x1.0df544p-50f, 0.0f, 0.0f, 0.0f,
     0x1.55b306p-67f, 0.0f, 0.0f, 0x1.5e41cep-52f, 0.0f, 0.0f, 0.0f, 0x1.de92cap-45f,
     0x1.9fba0ep-33f, 0.0f, 0x1.bc287ap-20f, 0x1.eef09ep-65f, 0x1.9c2c14p-62f,
     0x1.a104b4p-58f, 0x1.846778p-80f, 0.0f, 0.0f, 0x1.6d1a7cp-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aae4acp-4f, 0.0f, 0x1.6844ccp-116f, 0.0f, 0x1.d54a5p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1cdddcp-101f, 0.0f, 0x1.e7697p-71f, 0x1.e53cd6p-59f, 0.0f, 0.0f,
     0x1.13ebf4p-13f, 0.0f, 0x1.6a01ep-3f, 0x1.2b38fp-20f, 0.0f, 0.0f,
     0x1.464e16p-50f, 0x1.dd05dep-94f, 0.0f, 0.0f, 0x1.316758p-81f, 0x1.8d411cp-52f,
     0x1.003c1ap-42f, 0.0f, 0.0f, 0x1.5e9fc2p-44f, 0.0f, 0.0f, 0.0f, 0x1.c397d2p-71f,
     0.0f, 0.0f, 0.0f, 0x1.20910ep-56f, 0x1.9a4da2p-80f, 0.0f, 0x1.58bcp-14f, 0.0f,
     0x1.f91c34p-79f, 0x1.c78474p-104f, 0.0f, 0.0f, 0.0f, 0x1.4147dep-69f,
     0x1.603a0ap-119f, 0.0f, 0x1.a3a884p-110f, 0x1.e00adcp-106f, 0.0f, 0.0f,
     0x1.e23e5ap-120f, 0.0f, 0.0f, 0.0f, 0x1.d5a86cp-30f, 0.0f, 0x1.3a9e9p-108f,
     0x1.48e754p-51f, 0.0f, 0x1.f72d2ap-79f, 0.0f, 0x1.9f8a02p-78f, 0x1.7927d4p-70f,
     0x1.e241acp-124f, 0x1.768a0cp-29f, 0x1.0b393ap-75f, 0.0f, 0.0f, 0x1.237204p-109f,
     0x1.7f4b86p-15f, 0.0f, 0x1.c2bfe6p-116f, 0.0f, 0x1.f7dab6p-11f, 0.0f,
     0x1.4825f8p-63f, 0x1.720fe2p-20f, 0x1.f545bap-62f, 0x1.22f8eep-98f,
     0x1.4ada3p-7f, 0.0f, 0x1.2e3d08p-119f, 0x1.4fe5f2p-74f, 0x1.5d4cep-8f, 0.0f,
     0.0f, 0x1.ad589p-75f, 0.0f, 0x1.2d9248p-10f, 0x1.1774cap-11f, 0.0f,
     0x1.2ca844p-48f, 0x1.db43dp-103f, 0x1.7728fep-123f, 0.0f, 0x1.128a94p-107f,
     0x1.a21baap-103f, 0x1.ec99c4p-105f, 0.0f, 0x1.58db3p-125f, 0.0f, 0.0f,
     0x1.389a7ap-109f, 0.0f, 0.0f, 0x1.b70da6p-113f, 0x1.bd7c3cp-87f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.46db82p-84f, 0.0f, 0.0f, 0.0f, 0x1.efd084p-84f, 0.0f,
     0x1.7d5a0ap-45f, 0x1.db7fd8p-20f, 0.0f, 0.0f, 0x1.5262e2p-106f, 0x1.b2670ap-24f,
     0.0f, 0.0f, 0.0f, 0x1.fd3b9p-79f, 0.0f, 0x1.69372cp-59f, 0.0f, 0.0f, 0.0f,
     0x1.9b5fdp-103f, 0x1.45f4fep-106f, 0.0f, 0.0f, 0.0f, 0x1.9ffee4p-111f, 0.0f,
     0.0f, 0x1.2f48fep-41f, 0.0f, 0x1.29f992p-19f, 0.0f, 0x1.131c64p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.417f7ap-1f, 0x1.76f0eep-97f, 0.0f, 0x1p0f, 0x1.83a3eap-70f,
     0x1.208f92p-41f, 0x1.2d2742p-89f, 0.0f, 0x1.d68bdcp-126f, 0x1.2e99fcp-67f,
     0x1.4cb902p-93f, 0.0f, 0.0f, 0x1.19a59ap-21f, 0x1.7bc15ap-31f, 0x1.001eecp-77f,
     0.0f, 0x1.afb64ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d85094p-23f, 0x1.61dd7cp-66f,
     0.0f, 0x1.c2c266p-87f, 0.0f, 0x1.ca0cfcp-69f, 0x1.925f12p-111f, 0x1.7157bep-90f,
     0x1.2764fcp-51f, 0x1.e4dcbep-120f, 0.0f, 0x1.2137cep-85f, 0x1.432004p-110f, 0.0f,
     0x1.0aa874p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.387bc6p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c0fc46p-53f, 0x1.a7fc38p-113f, 0x1.beb548p-106f, 0x1.4f4ca8p-112f,
     0.0f, 0.0f, 0.0f, 0x1.e75f2ep-52f, 0x1.7ea1dap-124f, 0x1.50a596p-8f, 0.0f, 0.0f,
     0x1.b661d2p-21f, 0.0f, 0x1.5b1aap-88f, 0.0f, 0.0f, 0.0f, 0x1.252546p-106f,
     0x1.af0538p-126f, 0x1.223dacp-34f, 0.0f, 0.0f, 0x1.58839p-95f, 0.0f, 0.0f,
     0x1.3fe0bap-5f, 0x1.e40d1ep-1f
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
            tmp2 = Sleef_finz_atan2f1_u10purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_atan2f1_u10purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atan2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
