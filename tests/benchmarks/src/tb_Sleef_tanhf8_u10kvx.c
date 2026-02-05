/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf8_u10kvx.c --function Sleef_tanhf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.5e59fp-19f, 0x1.1c2e9p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4befep-107f, 0.0f,
     0.0f, 0.0f, 0x1.4f1506p-37f, 0x1.a7a6eap-5f, 0x1.a9dcd4p-81f, 0x1.90fd26p-126f,
     0x1.ab50aep-115f, 0x1.5fb2aep-123f, 0.0f, 0x1.7b535p-63f, 0.0f, 0x1.89df24p-69f,
     0x1.5b839ap-42f, 0x1.0c5ab4p-52f, 0.0f, 0x1.d3fce6p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.55375cp-41f, 0x1.6915eep-102f, 0.0f, 0.0f, 0.0f, 0x1.763c3ap-90f,
     0x1.29712cp-4f, 0x1.d0d632p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bef98p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f8db8p-24f, 0x1.8894ap-77f, 0x1.1d48e4p-69f,
     0x1.e5e38p-71f, 0.0f, 0.0f, 0x1.4802a6p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7251bp-31f, 0x1.00dfbep-69f, 0x1.ef48cp-51f, 0.0f, 0.0f, 0x1.5419f4p-72f,
     0x1.e92bd8p-53f, 0.0f, 0x1.371a7p-51f, 0x1.d67f78p-76f, 0.0f, 0.0f, 0.0f,
     0x1.a192ccp-44f, 0x1.7aff9ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20b3aap-34f,
     0x1.a964f4p-99f, 0.0f, 0x1.7bc75ep-81f, 0x1.5292eap-29f, 0.0f, 0.0f, 0.0f,
     0x1.e1b4dap-17f, 0x1.15d3ccp-72f, 0x1.40bc4p-1f, 0x1.d47532p-12f, 0.0f,
     0x1.4f2fbp-103f, 0x1.26aafap-37f, 0.0f, 0.0f, 0x1.e730a4p-58f, 0.0f,
     0x1.4aaaccp-19f, 0.0f, 0x1.017d96p-45f, 0.0f, 0.0f, 0x1.9dc0ap-74f,
     0x1.9a5aa6p-13f, 0x1.1256b4p-104f, 0x1.5f0fcap-11f, 0.0f, 0x1.f3a5d4p-26f, 0.0f,
     0x1.cbaa92p-40f, 0.0f, 0x1.ba213cp-40f, 0x1.54eb38p-84f, 0x1.343b48p-83f,
     0x1.d2f97cp-74f, 0.0f, 0x1.9e8f06p-105f, 0.0f, 0x1.631b62p-8f, 0x1.e09922p-87f,
     0x1.327fbp-20f, 0x1.e629e6p-75f, 0x1.8081d8p-93f, 0x1.cea55ep-116f,
     0x1.b507p-23f, 0.0f, 0x1.888714p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f42fp-29f, 0.0f, 0x1.9f841p-96f, 0x1.484a7ep-110f, 0.0f, 0x1.d471b8p-87f,
     0x1.35fd28p-1f, 0x1.1ade1p-17f, 0.0f, 0x1.b2ec3p-98f, 0x1.1c1748p-42f,
     0x1.8f1fbcp-79f, 0x1.4a549p-112f, 0x1.2f17bcp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa5bd8p-17f, 0.0f, 0.0f, 0x1.34e61cp-94f,
     0x1.e4734ap-54f, 0x1.46e068p-7f, 0x1.717946p-44f, 0x1.6c75b6p-93f,
     0x1.58c4a6p-55f, 0.0f, 0.0f, 0x1.75f208p-21f, 0x1.5fa17ap-110f, 0.0f,
     0x1.b6dd84p-86f, 0.0f, 0.0f, 0x1.ccb628p-4f, 0x1.28f962p-124f, 0x1.a3893ep-45f,
     0.0f, 0.0f, 0x1.f451c4p-76f, 0.0f, 0x1.099b76p-24f, 0.0f, 0.0f, 0.0f,
     0x1.44841ep-9f, 0.0f, 0x1.5f1a7ep-87f, 0.0f, 0x1.10f674p-113f, 0x1.0b05e2p-82f,
     0.0f, 0x1.7b37cp-89f, 0x1.935704p-40f, 0x1.238a5p-29f, 0.0f, 0x1.f908a2p-101f,
     0x1.b4af72p-102f, 0x1.b4e8c2p-62f, 0.0f, 0x1.f6263cp-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.17861p-114f, 0.0f, 0x1.e2871p-106f, 0.0f, 0.0f,
     0x1.9c3ec2p-85f, 0x1.b26af4p-119f, 0.0f, 0x1.90c25cp-83f, 0x1.19eaecp-105f,
     0x1.22956ep-67f, 0.0f, 0x1.c989b4p-108f, 0x1.f1fdf4p-112f, 0x1.8a1a9p-24f,
     0x1.1db186p-10f, 0x1.c4491ep-117f, 0.0f, 0.0f, 0x1.f1213cp-65f, 0x1.2c88c2p-105f,
     0x1.4b954cp-100f, 0.0f, 0x1.cdccb8p-41f, 0.0f, 0.0f, 0.0f, 0x1.90c9e8p-27f,
     0x1.669838p-22f, 0x1.76eafp-116f, 0.0f, 0x1.c1f0cp-92f, 0.0f, 0.0f,
     0x1.1edf46p-79f, 0.0f, 0x1.fb728p-111f, 0.0f, 0x1.d54d98p-98f, 0.0f,
     0x1.bcff62p-2f, 0.0f, 0.0f, 0x1.194f3p-17f, 0x1.d604f6p-75f, 0.0f, 0.0f,
     0x1.0c9cd2p-75f, 0x1.005212p-118f, 0x1.e76944p-64f, 0x1.e427d2p-11f, 0.0f,
     0x1.7dd948p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89f72p-114f, 0x1.43611p-42f,
     0x1.c2615cp-87f, 0.0f, 0.0f, 0x1.c85aaep-76f, 0.0f, 0x1.81dbf6p-70f, 0.0f,
     0x1.17cd44p-46f, 0x1.6feaacp-26f, 0x1.60b48ep-79f, 0x1.ff5604p-49f,
     0x1.079286p-68f, 0x1.6d0dc6p-49f, 0.0f, 0x1.c73d3ap-59f, 0.0f, 0.0f,
     0x1.3934a6p-64f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.6a9bdp-69f, 0.0f, 0.0f,
     0x1.0a0a1ep-54f, 0.0f, 0.0f, 0x1.0755eep-13f, 0x1.76604cp-21f, 0x1.05ebe6p-104f,
     0.0f, 0x1.97d202p-35f, 0.0f, 0.0f, 0x1.cb43a6p-105f, 0.0f, 0x1.d6397ap-56f, 0.0f,
     0x1.d399b8p-7f, 0.0f, 0x1.d010f2p-43f, 0x1.71df78p-49f, 0x1.bd4ee4p-12f,
     0x1.761ee4p-48f, 0.0f, 0.0f, 0x1.499de8p-8f, 0x1.ba923ap-66f, 0.0f, 0.0f,
     0x1.c6cecp-67f, 0.0f, 0x1.ab82aap-88f, 0x1.126484p-94f, 0.0f, 0.0f,
     0x1.4d7362p-68f, 0x1.7df2acp-115f, 0x1.ee15f2p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c784a8p-30f, 0.0f, 0x1.c812ap-122f, 0x1.cce9b4p-54f, 0.0f, 0.0f,
     0x1.a8b058p-43f, 0x1.fa1f42p-31f, 0x1.cb6e5ep-72f, 0.0f, 0.0f, 0x1.d0d274p-86f,
     0x1.c59cf6p-7f, 0x1.5e4a8ap-26f, 0.0f, 0x1.23aab4p-119f, 0x1.ddfc38p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d07eap-65f, 0.0f, 0x1.fb9c44p-30f, 0.0f,
     0x1.9042bcp-60f, 0.0f, 0x1.0efabep-71f, 0x1.deea32p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30234ep-61f, 0x1.25d05ap-58f, 0x1.e58232p-78f, 0.0f, 0x1.164296p-66f, 0.0f,
     0.0f, 0x1.e6c1dep-57f, 0x1.92b19ep-90f, 0.0f, 0x1.0a6776p-93f, 0x1.4e4ad6p-21f,
     0x1.60b526p-61f, 0x1.69e174p-117f, 0x1.22d4d4p-22f, 0.0f, 0x1.0bdffp-98f, 0.0f,
     0x1.4bb83ep-23f, 0x1.78cf44p-88f, 0.0f, 0x1.ad46bap-35f, 0x1.441354p-60f, 0.0f,
     0.0f, 0x1.035c7p-12f, 0.0f, 0.0f, 0x1.716aap-70f, 0.0f, 0.0f, 0.0f,
     0x1.5613aep-124f, 0.0f, 0x1.15ffbcp-6f, 0x1.473fa8p-51f, 0.0f, 0x1.4b4ef4p-97f,
     0x1.f5b194p-120f, 0.0f, 0x1.8feb56p-60f, 0x1.88ded4p-105f, 0.0f, 0x1.46ceb8p-68f,
     0x1.e054bep-25f, 0.0f, 0x1.ee9046p-111f, 0x1.81a344p-107f, 0.0f, 0.0f,
     0x1.1dc934p-84f, 0.0f, 0x1p0f, 0.0f, 0x1.875148p-47f, 0x1.225fb6p-93f, 0.0f,
     0.0f, 0x1.b1517cp-53f, 0x1.00caa8p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a06cp-111f,
     0.0f, 0x1.ab59b8p-119f, 0x1.a05e52p-82f, 0x1.ebc20ap-45f, 0.0f, 0.0f,
     0x1.eb2f56p-18f, 0.0f, 0x1.cb40f2p-23f, 0.0f, 0x1.a08a52p-115f, 0x1.8982f2p-111f,
     0x1.e3c8cp-92f, 0.0f, 0.0f, 0.0f, 0x1.5d932p-76f, 0.0f, 0x1.cfa1c2p-22f,
     0x1.b59cf6p-11f, 0.0f, 0x1.9127dcp-77f, 0.0f, 0x1.ded5b4p-64f, 0.0f,
     0x1.6d1afap-108f, 0.0f, 0.0f, 0x1.8459dep-10f, 0x1.5df83ap-49f, 0.0f, 0.0f,
     0x1.6498eep-31f, 0.0f, 0x1.5565a4p-85f, 0x1.d36d4cp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6c6a4p-49f, 0x1.cbe9f2p-97f, 0.0f, 0.0f,
     0x1.bbd51p-32f, 0.0f, 0x1.5e4c76p-52f, 0x1.b2306cp-115f, 0x1.dee8a8p-76f,
     0x1.e64378p-97f, 0.0f, 0x1.61af18p-36f, 0x1.6b9686p-94f, 0x1.7d287cp-124f, 0.0f,
     0x1.3c95fcp-102f, 0.0f, 0x1.186d84p-39f, 0x1.97fe88p-64f, 0.0f, 0x1.b294c8p-58f,
     0.0f, 0.0f, 0x1.229d6ep-120f, 0.0f, 0.0f, 0.0f, 0x1.755b5ap-9f, 0.0f,
     0x1.d9209cp-114f, 0x1.7f6a48p-97f, 0x1.41aae8p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acb2e8p-51f, 0x1.d209e2p-2f, 0x1.6992bep-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9aa5a4p-63f, 0.0f, 0x1.2f38d2p-81f, 0.0f, 0x1.3c1fe4p-117f, 0x1.a25648p-4f,
     0x1.bcfc2ap-122f, 0x1.97dc36p-59f, 0x1.7a563ap-125f, 0x1.bb631cp-102f,
     0x1.68376ep-113f, 0.0f, 0.0f, 0x1.1b129cp-71f, 0x1.2cdd1ep-59f, 0.0f, 0.0f,
     0x1.aab8f6p-26f, 0x1.32845p-29f, 0.0f, 0x1.17c7d8p-7f, 0x1.43d932p-30f,
     0x1.d3a07ap-126f, 0x1.179ecep-80f, 0.0f, 0.0f, 0.0f, 0x1.5b1d1p-66f, 0.0f,
     0x1.789c72p-55f, 0.0f, 0.0f, 0x1.d13d92p-119f, 0x1.813b28p-30f, 0x1.a2d58ap-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.811d6ep-111f, 0.0f, 0x1.c79bc4p-6f, 0x1.15a724p-8f,
     0x1.fe3706p-119f, 0.0f, 0.0f, 0.0f, 0x1.60571ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c5f9cp-34f, 0.0f, 0x1.6d68a4p-40f, 0.0f, 0x1.0b520ap-52f, 0x1.df847cp-94f,
     0x1.2fd4e6p-7f, 0.0f, 0x1.75b8a2p-89f, 0.0f, 0x1.e4822cp-77f, 0.0f, 0.0f,
     0x1.bfb032p-105f, 0.0f, 0.0f, 0x1.5f8802p-39f, 0x1.3e2778p-108f, 0x1.ba7accp-13f,
     0.0f, 0x1.5e674ap-24f, 0x1.c73a96p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e3fbdep-16f, 0.0f, 0x1.75eaeep-47f, 0.0f, 0.0f, 0.0f, 0x1.f19624p-57f,
     0x1.12d8d8p-87f, 0x1.402b88p-91f, 0x1.79542ap-32f, 0.0f, 0.0f, 0x1.5e9f54p-105f,
     0x1.6ddd8cp-1f, 0x1.f24d48p-48f, 0.0f, 0x1.36f2d8p-95f, 0x1.2103eep-120f,
     0x1.9e28bep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e17c6cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.314158p-90f, 0.0f, 0x1.a8daa8p-124f, 0x1.024e88p-16f, 0.0f, 0x1.da0fcep-66f,
     0x1.c4626p-126f, 0.0f, 0x1.1ec292p-6f, 0.0f, 0.0f, 0.0f, 0x1.48898ap-50f,
     0x1.5bb182p-49f, 0.0f, 0.0f, 0x1.3205fep-84f, 0x1.c65ba8p-38f, 0.0f, 0.0f, 0.0f,
     0x1.c5cf92p-114f, 0x1.ac840ep-33f, 0x1.a895f4p-119f, 0x1.118126p-121f, 0.0f,
     0x1.ddf656p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d2d76p-101f, 0.0f, 0x1.403522p-28f,
     0x1.16d18ep-36f, 0x1.4278c6p-70f, 0.0f, 0x1.c758fap-79f, 0x1.4818fp-111f,
     0x1.c8161p-16f, 0.0f, 0.0f, 0.0f, 0x1.1308fp-65f, 0.0f, 0.0f, 0x1.f4b92cp-126f,
     0x1.ed8174p-21f, 0x1.cb0cb2p-50f, 0x1.9ab1f6p-81f, 0.0f, 0.0f, 0.0f,
     0x1.976328p-30f, 0.0f, 0x1.84edaap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01d4bap-112f, 0.0f, 0x1.877c42p-54f, 0x1.52e74ap-116f, 0.0f, 0x1.243916p-97f,
     0x1.b4b7e4p-19f, 0.0f, 0.0f, 0x1.8bd57ap-88f, 0.0f, 0x1.439decp-40f,
     0x1.479208p-51f, 0x1.7a5b24p-25f, 0x1.59f78p-115f, 0.0f, 0x1.f9e054p-94f,
     0x1.d09328p-36f, 0x1.9d8f22p-89f, 0x1.81b346p-82f, 0x1.c500fp-3f,
     0x1.408b1ap-90f, 0.0f, 0x1.cd81fp-64f, 0x1.469436p-47f, 0.0f, 0x1.496beep-36f,
     0.0f, 0.0f, 0x1.9662b6p-40f, 0x1.2aa4acp-100f, 0.0f, 0.0f, 0x1.d97704p-68f,
     0x1.8fedd2p-23f, 0x1.315598p-79f, 0x1.0b5266p-20f, 0.0f, 0x1.152d82p-64f,
     0x1.db5072p-102f, 0.0f, 0.0f, 0.0f, 0x1.4e40fcp-92f, 0.0f, 0.0f, 0x1.922ae6p-23f,
     0.0f, 0.0f, 0x1.1d40b6p-110f, 0x1.17f5bep-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c13a74p-17f, 0.0f, 0x1.4efe4cp-15f, 0x1.20de06p-118f, 0.0f, 0.0f, 0.0f,
     0x1.250a68p-81f, 0.0f, 0x1.93bafap-65f, 0.0f, 0x1.d6a87cp-59f, 0x1.c2d216p-101f,
     0x1.4bfb44p-98f, 0.0f, 0.0f, 0x1.9d2c5ep-80f, 0x1.d75b3ap-63f, 0x1.45f5bp-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9e5cep-122f, 0.0f, 0.0f, 0x1.57e226p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c7d0cp-22f, 0.0f, 0.0f, 0x1.e33ae2p-107f, 0.0f,
     0x1.c1e742p-110f, 0x1.471e8ap-45f, 0x1.61d18cp-28f, 0.0f, 0x1.61d33ep-2f, 0.0f,
     0.0f, 0.0f, 0x1.d9024p-52f, 0.0f, 0.0f, 0.0f, 0x1.737d2ep-90f, 0x1.86843p-97f,
     0.0f, 0x1.d57aeap-90f, 0x1.8e13f4p-29f, 0x1.637da2p-124f, 0.0f, 0x1.e823aap-29f,
     0x1.b38a94p-56f, 0.0f, 0x1.f483e6p-46f, 0x1.82b576p-75f, 0x1.9ea826p-122f, 0.0f,
     0.0f, 0x1.6e1f38p-31f, 0.0f, 0.0f, 0x1.ccd9eep-14f, 0.0f, 0.0f, 0x1.004828p-19f,
     0x1.7f585cp-86f, 0.0f, 0x1.f2573p-48f, 0.0f, 0.0f, 0x1.c4b43ap-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94659cp-26f, 0.0f, 0.0f, 0x1.bc8ddep-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a01ad2p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.991d7ap-85f,
     0.0f, 0.0f, 0x1.382dfp-2f, 0.0f, 0x1.7d732ep-117f, 0.0f, 0x1.434432p-13f, 0.0f,
     0x1p0f, 0x1.73943p-98f, 0x1.66a584p-18f, 0.0f, 0x1.4ca7ep-44f, 0.0f,
     0x1.7bba12p-12f, 0x1p0f, 0x1.8020f8p-89f, 0.0f, 0x1.8607fp-51f, 0x1.06d5cp-76f,
     0.0f, 0.0f, 0.0f, 0x1.4d2056p-48f, 0.0f, 0.0f, 0x1.781402p-96f, 0x1.fb2762p-45f,
     0.0f, 0x1.ba4828p-9f, 0x1.2b1b72p-108f, 0.0f, 0x1.1ac5e2p-57f, 0x1.95f766p-69f,
     0x1.fe4aa4p-76f, 0.0f, 0.0f, 0x1.07973ap-125f, 0x1.e1a0c6p-1f, 0.0f,
     0x1.4ba49p-57f, 0x1.d06bfep-31f, 0.0f, 0.0f, 0x1.27a13p-123f, 0x1.0bfb9cp-66f,
     0.0f, 0.0f, 0.0f, 0x1.c87552p-76f, 0x1.5aa444p-29f, 0.0f, 0x1.68a49p-99f,
     0x1.89d2c4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e2da6p-63f, 0x1.b6d4ep-31f,
     0x1.af3ffap-88f, 0x1.74e1fp-108f, 0x1.cc4446p-90f, 0x1.c64cf4p-43f, 0.0f,
     0x1.36b80ap-102f, 0x1.5c861ap-126f, 0x1.c3d5fcp-125f, 0x1.5b8a1p-59f,
     0x1.da604p-87f, 0.0f, 0.0f, 0x1.35acdep-24f, 0.0f, 0x1.7ba786p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5cb704p-73f, 0.0f, 0.0f, 0x1.2ae68p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.747702p-10f, 0.0f, 0x1.6ae53cp-47f, 0.0f, 0.0f, 0x1.8faa2p-100f,
     0x1.7c2666p-94f, 0x1.12169ep-12f, 0x1.844c58p-110f, 0.0f, 0x1.ba9172p-83f, 0.0f,
     0.0f, 0.0f, 0x1.65a268p-97f, 0x1.7b91f6p-8f, 0x1.f8137ap-114f, 0x1.79ccp-72f,
     0.0f, 0.0f, 0x1.404664p-115f, 0.0f, 0x1.9c7f32p-117f, 0.0f, 0.0f, 0.0f,
     0x1.6dd9eep-65f, 0.0f, 0x1.761014p-74f, 0.0f, 0.0f, 0x1.0aa02ep-52f,
     0x1.02aba6p-101f, 0.0f, 0.0f, 0.0f, 0x1.a29d64p-54f, 0.0f, 0x1.c347dep-12f,
     0x1.0183eap-73f, 0.0f, 0.0f, 0x1.748346p-20f, 0x1.16a5dep-10f, 0.0f, 0.0f,
     0x1.ec0f24p-106f, 0x1.0840eap-106f, 0x1.36e398p-105f, 0x1.254076p-103f, 0.0f,
     0.0f, 0x1.b3fc5p-47f, 0x1.3f7f6ap-62f, 0.0f, 0x1.eefc44p-20f, 0.0f,
     0x1.000a22p-80f, 0x1.cf6f1ep-38f, 0.0f, 0.0f, 0x1.97862ep-125f, 0x1.8d72f8p-74f,
     0x1.14145cp-88f, 0.0f, 0.0f, 0x1.cded5ap-61f, 0x1.7519a2p-106f, 0.0f, 0.0f, 0.0f,
     0x1.8afc68p-3f, 0.0f, 0x1.5de38ap-105f, 0x1.9543p-112f, 0.0f, 0.0f,
     0x1.6b0cep-40f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_tanhf8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
            i = tmp3;
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
    printf("Sleef_tanhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_tanhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
