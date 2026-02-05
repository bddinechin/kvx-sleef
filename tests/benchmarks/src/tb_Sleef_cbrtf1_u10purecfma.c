/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf1_u10purecfma.c --function \
 *     Sleef_cbrtf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.002a36p-25f, 0x1.c687f2p-12f, 0x1.520f76p-64f, 0.0f, 0.0f, 0.0f,
     0x1.31fe6p-96f, 0.0f, 0x1.3964b6p-106f, 0x1.e7e52ap-49f, 0.0f, 0.0f,
     0x1.58ad8ap-104f, 0.0f, 0.0f, 0x1.3a9018p-2f, 0.0f, 0.0f, 0x1.66649p-3f,
     0x1.7e5edp-113f, 0.0f, 0x1.f8e402p-120f, 0.0f, 0x1.16481ap-55f, 0.0f,
     0x1.2c39d4p-29f, 0x1.f3cfe4p-82f, 0.0f, 0x1.4b4522p-35f, 0.0f, 0x1.f9d4e2p-11f,
     0.0f, 0.0f, 0x1.4fd7f8p-103f, 0x1.5576cap-4f, 0.0f, 0x1.928938p-13f,
     0x1.50c77ap-87f, 0x1.e87788p-112f, 0x1.cfb95cp-53f, 0.0f, 0.0f, 0.0f,
     0x1.85ec18p-1f, 0x1.a8d4f2p-66f, 0x1.c9c49cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.527d92p-67f, 0x1.3ecbb8p-68f, 0.0f, 0.0f, 0.0f,
     0x1.7b7e8p-111f, 0x1.372494p-107f, 0x1.200aa2p-45f, 0.0f, 0x1.0667aap-104f, 0.0f,
     0.0f, 0.0f, 0x1.b69b3p-25f, 0x1.e7764p-1f, 0x1.57547p-21f, 0x1.4c8e72p-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d882dp-60f, 0.0f, 0x1.974b34p-92f, 0x1.bfdbc4p-106f, 0.0f,
     0x1.144484p-123f, 0x1.403256p-41f, 0.0f, 0x1.d5ef1ep-42f, 0x1.5bf1b6p-107f, 0.0f,
     0.0f, 0x1.706094p-5f, 0x1.88d1f6p-56f, 0x1.c19aa8p-56f, 0x1.338e8ap-37f, 0.0f,
     0.0f, 0x1.770ap-101f, 0x1.4a53f6p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.20c25cp-87f, 0x1.176d2p-50f, 0.0f, 0x1.917622p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3b8432p-69f, 0x1.03c6f6p-9f, 0x1.519908p-123f,
     0x1.be2fdap-93f, 0x1.41d576p-78f, 0x1.0223acp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b1e76p-117f, 0.0f, 0x1.c1416p-78f, 0x1.896c8ep-99f, 0.0f, 0x1.eab692p-114f,
     0.0f, 0x1.dcda5ep-25f, 0x1.b194b4p-117f, 0.0f, 0x1.c2589p-67f, 0x1.4ff704p-123f,
     0x1.732812p-12f, 0x1.93b31p-124f, 0.0f, 0.0f, 0.0f, 0x1.3ecdf4p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.37b3dap-68f, 0.0f, 0x1.327f38p-64f, 0.0f, 0x1.dbb47ap-50f,
     0x1.45e882p-4f, 0.0f, 0.0f, 0.0f, 0x1.9a4d5ap-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08169ep-125f, 0x1.5ad37ap-38f, 0.0f, 0.0f, 0x1.462502p-4f, 0x1.2da66ep-107f,
     0.0f, 0x1.d183d2p-43f, 0x1.44a1bcp-18f, 0.0f, 0x1.1d0f9ep-64f, 0.0f,
     0x1.f5229p-65f, 0.0f, 0.0f, 0x1.268ac4p-113f, 0x1.fd34aap-123f, 0x1.1f4384p-77f,
     0.0f, 0.0f, 0x1.80fefep-104f, 0.0f, 0.0f, 0x1.45e7eep-93f, 0.0f, 0x1.7143d6p-87f,
     0.0f, 0.0f, 0.0f, 0x1.ef006cp-61f, 0x1.1bb6f2p-39f, 0.0f, 0x1.e12364p-38f,
     0x1.39bdc4p-42f, 0.0f, 0x1.485458p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f8ce4p-9f, 0x1.df7f4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.843164p-26f, 0.0f, 0x1.41445ap-119f, 0x1.2c75a2p-121f, 0.0f, 0.0f, 0.0f,
     0x1.2350b4p-42f, 0.0f, 0x1.1f8052p-5f, 0x1.54cf6cp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d7d4ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e856ap-54f, 0.0f,
     0x1.6c19fep-96f, 0x1.03a83cp-116f, 0.0f, 0x1.366c7ap-34f, 0.0f, 0x1.38472cp-65f,
     0x1.b6b37ep-94f, 0.0f, 0x1.4b1f3ap-25f, 0x1.31261p-22f, 0.0f, 0.0f, 0.0f,
     0x1.1207a4p-37f, 0.0f, 0x1.8fbc74p-119f, 0.0f, 0x1.874844p-37f, 0.0f,
     0x1.7ba652p-58f, 0x1.5c49acp-11f, 0.0f, 0.0f, 0.0f, 0x1.1bf8cap-41f, 0.0f, 0.0f,
     0.0f, 0x1.9f4b3ep-22f, 0.0f, 0x1.44963ap-74f, 0.0f, 0x1.6598acp-79f,
     0x1.f78f92p-63f, 0x1.905d44p-68f, 0x1.ff332cp-59f, 0.0f, 0.0f, 0x1.7de5d8p-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12c138p-21f, 0.0f, 0.0f, 0x1.00d6bep-4f,
     0x1p0f, 0x1.9a07f8p-40f, 0x1.3aacb4p-3f, 0.0f, 0x1.cad0bp-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e2eb4p-24f, 0.0f, 0x1.64fc48p-14f, 0x1.6d6874p-17f,
     0x1.ce2c08p-116f, 0x1.a95104p-16f, 0x1.c3e2f4p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94c736p-108f, 0.0f, 0x1.31775cp-100f, 0x1.16343p-97f,
     0x1.2547p-28f, 0.0f, 0.0f, 0x1.aaf5f8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.82160cp-9f, 0x1.1e505cp-26f, 0x1.e026e4p-29f, 0.0f,
     0x1.10940cp-109f, 0x1.7cddep-62f, 0x1.06e27ap-56f, 0.0f, 0.0f, 0x1.fc7bfap-6f,
     0.0f, 0x1.7fcd22p-38f, 0x1.cbe474p-103f, 0.0f, 0x1.b76ba8p-45f, 0.0f,
     0x1.ec391cp-28f, 0x1.da8fa2p-46f, 0x1.50b768p-104f, 0x1.73b7b2p-45f, 0.0f, 0.0f,
     0.0f, 0x1.26f062p-61f, 0x1.f9b89p-122f, 0.0f, 0x1.efe3a6p-68f, 0x1.5dd658p-16f,
     0.0f, 0x1.7b9758p-88f, 0.0f, 0.0f, 0x1.525b82p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc96f2p-28f, 0.0f, 0.0f, 0x1.8d082cp-79f, 0x1.83b83ap-63f, 0x1.65a422p-107f,
     0.0f, 0.0f, 0.0f, 0x1.60a2b4p-35f, 0x1.75416p-115f, 0.0f, 0.0f, 0x1.a7052ap-70f,
     0.0f, 0x1.541c32p-20f, 0x1.dbb5c4p-81f, 0x1.62adbcp-42f, 0.0f, 0x1.02d89p-91f,
     0x1.a26c18p-75f, 0x1.58b634p-25f, 0.0f, 0x1.5be826p-120f, 0.0f, 0.0f,
     0x1.af2296p-109f, 0x1.176814p-66f, 0x1.a90492p-48f, 0x1.4daad6p-46f, 0.0f,
     0x1.d3c9dep-12f, 0.0f, 0x1.5f084ap-77f, 0x1.0cb1dap-125f, 0.0f, 0x1.f8b5f6p-52f,
     0.0f, 0x1.4dcc14p-14f, 0x1.cf9b36p-94f, 0x1.54637p-1f, 0.0f, 0x1.937ecep-34f,
     0x1.20270cp-106f, 0x1.efb1ccp-6f, 0x1.5acfacp-14f, 0x1.21b572p-68f,
     0x1.0e40a6p-109f, 0x1.0e199cp-64f, 0.0f, 0x1.36c508p-87f, 0x1.91f5bep-88f, 0.0f,
     0.0f, 0x1.2808c8p-115f, 0x1.71717cp-126f, 0.0f, 0.0f, 0.0f, 0x1.71292ap-98f,
     0x1.6746b8p-48f, 0x1.73e036p-47f, 0.0f, 0x1.14a2b8p-76f, 0.0f, 0.0f,
     0x1.ce7bfap-10f, 0.0f, 0x1.17a4ap-2f, 0.0f, 0x1.218c82p-92f, 0.0f, 0.0f,
     0x1.ef76ap-106f, 0.0f, 0.0f, 0x1.e83b4ep-98f, 0x1.718f48p-90f, 0.0f,
     0x1.c1ec3cp-76f, 0x1.dc1a2cp-108f, 0.0f, 0x1.4b0484p-59f, 0x1.b8bdfp-54f,
     0x1.89f23cp-35f, 0x1.0fd57p-32f, 0x1.96a292p-102f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.30b3a2p-78f, 0.0f, 0x1.ccf6e8p-9f, 0x1.97e2dep-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8f2a66p-123f, 0.0f, 0x1.f03678p-73f, 0x1.70152cp-72f, 0.0f,
     0x1.9c7ec2p-5f, 0.0f, 0x1.eea708p-27f, 0x1.2916ap-56f, 0.0f, 0.0f,
     0x1.0165c6p-3f, 0.0f, 0x1.24a608p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.163288p-48f, 0x1.e9e10ap-75f, 0x1.eb4bap-62f, 0.0f, 0.0f, 0.0f,
     0x1.31a10cp-35f, 0.0f, 0.0f, 0.0f, 0x1.980912p-109f, 0x1.249a98p-4f,
     0x1.277534p-126f, 0.0f, 0.0f, 0.0f, 0x1.1a77bap-25f, 0.0f, 0x1.032c1cp-31f,
     0x1.3275e8p-39f, 0x1.694998p-34f, 0x1.7d46fep-11f, 0.0f, 0x1.c3033cp-9f,
     0x1.50abecp-58f, 0.0f, 0x1.307d26p-73f, 0.0f, 0x1.052ecap-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a9fd4ap-74f, 0.0f, 0x1.ca4652p-71f, 0.0f, 0x1.87d02ep-66f, 0.0f, 0.0f,
     0x1.10696cp-104f, 0.0f, 0x1.83450ep-122f, 0x1.239c9ap-58f, 0.0f, 0x1.ee28fep-27f,
     0.0f, 0x1.de1844p-22f, 0x1.2dc2b6p-41f, 0x1.0ab77ep-40f, 0.0f, 0x1.a65d6p-69f,
     0x1.060914p-106f, 0x1.e87e7cp-108f, 0x1.2ea8dcp-117f, 0x1.7dec14p-27f, 0.0f,
     0.0f, 0.0f, 0x1.1d0ef2p-98f, 0.0f, 0x1.36de0ep-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26f2d2p-7f, 0x1.3b1f96p-2f, 0x1.5a9618p-31f, 0.0f, 0.0f, 0x1.0697f8p-101f,
     0x1.df98b8p-5f, 0x1.3f90c4p-32f, 0x1.c9fb44p-36f, 0x1.a9efa4p-115f, 0.0f, 0.0f,
     0x1.306c38p-101f, 0x1.087f54p-64f, 0.0f, 0x1.c6c3dap-41f, 0x1.7c7edp-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9d0daep-78f, 0x1.fbf3cap-2f, 0x1.4fb0bp-98f, 0.0f,
     0x1.c8fbe6p-45f, 0x1.b0f5acp-124f, 0x1.c8dde4p-100f, 0.0f, 0.0f,
     0x1.ecfd48p-100f, 0.0f, 0.0f, 0x1.e4e458p-96f, 0x1.f281ecp-33f, 0x1.82e31p-97f,
     0x1.ecde4ep-53f, 0x1.710d26p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.832594p-52f,
     0.0f, 0.0f, 0x1.c515bap-62f, 0.0f, 0.0f, 0x1.2839acp-76f, 0.0f, 0.0f,
     0x1.6ffc8ep-8f, 0x1p0f, 0x1.11cf7ep-102f, 0x1.8444a6p-81f, 0.0f, 0.0f,
     0x1.e6f4bcp-119f, 0x1.096208p-108f, 0x1.9e2936p-29f, 0x1.cc74dp-102f,
     0x1.0f0d1p-113f, 0x1.2bfdb4p-11f, 0x1.4a498p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.564deap-30f, 0x1.ffd52ap-99f, 0.0f, 0x1.96955ep-3f, 0.0f, 0.0f,
     0x1.7d01fep-106f, 0x1.e00596p-113f, 0x1.643aep-78f, 0x1.73711cp-87f,
     0x1.c8f1c4p-29f, 0.0f, 0.0f, 0x1.5aca66p-114f, 0.0f, 0x1.fe4e88p-27f,
     0x1.ca31ap-34f, 0.0f, 0.0f, 0.0f, 0x1.88b42ep-63f, 0.0f, 0x1.f0ff0ap-32f, 0.0f,
     0x1.853eeep-55f, 0x1.cc102cp-75f, 0x1.8dc6ap-20f, 0.0f, 0.0f, 0x1.6018ap-4f,
     0x1.22c3a6p-122f, 0x1.bb631cp-97f, 0x1.179a4p-48f, 0x1.2c9c76p-53f, 0.0f, 0.0f,
     0x1.a24f1ep-36f, 0x1.51261ap-113f, 0.0f, 0x1.cb4382p-111f, 0x1.abaa12p-11f, 0.0f,
     0x1.9090b2p-75f, 0.0f, 0.0f, 0.0f, 0x1.d1644p-32f, 0x1.cd7cd4p-47f,
     0x1.074066p-18f, 0.0f, 0x1.f7d7ecp-104f, 0.0f, 0x1.5d61f6p-115f, 0.0f,
     0x1.44becap-18f, 0x1p0f, 0.0f, 0.0f, 0x1.c1c734p-22f, 0x1.3f132cp-98f,
     0x1.3c5adp-94f, 0.0f, 0x1.c77fcp-7f, 0x1.5ad2fep-60f, 0.0f, 0.0f,
     0x1.69b4f6p-73f, 0.0f, 0x1.0440a8p-10f, 0.0f, 0.0f, 0.0f, 0x1.2d8908p-59f, 0.0f,
     0x1.7f4f04p-126f, 0.0f, 0x1.e1245ep-10f, 0x1.5f1f4ep-27f, 0x1.e7fa34p-102f,
     0x1.67fe78p-3f, 0x1.73466p-31f, 0x1.490efcp-68f, 0.0f, 0x1.7bac14p-103f, 0.0f,
     0.0f, 0x1.7bc59ap-63f, 0x1.42eefap-40f, 0.0f, 0.0f, 0x1.f4d168p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.da431ap-16f, 0x1.ac9b9cp-54f, 0.0f, 0.0f, 0.0f, 0x1.33a784p-51f,
     0.0f, 0.0f, 0.0f, 0x1.5c41dap-117f, 0x1.ea4038p-70f, 0.0f, 0.0f, 0x1.2a6a6ep-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbd41p-84f, 0x1.9635b8p-1f, 0.0f, 0x1.b649ep-46f,
     0x1.5798aap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfdf52p-61f, 0x1.5a1d04p-39f,
     0.0f, 0.0f, 0x1.d5fb56p-62f, 0.0f, 0x1.c1dc56p-116f, 0x1.9dec04p-4f,
     0x1.b4aa02p-36f, 0x1.a7251cp-20f, 0.0f, 0x1.31e59ep-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.19f4c6p-72f, 0.0f, 0.0f, 0x1.7f6026p-70f, 0.0f, 0.0f,
     0x1.f1b244p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01de9ap-35f, 0.0f, 0x1.683db2p-20f, 0.0f, 0.0f, 0x1.fcbf5ap-2f,
     0x1.5b7c02p-27f, 0.0f, 0.0f, 0.0f, 0x1.b11ff6p-32f, 0x1.1db472p-65f, 0.0f, 0.0f,
     0x1.42bfbep-74f, 0.0f, 0.0f, 0.0f, 0x1.645f2ap-31f, 0x1.70af18p-101f,
     0x1.80b73p-76f, 0.0f, 0x1.acb44cp-125f, 0.0f, 0x1.26b9ecp-32f, 0.0f,
     0x1.4b9a66p-123f, 0x1.d25cccp-72f, 0.0f, 0x1.b5c49ap-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e4eap-63f, 0.0f, 0x1.c8582ep-55f, 0x1.2e35fcp-124f, 0.0f,
     0x1.bd56bap-100f, 0x1.d3f146p-55f, 0.0f, 0.0f, 0x1.ecf2b8p-51f, 0x1.d2af78p-55f,
     0x1.bb570ep-119f, 0x1.46266ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd4e52p-52f,
     0x1.798904p-60f, 0x1.fc203ap-48f, 0.0f, 0x1.04578cp-64f, 0x1.358dp-115f,
     0x1.b0484p-6f, 0x1.5189f2p-77f, 0.0f, 0x1.66593ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.83251ep-86f, 0.0f, 0x1.c71b2cp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.408d8cp-47f, 0.0f, 0x1.94f4ccp-16f, 0.0f, 0.0f, 0x1.46f2e8p-109f,
     0x1.346384p-123f, 0.0f, 0x1.535c66p-41f, 0.0f, 0x1.2229aep-47f, 0x1.70db9ep-48f,
     0x1.a120a6p-54f, 0.0f, 0x1.5e063ep-35f, 0.0f, 0.0f, 0.0f, 0x1.7e5dep-17f,
     0x1.43e5d8p-2f, 0.0f, 0x1.22cf54p-77f, 0x1.323b2ap-102f, 0x1.8b6e06p-120f, 0.0f,
     0.0f, 0x1.ef0be6p-41f, 0x1.aad012p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e87bacp-121f,
     0.0f, 0.0f, 0x1.1e5ed6p-3f, 0x1.b92232p-65f, 0x1.2e7796p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e49a5ap-109f, 0x1.e34fa8p-15f, 0x1.3fad94p-40f, 0.0f, 0.0f,
     0x1.618618p-41f, 0.0f, 0x1.d5dc9ap-32f, 0.0f, 0.0f, 0.0f, 0x1.813712p-72f,
     0x1.61d04ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.610f9ep-109f, 0.0f,
     0x1.aa755ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfe438p-79f, 0.0f, 0.0f, 0.0f,
     0x1.f54c92p-109f, 0x1.9f859ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0456p-85f, 0.0f,
     0.0f, 0x1.d5e70cp-7f, 0x1.c2f116p-24f, 0x1.1b65f6p-73f, 0x1.96da5cp-72f, 0.0f,
     0.0f, 0x1.5c31b4p-122f, 0.0f, 0x1.06174cp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.faf374p-59f, 0.0f, 0.0f, 0.0f, 0x1.2ac71ap-89f, 0x1.4cff32p-34f,
     0x1.2f109cp-50f, 0.0f, 0.0f, 0.0f, 0x1.04079p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac7cdp-42f, 0x1.508488p-32f, 0x1.82d5bp-42f, 0.0f, 0x1.23abf8p-9f,
     0x1.27ff2ap-25f, 0.0f, 0x1.650646p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94022ap-117f, 0.0f, 0x1.b2fd2p-41f, 0x1.35c558p-28f, 0x1.a73e3cp-63f, 0.0f,
     0x1.bc648p-69f, 0.0f, 0x1.7a7f0cp-123f, 0x1.15c326p-75f, 0.0f, 0x1.8116e8p-53f,
     0x1.08a17p-52f, 0.0f, 0x1.0b2292p-98f, 0x1.c2306cp-102f, 0x1.818fd2p-97f, 0.0f,
     0.0f, 0.0f, 0x1.4a06bp-68f, 0.0f, 0.0f, 0x1.b6ec5ap-117f, 0x1.aa3724p-2f,
     0x1.f0ff64p-37f, 0x1.b3b492p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.646aecp-16f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_cbrtf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_cbrtf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtf1_u10purecfma bench acc %a\n", global_bench_acc);
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
