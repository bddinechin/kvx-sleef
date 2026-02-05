/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhf4_u10kvx.c --function Sleef_atanhf4_u10kvx \
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
     0x1.3cad66p-70f, 0.0f, 0.0f, 0.0f, 0x1.5102cap-21f, 0.0f, 0x1.7d752ap-23f,
     0x1.28762ep-10f, 0x1.86d912p-70f, 0x1.5eec0ep-56f, 0.0f, 0x1.1a918ep-33f,
     0x1.0244dp-26f, 0x1.9c536ap-18f, 0x1.df92fcp-86f, 0x1.d363cp-25f,
     0x1.b9d09ep-62f, 0x1.eafp-45f, 0.0f, 0.0f, 0.0f, 0x1.3ca328p-4f, 0x1.b5864cp-62f,
     0x1.799702p-108f, 0.0f, 0.0f, 0.0f, 0x1.95720cp-87f, 0.0f, 0x1.7b27dap-70f, 0.0f,
     0x1.1f88f2p-68f, 0.0f, 0.0f, 0.0f, 0x1.120234p-39f, 0x1.0c73p-108f,
     0x1.1bdaa2p-23f, 0.0f, 0x1.76eebp-36f, 0x1.e51944p-8f, 0x1.a06b8cp-41f, 0.0f,
     0x1.d1cb5ep-70f, 0x1.7d8b4cp-109f, 0x1.1390d2p-38f, 0x1.d6a6c4p-31f,
     0x1.e02092p-50f, 0x1.943d24p-115f, 0.0f, 0x1.08979cp-57f, 0x1.daa43ap-82f,
     0x1.65ddf6p-124f, 0.0f, 0x1.178936p-10f, 0.0f, 0x1.87c648p-103f, 0.0f,
     0x1.bd4672p-86f, 0.0f, 0x1.7ae68ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d15b2p-109f, 0.0f, 0x1.0d54d4p-23f, 0x1.858bcep-38f, 0x1.2443bep-44f, 0.0f,
     0.0f, 0x1.d1f5cap-66f, 0x1.945c3ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d5682p-86f,
     0.0f, 0x1.218c52p-53f, 0x1.84936ap-17f, 0.0f, 0x1.277becp-56f, 0.0f,
     0x1.84b482p-117f, 0x1.e44ec4p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0eec4p-16f,
     0.0f, 0x1.8c3efp-50f, 0.0f, 0.0f, 0.0f, 0x1.b9b6e8p-20f, 0.0f, 0x1.93918ep-120f,
     0.0f, 0.0f, 0x1.b4bed4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e965c4p-90f,
     0x1.3a666ap-20f, 0x1.c33422p-22f, 0.0f, 0.0f, 0.0f, 0x1.f8adbep-84f, 0.0f,
     0x1.dc9354p-3f, 0.0f, 0.0f, 0x1.005c8p-119f, 0x1.7575fp-95f, 0.0f,
     0x1.84039ep-111f, 0.0f, 0x1.d49034p-2f, 0.0f, 0.0f, 0.0f, 0x1.59615ap-32f, 0.0f,
     0.0f, 0.0f, 0x1.d7c352p-105f, 0x1.1cc386p-30f, 0.0f, 0.0f, 0x1.b8821ap-36f,
     0x1.54011cp-6f, 0.0f, 0x1.0fc6fep-25f, 0.0f, 0x1.e6aee6p-37f, 0x1.ca6e92p-33f,
     0x1.7c4716p-105f, 0x1.106548p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.875f5cp-111f, 0x1.132cd2p-114f, 0x1.b512acp-8f,
     0x1.64d2d6p-98f, 0x1.64548cp-3f, 0x1.f1146ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.489d5ap-123f, 0x1.ddee34p-48f, 0x1.00c16ep-122f, 0x1.8d36a2p-50f, 0.0f,
     0x1.9da35ap-44f, 0.0f, 0x1.0ce974p-95f, 0x1.0819b2p-83f, 0.0f, 0.0f,
     0x1.f6da7ep-121f, 0.0f, 0.0f, 0x1.a54a42p-34f, 0.0f, 0.0f, 0x1.314012p-76f, 0.0f,
     0.0f, 0x1.9e8612p-113f, 0x1.a1f382p-69f, 0x1.a301aep-37f, 0.0f, 0.0f, 0.0f,
     0x1.f6633cp-93f, 0x1.2afa3ap-2f, 0.0f, 0x1.da062ep-33f, 0.0f, 0x1.e0f4dap-90f,
     0x1.cc7ecep-66f, 0.0f, 0.0f, 0x1.14276p-71f, 0x1.4ae28cp-44f, 0.0f, 0.0f, 0.0f,
     0x1.bdfb32p-35f, 0.0f, 0x1.51f498p-35f, 0.0f, 0x1.64b768p-125f, 0x1.59879p-126f,
     0.0f, 0x1.a06ef2p-33f, 0.0f, 0.0f, 0x1.e48376p-73f, 0.0f, 0x1.236884p-91f, 0.0f,
     0.0f, 0x1.228416p-70f, 0x1.7f9edep-79f, 0x1.74163ep-55f, 0x1.fb96dp-111f,
     0x1.c2fd6ep-23f, 0x1.7f15c2p-91f, 0x1.213a5p-29f, 0x1.cabb1ep-8f,
     0x1.e707dap-123f, 0x1.9f070ap-33f, 0.0f, 0x1.8e0264p-91f, 0.0f, 0x1.4f4606p-58f,
     0x1.730c34p-52f, 0.0f, 0x1.67ba0cp-109f, 0x1.83e962p-20f, 0.0f, 0.0f,
     0x1.01cacap-25f, 0.0f, 0x1.b01ff4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d04e84p-105f,
     0x1.05b836p-111f, 0.0f, 0x1.4caea4p-1f, 0.0f, 0x1.19a3fap-95f, 0.0f, 0.0f,
     0x1.e591cap-72f, 0.0f, 0x1.e99166p-13f, 0x1.91fcb8p-105f, 0x1.9fb09ep-48f, 0.0f,
     0x1.f17406p-16f, 0.0f, 0.0f, 0x1.0686dep-111f, 0x1.f3d892p-60f, 0x1.ba64cap-87f,
     0x1.8fb29ap-9f, 0x1.64f2f2p-26f, 0.0f, 0x1.aea534p-117f, 0x1.a3970ep-14f, 0.0f,
     0.0f, 0.0f, 0x1.41ddbcp-113f, 0x1.cbe802p-65f, 0.0f, 0.0f, 0x1.180268p-103f,
     0.0f, 0.0f, 0.0f, 0x1.a1e262p-107f, 0x1.02b492p-1f, 0.0f, 0.0f, 0x1.2c4e02p-39f,
     0x1.f3e256p-60f, 0x1.3d7e9ap-61f, 0.0f, 0x1.753664p-96f, 0x1.47bd1cp-29f,
     0x1.47135ep-55f, 0.0f, 0.0f, 0x1.48f4c2p-76f, 0x1.94d4b6p-100f, 0.0f,
     0x1.54b392p-83f, 0x1.73049p-96f, 0.0f, 0x1.3f883p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b89b84p-94f, 0x1.9ce196p-64f, 0.0f, 0x1.55fcbp-123f,
     0x1.498376p-38f, 0x1.0c7ef8p-99f, 0.0f, 0.0f, 0.0f, 0x1.87239cp-11f,
     0x1.1861aap-47f, 0x1.8cdee6p-105f, 0x1.95efdp-66f, 0x1.e23298p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b087cp-87f, 0x1.121a24p-104f, 0.0f, 0x1.b79072p-123f,
     0x1.c8332p-70f, 0x1.2bcd7p-44f, 0.0f, 0x1.69ca0ep-65f, 0x1.a8883ep-69f,
     0x1.4c8002p-42f, 0.0f, 0.0f, 0.0f, 0x1.6c6838p-56f, 0.0f, 0.0f, 0x1.d938ecp-18f,
     0.0f, 0.0f, 0x1.9c2f76p-24f, 0x1.4948d2p-79f, 0.0f, 0x1.21253cp-54f, 0.0f, 0.0f,
     0x1.02442cp-60f, 0x1.4c346ep-10f, 0x1.972f62p-53f, 0x1.6da534p-107f, 0.0f,
     0x1.c5e7d8p-27f, 0x1.66a62ap-126f, 0x1.4da6a8p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.710576p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b521p-7f,
     0x1.e05488p-31f, 0.0f, 0x1.94a7bep-85f, 0.0f, 0x1.e53f9ap-20f, 0.0f, 0.0f, 0.0f,
     0x1.38c026p-113f, 0x1.9decfep-88f, 0.0f, 0.0f, 0x1.52374ap-16f, 0.0f, 0.0f,
     0x1.9e2126p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4f622p-28f, 0x1.8ca8d6p-100f,
     0.0f, 0x1.313204p-126f, 0x1.3056eep-66f, 0.0f, 0.0f, 0.0f, 0x1.3d4d9cp-94f,
     0x1p0f, 0.0f, 0x1.9aa306p-124f, 0x1.0f4aa4p-63f, 0x1.c6259p-121f, 0.0f, 0.0f,
     0.0f, 0x1.66105cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79c922p-60f, 0x1.958c7cp-112f,
     0.0f, 0x1.d53044p-118f, 0x1.c23b6cp-88f, 0x1.733a54p-97f, 0.0f, 0.0f,
     0x1.09a80ep-25f, 0x1.873c1p-102f, 0.0f, 0.0f, 0x1.953c08p-98f, 0.0f,
     0x1.230f94p-108f, 0.0f, 0.0f, 0x1.c5cf6ap-7f, 0.0f, 0x1.16358ap-6f, 0.0f,
     0x1.3ea312p-92f, 0x1.775b5ep-117f, 0x1.b5e08ep-26f, 0x1.5ff8b8p-60f, 0.0f,
     0x1.9487b4p-64f, 0x1.e35934p-6f, 0.0f, 0x1.0783b8p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.62dfdap-73f, 0.0f, 0.0f, 0x1.a50744p-101f, 0x1.227bf4p-5f,
     0.0f, 0x1.7eb654p-34f, 0x1.6ef15ep-93f, 0.0f, 0x1.feeb6p-121f, 0x1.34905p-25f,
     0x1.c31d4ep-22f, 0.0f, 0.0f, 0.0f, 0x1.add4fp-123f, 0x1.61418ap-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2b071ap-117f, 0.0f, 0x1.162f0ep-38f, 0x1.be0862p-92f,
     0x1.dfd6d6p-48f, 0.0f, 0.0f, 0x1.bc588cp-105f, 0.0f, 0.0f, 0x1.2ee22cp-16f,
     0x1.19fffp-87f, 0.0f, 0x1.346cf4p-92f, 0.0f, 0x1.ced2fp-114f, 0.0f, 0x1p0f,
     0x1.388348p-2f, 0.0f, 0x1.7fe52ep-89f, 0x1.127f46p-5f, 0.0f, 0.0f,
     0x1.8112c2p-62f, 0.0f, 0x1.b4c302p-61f, 0x1.63aep-86f, 0x1.4a2494p-119f,
     0x1.96a564p-40f, 0.0f, 0x1.ab9c46p-122f, 0.0f, 0x1.4649fp-102f, 0x1.3aa106p-89f,
     0.0f, 0.0f, 0.0f, 0x1.cd475cp-79f, 0x1.2a4532p-15f, 0.0f, 0.0f, 0.0f,
     0x1.3cea2ap-86f, 0.0f, 0.0f, 0.0f, 0x1.3370d2p-38f, 0x1.b92b6ep-118f,
     0x1.3b746cp-65f, 0x1.14af78p-110f, 0x1.f45bd6p-30f, 0.0f, 0x1.f67852p-53f,
     0x1.305ec4p-22f, 0.0f, 0x1.6fc9fp-70f, 0.0f, 0x1.11707p-88f, 0.0f, 0.0f,
     0x1.c1c0bcp-105f, 0x1.e26fc6p-88f, 0.0f, 0x1.ddd20cp-61f, 0x1.9b9b72p-56f, 0.0f,
     0.0f, 0x1.5b34fep-4f, 0x1.db1752p-104f, 0.0f, 0.0f, 0x1.fdb1dap-5f,
     0x1.c54f28p-61f, 0.0f, 0.0f, 0x1.bd9d1ep-52f, 0.0f, 0x1.7b4588p-14f, 0.0f, 0.0f,
     0x1.22cb34p-56f, 0x1.9346bap-1f, 0x1.970782p-69f, 0.0f, 0.0f, 0.0f,
     0x1.6cc486p-102f, 0x1.10c8cp-40f, 0.0f, 0x1.bb4f6cp-108f, 0.0f, 0x1.f09158p-67f,
     0x1.fddc8cp-1f, 0.0f, 0x1.ab4b52p-55f, 0x1.0c83a4p-53f, 0.0f, 0.0f, 0.0f,
     0x1.f6c368p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e7862p-71f, 0x1.143b7cp-76f,
     0x1.40e9e6p-57f, 0.0f, 0x1.c82818p-118f, 0x1.0fb99cp-46f, 0.0f, 0.0f,
     0x1.bf7ae4p-97f, 0.0f, 0x1.0f0c74p-34f, 0x1.f7ed82p-104f, 0x1.762dd2p-92f,
     0x1.3f0544p-65f, 0x1.4c4574p-38f, 0x1.6de696p-58f, 0x1.4ca31cp-76f,
     0x1.456718p-46f, 0.0f, 0x1.69347cp-45f, 0x1.70f0f4p-114f, 0x1.7f995p-34f, 0.0f,
     0x1.1cbb1p-80f, 0x1.520c0cp-97f, 0x1.5f9d4cp-58f, 0.0f, 0x1.8e2a6p-45f, 0.0f,
     0.0f, 0x1.3e77c8p-105f, 0x1.bcf706p-118f, 0.0f, 0.0f, 0.0f, 0x1.25e86cp-92f,
     0x1.676d26p-102f, 0.0f, 0.0f, 0x1.791364p-9f, 0x1.ee406cp-115f, 0.0f, 0.0f,
     0x1.029cc4p-29f, 0x1.9f4ad2p-78f, 0x1.9ea6fep-56f, 0.0f, 0.0f, 0x1.a6874p-108f,
     0.0f, 0.0f, 0x1.757b5ep-54f, 0.0f, 0x1.8bfd7cp-35f, 0.0f, 0.0f, 0x1.4d9f84p-78f,
     0.0f, 0x1.e159e2p-123f, 0x1.eace5cp-84f, 0.0f, 0x1.781072p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.caeab2p-86f, 0.0f, 0x1.c9f81cp-99f, 0x1.193b62p-91f, 0.0f,
     0.0f, 0.0f, 0x1.b6c476p-100f, 0x1.fb15c8p-10f, 0.0f, 0x1.4984e6p-59f,
     0x1.2f805p-19f, 0.0f, 0x1.41f94p-9f, 0x1.b556e2p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1281b2p-17f, 0x1.48ddep-17f, 0x1.fd9d1cp-14f, 0x1.4e2542p-100f,
     0x1.997b72p-63f, 0.0f, 0.0f, 0x1.d8c61p-90f, 0.0f, 0x1.53de62p-60f,
     0x1.c96224p-14f, 0x1.24f304p-115f, 0.0f, 0.0f, 0.0f, 0x1.b7681p-39f, 0.0f, 0.0f,
     0.0f, 0x1.aea144p-90f, 0.0f, 0x1.6d10b6p-55f, 0x1.5cce84p-94f, 0.0f,
     0x1.64161ap-50f, 0x1.dd9a36p-87f, 0x1.03046ap-95f, 0.0f, 0.0f, 0x1.9a480cp-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.114dap-33f, 0.0f, 0.0f, 0x1.6e9742p-123f,
     0x1.730324p-84f, 0.0f, 0x1.740d8ap-27f, 0.0f, 0.0f, 0x1.07873p-88f,
     0x1.30bfaap-84f, 0.0f, 0x1.5244bp-66f, 0x1.83eb32p-27f, 0.0f, 0.0f,
     0x1.7aa72ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.665724p-17f, 0.0f, 0x1.8937f2p-13f,
     0x1.563398p-8f, 0.0f, 0x1.a1ffp-22f, 0.0f, 0x1.7bb496p-12f, 0x1.79b3d8p-44f,
     0x1.b3e49p-86f, 0x1.d98362p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47b1c8p-38f,
     0x1.c0e83p-107f, 0.0f, 0.0f, 0x1.bd554cp-94f, 0x1.9be61p-87f, 0.0f, 0.0f,
     0x1.66f1cp-74f, 0.0f, 0x1.5e235ep-95f, 0.0f, 0x1.c575c6p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00f708p-17f, 0.0f, 0x1.472f9cp-112f, 0.0f, 0.0f, 0x1.7800bcp-120f,
     0x1.8f49d8p-23f, 0x1.1657d4p-45f, 0.0f, 0.0f, 0x1.7f8fbep-24f, 0x1.e74baap-57f,
     0x1.1d4c06p-27f, 0x1.0d4cf8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0b20cp-71f,
     0x1.1e9326p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a807ap-30f, 0x1.5dd114p-64f, 0.0f,
     0.0f, 0x1.3da87ap-93f, 0x1.ab6956p-93f, 0x1.afed66p-53f, 0.0f, 0.0f,
     0x1.9247cap-36f, 0x1.70e34ap-36f, 0x1.10b38p-117f, 0.0f, 0.0f, 0x1.3e3298p-22f,
     0.0f, 0x1.e8d134p-115f, 0x1.e364bap-83f, 0x1.ec5412p-71f, 0x1.7ab7cp-28f, 0.0f,
     0.0f, 0x1.0bb3b4p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ff94ep-10f,
     0x1.92b1eep-78f, 0.0f, 0.0f, 0x1.f937c2p-91f, 0x1.612452p-5f, 0.0f,
     0x1.5500f6p-62f, 0x1.0b21a2p-95f, 0x1.c3bcd8p-107f, 0x1.890e38p-114f, 0.0f, 0.0f,
     0x1.1d5cc6p-126f, 0.0f, 0x1.34d8dcp-87f, 0x1.be29ccp-24f, 0x1.f3694ap-30f, 0.0f,
     0x1.f05cc8p-50f, 0x1.406aa2p-111f, 0.0f, 0x1.9223d8p-87f, 0.0f, 0x1.45b802p-6f,
     0.0f, 0x1.c5c81ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbee4cp-126f, 0x1.2501e2p-54f, 0x1.92a5cap-64f, 0.0f, 0.0f, 0x1.7dbd2p-87f,
     0.0f, 0x1.36489cp-33f, 0x1.49627ep-60f, 0x1.c0bc8cp-116f, 0x1.fd13c8p-37f, 0.0f,
     0.0f, 0.0f, 0x1.06c64ep-33f, 0.0f, 0x1.5eaa24p-35f, 0x1.730edp-37f, 0.0f,
     0x1.0e41aep-46f, 0x1.211a7ap-88f, 0x1.81f53cp-73f, 0x1.610d4ep-96f, 0.0f, 0.0f,
     0x1.e997cap-32f, 0.0f, 0x1.c1404cp-101f, 0.0f, 0x1.a3dd68p-64f, 0x1.aa5104p-88f,
     0x1.44978cp-95f, 0x1.189f38p-10f, 0.0f, 0.0f, 0.0f, 0x1.42e9b2p-110f, 0.0f, 0.0f,
     0x1.e305e4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b200c2p-116f, 0.0f, 0.0f, 0.0f, 0x1.71f674p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6795ap-92f, 0.0f, 0.0f, 0.0f, 0x1.cd0308p-27f, 0x1.f90d6cp-52f,
     0x1.30a068p-105f, 0.0f, 0x1.e2c904p-68f, 0x1.1807fap-96f, 0x1.9a54b8p-41f,
     0x1.b1494ep-26f, 0.0f, 0.0f, 0.0f, 0x1.5f160ap-106f, 0x1.de4de6p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.32843ep-79f, 0.0f, 0.0f, 0.0f, 0x1.30321cp-17f, 0.0f,
     0x1.2386d4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.229006p-113f, 0x1.ca8494p-54f,
     0.0f, 0.0f, 0x1.eb7746p-122f, 0.0f, 0x1.49d9bap-99f, 0.0f, 0x1.69d956p-102f,
     0x1.6131a4p-18f, 0.0f, 0x1.8c3b6p-97f, 0x1.c8b778p-89f, 0.0f, 0x1.44032p-36f,
     0x1.b45c02p-45f, 0x1.61997ep-28f, 0x1.2a2d4ep-64f, 0x1.94a02p-125f,
     0x1.0964c8p-63f, 0.0f, 0x1.e6ca3ap-94f, 0x1.71ec7ap-108f, 0.0f, 0x1.512cbep-54f,
     0.0f, 0x1.06c26ep-21f, 0x1.7fd61cp-107f, 0.0f, 0x1.c57764p-1f, 0.0f,
     0x1.1d4848p-81f, 0x1.6e6a98p-27f, 0x1.8c5478p-90f, 0x1.7c5224p-22f,
     0x1.c4e7c2p-7f, 0x1.01f85p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a660d4p-106f, 0.0f,
     0.0f, 0x1.65e51p-11f, 0x1.51f134p-41f, 0x1.2fecccp-46f, 0x1.da56eep-108f, 0.0f,
     0x1.24e25p-48f, 0x1.e5dfe4p-31f, 0x1.efd754p-90f, 0x1.ce7172p-117f, 0.0f,
     0x1.2c39aap-59f, 0x1p0f, 0x1.e14cb8p-18f, 0x1.9f3f7ap-48f, 0.0f, 0x1.37538ap-19f,
     0x1.57d444p-29f, 0x1.c8d4aap-122f, 0x1.10f35cp-124f, 0.0f, 0.0f,
     0x1.50e486p-102f
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
            tmp1 = Sleef_atanhf4_u10kvx(tmp0);
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
    printf("Sleef_atanhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atanhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
