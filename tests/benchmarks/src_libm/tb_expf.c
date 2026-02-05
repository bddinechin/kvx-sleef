/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_expf.c --function expf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.863856p-103f, 0.0f,
     0x1.27e106p-43f, 0.0f, 0.0f, 0x1.d3066ep-105f, 0x1.0c4a54p-60f, 0.0f,
     0x1.0f9798p-58f, 0.0f, 0x1.22a9a4p-14f, 0x1.06f96ep-80f, 0.0f, 0.0f,
     0x1.8405eep-56f, 0x1.35597ap-16f, 0.0f, 0.0f, 0.0f, 0x1.3f837ep-51f,
     0x1.4f0edcp-48f, 0.0f, 0.0f, 0x1.8b14a2p-9f, 0.0f, 0x1.cb818ap-6f, 0.0f, 0.0f,
     0x1.2210e6p-19f, 0.0f, 0x1.fc0462p-98f, 0x1.09d80ap-112f, 0.0f, 0x1.37f4aep-72f,
     0.0f, 0x1.1b1782p-36f, 0.0f, 0x1.29ed4ep-56f, 0.0f, 0.0f, 0x1.2d437cp-110f, 0.0f,
     0.0f, 0x1.c58e2cp-102f, 0x1.7212b2p-67f, 0x1.bd4f9p-115f, 0x1.180546p-40f,
     0x1.fd9bfp-87f, 0x1.21f248p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28fee4p-60f,
     0x1.f4fe8cp-7f, 0.0f, 0x1.ae2b2ap-18f, 0.0f, 0.0f, 0x1.5f395cp-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.05e462p-106f, 0x1.310826p-7f, 0x1.dd0f62p-71f, 0.0f,
     0x1.9e1ca2p-88f, 0.0f, 0x1.e2e018p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d59584p-92f,
     0.0f, 0x1.c196eep-31f, 0x1.b46b46p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e8b56p-55f,
     0x1.a2b3a6p-9f, 0x1.cdd09ap-86f, 0.0f, 0x1.e14e7cp-105f, 0x1.d41bdep-41f,
     0x1.f77a42p-45f, 0x1.733b22p-114f, 0x1.fc0e98p-121f, 0.0f, 0x1.a199cp-105f,
     0x1.12607cp-50f, 0.0f, 0x1.f8d3e8p-38f, 0x1.80a472p-112f, 0x1.c14c3ap-47f, 0.0f,
     0x1.b66304p-87f, 0x1.1944dap-123f, 0x1.0db3e2p-15f, 0.0f, 0x1.107bcap-117f, 0.0f,
     0.0f, 0x1.3cdad2p-115f, 0x1.3a75f6p-78f, 0.0f, 0.0f, 0x1p0f, 0x1.e2d3ecp-116f,
     0.0f, 0.0f, 0x1.910608p-69f, 0.0f, 0x1.90350cp-106f, 0.0f, 0.0f, 0x1.6ef5a6p-36f,
     0x1.addaacp-8f, 0x1.683922p-27f, 0.0f, 0.0f, 0x1.044f68p-63f, 0x1.654238p-109f,
     0.0f, 0x1.0fd5b8p-3f, 0.0f, 0x1.8337d2p-68f, 0.0f, 0.0f, 0.0f, 0x1.4ddddp-1f,
     0.0f, 0x1.35c782p-35f, 0.0f, 0x1.80cdc6p-42f, 0.0f, 0x1.fef22p-54f, 0.0f, 0.0f,
     0.0f, 0x1.99caf4p-26f, 0x1.bd4c46p-98f, 0x1.c2510cp-28f, 0.0f, 0x1.06bddp-50f,
     0x1.f54dd6p-36f, 0.0f, 0x1.9b73cep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa12c2p-20f, 0.0f, 0x1.b6550ep-93f, 0.0f, 0x1.94c938p-17f, 0.0f, 0.0f,
     0x1.4d478p-93f, 0x1.5e4294p-22f, 0.0f, 0.0f, 0x1.8bf85p-91f, 0x1.253a28p-46f,
     0.0f, 0x1.2f8bdcp-32f, 0x1.0ebc7ep-97f, 0x1.d8826ep-10f, 0x1.a56a22p-14f,
     0x1.91a4bep-88f, 0.0f, 0.0f, 0x1.98eb5p-41f, 0.0f, 0x1.a2ead6p-14f, 0.0f,
     0x1.3ca3dp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2af61cp-90f,
     0x1.d19b5ep-85f, 0x1.51fd98p-26f, 0x1.492088p-43f, 0x1.781a34p-114f, 0.0f, 0.0f,
     0.0f, 0x1.29fd64p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e4a42p-10f, 0.0f,
     0x1.099328p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2b2ap-112f,
     0x1.4e383p-68f, 0.0f, 0x1.6ed536p-22f, 0x1.8b4b32p-124f, 0x1.b3da54p-7f, 0.0f,
     0x1.6b7278p-52f, 0.0f, 0x1.8565dep-67f, 0x1.f5c13cp-16f, 0x1.48a5dep-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e7792p-87f,
     0x1.074e54p-116f, 0.0f, 0.0f, 0x1.127132p-77f, 0x1.108764p-31f, 0x1.1c30f4p-92f,
     0.0f, 0x1.044c2p-42f, 0x1.c0c60cp-40f, 0x1.ec937p-15f, 0x1.f246fcp-71f,
     0x1.3129cp-30f, 0.0f, 0.0f, 0x1.ccc502p-25f, 0.0f, 0.0f, 0x1.838e18p-26f, 0.0f,
     0.0f, 0.0f, 0x1.7d8a12p-82f, 0x1.33e25cp-8f, 0.0f, 0.0f, 0x1.e8c7f2p-115f, 0.0f,
     0.0f, 0.0f, 0x1.99c06ep-57f, 0x1.4d3134p-99f, 0.0f, 0x1.a6571ap-53f,
     0x1.b5802ap-96f, 0x1.cb86eep-125f, 0.0f, 0.0f, 0x1.935feep-64f, 0x1.e99c46p-20f,
     0x1.57aa2p-4f, 0x1.d052cp-85f, 0.0f, 0x1.e72aacp-106f, 0.0f, 0.0f,
     0x1.3300c2p-21f, 0.0f, 0x1.bd4a68p-68f, 0x1.2d51cep-117f, 0.0f, 0x1.2d050ap-21f,
     0x1.9d5d1cp-5f, 0.0f, 0x1.ea57aap-55f, 0.0f, 0.0f, 0x1.b6a24ep-32f, 0.0f, 0.0f,
     0x1.fa0cbap-98f, 0.0f, 0.0f, 0x1.5b97dp-123f, 0x1.9a864p-96f, 0x1.c33b3p-21f,
     0x1.2eaa1ap-61f, 0x1.f5031ap-15f, 0.0f, 0x1.448e0ep-22f, 0x1.e58fdp-70f,
     0x1.3f4cc8p-72f, 0.0f, 0.0f, 0x1.4dbae6p-115f, 0.0f, 0.0f, 0x1.496406p-68f, 0.0f,
     0x1.fbae8p-102f, 0x1.cb9c6cp-63f, 0.0f, 0.0f, 0x1.5a0e0ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.f07d02p-107f, 0.0f, 0.0f, 0x1.0c832ep-76f, 0x1.b46afp-94f, 0.0f,
     0x1.2509acp-27f, 0x1.a1713ep-109f, 0.0f, 0x1.ebde64p-13f, 0.0f, 0x1.a9461ap-90f,
     0x1.353a8ap-56f, 0x1.0c59b6p-27f, 0x1.19da62p-1f, 0x1.ac41f4p-36f,
     0x1.3743cp-48f, 0.0f, 0.0f, 0.0f, 0x1.cad722p-13f, 0x1.0f4ee8p-23f,
     0x1.60614p-51f, 0x1.53b22p-6f, 0x1.f0233ap-35f, 0.0f, 0.0f, 0.0f,
     0x1.0bdb28p-82f, 0x1.f1fcf8p-40f, 0.0f, 0x1.366724p-121f, 0x1.5f6388p-49f, 0.0f,
     0x1.eefeeep-74f, 0.0f, 0x1.77c916p-83f, 0x1.19c636p-94f, 0.0f, 0.0f,
     0x1.0930d6p-14f, 0.0f, 0.0f, 0x1.28862ap-78f, 0x1.b9e74p-20f, 0.0f,
     0x1.25ebcp-68f, 0.0f, 0.0f, 0.0f, 0x1.de6b92p-89f, 0.0f, 0x1.3f3446p-53f,
     0x1.9abdccp-72f, 0x1.05e996p-81f, 0x1.685c16p-104f, 0x1.80834ap-103f,
     0x1.2ead1cp-108f, 0x1.4aea56p-45f, 0.0f, 0x1.c96a5p-110f, 0.0f, 0.0f,
     0x1.219c24p-62f, 0.0f, 0.0f, 0x1.4056aap-33f, 0x1.00434cp-69f, 0.0f, 0.0f,
     0x1.bb70f8p-84f, 0.0f, 0x1.6921fp-40f, 0.0f, 0x1.51b27cp-62f, 0x1.441d54p-80f,
     0x1.322472p-96f, 0x1.49619p-43f, 0x1.4439dap-7f, 0.0f, 0x1.7e474p-30f,
     0x1.01fac8p-61f, 0x1.cfa052p-36f, 0x1.2a1fa4p-62f, 0.0f, 0x1.f4499ap-48f, 0.0f,
     0.0f, 0x1.9e4732p-11f, 0x1.0e5534p-26f, 0x1.c9f0aep-40f, 0.0f, 0.0f,
     0x1.512a44p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1a4b4p-2f, 0.0f, 0x1.5e0f24p-50f,
     0x1.aff6c2p-124f, 0.0f, 0x1.fe5c9p-53f, 0x1.9da7b6p-125f, 0x1.b707a6p-23f,
     0x1.bef94p-20f, 0x1p0f, 0.0f, 0x1.6d8466p-101f, 0.0f, 0x1.8b29aep-45f,
     0x1.670b86p-84f, 0.0f, 0x1.27ff9p-90f, 0.0f, 0x1.592592p-82f, 0x1.28ba4ap-84f,
     0x1.a6ae06p-28f, 0x1.9f5e5p-14f, 0.0f, 0x1.a8386ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.11e62p-3f, 0.0f, 0x1.8d64dap-6f, 0x1.78fbbp-9f, 0x1.702d48p-118f,
     0x1.6ca7e2p-108f, 0x1.ad41c8p-120f, 0.0f, 0x1.da90dap-12f, 0x1.64a778p-120f,
     0.0f, 0.0f, 0x1.953b3cp-123f, 0.0f, 0.0f, 0.0f, 0x1.11dd74p-56f, 0x1.910c86p-66f,
     0.0f, 0x1.d64e32p-25f, 0.0f, 0x1.a4f0b6p-15f, 0x1.0eb378p-8f, 0x1.0e2c44p-109f,
     0.0f, 0x1.2cd4c4p-12f, 0x1.faa7eap-13f, 0x1.0cd848p-97f, 0x1.3741a6p-49f, 0.0f,
     0.0f, 0x1.eaa218p-31f, 0x1.f3438ap-118f, 0x1.7b3782p-69f, 0x1.ca8e1ap-31f,
     0x1.1f7f06p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3219cp-106f, 0.0f, 0x1.470b0cp-21f,
     0x1.e758c8p-41f, 0x1.ac193cp-3f, 0x1.04340ep-84f, 0x1.a78b5ap-52f, 0.0f, 0.0f,
     0x1.171204p-39f, 0x1.b01bb8p-29f, 0x1.ccf14ap-19f, 0x1.d28818p-65f,
     0x1.bb3906p-85f, 0.0f, 0.0f, 0x1.6abb94p-56f, 0x1.bd4dp-79f, 0.0f,
     0x1.e9e768p-52f, 0.0f, 0x1.ae8c74p-93f, 0.0f, 0x1.4c4654p-106f, 0.0f,
     0x1.7a453cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a0d8ap-74f, 0x1.a1614ap-115f,
     0.0f, 0.0f, 0.0f, 0x1.a81adcp-109f, 0.0f, 0.0f, 0x1.47fe0ep-19f, 0x1.78d64ep-54f,
     0x1.09a54ep-108f, 0.0f, 0.0f, 0x1.7e86e6p-116f, 0x1.679ac8p-122f, 0.0f,
     0x1.03df02p-14f, 0x1.698fdep-114f, 0.0f, 0.0f, 0x1.4a03bcp-105f, 0x1.9931c6p-79f,
     0x1.f56c24p-1f, 0.0f, 0x1.f79aeap-83f, 0x1.a021d2p-107f, 0x1.bb7906p-113f, 0.0f,
     0.0f, 0x1.da9266p-61f, 0x1.3395f2p-72f, 0.0f, 0x1.4c74c2p-52f, 0x1.6f3d22p-100f,
     0.0f, 0.0f, 0x1.dda7a2p-54f, 0.0f, 0.0f, 0x1.82daf4p-84f, 0.0f, 0x1.04c0bp-97f,
     0x1.a7c3b8p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.757a6cp-92f, 0.0f,
     0x1.5e36fap-38f, 0x1.83f3dep-83f, 0.0f, 0x1.9ea828p-91f, 0.0f, 0x1.d4a33ep-93f,
     0x1.b32356p-48f, 0.0f, 0.0f, 0.0f, 0x1.ed263ep-10f, 0.0f, 0x1.ed380ap-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9a636p-25f, 0x1.e3ae16p-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cec2f6p-118f, 0x1.922a6p-109f, 0.0f, 0.0f, 0x1.0ef03cp-31f,
     0x1.375ce2p-119f, 0x1.db2d7ep-123f, 0x1.3f7afcp-60f, 0.0f, 0x1.59bd44p-49f,
     0x1.36a20ap-63f, 0.0f, 0x1.834cecp-93f, 0x1.467518p-113f, 0.0f, 0x1.84f9ep-27f,
     0.0f, 0.0f, 0x1.24dc2p-50f, 0.0f, 0x1.e4c346p-6f, 0x1.6ef6d6p-86f,
     0x1.847fbap-67f, 0.0f, 0.0f, 0.0f, 0x1.940fdep-42f, 0x1.f5093ap-6f,
     0x1.987ffap-99f, 0x1.df2238p-64f, 0.0f, 0x1.7331a6p-9f, 0.0f, 0.0f,
     0x1.301adap-80f, 0.0f, 0.0f, 0x1.b8c7fp-31f, 0x1.f8da06p-76f, 0.0f,
     0x1.756c72p-51f, 0x1.5ae15ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9817f4p-38f,
     0x1.b08322p-68f, 0.0f, 0x1.c718cp-61f, 0x1.16e502p-35f, 0.0f, 0.0f,
     0x1.c264bep-42f, 0x1.822426p-49f, 0.0f, 0x1.7b8fc8p-6f, 0.0f, 0x1.921d52p-95f,
     0.0f, 0.0f, 0x1.5a7ef4p-103f, 0x1.93a328p-36f, 0.0f, 0x1.eb6d26p-3f, 0.0f, 0.0f,
     0x1.e2c9c4p-21f, 0.0f, 0x1.d1dff6p-102f, 0.0f, 0.0f, 0.0f, 0x1.c9fbc8p-115f,
     0x1.f3bc46p-68f, 0.0f, 0x1.54d4e6p-16f, 0.0f, 0.0f, 0.0f, 0x1.494594p-79f, 0.0f,
     0.0f, 0x1.3d2afap-40f, 0x1.48612cp-88f, 0.0f, 0.0f, 0.0f, 0x1.0b324ep-123f, 0.0f,
     0.0f, 0x1.077b2p-15f, 0.0f, 0.0f, 0x1.843002p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a38ea2p-4f, 0x1.846a94p-50f, 0x1.09ccbcp-52f, 0x1.9581ccp-71f, 0.0f, 0.0f,
     0x1.0e1992p-43f, 0.0f, 0x1.cf476ep-108f, 0.0f, 0x1.2f612cp-99f, 0x1.4320dp-112f,
     0x1.0ee1dep-71f, 0x1.a1da56p-73f, 0x1.15826cp-31f, 0x1.dd5448p-27f, 0.0f,
     0x1.16b45cp-114f, 0.0f, 0x1.66bdccp-10f, 0.0f, 0x1.256d18p-124f, 0x1.a9ef0cp-23f,
     0x1.a1fbfap-38f, 0.0f, 0.0f, 0x1.77c7c4p-119f, 0x1.aea1cap-17f, 0.0f, 0.0f, 0.0f,
     0x1.3d8512p-20f, 0.0f, 0x1.ddf142p-108f, 0x1.a0834p-104f, 0x1.77bc4p-63f, 0.0f,
     0.0f, 0x1.0d63c8p-77f, 0.0f, 0x1.cb6bbcp-116f, 0.0f, 0x1.7b3ae4p-24f, 0.0f,
     0x1.a2275ep-28f, 0x1.3c2a52p-126f, 0x1.dcb684p-57f, 0x1.eee9ccp-122f,
     0x1.c2f60ap-105f, 0x1.436c3cp-33f, 0.0f, 0.0f, 0x1.6c9b84p-36f, 0.0f, 0.0f, 0.0f,
     0x1.8c8384p-5f, 0.0f, 0x1.3e26fcp-109f, 0.0f, 0x1.cca368p-82f, 0x1.9e93bcp-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.947012p-56f, 0x1.cd402p-113f, 0x1.285498p-97f, 0.0f,
     0x1.229d48p-104f, 0.0f, 0x1.9684cap-122f, 0x1.4fa5f2p-33f, 0.0f, 0.0f,
     0x1.12ecb8p-47f, 0x1.4577bp-66f, 0.0f, 0.0f, 0x1.1dfba8p-84f, 0.0f,
     0x1.60ac64p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3afe7ep-31f, 0.0f, 0.0f,
     0x1.47cd08p-6f, 0.0f, 0x1.9f483p-4f, 0x1.b9e46cp-61f, 0x1.b48fe2p-67f, 0.0f,
     0x1.c7f05ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.731126p-68f, 0x1.cd1bfp-66f, 0.0f, 0x1.bd98a8p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7b3bcap-91f, 0.0f, 0.0f, 0x1.624f3cp-81f, 0.0f, 0x1.7d176p-52f, 0.0f,
     0.0f, 0.0f, 0x1.19ed54p-125f, 0.0f, 0x1.8b9caep-55f, 0x1.6ae8p-37f,
     0x1.0a4fe8p-113f, 0x1.550caep-79f, 0x1.f80596p-25f, 0.0f, 0.0f, 0x1.6373dap-109f,
     0x1.37d2e2p-81f, 0.0f, 0x1.601496p-25f, 0x1.0c3522p-68f, 0.0f, 0x1.c63a1cp-21f,
     0x1.cf3a4ep-50f, 0x1.3dccc8p-69f, 0.0f, 0x1.a558b4p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2adfbcp-42f, 0.0f, 0.0f, 0x1.313736p-54f, 0.0f, 0.0f, 0.0f, 0x1.8a2c32p-31f,
     0x1.93e174p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05151cp-76f, 0.0f,
     0x1.c5edd8p-57f, 0x1.f26ba6p-30f, 0x1.59466p-124f, 0x1.d5a7ecp-8f, 0.0f, 0.0f,
     0.0f, 0x1.797b4ep-52f, 0.0f, 0x1.7e05aap-104f, 0.0f, 0.0f, 0.0f, 0x1.aca23cp-64f,
     0x1.b92342p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59093ep-1f, 0.0f, 0.0f,
     0x1.550ceep-25f, 0x1.0b0e08p-105f, 0.0f, 0x1.37f346p-123f, 0.0f,
     0x1.df878cp-122f, 0.0f, 0x1.84e306p-27f, 0.0f, 0.0f, 0x1.a1ad1p-78f,
     0x1.4a0e9cp-86f, 0x1.dc8dc4p-80f, 0.0f, 0.0f, 0.0f, 0x1.95a34p-28f, 0.0f, 0.0f,
     0x1.cc6e4ep-78f, 0x1.69ae1p-76f, 0.0f, 0x1.c357e6p-34f, 0x1.6e0642p-125f,
     0x1.c563fcp-121f, 0x1.fc5714p-43f, 0.0f, 0x1.f35942p-7f, 0.0f, 0x1.ca3132p-102f,
     0.0f, 0x1.ff79f8p-121f, 0.0f, 0.0f, 0x1.37319p-5f, 0.0f, 0x1.284b3ep-15f,
     0x1.526da4p-37f, 0x1.dcd83ep-8f, 0x1.f8b2dcp-46f, 0x1.346a38p-45f, 0.0f, 0.0f,
     0x1.226b1p-72f, 0.0f, 0x1.ac6396p-74f, 0.0f, 0.0f, 0.0f, 0x1.1c676ap-33f,
     0x1.26315ep-119f, 0x1.980756p-33f, 0x1.717104p-78f, 0x1.bd992ap-19f,
     0x1.f16016p-33f, 0x1.859fa4p-92f, 0.0f, 0x1.664bb4p-58f, 0x1.e7b1f4p-54f, 0.0f,
     0.0f, 0.0f, 0x1.874acap-86f, 0x1.edcb62p-107f, 0.0f, 0x1.79ece2p-29f, 0.0f, 0.0f,
     0x1.1d20f2p-74f, 0.0f, 0x1.946b7p-29f, 0.0f, 0.0f, 0.0f, 0x1.718dcp-74f,
     0x1.25e55ep-106f, 0.0f, 0x1p0f, 0.0f, 0x1.8f35cep-3f, 0x1.0360a2p-106f,
     0x1.66fa2ep-84f, 0.0f, 0x1.0346c6p-60f, 0x1.33bcdcp-57f, 0x1.4daea8p-56f,
     0x1.6b8c32p-68f, 0x1.a1e7ap-32f, 0x1.1fe3a2p-45f, 0x1.31b2e6p-123f,
     0x1.11c9fap-116f, 0x1.f9f20ap-31f, 0x1.3348ecp-98f, 0x1.583a3p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7ce2ecp-28f, 0x1.7d02fap-3f, 0x1.f4d47ep-4f, 0.0f, 0.0f,
     0.0f, 0x1.414e9ep-61f, 0.0f, 0.0f, 0.0f, 0x1.128272p-124f, 0.0f, 0.0f
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
            tmp1 = expf(tmp0);
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
    printf("expf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("expf bench acc %a\n", global_bench_acc);
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
