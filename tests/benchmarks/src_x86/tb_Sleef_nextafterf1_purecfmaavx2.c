/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_nextafterf1_purecfma.c --function \
 *     Sleef_nextafterf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0f, 0.0f, 0.0f, 0x1.d33174p-53f, 0.0f, 0x1.c565e8p-48f, 0.0f, 0.0f,
     0x1.950dc8p-34f, 0x1.f6152cp-4f, 0.0f, 0x1.ffcc36p-27f, 0x1.5a2c2cp-123f,
     0x1.4d120cp-103f, 0.0f, 0x1.69594ep-76f, 0x1.97cbc6p-62f, 0x1.75eceep-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f1b1d4p-77f, 0x1.1ee2d6p-2f, 0.0f, 0.0f, 0.0f,
     0x1.700128p-42f, 0.0f, 0x1.14285cp-124f, 0.0f, 0x1.8a759ep-75f, 0.0f,
     0x1.615422p-49f, 0.0f, 0x1.366464p-43f, 0x1.03b6eap-51f, 0x1.377d0ap-32f, 0.0f,
     0.0f, 0x1.b77016p-19f, 0x1.3abd8p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0d7fap-57f,
     0.0f, 0.0f, 0x1.abd242p-121f, 0x1.fd80a8p-90f, 0.0f, 0x1.88a8bap-39f,
     0x1.2a141ep-23f, 0x1.f8b604p-120f, 0.0f, 0x1.807f7cp-102f, 0.0f, 0x1.adca04p-15f,
     0.0f, 0.0f, 0.0f, 0x1.b6a9e8p-104f, 0.0f, 0.0f, 0x1.7b9b06p-2f, 0x1.febb58p-4f,
     0x1.4ed4f2p-118f, 0.0f, 0x1.49b47ep-122f, 0.0f, 0x1.f25c5cp-67f, 0.0f, 0.0f,
     0x1.3e214ep-61f, 0x1.5e2424p-51f, 0x1.332e86p-91f, 0.0f, 0.0f, 0.0f,
     0x1.d45c0ap-75f, 0.0f, 0.0f, 0x1.dc1338p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15b426p-61f, 0x1.520348p-60f, 0.0f, 0x1.a8902p-57f, 0x1.6a86bcp-54f,
     0x1.ceff5p-44f, 0x1.78e526p-79f, 0x1.a1de9cp-86f, 0.0f, 0x1.8d0e24p-84f,
     0x1.8c0d7ap-107f, 0.0f, 0.0f, 0.0f, 0x1.4e7f04p-62f, 0.0f, 0.0f, 0.0f,
     0x1.cb966ap-12f, 0x1.0591fcp-117f, 0.0f, 0.0f, 0x1.e7212ap-116f, 0x1.857bfap-2f,
     0x1.84ed6ap-35f, 0.0f, 0x1.457c1ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06a0e4p-74f, 0.0f, 0.0f, 0x1.11746cp-109f, 0.0f, 0.0f, 0.0f, 0x1.fed74p-91f,
     0.0f, 0x1.1a56ap-16f, 0.0f, 0.0f, 0x1.3ad092p-33f, 0.0f, 0.0f, 0x1.a6d81ap-44f,
     0x1.5079bp-118f, 0.0f, 0x1.701e5ap-12f, 0x1.b16968p-108f, 0x1.bef0bcp-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a848c6p-62f, 0.0f, 0x1.3b2918p-65f, 0.0f, 0x1.4ec724p-51f,
     0x1.d08b5ap-112f, 0.0f, 0.0f, 0.0f, 0x1.6f8718p-50f, 0x1.18c2a4p-78f, 0.0f, 0.0f,
     0.0f, 0x1.96dd1cp-124f, 0x1.a9f948p-35f, 0x1.82fa4cp-64f, 0x1.534a56p-80f,
     0x1.0f09b4p-56f, 0.0f, 0x1.b2980ap-69f, 0.0f, 0x1.ba7c0ep-115f, 0.0f,
     0x1.33808p-45f, 0x1.06c24ep-38f, 0.0f, 0x1.47fc46p-126f, 0.0f, 0.0f,
     0x1.fe29ecp-22f, 0x1.ba4fdap-108f, 0x1.f580ecp-85f, 0x1.854154p-90f,
     0x1.eae21ap-3f, 0x1.eeecd2p-123f, 0x1.fa26dep-110f, 0x1.240364p-96f,
     0x1.95dea2p-49f, 0.0f, 0.0f, 0x1.0895d8p-7f, 0.0f, 0x1.2f07a4p-30f,
     0x1.3112d2p-68f, 0.0f, 0x1.ac1c44p-48f, 0x1.e1daep-76f, 0.0f, 0.0f,
     0x1.bd0e04p-18f, 0.0f, 0x1.7976dp-80f, 0x1.5ace42p-36f, 0x1.663816p-60f, 0.0f,
     0.0f, 0x1.6db3cep-58f, 0.0f, 0.0f, 0.0f, 0x1.c31dcep-3f, 0.0f, 0.0f, 0.0f,
     0x1.a3c2fep-43f, 0.0f, 0.0f, 0.0f, 0x1.f425cep-2f, 0x1.9c8ecp-105f, 0.0f,
     0x1.17a474p-30f, 0x1.05f7bep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4bfb54p-119f, 0.0f, 0x1.73f188p-41f, 0.0f, 0.0f, 0x1.dafb1p-26f,
     0x1.ca1576p-32f, 0x1.3463a2p-89f, 0.0f, 0.0f, 0x1.e61a82p-112f, 0.0f, 0.0f, 0.0f,
     0x1.38b3dep-2f, 0.0f, 0.0f, 0.0f, 0x1.f7b2dep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4559dp-112f, 0.0f, 0.0f, 0x1.241dp-19f,
     0x1.b80bc8p-121f, 0.0f, 0x1.875204p-24f, 0.0f, 0x1.af068p-121f, 0.0f, 0.0f,
     0x1.eb6f5ap-37f, 0.0f, 0x1.617a2p-47f, 0x1.189a1ap-7f, 0x1.20494cp-86f,
     0x1.c399acp-51f, 0.0f, 0x1.a10c24p-31f, 0x1.e33fe6p-84f, 0.0f, 0x1.74ff3ep-73f,
     0x1.61af24p-66f, 0.0f, 0.0f, 0x1.3ed5ccp-28f, 0x1.307dfp-33f, 0.0f, 0.0f,
     0x1.5afee4p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20f25ep-72f, 0x1.b77556p-53f,
     0x1.902c32p-88f, 0x1.5f8caep-26f, 0x1.94c92cp-44f, 0.0f, 0x1.91bb1cp-101f, 0.0f,
     0x1.1798aap-42f, 0.0f, 0x1.b22a68p-48f, 0.0f, 0.0f, 0x1.f88b2p-125f,
     0x1.1172e8p-39f, 0x1.8ff426p-46f, 0.0f, 0x1.873f48p-6f, 0x1.5b0f6ap-97f, 0.0f,
     0x1.58a656p-43f, 0x1.85f65ep-59f, 0.0f, 0x1.032292p-112f, 0.0f, 0.0f,
     0x1.d2e92ap-1f, 0.0f, 0x1.2960a8p-93f, 0.0f, 0x1.52364ep-40f, 0x1.2672eep-121f,
     0.0f, 0x1.b2dd44p-44f, 0.0f, 0.0f, 0.0f, 0x1.2e494ep-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e0d73cp-84f, 0x1.04d74p-108f, 0x1.44dfa8p-118f, 0x1.7c7b62p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.93ac02p-67f, 0x1.7facd8p-2f, 0.0f, 0x1.70cfbp-37f,
     0x1.e272ep-10f, 0x1.6463cep-117f, 0.0f, 0.0f, 0.0f, 0x1.3ed9d6p-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6d5a0ep-78f, 0x1.dc404p-125f, 0x1.35b514p-10f,
     0x1.1cc1e2p-46f, 0.0f, 0.0f, 0x1.2a1d24p-13f, 0x1.a7ee7cp-63f, 0.0f, 0.0f, 0.0f,
     0x1.12cb76p-28f, 0x1.f71062p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c89a28p-6f, 0.0f, 0x1.2f7a62p-72f, 0.0f, 0x1.895a2ap-9f, 0x1.1efc3p-71f,
     0.0f, 0x1.0be7a8p-126f, 0.0f, 0x1.43c1b8p-40f, 0x1.8d2a52p-99f, 0x1.5d38a4p-43f,
     0.0f, 0.0f, 0x1.bf23bp-72f, 0x1.7a05d4p-21f, 0x1.d9351ep-16f, 0.0f,
     0x1.f6b3e4p-121f, 0x1.76f86p-79f, 0x1.f4af1cp-13f, 0x1.2f403p-102f, 0.0f, 0.0f,
     0.0f, 0x1.31f6bcp-26f, 0x1.f5cac2p-62f, 0x1.29b476p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60023ap-19f, 0.0f, 0.0f, 0x1.2813a2p-120f, 0x1.88b762p-59f, 0x1.32190cp-42f,
     0x1.1670cp-88f, 0.0f, 0.0f, 0x1.5b805ep-29f, 0.0f, 0.0f, 0x1.f2fefp-120f,
     0x1.663f2p-103f, 0.0f, 0x1.1fd72p-7f, 0x1.89048ep-114f, 0x1.bc3c52p-59f,
     0x1.32ba6cp-99f, 0x1.97a3ccp-57f, 0x1.15cd28p-64f, 0.0f, 0x1.c0ef3cp-99f, 0.0f,
     0x1.5e8406p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.910972p-108f, 0.0f,
     0x1.23e148p-80f, 0x1.22784cp-97f, 0.0f, 0x1.bdcf2cp-83f, 0x1.311cb4p-98f, 0.0f,
     0.0f, 0.0f, 0x1.fdf5b8p-3f, 0.0f, 0.0f, 0x1.867976p-80f, 0.0f, 0.0f,
     0x1.e4a266p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ba318p-123f, 0x1.ab9936p-113f,
     0x1.783734p-80f, 0.0f, 0.0f, 0x1.85cf5ep-23f, 0.0f, 0.0f, 0x1.00774cp-125f,
     0x1.38d1e8p-58f, 0x1.0406p-49f, 0.0f, 0x1.c2983cp-108f, 0x1.01caeap-36f, 0.0f,
     0x1.34c71cp-91f, 0.0f, 0.0f, 0x1.53044ap-84f, 0.0f, 0x1.6b832p-47f, 0.0f, 0.0f,
     0.0f, 0x1.8bb9eep-55f, 0x1.5c5edp-55f, 0.0f, 0.0f, 0x1p0f, 0x1.cfb5ep-103f, 0.0f,
     0x1.760556p-15f, 0.0f, 0x1.7368ecp-51f, 0x1.6b8134p-55f, 0.0f, 0.0f, 0.0f,
     0x1.3ee846p-36f, 0x1.1fdfb4p-3f, 0.0f, 0.0f, 0x1.f2822ap-55f, 0.0f, 0.0f, 0.0f,
     0x1.d25a92p-11f, 0x1.e2b6b6p-100f, 0.0f, 0.0f, 0.0f, 0x1.4b8c5ap-71f, 0.0f,
     0x1.7a969ap-17f, 0.0f, 0.0f, 0x1.a7fd78p-28f, 0x1.68477cp-4f, 0x1.2fcd4cp-14f,
     0.0f, 0x1.10ed26p-70f, 0x1.e447a2p-66f, 0.0f, 0x1.9fe8ecp-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.128e34p-49f, 0x1.e9d62ep-40f, 0x1.b9fdeap-7f, 0x1.6c242p-95f, 0.0f,
     0.0f, 0x1.0cd744p-104f, 0.0f, 0x1.cc6a8ep-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e9296p-48f, 0.0f, 0x1.bac408p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082c38p-28f,
     0.0f, 0x1.cce8c4p-104f, 0.0f, 0x1.231a4cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d0dbp-54f, 0x1.0ac868p-93f, 0x1.a02fc2p-87f, 0x1.08dd34p-107f,
     0x1.05196p-123f, 0.0f, 0x1.18d99p-33f, 0x1.ecd488p-56f, 0.0f, 0x1.9e92aep-111f,
     0.0f, 0x1.4a3aa8p-103f, 0.0f, 0x1.e01632p-80f, 0.0f, 0x1.bba5b2p-63f,
     0x1.d7d8acp-64f, 0x1.71b2b4p-31f, 0x1.6c28bap-24f, 0.0f, 0x1.c9828cp-47f, 0.0f,
     0.0f, 0.0f, 0x1.ced9fep-23f, 0.0f, 0x1.b68c4ap-66f, 0x1.6ff5d2p-97f,
     0x1.47e318p-78f, 0.0f, 0x1.8b3a64p-15f, 0.0f, 0.0f, 0x1.5d047cp-98f,
     0x1.291144p-115f, 0x1.42c28cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7595bcp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33455p-102f, 0x1.2ffd9p-73f,
     0x1.d88aep-42f, 0.0f, 0x1.a40728p-38f, 0.0f, 0.0f, 0x1.db1398p-112f,
     0x1.7074b2p-15f, 0x1.d1a8aap-67f, 0x1.ead65cp-65f, 0x1.cb501cp-87f,
     0x1.897278p-59f, 0.0f, 0x1.5d9f74p-4f, 0x1.6a4214p-97f, 0x1.306836p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.664c92p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f110e6p-72f, 0x1.e361aap-37f, 0x1.79df8cp-95f, 0x1.9ec71cp-79f,
     0x1.fc7608p-59f, 0x1.1dd164p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04c928p-29f, 0.0f,
     0x1.22591ap-66f, 0x1.5a5332p-48f, 0x1.322a62p-83f, 0x1.d38f68p-81f, 0.0f,
     0x1.46964ep-124f, 0.0f, 0.0f, 0x1.b020c4p-76f, 0.0f, 0.0f, 0x1.d54acep-60f,
     0x1.7f76d2p-22f, 0.0f, 0.0f, 0.0f, 0x1.696e58p-118f, 0.0f, 0.0f, 0x1.32c204p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3bcfcp-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5a8024p-94f, 0x1.5494e6p-38f, 0x1.5b4fecp-67f, 0x1.6fa582p-89f,
     0x1.cd3deap-68f, 0.0f, 0x1.60a482p-42f, 0x1.b475e8p-56f, 0x1.cb310cp-118f, 0.0f,
     0x1.f8d3f6p-21f, 0.0f, 0x1.a56ee8p-26f, 0.0f, 0x1.725a12p-125f, 0x1.84409ap-68f,
     0.0f, 0x1.550956p-4f, 0.0f, 0x1.05906ep-83f, 0.0f, 0.0f, 0x1.a252cap-50f, 0.0f,
     0.0f, 0x1.662ceap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb20bep-10f,
     0x1.b5128ep-17f, 0x1.0ac8dcp-3f, 0x1.3a90f2p-15f, 0x1.a8cbf6p-52f,
     0x1.e1ede8p-110f, 0x1.b12714p-30f, 0.0f, 0.0f, 0x1.585d68p-20f, 0x1.a066bp-40f,
     0x1.4c096ap-103f, 0x1.fa5724p-7f, 0.0f, 0x1.902ac8p-24f, 0.0f, 0.0f,
     0x1.a7566ep-71f, 0.0f, 0x1.10c464p-97f, 0.0f, 0x1.ffe396p-2f, 0x1.1dae02p-107f,
     0.0f, 0.0f, 0.0f, 0x1.250a1p-47f, 0x1.9fb70ep-61f, 0x1.d00758p-52f, 0.0f,
     0x1.71b078p-49f, 0.0f, 0.0f, 0.0f, 0x1.1c1e76p-54f, 0.0f, 0.0f, 0x1.0c41b2p-64f,
     0x1.68ec4ep-65f, 0x1.811656p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d266ep-90f,
     0.0f, 0.0f, 0x1.01018cp-66f, 0x1.154b14p-32f, 0x1.8b9e2cp-13f, 0x1.a36cb4p-75f,
     0.0f, 0x1.f991ccp-10f, 0x1.2588d6p-67f, 0x1.c0c2c6p-98f, 0x1.bf7dfcp-101f, 0.0f,
     0x1.de4b76p-83f, 0.0f, 0.0f, 0x1.9339eep-34f, 0.0f, 0x1.2235aap-118f,
     0x1.873a7ep-12f, 0.0f, 0.0f, 0x1.55b33ep-114f, 0.0f, 0x1.035836p-101f,
     0x1.0b5288p-32f, 0x1.d6e49ap-116f, 0.0f, 0.0f, 0x1.616dfep-65f, 0.0f,
     0x1.9cee98p-14f, 0x1.8efa8cp-76f, 0.0f, 0.0f, 0x1.ea795p-66f, 0.0f,
     0x1.eeb9e2p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f224d4p-109f, 0x1.1dab7cp-11f,
     0x1.f0011cp-63f, 0.0f, 0x1.eb979ap-23f, 0.0f, 0x1.37e44cp-77f, 0x1.3b427cp-49f,
     0.0f, 0x1.d4d0ap-30f, 0x1p0f, 0x1.ef7c34p-64f, 0x1.21822p-110f, 0.0f,
     0x1.b76edp-116f, 0.0f, 0.0f, 0x1.15eed2p-25f, 0x1.cb9fa8p-15f, 0x1.339912p-53f,
     0x1.27b26cp-39f, 0.0f, 0x1.28ddbep-48f, 0x1.2c22d6p-106f, 0.0f, 0.0f, 0.0f,
     0x1.6f4d62p-78f, 0x1.b0fd78p-32f, 0x1.5bd6bcp-125f, 0.0f, 0x1.c5a06cp-99f,
     0x1.1f91a2p-95f, 0.0f, 0x1.32ee9ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c10f62p-39f,
     0x1.0131eep-65f, 0x1.f739p-60f, 0x1.b76e6cp-113f, 0x1.f668p-117f,
     0x1.9d9f8ep-53f, 0.0f, 0.0f, 0.0f, 0x1.e9839ep-58f, 0.0f, 0x1.7486aap-101f, 0.0f,
     0x1.5888fap-120f, 0.0f, 0.0f, 0x1.196a1ap-103f, 0.0f, 0x1.aa8e9ep-96f,
     0x1.c35092p-2f, 0.0f, 0x1.3c0b06p-35f, 0x1.f82f98p-101f, 0.0f, 0x1.b6756cp-48f,
     0x1.2daf06p-99f, 0.0f, 0.0f, 0x1.8d347cp-102f, 0.0f, 0x1.b1c51ap-102f,
     0x1.05e934p-105f, 0.0f, 0.0f, 0x1.9747ep-30f, 0.0f, 0x1.9ec1a8p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d4f3bp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c061bep-124f,
     0x1.9fffacp-65f, 0x1.36beaep-79f, 0x1.fd8584p-59f, 0.0f, 0.0f, 0.0f,
     0x1.3420ccp-40f, 0x1.1df27ap-98f, 0x1.ba5718p-107f, 0.0f, 0x1.95e9e6p-61f,
     0x1.c38c76p-15f, 0.0f, 0x1.17815p-121f, 0.0f, 0x1.8c4c6ep-103f, 0x1.c8114ep-36f,
     0.0f, 0.0f, 0x1.26f316p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e03ea4p-93f,
     0x1.af0222p-67f, 0x1.61cc48p-39f, 0x1.024188p-36f, 0x1.c65d4cp-106f, 0.0f, 0.0f,
     0x1.cfd354p-92f, 0.0f, 0x1.b904b4p-18f, 0x1.925212p-77f, 0x1.e8a658p-73f,
     0x1.4a133cp-115f, 0.0f, 0.0f, 0.0f, 0x1.815f16p-13f, 0x1.9f14fep-118f,
     0x1.4c098cp-59f, 0x1.6f7658p-15f, 0x1.530bfcp-37f, 0x1.3a6e1ap-52f, 0.0f, 0.0f,
     0x1.22ef58p-55f, 0x1.250fcap-85f, 0.0f, 0.0f, 0x1.112ce8p-125f, 0x1.7bdea6p-61f,
     0.0f, 0x1.624ca2p-115f, 0x1.dd74bcp-60f, 0x1.b71aa8p-107f, 0x1.4559c4p-21f, 0.0f,
     0x1.207154p-114f, 0.0f, 0.0f, 0x1.f71244p-12f, 0x1.b7fc9ap-54f, 0.0f,
     0x1.fc038ep-36f, 0x1.214afp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3baa3p-90f, 0x1.134bf2p-70f, 0x1.52f0f4p-19f, 0.0f, 0x1.05a30cp-31f,
     0x1.20c07p-75f, 0x1.882fcap-63f, 0.0f, 0x1.ac4542p-13f, 0.0f, 0x1.402036p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39eb0cp-118f, 0x1.c01e16p-125f,
     0x1.fc1024p-89f, 0.0f, 0x1.b5a93ep-77f, 0.0f, 0.0f, 0.0f, 0x1.5e2abep-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.beaf3p-37f, 0x1.e41f62p-79f, 0x1.9bb248p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.254324p-56f, 0.0f, 0x1.5911f6p-75f, 0.0f, 0x1.14377p-126f, 0.0f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.71a53ep-98f, 0.0f, 0.0f, 0x1.55607cp-67f, 0x1.4e482p-80f, 0.0f, 0.0f, 0.0f,
     0x1.2a8564p-48f, 0.0f, 0.0f, 0x1.94c024p-125f, 0x1.cbb67ep-14f, 0.0f, 0.0f,
     0x1.497958p-109f, 0.0f, 0x1.0ae11ap-3f, 0x1.a87c58p-72f, 0x1.5ba50ap-115f,
     0x1.bd7f8ap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ead25ap-88f, 0x1.f0c438p-90f,
     0x1.6546bep-81f, 0x1.f77aeap-97f, 0x1.6ee1b2p-35f, 0x1.56f80ep-109f, 0.0f,
     0x1.c5cb4cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b18712p-79f, 0.0f, 0x1.b17c18p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c79432p-12f, 0x1.cefd56p-53f, 0x1.cd9808p-41f,
     0x1.6a129ep-115f, 0.0f, 0.0f, 0.0f, 0x1.ea471cp-65f, 0x1.82d176p-4f, 0.0f,
     0x1.1ce16ap-104f, 0x1.06f0fp-33f, 0x1.d69e76p-65f, 0.0f, 0.0f, 0.0f,
     0x1.ffda98p-110f, 0.0f, 0x1.492b56p-27f, 0.0f, 0.0f, 0x1.ba9806p-1f,
     0x1.ed5e0ep-109f, 0x1.355b7ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0606ap-93f,
     0.0f, 0.0f, 0x1.98beacp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60ebd6p-107f, 0.0f,
     0x1.3221eap-93f, 0x1.170b5p-92f, 0x1.ac16bap-4f, 0.0f, 0.0f, 0x1.e1b44ap-35f,
     0x1.840c5p-18f, 0.0f, 0x1.7fb7c8p-49f, 0x1.50e8bep-29f, 0x1.baf13ap-49f, 0.0f,
     0.0f, 0.0f, 0x1.74bad4p-113f, 0x1.ad9624p-106f, 0x1.338846p-100f, 0.0f, 0.0f,
     0x1.1603bcp-92f, 0x1.cfac9ap-72f, 0x1.cbd4e4p-47f, 0x1.055614p-105f, 0.0f, 0.0f,
     0x1.93935ep-75f, 0.0f, 0x1.cd1e9cp-112f, 0x1.030f1ep-63f, 0x1.6119ep-17f,
     0x1.566126p-17f, 0.0f, 0x1.a8d4eep-49f, 0x1.f11824p-83f, 0x1.f0c0ep-26f,
     0x1.f377cep-123f, 0x1.5c07fp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f2f1cp-124f,
     0x1.2515dep-120f, 0x1.966126p-94f, 0.0f, 0.0f, 0x1.9cfe2cp-27f, 0x1.17aa06p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ceb4f4p-67f, 0.0f, 0x1.b61952p-85f,
     0x1.03e456p-24f, 0x1.72e79ap-108f, 0x1.5d1946p-89f, 0.0f, 0x1.b5d692p-53f, 0.0f,
     0x1.e6ef38p-63f, 0x1.b16c72p-94f, 0x1.59dd76p-1f, 0x1.b13438p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c897cap-10f, 0.0f, 0x1.57a9ep-93f, 0.0f, 0x1.0e1a68p-92f, 0.0f,
     0.0f, 0x1.21f08ap-83f, 0.0f, 0.0f, 0x1.f292ap-119f, 0.0f, 0.0f, 0x1.af868ep-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.453324p-24f, 0.0f, 0.0f, 0.0f, 0x1.941684p-63f,
     0.0f, 0x1.c85f1ep-95f, 0x1.bddca2p-57f, 0.0f, 0.0f, 0.0f, 0x1.b1d212p-72f, 0.0f,
     0x1.d3b2dp-30f, 0x1.0eb322p-102f, 0x1.5eae36p-54f, 0.0f, 0x1.8b5896p-122f, 0.0f,
     0.0f, 0x1.0fe64cp-1f, 0x1.f0fd1cp-15f, 0x1.41958p-8f, 0.0f, 0x1.eea918p-46f,
     0x1.dcdb76p-61f, 0x1.d6f24p-62f, 0.0f, 0.0f, 0x1.6d0b54p-84f, 0.0f, 0.0f,
     0x1.6a5e6p-110f, 0.0f, 0.0f, 0.0f, 0x1.4fc8ecp-31f, 0.0f, 0x1.8e223ep-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e0e44p-4f, 0x1.df374ep-85f, 0.0f, 0.0f, 0.0f,
     0x1.cb0856p-55f, 0.0f, 0.0f, 0x1.c055fep-76f, 0x1.374264p-8f, 0x1.4b1716p-79f,
     0.0f, 0x1.9a6b4ap-90f, 0.0f, 0x1.62c438p-61f, 0x1.6acd34p-57f, 0x1.ed2448p-100f,
     0.0f, 0x1.4f9fd8p-20f, 0x1.fd6ac8p-16f, 0x1.1580aap-54f, 0.0f, 0.0f,
     0x1.6c763ap-37f, 0.0f, 0x1.0fc486p-10f, 0x1.c9e02p-107f, 0.0f, 0x1.a2e37cp-6f,
     0x1.cbedfap-61f, 0x1.03b154p-79f, 0.0f, 0x1.e77c5p-62f, 0.0f, 0.0f, 0.0f,
     0x1.a17474p-4f, 0x1.80b98cp-42f, 0x1.d7e526p-92f, 0x1.0fa99ep-60f,
     0x1.789da4p-72f, 0x1.67d418p-49f, 0.0f, 0.0f, 0.0f, 0x1.53d50ep-116f,
     0x1.8a2f62p-62f, 0x1.7f10f2p-24f, 0x1.afafe2p-53f, 0.0f, 0.0f, 0x1.faa46ap-92f,
     0x1.e0f43ep-70f, 0x1p0f, 0x1.97a41cp-30f, 0x1.3573aep-92f, 0.0f,
     0x1.e4ca74p-122f, 0.0f, 0x1.b788eap-1f, 0x1.5329ep-55f, 0.0f, 0x1.fa149p-113f,
     0x1.d576e8p-123f, 0x1.ac29a8p-81f, 0x1.9d16eap-11f, 0.0f, 0x1.c00746p-27f, 0.0f,
     0.0f, 0x1.a12b16p-77f, 0x1.a8e87cp-102f, 0x1.6656a8p-95f, 0.0f, 0x1.0c76b8p-42f,
     0.0f, 0.0f, 0x1.a9fd64p-112f, 0x1.cfad4ap-3f, 0x1.d65d7cp-92f, 0.0f,
     0x1.22d008p-51f, 0.0f, 0x1.d4f936p-76f, 0x1.eadef4p-122f, 0.0f, 0.0f,
     0x1.759a9cp-79f, 0.0f, 0x1.cc0664p-8f, 0.0f, 0.0f, 0x1.7fd9cp-112f,
     0x1.a7ede8p-4f, 0.0f, 0.0f, 0x1.6c22ecp-22f, 0x1.8e893ep-28f, 0.0f,
     0x1.fdde5ap-50f, 0.0f, 0x1.4291b6p-117f, 0.0f, 0.0f, 0.0f, 0x1.e221a2p-78f,
     0x1.df5ep-52f, 0x1.cb6edap-36f, 0.0f, 0x1.58bca4p-96f, 0x1.c3af2ep-93f, 0.0f,
     0x1.f30226p-28f, 0x1.a63e4ap-81f, 0x1.1e8e2p-25f, 0x1.2bff8p-123f,
     0x1.ddff3cp-16f, 0x1.f585a6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.581122p-54f,
     0x1.c81804p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ccd2ep-77f, 0x1.e39894p-59f,
     0x1.11688cp-121f, 0.0f, 0.0f, 0.0f, 0x1.506958p-121f, 0x1.7eaef2p-89f, 0.0f,
     0.0f, 0x1.2a1fdcp-9f, 0.0f, 0x1.3931cap-10f, 0x1.ccb066p-98f, 0x1.374b92p-111f,
     0x1.a9861ep-3f, 0x1.8bdb4ap-116f, 0x1.17f50cp-106f, 0x1.c4e0b2p-41f, 0.0f,
     0x1.86111ep-43f, 0x1.83a446p-27f, 0.0f, 0.0f, 0.0f, 0x1.1b15ep-116f, 0.0f, 0.0f,
     0x1.8dfecap-99f, 0x1.61289cp-37f, 0x1.9e42bp-62f, 0.0f, 0x1.f3eba4p-44f, 0.0f,
     0.0f, 0x1.02993cp-49f, 0x1.ca0a92p-70f, 0x1.bff5d2p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a47e4p-23f, 0.0f, 0.0f, 0.0f, 0x1.8d1d7cp-9f, 0.0f, 0.0f, 0x1.f0e4ep-112f,
     0x1.a8c47ap-38f, 0.0f, 0x1.b3f1b8p-37f, 0x1.3f35c2p-3f, 0.0f, 0x1.bc7bdcp-62f,
     0.0f, 0x1.7e2566p-64f, 0.0f, 0.0f, 0.0f, 0x1.8fec52p-32f, 0.0f, 0.0f,
     0x1.93de42p-111f, 0x1.961fd2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1946d2p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e3daep-123f, 0x1.cf1582p-27f,
     0x1.016b86p-91f, 0x1.512486p-83f, 0.0f, 0x1.b3eee4p-78f, 0x1.8bfbeap-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.209a36p-98f, 0x1.166facp-90f, 0.0f, 0x1.428efep-77f,
     0x1.9afbf8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4c09ep-13f, 0x1.b573c2p-58f, 0.0f,
     0x1.53190ap-113f, 0.0f, 0x1.dee18cp-124f, 0x1.e9939ap-113f, 0x1.4b3596p-52f,
     0x1.4eeb52p-39f, 0x1.4394acp-124f, 0x1.a78ebap-59f, 0.0f, 0x1.971ec6p-108f, 0.0f,
     0x1.cd3174p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1feb82p-51f, 0x1.efc2d2p-49f,
     0x1.d873bap-105f, 0x1.e8ecacp-83f, 0.0f, 0x1.d76f52p-47f, 0x1.1dbbdp-102f, 0.0f,
     0x1.82ec92p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1caa0cp-49f, 0.0f, 0.0f,
     0x1.531df6p-106f, 0.0f, 0x1.6d3cf2p-105f, 0x1.3bce4p-108f, 0x1.9ddb44p-108f,
     0x1.19bdbp-4f, 0x1.51280cp-18f, 0x1.559f46p-115f, 0.0f, 0x1.e845eep-73f,
     0x1.80b9cep-53f, 0.0f, 0.0f, 0x1.407cfap-8f, 0.0f, 0.0f, 0x1.cd2ffcp-53f, 0.0f,
     0x1.75939ep-27f, 0.0f, 0x1.78613ap-97f, 0x1.bb757ap-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44eab6p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a58b38p-99f, 0.0f, 0.0f, 0.0f, 0x1.36d4ccp-6f, 0x1.329edap-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0dc31ap-124f, 0x1.10b9fcp-45f, 0.0f, 0x1.2c31e8p-43f, 0.0f,
     0x1.8780c4p-82f, 0x1.d719c2p-31f, 0.0f, 0x1.e7a3cep-41f, 0x1.76cc7p-89f,
     0x1.bd2152p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e6416p-121f, 0.0f, 0.0f,
     0x1.24355p-108f, 0.0f, 0x1.071fe2p-117f, 0x1.e95728p-57f, 0.0f, 0x1.81af16p-9f,
     0x1.f03c3ep-126f, 0.0f, 0x1.01bc54p-61f, 0.0f, 0.0f, 0x1.5f5ab2p-40f,
     0x1.b824f2p-32f, 0x1.5a183p-120f, 0x1.b116f4p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a4068p-5f, 0x1.74968cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.215df2p-67f, 0x1.fbf68ap-100f, 0.0f, 0x1.9146dap-11f, 0x1.07a2bep-50f, 0.0f,
     0.0f, 0x1.976f5ep-76f, 0.0f, 0.0f, 0x1.195536p-71f, 0x1.e414fp-41f,
     0x1.6b8d56p-55f, 0x1.6c997ep-64f, 0x1.51101p-73f, 0x1.a7382ap-116f,
     0x1.a6a9c2p-35f, 0.0f, 0.0f, 0.0f, 0x1.38166ap-75f, 0.0f, 0.0f, 0.0f,
     0x1.02e936p-79f, 0x1.2459d6p-35f, 0.0f, 0.0f, 0x1.842a8ep-83f, 0.0f,
     0x1.5e968p-105f, 0x1.da9f16p-100f, 0x1.cbe0eep-90f, 0x1.e7ac14p-37f, 0.0f,
     0x1.755398p-76f, 0x1.0dfa14p-25f, 0.0f, 0x1.c2549cp-11f, 0x1.380f26p-54f,
     0x1.2856d2p-59f, 0.0f, 0.0f, 0x1.8f9718p-120f, 0x1.b0ae44p-76f, 0.0f,
     0x1.2e64dp-26f, 0x1.f190cep-40f, 0.0f, 0.0f, 0x1.017dc2p-7f, 0.0f,
     0x1.b440ap-94f, 0.0f, 0x1.c0f1f8p-37f, 0x1.c72206p-67f, 0.0f, 0x1.5dcafap-118f,
     0.0f, 0.0f, 0x1.f72034p-2f, 0.0f, 0.0f, 0x1.6f7764p-74f, 0.0f, 0x1.81adeap-29f,
     0x1.b77efp-9f, 0x1.6ffcb6p-89f, 0.0f, 0.0f, 0.0f, 0x1.d6f48ap-89f, 0.0f, 0.0f,
     0.0f, 0x1.90a968p-84f, 0.0f, 0x1.23d6cp-89f, 0x1.c1912ap-59f, 0.0f,
     0x1.b622bcp-109f, 0.0f, 0x1.a559ecp-50f, 0.0f, 0x1.1d1c64p-89f, 0.0f,
     0x1.d1d4a4p-20f, 0.0f, 0x1.720a4ap-77f, 0.0f, 0x1.79dd5ap-67f, 0x1.5a027p-28f,
     0x1.88c734p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dfdd4p-53f, 0x1.71669ap-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5d355ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b9826p-54f, 0.0f,
     0x1.03794p-56f, 0x1.cb696cp-50f, 0.0f, 0x1.7f1f7ap-36f, 0x1.740dfcp-85f,
     0x1.2bb76cp-112f, 0.0f, 0.0f, 0x1.57b7dp-70f, 0x1.7927fcp-2f, 0x1.ab24eap-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1a938p-28f, 0.0f, 0x1.060942p-44f, 0x1.3b5d74p-25f,
     0.0f, 0.0f, 0x1.ec3e16p-111f, 0x1.06d264p-54f, 0.0f, 0.0f, 0x1.37eefp-58f,
     0x1.adc42cp-43f, 0x1.86bafp-68f, 0.0f, 0x1.b2c3b4p-97f, 0.0f, 0.0f,
     0x1.7e944ep-79f, 0.0f, 0x1.6e0fccp-84f, 0x1.10fceap-60f, 0x1.dc9b9cp-77f,
     0x1.97870ep-31f, 0x1.e6b8fap-82f, 0.0f, 0.0f, 0x1.29e6b8p-81f, 0x1.677376p-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bbbe8p-51f, 0x1.511b74p-47f, 0.0f,
     0x1.9967ecp-19f, 0.0f, 0x1.48c53ep-96f, 0x1.cb17e6p-107f, 0.0f, 0x1.7f309ap-46f,
     0x1.345e14p-119f, 0.0f, 0.0f, 0x1.be5a3ap-126f, 0.0f, 0x1.cfa0a8p-5f, 0.0f, 0.0f,
     0.0f, 0x1.da6144p-94f, 0.0f, 0x1.74f904p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.526edep-30f, 0x1.7963c4p-65f,
     0x1.eb1dbcp-32f, 0.0f, 0x1.0196d6p-54f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.a179a8p-58f, 0x1.f36fc8p-14f, 0x1.7be0b2p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48f52p-29f, 0.0f, 0.0f, 0x1.b70bfp-36f, 0.0f, 0.0f, 0x1.e10a42p-81f,
     0x1.279d88p-106f, 0x1.d17768p-37f, 0x1.9bad78p-111f, 0x1.69372ep-6f,
     0x1.bdfa3cp-69f, 0x1.b0a4b8p-28f, 0x1.4b4628p-39f, 0x1.dab5d2p-73f, 0.0f, 0.0f,
     0.0f, 0x1.682046p-16f, 0x1.8bd442p-103f, 0.0f, 0x1.83e718p-98f, 0.0f,
     0x1.e1b502p-3f, 0.0f, 0x1.28224ap-125f, 0x1.89b9a6p-109f, 0x1.c7de6cp-107f,
     0x1.a790e2p-96f, 0x1.7e4ecp-54f, 0x1.afcfa2p-15f, 0x1.82bc14p-108f,
     0x1.12bac4p-103f, 0.0f, 0x1.bd5e82p-111f, 0.0f, 0.0f, 0x1.81e638p-20f,
     0x1.0372acp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.096fbp-116f, 0.0f,
     0x1.3ebe38p-114f, 0.0f, 0x1.3f9a4ep-120f, 0.0f, 0.0f, 0.0f, 0x1.f79aa2p-101f,
     0.0f, 0x1.aa423p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09568p-47f, 0.0f, 0.0f, 0.0f,
     0x1.dfc3eep-86f, 0.0f, 0x1.ee67fep-60f, 0x1.c3addcp-17f, 0x1.f2f722p-104f, 0.0f,
     0.0f, 0x1.49df3ep-83f, 0x1.a7fb46p-17f, 0.0f, 0.0f, 0x1.f281d2p-111f,
     0x1.db0868p-42f, 0x1.f7852cp-2f, 0.0f, 0.0f, 0.0f, 0x1.925c5ap-96f, 0.0f,
     0x1.47c9bap-95f, 0.0f, 0x1.080218p-73f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.979048p-116f, 0.0f, 0.0f, 0.0f, 0x1.618dfep-20f, 0.0f, 0x1.9d905ep-79f, 0.0f,
     0x1.348fcep-21f, 0.0f, 0x1.0b1754p-42f, 0x1.f24b32p-71f, 0x1.0b7ccep-13f, 0.0f,
     0x1.96fc14p-94f, 0.0f, 0x1.264d2p-94f, 0x1.8802ccp-90f, 0x1.e15236p-60f,
     0x1.848548p-38f, 0.0f, 0.0f, 0x1.bc3332p-116f, 0x1.a61366p-81f, 0x1.6a116ap-25f,
     0x1.8df1f6p-95f, 0.0f, 0.0f, 0x1.1c106ep-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95021p-57f, 0x1.1794p-69f, 0.0f, 0.0f, 0x1.3c2bfp-56f, 0x1.d1b416p-36f, 0.0f,
     0.0f, 0x1.4c570ep-7f, 0x1.2fe126p-118f, 0x1.1b88f6p-47f, 0x1.a6fcbp-51f, 0.0f,
     0.0f, 0x1.bfb176p-114f, 0x1.49d65p-113f, 0x1.6edcaap-105f, 0.0f, 0x1.36ab98p-57f,
     0.0f, 0.0f, 0x1.c9723ap-126f, 0x1.89a90ep-1f, 0.0f, 0x1.173086p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f46778p-38f, 0x1.a0c354p-27f, 0.0f, 0x1.1958cep-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.801d32p-62f, 0.0f, 0x1.81aa9ap-39f, 0x1.9509a2p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03367cp-88f, 0.0f,
     0x1.819c76p-28f, 0x1.5bc1b4p-73f, 0.0f, 0x1.60dbaap-9f, 0.0f, 0x1.059f2ep-81f,
     0x1.2ea848p-54f, 0x1.24d1e2p-2f, 0x1.df22a8p-20f, 0x1.012366p-121f,
     0x1.50b9fep-60f, 0.0f, 0.0f, 0x1.52508p-39f, 0.0f, 0x1.c23cd8p-39f,
     0x1.5571e2p-19f, 0.0f, 0x1.9fa5bcp-96f, 0.0f, 0x1.051edep-52f, 0.0f,
     0x1.d3fc18p-81f, 0x1.2f83fep-123f, 0x1.e2d162p-32f, 0.0f, 0x1.4c89cep-92f,
     0x1.fc32dp-60f, 0x1.8d9116p-109f, 0.0f, 0x1.ce7fcap-124f, 0x1.9ddb4cp-30f,
     0x1.f19b6p-84f, 0.0f, 0.0f, 0.0f, 0x1.f9dcdep-35f, 0x1.5579dp-66f, 0.0f,
     0x1.19cf82p-69f, 0.0f, 0x1.cf803ep-56f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_nextafterf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_nextafterf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_nextafterf1_purecfma bench acc %a\n", global_bench_acc);
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
