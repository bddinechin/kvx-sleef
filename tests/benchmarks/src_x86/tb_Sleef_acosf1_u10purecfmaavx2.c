/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf1_u10purecfma.c --function \
 *     Sleef_acosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.a8efaep-26f, 0x1.ec2294p-118f, 0.0f, 0.0f, 0x1.2a4562p-79f,
     0x1.8830ap-23f, 0x1.6498p-26f, 0.0f, 0.0f, 0x1.0911dcp-52f, 0x1.809102p-67f,
     0x1.4e325ap-98f, 0x1.97b1f8p-50f, 0x1.7fed5cp-100f, 0x1.d1633ep-102f,
     0x1.c02526p-81f, 0x1.a1677ep-82f, 0x1.ab1718p-10f, 0x1.00aff4p-71f,
     0x1.18dd26p-110f, 0x1.a9b8e8p-112f, 0x1.17c8ecp-78f, 0.0f, 0x1.d9acfcp-41f,
     0x1.74b84cp-40f, 0x1.47f39ep-2f, 0x1.195d9ep-22f, 0.0f, 0x1.ae3d9ap-22f, 0.0f,
     0.0f, 0x1.35199ep-82f, 0x1.fa15e8p-80f, 0x1.613072p-117f, 0.0f, 0x1.7d8b24p-12f,
     0x1.7dcacp-4f, 0.0f, 0.0f, 0x1.0327ccp-39f, 0.0f, 0x1.271d24p-27f, 0.0f,
     0x1.b045aep-115f, 0.0f, 0x1.498696p-65f, 0x1p0f, 0x1.c0857ep-45f,
     0x1.ba291ap-84f, 0x1.aa2b82p-3f, 0.0f, 0x1.42af52p-19f, 0.0f, 0.0f,
     0x1.1c978ep-120f, 0x1.71dcacp-28f, 0x1.f8ae5ap-124f, 0x1.faf964p-85f,
     0x1.691b32p-59f, 0x1.2bdf96p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d68914p-106f,
     0.0f, 0x1.1a8fecp-8f, 0x1.595d3p-59f, 0x1.5ba282p-82f, 0x1.8969aep-65f,
     0x1.c61288p-29f, 0.0f, 0.0f, 0.0f, 0x1.ab0ae8p-70f, 0x1.100ae6p-1f,
     0x1.3af9b8p-24f, 0x1.b7d7eap-75f, 0x1.9f6e44p-4f, 0x1.9d8098p-103f, 0.0f, 0.0f,
     0.0f, 0x1.542ebap-30f, 0x1.cfad3cp-118f, 0.0f, 0x1.fc9f56p-41f, 0.0f,
     0x1.e287cap-110f, 0x1.59d06cp-109f, 0x1.d394fcp-39f, 0.0f, 0.0f, 0x1.531bacp-28f,
     0.0f, 0.0f, 0.0f, 0x1.88e66cp-75f, 0.0f, 0.0f, 0x1.7f04cap-75f, 0.0f,
     0x1.a9ab4ap-46f, 0.0f, 0.0f, 0x1.58e144p-82f, 0.0f, 0.0f, 0x1.a01d96p-116f,
     0x1.ede2c6p-53f, 0.0f, 0.0f, 0x1.72f5e8p-105f, 0x1.028f9ep-115f, 0.0f,
     0x1.686644p-88f, 0.0f, 0.0f, 0.0f, 0x1.3876b6p-120f, 0x1.3625bap-104f, 0.0f,
     0.0f, 0.0f, 0x1.a51e72p-16f, 0x1.0230a8p-36f, 0.0f, 0.0f, 0x1.40c11ep-91f, 0.0f,
     0x1.d5acd8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.977d36p-79f, 0x1.cc12b2p-76f,
     0x1.e4595cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0877eap-15f,
     0x1.60a43cp-106f, 0.0f, 0.0f, 0.0f, 0x1.0427b8p-45f, 0x1.88a298p-64f, 0.0f,
     0x1.725876p-124f, 0x1.db9b9ap-2f, 0x1.0848c6p-51f, 0.0f, 0x1.0d299ap-70f,
     0x1.ceaf38p-50f, 0.0f, 0x1.7e58c8p-54f, 0.0f, 0.0f, 0x1.7ae84ep-42f, 0.0f, 0.0f,
     0x1.4cd15p-7f, 0.0f, 0x1.d43776p-25f, 0.0f, 0x1.7a1e2cp-13f, 0.0f,
     0x1.a7f8f8p-31f, 0x1.0ed9dap-9f, 0.0f, 0x1.480574p-51f, 0.0f, 0.0f, 0.0f,
     0x1.5a06a6p-64f, 0x1.932fp-73f, 0x1.44304ep-95f, 0.0f, 0.0f, 0x1.44f022p-31f,
     0.0f, 0x1.3f7692p-83f, 0x1.46ca84p-44f, 0.0f, 0x1.3f57bep-45f, 0.0f, 0.0f,
     0x1.b7f15ap-87f, 0x1.1621bep-112f, 0x1.4e5696p-106f, 0.0f, 0x1.9982b4p-117f,
     0.0f, 0x1.548b46p-30f, 0x1.34aa4ep-30f, 0.0f, 0.0f, 0x1.c06d02p-85f,
     0x1.c4b3f2p-73f, 0x1.fcc18ep-31f, 0.0f, 0x1.f9b1ep-105f, 0x1.03679ep-110f,
     0x1.0848b8p-116f, 0.0f, 0.0f, 0.0f, 0x1.a17086p-105f, 0x1.a502ecp-22f,
     0x1.cc97bp-17f, 0x1.a1f8b6p-30f, 0x1.8b600ap-28f, 0x1.9b69d2p-60f,
     0x1.3218dcp-62f, 0x1.0c1128p-104f, 0x1.121b34p-75f, 0.0f, 0x1.3c4928p-12f,
     0x1.5b7af8p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f7ee4p-109f, 0.0f, 0x1.a8c6dp-38f,
     0x1.b7b454p-35f, 0.0f, 0x1.ab518cp-115f, 0.0f, 0.0f, 0.0f, 0x1.2055ap-104f, 0.0f,
     0x1.b636d8p-34f, 0x1.a31bb6p-107f, 0x1.d6e6bcp-18f, 0x1.3ee7c4p-64f, 0.0f,
     0x1.d3057ap-61f, 0x1.7080d6p-27f, 0.0f, 0.0f, 0x1.7ccap-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.840638p-43f, 0.0f, 0.0f, 0x1.0c7e1ep-13f, 0.0f, 0.0f, 0x1.f81af4p-92f,
     0.0f, 0x1.b8baa4p-99f, 0x1.763c0ep-62f, 0x1.280fbp-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21695ap-90f, 0.0f, 0.0f, 0x1.982c1p-111f, 0x1.9e8a2cp-54f,
     0x1.581228p-18f, 0x1.d61952p-1f, 0x1.20858ep-76f, 0.0f, 0.0f, 0x1.f105p-117f,
     0x1.2b90b6p-104f, 0x1.ef0e0ap-27f, 0.0f, 0.0f, 0.0f, 0x1.c9b9bep-108f,
     0x1.7f212p-26f, 0.0f, 0x1.10c2ccp-59f, 0x1.5ef8bp-96f, 0.0f, 0x1.aff3a4p-116f,
     0x1.0ab812p-91f, 0x1.e9d696p-55f, 0.0f, 0.0f, 0x1.f46d56p-9f, 0.0f,
     0x1.8b764p-16f, 0x1.47845ep-103f, 0x1.136dd4p-71f, 0.0f, 0.0f, 0.0f,
     0x1.e545d2p-121f, 0x1.834cfap-35f, 0.0f, 0x1.3ea8b8p-38f, 0x1.58e3ccp-4f,
     0x1.43fde6p-114f, 0.0f, 0x1.c13bd4p-64f, 0x1.00bdc2p-83f, 0.0f, 0.0f,
     0x1.48cd04p-41f, 0.0f, 0x1.38bd9ap-71f, 0.0f, 0x1.4f3f42p-97f, 0.0f, 0.0f,
     0x1.b00418p-19f, 0.0f, 0x1.60613ep-62f, 0x1.6f7c3ap-47f, 0x1.8a3f88p-123f,
     0x1.8b18e4p-47f, 0x1.08b6d6p-53f, 0x1.bfbb0ep-28f, 0x1.8dd948p-77f,
     0x1.72bb58p-35f, 0x1.7685d4p-54f, 0x1.d55a24p-48f, 0x1.a5e56ap-124f, 0.0f,
     0x1.a84cdcp-80f, 0x1.cc8896p-126f, 0.0f, 0x1.04b82ap-75f, 0.0f, 0.0f,
     0x1.182704p-78f, 0x1.572b04p-117f, 0.0f, 0x1.7002cp-68f, 0.0f, 0.0f,
     0x1.d88f8ap-105f, 0x1.baceccp-94f, 0.0f, 0x1.4145c4p-75f, 0x1.e16df2p-10f,
     0x1.d4ea2p-63f, 0.0f, 0x1.59e632p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f71366p-40f, 0.0f, 0x1.021b7cp-115f, 0x1.8c875p-30f, 0x1.60986ep-109f, 0.0f,
     0.0f, 0x1.88b52p-43f, 0.0f, 0.0f, 0x1.642862p-78f, 0.0f, 0.0f, 0x1.8013dep-75f,
     0.0f, 0x1.0da38ep-124f, 0x1.65a31ep-109f, 0x1.b50bcp-63f, 0x1p0f,
     0x1.bd5484p-90f, 0x1.6088fep-10f, 0x1.112cd2p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66a098p-99f, 0.0f, 0x1.5c2dfp-120f, 0.0f, 0.0f, 0x1.32086p-3f,
     0x1.b16fc6p-13f, 0x1.e5b778p-78f, 0x1.65ae56p-115f, 0x1.1573fep-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e611ecp-27f, 0x1.9ba73ep-113f, 0x1.0c497cp-14f, 0x1.8e04e2p-29f,
     0.0f, 0.0f, 0x1.5b1d38p-55f, 0x1.a85b5ep-19f, 0.0f, 0.0f, 0x1.af067ap-99f,
     0x1.770b4ep-43f, 0.0f, 0x1.4cb1c8p-106f, 0x1.50306cp-24f, 0x1.64e1e8p-49f, 0.0f,
     0x1.1e796ap-103f, 0x1.e28dp-66f, 0x1.104ab8p-114f, 0.0f, 0x1.2a8678p-26f,
     0x1.ff27cep-123f, 0.0f, 0x1.9ecc6p-83f, 0.0f, 0x1.864472p-55f, 0.0f,
     0x1.0a8d1p-7f, 0x1.51bd0ap-25f, 0.0f, 0x1.2e4ba4p-118f, 0x1.a74c2cp-116f,
     0x1.79e8ep-46f, 0.0f, 0.0f, 0.0f, 0x1.18f3cp-92f, 0.0f, 0.0f, 0x1.01bdd2p-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05c92p-92f, 0x1.00d4fep-46f, 0.0f,
     0x1.e553c2p-31f, 0.0f, 0.0f, 0x1.dfbfcep-63f, 0.0f, 0x1.69a024p-18f,
     0x1.f9bca4p-11f, 0x1.bd16d4p-83f, 0x1.766b2ep-16f, 0x1.c6d43p-75f,
     0x1.3a9ae4p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b0b1ep-72f, 0.0f, 0x1.a5d40ep-96f, 0x1.4198bp-33f, 0.0f, 0.0f,
     0x1.b9fa96p-72f, 0x1.633908p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a93184p-112f, 0.0f,
     0x1.9e35cep-25f, 0x1.797eb6p-39f, 0x1.b664c2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16d8acp-100f, 0x1.2d7e62p-113f, 0.0f, 0.0f, 0.0f, 0x1.003bbp-23f, 0.0f,
     0x1.506132p-67f, 0.0f, 0.0f, 0x1.f6d128p-62f, 0.0f, 0.0f, 0.0f, 0x1.eaf466p-99f,
     0x1.6b27d6p-66f, 0x1.10a7fcp-2f, 0.0f, 0x1.5ad12cp-119f, 0.0f, 0x1.862ca8p-37f,
     0x1.d1b9dcp-50f, 0x1.6f1c9ep-33f, 0x1.d4fdfp-94f, 0x1.a21f4ep-86f,
     0x1.718fcp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfa8a4p-49f, 0x1.c3db1ep-85f, 0.0f, 0x1.981232p-36f, 0x1.6ce058p-84f,
     0x1.a58d8cp-53f, 0x1.6daf0ep-51f, 0.0f, 0.0f, 0x1.8dc044p-62f, 0.0f,
     0x1.49a4bcp-20f, 0.0f, 0x1.29f6c6p-106f, 0.0f, 0.0f, 0x1.15bdfep-96f,
     0x1.44290ep-4f, 0.0f, 0.0f, 0x1.f7cd5ap-87f, 0x1.a71ed8p-15f, 0.0f,
     0x1.a1e704p-16f, 0.0f, 0x1.50f82ap-64f, 0x1.15fc7p-23f, 0.0f, 0.0f,
     0x1.e31944p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd1468p-20f, 0.0f,
     0x1.8ea784p-7f, 0.0f, 0.0f, 0x1.1dbb38p-9f, 0x1.536716p-17f, 0.0f,
     0x1.7b5f48p-106f, 0x1.78f58cp-21f, 0x1.fead94p-1f, 0.0f, 0.0f, 0.0f,
     0x1.577156p-17f, 0x1.1ae986p-97f, 0x1.b743eap-19f, 0.0f, 0.0f, 0.0f,
     0x1.ea1e36p-78f, 0.0f, 0x1.57c7d6p-52f, 0x1.13558ap-125f, 0.0f, 0.0f, 0.0f,
     0x1.9e7bap-66f, 0.0f, 0.0f, 0.0f, 0x1.a6c152p-63f, 0.0f, 0.0f, 0x1.03d2f8p-117f,
     0x1.00ab5p-40f, 0.0f, 0x1.e8cc62p-26f, 0x1.40a364p-90f, 0x1.834fcep-118f,
     0x1.15364ep-29f, 0x1.9f7e7p-105f, 0.0f, 0x1.0eb49ep-77f, 0x1.b5fa7cp-30f,
     0x1.794f74p-96f, 0.0f, 0.0f, 0x1.9b31aap-100f, 0x1.24b37p-74f, 0x1.a2b8dp-100f,
     0.0f, 0.0f, 0.0f, 0x1.73692ap-46f, 0.0f, 0x1.1a0be4p-118f, 0x1.3ea352p-94f,
     0x1.a90caap-72f, 0x1.915806p-68f, 0x1.9f79fcp-14f, 0.0f, 0x1.2693ccp-55f,
     0x1.03142ep-40f, 0.0f, 0.0f, 0x1.783e9ap-51f, 0x1.d6db04p-110f, 0x1.b3f748p-107f,
     0x1.214238p-65f, 0x1.a212f2p-14f, 0x1.b55402p-77f, 0.0f, 0.0f, 0.0f,
     0x1.acdb2ap-90f, 0x1.641008p-72f, 0.0f, 0.0f, 0x1.77c38ep-20f, 0x1.7b9c9p-37f,
     0x1.984016p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b85e2p-105f, 0.0f,
     0x1.81be64p-94f, 0.0f, 0.0f, 0x1.fecbf8p-69f, 0x1.388072p-107f, 0x1.7821acp-64f,
     0.0f, 0x1.4e3a7ap-78f, 0.0f, 0x1.9d22d8p-62f, 0.0f, 0.0f, 0x1.f65bc4p-125f, 0.0f,
     0.0f, 0x1.410276p-95f, 0x1.12e058p-25f, 0x1.c8c4c2p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfb54cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.945d8p-117f, 0.0f,
     0x1.ae22dap-96f, 0x1.0f2254p-112f, 0x1.7011ap-30f, 0.0f, 0.0f, 0.0f,
     0x1.f65dbep-110f, 0x1.d16cbcp-81f, 0.0f, 0x1.444ed8p-33f, 0x1.e627p-33f,
     0x1.536a4cp-26f, 0x1.26dda6p-80f, 0.0f, 0x1.f63aeap-122f, 0.0f, 0.0f,
     0x1.3ce908p-41f, 0.0f, 0x1.80e274p-44f, 0x1.e9d2d2p-39f, 0x1.a141c2p-61f,
     0x1.117d2p-83f, 0x1.82a454p-112f, 0x1.7a26e4p-96f, 0x1.cf503ap-89f, 0.0f, 0.0f,
     0x1.850586p-34f, 0.0f, 0x1.6df4eep-15f, 0.0f, 0.0f, 0x1.9cb7f6p-36f, 0.0f, 0.0f,
     0x1.fb40c6p-90f, 0.0f, 0.0f, 0x1.2311aap-53f, 0x1.478006p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f88cd2p-45f, 0.0f, 0x1.51a974p-44f,
     0x1.6147a6p-117f, 0.0f, 0.0f, 0.0f, 0x1.12b272p-63f, 0x1.a8d0dep-52f,
     0x1.8561p-6f, 0.0f, 0x1.db50f6p-46f, 0x1.14c9d6p-36f, 0x1.9c17ep-5f, 0.0f,
     0x1.c92562p-57f, 0x1.0fe0eep-33f, 0.0f, 0x1.8fc696p-86f, 0.0f, 0x1.bf3b3ep-44f,
     0x1.dc70e4p-46f, 0x1.cc17b2p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.285e66p-58f, 0x1.42edp-47f, 0x1.9ab742p-83f, 0.0f, 0.0f, 0.0f,
     0x1.9721e8p-99f, 0x1.b125dep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f5804p-63f,
     0x1.ec17ecp-46f, 0x1.ba2a8cp-54f, 0.0f, 0.0f, 0x1.9cbe14p-2f, 0.0f,
     0x1.6832c4p-85f, 0x1.674ed8p-89f, 0x1.f84946p-49f, 0x1.04f52ep-69f,
     0x1.f92faap-105f, 0.0f, 0x1.9eee82p-8f, 0.0f, 0x1.516accp-31f, 0.0f, 0.0f, 0.0f,
     0x1.51f62p-55f, 0.0f, 0.0f, 0x1.8b0a34p-63f, 0.0f, 0.0f, 0x1.95250ep-2f, 0.0f,
     0.0f, 0x1.a5a494p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e469b2p-60f, 0x1.0505d4p-39f,
     0x1.b3f324p-16f, 0.0f, 0x1.daa266p-70f, 0x1.fd6c1p-87f, 0x1.97af46p-31f, 0.0f,
     0x1.f0892p-54f, 0x1.bd97a6p-23f, 0.0f, 0.0f, 0x1.6455d6p-74f, 0.0f,
     0x1.15f4bep-122f, 0.0f, 0.0f, 0x1.01c72cp-121f, 0x1.359434p-118f, 0x1.ede38ap-8f,
     0.0f, 0.0f, 0.0f, 0x1.8037cap-5f, 0x1.59ad72p-69f, 0x1.48ed38p-54f, 0.0f, 0.0f,
     0.0f, 0x1.51a5dp-5f, 0x1.918f4ap-48f, 0.0f, 0x1.02354cp-12f, 0x1.ddea82p-56f,
     0x1.796b9p-54f, 0x1.734dcap-107f, 0x1.140e5ap-122f, 0.0f, 0x1.0ff0cap-73f,
     0x1.8b2d92p-85f, 0.0f, 0.0f, 0x1.df947ap-12f, 0.0f, 0x1.f58e2ap-89f,
     0x1.20dff2p-56f, 0.0f, 0x1.9c8a08p-81f, 0x1.c51032p-62f, 0x1.a69a56p-77f, 0.0f,
     0.0f, 0x1.63ab2ap-87f, 0x1.d68e24p-26f, 0x1.9e1feep-121f, 0.0f, 0.0f, 0.0f,
     0x1.992948p-62f, 0x1.94adbcp-29f, 0x1.a63a3p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36e9f2p-21f, 0.0f, 0.0f, 0x1.cb00f6p-103f, 0.0f, 0.0f, 0.0f, 0x1.687596p-27f,
     0.0f, 0x1.b33fe6p-27f, 0.0f, 0x1.f75028p-96f, 0x1.3c90dp-112f, 0x1.320d84p-106f,
     0x1.32df3cp-94f, 0.0f, 0x1.978aap-31f, 0x1.7e4944p-39f, 0x1.e4d5a6p-104f, 0.0f,
     0.0f, 0x1.fa6754p-27f, 0.0f, 0x1.3634bcp-126f, 0.0f, 0.0f, 0x1.a9df3ap-38f,
     0x1.67581cp-19f, 0x1.a23ff6p-25f, 0.0f, 0x1.f34f46p-83f, 0x1.cb7a78p-69f,
     0x1.11f078p-15f, 0x1.6520f4p-103f, 0x1.f74da2p-83f, 0.0f, 0.0f, 0.0f,
     0x1.bf5a9ep-5f, 0x1.42c472p-124f, 0x1.624324p-66f, 0.0f, 0.0f, 0.0f,
     0x1.1fec46p-5f, 0x1.f0ffc2p-7f, 0.0f, 0x1.3a0bc8p-110f, 0x1.817716p-15f,
     0x1.027896p-115f, 0x1.2d5e56p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82f32ep-42f, 0.0f,
     0x1.4e1052p-13f, 0x1.e7096ep-121f, 0x1.da29c6p-87f, 0.0f, 0.0f, 0x1.f94a64p-59f,
     0x1.b16d68p-91f, 0x1.56f502p-48f, 0x1.90af5cp-123f, 0x1.47995ep-40f, 0.0f,
     0x1.34563ep-24f, 0x1.0435ap-56f, 0x1.1a80d8p-79f, 0.0f, 0x1.cc788p-88f, 0.0f,
     0x1.d65cf8p-57f, 0.0f, 0x1.08c638p-86f, 0x1.6eebcep-11f, 0x1.9aa9bp-9f,
     0x1.ef8848p-6f, 0.0f, 0x1.de1b2ap-2f, 0x1.117588p-72f, 0x1p0f, 0x1.07aa96p-43f,
     0x1.7d6db2p-59f, 0.0f, 0x1.2d2b7ap-39f, 0.0f, 0.0f, 0.0f, 0x1.fb372ap-116f, 0.0f,
     0.0f, 0x1.919bc6p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73f56ep-23f, 0.0f,
     0x1.a349dp-21f, 0.0f, 0x1.f8eacp-58f, 0x1.98a37cp-83f, 0x1.24a176p-58f,
     0x1.40f3f6p-126f, 0x1.372e5p-38f, 0.0f, 0x1.e1e9fep-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f59916p-26f, 0.0f, 0x1.13e64cp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_acosf1_u10purecfma(tmp0);
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
    printf("Sleef_acosf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
