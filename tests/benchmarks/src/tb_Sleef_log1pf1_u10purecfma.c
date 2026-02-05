/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pf1_u10purecfma.c --function \
 *     Sleef_log1pf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.a0e65p-52f, 0x1.68fd58p-90f, 0.0f, 0.0f, 0.0f, 0x1.3bd768p-93f,
     0x1.698634p-93f, 0x1.30ee84p-87f, 0.0f, 0x1.05aa08p-112f, 0x1.b0c244p-69f,
     0x1.b58ca8p-124f, 0.0f, 0.0f, 0x1.6c8f3p-53f, 0.0f, 0x1.145546p-46f,
     0x1.67b976p-78f, 0.0f, 0.0f, 0x1.17f21p-24f, 0x1.b72654p-93f, 0x1.974c8cp-35f,
     0x1.f5fe1ep-3f, 0.0f, 0x1.0327e4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8f0f2p-106f, 0x1.693112p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40d60ep-34f,
     0.0f, 0x1.f99578p-112f, 0x1.ecaed8p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.859f5cp-85f, 0x1.c6ff74p-106f, 0.0f, 0x1.f58a6ap-58f, 0x1.3a636ap-59f,
     0x1.e82468p-27f, 0.0f, 0x1.7d9cfp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e494b4p-102f, 0x1.e31ap-68f, 0.0f, 0.0f, 0x1.a9a2fp-4f, 0.0f, 0.0f,
     0x1.4ea72ap-42f, 0x1.af6678p-107f, 0.0f, 0.0f, 0.0f, 0x1.4cc934p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b039aep-84f, 0x1.f2b334p-14f, 0x1.48b3p-33f, 0.0f,
     0x1.34c8a2p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caad2ep-19f, 0x1.09645ap-97f,
     0.0f, 0x1.7be79ap-114f, 0x1.1de256p-76f, 0.0f, 0x1.bb2186p-15f, 0.0f,
     0x1.9bfcfp-19f, 0.0f, 0x1.9ded5p-117f, 0x1.2a9c06p-104f, 0.0f, 0x1.6e08b2p-116f,
     0x1.f85a18p-42f, 0.0f, 0.0f, 0.0f, 0x1.1d5962p-79f, 0.0f, 0x1.70bc5ep-41f,
     0x1.3472aap-96f, 0x1.80437p-30f, 0x1.361e8p-68f, 0.0f, 0x1.cc298ap-30f,
     0x1.8221bp-85f, 0.0f, 0x1.bf2638p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de702p-113f, 0x1.6f2734p-78f, 0x1.244bdep-78f, 0.0f, 0.0f, 0.0f,
     0x1.1e257ep-3f, 0x1.95b1fcp-44f, 0.0f, 0.0f, 0x1.15e34ap-36f, 0x1.f87144p-116f,
     0.0f, 0.0f, 0x1.5b3828p-58f, 0x1.14bf38p-38f, 0.0f, 0x1.e3c918p-54f,
     0x1.483e8ap-45f, 0.0f, 0.0f, 0.0f, 0x1.1a21f8p-68f, 0.0f, 0x1.ed504cp-58f, 0.0f,
     0.0f, 0.0f, 0x1.3484d8p-57f, 0.0f, 0x1.3a0dfp-71f, 0.0f, 0x1.99a21p-6f, 0.0f,
     0.0f, 0x1.58e81p-44f, 0.0f, 0x1.edf1eap-55f, 0.0f, 0x1.b72954p-22f, 0.0f,
     0x1.1f012ap-98f, 0.0f, 0x1.581874p-40f, 0.0f, 0.0f, 0x1.3dddfap-61f,
     0x1.9f196p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1ceeep-60f, 0x1.7c35acp-64f, 0.0f,
     0.0f, 0.0f, 0x1.5650f4p-19f, 0x1.bcd80ep-73f, 0.0f, 0.0f, 0x1.922038p-51f,
     0x1.03a62ap-90f, 0x1.f6dcaap-17f, 0x1.12ac36p-84f, 0x1.8385c2p-124f,
     0x1.a2abe6p-41f, 0x1.57a2bp-49f, 0x1.f7a394p-21f, 0x1.b3df76p-90f,
     0x1.cf6d2p-125f, 0x1.835068p-76f, 0x1.26d9f4p-55f, 0.0f, 0x1.cf5a56p-98f,
     0x1.7ee19cp-38f, 0.0f, 0x1.8d87b8p-125f, 0.0f, 0.0f, 0.0f, 0x1.434a3p-73f,
     0x1.f8a0fcp-79f, 0x1.94f5fep-66f, 0.0f, 0.0f, 0.0f, 0x1.5ecf38p-2f, 0.0f, 0.0f,
     0.0f, 0x1.6086c4p-103f, 0x1.af1282p-6f, 0x1.ea4f16p-49f, 0x1.ced11ep-27f, 0.0f,
     0x1.85a17ap-72f, 0.0f, 0.0f, 0x1.babb7ep-99f, 0x1.da7a78p-92f, 0x1.76ddb2p-58f,
     0.0f, 0.0f, 0.0f, 0x1.16c7a6p-25f, 0.0f, 0x1.cda9e2p-31f, 0x1.2baf4ap-59f, 0.0f,
     0x1.c8e3a8p-82f, 0x1.796c2ep-121f, 0.0f, 0x1.8bf6dap-80f, 0x1.78103ep-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.785058p-80f, 0.0f, 0.0f, 0x1.3627e2p-80f,
     0x1.2f04c8p-70f, 0x1.075a44p-96f, 0x1.57698ap-71f, 0.0f, 0x1.b9f522p-93f, 0.0f,
     0x1.7b5fe2p-124f, 0x1.cdbfdep-56f, 0.0f, 0x1.aec036p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.388592p-81f, 0x1.f118a8p-120f, 0.0f,
     0.0f, 0x1.1fd38cp-106f, 0x1.d60e98p-120f, 0x1.28303ap-42f, 0x1.4b5544p-77f, 0.0f,
     0x1.3b6722p-60f, 0x1.7e575cp-34f, 0.0f, 0.0f, 0.0f, 0x1.a76914p-125f,
     0x1.89152ep-12f, 0x1.34e68cp-122f, 0x1.f34638p-59f, 0.0f, 0x1.2b53dep-25f, 0.0f,
     0.0f, 0x1.e80c4cp-79f, 0.0f, 0.0f, 0x1.001e4ep-124f, 0.0f, 0x1.b0fa4ep-8f,
     0x1.831f1p-106f, 0x1.f5411p-2f, 0x1.b20384p-79f, 0x1.979114p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ecd26cp-103f, 0x1.dde82p-63f, 0.0f, 0.0f, 0x1.e0575ap-7f,
     0.0f, 0x1.993bd2p-50f, 0.0f, 0x1.a458f2p-8f, 0x1.7f9684p-111f, 0.0f,
     0x1.21a0ccp-96f, 0.0f, 0x1p0f, 0x1.5394b4p-103f, 0x1.68cdc8p-46f,
     0x1.41c13cp-87f, 0.0f, 0x1.0be772p-24f, 0x1.dbec82p-29f, 0.0f, 0.0f,
     0x1.1133dep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24b176p-10f, 0x1.4db04ap-107f,
     0x1.e5e1e6p-100f, 0.0f, 0x1.bdacap-26f, 0.0f, 0x1.f83f76p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4f4464p-23f, 0x1.c57ae6p-33f, 0x1.0b851ap-100f, 0x1.130e9p-89f,
     0x1.bee752p-94f, 0x1.f11d4p-84f, 0.0f, 0x1.819e5ep-45f, 0x1.cdc438p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e7e0ep-116f, 0x1.65ebcap-42f, 0.0f, 0x1.ace57p-40f,
     0x1.b93a32p-13f, 0.0f, 0x1.614ffp-38f, 0.0f, 0x1.77901ep-45f, 0.0f,
     0x1.d08b66p-56f, 0x1.0c5154p-10f, 0.0f, 0x1.479906p-29f, 0x1.bbc9b4p-30f, 0.0f,
     0x1.4ebaecp-4f, 0.0f, 0x1.d253b8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69c056p-117f,
     0x1.e8b578p-56f, 0.0f, 0.0f, 0x1.4bcffap-61f, 0x1.da5ee2p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.658f0ep-91f, 0x1.a19a72p-116f, 0x1.6cd1dep-2f, 0.0f, 0.0f,
     0x1.cb882p-85f, 0x1.ea5106p-2f, 0.0f, 0x1.3ab92cp-86f, 0x1.4ef992p-42f, 0.0f,
     0.0f, 0.0f, 0x1.9ed846p-32f, 0x1.f5475p-71f, 0x1.dd717cp-30f, 0x1.4fe7d4p-38f,
     0x1.d259bap-18f, 0x1.04925cp-108f, 0x1.0422fep-19f, 0.0f, 0x1.3aea5p-64f, 0.0f,
     0x1.4db2fcp-125f, 0x1.075eaap-37f, 0.0f, 0x1.ad076cp-80f, 0.0f, 0x1.8d0668p-72f,
     0.0f, 0.0f, 0.0f, 0x1.3c6f1p-41f, 0.0f, 0x1.79a3d2p-82f, 0x1.7e729cp-67f, 0.0f,
     0x1.9ba284p-93f, 0x1.d3b252p-26f, 0x1.bb7f32p-83f, 0x1.4a55cep-119f,
     0x1.01f894p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.058c6ep-126f, 0x1.7aea16p-28f, 0.0f,
     0x1.b8b77ap-89f, 0x1.acbc2p-92f, 0x1.d77b76p-4f, 0.0f, 0x1.8535bep-7f,
     0x1.8fa34ap-55f, 0x1.73c2f8p-58f, 0x1.a4b41ep-124f, 0x1.5af78p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.03a234p-109f, 0x1.0f05fep-27f, 0x1.1538a2p-89f, 0x1.c29104p-92f,
     0x1.0e0816p-20f, 0x1.ac6916p-62f, 0x1.3b1e6ep-101f, 0x1.9b9bd8p-36f, 0.0f,
     0x1.09b10cp-122f, 0.0f, 0.0f, 0x1.b6e918p-42f, 0x1.c3fb0ep-39f, 0x1.54c38ap-29f,
     0x1.0a47eep-1f, 0.0f, 0.0f, 0.0f, 0x1.297fdcp-10f, 0.0f, 0.0f, 0x1.cedb18p-18f,
     0x1.3b4eep-76f, 0.0f, 0.0f, 0.0f, 0x1.16727p-62f, 0.0f, 0x1.e71c2cp-48f,
     0x1.cbf548p-16f, 0.0f, 0.0f, 0.0f, 0x1.90cc28p-88f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b68198p-109f, 0x1.49ab64p-38f, 0.0f, 0x1.ba9956p-81f,
     0x1.f1395p-6f, 0.0f, 0x1.a752fap-77f, 0x1.c171cap-95f, 0.0f, 0.0f, 0.0f,
     0x1.99be32p-85f, 0x1.5ad04p-75f, 0.0f, 0.0f, 0.0f, 0x1.de84c2p-80f,
     0x1.983094p-114f, 0x1.e2aaeep-32f, 0.0f, 0.0f, 0x1.bbd638p-77f, 0.0f, 0.0f,
     0x1.9a8b66p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f54e5cp-68f,
     0x1.a5cf3cp-57f, 0.0f, 0x1.74414cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fba30ep-102f, 0.0f, 0x1.4af3aap-50f, 0x1.dfdca2p-26f, 0x1.11dcaep-59f, 0.0f,
     0x1.1abb1ep-93f, 0x1.3021a4p-18f, 0x1.4a3576p-41f, 0x1.1ada82p-121f, 0.0f, 0.0f,
     0.0f, 0x1.aa3828p-34f, 0x1.617b94p-18f, 0x1.63837ap-33f, 0x1.32a364p-103f,
     0x1.fee4a6p-7f, 0.0f, 0x1.355454p-41f, 0x1.355432p-40f, 0x1.bccb48p-94f,
     0x1.8b4a5cp-80f, 0.0f, 0.0f, 0.0f, 0x1.c981b2p-77f, 0x1.cfd79cp-45f, 0.0f,
     0x1.3ba5cep-118f, 0x1.af74bp-13f, 0x1.2f2a0ap-4f, 0x1p0f, 0.0f, 0x1.e87818p-40f,
     0x1.237d84p-58f, 0.0f, 0.0f, 0.0f, 0x1.8256c2p-56f, 0x1.39e71p-27f,
     0x1.1abcbcp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0739fp-100f,
     0x1.0e18bp-107f, 0x1.507616p-82f, 0x1.28913p-48f, 0.0f, 0x1.ab3402p-43f, 0.0f,
     0.0f, 0x1.eb125ep-45f, 0.0f, 0.0f, 0.0f, 0x1.b7ac56p-21f, 0x1.f5703ap-108f,
     0x1.eedd8p-89f, 0.0f, 0.0f, 0.0f, 0x1.51d26cp-108f, 0.0f, 0x1.5bf6fep-122f,
     0x1.1079dp-106f, 0.0f, 0.0f, 0x1.b3b38ap-89f, 0.0f, 0x1.4401fcp-101f,
     0x1.2157e8p-39f, 0.0f, 0.0f, 0.0f, 0x1.85daf4p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9c8c8p-125f, 0x1.4ff332p-60f, 0x1.1869acp-4f, 0x1.7adb96p-114f,
     0x1.44fb4cp-46f, 0.0f, 0x1.d5eebp-9f, 0.0f, 0x1.3f5d7p-70f, 0.0f,
     0x1.6a5e46p-74f, 0.0f, 0.0f, 0x1.c9897ap-44f, 0.0f, 0x1.2819c2p-22f,
     0x1.1457a4p-34f, 0.0f, 0x1.aacc7ap-23f, 0.0f, 0.0f, 0x1.edc328p-12f,
     0x1.4404fep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f32b2p-110f,
     0x1.f1f234p-22f, 0x1.eab544p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d19b8p-81f, 0.0f,
     0x1.c54f36p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dccb52p-85f,
     0x1.bf4c06p-18f, 0.0f, 0x1.aa184ep-92f, 0x1.ba4f94p-96f, 0.0f, 0.0f,
     0x1.5ef0aep-40f, 0.0f, 0x1.30a0b2p-86f, 0.0f, 0x1.36a64ap-125f, 0.0f,
     0x1.315634p-29f, 0.0f, 0x1.ae226ep-39f, 0x1.7d525p-8f, 0.0f, 0x1.d2a68cp-103f,
     0.0f, 0x1.f9420cp-104f, 0x1.185404p-121f, 0.0f, 0.0f, 0x1.58cb08p-81f, 0.0f,
     0.0f, 0x1.42230ap-55f, 0x1.12c53p-87f, 0x1.c6cb72p-72f, 0.0f, 0x1.603a74p-119f,
     0x1.32ad54p-81f, 0x1.41fd2cp-119f, 0.0f, 0x1.785fdcp-8f, 0x1.6d1644p-65f, 0.0f,
     0.0f, 0.0f, 0x1.57e146p-30f, 0.0f, 0x1.cfd592p-88f, 0.0f, 0x1.d47268p-8f,
     0x1.cd1bcap-105f, 0x1.c8b05cp-79f, 0x1.fa4a9cp-113f, 0.0f, 0x1.a0ec2ep-113f,
     0x1.d3d8fcp-123f, 0.0f, 0.0f, 0.0f, 0x1.47182p-72f, 0.0f, 0x1.f3a7d2p-35f, 0.0f,
     0.0f, 0x1.512e46p-105f, 0x1.783072p-46f, 0x1.590228p-71f, 0x1.2add3ep-8f, 0.0f,
     0x1.1126ap-35f, 0x1.1e1dfp-124f, 0x1.aeca0ap-21f, 0x1.846f38p-37f, 0.0f,
     0x1.41f98ap-62f, 0x1.fb84d8p-77f, 0x1.10e276p-5f, 0x1.3e7936p-122f, 0.0f,
     0x1.f02746p-23f, 0.0f, 0.0f, 0x1.331d0ap-6f, 0x1.e163c2p-82f, 0.0f,
     0x1.ecefecp-5f, 0x1.707cc2p-9f, 0x1.180408p-106f, 0x1.257f2p-61f, 0.0f, 0.0f,
     0x1.54bp-88f, 0x1.d5fccp-78f, 0x1.0b9336p-112f, 0x1.a5299cp-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5c169cp-30f, 0x1.64a5f4p-43f, 0x1.f03316p-68f, 0x1.8acd7p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5ecf8p-55f, 0x1.927894p-96f, 0.0f, 0.0f, 0.0f,
     0x1.8d99cep-71f, 0.0f, 0x1.357ebp-58f, 0x1.7c5acp-111f, 0.0f, 0.0f,
     0x1.d3b8ep-69f, 0x1.37d526p-76f, 0x1.008ba8p-41f, 0x1.edae86p-102f,
     0x1.c47d1p-101f, 0x1.e64c64p-92f, 0x1.74b7b8p-43f, 0x1.56b74p-60f, 0.0f,
     0x1.1e078cp-79f, 0.0f, 0x1.8163b8p-79f, 0x1.134c2ep-48f, 0.0f, 0.0f, 0.0f,
     0x1.b9feb2p-96f, 0x1.5aa1bap-95f, 0.0f, 0x1.255222p-100f, 0x1.991fap-35f,
     0x1.58d2ap-34f, 0x1.c2f7e2p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ab8f2p-3f,
     0x1.0abb7cp-106f, 0x1.bd8cf6p-65f, 0x1.37fd18p-120f, 0.0f, 0.0f,
     0x1.7e7e14p-122f, 0x1.3c30bcp-5f, 0x1.42dfb4p-19f, 0.0f, 0x1.c0f552p-12f, 0.0f,
     0x1.8756e4p-1f, 0x1.6c5336p-122f, 0.0f, 0.0f, 0.0f, 0x1.8ddbc8p-113f,
     0x1.5e14dcp-28f, 0x1.e655bap-71f, 0.0f, 0.0f, 0x1.c055f4p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a80d2ep-26f, 0x1.c99a5ep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b2fc2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bffa2p-112f, 0.0f, 0.0f,
     0x1.b35adp-62f, 0x1.738bfap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30b564p-102f,
     0.0f, 0x1.1fd02ap-60f, 0.0f, 0.0f, 0x1.08cf4p-107f, 0x1.aef4bap-72f,
     0x1.144102p-116f, 0.0f, 0x1.e5de98p-22f, 0x1.1691bcp-19f, 0.0f, 0x1.8f198ap-122f,
     0.0f, 0.0f, 0x1.58f0f8p-79f, 0x1.62ecfp-124f, 0x1.4aec78p-112f, 0.0f, 0.0f, 0.0f,
     0x1.7d612p-48f, 0x1.117888p-84f, 0x1.4a47fp-109f, 0x1.24f2eep-4f, 0.0f, 0.0f,
     0.0f, 0x1.5679ep-14f, 0.0f, 0.0f, 0x1.f1430ap-126f, 0x1.3ca5acp-9f, 0.0f,
     0x1.6cbc7p-81f, 0.0f, 0.0f, 0x1.0ec49cp-58f, 0.0f, 0x1.58f3f2p-107f,
     0x1.a4bd54p-101f, 0x1.725c52p-49f, 0x1.de9398p-2f, 0.0f, 0.0f, 0x1.03d1d4p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2956b2p-63f, 0x1.533a38p-13f, 0x1.619a5ep-47f, 0.0f,
     0.0f, 0x1.8a7c4ep-49f, 0.0f, 0x1.8f54dcp-25f, 0.0f, 0.0f, 0x1.346d4cp-32f,
     0x1.83112p-67f, 0x1.f64deep-117f, 0.0f, 0.0f, 0x1p0f, 0x1.d3c7ap-10f, 0.0f, 0.0f,
     0x1.c1d448p-109f, 0x1.64254cp-87f, 0.0f, 0.0f, 0x1.f7d086p-57f, 0x1.f9b06cp-8f,
     0.0f, 0.0f, 0.0f, 0x1.a2d3bap-81f, 0.0f, 0x1.70c5a6p-96f, 0.0f, 0x1.140af2p-19f,
     0.0f, 0x1.d53744p-51f, 0x1.8a8668p-69f, 0x1.3642d8p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b50a6ep-120f, 0.0f, 0x1.3491a8p-26f, 0.0f, 0x1.576c84p-77f, 0.0f,
     0x1.80c4e2p-16f, 0x1.6b6b6cp-25f, 0x1.821494p-108f, 0x1.d40baep-124f, 0.0f, 0.0f,
     0.0f, 0x1.8b1162p-68f, 0x1.dcb484p-66f, 0x1.17b3b2p-30f, 0.0f, 0x1.6a614cp-17f,
     0.0f, 0x1.60e884p-64f, 0x1.4f010ap-41f, 0.0f, 0.0f, 0x1.fc41c4p-43f,
     0x1.b1f448p-101f, 0x1.34f352p-16f, 0x1.1fab1ep-108f, 0.0f, 0x1.e56ca6p-51f,
     0x1.53bab2p-50f, 0.0f, 0.0f, 0x1.74fcccp-118f, 0.0f, 0x1.9672aep-21f, 0.0f,
     0x1.99abd6p-73f, 0.0f, 0x1.1b4bb6p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0f8f6p-32f, 0.0f, 0.0f, 0x1.03c28ap-76f, 0.0f, 0.0f, 0x1.49b9dcp-16f, 0.0f,
     0x1.82c50ap-61f, 0x1.dd9a16p-12f
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
            tmp1 = Sleef_log1pf1_u10purecfma(tmp0);
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
    printf("Sleef_log1pf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log1pf1_u10purecfma bench acc %a\n", global_bench_acc);
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
