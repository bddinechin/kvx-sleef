/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f8_u10kvx.c --function \
 *     Sleef_finz_log2f8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.27055p-53f, 0.0f, 0x1.3c1cfap-105f, 0x1.7426fcp-25f, 0x1.89a04p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06e5dep-26f, 0x1.33c4dep-115f,
     0x1.55191cp-79f, 0.0f, 0x1.8dc65ep-30f, 0.0f, 0x1.559628p-89f, 0.0f,
     0x1.2fe652p-105f, 0x1.04027p-37f, 0x1.15cb26p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a92ae6p-126f, 0x1.0ecb64p-114f, 0x1.4a650cp-8f, 0.0f, 0x1.f5d6eep-116f, 0.0f,
     0x1.4132e4p-122f, 0x1.2709eap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72edcep-2f, 0.0f,
     0x1.946bbcp-43f, 0x1.41b2fep-27f, 0.0f, 0x1.d14696p-18f, 0.0f, 0.0f, 0.0f,
     0x1.c80beap-31f, 0x1.d4b306p-81f, 0.0f, 0x1.94a61p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b5a6p-90f, 0x1.a9283cp-110f, 0x1.860caap-27f, 0.0f, 0x1.370e74p-73f, 0.0f,
     0x1.ea2ebap-23f, 0x1.d2aeb2p-110f, 0.0f, 0.0f, 0x1.c4e99cp-51f, 0.0f,
     0x1.1b0b4ep-56f, 0.0f, 0.0f, 0x1.94ff36p-120f, 0.0f, 0.0f, 0x1.24703ep-34f,
     0x1.f3abf6p-121f, 0.0f, 0x1.b21dc6p-14f, 0.0f, 0.0f, 0x1.eec32p-59f,
     0x1.ec6bbcp-74f, 0.0f, 0x1.2e189ep-62f, 0.0f, 0x1.54cd92p-76f, 0x1.520accp-61f,
     0x1.e1d93ep-15f, 0.0f, 0x1.8ee43p-42f, 0x1.6624bep-102f, 0.0f, 0x1.41ee76p-96f,
     0x1.6fea04p-61f, 0x1.afb554p-29f, 0x1.fb199p-123f, 0x1.12799p-124f,
     0x1.48be4cp-63f, 0x1.eb109cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9ff18p-14f,
     0x1.137e4p-123f, 0.0f, 0.0f, 0x1.bfd168p-30f, 0.0f, 0.0f, 0.0f, 0x1.c989aep-124f,
     0.0f, 0x1.7d547ep-2f, 0x1.8b0aap-34f, 0x1.2bde38p-66f, 0.0f, 0.0f,
     0x1.1a12c6p-45f, 0x1.ef04dp-15f, 0x1.a278f8p-21f, 0x1.49ad58p-27f,
     0x1.91da1cp-6f, 0x1.a24844p-105f, 0.0f, 0x1.b4ba7cp-114f, 0x1.63fbfep-33f,
     0x1.041776p-91f, 0.0f, 0.0f, 0x1.528ec6p-44f, 0x1.4cf48p-16f, 0x1p0f, 0.0f,
     0x1.fb91aep-56f, 0.0f, 0x1.495cccp-121f, 0.0f, 0x1.0b76c6p-14f, 0x1.c0d83ap-38f,
     0x1.827804p-91f, 0x1.99d07cp-108f, 0x1p0f, 0x1.354c4cp-49f, 0.0f, 0.0f,
     0x1.a4eeeep-90f, 0x1.1c7714p-25f, 0.0f, 0x1.4d382ap-89f, 0x1.2bdd26p-84f, 0.0f,
     0x1.b7c894p-79f, 0x1.419b3cp-79f, 0x1.a84c34p-36f, 0.0f, 0.0f, 0x1.5216fep-65f,
     0.0f, 0.0f, 0x1.532cep-43f, 0.0f, 0.0f, 0x1.ddc46ap-55f, 0x1.42672ep-70f,
     0x1.12216p-26f, 0x1.e825c6p-71f, 0x1.d647cp-89f, 0x1.23b734p-112f, 0.0f, 0.0f,
     0x1.4c806p-67f, 0.0f, 0x1.dfa514p-57f, 0.0f, 0x1.fbc73ep-26f, 0x1.d1f618p-96f,
     0x1.91bdap-81f, 0.0f, 0x1.9a3deap-117f, 0x1.d1bddap-35f, 0x1.a9b2a8p-6f,
     0x1.11d3d6p-30f, 0x1.bcdbc8p-84f, 0x1.24bb5p-72f, 0x1.653f5ep-124f,
     0x1.ac5ee2p-37f, 0x1.e1aae8p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e84d2p-72f, 0.0f, 0.0f, 0.0f, 0x1.797684p-31f, 0x1.747ceep-54f, 0.0f,
     0x1.f28ac4p-39f, 0x1.066f6ep-38f, 0x1.cdc676p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d651a8p-1f, 0.0f, 0x1.57c04p-67f, 0.0f, 0x1p0f, 0x1.c5f16ap-3f, 0.0f,
     0x1.e9adb8p-57f, 0x1.790446p-54f, 0.0f, 0x1.21a0dp-52f, 0.0f, 0.0f,
     0x1.46aef2p-41f, 0x1.7ea8aep-10f, 0.0f, 0.0f, 0.0f, 0x1.c7aaccp-14f, 0.0f, 0.0f,
     0x1.e755b8p-59f, 0x1.64644ap-44f, 0x1.658388p-51f, 0x1.36fa84p-40f,
     0x1.c606c6p-88f, 0.0f, 0x1.55adcap-42f, 0.0f, 0.0f, 0x1.45a6bap-81f, 0.0f,
     0x1.c0d5a4p-22f, 0.0f, 0.0f, 0.0f, 0x1.ddbfbp-66f, 0x1.76936ap-66f, 0.0f, 0.0f,
     0x1.831474p-5f, 0x1.bd945cp-58f, 0.0f, 0.0f, 0x1.f1b586p-23f, 0x1.814cfcp-44f,
     0.0f, 0.0f, 0x1.adfc02p-42f, 0x1.ec6f6ap-76f, 0x1.cb0b4p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd6018p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e782cp-35f, 0.0f, 0x1.052bf4p-39f, 0x1.04894ep-54f, 0x1.721c5p-90f, 0.0f,
     0x1.0002eep-53f, 0x1.f8bc78p-37f, 0x1.415406p-16f, 0x1.fc1faep-8f, 0.0f,
     0x1.4b9fe6p-44f, 0.0f, 0x1.5e9996p-30f, 0.0f, 0.0f, 0x1.f905dp-32f, 0.0f, 0.0f,
     0.0f, 0x1.8c75fp-42f, 0x1.c7d52cp-65f, 0x1.a642d2p-66f, 0.0f, 0.0f, 0.0f,
     0x1.2ab99cp-72f, 0.0f, 0x1.fcb714p-126f, 0.0f, 0x1.11840ap-29f, 0x1.b238f4p-25f,
     0x1.33d5acp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a09aep-53f, 0.0f, 0.0f,
     0x1.460ce6p-34f, 0.0f, 0.0f, 0x1.0fbc2ep-80f, 0.0f, 0.0f, 0.0f, 0x1.1e3a68p-73f,
     0.0f, 0x1.8a8308p-66f, 0.0f, 0x1.915f92p-79f, 0.0f, 0.0f, 0.0f, 0x1.f5a894p-96f,
     0x1.7f2646p-84f, 0x1.6a966cp-122f, 0.0f, 0.0f, 0x1.033f62p-72f, 0x1.7306f6p-71f,
     0x1.206acap-63f, 0.0f, 0x1.8d2a36p-36f, 0x1.af2ab6p-43f, 0x1.4c955ep-42f, 0.0f,
     0.0f, 0.0f, 0x1.677a8ep-35f, 0.0f, 0x1.bba63ap-67f, 0.0f, 0x1.09bf54p-46f, 0.0f,
     0x1.301264p-52f, 0x1.081fc8p-82f, 0.0f, 0x1.387404p-51f, 0.0f, 0.0f, 0.0f,
     0x1.a22746p-9f, 0x1.9de716p-22f, 0x1.611b66p-63f, 0.0f, 0.0f, 0x1.16e6b6p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.685ceap-111f, 0.0f, 0x1.3b6a5ep-66f, 0x1.13949ep-71f,
     0x1.ff989p-124f, 0x1.298042p-64f, 0x1.35445cp-75f, 0.0f, 0.0f, 0.0f,
     0x1.62dcd8p-107f, 0x1.d86646p-112f, 0x1.7f7cfap-48f, 0x1.7455f4p-104f, 0.0f,
     0.0f, 0x1.77b024p-91f, 0x1.ebffep-97f, 0.0f, 0.0f, 0x1.f1f83ap-122f, 0.0f, 0.0f,
     0x1.f3fe6p-34f, 0.0f, 0.0f, 0x1.a4a65p-110f, 0x1.673a92p-114f, 0x1.c6f18cp-112f,
     0.0f, 0x1.76e23p-19f, 0x1.bb815ep-37f, 0x1.ca452ap-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebd83ap-16f, 0.0f, 0x1.131a3p-99f, 0.0f, 0.0f, 0x1.204f42p-118f, 0.0f, 0.0f,
     0x1.96a0bep-73f, 0x1.6a1c3ap-113f, 0.0f, 0x1.ef6842p-38f, 0.0f, 0.0f, 0.0f,
     0x1.7edb0cp-19f, 0x1.8a7e4ap-91f, 0x1.55a4f4p-124f, 0.0f, 0x1.c5eddep-59f, 0.0f,
     0x1.b6fc9ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7c78ep-126f, 0x1.a9528p-14f,
     0x1.09c156p-107f, 0x1.ef28dp-15f, 0x1.0993f8p-60f, 0x1.45f39ep-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.50026ep-52f, 0.0f, 0.0f, 0x1.0a11dp-103f, 0.0f,
     0x1.4c8aacp-95f, 0x1.8526d2p-59f, 0x1.5ca57ap-49f, 0.0f, 0.0f, 0x1.31eb08p-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.700618p-34f, 0x1.a070d4p-105f, 0.0f, 0x1.e54502p-34f,
     0.0f, 0.0f, 0x1.a1b9f6p-2f, 0x1.331e3cp-94f, 0x1.7c0aaep-13f, 0x1.7657f8p-34f,
     0x1.2c43e8p-96f, 0.0f, 0.0f, 0x1.7dbdfcp-58f, 0.0f, 0x1.1ed8f8p-18f,
     0x1.104e94p-44f, 0x1.9e3d74p-21f, 0.0f, 0.0f, 0.0f, 0x1.872f34p-32f, 0.0f, 0.0f,
     0x1.99f842p-102f, 0x1.3a8be4p-40f, 0.0f, 0.0f, 0x1.e02d08p-72f, 0x1.effc2ep-61f,
     0.0f, 0x1.c46e26p-45f, 0x1.603adap-63f, 0.0f, 0x1.967104p-21f, 0x1.153a4p-19f,
     0.0f, 0.0f, 0x1.7c1e44p-67f, 0.0f, 0.0f, 0.0f, 0x1.9bae8cp-36f, 0.0f, 0.0f, 0.0f,
     0x1.5177d6p-81f, 0.0f, 0.0f, 0.0f, 0x1.cd84b4p-110f, 0.0f, 0.0f, 0x1.25cf4ep-50f,
     0x1.f8f4d6p-58f, 0.0f, 0.0f, 0x1.b8defcp-69f, 0.0f, 0.0f, 0.0f, 0x1.9cd2e2p-126f,
     0x1.91ef2ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2475p-22f, 0x1.2837dap-78f,
     0x1.b6fda6p-18f, 0x1.89b26cp-79f, 0x1.cec8p-105f, 0x1.824c48p-102f, 0.0f, 0.0f,
     0x1.2c1d78p-86f, 0x1.cf4da6p-31f, 0x1.4eb482p-88f, 0x1.8416f6p-50f, 0.0f,
     0x1.dea63cp-36f, 0x1.a938f4p-113f, 0.0f, 0.0f, 0.0f, 0x1.1e9fe4p-24f,
     0x1.7654eep-57f, 0.0f, 0x1.301282p-29f, 0x1p0f, 0x1.046844p-72f, 0.0f, 0.0f,
     0x1.0f4c96p-91f, 0.0f, 0.0f, 0.0f, 0x1.74d33ap-29f, 0.0f, 0x1.8d73c2p-70f, 0.0f,
     0x1.862d94p-95f, 0.0f, 0.0f, 0.0f, 0x1.d194ep-43f, 0x1.1894c2p-110f,
     0x1.da4cdp-44f, 0x1.2d6938p-61f, 0x1.1cf4bep-120f, 0.0f, 0.0f, 0x1.5efe1p-16f,
     0x1.6f0ed6p-49f, 0x1p0f, 0.0f, 0x1.74f92cp-79f, 0x1.2a1d5p-72f, 0x1.aaa3d2p-37f,
     0.0f, 0x1.470146p-38f, 0x1.e53d32p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9300eap-124f,
     0x1.1a726ep-16f, 0x1.fe1656p-82f, 0.0f, 0x1.5827eep-67f, 0.0f, 0.0f,
     0x1.d573ccp-77f, 0.0f, 0.0f, 0x1.08edbp-94f, 0.0f, 0x1.8e7364p-13f, 0x1p0f,
     0x1.d5199ep-101f, 0.0f, 0.0f, 0.0f, 0x1.77ad36p-86f, 0.0f, 0.0f, 0.0f,
     0x1.d40a84p-78f, 0.0f, 0.0f, 0x1.395a94p-98f, 0x1.12c55p-21f, 0.0f,
     0x1.e9368cp-116f, 0.0f, 0.0f, 0.0f, 0x1.f4981ap-66f, 0x1.fdd07ap-29f,
     0x1.31c4aep-116f, 0x1.25a338p-5f, 0x1.b321eep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e66c4p-102f, 0x1.f8084cp-91f, 0x1.894b98p-76f, 0x1.92bcdp-19f, 0.0f,
     0.0f, 0.0f, 0x1.42067cp-108f, 0x1.28d91ep-23f, 0x1.88fa6p-96f, 0.0f, 0.0f,
     0x1.9a31d4p-52f, 0.0f, 0.0f, 0.0f, 0x1.ef86fap-37f, 0.0f, 0x1.e516bep-73f, 0.0f,
     0.0f, 0x1.0e75e6p-2f, 0.0f, 0x1.f337fap-28f, 0.0f, 0x1.72e0a6p-97f, 0.0f,
     0x1.70ae56p-69f, 0.0f, 0x1.a464f6p-21f, 0.0f, 0.0f, 0.0f, 0x1.435f56p-123f, 0.0f,
     0x1.3f4012p-57f, 0.0f, 0x1.de2392p-117f, 0.0f, 0x1.695b02p-76f, 0.0f,
     0x1.860a98p-82f, 0x1.7c91bp-63f, 0x1.10e27p-98f, 0x1.1d2718p-80f,
     0x1.54d586p-42f, 0x1.cc1cfap-12f, 0.0f, 0.0f, 0x1.f12b56p-84f, 0x1.7c8dc4p-92f,
     0x1.14cf0ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.422b98p-119f, 0.0f,
     0x1.a678d6p-50f, 0.0f, 0x1.f43ccp-103f, 0.0f, 0.0f, 0x1.6c6572p-31f,
     0x1.9764b6p-34f, 0x1.15b856p-95f, 0x1.dc65b8p-4f, 0.0f, 0.0f, 0x1.a583bcp-34f,
     0.0f, 0x1.d2c2fcp-112f, 0x1.a1e15ap-121f, 0.0f, 0.0f, 0x1.5df158p-25f,
     0x1.e5be26p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa1bcap-37f, 0.0f, 0x1.440c86p-43f,
     0x1.94c456p-88f, 0x1.bf6016p-4f, 0.0f, 0.0f, 0.0f, 0x1.1605f2p-97f, 0.0f,
     0x1.d6efdap-5f, 0x1.a75bf2p-20f, 0.0f, 0x1.4c0bep-117f, 0x1.19ba98p-5f, 0.0f,
     0x1.4f33c8p-4f, 0x1.aaaa9ep-94f, 0.0f, 0x1.be65bp-80f, 0.0f, 0x1.87b746p-83f,
     0.0f, 0x1.13fde8p-103f, 0.0f, 0.0f, 0.0f, 0x1.56703p-80f, 0x1.5d5368p-72f,
     0x1.2deb5ap-25f, 0.0f, 0.0f, 0x1.37e922p-121f, 0.0f, 0x1.ab9972p-74f,
     0x1.5a6f08p-38f, 0x1.de3f4cp-99f, 0.0f, 0x1.28bddp-115f, 0x1.93aa84p-50f, 0.0f,
     0x1.172326p-64f, 0.0f, 0x1.553fcp-107f, 0x1.dc057p-49f, 0x1.648fc4p-116f, 0.0f,
     0x1.c4d9bp-6f, 0.0f, 0x1.ddc1f4p-64f, 0x1.573b7ep-122f, 0.0f, 0.0f,
     0x1.5748d2p-117f, 0x1.cff286p-126f, 0.0f, 0.0f, 0.0f, 0x1.00cc6p-70f,
     0x1.0c164cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9078bap-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.398ed2p-56f, 0x1.219748p-100f, 0x1.2501a8p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1540dcp-13f, 0x1.1acc1p-101f, 0x1.78ee76p-3f,
     0x1.685d62p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c83b6p-81f, 0x1.5eb722p-25f, 0.0f,
     0x1.ea81bp-32f, 0.0f, 0.0f, 0.0f, 0x1.53c496p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71d054p-22f, 0.0f, 0x1.349e3ep-104f, 0.0f, 0x1.1da236p-35f, 0x1.c61724p-64f,
     0x1.f4c954p-12f, 0.0f, 0x1.95eaa4p-31f, 0x1.b0b01ap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0683dep-94f, 0.0f, 0.0f, 0x1.6f8686p-48f, 0.0f, 0x1.0e5c4p-38f, 0.0f,
     0x1.0d5742p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d5b38p-104f, 0x1.51a9eap-67f,
     0.0f, 0x1.88b784p-71f, 0x1.428dcap-37f, 0.0f, 0.0f, 0x1.d4e856p-75f, 0.0f,
     0x1.c8e00ap-66f, 0x1.eb7e7cp-104f, 0x1.e162bap-50f, 0.0f, 0.0f, 0.0f,
     0x1.239bap-100f, 0x1.be1628p-61f, 0x1.bec9e2p-92f, 0.0f, 0x1.149e4p-80f,
     0x1.d74c66p-30f, 0.0f, 0x1.705496p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a2fc4p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1498cap-1f, 0x1.341a1p-20f,
     0x1.d013f8p-42f, 0x1.d8b492p-120f, 0x1.30bbf8p-10f, 0x1.3d1076p-121f, 0.0f, 0.0f,
     0x1.35ecc6p-82f, 0.0f, 0x1.039ddap-41f, 0x1.de173cp-4f, 0.0f, 0x1.93cb3ep-54f,
     0x1.297cc8p-6f, 0.0f, 0x1.793a58p-60f, 0.0f, 0.0f, 0.0f, 0x1.fa47a2p-56f, 0.0f,
     0x1.33e08ap-107f, 0x1.96af14p-77f, 0x1.bf82e6p-76f, 0.0f, 0x1.afe88ep-47f, 0.0f,
     0.0f, 0x1.3cc76ep-21f, 0x1.004fd4p-116f, 0x1.c02016p-121f, 0.0f, 0.0f, 0.0f,
     0x1.868f0cp-39f, 0x1.8bc6d4p-74f, 0x1.4d0454p-66f, 0x1.80be6ap-58f,
     0x1.7216cep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da39eap-117f, 0x1.9e1c7cp-89f,
     0x1.50ffp-115f, 0.0f, 0x1.05d88ep-105f, 0x1.59e68ep-65f, 0x1.b14ec8p-110f, 0.0f,
     0.0f, 0.0f, 0x1.ff4f14p-89f, 0x1.e51738p-126f, 0x1.5aa8f2p-34f, 0.0f,
     0x1.579e2ap-71f, 0x1.d756c6p-83f, 0x1.863128p-72f, 0x1.9523e6p-57f,
     0x1.fbc68ap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e661ap-107f, 0.0f,
     0x1.7bfd24p-42f, 0x1.a1f87ep-13f, 0.0f, 0.0f, 0x1.715a94p-23f, 0x1.72597p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7daf56p-119f, 0.0f, 0x1.6ffa4cp-100f,
     0x1.14bd74p-20f, 0x1.06b034p-13f, 0.0f, 0.0f, 0x1.d18f9ap-124f, 0x1.2b058cp-110f,
     0.0f, 0.0f, 0.0f, 0x1.b7f66ep-113f, 0x1.7ff204p-104f, 0.0f, 0.0f,
     0x1.60fb8ap-63f, 0x1.15b256p-118f, 0x1.412fe8p-18f, 0.0f, 0x1.2ed134p-82f, 0.0f,
     0x1.df4db8p-40f, 0x1.11a7c4p-85f, 0x1.8f974cp-24f, 0x1.0aec7ep-71f, 0.0f, 0.0f,
     0x1.ae613ap-18f, 0.0f, 0.0f, 0.0f, 0x1.2f1e54p-98f, 0x1.3a6fccp-92f, 0.0f,
     0x1.0e8734p-126f, 0x1.d9a4eap-110f, 0.0f, 0x1.672b98p-125f, 0x1.925bc8p-39f,
     0x1.5be6dcp-21f, 0x1.59c16p-68f, 0.0f, 0.0f, 0.0f, 0x1.2a9d7ap-77f, 0.0f,
     0x1.5e9e2cp-36f, 0x1.c0c104p-49f, 0x1.dc5022p-60f, 0x1.c5abap-71f,
     0x1.45c962p-88f, 0.0f, 0x1.a2f336p-77f, 0.0f, 0.0f, 0x1.ab82cep-117f,
     0x1.23f06ep-57f, 0.0f
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
            tmp1 = Sleef_finz_log2f8_u10kvx(tmp0);
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
    printf("Sleef_finz_log2f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_log2f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
