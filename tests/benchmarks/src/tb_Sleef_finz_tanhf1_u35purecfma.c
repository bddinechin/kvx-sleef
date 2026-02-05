/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf1_u35purecfma.c --function \
 *     Sleef_finz_tanhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.73b624p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.293e2ap-67f,
     0x1.675fe4p-108f, 0x1.a3bdacp-80f, 0x1.23eea2p-4f, 0x1.58e2cep-97f, 0.0f,
     0x1.d753a4p-21f, 0x1.d9482cp-55f, 0.0f, 0x1.8e38b2p-2f, 0.0f, 0.0f,
     0x1.55182ep-18f, 0x1.cf9172p-17f, 0x1.59324cp-121f, 0x1.427eb4p-79f,
     0x1.4bf0a8p-125f, 0.0f, 0x1.4287e2p-26f, 0x1.81d1d2p-122f, 0.0f, 0x1.d0b1dap-91f,
     0.0f, 0.0f, 0x1.635dfap-49f, 0.0f, 0.0f, 0.0f, 0x1.3f260ap-63f, 0x1.e93acep-69f,
     0x1.f6d682p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9360fap-70f, 0x1.7dc086p-41f, 0.0f,
     0.0f, 0.0f, 0x1.72d3ap-63f, 0x1.383284p-12f, 0x1.6e11bp-62f, 0.0f, 0.0f, 0.0f,
     0x1.163eb6p-82f, 0x1.db5c3ep-65f, 0x1.254da2p-52f, 0.0f, 0x1.13d438p-55f, 0.0f,
     0x1.446038p-100f, 0x1.0e332p-119f, 0.0f, 0x1.603f1ep-67f, 0x1.64eb66p-2f,
     0x1.6b6d84p-33f, 0.0f, 0x1.185f36p-66f, 0.0f, 0.0f, 0x1.e42e34p-61f, 0.0f, 0.0f,
     0.0f, 0x1.28c40cp-82f, 0x1.d5f5aap-73f, 0x1p0f, 0x1.f3df5ep-87f, 0.0f, 0.0f,
     0.0f, 0x1.950c96p-1f, 0.0f, 0.0f, 0x1.bc1d02p-110f, 0.0f, 0x1.54aaf2p-27f,
     0x1.5898bcp-82f, 0x1.88751p-1f, 0x1.f2eb1ep-53f, 0.0f, 0.0f, 0x1.ad5c3ap-35f,
     0.0f, 0.0f, 0.0f, 0x1.de8d7ep-11f, 0.0f, 0x1.952b64p-63f, 0.0f, 0x1.12cf9ap-59f,
     0.0f, 0.0f, 0x1.75cfeep-63f, 0x1.6ab446p-107f, 0.0f, 0x1.40df62p-82f,
     0x1.42fccp-30f, 0x1.f50c28p-71f, 0x1.1bd042p-1f, 0.0f, 0x1.15df5ep-68f,
     0x1.259aa2p-4f, 0x1.d13fd4p-46f, 0.0f, 0x1.81b248p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9e32e6p-59f, 0.0f, 0x1.e27614p-28f, 0.0f, 0.0f, 0x1.7a6412p-126f, 0.0f,
     0.0f, 0.0f, 0x1.5d92dcp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a538ep-91f,
     0x1.ee20ecp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23ebd4p-59f, 0x1.1d95cp-42f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.ddfa7cp-109f, 0.0f, 0.0f, 0.0f, 0x1.96c0fap-87f,
     0x1.f38bb6p-125f, 0.0f, 0x1.fd9cf6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffe6e6p-85f,
     0.0f, 0.0f, 0x1.40cedcp-105f, 0x1.cbd6dap-58f, 0.0f, 0x1.90901cp-96f,
     0x1.5516cap-87f, 0x1.fc974ep-120f, 0x1.108c4cp-47f, 0x1.220964p-114f,
     0x1.e915c2p-39f, 0x1.0a9d5cp-54f, 0.0f, 0x1.9fb9ccp-21f, 0.0f, 0x1.97655ap-84f,
     0.0f, 0x1.9e3252p-6f, 0x1.44ba9p-50f, 0x1.576a4cp-108f, 0x1.943d8ap-116f, 0.0f,
     0x1.f687f8p-96f, 0x1.0516eep-3f, 0x1.fd7cc4p-57f, 0x1.627d4cp-45f,
     0x1.5419dcp-72f, 0.0f, 0x1.f68688p-6f, 0x1.d009f4p-117f, 0x1.773368p-8f, 0.0f,
     0x1.52c3bap-23f, 0x1.da560ap-31f, 0x1.07c51ap-54f, 0x1.5f7e1ep-116f,
     0x1.d88168p-29f, 0.0f, 0.0f, 0x1.88f216p-79f, 0x1.9b3e3cp-113f, 0.0f, 0.0f,
     0x1.ffb4c8p-20f, 0x1.c2245ap-76f, 0.0f, 0.0f, 0x1.61b3bap-39f, 0x1.bf3a0ap-117f,
     0x1.4c6558p-27f, 0.0f, 0x1.c242dcp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37dd6cp-64f, 0.0f, 0.0f, 0x1.6d145p-56f, 0x1.a610eap-67f, 0x1.1e0532p-97f,
     0.0f, 0x1.282cdap-92f, 0x1.f0eee2p-19f, 0.0f, 0.0f, 0x1.eb98ecp-86f,
     0x1.d6875ep-17f, 0x1.0bcebp-61f, 0.0f, 0.0f, 0.0f, 0x1.c5119ep-8f, 0.0f, 0.0f,
     0x1.77e91p-36f, 0x1.687172p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa7cc8p-100f, 0x1.442f96p-117f, 0.0f, 0x1.3e84fp-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce3b5p-91f, 0.0f, 0x1.378356p-18f, 0.0f, 0x1.15a13ap-31f, 0x1.0c3214p-28f,
     0.0f, 0x1.0eb332p-58f, 0x1.4dc96p-6f, 0x1.336882p-18f, 0x1.f4661ap-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6ca9cp-32f, 0.0f, 0.0f, 0x1.474fb2p-102f,
     0x1.c2c066p-119f, 0.0f, 0x1.d7a63cp-91f, 0.0f, 0.0f, 0x1.a9530ap-67f, 0.0f,
     0x1.c86edap-64f, 0x1.b011c2p-126f, 0.0f, 0.0f, 0x1.59c37p-20f, 0x1.61ca1ap-31f,
     0x1.ed9466p-104f, 0.0f, 0x1.0f64f4p-120f, 0x1.177112p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b4fc2p-13f, 0x1.43f7b8p-118f, 0.0f, 0.0f, 0.0f, 0x1.2f8f28p-117f,
     0x1.07a7b2p-24f, 0x1.89f376p-53f, 0x1p0f, 0.0f, 0x1.750f82p-73f, 0x1.5e9e0cp-40f,
     0x1.d47166p-114f, 0x1.733b1ep-44f, 0.0f, 0.0f, 0.0f, 0x1.73cdfcp-69f,
     0x1.490a7ep-13f, 0.0f, 0x1.62e7d4p-82f, 0x1.6647e8p-36f, 0.0f, 0x1.68ad36p-10f,
     0.0f, 0x1.832988p-59f, 0.0f, 0.0f, 0x1.c4e7cep-44f, 0.0f, 0.0f, 0x1.459d4p-81f,
     0.0f, 0.0f, 0x1.f3fe7p-55f, 0x1.fb00dap-125f, 0.0f, 0.0f, 0x1.52df3p-73f, 0.0f,
     0.0f, 0.0f, 0x1.a6237ap-124f, 0.0f, 0.0f, 0x1.0fafc6p-116f, 0.0f,
     0x1.9bff8ep-27f, 0.0f, 0x1.663ab2p-50f, 0x1.77cf84p-67f, 0.0f, 0.0f,
     0x1.bda256p-52f, 0.0f, 0.0f, 0x1.56168p-5f, 0.0f, 0.0f, 0.0f, 0x1.7de24p-83f,
     0x1.11070cp-66f, 0x1.f0d71ap-29f, 0x1.4be384p-99f, 0x1.cf5102p-88f,
     0x1.1dfe64p-22f, 0.0f, 0x1p0f, 0x1.c55ddap-32f, 0x1.2a4feap-100f, 0.0f,
     0x1.8f5452p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69cdeep-26f, 0.0f,
     0x1.2fd48p-42f, 0.0f, 0x1.662a24p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d82e3ap-39f, 0.0f, 0x1.b67c96p-107f, 0.0f, 0.0f, 0x1.9d2fb4p-9f, 0.0f,
     0x1.99b9p-19f, 0.0f, 0.0f, 0.0f, 0x1.6ceaf6p-27f, 0.0f, 0.0f, 0x1.15e404p-78f,
     0x1.68c3fcp-71f, 0x1.3cb1fcp-75f, 0x1.e61992p-49f, 0.0f, 0.0f, 0x1.c88922p-85f,
     0x1.0e48b4p-45f, 0x1.fc513ep-86f, 0x1.78e676p-80f, 0x1.2cbf7ap-107f,
     0x1.9084acp-7f, 0.0f, 0x1.55b3a4p-12f, 0.0f, 0.0f, 0.0f, 0x1.43500ap-86f,
     0x1.eb6126p-25f, 0x1.74f794p-100f, 0.0f, 0.0f, 0x1.44de34p-23f, 0.0f, 0.0f,
     0x1.eef52cp-84f, 0.0f, 0.0f, 0.0f, 0x1.583ba8p-22f, 0.0f, 0.0f, 0x1.16a258p-30f,
     0.0f, 0.0f, 0x1.a40bacp-122f, 0.0f, 0.0f, 0x1.1333b6p-27f, 0x1.c86312p-113f,
     0x1.9b2658p-22f, 0.0f, 0.0f, 0x1.dcd1fap-117f, 0.0f, 0x1.a256d2p-97f,
     0x1.e0667cp-69f, 0x1.6abe9ap-72f, 0x1.8793c4p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67b0d4p-9f, 0.0f, 0x1.8a5f3cp-82f, 0x1.e7a2dp-117f, 0x1.ee73dap-80f, 0.0f,
     0x1.750b54p-32f, 0x1.165384p-49f, 0.0f, 0.0f, 0x1.7f8524p-6f, 0.0f, 0.0f,
     0x1.1ab9acp-89f, 0x1.e1afb4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.575deep-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9f2886p-125f, 0x1.77ff2cp-14f, 0x1.5faaa2p-24f, 0.0f, 0.0f,
     0.0f, 0x1.b258fap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.349a1cp-20f, 0x1.616326p-48f,
     0x1.a1cab2p-122f, 0x1.4af1dp-67f, 0x1.ad8446p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.053ea8p-79f, 0.0f, 0x1.39f678p-12f, 0x1.94a9e8p-102f, 0.0f, 0x1.0b2b2cp-108f,
     0x1.03bab8p-64f, 0x1.feeb86p-98f, 0x1.b249dcp-105f, 0.0f, 0.0f, 0.0f,
     0x1.b0abd8p-109f, 0x1.ff928cp-74f, 0x1.0550bep-102f, 0x1.8dc2ep-117f, 0.0f, 0.0f,
     0x1.610e38p-39f, 0x1.2f484cp-59f, 0.0f, 0x1.8369bap-1f, 0.0f, 0x1.f6ed38p-47f,
     0x1.21f60cp-47f, 0x1.3bc15p-118f, 0x1.2fb552p-42f, 0.0f, 0.0f, 0x1.64e04ap-84f,
     0x1.6eaaf2p-108f, 0.0f, 0x1.f6cddep-32f, 0.0f, 0.0f, 0.0f, 0x1.e72916p-59f,
     0x1.1ef674p-26f, 0x1.296628p-114f, 0x1.e3e03ap-5f, 0.0f, 0x1.e9b788p-8f,
     0x1.77eae2p-46f, 0x1.03d934p-100f, 0.0f, 0x1.268542p-117f, 0x1.8d79cp-123f,
     0x1.25c336p-120f, 0.0f, 0.0f, 0.0f, 0x1.2fc406p-64f, 0.0f, 0x1.5c6c28p-31f,
     0x1.0c4888p-79f, 0x1.d6b85ap-118f, 0.0f, 0.0f, 0x1.add17p-47f, 0x1.0e25dp-34f,
     0x1.0244dep-69f, 0x1.d07d66p-37f, 0x1.668bbep-56f, 0.0f, 0.0f, 0x1.97a8fap-21f,
     0x1.231b08p-3f, 0x1.d9acd4p-86f, 0x1.212784p-94f, 0.0f, 0.0f, 0x1.f70654p-43f,
     0x1.00dc06p-21f, 0x1.00b2f6p-98f, 0.0f, 0.0f, 0.0f, 0x1.23b73cp-103f,
     0x1.185798p-112f, 0.0f, 0x1.bca8d2p-70f, 0x1.8edcdp-62f, 0.0f, 0.0f, 0.0f,
     0x1.9c27ap-101f, 0x1.dc17fcp-123f, 0x1.f4747ep-90f, 0.0f, 0x1.6e272p-104f,
     0x1.4a96c6p-117f, 0x1.b77dc6p-98f, 0x1.3521eap-94f, 0.0f, 0.0f, 0x1.1ebf5p-84f,
     0x1.cc6b36p-126f, 0x1.191c88p-8f, 0x1p0f, 0x1.defb6ep-124f, 0.0f,
     0x1.86d0a2p-64f, 0.0f, 0.0f, 0x1.6c132ap-56f, 0x1.b0ff1ep-26f, 0.0f, 0.0f, 0.0f,
     0x1.d7ae36p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8dfd2p-8f, 0.0f, 0x1.d47e7p-61f,
     0.0f, 0x1.80c93ep-76f, 0x1.fe470ap-61f, 0x1.e75122p-20f, 0.0f, 0x1.83f59cp-56f,
     0.0f, 0x1.65e776p-52f, 0.0f, 0.0f, 0x1.10ebbcp-100f, 0.0f, 0.0f, 0x1.a93358p-2f,
     0x1.afeb26p-64f, 0.0f, 0.0f, 0.0f, 0x1.a03df6p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0e63ep-42f, 0x1.3e6bfcp-101f, 0x1.2a9422p-34f, 0x1.d53924p-86f,
     0x1.f0ae86p-12f, 0.0f, 0x1.27d30ap-54f, 0.0f, 0.0f, 0.0f, 0x1.f60394p-47f,
     0x1.b2e7fp-78f, 0x1.903004p-3f, 0.0f, 0.0f, 0x1.e6bad8p-98f, 0.0f, 0.0f,
     0x1.0ba59ep-40f, 0x1.09edfp-42f, 0.0f, 0.0f, 0.0f, 0x1.b64abcp-2f,
     0x1.6ceac4p-102f, 0x1.c66a5ep-77f, 0x1.e9048ep-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de66aap-122f, 0x1.ce1826p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65e9bap-5f,
     0x1.25399ap-119f, 0x1.915572p-28f, 0x1.e60db6p-126f, 0x1.d9b304p-35f, 0.0f,
     0x1.db3774p-86f, 0x1.e3aa44p-110f, 0.0f, 0.0f, 0.0f, 0x1.897c4cp-110f,
     0x1.1116ccp-89f, 0x1.46c802p-69f, 0.0f, 0x1.aeb694p-98f, 0x1.76783cp-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a9ef4p-103f, 0.0f, 0x1.1b67b6p-66f, 0.0f, 0.0f,
     0x1.7e8ebap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c956cp-5f, 0x1.5e0a9ep-38f,
     0x1.552302p-54f, 0.0f, 0x1.f5f62ep-87f, 0.0f, 0x1.9b9264p-117f, 0x1.8e3cf8p-109f,
     0x1.04f0d6p-111f, 0.0f, 0.0f, 0x1.e2703cp-3f, 0.0f, 0x1.b566bcp-64f, 0.0f,
     0x1.bd597p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b1cd2p-117f, 0x1.fe7b2ap-22f,
     0x1.dcd868p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fa6fp-16f, 0.0f, 0x1.09adc4p-13f,
     0.0f, 0.0f, 0x1.4986bep-52f, 0x1.45cfccp-1f, 0x1.ca0fd4p-33f, 0x1.a4313ep-22f,
     0x1.260f8ap-66f, 0x1.068712p-20f, 0x1.358f58p-21f, 0x1.e0477p-40f, 0.0f, 0.0f,
     0x1.9bf726p-33f, 0.0f, 0.0f, 0x1.46016cp-60f, 0x1.c6ac36p-28f, 0x1.cb0c9cp-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b113a8p-40f, 0x1.f7a31ap-22f, 0x1.afb8b8p-114f, 0.0f,
     0x1.598a88p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1db486p-125f, 0x1.48e1bp-49f, 0.0f,
     0x1.10a572p-84f, 0x1.4ceb02p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.556ffep-46f, 0.0f,
     0x1.c52886p-68f, 0.0f, 0x1.7084d8p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44617p-101f,
     0x1.6a1c68p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da9e18p-26f, 0x1.9258acp-105f, 0.0f,
     0x1.27e34ep-74f, 0.0f, 0.0f, 0.0f, 0x1.c4a982p-66f, 0x1.491ecp-19f,
     0x1.11e5bap-25f, 0.0f, 0x1.58804ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c176fep-71f,
     0x1.025292p-61f, 0.0f, 0x1.be715cp-120f, 0x1.19beeap-13f, 0.0f, 0.0f,
     0x1.e2f6c6p-19f, 0.0f, 0.0f, 0.0f, 0x1.b9ee6cp-61f, 0.0f, 0.0f, 0x1.8095e4p-6f,
     0x1.338bbcp-11f, 0x1.90946ep-1f, 0.0f, 0x1.801498p-33f, 0.0f, 0.0f,
     0x1.100f6p-98f, 0.0f, 0.0f, 0x1.73f2e8p-3f, 0x1.ec2a8p-109f, 0x1.3a4224p-53f,
     0.0f, 0.0f, 0.0f, 0x1.c87668p-64f, 0.0f, 0.0f, 0x1.b8f212p-96f, 0x1.b604fcp-47f,
     0.0f, 0.0f, 0.0f, 0x1.698dd4p-1f, 0x1p0f, 0x1.6cf548p-34f, 0.0f, 0.0f,
     0x1.4c949cp-35f, 0.0f, 0.0f, 0x1.5ba6cp-110f, 0.0f, 0x1.4c022p-27f,
     0x1.991696p-62f, 0.0f, 0x1.1ce0cap-60f, 0.0f, 0x1.abd6bp-104f, 0.0f,
     0x1.a23a04p-24f, 0x1.97f16p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6bad6p-33f,
     0x1.43d466p-76f, 0.0f, 0x1.1c9a1ap-21f, 0.0f, 0x1.938a1ap-74f, 0x1.ff8e3cp-94f,
     0.0f, 0.0f, 0x1.1ee0a8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1d942p-15f,
     0.0f, 0.0f, 0x1.d1fa32p-22f, 0x1.bc471cp-76f, 0.0f, 0x1.fa7a3cp-112f,
     0x1.0296dp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e22d7ap-46f, 0.0f, 0.0f, 0.0f,
     0x1.111722p-126f, 0.0f, 0x1.78be6p-54f, 0.0f, 0x1.115aacp-58f, 0x1.bcaa5ep-90f,
     0.0f, 0.0f, 0x1.0484b2p-14f, 0x1.e51062p-73f, 0x1.e8359p-65f, 0x1.1499e4p-91f,
     0x1.fcbacap-10f, 0.0f, 0.0f, 0x1.13014p-43f, 0.0f, 0x1.08b284p-16f, 0.0f, 0.0f,
     0.0f, 0x1.8bfe1ep-35f, 0.0f, 0x1.fccb3cp-61f, 0.0f, 0x1.6cc22cp-27f, 0.0f, 0.0f,
     0x1.54ff54p-52f, 0x1.4f8b88p-2f, 0x1.a8bb7cp-11f, 0.0f, 0x1.9beb12p-90f, 0.0f,
     0x1.ae447ep-72f, 0x1.46a04ap-7f, 0.0f, 0x1.147caep-79f, 0x1.b5671cp-22f,
     0x1.5ea1cap-86f, 0.0f, 0.0f, 0.0f, 0x1.b267eap-54f, 0.0f, 0.0f, 0.0f,
     0x1.e1cb3ap-22f, 0.0f, 0x1.761c46p-23f, 0x1.950e8ep-18f, 0x1.549784p-108f,
     0x1.0edbc8p-119f, 0.0f, 0x1.4161b4p-25f, 0.0f, 0x1.0d7032p-69f, 0.0f, 0.0f,
     0x1.d4a3acp-9f, 0x1.df02ecp-8f, 0x1.f1fad2p-117f, 0x1.cace38p-34f, 0.0f,
     0x1.8e2682p-13f, 0x1.5f7c2cp-54f, 0.0f, 0x1.284c5cp-86f, 0x1.29dc8ap-111f, 0.0f,
     0.0f, 0x1.754836p-94f, 0.0f, 0x1.63ddd2p-67f, 0x1.c345cp-107f, 0x1.3517bep-53f,
     0.0f, 0x1.2071dcp-24f, 0.0f, 0.0f, 0.0f, 0x1.413336p-106f, 0x1.c0dfc6p-17f,
     0x1.86e49p-17f, 0.0f, 0.0f, 0x1.c6ff44p-5f, 0.0f, 0x1.f9a6d4p-118f, 0.0f, 0.0f,
     0x1.ec84f6p-63f, 0x1.3a0f52p-39f, 0.0f, 0x1.b839cp-50f, 0x1.492ee2p-34f, 0.0f,
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
            tmp1 = Sleef_finz_tanhf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_tanhf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhf1_u35purecfma bench acc %a\n", global_bench_acc);
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
