/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf1_u35purecfma.c --function Sleef_logf1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.ba97cp-63f, 0x1.fd24aep-87f, 0x1.bf1b8p-18f, 0.0f, 0.0f,
     0x1.90bb8ep-11f, 0x1.b04b2p-89f, 0x1.0a3864p-21f, 0.0f, 0.0f, 0.0f,
     0x1.4b7636p-106f, 0x1.e60b42p-4f, 0.0f, 0x1.725fecp-14f, 0.0f, 0x1.cbd8ccp-26f,
     0x1.986a2ep-123f, 0.0f, 0x1.497852p-90f, 0x1.d78c06p-58f, 0.0f, 0x1.a21232p-103f,
     0.0f, 0.0f, 0.0f, 0x1.dd58cp-21f, 0.0f, 0x1.d2d84p-61f, 0.0f, 0.0f,
     0x1.5097eap-8f, 0.0f, 0.0f, 0x1.4d2bf2p-23f, 0.0f, 0.0f, 0x1.8ae7f4p-27f,
     0x1.94816p-100f, 0x1.c76e2cp-113f, 0x1.cf86d4p-112f, 0.0f, 0x1.fb6392p-116f,
     0x1.ffd32ep-62f, 0x1.164e96p-80f, 0x1.58c8dcp-25f, 0x1.8b7e4p-125f, 0.0f,
     0x1.d70ed2p-25f, 0x1.aad834p-6f, 0x1.0da446p-68f, 0.0f, 0x1.1097a2p-74f,
     0x1.1788aep-67f, 0x1.9ca04p-91f, 0x1.9782f4p-112f, 0x1.2c61e8p-6f, 0.0f,
     0x1.451352p-1f, 0x1.3020bcp-63f, 0x1.71384cp-118f, 0.0f, 0x1.85c086p-45f, 0.0f,
     0.0f, 0.0f, 0x1.f32c38p-81f, 0x1.bb4236p-90f, 0.0f, 0x1.01108cp-12f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.9cd97ap-108f, 0x1.9e2222p-46f, 0x1.38ecep-71f, 0.0f,
     0.0f, 0.0f, 0x1.d6ca22p-107f, 0x1.71b4acp-47f, 0x1.c1f542p-83f, 0.0f, 0x1p0f,
     0x1.d2f796p-65f, 0.0f, 0.0f, 0x1.96d452p-77f, 0x1.e6a972p-113f, 0.0f,
     0x1.16f2eep-10f, 0.0f, 0x1.1df70cp-111f, 0.0f, 0x1.466dbcp-115f, 0x1.f11728p-54f,
     0.0f, 0x1.356c14p-28f, 0x1.e0bf46p-22f, 0.0f, 0x1.941eeap-65f, 0.0f, 0.0f,
     0x1.e0b6e4p-113f, 0x1.27afdp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c696ap-90f,
     0x1.7f91ap-15f, 0.0f, 0.0f, 0x1.e6766ap-41f, 0.0f, 0.0f, 0.0f, 0x1.fc26a4p-119f,
     0.0f, 0.0f, 0x1.9e8d8ep-15f, 0.0f, 0x1.7a6bc6p-67f, 0x1.918fb8p-19f, 0.0f,
     0x1.41ad48p-28f, 0.0f, 0x1.402de8p-25f, 0x1.76470ap-88f, 0x1.249ad6p-27f,
     0x1.d3b2d6p-121f, 0x1.5943cap-5f, 0x1.27867ap-5f, 0x1.96ddd4p-31f,
     0x1.462e08p-60f, 0x1.d35cf6p-55f, 0x1.fc4598p-100f, 0x1.3196fap-57f, 0.0f,
     0x1.05be8p-19f, 0.0f, 0.0f, 0x1.fc8dbap-45f, 0x1.9a1e84p-36f, 0.0f, 0.0f, 0.0f,
     0x1.1497f4p-99f, 0x1.e77866p-81f, 0x1.f4f2cep-76f, 0.0f, 0x1.5cc4c2p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c97464p-79f, 0.0f, 0x1.a4b54ap-9f, 0x1.74ee28p-46f,
     0x1.a734d8p-73f, 0.0f, 0x1.f05ebp-123f, 0x1.ca92fp-104f, 0.0f, 0x1.b2ebd8p-15f,
     0.0f, 0x1.47fea6p-85f, 0x1.444e46p-23f, 0x1.8556f2p-98f, 0x1.417ddcp-21f,
     0x1.b3ddd6p-125f, 0.0f, 0x1.02a5dp-95f, 0x1.d4c4a8p-49f, 0x1.4e3032p-41f, 0.0f,
     0.0f, 0x1.dd18c4p-11f, 0.0f, 0.0f, 0.0f, 0x1.5155a6p-11f, 0.0f, 0.0f,
     0x1.09e3p-23f, 0x1.e368c2p-112f, 0.0f, 0x1.773ffap-59f, 0.0f, 0x1.f6cb18p-109f,
     0.0f, 0.0f, 0x1.d89f66p-66f, 0.0f, 0.0f, 0x1.b1e914p-35f, 0x1.74f23ep-66f,
     0x1.6c8b4ap-7f, 0x1.6fda7cp-107f, 0.0f, 0x1.5dbeep-115f, 0.0f, 0.0f,
     0x1.caae46p-124f, 0.0f, 0.0f, 0x1.9ab2dap-85f, 0x1.8aed5p-120f, 0.0f, 0.0f, 0.0f,
     0x1.bf260ap-90f, 0x1.99ff9ap-59f, 0x1.d4ff32p-92f, 0.0f, 0.0f, 0.0f,
     0x1.51ff1ep-36f, 0.0f, 0x1.68f6d8p-86f, 0.0f, 0.0f, 0x1.a59708p-45f,
     0x1.8e4a78p-71f, 0.0f, 0.0f, 0.0f, 0x1.2d5e92p-58f, 0x1.cb8462p-89f,
     0x1.0f11dap-28f, 0x1.7dca66p-42f, 0x1.aeab16p-43f, 0x1.497cf6p-44f,
     0x1.319836p-123f, 0x1.26973cp-121f, 0x1.364aep-35f, 0x1.7c7438p-76f, 0.0f, 0.0f,
     0x1.9a8d5p-105f, 0.0f, 0x1.ddf702p-6f, 0.0f, 0.0f, 0.0f, 0x1.af8dc8p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cf92f2p-100f, 0x1.f6e2d4p-87f, 0.0f, 0x1.1349b4p-33f,
     0x1.66a1e2p-123f, 0x1.dae93ap-66f, 0x1.6d9298p-102f, 0.0f, 0x1.05108ep-84f, 0.0f,
     0x1.697f68p-51f, 0x1.e0ed78p-72f, 0x1.8fb94ep-99f, 0.0f, 0x1.4caf5ep-121f,
     0x1.f94068p-90f, 0.0f, 0x1.5daa4ap-88f, 0.0f, 0x1.87678ep-21f, 0x1.1639aap-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.429ff4p-49f, 0x1.7aa16cp-97f, 0.0f, 0.0f, 0.0f,
     0x1.0fc5p-8f, 0x1.ba7f52p-119f, 0.0f, 0x1.f28ea6p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8191cp-24f, 0x1.ee3fb4p-93f, 0.0f, 0.0f, 0x1.c41b4cp-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa39c2p-88f, 0x1.862544p-14f, 0.0f, 0x1.dfcec4p-17f,
     0.0f, 0.0f, 0.0f, 0x1.878958p-46f, 0.0f, 0.0f, 0.0f, 0x1.e3de54p-116f,
     0x1.132076p-59f, 0.0f, 0x1.487216p-8f, 0.0f, 0x1.e04a1p-65f, 0.0f,
     0x1.971f7p-55f, 0.0f, 0x1.b432c6p-117f, 0.0f, 0.0f, 0x1.20ce62p-25f,
     0x1.fd492ap-39f, 0x1.04394ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.06a394p-93f, 0x1.1079aap-119f, 0x1.2b6c3p-78f, 0.0f, 0x1.8f7fb6p-100f,
     0.0f, 0x1.3ea88ep-14f, 0x1.26fd9cp-35f, 0x1.5394e6p-90f, 0.0f, 0.0f,
     0x1.77468cp-98f, 0x1.2c8e26p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab6128p-24f,
     0x1.70059ep-56f, 0x1.ada898p-1f, 0x1.a8f83p-93f, 0.0f, 0.0f, 0x1.089cfap-123f,
     0x1.e25938p-55f, 0x1.7ec41ep-120f, 0x1.9ab486p-83f, 0.0f, 0.0f, 0x1.d093dep-42f,
     0x1.5e6c12p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3752f2p-94f, 0.0f, 0x1.ed8eap-86f,
     0x1.dac132p-9f, 0.0f, 0.0f, 0x1.1c5ae4p-39f, 0x1.dc221ap-125f, 0x1.596982p-53f,
     0.0f, 0.0f, 0x1.00ac1p-12f, 0.0f, 0x1.04cba6p-111f, 0.0f, 0x1.c33012p-61f, 0.0f,
     0.0f, 0x1.8e45cap-116f, 0x1.b6edd2p-75f, 0x1.1e6eaap-105f, 0x1.49dbd6p-122f,
     0.0f, 0x1.fb6692p-122f, 0.0f, 0x1.90a5e4p-25f, 0x1.e04ff4p-125f, 0x1.389d38p-16f,
     0.0f, 0x1.3492fp-80f, 0.0f, 0x1.c0ac38p-1f, 0x1.ded908p-12f, 0x1.3aa5e4p-43f,
     0.0f, 0x1.ed7c8ep-114f, 0x1.a2584ap-77f, 0x1.6f9c98p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef6bcp-115f, 0x1.0584b8p-23f, 0.0f, 0x1.b46392p-14f,
     0x1.b6e0bep-64f, 0.0f, 0.0f, 0.0f, 0x1.007b38p-122f, 0x1.b7e0a2p-86f, 0.0f,
     0x1.be7e04p-88f, 0.0f, 0x1.251466p-8f, 0x1.82d1e4p-94f, 0x1.4a88b4p-124f, 0.0f,
     0x1.8fdfdp-50f, 0.0f, 0x1.df6bd4p-35f, 0x1.9559a8p-104f, 0x1.d08b92p-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ab25p-82f,
     0x1.6c5038p-19f, 0.0f, 0.0f, 0x1.c6c0b6p-30f, 0x1.ff3cbcp-109f, 0.0f, 0.0f, 0.0f,
     0x1.197f34p-121f, 0.0f, 0x1.7630bcp-119f, 0x1.00df76p-93f, 0x1.c27a14p-30f,
     0x1.9684a2p-106f, 0.0f, 0.0f, 0x1.685ab6p-60f, 0x1.3d42eep-95f, 0x1.6068dep-2f,
     0x1.b11f86p-26f, 0x1.f5242ap-20f, 0.0f, 0x1.b2f61ep-8f, 0x1.ae4042p-69f,
     0x1.13747cp-124f, 0x1.cef10ap-67f, 0x1.a18354p-42f, 0.0f, 0.0f, 0x1.c2d65p-11f,
     0x1.84b9ccp-27f, 0.0f, 0.0f, 0x1.5c5d4ep-77f, 0.0f, 0x1.fb2278p-47f,
     0x1.cf5272p-101f, 0x1.78158cp-112f, 0.0f, 0.0f, 0.0f, 0x1.54e72ep-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5ffbf8p-98f, 0x1.d34584p-37f, 0x1p0f, 0.0f, 0.0f,
     0x1.43381ep-71f, 0x1.94823cp-124f, 0x1.6e35dcp-107f, 0x1.c4b2dp-35f,
     0x1.c98daap-89f, 0x1.1fb55ap-93f, 0x1.358eb8p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86358ap-106f, 0.0f, 0.0f, 0x1.c16158p-8f, 0.0f, 0x1.d80c54p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c06994p-36f, 0.0f, 0.0f, 0x1.d7b2cap-15f, 0.0f, 0.0f,
     0x1.e82664p-123f, 0.0f, 0.0f, 0.0f, 0x1.319248p-43f, 0x1.37a14cp-11f, 0.0f,
     0x1.380bp-81f, 0.0f, 0.0f, 0x1.f4e624p-102f, 0.0f, 0x1.7745ap-96f,
     0x1.86d26ap-71f, 0.0f, 0.0f, 0x1.3448a6p-110f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.156064p-41f, 0.0f, 0.0f, 0x1.0e128p-16f, 0.0f, 0x1.ca61d8p-18f,
     0x1.10db0cp-75f, 0x1.9503b6p-31f, 0.0f, 0.0f, 0x1.f0a188p-58f, 0.0f,
     0x1.dff5a8p-72f, 0x1.f92bdep-119f, 0x1.a6864cp-41f, 0x1.1c1b9ap-1f, 0.0f, 0.0f,
     0x1.e40d94p-4f, 0x1.17fbdap-20f, 0x1.0fd64p-91f, 0.0f, 0x1.8eafaep-30f, 0.0f,
     0.0f, 0x1.3cc804p-53f, 0x1.f075ccp-121f, 0x1.182b08p-11f, 0.0f, 0x1.7c2648p-116f,
     0.0f, 0.0f, 0.0f, 0x1.931c56p-90f, 0x1.749ffcp-115f, 0.0f, 0x1.157808p-47f, 0.0f,
     0.0f, 0.0f, 0x1.046dcep-83f, 0.0f, 0.0f, 0x1.14c72cp-61f, 0x1.07cb12p-92f,
     0x1.357ebep-81f, 0.0f, 0.0f, 0x1.62c302p-37f, 0.0f, 0x1.b15e14p-26f,
     0x1.a97144p-85f, 0x1.9a8a66p-12f, 0x1.3700fep-113f, 0x1.653586p-68f, 0.0f,
     0x1.c41d5cp-22f, 0x1.defc48p-75f, 0x1.b28134p-85f, 0x1.b4fd2ap-90f,
     0x1.2754fcp-121f, 0.0f, 0.0f, 0x1.0483e4p-53f, 0.0f, 0x1.a1e46ap-23f,
     0x1.bdda14p-74f, 0x1.4bf98ap-2f, 0.0f, 0x1.6e5af4p-38f, 0x1.411d9cp-91f,
     0x1.0015d6p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbfc8ep-8f, 0.0f, 0.0f,
     0x1.2bac32p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34a4b8p-26f, 0x1.dbbea2p-35f,
     0x1.0dd332p-101f, 0x1.7a1b2p-54f, 0x1.eb63c6p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ddc446p-76f, 0x1.aacf78p-68f, 0x1.69e1bp-36f, 0x1.9e05dap-20f, 0.0f,
     0x1.e4067ep-52f, 0.0f, 0.0f, 0x1.bc707ap-7f, 0x1.d258f4p-25f, 0.0f,
     0x1.47222p-124f, 0x1.1dcd3p-41f, 0.0f, 0.0f, 0x1.dcadfap-114f, 0.0f,
     0x1.76c4fp-68f, 0x1.9ed66p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2a942p-94f,
     0x1.d2db32p-40f, 0x1.d9c66ap-20f, 0.0f, 0.0f, 0.0f, 0x1.48f13cp-62f,
     0x1.c9d79ep-65f, 0x1.ba1c84p-63f, 0.0f, 0x1.1dcb58p-37f, 0.0f, 0x1.fa185cp-24f,
     0.0f, 0.0f, 0x1.f6f40ep-57f, 0.0f, 0.0f, 0x1.9b7ecap-30f, 0x1.111ceap-112f, 0.0f,
     0x1p0f, 0.0f, 0x1.062046p-18f, 0x1.e2fde6p-21f, 0x1.2b1a46p-7f, 0.0f, 0.0f,
     0x1.82f6d4p-5f, 0.0f, 0x1.f2d34cp-51f, 0.0f, 0x1.ae72f2p-48f, 0x1.96936ap-80f,
     0x1.a4981p-75f, 0x1.7642e6p-102f, 0x1.1519bp-70f, 0x1.039642p-14f, 0.0f,
     0x1.32d85p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ff728p-21f,
     0x1.0555f6p-67f, 0.0f, 0x1.d42038p-31f, 0x1.4740aap-20f, 0x1.274e4ep-25f,
     0x1.883872p-12f, 0x1.f203e6p-52f, 0x1.9edfacp-118f, 0x1.0267cp-101f,
     0x1.da12bp-104f, 0.0f, 0x1.d134fp-120f, 0.0f, 0x1.63d48p-112f, 0.0f,
     0x1.0de5aap-60f, 0x1.02fb0ap-40f, 0.0f, 0x1.325948p-14f, 0x1.0952f4p-35f, 0.0f,
     0x1.d79af8p-78f, 0.0f, 0.0f, 0x1.b5571ep-68f, 0.0f, 0x1.0aef9cp-32f, 0.0f, 0.0f,
     0.0f, 0x1.21b05cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.393cacp-112f,
     0x1.2f9888p-123f, 0x1.cb267ep-124f, 0.0f, 0x1.40860cp-45f, 0.0f, 0.0f,
     0x1.4be1c6p-56f, 0.0f, 0x1.b24194p-123f, 0.0f, 0.0f, 0x1.f6e154p-7f, 0.0f, 0.0f,
     0x1.9468aep-102f, 0.0f, 0.0f, 0x1.088046p-46f, 0.0f, 0x1.656498p-84f,
     0x1.21eb36p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5696d4p-98f, 0.0f, 0.0f,
     0x1.c8d3b6p-89f, 0x1.1a4206p-94f, 0x1.24ddfcp-88f, 0x1.4456d8p-45f,
     0x1.a564f6p-68f, 0.0f, 0.0f, 0.0f, 0x1.d9b2acp-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ca78ap-82f, 0x1.dfbd1ep-58f, 0.0f, 0.0f, 0x1.b3f6dp-110f, 0x1.6fda28p-15f,
     0x1.4c8d0ap-54f, 0.0f, 0x1.b2b08p-68f, 0.0f, 0.0f, 0.0f, 0x1.ffbff8p-46f,
     0x1.7a735p-34f, 0.0f, 0x1.ecf78ep-48f, 0.0f, 0x1.ff4922p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.31395p-39f, 0x1.cbc55p-59f, 0.0f, 0x1.e4d3aap-91f, 0x1.725066p-86f,
     0x1.5b27dcp-119f, 0x1.adca28p-117f, 0.0f, 0.0f, 0x1.d0581ep-85f, 0x1.649b8ap-37f,
     0x1.4f9206p-122f, 0.0f, 0x1.415092p-97f, 0x1.0b0814p-18f, 0x1.1b8736p-86f, 0.0f,
     0x1.87e406p-30f, 0x1.7719f6p-54f, 0x1.ec983cp-74f, 0.0f, 0x1.5e5c04p-59f,
     0x1.282dcep-56f, 0x1.19f00ap-48f, 0.0f, 0.0f, 0.0f, 0x1.5bd6fap-13f, 0.0f,
     0x1.4d56eap-76f, 0x1.36fb4cp-14f, 0x1.03ad1ap-94f, 0.0f, 0x1.4ab054p-83f,
     0x1.46226ep-121f, 0x1.f6a7cap-31f, 0x1.501082p-13f, 0x1.780aap-6f, 0.0f,
     0x1.2399f2p-82f, 0x1.d3efcp-84f, 0x1.7b0064p-111f, 0x1.f91066p-124f, 0.0f, 0.0f,
     0x1.61caf6p-91f, 0x1.a9ca42p-111f, 0.0f, 0.0f, 0.0f, 0x1.1b449ep-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.377808p-107f, 0x1.c96366p-60f, 0x1.3862b8p-67f,
     0x1.4f11aep-32f, 0.0f, 0x1.679bep-3f, 0x1.9ad8d8p-83f, 0x1.d578d4p-119f, 0.0f,
     0.0f, 0x1.7834b4p-123f, 0x1.bf6e2p-60f, 0x1.6c8c3p-47f, 0x1.626d78p-125f, 0.0f,
     0.0f, 0x1.9425f2p-2f, 0x1.66cf82p-29f, 0.0f, 0x1.d77b8ep-25f, 0.0f,
     0x1.76987p-96f, 0.0f, 0x1.0d600cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f0d04p-86f,
     0.0f, 0x1.b315dcp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbe4fep-78f, 0.0f,
     0x1.794c3p-28f, 0x1.94f1fcp-13f, 0x1.b55ac2p-17f, 0x1.35e3c6p-57f, 0.0f,
     0x1.a2adf2p-31f, 0x1.9f544ep-116f, 0.0f, 0.0f, 0.0f, 0x1.a61fccp-66f,
     0x1.76a4bcp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cda5bep-21f, 0.0f, 0x1.be669p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d1ec8p-70f, 0.0f, 0.0f, 0x1.e1740ap-19f,
     0x1.92d72ep-25f, 0.0f, 0x1.f1b972p-30f, 0.0f, 0x1.40caep-45f, 0x1.4ef43ap-48f,
     0.0f, 0.0f, 0x1.cda688p-64f, 0x1.9781bcp-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.239968p-116f, 0x1.b897e2p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15e68ep-5f, 0.0f,
     0x1.84c6ep-26f, 0.0f, 0.0f, 0x1.daae5p-91f, 0x1.7af73cp-16f, 0.0f,
     0x1.b274d8p-64f, 0x1.3fab74p-76f, 0x1.3f23c4p-75f, 0.0f, 0.0f, 0x1.58703ap-23f,
     0.0f, 0.0f, 0x1.c8411p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.433162p-39f, 0.0f, 0x1.474918p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3d93p-50f,
     0x1.dfa056p-118f, 0.0f, 0.0f, 0x1.e6edccp-66f, 0x1.bd1e14p-40f, 0.0f, 0.0f
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
            tmp1 = Sleef_logf1_u35purecfma(tmp0);
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
    printf("Sleef_logf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logf1_u35purecfma bench acc %a\n", global_bench_acc);
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
