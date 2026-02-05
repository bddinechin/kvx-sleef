/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceilf1_purecfma.c --function Sleef_ceilf1_purecfma \
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
     0x1.dcb324p-117f, 0.0f, 0.0f, 0x1.45455p-11f, 0.0f, 0.0f, 0x1.64537p-74f,
     0x1.55528p-77f, 0.0f, 0x1.ad5db4p-105f, 0x1.ea4f8ap-116f, 0x1.4b8d3p-24f,
     0x1.382bdap-30f, 0.0f, 0x1.34cf38p-6f, 0x1.372ebcp-86f, 0.0f, 0.0f,
     0x1.748378p-12f, 0x1.5ae08p-78f, 0x1.58103ep-80f, 0.0f, 0x1.37b834p-95f, 0.0f,
     0.0f, 0.0f, 0x1.7f4bacp-31f, 0x1.2a58p-4f, 0.0f, 0x1.1dc39p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3430dp-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c9f02p-91f, 0x1.e9b726p-93f, 0.0f,
     0x1.95aabcp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b429ap-61f, 0x1.514e4ep-96f, 0.0f,
     0x1.a62724p-25f, 0.0f, 0.0f, 0x1.761808p-112f, 0.0f, 0x1.0fe4fep-75f,
     0x1.8fb2cep-54f, 0x1.a2793ap-110f, 0x1.3abd4ap-114f, 0x1.3e9066p-73f,
     0x1.39c82p-61f, 0.0f, 0x1.37deccp-78f, 0.0f, 0x1.79079ap-1f, 0.0f, 0.0f,
     0x1.2e3d4ap-7f, 0.0f, 0x1.a04736p-85f, 0x1.19942ap-48f, 0x1.b6f362p-69f, 0.0f,
     0x1.770fd6p-60f, 0x1.410ef6p-54f, 0x1.af2a8ap-5f, 0x1.da3974p-27f,
     0x1.871108p-83f, 0x1.97f054p-97f, 0.0f, 0.0f, 0x1.b1ce54p-87f, 0x1.54cbd4p-48f,
     0x1.3e646p-31f, 0x1.59823ap-65f, 0.0f, 0.0f, 0x1.954a3ap-83f, 0x1.be0cc4p-13f,
     0x1.ee3342p-44f, 0.0f, 0x1.0929fep-108f, 0x1.6480a6p-105f, 0x1.c44bcep-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edb6dap-118f, 0.0f,
     0x1.31d12ap-73f, 0.0f, 0.0f, 0x1.352202p-86f, 0x1.d1d992p-49f, 0x1.86532ep-69f,
     0.0f, 0x1.d2bcdp-15f, 0.0f, 0x1.8d2e22p-14f, 0x1.593796p-76f, 0x1.a1a882p-19f,
     0.0f, 0x1.ecaa62p-103f, 0.0f, 0x1.2f81acp-29f, 0.0f, 0.0f, 0.0f, 0x1.e4f08p-29f,
     0x1.658964p-33f, 0.0f, 0x1.aa58aep-96f, 0x1.fabf9p-21f, 0.0f, 0x1.f0c366p-101f,
     0x1.c5f3c2p-47f, 0.0f, 0x1.727ab8p-30f, 0.0f, 0x1.2f6c1p-103f, 0.0f,
     0x1.b0a914p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c0b6ep-46f, 0.0f, 0x1.7334cap-54f,
     0.0f, 0x1.08e57ep-49f, 0.0f, 0x1.a17994p-78f, 0x1.50d23cp-67f, 0x1.90bf08p-61f,
     0.0f, 0.0f, 0x1.130c46p-63f, 0x1.dc0882p-45f, 0x1.437614p-73f, 0.0f,
     0x1.c72deap-113f, 0x1.f2fe3ep-30f, 0.0f, 0x1.7d7f4ap-21f, 0.0f, 0x1.3964d4p-42f,
     0.0f, 0x1p0f, 0x1.3ab942p-45f, 0.0f, 0x1.5a511cp-105f, 0.0f, 0x1.bffc96p-42f,
     0x1.3f1a2p-23f, 0.0f, 0x1.435b5ap-54f, 0.0f, 0x1.61d3cp-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.da27f8p-28f, 0.0f, 0x1.97c146p-81f, 0.0f, 0x1.f150cep-50f,
     0x1.1e1628p-76f, 0.0f, 0.0f, 0.0f, 0x1.6ec454p-30f, 0.0f, 0.0f, 0.0f,
     0x1.f3b42p-75f, 0x1.4a3324p-65f, 0.0f, 0x1.43e69p-57f, 0.0f, 0.0f,
     0x1.fdfcc6p-19f, 0x1.6a6f84p-117f, 0x1.39df78p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb972cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50f104p-66f, 0.0f,
     0x1.505348p-41f, 0x1.571d04p-69f, 0.0f, 0x1.b6924ap-70f, 0x1.3f5274p-52f,
     0x1.2f8accp-6f, 0.0f, 0x1.7548e2p-74f, 0.0f, 0.0f, 0x1.77d4c6p-117f, 0.0f,
     0x1.ca3a46p-75f, 0.0f, 0x1.bf1e04p-110f, 0x1.5610a2p-112f, 0.0f, 0.0f,
     0x1.e66faep-126f, 0.0f, 0.0f, 0x1.d67dc2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c64c6ep-81f, 0x1.2656c4p-29f, 0.0f, 0x1.5f6fa4p-61f, 0x1.da1946p-58f,
     0x1.201e9ap-101f, 0x1.9e32bep-62f, 0x1.b725fcp-64f, 0.0f, 0.0f, 0x1.7d48e2p-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1205ecp-24f, 0x1.fd243p-96f, 0.0f,
     0x1.eadc5ep-121f, 0x1.2516dap-33f, 0x1.ad49e4p-121f, 0x1.696964p-22f,
     0x1.e0dd84p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a39dap-3f, 0.0f,
     0x1.e9b55ep-59f, 0x1.7af7ep-14f, 0x1.2f1594p-111f, 0x1.264106p-30f, 0.0f, 0.0f,
     0.0f, 0x1.ba6a22p-16f, 0.0f, 0.0f, 0x1.38ee36p-24f, 0.0f, 0x1.2188e2p-25f,
     0x1.a222ep-120f, 0x1.7c0fdcp-65f, 0x1.063fecp-40f, 0x1.adaa92p-87f, 0.0f, 0x1p0f,
     0x1.6fc2dp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b00cf8p-6f,
     0x1.8504dap-15f, 0x1.7498dp-54f, 0.0f, 0x1.751156p-83f, 0.0f, 0x1.40f25p-83f,
     0x1.d41ce2p-33f, 0x1.dd60aap-10f, 0.0f, 0x1.1226fp-57f, 0x1.f2cc06p-55f, 0.0f,
     0x1.edbf44p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ed318p-68f, 0x1.4f757cp-22f,
     0x1.f4a55ap-48f, 0x1.65e54ep-42f, 0x1.4dd1dap-7f, 0.0f, 0.0f, 0.0f,
     0x1.b002f6p-89f, 0x1.cc4082p-11f, 0.0f, 0x1.a8c346p-35f, 0.0f, 0x1.70d816p-101f,
     0.0f, 0x1.e6db48p-11f, 0.0f, 0x1.575354p-116f, 0.0f, 0.0f, 0x1.943cccp-104f,
     0x1.90c35cp-38f, 0x1.daae2p-40f, 0.0f, 0x1.f56abp-18f, 0x1.f4b724p-55f,
     0x1.3e402p-67f, 0.0f, 0.0f, 0x1.50b454p-23f, 0.0f, 0x1.19643ap-52f, 0.0f,
     0x1.13b762p-84f, 0x1.4b4986p-47f, 0x1.65e1ecp-32f, 0x1.102f66p-112f,
     0x1.b4e38cp-109f, 0.0f, 0x1.ff2994p-111f, 0x1.e688e4p-55f, 0.0f, 0.0f, 0.0f,
     0x1.c07e72p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62a6e6p-13f, 0x1.168ep-121f,
     0x1.f539b6p-82f, 0.0f, 0x1.fc32e8p-65f, 0x1.e53fc4p-76f, 0x1.379a26p-120f,
     0x1.5fcb3p-118f, 0x1.e34a92p-58f, 0x1.218a9cp-91f, 0.0f, 0.0f, 0.0f,
     0x1.30b8c6p-58f, 0.0f, 0.0f, 0.0f, 0x1.34cc78p-15f, 0x1.bf2196p-40f,
     0x1.2e62a2p-43f, 0x1.0214acp-97f, 0x1.3d5d6ep-122f, 0x1.428696p-63f,
     0x1.6d9b4ap-16f, 0.0f, 0x1.0064fep-71f, 0x1.d42fcep-120f, 0.0f, 0x1.943a08p-1f,
     0x1.761facp-40f, 0.0f, 0x1.6ea824p-2f, 0x1.08712ap-48f, 0x1.452ad2p-11f,
     0x1.3a2ea2p-15f, 0.0f, 0x1.27f0bp-11f, 0x1.59c76ep-77f, 0x1.3ff366p-85f,
     0x1.704408p-28f, 0.0f, 0x1.308ae2p-72f, 0x1.d135f4p-38f, 0.0f, 0.0f,
     0x1.c33c72p-110f, 0.0f, 0.0f, 0x1.7dc8b4p-81f, 0.0f, 0.0f, 0x1.5a695p-110f,
     0x1.738894p-126f, 0x1.621bc2p-67f, 0x1.134d9ep-21f, 0x1.3dc24ep-75f, 0.0f,
     0x1.b4e9ccp-4f, 0x1.42dc24p-40f, 0.0f, 0.0f, 0x1.a0d8b4p-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c4eacp-125f, 0x1.5508f8p-32f,
     0x1.c7f57ap-64f, 0x1.f83dap-41f, 0.0f, 0.0f, 0x1.7a194ep-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d1dcbep-27f, 0x1.767ce8p-97f, 0x1.6977c6p-15f, 0.0f, 0x1.57794p-123f,
     0x1.74cd0cp-8f, 0x1.c0b43p-126f, 0x1.f8b5a6p-66f, 0.0f, 0x1.3ccff2p-115f, 0.0f,
     0x1.f0cb62p-107f, 0x1.d0ad62p-22f, 0.0f, 0.0f, 0x1.d9ce7ap-16f, 0.0f,
     0x1.b01e38p-45f, 0.0f, 0x1.d1b672p-50f, 0.0f, 0.0f, 0x1.acc7f4p-26f,
     0x1.4ae07cp-36f, 0x1.929beep-78f, 0x1.55ab34p-47f, 0x1.66abcep-47f,
     0x1.a3cd5p-57f, 0.0f, 0x1.d9c7eep-1f, 0.0f, 0x1.7ecc1cp-53f, 0.0f,
     0x1.20a524p-44f, 0x1.ba7332p-30f, 0x1.027c54p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a8cacp-50f, 0x1.01a182p-104f, 0.0f, 0.0f, 0x1.1d85aep-71f, 0.0f,
     0x1.4ab50ap-31f, 0x1.a7b93p-42f, 0.0f, 0.0f, 0x1.c8db6ap-116f, 0.0f, 0.0f,
     0x1.77b758p-102f, 0x1.cee9b4p-37f, 0x1.1ddaf2p-26f, 0x1.7c8b3cp-32f,
     0x1.b5d0bcp-2f, 0.0f, 0x1.a53df8p-62f, 0x1.149ac2p-65f, 0.0f, 0x1.2aa2d4p-83f,
     0.0f, 0x1.4d966p-42f, 0x1.f49f08p-57f, 0x1.beafe4p-77f, 0x1.5c882ap-77f, 0.0f,
     0x1.6815a2p-7f, 0.0f, 0x1.5cae2cp-9f, 0.0f, 0.0f, 0x1.6a3e0ap-73f, 0.0f,
     0x1.12b44cp-52f, 0.0f, 0x1.9ffb6ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67a00ep-119f,
     0.0f, 0x1.3ef35cp-85f, 0.0f, 0.0f, 0.0f, 0x1.1bba4p-60f, 0.0f, 0.0f,
     0x1.d0012ap-75f, 0.0f, 0x1.b2bba8p-23f, 0x1.7533cap-96f, 0x1.2bde24p-90f,
     0x1.747238p-6f, 0.0f, 0x1.5e6462p-123f, 0.0f, 0x1.a4093p-110f, 0x1.22af0cp-103f,
     0.0f, 0x1.28b788p-78f, 0.0f, 0.0f, 0x1.da086p-59f, 0x1.264546p-34f,
     0x1.5cbb56p-107f, 0x1.fc8feap-38f, 0.0f, 0.0f, 0.0f, 0x1.999p-37f, 0.0f,
     0x1.5b4f76p-84f, 0x1.a05fa6p-9f, 0x1.e54b9p-55f, 0.0f, 0x1.88f11ep-42f, 0.0f,
     0x1.97a328p-125f, 0x1.605b1ep-5f, 0x1.7f6ebep-114f, 0x1.7d1e16p-82f, 0.0f,
     0x1.2d7ae2p-80f, 0x1.778bc4p-59f, 0x1.d13e96p-72f, 0x1.4f0828p-109f, 0.0f, 0.0f,
     0.0f, 0x1.faa19p-109f, 0.0f, 0x1.e13572p-4f, 0x1.c73f7p-103f, 0.0f,
     0x1.f4100ep-51f, 0x1.5f93fcp-88f, 0x1.4000c8p-47f, 0.0f, 0.0f, 0.0f,
     0x1.641582p-99f, 0.0f, 0x1.d1fb24p-106f, 0x1.7a8df6p-55f, 0.0f, 0.0f, 0.0f,
     0x1.343668p-4f, 0.0f, 0x1.53984p-56f, 0.0f, 0x1.705a1cp-83f, 0x1.ad50bap-91f,
     0x1.21dc34p-7f, 0.0f, 0.0f, 0.0f, 0x1.3a963p-116f, 0x1.5c51fcp-16f, 0.0f,
     0x1.b2977cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bdbe2p-68f, 0.0f, 0.0f,
     0x1.ceadd6p-37f, 0.0f, 0.0f, 0x1.b7362p-35f, 0x1.1b80d8p-24f, 0x1.33be92p-66f,
     0x1.0df8e8p-99f, 0.0f, 0x1.b358a6p-23f, 0x1.f63462p-45f, 0x1.45e206p-65f,
     0x1.dbacb8p-8f, 0.0f, 0x1.780d28p-87f, 0.0f, 0x1.3ea038p-23f, 0x1.7389a2p-26f,
     0x1.16ae76p-116f, 0.0f, 0.0f, 0.0f, 0x1.ab8582p-53f, 0.0f, 0x1.4127d2p-83f, 0.0f,
     0.0f, 0x1.dd5bdp-61f, 0.0f, 0.0f, 0.0f, 0x1.9c646ap-83f, 0.0f, 0.0f, 0.0f,
     0x1.d835dap-121f, 0.0f, 0.0f, 0x1.944dep-45f, 0.0f, 0.0f, 0x1.960a5cp-14f,
     0x1.7095b2p-4f, 0.0f, 0.0f, 0x1.6dd562p-8f, 0.0f, 0x1.ae832ep-28f, 0.0f, 0.0f,
     0.0f, 0x1.5d5b0ap-96f, 0.0f, 0.0f, 0.0f, 0x1.ab3d06p-32f, 0.0f, 0.0f, 0.0f,
     0x1.52c96cp-53f, 0x1.7e899p-122f, 0x1.619544p-52f, 0x1.95b5d6p-31f, 0.0f, 0.0f,
     0x1.df0438p-46f, 0x1.ce5b1ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4c062p-52f,
     0x1.8a13f8p-94f, 0.0f, 0x1.b39f42p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.546c5p-68f, 0.0f, 0.0f, 0x1.a346bep-12f, 0x1.261348p-101f, 0x1.186c92p-83f,
     0x1.2a8efcp-94f, 0.0f, 0.0f, 0.0f, 0x1.eb2e68p-59f, 0.0f, 0.0f, 0.0f,
     0x1.c16f64p-94f, 0.0f, 0x1.54d768p-33f, 0.0f, 0x1.12a81p-109f, 0x1.d09bb4p-93f,
     0x1.bf893cp-15f, 0.0f, 0.0f, 0x1.f76a8p-43f, 0x1.07c4dp-77f, 0x1.0e1bb4p-2f,
     0.0f, 0.0f, 0x1.60aa6ep-110f, 0x1.0ea782p-99f, 0.0f, 0x1.d7c2d6p-68f, 0.0f, 0.0f,
     0x1.c921c2p-82f, 0.0f, 0x1.15c9a8p-83f, 0x1.354b7p-125f, 0x1.dbe7bcp-66f, 0.0f,
     0x1.c365cap-125f, 0x1.b4542p-113f, 0.0f, 0.0f, 0.0f, 0x1.828b94p-44f,
     0x1.aabb1ap-19f, 0x1.66c48ap-48f, 0.0f, 0.0f, 0x1.825942p-18f, 0x1.29b044p-31f,
     0.0f, 0x1.18335cp-99f, 0x1.d0a792p-56f, 0.0f, 0.0f, 0.0f, 0x1.070146p-104f, 0.0f,
     0x1.04b126p-85f, 0x1.2d1ce6p-62f, 0.0f, 0.0f, 0x1.351a12p-85f, 0.0f,
     0x1.076e5cp-86f, 0x1.ca5418p-28f, 0x1.f0a496p-94f, 0.0f, 0x1.d0721ep-52f,
     0x1.f6c07cp-101f, 0x1.04952ap-17f, 0.0f, 0x1.797a7ap-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.63b06p-13f, 0.0f, 0x1.714d9cp-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f42d7ap-124f, 0.0f, 0x1.f39398p-80f, 0.0f, 0x1.5986p-37f, 0x1.8d54fap-36f,
     0x1.90021cp-31f, 0x1.57433cp-6f, 0.0f, 0x1.923a32p-25f, 0x1.7617c6p-115f, 0.0f,
     0x1.4b77c8p-123f, 0x1.fd533cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e11b98p-45f,
     0.0f, 0x1.9f581cp-15f, 0.0f, 0.0f, 0x1.f9105ap-45f, 0x1.e3967cp-75f,
     0x1.39c9bcp-122f, 0x1.04a28cp-28f, 0.0f, 0.0f, 0.0f, 0x1.c0199cp-86f,
     0x1.28d9d6p-26f, 0x1.90dc1p-27f, 0x1.288c2cp-122f, 0x1.23e488p-74f,
     0x1.15b4fap-40f, 0x1.aa838ap-119f, 0.0f, 0.0f, 0x1.860d36p-80f, 0x1.a9c6p-43f,
     0.0f, 0x1.a8e83ap-100f, 0x1.db1c8ep-17f, 0x1.42c1cp-27f, 0x1.bbe446p-2f,
     0x1.c47642p-7f, 0.0f, 0.0f, 0.0f, 0x1.ffcd82p-55f, 0x1.ee156ap-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4e03bap-66f, 0x1.27acc2p-108f, 0.0f, 0.0f, 0x1.0212aap-123f,
     0x1.f056eep-73f, 0x1.f180fep-88f, 0x1.8e4992p-96f, 0x1.553bfcp-100f,
     0x1.74b904p-112f, 0x1.a3a6aep-29f, 0.0f, 0.0f, 0x1.90f43ap-82f, 0x1.e6fbfep-37f,
     0.0f, 0x1.c879a6p-53f, 0.0f, 0x1.c8e2b6p-29f, 0.0f, 0.0f, 0x1.a563dp-68f,
     0x1.1eb10cp-121f, 0x1.640534p-81f, 0x1.9314ep-61f, 0x1.94b5d4p-115f,
     0x1.e7d658p-69f, 0.0f, 0.0f, 0x1.795decp-48f, 0x1.5a5f42p-15f, 0x1.367046p-81f,
     0x1.f1c19ep-39f, 0.0f, 0x1.ba21b6p-124f, 0x1.1657d6p-105f, 0x1.258bp-99f, 0.0f,
     0x1.f5815ep-47f, 0.0f, 0x1.757376p-5f, 0.0f, 0x1.0b4266p-42f, 0.0f, 0x1p0f,
     0x1.3b4392p-18f, 0.0f, 0x1.34bea6p-6f, 0x1.163512p-26f, 0.0f, 0.0f, 0.0f,
     0x1.a24e3ap-38f, 0.0f, 0.0f, 0.0f, 0x1.65c8a8p-16f, 0x1.01e66ap-65f, 0.0f,
     0x1.d3dc9p-72f, 0x1.40406ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.182868p-62f,
     0x1.4d8b96p-11f, 0x1.99f21ep-102f, 0.0f, 0.0f, 0x1.c0b92ap-123f, 0.0f,
     0x1.6e57fap-110f, 0.0f, 0.0f, 0x1.dc1256p-116f, 0.0f, 0x1.4f8994p-45f, 0.0f,
     0.0f, 0.0f, 0x1.db35b4p-84f, 0.0f, 0x1.ac6846p-4f, 0.0f, 0.0f, 0x1.7d9a24p-117f,
     0x1.a2088ep-27f, 0.0f, 0x1.4fced6p-115f, 0.0f, 0.0f, 0x1.f4aaaap-27f, 0.0f, 0.0f,
     0x1.46d6p-62f, 0x1.e106cp-12f, 0x1.33d6a2p-58f, 0.0f, 0x1.48283ep-20f, 0.0f,
     0x1.658ac8p-77f, 0.0f, 0x1.ba3dc2p-4f, 0x1.d3353ep-15f, 0x1.20ed02p-59f,
     0x1.f2ef9p-95f, 0x1.81dbe8p-63f, 0x1.6f9414p-27f, 0x1.3bcff6p-46f, 0.0f, 0.0f,
     0x1.a11094p-99f, 0x1p0f, 0x1.a67246p-115f, 0.0f, 0x1.7f47fep-15f, 0.0f, 0.0f,
     0.0f, 0x1.447b2p-94f, 0x1.8fd76ep-56f, 0x1.7b5fd2p-10f, 0x1.2323bp-62f, 0.0f,
     0.0f, 0x1.c11096p-37f, 0.0f, 0x1.37e62cp-99f, 0x1.d6d3acp-108f, 0.0f,
     0x1.8a84cep-98f, 0.0f, 0x1.2aaf8cp-16f, 0x1.ebb0a4p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.043d52p-25f, 0x1.454c9ep-98f, 0x1.c4133ep-51f, 0.0f,
     0x1.369514p-17f
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
            tmp1 = Sleef_ceilf1_purecfma(tmp0);
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
    printf("Sleef_ceilf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ceilf1_purecfma bench acc %a\n", global_bench_acc);
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
