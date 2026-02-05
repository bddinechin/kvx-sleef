/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf4_u10kvx.c --function Sleef_logf4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.4aa606p-93f, 0.0f, 0x1.949408p-15f, 0x1.33ae22p-117f, 0x1.a4d8a6p-21f,
     0.0f, 0x1.51b71ap-63f, 0.0f, 0.0f, 0.0f, 0x1.e619a8p-27f, 0x1.ae217cp-7f, 0.0f,
     0.0f, 0x1.bf80b6p-57f, 0x1.bfa18cp-55f, 0x1.ca8efap-30f, 0x1.664292p-121f,
     0x1.f6d368p-40f, 0x1.ae8324p-92f, 0.0f, 0x1.0f459ep-125f, 0.0f, 0.0f,
     0x1.677bfap-89f, 0x1.321c3ap-47f, 0x1.f75038p-80f, 0x1.87f078p-124f,
     0x1.cf6922p-113f, 0.0f, 0.0f, 0.0f, 0x1.260396p-49f, 0x1.dfefe6p-18f,
     0x1.3c1f52p-29f, 0.0f, 0x1.125c88p-9f, 0.0f, 0x1.d44eaep-40f, 0x1.cc3ffap-55f,
     0x1.3d8a76p-11f, 0.0f, 0.0f, 0x1.9e4248p-100f, 0x1.57ff56p-67f, 0x1.3cb85ap-54f,
     0.0f, 0.0f, 0.0f, 0x1.cabfe2p-14f, 0.0f, 0x1.0945ccp-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b65dc2p-46f, 0x1.9185a8p-126f, 0.0f, 0.0f, 0.0f,
     0x1.12ed06p-47f, 0x1.bd57e2p-85f, 0x1.f3ad7ap-69f, 0.0f, 0.0f, 0x1.4a4c84p-15f,
     0.0f, 0.0f, 0.0f, 0x1.51b2f2p-106f, 0x1.f6a18ep-93f, 0x1.f1be0ap-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.285eccp-125f, 0.0f, 0.0f, 0x1.8bf79cp-50f, 0x1.9d0d6cp-95f,
     0x1.c27efep-18f, 0x1.397d5ap-122f, 0x1.be5c9cp-100f, 0x1.21f4fep-22f, 0.0f,
     0x1.b49c5cp-90f, 0x1.9fe53cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c77cc2p-60f, 0.0f,
     0x1.977892p-10f, 0x1.49506ep-28f, 0.0f, 0x1.f035a2p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2221a2p-67f, 0.0f, 0x1.d149b2p-108f, 0.0f, 0.0f, 0.0f, 0x1.170452p-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.848a4ap-81f, 0x1.0c1426p-96f, 0.0f, 0x1.4201fcp-16f,
     0.0f, 0.0f, 0.0f, 0x1.9c6756p-28f, 0.0f, 0.0f, 0x1.8ee52cp-101f, 0x1.8d541ap-75f,
     0.0f, 0.0f, 0x1.f6af74p-116f, 0x1.d8e668p-2f, 0x1.62d2d6p-103f, 0.0f,
     0x1.7f64a6p-2f, 0.0f, 0.0f, 0x1.a9b912p-46f, 0.0f, 0.0f, 0x1.de5ddp-64f,
     0x1.e9fa5cp-35f, 0.0f, 0x1.aff9a2p-126f, 0.0f, 0x1.4de728p-54f, 0.0f, 0.0f, 0.0f,
     0x1.38f07ap-124f, 0.0f, 0.0f, 0.0f, 0x1.ac8626p-35f, 0x1.9f8a3ep-94f, 0.0f,
     0x1.b89172p-75f, 0x1.9640acp-79f, 0.0f, 0.0f, 0x1.db0308p-16f, 0x1.55a31ep-2f,
     0x1.589976p-5f, 0.0f, 0.0f, 0x1.c7a192p-69f, 0x1.ddb8cap-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42228ep-109f, 0x1.bb4a28p-54f, 0x1.f2874ap-7f, 0x1.b18ea8p-68f,
     0x1.f46a2ep-99f, 0x1.7f73eep-43f, 0x1.b5ce98p-51f, 0x1.f586c6p-14f,
     0x1.6d7624p-63f, 0x1.ee15p-5f, 0x1.f8ed78p-21f, 0.0f, 0x1.87dbeap-95f,
     0x1.827dbap-115f, 0x1.b7bcb4p-25f, 0x1.f2b122p-51f, 0.0f, 0x1.126478p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1a31d8p-124f, 0.0f, 0.0f, 0.0f, 0x1.28916ep-71f, 0.0f,
     0.0f, 0.0f, 0x1.3ab09p-48f, 0.0f, 0.0f, 0x1.4f41cp-1f, 0x1.7caf24p-47f, 0.0f,
     0x1.9b61aap-48f, 0.0f, 0x1.e5b152p-31f, 0x1.5ef9fep-120f, 0.0f, 0x1.16b89ap-113f,
     0x1.9173cep-115f, 0.0f, 0x1.a37672p-32f, 0x1.9651bcp-62f, 0x1.70c062p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f327ap-35f, 0x1.093b3cp-76f, 0.0f, 0.0f,
     0x1.179066p-14f, 0.0f, 0x1.b917fep-40f, 0x1.f272d6p-93f, 0.0f, 0.0f, 0.0f,
     0x1.4ee7ap-95f, 0.0f, 0x1.847996p-8f, 0.0f, 0.0f, 0.0f, 0x1.67a546p-45f,
     0x1.c40508p-2f, 0.0f, 0x1.414992p-4f, 0x1.997cbcp-68f, 0.0f, 0x1.d417dep-5f,
     0.0f, 0x1.2e869cp-49f, 0.0f, 0x1.f21266p-12f, 0x1.99c12cp-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9277aap-32f, 0.0f, 0x1.1e8998p-46f, 0.0f, 0.0f, 0x1.0e282ap-109f,
     0x1.262cccp-18f, 0.0f, 0x1.0ece08p-53f, 0x1.ead1eep-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dcf7p-84f, 0.0f,
     0x1.0ffdf2p-84f, 0x1.e3bffp-13f, 0x1.657a72p-100f, 0.0f, 0x1.603018p-29f,
     0x1.ca446p-24f, 0x1.d798c4p-88f, 0.0f, 0.0f, 0x1.ba3502p-41f, 0.0f,
     0x1.e80ee2p-44f, 0.0f, 0.0f, 0.0f, 0x1.e36d4ap-109f, 0x1.e7dda4p-102f, 0.0f,
     0.0f, 0x1.220e2p-114f, 0x1.27ffcep-24f, 0.0f, 0x1.b7097p-13f, 0x1.c0758cp-121f,
     0x1.a9dd6ap-82f, 0.0f, 0x1.0f7928p-10f, 0x1.6804eap-76f, 0.0f, 0.0f,
     0x1.0904f2p-121f, 0.0f, 0.0f, 0.0f, 0x1.2ab0f2p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3521cp-61f, 0x1.ad640cp-14f, 0x1.fef526p-13f,
     0x1.62fcb4p-73f, 0.0f, 0x1.20c886p-36f, 0.0f, 0x1.f9cd72p-19f, 0x1.3a4756p-100f,
     0x1.a21d76p-105f, 0.0f, 0x1.2b8a4cp-34f, 0.0f, 0x1.b3263ap-112f,
     0x1.5a7982p-122f, 0x1.78c8b2p-9f, 0x1.48807ap-75f, 0.0f, 0.0f, 0x1.e64738p-121f,
     0x1.c47bd8p-85f, 0.0f, 0.0f, 0x1.212ae6p-36f, 0x1.30dee4p-11f, 0x1.479b04p-109f,
     0.0f, 0.0f, 0x1.90db74p-91f, 0x1.e23f06p-5f, 0.0f, 0.0f, 0.0f, 0x1.16b8c4p-60f,
     0x1.d54a9cp-80f, 0.0f, 0.0f, 0.0f, 0x1.7214c2p-105f, 0.0f, 0x1.37bc58p-49f, 0.0f,
     0.0f, 0.0f, 0x1.7510fp-126f, 0.0f, 0.0f, 0x1.25e874p-39f, 0x1.14bb0cp-11f,
     0x1.7b0828p-16f, 0.0f, 0x1.58dbcap-32f, 0x1.4ca74ep-84f, 0x1.65cfcp-114f,
     0x1.4dae94p-106f, 0x1.e3efa2p-36f, 0.0f, 0x1.685486p-113f, 0x1.8db8b4p-25f, 0.0f,
     0.0f, 0.0f, 0x1.5c0a5p-32f, 0.0f, 0x1.1e1e46p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.45b1a4p-40f, 0x1.d26c6ep-77f, 0x1.d46e9cp-119f,
     0x1.709b8cp-31f, 0x1.284b62p-120f, 0x1.eb6cdap-79f, 0.0f, 0x1p0f, 0.0f,
     0x1.c21e4p-34f, 0x1.c86464p-84f, 0x1.6a2404p-98f, 0x1.d66a54p-108f, 0.0f,
     0x1.af0124p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f91cep-124f, 0.0f, 0x1.9c7544p-99f,
     0.0f, 0x1.288eecp-21f, 0.0f, 0x1.15f194p-116f, 0.0f, 0x1.7a664ep-107f, 0.0f,
     0x1.7686eap-47f, 0.0f, 0.0f, 0.0f, 0x1.86c714p-23f, 0.0f, 0x1.c83d14p-28f,
     0x1.80057ep-55f, 0.0f, 0.0f, 0.0f, 0x1.edea7p-71f, 0x1.952a9ap-69f, 0.0f,
     0x1.54a1f6p-62f, 0.0f, 0.0f, 0x1.370fd2p-70f, 0.0f, 0x1.61dcacp-111f,
     0x1.fc69f4p-44f, 0.0f, 0.0f, 0x1.bfa766p-43f, 0.0f, 0.0f, 0x1.c8baf4p-8f,
     0x1.db5254p-3f, 0x1.0a5eb2p-114f, 0x1.354058p-33f, 0x1.7e1318p-104f, 0.0f,
     0x1p0f, 0x1.a8297p-95f, 0.0f, 0.0f, 0x1.3a698p-117f, 0.0f, 0.0f, 0x1.8165eep-44f,
     0x1.c334c2p-112f, 0x1.80c302p-118f, 0.0f, 0x1.e474bap-43f, 0x1.588dfap-121f,
     0x1.bfe314p-73f, 0x1.b3fbe6p-3f, 0x1.0b925p-63f, 0.0f, 0.0f, 0x1.51096ep-60f,
     0.0f, 0.0f, 0.0f, 0x1.e9e684p-99f, 0.0f, 0x1.fdd506p-64f, 0x1.f955d8p-23f,
     0x1.a2acbap-22f, 0x1.811e64p-10f, 0.0f, 0.0f, 0.0f, 0x1.03a764p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86f968p-38f, 0.0f, 0.0f, 0.0f,
     0x1.5dae1ap-28f, 0x1.4ace3ep-104f, 0x1.ce75f2p-60f, 0x1.da3776p-10f, 0.0f,
     0x1.fb478p-112f, 0.0f, 0x1.c37958p-47f, 0x1.8d3272p-64f, 0x1.eb42bcp-126f,
     0x1.ba617p-2f, 0x1.55385ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03f5bcp-49f, 0.0f, 0.0f, 0x1.d28552p-1f, 0.0f, 0.0f, 0x1.27f86ep-6f, 0.0f,
     0.0f, 0x1.198692p-15f, 0.0f, 0x1p0f, 0.0f, 0x1.4b4a42p-9f, 0.0f, 0x1.09029cp-26f,
     0.0f, 0x1.ad955ep-10f, 0.0f, 0.0f, 0x1.9cd4dep-46f, 0.0f, 0.0f, 0x1.01f7f2p-46f,
     0.0f, 0x1.45e1cap-85f, 0.0f, 0x1.1946c2p-100f, 0.0f, 0x1.020746p-45f,
     0x1.5ed37cp-40f, 0.0f, 0.0f, 0x1.0bbc96p-97f, 0.0f, 0.0f, 0.0f, 0x1.d6ff42p-35f,
     0x1.3064bcp-102f, 0.0f, 0x1.f53f68p-102f, 0.0f, 0.0f, 0x1.014a6ap-28f, 0.0f,
     0x1.39c338p-21f, 0x1.80f86ep-104f, 0.0f, 0.0f, 0.0f, 0x1.8ed7d8p-123f, 0.0f,
     0.0f, 0x1.176234p-83f, 0.0f, 0.0f, 0.0f, 0x1.430192p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.715b3cp-12f, 0x1.71c82ap-22f, 0x1.cf812cp-11f, 0x1p0f,
     0x1.c40846p-27f, 0x1.96c954p-29f, 0x1.c855f8p-103f, 0.0f, 0.0f, 0.0f,
     0x1.421a4cp-107f, 0x1.d9082ep-112f, 0.0f, 0x1.1c5adep-32f, 0.0f, 0.0f, 0.0f,
     0x1.353d58p-92f, 0.0f, 0.0f, 0.0f, 0x1.3dbda4p-5f, 0x1.bd614cp-55f,
     0x1.f2e9d2p-83f, 0x1.872c42p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab9a3ep-15f,
     0x1.b604d4p-39f, 0x1.410458p-107f, 0.0f, 0.0f, 0.0f, 0x1.0b4a9p-32f,
     0x1.eb595ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95142p-10f, 0x1.7ea608p-25f,
     0x1.a61b46p-58f, 0.0f, 0x1.07e1fap-72f, 0.0f, 0x1.b83cc4p-48f, 0x1.6ff7e2p-109f,
     0x1.2d9a5p-114f, 0x1.aee53cp-117f, 0.0f, 0x1.02879ep-16f, 0.0f, 0x1.f0d8ecp-119f,
     0x1.873d44p-74f, 0.0f, 0x1.3006b6p-97f, 0x1.b48b48p-36f, 0x1.a6f28p-18f,
     0x1.e69d42p-42f, 0.0f, 0x1.df270cp-23f, 0x1.972904p-9f, 0x1.a1babcp-5f, 0.0f,
     0.0f, 0x1.3818bp-83f, 0.0f, 0x1.396f84p-93f, 0x1.e25dcap-45f, 0.0f, 0.0f,
     0x1.767ebap-92f, 0x1.95f31ap-116f, 0x1.18b512p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c110d2p-52f, 0x1.e8d244p-1f, 0.0f, 0x1.fc2162p-80f, 0.0f, 0.0f,
     0x1.261dc4p-57f, 0.0f, 0x1.878358p-102f, 0x1.43b1dcp-19f, 0x1.9eab08p-6f,
     0x1.fe3544p-12f, 0x1.8389p-1f, 0.0f, 0.0f, 0x1.dcd7c8p-65f, 0.0f, 0.0f, 0.0f,
     0x1.b2616cp-121f, 0.0f, 0.0f, 0.0f, 0x1.c1307ap-92f, 0x1.5a2b64p-120f,
     0x1.826e16p-32f, 0.0f, 0x1.cb35b6p-38f, 0.0f, 0x1.6e9a94p-80f, 0x1.8981eap-100f,
     0x1.0f6102p-126f, 0x1.5a45f4p-85f, 0x1.269f1cp-49f, 0.0f, 0x1.92ac7p-37f, 0.0f,
     0x1.0ea48p-45f, 0x1.cb9c76p-99f, 0.0f, 0x1.8710ap-2f, 0.0f, 0.0f,
     0x1.803cd6p-95f, 0.0f, 0x1.c85528p-19f, 0x1.ea438ap-83f, 0x1.c09906p-107f, 0.0f,
     0x1.1c1514p-70f, 0x1.5709cap-32f, 0.0f, 0.0f, 0x1.bc63acp-110f, 0x1.fb9e9p-56f,
     0x1.1f1e0ep-125f, 0.0f, 0x1.2770e8p-22f, 0.0f, 0.0f, 0x1.7d5eaap-39f, 0.0f,
     0x1.c7566ap-55f, 0x1.3819fp-102f, 0.0f, 0x1.bc1e06p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a2c3a8p-24f, 0x1.898f2ep-94f, 0.0f, 0x1.02ad22p-115f, 0.0f,
     0x1.4fd6aap-44f, 0x1.9367b6p-18f, 0.0f, 0.0f, 0x1.e430f2p-11f, 0.0f,
     0x1.046b32p-97f, 0x1.4d93b2p-96f, 0x1.d80c2cp-44f, 0.0f, 0x1.cb6b0ep-62f,
     0x1.75a87ap-123f, 0.0f, 0.0f, 0x1.ab2422p-111f, 0x1.0ccbdap-48f, 0x1.5c9a8ap-17f,
     0.0f, 0.0f, 0x1.b41c1cp-117f, 0x1.d08ff2p-115f, 0.0f, 0.0f, 0x1.8eb8f4p-38f,
     0x1.053adep-110f, 0x1.82d0bep-39f, 0.0f, 0.0f, 0x1.00095cp-100f,
     0x1.c424d8p-117f, 0.0f, 0x1.881f42p-6f, 0.0f, 0.0f, 0x1.ab255ep-37f,
     0x1.44428cp-68f, 0.0f, 0x1.c2f4bp-105f, 0x1.fd19cep-17f, 0x1.335fbap-44f,
     0x1.a04972p-59f, 0.0f, 0x1.e6622cp-62f, 0.0f, 0.0f, 0.0f, 0x1.66aa6ap-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5779ap-53f, 0x1.070f46p-115f, 0x1.22dee4p-122f,
     0x1.dffe9ep-122f, 0x1.572b98p-64f, 0x1.467a92p-56f, 0.0f, 0.0f, 0.0f,
     0x1.84051ap-98f, 0x1.6ce3e6p-62f, 0.0f, 0x1.ae6c42p-13f, 0x1.81e42ep-104f, 0.0f,
     0.0f, 0.0f, 0x1.c2e3a2p-19f, 0.0f, 0x1.23f7b8p-80f, 0x1.38147p-12f,
     0x1.c1aadap-104f, 0x1.dc3ccp-48f, 0.0f, 0x1.7b04ap-41f, 0x1.6a48a4p-28f,
     0x1.e10988p-111f, 0.0f, 0.0f, 0x1.33b4d8p-94f, 0.0f, 0.0f, 0x1.253742p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5f76eep-123f, 0x1.a4608p-77f, 0.0f, 0x1.09a032p-121f,
     0x1.6afbcap-22f, 0.0f, 0.0f, 0.0f, 0x1.311afcp-24f, 0x1.3b5244p-98f,
     0x1.e0c648p-86f, 0x1.5104aap-85f, 0x1.801a6ap-123f, 0.0f, 0.0f, 0x1.c98fa2p-105f,
     0x1.2aa1eap-75f, 0.0f, 0x1.3b7bacp-50f, 0x1.92d71ep-120f, 0x1.be0428p-39f, 0.0f,
     0.0f, 0x1.07373p-64f, 0x1.f79e2ap-32f, 0.0f, 0x1.f7cbep-36f, 0.0f, 0.0f,
     0x1.fe4808p-58f, 0x1.c87402p-69f, 0.0f, 0.0f, 0.0f, 0x1.2afa8ep-23f, 0.0f, 0.0f,
     0x1.2359a4p-67f, 0x1.ea8a74p-54f, 0x1.2dd9bep-65f, 0x1.eaeb5ap-111f,
     0x1.819e66p-64f, 0x1.8d7d4ep-68f, 0x1.1ac11ap-30f, 0.0f, 0.0f, 0x1.1b1cc4p-105f,
     0.0f, 0.0f, 0.0f, 0x1.de0e74p-119f, 0.0f, 0x1.577acep-60f, 0x1.565b4cp-115f,
     0x1.72390cp-110f, 0.0f, 0.0f, 0.0f, 0x1.168bd4p-110f, 0.0f, 0.0f, 0.0f,
     0x1.2e7942p-3f, 0x1.6904f6p-115f, 0x1.c8d342p-66f, 0.0f, 0x1.ee3102p-5f,
     0x1.ef362ep-23f, 0.0f, 0.0f, 0x1.5bb88ap-121f, 0x1.15e6eep-77f, 0x1.738aeap-1f,
     0x1.58584ap-34f, 0.0f, 0x1.3039a6p-30f, 0x1.82a9d6p-122f, 0.0f, 0.0f, 0.0f,
     0x1.3a30cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368f8cp-123f, 0x1.d462p-1f,
     0x1.7d362cp-34f, 0x1.5cea76p-36f, 0x1.b5ed7cp-65f, 0.0f, 0x1.5056a4p-6f, 0.0f,
     0x1.ddcfd2p-42f, 0.0f, 0x1.f31bc6p-6f, 0x1.d36788p-5f, 0x1.cf70eep-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c1a5fp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.671748p-43f, 0.0f,
     0.0f, 0x1.4ea276p-24f, 0x1.269ec8p-66f, 0.0f, 0x1.1c8488p-75f, 0x1.4bd83ap-25f,
     0.0f, 0x1.118008p-88f, 0x1.78dd54p-43f, 0x1.56b5dep-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d1bbf6p-22f, 0.0f, 0x1.da815p-7f, 0x1.f09504p-85f, 0x1.f0473ap-109f,
     0.0f, 0x1.937134p-126f, 0x1.aa192ap-1f, 0.0f, 0x1.6f34bp-108f, 0x1.d74aep-107f,
     0.0f, 0.0f, 0x1.f9f3bap-47f, 0.0f, 0x1.d4f996p-17f, 0.0f, 0x1.22bd72p-49f, 0.0f,
     0.0f, 0x1.6b3e1cp-34f, 0.0f, 0x1.c5f426p-73f, 0x1.17d42cp-37f, 0x1.9250e6p-115f,
     0.0f, 0.0f, 0x1.a03284p-53f, 0.0f, 0x1.bba7bep-1f, 0x1.f505f2p-96f, 0.0f,
     0x1.3d1cfep-126f, 0.0f, 0x1.fb741ep-125f, 0x1.462352p-90f, 0.0f, 0.0f, 0.0f,
     0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_logf4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_logf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_logf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
