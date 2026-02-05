/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundf1_purecfma.c --function Sleef_roundf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.d0d988p-22f, 0.0f, 0x1.4072bcp-61f, 0x1.82ece8p-40f, 0x1.5410ep-21f,
     0x1.fe76ep-101f, 0x1.78b1b8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c74c08p-51f, 0x1.a4696p-88f, 0x1.7e1fdcp-48f, 0x1.004d0ep-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1cd79p-99f, 0x1.dc68ep-115f, 0.0f, 0x1.d0037ep-122f,
     0x1.47023cp-115f, 0.0f, 0.0f, 0x1.4c9bc4p-35f, 0x1.1cfbc8p-12f, 0.0f,
     0x1.006faap-8f, 0.0f, 0.0f, 0x1.dc0a7cp-121f, 0.0f, 0x1.132974p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9456fp-20f, 0x1.fc4ff8p-105f, 0x1.da1aaap-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7e5aap-97f, 0x1.faa66cp-48f, 0x1.aef5c4p-21f, 0x1p0f,
     0x1.ee3c86p-5f, 0.0f, 0x1.6ffcf2p-83f, 0.0f, 0x1.978b6p-26f, 0x1.e398e6p-86f,
     0x1.9eb8d6p-126f, 0.0f, 0.0f, 0.0f, 0x1.16d9e2p-37f, 0.0f, 0.0f, 0.0f,
     0x1.7565dcp-20f, 0x1.2dd2fp-98f, 0.0f, 0x1.1644ap-93f, 0x1.510e68p-70f,
     0x1.644ee8p-1f, 0x1.0c0458p-75f, 0x1.ab282ep-124f, 0x1.712d2ep-78f, 0.0f,
     0x1.f86d36p-54f, 0.0f, 0.0f, 0.0f, 0x1.273b5cp-59f, 0.0f, 0x1.039c0ap-51f,
     0x1.a7ffa6p-35f, 0.0f, 0.0f, 0x1.341138p-4f, 0.0f, 0x1.cf6d48p-10f, 0.0f, 0.0f,
     0x1.1f9756p-38f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.dfe022p-12f,
     0.0f, 0x1.bde74cp-125f, 0x1.31e334p-9f, 0.0f, 0.0f, 0.0f, 0x1.a668e2p-9f, 0.0f,
     0x1.7b8d1ep-89f, 0x1.ba50a2p-34f, 0x1.64945ap-105f, 0.0f, 0x1.50f90ap-1f, 0.0f,
     0x1.cae324p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.077d0ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.f59826p-64f, 0.0f, 0x1.b24dd2p-103f, 0x1.4f5da2p-29f, 0x1.9417c8p-51f,
     0x1.8ea1f6p-27f, 0x1.d944ecp-17f, 0.0f, 0x1.59c30cp-11f, 0x1.7383dp-52f, 0.0f,
     0x1.c6b69ap-88f, 0x1.5b3a56p-95f, 0x1.a4cf3ep-32f, 0.0f, 0x1.c8e5fap-67f, 0.0f,
     0x1.c05a2cp-47f, 0x1.98c848p-122f, 0x1.c45778p-74f, 0.0f, 0.0f, 0x1.d877a6p-60f,
     0.0f, 0x1.3f9feep-59f, 0.0f, 0.0f, 0.0f, 0x1.7e1fb2p-54f, 0x1.8e998p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28eedep-48f, 0x1.48da4ap-109f, 0x1.7afb9ap-114f,
     0x1.b1cf06p-54f, 0x1.1ebd2ep-113f, 0.0f, 0.0f, 0.0f, 0x1.c46deap-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b8dcdcp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae00e8p-88f,
     0x1.db5dc4p-108f, 0.0f, 0x1.b9b4fcp-112f, 0x1.eb76fep-23f, 0.0f, 0x1.e4ff54p-66f,
     0x1.68dc3ep-95f, 0.0f, 0x1.f4ee14p-107f, 0.0f, 0x1.66fe04p-101f, 0.0f,
     0x1.ba4ae2p-17f, 0x1.6d628p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfad5ep-102f, 0.0f, 0x1.a91286p-94f, 0.0f, 0.0f, 0.0f, 0x1.9c938cp-53f, 0.0f,
     0x1.e1237ep-3f, 0x1.4b06eap-36f, 0.0f, 0x1.d5b624p-80f, 0.0f, 0x1.d10b1p-60f,
     0.0f, 0x1.285b92p-118f, 0.0f, 0x1.c7e8fap-26f, 0.0f, 0x1.6ae378p-27f,
     0x1.553606p-78f, 0.0f, 0x1.4673bap-36f, 0x1.abfc52p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3feef4p-94f, 0.0f, 0x1.47505cp-80f, 0x1.49561ap-88f, 0.0f, 0x1.3fc3e8p-51f,
     0x1.f8fc2p-58f, 0x1.4b485ep-115f, 0x1.5aab84p-27f, 0x1.b0761ep-22f,
     0x1.06a81cp-23f, 0.0f, 0x1.f9954cp-32f, 0.0f, 0x1.ecd2c2p-13f, 0.0f,
     0x1.3fcee8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.539436p-87f, 0.0f, 0x1.267f3ap-20f,
     0.0f, 0.0f, 0x1.546648p-90f, 0.0f, 0.0f, 0x1.2cb1a8p-100f, 0x1.bc8f9ap-18f, 0.0f,
     0x1.459df8p-69f, 0x1.e5db7ap-90f, 0.0f, 0x1.f96d1ap-75f, 0x1.937584p-23f, 0.0f,
     0.0f, 0x1.912424p-107f, 0.0f, 0.0f, 0x1.eb3378p-118f, 0x1.ba225ap-106f,
     0x1.f13104p-25f, 0.0f, 0.0f, 0x1.e0ad6ap-65f, 0.0f, 0.0f, 0x1.7b42e4p-49f,
     0x1.bb8ca2p-62f, 0x1.1e3b66p-12f, 0x1.539ed2p-84f, 0x1.5da3b2p-101f,
     0x1.4e526cp-42f, 0.0f, 0.0f, 0x1.12ae66p-111f, 0x1.6f4e86p-5f, 0x1.9ce1e2p-105f,
     0x1.338d82p-90f, 0.0f, 0.0f, 0.0f, 0x1.5b1e46p-100f, 0.0f, 0x1.09964ap-69f,
     0x1.d2f94ap-53f, 0.0f, 0.0f, 0.0f, 0x1.ca5ff8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2a449ep-5f, 0.0f, 0x1.ffa4ccp-7f, 0.0f, 0.0f, 0.0f, 0x1.df78ecp-97f,
     0x1.3ec628p-109f, 0.0f, 0.0f, 0x1.d447eep-59f, 0x1.b6b8c4p-106f, 0x1.71c4aep-6f,
     0x1.f3e814p-22f, 0x1.0baaf8p-90f, 0.0f, 0x1.c53e1p-44f, 0.0f, 0.0f, 0.0f,
     0x1.4ab2c8p-114f, 0.0f, 0x1.ace93ep-13f, 0.0f, 0x1.8fe33p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4fc262p-97f, 0x1.81ccc8p-58f, 0.0f, 0.0f, 0x1.d2a50cp-6f,
     0.0f, 0.0f, 0x1.cc8c5ep-117f, 0.0f, 0.0f, 0x1.b648dcp-105f, 0.0f, 0x1.fec3bap-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95cdbep-29f, 0.0f, 0x1.7c98dep-15f, 0.0f, 0.0f,
     0.0f, 0x1.746a86p-65f, 0x1.2c88bp-34f, 0x1.db511cp-99f, 0.0f, 0x1.dd65eep-125f,
     0x1.0f8b42p-100f, 0.0f, 0.0f, 0x1.025df8p-62f, 0x1.9dd67ep-64f, 0x1.73a002p-108f,
     0x1.1bfd74p-41f, 0.0f, 0x1.7ed308p-90f, 0.0f, 0.0f, 0x1.0828bp-14f,
     0x1.d4257cp-31f, 0.0f, 0.0f, 0x1.7108e4p-101f, 0.0f, 0x1.065908p-10f,
     0x1.cb5ec6p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eec3c6p-55f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.ebe77ap-5f, 0x1.c9164ap-36f, 0.0f, 0x1.d0cbb4p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10eba2p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85376ap-102f, 0.0f, 0x1.1d4462p-95f, 0.0f, 0x1.8ed384p-76f, 0x1.814a7ep-103f,
     0x1.e0a6a8p-124f, 0.0f, 0.0f, 0x1.fb24eep-50f, 0.0f, 0x1.e8ce9cp-35f,
     0x1.afe76ap-40f, 0.0f, 0x1.01b282p-98f, 0x1.679f44p-112f, 0.0f, 0.0f,
     0x1.48744cp-116f, 0x1.4192d4p-47f, 0x1.bc2b12p-31f, 0.0f, 0x1.6f9956p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.15c344p-55f, 0.0f, 0.0f, 0x1.932ec2p-117f, 0x1.a6b562p-4f,
     0x1.98739ep-105f, 0.0f, 0x1.ba00d6p-46f, 0.0f, 0.0f, 0x1.72a1a2p-10f,
     0x1.f7dbfp-27f, 0x1.8b96c2p-65f, 0x1.42a2a4p-71f, 0.0f, 0x1.80d908p-83f,
     0x1.adc938p-116f, 0.0f, 0.0f, 0x1.5adaaep-30f, 0.0f, 0x1.fa65p-103f, 0.0f,
     0x1.a3dd66p-22f, 0.0f, 0x1.c0666ep-93f, 0.0f, 0.0f, 0x1.70b954p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce335ep-46f, 0.0f, 0.0f, 0x1.1f56dp-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.190a7ep-122f, 0.0f, 0x1.e9877ep-91f, 0x1.b82f86p-29f,
     0x1.b6fe3cp-37f, 0x1.bad2c4p-86f, 0x1.7a80acp-77f, 0x1.6ef8fp-23f,
     0x1.93c7d6p-2f, 0x1.5ef612p-11f, 0.0f, 0.0f, 0.0f, 0x1.2c90e2p-19f,
     0x1.51d006p-80f, 0.0f, 0x1.7a47b8p-83f, 0x1.4dbdecp-113f, 0x1.538f2ap-103f,
     0x1.db2348p-43f, 0.0f, 0x1.d352b4p-49f, 0x1.7053acp-46f, 0.0f, 0.0f, 0.0f,
     0x1.96fb4ap-79f, 0x1.7c8ba6p-68f, 0.0f, 0.0f, 0x1.0e97fep-99f, 0.0f, 0.0f,
     0x1.eb0caep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e811p-118f, 0.0f, 0.0f,
     0x1.775a98p-30f, 0.0f, 0.0f, 0x1.54e21ep-71f, 0.0f, 0.0f, 0x1.84e6bp-41f, 0.0f,
     0x1.d1cc56p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12ffb8p-64f, 0x1.dfc356p-16f,
     0x1.46402cp-71f, 0x1.b086fp-125f, 0x1.bdf3cp-106f, 0x1.4a7032p-93f, 0.0f, 0.0f,
     0x1.eb30cap-87f, 0x1.56b4bp-23f, 0.0f, 0.0f, 0x1.ce3f06p-41f, 0.0f, 0.0f,
     0x1.f6ca08p-89f, 0.0f, 0x1.423ddcp-110f, 0x1.159d78p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.091e62p-25f, 0.0f, 0x1.cc473ap-48f, 0x1.18012p-30f, 0x1.e511bap-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7584c4p-90f, 0x1.829086p-104f, 0.0f, 0x1.7f43bep-61f,
     0.0f, 0.0f, 0x1.8b6768p-6f, 0x1.90c2dp-75f, 0.0f, 0.0f, 0x1.516116p-38f, 0.0f,
     0.0f, 0.0f, 0x1.b423ap-92f, 0x1.631f06p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.68a012p-31f, 0x1.6a314ep-79f, 0x1.1dc926p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c9c16p-28f, 0.0f, 0x1.084dbcp-51f, 0x1.8cd5f4p-119f,
     0x1.2d5fcap-13f, 0.0f, 0.0f, 0x1.8db8dap-117f, 0.0f, 0.0f, 0x1.5f8faap-78f,
     0x1.d483d6p-112f, 0x1.348984p-31f, 0.0f, 0.0f, 0.0f, 0x1.c8814ep-116f,
     0x1.6a2d5ap-58f, 0x1.b301d6p-76f, 0x1.ca5eb2p-5f, 0x1.a688b4p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9707e8p-21f, 0.0f, 0x1.d77a96p-57f, 0.0f, 0.0f, 0x1.1eb22p-63f,
     0.0f, 0.0f, 0x1.34e4fcp-30f, 0x1.486f7p-100f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa8c1ap-88f, 0x1.986dfp-99f, 0x1.786732p-118f, 0.0f,
     0x1.11962ap-22f, 0x1.062ad6p-67f, 0.0f, 0.0f, 0.0f, 0x1.42648ap-84f,
     0x1.d64aecp-10f, 0.0f, 0.0f, 0.0f, 0x1.c539ep-43f, 0x1.59f85cp-82f,
     0x1.e5703ap-112f, 0x1.7aa134p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.930bap-59f, 0.0f,
     0.0f, 0.0f, 0x1.578c74p-29f, 0.0f, 0x1.5078cp-105f, 0.0f, 0.0f, 0.0f,
     0x1.b5345p-49f, 0x1.9420cep-104f, 0x1.b3d37p-88f, 0.0f, 0x1.8d795cp-88f, 0.0f,
     0x1.74af62p-23f, 0x1.2751f6p-22f, 0.0f, 0x1.ce469p-85f, 0x1.9e51eap-50f, 0.0f,
     0.0f, 0x1.2ee3bp-102f, 0x1.6df28ep-31f, 0x1.833fa6p-59f, 0.0f, 0.0f, 0.0f,
     0x1.3c773p-116f, 0x1.c27d36p-35f, 0x1.a027aap-52f, 0x1.8464dp-13f,
     0x1.74f618p-58f, 0.0f, 0.0f, 0x1.55f1eep-107f, 0x1.02c20ep-126f, 0x1.ea4824p-48f,
     0x1.093c8cp-5f, 0.0f, 0x1.2dc4d2p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f55cacp-101f, 0x1.0bb5d8p-52f, 0x1.5f15bap-39f, 0.0f, 0x1.431b1ep-17f, 0.0f,
     0x1.421466p-97f, 0x1.bd5126p-28f, 0x1.fa793ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67a254p-91f, 0.0f, 0x1.301f02p-91f, 0.0f, 0x1.5db674p-30f, 0x1.e6d406p-108f,
     0.0f, 0x1.ff4a62p-60f, 0.0f, 0x1.62d05cp-55f, 0x1.19ec34p-42f, 0.0f,
     0x1.9178e6p-35f, 0.0f, 0x1.5edc64p-97f, 0x1.b16646p-105f, 0x1.95a9bap-60f, 0.0f,
     0.0f, 0x1.d7ebccp-46f, 0x1.3f5142p-71f, 0.0f, 0.0f, 0x1.db0f82p-93f,
     0x1.90c158p-6f, 0x1.fa3696p-84f, 0.0f, 0x1.f3d352p-10f, 0x1.628eb4p-56f,
     0x1.eba036p-31f, 0.0f, 0x1.bda884p-43f, 0.0f, 0.0f, 0.0f, 0x1.c00968p-46f,
     0x1.38fd7ap-85f, 0.0f, 0x1.905f3p-70f, 0x1.99e028p-107f, 0x1.6a4886p-121f,
     0x1.27c83ap-55f, 0x1.3df87ep-121f, 0.0f, 0.0f, 0x1.02c85p-100f, 0x1.38f5ep-119f,
     0x1.312d4ep-125f, 0.0f, 0x1.6178ep-53f, 0.0f, 0x1.ee003ap-30f, 0.0f, 0.0f,
     0x1.9165bep-58f, 0.0f, 0x1.8b94a2p-25f, 0x1.971f22p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a65eap-67f, 0.0f, 0x1.5b6c52p-35f, 0x1.c79a3ap-119f, 0x1.8ad88cp-85f,
     0x1.c786bcp-21f, 0x1.a760ap-43f, 0.0f, 0.0f, 0x1.de2062p-65f, 0x1.6f1098p-55f,
     0.0f, 0.0f, 0x1.af67fcp-66f, 0x1.0308bap-119f, 0.0f, 0.0f, 0x1.bc0dcep-83f,
     0x1.3fefc2p-110f, 0x1.1be00ep-9f, 0.0f, 0x1.ffb598p-113f, 0.0f, 0x1.c3f082p-84f,
     0.0f, 0x1.152a32p-19f, 0x1.1d8f48p-32f, 0.0f, 0.0f, 0.0f, 0x1.2ef54cp-92f, 0.0f,
     0.0f, 0x1.eb6e9ap-42f, 0x1.1b07d4p-61f, 0.0f, 0x1.7452f8p-124f, 0.0f,
     0x1.c38e02p-6f, 0.0f, 0x1.6d80b8p-62f, 0x1.bdd0e2p-107f, 0x1.0864d6p-41f,
     0x1.5fd2b4p-119f, 0x1.31cfaap-17f, 0x1p0f, 0.0f, 0.0f, 0x1.285d14p-118f, 0.0f,
     0.0f, 0x1.b36942p-99f, 0x1.4a27e4p-51f, 0.0f, 0x1.f55b9ep-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.367006p-13f, 0x1.27cbacp-20f, 0x1.f209a6p-95f, 0x1.0ab5aap-11f, 0.0f,
     0x1.10165ap-125f, 0x1.b38c4p-125f, 0x1.8fd35p-118f, 0.0f, 0.0f, 0.0f,
     0x1.b0437ep-26f, 0x1.9df29cp-111f, 0.0f, 0x1.9f7448p-109f, 0x1.8b6116p-108f,
     0x1.cb20e4p-97f, 0.0f, 0x1.3e8bdcp-90f, 0x1.5d1048p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a95e9ap-101f, 0.0f, 0x1.9c7d3p-96f, 0.0f, 0x1.e87eccp-94f, 0.0f, 0.0f,
     0.0f, 0x1.5b1dbcp-103f, 0x1.7e0a8p-125f, 0x1.b197f4p-30f, 0x1.f9e7p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.688fdep-96f, 0.0f, 0.0f, 0x1.d1900cp-12f,
     0x1.0cf756p-12f, 0x1.57dbdcp-97f, 0.0f, 0x1.f528d8p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b46c6ap-31f, 0x1.6fe64p-111f, 0x1.25e624p-106f, 0.0f, 0.0f, 0x1.ee4338p-9f,
     0.0f, 0x1.90128p-83f, 0x1.88ff8cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0c992p-2f, 0.0f, 0x1.3c652ep-3f, 0x1.be665ep-16f,
     0x1.eb4a72p-106f, 0x1.7f21bep-120f, 0x1.34e3e4p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9c06a8p-64f, 0x1.674782p-104f, 0x1.3c1714p-72f,
     0x1.6a7d3ep-35f, 0x1.06eeb2p-84f, 0x1.f0b2dap-103f, 0x1.0b679ap-18f,
     0x1.249fcp-94f, 0.0f, 0x1.e36852p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6464e8p-71f,
     0.0f, 0x1.b64c26p-34f, 0.0f, 0x1.005ec8p-44f, 0x1.bd6bfep-15f, 0x1.0a2a44p-107f,
     0x1.b81502p-102f, 0.0f, 0x1.d187dep-46f, 0x1.a508d6p-93f, 0.0f, 0x1.9a5bc2p-67f,
     0x1.d3fd8cp-41f, 0x1.d75456p-113f, 0.0f, 0.0f, 0x1.d74472p-75f, 0x1.4e2ddap-84f,
     0x1.8c6d8cp-124f, 0x1.e75b6ep-124f, 0x1.11ee7ap-57f, 0.0f, 0x1.7ed416p-2f,
     0x1.7279d2p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ae75cp-67f, 0x1.ec5c4p-89f,
     0x1.5ac86cp-100f, 0.0f, 0.0f, 0.0f, 0x1.654478p-5f, 0.0f, 0x1.2ef182p-27f,
     0x1.7ad70ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ac462p-96f, 0x1.8a93c2p-32f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_roundf1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_roundf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_roundf1_purecfma bench acc %a\n", global_bench_acc);
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
