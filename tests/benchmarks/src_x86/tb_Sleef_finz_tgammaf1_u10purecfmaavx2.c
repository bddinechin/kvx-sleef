/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammaf1_u10purecfma.c --function \
 *     Sleef_finz_tgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.3a27fcp-11f, 0.0f, 0.0f, 0.0f, 0x1.2cae52p-86f, 0.0f, 0.0f, 0x1.fa14d4p-81f,
     0x1.97374ap-62f, 0.0f, 0.0f, 0x1.f0edaap-31f, 0x1.58e72cp-43f, 0.0f, 0.0f,
     0x1.ee5038p-31f, 0.0f, 0.0f, 0x1.66addap-104f, 0.0f, 0.0f, 0.0f, 0x1.8d5106p-29f,
     0.0f, 0x1.23a63ap-80f, 0x1.ce5eccp-18f, 0x1.d492d6p-122f, 0x1.a4929ap-53f, 0.0f,
     0.0f, 0x1.473c3p-71f, 0x1.2d6c26p-17f, 0x1.2d370ap-12f, 0x1.9a0fa6p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ee0fep-54f, 0.0f, 0x1.544f82p-45f,
     0x1.94d64ep-59f, 0x1.a6d0dcp-51f, 0.0f, 0x1.d7f75ap-55f, 0x1.b5c09p-57f,
     0x1.4e844ep-73f, 0.0f, 0x1.c18376p-23f, 0.0f, 0x1.dd71dp-103f, 0x1.d019bp-103f,
     0.0f, 0x1.24313ap-69f, 0.0f, 0x1.5a8f8cp-112f, 0.0f, 0x1.15192ep-32f, 0.0f,
     0x1.b5335p-48f, 0x1.150664p-108f, 0.0f, 0.0f, 0x1.eae176p-99f, 0x1.45f2b2p-68f,
     0.0f, 0.0f, 0x1.b39628p-25f, 0.0f, 0x1.421ab8p-105f, 0.0f, 0x1.ffd71cp-63f,
     0x1.76fbe4p-82f, 0x1.9e21eap-102f, 0x1.763422p-99f, 0x1.8146c6p-36f,
     0x1.0e6e28p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60382ep-87f, 0.0f,
     0x1.c7b48ep-42f, 0x1.bb0396p-91f, 0.0f, 0.0f, 0x1.0088b4p-77f, 0.0f, 0.0f,
     0x1.d3a2ep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2a15ap-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c384b2p-45f, 0.0f, 0x1.0f5568p-29f, 0.0f, 0x1.763776p-37f, 0.0f,
     0x1.afb3f8p-54f, 0x1.c12082p-11f, 0.0f, 0x1.db0bc6p-52f, 0x1.5f659cp-64f, 0.0f,
     0.0f, 0x1.572f26p-78f, 0.0f, 0x1.3779aep-64f, 0x1.578dbp-91f, 0x1.3483b8p-88f,
     0x1.a8acbp-57f, 0.0f, 0.0f, 0x1.62cabcp-104f, 0x1.368e08p-96f, 0.0f, 0.0f, 0.0f,
     0x1.48b642p-113f, 0.0f, 0x1.1959b2p-75f, 0.0f, 0x1.0abb82p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3524d6p-69f, 0x1.a7674cp-27f, 0x1.304538p-117f,
     0x1.b34a5cp-38f, 0.0f, 0.0f, 0x1.19ea2cp-73f, 0x1.b733bcp-60f, 0x1.fa7a68p-89f,
     0.0f, 0x1.8c491p-123f, 0x1.2b978ep-96f, 0x1.549cb4p-18f, 0.0f, 0.0f,
     0x1.b873dap-93f, 0x1.4eb312p-107f, 0.0f, 0x1.4981e6p-86f, 0.0f, 0.0f,
     0x1.fb0272p-121f, 0.0f, 0.0f, 0x1.d8fdbep-30f, 0x1.41ad78p-89f, 0x1.71ef46p-14f,
     0.0f, 0.0f, 0x1.9af9ep-40f, 0x1.7652b4p-24f, 0.0f, 0x1.554deap-57f,
     0x1.49b92cp-20f, 0x1.c3ba76p-71f, 0x1.970b98p-88f, 0.0f, 0x1.4d5472p-67f,
     0x1.e1363ap-4f, 0.0f, 0x1.0253a4p-64f, 0.0f, 0x1.d4c486p-70f, 0x1.97570ep-64f,
     0x1.829d74p-79f, 0x1.280434p-52f, 0.0f, 0.0f, 0.0f, 0x1.a3f758p-123f,
     0x1.889baep-102f, 0.0f, 0.0f, 0x1.ca40b2p-110f, 0.0f, 0.0f, 0x1.391c5cp-95f,
     0.0f, 0x1.aa7c44p-19f, 0.0f, 0.0f, 0x1.5079f2p-25f, 0x1.057da8p-58f,
     0x1.128e0ap-121f, 0x1.7889fap-126f, 0x1.63165cp-60f, 0x1.a8a48p-75f, 0.0f, 0.0f,
     0x1.856d92p-113f, 0.0f, 0x1.d2b398p-55f, 0.0f, 0x1.33a688p-84f, 0x1.10bcfep-100f,
     0x1.6d1858p-1f, 0.0f, 0x1.35d71ep-65f, 0x1.de8648p-111f, 0.0f, 0x1.262106p-68f,
     0.0f, 0x1.05d288p-94f, 0.0f, 0.0f, 0.0f, 0x1.44da52p-65f, 0.0f, 0x1.389482p-32f,
     0.0f, 0x1.dcdcb2p-16f, 0x1.f1e04cp-102f, 0.0f, 0x1.14a666p-77f, 0x1.e66012p-90f,
     0.0f, 0x1.2838cp-68f, 0x1.7df2b4p-116f, 0.0f, 0x1.ac4bb8p-64f, 0x1p0f,
     0x1.310d5p-46f, 0.0f, 0x1.8dd48cp-102f, 0x1.2fdce2p-50f, 0x1.c4c83ap-65f,
     0x1.5d00dp-12f, 0x1.e6fae2p-12f, 0.0f, 0x1.72f08ep-32f, 0x1.1f34b8p-4f, 0.0f,
     0.0f, 0x1.07541cp-108f, 0.0f, 0x1.5329e2p-26f, 0.0f, 0x1.1b5b66p-33f, 0.0f,
     0x1.31b4c8p-118f, 0x1.1eda04p-106f, 0x1.55d0f8p-60f, 0x1.161aeap-113f, 0.0f,
     0x1.9ee5c4p-22f, 0.0f, 0x1.8f68e2p-96f, 0.0f, 0.0f, 0x1.6ff248p-111f, 0.0f, 0.0f,
     0x1.2c77b2p-57f, 0.0f, 0x1.95014ap-96f, 0.0f, 0.0f, 0x1.bcaf2p-30f, 0.0f, 0.0f,
     0.0f, 0x1.e95dd4p-14f, 0x1.201fc4p-120f, 0x1.4010bp-37f, 0x1.41fec8p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1ae9a2p-26f, 0x1.39b054p-37f, 0.0f, 0.0f, 0.0f,
     0x1.4e561ep-71f, 0x1.ef106ap-88f, 0.0f, 0x1.1ac6ap-115f, 0x1.c3ba3ap-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbdd46p-117f, 0.0f, 0.0f, 0.0f, 0x1.806766p-118f,
     0x1.ac1a7ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3e33ep-3f, 0.0f,
     0.0f, 0.0f, 0x1.98b552p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.522b7p-77f, 0.0f, 0.0f,
     0x1.f23348p-35f, 0x1.edc35cp-19f, 0.0f, 0x1.d3e23ap-16f, 0.0f, 0.0f,
     0x1.6283fcp-10f, 0x1.f8a51cp-61f, 0.0f, 0x1.3e9da2p-91f, 0x1.fe2af4p-7f, 0.0f,
     0.0f, 0x1.6b8aeap-81f, 0x1.4cf592p-20f, 0.0f, 0x1.480bbep-37f, 0x1.bee194p-56f,
     0x1.2ced6p-35f, 0x1.213a9ep-94f, 0x1.91bd1cp-22f, 0x1.6a9f6ap-44f,
     0x1.460c1p-85f, 0.0f, 0.0f, 0x1.0810eep-50f, 0.0f, 0.0f, 0x1.1db68p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f6a68p-123f, 0.0f, 0x1.df1abep-116f,
     0x1.107dfp-108f, 0x1.584afp-100f, 0.0f, 0x1.8dc7b6p-99f, 0x1.0c0f6ep-121f,
     0x1.b4f236p-75f, 0x1.926ef6p-98f, 0x1.6e5c6ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e458e8p-113f, 0.0f, 0.0f, 0x1.750524p-72f, 0.0f, 0x1.693adep-18f,
     0x1.b81cc4p-27f, 0.0f, 0.0f, 0x1.078262p-84f, 0.0f, 0.0f, 0.0f, 0x1.c1504cp-15f,
     0x1.37ddcep-94f, 0.0f, 0.0f, 0x1.4532bep-103f, 0x1.30009ap-69f, 0x1.0195dap-86f,
     0.0f, 0.0f, 0.0f, 0x1.a766acp-43f, 0.0f, 0.0f, 0x1.5275a4p-86f, 0x1.956c66p-107f,
     0.0f, 0.0f, 0.0f, 0x1.1878fp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f8e8cp-7f, 0.0f,
     0x1.fba51p-74f, 0x1.53b86ap-103f, 0.0f, 0.0f, 0x1.58fdccp-18f, 0.0f,
     0x1.dccda2p-105f, 0.0f, 0x1.837894p-28f, 0x1.425dc4p-117f, 0.0f, 0x1.ee466cp-8f,
     0x1.73804p-120f, 0.0f, 0x1.b7ddfcp-100f, 0.0f, 0x1.9c803ap-100f, 0.0f, 0.0f,
     0x1.185d16p-6f, 0.0f, 0.0f, 0x1.4248bcp-112f, 0.0f, 0.0f, 0x1.5da048p-5f, 0.0f,
     0x1.9a1f4cp-24f, 0x1.1e38a2p-59f, 0.0f, 0.0f, 0x1.c96c1p-33f, 0.0f, 0.0f,
     0x1.e40b6p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a22a8p-110f, 0x1.2298ecp-32f,
     0x1.c41cd2p-98f, 0x1.b44928p-7f, 0.0f, 0.0f, 0x1.0f69e8p-119f, 0.0f, 0.0f, 0.0f,
     0x1.1d455p-37f, 0x1.0f7686p-26f, 0.0f, 0.0f, 0x1.cd0486p-91f, 0x1.9c2af2p-61f,
     0.0f, 0x1.952e4cp-12f, 0x1.3dbff4p-107f, 0x1.c4e61ap-9f, 0.0f, 0x1.aa918cp-105f,
     0x1.9c94aep-69f, 0x1.9f2738p-49f, 0.0f, 0x1.050e9cp-92f, 0x1.1fde02p-25f, 0.0f,
     0.0f, 0.0f, 0x1.732cp-105f, 0x1.a2e8ecp-73f, 0.0f, 0x1.ebf5d4p-45f,
     0x1.0649c8p-98f, 0x1.60cf98p-11f, 0.0f, 0x1p0f, 0.0f, 0x1.ac3ec2p-29f,
     0x1.566a78p-17f, 0x1.3d4042p-98f, 0.0f, 0x1.7ae6ccp-121f, 0.0f, 0x1.11c8e6p-31f,
     0x1.df8d8p-81f, 0x1.384c6p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1ab44p-121f,
     0x1.075ffcp-111f, 0x1.adf59ep-114f, 0.0f, 0.0f, 0.0f, 0x1.b2db72p-85f,
     0x1.bc701cp-110f, 0x1.e07de4p-35f, 0x1.ab980cp-18f, 0x1.f3fb4ap-112f,
     0x1.e091c8p-43f, 0x1.a49d96p-62f, 0.0f, 0x1.7f4c96p-126f, 0x1.65b1e6p-111f,
     0x1.d004fcp-2f, 0x1.923818p-66f, 0x1.03215cp-72f, 0x1.115658p-32f, 0.0f, 0.0f,
     0x1.98e57p-53f, 0.0f, 0.0f, 0x1.4b279ep-63f, 0.0f, 0x1.758764p-125f,
     0x1.c8fe48p-25f, 0.0f, 0.0f, 0x1.fe5c8p-9f, 0.0f, 0x1.cfa5e2p-76f, 0.0f,
     0x1.c68ac4p-47f, 0x1.2da7eep-85f, 0x1.6077a6p-108f, 0x1.3df954p-80f,
     0x1.ba2be8p-56f, 0.0f, 0x1.968128p-120f, 0x1.98315cp-62f, 0x1.547b72p-32f, 0.0f,
     0.0f, 0x1.6dc50ep-60f, 0x1.1e2a9cp-28f, 0x1.929f88p-38f, 0.0f, 0.0f,
     0x1.708c98p-14f, 0.0f, 0x1.c4b1dp-29f, 0x1.bf28ep-124f, 0.0f, 0x1.c085c4p-104f,
     0.0f, 0x1.fd1e66p-89f, 0.0f, 0x1.f1ce5p-54f, 0x1.4465f4p-40f, 0x1.04162cp-96f,
     0x1.7bff56p-41f, 0x1.91a506p-15f, 0.0f, 0x1.46b2c6p-107f, 0x1.c99b6cp-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6284ep-88f, 0x1.9dbe18p-60f, 0.0f,
     0x1.451032p-94f, 0x1.a3633ep-102f, 0x1.08af5ap-58f, 0x1.bf09cep-34f, 0.0f, 0.0f,
     0x1.666152p-64f, 0x1.9bd5fap-96f, 0x1.60fbeap-60f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.8d9456p-38f, 0.0f, 0x1.eed06cp-55f, 0x1.b60038p-116f, 0.0f, 0.0f, 0.0f,
     0x1.f62cap-10f, 0.0f, 0.0f, 0.0f, 0x1.51ff98p-74f, 0.0f, 0.0f, 0.0f,
     0x1.ca7c36p-98f, 0x1.046a0cp-81f, 0x1.4a8a0cp-80f, 0x1.35bb64p-22f,
     0x1.cc962p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3a586p-106f, 0x1.7cec28p-24f,
     0x1.6d453ep-13f, 0x1.533ed8p-12f, 0x1.bd5a3cp-115f, 0.0f, 0x1.8091bcp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c60bap-47f, 0x1.782dbcp-114f, 0.0f, 0.0f, 0.0f,
     0x1.90df0ap-8f, 0x1.095a04p-11f, 0x1.5ef7f2p-46f, 0x1.713ea4p-72f,
     0x1.64c856p-23f, 0x1.d62c1ep-28f, 0x1.eed05ap-88f, 0.0f, 0x1.7d3ea8p-72f, 0.0f,
     0.0f, 0x1.0dd5a8p-20f, 0x1.5ec5ecp-98f, 0x1.d63a38p-69f, 0.0f, 0x1.c5bbc8p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.15b62ep-1f, 0.0f, 0x1.c63fc8p-52f, 0x1.5468a8p-56f,
     0x1.1f9962p-50f, 0.0f, 0.0f, 0.0f, 0x1.94e6a2p-69f, 0x1.d48afap-34f, 0.0f, 0.0f,
     0x1.cf0668p-71f, 0x1.7845bp-101f, 0x1.5d6858p-52f, 0x1.a1a926p-106f, 0.0f, 0.0f,
     0.0f, 0x1.afc0f8p-23f, 0x1.aae392p-37f, 0.0f, 0x1.11b6dap-117f, 0x1.bf8044p-38f,
     0.0f, 0.0f, 0.0f, 0x1.5611ep-32f, 0x1.c5ace6p-97f, 0.0f, 0.0f, 0x1.28c342p-75f,
     0.0f, 0.0f, 0x1.5c85bcp-96f, 0x1.d20accp-69f, 0.0f, 0x1.911662p-80f,
     0x1.816438p-6f, 0x1.14df28p-23f, 0x1.c5e804p-62f, 0.0f, 0.0f, 0x1.158824p-98f,
     0.0f, 0.0f, 0.0f, 0x1.355268p-29f, 0x1.7933cp-56f, 0x1.4bae8ap-10f, 0.0f, 0.0f,
     0x1.8bc132p-34f, 0x1.a2a4cep-93f, 0x1.5f0b0ep-94f, 0.0f, 0x1.9a904p-33f,
     0x1.f93f5p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e667b6p-123f, 0x1.788f8ep-45f, 0.0f,
     0.0f, 0x1.e830d2p-117f, 0x1.002ca2p-31f, 0.0f, 0.0f, 0x1.6b2bbep-93f, 0.0f, 0.0f,
     0.0f, 0x1.dda2fap-63f, 0x1.440f42p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9c936p-67f, 0x1.59da2p-84f, 0.0f, 0x1.fe10bep-9f, 0.0f, 0x1.31e2b2p-12f,
     0x1.8e1936p-96f, 0x1.437f8p-56f, 0x1.60348cp-76f, 0x1.4a9aa8p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5ce58ep-32f, 0.0f, 0x1.fad4eap-22f, 0x1.a7ff18p-28f,
     0x1.027194p-37f, 0.0f, 0x1.71d5d2p-102f, 0.0f, 0x1.ff0f68p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c5fb3p-6f, 0.0f, 0.0f, 0.0f, 0x1.bd1c94p-15f, 0x1.902356p-125f,
     0.0f, 0x1.7ad036p-69f, 0x1.bc6f78p-23f, 0x1.b2ca32p-38f, 0x1.c579ecp-2f, 0.0f,
     0.0f, 0.0f, 0x1.d64716p-13f, 0.0f, 0x1.883522p-18f, 0x1.c8e6e4p-105f, 0.0f, 0.0f,
     0x1.31f9bp-42f, 0x1.3c04bep-52f, 0.0f, 0.0f, 0x1.6ea3cap-76f, 0.0f,
     0x1.599864p-74f, 0x1.a48bp-49f, 0x1.44ba04p-86f, 0.0f, 0x1.4ae946p-46f,
     0x1.a4dad4p-18f, 0.0f, 0x1.72944ep-33f, 0x1.31679ap-63f, 0x1.043978p-117f,
     0x1.96ac3cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.099f9cp-114f, 0.0f,
     0x1.ab1abcp-22f, 0.0f, 0.0f, 0.0f, 0x1.28f4dap-118f, 0.0f, 0.0f, 0.0f,
     0x1.b3584p-48f, 0.0f, 0.0f, 0x1.51cf6p-89f, 0x1.7d8162p-107f, 0x1.4a4ba8p-125f,
     0x1.80af5p-88f, 0x1.44d75p-1f, 0.0f, 0.0f, 0.0f, 0x1.9ac09ap-67f,
     0x1.ebf12ap-101f, 0.0f, 0x1.127ca2p-27f, 0.0f, 0.0f, 0x1.1e795ep-29f,
     0x1.8419fp-86f, 0x1.2e5362p-67f, 0x1.e82142p-61f, 0.0f, 0x1.a515dep-99f,
     0x1.86bd94p-97f, 0.0f, 0.0f, 0x1.50d534p-115f, 0.0f, 0.0f, 0x1.3e67p-67f,
     0x1.2930dep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92d00cp-112f, 0x1.e0efcap-36f,
     0x1.f1aca4p-117f, 0x1.2e9c24p-117f, 0.0f, 0x1.5731fep-82f, 0.0f, 0.0f,
     0x1.abc67p-116f, 0.0f, 0x1.a62d4ep-32f, 0x1.5b33e8p-14f, 0x1.bc5964p-52f, 0.0f,
     0x1.a95868p-62f, 0.0f, 0x1.1aea5ep-21f, 0x1.f7dfb4p-118f, 0.0f, 0x1.0fa18p-97f,
     0x1.48ecc2p-120f, 0.0f, 0x1.633066p-3f, 0x1.3f606p-22f, 0x1.88289ap-5f,
     0x1.4d8e7cp-52f, 0x1.1f2bfap-9f, 0.0f, 0x1.9a0c5ap-4f, 0x1.920662p-61f,
     0x1.e241f2p-44f, 0.0f, 0x1.01cc2cp-72f, 0.0f, 0.0f, 0.0f, 0x1.2c5002p-106f,
     0x1.24e1d6p-66f, 0x1.3c3626p-47f, 0.0f, 0x1.281794p-95f, 0x1.f9d146p-64f, 0.0f,
     0.0f, 0x1.801e3ep-71f, 0.0f, 0x1.c9edc2p-79f, 0x1.90af16p-71f, 0x1.ebf7c6p-3f,
     0x1.6295a4p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56936ep-79f, 0x1.cd95fep-14f,
     0x1.2a594cp-34f, 0.0f, 0x1.e4ec7cp-112f, 0.0f, 0x1.57ba3ap-68f, 0.0f, 0.0f,
     0x1.ef727cp-122f, 0x1.36fee4p-81f, 0.0f, 0x1.23c75ep-70f, 0x1.bc4d9ap-86f, 0.0f,
     0x1.610022p-72f, 0.0f, 0x1.bf6fe4p-66f, 0.0f, 0.0f, 0x1.2f381cp-94f,
     0x1.b4fd0ap-53f, 0x1.7a8b78p-115f, 0x1.c2e4f4p-96f, 0x1.d52948p-82f,
     0x1.c1c808p-103f, 0x1.6c0c26p-37f, 0x1.68a2p-38f, 0.0f, 0.0f, 0.0f,
     0x1.cbfc94p-57f, 0x1.ba59cap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00c146p-25f, 0.0f,
     0x1.3d7696p-81f, 0.0f, 0.0f, 0.0f, 0x1.f654a2p-21f, 0x1.5546a8p-29f,
     0x1.b0689p-49f, 0x1.4b565ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34cee8p-13f,
     0.0f, 0x1.26c5d6p-54f, 0x1.f4d1e2p-58f, 0.0f, 0x1.d24d8ep-46f, 0x1.af3848p-84f,
     0x1.91e808p-122f, 0x1.00f7e8p-27f, 0x1.52441ep-126f, 0.0f, 0.0f, 0x1.9631ep-58f,
     0.0f, 0.0f, 0.0f, 0x1.2842d6p-76f, 0.0f, 0.0f, 0x1.8899cap-84f, 0.0f,
     0x1.0321b2p-44f, 0x1.a61fbp-66f, 0.0f, 0x1.484458p-102f, 0x1.ef554p-15f, 0.0f,
     0x1.c1b024p-13f, 0x1.19c6d8p-63f, 0.0f, 0.0f, 0x1.f4c3aap-61f, 0x1.1756c4p-5f,
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
            tmp1 = Sleef_finz_tgammaf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tgammaf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
