/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f4_u35avx2128.c --function Sleef_exp10f4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.7cb2cap-114f, 0x1.a6dbfap-67f, 0x1.37abe8p-29f, 0.0f, 0x1.ef2e54p-53f,
     0x1.b9b17ap-99f, 0x1.35a77cp-38f, 0x1.eefbf6p-80f, 0x1.6b19ep-10f,
     0x1.cc476cp-124f, 0x1.16874ap-48f, 0.0f, 0x1.4e281p-123f, 0x1.7dd586p-36f,
     0x1.bf3804p-64f, 0x1.204474p-104f, 0.0f, 0x1.631e32p-46f, 0.0f, 0.0f, 0.0f,
     0x1.004ff2p-36f, 0.0f, 0.0f, 0x1.7b2e5cp-42f, 0.0f, 0.0f, 0.0f, 0x1.df2efp-86f,
     0.0f, 0.0f, 0.0f, 0x1.0713f8p-91f, 0x1.6e0528p-30f, 0.0f, 0x1.93c09ap-2f, 0.0f,
     0x1.f3210ap-26f, 0x1.b20b9ap-112f, 0x1.e42848p-17f, 0.0f, 0x1.f309bcp-12f, 0.0f,
     0x1.e5037cp-36f, 0x1.266602p-53f, 0x1.9acca4p-74f, 0x1.1fce3cp-6f,
     0x1.b2585ep-64f, 0.0f, 0.0f, 0.0f, 0x1.1e46d4p-65f, 0.0f, 0x1.6a5ce8p-83f,
     0x1.9e9686p-120f, 0.0f, 0x1.e74fd8p-16f, 0x1.9e42ccp-123f, 0x1.dc3fa4p-94f,
     0x1.0d5f14p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86afdcp-99f, 0.0f, 0.0f,
     0x1.245c26p-112f, 0x1.72a3e8p-109f, 0x1.84151ap-105f, 0x1.76ee86p-43f, 0.0f,
     0x1.b55398p-123f, 0.0f, 0x1.bc9daap-115f, 0x1.3b664ep-86f, 0.0f, 0x1.ff71d8p-7f,
     0x1.ddb63cp-22f, 0.0f, 0x1.efc29ep-117f, 0x1.449e92p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fe0566p-78f, 0.0f, 0.0f, 0x1.443b1p-54f, 0x1.539df4p-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.868028p-39f, 0.0f, 0x1.ba9dc6p-73f, 0x1.19e308p-40f,
     0x1.3d8fd6p-19f, 0x1.335f58p-121f, 0x1.52a46ep-9f, 0.0f, 0x1.d2a3dep-114f, 0.0f,
     0x1.631c7cp-90f, 0.0f, 0.0f, 0x1.616038p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2487cp-37f, 0.0f, 0.0f, 0x1.bb6c0ap-118f, 0x1.5870b6p-71f,
     0x1.267074p-59f, 0.0f, 0.0f, 0x1.1e5624p-110f, 0x1.085c46p-89f, 0x1.ee7d3cp-117f,
     0.0f, 0x1.76b174p-124f, 0.0f, 0.0f, 0x1.4f95c4p-112f, 0.0f, 0x1.006aeep-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b9102p-117f, 0x1.7222e2p-64f, 0x1.a605c8p-125f,
     0.0f, 0.0f, 0x1.1291b4p-110f, 0x1.1b8a84p-46f, 0x1.17d5c6p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1e832ap-111f, 0.0f, 0x1.596a82p-119f, 0x1.e255fp-4f, 0.0f,
     0x1.0bfe9p-61f, 0x1.8c4d62p-15f, 0x1.49e014p-10f, 0x1.2fcfacp-12f, 0.0f, 0.0f,
     0.0f, 0x1.334c66p-121f, 0.0f, 0x1.f23024p-122f, 0x1.e491eep-123f, 0.0f,
     0x1.a1d742p-52f, 0x1.e7a6cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5b2fcp-125f, 0.0f, 0x1.773b04p-24f, 0.0f, 0x1.b996ecp-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.41f59ep-85f, 0x1.37dde4p-20f, 0.0f, 0.0f, 0x1.1a52e4p-54f, 0.0f,
     0x1.7ce3b8p-58f, 0.0f, 0.0f, 0x1.862f62p-70f, 0.0f, 0x1.521c52p-85f, 0.0f,
     0x1.ec5658p-88f, 0x1.2978eap-114f, 0x1.d4cafp-116f, 0x1.407408p-47f, 0.0f,
     0x1.bfca28p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4dcf8p-25f, 0.0f, 0.0f,
     0x1.0b35e6p-87f, 0x1.1c0426p-36f, 0.0f, 0.0f, 0x1.d6d3ccp-85f, 0x1.bb7738p-41f,
     0.0f, 0x1.4ad04ep-29f, 0.0f, 0.0f, 0.0f, 0x1.00bf52p-89f, 0x1.5141d6p-17f, 0.0f,
     0x1.5cc528p-21f, 0.0f, 0x1.5be8p-16f, 0.0f, 0x1.004428p-63f, 0x1.dba6d6p-37f,
     0x1.42b5ecp-95f, 0x1.656b86p-25f, 0x1.00700cp-94f, 0x1.fd1cecp-64f,
     0x1.35368p-119f, 0x1.d30f26p-114f, 0x1.c256ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c17852p-56f, 0x1.a5ec68p-75f, 0.0f, 0.0f, 0x1.ff9da8p-117f, 0.0f,
     0x1.9aed84p-29f, 0x1.278872p-71f, 0x1.9e75b4p-24f, 0x1.52dff4p-97f,
     0x1.d442ecp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f04ca4p-63f, 0x1.1ba8bap-69f,
     0x1.749f76p-12f, 0.0f, 0x1.343ab6p-75f, 0.0f, 0.0f, 0x1.77e274p-69f, 0.0f, 0.0f,
     0x1.614abp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50e8c2p-103f, 0x1.a3f642p-80f,
     0.0f, 0x1.09a4e4p-111f, 0.0f, 0.0f, 0.0f, 0x1.74c2f4p-11f, 0x1.32b41ep-27f,
     0x1.dcabc4p-124f, 0x1.9fd39cp-100f, 0.0f, 0x1.1d7baep-59f, 0.0f, 0x1.5d9b6ap-21f,
     0x1.93514p-104f, 0x1.70cb82p-34f, 0x1.8400e6p-5f, 0x1.f74342p-114f,
     0x1.94c446p-44f, 0.0f, 0x1.b22ad6p-62f, 0x1.2d448cp-100f, 0x1.45e8bep-20f,
     0x1.007cf2p-104f, 0.0f, 0x1.dd09a6p-121f, 0x1.a78a02p-104f, 0x1.8e7034p-23f,
     0x1.1358d6p-122f, 0x1.418f52p-88f, 0.0f, 0.0f, 0x1.8ddac2p-25f, 0.0f, 0.0f, 0.0f,
     0x1.27ca3p-103f, 0x1.eb0922p-108f, 0x1.afda6p-50f, 0.0f, 0x1.e6805p-101f, 0.0f,
     0.0f, 0.0f, 0x1.cdda86p-20f, 0.0f, 0.0f, 0x1.288736p-35f, 0.0f, 0x1.9f4bdap-73f,
     0.0f, 0.0f, 0x1.325d36p-25f, 0x1.4ed2ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a8f62p-46f, 0.0f, 0x1.25418ep-84f, 0.0f, 0.0f, 0.0f, 0x1.f3c91ap-14f, 0.0f,
     0x1.95a5dp-3f, 0x1.230434p-19f, 0.0f, 0.0f, 0.0f, 0x1.c24534p-41f,
     0x1.74c674p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f152b6p-122f,
     0x1.b5b9eep-18f, 0x1.6b77ap-20f, 0x1.1f8a3ap-120f, 0x1.8a8996p-58f,
     0x1.94e664p-120f, 0x1.443166p-60f, 0x1.f7eef2p-60f, 0.0f, 0x1.a4d6ap-111f,
     0x1.25dd7p-111f, 0x1.7bd3fap-97f, 0x1.ee57cap-109f, 0.0f, 0x1.fe2a9p-50f, 0.0f,
     0.0f, 0x1.074418p-42f, 0x1.7b33aep-46f, 0x1.88a10ep-7f, 0x1.c2d66ep-124f,
     0x1.1f4b36p-86f, 0x1.35005p-120f, 0.0f, 0x1.15554cp-87f, 0.0f, 0.0f,
     0x1.b6418p-91f, 0x1.9f2a26p-73f, 0.0f, 0.0f, 0x1.7582a8p-62f, 0.0f, 0.0f,
     0x1.4900f8p-40f, 0x1.0e9dc4p-84f, 0.0f, 0x1.14e0e4p-57f, 0.0f, 0.0f,
     0x1.f4fd1cp-43f, 0x1.dfb1ccp-114f, 0x1.dd334ep-65f, 0.0f, 0.0f, 0x1.407ca2p-40f,
     0x1.d393aap-106f, 0x1.fc86a2p-50f, 0.0f, 0x1.8df64ep-58f, 0.0f, 0.0f, 0.0f,
     0x1.c7863cp-122f, 0x1.d89e6ep-99f, 0.0f, 0x1.eaaccep-108f, 0.0f, 0.0f,
     0x1.673554p-86f, 0x1.27b16ep-125f, 0.0f, 0.0f, 0x1.b534fp-66f, 0.0f,
     0x1.b45882p-88f, 0x1.e3c794p-104f, 0x1.f55cd2p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.754fbep-41f, 0.0f, 0x1.9a301ap-97f, 0x1.dbe126p-26f,
     0x1.93f9fap-7f, 0.0f, 0x1.e6205cp-18f, 0.0f, 0x1.7d104ep-31f, 0x1.216082p-117f,
     0x1.1dad7ep-36f, 0.0f, 0x1.f813cep-12f, 0.0f, 0.0f, 0x1.4eb36ap-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1f3c56p-20f, 0x1.5a05d4p-39f, 0.0f, 0x1.4870d2p-26f,
     0x1.79c60ap-56f, 0x1.e41ed8p-68f, 0x1.7e06dcp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f59cf6p-61f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.0024c6p-29f, 0.0f, 0.0f, 0.0f,
     0x1.bec744p-3f, 0.0f, 0.0f, 0.0f, 0x1.6b0ed8p-28f, 0x1.2aa6p-24f,
     0x1.d6711ap-66f, 0.0f, 0.0f, 0x1.f40ddcp-79f, 0x1.6fc062p-96f, 0x1.186f9cp-18f,
     0x1.b287cp-123f, 0.0f, 0x1.3fb6f6p-120f, 0x1.99dd4ep-4f, 0x1.319bc6p-3f,
     0x1.606daap-83f, 0x1.38ffa2p-93f, 0x1.72343cp-64f, 0.0f, 0x1.5bbd68p-56f,
     0x1.414416p-115f, 0.0f, 0.0f, 0x1.0d5282p-7f, 0x1p0f, 0.0f, 0x1.ae76f8p-50f,
     0x1.acbe9ep-75f, 0x1.f837f6p-93f, 0x1.42c858p-107f, 0x1.e9a73cp-77f, 0.0f,
     0x1.519908p-55f, 0x1.bd2a4ep-105f, 0x1.7e9fp-63f, 0x1.d2179p-109f, 0.0f,
     0x1.aaa1f4p-53f, 0x1.77f57cp-94f, 0.0f, 0x1.056b2ap-109f, 0.0f, 0x1.17166cp-49f,
     0x1.582554p-17f, 0x1.14895p-28f, 0.0f, 0.0f, 0x1.94c054p-28f, 0x1.da6b4cp-12f,
     0x1.a04772p-119f, 0.0f, 0x1.bee34ep-52f, 0.0f, 0x1.0f51e2p-73f, 0x1.edc162p-126f,
     0x1.89144ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49d3c2p-33f, 0x1.d8c9a6p-10f,
     0.0f, 0x1.9a3bb8p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dfb166p-122f, 0x1.eeed72p-85f, 0.0f, 0x1.fca5d2p-65f, 0.0f, 0x1.909746p-90f,
     0.0f, 0.0f, 0.0f, 0x1.c7f32cp-30f, 0x1.41cap-44f, 0.0f, 0x1.330126p-38f, 0.0f,
     0.0f, 0x1.cd20b6p-123f, 0x1.e05608p-62f, 0.0f, 0.0f, 0.0f, 0x1.541528p-117f,
     0.0f, 0.0f, 0.0f, 0x1.43b7cep-87f, 0x1.7c7b6p-15f, 0x1.4ff0f6p-100f, 0.0f,
     0x1.7e2feap-71f, 0x1.a63948p-83f, 0x1.90971p-80f, 0x1.203c8cp-102f, 0.0f, 0.0f,
     0x1.3414bcp-8f, 0x1.216f5ap-42f, 0.0f, 0x1.65a18ap-43f, 0.0f, 0.0f,
     0x1.4a32d6p-25f, 0x1.17ee6ap-92f, 0x1.9a56fcp-96f, 0x1.3a34ecp-20f, 0.0f, 0.0f,
     0x1.b5a28ep-40f, 0.0f, 0x1.70f1eap-51f, 0x1.184b14p-5f, 0x1.70798ap-5f, 0.0f,
     0x1.ba942ep-34f, 0.0f, 0x1.7db6fep-6f, 0.0f, 0x1.699068p-114f, 0x1.5cd0cp-43f,
     0x1.9430fp-38f, 0.0f, 0.0f, 0.0f, 0x1.4e0c5p-95f, 0x1.332dfep-32f, 0.0f, 0.0f,
     0x1.eee916p-63f, 0.0f, 0.0f, 0x1.72c4bcp-66f, 0x1.0b355ep-20f, 0.0f, 0.0f, 0.0f,
     0x1.0a3ef8p-21f, 0x1.e67588p-47f, 0.0f, 0.0f, 0.0f, 0x1.1886bp-124f, 0.0f, 0.0f,
     0x1.ccf52ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc6e6ep-84f, 0.0f, 0.0f,
     0x1.5e199cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c02432p-82f, 0.0f,
     0x1.f41bcap-122f, 0x1.fda4fcp-25f, 0.0f, 0x1.fefaa2p-3f, 0.0f, 0.0f, 0.0f,
     0x1.f27d0ap-82f, 0.0f, 0x1.98cf24p-50f, 0x1.c5d66p-47f, 0.0f, 0x1.0b102cp-5f,
     0.0f, 0x1.cb4aa4p-45f, 0.0f, 0.0f, 0x1.0256f8p-26f, 0.0f, 0.0f, 0x1.70727p-53f,
     0x1.eb2668p-7f, 0.0f, 0.0f, 0.0f, 0x1.da92eap-60f, 0.0f, 0.0f, 0.0f,
     0x1.b8884ap-34f, 0.0f, 0x1.df060cp-51f, 0x1.bd8e58p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c2ae36p-86f, 0.0f, 0x1.ac443p-88f, 0x1.7a041p-64f, 0.0f,
     0x1.eefaa4p-66f, 0x1.7e54fcp-25f, 0x1p0f, 0.0f, 0.0f, 0x1.e4c9d2p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c14c88p-46f, 0x1.b51974p-10f, 0x1.b9719ap-13f, 0.0f,
     0x1.2a76f6p-59f, 0x1.29cf5ep-66f, 0x1.04cfe6p-124f, 0x1.8c7c0ap-105f, 0.0f, 0.0f,
     0x1.dfaa24p-21f, 0.0f, 0x1.75f10ap-73f, 0.0f, 0x1.554472p-9f, 0x1.90a05ep-86f,
     0.0f, 0x1.5404f6p-9f, 0x1.d082ecp-23f, 0.0f, 0.0f, 0.0f, 0x1.28401p-123f,
     0x1.e3e7fcp-79f, 0x1.276666p-6f, 0.0f, 0.0f, 0x1.07db22p-2f, 0x1.faf474p-115f,
     0x1.a98774p-65f, 0.0f, 0.0f, 0x1.04826cp-23f, 0.0f, 0x1.17ad2ap-107f, 0.0f, 0.0f,
     0x1.54d0c8p-126f, 0x1.0653dep-35f, 0.0f, 0x1.770628p-34f, 0x1.e4014cp-96f,
     0x1.884854p-125f, 0.0f, 0x1.29759ep-34f, 0.0f, 0x1.095b84p-91f, 0.0f, 0.0f,
     0x1.7ade2ap-39f, 0.0f, 0.0f, 0x1.9a2122p-91f, 0x1.51d69p-53f, 0x1.0c03fap-73f,
     0.0f, 0x1.d9403cp-118f, 0.0f, 0x1.25dcc6p-59f, 0x1.d07d3cp-90f, 0x1.8e3914p-70f,
     0.0f, 0.0f, 0x1.d39e0cp-122f, 0.0f, 0x1.895a6p-90f, 0x1.f213eep-96f,
     0x1.ce375ep-10f, 0x1.6298d8p-40f, 0.0f, 0.0f, 0x1.be5fdep-67f, 0.0f, 0.0f,
     0x1.f8bf84p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85ee3p-89f, 0x1.9dad22p-17f,
     0x1p0f, 0.0f, 0x1.e7a80ep-22f, 0x1.b8f8acp-10f, 0x1.1484c8p-59f,
     0x1.b30484p-100f, 0.0f, 0x1.030d02p-5f, 0.0f, 0.0f, 0.0f, 0x1.adc66cp-29f, 0.0f,
     0.0f, 0x1.dbd384p-15f, 0.0f, 0.0f, 0x1.46bafep-51f, 0.0f, 0x1.27415cp-67f,
     0x1.1cd084p-27f, 0x1.3b6e3ep-102f, 0x1.47caa6p-34f, 0.0f, 0x1.1e6914p-82f, 0.0f,
     0.0f, 0.0f, 0x1.b9183p-98f, 0x1.4ed2c8p-60f, 0x1.f6944p-45f, 0.0f,
     0x1.1af1aap-46f, 0.0f, 0x1.e6b6c4p-34f, 0.0f, 0.0f, 0.0f, 0x1.a64dbp-20f, 0.0f,
     0x1.c53a66p-21f, 0.0f, 0x1.862458p-41f, 0.0f, 0x1.2c3da8p-118f, 0x1.5a31bcp-117f,
     0.0f, 0x1.2692f4p-27f, 0x1.83369ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.491536p-86f,
     0.0f, 0x1.1636ccp-51f, 0.0f, 0.0f, 0.0f, 0x1.41155cp-34f, 0.0f, 0.0f,
     0x1.8cfe64p-33f, 0.0f, 0x1.d19caep-33f, 0x1.e8b952p-65f, 0.0f, 0.0f,
     0x1.f0c2f4p-6f, 0x1.554fc4p-79f, 0x1.7cccfp-112f, 0x1.151a68p-125f, 0.0f,
     0x1.36751p-95f, 0x1.1362a8p-78f, 0x1.d55dfp-53f, 0x1.ad356ep-100f, 0.0f,
     0x1.773374p-15f, 0x1.c08da2p-102f, 0x1.f165a4p-47f, 0x1.fec97p-123f,
     0x1.01527ap-47f, 0x1.7647c4p-98f, 0x1.6f936cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.388094p-85f, 0x1.ddcfc4p-54f, 0x1.c327e4p-53f, 0.0f, 0x1.99d08p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab2c9cp-88f, 0.0f, 0x1.159cbp-64f, 0x1.47827cp-10f,
     0x1.a90986p-123f, 0.0f, 0x1.31154p-123f, 0.0f, 0.0f, 0.0f, 0x1.5e7b12p-114f,
     0x1.f289bcp-8f, 0x1.2afe28p-23f, 0x1.9192e4p-31f, 0.0f, 0.0f, 0x1.52aaeep-100f,
     0.0f, 0.0f, 0x1.f848e8p-67f, 0x1.52881ep-2f, 0x1.74338cp-114f, 0x1.a4266p-8f,
     0.0f, 0x1.b9aabcp-43f, 0x1.3cb1cep-105f, 0x1.a8359ap-126f, 0x1.b8f976p-114f,
     0.0f, 0x1.484a9cp-30f, 0.0f, 0.0f, 0.0f, 0x1.9e43b4p-82f, 0x1.dd2ebp-100f,
     0x1p0f, 0x1.ae7498p-65f, 0x1.6b917p-65f, 0x1.b77c56p-34f, 0x1.253294p-73f, 0.0f,
     0.0f, 0x1.15e04p-2f, 0.0f, 0.0f, 0.0f, 0x1.fe81c4p-24f, 0x1.015bcap-94f, 0.0f,
     0x1.ad25fp-6f, 0x1.4a3e3cp-85f, 0.0f, 0x1.61fae2p-116f, 0x1.46114cp-121f, 0.0f,
     0x1.5a58aep-80f, 0x1.e4807ap-80f, 0x1.d0b384p-64f, 0.0f, 0.0f, 0x1.c71cp-122f,
     0x1.9eec16p-80f, 0.0f, 0x1.6e91fcp-23f, 0.0f, 0x1.3ab698p-118f, 0.0f, 0.0f,
     0x1.d8a528p-119f, 0x1.be41ecp-102f, 0.0f, 0x1.ff1bdap-27f, 0.0f, 0.0f, 0.0f,
     0x1.77d168p-40f, 0.0f, 0.0f, 0x1.b1f19cp-65f, 0.0f, 0.0f, 0.0f, 0x1.f99282p-115f,
     0x1.641348p-101f, 0.0f, 0x1.d331eep-125f, 0.0f, 0x1.78c908p-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fea0ep-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.987be2p-8f, 0.0f, 0.0f, 0.0f, 0x1.add4acp-82f, 0.0f, 0.0f,
     0x1.ad92fap-28f, 0.0f, 0.0f, 0x1.36262ap-92f, 0x1.1b76a2p-61f, 0x1.9d8e22p-73f,
     0x1.38f37cp-20f, 0x1.ecb212p-94f, 0.0f, 0.0f, 0x1.ad5544p-17f, 0.0f, 0.0f,
     0x1.528928p-121f, 0.0f, 0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_exp10f4_u35avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_exp10f4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp10f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
