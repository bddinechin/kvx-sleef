/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammaf4_u10kvx.c --function \
 *     Sleef_finz_lgammaf4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.a2ef8ep-62f, 0.0f, 0.0f, 0x1.b1e0bep-79f, 0.0f, 0x1.b1c798p-86f, 0.0f,
     0x1.189858p-82f, 0x1.84a05ap-66f, 0x1.11a9d8p-70f, 0x1.488eecp-3f,
     0x1.87a9bp-106f, 0.0f, 0.0f, 0.0f, 0x1.1cd88ap-49f, 0x1.173f3cp-10f,
     0x1.2bfbep-56f, 0.0f, 0.0f, 0.0f, 0x1.8e470ep-56f, 0x1.d34d4p-90f,
     0x1.e3cdb8p-9f, 0.0f, 0.0f, 0.0f, 0x1.486dcep-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d760cap-119f, 0.0f, 0.0f, 0x1.69d248p-4f, 0x1.1ea54p-92f, 0x1.779b4ep-36f,
     0x1.58fa96p-72f, 0x1.767fbp-17f, 0x1.2e5ef2p-3f, 0.0f, 0.0f, 0.0f,
     0x1.9e2924p-59f, 0.0f, 0.0f, 0.0f, 0x1.71730cp-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58fde4p-49f, 0.0f, 0x1.485c68p-101f, 0x1.d1036cp-33f, 0.0f, 0.0f, 0x1p0f,
     0x1.52ad7cp-39f, 0x1.35f4eap-60f, 0.0f, 0x1.894d6p-119f, 0.0f, 0x1.2dd76ap-38f,
     0.0f, 0x1.56eb56p-97f, 0.0f, 0x1.9ca342p-57f, 0x1.793bc4p-65f, 0x1.32eb9cp-91f,
     0.0f, 0x1.99b438p-7f, 0.0f, 0.0f, 0x1.a0b4e2p-106f, 0x1.e522f8p-114f,
     0x1.68ae4ep-30f, 0.0f, 0.0f, 0.0f, 0x1.db24e6p-94f, 0.0f, 0.0f, 0x1.787afcp-52f,
     0.0f, 0x1.eb0296p-101f, 0.0f, 0x1.5523p-108f, 0.0f, 0.0f, 0x1.662556p-7f, 0.0f,
     0.0f, 0.0f, 0x1.348a1ap-4f, 0x1.83d6cep-116f, 0.0f, 0x1.027104p-58f, 0.0f, 0.0f,
     0x1.97053cp-80f, 0.0f, 0x1.851abap-29f, 0.0f, 0x1.fb031cp-111f, 0x1.24a674p-13f,
     0x1.db40e6p-124f, 0.0f, 0x1.0bb932p-40f, 0.0f, 0.0f, 0.0f, 0x1.3e8776p-73f,
     0x1.d99e22p-114f, 0.0f, 0x1.d853f4p-28f, 0x1.04a474p-74f, 0x1.252f4cp-15f, 0.0f,
     0x1.199eb6p-45f, 0x1.0ec2c6p-113f, 0x1.cbb57cp-107f, 0.0f, 0x1.0d0ba4p-28f,
     0x1.63e1fp-2f, 0.0f, 0.0f, 0.0f, 0x1.c01866p-123f, 0.0f, 0.0f, 0x1.9c7b96p-16f,
     0x1.afb5cep-77f, 0x1.0324b6p-121f, 0.0f, 0x1.eabcdcp-16f, 0.0f, 0.0f,
     0x1.f68644p-80f, 0x1p0f, 0x1.ceedbap-81f, 0.0f, 0x1.a9c626p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.140c96p-92f, 0x1.85855cp-106f, 0.0f,
     0x1.9473ap-8f, 0.0f, 0.0f, 0x1.280a72p-42f, 0x1.8c5abep-33f, 0x1.64fb7cp-105f,
     0x1.cf9c56p-40f, 0.0f, 0.0f, 0x1.21666cp-89f, 0x1.415618p-72f, 0.0f, 0.0f, 0.0f,
     0x1.5f360ep-9f, 0.0f, 0x1.838db4p-29f, 0x1.4e6bf6p-93f, 0x1.9bfc66p-88f, 0.0f,
     0.0f, 0.0f, 0x1.3d8786p-39f, 0.0f, 0x1.230498p-73f, 0x1.15df84p-26f,
     0x1.1aa04p-49f, 0x1.cc8a3ap-97f, 0x1.98134ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.d8a842p-10f, 0.0f, 0x1.f07136p-105f, 0.0f, 0.0f, 0.0f, 0x1.2f651ap-100f,
     0x1.fc74b4p-118f, 0.0f, 0x1.d2112p-40f, 0.0f, 0.0f, 0x1.07d7c4p-10f, 0.0f, 0.0f,
     0x1.29bca4p-7f, 0x1.8bf5c4p-30f, 0x1.f23a28p-36f, 0x1.086d8ap-93f,
     0x1.06e6d4p-124f, 0x1.428a12p-102f, 0.0f, 0.0f, 0x1.882fa4p-7f, 0x1.cb3a78p-29f,
     0x1.09db74p-125f, 0x1.f71124p-75f, 0.0f, 0.0f, 0.0f, 0x1.5aff84p-113f,
     0x1.f3527ap-37f, 0.0f, 0.0f, 0x1.c25a28p-120f, 0.0f, 0.0f, 0x1.c40cdcp-22f,
     0x1.2afcap-123f, 0.0f, 0.0f, 0.0f, 0x1.6c8496p-96f, 0x1.b87746p-116f,
     0x1.9f9878p-29f, 0x1.432904p-5f, 0.0f, 0.0f, 0.0f, 0x1.406856p-35f, 0.0f, 0.0f,
     0x1.0a555cp-85f, 0.0f, 0.0f, 0x1.440fc6p-5f, 0x1.e11d74p-25f, 0x1.e4bd8p-3f,
     0x1.037636p-111f, 0.0f, 0x1.cbe058p-78f, 0x1.ea9e8ap-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dc40d8p-75f, 0.0f, 0.0f, 0x1.d89412p-68f, 0x1.d3909ap-104f,
     0x1.136d42p-122f, 0.0f, 0.0f, 0x1.3e5d0ep-39f, 0.0f, 0.0f, 0x1.eb713cp-100f,
     0x1.adaf18p-63f, 0x1.578e58p-126f, 0.0f, 0x1.1f7b2cp-83f, 0.0f, 0.0f,
     0x1.6c2d5p-1f, 0.0f, 0.0f, 0.0f, 0x1.f034dcp-15f, 0x1.cbe6a8p-123f, 0.0f,
     0x1.6321dp-119f, 0x1.4a9478p-38f, 0x1.5f9978p-13f, 0x1.66ecdp-74f,
     0x1.578884p-97f, 0.0f, 0x1.f034dap-4f, 0.0f, 0.0f, 0x1.ebef2ap-72f, 0.0f, 0.0f,
     0x1.7d334cp-122f, 0.0f, 0x1.644132p-108f, 0.0f, 0x1.d615aap-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.27adcep-79f, 0.0f, 0x1.2f2c3ap-82f, 0x1.40d2d6p-12f, 0.0f,
     0x1.ff2e76p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e38ef2p-6f, 0x1.4d0644p-58f,
     0x1.4b3b52p-9f, 0.0f, 0x1.b1cd92p-62f, 0x1.7b51eap-87f, 0.0f, 0x1.0a0f34p-51f,
     0x1.ea6ab8p-61f, 0x1.e25812p-46f, 0x1.f5408ap-125f, 0.0f, 0x1.9ecddp-92f,
     0x1.bc6cacp-111f, 0x1.11c9e2p-120f, 0x1.36babep-50f, 0.0f, 0x1p0f, 0.0f,
     0x1.264e92p-102f, 0x1.2a80aep-117f, 0.0f, 0x1.f5d71cp-96f, 0.0f, 0.0f,
     0x1.07ba5p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93259p-76f, 0x1.2c5236p-10f,
     0.0f, 0x1.814598p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63c1ccp-64f, 0.0f, 0.0f,
     0x1.074d38p-9f, 0.0f, 0.0f, 0x1.fa0052p-117f, 0x1.aab668p-84f, 0x1.9d2eb8p-94f,
     0.0f, 0x1.607cacp-123f, 0x1.55e336p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd7c8ap-48f,
     0.0f, 0x1.aa101p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4325fap-36f, 0.0f, 0.0f, 0.0f,
     0x1.2c01dp-24f, 0x1.605dcp-63f, 0.0f, 0x1.dea384p-117f, 0x1.bbe02p-14f, 0.0f,
     0x1.54202p-59f, 0x1.ac6902p-16f, 0x1p0f, 0.0f, 0x1.afed8ep-123f,
     0x1.f9a36ep-122f, 0x1.8e51dep-45f, 0.0f, 0x1.f3a998p-52f, 0.0f, 0.0f, 0.0f,
     0x1.fbd792p-69f, 0.0f, 0x1.3e79b4p-120f, 0x1.4a1772p-10f, 0.0f, 0.0f,
     0x1.02d42ap-122f, 0.0f, 0.0f, 0x1.d8449ep-31f, 0.0f, 0.0f, 0.0f, 0x1.a01a2cp-33f,
     0x1.1099cep-48f, 0x1.712cc2p-100f, 0x1.cc557cp-34f, 0x1.084ed6p-38f, 0.0f,
     0x1.4ba354p-38f, 0.0f, 0.0f, 0x1.767adap-4f, 0x1.aa629ap-47f, 0.0f,
     0x1.f8f334p-73f, 0.0f, 0x1.d6f1c2p-77f, 0.0f, 0.0f, 0x1.8f4c3p-13f, 0.0f,
     0x1.2c22acp-51f, 0x1.1689e2p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.deb044p-91f, 0.0f,
     0x1.14fe48p-84f, 0.0f, 0x1.61e5cap-76f, 0x1.25b9e8p-67f, 0x1.eb7256p-40f, 0.0f,
     0x1.aea39ep-126f, 0.0f, 0x1.3d2256p-96f, 0.0f, 0x1.ec6812p-28f, 0.0f, 0.0f,
     0x1.a89c38p-30f, 0x1.98f146p-64f, 0x1.25364ep-11f, 0.0f, 0x1.a5c8dap-2f, 0.0f,
     0x1.039e36p-120f, 0.0f, 0.0f, 0x1.a0c438p-103f, 0x1.b1795ap-104f, 0.0f,
     0x1.9bef46p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.895acap-87f, 0x1.58de6ep-104f, 0.0f,
     0.0f, 0x1.c0156ep-14f, 0x1.2fa7b4p-70f, 0.0f, 0x1.bfaadp-106f, 0x1.29ee24p-51f,
     0x1.f88a9cp-78f, 0.0f, 0x1.31a22ep-49f, 0.0f, 0.0f, 0x1.a08432p-49f,
     0x1.91e31ap-12f, 0.0f, 0x1.61fc6ep-30f, 0.0f, 0x1.c5c102p-37f, 0.0f,
     0x1.4199eep-84f, 0.0f, 0x1.542912p-125f, 0x1.495f06p-103f, 0x1.76f3bp-18f, 0.0f,
     0.0f, 0x1.f59c5ep-16f, 0x1.3e9ae6p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.127434p-3f,
     0.0f, 0.0f, 0.0f, 0x1.b7e5d6p-63f, 0x1.d31f24p-18f, 0x1.f6e508p-70f,
     0x1.0a027ep-38f, 0x1.cb8e76p-113f, 0x1.de2c12p-92f, 0.0f, 0.0f, 0.0f,
     0x1.05fe38p-80f, 0.0f, 0.0f, 0x1.5ad7e6p-73f, 0.0f, 0.0f, 0x1.09a892p-58f, 0.0f,
     0x1.cb48fep-43f, 0x1.a3351ep-63f, 0.0f, 0.0f, 0.0f, 0x1.3acf14p-26f, 0.0f,
     0x1.e9da8p-46f, 0.0f, 0.0f, 0.0f, 0x1.21b008p-72f, 0x1.4e6696p-112f,
     0x1.8046fap-21f, 0.0f, 0.0f, 0.0f, 0x1.fa232ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e25424p-85f, 0x1.9d73cap-111f, 0x1.0a0996p-16f, 0.0f, 0x1.6ae152p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.36504ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdb57cp-100f, 0.0f, 0.0f, 0x1.f2f948p-117f, 0x1.ee553p-20f, 0x1.cf848cp-23f,
     0x1.0af7c6p-30f, 0x1.08e8b6p-5f, 0.0f, 0.0f, 0.0f, 0x1.30de8ep-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4794f2p-73f, 0x1.eb0fe2p-92f, 0x1.44e4f6p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6727b4p-111f, 0.0f, 0.0f, 0x1.fdc93ep-81f, 0x1.422ef4p-72f,
     0x1.b56674p-49f, 0x1.8c09ecp-57f, 0x1.5c784cp-111f, 0x1.4a165cp-22f, 0.0f,
     0x1.2805f6p-112f, 0.0f, 0.0f, 0.0f, 0x1.28fe6p-53f, 0.0f, 0.0f, 0x1.8e9278p-109f,
     0.0f, 0.0f, 0x1.4f72f4p-120f, 0.0f, 0x1.b329fep-79f, 0x1.b7d91cp-46f,
     0x1.e84e1p-5f, 0.0f, 0x1.d5c7a8p-63f, 0.0f, 0x1.7eb394p-85f, 0.0f, 0.0f,
     0x1.4b202p-66f, 0x1.ba48ecp-70f, 0.0f, 0x1.85603p-41f, 0.0f, 0x1.524ba2p-16f,
     0x1.1dc50cp-116f, 0.0f, 0x1.04442cp-106f, 0.0f, 0x1.57278ap-69f, 0x1.e02c5cp-28f,
     0x1.747134p-34f, 0x1.fadbap-53f, 0.0f, 0.0f, 0x1.015864p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f26d38p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5137cp-54f,
     0.0f, 0x1.a6ff84p-36f, 0x1.993cc8p-70f, 0x1.32ee2p-4f, 0.0f, 0.0f,
     0x1.794edcp-34f, 0.0f, 0x1.ff2f6p-107f, 0.0f, 0x1.6304eep-50f, 0x1.208b6cp-45f,
     0x1.1b7f64p-48f, 0x1.d51c9cp-97f, 0x1.3d1fbcp-117f, 0x1.be6364p-82f,
     0x1.642c1cp-103f, 0x1.b7c8fep-32f, 0.0f, 0x1.9be416p-34f, 0x1.886116p-40f, 0.0f,
     0x1.b47276p-79f, 0x1.7f74a4p-90f, 0.0f, 0x1.c34984p-108f, 0x1.ca978ap-55f,
     0x1.a4f992p-96f, 0.0f, 0.0f, 0x1.5ed166p-11f, 0x1.1d897cp-100f, 0.0f,
     0x1.6d2cccp-7f, 0.0f, 0x1.3d4402p-81f, 0.0f, 0.0f, 0.0f, 0x1.164d44p-8f,
     0x1.3b2daap-30f, 0x1.ed7ddep-40f, 0x1.d6d658p-63f, 0.0f, 0x1.5930d2p-26f,
     0x1.1611b6p-43f, 0.0f, 0x1.fc720ap-55f, 0x1.7aa6bp-22f, 0.0f, 0.0f,
     0x1.48219cp-110f, 0.0f, 0x1.01157ap-54f, 0x1.db865ep-19f, 0x1.4198ap-26f, 0.0f,
     0x1.02c9c6p-98f, 0x1.df1f18p-70f, 0.0f, 0x1.ab0182p-77f, 0x1.f6e91ap-31f, 0.0f,
     0.0f, 0.0f, 0x1.f3e53cp-102f, 0x1.37a3dap-108f, 0x1.42f0cep-53f, 0.0f,
     0x1.e126b2p-118f, 0.0f, 0x1.ba4166p-108f, 0x1.4aad54p-30f, 0x1.950b3cp-105f,
     0.0f, 0x1p0f, 0x1.4fa79cp-57f, 0x1.a71ae4p-29f, 0.0f, 0x1.2cff9ap-63f, 0.0f,
     0x1.ea9b3p-2f, 0x1.30ffc4p-42f, 0x1.730e42p-1f, 0.0f, 0.0f, 0x1.115a98p-49f,
     0.0f, 0.0f, 0x1.a3f9cp-4f, 0x1.4ee8dep-49f, 0x1.90ab04p-66f, 0.0f,
     0x1.326d74p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ee876p-31f, 0.0f,
     0x1.e203eap-4f, 0.0f, 0.0f, 0x1.6b1a8ep-50f, 0x1.282b8p-46f, 0x1.ec2c4ap-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.081c04p-122f, 0.0f, 0x1.7302fap-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b230fcp-43f, 0x1.aae6b4p-81f,
     0.0f, 0.0f, 0x1.57568p-94f, 0x1.36b66ap-65f, 0x1.6be84ap-17f, 0.0f, 0.0f, 0.0f,
     0x1.76c57ep-113f, 0.0f, 0x1.4f0eaep-65f, 0x1.645d26p-11f, 0.0f, 0x1.f1d044p-68f,
     0x1.a0971p-74f, 0x1.1a319ap-12f, 0.0f, 0.0f, 0.0f, 0x1.728fc4p-67f, 0.0f, 0.0f,
     0.0f, 0x1.e951dep-75f, 0x1.e688d2p-33f, 0x1.db13d8p-4f, 0.0f, 0x1.f02538p-45f,
     0.0f, 0.0f, 0x1.df4658p-24f, 0.0f, 0.0f, 0.0f, 0x1.e3f476p-79f, 0x1.fd4b68p-75f,
     0x1.eeb7eep-123f, 0.0f, 0.0f, 0x1.a30e62p-114f, 0.0f, 0.0f, 0x1.b5b18ep-111f,
     0x1.ce9686p-28f, 0x1.c6b6fep-21f, 0x1.bffb2ep-111f, 0x1.574d28p-16f,
     0x1.054dbcp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a51eaep-31f, 0x1.642374p-93f, 0.0f,
     0.0f, 0x1.97c49p-11f, 0x1.daa5bp-26f, 0.0f, 0.0f, 0x1.a67e76p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a707cp-31f, 0.0f, 0x1.5a6068p-37f, 0.0f,
     0x1.fc5b9ep-44f, 0x1.7c55dap-56f, 0x1.147036p-35f, 0x1.de5172p-48f, 0.0f,
     0x1.65e15ep-49f, 0x1.f824a4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5077b8p-7f, 0.0f,
     0.0f, 0x1.afc918p-103f, 0x1.132078p-34f, 0x1.8b7b48p-83f, 0x1.530b1ep-122f, 0.0f,
     0.0f, 0x1.ba99f4p-71f, 0.0f, 0x1.35c04p-44f, 0.0f, 0x1.288bfap-108f,
     0x1.eb79fep-72f, 0x1.583662p-65f, 0x1.fe6262p-121f, 0.0f, 0x1.a0866p-94f,
     0x1.3038dcp-65f, 0x1.e41088p-40f, 0x1.f77cdep-116f, 0.0f, 0.0f, 0x1.06105p-97f,
     0x1.ea8504p-42f, 0x1.92c8cap-83f, 0x1.ba4002p-122f, 0x1.57ea08p-52f,
     0x1.841488p-33f, 0.0f, 0.0f, 0.0f, 0x1.416202p-64f, 0x1.b01d1ap-94f,
     0x1.1a5ddcp-28f, 0.0f, 0.0f, 0.0f, 0x1.02a71ep-87f, 0x1.3f5972p-117f, 0.0f,
     0x1.680b98p-98f, 0x1.1ba10cp-86f, 0.0f, 0x1.d7923ap-30f, 0.0f, 0x1.0621cp-86f,
     0x1.1392f6p-71f, 0x1.9b59eap-98f, 0.0f, 0x1.deb308p-123f, 0x1.35e7d2p-91f,
     0x1.3815e4p-63f, 0x1.0bb834p-70f, 0.0f, 0x1.bea80cp-38f, 0x1.876bdcp-36f,
     0x1.14b53ep-59f, 0.0f, 0x1.803eb8p-61f, 0x1.a8ee54p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e7fb52p-83f, 0.0f, 0.0f, 0x1.db43dap-78f, 0x1.e501a2p-23f,
     0x1.78f196p-48f, 0.0f, 0x1.62d2e2p-57f, 0.0f, 0x1.bee15p-31f, 0x1.a6b08cp-75f,
     0x1.46ee86p-80f, 0x1.2e0ab4p-31f, 0.0f, 0x1.35b532p-10f, 0.0f, 0x1.865f28p-112f,
     0x1.21127p-75f, 0x1.1ae46cp-28f, 0x1.fa1e64p-97f, 0x1.e47302p-86f, 0.0f, 0.0f,
     0x1.721754p-26f, 0.0f, 0x1.35065p-49f, 0.0f, 0.0f, 0x1.2842ccp-14f,
     0x1.a258dcp-125f, 0.0f, 0x1.f3c1d6p-9f, 0x1.2faa4p-101f, 0.0f, 0.0f,
     0x1.9030ccp-75f, 0.0f, 0.0f, 0x1.89e8cep-65f, 0.0f, 0x1.178ad2p-71f, 0.0f, 0.0f,
     0x1.af6eb8p-104f, 0x1.03fcb6p-37f, 0x1.c7b6ep-108f, 0.0f, 0x1.213e04p-49f, 0.0f,
     0.0f, 0x1.909af2p-60f, 0.0f, 0.0f, 0x1.2d03dcp-98f, 0x1.16d16ap-54f, 0.0f, 0.0f,
     0.0f, 0x1.7b896cp-40f, 0.0f, 0x1.82f0f6p-61f, 0.0f, 0x1.9e809cp-10f,
     0x1.f2ba1cp-17f, 0.0f, 0x1.5f11eap-3f, 0.0f, 0.0f, 0.0f, 0x1.7cab4ap-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.23beb6p-12f, 0.0f, 0x1.82fac2p-107f, 0.0f, 0.0f,
     0x1.1d7476p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_lgammaf4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_lgammaf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_lgammaf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
