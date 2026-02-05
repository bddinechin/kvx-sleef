/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf4_u10avx2128.c --function Sleef_sinf4_u10avx2128 --headers \
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
     0x1.7be484p-83f, 0.0f, 0.0f, 0x1.a9b1f4p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.336ea6p-3f, 0x1.c345f8p-17f, 0x1.b1a3e2p-50f, 0x1.6f5856p-47f, 0.0f,
     0x1.864b52p-125f, 0x1.6ff45cp-51f, 0x1.44dcf8p-117f, 0x1.021c92p-80f, 0.0f,
     0x1.ad6366p-99f, 0x1.ae1f5p-31f, 0x1.c3fb34p-26f, 0x1.f55bcep-98f,
     0x1.dde364p-48f, 0.0f, 0x1.9e552ep-91f, 0.0f, 0x1.e807ap-17f, 0x1.dbbcp-96f,
     0.0f, 0x1.489b3ap-59f, 0.0f, 0.0f, 0x1.504ceap-11f, 0.0f, 0x1.7d4b94p-44f,
     0x1.1c23f4p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49c884p-1f, 0x1.aaaf7cp-91f,
     0x1.821ffap-107f, 0.0f, 0x1.65ef12p-21f, 0.0f, 0.0f, 0.0f, 0x1.3ccd5cp-124f,
     0x1.1f1526p-48f, 0.0f, 0.0f, 0x1.9ddc3ap-92f, 0x1.b4958ap-75f, 0.0f, 0.0f, 0.0f,
     0x1.b63734p-122f, 0x1.192fa2p-8f, 0.0f, 0.0f, 0x1.bb29fap-98f, 0x1.aa28f2p-114f,
     0x1.336e2p-56f, 0x1.c695dp-56f, 0x1.49d488p-29f, 0x1.37ea1ep-6f, 0x1.a3195p-58f,
     0.0f, 0x1.dc7808p-13f, 0x1.c5ae7ep-86f, 0x1.94797p-69f, 0.0f, 0.0f, 0.0f,
     0x1.1876fcp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5fabp-34f, 0.0f,
     0x1.b1bd56p-66f, 0x1.d80fdcp-76f, 0x1.9eb91ep-21f, 0.0f, 0x1.eacedp-25f, 0.0f,
     0x1.f5c8a2p-83f, 0.0f, 0x1.40b75ap-70f, 0.0f, 0.0f, 0x1.0e9ed6p-11f, 0.0f, 0.0f,
     0x1.5ab0b6p-17f, 0.0f, 0.0f, 0.0f, 0x1.2734a2p-11f, 0.0f, 0.0f, 0x1.44df7ep-102f,
     0.0f, 0x1.3a4092p-42f, 0x1.8c839ep-77f, 0.0f, 0x1.625864p-13f, 0.0f,
     0x1.95af28p-95f, 0.0f, 0x1.5b0c88p-37f, 0.0f, 0x1.cb9f26p-65f, 0.0f, 0.0f,
     0x1.238f4ap-97f, 0x1.0f15dap-105f, 0x1.98d706p-79f, 0x1p0f, 0x1.daeb16p-92f,
     0x1.5a496cp-111f, 0x1.edc2dep-21f, 0x1.3a1418p-116f, 0.0f, 0x1.7ddcf6p-86f, 0.0f,
     0x1.3a3f72p-88f, 0.0f, 0x1.89e86cp-78f, 0x1.c4412cp-62f, 0.0f, 0x1.665b62p-34f,
     0.0f, 0.0f, 0x1.f4e502p-86f, 0x1.690a54p-86f, 0.0f, 0x1.8c06f2p-53f, 0.0f,
     0x1.bb809ep-59f, 0x1.898668p-83f, 0.0f, 0.0f, 0.0f, 0x1.e06e48p-63f, 0.0f,
     0x1.5b01e2p-43f, 0.0f, 0.0f, 0.0f, 0x1.555a04p-55f, 0x1.8903p-12f,
     0x1.22e918p-27f, 0x1.0f94ccp-96f, 0x1.6ad55ep-89f, 0.0f, 0x1.c3d162p-83f,
     0x1.f1053cp-121f, 0x1.28193ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38c13p-67f,
     0x1.bb9bbap-19f, 0x1.f7b1acp-34f, 0.0f, 0.0f, 0.0f, 0x1.c24b0ep-5f, 0.0f,
     0x1.6ef78p-110f, 0x1.b3f8ep-23f, 0x1.104484p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ac4536p-4f, 0x1.592602p-48f, 0x1.492504p-97f,
     0x1.266afep-34f, 0x1.462b1ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e16f6p-107f, 0.0f,
     0x1.8bda38p-109f, 0.0f, 0x1.3bea4ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d33dacp-90f, 0.0f, 0.0f, 0x1.4d4224p-57f, 0.0f, 0.0f, 0x1.b8056ap-30f,
     0x1.e1ddcap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16b11cp-54f, 0x1.52298ep-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34313cp-45f, 0.0f, 0.0f, 0x1.2086aep-42f,
     0x1.beba56p-33f, 0x1.35c502p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c1c78p-52f, 0x1.3a2fe6p-94f, 0.0f, 0x1.8f53fcp-32f, 0.0f, 0.0f,
     0x1.eee91cp-108f, 0x1.5a78fep-10f, 0x1.722c84p-37f, 0.0f, 0.0f, 0x1.288376p-67f,
     0x1.dbf1f6p-105f, 0.0f, 0.0f, 0x1.2f59a8p-82f, 0.0f, 0x1.2524b2p-121f,
     0x1.6be104p-24f, 0.0f, 0x1.97ebaep-58f, 0x1.fbf4a8p-20f, 0x1.838864p-37f, 0.0f,
     0.0f, 0x1.8fbf7cp-25f, 0.0f, 0x1.3481d2p-64f, 0x1.904e96p-69f, 0.0f,
     0x1.d695d4p-120f, 0.0f, 0.0f, 0x1.9522c4p-119f, 0x1.5cf3dep-34f,
     0x1.f8686ap-120f, 0x1.34f19ep-82f, 0x1.ae9c5ep-57f, 0x1.877e02p-31f, 0.0f,
     0x1.9b9eeap-67f, 0.0f, 0x1.e90266p-99f, 0x1.d76b24p-26f, 0.0f, 0x1.888a66p-21f,
     0x1.a267bp-66f, 0.0f, 0x1.13a3bp-41f, 0x1.bfc4fep-42f, 0.0f, 0.0f,
     0x1.7bc8bap-67f, 0.0f, 0.0f, 0.0f, 0x1.247efep-9f, 0.0f, 0x1.90b52ap-122f, 0.0f,
     0x1.e21216p-47f, 0x1.a7e7ap-20f, 0.0f, 0x1.6f7b86p-73f, 0.0f, 0.0f,
     0x1.d8b1e4p-92f, 0x1.09b3fcp-7f, 0x1.2bdf56p-5f, 0x1.eaafb8p-3f, 0x1.9d8b1ap-84f,
     0x1.8df446p-74f, 0.0f, 0x1.35e212p-121f, 0.0f, 0x1.c7fe2ep-38f, 0x1.3dd586p-90f,
     0.0f, 0.0f, 0x1.834f5cp-43f, 0.0f, 0.0f, 0.0f, 0x1.c2d7bap-48f, 0.0f,
     0x1.814ffep-104f, 0x1.cf62a2p-102f, 0x1.4b548ap-19f, 0x1.48962p-71f,
     0x1.fb9cbp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59e116p-57f, 0x1.0b4b7cp-117f,
     0x1.e3fe48p-14f, 0x1.3c572cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb988ap-6f,
     0x1.d5c834p-41f, 0x1.96a38cp-46f, 0x1.b5f2fap-73f, 0.0f, 0x1.8f6bbep-100f, 0.0f,
     0.0f, 0x1.b9a4ecp-124f, 0x1.416b78p-32f, 0x1.307be8p-87f, 0x1.fd8efp-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.630b02p-9f, 0x1.effdaep-46f, 0x1.2ac0bep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4f2344p-112f, 0.0f, 0x1.7b5f92p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97aaa8p-51f, 0.0f, 0.0f, 0x1.3ec3ap-83f, 0.0f, 0.0f, 0.0f, 0x1.e95332p-8f,
     0x1.833a12p-52f, 0.0f, 0.0f, 0.0f, 0x1.4864p-25f, 0.0f, 0x1.ec7348p-108f,
     0x1.f8a9a6p-122f, 0x1.8453bcp-30f, 0.0f, 0.0f, 0.0f, 0x1.1e70b4p-84f, 0.0f,
     0x1.780102p-126f, 0.0f, 0.0f, 0x1.2e501ep-28f, 0.0f, 0x1.b1e808p-58f,
     0x1.91ff3cp-93f, 0x1.e94e5ep-38f, 0.0f, 0x1.4d849ep-56f, 0x1.5bee42p-81f,
     0x1.de4e8ap-5f, 0.0f, 0x1.f77e38p-48f, 0x1.73f962p-72f, 0x1.6b5094p-80f, 0.0f,
     0x1.b825b2p-16f, 0.0f, 0x1.6177eep-61f, 0.0f, 0.0f, 0x1.dd2496p-57f, 0.0f, 0.0f,
     0x1.1aae46p-68f, 0x1.c399c6p-40f, 0x1.3bd9cp-78f, 0x1.a156c4p-23f, 0.0f,
     0x1.15508cp-21f, 0.0f, 0x1.34d006p-57f, 0x1.8af3b8p-15f, 0x1.9124ccp-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3b4392p-120f, 0x1.44be0ep-94f, 0x1.47cffp-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5372dp-41f, 0x1.254654p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1928ccp-44f, 0.0f, 0.0f, 0.0f, 0x1.de4a3p-118f, 0.0f, 0.0f, 0x1.fe6a9ap-122f,
     0x1.86538p-58f, 0x1.7a2f48p-49f, 0x1.be72b6p-44f, 0.0f, 0x1.16d346p-9f,
     0x1.94c128p-4f, 0x1.c35c64p-8f, 0.0f, 0x1.c8e074p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99de18p-73f, 0.0f, 0x1.ec055ap-18f, 0.0f, 0.0f, 0.0f, 0x1.8ab948p-90f,
     0x1.d73e3ap-33f, 0.0f, 0.0f, 0x1.2d0cc4p-62f, 0x1.4d2c7cp-26f, 0x1.afb72ap-56f,
     0x1.8ccf6cp-41f, 0x1.82b424p-15f, 0.0f, 0.0f, 0x1.b0e966p-83f, 0.0f,
     0x1.71d6fcp-14f, 0.0f, 0.0f, 0x1.eac47p-117f, 0x1.16636cp-102f, 0.0f,
     0x1.93da58p-85f, 0.0f, 0x1.54d1f8p-28f, 0.0f, 0x1.e9635ap-91f, 0x1.43c582p-13f,
     0x1.7bb834p-94f, 0x1.d4a574p-110f, 0.0f, 0x1.7d8428p-71f, 0.0f, 0x1.c8afbap-76f,
     0x1.25673cp-75f, 0x1.cca9bap-4f, 0x1.69dfeap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.911684p-50f, 0x1.1f9b92p-75f, 0x1.e15bf6p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa8f12p-108f, 0x1.fae12cp-59f, 0.0f, 0x1.47dba2p-47f, 0.0f, 0.0f,
     0x1.fbf9b8p-105f, 0x1.0c93fcp-74f, 0x1.99cafep-5f, 0.0f, 0x1.7f53ep-86f, 0.0f,
     0.0f, 0.0f, 0x1.5b79bep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4d1b8p-72f,
     0x1.d48eb4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12a80ap-68f,
     0x1.a0ee2ep-53f, 0.0f, 0.0f, 0x1.6ee37cp-44f, 0.0f, 0.0f, 0.0f, 0x1.962af6p-17f,
     0x1.e364p-62f, 0x1.34af8p-91f, 0.0f, 0.0f, 0x1.c6f158p-5f, 0x1.936b2ep-63f,
     0x1.796b6ep-11f, 0.0f, 0.0f, 0.0f, 0x1.bc538p-110f, 0.0f, 0x1.e92048p-80f,
     0x1.94acb2p-56f, 0.0f, 0.0f, 0x1.499922p-80f, 0x1.1f3b74p-55f, 0.0f, 0.0f, 0.0f,
     0x1.0beaep-15f, 0x1.4c2a78p-16f, 0x1.cc057p-119f, 0x1.19abf4p-57f,
     0x1.69aa72p-95f, 0x1.a52224p-96f, 0x1.13e778p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bf0f6p-41f, 0x1.1488c4p-43f, 0x1.9be6fep-2f, 0.0f, 0.0f, 0.0f,
     0x1.9ddd8ap-82f, 0x1.22acaep-58f, 0x1.69ad22p-44f, 0x1.f34c16p-22f, 0.0f,
     0x1.e7206ap-39f, 0x1.279edap-27f, 0x1.4f23fep-97f, 0x1.313d3ep-108f,
     0x1.33c7f8p-123f, 0.0f, 0.0f, 0x1.f5cbe6p-77f, 0.0f, 0.0f, 0x1.7d2368p-31f, 0.0f,
     0x1.41d1cp-6f, 0x1.3783cep-83f, 0.0f, 0.0f, 0.0f, 0x1.130446p-46f,
     0x1.3bc508p-123f, 0x1.3b44a2p-72f, 0x1.161098p-80f, 0.0f, 0x1.a9c5eap-113f,
     0x1.fa6a66p-120f, 0.0f, 0x1.915f6ap-122f, 0.0f, 0x1.91de96p-53f, 0x1.0a2bbp-102f,
     0.0f, 0x1.06ef02p-95f, 0.0f, 0.0f, 0x1.de4becp-114f, 0x1.9c178cp-67f,
     0x1.095b8p-62f, 0x1.0e487p-6f, 0.0f, 0.0f, 0.0f, 0x1.aa5ae8p-12f, 0.0f, 0.0f,
     0x1.8f5f0ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de00eep-91f, 0.0f, 0x1.d27446p-52f,
     0.0f, 0x1.1a635ep-9f, 0x1.c144a4p-65f, 0x1.27bc76p-25f, 0.0f, 0.0f, 0.0f,
     0x1.94bb9ap-59f, 0.0f, 0.0f, 0x1.181f3p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b8d02p-84f, 0x1p0f, 0x1.537ac6p-7f, 0.0f, 0x1.5d5f2ap-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.32e61ap-12f, 0x1.c3ff06p-96f, 0x1.43a67ap-84f, 0x1.263414p-8f, 0.0f,
     0x1.601eeap-13f, 0.0f, 0x1.6ae2cep-104f, 0.0f, 0x1.ee7154p-50f, 0x1.b79a44p-88f,
     0x1.0959bp-10f, 0x1.b849e4p-3f, 0x1.d6faf8p-49f, 0x1.a93502p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5639cep-103f, 0x1.89d096p-24f, 0.0f, 0.0f,
     0x1.ac4994p-62f, 0x1.40f8fap-9f, 0x1.65d88ep-53f, 0x1.bcfe8ep-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aca652p-104f, 0x1.16ad5cp-123f, 0x1.394f08p-113f,
     0x1.6b271cp-36f, 0x1.c5199cp-99f, 0.0f, 0.0f, 0.0f, 0x1.3d398ep-93f, 0.0f,
     0x1.3c9226p-53f, 0x1.3fbdbcp-40f, 0x1.effca4p-84f, 0.0f, 0x1.e84da2p-57f,
     0x1.ac073p-23f, 0x1.5522ecp-108f, 0x1.1d3c7ap-90f, 0x1.84b01ep-25f, 0.0f,
     0x1.c9bbd6p-94f, 0x1.2e6578p-67f, 0x1.fb7458p-1f, 0.0f, 0x1.7a1cdep-122f,
     0x1.57af66p-33f, 0.0f, 0x1.036406p-83f, 0x1.7b31e8p-27f, 0x1.898426p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3964c6p-51f, 0x1.56ceb8p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca738cp-42f, 0x1.f971ecp-44f, 0.0f, 0.0f, 0.0f, 0x1.395ddcp-104f, 0.0f, 0.0f,
     0x1.13ebcp-1f, 0.0f, 0.0f, 0x1.5af66ap-107f, 0.0f, 0.0f, 0x1.ed2f7ep-68f,
     0x1.774bdep-37f, 0.0f, 0.0f, 0x1.cf85bep-14f, 0x1.91e4a8p-28f, 0x1.36bfd2p-3f,
     0x1.fe407p-66f, 0.0f, 0.0f, 0x1.6a1c42p-67f, 0x1.942bc2p-78f, 0.0f, 0.0f,
     0x1.625ec8p-50f, 0x1.d930dp-4f, 0x1.773782p-42f, 0x1.7d81bap-87f,
     0x1.df4cc8p-40f, 0.0f, 0x1.0ceb82p-60f, 0x1.701accp-54f, 0.0f, 0.0f,
     0x1.03a5eap-46f, 0.0f, 0.0f, 0x1.baed6ap-108f, 0x1.12bc3ap-112f, 0.0f,
     0x1.f0d7cep-1f, 0.0f, 0.0f, 0.0f, 0x1.7690b8p-122f, 0x1.6f4c88p-121f,
     0x1.95659ap-121f, 0x1.0f58ccp-86f, 0.0f, 0x1.a2d9f8p-15f, 0x1.2e65e4p-60f,
     0x1.864ddcp-41f, 0x1p0f, 0.0f, 0x1.926c84p-9f, 0x1.52c6b8p-76f, 0x1.035b4ap-114f,
     0x1.12a702p-24f, 0.0f, 0x1.3b0164p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff8ffep-77f,
     0.0f, 0x1.983f78p-39f, 0x1.aaf112p-43f, 0x1.7022bap-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5bd5fap-7f, 0x1.4ed926p-44f, 0x1.2b8b4cp-125f, 0.0f,
     0x1.c19c22p-31f, 0x1.66b1dcp-13f, 0.0f, 0.0f, 0.0f, 0x1.1cc432p-100f,
     0x1.ad174ap-81f, 0x1.761cf4p-41f, 0.0f, 0.0f, 0.0f, 0x1.37f606p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.adff0cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f614eep-111f, 0.0f,
     0x1.86f568p-41f, 0x1.39b964p-103f, 0.0f, 0.0f, 0x1.c8b74p-60f, 0.0f, 0.0f,
     0x1.f8adb2p-98f, 0x1.0cb578p-108f, 0x1.b17274p-41f, 0x1.f42a96p-73f, 0.0f,
     0x1.d327ep-22f, 0x1.82fb92p-94f, 0.0f, 0.0f, 0.0f, 0x1.6f539ap-89f, 0.0f, 0.0f,
     0x1.3cc336p-67f, 0.0f, 0x1.59c226p-85f, 0x1.997c4p-126f, 0x1.2ae9c6p-99f,
     0x1.5a65eep-62f, 0x1.b73ef6p-37f, 0.0f, 0x1.54a1d4p-122f, 0x1.6b8168p-120f,
     0x1.0427c8p-84f, 0.0f, 0x1.0e1938p-77f, 0x1.9282fcp-6f, 0.0f, 0x1.41174ap-19f,
     0.0f, 0.0f, 0x1.0537f8p-80f, 0x1.2ce8a8p-110f, 0x1.aeb8e8p-1f, 0.0f, 0.0f,
     0x1.9bfe2ep-80f, 0x1.80b4cap-39f, 0x1p0f, 0x1.dcf8fap-7f, 0x1.341076p-17f, 0.0f,
     0x1.4607aap-41f, 0x1.f3782p-97f, 0x1.350e1ap-53f, 0.0f, 0x1.c3dd74p-42f,
     0x1.b58bep-115f, 0x1.439602p-65f, 0.0f, 0.0f, 0.0f, 0x1.b15aeep-114f,
     0x1.06502ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.259302p-79f, 0.0f, 0x1.1aaaccp-68f,
     0x1.508ab8p-70f, 0.0f, 0x1.8d756p-32f, 0x1.0cbe12p-44f, 0x1.c9d0a8p-87f,
     0x1.22cb02p-15f, 0.0f, 0x1.8643eep-10f, 0.0f, 0x1.3c1d3cp-61f, 0.0f, 0.0f, 0.0f,
     0x1.041d18p-72f, 0.0f, 0x1.d80414p-26f, 0x1.6b8ca6p-91f, 0x1.f9cc24p-40f,
     0x1.bd1ap-1f, 0x1.78f9d8p-79f, 0.0f, 0x1.dbba6ep-115f, 0x1.fd036p-99f, 0.0f,
     0x1.3b7bdap-109f, 0x1.e76fa8p-51f, 0x1.90bbbap-101f, 0.0f, 0.0f, 0.0f,
     0x1.ed24d8p-6f, 0x1.2614ep-94f, 0.0f, 0.0f, 0.0f, 0x1.fae90ap-102f, 0.0f,
     0x1.cf0062p-8f, 0.0f, 0x1.83a6cp-67f, 0.0f, 0.0f, 0.0f, 0x1.8fdf26p-79f, 0.0f,
     0x1.e6377ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a24a8p-106f, 0x1.d7b732p-40f,
     0x1.1069c2p-125f, 0.0f, 0x1.f13652p-41f, 0x1.332316p-42f, 0.0f, 0.0f, 0.0f,
     0x1.533ab8p-116f, 0x1.61a68p-125f, 0.0f, 0x1.62405ep-111f, 0x1.9da408p-83f,
     0x1.b3a12cp-43f, 0x1.b3667ap-111f, 0.0f, 0.0f, 0x1.cfd79p-88f, 0.0f,
     0x1.5517e2p-1f, 0.0f, 0.0f, 0x1.c6b99ep-96f, 0.0f, 0x1.4e85a2p-40f,
     0x1.935082p-66f, 0x1.3c0436p-108f, 0.0f
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
            tmp1 = Sleef_sinf4_u10avx2128(tmp0);
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
    printf("Sleef_sinf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
