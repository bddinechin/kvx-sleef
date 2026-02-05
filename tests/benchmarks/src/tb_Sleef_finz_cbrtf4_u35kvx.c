/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf4_u35kvx.c --function \
 *     Sleef_finz_cbrtf4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.1cf714p-103f, 0x1.8a71e6p-107f, 0.0f, 0x1.cb325ap-30f,
     0x1.ffb876p-21f, 0.0f, 0x1.f29a22p-7f, 0.0f, 0.0f, 0x1.fcad32p-106f, 0.0f, 0.0f,
     0x1.bbd466p-43f, 0x1.ebeb08p-35f, 0x1.a754aap-71f, 0x1.f8fbeap-15f, 0.0f,
     0x1.a877fap-46f, 0x1.4a729p-61f, 0x1.15078p-73f, 0x1.742c9ap-102f,
     0x1.5135aep-109f, 0.0f, 0x1.07f31ap-61f, 0.0f, 0x1.b5294ap-48f, 0.0f,
     0x1.ff3806p-74f, 0x1.428618p-98f, 0x1.467bfcp-37f, 0x1.3285e2p-7f, 0.0f, 0.0f,
     0x1.f65d6ep-92f, 0x1.4fc998p-112f, 0x1.4eca78p-54f, 0.0f, 0.0f, 0.0f,
     0x1.efb6a6p-2f, 0.0f, 0x1.598da4p-109f, 0x1.93461p-126f, 0.0f, 0.0f,
     0x1.9b2422p-81f, 0x1.dc9672p-82f, 0.0f, 0x1.936f74p-69f, 0.0f, 0x1.48c12cp-85f,
     0.0f, 0.0f, 0x1.d73048p-95f, 0x1.369cc4p-55f, 0x1.87baacp-18f, 0x1.d14cc2p-111f,
     0.0f, 0.0f, 0x1.9fa3cp-28f, 0.0f, 0x1.659216p-121f, 0.0f, 0x1.28a85ep-70f, 0.0f,
     0x1.3cc51cp-24f, 0.0f, 0x1.cab41ap-92f, 0x1.16c66cp-110f, 0x1.fc54b6p-24f, 0.0f,
     0x1.8d01ap-56f, 0x1.fa3b4ep-76f, 0.0f, 0x1.525f84p-35f, 0x1.28cad4p-77f, 0.0f,
     0.0f, 0.0f, 0x1.0b5e7cp-3f, 0.0f, 0x1.a7a554p-16f, 0.0f, 0x1.84e3d4p-123f, 0.0f,
     0.0f, 0x1.118eaep-67f, 0x1.320962p-17f, 0x1.decbfcp-105f, 0x1.44fec2p-35f, 0.0f,
     0.0f, 0x1.19352ep-43f, 0.0f, 0x1.197adcp-50f, 0x1.ec1b86p-60f, 0x1.e05c9p-78f,
     0.0f, 0x1.6d75a8p-50f, 0.0f, 0.0f, 0x1.747aecp-38f, 0x1.96bd8p-76f,
     0x1.b960bep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a743a2p-112f, 0x1.85382ep-105f, 0x1.3e623ep-35f, 0x1.b3f6a4p-17f,
     0x1.70e4c6p-24f, 0.0f, 0x1.d92bbap-114f, 0.0f, 0x1.56e6c2p-108f,
     0x1.5292f8p-103f, 0.0f, 0x1.4000aap-64f, 0x1.b4b182p-10f, 0x1.dfbf06p-124f,
     0x1.85312cp-21f, 0.0f, 0x1.e42876p-47f, 0.0f, 0x1.d0c9c6p-18f, 0x1.75ab16p-60f,
     0.0f, 0.0f, 0x1.a78f52p-114f, 0x1.1f616ep-38f, 0.0f, 0.0f, 0.0f,
     0x1.cb56aep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a66b2ep-64f, 0.0f, 0x1.b8382ep-52f,
     0.0f, 0.0f, 0x1.837234p-113f, 0.0f, 0.0f, 0x1.e3efap-114f, 0x1.596a8ep-52f, 0.0f,
     0x1.937a96p-104f, 0.0f, 0.0f, 0x1.d90fa6p-114f, 0.0f, 0.0f, 0x1.847554p-126f,
     0.0f, 0x1.c7e56cp-70f, 0x1.c1d668p-72f, 0.0f, 0.0f, 0.0f, 0x1.e8ae74p-90f, 0.0f,
     0.0f, 0x1.89782ep-61f, 0x1.9906e2p-110f, 0.0f, 0.0f, 0.0f, 0x1.4434fap-122f,
     0x1.9746b4p-39f, 0x1.ba5ddep-115f, 0x1.0e643p-2f, 0.0f, 0.0f, 0.0f,
     0x1.605672p-122f, 0.0f, 0x1.fcfc04p-55f, 0x1.c6f0bcp-49f, 0.0f, 0.0f,
     0x1.c9bc82p-63f, 0.0f, 0x1.f238c6p-100f, 0x1.b3463p-124f, 0.0f, 0x1.5bfc5ap-126f,
     0.0f, 0.0f, 0x1.eb88b4p-46f, 0.0f, 0.0f, 0.0f, 0x1.b57dfp-49f, 0x1.6db0e4p-65f,
     0x1.71b56ap-21f, 0.0f, 0x1.22252ap-49f, 0x1.e0fa78p-82f, 0x1.ad3112p-27f,
     0x1.e82744p-77f, 0x1.1212e4p-113f, 0x1.c5cdfep-41f, 0x1.fdf8b2p-70f,
     0x1.077234p-20f, 0.0f, 0.0f, 0x1.729b92p-72f, 0x1.075186p-39f, 0x1.26baa2p-120f,
     0x1.1860a2p-86f, 0x1.50a48ap-19f, 0x1.7251d8p-39f, 0.0f, 0x1.9afcp-7f,
     0x1.9e8618p-2f, 0x1.cb57f4p-98f, 0x1.40f0eep-114f, 0.0f, 0.0f, 0x1.f699cap-115f,
     0x1.1d1cbap-10f, 0x1.6fe764p-35f, 0x1.3ba9a6p-79f, 0x1.11755p-14f, 0.0f,
     0x1.58c646p-119f, 0.0f, 0.0f, 0x1.d6ed66p-39f, 0x1.bfb6bp-34f, 0x1.49aecep-108f,
     0x1.217264p-32f, 0.0f, 0x1.1d1f04p-83f, 0x1.3478p-107f, 0.0f, 0.0f,
     0x1.e7fa38p-40f, 0.0f, 0x1.597f58p-73f, 0x1.1e04d4p-34f, 0x1.6bd65cp-38f,
     0x1.5eb444p-123f, 0.0f, 0.0f, 0.0f, 0x1.8bb70cp-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de36fep-94f, 0.0f, 0.0f, 0x1.52c3a8p-59f, 0.0f, 0.0f, 0x1.0c216ap-101f, 0.0f,
     0x1.dced66p-57f, 0.0f, 0x1.e6923p-101f, 0x1.f3e862p-7f, 0x1.70e7a4p-113f,
     0x1.3d8556p-14f, 0x1.0e94a8p-115f, 0x1.a6073cp-61f, 0.0f, 0.0f, 0x1.8eaecap-15f,
     0x1.d9aed6p-126f, 0x1.fc88b2p-61f, 0.0f, 0x1.321c68p-66f, 0x1.bfb5e8p-109f, 0.0f,
     0x1.d31024p-83f, 0.0f, 0.0f, 0x1.df9aaep-15f, 0x1.2bf4a4p-63f, 0x1.3a7c1p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38bb9ep-11f, 0x1.caff28p-80f, 0x1.d34228p-95f,
     0x1.f54ba4p-1f, 0x1.ab35bap-82f, 0x1.17b038p-51f, 0x1.e512dep-3f, 0x1.6b5d2p-37f,
     0x1.c24db6p-72f, 0x1.f4df2ap-18f, 0.0f, 0x1.04330ep-63f, 0.0f, 0.0f, 0.0f,
     0x1.93dd08p-33f, 0x1.ecf39p-6f, 0x1.4b674cp-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e650bcp-78f, 0x1.489d48p-54f, 0.0f, 0x1.7f06ep-18f, 0x1.8aec5p-9f, 0.0f,
     0x1.4de3ecp-114f, 0x1.f1f1ccp-77f, 0x1.5998b2p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3536ap-105f, 0x1.6bd0fap-22f, 0x1.6236cp-126f, 0x1p0f, 0.0f, 0x1.6a005p-17f,
     0x1.adbe62p-111f, 0.0f, 0x1.f7ab2ep-107f, 0.0f, 0x1.8130fap-87f, 0x1.277152p-76f,
     0x1.77cafcp-2f, 0.0f, 0x1.a5e0bcp-71f, 0x1.0dc864p-44f, 0.0f, 0x1.1452ep-72f,
     0x1.be5c5ap-108f, 0.0f, 0.0f, 0x1.32ead2p-100f, 0.0f, 0x1.0cd816p-93f,
     0x1.9ba0ap-65f, 0x1.43210cp-92f, 0x1.61cf32p-48f, 0.0f, 0.0f, 0x1.d29b64p-86f,
     0x1.12828ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.430884p-97f, 0x1.dc5f96p-4f, 0.0f,
     0x1.bce0ep-70f, 0x1.d52cf4p-46f, 0x1.b80eacp-36f, 0.0f, 0.0f, 0.0f,
     0x1.dc791cp-20f, 0.0f, 0x1.d03056p-118f, 0x1.0ad322p-103f, 0x1.0dc77cp-12f, 0.0f,
     0x1.f5213cp-26f, 0x1.f34eacp-34f, 0.0f, 0x1.c70e6cp-96f, 0x1.49db74p-102f,
     0x1.92c36cp-89f, 0.0f, 0x1.c67db8p-94f, 0x1.e0240ap-64f, 0x1.a31224p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e878ep-5f, 0x1.629dp-25f,
     0x1.0a7a76p-76f, 0.0f, 0x1.03d19ep-67f, 0.0f, 0x1.7d351cp-43f, 0x1.e6efcep-100f,
     0.0f, 0.0f, 0x1.e0007cp-26f, 0x1.a519cep-41f, 0.0f, 0x1.ea473ep-97f,
     0x1.a411b4p-101f, 0x1.260782p-118f, 0.0f, 0x1.0cc544p-56f, 0x1.81a5acp-69f, 0.0f,
     0x1.3b488ap-89f, 0.0f, 0.0f, 0.0f, 0x1.3012b4p-109f, 0x1.a50366p-62f,
     0x1.4e8d38p-46f, 0x1.9ba5aep-101f, 0.0f, 0.0f, 0.0f, 0x1.2fc8dcp-55f, 0.0f, 0.0f,
     0x1.215e8cp-54f, 0.0f, 0x1.b97bdp-94f, 0x1.7572c6p-99f, 0.0f, 0x1.3b5564p-87f,
     0x1.e103bcp-81f, 0.0f, 0x1.8f4d4ap-89f, 0x1.c41b08p-85f, 0x1.b2c982p-106f, 0.0f,
     0.0f, 0x1.e9749cp-3f, 0x1.252f64p-86f, 0.0f, 0.0f, 0x1p0f, 0x1.203128p-106f,
     0.0f, 0x1.b9cf7cp-39f, 0x1.8eaf42p-22f, 0.0f, 0.0f, 0x1.7b01bap-49f, 0.0f, 0.0f,
     0.0f, 0x1.9893d2p-118f, 0.0f, 0.0f, 0x1.a89c02p-124f, 0.0f, 0.0f,
     0x1.4ed3f2p-105f, 0x1.9ccc08p-121f, 0.0f, 0.0f, 0x1.d3faa4p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6953cp-77f, 0x1.b38462p-101f, 0x1.b7afecp-58f, 0.0f, 0.0f, 0.0f,
     0x1.2dfb08p-1f, 0x1.6c02fep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f0442p-23f,
     0x1.8b9eacp-47f, 0.0f, 0x1.b321dap-5f, 0x1.8adce4p-55f, 0x1.9df636p-108f, 0.0f,
     0x1.ac5532p-123f, 0.0f, 0x1.d0e726p-7f, 0.0f, 0x1.7cb6fep-99f, 0.0f, 0.0f,
     0x1.7cfc02p-64f, 0.0f, 0x1.56e794p-52f, 0x1.759612p-70f, 0x1.c15ff6p-41f, 0.0f,
     0x1.ad671ep-60f, 0.0f, 0x1.58aaa6p-117f, 0.0f, 0x1.b1e678p-17f, 0x1.6d64e2p-100f,
     0x1.92702p-35f, 0x1.cec706p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68e062p-75f, 0x1.a0e2e4p-101f, 0x1.dde3bp-30f, 0x1.6e7b9cp-36f,
     0x1.1a01fep-34f, 0.0f, 0.0f, 0x1.f337fap-53f, 0.0f, 0.0f, 0x1.0e2906p-3f,
     0x1.ecd09p-34f, 0x1.5382d8p-41f, 0.0f, 0x1.83e2f6p-57f, 0x1.88b29ep-42f, 0.0f,
     0.0f, 0x1.1d57b8p-119f, 0x1.ca846ap-71f, 0x1.22e4dp-102f, 0.0f, 0.0f,
     0x1.638996p-79f, 0.0f, 0x1.7370b6p-87f, 0.0f, 0x1.7b67ep-68f, 0x1.01cfe4p-89f,
     0x1.a9988ep-76f, 0.0f, 0x1.27b8ecp-26f, 0.0f, 0x1.b1d13cp-92f, 0x1.519c38p-64f,
     0x1.aaf56ep-67f, 0x1.ddcc1ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfe5a4p-9f,
     0x1.63dbdp-29f, 0.0f, 0x1.e5d3a4p-68f, 0.0f, 0.0f, 0x1.8e7d88p-32f, 0.0f, 0.0f,
     0.0f, 0x1.f4a56ap-126f, 0x1.8a061p-89f, 0x1.df0758p-17f, 0x1.cfb74cp-106f,
     0x1.25e928p-111f, 0.0f, 0.0f, 0x1.61926p-9f, 0.0f, 0x1.36a186p-71f,
     0x1.07cd6ep-6f, 0x1.31d1b6p-77f, 0.0f, 0x1.3ba11ep-87f, 0x1.adf478p-76f,
     0x1.9c7e4p-74f, 0x1.b4a798p-54f, 0.0f, 0x1.eaa4fep-41f, 0.0f, 0x1.b4ded8p-87f,
     0.0f, 0x1.e1377p-97f, 0x1.f07654p-115f, 0.0f, 0.0f, 0x1.49356ap-89f, 0.0f,
     0x1.a2ada2p-17f, 0.0f, 0x1.fc476ap-60f, 0x1.fc707ap-104f, 0x1.d4e5a4p-126f,
     0x1.3346bep-48f, 0.0f, 0x1.bfc01p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.182286p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7c35p-55f, 0x1.50a376p-79f, 0x1.9aa9a8p-118f,
     0x1.2ae3d2p-40f, 0x1.9a15bap-12f, 0x1.8c1f9ap-84f, 0x1.67a4cep-34f, 0.0f, 0.0f,
     0.0f, 0x1.c1fb4cp-109f, 0.0f, 0.0f, 0x1.5f32b6p-36f, 0.0f, 0.0f, 0.0f,
     0x1.619158p-78f, 0x1.d6ec9ep-57f, 0x1.80083ap-87f, 0x1.25e8fp-54f,
     0x1.6a51ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ea716p-45f, 0x1.03e23cp-113f,
     0x1.b55bap-26f, 0.0f, 0x1.fef56ap-5f, 0x1.ce4dccp-82f, 0x1.f6f22ep-48f, 0.0f,
     0.0f, 0x1.c332p-21f, 0x1.601394p-107f, 0.0f, 0x1.da3d3ep-82f, 0x1.c2bd08p-58f,
     0.0f, 0x1.0ed048p-35f, 0.0f, 0.0f, 0.0f, 0x1.5ba696p-47f, 0x1p0f,
     0x1.9587a6p-27f, 0x1.ba4726p-46f, 0.0f, 0x1.6dc6dp-99f, 0x1.3a4b32p-44f, 0.0f,
     0x1.4a87a6p-19f, 0.0f, 0x1.b40f72p-52f, 0x1.92034cp-122f, 0x1.55d9ccp-65f, 0.0f,
     0.0f, 0.0f, 0x1.16401ap-121f, 0x1.884a56p-97f, 0x1.16faecp-2f, 0.0f, 0.0f,
     0x1.a8ab96p-74f, 0x1.336892p-22f, 0x1.fa0bd2p-11f, 0x1.9bfb08p-32f,
     0x1.00f79ep-53f, 0x1.f6d0cp-16f, 0.0f, 0.0f, 0.0f, 0x1.f1e844p-100f, 0.0f,
     0x1.adbd3ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fc9a4p-26f, 0x1.a3865cp-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.568bc4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff02a6p-62f, 0.0f, 0x1.ab42b8p-67f, 0x1.d26938p-114f,
     0x1.ea0e52p-120f, 0.0f, 0.0f, 0.0f, 0x1.1f1e5p-109f, 0.0f, 0x1.fc85a6p-117f,
     0.0f, 0.0f, 0x1.01cff8p-48f, 0x1.ed772ap-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ebd76p-46f, 0x1.b422a4p-121f, 0.0f, 0.0f, 0x1.0eb7fap-90f, 0.0f,
     0x1.9049a4p-90f, 0x1.9d3bb4p-78f, 0x1p0f, 0x1.e30d8cp-115f, 0.0f, 0.0f, 0.0f,
     0x1.d82f6cp-14f, 0.0f, 0.0f, 0x1.c32f2ap-49f, 0x1.e6edb6p-72f, 0x1.6b934p-37f,
     0.0f, 0x1.c0b978p-107f, 0.0f, 0.0f, 0x1.1d80bep-26f, 0x1.8531ecp-19f, 0.0f,
     0x1.db476ap-32f, 0x1.b60beap-34f, 0x1.25ebccp-30f, 0.0f, 0x1.60f07cp-11f, 0.0f,
     0.0f, 0x1.295322p-59f, 0.0f, 0x1.f83b92p-85f, 0.0f, 0x1.a3f49p-32f,
     0x1.0a10b2p-76f, 0x1.d0a478p-74f, 0.0f, 0.0f, 0x1.0848fcp-120f, 0x1.60fcb8p-92f,
     0x1.3247cap-74f, 0x1.941c72p-126f, 0.0f, 0x1.dc2354p-57f, 0x1.726688p-50f, 0.0f,
     0.0f, 0.0f, 0x1.06b722p-22f, 0x1.17843cp-30f, 0x1.a59052p-121f, 0x1.9819fp-13f,
     0.0f, 0.0f, 0x1.d7ada4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9877p-57f, 0.0f,
     0x1.bef688p-117f, 0.0f, 0x1.2501b4p-91f, 0x1.90b842p-60f, 0.0f, 0x1.f98fe4p-125f,
     0x1.1d4fc2p-76f, 0.0f, 0x1.120e06p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd5df4p-46f,
     0.0f, 0x1.099cdep-104f, 0x1.cd77a4p-109f, 0.0f, 0.0f, 0.0f, 0x1.a413dep-16f,
     0x1.ee468ep-27f, 0.0f, 0x1.6d4e9ap-74f, 0x1.4d0e1p-1f, 0x1.1096c8p-88f, 0.0f,
     0x1.27d104p-27f, 0.0f, 0.0f, 0x1.04f97cp-81f, 0.0f, 0.0f, 0x1.2df6dap-81f, 0.0f,
     0.0f, 0x1.db1788p-81f, 0x1.633704p-83f, 0x1.88d088p-12f, 0x1.6ffb48p-2f, 0.0f,
     0x1.f72a3p-51f, 0.0f, 0x1.fbfa2cp-111f, 0.0f, 0x1.fa9b9ap-65f, 0x1.8ce36ap-94f,
     0.0f, 0.0f, 0x1.4ecc1cp-120f, 0x1.d10552p-45f, 0.0f, 0x1.722dc6p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e34e6p-2f, 0x1.134b74p-14f, 0x1.af2884p-89f, 0.0f,
     0x1.c635dap-16f, 0.0f, 0.0f, 0x1.0a2e5cp-68f, 0x1.abeed6p-20f, 0x1.223b0ep-71f,
     0x1.b23468p-93f, 0.0f, 0x1.f6a5dp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65b87ep-101f,
     0.0f, 0.0f, 0x1.0c841p-65f, 0.0f, 0.0f, 0x1.febbc4p-115f, 0x1.18def4p-18f, 0.0f,
     0.0f, 0.0f, 0x1.2e9874p-42f, 0.0f, 0x1.87e732p-94f, 0.0f, 0x1.c8e19ep-11f,
     0x1.7b8696p-101f, 0.0f, 0x1.1788f4p-84f, 0.0f, 0x1.ee7276p-1f, 0.0f, 0.0f,
     0x1.571448p-56f, 0x1.8b08a6p-72f, 0.0f, 0x1.4b18f4p-2f, 0x1.4aa746p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f89fcep-51f, 0x1.4f36eep-88f, 0.0f, 0.0f, 0x1.dc31bcp-83f,
     0x1.d9b508p-108f, 0x1.522c4ap-8f, 0x1.1364fcp-63f, 0.0f, 0.0f, 0x1.e3c86cp-70f,
     0x1.6f48cp-102f, 0.0f, 0x1.31115cp-71f, 0x1.b368acp-117f, 0.0f, 0x1.0618b6p-126f,
     0.0f, 0.0f, 0x1.91f9aep-46f, 0.0f, 0.0f, 0.0f, 0x1.72f886p-17f, 0.0f,
     0x1.3354d6p-105f, 0.0f, 0x1.096fdap-53f, 0.0f, 0x1.d6b728p-28f, 0x1.8eae98p-97f,
     0x1.68c0fp-39f, 0x1.114fa4p-27f, 0.0f, 0.0f, 0x1.582eb2p-11f, 0x1.d35084p-85f,
     0.0f, 0.0f, 0x1.246304p-105f, 0x1.55ef68p-59f, 0.0f, 0x1.5caba8p-56f, 0.0f, 0.0f,
     0x1.54ef94p-48f, 0.0f, 0x1.89b2cp-42f, 0x1.d2de78p-106f, 0.0f, 0.0f,
     0x1.b3637p-59f, 0.0f, 0.0f, 0x1.5eea56p-3f, 0x1.3e388ap-87f, 0x1.320698p-123f,
     0.0f, 0x1.8a4138p-38f, 0x1.a5072p-119f, 0.0f, 0.0f, 0.0f, 0x1.6cf046p-117f, 0.0f,
     0x1.fcd3b6p-13f, 0x1.cb095ap-70f, 0x1.13b26cp-46f, 0.0f, 0x1.0bcf1cp-88f,
     0x1.d2ec6p-75f, 0.0f, 0x1.d7390ap-106f, 0.0f, 0x1.65f9d4p-14f, 0x1.6a142cp-22f,
     0x1.e84e46p-97f, 0.0f, 0x1.a8e1dcp-41f, 0x1.95482cp-9f, 0.0f, 0x1.27adeep-29f,
     0x1.cee4d2p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_cbrtf4_u35kvx(tmp0);
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
    printf("Sleef_finz_cbrtf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
