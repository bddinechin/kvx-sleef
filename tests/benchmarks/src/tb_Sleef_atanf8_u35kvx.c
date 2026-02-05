/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf8_u35kvx.c --function Sleef_atanf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0x1.63ad64p-11f, 0.0f, 0.0f, 0x1.0a78b4p-91f, 0x1.c0c8ecp-83f, 0.0f,
     0x1.57f9bep-107f, 0x1.292386p-27f, 0x1.ad8f6p-28f, 0x1.747ad6p-52f,
     0x1.ef5e52p-74f, 0.0f, 0x1.86f50cp-23f, 0.0f, 0x1.cb13dp-92f, 0.0f, 0.0f, 0.0f,
     0x1.d7809ap-97f, 0x1.ed474ep-55f, 0.0f, 0x1.538c7ep-66f, 0.0f, 0.0f, 0.0f,
     0x1.216ca6p-26f, 0.0f, 0x1.af0084p-117f, 0x1.b96e02p-77f, 0.0f, 0x1.6ac042p-40f,
     0x1.d4645p-3f, 0x1.985d34p-19f, 0x1.8539e6p-107f, 0x1.6ee0dep-35f,
     0x1.7094f2p-32f, 0.0f, 0x1.63e098p-61f, 0.0f, 0x1.e45094p-44f, 0.0f,
     0x1.b39d6ep-99f, 0x1.301bd6p-84f, 0x1.b42584p-24f, 0x1.af60a8p-27f,
     0x1.4f69aep-100f, 0.0f, 0x1.ab26dep-71f, 0.0f, 0.0f, 0x1.637434p-62f,
     0x1.2ebc64p-89f, 0.0f, 0.0f, 0x1.344588p-54f, 0.0f, 0x1.f19efep-25f, 0.0f,
     0x1.ff1bf4p-52f, 0.0f, 0x1.effd5p-33f, 0.0f, 0x1.83f742p-92f, 0x1.365646p-109f,
     0.0f, 0x1.f22422p-109f, 0x1.17e5e8p-56f, 0x1.8eae18p-93f, 0x1.301298p-93f,
     0x1.94bb34p-122f, 0x1.80518p-126f, 0x1.ca5422p-82f, 0x1.14d0fap-80f,
     0x1.05b468p-119f, 0x1.0ef318p-58f, 0.0f, 0x1.076c2ep-125f, 0x1.36d992p-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f6d02p-47f, 0.0f, 0.0f, 0.0f, 0x1.1e4bb8p-111f,
     0x1.d9857ep-71f, 0x1.6790f8p-55f, 0x1.194376p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aafc78p-11f, 0.0f, 0x1.a39df2p-114f, 0x1.0e67ep-125f, 0x1.62b468p-28f, 0.0f,
     0.0f, 0x1.795efcp-58f, 0.0f, 0x1.fe1578p-40f, 0x1.25f43ap-68f, 0.0f,
     0x1.155ed4p-3f, 0x1.ac195p-75f, 0x1.624934p-63f, 0.0f, 0.0f, 0x1.c8c17ap-68f,
     0x1.d07ffap-98f, 0x1.eed53ep-44f, 0.0f, 0x1.c400bcp-30f, 0x1.ba1caep-25f, 0.0f,
     0.0f, 0x1.d6c292p-34f, 0x1.0f7e4p-30f, 0.0f, 0x1.fdc16ep-60f, 0x1.ab14dcp-53f,
     0.0f, 0.0f, 0.0f, 0x1.57db9cp-86f, 0x1.b9db4ep-123f, 0x1.8ccd44p-4f,
     0x1.72a28ep-6f, 0.0f, 0.0f, 0.0f, 0x1.9e830cp-66f, 0x1.2c7ed8p-2f, 0.0f, 0.0f,
     0.0f, 0x1.9739ecp-32f, 0.0f, 0x1.85582ap-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d89ee8p-70f, 0.0f, 0x1.cf225ep-91f, 0x1.3104a6p-17f, 0.0f, 0.0f, 0.0f,
     0x1.e9b74ep-13f, 0x1.2ddb4cp-97f, 0x1.b7395cp-42f, 0.0f, 0.0f, 0x1.a51f98p-60f,
     0.0f, 0x1.465b3p-106f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.b70652p-105f,
     0x1.4c25dcp-98f, 0x1.d35f5ap-27f, 0x1.5d31f6p-65f, 0.0f, 0.0f, 0x1.e891c2p-123f,
     0.0f, 0x1.1bc6ccp-46f, 0.0f, 0x1.5143aap-59f, 0.0f, 0.0f, 0.0f, 0x1.9ebad4p-102f,
     0.0f, 0x1.dd5154p-19f, 0x1.e6e708p-12f, 0x1.48a3bp-79f, 0x1.1006fp-67f,
     0x1.d7f8b6p-61f, 0x1.59f506p-11f, 0x1.e19dp-110f, 0x1.5a9728p-49f, 0.0f, 0.0f,
     0x1.116444p-13f, 0x1p0f, 0x1.14e6fap-56f, 0.0f, 0x1.6cee66p-116f, 0.0f,
     0x1.8f5422p-17f, 0x1.cf761p-57f, 0.0f, 0x1.a4165ap-118f, 0.0f, 0.0f,
     0x1.345cep-38f, 0.0f, 0.0f, 0x1.d3d46cp-47f, 0.0f, 0x1.9fe5fcp-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.056e5ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bbe08ep-37f, 0x1.896d7cp-98f, 0.0f, 0x1.e1e4bcp-72f, 0.0f, 0x1.92feaep-77f,
     0.0f, 0x1.0b66bp-109f, 0x1.2a9162p-40f, 0x1.db3c96p-6f, 0x1.38efa4p-36f,
     0x1.f7a0c4p-34f, 0.0f, 0.0f, 0x1.a6aaacp-55f, 0.0f, 0.0f, 0.0f, 0x1.ba1e72p-55f,
     0.0f, 0x1.0213dap-39f, 0.0f, 0.0f, 0.0f, 0x1.6f1dd2p-115f, 0x1.01b9e6p-121f,
     0.0f, 0x1.f60beap-96f, 0.0f, 0x1.c9263p-47f, 0.0f, 0x1.4e250ap-21f, 0.0f, 0.0f,
     0x1.dd8c8ep-86f, 0x1.c840bap-34f, 0x1.c2aadap-42f, 0.0f, 0.0f, 0x1.be1b84p-53f,
     0x1.27bb2cp-15f, 0x1.32aed6p-1f, 0.0f, 0x1.dd889ep-119f, 0x1.6704cap-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.31fd96p-11f, 0.0f, 0.0f, 0x1.5cfeep-47f, 0x1.7f848cp-123f,
     0x1.b8283ep-105f, 0.0f, 0x1.df668ap-78f, 0x1.866d56p-14f, 0.0f, 0.0f,
     0x1.37eebap-28f, 0x1.c8a762p-59f, 0.0f, 0.0f, 0x1.688994p-42f, 0x1.25a30cp-20f,
     0x1.d4fbe4p-66f, 0x1.8a2884p-102f, 0x1.b531bep-119f, 0x1.6f4192p-98f,
     0x1.fcf15cp-59f, 0x1.fd784ep-4f, 0x1.76efb6p-70f, 0.0f, 0x1.fd207ap-36f,
     0x1.d44c64p-83f, 0.0f, 0.0f, 0x1.9e54a2p-104f, 0.0f, 0x1.b4c992p-10f, 0.0f, 0.0f,
     0.0f, 0x1.b86c44p-76f, 0.0f, 0.0f, 0.0f, 0x1.14f7bap-50f, 0x1.97ae24p-105f,
     0x1.483de8p-2f, 0x1.407c1ep-125f, 0x1.cbeb8cp-31f, 0.0f, 0x1.dbcdep-94f,
     0x1.85847ap-3f, 0.0f, 0x1.2964a6p-34f, 0x1.aad478p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c01bd6p-11f, 0.0f, 0x1.12d0a8p-98f, 0.0f, 0.0f, 0x1.ba7668p-53f, 0.0f,
     0.0f, 0.0f, 0x1.e25edap-27f, 0.0f, 0x1.d155b2p-126f, 0.0f, 0x1.0d2e7ap-53f, 0.0f,
     0x1.b84214p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee9a2cp-100f, 0.0f,
     0x1.3f871cp-111f, 0x1.f4f486p-96f, 0.0f, 0.0f, 0x1.18a26p-58f, 0x1.825252p-65f,
     0.0f, 0.0f, 0x1.055028p-93f, 0x1.361904p-24f, 0.0f, 0x1.ab506ep-121f, 0.0f,
     0x1.bd0eeap-54f, 0x1.039074p-19f, 0.0f, 0.0f, 0x1.5a1682p-27f, 0.0f, 0.0f,
     0x1.64831ap-93f, 0x1.bba01cp-100f, 0x1.f84e32p-21f, 0x1.c057c6p-109f, 0.0f,
     0x1.3aea34p-59f, 0x1.44febcp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da47b2p-101f, 0.0f, 0x1.5fc37ap-62f, 0.0f, 0x1.25c55p-96f, 0.0f, 0.0f, 0.0f,
     0x1.872de8p-46f, 0x1.16c5b4p-115f, 0.0f, 0x1.03db4ap-27f, 0x1.21218ap-9f,
     0x1.f175dep-121f, 0.0f, 0x1.8beb9p-4f, 0x1.19f452p-48f, 0.0f, 0.0f, 0.0f,
     0x1.01b02p-102f, 0.0f, 0x1.db6f7ap-84f, 0.0f, 0x1.b236cep-37f, 0.0f,
     0x1.0b611ep-96f, 0x1.22aeep-53f, 0x1p0f, 0.0f, 0.0f, 0x1.f0f274p-118f, 0.0f,
     0.0f, 0.0f, 0x1.7a2826p-74f, 0.0f, 0.0f, 0.0f, 0x1.cd7cb4p-66f, 0.0f, 0.0f,
     0x1.3b4e56p-16f, 0.0f, 0x1.421046p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.571e56p-33f, 0x1.0c8396p-84f, 0.0f, 0x1.77ecep-46f, 0.0f, 0.0f, 0.0f,
     0x1.f2c0a6p-25f, 0x1.e773f6p-26f, 0x1.93162p-37f, 0x1.16bfccp-16f, 0.0f, 0.0f,
     0x1.14954ap-43f, 0x1.68e3bep-121f, 0.0f, 0x1.a88f54p-86f, 0x1.b7e3fap-34f,
     0x1.1048ccp-8f, 0x1.a6882cp-79f, 0.0f, 0x1.6c2752p-122f, 0x1.142c0ep-110f, 0.0f,
     0.0f, 0.0f, 0x1.eee21p-34f, 0.0f, 0x1.39c858p-40f, 0x1.1379fp-125f, 0.0f,
     0x1.662c82p-39f, 0x1.aa940ap-28f, 0.0f, 0.0f, 0x1.c3d944p-43f, 0.0f,
     0x1.07a3d6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3836p-46f, 0x1.31864ap-105f,
     0.0f, 0.0f, 0x1.739832p-49f, 0x1.e89f26p-13f, 0x1.0bb722p-3f, 0.0f, 0.0f,
     0x1.29b0aep-28f, 0x1.4e6bacp-63f, 0x1.7991e6p-46f, 0.0f, 0x1.d543eap-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.053f8ap-47f, 0.0f, 0x1.16c664p-2f, 0x1.8c2d8p-109f, 0.0f,
     0x1.9b6f24p-108f, 0.0f, 0x1.19cc4ep-24f, 0x1.b1893cp-52f, 0x1.300fb8p-34f,
     0x1.e8a72ep-110f, 0x1.a98692p-108f, 0x1.1cf53ep-13f, 0.0f, 0x1.9dfc92p-44f, 0.0f,
     0.0f, 0x1.cca852p-74f, 0x1.829e5ep-89f, 0.0f, 0.0f, 0x1.373a2ap-2f,
     0x1.54a402p-63f, 0.0f, 0.0f, 0x1.47c332p-22f, 0x1.a02142p-73f, 0x1.d690acp-10f,
     0x1.32b1c4p-96f, 0x1.902f12p-77f, 0x1.feea06p-90f, 0x1.f10ebap-2f,
     0x1.f2f838p-82f, 0x1.25028cp-6f, 0x1.ef113cp-19f, 0x1.af2cccp-12f, 0.0f,
     0x1.432a4ep-26f, 0.0f, 0x1.496a96p-50f, 0x1.06e034p-115f, 0x1.24881ep-45f,
     0x1.8ae76ep-18f, 0.0f, 0.0f, 0.0f, 0x1.46905p-117f, 0x1.cbdcap-55f,
     0x1.d765aep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5209p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.39e824p-43f, 0x1.353d0cp-56f, 0x1.33f3d8p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd81a6p-58f, 0.0f, 0x1.6bfe04p-88f, 0x1.ac7b2p-15f, 0x1.d4445ap-41f,
     0.0f, 0.0f, 0x1.bdad66p-36f, 0.0f, 0.0f, 0x1.51d356p-114f, 0x1.e3618p-5f,
     0x1.8a68a4p-102f, 0x1.bb1592p-10f, 0x1.86aa42p-61f, 0x1.69b218p-115f, 0.0f, 0.0f,
     0x1.75151p-47f, 0x1.63f406p-78f, 0.0f, 0x1.91db2ap-85f, 0x1.f49a28p-32f,
     0x1.db084cp-108f, 0x1.ff75c6p-109f, 0x1.f326e2p-54f, 0x1.8c016ep-114f,
     0x1.5e7ad6p-44f, 0.0f, 0.0f, 0.0f, 0x1.76eb7ep-79f, 0x1.1801e8p-68f,
     0x1.cbd4cep-112f, 0x1.3f2114p-67f, 0.0f, 0.0f, 0.0f, 0x1.dc0eb2p-47f,
     0x1.fe0c9cp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfd83p-64f, 0x1.263838p-99f,
     0x1.dda394p-91f, 0.0f, 0.0f, 0x1.096274p-48f, 0x1.c99e5ap-53f, 0x1.1c99f4p-20f,
     0x1.cffeep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.021ffep-44f, 0.0f, 0x1.c55cc8p-11f,
     0.0f, 0x1.97f63cp-5f, 0x1.fd8bfap-111f, 0x1.524992p-31f, 0x1.a819bep-4f, 0.0f,
     0.0f, 0.0f, 0x1.de5714p-110f, 0.0f, 0x1.57b424p-83f, 0x1.1b5de2p-32f,
     0x1.1ff654p-103f, 0.0f, 0.0f, 0x1.1bbb5p-69f, 0x1.53ee22p-8f, 0x1.7727fp-103f,
     0x1.b3401ep-110f, 0x1.216dbp-117f, 0x1.106516p-96f, 0.0f, 0.0f, 0.0f,
     0x1.9a5852p-56f, 0x1.57433ep-98f, 0.0f, 0.0f, 0.0f, 0x1.09133ep-36f,
     0x1.4fb79p-94f, 0x1.526bcep-29f, 0x1.9b11cap-8f, 0.0f, 0.0f, 0x1.da77bep-96f,
     0x1.d838bp-48f, 0.0f, 0x1.57ee7ep-9f, 0.0f, 0.0f, 0x1.98c79ep-19f,
     0x1.364138p-57f, 0x1.8419c6p-27f, 0x1.d3057ap-20f, 0.0f, 0x1.85d3a6p-3f,
     0x1.a0215p-99f, 0x1.61c02ap-23f, 0x1.3b3904p-102f, 0x1.14ebbcp-118f, 0.0f,
     0x1.bde2f8p-72f, 0.0f, 0x1.f24394p-74f, 0x1.3b99e2p-6f, 0.0f, 0.0f, 0.0f,
     0x1.5ffe8ap-81f, 0x1.c2ab6ep-99f, 0x1.e1c246p-3f, 0.0f, 0.0f, 0x1.5a0358p-63f,
     0x1.ef28ccp-75f, 0.0f, 0x1.506c42p-21f, 0x1.e5ef6cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.8bd2cep-55f, 0.0f, 0x1.e377cp-28f, 0x1p0f, 0.0f, 0x1.7d8334p-114f, 0.0f,
     0.0f, 0x1.199062p-119f, 0x1.c8845ep-52f, 0x1.2ea114p-6f, 0x1.996484p-30f,
     0x1.76e4d8p-2f, 0x1.f045c6p-31f, 0.0f, 0x1.d0c908p-74f, 0x1.a24b86p-51f,
     0x1.d11ad6p-19f, 0x1.c5f464p-91f, 0.0f, 0x1.fa5ab6p-18f, 0.0f, 0x1.d417fp-126f,
     0x1.61de7ap-117f, 0x1.5c6bb4p-16f, 0x1.3281dap-62f, 0.0f, 0x1.4aab8cp-75f, 0.0f,
     0x1.14414p-61f, 0.0f, 0.0f, 0.0f, 0x1.93dfa6p-23f, 0.0f, 0.0f, 0x1.27b764p-59f,
     0x1.3a27b6p-124f, 0x1.93b8c4p-91f, 0x1.547866p-24f, 0.0f, 0x1.2984cp-83f, 0.0f,
     0.0f, 0x1.98459p-21f, 0x1.e49952p-77f, 0x1.e8c46ap-14f, 0x1.c20852p-98f, 0.0f,
     0.0f, 0x1.75c806p-97f, 0.0f, 0x1.94b1d6p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56aa5cp-43f, 0x1.3c96p-104f, 0.0f, 0x1.c0893ep-68f, 0.0f, 0.0f,
     0x1.981d3cp-89f, 0x1.0a9648p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7bba6ep-15f, 0.0f, 0x1.c232c8p-30f, 0x1.6a254ep-91f, 0x1.fd4518p-73f,
     0x1.a02a5ap-125f, 0x1.b11fa4p-66f, 0x1.acfe1ep-20f, 0.0f, 0x1.324b3p-119f, 0.0f,
     0x1.168dd4p-52f, 0x1.08215cp-44f, 0x1.63a14p-46f, 0.0f, 0.0f, 0x1.ef11eep-40f,
     0.0f, 0.0f, 0x1.ec6eap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.199736p-82f, 0.0f,
     0x1.5f730cp-85f, 0x1.3473fap-25f, 0.0f, 0x1.a377b6p-73f, 0x1.1179fcp-124f,
     0x1.93af6ep-55f, 0.0f, 0x1.cd1db8p-64f, 0.0f, 0.0f, 0x1.ceb7dp-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3f1fc4p-10f, 0.0f, 0x1.de749cp-68f, 0.0f, 0.0f, 0.0f,
     0x1.808bcp-38f, 0x1.d22f02p-85f, 0x1.b48e3cp-57f, 0x1.5c55f6p-19f,
     0x1.131994p-39f, 0.0f, 0x1.8f1c92p-48f, 0x1.ebd24ep-26f, 0.0f, 0x1.81d0a2p-70f,
     0.0f, 0x1.256be8p-11f, 0x1.95d182p-62f, 0.0f, 0x1.4bb9c2p-76f, 0x1.c2ce58p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dced02p-91f, 0x1.8a72fap-10f, 0.0f,
     0x1.87e0fp-1f, 0.0f, 0x1.829304p-34f, 0.0f, 0.0f, 0x1.02951cp-87f,
     0x1.656928p-6f, 0.0f, 0x1.b2a28ap-37f, 0.0f, 0x1.3a072p-67f, 0x1.92bab6p-5f,
     0x1.849d26p-14f, 0x1.212638p-3f, 0.0f, 0x1.7abe2ap-34f, 0x1.479db8p-89f, 0.0f,
     0.0f, 0.0f, 0x1.b559bcp-20f, 0.0f, 0.0f, 0x1.73b7fcp-119f, 0x1.834498p-124f,
     0x1.dafe46p-7f, 0x1.288fdp-18f, 0.0f, 0x1.b6173cp-74f, 0.0f, 0x1.1965dep-9f,
     0x1.fd881p-98f, 0x1.a3003cp-3f, 0x1.2fd354p-46f, 0x1p0f, 0x1.74393p-26f,
     0x1.1d8p-67f, 0x1.57a4ap-5f, 0.0f, 0x1.7b7928p-80f, 0.0f, 0.0f, 0x1.885218p-51f,
     0.0f, 0x1.252804p-117f, 0x1.38d25ep-64f, 0x1.cdbcb6p-83f, 0x1.cd1e08p-89f, 0.0f,
     0x1.dd83a4p-120f, 0x1.09c4f4p-34f, 0x1.6bd198p-98f, 0x1.bdf688p-14f,
     0x1.9a725cp-19f, 0x1.211412p-30f, 0x1.16ec44p-66f, 0.0f, 0.0f, 0x1.320c8p-102f,
     0x1.3b04e8p-120f, 0x1.0e467ep-82f, 0x1.7660f2p-58f, 0x1.2dfa12p-67f,
     0x1.549402p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d7faap-60f, 0x1.fded22p-115f,
     0x1.7e7e1p-117f, 0.0f, 0.0f, 0x1.98794ep-87f, 0.0f, 0.0f, 0.0f, 0x1.85be68p-15f,
     0x1.6d42d6p-81f, 0.0f, 0x1.ba123ap-105f, 0.0f, 0x1.b02266p-98f, 0x1.92cfdp-118f,
     0.0f, 0x1.d2a3c4p-126f, 0.0f, 0.0f, 0x1.4f2574p-93f, 0x1.b20efp-10f,
     0x1.8366d4p-84f, 0x1.db9898p-54f, 0x1.f5d2fep-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.496922p-108f, 0x1.72111cp-45f, 0x1.500fa4p-97f, 0.0f, 0x1.c61674p-71f, 0.0f,
     0.0f, 0.0f, 0x1.ad5c44p-48f, 0x1.b5f574p-93f, 0x1.9d0d4ap-93f, 0x1.9a83d8p-50f,
     0.0f, 0x1.2d4c04p-80f, 0.0f, 0x1.64e572p-99f, 0.0f, 0.0f, 0x1.b3ab1ep-119f,
     0x1.86646ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a21b72p-50f, 0x1.f5fc4cp-69f,
     0x1.f1cf4p-69f, 0x1.e70684p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb03f6p-78f,
     0.0f, 0.0f, 0.0f, 0x1.037a5ap-67f, 0x1.61e59ep-74f, 0x1.0b1fc2p-88f,
     0x1.95b544p-49f, 0x1.786eaep-3f, 0.0f, 0.0f, 0x1.f1cfacp-110f, 0.0f, 0.0f,
     0x1.fc2b9cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acacf8p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26a29ap-27f, 0x1.e680f4p-12f, 0.0f, 0x1.b3c4fp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2c76ap-100f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_atanf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_atanf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_atanf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
