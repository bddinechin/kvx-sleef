/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsf1_purecfma.c --function \
 *     Sleef_finz_fabsf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.d62ffep-47f, 0.0f, 0x1.2ae6d2p-55f, 0.0f, 0x1.d7b096p-99f,
     0x1.a0ed7cp-4f, 0.0f, 0x1.0ef1b2p-114f, 0.0f, 0x1.5587aep-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b0207ap-49f, 0x1.33c004p-49f, 0x1.8cbb6cp-33f, 0.0f, 0.0f,
     0x1.ba1732p-86f, 0.0f, 0x1.ea9c6ep-23f, 0x1.a03b16p-96f, 0x1.58d584p-74f, 0.0f,
     0x1.9af698p-93f, 0.0f, 0.0f, 0x1.91504cp-24f, 0.0f, 0.0f, 0.0f, 0x1.40d48ep-18f,
     0.0f, 0x1.073196p-116f, 0x1.9e5b5ep-82f, 0.0f, 0x1.5a4182p-98f, 0.0f, 0.0f,
     0x1.140f88p-14f, 0.0f, 0.0f, 0x1.50006ap-122f, 0x1.e2f338p-28f, 0x1.05769cp-107f,
     0.0f, 0x1.2c928ep-85f, 0x1.6174acp-102f, 0x1.dbecbep-73f, 0.0f, 0.0f, 0.0f,
     0x1.4a40aep-108f, 0x1.566d04p-17f, 0x1.2a8b36p-117f, 0.0f, 0.0f, 0.0f,
     0x1.c72ebp-19f, 0.0f, 0x1.7f9e1p-4f, 0.0f, 0x1.cb0898p-45f, 0.0f,
     0x1.547942p-76f, 0x1.aeb8a8p-15f, 0x1.69c6b2p-77f, 0.0f, 0x1.04f3f4p-15f,
     0x1.cdb02p-71f, 0x1.6930a2p-26f, 0x1.7a9b7ep-74f, 0x1.d2454p-69f, 0.0f, 0.0f,
     0x1.502806p-38f, 0.0f, 0.0f, 0x1.f81ec8p-120f, 0x1.fe444p-99f, 0.0f, 0.0f,
     0x1.07753p-93f, 0x1.816a92p-29f, 0.0f, 0x1.4a1ea6p-74f, 0x1.43850cp-20f,
     0x1.b22d36p-29f, 0.0f, 0x1.18b99p-42f, 0.0f, 0.0f, 0x1.d9c6dcp-124f, 0.0f,
     0x1.7ad2f8p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f76bbep-14f, 0x1.a4f15ep-15f,
     0x1.13e824p-68f, 0.0f, 0.0f, 0x1.77a6bcp-54f, 0x1.a0f1d2p-49f, 0x1.ecfac6p-112f,
     0.0f, 0.0f, 0.0f, 0x1.44d2f8p-13f, 0x1.9dc404p-101f, 0x1.6f0148p-69f,
     0x1.764736p-48f, 0.0f, 0x1.ccc8eep-87f, 0x1.997db8p-46f, 0x1.2b62fp-27f, 0.0f,
     0.0f, 0.0f, 0x1.ca4a92p-60f, 0.0f, 0x1.82826p-110f, 0x1.1eb896p-40f, 0.0f, 0.0f,
     0.0f, 0x1.1aa2c2p-39f, 0.0f, 0.0f, 0x1.455feap-52f, 0.0f, 0.0f, 0x1.32bf0ap-18f,
     0x1.2623d4p-92f, 0x1.6df4eap-107f, 0x1.26c898p-68f, 0x1.fd5614p-34f, 0.0f,
     0x1.8e37ecp-69f, 0x1.540d0cp-27f, 0.0f, 0x1.b89e42p-109f, 0x1.a2f434p-81f,
     0x1.dc8f82p-43f, 0x1.8a0abep-31f, 0x1.2e7d66p-50f, 0x1.61424p-98f,
     0x1.912e9p-41f, 0.0f, 0x1.c17ce6p-4f, 0.0f, 0x1.1e3654p-53f, 0x1.dc33cep-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86606ap-108f, 0x1.0956a8p-14f,
     0.0f, 0.0f, 0x1.04cc12p-46f, 0x1.d659aap-115f, 0x1.6a7d18p-83f, 0x1.263e8cp-83f,
     0x1.926ba4p-1f, 0x1.25e9dep-17f, 0x1.d3a674p-112f, 0.0f, 0.0f, 0x1.bfd276p-57f,
     0.0f, 0x1.79526ap-121f, 0.0f, 0x1.6ef1e6p-39f, 0x1.006e58p-59f, 0x1.cf602ep-25f,
     0x1.eb1fccp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.135966p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.675128p-36f, 0.0f, 0x1.8ca4f8p-76f, 0x1.1abf04p-92f, 0x1.f35e5ep-10f,
     0x1.d38e9p-57f, 0x1.8c8f2cp-68f, 0x1.4bcb2ap-26f, 0x1.61ca24p-106f,
     0x1.56591ep-48f, 0.0f, 0x1.d2b81cp-81f, 0.0f, 0x1.19d368p-77f, 0x1.7ebec2p-28f,
     0.0f, 0x1.70faacp-15f, 0x1.fffbb6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41c92ep-76f, 0.0f, 0x1.8a2a54p-115f, 0.0f, 0.0f, 0x1.b49582p-54f, 0.0f,
     0x1.81ce1ep-119f, 0x1.f4f946p-82f, 0.0f, 0.0f, 0x1.0ddb4ap-118f, 0.0f, 0.0f,
     0x1.bc771p-59f, 0.0f, 0.0f, 0.0f, 0x1.b53d7p-29f, 0x1.5fddap-64f,
     0x1.0c414cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.975aeep-81f, 0.0f, 0x1.65bb5p-35f,
     0x1.897352p-49f, 0x1.486516p-20f, 0.0f, 0.0f, 0x1.48de22p-46f, 0x1.315812p-4f,
     0x1.897ca2p-105f, 0.0f, 0x1.d9265ap-95f, 0.0f, 0x1.a17088p-85f, 0.0f, 0.0f,
     0x1.252aa4p-6f, 0x1.77091ep-79f, 0x1.3c8d4p-15f, 0.0f, 0x1.afe47p-38f,
     0x1.9a12eep-11f, 0.0f, 0x1.41a44ep-112f, 0.0f, 0.0f, 0x1.452862p-35f, 0x1p0f,
     0.0f, 0x1.bf3204p-36f, 0x1.bac59p-35f, 0x1.907a96p-125f, 0x1.4be86p-74f,
     0x1.87e1ep-90f, 0x1.168a64p-51f, 0x1.bbf82p-107f, 0x1.801e62p-60f, 0.0f, 0.0f,
     0x1.359f3ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dacd4p-41f, 0.0f, 0.0f,
     0x1.1a141ap-103f, 0.0f, 0.0f, 0x1.0dab18p-60f, 0x1.828038p-45f, 0.0f,
     0x1.56f12cp-46f, 0x1.926dbep-75f, 0.0f, 0x1.80bc92p-66f, 0.0f, 0x1.38fe5cp-79f,
     0.0f, 0.0f, 0.0f, 0x1.c24c5cp-28f, 0.0f, 0.0f, 0x1.b05dd4p-83f, 0x1.7e5102p-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1c238p-107f, 0x1.a5a158p-70f, 0.0f, 0x1.cd3636p-64f,
     0x1.2efd6ep-97f, 0.0f, 0x1.4e11bcp-41f, 0x1.a61a0ep-30f, 0x1.e6be54p-1f,
     0x1.5c23dap-85f, 0.0f, 0.0f, 0.0f, 0x1.56535ep-122f, 0.0f, 0x1.5ced6cp-70f,
     0x1.f78f96p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdf21cp-6f, 0.0f, 0x1.4e239ap-87f,
     0.0f, 0x1.e26aeap-126f, 0.0f, 0x1.c55ecep-14f, 0.0f, 0x1.e54ed6p-93f,
     0x1.9da3fp-44f, 0x1.d3c83p-47f, 0x1.38b244p-100f, 0.0f, 0x1.e874c8p-87f, 0.0f,
     0.0f, 0.0f, 0x1.5bad34p-1f, 0x1.32a8bap-107f, 0.0f, 0x1.ab289ep-23f, 0.0f,
     0x1.9251a4p-13f, 0x1.3f6df2p-1f, 0x1.cb77aep-34f, 0.0f, 0.0f, 0x1.85398ap-120f,
     0x1.c11a3ap-55f, 0x1.51e542p-7f, 0.0f, 0x1.87d364p-108f, 0.0f, 0x1.c16fc6p-59f,
     0x1.b098aep-48f, 0.0f, 0x1.a15028p-54f, 0.0f, 0.0f, 0x1.a5f9f8p-94f, 0.0f, 0.0f,
     0.0f, 0x1.0bfb52p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3df458p-14f,
     0x1.394612p-28f, 0.0f, 0.0f, 0x1.f373bap-89f, 0x1.16e88cp-70f, 0.0f,
     0x1.8ed26p-43f, 0.0f, 0.0f, 0.0f, 0x1.db2154p-44f, 0x1.0c3fc6p-48f, 0.0f,
     0x1.190d74p-102f, 0x1.e7fc98p-20f, 0x1.2d48ccp-30f, 0x1.e73834p-79f, 0.0f,
     0x1.4dfbaep-72f, 0x1.3eb47p-44f, 0x1.3b9542p-113f, 0x1.659a7ap-11f,
     0x1.c1ef34p-85f, 0x1.e6ac3cp-32f, 0x1.d7c52ep-17f, 0.0f, 0.0f, 0x1.f91244p-47f,
     0x1.3b0afcp-28f, 0x1.9f85ep-70f, 0x1.313818p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39e718p-126f, 0.0f, 0.0f, 0x1.400ae8p-2f, 0.0f, 0x1.24562cp-42f, 0.0f,
     0x1.c1dd56p-60f, 0x1.2233c4p-41f, 0.0f, 0.0f, 0x1.1662bp-20f, 0.0f,
     0x1.33485p-50f, 0.0f, 0x1.9b8858p-86f, 0.0f, 0.0f, 0.0f, 0x1.185a0ep-79f, 0.0f,
     0x1.5eee94p-67f, 0x1.3c33f2p-101f, 0.0f, 0.0f, 0x1.b547b4p-27f, 0x1.bf2e92p-23f,
     0.0f, 0.0f, 0.0f, 0x1.dda4bep-88f, 0x1.39eaa4p-108f, 0x1.f1a1ep-125f, 0.0f, 0.0f,
     0x1.be1396p-41f, 0.0f, 0x1.2f73cep-36f, 0.0f, 0x1.657654p-37f, 0x1.8d8aa6p-123f,
     0.0f, 0.0f, 0x1.152e5ep-36f, 0x1.742bccp-29f, 0.0f, 0.0f, 0x1.876166p-107f, 0.0f,
     0.0f, 0x1.1474ap-31f, 0x1.68e52cp-86f, 0x1.c1c32p-58f, 0x1.dd6a06p-105f,
     0x1.805404p-95f, 0.0f, 0.0f, 0.0f, 0x1.dfcbc4p-95f, 0.0f, 0x1.95dfe2p-14f,
     0x1.feb63ep-111f, 0x1.b5012ep-74f, 0.0f, 0x1.896ec4p-67f, 0x1.5a4e68p-98f,
     0x1.24625p-48f, 0.0f, 0x1.0acd9ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a89f2cp-70f,
     0.0f, 0x1.44c77cp-30f, 0x1.58ae06p-61f, 0.0f, 0.0f, 0x1.9c91dcp-26f,
     0x1.ed65a6p-62f, 0.0f, 0.0f, 0x1.551cb6p-36f, 0x1.88a14cp-118f, 0x1.6a51ecp-67f,
     0x1.e7322p-81f, 0x1.080b2p-72f, 0x1.15fa68p-45f, 0x1.393dfep-93f, 0.0f,
     0x1.2447c2p-33f, 0.0f, 0.0f, 0x1.1a8246p-74f, 0.0f, 0x1.932912p-87f,
     0x1.d8e7c8p-47f, 0x1.507f24p-126f, 0x1.7fb30cp-66f, 0.0f, 0x1.c018cap-46f, 0.0f,
     0x1.2f248ap-33f, 0.0f, 0x1.e1636p-97f, 0x1.1288a2p-115f, 0x1.c4621cp-33f, 0.0f,
     0.0f, 0.0f, 0x1.45f046p-1f, 0x1.03b1c4p-68f, 0.0f, 0.0f, 0x1.e9e33cp-49f, 0.0f,
     0x1.f096a2p-13f, 0x1.d37016p-107f, 0x1.8f45bap-33f, 0.0f, 0x1.d5f886p-30f, 0.0f,
     0.0f, 0x1.bb7ae4p-46f, 0x1.18e5p-69f, 0x1.6c67fep-37f, 0.0f, 0.0f,
     0x1.82b3acp-30f, 0.0f, 0.0f, 0x1.3b8b52p-101f, 0.0f, 0.0f, 0x1.b7d50ep-123f,
     0x1.e6cfbap-47f, 0.0f, 0.0f, 0x1.7462ap-121f, 0x1.d9b576p-107f, 0.0f,
     0x1.b73d2ep-57f, 0x1.20577p-28f, 0.0f, 0x1.718fd2p-81f, 0.0f, 0.0f, 0.0f,
     0x1.51406p-125f, 0x1.27b666p-103f, 0x1.1c75d4p-75f, 0x1.ed619p-19f, 0.0f, 0.0f,
     0x1.23856p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bde4eep-66f, 0x1.544e76p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.afe8bep-29f, 0.0f, 0.0f, 0x1.7b79f2p-124f,
     0x1.44769ap-28f, 0.0f, 0x1.660826p-99f, 0x1.0fb808p-96f, 0x1.3414e2p-110f, 0.0f,
     0x1.830214p-26f, 0x1.a0f3c8p-78f, 0.0f, 0.0f, 0x1.a67f8p-108f, 0x1.767616p-77f,
     0x1.0830aep-21f, 0.0f, 0.0f, 0x1.37affap-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f191bcp-42f, 0x1.172038p-69f, 0.0f, 0.0f, 0x1.69c97cp-107f, 0.0f,
     0x1.e0debap-60f, 0x1.4ce712p-57f, 0x1.0e7956p-120f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.d533ccp-3f, 0x1.d0128ep-64f, 0.0f, 0x1.582d64p-65f, 0.0f, 0.0f,
     0x1.810a9p-59f, 0.0f, 0.0f, 0x1.e26954p-86f, 0x1.5d204p-106f, 0x1.40061p-114f,
     0x1.4abb56p-22f, 0x1.ee5a6ap-118f, 0.0f, 0.0f, 0x1.6bb7ap-116f, 0.0f, 0.0f,
     0x1.bb933ep-86f, 0x1.bbf78cp-15f, 0x1.300068p-61f, 0x1.1dbe1ep-72f,
     0x1.fb17e6p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.698d3ep-66f, 0x1.10de0ap-116f,
     0x1.cc54b8p-114f, 0x1.415132p-63f, 0.0f, 0.0f, 0x1.844b4ep-22f, 0.0f,
     0x1.8a31fep-9f, 0x1.b3867cp-38f, 0x1.ce85a8p-73f, 0.0f, 0.0f, 0.0f,
     0x1.4724c6p-37f, 0.0f, 0.0f, 0x1.ec6832p-49f, 0.0f, 0.0f, 0.0f, 0x1.56df16p-62f,
     0.0f, 0.0f, 0x1.90126p-56f, 0x1.708b3ep-16f, 0x1.519ea4p-68f, 0x1.b280ep-92f,
     0.0f, 0.0f, 0.0f, 0x1.0c8bc4p-23f, 0.0f, 0x1.0bdf16p-119f, 0x1.e6731cp-36f,
     0x1.4f4758p-39f, 0.0f, 0.0f, 0x1.58092ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fe152p-15f, 0x1.39a5cep-96f, 0x1.daa884p-53f, 0x1.6e1146p-25f,
     0x1.98d3ccp-104f, 0x1.284afcp-9f, 0.0f, 0x1.c8490ap-48f, 0.0f, 0x1.5bb872p-1f,
     0.0f, 0.0f, 0x1.10e7f4p-97f, 0x1.796a5ap-53f, 0.0f, 0.0f, 0x1.12abfep-32f, 0.0f,
     0x1.b1e404p-43f, 0.0f, 0x1.8addacp-73f, 0x1.5cc3d6p-63f, 0x1.557b8ep-103f,
     0x1.a888d8p-84f, 0.0f, 0.0f, 0x1.279fcap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f962cp-65f, 0x1.2cdd5cp-8f, 0x1.ccbe3ap-22f, 0.0f, 0.0f, 0x1.833bdep-113f,
     0x1.b05c72p-98f, 0.0f, 0x1.0795e2p-56f, 0x1.297226p-24f, 0.0f, 0.0f, 0.0f,
     0x1.23fd28p-61f, 0.0f, 0x1.277afep-98f, 0.0f, 0.0f, 0x1.05fb88p-45f, 0.0f,
     0x1.699b78p-126f, 0x1.0be38ap-112f, 0x1.1b6442p-3f, 0.0f, 0x1.de9c26p-96f,
     0x1.b45e44p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0df378p-16f, 0.0f,
     0x1.9f9c16p-85f, 0x1.355ebcp-73f, 0.0f, 0x1.67c7d6p-86f, 0x1.9c26c2p-78f,
     0x1.bfcde8p-98f, 0.0f, 0.0f, 0.0f, 0x1.3711p-92f, 0.0f, 0x1.ee7956p-114f, 0.0f,
     0.0f, 0x1.ee018ap-53f, 0x1.8915f2p-119f, 0.0f, 0x1.18d80ep-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45a486p-105f, 0.0f, 0x1.d79af8p-2f,
     0x1.9ce5e6p-63f, 0x1.8a387p-123f, 0x1.612944p-24f, 0.0f, 0x1.041eb2p-71f, 0.0f,
     0x1.e391fp-66f, 0x1.a2b2f4p-60f, 0.0f, 0x1.65aadcp-36f, 0.0f, 0.0f, 0.0f,
     0x1.e9437cp-95f, 0.0f, 0x1.b811b4p-77f, 0x1.076a22p-94f, 0x1.40d844p-50f,
     0x1.ac1068p-111f, 0.0f, 0x1.b3be28p-12f, 0.0f, 0x1.578aa6p-50f, 0x1.04cb3cp-118f,
     0.0f, 0.0f, 0.0f, 0x1.68664ap-86f, 0x1.2d7e7p-67f, 0x1.d68bcap-109f, 0.0f,
     0x1.3843cp-87f, 0.0f, 0x1.9e1d2ep-32f, 0x1.dc0abp-110f, 0x1.d30e26p-66f, 0.0f,
     0.0f, 0x1.15c14p-125f, 0x1.85d23cp-90f, 0x1.be4322p-123f, 0.0f, 0x1.73fa7cp-43f,
     0x1.83e71ep-45f, 0.0f, 0.0f, 0x1.bda26ap-34f, 0.0f, 0x1.c1ba5cp-93f,
     0x1.f653ap-24f, 0x1.81663ap-26f, 0x1.c208f2p-24f, 0.0f, 0.0f, 0.0f,
     0x1.aea1eep-40f, 0x1.0a2ee6p-70f, 0x1.94d44ap-64f, 0x1.1385d2p-48f, 0.0f,
     0x1.326e7cp-44f, 0x1.26b768p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aea2c2p-105f,
     0x1.72bcf4p-50f, 0x1.d9104ep-9f, 0x1.f36956p-109f, 0.0f, 0x1.09039p-50f, 0.0f,
     0x1.d1bf18p-98f, 0.0f, 0.0f, 0x1.dcbe5ap-39f, 0x1.fe051ep-51f, 0x1.73d72ep-39f,
     0x1.2776a6p-14f, 0x1.882a72p-41f, 0x1.6bc32cp-61f, 0x1.6daeb2p-10f,
     0x1.b5e5ep-34f, 0.0f, 0x1.3cbe5p-85f, 0x1.33052cp-91f, 0x1.ae3e94p-58f, 0.0f,
     0x1.168ec8p-126f, 0x1.ec398cp-59f, 0.0f, 0.0f, 0.0f, 0x1.15e9fp-74f, 0.0f,
     0x1.81da0ap-24f, 0.0f, 0x1.48f404p-123f, 0x1.052258p-91f, 0.0f, 0x1.71a964p-18f,
     0x1.e4a788p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c1844p-125f, 0x1.5dc638p-99f,
     0x1.6e4f5ap-76f, 0x1.4e0008p-27f, 0.0f, 0.0f, 0.0f, 0x1.0552aap-68f, 0.0f,
     0x1.fd2786p-109f, 0x1.76459cp-107f, 0x1.4f7e58p-70f, 0x1.50f8aap-2f,
     0x1.0da40cp-51f, 0.0f, 0x1.54f038p-44f, 0x1.0381cap-68f, 0x1.3cb99cp-116f, 0.0f,
     0.0f, 0x1.217b56p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d88012p-24f, 0x1.9408ep-98f,
     0.0f, 0x1.27f994p-22f, 0x1.e081e4p-12f, 0.0f, 0.0f, 0.0f, 0x1.6613c8p-9f, 0x1p0f,
     0.0f, 0x1.70b522p-88f, 0.0f, 0x1.ec17e6p-104f, 0x1.72f126p-74f, 0.0f, 0.0f,
     0x1.4eff52p-110f, 0.0f, 0.0f, 0x1.33d28ep-8f, 0.0f, 0x1.f70f1p-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7882c6p-73f, 0x1.619146p-33f, 0x1.a75654p-114f,
     0x1.08adbp-96f, 0x1.b29c3p-87f, 0x1.278c52p-86f, 0x1.f758d6p-19f, 0.0f,
     0x1.e2d78cp-15f, 0x1.df000cp-87f, 0.0f, 0x1.36c36cp-85f, 0.0f, 0.0f,
     0x1.60f84ep-61f, 0x1.b1a354p-59f, 0.0f, 0x1.a3ec6cp-16f, 0.0f, 0x1.a557dep-93f,
     0x1.3d325ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.954cdep-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0707p-97f, 0x1.bc42c8p-84f, 0.0f, 0x1.a5f192p-64f, 0.0f, 0.0f,
     0x1.855682p-32f, 0x1.9f3ea2p-74f, 0x1.89969cp-18f, 0.0f, 0.0f, 0x1.25c97cp-40f,
     0.0f, 0x1.491182p-84f, 0x1.e85ec6p-119f, 0x1.ac07ccp-120f
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
            tmp1 = Sleef_finz_fabsf1_purecfma(tmp0);
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
    printf("Sleef_finz_fabsf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fabsf1_purecfma bench acc %a\n", global_bench_acc);
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
