/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f1_u10purecfma.c --function \
 *     Sleef_log2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.2e0224p-23f, 0.0f, 0x1.a1ba86p-59f, 0.0f, 0.0f, 0.0f,
     0x1.f2d03p-109f, 0x1.e5fd6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed4edap-21f, 0x1.b04132p-63f, 0x1.463faep-49f, 0x1.33bca6p-2f, 0.0f,
     0x1.b8f284p-114f, 0.0f, 0.0f, 0x1.cabd1ep-68f, 0x1.815d22p-88f, 0.0f,
     0x1.0ae136p-73f, 0.0f, 0x1.733c8cp-47f, 0x1.72d59ep-19f, 0.0f, 0x1.551782p-100f,
     0.0f, 0.0f, 0x1.015fe8p-22f, 0.0f, 0.0f, 0x1.9ca514p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59cf28p-92f, 0x1.83d86ap-15f, 0x1.f8807ep-115f, 0x1.1c18eap-44f, 0.0f,
     0x1.8c6a7cp-25f, 0.0f, 0x1.8d482cp-97f, 0x1.42010cp-14f, 0.0f, 0.0f,
     0x1.cca0dep-7f, 0.0f, 0x1.75e3d6p-72f, 0x1.b17b08p-9f, 0.0f, 0x1.389058p-21f,
     0.0f, 0x1.d76c6cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.312126p-81f, 0.0f, 0.0f,
     0.0f, 0x1.5d78b8p-82f, 0.0f, 0x1.4405e8p-99f, 0.0f, 0x1.248134p-47f, 0.0f,
     0x1.c7c80ap-10f, 0x1.89c6fcp-3f, 0x1.40e07p-65f, 0.0f, 0.0f, 0x1.04c432p-85f,
     0x1.c50aa6p-13f, 0x1.a78998p-70f, 0.0f, 0x1.0debfcp-98f, 0.0f, 0x1.dec086p-90f,
     0.0f, 0x1.77438ep-23f, 0.0f, 0.0f, 0.0f, 0x1.1f2684p-94f, 0x1.edaa9p-57f, 0.0f,
     0x1.15ef0cp-126f, 0x1.92e3cap-61f, 0x1.bd5a68p-43f, 0.0f, 0x1.05be24p-50f,
     0x1.fe787ep-55f, 0.0f, 0x1.4c067p-16f, 0.0f, 0x1.8d8704p-44f, 0x1.13d72cp-20f,
     0x1.cb1b34p-4f, 0.0f, 0.0f, 0.0f, 0x1.14db26p-44f, 0x1.c7c59p-83f,
     0x1.6cae68p-6f, 0x1.d5e3dp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cef804p-51f,
     0x1.4d2b86p-115f, 0x1.858cbp-87f, 0.0f, 0x1.77f90ep-99f, 0x1.130ebcp-111f, 0.0f,
     0.0f, 0x1.dd2d9p-18f, 0.0f, 0.0f, 0x1.f27a56p-17f, 0x1.b9745ep-64f,
     0x1.ca7916p-90f, 0x1.fe167cp-100f, 0.0f, 0x1.50308p-77f, 0x1.6d6426p-8f,
     0x1.bb0e5ap-13f, 0.0f, 0x1.027116p-43f, 0x1.14810ep-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.55964ep-98f, 0x1.4ab384p-68f, 0.0f, 0x1.94a6f2p-54f, 0x1.cb9056p-19f,
     0x1.73c8d8p-7f, 0.0f, 0x1.641602p-28f, 0.0f, 0x1.6fed6ap-105f, 0x1.d9d0bep-60f,
     0x1.354c74p-16f, 0x1.41c4b6p-55f, 0x1.fcba5p-58f, 0.0f, 0.0f, 0.0f,
     0x1.d3916ep-16f, 0.0f, 0x1.2dfd7ep-67f, 0x1.c80c7ep-60f, 0x1.cf6bfep-55f, 0.0f,
     0.0f, 0.0f, 0x1.23001ep-34f, 0x1.647ef8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a6c8e8p-39f, 0.0f, 0x1.556cbap-72f, 0x1.70569ap-117f, 0x1.1c8dcep-13f,
     0x1.985e8cp-1f, 0x1.6ec802p-96f, 0.0f, 0x1.5aaae2p-124f, 0x1p0f, 0x1.89cb86p-40f,
     0x1.1b386ap-5f, 0.0f, 0.0f, 0.0f, 0x1.275296p-9f, 0x1.766c92p-40f,
     0x1.d4222p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad01c2p-108f, 0x1.212534p-55f, 0.0f,
     0x1.9cf426p-35f, 0.0f, 0x1.e8820ap-114f, 0.0f, 0x1.b99afcp-44f, 0x1.b9e67ap-24f,
     0x1.e61c56p-83f, 0.0f, 0x1.943b2p-72f, 0x1.44f052p-13f, 0x1.187f9ep-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.77f13p-77f, 0x1.59e4ecp-105f, 0.0f, 0x1.ea9836p-45f,
     0x1.d17b1ep-10f, 0x1.da1a64p-105f, 0.0f, 0x1.af29eap-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7e5b6p-59f, 0x1.e94832p-94f, 0.0f, 0x1.eee89ep-98f, 0x1.514986p-104f,
     0x1.82837cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ff34ap-18f, 0x1.74d56cp-52f, 0.0f,
     0x1.3ba19cp-125f, 0x1.652228p-12f, 0x1.e5101cp-11f, 0x1.d216bcp-18f,
     0x1.0b5b38p-83f, 0.0f, 0x1.d430c6p-47f, 0.0f, 0.0f, 0x1.d0757p-64f, 0.0f, 0.0f,
     0x1.fb965cp-70f, 0.0f, 0.0f, 0.0f, 0x1.bc6e84p-98f, 0.0f, 0.0f, 0.0f,
     0x1.1b900cp-87f, 0x1.ecae3cp-84f, 0x1.8ee776p-24f, 0.0f, 0.0f, 0x1.a67fe4p-108f,
     0.0f, 0x1.71bf5cp-7f, 0.0f, 0.0f, 0x1.176bf8p-85f, 0x1.857666p-52f,
     0x1.085f1ep-5f, 0x1.0d4962p-107f, 0x1.608238p-35f, 0x1.5c72f4p-100f,
     0x1.a5275p-8f, 0x1.1e3486p-118f, 0x1.9e7444p-26f, 0.0f, 0x1.78cac8p-23f,
     0x1.cba094p-75f, 0x1.9e3edap-120f, 0x1.88c8e8p-60f, 0x1.56df68p-18f,
     0x1.7e8ed4p-39f, 0x1.b30858p-100f, 0.0f, 0.0f, 0x1.d3da28p-22f, 0.0f,
     0x1.8ea44ap-13f, 0x1.a36074p-55f, 0x1.23397p-54f, 0.0f, 0x1.6be2ccp-87f,
     0x1.54034ap-9f, 0x1.8e4c6ap-70f, 0.0f, 0x1.01d198p-47f, 0.0f, 0x1.39fa46p-89f,
     0.0f, 0.0f, 0.0f, 0x1.889ac8p-71f, 0.0f, 0x1.7ab1aep-17f, 0x1.e430fp-97f, 0.0f,
     0x1.606922p-68f, 0.0f, 0x1.f73ef2p-21f, 0.0f, 0.0f, 0.0f, 0x1.7bf60ap-105f, 0.0f,
     0x1.27c936p-24f, 0x1.8ffb78p-70f, 0x1.15b5ep-77f, 0.0f, 0.0f, 0.0f,
     0x1.3358c8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.341f96p-52f,
     0x1.cec0d6p-69f, 0x1.ee1644p-95f, 0.0f, 0x1.e05072p-74f, 0x1.363c3p-55f,
     0x1.ad81p-15f, 0.0f, 0.0f, 0.0f, 0x1.dce276p-42f, 0x1.ba5d1p-93f, 0.0f, 0.0f,
     0x1.769b44p-47f, 0.0f, 0x1.d7c93ap-25f, 0.0f, 0.0f, 0x1.8399a4p-69f,
     0x1.cf68bap-79f, 0x1.0445dp-95f, 0.0f, 0x1.5b587ep-8f, 0x1.45e2b4p-34f,
     0x1.187b08p-79f, 0.0f, 0.0f, 0x1.572aa6p-68f, 0.0f, 0x1.c2d1c6p-60f, 0.0f,
     0x1.94bbdap-38f, 0.0f, 0.0f, 0.0f, 0x1.854042p-126f, 0.0f, 0.0f, 0.0f,
     0x1.fbb146p-108f, 0x1.99e254p-93f, 0.0f, 0.0f, 0x1.147ee2p-120f, 0.0f,
     0x1.6ea9c8p-106f, 0x1.0a8096p-57f, 0x1.cfe974p-68f, 0x1.45696ep-43f,
     0x1.cf7b9cp-48f, 0x1.edbfeap-13f, 0x1.529a22p-116f, 0x1.309b3p-67f, 0.0f,
     0x1.fd59d2p-72f, 0.0f, 0x1.8b16fcp-73f, 0.0f, 0x1.d1dbc2p-13f, 0x1.95ae5cp-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32512p-48f, 0.0f, 0.0f,
     0x1.3e7b7p-26f, 0.0f, 0x1.6933b4p-103f, 0.0f, 0.0f, 0.0f, 0x1.3ae7cep-124f, 0.0f,
     0x1.7cef9ep-21f, 0.0f, 0x1.b7111cp-22f, 0.0f, 0x1.89ba8ap-89f, 0.0f,
     0x1.312562p-25f, 0.0f, 0x1.0d0d2ap-121f, 0x1.335c66p-121f, 0.0f, 0.0f,
     0x1.3dff84p-65f, 0x1.8e4366p-62f, 0x1.4eda1ep-18f, 0.0f, 0x1.5779fep-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7058f8p-44f, 0.0f, 0.0f, 0.0f, 0x1.469e4ep-26f,
     0x1.3a89a2p-44f, 0.0f, 0x1.c4f708p-6f, 0.0f, 0.0f, 0.0f, 0x1.115ba8p-96f,
     0x1.e32caap-106f, 0x1.dc0d9p-45f, 0x1.1c762p-94f, 0x1.2ef0dcp-13f, 0.0f, 0.0f,
     0x1.3f8e3ap-68f, 0x1.e24c36p-11f, 0x1.e09226p-97f, 0x1.eefc02p-5f,
     0x1.65fefep-49f, 0.0f, 0x1.934884p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.526756p-126f,
     0.0f, 0x1.8bc6a2p-104f, 0x1.fb71f6p-58f, 0.0f, 0x1.064bbp-93f, 0x1.113524p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34e466p-29f, 0x1.410316p-109f, 0.0f,
     0x1.729224p-53f, 0x1.ed3c78p-62f, 0.0f, 0x1.a034bap-63f, 0.0f, 0.0f,
     0x1.91266ap-8f, 0.0f, 0x1.c5651cp-98f, 0x1.740c6cp-6f, 0.0f, 0x1.a363c4p-64f,
     0.0f, 0.0f, 0x1.00fabep-87f, 0.0f, 0.0f, 0.0f, 0x1.00de5ap-96f, 0.0f, 0.0f,
     0x1.497fbap-53f, 0.0f, 0.0f, 0x1.399286p-105f, 0x1.936694p-17f, 0.0f,
     0x1.fed31p-95f, 0x1.3fbe92p-86f, 0.0f, 0.0f, 0.0f, 0x1.b9dedcp-61f, 0.0f, 0.0f,
     0x1.18bf2cp-49f, 0.0f, 0x1.a511d6p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b0e0cp-84f, 0.0f, 0x1.84b0aap-51f, 0x1.2f3cdcp-54f, 0.0f, 0x1.a13a3ep-69f,
     0x1.310e98p-69f, 0x1.de1a7cp-116f, 0.0f, 0x1.19207ep-105f, 0x1.8afa8p-103f, 0.0f,
     0x1.5afe4cp-106f, 0.0f, 0.0f, 0.0f, 0x1.e255bcp-46f, 0x1.46d0cep-121f,
     0x1.bff0aep-1f, 0.0f, 0.0f, 0x1.276092p-12f, 0.0f, 0x1.fe9e4p-58f, 0.0f,
     0x1.b61896p-81f, 0x1.713508p-60f, 0x1.bd0438p-71f, 0.0f, 0.0f, 0.0f,
     0x1.5a232ap-35f, 0x1.89fc28p-7f, 0x1.9fc35cp-112f, 0.0f, 0.0f, 0x1.79efcp-111f,
     0.0f, 0.0f, 0.0f, 0x1.afc978p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dababcp-65f,
     0.0f, 0.0f, 0x1.a4eecap-39f, 0x1.86d16ap-24f, 0x1.c5bf16p-70f, 0x1.a3eeb6p-100f,
     0.0f, 0.0f, 0x1.815eaep-27f, 0.0f, 0x1.e09c76p-110f, 0x1.5aac7p-66f, 0.0f,
     0x1.569712p-67f, 0x1.cefdbap-72f, 0x1.aecf8ep-111f, 0x1.986e8cp-27f, 0.0f,
     0x1.dd7e9ep-26f, 0x1.e52324p-34f, 0.0f, 0x1.cb1e2cp-76f, 0.0f, 0.0f,
     0x1.7f0604p-11f, 0.0f, 0x1.1da35ep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba6e86p-22f, 0.0f, 0x1.ae7e54p-24f, 0.0f, 0x1.5503cep-59f, 0.0f,
     0x1.cca53ep-80f, 0.0f, 0x1.dcd6aap-59f, 0.0f, 0x1.fc0156p-71f, 0x1.7a45c2p-27f,
     0x1.85c3fcp-20f, 0.0f, 0.0f, 0.0f, 0x1.39b762p-95f, 0.0f, 0x1.204ccp-108f,
     0x1.23e538p-7f, 0.0f, 0x1.9d3f2p-2f, 0.0f, 0x1.85457cp-117f, 0x1.112e7p-104f,
     0x1.d4b1c8p-21f, 0x1.ba4b72p-81f, 0x1.4ec9cep-35f, 0x1.4eb14ap-9f,
     0x1.515dc4p-55f, 0x1.51ed2ep-111f, 0.0f, 0x1.2939e2p-119f, 0.0f,
     0x1.7c9392p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c267p-114f, 0x1.6e688p-3f,
     0.0f, 0.0f, 0x1.15f4d2p-4f, 0.0f, 0.0f, 0x1.b602eep-75f, 0x1.d7c97ap-126f, 0.0f,
     0x1.71ae3cp-25f, 0.0f, 0x1.15f80cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9df71ap-43f, 0x1.401c9ap-5f, 0x1.854deap-19f, 0x1.cab08ep-27f,
     0x1.d1786ap-59f, 0.0f, 0.0f, 0x1.b4027ep-29f, 0x1.d2906ap-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c739ap-75f, 0x1.623f7ep-106f, 0.0f, 0.0f, 0x1.d4dbfcp-60f, 0.0f,
     0x1.c78812p-82f, 0x1.e10708p-113f, 0x1.dc6bcap-70f, 0x1.240c0ap-32f, 0.0f, 0.0f,
     0.0f, 0x1.3675dcp-90f, 0x1.004eb6p-11f, 0.0f, 0.0f, 0x1.9daa1ap-65f,
     0x1.379132p-105f, 0x1.6000fep-84f, 0x1.5243dp-48f, 0.0f, 0.0f, 0x1.2bd7c8p-23f,
     0.0f, 0.0f, 0x1.f5bd88p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e24c8p-37f,
     0x1.84f06cp-13f, 0x1.783832p-41f, 0.0f, 0.0f, 0x1.6a7fa6p-49f, 0.0f, 0.0f,
     0x1.94c324p-23f, 0.0f, 0x1.9fe1ap-35f, 0x1.beea1ap-72f, 0.0f, 0.0f,
     0x1.faa08ap-69f, 0.0f, 0x1.c2a7a8p-66f, 0x1.fcffd2p-18f, 0x1.1db53p-107f,
     0x1.3baeacp-12f, 0.0f, 0x1.5f5546p-79f, 0x1.3727d8p-113f, 0x1.09db6ep-5f, 0.0f,
     0.0f, 0x1.d4e84ep-114f, 0.0f, 0x1.b16deap-50f, 0x1.7de5c2p-5f, 0.0f,
     0x1.61877cp-20f, 0.0f, 0x1.20ffdep-84f, 0.0f, 0.0f, 0.0f, 0x1.52535ep-42f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.6540bcp-34f, 0x1.af00f8p-96f, 0x1.88cb68p-104f,
     0x1.649076p-10f, 0x1.4f4348p-68f, 0.0f, 0.0f, 0x1.d0ef68p-102f, 0x1.807f4cp-31f,
     0.0f, 0.0f, 0.0f, 0x1.824196p-14f, 0x1.79d774p-108f, 0x1.82926ep-111f,
     0x1.21f2d6p-26f, 0x1.57eb82p-92f, 0x1.5ec79ap-99f, 0x1.50a804p-33f, 0.0f, 0.0f,
     0x1.8827d4p-6f, 0.0f, 0x1.f52b9ep-75f, 0x1.484a9ep-78f, 0.0f, 0.0f,
     0x1.976dap-36f, 0.0f, 0.0f, 0.0f, 0x1.de61e8p-37f, 0x1.8391ccp-7f,
     0x1.30657p-23f, 0x1.df9be2p-54f, 0.0f, 0.0f, 0x1.a0681ep-105f, 0x1.ba0a1p-74f,
     0x1.362f06p-119f, 0x1.3c5e7p-31f, 0.0f, 0x1.39ce6cp-116f, 0x1.97dcf8p-62f,
     0x1.f86092p-41f, 0.0f, 0x1.e74dcep-113f, 0x1.d27eecp-95f, 0x1.eadd6cp-20f, 0.0f,
     0x1.2d8ebep-52f, 0.0f, 0.0f, 0.0f, 0x1.7adeb8p-20f, 0x1.7e8ca2p-61f,
     0x1.fac3p-12f, 0x1.081b84p-53f, 0x1.c94504p-17f, 0x1.1a6f9p-19f, 0x1.b9f91ap-65f,
     0.0f, 0.0f, 0x1.6c7848p-17f, 0x1.3e229cp-53f, 0x1.ed6e28p-43f, 0x1.95cdeep-115f,
     0.0f, 0.0f, 0.0f, 0x1.bb6b3cp-12f, 0.0f, 0x1.9978p-78f, 0.0f, 0.0f,
     0x1.9348cep-117f, 0.0f, 0x1.c57cbp-109f, 0.0f, 0.0f, 0.0f, 0x1.ce3cfp-45f,
     0x1.31be2ep-120f, 0x1.825212p-62f, 0x1.0907d6p-123f, 0x1.c45f18p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3e12ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.032ecp-106f, 0.0f, 0x1.8484e8p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5eccb2p-90f,
     0x1.f877a4p-3f, 0.0f, 0.0f, 0x1.c6fa18p-84f, 0x1.af1d84p-15f, 0.0f,
     0x1.18c342p-1f, 0x1.11a4dep-120f, 0.0f, 0x1.b36bf2p-29f, 0.0f, 0x1.a23ecep-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b10aap-16f, 0x1.9dd6eep-123f, 0x1.b8970ep-82f,
     0x1.19adbp-53f, 0.0f, 0x1.6b248ap-51f, 0.0f, 0.0f, 0.0f, 0x1.c7d628p-108f, 0.0f,
     0.0f, 0x1.a02472p-65f, 0x1.f2aaa8p-37f, 0.0f, 0.0f, 0x1.90d4a6p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.17e2d8p-70f, 0x1.750842p-22f, 0.0f, 0x1.4d4ff4p-16f, 0.0f,
     0x1.7b0fc2p-98f, 0x1.31cd52p-12f, 0x1.1265b2p-101f, 0.0f, 0x1.435a6ap-5f, 0.0f,
     0x1.5ba23ap-8f, 0.0f, 0.0f, 0.0f, 0x1.bd2ec2p-121f, 0.0f, 0.0f, 0x1.529f64p-64f,
     0x1.38bef2p-55f, 0.0f, 0.0f, 0.0f, 0x1.c4a99ep-67f, 0x1.5d14fap-48f,
     0x1.055482p-71f, 0x1.dc86c8p-15f, 0.0f, 0.0f, 0.0f, 0x1.5e3dd4p-52f, 0.0f,
     0x1.397096p-28f, 0x1.f74dc8p-70f, 0.0f, 0x1.eba71p-2f, 0x1.acc5f4p-52f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.d02c7ap-23f, 0x1.5daa8cp-48f,
     0x1.184556p-89f, 0.0f, 0.0f, 0x1.c47b0ap-72f, 0.0f, 0.0f, 0.0f, 0x1.9cbbbep-108f,
     0.0f, 0x1.93a7f8p-32f, 0x1.e16bdp-53f, 0x1.bc39bap-56f, 0.0f, 0x1.b3f706p-93f,
     0.0f, 0x1.7083d4p-92f, 0x1.5b29f4p-89f, 0x1.484684p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c8de2p-12f, 0.0f, 0.0f, 0x1.a543ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.498504p-8f, 0x1.0631a4p-111f, 0x1.5f0b5p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf479ep-9f, 0.0f, 0x1.e41cdp-41f, 0x1.5b2ca2p-70f, 0.0f, 0x1.5c09fap-72f,
     0x1.8aae0cp-27f, 0.0f, 0.0f, 0x1.e3fc8p-125f, 0x1.d93db6p-98f, 0x1.98d934p-57f,
     0x1.460f98p-91f, 0.0f, 0.0f, 0x1.44a078p-102f, 0.0f, 0x1.8cfe52p-123f, 0.0f,
     0x1.685de4p-119f, 0.0f, 0x1.0cb97p-29f, 0.0f
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
            tmp1 = Sleef_log2f1_u10purecfma(tmp0);
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
    printf("Sleef_log2f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
