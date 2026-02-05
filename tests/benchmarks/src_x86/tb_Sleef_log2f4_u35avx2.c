/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f4_u35avx2128.c --function Sleef_log2f4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.3b22bep-84f, 0x1.3c5de6p-42f, 0x1.c383fcp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b5729cp-73f, 0.0f, 0.0f, 0.0f, 0x1.9a6286p-103f, 0.0f, 0x1.e71eb6p-60f, 0.0f,
     0.0f, 0x1.07404ep-80f, 0x1.26b50ap-86f, 0.0f, 0x1.34852ep-10f, 0.0f,
     0x1.cfcd5cp-49f, 0x1.70af12p-12f, 0.0f, 0x1.bd885cp-65f, 0.0f, 0.0f, 0.0f,
     0x1.a7fd1ep-85f, 0x1.06adbcp-95f, 0x1.c6fc88p-72f, 0x1.c4581ap-93f, 0.0f, 0.0f,
     0x1.728042p-126f, 0x1.3c2268p-68f, 0x1.3adc4ap-92f, 0.0f, 0x1.50b26p-34f, 0.0f,
     0x1.e988d6p-26f, 0x1.230baap-99f, 0.0f, 0x1.4382f6p-31f, 0x1p0f, 0.0f,
     0x1.2e712p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63231ap-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.448a9cp-81f, 0x1.41b638p-112f, 0x1.1add2p-107f, 0x1.034614p-3f,
     0x1.fcde3cp-61f, 0x1.e3d9ap-93f, 0x1.44348ap-101f, 0x1.bc6ee2p-113f,
     0x1.8884aep-34f, 0x1.6a1bbap-94f, 0x1.a166d4p-124f, 0.0f, 0x1.500d74p-27f, 0.0f,
     0.0f, 0x1.677a7ap-7f, 0x1.b0ad7p-76f, 0x1.404e4ep-41f, 0x1.90b60cp-72f,
     0x1.269046p-99f, 0x1.aea9fcp-123f, 0.0f, 0.0f, 0.0f, 0x1.8a7e18p-35f,
     0x1.952514p-58f, 0x1.68b15p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b43972p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87235p-99f, 0.0f,
     0x1.429dcp-124f, 0.0f, 0x1.449d54p-96f, 0x1.dfe2e6p-82f, 0.0f, 0x1.c4ab3cp-95f,
     0x1.582bb4p-113f, 0x1.babe88p-19f, 0.0f, 0.0f, 0x1.8bcf4ap-63f, 0x1.d1f0fcp-25f,
     0.0f, 0.0f, 0x1.28ea6cp-31f, 0.0f, 0.0f, 0x1.8bbe6ep-110f, 0x1.993e1p-124f,
     0x1.b27822p-93f, 0x1.b26c16p-37f, 0x1.71019ep-115f, 0x1.6dfa52p-102f, 0.0f,
     0x1.d5ceeep-44f, 0x1.345a7p-47f, 0.0f, 0.0f, 0x1.8baa22p-5f, 0x1.346956p-45f,
     0.0f, 0x1.d8bd3p-110f, 0.0f, 0.0f, 0.0f, 0x1.ad11f2p-78f, 0x1.01d594p-126f, 0.0f,
     0x1.73cb28p-88f, 0x1.d863dcp-8f, 0x1.95637cp-41f, 0.0f, 0.0f, 0x1.76d7ecp-3f,
     0x1.442b94p-10f, 0x1.8b904ap-113f, 0.0f, 0x1.ee402ap-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f0e32cp-87f, 0.0f, 0x1.e162d2p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4db8cp-108f, 0x1.0887a2p-42f, 0x1.16375ep-70f, 0.0f, 0.0f, 0.0f,
     0x1.5c154ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63e456p-72f, 0.0f, 0.0f,
     0x1.babffep-45f, 0x1.accbb2p-52f, 0x1.f3f7dcp-21f, 0x1.ce8dfap-124f,
     0x1.5d975cp-67f, 0x1.2acc4ep-27f, 0x1.53165ap-55f, 0.0f, 0x1.20c03ap-37f,
     0x1.04464ap-7f, 0.0f, 0x1.1dc4dep-86f, 0.0f, 0.0f, 0.0f, 0x1.034838p-111f,
     0x1.53935cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89204p-104f, 0x1.b48292p-39f, 0.0f,
     0.0f, 0x1.a97366p-50f, 0.0f, 0x1.f484b8p-100f, 0x1.00e41p-17f, 0x1.f13aaap-42f,
     0.0f, 0x1.1421fep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bee378p-51f, 0x1.e6359p-63f,
     0x1.723fb6p-42f, 0.0f, 0.0f, 0x1.ffeaaep-21f, 0.0f, 0x1.3aa2ecp-120f,
     0x1.7281a8p-117f, 0.0f, 0.0f, 0x1.277202p-47f, 0x1.d656cap-66f, 0x1.6da5cep-53f,
     0.0f, 0.0f, 0.0f, 0x1.e307e4p-17f, 0x1.38ea6cp-29f, 0.0f, 0x1.de579p-102f,
     0x1.c9c4c2p-95f, 0.0f, 0x1.a3b0cap-63f, 0.0f, 0x1.ace242p-36f, 0.0f, 0.0f, 0.0f,
     0x1.206cd8p-33f, 0x1.b19f74p-32f, 0x1.cd1e56p-81f, 0x1.3a4678p-101f, 0.0f,
     0x1.ef2004p-39f, 0x1.14ed6ep-109f, 0.0f, 0.0f, 0.0f, 0x1.b5aefp-109f, 0.0f,
     0x1.417b94p-7f, 0.0f, 0x1.2661eep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.005ea6p-67f,
     0x1.385752p-54f, 0.0f, 0.0f, 0.0f, 0x1.a10dbcp-46f, 0x1.d6aedp-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d19a76p-12f, 0x1.ae2f1ap-8f, 0x1.6ba2fp-114f, 0x1.73662p-49f,
     0x1.da69ecp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8502cap-91f, 0x1.423b68p-105f, 0.0f,
     0x1.13bd76p-86f, 0x1.4855ap-104f, 0.0f, 0x1.cd05f8p-85f, 0.0f, 0.0f,
     0x1.eb5dap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c9da2p-6f, 0.0f, 0x1.672bd8p-12f,
     0.0f, 0.0f, 0.0f, 0x1.2b82ecp-10f, 0.0f, 0x1.fe11f4p-18f, 0.0f, 0.0f,
     0x1.e6edb6p-72f, 0x1.9e6b1ap-9f, 0x1.04b558p-44f, 0x1.880a3ap-101f, 0.0f, 0x1p0f,
     0x1.8d2e4cp-16f, 0.0f, 0x1.71ad96p-58f, 0.0f, 0x1.a9280cp-9f, 0.0f, 0.0f, 0.0f,
     0x1.82ac5cp-46f, 0.0f, 0x1.15f324p-24f, 0x1.ff986ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.78be6p-27f, 0x1.117db2p-50f, 0.0f, 0x1.5ccb54p-116f, 0.0f, 0x1.297108p-105f,
     0.0f, 0.0f, 0.0f, 0x1.e69112p-10f, 0x1.a0fe8cp-121f, 0.0f, 0x1.54eaf8p-101f,
     0x1.d7a85cp-67f, 0.0f, 0.0f, 0.0f, 0x1.204e7ep-43f, 0.0f, 0x1.48b668p-11f,
     0x1.6b200ep-49f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.28b1e6p-28f,
     0.0f, 0x1.3a65e2p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7b38cp-122f,
     0x1.e1cf02p-47f, 0x1.cec928p-83f, 0x1.888568p-26f, 0.0f, 0x1.149b2ep-13f, 0.0f,
     0x1p0f, 0x1.1c7372p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7ae72p-70f,
     0.0f, 0.0f, 0x1.78a182p-49f, 0.0f, 0x1.f16e02p-12f, 0.0f, 0x1.19efb4p-95f,
     0x1.5191d6p-23f, 0x1.bcfe92p-64f, 0.0f, 0x1.0ee92ap-91f, 0.0f, 0x1.e7f566p-117f,
     0.0f, 0.0f, 0.0f, 0x1.10d98p-13f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.2a4282p-38f, 0.0f, 0x1.bba58ap-52f, 0x1.ee4ab2p-61f, 0.0f, 0x1.c42ee8p-75f,
     0x1.d3b938p-107f, 0.0f, 0x1.bcb9b6p-120f, 0x1.567cbep-116f, 0x1.e905a8p-25f,
     0.0f, 0.0f, 0.0f, 0x1.e561b2p-26f, 0x1.de65bep-96f, 0x1.1c7afcp-115f,
     0x1.db46acp-53f, 0x1.526cdcp-94f, 0x1.46add8p-5f, 0.0f, 0x1.c87994p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83d4cp-23f, 0.0f, 0x1.b09c02p-111f, 0x1.2ba6bap-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67ae9ap-58f, 0x1.fb55acp-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6dda74p-15f, 0.0f, 0x1.ba8cdp-20f, 0.0f, 0x1.31eedep-92f,
     0x1.069da6p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.734248p-77f, 0.0f, 0x1.ff9d56p-94f,
     0x1.79366ap-15f, 0.0f, 0x1.45d368p-3f, 0x1.b8db24p-24f, 0.0f, 0x1.a3c2fap-17f,
     0x1.660d7p-16f, 0x1.c81f74p-108f, 0x1.bbc2b8p-22f, 0.0f, 0.0f, 0x1.e1d34ep-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f03878p-124f, 0.0f, 0x1.4db01cp-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e35f8ap-110f, 0x1.df0404p-57f, 0x1.da62f6p-53f, 0.0f,
     0x1.444a3ep-123f, 0x1.142a76p-14f, 0x1.aca80cp-52f, 0x1.0684c4p-42f,
     0x1.672e4cp-97f, 0.0f, 0x1.cfc574p-49f, 0.0f, 0.0f, 0x1.0aeefap-93f, 0.0f,
     0x1.12d654p-66f, 0.0f, 0.0f, 0x1.c42912p-15f, 0x1.eee68p-99f, 0x1.cd75e4p-59f,
     0x1.18cfb4p-91f, 0x1.4c06eap-73f, 0.0f, 0x1.c5f7cp-10f, 0.0f, 0.0f,
     0x1.f2247cp-81f, 0.0f, 0.0f, 0x1.0d933ap-32f, 0x1.81b9d2p-64f, 0.0f, 0.0f,
     0x1.37737cp-44f, 0.0f, 0x1.c29b7ep-89f, 0.0f, 0x1.f7c634p-14f, 0.0f,
     0x1.ec7e5ap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f491p-42f, 0.0f, 0x1.c0fe0cp-92f,
     0x1.aa614p-50f, 0x1.8f0cecp-53f, 0.0f, 0x1.bbe2dp-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd2214p-18f, 0x1.43b0f6p-17f, 0.0f, 0.0f, 0.0f, 0x1.460ef2p-24f,
     0x1.881a72p-56f, 0.0f, 0x1.b814d6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acd644p-83f, 0x1.17fe84p-45f, 0x1.c608cep-80f, 0.0f, 0.0f, 0x1.5b39dep-34f,
     0x1.bdf8ep-41f, 0x1.aab66cp-45f, 0x1.07e306p-77f, 0x1.63c074p-34f,
     0x1.c2dfe6p-111f, 0.0f, 0x1.63783ep-93f, 0.0f, 0x1.8a6d04p-60f, 0.0f, 0.0f, 0.0f,
     0x1.b2f842p-55f, 0.0f, 0.0f, 0x1.c3738cp-17f, 0.0f, 0x1.afb79ap-99f, 0.0f,
     0x1.bee4b4p-45f, 0.0f, 0x1.426978p-91f, 0x1.d70acep-54f, 0x1.c97bfp-105f,
     0x1.26d6eap-72f, 0.0f, 0x1.eacb1ep-4f, 0.0f, 0.0f, 0x1.5b115ap-20f,
     0x1.c2631p-65f, 0x1.bef1ep-97f, 0.0f, 0x1.68c892p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86f0b6p-120f, 0x1.325d42p-43f, 0.0f, 0x1.b6fdccp-81f,
     0x1.456384p-62f, 0.0f, 0.0f, 0x1.7bace4p-81f, 0x1.dc36f2p-83f, 0x1.4c6632p-5f,
     0x1.e3f8e8p-36f, 0x1.dd82cp-116f, 0x1.d9021ep-61f, 0.0f, 0x1.ca0b04p-24f, 0.0f,
     0x1.0aa522p-106f, 0x1.c7faf6p-115f, 0x1.ad855p-94f, 0x1.3bd68p-112f, 0.0f,
     0x1.91847ap-29f, 0.0f, 0.0f, 0x1.bfeff8p-20f, 0x1.45feecp-63f, 0.0f, 0.0f,
     0x1.43afdp-53f, 0.0f, 0.0f, 0x1.aa4b4ep-83f, 0x1.51c79cp-24f, 0.0f,
     0x1.11f3d2p-89f, 0x1.5b3f9cp-78f, 0.0f, 0x1.1061c8p-80f, 0x1.293c9ap-110f,
     0x1.2b4f76p-62f, 0x1.7fd6eap-80f, 0x1.f559d4p-60f, 0.0f, 0.0f, 0.0f,
     0x1.ad4c82p-4f, 0.0f, 0x1.eb65e4p-38f, 0.0f, 0.0f, 0x1.99fe14p-116f,
     0x1.eca12cp-13f, 0x1.74a818p-78f, 0x1.7a458ep-99f, 0x1.bc107p-121f,
     0x1.125e8p-117f, 0.0f, 0x1.7d2e8cp-25f, 0.0f, 0.0f, 0x1.0d21fap-25f, 0.0f,
     0x1.7c3df6p-48f, 0.0f, 0x1.e22aaap-96f, 0x1.b28decp-76f, 0x1.8702c4p-18f, 0.0f,
     0.0f, 0.0f, 0x1.4e1206p-75f, 0x1.fd0e26p-82f, 0.0f, 0.0f, 0.0f, 0x1.22757ep-27f,
     0.0f, 0x1.0602dep-23f, 0.0f, 0x1.8481e6p-113f, 0x1.1afe38p-52f, 0.0f,
     0x1.7b0604p-6f, 0x1.acb926p-69f, 0.0f, 0.0f, 0.0f, 0x1.feec0ep-86f,
     0x1.92d876p-83f, 0x1.8c1c4ep-92f, 0.0f, 0.0f, 0x1.620482p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.df8ae4p-39f, 0x1.2b933ap-109f, 0x1.5487bap-62f, 0.0f, 0.0f,
     0x1.db4046p-107f, 0x1.a379c4p-64f, 0x1.dd645ap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00b23ep-104f, 0.0f, 0.0f, 0x1.1f73dp-113f, 0x1.8c9f94p-125f, 0.0f,
     0x1.c6526ap-57f, 0.0f, 0x1.596876p-105f, 0x1.265e0ep-117f, 0x1.702464p-69f, 0.0f,
     0.0f, 0.0f, 0x1.a901dp-1f, 0.0f, 0x1.1dfa94p-27f, 0.0f, 0x1.9af466p-92f, 0.0f,
     0.0f, 0x1.7cf8ep-55f, 0.0f, 0.0f, 0x1.921754p-60f, 0.0f, 0x1.b58f18p-126f,
     0x1p0f, 0.0f, 0x1.8c815ep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5939f6p-38f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1p0f, 0x1.52bfep-78f,
     0x1.e2b13p-52f, 0.0f, 0.0f, 0x1.23a2a2p-75f, 0x1.0b11d2p-8f, 0x1.03b8dep-79f,
     0x1.6d5cc2p-55f, 0.0f, 0.0f, 0.0f, 0x1.20aa52p-40f, 0.0f, 0.0f, 0.0f,
     0x1.0649d6p-15f, 0.0f, 0x1.0e2492p-92f, 0.0f, 0x1.033578p-114f, 0x1.a8e504p-53f,
     0.0f, 0x1.32691p-4f, 0x1.a4e958p-101f, 0x1.331c5p-12f, 0.0f, 0.0f, 0.0f,
     0x1.a4348p-41f, 0.0f, 0x1.cbd83cp-100f, 0.0f, 0x1.f101eep-108f, 0x1.4df79p-112f,
     0x1.628834p-51f, 0x1.e390fp-45f, 0.0f, 0.0f, 0x1.a3c4dp-21f, 0x1.e96b5p-12f,
     0.0f, 0.0f, 0x1.28524ap-6f, 0x1.c429c8p-15f, 0x1.9b6d8ap-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58d49ap-76f, 0.0f, 0x1.79cc7ep-76f,
     0x1.b22df6p-86f, 0x1.a0c8b4p-42f, 0.0f, 0x1.4a0e02p-81f, 0.0f, 0x1.7e6526p-51f,
     0x1.e7fc62p-41f, 0.0f, 0x1.f31f46p-47f, 0.0f, 0.0f, 0.0f, 0x1.5a4e4p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f76dep-71f, 0x1.fe63fcp-25f, 0.0f,
     0x1.bd3b02p-92f, 0x1.41c4fcp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c1846p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a26c7ep-35f, 0.0f,
     0x1.0efc1ep-89f, 0x1.3ce77ep-42f, 0x1.a260bp-59f, 0.0f, 0x1.91581ep-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b5c72p-101f, 0.0f, 0.0f, 0.0f, 0x1.3b60bep-112f,
     0x1.2f62b4p-17f, 0.0f, 0.0f, 0x1.a0dea2p-5f, 0.0f, 0x1.665d42p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e36a2p-94f, 0x1.9d60bp-36f, 0x1.47cb3cp-100f, 0x1.8f805ep-74f,
     0x1.6c1e78p-36f, 0x1.58e27ap-71f, 0x1.1369ap-115f, 0x1.9fe4d4p-75f, 0.0f,
     0x1.c8df2p-23f, 0.0f, 0x1.cd31ccp-79f, 0.0f, 0x1.3fe4eap-18f, 0.0f,
     0x1.1541aep-111f, 0.0f, 0x1.310f12p-95f, 0x1.1fe91cp-59f, 0.0f, 0x1.de6952p-59f,
     0.0f, 0.0f, 0x1.99d8cep-80f, 0x1.9855a6p-90f, 0x1.4afe92p-63f, 0x1.faf3aep-59f,
     0.0f, 0.0f, 0x1.7dc804p-126f, 0.0f, 0x1.c2872p-44f, 0x1.19707ep-68f,
     0x1.d425f6p-120f, 0.0f, 0x1.9d4306p-86f, 0x1.f66618p-75f, 0.0f, 0x1.25c6aap-13f,
     0x1.5a356p-40f, 0x1.83c868p-14f, 0x1.54a776p-34f, 0x1.87f4d6p-96f,
     0x1.0149b8p-101f, 0x1.280c9cp-23f, 0.0f, 0x1.e0c1dap-37f, 0x1.03f63p-13f,
     0x1.fb4194p-21f, 0.0f, 0.0f, 0.0f, 0x1.8e611cp-66f, 0x1.528fa8p-48f,
     0x1.60fc84p-31f, 0x1.cd191ap-18f, 0x1.6e6784p-60f, 0.0f, 0.0f, 0x1.ff086ap-69f,
     0x1.78c10cp-126f, 0x1.890148p-25f, 0x1.5ba984p-94f, 0x1.32f612p-106f,
     0x1.c4fbp-62f, 0.0f, 0.0f, 0.0f, 0x1.5816d6p-12f, 0x1.bb4182p-78f, 0.0f,
     0x1.ab8bbp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.132bfep-109f, 0.0f, 0.0f, 0.0f,
     0x1.6227ecp-13f, 0.0f, 0x1.0b3cf8p-45f, 0.0f, 0x1.e297c6p-106f, 0.0f,
     0x1.5d162cp-96f, 0x1.abc6a4p-62f, 0x1.6c1af2p-12f, 0.0f, 0x1.4e34bp-106f,
     0x1.e407e8p-25f, 0x1.0ec1bp-71f, 0.0f, 0.0f, 0x1.de27dcp-121f, 0.0f,
     0x1.2e1578p-47f, 0x1.0a147cp-48f, 0x1.298dd6p-57f, 0x1.897ddcp-82f,
     0x1.d896d6p-32f, 0.0f, 0x1.226c3cp-59f, 0x1.82afdep-67f, 0.0f, 0.0f, 0.0f,
     0x1.f2c206p-99f, 0x1.d48c5cp-97f, 0x1.91be5ep-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3fd5ap-18f, 0.0f, 0x1.9d98a6p-102f, 0.0f, 0.0f, 0.0f, 0x1.b0c0aep-66f, 0.0f,
     0.0f, 0x1.ab3f1p-32f, 0x1.14c63cp-114f, 0.0f, 0.0f, 0x1.ed9d7ep-91f
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
            tmp1 = Sleef_log2f4_u35avx2128(tmp0);
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
    printf("Sleef_log2f4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log2f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
