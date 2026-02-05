/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf4_u10kvx.c --function \
 *     Sleef_finz_sinhf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.ed29ecp-21f, 0.0f, 0x1.3fb412p-83f, 0.0f, 0.0f, 0x1.bb8904p-102f,
     0x1.b000e4p-51f, 0x1.e42f7ap-94f, 0.0f, 0.0f, 0x1.4db0d4p-91f, 0x1.60e5a8p-91f,
     0x1.8c965ep-66f, 0x1.697918p-124f, 0x1.800ecap-19f, 0x1.2829bap-54f,
     0x1.2a07aep-19f, 0x1.9a69a4p-122f, 0.0f, 0x1.30a4e8p-89f, 0.0f, 0x1.66a052p-121f,
     0x1.890658p-98f, 0.0f, 0.0f, 0.0f, 0x1.38ddeap-2f, 0.0f, 0.0f, 0.0f,
     0x1.76ef1ep-23f, 0x1.92d60ep-47f, 0.0f, 0x1.c0c8dp-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b8528p-92f, 0.0f, 0x1.b8dbaap-29f, 0.0f, 0x1.8b1eb4p-13f, 0.0f, 0.0f,
     0x1.ae6b1cp-57f, 0.0f, 0x1.42f5e2p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b9b58p-83f,
     0.0f, 0x1.8801f6p-99f, 0.0f, 0.0f, 0.0f, 0x1.f8f934p-104f, 0.0f, 0x1.1bb1eep-18f,
     0x1.32a5fcp-2f, 0x1.6de2a2p-114f, 0x1.d0270ap-27f, 0.0f, 0x1.33a7c2p-4f, 0.0f,
     0.0f, 0x1.f970c4p-10f, 0x1.7537e2p-102f, 0x1.000d8ep-75f, 0x1.c68b14p-97f, 0.0f,
     0.0f, 0.0f, 0x1.f8f2bp-121f, 0.0f, 0.0f, 0x1.9ffd36p-101f, 0x1.94f35ap-58f,
     0x1.321088p-115f, 0x1.621dep-67f, 0.0f, 0x1.badd1p-43f, 0x1.4ac206p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.263b66p-84f, 0x1.b2cda4p-124f, 0.0f, 0x1.3bb04ep-119f,
     0x1.63233p-100f, 0x1.cfb716p-48f, 0x1.56cabap-29f, 0.0f, 0.0f, 0x1.01c91p-20f,
     0x1.83d588p-91f, 0x1.77aa2ap-113f, 0x1.fe73eap-15f, 0x1.f826a2p-39f,
     0x1.85666ep-29f, 0.0f, 0x1.e474c2p-8f, 0.0f, 0x1.3b5e5ap-9f, 0x1.afaeb2p-83f,
     0x1.8e6fe4p-57f, 0x1.cb39aep-51f, 0x1.23017ap-111f, 0.0f, 0.0f, 0.0f,
     0x1.2fda06p-28f, 0x1.307f4ap-46f, 0x1.3fd546p-89f, 0.0f, 0.0f, 0x1.36612ep-68f,
     0.0f, 0x1.6f50cp-78f, 0.0f, 0.0f, 0x1.5a2a92p-14f, 0.0f, 0x1.93e022p-49f,
     0x1.90977ep-91f, 0.0f, 0x1.3aba7ep-73f, 0x1.1354cep-72f, 0x1.d29d54p-17f,
     0x1.666edep-67f, 0x1.4563aep-59f, 0.0f, 0.0f, 0.0f, 0x1.f4048ap-85f,
     0x1.a8d974p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.487368p-126f, 0.0f, 0.0f,
     0x1.cf0d2ep-104f, 0.0f, 0x1p0f, 0x1.5116bcp-9f, 0x1.af972cp-108f,
     0x1.7e521ep-68f, 0x1.86b24cp-78f, 0x1.d8bf34p-21f, 0x1.2b7baep-120f,
     0x1.b900d2p-16f, 0x1.386d14p-43f, 0x1.d22e6ap-26f, 0.0f, 0.0f, 0.0f,
     0x1.db164p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cc758p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d6c8ap-65f, 0.0f, 0.0f, 0.0f, 0x1.eef166p-97f, 0x1.a20ddap-52f, 0.0f, 0.0f,
     0x1.6a5c36p-118f, 0.0f, 0x1.ed55dep-32f, 0x1.f43c62p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff538p-10f, 0x1.1a0fb6p-64f,
     0x1.3365dp-78f, 0.0f, 0.0f, 0.0f, 0x1.f7a6d8p-50f, 0.0f, 0x1.1f3fe2p-56f,
     0x1.6ce274p-80f, 0.0f, 0x1.3be646p-109f, 0x1.86f5fep-43f, 0.0f, 0x1.1d3198p-78f,
     0.0f, 0x1.c710d8p-12f, 0x1.4639c2p-75f, 0x1.c5fa76p-71f, 0.0f, 0x1.f30e3ep-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25e13cp-54f, 0.0f, 0x1.66c592p-1f,
     0x1.b5e90ep-69f, 0.0f, 0.0f, 0x1.188bfap-50f, 0.0f, 0.0f, 0x1.2ee1e6p-97f,
     0x1.49976ep-89f, 0x1.09e47cp-96f, 0x1.69524p-64f, 0.0f, 0.0f, 0.0f,
     0x1.5743eap-33f, 0.0f, 0x1.317dbep-14f, 0x1.5c0c18p-114f, 0.0f, 0.0f,
     0x1.981a72p-84f, 0x1.09529ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba32p-84f, 0.0f,
     0x1.45c7cep-124f, 0x1.10d23cp-116f, 0x1.71b0c2p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6f78cp-74f, 0x1.75eccp-37f, 0x1.596838p-66f, 0x1.21e034p-31f, 0.0f, 0.0f,
     0x1.9c89fp-93f, 0x1.8834dcp-11f, 0x1.3e08dap-38f, 0x1.5aa812p-120f, 0.0f,
     0x1.46b1eap-58f, 0x1.57b852p-46f, 0x1.b3cb78p-5f, 0x1.c9fcf4p-24f, 0.0f,
     0x1.8c95e8p-109f, 0x1.b3fb4cp-24f, 0x1.b48bdep-32f, 0x1.f3a32cp-82f,
     0x1.5c2e4ap-80f, 0x1.9751eap-13f, 0x1.a0971p-6f, 0x1.88b076p-40f, 0x1.e722dp-51f,
     0.0f, 0.0f, 0x1.082beap-84f, 0x1.3442fap-34f, 0x1.66c974p-31f, 0.0f,
     0x1.28275ep-105f, 0.0f, 0x1.4fc042p-101f, 0x1.93969ap-30f, 0x1.b590cep-108f,
     0x1.d8a586p-81f, 0.0f, 0x1.0c7302p-104f, 0.0f, 0x1.cd2198p-64f, 0x1.59b242p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecd648p-93f, 0x1.1ddb8p-82f, 0x1.6fe498p-104f,
     0x1.8789d4p-35f, 0x1.b3c592p-26f, 0.0f, 0.0f, 0.0f, 0x1.d49902p-52f, 0.0f, 0.0f,
     0x1.4a777cp-23f, 0x1.395f72p-92f, 0.0f, 0x1.894404p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c45ceap-101f, 0x1.df7e6cp-44f, 0x1.ef793p-96f, 0x1.f3fcc6p-125f, 0.0f,
     0x1.90474ap-34f, 0.0f, 0x1.8ff756p-28f, 0x1.6d6bfap-45f, 0.0f, 0.0f,
     0x1.07abe8p-41f, 0.0f, 0x1.d2776cp-12f, 0x1.fb4fdp-62f, 0.0f, 0x1.f5f9f8p-38f,
     0x1.da815cp-7f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.52f78ap-74f, 0x1.d5de8p-81f,
     0x1.1e6d6p-104f, 0x1.2eeac2p-115f, 0.0f, 0.0f, 0.0f, 0x1.145b88p-9f,
     0x1.8127f4p-47f, 0x1.34de86p-77f, 0.0f, 0x1.bd527p-91f, 0x1.9a823p-93f,
     0x1.7b56a4p-81f, 0.0f, 0x1.30d1cep-110f, 0x1.e495fp-22f, 0x1.929198p-91f, 0.0f,
     0x1.51d202p-116f, 0x1.d0bccap-90f, 0.0f, 0x1.7ad6dap-109f, 0.0f, 0.0f,
     0x1.05187ep-123f, 0x1.02b0b2p-111f, 0.0f, 0x1.15ecfcp-89f, 0x1.62fb9ep-23f, 0.0f,
     0x1.d92514p-40f, 0x1.052352p-51f, 0x1.6869f2p-6f, 0.0f, 0.0f, 0.0f,
     0x1.d8eb9cp-77f, 0x1.7387ecp-72f, 0x1p0f, 0x1.042f08p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.883de4p-87f, 0x1.78220cp-5f, 0x1.1a25aep-47f, 0.0f,
     0x1.1449aep-67f, 0.0f, 0.0f, 0x1.a3fe3p-89f, 0x1.48120ep-121f, 0x1.cab724p-46f,
     0.0f, 0x1.c23d6ap-1f, 0x1.170478p-32f, 0.0f, 0.0f, 0x1.9631b2p-97f, 0.0f,
     0x1.96e44cp-84f, 0.0f, 0.0f, 0x1.32e946p-98f, 0x1.ae279p-106f, 0x1.84c7e4p-117f,
     0x1.4a7f58p-96f, 0x1.0721e8p-34f, 0x1.469328p-18f, 0x1.0cd8fcp-71f,
     0x1.d158b8p-120f, 0.0f, 0x1.d6ce48p-19f, 0x1.01e98ep-30f, 0x1.27476p-44f, 0.0f,
     0.0f, 0x1.c00b6p-32f, 0.0f, 0.0f, 0x1.e5c0bp-95f, 0x1.50ec9ep-118f, 0.0f, 0.0f,
     0.0f, 0x1.109a62p-45f, 0x1.0be02p-27f, 0x1.8ad9dp-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09c3bcp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a62e4p-112f, 0x1.f16a58p-8f,
     0x1.f1d83p-56f, 0x1.53b2c6p-73f, 0.0f, 0.0f, 0.0f, 0x1.8e3f68p-39f,
     0x1.db46f4p-95f, 0x1.b58f5ap-123f, 0x1.8bd3bap-23f, 0.0f, 0x1.32eea4p-75f, 0.0f,
     0.0f, 0x1.cff192p-20f, 0x1.1ff7fcp-118f, 0.0f, 0.0f, 0x1.7e72fap-63f,
     0x1.d3dfbap-17f, 0x1.9714cp-20f, 0.0f, 0.0f, 0x1.8d4cdcp-51f, 0x1.dc4f1cp-5f,
     0x1.27c97ep-98f, 0.0f, 0.0f, 0.0f, 0x1.661bc6p-122f, 0.0f, 0x1.804606p-116f,
     0x1.af7012p-118f, 0x1.c285b4p-40f, 0x1.3a6bacp-69f, 0x1.b7708ep-101f,
     0x1.c3c1f4p-113f, 0x1.465146p-48f, 0x1.9a657cp-56f, 0.0f, 0.0f, 0x1.4944c4p-79f,
     0.0f, 0.0f, 0.0f, 0x1.0f6fc4p-55f, 0.0f, 0x1.cfb476p-88f, 0x1.5da81p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eceafap-67f, 0x1.60bcf6p-82f, 0x1.4325c4p-25f, 0.0f, 0.0f,
     0.0f, 0x1.68b6dp-74f, 0x1.b604bcp-89f, 0x1.d21c98p-49f, 0.0f, 0x1.1b89bap-11f,
     0.0f, 0.0f, 0x1.4a8c44p-13f, 0x1.1053bcp-11f, 0.0f, 0x1.bae058p-73f, 0.0f,
     0x1.83c8b2p-12f, 0x1.5b3244p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26cdcap-100f, 0.0f,
     0.0f, 0x1.8c0bfap-60f, 0.0f, 0.0f, 0.0f, 0x1.ab88ep-38f, 0x1.dd887p-63f,
     0x1.99a9e4p-104f, 0x1.eea49cp-25f, 0x1.4229acp-30f, 0.0f, 0.0f, 0x1.551e4ep-62f,
     0x1.c4d924p-59f, 0x1.a998fep-27f, 0.0f, 0.0f, 0.0f, 0x1.2bb686p-88f,
     0x1.4327p-90f, 0x1.d1d946p-48f, 0.0f, 0x1.00693p-15f, 0.0f, 0.0f, 0x1.021d8p-71f,
     0.0f, 0x1.7b0808p-90f, 0.0f, 0.0f, 0.0f, 0x1.7df5fap-105f, 0.0f, 0.0f,
     0x1.4b14b6p-87f, 0.0f, 0.0f, 0x1.b19cb2p-3f, 0x1.e26be2p-60f, 0x1.b12ca2p-109f,
     0x1.f587bep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c855ap-33f, 0.0f,
     0x1.aab118p-46f, 0.0f, 0x1.e136fep-6f, 0x1.571c12p-69f, 0.0f, 0x1.5e813p-43f,
     0.0f, 0x1.ee2c68p-32f, 0x1.47ea1p-86f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.a0e32cp-47f, 0.0f, 0.0f, 0x1.1cfc24p-112f, 0x1.eb6d5ep-26f, 0.0f,
     0x1.a94028p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b3298p-79f, 0x1.856312p-28f,
     0x1.c805cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4773cp-30f, 0x1.6e2ca2p-37f, 0.0f,
     0x1.2c50a4p-74f, 0.0f, 0.0f, 0x1.979f56p-58f, 0.0f, 0x1.19ee04p-115f,
     0x1.cc214ep-117f, 0.0f, 0.0f, 0.0f, 0x1.26650cp-117f, 0.0f, 0.0f, 0.0f,
     0x1.0a4f1ap-103f, 0.0f, 0x1.aa0046p-3f, 0x1.6d196ep-25f, 0.0f, 0x1.514f6cp-18f,
     0x1.a73decp-12f, 0x1.790742p-11f, 0.0f, 0.0f, 0.0f, 0x1.f4ae86p-57f, 0x1p0f,
     0x1.7cb06cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3327p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.044db6p-77f, 0x1.a9debcp-44f, 0x1.69bd2ep-6f, 0x1.bdbbe6p-107f,
     0x1.d1dacp-13f, 0.0f, 0x1.727476p-107f, 0x1.09b20ap-60f, 0x1.81f14p-108f, 0.0f,
     0x1.d1202ep-121f, 0.0f, 0x1.fd58d4p-50f, 0.0f, 0x1.d2a872p-81f, 0.0f, 0.0f, 0.0f,
     0x1.30e9b8p-91f, 0.0f, 0x1.358a36p-86f, 0x1.1898c4p-96f, 0.0f, 0x1.4dfd3ep-71f,
     0x1.ec2312p-12f, 0.0f, 0x1.80e22ep-14f, 0.0f, 0x1.1fa8bp-103f, 0.0f, 0.0f,
     0x1.973638p-46f, 0x1.404ea6p-81f, 0x1.4ce42ep-10f, 0.0f, 0x1.f85d22p-92f,
     0x1.0ea72p-42f, 0x1.5931cep-66f, 0x1.cdf096p-7f, 0x1.4783cep-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5e86p-64f, 0.0f, 0x1.ef6276p-79f,
     0.0f, 0x1.b7b868p-126f, 0.0f, 0x1.711552p-82f, 0x1.bf035p-78f, 0x1.7e2ef6p-92f,
     0x1.aa76bep-97f, 0x1.400d52p-52f, 0x1.5a34ccp-28f, 0.0f, 0.0f, 0.0f,
     0x1.923ecep-42f, 0x1.420ff4p-116f, 0.0f, 0x1.d2bd66p-107f, 0x1.d0d75ap-118f,
     0x1.1adeccp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10a2bep-13f, 0x1.6b34ep-71f,
     0.0f, 0.0f, 0x1.fb6a62p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c163dap-26f,
     0x1.939516p-111f, 0.0f, 0.0f, 0x1.f9a256p-29f, 0.0f, 0.0f, 0x1.7f0bf4p-10f,
     0x1.32512ep-64f, 0x1.dd88dp-21f, 0.0f, 0x1.72d304p-3f, 0x1.700776p-16f,
     0x1.740506p-2f, 0.0f, 0x1.d9d26cp-109f, 0x1.02f72p-102f, 0.0f, 0x1.5bf7bap-97f,
     0x1.45c5bep-33f, 0.0f, 0.0f, 0x1.64659p-20f, 0x1.b4efb2p-107f, 0.0f, 0.0f, 0.0f,
     0x1.e3ee14p-82f, 0x1.89d3fp-1f, 0x1.fe6a88p-108f, 0.0f, 0x1.dce2c2p-57f, 0.0f,
     0.0f, 0x1.73bf2ep-16f, 0x1.76952ep-47f, 0x1.d05ee2p-34f, 0x1.3ee922p-60f,
     0x1.e36988p-33f, 0.0f, 0x1.6110a6p-45f, 0x1.7a450ep-84f, 0x1.2eeec8p-113f,
     0x1.380582p-29f, 0.0f, 0x1.32c42ep-98f, 0.0f, 0x1.659206p-74f, 0.0f,
     0x1.e86fd2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1feffcp-36f, 0x1.1360aap-29f,
     0x1.c24538p-33f, 0x1.4fff08p-42f, 0x1.3ca7dep-94f, 0x1.b427f6p-14f, 0.0f, 0.0f,
     0.0f, 0x1.dafc9cp-8f, 0.0f, 0x1.282e0ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e6f5d6p-118f, 0x1.8dbd7ep-66f, 0x1.1bca42p-77f, 0x1.d51a3ap-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f941ep-77f, 0.0f,
     0.0f, 0x1.e80048p-118f, 0x1.d8a6b4p-13f, 0.0f, 0x1.638162p-14f, 0.0f, 0.0f,
     0x1.b1518ep-22f, 0x1.4a9f32p-62f, 0.0f, 0x1.39bacp-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.777e5ep-116f, 0.0f, 0x1.7c20e2p-112f, 0x1.7a44c8p-38f, 0.0f, 0.0f,
     0.0f, 0x1.a15646p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.464e6cp-10f, 0x1.b2a734p-57f,
     0.0f, 0.0f, 0x1.528164p-36f, 0.0f, 0.0f, 0x1.52e408p-113f, 0x1.f978d6p-100f,
     0x1.420fb4p-6f, 0.0f, 0x1.28ec84p-120f, 0x1.22e9f4p-15f, 0.0f, 0x1.aecc4cp-59f,
     0x1.9b5b6ep-102f, 0.0f, 0.0f, 0.0f, 0x1.c0a0f2p-96f, 0.0f, 0x1.73f94ep-38f, 0.0f,
     0.0f, 0x1.ec68eap-91f, 0.0f, 0x1.2f3356p-66f, 0.0f, 0.0f, 0x1.bd6c26p-49f,
     0x1.fd4814p-11f, 0.0f, 0x1.15ff4p-31f, 0.0f, 0x1.005442p-113f, 0.0f, 0.0f,
     0x1.d7073p-22f, 0x1.bbbbccp-120f, 0x1.926c06p-30f, 0x1.a12bf8p-6f,
     0x1.40236ep-2f, 0.0f, 0x1.03a946p-69f, 0x1.c5d674p-14f, 0.0f, 0x1.07293ap-16f,
     0x1.2cf3fp-118f, 0.0f, 0.0f, 0x1.181f6ap-9f, 0x1.24d512p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0483c4p-111f, 0.0f, 0.0f, 0x1.2936a6p-121f, 0.0f, 0.0f,
     0x1.5988e2p-8f, 0.0f, 0.0f, 0x1.e70e04p-72f, 0.0f, 0x1.925ccap-15f, 0.0f,
     0x1.9b68d8p-1f, 0x1.123c36p-15f, 0.0f, 0x1.bfd378p-20f, 0.0f, 0x1.2301d4p-39f,
     0x1.380a92p-25f, 0x1.c948dep-37f, 0x1.fdbb7cp-54f, 0x1.04002cp-118f,
     0x1.eadf66p-90f, 0x1.41ff2ap-59f, 0.0f, 0x1.3075fp-5f, 0x1.0a0c78p-20f,
     0x1.3b3268p-108f, 0x1.910668p-25f, 0.0f, 0x1.4db1e4p-51f, 0x1.4a74acp-101f, 0.0f,
     0.0f, 0x1.502b48p-41f, 0x1.8b9544p-54f, 0x1.dee192p-58f, 0x1.67d4b2p-23f, 0.0f,
     0.0f, 0x1.2869acp-27f, 0.0f, 0.0f, 0x1.5a687ep-52f, 0x1.ac59f4p-53f,
     0x1.7afafep-60f, 0x1.be88b6p-71f, 0x1.f5c22ap-82f, 0.0f, 0.0f, 0x1.c77e28p-4f,
     0.0f, 0x1.d85b96p-36f, 0.0f, 0x1.c8cc92p-57f, 0.0f, 0x1.47cacap-28f, 0.0f, 0.0f,
     0x1.a54468p-113f, 0x1.0b954ap-58f, 0.0f, 0x1.bb8a96p-27f, 0.0f, 0.0f,
     0x1.7b06cap-106f, 0.0f, 0.0f, 0.0f, 0x1.979c5ap-19f, 0.0f, 0x1.2f7b7p-97f, 0.0f,
     0.0f, 0x1.d97f1cp-94f, 0x1.4cd326p-6f, 0x1.d88a34p-41f, 0.0f, 0x1.ac559ap-126f,
     0.0f, 0x1.4e04bap-124f, 0x1.590c56p-65f, 0.0f, 0.0f, 0x1.ab378ap-31f, 0.0f,
     0x1.71644ep-126f, 0x1.c45012p-105f, 0.0f, 0x1.0380d8p-43f, 0x1.1131f8p-42f,
     0x1.02182p-34f
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
            tmp1 = Sleef_finz_sinhf4_u10kvx(tmp0);
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
    printf("Sleef_finz_sinhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
