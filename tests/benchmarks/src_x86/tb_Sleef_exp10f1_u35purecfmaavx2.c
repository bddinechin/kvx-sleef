/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f1_u35purecfma.c --function \
 *     Sleef_exp10f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.e0277p-41f, 0.0f, 0x1.52388ap-40f, 0x1.5d0686p-105f, 0.0f, 0.0f, 0.0f,
     0x1.073f8ep-82f, 0x1.d2dc22p-30f, 0x1.0e6b42p-114f, 0x1.156204p-75f, 0.0f, 0.0f,
     0.0f, 0x1.4ca12ap-19f, 0x1.67e862p-63f, 0x1.5da51ap-20f, 0x1.539f36p-54f,
     0x1.a414acp-109f, 0x1.002fb6p-42f, 0x1.af6384p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aabb7cp-100f, 0.0f, 0x1.81375ep-53f, 0x1.5d34ecp-115f,
     0x1.54470ep-111f, 0.0f, 0.0f, 0x1.9ca61ap-31f, 0.0f, 0.0f, 0x1.69e152p-83f, 0.0f,
     0x1.7d8482p-91f, 0x1.ef365cp-106f, 0x1.8aac46p-115f, 0x1.cf8a9p-98f,
     0x1.e7f1a2p-55f, 0.0f, 0.0f, 0x1.24f9bep-11f, 0x1.0a07fcp-41f, 0x1.9cee08p-78f,
     0x1.a52fcap-33f, 0x1.98f30ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfa7c8p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee3242p-30f, 0x1.073b28p-57f, 0.0f, 0.0f,
     0x1.f1527p-106f, 0x1.1f9cdcp-109f, 0.0f, 0.0f, 0x1.ecbd4cp-92f, 0.0f, 0.0f,
     0x1.ad0a5ep-5f, 0x1.6ebf66p-64f, 0x1.3c64f8p-29f, 0x1.3fda44p-119f,
     0x1.3f079ep-114f, 0x1.8df1aep-39f, 0x1.10d0cp-52f, 0x1.cd66f8p-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.089afcp-80f, 0x1.7e0ea8p-78f, 0.0f, 0.0f, 0x1.e6b74p-101f,
     0.0f, 0x1.c8d4a4p-11f, 0x1.d1160ep-90f, 0.0f, 0.0f, 0x1.9499fep-63f,
     0x1.b86f42p-17f, 0.0f, 0x1.f78abp-31f, 0.0f, 0.0f, 0.0f, 0x1.67949ep-125f,
     0x1.b7cc86p-27f, 0x1.09c868p-39f, 0.0f, 0.0f, 0.0f, 0x1.a93d98p-47f, 0.0f,
     0x1.692232p-74f, 0.0f, 0x1.43d64p-86f, 0.0f, 0x1.f2b46p-23f, 0x1.da421cp-95f,
     0.0f, 0x1.1fe092p-46f, 0x1.1fe6c6p-87f, 0x1.94cbd8p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.371b3ap-90f, 0.0f, 0.0f, 0.0f, 0x1.4c16b4p-95f, 0.0f, 0x1.45c632p-94f,
     0x1.10bf04p-86f, 0.0f, 0.0f, 0.0f, 0x1.619cb4p-65f, 0x1.1ef046p-14f,
     0x1.f97018p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53aab4p-90f, 0x1.007d78p-82f, 0.0f,
     0.0f, 0.0f, 0x1.fd842ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50dedcp-98f, 0.0f,
     0.0f, 0.0f, 0x1.e110ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f6a12p-26f,
     0x1.0f7e78p-96f, 0x1.ef35dp-47f, 0x1.e8516p-92f, 0.0f, 0x1.7fa832p-118f, 0.0f,
     0x1.9d6634p-38f, 0.0f, 0x1.f33b1ap-100f, 0.0f, 0x1.be5a84p-18f, 0.0f,
     0x1.ef094p-65f, 0.0f, 0.0f, 0x1.6c4844p-109f, 0.0f, 0.0f, 0x1.02f47ap-52f,
     0x1.2338ep-68f, 0x1.d8b964p-92f, 0x1.ff743ap-28f, 0x1.0b5b9cp-83f, 0.0f, 0.0f,
     0x1.d7e456p-103f, 0.0f, 0.0f, 0.0f, 0x1.34a7aep-110f, 0x1.c7c256p-126f,
     0x1.af40dap-52f, 0.0f, 0x1.a28f3cp-87f, 0x1.f03b86p-118f, 0.0f, 0x1.ee67cap-100f,
     0.0f, 0.0f, 0x1.c424c4p-74f, 0.0f, 0x1.32cda8p-20f, 0x1.38c322p-65f, 0.0f,
     0x1.868312p-121f, 0x1.ff866cp-12f, 0.0f, 0.0f, 0x1.76c39ap-44f, 0x1.dfa1dcp-77f,
     0.0f, 0x1.c8af4p-27f, 0.0f, 0x1.d55a5p-21f, 0x1.e97198p-82f, 0.0f,
     0x1.ac8e42p-6f, 0.0f, 0.0f, 0x1.036354p-64f, 0.0f, 0x1.863288p-12f,
     0x1.a9f1ap-66f, 0x1.deedc4p-59f, 0.0f, 0x1.bac76ap-79f, 0.0f, 0.0f,
     0x1.aa5e8ap-47f, 0x1.69ad66p-122f, 0x1.92ea68p-15f, 0.0f, 0.0f, 0.0f,
     0x1.0030f4p-96f, 0x1.333502p-19f, 0.0f, 0.0f, 0x1.03f93p-8f, 0.0f,
     0x1.5eb5bap-29f, 0x1.6c6674p-39f, 0x1.666418p-37f, 0x1.8fcba6p-89f,
     0x1.0bbc0ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edba22p-97f, 0.0f, 0x1.40665ep-68f,
     0x1.0d2552p-49f, 0.0f, 0.0f, 0x1.49643ap-98f, 0x1.25b98ap-66f, 0x1.2fd454p-73f,
     0.0f, 0x1.770e72p-16f, 0.0f, 0.0f, 0x1.086d1ap-46f, 0x1.9a68e4p-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0eb8fep-38f, 0.0f, 0.0f, 0x1.48125p-73f, 0.0f,
     0x1.3abb68p-50f, 0.0f, 0.0f, 0x1.02e628p-96f, 0x1.af6a94p-22f, 0.0f, 0.0f,
     0x1.966d9ep-68f, 0.0f, 0.0f, 0x1.770508p-76f, 0x1.b36448p-104f, 0.0f, 0.0f, 0.0f,
     0x1.2e3dfap-48f, 0.0f, 0.0f, 0x1.563878p-16f, 0x1.afe956p-84f, 0x1.1d8d26p-122f,
     0x1.9514ap-90f, 0x1.4addaap-79f, 0.0f, 0.0f, 0.0f, 0x1.77091p-84f,
     0x1.83078ep-75f, 0.0f, 0.0f, 0x1.426e22p-118f, 0.0f, 0x1.d289c4p-31f, 0.0f,
     0x1.b21a56p-11f, 0.0f, 0x1.760f34p-7f, 0.0f, 0x1.ca2aa4p-87f, 0.0f,
     0x1.683d6ep-64f, 0x1p0f, 0x1.9b93e4p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e9dcep-96f, 0.0f, 0.0f, 0.0f, 0x1.da9a64p-125f, 0.0f, 0.0f, 0x1.d83238p-82f,
     0.0f, 0x1.e8b73ap-26f, 0.0f, 0.0f, 0x1.2291cap-99f, 0x1.d1b89ap-28f,
     0x1.f21184p-104f, 0.0f, 0x1.49a4ap-113f, 0x1.8a1c26p-106f, 0.0f, 0.0f,
     0x1.5e6f0ep-79f, 0.0f, 0x1.1ac24p-52f, 0x1.f74906p-64f, 0x1.dfbe84p-33f,
     0x1.7efb3ep-57f, 0x1.94cfecp-81f, 0.0f, 0x1.1cafccp-48f, 0.0f, 0.0f,
     0x1.993cb4p-58f, 0x1.f87e6ap-102f, 0x1.e48a64p-105f, 0.0f, 0x1.54ea3ap-1f,
     0x1.9396c4p-78f, 0x1.208caap-121f, 0x1p0f, 0x1.2a30bep-113f, 0x1.ffc5p-7f,
     0x1.377274p-81f, 0.0f, 0x1.009c2ep-117f, 0x1.60d532p-55f, 0.0f, 0x1.ef30eep-6f,
     0x1.4c625ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.281522p-5f, 0x1.1b371ep-12f,
     0x1.8d217p-117f, 0.0f, 0x1.e672c4p-47f, 0.0f, 0x1.e9204p-25f, 0x1.2a9b9ap-91f,
     0.0f, 0x1.ef6b9ap-122f, 0.0f, 0.0f, 0.0f, 0x1.dd514ap-28f, 0.0f, 0x1.cdc546p-7f,
     0.0f, 0x1.1227dp-63f, 0x1.f0a3e2p-122f, 0.0f, 0.0f, 0x1.c33992p-33f, 0.0f, 0.0f,
     0.0f, 0x1.9e2d8ap-20f, 0.0f, 0x1.89a292p-124f, 0x1.0d0d28p-10f, 0.0f,
     0x1.4141a8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83b254p-12f, 0x1.3b76b2p-35f, 0.0f,
     0.0f, 0x1.fa7e4ap-27f, 0.0f, 0.0f, 0.0f, 0x1.448ed8p-74f, 0.0f, 0x1.06c692p-53f,
     0.0f, 0x1.909d1ep-9f, 0.0f, 0x1.3c9ap-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01e4aep-97f, 0.0f, 0x1.4b893ap-18f, 0x1.66189p-58f, 0x1.d6cc8p-84f, 0.0f,
     0x1.2a1464p-77f, 0x1.708e3ep-60f, 0x1.6d784p-12f, 0x1.11745p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4f4a2ap-102f, 0x1.cbbd72p-61f, 0x1.7588e4p-63f,
     0x1.fe765p-117f, 0x1.868fa4p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60c89ep-99f, 0.0f,
     0x1.459bap-120f, 0x1.cd4386p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2474ap-13f,
     0.0f, 0x1.c17a4ep-126f, 0.0f, 0x1.ce7e88p-124f, 0x1.62b192p-78f,
     0x1.0a8b7ep-105f, 0.0f, 0x1.449fc4p-99f, 0.0f, 0x1.e3c0e2p-31f, 0x1.6c9bap-112f,
     0.0f, 0.0f, 0.0f, 0x1.3d6b52p-109f, 0.0f, 0x1.a9f254p-62f, 0x1.e1a0fp-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8fa6ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d08b6p-69f,
     0x1.10c0a2p-85f, 0x1.135eacp-100f, 0.0f, 0x1.d992f6p-38f, 0x1.ea670ap-83f, 0.0f,
     0.0f, 0x1.703b3ap-3f, 0x1.ef7ed2p-66f, 0.0f, 0.0f, 0x1.fb36p-6f, 0.0f, 0.0f,
     0.0f, 0x1.98e246p-41f, 0.0f, 0x1.8f0d96p-79f, 0x1.e46e5ep-15f, 0x1.2b266cp-16f,
     0x1.dcf6bep-76f, 0.0f, 0.0f, 0x1.4d5fc6p-118f, 0x1.26531ap-54f, 0.0f, 0.0f,
     0x1.65b80ap-16f, 0.0f, 0.0f, 0x1.ceee04p-24f, 0x1.71e6ecp-47f, 0.0f,
     0x1.157f62p-125f, 0.0f, 0x1.017faep-97f, 0x1.99b4cp-85f, 0.0f, 0x1.a28b56p-44f,
     0.0f, 0x1.04394ap-22f, 0x1.54c612p-44f, 0x1.478886p-23f, 0x1.49e53cp-100f, 0.0f,
     0.0f, 0x1.29e9fp-2f, 0x1.47da22p-93f, 0x1.1b257cp-86f, 0x1.bd1ae6p-28f, 0.0f,
     0x1.fe0532p-64f, 0.0f, 0x1.504182p-72f, 0.0f, 0x1.b4786ep-44f, 0x1.b010ecp-26f,
     0.0f, 0x1.447a44p-74f, 0.0f, 0.0f, 0.0f, 0x1.d76e7cp-29f, 0x1.e01f3cp-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49d90ep-106f, 0.0f, 0.0f, 0.0f,
     0x1.96b616p-52f, 0.0f, 0.0f, 0x1.d89f82p-63f, 0x1.326c72p-25f, 0.0f,
     0x1.8e3292p-68f, 0x1.808438p-33f, 0.0f, 0.0f, 0.0f, 0x1.267ec6p-17f,
     0x1.a10bp-41f, 0.0f, 0x1.ebe018p-85f, 0.0f, 0x1.3ea44p-46f, 0.0f, 0.0f,
     0x1.826788p-43f, 0x1.c8fb12p-30f, 0x1.25b078p-115f, 0.0f, 0x1.b390a6p-29f,
     0x1.07138cp-112f, 0x1.56da1ep-110f, 0x1.4d2a8p-23f, 0x1.3131c4p-72f, 0.0f, 0.0f,
     0x1.ba7194p-9f, 0x1.8ba996p-28f, 0.0f, 0x1.aaaf6ap-49f, 0x1.fd289cp-82f, 0.0f,
     0.0f, 0x1.f65b38p-24f, 0x1.adabe2p-58f, 0.0f, 0x1.e44164p-54f, 0x1.3f75aep-69f,
     0.0f, 0x1.8c13c8p-47f, 0.0f, 0x1.79fd6p-36f, 0x1.4acb26p-52f, 0x1.e803eap-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.339a5ep-88f, 0.0f, 0.0f, 0.0f, 0x1.8b1448p-96f,
     0.0f, 0x1.67d3b6p-12f, 0x1.c31796p-27f, 0.0f, 0.0f, 0x1.f492b2p-81f,
     0x1.06315ap-6f, 0.0f, 0x1.08d6fp-26f, 0.0f, 0x1.91fd14p-108f, 0x1.333f36p-118f,
     0x1.764feap-60f, 0x1.e823b4p-123f, 0.0f, 0.0f, 0x1.7fbf9cp-67f, 0x1.939584p-84f,
     0x1.3d2d82p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04e304p-56f, 0x1.4ecf02p-60f,
     0.0f, 0.0f, 0.0f, 0x1.ef8dbap-19f, 0.0f, 0x1.017a9cp-57f, 0.0f, 0x1.f0eef4p-116f,
     0.0f, 0x1.5ac15cp-63f, 0.0f, 0.0f, 0.0f, 0x1.48cb64p-89f, 0.0f, 0x1.b8f01cp-53f,
     0x1.de03a4p-102f, 0.0f, 0x1.268196p-102f, 0.0f, 0.0f, 0x1.216cb6p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51edacp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd1346p-27f,
     0.0f, 0x1.4070dap-48f, 0x1.b54bbcp-91f, 0x1.67796ep-94f, 0x1.881268p-48f, 0.0f,
     0x1.01948ep-93f, 0x1.97d182p-97f, 0x1.d542d8p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c9824p-95f, 0.0f, 0.0f, 0x1.0b044ep-68f, 0.0f, 0x1.e39194p-50f, 0.0f,
     0x1.db566ap-24f, 0x1.65719cp-11f, 0.0f, 0x1.bccdp-18f, 0.0f, 0x1.0fd0a6p-41f,
     0x1.79bc4p-14f, 0.0f, 0.0f, 0x1.d2fab6p-66f, 0x1.1c713cp-4f, 0.0f, 0.0f,
     0x1.15a562p-50f, 0.0f, 0.0f, 0.0f, 0x1.dbe6f8p-39f, 0x1.c93d7cp-51f, 0.0f,
     0x1.959b14p-31f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.30875ap-112f,
     0x1.4ad074p-19f, 0.0f, 0x1.4bc09p-49f, 0.0f, 0x1.dce646p-48f, 0x1.e79e2p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1553d2p-126f, 0.0f, 0x1.e1a846p-91f, 0.0f,
     0.0f, 0x1.a0dcccp-61f, 0x1.7cbd5cp-85f, 0x1.443c76p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7e51aap-80f, 0x1.64aa8cp-89f, 0x1.6bce3p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c515ap-96f, 0x1.9a5bd4p-41f, 0x1.7ec888p-90f, 0.0f,
     0x1.d76df8p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a00fap-25f,
     0x1.bfe358p-125f, 0.0f, 0x1.bc9296p-22f, 0.0f, 0.0f, 0.0f, 0x1.e8968ep-27f, 0.0f,
     0x1.7f279ep-78f, 0x1.0b74c8p-63f, 0x1.1cc392p-18f, 0.0f, 0.0f, 0.0f,
     0x1.c8ac1cp-41f, 0.0f, 0x1.08dc76p-78f, 0.0f, 0.0f, 0x1.c8c0f4p-24f, 0.0f, 0.0f,
     0x1.a8a7bap-73f, 0x1.cef91p-17f, 0.0f, 0x1.d04f52p-47f, 0x1.b6734ep-120f,
     0x1.606e2p-27f, 0.0f, 0.0f, 0x1.038528p-53f, 0x1.76f414p-90f, 0.0f,
     0x1.0fc0ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a1608p-81f, 0x1.ca30b8p-10f,
     0x1.6e23f2p-110f, 0.0f, 0.0f, 0x1.e179a4p-45f, 0.0f, 0x1.58b54ap-12f, 0.0f,
     0x1.b825dap-79f, 0.0f, 0.0f, 0.0f, 0x1.44007ep-22f, 0x1.50b7bp-48f,
     0x1.788c4ep-90f, 0.0f, 0x1.25a0dp-29f, 0x1.64013cp-25f, 0.0f, 0x1.8f1438p-67f,
     0.0f, 0x1.c6debp-123f, 0.0f, 0x1.e9f05cp-42f, 0x1.f998a4p-117f, 0x1.399ff4p-65f,
     0x1.5576dap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bde96p-96f, 0x1.94b4f6p-53f, 0.0f,
     0x1.a6ca76p-55f, 0.0f, 0x1.36f24p-38f, 0.0f, 0x1.b48256p-36f, 0.0f, 0.0f, 0.0f,
     0x1.d4fd48p-55f, 0x1.00cff4p-12f, 0x1.5802e6p-51f, 0.0f, 0x1.68bcd6p-9f,
     0x1.03a4f4p-70f, 0.0f, 0x1.a98edcp-74f, 0x1.b57ed8p-40f, 0.0f, 0x1.57dab4p-13f,
     0.0f, 0.0f, 0.0f, 0x1.d959ap-68f, 0.0f, 0x1.2d04b6p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.400694p-40f, 0x1.7d0ad6p-33f, 0x1.7f044cp-58f, 0x1.7c5a1cp-42f,
     0x1.d937acp-95f, 0x1.8f82e4p-49f, 0x1.6b1b04p-6f, 0x1.78e932p-43f, 0.0f, 0.0f,
     0x1.79383ep-20f, 0x1.0eba64p-112f, 0.0f, 0x1.c58198p-109f, 0.0f,
     0x1.71a8b6p-111f, 0.0f, 0x1.dbe16cp-20f, 0.0f, 0.0f, 0x1.eb2a1ap-60f, 0.0f,
     0x1.a845d8p-93f, 0.0f, 0x1.058a4cp-98f, 0x1.3bb042p-29f, 0x1.194aecp-60f,
     0x1.7f93aep-33f, 0x1.e19f1p-36f, 0x1.4a95e8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c671ep-43f, 0.0f, 0.0f, 0x1.d6d404p-115f, 0x1.c6982p-12f, 0x1.bd06b2p-2f,
     0x1.6f9958p-73f, 0x1.d325dep-70f, 0x1.bbe836p-48f, 0x1.034278p-48f,
     0x1.feb09cp-36f, 0.0f, 0.0f, 0.0f, 0x1.54cedp-13f, 0x1.e32b0ep-122f,
     0x1.828a88p-8f, 0x1.9d8594p-28f, 0x1.6d18fep-63f, 0x1.1a5c48p-33f,
     0x1.e87ea2p-58f, 0.0f, 0.0f, 0x1.d856f4p-38f, 0x1.4e79b2p-110f, 0x1.a2c876p-94f,
     0.0f, 0.0f, 0.0f, 0x1.e53788p-82f, 0x1.4c3a18p-102f, 0.0f, 0x1.5058ecp-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c6f7ep-45f, 0.0f, 0.0f, 0.0f,
     0x1.34b1b8p-114f, 0x1.763ac2p-41f, 0x1.2bce4p-116f, 0.0f, 0x1.8ac454p-98f,
     0x1.ba33fp-53f, 0.0f, 0x1.5b00dcp-83f, 0.0f, 0x1.070eb4p-17f, 0x1.3cb798p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.10abc2p-49f, 0.0f, 0.0f, 0.0f, 0x1.893f76p-44f,
     0x1.589f58p-59f, 0x1.08f3fap-105f, 0.0f, 0x1.f766aep-43f, 0x1.ad9252p-10f, 0.0f,
     0.0f, 0.0f, 0x1.a773b4p-32f, 0x1.d29b22p-18f, 0x1.e163p-113f, 0.0f,
     0x1.7bfa6p-47f, 0x1.44e16p-56f, 0.0f, 0.0f, 0.0f, 0x1.71f25cp-8f
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
            tmp1 = Sleef_exp10f1_u35purecfma(tmp0);
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
    printf("Sleef_exp10f1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10f1_u35purecfma bench acc %a\n", global_bench_acc);
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
