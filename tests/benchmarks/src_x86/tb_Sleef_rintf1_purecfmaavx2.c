/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintf1_purecfma.c --function Sleef_rintf1_purecfma \
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
     0x1.10c3a8p-31f, 0x1.dd325p-96f, 0x1.8624a4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.884e12p-8f, 0.0f, 0.0f, 0x1.6d5daep-61f, 0x1.0c097ap-46f, 0x1.6749f2p-105f,
     0.0f, 0x1.d379fcp-2f, 0.0f, 0x1.1e761p-85f, 0.0f, 0x1.87af02p-36f,
     0x1.a1dc9ep-2f, 0.0f, 0x1.181be6p-88f, 0x1.5e472cp-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8ae84p-114f, 0.0f, 0x1.71bb02p-11f, 0x1.a1aceap-4f, 0x1.c39ca8p-73f,
     0x1.2ead34p-122f, 0.0f, 0.0f, 0.0f, 0x1.faf65ap-20f, 0.0f, 0x1.10a20ap-51f,
     0x1.79f2f2p-60f, 0x1.69f95cp-52f, 0x1.03df24p-33f, 0x1.e75cbp-25f, 0.0f, 0.0f,
     0x1.b9a948p-93f, 0x1.4c2c88p-119f, 0x1.5daca4p-62f, 0x1.484912p-8f,
     0x1.304ccap-77f, 0x1.ed45bep-18f, 0x1.a68248p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10df18p-81f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b091c8p-103f,
     0x1.405b0ap-98f, 0x1.c5b5f6p-114f, 0.0f, 0x1.69131cp-121f, 0.0f, 0x1.b3b15cp-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.49b90cp-12f, 0x1.13078ap-102f, 0x1.ffc438p-111f,
     0x1.404434p-49f, 0x1.936042p-56f, 0.0f, 0.0f, 0.0f, 0x1.f2f892p-40f, 0.0f, 0.0f,
     0.0f, 0x1.5d00fep-15f, 0.0f, 0x1.fe5164p-11f, 0.0f, 0x1.c9e5dcp-92f,
     0x1.231362p-22f, 0x1.e895a6p-39f, 0x1.f734dap-81f, 0.0f, 0.0f, 0x1.075764p-125f,
     0x1.056bdp-52f, 0x1.420e38p-122f, 0x1.78c526p-51f, 0x1.152762p-27f,
     0x1.dbeb6cp-89f, 0x1.3c8386p-51f, 0.0f, 0x1.b6b3fep-63f, 0x1.8bec4cp-91f,
     0x1.40b4aap-36f, 0x1.923b9cp-118f, 0.0f, 0x1.1ff712p-19f, 0.0f, 0x1.68180ap-7f,
     0.0f, 0.0f, 0x1.e7a062p-70f, 0x1.4edcf2p-50f, 0.0f, 0.0f, 0x1.109e7ap-124f,
     0x1.93c792p-26f, 0x1.2809f6p-98f, 0x1.99b688p-64f, 0x1.dd1558p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f69128p-10f, 0.0f, 0x1.3081fcp-7f, 0x1.9a7826p-83f, 0.0f,
     0x1.4994acp-97f, 0x1.270a9ep-64f, 0.0f, 0.0f, 0x1.41dc0ap-98f, 0.0f, 0.0f, 0.0f,
     0x1.4c35fcp-117f, 0x1.ab832ep-14f, 0x1.5bad84p-125f, 0.0f, 0x1.2bdf14p-35f, 0.0f,
     0.0f, 0x1.f5d362p-26f, 0x1.c51a6ep-59f, 0x1.afa15ep-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.31aedap-101f, 0.0f, 0x1.5c47fap-5f, 0.0f, 0x1.35d19ep-79f, 0.0f,
     0x1.51547p-109f, 0x1.0edb6cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.925a22p-61f,
     0x1.376d6ap-100f, 0x1.957f3ep-62f, 0.0f, 0x1.8968b8p-110f, 0x1.425fd4p-33f, 0.0f,
     0x1.2a43eep-29f, 0.0f, 0.0f, 0.0f, 0x1.408a6p-30f, 0.0f, 0x1.0a068p-122f,
     0x1.ee147cp-14f, 0x1.7e3644p-109f, 0x1.ce8c48p-7f, 0.0f, 0x1.cf0a92p-121f, 0.0f,
     0x1.a20b46p-17f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.46811ep-10f, 0.0f, 0x1.6f249ap-8f,
     0.0f, 0x1.49e20ap-17f, 0.0f, 0.0f, 0x1.2a2bc6p-32f, 0x1.85af48p-88f, 0.0f,
     0x1.105322p-31f, 0x1.568aecp-111f, 0x1.fc162cp-91f, 0.0f, 0x1.bc6288p-23f, 0.0f,
     0.0f, 0x1.e3d23ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.266266p-29f, 0.0f,
     0x1.2418fp-65f, 0.0f, 0x1.1db85ep-114f, 0.0f, 0x1.d972a4p-50f, 0x1.c4a0bp-27f,
     0x1.5b427cp-98f, 0.0f, 0x1.88761ap-109f, 0x1.8a5cc2p-13f, 0x1.c2666ap-4f, 0.0f,
     0.0f, 0x1.c25108p-9f, 0.0f, 0.0f, 0.0f, 0x1.cb0d0ap-30f, 0.0f, 0x1.fa408p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a764ep-29f, 0x1.4e33b8p-70f, 0x1.97220ap-95f,
     0x1.56fce4p-17f, 0.0f, 0.0f, 0x1.295554p-14f, 0.0f, 0x1.7bede4p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e2d66ep-54f, 0x1.fd2d0cp-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fc2e4p-38f, 0.0f, 0.0f, 0x1.c140f8p-66f, 0.0f, 0.0f, 0.0f, 0x1.88fd36p-65f,
     0x1.60975ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c1dc6p-114f,
     0.0f, 0x1.2b49c6p-119f, 0.0f, 0x1.2fb6ap-48f, 0x1.d5cb82p-108f, 0.0f, 0.0f,
     0x1.15d86ap-30f, 0.0f, 0x1.ce27cp-6f, 0x1.895d94p-15f, 0.0f, 0.0f,
     0x1.2db096p-116f, 0x1.4ed4d8p-101f, 0x1.4847dap-110f, 0.0f, 0.0f, 0.0f,
     0x1.5e784p-111f, 0x1.6a469p-24f, 0x1.2d1f18p-60f, 0x1.7df092p-25f, 0.0f, 0.0f,
     0.0f, 0x1.efe916p-99f, 0x1.0f1a8ep-6f, 0x1.a2e14ep-62f, 0x1.6eb0a6p-118f,
     0x1.d98714p-52f, 0.0f, 0x1.7b3b12p-2f, 0.0f, 0.0f, 0x1.46c8a4p-74f,
     0x1.d285a4p-70f, 0x1.3dd448p-78f, 0x1.791f7cp-55f, 0.0f, 0x1.277226p-61f,
     0x1.de1368p-33f, 0x1.a8d5c4p-24f, 0x1.331518p-34f, 0x1.c7c6b4p-125f,
     0x1.d5f8cep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d8836p-30f, 0.0f, 0.0f,
     0x1.de2feap-48f, 0.0f, 0.0f, 0x1.ec65e8p-47f, 0x1.ac0192p-77f, 0x1.25526ep-40f,
     0.0f, 0x1.0a9396p-37f, 0x1.5437fcp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4552b6p-74f, 0x1.d9fbb4p-123f, 0.0f, 0.0f, 0x1.20b8c4p-15f, 0.0f, 0.0f,
     0x1.81f4dep-67f, 0x1.773b74p-42f, 0x1.cbff02p-2f, 0.0f, 0x1.82df2ep-65f, 0.0f,
     0x1.6f99c4p-105f, 0x1.2786eap-62f, 0.0f, 0x1.eadcbp-13f, 0x1.fc42a8p-110f, 0.0f,
     0.0f, 0.0f, 0x1.117a96p-83f, 0x1.7f98f4p-42f, 0x1.75ff9ep-52f, 0.0f,
     0x1.509312p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c56e8p-70f, 0x1.1a410cp-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddfa8cp-81f, 0x1.52eb3ep-29f, 0.0f, 0.0f,
     0x1.eb5758p-102f, 0.0f, 0x1.7aaad6p-88f, 0x1.4dc024p-82f, 0x1p0f, 0x1.3c115p-9f,
     0.0f, 0x1.3c1df6p-40f, 0x1.d251bp-18f, 0x1.9cb4a4p-75f, 0x1.75f9dp-75f, 0.0f,
     0x1.cfa0f4p-101f, 0x1.50ad56p-96f, 0.0f, 0.0f, 0x1.53523p-9f, 0x1.9166e2p-27f,
     0x1.ff4f3ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6630dep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c642e6p-16f, 0.0f, 0.0f,
     0x1.2201cp-5f, 0x1.53eca2p-92f, 0.0f, 0.0f, 0x1.4bef3ep-55f, 0x1.9f885cp-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35d85ep-106f, 0x1.442c1p-62f, 0x1.5bcd2ap-26f,
     0x1.6e2a8ep-105f, 0x1.6af984p-1f, 0x1.1672d6p-23f, 0.0f, 0x1.8ce67cp-89f, 0.0f,
     0x1.bdap-94f, 0x1.738014p-110f, 0x1.02a478p-126f, 0.0f, 0.0f, 0x1.4c3a38p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8eadbcp-37f, 0x1.094336p-80f, 0.0f,
     0x1.36dffp-3f, 0x1.f81d5cp-98f, 0x1.078c7ep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e48fep-9f, 0.0f, 0x1.3cf70ap-67f, 0.0f, 0x1.4a738ep-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e43dfap-74f, 0.0f, 0.0f, 0x1.7cac24p-47f, 0x1.81c312p-102f,
     0x1.7b49d4p-122f, 0x1.a6a7a2p-13f, 0.0f, 0x1.d8f8fap-22f, 0.0f, 0.0f, 0.0f,
     0x1.271086p-56f, 0.0f, 0.0f, 0x1.93903p-11f, 0.0f, 0x1.4f345cp-6f,
     0x1.1b487p-67f, 0x1.7ef586p-115f, 0x1.920da2p-108f, 0x1.1d464ap-5f,
     0x1.294b14p-59f, 0x1.c7e778p-72f, 0x1.402cfcp-69f, 0x1.041ae4p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5a1dfcp-4f, 0x1.e0503ep-65f, 0x1.bb7d4ep-4f, 0.0f, 0.0f,
     0x1.c2d7ep-57f, 0x1.2e5c28p-99f, 0x1.e4de6p-125f, 0x1.74e6b4p-14f,
     0x1.e1a816p-77f, 0.0f, 0.0f, 0x1.8ec5fp-4f, 0x1.fd706ep-35f, 0.0f, 0.0f,
     0x1.a171fp-98f, 0.0f, 0x1.11ea6p-33f, 0x1.89c312p-7f, 0.0f, 0.0f, 0x1.9a4p-12f,
     0.0f, 0x1.da8bc4p-99f, 0x1.bfe27ap-4f, 0.0f, 0x1.48e124p-28f, 0x1.8f4148p-53f,
     0.0f, 0.0f, 0.0f, 0x1.591b98p-120f, 0.0f, 0x1.26a29ap-99f, 0.0f, 0.0f,
     0x1.da85bap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16d206p-106f, 0x1.cc2794p-125f,
     0.0f, 0x1.80fca8p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96cca2p-118f, 0x1.d3870ap-108f, 0x1.4fd4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7e806p-120f, 0.0f, 0x1.d1ca34p-62f, 0.0f, 0x1.d91546p-60f, 0x1.cb1edp-95f,
     0x1.ec742ap-115f, 0x1.c51f8cp-98f, 0x1.e6e8d8p-2f, 0.0f, 0.0f, 0x1.51eb8cp-60f,
     0x1.7ddf66p-88f, 0.0f, 0x1.32cbeap-45f, 0x1.11c23p-50f, 0x1.b7beeap-97f, 0.0f,
     0x1.347becp-29f, 0.0f, 0.0f, 0x1.050354p-89f, 0.0f, 0x1.c51d0ep-87f, 0.0f, 0.0f,
     0x1.08cfbep-126f, 0x1.396c1ep-120f, 0.0f, 0x1.0febfap-5f, 0.0f, 0x1.0fd296p-21f,
     0x1.64d0e2p-113f, 0.0f, 0x1.76e408p-101f, 0.0f, 0x1.a5d9c8p-86f, 0.0f, 0.0f,
     0x1.64dba8p-71f, 0.0f, 0x1.060e1ep-10f, 0.0f, 0.0f, 0x1.37384ep-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d9b222p-111f, 0x1.024fc8p-108f, 0x1.f4b80cp-119f, 0.0f,
     0x1.9828f8p-36f, 0.0f, 0x1.4d3018p-9f, 0.0f, 0x1.efa0a4p-13f, 0x1.ee8668p-119f,
     0x1.369a22p-114f, 0.0f, 0x1.a8e1ep-49f, 0x1.c62336p-49f, 0.0f, 0x1.e7071p-60f,
     0.0f, 0x1.734afap-30f, 0x1.e22e46p-27f, 0.0f, 0.0f, 0.0f, 0x1.38db04p-112f, 0.0f,
     0x1.093988p-106f, 0x1.9a434cp-26f, 0.0f, 0x1.68c818p-3f, 0.0f, 0.0f,
     0x1.7c7372p-11f, 0.0f, 0.0f, 0.0f, 0x1.34e716p-17f, 0x1.ce19cp-16f,
     0x1.c3ba4p-52f, 0x1.8f869cp-93f, 0.0f, 0x1.eadc5p-74f, 0.0f, 0x1.7f6f1ep-10f,
     0x1.943fep-110f, 0x1.d2f67p-84f, 0x1.cc8cc8p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87b73p-55f, 0x1.384b82p-98f, 0x1.fd19b2p-14f, 0x1.1081bp-69f, 0.0f, 0.0f,
     0.0f, 0x1.77f5dcp-75f, 0x1.7fd372p-11f, 0.0f, 0.0f, 0.0f, 0x1.5d9684p-109f, 0.0f,
     0.0f, 0x1.9ccfap-23f, 0x1.a6250ep-53f, 0.0f, 0x1.9c723cp-63f, 0.0f, 0.0f,
     0x1.ddbbb4p-2f, 0x1.2e9c8ep-55f, 0x1.472282p-59f, 0.0f, 0x1.1e7b7ep-38f, 0.0f,
     0x1.a0ef02p-30f, 0x1.2995c2p-45f, 0x1.54571ap-103f, 0x1.49cb5ep-19f, 0x1p0f,
     0x1.2d6f0cp-71f, 0.0f, 0.0f, 0x1.b3265cp-31f, 0x1.367edp-52f, 0.0f,
     0x1.5cdaccp-119f, 0.0f, 0x1.64ad62p-96f, 0.0f, 0.0f, 0.0f, 0x1.1de92cp-41f,
     0x1.7f9df6p-15f, 0.0f, 0.0f, 0x1.c38862p-94f, 0.0f, 0x1.a4042cp-4f,
     0x1.4ef838p-28f, 0x1.3c87e2p-32f, 0.0f, 0x1.b79b26p-108f, 0x1.0be0ep-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cacd44p-15f, 0x1.2e36dap-109f, 0.0f, 0x1.3e30ep-78f,
     0x1.d03bf6p-11f, 0.0f, 0x1.2189dep-26f, 0.0f, 0x1.142a3p-17f, 0x1p0f, 0.0f, 0.0f,
     0x1.3fee6ep-39f, 0x1.22815ep-58f, 0.0f, 0.0f, 0x1.e86d48p-31f, 0.0f, 0.0f,
     0x1.78e292p-120f, 0x1.57cad6p-15f, 0x1.086ea4p-59f, 0.0f, 0.0f, 0x1.2e9aeep-95f,
     0x1.6b8ec2p-65f, 0.0f, 0x1.2058dap-45f, 0x1.a66aa4p-63f, 0.0f, 0x1.86b40cp-54f,
     0.0f, 0.0f, 0x1.b5d428p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5a02cp-66f, 0.0f,
     0x1.5f978ep-116f, 0.0f, 0x1.3ccbb4p-62f, 0x1.b5f44p-81f, 0x1.950056p-13f,
     0x1.a7b45p-33f, 0.0f, 0.0f, 0.0f, 0x1.fddf1ep-100f, 0x1.c870eap-30f, 0.0f,
     0x1.fd9e32p-104f, 0x1.70ee1ep-12f, 0.0f, 0x1.692fc4p-68f, 0x1.0095f2p-118f,
     0x1.7c453ap-118f, 0.0f, 0.0f, 0x1.207236p-15f, 0x1.55b0aep-5f, 0x1.9dfeccp-112f,
     0x1.ea206p-100f, 0.0f, 0x1.6e395cp-114f, 0x1.4d36a8p-67f, 0x1.50660ep-61f,
     0x1.cc856cp-36f, 0x1.adc69p-23f, 0x1.982f5ap-43f, 0.0f, 0x1.662d6p-33f, 0.0f,
     0x1.25a8e2p-66f, 0x1.025e9p-74f, 0.0f, 0x1.bd0fa4p-92f, 0x1.c5680ap-30f,
     0x1.b3002ap-15f, 0x1.3b7624p-3f, 0x1.ef0294p-41f, 0x1.9fdc68p-10f, 0.0f, 0.0f,
     0x1.5b8a9ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6282bap-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b45d04p-30f, 0x1.81621cp-102f, 0.0f, 0x1.96cf36p-123f,
     0x1.f0c332p-31f, 0.0f, 0x1.a93b22p-86f, 0.0f, 0x1.872e28p-7f, 0.0f, 0.0f,
     0x1.0f5bbep-10f, 0.0f, 0x1.367cfep-22f, 0x1.332e08p-24f, 0.0f, 0x1.f62ba2p-35f,
     0.0f, 0x1.05eb84p-17f, 0x1.c7da7p-14f, 0x1.c18606p-23f, 0.0f, 0x1.3d3024p-26f,
     0x1.698276p-1f, 0x1.d199bep-102f, 0.0f, 0x1.a82d34p-47f, 0x1.b8287cp-74f,
     0x1.f14754p-83f, 0x1.302e5ap-115f, 0.0f, 0.0f, 0x1.23bf9cp-9f, 0.0f,
     0x1.4e6d5ep-89f, 0.0f, 0x1.a82114p-104f, 0x1.cf193cp-27f, 0x1.da201ap-87f,
     0x1.17b848p-97f, 0.0f, 0x1.4953dp-118f, 0x1.824f38p-21f, 0x1.c69d5cp-94f,
     0x1.42ce5p-34f, 0x1.4ab68ep-30f, 0.0f, 0.0f, 0x1.363cc6p-95f, 0x1.475e88p-62f,
     0.0f, 0x1.5db828p-126f, 0x1.1fbef8p-121f, 0x1.76c398p-10f, 0.0f, 0.0f,
     0x1.f46a1p-90f, 0.0f, 0.0f, 0x1.e38facp-86f, 0.0f, 0x1.981732p-68f, 0.0f,
     0x1.0f2b9ap-61f, 0x1.1fba1cp-92f, 0.0f, 0x1.6f8c66p-35f, 0.0f, 0x1.4612c4p-85f,
     0x1.9e62bep-81f, 0x1.b72b8ap-100f, 0x1.33ce1p-4f, 0x1.a22084p-12f, 0.0f, 0.0f,
     0.0f, 0x1.f02d8p-3f, 0.0f, 0.0f, 0x1.464118p-13f, 0x1.3263c2p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60f12cp-121f, 0.0f, 0x1.64812ap-57f, 0x1.4bf762p-44f,
     0x1.9c2b9p-92f, 0.0f, 0.0f, 0x1.d310a6p-92f, 0.0f, 0.0f, 0x1.d0241p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4e826p-48f, 0.0f, 0x1.95cc1p-4f,
     0x1.2813c4p-96f, 0.0f, 0x1.555d08p-101f, 0x1.c84b2cp-47f, 0.0f, 0.0f,
     0x1.68a30ap-89f, 0.0f, 0.0f, 0x1.d96fc8p-86f, 0.0f, 0x1.545c28p-118f, 0.0f,
     0x1.172166p-106f, 0x1.d050a4p-125f, 0x1.89ba5ep-4f, 0.0f, 0.0f, 0.0f,
     0x1.6729a4p-65f, 0.0f, 0.0f, 0x1.3c2978p-120f, 0.0f, 0.0f, 0x1.23a878p-92f, 0.0f,
     0x1.e78dccp-118f, 0x1.e318a4p-57f, 0.0f, 0.0f, 0x1.123a22p-4f, 0x1.3c651cp-80f,
     0x1.cde55ap-14f, 0.0f, 0x1.3abc68p-27f, 0.0f, 0x1.adb6c4p-99f, 0.0f,
     0x1.1b0abap-95f, 0.0f, 0.0f, 0x1.90da06p-96f, 0.0f, 0x1.c83534p-17f, 0.0f, 0.0f,
     0x1.02b166p-76f, 0x1.46272cp-85f, 0.0f, 0x1.acfa84p-30f, 0x1.2b678ap-35f, 0.0f,
     0x1.893c0ap-55f, 0x1.7c8c5p-19f, 0.0f, 0x1.b40dbcp-30f, 0x1.d9601p-114f,
     0x1.c23614p-33f, 0x1.f2420cp-32f, 0.0f, 0.0f, 0x1.8699a4p-39f, 0x1.1404b6p-66f,
     0.0f, 0.0f, 0.0f, 0x1.6ee3fcp-97f, 0x1.a924dap-25f, 0.0f, 0.0f, 0x1.0b1aa8p-50f,
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
            tmp1 = Sleef_rintf1_purecfma(tmp0);
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
    printf("Sleef_rintf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_rintf1_purecfma bench acc %a\n", global_bench_acc);
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
