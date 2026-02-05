/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf4_u35avx2128.c --function \
 *     Sleef_finz_sincosf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.f968a4p-20f, 0.0f, 0.0f, 0x1p0f, 0x1p0f, 0.0f, 0x1.b6a9b2p-108f, 0.0f, 0.0f,
     0.0f, 0x1.973c3p-58f, 0.0f, 0x1.f64174p-111f, 0.0f, 0.0f, 0x1.3e4c1ap-76f,
     0x1.1fe5fap-30f, 0.0f, 0x1.c19c0cp-21f, 0x1.af4042p-80f, 0x1.1f374cp-110f,
     0x1.0cb40ap-68f, 0.0f, 0x1.17430ap-1f, 0.0f, 0.0f, 0x1.039a44p-13f,
     0x1.c2da7ap-34f, 0.0f, 0x1.003ae2p-12f, 0x1.700d92p-40f, 0x1.d14f02p-8f,
     0x1.d57558p-70f, 0x1.b8b186p-114f, 0.0f, 0.0f, 0x1.a2340ap-76f, 0.0f,
     0x1.3f56a4p-67f, 0x1.6df8ap-4f, 0.0f, 0.0f, 0.0f, 0x1.00b016p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.e50bdep-10f, 0.0f, 0x1.f430fap-82f, 0.0f, 0.0f,
     0x1.3011dcp-104f, 0x1.d5451ep-22f, 0.0f, 0x1.adc3c8p-20f, 0.0f, 0x1.ca6c68p-76f,
     0x1.b3862p-5f, 0x1.f06d54p-22f, 0x1.b7c812p-126f, 0x1.3a05f6p-61f,
     0x1.23c6eap-110f, 0x1.b0037cp-64f, 0.0f, 0.0f, 0.0f, 0x1.c35f16p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dbd9d2p-51f, 0x1.aa28fep-125f, 0.0f, 0.0f, 0x1.d6bcd2p-37f,
     0x1.956842p-11f, 0x1.b9800ep-112f, 0x1.c7cffp-124f, 0.0f, 0x1.983ffap-75f, 0.0f,
     0.0f, 0.0f, 0x1.f92272p-110f, 0.0f, 0x1.e73bf4p-13f, 0.0f, 0x1.b53b5ap-36f,
     0x1.417b5cp-82f, 0x1.7ab992p-85f, 0x1.7ff8fep-116f, 0x1.250b8cp-125f, 0.0f, 0.0f,
     0x1.5ec62cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86eff2p-68f, 0.0f, 0.0f, 0.0f,
     0x1.485aaap-84f, 0x1.2e5cb8p-106f, 0.0f, 0x1.7d698ep-94f, 0.0f, 0x1.cc722cp-65f,
     0.0f, 0x1.9d7584p-80f, 0.0f, 0.0f, 0.0f, 0x1.2018cap-13f, 0x1.1ba346p-35f, 0.0f,
     0x1.edbb4ap-93f, 0x1.8ae66cp-90f, 0.0f, 0x1p0f, 0x1.e4a4b8p-120f, 0.0f,
     0x1.b7c6acp-110f, 0x1.ca8dc8p-113f, 0.0f, 0x1.a372bcp-82f, 0.0f, 0x1.691db8p-90f,
     0.0f, 0x1.7db2p-99f, 0.0f, 0x1.45e674p-79f, 0x1.77c5dp-41f, 0x1.233bdep-78f,
     0.0f, 0x1.159afep-116f, 0x1.9ea454p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f82bc2p-21f,
     0x1.b5ae12p-45f, 0.0f, 0x1.5cc8bp-93f, 0.0f, 0.0f, 0x1.07c24ap-69f,
     0x1.bfd6e8p-79f, 0x1.73355p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.894b4ep-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cb52cp-55f, 0x1.20ab46p-9f, 0x1.74069p-10f,
     0x1.d87478p-87f, 0x1.3e3bfep-65f, 0.0f, 0.0f, 0x1.b2b242p-111f, 0x1.13e9f4p-16f,
     0x1.915fe2p-61f, 0x1.43bc7p-21f, 0x1.38baep-71f, 0x1.1ea14cp-14f,
     0x1.36c2d6p-61f, 0x1.2f6428p-81f, 0.0f, 0.0f, 0x1.cc2e1ep-45f, 0.0f,
     0x1.8919ccp-118f, 0x1.903d1ep-13f, 0x1.feb1ap-48f, 0x1.90604p-36f, 0.0f, 0.0f,
     0x1.b5fa26p-7f, 0x1.5e8b88p-54f, 0.0f, 0.0f, 0x1.9c8a22p-124f, 0x1.6f18c4p-67f,
     0x1.a218eep-11f, 0.0f, 0.0f, 0x1.6fb24p-57f, 0x1.a1bbp-77f, 0x1.8b52fp-15f,
     0x1.aff13p-79f, 0.0f, 0.0f, 0x1.85a136p-117f, 0x1.807f72p-71f, 0.0f, 0.0f, 0.0f,
     0x1.6a293cp-116f, 0.0f, 0x1.1e3ef4p-1f, 0.0f, 0.0f, 0x1.3f7204p-39f,
     0x1.796946p-55f, 0x1.773198p-3f, 0.0f, 0x1.0d1f18p-46f, 0x1.f715aap-39f, 0.0f,
     0x1.6cc074p-105f, 0.0f, 0.0f, 0.0f, 0x1.8d011cp-54f, 0.0f, 0x1.2e5554p-26f, 0.0f,
     0x1.fa37cap-75f, 0x1.e3632p-54f, 0x1.ebb002p-125f, 0x1.9cf076p-103f,
     0x1.4622c4p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8471ep-102f, 0.0f, 0.0f,
     0x1.d9bb68p-4f, 0.0f, 0.0f, 0x1.cd4a9ep-16f, 0.0f, 0.0f, 0x1.ec177cp-28f, 0.0f,
     0.0f, 0x1.28726p-104f, 0x1.da7c54p-56f, 0x1.d1b14ep-120f, 0x1.8daa8ap-13f, 0.0f,
     0x1.3585f8p-49f, 0x1.d127d6p-66f, 0.0f, 0.0f, 0x1.d441d6p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3fe58p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8b118p-110f,
     0x1.e949bep-26f, 0x1.23f2bp-14f, 0.0f, 0x1.0670fcp-58f, 0x1.c65ad4p-103f, 0.0f,
     0x1.c80d7cp-16f, 0x1.7263f4p-46f, 0x1.7d7deep-79f, 0x1.fe8704p-70f, 0.0f,
     0x1.c3365cp-122f, 0x1.3f398p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa70eep-119f,
     0x1.135792p-36f, 0.0f, 0x1.41b716p-7f, 0x1.fd13bcp-37f, 0.0f, 0x1.e8ffcep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdd3ccp-87f, 0x1.6fda2ap-54f, 0.0f,
     0x1.bcb90ap-16f, 0.0f, 0x1.9a737cp-57f, 0x1.82b8fap-95f, 0x1.6ccb2cp-99f, 0.0f,
     0x1.964376p-48f, 0x1.5b5ccap-57f, 0.0f, 0.0f, 0x1.eb0568p-5f, 0.0f,
     0x1.5c77e6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a6658p-75f, 0x1.dd383ep-4f, 0.0f,
     0x1.0b879p-115f, 0x1.7e79acp-2f, 0x1.aca358p-110f, 0x1.aabcdp-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d27754p-31f, 0.0f, 0.0f, 0x1.175068p-85f, 0.0f, 0.0f,
     0x1.ff657ap-91f, 0.0f, 0x1.97f3f6p-70f, 0x1.93b392p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6350c8p-64f, 0.0f, 0.0f, 0.0f, 0x1.8f2062p-78f, 0x1.d7b8ap-101f, 0.0f,
     0.0f, 0.0f, 0x1.b310eep-105f, 0.0f, 0x1.cffcdcp-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bf9a52p-9f, 0.0f, 0x1.e545b2p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f0cfcp-103f, 0.0f, 0x1.fb9e6ep-25f, 0x1.8b67cap-17f, 0x1.6ed66cp-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d0c2cep-14f, 0x1.c5b0a4p-126f, 0x1.5cc074p-47f, 0.0f, 0.0f,
     0x1.175dd4p-37f, 0x1.81f564p-74f, 0.0f, 0x1.87c74p-36f, 0.0f, 0.0f,
     0x1.edffe4p-86f, 0x1.d50c36p-123f, 0.0f, 0x1.2ef458p-65f, 0.0f, 0.0f,
     0x1.d9479ep-119f, 0.0f, 0x1.314c36p-25f, 0.0f, 0.0f, 0x1.a707fep-66f,
     0x1.c22cap-65f, 0.0f, 0.0f, 0x1.a9e1f4p-41f, 0.0f, 0x1.6e5e18p-1f,
     0x1.99a30ep-20f, 0.0f, 0.0f, 0x1.989b8p-105f, 0.0f, 0x1.814a5p-20f, 0.0f,
     0x1.995aeep-86f, 0x1.533848p-49f, 0x1.fb293ep-50f, 0.0f, 0x1.0efe78p-19f, 0.0f,
     0x1.53641ep-104f, 0.0f, 0x1.0ccc0ep-49f, 0.0f, 0.0f, 0x1.641382p-67f, 0.0f, 0.0f,
     0x1.0db8bap-47f, 0.0f, 0x1.c1208ep-62f, 0.0f, 0x1.bda7c2p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cb7f76p-17f, 0x1.cea07cp-16f, 0x1.6abed8p-122f, 0.0f, 0x1.6cf8d6p-81f,
     0x1.35c6b2p-44f, 0x1.4e9caap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29d644p-102f,
     0x1.a36c1cp-103f, 0.0f, 0x1.e8205ap-33f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.8ef4bep-1f, 0.0f, 0x1.aa8772p-105f, 0x1.b8a348p-44f, 0x1.3eff92p-84f,
     0x1.6218e2p-70f, 0.0f, 0x1.3c903ap-43f, 0x1.aefd6ap-18f, 0.0f, 0x1.3ebe98p-92f,
     0.0f, 0x1.a3ad78p-77f, 0.0f, 0x1.44f066p-13f, 0.0f, 0.0f, 0.0f, 0x1.9e8a6ep-78f,
     0x1.d41d8ep-52f, 0x1.4fe6a8p-54f, 0x1.08f6a8p-27f, 0.0f, 0x1.10ff56p-67f,
     0x1.7efa34p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aad62p-74f, 0x1.a06658p-113f,
     0x1.0215cep-65f, 0x1.880bccp-66f, 0x1.981c48p-21f, 0x1.06fd7p-106f, 0.0f, 0.0f,
     0x1.a5bf7ep-15f, 0x1.5e45d2p-113f, 0.0f, 0x1.f8bfb8p-28f, 0.0f, 0x1.b3bfa2p-100f,
     0.0f, 0.0f, 0.0f, 0x1.13b0acp-110f, 0.0f, 0.0f, 0x1.999c2cp-58f, 0.0f,
     0x1.d6bdfap-79f, 0x1.f07efap-100f, 0x1.8c68f6p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cefaep-88f, 0x1.d5428p-67f, 0.0f, 0.0f, 0.0f, 0x1.25c7dp-18f, 0.0f, 0.0f,
     0.0f, 0x1.1b8bdp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63c084p-83f,
     0x1.b89fd6p-123f, 0.0f, 0.0f, 0.0f, 0x1.5cc502p-18f, 0x1.5e11p-3f,
     0x1.daf15ap-65f, 0.0f, 0.0f, 0.0f, 0x1.44c814p-109f, 0x1.e8b1p-126f,
     0x1.026f6cp-4f, 0.0f, 0x1.b4c3eap-23f, 0.0f, 0.0f, 0.0f, 0x1.4854d4p-6f,
     0x1.6fe576p-113f, 0.0f, 0x1.8898dap-47f, 0.0f, 0.0f, 0.0f, 0x1.306344p-5f, 0.0f,
     0x1.ce5592p-35f, 0x1.7a0e84p-84f, 0x1.9215aap-7f, 0x1.23281p-56f,
     0x1.7fb0bap-75f, 0.0f, 0x1.81fffcp-16f, 0.0f, 0.0f, 0x1.0641d6p-28f, 0.0f, 0.0f,
     0.0f, 0x1.39613ap-92f, 0x1.f919c8p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ffabc2p-67f, 0.0f, 0x1.8f962ep-10f, 0x1.0f7ec8p-117f, 0.0f, 0x1.a190aep-26f,
     0.0f, 0x1.3d7aaep-52f, 0x1.995392p-41f, 0.0f, 0.0f, 0x1.b8263ep-2f,
     0x1.ee1142p-50f, 0x1.6de69ap-48f, 0.0f, 0.0f, 0x1.3f5e38p-98f, 0x1.7c493ep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f88378p-118f, 0x1.62130cp-58f, 0x1.02f786p-49f,
     0x1.88f618p-53f, 0x1.8c2ca6p-103f, 0.0f, 0x1.75f69ap-103f, 0.0f, 0.0f,
     0x1.ba0d04p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dce2cep-63f, 0.0f, 0x1.1823dcp-79f,
     0.0f, 0x1.67e194p-42f, 0x1.a2c4a6p-96f, 0.0f, 0.0f, 0x1.ce830ap-12f, 0.0f,
     0x1.1c4a72p-18f, 0.0f, 0x1.476f8ap-104f, 0x1.2e06fap-29f, 0.0f, 0x1.d0d95cp-114f,
     0x1.470ec4p-3f, 0x1.857aaap-60f, 0x1.ea6976p-123f, 0.0f, 0x1.fbc15ep-117f,
     0x1.92e018p-12f, 0.0f, 0x1.5c8e5ep-125f, 0.0f, 0x1.9b7328p-37f, 0.0f, 0.0f,
     0x1.ae8b88p-120f, 0.0f, 0x1.6ac184p-123f, 0x1.f98536p-118f, 0.0f, 0.0f,
     0x1.9fff84p-90f, 0.0f, 0.0f, 0.0f, 0x1.6b445ep-51f, 0.0f, 0x1.a0dadep-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.21c2bp-37f, 0.0f, 0.0f, 0.0f, 0x1.fa1b82p-117f, 0.0f,
     0.0f, 0x1.6e934ep-88f, 0.0f, 0x1.b5a14cp-34f, 0.0f, 0.0f, 0x1.390928p-34f,
     0x1.df24d4p-123f, 0x1.40178cp-91f, 0x1.ce3a3ep-82f, 0x1.29a192p-117f,
     0x1.16737p-45f, 0.0f, 0.0f, 0x1.fc0228p-89f, 0.0f, 0.0f, 0x1.f0ee94p-92f,
     0x1.f622dcp-116f, 0x1.734f6p-22f, 0.0f, 0x1.6188c4p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0690a8p-44f, 0x1.68106ep-95f, 0x1.b6dd1cp-86f, 0.0f, 0x1.a40c8ep-103f,
     0x1.be9e9ap-45f, 0x1.a70302p-95f, 0x1.a2db36p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01a432p-122f, 0.0f, 0x1.3a51e4p-24f, 0.0f, 0x1.fca92ep-63f, 0x1.55dc9p-70f,
     0x1.89c5aap-5f, 0x1.aa1216p-68f, 0x1.cafdfcp-18f, 0x1.6d05f4p-8f,
     0x1.76f2bep-35f, 0.0f, 0x1.680f64p-54f, 0.0f, 0x1.2467e8p-94f, 0x1.bd0c4ap-103f,
     0x1.6db5eep-12f, 0.0f, 0.0f, 0x1.a2426ep-87f, 0.0f, 0x1.dfb1a8p-47f, 0.0f, 0.0f,
     0x1.19204ap-110f, 0x1.b70482p-75f, 0.0f, 0.0f, 0.0f, 0x1.736e6p-98f,
     0x1.d1903p-74f, 0x1.df7b7p-93f, 0.0f, 0.0f, 0.0f, 0x1.8d8dc4p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6372f8p-100f, 0x1.13a972p-110f, 0x1.c368f4p-121f,
     0x1.178c76p-71f, 0x1.932c6ep-120f, 0x1.07433cp-100f, 0x1.743388p-118f, 0.0f,
     0.0f, 0.0f, 0x1.7a4e92p-48f, 0x1.5066ecp-84f, 0.0f, 0x1.81d5p-95f, 0.0f, 0.0f,
     0x1.26d7bap-29f, 0.0f, 0x1.0e774ap-3f, 0x1.9bccecp-85f, 0x1.0baa4p-38f,
     0x1.e5435ap-7f, 0.0f, 0x1.f4b6c4p-82f, 0x1.3c14cap-115f, 0.0f, 0.0f,
     0x1.1b6058p-43f, 0.0f, 0.0f, 0x1.9bb0d4p-89f, 0x1.ef55a4p-99f, 0.0f,
     0x1.356e46p-2f, 0x1.94e9bcp-63f, 0x1.e3846ap-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.969728p-89f, 0x1.f2a0ep-67f, 0.0f, 0x1.51fe84p-10f, 0.0f, 0.0f, 0.0f,
     0x1.99347cp-42f, 0.0f, 0.0f, 0x1.e8814ep-22f, 0x1.5b466p-97f, 0x1.51d86ep-18f,
     0x1.9ce1f8p-36f, 0x1.eb3bc4p-15f, 0x1.3391acp-7f, 0.0f, 0.0f, 0x1.5b0514p-63f,
     0x1.b6f42cp-55f, 0x1.6da866p-73f, 0x1.e58f6ep-13f, 0x1.60acfp-113f,
     0x1.5578cp-19f, 0.0f, 0x1.9f3878p-6f, 0.0f, 0x1.2aefcap-43f, 0.0f, 0.0f, 0.0f,
     0x1.7063bcp-51f, 0x1.81e378p-61f, 0.0f, 0.0f, 0x1.70f766p-85f, 0x1.86cbacp-30f,
     0x1.e09eaap-109f, 0x1.8d3e1ep-101f, 0.0f, 0x1.f929fep-22f, 0x1.3925a6p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d4972p-21f, 0.0f, 0.0f,
     0x1.fe9916p-1f, 0x1.b8318p-107f, 0.0f, 0.0f, 0.0f, 0x1.cb5db8p-90f,
     0x1.138c0ep-35f, 0x1.bc0d86p-77f, 0.0f, 0x1.a9c7c2p-110f, 0.0f, 0x1.b5f0c8p-48f,
     0.0f, 0.0f, 0.0f, 0x1.ffc0b6p-14f, 0x1.3f37e2p-83f, 0.0f, 0x1.fc8894p-64f,
     0x1.2c91ep-77f, 0.0f, 0.0f, 0.0f, 0x1.5c5026p-71f, 0x1.0e4332p-99f,
     0x1.17f0c8p-53f, 0x1.d60ba8p-118f, 0.0f, 0x1.8a7f58p-126f, 0x1.173c9p-36f,
     0x1.17d44p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.faee74p-123f, 0x1.901466p-4f,
     0x1.eb2a26p-75f, 0x1.3f3c62p-51f, 0x1.4a5f72p-83f, 0x1.d79b9p-12f,
     0x1.7ad54p-71f, 0x1.bcdbcep-124f, 0x1.494266p-3f, 0.0f, 0.0f, 0.0f,
     0x1.846d44p-7f, 0x1.6f4ce8p-76f, 0.0f, 0.0f, 0x1.72a89p-99f, 0.0f,
     0x1.c8130ap-117f, 0.0f, 0x1.cedc8ep-3f, 0.0f, 0x1.bc2dbcp-106f, 0.0f,
     0x1.143d4ep-91f, 0x1.9eaa22p-71f, 0x1.634ba8p-32f, 0x1.57f224p-50f,
     0x1.3f43dep-61f, 0x1.f265e8p-17f, 0x1.e69ab8p-1f, 0.0f, 0x1.71c51ep-72f, 0.0f,
     0x1.01570cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16429p-18f, 0x1.71c6dep-124f,
     0x1.67f37ep-102f, 0.0f, 0x1.545076p-49f, 0x1.d04ceap-92f, 0x1.ad649p-16f, 0.0f,
     0.0f, 0.0f, 0x1.fd312ap-28f, 0x1.03fd1ap-53f, 0x1.4974d6p-98f, 0.0f,
     0x1.3a54eap-101f, 0.0f, 0x1.31724ap-88f, 0x1.16af96p-18f, 0.0f, 0x1.0ddbf2p-113f,
     0x1.7f5ed4p-109f, 0x1.df4fbap-7f, 0.0f, 0.0f, 0x1.9947fp-31f, 0x1.87e288p-54f,
     0x1.6b7e04p-120f, 0x1.2b975ep-56f, 0x1.dc1306p-77f, 0x1.d91156p-51f,
     0x1.e159d8p-26f, 0x1.a7e8fep-106f, 0x1.f500cap-87f, 0.0f, 0.0f, 0x1.0e636p-91f,
     0.0f, 0.0f, 0.0f, 0x1.435d7p-77f, 0.0f, 0.0f, 0x1.4a75fp-1f, 0.0f,
     0x1.64895ep-35f, 0.0f, 0x1.950db8p-21f, 0x1.50e102p-114f, 0x1.caa062p-76f,
     0x1.c4f55cp-44f, 0.0f, 0x1.78e9f8p-56f, 0.0f, 0.0f, 0.0f, 0x1.e0ff08p-45f, 0.0f,
     0.0f, 0x1.1a06b8p-73f, 0x1.9f6d38p-66f, 0x1.5f3144p-102f, 0x1.91fd9cp-83f, 0.0f,
     0x1.7a76aap-1f, 0x1.67abe6p-53f, 0.0f, 0x1.c181fcp-39f, 0.0f, 0x1.cd5366p-100f,
     0x1.e17042p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4894ap-93f, 0x1.7cdee4p-67f,
     0x1.44e96p-74f, 0x1.22fe16p-102f, 0.0f, 0x1.34c1a2p-92f, 0.0f, 0x1.a77f94p-90f,
     0x1.453fc8p-58f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincosf4_u35avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
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
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincosf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincosf4_u35avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
