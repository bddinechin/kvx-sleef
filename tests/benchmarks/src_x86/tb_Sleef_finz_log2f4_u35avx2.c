/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f4_u35avx2128.c --function \
 *     Sleef_finz_log2f4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0.0f, 0x1.edf9p-78f, 0.0f, 0x1.75113ap-11f, 0x1.dc8d6p-45f, 0.0f,
     0x1.8e3a54p-84f, 0.0f, 0.0f, 0.0f, 0x1.7ec73p-91f, 0x1.6c972ep-19f,
     0x1.45b57ep-91f, 0.0f, 0.0f, 0.0f, 0x1.5fcbd2p-98f, 0.0f, 0.0f, 0x1.e8ef62p-36f,
     0x1.2b0f52p-94f, 0x1.268d74p-47f, 0x1.2bc5d4p-107f, 0x1.c7c7d4p-96f,
     0x1.2da3ep-19f, 0.0f, 0x1.d9c174p-79f, 0.0f, 0.0f, 0x1.1ddcb8p-80f,
     0x1.313224p-44f, 0x1.a4fca4p-114f, 0.0f, 0.0f, 0x1.b75884p-102f, 0x1.c980a6p-3f,
     0x1.467598p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35552p-19f, 0x1.6b766p-10f,
     0x1.af4decp-13f, 0x1.95051cp-92f, 0.0f, 0.0f, 0.0f, 0x1.ada9eep-25f,
     0x1.addedcp-118f, 0x1.2621b8p-31f, 0.0f, 0.0f, 0.0f, 0x1.dc211cp-62f, 0.0f, 0.0f,
     0x1.a923acp-55f, 0.0f, 0.0f, 0x1.260d6ep-71f, 0.0f, 0.0f, 0x1.e2c5eep-62f, 0.0f,
     0x1.4f9676p-124f, 0x1.93c194p-16f, 0x1.01be46p-115f, 0x1.1d6e7ap-27f,
     0x1.634caap-59f, 0.0f, 0.0f, 0.0f, 0x1.51d57p-72f, 0x1.bac884p-29f,
     0x1.1f3dfep-64f, 0x1.a1a46p-110f, 0x1.7e85e2p-72f, 0.0f, 0.0f, 0x1.10d6e6p-108f,
     0x1.5143ecp-51f, 0.0f, 0.0f, 0x1.4ae70cp-40f, 0x1.f2a4c8p-57f, 0x1.70a122p-70f,
     0.0f, 0.0f, 0x1.57459cp-43f, 0x1.6b5d24p-99f, 0x1.c92bc8p-8f, 0.0f, 0.0f,
     0x1.09f924p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75445cp-60f, 0.0f, 0x1.6b98e6p-62f,
     0.0f, 0.0f, 0x1.5454bcp-67f, 0x1.b7ec9ap-40f, 0.0f, 0.0f, 0.0f, 0x1.14de9ap-23f,
     0.0f, 0x1.2671dcp-20f, 0x1.f749dap-65f, 0x1.c49f18p-48f, 0x1.d055d4p-18f, 0.0f,
     0x1.701e1ep-53f, 0.0f, 0x1.4bb6ccp-79f, 0.0f, 0.0f, 0x1.67125ep-6f,
     0x1.e18fc6p-59f, 0.0f, 0.0f, 0x1.7584c6p-76f, 0.0f, 0x1.853ccep-69f,
     0x1.80950cp-101f, 0x1.c8f564p-99f, 0.0f, 0.0f, 0x1.beedcp-18f, 0x1.5e2598p-10f,
     0.0f, 0x1.89a08ap-108f, 0x1.164eep-73f, 0.0f, 0x1.bacf8cp-53f, 0x1.933158p-74f,
     0x1.60fd68p-39f, 0x1.ebc8f8p-87f, 0x1.416b2p-54f, 0x1.a2c37p-52f, 0.0f, 0.0f,
     0x1.15f2bcp-37f, 0x1.a46e8cp-89f, 0x1.7cb86ap-102f, 0.0f, 0.0f, 0.0f,
     0x1.0b94bp-77f, 0x1.366f2ep-52f, 0x1.a3542p-21f, 0x1.e71b08p-111f,
     0x1.38ca0ap-38f, 0.0f, 0x1.e9ced6p-49f, 0.0f, 0.0f, 0.0f, 0x1.aec518p-104f,
     0x1.093cc4p-118f, 0.0f, 0x1.59834cp-10f, 0x1.d22708p-102f, 0x1.e5402cp-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.68a7ap-43f, 0x1.13cd5p-56f, 0x1.8409eep-4f, 0.0f,
     0x1.ea5cfap-77f, 0x1.5d51b8p-119f, 0.0f, 0x1.b9b844p-75f, 0x1.645594p-106f, 0.0f,
     0.0f, 0.0f, 0x1.77e7eep-89f, 0x1.d6aebep-117f, 0.0f, 0x1.4ff0aap-78f, 0.0f, 0.0f,
     0x1.0e2502p-123f, 0x1.e618d4p-119f, 0.0f, 0x1.407068p-23f, 0x1p0f,
     0x1.2e778ap-41f, 0x1.095906p-1f, 0.0f, 0.0f, 0.0f, 0x1.71d3fap-46f, 0.0f,
     0x1.d86572p-124f, 0.0f, 0x1.7222fcp-107f, 0x1.f61542p-52f, 0.0f, 0.0f,
     0x1.25cd54p-63f, 0x1.4075fp-21f, 0x1.43e88cp-59f, 0x1.c462dep-69f, 0.0f,
     0x1.3c727ap-63f, 0x1.4b9882p-19f, 0.0f, 0x1.1b6ddep-78f, 0x1.81ac3p-33f, 0.0f,
     0.0f, 0.0f, 0x1.183268p-122f, 0.0f, 0x1.86a5eap-73f, 0x1.cb86a4p-65f,
     0x1.c5f7dep-38f, 0x1.14c33p-108f, 0.0f, 0x1.eb5784p-20f, 0.0f, 0x1.40002p-66f,
     0x1.e0f596p-113f, 0x1.26c35ep-22f, 0.0f, 0x1.a83684p-11f, 0.0f, 0x1.25f17p-71f,
     0x1.d0232ep-22f, 0.0f, 0.0f, 0x1.246854p-66f, 0x1.cf50dcp-41f, 0.0f,
     0x1.16c338p-4f, 0.0f, 0.0f, 0x1.3cd376p-73f, 0.0f, 0.0f, 0x1.56e2cp-94f,
     0x1.5c0bc2p-18f, 0.0f, 0x1.8bca7ep-39f, 0x1.ddaf38p-99f, 0x1.1988acp-110f, 0.0f,
     0.0f, 0x1.6b0b24p-11f, 0.0f, 0x1.27f7dp-47f, 0x1.61a21ep-4f, 0x1.58a9c8p-94f,
     0.0f, 0x1.200098p-126f, 0.0f, 0x1.d471fep-107f, 0.0f, 0.0f, 0.0f,
     0x1.1ba6b6p-117f, 0x1.bba922p-111f, 0x1.0b29dp-105f, 0x1.8fc6f2p-38f, 0.0f,
     0x1.912d0ap-79f, 0x1.d6c2ep-19f, 0x1.66ecf8p-123f, 0.0f, 0x1.d100dap-76f, 0.0f,
     0x1.a9d88p-47f, 0x1.81b1d4p-33f, 0.0f, 0.0f, 0x1.8e90bp-40f, 0x1.31f25ep-50f,
     0.0f, 0.0f, 0x1.f3351cp-123f, 0x1.72b428p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65ecb2p-84f, 0x1.ffc99ap-91f, 0x1.7bdcf8p-33f, 0x1.425f3p-20f,
     0x1.920a5ap-79f, 0.0f, 0.0f, 0x1.5d002cp-48f, 0x1p0f, 0.0f, 0x1.7a6388p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52bbep-105f, 0x1.569b5ap-106f,
     0x1.ead1a2p-23f, 0.0f, 0x1.716654p-97f, 0.0f, 0x1.fd38a4p-92f, 0.0f,
     0x1.076d1p-109f, 0x1.1fbc3ap-75f, 0x1.e8f72p-80f, 0x1.b37a1ap-60f,
     0x1.2b37bcp-36f, 0.0f, 0.0f, 0x1.60c0fep-48f, 0.0f, 0.0f, 0x1.20bd42p-52f, 0.0f,
     0.0f, 0x1.6e483cp-87f, 0.0f, 0.0f, 0x1.95f12ap-87f, 0x1.bbc452p-68f,
     0x1.f4c138p-63f, 0x1.368c8ap-7f, 0.0f, 0x1.7f3544p-61f, 0.0f, 0x1.2ae8aap-35f,
     0x1.e2208p-51f, 0.0f, 0x1.8b642p-30f, 0x1.287c4ap-95f, 0x1.570e04p-40f,
     0x1.b1927cp-70f, 0x1.e097d4p-41f, 0.0f, 0x1.33db8p-49f, 0x1.dd7b04p-84f,
     0x1.e6b0cep-4f, 0x1.440888p-119f, 0.0f, 0x1.7d99acp-23f, 0x1.f684ap-122f, 0.0f,
     0x1.ebbda2p-14f, 0.0f, 0x1.ebe92cp-85f, 0x1.27539ap-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5064c4p-80f, 0.0f, 0x1.be9c6cp-8f, 0x1.3782c8p-108f, 0x1.9b22dap-71f,
     0x1.c04c02p-89f, 0x1.d22f1cp-4f, 0.0f, 0x1.158a26p-49f, 0x1.9cf26ep-13f, 0.0f,
     0x1.c4c4eep-76f, 0x1.fc823cp-115f, 0x1.4adec8p-116f, 0x1.66f2b2p-10f, 0.0f,
     0x1.f09214p-89f, 0x1.41127ep-62f, 0x1.a3b274p-55f, 0.0f, 0.0f, 0x1.be7806p-5f,
     0x1.86fd2p-112f, 0x1.b7bb36p-73f, 0x1.fa5fa6p-93f, 0.0f, 0.0f, 0x1.35ac84p-101f,
     0.0f, 0x1.59561p-54f, 0x1.564f9ep-63f, 0x1.0003aap-110f, 0x1.b6049p-47f,
     0x1.df78b6p-92f, 0.0f, 0x1.1343d4p-12f, 0.0f, 0.0f, 0x1.961318p-67f,
     0x1.79e726p-20f, 0.0f, 0.0f, 0x1.2b20c8p-111f, 0x1.05eae4p-43f, 0.0f,
     0x1.ad722p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b227p-30f, 0.0f, 0x1.d5748cp-60f,
     0.0f, 0x1.86644ap-104f, 0.0f, 0x1.8604bcp-4f, 0.0f, 0x1.30bf56p-72f,
     0x1.67e718p-16f, 0x1.4ba19cp-57f, 0x1.136ac4p-6f, 0.0f, 0.0f, 0x1.ce5a66p-74f,
     0x1.d6ea72p-23f, 0.0f, 0.0f, 0.0f, 0x1.a9ef0ep-95f, 0.0f, 0x1.303438p-114f,
     0x1.66d91cp-57f, 0x1.e6e6d8p-99f, 0x1.356e24p-18f, 0.0f, 0x1.19b2f6p-100f, 0.0f,
     0x1.5be18ap-66f, 0.0f, 0x1.ffff5p-45f, 0.0f, 0x1.2cbab4p-40f, 0x1.2370aap-16f,
     0x1.272c04p-41f, 0x1.e8826cp-58f, 0.0f, 0x1.cdd56ap-13f, 0x1.3b6ec4p-85f,
     0x1.dc519ap-115f, 0.0f, 0x1.481248p-115f, 0x1.13ad4cp-76f, 0x1.d4c96ep-7f,
     0x1.a69ep-94f, 0.0f, 0.0f, 0x1.34c2eep-106f, 0.0f, 0x1.5bf1d8p-99f, 0.0f,
     0x1.00325cp-114f, 0x1.51669ap-17f, 0.0f, 0x1.2df15p-4f, 0x1p0f, 0x1.7526e6p-70f,
     0x1.67e7bep-67f, 0x1.413886p-62f, 0x1.ab562ap-52f, 0.0f, 0x1.df1d62p-12f,
     0x1.cae964p-32f, 0x1.075372p-126f, 0.0f, 0x1.273c18p-78f, 0.0f, 0x1.1d47a2p-16f,
     0x1.714c1p-80f, 0x1.4b446ap-57f, 0x1.47209ep-18f, 0x1.16449ep-110f, 0.0f,
     0x1.f2f0b6p-60f, 0.0f, 0.0f, 0x1.b49f4ep-61f, 0x1.4a7482p-32f, 0x1.62818p-11f,
     0x1.79b806p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bcb0ep-83f, 0.0f,
     0x1.6d358cp-115f, 0x1.a7976p-54f, 0x1.de442ep-101f, 0.0f, 0.0f, 0x1.875788p-117f,
     0x1.475acp-25f, 0.0f, 0x1.19914ep-29f, 0x1.b92216p-86f, 0x1.05b2f4p-88f, 0.0f,
     0x1.fd803ep-69f, 0.0f, 0.0f, 0.0f, 0x1.b860ap-41f, 0x1.53b1cp-63f, 0.0f,
     0x1.1d86dcp-97f, 0.0f, 0.0f, 0x1.4300ecp-45f, 0x1.cfbe6p-74f, 0.0f, 0.0f,
     0x1.490c06p-99f, 0x1.6067d6p-50f, 0.0f, 0.0f, 0x1.02451ap-112f, 0.0f,
     0x1.8b9504p-28f, 0x1.5ac01ap-37f, 0x1.fb8c7ep-40f, 0x1.dadbc2p-1f, 0.0f, 0.0f,
     0.0f, 0x1.2b17dep-13f, 0.0f, 0.0f, 0x1.f73c76p-105f, 0x1.4b327cp-65f,
     0x1.e46914p-84f, 0x1.baf322p-26f, 0.0f, 0x1.f09e6cp-24f, 0x1.75aca2p-92f, 0.0f,
     0.0f, 0x1.c5c20ep-17f, 0x1.f8952ep-123f, 0x1.dda92cp-99f, 0x1.1b4596p-56f,
     0x1.06148ap-31f, 0x1.f047f4p-89f, 0.0f, 0x1.3afb74p-117f, 0.0f, 0x1.b2b444p-14f,
     0.0f, 0x1.1dbf5ep-120f, 0.0f, 0x1.3adbcep-74f, 0x1.b64396p-61f, 0.0f,
     0x1.bc9a0ep-53f, 0.0f, 0x1.0b7e6p-123f, 0x1.e841b8p-38f, 0x1.ae20eap-39f,
     0x1.d1e00ep-13f, 0x1.96ed16p-90f, 0x1.db9b9ep-123f, 0x1.5367b6p-15f, 0.0f, 0.0f,
     0.0f, 0x1.234a8p-81f, 0.0f, 0.0f, 0x1.0202eap-126f, 0x1.deea52p-44f,
     0x1.da94dep-43f, 0.0f, 0x1.5043c8p-1f, 0x1.bb5c1ep-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b89056p-14f, 0x1.ab8bfcp-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.935c4ap-112f, 0x1.bdd37ap-52f, 0.0f, 0x1.19263p-41f, 0x1.b5c9b8p-110f, 0.0f,
     0x1.9a9f82p-76f, 0x1.8785b8p-122f, 0.0f, 0.0f, 0.0f, 0x1.9917a4p-77f, 0.0f,
     0x1.3ed5aap-96f, 0.0f, 0x1.bca5dap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf23e4p-38f, 0.0f, 0.0f, 0x1.e09916p-25f, 0x1.c46a42p-23f, 0x1.d11734p-97f,
     0.0f, 0.0f, 0.0f, 0x1.28419ep-73f, 0x1.4c4caep-55f, 0.0f, 0.0f, 0x1.d7398p-99f,
     0x1.bbc94ap-24f, 0x1.74227ap-81f, 0x1.d48138p-95f, 0x1.2e0464p-61f,
     0x1.35a9dep-65f, 0x1.61865p-27f, 0.0f, 0.0f, 0x1.ef1ffep-59f, 0.0f, 0.0f,
     0x1.1e645cp-91f, 0.0f, 0x1.62868cp-92f, 0.0f, 0x1.0342d8p-80f, 0.0f,
     0x1.eeef4p-52f, 0x1.ab2b28p-106f, 0.0f, 0.0f, 0x1.d087acp-86f, 0.0f, 0.0f,
     0x1.58e316p-44f, 0x1.f53b8cp-92f, 0x1.5781dcp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a95962p-51f, 0.0f, 0x1.6f6f58p-54f, 0.0f, 0x1.163ea6p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c00e2p-20f, 0x1.def02ap-6f, 0.0f, 0x1.7e94f6p-32f, 0.0f,
     0.0f, 0.0f, 0x1.ae23d6p-52f, 0x1.1fa42ap-100f, 0x1.c534bap-103f, 0.0f,
     0x1.8355cap-33f, 0.0f, 0x1.89d7fap-42f, 0.0f, 0x1.faebbp-50f, 0x1.bd7e22p-96f,
     0.0f, 0x1.9d846ap-70f, 0.0f, 0.0f, 0x1.bbbef6p-94f, 0.0f, 0x1.474e58p-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.691356p-115f, 0.0f, 0.0f, 0.0f, 0x1.64680ap-94f,
     0.0f, 0x1.d8455ap-27f, 0.0f, 0x1.1833cp-25f, 0.0f, 0x1.67e6a8p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.348f24p-30f, 0x1.fcc75ep-105f, 0x1.49e108p-124f,
     0x1.aaf06ap-51f, 0x1.93579ap-83f, 0.0f, 0.0f, 0.0f, 0x1.9de5a2p-81f, 0.0f,
     0x1.7f2804p-51f, 0x1.9e037ep-7f, 0.0f, 0x1.c5c67cp-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27f0dcp-62f, 0.0f, 0.0f, 0x1.fe73dep-66f, 0.0f, 0x1.8ab9b2p-55f,
     0x1.a5d066p-116f, 0x1.38b306p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.278874p-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5acep-66f, 0x1.be995ep-123f, 0.0f, 0x1.9f7a28p-123f,
     0x1.0ced18p-35f, 0.0f, 0.0f, 0.0f, 0x1.71658ep-46f, 0x1.e5b5eep-26f, 0.0f, 0.0f,
     0x1.3dac0cp-73f, 0x1.670c14p-70f, 0.0f, 0.0f, 0x1.f57b2p-54f, 0x1.8f8e8ap-44f,
     0.0f, 0x1.a9c3d4p-20f, 0x1.f25a9p-25f, 0.0f, 0x1.b1649p-74f, 0x1.fcc974p-98f,
     0.0f, 0x1.86e46ep-53f, 0x1.44bdfep-76f, 0.0f, 0x1.4fa7c6p-69f, 0.0f,
     0x1.7154ap-1f, 0x1.6ca43p-68f, 0x1.726ceep-85f, 0x1.35df14p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6885d8p-90f, 0x1.8ebep-111f, 0x1.e220bap-106f, 0.0f,
     0x1.3eb58cp-34f, 0.0f, 0x1.eec44p-26f, 0x1.0f62e6p-17f, 0.0f, 0x1.ca8206p-78f,
     0.0f, 0x1.e007b6p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37a184p-4f, 0.0f,
     0x1.d6ce3p-68f, 0x1.6a312ep-70f, 0x1.c6075ep-13f, 0x1.ebf4ecp-96f,
     0x1.2d9604p-14f, 0.0f, 0x1.f48cp-58f, 0x1.b50202p-108f, 0.0f, 0x1.a680aap-10f,
     0x1.7d57c2p-14f, 0.0f, 0.0f, 0.0f, 0x1.7a6f66p-9f, 0x1.7d94dep-3f,
     0x1.6ca7dap-120f, 0.0f, 0x1.80fbc4p-86f, 0.0f, 0x1.342392p-31f, 0.0f, 0.0f,
     0x1.de59bap-34f, 0.0f, 0x1.ada3fep-11f, 0.0f, 0.0f, 0x1.d81342p-82f,
     0x1.9d4326p-2f, 0.0f, 0x1.e5925cp-78f, 0x1.b92afep-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b44fbp-99f, 0.0f, 0x1.c1fdcp-39f, 0.0f, 0x1.6d7dp-68f, 0.0f, 0x1.7a357ep-8f,
     0x1.4b29aep-115f, 0x1.7b10e6p-21f, 0x1.8ddb96p-19f, 0.0f, 0x1.f497f2p-17f,
     0x1.e6e80ap-100f, 0.0f, 0x1.07efbep-27f, 0.0f, 0x1.7abb56p-21f, 0.0f,
     0x1.7b9a82p-95f, 0x1.827c9ep-25f, 0x1.72fbeep-52f, 0x1.84bb98p-120f,
     0x1.b94788p-82f, 0.0f, 0x1.eea094p-49f, 0.0f, 0x1p0f, 0x1.3fc72cp-83f, 0.0f,
     0x1.b6d70cp-104f, 0.0f, 0x1.24113p-114f, 0.0f, 0x1.eff004p-89f, 0.0f, 0.0f,
     0x1.3bf0a4p-100f, 0x1.58f8ecp-99f, 0x1.6390f8p-67f, 0.0f, 0x1.969bc4p-33f, 0.0f,
     0.0f, 0x1.c899bap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff8bcp-75f, 0.0f, 0.0f,
     0x1.be900ap-56f, 0x1.c0674cp-33f, 0x1.b79ba2p-30f, 0.0f, 0.0f, 0x1.570c34p-72f,
     0x1.a24c54p-17f, 0.0f, 0x1.18771ep-103f, 0.0f, 0.0f, 0x1.53c0fap-47f, 0.0f, 0.0f,
     0x1.43568p-34f, 0.0f, 0.0f, 0x1.cc2714p-17f, 0x1.05c38ap-5f, 0x1.771322p-116f,
     0x1.f2eb78p-110f, 0x1.da3a3ap-2f, 0.0f, 0.0f, 0x1.5b2be4p-51f, 0.0f,
     0x1.e1339p-42f, 0x1.8c57e8p-82f, 0.0f, 0x1.774bcep-119f, 0x1.a8d206p-1f, 0.0f,
     0.0f, 0x1.98885ap-24f, 0x1.3f45c8p-57f, 0.0f, 0x1.96f7fep-41f, 0.0f, 0.0f,
     0x1.1cb36ep-120f, 0x1.c27164p-86f, 0.0f, 0.0f, 0x1.6fc28ap-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.98ce7ep-47f, 0x1.11a754p-68f, 0.0f, 0.0f, 0.0f, 0x1.c185c2p-1f,
     0x1.f76a68p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76b422p-31f, 0.0f, 0x1.89204ep-119f,
     0.0f, 0x1.154cbap-107f, 0.0f, 0x1.ad1c28p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b83506p-85f, 0.0f, 0.0f, 0.0f, 0x1.93774ep-77f, 0x1.72f988p-108f,
     0x1.3e55eep-29f, 0x1.2ac9dcp-16f, 0.0f, 0x1.b3f372p-40f, 0.0f, 0.0f, 0.0f,
     0x1.59e814p-35f, 0.0f, 0x1.cff762p-118f, 0x1.c32462p-61f, 0.0f, 0x1.428658p-24f,
     0.0f, 0.0f, 0.0f, 0x1.8f2a72p-116f, 0.0f
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
            tmp1 = Sleef_finz_log2f4_u35avx2128(tmp0);
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
    printf("Sleef_finz_log2f4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log2f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
