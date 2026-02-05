/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsf1_purecfma.c --function Sleef_fabsf1_purecfma \
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
     0x1.4bb70ep-69f, 0x1.404b6ep-33f, 0.0f, 0x1.9c6daap-70f, 0x1.7b9cc2p-66f, 0.0f,
     0.0f, 0.0f, 0x1.d52eb4p-66f, 0x1.119af4p-123f, 0.0f, 0x1.674024p-11f, 0.0f, 0.0f,
     0x1.b8c5c4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0aae6p-11f, 0.0f, 0.0f,
     0x1.a40d94p-79f, 0.0f, 0.0f, 0x1.584ff4p-79f, 0.0f, 0.0f, 0x1.05d70ap-33f,
     0x1.6eb524p-110f, 0.0f, 0x1.92f4f8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42454cp-2f, 0x1.6e965p-101f, 0.0f, 0x1.a65e16p-85f, 0.0f, 0x1.a96736p-119f,
     0x1.e87fa6p-107f, 0.0f, 0x1.14198ap-106f, 0.0f, 0x1.ae1bd8p-99f,
     0x1.5c0f06p-103f, 0.0f, 0.0f, 0x1.4d070ap-110f, 0x1.9a9d3ap-107f,
     0x1.fb5ce2p-11f, 0.0f, 0.0f, 0x1.70fdbp-55f, 0x1.314208p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.164af8p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8b3fcp-106f,
     0x1.197842p-50f, 0.0f, 0.0f, 0.0f, 0x1.ede9cep-90f, 0.0f, 0x1.27163ep-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cd9506p-2f, 0x1.9761a2p-89f, 0x1.81343p-5f, 0.0f, 0.0f,
     0x1.c324aap-54f, 0.0f, 0x1.a9e56ep-11f, 0.0f, 0x1.958342p-116f, 0.0f,
     0x1.5fadfap-64f, 0.0f, 0x1.b4f3a4p-126f, 0x1.e45038p-6f, 0.0f, 0x1.3a1e38p-104f,
     0.0f, 0.0f, 0x1.69b6fcp-83f, 0x1.fd580cp-56f, 0.0f, 0x1.3344b8p-93f,
     0x1.0d49bep-117f, 0.0f, 0x1.2802b6p-24f, 0.0f, 0x1.5e003ap-31f, 0.0f, 0.0f, 0.0f,
     0x1.afe5d8p-45f, 0.0f, 0x1.168712p-105f, 0x1.df8f8p-21f, 0x1.bb5186p-23f,
     0x1.9326f2p-104f, 0.0f, 0x1.29197ep-90f, 0x1.1b7b12p-110f, 0.0f, 0x1.ae955ep-10f,
     0.0f, 0.0f, 0.0f, 0x1.a3c104p-53f, 0.0f, 0x1.ed698p-57f, 0x1.23b9d2p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee032ep-99f, 0.0f, 0.0f, 0.0f,
     0x1.401adp-116f, 0x1.cc43aap-29f, 0.0f, 0.0f, 0x1.0d838ap-8f, 0.0f,
     0x1.c7b41p-38f, 0.0f, 0x1.132abcp-76f, 0x1.c0eedap-85f, 0x1.298f3ap-87f, 0.0f,
     0x1.396082p-81f, 0x1.2cd21ap-47f, 0x1.0336cp-74f, 0x1.c05bd4p-125f,
     0x1.c028bap-8f, 0.0f, 0x1.2b22cp-20f, 0x1.c226f4p-73f, 0.0f, 0x1.85302cp-102f,
     0x1.a2a85cp-6f, 0x1.e4cbfcp-120f, 0x1.a13ed4p-39f, 0.0f, 0x1.df9998p-58f,
     0x1.8ce7cap-15f, 0.0f, 0x1.3e4182p-65f, 0.0f, 0x1.bc535p-59f, 0.0f, 0.0f, 0.0f,
     0x1.203928p-21f, 0x1.b6a07cp-102f, 0.0f, 0x1.2e4afcp-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b778dep-42f, 0.0f, 0.0f, 0x1.116d3cp-53f, 0x1.a04d28p-100f,
     0x1.c0f272p-112f, 0.0f, 0x1.0849d6p-76f, 0.0f, 0x1.54fdacp-113f, 0x1.007874p-37f,
     0x1.d1958cp-56f, 0.0f, 0x1.06435p-55f, 0.0f, 0x1.4263d4p-68f, 0.0f, 0.0f,
     0x1.0f2966p-66f, 0.0f, 0x1.ffdec4p-1f, 0x1.b932c6p-31f, 0x1.86b3cp-9f,
     0x1.0bc11cp-25f, 0x1.e7b8dp-78f, 0x1.42104ap-23f, 0.0f, 0.0f, 0x1.3e1716p-4f,
     0x1.773ea2p-57f, 0.0f, 0x1.a57f42p-35f, 0.0f, 0.0f, 0x1.03b76p-28f,
     0x1.40e4bep-64f, 0.0f, 0.0f, 0x1.37b0e8p-23f, 0x1.f83a54p-27f, 0.0f,
     0x1.d6735p-83f, 0.0f, 0.0f, 0.0f, 0x1.07414ap-42f, 0x1.0602bp-39f,
     0x1.06856p-77f, 0.0f, 0.0f, 0.0f, 0x1.107772p-78f, 0.0f, 0x1.f6119cp-48f, 0.0f,
     0x1.9d15dcp-30f, 0.0f, 0x1.64e354p-8f, 0.0f, 0.0f, 0x1.911f9p-35f, 0.0f,
     0x1.f44b6cp-94f, 0.0f, 0x1.abb1fep-38f, 0.0f, 0x1.c89fep-26f, 0x1.43b87p-49f,
     0x1.423be8p-3f, 0.0f, 0.0f, 0x1.1e5cf4p-107f, 0x1.c7c82ap-114f, 0.0f,
     0x1.022bc6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12509ap-79f, 0.0f,
     0x1.c358c6p-44f, 0.0f, 0.0f, 0x1.8de61ap-57f, 0x1.6e07c4p-109f, 0x1.cd2a6ap-95f,
     0.0f, 0x1.5597fcp-113f, 0.0f, 0x1.6a62c6p-126f, 0.0f, 0.0f, 0x1.1bd378p-117f,
     0x1.3b462ap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41839ep-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4630e4p-31f, 0x1.90fa5cp-47f, 0x1.ab4a9ap-33f, 0.0f, 0x1p0f,
     0x1.4c9028p-4f, 0x1.347238p-47f, 0.0f, 0x1.2701f6p-23f, 0x1.c2ba5ep-79f,
     0x1.d34214p-89f, 0.0f, 0x1.f9e2aep-20f, 0x1.706d8p-75f, 0x1.e5cebp-67f,
     0x1.1e6962p-64f, 0.0f, 0x1.6e9d88p-83f, 0.0f, 0x1.20ea66p-109f, 0.0f, 0.0f,
     0x1.fbd212p-71f, 0.0f, 0x1.449e2ap-102f, 0.0f, 0x1.7eda5ap-100f, 0x1.6cfb18p-62f,
     0x1.aaebdep-31f, 0.0f, 0.0f, 0.0f, 0x1.20141ep-100f, 0x1.40874cp-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4e6a2p-119f, 0.0f, 0.0f, 0x1.b3f0aap-110f, 0.0f, 0.0f,
     0x1.e4337ep-25f, 0.0f, 0.0f, 0x1.56bd44p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1723b6p-125f, 0.0f, 0x1.f669a2p-117f, 0x1.a2ba2cp-48f, 0x1.06bed2p-44f, 0.0f,
     0.0f, 0x1.93f4ecp-96f, 0x1.3dbbap-22f, 0.0f, 0x1.c384a8p-63f, 0.0f, 0.0f,
     0x1.48b558p-42f, 0x1.d161bcp-90f, 0x1.9f78fcp-5f, 0x1.ad0c86p-55f, 0.0f, 0.0f,
     0x1.892fdep-64f, 0x1.700258p-105f, 0x1.1426b4p-95f, 0x1.0e5f7p-48f,
     0x1.ec4dcep-17f, 0.0f, 0.0f, 0x1.0ef07ep-123f, 0x1.df10d8p-29f, 0x1.210104p-114f,
     0.0f, 0.0f, 0x1.239392p-25f, 0x1.9befbap-125f, 0.0f, 0x1.4f2e1ap-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5eaafcp-59f, 0x1.4995ecp-55f, 0.0f, 0x1.2e1d5p-28f,
     0x1.0db3bep-42f, 0.0f, 0x1.351782p-11f, 0x1.86edd8p-31f, 0x1.d2a96cp-122f, 0.0f,
     0x1.f091aap-59f, 0.0f, 0.0f, 0x1.7273ap-53f, 0x1.ebf854p-22f, 0x1.3060dep-27f,
     0.0f, 0x1.36cc14p-123f, 0.0f, 0x1.01aa2ep-92f, 0x1.393d12p-94f, 0x1.77f6eep-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3ee66p-125f, 0x1.c842dcp-11f, 0.0f,
     0x1.b0a3f2p-27f, 0x1.08942ep-11f, 0.0f, 0.0f, 0x1.6812dap-88f, 0x1.ccc3e4p-105f,
     0x1.9f672p-18f, 0.0f, 0x1.ee3d3p-73f, 0x1.b25b5ep-78f, 0.0f, 0.0f,
     0x1.5fca3ep-109f, 0x1.c81958p-52f, 0x1.8d01c6p-29f, 0x1.b5fb1ap-123f, 0.0f,
     0x1.5a4p-57f, 0x1.f90c1p-41f, 0.0f, 0x1.276808p-123f, 0.0f, 0x1.bfaf86p-105f,
     0x1.64c548p-37f, 0x1.d36e26p-95f, 0x1.8d70cp-45f, 0x1.5456f2p-89f,
     0x1.09047p-57f, 0.0f, 0x1.b62f6ep-80f, 0.0f, 0x1.17ca5ap-31f, 0.0f, 0.0f,
     0x1.cd8994p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5505a8p-65f, 0.0f,
     0.0f, 0x1.13f3f4p-78f, 0x1.f6245ep-126f, 0x1.1050eep-86f, 0x1.20a0bp-101f,
     0x1.414346p-20f, 0.0f, 0x1.769acap-32f, 0.0f, 0x1.4d2d0ep-40f, 0x1.ca7bbap-16f,
     0.0f, 0x1.24fc24p-32f, 0.0f, 0.0f, 0x1.d380bap-73f, 0x1.e9617ap-39f,
     0x1.8e2bfep-31f, 0x1.546624p-126f, 0x1.88695ap-77f, 0x1.c53b88p-10f,
     0x1.79e66cp-97f, 0.0f, 0.0f, 0.0f, 0x1.245046p-25f, 0x1.363a0ap-41f,
     0x1.701726p-35f, 0x1.4279f2p-74f, 0.0f, 0.0f, 0.0f, 0x1.09a6fcp-1f, 0.0f, 0.0f,
     0x1.20a198p-31f, 0x1.acec1ep-6f, 0.0f, 0.0f, 0x1.74bdaap-62f, 0.0f,
     0x1.691962p-20f, 0.0f, 0.0f, 0x1.2df4fap-62f, 0.0f, 0.0f, 0.0f, 0x1.e8e86p-31f,
     0.0f, 0.0f, 0x1.1ef052p-123f, 0x1.6107aep-16f, 0x1.f9f008p-11f, 0x1.083218p-22f,
     0x1.3c9feap-52f, 0.0f, 0x1.f401e4p-26f, 0x1.a7918p-109f, 0x1.864eb6p-14f, 0.0f,
     0x1.4aa40ep-16f, 0.0f, 0x1.a3d344p-66f, 0.0f, 0.0f, 0x1.930b66p-106f,
     0x1.e2ec78p-34f, 0.0f, 0.0f, 0.0f, 0x1.4e0196p-91f, 0.0f, 0x1.70d076p-52f,
     0x1.9ce93ap-65f, 0x1.ad6b52p-99f, 0x1.59486ap-92f, 0x1.781186p-35f, 0.0f,
     0x1.3676c2p-20f, 0x1.b747d4p-77f, 0x1.3a4decp-62f, 0x1.08707p-86f,
     0x1.3b817cp-101f, 0x1.ff71eep-119f, 0.0f, 0.0f, 0x1.a2ba7ep-17f, 0x1.bb0b9p-93f,
     0x1.ae5dfp-73f, 0.0f, 0.0f, 0x1.057cacp-55f, 0x1.bd09aep-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9d422ep-75f, 0x1.8056b2p-45f, 0.0f, 0x1.c53b8ap-55f, 0x1.41c57ap-62f,
     0x1.4407dcp-46f, 0.0f, 0.0f, 0x1.7b615p-125f, 0x1.7e1742p-44f, 0x1.f339a6p-4f,
     0x1.0b2624p-25f, 0.0f, 0.0f, 0x1.639ce6p-13f, 0x1.c66f6ep-1f, 0.0f,
     0x1.05a082p-73f, 0.0f, 0x1.9f6274p-117f, 0x1.fcad68p-83f, 0x1.fa823p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4da16ep-43f, 0x1.b71292p-21f, 0x1.d2d1aap-115f, 0.0f,
     0x1.c6ecb2p-42f, 0x1.a68a0ap-2f, 0.0f, 0.0f, 0x1.ffaa66p-44f, 0x1.9fe71p-53f,
     0x1.6f2414p-112f, 0x1.a35db4p-63f, 0x1.2077dp-41f, 0x1.c662bep-38f,
     0x1.3dabc6p-43f, 0.0f, 0.0f, 0x1.76c49ep-42f, 0x1p0f, 0.0f, 0x1.5ba798p-49f,
     0x1.e56d98p-88f, 0.0f, 0.0f, 0.0f, 0x1.90bae4p-30f, 0.0f, 0.0f, 0x1.4bc482p-82f,
     0x1.dec7d4p-42f, 0x1.a0ae62p-51f, 0.0f, 0x1.fc10e6p-4f, 0x1.d30964p-52f,
     0x1.19ca82p-96f, 0.0f, 0x1.74d138p-79f, 0.0f, 0.0f, 0x1.468068p-88f, 0.0f,
     0x1.f0fbd8p-56f, 0.0f, 0.0f, 0x1.d37e1ep-98f, 0x1.37b82p-96f, 0.0f, 0.0f,
     0x1.2f2ff4p-100f, 0x1.94ad58p-44f, 0x1.cfd35ep-35f, 0.0f, 0x1.a9f8d2p-77f, 0.0f,
     0x1.f12646p-62f, 0x1.56b3ccp-62f, 0x1.f72c44p-19f, 0x1.b25636p-16f,
     0x1.bdbf12p-118f, 0x1.70c592p-34f, 0.0f, 0x1.f5589p-125f, 0x1.4cb998p-56f,
     0x1.420ep-90f, 0x1.7b45bp-89f, 0x1.9e54ccp-125f, 0.0f, 0x1.d458bep-110f,
     0x1.540f7p-115f, 0x1.ff067p-19f, 0.0f, 0x1.86636ep-81f, 0.0f, 0.0f,
     0x1.d1eeeap-90f, 0.0f, 0x1.fd24cap-45f, 0x1.1820cep-61f, 0.0f, 0x1.e572ep-126f,
     0.0f, 0.0f, 0x1.04c77ep-43f, 0.0f, 0.0f, 0x1.ec32bap-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86f39ep-11f, 0.0f, 0x1.46c798p-12f, 0x1.a6729ap-8f,
     0x1.e58844p-7f, 0x1.64ba6p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5492ep-54f,
     0x1.611452p-103f, 0.0f, 0x1.d9dc7ep-39f, 0x1.df2ccp-17f, 0.0f, 0.0f, 0.0f,
     0x1.b3c6ccp-126f, 0x1.b84d9cp-13f, 0x1.3a5358p-56f, 0x1.58bb18p-102f, 0.0f,
     0x1.7430eap-63f, 0.0f, 0x1.a47604p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16cd34p-94f, 0x1.461f64p-99f, 0x1.de9ec6p-99f, 0.0f, 0x1.acc90ap-124f,
     0x1.493afp-79f, 0.0f, 0x1.9b09fep-126f, 0x1.72434ap-64f, 0x1.ab771ap-109f,
     0x1.524548p-38f, 0.0f, 0x1.4ab296p-85f, 0.0f, 0x1.b0191ep-81f, 0.0f,
     0x1.c8bd1ap-78f, 0.0f, 0x1.0e6314p-68f, 0.0f, 0.0f, 0x1.c24284p-7f, 0.0f, 0.0f,
     0.0f, 0x1.a3fb76p-48f, 0x1.2b3354p-111f, 0x1.3906eep-73f, 0x1.60a1c4p-2f,
     0x1.51a27ep-5f, 0x1.10416p-5f, 0x1.2fadp-73f, 0.0f, 0x1.b1562ap-65f, 0.0f,
     0x1.c362a2p-7f, 0x1.b6edp-2f, 0x1.3d40f2p-37f, 0.0f, 0x1.63b0c4p-72f,
     0x1.909b68p-85f, 0x1.3a24c8p-58f, 0.0f, 0x1.6aab02p-56f, 0.0f, 0.0f,
     0x1.3639ecp-106f, 0.0f, 0.0f, 0.0f, 0x1.a92606p-38f, 0.0f, 0x1.ac34aap-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8f6958p-77f, 0.0f, 0.0f, 0x1.951984p-21f, 0x1.adfb5p-16f,
     0.0f, 0.0f, 0x1.3f146p-97f, 0x1.b4c24p-17f, 0.0f, 0x1.acca9ap-76f,
     0x1.aff582p-64f, 0.0f, 0.0f, 0x1.8da648p-52f, 0x1.fae302p-118f, 0x1.e7485ap-101f,
     0.0f, 0.0f, 0x1.00f402p-46f, 0.0f, 0.0f, 0x1.9f3722p-112f, 0x1.6ac4ccp-35f,
     0x1.c5869ap-62f, 0x1.d21642p-12f, 0x1.951dbp-29f, 0x1.e597ap-83f, 0x1p0f, 0.0f,
     0.0f, 0x1.54921p-8f, 0x1.f6dcb4p-80f, 0.0f, 0.0f, 0.0f, 0x1.157a12p-51f, 0.0f,
     0.0f, 0x1.e606c6p-88f, 0x1.80d6aep-109f, 0.0f, 0.0f, 0x1.1f84c2p-95f, 0.0f,
     0x1.ffedap-6f, 0.0f, 0.0f, 0.0f, 0x1.a39d4p-123f, 0.0f, 0.0f, 0x1.b419ep-95f,
     0.0f, 0x1.511a3cp-93f, 0x1.3ca6f6p-35f, 0x1.471362p-81f, 0.0f, 0x1.6b7f9cp-33f,
     0.0f, 0x1.4ca282p-94f, 0x1.6da03ep-110f, 0.0f, 0x1.1c6f4ap-87f, 0.0f,
     0x1.fbdf36p-56f, 0.0f, 0x1.9ad834p-80f, 0.0f, 0x1.aa06b2p-38f, 0.0f,
     0x1.41c404p-25f, 0.0f, 0.0f, 0x1.eda2d4p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d1262p-126f, 0x1.05ecacp-97f, 0.0f, 0.0f, 0.0f, 0x1.eda928p-37f,
     0x1.bb549p-84f, 0x1.546272p-71f, 0x1.09c9b6p-14f, 0.0f, 0x1.f81462p-33f,
     0x1.30b74ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c341ep-1f, 0x1.e70cf2p-21f, 0.0f,
     0x1.561dfcp-66f, 0x1.a62efcp-105f, 0x1.148534p-1f, 0x1.453326p-114f,
     0x1.877a98p-19f, 0x1.115c98p-78f, 0.0f, 0x1.2cecdap-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fecd2cp-78f, 0x1.b731dp-79f, 0x1p0f, 0x1.838e4ep-99f, 0x1.4aed4cp-10f,
     0x1.03bd3p-45f, 0.0f, 0.0f, 0x1.d659b8p-14f, 0x1.b3c1e6p-82f, 0x1.5029f8p-86f,
     0.0f, 0x1.4b937p-109f, 0.0f, 0x1.1fe682p-2f, 0x1.882dccp-96f, 0.0f, 0.0f,
     0x1.b17b92p-44f, 0.0f, 0.0f, 0x1.4d0386p-72f, 0.0f, 0.0f, 0.0f, 0x1.727882p-57f,
     0x1.238dbap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.976a2ep-42f, 0.0f, 0x1.6090e8p-77f,
     0.0f, 0x1.2ac58cp-33f, 0.0f, 0x1.7b8806p-67f, 0.0f, 0.0f, 0.0f, 0x1.3ff79ep-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1e75ap-20f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df93fep-30f, 0x1.6f02e2p-6f, 0x1.e3c44cp-30f, 0x1.97e36p-59f, 0x1.dd9c1p-5f,
     0x1.4af16p-6f, 0x1.5b0534p-122f, 0.0f, 0.0f, 0.0f, 0x1.dc5d96p-59f, 0.0f,
     0x1.0a1a94p-40f, 0.0f, 0.0f, 0x1.1aa66ap-36f, 0.0f, 0.0f, 0.0f, 0x1.42cb82p-72f,
     0.0f, 0.0f, 0x1.65ffb6p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44def6p-79f,
     0.0f, 0.0f, 0x1.09d55ap-42f, 0.0f, 0.0f, 0.0f, 0x1.26ef58p-66f, 0.0f, 0.0f, 0.0f,
     0x1.c3bc54p-30f, 0.0f, 0x1.a4321ap-117f, 0.0f, 0x1.35e6c2p-49f, 0.0f, 0.0f,
     0x1.e99e8p-51f, 0x1p0f, 0.0f, 0x1.7e3b9ap-57f, 0x1.41f3f6p-108f, 0.0f,
     0x1.8b9f56p-64f, 0x1.0f40ccp-79f, 0.0f, 0x1.528326p-98f, 0x1.48e65p-5f,
     0x1.c594a2p-49f, 0.0f, 0x1p0f, 0x1.839d5ep-120f, 0.0f, 0.0f, 0x1.796438p-45f,
     0x1.e58752p-123f, 0.0f, 0x1.1ab9fep-34f, 0x1.00b22ep-63f, 0x1.c869fap-37f, 0.0f,
     0x1.c09822p-49f
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
            tmp1 = Sleef_fabsf1_purecfma(tmp0);
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
    printf("Sleef_fabsf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fabsf1_purecfma bench acc %a\n", global_bench_acc);
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
