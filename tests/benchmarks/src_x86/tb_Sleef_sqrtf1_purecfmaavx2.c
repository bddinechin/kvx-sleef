/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf1_purecfma.c --function Sleef_sqrtf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
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
     0.0f, 0x1.f073d8p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b16652p-25f, 0.0f,
     0x1.1aff94p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f84f12p-55f, 0.0f, 0.0f,
     0x1.244c4ap-2f, 0x1.2ec678p-124f, 0x1.a7483ep-87f, 0x1.5f4c8ep-16f, 0.0f,
     0x1.24a2bcp-30f, 0x1.7f7134p-18f, 0x1.55c10ap-85f, 0.0f, 0x1.a91ff6p-75f,
     0x1.38baf6p-121f, 0.0f, 0x1.b05e1cp-65f, 0x1.64b85ap-15f, 0x1.600f6ep-1f, 0.0f,
     0.0f, 0x1.be4a26p-11f, 0.0f, 0x1.803298p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4eda6p-10f, 0x1.e03798p-27f, 0.0f, 0.0f, 0x1.4b5d76p-115f, 0.0f,
     0x1.f797c6p-118f, 0.0f, 0x1.0294bep-94f, 0.0f, 0x1.82d184p-32f, 0.0f, 0.0f,
     0x1.d6b1ap-97f, 0x1.84d196p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3076dap-6f,
     0x1.a7b886p-108f, 0x1.8b6ea2p-50f, 0x1.10aedcp-94f, 0x1.20e2p-92f, 0.0f, 0.0f,
     0x1.ed3748p-123f, 0.0f, 0.0f, 0x1.f28ae8p-20f, 0x1.10197ep-68f, 0.0f,
     0x1.564ff8p-41f, 0.0f, 0x1.9ebb7ep-87f, 0.0f, 0.0f, 0.0f, 0x1.f3fb14p-6f, 0.0f,
     0.0f, 0.0f, 0x1.04967cp-82f, 0x1.2bcaa2p-111f, 0.0f, 0x1.3e5676p-60f, 0.0f, 0.0f,
     0x1.f7d4b2p-38f, 0.0f, 0x1.489dd4p-122f, 0x1.696f28p-53f, 0x1.a32cd2p-38f,
     0x1.a7a56p-77f, 0x1.8dfc9cp-24f, 0.0f, 0x1.0b0dacp-31f, 0.0f, 0x1.87a82ap-4f,
     0x1.57737ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fedbep-104f, 0.0f, 0.0f,
     0x1.597dccp-7f, 0.0f, 0.0f, 0.0f, 0x1.a19628p-37f, 0.0f, 0.0f, 0x1.9158f4p-109f,
     0x1.2637ep-78f, 0.0f, 0.0f, 0.0f, 0x1.11399cp-58f, 0.0f, 0x1.273222p-113f,
     0x1.6c9eaep-49f, 0x1.a6e998p-94f, 0x1.6509cp-34f, 0.0f, 0x1.eda422p-21f, 0.0f,
     0x1.49916cp-22f, 0x1.dd671ap-118f, 0.0f, 0.0f, 0x1.cae766p-47f, 0.0f, 0.0f, 0.0f,
     0x1.d37c28p-65f, 0.0f, 0x1.ad4c8p-105f, 0.0f, 0x1.f11f7ep-9f, 0x1.f3980ap-4f,
     0x1.1f7adep-38f, 0x1.51cf38p-37f, 0.0f, 0x1.3da45p-92f, 0x1.53d79cp-118f,
     0x1.61c7ecp-41f, 0x1.9013eep-54f, 0x1.627a66p-55f, 0x1.151dfcp-96f,
     0x1.176aap-9f, 0x1.74eb66p-94f, 0x1.5e2676p-20f, 0x1.935138p-46f,
     0x1.d71216p-52f, 0x1.727166p-96f, 0.0f, 0.0f, 0x1.3add94p-28f, 0x1.4cac9ap-75f,
     0.0f, 0.0f, 0.0f, 0x1.66ac18p-58f, 0x1.913c5cp-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.b46b4ap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.446bbp-62f, 0.0f, 0x1.0c005ep-105f, 0.0f, 0x1.cfabdap-52f, 0x1.39eb38p-36f,
     0x1.f88432p-95f, 0.0f, 0.0f, 0.0f, 0x1.cbbf28p-85f, 0x1.09d448p-75f,
     0x1.35c292p-86f, 0.0f, 0x1.a34d7ep-3f, 0.0f, 0x1.22dea4p-111f, 0x1.612052p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.50b99ap-96f, 0x1.71867ap-24f, 0.0f, 0x1.9bd1dep-71f,
     0x1.0ceeb6p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05ff22p-58f, 0x1.8aca1p-78f,
     0x1.9ed4fp-118f, 0x1.9c4502p-88f, 0x1.5c25b2p-78f, 0.0f, 0.0f, 0x1.a6c37cp-21f,
     0x1.75606ep-47f, 0.0f, 0x1.da248ap-54f, 0.0f, 0x1.121ed2p-93f, 0x1.190edep-1f,
     0.0f, 0.0f, 0x1.f8d9cap-7f, 0x1.d5deeap-3f, 0.0f, 0.0f, 0x1.d1c2cap-118f, 0.0f,
     0x1.da3ecep-18f, 0.0f, 0.0f, 0.0f, 0x1.e95f2ep-99f, 0.0f, 0x1.8df8d8p-34f, 0.0f,
     0x1.34ec4ap-37f, 0x1.e0056cp-21f, 0.0f, 0x1.bb0baep-13f, 0.0f, 0.0f,
     0x1.355132p-99f, 0x1.0af8acp-75f, 0x1.364e28p-119f, 0.0f, 0.0f, 0.0f,
     0x1.a646bap-18f, 0.0f, 0.0f, 0x1.88f8f2p-115f, 0.0f, 0x1.6ee426p-26f, 0.0f,
     0x1.259e7ep-88f, 0.0f, 0.0f, 0.0f, 0x1.1cf07ap-95f, 0.0f, 0.0f, 0.0f,
     0x1.f7cf06p-60f, 0x1.a349a6p-39f, 0.0f, 0.0f, 0x1.8b780ap-94f, 0x1.29af46p-100f,
     0.0f, 0.0f, 0x1.57981p-6f, 0.0f, 0x1.4145fap-93f, 0.0f, 0.0f, 0x1.599988p-120f,
     0x1.970284p-48f, 0x1.b087fcp-39f, 0x1.954cfp-76f, 0.0f, 0x1.74eff6p-19f, 0.0f,
     0.0f, 0x1.1100f4p-100f, 0x1.a819b4p-76f, 0x1.353674p-104f, 0x1.989c4p-72f, 0.0f,
     0x1.6f5dbp-50f, 0x1.f2d9dep-9f, 0x1.fc16eap-28f, 0x1.11558p-90f, 0x1.36f41ep-19f,
     0.0f, 0.0f, 0x1.9b56bp-9f, 0.0f, 0x1.d7f80ap-113f, 0x1.8cf56ap-20f, 0.0f, 0.0f,
     0x1.51b294p-109f, 0x1.d750fap-52f, 0.0f, 0x1.e98862p-6f, 0x1.6e188ep-96f,
     0x1.4fd202p-53f, 0.0f, 0x1.1a2e38p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.202a7p-7f,
     0x1.a5aae2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b539p-75f, 0.0f, 0.0f,
     0x1.3cdf96p-4f, 0x1.0ed9b2p-7f, 0.0f, 0x1.ad4bbep-110f, 0.0f, 0x1.a921eap-126f,
     0.0f, 0x1.d51cfap-102f, 0.0f, 0x1.3263f8p-67f, 0x1.d8d768p-24f, 0.0f,
     0x1.66bf1cp-9f, 0x1.f1c73ap-86f, 0x1.5b7c5cp-40f, 0x1.ea7718p-76f, 0.0f, 0.0f,
     0x1.35c996p-18f, 0x1.d3fdp-87f, 0.0f, 0x1.b200b6p-2f, 0.0f, 0x1.cba97p-41f, 0.0f,
     0.0f, 0x1.d01596p-112f, 0x1.ed077cp-78f, 0.0f, 0.0f, 0x1.12b876p-47f,
     0x1.f2f5b2p-40f, 0.0f, 0x1.22b0d2p-109f, 0x1.4c5aeap-62f, 0.0f, 0.0f,
     0x1.ea9d12p-4f, 0.0f, 0.0f, 0x1.eced06p-49f, 0.0f, 0.0f, 0x1.9ebp-113f,
     0x1.1dfe44p-104f, 0.0f, 0x1.f33516p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fecdap-125f, 0x1.c41d2p-46f, 0x1.79c738p-57f, 0x1.31069ap-72f, 0.0f,
     0x1.f16d62p-62f, 0x1.f4a64p-119f, 0.0f, 0x1.6006e2p-123f, 0.0f, 0.0f, 0.0f,
     0x1.9a1f9ep-115f, 0x1.09a766p-124f, 0x1.083786p-52f, 0x1.b42a1cp-54f, 0.0f,
     0x1.b1821ap-57f, 0x1.0c192ep-13f, 0.0f, 0x1.ca3d46p-68f, 0.0f, 0.0f,
     0x1.d85464p-48f, 0x1.695056p-105f, 0x1.41dad2p-16f, 0.0f, 0x1.1309ap-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a21b2p-75f, 0x1.1bd3f8p-55f, 0x1.179096p-75f,
     0x1.2cf9dap-4f, 0.0f, 0x1.042ae4p-22f, 0x1.2f96bp-80f, 0x1.566b42p-35f,
     0x1.895aa4p-68f, 0x1.b0553ep-122f, 0.0f, 0.0f, 0x1.aff1cp-81f, 0.0f, 0.0f,
     0x1.992486p-52f, 0x1.38d328p-65f, 0.0f, 0.0f, 0x1.fa23c4p-93f, 0x1.2c09c2p-91f,
     0x1.888b08p-85f, 0x1.62cdf6p-24f, 0x1.6a0142p-77f, 0.0f, 0x1.d00032p-100f, 0.0f,
     0.0f, 0x1.8f4276p-62f, 0.0f, 0x1.c9bd2p-63f, 0x1.df0fd6p-117f, 0.0f, 0.0f,
     0x1.cb458cp-83f, 0.0f, 0.0f, 0x1.77f7eap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.869ea4p-41f, 0.0f, 0.0f, 0x1.d538c6p-43f, 0.0f, 0x1.ea41dap-35f,
     0x1.16645ap-2f, 0.0f, 0x1.afb57ep-22f, 0.0f, 0.0f, 0x1.78f966p-104f,
     0x1.3ffbcep-11f, 0x1.61e6c4p-22f, 0x1.31a74cp-116f, 0x1.10e38cp-24f, 0.0f,
     0x1.d44a84p-27f, 0x1.fd8d76p-57f, 0x1.800f32p-62f, 0.0f, 0.0f, 0x1.a28c46p-31f,
     0.0f, 0.0f, 0.0f, 0x1.deb5dp-59f, 0.0f, 0x1.f7d0b6p-59f, 0.0f, 0.0f, 0.0f,
     0x1.aee6eap-61f, 0x1.edda44p-31f, 0x1.8baba2p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab76fcp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f101p-20f, 0.0f, 0.0f,
     0x1.621656p-88f, 0x1.42ef82p-7f, 0x1.52b838p-74f, 0.0f, 0x1.5e8f0cp-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12907p-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d8c9ep-33f, 0x1.9d7866p-67f, 0.0f, 0.0f, 0x1.67fddap-107f, 0.0f, 0.0f,
     0x1.7c29fep-13f, 0x1.8f6884p-87f, 0x1.842836p-48f, 0x1.74bbc8p-76f, 0.0f,
     0x1.7c2762p-30f, 0x1.fd34d4p-62f, 0x1.e683c2p-57f, 0.0f, 0.0f, 0x1.70e0d8p-115f,
     0.0f, 0x1.0d15b8p-108f, 0x1.460e08p-4f, 0.0f, 0.0f, 0.0f, 0x1.2c6cc4p-26f, 0.0f,
     0.0f, 0x1.f96e3p-53f, 0x1.bfa9bap-65f, 0x1.fa8348p-15f, 0x1.8cc76p-2f,
     0x1.90c9a2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac861cp-74f, 0x1.9d6d7p-50f,
     0x1.427e5cp-60f, 0.0f, 0x1.85b17p-56f, 0x1.a3d34ap-1f, 0.0f, 0.0f, 0.0f,
     0x1.072b24p-15f, 0.0f, 0.0f, 0x1.59dacep-53f, 0.0f, 0x1.b96b04p-64f, 0.0f, 0.0f,
     0x1.9a875ep-4f, 0x1.b0b734p-46f, 0.0f, 0x1.01babep-19f, 0x1.9294dcp-35f,
     0x1.64bad4p-82f, 0x1.202a06p-53f, 0x1.167158p-105f, 0x1.4d19e6p-80f, 0.0f,
     0x1.c42a36p-67f, 0x1.2824a8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df5accp-96f, 0x1.a43134p-109f, 0.0f, 0x1.42e80cp-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e7926p-33f, 0.0f, 0.0f, 0x1.97931ap-10f, 0x1.52d6d8p-29f, 0x1.5ef838p-67f,
     0x1.07831p-104f, 0x1.d2d83cp-77f, 0x1.f45532p-66f, 0x1.fae4c4p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d6aef4p-12f, 0x1.9ef3acp-52f, 0x1.84df92p-72f, 0.0f,
     0x1p0f, 0x1.6560e8p-18f, 0x1.42acb6p-36f, 0x1.e6110ap-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ee152ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e1176p-46f, 0.0f,
     0x1.47cf28p-96f, 0x1.3c1c04p-84f, 0.0f, 0x1.bd02p-39f, 0.0f, 0.0f, 0.0f,
     0x1.da3114p-17f, 0x1.2413dep-2f, 0x1.29dd96p-99f, 0x1.3cc48p-64f,
     0x1.75014ep-66f, 0x1.46fb42p-112f, 0.0f, 0x1.6d1b4ap-125f, 0x1.aaa0fp-101f, 0.0f,
     0x1.fb2092p-76f, 0x1.aea788p-86f, 0.0f, 0x1.1d4cd4p-35f, 0.0f, 0x1.4d6b0cp-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97d6b2p-80f, 0x1.69663p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.59d04cp-81f, 0.0f, 0x1.48e09ap-111f, 0x1.badcd8p-67f, 0.0f,
     0x1.46edacp-89f, 0x1.bb8278p-126f, 0x1.f85bb6p-125f, 0x1.4bc5e6p-79f, 0x1p0f,
     0.0f, 0x1.4ffbb6p-66f, 0x1.5e0a9p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f59bap-58f,
     0x1.bb158p-89f, 0.0f, 0x1.2ad6e4p-69f, 0.0f, 0.0f, 0x1.3c563ap-125f,
     0x1.c25eeep-97f, 0x1.9ad7fep-112f, 0x1.2a3ea6p-41f, 0x1.d6aa78p-75f,
     0x1.295acap-82f, 0.0f, 0x1.2da388p-25f, 0.0f, 0.0f, 0x1.88f8eep-31f,
     0x1.7d5986p-119f, 0x1.8e3b4cp-112f, 0x1.fb86d4p-41f, 0.0f, 0x1.46e076p-56f, 0.0f,
     0x1.dbd2aap-96f, 0.0f, 0.0f, 0.0f, 0x1.40cc78p-61f, 0.0f, 0.0f, 0.0f,
     0x1.dd10c6p-20f, 0x1.788144p-114f, 0.0f, 0.0f, 0x1.b39e44p-24f, 0.0f,
     0x1.1292f8p-35f, 0x1.743e78p-64f, 0.0f, 0.0f, 0.0f, 0x1.f385bp-110f, 0.0f,
     0x1.2b1b18p-111f, 0x1.218abcp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c6234p-60f, 0.0f, 0x1.46e41ep-19f, 0x1.175f0cp-43f, 0.0f, 0x1p0f,
     0.0f, 0x1.e97544p-124f, 0x1.5ce3bep-67f, 0x1.f3cf4ap-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a5894p-5f, 0.0f, 0.0f, 0x1.af3666p-37f, 0x1.853f4cp-58f, 0.0f,
     0x1.476798p-77f, 0x1.5ad8d6p-74f, 0x1.f19bb8p-60f, 0x1.7a4c62p-1f,
     0x1.217c24p-84f, 0x1.80b654p-25f, 0x1.0d646ep-59f, 0.0f, 0x1.a1c3c2p-81f, 0.0f,
     0.0f, 0x1.725276p-48f, 0x1.77a896p-4f, 0x1.60909ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.ff0482p-103f, 0x1.82dbbap-55f, 0.0f, 0x1.76bcbep-6f, 0.0f, 0x1.6a886cp-88f,
     0x1.b99962p-107f, 0x1.fed268p-84f, 0.0f, 0x1.d8f262p-1f, 0x1.cc7f9p-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.96361p-18f, 0.0f, 0.0f, 0.0f, 0x1.f12f06p-119f,
     0x1.297612p-31f, 0x1.7e5aa2p-12f, 0x1.ccf40ap-96f, 0.0f, 0.0f, 0.0f,
     0x1.60de96p-56f, 0x1.3814b6p-70f, 0x1.7ccb2cp-125f, 0x1.4bd00ap-67f,
     0x1.8d4f1cp-112f, 0.0f, 0x1.54cdaep-69f, 0x1.74bcc8p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ca5d2p-92f, 0x1.06a238p-61f, 0x1.df4eecp-73f, 0x1.a04bep-53f, 0.0f,
     0x1.8b4244p-123f, 0x1.de47c8p-28f, 0.0f, 0x1.b2333p-16f, 0.0f, 0.0f,
     0x1.0ac3f2p-6f, 0x1.a2af4ep-54f, 0.0f, 0x1.ef3d3cp-97f, 0x1.48b4b2p-65f,
     0x1.45b1d8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd1452p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c6b832p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4efaap-30f, 0.0f,
     0x1.fe1ed2p-74f, 0x1.430e6cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e043aap-112f,
     0x1.b93cbap-3f, 0.0f, 0.0f, 0x1.1b17ecp-96f, 0.0f, 0x1.ac2b06p-1f,
     0x1.78291p-19f, 0.0f, 0.0f, 0.0f, 0x1.903ed4p-37f, 0x1.a33a78p-92f,
     0x1.68a4a8p-36f, 0x1.29dccp-8f, 0x1.2761fap-97f, 0x1.ce8abap-52f, 0.0f,
     0x1.aa8498p-54f, 0x1.599122p-5f, 0.0f, 0x1.d9784p-122f, 0x1.5b4cb8p-122f,
     0x1.f8aa72p-113f, 0x1.4abfe6p-102f, 0x1.e1e7dp-86f, 0x1.13d692p-109f, 0.0f, 0.0f,
     0.0f, 0x1.32c8eep-68f, 0x1.341076p-14f, 0.0f, 0x1.d2bdbcp-11f, 0.0f, 0.0f,
     0x1.0d3d22p-53f, 0.0f, 0.0f, 0x1.90056cp-79f, 0x1.56ee12p-111f, 0.0f,
     0x1.d08aeep-126f, 0.0f, 0.0f, 0x1.2d5e3ap-42f, 0x1.a28fa6p-49f, 0.0f, 0.0f,
     0x1.12df92p-125f, 0x1.d461a4p-24f, 0.0f, 0x1.f1fd9cp-114f, 0.0f, 0.0f, 0.0f,
     0x1.f7dd98p-22f, 0x1.3f8004p-55f, 0x1.205d4ep-18f, 0.0f, 0x1.72f8a6p-80f, 0.0f,
     0.0f, 0x1.5433fcp-73f, 0.0f, 0x1.455a3p-84f, 0x1p0f, 0x1p0f, 0x1.40f18cp-120f,
     0.0f, 0.0f, 0x1.d5c424p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70e91ep-47f,
     0x1.b59fd4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.128fa2p-107f,
     0x1.1dc54cp-53f, 0x1.67d63p-78f, 0.0f, 0x1.40e31p-6f, 0x1.d30ef2p-3f,
     0x1.f48842p-4f, 0x1.3f4d3cp-102f, 0x1.c630fep-114f, 0.0f, 0x1.06c62p-3f, 0.0f,
     0x1.f2299ap-53f, 0x1.26fbb8p-102f, 0.0f, 0x1.3eb9f6p-57f, 0.0f, 0x1.4facfcp-59f,
     0x1.5e206ep-76f, 0x1.343acep-99f, 0.0f, 0x1.e6796ep-121f, 0x1.6427f4p-24f,
     0x1.e51d66p-23f, 0x1.57c5f6p-37f, 0.0f, 0.0f, 0x1.502b84p-98f, 0x1.3fedbcp-22f,
     0.0f, 0x1.c38feap-56f, 0x1.a2dad6p-104f, 0x1.678582p-26f, 0x1.09487ap-42f, 0.0f,
     0x1.e71b5cp-28f, 0x1.c5091ap-71f, 0.0f, 0.0f, 0.0f, 0x1.b505bcp-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e59254p-94f, 0x1.4e37eap-53f, 0.0f, 0x1.c7acdp-36f,
     0.0f
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
            tmp1 = Sleef_sqrtf1_purecfma(tmp0);
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
    printf("Sleef_sqrtf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtf1_purecfma bench acc %a\n", global_bench_acc);
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
