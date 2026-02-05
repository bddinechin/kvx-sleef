/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floorf1_purecfma.c --function Sleef_floorf1_purecfma \
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
     0.0f, 0.0f, 0x1.faa996p-26f, 0x1.1ab5c2p-61f, 0.0f, 0x1.f00a08p-119f, 0.0f,
     0x1.1e27d8p-32f, 0x1.c3354ap-106f, 0.0f, 0.0f, 0x1.938268p-126f, 0x1.aa8fd4p-38f,
     0x1.08ebc8p-79f, 0.0f, 0x1.7ca5dcp-29f, 0x1.3e008ep-122f, 0.0f, 0.0f,
     0x1.31e22cp-120f, 0x1.f08a5ep-91f, 0.0f, 0x1.9aaebep-8f, 0x1.d5fc6p-36f, 0.0f,
     0x1.6f0ea2p-75f, 0x1.edda48p-2f, 0.0f, 0x1.aa1de4p-108f, 0x1.dc53eep-34f, 0.0f,
     0.0f, 0x1.123a64p-61f, 0x1.bccc94p-54f, 0x1.91da72p-42f, 0x1.48160cp-11f,
     0x1.0b766cp-125f, 0.0f, 0.0f, 0x1.ccfe56p-105f, 0.0f, 0.0f, 0x1.e58272p-12f,
     0.0f, 0x1.e05dbep-11f, 0x1.39f9d6p-111f, 0.0f, 0x1.410792p-88f, 0.0f,
     0x1.fac828p-73f, 0x1.083f84p-39f, 0x1.a3eaa4p-37f, 0.0f, 0x1.d2eefep-111f, 0.0f,
     0.0f, 0.0f, 0x1.585326p-9f, 0.0f, 0x1.efc96cp-92f, 0x1.89c192p-125f, 0.0f, 0.0f,
     0.0f, 0x1.2dd604p-52f, 0x1.f7ad14p-57f, 0.0f, 0x1.6a5db6p-102f, 0x1.1393e8p-81f,
     0x1.28814cp-113f, 0x1.dc3b5p-29f, 0x1.5c98f2p-32f, 0x1.46c39cp-86f, 0.0f,
     0x1.af6ea4p-51f, 0x1.acd65ep-105f, 0.0f, 0x1.51ef82p-35f, 0.0f, 0.0f,
     0x1.cdbf6ep-2f, 0.0f, 0.0f, 0x1.278dc4p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4152cap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f7b8p-65f, 0x1.21cf92p-97f, 0.0f,
     0x1.703414p-60f, 0x1.edd578p-7f, 0.0f, 0x1.d7ca52p-45f, 0x1.e430b2p-85f,
     0x1.4fc78cp-119f, 0.0f, 0.0f, 0.0f, 0x1.fd8b26p-27f, 0x1.e1057ep-33f, 0.0f,
     0x1.63dd9cp-4f, 0x1.c26afp-89f, 0x1.9457eep-116f, 0.0f, 0x1.b55258p-30f,
     0x1.5519a8p-70f, 0.0f, 0.0f, 0x1.bb92ecp-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.edccbp-28f, 0x1.e03564p-19f, 0.0f, 0x1.a12a24p-109f, 0x1.5490e6p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bcd6b4p-82f, 0.0f, 0.0f, 0x1.1febd2p-50f, 0.0f,
     0x1.b9342ep-54f, 0.0f, 0x1.6161e2p-58f, 0.0f, 0.0f, 0.0f, 0x1.df54ecp-51f, 0.0f,
     0x1.663b46p-28f, 0x1.44d3eap-91f, 0.0f, 0.0f, 0x1.887496p-43f, 0x1.7ca65p-114f,
     0.0f, 0x1.c1e7fep-31f, 0.0f, 0.0f, 0x1.1ac22p-31f, 0.0f, 0x1.a2faaep-74f, 0.0f,
     0x1.35bd38p-18f, 0.0f, 0.0f, 0x1.b3ad12p-109f, 0.0f, 0.0f, 0x1.a863c2p-102f,
     0x1.cd6522p-123f, 0.0f, 0x1.ecab78p-126f, 0.0f, 0.0f, 0x1.92ffecp-38f,
     0x1.e0761ap-9f, 0.0f, 0x1.8edd1ep-77f, 0.0f, 0.0f, 0.0f, 0x1.67c994p-56f,
     0x1.b25972p-110f, 0x1p0f, 0.0f, 0x1.a22adp-73f, 0x1.e85ac8p-104f,
     0x1.ba8744p-32f, 0x1.2ad57ap-62f, 0x1.528b34p-41f, 0.0f, 0x1.d6a7aep-35f,
     0x1.afe7f8p-52f, 0x1.9c4b9cp-26f, 0x1.bd2752p-89f, 0x1.bd9bf4p-48f, 0.0f, 0.0f,
     0x1.889638p-56f, 0x1.f2af2ep-90f, 0x1.99dc26p-109f, 0.0f, 0x1.997e26p-16f, 0.0f,
     0.0f, 0.0f, 0x1.7c6f82p-45f, 0.0f, 0.0f, 0.0f, 0x1.77e106p-68f, 0.0f,
     0x1.5d1deep-103f, 0x1.0f5a94p-16f, 0x1.cd16bcp-34f, 0x1.5a08b4p-101f, 0.0f, 0.0f,
     0.0f, 0x1.1ae822p-46f, 0.0f, 0.0f, 0x1.e80a22p-74f, 0.0f, 0x1.87b1fap-93f, 0.0f,
     0x1.3a983ap-97f, 0.0f, 0x1.51bdb4p-18f, 0x1.1e66dap-86f, 0x1.850ff4p-77f, 0.0f,
     0.0f, 0x1.73b046p-85f, 0x1.82aa6cp-79f, 0x1.7e4926p-103f, 0x1.8f43c2p-57f,
     0x1.d16416p-126f, 0x1.a48db2p-90f, 0.0f, 0.0f, 0.0f, 0x1.30230ap-4f,
     0x1.eeb728p-4f, 0x1.5517bp-5f, 0x1.4d204ep-26f, 0x1p0f, 0x1.c3764p-40f,
     0x1.8c4216p-66f, 0.0f, 0x1.ba73a6p-18f, 0x1.02a088p-15f, 0x1.94f0d6p-88f,
     0x1.b2155p-113f, 0.0f, 0.0f, 0.0f, 0x1.027d6ap-49f, 0.0f, 0x1.11ff6p-39f, 0.0f,
     0x1.c07a4ap-48f, 0x1.efb736p-14f, 0x1.f5f9bap-111f, 0x1.4c115p-76f,
     0x1.8e1848p-107f, 0x1.2ea8d4p-119f, 0x1.44b57p-103f, 0.0f, 0.0f, 0x1.6497dp-52f,
     0x1.c3ad42p-80f, 0x1.d82c14p-114f, 0x1.84f3cep-30f, 0.0f, 0x1.dbbcd6p-60f, 0.0f,
     0.0f, 0x1.d0c9p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a623fep-97f, 0x1.88909p-78f,
     0x1.1661c8p-111f, 0.0f, 0x1.cafe14p-12f, 0.0f, 0.0f, 0x1.958978p-30f,
     0x1.30b53p-76f, 0x1.596766p-112f, 0x1.155e34p-87f, 0x1.33d4b8p-37f, 0.0f,
     0x1.9df288p-65f, 0x1.93fee4p-109f, 0x1.f6ccb8p-121f, 0x1.debb84p-74f, 0.0f, 0.0f,
     0x1.9c1e6ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2f552p-34f, 0.0f, 0.0f,
     0x1.a77338p-34f, 0x1.1df7c6p-90f, 0x1.5680d6p-77f, 0.0f, 0x1.11fb72p-80f, 0.0f,
     0.0f, 0x1.6c1786p-101f, 0x1.14cebp-122f, 0.0f, 0.0f, 0.0f, 0x1.1251aep-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.697768p-103f, 0.0f,
     0x1.d854e2p-101f, 0.0f, 0.0f, 0.0f, 0x1.390a7ep-113f, 0.0f, 0.0f, 0.0f,
     0x1.aec62p-103f, 0.0f, 0.0f, 0x1.edcc4p-86f, 0x1.414becp-52f, 0x1.ef8066p-1f,
     0.0f, 0.0f, 0.0f, 0x1.7aed28p-82f, 0.0f, 0x1.a62752p-48f, 0.0f, 0.0f,
     0x1.c3ab76p-88f, 0x1.47cc56p-115f, 0x1.d969dep-45f, 0.0f, 0x1.001a52p-84f,
     0x1.bf5ef2p-73f, 0x1.e6ee9ap-106f, 0x1.c5dc5cp-125f, 0.0f, 0x1.fed7ccp-34f, 0.0f,
     0.0f, 0x1.c6dc6ep-117f, 0x1.1ab1ap-85f, 0.0f, 0.0f, 0x1.9a506p-109f,
     0x1.a5bba6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e30436p-41f, 0.0f,
     0x1.18d032p-63f, 0x1.48b94ep-88f, 0.0f, 0x1.e4e11cp-21f, 0x1.e6be2ap-74f,
     0x1.138662p-7f, 0x1.f9b454p-5f, 0.0f, 0.0f, 0.0f, 0x1.413344p-43f, 0.0f, 0.0f,
     0x1.e3f2e8p-51f, 0.0f, 0.0f, 0x1.a0e488p-119f, 0x1.08ce2cp-49f, 0.0f, 0.0f,
     0x1.3883p-52f, 0.0f, 0.0f, 0.0f, 0x1.3897a6p-81f, 0.0f, 0.0f, 0x1.f73f16p-78f,
     0.0f, 0x1.ffad48p-41f, 0.0f, 0x1.097492p-59f, 0x1.e96038p-4f, 0x1.fa7e2p-13f,
     0x1.bd8946p-80f, 0x1.7e8fc2p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d25ea6p-18f,
     0.0f, 0x1.d5012ep-109f, 0.0f, 0x1.6473e2p-5f, 0.0f, 0x1.4e6b9p-99f, 0.0f, 0.0f,
     0.0f, 0x1.fcd34ap-24f, 0x1.482858p-122f, 0.0f, 0x1.08e03ap-99f, 0x1.cfa69ap-70f,
     0x1.766c62p-90f, 0.0f, 0.0f, 0x1.cc5e4ap-5f, 0x1.0777a6p-58f, 0x1.09254ep-64f,
     0.0f, 0.0f, 0.0f, 0x1.12bb6ep-27f, 0.0f, 0x1.ac3b9p-109f, 0.0f, 0x1p0f, 0.0f,
     0x1.55a768p-32f, 0x1.5d6116p-70f, 0.0f, 0.0f, 0x1.029a8ap-59f, 0.0f,
     0x1.7c671cp-52f, 0.0f, 0x1.2bb692p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18f928p-67f, 0.0f, 0x1.453d26p-60f, 0.0f, 0.0f, 0x1.9f5a3p-97f, 0.0f, 0.0f,
     0.0f, 0x1.6e6e6ap-112f, 0x1.97eeep-117f, 0x1.9f01e8p-123f, 0x1.e9db04p-2f, 0.0f,
     0x1.6dae5cp-29f, 0.0f, 0x1.2160e2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb74acp-7f, 0.0f, 0.0f, 0x1.1d2bdep-28f, 0x1.9e7cccp-125f, 0.0f,
     0x1.5fb954p-48f, 0.0f, 0.0f, 0x1.6a541ep-91f, 0.0f, 0.0f, 0x1.3d0dd8p-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.caecb6p-46f, 0.0f, 0.0f, 0x1.caf4bp-94f, 0x1.8a176ap-113f,
     0.0f, 0.0f, 0x1.2c931p-84f, 0.0f, 0x1.c206e4p-113f, 0x1.61933cp-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9084cp-70f, 0x1.6780fcp-45f, 0x1.de3c5cp-19f,
     0x1.0542bep-86f, 0x1.5a7ecp-33f, 0.0f, 0x1.80df3p-62f, 0.0f, 0x1.7089b8p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4437aep-71f, 0x1.b43fa6p-30f, 0.0f, 0x1.e260fcp-43f,
     0.0f, 0x1.4f4b62p-84f, 0.0f, 0.0f, 0.0f, 0x1.b3ca9p-52f, 0x1.34076ap-93f,
     0x1.1a732cp-101f, 0x1.1ac7fep-91f, 0.0f, 0x1.7b0b28p-13f, 0x1.c9266cp-21f,
     0x1.00dde6p-61f, 0.0f, 0x1.3bfdeep-97f, 0x1.beddb8p-8f, 0x1.a726d6p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.527e2ap-118f, 0x1.7f0dd4p-65f, 0x1.29e884p-110f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7971p-36f, 0.0f, 0.0f,
     0x1.094ea4p-99f, 0x1.cd481cp-32f, 0.0f, 0.0f, 0x1.ddb0c8p-73f, 0x1.67d2a6p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5b278p-68f, 0.0f, 0.0f, 0x1.d3e494p-7f,
     0x1.c3b6dp-19f, 0x1.410ebep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae99acp-61f, 0x1.9e894ap-84f, 0.0f, 0.0f, 0x1.a401fap-76f, 0.0f, 0.0f,
     0x1.215f44p-64f, 0.0f, 0.0f, 0.0f, 0x1.61739p-40f, 0.0f, 0x1.c5f9d6p-7f,
     0x1.a6f128p-107f, 0.0f, 0.0f, 0x1.085f16p-73f, 0.0f, 0x1.8519d2p-36f, 0.0f, 0.0f,
     0x1.a94f9ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.419ec6p-9f, 0x1.cd4f78p-6f, 0.0f,
     0x1.d0aed2p-123f, 0.0f, 0.0f, 0x1.b92accp-69f, 0x1.4c7934p-50f, 0.0f,
     0x1.760486p-61f, 0.0f, 0x1.17f9a4p-126f, 0x1.528096p-40f, 0.0f, 0x1.08b19p-104f,
     0.0f, 0x1.92c324p-126f, 0.0f, 0.0f, 0x1.6adeacp-86f, 0.0f, 0x1.508ec6p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.15e99cp-92f, 0x1.9380fap-72f, 0.0f, 0x1.d424fep-8f,
     0.0f, 0x1.bb418p-55f, 0x1.52ebdep-70f, 0x1.1381b2p-30f, 0.0f, 0x1.1f336cp-100f,
     0x1.b1c368p-121f, 0x1.7ef52p-47f, 0.0f, 0x1.e15476p-30f, 0.0f, 0x1.12e9d4p-59f,
     0x1.ebb5a6p-32f, 0x1.2c2972p-122f, 0x1.db5d24p-9f, 0x1.7811eap-72f,
     0x1.733d18p-43f, 0.0f, 0x1.16c10ap-8f, 0x1.bed09p-42f, 0.0f, 0.0f,
     0x1.9ebc5ep-102f, 0.0f, 0.0f, 0.0f, 0x1.e97786p-93f, 0.0f, 0.0f, 0.0f,
     0x1.796b1ap-46f, 0x1.18f772p-81f, 0x1.2d4e76p-99f, 0x1.784e86p-43f,
     0x1.11a72cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4c5fep-21f, 0x1.6c1e4cp-80f,
     0.0f, 0.0f, 0.0f, 0x1.1287c4p-108f, 0x1.8aeb74p-20f, 0.0f, 0.0f, 0.0f,
     0x1.93d142p-101f, 0x1.cfd628p-6f, 0x1.a7b064p-63f, 0x1.61d56cp-33f,
     0x1.559cf6p-41f, 0.0f, 0.0f, 0.0f, 0x1.6ad362p-57f, 0.0f, 0x1.df9d58p-71f, 0.0f,
     0.0f, 0x1.2f8e9ap-50f, 0.0f, 0.0f, 0x1.28d5e4p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.130572p-49f, 0.0f, 0x1.6a28eap-96f, 0x1.e4259ep-61f,
     0.0f, 0.0f, 0x1.74ce9p-11f, 0x1.43d7f6p-94f, 0x1.1afc86p-18f, 0.0f,
     0x1.dc476ap-50f, 0x1.8a1922p-72f, 0.0f, 0x1.b6308ap-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.264fap-78f, 0x1.d9a6ap-118f, 0.0f, 0x1.fd71f4p-81f, 0.0f,
     0x1.3bce9cp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d765ep-102f, 0.0f, 0.0f,
     0x1.627668p-113f, 0.0f, 0.0f, 0x1.3f71bep-23f, 0x1.045066p-25f, 0.0f,
     0x1.905388p-1f, 0x1.32574p-115f, 0.0f, 0.0f, 0.0f, 0x1.c0389ap-90f, 0.0f,
     0x1.98bc6ep-22f, 0.0f, 0.0f, 0.0f, 0x1.dfbe8cp-24f, 0.0f, 0.0f, 0x1.ca80d4p-59f,
     0x1.46da1p-110f, 0x1p0f, 0x1.b32e86p-86f, 0.0f, 0x1.eef56ap-74f, 0x1.ba3c48p-50f,
     0x1.5445b6p-16f, 0x1.d2d3ccp-104f, 0x1.fc87a8p-31f, 0.0f, 0x1.f1c5f4p-37f,
     0x1.3dc54ap-66f, 0.0f, 0x1.267d86p-80f, 0.0f, 0.0f, 0.0f, 0x1.21b1b8p-120f, 0.0f,
     0x1.145fe4p-87f, 0x1.525dacp-85f, 0x1.16187cp-83f, 0x1.525226p-73f, 0.0f, 0.0f,
     0x1.0f3afep-82f, 0x1.44b91cp-35f, 0.0f, 0.0f, 0x1.16534cp-94f, 0x1.d0b3aep-87f,
     0x1.63e58cp-93f, 0x1.1e2074p-79f, 0.0f, 0x1.7bd55ap-86f, 0x1.ee761ap-123f, 0.0f,
     0x1.a37716p-120f, 0.0f, 0.0f, 0.0f, 0x1.19f3d6p-92f, 0.0f, 0x1.358e54p-66f,
     0x1.da9a7cp-56f, 0x1.231ee2p-19f, 0x1.307f3cp-108f, 0.0f, 0x1.f6136ap-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.befaeep-106f, 0x1.53b874p-66f, 0x1.cd53cep-69f,
     0x1.77557cp-106f, 0x1.3ef78cp-26f, 0x1.3257fp-51f, 0x1.ab3adcp-108f,
     0x1.a3f09cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57c698p-105f,
     0x1.bbe6fep-61f, 0x1.43f3f4p-15f, 0x1.75fca8p-40f, 0.0f, 0.0f, 0x1.8b94a2p-46f,
     0x1.539a14p-28f, 0.0f, 0.0f, 0.0f, 0x1.9240fp-103f, 0x1.9f2ba6p-38f, 0.0f, 0.0f,
     0.0f, 0x1.d96e3p-70f, 0x1.bc11f2p-9f, 0x1.059c92p-107f, 0.0f, 0x1.19298p-50f,
     0x1.93275ep-104f, 0x1.0d5bap-18f, 0.0f, 0.0f, 0x1.c723f8p-32f, 0.0f,
     0x1.a81b4cp-2f, 0.0f, 0x1.97f608p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.434426p-61f,
     0.0f, 0x1.b0942ap-119f, 0.0f, 0x1.27e4b4p-7f, 0x1.1e2b68p-80f, 0.0f,
     0x1.21269p-10f, 0x1.7d8baep-44f, 0x1.4ab90cp-46f, 0.0f, 0x1.23518p-85f, 0.0f,
     0.0f, 0x1.dd767p-56f, 0.0f, 0.0f, 0x1.548268p-94f, 0x1.58c43ep-72f,
     0x1.8be11cp-63f, 0.0f, 0x1.6fff12p-86f, 0.0f, 0x1.400366p-68f, 0.0f,
     0x1.e52698p-1f, 0x1.5bb0fep-58f, 0.0f, 0.0f, 0x1.b1c718p-92f, 0x1.986da6p-44f,
     0.0f, 0.0f, 0x1.873bap-92f, 0.0f, 0.0f, 0.0f, 0x1.7a0a7ap-121f, 0x1.af629p-91f,
     0.0f, 0.0f, 0x1.6140a6p-103f, 0x1.68caeap-24f, 0x1.fc2f9p-103f, 0.0f,
     0x1.177aa2p-103f, 0x1.b80ecp-89f, 0.0f, 0.0f, 0x1.1d57dap-3f, 0x1.fb6ebp-83f,
     0.0f, 0x1.c485dap-75f, 0x1.020f1ep-23f, 0.0f, 0x1.b6dc8cp-69f, 0.0f,
     0x1.06b2eap-118f, 0.0f, 0x1.f0f308p-5f, 0x1.6997b2p-101f, 0x1.5e2ff8p-76f, 0.0f,
     0.0f, 0.0f, 0x1.cc7de8p-13f, 0x1.a68dbcp-90f, 0x1.77dadcp-15f, 0x1.f16498p-63f,
     0x1.c524f4p-27f, 0x1.11525ap-93f, 0x1.b9f92ap-59f, 0x1.84f898p-58f, 0.0f, 0.0f,
     0x1.604512p-110f, 0x1.3185acp-70f, 0x1.475f08p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.43a342p-64f, 0.0f, 0.0f, 0x1.4e190ep-37f, 0.0f, 0x1.b77e2p-50f,
     0x1.e4ffeep-52f, 0x1.d4bf9p-1f, 0.0f, 0.0f, 0.0f, 0x1.b0f962p-90f,
     0x1.1b718ap-108f, 0x1.33509ap-125f, 0x1.f0841cp-74f, 0x1.04c3p-114f, 0.0f, 0.0f,
     0x1.6ba49p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5bb14p-65f,
     0x1.7be5cap-118f, 0.0f, 0x1.9851d4p-39f, 0x1.9e3aaep-18f, 0x1.1ac0acp-36f, 0.0f,
     0x1.dcdc88p-16f, 0.0f
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
            tmp1 = Sleef_floorf1_purecfma(tmp0);
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
    printf("Sleef_floorf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_floorf1_purecfma bench acc %a\n", global_bench_acc);
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
