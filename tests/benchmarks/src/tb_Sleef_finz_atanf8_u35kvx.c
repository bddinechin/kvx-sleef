/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf8_u35kvx.c --function \
 *     Sleef_finz_atanf8_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.59decep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e61604p-122f,
     0x1.08e9f6p-124f, 0x1.c37254p-100f, 0x1.c3b888p-18f, 0x1.93c6ecp-83f, 0.0f,
     0x1.20f92p-46f, 0x1.cb7344p-27f, 0.0f, 0.0f, 0.0f, 0x1.4f0aa8p-58f,
     0x1.81f172p-71f, 0x1.eb380ap-112f, 0x1.7cbd4cp-45f, 0x1.e84984p-98f,
     0x1.36e7c4p-8f, 0.0f, 0.0f, 0.0f, 0x1.f60d8ep-74f, 0.0f, 0x1.a91142p-121f,
     0x1.14cd72p-120f, 0.0f, 0.0f, 0.0f, 0x1.841832p-122f, 0.0f, 0x1.856248p-87f,
     0.0f, 0.0f, 0x1.13a776p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90b256p-15f,
     0x1.d7cac2p-123f, 0x1.fcb9e8p-68f, 0x1.3714fcp-110f, 0x1.4f5664p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.534512p-14f, 0x1.e8580ap-106f, 0.0f, 0x1.8575d4p-8f,
     0x1.86fa8ep-48f, 0.0f, 0x1.2e97f6p-74f, 0x1.64185ep-61f, 0x1.ab4754p-114f,
     0x1.70139cp-105f, 0x1.53f13ep-82f, 0.0f, 0.0f, 0x1.e79302p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.28ac88p-80f, 0x1.eb95fp-111f, 0.0f, 0.0f, 0x1.e827b6p-109f,
     0.0f, 0.0f, 0.0f, 0x1.e87cbcp-65f, 0x1.d7326ep-57f, 0.0f, 0x1.cbaf28p-44f,
     0x1.a4c8e4p-117f, 0x1.4ae10ap-61f, 0x1.48851ap-32f, 0x1.8a8456p-103f,
     0x1.e6e31ep-59f, 0x1.23a964p-37f, 0.0f, 0x1.0cc4a2p-98f, 0x1.461ce8p-108f,
     0x1p0f, 0x1.a13826p-14f, 0.0f, 0.0f, 0x1.7b70acp-28f, 0x1.71acbp-103f,
     0x1.0ad1b8p-83f, 0.0f, 0x1.c21754p-14f, 0x1.1877cep-57f, 0.0f, 0x1.8a7ae4p-90f,
     0x1.b1865p-79f, 0.0f, 0x1.d624bcp-9f, 0.0f, 0x1.20cf7ap-91f, 0x1.1934dap-89f,
     0x1.5ff33cp-57f, 0x1.9d230cp-43f, 0.0f, 0x1.469746p-27f, 0x1.987fc4p-120f, 0.0f,
     0.0f, 0.0f, 0x1.1ac8c4p-71f, 0.0f, 0.0f, 0x1.cf5cbap-109f, 0x1.495e14p-46f, 0.0f,
     0x1.0843a6p-47f, 0x1.355c4cp-47f, 0x1.908614p-49f, 0x1.7383e6p-3f, 0.0f,
     0x1.d4f878p-40f, 0.0f, 0x1.524bc4p-106f, 0x1.f5733p-97f, 0.0f, 0x1.fbda14p-90f,
     0.0f, 0x1.aa7be6p-13f, 0.0f, 0x1.5fc466p-116f, 0x1.c9db68p-28f, 0x1.2fffa8p-49f,
     0x1.0efd84p-34f, 0.0f, 0x1.0ef38ap-40f, 0x1.6df81ap-115f, 0.0f, 0x1.4a6a42p-13f,
     0x1.e20b6p-19f, 0x1.40a214p-112f, 0x1.b002b4p-91f, 0x1.5ca91ep-76f, 0.0f, 0.0f,
     0.0f, 0x1.11c794p-67f, 0x1.5720acp-78f, 0.0f, 0.0f, 0x1.f4850ap-54f, 0.0f, 0.0f,
     0x1.b87bp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ecdb4p-16f, 0x1.86e9d2p-57f, 0x1.29b16cp-79f, 0.0f, 0.0f, 0.0f,
     0x1.77b258p-97f, 0.0f, 0x1.7a5ef8p-112f, 0x1.4f4842p-69f, 0x1.8df3dep-49f,
     0x1.7f3a0ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38aaa6p-1f, 0x1.8f180ap-124f,
     0x1.68a9fap-115f, 0x1.ffa4cap-122f, 0.0f, 0x1.cc6a5ap-88f, 0.0f, 0x1.1008a2p-22f,
     0.0f, 0x1.54d09ep-37f, 0x1.bc6164p-61f, 0x1.e51c2ep-80f, 0.0f, 0.0f,
     0x1.0bf2e6p-47f, 0.0f, 0x1.f7e462p-5f, 0x1.8a743ap-24f, 0.0f, 0x1.8e877p-10f,
     0x1.98bf22p-93f, 0x1.bd80d8p-32f, 0x1.c9e39cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.faf7fp-54f, 0.0f, 0x1.c59dc2p-119f, 0.0f, 0x1.e87906p-69f, 0.0f,
     0x1.853caep-105f, 0x1.48d94p-122f, 0.0f, 0.0f, 0.0f, 0x1.4a8f9cp-54f, 0.0f, 0.0f,
     0.0f, 0x1.dbc81cp-5f, 0x1.d98c88p-100f, 0x1.d78e3ep-57f, 0.0f, 0.0f,
     0x1.583926p-92f, 0.0f, 0x1.b87fbep-91f, 0.0f, 0.0f, 0x1.79be92p-52f, 0.0f,
     0x1.6d1536p-79f, 0x1.12aa1p-98f, 0.0f, 0.0f, 0x1.8d4366p-100f, 0.0f,
     0x1.d4bb88p-85f, 0x1.1ceec2p-17f, 0x1.00eb06p-11f, 0x1.ced4aap-22f, 0.0f, 0.0f,
     0.0f, 0x1.6eaccep-124f, 0.0f, 0.0f, 0.0f, 0x1.a66568p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.16cf12p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52580cp-36f, 0.0f,
     0x1.440f18p-16f, 0x1.9a333p-94f, 0.0f, 0x1.c5546p-124f, 0x1.20ec3ep-116f, 0.0f,
     0.0f, 0.0f, 0x1.b7e40ep-2f, 0x1.a2578p-55f, 0x1.513e4ep-16f, 0.0f,
     0x1.23ddecp-45f, 0.0f, 0x1.a655acp-16f, 0.0f, 0x1.1b8ab8p-1f, 0x1.99d998p-93f,
     0.0f, 0x1.4c1edap-76f, 0.0f, 0.0f, 0.0f, 0x1.7857fep-60f, 0x1.afbc4p-101f,
     0x1.66f8bap-21f, 0x1.b5c558p-25f, 0.0f, 0.0f, 0.0f, 0x1.640f5ep-106f, 0.0f,
     0x1.d9c546p-26f, 0.0f, 0x1.c1d7dep-76f, 0.0f, 0.0f, 0x1.db9b7ep-48f, 0.0f,
     0x1.8f3ap-5f, 0.0f, 0x1.b72accp-51f, 0.0f, 0x1.7e5aa4p-96f, 0.0f, 0.0f, 0.0f,
     0x1.c5b446p-44f, 0x1.3e1428p-99f, 0x1.06cff4p-92f, 0x1.9f7fe6p-29f,
     0x1.96e622p-29f, 0.0f, 0x1.95d89cp-70f, 0x1.f2ab8cp-71f, 0.0f, 0x1.6482cap-52f,
     0x1.42acdcp-40f, 0x1.e96ebep-31f, 0x1.f9d956p-3f, 0.0f, 0x1.2c42f8p-25f,
     0x1.ed2d36p-16f, 0.0f, 0x1.642658p-95f, 0x1.dcce06p-53f, 0x1.e5c3f8p-78f, 0.0f,
     0x1.04efc6p-55f, 0.0f, 0.0f, 0.0f, 0x1.4dc85cp-63f, 0x1.f882e6p-77f,
     0x1.aec74ap-101f, 0x1.8c7064p-94f, 0.0f, 0x1.870d0cp-65f, 0x1.05eb42p-6f,
     0x1.7c2abep-106f, 0.0f, 0x1.18f7fap-104f, 0x1.b0311p-15f, 0x1.82e5e8p-119f,
     0x1.f96778p-26f, 0.0f, 0.0f, 0x1.d943cep-7f, 0.0f, 0x1.1b60fp-73f, 0.0f,
     0x1.9dff7ep-70f, 0.0f, 0x1.310802p-75f, 0x1.83671cp-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.45cec8p-88f, 0x1.1792cep-57f, 0x1.3e8fe2p-52f, 0.0f,
     0x1.a8966p-104f, 0x1.b240e2p-64f, 0.0f, 0.0f, 0x1.2c5f0ep-21f, 0x1.9bc956p-1f,
     0x1.73c5ap-15f, 0.0f, 0x1.97f6e2p-66f, 0x1.252978p-118f, 0x1.45272p-34f, 0.0f,
     0.0f, 0x1.c6219ap-70f, 0.0f, 0x1.39a864p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0fd6dcp-49f, 0x1.11ddep-123f, 0x1.418274p-69f, 0.0f, 0.0f, 0x1.bea3b2p-11f,
     0x1.f11fbep-19f, 0x1.6efaap-4f, 0x1.35a73ep-122f, 0x1.8f55c6p-70f,
     0x1.57e8eap-97f, 0x1.15b262p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e83d2cp-98f, 0.0f, 0.0f, 0.0f, 0x1.e825bap-54f, 0.0f, 0x1.2acfdcp-44f,
     0x1.8e19f2p-36f, 0x1.d730aap-5f, 0x1.ab4fc6p-81f, 0.0f, 0x1.38cf54p-53f, 0.0f,
     0.0f, 0x1.33369cp-42f, 0x1.ae665cp-60f, 0.0f, 0.0f, 0.0f, 0x1.323bf4p-109f,
     0x1.b6827p-30f, 0x1.e89cdep-63f, 0x1.74f034p-73f, 0x1.86b706p-125f, 0.0f,
     0x1.c21abep-23f, 0x1.51033ap-84f, 0x1.53c9ecp-26f, 0x1.d63ce8p-6f,
     0x1.666e44p-15f, 0x1.bbaad4p-94f, 0.0f, 0.0f, 0x1.8b1606p-66f, 0x1.8a366p-10f,
     0.0f, 0x1.485d44p-42f, 0.0f, 0.0f, 0x1.89cc6ep-31f, 0x1.d0f592p-61f,
     0x1.fce3dp-115f, 0x1.1e106ep-101f, 0.0f, 0.0f, 0x1.a69c56p-84f, 0x1.fcd91cp-105f,
     0x1.bf6756p-25f, 0.0f, 0.0f, 0x1.d0db22p-44f, 0x1.f000dp-98f, 0.0f,
     0x1.13376ep-106f, 0.0f, 0x1.697118p-97f, 0.0f, 0x1.468c4cp-80f, 0x1.aaf392p-79f,
     0.0f, 0x1.ac27bp-56f, 0.0f, 0.0f, 0x1.446f18p-87f, 0x1.5efbe6p-83f,
     0x1.802828p-11f, 0.0f, 0x1.156aap-19f, 0.0f, 0.0f, 0x1.d36a3ep-66f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.f29f78p-60f, 0.0f, 0.0f, 0x1.e384a2p-10f, 0x1.f71ab8p-48f,
     0.0f, 0.0f, 0x1.2b460ep-70f, 0.0f, 0x1.71123cp-73f, 0x1.6ea8a2p-85f,
     0x1.ec9828p-107f, 0x1.87712ep-104f, 0.0f, 0.0f, 0x1.17232cp-88f, 0x1.ca029p-9f,
     0.0f, 0x1.a4a94ap-89f, 0x1.ea68dp-14f, 0.0f, 0x1.3f6c6ap-72f, 0.0f,
     0x1.a6e996p-93f, 0x1.f2024ap-85f, 0x1.86b5p-47f, 0.0f, 0x1.9efb98p-87f, 0.0f,
     0x1.9acfp-43f, 0x1.574e4ep-78f, 0.0f, 0x1.bd308ep-125f, 0x1.36dbc6p-41f,
     0x1.ca619p-62f, 0x1.112ba6p-102f, 0.0f, 0x1.05844ep-109f, 0.0f, 0x1.efb67p-36f,
     0x1.4d2498p-87f, 0x1.ec7e6p-105f, 0.0f, 0.0f, 0x1.1fab64p-90f, 0.0f,
     0x1.6bc524p-81f, 0x1.35ap-7f, 0.0f, 0x1.75faa8p-56f, 0x1.76455ep-37f,
     0x1.7ffab6p-56f, 0x1.5edf36p-111f, 0x1.02f1cap-14f, 0x1.78e1a8p-33f, 0.0f, 0.0f,
     0x1.e2f1c2p-42f, 0.0f, 0x1.375e64p-38f, 0x1.012edap-101f, 0.0f, 0x1.c47806p-55f,
     0.0f, 0.0f, 0.0f, 0x1.fbae0cp-12f, 0x1.a1e244p-53f, 0.0f, 0.0f, 0x1.173e6cp-18f,
     0.0f, 0x1.5b3724p-43f, 0.0f, 0x1.081a7ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9fbb0ep-48f, 0.0f, 0x1.0075dp-4f, 0x1.3cde64p-1f, 0x1.0799acp-25f,
     0x1.a72e1p-22f, 0x1.ff7c4p-64f, 0.0f, 0.0f, 0.0f, 0x1.dfc99p-90f,
     0x1.3b5b24p-126f, 0.0f, 0x1.6d4b84p-34f, 0x1.f3a2ap-20f, 0x1.ba76a4p-16f, 0.0f,
     0.0f, 0.0f, 0x1.eab49ap-99f, 0x1.e7fa08p-117f, 0.0f, 0x1.e30684p-33f, 0.0f, 0.0f,
     0x1.683efp-123f, 0x1.3b6dcap-9f, 0.0f, 0x1.1f6846p-36f, 0x1.ac6e98p-96f,
     0x1.ce99c8p-123f, 0x1.c4953ep-42f, 0x1.9fe372p-94f, 0.0f, 0x1.68a084p-112f,
     0x1.7cfb6ep-80f, 0.0f, 0.0f, 0x1.9d7a7ep-65f, 0.0f, 0x1.bf8424p-58f,
     0x1.04a314p-74f, 0.0f, 0x1.9344f4p-82f, 0x1.dbaedp-67f, 0x1.f877aep-123f, 0.0f,
     0.0f, 0x1.cfd51p-63f, 0x1.8577e6p-33f, 0.0f, 0.0f, 0x1.967594p-62f,
     0x1.db85b6p-12f, 0.0f, 0x1.0e28ecp-121f, 0.0f, 0.0f, 0x1.0fcedap-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.727282p-53f, 0x1p0f, 0x1.290466p-61f, 0x1.0ea948p-114f,
     0.0f, 0x1.60c74ep-61f, 0x1.05b6dp-3f, 0.0f, 0x1.48b66ep-48f, 0.0f,
     0x1.bd0608p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7cc4p-109f, 0.0f, 0x1.40ba62p-45f,
     0.0f, 0.0f, 0x1.3a974p-72f, 0.0f, 0.0f, 0x1.da0e86p-88f, 0x1.be8f7ep-20f,
     0x1.f7b7dcp-45f, 0.0f, 0.0f, 0x1.ef340ap-90f, 0.0f, 0x1.d83fdap-62f,
     0x1.0e0c7ap-45f, 0.0f, 0.0f, 0x1.d9f60ap-103f, 0x1.a31256p-30f, 0x1.cb731ap-19f,
     0.0f, 0x1.bee85ep-57f, 0x1.bdfd76p-19f, 0.0f, 0.0f, 0.0f, 0x1.89238ap-52f, 0.0f,
     0x1.0e5256p-90f, 0.0f, 0x1.b72a1cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dc246p-45f,
     0x1.f48becp-122f, 0.0f, 0.0f, 0x1.0f4ab2p-114f, 0.0f, 0.0f, 0.0f,
     0x1.32b32ap-100f, 0x1.8a7104p-121f, 0x1.b42f94p-23f, 0x1.c96574p-104f,
     0x1.9b041ep-92f, 0x1.bdc49p-85f, 0x1.d2961ep-91f, 0x1.cac8ap-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.89f9dap-58f, 0x1.e815eep-22f, 0x1.1134b6p-94f, 0.0f,
     0x1.62fea2p-66f, 0.0f, 0.0f, 0x1.6b5e44p-62f, 0x1.9cf474p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50e7bep-58f, 0x1.5e5bbp-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.de117ap-51f, 0x1.c990ccp-30f, 0.0f, 0x1.04873cp-115f,
     0x1.582ce2p-32f, 0x1.3538e8p-56f, 0.0f, 0x1.9f4216p-28f, 0.0f, 0.0f,
     0x1.f00596p-106f, 0x1.5fb4f4p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c00d8p-29f, 0.0f, 0.0f, 0x1.cae8c8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6f8bp-67f, 0x1.3f4aa8p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59b932p-35f,
     0x1.da4b9cp-11f, 0x1.44dde6p-113f, 0.0f, 0x1.b9b05cp-23f, 0x1p0f, 0.0f, 0.0f,
     0x1.fede3cp-29f, 0.0f, 0.0f, 0.0f, 0x1.61d7dcp-103f, 0.0f, 0x1.628a04p-115f,
     0x1.fbef46p-3f, 0.0f, 0.0f, 0.0f, 0x1.8b3f8cp-61f, 0x1.9de4cap-82f,
     0x1.ee1868p-62f, 0.0f, 0x1.8295bap-117f, 0x1.63e358p-22f, 0x1.10cb3p-19f, 0.0f,
     0x1.4d6a6cp-91f, 0x1.e43d96p-45f, 0x1.b864ccp-41f, 0x1.bc47aep-2f, 0.0f,
     0x1.63a69ep-76f, 0.0f, 0.0f, 0x1.c69984p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59df18p-1f, 0.0f, 0.0f, 0.0f, 0x1.2d97dp-79f, 0x1.ce6a6ep-90f, 0.0f,
     0x1.b92b92p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5bccep-108f, 0.0f, 0.0f,
     0x1.083ba8p-47f, 0x1.b87b38p-115f, 0x1.e91018p-29f, 0x1.c2bf9p-29f,
     0x1.6d6702p-23f, 0.0f, 0x1.3ce2c2p-88f, 0x1.893c1ep-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09bbdep-108f, 0x1.7e06b4p-87f, 0.0f, 0x1.63afdp-115f, 0.0f, 0x1.1aa6a4p-29f,
     0.0f, 0x1.a63ed8p-113f, 0.0f, 0.0f, 0x1.0146cap-98f, 0x1.1ffa5cp-120f, 0.0f,
     0.0f, 0.0f, 0x1.d64fdcp-112f, 0.0f, 0.0f, 0x1.7bb53cp-2f, 0.0f, 0x1.cfc5f6p-114f,
     0.0f, 0x1.9091bap-125f, 0.0f, 0.0f, 0x1.64b5c6p-7f, 0.0f, 0.0f, 0.0f,
     0x1.992428p-12f, 0x1.63a028p-42f, 0.0f, 0.0f, 0x1.58d8e8p-49f, 0.0f,
     0x1.5a22bp-23f, 0.0f, 0x1.4d0358p-109f, 0.0f, 0x1.c14bfep-81f, 0.0f, 0.0f, 0.0f,
     0x1.f90fe2p-42f, 0x1.89b1f6p-63f, 0x1.ccf54ap-123f, 0x1.a1f51cp-37f,
     0x1.593e2p-46f, 0.0f, 0.0f, 0x1.53e7cep-58f, 0x1.eb1eb4p-109f, 0.0f, 0.0f,
     0x1.61ea1p-109f, 0.0f, 0x1.3750c6p-21f, 0.0f, 0.0f, 0x1.530734p-68f,
     0x1.cbf87ap-1f, 0.0f, 0x1p0f, 0.0f, 0x1.29d4b2p-87f, 0.0f, 0x1.8514f2p-118f,
     0x1.820a86p-121f, 0x1.ff019cp-23f, 0x1.db5a8ep-30f, 0.0f, 0.0f, 0x1.9eb7b4p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f69694p-111f, 0x1.8aa0e8p-123f, 0.0f,
     0x1.824dfap-111f, 0.0f, 0.0f, 0.0f, 0x1.4f56cap-17f, 0x1.714a2ep-16f,
     0x1.67e7e4p-55f, 0.0f, 0x1.f8ac94p-70f, 0.0f, 0.0f, 0x1.8c70dp-51f, 0.0f, 0.0f,
     0x1.cb322ep-7f, 0.0f, 0.0f, 0x1.36d948p-90f, 0x1.d05168p-36f, 0x1.be1d4ep-52f,
     0.0f, 0x1.63db6ap-55f, 0.0f, 0x1.ec9edp-115f, 0.0f, 0.0f, 0x1.26f122p-18f,
     0x1.0e48c8p-60f, 0.0f, 0.0f, 0x1.94d55ap-28f, 0.0f, 0x1.0eeac4p-118f,
     0x1.2c118p-23f, 0x1.08c55ep-15f, 0.0f, 0.0f, 0.0f, 0x1.8eda34p-104f, 0.0f,
     0x1.52e746p-32f, 0.0f, 0x1.778caep-28f, 0x1.d06d42p-69f, 0.0f, 0.0f,
     0x1.207646p-43f, 0x1.3c71dp-94f, 0.0f, 0.0f, 0.0f, 0x1.c03d2p-19f,
     0x1.da987cp-23f, 0x1.b9f0a2p-32f, 0.0f, 0x1.2090c6p-32f, 0x1.fa90ccp-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6947ep-63f, 0x1.e2ba46p-124f, 0.0f,
     0x1.1a7d48p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.037deap-94f, 0.0f, 0.0f,
     0.0f, 0x1.9ec048p-17f, 0.0f, 0x1.c2a0acp-71f, 0x1.53f896p-46f, 0x1.3bdeb4p-27f,
     0.0f, 0.0f, 0x1.d4e676p-8f, 0x1.b382ecp-1f, 0.0f, 0x1.d87cecp-55f, 0.0f,
     0x1.c54258p-96f, 0x1.3f0ecap-9f, 0.0f, 0.0f, 0x1.fc213p-76f, 0x1.d8fe4ep-73f,
     0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_atanf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_atanf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_atanf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
