/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf4_u35avx2128.c --function Sleef_tanf4_u35avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0f, 0x1.5a0f3ep-116f, 0x1.03c458p-55f, 0.0f, 0x1.fb38eep-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7e96p-121f, 0x1.edf0e8p-13f, 0.0f, 0x1.cda23cp-122f, 0.0f, 0x1.8da4aap-110f,
     0x1.4631eap-13f, 0x1.c3036p-7f, 0x1.a95962p-46f, 0.0f, 0.0f, 0x1.bf9c6ap-86f,
     0.0f, 0x1.070856p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c62bap-57f,
     0x1.e1a308p-91f, 0.0f, 0.0f, 0.0f, 0x1.b53c78p-34f, 0x1.354632p-8f, 0.0f, 0.0f,
     0x1.00f124p-62f, 0.0f, 0.0f, 0.0f, 0x1.46306ep-30f, 0.0f, 0x1.2012c4p-64f,
     0x1.bd6c2ap-72f, 0.0f, 0.0f, 0x1.a72bbcp-39f, 0x1.aefa3p-79f, 0.0f, 0.0f,
     0x1.b88e4p-23f, 0.0f, 0.0f, 0.0f, 0x1.6fa04ep-6f, 0x1.a3a4aap-11f,
     0x1.fae5fap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9d036p-123f, 0x1.5fc978p-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2038fcp-39f, 0.0f, 0x1.678edap-97f,
     0x1.f2da38p-3f, 0x1.aba71ap-35f, 0x1.57a9dep-11f, 0x1.a40e0ap-23f,
     0x1.58d85ap-7f, 0x1.5fcc2cp-18f, 0.0f, 0x1.0af88p-53f, 0x1.906c0cp-106f,
     0x1.2040a4p-35f, 0x1.792946p-98f, 0.0f, 0x1.6d6694p-92f, 0x1.a30d1ap-57f,
     0x1.3941dap-92f, 0.0f, 0x1.9e1ceap-41f, 0x1.1b07fp-46f, 0x1.37e2bcp-102f, 0.0f,
     0.0f, 0x1.101784p-21f, 0x1.acbbf6p-59f, 0.0f, 0x1.45678ep-16f, 0x1.ca77fap-68f,
     0x1.16aed6p-85f, 0x1.101cbcp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05040ap-118f, 0.0f,
     0.0f, 0x1.1549b4p-89f, 0x1.fb114ap-60f, 0.0f, 0x1.8eebbp-16f, 0x1.3e5698p-125f,
     0x1.02ecf4p-73f, 0x1.d76798p-59f, 0.0f, 0x1.ed424ep-61f, 0.0f, 0.0f,
     0x1.a9ab76p-94f, 0x1.78ade2p-65f, 0x1.998dacp-111f, 0.0f, 0.0f, 0.0f,
     0x1.55bb5cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.638ee8p-78f, 0.0f, 0.0f,
     0x1.333f7ap-96f, 0.0f, 0x1.70576p-60f, 0.0f, 0.0f, 0x1.9735fp-105f,
     0x1.37380ep-74f, 0x1.2a465ap-117f, 0x1.cf3606p-65f, 0x1.7d40a8p-20f, 0.0f, 0.0f,
     0x1.2b5316p-56f, 0.0f, 0x1.596b42p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae1706p-10f,
     0.0f, 0x1.0ce674p-36f, 0.0f, 0.0f, 0x1.b01d82p-30f, 0x1.e7bc6cp-71f, 0.0f,
     0x1.02872ep-51f, 0x1.b35a18p-114f, 0.0f, 0.0f, 0.0f, 0x1.e397cap-107f,
     0x1.7ba398p-91f, 0.0f, 0.0f, 0x1.92aep-83f, 0x1.790afap-16f, 0.0f,
     0x1.07e902p-64f, 0.0f, 0x1.a7ccd4p-2f, 0x1.4fb7bep-111f, 0.0f, 0x1.3981a6p-37f,
     0x1.b8b388p-63f, 0x1.5c575ep-24f, 0.0f, 0x1.3c5bcep-49f, 0.0f, 0x1.949624p-68f,
     0.0f, 0x1.47a1cep-54f, 0.0f, 0.0f, 0x1.7003c2p-126f, 0.0f, 0.0f,
     0x1.0005e8p-113f, 0x1.f86fe6p-19f, 0x1.0a1146p-114f, 0.0f, 0x1.c5b9c8p-107f,
     0.0f, 0x1.cda948p-44f, 0.0f, 0x1.881d68p-23f, 0x1.82ce64p-116f, 0.0f,
     0x1.faf9e2p-3f, 0x1.a5880ep-50f, 0x1.b3023ep-85f, 0x1.c86958p-94f,
     0x1.b09416p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0639eap-109f, 0x1.c750c2p-108f,
     0.0f, 0.0f, 0x1.1cec2ap-109f, 0.0f, 0x1.d16802p-111f, 0x1.c3b3dap-9f, 0.0f,
     0x1.aef036p-58f, 0x1.112aa8p-31f, 0x1.3b382ap-73f, 0x1.918406p-66f,
     0x1.211c1cp-38f, 0x1.f71d06p-101f, 0x1.eea2b2p-72f, 0.0f, 0.0f, 0.0f,
     0x1.f7dd76p-99f, 0x1.985b52p-26f, 0x1.9173d6p-9f, 0.0f, 0.0f, 0x1.5dd336p-43f,
     0x1.5c6668p-30f, 0.0f, 0x1.f20c16p-89f, 0x1.84920cp-81f, 0.0f, 0x1.8b2dcap-111f,
     0.0f, 0x1.df0652p-16f, 0.0f, 0x1.35c22p-32f, 0.0f, 0.0f, 0x1.bcff0ap-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.46ff0cp-27f, 0.0f, 0.0f, 0.0f, 0x1.10bf4ap-97f,
     0x1.27ec0ap-89f, 0.0f, 0x1.a7945ep-19f, 0.0f, 0.0f, 0x1.6349c4p-116f,
     0x1.0ab25cp-107f, 0.0f, 0x1.5ff438p-38f, 0.0f, 0x1.529e06p-6f, 0x1.5c896cp-89f,
     0x1.2bcbbap-70f, 0x1.eff744p-124f, 0x1.6d428ep-124f, 0x1.39552ep-113f, 0.0f,
     0.0f, 0x1.b4ec26p-76f, 0x1.c8bbc4p-19f, 0x1.6aa38p-82f, 0.0f, 0x1.bb8072p-106f,
     0.0f, 0.0f, 0x1.bfa0b2p-94f, 0.0f, 0.0f, 0x1.1c2ab2p-49f, 0x1.6f35aap-64f, 0.0f,
     0.0f, 0x1.178214p-40f, 0x1.25229ep-44f, 0.0f, 0x1.de8f04p-34f, 0.0f,
     0x1.e2c92cp-62f, 0x1.80920cp-53f, 0.0f, 0x1.fd068ap-4f, 0.0f, 0x1.a9e38ep-89f,
     0x1.042218p-95f, 0.0f, 0x1.920a64p-42f, 0.0f, 0.0f, 0x1.3127aep-2f, 0.0f,
     0x1.194e5ep-24f, 0x1.06117ep-105f, 0.0f, 0.0f, 0x1.eaf338p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e9fap-78f, 0x1.d1a7acp-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54fb14p-41f, 0.0f, 0.0f, 0.0f,
     0x1.54d29cp-12f, 0.0f, 0x1.e0c97p-7f, 0x1.55a322p-109f, 0x1.445f2p-123f,
     0x1.3b8d3cp-3f, 0.0f, 0x1.0cf946p-102f, 0x1.7d567ep-67f, 0.0f, 0x1.2a110ap-88f,
     0.0f, 0.0f, 0x1.044858p-103f, 0.0f, 0x1.784b2p-51f, 0x1.c58f14p-110f, 0.0f,
     0x1.a90da2p-31f, 0x1.cdd804p-67f, 0.0f, 0.0f, 0x1.16472ap-64f, 0.0f, 0.0f,
     0x1.22574cp-17f, 0x1.057d82p-51f, 0x1.58f74cp-66f, 0x1.db8d0ep-10f,
     0x1.d5526ap-104f, 0x1.6e65a4p-28f, 0x1.d20c2ep-117f, 0.0f, 0x1.51ap-66f,
     0x1.5aea46p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d6e42p-3f, 0x1.488a44p-13f,
     0x1.1df09cp-37f, 0.0f, 0x1.3ae55ep-84f, 0x1.7abe62p-103f, 0.0f, 0x1.c57e0ap-32f,
     0.0f, 0x1.4dad48p-90f, 0x1.18b8dcp-43f, 0x1.ad923ep-124f, 0x1.b372ap-117f, 0.0f,
     0x1.5d4368p-40f, 0x1.74b2fap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1e9e4p-18f, 0.0f,
     0x1.e42642p-78f, 0.0f, 0x1.914008p-23f, 0.0f, 0.0f, 0.0f, 0x1.4759p-109f,
     0x1.dea098p-19f, 0.0f, 0.0f, 0.0f, 0x1.f210e2p-28f, 0x1.95a9f8p-37f,
     0x1.9b1748p-45f, 0x1.51bd48p-113f, 0x1.b0befep-30f, 0.0f, 0.0f, 0x1.a4b66ap-57f,
     0x1.106f38p-32f, 0.0f, 0x1.74232p-7f, 0.0f, 0x1.7089bcp-19f, 0x1.1dd83ap-32f,
     0.0f, 0.0f, 0x1.336d5ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e68a8p-58f, 0.0f,
     0x1.cfe086p-43f, 0x1.fcb44ap-121f, 0.0f, 0.0f, 0.0f, 0x1.c2cbcap-26f,
     0x1.8f384ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dea1c2p-69f, 0x1.c928eep-57f,
     0x1.d90b46p-13f, 0.0f, 0x1.5b2972p-121f, 0x1.cb8f7ap-2f, 0x1.f7ed32p-33f, 0.0f,
     0x1.4892b6p-9f, 0.0f, 0x1.73b11ep-64f, 0x1.ef2b22p-2f, 0.0f, 0x1.8b7ffep-47f,
     0x1.b0fb32p-22f, 0x1.9134a4p-111f, 0x1.a932c8p-5f, 0x1.e93aeep-123f,
     0x1.8af7fp-94f, 0x1.9b726cp-66f, 0x1.73a924p-48f, 0.0f, 0.0f, 0.0f,
     0x1.621ea8p-113f, 0x1.f72146p-67f, 0.0f, 0.0f, 0.0f, 0x1.835d2ep-19f,
     0x1.b4829cp-79f, 0x1.e5f45ap-47f, 0x1.560f32p-12f, 0x1.52a7d6p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.311f7cp-28f, 0x1.42a8c6p-117f, 0.0f, 0x1.a72284p-12f,
     0x1.413d66p-70f, 0.0f, 0.0f, 0x1.8b564ep-101f, 0x1.2405a2p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ad0c76p-58f, 0.0f, 0.0f, 0x1.891758p-67f, 0x1.a935c2p-5f,
     0x1.94104ep-19f, 0.0f, 0.0f, 0.0f, 0x1.8fc45ap-19f, 0.0f, 0x1.6e208ep-110f,
     0x1.76d6aep-104f, 0x1.1c7f98p-24f, 0.0f, 0.0f, 0x1.4b93e8p-69f, 0x1.f421e4p-62f,
     0x1.2a8132p-16f, 0.0f, 0x1.cd2e48p-4f, 0x1.3b23aep-43f, 0x1.6000a8p-106f,
     0x1.c7ccdep-114f, 0x1.986b4ep-40f, 0.0f, 0x1.5e3f4ep-11f, 0x1.c93df2p-114f,
     0x1.c0281p-60f, 0x1.a1c068p-83f, 0x1.aab2d8p-37f, 0x1.e07fa8p-93f,
     0x1.74c684p-37f, 0x1.e7b4d2p-60f, 0.0f, 0x1.926b06p-22f, 0.0f, 0.0f,
     0x1.e61386p-13f, 0.0f, 0.0f, 0x1.017b92p-18f, 0x1.3ec09ep-18f, 0.0f, 0.0f,
     0x1.dad3c2p-8f, 0.0f, 0x1.377342p-55f, 0.0f, 0.0f, 0x1.1e347p-47f,
     0x1.848348p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02a968p-25f, 0x1.f9c9p-35f,
     0x1.623cd4p-34f, 0x1.277e78p-33f, 0x1.b2081p-9f, 0.0f, 0x1.9ba908p-71f, 0.0f,
     0.0f, 0x1.a2607ap-91f, 0x1.6ff734p-10f, 0x1.bf9cd6p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36c2f8p-39f, 0x1.ac3abap-76f, 0x1.2fbde6p-62f, 0x1.9abfd2p-24f, 0.0f, 0.0f,
     0x1.b4805cp-97f, 0x1.af3642p-88f, 0x1.35589ap-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.389d44p-74f, 0.0f, 0x1.73d35ap-59f, 0.0f, 0.0f, 0.0f, 0x1.ff7ddap-85f,
     0x1.31f3f2p-40f, 0x1.c2d372p-103f, 0.0f, 0.0f, 0.0f, 0x1.4ad2ep-125f,
     0x1.98c08ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.774186p-58f, 0x1.044842p-112f,
     0.0f, 0x1.0f21p-9f, 0x1.aa67fep-106f, 0.0f, 0x1.ffc06p-72f, 0.0f,
     0x1.12ebe8p-93f, 0x1.9c4f5ap-21f, 0x1.f86c5p-78f, 0x1.fdccfcp-36f, 0.0f, 0.0f,
     0.0f, 0x1.09281ep-9f, 0.0f, 0x1.513eeap-33f, 0.0f, 0.0f, 0.0f, 0x1.f90164p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e8e36p-58f, 0.0f, 0.0f, 0x1.2e69eap-126f, 0.0f,
     0x1.1e01dap-123f, 0.0f, 0x1.254ff6p-108f, 0.0f, 0x1.b17338p-95f, 0x1.b93256p-67f,
     0x1.709b1ap-104f, 0x1.ef7b6cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4564c6p-104f, 0.0f, 0.0f, 0x1.3840a2p-78f, 0x1.b7988p-85f,
     0x1.e21e1ep-57f, 0x1.7f70c4p-45f, 0.0f, 0x1.16d0c4p-98f, 0x1p0f,
     0x1.c0d276p-106f, 0x1.747efcp-40f, 0.0f, 0x1.a5d95p-66f, 0.0f, 0x1.42965ep-104f,
     0x1.b58746p-63f, 0x1.7876eap-20f, 0.0f, 0x1.3ce64cp-84f, 0.0f, 0x1.981d2ap-98f,
     0.0f, 0.0f, 0x1.b45f8ap-59f, 0x1.4e99c2p-126f, 0x1.33a114p-4f, 0x1.984dcap-79f,
     0x1.047cccp-40f, 0.0f, 0.0f, 0.0f, 0x1.2efd02p-110f, 0.0f, 0.0f, 0x1.ad7e88p-23f,
     0x1.cf5f58p-96f, 0.0f, 0x1.09a37cp-25f, 0x1.89aa1p-117f, 0.0f, 0.0f,
     0x1.96b05ap-26f, 0.0f, 0x1.890ebp-96f, 0.0f, 0x1.e00e42p-15f, 0x1.d0e4e6p-36f,
     0x1.83ffcap-113f, 0x1.7bf34p-118f, 0.0f, 0x1.68d21p-41f, 0.0f, 0.0f, 0.0f,
     0x1.4b3386p-63f, 0.0f, 0x1.d84708p-106f, 0x1.414b4ep-119f, 0x1.4d4ecp-94f,
     0x1.2e4b1p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43bf7ap-102f, 0.0f, 0.0f, 0.0f,
     0x1.44ff3p-117f, 0x1.7d873cp-13f, 0.0f, 0.0f, 0x1.cc823ap-2f, 0.0f, 0.0f,
     0x1.0bfe7p-14f, 0x1.12b3dep-40f, 0x1.09499cp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fd79cp-103f, 0x1.3608cep-30f, 0.0f, 0x1.e129dcp-72f, 0.0f, 0.0f,
     0x1.17b608p-9f, 0.0f, 0x1.6c3ccep-45f, 0x1.c406bep-125f, 0.0f, 0.0f,
     0x1.aa7abp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6a2bep-59f, 0.0f, 0x1.8071e6p-31f,
     0x1.e5a74p-105f, 0x1.4aa04ep-12f, 0x1.4cdc58p-109f, 0x1.c4ec3cp-69f, 0.0f,
     0x1.cb4ea4p-78f, 0.0f, 0.0f, 0.0f, 0x1.e39e98p-110f, 0.0f, 0x1.4c8becp-9f,
     0x1.2a6e1cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac04a2p-27f, 0.0f, 0.0f,
     0x1.54c6e8p-10f, 0x1.6c566ep-117f, 0.0f, 0.0f, 0.0f, 0x1.a74d38p-12f, 0.0f,
     0x1.65e642p-123f, 0x1.a81116p-10f, 0.0f, 0.0f, 0x1.7592a2p-119f, 0.0f, 0.0f,
     0.0f, 0x1.33d8e2p-3f, 0x1.b810fep-4f, 0x1.3f0c98p-101f, 0x1.947b9ep-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d17df4p-1f, 0x1.264af2p-41f, 0x1.be6b04p-40f, 0.0f,
     0x1.9f941ap-95f, 0.0f, 0.0f, 0x1.2004e4p-74f, 0x1p0f, 0x1.e755cp-31f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24020cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.483882p-1f, 0x1.ad2e7ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7ab4cp-107f,
     0x1.b348f8p-31f, 0x1.5dd61ap-100f, 0.0f, 0.0f, 0.0f, 0x1.d0812ep-2f, 0.0f, 0.0f,
     0.0f, 0x1.0a5b0cp-117f, 0.0f, 0.0f, 0x1.dc0176p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.27437p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4afe4p-109f, 0.0f,
     0x1.91704ep-68f, 0x1.4b64a6p-105f, 0.0f, 0x1.83503cp-112f, 0.0f, 0x1.5d67f8p-35f,
     0.0f, 0.0f, 0x1.fe01bcp-19f, 0x1.86dffp-110f, 0x1.9f325ep-15f, 0x1.e14568p-40f,
     0.0f, 0x1.e67f8ap-21f, 0.0f, 0.0f, 0x1.c1352cp-94f, 0.0f, 0x1.ee7514p-75f,
     0x1.57e54p-48f, 0x1.42361p-86f, 0.0f, 0x1.bb615ap-74f, 0x1.af90a6p-115f, 0.0f,
     0.0f, 0x1.fa1a7ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26c438p-91f,
     0x1.cf0bd2p-97f, 0x1.ebebe4p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7b8e8p-117f, 0x1.3e6f46p-97f, 0.0f, 0x1.69427p-126f, 0.0f, 0x1.8c2fdap-97f,
     0.0f, 0.0f, 0.0f, 0x1.8a4954p-122f, 0x1.21e04ap-29f, 0.0f, 0.0f, 0.0f,
     0x1.440804p-49f, 0.0f, 0.0f, 0.0f, 0x1.b3f16ap-122f, 0x1.070b4p-100f,
     0x1.4d4aa8p-97f, 0.0f, 0x1.386596p-70f, 0x1.4cbf98p-72f, 0.0f, 0x1.88c0b6p-112f,
     0x1.9c6486p-18f, 0x1.d24612p-43f, 0x1.f5f5dep-87f, 0.0f, 0x1.275036p-123f,
     0x1.122e16p-89f, 0x1.06c74p-63f, 0x1.0771d6p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb8778p-23f, 0x1.a6463cp-9f, 0.0f, 0x1.7a3aa4p-104f, 0x1.4555ecp-109f,
     0x1.6a00dcp-6f, 0x1.a03e54p-126f, 0x1.3b87bep-49f, 0x1.c2e5c6p-54f,
     0x1.7b0b58p-40f, 0.0f, 0x1.5b1cc6p-24f, 0x1.e4cc9ap-15f, 0x1.efae7ap-120f, 0.0f,
     0x1.646a18p-36f, 0.0f, 0.0f, 0x1.b8737ap-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f4b5ep-64f, 0.0f, 0x1.7f6c66p-80f, 0x1.688644p-109f, 0x1.16954p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8177b4p-3f, 0.0f, 0x1.3c023p-114f, 0.0f, 0x1.7edfdp-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae2308p-15f, 0.0f, 0x1.a2d4cp-25f, 0.0f,
     0.0f, 0x1.c42994p-39f, 0x1.4d8ca8p-97f, 0.0f, 0.0f, 0x1.a0f65p-110f,
     0x1.d075b4p-45f, 0x1.7b9b96p-125f, 0x1.1cf182p-44f, 0x1.acb1dap-91f, 0.0f,
     0x1.783fbep-101f, 0.0f, 0x1.f11e6p-53f, 0x1.91d4e8p-81f, 0x1.9af586p-76f
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
            tmp1 = Sleef_tanf4_u35avx2128(tmp0);
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
    printf("Sleef_tanf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
