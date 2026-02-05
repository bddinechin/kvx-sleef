/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf4_kvx.c --function Sleef_sqrtf4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.9861f2p-89f, 0.0f, 0.0f, 0x1.9fed16p-33f, 0x1.924278p-126f, 0.0f, 0.0f,
     0.0f, 0x1.37b1fap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6764ap-110f,
     0x1.5a754ap-123f, 0x1.2fcb7cp-21f, 0.0f, 0.0f, 0x1.a01e1cp-18f, 0.0f,
     0x1.d5ff78p-28f, 0.0f, 0.0f, 0x1.6b9c86p-106f, 0x1.ac2908p-21f, 0.0f, 0.0f, 0.0f,
     0x1.180de6p-122f, 0x1.e676eep-4f, 0.0f, 0x1.4cde66p-121f, 0.0f, 0.0f,
     0x1.318de8p-25f, 0.0f, 0x1.7246d4p-73f, 0x1.dc9716p-69f, 0x1.da787ep-22f, 0.0f,
     0x1.e8cd2ap-75f, 0x1.f865d2p-110f, 0.0f, 0x1.1c0e56p-43f, 0.0f, 0x1.ff52e2p-46f,
     0.0f, 0.0f, 0x1.61ebccp-93f, 0.0f, 0.0f, 0x1.f7dfeep-23f, 0x1.e09af4p-35f, 0.0f,
     0.0f, 0x1.3e2f52p-50f, 0x1.3059ep-31f, 0.0f, 0.0f, 0x1.727ab6p-23f,
     0x1.7363e6p-31f, 0.0f, 0x1.544b7p-68f, 0x1.e01bbap-24f, 0.0f, 0.0f,
     0x1.e18432p-117f, 0x1.8ec83cp-23f, 0.0f, 0.0f, 0.0f, 0x1.4a70ccp-122f,
     0x1.48b90ap-64f, 0x1.e793d2p-112f, 0.0f, 0.0f, 0x1.b5e02p-40f, 0x1.44bb3ep-65f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ff06ep-79f, 0x1.c1678p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3247fp-89f, 0.0f, 0x1.656ceap-46f, 0x1.7cc39p-48f,
     0x1.56d736p-126f, 0.0f, 0.0f, 0x1.48f794p-18f, 0.0f, 0.0f, 0x1.e5c69cp-122f,
     0.0f, 0x1.6967cap-4f, 0x1.500a2cp-73f, 0x1.8bb52p-51f, 0.0f, 0.0f,
     0x1.9e1212p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17448p-25f, 0.0f, 0x1.cad5bap-122f,
     0.0f, 0x1.1fa35p-108f, 0x1.4162aep-29f, 0x1.2e6a64p-108f, 0x1.33e8a8p-105f, 0.0f,
     0.0f, 0x1.ae7a86p-103f, 0x1.b68928p-45f, 0.0f, 0.0f, 0.0f, 0x1.69e4b2p-17f, 0.0f,
     0.0f, 0x1.edd308p-20f, 0.0f, 0x1.00dadep-68f, 0x1.cf9e6ep-75f, 0.0f, 0.0f,
     0x1.8ecfcap-27f, 0x1.089d0cp-30f, 0.0f, 0.0f, 0x1.eae452p-123f, 0.0f, 0.0f, 0.0f,
     0x1.49b704p-3f, 0x1.067396p-4f, 0.0f, 0x1.6dd9ecp-77f, 0.0f, 0x1.560fccp-61f,
     0.0f, 0x1.69a0f6p-106f, 0.0f, 0x1.4602dp-6f, 0x1.589c28p-13f, 0x1.ce10ecp-40f,
     0.0f, 0x1.014c58p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c1fcap-41f, 0.0f,
     0x1.170c3cp-72f, 0.0f, 0x1.b7f4ep-85f, 0x1.39a10ap-126f, 0x1.06a53ep-111f, 0.0f,
     0x1.ff9004p-124f, 0.0f, 0x1.d5d062p-69f, 0x1.ee8d84p-13f, 0.0f, 0.0f,
     0x1.25daa6p-115f, 0.0f, 0x1.ffff3ep-18f, 0x1.8bcfdp-31f, 0x1.16df06p-16f,
     0x1.baa20ep-80f, 0.0f, 0.0f, 0.0f, 0x1.1e4be6p-11f, 0.0f, 0.0f, 0x1.cc8806p-9f,
     0.0f, 0.0f, 0.0f, 0x1.c89b78p-34f, 0.0f, 0x1.b4e7fep-63f, 0x1.228a0ap-1f,
     0x1.581ap-27f, 0.0f, 0.0f, 0x1.e8bba8p-80f, 0x1.5ece7ap-25f, 0.0f,
     0x1.c89a34p-53f, 0.0f, 0.0f, 0x1.1c92e2p-66f, 0.0f, 0.0f, 0x1.129a9cp-104f,
     0x1.e43608p-17f, 0.0f, 0x1.ea011ap-82f, 0x1.05eff8p-25f, 0x1.8cf842p-57f,
     0x1.10d92ap-74f, 0.0f, 0.0f, 0x1.8d58dcp-83f, 0.0f, 0x1.e43b64p-83f,
     0x1.dcef7p-103f, 0.0f, 0x1.aa8e08p-110f, 0x1.a2bc14p-54f, 0x1.8a7856p-51f,
     0x1.d2929cp-57f, 0x1.a0df2cp-75f, 0.0f, 0.0f, 0x1.27ab24p-102f, 0.0f,
     0x1.631eccp-111f, 0.0f, 0.0f, 0x1.5a0d34p-13f, 0x1.31bd18p-53f, 0x1.28fc16p-19f,
     0.0f, 0.0f, 0x1.c04c18p-26f, 0.0f, 0x1.ae411ap-19f, 0x1.123232p-118f, 0.0f,
     0x1.d55564p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37f86ap-66f, 0.0f,
     0x1.830006p-96f, 0x1p0f, 0x1.f9f2b8p-83f, 0x1.a1da0cp-4f, 0x1.c1206ep-21f,
     0x1.07baeep-65f, 0x1.51132ap-31f, 0.0f, 0.0f, 0.0f, 0x1.4b8b44p-65f,
     0x1.3cb352p-13f, 0x1.b867cap-92f, 0x1.6e8796p-33f, 0.0f, 0.0f, 0x1.7ec342p-95f,
     0x1.f9f62ap-40f, 0.0f, 0x1.0c063p-95f, 0.0f, 0x1.eb35a2p-25f, 0x1.53b422p-18f,
     0.0f, 0x1.482d84p-3f, 0x1.a6133cp-63f, 0.0f, 0x1.6ba716p-10f, 0.0f,
     0x1.e72196p-35f, 0.0f, 0x1.724a74p-28f, 0.0f, 0x1.a63ff8p-85f, 0.0f,
     0x1.a9a8f6p-85f, 0x1.d64268p-81f, 0x1.603b48p-108f, 0.0f, 0x1.967dacp-19f,
     0x1.beb3d4p-89f, 0x1.332676p-49f, 0x1.d45b9ep-78f, 0.0f, 0.0f, 0x1.39e96p-97f,
     0x1.9705aap-37f, 0.0f, 0.0f, 0.0f, 0x1.a20102p-37f, 0.0f, 0x1.8b1dcap-15f, 0.0f,
     0x1.0b4928p-109f, 0.0f, 0.0f, 0x1.53f20ep-82f, 0.0f, 0.0f, 0x1.c7bf6ap-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f48dbap-119f, 0x1.6c907p-110f, 0x1.27821p-41f, 0.0f,
     0.0f, 0x1.e2a21ap-73f, 0x1.2cd62ep-21f, 0.0f, 0.0f, 0x1.9fe166p-36f,
     0x1.44d61ap-68f, 0x1.b21456p-63f, 0x1.98af4ep-62f, 0.0f, 0x1.3c3988p-44f,
     0x1.525d1p-121f, 0.0f, 0.0f, 0x1.c8dfbep-79f, 0x1.828bbap-44f, 0.0f,
     0x1.d1609ep-46f, 0.0f, 0x1.e95256p-23f, 0.0f, 0x1.78e7c8p-59f, 0.0f, 0.0f, 0.0f,
     0x1.c9eb68p-17f, 0x1.25318ep-35f, 0x1.365faap-98f, 0x1.9000a4p-25f,
     0x1.7b1e28p-8f, 0x1.63a83p-12f, 0.0f, 0.0f, 0.0f, 0x1.5e28e6p-76f,
     0x1.043296p-116f, 0x1.07bd42p-67f, 0x1p0f, 0x1.a19634p-6f, 0x1.a57ecap-65f,
     0x1.55e534p-100f, 0.0f, 0x1.c242f4p-101f, 0.0f, 0x1.67b954p-21f, 0.0f, 0.0f,
     0x1.e90758p-2f, 0x1.1b3e34p-29f, 0.0f, 0x1.309a2ap-108f, 0x1.bd1032p-102f, 0.0f,
     0x1.fa1a8ep-122f, 0.0f, 0x1.946c3p-119f, 0x1.99a146p-15f, 0.0f, 0x1.bc3e1ap-119f,
     0x1.d5cf4cp-13f, 0x1.5c3f6cp-105f, 0.0f, 0x1.fd6f0cp-112f, 0.0f, 0.0f, 0.0f,
     0x1.30e6b2p-75f, 0.0f, 0x1.e5e4ecp-36f, 0.0f, 0x1.42083ap-45f, 0.0f,
     0x1.e4d5f4p-22f, 0.0f, 0.0f, 0x1.25a402p-59f, 0.0f, 0.0f, 0x1.dc13ap-107f, 0.0f,
     0x1.96a786p-126f, 0.0f, 0x1.f7b7fcp-37f, 0x1.c2e8eap-12f, 0x1.4e0b3ep-15f,
     0x1.c06696p-102f, 0.0f, 0.0f, 0.0f, 0x1.fc444ep-60f, 0.0f, 0x1.df243ep-69f, 0.0f,
     0x1.56474cp-110f, 0x1.565918p-113f, 0x1.e0ace6p-78f, 0.0f, 0.0f, 0x1.f1916ap-45f,
     0.0f, 0x1.f5f1dap-81f, 0.0f, 0.0f, 0x1.c81e5ap-54f, 0x1.84480cp-10f,
     0x1.34cc78p-37f, 0.0f, 0x1.86a2e4p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.735044p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf11e6p-35f, 0x1.d04412p-4f, 0.0f,
     0x1.d8884cp-90f, 0.0f, 0x1.8b0624p-10f, 0x1.d2f2d2p-13f, 0.0f, 0.0f,
     0x1.854be6p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1178dap-112f, 0.0f,
     0.0f, 0.0f, 0x1.ae028ap-19f, 0.0f, 0x1.71a124p-121f, 0x1.9264ecp-126f, 0.0f,
     0x1.f1ab84p-54f, 0x1.ae750ep-93f, 0x1.b064d2p-60f, 0x1.9c8d6ep-5f,
     0x1.b5785p-70f, 0.0f, 0x1.a79ce4p-77f, 0x1.7717f2p-82f, 0.0f, 0.0f, 0.0f,
     0x1.54627p-35f, 0.0f, 0x1.60802p-43f, 0.0f, 0x1.dc5a6p-90f, 0x1.17e19p-5f, 0.0f,
     0.0f, 0x1.2a78d6p-70f, 0x1.cf4758p-90f, 0x1.522e2ap-1f, 0.0f, 0x1.72cec2p-124f,
     0.0f, 0x1.9f29fep-48f, 0x1.d7bf12p-96f, 0x1.e9c1ap-81f, 0.0f, 0x1.7e424ap-109f,
     0.0f, 0x1.4d6372p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a1f5ap-64f, 0x1.759dc8p-89f, 0x1.87ed14p-18f, 0x1.f601b6p-16f, 0.0f,
     0x1.e9216p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f460bcp-51f, 0.0f,
     0x1.e92954p-85f, 0.0f, 0x1.c7760cp-38f, 0.0f, 0.0f, 0.0f, 0x1.ea4f04p-35f, 0.0f,
     0x1.487f8p-112f, 0.0f, 0x1.f59cfep-98f, 0x1.676644p-105f, 0x1.794e5ep-39f,
     0x1.c2b3fep-83f, 0x1.d6f2bep-104f, 0.0f, 0x1.ce372cp-93f, 0.0f, 0.0f, 0.0f,
     0x1.d34cecp-5f, 0.0f, 0.0f, 0.0f, 0x1.a2d3d2p-54f, 0x1.5f071ap-87f,
     0x1.0b5d16p-103f, 0.0f, 0.0f, 0x1.ab598ep-79f, 0x1.2350b8p-56f, 0x1.af5576p-95f,
     0.0f, 0.0f, 0.0f, 0x1.d38f58p-9f, 0.0f, 0x1.458c2ep-73f, 0.0f, 0x1.f77a1ep-23f,
     0x1.a3165p-5f, 0x1.f5a61p-53f, 0x1.36ebd4p-14f, 0x1.65ef78p-38f, 0.0f, 0.0f,
     0x1.6a9212p-40f, 0.0f, 0x1.5097dp-68f, 0x1.58c412p-114f, 0x1.088e48p-92f,
     0x1.13e294p-73f, 0x1.b5049p-24f, 0x1.576af8p-97f, 0.0f, 0x1.070c14p-83f,
     0x1.d2cc48p-49f, 0.0f, 0x1.1abe22p-110f, 0.0f, 0x1.64d18p-51f, 0.0f,
     0x1.db3p-15f, 0x1.fea12cp-8f, 0.0f, 0.0f, 0.0f, 0x1.bce658p-47f,
     0x1.5be8a8p-116f, 0x1.0c2f22p-7f, 0.0f, 0x1.91595cp-103f, 0.0f, 0.0f,
     0x1.783116p-79f, 0.0f, 0.0f, 0x1.f27636p-106f, 0x1.742f08p-100f, 0x1.4cd078p-79f,
     0x1.7c72eap-58f, 0.0f, 0.0f, 0x1.5815d4p-43f, 0x1.ecb248p-58f, 0x1.589fcp-16f,
     0.0f, 0x1.12cb02p-51f, 0x1.77a6eap-36f, 0.0f, 0x1.858f5ap-8f, 0x1.632e1ap-126f,
     0.0f, 0x1.34c972p-57f, 0x1.d785e6p-83f, 0x1.537f4p-125f, 0x1.c6ed1p-40f, 0.0f,
     0.0f, 0.0f, 0x1.d8c888p-27f, 0.0f, 0.0f, 0.0f, 0x1.1dfb08p-121f, 0.0f,
     0x1.5b5bdcp-63f, 0x1.43dfd8p-68f, 0.0f, 0.0f, 0x1.0b7928p-80f, 0x1.35e914p-106f,
     0.0f, 0x1.5689b4p-94f, 0x1.d2f056p-115f, 0x1.1850ecp-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.41f4f2p-68f, 0x1.a77e58p-83f, 0.0f, 0x1.8193e6p-79f, 0.0f,
     0x1.b48bcp-84f, 0x1.cba386p-124f, 0.0f, 0.0f, 0x1.0a8834p-35f, 0.0f,
     0x1.d56ed2p-13f, 0.0f, 0.0f, 0x1.db1a2ap-22f, 0x1.8eafd2p-20f, 0.0f, 0.0f, 0.0f,
     0x1.e3b22cp-36f, 0.0f, 0.0f, 0x1.a6e606p-6f, 0x1.3ff106p-21f, 0.0f, 0.0f, 0.0f,
     0x1.0da6cap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64f51ep-56f, 0x1.b85d9ep-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ed8b18p-61f, 0.0f, 0.0f, 0x1.e85498p-32f, 0x1.c762c4p-8f,
     0x1.bf8d12p-84f, 0.0f, 0x1.78edf8p-93f, 0x1.766a1ap-41f, 0.0f, 0x1.97e244p-7f,
     0.0f, 0x1.490be4p-86f, 0x1.d28024p-27f, 0x1.a076bcp-89f, 0.0f, 0x1.425bfp-101f,
     0x1.4a200cp-112f, 0x1.30dc94p-120f, 0x1.98affcp-3f, 0x1.072f82p-18f,
     0x1.68e088p-43f, 0x1.032d12p-87f, 0.0f, 0x1.8e085p-20f, 0.0f, 0x1.d036e2p-108f,
     0.0f, 0x1.6976d8p-85f, 0.0f, 0.0f, 0.0f, 0x1.275748p-26f, 0x1.f949dp-60f,
     0x1.b7c5a2p-103f, 0x1.220a2ep-110f, 0x1.db988cp-119f, 0x1.ea447p-43f,
     0x1.85af36p-57f, 0x1.ff4304p-65f, 0x1.454cd8p-116f, 0x1.8bba18p-67f, 0.0f, 0.0f,
     0.0f, 0x1.7adb5ep-64f, 0.0f, 0x1.8ca0dp-90f, 0x1.ca551cp-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b718c2p-41f, 0.0f, 0x1.10ec9ep-61f, 0.0f, 0x1.1e4616p-57f,
     0x1.49736ap-79f, 0.0f, 0x1.a6083ap-18f, 0x1.89160ep-82f, 0.0f, 0.0f,
     0x1.8f0fbp-120f, 0x1.b25314p-16f, 0.0f, 0.0f, 0x1.53caf8p-111f, 0x1.d50a6p-75f,
     0x1.3b2efap-104f, 0.0f, 0.0f, 0x1.cb4c44p-76f, 0x1.1d286cp-38f, 0x1.50610ap-109f,
     0x1.c79adap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e86ccp-84f,
     0x1.e9019ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03193cp-56f, 0.0f, 0x1.58496ep-38f,
     0.0f, 0.0f, 0x1.5e4708p-75f, 0x1.919ca4p-73f, 0x1.b2ad58p-22f, 0x1.284cd2p-74f,
     0.0f, 0.0f, 0.0f, 0x1.5e2546p-7f, 0.0f, 0.0f, 0x1.4041dp-121f, 0x1.1a931cp-98f,
     0x1.e05316p-83f, 0.0f, 0x1.705fd8p-27f, 0.0f, 0.0f, 0x1.a9793p-62f, 0.0f,
     0x1.6aaaa8p-41f, 0x1.db3256p-13f, 0x1.142368p-80f, 0.0f, 0x1.2e4f2ap-28f, 0.0f,
     0x1.c70e58p-68f, 0x1.61cc38p-120f, 0x1.08f49cp-52f, 0x1.bf48dcp-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.048542p-33f, 0.0f, 0.0f, 0.0f, 0x1.2b9c0cp-102f, 0.0f,
     0x1.5f4acep-14f, 0x1.afe4aep-30f, 0.0f, 0.0f, 0.0f, 0x1.2b42fcp-125f, 0.0f,
     0x1.54eba2p-79f, 0.0f, 0.0f, 0x1.2cd1ap-104f, 0.0f, 0.0f, 0x1.491464p-120f,
     0x1.a777c2p-13f, 0x1.919b96p-21f, 0.0f, 0x1.c145f6p-81f, 0x1.a4f2acp-81f,
     0x1.3e1ecep-28f, 0.0f, 0x1.e85deap-78f, 0.0f, 0.0f, 0.0f, 0x1.5df43p-36f,
     0x1.9a31c6p-85f, 0x1.72f96ap-113f, 0x1.65f908p-65f, 0x1.c37844p-11f, 0.0f,
     0x1.d7a8p-113f, 0.0f, 0x1.e96012p-4f, 0x1.5ffc04p-108f, 0.0f, 0x1.552b24p-116f,
     0.0f, 0.0f, 0x1.504d9ep-11f, 0.0f, 0x1.38a39cp-55f, 0.0f, 0x1.c3b24ap-122f, 0.0f,
     0.0f, 0.0f, 0x1.0bb3e4p-54f, 0x1.034342p-90f, 0x1.b8dd58p-5f, 0x1.591d8ep-102f,
     0.0f, 0x1.da9b0ap-107f, 0x1.1c63cep-122f, 0x1.36eba2p-93f, 0x1.14276cp-93f, 0.0f,
     0x1.37a9cap-96f, 0.0f, 0.0f, 0x1.7163e2p-49f, 0.0f, 0.0f, 0x1.a66dfcp-43f, 0.0f,
     0x1.121104p-55f, 0.0f, 0.0f, 0x1.c9e20cp-113f, 0x1.b871dcp-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.df12c8p-4f, 0x1.f8122ep-124f, 0x1.b9b4e4p-66f, 0.0f, 0.0f, 0.0f,
     0x1.520862p-120f, 0x1.a19948p-97f, 0x1.c5cf2p-55f, 0x1.70296p-58f, 0.0f,
     0x1.4a94ep-16f, 0.0f, 0.0f, 0x1.af688cp-97f, 0.0f, 0x1.14bdaep-23f,
     0x1.2cb416p-33f, 0.0f, 0.0f, 0.0f, 0x1.7c1408p-58f, 0.0f, 0.0f, 0x1.13947p-53f,
     0x1.64287p-71f, 0x1.2ba3fap-74f, 0.0f, 0x1.517982p-16f, 0.0f, 0x1.462a4ep-27f,
     0x1.0f9e88p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7128a8p-52f, 0.0f,
     0x1.b5bb8ep-22f, 0.0f, 0.0f, 0.0f, 0x1.87025ap-4f, 0.0f, 0.0f, 0.0f,
     0x1.5b4ceep-10f, 0x1.c8097p-70f, 0.0f, 0x1.818a5p-59f, 0x1.9e20aep-116f, 0.0f,
     0.0f, 0x1.afb2d4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d4cbap-103f, 0x1.6a597ap-11f, 0x1.eef5d6p-8f,
     0x1.587a5ep-104f, 0.0f, 0x1.ef2fa6p-74f, 0.0f, 0.0f, 0x1.7540f4p-120f,
     0x1.a8d1e4p-113f, 0x1.f51672p-101f, 0.0f, 0x1.cb34a4p-126f, 0.0f, 0.0f,
     0x1.767f18p-59f, 0x1.97b914p-52f, 0.0f, 0.0f, 0x1.5bc31ap-80f, 0x1.b1861p-29f,
     0x1.f8b626p-65f, 0.0f, 0x1.506304p-121f, 0x1.cc0c9p-108f, 0x1.409764p-123f, 0.0f,
     0.0f, 0x1.13bb46p-107f, 0.0f, 0.0f, 0x1.72264ap-110f, 0.0f, 0.0f,
     0x1.f211e8p-104f, 0.0f, 0.0f, 0.0f, 0x1.93688ap-106f, 0x1.4b9ec2p-9f, 0.0f, 0.0f,
     0x1.54513p-25f, 0.0f, 0.0f, 0x1.c757d6p-55f, 0.0f, 0x1.f6c972p-85f,
     0x1.9879cp-123f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_sqrtf4_kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sqrtf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
