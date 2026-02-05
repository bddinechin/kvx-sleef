/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f1_u10purecfma.c --function \
 *     Sleef_finz_exp2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.c996dp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.293fb2p-8f,
     0x1.4fde62p-46f, 0.0f, 0.0f, 0.0f, 0x1.f06b92p-119f, 0x1.20108cp-33f,
     0x1.ac5c04p-34f, 0.0f, 0x1.a088eep-105f, 0.0f, 0.0f, 0x1.aa48a2p-37f,
     0x1.7c8a5ap-85f, 0.0f, 0.0f, 0.0f, 0x1.feffb2p-53f, 0x1.cdabe4p-29f, 0.0f,
     0x1.ed2c7cp-26f, 0.0f, 0.0f, 0x1.5e6d06p-90f, 0x1.c13f36p-19f, 0x1.2abe5ap-81f,
     0x1.62f562p-40f, 0x1.51a0eep-71f, 0x1.8c473ap-69f, 0.0f, 0.0f, 0x1.29d5eap-50f,
     0.0f, 0.0f, 0x1.8044b8p-30f, 0.0f, 0x1.f4db58p-100f, 0x1.95e11cp-67f, 0.0f, 0.0f,
     0x1.5948ccp-10f, 0.0f, 0.0f, 0x1.a5c572p-23f, 0.0f, 0.0f, 0x1.36c2c6p-28f,
     0x1.c540e4p-93f, 0x1.0ff5a6p-92f, 0x1.b1a81p-53f, 0x1.e18d2ep-64f, 0.0f,
     0x1.3628aap-39f, 0x1.2aca28p-98f, 0x1.eb4aaap-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47c6fap-52f, 0.0f, 0.0f, 0.0f, 0x1.08b27p-6f, 0.0f, 0x1.1cc68ap-123f, 0.0f,
     0x1.beb954p-44f, 0x1.4a6e08p-89f, 0.0f, 0x1.8e15e2p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.34a34p-57f, 0.0f, 0.0f, 0.0f, 0x1.b7154ep-18f, 0.0f,
     0x1.15d87ap-92f, 0x1.65bae8p-19f, 0.0f, 0.0f, 0.0f, 0x1.67d03p-94f, 0.0f, 0.0f,
     0.0f, 0x1.2492b2p-23f, 0x1.e0e534p-79f, 0.0f, 0x1.f5615ap-85f, 0.0f,
     0x1.177b7ep-35f, 0x1.be612p-3f, 0x1.1b6764p-89f, 0.0f, 0.0f, 0.0f,
     0x1.f7d9c4p-32f, 0x1.ada13p-122f, 0.0f, 0x1.6d5156p-1f, 0.0f, 0x1.bfd482p-71f,
     0x1.71c71cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dbe9ap-73f, 0x1.c7533p-80f,
     0.0f, 0.0f, 0x1.1542aap-90f, 0x1.69a676p-113f, 0x1.27feeap-93f, 0x1.141494p-28f,
     0x1.975074p-24f, 0.0f, 0x1.efaa04p-19f, 0.0f, 0x1.f423d4p-66f, 0x1.b0943ep-115f,
     0.0f, 0x1.7f186ep-38f, 0x1.aabccap-53f, 0.0f, 0x1.f3b64p-46f, 0x1.851848p-53f,
     0x1.cd017cp-112f, 0x1.dd4e8p-123f, 0x1.ff4ee8p-46f, 0x1.b6eap-77f,
     0x1.cc523cp-102f, 0.0f, 0.0f, 0.0f, 0x1.93051ep-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.572baep-124f, 0.0f, 0.0f, 0x1.8b0812p-88f, 0x1.86f582p-68f,
     0x1.2ed134p-109f, 0x1.bd1224p-80f, 0x1.b7f928p-47f, 0.0f, 0x1.1b21ccp-32f, 0.0f,
     0.0f, 0.0f, 0x1.caea08p-123f, 0.0f, 0.0f, 0.0f, 0x1.236b26p-39f, 0x1.4e6afep-23f,
     0.0f, 0x1.519558p-74f, 0.0f, 0x1.6c50dp-3f, 0.0f, 0.0f, 0x1.afd162p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5ea1d6p-59f, 0.0f, 0x1.0993c8p-122f, 0x1.5ba52ap-11f, 0.0f,
     0x1.9a0c08p-122f, 0.0f, 0.0f, 0x1.09ad78p-70f, 0.0f, 0.0f, 0x1.57952ap-2f,
     0x1.aa24ccp-52f, 0.0f, 0.0f, 0x1.4a41e8p-112f, 0x1.112c88p-31f, 0.0f,
     0x1.77110cp-6f, 0x1.b912c2p-87f, 0.0f, 0x1.146c8cp-71f, 0x1.667012p-32f, 0.0f,
     0.0f, 0x1.698d26p-71f, 0.0f, 0x1.0a4a02p-24f, 0x1.5171cap-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e42f8p-82f, 0x1.70056ap-104f, 0x1.84d772p-34f, 0.0f,
     0x1.9e5faep-8f, 0.0f, 0x1.c5b48ap-83f, 0.0f, 0x1.c9245p-27f, 0.0f, 0.0f,
     0x1.30751ap-71f, 0.0f, 0x1.a1ac3cp-22f, 0x1.b63062p-40f, 0.0f, 0x1.12e368p-34f,
     0.0f, 0x1.e1c97ap-33f, 0x1.776268p-95f, 0x1.3089c2p-110f, 0x1.db94f4p-126f,
     0x1.7337ecp-46f, 0x1.b74b84p-121f, 0x1.691b66p-19f, 0x1.9df2e4p-39f,
     0x1.42de36p-40f, 0x1.26882cp-99f, 0x1.725c8p-65f, 0x1.3e77c4p-101f, 0.0f,
     0x1.c88c6p-75f, 0.0f, 0x1.92d47ap-64f, 0.0f, 0.0f, 0x1.50f25p-48f,
     0x1.09c69ep-65f, 0.0f, 0x1.3c2792p-46f, 0.0f, 0x1.8cf084p-83f, 0.0f, 0.0f, 0.0f,
     0x1.2f278ap-90f, 0x1.a3c5b4p-12f, 0.0f, 0.0f, 0x1.7e1de2p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.39d62p-64f, 0.0f, 0x1.c8f152p-70f, 0.0f, 0.0f, 0.0f,
     0x1.658cfcp-84f, 0.0f, 0x1.8ba288p-94f, 0.0f, 0x1.b3f6bap-109f, 0.0f,
     0x1.7f53d2p-103f, 0.0f, 0.0f, 0x1.458562p-64f, 0.0f, 0x1.c2de18p-26f, 0.0f, 0.0f,
     0x1.8f9568p-59f, 0.0f, 0.0f, 0.0f, 0x1.8cf348p-35f, 0x1.fd1e46p-100f,
     0x1.401082p-47f, 0x1.e3e29cp-58f, 0.0f, 0x1.ccdfep-67f, 0.0f, 0x1.d905d8p-62f,
     0.0f, 0x1.296218p-66f, 0.0f, 0x1p0f, 0x1.7fb6a2p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e92c9p-57f, 0x1.b1d0bcp-82f, 0.0f, 0x1.909cfap-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.759e0cp-42f, 0x1.f3b38ap-120f, 0.0f, 0.0f, 0x1.81a08p-62f, 0.0f,
     0x1.abd1ap-24f, 0x1.22594ap-80f, 0.0f, 0.0f, 0.0f, 0x1.f549ccp-40f,
     0x1.7aafeep-126f, 0x1.f61f1cp-62f, 0.0f, 0.0f, 0x1.778766p-65f, 0.0f, 0.0f,
     0x1.bbcda2p-22f, 0.0f, 0x1.58d544p-100f, 0.0f, 0x1.236bdp-100f, 0x1.1f2e5cp-111f,
     0x1.fa2baap-97f, 0x1.f6601cp-56f, 0.0f, 0x1.c66796p-117f, 0.0f, 0x1.6cf26ap-97f,
     0x1.d3ad46p-62f, 0.0f, 0x1.eb3efp-34f, 0.0f, 0x1.c2d59cp-80f, 0x1.743412p-55f,
     0x1.1304a2p-39f, 0.0f, 0x1.58dab4p-63f, 0x1.48f532p-53f, 0x1p0f, 0.0f, 0.0f,
     0x1.6da008p-73f, 0x1.7f4d1p-32f, 0x1.24d53ap-75f, 0.0f, 0.0f, 0x1.baa0bap-19f,
     0x1.c2c2dep-36f, 0x1.2d87bp-5f, 0.0f, 0.0f, 0.0f, 0x1.6c6728p-35f,
     0x1.9e90a2p-4f, 0x1.f03984p-91f, 0.0f, 0.0f, 0x1.e7ba4ap-11f, 0x1.7ab314p-64f,
     0.0f, 0.0f, 0.0f, 0x1.5f4fd2p-32f, 0x1.1ce25p-21f, 0x1.2888ccp-41f,
     0x1.96f96p-84f, 0.0f, 0.0f, 0x1.4fdaa2p-49f, 0.0f, 0.0f, 0.0f, 0x1.a1f4b6p-42f,
     0.0f, 0x1.0825f6p-126f, 0x1.bbe602p-8f, 0.0f, 0.0f, 0x1.99a4dep-61f, 0.0f, 0.0f,
     0x1.83ef7p-24f, 0.0f, 0x1.9f4c56p-75f, 0.0f, 0.0f, 0.0f, 0x1.ce935ep-108f, 0.0f,
     0x1.1fa0fp-14f, 0.0f, 0.0f, 0x1.74dde8p-79f, 0x1.5be74ap-37f, 0x1.90b9e6p-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfb5eap-46f, 0.0f, 0.0f, 0.0f,
     0x1.3f8762p-93f, 0.0f, 0x1.d27cf6p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.064dc8p-25f,
     0.0f, 0x1.37811cp-33f, 0x1.5c7056p-107f, 0.0f, 0x1.0e253p-106f, 0.0f, 0.0f, 0.0f,
     0x1.2698ccp-49f, 0.0f, 0x1.011a34p-88f, 0.0f, 0x1.c42788p-54f, 0.0f, 0.0f, 0.0f,
     0x1.f20f5ep-10f, 0.0f, 0x1.87a92ep-10f, 0.0f, 0.0f, 0x1.e88becp-94f, 0.0f,
     0x1.0fc618p-85f, 0.0f, 0x1.876546p-27f, 0x1.8f4e2p-115f, 0.0f, 0x1.d6fd7ep-87f,
     0.0f, 0x1.ad354ep-114f, 0x1.528bfep-123f, 0x1.4b9d6cp-46f, 0.0f, 0.0f,
     0x1.89f80cp-43f, 0.0f, 0.0f, 0x1.c00ebp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a12b18p-82f, 0.0f, 0.0f, 0.0f, 0x1.9f9e1ap-36f, 0x1.208adap-3f,
     0x1.c2e39cp-111f, 0.0f, 0.0f, 0.0f, 0x1.a1549p-110f, 0x1.fa088cp-56f,
     0x1.7a4e82p-30f, 0.0f, 0x1.fea27ap-77f, 0x1.f11316p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2df566p-51f, 0x1.206df6p-41f, 0x1.3a2c7p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55ef74p-28f, 0.0f, 0x1.1e325cp-22f, 0x1.9c93dcp-65f, 0x1.cd4934p-90f, 0.0f,
     0x1.1225d6p-126f, 0x1.9bfc12p-60f, 0x1.06e8fcp-85f, 0.0f, 0x1.56eaf4p-79f, 0.0f,
     0.0f, 0x1.6662bcp-80f, 0.0f, 0x1.3726c4p-27f, 0x1.28257ap-64f, 0.0f,
     0x1.8da808p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55c28p-54f, 0.0f, 0.0f,
     0x1.43a1c8p-98f, 0x1.4bdee6p-121f, 0.0f, 0x1.de8ef8p-118f, 0x1.5fc756p-124f,
     0.0f, 0.0f, 0.0f, 0x1.74c896p-25f, 0x1.916af8p-78f, 0x1.b16a68p-105f,
     0x1.45e412p-71f, 0.0f, 0x1.3b0eep-11f, 0x1.bf2dacp-23f, 0.0f, 0x1.38f84ep-61f,
     0x1.a58472p-104f, 0.0f, 0.0f, 0x1.eeb042p-100f, 0.0f, 0x1.5cd8a2p-111f,
     0x1.2036ecp-9f, 0.0f, 0x1.7237a4p-119f, 0x1.05075p-48f, 0x1.36d35cp-5f, 0.0f,
     0x1.e62c6ep-5f, 0.0f, 0x1.50c7e4p-97f, 0.0f, 0x1.f12444p-48f, 0x1.5b23cep-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.704502p-85f, 0.0f, 0x1.f5384ep-60f, 0.0f,
     0x1.80a3c2p-76f, 0x1.6d7b06p-33f, 0.0f, 0x1.c84658p-63f, 0.0f, 0x1.b2f84p-4f,
     0.0f, 0x1.73596p-116f, 0x1.8bd266p-34f, 0.0f, 0x1.7fae3ap-28f, 0x1.fca9a4p-14f,
     0.0f, 0.0f, 0x1.c32ccep-94f, 0x1.21656ap-104f, 0.0f, 0x1.da0adep-58f, 0.0f,
     0x1.6a6452p-32f, 0x1.38cf6ep-64f, 0x1.6aea92p-118f, 0.0f, 0.0f, 0.0f,
     0x1.7c050ep-36f, 0.0f, 0x1.b56eb2p-107f, 0x1.95673ep-81f, 0x1.483362p-96f, 0.0f,
     0x1.17fe14p-47f, 0.0f, 0x1.f2a1d2p-49f, 0.0f, 0x1.be9474p-21f, 0.0f, 0.0f,
     0x1.620842p-25f, 0.0f, 0x1.a772fcp-119f, 0.0f, 0x1.1e892ap-92f, 0x1.0f541ap-18f,
     0x1.5d1134p-5f, 0x1.71e1f2p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fc7cap-113f, 0.0f,
     0x1.11b336p-18f, 0.0f, 0.0f, 0x1.c71b94p-56f, 0.0f, 0.0f, 0x1.699e9ep-106f,
     0x1.903ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5eef96p-70f, 0.0f, 0.0f,
     0x1.1d9bb4p-64f, 0.0f, 0x1.b80e8cp-52f, 0x1.ec452p-41f, 0x1.cfac5cp-124f, 0.0f,
     0x1.43fc98p-51f, 0.0f, 0x1.8a39dep-85f, 0.0f, 0.0f, 0x1.f29f74p-76f, 0.0f,
     0x1.61205ap-71f, 0.0f, 0.0f, 0x1.53641p-61f, 0x1.98290ap-48f, 0.0f,
     0x1.3e6ba6p-71f, 0x1.e2d7fcp-104f, 0.0f, 0x1.c7949p-8f, 0x1.55d136p-33f, 0.0f,
     0.0f, 0x1.c83b88p-91f, 0x1.8cf7d8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a39606p-11f, 0x1.e5802ap-87f, 0x1.ed565p-7f, 0.0f, 0x1.a410dp-65f,
     0x1.072bccp-93f, 0.0f, 0x1.1e52f4p-18f, 0x1.181194p-3f, 0x1.782782p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c718e6p-56f, 0.0f, 0x1.0a0cf4p-47f, 0.0f,
     0x1.00358ep-51f, 0x1.35a9dcp-7f, 0x1.88b4ecp-91f, 0.0f, 0.0f, 0.0f,
     0x1.8ee002p-119f, 0x1.068ef2p-66f, 0.0f, 0.0f, 0x1.a2b464p-70f, 0.0f,
     0x1.0fd68p-111f, 0.0f, 0.0f, 0x1.4cd3eep-9f, 0x1.811e16p-56f, 0.0f,
     0x1.eeb872p-34f, 0x1.7bc086p-36f, 0.0f, 0.0f, 0x1.817056p-14f, 0x1.4e3f6p-64f,
     0.0f, 0x1.682c2p-109f, 0.0f, 0x1.b448bep-47f, 0x1.db6d58p-6f, 0x1.c33bep-18f,
     0x1.0c43dcp-25f, 0x1.75a1c8p-3f, 0x1.5dd3ap-9f, 0x1.8df3cep-28f, 0x1.7a533ap-3f,
     0x1.d81ec2p-72f, 0x1.915ab2p-111f, 0x1.d7a9d2p-122f, 0.0f, 0.0f,
     0x1.a0d5c4p-110f, 0.0f, 0x1.05b67ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e86ef2p-73f, 0.0f, 0x1.12c33cp-16f, 0x1.288ab8p-75f, 0x1.ac0716p-42f, 0.0f,
     0x1.12ad1cp-20f, 0x1.75ab04p-59f, 0x1.7579ccp-36f, 0.0f, 0x1.e107aep-34f, 0.0f,
     0.0f, 0.0f, 0x1.1c577ep-85f, 0.0f, 0x1.974bc6p-62f, 0.0f, 0.0f, 0.0f,
     0x1.5a2422p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09c80ep-12f, 0.0f,
     0x1.4cd89ep-34f, 0.0f, 0.0f, 0.0f, 0x1.ecc272p-78f, 0x1.6c6dccp-90f, 0.0f,
     0x1.0f1228p-76f, 0x1.26833p-63f, 0x1.16149ap-25f, 0.0f, 0.0f, 0x1.ab112p-11f,
     0.0f, 0x1.9037d2p-5f, 0.0f, 0.0f, 0x1.7cc2d4p-119f, 0x1.80ca42p-121f,
     0x1.3cef78p-70f, 0x1.def1a4p-119f, 0x1.a7cfdp-44f, 0.0f, 0.0f, 0x1.78909p-74f,
     0.0f, 0x1.0d02d8p-125f, 0.0f, 0.0f, 0.0f, 0x1.a829dcp-22f, 0x1.33dc9p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.00b5ep-41f, 0.0f, 0x1.113556p-59f, 0x1.4f994cp-87f,
     0x1.d8ba66p-92f, 0.0f, 0x1.a574d8p-58f, 0x1.966b4p-83f, 0.0f, 0x1.abce1ap-42f,
     0.0f, 0.0f, 0.0f, 0x1.0d14ap-126f, 0.0f, 0x1.30b17p-96f, 0x1.05139cp-11f,
     0x1.1a8d6cp-16f, 0x1.82e372p-62f, 0x1.73709p-67f, 0x1.70a0c6p-19f,
     0x1.6aca78p-16f, 0.0f, 0.0f, 0.0f, 0x1.9b4a46p-21f, 0.0f, 0.0f, 0x1.34a136p-80f,
     0x1.36653ep-37f, 0x1.a85cd8p-8f, 0x1.d09544p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96fe06p-3f, 0x1.05bddp-110f, 0x1.d8eb92p-95f, 0x1.95d31p-11f,
     0x1.4b38dap-109f, 0.0f, 0.0f, 0.0f, 0x1.a8c078p-33f, 0x1.8fee26p-40f,
     0x1.e9992ep-56f, 0x1.d60e5p-7f, 0x1.2d9c2ap-85f, 0x1.a5372p-13f, 0.0f, 0.0f,
     0x1.982522p-25f, 0x1.f3aebap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.142d96p-77f, 0x1.3a7d42p-121f, 0x1.4a158cp-11f, 0x1.09fd6ep-118f,
     0x1.9ccc36p-51f, 0.0f, 0x1.68f0d2p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4c8bcp-44f,
     0x1.ae5cbep-12f, 0.0f, 0x1.8e9cb6p-37f, 0.0f, 0.0f, 0x1.79faap-103f,
     0x1.0468fap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2bb82p-32f,
     0x1.37cbep-22f, 0.0f, 0.0f, 0x1.977bd8p-18f, 0.0f, 0.0f, 0x1.a183c2p-83f,
     0x1.a5d34p-43f, 0x1.ee26c6p-4f, 0x1.c55146p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.701314p-27f, 0.0f, 0.0f, 0.0f, 0x1.101c02p-8f, 0.0f, 0x1.d7a5a2p-91f,
     0x1.542adcp-7f, 0x1.5bd7c4p-10f, 0.0f, 0x1.8ab0acp-52f, 0.0f, 0x1.5e93eap-6f,
     0.0f, 0x1.f5b0e6p-90f, 0x1.07d06cp-48f, 0.0f, 0x1.208344p-9f, 0x1.7cb3b8p-53f,
     0x1.d93608p-120f, 0x1.b288f2p-113f, 0x1.ff19cep-77f, 0.0f, 0.0f, 0.0f,
     0x1.4dccf8p-26f, 0.0f, 0x1.576cacp-28f, 0x1.008d6p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ff00ap-116f, 0x1.7a627p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59cb1ap-46f, 0.0f,
     0x1.c7c1e6p-68f, 0.0f, 0x1.b4bf8ap-91f, 0.0f, 0x1.2fc4eep-9f, 0x1.77947ap-40f,
     0x1.7a1678p-13f, 0.0f, 0x1.452d1ep-93f, 0x1.e99a1ep-51f, 0x1.3db97ap-34f, 0.0f,
     0.0f, 0x1.b6b9ap-12f, 0.0f, 0x1.d0957ep-47f, 0x1.0b8c06p-126f, 0.0f,
     0x1.9b71c2p-74f, 0.0f, 0.0f, 0.0f, 0x1.6a41dcp-55f, 0.0f, 0.0f, 0x1.409accp-60f,
     0.0f, 0.0f, 0x1.fd9dc4p-65f, 0x1.2d00fep-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3adcd8p-51f, 0x1.83a12p-77f, 0.0f
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_exp2f1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_exp2f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
