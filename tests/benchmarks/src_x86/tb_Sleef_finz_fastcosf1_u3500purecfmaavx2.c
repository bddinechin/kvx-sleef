/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastcosf1_u3500purecfma.c --function \
 *     Sleef_finz_fastcosf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.53f7ccp-70f, 0.0f, 0x1.66550cp-12f, 0x1.c1a1b6p-67f, 0.0f, 0x1.0654cap-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e244c8p-49f, 0.0f, 0.0f, 0x1.dd78eap-99f, 0.0f,
     0x1.0719dp-34f, 0x1.1f213p-31f, 0.0f, 0.0f, 0.0f, 0x1.bf8358p-75f,
     0x1.f963b2p-49f, 0x1.946b7p-106f, 0.0f, 0.0f, 0x1.c3fe68p-28f, 0.0f,
     0x1.a04b2ep-69f, 0x1.c5eed8p-42f, 0x1.1ff19ep-112f, 0.0f, 0.0f, 0x1.08778cp-18f,
     0x1.e0ec64p-30f, 0x1p0f, 0x1.e5eb88p-86f, 0.0f, 0x1.9f832ap-78f, 0.0f,
     0x1.c2dffap-57f, 0.0f, 0.0f, 0.0f, 0x1.8d9cf6p-38f, 0.0f, 0.0f, 0x1.986a32p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.190572p-106f, 0.0f,
     0x1.bced8ap-111f, 0x1.335e44p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c51p-29f, 0.0f, 0.0f, 0.0f, 0x1.227aa8p-64f, 0x1.3352e4p-107f, 0.0f, 0.0f,
     0x1.56096ep-42f, 0.0f, 0x1.47b55ep-68f, 0.0f, 0x1.02cb0ep-4f, 0.0f, 0.0f,
     0x1.6d424cp-4f, 0.0f, 0.0f, 0x1.556dc2p-53f, 0.0f, 0.0f, 0.0f, 0x1.dd2854p-22f,
     0x1.17af8p-89f, 0.0f, 0x1.992daep-105f, 0x1.1d79bcp-63f, 0x1.662216p-70f,
     0x1.2cb2ap-109f, 0x1.ead298p-106f, 0.0f, 0.0f, 0x1.cc0d2p-7f, 0.0f,
     0x1.6bc11p-60f, 0.0f, 0.0f, 0x1.127e64p-16f, 0.0f, 0x1.df5c9cp-29f,
     0x1.b8e784p-21f, 0.0f, 0.0f, 0.0f, 0x1.f26cf6p-18f, 0x1.198992p-10f,
     0x1.d63bc8p-33f, 0x1.0bfbb6p-97f, 0x1.42bd4ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.f5731ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b95f1p-24f, 0.0f, 0.0f,
     0.0f, 0x1.0c238p-92f, 0x1.7163fep-113f, 0x1.6a6cbp-73f, 0x1.f8da94p-111f, 0.0f,
     0x1.4cc64ep-104f, 0x1.846ff4p-42f, 0.0f, 0x1.ac5b1ep-11f, 0x1.bca92ap-99f,
     0x1.6a7154p-68f, 0.0f, 0x1.4bd19cp-74f, 0.0f, 0.0f, 0x1.d8ae5ep-64f,
     0x1.9bb42ep-27f, 0x1.6b1288p-103f, 0x1.51f18ap-11f, 0x1.dd109ep-65f, 0.0f, 0.0f,
     0x1.ab663ep-100f, 0.0f, 0x1.02de7p-5f, 0.0f, 0x1.b97984p-57f, 0x1.c4a66ep-116f,
     0.0f, 0.0f, 0x1.0dd5fp-118f, 0x1.a50876p-38f, 0x1.a9d506p-79f, 0x1.0ee97cp-93f,
     0.0f, 0x1.a0372ap-1f, 0.0f, 0.0f, 0x1.de7ca8p-88f, 0.0f, 0.0f, 0.0f,
     0x1.53e8eap-26f, 0x1.5cc46p-92f, 0x1.2b1d8cp-3f, 0.0f, 0.0f, 0x1.849222p-111f,
     0x1.b84448p-75f, 0x1.545c8p-121f, 0x1.0dd23p-105f, 0x1.58530cp-44f, 0.0f, 0.0f,
     0.0f, 0x1.1f4e46p-17f, 0x1.ac08ep-66f, 0.0f, 0x1.10f3a6p-59f, 0.0f,
     0x1.f88e1cp-3f, 0x1.e24f18p-32f, 0.0f, 0.0f, 0.0f, 0x1.6460bcp-42f,
     0x1.4d077cp-8f, 0.0f, 0.0f, 0x1.161c0ap-107f, 0x1.1516bp-55f, 0.0f, 0.0f,
     0x1.275a06p-106f, 0.0f, 0.0f, 0.0f, 0x1.6c5e3p-70f, 0x1.fa2c02p-78f,
     0x1.5fef36p-5f, 0.0f, 0x1.605696p-114f, 0x1.07d164p-99f, 0.0f, 0x1.3a3fd4p-82f,
     0.0f, 0x1.982ef8p-42f, 0x1p0f, 0.0f, 0x1.a6bb66p-72f, 0x1.1b0d8ap-91f,
     0x1.af73ap-50f, 0x1.b906eap-35f, 0.0f, 0x1.17f09ep-43f, 0x1.0483e2p-88f, 0.0f,
     0.0f, 0x1.be11bp-114f, 0.0f, 0.0f, 0x1.eef34cp-81f, 0x1.85cce8p-118f, 0.0f,
     0x1.26ec4ap-44f, 0.0f, 0.0f, 0.0f, 0x1.f44558p-114f, 0x1.c70e5ep-85f, 0.0f,
     0x1.ae56ap-126f, 0.0f, 0x1.2b9f18p-120f, 0x1.3e011p-63f, 0x1.6a89fcp-110f, 0.0f,
     0.0f, 0x1.bb053p-103f, 0x1.ed0ca8p-70f, 0x1.5c7854p-2f, 0.0f, 0x1.a7e2e2p-42f,
     0.0f, 0.0f, 0x1.ebbc86p-112f, 0.0f, 0.0f, 0x1.b6b3ep-30f, 0x1.59de48p-74f,
     0x1.8a7d3cp-81f, 0x1.ed09dep-85f, 0.0f, 0x1.b1b2aap-12f, 0x1.e539e2p-27f, 0.0f,
     0x1.6375b2p-34f, 0x1.60b37cp-42f, 0.0f, 0x1.6ad43cp-49f, 0.0f, 0x1.176c4p-35f,
     0.0f, 0.0f, 0x1.17be8ep-58f, 0x1.29262ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e21e1p-30f, 0.0f, 0x1.1b6032p-91f, 0.0f, 0x1.7f6bf4p-114f,
     0x1.8f650ep-15f, 0.0f, 0x1.9644bep-2f, 0.0f, 0x1.0d447p-86f, 0.0f, 0.0f, 0.0f,
     0x1.7b3c3ap-39f, 0.0f, 0x1.01ae28p-72f, 0.0f, 0.0f, 0x1.2ff54ap-28f, 0.0f, 0.0f,
     0x1.440a0ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42491ep-55f, 0.0f, 0.0f,
     0x1.321c32p-101f, 0x1.3ee122p-3f, 0.0f, 0.0f, 0x1.51bb1ap-56f, 0x1.ff89fcp-37f,
     0.0f, 0.0f, 0x1.076908p-71f, 0x1.ce498p-75f, 0.0f, 0x1.ec4562p-18f,
     0x1.17c83p-36f, 0x1.63afb4p-1f, 0x1.5072a8p-40f, 0.0f, 0x1.231a64p-3f,
     0x1.d8a926p-99f, 0x1.a65cep-74f, 0x1.dafaf6p-17f, 0.0f, 0.0f, 0x1.ecb26ep-70f,
     0x1.224a9p-84f, 0.0f, 0x1.834ab6p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.527d3ap-20f,
     0x1.28b19cp-101f, 0.0f, 0x1.cc00bp-45f, 0x1.01ce04p-126f, 0x1.9972f8p-124f,
     0x1.2c2336p-22f, 0x1.3c03bp-79f, 0x1.eea65ap-43f, 0x1.f33dfcp-104f, 0.0f, 0.0f,
     0.0f, 0x1.9c0f98p-118f, 0x1.da68d2p-75f, 0x1.28581ap-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f8492ep-10f, 0.0f, 0x1.4955eep-48f, 0.0f, 0x1.2f736ep-112f, 0.0f, 0.0f,
     0x1.316d76p-116f, 0.0f, 0.0f, 0x1.3f28c4p-60f, 0x1.9c70d6p-40f, 0x1.1a3abcp-42f,
     0x1.fd585p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb16bep-39f, 0.0f, 0.0f,
     0x1.939274p-68f, 0x1.f3cf6ap-31f, 0.0f, 0.0f, 0x1.5fc556p-82f, 0x1.a516cep-125f,
     0.0f, 0x1.b70c6ap-16f, 0x1.40d2a2p-92f, 0x1.511412p-25f, 0x1.a333e4p-104f,
     0x1.fd6cd2p-41f, 0x1.9cb626p-78f, 0.0f, 0.0f, 0x1.bdfd1cp-28f, 0x1.182006p-110f,
     0.0f, 0x1.abdfb2p-46f, 0x1.e77e4p-102f, 0x1.80c39p-92f, 0x1.759feep-118f,
     0x1.8f5436p-101f, 0x1.2db0f8p-122f, 0.0f, 0x1.12d318p-41f, 0x1.61f51ep-80f, 0.0f,
     0x1.f500d4p-94f, 0x1p0f, 0.0f, 0x1.27cd8p-99f, 0.0f, 0x1.e54ec8p-84f,
     0x1.f2adaep-107f, 0.0f, 0x1.17555ap-59f, 0x1.c952d4p-43f, 0x1.0017f6p-5f,
     0x1.b364c4p-73f, 0.0f, 0.0f, 0x1.a4eae2p-93f, 0x1.948bcep-36f, 0x1.43448ep-71f,
     0x1.a77d16p-99f, 0x1.1c5acep-86f, 0.0f, 0.0f, 0x1.5430b4p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.360f7ap-27f, 0.0f, 0.0f, 0.0f,
     0x1.f1980ap-1f, 0x1.adfceap-17f, 0x1.769688p-58f, 0x1.36753cp-33f,
     0x1.f3201ap-11f, 0x1.0b90fep-41f, 0x1.35e462p-120f, 0.0f, 0.0f, 0x1.c53434p-87f,
     0x1.c8e25ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c3ef8p-113f,
     0.0f, 0x1.3f0c4p-57f, 0x1.3719cep-109f, 0x1.764d36p-82f, 0x1.ab35b8p-8f,
     0x1.524f6p-122f, 0x1.fffb1cp-42f, 0x1.08ed44p-69f, 0x1.94919p-126f, 0.0f,
     0x1.8fb4dcp-33f, 0x1.ddffaap-51f, 0.0f, 0.0f, 0x1.ff72ap-1f, 0.0f,
     0x1.3ab3ccp-44f, 0x1.f21972p-54f, 0x1.98cb86p-111f, 0x1.67a354p-27f,
     0x1.ac8f7ap-51f, 0.0f, 0.0f, 0x1.0986d6p-123f, 0.0f, 0x1.bb6682p-1f,
     0x1.4978e4p-26f, 0.0f, 0.0f, 0x1.761d4ap-37f, 0x1.22d54ep-25f, 0x1.4f2744p-52f,
     0x1.ba8292p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e2f62p-79f, 0.0f, 0.0f,
     0x1.cdcf7p-108f, 0x1.8b2656p-124f, 0.0f, 0x1.1b7734p-126f, 0.0f, 0x1.1cf93ep-93f,
     0x1.977a28p-115f, 0.0f, 0.0f, 0x1.bef28p-95f, 0.0f, 0x1.9d9b76p-124f, 0.0f, 0.0f,
     0x1.071ccp-20f, 0x1.a3f956p-52f, 0x1.109dc4p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6aa92cp-22f, 0x1.eaaacep-100f, 0.0f, 0.0f, 0x1.ebe2b2p-59f, 0.0f,
     0x1.d4f36ep-71f, 0x1.69773cp-29f, 0.0f, 0x1.ecfa0cp-38f, 0.0f, 0.0f,
     0x1.a64338p-45f, 0.0f, 0x1.ed5172p-70f, 0x1.76e09ap-97f, 0x1.a7fa4ep-55f,
     0x1.382856p-59f, 0x1.401da2p-62f, 0x1.869fc2p-95f, 0x1.fe440ep-71f,
     0x1.3b703p-79f, 0x1.34f5aap-9f, 0x1.d30fd8p-32f, 0.0f, 0.0f, 0x1.09b36ap-47f,
     0.0f, 0.0f, 0x1.dfff7p-8f, 0.0f, 0.0f, 0x1.46da74p-65f, 0x1.02e908p-103f, 0.0f,
     0x1.707d9ap-23f, 0x1.8b4094p-106f, 0x1.6937f4p-118f, 0x1.3e1f2ap-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f69a56p-91f, 0.0f, 0.0f, 0.0f, 0x1.8fe23p-52f,
     0x1.8e5ad6p-9f, 0x1.e8597ap-120f, 0.0f, 0x1.935b8p-107f, 0x1.b865dp-48f,
     0x1.afacfap-21f, 0.0f, 0.0f, 0x1.d2d634p-32f, 0.0f, 0.0f, 0x1.cf5c6p-47f, 0.0f,
     0x1.7194ecp-105f, 0.0f, 0x1.9fddeep-38f, 0x1.2060dcp-98f, 0.0f, 0x1.8f4a4ep-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a3c92p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7b44ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b42684p-42f,
     0x1.38c7d2p-36f, 0x1.f8bac2p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4692ap-90f, 0x1.3d7d32p-65f, 0.0f, 0x1.a51c64p-19f, 0.0f, 0x1.82a122p-12f,
     0.0f, 0x1.daac34p-124f, 0.0f, 0x1.8d5556p-4f, 0x1.30058p-65f, 0.0f,
     0x1.64a158p-93f, 0.0f, 0x1.e07d9ap-35f, 0.0f, 0x1.2428dap-120f, 0x1.6678c6p-30f,
     0.0f, 0.0f, 0.0f, 0x1.eb700ap-58f, 0.0f, 0x1.42f07cp-66f, 0x1.9425b6p-31f, 0.0f,
     0.0f, 0.0f, 0x1.301c38p-2f, 0.0f, 0.0f, 0x1.eb563ap-20f, 0x1.389664p-20f,
     0x1.b4abp-1f, 0.0f, 0.0f, 0.0f, 0x1.08d586p-63f, 0.0f, 0x1.e9d8f6p-21f, 0.0f,
     0x1.2362d8p-40f, 0.0f, 0x1.367ccp-35f, 0.0f, 0x1.67edacp-106f, 0x1.e3792p-4f,
     0.0f, 0.0f, 0x1.7d96eep-123f, 0x1.9be02cp-66f, 0x1.0acff2p-33f, 0.0f,
     0x1.2ea514p-8f, 0x1.b73eaap-27f, 0x1.ce3866p-22f, 0x1.f95bep-120f,
     0x1.b768e4p-11f, 0x1.9e3abep-107f, 0.0f, 0x1.146f82p-108f, 0.0f, 0.0f,
     0x1.8f124ep-52f, 0.0f, 0.0f, 0x1.2a0a8p-13f, 0x1.7d98bap-66f, 0.0f,
     0x1.13e9bap-59f, 0x1.e6f7e4p-4f, 0x1.538762p-52f, 0x1.3529cep-62f,
     0x1.010e1cp-75f, 0.0f, 0x1.25f17cp-62f, 0.0f, 0x1.7f8dccp-56f, 0.0f,
     0x1.61a71p-109f, 0.0f, 0x1.856f6cp-105f, 0x1.3b72aep-101f, 0x1.6602e4p-99f,
     0x1.4e03c6p-113f, 0.0f, 0.0f, 0x1.c14734p-90f, 0.0f, 0x1.306752p-37f, 0.0f, 0.0f,
     0x1.9d6d9cp-80f, 0x1.fdc9fcp-71f, 0x1.138f56p-11f, 0x1.7cdbep-112f, 0.0f,
     0x1.d86bc8p-47f, 0.0f, 0.0f, 0x1.95acd4p-66f, 0x1.f63ad8p-71f, 0x1.28adbep-103f,
     0x1.1dc276p-17f, 0x1.1103e2p-66f, 0.0f, 0.0f, 0.0f, 0x1.007bbep-50f,
     0x1.36735ep-80f, 0x1.82ebcep-12f, 0x1.7c67fp-118f, 0x1.12bc52p-40f, 0.0f,
     0x1.46d02p-108f, 0.0f, 0.0f, 0x1.25c8f2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6b0c8p-59f, 0.0f, 0x1.cd80e8p-84f, 0.0f, 0x1.38e93p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e52af8p-35f, 0.0f, 0x1.d60f1ep-27f, 0x1.2a75d6p-34f,
     0x1.d2eccp-75f, 0.0f, 0.0f, 0x1.d57cd8p-64f, 0x1.ab9186p-117f, 0x1.f6855p-27f,
     0x1.ce520cp-5f, 0x1.067fe2p-104f, 0.0f, 0x1.af17p-30f, 0.0f, 0x1.2aae92p-30f,
     0x1.a71becp-119f, 0x1.94d6dap-34f, 0x1.77031ep-99f, 0.0f, 0.0f, 0x1.db3f5ap-15f,
     0x1.f3143cp-99f, 0x1.fcfebcp-43f, 0x1.fefaecp-123f, 0.0f, 0.0f, 0x1.162ef8p-114f,
     0x1.0c2494p-32f, 0x1.f93e48p-47f, 0.0f, 0x1.60a8acp-122f, 0.0f, 0x1.0bb81p-103f,
     0x1.f5628ep-102f, 0.0f, 0.0f, 0.0f, 0x1.4e3d44p-62f, 0x1.821134p-13f, 0.0f, 0.0f,
     0x1.e36c0ep-33f, 0x1.3981fap-56f, 0x1.814d94p-62f, 0x1.cd6bfp-38f,
     0x1.a88652p-111f, 0.0f, 0.0f, 0x1.ca73dap-26f, 0x1.8a359ap-121f, 0x1.6c6b8ep-26f,
     0x1.4ec08cp-120f, 0x1.fc4b04p-49f, 0.0f, 0.0f, 0x1.98701cp-1f, 0x1.144e0ep-37f,
     0x1.c081fcp-100f, 0.0f, 0.0f, 0x1.39ae9ep-13f, 0x1.148d1cp-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b80da4p-33f, 0.0f, 0x1.734b02p-41f, 0x1.57052cp-41f, 0.0f,
     0x1.0259a2p-56f, 0x1.a8bc06p-22f, 0.0f, 0.0f, 0x1.04261ep-8f, 0.0f,
     0x1.db6836p-112f, 0.0f, 0.0f, 0.0f, 0x1.be9dap-43f, 0x1.54d82p-29f,
     0x1.588b4ep-24f, 0x1.a70846p-11f, 0x1.e28428p-113f, 0x1.7b1592p-117f, 0.0f, 0.0f,
     0x1.86bc86p-62f, 0.0f, 0x1.6fd48ap-5f, 0.0f, 0x1.07e638p-112f, 0x1.83063p-55f,
     0x1.680554p-103f, 0.0f, 0x1.33a11p-68f, 0x1.5591d4p-97f, 0x1.225524p-116f, 0.0f,
     0.0f, 0x1.00eb22p-44f, 0x1.96b214p-25f, 0x1.084792p-49f, 0x1.15566ep-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f62d2ap-82f, 0.0f, 0x1.f22deap-9f, 0x1.2360c4p-97f, 0.0f,
     0.0f, 0x1.cd99cep-29f, 0x1.b55bccp-70f, 0.0f, 0x1.18039cp-13f, 0x1.49273ep-91f,
     0.0f, 0x1.b91d2ep-48f, 0.0f, 0x1.8dba56p-23f, 0.0f, 0.0f, 0x1.1a95a4p-109f,
     0x1.4d941p-25f, 0.0f, 0x1.32dec8p-25f, 0x1.ca5126p-96f, 0.0f, 0x1.4ab14ep-103f,
     0x1.819422p-105f, 0.0f, 0.0f, 0x1.4753b2p-8f, 0x1.8c6d78p-43f, 0.0f,
     0x1.279958p-81f, 0x1.4b4a74p-20f, 0x1.da67cep-58f, 0.0f, 0x1.403c28p-118f,
     0x1.fdc6d8p-75f, 0x1.9ed28cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.246926p-66f,
     0x1.742fa2p-66f, 0x1.1631e8p-65f, 0x1.673606p-94f, 0.0f, 0x1.e57c8ep-101f,
     0x1.ad0894p-33f, 0.0f, 0x1.a5fe24p-27f, 0x1.722c56p-25f, 0.0f, 0x1.aa1b06p-126f,
     0.0f, 0x1.befb4cp-72f, 0x1.1f93eep-75f, 0x1.02ab8cp-120f, 0.0f, 0x1.6af0e4p-6f,
     0x1.c5538ep-61f, 0.0f, 0.0f, 0x1.56a446p-105f, 0x1.20d34ep-5f, 0.0f,
     0x1.f9764ep-104f, 0x1.13549ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.763e8ap-42f, 0x1.f456a6p-55f, 0.0f, 0.0f, 0x1.fa30a2p-69f, 0.0f,
     0x1.60f74ap-19f, 0.0f, 0.0f, 0x1.02d788p-37f, 0x1.95b722p-6f, 0.0f,
     0x1.484dp-90f, 0.0f, 0x1.73e528p-44f, 0.0f, 0x1.0f9a14p-6f, 0.0f, 0.0f,
     0x1.c4e08ep-3f, 0x1.dee0aap-84f, 0x1.cd2618p-35f, 0.0f, 0x1.1d4956p-61f,
     0x1.952a42p-12f, 0x1.08756cp-72f, 0.0f, 0x1.3f80c2p-102f, 0.0f, 0x1.55d00ap-55f,
     0.0f, 0.0f, 0.0f, 0x1.975764p-60f, 0x1.11c0dap-118f, 0.0f, 0.0f, 0.0f,
     0x1.ff14d2p-61f, 0.0f, 0.0f, 0x1.1bae02p-68f, 0.0f, 0.0f, 0.0f, 0x1.290326p-114f,
     0x1.1505a2p-21f, 0x1.f68296p-13f, 0.0f, 0x1p0f, 0x1.3fbd5cp-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ffebd2p-55f, 0x1.a6b058p-3f
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
            tmp1 = Sleef_finz_fastcosf1_u3500purecfma(tmp0);
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
    printf("Sleef_finz_fastcosf1_u3500purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fastcosf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
