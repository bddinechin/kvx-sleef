/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf1_u10purecfma.c --function \
 *     Sleef_finz_asinf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ca046p-28f, 0x1.4f1af2p-23f, 0.0f, 0.0f,
     0x1.e30f2ap-6f, 0x1.542b4ap-104f, 0.0f, 0x1.22b7dp-48f, 0.0f, 0.0f, 0.0f,
     0x1.49523p-107f, 0x1.ff8a28p-107f, 0.0f, 0.0f, 0.0f, 0x1.0693ep-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e7672p-105f, 0x1.f510b4p-48f, 0.0f, 0.0f, 0x1.37a9eap-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.708776p-45f, 0.0f, 0x1.dfe642p-122f, 0.0f,
     0x1.f081d6p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bb4c6p-22f, 0x1.9ba7ap-24f,
     0x1.610656p-73f, 0x1.92ae88p-92f, 0x1.f03b92p-116f, 0.0f, 0x1.f3a2f2p-80f, 0.0f,
     0x1.8be0ap-110f, 0.0f, 0x1.fd1dcep-8f, 0x1.67abe6p-103f, 0x1.4e30a2p-99f,
     0x1.3d6d8cp-31f, 0x1.6fb94p-114f, 0x1.7ae3ccp-15f, 0x1.4d8c06p-97f, 0.0f, 0.0f,
     0x1.5cc37ap-48f, 0.0f, 0x1.721b02p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d10ab8p-63f, 0x1.70121ap-100f, 0x1.f9b9aep-40f, 0.0f, 0x1.33994ap-73f,
     0x1.f9d956p-25f, 0.0f, 0.0f, 0.0f, 0x1.757812p-107f, 0x1.831efap-55f,
     0x1.c04824p-53f, 0x1.e406ecp-35f, 0x1.c6df48p-97f, 0.0f, 0.0f, 0.0f,
     0x1.b4e14ep-99f, 0.0f, 0.0f, 0x1.1e48c2p-57f, 0x1.43d49ap-66f, 0x1.104a6cp-36f,
     0.0f, 0x1.3ae4dcp-61f, 0x1.b369d4p-23f, 0.0f, 0x1.89e862p-92f, 0x1.63f84cp-121f,
     0x1.297c7ap-79f, 0x1.6e57f4p-34f, 0x1.da639p-3f, 0.0f, 0x1.e6b206p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.319d86p-60f, 0.0f, 0x1.c3160cp-40f, 0.0f, 0x1.d6871ep-40f,
     0x1.d6c124p-42f, 0.0f, 0.0f, 0x1.bf8b04p-51f, 0.0f, 0.0f, 0x1.59b928p-36f,
     0x1.e38c02p-63f, 0.0f, 0x1.b93c36p-60f, 0x1.61819ep-105f, 0x1.0a247cp-30f, 0.0f,
     0.0f, 0x1.df341p-59f, 0x1.8d558cp-19f, 0.0f, 0x1.2d71dp-122f, 0.0f, 0.0f,
     0x1.bd933p-74f, 0x1.725d02p-65f, 0x1.c986f8p-35f, 0x1.6cd05ep-19f, 0x1.c0a6p-40f,
     0x1.48768ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8ec1ap-98f, 0.0f,
     0x1.9f698p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98b276p-49f, 0x1.6299aap-105f, 0.0f,
     0.0f, 0x1.f9dea8p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce2ddap-44f,
     0x1.06a81p-121f, 0x1.0b1552p-83f, 0x1.b695c4p-96f, 0.0f, 0x1.51a528p-110f,
     0x1.a54a4p-103f, 0x1.e30f18p-38f, 0x1.76486p-83f, 0x1.322838p-116f, 0.0f,
     0x1.986546p-55f, 0.0f, 0.0f, 0x1.c9a386p-123f, 0x1.4df71cp-55f, 0x1.ea2ab4p-21f,
     0x1.e18162p-112f, 0x1.a24afep-74f, 0x1.feff6ap-82f, 0.0f, 0.0f, 0.0f,
     0x1.f3b362p-92f, 0x1.5ba392p-55f, 0x1.a311cp-40f, 0.0f, 0x1.bfe7f2p-85f,
     0x1.d7f29ep-66f, 0x1.bb7976p-116f, 0x1.04ea44p-123f, 0.0f, 0.0f, 0x1.0fc2b6p-89f,
     0.0f, 0.0f, 0x1.0eca76p-30f, 0x1.1a8fb8p-14f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.a26676p-115f, 0.0f, 0x1.4e3c9p-49f, 0.0f,
     0x1.3827cap-19f, 0.0f, 0.0f, 0x1.feb6c6p-99f, 0x1.2f34b8p-34f, 0x1.03d424p-15f,
     0x1.945aap-16f, 0x1.a0c9f2p-18f, 0.0f, 0.0f, 0x1.48873ep-75f, 0.0f, 0.0f, 0.0f,
     0x1.eefac6p-99f, 0x1.59cbap-9f, 0x1.f3a928p-19f, 0.0f, 0.0f, 0.0f,
     0x1.cddc82p-17f, 0.0f, 0x1.57add4p-67f, 0x1.124098p-87f, 0x1.522a84p-62f,
     0x1.70369ap-4f, 0x1.707794p-1f, 0.0f, 0.0f, 0x1.bc5f76p-20f, 0x1.0268e2p-46f,
     0x1.b1cf0ap-62f, 0.0f, 0x1.bb7354p-74f, 0.0f, 0x1.71434ap-123f, 0x1.9f301ap-76f,
     0x1.22b87cp-67f, 0.0f, 0x1.f5cdd6p-117f, 0x1.55ed8cp-51f, 0.0f, 0x1.bebd8ep-33f,
     0x1.1ff7f6p-124f, 0x1.0f3586p-62f, 0x1.d346cep-76f, 0x1.8b744ep-105f,
     0x1.546d2cp-34f, 0x1.5a0ecp-69f, 0x1.a1bee6p-9f, 0x1.708f6p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6bbe54p-47f, 0.0f, 0.0f, 0x1.f64114p-48f, 0.0f,
     0x1.89edb8p-76f, 0x1.af1e2ep-71f, 0x1.87f4aep-96f, 0.0f, 0x1.ee636ap-17f,
     0x1.c01efep-109f, 0x1.0d29d8p-50f, 0x1.af1498p-114f, 0x1.9bb58ap-86f, 0.0f,
     0x1.1a060ep-56f, 0.0f, 0.0f, 0x1.0901acp-42f, 0.0f, 0x1.ca207ap-93f,
     0x1.bb59c6p-123f, 0.0f, 0x1.401d06p-51f, 0x1.b792aep-81f, 0.0f, 0.0f,
     0x1.1f853cp-105f, 0x1.299586p-22f, 0x1.63fbcp-46f, 0x1.eea9a8p-115f, 0.0f,
     0x1.396d2cp-74f, 0.0f, 0.0f, 0x1.ea53e4p-123f, 0.0f, 0x1.9503c2p-115f,
     0x1.5d333cp-38f, 0x1.a9594cp-14f, 0x1.88228p-94f, 0x1.6688e8p-109f, 0.0f, 0.0f,
     0x1.70f63cp-113f, 0x1.9306eep-115f, 0.0f, 0x1.3b1346p-120f, 0.0f, 0.0f,
     0x1.3241d2p-110f, 0.0f, 0x1.a90964p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5cbd4p-52f, 0x1.acd13p-118f, 0x1.89e29cp-104f, 0.0f, 0.0f, 0x1.9d530ep-16f,
     0.0f, 0x1.0f0f7ap-21f, 0x1.52aaa6p-43f, 0.0f, 0.0f, 0x1.e5a804p-22f, 0.0f,
     0x1.a450e2p-114f, 0x1.6339f8p-120f, 0.0f, 0x1.9269c8p-125f, 0x1.ecd5a4p-9f,
     0x1.0601d6p-11f, 0.0f, 0x1.0cffa4p-52f, 0.0f, 0.0f, 0x1.e5bc3ep-114f,
     0x1.49a88ap-109f, 0.0f, 0x1.0d92c8p-12f, 0x1p0f, 0.0f, 0x1.c538f2p-121f, 0.0f,
     0x1.048764p-10f, 0x1.520894p-19f, 0x1.1ff2d8p-79f, 0x1.d24fb2p-49f, 0.0f, 0.0f,
     0.0f, 0x1.8a81cp-124f, 0.0f, 0.0f, 0x1.ef13fp-90f, 0.0f, 0.0f, 0.0f,
     0x1.a30e92p-95f, 0x1.d6b828p-45f, 0x1.77037ap-5f, 0x1.2be614p-63f,
     0x1.4f72c4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be8c7p-25f, 0.0f, 0.0f,
     0x1.1bc7cep-29f, 0x1.febbbep-69f, 0x1.b5fb2cp-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e7e36p-11f, 0.0f, 0.0f, 0x1.7f49c2p-10f, 0.0f, 0.0f, 0x1.8a7bf2p-78f, 0.0f,
     0x1.e936a2p-6f, 0x1.d75582p-34f, 0x1.a5402ap-109f, 0x1.c65b7p-86f,
     0x1.4542bap-54f, 0.0f, 0x1.3fd7eep-7f, 0x1.155d08p-94f, 0.0f, 0x1.1de6bap-45f,
     0x1.35b7acp-24f, 0x1.924c7ep-75f, 0x1.50a2ap-39f, 0x1.2d6e3ep-21f, 0.0f,
     0x1.b24d82p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a427p-11f, 0.0f, 0.0f,
     0x1.1fefb6p-61f, 0.0f, 0x1.5f7f1ap-47f, 0.0f, 0.0f, 0x1.ec8a8cp-67f,
     0x1.81e39p-105f, 0x1.3de044p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa08a6p-73f,
     0.0f, 0x1.5897dcp-116f, 0.0f, 0.0f, 0x1.bd6436p-121f, 0.0f, 0x1.94a5acp-62f,
     0x1.f15cc6p-126f, 0x1.4ad26ep-87f, 0x1.03ecfcp-47f, 0.0f, 0x1.fe4ae2p-36f, 0.0f,
     0x1.82ac38p-51f, 0x1.1f55fcp-49f, 0.0f, 0x1.f9307p-80f, 0x1.fc301p-82f,
     0x1.e01ea6p-62f, 0.0f, 0x1.5a0f5p-22f, 0x1.c85104p-14f, 0.0f, 0.0f, 0.0f,
     0x1.44a4a8p-42f, 0x1.cdd996p-108f, 0x1.74eac8p-79f, 0.0f, 0x1.b18e88p-39f, 0.0f,
     0.0f, 0x1.070b18p-15f, 0x1.2317d2p-106f, 0.0f, 0.0f, 0x1.db9f0ap-113f,
     0x1.4aa69ap-104f, 0x1.0d5ad4p-125f, 0x1.8c2b28p-64f, 0.0f, 0.0f, 0x1.ad4778p-46f,
     0.0f, 0.0f, 0x1.70a6c6p-82f, 0.0f, 0.0f, 0x1.bf3b24p-121f, 0.0f, 0.0f,
     0x1.a5cf3ap-84f, 0x1.ea4e2ep-7f, 0x1.99e696p-111f, 0x1.3367dcp-126f,
     0x1.baa76p-1f, 0.0f, 0x1.44bb16p-110f, 0x1.e586f6p-1f, 0x1.31b8d4p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ade012p-9f, 0x1.059d96p-107f, 0.0f, 0x1.d6c57cp-28f,
     0x1.052026p-73f, 0x1.512becp-31f, 0.0f, 0x1.1a874cp-12f, 0.0f, 0x1.df845ap-108f,
     0.0f, 0x1.b487bp-23f, 0.0f, 0x1.eaf262p-33f, 0.0f, 0x1.e61b7ep-81f, 0.0f,
     0x1.b68a32p-40f, 0x1.6ccc82p-88f, 0x1.80ace8p-24f, 0x1.10f1c2p-56f, 0.0f,
     0x1.381df8p-55f, 0x1.f62ed6p-51f, 0.0f, 0.0f, 0x1.7d35c8p-17f, 0.0f, 0.0f,
     0x1.564b24p-91f, 0x1.bc6fe4p-17f, 0x1.24ecd2p-58f, 0.0f, 0.0f, 0.0f,
     0x1.b70544p-107f, 0x1.7d17ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4370b6p-55f,
     0x1.e297bp-96f, 0x1.f3d79ep-75f, 0x1.4478cap-98f, 0.0f, 0.0f, 0.0f,
     0x1.c6668p-5f, 0x1.ebecaep-58f, 0.0f, 0x1.5eb44cp-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d71a5ap-53f, 0x1.86e63ep-1f, 0x1.26cc14p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30caep-109f, 0.0f, 0x1.2d9a78p-54f, 0.0f, 0.0f, 0x1.9c7564p-42f, 0.0f,
     0x1.2e82dap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2877d8p-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.179d1cp-9f, 0.0f, 0.0f, 0.0f, 0x1.0a1572p-92f, 0.0f,
     0x1.6e7cdcp-105f, 0.0f, 0x1.09a608p-98f, 0.0f, 0x1.35c492p-84f, 0.0f,
     0x1.85be94p-100f, 0.0f, 0.0f, 0x1.5e0b06p-112f, 0x1.ba3c66p-5f, 0x1.f7a69ap-16f,
     0.0f, 0x1.e48958p-96f, 0.0f, 0.0f, 0x1.5827ep-115f, 0x1.8bdc84p-97f, 0.0f, 0.0f,
     0.0f, 0x1.d8abe4p-44f, 0x1.0e2e3ap-24f, 0x1.9e1172p-118f, 0x1.42ef7ep-25f,
     0x1.275fa6p-47f, 0.0f, 0x1.e0715ep-61f, 0x1.71a81cp-46f, 0x1.3364bp-64f,
     0x1.e0f77p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f7866p-1f, 0x1.77e692p-2f, 0.0f,
     0x1.aa994p-50f, 0x1.0ccbcep-19f, 0.0f, 0.0f, 0.0f, 0x1.d8382ap-63f,
     0x1.85d7eap-87f, 0x1.df360cp-5f, 0.0f, 0.0f, 0.0f, 0x1.f3c1dcp-112f,
     0x1.fbd32p-88f, 0x1.2e9ee2p-46f, 0x1.4baef4p-98f, 0x1.b0e77ep-111f,
     0x1.8809fep-28f, 0x1.ab2e88p-54f, 0x1.e8587ep-63f, 0x1.7a94fcp-31f,
     0x1.ee0a0ep-76f, 0x1.93791ep-56f, 0x1.8ed7bep-10f, 0.0f, 0.0f, 0x1.49877ap-108f,
     0.0f, 0x1.90292p-2f, 0x1.e3f82ep-5f, 0x1.31e0bep-83f, 0.0f, 0x1.53fd06p-76f,
     0.0f, 0x1.5dc8fp-53f, 0.0f, 0.0f, 0x1.157a9cp-37f, 0x1.438b2p-44f,
     0x1.cf513cp-118f, 0x1.457858p-98f, 0.0f, 0x1.f91954p-83f, 0.0f, 0.0f, 0.0f,
     0x1.35886cp-20f, 0.0f, 0x1.77cd8cp-47f, 0.0f, 0x1.c1cb34p-92f, 0.0f, 0.0f,
     0x1.f15ac2p-95f, 0.0f, 0.0f, 0x1.989f36p-51f, 0.0f, 0.0f, 0x1.10178p-84f, 0.0f,
     0x1.5fea3ap-114f, 0.0f, 0.0f, 0x1.cee9f4p-75f, 0x1.e9e53ep-18f, 0x1.589e26p-93f,
     0.0f, 0x1.b04a1ap-92f, 0.0f, 0x1.e0b6f6p-121f, 0.0f, 0x1.656566p-53f,
     0x1.902f68p-26f, 0.0f, 0x1.11697ap-27f, 0.0f, 0.0f, 0.0f, 0x1.9f815ap-101f, 0.0f,
     0.0f, 0.0f, 0x1.b04e5ep-5f, 0.0f, 0.0f, 0.0f, 0x1.b8f50cp-28f, 0.0f, 0.0f, 0.0f,
     0x1.f03d1ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac1164p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4b3b82p-37f, 0x1.d285f8p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8de52ap-35f, 0x1.5f85b6p-99f, 0x1.8f8bb2p-57f, 0x1.df6dc4p-62f,
     0x1.6a42a2p-53f, 0.0f, 0.0f, 0x1.a254ccp-17f, 0x1.1d003p-90f, 0.0f,
     0x1.8561ecp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c20468p-120f, 0.0f,
     0.0f, 0.0f, 0x1.6b4a4ep-22f, 0.0f, 0.0f, 0x1.cff7d6p-16f, 0.0f, 0x1.8e9ae8p-4f,
     0x1.490c4p-112f, 0.0f, 0.0f, 0x1.eb4506p-34f, 0x1.c4c5d2p-114f, 0x1.09e4e8p-92f,
     0x1.e74838p-91f, 0x1.b04786p-35f, 0x1.b69b08p-53f, 0x1.c56664p-2f, 0.0f, 0.0f,
     0x1.4aa4dp-88f, 0x1.2af3bap-84f, 0x1.a92cf6p-116f, 0.0f, 0x1.f1b854p-23f,
     0x1.f93c74p-65f, 0x1.f87662p-92f, 0x1.75548ap-1f, 0x1.206cb6p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f36a1cp-90f, 0x1.b06842p-126f,
     0x1.bc2d2p-38f, 0.0f, 0.0f, 0.0f, 0x1.0cc68ap-10f, 0x1.323a7ap-37f,
     0x1.f18e32p-99f, 0.0f, 0.0f, 0x1.753ce6p-113f, 0x1.24cb52p-76f, 0.0f,
     0x1.a91202p-123f, 0.0f, 0.0f, 0x1.4858a2p-80f, 0.0f, 0x1.b727cep-63f, 0.0f, 0.0f,
     0x1.13e0a8p-84f, 0.0f, 0.0f, 0.0f, 0x1.8c1614p-71f, 0.0f, 0x1.477ecp-71f,
     0x1.6bccc6p-4f, 0.0f, 0x1.f7aa7p-22f, 0.0f, 0.0f, 0x1.48ba14p-112f, 0.0f,
     0x1.3b0664p-66f, 0.0f, 0.0f, 0.0f, 0x1.6b3412p-12f, 0x1.a04cbp-67f, 0.0f,
     0x1.537d2p-53f, 0x1.b73f1cp-39f, 0x1.e5484ep-28f, 0x1.03a8d6p-52f,
     0x1.4e60d2p-22f, 0x1.4ff7bep-89f, 0.0f, 0x1.f253b2p-35f, 0.0f, 0x1.20cd86p-50f,
     0x1.68f968p-58f, 0.0f, 0x1.e781d2p-61f, 0x1.c042d6p-76f, 0x1.b3431cp-92f,
     0x1.b41a2p-124f, 0.0f, 0x1.f9d272p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baf096p-59f,
     0x1.ffdd7ap-76f, 0x1.a8208ap-49f, 0.0f, 0x1.1e8fc2p-34f, 0x1.f80662p-121f,
     0x1.b597dp-38f, 0.0f, 0.0f, 0x1.c1fc62p-87f, 0x1.5258e2p-64f, 0.0f, 0.0f,
     0x1.97b69cp-118f, 0x1.9ea07ap-99f, 0x1.48c4ccp-55f, 0x1.6029f2p-48f, 0.0f, 0.0f,
     0x1.d0d888p-73f, 0x1.42429ap-80f, 0x1.4d55c6p-70f, 0x1.8d0d8ep-80f, 0.0f, 0.0f,
     0x1.bcfa2ep-98f, 0x1.b9dadap-41f, 0x1.b21a94p-3f, 0.0f, 0.0f, 0.0f,
     0x1.be9178p-26f, 0x1.c056d2p-109f, 0.0f, 0.0f, 0.0f, 0x1.0464c2p-105f,
     0x1.f3dde8p-54f, 0x1.b00acp-126f, 0x1.2e48ap-62f, 0.0f, 0.0f, 0x1.5ba672p-51f,
     0.0f, 0x1.595ac4p-19f, 0.0f, 0.0f, 0x1.feb39ap-12f, 0.0f, 0x1.b75deap-54f,
     0x1.d0375ep-67f, 0x1.4deae8p-26f, 0x1.0534fp-7f, 0.0f, 0.0f, 0x1.3490b4p-109f,
     0x1.e3857p-104f, 0.0f, 0.0f, 0x1.b2132ap-18f, 0x1.19bbe6p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b14bf6p-30f, 0x1.388902p-65f, 0.0f, 0x1.279f6cp-27f, 0.0f, 0.0f, 0.0f,
     0x1.9e09a4p-108f, 0x1.3e7894p-116f, 0.0f, 0x1.333486p-1f, 0x1.7b5384p-80f, 0.0f,
     0.0f, 0x1.d7b60cp-60f, 0.0f, 0.0f, 0x1.3a3a3ep-40f, 0.0f, 0.0f, 0x1.241c98p-82f,
     0.0f, 0x1.dfba88p-60f, 0x1.07795ap-17f, 0.0f, 0x1.fb8748p-109f, 0x1.dbb886p-59f,
     0x1.86aefap-24f, 0x1.778b9cp-23f, 0.0f, 0x1.1e274ap-57f, 0x1.7442aap-47f,
     0x1.f10b12p-46f, 0x1.8f7b02p-37f, 0.0f, 0x1.c6e75p-63f, 0.0f, 0.0f,
     0x1.3f2cb8p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.278164p-49f,
     0.0f, 0.0f, 0x1.88c766p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44303p-31f, 0.0f, 0.0f, 0x1.86687p-58f, 0x1.839128p-66f, 0x1.eef0b6p-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99818p-3f, 0x1.736c76p-44f,
     0x1.3bd1dap-51f, 0x1.3ec0ccp-5f, 0x1.41f36ap-36f, 0.0f, 0x1.1892dep-16f, 0.0f
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
            tmp1 = Sleef_finz_asinf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_asinf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
