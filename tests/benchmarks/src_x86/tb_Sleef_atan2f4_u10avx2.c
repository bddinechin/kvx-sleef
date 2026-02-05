/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f4_u10avx2128.c --function Sleef_atan2f4_u10avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.b1a24cp-48f, 0x1.fbab12p-123f, 0.0f, 0x1.6dc6b4p-65f, 0.0f, 0x1.19b908p-93f,
     0.0f, 0x1.78abbp-95f, 0x1.e41bd4p-90f, 0x1.a6f6c6p-68f, 0x1.252a0ap-87f,
     0x1.25205ep-58f, 0.0f, 0x1.89f4f8p-55f, 0.0f, 0x1.e64c78p-84f, 0.0f, 0.0f,
     0x1.55ec24p-90f, 0x1.e43a4ep-73f, 0x1.9eef2ep-62f, 0x1.aa5462p-54f,
     0x1.90e568p-95f, 0x1.218c68p-109f, 0.0f, 0x1.0d2db4p-126f, 0x1.8b0308p-34f,
     0x1.8314a6p-80f, 0.0f, 0.0f, 0x1.ca1ecp-29f, 0x1.50736p-101f, 0x1.b83c68p-35f,
     0x1.205554p-87f, 0x1.c87e2ep-49f, 0.0f, 0.0f, 0.0f, 0x1.11b168p-26f,
     0x1.cc0f9p-26f, 0x1.9ef016p-99f, 0.0f, 0.0f, 0.0f, 0x1.9dfaaep-7f,
     0x1.10e6c4p-27f, 0.0f, 0.0f, 0.0f, 0x1.ea2be6p-72f, 0.0f, 0x1.656d14p-12f, 0.0f,
     0.0f, 0x1.007d4ap-119f, 0x1.9ed07ep-94f, 0x1.f60a4p-96f, 0.0f, 0.0f,
     0x1.13a0fp-36f, 0x1.37e55cp-19f, 0.0f, 0x1.a6addp-32f, 0.0f, 0x1.a83f68p-15f,
     0.0f, 0x1.5b4aa6p-9f, 0.0f, 0x1.2e63b8p-85f, 0.0f, 0x1.035a1p-37f, 0.0f, 0.0f,
     0x1.50aa88p-88f, 0x1.65346ap-78f, 0x1.f85bdep-10f, 0.0f, 0.0f, 0x1.0773fap-92f,
     0x1.aa7f92p-112f, 0.0f, 0.0f, 0.0f, 0x1.0021e2p-76f, 0x1.2dfbep-47f, 0.0f, 0.0f,
     0.0f, 0x1.a25cecp-76f, 0x1.87c4fcp-49f, 0.0f, 0.0f, 0x1.cde494p-34f,
     0x1.b05e48p-91f, 0x1.642af2p-103f, 0x1.5d319cp-110f, 0.0f, 0x1.60d914p-3f, 0.0f,
     0.0f, 0.0f, 0x1.2846cep-6f, 0.0f, 0x1.033bf4p-82f, 0x1.fd40ep-35f,
     0x1.178c9ep-44f, 0.0f, 0x1.8ab1a6p-30f, 0.0f, 0.0f, 0x1.45bf3ap-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.165d2p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.621012p-95f,
     0x1.a2d52ep-104f, 0.0f, 0.0f, 0x1.72df5ep-65f, 0.0f, 0.0f, 0x1.7eb3d4p-88f, 0.0f,
     0.0f, 0.0f, 0x1.72cdccp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15c60ap-105f, 0x1.b258aap-6f, 0.0f, 0.0f, 0.0f, 0x1.66ec8p-27f, 0.0f,
     0x1.0936eep-4f, 0x1.156b54p-85f, 0.0f, 0.0f, 0x1.2fb5d2p-99f, 0x1.2c44f4p-103f,
     0.0f, 0x1.3fac96p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b2676p-97f, 0.0f,
     0x1.821c66p-15f, 0x1.c45bf4p-58f, 0x1.e18476p-49f, 0.0f, 0x1.a8448p-33f, 0.0f,
     0x1.44021p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fcab2p-84f, 0.0f,
     0x1.8662aep-38f, 0x1.31c85ep-14f, 0x1.726ad4p-49f, 0.0f, 0x1.b3d0bap-41f, 0.0f,
     0x1.c3ebecp-46f, 0.0f, 0x1.6d4cd2p-60f, 0x1.a8ba92p-38f, 0x1.5e85fap-14f,
     0x1.c03fbp-21f, 0x1.220c58p-69f, 0x1.a6a636p-7f, 0x1.0277bep-57f, 0.0f,
     0x1.c2021ep-122f, 0.0f, 0x1.467f48p-67f, 0.0f, 0.0f, 0x1.cfaed6p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a69696p-118f, 0.0f, 0.0f, 0x1.9488e4p-79f, 0x1.76ded6p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8c766p-62f, 0x1.29a9dcp-100f, 0.0f, 0.0f,
     0x1.85b92ap-122f, 0x1.3619b6p-103f, 0.0f, 0x1.27c254p-124f, 0x1.9b901ap-41f,
     0.0f, 0x1.af9c4cp-100f, 0.0f, 0x1.12b91p-75f, 0.0f, 0.0f, 0x1.194542p-25f, 0.0f,
     0x1.dd1fb8p-93f, 0.0f, 0x1.76556cp-60f, 0x1.987342p-79f, 0x1.829692p-8f, 0.0f,
     0x1.ee074cp-118f, 0x1.f47fcep-88f, 0x1.49d294p-102f, 0x1.1f641cp-71f,
     0x1.a670f2p-22f, 0x1.9407b8p-110f, 0.0f, 0x1.966bep-114f, 0.0f, 0x1.ade2d4p-29f,
     0x1.210a52p-78f, 0x1.ac98a2p-86f, 0x1.f8ff38p-92f, 0.0f, 0x1.1de484p-40f,
     0x1.09e98ep-17f, 0x1.4f0b22p-82f, 0.0f, 0.0f, 0x1.c0b128p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c98ddcp-112f, 0.0f, 0x1.84c87ap-74f, 0.0f,
     0x1.7a6d2ap-31f, 0x1.0df5eap-40f, 0.0f, 0.0f, 0x1.05332p-4f, 0.0f, 0.0f,
     0x1.b49deep-109f, 0.0f, 0.0f, 0x1.9754e8p-91f, 0.0f, 0x1.db03a8p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d2274p-26f, 0x1.4c0a0ap-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3bd692p-93f, 0.0f, 0x1.a7e58ap-32f, 0.0f, 0.0f, 0x1.587dbp-42f,
     0x1.7f16a8p-123f, 0x1.f89036p-20f, 0.0f, 0.0f, 0.0f, 0x1.44e9d4p-37f,
     0x1.f05b8cp-89f, 0x1.750a1p-53f, 0x1.a2756cp-73f, 0x1.d0fd0cp-118f, 0.0f, 0.0f,
     0x1.b81acap-11f, 0x1.dcccb2p-58f, 0x1.3b0ddcp-35f, 0.0f, 0x1.ddab9ep-25f, 0.0f,
     0.0f, 0x1.dde3d8p-47f, 0.0f, 0x1.41ae2p-23f, 0x1.0c7108p-78f, 0.0f,
     0x1.dea87cp-68f, 0.0f, 0x1.93c5cep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a14fb4p-55f, 0.0f, 0x1.e3b194p-38f, 0.0f, 0x1.95278p-117f, 0x1.eb7338p-114f,
     0x1.8cefep-45f, 0x1.a4020cp-19f, 0x1.2fc242p-104f, 0.0f, 0.0f, 0x1.dcb20cp-21f,
     0.0f, 0x1.f18412p-81f, 0.0f, 0x1.69dd62p-93f, 0.0f, 0.0f, 0x1.c36c5cp-78f, 0.0f,
     0x1.72399ap-27f, 0x1.ac79acp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a4e66p-109f,
     0x1.7ce5aep-38f, 0x1.a77618p-41f, 0x1.17cb98p-124f, 0x1.e308d8p-103f,
     0x1.83cb5cp-72f, 0x1.da53dap-3f, 0x1.d41c78p-65f, 0x1.5eaaf4p-60f,
     0x1.fc58ccp-83f, 0x1.56f4acp-37f, 0.0f, 0.0f, 0.0f, 0x1.40dfbcp-24f, 0.0f,
     0x1.deac58p-58f, 0.0f, 0.0f, 0.0f, 0x1.10d512p-66f, 0.0f, 0x1.b73b0ap-4f, 0.0f,
     0x1.c623e4p-47f, 0.0f, 0.0f, 0.0f, 0x1.11a2c2p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a24b92p-104f, 0.0f, 0.0f, 0x1.3aa45p-111f, 0x1.f8a29cp-1f, 0x1.2187fep-35f,
     0x1.0e8c54p-8f, 0x1.dafa52p-44f, 0.0f, 0x1.d62ap-104f, 0.0f, 0x1.508b5cp-48f,
     0x1.bb188p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57145p-126f, 0x1.2a8f36p-126f,
     0x1.72b488p-57f, 0x1.c7c51cp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e36b6p-37f, 0x1p0f, 0x1.292496p-121f, 0x1.a263a2p-74f, 0.0f, 0.0f,
     0x1.b5cef4p-117f, 0x1p0f, 0x1.5776c4p-49f, 0x1.6763f2p-27f, 0.0f, 0.0f,
     0x1.37e9dcp-7f, 0.0f, 0x1.e9e2d2p-54f, 0x1.796b42p-120f, 0.0f, 0.0f,
     0x1.d909aep-24f, 0x1.3ba114p-30f, 0.0f, 0.0f, 0x1.3b8f6ap-123f, 0x1.84619p-32f,
     0x1.4cdfcap-78f, 0x1.1cfb5p-91f, 0.0f, 0.0f, 0.0f, 0x1.e8bb5ap-52f, 0.0f,
     0x1.4bbca2p-118f, 0x1.28d5a2p-34f, 0x1.31430cp-86f, 0.0f, 0x1.e1ef3cp-107f, 0.0f,
     0.0f, 0x1.63b67cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16832cp-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.96d592p-43f, 0x1.d2600ep-64f, 0.0f, 0x1.f508acp-55f, 0.0f,
     0x1.171a5p-43f, 0.0f, 0x1.9a067ep-17f, 0x1.4c8ee4p-98f, 0.0f, 0.0f, 0.0f,
     0x1.bfe99ep-123f, 0.0f, 0.0f, 0.0f, 0x1.54d476p-83f, 0x1.6a9dfp-40f, 0.0f,
     0x1.f0e4aep-122f, 0x1.a997f8p-59f, 0x1.1be374p-100f, 0.0f, 0x1.790b24p-9f, 0.0f,
     0.0f, 0x1.571b26p-53f, 0x1.738adep-28f, 0.0f, 0.0f, 0.0f, 0x1.d72ea4p-61f, 0.0f,
     0.0f, 0.0f, 0x1.e7f4f4p-28f, 0x1.4eee8cp-83f, 0x1.ce0458p-54f, 0.0f,
     0x1.cf334p-88f, 0.0f, 0.0f, 0.0f, 0x1.795d7ep-2f, 0x1.683eaep-56f,
     0x1.f73ef8p-38f, 0x1.669f7cp-110f, 0x1.a4056cp-95f, 0x1.bf1f84p-63f,
     0x1.950d1ep-67f, 0.0f, 0x1.64befap-13f, 0x1.6b9686p-24f, 0x1.5c6ea8p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67afe2p-105f, 0.0f, 0.0f,
     0x1.f484aep-78f, 0.0f, 0x1.639156p-33f, 0x1.65a768p-46f, 0x1.4f285ap-25f,
     0x1.7e1fccp-6f, 0x1.03e8cap-20f, 0.0f, 0.0f, 0x1.470d0ap-110f, 0.0f,
     0x1.1a3cep-22f, 0.0f, 0x1.38574cp-19f, 0x1.185ee8p-29f, 0x1.434cf8p-55f,
     0x1.df7418p-24f, 0x1.8f72d2p-29f, 0x1.37f8ccp-69f, 0.0f, 0.0f, 0.0f,
     0x1.929d7cp-92f, 0x1.107de6p-10f, 0x1.b7514cp-61f, 0x1.58710cp-121f, 0.0f, 0.0f,
     0x1.f5497ep-64f, 0x1.5c2348p-22f, 0.0f, 0x1.24ad9ap-110f, 0.0f, 0x1.c53e2ep-75f,
     0.0f, 0.0f, 0.0f, 0x1.5edcf2p-71f, 0x1.8013ecp-84f, 0x1.22205ep-90f,
     0x1.56345cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.463314p-55f,
     0x1.4e1d34p-44f, 0x1.0a3634p-77f, 0.0f, 0.0f, 0x1.4755d6p-108f, 0x1.d2525ap-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f75418p-8f, 0x1.14449ap-44f,
     0.0f, 0.0f, 0.0f, 0x1.627abp-82f, 0.0f, 0x1.48a206p-93f, 0x1.34867cp-102f, 0.0f,
     0.0f, 0x1.966674p-32f, 0.0f, 0.0f, 0x1.c9626p-41f, 0.0f, 0.0f, 0x1.6f8426p-108f,
     0x1.c69b62p-53f, 0.0f, 0x1.62e84cp-79f, 0x1.9b6608p-3f, 0.0f, 0.0f, 0.0f,
     0x1.7b63fcp-31f, 0.0f, 0x1.4894f2p-72f, 0x1.6b5322p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51fbeap-35f, 0x1.668b4cp-31f, 0x1.7a708cp-54f,
     0.0f, 0.0f, 0.0f, 0x1.ed6874p-60f, 0x1.d5812ep-88f, 0x1.16f2ep-2f,
     0x1.c16928p-107f, 0.0f, 0.0f, 0.0f, 0x1.95bfp-79f, 0x1.557fdap-78f, 0.0f,
     0x1.45ba18p-109f, 0.0f, 0x1.89c5c2p-103f, 0x1.d2ac92p-11f, 0.0f, 0x1.6ff66p-70f,
     0.0f, 0x1.aa5aa8p-103f, 0x1.8f525p-48f, 0.0f, 0x1.059a12p-2f, 0x1.e89d8cp-20f,
     0.0f, 0x1.2fbd06p-6f, 0.0f, 0x1.86fdf8p-32f, 0x1.13642ap-122f, 0.0f, 0.0f,
     0x1.c01848p-123f, 0.0f, 0.0f, 0.0f, 0x1.fca082p-53f, 0x1.d6df1ap-3f, 0.0f,
     0x1.a09a5ap-101f, 0x1.e80a76p-63f, 0x1.cd5a04p-47f, 0.0f, 0.0f, 0x1.92616ap-10f,
     0x1.b4b88ep-44f, 0x1.6931bcp-57f, 0.0f, 0x1.a66922p-56f, 0x1.82b1c8p-24f,
     0x1.a1b4d6p-75f, 0x1.394638p-49f, 0x1.a10512p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.13b87ep-50f, 0.0f, 0.0f, 0.0f, 0x1.2b7826p-14f,
     0x1.97cca4p-36f, 0x1.cf54f8p-51f, 0.0f, 0.0f, 0x1.23dbdcp-105f, 0x1.4d5d6ap-55f,
     0x1.2bb7fp-1f, 0x1.08b506p-94f, 0.0f, 0x1.116dfcp-5f, 0.0f, 0x1.25d534p-54f,
     0.0f, 0x1.87ad6ep-39f, 0.0f, 0.0f, 0x1.ef036ep-115f, 0x1.ab663cp-100f,
     0x1.35f30ap-32f, 0x1.64542p-77f, 0.0f, 0x1.ace402p-21f, 0.0f, 0.0f,
     0x1.3cfd0cp-1f, 0x1.cc98p-33f, 0x1.b2a6a8p-48f, 0x1.be88f6p-115f, 0.0f, 0.0f,
     0.0f, 0x1.431fa8p-101f, 0x1.e9c84p-56f, 0x1.1d9432p-2f, 0x1.4674f2p-3f,
     0x1.da6686p-67f, 0.0f, 0.0f, 0.0f, 0x1.86e72ap-19f, 0x1.f95ba2p-24f,
     0x1.5b86c8p-114f, 0x1.b6cdbcp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfe3p-10f,
     0.0f, 0.0f, 0.0f, 0x1.6bbd34p-54f, 0.0f, 0.0f, 0x1.dc62f6p-112f, 0.0f,
     0x1.a8e12p-5f, 0x1.6a8e4ap-44f, 0x1.604c7cp-57f, 0x1.19545ep-26f, 0.0f,
     0x1.dbaed2p-66f, 0x1.40a8dep-1f, 0.0f, 0.0f, 0.0f, 0x1.49c61ep-26f, 0.0f,
     0x1.cd990ap-112f, 0.0f, 0x1.a8509ap-40f, 0x1.38e32p-76f, 0.0f, 0.0f, 0.0f,
     0x1.daae9ep-104f, 0x1.eec2c8p-36f, 0.0f, 0x1.5a434ep-119f, 0x1.e839d4p-71f,
     0x1.67a898p-7f, 0x1.12cd22p-124f, 0.0f, 0.0f, 0x1.254362p-119f, 0x1.d2f0a2p-62f,
     0.0f, 0x1.395856p-78f, 0x1.e10db2p-34f, 0x1.1d2ed4p-52f, 0.0f, 0x1.2a429ep-105f,
     0x1.83701ap-42f, 0x1.b936dep-29f, 0x1.f8985p-90f, 0.0f, 0x1.93a244p-118f,
     0x1.868d08p-96f, 0x1.345646p-57f, 0x1.82b6dep-85f, 0x1.5297aap-74f,
     0x1.342dd8p-118f, 0x1.d2136p-55f, 0x1.f3b20cp-72f, 0x1.b76e3ap-112f,
     0x1.6c99b8p-121f, 0x1.81d152p-21f, 0.0f, 0.0f, 0.0f, 0x1.b8c9dap-47f,
     0x1.6cfc94p-74f, 0.0f, 0x1.7d3512p-7f, 0.0f, 0x1.986d82p-103f, 0x1.e23f3ep-106f,
     0x1.344e26p-42f, 0x1.60195p-113f, 0.0f, 0.0f, 0x1.d1c33ap-124f, 0.0f,
     0x1.e6886cp-20f, 0.0f, 0x1.5a7956p-37f, 0x1.c08cc8p-30f, 0x1.2404aep-79f, 0.0f,
     0.0f, 0x1.6001dap-41f, 0.0f, 0.0f, 0x1.b9da54p-22f, 0.0f, 0.0f, 0x1.cd38fp-51f,
     0.0f, 0.0f, 0x1.336b1ep-115f, 0x1.f5dcecp-107f, 0.0f, 0.0f, 0x1.941b6cp-70f,
     0.0f, 0.0f, 0x1.5150a8p-121f, 0.0f, 0.0f, 0x1.5359e6p-126f, 0x1.b0c776p-27f,
     0.0f, 0.0f, 0x1.4b295cp-111f, 0.0f, 0x1.fdc716p-111f, 0.0f, 0x1.bc4ea6p-15f,
     0.0f, 0.0f, 0x1.9436dp-90f, 0x1.1c88bcp-50f, 0x1.2c881ep-124f, 0x1.be096cp-71f,
     0x1.413ac6p-25f, 0x1.2e5906p-63f, 0x1.48ec5ep-108f, 0.0f, 0x1.76efbap-25f,
     0x1.30e8c2p-114f, 0x1.c0f1cp-95f, 0.0f, 0x1.585a98p-51f, 0.0f, 0x1.d8bba2p-46f,
     0.0f, 0x1.701fa2p-45f, 0x1.d6f4c6p-52f, 0.0f, 0x1.9181aep-88f, 0x1.bafc7p-17f,
     0x1.dddcbap-76f, 0.0f, 0x1.cb36fp-69f, 0.0f, 0.0f, 0x1.b9a22cp-86f,
     0x1.704d9ap-40f, 0.0f, 0.0f, 0x1.5f254ap-57f, 0.0f, 0.0f, 0.0f, 0x1.ddc34cp-94f,
     0.0f, 0x1.bd4c48p-36f, 0x1.11a32p-59f, 0x1.66f816p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f09f2p-48f, 0.0f, 0.0f, 0.0f,
     0x1.3c9954p-53f, 0x1.34f756p-60f, 0x1.fb0562p-48f, 0x1.fc52a8p-54f,
     0x1.87b424p-89f, 0.0f, 0.0f, 0x1.ee241ep-30f, 0.0f, 0x1.a0f856p-61f,
     0x1.6dca26p-39f, 0x1.cf7abp-77f, 0.0f, 0x1.ed7df6p-49f, 0x1.fef336p-124f,
     0x1.2cb118p-40f, 0x1.d746a4p-73f, 0.0f, 0x1.a1cc24p-123f, 0x1.c3fdecp-26f, 0.0f,
     0x1.aeea92p-34f, 0x1.476eb8p-71f, 0x1.445996p-82f, 0.0f, 0x1.665ef8p-38f,
     0x1.7d045ep-7f, 0x1.fd679ep-122f, 0x1.2a2feep-81f, 0.0f, 0x1.b47becp-96f,
     0x1.4f21fcp-36f, 0x1.2dd61cp-89f, 0x1.55b046p-86f, 0.0f, 0x1.532cbcp-121f, 0.0f,
     0x1.628f28p-25f, 0x1.bac198p-55f, 0.0f, 0x1.1c7d7ep-38f, 0.0f, 0x1.c403c6p-74f,
     0x1.46aadcp-4f, 0x1.1e3ecp-80f, 0.0f, 0x1.d968e8p-12f, 0.0f, 0.0f,
     0x1.a5d66cp-125f, 0.0f, 0x1.b40028p-81f, 0x1.d7360ap-46f, 0x1.f55298p-43f,
     0x1.8bd344p-90f, 0.0f, 0x1.ee4628p-82f, 0.0f, 0x1.4a5cf4p-116f, 0x1.f28a76p-46f,
     0x1.529686p-102f, 0.0f, 0.0f, 0x1.b50584p-44f, 0x1.9c6c14p-28f, 0x1.bff3bep-54f,
     0x1.64de9cp-24f, 0x1.fb740ap-78f, 0x1.6aa424p-24f, 0x1.190ce4p-88f,
     0x1.614ffap-68f, 0x1.383e76p-64f, 0.0f, 0x1.9a9b84p-44f, 0x1.ba0ea2p-76f,
     0x1.676d82p-117f, 0x1.28823p-69f, 0.0f, 0.0f, 0.0f, 0x1.7dbd46p-40f,
     0x1.7874e4p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0x1.0876f2p-123f, 0x1.9a267cp-11f, 0.0f, 0.0f, 0x1.a1c652p-3f,
     0x1.b5c18cp-91f, 0x1.4e00e2p-21f, 0x1.0ed9aep-27f, 0x1.d98e2ep-124f,
     0x1.d30eeap-119f, 0x1.43f4acp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9f68ep-88f, 0.0f,
     0x1.07d09ap-15f, 0x1.86d3p-82f, 0.0f, 0x1.59261p-91f, 0.0f, 0x1.8713c6p-15f,
     0.0f, 0.0f, 0x1.2b863cp-116f, 0x1.70fea2p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d6b16p-44f, 0.0f, 0.0f, 0x1.0b1feep-97f, 0x1.55f93ap-126f, 0x1.5d5088p-14f,
     0.0f, 0x1.40f7d6p-40f, 0x1.0d74f6p-25f, 0.0f, 0x1.3190cp-72f, 0x1.294e9cp-111f,
     0x1.5106e2p-93f, 0x1.90aa0cp-86f, 0x1.db9e1ep-29f, 0.0f, 0.0f, 0x1.69906ep-117f,
     0.0f, 0.0f, 0x1.0d0b92p-49f, 0x1.da8126p-50f, 0x1.2f86b2p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.19e50cp-109f, 0x1.58fa6cp-2f, 0x1.c4f23p-114f, 0x1.86b82ap-62f,
     0x1.38f24ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b587a2p-101f,
     0x1.e5c4bap-35f, 0.0f, 0.0f, 0.0f, 0x1.e74ccp-22f, 0.0f, 0x1.e8afccp-39f,
     0x1.788c62p-111f, 0x1.8e28fap-10f, 0x1.c20a0ap-71f, 0x1.2bc5a2p-60f, 0.0f, 0.0f,
     0x1.d780b2p-79f, 0x1.feb322p-53f, 0.0f, 0x1.daf778p-98f, 0x1.778abp-38f, 0.0f,
     0x1.1d43ap-9f, 0.0f, 0.0f, 0x1.cb566p-75f, 0x1.76be02p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0018e6p-22f, 0.0f, 0.0f, 0.0f, 0x1.e566dcp-24f, 0.0f, 0x1.0ef862p-66f,
     0.0f, 0x1.0405b6p-28f, 0x1.1dcb8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6944ap-18f,
     0.0f, 0x1.b8b536p-101f, 0x1.0dacd4p-100f, 0.0f, 0.0f, 0x1.17e146p-66f,
     0x1.999068p-68f, 0x1.a9a724p-87f, 0.0f, 0.0f, 0x1.cbdaaap-85f, 0x1.f90bb4p-64f,
     0x1.bee718p-76f, 0x1.8a8e1p-72f, 0.0f, 0.0f, 0x1.ac608cp-101f, 0.0f,
     0x1.63c528p-71f, 0x1.7dbb5ep-20f, 0x1.c3acf6p-112f, 0x1.b96e2ap-36f,
     0x1.ed04dep-64f, 0x1.07995ap-3f, 0x1.2fda1ap-35f, 0x1.1ceaap-37f, 0x1.85b4ep-44f,
     0x1.70715p-100f, 0x1.b30cc2p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.156f0ap-124f, 0.0f,
     0x1.8af212p-22f, 0.0f, 0x1.d76106p-114f, 0.0f, 0.0f, 0.0f, 0x1.ea7d7ap-91f, 0.0f,
     0.0f, 0.0f, 0x1.c9a01p-12f, 0x1.0eed28p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a85582p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0b748p-94f, 0.0f, 0x1.e30c6p-70f,
     0.0f, 0x1.23fc7cp-2f, 0x1.27b0acp-125f, 0.0f, 0x1.ec587cp-101f, 0x1.2a3c78p-48f,
     0.0f, 0.0f, 0.0f, 0x1.c56c5ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.488792p-39f,
     0.0f, 0x1.f046d2p-104f, 0.0f, 0.0f, 0x1.50622p-39f, 0x1.642caep-84f, 0.0f, 0.0f,
     0x1.adb874p-71f, 0x1.45066ap-1f, 0.0f, 0.0f, 0x1.88f598p-124f, 0x1.df113ep-120f,
     0x1.69598ep-12f, 0.0f, 0x1.057434p-44f, 0.0f, 0.0f, 0.0f, 0x1.df46dp-80f,
     0x1.f02088p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bb784p-44f, 0.0f, 0x1.5f7128p-14f,
     0x1.ee205cp-66f, 0x1.d5c90ep-5f, 0.0f, 0x1.3db7b6p-7f, 0x1.99c322p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3bffap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fd5eap-82f,
     0.0f, 0.0f, 0.0f, 0x1.be88f6p-86f, 0.0f, 0x1.03078ap-12f, 0.0f, 0.0f, 0.0f,
     0x1.fb27c2p-59f, 0x1.28eb14p-63f, 0x1.4e1642p-110f, 0.0f, 0.0f, 0.0f,
     0x1.ae1f5ap-40f, 0x1.430fd6p-87f, 0x1.987f5cp-107f, 0.0f, 0x1.b3c53ap-95f,
     0x1.134368p-75f, 0.0f, 0.0f, 0x1.81ec22p-90f, 0.0f, 0.0f, 0.0f, 0x1.c91648p-56f,
     0x1.4ec4aap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57d8bap-124f, 0.0f, 0.0f, 0.0f,
     0x1.8bb978p-54f, 0x1.ba65ecp-114f, 0.0f, 0x1.dbbf3p-12f, 0x1.b0f13cp-49f, 0.0f,
     0x1.e3cee8p-92f, 0.0f, 0.0f, 0.0f, 0x1.a1273ep-35f, 0x1.e386e6p-29f,
     0x1.f24358p-50f, 0.0f, 0x1.f2dc16p-107f, 0x1.4f6186p-24f, 0x1.e0243cp-107f,
     0x1.23967p-109f, 0x1.9a409p-33f, 0.0f, 0.0f, 0.0f, 0x1.3934b8p-62f, 0.0f, 0.0f,
     0.0f, 0x1.c11dp-96f, 0x1.bc9088p-108f, 0.0f, 0.0f, 0.0f, 0x1.37fda2p-57f, 0.0f,
     0.0f, 0.0f, 0x1.06a8dep-37f, 0x1.baedd4p-107f, 0x1.0bdb68p-15f, 0x1.c3b396p-63f,
     0x1.7ec49ep-111f, 0.0f, 0x1.788a48p-99f, 0x1.6f32c6p-55f, 0.0f, 0x1.4a6ecap-55f,
     0.0f, 0x1.43289p-117f, 0.0f, 0x1.2c5a8ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20e2dp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50c26ap-16f, 0.0f,
     0.0f, 0x1.9abadp-81f, 0x1.81f80ap-102f, 0.0f, 0x1.c0a024p-98f, 0x1.3909c8p-90f,
     0.0f, 0x1.657d3cp-109f, 0x1.c59acp-34f, 0x1.2aedacp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9f2b4p-97f, 0.0f, 0.0f, 0x1.ca47c4p-2f, 0x1.e4d708p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb9a0ap-86f, 0.0f,
     0x1.8c0bbcp-9f, 0.0f, 0x1.b3d09cp-80f, 0.0f, 0.0f, 0x1.789154p-45f,
     0x1.fc000cp-89f, 0.0f, 0x1.eae05cp-60f, 0x1.3dff3cp-37f, 0.0f, 0x1.7c2e84p-64f,
     0x1.594c18p-88f, 0.0f, 0.0f, 0.0f, 0x1.9623bap-99f, 0x1.d977eep-79f,
     0x1.b30b84p-102f, 0.0f, 0.0f, 0.0f, 0x1.6ed70ep-41f, 0.0f, 0x1.3d5816p-16f, 0.0f,
     0.0f, 0x1.babd32p-73f, 0.0f, 0x1.a4ee6ep-117f, 0x1.1a06aep-107f, 0.0f,
     0x1.979832p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cc55ap-87f, 0x1.f48392p-119f, 0.0f,
     0.0f, 0.0f, 0x1.b650c4p-32f, 0x1.e3f792p-77f, 0.0f, 0x1.f7dcb4p-101f, 0.0f,
     0x1.7740fp-106f, 0x1.19bd8ap-45f, 0x1.a869a4p-66f, 0x1.3ceec4p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.28b25p-21f, 0x1.336658p-123f, 0.0f, 0x1.90255ap-118f, 0.0f,
     0x1.de55c2p-11f, 0x1.609444p-61f, 0.0f, 0.0f, 0.0f, 0x1.d25e48p-79f, 0.0f,
     0x1.226cfep-28f, 0x1.1bce52p-18f, 0x1.8f085ep-27f, 0.0f, 0x1.2a7088p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2a9ecp-32f, 0x1.4021eap-83f, 0x1.62d238p-77f,
     0x1.7d624p-52f, 0.0f, 0x1.b13a5ap-95f, 0x1.f0616ep-53f, 0x1.e5bf86p-67f, 0x1p0f,
     0x1.39c2bap-124f, 0x1.4ec57cp-40f, 0.0f, 0x1.439d96p-31f, 0.0f, 0.0f,
     0x1.155c7ep-102f, 0.0f, 0.0f, 0x1.e4830cp-94f, 0x1.c799p-121f, 0.0f, 0.0f,
     0x1.1d4d0ap-95f, 0x1.1ec43p-60f, 0.0f, 0.0f, 0x1.03f92cp-46f, 0x1.ad03aap-112f,
     0.0f, 0x1.0d7506p-103f, 0x1.77175p-108f, 0.0f, 0x1.025706p-54f, 0.0f, 0.0f, 0.0f,
     0x1.6fa7dep-33f, 0x1.8f54d2p-74f, 0x1.3f157cp-98f, 0.0f, 0.0f, 0x1.6be96p-62f,
     0x1.d855b8p-12f, 0.0f, 0x1.21513cp-34f, 0x1.ebb37ep-111f, 0.0f, 0.0f,
     0x1.b75d14p-9f, 0x1.447e8ep-64f, 0.0f, 0.0f, 0.0f, 0x1.2bb25ep-5f, 0.0f,
     0x1.9fd1c8p-102f, 0x1.510ebep-124f, 0.0f, 0.0f, 0.0f, 0x1.2c928ep-20f, 0.0f,
     0.0f, 0.0f, 0x1.0b7446p-105f, 0x1.1c466ep-39f, 0.0f, 0.0f, 0x1.594c2ep-5f,
     0x1.7dac9cp-6f, 0.0f, 0x1.8aedfep-71f, 0.0f, 0x1.55fee2p-76f, 0.0f,
     0x1.471d86p-55f, 0x1.ee3a6ep-26f, 0.0f, 0x1.0b227cp-15f, 0x1.044844p-118f,
     0x1.3b9ef4p-88f, 0.0f, 0x1.f78684p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b0bf7ep-22f, 0x1.1b6142p-55f, 0x1.938b48p-11f, 0x1.c34adcp-94f,
     0x1.93f57p-113f, 0x1.c11f5ep-29f, 0.0f, 0x1.60fcd6p-5f, 0.0f, 0.0f,
     0x1.5089c4p-80f, 0x1.035caep-40f, 0.0f, 0x1.b4bc58p-13f, 0x1.b55f3p-77f, 0.0f,
     0x1.9f7dc6p-21f, 0x1.1b3894p-15f, 0x1.91c4e4p-50f, 0.0f, 0.0f, 0x1.2088fap-107f,
     0.0f, 0.0f, 0x1.4694fcp-91f, 0.0f, 0x1.db271p-28f, 0.0f, 0x1.5181bcp-24f,
     0x1.61d3cap-3f, 0.0f, 0x1.7a966cp-61f, 0x1.b55184p-4f, 0x1.c90dc2p-126f,
     0x1.88dbeap-68f, 0x1.7269dep-43f, 0.0f, 0.0f, 0.0f, 0x1.38092cp-47f, 0.0f,
     0x1.017e08p-101f, 0.0f, 0.0f, 0.0f, 0x1.98d10ep-78f, 0x1.968c64p-61f,
     0x1.c29d48p-25f, 0.0f, 0.0f, 0x1.d27582p-9f, 0.0f, 0x1p0f, 0x1.89f048p-18f, 0.0f,
     0x1.f34acp-28f, 0x1.8a533ep-123f, 0.0f, 0.0f, 0x1.9c5574p-32f, 0.0f,
     0x1.be4dbap-101f, 0.0f, 0.0f, 0.0f, 0x1.f82252p-110f, 0x1.f0c2d4p-31f,
     0x1.f4aa96p-66f, 0x1.3410b8p-42f, 0.0f, 0.0f, 0x1.9519a4p-30f, 0x1.06bcfp-43f,
     0.0f, 0.0f, 0x1.26df36p-67f, 0.0f, 0x1.c0243ep-74f, 0x1.d9949cp-50f, 0.0f,
     0x1.0c7c16p-69f, 0x1.435f4cp-15f, 0x1.fc7eb2p-101f, 0.0f, 0x1.a2f9e4p-11f,
     0x1.8c5316p-103f, 0.0f, 0x1.6f3972p-117f, 0x1.124998p-94f, 0.0f, 0.0f,
     0x1.e65cc2p-102f, 0.0f, 0.0f, 0x1.9f2962p-71f, 0x1.9742b2p-73f, 0x1.aab26p-63f,
     0.0f, 0x1.303a26p-68f, 0.0f, 0x1.ec5d48p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fe7f6p-17f, 0x1.3cbafcp-120f, 0x1.02cd2p-82f, 0x1.eefdeap-9f, 0.0f,
     0x1.45c2c2p-48f, 0.0f, 0.0f, 0x1.7987acp-71f, 0.0f, 0.0f, 0x1.990d9p-104f, 0.0f,
     0x1.f7e7bap-125f, 0x1.a9c262p-1f, 0x1.c1cb76p-93f, 0x1.eeb2cp-58f,
     0x1.2a9f4p-21f, 0x1.67b2ecp-60f, 0.0f, 0x1.c170d2p-51f, 0x1.6b61dp-109f,
     0x1.849188p-96f, 0.0f, 0.0f, 0.0f, 0x1.9a3634p-84f, 0.0f, 0x1.588d28p-2f,
     0x1.6567b6p-56f, 0x1.9654fap-24f, 0x1.ec1fa2p-77f, 0x1.410bdcp-5f, 0.0f, 0.0f,
     0x1.9f799ep-97f, 0x1.3466b8p-116f, 0.0f, 0x1.d9209ap-8f, 0x1.ad0126p-114f, 0.0f,
     0x1.7a8b74p-26f, 0x1.d0eab4p-83f, 0.0f, 0.0f, 0.0f, 0x1.757264p-80f,
     0x1.d57d64p-43f, 0x1.109498p-61f, 0x1.19705ep-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a17ecp-113f, 0x1.147388p-22f, 0.0f, 0x1.4961acp-77f, 0x1.507a8cp-86f,
     0x1.0ca5d6p-9f, 0x1.556a7p-35f, 0.0f, 0x1.facd18p-110f, 0.0f, 0x1.c5d204p-7f,
     0x1.79c9fcp-95f, 0x1.1c1b8p-59f, 0.0f, 0.0f, 0.0f, 0x1.bbe99cp-112f,
     0x1.b4294cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.582934p-107f, 0.0f, 0.0f,
     0x1.b7c792p-68f, 0x1.b3c3aap-32f, 0.0f, 0.0f, 0x1.284a34p-100f, 0x1.0b55dap-122f,
     0x1.1954cep-80f, 0x1.488e5ep-54f, 0x1.fcfc26p-120f, 0x1.c218f8p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.942b84p-118f, 0.0f, 0x1.db828p-79f, 0x1.701afap-49f,
     0x1.cedb38p-21f, 0.0f, 0x1.2eb7cep-91f, 0.0f, 0x1.ceff2cp-98f, 0x1.baf52cp-54f,
     0x1.70287p-17f, 0x1.cf8644p-75f, 0.0f, 0.0f, 0x1.93b75cp-6f, 0.0f,
     0x1.d4505ap-77f, 0x1.4b8d12p-105f, 0.0f, 0.0f, 0x1.1abea8p-1f, 0x1.90b9cep-69f,
     0x1.9f5acp-101f, 0x1.1d177cp-17f, 0x1.cd087cp-61f, 0x1.d68e5cp-116f, 0.0f, 0.0f,
     0x1.7084c8p-85f, 0x1.9aeb0ap-93f, 0.0f, 0x1.a55cc6p-92f, 0x1.68ad74p-18f,
     0x1.c9d13p-42f, 0.0f, 0x1.79842cp-85f, 0x1.2e88ep-84f, 0.0f, 0x1.16220ep-20f,
     0.0f, 0.0f, 0x1.3cceeep-26f, 0.0f, 0.0f, 0x1.5bf514p-95f, 0.0f, 0x1.8d59d6p-71f,
     0.0f, 0x1.6d6eeap-16f, 0.0f, 0x1.177856p-117f, 0.0f, 0x1.8d00e2p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8b3992p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b1e62p-26f,
     0x1.f2997p-43f, 0.0f, 0.0f, 0x1.970b14p-84f, 0x1.06a494p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.12d92p-82f, 0x1.390d5ap-3f, 0.0f, 0.0f, 0.0f, 0x1.a362b6p-97f,
     0x1.37f924p-88f, 0.0f, 0.0f, 0.0f, 0x1.6d4254p-45f, 0x1.170d2cp-2f,
     0x1.c6b244p-85f, 0x1.e10626p-52f, 0x1.819e6cp-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4f0a2p-64f, 0.0f, 0.0f, 0x1.a1852cp-113f, 0x1.b7b282p-8f, 0.0f,
     0x1.f34b5ap-65f, 0x1.96ea44p-66f, 0.0f, 0.0f, 0.0f, 0x1.3bc1b8p-7f,
     0x1.4ecdbcp-16f, 0.0f, 0.0f, 0x1.9e7a8p-119f, 0x1.f17b3cp-28f, 0x1.2710bep-88f,
     0.0f, 0x1.d58decp-30f, 0.0f, 0.0f, 0.0f, 0x1.c8d83cp-71f, 0x1.6c0032p-20f, 0.0f,
     0x1.2cc1d2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0602aep-67f, 0x1.05021ap-19f,
     0.0f, 0.0f, 0x1.816ddap-77f, 0.0f, 0x1.7fa812p-36f, 0x1.c770ccp-14f,
     0x1.28c5c8p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a69ed4p-76f, 0.0f,
     0x1.a0a1dap-81f, 0x1.e9302ep-73f, 0.0f, 0x1.d60cfep-95f, 0x1.27a34cp-97f,
     0x1.2a9ddep-108f, 0.0f, 0.0f, 0x1.695a8ap-78f, 0x1.0f495ep-56f, 0.0f, 0.0f,
     0x1p0f, 0x1.47bfecp-30f, 0.0f, 0.0f, 0.0f, 0x1.d156a8p-74f, 0x1.06b7f2p-39f,
     0.0f, 0.0f, 0.0f, 0x1.a6b1fp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71f256p-85f, 0.0f,
     0.0f, 0x1.5d040ep-30f, 0.0f, 0x1.8042dcp-4f, 0.0f, 0x1.347ee4p-125f,
     0x1.3fd11cp-36f, 0.0f, 0x1.83b20ap-23f, 0.0f, 0x1.bae542p-34f, 0.0f, 0.0f, 0.0f,
     0x1.8a017ep-110f, 0x1.bd6188p-65f, 0x1.c713fcp-37f, 0x1.d1df54p-112f,
     0x1.60ed7ap-99f, 0.0f, 0x1.d9333ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ff12p-29f,
     0x1.10769cp-21f, 0x1.9a0ab2p-113f, 0x1.379976p-72f, 0x1.888b9cp-43f,
     0x1.4f133ep-62f, 0.0f, 0x1.5a1998p-42f, 0x1.e773bep-23f, 0.0f, 0x1.eff1d4p-12f,
     0x1.50ea2ep-4f, 0x1.a61104p-94f, 0x1.dd7c1ep-8f, 0x1.b3c154p-10f, 0.0f,
     0x1.c41596p-28f, 0.0f, 0x1.19477cp-35f, 0x1.0f003ep-98f, 0x1.52b132p-107f, 0.0f,
     0.0f, 0.0f, 0x1.9b782ep-123f, 0x1.cd438ap-47f, 0.0f, 0x1.8a851ep-4f, 0.0f, 0.0f,
     0.0f, 0x1.53fd38p-18f, 0.0f, 0.0f, 0x1.e6e89cp-22f, 0.0f, 0x1.62058ap-82f,
     0x1.520f4p-90f, 0.0f, 0x1.1fc59ap-6f, 0x1.037792p-82f, 0x1.402efap-82f,
     0x1.5d671ap-19f, 0.0f, 0x1.d014cap-46f, 0x1.9646d8p-16f, 0x1.7f4c42p-88f,
     0x1.ec65a8p-77f, 0.0f, 0x1.0e177p-51f, 0x1.500b56p-55f, 0x1.8876b2p-1f,
     0x1.572752p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d886ap-103f, 0x1.dc87cep-60f, 0.0f,
     0.0f, 0x1.d4faecp-30f, 0.0f, 0x1.204f7p-42f, 0x1.3877a8p-98f, 0.0f, 0.0f,
     0x1.7af9dap-112f, 0x1.ac8702p-29f, 0.0f, 0x1.f3506p-50f, 0x1.f7e2a8p-30f, 0.0f,
     0x1.ff54b6p-45f, 0.0f, 0x1.9d2f46p-28f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_atan2f4_u10avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_atan2f4_u10avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atan2f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
