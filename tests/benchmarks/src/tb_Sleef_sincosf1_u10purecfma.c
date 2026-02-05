/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf1_u10purecfma.c --function \
 *     Sleef_sincosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.5ae124p-95f, 0x1.7f8e4ep-32f, 0x1.4f2338p-91f, 0x1.277514p-32f,
     0x1.b5501cp-31f, 0.0f, 0x1.b100c8p-41f, 0.0f, 0.0f, 0.0f, 0x1.2bc1dep-72f, 0.0f,
     0x1.7a770ap-27f, 0.0f, 0x1.aa6efap-15f, 0.0f, 0.0f, 0x1.4090f4p-64f,
     0x1.d23804p-44f, 0x1.5b249ep-82f, 0.0f, 0x1.1c9a4ep-99f, 0x1p0f,
     0x1.7be7d2p-117f, 0x1.495f86p-115f, 0x1.d9477ep-95f, 0x1.8eccdap-79f,
     0x1.d93ad6p-101f, 0.0f, 0x1.d9f73cp-59f, 0x1.326a1ep-103f, 0.0f, 0x1.ce58ap-104f,
     0x1p0f, 0.0f, 0x1.c45d7p-88f, 0x1.7d50a2p-61f, 0x1.32d294p-10f, 0x1.964528p-78f,
     0.0f, 0x1.ea3fb2p-125f, 0x1.06eeb8p-112f, 0x1.ca014cp-80f, 0x1.3fc32p-45f, 0.0f,
     0x1.c046dcp-35f, 0x1.3f1e24p-39f, 0x1.3b601p-49f, 0x1.33e514p-114f, 0.0f, 0.0f,
     0x1.88e8b6p-17f, 0x1.a957c4p-29f, 0.0f, 0.0f, 0x1.f8eacp-57f, 0x1.2e1c98p-23f,
     0x1.5bc8bp-7f, 0x1.361fap-37f, 0.0f, 0.0f, 0.0f, 0x1.272064p-35f,
     0x1.d9d90ap-85f, 0x1.03c96ap-23f, 0x1.e2fbeep-6f, 0.0f, 0.0f, 0.0f,
     0x1.6c478ep-50f, 0x1.683fd4p-121f, 0x1.75d4cp-62f, 0x1.982622p-91f,
     0x1.f9a2a2p-50f, 0x1.dcfc1p-119f, 0.0f, 0x1.9eb7f4p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.688d0ap-113f, 0x1.3ed946p-86f, 0x1.8b142cp-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.43af2ep-67f, 0x1.4695f8p-115f, 0.0f, 0x1.350bdap-108f,
     0x1.3f903cp-79f, 0.0f, 0x1.2b467cp-70f, 0x1.4282fap-65f, 0.0f, 0x1.c7618ap-100f,
     0x1.ba666ap-18f, 0.0f, 0x1.93c45ap-52f, 0x1.025f4cp-64f, 0.0f, 0x1.63b13ep-32f,
     0.0f, 0x1.accebp-14f, 0x1.cd061ap-118f, 0.0f, 0x1.25ccc4p-94f, 0.0f,
     0x1.69df58p-35f, 0x1.f8f4bep-89f, 0.0f, 0x1.bc8b78p-25f, 0.0f, 0x1.5b0dccp-5f,
     0.0f, 0x1.3bb564p-40f, 0.0f, 0x1.6a99d2p-15f, 0.0f, 0x1.eba43ap-106f,
     0x1.6124d6p-36f, 0x1.3e2d32p-82f, 0x1.3aa08p-44f, 0.0f, 0.0f, 0x1.ed69f2p-103f,
     0.0f, 0.0f, 0.0f, 0x1.b4f4acp-96f, 0.0f, 0x1.45bee8p-8f, 0x1.640e72p-44f,
     0x1.fb7448p-65f, 0.0f, 0.0f, 0.0f, 0x1.beca8ap-20f, 0x1.06f92ep-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ad9f06p-9f, 0.0f, 0x1.257276p-71f, 0x1.4ef552p-3f,
     0x1.dc9a28p-80f, 0.0f, 0x1.20dad8p-105f, 0.0f, 0x1.50818p-90f, 0.0f,
     0x1.3622p-24f, 0.0f, 0.0f, 0.0f, 0x1.f6ecd4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee8acp-53f, 0x1.a6fc58p-14f, 0x1.4f810cp-27f, 0x1.71a342p-124f,
     0x1.f48d2cp-29f, 0.0f, 0x1.4c8172p-15f, 0x1.a39dfcp-28f, 0x1.7d24b8p-80f,
     0x1.8fb178p-121f, 0x1.8b61e6p-68f, 0x1.9a23ccp-94f, 0x1.54b6bep-6f,
     0x1.a221dcp-30f, 0x1.748102p-72f, 0.0f, 0.0f, 0x1.805c74p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ad4e24p-124f, 0x1.3ec74p-91f, 0.0f, 0.0f, 0x1.b17f82p-81f,
     0.0f, 0x1.370ea2p-14f, 0.0f, 0x1.96eb94p-102f, 0.0f, 0x1.7925d4p-56f, 0.0f,
     0x1.6133bp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a568ep-59f, 0.0f,
     0x1.22bd18p-66f, 0.0f, 0x1.d0763ep-23f, 0x1.42da26p-46f, 0x1.3f239p-92f,
     0x1.f1a09ap-103f, 0.0f, 0.0f, 0x1.c64866p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d67d4p-80f, 0x1.9591d4p-113f, 0x1.e8f66ap-58f, 0.0f, 0x1.c5ce98p-125f, 0.0f,
     0.0f, 0.0f, 0x1.80454p-80f, 0x1.f94e06p-100f, 0.0f, 0x1.b6abc2p-68f,
     0x1.ed59fep-16f, 0.0f, 0x1.4252bcp-71f, 0.0f, 0.0f, 0x1.3ede0cp-102f,
     0x1.772fb6p-53f, 0.0f, 0x1.882cfap-109f, 0x1.d1e838p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ed3c0cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f42c08p-21f, 0.0f,
     0x1.51653ep-57f, 0x1.ef6a7p-30f, 0.0f, 0.0f, 0.0f, 0x1.3363b6p-50f, 0.0f, 0.0f,
     0.0f, 0x1.6375d6p-108f, 0.0f, 0.0f, 0x1.0dbfap-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46ac1ep-64f, 0x1.92687p-20f, 0.0f, 0.0f, 0x1.e32042p-88f, 0x1.e7f2eap-8f,
     0.0f, 0x1.b369a6p-116f, 0x1.b1d5b6p-33f, 0.0f, 0x1.b22f2ap-107f, 0.0f,
     0x1.cb4152p-119f, 0x1.bfe422p-32f, 0.0f, 0x1.76cc68p-61f, 0.0f, 0x1.29c286p-71f,
     0x1.923956p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29f584p-1f, 0x1.f5ce34p-71f,
     0x1.569fc6p-101f, 0x1.c07536p-28f, 0x1.71c7d4p-89f, 0.0f, 0x1.e08ebcp-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.420ca2p-71f, 0.0f, 0x1.c627a4p-85f, 0.0f,
     0x1.e8ca52p-35f, 0x1.3aa9b2p-55f, 0x1.18bcbp-10f, 0.0f, 0x1.6b7508p-88f,
     0x1.df6acap-122f, 0x1.3bf8b6p-27f, 0.0f, 0x1.5f56aap-70f, 0.0f, 0x1.d81658p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ab512p-98f, 0x1.1696a8p-103f, 0.0f,
     0x1.234624p-20f, 0x1.34d49ap-120f, 0.0f, 0x1.16cc7cp-33f, 0x1.6f8e76p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c68ap-35f, 0x1.818d5ep-120f, 0x1.c300fep-47f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.831168p-70f, 0.0f, 0.0f, 0x1.4788b2p-72f,
     0x1.196a4ap-55f, 0x1.39f236p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d876p-29f,
     0x1.39023cp-62f, 0x1.031f58p-30f, 0.0f, 0x1.f49fe2p-126f, 0x1.ad24d4p-83f,
     0x1.2f401ap-65f, 0.0f, 0x1.1feb1cp-122f, 0x1.b9091ap-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.89ee68p-20f, 0x1.465c8p-86f, 0x1.7ba566p-65f,
     0x1.d19722p-98f, 0x1.16767p-71f, 0.0f, 0x1.3609d6p-122f, 0.0f, 0x1.718d14p-18f,
     0.0f, 0x1.190d46p-57f, 0.0f, 0x1.bcd44ap-10f, 0x1.e7fe5cp-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aff444p-82f, 0.0f, 0.0f, 0x1.867ep-75f, 0.0f, 0x1.dbe1cep-54f,
     0x1.d9730ep-100f, 0x1.93c97p-33f, 0.0f, 0x1.2ce6fep-114f, 0x1.25b58ep-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a555p-2f, 0x1.e39bfap-96f, 0.0f, 0x1.b62fa4p-97f,
     0x1.032306p-6f, 0x1.67f216p-65f, 0x1.ed8142p-49f, 0.0f, 0.0f, 0x1.9247cap-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.febffep-105f, 0.0f, 0.0f, 0x1.de5cbp-106f, 0.0f,
     0x1.5e9578p-45f, 0.0f, 0x1.216c2ep-123f, 0x1.f96626p-72f, 0x1.7a6bdp-54f,
     0x1.94090ap-17f, 0.0f, 0.0f, 0x1.78b938p-11f, 0x1.a282e8p-49f, 0.0f,
     0x1.0ffa46p-15f, 0x1.6f70c4p-5f, 0x1.7fd10cp-58f, 0x1.12dd5ap-41f,
     0x1.ebe8d8p-12f, 0.0f, 0x1.8793cp-103f, 0x1.3d4cdcp-87f, 0x1.956d84p-50f, 0.0f,
     0x1.3f1d44p-117f, 0.0f, 0.0f, 0.0f, 0x1.6e971ap-115f, 0x1.ea13a6p-16f,
     0x1.a98d68p-119f, 0x1.7ed64ep-59f, 0x1.53e18ap-122f, 0.0f, 0.0f, 0x1.a8f648p-80f,
     0.0f, 0x1.82e96cp-124f, 0.0f, 0.0f, 0x1.43f478p-116f, 0.0f, 0x1.be6a98p-67f,
     0x1.178efap-20f, 0.0f, 0x1.72bfbap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b77088p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.93e6dap-41f, 0.0f, 0.0f, 0.0f, 0x1.73f106p-19f, 0.0f, 0x1.0843c2p-42f,
     0x1.4c603ap-2f, 0x1.d70cfcp-31f, 0.0f, 0x1.bc090ep-95f, 0.0f, 0x1.fa917ap-98f,
     0.0f, 0.0f, 0x1.d7f58ap-71f, 0x1.0d62b8p-113f, 0x1.ac3932p-1f, 0.0f,
     0x1.8e14aep-100f, 0.0f, 0.0f, 0x1.fd25eap-92f, 0x1.c113bep-40f, 0.0f, 0.0f,
     0x1.7e8b4p-64f, 0.0f, 0.0f, 0x1.1d62dap-122f, 0.0f, 0.0f, 0x1.5cd164p-69f,
     0x1.5dc816p-99f, 0x1.640f22p-30f, 0x1.d9b5eap-62f, 0.0f, 0.0f, 0.0f,
     0x1.b95148p-20f, 0x1.e06fc6p-20f, 0.0f, 0x1.2c9dfap-84f, 0x1.edf87ep-54f, 0.0f,
     0.0f, 0x1.0984fep-83f, 0x1.995046p-4f, 0.0f, 0x1.36c85ap-71f, 0.0f, 0.0f, 0.0f,
     0x1.267b36p-11f, 0x1.1a326ep-21f, 0x1.f9459cp-4f, 0.0f, 0.0f, 0x1.326246p-17f,
     0x1.b32044p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f546f8p-5f, 0.0f,
     0x1.2f02bcp-118f, 0x1.4d668ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e047b8p-84f, 0.0f,
     0x1.f10e36p-87f, 0x1.050916p-52f, 0x1.c57d04p-22f, 0.0f, 0.0f, 0x1.c81494p-35f,
     0.0f, 0.0f, 0x1.f40252p-7f, 0x1.fa5cf8p-24f, 0x1.e96ef6p-16f, 0x1.04be12p-118f,
     0x1.f7bfa6p-120f, 0.0f, 0.0f, 0x1.bd80cep-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.128694p-70f, 0x1.288902p-121f, 0x1.2e1de6p-39f, 0x1.2c68a4p-19f, 0.0f,
     0x1.c95bb8p-116f, 0.0f, 0.0f, 0.0f, 0x1.8c79cp-56f, 0.0f, 0x1.012b26p-8f,
     0x1.c5e74cp-20f, 0x1.9cd41p-124f, 0x1.aee54ap-53f, 0x1.a60adcp-74f,
     0x1.25afd6p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b3c5cp-34f,
     0x1.422e3ep-109f, 0x1.e4865cp-87f, 0x1.2e4abp-10f, 0x1.b602ecp-82f,
     0x1.8ccc5ep-102f, 0x1.b7f798p-51f, 0x1.18e5eep-15f, 0.0f, 0.0f, 0x1.73624ap-123f,
     0x1.837adp-30f, 0.0f, 0x1.e3fdacp-7f, 0.0f, 0x1.b0985ap-18f, 0.0f, 0.0f, 0.0f,
     0x1.7c607p-85f, 0.0f, 0x1.a7e3fap-9f, 0.0f, 0.0f, 0x1.bd3bd2p-63f,
     0x1.d6366ep-83f, 0.0f, 0.0f, 0x1.651d3ep-70f, 0.0f, 0x1.cb37bcp-97f, 0.0f,
     0x1.02e6f2p-120f, 0.0f, 0.0f, 0x1.505deep-65f, 0.0f, 0x1.c053fap-108f,
     0x1.8928aap-81f, 0.0f, 0x1.caa1dep-41f, 0.0f, 0x1.36615ep-115f, 0x1.329ce6p-45f,
     0.0f, 0x1.44ec5ep-58f, 0.0f, 0x1.729b14p-53f, 0.0f, 0x1.7d81eap-57f, 0.0f,
     0x1.95bd8ep-115f, 0x1.3e5d7ep-47f, 0.0f, 0.0f, 0.0f, 0x1.2ed09p-17f, 0.0f, 0.0f,
     0x1.3f0a18p-15f, 0x1.5909f4p-118f, 0x1.168442p-95f, 0x1.90a538p-22f, 0.0f, 0.0f,
     0x1.91ee42p-123f, 0x1.858474p-124f, 0.0f, 0.0f, 0x1.2a7a92p-58f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.212e76p-30f, 0.0f, 0.0f, 0.0f, 0x1.0a5b3ep-64f, 0.0f,
     0x1.6bb798p-45f, 0x1.1419dp-18f, 0.0f, 0x1.4314d4p-124f, 0.0f, 0x1.36b8f8p-45f,
     0.0f, 0x1.17432cp-42f, 0x1.dadd68p-119f, 0.0f, 0.0f, 0.0f, 0x1.4a58acp-11f, 0.0f,
     0.0f, 0x1.85034cp-59f, 0x1.e08b16p-110f, 0x1.88a1f2p-30f, 0x1.95a574p-43f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.4bf132p-74f, 0x1.6cde94p-104f, 0.0f, 0x1.c7b656p-109f,
     0x1.a9f10cp-116f, 0x1.e15892p-15f, 0x1.73ca9p-116f, 0x1.4cbcbap-11f,
     0x1.3efc82p-109f, 0x1.345a4cp-106f, 0x1.7ed7bp-23f, 0x1.cd03c2p-26f,
     0x1.b3f5fcp-80f, 0.0f, 0x1.eaf642p-1f, 0.0f, 0.0f, 0.0f, 0x1.817436p-89f,
     0x1.c04f8ap-112f, 0x1.cbb2f6p-72f, 0.0f, 0x1.888db8p-56f, 0x1.9b88bep-90f, 0.0f,
     0.0f, 0x1.0b406p-120f, 0x1.9124p-4f, 0.0f, 0x1.5342dcp-21f, 0x1.397f44p-22f,
     0x1.e0b85ep-45f, 0x1.efcb0ep-61f, 0x1.82705cp-59f, 0.0f, 0x1.18de74p-125f, 0.0f,
     0x1.bf9842p-71f, 0x1.4f4e26p-74f, 0x1.e01374p-105f, 0.0f, 0x1.046a24p-32f,
     0x1.63d488p-69f, 0x1.d6f858p-24f, 0x1.a2b096p-89f, 0x1.e79b2ap-76f,
     0x1.0d8502p-91f, 0x1.f1d624p-2f, 0x1.1f0228p-119f, 0.0f, 0x1.4adebep-19f,
     0x1.49509cp-66f, 0x1.ab1b5ap-77f, 0x1.825c6ap-10f, 0x1.d43c98p-45f,
     0x1.40f3aap-64f, 0x1.8c35bep-22f, 0.0f, 0.0f, 0x1.59facep-17f, 0.0f,
     0x1.b79114p-38f, 0x1.7188dcp-28f, 0x1.36feaap-87f, 0x1.308d0cp-52f, 0.0f, 0.0f,
     0.0f, 0x1.88945ap-77f, 0.0f, 0x1.806ae6p-36f, 0.0f, 0x1.c57e84p-113f, 0.0f, 0.0f,
     0x1.a3a0f4p-28f, 0x1.68f306p-68f, 0.0f, 0.0f, 0.0f, 0x1.cebdfcp-67f, 0.0f, 0.0f,
     0.0f, 0x1.413faep-9f, 0.0f, 0x1.10f3e8p-54f, 0.0f, 0.0f, 0.0f, 0x1.a0acf6p-116f,
     0x1.2e209ep-88f, 0.0f, 0.0f, 0x1.2f76cep-61f, 0.0f, 0.0f, 0x1.8dfd98p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e62ep-97f, 0x1.1de1ecp-18f, 0x1.44c226p-110f, 0.0f,
     0x1.6fb71ep-106f, 0.0f, 0.0f, 0x1.65a1e8p-17f, 0x1.78bab6p-62f, 0x1.126686p-122f,
     0.0f, 0.0f, 0.0f, 0x1.996b6ep-37f, 0.0f, 0x1.de1a0ap-61f, 0.0f, 0.0f,
     0x1.c51826p-48f, 0.0f, 0x1.30bfa6p-8f, 0.0f, 0x1.8a900ap-14f, 0.0f,
     0x1.7098d8p-26f, 0.0f, 0.0f, 0x1.ad4f44p-64f, 0.0f, 0.0f, 0x1.bdf1c6p-80f,
     0x1.22a72p-66f, 0.0f, 0.0f, 0.0f, 0x1.69e622p-29f, 0.0f, 0.0f, 0x1.b4c696p-104f,
     0x1.66932p-25f, 0x1.148126p-48f, 0x1.944d5ep-43f, 0x1.06f57p-118f, 0.0f,
     0x1.f05652p-109f, 0.0f, 0.0f, 0x1.fd8ae6p-5f, 0.0f, 0x1.5b7806p-80f,
     0x1.c0562ap-54f, 0.0f, 0x1.3e5fc6p-26f, 0x1.eb755ep-1f, 0x1.cb9f5ap-70f,
     0x1.d07b98p-48f, 0.0f, 0.0f, 0x1.f9389p-102f, 0.0f, 0x1.9784a6p-78f, 0.0f, 0.0f,
     0x1.4a2292p-65f, 0.0f, 0.0f, 0x1.7fb994p-117f, 0x1.75c108p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.24c9a2p-123f, 0x1.79d60cp-19f, 0.0f, 0.0f, 0.0f,
     0x1.6ab042p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de2774p-24f, 0x1.78ac48p-68f,
     0.0f, 0.0f, 0.0f, 0x1.b6d9b4p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56e67ap-83f, 0x1.e2e758p-82f, 0.0f, 0x1.d6fee6p-4f, 0.0f, 0x1.38d96cp-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ce82ep-73f, 0.0f, 0x1.0e3944p-7f, 0.0f,
     0x1.d36156p-88f, 0.0f, 0x1.a74cd4p-51f, 0x1.60ec56p-124f, 0x1.f0ac46p-105f, 0.0f,
     0.0f, 0.0f, 0x1.41b3a6p-33f, 0.0f, 0x1.225f22p-58f, 0x1.778f76p-109f, 0.0f, 0.0f,
     0.0f, 0x1.17e888p-16f, 0x1.698e3p-35f, 0x1.39fef8p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22421cp-73f, 0x1.06d046p-14f, 0.0f, 0x1.d9910ap-105f, 0.0f, 0x1.327942p-34f,
     0x1.c0b1eep-62f, 0.0f, 0.0f, 0.0f, 0x1.8b319ap-118f, 0x1.b3da7ep-2f,
     0x1.07c20ep-5f, 0x1.f9d8a6p-6f, 0x1.adcf2ap-124f, 0.0f, 0.0f, 0x1.9a8602p-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5047ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c23ca6p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d90c2p-64f,
     0.0f, 0.0f, 0x1.05523cp-75f, 0.0f, 0x1.e0778cp-29f, 0x1.31081p-107f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincosf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincosf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosf1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
