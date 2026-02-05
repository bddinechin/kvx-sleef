/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf1_u05purecfma.c --function \
 *     Sleef_finz_sqrtf1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.95d77cp-72f, 0.0f, 0.0f, 0x1.c61bfep-34f, 0x1.530f12p-103f,
     0.0f, 0x1.eb4faap-26f, 0x1.ad2dc2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b847d2p-68f,
     0x1.8205b2p-77f, 0x1.72c752p-78f, 0.0f, 0x1.4c2b6p-30f, 0.0f, 0x1.9c5f3ep-4f,
     0x1.b1aaa4p-71f, 0.0f, 0x1.3c113cp-117f, 0.0f, 0.0f, 0x1.06958ep-92f, 0.0f,
     0x1.ef88b4p-119f, 0x1.41d95cp-3f, 0x1.b5b0c4p-18f, 0.0f, 0x1.05ba84p-6f, 0.0f,
     0.0f, 0.0f, 0x1.365032p-4f, 0x1.878d12p-34f, 0x1.11f0c4p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc78cp-111f, 0.0f, 0x1.69c31p-75f, 0x1.f9256ap-111f,
     0x1.6be666p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f80d4p-40f,
     0x1.2de89ep-39f, 0.0f, 0x1.d8de5p-125f, 0.0f, 0.0f, 0.0f, 0x1.a0f86ap-29f, 0.0f,
     0.0f, 0x1.0dbb82p-10f, 0x1.4babc6p-47f, 0.0f, 0x1.fa1f58p-1f, 0.0f,
     0x1.c4f49cp-21f, 0.0f, 0x1.b2b638p-63f, 0x1.f7465p-12f, 0.0f, 0x1.c89a4p-125f,
     0x1.466c34p-114f, 0x1.5d826cp-22f, 0.0f, 0x1.e085c2p-25f, 0x1.bebb1ap-95f, 0.0f,
     0.0f, 0x1.3bc90cp-115f, 0.0f, 0x1.c480e8p-113f, 0.0f, 0.0f, 0.0f, 0x1.adae5p-75f,
     0x1.f395aep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.625d6p-54f, 0x1.2d7ae2p-33f,
     0x1.1ba8aep-69f, 0x1.db04fep-73f, 0x1.92f59ep-104f, 0x1.d60ca6p-65f, 0.0f, 0.0f,
     0.0f, 0x1.d73ad2p-62f, 0.0f, 0x1.69dd38p-7f, 0x1.ed8892p-104f, 0.0f, 0.0f,
     0x1.8b226p-50f, 0.0f, 0.0f, 0x1.0831bep-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb7c72p-75f, 0.0f, 0x1.ca4d26p-56f, 0x1.3a5c68p-85f, 0x1.63afccp-104f, 0.0f,
     0x1.ddad42p-125f, 0.0f, 0.0f, 0.0f, 0x1.89fd12p-94f, 0.0f, 0.0f, 0x1.6cf8e2p-32f,
     0.0f, 0x1.f5278p-81f, 0x1.ab7008p-88f, 0x1.f4b836p-18f, 0.0f, 0.0f,
     0x1.6b2f94p-56f, 0.0f, 0x1.56b11ap-21f, 0x1.505252p-62f, 0.0f, 0x1.938f7ap-123f,
     0.0f, 0x1.0477bcp-38f, 0.0f, 0x1.e6145ep-91f, 0x1.f6845ep-27f, 0.0f,
     0x1.466642p-4f, 0x1.79b672p-107f, 0x1.cc232cp-99f, 0.0f, 0x1.a453f2p-20f,
     0x1.3a24dap-1f, 0x1.35f7cap-71f, 0.0f, 0x1.422d1ap-94f, 0.0f, 0x1.237e6cp-108f,
     0x1.e97546p-120f, 0x1.d2ed96p-82f, 0.0f, 0x1.34b392p-5f, 0x1.3feb5p-8f, 0.0f,
     0.0f, 0.0f, 0x1.afc3b6p-51f, 0.0f, 0x1.c3aba2p-76f, 0.0f, 0x1.13a8c4p-103f,
     0x1.ff1f44p-24f, 0.0f, 0.0f, 0x1.4ffe1p-71f, 0x1.3bfa82p-120f, 0.0f, 0.0f,
     0x1.5d1a48p-95f, 0.0f, 0x1.c42abp-6f, 0.0f, 0x1.aae58cp-52f, 0x1.352246p-117f,
     0.0f, 0x1.849542p-115f, 0x1.bcf658p-31f, 0.0f, 0x1.877b1ep-120f, 0x1.50d47p-33f,
     0x1.34ed1ap-118f, 0.0f, 0x1.78ebbp-93f, 0.0f, 0x1.6a1904p-5f, 0.0f,
     0x1.ad1782p-60f, 0.0f, 0x1.88bc14p-25f, 0x1.3aa9e6p-86f, 0x1.77664cp-91f,
     0x1.fc1cecp-116f, 0x1.c629a6p-64f, 0x1.f4745p-9f, 0.0f, 0x1.f16638p-12f,
     0x1.92b2dap-101f, 0x1.85f808p-1f, 0x1.b9086p-9f, 0x1.0448cep-121f,
     0x1.3e5d6ep-100f, 0.0f, 0.0f, 0x1.05f7fap-83f, 0x1.1fcbe6p-72f, 0x1.ea322p-92f,
     0x1.6ba19ap-61f, 0x1.1cc342p-34f, 0.0f, 0x1.9fda2ep-48f, 0.0f, 0.0f, 0.0f,
     0x1.5f048cp-70f, 0.0f, 0x1.19cfcp-23f, 0.0f, 0.0f, 0.0f, 0x1.203a7p-38f, 0.0f,
     0.0f, 0.0f, 0x1.788e5ep-73f, 0.0f, 0x1.32fd2ap-86f, 0.0f, 0x1.0656eep-61f,
     0x1.ca27p-106f, 0.0f, 0x1.02e402p-17f, 0x1.e43218p-115f, 0x1.356becp-17f, 0.0f,
     0.0f, 0x1.03fa48p-110f, 0.0f, 0.0f, 0x1.02321ap-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b0c992p-27f, 0x1.154894p-3f, 0x1.9f38e6p-108f, 0.0f, 0.0f,
     0x1.13d512p-115f, 0.0f, 0.0f, 0.0f, 0x1.4c523ep-22f, 0.0f, 0.0f, 0x1.8e6ef4p-58f,
     0.0f, 0x1.b5e1bep-88f, 0x1.06165cp-125f, 0x1.8b9008p-125f, 0x1.03c2cap-74f, 0.0f,
     0.0f, 0x1.6aa0f2p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c99146p-21f, 0x1.8d804cp-56f,
     0.0f, 0x1.3cc6aep-99f, 0.0f, 0x1.5ea1p-1f, 0.0f, 0.0f, 0.0f, 0x1.76ec44p-12f,
     0.0f, 0.0f, 0x1.306e6cp-37f, 0x1.e42c6ep-107f, 0.0f, 0x1.971352p-37f,
     0x1.98ff24p-17f, 0x1.b62414p-33f, 0.0f, 0.0f, 0x1.fc810cp-79f, 0.0f, 0.0f,
     0x1.255572p-90f, 0.0f, 0x1.3b4d5cp-37f, 0.0f, 0.0f, 0.0f, 0x1.40f966p-112f,
     0x1.4a0b5ep-32f, 0x1.49685cp-53f, 0.0f, 0.0f, 0.0f, 0x1.9ebecap-71f,
     0x1.1c9f8ep-92f, 0x1.6226eap-49f, 0x1.da492cp-9f, 0.0f, 0x1.020e7ap-86f,
     0x1.2b9258p-113f, 0.0f, 0x1.2285ccp-68f, 0.0f, 0x1.d5dcb8p-7f, 0x1.8969eap-27f,
     0.0f, 0.0f, 0.0f, 0x1.1bfa7cp-69f, 0.0f, 0x1.ef71a8p-1f, 0.0f, 0.0f, 0.0f,
     0x1.bff8ccp-72f, 0x1.69bf56p-116f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.946c22p-105f, 0.0f, 0x1.51a938p-8f, 0x1.d031dep-121f, 0.0f,
     0x1.0632f6p-88f, 0.0f, 0x1.54f7c2p-119f, 0x1.bc8ab8p-53f, 0x1.c2aedap-108f, 0.0f,
     0x1.cdc9b2p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54cb12p-5f, 0.0f, 0x1.55afbp-12f,
     0x1.a7c284p-13f, 0x1.8aa6ap-80f, 0.0f, 0x1.b783a4p-62f, 0x1.9426ccp-98f,
     0x1.731306p-39f, 0.0f, 0.0f, 0x1.f3d17ap-113f, 0x1.c0c4e2p-72f, 0.0f, 0.0f,
     0x1.fa1d74p-25f, 0x1.5290a6p-75f, 0x1.a7675p-95f, 0x1.04ed56p-16f, 0.0f, 0.0f,
     0.0f, 0x1.078572p-77f, 0x1.abd882p-60f, 0x1.c66df6p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83f8d8p-69f, 0x1.8ceac8p-87f, 0x1.a9e4d2p-38f, 0.0f,
     0x1.1c86f6p-91f, 0x1.04786ap-124f, 0x1.4ef8e6p-74f, 0x1.0871p-88f, 0.0f,
     0x1.e988a4p-82f, 0x1.999b9ap-87f, 0.0f, 0x1.c39528p-124f, 0x1.44d292p-20f,
     0x1.841648p-115f, 0x1.a5c6acp-69f, 0x1.69ea44p-30f, 0x1.2823dap-92f, 0.0f, 0.0f,
     0.0f, 0x1.68423ep-95f, 0.0f, 0x1.8f5388p-108f, 0x1.93d21ap-57f, 0x1.d51e4ep-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dbefp-74f, 0.0f, 0x1.f44ec6p-101f, 0.0f, 0.0f,
     0x1.f6b082p-1f, 0x1.e372b8p-3f, 0.0f, 0x1.b12a2cp-11f, 0.0f, 0x1.7c787p-83f,
     0x1.a44fd6p-125f, 0.0f, 0x1.51c374p-81f, 0.0f, 0x1.0bf086p-116f, 0x1.c5ebaap-10f,
     0x1.7d0d6cp-116f, 0x1.4592e2p-65f, 0x1.007e22p-35f, 0x1.0cd1dap-61f,
     0x1.7bc88ap-27f, 0.0f, 0x1.5c1cf8p-82f, 0.0f, 0x1.37f96ap-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3eed04p-64f, 0x1.4db774p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b20aap-104f, 0x1.9c99aap-91f, 0x1.641f6cp-20f, 0.0f, 0x1.37b6b8p-34f,
     0x1.5ce0c8p-119f, 0.0f, 0x1.0f367ap-99f, 0.0f, 0.0f, 0.0f, 0x1.029482p-71f,
     0x1.097008p-74f, 0x1.da8ca6p-40f, 0x1.2db2bep-43f, 0.0f, 0x1.d7e7cap-48f, 0.0f,
     0.0f, 0x1.0ffc0ep-13f, 0x1.3f3edp-120f, 0x1.c6c544p-31f, 0.0f, 0x1.e8bf3ap-50f,
     0.0f, 0.0f, 0.0f, 0x1.750f14p-81f, 0.0f, 0x1.5ee96ap-23f, 0x1.fee35ap-46f, 0.0f,
     0x1.9285dap-101f, 0.0f, 0x1.11256ep-121f, 0x1.17ccecp-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b51db6p-42f, 0x1.09144cp-25f, 0.0f, 0.0f, 0x1.69cc1ap-45f, 0.0f,
     0x1.b2e54p-59f, 0.0f, 0x1.e47e0cp-83f, 0x1.27f80ap-2f, 0.0f, 0.0f,
     0x1.b82e8ep-112f, 0.0f, 0.0f, 0x1.f1a1e2p-20f, 0.0f, 0x1.4c45d2p-73f,
     0x1.23024p-105f, 0x1.9eb786p-64f, 0x1.4ff56ep-46f, 0.0f, 0x1.c7769ep-85f,
     0x1.d1c30ep-124f, 0x1.679ce2p-1f, 0.0f, 0x1.e5dfaep-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21675cp-123f, 0x1.d17c32p-8f, 0.0f, 0x1.eb8f1ep-106f, 0x1.69d2a2p-21f,
     0x1.12f6cep-107f, 0x1.8b5036p-41f, 0.0f, 0.0f, 0x1.b3b4a2p-116f, 0.0f,
     0x1.3c90aep-45f, 0.0f, 0x1.c3fc58p-34f, 0.0f, 0x1.90222cp-43f, 0.0f,
     0x1.3d6d0ep-54f, 0x1.ed506ap-78f, 0x1.112cf8p-89f, 0.0f, 0x1.6c7a2cp-82f, 0.0f,
     0.0f, 0.0f, 0x1.fb041ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5680d6p-90f, 0.0f,
     0.0f, 0.0f, 0x1.40b178p-103f, 0x1.1d1e22p-101f, 0.0f, 0x1.0f5726p-43f, 0.0f,
     0.0f, 0.0f, 0x1.bbebf8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24e368p-27f, 0.0f, 0x1.b1adbap-33f, 0.0f, 0x1.6260a2p-58f, 0.0f, 0.0f,
     0x1.c2c4e2p-106f, 0x1.64db56p-121f, 0.0f, 0x1.6f1d24p-97f, 0x1.d7aa8ap-24f, 0.0f,
     0.0f, 0x1.99f61p-47f, 0.0f, 0.0f, 0.0f, 0x1.5915e6p-69f, 0x1.07a65cp-45f, 0.0f,
     0x1.508cf2p-39f, 0x1.51eaf6p-11f, 0.0f, 0x1.707c08p-33f, 0.0f, 0x1.4ee692p-70f,
     0x1.243afcp-25f, 0x1.f519cap-12f, 0.0f, 0x1.94acacp-103f, 0.0f, 0x1.19df1ep-14f,
     0x1.b27052p-72f, 0.0f, 0.0f, 0x1.fe8b8cp-49f, 0x1.8fc428p-69f, 0.0f, 0.0f,
     0x1.407988p-68f, 0x1.2cc302p-34f, 0.0f, 0.0f, 0x1.0e0acep-32f, 0x1.1f1732p-35f,
     0x1.37b1bap-28f, 0x1.297132p-10f, 0x1.8a0d4cp-21f, 0x1.208b62p-35f, 0.0f,
     0x1.317256p-9f, 0x1.b59766p-62f, 0x1.bc343ap-64f, 0x1.41887p-106f,
     0x1.5b4348p-55f, 0x1.b8c074p-88f, 0x1.5b862cp-2f, 0x1.60e90cp-53f,
     0x1.2e90bp-20f, 0.0f, 0.0f, 0x1.f4fd3ep-74f, 0.0f, 0x1.4f6ff8p-53f,
     0x1.0e27d6p-11f, 0.0f, 0.0f, 0.0f, 0x1.b35122p-64f, 0.0f, 0.0f, 0.0f,
     0x1.0bf54ap-57f, 0x1.58814p-124f, 0x1.3f0a4ap-1f, 0.0f, 0x1.402a16p-121f,
     0x1.ff93d2p-84f, 0x1.3ec38ep-30f, 0x1.b10698p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c55a6p-12f, 0x1.13fe26p-56f, 0x1.c5147cp-107f, 0x1.6cc2dcp-75f, 0.0f,
     0x1.a205fep-48f, 0.0f, 0.0f, 0x1.cdb38cp-21f, 0x1.d04f2ep-63f, 0x1.470618p-85f,
     0x1.1fdcacp-85f, 0x1.6ad2dep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb5684p-106f,
     0x1.75aa06p-37f, 0x1.26c198p-54f, 0x1.0b5b24p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7b33ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e71f1ep-15f, 0.0f, 0.0f,
     0x1.a7252ep-13f, 0x1.7748bep-79f, 0x1.19f70cp-104f, 0.0f, 0x1.be906p-3f, 0.0f,
     0.0f, 0x1.b6fe04p-123f, 0x1.c6abd2p-125f, 0.0f, 0x1.69f3f4p-108f, 0.0f,
     0x1.9f29d4p-30f, 0x1.f840acp-90f, 0x1.1ea524p-125f, 0x1.95589ep-16f,
     0x1.d6b7c8p-81f, 0x1.cd7244p-115f, 0x1.af67bcp-17f, 0.0f, 0.0f, 0x1.8729ccp-109f,
     0.0f, 0.0f, 0.0f, 0x1.0a569ap-56f, 0x1.fa6012p-21f, 0.0f, 0.0f, 0.0f,
     0x1.33a0f8p-5f, 0x1.aff638p-47f, 0.0f, 0.0f, 0x1.63274ap-123f, 0x1.3192c4p-70f,
     0x1.ddea4ap-70f, 0x1.c32ab2p-107f, 0.0f, 0x1.6db9bp-86f, 0.0f, 0x1.8736d8p-94f,
     0x1.439a26p-30f, 0x1.4f71fep-121f, 0x1.8ee64ap-106f, 0x1.21457cp-38f,
     0x1.858c98p-41f, 0.0f, 0x1.2881d6p-38f, 0x1.9dfe44p-35f, 0x1p0f, 0x1.f24f22p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cad1eep-12f, 0x1.274548p-108f, 0.0f, 0x1.3883a8p-20f,
     0.0f, 0.0f, 0.0f, 0x1.552594p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0154f6p-112f,
     0x1.dbb2fep-74f, 0x1.49b876p-23f, 0x1.b435c6p-85f, 0.0f, 0x1.7de07cp-79f,
     0x1.e241bcp-9f, 0.0f, 0x1.c14a68p-110f, 0x1.36a8a6p-106f, 0x1.be63dep-6f,
     0x1.1ba248p-30f, 0x1.7b6b88p-110f, 0.0f, 0.0f, 0x1.33f4bep-61f, 0x1.8fc724p-94f,
     0x1.d65036p-37f, 0x1.a4782ap-50f, 0x1.973794p-35f, 0x1.cd5954p-77f,
     0x1.e7e016p-44f, 0.0f, 0x1p0f, 0.0f, 0x1.518a28p-67f, 0.0f, 0.0f,
     0x1.e42f6ep-48f, 0x1.a9f316p-28f, 0x1p0f, 0.0f, 0x1.547ef6p-53f, 0x1.530e2ap-33f,
     0x1.655c0ap-36f, 0.0f, 0.0f, 0x1.24c7b6p-99f, 0x1.5827b4p-53f, 0x1.02c3c6p-33f,
     0x1.e83b98p-75f, 0.0f, 0x1.e6327cp-26f, 0x1.9876fap-101f, 0x1.e08ab4p-92f, 0.0f,
     0x1.c81418p-34f, 0x1.6d3a52p-94f, 0.0f, 0x1.4f644ep-117f, 0x1.d3ac2ap-95f,
     0x1.cbc9e8p-122f, 0x1.c79ebcp-81f, 0x1.e5dedp-87f, 0x1.96cc34p-122f, 0.0f,
     0x1.25f94ap-119f, 0.0f, 0.0f, 0x1.94ca5p-110f, 0.0f, 0.0f, 0x1.4aa432p-122f,
     0x1.e1028cp-58f, 0x1.3de1a8p-102f, 0x1.423ba6p-7f, 0x1.322016p-55f,
     0x1.a6a776p-3f, 0x1.45857p-24f, 0.0f, 0x1.388096p-96f, 0x1.635ec8p-21f,
     0x1.38e752p-117f, 0x1.77846p-113f, 0.0f, 0.0f, 0x1.f360aap-25f, 0.0f,
     0x1.2bb858p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b1d9p-96f,
     0x1.4911ecp-11f, 0x1.aa09c2p-24f, 0x1.ea00d6p-38f, 0.0f, 0.0f, 0.0f,
     0x1.2786dcp-54f, 0.0f, 0x1.db463p-58f, 0x1.a1429ep-19f, 0.0f, 0x1.8aad76p-39f,
     0x1.2c65e6p-34f, 0x1.dc6b34p-60f, 0x1.3e06dep-70f, 0.0f, 0x1.999d72p-68f,
     0x1.5335ap-30f, 0.0f, 0x1.56c68cp-126f, 0.0f, 0.0f, 0.0f, 0x1.cc2cep-31f, 0.0f,
     0.0f, 0.0f, 0x1.eb3222p-108f, 0x1.5e2c5ap-109f, 0x1.507b0cp-34f, 0.0f,
     0x1.acc50ep-108f, 0.0f, 0x1.2d9484p-57f, 0x1.16c1dep-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.96b382p-18f, 0x1.31137cp-109f, 0x1.51593ap-72f, 0x1.2e6ab4p-83f, 0.0f,
     0x1.47b9b4p-28f, 0x1.14225ap-124f, 0x1.4d0aeep-9f, 0x1.8a4d7ep-58f,
     0x1.290278p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aea41cp-116f, 0.0f, 0.0f, 0.0f,
     0x1.cffaecp-47f, 0x1.c64972p-34f, 0.0f, 0x1.9d6a4p-51f, 0x1.963a6p-70f,
     0x1.dd85fcp-71f, 0x1.523b76p-121f, 0.0f, 0x1.ff3d1p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.03617ep-27f, 0.0f, 0x1.fbf6eap-104f, 0x1.e7cd5cp-81f, 0x1.eaeb88p-126f,
     0x1.e45b58p-25f, 0.0f, 0.0f, 0.0f, 0x1.349676p-97f, 0x1.e038f2p-118f,
     0x1.5713dp-76f, 0x1.fbb9cap-101f, 0.0f, 0.0f, 0.0f, 0x1.cba3a4p-89f,
     0x1.18fc7ap-49f, 0.0f, 0.0f, 0.0f, 0x1.0b385p-23f, 0x1.382268p-57f,
     0x1.e2814ep-24f, 0x1.9bba44p-34f, 0.0f, 0x1.5bdd8cp-123f, 0x1.9f4252p-121f,
     0x1.ca7e14p-44f, 0.0f, 0.0f, 0x1.655e5ep-35f, 0.0f, 0.0f, 0x1.3b11bap-20f,
     0x1.d04dbp-14f, 0.0f, 0x1.080506p-43f, 0x1.6b595cp-126f, 0x1.96a3f6p-86f, 0.0f,
     0.0f, 0x1.fe7b7ep-76f, 0.0f, 0x1.d23f48p-61f, 0.0f, 0x1.fb911ep-44f, 0.0f,
     0x1.cc0d9cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.385852p-13f, 0x1.84b56ap-124f,
     0x1.b57534p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0861a4p-109f, 0.0f,
     0x1.fadf42p-116f, 0.0f, 0.0f, 0.0f, 0x1.9b763p-48f
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
            tmp1 = Sleef_finz_sqrtf1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sqrtf1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf1_u05purecfma bench acc %a\n", global_bench_acc);
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
