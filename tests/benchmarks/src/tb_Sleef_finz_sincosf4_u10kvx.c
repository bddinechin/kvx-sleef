/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf4_u10kvx.c --function \
 *     Sleef_finz_sincosf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.16f778p-57f, 0.0f, 0.0f, 0x1.c80cc2p-101f, 0.0f, 0.0f, 0.0f,
     0x1.788fdap-126f, 0x1.84201ap-32f, 0x1.720bc8p-111f, 0.0f, 0x1.aba37ep-23f, 0.0f,
     0x1.a14ea8p-95f, 0x1.77bc6p-5f, 0x1.c46984p-29f, 0x1.87d332p-57f, 0.0f,
     0x1.07086cp-13f, 0x1.b219d6p-43f, 0.0f, 0x1.cb51e4p-91f, 0.0f, 0x1.02602ep-76f,
     0.0f, 0x1.6fbe92p-9f, 0x1.d58044p-55f, 0x1.1812ecp-82f, 0.0f, 0x1.3b7b02p-24f,
     0.0f, 0.0f, 0.0f, 0x1.6e1c64p-124f, 0.0f, 0x1.ddc548p-34f, 0x1.37730ap-40f,
     0x1.26744ep-67f, 0x1.4ea868p-9f, 0x1.7dc102p-45f, 0x1.cbbd5ap-78f, 0.0f, 0.0f,
     0x1.9dfabp-64f, 0x1.85b2aep-125f, 0x1.446a18p-60f, 0x1.629a2ap-64f,
     0x1.d462e8p-48f, 0x1.3ee5bcp-113f, 0x1.a4cf68p-116f, 0.0f, 0x1p0f, 0.0f,
     0x1.8c749cp-4f, 0x1.995f2ep-64f, 0.0f, 0x1.f79b98p-85f, 0x1.47df54p-13f,
     0x1.c1d1d4p-59f, 0x1.c80084p-34f, 0x1.f092c2p-78f, 0x1.41037p-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c8f0d2p-21f, 0x1.8224cep-49f, 0x1.c5a9bap-16f, 0x1.99c1e4p-82f,
     0.0f, 0x1.12dabap-51f, 0.0f, 0x1.d9a24ep-4f, 0.0f, 0.0f, 0.0f, 0x1.6b6ac2p-98f,
     0x1.e15874p-60f, 0.0f, 0.0f, 0.0f, 0x1.2be502p-48f, 0x1.c18ea4p-54f,
     0x1.d3a496p-92f, 0x1.7db9ccp-39f, 0.0f, 0x1.5490dp-76f, 0.0f, 0.0f,
     0x1.23f8bap-37f, 0.0f, 0.0f, 0.0f, 0x1.1612cap-75f, 0x1.a05edap-28f,
     0x1.fd82c6p-109f, 0x1.8962p-88f, 0.0f, 0.0f, 0x1.c09c2ep-60f, 0.0f, 0.0f,
     0x1.d24bfcp-116f, 0x1.387b42p-105f, 0.0f, 0x1.5cdf6p-15f, 0x1.771824p-124f,
     0x1.05b09ap-66f, 0x1.8e6bc4p-84f, 0x1.4c9334p-28f, 0.0f, 0.0f, 0x1.dd15d4p-113f,
     0x1.b3090ap-70f, 0x1.a8a8e4p-88f, 0x1.b5b5a2p-21f, 0x1.2f7e12p-50f,
     0x1.6ad1f2p-34f, 0.0f, 0x1.cd94c6p-4f, 0.0f, 0.0f, 0x1.10da2ep-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.11c768p-79f, 0.0f, 0.0f, 0.0f, 0x1.1b2af6p-18f, 0x1.952d58p-116f,
     0x1.fd5aa4p-27f, 0x1.ce558cp-9f, 0.0f, 0x1.f1ee18p-56f, 0x1.f5fed8p-120f,
     0x1.0f316p-103f, 0x1.6b69f2p-70f, 0.0f, 0x1.73790ap-27f, 0x1.86495p-28f,
     0x1.5aa956p-36f, 0x1.1a6982p-76f, 0.0f, 0x1.ad8dc6p-99f, 0.0f, 0.0f,
     0x1.0a06ap-7f, 0.0f, 0.0f, 0x1.ae8882p-105f, 0.0f, 0x1.d3b174p-49f,
     0x1.1395ep-90f, 0x1.1f7b4cp-29f, 0x1.e55b32p-17f, 0x1.ea8c4p-113f,
     0x1.290e0ep-14f, 0.0f, 0x1.da826p-105f, 0x1.9a09fp-123f, 0.0f, 0.0f, 0.0f,
     0x1.41ae76p-77f, 0x1.19d9e8p-17f, 0x1.58a38ep-25f, 0.0f, 0.0f, 0x1.c417dcp-50f,
     0.0f, 0x1.5f40f6p-109f, 0.0f, 0x1.78c2bep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.204d7ep-62f, 0x1.085994p-102f, 0x1.c3cd28p-64f, 0x1.b350d6p-103f,
     0x1.3b0026p-109f, 0.0f, 0.0f, 0x1.d35ad2p-111f, 0.0f, 0x1.989ca8p-66f, 0.0f,
     0.0f, 0x1.ac3b02p-69f, 0.0f, 0x1.be10dcp-56f, 0.0f, 0x1.72125cp-20f,
     0x1.3ba87ep-65f, 0.0f, 0.0f, 0x1.a0eb7ep-81f, 0x1.7c2c62p-90f, 0x1.628e4cp-78f,
     0.0f, 0.0f, 0x1.ae099ep-68f, 0x1.2359a4p-8f, 0.0f, 0x1.331758p-14f,
     0x1.0391fep-123f, 0x1.fc9968p-79f, 0.0f, 0x1.ce9238p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1ce398p-47f, 0x1.8b81d6p-37f, 0x1.3d614cp-4f, 0.0f, 0.0f, 0.0f,
     0x1.ad9fa2p-109f, 0x1.c7914cp-124f, 0.0f, 0.0f, 0.0f, 0x1.370f1ep-39f,
     0x1.96c2f2p-90f, 0x1.7560cep-4f, 0x1.0e423p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60427ep-121f, 0.0f, 0.0f, 0x1.143126p-74f, 0.0f, 0x1.f5cd46p-75f,
     0x1.937f18p-16f, 0x1.f8b822p-123f, 0.0f, 0x1.95221cp-76f, 0x1.09a75ap-81f, 0.0f,
     0.0f, 0x1.c908cep-70f, 0.0f, 0.0f, 0x1.c502bcp-68f, 0x1.6b2c52p-20f,
     0x1.55c2a8p-100f, 0x1.50e87p-7f, 0x1.78014ap-93f, 0x1.54db62p-12f, 0.0f, 0.0f,
     0x1.724002p-29f, 0x1.8ab0b4p-85f, 0.0f, 0x1p0f, 0.0f, 0x1.7123e2p-31f, 0.0f,
     0x1.27964p-96f, 0.0f, 0x1p0f, 0x1.42abf2p-91f, 0.0f, 0.0f, 0x1.c87f84p-61f, 0.0f,
     0x1.8cc452p-47f, 0x1.0f2c48p-89f, 0x1.1e6716p-41f, 0x1.5e8f54p-74f, 0.0f,
     0x1.816f56p-94f, 0x1.c9126p-48f, 0x1.7c0132p-11f, 0x1.a7335ap-107f, 0.0f,
     0x1.f7e27cp-5f, 0x1.86cd3cp-39f, 0x1.41fdacp-111f, 0.0f, 0x1.860d6ap-117f, 0.0f,
     0x1.d7acbap-80f, 0.0f, 0.0f, 0x1.cd6088p-91f, 0x1.0e7106p-118f, 0x1.6c7cb6p-33f,
     0x1.eb6994p-30f, 0x1.16486ep-48f, 0x1.f0a43ep-64f, 0.0f, 0.0f, 0x1.cf9ef4p-12f,
     0x1.26418ap-8f, 0.0f, 0x1.11ea6ep-113f, 0.0f, 0.0f, 0x1.f6688ep-74f,
     0x1.fff3f8p-121f, 0x1.068aacp-83f, 0x1.f248ap-110f, 0x1.e9c39p-27f, 0.0f,
     0x1.61fcd2p-22f, 0.0f, 0x1.a26be8p-63f, 0x1.07a86ap-73f, 0x1.f11d16p-91f,
     0x1.d35638p-114f, 0.0f, 0.0f, 0x1.32733ep-67f, 0.0f, 0.0f, 0x1.1448eep-49f, 0.0f,
     0x1.22458ap-69f, 0.0f, 0x1.a59242p-38f, 0.0f, 0.0f, 0x1.446e7cp-74f, 0.0f,
     0x1.2c0b6ap-73f, 0x1.b4ee1cp-88f, 0x1.6ba092p-94f, 0.0f, 0x1.0db43p-100f,
     0x1.a527fcp-102f, 0x1.4108c2p-22f, 0x1.9dd0aep-82f, 0.0f, 0x1.962878p-76f, 0.0f,
     0x1.dfab0ap-95f, 0x1.11dfe4p-125f, 0x1.ef4a8ap-20f, 0x1.de26c4p-63f, 0.0f, 0.0f,
     0x1.965df8p-77f, 0x1.f2c056p-13f, 0x1.f5636ap-121f, 0x1.06bb1p-16f,
     0x1.30b01p-114f, 0x1.ee2c24p-68f, 0.0f, 0.0f, 0x1.171734p-117f, 0.0f,
     0x1.9b58fp-6f, 0.0f, 0.0f, 0x1.20a546p-37f, 0.0f, 0x1.5aa878p-102f,
     0x1.82bc6ep-64f, 0.0f, 0.0f, 0x1.b049a2p-88f, 0.0f, 0x1.f1cc18p-75f, 0.0f,
     0x1.0c1c94p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e1bbcp-24f,
     0.0f, 0x1.68d3p-16f, 0.0f, 0.0f, 0x1.618748p-106f, 0.0f, 0.0f, 0x1.969d02p-120f,
     0.0f, 0x1.3f1f96p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1911aap-59f, 0x1.b8e0bap-103f, 0x1.52f78ap-11f, 0.0f, 0x1.374b6p-82f, 0.0f,
     0.0f, 0.0f, 0x1.50248cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b11762p-44f, 0.0f,
     0x1.4ca2f6p-92f, 0x1.551372p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba6feep-57f, 0.0f, 0.0f, 0x1.331abp-99f, 0.0f, 0x1.bbe39cp-84f,
     0x1.5b91cap-74f, 0x1.8c47e2p-20f, 0x1.07ecb8p-19f, 0.0f, 0x1.8169c6p-96f,
     0x1.70a4fp-56f, 0.0f, 0x1.bdd19ap-47f, 0x1.35bc18p-45f, 0x1.963acp-92f,
     0x1.f4c85ap-59f, 0x1.c01c94p-47f, 0x1.75e03p-22f, 0x1.784adcp-59f,
     0x1.3f58aep-95f, 0x1.9656aep-4f, 0x1.96c958p-77f, 0x1.1130b8p-40f, 0.0f, 0.0f,
     0x1.46d876p-42f, 0x1.7f2748p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bda04p-58f,
     0x1.cabfb4p-97f, 0.0f, 0x1.be6bf4p-33f, 0.0f, 0x1.0b4724p-53f, 0x1.65376ap-60f,
     0x1.bdee18p-109f, 0x1.1b13d6p-70f, 0x1.f33032p-118f, 0x1.e2ca0ep-76f,
     0x1.327124p-113f, 0.0f, 0.0f, 0x1.22552ap-83f, 0x1.a4eae8p-122f, 0.0f, 0.0f,
     0.0f, 0x1.5b0132p-85f, 0x1.a53c4p-1f, 0x1.8bb0c2p-47f, 0.0f, 0x1.1448cep-120f,
     0x1.dab35p-74f, 0x1.2e90eap-31f, 0x1.ca6c7ep-6f, 0.0f, 0x1.56051cp-113f, 0.0f,
     0x1.63a5d2p-75f, 0x1.12f898p-106f, 0x1.248aeep-41f, 0.0f, 0x1.31a7b6p-54f,
     0x1.49bd5p-17f, 0x1p0f, 0.0f, 0x1.8e726ep-51f, 0x1.3c16c2p-27f, 0.0f, 0.0f, 0.0f,
     0x1.af60e6p-13f, 0x1.6ca6acp-114f, 0.0f, 0x1.a0e7bap-99f, 0.0f, 0.0f, 0.0f,
     0x1.c3abeep-117f, 0x1.badad6p-5f, 0.0f, 0x1.5afcd6p-99f, 0.0f, 0x1.4338b6p-2f,
     0.0f, 0.0f, 0x1.f721b6p-1f, 0x1.5f4b54p-39f, 0.0f, 0.0f, 0x1.e60b6ep-88f,
     0x1.7484c8p-3f, 0.0f, 0x1.579c5ap-55f, 0x1.abba7p-99f, 0.0f, 0x1.fad48cp-94f,
     0.0f, 0x1.4cf64ep-26f, 0.0f, 0x1.a544c6p-88f, 0x1.4183b2p-57f, 0.0f, 0.0f,
     0x1.e3fd9ap-63f, 0x1.199c84p-8f, 0x1.aac40ap-110f, 0x1.151ecp-72f, 0.0f, 0.0f,
     0x1.53c042p-94f, 0x1.c3f2ap-5f, 0x1.5b67cap-119f, 0x1.5195ap-50f, 0.0f, 0.0f,
     0.0f, 0x1.3fcf86p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3273dp-8f, 0.0f,
     0x1.736f16p-26f, 0x1.e837fap-111f, 0x1.03d11p-47f, 0.0f, 0.0f, 0x1.3747a6p-122f,
     0.0f, 0.0f, 0x1.2ca2a4p-36f, 0x1.338608p-26f, 0.0f, 0x1.54195p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.663fd4p-3f, 0.0f, 0.0f, 0x1.83cf7p-66f, 0x1.732794p-15f, 0.0f,
     0x1.a8a0cep-44f, 0x1.2a3b9ap-117f, 0x1.23675ap-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96aa6ap-59f, 0x1.a10ba8p-114f, 0x1.f733ccp-116f, 0x1.f92414p-2f, 0.0f, 0.0f,
     0x1.15dc1ap-55f, 0x1.08b52ep-56f, 0.0f, 0x1.ee93bep-88f, 0x1.2977f4p-97f,
     0x1.b9437p-102f, 0x1.24b19ep-57f, 0.0f, 0x1.f08d8cp-44f, 0.0f, 0x1.c370a2p-6f,
     0x1.d36166p-102f, 0.0f, 0.0f, 0x1.376386p-26f, 0.0f, 0x1.013274p-21f, 0.0f,
     0x1.bdd4ap-61f, 0.0f, 0.0f, 0.0f, 0x1.7ca3a2p-8f, 0.0f, 0.0f, 0x1.9313e4p-69f,
     0x1.abd1e2p-100f, 0x1.19e546p-120f, 0x1.94963ap-18f, 0x1.30d028p-39f,
     0x1.7d9b94p-17f, 0x1.2485fcp-57f, 0.0f, 0x1.fb5a32p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc14eep-66f, 0x1.5c71ap-78f, 0.0f,
     0x1.8fe98ep-21f, 0x1.17919ap-73f, 0x1.bac0ap-10f, 0.0f, 0x1.1c271ep-32f,
     0x1.1a2282p-47f, 0x1.2ec5a6p-16f, 0.0f, 0.0f, 0x1.231b6cp-57f, 0x1.1ab056p-123f,
     0x1.cf687cp-111f, 0x1.d3b1d6p-33f, 0x1.5d9e2ap-86f, 0x1.fa212ap-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1d48ep-98f, 0.0f, 0x1.08514cp-113f,
     0x1.37b20ep-57f, 0x1.63cd5ap-1f, 0.0f, 0x1.cbc0aep-88f, 0.0f, 0.0f,
     0x1.0c1f02p-105f, 0x1.c1cddcp-76f, 0.0f, 0.0f, 0.0f, 0x1.ba679ap-20f, 0.0f, 0.0f,
     0x1.ca8bd2p-14f, 0x1.2ac77cp-56f, 0x1.9fb6bp-10f, 0x1.6b3ae2p-4f,
     0x1.9563a4p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.c2e57p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bed08p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a423p-12f, 0x1.dc0db6p-108f, 0.0f, 0x1.53546p-46f, 0x1.3f737ap-13f, 0.0f,
     0.0f, 0x1.f2f0ep-113f, 0x1.b35e86p-35f, 0.0f, 0.0f, 0x1.63e78ep-70f,
     0x1.2d8522p-101f, 0x1.0e8ceap-30f, 0.0f, 0x1.cb1202p-100f, 0.0f, 0x1.6d9968p-98f,
     0x1.8f114ap-85f, 0x1.9d327ep-98f, 0x1.77d968p-105f, 0x1.cf551p-104f,
     0x1.83fe42p-122f, 0.0f, 0x1.370c1cp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81b7cp-11f,
     0.0f, 0x1.7f826ap-121f, 0.0f, 0.0f, 0.0f, 0x1.7b6e2cp-35f, 0.0f, 0.0f, 0.0f,
     0x1.b8eb5ap-6f, 0x1.1ff404p-84f, 0.0f, 0.0f, 0x1.24dae2p-52f, 0x1.1bb61ap-116f,
     0x1.b26994p-93f, 0x1.3fbca8p-108f, 0.0f, 0x1.74cafap-105f, 0.0f, 0.0f,
     0x1.85d9fp-9f, 0x1.4b28dp-71f, 0x1.01684cp-112f, 0.0f, 0x1.66a0e8p-73f,
     0x1.d471bp-31f, 0x1.cd6f46p-86f, 0x1.4ef518p-111f, 0.0f, 0.0f, 0x1.f2798ap-67f,
     0x1.ac963p-72f, 0.0f, 0x1.4ebaf2p-52f, 0x1.1ba002p-8f, 0x1.6887cap-117f,
     0x1.b12a12p-122f, 0x1.e6e2e6p-54f, 0.0f, 0x1.c732d2p-14f, 0x1.301928p-93f,
     0x1.9520ecp-37f, 0.0f, 0x1.202a62p-108f, 0x1.5769c6p-123f, 0x1.81239ap-66f,
     0x1.c6befap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1974bcp-16f, 0x1.d3f418p-125f,
     0x1.e4fd4ap-92f, 0.0f, 0.0f, 0.0f, 0x1.99ee0ap-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ff0ap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32bbeap-38f, 0.0f,
     0x1.05a65p-11f, 0.0f, 0x1.0cd244p-115f, 0.0f, 0x1.e10c6p-113f, 0.0f, 0.0f,
     0x1.7c024ap-57f, 0.0f, 0x1.561ceap-19f, 0.0f, 0x1.f974bap-4f, 0.0f,
     0x1.d104f6p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4b01cp-88f,
     0x1.95c0d8p-6f, 0.0f, 0.0f, 0x1.0d7aacp-12f, 0.0f, 0x1.a477ap-70f, 0.0f,
     0x1.0188e8p-77f, 0.0f, 0x1.46dc7ep-93f, 0.0f, 0.0f, 0.0f, 0x1.b2f0fap-28f,
     0x1.4348p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77126cp-92f, 0.0f, 0.0f,
     0.0f, 0x1.40647ap-39f, 0.0f, 0x1.06337ap-58f, 0x1.270a2ap-16f, 0x1.da2f32p-14f,
     0.0f, 0x1.bc4714p-84f, 0.0f, 0x1.d6148ep-8f, 0x1.dfb49cp-27f, 0x1.aa9204p-120f,
     0x1.a3074cp-108f, 0.0f, 0x1.b8fe74p-116f, 0x1.250cdcp-120f, 0.0f,
     0x1.7ad7fap-82f, 0x1.b6913ep-22f, 0.0f, 0x1.1f51e8p-78f, 0.0f, 0x1.78ce6ep-92f,
     0.0f, 0.0f, 0x1.1dd848p-46f, 0x1.a75ca8p-84f, 0x1.ac405cp-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1f7p-17f, 0x1.21d6dep-46f, 0x1.8f9d76p-98f,
     0x1.79f8aep-21f, 0.0f, 0.0f, 0.0f, 0x1.8345ap-29f, 0x1.8152c4p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a6d6d4p-40f, 0.0f, 0.0f, 0.0f, 0x1.41acfap-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.123962p-20f, 0x1.658236p-30f, 0x1.6afc4ap-28f, 0.0f, 0.0f,
     0x1.6238acp-114f, 0x1.87fcbap-65f, 0.0f, 0.0f, 0.0f, 0x1.40fe7p-51f,
     0x1.02244ep-42f, 0x1.caf4fp-122f, 0x1.889e7ap-14f, 0x1.e864aep-45f,
     0x1.a02508p-99f, 0x1.dd6398p-123f, 0x1.e5d6cap-28f, 0x1.12b50ap-85f,
     0x1.8d056cp-74f, 0x1.d8d6e8p-43f, 0.0f, 0x1.8555cp-40f, 0.0f, 0.0f,
     0x1.523574p-37f, 0.0f, 0.0f, 0x1.177932p-69f, 0.0f, 0x1.3528ep-62f,
     0x1.10633cp-112f, 0.0f, 0x1.b7a0a2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67c6f2p-75f,
     0x1.0eab7p-36f, 0.0f, 0.0f, 0x1.b5ff98p-82f, 0.0f, 0x1.ccccep-21f, 0x1.3b396p-4f,
     0x1.3ef8e4p-38f, 0x1.20e604p-20f, 0x1.4cf7ep-119f, 0x1.dcf5b2p-17f,
     0x1.b493p-90f, 0.0f, 0.0f, 0x1.115ae2p-40f, 0x1.722f92p-19f, 0x1.4e84eep-4f,
     0x1.9f4d34p-114f, 0x1.59feeap-91f, 0x1.d83ca8p-81f, 0.0f, 0x1.21a912p-116f,
     0x1.03901cp-121f, 0x1.3fd44ep-101f, 0.0f, 0x1.f6a552p-72f, 0.0f, 0x1.03909p-51f,
     0.0f, 0.0f, 0x1.29893p-65f, 0.0f, 0.0f, 0.0f, 0x1.17b65ep-113f, 0x1.750e7cp-14f,
     0.0f, 0.0f, 0x1.7bc496p-109f, 0x1.b46f0ep-24f, 0x1.bc16b6p-45f, 0.0f,
     0x1.ec2824p-66f, 0x1.adcfa4p-86f, 0x1.73e836p-1f, 0x1.d558f4p-22f, 0.0f,
     0x1.446222p-98f, 0x1.562e8ep-85f, 0x1.56d2d4p-46f, 0.0f, 0x1.4bd004p-41f,
     0x1.f1b3a4p-86f
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
            tmp1 = Sleef_finz_sincosf4_u10kvx(tmp0);
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
    printf("Sleef_finz_sincosf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincosf4_u10kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
