/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_copysignf4_kvx.c --function \
 *     Sleef_finz_copysignf4_kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.9ec7c4p-67f, 0x1.2339dp-39f, 0.0f, 0.0f, 0.0f, 0x1.f89c8p-104f,
     0x1.9fa9c2p-6f, 0x1.9216c2p-27f, 0.0f, 0.0f, 0.0f, 0x1.384ddcp-1f, 0.0f, 0.0f,
     0.0f, 0x1.27485cp-111f, 0x1.884c6p-14f, 0.0f, 0x1.adc174p-107f, 0x1.41f70ep-92f,
     0x1.9da674p-122f, 0x1.6599bp-91f, 0.0f, 0.0f, 0x1.fd3cbap-80f, 0.0f,
     0x1.3fd914p-65f, 0x1.38687ap-123f, 0x1.9239e6p-10f, 0x1.b1c1c6p-95f, 0.0f,
     0x1.031ccep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf6d8cp-16f, 0x1.61b682p-36f, 0.0f,
     0x1.4742aap-40f, 0.0f, 0x1.04079ap-105f, 0x1.364e1ep-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c2db8p-36f, 0.0f, 0x1.ae8dbcp-106f, 0x1.b932bcp-33f, 0.0f,
     0.0f, 0.0f, 0x1.bd71fp-91f, 0.0f, 0.0f, 0x1.f4264ap-63f, 0.0f, 0x1.e28ecp-55f,
     0.0f, 0.0f, 0x1.887432p-59f, 0.0f, 0.0f, 0x1.5051d8p-73f, 0x1.995dp-33f,
     0x1.c790f6p-68f, 0x1.0ae088p-5f, 0x1.78d03p-44f, 0x1.fc9538p-8f, 0.0f,
     0x1.947ba8p-27f, 0x1.c3204cp-75f, 0x1.d2dc12p-18f, 0.0f, 0.0f, 0x1.80a4cep-66f,
     0.0f, 0x1.50c47cp-22f, 0x1.77c9bap-23f, 0x1.3e8398p-1f, 0.0f, 0x1.7b0d9ep-18f,
     0x1.0413bep-96f, 0x1.9b826p-74f, 0x1.be916ap-31f, 0x1.e67efep-126f,
     0x1.c9f6aap-44f, 0.0f, 0.0f, 0x1.f39e78p-90f, 0x1.5b2c08p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f5b1e6p-81f, 0.0f, 0x1.83ae42p-12f, 0x1.d7dbf8p-79f,
     0x1.3f51f2p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eef8ap-22f, 0x1.528bf4p-114f, 0.0f,
     0x1.84f8fep-118f, 0.0f, 0x1.1e3266p-15f, 0x1.443de4p-77f, 0.0f, 0x1.098c5p-41f,
     0.0f, 0.0f, 0.0f, 0x1.2a298ap-23f, 0.0f, 0.0f, 0x1.42f16ap-50f, 0.0f, 0.0f,
     0x1.a39e1ap-33f, 0.0f, 0.0f, 0.0f, 0x1.2e1d66p-74f, 0.0f, 0x1.6dda1ap-113f, 0.0f,
     0x1.bda6dep-75f, 0x1.eab91ap-111f, 0.0f, 0x1.88cb1ep-9f, 0x1.168cbep-85f, 0.0f,
     0x1.a65e8ap-77f, 0.0f, 0.0f, 0x1.b1e92cp-112f, 0.0f, 0.0f, 0x1.9714c4p-100f,
     0x1.92cb6ep-106f, 0x1.b52284p-24f, 0.0f, 0.0f, 0.0f, 0x1.cb3de6p-4f,
     0x1.9fe12p-35f, 0.0f, 0x1.fac31ep-117f, 0x1.211e3ep-36f, 0x1.766884p-60f,
     0x1.1d4a8ep-17f, 0.0f, 0x1.e59964p-63f, 0.0f, 0x1.75a9eap-20f, 0.0f,
     0x1.4d8dc8p-117f, 0x1.aaf438p-47f, 0x1.9008p-52f, 0x1.5a0e54p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9da612p-72f, 0.0f, 0x1.516fcap-117f, 0.0f, 0.0f, 0.0f,
     0x1.813404p-25f, 0.0f, 0x1.544fccp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d37094p-93f,
     0x1.9792e4p-56f, 0.0f, 0x1.a64f14p-63f, 0.0f, 0.0f, 0x1.9f67c4p-63f, 0.0f,
     0x1.21b6a6p-12f, 0.0f, 0.0f, 0x1.c5c8ap-110f, 0.0f, 0.0f, 0x1.2b6348p-13f,
     0x1.07c666p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.840614p-31f,
     0x1.f990a8p-24f, 0.0f, 0x1.1d269ap-104f, 0.0f, 0x1.6dp-16f, 0x1.e00586p-9f,
     0x1.7f7fa8p-27f, 0x1.5bccbcp-79f, 0.0f, 0x1.e5d928p-104f, 0x1.380002p-18f,
     0x1.853088p-112f, 0x1.1dc026p-122f, 0x1.da12p-75f, 0x1.aeccb2p-15f, 0.0f,
     0x1.5035e6p-73f, 0x1.fdb55cp-120f, 0.0f, 0x1.9538dp-27f, 0.0f, 0x1.f796cp-88f,
     0x1.247a1ep-45f, 0x1.d7ed9cp-8f, 0.0f, 0x1.f43d12p-60f, 0.0f, 0x1.513326p-124f,
     0x1.5ac9cp-121f, 0.0f, 0x1.ed87a4p-101f, 0x1.4a61c8p-69f, 0x1.c3aa4ep-46f, 0.0f,
     0x1.b7aca6p-28f, 0x1.b3f45ep-54f, 0x1.b4b41cp-99f, 0x1.fa15b6p-111f,
     0x1.a60ap-47f, 0.0f, 0x1.20db1ep-95f, 0.0f, 0.0f, 0.0f, 0x1.826096p-114f, 0.0f,
     0x1.e40abp-36f, 0x1.ea7b14p-98f, 0x1.4273eap-125f, 0.0f, 0.0f, 0x1.5f800cp-26f,
     0x1.a6f43cp-6f, 0x1.e1bd5cp-25f, 0x1.dcb2e4p-94f, 0x1.8a7bbp-11f,
     0x1.70a0cap-26f, 0.0f, 0.0f, 0x1.e7f168p-105f, 0x1.526d54p-19f, 0x1.5b520cp-45f,
     0x1.460b02p-48f, 0.0f, 0.0f, 0x1.8d9cbap-2f, 0.0f, 0.0f, 0x1.4948a4p-102f,
     0x1.94778ap-61f, 0.0f, 0x1.924d8ap-91f, 0x1.d28c22p-34f, 0x1.965ae6p-64f, 0.0f,
     0.0f, 0x1.62fcep-81f, 0.0f, 0x1.c117a4p-24f, 0x1.780dap-41f, 0x1.1d293p-108f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ae316p-105f, 0x1.f5f938p-64f,
     0x1.bfc532p-90f, 0.0f, 0.0f, 0x1.66d532p-60f, 0.0f, 0.0f, 0x1.cbe22cp-43f, 0.0f,
     0x1.ae852ep-15f, 0.0f, 0x1.539edp-32f, 0.0f, 0.0f, 0x1.ea19d8p-64f, 0.0f,
     0x1.2f29dep-28f, 0x1.cd4c8ap-41f, 0.0f, 0.0f, 0.0f, 0x1.de8676p-104f, 0.0f, 0.0f,
     0x1.1036cp-25f, 0x1.a37bdep-116f, 0.0f, 0.0f, 0x1.35f08cp-94f, 0x1.1c750ep-1f,
     0x1.794fdap-91f, 0.0f, 0.0f, 0.0f, 0x1.de9c2ap-71f, 0.0f, 0.0f, 0.0f,
     0x1.b97a38p-123f, 0.0f, 0.0f, 0x1.d96c44p-82f, 0x1.dcde56p-89f, 0.0f, 0.0f,
     0x1.905d42p-57f, 0x1.aca1e4p-84f, 0x1.2f8d2ep-48f, 0x1.e94eap-49f, 0.0f, 0.0f,
     0.0f, 0x1.97c426p-110f, 0.0f, 0x1.cab276p-2f, 0.0f, 0x1.a61d32p-71f, 0.0f,
     0x1.030f3p-7f, 0.0f, 0x1.5d1ddp-109f, 0.0f, 0x1.77147ap-60f, 0x1.91d16ap-126f,
     0.0f, 0x1.8ffae4p-29f, 0x1.d08f36p-63f, 0.0f, 0x1.39e33p-68f, 0x1.eb984ap-41f,
     0x1.a3ba22p-28f, 0.0f, 0x1.c9a336p-74f, 0x1.0b8098p-11f, 0x1.bd1e2ap-20f, 0.0f,
     0x1.d22866p-24f, 0x1.6f8282p-5f, 0.0f, 0.0f, 0x1.c6c4dp-124f, 0x1.7637b4p-109f,
     0x1.829ed4p-30f, 0x1.94edp-61f, 0x1.8360cap-37f, 0.0f, 0.0f, 0x1.41a07cp-1f,
     0x1.43cad8p-69f, 0x1.c6b458p-27f, 0.0f, 0x1.8a836cp-40f, 0.0f, 0x1.b9987ep-82f,
     0.0f, 0.0f, 0x1.00448ep-105f, 0x1.806668p-84f, 0.0f, 0x1.9f90fep-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.deb558p-73f, 0.0f, 0x1.86452ep-5f, 0x1.1288fp-44f,
     0x1.62ebfcp-103f, 0.0f, 0x1.7e9fd8p-117f, 0.0f, 0x1.5b4e92p-50f, 0x1.6ed166p-16f,
     0.0f, 0.0f, 0.0f, 0x1.2d0984p-35f, 0x1.564ff6p-88f, 0.0f, 0.0f, 0.0f,
     0x1.f25a4cp-12f, 0x1.e7ae1cp-126f, 0.0f, 0.0f, 0x1.79df3p-105f, 0x1.b99e14p-51f,
     0.0f, 0.0f, 0.0f, 0x1.a0b34ap-80f, 0x1.bf4e74p-32f, 0.0f, 0.0f, 0x1.576286p-6f,
     0x1.3e2404p-92f, 0x1.ae6a94p-79f, 0x1.0c56dp-35f, 0.0f, 0x1.2fd78ap-52f, 0.0f,
     0x1.9e2af2p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.677768p-91f, 0x1.a41502p-65f,
     0.0f, 0x1.c09a3ep-42f, 0.0f, 0x1.7446e2p-23f, 0x1.259cd2p-70f, 0x1.760fd8p-116f,
     0.0f, 0x1.580062p-33f, 0.0f, 0x1.9a4a3cp-15f, 0.0f, 0.0f, 0x1.51b8dp-46f, 0.0f,
     0x1.081ad4p-61f, 0x1.d5023cp-49f, 0.0f, 0x1.687eecp-54f, 0.0f, 0.0f,
     0x1.ee2c26p-35f, 0.0f, 0.0f, 0x1.ada73cp-28f, 0x1.788bd6p-17f, 0.0f, 0.0f,
     0x1.55eacep-53f, 0.0f, 0x1.1c292cp-41f, 0x1.eba932p-94f, 0.0f, 0.0f,
     0x1.909da2p-87f, 0x1.4e5168p-115f, 0.0f, 0.0f, 0.0f, 0x1.4c2882p-122f, 0.0f,
     0.0f, 0x1.d93978p-106f, 0x1.8c1422p-101f, 0.0f, 0x1.527962p-125f,
     0x1.2ddca2p-83f, 0.0f, 0x1.59ae64p-92f, 0.0f, 0.0f, 0x1.6ddfc8p-22f, 0.0f, 0.0f,
     0x1.9718c2p-40f, 0x1.14b03ap-35f, 0.0f, 0.0f, 0.0f, 0x1.ecbfc6p-44f, 0.0f,
     0x1.3558e6p-87f, 0.0f, 0x1.7ba76ap-19f, 0.0f, 0x1.c899f2p-89f, 0.0f,
     0x1.7f3ecp-120f, 0x1.0d6162p-93f, 0.0f, 0x1.7eb794p-22f, 0.0f, 0.0f,
     0x1.d29dbap-126f, 0x1.becab2p-65f, 0x1.5ec0aep-33f, 0x1.098522p-2f,
     0x1.fef7acp-114f, 0.0f, 0.0f, 0x1.dadc04p-119f, 0x1.cc4a96p-21f, 0x1.fba3p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e4a6ap-29f, 0x1.9518f8p-61f, 0x1.fdf8b8p-3f, 0.0f,
     0.0f, 0x1.898dc4p-40f, 0x1.6d099ep-64f, 0.0f, 0x1.a4d0eap-44f, 0x1.e9d99ep-5f,
     0.0f, 0x1.6c9c52p-21f, 0x1.e966d8p-27f, 0.0f, 0x1.80df08p-102f, 0.0f,
     0x1.8693a6p-85f, 0.0f, 0.0f, 0.0f, 0x1.28b504p-71f, 0x1.47c7acp-47f, 0.0f, 0.0f,
     0x1.74818p-79f, 0.0f, 0x1.ef9b0cp-92f, 0.0f, 0x1.e52f5ep-24f, 0x1.ba5f04p-126f,
     0.0f, 0.0f, 0.0f, 0x1.d5b4d6p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.827364p-76f, 0x1.729f54p-17f, 0.0f,
     0x1.668be6p-51f, 0.0f, 0x1.fdf70cp-65f, 0x1.09ad82p-119f, 0x1.de826p-91f, 0.0f,
     0x1.e9dae8p-10f, 0x1.7f0758p-63f, 0x1.efb558p-16f, 0.0f, 0.0f, 0x1.b9a758p-54f,
     0x1.f37de8p-37f, 0.0f, 0x1.8d68dp-29f, 0x1.3f0e46p-113f, 0.0f, 0x1.b7529cp-56f,
     0.0f, 0x1.088fcap-110f, 0.0f, 0x1.865a62p-106f, 0x1.096632p-77f,
     0x1.ec0978p-117f, 0.0f, 0x1.d0a982p-7f, 0x1.8737d8p-107f, 0x1.113b4p-30f, 0.0f,
     0x1.91f264p-96f, 0x1.9e2e3ep-15f, 0x1.1893eap-46f, 0x1.bdfe6cp-38f,
     0x1.1b6a6p-47f, 0x1.fa9236p-34f, 0.0f, 0x1.8ee2bcp-62f, 0.0f, 0x1.a4a856p-101f,
     0x1.a2460ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaf29p-78f, 0.0f,
     0x1.67905cp-98f, 0.0f, 0x1.857c6ap-86f, 0x1.5fa65ep-40f, 0x1.2ef5f8p-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbcfecp-123f, 0x1.4271cep-34f,
     0x1.18c94p-24f, 0x1.59143ap-119f, 0x1.ea92f6p-122f, 0.0f, 0x1.b5d142p-18f,
     0x1.2bfd9cp-105f, 0x1.4e03ap-69f, 0x1.b7fcf8p-115f, 0.0f, 0.0f, 0.0f,
     0x1.71e1b2p-91f, 0x1.9ec6c2p-88f, 0x1.f9d00ap-38f, 0.0f, 0.0f, 0x1.f9367p-118f,
     0.0f, 0x1.6a1c0ep-91f, 0x1.611b96p-80f, 0.0f, 0x1.20976p-77f, 0x1.6b4e36p-100f,
     0.0f, 0.0f, 0x1.f85f96p-51f, 0x1.f9a272p-5f, 0x1.cf2698p-105f, 0.0f,
     0x1.ad771ap-54f, 0.0f, 0x1.e7d3dp-92f, 0x1.2365p-39f, 0.0f, 0x1.f4d47cp-92f,
     0x1.b6b7dap-47f, 0x1.287386p-36f, 0x1.e57164p-105f, 0x1.fb4b1p-12f, 0.0f, 0.0f,
     0x1.5dcb94p-90f, 0.0f, 0x1.240458p-55f, 0.0f, 0x1.1bbe24p-1f, 0.0f, 0.0f,
     0x1.d5c79cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03be5cp-40f, 0.0f,
     0x1.3b39cap-27f, 0x1.252482p-114f, 0.0f, 0x1.5544c8p-35f, 0.0f, 0x1.b91898p-105f,
     0.0f, 0x1.7a3184p-37f, 0x1.011e4p-123f, 0x1.f583bep-40f, 0x1.47b8d4p-93f, 0.0f,
     0.0f, 0x1.e92ceap-103f, 0x1.07fa5p-55f, 0x1.7c1b3ap-39f, 0.0f, 0.0f,
     0x1.9d0dd4p-92f, 0.0f, 0x1.2e6b6p-84f, 0x1.600716p-64f, 0x1.0103a2p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0a076p-49f, 0x1.44341cp-92f,
     0x1.42a4eap-102f, 0x1.fbc3a4p-96f, 0.0f, 0x1.06e9b8p-101f, 0x1.e59fd2p-62f, 0.0f,
     0.0f, 0x1.81583p-32f, 0.0f, 0.0f, 0x1.e81c38p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcc47ep-2f, 0.0f, 0.0f, 0.0f, 0x1.bbe534p-88f, 0x1.339afep-68f, 0.0f,
     0x1.8f3c2ep-119f, 0.0f, 0x1.a4d4fcp-59f, 0x1.5dba32p-19f, 0.0f, 0x1.298dap-111f,
     0.0f, 0x1.e8c2a8p-9f, 0.0f, 0.0f, 0.0f, 0x1.e18b54p-33f, 0.0f, 0x1.3b1f9cp-105f,
     0.0f, 0.0f, 0x1.613294p-51f, 0.0f, 0.0f, 0.0f, 0x1.cf7558p-3f, 0.0f,
     0x1.2081bap-70f, 0x1.c8955ep-116f, 0.0f, 0.0f, 0x1.df3e2ep-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.672d34p-123f, 0x1.cbed86p-31f, 0.0f, 0.0f, 0.0f, 0x1.3baeep-30f, 0.0f,
     0x1.92b434p-66f, 0x1.20287ap-77f, 0x1.685be4p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29d538p-82f, 0x1.82ef28p-104f, 0.0f, 0.0f, 0x1.1767dap-71f, 0.0f, 0.0f, 0.0f,
     0x1.1e2f9ap-13f, 0.0f, 0x1.454e94p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ab5d4p-39f,
     0x1.385024p-77f, 0.0f, 0.0f, 0.0f, 0x1.3e385ep-126f, 0x1.a71f9cp-45f,
     0x1.8495c8p-37f, 0.0f, 0x1.0aa3aep-65f, 0.0f, 0x1.2d476p-85f, 0x1.cf2cb2p-27f,
     0x1.57449cp-50f, 0.0f, 0x1.8fb4bep-103f, 0x1.f7bf18p-79f, 0x1.ca6226p-91f, 0.0f,
     0x1.5c48fcp-97f, 0.0f, 0x1.0c0224p-76f, 0x1.a9f45p-64f, 0x1.9a0ed4p-79f, 0.0f,
     0.0f, 0x1.a97238p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a100dap-113f, 0.0f,
     0x1.9276e2p-18f, 0x1.a39f5ep-41f, 0.0f, 0x1.3b1d2ap-8f, 0.0f, 0.0f, 0.0f,
     0x1.406654p-80f, 0x1.0f0638p-62f, 0.0f, 0x1.eb8a7ap-79f, 0x1.01ea52p-59f,
     0x1.2ae6p-111f, 0.0f, 0.0f, 0x1.5b21b6p-54f, 0x1.c2decep-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5a98dap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a695cp-79f, 0.0f,
     0x1.56d18p-9f, 0.0f, 0x1.749606p-17f, 0.0f, 0x1.881fe4p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cf42a6p-84f, 0x1.f573dp-47f, 0x1.ed41ccp-40f, 0.0f,
     0x1.b03374p-61f, 0.0f, 0x1.6da326p-118f, 0x1.e27306p-1f, 0x1.386438p-85f, 0.0f,
     0x1.c1497cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dae5ep-110f, 0.0f,
     0x1.7e91ecp-104f, 0.0f, 0x1.590572p-73f, 0x1.65ac8p-48f, 0x1.2eda66p-78f,
     0x1.4b772p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a082fap-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cb2e46p-85f, 0x1.e4955cp-119f, 0x1.ac0722p-69f,
     0x1.12d516p-35f, 0.0f, 0x1.fe3b02p-62f, 0.0f, 0.0f, 0x1.23d376p-51f,
     0x1.073824p-63f, 0x1.f9716ap-17f, 0x1.c798ecp-94f, 0x1.c4e97ep-31f,
     0x1.097be6p-120f, 0x1.6b0a14p-44f, 0.0f, 0x1.7c71c6p-33f, 0x1.afb3c8p-8f,
     0x1.6c712ep-119f, 0x1.80e49ap-79f, 0.0f, 0.0f, 0x1.e287dep-102f, 0x1.606936p-13f,
     0x1.d5dfp-62f, 0.0f, 0x1.b6f712p-86f, 0x1.c27cfep-13f, 0.0f, 0.0f,
     0x1.c6491p-99f, 0.0f, 0.0f, 0.0f, 0x1.f93aap-44f, 0x1.9c37cep-88f, 0.0f,
     0x1.db9f42p-63f, 0x1.0b1922p-105f, 0x1.8440d6p-91f, 0x1.e9073cp-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.11b0c6p-110f, 0.0f, 0x1.6e1316p-109f, 0x1.55a94ap-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebc43p-40f, 0x1.c48516p-91f,
     0x1.062f9ep-67f, 0x1.6648cap-54f, 0.0f, 0x1.42d14ep-65f, 0x1.2d1d08p-82f,
     0x1.e90b9ap-7f, 0.0f, 0x1.562934p-38f, 0.0f, 0x1.0a32b4p-118f, 0x1.576f0ep-33f,
     0.0f, 0x1.8ebc56p-79f, 0.0f, 0x1.8ea618p-84f, 0.0f, 0x1.7a423cp-38f, 0.0f, 0.0f,
     0x1.c0ae62p-110f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.3d66bcp-45f, 0x1.7cb8dep-42f, 0x1.d9caaep-39f, 0x1.fa4d6ap-46f,
     0x1.6d57f4p-87f, 0x1.d763e8p-81f, 0x1.038d58p-4f, 0.0f, 0.0f, 0x1.957d7ap-116f,
     0x1.95f7f2p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a4a14p-39f,
     0x1.a654eep-10f, 0x1.01a79ap-10f, 0.0f, 0x1.9fdc86p-125f, 0x1.b4b2fep-37f,
     0x1.fd9a92p-123f, 0.0f, 0.0f, 0x1.49913cp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d2f16p-65f, 0.0f, 0x1.56c09ep-3f, 0x1.ece76cp-89f, 0.0f, 0.0f,
     0x1.723b04p-60f, 0x1.195c1ap-57f, 0x1.193908p-105f, 0.0f, 0x1.10b31ep-102f, 0.0f,
     0x1.c107bcp-64f, 0x1.d60ea2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e88b2p-124f, 0.0f, 0x1.98ee1cp-60f, 0x1.4a8a12p-76f, 0x1.99e6c4p-25f, 0.0f,
     0x1.e2a6cap-10f, 0.0f, 0x1.19aa3p-50f, 0.0f, 0x1.1f7004p-91f, 0.0f,
     0x1.5bc5a6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25df34p-101f,
     0x1.e6219ep-5f, 0.0f, 0.0f, 0x1.403ca6p-122f, 0.0f, 0x1.793422p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d28b6p-59f, 0.0f, 0x1.cac6aep-5f, 0.0f, 0.0f,
     0x1.1b95fp-47f, 0x1.c67ce4p-44f, 0x1.80fadp-82f, 0x1.603814p-36f, 0.0f, 0.0f,
     0x1.e58eb6p-19f, 0x1.6b6096p-49f, 0x1.9dcb4cp-125f, 0x1.9ba2cp-20f, 0.0f, 0.0f,
     0x1.d6548ap-41f, 0x1.6aa0e4p-17f, 0.0f, 0.0f, 0.0f, 0x1.34f59p-109f, 0.0f,
     0x1.b624ecp-79f, 0.0f, 0x1.d0224ep-10f, 0.0f, 0x1.65f0f6p-67f, 0x1.2e597cp-63f,
     0.0f, 0.0f, 0x1.28734ep-61f, 0.0f, 0x1.4b01a4p-40f, 0x1.b575ecp-57f,
     0x1.41ed96p-126f, 0x1.317d4ap-119f, 0x1.22986p-46f, 0x1.5c32a8p-124f,
     0x1.06e0fap-100f, 0.0f, 0.0f, 0x1.e71206p-59f, 0.0f, 0x1.93454p-95f, 0x1p0f,
     0.0f, 0x1.3efddap-47f, 0x1.aa8a58p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa507p-15f,
     0x1.0192eep-23f, 0.0f, 0x1.28a476p-6f, 0.0f, 0x1.fc9354p-18f, 0x1.aeda6cp-29f,
     0.0f, 0.0f, 0x1.e5954ap-124f, 0.0f, 0x1.3d598ap-59f, 0x1.310196p-89f, 0.0f,
     0x1.a6134p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9812a6p-2f, 0x1.b8c82ep-124f, 0.0f,
     0.0f, 0x1.39e528p-102f, 0x1.6cc82ap-76f, 0x1.d6f7acp-22f, 0x1.391036p-39f,
     0x1.a97a7ap-29f, 0.0f, 0x1.bd5decp-58f, 0x1.d1001p-9f, 0.0f, 0.0f,
     0x1.3474b2p-31f, 0.0f, 0x1.31d512p-44f, 0.0f, 0x1.4e3f8ep-21f, 0.0f, 0.0f,
     0x1.d7434ep-66f, 0x1.e83acap-44f, 0.0f, 0.0f, 0.0f, 0x1.7b8e56p-84f,
     0x1.e6cf1p-2f, 0x1.7253bep-36f, 0.0f, 0x1.5dd162p-77f, 0x1.fe7624p-48f, 0.0f,
     0x1.6664a8p-9f, 0.0f, 0.0f, 0x1.b657ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4249f6p-43f, 0x1.948708p-89f, 0x1.2ac5dap-21f, 0.0f, 0x1.ba614cp-31f,
     0x1.0cd5e2p-31f, 0x1.58d4cep-28f, 0x1.8c323p-116f, 0x1.8560f4p-40f,
     0x1.cb1592p-21f, 0.0f, 0.0f, 0x1.daf5ep-2f, 0x1.c23328p-80f, 0x1.d2e3cep-63f,
     0.0f, 0x1.4d5feap-109f, 0.0f, 0x1.b526bp-71f, 0.0f, 0x1.58883ap-17f,
     0x1.5df04p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b05dcp-12f, 0.0f,
     0x1.e2f5dep-103f, 0x1.1b187ep-65f, 0x1.ee21a2p-98f, 0.0f, 0.0f, 0x1.9fd77ap-32f,
     0x1.10172ep-90f, 0.0f, 0x1.e7cf7ap-122f, 0.0f, 0.0f, 0x1.af7856p-8f, 0.0f,
     0x1.1d1292p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b57ae2p-77f, 0.0f, 0x1.ddcf98p-5f, 0.0f, 0x1.742154p-123f, 0x1.39179ap-86f,
     0x1.14e4a4p-53f, 0x1.a63648p-75f, 0x1.5ca19cp-12f, 0x1.a17d8cp-44f,
     0x1.1fe6e4p-44f, 0x1.ac8b44p-124f, 0.0f, 0x1.3d7056p-100f, 0.0f, 0x1.b5824ap-82f,
     0x1.4eef92p-30f, 0x1.f8f5f4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95eb9ap-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c52722p-67f, 0x1.35595p-41f,
     0x1.e2e756p-111f, 0x1.9be286p-37f, 0.0f, 0x1.b5abfap-41f, 0.0f, 0x1.76f87ep-47f,
     0.0f, 0x1.34be74p-97f, 0.0f, 0.0f, 0.0f, 0x1.cb6d64p-80f, 0x1.9ec4ecp-63f, 0.0f,
     0x1.cb23a6p-110f, 0.0f, 0.0f, 0x1.698378p-74f, 0.0f, 0x1.63f9a4p-51f,
     0x1.1b03a8p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.434d52p-87f,
     0x1.5ffd18p-126f, 0.0f, 0x1.7f59bcp-10f, 0.0f, 0x1.fe6904p-120f, 0.0f,
     0x1.e679d4p-80f, 0.0f, 0x1.1b6646p-101f, 0.0f, 0x1.fba224p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b2596p-111f, 0.0f, 0.0f, 0.0f, 0x1.68c38ap-33f, 0x1.e36456p-23f,
     0.0f, 0x1.87583p-69f, 0x1.ca24a2p-14f, 0x1.269c5cp-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.28e658p-45f, 0.0f, 0x1.cc538ep-55f, 0x1.ae4d5p-3f, 0.0f,
     0x1.4fc056p-15f, 0.0f, 0x1.5e3d7ep-101f, 0x1.8e2d7ep-83f, 0x1.10f2dcp-38f, 0.0f,
     0x1.5a4c34p-9f, 0x1.f5df98p-116f, 0x1.49c398p-59f, 0.0f, 0x1.a32c6cp-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24e84cp-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b27bcp-78f, 0.0f, 0.0f, 0x1.c5f532p-8f, 0x1.a6ae46p-64f, 0.0f, 0.0f,
     0x1.4c107ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf9826p-73f, 0x1.1dc95ap-41f, 0.0f,
     0x1.ed6ddp-91f, 0.0f, 0x1.8bea1p-90f, 0x1.a83864p-96f, 0x1.72d5bp-51f, 0.0f,
     0x1.0498bcp-34f, 0x1.6dba72p-71f, 0x1.597896p-42f, 0x1.eeab48p-116f,
     0x1.dadef2p-73f, 0x1.6a913p-72f, 0x1.aae75p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e0646ep-43f, 0x1.d9464p-32f, 0.0f, 0x1.dcd908p-9f, 0x1.d0d4d6p-87f,
     0x1.0a5cacp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b1372p-81f,
     0x1.a169dcp-43f, 0x1.207d2cp-45f, 0x1.0bcb66p-72f, 0x1.916854p-34f,
     0x1.5af0c6p-79f, 0.0f, 0.0f, 0x1.248f24p-21f, 0x1.98e5fp-56f, 0.0f,
     0x1.c05e38p-29f, 0x1.42cf3cp-37f, 0x1.0ca286p-105f, 0.0f, 0x1.1c1b92p-87f,
     0x1.e9ed9p-37f, 0.0f, 0.0f, 0x1.6498d2p-96f, 0.0f, 0.0f, 0x1.3a80eep-8f,
     0x1.9b32p-111f, 0x1.0e330cp-91f, 0x1.8fc7fep-67f, 0x1.5924aep-81f, 0.0f, 0.0f,
     0x1.b961fp-49f, 0x1.ad0384p-91f, 0.0f, 0x1.759ec4p-90f, 0x1.f8ca06p-108f,
     0x1.4a5cccp-19f, 0.0f, 0x1.e53bd6p-12f, 0.0f, 0x1.d5c1e2p-40f, 0x1.77e684p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.530feep-47f, 0x1.eea0c2p-30f, 0.0f, 0.0f,
     0x1.6f2692p-25f, 0x1.4f9218p-102f, 0x1.afbab6p-103f, 0.0f, 0x1.d32cc4p-37f, 0.0f,
     0.0f, 0.0f, 0x1.1a8482p-53f, 0.0f, 0.0f, 0x1.0aee54p-28f, 0.0f, 0x1.b9fae6p-17f,
     0x1.8dab9ap-8f, 0x1.d52deap-31f, 0x1.55ae8ap-122f, 0.0f, 0x1.2e44f6p-54f,
     0x1.5192d4p-44f, 0.0f, 0x1.d39782p-32f, 0.0f, 0x1.dd6feep-43f, 0.0f,
     0x1.b46f84p-29f, 0x1.99f734p-51f, 0.0f, 0.0f, 0x1.cf6814p-57f, 0.0f,
     0x1.c49578p-107f, 0.0f, 0.0f, 0x1.6ea58cp-30f, 0x1.557d1ap-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6c5952p-119f, 0.0f, 0.0f, 0x1.6ad0e4p-102f, 0x1.c5914cp-62f,
     0x1.2734d4p-58f, 0x1.2f1c32p-27f, 0.0f, 0x1.4abc2ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.da09cap-68f, 0x1.d7febep-57f, 0x1.c0f46ap-81f, 0.0f, 0.0f, 0.0f,
     0x1.26305ap-106f, 0x1.6020e4p-115f, 0.0f, 0x1.da8c3cp-69f, 0x1.ce3b46p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.43cd3ep-14f, 0x1.4e33ep-97f, 0.0f, 0x1.b49526p-48f, 0.0f,
     0x1.606e1ep-8f, 0.0f, 0x1.10b73cp-6f, 0.0f, 0x1.225ba8p-22f, 0x1.325766p-48f,
     0x1.adc96ap-104f, 0.0f, 0x1.087738p-99f, 0.0f, 0x1.b2e244p-1f, 0x1.21c468p-47f,
     0.0f, 0.0f, 0x1.626c0ep-77f, 0.0f, 0x1.490d24p-107f, 0.0f, 0x1.d0f1ep-52f,
     0x1.846dfep-105f, 0x1.a05d2ep-111f, 0x1.4841b2p-1f, 0.0f, 0.0f, 0x1.1d9572p-89f,
     0x1.009f2ap-20f, 0x1.c27cacp-25f, 0.0f, 0x1.072f7ep-45f, 0.0f, 0x1.9f6b66p-97f,
     0.0f, 0.0f, 0x1.e0fa6p-64f, 0.0f, 0.0f, 0x1.e3abfep-97f, 0x1.b507dep-20f, 0.0f,
     0x1.84a1fp-116f, 0.0f, 0.0f, 0.0f, 0x1.9b7608p-38f, 0.0f, 0.0f, 0x1.4d1b06p-64f,
     0.0f, 0.0f, 0.0f, 0x1.7a65f2p-103f, 0.0f, 0.0f, 0x1.72290ap-42f, 0.0f, 0.0f,
     0x1.5ce36p-9f, 0.0f, 0x1.dc94bap-6f, 0x1.2993eap-66f, 0.0f, 0x1.cf8fb6p-37f,
     0x1.5e47p-53f, 0x1.38ea84p-39f, 0x1.e5eeb8p-36f, 0x1.5c7e66p-28f,
     0x1.f2530ap-101f, 0.0f, 0x1.c22b62p-56f, 0x1.87f4c4p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c585ccp-32f, 0.0f, 0x1.dc757cp-50f, 0x1.a53f3ap-41f,
     0x1.e381bcp-85f, 0x1.199a8ap-60f, 0x1.c7f6ecp-29f, 0.0f, 0x1.a8c838p-43f,
     0x1.bf6ab4p-54f, 0x1.dfa828p-47f, 0x1.a59db4p-22f, 0.0f, 0x1.18e9d6p-92f,
     0x1.d5960cp-77f, 0x1.71ad7p-72f, 0x1.9bd79ap-111f, 0x1.def5aep-6f, 0.0f,
     0x1.f3cdd2p-43f, 0.0f, 0x1.38ea9ep-66f, 0x1.2b17f8p-28f, 0.0f, 0x1.a1795cp-109f,
     0.0f, 0.0f, 0.0f, 0x1.c2cae6p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.865a34p-59f, 0x1.84b7bep-122f, 0x1.781f5ap-53f, 0.0f, 0x1.fb149ap-35f,
     0x1.799afcp-105f, 0x1.96b4ecp-57f, 0x1.7d8a68p-99f, 0x1.5a1524p-59f, 0.0f, 0.0f,
     0x1.9d9bfcp-104f, 0x1.a2f7cap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f289b6p-18f, 0x1.8ab164p-53f, 0.0f, 0.0f, 0x1.8f1e0ap-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4ff4c4p-117f, 0.0f, 0x1.ca22b6p-13f, 0.0f, 0.0f, 0x1.4d00dep-74f, 0.0f,
     0x1.e518c4p-36f, 0x1.2e6e1ap-15f, 0x1.4bfe06p-81f, 0x1.ddf20cp-89f, 0.0f,
     0x1.29c694p-76f, 0x1.a35464p-17f, 0x1.d371ap-51f, 0x1.3476e6p-60f,
     0x1.f7f7cp-15f, 0x1.d665f8p-13f, 0.0f, 0x1.05786p-25f, 0.0f, 0x1.95c83ep-48f,
     0x1.2ac04p-95f, 0x1.03e6c8p-59f, 0.0f, 0x1.bb22c2p-46f, 0.0f, 0x1.cbab7p-111f,
     0.0f, 0.0f, 0x1.e1054ap-119f, 0x1.41a664p-86f, 0.0f, 0x1.576f74p-118f, 0.0f,
     0x1.d2dcap-65f, 0x1.d62fe2p-101f, 0x1.b4b038p-86f, 0x1.347cbap-71f, 0.0f, 0.0f,
     0.0f, 0x1.6f8a24p-26f, 0x1.e130a2p-123f, 0.0f, 0x1.b6c976p-62f, 0.0f,
     0x1.0a0824p-72f, 0.0f, 0x1.5e62dcp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bb54cp-74f, 0.0f, 0.0f, 0x1.bbce64p-27f, 0x1.62ea22p-104f, 0x1.efa3f6p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a677ecp-113f, 0.0f, 0x1p0f, 0.0f, 0x1.43639cp-91f,
     0x1.0f8144p-100f, 0.0f, 0x1.fe968cp-51f, 0x1.77bae6p-83f, 0x1.e229fap-17f,
     0x1.2d6b98p-86f, 0x1.d5da2p-73f, 0.0f, 0x1.1fe84ap-35f, 0x1.4d5ecp-40f, 0.0f,
     0x1.2b98fep-36f, 0.0f, 0.0f, 0x1.cc9252p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.73bc36p-115f, 0x1.6f8938p-110f, 0x1.989912p-52f, 0.0f,
     0x1.e95352p-27f, 0x1.dbda22p-109f, 0.0f, 0.0f, 0.0f, 0x1.d05f96p-34f,
     0x1.319deep-44f, 0x1.12daeep-81f, 0.0f, 0x1.f41014p-60f, 0.0f, 0x1.574f34p-59f,
     0x1.cea438p-104f, 0.0f, 0x1.a0f172p-57f, 0x1.c8e124p-51f, 0.0f, 0.0f,
     0x1.691894p-102f, 0.0f, 0x1.f5ef26p-14f, 0x1.760aa8p-68f, 0.0f, 0x1.bcd908p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed327ep-47f, 0x1.c2ef3ap-24f, 0.0f,
     0x1.39e5ccp-82f, 0.0f, 0x1.79925cp-57f, 0.0f, 0.0f, 0x1.52c6aap-68f,
     0x1.e85e1ep-23f, 0.0f, 0.0f, 0x1.c2349cp-104f, 0.0f, 0x1.a883fap-27f,
     0x1.6757a8p-111f, 0x1.fcc22cp-2f, 0.0f, 0.0f, 0x1.8742cep-36f, 0.0f, 0.0f, 0.0f,
     0x1.c4ff5cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68c35ap-77f, 0.0f, 0x1.4c8606p-115f,
     0x1.d86d26p-73f, 0x1.1f2d6cp-89f, 0.0f, 0x1.51c09ap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d385p-25f, 0x1.edea44p-47f, 0x1.be0758p-57f, 0x1.dadd3ap-91f, 0x1.ba01p-10f,
     0x1.26adcap-80f, 0x1.0ed614p-125f, 0.0f, 0.0f, 0x1.d3cbccp-77f, 0.0f,
     0x1.d6255ap-117f, 0x1.d3a3fcp-16f, 0x1.bc31acp-43f, 0x1.53a9bap-20f, 0.0f, 0.0f,
     0x1.35a7fep-45f, 0.0f, 0.0f, 0x1.2a7f98p-31f, 0.0f, 0.0f, 0.0f, 0x1.e762b2p-75f,
     0x1.d1e26ep-19f, 0x1.44d75ep-75f, 0.0f, 0.0f, 0x1.2df638p-27f, 0.0f,
     0x1.325f82p-56f, 0.0f, 0.0f, 0x1.6e494ap-65f, 0x1.9d9f4ap-50f, 0.0f,
     0x1.798dp-46f, 0x1.e861fap-59f, 0x1.7e609p-28f, 0x1.eb821ap-52f, 0.0f, 0.0f,
     0x1p0f, 0x1.477662p-65f, 0.0f, 0.0f, 0.0f, 0x1.42937ap-125f, 0x1.7b5326p-13f,
     0x1.e3c9c4p-60f, 0x1.533e18p-115f, 0.0f, 0x1.ba0db2p-32f, 0x1.893b0ep-57f, 0.0f,
     0.0f, 0x1.0183aap-87f, 0x1.165dc2p-125f, 0x1.1a5ac8p-85f, 0x1.49e15p-122f,
     0x1.91f1e8p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.017852p-67f, 0x1.497298p-93f,
     0.0f, 0.0f, 0x1.8f54dp-83f, 0.0f, 0x1.fd308ep-102f, 0x1.7c4beap-116f, 0.0f,
     0x1.a5a756p-49f, 0.0f, 0x1.963b3ep-13f, 0.0f, 0x1.b5a4a6p-34f, 0.0f, 0.0f, 0.0f,
     0x1.959638p-51f, 0x1p0f, 0x1.073046p-16f, 0.0f, 0.0f, 0x1.5ac51p-1f,
     0x1.5316ap-56f, 0.0f, 0.0f, 0x1.2bf978p-10f, 0.0f, 0x1.0294dp-24f, 0x1.dca58p-2f,
     0.0f, 0x1.5f5b8ap-43f, 0x1.73901p-53f, 0x1.90a63ep-92f, 0x1.163e8cp-54f,
     0x1.9526e4p-79f, 0.0f, 0.0f, 0x1.fe3e72p-79f, 0.0f, 0x1.9bc9c8p-109f,
     0x1.78ed2p-85f, 0x1.301f72p-113f, 0.0f, 0.0f, 0x1.25d822p-78f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7cd3ap-102f, 0.0f,
     0x1.b49d1ep-31f, 0.0f, 0.0f, 0x1.3cd314p-95f, 0x1.b20a28p-14f, 0x1.33755ap-15f,
     0.0f, 0x1.5fad58p-33f, 0.0f, 0.0f, 0x1.aa1278p-123f, 0x1.80bcbp-7f,
     0x1.788f46p-44f, 0.0f, 0x1.846386p-66f, 0x1.f0438ep-79f, 0x1.17df7cp-57f, 0.0f,
     0x1.817ca2p-43f, 0x1.27b3c2p-117f, 0x1.b8435ep-93f, 0.0f, 0.0f, 0x1.7ed5ecp-51f,
     0x1.cd1304p-64f, 0x1.206192p-79f, 0x1.f3327cp-110f, 0.0f, 0x1.f5abe6p-81f, 0.0f,
     0.0f, 0x1.8ae682p-107f, 0x1.47aed2p-32f, 0.0f, 0x1.78eabap-99f, 0x1.726fe4p-89f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_copysignf4_kvx(tmp0, tmp1);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_copysignf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_copysignf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
