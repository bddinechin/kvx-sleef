/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf4_u35kvx.c --function Sleef_finz_cosf4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.433d0ap-32f, 0.0f, 0x1.bfef7ap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.23b072p-33f, 0x1.f61dd8p-119f, 0x1.2b454p-111f, 0x1.11a57ep-39f, 0.0f,
     0x1.c083cap-114f, 0.0f, 0.0f, 0.0f, 0x1.baa674p-115f, 0x1.5bfb34p-80f, 0.0f,
     0x1.a7eaeap-18f, 0.0f, 0.0f, 0x1.879f72p-12f, 0x1.d6faacp-8f, 0x1.cdb02p-88f,
     0x1.257b88p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.791fbcp-32f, 0x1.a0319ap-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.db12bp-42f, 0.0f, 0x1.4f372cp-1f, 0.0f,
     0x1.03bdp-74f, 0x1.e474c2p-55f, 0.0f, 0x1.462fcep-125f, 0x1.14d0fap-88f,
     0x1.67f698p-30f, 0x1.d5c888p-49f, 0.0f, 0x1.b392dcp-31f, 0.0f, 0.0f, 0.0f,
     0x1.5ca5fap-102f, 0.0f, 0x1.fb0f52p-46f, 0x1.d9ae2p-70f, 0.0f, 0x1.92cd3p-116f,
     0x1.c2deacp-70f, 0.0f, 0x1.633432p-38f, 0.0f, 0.0f, 0x1.893462p-56f, 0.0f, 0.0f,
     0x1.d711a4p-63f, 0x1.b08c68p-15f, 0.0f, 0x1.b036e8p-23f, 0.0f, 0x1.5b32dcp-93f,
     0.0f, 0.0f, 0x1.d457c4p-61f, 0x1.4aa3a4p-123f, 0.0f, 0.0f, 0x1.321234p-77f, 0.0f,
     0x1.ae7958p-63f, 0x1.88879cp-74f, 0.0f, 0x1.c9bb76p-6f, 0x1.77387cp-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c5b274p-87f, 0x1.a670a6p-5f, 0.0f, 0x1.dc797ep-28f, 0.0f,
     0.0f, 0x1.560b82p-47f, 0.0f, 0.0f, 0.0f, 0x1.7f625ap-118f, 0x1.8b978cp-18f,
     0x1.404acep-26f, 0.0f, 0x1.b9118cp-35f, 0.0f, 0.0f, 0x1.37a9c6p-52f, 0.0f,
     0x1.f755cap-104f, 0x1.8b2af4p-41f, 0.0f, 0.0f, 0x1.c591ap-97f, 0x1.44167p-13f,
     0.0f, 0x1.4015fcp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f3638p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b4a74p-106f, 0x1.e3d338p-5f, 0x1.933e58p-113f, 0x1.8dcf9p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db556p-121f, 0.0f, 0x1.647d0cp-85f, 0x1.3f5e68p-65f,
     0x1.240712p-9f, 0x1.d4e2cep-21f, 0.0f, 0x1.a0f3c4p-111f, 0x1.66dd9ep-105f,
     0x1.8dcfp-16f, 0x1.1ec12ap-98f, 0x1.7dbffp-95f, 0x1.9bf58cp-23f, 0.0f,
     0x1.b55024p-57f, 0.0f, 0x1.8bd688p-38f, 0.0f, 0.0f, 0.0f, 0x1.c8a212p-62f,
     0x1.b6335ep-30f, 0.0f, 0x1.ebe094p-40f, 0x1.688106p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1c037cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe4014p-116f,
     0x1.7a77cp-35f, 0x1.3d1aeap-1f, 0.0f, 0x1.a06b0ep-79f, 0x1.88ce3ap-30f,
     0x1.51b6fcp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f9e36p-36f, 0.0f, 0x1.1b11cap-109f,
     0x1.f72f58p-107f, 0x1.eba8fap-65f, 0.0f, 0x1.3ebf8ap-49f, 0.0f, 0x1.86a674p-91f,
     0.0f, 0x1.0a4544p-96f, 0x1.53202ap-117f, 0.0f, 0x1.bb975cp-6f, 0x1.c5a31p-105f,
     0.0f, 0.0f, 0x1.df9582p-58f, 0x1.53411p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8202p-1f, 0x1.67ec94p-22f, 0x1.bdf71p-41f, 0.0f, 0x1.e31f9ap-17f,
     0x1.5eb34ep-59f, 0x1.36694ep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.623926p-73f,
     0.0f, 0.0f, 0.0f, 0x1.99bfp-96f, 0x1.e34c78p-81f, 0.0f, 0x1.bc10aap-82f,
     0x1.49319cp-74f, 0x1.c631fep-125f, 0x1.38bdep-90f, 0x1.1bffd4p-18f, 0.0f,
     0x1.1ebe4cp-97f, 0.0f, 0x1.fc72b8p-81f, 0.0f, 0x1.b69764p-9f, 0x1.45722p-64f,
     0.0f, 0x1.7ac63ep-10f, 0.0f, 0.0f, 0x1.9dd24cp-15f, 0x1.ee2a92p-54f,
     0x1.d98ad4p-90f, 0x1.c89118p-16f, 0x1.00e754p-118f, 0x1.4500b4p-95f,
     0x1.d0bae6p-78f, 0x1.8e41fap-85f, 0x1.6e7074p-31f, 0.0f, 0x1.2608aap-71f,
     0x1.e6f586p-100f, 0.0f, 0x1.51c87p-26f, 0x1.b22deep-121f, 0.0f, 0.0f, 0.0f,
     0x1.337242p-20f, 0.0f, 0.0f, 0x1.a93e1ap-93f, 0.0f, 0.0f, 0.0f, 0x1.8154f2p-30f,
     0x1.327248p-53f, 0x1.20c246p-25f, 0x1.2f883ep-104f, 0x1.8699bp-30f, 0.0f,
     0x1.a68838p-10f, 0.0f, 0.0f, 0.0f, 0x1.e710f4p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.62fd64p-42f, 0x1.663cbp-119f, 0.0f, 0x1.e209fp-58f, 0.0f, 0.0f, 0.0f,
     0x1.fc2796p-27f, 0x1.34d764p-92f, 0.0f, 0x1.ca706p-85f, 0x1.10b5eep-39f, 0.0f,
     0.0f, 0x1.9368aap-1f, 0.0f, 0x1.7025eep-16f, 0.0f, 0x1.c1f34p-115f,
     0x1.80579p-91f, 0.0f, 0x1.5dce16p-59f, 0x1.8295fap-53f, 0.0f, 0.0f,
     0x1.9be9d4p-116f, 0x1.d225eap-2f, 0x1.1cbb84p-63f, 0.0f, 0x1.303082p-52f, 0.0f,
     0.0f, 0x1.eaa03p-61f, 0.0f, 0x1.251b4ep-44f, 0x1.058358p-49f, 0x1.5a0bc2p-27f,
     0x1.4e27bp-98f, 0.0f, 0x1.6a6066p-106f, 0.0f, 0x1.4a3b8p-37f, 0x1.f57164p-6f,
     0x1.470f9p-119f, 0.0f, 0x1.3d839cp-38f, 0.0f, 0.0f, 0.0f, 0x1.231a5ep-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fb3d96p-13f, 0x1.fb5cfap-105f, 0.0f, 0.0f, 0x1.4b65c2p-3f,
     0.0f, 0x1.a607f6p-64f, 0x1.c08678p-87f, 0x1.a196a4p-96f, 0x1.9f554p-34f, 0.0f,
     0.0f, 0.0f, 0x1.56b058p-53f, 0.0f, 0x1.dcd8fap-19f, 0x1.048b08p-100f, 0.0f,
     0x1.95895cp-41f, 0x1.c244dep-5f, 0.0f, 0x1.286ae6p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eda248p-100f, 0x1.c39334p-77f, 0x1.f517c4p-51f, 0x1.812158p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7955cap-33f, 0x1.0f205ep-94f, 0x1.38eb62p-29f,
     0x1.68a3c2p-72f, 0x1.29108ep-28f, 0.0f, 0x1.f41a7ep-37f, 0.0f, 0x1.211188p-105f,
     0.0f, 0.0f, 0x1.e9e238p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b7d58p-62f, 0x1.9340dp-18f, 0.0f, 0x1.91ac02p-112f, 0.0f, 0.0f,
     0x1.821f8cp-15f, 0.0f, 0x1.ff132cp-23f, 0.0f, 0.0f, 0x1.6ebd6ep-16f,
     0x1.31720ap-23f, 0x1.f1bf52p-3f, 0x1.183354p-119f, 0x1.4cafccp-23f, 0.0f, 0.0f,
     0x1.75b4b8p-115f, 0.0f, 0x1.b4f66ap-69f, 0x1.05c06ep-87f, 0.0f, 0.0f, 0.0f,
     0x1.5eee28p-15f, 0.0f, 0x1.f1bb42p-91f, 0x1.186a94p-38f, 0.0f, 0x1.8e1192p-71f,
     0.0f, 0x1.9bc712p-114f, 0.0f, 0x1.66c134p-15f, 0x1p0f, 0.0f, 0x1.07e8b6p-97f,
     0x1.81531p-8f, 0x1.5d394ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea7ddcp-108f,
     0x1.7afdaep-112f, 0x1.c7ce94p-5f, 0x1.74da5p-52f, 0.0f, 0x1.ba2b58p-71f,
     0x1.10d974p-122f, 0.0f, 0.0f, 0x1.9b5dfp-116f, 0x1.f4ce12p-15f, 0.0f, 0.0f,
     0x1.4ee19cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee5672p-122f, 0.0f, 0x1.97b522p-109f,
     0.0f, 0x1.270b52p-75f, 0x1.69b712p-111f, 0.0f, 0x1.865cc8p-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.480e1p-21f, 0x1.69a698p-70f, 0.0f, 0.0f, 0x1.15dda2p-40f, 0.0f,
     0.0f, 0x1.3deadp-4f, 0x1.383f36p-58f, 0x1.7a5afp-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3ff08ap-123f, 0.0f, 0.0f, 0.0f, 0x1.c07612p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a4989ap-84f, 0x1.44f3bep-78f, 0.0f, 0x1.27f466p-20f, 0.0f,
     0x1.2d58a6p-102f, 0.0f, 0x1.5e5fc8p-105f, 0x1.f1aab6p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2bb7eep-125f, 0.0f, 0x1.5f4202p-39f, 0.0f, 0.0f, 0x1.db27f2p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.60f908p-83f, 0x1.77b04cp-1f, 0.0f, 0x1.47622cp-16f,
     0.0f, 0x1.8287e4p-2f, 0x1.186dfp-122f, 0x1.2ac3fap-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5cb68p-116f, 0x1.70b65cp-85f, 0x1.95c4b6p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.125094p-45f, 0x1.1f0324p-53f, 0x1.eebc42p-22f, 0x1.ec02c2p-39f,
     0x1.178316p-8f, 0x1.ec63a4p-88f, 0.0f, 0.0f, 0.0f, 0x1.59c95ep-109f,
     0x1.79a166p-125f, 0x1.a82d82p-91f, 0.0f, 0.0f, 0x1.58b304p-108f, 0.0f,
     0x1.7a3222p-60f, 0.0f, 0x1.6b2e0ep-115f, 0.0f, 0x1.8a779p-53f, 0x1.f39e7p-72f,
     0.0f, 0x1.10ed6p-124f, 0x1.2eae8cp-109f, 0x1.2c78aep-65f, 0x1.f088d2p-89f,
     0x1.62d5d4p-98f, 0x1.3ba4p-37f, 0.0f, 0.0f, 0x1.a7b402p-113f, 0.0f,
     0x1.77e0c8p-123f, 0x1.f5b33cp-117f, 0.0f, 0.0f, 0.0f, 0x1.010b42p-79f, 0.0f,
     0x1.95240cp-12f, 0.0f, 0x1.f96808p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a84166p-75f,
     0x1.7f96bap-29f, 0x1.a13f2cp-87f, 0x1.4d4342p-67f, 0.0f, 0x1.e9a906p-92f, 0.0f,
     0.0f, 0.0f, 0x1.a592dcp-13f, 0x1.b051a2p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d25d8p-11f, 0.0f, 0.0f, 0.0f, 0x1.69078cp-73f, 0x1.001824p-6f, 0.0f,
     0x1.4a05dcp-19f, 0x1.cd68cep-65f, 0x1.80a164p-64f, 0.0f, 0x1.e50e1p-18f,
     0x1.7c6dcep-75f, 0.0f, 0x1.72ca5p-18f, 0.0f, 0.0f, 0x1.e2bc06p-104f, 0.0f,
     0x1.78f356p-84f, 0x1.9f22dap-119f, 0x1.c491fcp-79f, 0.0f, 0.0f, 0x1.5eb38cp-63f,
     0x1.7755fap-117f, 0.0f, 0x1.de8b7cp-67f, 0.0f, 0x1.f480bp-21f, 0.0f, 0.0f,
     0x1.01c988p-69f, 0x1.c03792p-125f, 0x1.99595cp-68f, 0.0f, 0x1.628f5p-96f, 0.0f,
     0x1.a51caep-35f, 0x1.e15768p-65f, 0.0f, 0.0f, 0x1.f37fdp-126f, 0.0f, 0.0f,
     0x1.8e7f88p-77f, 0.0f, 0.0f, 0x1.f128ecp-56f, 0x1.10d99ap-120f, 0.0f,
     0x1.2f4b64p-55f, 0.0f, 0.0f, 0.0f, 0x1.7ce8cep-104f, 0x1.4ee552p-124f,
     0x1.709b6ep-32f, 0.0f, 0.0f, 0.0f, 0x1.ca7e4ap-119f, 0x1.b6b3eep-115f, 0.0f,
     0.0f, 0.0f, 0x1.0737b4p-89f, 0.0f, 0.0f, 0.0f, 0x1.d034c6p-18f, 0.0f,
     0x1.c74dcp-77f, 0x1.ea9deep-52f, 0.0f, 0x1.dc49eep-46f, 0x1.48525cp-117f, 0.0f,
     0.0f, 0x1.9f72fp-19f, 0.0f, 0.0f, 0.0f, 0x1.e4357ap-122f, 0x1.3a7d7p-119f, 0.0f,
     0x1.b95086p-122f, 0.0f, 0.0f, 0x1.6d8bb6p-56f, 0x1.27538ap-94f, 0.0f, 0.0f,
     0x1.9bbecap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.765b26p-21f, 0.0f,
     0x1.d5c8f4p-104f, 0x1.fe2d5p-44f, 0.0f, 0x1.6e51dp-49f, 0x1.f01874p-7f, 0.0f,
     0x1.8e2cb4p-96f, 0.0f, 0x1.e42fdep-40f, 0.0f, 0.0f, 0x1.7aee28p-91f, 0.0f, 0.0f,
     0x1.2e45dcp-52f, 0x1.4b1f44p-110f, 0x1.6d6ddcp-92f, 0.0f, 0.0f, 0x1.911f26p-43f,
     0x1.00563cp-94f, 0x1.016fep-76f, 0.0f, 0x1.9ee028p-91f, 0.0f, 0.0f, 0.0f,
     0x1.861fcep-99f, 0.0f, 0x1.a0d826p-27f, 0.0f, 0x1.b143a4p-119f, 0x1.f09ep-78f,
     0x1.09b19p-13f, 0x1.7bebfap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44f25ap-7f, 0.0f,
     0x1.169e3ep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87ae74p-91f,
     0x1.9f8a1p-72f, 0.0f, 0.0f, 0x1.d363a4p-91f, 0.0f, 0.0f, 0.0f, 0x1.a3948ap-28f,
     0.0f, 0.0f, 0.0f, 0x1.0fdf3ap-97f, 0x1.b64278p-57f, 0.0f, 0x1.92e3ecp-107f, 0.0f,
     0.0f, 0x1.c3abeep-120f, 0x1.aac8f4p-117f, 0x1.3eba4ap-54f, 0.0f, 0x1.c2f72p-84f,
     0.0f, 0x1.1f68bap-34f, 0x1.94239ap-18f, 0x1.a4ca96p-4f, 0x1.472ebap-64f,
     0x1.de4ac2p-15f, 0x1.eee834p-119f, 0.0f, 0.0f, 0x1.a64b4cp-16f, 0x1.d038a8p-14f,
     0.0f, 0x1.15869ep-51f, 0.0f, 0x1.72a12ep-111f, 0x1.36d74cp-1f, 0x1.67429p-49f,
     0x1.fc0afap-4f, 0.0f, 0x1.959a7ep-125f, 0x1.15562ap-87f, 0x1.049dfap-32f, 0.0f,
     0x1.d97ee8p-49f, 0.0f, 0x1.2762e2p-98f, 0.0f, 0.0f, 0x1.62c99ep-6f, 0.0f,
     0x1.9ca9e8p-121f, 0x1.c2adbep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6654e8p-106f, 0x1.27c55cp-101f, 0.0f, 0.0f, 0x1.645a28p-30f, 0.0f, 0.0f,
     0.0f, 0x1.588114p-13f, 0x1.da3caap-38f, 0.0f, 0.0f, 0x1.20d2f8p-52f,
     0x1.adfad2p-27f, 0.0f, 0x1.8793b2p-40f, 0x1.944a5cp-71f, 0x1.bd8accp-68f, 0.0f,
     0.0f, 0.0f, 0x1.3b9a9ep-99f, 0x1.c6b1e4p-3f, 0x1.728fb4p-89f, 0.0f,
     0x1.077c92p-104f, 0x1.04c39ep-86f, 0.0f, 0.0f, 0x1.bc7b36p-37f, 0x1.8c6de4p-65f,
     0x1.0984b6p-14f, 0.0f, 0.0f, 0x1.d06e92p-64f, 0.0f, 0x1.fbc578p-121f,
     0x1.baf82p-73f, 0.0f, 0x1.f72bb8p-83f, 0x1.deca2ap-47f, 0x1.40d0bcp-106f,
     0x1.1d55c4p-86f, 0x1.8af878p-18f, 0.0f, 0x1.b2818ap-7f, 0x1.c21476p-47f,
     0x1.83071ep-94f, 0.0f, 0x1.dd788cp-84f, 0.0f, 0x1.355754p-48f, 0x1.463b3ep-39f,
     0x1.ae09fcp-10f, 0x1.3c4ff8p-105f, 0.0f, 0.0f, 0x1.891ca6p-7f, 0.0f,
     0x1.dda53cp-118f, 0.0f, 0x1.105ee6p-47f, 0.0f, 0x1.9635d6p-52f, 0x1.b1886ap-17f,
     0.0f, 0.0f, 0x1.187642p-102f, 0x1.9c1bfp-122f, 0x1.505bbcp-41f, 0.0f, 0x1p0f,
     0x1.b2f2dep-106f, 0x1.031efep-24f, 0.0f, 0.0f, 0x1.4fd7bp-67f, 0x1.89e85p-88f,
     0x1.ea1f7cp-69f, 0x1.c9886ep-74f, 0x1.d33226p-51f, 0x1.bc4c0ep-82f,
     0x1.acb41cp-26f, 0.0f, 0x1.eb367cp-51f, 0x1.8be068p-26f, 0x1.5191ccp-86f, 0.0f,
     0.0f, 0x1.260056p-76f, 0x1.a7a662p-25f, 0x1.76765p-36f, 0x1.9ea54ep-105f,
     0x1.18aefp-100f, 0x1.563072p-5f, 0x1.4f9fa6p-3f, 0x1.64ae88p-53f,
     0x1.b0288cp-35f, 0x1.c1bc6ep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.879416p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0294cp-123f, 0x1.85f246p-98f, 0.0f,
     0x1.e77e4ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee8434p-33f, 0.0f, 0x1.7014aep-34f,
     0.0f, 0x1.05b438p-59f, 0x1.efb7dep-1f, 0x1.05a566p-80f, 0x1.5754cap-45f, 0.0f,
     0.0f, 0x1.c1824ap-55f, 0x1.073472p-49f, 0x1.44a6fcp-55f, 0.0f, 0x1.8f7a44p-37f,
     0.0f, 0x1.c90d9ep-55f, 0.0f, 0x1.79b7c6p-63f, 0x1.297152p-106f, 0x1.676b0cp-101f,
     0x1.e797a6p-32f, 0x1.8c2cf8p-46f, 0.0f, 0x1.d3f6b4p-5f, 0x1.4c6cf8p-41f, 0.0f,
     0.0f, 0.0f, 0x1.9b39e6p-70f, 0.0f, 0x1.8cafbp-10f, 0x1.b2d148p-48f, 0.0f,
     0x1.7e59a2p-14f, 0.0f, 0.0f, 0x1.22debap-21f, 0x1.b00a28p-123f, 0x1.81d914p-105f,
     0x1.319be8p-40f, 0.0f, 0.0f, 0x1.19f262p-55f, 0.0f, 0.0f, 0x1.c42b26p-58f, 0.0f,
     0.0f, 0x1.156e9ap-60f, 0.0f, 0.0f, 0.0f, 0x1.d84102p-60f, 0.0f, 0.0f,
     0x1.8be638p-25f, 0x1.143bb2p-58f, 0x1.eac064p-73f, 0.0f, 0x1.531a0ep-97f,
     0x1.1724a4p-103f, 0.0f, 0x1.0a5088p-30f, 0.0f, 0x1.159188p-126f
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
            tmp1 = Sleef_finz_cosf4_u35kvx(tmp0);
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
    printf("Sleef_finz_cosf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cosf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
