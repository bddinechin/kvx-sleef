/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif4_u35kvx.c --function \
 *     Sleef_finz_sincospif4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x4_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x4_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.56b04ap-111f, 0.0f, 0x1.3e2794p-98f, 0.0f, 0x1.56be94p-45f,
     0x1.1ab13ep-24f, 0x1.ebe1dep-18f, 0x1.007b24p-114f, 0x1.20095p-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.366dc6p-125f, 0x1.cac684p-123f, 0.0f, 0.0f, 0.0f,
     0x1.7d570cp-44f, 0.0f, 0x1.ff58bp-6f, 0x1.b6acdp-22f, 0x1.4c489ep-101f,
     0x1.3297fp-33f, 0x1.36dc26p-28f, 0x1.36d2f4p-57f, 0x1.8f5082p-1f, 0.0f, 0.0f,
     0.0f, 0x1.508af2p-124f, 0.0f, 0.0f, 0x1.66ffeap-72f, 0.0f, 0.0f,
     0x1.baf758p-112f, 0x1.53cd2cp-85f, 0.0f, 0x1.52296ap-91f, 0x1.bf5148p-50f, 0.0f,
     0x1.4eaf04p-36f, 0.0f, 0x1.c31d42p-87f, 0x1.d5f85ep-38f, 0.0f, 0x1.842f58p-83f,
     0x1.3071d8p-5f, 0.0f, 0x1.ec4018p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c77aa8p-55f, 0x1.5ca1fp-10f, 0.0f, 0x1.de7c6cp-6f, 0x1.b7b29ep-25f,
     0x1.501944p-110f, 0x1.2de2e6p-16f, 0x1.eb6b1cp-86f, 0x1.6ce206p-27f, 0.0f, 0.0f,
     0x1.5bfccp-101f, 0.0f, 0x1.231572p-24f, 0x1.cdd4e4p-35f, 0x1.dba30ep-74f,
     0x1.a5a126p-17f, 0x1.dfa032p-70f, 0x1.66be38p-32f, 0x1.d38dfp-121f,
     0x1.a020f8p-15f, 0x1.17c39ep-37f, 0.0f, 0x1.586274p-28f, 0.0f, 0.0f,
     0x1.385212p-75f, 0.0f, 0.0f, 0x1.8b2028p-39f, 0.0f, 0x1.abe748p-105f,
     0x1.e8a43ap-18f, 0x1.d21d72p-118f, 0x1.1a9d78p-14f, 0.0f, 0x1.0a023ap-1f, 0.0f,
     0x1.bfdb76p-32f, 0x1.66fc08p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.384694p-89f,
     0.0f, 0x1.50f242p-65f, 0x1.a4fe24p-18f, 0.0f, 0.0f, 0x1.389872p-37f,
     0x1.6b5f4p-72f, 0x1.b8b078p-82f, 0x1.b997f6p-23f, 0.0f, 0x1.f25a62p-126f,
     0x1.71a9ecp-102f, 0.0f, 0.0f, 0.0f, 0x1.19672cp-63f, 0.0f, 0x1.d2afbap-18f, 0.0f,
     0.0f, 0x1.2e7a6cp-125f, 0x1.4def2ap-31f, 0.0f, 0.0f, 0x1.f17266p-56f, 0.0f,
     0x1.ed2b36p-24f, 0x1.8f55bep-94f, 0.0f, 0x1.bc9624p-50f, 0.0f, 0x1.580dd2p-31f,
     0x1.5b1f9ep-83f, 0.0f, 0.0f, 0x1.dd3de6p-85f, 0.0f, 0x1.6166ap-123f, 0.0f, 0.0f,
     0x1.4761f2p-9f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.944caep-1f, 0x1.bbbcc8p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebde1cp-35f, 0.0f, 0.0f, 0.0f, 0x1.f16f24p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.57a218p-120f, 0x1.5bdceap-20f, 0x1.d3991ap-2f,
     0x1.43395ap-83f, 0x1.1abf9ep-57f, 0x1.80fa94p-122f, 0.0f, 0x1.1e7cdap-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a887eep-117f, 0x1.8aed4cp-94f, 0x1.cb340ap-91f,
     0x1.679624p-32f, 0x1p0f, 0x1.f30a06p-18f, 0x1.2776p-107f, 0.0f, 0x1.6f09d8p-125f,
     0x1.c214a8p-117f, 0.0f, 0x1.8edbd2p-3f, 0.0f, 0x1.b6502ap-75f, 0x1.e8f98cp-5f,
     0x1.4c77bep-102f, 0x1.272284p-125f, 0.0f, 0x1.e10a92p-23f, 0x1.9b3d6ap-73f,
     0x1.b3352p-37f, 0x1.9321cp-85f, 0x1.aa4064p-23f, 0x1.95e4e6p-52f,
     0x1.18487ep-106f, 0.0f, 0x1.99648ep-83f, 0x1.eb30cap-125f, 0.0f, 0x1.d6a03p-45f,
     0x1.d729f2p-113f, 0x1.50e046p-68f, 0.0f, 0.0f, 0x1.8ad1ccp-87f, 0.0f, 0.0f,
     0x1.21da5p-60f, 0x1.4982ccp-33f, 0.0f, 0.0f, 0x1.acc43cp-56f, 0x1.073c1cp-3f,
     0.0f, 0x1.2ad25ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d10f8cp-47f, 0x1.1ea45ep-78f, 0.0f, 0x1.8f0f38p-8f, 0.0f, 0x1.f6ef06p-36f,
     0x1.a92dd6p-4f, 0.0f, 0.0f, 0.0f, 0x1.84ca28p-86f, 0x1.cdd08ep-105f, 0.0f, 0.0f,
     0x1.ae104p-109f, 0.0f, 0x1.c770e4p-39f, 0x1.0335a4p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acf3d2p-35f, 0x1.3f8cd8p-48f, 0x1.8de14cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.8cb4fep-64f, 0.0f, 0x1.f08b2ap-38f, 0x1.4abfa6p-101f, 0x1.ae5962p-39f, 0.0f,
     0x1.e266acp-80f, 0x1.6cbd58p-29f, 0x1.7ec9fap-24f, 0.0f, 0.0f, 0.0f,
     0x1.8aefdep-33f, 0x1.c1464ep-37f, 0x1.e50cc8p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27454ep-10f, 0x1.f03366p-65f, 0x1.e2258ep-115f, 0.0f, 0x1.84c4aap-16f,
     0.0f, 0x1.5de1a8p-28f, 0x1.d8ade6p-108f, 0x1.137766p-104f, 0x1.0a276ep-62f, 0.0f,
     0x1.4b9f56p-58f, 0.0f, 0.0f, 0.0f, 0x1.8749e8p-125f, 0.0f, 0x1.09696p-18f,
     0x1.a62c46p-43f, 0.0f, 0.0f, 0x1.2adca6p-105f, 0x1.fffc36p-94f, 0x1.96d212p-8f,
     0x1.6bb0e6p-103f, 0.0f, 0x1.ae8d58p-32f, 0x1.4acf7ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.b52012p-12f, 0x1.ee2994p-71f, 0x1.ebaba8p-1f, 0.0f, 0.0f, 0x1.d42fap-11f,
     0.0f, 0x1.66f70ep-125f, 0.0f, 0.0f, 0.0f, 0x1.507a32p-67f, 0x1.6b8638p-45f,
     0x1.6ea048p-46f, 0.0f, 0x1.865d5ep-18f, 0x1.c0956ap-67f, 0x1.24d17ep-10f, 0.0f,
     0.0f, 0x1.2d8b62p-107f, 0.0f, 0x1.35d2f6p-12f, 0.0f, 0.0f, 0x1.9f1982p-5f,
     0x1.6c6a82p-79f, 0.0f, 0x1.d8b7dcp-88f, 0x1p0f, 0x1.90502cp-94f, 0.0f,
     0x1.12dbd6p-25f, 0.0f, 0.0f, 0x1.ce52cap-53f, 0x1.874344p-120f, 0x1.f1f2c8p-81f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.223e34p-61f, 0x1.3f022p-90f, 0x1.5a0b1ap-89f,
     0x1.98d1b6p-52f, 0x1.dba98ep-110f, 0.0f, 0x1.0bc2f2p-104f, 0.0f,
     0x1.20af9ep-117f, 0x1.5d7e34p-124f, 0x1.945976p-49f, 0x1.d0dc3p-7f, 0.0f,
     0x1.755818p-10f, 0x1.d14b1p-67f, 0x1.b6589ep-19f, 0.0f, 0x1.dcd8ccp-70f,
     0x1.d82104p-24f, 0x1.9b571p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec6306p-94f, 0.0f,
     0x1.3c616ap-118f, 0.0f, 0x1.33f72ep-114f, 0.0f, 0x1.f323dcp-3f, 0x1.7997e6p-91f,
     0x1.3cdfaep-15f, 0x1.f8a6f6p-40f, 0.0f, 0x1.857238p-61f, 0x1.eaa7dp-82f, 0.0f,
     0x1.eedd46p-73f, 0x1.f61d9ep-7f, 0x1.7ec5c4p-20f, 0.0f, 0x1.c27532p-32f, 0.0f,
     0.0f, 0.0f, 0x1.8cd61p-22f, 0x1.bac6d4p-124f, 0x1.0cb18ap-6f, 0x1.71cecp-17f,
     0.0f, 0x1.0b4dc4p-123f, 0x1.7f564cp-103f, 0.0f, 0x1.8f851ep-87f, 0x1.f2d6e2p-19f,
     0x1.4f53f8p-87f, 0.0f, 0x1.47da0ap-16f, 0x1.54ad16p-47f, 0.0f, 0x1.37d3fcp-49f,
     0.0f, 0.0f, 0x1.f79f8ep-74f, 0x1.397088p-89f, 0.0f, 0.0f, 0.0f, 0x1.a2f392p-96f,
     0.0f, 0x1.29f03ap-32f, 0x1.4f72f6p-80f, 0x1.ba9b2cp-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ecbbe6p-73f, 0x1.0a1b52p-70f, 0x1.375efep-106f, 0.0f, 0x1.916c22p-27f, 0.0f,
     0x1.a2a13p-95f, 0x1.b89f44p-12f, 0.0f, 0.0f, 0.0f, 0x1.d45c14p-24f, 0.0f, 0.0f,
     0x1.fd0cc6p-125f, 0.0f, 0.0f, 0x1.68c8c8p-96f, 0x1.e4d9e4p-37f, 0.0f, 0.0f, 0.0f,
     0x1.7aaec6p-67f, 0x1.0ea162p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e7534p-5f,
     0x1.599646p-14f, 0x1.80d0acp-6f, 0.0f, 0x1.03b5bep-20f, 0x1.3bc806p-115f,
     0x1.281e2p-105f, 0.0f, 0x1.7bd338p-79f, 0x1.b6454ep-16f, 0x1.cb7bfcp-45f, 0.0f,
     0x1.9d0f68p-19f, 0.0f, 0x1.c536f4p-103f, 0.0f, 0x1.bb3632p-18f, 0.0f, 0x1p0f,
     0.0f, 0x1.54bb4ap-106f, 0x1.9a1ac6p-53f, 0x1.299378p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5155d2p-44f, 0.0f, 0x1.ffa2aap-45f, 0x1.1de436p-87f,
     0x1.3368f2p-102f, 0x1.f18af4p-42f, 0x1.dbb1e6p-47f, 0.0f, 0x1.ddfc88p-85f, 0.0f,
     0x1.5170b4p-104f, 0x1.2b0438p-5f, 0x1.bf9da4p-49f, 0x1.b97fb6p-114f,
     0x1.92ca74p-7f, 0x1.43712cp-44f, 0.0f, 0x1.e6c7cap-65f, 0x1.63f1c2p-102f, 0.0f,
     0x1.66fc1ap-32f, 0.0f, 0.0f, 0.0f, 0x1.9b8178p-125f, 0x1.95375ep-44f,
     0x1.335194p-78f, 0x1.57369ap-74f, 0x1.17b626p-25f, 0.0f, 0.0f, 0x1.e3421ap-56f,
     0x1.a35a62p-36f, 0x1.9b4a98p-10f, 0x1.203e6p-78f, 0.0f, 0x1.dbbf96p-11f, 0.0f,
     0x1.c187a2p-34f, 0.0f, 0.0f, 0x1.398daep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1b8c2p-50f, 0.0f, 0.0f, 0x1.728676p-73f, 0x1.76396p-56f, 0x1.7bbf7p-79f,
     0x1.c02b1ep-45f, 0x1.98fac4p-75f, 0.0f, 0x1.e7c8bp-1f, 0x1.5db9cp-6f, 0.0f,
     0x1.a95a84p-91f, 0.0f, 0x1.2bba32p-96f, 0.0f, 0x1.f2a916p-14f, 0.0f,
     0x1.faaa34p-88f, 0.0f, 0.0f, 0x1.ee5586p-6f, 0x1.ac8fd4p-38f, 0x1.704b08p-21f,
     0x1.b62028p-106f, 0x1.4ade14p-30f, 0.0f, 0x1.ca46bep-24f, 0x1.96ffa4p-11f, 0.0f,
     0.0f, 0x1.474362p-65f, 0x1.138106p-73f, 0x1.c081dap-113f, 0.0f, 0x1.6d9516p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f721ep-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2d20e4p-35f, 0.0f, 0x1.4d388p-26f, 0.0f, 0x1.29930cp-71f, 0.0f,
     0x1.94e926p-14f, 0x1.9f403ap-42f, 0.0f, 0.0f, 0.0f, 0x1.fad9d8p-29f,
     0x1.6c790ep-21f, 0.0f, 0x1.058c76p-104f, 0x1.2edd2ep-101f, 0.0f, 0x1.7af3bap-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e8844p-48f, 0x1.c5abd6p-118f, 0x1.9942cap-6f,
     0x1.efaaf2p-50f, 0.0f, 0x1.93f6cep-63f, 0x1.7c621cp-109f, 0x1.58cac4p-49f, 0.0f,
     0.0f, 0x1.ec10f6p-99f, 0.0f, 0.0f, 0x1.121008p-49f, 0.0f, 0x1.dba5cap-79f, 0.0f,
     0x1.3a41ep-70f, 0x1.0f422p-61f, 0x1.675df2p-64f, 0x1.e3ac36p-120f, 0.0f,
     0x1.06887ap-49f, 0.0f, 0.0f, 0.0f, 0x1.bcf5dep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.81c24ap-60f, 0.0f, 0x1.d5055cp-95f, 0x1.82a65cp-29f,
     0x1.89f10cp-30f, 0x1.b97deep-56f, 0x1.fdff6p-53f, 0x1.fabb6cp-76f,
     0x1.41ca4ap-39f, 0x1.a153bep-81f, 0x1.06e7aep-116f, 0x1.d75e12p-89f,
     0x1.3e16dcp-71f, 0x1.319446p-99f, 0.0f, 0.0f, 0x1.e77d5ep-38f, 0.0f,
     0x1.84901cp-11f, 0x1.195f6ep-85f, 0.0f, 0.0f, 0x1.5327f2p-48f, 0.0f, 0.0f,
     0x1.97735cp-20f, 0x1.fb935p-53f, 0.0f, 0x1.2349dep-94f, 0.0f, 0x1.5aa054p-17f,
     0.0f, 0x1.457412p-115f, 0.0f, 0x1.0a9fdcp-88f, 0.0f, 0x1.d0d7bap-74f, 0.0f,
     0x1.3ed66p-32f, 0.0f, 0.0f, 0.0f, 0x1.8cad7cp-53f, 0x1.30c96cp-53f,
     0x1.3fc7acp-86f, 0.0f, 0x1.8f627ep-46f, 0.0f, 0x1.fc6846p-107f, 0x1.fd3f64p-94f,
     0x1.1473e6p-41f, 0x1.a7a53ep-18f, 0x1.19915ap-85f, 0x1.ceadeep-92f, 0.0f,
     0x1.6ea2ep-117f, 0.0f, 0.0f, 0.0f, 0x1.e1fff6p-125f, 0.0f, 0.0f,
     0x1.1bc5f8p-102f, 0.0f, 0.0f, 0x1.ec96e8p-78f, 0x1.7cd4b4p-34f, 0.0f,
     0x1.1f1572p-55f, 0.0f, 0.0f, 0x1.13f57ep-52f, 0x1.c1671ep-56f, 0.0f,
     0x1.3cf72ep-120f, 0x1.d5fdd4p-20f, 0x1.fd9ef2p-19f, 0x1.203bc8p-60f, 0.0f,
     0x1.5ab69ep-33f, 0x1.52b5a2p-16f, 0x1.f9844p-39f, 0.0f, 0x1.df3ff2p-24f,
     0x1.0819f6p-87f, 0.0f, 0.0f, 0.0f, 0x1.7c4206p-17f, 0.0f, 0x1.5e649ep-92f,
     0x1.12818cp-59f, 0x1.5312e8p-124f, 0x1.29c22cp-42f, 0.0f, 0.0f, 0x1.b17624p-64f,
     0.0f, 0.0f, 0.0f, 0x1.15b294p-112f, 0x1.f386a2p-2f, 0.0f, 0x1.c7d6cap-14f, 0.0f,
     0.0f, 0.0f, 0x1.827ddp-25f, 0.0f, 0x1.41403ap-121f, 0.0f, 0x1.c3f9f2p-15f, 0.0f,
     0x1.f6c484p-59f, 0.0f, 0.0f, 0x1.e716c2p-111f, 0.0f, 0.0f, 0x1.55773ap-15f, 0.0f,
     0x1.04e046p-115f, 0.0f, 0.0f, 0x1.e98b84p-105f, 0.0f, 0.0f, 0x1.78f1f6p-116f,
     0x1.55b5dep-87f, 0x1.48646ap-79f, 0x1.286258p-62f, 0x1.bbc0e6p-111f, 0.0f, 0.0f,
     0x1.309464p-17f, 0x1.4ed844p-48f, 0.0f, 0x1.73619p-22f, 0x1.af7e26p-13f, 0.0f,
     0x1.5d550ap-60f, 0x1.7c01dep-62f, 0x1.81e20cp-106f, 0x1.35d5bap-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.430d54p-47f, 0.0f, 0x1.c99192p-63f, 0x1.475588p-54f, 0.0f,
     0x1.a06cfep-94f, 0.0f, 0x1.e5502ap-83f, 0.0f, 0.0f, 0.0f, 0x1.d9732cp-22f,
     0x1.cf8858p-27f, 0.0f, 0x1.493d3ep-109f, 0.0f, 0x1.d7cd88p-4f, 0.0f,
     0x1.b3ee9ap-47f, 0x1.65e6f6p-12f, 0x1.9e0e3p-15f, 0x1.68df06p-92f,
     0x1.26bd7cp-72f, 0x1.1a1816p-98f, 0.0f, 0x1.8f7aeep-92f, 0x1.0d29cp-125f, 0.0f,
     0x1.bdd09ep-39f, 0x1.6e7eb4p-34f, 0.0f, 0.0f, 0x1.2e169cp-37f, 0.0f,
     0x1.1d088ep-66f, 0.0f, 0x1.461b28p-109f, 0.0f, 0.0f, 0x1.26288cp-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.04db7ep-101f, 0.0f, 0x1.6bf8fp-96f, 0x1.9f32cep-88f,
     0.0f, 0.0f, 0x1.d5e5b4p-122f, 0x1.e1f088p-96f, 0.0f, 0.0f, 0x1.802beep-31f,
     0x1.9b2ba4p-88f, 0x1.edfb82p-21f, 0x1.0396f4p-49f, 0x1.0a485p-30f,
     0x1.d7c0d4p-124f, 0x1.d1f95ap-63f, 0.0f, 0x1.a996acp-55f, 0.0f, 0x1.8ce134p-26f,
     0.0f, 0x1.837e3cp-78f, 0x1.bf7e92p-40f, 0x1.8cf524p-25f, 0.0f, 0x1.8d28c4p-3f,
     0.0f, 0.0f, 0x1.4d5f7ep-113f, 0x1.8ac85ap-98f, 0.0f, 0x1.fbc2ecp-55f,
     0x1.babc38p-77f, 0.0f, 0.0f, 0x1.ff1bc4p-10f, 0x1.b9e9f4p-20f, 0x1.b9ff4ep-14f,
     0.0f, 0.0f, 0x1.933da6p-72f, 0.0f, 0.0f, 0x1.4c768ap-113f, 0x1.ddd4e8p-21f,
     0x1.31efa8p-46f, 0x1.e6955p-102f, 0.0f, 0.0f, 0x1.f70328p-56f, 0x1.bb9acap-124f,
     0x1.0e722ap-51f, 0.0f, 0.0f, 0x1.5a0dbep-11f, 0x1.c7ca7p-109f, 0x1.197c4p-19f,
     0.0f, 0x1.5ae0d2p-13f, 0x1.b2a3d8p-79f, 0.0f, 0.0f, 0x1.c4600cp-3f,
     0x1.3c4e32p-50f, 0.0f, 0.0f, 0x1.23ed32p-80f, 0x1.9f7e62p-74f, 0.0f, 0.0f,
     0x1.8c3908p-50f, 0x1.1eaf1ap-103f, 0.0f, 0.0f, 0.0f, 0x1.77ca66p-107f,
     0x1.38c142p-89f, 0x1.255c16p-97f, 0x1.0688dep-34f, 0x1.60f4dap-101f,
     0x1.ee824ap-101f, 0x1.0107d6p-91f, 0.0f, 0x1.9dece4p-35f, 0x1.719798p-52f, 0.0f,
     0x1.01ec0ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40f38p-82f, 0x1.ecb72ap-28f, 0.0f,
     0.0f, 0.0f, 0x1.e8fca2p-84f, 0x1.73ed6p-102f, 0.0f, 0x1.43257p-65f, 0.0f,
     0x1.6ae352p-43f, 0x1.2dcafep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f37bep-56f,
     0.0f, 0.0f, 0x1.80b18ap-54f, 0.0f, 0x1.1cbe7p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5693fap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1236eep-57f, 0.0f, 0x1.42a132p-100f,
     0.0f, 0x1.46d29cp-19f, 0x1.09234ap-45f, 0x1.872d92p-118f, 0x1.8b3d46p-5f,
     0x1.632c6p-123f, 0x1.7bb65ep-84f, 0x1.75ee9ap-102f, 0x1.586672p-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f2437ap-47f, 0x1.bbba82p-9f, 0.0f, 0x1.582e28p-107f, 0.0f,
     0x1.c930dp-66f, 0.0f, 0x1.e995ccp-42f, 0x1.743a92p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.abc3f4p-17f, 0.0f, 0x1.66ada2p-102f, 0.0f, 0x1.43bb34p-84f, 0.0f,
     0x1.87cc6p-66f, 0.0f, 0x1.f95948p-43f, 0x1.775c52p-69f, 0.0f, 0.0f,
     0x1.b4437ap-124f, 0x1.563f26p-79f, 0x1.e578a8p-98f, 0.0f, 0.0f, 0x1.c8f288p-17f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x4_t_2 global_bench_acc;
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
        Sleef_float32x4_t_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef_float32x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef_float32x4_t_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef_float32x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincospif4_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_sincospif4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincospif4_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
