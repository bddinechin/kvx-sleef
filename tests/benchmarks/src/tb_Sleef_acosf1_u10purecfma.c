/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf1_u10purecfma.c --function \
 *     Sleef_acosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.1ffba6p-123f, 0x1.8c7fe6p-82f, 0x1.7c06cap-69f, 0x1.9477f4p-75f,
     0x1.2d9ed8p-73f, 0.0f, 0x1.03abe4p-4f, 0.0f, 0.0f, 0x1.3ade36p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d51f72p-21f, 0x1.5ba542p-44f, 0.0f, 0x1.04aadep-94f,
     0x1.c6b6fap-37f, 0.0f, 0.0f, 0x1.5385dcp-83f, 0.0f, 0.0f, 0x1.2d2926p-50f, 0.0f,
     0.0f, 0x1.4117e6p-96f, 0x1.7e3f3ep-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7140c6p-111f, 0x1.dc5ce4p-102f, 0x1.8d729p-124f, 0x1.38fe7ep-13f,
     0x1.8bc86ep-108f, 0x1.66352cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.271016p-110f, 0x1.80def4p-125f, 0.0f, 0x1.e64e3p-51f, 0.0f, 0x1.20feecp-107f,
     0.0f, 0.0f, 0.0f, 0x1.34291ep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e788f8p-5f,
     0.0f, 0.0f, 0.0f, 0x1.6759dcp-47f, 0x1.7d2648p-82f, 0x1.683e0ep-69f,
     0x1.0ccfdap-59f, 0.0f, 0x1.3e36ccp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49e262p-105f, 0x1.13ececp-111f, 0x1.35970ap-96f, 0x1.a297b2p-20f, 0.0f,
     0x1.994676p-107f, 0x1.d6481p-56f, 0x1.5d22acp-70f, 0.0f, 0x1.99f8ecp-123f,
     0x1.ece1fcp-107f, 0x1.4fe56ap-69f, 0.0f, 0.0f, 0x1.7eec9ap-30f, 0.0f,
     0x1.1a694ap-10f, 0x1.68efe4p-91f, 0x1.855352p-99f, 0.0f, 0.0f, 0x1.b9b92ap-87f,
     0x1.2cff78p-92f, 0x1.87e63p-3f, 0.0f, 0.0f, 0.0f, 0x1.a5c2c2p-17f,
     0x1.837f9ep-45f, 0x1.9e2df8p-56f, 0.0f, 0x1.f993d6p-101f, 0.0f, 0x1.ace9eap-51f,
     0x1.17ed6ap-20f, 0x1.a15104p-82f, 0.0f, 0.0f, 0x1.45066p-62f, 0.0f,
     0x1.154ec2p-29f, 0.0f, 0x1.a307fp-34f, 0x1.80cb9p-111f, 0.0f, 0.0f,
     0x1.001756p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef5cd2p-45f, 0x1.ec7cfap-75f, 0.0f,
     0x1.87e43cp-91f, 0.0f, 0.0f, 0.0f, 0x1.b87f08p-68f, 0.0f, 0x1.a753c6p-57f,
     0x1.ac6d7ap-76f, 0.0f, 0.0f, 0x1.c2dda2p-32f, 0.0f, 0.0f, 0x1.24e024p-85f, 0.0f,
     0x1.e87996p-22f, 0x1.fdd52ep-30f, 0.0f, 0x1.8ced8ep-88f, 0.0f, 0.0f, 0.0f,
     0x1.fe5bd4p-14f, 0.0f, 0.0f, 0x1.ec6aeap-88f, 0.0f, 0x1.7a97f8p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c4348cp-120f, 0x1.5eca6ep-32f, 0.0f, 0.0f, 0x1p0f,
     0x1.75a7f6p-90f, 0.0f, 0.0f, 0.0f, 0x1.51491ap-94f, 0x1.fa2868p-125f,
     0x1.2865a4p-11f, 0x1.4a6f7cp-59f, 0x1.3d59fap-51f, 0x1.866da6p-122f,
     0x1.fb8dbp-71f, 0.0f, 0x1.27a3e4p-50f, 0x1.ad1b12p-37f, 0x1.5c49c2p-26f,
     0x1.5002ap-22f, 0x1.3d89cap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a94d48p-95f, 0x1.04adfep-73f, 0.0f, 0.0f, 0x1.f33db8p-17f, 0.0f, 0.0f, 0.0f,
     0x1.e3c182p-25f, 0x1.9fc44p-23f, 0x1.f4d3b2p-12f, 0x1.44b0a2p-30f, 0.0f,
     0x1.442bap-28f, 0x1.f3f372p-109f, 0x1.ad7b1p-55f, 0.0f, 0.0f, 0.0f,
     0x1.070f0ap-113f, 0.0f, 0x1.66387cp-83f, 0x1.c50d92p-109f, 0.0f, 0.0f,
     0x1.541596p-97f, 0.0f, 0x1.0aa08cp-19f, 0x1.572436p-124f, 0.0f, 0x1.8b9328p-90f,
     0x1.d2d0fap-73f, 0x1.d41426p-49f, 0.0f, 0x1.efaad8p-111f, 0.0f, 0.0f,
     0x1.ab02aep-26f, 0x1.ce415cp-26f, 0.0f, 0x1.2037d8p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.58b8aep-98f, 0.0f, 0.0f, 0x1.efb7e6p-113f, 0x1.77bfd8p-57f,
     0x1.11328p-3f, 0x1.2893fp-12f, 0x1.e81204p-116f, 0x1.42187ep-96f, 0.0f,
     0x1.ca48cep-18f, 0.0f, 0.0f, 0x1.a5430ep-36f, 0x1.4af928p-11f, 0.0f,
     0x1.c6fe84p-57f, 0x1.57f97ep-61f, 0.0f, 0x1.f2ff4p-35f, 0x1.8cd6f2p-118f,
     0x1.1b196ep-114f, 0.0f, 0.0f, 0x1.720692p-54f, 0x1.96a236p-81f, 0x1.d34a58p-57f,
     0.0f, 0.0f, 0.0f, 0x1.761b46p-33f, 0.0f, 0.0f, 0x1.bffcbep-46f, 0x1.4fc64cp-65f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb30b2p-85f, 0x1.be4a8ep-60f, 0.0f,
     0x1.6a2ad8p-32f, 0x1.0420dap-94f, 0x1.98a28ep-12f, 0x1.552754p-14f,
     0x1.5678acp-17f, 0x1.cfbf98p-56f, 0x1.81731ep-58f, 0x1.ce25fap-35f, 0.0f, 0.0f,
     0x1.8506f2p-113f, 0.0f, 0.0f, 0x1.065f04p-89f, 0x1.780adp-67f, 0x1.89aef6p-6f,
     0.0f, 0.0f, 0x1.a01c3ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.956242p-104f,
     0x1.ce12dp-124f, 0.0f, 0.0f, 0.0f, 0x1.d66bc4p-47f, 0x1.1f0f4ep-15f, 0.0f,
     0x1.ae09b4p-109f, 0x1.b70d2p-68f, 0x1.3d7924p-30f, 0x1.adbb9p-123f, 0.0f, 0.0f,
     0x1.0c6ee2p-22f, 0x1.a27512p-12f, 0x1.fc14aap-49f, 0.0f, 0x1.20c11ap-95f,
     0x1.6a0adep-53f, 0.0f, 0.0f, 0x1.544b7ap-8f, 0.0f, 0x1.67a77ap-34f, 0.0f,
     0x1.a567dep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c36dap-98f, 0.0f, 0x1.411722p-92f,
     0.0f, 0.0f, 0x1.48f1d6p-5f, 0.0f, 0.0f, 0x1.945294p-106f, 0x1.00243ap-126f,
     0x1.ba826ep-119f, 0.0f, 0x1.b76aacp-63f, 0x1.9df6d8p-125f, 0.0f, 0x1.a6531ap-69f,
     0.0f, 0.0f, 0.0f, 0x1.ad57d2p-114f, 0.0f, 0.0f, 0.0f, 0x1.d9fa5ap-126f,
     0x1.b3ae62p-113f, 0x1.3284cp-95f, 0x1.544aaep-9f, 0x1.90276cp-28f, 0.0f, 0.0f,
     0x1.ea4818p-18f, 0.0f, 0x1.1eeb58p-57f, 0.0f, 0x1.9216e4p-96f, 0x1.f7211ap-110f,
     0x1.7604b8p-33f, 0.0f, 0x1.f3c338p-125f, 0x1.3443b6p-95f, 0x1.9d0cep-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.360fc8p-111f, 0x1.e3ab78p-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.54898ap-49f, 0x1.b4f41p-72f, 0x1.246ccp-39f, 0.0f, 0.0f,
     0x1.28332p-40f, 0.0f, 0x1.68f562p-13f, 0x1.3b5496p-11f, 0x1.84b9bcp-90f, 0.0f,
     0x1.b7b646p-51f, 0x1.6f5edep-3f, 0.0f, 0x1.4016dp-98f, 0.0f, 0.0f,
     0x1.06282ep-84f, 0.0f, 0.0f, 0x1.0bdcb2p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a79eap-99f, 0.0f, 0x1.cf3bc8p-80f, 0x1.fcb9fep-85f, 0x1.6a8078p-22f,
     0x1.4a43d2p-13f, 0.0f, 0.0f, 0.0f, 0x1.1224dp-32f, 0.0f, 0.0f, 0x1.27dd7ap-66f,
     0.0f, 0x1.0698d8p-28f, 0.0f, 0.0f, 0.0f, 0x1.329906p-22f, 0x1.74b918p-101f, 0.0f,
     0.0f, 0x1.ac260cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb2712p-67f, 0.0f,
     0x1.8c849ep-17f, 0x1.df1b92p-51f, 0.0f, 0x1.0b7bd2p-4f, 0.0f, 0x1.64f7a6p-87f,
     0x1.d4cab6p-74f, 0.0f, 0x1.f01086p-5f, 0x1.8b5c3cp-89f, 0x1.692ffp-77f,
     0x1.1a5fb8p-47f, 0x1.3743bap-71f, 0.0f, 0.0f, 0x1.ca598p-75f, 0x1.0f351cp-27f,
     0.0f, 0x1.63dadp-39f, 0.0f, 0x1.85c7cep-58f, 0x1.73e16cp-49f, 0x1.7d1704p-52f,
     0.0f, 0.0f, 0x1.591e24p-64f, 0x1.613b98p-109f, 0x1.70b588p-84f, 0x1.40f4bep-42f,
     0x1.5d5a6cp-64f, 0.0f, 0.0f, 0x1.00d928p-101f, 0x1.085a7ap-25f, 0.0f, 0.0f,
     0x1.86146p-43f, 0x1.6e5d3cp-22f, 0.0f, 0.0f, 0x1.d1185ap-52f, 0x1.3b87cp-66f,
     0x1.820e54p-13f, 0.0f, 0.0f, 0.0f, 0x1.1f1abcp-59f, 0x1.5e2a36p-110f, 0.0f,
     0x1.f0be76p-6f, 0.0f, 0x1.df632ap-126f, 0.0f, 0x1.79c814p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.57c458p-112f, 0x1.9fdda8p-35f, 0x1.5c1deep-58f, 0.0f, 0x1.46031p-29f,
     0.0f, 0x1.4edad6p-25f, 0x1.8058eap-94f, 0.0f, 0.0f, 0.0f, 0x1.a62494p-56f, 0.0f,
     0x1.0ee13ap-92f, 0x1.4e976cp-91f, 0.0f, 0.0f, 0.0f, 0x1.7ce1aep-82f, 0.0f,
     0x1.ef42fp-92f, 0x1.4a8b76p-71f, 0x1.1c8484p-70f, 0x1.b8b354p-18f,
     0x1.b5ef4p-43f, 0x1.08fcd6p-67f, 0.0f, 0x1.e7ad86p-113f, 0x1.2bcdfcp-10f,
     0x1.898626p-11f, 0.0f, 0.0f, 0x1.93fbdp-99f, 0.0f, 0x1.44e5ecp-3f, 0.0f, 0.0f,
     0.0f, 0x1.ac4662p-112f, 0.0f, 0.0f, 0x1.f6089p-94f, 0x1.69595ap-48f, 0.0f, 0.0f,
     0.0f, 0x1.298962p-105f, 0x1.4f8b98p-75f, 0x1.914b32p-86f, 0x1.708e62p-102f,
     0x1.68c5d8p-118f, 0.0f, 0x1.9b78a4p-126f, 0x1.cf430ap-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c6d1ap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94c278p-115f, 0x1.5cd34ep-71f, 0x1.e2aa48p-26f, 0.0f, 0.0f, 0.0f,
     0x1.ed26dap-65f, 0x1.a24da4p-121f, 0x1.1b3dacp-115f, 0x1.62f7e6p-43f,
     0x1.8f1fb4p-9f, 0.0f, 0.0f, 0.0f, 0x1.d74282p-84f, 0x1.f79334p-23f, 0.0f,
     0x1.3dc706p-123f, 0x1.191bc4p-27f, 0.0f, 0.0f, 0x1.3f6978p-77f, 0x1.cfa6f8p-124f,
     0.0f, 0x1.cc30f8p-55f, 0.0f, 0.0f, 0x1.ca2952p-109f, 0.0f, 0x1.a119cap-107f,
     0x1.b4841ap-51f, 0x1.ae2a0ep-109f, 0x1.4aaaccp-17f, 0x1.a9cfcap-78f,
     0x1.43bf54p-59f, 0.0f, 0x1.fbf9fp-63f, 0.0f, 0.0f, 0x1.7f63aap-47f, 0.0f,
     0x1.80cb5ep-100f, 0.0f, 0x1.8a1a32p-103f, 0x1.2d9dfep-64f, 0.0f, 0.0f,
     0x1.68c186p-69f, 0.0f, 0.0f, 0x1.bc2676p-4f, 0x1.33073ap-80f, 0x1.269d28p-48f,
     0.0f, 0.0f, 0x1.4798d2p-11f, 0.0f, 0x1.b3adc6p-87f, 0x1.9d6342p-23f, 0.0f,
     0x1.7bda22p-80f, 0.0f, 0x1.4f8072p-47f, 0.0f, 0x1.25c57cp-99f, 0x1.ad40a8p-57f,
     0x1.55bf34p-8f, 0x1.52cfb2p-11f, 0.0f, 0x1.9fffa8p-57f, 0.0f, 0x1.abfdc6p-98f,
     0x1.91131cp-92f, 0x1.b1e988p-64f, 0x1.0e98cep-68f, 0x1.0b18a8p-81f,
     0x1.b11698p-3f, 0x1.f62366p-89f, 0x1.e4e65p-60f, 0.0f, 0.0f, 0.0f,
     0x1.367104p-118f, 0.0f, 0x1.728e3cp-85f, 0.0f, 0.0f, 0.0f, 0x1.ebf57cp-10f, 0.0f,
     0.0f, 0.0f, 0x1.7a5bfp-61f, 0x1.57cb98p-54f, 0.0f, 0.0f, 0.0f, 0x1.a41da6p-71f,
     0x1.1a31ap-70f, 0x1.32db52p-53f, 0x1.a18c7ap-82f, 0x1.ce9e5cp-90f,
     0x1.ad9282p-53f, 0.0f, 0x1.a7a204p-99f, 0x1.d43f38p-9f, 0x1.c41c32p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe75ap-120f, 0x1.7fce26p-15f, 0.0f, 0.0f,
     0x1.33ff72p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.187c44p-77f, 0.0f,
     0x1.26e7d6p-65f, 0x1.2b1a38p-67f, 0x1.29700cp-68f, 0x1.aced66p-100f,
     0x1.974166p-101f, 0x1.725d68p-106f, 0x1.4d06d4p-9f, 0.0f, 0.0f, 0x1.895e4cp-15f,
     0x1.c8d4f8p-35f, 0.0f, 0x1.f7ca36p-119f, 0x1.feca6cp-46f, 0x1.1423a4p-16f,
     0x1.2673e2p-7f, 0x1.cb29p-14f, 0.0f, 0x1.99c1f6p-70f, 0.0f, 0.0f,
     0x1.654f42p-76f, 0x1.1a4344p-93f, 0x1.59a516p-53f, 0.0f, 0.0f, 0x1.53249ep-35f,
     0x1.95f3fcp-105f, 0x1.a1262p-115f, 0.0f, 0x1.dcd494p-116f, 0x1.715366p-77f,
     0x1.f50faap-82f, 0x1.85f0cep-115f, 0x1.c34a1p-67f, 0x1.7ed146p-100f, 0.0f, 0.0f,
     0.0f, 0x1.6e1234p-73f, 0.0f, 0x1.feed58p-125f, 0.0f, 0x1.d4a2cep-66f, 0.0f, 0.0f,
     0x1.8f21b6p-85f, 0.0f, 0.0f, 0x1.744552p-38f, 0x1.810deap-120f, 0x1.f17efap-17f,
     0.0f, 0x1.1444e8p-60f, 0x1.0b65d4p-88f, 0.0f, 0x1.74b3c2p-68f, 0x1.721eep-96f,
     0x1.963914p-77f, 0x1.d42744p-54f, 0x1.619336p-36f, 0.0f, 0.0f, 0x1.20cffp-86f,
     0x1.2c65ecp-115f, 0x1.92c40ep-33f, 0.0f, 0x1.b4296ap-51f, 0.0f, 0x1.d683e6p-102f,
     0.0f, 0x1.aa0776p-91f, 0x1.9d5e08p-53f, 0x1.70293p-75f, 0.0f, 0x1.e29a3ap-47f,
     0x1.bbb0aep-66f, 0.0f, 0x1.9e0dacp-91f, 0x1.e54b9ep-75f, 0.0f, 0x1.360614p-70f,
     0.0f, 0x1.b1a62ep-114f, 0.0f, 0.0f, 0x1.48f63cp-23f, 0.0f, 0.0f, 0x1.a4f528p-51f,
     0.0f, 0.0f, 0x1.130d44p-34f, 0.0f, 0x1.e4898p-109f, 0x1.0aabbcp-109f, 0.0f, 0.0f,
     0.0f, 0x1.96a1f6p-89f, 0x1.2fbfa8p-68f, 0x1.016516p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1e3e0ep-84f, 0x1.baa90ap-55f, 0.0f, 0.0f, 0.0f, 0x1.108002p-110f,
     0x1.61ae4p-36f, 0x1.4790c6p-21f, 0.0f, 0x1.6583e4p-119f, 0.0f, 0x1.bbe25cp-123f,
     0x1.019862p-15f, 0.0f, 0x1.f2e952p-4f, 0.0f, 0.0f, 0x1.025b02p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ea7bf2p-58f, 0x1.2e3d38p-107f, 0x1.2a9d06p-63f, 0.0f,
     0x1.24cafcp-71f, 0.0f, 0x1.acec84p-46f, 0x1.ba8a36p-124f, 0x1.b9483ep-62f,
     0x1.12421cp-115f, 0x1.9e013ap-73f, 0x1.8aa13ep-23f, 0x1.19d8d6p-42f,
     0x1.4561fp-87f, 0x1.597dfp-111f, 0.0f, 0.0f, 0x1.2b8e2ap-10f, 0.0f,
     0x1.d2cd3p-113f, 0.0f, 0.0f, 0x1.2d84a8p-38f, 0x1.c41a04p-72f, 0x1.6b9e92p-119f,
     0.0f, 0x1.fc6c94p-41f, 0x1.2e3e5p-97f, 0.0f, 0x1.d65e9ep-10f, 0.0f, 0.0f,
     0x1.450c8ep-111f, 0x1.7affd2p-77f, 0.0f, 0x1.efb23ep-77f, 0x1.070b2p-60f,
     0x1.890cfcp-69f, 0.0f, 0x1.aa2e1ap-117f, 0x1.07986ap-25f, 0x1.9e87e6p-102f, 0.0f,
     0x1.c715p-52f, 0x1.5a514ap-72f, 0x1.731e32p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25abdap-122f, 0.0f, 0x1.ed80fep-62f, 0x1.8c6fe6p-13f, 0x1.2dd64cp-63f, 0.0f,
     0x1.2c5dc4p-7f, 0.0f, 0x1.9952acp-38f, 0x1.ea49c6p-72f, 0.0f, 0.0f,
     0x1.22347p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc28f4p-19f,
     0.0f, 0x1.f1cdfap-57f, 0x1.929f8cp-77f, 0x1.e0351ep-83f, 0x1.a7d906p-52f,
     0x1.49d5d8p-45f, 0.0f, 0x1.7f78d2p-20f, 0x1.69b49cp-47f, 0.0f, 0x1.0c8ea8p-27f,
     0x1.66bb92p-48f, 0x1.54b0aap-113f, 0.0f, 0x1.934208p-108f, 0x1.149e42p-53f,
     0x1.3b65cep-53f, 0x1.ff6cc6p-73f, 0x1.575578p-117f, 0x1.3a7dap-75f,
     0x1.d98018p-26f, 0.0f, 0.0f, 0.0f, 0x1.e81a02p-93f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.c7176p-25f, 0.0f, 0x1.95a9fap-48f, 0x1.e71d16p-15f, 0x1.16f3bap-10f,
     0x1.224e56p-64f, 0x1.3587p-58f, 0x1.9026b6p-122f, 0.0f, 0.0f, 0x1.86cd6p-86f,
     0.0f, 0.0f, 0x1.8fa1a4p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e5822p-101f, 0x1.34846p-6f, 0.0f, 0.0f, 0.0f, 0x1.675d28p-8f,
     0x1.f1a1dap-116f, 0x1.6b37eep-28f, 0x1.d4d81cp-69f, 0.0f, 0x1.141e1cp-100f,
     0x1.10c34p-61f, 0x1.882956p-35f, 0x1.c055f4p-54f, 0.0f, 0x1.e0b97ap-65f, 0.0f,
     0.0f, 0x1.f5466p-14f, 0.0f, 0x1.261d2p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.acb922p-41f, 0.0f, 0.0f, 0x1.b7b766p-38f, 0x1.b98f88p-26f, 0.0f,
     0x1.0f193p-77f, 0x1.5dcd9ep-4f, 0x1.422a28p-118f, 0x1.ab5a3p-80f,
     0x1.13d6b2p-46f, 0x1.e82b9ep-120f, 0.0f, 0.0f, 0x1.7b6d8ep-84f, 0x1.1704f2p-25f,
     0x1.9e5046p-85f, 0x1.43072cp-51f, 0.0f, 0x1.0bfda2p-111f, 0x1.db5598p-25f,
     0x1.d49346p-28f, 0.0f, 0.0f, 0x1.3d822ap-77f, 0x1.2b884cp-75f, 0.0f,
     0x1.679e86p-13f
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
            tmp1 = Sleef_acosf1_u10purecfma(tmp0);
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
    printf("Sleef_acosf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
