/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f1_u35purecfma.c --function \
 *     Sleef_exp2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.8f3758p-5f, 0.0f, 0x1.ef07dcp-90f, 0.0f, 0x1.63b706p-59f, 0.0f,
     0x1.f4d792p-51f, 0.0f, 0.0f, 0x1.ac105p-30f, 0x1.cff0d8p-24f, 0x1.b203fp-3f,
     0.0f, 0x1.7d2448p-45f, 0.0f, 0x1.e39a7p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.15e604p-98f, 0.0f, 0x1.bbadp-17f, 0.0f, 0.0f,
     0x1.d3acfp-51f, 0.0f, 0x1.069412p-122f, 0x1.fc2e6ep-117f, 0x1.b043bep-24f,
     0x1.220bbep-39f, 0.0f, 0x1.d1c7a6p-97f, 0x1.70b6dep-40f, 0x1.3002fp-17f, 0.0f,
     0x1.a71a94p-53f, 0x1p0f, 0.0f, 0x1.7b4b52p-61f, 0x1.12eee6p-110f, 0.0f,
     0x1.646444p-49f, 0x1.a4b27cp-91f, 0x1.e2e82p-44f, 0.0f, 0x1.9a081ap-119f,
     0x1.5ac51cp-23f, 0.0f, 0.0f, 0x1.0f899ep-20f, 0.0f, 0x1.e4cacep-92f, 0.0f, 0.0f,
     0x1.e0d214p-70f, 0x1.23b788p-125f, 0.0f, 0x1.f8b1bap-19f, 0x1.955fa4p-47f, 0.0f,
     0x1.c81318p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5cbd4p-110f, 0.0f,
     0x1.2845dcp-83f, 0x1.3a89b2p-71f, 0x1.b2cddep-67f, 0.0f, 0x1.08fcp-66f, 0.0f,
     0.0f, 0.0f, 0x1.cb014ep-108f, 0x1.90c1eep-30f, 0.0f, 0.0f, 0x1.eaef68p-119f,
     0x1.c1e9eep-53f, 0.0f, 0.0f, 0x1.09dbcap-61f, 0x1.687042p-47f, 0x1.62101cp-103f,
     0.0f, 0.0f, 0x1.c793dap-86f, 0.0f, 0.0f, 0x1.c7d01ap-30f, 0.0f, 0x1.de37ccp-54f,
     0x1.dc48cp-103f, 0.0f, 0x1.19ecd6p-3f, 0x1.9a06cep-15f, 0.0f, 0.0f,
     0x1.c8f6bp-103f, 0.0f, 0.0f, 0x1.60781cp-90f, 0x1.303f4cp-113f, 0x1.411f16p-6f,
     0x1.28cdd4p-81f, 0.0f, 0x1.f4525cp-63f, 0x1.18a838p-4f, 0x1.d73c9ep-47f,
     0x1.54616p-50f, 0.0f, 0.0f, 0.0f, 0x1.a4298ap-67f, 0.0f, 0x1.9026ap-77f, 0.0f,
     0x1.28518cp-24f, 0x1.6d5e32p-28f, 0.0f, 0.0f, 0x1.66a89ep-29f, 0x1.716104p-83f,
     0.0f, 0x1.c96466p-81f, 0x1.4a233ep-57f, 0.0f, 0x1.03a554p-108f, 0.0f,
     0x1.0c43fp-93f, 0x1.6c8ea8p-83f, 0.0f, 0.0f, 0x1.38ff1p-103f, 0.0f,
     0x1.d8a89p-86f, 0x1.c5202cp-60f, 0x1.4c78c8p-37f, 0x1.ebb054p-10f,
     0x1.776954p-116f, 0.0f, 0.0f, 0x1.fa134ep-124f, 0x1.dcb732p-22f, 0.0f, 0.0f,
     0x1.864daap-107f, 0x1.9e1948p-17f, 0x1.00386p-34f, 0.0f, 0x1.1d9d84p-72f, 0.0f,
     0x1.f5c0e2p-78f, 0.0f, 0.0f, 0x1.58fcc4p-59f, 0x1.b745fep-79f, 0.0f,
     0x1.dca918p-1f, 0x1.6b03dep-18f, 0.0f, 0.0f, 0x1.2bd03cp-35f, 0x1.a6751ep-10f,
     0x1.a0fdcep-26f, 0.0f, 0x1.8cca4p-73f, 0.0f, 0x1.bfa862p-87f, 0x1.bd824p-124f,
     0x1.ab449ep-52f, 0x1.d9ce84p-68f, 0x1.760e12p-7f, 0x1.703bbap-86f,
     0x1.e39ac2p-93f, 0x1.e3acd6p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.888b64p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5a51ep-61f, 0.0f,
     0x1.16771ep-111f, 0x1.1fd152p-64f, 0.0f, 0x1.2fc7dp-74f, 0x1.2e0cc8p-54f, 0.0f,
     0.0f, 0x1.03d77ep-76f, 0.0f, 0x1.1227a6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.df46d4p-75f, 0x1.10e6e2p-92f, 0.0f, 0.0f,
     0x1.12222ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30009cp-110f, 0x1.c16c9p-34f,
     0x1.82d1acp-26f, 0.0f, 0x1.18b0bcp-27f, 0.0f, 0x1.e88d9cp-108f, 0x1.cb17ap-121f,
     0.0f, 0x1.19a346p-82f, 0x1.13fc6p-19f, 0x1.b68d66p-36f, 0.0f, 0.0f,
     0x1.4a41bcp-71f, 0.0f, 0.0f, 0.0f, 0x1.efb2e8p-67f, 0.0f, 0x1.7ca036p-31f,
     0x1.cb40bep-43f, 0x1.8d26eep-17f, 0.0f, 0x1.5cd306p-76f, 0x1.d2b60ap-83f,
     0x1.73b496p-117f, 0x1.3bbcb2p-62f, 0x1.f7d14ep-64f, 0x1.ba49a4p-77f,
     0x1.fc6facp-53f, 0.0f, 0.0f, 0.0f, 0x1.403734p-65f, 0.0f, 0.0f, 0x1.c6efdep-5f,
     0x1.1932p-89f, 0.0f, 0.0f, 0.0f, 0x1.39ba1p-33f, 0.0f, 0x1.a09114p-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ecffep-98f, 0x1.38b3e4p-57f,
     0x1.d8abacp-18f, 0x1.008eb4p-40f, 0.0f, 0.0f, 0x1.3d4e86p-109f, 0.0f, 0.0f,
     0x1.d5bef6p-9f, 0x1.06160cp-53f, 0x1.86104ep-126f, 0x1.53e836p-125f, 0x1p0f,
     0x1.cfa9f8p-40f, 0.0f, 0x1.42467ep-109f, 0x1.ddc476p-28f, 0.0f, 0.0f,
     0x1.1423a2p-84f, 0x1.c847acp-13f, 0x1.485746p-68f, 0.0f, 0x1.5b9e8p-91f,
     0x1.ba4d02p-58f, 0.0f, 0x1.bc2f88p-121f, 0.0f, 0.0f, 0x1.421226p-120f, 0.0f,
     0x1.95cb6ep-32f, 0.0f, 0x1.7bf356p-107f, 0.0f, 0x1.8cf66ap-92f, 0.0f,
     0x1.3cf96ap-85f, 0x1.617dap-73f, 0.0f, 0.0f, 0.0f, 0x1.d7638ap-13f,
     0x1.b8e83p-84f, 0.0f, 0x1.45ad58p-93f, 0x1.01efdp-93f, 0x1.7e778cp-90f,
     0x1.152bfp-115f, 0.0f, 0x1.9786bcp-13f, 0x1.58b4e2p-80f, 0x1.0904d4p-21f,
     0x1.25b84ap-126f, 0.0f, 0.0f, 0x1.99c42ep-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e3304p-21f, 0x1p0f, 0x1.b2b3b8p-50f, 0x1.7678fp-18f, 0x1.2b5268p-94f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c34c6ap-115f, 0x1.9ca0d8p-63f, 0.0f,
     0x1.bfdd5p-69f, 0.0f, 0.0f, 0x1.8272bep-103f, 0.0f, 0x1.e356a8p-82f, 0.0f,
     0x1.de60e4p-125f, 0x1.0fff88p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc832cp-82f,
     0x1.cd219ep-37f, 0.0f, 0.0f, 0.0f, 0x1.85a74ap-18f, 0.0f, 0x1.3c93e4p-97f, 0.0f,
     0x1.4c2516p-8f, 0x1.1dede4p-99f, 0.0f, 0x1.2b9dbep-12f, 0.0f, 0.0f, 0.0f,
     0x1.77137ap-85f, 0x1.b899cep-46f, 0.0f, 0x1.032a54p-14f, 0x1.f19b7ep-107f, 0.0f,
     0.0f, 0x1.de8aa4p-96f, 0.0f, 0x1.32f4cp-7f, 0x1.46c55cp-96f, 0.0f, 0.0f,
     0x1.c42b8cp-72f, 0x1.6c87c2p-3f, 0x1.ef8956p-121f, 0x1.0745d2p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1b886ap-38f, 0x1.0fafcp-70f, 0x1.79217ap-111f, 0x1.286ce2p-27f,
     0x1.2fd36ep-95f, 0x1.f9dbd4p-39f, 0.0f, 0.0f, 0x1.09ec2p-101f, 0.0f, 0.0f,
     0x1.84b888p-92f, 0x1.7142c4p-80f, 0x1.d6b06p-62f, 0.0f, 0.0f, 0x1.3e4e34p-16f,
     0.0f, 0.0f, 0x1.f2a1aep-102f, 0x1.69cc22p-32f, 0x1.754622p-90f, 0x1.358eap-84f,
     0.0f, 0.0f, 0.0f, 0x1.e42d42p-37f, 0.0f, 0.0f, 0x1.2e7132p-96f, 0.0f,
     0x1.8d1be4p-19f, 0x1.362eb2p-124f, 0x1.14a81p-1f, 0x1.e61be6p-103f,
     0x1.adeff4p-108f, 0.0f, 0x1.93894p-20f, 0x1.c3673ap-44f, 0.0f, 0.0f, 0.0f,
     0x1.7b746ep-62f, 0.0f, 0.0f, 0x1.a4df5cp-57f, 0x1.4f3694p-45f, 0x1.d8b92p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a27f6p-59f, 0.0f, 0x1.4ed07p-51f,
     0x1.babe9cp-38f, 0x1.f0c5f8p-60f, 0x1.3966f4p-5f, 0.0f, 0x1.472e02p-52f, 0.0f,
     0.0f, 0.0f, 0x1.502f36p-100f, 0.0f, 0x1.477fbap-72f, 0x1.7317e6p-18f, 0.0f, 0.0f,
     0x1.463d76p-13f, 0.0f, 0x1.1f569ap-12f, 0x1.bd0d6ep-117f, 0x1.e4c47ep-107f,
     0x1.703556p-75f, 0.0f, 0.0f, 0.0f, 0x1.81004ep-126f, 0.0f, 0x1.ade6aap-2f,
     0x1.3a2df4p-115f, 0x1.2c4122p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbb48cp-123f,
     0x1.efd952p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f042ccp-126f, 0x1.c456e2p-52f,
     0x1.89cf94p-68f, 0.0f, 0x1.ed7f7ep-32f, 0x1.f143eep-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.712078p-101f, 0x1.b89ce4p-24f, 0x1.ca62dcp-48f, 0x1.624b12p-48f,
     0x1.ce788p-8f, 0x1.58a6bcp-78f, 0.0f, 0x1.e56192p-103f, 0x1.cf0d1ep-67f,
     0x1.28aaf2p-3f, 0x1.7a649ep-40f, 0.0f, 0x1.a0302ap-29f, 0x1.33f406p-121f, 0.0f,
     0x1.5d44fp-73f, 0x1.628f9ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dab56p-94f,
     0.0f, 0.0f, 0x1.9c81ecp-77f, 0.0f, 0.0f, 0.0f, 0x1.28025ap-13f, 0.0f, 0.0f,
     0x1.92cc46p-97f, 0x1.740e2p-46f, 0.0f, 0.0f, 0x1.3a644ep-16f, 0.0f, 0.0f,
     0x1.0240dp-76f, 0.0f, 0x1.3b9218p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1df9ap-27f,
     0x1.4f1b4p-56f, 0x1.5852e4p-19f, 0x1.a36d2cp-36f, 0.0f, 0x1.a69868p-73f, 0.0f,
     0.0f, 0x1.f2fad2p-1f, 0.0f, 0x1.537b74p-74f, 0.0f, 0x1.a9c9d4p-20f,
     0x1.66490ep-47f, 0.0f, 0x1.3040e4p-25f, 0x1.86a236p-93f, 0.0f, 0.0f,
     0x1.10ecbap-83f, 0x1.c1f652p-75f, 0x1.a0715ep-122f, 0.0f, 0x1.0d5696p-53f, 0.0f,
     0.0f, 0x1.36a126p-120f, 0x1.c351c8p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.974e44p-78f,
     0x1.2cd022p-40f, 0.0f, 0.0f, 0x1.4a7ecep-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f290b6p-66f, 0x1.e529e8p-4f, 0.0f, 0.0f, 0x1.6c8682p-100f, 0.0f,
     0x1.5e561p-29f, 0x1.ac35a4p-88f, 0.0f, 0x1.8fb002p-100f, 0x1.00410ep-95f, 0.0f,
     0.0f, 0.0f, 0x1.b115e6p-30f, 0.0f, 0.0f, 0.0f, 0x1.aed488p-95f, 0x1.85254ep-17f,
     0.0f, 0x1.1ced12p-82f, 0.0f, 0.0f, 0x1.185e5ep-49f, 0x1.19a64ap-87f, 0.0f, 0.0f,
     0.0f, 0x1.9ca05ep-90f, 0.0f, 0x1.1e8932p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.82d77ep-46f, 0x1.6aeebp-43f, 0x1.b165bcp-49f, 0x1.4f4072p-22f,
     0x1.cf1c16p-119f, 0.0f, 0x1.11c296p-66f, 0x1.c66516p-58f, 0x1.fef532p-63f, 0.0f,
     0x1.44c45ap-40f, 0.0f, 0x1.534e3cp-113f, 0.0f, 0.0f, 0.0f, 0x1.47ef78p-86f,
     0x1.0cf1cep-33f, 0.0f, 0.0f, 0x1.2b367p-118f, 0.0f, 0x1.eec262p-51f, 0.0f,
     0x1.740e8ep-40f, 0.0f, 0x1.7b869p-24f, 0.0f, 0x1.7579d6p-107f, 0x1.7bc9cp-15f,
     0.0f, 0.0f, 0x1.255f22p-7f, 0x1.d23e7cp-40f, 0.0f, 0x1.35790cp-4f, 0.0f,
     0x1.046334p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c85c8p-63f, 0.0f, 0x1.68d014p-70f,
     0x1.9c5054p-32f, 0x1.b19b06p-111f, 0.0f, 0x1.5a6ef2p-62f, 0x1.9156c4p-116f,
     0x1.c6b19cp-84f, 0x1.3cceccp-43f, 0x1.9f4978p-122f, 0x1.ce6ec4p-83f,
     0x1.15b446p-18f, 0.0f, 0x1.64af3ap-51f, 0.0f, 0x1.5c6864p-82f, 0.0f,
     0x1.03e532p-109f, 0x1.a5ed78p-68f, 0.0f, 0x1.d628c8p-31f, 0.0f, 0x1.ec3a3cp-9f,
     0x1.c78f3ep-83f, 0x1.4bd7f8p-53f, 0x1.e75cep-2f, 0.0f, 0.0f, 0x1.7a7aa4p-43f,
     0.0f, 0x1.307dbcp-100f, 0.0f, 0x1.7ba896p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a831p-81f, 0x1.8eb04ep-67f, 0.0f, 0x1.b21688p-53f, 0.0f, 0.0f,
     0x1.b4d482p-41f, 0.0f, 0x1.cc4a82p-112f, 0.0f, 0x1.caf566p-97f, 0x1.73e1e8p-20f,
     0x1.2e78e8p-120f, 0.0f, 0.0f, 0x1.7982b8p-77f, 0.0f, 0x1.db74a8p-83f, 0.0f,
     0x1.fd3774p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd1556p-32f, 0.0f, 0x1.463f64p-36f,
     0x1.58c86ep-96f, 0.0f, 0.0f, 0x1.b7ad66p-91f, 0x1.843a2ap-56f, 0x1.6f9f52p-107f,
     0.0f, 0x1.414b9p-80f, 0x1.a0cb88p-7f, 0.0f, 0x1.1f75dep-46f, 0.0f,
     0x1.c703f8p-96f, 0x1.561dc2p-43f, 0x1.d5f7c2p-6f, 0.0f, 0x1.a0c9aap-93f, 0.0f,
     0x1.9aea0ep-95f, 0x1.02716ep-106f, 0.0f, 0.0f, 0x1.4394b2p-96f, 0.0f,
     0x1.c1fa44p-101f, 0.0f, 0x1.681488p-92f, 0x1.db108ap-67f, 0.0f, 0x1.3c4e7p-71f,
     0.0f, 0x1.8e79cap-33f, 0x1.1d17c8p-45f, 0x1.28763ep-118f, 0x1.b4523p-50f,
     0x1.447966p-110f, 0.0f, 0x1.5b4ae4p-12f, 0.0f, 0.0f, 0x1.1a5784p-49f, 0.0f,
     0x1.1be804p-123f, 0x1.568da4p-30f, 0x1.8e3db4p-31f, 0x1.19ce02p-81f, 0.0f,
     0x1.3dfda2p-87f, 0x1.4ab43ep-71f, 0x1.166864p-86f, 0x1.e3a9aap-98f,
     0x1.f005eap-102f, 0x1.7a767cp-68f, 0x1.035246p-80f, 0.0f, 0x1.422162p-71f,
     0x1.8aacd8p-11f, 0x1.4ecc18p-122f, 0x1.eb0e1ap-121f, 0.0f, 0.0f, 0x1.087bfep-48f,
     0x1.da8ff6p-97f, 0.0f, 0x1.576132p-67f, 0x1.03381ep-48f, 0x1.ae7068p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b3804p-77f, 0x1.6b379ap-38f, 0.0f, 0x1.21c2f8p-59f,
     0x1.d4696ep-118f, 0.0f, 0.0f, 0x1.53f66ep-122f, 0x1.66071p-47f, 0.0f, 0.0f,
     0x1.0a4faep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1dc9cp-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d4def4p-41f, 0.0f, 0x1.3bb622p-94f, 0x1.690cfep-28f, 0x1.11248p-118f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c00856p-98f, 0.0f,
     0x1.9881e4p-105f, 0.0f, 0x1.afee68p-54f, 0.0f, 0x1.1f5af2p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.08ac64p-44f, 0x1.459cf2p-9f, 0x1.c529eep-29f, 0.0f, 0x1.6d0cb4p-126f,
     0x1.47477cp-2f, 0x1.d935p-91f, 0x1.1ab3b4p-72f, 0x1.f5fef6p-96f,
     0x1.79efaap-100f, 0.0f, 0.0f, 0.0f, 0x1.c7496ep-84f, 0x1.ccaa76p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.66ac94p-100f, 0x1.04bedcp-113f, 0x1.566b3cp-112f, 0.0f,
     0.0f, 0.0f, 0x1.d93ddep-118f, 0.0f, 0.0f, 0x1.ee78b4p-49f, 0x1.056a5cp-15f,
     0x1.46f5e6p-111f, 0.0f, 0.0f, 0x1.3d29f6p-5f, 0.0f, 0.0f, 0x1.7c45d8p-80f, 0.0f,
     0x1.0fe3a6p-122f, 0x1.f1983ep-100f, 0x1.9ea78cp-17f, 0.0f, 0.0f, 0x1.ead158p-47f,
     0.0f, 0.0f, 0.0f, 0x1.4b232cp-21f, 0x1.a50b1ap-31f, 0.0f, 0x1.c69d8cp-111f, 0.0f,
     0x1.4a26a4p-73f, 0.0f, 0.0f, 0x1.ea2aacp-52f, 0x1.eb621p-15f, 0.0f,
     0x1.57f32ap-50f, 0.0f, 0x1.8ea8f4p-123f, 0x1.9d4c52p-18f, 0x1.5c72f2p-47f, 0.0f,
     0x1.ebd7b4p-1f, 0.0f, 0x1.af7116p-8f, 0.0f, 0x1.57eafp-13f, 0x1.53c2cp-35f, 0.0f,
     0.0f, 0x1.8d112p-39f, 0.0f, 0x1.23aad4p-120f, 0x1.b9cfcp-15f, 0x1.f7148p-91f,
     0x1.edf8dp-25f, 0.0f, 0x1.bc559ep-12f, 0x1.309fb6p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.baf3fp-124f, 0.0f, 0.0f, 0.0f, 0x1.317c4ap-33f, 0x1.e631c4p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9ccfcp-91f, 0x1.73bf84p-124f, 0x1.8fedcp-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6eb94p-37f, 0x1.f18c8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b959cp-84f, 0x1.ea192p-47f, 0.0f, 0x1.18b9fp-43f, 0.0f, 0.0f,
     0x1.07cee2p-94f, 0x1.5182a4p-23f, 0.0f, 0x1.691dap-56f, 0.0f, 0x1.2d6e1p-53f,
     0.0f, 0x1.e34dd2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.004f4ap-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a326f8p-87f, 0.0f, 0.0f, 0x1.f54ac8p-72f, 0.0f
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
            tmp1 = Sleef_exp2f1_u35purecfma(tmp0);
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
    printf("Sleef_exp2f1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
