/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospif1_u05purecfma.c --function \
 *     Sleef_cospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.6a06e2p-8f, 0.0f, 0x1.b05c24p-68f, 0.0f, 0x1.78de82p-53f, 0.0f,
     0x1.43ed9p-44f, 0x1.eac6ccp-14f, 0x1.603e7ep-106f, 0x1.a985bp-38f, 0.0f,
     0x1.73199ep-112f, 0.0f, 0.0f, 0.0f, 0x1.41bc74p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ccb9cep-20f, 0.0f, 0.0f, 0.0f, 0x1.70290cp-54f, 0.0f, 0.0f, 0x1.48c6d8p-41f,
     0x1.f065e8p-74f, 0x1.8e5554p-92f, 0x1.db45f4p-115f, 0.0f, 0x1.eac42cp-50f,
     0x1.22978ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca5e28p-33f, 0x1.4ec868p-20f,
     0.0f, 0x1.beb7a6p-26f, 0x1.cb3c5cp-104f, 0.0f, 0.0f, 0x1.4984e4p-5f,
     0x1.2910cep-7f, 0x1.4a352p-18f, 0.0f, 0x1.449ee2p-122f, 0x1.7c4b92p-56f,
     0x1.9b7606p-69f, 0x1.a32b4ep-85f, 0.0f, 0.0f, 0x1.92e952p-99f, 0.0f, 0.0f,
     0x1.4e4aecp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fa6ap-108f, 0x1.7e7442p-70f,
     0x1.c3cfecp-67f, 0.0f, 0x1.01949cp-107f, 0.0f, 0x1.2b6e5ap-108f,
     0x1.b8540cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3834a6p-115f,
     0x1.eb1f68p-48f, 0.0f, 0x1.793394p-123f, 0x1.ae63c6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0dd2e8p-29f, 0.0f, 0.0f, 0x1.12e916p-6f, 0x1.6ae932p-23f,
     0x1.044fb6p-114f, 0.0f, 0.0f, 0x1.8cd0acp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f60128p-61f, 0.0f, 0.0f, 0.0f, 0x1.6364ccp-22f, 0.0f, 0x1.11c18ep-94f, 0.0f,
     0.0f, 0.0f, 0x1.faed62p-68f, 0.0f, 0x1.02ae0ap-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76e08ap-95f, 0x1.fb1dd2p-122f, 0.0f, 0.0f, 0.0f, 0x1.8e378ep-53f,
     0x1.cf091p-25f, 0.0f, 0x1.ae8e22p-10f, 0.0f, 0.0f, 0.0f, 0x1.05d5b6p-28f, 0.0f,
     0x1.d1d9c2p-26f, 0.0f, 0.0f, 0x1.4f232cp-116f, 0.0f, 0x1.033434p-79f,
     0x1.d94ec6p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b94cap-8f, 0x1.34ed9ap-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.feeeap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d61236p-76f, 0.0f, 0.0f, 0x1.32bf0cp-92f, 0x1.67b768p-89f, 0x1.121608p-73f,
     0.0f, 0.0f, 0x1.e02b42p-88f, 0.0f, 0x1.26bfbap-41f, 0x1.02a002p-39f,
     0x1.4a1d48p-8f, 0x1.40cde2p-42f, 0.0f, 0.0f, 0x1.4329b6p-102f, 0x1.f1a33p-2f,
     0.0f, 0.0f, 0.0f, 0x1.788f62p-81f, 0x1.d35274p-65f, 0x1.73a064p-87f, 0x1p0f,
     0x1.04d76cp-84f, 0x1.130ae2p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a3a28p-25f,
     0x1.c66c16p-126f, 0.0f, 0.0f, 0.0f, 0x1.41783ap-103f, 0x1.be4a62p-23f,
     0x1.c88876p-105f, 0x1.5f1d0ap-112f, 0x1.d8d2dcp-4f, 0x1.a79826p-5f, 0.0f, 0.0f,
     0.0f, 0x1.83e948p-4f, 0.0f, 0x1.d2d65ep-56f, 0.0f, 0x1.cdc6a4p-56f, 0.0f,
     0x1.1a5e06p-10f, 0.0f, 0.0f, 0x1.80a034p-14f, 0.0f, 0.0f, 0.0f, 0x1.47af84p-104f,
     0x1.9599fcp-39f, 0.0f, 0x1.d5d532p-58f, 0x1.f787c4p-66f, 0x1.0a9df8p-99f, 0.0f,
     0.0f, 0.0f, 0x1.e1dc3cp-52f, 0x1.b3c898p-121f, 0x1.711254p-118f, 0.0f, 0.0f,
     0.0f, 0x1.7905fcp-103f, 0.0f, 0x1.2aa68ep-54f, 0x1.7b89a2p-98f, 0x1.3ba77ep-117f,
     0x1.b4cacep-67f, 0.0f, 0x1.ae78e6p-14f, 0x1.2adbdcp-114f, 0.0f, 0x1.fcd348p-51f,
     0x1.080a3cp-32f, 0.0f, 0x1.f765dap-46f, 0x1.07127ap-114f, 0x1.b7a5cp-100f,
     0x1.4d885ap-109f, 0.0f, 0.0f, 0x1.41dd86p-82f, 0x1.7bac8p-50f, 0x1.ec282p-11f,
     0.0f, 0.0f, 0x1.464ffap-112f, 0x1.2cadb8p-121f, 0x1.6d041p-105f, 0.0f,
     0x1.989ccep-64f, 0.0f, 0x1.ae22d4p-102f, 0x1.5e487ap-80f, 0x1.e1c948p-96f,
     0x1p0f, 0.0f, 0x1.7641d6p-90f, 0x1.f414d4p-33f, 0x1.b3435ap-117f,
     0x1.c8e8aep-123f, 0.0f, 0.0f, 0x1.50c7bcp-120f, 0x1.c8dd1ep-89f, 0.0f, 0.0f,
     0x1.5cc8eep-105f, 0.0f, 0x1.d44854p-93f, 0x1.c2018ep-104f, 0x1.63e004p-113f,
     0x1.8af164p-90f, 0x1.353492p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18780ap-123f, 0.0f, 0x1.8907fep-92f, 0.0f, 0x1.2fd274p-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c91714p-6f, 0x1.eb5518p-81f, 0.0f, 0.0f, 0x1.86bc4ep-5f,
     0x1.bf143cp-20f, 0x1.7c35d2p-23f, 0.0f, 0x1.2824f6p-94f, 0.0f, 0.0f,
     0x1.006dd2p-4f, 0.0f, 0x1.39c3dep-112f, 0.0f, 0x1.a3918ap-48f, 0x1.55d05ep-42f,
     0x1.080cbp-50f, 0x1.77f334p-8f, 0x1.908dap-38f, 0x1.4fc354p-10f, 0x1.151e3cp-30f,
     0.0f, 0.0f, 0x1.5d736p-50f, 0.0f, 0x1.11eac8p-24f, 0x1.aaafd4p-35f,
     0x1.7988c2p-20f, 0x1.9bcc18p-24f, 0x1.19eff6p-2f, 0.0f, 0x1.106874p-31f, 0.0f,
     0x1.b025eep-33f, 0.0f, 0.0f, 0x1.d5d1f6p-61f, 0x1.86ba6ep-106f, 0x1.1c6138p-46f,
     0.0f, 0x1.c5de1ap-120f, 0.0f, 0x1.6a9818p-59f, 0.0f, 0.0f, 0x1.aedb4cp-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.80e58cp-11f, 0x1.c62e08p-28f, 0x1.bce1f8p-83f,
     0x1.1039fp-45f, 0x1.e9f25ap-92f, 0x1.cf2252p-121f, 0x1.87711p-67f,
     0x1.7849cap-109f, 0.0f, 0.0f, 0.0f, 0x1.46ce06p-11f, 0x1.d5a38cp-40f,
     0x1.a9d7ap-86f, 0.0f, 0x1.149b2p-42f, 0.0f, 0.0f, 0x1.94589ep-65f,
     0x1.b79588p-56f, 0x1.c3aae2p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bafb8ep-113f, 0x1.658e04p-22f, 0.0f, 0.0f, 0x1.f69f94p-88f,
     0x1.ec86cap-28f, 0.0f, 0x1.c3119cp-92f, 0x1.4180f6p-5f, 0x1.763bbp-61f,
     0x1.b3c7bap-115f, 0x1.5ec76cp-86f, 0x1.4d30f6p-27f, 0.0f, 0x1.f5c952p-58f, 0.0f,
     0.0f, 0x1.03267cp-122f, 0.0f, 0.0f, 0x1.a4855p-70f, 0x1.37d8f8p-84f, 0.0f, 0.0f,
     0x1.ec07ap-76f, 0x1.a5563cp-66f, 0x1.6370f2p-59f, 0x1.5b318ep-65f,
     0x1.4a5ddp-106f, 0.0f, 0.0f, 0.0f, 0x1.77cdbp-98f, 0.0f, 0.0f, 0x1.2b87b2p-100f,
     0.0f, 0x1.358e7p-98f, 0x1.4ada7ap-114f, 0x1.1ec57p-56f, 0x1.9482c4p-92f,
     0x1.d9b84p-70f, 0x1.ce5aap-78f, 0x1.9cc58cp-36f, 0x1.57828ep-39f, 0.0f, 0.0f,
     0.0f, 0x1.fce46cp-29f, 0x1.3cb59ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cafdc2p-29f,
     0.0f, 0.0f, 0.0f, 0x1.474d6p-119f, 0x1.1ba196p-114f, 0x1.279458p-111f,
     0x1.76b46p-39f, 0.0f, 0x1.b1137cp-54f, 0x1.3e830cp-119f, 0x1.9ba7e6p-45f, 0.0f,
     0x1.aa8c68p-47f, 0.0f, 0x1.8fcb18p-117f, 0.0f, 0.0f, 0.0f, 0x1.94e812p-26f,
     0x1.f1a90ep-54f, 0x1.b1e004p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43fe44p-78f,
     0x1.1e69a4p-103f, 0.0f, 0.0f, 0.0f, 0x1.24d79cp-46f, 0.0f, 0x1.c6d728p-74f,
     0x1.c61a3p-34f, 0x1.148e24p-62f, 0x1.787d52p-117f, 0x1.d3688cp-28f,
     0x1.555f1cp-114f, 0x1.c26ad2p-24f, 0.0f, 0x1.6f7d3cp-23f, 0.0f, 0x1.a6aa4ep-124f,
     0.0f, 0x1.b4c68ap-29f, 0x1.e98f88p-117f, 0.0f, 0x1.824cb4p-5f, 0.0f,
     0x1.8562c6p-110f, 0.0f, 0x1.353226p-39f, 0.0f, 0.0f, 0x1.b499a8p-45f,
     0x1.d18096p-19f, 0x1.bc544p-22f, 0.0f, 0x1.551bd6p-40f, 0.0f, 0.0f,
     0x1.d3522ap-78f, 0x1.dd5a5ap-69f, 0x1.a95e8cp-30f, 0x1.d3d7b4p-74f,
     0x1.5d5f08p-41f, 0.0f, 0x1.6887dcp-101f, 0x1.539406p-69f, 0x1.56cef4p-120f, 0.0f,
     0.0f, 0.0f, 0x1.664582p-6f, 0.0f, 0x1.278f7ap-14f, 0.0f, 0x1.7a9a46p-63f, 0.0f,
     0x1.486128p-56f, 0x1.8a492cp-99f, 0.0f, 0x1.84ed1p-40f, 0.0f, 0x1.1c6faap-116f,
     0x1.cbacecp-12f, 0x1.432de8p-27f, 0x1.52cae6p-95f, 0x1.a1ad96p-42f, 0.0f, 0.0f,
     0x1.83092ap-124f, 0x1.c00462p-7f, 0x1.0124e2p-125f, 0x1.dc7494p-20f, 0.0f,
     0x1.949cc8p-101f, 0.0f, 0.0f, 0x1.fca4eep-46f, 0x1.79ebd2p-65f, 0x1.d0802ap-80f,
     0x1.762fbcp-33f, 0.0f, 0x1.0bb70cp-96f, 0.0f, 0x1.fa3b14p-47f, 0.0f,
     0x1.6d875ap-78f, 0x1.7a5914p-73f, 0x1.f88a86p-15f, 0.0f, 0x1.25ec82p-8f,
     0x1.7e4b26p-17f, 0x1.3a6858p-94f, 0.0f, 0x1.28fe88p-38f, 0.0f, 0.0f, 0.0f,
     0x1.555b64p-108f, 0.0f, 0.0f, 0.0f, 0x1.7d479cp-65f, 0.0f, 0.0f, 0.0f,
     0x1.adced8p-1f, 0.0f, 0.0f, 0.0f, 0x1.2d5f4ap-61f, 0.0f, 0x1.513f42p-70f, 0.0f,
     0.0f, 0.0f, 0x1.22d816p-10f, 0x1.00888p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f93ecp-20f, 0x1.66ede4p-110f, 0x1.1eb62cp-82f, 0x1.addf96p-22f,
     0x1.5d1802p-52f, 0x1.e5ea6ep-105f, 0x1.cefdecp-74f, 0x1.e095b6p-84f, 0.0f,
     0x1.f91f86p-115f, 0x1.3a1c48p-92f, 0.0f, 0x1.80340ep-46f, 0x1.065ac4p-49f,
     0x1.0e7ae8p-122f, 0.0f, 0x1.4e8d5ap-43f, 0.0f, 0x1.e8653ep-69f, 0.0f,
     0x1.77941ep-28f, 0.0f, 0.0f, 0.0f, 0x1.b58b9cp-54f, 0.0f, 0x1.0d0b26p-15f, 0.0f,
     0x1.a27eacp-91f, 0x1.e62152p-14f, 0.0f, 0.0f, 0.0f, 0x1.526904p-56f,
     0x1.5dfba4p-45f, 0.0f, 0.0f, 0.0f, 0x1.fc957ep-79f, 0.0f, 0.0f, 0x1.9fc9dap-64f,
     0.0f, 0x1.98f3f2p-58f, 0x1.b5355ep-21f, 0x1.f89f22p-69f, 0.0f, 0.0f,
     0x1.7cdc6cp-35f, 0.0f, 0.0f, 0.0f, 0x1.140f58p-82f, 0x1.1d476ap-83f,
     0x1.dfa3c4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.716f4ep-21f,
     0x1.688588p-115f, 0x1.027932p-118f, 0.0f, 0x1.6d5e9p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.828c16p-63f, 0x1.41eebap-63f, 0.0f, 0x1.972ap-66f, 0x1.4d8e14p-66f,
     0x1.66fd52p-48f, 0.0f, 0.0f, 0x1.f88988p-8f, 0.0f, 0x1.d71be2p-119f, 0.0f,
     0x1.f05312p-47f, 0x1.e79c8cp-84f, 0.0f, 0x1.2376b4p-124f, 0.0f, 0.0f, 0.0f,
     0x1.f597acp-26f, 0x1.14e10ap-116f, 0x1p0f, 0x1.c652dap-64f, 0x1.aa0978p-45f,
     0.0f, 0x1.02e534p-68f, 0x1.c1f056p-107f, 0.0f, 0x1.3bca9ap-123f, 0x1.ac6d8cp-89f,
     0x1.71d202p-77f, 0.0f, 0.0f, 0x1.1af6f4p-91f, 0.0f, 0x1.133ddap-53f,
     0x1.f9640ep-65f, 0.0f, 0x1.4ec582p-113f, 0x1.53f76ap-72f, 0.0f, 0.0f,
     0x1.25617p-107f, 0.0f, 0x1.b36d96p-6f, 0.0f, 0.0f, 0x1.5d1ff6p-103f, 0.0f, 0.0f,
     0.0f, 0x1.4993a4p-54f, 0x1.81e6cp-83f, 0.0f, 0x1.a81d2ap-104f, 0x1.937ffep-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.20282ap-8f, 0.0f, 0.0f, 0x1.836446p-51f, 0.0f, 0.0f,
     0x1.e157f6p-96f, 0x1p0f, 0x1.b5f272p-86f, 0x1.beced8p-60f, 0.0f, 0.0f,
     0x1.d41ee2p-80f, 0x1.747f2ap-72f, 0x1.9a406ep-34f, 0.0f, 0.0f, 0x1.ffdec4p-60f,
     0x1.ccd91ap-95f, 0.0f, 0.0f, 0x1.79a6dep-39f, 0.0f, 0x1.eced0ap-89f, 0.0f,
     0x1.7d6c5ep-102f, 0x1.0b677ap-57f, 0.0f, 0.0f, 0x1.c13ba2p-91f, 0.0f,
     0x1.e53f7cp-50f, 0.0f, 0.0f, 0.0f, 0x1.ad073ep-32f, 0x1.dd8e38p-46f, 0.0f,
     0x1.de639ep-90f, 0.0f, 0.0f, 0x1.a69cc8p-81f, 0x1.6bc962p-115f, 0.0f,
     0x1.986572p-15f, 0.0f, 0.0f, 0x1.b8b876p-124f, 0x1.9c6d1cp-7f, 0x1.ef1658p-40f,
     0x1.03ef3ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fd9cap-31f, 0.0f, 0x1.d96552p-118f,
     0.0f, 0x1.699f5ap-106f, 0x1.1fb0a6p-103f, 0x1.df21aep-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1a60cap-85f, 0x1.ff36dp-58f, 0.0f, 0x1.624dfap-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cad704p-83f, 0.0f, 0.0f, 0x1.201e1ap-69f, 0x1.06f622p-41f,
     0.0f, 0x1.e0a56cp-66f, 0x1.05adf6p-104f, 0x1.3eb3f6p-125f, 0.0f, 0x1.c09fdp-110f,
     0.0f, 0x1.9162c6p-17f, 0.0f, 0x1.1c8e72p-75f, 0x1.341d1cp-94f, 0x1.df34a2p-14f,
     0x1.010e3ep-81f, 0x1.a3f1c4p-103f, 0x1.73488ap-118f, 0x1.42b182p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.03eb6p-115f, 0x1.71835ep-25f, 0.0f, 0.0f, 0x1.310aeap-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.945cb8p-68f, 0.0f, 0x1.c48e8p-95f,
     0x1.5c8a88p-112f, 0.0f, 0.0f, 0x1.d0aa78p-98f, 0x1p0f, 0.0f, 0x1.546718p-31f,
     0x1.77019ep-112f, 0x1.e719b2p-124f, 0.0f, 0x1.8aaadp-40f, 0.0f, 0x1.1bb6p-24f,
     0.0f, 0x1.72928cp-13f, 0x1.e81ca4p-74f, 0.0f, 0x1.9c694ep-104f, 0x1.3fb898p-47f,
     0x1.dcb46p-108f, 0.0f, 0.0f, 0x1.dc370ap-47f, 0.0f, 0.0f, 0x1.9f4902p-4f, 0.0f,
     0x1.626028p-93f, 0.0f, 0.0f, 0x1.5b8de2p-63f, 0x1.a99a0cp-26f, 0.0f, 0.0f, 0.0f,
     0x1.c9c2f8p-3f, 0.0f, 0.0f, 0x1.080cfcp-44f, 0x1.da1d62p-87f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aacd78p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6de418p-11f, 0x1.1beb1ep-35f, 0.0f, 0.0f, 0.0f, 0x1.8b4a8ep-99f, 0.0f, 0.0f,
     0x1.d4f5ep-120f, 0.0f, 0x1.86935ap-57f, 0x1.d1339ap-89f, 0x1.587f62p-76f, 0.0f,
     0.0f, 0.0f, 0x1.983612p-23f, 0.0f, 0x1.47aefp-16f, 0.0f, 0.0f, 0x1.e5f31cp-31f,
     0x1.7b7d2cp-61f, 0.0f, 0.0f, 0x1.8c6c54p-20f, 0x1.752f76p-100f, 0x1.33400cp-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cf57ap-24f, 0.0f, 0x1.5313b4p-11f,
     0x1.8d5d9cp-110f, 0x1.5bfe4ap-55f, 0.0f, 0.0f, 0x1.389b7p-28f, 0x1.f38de6p-118f,
     0.0f, 0x1.6d4c38p-15f, 0.0f, 0x1.c07698p-120f, 0x1.1182f2p-97f, 0x1.27f994p-24f,
     0.0f, 0.0f, 0x1.86f982p-33f, 0x1.108ebcp-28f, 0x1.b9dfa8p-19f, 0.0f, 0.0f,
     0x1.14ddd6p-12f, 0x1.194948p-80f, 0x1.1cd952p-70f, 0.0f, 0.0f, 0.0f,
     0x1.66fb42p-57f, 0x1.523206p-29f, 0.0f, 0.0f, 0.0f, 0x1.ba3b4cp-14f,
     0x1.f2196cp-119f, 0x1.67e22cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.033774p-14f,
     0x1.83a2d2p-115f, 0x1.ba7b8cp-11f, 0.0f, 0x1.1ba568p-77f, 0x1.2924ecp-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec2b72p-68f, 0x1.680432p-2f, 0x1.e658a2p-75f,
     0x1.00aaf8p-26f, 0x1.cadcb6p-119f, 0x1.465314p-14f, 0.0f, 0.0f, 0.0f,
     0x1.92074ap-115f, 0.0f, 0x1.a0d29ep-85f, 0x1.a87a56p-94f, 0.0f, 0x1.70e6c6p-10f,
     0.0f, 0.0f, 0x1.412982p-79f, 0x1.f2a492p-107f, 0x1.accdbap-124f, 0.0f,
     0x1.c46fd8p-47f, 0.0f, 0.0f, 0x1.85a80cp-44f, 0x1.3e220ep-48f, 0.0f, 0.0f,
     0x1.59dbfap-13f, 0.0f, 0x1.5fd192p-31f, 0.0f, 0x1.62951p-79f, 0.0f,
     0x1.051efap-50f, 0.0f, 0.0f, 0x1.f1836cp-103f
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
            tmp1 = Sleef_cospif1_u05purecfma(tmp0);
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
    printf("Sleef_cospif1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cospif1_u05purecfma bench acc %a\n", global_bench_acc);
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
