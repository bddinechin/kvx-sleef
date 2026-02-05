/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf4_u35avx2128.c --function Sleef_sinf4_u35avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.e2cfdap-114f, 0x1.d3625p-85f, 0.0f, 0x1.cac3d8p-115f, 0x1.91df3ap-119f,
     0x1.134b1cp-5f, 0x1.0955cap-53f, 0.0f, 0.0f, 0.0f, 0x1.67cad2p-33f, 0.0f,
     0x1.85605ep-17f, 0x1.041b8cp-7f, 0x1.b98aaap-114f, 0x1.c63582p-126f, 0.0f, 0.0f,
     0.0f, 0x1.c1eeaep-95f, 0x1.108dccp-114f, 0x1.0336eep-26f, 0x1.9d4a46p-52f,
     0x1.122332p-63f, 0x1.cd3b5cp-96f, 0x1.6ee2f8p-25f, 0.0f, 0x1.2a07ccp-119f,
     0x1.f4974ap-123f, 0x1.a03168p-114f, 0.0f, 0.0f, 0x1.81f6dep-90f,
     0x1.c118d6p-107f, 0x1.40b0a8p-47f, 0.0f, 0x1.f649f4p-31f, 0.0f, 0.0f,
     0x1.6f36e2p-61f, 0x1.188624p-29f, 0x1.d359p-89f, 0.0f, 0.0f, 0.0f,
     0x1.c29facp-109f, 0x1.b976dep-50f, 0x1.eb9426p-42f, 0x1.2421bcp-33f,
     0x1.cc7a58p-101f, 0.0f, 0.0f, 0x1.bea558p-110f, 0x1.c0c316p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5b496p-32f, 0.0f, 0x1.a091b4p-84f,
     0x1.05bcbcp-114f, 0.0f, 0x1.fb4e6cp-82f, 0.0f, 0.0f, 0.0f, 0x1.0352fcp-70f, 0.0f,
     0x1.df9fc6p-55f, 0x1.4348fp-36f, 0x1.3b3eeap-1f, 0x1.68c4cp-113f,
     0x1.cae656p-42f, 0.0f, 0x1.00b7cep-15f, 0x1.b27572p-61f, 0x1.441deap-72f,
     0x1.8739ecp-110f, 0x1.e11788p-117f, 0.0f, 0.0f, 0x1.6f7f16p-15f, 0x1.9622a4p-67f,
     0.0f, 0.0f, 0x1.17c1c4p-102f, 0.0f, 0.0f, 0x1.7b0e64p-6f, 0.0f, 0x1.e99eecp-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae74a4p-14f, 0x1.073d7ap-68f, 0x1.71e3a4p-87f,
     0x1.158c08p-93f, 0x1.f32cb6p-8f, 0.0f, 0.0f, 0x1.a03962p-35f, 0.0f, 0.0f, 0.0f,
     0x1.b9d3b6p-13f, 0.0f, 0x1.027cc8p-39f, 0x1.197b8cp-52f, 0x1.919aep-50f, 0.0f,
     0.0f, 0.0f, 0x1.545a52p-78f, 0.0f, 0x1p0f, 0.0f, 0x1.a720ccp-56f, 0.0f,
     0x1.aa3a5p-73f, 0.0f, 0.0f, 0.0f, 0x1.0f2598p-61f, 0x1.3ced4ap-28f, 0.0f,
     0x1.f97b18p-115f, 0.0f, 0.0f, 0x1.cd4p-53f, 0x1.c45dc8p-103f, 0.0f, 0.0f,
     0x1.816b12p-80f, 0x1.7c5da2p-38f, 0.0f, 0x1.494146p-25f, 0x1.e4e66p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cad0d8p-60f, 0x1.5eec0ap-47f, 0x1.02c438p-75f,
     0x1.1f7574p-86f, 0x1.2ffadcp-121f, 0.0f, 0x1.d4a258p-25f, 0x1.d79828p-13f, 0.0f,
     0x1.fa8598p-20f, 0x1.7cf45p-98f, 0.0f, 0x1.ff8df8p-32f, 0x1.11c8dcp-38f, 0.0f,
     0.0f, 0.0f, 0x1.4bc406p-47f, 0.0f, 0x1.8b157ep-101f, 0.0f, 0.0f, 0.0f,
     0x1.dcc91ep-6f, 0x1.47fd62p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c0ebep-65f,
     0x1.6d9cbap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.159ac4p-24f, 0x1.c32b5p-85f,
     0x1.fa5fa2p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f063cp-118f, 0x1.4f0c08p-108f,
     0.0f, 0.0f, 0x1.05b7fcp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22ebeep-71f,
     0x1.5d0b54p-114f, 0.0f, 0x1.457584p-9f, 0x1.1c0a62p-104f, 0x1.21682ep-51f,
     0x1.4f2778p-54f, 0.0f, 0x1.ef6c82p-31f, 0.0f, 0.0f, 0x1.53fe6p-9f, 0.0f, 0.0f,
     0x1.e2082ap-5f, 0x1.2ffb84p-34f, 0x1.1851f4p-17f, 0.0f, 0.0f, 0x1p0f,
     0x1.d71886p-48f, 0x1.e22e3cp-117f, 0x1.064518p-1f, 0x1.13634ep-55f, 0.0f,
     0x1.245294p-34f, 0.0f, 0x1.5514b2p-64f, 0x1.a206fp-63f, 0x1.2f1906p-33f, 0.0f,
     0x1.c18d7cp-125f, 0.0f, 0x1.47105p-92f, 0.0f, 0.0f, 0x1.d66b68p-8f,
     0x1.938444p-118f, 0x1.e4c332p-78f, 0.0f, 0x1.ccd174p-86f, 0.0f, 0x1.c30f12p-26f,
     0.0f, 0x1.76b1c8p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c65e2p-106f, 0x1.288974p-42f,
     0.0f, 0.0f, 0x1.3b6d1p-55f, 0.0f, 0x1.8915b8p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9fd408p-107f, 0.0f, 0x1.476c5ep-81f, 0x1.0bf506p-18f,
     0x1.c0d654p-57f, 0x1.91dbacp-81f, 0x1.2ae586p-71f, 0x1.821822p-62f, 0.0f,
     0x1.061f96p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25ac1ep-49f, 0.0f, 0x1.426104p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d98c38p-2f, 0x1.7a94eap-85f, 0.0f,
     0x1.390c02p-81f, 0.0f, 0x1.2a6918p-92f, 0.0f, 0.0f, 0x1.d74a8ep-71f,
     0x1.2b6cd8p-62f, 0x1.ca54cep-42f, 0x1.91438ep-118f, 0x1.c1c92p-74f,
     0x1.96cba4p-1f, 0.0f, 0.0f, 0.0f, 0x1.028f12p-4f, 0x1.3ba688p-47f,
     0x1.446e88p-47f, 0x1.cfabd8p-113f, 0x1.c6b4b8p-82f, 0.0f, 0x1.d9abfep-74f, 0.0f,
     0x1.d1a5cp-19f, 0x1.bcfbf6p-59f, 0x1.951b22p-71f, 0.0f, 0.0f, 0.0f,
     0x1.1dc0c6p-34f, 0.0f, 0x1.88201ep-119f, 0.0f, 0.0f, 0x1.8420e4p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f21fep-11f, 0.0f, 0x1.24b936p-12f, 0.0f,
     0.0f, 0x1.6540dap-28f, 0x1.7e51a4p-18f, 0.0f, 0x1.279184p-97f, 0.0f,
     0x1.5c60e4p-112f, 0x1.43c132p-27f, 0x1.316e68p-72f, 0x1.476222p-22f,
     0x1.5f05f4p-45f, 0x1.fbe6a6p-108f, 0x1.4e0d42p-118f, 0.0f, 0x1.c542fp-14f, 0.0f,
     0x1.c593b6p-82f, 0.0f, 0.0f, 0x1.162018p-115f, 0x1.f5b0cp-27f, 0.0f, 0.0f,
     0x1.c3c578p-30f, 0x1.08da26p-32f, 0.0f, 0.0f, 0x1.635e68p-85f, 0.0f,
     0x1.c406ep-41f, 0x1.a5a14p-79f, 0x1.595258p-36f, 0x1.a7227ep-29f,
     0x1.2224d8p-28f, 0x1p0f, 0.0f, 0.0f, 0x1.bb7caep-44f, 0x1.d66aacp-86f,
     0x1.5b1ecp-72f, 0.0f, 0x1.d4721ap-64f, 0.0f, 0x1.b8e80cp-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9114ccp-126f, 0.0f, 0x1.794896p-104f, 0.0f, 0.0f, 0x1.e6efe8p-82f,
     0.0f, 0.0f, 0x1.056442p-90f, 0x1.244d5ap-57f, 0x1.2af4dp-7f, 0.0f,
     0x1.be221cp-73f, 0.0f, 0.0f, 0.0f, 0x1.773d7cp-62f, 0x1.51d46ap-120f,
     0x1.469d5ap-114f, 0x1.c48d96p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.382b0ep-80f, 0.0f, 0x1.f2b73p-89f, 0x1.5de3c4p-124f, 0x1.9a421cp-121f,
     0x1.ead9aep-57f, 0x1.8e6584p-70f, 0.0f, 0.0f, 0.0f, 0x1.ba500ap-79f,
     0x1.4fcbdp-66f, 0x1.2ef7e8p-8f, 0.0f, 0x1.de886ap-34f, 0x1.32a424p-68f,
     0x1.346eecp-82f, 0.0f, 0x1.eab2eap-21f, 0x1.a36b66p-14f, 0.0f, 0x1.bc05aep-56f,
     0.0f, 0x1.ca36e4p-27f, 0.0f, 0.0f, 0x1.3ebc6ap-5f, 0x1.fd9edep-107f,
     0x1.d44bd8p-45f, 0.0f, 0x1.b65ef8p-124f, 0x1.49e19ep-14f, 0x1.c57716p-61f,
     0x1.32cf3cp-36f, 0x1.b764c6p-37f, 0.0f, 0.0f, 0.0f, 0x1.27037ep-59f,
     0x1.5c01f6p-100f, 0.0f, 0x1.a1ec4cp-56f, 0.0f, 0x1.cb5a02p-8f, 0.0f, 0.0f,
     0x1.2d2766p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6782dap-13f, 0.0f, 0x1.499ae8p-79f,
     0.0f, 0.0f, 0x1.2e36e6p-82f, 0x1.8cfaa2p-62f, 0x1.6ae51p-12f, 0x1.b8cbb8p-50f,
     0.0f, 0x1.6a8834p-22f, 0x1.bf288cp-103f, 0x1.97b6d2p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ce5c36p-20f, 0.0f, 0x1p0f, 0x1.785b04p-108f, 0.0f, 0.0f,
     0x1.ee975ap-42f, 0.0f, 0x1.5cc62ap-98f, 0.0f, 0x1.c275c6p-87f, 0.0f, 0.0f,
     0x1.f681c2p-61f, 0.0f, 0.0f, 0x1.08f8cap-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.255822p-92f, 0.0f, 0x1.25305ep-11f, 0.0f, 0x1.9986aap-109f, 0x1.309304p-106f,
     0.0f, 0x1.67d5c4p-64f, 0.0f, 0x1.b933p-63f, 0x1.acba2ap-82f, 0x1.92a846p-85f,
     0.0f, 0.0f, 0x1.24fe6ap-15f, 0.0f, 0x1.c1a788p-106f, 0.0f, 0x1.31406p-17f,
     0x1.8b3174p-52f, 0x1.77d9d8p-14f, 0.0f, 0x1.e95608p-1f, 0.0f, 0.0f,
     0x1.3382f4p-12f, 0x1.921548p-25f, 0.0f, 0.0f, 0x1.d9ceb6p-119f, 0x1.f105aep-99f,
     0.0f, 0x1.8ce6bcp-103f, 0.0f, 0x1.5e726cp-120f, 0x1.88aefcp-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.37102ep-116f, 0x1.f2e556p-12f, 0x1.92f1c8p-109f, 0x1.810b4cp-36f,
     0x1.f8da7ep-54f, 0.0f, 0x1.b5d14ap-95f, 0x1.b28c04p-60f, 0x1.9b5dap-43f, 0.0f,
     0x1.48d5fap-15f, 0x1.27b9eep-121f, 0.0f, 0.0f, 0x1.11f23cp-18f, 0x1.734fbap-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91e396p-34f, 0.0f, 0x1.b3c6e2p-34f, 0.0f,
     0x1.7ef71p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71e7dcp-115f, 0x1.6a0632p-18f, 0x1.d3d132p-48f, 0.0f, 0.0f, 0x1.086a8ap-54f,
     0x1.37f78cp-5f, 0x1.701762p-64f, 0.0f, 0.0f, 0x1p0f, 0x1.2980bep-117f, 0.0f,
     0.0f, 0.0f, 0x1.f1ba7cp-31f, 0.0f, 0x1.dbe4cap-104f, 0.0f, 0.0f, 0x1.b3bd7ap-28f,
     0.0f, 0.0f, 0x1.700fd4p-120f, 0x1.f48296p-25f, 0x1.3521b4p-18f, 0.0f,
     0x1.2433d8p-64f, 0.0f, 0x1.942ad6p-91f, 0x1.9547eap-119f, 0x1.f02118p-4f,
     0x1.aab426p-101f, 0x1.19bf28p-11f, 0.0f, 0x1.4a0bcep-126f, 0.0f, 0x1.8cb60ap-55f,
     0x1.f6f1f6p-75f, 0.0f, 0x1.0f00cp-39f, 0.0f, 0x1.76537p-31f, 0x1.188aeap-57f,
     0.0f, 0x1.c7f5c2p-15f, 0x1.cdc0c4p-32f, 0.0f, 0.0f, 0.0f, 0x1.0244d8p-84f,
     0x1.980a18p-37f, 0.0f, 0x1.a2647cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9498acp-44f,
     0x1.1314bp-74f, 0x1.47eadap-64f, 0x1.ee9748p-11f, 0x1.b84c6ep-98f, 0.0f,
     0x1.0f4178p-52f, 0.0f, 0x1.0bff8cp-91f, 0.0f, 0.0f, 0x1.e801b4p-112f,
     0x1.77463p-50f, 0.0f, 0x1.1a8af4p-114f, 0.0f, 0x1.9ceccp-104f, 0.0f, 0.0f,
     0x1.5c352ep-72f, 0x1.d8acep-41f, 0.0f, 0x1.b2e82p-54f, 0x1.142aaap-119f,
     0x1.a5f57cp-94f, 0.0f, 0.0f, 0x1.e94db4p-84f, 0.0f, 0.0f, 0.0f, 0x1.e0b0fap-53f,
     0x1.a3922ep-53f, 0x1.32ded4p-116f, 0x1.d17bp-14f, 0x1.19dc48p-56f, 0.0f, 0.0f,
     0.0f, 0x1.3329d4p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4003a2p-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70b37ep-50f, 0x1.b17898p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.584048p-54f, 0.0f, 0.0f, 0x1.a31288p-41f, 0x1.4ed526p-83f,
     0x1.48d6b4p-25f, 0.0f, 0.0f, 0.0f, 0x1.cd771ep-70f, 0x1.e34bdep-14f,
     0x1.56e914p-85f, 0.0f, 0x1.4b5bdp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7c28p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16d392p-1f, 0.0f, 0.0f, 0.0f, 0x1.b44ae8p-27f,
     0x1.35bc0cp-56f, 0x1.c7598ap-97f, 0.0f, 0x1.a71b26p-120f, 0x1.d8045ap-56f, 0.0f,
     0x1.6c88c8p-37f, 0.0f, 0x1.0067e2p-97f, 0x1.50f6b6p-7f, 0x1.d1103ap-118f,
     0x1.701d02p-100f, 0x1.80ec76p-68f, 0x1.5acf08p-114f, 0.0f, 0x1.c9493cp-4f,
     0x1.c5927ap-124f, 0x1.470982p-99f, 0.0f, 0x1.7f4a7ep-68f, 0x1.99d162p-122f,
     0x1.b40ae6p-37f, 0x1.49e55ap-9f, 0.0f, 0x1.27c33ap-121f, 0.0f, 0x1.b8e5a2p-2f,
     0x1.cf7bd6p-122f, 0.0f, 0x1.810de8p-51f, 0.0f, 0.0f, 0.0f, 0x1.0a52e2p-126f,
     0x1.5bd2fcp-88f, 0.0f, 0x1.7a7ab8p-106f, 0.0f, 0.0f, 0.0f, 0x1.dc5468p-59f, 0.0f,
     0.0f, 0x1.bb608cp-19f, 0x1.13b394p-38f, 0x1.3e4428p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a69aep-49f, 0x1.c8d98ep-66f, 0x1.026d88p-85f, 0x1.e936fcp-34f,
     0x1.7d748ap-41f, 0.0f, 0x1.a1bb7cp-48f, 0.0f, 0.0f, 0x1.e852a4p-105f, 0.0f,
     0x1.45f53cp-101f, 0x1.8fd578p-106f, 0x1.1b75d6p-75f, 0x1.a8a3cap-101f,
     0x1.88b9c6p-26f, 0x1.2e7902p-29f, 0x1.166718p-82f, 0.0f, 0.0f, 0.0f,
     0x1.ec9a94p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.124c5p-67f, 0.0f, 0.0f, 0.0f,
     0x1.58912ap-80f, 0x1.d8f742p-116f, 0x1.421a12p-5f, 0x1.5f9c9ap-66f,
     0x1.c3c868p-70f, 0.0f, 0x1.10a166p-123f, 0.0f, 0x1.4e7d5cp-96f, 0x1.c637e8p-39f,
     0x1.184caap-87f, 0.0f, 0.0f, 0x1.aaf6bp-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.efcb8ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86a1d8p-104f, 0x1.27ea6p-94f, 0x1.f17a12p-10f, 0.0f, 0x1.e32cdcp-67f, 0.0f,
     0x1.2cbffep-64f, 0x1.4ca9e8p-101f, 0.0f, 0.0f, 0.0f, 0x1.902708p-51f, 0.0f, 0.0f,
     0x1.7d8ccap-125f, 0x1.6ee1f4p-52f, 0.0f, 0x1.1e84aep-36f, 0x1.6542cep-44f, 0.0f,
     0.0f, 0.0f, 0x1.b41134p-87f, 0x1.1d410ep-40f, 0x1.cb05dep-38f, 0x1.79650ep-64f,
     0x1.2ba6f8p-52f, 0x1.3133aep-47f, 0.0f, 0.0f, 0x1.7c3c2ep-109f, 0.0f,
     0x1.f15126p-108f, 0.0f, 0x1.e47586p-74f, 0x1.69d1b4p-97f, 0.0f, 0.0f,
     0x1.621ec6p-38f, 0x1.065704p-82f, 0x1.df74cp-68f, 0.0f, 0.0f, 0.0f,
     0x1.b10136p-13f, 0x1.3f4142p-46f, 0.0f, 0.0f, 0x1.f8a95ep-14f, 0x1.8e44eap-121f,
     0.0f, 0x1.85f3acp-92f, 0x1.6e91dep-60f, 0x1.f8dd2ep-99f, 0.0f, 0x1.b00966p-3f,
     0.0f, 0.0f, 0x1.61f3aap-101f, 0x1.d9a238p-7f, 0.0f, 0x1.74edf8p-26f, 0.0f,
     0x1.0c1414p-121f, 0x1.c06766p-107f, 0.0f, 0x1.b272a2p-122f, 0x1.bde1cap-89f,
     0.0f, 0x1.9e5c44p-54f, 0x1.0bde74p-123f, 0x1.be87e6p-7f, 0x1.1f49bcp-61f, 0.0f,
     0x1.345d8cp-19f, 0.0f, 0.0f, 0x1.20147ap-41f, 0.0f, 0.0f, 0.0f, 0x1.938434p-45f,
     0x1.57c726p-6f, 0.0f, 0x1.17fa6ap-62f, 0.0f, 0.0f, 0.0f, 0x1.bc822ap-101f,
     0x1.729c48p-32f, 0x1.996bf2p-81f, 0x1.0ee1cap-123f, 0.0f, 0x1.af49c6p-71f, 0.0f,
     0x1.ef98e6p-8f, 0x1.60669ap-77f, 0x1.0478dep-65f, 0x1.3cfa8ep-98f,
     0x1.473b3ap-93f, 0.0f, 0x1.c33eb6p-57f, 0.0f, 0x1.d58d7ap-21f, 0.0f,
     0x1.6f3f66p-4f, 0.0f, 0x1.486378p-36f, 0.0f, 0.0f, 0x1.204938p-1f,
     0x1.76c844p-75f, 0x1.2582dcp-116f, 0x1.8ee2cp-115f, 0x1.d456e6p-14f,
     0x1.1bc05ep-115f, 0.0f, 0.0f, 0x1.d223a4p-52f, 0x1.2356eap-109f, 0.0f,
     0x1.4f5252p-115f, 0.0f, 0.0f, 0.0f, 0x1.f18c98p-32f, 0x1.4979fcp-48f,
     0x1.71934ap-50f, 0.0f, 0.0f, 0x1.31bc7cp-48f, 0x1.eebb22p-94f, 0x1.eb42f8p-69f,
     0.0f, 0.0f, 0x1.74813ap-28f, 0x1.9dff1cp-118f, 0x1.1946cep-34f, 0.0f,
     0x1.610c0ep-123f, 0.0f, 0x1.8f7ea6p-35f, 0x1.03d98ep-15f, 0x1.e2d64ep-30f,
     0x1.dc456p-87f, 0x1.6b9a38p-119f, 0.0f, 0.0f, 0x1.7b6eccp-18f, 0x1.eec45ep-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a438ep-92f, 0.0f, 0.0f, 0.0f,
     0x1.7c8c3ap-8f, 0x1.1017e6p-111f, 0.0f, 0.0f, 0x1.ba82a4p-85f, 0.0f,
     0x1.891a84p-24f, 0.0f, 0x1.228278p-31f, 0x1.bcf7cap-40f, 0.0f, 0x1.32ceb6p-15f,
     0.0f, 0x1.104d4ep-124f, 0x1.8e6442p-45f, 0x1.4d1512p-6f, 0.0f, 0x1.21414ap-92f,
     0x1.76dfd2p-38f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sinf4_u35avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sinf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
