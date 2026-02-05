/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf4_u10avx2128.c --function \
 *     Sleef_finz_acosf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.83310ap-53f, 0x1.62bcap-33f, 0.0f, 0x1.67c22cp-117f, 0x1.57a168p-107f,
     0x1.9a101p-126f, 0x1.cb094cp-90f, 0x1.db9484p-102f, 0x1.259618p-80f,
     0x1.258e9p-110f, 0x1.1f076p-36f, 0.0f, 0.0f, 0x1.9baaaap-92f, 0x1.c6f86cp-96f,
     0x1.b85b1ep-47f, 0x1.b84c06p-126f, 0x1.730d3cp-17f, 0x1.ade70cp-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c1b6ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5febap-51f,
     0.0f, 0x1.13173ap-113f, 0x1.1d0adap-86f, 0.0f, 0.0f, 0x1.f0e3dcp-4f,
     0x1.8c2182p-55f, 0x1.56255ap-100f, 0.0f, 0x1.46e7dp-94f, 0x1.bab36cp-117f, 0.0f,
     0x1.3b6078p-15f, 0x1.aa625p-42f, 0x1.927ad6p-22f, 0x1.525b36p-23f,
     0x1.4ba1bap-11f, 0.0f, 0x1.75e57cp-30f, 0.0f, 0x1.79d6ecp-123f, 0x1.f8affep-1f,
     0.0f, 0x1.213cfcp-115f, 0x1.626024p-125f, 0x1.6f633ep-115f, 0.0f,
     0x1.b1893cp-96f, 0.0f, 0.0f, 0x1.224b1p-57f, 0.0f, 0x1.d6198ep-110f, 0.0f,
     0x1.0aaee8p-97f, 0x1.22847cp-18f, 0x1.120842p-42f, 0.0f, 0.0f, 0.0f,
     0x1.108f9ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97736cp-90f, 0x1.cfc292p-5f, 0.0f,
     0x1.23dcaep-23f, 0.0f, 0x1.b4f498p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b025e8p-70f, 0x1.614dp-24f, 0.0f, 0.0f, 0.0f, 0x1.d44a22p-82f,
     0x1.ea7a76p-81f, 0x1.731af4p-68f, 0x1.c5ac54p-69f, 0x1.cef23ap-30f,
     0x1.7d0ca4p-53f, 0x1.b3f08p-122f, 0x1.3ff40ep-40f, 0x1.2038a4p-32f, 0.0f,
     0x1.3bb3bap-6f, 0x1.f24b52p-120f, 0.0f, 0.0f, 0.0f, 0x1.f5666ap-28f, 0.0f, 0.0f,
     0x1.435dc2p-83f, 0.0f, 0.0f, 0x1.e5b374p-61f, 0.0f, 0.0f, 0.0f, 0x1.82ff5ep-37f,
     0.0f, 0.0f, 0x1.c6d9ep-61f, 0x1.03f96ep-109f, 0.0f, 0.0f, 0x1.39a062p-9f,
     0x1.15ca58p-33f, 0.0f, 0x1.592472p-103f, 0x1.ac48c8p-45f, 0.0f, 0.0f,
     0x1.09d90ep-35f, 0.0f, 0x1.d7d22cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c6d64p-41f, 0.0f, 0.0f, 0x1.6380eep-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60a99ep-42f, 0.0f, 0.0f, 0x1.0dda2ep-118f, 0x1.f2bc32p-103f, 0.0f,
     0x1.734cb6p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a12a92p-88f, 0x1.442e2cp-104f,
     0x1.dac2cap-12f, 0x1.09ae26p-122f, 0x1.0bcba6p-121f, 0x1.8799b4p-122f, 0.0f,
     0x1.7f4caep-55f, 0x1.97f056p-119f, 0.0f, 0x1.2e9f94p-97f, 0x1.a62048p-39f, 0.0f,
     0x1.0b845ep-20f, 0.0f, 0.0f, 0x1.64ca2ap-4f, 0x1.e2c598p-24f, 0.0f, 0.0f,
     0x1.e5dcbep-30f, 0.0f, 0.0f, 0x1.2a5d2ap-34f, 0x1.7e26fap-18f, 0.0f,
     0x1.1a67fep-97f, 0x1.c6da98p-33f, 0x1.5046a4p-75f, 0.0f, 0x1.22e086p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad1b44p-108f, 0x1.67855cp-76f, 0.0f, 0x1.8a1cp-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a6058p-75f, 0x1.a12abcp-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.650a0ep-47f, 0x1.9290c6p-120f, 0x1.8e4beap-37f, 0x1.d59722p-101f,
     0.0f, 0.0f, 0.0f, 0x1.473a3ep-125f, 0.0f, 0x1.781952p-9f, 0x1.5a47cap-23f,
     0x1.1f3b2cp-108f, 0x1.0e3976p-38f, 0x1.4fdfcep-13f, 0x1.3e35c8p-115f,
     0x1.057028p-33f, 0x1.0f4c14p-80f, 0x1.6cccfap-29f, 0x1.3b41bp-83f, 0.0f,
     0x1.209bb8p-58f, 0x1.ebc028p-48f, 0x1.d8824ap-79f, 0.0f, 0.0f, 0.0f,
     0x1.9ac59cp-40f, 0.0f, 0x1.64ab8ap-114f, 0x1.677ca8p-117f, 0.0f, 0x1.d9dc8cp-69f,
     0x1.fad102p-22f, 0x1.bea312p-23f, 0x1.484f52p-18f, 0x1.7cb774p-34f,
     0x1.9f05b4p-27f, 0x1.2636f2p-30f, 0x1.995ac8p-55f, 0x1.0ebfe2p-89f,
     0x1.6e58bep-83f, 0.0f, 0x1.b7ffc2p-20f, 0x1.49bf74p-109f, 0.0f, 0x1.af967cp-80f,
     0x1.90866p-98f, 0x1.be0026p-120f, 0x1.67240cp-31f, 0x1.35ebc6p-112f,
     0x1.c97f9p-59f, 0x1.2447dcp-73f, 0.0f, 0x1.84dec8p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf358p-85f, 0x1.eaaceap-95f, 0.0f, 0x1.164e8p-39f, 0.0f, 0x1.90369ap-106f,
     0x1.9871bep-60f, 0.0f, 0.0f, 0.0f, 0x1.c50e6p-27f, 0x1.851a2ap-91f,
     0x1.a3c752p-54f, 0x1.ea41eep-108f, 0.0f, 0.0f, 0x1.3fdbd4p-64f, 0x1.f28a6ap-14f,
     0x1.6ac108p-72f, 0x1.9919ap-66f, 0x1.321962p-35f, 0x1.ffcdacp-30f,
     0x1.bf6976p-99f, 0x1.73661p-124f, 0.0f, 0.0f, 0x1.8f461p-59f, 0.0f, 0.0f, 0.0f,
     0x1.194fc8p-106f, 0x1.98cd4p-65f, 0x1.ae2544p-19f, 0x1p0f, 0.0f, 0.0f,
     0x1.d93e3cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e217ep-51f, 0.0f,
     0.0f, 0x1.3cb6b2p-10f, 0.0f, 0.0f, 0x1.ec4fe6p-97f, 0x1.0c0626p-86f, 0.0f,
     0x1.9bb8bcp-109f, 0.0f, 0.0f, 0x1.5033eep-76f, 0x1.bf6e4cp-80f, 0.0f,
     0x1.de8bbap-17f, 0.0f, 0.0f, 0x1.986a3cp-115f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.55a7acp-100f, 0x1.9931e4p-62f, 0.0f, 0x1.7fd028p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0803f8p-23f, 0.0f, 0x1.fba6c2p-14f, 0x1.9cdbfap-28f, 0x1.08b6aap-51f,
     0x1.e34394p-6f, 0x1.54d412p-25f, 0.0f, 0x1.50e7cap-97f, 0x1.73060cp-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4586ap-3f, 0.0f, 0x1.3e6d86p-55f, 0x1.5fbe02p-77f,
     0x1.a4801p-123f, 0x1.9b21dp-67f, 0.0f, 0.0f, 0x1.f34ab2p-56f, 0.0f,
     0x1.84832ap-103f, 0x1.e35ddcp-118f, 0.0f, 0x1.ae3c86p-44f, 0x1.150efep-111f,
     0.0f, 0x1.e5104ap-4f, 0.0f, 0x1.22b8bcp-55f, 0.0f, 0.0f, 0.0f, 0x1.4341d8p-94f,
     0.0f, 0x1.f5de84p-50f, 0.0f, 0.0f, 0x1.05768ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8e462ep-93f, 0x1.f42de2p-40f, 0x1.79eceep-33f, 0.0f,
     0x1.14daa4p-117f, 0.0f, 0x1.220b2p-59f, 0x1.a2dc2cp-72f, 0.0f, 0x1.f35304p-94f,
     0x1.60dc8ap-110f, 0.0f, 0x1.705214p-64f, 0.0f, 0.0f, 0x1.0123bp-98f, 0.0f,
     0x1.f7d292p-3f, 0.0f, 0.0f, 0x1.0b0e24p-54f, 0x1.7fa766p-70f, 0x1.035c3ap-16f,
     0.0f, 0x1.b9c756p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f682ep-4f,
     0x1.701d92p-32f, 0x1.9db07ep-40f, 0x1.1cbfb6p-80f, 0x1.31f8dap-79f,
     0x1.d0a2aap-38f, 0.0f, 0x1.8e3be2p-31f, 0x1.c58da6p-2f, 0x1.e577ecp-57f,
     0x1.e851a6p-22f, 0.0f, 0.0f, 0x1.01f2c4p-123f, 0x1.96b542p-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2aa768p-62f, 0.0f, 0.0f, 0.0f, 0x1.5fa6aap-93f, 0.0f, 0.0f,
     0x1.dc24d6p-92f, 0x1.2e4a04p-98f, 0x1.c3bc16p-76f, 0x1.ae4a6p-16f, 0.0f, 0.0f,
     0.0f, 0x1.178a1ap-103f, 0.0f, 0.0f, 0.0f, 0x1.62115ep-122f, 0.0f,
     0x1.1b2b58p-16f, 0x1.561e68p-77f, 0.0f, 0.0f, 0x1.9b52cap-98f, 0.0f,
     0x1.b3b13p-45f, 0.0f, 0.0f, 0x1.d1b07ep-14f, 0.0f, 0.0f, 0x1.dba3f4p-59f, 0.0f,
     0x1.102074p-72f, 0x1.479f48p-81f, 0x1.9d2758p-29f, 0.0f, 0.0f, 0x1.f7355p-91f,
     0.0f, 0.0f, 0.0f, 0x1.f62cfcp-72f, 0.0f, 0.0f, 0x1.b382bp-79f, 0.0f,
     0x1.45c904p-76f, 0.0f, 0x1.ff0d1ep-104f, 0.0f, 0x1.a17392p-101f,
     0x1.389528p-119f, 0x1.7b4ae4p-122f, 0x1.43d42p-56f, 0.0f, 0x1.4e8554p-29f, 0.0f,
     0x1.cae69p-55f, 0.0f, 0.0f, 0x1.f28304p-83f, 0x1.7e84cap-124f, 0.0f,
     0x1.484576p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9b74cp-121f,
     0x1.0eecb8p-82f, 0.0f, 0x1.5403cep-83f, 0x1.54f304p-97f, 0.0f, 0x1.5d49f2p-53f,
     0x1.1cf862p-75f, 0x1.8b0566p-13f, 0x1.72e384p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9f3fp-54f, 0x1.5bb496p-69f, 0x1.886d5cp-71f, 0.0f, 0x1.4a829ep-61f,
     0x1.29c67ap-98f, 0x1.d9c822p-39f, 0x1.4f486p-88f, 0x1.6a4318p-108f,
     0x1.4075c8p-57f, 0.0f, 0x1.5fc564p-87f, 0x1.52b682p-107f, 0.0f, 0.0f,
     0x1.884abp-49f, 0x1.d0d6fap-10f, 0x1.a482c8p-93f, 0x1.1804e4p-63f, 0.0f,
     0x1.ae8742p-117f, 0x1.70904ap-113f, 0x1.078256p-52f, 0.0f, 0.0f, 0x1.779c06p-66f,
     0.0f, 0.0f, 0.0f, 0x1.bd9844p-111f, 0.0f, 0x1.321f2ep-62f, 0x1.7bb4ccp-34f, 0.0f,
     0x1.cc0a4cp-63f, 0x1.8a9d7cp-79f, 0.0f, 0x1.56f4fep-86f, 0.0f, 0x1.f831fap-42f,
     0.0f, 0x1.fe1058p-91f, 0.0f, 0x1.0a7adep-75f, 0x1.b37b7ap-48f, 0x1.38d26p-85f,
     0x1.48cbd6p-97f, 0x1.38ed28p-50f, 0.0f, 0x1.dc781p-92f, 0x1.713b8ap-95f,
     0x1.610488p-20f, 0.0f, 0x1.1a63f8p-27f, 0x1.59bbacp-14f, 0.0f, 0x1.6cbcc4p-89f,
     0x1.f5468cp-115f, 0x1.cae8bep-83f, 0x1.c7ef76p-100f, 0x1.b1a124p-87f,
     0x1.0bf0aap-17f, 0x1.eeb97cp-53f, 0x1.91a86p-119f, 0x1.2eeecap-115f, 0.0f,
     0x1.db0cccp-112f, 0.0f, 0x1.07864p-88f, 0.0f, 0x1.e3fb6ap-100f, 0.0f,
     0x1.5c46fep-80f, 0.0f, 0.0f, 0.0f, 0x1.a0e754p-15f, 0x1.e6e4dep-64f, 0.0f, 0.0f,
     0.0f, 0x1.6f17p-61f, 0.0f, 0.0f, 0x1.84d5dcp-124f, 0.0f, 0x1.b0ff74p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b359p-69f, 0x1.244b04p-44f,
     0x1.fec4ap-106f, 0.0f, 0x1.4a762p-48f, 0x1.c1c96cp-31f, 0.0f, 0.0f,
     0x1.9ef6fp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef180ep-32f, 0.0f, 0.0f,
     0x1.68268p-67f, 0.0f, 0x1.ffe28p-65f, 0.0f, 0x1.9977ccp-45f, 0.0f,
     0x1.57ea66p-46f, 0.0f, 0x1.043ff4p-123f, 0x1.05013ap-17f, 0x1.0247cap-64f,
     0x1.e9ad5cp-5f, 0x1.a91392p-70f, 0.0f, 0x1.ce2046p-124f, 0x1.985a1cp-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d195ep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3c8e2p-71f, 0x1.8b7aa6p-23f, 0x1.e6a72ep-2f, 0x1.2aadfp-86f,
     0x1.b48378p-117f, 0.0f, 0x1.c38c9ap-97f, 0x1.2a0f7ap-34f, 0x1.282f14p-98f, 0.0f,
     0x1.c223acp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2d66e4p-97f, 0x1.801f72p-23f, 0.0f, 0.0f, 0.0f, 0x1.975fd6p-112f,
     0.0f, 0.0f, 0x1.de1422p-101f, 0x1.269b16p-33f, 0x1.79210ap-101f, 0.0f, 0.0f,
     0x1.1145f4p-107f, 0x1.fefbe6p-114f, 0.0f, 0x1.866a1ap-79f, 0x1.fcf41cp-54f,
     0x1.72610cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ce628p-88f, 0.0f,
     0x1.a9bc02p-90f, 0x1.3545e2p-125f, 0.0f, 0x1.c5fc96p-28f, 0x1.0832f6p-17f,
     0x1.71b498p-50f, 0x1.241a14p-28f, 0.0f, 0x1.6ea032p-36f, 0x1.ae4422p-109f,
     0x1.758f48p-65f, 0x1.d5095p-77f, 0.0f, 0x1.f5ae74p-102f, 0x1.642f04p-9f,
     0x1.1537b6p-57f, 0x1.c6ab0ep-32f, 0x1.37f5e8p-12f, 0x1.cf5d72p-119f,
     0x1.b136fcp-112f, 0.0f, 0x1.3d6e5cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f2726p-17f,
     0x1.261b4ap-73f, 0x1.934002p-64f, 0.0f, 0.0f, 0.0f, 0x1.835e4p-87f, 0.0f,
     0x1.80fdc2p-97f, 0x1.583b7ap-114f, 0x1.fc974ap-11f, 0x1.52bc72p-110f,
     0x1.468e9ep-85f, 0x1.adb8ap-122f, 0.0f, 0x1.916632p-75f, 0.0f, 0.0f,
     0x1.0eef98p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.beaf36p-18f, 0.0f,
     0x1.016eeep-71f, 0.0f, 0.0f, 0.0f, 0x1.ed20acp-20f, 0.0f, 0x1.eb895ap-66f,
     0x1.859e76p-30f, 0.0f, 0x1.0515eap-107f, 0.0f, 0.0f, 0x1.b1999p-21f,
     0x1.4ea446p-65f, 0.0f, 0x1.f89d6cp-63f, 0x1.3846eap-122f, 0.0f, 0x1.6b6136p-65f,
     0x1.e87deap-25f, 0.0f, 0x1.f8d27ap-91f, 0.0f, 0x1.7c7f94p-52f, 0.0f, 0.0f, 0.0f,
     0x1.4515bap-38f, 0x1.c7eff2p-87f, 0x1.42498ep-123f, 0.0f, 0x1.e70d3ep-34f,
     0x1.a91a24p-90f, 0.0f, 0x1.5a4242p-1f, 0x1.427ac4p-10f, 0.0f, 0x1.d719p-45f,
     0x1.76e352p-106f, 0.0f, 0.0f, 0x1.1f0b68p-104f, 0.0f, 0.0f, 0x1.50ef2cp-12f,
     0x1.d6f458p-75f, 0x1.de14cap-67f, 0x1.0d914ep-16f, 0x1.7a804p-108f, 0.0f, 0.0f,
     0x1.28761cp-16f, 0.0f, 0x1.448354p-47f, 0.0f, 0x1.f5dc22p-38f, 0x1.f87cep-33f,
     0x1.b3ffe4p-115f, 0.0f, 0x1.ca7p-1f, 0x1.a32c8ep-42f, 0.0f, 0x1.ca42eep-47f,
     0x1.fd0b24p-29f, 0x1.bdf8aap-14f, 0.0f, 0.0f, 0x1.e79fbep-29f, 0.0f, 0.0f, 0.0f,
     0x1.aed666p-50f, 0x1.af8c8cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aec24p-60f, 0.0f,
     0.0f, 0.0f, 0x1.725206p-73f, 0x1.fb11dep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b5b24p-18f, 0x1.1346b8p-79f, 0x1.80d732p-47f, 0.0f, 0x1.b9c7a8p-116f, 0.0f,
     0x1.819286p-76f, 0x1.482396p-77f, 0.0f, 0x1.870be4p-91f, 0x1.67c324p-2f,
     0x1.106476p-37f, 0.0f, 0x1.e13dbp-66f, 0x1.d65e0ap-90f, 0x1.01b184p-113f,
     0x1.e69b08p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cd45p-8f, 0x1.14e184p-61f, 0.0f,
     0x1.fc49bap-81f, 0x1.35b344p-95f, 0.0f, 0x1.291fbp-84f, 0.0f, 0.0f,
     0x1.4ef8fep-45f, 0x1.422b14p-61f, 0.0f, 0x1.1dd018p-48f, 0x1.e63406p-99f,
     0x1.0e44cap-109f, 0.0f, 0x1.cb383ap-40f, 0.0f, 0.0f, 0.0f, 0x1.eb948p-87f, 0.0f,
     0.0f, 0x1.2e1a4cp-53f, 0.0f, 0.0f, 0.0f, 0x1.33393cp-90f, 0x1.f5b202p-30f,
     0x1.cfb90ep-66f, 0x1.ba2fccp-26f, 0x1.30e166p-77f, 0x1.0220ccp-58f, 0.0f,
     0x1.409a2p-79f, 0.0f, 0.0f, 0x1.dffcaep-79f, 0x1.c0b092p-91f, 0x1.d5d412p-3f,
     0x1.9b880ep-60f, 0x1.0a6ce2p-16f, 0.0f, 0.0f, 0x1.552016p-48f, 0.0f,
     0x1.f4182ep-79f, 0x1.dd0a14p-99f, 0.0f, 0.0f, 0x1.2b0eap-121f, 0x1.0aab6cp-12f,
     0x1.ccc034p-13f, 0x1.cc695cp-32f, 0.0f, 0.0f, 0x1.bce264p-96f, 0x1.40a3fcp-30f,
     0x1.1f13bep-98f, 0x1.2a1268p-48f, 0x1.b525e8p-87f, 0x1.e6cee2p-30f, 0.0f,
     0x1.6e7e8p-90f, 0x1.6b19a8p-75f, 0.0f, 0.0f, 0x1.0874eep-126f, 0x1.d94872p-93f,
     0x1.e52072p-23f, 0.0f, 0.0f, 0x1.c49ad2p-108f, 0.0f, 0.0f, 0.0f, 0x1.0fe5ccp-83f,
     0.0f, 0.0f, 0x1.e122c2p-35f, 0.0f, 0.0f, 0.0f, 0x1.3a9bc6p-4f, 0.0f, 0.0f,
     0x1.d59acp-77f, 0.0f, 0.0f, 0x1.7dad76p-126f, 0x1.f19174p-102f, 0x1.5f7fecp-104f,
     0x1.8216d8p-37f, 0.0f, 0.0f, 0.0f, 0x1.a727f4p-19f, 0.0f, 0x1.6a386ep-126f,
     0x1.2d37a6p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c790e8p-126f, 0.0f, 0.0f,
     0x1.7b1f62p-114f, 0x1.7bf816p-18f, 0x1.312bbap-9f, 0x1.4e708ap-84f,
     0x1.e23664p-70f, 0x1.b621c8p-64f, 0x1.2e73dcp-78f, 0x1.968426p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e1cb76p-105f, 0.0f, 0.0f, 0x1.bb146ep-57f, 0x1.7d3ffap-20f, 0.0f
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
            tmp1 = Sleef_finz_acosf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_acosf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acosf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
