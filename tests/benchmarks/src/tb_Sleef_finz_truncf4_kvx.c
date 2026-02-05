/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncf4_kvx.c --function Sleef_finz_truncf4_kvx \
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
     0x1.98840cp-29f, 0x1.5d21b6p-60f, 0x1.9c5744p-108f, 0.0f, 0.0f, 0.0f,
     0x1.7482bp-22f, 0.0f, 0x1.a2b2cep-123f, 0x1.99de54p-2f, 0.0f, 0x1.c14198p-117f,
     0.0f, 0.0f, 0x1.29d864p-103f, 0.0f, 0.0f, 0x1.e671bep-57f, 0.0f, 0.0f,
     0x1.ae598cp-66f, 0.0f, 0.0f, 0x1.962732p-54f, 0.0f, 0.0f, 0.0f, 0x1.b50d1p-109f,
     0x1.324eb8p-115f, 0.0f, 0x1.e23f5ep-37f, 0.0f, 0.0f, 0x1.94d87cp-93f,
     0x1.9e6158p-115f, 0.0f, 0.0f, 0x1.cdb502p-5f, 0x1.2014d8p-112f, 0.0f,
     0x1.130f7ep-103f, 0x1.ba5172p-92f, 0.0f, 0x1.670118p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c5a14p-25f, 0x1.0a7646p-34f, 0x1.b4c864p-88f, 0x1.334878p-81f,
     0x1.3a596cp-80f, 0.0f, 0.0f, 0x1.2e8c3ep-22f, 0.0f, 0.0f, 0x1.f4582p-16f, 0.0f,
     0x1.631b38p-41f, 0.0f, 0.0f, 0x1.4bf442p-64f, 0x1.83fc6cp-110f, 0.0f, 0.0f, 0.0f,
     0x1.8ae466p-90f, 0.0f, 0x1.6dc26ap-65f, 0x1.90059ap-83f, 0x1.03999ap-40f,
     0x1.51b1ccp-112f, 0.0f, 0x1.e428bap-22f, 0.0f, 0x1.15a32ap-53f, 0x1.ffc7fp-60f,
     0x1.c2ec4ep-10f, 0x1.0cadc8p-44f, 0.0f, 0x1.14c06ap-57f, 0x1.817ce8p-22f, 0.0f,
     0x1.5f4f96p-40f, 0.0f, 0x1.4473ap-80f, 0.0f, 0x1.ab87acp-5f, 0x1.b7ee14p-62f,
     0.0f, 0x1.7d30f6p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7db07ep-5f, 0.0f, 0.0f,
     0x1.621912p-29f, 0.0f, 0x1.053f36p-49f, 0.0f, 0.0f, 0.0f, 0x1.691e2cp-26f, 0.0f,
     0x1.f8897cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56cb1ep-12f, 0.0f,
     0x1.6c910ap-112f, 0x1.317454p-101f, 0.0f, 0x1.3c6e92p-122f, 0.0f,
     0x1.adec58p-77f, 0.0f, 0x1.e91a5p-120f, 0x1.6c1dep-3f, 0x1.5d4f38p-20f, 0.0f,
     0x1.f09c82p-64f, 0.0f, 0x1.54900ep-69f, 0x1.aa43ccp-17f, 0.0f, 0x1.f5f63ep-57f,
     0x1.3b1b28p-124f, 0x1.c9d2fap-16f, 0x1.56e108p-83f, 0x1.c70c32p-38f,
     0x1.6efcd2p-119f, 0x1.b22fecp-89f, 0x1.818948p-40f, 0.0f, 0.0f, 0x1.141514p-101f,
     0.0f, 0.0f, 0.0f, 0x1.a3fb66p-73f, 0.0f, 0.0f, 0x1.728e0cp-40f, 0x1.f3e70cp-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bde9cp-4f, 0.0f, 0x1.0bf74p-66f, 0.0f,
     0x1.954748p-51f, 0x1.3002b6p-67f, 0x1.87cc1p-87f, 0x1.eca4bap-98f,
     0x1.87fc42p-10f, 0x1.e48732p-20f, 0.0f, 0.0f, 0.0f, 0x1.810392p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.756c38p-73f, 0x1.030d4cp-22f, 0.0f, 0x1.e0a1fep-73f,
     0x1.7340a8p-112f, 0.0f, 0x1.4d458ap-72f, 0x1.8300a8p-116f, 0x1.a1f10ep-10f,
     0x1.a488d8p-40f, 0.0f, 0x1.a1189ep-34f, 0x1.c0471ep-45f, 0.0f, 0.0f, 0.0f,
     0x1.b8ec06p-41f, 0x1.4168dap-45f, 0.0f, 0x1.9b8732p-126f, 0x1.527066p-74f,
     0x1.21ae62p-72f, 0.0f, 0x1.8bc26ep-86f, 0x1.fb2d9ap-19f, 0x1.84271ep-97f,
     0x1.4ab8e2p-23f, 0x1.966386p-27f, 0x1.67d2b2p-71f, 0x1.219e4ap-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eefeb2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cba06p-26f,
     0x1.8e6ee8p-25f, 0x1.d46ee8p-84f, 0.0f, 0x1.53c854p-8f, 0x1.e3617p-16f,
     0x1.9de09cp-117f, 0x1.5f6764p-123f, 0x1.6990fp-71f, 0x1.acc3acp-95f, 0.0f,
     0x1.d85ef2p-34f, 0.0f, 0x1.8d91a2p-24f, 0x1.6a19dcp-15f, 0.0f, 0.0f,
     0x1.48ddc2p-3f, 0.0f, 0.0f, 0x1.02364p-14f, 0.0f, 0x1.2e482cp-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.81f8d6p-100f, 0x1.2d7534p-114f, 0x1.b0f666p-80f, 0.0f,
     0x1.bd7108p-104f, 0x1.8e479cp-90f, 0x1.d7418cp-19f, 0x1.e7ba28p-15f,
     0x1.9a74d4p-32f, 0.0f, 0x1.5b31fap-95f, 0x1.530982p-36f, 0.0f, 0x1.e42b36p-77f,
     0.0f, 0x1.4d17d2p-121f, 0x1.a00a42p-30f, 0.0f, 0x1.13125ap-41f, 0x1.056172p-3f,
     0x1.e9f40ap-2f, 0.0f, 0x1.3200f6p-110f, 0.0f, 0.0f, 0.0f, 0x1.e478e4p-85f,
     0x1.ebb51ep-40f, 0x1.272978p-41f, 0.0f, 0x1.2ef39ap-121f, 0x1.b503eap-33f, 0.0f,
     0x1.70d352p-31f, 0.0f, 0x1.15b758p-62f, 0.0f, 0.0f, 0x1.585e0ep-5f,
     0x1.4a3352p-68f, 0x1.99b53ap-34f, 0.0f, 0.0f, 0.0f, 0x1.40899ep-97f, 0.0f,
     0x1.439c76p-10f, 0x1.84baccp-52f, 0.0f, 0x1.2740cep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15899ep-110f, 0x1.a41d18p-94f, 0.0f, 0.0f, 0.0f, 0x1.ac38f4p-123f,
     0x1.ca3fdp-115f, 0x1.d8e98ep-119f, 0x1.11faeep-86f, 0x1.bdeee4p-8f,
     0x1.e82816p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.977ffap-36f, 0.0f, 0.0f,
     0x1.8b260ap-107f, 0x1.f9967cp-21f, 0.0f, 0x1.a082fcp-26f, 0.0f, 0x1.a1da8ep-116f,
     0x1.be6816p-63f, 0x1.0f2d4cp-96f, 0.0f, 0x1.0587b6p-121f, 0x1.556398p-86f, 0.0f,
     0x1.53ed84p-80f, 0.0f, 0.0f, 0.0f, 0x1.48fb5ap-8f, 0.0f, 0x1.08e978p-108f, 0.0f,
     0x1.386eb4p-98f, 0x1.3dbc98p-21f, 0x1.f7c934p-8f, 0.0f, 0.0f, 0x1.6093f6p-100f,
     0.0f, 0x1.f5845ep-16f, 0.0f, 0.0f, 0.0f, 0x1.636e7ep-85f, 0.0f, 0.0f,
     0x1.18113ap-17f, 0.0f, 0.0f, 0x1.74962cp-77f, 0x1.12b4f4p-24f, 0.0f,
     0x1.d1f188p-104f, 0.0f, 0x1.aedec4p-113f, 0x1.13c562p-43f, 0.0f,
     0x1.8bfaeap-109f, 0x1.2fd86ap-23f, 0x1.3b806cp-76f, 0.0f, 0.0f, 0x1.d33b2cp-110f,
     0x1.71758p-28f, 0x1.f677e2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c667ap-56f,
     0.0f, 0x1.84fa0ep-125f, 0.0f, 0.0f, 0x1.5e1a8p-9f, 0.0f, 0x1.7ebf0cp-22f, 0.0f,
     0x1.302b02p-120f, 0x1.eafc14p-104f, 0.0f, 0x1.07b466p-73f, 0x1.0c68c4p-107f,
     0.0f, 0.0f, 0x1.129fe6p-55f, 0x1.dc37d4p-99f, 0x1.f674cap-37f, 0.0f,
     0x1.5101eap-13f, 0x1.ba7d7ep-61f, 0.0f, 0x1.d543a2p-95f, 0x1.9089ccp-72f,
     0x1.9ef556p-99f, 0x1.f4a368p-35f, 0.0f, 0.0f, 0.0f, 0x1.2a5d4ap-110f,
     0x1.d2d97cp-32f, 0.0f, 0.0f, 0x1.7575dp-5f, 0x1.061ceep-71f, 0x1.52e6fap-121f,
     0x1.7422b2p-3f, 0x1.f78c0ep-77f, 0x1.33a1ecp-121f, 0.0f, 0x1.980d6ap-47f, 0.0f,
     0x1.a1d342p-54f, 0.0f, 0.0f, 0x1.49e36ap-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37a208p-110f, 0.0f, 0.0f, 0x1.af73bcp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e28dap-82f, 0x1.96bd54p-64f, 0x1.02e63p-62f, 0.0f, 0x1.498374p-64f, 0.0f,
     0x1.12f3p-39f, 0.0f, 0.0f, 0x1.567012p-44f, 0.0f, 0.0f, 0.0f, 0x1.4198p-111f,
     0x1.fc029p-97f, 0.0f, 0.0f, 0.0f, 0x1.977758p-106f, 0x1.1f2bbp-97f,
     0x1.0063c6p-80f, 0x1.db6426p-23f, 0x1.d39a24p-9f, 0.0f, 0.0f, 0x1.ae7cd2p-97f,
     0x1.a5decap-70f, 0.0f, 0.0f, 0x1.639f94p-125f, 0x1.5785b6p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19c292p-26f, 0.0f, 0.0f, 0.0f,
     0x1.8c3a1ap-3f, 0.0f, 0.0f, 0.0f, 0x1.b88f42p-7f, 0x1.ea265cp-60f,
     0x1.407a86p-4f, 0x1.ed6008p-107f, 0.0f, 0.0f, 0.0f, 0x1.0bb6f2p-17f, 0.0f,
     0x1.df05d6p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f23f1p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b11e9p-75f, 0.0f, 0.0f, 0x1.29a902p-105f, 0.0f, 0.0f,
     0x1.3f1a18p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33af3p-27f, 0x1.4b4a14p-101f,
     0x1.093fbap-121f, 0x1.b6d17ap-85f, 0x1.c8626cp-115f, 0x1.f6793cp-46f,
     0x1.e6f67cp-9f, 0.0f, 0x1.85bfa8p-125f, 0.0f, 0.0f, 0x1.4821ecp-88f,
     0x1.0e2824p-42f, 0x1.e68fa6p-54f, 0x1.984f98p-53f, 0x1.cd9232p-67f, 0.0f,
     0x1.600bp-29f, 0x1.8046fep-109f, 0.0f, 0x1.bf1c58p-68f, 0x1.5ad1a6p-2f, 0.0f,
     0.0f, 0x1.6f572ep-96f, 0x1.750ca8p-11f, 0x1.a1893ep-63f, 0x1.55cffep-78f,
     0x1.b0d256p-89f, 0.0f, 0.0f, 0x1.f34b22p-28f, 0x1.28a1c2p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4060d4p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3780bep-71f, 0.0f, 0.0f,
     0.0f, 0x1.7909b4p-1f, 0.0f, 0x1.29b396p-82f, 0.0f, 0x1.ca901ep-85f,
     0x1.120078p-109f, 0.0f, 0x1.2330bap-113f, 0.0f, 0x1.e8dbdcp-81f, 0.0f,
     0x1.b7b5eep-75f, 0x1p0f, 0x1.e3eeccp-108f, 0x1.72896cp-96f, 0x1.8f543cp-69f,
     0x1.3ecedp-74f, 0x1.196106p-59f, 0.0f, 0x1.8c83fcp-102f, 0.0f, 0x1.684194p-2f,
     0x1.693daep-118f, 0.0f, 0x1.b44344p-73f, 0.0f, 0x1.20db22p-115f, 0x1.b73972p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5c3dp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1f35ap-4f,
     0.0f, 0.0f, 0.0f, 0x1.dd3d86p-21f, 0x1.d1d0dap-1f, 0.0f, 0x1.050088p-112f, 0.0f,
     0x1.8f9ecp-27f, 0x1.2ce96ep-90f, 0x1.a304ccp-109f, 0.0f, 0.0f, 0.0f,
     0x1.54e164p-93f, 0.0f, 0x1.d434bep-82f, 0.0f, 0.0f, 0.0f, 0x1.91a4d6p-9f,
     0x1.b45d4cp-21f, 0.0f, 0x1.6d508ap-14f, 0x1.f164fap-34f, 0x1.f3b0d2p-56f,
     0x1.a2d0acp-44f, 0.0f, 0x1.b2d3e2p-14f, 0.0f, 0x1.8c42aep-89f, 0.0f, 0.0f, 0.0f,
     0x1.7dc654p-80f, 0x1.ea1facp-1f, 0x1.b3984ep-44f, 0x1.5e8208p-89f, 0.0f, 0.0f,
     0x1.e2c046p-123f, 0x1.7c6694p-72f, 0.0f, 0x1.983c78p-69f, 0.0f, 0.0f,
     0x1.b1336ep-74f, 0x1.e31e6ep-32f, 0.0f, 0.0f, 0x1.52170cp-15f, 0.0f, 0.0f,
     0x1.f199dcp-51f, 0x1.0c1a12p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7d9acp-50f, 0x1.41c56cp-37f, 0.0f, 0x1.8b3a0ap-51f, 0x1.92c0e4p-108f, 0.0f,
     0x1.a63f62p-71f, 0x1.595bfcp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad5886p-8f, 0.0f, 0.0f, 0.0f, 0x1.314f68p-83f, 0x1.a3aec8p-66f,
     0x1.25e3eep-90f, 0.0f, 0x1.548006p-44f, 0.0f, 0x1.6ed28ap-46f, 0x1.9d4626p-55f,
     0x1.465986p-21f, 0x1.edadb8p-92f, 0x1.aae4eap-39f, 0.0f, 0.0f, 0x1.6f675ep-123f,
     0x1.c63a6cp-2f, 0x1.97dce6p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.560d64p-109f, 0.0f, 0.0f, 0.0f, 0x1.988c6cp-86f, 0.0f, 0x1.4b1c88p-84f,
     0x1.af57ap-108f, 0.0f, 0x1.9cbc9ap-80f, 0.0f, 0.0f, 0x1.76def2p-112f,
     0x1.5a7086p-70f, 0.0f, 0.0f, 0x1.655deep-108f, 0x1.fdefep-58f, 0x1.0a1fcep-57f,
     0x1.03eaf2p-18f, 0.0f, 0x1.55284ap-115f, 0x1.f9e092p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57db9cp-71f, 0x1.529ce2p-59f, 0.0f, 0x1.8ab4a4p-18f, 0x1.d67108p-51f,
     0x1.788506p-121f, 0x1.eb32d6p-63f, 0x1.830e58p-60f, 0x1.d84faep-9f,
     0x1.7829a2p-4f, 0x1.420a0cp-77f, 0x1.3aefe4p-86f, 0x1.154608p-47f, 0.0f,
     0x1.3ae10ep-1f, 0.0f, 0x1.06ac4p-26f, 0x1p0f, 0.0f, 0x1.cd365p-23f, 0.0f, 0.0f,
     0x1.f88296p-123f, 0.0f, 0x1.5b9e1ep-44f, 0x1.b781f6p-119f, 0.0f, 0x1.99a5b8p-21f,
     0.0f, 0.0f, 0x1.9f13b4p-7f, 0.0f, 0x1.92755ap-61f, 0.0f, 0x1.af46f8p-86f,
     0x1.a6ed1ap-99f, 0.0f, 0.0f, 0x1.85f9f4p-33f, 0x1.89e026p-117f, 0x1.8e8e72p-91f,
     0x1.982ad4p-94f, 0x1.25b0f8p-46f, 0x1.2f9e7cp-96f, 0x1.f1369cp-120f,
     0x1.4cb394p-122f, 0.0f, 0x1.f8c308p-122f, 0x1.755722p-13f, 0x1.8a25ccp-94f,
     0x1.ece772p-85f, 0.0f, 0x1.150786p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9d448p-40f, 0.0f, 0x1.49a698p-69f, 0.0f,
     0x1.ea2032p-78f, 0x1.cf96b4p-14f, 0x1.634a54p-74f, 0.0f, 0.0f, 0.0f,
     0x1.b1c4ccp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a417ep-53f, 0x1.654e84p-28f,
     0x1.6e58f6p-110f, 0x1.d1dc14p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71b384p-37f, 0.0f,
     0x1.dac4dep-24f, 0.0f, 0x1.ce391ep-77f, 0.0f, 0.0f, 0.0f, 0x1.79d954p-95f, 0.0f,
     0x1.1bec4p-51f, 0x1.4f455ap-58f, 0x1.da9874p-97f, 0x1.c72f36p-80f,
     0x1.f8a632p-113f, 0x1.6b4144p-45f, 0x1.9adc86p-88f, 0.0f, 0x1.a1f026p-76f,
     0x1.93a194p-73f, 0x1.7405f8p-98f, 0.0f, 0x1.d6069cp-85f, 0.0f, 0x1.ca6b46p-87f,
     0x1.4fe7eap-44f, 0.0f, 0x1.66024ep-32f, 0x1.b80ae6p-66f, 0x1.5d161ep-25f,
     0x1.b8af02p-15f, 0.0f, 0.0f, 0.0f, 0x1.e7217ap-8f, 0x1.17b292p-99f, 0.0f,
     0x1.e0e6e4p-44f, 0x1.94e9f8p-37f, 0.0f, 0x1.148536p-36f, 0x1.3b3e74p-92f,
     0x1.efeffap-116f, 0.0f, 0x1.449434p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e73ebap-51f,
     0x1.e84f9ap-23f, 0x1.99fdcap-102f, 0x1.f010dp-49f, 0x1.58d6f6p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c72ad2p-47f, 0x1.fd6dep-20f, 0.0f, 0x1.25f53ep-52f,
     0.0f, 0x1.0aa9e6p-91f, 0x1.d2fd5cp-36f, 0x1.6834d8p-96f, 0.0f, 0.0f,
     0x1.ee0934p-98f, 0.0f, 0.0f, 0x1.5a66e8p-120f, 0.0f, 0x1.08621ep-69f,
     0x1.d16c1ep-16f, 0x1.c90be6p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8b6d2p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db0a96p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2719c2p-15f, 0.0f, 0.0f, 0x1.3ba25ap-14f, 0.0f, 0x1.2e0688p-113f,
     0x1.b9bffep-44f, 0x1.7839b6p-14f, 0x1.361ceap-92f, 0x1.7bd02p-32f,
     0x1.bf01b2p-19f, 0.0f, 0x1.ec0da8p-16f, 0x1.307e74p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e22b8p-5f, 0.0f, 0x1.a53e78p-43f, 0x1.e7b0f8p-118f,
     0x1.c8f544p-30f, 0.0f, 0.0f, 0x1.0f11dp-119f, 0.0f, 0x1.111d9ap-82f, 0.0f,
     0x1.58e41ep-11f, 0x1.f69566p-116f, 0x1.c82198p-66f, 0x1.632dep-96f,
     0x1.11e696p-107f, 0.0f, 0.0f, 0x1.1c18b6p-19f, 0.0f, 0x1.c6ab14p-6f, 0.0f,
     0x1.4fadd8p-46f, 0x1.bbec7p-26f, 0.0f, 0.0f, 0x1.80868p-17f, 0x1.fd85d4p-31f,
     0x1.7e5d7p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e3324p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.627e8ap-77f, 0x1.f2f312p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82810ep-83f,
     0x1.bcfe9p-38f, 0x1.862ad4p-78f, 0x1.0da7fep-86f, 0.0f, 0.0f, 0.0f,
     0x1.06e9f8p-89f, 0x1.06e904p-109f, 0.0f, 0.0f, 0x1.153f98p-12f, 0.0f, 0.0f,
     0x1.d39cfep-23f, 0x1.0072f8p-35f, 0x1.eb0e7cp-65f, 0x1.42d3d2p-68f, 0.0f,
     0x1.4c5aep-88f, 0x1.5459bep-51f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_truncf4_kvx(tmp0);
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
    printf("Sleef_finz_truncf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_truncf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
