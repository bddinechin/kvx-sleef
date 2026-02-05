/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf1_u35purecfma.c --function \
 *     Sleef_finz_acosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.639818p-70f, 0x1.bbc2b4p-39f, 0.0f, 0x1.26af8cp-119f,
     0x1.cf0ec4p-105f, 0x1.1035b8p-75f, 0x1.fbfd4ep-18f, 0x1.07ef36p-19f, 0.0f,
     0x1.fed4cep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b5a02p-103f, 0x1.d0f0b8p-21f,
     0x1.67947p-43f, 0.0f, 0.0f, 0x1.461fb6p-85f, 0x1.fb4f46p-88f, 0.0f, 0.0f,
     0x1.5bf20ep-15f, 0x1.bc9e86p-80f, 0x1.02ec0cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d0fb4p-106f, 0.0f, 0x1.f5947ap-62f, 0x1.89ed66p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.db2234p-47f, 0.0f, 0.0f, 0x1.63a884p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8c09cap-69f, 0.0f, 0.0f, 0x1.9f65f8p-63f, 0.0f, 0.0f, 0x1.88bf5ap-19f,
     0x1.6ab3f6p-31f, 0.0f, 0.0f, 0x1.c14f22p-82f, 0x1.3c62d6p-51f, 0x1.39b62ap-76f,
     0x1.eee54p-23f, 0x1.d21e2p-32f, 0.0f, 0.0f, 0x1.2784b4p-87f, 0x1.745868p-123f,
     0x1.3d7ec6p-121f, 0x1.17a3f2p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4517dcp-65f,
     0.0f, 0x1.138cc8p-89f, 0x1.6ae96p-91f, 0x1.18be2p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4983dcp-118f, 0x1.2fa158p-48f, 0x1.e01262p-78f, 0.0f, 0x1.942e2ap-54f,
     0x1.78cdd4p-82f, 0x1.7bb508p-16f, 0x1.0c3f1ep-31f, 0.0f, 0x1.55ca18p-20f,
     0x1.60abcep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b7ef2p-87f,
     0x1.ef4376p-60f, 0x1.295bccp-99f, 0x1.c662cep-113f, 0x1.4b7dd6p-41f, 0.0f,
     0x1.7673d8p-113f, 0x1.50e662p-30f, 0.0f, 0.0f, 0.0f, 0x1.78f5f6p-56f,
     0x1.5061f4p-34f, 0x1.0be5c2p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d30e4p-46f,
     0.0f, 0.0f, 0x1.c5e5acp-33f, 0x1.f43654p-48f, 0.0f, 0.0f, 0.0f, 0x1.b5828ep-89f,
     0.0f, 0x1.80e46cp-96f, 0x1.e6b87p-81f, 0.0f, 0x1.0846e4p-3f, 0.0f, 0.0f,
     0x1.d742c4p-32f, 0x1.48783cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb6034p-36f, 0.0f,
     0x1.a712c8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0426p-107f, 0x1.74fb5p-105f,
     0x1.b6aa0ap-43f, 0.0f, 0x1.07a618p-93f, 0x1.5350d4p-75f, 0x1.79c9cp-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.796d96p-116f, 0.0f, 0x1.e41ea6p-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64a696p-87f, 0.0f, 0x1.a104cp-9f, 0.0f, 0.0f,
     0x1.356406p-122f, 0x1.81d7cap-121f, 0.0f, 0x1.ee82c2p-71f, 0x1.f56ea8p-102f,
     0x1.6921b6p-43f, 0x1.3c417cp-84f, 0.0f, 0.0f, 0x1.97893cp-2f, 0x1.ca3696p-65f,
     0x1.6a0396p-103f, 0.0f, 0.0f, 0.0f, 0x1.253046p-51f, 0x1.3db25cp-70f, 0.0f, 0.0f,
     0x1.104b92p-124f, 0x1.d30bf8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a086ap-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.818e88p-62f, 0x1.d02138p-67f, 0.0f, 0.0f,
     0x1.32fffp-6f, 0x1.95172ep-69f, 0.0f, 0.0f, 0x1.05799ap-12f, 0.0f, 0.0f,
     0x1.56c928p-103f, 0.0f, 0x1.95a958p-106f, 0.0f, 0.0f, 0x1.825b4ep-96f, 0.0f,
     0x1.f1024ap-14f, 0x1.aba3f4p-51f, 0x1.afd08ap-49f, 0.0f, 0.0f, 0.0f,
     0x1.05efa2p-121f, 0x1.19b7d2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1395aap-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22bcfcp-75f, 0.0f, 0x1.ca3338p-50f,
     0x1.9d052p-102f, 0x1.76e46ap-26f, 0x1.89e13ep-21f, 0.0f, 0x1.592d0ap-13f, 0.0f,
     0x1.adfbbap-45f, 0.0f, 0.0f, 0x1.f9c748p-6f, 0.0f, 0.0f, 0x1.f6bc1p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1e8bap-69f, 0.0f, 0x1.13581ep-59f,
     0x1.847074p-57f, 0x1.b6cbd8p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8836cp-69f,
     0x1.ad6e14p-23f, 0.0f, 0.0f, 0x1.70cb76p-76f, 0x1.5fee7ap-49f, 0x1.e02fbep-34f,
     0.0f, 0x1.616b46p-75f, 0.0f, 0x1.f1e112p-124f, 0.0f, 0x1.c2b5d4p-87f, 0.0f,
     0x1.178ff8p-88f, 0x1.d1b24cp-40f, 0.0f, 0x1.502bf4p-120f, 0x1.9b5da8p-70f, 0.0f,
     0x1.44e894p-81f, 0x1.f45a58p-88f, 0.0f, 0x1.cc35b4p-116f, 0.0f, 0.0f, 0.0f,
     0x1.b2e928p-3f, 0x1.c7ee44p-41f, 0x1.a14a8ep-55f, 0.0f, 0x1.3e26fcp-28f,
     0x1.cd9022p-15f, 0x1.c2d6ccp-30f, 0x1.4e6cccp-5f, 0x1.1654e4p-53f, 0.0f,
     0x1.bea36ep-37f, 0x1.84343ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91471ap-72f, 0.0f,
     0.0f, 0x1.66565ep-30f, 0.0f, 0x1.c6261ap-45f, 0.0f, 0x1.5c7f28p-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b9d0d4p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d098ep-19f, 0.0f, 0.0f,
     0x1.bb7698p-96f, 0x1.720c5ap-28f, 0.0f, 0.0f, 0x1.d721eap-116f, 0x1.cbbefcp-64f,
     0.0f, 0x1.ba12c6p-39f, 0.0f, 0.0f, 0x1.22a282p-109f, 0.0f, 0x1.1858eep-17f,
     0x1.436d2ep-57f, 0x1.7793f2p-124f, 0.0f, 0x1.e126ep-3f, 0x1.bf76dcp-27f,
     0x1.e353dap-60f, 0.0f, 0x1.09e73ep-17f, 0.0f, 0.0f, 0x1.7d446ap-97f, 0.0f, 0.0f,
     0x1.554f8cp-52f, 0x1.f99646p-36f, 0.0f, 0x1.79a988p-11f, 0.0f, 0x1.37f0ep-43f,
     0x1.fe7d7ep-55f, 0x1.a715e4p-111f, 0x1.da024p-79f, 0x1.f84b54p-20f, 0.0f,
     0x1.eae62p-115f, 0.0f, 0x1.7e8e18p-15f, 0x1.3885ap-74f, 0x1.abe3dap-114f, 0.0f,
     0.0f, 0x1.86753ap-82f, 0x1.df009ap-122f, 0.0f, 0x1.623a5ap-45f, 0x1.9626f8p-16f,
     0.0f, 0x1.64af48p-101f, 0.0f, 0x1.75ff8p-23f, 0.0f, 0x1.4e58fp-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2f28fcp-78f, 0x1.399c68p-35f, 0.0f, 0.0f, 0x1.1cdb6ep-57f,
     0.0f, 0.0f, 0x1.c166a6p-104f, 0x1.b0336cp-113f, 0x1.dd4d9ep-19f, 0x1.42f0ecp-13f,
     0x1.80c128p-81f, 0.0f, 0x1.24904cp-75f, 0x1.b6fe8ap-19f, 0.0f, 0.0f,
     0x1.c8d012p-52f, 0.0f, 0x1.6f3994p-19f, 0x1.f12b46p-71f, 0.0f, 0x1.4bfc9cp-38f,
     0.0f, 0.0f, 0.0f, 0x1.5e60bep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cee136p-110f, 0.0f, 0x1.0ebd6cp-5f, 0x1.7657eap-12f, 0.0f,
     0.0f, 0.0f, 0x1.879ef4p-108f, 0.0f, 0.0f, 0.0f, 0x1.44d71ep-96f,
     0x1.51a1fcp-125f, 0.0f, 0x1.8fec5ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ee9f8p-43f,
     0x1.8769e2p-97f, 0.0f, 0.0f, 0x1.d4454ep-122f, 0x1.ef4e9ep-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.035c06p-4f, 0.0f, 0.0f, 0x1.55a76ep-13f, 0x1.176014p-45f,
     0x1.aaa1a4p-16f, 0.0f, 0.0f, 0x1.eb2192p-90f, 0x1.041aa2p-42f, 0.0f, 0.0f,
     0x1.4a0212p-77f, 0x1.6c8a4cp-20f, 0.0f, 0.0f, 0x1.a9e26ep-90f, 0x1.00b17ep-29f,
     0.0f, 0x1.cfcbdp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.597e0ep-100f,
     0x1.ad06e6p-69f, 0x1.d3d33ep-39f, 0x1.b27d6p-95f, 0x1.47624ep-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dee624p-32f, 0.0f, 0x1.ae936ap-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e50a8p-62f, 0x1.2e82b4p-107f, 0.0f, 0x1.44a31p-85f,
     0.0f, 0x1.69dc2p-112f, 0.0f, 0x1.82dfdap-25f, 0.0f, 0x1.54d49ap-101f, 0.0f, 0.0f,
     0x1.61313ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1734bp-113f, 0.0f,
     0x1.c19304p-72f, 0.0f, 0.0f, 0x1.77d936p-38f, 0x1.a53f06p-36f, 0x1.a23652p-96f,
     0x1.bf0ad2p-28f, 0x1.8c6108p-118f, 0.0f, 0.0f, 0.0f, 0x1.4403c8p-52f,
     0x1.8513ap-47f, 0.0f, 0x1.bf338p-79f, 0x1.c221f4p-9f, 0x1.eb710ep-125f, 0.0f,
     0x1.dfab2ep-29f, 0x1.f6ba7ap-114f, 0.0f, 0.0f, 0x1.b75616p-95f, 0x1.42066ap-11f,
     0.0f, 0.0f, 0x1.26e2a6p-2f, 0x1.76871p-112f, 0.0f, 0x1.29ceb6p-77f, 0.0f,
     0x1.872f4p-124f, 0.0f, 0x1.e9b194p-113f, 0x1.d4af92p-2f, 0x1.05bc92p-23f,
     0x1.9a11c2p-1f, 0x1.d54eccp-36f, 0.0f, 0.0f, 0x1.82f9f2p-66f, 0x1.358234p-56f,
     0x1.63ef8ap-112f, 0x1.610e2cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1707ep-109f,
     0.0f, 0x1.a0166ap-69f, 0.0f, 0x1.df0d22p-16f, 0.0f, 0.0f, 0x1.eeb336p-97f, 0.0f,
     0x1.1236cep-82f, 0x1.69a98cp-120f, 0.0f, 0.0f, 0x1.abae0cp-54f, 0.0f, 0.0f, 0.0f,
     0x1.0e5678p-120f, 0.0f, 0.0f, 0x1.083deep-64f, 0x1.52ac4ep-119f, 0x1.bbbe4ap-41f,
     0x1.22fb6ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d855cp-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b1e06p-42f, 0x1.1c1d5ep-25f, 0.0f, 0.0f, 0.0f, 0x1.3ab6f2p-118f,
     0.0f, 0x1.9fbf2cp-103f, 0x1.65890cp-25f, 0.0f, 0.0f, 0x1.46f78cp-53f,
     0x1.d0938cp-108f, 0.0f, 0x1.975cacp-9f, 0.0f, 0.0f, 0x1.9873eep-121f, 0.0f, 0.0f,
     0.0f, 0x1.8a352ep-107f, 0x1.cd4498p-51f, 0.0f, 0.0f, 0.0f, 0x1.3a0878p-10f, 0.0f,
     0x1.6148f6p-21f, 0x1.d5c84ap-29f, 0x1.bb1b44p-35f, 0x1.cdc9ep-74f,
     0x1.4e60e2p-82f, 0.0f, 0.0f, 0x1.f092d6p-55f, 0x1.8fdac2p-88f, 0x1.264976p-76f,
     0.0f, 0x1.f92db8p-117f, 0x1.6d2c0ap-46f, 0.0f, 0.0f, 0.0f, 0x1.8d36cp-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d82668p-10f, 0.0f, 0x1.08c01cp-20f, 0.0f, 0.0f,
     0x1.d77d94p-15f, 0.0f, 0x1.b90012p-18f, 0x1.bdddf6p-33f, 0x1.8fcadp-64f, 0.0f,
     0.0f, 0.0f, 0x1.b4c58cp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.935e9p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28772ap-105f, 0.0f, 0.0f, 0x1.63e772p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.75aep-101f, 0x1.59f12ap-17f, 0.0f, 0.0f, 0x1.89bc1p-82f,
     0x1.c467cp-119f, 0.0f, 0.0f, 0x1.761a48p-3f, 0x1.6406c8p-115f, 0.0f,
     0x1.69deb2p-105f, 0x1.7e67b8p-9f, 0x1.543b7ap-101f, 0x1.f4a152p-41f,
     0x1.7feb1cp-108f, 0x1.89fc36p-98f, 0x1.3855aap-1f, 0x1.b8091p-64f,
     0x1.2e4afap-65f, 0.0f, 0.0f, 0x1.2d658cp-39f, 0.0f, 0x1.0c380cp-22f,
     0x1.7e673ep-58f, 0.0f, 0x1.f27c86p-6f, 0x1.9a6f4ap-88f, 0x1.10bec2p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ff28e8p-114f, 0x1.a83a34p-18f, 0x1.6d78f8p-21f,
     0x1.5e572ep-93f, 0.0f, 0x1.8f4238p-62f, 0.0f, 0x1.d5ac1p-97f, 0.0f, 0.0f, 0.0f,
     0x1.fa6874p-45f, 0x1.83b994p-114f, 0.0f, 0x1.af280ap-6f, 0x1.7a2474p-87f,
     0x1.a52c56p-115f, 0.0f, 0.0f, 0x1.f4fc86p-51f, 0x1.4552e6p-126f,
     0x1.e9210ep-125f, 0.0f, 0.0f, 0.0f, 0x1.5d6b88p-91f, 0.0f, 0x1.11c506p-68f,
     0x1.deb484p-77f, 0x1.e9c33ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.603e2p-72f, 0.0f,
     0x1.affe2p-124f, 0x1.97eacap-75f, 0x1.2290f2p-47f, 0.0f, 0x1.591fc8p-118f, 0.0f,
     0x1.824d14p-33f, 0.0f, 0x1.2a1bdep-28f, 0x1.c14cfp-85f, 0x1.102502p-3f, 0.0f,
     0x1.2ff6e8p-3f, 0.0f, 0x1.1cf62cp-89f, 0x1.c1508cp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f01142p-80f, 0x1.b2b33ap-40f, 0.0f, 0.0f, 0.0f,
     0x1.a357d4p-65f, 0.0f, 0x1.e2d344p-86f, 0.0f, 0.0f, 0x1.2b3814p-21f,
     0x1.b7aee6p-90f, 0x1.83c43cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e03b2p-112f, 0x1.1b2c26p-102f, 0.0f, 0.0f, 0.0f, 0x1.365fp-82f,
     0x1.13cacp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b55c2p-120f, 0x1.cbd17cp-3f,
     0x1p0f, 0.0f, 0x1p0f, 0.0f, 0x1.50d5e8p-10f, 0.0f, 0x1.4e116cp-49f, 0.0f,
     0x1.60e12p-22f, 0.0f, 0.0f, 0.0f, 0x1.97161p-49f, 0.0f, 0.0f, 0x1.1de932p-66f,
     0x1.ba79d4p-126f, 0x1.b9088ep-9f, 0.0f, 0.0f, 0x1.201f34p-8f, 0x1.08750cp-65f,
     0x1.fd0cfep-35f, 0.0f, 0x1.0b898ep-37f, 0.0f, 0.0f, 0x1.38f784p-69f, 0.0f,
     0x1.f9a716p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7f884p-38f, 0.0f, 0x1.d61fc8p-106f,
     0x1.fac03p-125f, 0.0f, 0.0f, 0x1.8b96d8p-64f, 0.0f, 0.0f, 0x1.05051p-61f, 0.0f,
     0.0f, 0x1.ba2138p-21f, 0x1.ee7d2ep-10f, 0.0f, 0x1.95aa96p-53f, 0x1.7d117p-19f,
     0.0f, 0x1.0940bap-55f, 0x1.6bd228p-42f, 0.0f, 0.0f, 0x1.c50a6ep-126f,
     0x1.af94fp-20f, 0.0f, 0.0f, 0.0f, 0x1.ec33dp-120f, 0x1.c643b8p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.466d3ap-2f, 0.0f, 0x1.21387cp-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.318cd6p-36f, 0.0f, 0x1.564cfap-31f, 0.0f, 0x1.225f34p-87f, 0x1.3b57fp-108f,
     0.0f, 0x1.3e59acp-76f, 0x1.2b319ep-13f, 0.0f, 0x1.ed7e7ap-74f, 0.0f, 0.0f,
     0x1.0f0544p-54f, 0x1.f1db9ep-33f, 0.0f, 0.0f, 0.0f, 0x1.b6ee84p-86f, 0.0f,
     0x1.5d2a44p-26f, 0.0f, 0x1.7b12d2p-64f, 0.0f, 0x1.fab88ap-48f, 0x1.c4e18ap-31f,
     0x1.33df02p-111f, 0x1.8790dap-62f, 0x1.9a2f7cp-126f, 0.0f, 0x1.db916ap-67f, 0.0f,
     0x1.9111bep-58f, 0.0f, 0x1.90288p-29f, 0x1.58a46p-89f, 0x1.79de0cp-79f,
     0x1.f557cp-50f, 0.0f, 0x1.502b22p-72f, 0x1.c28cbcp-18f, 0.0f, 0x1.cdfdbap-86f,
     0x1.52e37ep-10f, 0x1.015e82p-91f, 0x1.40b4a4p-108f, 0.0f, 0x1.ef34a6p-2f,
     0x1.8d797p-87f, 0.0f, 0x1.ff1ae2p-8f, 0.0f, 0x1.f6c0bcp-87f, 0.0f,
     0x1.42c90ep-1f, 0.0f, 0x1.840bap-28f, 0x1.c0c6eap-34f, 0x1.c04344p-24f, 0.0f,
     0x1.f84d68p-55f, 0.0f, 0.0f, 0x1.102238p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4f4fp-24f, 0.0f, 0x1.af9e88p-83f, 0x1.e1f774p-46f, 0x1.cfd928p-69f, 0.0f,
     0.0f, 0.0f, 0x1.8831e4p-31f, 0x1.a08f78p-121f, 0.0f, 0.0f, 0x1.0739aep-50f,
     0x1.e7516p-29f, 0x1.18a5b4p-12f, 0x1.eaedc6p-2f, 0x1.51c5a6p-86f, 0.0f, 0.0f,
     0x1.4dd764p-94f, 0x1.934f7p-53f, 0.0f, 0x1.4ef1ecp-93f, 0.0f, 0.0f,
     0x1.88e7eep-4f, 0.0f, 0x1.08dbap-80f, 0.0f
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
            tmp1 = Sleef_finz_acosf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_acosf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
