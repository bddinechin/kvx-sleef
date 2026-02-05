/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf1_u35purecfma.c --function Sleef_cosf1_u35purecfma \
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
     0.0f, 0.0f, 0.0f, 0x1.0d5806p-3f, 0x1.45305ap-103f, 0.0f, 0x1.5fca78p-17f, 0.0f,
     0x1.915252p-96f, 0.0f, 0.0f, 0x1.c6f376p-59f, 0x1.cea4e2p-124f, 0x1.efcaeep-6f,
     0x1.f6c6eap-58f, 0.0f, 0.0f, 0x1.b2d0c4p-30f, 0x1.ae5f5ap-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.583056p-102f, 0.0f, 0.0f, 0x1.181a92p-43f, 0x1.fd6fa2p-81f, 0.0f,
     0x1.013a44p-43f, 0.0f, 0x1.5e16c6p-41f, 0.0f, 0x1.cfbb0ep-34f, 0x1.bc882ep-27f,
     0.0f, 0x1.6fc244p-15f, 0x1.f5fdc2p-92f, 0x1.692118p-70f, 0.0f, 0x1.c1ba4p-54f,
     0x1.6d48dap-35f, 0x1.fd836p-111f, 0.0f, 0.0f, 0x1.ae938p-109f, 0.0f, 0.0f,
     0x1.07008ep-68f, 0x1.afd596p-90f, 0x1.25138ap-98f, 0x1.d28aa6p-115f,
     0x1.b9e95cp-51f, 0x1.132a5ep-6f, 0.0f, 0x1.eb3daap-47f, 0x1.075aaep-59f, 0.0f,
     0x1.05c834p-101f, 0.0f, 0.0f, 0x1.9e2a4ap-69f, 0.0f, 0.0f, 0x1.ddbc1p-65f,
     0x1.2de5b6p-55f, 0x1.a58aep-1f, 0x1p0f, 0.0f, 0x1.b0aa62p-56f, 0x1.1a65f4p-77f,
     0x1.093eap-115f, 0x1.9c70b6p-18f, 0.0f, 0.0f, 0x1.719586p-48f, 0x1.f5f8fep-82f,
     0x1.c0fa8ep-68f, 0.0f, 0x1.fe7006p-74f, 0x1.6f7fa4p-110f, 0.0f, 0x1.d0264ap-77f,
     0x1.4ed528p-113f, 0x1.a2380ap-113f, 0.0f, 0x1.78c7aep-46f, 0x1.b0c74ep-35f,
     0x1.6c7afep-108f, 0.0f, 0x1.dd2468p-43f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.c85592p-101f, 0.0f, 0x1.3ee25ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.046f4ap-66f, 0.0f, 0x1.02f038p-56f, 0x1.d8da78p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.32af6ep-76f, 0x1.c8bd0ep-115f, 0.0f, 0x1.b520e4p-85f, 0x1.393696p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e46a1cp-94f, 0x1.511ecep-117f, 0x1.a984ep-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.edcca2p-87f, 0.0f, 0x1.595b44p-36f, 0x1.99dc1ap-2f, 0x1.0ea9b4p-65f, 0.0f,
     0x1.a8259ap-94f, 0x1.cbacep-92f, 0.0f, 0x1.05e242p-11f, 0x1.5056a4p-109f, 0.0f,
     0x1.c9a26cp-62f, 0.0f, 0.0f, 0x1.a01674p-46f, 0.0f, 0x1.eb9598p-16f, 0.0f, 0.0f,
     0x1.9bb814p-33f, 0.0f, 0x1.5a9e84p-4f, 0.0f, 0.0f, 0.0f, 0x1.aa500ep-73f,
     0x1.3fd31p-100f, 0x1.f6cfe6p-52f, 0.0f, 0.0f, 0x1.166932p-112f, 0x1.5579fap-105f,
     0x1.e7a364p-105f, 0.0f, 0.0f, 0x1.72bf9p-66f, 0.0f, 0x1.f3ccaap-86f, 0.0f,
     0x1.8ecf8cp-11f, 0x1.6250a4p-23f, 0x1.294f4cp-20f, 0x1.267dfep-22f,
     0x1.5f9c98p-3f, 0.0f, 0x1.ea1a6cp-109f, 0x1.abbbaep-5f, 0x1.bcce98p-95f,
     0x1.be2f78p-101f, 0x1.e0efacp-114f, 0x1.582ec8p-121f, 0x1.9d2da8p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.986608p-89f, 0.0f, 0x1.0a394ap-28f, 0x1.f7a01ap-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c50b6ap-19f, 0x1.713decp-18f, 0x1.f3a172p-11f, 0.0f,
     0x1.e18accp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf94e4p-62f, 0.0f, 0x1.8b3f4cp-30f,
     0.0f, 0x1.4255dap-110f, 0x1.290becp-35f, 0x1.a77a78p-99f, 0x1.ec7cd4p-35f, 0.0f,
     0.0f, 0.0f, 0x1.84419ap-90f, 0.0f, 0.0f, 0.0f, 0x1.9b92fp-16f, 0x1.d859a2p-120f,
     0.0f, 0x1.96d296p-70f, 0.0f, 0x1.313ea6p-33f, 0.0f, 0.0f, 0.0f, 0x1.c645aep-96f,
     0.0f, 0.0f, 0x1.a623c4p-70f, 0x1.64f208p-92f, 0.0f, 0.0f, 0.0f, 0x1.05c5dcp-15f,
     0x1.c3d3a2p-28f, 0x1.6e25a6p-44f, 0.0f, 0x1.e9df4ap-88f, 0x1.26666ep-76f,
     0x1.4b21bep-3f, 0x1.87e7e2p-87f, 0.0f, 0.0f, 0x1.d6d924p-50f, 0.0f,
     0x1.faef58p-75f, 0x1.89e604p-2f, 0.0f, 0x1.7e928p-11f, 0x1.071e3p-10f,
     0x1.142c2p-90f, 0.0f, 0.0f, 0x1.98c8a4p-21f, 0.0f, 0x1.044c2cp-111f,
     0x1.050f3p-117f, 0x1.e3d85p-40f, 0.0f, 0.0f, 0x1.28fedep-50f, 0x1.68fe92p-46f,
     0x1.4c1e2ap-59f, 0x1.53528cp-74f, 0x1.a9988ep-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8499p-45f, 0.0f, 0x1.2ac268p-47f, 0x1.7ae16p-116f, 0.0f, 0.0f, 0.0f,
     0x1.32b9b4p-104f, 0x1.9593a6p-76f, 0.0f, 0x1.ab33d4p-22f, 0x1.245d4ep-85f,
     0x1.528702p-92f, 0.0f, 0x1.014c2ap-56f, 0.0f, 0x1.9bb762p-32f, 0x1.9a22cap-45f,
     0.0f, 0.0f, 0x1.e0548cp-86f, 0.0f, 0.0f, 0x1.3dbe34p-60f, 0.0f, 0x1.313442p-112f,
     0x1.fa91ccp-105f, 0x1.a5bf6ep-47f, 0x1.7861f2p-66f, 0x1.512756p-107f,
     0x1.2af296p-81f, 0.0f, 0x1.a44392p-20f, 0x1.8be3bcp-114f, 0x1.ec66f6p-21f, 0.0f,
     0x1.0f0284p-96f, 0x1.e2511ap-68f, 0.0f, 0x1.5da5dp-71f, 0.0f, 0.0f,
     0x1.d6dc7cp-28f, 0x1.837c2cp-51f, 0.0f, 0.0f, 0x1.58832p-42f, 0.0f, 0.0f,
     0x1.71ac58p-13f, 0x1.4c58d2p-74f, 0.0f, 0.0f, 0x1.f0b0e4p-30f, 0.0f, 0.0f,
     0x1.be951cp-64f, 0x1.7328aap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1aed8p-28f,
     0.0f, 0x1.661a52p-98f, 0x1.129eacp-110f, 0.0f, 0x1.cdffc4p-77f, 0.0f,
     0x1.f34d1ep-35f, 0x1.46c634p-31f, 0.0f, 0.0f, 0x1.bf8936p-52f, 0x1.e40012p-126f,
     0.0f, 0x1.3466a8p-67f, 0.0f, 0x1.a7e58ap-86f, 0x1.483656p-79f, 0x1.51c26cp-124f,
     0x1.6a0a22p-55f, 0x1.07ae8p-52f, 0x1.76a5d2p-31f, 0.0f, 0.0f, 0x1.7e89fp-94f,
     0.0f, 0x1.1e9518p-83f, 0.0f, 0x1.264f5cp-40f, 0x1.ba6396p-81f, 0.0f,
     0x1.3d2f5ep-90f, 0.0f, 0x1.dba6ap-33f, 0.0f, 0.0f, 0x1.279262p-77f,
     0x1.d09334p-98f, 0x1.61ef96p-82f, 0x1.db0514p-87f, 0x1.e47692p-7f, 0.0f, 0.0f,
     0x1.252c54p-105f, 0.0f, 0.0f, 0x1.05ecb6p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90045cp-53f, 0.0f, 0.0f, 0x1.3a335ap-97f, 0x1.c49d08p-61f, 0x1.d30dcp-11f,
     0.0f, 0x1.336d0ap-31f, 0x1.329a1cp-100f, 0x1.89fe9ap-79f, 0x1.513c94p-4f, 0.0f,
     0x1.fcb46ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b859cp-69f, 0.0f, 0.0f,
     0x1.4440b8p-63f, 0.0f, 0.0f, 0x1.0f1a06p-29f, 0.0f, 0x1.621e7cp-58f, 0.0f, 0.0f,
     0x1.1dd63cp-29f, 0x1.19fdc4p-1f, 0x1.9ba2c8p-114f, 0.0f, 0x1.4f5f92p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f3cda4p-1f, 0.0f, 0.0f, 0.0f, 0x1.d506cep-113f,
     0x1.9668fcp-6f, 0.0f, 0.0f, 0x1.8ebfb2p-9f, 0x1.132426p-74f, 0.0f, 0.0f,
     0x1.498186p-50f, 0.0f, 0.0f, 0.0f, 0x1.13c59cp-15f, 0.0f, 0.0f, 0x1.953b0ep-30f,
     0x1.c76344p-36f, 0.0f, 0x1.fb982ap-105f, 0x1.829a08p-37f, 0.0f, 0.0f,
     0x1.1f830ep-89f, 0.0f, 0.0f, 0x1.f77a6ap-38f, 0.0f, 0.0f, 0x1.1d69p-23f, 0.0f,
     0.0f, 0.0f, 0x1.05d824p-110f, 0x1.fb152ap-106f, 0x1.cbbeap-124f, 0.0f, 0.0f,
     0x1.0cd8d4p-19f, 0x1.852daep-109f, 0.0f, 0.0f, 0.0f, 0x1.6bfd18p-20f,
     0x1.9a7552p-113f, 0x1.d5eeb6p-33f, 0x1.4d2c08p-78f, 0x1.5c8cfp-56f,
     0x1.eb7586p-88f, 0x1.f457a4p-76f, 0.0f, 0.0f, 0x1.97e3e2p-101f, 0.0f,
     0x1.53abc6p-125f, 0.0f, 0x1.bf87d2p-15f, 0.0f, 0.0f, 0x1.00ae38p-69f,
     0x1.68818ap-26f, 0.0f, 0.0f, 0.0f, 0x1.051732p-12f, 0.0f, 0x1.50bf16p-77f,
     0x1.825624p-75f, 0.0f, 0x1.16039ep-78f, 0.0f, 0x1.07c418p-55f, 0x1.343898p-30f,
     0.0f, 0.0f, 0x1.92b588p-7f, 0.0f, 0x1.f7a958p-83f, 0x1.0ea438p-118f, 0.0f, 0.0f,
     0.0f, 0x1.f218e2p-22f, 0.0f, 0.0f, 0x1.4e849ep-23f, 0x1.151862p-62f, 0.0f, 0.0f,
     0.0f, 0x1.d6afd6p-86f, 0.0f, 0x1.307a98p-79f, 0x1.464eep-21f, 0x1.30bdd4p-58f,
     0x1.b755b4p-89f, 0x1.a7842ap-115f, 0x1.de488cp-123f, 0.0f, 0x1.2b8fp-114f, 0.0f,
     0.0f, 0x1.fc5e88p-49f, 0x1.7a729ap-122f, 0.0f, 0x1.b21bd8p-42f, 0x1.75cc1p-67f,
     0.0f, 0x1.d14a9ap-7f, 0x1.33814ep-62f, 0x1.3a7e9ep-25f, 0x1.ecb6eep-69f, 0.0f,
     0x1.2bcafap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2e84p-104f, 0.0f, 0.0f,
     0x1.d78478p-62f, 0.0f, 0.0f, 0x1.ad831ap-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f26402p-71f, 0x1.745d8ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6cc5p-71f,
     0.0f, 0x1.bb3648p-88f, 0x1.8df26ap-109f, 0x1.e567b4p-39f, 0x1.a0c2b2p-76f, 0.0f,
     0.0f, 0x1.1e307ep-55f, 0x1.6d0154p-61f, 0x1.72973ap-14f, 0x1.46d1b8p-104f,
     0x1.cff4d2p-52f, 0x1.68fb24p-106f, 0x1.ea36c6p-100f, 0x1.13311ap-83f,
     0x1.c45beep-58f, 0x1.d39fap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73b008p-39f,
     0x1.a8f688p-30f, 0.0f, 0x1.eeb946p-12f, 0x1.cd2b54p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9baeb4p-97f, 0.0f, 0.0f, 0x1.137d74p-108f, 0.0f, 0.0f,
     0x1.af6e2ap-55f, 0x1.6e6542p-47f, 0x1.88adbcp-64f, 0x1.5f35aep-73f, 0.0f, 0.0f,
     0x1.9474fep-43f, 0x1.768d3ep-37f, 0.0f, 0x1.72fa86p-48f, 0.0f, 0x1.7b148ep-121f,
     0x1.386154p-25f, 0.0f, 0x1.86941ep-79f, 0.0f, 0.0f, 0x1.53972cp-18f, 0.0f, 0.0f,
     0.0f, 0x1.e1b29ap-76f, 0x1.f0382ep-51f, 0x1.20caacp-7f, 0.0f, 0x1.f58024p-102f,
     0.0f, 0x1.3c4b6ap-81f, 0x1.880b0cp-66f, 0x1.c20ecep-18f, 0x1p0f, 0.0f,
     0x1.d263bcp-64f, 0x1.3a6f4ap-103f, 0.0f, 0.0f, 0x1.6fce08p-16f, 0x1.80a836p-9f,
     0x1.245414p-10f, 0x1.ec7eecp-7f, 0.0f, 0.0f, 0x1.ca8ec6p-67f, 0x1.fa5308p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.648278p-123f, 0x1.dc39c8p-90f, 0x1.83d09ap-33f,
     0.0f, 0x1.0a341cp-87f, 0.0f, 0.0f, 0x1.41d1eap-62f, 0.0f, 0x1.bc7caep-26f, 0.0f,
     0.0f, 0.0f, 0x1.50bb4ap-95f, 0x1.5d25d4p-91f, 0.0f, 0x1.909e76p-60f,
     0x1.e3f7b8p-26f, 0.0f, 0.0f, 0x1.607d2ep-57f, 0x1.5d0f86p-100f, 0x1.b8cc7cp-92f,
     0x1.384f98p-23f, 0.0f, 0x1.f61cf4p-7f, 0x1.d3a9eap-11f, 0x1.58f4fep-119f, 0.0f,
     0x1.82ac3ap-11f, 0x1.524bd8p-30f, 0x1.e1604cp-56f, 0x1.e6f7c8p-81f, 0.0f,
     0x1.5a051cp-85f, 0.0f, 0x1.3ccc36p-102f, 0x1.6bab3ap-119f, 0.0f, 0.0f,
     0x1.4b341ap-111f, 0.0f, 0x1.f033ecp-75f, 0.0f, 0.0f, 0x1.09b1eep-106f,
     0x1.1c4264p-113f, 0.0f, 0x1.6fd64cp-59f, 0.0f, 0x1.396a22p-84f, 0x1.5097ep-105f,
     0x1.063756p-75f, 0.0f, 0x1.32008cp-68f, 0x1.1e1216p-90f, 0x1.1ecb54p-122f, 0.0f,
     0x1.2a5a2ap-116f, 0.0f, 0.0f, 0.0f, 0x1.6c18bp-65f, 0x1.fa02bep-110f,
     0x1.f09db4p-28f, 0.0f, 0.0f, 0x1.e423d2p-100f, 0x1.666f9cp-92f, 0x1.3ff39cp-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7130c2p-30f, 0.0f, 0.0f, 0.0f, 0x1.511a72p-100f,
     0x1.9590b8p-97f, 0x1.6615a2p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f92d0ep-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f70c0ep-81f, 0x1.1642bp-15f, 0x1.ef4d0cp-93f, 0.0f, 0.0f,
     0.0f, 0x1.fbcffcp-73f, 0.0f, 0x1.48fc6p-64f, 0x1.22d93p-123f, 0x1.091a68p-48f,
     0x1.ba154ep-45f, 0.0f, 0x1.25ae42p-25f, 0x1.dcc87p-6f, 0x1.146cap-102f, 0.0f,
     0x1.770bb2p-1f, 0.0f, 0x1.1b31ccp-90f, 0x1.aec34ep-27f, 0x1.6cc6e4p-76f, 0.0f,
     0.0f, 0x1.7e90a6p-91f, 0.0f, 0.0f, 0x1.6caf8ap-71f, 0x1.b440eap-112f,
     0x1.2ac684p-22f, 0.0f, 0.0f, 0x1.878e46p-106f, 0x1.16328ep-6f, 0.0f,
     0x1.cae918p-22f, 0x1.1a1f24p-27f, 0x1.0fb8e4p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f802a8p-90f, 0.0f, 0.0f, 0x1.41d10cp-97f, 0x1.323bdap-97f, 0.0f,
     0x1.ab05b8p-38f, 0x1.ac0c34p-84f, 0.0f, 0.0f, 0x1.f6ab04p-116f, 0x1.e8aafep-75f,
     0.0f, 0.0f, 0x1.07531ep-16f, 0.0f, 0x1.4ba71ap-17f, 0x1.f5e018p-51f,
     0x1.e8abbap-104f, 0x1.8b155ep-72f, 0.0f, 0x1.e14ac2p-68f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c278eep-57f, 0.0f, 0.0f, 0x1.5dc8c6p-44f,
     0x1.f09292p-49f, 0.0f, 0x1.0d2e48p-74f, 0x1.b3e644p-32f, 0x1.fc523cp-116f,
     0x1.eda666p-17f, 0.0f, 0.0f, 0x1.0e253ep-2f, 0.0f, 0x1.79c902p-81f,
     0x1.9c775ap-126f, 0.0f, 0.0f, 0x1.d4f796p-18f, 0x1.280434p-100f, 0.0f, 0.0f,
     0x1.89c144p-123f, 0.0f, 0.0f, 0x1.a7b33p-20f, 0x1.855114p-22f, 0x1.0b23c2p-125f,
     0x1.e363eep-82f, 0x1.eb0062p-40f, 0x1.461902p-40f, 0x1.dbbd9cp-34f,
     0x1.211c7p-45f, 0x1.3e3deep-110f, 0x1.2b1064p-12f, 0.0f, 0.0f, 0x1.ea620ep-4f,
     0x1.398f9ep-35f, 0x1.3e0a8ep-50f, 0x1.a38772p-74f, 0x1.d9ad96p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fbec4p-70f, 0x1.4b5daap-94f, 0.0f,
     0x1.6eb8a4p-92f, 0x1.918d9ap-118f, 0.0f, 0.0f, 0.0f, 0x1.c67e9cp-96f,
     0x1.32923cp-98f, 0.0f, 0x1.e9828cp-55f, 0x1.b90d36p-38f, 0.0f, 0.0f, 0.0f,
     0x1.5f4e2ap-9f, 0.0f, 0x1.9bf1c4p-73f, 0x1.b67c3p-51f, 0.0f, 0x1.d1673p-63f,
     0x1.497622p-26f, 0x1.b43fa2p-121f, 0.0f, 0x1.2f72f4p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d4732p-106f, 0.0f, 0.0f, 0.0f, 0x1.378332p-62f, 0x1.3c25b4p-19f, 0.0f,
     0x1.92b68p-92f, 0x1.b6abdep-121f, 0x1.970c6ap-97f, 0x1.cd2572p-53f, 0.0f,
     0x1.ed09fcp-61f, 0x1.95431ap-98f, 0.0f, 0.0f, 0x1.0cb916p-25f, 0x1.27dbd6p-29f,
     0x1.1abed6p-111f, 0x1.c0e2c6p-115f, 0.0f, 0x1.babcf4p-58f, 0x1.6eabd6p-99f, 0.0f,
     0x1.419b58p-104f, 0.0f, 0.0f, 0x1.259fbcp-1f, 0x1.dcfd2cp-124f, 0x1.26129p-37f,
     0.0f, 0.0f, 0x1.32912ap-85f, 0x1.d588ecp-122f, 0.0f, 0x1.deb63cp-113f, 0.0f,
     0.0f, 0x1.357d64p-57f, 0.0f, 0x1.d61952p-93f, 0.0f, 0.0f, 0x1.0a1024p-6f, 0.0f,
     0.0f, 0.0f, 0x1.0634eap-73f, 0x1.c3aef2p-67f, 0.0f, 0x1.f93d1ap-116f, 0.0f,
     0x1.4181acp-36f, 0.0f, 0x1.a71496p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74cd2cp-84f, 0x1.82161p-100f, 0.0f, 0x1.a32572p-58f, 0.0f, 0.0f,
     0x1.8a45eap-2f, 0x1.1256fcp-46f, 0.0f, 0x1.70a1c6p-20f, 0.0f, 0x1.061ac2p-18f,
     0.0f, 0.0f, 0.0f, 0x1.58005p-14f, 0.0f, 0x1.24e2e8p-110f, 0.0f, 0x1.e30222p-53f,
     0x1.0d539cp-101f, 0x1.6f2f7ep-105f, 0x1.77c53ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.396484p-67f, 0x1.7762c6p-4f, 0.0f, 0x1.839ae4p-92f, 0x1.9aede4p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3720b8p-51f
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
            tmp1 = Sleef_cosf1_u35purecfma(tmp0);
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
    printf("Sleef_cosf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
