/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f4_u35kvx.c --function \
 *     Sleef_finz_log2f4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.e5192p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.439ebep-122f, 0.0f,
     0x1.c3e212p-66f, 0x1.ea836cp-126f, 0x1.df2f6ep-90f, 0x1.76398cp-43f,
     0x1.6a427ap-73f, 0.0f, 0x1.ecea86p-18f, 0x1.957ab4p-39f, 0.0f, 0.0f,
     0x1.2a63a2p-118f, 0.0f, 0.0f, 0.0f, 0x1.6d221ep-60f, 0x1.ba7ed4p-80f, 0.0f, 0.0f,
     0.0f, 0x1.2c715cp-1f, 0.0f, 0.0f, 0.0f, 0x1.11a5ap-116f, 0x1.9fba7cp-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6ad652p-108f, 0x1.6aac34p-81f, 0x1.b5efdp-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c08246p-77f, 0.0f, 0x1.30217ap-115f, 0.0f, 0.0f, 0.0f,
     0x1.f4a764p-94f, 0x1.6da81p-13f, 0.0f, 0.0f, 0.0f, 0x1.af794p-68f, 0.0f, 0.0f,
     0.0f, 0x1.d24874p-73f, 0.0f, 0.0f, 0x1.4c4582p-97f, 0x1.c63ffcp-85f,
     0x1.ad4622p-10f, 0x1.1f968ap-102f, 0x1.b30a3ap-29f, 0.0f, 0.0f, 0x1.6769fap-45f,
     0x1.70ad76p-36f, 0x1.50b722p-70f, 0.0f, 0x1.0d06a4p-11f, 0.0f, 0x1.21307ep-89f,
     0x1.cf668ap-74f, 0x1.b4a4fcp-44f, 0x1.e2dd86p-80f, 0x1.4a4b4ap-54f,
     0x1.807006p-55f, 0.0f, 0x1.331512p-65f, 0x1.127c1p-93f, 0x1.17627cp-39f,
     0x1.8d43e8p-10f, 0x1.129c26p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b30754p-95f, 0x1.8b8518p-82f, 0.0f, 0x1.0fef5ep-79f, 0x1.8f07f4p-86f,
     0x1.9017bap-125f, 0x1.4633e8p-20f, 0.0f, 0x1.68528cp-90f, 0x1.16aeb2p-40f,
     0x1.75ef68p-77f, 0.0f, 0.0f, 0x1.8a3fc6p-68f, 0x1.21a7p-19f, 0.0f,
     0x1.87dc34p-110f, 0.0f, 0x1.e0ba48p-66f, 0x1.578f24p-22f, 0x1.262d4p-123f, 0.0f,
     0x1.355e66p-18f, 0x1.dde872p-104f, 0.0f, 0.0f, 0x1.292fcp-41f, 0x1.617308p-102f,
     0x1.432a82p-69f, 0x1.3e1906p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e34ap-101f, 0x1.38be56p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bca55p-74f,
     0x1.2fa8dcp-110f, 0x1.5ae5b8p-70f, 0x1.626ap-77f, 0.0f, 0x1.fdb04cp-69f, 0.0f,
     0x1.b36282p-95f, 0x1.2a9f52p-48f, 0x1.bc19e2p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c047p-42f, 0x1.bf4982p-38f, 0.0f, 0x1.bf4144p-104f, 0x1.497b82p-119f,
     0x1p0f, 0x1.b18c36p-85f, 0x1.dd5a6p-124f, 0x1.993cdep-73f, 0.0f, 0.0f, 0.0f,
     0x1.e58da6p-116f, 0x1.21541p-80f, 0x1.ec6c3ap-59f, 0.0f, 0x1.fae798p-89f,
     0x1.ed70cap-66f, 0x1.8ee022p-39f, 0x1.75afdep-51f, 0.0f, 0x1.a82ccp-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3af236p-88f, 0.0f, 0x1.c067aep-68f, 0.0f, 0x1.afe632p-113f,
     0.0f, 0x1.66ce88p-113f, 0x1.9e55fap-27f, 0.0f, 0x1.45b69ep-33f, 0x1.bd9e0ep-97f,
     0.0f, 0.0f, 0x1.27e0bap-108f, 0x1.fbeee8p-8f, 0x1.7b7784p-19f, 0x1.a09f28p-56f,
     0x1.7a015p-84f, 0x1.b920e8p-111f, 0x1.9ed45p-97f, 0x1.eef91ep-125f,
     0x1.6ccedap-74f, 0x1.99b19cp-53f, 0.0f, 0x1.f45386p-122f, 0x1.bf4e64p-119f, 0.0f,
     0.0f, 0x1.e75f66p-118f, 0x1.1009bep-75f, 0x1.945e18p-67f, 0.0f, 0x1.7fcdap-24f,
     0x1.9dd78ep-115f, 0x1.a38a84p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa23f2p-34f,
     0x1.cf0926p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c39e4p-58f, 0x1.411e5p-7f,
     0.0f, 0.0f, 0x1.919dd8p-47f, 0.0f, 0.0f, 0.0f, 0x1.e7e212p-26f, 0.0f,
     0x1.204964p-59f, 0x1.253fecp-34f, 0x1.ab51b2p-79f, 0x1.52eebcp-66f, 0.0f,
     0x1.9b999p-66f, 0x1.6f98d4p-20f, 0x1.a28b5ep-70f, 0x1.e6c80ep-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.be54b6p-67f, 0.0f, 0x1.1a4b94p-26f, 0.0f, 0.0f,
     0x1.682d04p-88f, 0.0f, 0x1.a7cddcp-52f, 0x1.91e4a6p-124f, 0.0f, 0.0f,
     0x1.dcc84ap-27f, 0x1.f1fc5cp-101f, 0.0f, 0x1.49d12p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.196d44p-11f, 0x1.66f47ep-84f, 0x1.76301cp-91f,
     0.0f, 0x1.cdc722p-10f, 0.0f, 0x1.4f14e8p-6f, 0x1.2841c6p-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4ce2p-23f, 0x1.fb8f9ap-97f, 0.0f, 0x1.f28fbep-113f, 0.0f, 0.0f,
     0.0f, 0x1.88a322p-82f, 0.0f, 0.0f, 0x1.cdc382p-97f, 0x1.e2c592p-28f, 0.0f,
     0x1.ac1518p-51f, 0.0f, 0.0f, 0x1.58f49ap-62f, 0x1.670956p-7f, 0x1.a85e96p-46f,
     0x1.1469ep-24f, 0x1.dd4264p-45f, 0.0f, 0x1.1db35ep-108f, 0x1.9a675ep-43f,
     0x1.593b56p-41f, 0x1.ac8a3ap-14f, 0x1.b3c9e6p-49f, 0x1.466a14p-52f,
     0x1.bc21ap-102f, 0x1.63aa5ap-92f, 0.0f, 0.0f, 0.0f, 0x1.e02b5cp-43f,
     0x1.89c282p-111f, 0x1.3a7068p-22f, 0x1.35ea4ap-60f, 0.0f, 0x1.71074ep-51f, 0.0f,
     0.0f, 0x1.66044ap-96f, 0x1.da6218p-111f, 0x1p0f, 0.0f, 0x1.5149f6p-69f,
     0x1.cd6604p-87f, 0.0f, 0x1.7c4f6ep-72f, 0.0f, 0.0f, 0x1.53ffccp-68f, 0.0f,
     0x1.d10d62p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5e62cp-97f, 0x1.aeab86p-93f, 0.0f,
     0x1.fb0c16p-72f, 0.0f, 0x1.d21a2ap-65f, 0.0f, 0x1.0d6ab2p-69f, 0x1.9497e2p-58f,
     0.0f, 0x1.3c7e38p-79f, 0.0f, 0.0f, 0.0f, 0x1.f761bcp-38f, 0x1.2ea956p-110f,
     0x1.350592p-39f, 0.0f, 0x1.3087ecp-2f, 0x1.f831a8p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.01a72ap-115f, 0x1.cbdce2p-1f, 0x1.a3ca38p-33f, 0.0f, 0x1.e688c4p-100f,
     0x1.f84b68p-75f, 0x1.015e22p-121f, 0.0f, 0x1.b1c4dap-21f, 0x1.fbe874p-41f,
     0x1.93689ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31aa36p-95f, 0x1.aee2p-33f,
     0x1.ab76b6p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3cf35ap-61f, 0x1.62dfp-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f6ef2p-14f, 0x1.9729p-120f, 0.0f, 0.0f, 0.0f,
     0x1.a50a6cp-97f, 0x1.37ec44p-96f, 0x1.cb7ap-38f, 0x1.f054fcp-85f,
     0x1.64fd3ep-40f, 0x1.9760a2p-79f, 0x1.56c832p-98f, 0x1.6d14b4p-60f, 0.0f,
     0x1.c3e4fep-63f, 0x1.7cafc6p-56f, 0x1.d93b02p-69f, 0x1.446b2ep-103f,
     0x1.dcc32cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8cd64ep-83f, 0x1.52483ap-122f, 0.0f,
     0x1.a4af56p-2f, 0.0f, 0.0f, 0x1.7da01ep-88f, 0.0f, 0x1.04747ep-24f, 0.0f, 0.0f,
     0.0f, 0x1.ac4d36p-103f, 0x1.0dffdep-121f, 0.0f, 0.0f, 0.0f, 0x1.5925c4p-122f,
     0.0f, 0x1.b6108p-85f, 0x1.eaef4ep-77f, 0x1.4e3bb8p-70f, 0.0f, 0.0f,
     0x1.cfb52p-72f, 0.0f, 0x1.e3f24ep-95f, 0.0f, 0x1.923d5ap-21f, 0x1.e4f744p-116f,
     0.0f, 0x1.c0349ap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ee5d6p-42f,
     0x1.5843dp-68f, 0.0f, 0.0f, 0x1.6b30bcp-79f, 0.0f, 0.0f, 0x1.0af7acp-51f, 0.0f,
     0.0f, 0x1.13086ep-110f, 0x1.2f5902p-43f, 0x1.808f8p-18f, 0x1.6637f6p-86f, 0.0f,
     0x1.121edap-108f, 0x1.9c4b02p-43f, 0.0f, 0.0f, 0x1.21ae5ap-78f, 0x1.b3778ap-113f,
     0x1.151704p-63f, 0x1.c5101cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef2fe4p-64f, 0x1.146d5ep-96f, 0x1.44a1d2p-122f, 0.0f, 0x1.6be5dap-112f, 0.0f,
     0x1.30e0ecp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c705ep-72f, 0x1.e7059cp-67f,
     0x1.ad7ca2p-52f, 0x1.4f5736p-95f, 0x1.fb352ap-62f, 0x1.61f5ecp-50f,
     0x1.f25e2p-99f, 0.0f, 0.0f, 0x1.329d7ep-66f, 0.0f, 0x1.0e962cp-8f,
     0x1.f364d2p-84f, 0x1.a2e27ep-66f, 0.0f, 0.0f, 0x1.a6c31ap-125f, 0.0f, 0.0f,
     0x1.207742p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cc122p-17f, 0.0f,
     0.0f, 0x1.520cacp-49f, 0x1.00c304p-121f, 0x1.b90c62p-32f, 0.0f, 0x1.c2d926p-7f,
     0.0f, 0.0f, 0.0f, 0x1.c39b9ap-10f, 0.0f, 0x1.59d61ep-62f, 0.0f, 0x1.d6e8fp-5f,
     0x1.8cb41cp-104f, 0x1.2dc31ep-51f, 0x1.8b3afap-115f, 0x1.ba662p-72f,
     0x1.bc6684p-22f, 0x1.542828p-19f, 0.0f, 0.0f, 0.0f, 0x1.b739ccp-47f, 0.0f, 0.0f,
     0x1.f781dep-19f, 0x1.a1c4fp-110f, 0.0f, 0.0f, 0.0f, 0x1.ea15b4p-101f, 0.0f, 0.0f,
     0x1.5d6c74p-124f, 0x1.aa6874p-126f, 0x1.21e984p-54f, 0x1.b9ec24p-109f, 0.0f,
     0.0f, 0.0f, 0x1.e588a6p-76f, 0x1.cf907p-23f, 0x1.35f08ap-121f, 0.0f,
     0x1.31bdep-101f, 0x1.842b54p-48f, 0x1.c9dce6p-110f, 0.0f, 0.0f, 0x1.60d81cp-76f,
     0x1.993ad8p-25f, 0.0f, 0.0f, 0x1.f3fbbap-63f, 0x1.b571c8p-80f, 0.0f,
     0x1.a83abep-104f, 0.0f, 0.0f, 0.0f, 0x1.70a9cep-53f, 0x1.7f7a86p-114f, 0.0f,
     0x1.a19c0ep-77f, 0x1.98e712p-124f, 0.0f, 0.0f, 0.0f, 0x1.132af2p-48f,
     0x1.584cc4p-6f, 0x1.3a54bep-104f, 0.0f, 0.0f, 0x1.19f8f4p-65f, 0.0f,
     0x1.73e04cp-103f, 0.0f, 0x1.c70da6p-39f, 0x1.092bdcp-68f, 0x1.8c871ap-37f, 0.0f,
     0x1.9f85bp-69f, 0x1.873014p-95f, 0x1.36d232p-31f, 0.0f, 0x1.1636c4p-42f,
     0x1.b3d5e4p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a52ac4p-2f, 0x1.78dff8p-44f,
     0x1.70a21ep-46f, 0x1.8eb7d2p-40f, 0x1.1ccda6p-99f, 0x1.4e0b12p-81f,
     0x1.a8add8p-108f, 0x1.8c5b7ap-113f, 0x1.8271fep-34f, 0x1.57af28p-91f,
     0x1.995c2p-61f, 0.0f, 0x1.94694ep-111f, 0.0f, 0x1.cc271ep-44f, 0x1.5eb448p-21f,
     0x1.bc6e0cp-96f, 0x1.1b1416p-51f, 0.0f, 0.0f, 0x1.8fec7p-119f, 0.0f,
     0x1.1c83bp-60f, 0.0f, 0.0f, 0.0f, 0x1.353aacp-70f, 0x1.b87afep-112f,
     0x1.3601d2p-52f, 0.0f, 0.0f, 0.0f, 0x1.e1964ep-52f, 0.0f, 0x1.087538p-89f, 0.0f,
     0.0f, 0x1.f1f70ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.945d7ap-106f, 0x1.6fadp-37f, 0.0f, 0.0f, 0x1.323114p-53f, 0x1.e313e6p-36f,
     0x1.13c18cp-16f, 0x1.5b662ep-98f, 0x1.ed794p-20f, 0.0f, 0x1.da6a8ap-95f,
     0x1.0b9136p-106f, 0x1.50386ep-7f, 0x1.d9ad6cp-98f, 0x1.0e7148p-41f, 0.0f, 0.0f,
     0x1.17b14cp-40f, 0x1.2db59p-77f, 0x1.f853dcp-100f, 0.0f, 0.0f, 0.0f,
     0x1.e9d35cp-4f, 0x1.6fc812p-50f, 0x1.0c6edp-3f, 0x1.4d9f5ep-92f, 0.0f,
     0x1.2f7b0ap-4f, 0.0f, 0x1.e5bef2p-14f, 0x1.8ab7dep-76f, 0.0f, 0.0f,
     0x1.c55f1ep-66f, 0x1.2c968cp-125f, 0x1.c69cd2p-124f, 0x1.5d74aap-75f, 0.0f,
     0x1.74efdp-118f, 0x1.45dd84p-102f, 0x1.8adda4p-1f, 0x1.3ea6dcp-126f,
     0x1.7d7c26p-45f, 0x1.bb4dccp-23f, 0x1.fc97fcp-3f, 0.0f, 0x1.18c4ecp-34f, 0.0f,
     0.0f, 0.0f, 0x1.aaa8f6p-95f, 0x1.206f06p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.598a4cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcaec8p-9f, 0.0f, 0.0f, 0.0f,
     0x1.e0d80ap-93f, 0.0f, 0x1.e28476p-97f, 0x1.f377bep-42f, 0x1.b6c69ep-77f,
     0x1.07511p-126f, 0.0f, 0x1.f465acp-2f, 0.0f, 0x1.d6958cp-93f, 0x1.51bb1ep-19f,
     0x1.13a168p-44f, 0x1.0e90bp-86f, 0x1.8f80cap-98f, 0x1.9d1eacp-77f,
     0x1.e4343ep-90f, 0.0f, 0.0f, 0x1.c4c14cp-21f, 0x1.331f7ap-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b83458p-28f, 0x1.b3e672p-12f, 0x1.313e7p-39f, 0x1.d3aa78p-46f, 0.0f,
     0x1.560704p-73f, 0x1.6dee72p-89f, 0.0f, 0x1.a169bp-61f, 0.0f, 0.0f,
     0x1.604f48p-89f, 0x1.6ecdc8p-110f, 0.0f, 0.0f, 0x1.c32a36p-63f, 0x1.a607aap-84f,
     0x1.2b2408p-105f, 0x1.8db0bcp-89f, 0x1.437a74p-14f, 0.0f, 0x1.0b92f2p-46f,
     0x1.5b8df2p-30f, 0x1.4fb4fep-27f, 0x1.d6ce94p-103f, 0.0f, 0.0f, 0x1.fca9dp-29f,
     0x1.b5feb2p-69f, 0.0f, 0.0f, 0.0f, 0x1.bd345cp-100f, 0.0f, 0x1.f9b6acp-48f, 0.0f,
     0x1.7243b8p-81f, 0x1.9e26bep-3f, 0x1.d4f0bep-59f, 0.0f, 0.0f, 0x1.8ecda6p-26f,
     0.0f, 0.0f, 0.0f, 0x1.423b0cp-24f, 0x1.f21724p-103f, 0.0f, 0x1.bc157p-121f,
     0x1.aa69c4p-88f, 0.0f, 0x1.f38bdcp-24f, 0x1.2d1b5cp-27f, 0x1.5c1decp-33f,
     0x1.c1c8b2p-87f, 0x1.994224p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.967aa2p-99f,
     0x1.d651ap-44f, 0x1.01b1fp-8f, 0x1.5578p-32f, 0x1.1efcfep-19f, 0.0f,
     0x1.41d546p-111f, 0x1.1e69e4p-90f, 0x1.e6c576p-112f, 0x1.3e9ea6p-15f,
     0x1.cc5376p-108f, 0.0f, 0x1.3780ccp-61f, 0x1.02048ap-87f, 0x1.56ea5cp-53f, 0.0f,
     0.0f, 0x1.71049ep-95f, 0.0f, 0.0f, 0x1.531082p-38f, 0.0f, 0.0f, 0.0f,
     0x1.65b968p-47f, 0x1.7f7c6ep-2f, 0.0f, 0x1.6c1acap-121f, 0.0f, 0x1.1bc796p-113f,
     0.0f, 0.0f, 0x1.5474e6p-107f, 0x1.32332cp-86f, 0.0f, 0x1.3c8f36p-52f,
     0x1.8cb14p-3f, 0.0f, 0x1p0f, 0x1.179936p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e75d4p-2f, 0.0f, 0.0f, 0x1.b2fc92p-43f, 0x1.122f7p-123f, 0x1.e6dae4p-42f,
     0.0f, 0x1.ac499ap-30f, 0x1.031bbp-4f, 0x1.1768d4p-21f, 0.0f, 0x1.2b1a1p-116f,
     0x1.7d8a44p-121f, 0.0f, 0x1.b5f4d4p-4f, 0.0f, 0x1.e14372p-72f, 0.0f, 0.0f,
     0x1.a1b05ap-5f, 0x1.fdf8fcp-54f, 0.0f, 0x1.482ab4p-14f, 0.0f, 0.0f, 0.0f,
     0x1.648d48p-71f, 0.0f, 0.0f, 0.0f, 0x1.89dd26p-59f, 0x1.a8e81ep-119f, 0.0f, 0.0f,
     0.0f, 0x1.5efda6p-54f, 0x1.e878e8p-123f, 0x1.38cp-31f, 0x1.2c9886p-29f, 0.0f,
     0.0f, 0.0f, 0x1.8d454p-58f, 0x1.f39134p-110f, 0.0f, 0.0f, 0x1.d533aap-85f,
     0x1.88b8c4p-23f, 0.0f, 0x1.bbf1cp-9f, 0x1.eaa41ep-80f, 0x1.c0246cp-94f, 0.0f,
     0.0f, 0x1.f3f8b6p-124f, 0x1.0d683p-39f, 0x1.f22b9ep-122f, 0.0f, 0x1.2742aap-24f,
     0x1.879936p-17f, 0.0f, 0x1.20ecb2p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.912dc4p-31f,
     0.0f, 0.0f, 0.0f, 0x1.4f52f6p-69f, 0.0f, 0.0f, 0.0f, 0x1.6e31aep-18f,
     0x1.6fc868p-95f, 0.0f, 0.0f, 0x1.ccb50ap-44f, 0.0f, 0.0f, 0.0f, 0x1.9b56eap-23f,
     0.0f, 0.0f, 0x1.a40616p-11f, 0.0f, 0x1.5a55bcp-117f, 0.0f, 0.0f, 0x1.b7d7ecp-5f,
     0.0f, 0.0f, 0.0f, 0x1.dcb204p-17f, 0x1.02dc3cp-88f, 0x1.c67a36p-88f,
     0x1.e059cp-52f, 0.0f, 0x1.cbdbd4p-60f, 0x1.3138a2p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96da8p-23f, 0.0f, 0x1.0d1988p-59f,
     0x1.27cd24p-59f, 0x1.d26868p-122f, 0x1.60a3c6p-13f, 0x1.4895aep-35f, 0.0f,
     0x1.4ee498p-86f, 0x1.7183b4p-88f, 0x1.f06e4p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa2fb2p-73f, 0.0f, 0x1.e2c204p-91f, 0.0f, 0.0f, 0.0f, 0x1.47de2cp-74f,
     0x1.b6a474p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9d2e8p-71f, 0x1.a54162p-124f,
     0x1.7cf4ep-58f, 0.0f, 0x1.7d1eep-66f, 0.0f, 0.0f, 0x1.b3b278p-55f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_log2f4_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_log2f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log2f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
