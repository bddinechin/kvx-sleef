/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fdimf8_kvx.c --function Sleef_finz_fdimf8_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 8 --function-input-vector-size 8 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.3c651p-56f, 0x1.81266ap-98f, 0x1.b119a6p-43f, 0x1.831c24p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e20bcp-118f, 0x1.a7b0a2p-42f, 0x1.e07f78p-32f,
     0x1.75d0e6p-49f, 0.0f, 0.0f, 0x1.bb0452p-111f, 0x1.407f7cp-120f, 0.0f,
     0x1.12553p-76f, 0x1.e1af24p-8f, 0.0f, 0x1.f65ad8p-6f, 0x1.ed346ap-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1d60cp-93f, 0x1.3a2834p-84f,
     0x1.4589b2p-123f, 0x1.43006ep-47f, 0x1.03404ep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8bc7ep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21a2aep-8f, 0x1.080beep-84f, 0x1.9c7254p-43f, 0.0f, 0.0f,
     0x1.7d8386p-22f, 0.0f, 0x1.2a3cb4p-45f, 0.0f, 0.0f, 0x1.b5b1bep-121f,
     0x1.06728cp-5f, 0.0f, 0.0f, 0.0f, 0x1.0f8bp-1f, 0.0f, 0x1.7b273p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fdba68p-70f, 0x1.74cd68p-50f, 0.0f, 0.0f, 0x1.159474p-62f,
     0x1.d6b7e4p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be28fep-88f,
     0x1.68203ep-69f, 0x1.67ba1p-27f, 0x1.73d8bap-12f, 0x1.3752fap-47f, 0.0f, 0.0f,
     0.0f, 0x1.64ad3p-28f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.df0958p-63f, 0.0f,
     0x1.4ce91p-109f, 0.0f, 0x1.6fc9fep-126f, 0x1.4001f4p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.656b22p-95f, 0.0f, 0.0f, 0x1.0fdacp-3f, 0.0f, 0x1.16491cp-123f,
     0x1.e28922p-52f, 0x1.8f895cp-21f, 0x1.37b3b4p-74f, 0x1.efdbbep-70f, 0.0f, 0.0f,
     0x1.3883bcp-54f, 0.0f, 0.0f, 0x1.f4658ep-28f, 0.0f, 0x1.b0b936p-16f, 0.0f,
     0x1.837368p-88f, 0.0f, 0x1.f72dcep-101f, 0x1.d38bfep-99f, 0.0f, 0x1.0ef02ap-1f,
     0x1.642002p-52f, 0x1.4ffde2p-34f, 0.0f, 0.0f, 0.0f, 0x1.1796bp-110f, 0.0f, 0.0f,
     0x1p0f, 0x1.0badd2p-72f, 0.0f, 0.0f, 0x1.6f123p-98f, 0.0f, 0.0f,
     0x1.d33968p-117f, 0x1.0db32ep-86f, 0x1.24546cp-101f, 0x1.0199c2p-50f, 0.0f,
     0x1.2a898ap-13f, 0x1.f1ec3p-114f, 0x1.a3d29cp-60f, 0x1.4541f8p-3f,
     0x1.2b86fp-43f, 0.0f, 0x1.425b5p-63f, 0x1.891972p-50f, 0.0f, 0x1.81b374p-82f,
     0.0f, 0.0f, 0x1.2409d6p-103f, 0x1.6291a4p-53f, 0.0f, 0x1.4422dap-124f,
     0x1.2bcce8p-111f, 0x1.126776p-96f, 0x1.f01704p-99f, 0.0f, 0.0f, 0x1.de78ccp-108f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.a5c39cp-3f, 0x1.22dafap-12f, 0.0f, 0.0f,
     0x1.0fa4a4p-44f, 0x1.0dfd8cp-66f, 0x1.68fdecp-96f, 0.0f, 0.0f, 0.0f,
     0x1.b112f8p-75f, 0.0f, 0x1.ccb76p-26f, 0x1.f47ca2p-69f, 0.0f, 0x1.e2d9e2p-22f,
     0.0f, 0x1.ea5becp-126f, 0x1.5feb2cp-38f, 0.0f, 0x1.1b28acp-7f, 0.0f, 0.0f, 0.0f,
     0x1.7a5a94p-89f, 0x1.a2806ep-105f, 0x1.d4b3d6p-102f, 0.0f, 0x1.70e73cp-45f, 0.0f,
     0.0f, 0.0f, 0x1.42c6dep-105f, 0x1.8b6568p-98f, 0.0f, 0.0f, 0x1.2f30fcp-30f,
     0x1.2a712cp-91f, 0.0f, 0.0f, 0x1.b0dbcep-13f, 0x1.7acee6p-102f, 0.0f, 0.0f,
     0x1.7cc3bcp-69f, 0x1.cad56ap-58f, 0.0f, 0x1.4d819ep-40f, 0.0f, 0x1.c8131ep-18f,
     0.0f, 0x1.4fd1a6p-61f, 0x1.dd2dcp-14f, 0.0f, 0x1.0ed338p-59f, 0x1.5d17p-89f,
     0x1.fcc472p-117f, 0.0f, 0.0f, 0x1.346a9p-52f, 0.0f, 0.0f, 0x1.a263bep-107f, 0.0f,
     0.0f, 0x1.825e94p-60f, 0.0f, 0.0f, 0x1.f480cap-66f, 0x1.d805a8p-76f, 0.0f,
     0x1.af75ap-85f, 0x1.729178p-37f, 0.0f, 0x1.1f784ep-20f, 0.0f, 0.0f,
     0x1.1f9696p-53f, 0.0f, 0x1.6ee712p-87f, 0.0f, 0x1.15d0b8p-95f, 0x1.cf8b26p-17f,
     0.0f, 0x1.ca746p-3f, 0x1.9c2078p-8f, 0x1.3635ccp-23f, 0x1.3196eap-23f, 0.0f,
     0x1.89e08p-43f, 0.0f, 0.0f, 0.0f, 0x1.6d9fa4p-105f, 0x1.8198acp-85f, 0.0f, 0.0f,
     0x1.16fb3p-2f, 0x1.47b096p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a9644p-124f,
     0.0f, 0.0f, 0.0f, 0x1.dc0bccp-18f, 0x1.98c128p-117f, 0.0f, 0x1.3faeeep-88f,
     0x1.b41714p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87e25p-13f,
     0x1.3d785p-67f, 0.0f, 0x1.4a3afep-123f, 0x1.130f3p-111f, 0.0f, 0.0f,
     0x1.e73f9ep-62f, 0.0f, 0x1.4234eep-83f, 0.0f, 0x1.3cc7f6p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.675a66p-114f, 0.0f, 0x1.77335ep-44f, 0.0f, 0x1.d146aep-27f, 0.0f, 0.0f,
     0.0f, 0x1.eb9b6p-92f, 0.0f, 0x1.c219cep-52f, 0x1.0322fp-7f, 0x1.b7259cp-4f,
     0x1.8c80b8p-17f, 0.0f, 0.0f, 0x1.34b502p-104f, 0x1.d9ac7ep-69f, 0x1.d9d488p-95f,
     0.0f, 0x1.cf5834p-48f, 0x1.09f732p-88f, 0x1.c1ad38p-95f, 0x1.3b4ep-15f,
     0x1.8a30aep-41f, 0.0f, 0x1.c97858p-39f, 0.0f, 0.0f, 0.0f, 0x1.26f0fep-9f, 0.0f,
     0x1.785f3cp-92f, 0x1.186f88p-103f, 0x1.edab5ap-47f, 0.0f, 0x1.3e6a76p-90f,
     0x1.77572p-112f, 0x1.b16e04p-34f, 0x1.b7a622p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0381eap-28f, 0x1.324e4ep-53f, 0.0f, 0.0f, 0x1.20155ap-126f,
     0x1.7a0154p-28f, 0x1.28abdp-101f, 0x1.02c5ap-101f, 0x1.9ff662p-64f,
     0x1.47b382p-85f, 0.0f, 0.0f, 0x1.954b36p-109f, 0.0f, 0x1.0ca27cp-86f,
     0x1.42a0d2p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec2a98p-111f, 0x1.f7e63ap-81f, 0.0f,
     0x1.5ac97ep-29f, 0x1.e7cc02p-51f, 0.0f, 0x1.cf69cap-76f, 0x1.e58194p-92f,
     0x1.c83398p-23f, 0.0f, 0x1.00c7eap-81f, 0.0f, 0.0f, 0x1.67f07p-91f,
     0x1.60058p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f66d6p-64f, 0.0f, 0x1.2acbp-45f,
     0.0f, 0x1.c81be4p-70f, 0x1.b03572p-89f, 0x1.d92aacp-90f, 0.0f, 0.0f,
     0x1.4e0676p-37f, 0x1.d6ed24p-64f, 0x1.abcb3p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.327256p-55f, 0.0f, 0x1.20c6b6p-99f, 0.0f, 0.0f, 0x1.71f9cep-102f,
     0x1.141d62p-91f, 0x1.f2f392p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.918c6cp-12f, 0x1.e40e92p-59f, 0x1.c8c604p-61f, 0x1.c734a6p-70f,
     0x1.d9cb44p-17f, 0.0f, 0x1.d5c354p-1f, 0.0f, 0x1.72b3a8p-10f, 0.0f, 0.0f,
     0x1.5ec5e6p-31f, 0x1.78169ap-20f, 0.0f, 0.0f, 0.0f, 0x1.4cc0c8p-67f,
     0x1.244292p-119f, 0x1.64a612p-66f, 0.0f, 0x1.e57376p-117f, 0x1.f077acp-119f,
     0x1.ab51e6p-4f, 0.0f, 0x1.47177p-44f, 0x1.0054b6p-36f, 0.0f, 0x1.61944cp-76f,
     0x1.05a628p-114f, 0.0f, 0.0f, 0x1.11a9b6p-62f, 0x1.8b1812p-80f, 0.0f,
     0x1.37e77ap-33f, 0x1.619a5ep-73f, 0.0f, 0x1.c42f48p-40f, 0.0f, 0x1.050cc4p-115f,
     0.0f, 0x1.f46c84p-2f, 0.0f, 0.0f, 0.0f, 0x1.b6de5ap-29f, 0.0f, 0.0f, 0.0f,
     0x1.d53a8ep-62f, 0x1.5b8f86p-123f, 0.0f, 0x1.2e1f62p-84f, 0.0f, 0x1.fccdcep-30f,
     0x1.f7e7f8p-108f, 0x1.4aad04p-84f, 0x1.eafa6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1366fep-94f, 0.0f, 0x1.b4e7d6p-23f, 0.0f, 0x1.d8f302p-54f,
     0x1.4687ecp-40f, 0x1.5a9cdap-71f, 0x1.d983dep-88f, 0x1.8d7eacp-98f,
     0x1.8a5fdcp-73f, 0x1.e137dap-13f, 0.0f, 0x1.2f23d4p-79f, 0x1.a00f4ap-113f,
     0x1.dececp-99f, 0.0f, 0x1.8835bep-1f, 0x1.c7b91ap-110f, 0x1.869fbp-32f,
     0x1.1d828ap-111f, 0.0f, 0x1.885494p-104f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aa2f2p-89f, 0.0f, 0x1.65ebfcp-24f, 0x1.9c399p-55f,
     0.0f, 0.0f, 0x1.97e91cp-2f, 0x1.da9282p-117f, 0x1.589d84p-66f, 0x1.456acap-102f,
     0.0f, 0.0f, 0.0f, 0x1.dc4dcep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35f56ap-21f,
     0x1.3074dep-10f, 0x1.beac54p-124f, 0x1.c5df48p-59f, 0x1.4d1464p-70f,
     0x1.d3186cp-81f, 0.0f, 0.0f, 0x1.3d30f2p-118f, 0.0f, 0.0f, 0x1.e6d53ap-122f,
     0x1.52304p-18f, 0.0f, 0x1.eaf9e4p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b01b8ep-3f,
     0.0f, 0.0f, 0x1.7bb434p-99f, 0.0f, 0x1.16c00ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cca68cp-17f, 0.0f, 0.0f, 0x1.f86bd6p-104f, 0.0f, 0x1.e589p-42f, 0.0f, 0.0f,
     0.0f, 0x1.18eb1cp-116f, 0.0f, 0x1.717482p-102f, 0.0f, 0x1.1cd432p-104f,
     0x1.a0c066p-116f, 0x1.9155bap-75f, 0x1.a08decp-75f, 0x1.1c8498p-88f, 0.0f, 0.0f,
     0x1.7a6926p-14f, 0.0f, 0x1.2258a6p-72f, 0.0f, 0x1.2444dp-18f, 0.0f, 0.0f,
     0x1.58f26p-17f, 0x1.d40c3ap-29f, 0x1.848cecp-104f, 0x1.03062ep-96f,
     0x1.83e2p-14f, 0x1.738d74p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.561142p-113f,
     0x1.6db60ap-93f, 0.0f, 0x1.05be58p-48f, 0x1.923dfep-75f, 0x1.937926p-78f,
     0x1.4f2778p-116f, 0.0f, 0.0f, 0x1.5ad838p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c84c16p-16f, 0x1.c3bfa8p-91f, 0.0f, 0x1.0f9b3ep-99f, 0x1.2d3984p-116f,
     0.0f, 0x1.7edc72p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4196ep-49f,
     0x1.119384p-102f, 0x1.c8ae0ap-8f, 0.0f, 0.0f, 0x1.f60a0ap-112f, 0.0f,
     0x1.bafa1cp-10f, 0.0f, 0x1.bcd378p-53f, 0.0f, 0x1.e6687ap-24f, 0.0f,
     0x1.8e326cp-74f, 0.0f, 0x1.2aa986p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15e462p-56f, 0.0f, 0x1.d4d166p-74f, 0x1.1c701cp-82f, 0.0f, 0.0f,
     0x1.b1ab36p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.978f1cp-121f, 0x1.df3934p-50f, 0.0f, 0.0f, 0.0f, 0x1.550512p-10f,
     0.0f, 0x1.6b5c2ap-42f, 0.0f, 0x1.783ec4p-9f, 0.0f, 0x1.b17dfcp-5f, 0.0f, 0.0f,
     0.0f, 0x1.80b39cp-105f, 0x1.2e0ec6p-80f, 0.0f, 0x1.04e684p-7f, 0.0f,
     0x1.0887bcp-10f, 0x1.51bee8p-16f, 0x1.02e9cp-21f, 0.0f, 0.0f, 0x1.60b8fcp-15f,
     0x1.fc97a8p-80f, 0x1.e71ecap-82f, 0x1.431c76p-56f, 0x1.41a7dap-12f,
     0x1.eeddfep-80f, 0x1.7b41dcp-37f, 0.0f, 0x1.49143cp-82f, 0x1.62ed1ap-37f, 0.0f,
     0x1.a7c1dap-38f, 0x1.2e955ap-87f, 0x1.c453dep-121f, 0x1.d0c44cp-82f,
     0x1.8bfa34p-54f, 0x1.190326p-59f, 0x1.498d14p-60f, 0x1.49df38p-120f, 0.0f,
     0x1.b11bc6p-26f, 0.0f, 0x1.63dc18p-76f, 0.0f, 0.0f, 0x1.a3ce32p-29f, 0.0f,
     0x1.355604p-2f, 0.0f, 0x1.96c918p-97f, 0x1.4193fep-40f, 0.0f, 0.0f, 0.0f,
     0x1.36d93p-8f, 0x1.8012bap-103f, 0.0f, 0x1.3a6514p-49f, 0.0f, 0x1.bbd5fcp-71f,
     0x1.602e6ap-32f, 0x1.aaca5ap-80f, 0x1.e4a03p-107f, 0.0f, 0x1.e79006p-56f, 0.0f,
     0.0f, 0.0f, 0x1.bcfdaap-41f, 0.0f, 0.0f, 0x1.52556p-78f, 0x1.361754p-92f,
     0x1.ffc16p-60f, 0.0f, 0.0f, 0x1.0731d8p-38f, 0x1.4e2f7ap-88f, 0.0f, 0.0f, 0.0f,
     0x1.5830c4p-97f, 0x1.9397f4p-10f, 0x1.ffa1fap-42f, 0x1.6c9d84p-6f,
     0x1.d1d48ap-108f, 0.0f, 0.0f, 0x1.359cbap-31f, 0x1.bf2d54p-77f, 0x1.cc8808p-81f,
     0.0f, 0x1.3f9d5ap-94f, 0.0f, 0x1.7204b6p-126f, 0x1.beca6p-21f, 0x1.e00048p-54f,
     0x1.a39eccp-5f, 0.0f, 0.0f, 0x1.27e5fp-49f, 0.0f, 0x1.3395e4p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7b71cp-55f, 0.0f, 0x1.fcf4c2p-73f, 0.0f,
     0x1.4f8e96p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24b6aap-117f, 0x1.ca5434p-73f,
     0x1.30d5eep-10f, 0.0f, 0x1.5813p-56f, 0.0f, 0.0f, 0.0f, 0x1.51f6ap-75f, 0.0f,
     0.0f, 0x1.9811b2p-37f, 0.0f, 0x1.fbeeb2p-109f, 0.0f, 0x1.a00296p-81f,
     0x1.2afb2p-2f, 0x1.ac8306p-66f, 0x1.563d1ap-71f, 0x1.4223cap-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aca246p-80f, 0x1.87f532p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.78b984p-102f, 0x1.1d780ep-53f, 0x1.219224p-43f, 0.0f, 0.0f, 0.0f,
     0x1.8d108ep-110f, 0x1.2a443cp-82f, 0.0f, 0.0f, 0x1.f58fd2p-19f, 0.0f, 0.0f,
     0x1.9bc59ap-110f, 0x1.ac515ep-3f, 0.0f, 0x1.4f039ap-43f, 0x1.6e9bb8p-73f,
     0x1.30e4f8p-53f, 0x1.565134p-68f, 0.0f, 0x1p0f, 0x1.e5ba7ap-42f, 0x1.8a4df8p-49f,
     0.0f, 0.0f, 0.0f, 0x1.12bb28p-77f, 0.0f, 0x1.e7af82p-125f, 0x1.c94754p-66f, 0.0f,
     0x1.7b8038p-95f, 0x1.2450c2p-63f, 0.0f, 0.0f, 0x1.40ae8p-33f, 0.0f, 0.0f,
     0x1.1d5c66p-122f, 0x1.6a3d56p-121f, 0.0f, 0x1.b76968p-76f, 0x1.359924p-34f,
     0x1.7f9ab2p-83f, 0x1.c61d8p-20f, 0.0f, 0x1.ab6bacp-39f, 0x1.7aa152p-31f,
     0x1.6237c4p-125f, 0x1.a5fe86p-112f, 0x1.9ea0ecp-109f, 0x1.50c62cp-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed6f28p-76f, 0.0f, 0.0f, 0x1.3ec444p-125f,
     0x1.99ebf6p-2f, 0.0f, 0.0f, 0x1.ae3266p-68f, 0.0f, 0x1.491792p-48f,
     0x1.4a5252p-40f, 0x1.744284p-114f, 0.0f, 0x1.2ed452p-37f, 0x1.5256fap-122f, 0.0f,
     0.0f, 0.0f, 0x1.68d9ep-35f, 0.0f, 0x1.3111d8p-109f, 0x1.2b148cp-106f, 0.0f, 0.0f,
     0x1.9625e6p-19f, 0.0f, 0x1.482788p-14f, 0x1.a230ep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a4742p-109f, 0x1.684852p-24f, 0x1.615e1ep-96f, 0x1.522a3ep-106f,
     0x1.c7c3a4p-121f, 0x1.ebfc08p-116f, 0.0f, 0x1.8be07p-25f, 0x1.217888p-32f,
     0x1.9029a8p-33f, 0x1.d2437ep-5f, 0x1.ed091ap-61f, 0x1.6a6adcp-19f,
     0x1.d1dc3ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ee7fcp-81f, 0.0f,
     0x1.75acp-1f, 0.0f, 0x1.49495ep-110f, 0.0f, 0.0f, 0.0f, 0x1.2907dp-32f,
     0x1.ef184ep-113f, 0.0f, 0x1.28a8e2p-71f, 0x1.00eb0ep-22f, 0.0f, 0.0f,
     0x1.ad17a8p-114f, 0.0f, 0x1.fca126p-29f, 0.0f, 0x1.8238b2p-94f, 0.0f, 0.0f, 0.0f,
     0x1.722114p-78f, 0.0f, 0.0f, 0x1.b1e626p-29f, 0.0f, 0x1.22f3c8p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8c3882p-15f, 0.0f, 0x1.74a62ap-56f, 0x1.59e8d2p-113f,
     0x1.cad4a2p-92f, 0.0f, 0x1.89ba66p-78f, 0x1.310bp-45f, 0.0f, 0x1.7cc088p-42f,
     0x1.3f98eap-23f, 0.0f, 0.0f, 0x1.856b36p-44f, 0x1.496b42p-78f, 0.0f,
     0x1.5fd1fcp-56f, 0.0f, 0x1.d66188p-65f, 0.0f, 0.0f, 0x1.dc9412p-20f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.2b0014p-19f, 0.0f, 0x1.41b99cp-119f, 0x1.86ae08p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.345398p-58f, 0x1.3dd5c4p-101f, 0.0f, 0x1.37657cp-12f, 0.0f,
     0x1.8a1692p-117f, 0x1.2be1a2p-109f, 0.0f, 0.0f, 0x1.37ada2p-52f, 0x1.a71a8ap-86f,
     0x1.ec4562p-3f, 0x1.cf8f18p-83f, 0x1.ad5114p-33f, 0.0f, 0x1.44257ep-36f,
     0x1.e721eap-60f, 0x1.0cc966p-58f, 0x1.354c0cp-30f, 0.0f, 0.0f, 0x1.68b88cp-108f,
     0x1.9b188ep-112f, 0x1.dce8cep-85f, 0.0f, 0x1.a3653ep-62f, 0.0f, 0x1.e38c4ap-118f,
     0.0f, 0x1.e17df2p-35f, 0.0f, 0x1.14948ep-124f, 0x1.473274p-115f, 0x1.64342ep-39f,
     0x1.310ba2p-53f, 0.0f, 0x1.86916ep-67f, 0.0f, 0x1.fb9db8p-61f, 0x1.36d37p-77f,
     0x1.57077p-115f, 0x1.4b84dp-106f, 0x1.7ab3cap-39f, 0.0f, 0.0f, 0x1.5542fep-88f,
     0x1.2c03f6p-61f, 0x1.7952f8p-86f, 0x1.ebd336p-86f, 0x1.bc6f7cp-101f,
     0x1.dee06p-65f, 0.0f, 0.0f, 0.0f, 0x1.606326p-91f, 0x1.dff7f2p-55f,
     0x1.d1be4p-25f, 0.0f, 0.0f, 0x1.d256b2p-84f, 0.0f, 0.0f, 0x1.d1e6dep-48f,
     0x1.fb8b6cp-121f, 0.0f, 0.0f, 0.0f, 0x1.299f84p-63f, 0.0f, 0.0f, 0x1.5c0686p-80f,
     0.0f, 0x1.21845p-64f, 0x1.b61c16p-53f, 0x1.6abeeep-106f, 0x1.2aae16p-52f,
     0x1.838c5cp-109f, 0x1.d98d96p-6f, 0x1.706c14p-121f, 0x1.7284aep-115f, 0.0f, 0.0f,
     0x1.4115a4p-70f, 0x1.51970ap-68f, 0x1.7f59acp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76e436p-51f, 0x1.a379fcp-21f, 0.0f, 0x1.7ce0fap-88f, 0.0f, 0.0f, 0.0f,
     0x1.3be58ep-72f, 0.0f, 0.0f, 0.0f, 0x1.bbbf3cp-65f, 0x1.da9ab2p-53f, 0.0f, 0.0f,
     0x1.c34a6ap-101f, 0x1.adf66p-50f, 0x1.d8b7e8p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2717ecp-23f, 0x1.a0a068p-72f, 0x1.fc8038p-120f, 0.0f, 0.0f, 0.0f,
     0x1.936c04p-88f, 0x1.058f1cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ae7a4p-96f, 0.0f,
     0.0f, 0.0f, 0x1.065dcp-81f, 0x1.74df7p-68f, 0.0f, 0x1.49a24cp-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bea5a2p-5f, 0x1.ce219p-96f, 0x1.403a2ep-60f,
     0x1.420bcap-54f, 0x1.6eb8e6p-84f, 0x1.cdf7b2p-39f, 0.0f, 0x1.768858p-7f, 0.0f,
     0.0f, 0x1.4f3ff8p-31f, 0x1.a4bb06p-101f, 0.0f, 0x1.c731e4p-75f, 0.0f, 0.0f,
     0x1.f37906p-28f, 0.0f, 0x1.da8edap-20f, 0x1.833964p-101f, 0.0f, 0x1.99357ap-46f,
     0.0f, 0x1.852646p-79f, 0x1.e69a98p-6f, 0x1.c8e82cp-9f, 0.0f, 0.0f,
     0x1.66e52cp-110f, 0.0f, 0x1.485756p-84f, 0.0f, 0x1.8c341p-88f, 0.0f,
     0x1.e62866p-16f, 0.0f, 0x1.1d5eb8p-79f, 0.0f, 0.0f, 0.0f, 0x1.e68d0ap-107f,
     0x1.fb10ap-84f, 0x1.652908p-65f, 0.0f, 0x1.69c5bp-26f, 0x1.9ffa68p-52f,
     0x1.27b07ap-54f, 0.0f, 0.0f, 0x1.f55bd6p-119f, 0x1.45ed3cp-16f, 0x1.b6c14p-12f,
     0.0f, 0x1.6ab048p-18f, 0.0f, 0.0f, 0x1.45b95p-40f, 0x1.187716p-5f, 0.0f, 0.0f,
     0x1.e2d218p-116f, 0x1.9d0784p-22f, 0.0f, 0.0f, 0x1.89240ep-82f, 0x1.884fdep-52f,
     0x1.5543d8p-38f, 0.0f, 0.0f, 0.0f, 0x1.ad546cp-94f, 0.0f, 0.0f, 0x1.4068a8p-26f,
     0x1.7fc8ccp-59f, 0x1.2b8bb6p-13f, 0.0f, 0x1.a0dc4ap-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd5b9cp-126f, 0x1.a51b42p-23f, 0x1.a3dcap-117f, 0.0f, 0.0f, 0x1.c53caep-71f,
     0x1.09cfeep-93f, 0x1.5767f8p-1f, 0x1.0f04b8p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12281cp-82f, 0.0f, 0.0f, 0x1.e51186p-16f, 0.0f, 0.0f, 0x1.1aa582p-71f,
     0x1.f8d34ep-69f, 0x1.27071ap-12f, 0x1.d63b56p-82f, 0.0f, 0.0f, 0.0f,
     0x1.a6c2eap-3f, 0.0f, 0.0f, 0x1.281354p-101f, 0.0f, 0x1.81536ap-83f,
     0x1.a8ce28p-62f, 0x1.721bf2p-27f, 0.0f, 0x1.70ffe2p-17f, 0x1.25b808p-27f,
     0x1.ccda1cp-41f, 0x1.4f6a8ep-75f, 0x1.069cd2p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad1d58p-49f, 0x1.fe6abap-65f, 0x1.f0713ap-2f, 0.0f, 0x1.e8746ep-86f, 0.0f,
     0.0f, 0.0f, 0x1.845308p-43f, 0x1.6347f2p-3f, 0.0f, 0x1.6cd83p-72f,
     0x1.4bec9ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2bebep-89f, 0x1.ab02f8p-23f, 0.0f,
     0.0f, 0x1p0f, 0x1.b6c1c8p-69f, 0.0f, 0x1.57e438p-101f, 0x1.517eep-99f,
     0x1.d6808p-36f, 0x1.ff2ff2p-81f, 0x1.915638p-50f, 0.0f, 0.0f, 0x1.ff66b8p-52f,
     0x1.78eb86p-66f, 0.0f, 0x1.6adee6p-45f, 0x1.d2391p-23f, 0x1.2eef52p-87f, 0.0f,
     0x1.96114cp-14f, 0.0f, 0x1.87d67ep-50f, 0x1.c6c398p-63f, 0x1.db4106p-7f,
     0x1.a5ce46p-45f, 0x1.66131p-100f, 0.0f, 0x1.bde784p-20f, 0x1.b8824p-55f, 0.0f,
     0.0f, 0.0f, 0x1.0d19fep-17f, 0x1.d07ff4p-60f, 0x1.e67af6p-2f, 0x1.473032p-63f,
     0.0f, 0x1.67445p-107f, 0.0f, 0x1.3d4d58p-23f, 0.0f, 0.0f, 0x1.b8e59ep-108f, 0.0f,
     0x1.150214p-112f, 0.0f, 0x1.47f454p-68f, 0.0f, 0x1.6bcb6ep-120f, 0x1.a6fd3ep-29f,
     0.0f, 0x1.52bfe6p-30f, 0x1.2600f4p-115f, 0.0f, 0x1.4355d6p-80f, 0x1.8cddap-96f,
     0x1.c66056p-120f, 0x1.82a54cp-96f, 0x1.ccd112p-95f, 0x1.b342b8p-103f, 0.0f, 0.0f,
     0x1.b9c706p-17f, 0x1.f75538p-95f, 0.0f, 0x1.1fe4bap-115f, 0x1.fb681cp-78f, 0.0f,
     0x1.70eaecp-115f, 0.0f, 0x1.a5664cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09925ep-87f,
     0.0f, 0x1.9da5dap-81f, 0.0f, 0x1.d63b66p-16f, 0x1.9987dep-32f, 0x1.bddfa4p-58f,
     0.0f, 0x1.26f33p-115f, 0x1.ce4ed2p-87f, 0x1.8ed468p-18f, 0.0f, 0.0f,
     0x1.a763e2p-102f, 0x1.5c9ec6p-13f, 0.0f, 0.0f, 0.0f, 0x1.2baeeap-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0211c4p-102f, 0.0f, 0x1.62b25p-76f, 0x1.ea6db2p-92f, 0.0f, 0.0f,
     0x1.9ace3ap-43f, 0x1.92b97ep-51f, 0.0f, 0.0f, 0.0f, 0x1.f32dap-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3f1f6cp-4f, 0x1.109d52p-2f, 0x1.7b3efap-8f, 0.0f,
     0x1.9c841ep-42f, 0.0f, 0.0f, 0.0f, 0x1.362f14p-87f, 0x1.2bb988p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3b2d46p-113f, 0x1.54096cp-35f, 0x1.b325c2p-40f, 0x1.d6ee16p-99f,
     0x1.f2dd26p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ece85ap-106f,
     0x1.602672p-45f, 0x1.18d7cp-82f, 0.0f, 0x1.169956p-5f, 0x1.34c1acp-13f, 0.0f,
     0.0f, 0x1.e0cc84p-19f, 0x1.929f9p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c7628p-124f, 0.0f, 0.0f, 0x1.e6cc2ep-17f, 0x1.4f7c98p-109f, 0x1.e7b0d2p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebcb2ep-78f, 0.0f, 0.0f, 0x1.46d83p-35f,
     0x1.f33bf8p-6f, 0x1.5c215ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cbbap-108f,
     0.0f, 0.0f, 0x1.b1979ap-51f, 0.0f, 0x1.1c763ep-45f, 0.0f, 0x1.cdc15ap-45f, 0.0f,
     0.0f, 0x1.7de1bp-81f, 0x1.3be1ap-89f, 0x1.1da828p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4a3b2p-52f, 0x1.a37256p-123f, 0x1.d0ae4ep-22f, 0x1.32f6bcp-1f, 0.0f,
     0x1.b5799ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fd9fep-67f, 0x1.2c62dp-80f, 0.0f,
     0x1.60a968p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fffb4p-50f, 0.0f,
     0x1.7e9244p-67f, 0x1.e1a294p-108f, 0.0f, 0.0f, 0x1.7026p-45f, 0.0f,
     0x1.33fdd8p-16f, 0.0f, 0.0f, 0.0f, 0x1.2b6fp-115f, 0x1.366696p-96f,
     0x1.c4d28cp-17f, 0x1.488b84p-19f, 0.0f, 0.0f, 0x1.726258p-65f, 0x1.6c8668p-28f,
     0.0f, 0.0f, 0x1.59f45cp-117f, 0.0f, 0.0f, 0x1.c88f8p-44f, 0.0f, 0.0f, 0.0f,
     0x1.01b688p-4f, 0x1.a99278p-54f, 0x1.c27c64p-38f, 0x1.2a2494p-4f, 0.0f,
     0x1.2ff092p-71f, 0x1.f4164cp-109f, 0.0f, 0x1.4d46a2p-118f, 0x1.2bbd9ap-47f,
     0x1.ec45dep-70f, 0x1.27d54cp-66f, 0x1.14c97ep-43f, 0.0f, 0.0f, 0x1.305436p-82f,
     0.0f, 0.0f, 0.0f, 0x1.c76fdep-57f, 0.0f, 0x1.7ef79ep-99f, 0x1.4f0b9ap-125f,
     0x1.a95fcap-20f, 0.0f, 0x1.42935ap-118f, 0x1.9920eep-108f, 0x1.3382fcp-76f,
     0x1.816e5cp-47f, 0x1.6547fep-5f, 0x1.c94e74p-106f, 0.0f, 0x1.519c9ap-87f, 0.0f,
     0x1.3ba912p-6f, 0x1.43c07p-83f, 0.0f, 0x1.dc373p-46f, 0x1.bdc6ep-27f,
     0x1.4df204p-53f, 0.0f, 0.0f, 0x1.447c1ap-52f, 0.0f, 0.0f, 0x1.f8f556p-84f,
     0x1.e3a8f2p-64f, 0.0f, 0.0f, 0x1.d491fep-24f, 0.0f, 0x1.1fc7dap-26f, 0.0f,
     0x1.70f2dep-96f, 0x1.96f534p-14f, 0.0f, 0x1.81b184p-107f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25712ep-27f, 0.0f, 0x1.680caap-117f,
     0x1.c4f466p-79f, 0x1.2f3a4ap-88f, 0x1.d5173p-76f, 0.0f, 0.0f, 0x1.f1d72ap-113f,
     0.0f, 0.0f, 0x1.58541ap-119f, 0x1.d0af6p-58f, 0x1.0e6dc4p-104f, 0x1.f7c7fp-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d57eaap-24f, 0x1.b31512p-50f, 0.0f, 0.0f,
     0x1.a25d5ap-48f, 0.0f, 0.0f, 0.0f, 0x1.45b3ep-78f, 0.0f, 0.0f, 0x1.cbb0e8p-118f,
     0x1.7b5744p-122f, 0.0f, 0x1.e3ac2p-111f, 0.0f, 0.0f, 0x1.a7a628p-110f,
     0x1.e0acfep-21f, 0x1.cf41e8p-108f, 0x1.e60214p-67f, 0.0f, 0x1.9931e8p-54f,
     0x1.2063cep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e90d7ep-17f, 0.0f, 0x1.8f3d1ep-54f,
     0.0f, 0x1.91d69p-100f, 0x1.9eaadp-78f, 0x1.b04802p-87f, 0.0f, 0x1.c9e762p-85f,
     0.0f, 0.0f, 0x1.2c2d2cp-84f, 0.0f, 0.0f, 0x1.8f9ddcp-58f, 0x1.bced68p-42f,
     0x1.2e9062p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acca82p-125f, 0x1.a70b0ep-8f, 0.0f,
     0x1.5ed12ep-57f, 0.0f, 0.0f, 0.0f, 0x1.c5f16ap-95f, 0x1.48333p-102f, 0.0f,
     0x1.8408a4p-119f, 0x1.605dfap-91f, 0x1.346326p-72f, 0x1.22ac9ap-78f,
     0x1.5c6e34p-1f, 0.0f, 0x1.ce433p-117f, 0x1.817fe6p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8702a6p-71f, 0x1.610948p-112f, 0x1.af106cp-103f, 0.0f, 0x1.60fd28p-116f,
     0.0f, 0.0f, 0x1.84d85ap-58f, 0x1.858c06p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.062376p-100f, 0x1.3f7c36p-23f, 0.0f, 0.0f, 0x1.0c167ep-19f, 0x1.ce074ep-22f,
     0x1.1677c2p-8f, 0x1.15f3fap-77f, 0.0f, 0.0f, 0x1.8d07b2p-120f, 0x1.225ef2p-66f,
     0.0f, 0.0f, 0x1.5f40d8p-96f, 0.0f, 0.0f, 0x1.eec4cp-38f, 0.0f, 0.0f, 0.0f,
     0x1.a2dc1ap-124f, 0x1.a3d712p-41f, 0.0f, 0x1.0d4348p-85f, 0x1.9399ep-90f,
     0x1.20476p-25f, 0.0f, 0x1.4b3f82p-17f, 0x1.c0a652p-67f, 0.0f, 0x1.b57072p-35f,
     0.0f, 0x1.bb0022p-58f, 0x1.e9550cp-74f, 0.0f, 0x1.1f7ce4p-112f, 0x1.c3d31cp-17f,
     0.0f, 0x1.69e354p-123f, 0x1.734aa4p-68f, 0x1.b64412p-98f, 0.0f, 0.0f, 0.0f,
     0x1.8d5714p-75f, 0.0f, 0x1.c7b654p-125f, 0x1.7a4bb2p-3f, 0.0f, 0x1.cc5242p-88f,
     0x1.27285cp-106f, 0.0f, 0.0f, 0.0f, 0x1.c938f4p-3f, 0.0f, 0.0f, 0.0f,
     0x1.66d3d8p-32f, 0x1.254eecp-113f, 0.0f, 0x1.a893a4p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8eefbcp-33f, 0x1.c1ae06p-61f, 0x1.883dcp-32f, 0.0f, 0x1.5b75d4p-91f, 0.0f,
     0x1.1f5b24p-36f, 0x1.fb4a28p-40f, 0.0f, 0.0f, 0.0f, 0x1.68f306p-35f,
     0x1.5f69c4p-5f, 0x1.096d5ap-73f, 0.0f, 0x1.86dff6p-69f, 0.0f, 0.0f, 0.0f,
     0x1.09ab8cp-95f, 0.0f, 0x1.39ebdp-92f, 0x1.4535c6p-22f, 0.0f, 0x1.99169cp-68f,
     0.0f, 0.0f, 0.0f, 0x1.9758acp-45f, 0.0f, 0x1.1206b6p-101f, 0x1.351f76p-76f, 0.0f,
     0x1.da8f64p-81f, 0x1.721078p-110f, 0x1.4a7968p-36f, 0x1.ab5dccp-68f, 0.0f, 0.0f,
     0.0f, 0x1.ca596ep-5f, 0.0f, 0x1.25bc46p-24f, 0x1.2b065p-67f, 0x1.f70578p-121f,
     0x1.7dbb12p-114f, 0.0f, 0x1.205098p-79f, 0x1.a5e216p-4f, 0.0f, 0x1.24963p-57f,
     0x1.7539aep-39f, 0.0f, 0.0f, 0.0f, 0x1.7f8512p-71f, 0x1.23b864p-56f,
     0x1.71311cp-117f, 0x1.b356aap-77f, 0.0f, 0.0f, 0.0f, 0x1.a3724ep-81f, 0.0f,
     0x1.5aeb96p-87f, 0.0f, 0x1.1b18bcp-35f, 0.0f, 0x1.11cddcp-119f, 0x1.f2a208p-77f,
     0x1.c16ed6p-67f, 0x1.d6c2d6p-24f, 0.0f, 0x1.f24a2cp-94f, 0x1.549838p-111f,
     0x1.9064fap-49f, 0.0f, 0x1.593174p-64f, 0.0f, 0x1.28c8e6p-97f, 0x1.e6ccb6p-83f,
     0.0f, 0.0f, 0.0f, 0x1.946736p-50f, 0.0f, 0x1.b74f7ep-85f, 0x1.c04308p-7f, 0.0f,
     0.0f, 0x1.865a26p-38f, 0.0f, 0x1.5d1cacp-108f, 0x1.2cb6fcp-19f, 0.0f,
     0x1.76fd96p-117f, 0.0f, 0x1.99e7ep-115f, 0x1.01a376p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f4366p-61f, 0.0f, 0x1.73ee96p-87f, 0x1.8bce34p-26f, 0x1.e65644p-99f,
     0x1.a2f6d8p-125f, 0x1.aeda8cp-1f, 0x1.a3a24p-48f, 0.0f, 0.0f, 0.0f,
     0x1.ef21bcp-71f, 0x1.2fbb28p-8f, 0x1.e89bcap-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39de42p-103f, 0x1.685506p-92f, 0x1.ba1406p-57f, 0x1.4c76b6p-4f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.73ee0ap-61f, 0x1.7bcb6ep-93f, 0x1.ebdabcp-20f,
     0x1.591e5p-99f, 0.0f, 0x1.8a37fep-18f, 0.0f, 0x1.59bf4cp-111f, 0.0f, 0.0f,
     0x1.bdcac8p-38f, 0x1.a43cd8p-11f, 0.0f, 0.0f, 0x1.9d86f2p-3f, 0.0f, 0.0f, 0.0f,
     0x1.909d8cp-31f, 0.0f, 0x1.80000ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a73c4p-42f,
     0.0f, 0.0f, 0x1.544ebep-40f, 0.0f, 0x1.b4d05ap-47f, 0.0f, 0.0f, 0x1.6d3f3ap-11f,
     0.0f, 0.0f, 0.0f, 0x1.e7a38cp-36f, 0x1.169762p-105f, 0x1.200c2cp-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.74e462p-45f, 0.0f, 0.0f, 0.0f, 0x1.cb0bf8p-51f,
     0x1.74b10ap-43f, 0.0f, 0x1.0d1baep-4f, 0.0f, 0.0f, 0x1.a6d38p-29f, 0.0f,
     0x1.ca722p-34f, 0.0f, 0.0f, 0.0f, 0x1.91d874p-124f, 0x1.6611c4p-36f,
     0x1.befd64p-37f, 0.0f, 0x1.aa9276p-126f, 0x1.2623fcp-40f, 0.0f, 0x1.6ecc22p-51f,
     0.0f, 0.0f, 0.0f, 0x1.cd24bcp-75f, 0.0f, 0x1.ab0fd4p-125f, 0x1.4460f2p-116f,
     0x1.cc596p-6f, 0.0f, 0x1.4fa136p-17f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.4b780ep-52f,
     0x1.34e35p-66f, 0.0f, 0.0f, 0.0f, 0x1.da533cp-54f, 0.0f, 0x1.dc019p-123f, 0.0f,
     0.0f, 0x1.f79f3p-71f, 0.0f, 0.0f, 0.0f, 0x1.1411b4p-89f, 0x1.c6f504p-20f,
     0x1.7e2b3cp-31f, 0x1.379cc6p-74f, 0x1.a06d1cp-89f, 0x1.3b2c64p-7f, 0.0f, 0.0f,
     0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_finz_fdimf8_kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_fdimf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_fdimf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
