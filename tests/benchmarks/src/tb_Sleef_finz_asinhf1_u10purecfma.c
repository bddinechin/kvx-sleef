/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhf1_u10purecfma.c --function \
 *     Sleef_finz_asinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.7ff2cp-50f, 0x1.a8856ep-8f, 0x1.23373ep-50f, 0x1.be1a56p-119f,
     0x1.d5d0bep-47f, 0.0f, 0.0f, 0x1.d55e8ep-48f, 0x1.2ce018p-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.961b1cp-53f, 0x1.313024p-25f, 0x1.319ffep-23f, 0.0f, 0.0f,
     0x1.00e2eep-100f, 0.0f, 0x1.f31b18p-42f, 0.0f, 0x1.8d0d88p-125f,
     0x1.73db04p-123f, 0x1.54b764p-58f, 0x1.c8d5c4p-27f, 0.0f, 0x1.5dc2fcp-117f,
     0x1.3aa792p-85f, 0x1.bc71ecp-82f, 0.0f, 0.0f, 0x1.452a36p-124f, 0x1.a52676p-4f,
     0x1.770f02p-87f, 0x1.7b76d2p-41f, 0x1.e064c6p-57f, 0.0f, 0.0f, 0.0f,
     0x1.f39592p-55f, 0x1.f2947ep-60f, 0x1.aa3ff2p-106f, 0.0f, 0x1.28a21ap-56f, 0.0f,
     0.0f, 0x1.5e131cp-106f, 0x1.5f3786p-103f, 0.0f, 0x1.a9c5ep-16f, 0.0f, 0.0f, 0.0f,
     0x1.7a2f8ap-46f, 0x1.dd02ap-114f, 0x1.7eaf04p-113f, 0x1.34de9cp-20f, 0.0f,
     0x1.ac422ep-103f, 0x1.6eda78p-58f, 0.0f, 0.0f, 0x1.8b5e28p-46f, 0x1.61efa4p-103f,
     0.0f, 0x1.df69bep-43f, 0x1.5b1db8p-54f, 0x1.5b71f2p-122f, 0x1.8b0efap-110f,
     0x1.fb041ep-57f, 0.0f, 0x1.914936p-60f, 0.0f, 0.0f, 0x1.32f00ep-123f, 0.0f,
     0x1.34f852p-1f, 0x1.64fff2p-93f, 0.0f, 0x1.f2633ap-55f, 0x1.ddef1p-114f, 0.0f,
     0x1.37308ep-2f, 0.0f, 0.0f, 0.0f, 0x1.8f2202p-1f, 0x1.0cd64ep-2f, 0.0f, 0.0f,
     0x1.f18d6p-73f, 0x1.8d869cp-50f, 0x1.24dce4p-120f, 0x1p0f, 0x1.ff55fcp-61f,
     0x1.45ed48p-88f, 0.0f, 0.0f, 0.0f, 0x1.e0fa06p-114f, 0x1.dfb1dap-58f,
     0x1.bbce3ap-74f, 0x1.c627fep-53f, 0x1.42c626p-12f, 0.0f, 0x1.98cdb6p-70f,
     0x1.c600dep-18f, 0x1.ad6bfp-83f, 0x1.87f49ap-10f, 0x1.2dba0ap-36f,
     0x1.3ecd0ap-78f, 0x1.f8479ep-42f, 0x1.86298cp-92f, 0x1.89cc14p-23f, 0.0f,
     0x1.ff3396p-93f, 0x1.6c30ep-22f, 0x1.5de1cap-85f, 0.0f, 0.0f, 0x1.506274p-108f,
     0x1.d07cbep-15f, 0x1.ad7136p-92f, 0x1.208a6cp-99f, 0x1.6d8208p-66f,
     0x1.03aa34p-100f, 0x1.f64894p-44f, 0.0f, 0.0f, 0x1.7ea22ep-33f, 0.0f,
     0x1.aac0e4p-115f, 0.0f, 0x1.24819ep-89f, 0x1.43b448p-39f, 0.0f, 0x1.ec52fep-55f,
     0x1.d29168p-57f, 0x1.299ed2p-32f, 0x1.059f22p-89f, 0x1.ab2f04p-63f, 0.0f, 0.0f,
     0.0f, 0x1.5c2ea2p-92f, 0x1.f4673cp-36f, 0.0f, 0x1.c98a3ep-125f, 0x1.5a431ap-4f,
     0x1.1ebb14p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b448p-101f, 0.0f, 0.0f,
     0x1.68b3e6p-21f, 0x1.6411cep-21f, 0.0f, 0.0f, 0.0f, 0x1.ebf4a4p-26f, 0.0f,
     0x1.3cff8ap-45f, 0x1.c203a4p-107f, 0x1.716958p-109f, 0x1.3d0bd6p-25f, 0.0f,
     0x1.b11fe4p-34f, 0x1.e2435ep-111f, 0.0f, 0.0f, 0x1.e9e0fep-62f, 0x1.684e84p-33f,
     0x1.b6fe4ep-124f, 0.0f, 0x1.30dd6ep-29f, 0x1.11e2f8p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bc754p-33f, 0.0f, 0x1.a4936ep-28f, 0x1.cfe11p-46f, 0x1.841d9cp-46f,
     0x1.98f84ep-27f, 0x1.2008cep-20f, 0x1.4f277ep-108f, 0.0f, 0x1.001afcp-75f,
     0x1.c255c8p-86f, 0.0f, 0x1.3fd1b8p-52f, 0.0f, 0.0f, 0.0f, 0x1.42f1ccp-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3fb9ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e762cp-98f, 0.0f, 0x1.8e0be8p-16f, 0.0f, 0x1.84c744p-72f, 0.0f,
     0x1.82ca56p-17f, 0x1.4958a4p-98f, 0.0f, 0.0f, 0x1.d4572p-81f, 0x1.3e3a8ap-49f,
     0x1.c2f066p-54f, 0x1.05d04cp-42f, 0x1.5a0d36p-111f, 0.0f, 0x1.d1cd24p-69f,
     0x1.6304e8p-21f, 0x1.b13686p-116f, 0x1.5de19p-110f, 0.0f, 0x1.7b1354p-8f, 0.0f,
     0.0f, 0.0f, 0x1.c85dep-89f, 0x1.df2414p-28f, 0.0f, 0.0f, 0.0f, 0x1.d11a26p-102f,
     0x1.87b7dp-4f, 0.0f, 0x1.114f5ap-101f, 0.0f, 0x1.0d0344p-93f, 0x1.9576b8p-84f,
     0.0f, 0.0f, 0x1.8b6f7cp-19f, 0x1.77b72cp-99f, 0.0f, 0x1.068d08p-86f, 0.0f,
     0x1.65847ep-97f, 0.0f, 0x1.a56372p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce88bep-51f, 0.0f, 0.0f, 0.0f, 0x1.36de6ep-47f, 0x1.f9998ep-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.700e08p-98f, 0.0f, 0.0f, 0x1.73f636p-122f, 0x1.226ed4p-36f,
     0x1.e892f6p-22f, 0.0f, 0.0f, 0x1.10e87p-43f, 0x1.6faa04p-122f, 0.0f,
     0x1.6726d8p-111f, 0.0f, 0.0f, 0.0f, 0x1.7b5f56p-22f, 0.0f, 0.0f, 0.0f,
     0x1.b4e018p-62f, 0x1.7cc8dap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29aea4p-48f, 0.0f,
     0.0f, 0x1.dc58bp-87f, 0x1.d96316p-71f, 0.0f, 0.0f, 0x1.6cc65p-61f,
     0x1.d8ce12p-19f, 0.0f, 0.0f, 0x1.7da8d6p-67f, 0.0f, 0x1.1e8808p-81f, 0.0f, 0.0f,
     0x1.522706p-111f, 0x1.49cb42p-12f, 0x1.7c300ep-116f, 0.0f, 0x1.29f0d8p-36f,
     0x1.7707f8p-107f, 0.0f, 0.0f, 0.0f, 0x1.a8387ep-14f, 0x1.3cc71cp-107f,
     0x1.19bbaap-22f, 0x1.920cdep-1f, 0x1.ed22dep-118f, 0x1.8d816cp-15f,
     0x1.c67ec8p-95f, 0x1.b3be74p-31f, 0x1.b7bcb8p-102f, 0.0f, 0.0f, 0x1.f688aap-2f,
     0x1.7e5a1p-110f, 0.0f, 0x1.0b8324p-59f, 0x1.b332f2p-120f, 0.0f, 0.0f, 0.0f,
     0x1.6bab46p-59f, 0.0f, 0.0f, 0x1.a3aacap-11f, 0x1.2a6e3cp-85f, 0x1.b9c866p-19f,
     0x1.6c6c86p-66f, 0.0f, 0x1p0f, 0x1.bc4ba2p-20f, 0.0f, 0.0f, 0x1.33eedep-24f,
     0x1.43f478p-47f, 0.0f, 0x1.8f81acp-18f, 0x1.305f0ep-1f, 0x1.9e7cd4p-74f, 0.0f,
     0x1.a4f45p-7f, 0x1.e45ddap-106f, 0.0f, 0.0f, 0x1.a39448p-108f, 0.0f, 0.0f,
     0x1.36f9c8p-8f, 0x1.495ed6p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8da4cp-50f,
     0x1.50582ep-51f, 0.0f, 0x1.e66cbap-62f, 0x1.e4b62p-14f, 0.0f, 0x1.cd5322p-16f,
     0x1.e144c4p-117f, 0x1.dedd2p-114f, 0.0f, 0.0f, 0.0f, 0x1.6abf1ap-69f, 0.0f,
     0x1.f44774p-34f, 0x1.929c18p-79f, 0.0f, 0x1.0527ap-2f, 0x1.df77e8p-85f,
     0x1.42fd62p-47f, 0.0f, 0.0f, 0.0f, 0x1.38afa6p-54f, 0.0f, 0x1.c28f3p-24f,
     0x1.1ade9p-78f, 0.0f, 0.0f, 0x1.76c8c6p-57f, 0x1.221256p-115f, 0x1.052b3cp-77f,
     0x1.00f88cp-79f, 0.0f, 0x1.eb6792p-55f, 0x1.58cbap-43f, 0.0f, 0.0f,
     0x1.33d8a6p-91f, 0x1.fcc322p-33f, 0x1.785f68p-76f, 0x1.fc86d2p-28f,
     0x1.787f3p-44f, 0.0f, 0x1.5a5e3p-110f, 0.0f, 0.0f, 0.0f, 0x1.5314bcp-104f,
     0x1.2ed92cp-65f, 0x1.a477d2p-60f, 0x1.e14ba6p-64f, 0x1.26761p-110f,
     0x1.0e36dap-1f, 0.0f, 0.0f, 0.0f, 0x1.0f3ecep-86f, 0x1.9c7672p-52f,
     0x1.5f9f0ap-81f, 0x1.57febap-25f, 0x1.a108p-63f, 0.0f, 0x1.c031f8p-73f,
     0x1.147a7p-8f, 0x1.b4b2d4p-99f, 0.0f, 0x1.a8874p-35f, 0x1.93941ap-41f, 0.0f,
     0.0f, 0.0f, 0x1.7cd48ep-96f, 0x1.e00f0cp-102f, 0x1.69e484p-88f, 0x1.0412e6p-103f,
     0.0f, 0x1.5689f8p-90f, 0x1.2c5eacp-45f, 0x1.ad52a2p-8f, 0x1.ba621cp-99f,
     0x1.7d67cap-87f, 0x1.b3ecc6p-106f, 0.0f, 0.0f, 0x1.d84e0cp-21f, 0.0f, 0.0f,
     0x1.5ffcf4p-64f, 0x1.215e1p-77f, 0x1.afc0dep-57f, 0.0f, 0.0f, 0x1.5fb18ap-105f,
     0.0f, 0.0f, 0x1.e81cbap-56f, 0x1.100528p-109f, 0.0f, 0.0f, 0x1.b1be4cp-77f,
     0x1.96b242p-97f, 0x1.505eb8p-46f, 0.0f, 0.0f, 0x1.2f4812p-66f, 0.0f,
     0x1.9d4f0cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51edb4p-40f, 0.0f, 0x1.1bdafep-31f,
     0.0f, 0x1.6e735ap-34f, 0.0f, 0.0f, 0.0f, 0x1.6a4f2ap-117f, 0.0f, 0.0f, 0.0f,
     0x1.045222p-38f, 0x1.00db26p-44f, 0.0f, 0.0f, 0x1.a573d8p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3c1p-90f, 0x1.357f64p-78f, 0x1.3e128ep-46f, 0x1.be26d6p-42f,
     0x1.14cbf8p-8f, 0.0f, 0x1.ae729ap-77f, 0.0f, 0.0f, 0x1.7ea5p-65f,
     0x1.fd1c3ap-67f, 0x1.7604f2p-118f, 0x1.8bbbdp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df1fp-45f, 0x1.c7a42cp-20f, 0.0f, 0.0f, 0x1.c68508p-70f, 0x1.44759p-86f,
     0.0f, 0x1.4937d2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccf1f6p-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a72ccp-12f, 0.0f, 0.0f, 0x1.0ee7ap-26f, 0.0f, 0.0f,
     0.0f, 0x1.495a62p-55f, 0x1.95818cp-72f, 0.0f, 0.0f, 0x1.eb2f16p-115f,
     0x1.6c22c6p-64f, 0.0f, 0.0f, 0x1.4ed6ap-87f, 0x1.f87448p-122f, 0.0f, 0.0f, 0.0f,
     0x1.e79a22p-122f, 0.0f, 0.0f, 0.0f, 0x1.ec197p-67f, 0x1.917e44p-52f, 0.0f,
     0x1.a1bf7p-45f, 0.0f, 0x1.4638dp-20f, 0.0f, 0.0f, 0.0f, 0x1.dfde4ep-29f, 0.0f,
     0.0f, 0x1.ecd544p-103f, 0x1.0eb548p-86f, 0x1.8ac75cp-41f, 0x1.9deb74p-53f, 0.0f,
     0x1.922312p-101f, 0.0f, 0.0f, 0x1.817e24p-108f, 0.0f, 0x1.a0e66cp-96f, 0.0f,
     0.0f, 0x1.83eaccp-84f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.15061p-28f, 0.0f,
     0.0f, 0x1.a41132p-51f, 0x1.864254p-11f, 0.0f, 0.0f, 0x1.f731c6p-110f, 0.0f, 0.0f,
     0x1.c21134p-46f, 0x1.d67322p-15f, 0x1.421ebcp-12f, 0x1.fba194p-57f,
     0x1.1872e4p-74f, 0x1.c59e12p-60f, 0x1.d69998p-54f, 0x1.c0db44p-115f,
     0x1.065a78p-87f, 0.0f, 0x1.f162fap-19f, 0x1.31d12cp-30f, 0.0f, 0x1.217138p-109f,
     0.0f, 0.0f, 0.0f, 0x1.5c2154p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93f112p-115f, 0.0f, 0x1.88d7e8p-100f, 0x1.6b436ap-18f, 0x1.63d44ep-99f, 0.0f,
     0.0f, 0.0f, 0x1.f82d34p-20f, 0.0f, 0x1.b95ec8p-111f, 0x1.b4cadep-71f,
     0x1.23a04cp-111f, 0x1.7248fap-92f, 0.0f, 0.0f, 0.0f, 0x1.f80fb2p-117f, 0.0f,
     0.0f, 0x1.937a96p-99f, 0.0f, 0x1.e59596p-48f, 0x1.2dbf6p-124f, 0x1.68469ep-41f,
     0.0f, 0x1.af2f7ap-55f, 0x1.5ea1fp-37f, 0x1.d25d92p-24f, 0.0f, 0.0f,
     0x1.050b1p-2f, 0.0f, 0.0f, 0x1.1421dep-32f, 0x1.5ea828p-72f, 0.0f,
     0x1.bacb0ap-73f, 0x1.fdd8dcp-66f, 0.0f, 0x1.f0d46ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.b981bep-55f, 0.0f, 0x1.62889cp-72f, 0.0f, 0x1.c34eb6p-28f, 0.0f,
     0x1.295548p-39f, 0x1.6c5aeap-120f, 0.0f, 0x1.62ca48p-105f, 0.0f, 0.0f, 0.0f,
     0x1.4d6bc8p-109f, 0x1.0e81a4p-73f, 0.0f, 0.0f, 0.0f, 0x1.712fcep-23f,
     0x1.b40e0ap-62f, 0.0f, 0x1.8d799cp-64f, 0x1.6e35aap-77f, 0x1.304a3ap-110f,
     0x1.64e76cp-111f, 0x1.d10a1ep-65f, 0.0f, 0.0f, 0x1.f7bc96p-91f, 0.0f, 0.0f,
     0x1.b18d2ap-56f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.0836f2p-54f, 0x1.d3618ep-37f,
     0x1.8b2482p-50f, 0.0f, 0.0f, 0.0f, 0x1.9c44d6p-45f, 0x1.66bc6p-46f,
     0x1.fb31fap-99f, 0.0f, 0x1.dd6a98p-74f, 0.0f, 0x1.d67734p-28f, 0.0f, 0.0f,
     0x1.f8b782p-42f, 0x1.1ce9c8p-109f, 0x1.603934p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57bd5cp-94f, 0.0f, 0.0f, 0x1.99786p-54f, 0x1.6656f6p-121f, 0.0f, 0.0f,
     0x1.b5bcacp-31f, 0.0f, 0x1.e4fba4p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a30e56p-113f, 0x1.ffa528p-18f, 0.0f, 0x1.62021ep-102f, 0x1.96c8c8p-51f, 0.0f,
     0.0f, 0x1.53a74ep-52f, 0x1.e528a2p-121f, 0.0f, 0x1.44856ap-82f, 0x1.73f5aap-126f,
     0x1.a1201ep-56f, 0.0f, 0x1.236aecp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39c7p-102f, 0.0f, 0x1.731ce2p-120f, 0.0f, 0x1.5c6d18p-12f, 0.0f,
     0x1.d3b546p-105f, 0x1.41a26ep-59f, 0.0f, 0.0f, 0x1.cdc1ep-111f, 0.0f,
     0x1.7f8722p-52f, 0x1.2daedap-117f, 0.0f, 0x1.a66c0ap-51f, 0x1.8138ecp-118f,
     0x1.92519ep-19f, 0.0f, 0.0f, 0x1.7a795p-109f, 0.0f, 0.0f, 0x1.8f54a6p-22f,
     0x1.6bae28p-106f, 0x1.79314ap-99f, 0.0f, 0x1.42dcdcp-95f, 0x1.04e66cp-96f,
     0x1.5624e8p-95f, 0.0f, 0.0f, 0x1p0f, 0x1.3771d8p-18f, 0.0f, 0x1.8e3088p-70f,
     0.0f, 0.0f, 0.0f, 0x1.74031ap-107f, 0x1.a17f7cp-88f, 0x1.28a702p-25f, 0.0f, 0.0f,
     0x1.0c1e4ep-29f, 0.0f, 0x1.8dc552p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dddcfep-20f,
     0x1.d4b632p-6f, 0.0f, 0.0f, 0.0f, 0x1.ea441ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.78addap-15f, 0.0f, 0x1.284a3cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a7e54p-60f, 0x1.22d0ep-45f, 0x1.8ef61ep-71f, 0.0f, 0.0f, 0x1.f26ebap-3f,
     0.0f, 0x1.310db2p-105f, 0x1.13d09cp-87f, 0.0f, 0.0f, 0x1.731f42p-69f, 0.0f, 0.0f,
     0x1.76ba1cp-98f, 0x1.14efecp-28f, 0.0f, 0x1.b0ea7ap-71f, 0.0f, 0.0f,
     0x1.adc8p-112f, 0.0f, 0.0f, 0x1.0bea9cp-57f, 0x1.db3e1cp-31f, 0x1.555006p-75f,
     0x1.1962a8p-98f, 0x1.cfc7dcp-27f, 0x1.c763cep-54f, 0.0f, 0x1.2a3c9p-18f, 0.0f,
     0.0f, 0x1.cd4ba6p-109f, 0x1.8d476p-105f, 0x1.db0e56p-20f, 0x1.428216p-95f, 0.0f,
     0x1.e41afep-44f, 0.0f, 0.0f, 0.0f, 0x1.277d0ap-67f, 0x1.5c16b2p-78f,
     0x1.5ff286p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0469p-55f, 0x1.0a874cp-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6f1468p-70f, 0x1.b83642p-90f, 0.0f, 0x1.05e7dep-32f, 0.0f,
     0x1.e7375ep-74f, 0x1.f59edap-118f, 0.0f, 0.0f, 0x1.deb60cp-6f, 0x1.c5b2e4p-87f,
     0.0f, 0x1.80ad2ap-49f, 0x1.0351d2p-15f, 0.0f, 0x1.f23f96p-93f, 0x1.00d67p-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6d328p-58f, 0x1.44204ep-47f, 0x1.98054cp-89f,
     0x1.eb3f0ap-78f, 0.0f, 0.0f, 0.0f, 0x1.9bf7acp-35f, 0.0f, 0x1.0b33c6p-40f, 0.0f,
     0x1.3c826ep-83f, 0x1.c0de04p-79f, 0x1.d1de5cp-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a75674p-111f, 0.0f, 0x1.6da04p-123f, 0.0f, 0x1.d6165p-50f, 0x1.6ade7ep-8f,
     0x1.f5b516p-121f, 0.0f, 0x1.78d2bap-37f, 0.0f, 0.0f, 0.0f, 0x1.ea8dccp-10f,
     0x1.395ffap-55f, 0x1.9a3d92p-116f, 0.0f, 0.0f, 0.0f, 0x1.236104p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94da62p-125f, 0x1.41775p-3f, 0.0f, 0.0f, 0x1.cc9fe2p-111f, 0.0f,
     0.0f, 0.0f, 0x1.0737a6p-51f, 0x1.872078p-46f, 0x1.a20782p-10f, 0.0f,
     0x1.289cfap-6f, 0x1.b59c24p-116f, 0.0f, 0.0f, 0x1.019682p-93f, 0x1.2b2eb8p-11f,
     0.0f, 0.0f, 0x1.eb66ecp-47f, 0.0f, 0x1.c17028p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4f97bp-126f, 0.0f, 0x1.8758f2p-7f, 0x1.5a72fcp-113f,
     0x1.9900dp-104f, 0x1.15dc86p-31f, 0.0f, 0x1.02234ap-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae6bfep-67f
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
            tmp1 = Sleef_finz_asinhf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_asinhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
