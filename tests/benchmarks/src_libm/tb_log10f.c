/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_log10f.c --function log10f --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.28b2c2p-121f, 0x1.1e407ap-75f, 0x1.78233ep-13f, 0x1.c2743ep-7f, 0.0f,
     0x1.ad428ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eac2ep-33f, 0.0f, 0.0f, 0.0f,
     0x1.09fce4p-35f, 0x1.58df3ep-63f, 0.0f, 0.0f, 0x1.b7bf04p-8f, 0x1.660eb6p-93f,
     0.0f, 0.0f, 0x1.b157eap-57f, 0x1.04575p-80f, 0x1.2a7b4p-31f, 0.0f, 0.0f,
     0x1.fe4ec4p-87f, 0x1.e0b9a6p-100f, 0.0f, 0.0f, 0.0f, 0x1.a27dcep-66f, 0.0f, 0.0f,
     0x1.ee9a84p-69f, 0x1.7d8a26p-96f, 0x1.713cbep-80f, 0x1.4acb52p-121f,
     0x1.bd0288p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ab28cp-65f, 0.0f, 0x1.88c5c4p-102f,
     0.0f, 0.0f, 0.0f, 0x1.06a33ap-68f, 0.0f, 0.0f, 0x1.0dabb8p-81f, 0x1.99c836p-54f,
     0x1.aa09fep-55f, 0.0f, 0.0f, 0x1.a99e28p-95f, 0.0f, 0x1.353a1cp-109f, 0.0f,
     0x1.f088b6p-98f, 0x1.35eae6p-26f, 0x1.4a5ac2p-40f, 0.0f, 0x1.e4740cp-43f, 0.0f,
     0.0f, 0x1.8613a8p-58f, 0x1.6ea14cp-52f, 0.0f, 0x1.c87422p-115f, 0x1.5197f2p-36f,
     0x1.6536a2p-71f, 0.0f, 0x1.7067f6p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51a3cep-96f,
     0x1.5000eep-110f, 0x1.e177c6p-25f, 0.0f, 0x1.f871ap-44f, 0x1.0473c6p-47f,
     0x1.621226p-125f, 0x1.0174e6p-98f, 0.0f, 0.0f, 0x1.d3aa7p-57f, 0x1.0754c8p-5f,
     0x1.b377dap-102f, 0.0f, 0x1.5b8fbap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5a18cp-1f, 0.0f, 0x1.4c1ee4p-119f, 0.0f, 0x1.548cf2p-15f, 0x1.fc6a4ap-6f,
     0.0f, 0x1.b0feaap-63f, 0.0f, 0x1.587662p-93f, 0x1.8190b4p-100f, 0.0f, 0.0f,
     0x1.a45954p-65f, 0.0f, 0x1.fdec9p-114f, 0x1.fb2908p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb281cp-27f, 0x1.1e8b1ep-51f, 0x1.2538fep-33f, 0x1.2a66b6p-21f,
     0x1.10faccp-70f, 0x1.08fd72p-108f, 0.0f, 0x1.12f22cp-82f, 0.0f, 0.0f,
     0x1.10664ap-68f, 0x1.63f0d4p-80f, 0x1.d5da18p-69f, 0x1.7b8eap-18f, 0.0f,
     0x1.561a9cp-112f, 0.0f, 0x1.9d0522p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11cd82p-100f, 0x1.ae7b1ep-93f, 0.0f, 0.0f, 0.0f, 0x1.ac78dep-45f, 0.0f,
     0x1.532cc2p-66f, 0.0f, 0x1.95f37ep-63f, 0.0f, 0x1.ce0e3ep-17f, 0x1.d8c81ap-20f,
     0.0f, 0x1.f32808p-47f, 0.0f, 0x1.c2a28ap-94f, 0x1.c5fdaap-118f, 0.0f,
     0x1.fa875cp-68f, 0x1.3084cp-42f, 0x1.b3b952p-103f, 0x1.e899f6p-76f,
     0x1.b998ep-99f, 0x1.0e1252p-89f, 0x1.ee5deep-56f, 0x1.5ed39p-89f, 0.0f,
     0x1.ba7ecap-44f, 0.0f, 0.0f, 0x1.68ac1ap-51f, 0.0f, 0x1.4e4c08p-116f, 0.0f,
     0x1.99be68p-88f, 0.0f, 0x1.cf0e2ep-85f, 0.0f, 0.0f, 0.0f, 0x1.6d784cp-56f,
     0x1.900bd4p-124f, 0x1.55fd78p-107f, 0.0f, 0x1.68281p-126f, 0.0f, 0.0f,
     0x1.5d7c0ap-13f, 0.0f, 0x1.60ed6ep-3f, 0.0f, 0x1.2e6dfep-122f, 0x1.60b9fp-63f,
     0.0f, 0x1.3ac568p-36f, 0.0f, 0x1p0f, 0.0f, 0x1.0b65b6p-45f, 0.0f, 0x1.9d15fp-34f,
     0.0f, 0x1.024002p-75f, 0x1.2228bcp-124f, 0.0f, 0.0f, 0x1.4a204cp-49f,
     0x1.9c6ac8p-78f, 0.0f, 0x1.b4af32p-65f, 0.0f, 0x1.0bb84ap-58f, 0x1.8d233p-5f,
     0x1.ba6aaep-49f, 0x1.3befbep-25f, 0.0f, 0x1.c9ea56p-32f, 0x1.629bc6p-125f, 0.0f,
     0x1.2d8c9cp-32f, 0.0f, 0x1.7c54cap-29f, 0x1.79101cp-94f, 0.0f, 0x1.dffe56p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7522cep-116f, 0.0f, 0.0f, 0x1.712032p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a5dc24p-36f, 0x1.abf244p-78f, 0x1.93bc42p-65f, 0.0f, 0.0f,
     0x1.72dd26p-126f, 0x1.ea1c36p-70f, 0x1.e09aaap-64f, 0.0f, 0x1.d4948cp-102f, 0.0f,
     0x1.5f590ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c38a2p-72f, 0.0f,
     0x1.365ca6p-102f, 0x1.f06c8ep-34f, 0.0f, 0x1.493d06p-50f, 0.0f, 0x1.a760acp-35f,
     0x1.9ffdap-115f, 0x1.294fb8p-6f, 0.0f, 0x1.eeed0ap-37f, 0.0f, 0.0f,
     0x1.e151d6p-113f, 0x1.3cd552p-46f, 0.0f, 0x1.06eb16p-112f, 0.0f,
     0x1.f69c44p-122f, 0x1.e7a2fcp-76f, 0.0f, 0.0f, 0x1.9a06ap-23f, 0.0f, 0.0f,
     0x1.4966dep-7f, 0x1.9b751ep-100f, 0x1.c6af8cp-70f, 0x1.e3a88ep-96f,
     0x1.dd76fap-32f, 0.0f, 0x1.8fc27p-124f, 0.0f, 0.0f, 0.0f, 0x1.a2c972p-95f,
     0x1.b2550ep-34f, 0.0f, 0x1.299b9ap-107f, 0.0f, 0.0f, 0x1.a87602p-98f,
     0x1.85b5b4p-90f, 0x1.635f06p-4f, 0.0f, 0x1.fb024p-75f, 0.0f, 0x1.4423eap-6f,
     0x1.fe3e5ap-73f, 0x1.97a702p-14f, 0.0f, 0x1.12d16p-91f, 0x1.df36p-65f,
     0x1.0a9192p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2db6c6p-69f, 0.0f, 0.0f,
     0x1.1a8f0ap-122f, 0.0f, 0.0f, 0.0f, 0x1.44b75ep-65f, 0x1.226616p-105f, 0.0f,
     0x1.7949eep-106f, 0x1.ca9c8ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a39916p-39f, 0.0f,
     0.0f, 0x1.58370ep-37f, 0x1.04bdbp-126f, 0x1.09d208p-42f, 0x1.80055ep-122f,
     0x1.36b042p-107f, 0.0f, 0.0f, 0x1.6f50dep-110f, 0.0f, 0x1.b81fbp-94f,
     0x1.226c94p-23f, 0x1.b156aep-86f, 0.0f, 0x1.cc4ae4p-28f, 0.0f, 0x1.5aed18p-38f,
     0x1.94a9eap-93f, 0x1.4e171p-122f, 0.0f, 0.0f, 0x1.91ab64p-55f, 0.0f,
     0x1.b1a7c2p-15f, 0x1.3f6c1ep-79f, 0.0f, 0x1.8b2352p-50f, 0.0f, 0.0f,
     0x1.d3c08ep-75f, 0.0f, 0x1.41d9fap-122f, 0.0f, 0x1.ca227ap-66f, 0x1.c4d25ep-110f,
     0.0f, 0x1.63385cp-43f, 0x1.679a64p-93f, 0x1.8ebb46p-11f, 0.0f, 0x1.b37332p-16f,
     0x1.db70fap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e246p-54f, 0.0f,
     0x1.be3666p-118f, 0x1.138122p-105f, 0x1.4fd9dap-6f, 0x1.835a26p-58f,
     0x1.53666ep-103f, 0x1.78758cp-84f, 0.0f, 0x1.9f718p-2f, 0x1.0ca54ap-58f, 0.0f,
     0.0f, 0.0f, 0x1.1719a4p-66f, 0.0f, 0.0f, 0.0f, 0x1.a0c574p-124f, 0.0f,
     0x1.e6983cp-54f, 0.0f, 0.0f, 0.0f, 0x1.2dfe6ap-79f, 0.0f, 0x1.e50f78p-42f,
     0x1.e101e6p-21f, 0x1.2bf55ap-7f, 0x1.b4b79ep-110f, 0x1.16f654p-53f, 0.0f,
     0x1.04504ep-26f, 0x1.f4c20cp-8f, 0x1.852fbep-39f, 0x1.d945d8p-55f, 0.0f, 0.0f,
     0.0f, 0x1.3d398ep-72f, 0x1.3a683ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdafaap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.626886p-88f, 0.0f, 0x1.44f5acp-83f,
     0x1.2ed954p-79f, 0x1.00f3dap-54f, 0.0f, 0.0f, 0.0f, 0x1.39b6c4p-63f,
     0x1.90671ap-3f, 0.0f, 0x1.6fb01ep-77f, 0.0f, 0.0f, 0.0f, 0x1.5904e8p-26f,
     0x1.e0b4a6p-90f, 0x1.3bbdc4p-121f, 0x1.7486eep-9f, 0.0f, 0.0f, 0.0f,
     0x1.c7f632p-10f, 0x1.d6d7c4p-75f, 0x1.f52b42p-4f, 0.0f, 0.0f, 0.0f,
     0x1.d52dc6p-87f, 0.0f, 0.0f, 0x1.c8efd2p-80f, 0.0f, 0.0f, 0x1.5a543cp-13f, 0.0f,
     0x1.05764ep-79f, 0.0f, 0x1.03b362p-32f, 0x1.9bc3e2p-15f, 0.0f, 0x1.e8b3bp-55f,
     0.0f, 0.0f, 0x1.f51baap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84b0f4p-22f,
     0x1.9240fcp-59f, 0x1.31e7e2p-97f, 0.0f, 0.0f, 0.0f, 0x1.a40adep-66f, 0.0f,
     0x1.875e44p-13f, 0.0f, 0x1.f07808p-115f, 0x1.795bf6p-83f, 0.0f, 0.0f,
     0x1.c2af88p-38f, 0.0f, 0.0f, 0x1.bc24dcp-16f, 0x1.e29cb8p-22f, 0x1.29dfd8p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.990d14p-83f, 0.0f, 0x1.9bc4a8p-31f, 0x1.4e905ap-114f,
     0.0f, 0.0f, 0x1.9cd5p-52f, 0x1.fcedf6p-24f, 0x1.4f656p-72f, 0.0f,
     0x1.9c1d8ep-16f, 0.0f, 0x1.c006a2p-72f, 0.0f, 0.0f, 0.0f, 0x1.0448ep-74f, 0.0f,
     0x1.b7cf14p-69f, 0.0f, 0.0f, 0x1.dbc862p-94f, 0x1.969e02p-124f, 0.0f, 0.0f, 0.0f,
     0x1.65a744p-61f, 0x1.f11658p-14f, 0.0f, 0x1.1bba3p-19f, 0.0f, 0x1.488662p-28f,
     0.0f, 0x1.e7c102p-81f, 0.0f, 0x1.f29f92p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2efd14p-67f, 0.0f, 0x1.d3f406p-9f, 0.0f, 0.0f, 0.0f, 0x1.e69c24p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.254294p-1f, 0x1.4ff156p-19f, 0.0f,
     0x1.03a2fep-2f, 0x1.76d0c6p-113f, 0.0f, 0x1.974242p-88f, 0.0f, 0.0f,
     0x1.9286a4p-122f, 0x1.cfe308p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.087ed6p-64f,
     0x1.9c6d2cp-79f, 0x1.e18fb6p-86f, 0.0f, 0x1.8846a2p-82f, 0x1.9181bcp-48f,
     0x1.5eb69cp-18f, 0x1.d80754p-7f, 0x1.1bc942p-20f, 0x1.cd0c42p-42f,
     0x1.fecabcp-108f, 0x1.976b1ap-42f, 0x1.98af8ep-119f, 0x1.14a928p-94f,
     0x1.18ddb8p-28f, 0x1.abd01ep-18f, 0x1.f0a648p-124f, 0x1.b79a24p-94f,
     0x1.b4ddfap-121f, 0.0f, 0x1.a86c5ep-17f, 0.0f, 0x1.4fae84p-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.330092p-117f, 0.0f, 0.0f, 0x1.3f54eap-106f, 0x1.c46a7ep-89f,
     0.0f, 0.0f, 0x1.6816cp-79f, 0.0f, 0x1.f250eap-83f, 0.0f, 0.0f, 0.0f,
     0x1.6bebap-14f, 0.0f, 0.0f, 0x1.a5c6e8p-50f, 0x1.43176ep-58f, 0x1.8bf722p-59f,
     0.0f, 0x1.66059cp-15f, 0x1.c395b6p-92f, 0x1.9cae4ap-111f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.67e63ap-119f, 0.0f, 0x1.6025f6p-39f, 0x1.b20f06p-39f, 0.0f,
     0x1.0c734ep-22f, 0.0f, 0x1.b9411p-34f, 0.0f, 0x1.99f62ap-18f, 0.0f,
     0x1.3151a4p-111f, 0x1.9bccc8p-74f, 0x1.5692cep-102f, 0x1.1d2466p-50f, 0.0f,
     0x1.cced54p-55f, 0.0f, 0x1.9b91f8p-64f, 0.0f, 0x1.6f7916p-92f, 0.0f, 0.0f,
     0x1.bd99b2p-47f, 0x1.8f44a6p-57f, 0x1.92e61ep-4f, 0.0f, 0x1.92e31cp-31f,
     0x1.d4ad18p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abda72p-116f, 0x1.2f3f74p-38f,
     0x1.5b5488p-99f, 0.0f, 0x1.e0c42ep-105f, 0x1.158b42p-71f, 0.0f, 0x1.d15e18p-50f,
     0.0f, 0x1.a6385ap-105f, 0.0f, 0x1.5abb68p-114f, 0x1.919b68p-120f,
     0x1.55db9ap-112f, 0x1.f00fep-56f, 0x1.d7d7e2p-68f, 0x1.f2c744p-23f, 0.0f, 0.0f,
     0x1.76b8a2p-15f, 0x1.14c216p-118f, 0x1.5bb1eep-61f, 0x1.88758ap-119f,
     0x1.27f32cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b57b16p-103f, 0.0f, 0x1.815c18p-92f,
     0.0f, 0x1.c8e128p-71f, 0.0f, 0.0f, 0x1.5ed78cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dd80dp-64f, 0.0f, 0x1.b9efe8p-103f, 0x1.b340fap-108f,
     0x1.6d906ap-86f, 0x1.0cc566p-19f, 0.0f, 0x1.4cca6ap-7f, 0.0f, 0.0f,
     0x1.ea63e2p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52d6d8p-86f, 0.0f, 0.0f,
     0x1.bbe6d2p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d9f7ep-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b08a1p-64f, 0.0f, 0.0f, 0x1.2909d8p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eae70ep-78f, 0x1.895aaap-50f, 0x1.c4bfd8p-44f, 0x1.d6ceeep-55f, 0.0f,
     0x1.e38a72p-4f, 0x1.f1b4b8p-1f, 0x1.7bc006p-50f, 0x1.85502ap-60f, 0.0f,
     0x1.633a82p-47f, 0.0f, 0x1.eebacep-64f, 0x1.45b56ep-105f, 0x1.173e58p-27f, 0.0f,
     0x1.f299dep-56f, 0.0f, 0x1.e0b5c8p-104f, 0x1.ac4e5ep-31f, 0x1.ac0998p-123f,
     0x1.1c765cp-37f, 0x1.c668b6p-30f, 0x1.e03bf8p-62f, 0.0f, 0.0f, 0x1.29f4cap-47f,
     0.0f, 0.0f, 0x1.35edbep-74f, 0.0f, 0x1.36a5e8p-38f, 0.0f, 0.0f, 0.0f,
     0x1.88fe38p-7f, 0.0f, 0x1.f43cfep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4e14p-117f,
     0.0f, 0.0f, 0x1.9eda72p-20f, 0x1.707942p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.037414p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03781cp-86f, 0.0f,
     0x1.5385e4p-54f, 0.0f, 0.0f, 0x1.68d08p-126f, 0.0f, 0x1.d6cadcp-101f,
     0x1.005a2ap-73f, 0.0f, 0.0f, 0x1.46e094p-88f, 0x1.38b456p-83f, 0x1.2c9532p-59f,
     0.0f, 0.0f, 0.0f, 0x1.777964p-18f, 0x1.285caep-120f, 0x1.e024d6p-93f,
     0x1.652cacp-90f, 0.0f, 0.0f, 0x1.5e5afap-107f, 0.0f, 0x1.baaa76p-8f,
     0x1.e9a2cap-68f, 0.0f, 0x1.a2f87ep-62f, 0x1.6a6962p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c427b2p-123f, 0x1.92784cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.918938p-98f, 0.0f, 0x1.56624ep-82f, 0.0f, 0x1.dccd18p-14f,
     0x1.4fa91cp-58f, 0x1.81c89ap-46f, 0x1.46c31cp-41f, 0.0f, 0.0f, 0x1.bf6d46p-47f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.636b1cp-108f, 0x1.94006ap-73f, 0.0f, 0x1.f85decp-21f,
     0x1.01212ep-36f, 0x1.45019cp-40f, 0.0f, 0x1.111004p-116f, 0x1.01b84ep-85f,
     0x1.3ff874p-45f, 0.0f, 0x1.3bbd14p-41f, 0x1.1ef85cp-67f, 0x1p0f, 0.0f,
     0x1.687a92p-64f, 0x1.6b767ap-105f, 0x1.5cd898p-31f, 0.0f, 0x1.90fac6p-58f, 0.0f,
     0x1.b2abbp-75f, 0.0f, 0.0f, 0x1.68f888p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.686132p-114f, 0x1.a18844p-123f, 0.0f, 0x1.371cb4p-52f, 0.0f, 0.0f,
     0x1.b69298p-82f, 0x1.3a069ap-77f, 0.0f, 0.0f, 0.0f, 0x1.b75694p-9f, 0.0f, 0.0f,
     0x1.d925d2p-9f, 0x1.a45a28p-16f, 0.0f, 0x1.504d1cp-3f, 0x1.993268p-55f,
     0x1.880b54p-76f, 0x1.370878p-63f, 0x1.f7bc4ap-40f, 0.0f, 0.0f, 0x1.5ea5cep-104f,
     0.0f, 0x1.22267p-21f, 0x1.8a44f8p-39f, 0x1.bb2b86p-70f, 0.0f, 0x1.676bfcp-77f,
     0.0f, 0.0f, 0x1.c91f76p-3f, 0x1.d3dd1p-83f, 0.0f, 0x1.c9697ap-19f,
     0x1.81a63cp-23f, 0x1.40cc82p-21f, 0.0f, 0.0f, 0x1.4ede06p-20f, 0.0f, 0.0f, 0.0f,
     0x1.393ddp-102f, 0.0f, 0x1.80c31cp-33f, 0x1.017b52p-76f, 0x1.f33114p-110f,
     0x1.5d0a3ep-107f, 0.0f, 0.0f, 0.0f, 0x1.4f9328p-22f, 0.0f, 0x1.580d4ap-105f,
     0.0f, 0x1.7d6922p-84f, 0x1.0fba4ap-72f, 0x1p0f, 0x1.69f1dp-31f, 0.0f,
     0x1.38572ep-117f, 0x1.e5fd0ap-121f, 0x1.23a674p-84f, 0.0f, 0.0f, 0.0f,
     0x1.673f5p-71f, 0.0f, 0x1.9cf426p-15f, 0x1.007456p-104f, 0.0f, 0x1.bf5884p-58f,
     0.0f, 0.0f, 0.0f, 0x1.a13114p-56f, 0x1.152802p-41f, 0.0f, 0.0f, 0x1.01a7c8p-68f,
     0.0f, 0x1.caacc4p-105f, 0x1.53e8a2p-39f, 0.0f, 0x1.8534ecp-110f, 0x1.2ea1fep-33f,
     0.0f, 0x1.2da208p-45f, 0.0f, 0x1.f92cd8p-122f, 0.0f, 0x1.bf3456p-45f, 0.0f, 0.0f,
     0x1.28570ep-50f, 0x1.f3d564p-18f, 0x1.b27b4ep-47f, 0.0f, 0.0f, 0x1.49dea6p-121f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = log10f(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("log10f %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("log10f bench acc %a\n", global_bench_acc);
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
