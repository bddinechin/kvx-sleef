/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modff8_kvx.c --function Sleef_modff8_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.1cc23cp-33f, 0.0f, 0.0f, 0.0f, 0x1.759752p-84f, 0x1.de6052p-68f,
     0x1.04a492p-110f, 0.0f, 0x1.3cca9ep-73f, 0x1.bcb734p-19f, 0x1.a833f4p-69f, 0.0f,
     0x1.1b4ad2p-71f, 0x1.e1e2p-85f, 0x1.d55086p-48f, 0x1.c1c446p-48f,
     0x1.7250a2p-70f, 0x1.f989bp-118f, 0x1.e2069ap-89f, 0x1.10e966p-11f, 0.0f, 0.0f,
     0x1.e17b7ap-20f, 0x1.a98a2cp-76f, 0x1.53a928p-122f, 0x1.99d9eep-35f,
     0x1.def924p-80f, 0.0f, 0x1.8dcfd2p-77f, 0x1.186394p-72f, 0x1.c3c7aap-79f,
     0x1.5694eep-75f, 0x1.05e552p-56f, 0x1.3b3d96p-10f, 0x1.119908p-42f, 0.0f,
     0x1.5b978cp-92f, 0x1.5e05dep-19f, 0x1.27b77ap-21f, 0.0f, 0.0f, 0.0f,
     0x1.ea093cp-42f, 0x1.8eeed8p-89f, 0.0f, 0x1.c0e8d8p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b28726p-16f, 0x1.e43652p-77f, 0x1.0ccdf2p-3f, 0x1.8dbd42p-66f,
     0x1.67b1bep-20f, 0.0f, 0.0f, 0x1.dea06cp-60f, 0.0f, 0x1.71ee7cp-122f,
     0x1.2fd95ep-109f, 0.0f, 0x1.5c6f64p-37f, 0x1.68b1e6p-118f, 0.0f, 0x1.fd24p-84f,
     0.0f, 0x1.5f2ceep-63f, 0x1.9972a6p-120f, 0.0f, 0.0f, 0.0f, 0x1.ad0694p-13f,
     0x1.35788p-9f, 0.0f, 0x1.a0b876p-29f, 0.0f, 0.0f, 0x1.8b485p-93f, 0.0f, 0.0f,
     0x1.5a6c44p-23f, 0.0f, 0x1.1822b2p-25f, 0x1.1a0df6p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a24f68p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2cac4p-51f, 0.0f, 0x1.8b9384p-74f,
     0.0f, 0x1.af3c84p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44ba1ap-78f, 0x1.5f7456p-73f,
     0.0f, 0.0f, 0x1.329a0ep-75f, 0.0f, 0.0f, 0.0f, 0x1.d5ec8ap-82f, 0x1.af035ap-5f,
     0.0f, 0x1.dbb1b4p-30f, 0x1.492bd8p-113f, 0x1.4cb5d2p-8f, 0.0f, 0x1.bad85ap-76f,
     0x1.7908c6p-34f, 0.0f, 0.0f, 0x1.f06226p-4f, 0.0f, 0x1.d9fa82p-97f,
     0x1.98de4cp-24f, 0.0f, 0x1.1cbab6p-16f, 0x1.26eeccp-70f, 0x1.70596cp-56f, 0.0f,
     0x1.73c0ap-5f, 0x1.380722p-54f, 0x1.8f31e6p-104f, 0.0f, 0x1.4c80e6p-9f,
     0x1.b64b14p-29f, 0x1.b7f32ap-99f, 0.0f, 0x1.c1c7e6p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f1cc8p-57f, 0x1.3028b8p-19f, 0x1.7a330cp-27f, 0x1.787ca2p-43f, 0.0f,
     0x1.77500cp-44f, 0.0f, 0.0f, 0x1.7577acp-5f, 0x1.5636fp-34f, 0x1.b7792p-35f,
     0x1.75040cp-102f, 0.0f, 0x1.47d456p-24f, 0.0f, 0x1.b71a2ap-58f, 0.0f,
     0x1.a55e3ap-60f, 0.0f, 0x1.3d5426p-4f, 0.0f, 0.0f, 0x1.c2b7f4p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c74f74p-37f, 0x1.ebea02p-112f, 0x1.631638p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1a6404p-2f, 0x1.c8be88p-35f, 0.0f, 0.0f, 0x1.a48a6p-107f, 0.0f, 0.0f,
     0x1.8cf39p-118f, 0x1.ac98eep-43f, 0x1.090668p-96f, 0.0f, 0.0f, 0x1.794e16p-59f,
     0x1.db3c2p-73f, 0.0f, 0x1.c9f2b2p-26f, 0.0f, 0x1.d0dea6p-118f, 0x1.2cc58p-70f,
     0x1.da6e12p-17f, 0.0f, 0.0f, 0x1.dd5feep-117f, 0x1p0f, 0.0f, 0x1.86c83cp-105f,
     0x1.c12ddcp-112f, 0.0f, 0x1.08a59ep-103f, 0x1.76721p-6f, 0.0f, 0.0f, 0.0f,
     0x1.ab7578p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7ee82p-76f, 0x1.2987ap-119f,
     0x1.73d19cp-25f, 0x1.dc83bp-37f, 0.0f, 0x1.e2e1aep-73f, 0.0f, 0x1.e2ae5ep-90f,
     0x1.49b9fep-102f, 0.0f, 0x1.ae367ep-72f, 0x1.5e8642p-12f, 0x1.223b62p-84f,
     0x1.bfe2b4p-69f, 0x1.8af0bep-84f, 0x1.1bf6a4p-91f, 0x1.256d28p-105f,
     0x1.31a7eep-68f, 0.0f, 0.0f, 0.0f, 0x1.71aa86p-69f, 0.0f, 0x1.8de216p-122f, 0.0f,
     0.0f, 0x1.7e0792p-20f, 0.0f, 0.0f, 0x1.433a98p-98f, 0x1.e4c404p-124f,
     0x1.1ddf7cp-12f, 0x1.53c194p-83f, 0x1.4ab5dap-67f, 0x1.dd0e5ap-80f, 0.0f,
     0x1.f16de4p-61f, 0.0f, 0x1.bd5324p-125f, 0x1.3f3c86p-77f, 0.0f, 0.0f, 0.0f,
     0x1.364b3ap-73f, 0.0f, 0x1.ea7194p-37f, 0.0f, 0.0f, 0.0f, 0x1.2d7682p-15f,
     0x1.a2cb6ap-7f, 0x1.579314p-25f, 0x1.613f5ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.0d4ebep-109f, 0.0f, 0.0f, 0x1.30339ep-89f, 0x1.38b302p-99f, 0x1.040bcp-79f,
     0.0f, 0x1.f898cap-94f, 0.0f, 0.0f, 0x1.5b0a86p-57f, 0.0f, 0.0f, 0x1.e7205ep-114f,
     0x1.f8178ap-12f, 0x1.16a3e2p-42f, 0.0f, 0x1.7ed066p-52f, 0.0f, 0x1.c91902p-61f,
     0x1.e9da12p-13f, 0x1.89bd42p-17f, 0.0f, 0.0f, 0x1.c685a6p-36f, 0x1.ea22cap-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.555cc8p-36f, 0.0f, 0x1.0f0d5p-22f, 0x1.fcf0b6p-101f,
     0x1.2b379ep-95f, 0x1.ffad12p-45f, 0x1.fe834ap-110f, 0.0f, 0.0f, 0x1.890a9p-19f,
     0.0f, 0.0f, 0x1.d3f5d4p-56f, 0x1.c3df6ep-95f, 0x1.080e98p-106f, 0x1.f2eebap-102f,
     0x1.b82a46p-54f, 0.0f, 0x1.3bd314p-35f, 0.0f, 0.0f, 0.0f, 0x1.dec086p-125f,
     0x1.dddf42p-80f, 0.0f, 0.0f, 0.0f, 0x1.edecdcp-120f, 0x1.8f6014p-69f,
     0x1.6f2edp-119f, 0x1.9cf852p-115f, 0.0f, 0.0f, 0.0f, 0x1.c3b432p-77f,
     0x1.0fb83p-9f, 0x1.e9598p-46f, 0x1.efb862p-44f, 0x1.c8a7b2p-16f, 0.0f, 0x1p0f,
     0.0f, 0x1.e37d76p-25f, 0.0f, 0x1.942eb4p-40f, 0.0f, 0.0f, 0.0f, 0x1.e4ad66p-44f,
     0.0f, 0.0f, 0x1.dfd8bp-86f, 0.0f, 0.0f, 0x1.954216p-59f, 0.0f, 0x1.2929fap-41f,
     0.0f, 0x1.921908p-66f, 0x1.dbb11ap-101f, 0x1.5f65dap-54f, 0.0f, 0.0f, 0.0f,
     0x1.b0ab3p-60f, 0.0f, 0.0f, 0.0f, 0x1.888e6ep-8f, 0x1.72559ep-20f,
     0x1.cb6bb6p-51f, 0x1.88f616p-22f, 0x1.a8d138p-36f, 0x1.b3c8f6p-113f,
     0x1.a09e3ap-98f, 0x1.3c403cp-101f, 0.0f, 0x1.53282cp-114f, 0.0f, 0.0f,
     0x1.d0a65cp-25f, 0x1.0a8602p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28820cp-25f,
     0x1.8e76cap-67f, 0x1.cf4594p-41f, 0.0f, 0.0f, 0x1.4439dp-70f, 0.0f,
     0x1.13c9acp-63f, 0x1.426592p-59f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.0e99c6p-86f,
     0.0f, 0x1.ab7234p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a465eap-53f, 0x1.5357ap-90f,
     0x1.c04dcap-19f, 0.0f, 0.0f, 0.0f, 0x1.1661ecp-119f, 0x1.76848ap-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0eb334p-117f, 0.0f, 0.0f, 0x1.6c4feep-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ec03ap-71f, 0.0f, 0x1.84e98ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.370fb8p-82f, 0x1.bf8ee6p-125f, 0x1.89c896p-109f, 0.0f, 0.0f, 0x1.ec003ap-7f,
     0x1.13a6cap-72f, 0x1.7c4552p-84f, 0.0f, 0x1.5f25bp-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.06ec7p-70f, 0x1.0db6dap-125f, 0.0f, 0x1.9b47e2p-89f,
     0x1.1032ccp-47f, 0x1.70fc88p-117f, 0.0f, 0x1.bfdc2cp-114f, 0.0f, 0.0f,
     0x1.f3e8bp-53f, 0.0f, 0.0f, 0x1.3a6b36p-15f, 0.0f, 0x1.394462p-25f,
     0x1.f48cdp-9f, 0x1.650314p-4f, 0x1.68b964p-107f, 0x1.38eaa2p-100f,
     0x1.48ab52p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9dd23ep-8f, 0.0f, 0x1.778f6ep-43f,
     0.0f, 0.0f, 0x1.36692p-72f, 0x1.5066a8p-56f, 0x1.d5c9aep-119f, 0x1.1d06dap-4f,
     0.0f, 0x1.f9d078p-37f, 0.0f, 0.0f, 0x1.30126p-30f, 0x1.bdfbcap-97f, 0.0f,
     0x1.df3498p-78f, 0x1.44e67cp-120f, 0x1.7cb9dcp-95f, 0x1.17b26p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b3603cp-3f, 0x1.f1774ap-111f, 0.0f, 0x1.88f85p-86f,
     0x1.1f41ep-58f, 0x1.f84936p-37f, 0.0f, 0.0f, 0x1.b7158ep-75f, 0x1.12338ep-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06e7c8p-61f, 0.0f, 0.0f, 0.0f, 0x1.6e79fcp-67f,
     0.0f, 0.0f, 0.0f, 0x1.45b1bep-94f, 0.0f, 0.0f, 0x1.68b2d4p-81f, 0x1.9a92b4p-104f,
     0.0f, 0x1.421ac6p-95f, 0x1.070c8p-25f, 0.0f, 0x1.b3fda8p-70f, 0.0f, 0.0f,
     0x1.1ed42cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9dd8ep-124f,
     0x1.488496p-13f, 0.0f, 0x1.fb465cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e1aaep-100f, 0.0f, 0x1.d08ca4p-76f, 0x1.ad3964p-114f, 0x1.e6ca78p-81f, 0.0f,
     0x1.040fbcp-105f, 0x1.24bafep-103f, 0.0f, 0x1.21c714p-74f, 0x1.9c86bp-106f,
     0x1.8d82e8p-114f, 0x1.b5610ep-52f, 0x1.ad12dap-89f, 0.0f, 0.0f, 0.0f,
     0x1.02177cp-24f, 0.0f, 0x1.ce8f4ap-104f, 0x1.199406p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0125d4p-2f, 0x1.d1ba7p-1f, 0x1.9960b6p-15f, 0.0f, 0.0f, 0x1.19fc16p-69f,
     0x1.2a5c5ap-74f, 0x1.c8ee3ep-61f, 0x1.4252a8p-112f, 0x1.60b86ep-21f,
     0x1.f8ba5ep-4f, 0x1.54725ap-27f, 0.0f, 0.0f, 0x1.ee9b56p-42f, 0.0f,
     0x1.6261bp-123f, 0.0f, 0.0f, 0.0f, 0x1.8ef718p-10f, 0x1.0c05b2p-112f,
     0x1.96bdecp-52f, 0.0f, 0x1.6b5b24p-101f, 0x1.fb4d1ap-76f, 0x1.ca4cp-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b5f1p-70f, 0x1.bae6a4p-39f, 0x1.e61b7p-26f,
     0x1.c8bfc4p-83f, 0x1.77b46ap-96f, 0x1.825d7ap-36f, 0.0f, 0.0f, 0x1.eab676p-22f,
     0.0f, 0x1.a50974p-67f, 0.0f, 0x1.d61402p-33f, 0x1.98bc28p-77f, 0.0f,
     0x1.8c021ap-106f, 0x1.6221e6p-34f, 0x1.3bcba2p-80f, 0.0f, 0.0f, 0x1.4357aep-119f,
     0.0f, 0x1.7f6536p-62f, 0x1.5a858ep-112f, 0.0f, 0x1.ddb84ap-37f, 0.0f, 0.0f, 0.0f,
     0x1.39413ap-30f, 0.0f, 0x1.9b38dap-105f, 0.0f, 0.0f, 0x1.724ee2p-35f, 0.0f, 0.0f,
     0x1.678ce4p-104f, 0x1.c6953cp-53f, 0x1.bb9412p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d958bap-32f, 0x1.93f1b8p-99f, 0.0f, 0x1p0f, 0x1.a79998p-7f, 0x1.f2b054p-81f,
     0x1.252b38p-59f, 0.0f, 0x1.ea3c28p-36f, 0x1.719004p-101f, 0x1.2a7622p-97f, 0.0f,
     0x1.097b7ap-61f, 0.0f, 0x1.899cd6p-2f, 0x1.c2816cp-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1bd526p-51f, 0x1.22de3cp-118f, 0.0f, 0x1.5b87b6p-39f,
     0x1.a5841ep-126f, 0x1.b47a68p-65f, 0x1.f01a88p-89f, 0x1.6fcf3p-55f, 0.0f, 0.0f,
     0x1.1a4862p-83f, 0x1.fa11cap-110f, 0.0f, 0.0f, 0x1.c386f2p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.49012cp-66f, 0x1.be419cp-98f, 0.0f, 0.0f, 0.0f,
     0x1.6297c8p-89f, 0x1.47922p-73f, 0x1.826906p-94f, 0x1.9c5d32p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6c7e44p-115f, 0.0f, 0.0f, 0x1.584024p-6f, 0x1.637224p-104f,
     0x1.4fd978p-93f, 0.0f, 0.0f, 0.0f, 0x1.600994p-83f, 0x1.7b9c08p-71f,
     0x1.11d2f2p-27f, 0.0f, 0.0f, 0.0f, 0x1.9e68d2p-106f, 0x1.188e56p-121f,
     0x1.d4fe4p-44f, 0x1.9326d2p-96f, 0.0f, 0.0f, 0x1.6486dep-122f, 0.0f,
     0x1.ac0dfp-6f, 0x1.bd81fp-102f, 0.0f, 0.0f, 0.0f, 0x1.1dde08p-42f,
     0x1.22270ep-108f, 0.0f, 0x1.90ddd6p-12f, 0x1.dfec2ap-94f, 0x1.39d0fep-48f, 0.0f,
     0x1.ce778cp-75f, 0x1.7d59bep-9f, 0x1.48b4f6p-104f, 0x1.1ca1dap-42f,
     0x1.3f60ep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c52b18p-45f, 0.0f, 0.0f,
     0x1.d481c6p-117f, 0.0f, 0x1.209ffp-25f, 0x1.19aaf4p-53f, 0x1.2da70ap-37f,
     0x1.8f6c1ap-121f, 0.0f, 0.0f, 0x1.9d1c5cp-69f, 0.0f, 0x1.c78d3ap-81f, 0.0f, 0.0f,
     0x1.6f4228p-86f, 0.0f, 0x1.4faf52p-37f, 0.0f, 0x1.d47afep-113f, 0.0f,
     0x1.121ab4p-94f, 0.0f, 0.0f, 0x1.942698p-123f, 0.0f, 0x1.fb6c66p-40f,
     0x1.2d6a1cp-73f, 0x1.da6e52p-27f, 0.0f, 0.0f, 0x1.e0022p-117f, 0.0f,
     0x1.4d8b5ep-121f, 0x1.0a2254p-34f, 0x1.4ba93cp-106f, 0x1.ef8926p-126f,
     0x1.243a38p-44f, 0.0f, 0x1.67cffep-15f, 0.0f, 0x1.6bf238p-121f, 0.0f,
     0x1.9e90d2p-110f, 0.0f, 0x1.29df6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.104b8p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ec27ep-7f, 0x1.e6e6e4p-83f, 0x1.c5d67ap-120f, 0.0f,
     0.0f, 0x1.8a1a42p-82f, 0.0f, 0.0f, 0.0f, 0x1.21618ap-114f, 0x1.e1982p-114f,
     0x1.9811f8p-22f, 0x1.a2107cp-88f, 0.0f, 0.0f, 0.0f, 0x1.bb99bp-12f, 0.0f,
     0x1.12ea5ap-108f, 0.0f, 0.0f, 0x1.770b9ap-96f, 0x1.f897bep-63f, 0.0f,
     0x1.78106ep-88f, 0x1.e510dep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d5b31ep-89f, 0x1.872772p-121f, 0x1.c82944p-22f, 0.0f, 0x1.4d312cp-26f, 0.0f,
     0x1.aed7ap-38f, 0x1.02185p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee83aep-63f,
     0x1.2f5ccap-10f, 0.0f, 0x1.f64e8p-40f, 0.0f, 0x1.a1a8c4p-102f, 0.0f,
     0x1.340d5p-55f, 0.0f, 0.0f, 0x1.615096p-105f, 0.0f, 0.0f, 0x1.5a70bcp-59f,
     0x1.916176p-87f, 0x1.abcaa8p-16f, 0.0f, 0.0f, 0x1.134f94p-11f, 0x1.fc5d86p-35f,
     0.0f, 0.0f, 0x1.80305cp-37f, 0.0f, 0x1.e6a6aep-37f, 0.0f, 0.0f, 0x1.ca0d9p-74f,
     0x1.db901cp-115f, 0.0f, 0.0f, 0.0f, 0x1.1c3b14p-55f, 0.0f, 0.0f, 0.0f,
     0x1.1190a8p-10f, 0x1.b68ceap-55f, 0x1.4c7384p-126f, 0x1.ddb772p-32f,
     0x1.140316p-28f, 0.0f, 0.0f, 0x1.ebbfecp-63f, 0x1.0fd37cp-58f, 0.0f,
     0x1.bbaf56p-20f, 0.0f, 0.0f, 0.0f, 0x1.7014a2p-79f, 0x1.768272p-78f,
     0x1.02a3f2p-60f, 0x1.1d65d8p-61f, 0x1.d01d32p-125f, 0x1.2312bep-37f, 0.0f, 0.0f,
     0x1.8d31e8p-3f, 0.0f, 0.0f, 0x1.ca0438p-96f, 0.0f, 0.0f, 0.0f, 0x1.35e0f2p-30f,
     0x1.22d0e6p-123f, 0x1.8e28a8p-82f, 0x1.e4e6f2p-12f, 0x1.9b0964p-50f,
     0x1.ae6888p-60f, 0.0f, 0.0f, 0x1.a7b966p-81f, 0.0f, 0x1.5acd5ap-86f,
     0x1.167634p-104f, 0.0f, 0.0f, 0x1.f5ae0ep-24f, 0x1.d38deep-77f, 0.0f, 0.0f,
     0x1.4adae4p-103f, 0.0f, 0x1.b87abap-98f, 0.0f, 0x1.a1675p-46f, 0x1.54818cp-23f,
     0x1.6d4398p-50f, 0.0f, 0x1.cd004ep-6f, 0.0f, 0x1.ae15fap-83f, 0.0f, 0.0f,
     0x1.5c54b8p-61f, 0x1.2426d2p-12f, 0.0f, 0.0f, 0x1.f913aap-105f, 0x1.1c523ap-57f,
     0x1.65d3f8p-74f, 0x1.ae0a18p-91f, 0x1.854f72p-107f, 0x1.f40facp-123f,
     0x1.708cbp-125f, 0.0f, 0x1.3bc724p-33f, 0x1.0664eap-103f, 0.0f, 0.0f, 0.0f,
     0x1.e55aaap-118f, 0x1.b571c8p-64f, 0x1.154678p-8f, 0x1.2fbb84p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.78a03p-69f, 0.0f, 0x1.05f66p-96f, 0x1.a4b18ep-44f,
     0x1.08d7fep-102f, 0.0f, 0x1.a83154p-101f, 0x1.29ce88p-83f, 0x1.a6e2a8p-81f,
     0x1.be9662p-37f, 0x1.b0b568p-119f, 0x1.acda6ep-15f, 0.0f, 0.0f, 0.0f,
     0x1.971ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.379f0cp-41f, 0x1.7e1abp-124f,
     0x1.04cfc6p-87f, 0x1.73a9d4p-82f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
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
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_modff8_kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_modff8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_modff8_kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
