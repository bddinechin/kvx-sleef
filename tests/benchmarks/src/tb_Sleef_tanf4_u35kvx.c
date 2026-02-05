/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf4_u35kvx.c --function Sleef_tanf4_u35kvx --headers \
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
     0x1.6bf178p-9f, 0x1.8baf54p-91f, 0.0f, 0.0f, 0x1.da1cdap-96f, 0.0f,
     0x1.5929d2p-22f, 0x1.61150ep-35f, 0.0f, 0x1.c08c62p-97f, 0x1.cd2472p-50f, 0.0f,
     0x1.8a1192p-72f, 0.0f, 0x1.1d3dcp-64f, 0x1.e28bf6p-30f, 0.0f, 0x1.24dfacp-126f,
     0.0f, 0x1.437bdp-96f, 0x1.2522f8p-17f, 0.0f, 0x1.68e33ep-27f, 0x1.923dfep-61f,
     0.0f, 0x1.c9c2bep-40f, 0x1.c8b276p-112f, 0x1.6d0cb2p-85f, 0x1.e01c68p-69f,
     0x1.f0ba26p-78f, 0x1.c82ffap-39f, 0x1.2141bap-35f, 0.0f, 0x1.62823ep-45f,
     0x1.4d9888p-26f, 0x1.2bc482p-91f, 0x1.7d2a16p-99f, 0.0f, 0x1.0b0bfcp-3f, 0.0f,
     0x1.2457dap-88f, 0x1.208042p-88f, 0x1.be0e36p-85f, 0.0f, 0.0f, 0.0f,
     0x1.caba2ep-34f, 0x1.b4bf6cp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf99acp-27f,
     0x1.24c69ep-74f, 0x1.790adep-15f, 0x1.fa88dcp-33f, 0x1.02831ep-57f,
     0x1.e613bap-107f, 0.0f, 0x1.f4d78p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a177d4p-40f,
     0.0f, 0.0f, 0x1.3ad3a2p-116f, 0x1.03d7f6p-1f, 0.0f, 0x1.bfbb0ap-18f, 0.0f, 0.0f,
     0x1.b4f3aep-74f, 0x1.b145d2p-115f, 0x1.18efb4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.22d59cp-16f, 0.0f, 0x1.6aded6p-69f, 0x1.6d0366p-84f,
     0x1.63a70cp-8f, 0x1.6fcfc2p-45f, 0.0f, 0x1.06e244p-105f, 0x1.96cfd8p-59f,
     0x1.0ede4ap-58f, 0x1.ffdac4p-62f, 0x1.c6547cp-99f, 0x1.30aebcp-16f, 0.0f,
     0x1.2c3e1p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2a1dap-97f, 0x1.42c1b4p-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.573b72p-44f, 0.0f, 0x1.afccbcp-93f, 0.0f,
     0x1.00e04p-34f, 0x1.9fe982p-81f, 0.0f, 0.0f, 0.0f, 0x1.6819d2p-38f, 0.0f,
     0x1.92bf6cp-34f, 0x1.937edcp-126f, 0x1.745bbap-57f, 0.0f, 0x1.e4546ap-94f,
     0x1.1dfa1cp-16f, 0.0f, 0.0f, 0x1.443fcap-4f, 0x1.4dd39ep-52f, 0.0f,
     0x1.11165ap-2f, 0x1.3c8ffp-3f, 0x1.4e9012p-84f, 0.0f, 0x1.f8441cp-53f, 0.0f,
     0.0f, 0.0f, 0x1.09823p-38f, 0.0f, 0.0f, 0.0f, 0x1.0f878ep-41f, 0x1.153ec8p-73f,
     0x1.43e83cp-22f, 0x1.bf90bap-114f, 0x1.d63e6cp-44f, 0.0f, 0.0f, 0.0f,
     0x1.9f9b6p-27f, 0.0f, 0x1.ab96c8p-90f, 0.0f, 0.0f, 0x1.3d1114p-124f, 0.0f, 0.0f,
     0.0f, 0x1.10cf4ep-22f, 0x1.d17082p-52f, 0x1.0ba7ap-126f, 0.0f, 0x1.dc6d8cp-83f,
     0.0f, 0x1.4b348ap-86f, 0x1.b5c358p-25f, 0.0f, 0x1.d358dp-3f, 0x1.833ebcp-9f,
     0.0f, 0x1.9e566p-10f, 0.0f, 0x1.944accp-54f, 0x1.ee6c66p-110f, 0.0f, 0.0f,
     0x1.ce6ecp-98f, 0x1.1e1142p-57f, 0x1.adf012p-1f, 0.0f, 0.0f, 0x1.b0ab6p-51f,
     0.0f, 0.0f, 0x1.3504dp-61f, 0x1.046b6cp-25f, 0.0f, 0x1.503a3ep-30f,
     0x1.f95a92p-47f, 0x1.502c74p-27f, 0.0f, 0.0f, 0x1.513b4cp-85f, 0x1.0b621ap-107f,
     0.0f, 0x1.04fee2p-103f, 0.0f, 0x1.f1527p-47f, 0.0f, 0x1.3efdc8p-99f,
     0x1.3abfdcp-82f, 0.0f, 0x1.e46234p-87f, 0x1.56b22ep-25f, 0.0f, 0x1.5d23b2p-101f,
     0x1.dea2e8p-36f, 0x1.61d5a8p-125f, 0.0f, 0x1.0f254p-49f, 0x1.73407cp-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.653546p-38f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.44fe2p-118f, 0x1.96f6f2p-111f, 0.0f, 0.0f, 0x1.3b3dp-29f,
     0.0f, 0x1.db619ap-124f, 0x1.b66ec2p-118f, 0x1.3cfde2p-65f, 0x1.12617ap-43f, 0.0f,
     0x1.3bd47ep-67f, 0x1.e3a024p-77f, 0x1.4f4b8ep-100f, 0x1.e1ee4ep-46f, 0.0f,
     0x1.1d9a32p-112f, 0x1.bbc6fcp-83f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.ab91b2p-121f,
     0.0f, 0.0f, 0x1.29df24p-10f, 0x1.83cfa4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d50328p-46f, 0x1.1da83ep-32f, 0x1.b2b02ap-119f, 0x1.ad4c76p-115f,
     0x1.7fcba2p-34f, 0.0f, 0.0f, 0.0f, 0x1.54b464p-108f, 0x1.2eef0cp-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.72b048p-8f, 0.0f, 0.0f, 0x1.963f8p-12f, 0.0f, 0.0f,
     0x1.18fa2ap-77f, 0.0f, 0x1.61d954p-81f, 0x1.d3dcecp-77f, 0.0f, 0x1.0438acp-31f,
     0.0f, 0x1.13a26ep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3ca2ap-92f, 0x1.6affeap-75f, 0.0f, 0x1.547caap-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5fdc74p-33f, 0x1.067fdep-19f, 0x1.3c780ap-119f, 0x1.b39ebp-109f, 0.0f,
     0x1.a0709ep-94f, 0x1.ca9d9cp-78f, 0x1.06a22ep-74f, 0.0f, 0x1.bcf84ap-32f,
     0x1.d233d4p-22f, 0x1.c1680ep-126f, 0.0f, 0.0f, 0x1.60c776p-102f, 0.0f,
     0x1.9f6e04p-42f, 0x1.4ba3f2p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.492aaap-22f,
     0x1.10c652p-20f, 0.0f, 0.0f, 0x1.f538f2p-74f, 0.0f, 0.0f, 0x1.77daaap-27f, 0.0f,
     0x1.1c96aep-93f, 0x1.0f7d16p-124f, 0x1.0ae20ep-53f, 0.0f, 0.0f, 0.0f,
     0x1.2ac9c4p-126f, 0x1.91822cp-39f, 0.0f, 0.0f, 0x1.bb626ep-27f, 0x1.b4b72cp-16f,
     0x1.4939ecp-18f, 0x1.77ef18p-101f, 0x1.366d48p-45f, 0x1.f5067p-101f, 0.0f,
     0x1.868f74p-76f, 0x1.2f2ab8p-106f, 0x1.7897b8p-58f, 0.0f, 0.0f, 0x1.545d68p-76f,
     0x1.d4983ap-80f, 0.0f, 0x1.13e882p-87f, 0x1.4b5882p-80f, 0x1p0f, 0x1.e0df44p-34f,
     0x1.90982ep-5f, 0x1.639d14p-124f, 0x1.8b5f4ap-60f, 0.0f, 0.0f, 0.0f,
     0x1.128564p-51f, 0x1.faebf4p-59f, 0.0f, 0x1.df0afcp-32f, 0.0f, 0.0f,
     0x1.9e450cp-89f, 0.0f, 0.0f, 0x1.c82504p-50f, 0x1.423aeep-10f, 0x1.37e83p-72f,
     0.0f, 0.0f, 0x1.4e301ap-99f, 0x1.4fc6d6p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.375348p-106f, 0x1.31cbfep-22f, 0x1.c85266p-114f, 0.0f, 0.0f, 0.0f,
     0x1.04ae8ap-71f, 0x1.24231ep-4f, 0.0f, 0x1p0f, 0x1.bb76ecp-54f, 0.0f, 0.0f,
     0x1.652c6p-48f, 0x1.1f685ep-54f, 0x1.2dfcep-29f, 0x1.5293a2p-26f, 0.0f, 0.0f,
     0x1.3b23a8p-18f, 0x1.bb192ep-2f, 0x1.080fc4p-78f, 0x1.e8d53ep-33f, 0x1p0f,
     0x1.27dabcp-18f, 0x1.1caa3ep-110f, 0.0f, 0.0f, 0.0f, 0x1.d583fep-3f, 0.0f, 0.0f,
     0x1.5efb84p-39f, 0x1.104f6p-124f, 0.0f, 0x1.bc8176p-115f, 0x1.81d4f4p-34f,
     0x1.1d5856p-3f, 0.0f, 0.0f, 0.0f, 0x1.aadf92p-109f, 0x1.5c83b4p-99f,
     0x1.05bbep-64f, 0.0f, 0x1.28157cp-102f, 0x1.e54732p-13f, 0.0f, 0.0f,
     0x1.cc320cp-61f, 0.0f, 0x1.071dc8p-40f, 0x1.7390ap-11f, 0x1.13dff2p-48f,
     0x1.9a69b2p-120f, 0.0f, 0.0f, 0x1.71fep-87f, 0x1.217afap-6f, 0x1.674a34p-41f,
     0x1.ab1ce6p-95f, 0x1.70e1bp-80f, 0.0f, 0x1.9273ep-62f, 0.0f, 0.0f, 0.0f,
     0x1.7b852p-41f, 0.0f, 0.0f, 0x1.be4c86p-1f, 0x1.8ccd9ep-24f, 0x1.a8385ap-51f,
     0x1.0cd06cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c0332p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea2382p-71f, 0x1.75df7cp-112f, 0.0f,
     0x1.5eebacp-98f, 0.0f, 0.0f, 0.0f, 0x1.51c9ep-92f, 0x1.98e79ep-5f, 0.0f,
     0x1.4b2b4ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5839ap-40f, 0x1.f2feacp-112f, 0.0f,
     0.0f, 0x1.bcbb0ap-107f, 0x1.25df3cp-50f, 0x1.ae841ap-82f, 0x1.ebae14p-40f,
     0x1.7d8222p-104f, 0x1.623ff6p-38f, 0x1.b90b76p-77f, 0.0f, 0.0f, 0x1.054c28p-60f,
     0x1.0daa8p-26f, 0.0f, 0x1.705be8p-79f, 0x1.1b71bp-98f, 0.0f, 0x1.c34d42p-110f,
     0x1.063cb6p-49f, 0.0f, 0x1.022418p-83f, 0x1.692b2ap-63f, 0.0f, 0x1.d18ff2p-30f,
     0.0f, 0.0f, 0.0f, 0x1.79e1c4p-102f, 0.0f, 0.0f, 0.0f, 0x1.357c86p-18f,
     0x1.e578ccp-101f, 0x1.84319ap-122f, 0x1.82bd34p-124f, 0x1.a7d73ep-18f,
     0x1.90e62p-10f, 0x1.21da3ap-9f, 0.0f, 0.0f, 0.0f, 0x1.bf93fep-120f,
     0x1.268416p-37f, 0x1.dbb7a2p-38f, 0.0f, 0.0f, 0.0f, 0x1.fc2e26p-29f, 0.0f, 0.0f,
     0.0f, 0x1.95ef28p-18f, 0x1.f910b4p-36f, 0x1.876752p-43f, 0.0f, 0.0f, 0.0f,
     0x1.4f7cdep-35f, 0.0f, 0x1.d31f6cp-100f, 0x1.671becp-65f, 0x1.ac7464p-78f, 0.0f,
     0x1.92bf64p-52f, 0x1.c42d26p-35f, 0.0f, 0.0f, 0x1.ac943ap-91f, 0x1.9df6c2p-93f,
     0.0f, 0x1.8cd25ep-31f, 0.0f, 0x1.cc345cp-57f, 0x1.b497c8p-24f, 0x1.fdea9p-97f,
     0.0f, 0.0f, 0.0f, 0x1.a2cca6p-22f, 0.0f, 0.0f, 0.0f, 0x1.814d28p-24f,
     0x1.a7c4f4p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc2ac2p-96f, 0x1.fa7732p-30f, 0.0f,
     0x1.2440d2p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ac728p-34f, 0x1.a5ce5cp-4f,
     0x1.cf431ep-11f, 0.0f, 0x1.e95e8cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5dc914p-112f, 0.0f, 0.0f, 0x1.9a6dbp-93f, 0.0f, 0x1.49d47ep-60f, 0.0f, 0.0f,
     0.0f, 0x1.7771cp-83f, 0x1.6d18e6p-32f, 0x1.cbfbcep-99f, 0x1.c8b036p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d55ebcp-22f, 0x1.7c84b8p-112f, 0.0f, 0x1.bf41bap-101f,
     0x1.9faeacp-79f, 0x1.2b6354p-29f, 0x1.a4337p-51f, 0.0f, 0x1.9def58p-14f, 0.0f,
     0x1.9910dcp-117f, 0x1.2b45b8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbbacep-113f, 0.0f, 0.0f, 0.0f, 0x1.2d49f2p-106f, 0x1.967b9p-4f,
     0x1.7c6b9cp-110f, 0.0f, 0.0f, 0x1.bd3216p-67f, 0x1.1810a6p-15f, 0x1.264f84p-28f,
     0x1.6eb49p-18f, 0.0f, 0x1.7e46c4p-46f, 0x1.a4b15ap-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a3395cp-98f, 0x1.bdeb1cp-86f, 0x1.46ec76p-70f, 0.0f, 0x1.7a844ep-12f,
     0.0f, 0x1.e19db8p-5f, 0x1.96f894p-80f, 0.0f, 0.0f, 0x1.0768c4p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44302cp-26f, 0x1.02ee78p-102f, 0.0f, 0x1.f6ac98p-40f,
     0x1.2e688p-65f, 0x1.3eedb4p-114f, 0x1.5e4ee8p-47f, 0x1.cd9652p-114f, 0.0f, 0.0f,
     0x1.31ad34p-33f, 0x1.c0f106p-48f, 0.0f, 0.0f, 0x1.5c0846p-5f, 0x1.79ca58p-109f,
     0x1.fff4aep-38f, 0.0f, 0x1.9ba2e2p-66f, 0.0f, 0.0f, 0x1.440d6ap-22f,
     0x1.079e4cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b0ba4p-91f, 0x1.75ff72p-107f,
     0.0f, 0x1.61594ap-80f, 0.0f, 0.0f, 0.0f, 0x1.7eb392p-83f, 0.0f, 0x1.bee424p-40f,
     0x1.a30358p-74f, 0.0f, 0x1.dc1d1p-117f, 0x1.7197bcp-88f, 0.0f, 0.0f, 0.0f,
     0x1.09d2aep-116f, 0.0f, 0.0f, 0x1.244614p-29f, 0.0f, 0x1.e82224p-3f, 0.0f,
     0x1.03ac5p-76f, 0.0f, 0.0f, 0x1.729776p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9af24p-19f, 0x1.93eb1ep-24f, 0.0f, 0.0f, 0.0f, 0x1.bd6b16p-75f,
     0x1.89315ep-115f, 0x1.0e2b24p-33f, 0x1.386aeap-68f, 0.0f, 0.0f, 0x1.ef3e4p-58f,
     0x1.bea5b4p-68f, 0.0f, 0x1.667df6p-64f, 0x1.3bdd18p-105f, 0x1.283c8cp-22f, 0.0f,
     0.0f, 0x1.1def3cp-87f, 0x1.bd187p-56f, 0.0f, 0.0f, 0x1.e30114p-6f, 0.0f,
     0x1.639abp-37f, 0.0f, 0x1.eb900ap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.048118p-15f, 0x1.fd9166p-67f, 0.0f, 0x1.5d35b6p-109f, 0x1.957348p-102f,
     0.0f, 0.0f, 0x1.a5079ap-101f, 0x1.073724p-108f, 0x1.0215cp-51f, 0.0f,
     0x1.e62a3p-29f, 0x1.836202p-58f, 0x1.cf1252p-126f, 0.0f, 0x1.583de4p-101f, 0.0f,
     0x1.81ff5ep-17f, 0x1.4dbd64p-61f, 0x1.4a19e2p-23f, 0.0f, 0.0f, 0.0f,
     0x1.29c354p-95f, 0.0f, 0x1.1127b4p-92f, 0x1.93b7fcp-30f, 0.0f, 0.0f, 0.0f,
     0x1.4e2a64p-46f, 0x1.68d722p-98f, 0x1.2c5f4ap-36f, 0x1.99f35ap-124f, 0.0f,
     0x1.a77fc4p-89f, 0.0f, 0x1.e3028p-94f, 0.0f, 0x1.46d39cp-4f, 0x1.b43b04p-93f,
     0x1.11d73ep-86f, 0.0f, 0x1.444b58p-77f, 0.0f, 0x1.254e08p-21f, 0.0f, 0.0f,
     0x1.5322e8p-112f, 0x1.e3d4dap-18f, 0.0f, 0.0f, 0.0f, 0x1.c31fe8p-67f,
     0x1.ab77fap-11f, 0.0f, 0x1.d82222p-120f, 0x1.d966a2p-5f, 0x1.dc32f2p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b8c4p-19f, 0.0f, 0x1.a00e1cp-7f, 0x1.f303cep-97f,
     0.0f, 0x1.3e0422p-56f, 0x1.0dafaap-118f, 0.0f, 0.0f, 0x1.88564ep-126f, 0.0f,
     0x1.dd68a4p-107f, 0x1.ace7dp-59f, 0x1.54e05cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a7a53ap-20f, 0.0f, 0x1.25bcfep-19f, 0.0f, 0x1.930a6p-26f, 0.0f,
     0.0f, 0x1.1a61p-63f, 0x1.0c88c2p-35f, 0.0f, 0x1.e6feb6p-23f, 0x1.7e2a5cp-122f,
     0x1.6532dap-4f, 0x1.3d8fa4p-124f, 0.0f, 0x1.9f7f74p-32f, 0x1.1cf594p-27f, 0.0f,
     0x1.8f7e9ap-1f, 0x1.95de7ep-37f, 0x1.3ab514p-86f, 0x1.6302f4p-70f,
     0x1.bed336p-7f, 0x1.5bd092p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3e77cp-37f, 0.0f,
     0x1.7040dap-34f, 0x1.31effep-52f, 0.0f, 0x1.0eb8d6p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f7d748p-47f, 0.0f, 0x1.1803a2p-107f, 0x1.313edep-73f, 0.0f,
     0x1.63e864p-21f, 0x1.26c826p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7ef1d6p-63f, 0x1.3c7f8ep-23f, 0x1.b92d7ap-57f, 0x1.32f7eap-15f, 0.0f,
     0.0f, 0x1.d8e946p-45f, 0.0f, 0.0f, 0x1.e699e4p-17f, 0.0f, 0x1.4e4edp-124f, 0.0f,
     0x1.f8bdd4p-66f, 0x1.50181cp-51f, 0x1.9e95f8p-95f, 0x1.2ac408p-37f, 0.0f, 0.0f,
     0.0f, 0x1.198fd6p-120f, 0x1.8fe1d8p-32f, 0x1.9ab4b8p-75f, 0.0f, 0x1.b7c408p-109f,
     0.0f, 0x1.33976ap-124f, 0.0f, 0x1.87515cp-109f, 0.0f, 0.0f, 0x1.e753c4p-18f,
     0x1.5718f2p-115f, 0.0f, 0.0f, 0x1.e45bc8p-99f, 0x1.df1e7cp-58f, 0.0f, 0.0f,
     0x1.566034p-49f, 0x1.912ceep-117f, 0x1.442d5cp-23f, 0x1.f6060ap-106f,
     0x1.919db6p-123f, 0.0f, 0x1.ad4ffap-107f, 0x1.2c61bp-82f, 0x1.1b8218p-100f,
     0x1.13c624p-55f, 0x1.a418c4p-3f, 0.0f, 0x1.e29994p-98f, 0.0f, 0x1.dbac54p-86f,
     0.0f, 0x1.250a22p-31f, 0x1.7dfd4cp-126f, 0x1.0d79c2p-84f, 0.0f, 0x1.02fd32p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3dfd2p-85f, 0x1.4bac0cp-45f, 0.0f, 0.0f,
     0x1.1f5774p-68f, 0.0f, 0x1.328b58p-13f, 0.0f, 0x1.bc0fa8p-108f, 0.0f,
     0x1.0f484ap-5f, 0x1.4fe682p-125f, 0x1.0de6ccp-80f, 0.0f, 0.0f, 0x1.0dd614p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ce7aep-58f, 0.0f, 0x1.954e88p-4f
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
            tmp1 = Sleef_tanf4_u35kvx(tmp0);
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
    printf("Sleef_tanf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
