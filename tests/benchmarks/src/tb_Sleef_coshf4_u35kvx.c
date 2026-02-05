/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf4_u35kvx.c --function Sleef_coshf4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.0df844p-16f, 0x1.f01124p-11f, 0x1.2a7c78p-2f, 0.0f, 0.0f, 0x1.05e1ep-36f,
     0.0f, 0x1.ba1896p-75f, 0x1.74236p-102f, 0.0f, 0x1.86a42ap-123f, 0x1.88edc2p-71f,
     0.0f, 0.0f, 0x1.9a583cp-60f, 0x1.f598d6p-56f, 0.0f, 0x1.c1d1d6p-116f,
     0x1.9cbee2p-4f, 0x1.e8f2fap-39f, 0.0f, 0x1.716a4ap-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4f6e4p-66f, 0x1.c4c65ep-53f, 0.0f, 0x1.52d396p-121f, 0x1.986ecap-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e470b2p-117f, 0.0f, 0x1.24c254p-120f, 0.0f, 0.0f,
     0x1.3fee1ap-117f, 0.0f, 0x1.859d4cp-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a539ep-87f, 0x1.c10ed2p-121f, 0.0f, 0.0f, 0x1.108204p-108f, 0x1.160a98p-33f,
     0.0f, 0x1.100602p-20f, 0x1.05de6p-39f, 0.0f, 0x1.7fd2bap-119f, 0.0f,
     0x1.250084p-18f, 0x1.cae9a4p-74f, 0x1.322d5ep-89f, 0x1.f11f1ap-48f, 0.0f,
     0x1.433522p-106f, 0x1.28c5bp-65f, 0.0f, 0.0f, 0.0f, 0x1.9cc3e2p-53f,
     0x1.0829d8p-77f, 0x1.1a8432p-53f, 0.0f, 0x1.889ad6p-104f, 0x1.aa6ac6p-59f,
     0x1.25cebep-23f, 0.0f, 0x1.22631ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc841ep-76f,
     0x1.8df8b4p-125f, 0.0f, 0x1.22f048p-84f, 0x1.f8e204p-124f, 0.0f, 0.0f, 0.0f,
     0x1.4511bp-106f, 0x1.d776b4p-60f, 0.0f, 0x1.f5a71ep-1f, 0x1.c6cb5p-62f,
     0x1.213d0ep-4f, 0.0f, 0.0f, 0x1.47d35p-109f, 0.0f, 0.0f, 0.0f, 0x1.aaf3b4p-61f,
     0.0f, 0x1.87592cp-16f, 0x1.4ad2bap-67f, 0x1.8fa8c6p-71f, 0x1.060a36p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8e8ap-15f, 0.0f, 0.0f, 0x1.34d2p-5f, 0.0f,
     0x1.9775f2p-1f, 0x1.fe5fe6p-27f, 0x1.870af8p-98f, 0.0f, 0x1.9f8cep-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.560c32p-46f, 0.0f, 0x1.66080ap-88f, 0x1.94f5eap-75f, 0.0f,
     0x1.fb3b98p-93f, 0.0f, 0.0f, 0.0f, 0x1.0cadap-68f, 0x1.3e3c14p-33f, 0.0f,
     0x1.051cf2p-64f, 0x1.032accp-64f, 0.0f, 0x1.117a12p-108f, 0.0f, 0x1.56eb96p-24f,
     0.0f, 0.0f, 0x1.2c893ep-31f, 0.0f, 0.0f, 0x1.f23bb6p-28f, 0x1.e4925p-10f, 0.0f,
     0x1.0bb83cp-30f, 0x1.bf63cap-98f, 0x1.9cfcp-59f, 0x1.fb04aep-117f, 0.0f, 0.0f,
     0.0f, 0x1.81a04p-66f, 0x1.4115f8p-28f, 0.0f, 0x1.dcaf3cp-63f, 0x1.ba04ap-76f,
     0x1.ac2a4cp-70f, 0.0f, 0.0f, 0x1.11d95ap-72f, 0x1.a22e62p-93f, 0.0f, 0.0f,
     0x1.9175ap-79f, 0x1.8a1f46p-100f, 0.0f, 0.0f, 0x1.e5a226p-49f, 0x1.df7ba4p-2f,
     0.0f, 0.0f, 0.0f, 0x1.460fe8p-75f, 0x1.26d54ep-102f, 0.0f, 0x1.6fafc8p-18f,
     0x1.32a566p-105f, 0.0f, 0.0f, 0.0f, 0x1.44a8d6p-33f, 0.0f, 0x1.f31df6p-17f, 0.0f,
     0.0f, 0.0f, 0x1.5c8314p-36f, 0x1.51d39ep-103f, 0.0f, 0.0f, 0x1.50f2a6p-23f, 0.0f,
     0.0f, 0x1.cd0536p-78f, 0x1.99eadp-120f, 0x1.6a5ab8p-30f, 0x1.56263ep-107f,
     0x1.d2d95cp-85f, 0x1.4ef856p-32f, 0.0f, 0x1.2d1866p-99f, 0x1.068bc8p-117f,
     0x1.598068p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7c3c6p-31f, 0.0f,
     0x1.acaeb6p-30f, 0x1.b43344p-86f, 0x1.0ad34ap-27f, 0.0f, 0.0f, 0x1.552632p-121f,
     0.0f, 0x1.7d40d4p-17f, 0x1.17b118p-98f, 0x1.97fb72p-53f, 0x1.e53c28p-53f,
     0x1.eb8502p-60f, 0x1.115f14p-60f, 0x1.74133cp-36f, 0x1.632cfp-115f,
     0x1.19c8ap-35f, 0x1.ccacep-83f, 0x1.9cdadap-103f, 0.0f, 0.0f, 0x1.cb4bcep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42a64p-97f, 0.0f, 0.0f, 0x1.e9a9e4p-116f,
     0x1.ee187ep-52f, 0.0f, 0x1.c8ff9p-81f, 0.0f, 0x1.28fa82p-40f, 0x1.3c1ac8p-59f,
     0x1.ca7dfap-9f, 0.0f, 0.0f, 0x1.ea7fb2p-72f, 0.0f, 0x1.da70fep-110f, 0.0f, 0.0f,
     0x1.c4588cp-19f, 0x1.2e7f9ep-50f, 0.0f, 0x1.f104dcp-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce446cp-97f, 0.0f, 0x1.ba1b14p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01b352p-124f, 0x1.dd03aep-27f, 0x1.d1bf44p-58f, 0.0f, 0x1.ebd814p-22f,
     0x1.b5ba32p-52f, 0x1.4a9248p-83f, 0.0f, 0.0f, 0x1.b4bb3ep-19f, 0x1.f41368p-103f,
     0x1.23754cp-16f, 0x1.34f906p-66f, 0x1.5e46bp-99f, 0x1.7baa8cp-65f,
     0x1.19726ep-115f, 0x1.4345d4p-60f, 0x1.a4a564p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b736p-73f, 0.0f, 0.0f, 0x1.dd3918p-121f, 0x1.4215b2p-21f, 0x1.a5028p-104f,
     0.0f, 0x1.8ffbdp-115f, 0.0f, 0x1.088dfcp-100f, 0x1.5d8f72p-12f, 0x1.6f9b5p-7f,
     0.0f, 0.0f, 0x1.08a18ep-52f, 0x1.968f8p-63f, 0.0f, 0x1.9e714ep-38f, 0.0f,
     0x1.259a2cp-22f, 0.0f, 0.0f, 0.0f, 0x1.fe7d2cp-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7c3072p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3496p-24f, 0.0f,
     0x1.3ee1cep-3f, 0x1.9d616cp-22f, 0.0f, 0x1.315932p-27f, 0.0f, 0x1.4e0fccp-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91fe88p-42f, 0.0f, 0.0f, 0.0f,
     0x1.0c02ap-56f, 0.0f, 0x1.8780aap-38f, 0x1.7f653ap-14f, 0x1.39c12ep-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.36158cp-126f, 0x1p0f, 0.0f, 0x1.727956p-34f, 0.0f,
     0x1.b0da7ep-31f, 0x1.47f36p-79f, 0x1.8063aep-15f, 0x1.7503cap-53f,
     0x1.8045aep-60f, 0x1.cf6f86p-124f, 0.0f, 0.0f, 0.0f, 0x1.da85a8p-54f, 0.0f,
     0x1.135f28p-17f, 0x1.7a8c44p-109f, 0.0f, 0x1.71f066p-95f, 0x1.187b18p-68f,
     0x1.469fap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a7c54p-123f, 0.0f, 0.0f, 0x1.8a97dep-111f, 0x1.7147fp-77f, 0.0f,
     0x1.bd0842p-29f, 0x1.09081ap-17f, 0.0f, 0.0f, 0x1.72ca26p-31f, 0x1.59fe0ap-49f,
     0.0f, 0.0f, 0.0f, 0x1.95a90cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19da0cp-65f, 0x1.bc9d12p-86f, 0x1.528dep-89f, 0.0f, 0.0f, 0x1.5dc85ep-86f,
     0x1.c0f584p-7f, 0.0f, 0.0f, 0x1.80813p-67f, 0x1.149b12p-78f, 0x1.7701a4p-84f,
     0x1.827e0ep-60f, 0.0f, 0x1.a90504p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68cb5ap-51f, 0x1.354f72p-118f, 0.0f, 0x1p0f, 0x1.033406p-29f,
     0x1.ad2ae8p-29f, 0.0f, 0x1.9946d6p-38f, 0x1.1e1342p-55f, 0x1.113d36p-47f, 0.0f,
     0.0f, 0x1.c7736ep-25f, 0.0f, 0x1.0f26b6p-25f, 0x1.031becp-64f, 0x1.ad67a2p-50f,
     0x1.c27276p-16f, 0x1.c8a57ap-92f, 0.0f, 0.0f, 0x1.423c12p-65f, 0x1.dd6db6p-27f,
     0x1.e8088p-18f, 0.0f, 0x1.bbc88cp-10f, 0.0f, 0x1.36ab36p-54f, 0.0f, 0.0f,
     0x1.f00b9ap-52f, 0.0f, 0x1.26da98p-49f, 0x1.2999fcp-76f, 0x1.fc27eep-90f,
     0x1.1e97a2p-83f, 0x1.788d9ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7c5e8p-16f,
     0.0f, 0x1.4db0dcp-46f, 0x1.204ee2p-117f, 0.0f, 0.0f, 0x1.a5d80ep-64f, 0.0f,
     0x1.2e1612p-25f, 0x1.8b9ebcp-110f, 0x1.ebd056p-34f, 0.0f, 0.0f, 0x1.6a153cp-63f,
     0.0f, 0x1.3e4fc2p-121f, 0.0f, 0.0f, 0x1.e67ap-14f, 0x1.d8c586p-2f, 0.0f,
     0x1.fde162p-39f, 0.0f, 0.0f, 0.0f, 0x1.ac27f8p-117f, 0x1.4b4f68p-22f, 0.0f,
     0x1.db7ef8p-126f, 0x1.b8a1a6p-63f, 0x1.f6453cp-4f, 0.0f, 0x1.47afe2p-1f, 0.0f,
     0x1.44085cp-3f, 0x1.00e33ap-83f, 0x1.397148p-61f, 0x1.7d58acp-49f,
     0x1.c88984p-100f, 0x1.71d782p-119f, 0.0f, 0x1.b040eep-90f, 0.0f, 0x1.78f04cp-56f,
     0.0f, 0.0f, 0x1.2e2976p-39f, 0.0f, 0x1.6189c2p-67f, 0.0f, 0x1.a9b88ep-74f, 0.0f,
     0x1.5222a8p-56f, 0x1.66fe14p-102f, 0.0f, 0.0f, 0x1.763784p-14f, 0x1.2b94eap-6f,
     0x1.3c5a2cp-113f, 0x1.af6eb6p-26f, 0x1.d89cfap-98f, 0x1.da56e8p-89f,
     0x1.2a8b5p-69f, 0.0f, 0.0f, 0x1.d021c2p-5f, 0.0f, 0x1.063756p-51f, 0.0f,
     0x1.e4bcfcp-48f, 0.0f, 0.0f, 0.0f, 0x1.86ebcp-20f, 0.0f, 0.0f, 0x1.dffc4ep-117f,
     0x1.53a402p-38f, 0x1.da14d8p-24f, 0x1.56a112p-69f, 0x1.36c6a6p-70f, 0.0f,
     0x1.ab36d6p-62f, 0x1.dce602p-43f, 0x1.ed1dccp-126f, 0x1.d08002p-105f,
     0x1.fc9abp-18f, 0x1.10555ap-13f, 0x1.525df4p-9f, 0x1.566922p-30f, 0.0f,
     0x1.1e7352p-115f, 0.0f, 0.0f, 0x1.0326c4p-57f, 0x1.0f208ep-105f, 0.0f,
     0x1.0d1864p-20f, 0x1.3ad09p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0d936cp-80f, 0x1.85bd7p-79f, 0x1.40ae8ap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f42facp-118f, 0.0f, 0.0f, 0.0f, 0x1.f9429cp-20f, 0x1.4c968ap-24f,
     0x1.49cef6p-8f, 0x1.aee01ap-116f, 0.0f, 0.0f, 0x1.aaa2f2p-122f, 0x1.84f518p-21f,
     0x1.da3336p-113f, 0.0f, 0.0f, 0x1.090112p-86f, 0x1.470048p-45f, 0.0f,
     0x1.0244aap-19f, 0.0f, 0x1.9820fp-4f, 0x1.50ad9ap-114f, 0x1.5abc24p-24f,
     0x1.ca3a28p-30f, 0x1.c6533p-79f, 0.0f, 0x1.e40876p-36f, 0x1.fa7bd8p-99f,
     0x1.13b15ep-1f, 0x1.a6d832p-92f, 0x1.7656bcp-80f, 0.0f, 0x1.355e08p-11f, 0.0f,
     0.0f, 0x1.9da63ep-70f, 0.0f, 0x1.862e9ep-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a82a1cp-67f, 0.0f, 0x1.1b4df4p-46f, 0.0f, 0.0f, 0x1.246262p-49f, 0.0f, 0.0f,
     0x1.dce5dcp-43f, 0.0f, 0x1.eb3e1p-69f, 0.0f, 0.0f, 0.0f, 0x1.2a295ap-44f,
     0x1.e8518p-5f, 0.0f, 0x1.8aa9aap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50d19ap-38f, 0x1.a0183ap-30f, 0.0f, 0.0f, 0x1.7a35c8p-52f, 0x1.c8586p-42f,
     0x1.7441fap-86f, 0x1.3b5cdp-63f, 0x1.15279ep-21f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.0ea7dap-24f, 0x1.1b1deap-98f, 0.0f, 0.0f, 0x1.616b12p-25f, 0x1.7b2d26p-26f,
     0x1.ad668p-84f, 0x1.44ba6p-123f, 0x1.25ef0cp-9f, 0.0f, 0.0f, 0x1.d8ea1ap-108f,
     0.0f, 0.0f, 0x1.8b66e4p-26f, 0x1.58c4bcp-31f, 0.0f, 0x1.6c0b7ep-32f, 0.0f,
     0x1.cb163cp-35f, 0.0f, 0x1.10f0cp-107f, 0x1.9074dep-125f, 0.0f, 0.0f, 0.0f,
     0x1.a766dcp-123f, 0.0f, 0.0f, 0x1.0d768p-13f, 0.0f, 0x1.8ab774p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.61cb44p-111f, 0x1.958cbep-25f, 0x1.f8e266p-28f,
     0x1.a1256p-80f, 0.0f, 0x1.b6824ep-117f, 0.0f, 0.0f, 0x1.df5b6p-126f,
     0x1.357e1ap-85f, 0.0f, 0.0f, 0.0f, 0x1.0d8d8ap-61f, 0x1.bf86d4p-85f, 0.0f,
     0x1.729b3ap-122f, 0x1.88260ap-20f, 0x1.690308p-93f, 0x1.61e712p-100f, 0.0f, 0.0f,
     0.0f, 0x1.ed9df4p-102f, 0.0f, 0.0f, 0x1.d426bcp-42f, 0.0f, 0x1.84e8a4p-115f,
     0x1.7111b6p-26f, 0x1.96bb68p-47f, 0.0f, 0x1.483258p-44f, 0.0f, 0x1.0cb376p-39f,
     0.0f, 0x1.276468p-81f, 0.0f, 0x1.947c42p-41f, 0x1.d338f8p-85f, 0.0f, 0.0f, 0.0f,
     0x1.0112b4p-122f, 0x1.e0ecb4p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bef4ap-124f,
     0x1.ed22e4p-118f, 0.0f, 0x1.050aeap-66f, 0.0f, 0x1.b3dcd2p-95f, 0.0f,
     0x1.9139e8p-101f, 0x1.eb972cp-99f, 0x1.23fcf6p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.722658p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afc61ap-46f, 0.0f,
     0x1.b32886p-97f, 0x1.00e24ap-94f, 0.0f, 0.0f, 0x1.fae466p-16f, 0.0f,
     0x1.665e1ap-25f, 0.0f, 0x1.ac11fp-24f, 0.0f, 0.0f, 0.0f, 0x1.3c21c8p-67f, 0.0f,
     0x1.61def2p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca3806p-6f, 0.0f, 0.0f,
     0x1.73a942p-39f, 0x1.ad6858p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.506f2ep-48f,
     0x1.71808ep-6f, 0x1.b779e2p-83f, 0x1.57ab38p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37c9d8p-125f, 0x1.607058p-58f, 0.0f, 0x1.724618p-35f, 0x1.81e402p-94f, 0.0f,
     0x1.8511cp-59f, 0.0f, 0.0f, 0x1.0a8728p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45512ap-12f, 0x1.e0a574p-117f, 0x1.a14df2p-42f, 0x1.2f19ecp-87f,
     0x1.061d52p-43f, 0x1.15c9aep-113f, 0x1.dca10ap-71f, 0.0f, 0.0f, 0x1.5df4dep-82f,
     0.0f, 0x1.b07fd4p-123f, 0x1.c0192p-17f, 0.0f, 0x1.ed2ba8p-46f, 0.0f, 0.0f,
     0x1.ca1ce2p-103f, 0x1.656c48p-71f, 0x1.2264acp-15f, 0x1.88724ap-24f, 0.0f,
     0x1.d0b8aep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c1d24p-90f, 0x1.2f4d92p-59f,
     0.0f, 0x1.688504p-81f, 0.0f, 0x1.ae38f4p-40f, 0.0f, 0.0f, 0x1.6fb1fep-58f,
     0x1.b7a34ap-14f, 0.0f, 0x1.a4ae26p-121f, 0.0f, 0.0f, 0x1.ee1b42p-35f, 0.0f,
     0x1.83e2ecp-108f, 0x1.c3fd6ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a602acp-62f,
     0x1.962516p-117f, 0x1.ff62fap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c4e46p-57f,
     0x1.5a7124p-92f, 0.0f, 0x1.834fd4p-114f, 0.0f, 0x1.0431a2p-23f, 0.0f, 0.0f,
     0x1.c840ap-43f, 0.0f, 0x1.0ea624p-64f, 0.0f, 0x1.3460a2p-4f, 0x1.7afb52p-126f,
     0.0f, 0x1.07f73cp-121f, 0x1.cf303cp-24f, 0.0f, 0x1.0d1aeep-64f, 0.0f,
     0x1.2377bp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.365c9ap-62f, 0.0f, 0.0f,
     0x1.af00fap-53f, 0.0f, 0x1.f7219ep-111f, 0.0f, 0.0f, 0x1.eeaaf2p-12f,
     0x1.a01d52p-115f, 0.0f, 0x1.b162ep-25f, 0x1.052962p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.53fa4cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.300a5cp-82f,
     0x1.24b98p-13f, 0x1.6fd418p-21f, 0x1.6c122cp-27f, 0x1.b9df62p-3f, 0x1.1c3676p-6f,
     0x1.6b6ebep-52f, 0.0f, 0x1.f5ad38p-99f, 0x1.44d06p-42f, 0.0f, 0x1.2365c6p-44f,
     0x1.7927e6p-112f, 0x1.f69978p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3f1fap-101f, 0x1.dc73e6p-103f, 0.0f, 0x1.167a2p-57f, 0x1.56537ep-110f,
     0x1.5760a2p-92f, 0.0f, 0.0f, 0x1.23558p-92f, 0.0f, 0.0f, 0.0f, 0x1.2804d6p-95f,
     0.0f, 0x1.3a9c42p-126f, 0.0f, 0x1.955c18p-115f, 0x1.01c1d6p-125f, 0.0f, 0.0f,
     0x1.fba39p-105f, 0.0f, 0x1.528fcp-114f, 0x1.8b65ecp-68f, 0.0f, 0x1.0e5882p-34f,
     0.0f, 0x1.3f7b22p-82f, 0.0f, 0x1.8db77cp-85f, 0.0f, 0.0f, 0x1.db30f6p-4f, 0.0f,
     0x1.c8fe12p-17f
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
            tmp1 = Sleef_coshf4_u35kvx(tmp0);
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
    printf("Sleef_coshf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_coshf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
