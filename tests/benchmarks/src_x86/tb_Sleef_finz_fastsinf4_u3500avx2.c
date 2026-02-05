/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastsinf4_u3500avx2128.c --function \
 *     Sleef_finz_fastsinf4_u3500avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.94bec6p-14f, 0.0f, 0x1.43c736p-70f, 0.0f, 0.0f, 0x1.bc46d8p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc0ebap-51f, 0.0f, 0.0f, 0.0f, 0x1.d77512p-15f, 0.0f,
     0.0f, 0x1.b6249ap-85f, 0.0f, 0.0f, 0x1.a12618p-101f, 0x1.4e2b36p-76f, 0.0f,
     0x1.3c2b0cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e3e7ap-83f, 0x1.c91a56p-25f,
     0x1.4d3956p-56f, 0.0f, 0x1.5704a8p-71f, 0x1.5458fcp-79f, 0.0f, 0x1.d706e4p-102f,
     0.0f, 0.0f, 0x1.e1db5ep-94f, 0.0f, 0x1.a0f51cp-67f, 0x1.bf474p-124f,
     0x1.dcb41ap-83f, 0.0f, 0.0f, 0x1.ec38f8p-108f, 0.0f, 0x1.0a1dcap-102f, 0.0f,
     0.0f, 0x1.8e0b6cp-51f, 0.0f, 0.0f, 0.0f, 0x1.31d9b6p-102f, 0.0f,
     0x1.710da2p-120f, 0.0f, 0x1.a125eap-28f, 0.0f, 0x1.247e5cp-8f, 0x1.baf0c8p-13f,
     0x1.c4d7b8p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05360ap-120f,
     0x1.41017p-83f, 0.0f, 0.0f, 0x1.9d38b8p-16f, 0x1.52de2cp-28f, 0.0f, 0.0f,
     0x1.216b6ap-48f, 0.0f, 0x1.a265d8p-38f, 0.0f, 0x1.1fe64ep-88f, 0x1.4fafb8p-9f,
     0x1.69b12p-54f, 0x1.9f70e8p-28f, 0x1.1bb79cp-95f, 0x1.07d11cp-111f, 0.0f, 0.0f,
     0.0f, 0x1.8e531ep-100f, 0.0f, 0.0f, 0x1.64804p-28f, 0.0f, 0.0f, 0x1.2c83e6p-92f,
     0x1.ac20f6p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.272628p-5f,
     0x1.c0927cp-61f, 0.0f, 0.0f, 0x1.d34e7p-35f, 0.0f, 0x1.2b6a14p-3f, 0.0f, 0.0f,
     0x1.681206p-46f, 0x1.512166p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f949p-109f,
     0x1.6e9286p-101f, 0.0f, 0x1.d314bap-116f, 0x1.a9eeeap-6f, 0.0f, 0.0f, 0.0f,
     0x1.d2d5c6p-26f, 0.0f, 0x1.86fdaep-56f, 0.0f, 0.0f, 0x1.6b67dep-55f, 0.0f,
     0x1.fe133ap-110f, 0x1.784ae8p-81f, 0.0f, 0.0f, 0x1.a3b5cap-109f, 0.0f,
     0x1.a6132ap-117f, 0x1.81bad4p-29f, 0.0f, 0.0f, 0.0f, 0x1.de0ec8p-93f,
     0x1.3fb036p-46f, 0x1.90a248p-71f, 0.0f, 0.0f, 0.0f, 0x1.63121cp-30f,
     0x1.5611b8p-2f, 0x1.e0e1f8p-86f, 0.0f, 0x1.e933acp-91f, 0.0f, 0x1.075132p-82f,
     0.0f, 0x1.9b821ap-75f, 0x1.202912p-124f, 0x1.79c198p-51f, 0.0f, 0x1.444ac8p-23f,
     0.0f, 0x1.7c093cp-114f, 0.0f, 0x1.35b46ep-70f, 0x1.961f7cp-17f, 0.0f, 0.0f,
     0x1.eafd68p-69f, 0.0f, 0x1.c80e8ap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebd8fap-102f,
     0.0f, 0x1.bc095cp-42f, 0.0f, 0.0f, 0.0f, 0x1.968dbep-49f, 0x1.cd2928p-105f, 0.0f,
     0.0f, 0x1.514406p-41f, 0.0f, 0x1.f7995ap-119f, 0.0f, 0x1.1ab7dap-89f, 0.0f, 0.0f,
     0.0f, 0x1.d76c2ap-88f, 0.0f, 0x1.01d7a2p-15f, 0.0f, 0x1.8a0dfcp-27f, 0.0f,
     0x1.8f9224p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d51cfp-89f, 0x1.a43248p-49f,
     0x1.2a975ap-20f, 0.0f, 0x1.736cbp-2f, 0.0f, 0x1.39391ep-118f, 0x1.8f5df4p-107f,
     0x1.af20ecp-15f, 0x1.afb76ap-18f, 0x1.1d3258p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc5d3ep-95f, 0.0f, 0x1.605502p-1f, 0.0f, 0x1.26bffap-48f, 0.0f,
     0x1.b363d4p-50f, 0.0f, 0x1.4e8726p-71f, 0.0f, 0x1.bf08c2p-52f, 0x1.577c3ep-77f,
     0x1.7743cp-3f, 0x1.65a31ep-47f, 0.0f, 0.0f, 0x1.f759f2p-86f, 0x1.c0affap-60f,
     0x1.84d0ecp-17f, 0.0f, 0x1.f4a58ep-110f, 0x1.9db8acp-87f, 0x1.6b7fdcp-99f,
     0x1.6defccp-68f, 0.0f, 0.0f, 0x1.2229fcp-125f, 0x1.87edbep-5f, 0.0f, 0.0f, 0.0f,
     0x1.6739b4p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3875fap-93f, 0.0f, 0.0f,
     0.0f, 0x1.294036p-62f, 0x1.751322p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.724eeap-54f, 0.0f, 0.0f, 0.0f, 0x1.ba01bap-90f, 0x1.ecdf22p-47f,
     0x1.c856a6p-63f, 0.0f, 0.0f, 0x1.b47c5ap-123f, 0.0f, 0x1.707264p-5f, 0.0f,
     0x1.4f6aa6p-64f, 0.0f, 0x1.0a9084p-113f, 0.0f, 0.0f, 0.0f, 0x1.eaefd2p-92f, 0.0f,
     0x1.f9b46cp-89f, 0x1.60aa1p-82f, 0.0f, 0.0f, 0x1.b04e7ap-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cfbc04p-42f, 0x1.66ecd2p-102f, 0.0f, 0.0f, 0x1.9542ap-88f,
     0x1.1d7b02p-94f, 0.0f, 0.0f, 0x1.d73c2p-59f, 0.0f, 0.0f, 0.0f, 0x1.845582p-29f,
     0.0f, 0.0f, 0x1.f31a8ap-125f, 0.0f, 0x1.0b306ap-17f, 0x1.615a14p-113f,
     0x1.8ab816p-1f, 0x1.e585c6p-100f, 0x1.786b7cp-92f, 0x1.0305bp-104f, 0.0f,
     0x1.d95ca4p-70f, 0.0f, 0.0f, 0.0f, 0x1.186572p-120f, 0.0f, 0.0f,
     0x1.d492a2p-122f, 0.0f, 0x1.1598acp-106f, 0x1.102554p-64f, 0x1.ded59ep-108f,
     0.0f, 0.0f, 0x1.bbb05ep-24f, 0x1.80483ap-42f, 0.0f, 0x1.df36e2p-119f,
     0x1.1ab0b8p-44f, 0.0f, 0x1.79b8fap-28f, 0.0f, 0.0f, 0.0f, 0x1.66d288p-103f,
     0x1.3b9c64p-29f, 0.0f, 0x1.ea34ap-13f, 0.0f, 0.0f, 0x1.f56662p-98f,
     0x1.1898cap-122f, 0x1.e8188ep-48f, 0.0f, 0x1.e5b702p-52f, 0.0f, 0x1.b89c94p-113f,
     0x1.3dc2c2p-118f, 0x1.b49c32p-93f, 0x1.81550ep-14f, 0.0f, 0.0f, 0x1.5e6ef4p-21f,
     0x1.3335f8p-108f, 0x1.c3e72ep-121f, 0.0f, 0x1.872f26p-15f, 0x1.c7efa2p-25f,
     0x1.1722f4p-101f, 0x1.88a92p-92f, 0.0f, 0x1.174196p-100f, 0.0f, 0.0f, 0.0f,
     0x1.91357cp-60f, 0.0f, 0.0f, 0.0f, 0x1.a5c5b8p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef841ep-121f, 0.0f, 0x1.49a96p-97f, 0.0f, 0x1.678baep-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.51229p-44f, 0x1.8448a4p-111f, 0x1.aa7af4p-7f, 0.0f,
     0x1.334ec2p-62f, 0.0f, 0x1.d5515cp-30f, 0x1.f33f48p-14f, 0x1.beb148p-33f,
     0x1.8f9fdep-33f, 0x1.7847cep-80f, 0.0f, 0.0f, 0x1.10a52p-72f, 0.0f, 0.0f, 0.0f,
     0x1.33b10ep-56f, 0x1.dbefdep-99f, 0x1.2b3d38p-48f, 0x1.4640ccp-38f, 0.0f,
     0x1.b3ca18p-102f, 0x1.8bb5f4p-71f, 0.0f, 0x1.aed10ap-72f, 0x1.18b498p-48f,
     0x1.6cbce8p-88f, 0.0f, 0.0f, 0x1.b3f7f8p-61f, 0x1.6edd56p-96f, 0x1.2c5c22p-98f,
     0x1.d015bp-29f, 0x1.b647bp-80f, 0.0f, 0.0f, 0x1.03d602p-71f, 0x1.77df0ep-8f,
     0x1.87338cp-62f, 0.0f, 0x1.c11788p-67f, 0x1.1aa60cp-103f, 0x1.a79d0ap-125f,
     0x1.2a4c9cp-105f, 0.0f, 0.0f, 0x1.116f8cp-75f, 0.0f, 0x1.0ae6aep-52f, 0.0f,
     0x1.0bc364p-36f, 0.0f, 0x1.d8cb62p-81f, 0.0f, 0x1.e5e576p-78f, 0x1.0b98aep-99f,
     0.0f, 0x1.34f12p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3d262p-1f, 0.0f,
     0x1.abb39p-61f, 0x1.e19206p-109f, 0x1.7faap-98f, 0x1.9fa7ecp-122f,
     0x1.df73cap-64f, 0x1.28e89ep-10f, 0.0f, 0.0f, 0x1.78ee46p-85f, 0x1.eacc86p-5f,
     0x1.9f706ep-83f, 0x1.47cc3ap-29f, 0.0f, 0x1.3486e6p-10f, 0x1.fc7d9p-27f,
     0x1.2c6c88p-47f, 0.0f, 0x1.c40afp-2f, 0x1.9d5c0ep-125f, 0.0f, 0x1.68ad66p-17f,
     0x1.4b36bcp-61f, 0x1.51349ap-8f, 0x1.09940cp-104f, 0.0f, 0.0f, 0.0f,
     0x1.59fc76p-108f, 0.0f, 0.0f, 0x1.77e38ep-51f, 0x1.52dda8p-119f, 0.0f,
     0x1.a08edcp-122f, 0.0f, 0.0f, 0x1.e6a92ap-111f, 0.0f, 0x1.efc332p-72f, 0.0f,
     0x1.6fbdbcp-19f, 0x1.082c72p-125f, 0x1.8c8f06p-52f, 0.0f, 0.0f, 0.0f,
     0x1.99d06ap-37f, 0.0f, 0x1.4c661ap-18f, 0x1.1d244p-79f, 0.0f, 0x1.9533p-92f,
     0.0f, 0x1.1f444p-85f, 0.0f, 0x1.ce6dcep-93f, 0x1.ff6706p-79f, 0x1.7aa348p-82f,
     0x1.fbf83p-100f, 0.0f, 0.0f, 0.0f, 0x1.5ab538p-62f, 0x1.a0358p-108f,
     0x1.8c5a52p-84f, 0x1.7c5ea8p-86f, 0.0f, 0.0f, 0.0f, 0x1.3f7bfap-93f, 0.0f, 0.0f,
     0x1.3e211ep-9f, 0.0f, 0.0f, 0x1.6a82f2p-16f, 0x1.dad26p-118f, 0x1.a84aacp-82f,
     0x1.bfd712p-17f, 0.0f, 0x1.f57ed2p-59f, 0x1.b8e808p-121f, 0.0f, 0.0f,
     0x1.3c2ae4p-56f, 0x1.f8fd5ep-113f, 0x1.9ed04ap-29f, 0x1.e8a206p-90f,
     0x1.af7f5cp-77f, 0x1.ec42e6p-108f, 0x1.3de7fp-44f, 0x1.ef5e24p-36f, 0.0f,
     0x1.1cb31p-121f, 0.0f, 0x1.72a87cp-10f, 0x1.4dce1ep-36f, 0.0f, 0x1.ecaee4p-56f,
     0x1.25079cp-124f, 0x1.0ea63cp-9f, 0x1.f9e00cp-13f, 0x1.3d476cp-34f, 0.0f, 0.0f,
     0x1.36a944p-10f, 0.0f, 0.0f, 0x1.c8b60ep-33f, 0.0f, 0.0f, 0x1.76c6p-33f,
     0x1.5d416ap-85f, 0.0f, 0.0f, 0x1.51cefep-114f, 0.0f, 0x1.fa2838p-14f, 0.0f,
     0x1.71ae4ap-111f, 0x1.4c6fb4p-50f, 0.0f, 0x1.41870cp-46f, 0x1.ccdb04p-91f,
     0x1.60779ap-18f, 0x1.03cd22p-84f, 0.0f, 0x1.807402p-69f, 0.0f, 0x1.7ad0cep-125f,
     0x1.51c91cp-20f, 0.0f, 0x1.10bc08p-23f, 0.0f, 0x1.669f14p-56f, 0.0f,
     0x1.ba54fep-39f, 0.0f, 0.0f, 0x1.a92f8ep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ca4fa6p-25f, 0x1.fe3bfap-105f, 0.0f, 0.0f, 0x1.2bde4ep-15f, 0.0f,
     0x1.826ecep-1f, 0.0f, 0x1.db02bep-54f, 0.0f, 0.0f, 0.0f, 0x1.9a96aep-45f,
     0x1.2d1cd2p-92f, 0.0f, 0.0f, 0.0f, 0x1.d6e60cp-108f, 0.0f, 0x1.597cd8p-53f, 0.0f,
     0x1.bf6936p-78f, 0.0f, 0.0f, 0.0f, 0x1.6056a8p-30f, 0x1.3ee07ep-90f, 0.0f,
     0x1.561524p-81f, 0.0f, 0x1.33de6cp-89f, 0x1.12f1ecp-24f, 0.0f, 0.0f,
     0x1.682286p-74f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ccbacp-5f, 0x1.c20962p-73f,
     0x1.1ad3f6p-23f, 0x1.0d2736p-119f, 0.0f, 0x1.2b3728p-7f, 0.0f, 0x1.99eb0cp-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bb718p-113f, 0.0f, 0x1.98996cp-117f, 0.0f,
     0.0f, 0.0f, 0x1.d8292p-44f, 0x1.246ca6p-59f, 0.0f, 0x1.b7e13p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.407ef8p-103f, 0x1.9d09bap-86f, 0x1.ee7b9ep-12f, 0x1.14921ap-75f,
     0.0f, 0.0f, 0x1.aab04ap-23f, 0.0f, 0x1.882568p-80f, 0x1.0d90bap-32f, 0.0f, 0.0f,
     0x1.57f7fp-72f, 0x1.dbd3e6p-99f, 0x1.1138bcp-71f, 0x1.c56446p-92f, 0.0f,
     0x1.ed1a7p-15f, 0.0f, 0x1.793972p-89f, 0.0f, 0x1.d58366p-105f, 0x1.cd61c8p-65f,
     0x1.43dcc6p-106f, 0x1.353142p-51f, 0x1.68cabcp-42f, 0.0f, 0x1.6536dcp-2f, 0.0f,
     0.0f, 0.0f, 0x1.73617cp-76f, 0.0f, 0.0f, 0x1.67b668p-20f, 0.0f, 0.0f,
     0x1.4c1a22p-91f, 0x1.b56f8ep-38f, 0.0f, 0x1.76853cp-96f, 0.0f, 0x1.90f3b8p-69f,
     0.0f, 0.0f, 0.0f, 0x1.bb5edap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b048cp-29f,
     0x1.328fd6p-19f, 0x1.010d88p-60f, 0x1.027b24p-120f, 0.0f, 0x1.a14f32p-29f, 0.0f,
     0.0f, 0x1.512d34p-118f, 0.0f, 0x1.935ffcp-23f, 0x1.a62b5cp-77f, 0x1.e94e1cp-27f,
     0x1.454436p-52f, 0.0f, 0.0f, 0x1.21a2c4p-114f, 0x1.1fefdap-83f, 0x1.5e137p-32f,
     0x1.d39b4ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbb576p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89c386p-17f, 0x1.5122c8p-26f, 0x1.6ad852p-79f, 0x1.e3402p-8f,
     0x1.862d16p-91f, 0x1.471136p-106f, 0.0f, 0x1.9ded8p-12f, 0.0f, 0.0f,
     0x1.44bb3cp-33f, 0.0f, 0.0f, 0x1.594b12p-85f, 0x1.850c22p-88f, 0.0f, 0.0f, 0.0f,
     0x1.21bb14p-30f, 0.0f, 0x1.fc8804p-17f, 0.0f, 0x1.0a64b2p-31f, 0x1.4aa74ap-30f,
     0x1.0de2d4p-44f, 0.0f, 0.0f, 0.0f, 0x1.42d346p-90f, 0x1.9f258ep-90f,
     0x1.c0a0ecp-64f, 0x1.c788p-113f, 0x1.a8c812p-10f, 0.0f, 0x1.cac2bcp-33f, 0.0f,
     0.0f, 0x1.463ab2p-66f, 0.0f, 0x1.4360b8p-3f, 0.0f, 0x1.52695cp-20f, 0.0f,
     0x1.7621eep-17f, 0.0f, 0x1.27ad52p-27f, 0.0f, 0x1.3149a2p-118f, 0x1.d682a6p-112f,
     0.0f, 0.0f, 0x1.f950dp-126f, 0x1.d374b6p-74f, 0x1.53678cp-52f, 0.0f, 0.0f,
     0x1.f744bep-89f, 0x1p0f, 0x1.f8d194p-51f, 0x1.53632ep-38f, 0.0f,
     0x1.9ef01ep-114f, 0x1.d33048p-25f, 0.0f, 0.0f, 0.0f, 0x1.c8aa5ap-125f, 0.0f,
     0x1.a3aac4p-119f, 0x1.643908p-2f, 0x1.2e9ba8p-95f, 0x1.a892ap-74f, 0.0f,
     0x1.566212p-106f, 0.0f, 0x1.1e6672p-94f, 0.0f, 0x1.2b3cd2p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.91ae7p-37f, 0.0f, 0.0f, 0x1.b48f46p-53f, 0.0f, 0.0f, 0x1.405678p-107f,
     0.0f, 0.0f, 0.0f, 0x1.00b3cep-98f, 0x1.6243d4p-25f, 0x1.435172p-6f,
     0x1.cc1498p-38f, 0x1.968614p-117f, 0x1.2f7caap-97f, 0x1.88a88cp-61f, 0.0f,
     0x1.1fca7ap-81f, 0.0f, 0x1.5a7086p-72f, 0.0f, 0.0f, 0x1.7fc968p-13f, 0.0f,
     0x1.688db2p-27f, 0.0f, 0x1.136a7ep-100f, 0.0f, 0.0f, 0x1.24e77ap-41f,
     0x1.1100d2p-36f, 0x1.ef4d7p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4f3b2p-8f,
     0.0f, 0x1.e0acp-7f, 0x1.345444p-102f, 0x1.8c8e3cp-9f, 0.0f, 0.0f, 0.0f,
     0x1.30eb8cp-9f, 0x1.71759cp-5f, 0.0f, 0x1.7b33d2p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d95858p-10f, 0x1.66984ep-62f, 0x1.6aaacp-78f, 0x1.0a3336p-28f,
     0.0f, 0.0f, 0x1.bebf06p-72f, 0.0f, 0.0f, 0x1.5399f8p-81f, 0.0f, 0.0f,
     0x1.ae1dcp-60f, 0x1.a728c2p-15f, 0x1.00470cp-4f, 0.0f, 0x1.9c548ap-78f, 0.0f,
     0x1.6f1be2p-50f, 0x1.e02dccp-18f, 0x1.515476p-19f, 0.0f, 0x1.6f2428p-22f,
     0x1.826a34p-111f, 0.0f, 0.0f, 0x1.099ef2p-20f, 0.0f, 0.0f, 0x1.4fb99cp-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14e74ep-23f, 0x1.82ae7ap-92f, 0x1.b2346ap-63f,
     0.0f, 0x1.9a681p-6f, 0x1.aec4f6p-20f, 0x1.fb77cap-40f, 0x1.3702d8p-26f,
     0x1.8b4b7cp-86f, 0.0f, 0.0f, 0x1.bdfc3ap-44f, 0x1.ea5d6cp-47f, 0x1.71505ep-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.36cb92p-26f, 0x1.d5d246p-76f, 0x1.312ae6p-76f,
     0x1p0f, 0x1.90851ep-30f, 0.0f, 0x1.3c5324p-55f, 0x1.37cd88p-36f, 0x1.39b7d2p-23f,
     0x1.7ac9f2p-17f, 0x1.4097b6p-47f, 0x1.f193ecp-26f, 0.0f, 0x1.70d162p-61f, 0.0f,
     0.0f, 0x1.2305fap-46f, 0x1.cfce2cp-87f, 0x1.d7aa12p-81f, 0x1.90df8ap-104f,
     0x1.078382p-116f, 0.0f, 0x1.140ff6p-57f, 0.0f, 0x1.61ed6ap-2f, 0x1.4a96ap-93f,
     0x1.fc0612p-125f, 0x1.fe067ap-42f, 0.0f, 0x1.ff30b6p-114f, 0x1.454d18p-13f,
     0x1.41e7b2p-120f, 0x1.6de92p-6f, 0x1.b65bfcp-120f, 0x1.29aca2p-24f,
     0x1.616e46p-55f, 0x1.953738p-38f, 0x1.a9416ep-105f, 0x1.15be64p-91f, 0.0f, 0.0f,
     0x1.c9eacp-14f, 0.0f, 0.0f, 0x1.4967dp-79f, 0x1.dcacf4p-121f, 0x1.4881e4p-85f
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
            tmp1 = Sleef_finz_fastsinf4_u3500avx2128(tmp0);
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
    printf("Sleef_finz_fastsinf4_u3500avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fastsinf4_u3500avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
