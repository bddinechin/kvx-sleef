/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf4_u10kvx.c --function \
 *     Sleef_finz_asinf4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0x1p0f, 0x1.e0b7acp-71f, 0x1.890ff4p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.910766p-99f, 0.0f, 0x1.eb7a44p-62f, 0x1.c4563ap-9f, 0.0f, 0x1.f09994p-77f,
     0x1.bddb58p-95f, 0x1.4e1ddep-102f, 0x1.2d9c52p-45f, 0x1.a89c94p-99f,
     0x1.848b9ap-28f, 0x1.5350c2p-68f, 0.0f, 0x1.409a8cp-91f, 0x1.b5114ep-44f,
     0x1.80ed98p-100f, 0x1.ea7fa8p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eee61p-119f,
     0x1.111ffp-31f, 0.0f, 0x1.27e498p-123f, 0x1.aff4c6p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a131bcp-86f, 0.0f, 0x1.787deap-66f, 0.0f, 0x1.0e6aacp-69f, 0.0f,
     0x1.18651cp-71f, 0.0f, 0x1.e07b6ap-112f, 0.0f, 0x1.2023e4p-120f, 0.0f, 0.0f,
     0.0f, 0x1.ad2f32p-64f, 0x1.8d0e3ap-84f, 0.0f, 0.0f, 0.0f, 0x1.f003b6p-78f, 0.0f,
     0.0f, 0x1.5c0bdep-64f, 0.0f, 0.0f, 0x1.6c1232p-74f, 0x1.89c2eep-75f, 0.0f,
     0x1.698926p-82f, 0x1.6cc3f2p-83f, 0x1.f5e4e2p-39f, 0.0f, 0.0f, 0x1.c03784p-39f,
     0x1.de30ep-28f, 0x1.04e98ep-95f, 0.0f, 0x1.201edp-51f, 0x1.6ed71ep-90f, 0.0f,
     0x1.e4a0aap-71f, 0x1.8e5c7p-2f, 0x1.0c10cep-93f, 0x1.49f6c8p-120f, 0.0f, 0.0f,
     0x1.f91f62p-59f, 0.0f, 0.0f, 0x1.47f13cp-49f, 0x1.2eacfcp-125f, 0.0f,
     0x1.bc343p-69f, 0.0f, 0x1.baf482p-76f, 0x1.40c848p-125f, 0.0f, 0x1.41a588p-7f,
     0x1.bc1eaap-51f, 0x1.1567f2p-20f, 0x1.778db8p-97f, 0.0f, 0.0f, 0.0f,
     0x1.22d34ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44202ep-72f, 0.0f, 0.0f,
     0x1.67778ep-54f, 0.0f, 0.0f, 0.0f, 0x1.22e93ap-66f, 0x1.c21b4p-14f, 0.0f,
     0x1.1e32ecp-101f, 0.0f, 0x1.9759bp-1f, 0.0f, 0x1.4cc826p-19f, 0.0f,
     0x1.683428p-71f, 0x1.b4e278p-38f, 0x1.590fa4p-95f, 0.0f, 0x1.a65a08p-77f,
     0x1.25384p-105f, 0x1.b5317ep-40f, 0.0f, 0.0f, 0x1.1969e6p-120f, 0x1.3ec05ap-95f,
     0.0f, 0x1.06cc7p-98f, 0.0f, 0.0f, 0x1.903e1ap-16f, 0x1.b691d8p-110f,
     0x1.691f6cp-27f, 0.0f, 0x1.0c5762p-118f, 0.0f, 0x1.eb62a6p-37f, 0x1.aff6b4p-67f,
     0.0f, 0.0f, 0.0f, 0x1.dbf69ap-68f, 0x1.60c75cp-94f, 0x1.0c3f72p-99f, 0.0f, 0.0f,
     0.0f, 0x1.deb28ep-3f, 0.0f, 0x1.d80f7ep-74f, 0x1.3e078cp-65f, 0.0f,
     0x1.50c2d8p-39f, 0x1.2effa2p-43f, 0x1.41783ap-17f, 0x1.4a43c6p-11f,
     0x1.7b462p-44f, 0.0f, 0.0f, 0x1.760c98p-2f, 0.0f, 0.0f, 0x1.ac14c2p-50f, 0.0f,
     0.0f, 0.0f, 0x1.0c81a2p-44f, 0.0f, 0.0f, 0x1.12c91cp-14f, 0.0f, 0x1.5a2f12p-98f,
     0.0f, 0.0f, 0x1.63ea2cp-58f, 0.0f, 0x1.111cd4p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b5b4dap-65f, 0.0f, 0.0f, 0.0f, 0x1.115504p-60f, 0.0f, 0.0f,
     0x1.d7b4f8p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.134998p-50f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.d5a574p-71f, 0.0f, 0x1.271b12p-98f, 0.0f, 0x1.7b83a6p-113f, 0x1p0f,
     0x1.02c2aap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b44976p-17f, 0x1.a19076p-109f,
     0.0f, 0x1.b7e58p-80f, 0x1.db9222p-126f, 0x1.de9e44p-19f, 0x1.30eb9cp-31f,
     0x1.8842cap-61f, 0.0f, 0x1.d5afccp-87f, 0x1.9cbc2ap-9f, 0x1.2fcf3ep-100f,
     0x1.494626p-112f, 0.0f, 0.0f, 0x1.f4b742p-50f, 0x1.3d4e9p-55f, 0.0f,
     0x1.d7b27p-33f, 0.0f, 0.0f, 0x1.6b2f4ap-41f, 0.0f, 0x1.dc7ba8p-78f,
     0x1.466fe8p-108f, 0.0f, 0x1.cd1e2ap-34f, 0x1.df0e04p-17f, 0x1.d70996p-118f,
     0x1.f9b83cp-108f, 0.0f, 0x1.1d0b22p-115f, 0x1.0ec9d6p-109f, 0x1.90e73cp-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cba8cp-105f, 0x1.9b8e88p-75f, 0.0f, 0.0f,
     0.0f, 0x1.a41aaap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eae972p-63f, 0.0f,
     0x1.8d6c2p-52f, 0x1.70f24ep-70f, 0.0f, 0.0f, 0.0f, 0x1.ce06dp-43f, 0.0f,
     0x1.9026eap-12f, 0x1.c223bep-48f, 0.0f, 0.0f, 0x1.535bb4p-59f, 0x1.7388bep-3f,
     0x1.28d5ap-13f, 0.0f, 0.0f, 0x1.98d6fcp-103f, 0x1.85431ep-114f, 0x1.48466p-98f,
     0x1.57cbe6p-115f, 0x1.de5162p-95f, 0.0f, 0x1.fb6d1cp-34f, 0x1.8b9d44p-44f,
     0x1.7947d2p-42f, 0.0f, 0x1.fef10ap-105f, 0.0f, 0x1.c2a08ap-47f, 0x1.2ccf76p-82f,
     0x1.04b9d8p-72f, 0.0f, 0.0f, 0x1.b8fb96p-114f, 0x1.c7cb08p-123f, 0x1.8bd666p-93f,
     0x1.6ddee8p-27f, 0x1.6da7a2p-25f, 0x1.9c45c6p-52f, 0.0f, 0x1.9dcdf8p-22f,
     0x1.4d1e78p-49f, 0x1.0efe3ep-36f, 0x1.13f654p-26f, 0.0f, 0.0f, 0x1.c7b6dep-96f,
     0x1.b3dea2p-89f, 0x1.87489ap-95f, 0.0f, 0x1.619738p-78f, 0.0f, 0x1.752284p-116f,
     0x1.033494p-94f, 0x1.8f6376p-113f, 0.0f, 0x1.32bc0ap-18f, 0x1.f4fda6p-6f,
     0x1.00d626p-10f, 0x1.05df56p-121f, 0x1.5457bep-77f, 0.0f, 0x1.d2933cp-20f,
     0x1.3237cap-10f, 0x1.cd57f2p-67f, 0.0f, 0x1.8e1706p-9f, 0x1.3aabdcp-15f, 0.0f,
     0x1.160b3p-33f, 0.0f, 0x1.ccfa9cp-17f, 0x1.880714p-79f, 0.0f, 0x1.977fb2p-118f,
     0x1.4d5d64p-9f, 0.0f, 0x1.a24ccp-15f, 0x1.8aacacp-80f, 0x1.a9257cp-1f,
     0x1.bc640ap-97f, 0.0f, 0.0f, 0x1.8c24fp-115f, 0.0f, 0x1.a35258p-102f,
     0x1.0da31p-40f, 0x1.07dfd2p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37448cp-94f,
     0x1.299c32p-93f, 0.0f, 0x1.2cb3ap-116f, 0x1.34b4c2p-13f, 0x1.532d28p-21f,
     0x1.c62ec6p-87f, 0x1.5b5e3ep-97f, 0x1.f539bp-76f, 0.0f, 0x1.8bbcfcp-69f, 0.0f,
     0x1.9b25p-54f, 0.0f, 0.0f, 0x1.e89086p-77f, 0x1.5f839p-26f, 0x1.c5bb4ap-98f,
     0x1.ddff6p-12f, 0x1.635f16p-21f, 0x1.3145d6p-50f, 0.0f, 0x1.07d71p-86f, 0.0f,
     0x1.57ff3p-123f, 0x1.db0264p-96f, 0.0f, 0x1.388bcp-101f, 0.0f, 0x1.3bc64ap-120f,
     0x1.b7d8e8p-75f, 0.0f, 0.0f, 0x1.1581fap-33f, 0.0f, 0.0f, 0x1.9a5c0cp-60f, 0.0f,
     0x1.b07268p-93f, 0.0f, 0x1.2df396p-113f, 0.0f, 0x1.67bed6p-71f, 0.0f,
     0x1.504fdp-31f, 0x1.6aa4aep-82f, 0x1.daa1cp-102f, 0x1.53950cp-8f, 0.0f, 0.0f,
     0.0f, 0x1.dff48ap-94f, 0.0f, 0.0f, 0.0f, 0x1.a62ccep-35f, 0.0f, 0x1.94fcdap-52f,
     0.0f, 0x1.a03b82p-107f, 0.0f, 0.0f, 0x1.38e258p-118f, 0x1.c2d394p-40f,
     0x1.3108acp-96f, 0.0f, 0.0f, 0x1.2b6d5p-60f, 0.0f, 0x1.81537cp-108f, 0.0f, 0.0f,
     0x1.f117bep-44f, 0.0f, 0x1.3b6fap-59f, 0.0f, 0x1.38d5ap-49f, 0x1.2c204cp-10f,
     0.0f, 0.0f, 0x1.6bde6p-27f, 0.0f, 0.0f, 0x1.c84096p-74f, 0x1.482f24p-30f, 0.0f,
     0.0f, 0.0f, 0x1.923ap-103f, 0x1.9759a2p-42f, 0.0f, 0x1.3f9058p-98f,
     0x1.74176cp-20f, 0x1.282c32p-9f, 0.0f, 0x1.d7b332p-17f, 0x1.031cf8p-59f,
     0x1.345406p-119f, 0x1.2267a2p-28f, 0x1.b2433ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.994152p-4f, 0x1.dac726p-85f, 0.0f, 0x1.3466b6p-30f, 0.0f,
     0x1.00c6cap-47f, 0.0f, 0.0f, 0.0f, 0x1.580c52p-92f, 0.0f, 0.0f, 0.0f,
     0x1.166c9ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7abd98p-101f, 0x1.b7a10ap-3f, 0.0f,
     0.0f, 0x1.c0562ap-3f, 0x1.dcfcd2p-65f, 0x1.86da74p-24f, 0x1.a6e326p-17f,
     0x1.515be2p-37f, 0.0f, 0x1.8a44a4p-103f, 0.0f, 0x1.ab8788p-77f, 0.0f,
     0x1.be2f44p-92f, 0.0f, 0.0f, 0x1.5014f4p-24f, 0.0f, 0.0f, 0.0f, 0x1.cb2966p-70f,
     0x1.c48f2cp-97f, 0x1.2febe4p-98f, 0x1.4e6f42p-54f, 0.0f, 0x1.bafdc2p-111f, 0.0f,
     0x1.88395p-47f, 0x1.8f8936p-80f, 0x1.0d0208p-102f, 0x1.27f4p-32f, 0.0f, 0.0f,
     0x1.9a006p-113f, 0.0f, 0x1.b9ffd4p-80f, 0x1.f1a2c6p-76f, 0.0f, 0x1.039506p-57f,
     0.0f, 0x1.083e5ap-4f, 0.0f, 0x1.c2b4bcp-13f, 0x1.ffd05ap-16f, 0.0f, 0.0f,
     0x1.bc21f4p-58f, 0x1.57c0d2p-5f, 0x1.aae5eap-8f, 0.0f, 0x1.94e8e2p-111f,
     0x1.7fd244p-57f, 0.0f, 0.0f, 0x1.687b62p-5f, 0.0f, 0x1.a5771p-53f,
     0x1.cdc57p-35f, 0x1.8048d4p-15f, 0.0f, 0.0f, 0x1.87c84p-65f, 0.0f, 0.0f,
     0x1.3ca85ap-30f, 0x1.250e92p-22f, 0x1.ecffccp-7f, 0x1.c1a3eap-44f, 0.0f, 0.0f,
     0x1.abce7ep-85f, 0.0f, 0x1.c81782p-110f, 0.0f, 0x1.cf31b6p-71f, 0.0f, 0.0f,
     0x1.a73108p-93f, 0.0f, 0x1.e99e8ep-32f, 0.0f, 0.0f, 0x1.2c5bp-103f,
     0x1.c076b4p-85f, 0x1.ff47b6p-107f, 0x1.c2488p-11f, 0x1.560a62p-64f, 0.0f,
     0x1.537f28p-97f, 0x1.decd36p-72f, 0x1.0922aep-44f, 0.0f, 0.0f, 0x1.2db0ccp-38f,
     0.0f, 0.0f, 0.0f, 0x1.58e54cp-61f, 0x1.dfff2p-20f, 0x1.4d6a74p-59f, 0.0f,
     0x1.dfc33ep-70f, 0.0f, 0x1.b8c738p-84f, 0x1.0e65p-42f, 0.0f, 0.0f,
     0x1.98c436p-31f, 0.0f, 0x1.b5874cp-123f, 0.0f, 0x1.05a77ep-13f, 0x1.fcf5f6p-106f,
     0.0f, 0x1.34b006p-22f, 0.0f, 0x1.a97f3p-97f, 0x1.b302c4p-95f, 0x1.0bbd22p-100f,
     0.0f, 0.0f, 0x1.6f268ep-125f, 0x1.258d78p-9f, 0x1.16fddep-55f, 0.0f,
     0x1.c2d796p-22f, 0x1.d00944p-15f, 0.0f, 0.0f, 0x1.e211a2p-97f, 0.0f, 0.0f, 0.0f,
     0x1.acb8bcp-93f, 0.0f, 0x1.93e45cp-65f, 0.0f, 0.0f, 0x1.a79042p-125f,
     0x1.0c431ep-23f, 0x1.84e51cp-87f, 0.0f, 0x1.0ac6c6p-122f, 0x1.c47194p-101f, 0.0f,
     0x1.6febaep-22f, 0.0f, 0.0f, 0x1.dd011cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0c732p-116f, 0x1.eb3b78p-66f, 0.0f, 0x1.4b1a56p-72f, 0x1.f7ff8p-53f, 0.0f,
     0x1.5bba06p-70f, 0x1.cf0244p-36f, 0x1.feca08p-110f, 0.0f, 0x1.928ccap-98f,
     0x1.9fb288p-45f, 0.0f, 0x1.4809dap-82f, 0x1.e283p-102f, 0x1.c18874p-18f, 0.0f,
     0.0f, 0x1.b15d46p-8f, 0x1.da85cep-88f, 0.0f, 0x1.6dff66p-79f, 0x1.a6129ap-23f,
     0.0f, 0.0f, 0.0f, 0x1.81cc1p-5f, 0.0f, 0x1.e96ebap-119f, 0.0f, 0.0f, 0.0f,
     0x1.f4b564p-80f, 0x1.62794cp-49f, 0x1.bf4fd2p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f80f4ap-67f, 0x1.4ff00ap-52f, 0x1.75fc7p-81f, 0x1.9685b8p-51f, 0.0f, 0.0f,
     0x1.866016p-19f, 0.0f, 0.0f, 0.0f, 0x1.19e674p-82f, 0x1.cfa59cp-49f, 0.0f, 0.0f,
     0x1.c322dap-13f, 0x1.2f5ca4p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e43336p-31f, 0.0f,
     0x1.1d10c6p-79f, 0.0f, 0.0f, 0x1.a9672cp-105f, 0x1.d4438cp-53f, 0x1.50aaccp-51f,
     0x1.70cafep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b931f6p-70f, 0x1.323f54p-114f, 0.0f,
     0.0f, 0x1.40513ep-100f, 0x1.70e71cp-33f, 0x1.9a95b2p-6f, 0x1.5a3422p-59f, 0.0f,
     0x1.7fb132p-29f, 0x1.eed434p-45f, 0.0f, 0.0f, 0x1.50290ep-69f, 0.0f, 0.0f, 0.0f,
     0x1.21d898p-29f, 0.0f, 0.0f, 0.0f, 0x1.51f8f8p-95f, 0x1.936614p-16f,
     0x1.90ec9cp-104f, 0x1.67c382p-120f, 0x1.cf49e8p-104f, 0x1.c7ff3ap-54f, 0.0f,
     0.0f, 0x1.122cd2p-68f, 0x1p0f, 0x1.8f8184p-98f, 0x1.b3fa6ep-31f, 0.0f, 0.0f,
     0x1.01e396p-97f, 0x1.08892ep-64f, 0x1.7f47bep-15f, 0.0f, 0x1.a7bcbap-106f,
     0x1.7c9ffep-81f, 0x1.c8f294p-70f, 0.0f, 0x1.5fc67ap-118f, 0.0f, 0.0f, 0.0f,
     0x1.2d8a66p-13f, 0x1.2d1dd4p-46f, 0x1.20652ep-125f, 0x1.6d42ecp-86f,
     0x1.50dff2p-21f, 0x1.d9befap-79f, 0.0f, 0x1.9c0086p-108f, 0x1.b91198p-56f, 0.0f,
     0.0f, 0x1.76cb52p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22b662p-111f, 0.0f, 0.0f, 0x1.1bb88p-20f, 0x1.aea73ap-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.295f1ap-53f, 0.0f, 0.0f, 0x1.045316p-32f, 0.0f, 0.0f,
     0x1.a6ae98p-19f, 0x1.fcb49ep-3f, 0.0f, 0.0f, 0.0f, 0x1.958142p-48f,
     0x1.4c8978p-1f, 0.0f, 0x1.dcc6ap-52f, 0x1.5e06f2p-36f, 0.0f, 0x1.8fbb12p-93f,
     0x1.9434aap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30e802p-28f, 0.0f, 0.0f, 0.0f,
     0x1.6cffd6p-7f, 0x1.e9e0d2p-66f, 0x1.f20dd6p-28f, 0x1.1ee15ep-27f, 0.0f,
     0x1.c28deap-52f, 0x1.a4cbcep-33f, 0.0f, 0x1.9632f8p-126f, 0x1.dae882p-44f, 0.0f,
     0x1.7ffd86p-98f, 0.0f, 0x1.0c5336p-99f, 0.0f, 0.0f, 0x1.6ca89ep-79f,
     0x1.71cc8ap-32f, 0.0f, 0.0f, 0x1.49c1fap-125f, 0.0f, 0x1.c2c7c2p-77f, 0.0f,
     0x1.c32b9cp-70f, 0x1.b26a02p-86f, 0.0f, 0.0f, 0.0f, 0x1.625ec8p-54f, 0.0f, 0.0f,
     0.0f, 0x1.a40b9ap-40f, 0.0f, 0.0f, 0x1.00f936p-68f, 0.0f, 0x1.9629dap-39f,
     0x1.7873ap-101f, 0.0f, 0.0f, 0x1.63f534p-6f, 0.0f, 0x1.5e325p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4a524p-33f, 0x1.6cf14p-16f, 0x1.a3021cp-53f, 0.0f,
     0x1.e1cc0cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b30c2ep-59f, 0x1.93685cp-89f,
     0.0f, 0.0f, 0x1.a3ba72p-10f, 0x1.4a0d6p-18f, 0x1.ccce76p-49f, 0.0f,
     0x1.a2ab1p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e6c46p-119f, 0.0f,
     0x1.c7c706p-9f, 0.0f, 0x1.3efecp-96f, 0x1.06405ap-23f, 0x1.c7a6f8p-52f,
     0x1.c54d42p-95f, 0x1.57490ap-69f, 0x1.a196aep-112f, 0.0f, 0x1.48c8b6p-44f,
     0x1.edf9cp-12f, 0x1.873744p-69f, 0.0f, 0x1.264c6ep-23f, 0x1.18ed08p-57f,
     0x1.eb836p-118f, 0x1.3d0cf4p-74f, 0.0f, 0x1.ce66ap-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0258ep-67f, 0x1.77381ap-79f, 0.0f, 0.0f, 0.0f, 0x1.8c0e82p-113f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.2f3fb8p-70f, 0x1.561024p-94f, 0.0f, 0.0f,
     0.0f, 0x1.283f4cp-122f, 0x1.bcb756p-121f, 0x1.e0ee18p-125f, 0x1.f4c2dp-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4429p-5f, 0x1.5ebb8ep-105f, 0x1.5a3304p-90f,
     0x1.225cd8p-34f, 0x1.737904p-98f, 0.0f, 0.0f, 0.0f, 0x1.07cd4p-20f, 0.0f,
     0x1.74d5f4p-102f, 0x1.1b5796p-1f, 0.0f, 0x1.a6985ap-10f, 0x1.93eb5p-82f, 0.0f,
     0x1.570fe4p-87f, 0.0f, 0x1.eb3e82p-74f, 0.0f, 0x1.27e2b6p-19f, 0x1.4a68f6p-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a7912p-120f, 0.0f, 0.0f, 0.0f, 0x1.8a69a4p-45f,
     0.0f, 0x1.fccdc2p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.222fa8p-3f,
     0x1.21b598p-35f, 0.0f, 0.0f, 0x1.647fa2p-86f, 0x1.5e322ep-76f, 0.0f, 0.0f,
     0x1.0b38ap-91f, 0.0f, 0x1.9cd05ep-96f, 0x1.09b154p-105f, 0x1.54d002p-19f,
     0x1.63e7fp-78f, 0x1.35d81ap-41f, 0x1.8ae808p-82f, 0x1.9d4ffap-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dc74a8p-32f
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
            tmp1 = Sleef_finz_asinf4_u10kvx(tmp0);
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
    printf("Sleef_finz_asinf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asinf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
