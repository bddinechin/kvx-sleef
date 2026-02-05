/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastcosf4_u3500kvx.c --function \
 *     Sleef_fastcosf4_u3500kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.9b3ddep-41f, 0.0f, 0.0f, 0.0f, 0x1.87f83ap-4f, 0x1.a1a5bp-4f,
     0.0f, 0x1.8d0816p-36f, 0.0f, 0x1.010388p-43f, 0.0f, 0.0f, 0x1.ce801p-105f, 0.0f,
     0x1.2fb0dep-80f, 0.0f, 0.0f, 0x1.10cdf4p-109f, 0.0f, 0.0f, 0x1.e1c64cp-105f,
     0x1.5904a4p-52f, 0x1.e0695p-74f, 0.0f, 0.0f, 0x1.d83c1ep-32f, 0x1.012738p-23f,
     0x1.e69ea4p-33f, 0x1.dc3614p-63f, 0x1.3661cap-28f, 0.0f, 0.0f, 0.0f,
     0x1.3161bap-91f, 0x1.308008p-56f, 0.0f, 0.0f, 0x1.df0b8p-49f, 0.0f, 0.0f,
     0x1.35dc6ep-110f, 0x1.37976ep-47f, 0.0f, 0.0f, 0x1.6bdb42p-96f, 0x1.bc3f64p-120f,
     0x1.093146p-3f, 0x1.5dc7f6p-55f, 0.0f, 0x1.0ce6a8p-112f, 0x1.e97a28p-55f,
     0x1.3fc2e8p-123f, 0.0f, 0x1.001b92p-111f, 0x1.2a6a98p-125f, 0.0f, 0x1.1bedbp-70f,
     0x1.9a6e5cp-22f, 0x1.0cceb2p-50f, 0x1.aa7f9cp-28f, 0.0f, 0.0f, 0x1.22eb9p-76f,
     0.0f, 0.0f, 0x1.66b79p-77f, 0x1.70ff3p-51f, 0x1.7885c4p-69f, 0x1.64315ap-97f,
     0x1.d5b75cp-12f, 0x1.9a8708p-19f, 0x1.2ec44ap-82f, 0.0f, 0.0f, 0x1.1378aep-39f,
     0x1.5065bap-98f, 0.0f, 0x1.ef8bccp-59f, 0x1.ae6dcep-61f, 0x1.d99974p-47f,
     0x1.23148ep-29f, 0x1.53cb8ap-108f, 0x1.16c2fcp-105f, 0.0f, 0x1.ddee04p-75f,
     0x1.0022e2p-88f, 0.0f, 0.0f, 0x1.ef3fccp-12f, 0x1.0b93f6p-111f, 0x1.214a54p-39f,
     0x1.cc5fc4p-52f, 0x1.532c72p-3f, 0.0f, 0x1.cd00f8p-122f, 0.0f, 0.0f,
     0x1.b74018p-117f, 0x1.c574dp-3f, 0x1.1c5deep-126f, 0.0f, 0.0f, 0x1.c47274p-15f,
     0.0f, 0x1.6cee3ep-41f, 0x1.e9ddc6p-100f, 0x1.88e732p-40f, 0x1.fcfdb8p-14f,
     0x1.565ae2p-53f, 0x1.cc1b3ep-61f, 0.0f, 0x1.0122e4p-79f, 0.0f, 0.0f,
     0x1.3dbbdep-79f, 0x1.4df7bp-17f, 0x1.5442f4p-79f, 0.0f, 0x1.a3ccacp-78f,
     0x1.89b4acp-7f, 0.0f, 0x1.05b702p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ecbf6p-51f,
     0.0f, 0x1.6c96ep-60f, 0.0f, 0.0f, 0x1.a0638ep-111f, 0.0f, 0.0f, 0x1.1e5e5p-56f,
     0.0f, 0.0f, 0x1.7fe7c8p-39f, 0.0f, 0x1.e2a2bep-125f, 0.0f, 0.0f,
     0x1.ebf962p-110f, 0x1.eb61c8p-24f, 0x1.5f07fap-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.335ed2p-85f, 0.0f, 0x1.16901ap-98f, 0x1.ce9832p-38f, 0.0f, 0x1.ecd7fep-57f,
     0x1.36ac84p-89f, 0.0f, 0x1.6d2664p-1f, 0.0f, 0.0f, 0.0f, 0x1.011574p-6f,
     0x1.ec3b8ep-120f, 0x1.a8c846p-118f, 0x1.5df50ap-45f, 0.0f, 0x1.d0965p-21f,
     0x1.7b6228p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.454472p-31f, 0.0f, 0.0f, 0.0f,
     0x1.15491p-45f, 0x1.50fc18p-49f, 0x1.435528p-81f, 0x1.3a6d74p-73f, 0.0f,
     0x1.8058d4p-64f, 0x1.23d85ep-105f, 0x1.6360a4p-78f, 0x1.72dce4p-38f, 0.0f,
     0x1.01b5fp-102f, 0.0f, 0.0f, 0x1.a4c6f8p-7f, 0.0f, 0.0f, 0.0f, 0x1.b3185cp-90f,
     0.0f, 0x1.66ff88p-110f, 0.0f, 0.0f, 0.0f, 0x1.f83938p-102f, 0.0f,
     0x1.0ff544p-35f, 0.0f, 0x1.09eb9p-113f, 0.0f, 0.0f, 0.0f, 0x1.c635aep-71f,
     0x1.bb8604p-21f, 0.0f, 0x1.6af8ap-36f, 0.0f, 0x1.c11b36p-95f, 0x1.0d0252p-15f,
     0x1.51b36ap-59f, 0x1.39c798p-8f, 0x1.da962ap-12f, 0.0f, 0x1.c7ad78p-2f, 0.0f,
     0x1.70432cp-105f, 0x1.3868eap-77f, 0x1.ddbb8cp-71f, 0x1.907978p-11f,
     0x1.3f03dep-25f, 0x1.c786eap-30f, 0.0f, 0x1.a3ae9cp-110f, 0.0f, 0x1.0a87bap-119f,
     0x1.2de85p-78f, 0.0f, 0.0f, 0x1.243f9ep-57f, 0.0f, 0x1.760c4cp-38f,
     0x1.831e42p-75f, 0x1.a87bd6p-57f, 0x1.74b33p-45f, 0.0f, 0.0f, 0.0f,
     0x1.676686p-23f, 0x1.183b36p-33f, 0x1.7cbeacp-59f, 0.0f, 0.0f, 0x1.c569e6p-63f,
     0x1.5aa36p-23f, 0x1.f3850ep-119f, 0.0f, 0x1.9f7f78p-75f, 0.0f, 0.0f,
     0x1.492354p-2f, 0.0f, 0x1.77fd3cp-90f, 0x1.61685ap-31f, 0.0f, 0.0f,
     0x1.107b1cp-25f, 0x1.5538fp-78f, 0x1.18e598p-98f, 0x1.1621fp-37f,
     0x1.fd30eap-107f, 0.0f, 0x1.0d8306p-50f, 0x1.d4f32cp-94f, 0.0f, 0x1.bc5d98p-102f,
     0x1.9dc2dep-35f, 0x1.38d8d8p-20f, 0x1.288686p-41f, 0.0f, 0.0f, 0x1.f5eff8p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbfefcp-38f, 0x1.a2a0fep-52f, 0x1.beba16p-69f, 0.0f,
     0.0f, 0.0f, 0x1.f1f48ep-31f, 0x1.7e5f2p-40f, 0x1.9a4ebap-32f, 0.0f, 0.0f, 0.0f,
     0x1.75b7a2p-16f, 0x1.15edp-59f, 0x1.236aa4p-83f, 0x1.047dacp-2f, 0x1.8e6918p-43f,
     0x1.d4e294p-13f, 0.0f, 0x1.5459ccp-36f, 0.0f, 0x1.bf0f4p-58f, 0x1.a7e54p-53f,
     0x1.93d5d8p-85f, 0x1.e24bd8p-108f, 0.0f, 0x1.cbcc0ap-24f, 0x1.0f5856p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a215ep-20f, 0x1.4b1512p-37f, 0.0f, 0x1.2c2b3ap-7f,
     0x1.aa104p-45f, 0.0f, 0x1.fa584ap-118f, 0.0f, 0x1.7d7a8p-28f, 0.0f,
     0x1.83502ap-61f, 0x1.434054p-95f, 0x1.58d2a6p-103f, 0x1.594e6p-12f, 0.0f,
     0x1.1aa04ap-41f, 0x1.a91806p-40f, 0x1.6997e6p-52f, 0x1.a3cac8p-2f,
     0x1.b75e56p-39f, 0x1.7ff668p-66f, 0.0f, 0.0f, 0x1.d43caep-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d41292p-1f, 0x1.6cc47ep-19f, 0x1.e306a2p-28f, 0.0f, 0.0f, 0.0f,
     0x1.85fa94p-106f, 0x1.3e3136p-50f, 0.0f, 0x1.4c1fp-107f, 0.0f, 0x1.d9b5a8p-101f,
     0x1.e3c824p-3f, 0.0f, 0.0f, 0x1.47a09p-86f, 0x1.c82508p-16f, 0x1.c4d128p-87f,
     0x1.c3127p-115f, 0x1.639d14p-2f, 0x1.d85178p-107f, 0x1.adb46ap-55f, 0.0f,
     0x1.8a541ap-92f, 0.0f, 0.0f, 0x1.8f2f4p-76f, 0x1.f140d2p-40f, 0.0f,
     0x1.454a2p-34f, 0.0f, 0x1.2eab9p-107f, 0.0f, 0x1.d988c8p-19f, 0x1.c4c29cp-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa98acp-70f, 0x1.807a68p-122f, 0.0f,
     0x1.0f2966p-7f, 0.0f, 0.0f, 0.0f, 0x1.e828a2p-90f, 0x1.f6595ap-123f,
     0x1.cfac78p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4746acp-31f,
     0x1.3a38b6p-34f, 0x1.4d77fep-96f, 0x1.80fe58p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.84884p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.613806p-36f, 0x1.afcc2p-24f,
     0x1.148746p-89f, 0x1.0a6adep-11f, 0x1.88f4c8p-109f, 0x1.c0fbf2p-10f,
     0x1.4377fep-1f, 0x1.8d2cc4p-51f, 0.0f, 0x1.b7772cp-95f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.eff73ap-27f, 0x1.2ea5fap-84f, 0.0f, 0.0f, 0x1.3265dep-1f, 0x1.45cep-123f,
     0x1.aa6e08p-74f, 0.0f, 0x1.ee38fp-84f, 0x1.eb891cp-48f, 0x1.67140ep-40f,
     0x1.467d54p-85f, 0.0f, 0x1.85f192p-85f, 0x1.b2268ap-27f, 0.0f, 0x1.09cacep-33f,
     0.0f, 0.0f, 0.0f, 0x1.2da744p-87f, 0x1.c2635p-36f, 0x1.b810a4p-28f,
     0x1.9f3dccp-122f, 0x1.8a5838p-35f, 0.0f, 0x1.24b6fp-115f, 0x1.bb88eap-102f, 0.0f,
     0.0f, 0.0f, 0x1.b09e22p-47f, 0.0f, 0x1.0c1c5ep-108f, 0.0f, 0.0f,
     0x1.1ee65ep-117f, 0x1.f68096p-39f, 0.0f, 0.0f, 0.0f, 0x1.5f7666p-77f,
     0x1.328df4p-89f, 0.0f, 0x1.d2e176p-13f, 0.0f, 0x1.fc64dcp-36f, 0.0f,
     0x1.2ba79ap-87f, 0x1.16d9b6p-103f, 0.0f, 0x1.6aa106p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.55139ap-107f, 0x1.30eaf4p-23f, 0.0f, 0x1.88f588p-104f, 0.0f,
     0x1.9ad6a4p-50f, 0x1.951542p-124f, 0x1.14eb86p-35f, 0x1.7204dcp-42f,
     0x1.444338p-94f, 0x1.c0f306p-74f, 0.0f, 0.0f, 0x1.c813c8p-10f, 0x1.ab83a4p-22f,
     0.0f, 0x1.d37ea6p-80f, 0x1.c66d5ep-2f, 0x1.6b8d7ep-115f, 0.0f, 0x1.569316p-6f,
     0.0f, 0x1.69e4e8p-61f, 0.0f, 0.0f, 0x1.0d5c9ep-72f, 0x1.c3dc7ep-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.622e74p-51f, 0x1.242288p-88f, 0x1.a87998p-113f,
     0.0f, 0x1.642ca4p-61f, 0x1.1c8a24p-119f, 0.0f, 0x1.aba01ep-89f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.740b02p-88f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.0b4dd8p-29f, 0x1.323c12p-82f, 0x1.c4811ep-17f, 0.0f, 0x1.7f2b2ep-112f,
     0x1.f8d7b6p-12f, 0.0f, 0.0f, 0x1.dac284p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e74dp-96f, 0x1.37403ap-64f, 0.0f, 0.0f, 0.0f, 0x1.1bf4a6p-92f,
     0x1.803546p-71f, 0x1.d68e58p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c9502p-125f, 0x1.539ceap-45f, 0x1.d2f26cp-3f, 0.0f, 0x1.42aea6p-42f,
     0x1.5dbeb8p-21f, 0x1.ecf242p-96f, 0.0f, 0x1.c28464p-42f, 0x1.16573ap-22f,
     0x1.c06612p-46f, 0.0f, 0x1.80af9p-121f, 0.0f, 0.0f, 0.0f, 0x1.a1d622p-53f, 0.0f,
     0x1.314878p-9f, 0x1.6cd6aap-83f, 0x1.b885e4p-47f, 0x1.1a1b68p-11f, 0.0f,
     0x1.6490aap-74f, 0.0f, 0.0f, 0.0f, 0x1.03b254p-125f, 0.0f, 0x1.2bf2e2p-22f,
     0x1.7ef514p-13f, 0.0f, 0x1.98bd9ap-70f, 0.0f, 0.0f, 0x1.d81f5ep-56f, 0.0f,
     0x1.eac0e2p-41f, 0x1.e9ed92p-31f, 0.0f, 0x1.a9c562p-108f, 0x1.492244p-21f,
     0x1.4d06c8p-16f, 0x1.d17c46p-91f, 0x1.0dbbb6p-3f, 0.0f, 0.0f, 0.0f,
     0x1.ccbd26p-112f, 0.0f, 0x1.44893p-108f, 0.0f, 0.0f, 0x1.4c0dd4p-53f,
     0x1.1466fep-76f, 0x1.047eb6p-60f, 0.0f, 0x1.a8a182p-112f, 0x1.90db5cp-62f,
     0x1.2997aep-79f, 0x1.10d95p-73f, 0x1.887d6ap-110f, 0x1.dbfdd2p-101f, 0.0f,
     0x1.cdae32p-21f, 0x1.592e22p-90f, 0.0f, 0x1.4653a8p-20f, 0x1.38aceap-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c70aa6p-100f, 0.0f, 0.0f, 0x1.18b908p-74f, 0.0f,
     0x1.5feef6p-121f, 0.0f, 0.0f, 0.0f, 0x1.ef38ap-13f, 0.0f, 0x1.e00206p-91f,
     0x1.e10beap-60f, 0.0f, 0.0f, 0x1.1ba32ep-109f, 0x1.d54eep-81f, 0x1.efe134p-37f,
     0.0f, 0x1.e87b72p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41f198p-59f, 0x1.33093ap-82f,
     0x1.d1fdf2p-121f, 0.0f, 0x1.d228p-108f, 0x1.ad608ap-83f, 0x1.409f0ep-126f, 0.0f,
     0x1.f7845ep-22f, 0x1.c4ed38p-3f, 0x1.d72aaap-77f, 0x1.2fed8ap-11f,
     0x1.b3e342p-39f, 0x1.8ed908p-50f, 0.0f, 0.0f, 0.0f, 0x1.05c2bap-114f,
     0x1.92f65ep-63f, 0x1.45a88p-60f, 0x1.3635c6p-105f, 0x1.278e4ep-106f, 0.0f, 0.0f,
     0x1.bbcc88p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe313cp-57f, 0x1.590822p-109f,
     0x1.529b88p-28f, 0x1.76bd72p-1f, 0x1.9dfccap-27f, 0.0f, 0x1.80148p-39f, 0.0f,
     0x1.35bac6p-99f, 0x1.8256e8p-125f, 0.0f, 0x1.9c1296p-28f, 0.0f, 0.0f,
     0x1.16ed2ep-14f, 0x1.0eb5ccp-62f, 0x1.fb6f76p-70f, 0.0f, 0x1.20f8e2p-106f, 0.0f,
     0x1.36d51ep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f3fa8p-68f,
     0x1.702ac6p-59f, 0.0f, 0.0f, 0x1.e687a2p-36f, 0.0f, 0.0f, 0.0f, 0x1.176108p-52f,
     0x1.ab3ep-60f, 0.0f, 0.0f, 0.0f, 0x1.676bcap-7f, 0x1.697f08p-70f,
     0x1.b6df0cp-83f, 0.0f, 0x1.f2befap-38f, 0x1.c9a76cp-58f, 0x1.4854p-100f, 0.0f,
     0x1.cdbc3ep-72f, 0x1.9c709ap-11f, 0x1.2f9dfep-58f, 0.0f, 0.0f, 0x1.39665cp-122f,
     0x1.8b90e8p-80f, 0.0f, 0.0f, 0x1.6cb08ap-28f, 0x1.d8f3a4p-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.875038p-17f, 0.0f, 0.0f, 0x1.8acedep-52f,
     0x1.6ac0fep-92f, 0.0f, 0.0f, 0.0f, 0x1.bf22aep-60f, 0x1.85d45cp-85f, 0.0f, 0.0f,
     0x1.0cec9p-76f, 0x1.8a654ap-126f, 0x1.bf7c18p-100f, 0x1.abf4b4p-57f,
     0x1.aa8ea4p-47f, 0.0f, 0x1.0cc22ap-87f, 0.0f, 0.0f, 0x1.92bbe8p-41f,
     0x1.ebb714p-110f, 0.0f, 0.0f, 0x1.db34ecp-3f, 0x1.74214ep-68f, 0.0f, 0.0f,
     0x1.d3da6p-104f, 0.0f, 0.0f, 0.0f, 0x1.571e9p-56f, 0.0f, 0.0f, 0x1.d33fd6p-24f,
     0x1.73a12ap-59f, 0x1.266306p-115f, 0x1.e118d8p-3f, 0x1.fc4266p-113f, 0.0f, 0.0f,
     0.0f, 0x1.a10bdcp-70f, 0x1.d42b16p-60f, 0.0f, 0.0f, 0x1.86e966p-113f,
     0x1.c3822ap-44f, 0x1.10d44ap-19f, 0.0f, 0x1.e7e106p-105f, 0x1.b4d316p-97f, 0.0f,
     0x1.dee97p-70f, 0x1.2e91bcp-90f, 0.0f, 0x1.5d6142p-81f, 0.0f, 0.0f, 0.0f,
     0x1.e347eep-46f, 0x1.3bb6d4p-87f, 0.0f, 0.0f, 0x1.e62918p-41f, 0x1.714f4ap-15f,
     0x1.6a6fa2p-28f, 0.0f, 0x1.4c9cfp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e2542p-122f, 0x1.8483b6p-29f, 0x1.61adf2p-26f, 0x1.6e42dcp-1f,
     0x1.95201ap-3f, 0.0f, 0.0f, 0x1.ffd47cp-20f, 0x1.7e6a24p-50f, 0.0f,
     0x1.138608p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ab99ep-74f, 0x1.bfa84p-2f,
     0x1.b6f4f6p-104f, 0x1.4e9d34p-16f, 0x1.6d4784p-21f, 0.0f, 0.0f, 0x1.869a48p-13f,
     0.0f, 0.0f, 0x1.f2f128p-29f, 0.0f, 0x1.80ed1p-96f, 0.0f, 0x1.8acb2ep-83f,
     0x1.380c52p-60f, 0.0f, 0.0f, 0x1.e14eap-54f, 0.0f, 0.0f, 0.0f, 0x1.8a083ap-118f,
     0.0f, 0x1.8d571ap-77f, 0x1.a4564ap-50f, 0x1.a07122p-101f, 0.0f, 0x1.29cbdap-81f,
     0x1.04553p-8f, 0x1.31b834p-45f, 0x1.281298p-118f, 0.0f, 0.0f, 0x1.d2499ap-79f,
     0.0f, 0x1.a565c6p-94f, 0x1.f7ace2p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47bed2p-38f, 0x1.5f9ec2p-45f, 0x1.b19c68p-38f, 0.0f, 0.0f, 0.0f,
     0x1.356b56p-65f, 0.0f, 0.0f, 0.0f, 0x1.4162fep-43f, 0x1.c567e4p-72f, 0.0f, 0.0f,
     0x1.4a9ceep-117f, 0x1.94501p-114f, 0.0f, 0.0f, 0.0f, 0x1.b7be28p-93f, 0.0f,
     0x1.ed50bep-14f, 0x1.3d9084p-99f, 0.0f, 0.0f, 0.0f, 0x1.4a90b6p-126f, 0.0f,
     0x1.117eeap-72f, 0x1.0b5fecp-93f, 0.0f, 0.0f, 0x1.e563cep-114f, 0.0f,
     0x1.0f80acp-10f, 0x1.d0fb06p-4f, 0.0f, 0x1.893a34p-53f, 0.0f, 0x1.76808cp-39f,
     0x1.ec8e5cp-94f, 0.0f, 0x1.d8ef66p-32f, 0x1.218c6p-69f, 0x1.c49094p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7abaap-92f, 0.0f, 0x1.53c9c8p-56f,
     0x1.8759dep-55f, 0.0f, 0.0f, 0.0f, 0x1.be336ep-16f, 0x1.51920ep-16f, 0.0f, 0.0f,
     0x1.2d1624p-48f, 0x1.c2bc56p-35f, 0x1.ebc434p-81f, 0x1.e1140cp-114f, 0.0f, 0.0f,
     0x1.90593cp-15f, 0x1.f8305cp-17f, 0x1.8c9656p-51f, 0.0f, 0x1.9f0f4ep-69f, 0.0f,
     0x1.645efep-84f, 0.0f, 0.0f, 0.0f, 0x1.cdf76ap-75f, 0.0f, 0x1.806a64p-70f, 0.0f,
     0x1.4e3964p-65f, 0x1.f2f284p-86f, 0x1.cbcec2p-119f, 0.0f, 0x1.3c42bap-30f,
     0x1.262668p-37f, 0x1.20cbep-38f, 0x1.060d06p-121f, 0x1.bb6c84p-4f,
     0x1.09076ap-41f, 0.0f, 0.0f, 0x1.a7ff8p-112f, 0x1.11e15ep-38f, 0.0f, 0.0f,
     0x1.119f6p-39f, 0x1.b53cb6p-50f, 0.0f, 0.0f, 0.0f, 0x1.b05b5cp-4f, 0.0f, 0.0f,
     0.0f, 0x1.18262ap-1f, 0.0f
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
            tmp1 = Sleef_fastcosf4_u3500kvx(tmp0);
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
    printf("Sleef_fastcosf4_u3500kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fastcosf4_u3500kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
