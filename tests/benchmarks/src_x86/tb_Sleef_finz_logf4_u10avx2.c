/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logf4_u10avx2128.c --function Sleef_finz_logf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.05ae28p-121f, 0.0f, 0x1.45067cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.831376p-124f, 0.0f, 0.0f, 0x1.d09458p-84f, 0x1.68d16p-28f, 0x1.eb7e44p-14f,
     0x1.10dc7ap-101f, 0x1.cf65eap-34f, 0.0f, 0.0f, 0x1.f10fa4p-64f, 0x1.e172c8p-40f,
     0.0f, 0x1.bf783cp-74f, 0.0f, 0x1.4b1b42p-14f, 0.0f, 0x1.62603p-30f,
     0x1.8e4ffep-125f, 0x1.f24b08p-97f, 0.0f, 0.0f, 0x1.5dc5f6p-1f, 0x1.82cfb6p-6f,
     0x1.6fd6aep-29f, 0.0f, 0.0f, 0x1.84031ap-60f, 0.0f, 0x1.07b2fep-50f,
     0x1.67439ep-91f, 0x1.a6d6dap-116f, 0.0f, 0.0f, 0x1.88057p-85f, 0x1.45ae3ep-32f,
     0.0f, 0x1.2dcd7ap-95f, 0.0f, 0.0f, 0x1.2b19a6p-35f, 0.0f, 0.0f, 0.0f,
     0x1.509ba8p-20f, 0x1.06efa6p-76f, 0x1.0d5ecep-103f, 0x1.1c6fa2p-124f,
     0x1.f3498cp-31f, 0x1.812d7cp-75f, 0.0f, 0.0f, 0x1.aefe7ap-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.41ef28p-88f, 0x1.d5e194p-120f, 0.0f, 0x1.274e3cp-120f,
     0x1.675b3ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4877c4p-68f, 0.0f,
     0x1.3ca6d6p-10f, 0.0f, 0.0f, 0x1.f23132p-104f, 0.0f, 0x1.15bc9p-77f,
     0x1.668efp-14f, 0.0f, 0.0f, 0x1.cfb0bap-82f, 0x1.3b1afcp-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ddec5p-118f, 0.0f, 0x1.7f07f4p-3f, 0.0f, 0x1.164306p-43f, 0.0f,
     0x1.0e75fcp-78f, 0x1.54d08cp-5f, 0.0f, 0x1.c1739ap-46f, 0x1.6a7c8cp-72f, 0.0f,
     0x1.29e816p-8f, 0.0f, 0.0f, 0x1.c1726ap-5f, 0.0f, 0x1.dda91ap-71f, 0.0f, 0.0f,
     0.0f, 0x1.4d7698p-37f, 0x1.2246eap-107f, 0x1.5f9032p-78f, 0.0f, 0x1.94a616p-97f,
     0x1.b2f72ap-115f, 0x1.f1be68p-80f, 0x1.7ddb06p-39f, 0.0f, 0x1.46e122p-32f,
     0x1.2e7074p-116f, 0x1.49e8d4p-14f, 0.0f, 0x1.f1a2ecp-20f, 0x1.3e5dc8p-99f, 0.0f,
     0x1.e9da46p-45f, 0.0f, 0x1.794a98p-9f, 0x1.1d3b3ap-106f, 0x1.3c6124p-52f,
     0x1.1b16fap-109f, 0.0f, 0.0f, 0x1.ffde72p-58f, 0x1.a50652p-99f, 0x1.50184cp-93f,
     0x1.041bbap-120f, 0.0f, 0x1.37865ep-106f, 0.0f, 0.0f, 0.0f, 0x1.77ebfp-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.693aap-32f, 0x1.dade6ap-42f,
     0x1.c7528p-3f, 0.0f, 0x1.9eb978p-43f, 0x1.bd5c5cp-112f, 0.0f, 0.0f,
     0x1.739d14p-31f, 0.0f, 0.0f, 0.0f, 0x1.7e3a6p-113f, 0x1.a387c8p-109f, 0.0f, 0.0f,
     0x1.7248aep-40f, 0.0f, 0x1.f9ecb8p-51f, 0x1.86ea38p-61f, 0.0f, 0x1.2d33fap-63f,
     0.0f, 0x1.61eb56p-59f, 0x1.30457ap-64f, 0.0f, 0.0f, 0x1.44f3ecp-29f, 0.0f,
     0x1.98a23ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36f1fcp-18f, 0x1.89623ep-25f,
     0x1.894deep-124f, 0.0f, 0.0f, 0x1.9b980ep-82f, 0x1.ee984p-65f, 0x1.dfbfe8p-2f,
     0x1.c1c48cp-68f, 0.0f, 0x1.3f64f4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0256a2p-15f,
     0.0f, 0.0f, 0x1.326dc4p-19f, 0.0f, 0x1.0095ap-120f, 0.0f, 0x1.e8c2ep-97f, 0.0f,
     0x1.f8cd7ep-65f, 0.0f, 0.0f, 0x1.863502p-56f, 0x1.fc0144p-63f, 0.0f, 0.0f,
     0x1.cf3256p-52f, 0x1.f53378p-13f, 0x1.ac87f4p-116f, 0x1.9a309cp-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ad5042p-113f, 0x1.38b50ap-16f, 0x1.3f74p-103f, 0.0f, 0.0f,
     0x1.7135aap-17f, 0x1p0f, 0x1.621704p-118f, 0.0f, 0.0f, 0x1.10ca3p-103f, 0.0f,
     0.0f, 0.0f, 0x1.03aa9ep-35f, 0x1.6b328ep-25f, 0x1.e27f92p-102f, 0.0f,
     0x1.4e1fb4p-116f, 0x1.ba70cp-124f, 0x1.54573ep-38f, 0.0f, 0x1.c92e54p-107f, 0.0f,
     0x1.b8b67ap-73f, 0x1.c11674p-93f, 0x1.55bb0ep-38f, 0x1.d46438p-110f,
     0x1.2a0fe6p-100f, 0x1.39c79ep-40f, 0x1.d8623p-34f, 0.0f, 0.0f, 0x1.197adp-108f,
     0.0f, 0.0f, 0.0f, 0x1.d9242ep-115f, 0x1.718586p-78f, 0x1.e30412p-37f,
     0x1.168b26p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1cf9p-58f, 0x1.b499a8p-93f, 0.0f,
     0.0f, 0x1.c1f42cp-98f, 0.0f, 0.0f, 0.0f, 0x1.9fc1b6p-44f, 0.0f, 0x1.a157dep-89f,
     0x1.0c6894p-24f, 0.0f, 0.0f, 0x1.c60f9ap-81f, 0x1.c9e1e4p-114f, 0x1.09d154p-7f,
     0x1.16c76cp-79f, 0x1.fbccep-47f, 0x1.7fed7p-46f, 0.0f, 0.0f, 0x1.2954a6p-62f,
     0x1.57c49cp-26f, 0.0f, 0.0f, 0.0f, 0x1.16e1ccp-27f, 0x1.f556eap-112f, 0.0f, 0.0f,
     0x1.6edcaep-19f, 0.0f, 0.0f, 0.0f, 0x1.36faap-64f, 0x1.845988p-78f,
     0x1.35d5f6p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb0f4p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.430808p-28f, 0x1.10eefcp-55f, 0.0f, 0.0f,
     0x1.45ad0cp-13f, 0x1.ffbe4ep-3f, 0.0f, 0.0f, 0x1.290466p-85f, 0x1.30373ep-31f,
     0.0f, 0x1.341384p-79f, 0.0f, 0.0f, 0x1.f8600cp-51f, 0.0f, 0.0f, 0.0f,
     0x1.4cb102p-48f, 0x1.899416p-96f, 0.0f, 0.0f, 0x1.2222fep-119f, 0x1.f897eap-98f,
     0.0f, 0.0f, 0x1.8df98ep-121f, 0.0f, 0x1.d83bd8p-108f, 0x1.7edf3cp-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a74f42p-120f, 0.0f, 0x1.d69cbep-91f,
     0x1.d0e666p-86f, 0x1.202c12p-33f, 0.0f, 0.0f, 0.0f, 0x1.3e014ap-125f,
     0x1.b12376p-116f, 0.0f, 0.0f, 0.0f, 0x1.fa65fap-103f, 0.0f, 0x1.b459acp-36f,
     0.0f, 0x1.81af42p-119f, 0.0f, 0.0f, 0.0f, 0x1.29f592p-6f, 0x1.a2fc42p-10f, 0.0f,
     0x1.0e31b2p-76f, 0.0f, 0.0f, 0.0f, 0x1.06f5cap-99f, 0.0f, 0x1.b6ce7p-6f, 0.0f,
     0.0f, 0x1.dab8fcp-51f, 0x1.30b85p-120f, 0.0f, 0x1.598d7ap-66f, 0x1.9f0166p-72f,
     0x1.8fcab4p-31f, 0.0f, 0.0f, 0x1.fdf244p-2f, 0x1.c959dep-75f, 0x1.736a4ap-52f,
     0x1.94f60ap-30f, 0x1.a5d0eep-20f, 0.0f, 0x1.94f316p-1f, 0.0f, 0.0f,
     0x1.137474p-124f, 0x1.151c0ap-28f, 0x1.c1245ap-23f, 0x1.846914p-19f,
     0x1.19d164p-67f, 0.0f, 0x1.b91dc8p-108f, 0x1.eea05cp-102f, 0x1.9c6972p-19f, 0.0f,
     0x1.18de44p-31f, 0x1.568106p-35f, 0.0f, 0x1.d6e538p-21f, 0x1.3bb4d6p-117f,
     0x1.5228ep-16f, 0.0f, 0x1.275852p-89f, 0x1.411adap-86f, 0.0f, 0.0f, 0.0f,
     0x1.8ee204p-109f, 0.0f, 0x1.917b6ep-43f, 0x1.6a9b0cp-46f, 0x1.0f9588p-6f,
     0x1.b5579p-123f, 0x1.38581cp-68f, 0.0f, 0.0f, 0x1.313a64p-71f, 0.0f,
     0x1.cdd97cp-4f, 0x1.465e2ap-54f, 0.0f, 0.0f, 0x1.1524cep-17f, 0.0f, 0.0f, 0.0f,
     0x1.2f22bep-116f, 0x1.f15c0ap-68f, 0.0f, 0x1.59c07p-18f, 0x1.51c67ep-45f,
     0x1.29dbdep-26f, 0x1.7c34f2p-35f, 0.0f, 0.0f, 0x1.9d50e8p-39f, 0x1.c47aeap-73f,
     0.0f, 0.0f, 0x1.a71e26p-73f, 0.0f, 0x1.07ab6cp-58f, 0.0f, 0x1.5593f2p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.af471ep-39f, 0.0f, 0x1.591f16p-109f, 0.0f, 0.0f,
     0x1.2e567ap-14f, 0x1.55062p-18f, 0x1.ec8fcap-13f, 0x1.f4c53cp-73f, 0.0f, 0.0f,
     0x1.33d74p-7f, 0.0f, 0.0f, 0x1.854078p-36f, 0.0f, 0x1.5758ccp-59f, 0.0f, 0.0f,
     0x1.77130cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e65c8cp-12f, 0.0f, 0x1.58d152p-81f,
     0.0f, 0x1.d6c66ap-16f, 0x1.a0251ap-28f, 0x1.9f7594p-49f, 0.0f, 0.0f,
     0x1.54d258p-123f, 0x1.a46b38p-19f, 0x1.4c2e74p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e92988p-58f, 0.0f, 0x1.75f3b2p-49f, 0x1.e33b2ap-74f, 0.0f, 0.0f,
     0x1.57966cp-26f, 0x1.6f4fa4p-63f, 0x1.acdd16p-15f, 0.0f, 0.0f, 0.0f,
     0x1.96a946p-58f, 0.0f, 0x1.f4d344p-71f, 0.0f, 0x1.a83014p-29f, 0x1.38b608p-123f,
     0x1.847bb2p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbb2bcp-53f, 0x1.178ccp-119f, 0.0f,
     0.0f, 0.0f, 0x1.62fbbp-10f, 0.0f, 0x1.a66476p-83f, 0.0f, 0x1.e0329cp-106f,
     0x1.c0a38ep-23f, 0.0f, 0.0f, 0x1.b0a34cp-104f, 0x1.57526p-34f, 0.0f,
     0x1.238e94p-3f, 0.0f, 0x1.93041cp-115f, 0x1.a8689p-18f, 0x1.65baa2p-73f,
     0x1.188438p-67f, 0x1.9b0fb6p-70f, 0x1.77a7dcp-64f, 0.0f, 0x1.903c9ap-16f,
     0x1.11c8b4p-37f, 0x1.251c76p-51f, 0.0f, 0x1.ae7c2ap-87f, 0.0f, 0x1.e5421p-21f,
     0x1.62676ap-3f, 0.0f, 0.0f, 0x1.a1c562p-66f, 0x1.473f18p-11f, 0x1.8764fp-17f,
     0.0f, 0x1.0bba4ep-42f, 0x1.200e8ap-16f, 0x1.66de54p-45f, 0x1.ff019cp-123f, 0.0f,
     0x1.66a3dcp-41f, 0.0f, 0x1.6777dp-77f, 0x1.f603bcp-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.653eep-20f, 0x1.0a9304p-10f, 0.0f, 0x1.f4b2e8p-74f, 0x1.3ba3a4p-86f, 0.0f,
     0x1.b8e368p-124f, 0x1.7624d6p-113f, 0.0f, 0x1.b9c834p-61f, 0.0f, 0.0f,
     0x1.bc439p-105f, 0x1.5f0fc4p-7f, 0.0f, 0x1.229d1ap-112f, 0.0f, 0.0f,
     0x1.0c6abp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffa452p-7f, 0.0f,
     0x1.ba78p-120f, 0x1.fb77b4p-44f, 0.0f, 0x1.3119cap-77f, 0.0f, 0x1.ea4b7p-78f,
     0x1.535de4p-72f, 0.0f, 0x1.209686p-94f, 0x1.71a8dcp-62f, 0x1.69edeep-12f, 0.0f,
     0x1.148616p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca84a6p-84f, 0.0f, 0x1.8f652cp-41f,
     0.0f, 0x1.7f32dcp-103f, 0x1.1ca558p-64f, 0x1.568b1cp-100f, 0x1.ba875ep-111f,
     0.0f, 0x1.ec14ap-61f, 0x1.4d46ccp-16f, 0.0f, 0.0f, 0.0f, 0x1.2e3004p-121f,
     0x1.577ac4p-10f, 0.0f, 0.0f, 0x1.b729bcp-86f, 0x1.142b12p-122f, 0.0f, 0.0f,
     0x1.46642cp-28f, 0.0f, 0.0f, 0x1.94cdd4p-53f, 0x1.80bb82p-52f, 0.0f, 0.0f,
     0x1.84e8d4p-95f, 0x1.d45f68p-14f, 0x1.703a46p-69f, 0x1.e8a1dcp-84f, 0.0f,
     0x1.ce9c9ap-117f, 0.0f, 0.0f, 0x1.8c2142p-34f, 0x1.ff3aacp-114f,
     0x1.d2b248p-106f, 0.0f, 0x1.1e2d4cp-2f, 0.0f, 0.0f, 0x1.63480ap-115f, 0.0f,
     0x1.e5afa8p-107f, 0.0f, 0x1.f84aep-41f, 0.0f, 0.0f, 0x1.dadd3cp-53f, 0.0f, 0.0f,
     0x1.f380bap-108f, 0x1.c1c2eap-4f, 0x1.71039p-89f, 0.0f, 0x1.129e28p-17f, 0.0f,
     0x1.7d571cp-23f, 0x1.c212c6p-32f, 0.0f, 0x1.69a0aap-25f, 0x1.000dfcp-39f, 0.0f,
     0.0f, 0.0f, 0x1.42e716p-35f, 0x1.7d646cp-12f, 0.0f, 0.0f, 0x1.13eda6p-116f, 0.0f,
     0x1.64478cp-22f, 0x1.c7df3ap-71f, 0.0f, 0.0f, 0.0f, 0x1.6acddp-58f,
     0x1.47ddc4p-70f, 0.0f, 0.0f, 0.0f, 0x1.d384c2p-101f, 0x1.073d08p-90f,
     0x1.e04264p-124f, 0x1.b18fb8p-69f, 0.0f, 0.0f, 0.0f, 0x1.d6b524p-8f, 0.0f,
     0x1.7d9bdp-27f, 0x1.cadfe6p-113f, 0.0f, 0x1.a04456p-98f, 0x1.3836cp-111f,
     0x1.7f0d42p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95e566p-72f, 0.0f,
     0x1.50bd16p-18f, 0x1.ba8956p-12f, 0.0f, 0.0f, 0x1.098fb2p-68f, 0x1.7c89c6p-104f,
     0.0f, 0x1.aa8442p-53f, 0x1.760aeep-25f, 0x1.20c0f6p-71f, 0.0f, 0x1.726a12p-92f,
     0.0f, 0.0f, 0x1.e5baa4p-32f, 0.0f, 0x1.cd015cp-69f, 0x1.1cf94cp-61f,
     0x1.e121dep-126f, 0x1.c2a31ep-118f, 0x1.1c2bd4p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3fe5ep-37f, 0x1.deb308p-71f, 0x1.1b3326p-36f, 0x1.a88ae4p-35f,
     0x1.0edc3ap-112f, 0.0f, 0.0f, 0x1.8e4f5ap-37f, 0x1.a6ea82p-33f, 0x1.e89a94p-107f,
     0.0f, 0x1.e484p-105f, 0x1.919cdap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ffb96p-122f,
     0.0f, 0.0f, 0x1.b9fc64p-88f, 0.0f, 0x1.653cbep-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bf052p-16f, 0x1.2b26d2p-118f, 0x1.2c2a8ep-48f, 0.0f, 0x1.c9e526p-88f,
     0x1.5345b4p-60f, 0x1.4c8b38p-121f, 0.0f, 0.0f, 0x1.2a6c34p-50f, 0x1.1219c4p-98f,
     0x1.77c06p-17f, 0x1.92d432p-42f, 0x1.70e6d2p-91f, 0.0f, 0x1p0f, 0.0f,
     0x1.70dcdap-101f, 0x1.bba1f6p-30f, 0x1.1f6bf4p-70f, 0.0f, 0x1.15381ap-62f, 0.0f,
     0.0f, 0.0f, 0x1.92161p-89f, 0.0f, 0.0f, 0x1.e322d2p-80f, 0x1.24d98ap-59f, 0.0f,
     0.0f, 0x1.4a6ea4p-81f, 0x1.7d0114p-102f, 0x1.b2ea44p-126f, 0.0f, 0x1.e52692p-33f,
     0.0f, 0x1.7b2f54p-123f, 0.0f, 0.0f, 0x1.2c3aeap-125f, 0x1.00b268p-2f,
     0x1.cbd358p-87f, 0.0f, 0.0f, 0.0f, 0x1.30b2bp-14f, 0x1.2e22d2p-46f, 0.0f, 0.0f,
     0x1.ea4894p-79f, 0x1.9d2394p-42f, 0.0f, 0x1.b35d9ep-48f, 0.0f, 0x1.b2b854p-69f,
     0.0f, 0.0f, 0x1.09c646p-112f, 0x1.52cb58p-8f, 0x1.4d55a4p-100f, 0.0f,
     0x1.84204p-81f, 0.0f, 0.0f, 0x1.ef1ab2p-58f, 0.0f, 0.0f, 0x1.3ff3ecp-74f,
     0x1.293d4ap-80f, 0.0f, 0.0f, 0x1.53796ap-34f, 0x1.ea100ep-22f, 0x1.9daf3ep-67f,
     0.0f, 0x1.6ccaaep-85f, 0.0f, 0x1.261bc8p-58f, 0x1.0085dp-117f, 0x1.0e9d3cp-25f,
     0.0f, 0x1.f03732p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4814aep-97f, 0.0f,
     0.0f, 0x1.9f6f58p-49f, 0.0f, 0.0f, 0x1.f592a2p-20f, 0.0f, 0x1.ad1094p-110f,
     0x1.7a042p-9f, 0x1.3ae21cp-124f, 0x1.760514p-111f, 0.0f, 0.0f, 0.0f,
     0x1.7cd6f6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efa08ep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e115f4p-58f, 0.0f, 0x1.f3b4b2p-71f, 0x1.129b08p-99f, 0.0f, 0.0f,
     0x1.b89e98p-44f, 0x1.77aebp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93fab6p-100f, 0.0f,
     0.0f, 0x1.658292p-41f, 0x1.24db32p-78f, 0.0f, 0x1.7cdedcp-87f, 0.0f,
     0x1.8ccac6p-6f, 0.0f, 0.0f, 0.0f, 0x1.44ee96p-29f, 0.0f, 0x1.c35d0cp-4f, 0.0f,
     0.0f, 0x1.5b6ddp-60f, 0x1.ac0126p-67f, 0x1.b9b5aap-116f, 0x1.67541ep-112f,
     0x1.0cadep-50f, 0.0f, 0x1.cd700ep-117f, 0.0f, 0x1.ff315cp-71f, 0.0f,
     0x1.afe34ap-118f, 0.0f, 0x1.926db8p-12f, 0.0f, 0x1.c4ba22p-46f, 0x1.dff906p-84f,
     0.0f, 0x1.de2496p-32f, 0.0f, 0.0f, 0x1.197896p-79f, 0.0f, 0x1.58ce84p-88f,
     0x1.c2092p-121f, 0x1.50b8b6p-6f, 0x1.8f622cp-40f, 0.0f, 0.0f, 0x1.01250ep-57f,
     0x1.867d06p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48d7c8p-19f, 0x1.73d36p-21f,
     0x1.e698f4p-85f, 0.0f, 0x1.01e128p-38f, 0.0f, 0x1.574316p-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.26e86p-52f, 0.0f, 0.0f, 0x1.2402e6p-106f, 0.0f, 0.0f,
     0x1.a4c34cp-43f, 0x1.3b29d8p-49f, 0.0f, 0x1.11cd76p-18f, 0x1.21a576p-11f,
     0x1.8064ep-48f, 0x1.e1617ep-80f, 0x1.8dd7ep-28f, 0x1.b8f68cp-45f, 0.0f,
     0x1.ed4a1ep-98f, 0.0f, 0x1.d558fap-89f, 0.0f
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
            tmp1 = Sleef_finz_logf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_logf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_logf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
