/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floorf4_kvx.c --function Sleef_floorf4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
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
     0.0f, 0x1.6e55c4p-30f, 0x1.542de2p-58f, 0.0f, 0x1.2b098ap-51f, 0x1.dc842p-69f,
     0x1.3178b8p-7f, 0x1.5ddcc2p-60f, 0x1.6b9604p-69f, 0.0f, 0x1.5dcdd2p-120f,
     0x1.057bb8p-35f, 0x1.649ca4p-65f, 0x1p0f, 0x1.2255c6p-77f, 0x1.9346b6p-17f, 0.0f,
     0x1.c1c914p-5f, 0x1.416788p-67f, 0.0f, 0.0f, 0x1.df4b28p-68f, 0.0f, 0.0f,
     0x1.03851p-70f, 0x1.8dcda4p-108f, 0.0f, 0x1.cbd5aap-22f, 0x1.45aa6cp-105f,
     0x1.fa8fb2p-59f, 0.0f, 0.0f, 0x1.7b5c1ap-1f, 0x1.ce286cp-73f, 0x1.8d5fbap-79f,
     0.0f, 0x1.e31792p-9f, 0x1.e45072p-75f, 0x1.15befap-105f, 0x1.f6556ep-117f,
     0x1.87227ap-100f, 0x1.ec68dp-85f, 0x1.9d935ep-57f, 0.0f, 0x1.fb2ed8p-28f, 0.0f,
     0.0f, 0.0f, 0x1.bd65f8p-36f, 0x1.0845cp-44f, 0x1.31a072p-9f, 0.0f, 0.0f,
     0x1.aaba4cp-10f, 0x1.c888dp-3f, 0x1.1df5ap-19f, 0.0f, 0.0f, 0x1.22e734p-29f,
     0.0f, 0x1.49d12cp-63f, 0x1.8ab1e4p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7883cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd565ep-99f, 0x1.a970d6p-12f, 0.0f,
     0.0f, 0x1.d46f02p-106f, 0x1.bc0ee2p-74f, 0x1.2bc7acp-3f, 0x1.43a2cp-42f, 0.0f,
     0.0f, 0x1.f51762p-71f, 0x1.1478dep-59f, 0x1.31ef34p-58f, 0.0f, 0x1.6086f4p-41f,
     0x1.588e1ep-65f, 0x1.6ad11ep-75f, 0x1.bd7d92p-50f, 0.0f, 0x1.dc0964p-111f,
     0x1.0d40dp-59f, 0x1.c6005ep-66f, 0.0f, 0x1.79f1a4p-39f, 0x1.9d577p-49f, 0.0f,
     0x1.97ce2ap-77f, 0x1.35e19ep-32f, 0.0f, 0.0f, 0x1.2d1b4cp-26f, 0.0f,
     0x1.40b40ap-95f, 0.0f, 0x1.cc1c62p-48f, 0x1.b2eb94p-108f, 0.0f, 0x1.d7e824p-108f,
     0x1.630832p-27f, 0x1.08cbd8p-99f, 0.0f, 0.0f, 0.0f, 0x1.9e78b6p-3f,
     0x1.9aa01ap-21f, 0x1.545f52p-106f, 0.0f, 0.0f, 0.0f, 0x1.0986d8p-114f,
     0x1.6508eap-79f, 0.0f, 0x1.cb4d14p-75f, 0.0f, 0.0f, 0.0f, 0x1.b73996p-24f,
     0x1.bcc676p-110f, 0.0f, 0x1.cf7172p-100f, 0.0f, 0x1.bb036ap-7f, 0.0f,
     0x1.2b492p-21f, 0x1.0a7268p-39f, 0.0f, 0.0f, 0.0f, 0x1.fc28eap-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9fb21ep-100f, 0x1.64adbap-37f, 0.0f, 0x1.026facp-84f, 0.0f,
     0x1.5e79c4p-53f, 0x1.8b646cp-49f, 0.0f, 0x1.66869ep-8f, 0.0f, 0x1.323a02p-97f,
     0.0f, 0x1.ba339ap-22f, 0.0f, 0.0f, 0x1.f29764p-124f, 0x1.e0449ap-110f, 0.0f,
     0x1.d919e4p-106f, 0x1.1a135ep-5f, 0.0f, 0x1.c9ed16p-18f, 0x1.46a83ap-86f,
     0x1.cb7ffcp-111f, 0x1.5dd9b4p-106f, 0x1.daef56p-61f, 0x1.b2ef66p-26f,
     0x1.0ed06ep-31f, 0.0f, 0.0f, 0x1.b876a2p-86f, 0x1.aca1fcp-4f, 0x1.fd5dbcp-104f,
     0.0f, 0x1.88bfbcp-1f, 0x1.90ad4cp-104f, 0.0f, 0.0f, 0x1.50e26ep-20f, 0.0f, 0.0f,
     0.0f, 0x1.98c8f2p-62f, 0x1.a9ba08p-43f, 0.0f, 0.0f, 0x1.8491bcp-44f,
     0x1.e8c74ep-119f, 0.0f, 0x1.33e03ep-61f, 0x1.4acf8p-38f, 0.0f, 0x1.943ee4p-79f,
     0.0f, 0.0f, 0x1.e98a76p-86f, 0x1.e09f1ap-95f, 0x1.da5178p-36f, 0.0f, 0.0f,
     0x1.ba4e92p-122f, 0.0f, 0x1.d211fcp-30f, 0.0f, 0x1.8e6acp-44f, 0.0f, 0.0f,
     0x1.b2620ep-41f, 0x1.7a2852p-113f, 0.0f, 0.0f, 0x1.125174p-1f, 0.0f,
     0x1.d75b04p-87f, 0.0f, 0x1.674d66p-57f, 0x1.1513dcp-69f, 0.0f, 0x1.157d14p-99f,
     0.0f, 0x1.e0fe6p-21f, 0.0f, 0.0f, 0x1.4a2384p-57f, 0.0f, 0x1.d0537ep-52f,
     0x1.e52e58p-70f, 0.0f, 0.0f, 0x1.c36162p-96f, 0x1.12846cp-51f, 0.0f, 0x1p0f,
     0.0f, 0x1.7d771ap-125f, 0x1.f0685ep-19f, 0.0f, 0x1.2fa4ap-117f, 0x1.c05514p-97f,
     0x1.ef4e7p-58f, 0x1.6e0acep-74f, 0.0f, 0.0f, 0.0f, 0x1.0e0002p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c11d34p-101f, 0x1.99051ep-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.08cc2cp-81f, 0x1.de64fp-88f, 0x1.b42116p-72f, 0.0f, 0.0f,
     0x1.af1eb8p-21f, 0x1.11b6f8p-79f, 0x1.8bda7cp-13f, 0.0f, 0x1.ffb416p-7f,
     0x1.2e18e6p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b072ccp-8f, 0.0f, 0x1.5f6546p-37f,
     0.0f, 0x1.e272b6p-81f, 0.0f, 0x1.28c02ep-59f, 0x1.d33d08p-63f, 0x1.655c8p-115f,
     0.0f, 0x1.7596a2p-95f, 0x1.81a1c2p-10f, 0x1.e678dap-7f, 0x1.e17304p-39f, 0.0f,
     0x1.e58494p-41f, 0.0f, 0x1.702ac6p-29f, 0.0f, 0x1.911bcep-51f, 0.0f,
     0x1.c7e19cp-108f, 0.0f, 0x1.059a4ap-11f, 0x1.8864aep-70f, 0x1.255232p-100f,
     0x1.91da66p-23f, 0.0f, 0x1.dea146p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54c7d6p-115f, 0x1.a181p-67f, 0.0f, 0.0f, 0x1.66950cp-40f, 0.0f, 0.0f,
     0x1.208cd6p-86f, 0x1.1fe3bep-95f, 0.0f, 0x1.558064p-121f, 0.0f, 0x1.e3592ap-21f,
     0.0f, 0.0f, 0x1.73a5eap-7f, 0.0f, 0x1.7d87d8p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b71a8p-96f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.26ad02p-20f, 0x1.d3279p-15f, 0.0f,
     0x1.0f99b2p-80f, 0.0f, 0x1.977a2p-50f, 0.0f, 0.0f, 0x1.cc6938p-91f, 0.0f,
     0x1.79574ep-49f, 0x1.a1ed8p-118f, 0x1.f6ccap-14f, 0.0f, 0x1.0ea938p-90f, 0.0f,
     0x1.79e34ap-14f, 0x1.8a8ccap-94f, 0.0f, 0.0f, 0x1.4f05b6p-34f, 0x1.4661f6p-124f,
     0x1.084ba2p-86f, 0x1.8f2976p-60f, 0x1.f54a7ap-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e43d2p-25f, 0.0f, 0x1.94b3dep-78f, 0.0f, 0x1.d7b478p-125f, 0x1.0975f2p-6f,
     0.0f, 0.0f, 0x1.0cdcb4p-117f, 0.0f, 0x1.93462ep-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.658a82p-12f, 0x1.abdfcap-56f, 0x1.83488p-116f, 0x1.3070fap-16f, 0.0f, 0.0f,
     0x1.1bdd64p-81f, 0.0f, 0x1.0234dcp-70f, 0.0f, 0x1.a526ccp-107f, 0.0f, 0.0f,
     0x1.a90db4p-86f, 0.0f, 0x1.b823cap-70f, 0.0f, 0x1.21211cp-111f, 0x1.d893dep-37f,
     0.0f, 0.0f, 0.0f, 0x1.9c86c2p-42f, 0.0f, 0x1.87de88p-108f, 0x1.a7cfe2p-123f,
     0.0f, 0.0f, 0x1.2a0e1p-106f, 0.0f, 0x1.9873a8p-26f, 0x1.e2ade2p-120f, 0.0f,
     0x1.f90c44p-126f, 0x1.e93f6cp-33f, 0x1.45f2c6p-56f, 0.0f, 0.0f, 0x1.a082f4p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4060cp-95f, 0.0f, 0.0f, 0x1.240448p-49f,
     0x1.84b5f6p-65f, 0.0f, 0x1.19310cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ae1b6p-40f, 0.0f, 0x1.f83802p-7f, 0x1.ea4002p-109f, 0.0f, 0x1.f9906p-46f,
     0.0f, 0.0f, 0x1.90c628p-106f, 0.0f, 0.0f, 0.0f, 0x1.42da8cp-85f, 0.0f, 0.0f,
     0x1.cb747ap-19f, 0.0f, 0.0f, 0x1.913cbp-76f, 0x1.4e9b48p-112f, 0x1.5a87d6p-114f,
     0x1.0dd43ep-86f, 0x1.d0cadap-60f, 0x1.9d6e04p-92f, 0.0f, 0x1.176f56p-1f,
     0x1.191c66p-96f, 0.0f, 0x1.5f7d38p-85f, 0.0f, 0x1.b1788p-2f, 0.0f, 0.0f,
     0x1.af78d8p-122f, 0x1.ee8b72p-3f, 0.0f, 0.0f, 0x1.81885p-121f, 0.0f, 0.0f, 0.0f,
     0x1.a69e06p-65f, 0.0f, 0x1.b9d548p-31f, 0.0f, 0.0f, 0x1.38de96p-108f, 0.0f,
     0x1.406dccp-20f, 0x1.1b987p-44f, 0.0f, 0.0f, 0.0f, 0x1.93bd9ap-111f,
     0x1.24c26ap-112f, 0.0f, 0x1.37b11ep-71f, 0.0f, 0x1.92fa72p-66f, 0x1.4e3424p-19f,
     0x1.9ebbf2p-74f, 0x1.37e40ep-72f, 0x1.ea5e1ep-59f, 0x1.0f598p-80f,
     0x1.5ebf94p-61f, 0x1.437a7ap-45f, 0x1.79948ap-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6449a6p-20f, 0.0f, 0.0f, 0x1.13a05ap-44f, 0x1.929d38p-48f, 0x1.654c7ap-82f,
     0.0f, 0x1.de9eeep-3f, 0.0f, 0.0f, 0x1.6a9cep-56f, 0x1.9b1026p-10f, 0.0f,
     0x1.3c6852p-72f, 0.0f, 0x1.dc7452p-103f, 0.0f, 0.0f, 0.0f, 0x1.94ca54p-76f,
     0x1.797c9ep-20f, 0x1.69fa5p-25f, 0x1.4e7d58p-98f, 0.0f, 0x1.80a6e2p-58f, 0.0f,
     0x1.7e8c6cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e804a2p-21f, 0.0f, 0.0f,
     0x1.eca4f4p-101f, 0x1.8d312ep-17f, 0x1.3883cep-121f, 0x1.5c1716p-40f,
     0x1.269d2ap-32f, 0x1.13118p-104f, 0.0f, 0x1.76ec4ap-95f, 0x1.c7b1f2p-27f, 0.0f,
     0x1.125602p-121f, 0x1.8a10cp-103f, 0x1.a24616p-76f, 0.0f, 0.0f, 0x1.3818cp-41f,
     0x1.f50626p-117f, 0.0f, 0x1.9d9e02p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08bfdep-15f,
     0x1.6de3ap-115f, 0.0f, 0x1.8149dep-23f, 0x1.aecd12p-122f, 0.0f, 0x1.bb3f52p-120f,
     0x1.3662b6p-107f, 0.0f, 0x1.903aep-4f, 0.0f, 0.0f, 0x1.7dc1ccp-59f, 0.0f,
     0x1.4588e2p-12f, 0x1.bc42e4p-39f, 0.0f, 0.0f, 0x1.36de56p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dc1cbep-35f, 0x1.465f92p-4f, 0x1.f302b4p-65f, 0x1.59e314p-57f,
     0x1.393acp-79f, 0x1.d6e36ap-66f, 0x1.51673ap-61f, 0x1.67c2a2p-56f, 0.0f, 0.0f,
     0x1.93553ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7436eep-109f, 0.0f, 0x1.81ccdap-5f,
     0.0f, 0x1.d1fd78p-77f, 0.0f, 0x1.8e95d6p-40f, 0.0f, 0x1.33faa2p-88f,
     0x1.08e32p-72f, 0x1.25b28ap-83f, 0x1.a4a02cp-52f, 0x1.0d290cp-54f, 0.0f,
     0x1.da0f9ap-106f, 0x1.48466p-49f, 0x1.44a192p-122f, 0x1.7370cp-75f,
     0x1.a7375p-7f, 0.0f, 0x1.b3d992p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc75eap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd6284p-95f,
     0x1.1a6bfep-120f, 0x1.1a18b8p-68f, 0x1.9d4392p-2f, 0x1.af5294p-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.76aba4p-13f, 0x1.3bb6ccp-124f, 0x1.3ce108p-34f, 0.0f, 0.0f,
     0x1.e12b22p-74f, 0x1.0cf388p-30f, 0x1.4e166ap-84f, 0x1.a8b072p-28f, 0.0f, 0.0f,
     0.0f, 0x1.8022d2p-44f, 0.0f, 0x1.a4be38p-104f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3336eap-108f, 0x1.518cfp-110f, 0.0f, 0x1.aa139cp-20f,
     0x1.04dfap-31f, 0.0f, 0x1.89e1e2p-75f, 0.0f, 0.0f, 0x1.fa2a2ap-8f, 0.0f,
     0x1.36a7b4p-86f, 0x1.6e34aep-24f, 0.0f, 0x1.a28b0ap-54f, 0x1.0906e8p-13f, 0.0f,
     0x1.dd5524p-122f, 0.0f, 0x1.b60f2ap-107f, 0.0f, 0.0f, 0x1.e810fep-80f,
     0x1.2440c2p-22f, 0x1.842a18p-44f, 0x1.23af1ap-44f, 0x1.aab28p-115f,
     0x1.d7a27p-42f, 0x1.d12a08p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb412p-62f, 0x1.73f4f4p-9f, 0x1.f9817p-107f,
     0x1.090862p-64f, 0.0f, 0.0f, 0.0f, 0x1.990f74p-109f, 0x1.ba1384p-48f,
     0x1.9ea36cp-116f, 0x1.ba1558p-116f, 0x1.061f8cp-37f, 0x1.fb27e6p-88f, 0.0f,
     0x1.a109a2p-17f, 0.0f, 0x1.b02a34p-8f, 0x1.61cc68p-47f, 0.0f, 0.0f,
     0x1.bf1b2ep-60f, 0.0f, 0x1.3a07fcp-123f, 0.0f, 0x1.05b9c4p-58f, 0x1.d5a6f8p-79f,
     0.0f, 0.0f, 0x1.25da3ep-4f, 0.0f, 0.0f, 0x1.429bp-118f, 0.0f, 0x1.29dcc2p-37f,
     0x1.de42f8p-85f, 0.0f, 0.0f, 0.0f, 0x1.b72622p-17f, 0.0f, 0.0f, 0.0f,
     0x1.1c11fcp-104f, 0.0f, 0.0f, 0x1.3e5c4cp-24f, 0x1.6361cp-41f, 0.0f, 0.0f,
     0x1.745858p-52f, 0x1.50adcep-5f, 0.0f, 0.0f, 0.0f, 0x1.23fb98p-92f,
     0x1.272236p-11f, 0x1.57ca5ep-19f, 0x1.0dcfc2p-88f, 0x1.fabec2p-6f, 0.0f,
     0x1.2bd0a8p-109f, 0.0f, 0x1.ce97eap-107f, 0x1.65ac22p-58f, 0.0f, 0.0f,
     0x1.3665c4p-74f, 0.0f, 0x1.6bb32cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c2d48p-33f, 0.0f, 0x1.5b2274p-104f, 0.0f, 0.0f, 0x1.166cdp-48f,
     0x1.3bb77cp-56f, 0.0f, 0.0f, 0.0f, 0x1.7d809cp-83f, 0x1.2a2f38p-70f,
     0x1.30ac32p-59f, 0.0f, 0.0f, 0x1.ce1602p-104f, 0.0f, 0x1.fbe4b2p-89f, 0.0f, 0.0f,
     0x1.5049c2p-111f, 0x1.697f6cp-55f, 0x1.9a3076p-97f, 0x1.c08f9ap-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fb14c8p-93f, 0x1.2da42ap-95f, 0x1.8f1ea8p-64f, 0.0f, 0.0f,
     0x1.cf074cp-61f, 0.0f, 0x1.5e76bap-38f, 0.0f, 0.0f, 0.0f, 0x1.e165c2p-29f, 0.0f,
     0x1.18d482p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a5846p-46f, 0x1.c9c70ap-83f,
     0x1.f7f37p-120f, 0x1.6ba0fep-13f, 0x1.0702c6p-59f, 0x1.1cf954p-122f,
     0x1.7a88a2p-32f, 0x1.b60bcp-4f, 0.0f, 0x1.9dc744p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e24b64p-19f, 0x1.ee493cp-47f, 0.0f, 0.0f, 0x1.e3df3cp-43f, 0.0f, 0.0f,
     0x1.3c25ap-26f, 0x1.485c8p-12f, 0.0f, 0x1.e1b332p-62f, 0x1.2e7b06p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.08f448p-105f, 0.0f, 0x1.8f43dep-105f, 0.0f,
     0x1.5c7c78p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d019fap-58f, 0x1.814eacp-33f,
     0x1.6f7c08p-12f, 0.0f, 0.0f, 0.0f, 0x1.a6a484p-3f, 0x1.e027acp-4f,
     0x1.05a9d2p-104f, 0x1.34e7bcp-23f, 0.0f, 0x1.d44524p-118f, 0.0f, 0.0f,
     0x1.207744p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7abdf6p-46f, 0x1.685ae6p-123f, 0.0f,
     0x1.2b519p-40f, 0.0f, 0x1.e2dd2cp-65f, 0.0f, 0x1.2fc85ap-55f, 0x1.f069fp-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7a222p-18f, 0x1.627218p-103f, 0.0f, 0x1.8e43cep-81f, 0.0f, 0.0f,
     0x1.fb7dbep-126f, 0.0f, 0x1.7fb13ep-69f, 0x1.ffa4eap-38f, 0.0f, 0x1.5ee054p-10f,
     0.0f, 0.0f, 0.0f, 0x1.d5265ap-8f, 0x1.f2a926p-78f, 0x1.c295e4p-16f, 0.0f,
     0x1.df8582p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3810ccp-101f, 0.0f,
     0x1.140652p-41f, 0x1.7b590cp-112f, 0x1.45b1d4p-96f, 0x1.13dc7cp-10f,
     0x1.799d76p-59f, 0.0f, 0x1.80f956p-94f, 0x1.88683p-7f, 0x1.9fa0a6p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e250fp-68f, 0x1.6ad1dep-121f, 0.0f, 0.0f, 0x1.5e88b4p-52f,
     0.0f, 0.0f, 0.0f, 0x1.d9f232p-116f, 0x1.3cfc46p-18f, 0x1.dcc928p-123f,
     0x1.817126p-93f, 0x1.e7749cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.524f36p-101f,
     0x1.6a33cap-60f, 0.0f, 0.0f, 0x1.b8de46p-95f, 0.0f, 0.0f, 0x1.0bff2ap-124f, 0.0f,
     0.0f, 0x1.82c11p-85f, 0.0f, 0.0f, 0.0f, 0x1.4010fp-101f, 0x1p0f, 0x1.9e82fp-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2283fp-21f, 0x1.9c6a6ap-84f, 0x1.3b8edcp-38f,
     0x1.730b6ap-124f, 0x1.6080d6p-75f, 0x1.afc44ap-84f
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
            tmp1 = Sleef_floorf4_kvx(tmp0);
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
    printf("Sleef_floorf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_floorf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
