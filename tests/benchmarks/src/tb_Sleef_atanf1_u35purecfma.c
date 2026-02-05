/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf1_u35purecfma.c --function \
 *     Sleef_atanf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.76352ap-16f, 0x1.a81da2p-71f, 0x1.9037d2p-53f, 0x1.0d25bap-103f, 0.0f, 0.0f,
     0x1.8ca572p-99f, 0x1.74cb6p-85f, 0x1.33dcd4p-71f, 0.0f, 0x1.d5e6a4p-55f, 0.0f,
     0x1.c4d9c2p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21aeccp-19f, 0.0f, 0.0f,
     0x1.f0f538p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33647cp-71f, 0.0f, 0.0f,
     0x1.3abad4p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.113084p-6f, 0x1.82bcf6p-24f,
     0x1.c810bcp-115f, 0x1.3283c8p-59f, 0.0f, 0.0f, 0x1.932ac8p-19f, 0x1.1566f2p-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d91c3cp-72f, 0x1.1ac014p-8f, 0.0f, 0.0f,
     0x1.3fde02p-47f, 0.0f, 0x1.89f1bcp-23f, 0x1.bc9ca2p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b81fdp-109f, 0x1.1adb8ap-113f, 0x1.26c9eap-74f, 0x1.2f4768p-43f, 0.0f,
     0x1.7d6c36p-12f, 0.0f, 0.0f, 0x1.cea95cp-12f, 0.0f, 0.0f, 0x1.f8d1ep-30f,
     0x1.47b90ep-46f, 0.0f, 0x1.649508p-64f, 0x1.171292p-4f, 0x1.ce7de4p-61f, 0.0f,
     0x1.97451p-30f, 0.0f, 0.0f, 0x1.541346p-66f, 0.0f, 0.0f, 0.0f, 0x1.c90cp-119f,
     0x1.e78fc4p-67f, 0.0f, 0.0f, 0.0f, 0x1.fa3222p-12f, 0.0f, 0x1.3ddb7ap-99f, 0.0f,
     0x1.0aa252p-20f, 0x1.13a764p-54f, 0.0f, 0.0f, 0.0f, 0x1.e82236p-42f, 0.0f,
     0x1.a1f304p-125f, 0x1.0732b2p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee3778p-38f, 0x1.fcbdf6p-63f, 0x1.3c50b8p-39f, 0.0f, 0.0f, 0x1.f30078p-63f,
     0.0f, 0.0f, 0x1.409f08p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e0ec4p-15f,
     0x1.bd3ed6p-45f, 0x1.b4f494p-92f, 0x1.25f21ep-12f, 0x1.0f24fcp-105f,
     0x1.03f2a2p-113f, 0.0f, 0x1.9764cp-36f, 0.0f, 0.0f, 0.0f, 0x1.39c794p-115f,
     0x1.f0282cp-36f, 0x1.9b1ff4p-91f, 0x1.9563c8p-109f, 0x1.84f5b8p-69f, 0.0f,
     0x1.1af202p-119f, 0.0f, 0.0f, 0x1.5a312cp-33f, 0x1.f4eb94p-49f, 0x1.a03734p-74f,
     0.0f, 0x1.ed32fap-33f, 0x1.7b4cbap-12f, 0x1.c8d438p-94f, 0.0f, 0x1.a65cc2p-64f,
     0.0f, 0.0f, 0.0f, 0x1.8d5c98p-28f, 0x1.2a4cdp-16f, 0.0f, 0.0f, 0x1.5cea3p-67f,
     0.0f, 0.0f, 0x1.7e3f72p-106f, 0.0f, 0x1.a488ecp-57f, 0x1.b864f2p-31f,
     0x1.07b85ep-81f, 0.0f, 0x1.78b178p-115f, 0.0f, 0.0f, 0x1.add7e2p-86f, 0.0f,
     0x1.285218p-91f, 0x1.64882cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b57c22p-39f, 0x1.802436p-46f, 0x1.9089d2p-26f, 0x1.3e43c8p-51f,
     0x1.d4ae3ap-70f, 0x1.1fef4ap-17f, 0.0f, 0x1.fde90ep-116f, 0.0f, 0x1.cb9b6ep-126f,
     0.0f, 0.0f, 0x1.b91266p-85f, 0x1.8933dp-43f, 0.0f, 0.0f, 0x1.d6a07cp-106f,
     0x1.76c5a2p-13f, 0.0f, 0.0f, 0x1.a7a3bcp-42f, 0x1.751ebp-61f, 0x1.7c3fd2p-12f,
     0.0f, 0x1.e5b43cp-44f, 0x1.625546p-110f, 0.0f, 0x1.23af76p-57f, 0x1.91fa5p-98f,
     0.0f, 0x1.41b4fep-110f, 0.0f, 0x1.20847ap-85f, 0.0f, 0.0f, 0x1.4cd626p-101f,
     0x1.cc21f8p-53f, 0.0f, 0.0f, 0x1.25a07p-5f, 0.0f, 0.0f, 0x1.8a973cp-62f, 0.0f,
     0.0f, 0.0f, 0x1.96596ep-85f, 0x1.cde7dp-15f, 0x1.d00fb4p-99f, 0x1.8b8daep-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2c0eap-62f, 0x1.3d83f4p-6f, 0.0f, 0x1.60cd3ap-124f,
     0.0f, 0x1.f1da92p-110f, 0.0f, 0x1.e0362ap-77f, 0x1.0b3992p-22f, 0.0f, 0x1p0f,
     0.0f, 0x1.29b2acp-97f, 0x1.0bc296p-103f, 0x1.c0b616p-12f, 0.0f, 0x1.4dfc52p-101f,
     0x1.3ab66cp-3f, 0x1.8503bp-40f, 0.0f, 0.0f, 0x1.c7b934p-66f, 0.0f,
     0x1.ef743p-78f, 0x1.75d888p-95f, 0x1.8dda12p-50f, 0.0f, 0x1.565648p-3f, 0.0f,
     0x1.dcb3e6p-17f, 0.0f, 0.0f, 0x1.886da8p-21f, 0.0f, 0.0f, 0x1.8c251p-54f,
     0x1.7d92bep-56f, 0x1.4025aap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aebc12p-67f,
     0x1.ecb22ep-123f, 0x1.b12052p-112f, 0.0f, 0.0f, 0x1.1b2ed4p-52f, 0x1.87fdecp-3f,
     0.0f, 0x1.437ce8p-108f, 0x1.7b4a04p-101f, 0x1.76938ep-40f, 0.0f, 0.0f, 0.0f,
     0x1.c40fd2p-24f, 0x1.fe305p-72f, 0.0f, 0x1.aeca3ap-31f, 0x1.1c3998p-31f,
     0x1.02b836p-110f, 0x1.dd1c24p-44f, 0.0f, 0.0f, 0x1.9b493cp-40f, 0x1.73e36p-124f,
     0x1.1c0d22p-60f, 0.0f, 0x1.08fcb4p-117f, 0x1.bc4378p-3f, 0x1.417f56p-59f,
     0x1.4e6b2ap-34f, 0.0f, 0x1.6dea7ap-12f, 0.0f, 0x1.41a3ccp-74f, 0.0f,
     0x1.6f9e38p-99f, 0.0f, 0.0f, 0x1.5ffcd8p-40f, 0x1.0e7956p-114f, 0.0f,
     0x1.728a9ap-98f, 0.0f, 0x1.bd4124p-16f, 0x1.4e03aap-69f, 0.0f, 0x1.5b7f8p-72f,
     0x1.7f7468p-68f, 0x1.7eff3ap-9f, 0.0f, 0x1.031198p-117f, 0x1.d0c5cp-5f, 0.0f,
     0.0f, 0.0f, 0x1.93ca3ep-93f, 0.0f, 0.0f, 0x1.3c2ff2p-48f, 0.0f, 0.0f,
     0x1.d53c46p-21f, 0.0f, 0x1.f9c3bcp-32f, 0x1.57c21ep-118f, 0.0f, 0x1.e1bc4ep-4f,
     0x1.c3b3f4p-65f, 0.0f, 0x1.0ed754p-65f, 0.0f, 0x1.27ede4p-61f, 0x1.02faeap-8f,
     0x1.eeba5cp-51f, 0.0f, 0x1.ec8f4ep-10f, 0.0f, 0x1.0668acp-96f, 0.0f,
     0x1.fae45ap-93f, 0x1.4ad298p-61f, 0.0f, 0x1.cd3c8p-36f, 0.0f, 0x1.fb0b8ap-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db8e28p-81f, 0x1.da938ep-75f, 0x1.1099ccp-93f,
     0x1.c0c5e6p-17f, 0.0f, 0x1.b3d4d2p-21f, 0.0f, 0.0f, 0.0f, 0x1.94eb5p-124f,
     0x1.b2df36p-82f, 0x1.511b9cp-118f, 0.0f, 0x1.df57e6p-111f, 0.0f, 0x1.25135ap-10f,
     0x1.7f9fa4p-49f, 0x1.3bf02ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81f706p-65f, 0.0f,
     0.0f, 0x1.84d058p-102f, 0x1.423dcp-69f, 0x1.984dp-69f, 0.0f, 0x1.10b6a4p-70f,
     0.0f, 0.0f, 0.0f, 0x1.a69e74p-43f, 0x1.49d18cp-48f, 0x1.87cf98p-100f, 0.0f, 0.0f,
     0x1.822c48p-2f, 0.0f, 0x1.1d3464p-26f, 0x1.99p-11f, 0x1.1f9506p-19f,
     0x1.9221c6p-71f, 0.0f, 0.0f, 0x1.59e414p-90f, 0x1.57f2f8p-56f, 0.0f,
     0x1.4ebdfp-88f, 0x1.318184p-108f, 0x1.ee76fep-75f, 0x1.9df45p-87f,
     0x1.d0bb0ep-113f, 0x1.4c6ed4p-122f, 0.0f, 0x1.e70b0cp-50f, 0x1.5af806p-115f,
     0x1.ee584p-80f, 0x1.dec85p-118f, 0x1.b8729cp-3f, 0x1.4722a6p-30f,
     0x1.36c9e6p-38f, 0x1.7ef3a2p-102f, 0.0f, 0x1.c4f62cp-124f, 0x1.f352e2p-28f,
     0x1.d8c4e8p-107f, 0x1.cde2b4p-55f, 0x1.07ff26p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.467b9ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25b7d6p-70f, 0x1.be2b8ap-51f,
     0x1.24a75ep-92f, 0x1.d09564p-41f, 0x1.bf926p-3f, 0.0f, 0.0f, 0x1.e54f3cp-90f,
     0.0f, 0x1.5a57ecp-59f, 0.0f, 0.0f, 0x1.b7af7p-37f, 0.0f, 0.0f, 0x1.28b418p-55f,
     0.0f, 0.0f, 0.0f, 0x1.0c51cap-121f, 0.0f, 0.0f, 0x1.43bd26p-9f, 0.0f,
     0x1.4be8eap-1f, 0.0f, 0x1.938b44p-97f, 0.0f, 0x1.4fcf36p-124f, 0.0f,
     0x1.2a3ce6p-83f, 0x1.d0ac8ap-104f, 0.0f, 0.0f, 0.0f, 0x1.887b8cp-109f,
     0x1.f8b6dep-105f, 0.0f, 0x1.73a6f4p-30f, 0.0f, 0x1.3fad3ep-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6eb6d2p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b6c28p-53f, 0.0f, 0.0f, 0x1.2f05e8p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6d9e2p-28f, 0.0f, 0.0f, 0x1.85155ap-33f, 0.0f, 0.0f, 0x1.c69938p-74f,
     0x1.1442dap-90f, 0.0f, 0.0f, 0x1.9f86fcp-126f, 0x1.3b2ef2p-85f, 0x1.57e336p-114f,
     0.0f, 0x1.da9fe8p-101f, 0x1.2455ep-27f, 0x1.05c35cp-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4db9dp-13f, 0x1.3f09e6p-104f, 0x1.638e22p-8f, 0.0f, 0x1.aaff5cp-80f,
     0x1.48ee2p-52f, 0x1.d35ee2p-109f, 0.0f, 0.0f, 0x1.ab7692p-74f, 0x1.0696ep-2f,
     0.0f, 0.0f, 0x1.9d1fc4p-46f, 0x1.7d3ecep-80f, 0.0f, 0.0f, 0x1.443988p-78f,
     0x1.1eb0b2p-78f, 0.0f, 0x1.1b1bf8p-14f, 0.0f, 0x1.d5865cp-55f, 0x1.7d078cp-87f,
     0x1.4b14c2p-119f, 0.0f, 0x1.633428p-78f, 0x1.057c5p-47f, 0.0f, 0.0f,
     0x1.e84234p-45f, 0x1.3f485ap-51f, 0.0f, 0.0f, 0x1.c4b0b2p-65f, 0.0f, 0.0f,
     0x1.ae0ea4p-72f, 0.0f, 0.0f, 0x1.42a7f8p-82f, 0x1.bcfabcp-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9c326p-66f, 0x1.beb5b2p-25f, 0.0f, 0x1.470486p-98f,
     0x1.c21272p-90f, 0.0f, 0x1.e8ba48p-21f, 0x1.727cdap-34f, 0.0f, 0.0f,
     0x1.86b876p-19f, 0x1.d7513ep-107f, 0.0f, 0.0f, 0.0f, 0x1.a4e33cp-54f, 0.0f,
     0x1.f47d4cp-10f, 0x1.dfd05ep-91f, 0x1.cf8742p-64f, 0x1.325a02p-116f,
     0x1.fbe3fep-91f, 0x1.44cb1ap-14f, 0.0f, 0x1.3994cep-119f, 0x1.459c8cp-37f,
     0x1.c5d3eap-61f, 0.0f, 0.0f, 0.0f, 0x1.f629f2p-14f, 0.0f, 0.0f, 0.0f,
     0x1.9c2e52p-72f, 0x1.44cd14p-44f, 0x1.01cf56p-72f, 0x1.72400cp-74f,
     0x1.4ffc74p-88f, 0x1.5bd7e4p-113f, 0x1.9ccf66p-107f, 0.0f, 0.0f, 0.0f,
     0x1.c5901ep-3f, 0x1.c36b86p-93f, 0x1.859d88p-57f, 0.0f, 0x1.ddd34ep-25f,
     0x1.2eb696p-122f, 0.0f, 0.0f, 0x1.aabb1cp-48f, 0.0f, 0x1.443fc2p-4f, 0.0f, 0.0f,
     0.0f, 0x1.b15a8ep-6f, 0.0f, 0x1.9c1cd6p-96f, 0x1.049652p-76f, 0x1.371daap-23f,
     0.0f, 0x1.4b65f8p-39f, 0x1.10109cp-68f, 0.0f, 0.0f, 0x1.5c739ep-101f,
     0x1.3d2c1ap-75f, 0x1.66cde2p-35f, 0x1.5de3aep-100f, 0.0f, 0.0f, 0.0f,
     0x1.f6c35p-60f, 0x1.e52116p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.96675cp-68f, 0x1.74c0fp-33f, 0.0f, 0.0f, 0.0f,
     0x1.2841dap-68f, 0.0f, 0x1.3c8248p-109f, 0x1.29f0ecp-90f, 0.0f, 0.0f, 0.0f,
     0x1.cf146p-4f, 0.0f, 0.0f, 0x1.d6262p-102f, 0x1p0f, 0.0f, 0.0f, 0x1.09c29ap-80f,
     0.0f, 0x1.c9d57cp-63f, 0x1.c2edf4p-76f, 0x1.1343p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0544cp-79f, 0x1.9d8042p-27f, 0x1.101fb8p-38f, 0.0f,
     0x1.acd766p-102f, 0x1.5ef8ap-80f, 0.0f, 0x1.9b24bap-60f, 0.0f, 0.0f,
     0x1.bfc6bep-27f, 0.0f, 0.0f, 0.0f, 0x1.a6489ep-80f, 0.0f, 0.0f, 0.0f,
     0x1.c15224p-36f, 0x1.73365ep-54f, 0x1.88a4c6p-32f, 0x1.1c3614p-72f, 0.0f,
     0x1.d87c2ep-32f, 0.0f, 0x1.309fc4p-32f, 0x1.1c9254p-120f, 0x1.a33148p-61f, 0.0f,
     0x1.d2fd06p-9f, 0.0f, 0x1.92d7e4p-119f, 0.0f, 0x1.f9839cp-74f, 0.0f,
     0x1.78e79cp-108f, 0.0f, 0.0f, 0x1.0f4d4ap-104f, 0.0f, 0x1.42bcfp-118f, 0.0f,
     0x1.dc7ffp-77f, 0.0f, 0x1.ab08dap-122f, 0x1.083bccp-61f, 0.0f, 0.0f,
     0x1.eac724p-96f, 0x1.73209ep-34f, 0.0f, 0.0f, 0.0f, 0x1.4f4a9ap-12f, 0.0f,
     0x1.4a921cp-123f, 0.0f, 0x1.cb05e8p-42f, 0x1.be7088p-40f, 0x1.1a4586p-38f, 0.0f,
     0x1.8fdfaep-96f, 0x1.362b94p-60f, 0x1.96604cp-16f, 0.0f, 0.0f, 0x1.ef7a16p-54f,
     0x1.0b26c6p-76f, 0x1.693f3p-64f, 0x1.11535p-111f, 0x1.0bab1cp-107f,
     0x1.0b419cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27aa0cp-113f,
     0x1.6591bp-81f, 0.0f, 0.0f, 0x1.940e5ap-96f, 0x1.31a89p-24f, 0x1.2b9ef6p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9fe6ep-8f, 0.0f, 0.0f, 0x1.423558p-77f, 0.0f,
     0x1.0b33eep-52f, 0.0f, 0x1.037d94p-30f, 0.0f, 0.0f, 0x1.0cdb2p-126f,
     0x1.e52612p-100f, 0x1.3b1e6ep-97f, 0.0f, 0.0f, 0x1.f478a8p-91f, 0.0f, 0.0f,
     0x1.7a1298p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f9de4p-7f, 0.0f,
     0x1.56fdap-61f, 0.0f, 0x1.7463e4p-11f, 0x1.c09264p-10f, 0.0f, 0x1.143f84p-16f,
     0.0f, 0x1.0bdab4p-77f, 0.0f, 0.0f, 0.0f, 0x1.fcf826p-22f, 0.0f, 0x1.02c706p-52f,
     0x1.e2ac12p-29f, 0x1.c6d296p-98f, 0.0f, 0.0f, 0x1.eef648p-68f, 0.0f,
     0x1.2ca702p-49f, 0x1.7b014ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a81dep-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a1c3p-42f, 0.0f, 0x1.639ec6p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cf07e8p-110f, 0x1.ccede6p-98f, 0x1.d8ccaep-33f, 0x1.771578p-82f,
     0.0f, 0x1.fe64e6p-27f, 0x1.e5a972p-38f, 0x1.036d1ap-47f, 0x1.909188p-67f, 0.0f,
     0.0f, 0.0f, 0x1.5651aep-37f, 0x1.ecd3e8p-48f, 0x1.17f97ap-3f, 0x1.bfb7f6p-64f,
     0.0f, 0.0f, 0.0f, 0x1.a8aa96p-56f, 0x1.2a97f2p-61f, 0x1.2c81d2p-95f,
     0x1.ab452p-91f, 0x1.f3efcap-11f, 0x1.ecf04ep-60f, 0.0f, 0x1.92f43p-101f, 0.0f,
     0x1.6083eep-107f, 0.0f, 0x1.6253bcp-60f, 0x1.f7c8c2p-111f, 0x1.ea2262p-43f,
     0x1.2822b2p-119f, 0x1.d4fe62p-40f, 0x1.4c581ep-87f, 0.0f, 0x1.07804ap-101f, 0.0f,
     0x1.0eba16p-67f, 0.0f, 0.0f, 0x1.197c36p-45f, 0x1.bc3d96p-22f, 0.0f,
     0x1.f971c2p-12f, 0.0f, 0x1.83d47ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cbfdbcp-63f, 0.0f, 0x1.d74d64p-33f, 0x1.62e416p-106f, 0.0f, 0x1.24d05ep-1f,
     0x1.80f2bcp-83f, 0x1.891d9p-13f, 0x1.5c91b4p-30f, 0.0f, 0x1.420812p-77f, 0.0f,
     0.0f, 0.0f, 0x1.497e2p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1aa8fcp-108f, 0.0f, 0.0f,
     0x1.e86ccep-84f, 0x1.f1fab6p-36f, 0.0f, 0.0f, 0.0f, 0x1.d654fp-1f, 0.0f,
     0x1.8bfdb2p-30f, 0x1.b208ecp-33f, 0.0f, 0x1.46518p-96f, 0x1.3a827ap-86f,
     0x1.3b1e06p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fcff8p-98f, 0.0f, 0x1.06dbe8p-107f,
     0.0f, 0.0f, 0x1.d0405ap-114f, 0x1.6a437p-20f, 0x1.f7f51p-120f, 0.0f,
     0x1.88abbcp-32f, 0x1.db6c1ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cf74cp-95f, 0.0f,
     0x1.2eea5ep-21f, 0x1.0b0786p-93f, 0.0f, 0x1.e87c5ep-49f, 0.0f, 0x1.6b2402p-76f,
     0.0f, 0.0f, 0.0f, 0x1.4bf9a2p-102f, 0x1.36d2b8p-75f, 0.0f, 0.0f, 0x1.7aef64p-54f,
     0.0f, 0x1.e60cap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aaa7cap-60f,
     0x1.54b4bcp-107f, 0x1.5cc28p-20f, 0x1.a42e2p-114f, 0.0f, 0.0f, 0x1.f55e7ap-117f,
     0x1.d4c10ep-29f, 0.0f, 0x1.db700ap-109f, 0.0f, 0.0f, 0x1.eb1dp-3f, 0.0f, 0.0f,
     0x1.f0351p-67f
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
            tmp1 = Sleef_atanf1_u35purecfma(tmp0);
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
    printf("Sleef_atanf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
