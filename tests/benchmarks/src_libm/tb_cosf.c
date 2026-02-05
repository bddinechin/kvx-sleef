/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_cosf.c --function cosf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.a013e6p-56f, 0x1.f1f57ap-65f, 0.0f, 0x1.f7519ep-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec9c22p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ff376p-124f,
     0x1.26097ep-28f, 0x1.05875cp-22f, 0.0f, 0.0f, 0.0f, 0x1.49d37cp-87f,
     0x1.ead4b4p-45f, 0.0f, 0x1.432bep-10f, 0x1.1a2d96p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98be7p-53f, 0x1.51c9c6p-79f, 0.0f, 0.0f, 0.0f, 0x1.7b08f6p-112f,
     0x1.ae25c6p-47f, 0.0f, 0.0f, 0x1.c28106p-50f, 0x1.00f9d2p-32f, 0x1.f41194p-48f,
     0x1.fbe4cep-35f, 0x1.d643e4p-117f, 0x1.495212p-32f, 0.0f, 0.0f, 0x1.6d9cc2p-109f,
     0.0f, 0x1.243af6p-115f, 0x1.6e1b56p-3f, 0x1.315dd6p-80f, 0.0f, 0.0f,
     0x1.d5a10cp-62f, 0.0f, 0x1.0546aep-7f, 0.0f, 0.0f, 0x1.01f8fp-14f, 0.0f,
     0x1.b517b8p-26f, 0x1.f0c6dcp-3f, 0x1.daa43ap-123f, 0x1.def89p-19f,
     0x1.e1e6e8p-90f, 0.0f, 0x1.8b5232p-39f, 0.0f, 0x1.0ddbb4p-29f, 0x1.440deep-35f,
     0.0f, 0x1.3d4d0ap-79f, 0x1.eadb7p-109f, 0.0f, 0.0f, 0x1.f239fp-38f,
     0x1.100a6ap-69f, 0x1.a0b1bcp-114f, 0x1.116da8p-45f, 0.0f, 0.0f, 0x1.c6b8cap-4f,
     0x1.e84fa2p-31f, 0.0f, 0x1.248112p-126f, 0.0f, 0.0f, 0x1.2d70cep-46f, 0.0f,
     0x1.ae5d7cp-79f, 0x1.0ab28p-121f, 0.0f, 0.0f, 0x1.d7c9b2p-8f, 0.0f, 0.0f,
     0x1.45b69p-70f, 0x1.bacf64p-64f, 0.0f, 0.0f, 0x1.735beep-102f, 0x1.283198p-77f,
     0x1.84a56ap-124f, 0.0f, 0.0f, 0x1.096926p-2f, 0x1.63faf2p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b4fdeep-53f, 0.0f, 0x1.5cbacap-103f, 0x1.cfe1d4p-45f, 0x1.551b62p-126f,
     0.0f, 0x1.8499e4p-118f, 0x1.a5758ap-20f, 0.0f, 0.0f, 0.0f, 0x1.a48ef8p-44f,
     0x1.db379p-58f, 0x1.3bf1d4p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1058bap-17f,
     0x1.1da25p-98f, 0.0f, 0x1.34524cp-23f, 0x1.af51e6p-31f, 0.0f, 0x1.dc69eep-27f,
     0.0f, 0.0f, 0.0f, 0x1.424a2ep-41f, 0.0f, 0x1.514a2ep-80f, 0x1.72c7fap-110f, 0.0f,
     0.0f, 0x1.14291ap-6f, 0.0f, 0.0f, 0x1.8ea7aap-13f, 0x1.1515f8p-70f,
     0x1.5fef2ep-81f, 0.0f, 0x1.e994d4p-93f, 0x1.8043d4p-83f, 0.0f, 0.0f, 0.0f,
     0x1.d63006p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3cbeap-102f, 0.0f,
     0x1.374e3ep-20f, 0.0f, 0.0f, 0x1.827d7cp-51f, 0x1.460bb2p-123f, 0.0f,
     0x1.dfe598p-103f, 0x1.f8ad2ep-25f, 0.0f, 0x1.9983b2p-86f, 0x1.4dbadap-16f,
     0x1.883358p-20f, 0.0f, 0x1.838464p-4f, 0.0f, 0x1.880efp-28f, 0x1.910ce8p-22f,
     0x1.564bp-52f, 0x1.ac4a12p-32f, 0.0f, 0.0f, 0.0f, 0x1.0634ccp-118f, 0.0f,
     0x1.31408ap-32f, 0.0f, 0x1.57df08p-68f, 0.0f, 0x1.6dd764p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.90dd14p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82a374p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.be31bp-121f, 0x1.6e2efep-61f, 0.0f, 0.0f, 0x1.5ebddap-94f,
     0x1.1f7084p-82f, 0.0f, 0x1.f0b022p-46f, 0x1.7b45p-123f, 0x1.047ff8p-88f,
     0x1.95528ep-2f, 0.0f, 0x1.3e8f06p-15f, 0x1.8f9066p-9f, 0x1.79156ep-25f,
     0x1.638f8ep-33f, 0.0f, 0x1.e3462ep-121f, 0x1.908f66p-116f, 0x1.1369p-67f,
     0x1.db0d7ap-56f, 0.0f, 0x1.d85ffcp-116f, 0.0f, 0x1.1b6c9ep-122f, 0x1.6982cep-73f,
     0x1.262ea2p-69f, 0x1.25c07ep-104f, 0.0f, 0x1.86c252p-91f, 0.0f, 0.0f,
     0x1.b47512p-97f, 0.0f, 0.0f, 0.0f, 0x1.028ep-27f, 0.0f, 0.0f, 0.0f,
     0x1.ebea2cp-52f, 0.0f, 0.0f, 0.0f, 0x1.852b8ap-33f, 0x1.894604p-61f,
     0x1.7bee04p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2551e2p-41f, 0x1.13507ap-85f, 0.0f,
     0x1.54b9e6p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7e99ep-72f,
     0x1.3a320ap-11f, 0x1.8b0df2p-118f, 0x1.124c76p-30f, 0.0f, 0.0f, 0.0f,
     0x1.7de85p-62f, 0x1.aaaa22p-124f, 0x1.b0a21cp-30f, 0x1.9521dap-26f,
     0x1.141c5ep-60f, 0.0f, 0x1.287f5cp-82f, 0x1.62f176p-98f, 0x1.02b32ap-10f, 0.0f,
     0.0f, 0.0f, 0x1.ea1594p-85f, 0.0f, 0.0f, 0.0f, 0x1.0f4e04p-48f, 0.0f,
     0x1.998a64p-15f, 0x1.5b871ap-97f, 0.0f, 0x1.20fa98p-71f, 0.0f, 0x1.71244p-50f,
     0x1.c136dep-125f, 0.0f, 0x1.c03194p-16f, 0x1.bf195p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.577beep-86f, 0.0f, 0x1.f5268cp-86f, 0.0f, 0.0f, 0.0f, 0x1.eb09fcp-126f, 0.0f,
     0.0f, 0x1.17249ep-56f, 0.0f, 0x1.f5cd92p-88f, 0x1.d6f53ap-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7fc34ap-81f, 0x1.38366p-32f, 0.0f, 0.0f, 0.0f,
     0x1.bf064p-34f, 0x1.b4769ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9aafd8p-89f, 0x1.f154d4p-22f, 0.0f, 0.0f, 0x1.504774p-123f, 0.0f, 0.0f,
     0x1.3e0bb6p-3f, 0.0f, 0x1.58aa4p-100f, 0x1.6aedap-13f, 0x1.2db74ap-105f,
     0x1.4263fep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb10fap-32f, 0.0f, 0x1.4126b6p-117f,
     0x1.81cebep-37f, 0.0f, 0x1.122e98p-89f, 0.0f, 0x1.89c21ap-40f, 0.0f,
     0x1.7f34acp-99f, 0x1.d593fcp-3f, 0x1.5d9cf8p-49f, 0x1.15bdecp-116f,
     0x1.23f784p-112f, 0x1.3e39ecp-22f, 0.0f, 0x1.0f434cp-18f, 0x1.023d18p-26f, 0.0f,
     0x1.36fbeap-88f, 0.0f, 0.0f, 0x1.bbae0cp-53f, 0.0f, 0x1.8f249ap-3f,
     0x1.33cc7p-41f, 0.0f, 0.0f, 0.0f, 0x1.20ade2p-86f, 0x1.f754bep-61f,
     0x1.47c6b6p-42f, 0.0f, 0x1.aabe3ep-82f, 0x1.f03e44p-52f, 0x1.1f671ap-15f,
     0x1.da0b82p-8f, 0.0f, 0x1.928c5ap-44f, 0.0f, 0x1.4c0da4p-25f, 0x1.e8e77cp-18f,
     0x1.479c24p-70f, 0x1.215a7cp-60f, 0x1.6b23b2p-91f, 0.0f, 0x1.fc1a24p-75f, 0.0f,
     0x1.35804ap-11f, 0.0f, 0x1.2b8b6p-95f, 0x1.0e2ea4p-32f, 0x1.8012c4p-108f, 0.0f,
     0x1.e38154p-108f, 0x1.947baap-123f, 0x1.16577ep-27f, 0.0f, 0.0f, 0.0f,
     0x1.613734p-77f, 0x1.55bc86p-7f, 0.0f, 0x1.984314p-69f, 0.0f, 0x1.ebc6fap-41f,
     0x1.80c3ap-79f, 0.0f, 0.0f, 0x1.fdb7b2p-73f, 0x1.0847ap-114f, 0x1.760344p-15f,
     0x1.9e16cp-121f, 0x1.f25d4ep-113f, 0x1.d3843ep-121f, 0x1.ead15ap-22f,
     0x1.34b378p-42f, 0.0f, 0x1.a4a128p-24f, 0.0f, 0x1.2e505cp-123f, 0.0f,
     0x1.112c82p-81f, 0.0f, 0x1.a059a8p-48f, 0.0f, 0.0f, 0.0f, 0x1.bb0422p-73f, 0.0f,
     0.0f, 0x1.1341cp-11f, 0x1.0eaba8p-19f, 0.0f, 0.0f, 0x1.8bff1ap-104f,
     0x1.d734bp-56f, 0x1.ea8f98p-43f, 0.0f, 0x1.eb0902p-75f, 0.0f, 0x1.3f5832p-124f,
     0x1.e6bdf6p-112f, 0.0f, 0x1.088c1ap-120f, 0x1.806654p-66f, 0x1.746f1cp-88f,
     0x1.966a94p-69f, 0x1.f6e8fap-65f, 0x1.48ffb6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.970848p-90f, 0x1.d0298p-31f, 0x1.426e6cp-101f, 0.0f, 0x1.0a1d8p-78f,
     0x1.42df64p-11f, 0.0f, 0.0f, 0x1.0fd1p-66f, 0.0f, 0.0f, 0x1.db8954p-111f,
     0x1.c2ceb4p-64f, 0.0f, 0x1.b2784ap-11f, 0.0f, 0.0f, 0x1.6a86bcp-114f,
     0x1.fc0e7p-68f, 0.0f, 0x1.bf9f04p-88f, 0x1.ba8cf8p-23f, 0x1.7f1ca4p-51f,
     0x1.ef3f0ep-79f, 0.0f, 0x1.1ed81ep-85f, 0x1.82472p-98f, 0.0f, 0x1.665facp-15f,
     0x1.14d7aep-86f, 0.0f, 0.0f, 0x1.f6a2ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f19d2p-92f, 0x1.26ddb4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfae5ap-80f,
     0x1.c9f10cp-94f, 0x1.8c0d2ep-95f, 0.0f, 0.0f, 0x1.14139cp-68f, 0.0f, 0.0f, 0.0f,
     0x1.acf5a8p-109f, 0.0f, 0.0f, 0x1.cb8076p-33f, 0x1.fb7ac4p-34f, 0.0f, 0.0f,
     0x1.48b73p-53f, 0.0f, 0.0f, 0x1.468fc6p-38f, 0.0f, 0x1.707db4p-79f, 0.0f, 0.0f,
     0x1.b47a2cp-94f, 0.0f, 0x1.7335cap-100f, 0x1.3de438p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6c97f8p-121f, 0x1.e80acep-60f, 0x1.f58196p-116f, 0.0f, 0x1.62fceap-42f,
     0.0f, 0x1.0e5664p-50f, 0x1.c2a6fcp-126f, 0x1.909dbap-69f, 0.0f, 0.0f,
     0x1.97cb84p-91f, 0.0f, 0.0f, 0x1.e59282p-69f, 0x1.9f4cacp-92f, 0x1.f18708p-45f,
     0x1.5d4a98p-47f, 0.0f, 0x1.44f08ap-34f, 0.0f, 0x1.b4e0bap-36f, 0x1.40be2ep-19f,
     0.0f, 0x1.a3cfb2p-110f, 0.0f, 0.0f, 0x1.69ddb2p-92f, 0x1.b52842p-121f,
     0x1.bac862p-69f, 0x1.de8dd4p-82f, 0x1.babca2p-46f, 0.0f, 0x1.2fb5ccp-1f, 0.0f,
     0x1.fa34a6p-114f, 0.0f, 0x1.1200c2p-88f, 0x1.20030cp-13f, 0x1.8e11cp-10f,
     0x1.e6fa24p-75f, 0.0f, 0x1.a74feap-46f, 0x1.37061p-81f, 0x1.f341e2p-112f, 0.0f,
     0x1.1189dep-83f, 0x1.fa044ep-52f, 0x1.58bcecp-60f, 0.0f, 0.0f, 0x1.943b02p-108f,
     0.0f, 0x1.739dc6p-82f, 0.0f, 0.0f, 0x1.fa1e6ap-23f, 0.0f, 0.0f, 0x1.58697ep-122f,
     0x1.cfe692p-29f, 0.0f, 0.0f, 0.0f, 0x1.eb4fa4p-113f, 0x1.b009f4p-118f, 0.0f,
     0x1.bbd154p-43f, 0x1.bdf344p-85f, 0.0f, 0.0f, 0x1.55308cp-115f, 0.0f,
     0x1.55c67p-111f, 0x1.70d31p-105f, 0.0f, 0x1.476edp-9f, 0x1.a9dc8ap-62f,
     0x1.26aa62p-51f, 0.0f, 0.0f, 0x1.b4f3ccp-105f, 0.0f, 0x1.5d5732p-39f, 0.0f,
     0x1.4eb69cp-109f, 0.0f, 0x1.cbba6cp-102f, 0x1.44f73cp-94f, 0.0f, 0x1.22bc3ep-9f,
     0x1.548fccp-55f, 0.0f, 0x1.f7838ap-124f, 0.0f, 0x1.529354p-31f, 0x1.8e6944p-1f,
     0.0f, 0.0f, 0x1.3c3218p-9f, 0x1.f05b7ep-12f, 0x1.d2144p-94f, 0x1.cd38bcp-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f314ap-23f, 0x1.63e392p-57f, 0.0f, 0.0f, 0.0f,
     0x1.5bf27cp-117f, 0x1.3744c4p-57f, 0.0f, 0x1.427694p-103f, 0.0f,
     0x1.d9dc2cp-118f, 0x1.85a262p-126f, 0.0f, 0x1.28ab2cp-42f, 0x1.c1de8cp-62f,
     0x1.720dd8p-60f, 0.0f, 0.0f, 0x1.05ff42p-51f, 0.0f, 0x1.bb04e2p-88f, 0.0f, 0.0f,
     0x1.2db4eap-41f, 0.0f, 0x1.18c2ccp-91f, 0x1.cbdc2cp-42f, 0.0f, 0x1.a922ep-19f,
     0.0f, 0.0f, 0x1.4ab88ep-75f, 0x1.4a4632p-89f, 0x1.38aacap-77f, 0x1.0712cp-57f,
     0.0f, 0.0f, 0x1.699f4cp-80f, 0.0f, 0x1.46d494p-7f, 0x1.2d04c6p-52f, 0.0f, 0.0f,
     0x1.49bd6ep-57f, 0.0f, 0x1.16176ap-44f, 0x1.9f0e62p-120f, 0.0f, 0x1.47b13cp-11f,
     0.0f, 0.0f, 0x1.73037p-83f, 0.0f, 0.0f, 0x1.cca10cp-100f, 0.0f, 0x1.89a978p-4f,
     0x1.7e2f9ap-2f, 0x1.3da2b6p-29f, 0.0f, 0x1.2991bp-35f, 0x1.ea8e94p-10f,
     0x1.cd127ap-39f, 0x1.79f6e6p-114f, 0.0f, 0x1.9d16b2p-95f, 0.0f, 0.0f,
     0x1.4cf9bap-4f, 0.0f, 0.0f, 0x1.5671d2p-29f, 0x1.3089f8p-44f, 0x1.9f38f4p-82f,
     0x1.1fc15ap-8f, 0.0f, 0x1.fcb728p-63f, 0.0f, 0x1.98a4f6p-118f, 0.0f,
     0x1.eec7bp-37f, 0x1.8010cap-1f, 0.0f, 0x1.e288c2p-35f, 0x1.8d28fap-61f, 0.0f,
     0x1.dffee6p-35f, 0.0f, 0.0f, 0x1.0c5752p-79f, 0.0f, 0x1.4c060ep-88f, 0.0f,
     0x1.6e1146p-16f, 0x1.e48898p-6f, 0x1.09297ap-63f, 0.0f, 0x1.623bb8p-48f,
     0x1.d30e5cp-23f, 0.0f, 0.0f, 0x1.6235aep-86f, 0.0f, 0x1.3c89fcp-4f,
     0x1.953878p-99f, 0x1.62aa8ep-28f, 0.0f, 0x1.2610dp-82f, 0.0f, 0x1.245724p-59f,
     0x1.8c1e0ap-124f, 0x1.61d1fap-88f, 0x1.6f682ap-34f, 0x1.63e146p-70f, 0.0f, 0.0f,
     0x1.d23c7ap-53f, 0x1.605cdep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12fde2p-28f, 0.0f, 0x1.ef94f4p-3f, 0.0f, 0.0f, 0.0f, 0x1.b76c8cp-89f,
     0x1.850204p-53f, 0x1.0a935p-31f, 0x1.477ec4p-100f, 0x1.f9d08ap-93f,
     0x1.ee0aa8p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef59dep-74f, 0.0f, 0.0f, 0.0f,
     0x1.2568dp-114f, 0.0f, 0.0f, 0.0f, 0x1.84565p-52f, 0x1.d69c6p-93f,
     0x1.88914cp-112f, 0.0f, 0x1.1fb7cep-6f, 0x1.202a72p-79f, 0x1.579ce2p-110f,
     0x1.9353ap-95f, 0x1.ba1d8ap-50f, 0x1.56eb72p-81f, 0x1.d1503ap-71f,
     0x1.c7442ep-31f, 0x1.2925bap-53f, 0.0f, 0x1.d71f86p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bb1514p-33f, 0x1.7ec6bp-55f, 0.0f, 0.0f, 0.0f, 0x1.3cb682p-117f,
     0x1.61aaaap-84f, 0.0f, 0.0f, 0x1.bdb1b4p-105f, 0.0f, 0.0f, 0x1.09efd6p-123f,
     0x1.7414d4p-40f, 0.0f, 0x1.a21fep-36f, 0.0f, 0.0f, 0.0f, 0x1.b3061cp-78f,
     0x1.9c3e9p-122f, 0.0f, 0x1.f39a1ep-62f, 0x1.dbb96ep-51f, 0x1.e3af82p-100f,
     0x1.ba5292p-106f, 0x1.e33f94p-118f, 0.0f, 0x1.11fd4ep-118f, 0x1.f40eap-82f, 0.0f,
     0.0f, 0.0f, 0x1.d5ba48p-6f, 0x1.d6464cp-29f, 0x1.e0b96cp-51f, 0.0f,
     0x1.692388p-75f, 0x1.3ff63ep-110f, 0x1.d2bccp-113f, 0.0f, 0x1.88923p-107f, 0.0f,
     0.0f, 0x1.ea4a3ap-122f, 0x1.a83c28p-27f, 0.0f, 0x1.fde0aap-9f, 0.0f,
     0x1.7c611ep-62f, 0x1.519c98p-57f, 0x1.040b2cp-94f, 0.0f, 0.0f, 0x1.e43edep-41f,
     0.0f, 0.0f, 0x1.3a393p-39f, 0x1.2adf02p-123f, 0x1.b679e6p-12f, 0.0f,
     0x1.44d986p-62f, 0.0f, 0.0f, 0x1.c3f28ap-85f, 0.0f, 0x1.6e68a2p-34f, 0.0f,
     0x1.1d305p-7f, 0x1.71b392p-41f, 0.0f, 0x1.e3e24ep-66f, 0x1.393262p-99f, 0.0f,
     0x1.297852p-62f, 0x1.5ff5e4p-111f, 0x1.c80808p-95f, 0x1.0bb372p-117f,
     0x1.35f038p-121f, 0x1.c6cf48p-124f, 0.0f, 0x1.e3ee9ep-88f, 0x1.6ecc36p-113f,
     0x1.31cfd6p-110f, 0.0f, 0x1.e90048p-55f, 0x1.d595f2p-61f, 0x1.28762p-3f, 0.0f,
     0.0f, 0x1.554b02p-52f, 0x1.072c06p-103f, 0.0f, 0.0f, 0x1.46e272p-41f, 0.0f,
     0x1.83ec34p-47f, 0.0f, 0x1.56p-109f, 0x1.5600e2p-91f, 0.0f, 0x1.57be5ep-96f,
     0x1.b3a19p-107f, 0.0f, 0.0f, 0x1.217c08p-67f, 0.0f, 0x1.03edeep-33f, 0.0f,
     0x1.0ec38ep-23f, 0.0f, 0x1.bebd06p-24f, 0x1.c009d4p-101f, 0x1.0f31d8p-119f,
     0x1.5f799ap-40f, 0x1.0416e4p-118f, 0x1.494af4p-32f, 0.0f, 0x1.2a153cp-96f,
     0x1.50474ap-104f, 0x1.0d6936p-59f, 0x1.df561ap-43f, 0x1.d66f1cp-39f, 0.0f,
     0x1.c5caa2p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54db8ap-3f, 0.0f, 0x1.4a82e8p-104f,
     0.0f, 0x1.7af892p-94f, 0x1.a26072p-123f, 0x1.8ec8cep-73f, 0.0f, 0.0f,
     0x1.067aep-37f, 0x1.b25176p-33f, 0x1.9597eap-64f, 0.0f, 0.0f, 0x1.b260bap-107f,
     0.0f, 0x1.5bf7c8p-8f, 0.0f, 0.0f, 0x1.99c4fep-5f, 0x1.64bb64p-107f, 0.0f,
     0x1.8c1d4ep-94f, 0x1.c23906p-53f, 0.0f, 0x1.e4961cp-39f, 0x1.3a1384p-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e5a4p-106f, 0.0f, 0x1.673e44p-67f,
     0.0f, 0x1.c4bf16p-119f, 0x1.d7c38cp-11f, 0.0f, 0.0f, 0x1.7696e2p-49f,
     0x1.51a5c4p-77f, 0.0f, 0.0f
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
            tmp1 = cosf(tmp0);
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
    printf("cosf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("cosf bench acc %a\n", global_bench_acc);
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
