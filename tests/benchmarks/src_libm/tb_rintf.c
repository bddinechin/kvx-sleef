/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_rintf.c --function rintf --headers math.h,ml_support_lib.h \
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
     0x1.aa8c92p-61f, 0.0f, 0x1.87da8p-98f, 0x1.d9c82ep-33f, 0x1.f41e66p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bd426p-63f, 0.0f, 0x1.e1b184p-25f,
     0x1.f84f08p-120f, 0x1.c00c04p-112f, 0x1.ebd68ap-58f, 0x1.e5dab8p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.effb62p-99f, 0x1.ec5f0cp-56f, 0x1.0f0deep-56f, 0x1.76edfp-47f,
     0x1.77b3ecp-99f, 0x1.a96002p-38f, 0x1.6a868ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58a138p-123f, 0.0f, 0.0f, 0x1.04835ap-28f, 0.0f, 0x1.d3e8d6p-62f, 0.0f,
     0x1.c5cc5ap-113f, 0x1.266ff8p-26f, 0x1.475d76p-29f, 0x1.541af4p-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.49be32p-77f, 0.0f, 0.0f, 0.0f, 0x1.258a06p-97f, 0.0f,
     0x1.d379b2p-25f, 0x1.daae96p-109f, 0x1.361cep-65f, 0x1.913b0ap-111f, 0.0f, 0.0f,
     0.0f, 0x1.d3070ep-95f, 0x1.00561p-52f, 0x1.7ca11cp-4f, 0x1.949436p-72f, 0.0f,
     0.0f, 0x1.3da09cp-70f, 0x1.92a258p-91f, 0x1.cdcd8ep-9f, 0.0f, 0.0f,
     0x1.bfbd9ap-10f, 0.0f, 0.0f, 0x1.3e9502p-5f, 0.0f, 0x1.c6f69ap-119f,
     0x1.b8295ep-5f, 0x1.77e7fcp-37f, 0x1.b368d4p-60f, 0.0f, 0.0f, 0x1.e0613ap-112f,
     0x1.aebed8p-78f, 0.0f, 0x1.09f7ecp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f28d08p-105f,
     0x1.ee95a2p-29f, 0x1.b72edap-16f, 0x1.97ad08p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6f608p-109f, 0x1.3d8a96p-90f, 0.0f, 0.0f, 0.0f, 0x1.052382p-34f,
     0x1.a2f186p-42f, 0x1.2fa02ap-35f, 0x1.e48b4p-25f, 0x1.93006cp-95f,
     0x1.84f7bp-55f, 0x1.058a92p-65f, 0.0f, 0.0f, 0x1.e0952ap-75f, 0x1.7b11ep-71f,
     0.0f, 0.0f, 0x1.c72c8p-53f, 0x1.d39ebcp-101f, 0x1.59e0d4p-92f, 0.0f,
     0x1.5e67e6p-104f, 0.0f, 0x1.105c76p-93f, 0x1.92e984p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.efd8e6p-56f, 0x1.1e44bcp-119f, 0.0f, 0x1.06738ap-114f,
     0x1.e9dedcp-11f, 0x1.180a48p-19f, 0.0f, 0.0f, 0x1.cb42ap-46f, 0x1.dd118ap-39f,
     0.0f, 0.0f, 0.0f, 0x1.662cdep-123f, 0x1.47db36p-77f, 0x1.6c548ap-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.beb492p-71f, 0x1p0f, 0.0f, 0.0f,
     0x1.d46cc4p-18f, 0.0f, 0.0f, 0.0f, 0x1.0d4ed8p-122f, 0.0f, 0.0f, 0.0f,
     0x1.b76ca2p-9f, 0.0f, 0.0f, 0x1.64c96p-96f, 0.0f, 0x1.78c314p-110f, 0.0f,
     0x1.f13058p-29f, 0x1.901c4p-60f, 0.0f, 0x1.bdc92p-97f, 0x1.3ef98cp-113f,
     0x1.0b77d6p-15f, 0x1.f5130cp-99f, 0.0f, 0x1.ff76fp-124f, 0.0f, 0x1.89e248p-95f,
     0.0f, 0.0f, 0x1.b9c788p-35f, 0.0f, 0.0f, 0x1.e1624ep-18f, 0x1.c36eb4p-87f, 0.0f,
     0x1.99f38ep-70f, 0.0f, 0x1.4f5da2p-29f, 0.0f, 0.0f, 0x1.72d16cp-5f, 0.0f, 0.0f,
     0.0f, 0x1.08b652p-94f, 0.0f, 0.0f, 0.0f, 0x1.3d92dep-105f, 0x1.0d483p-54f,
     0x1.37394p-108f, 0x1.c6d11p-79f, 0x1.2e4d42p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54d948p-49f, 0.0f, 0.0f, 0x1.63a2c8p-78f, 0.0f, 0x1.1ed2f2p-125f,
     0x1.e6bf64p-71f, 0x1.bc90bcp-119f, 0x1.f5c858p-104f, 0x1.3cf0acp-40f,
     0x1.b9eef2p-47f, 0.0f, 0x1.3f677p-92f, 0x1.1dcccep-78f, 0x1.9c0fa8p-39f,
     0x1.208714p-79f, 0x1.7dd8ecp-5f, 0x1.f78f58p-69f, 0.0f, 0.0f, 0.0f,
     0x1.81e8f2p-100f, 0.0f, 0x1.b3156ep-63f, 0.0f, 0x1.431b5cp-71f, 0.0f,
     0x1.69de34p-19f, 0x1.6fb3eep-65f, 0.0f, 0x1.879054p-91f, 0.0f, 0x1.c9076p-54f,
     0x1.4b77aep-117f, 0x1.daa116p-24f, 0.0f, 0x1.e3bb6p-55f, 0.0f, 0x1.3e3e5cp-13f,
     0.0f, 0.0f, 0x1.c00fdp-47f, 0.0f, 0x1.484d5p-2f, 0.0f, 0.0f, 0x1.7be68cp-83f,
     0.0f, 0.0f, 0.0f, 0x1.849294p-54f, 0x1.a005bap-53f, 0.0f, 0x1.496d68p-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ec750ep-75f, 0.0f, 0.0f, 0x1.e84276p-98f, 0x1.444d1p-36f,
     0x1.66808p-69f, 0.0f, 0.0f, 0.0f, 0x1.a258cap-54f, 0.0f, 0x1p0f, 0x1.dc62p-107f,
     0x1.09d442p-85f, 0.0f, 0.0f, 0x1.5c86aep-121f, 0.0f, 0.0f, 0x1.e88f7ep-89f, 0.0f,
     0x1.adf90ep-115f, 0.0f, 0x1.efdff2p-9f, 0.0f, 0x1.2b279ap-46f, 0.0f,
     0x1.3da706p-53f, 0x1.3c1422p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0950ecp-109f, 0.0f,
     0.0f, 0x1.a6a968p-39f, 0x1.dfb60ap-82f, 0.0f, 0.0f, 0x1.2d5eb2p-82f, 0.0f, 0.0f,
     0x1.ea173ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e4ccp-90f, 0.0f,
     0x1.49b674p-26f, 0.0f, 0.0f, 0x1.ec0ee4p-94f, 0x1.2abb62p-81f, 0.0f, 0.0f,
     0x1.4a7764p-87f, 0x1.08824ap-29f, 0x1.8f5752p-116f, 0x1.ec6e44p-62f, 0.0f, 0.0f,
     0x1.7cf376p-63f, 0.0f, 0.0f, 0.0f, 0x1.35eaaap-1f, 0.0f, 0x1.b2c616p-41f, 0.0f,
     0x1.dbafdp-27f, 0.0f, 0.0f, 0x1.ba8d1ep-125f, 0x1.2d0614p-39f, 0.0f,
     0x1.9af45p-66f, 0x1.a76152p-89f, 0.0f, 0x1.35b412p-5f, 0.0f, 0.0f, 0.0f,
     0x1.a89416p-18f, 0x1.d03c48p-75f, 0.0f, 0.0f, 0x1.12e114p-79f, 0.0f, 0.0f,
     0x1.209bp-98f, 0.0f, 0x1.ecddb8p-41f, 0.0f, 0.0f, 0x1.0d2922p-53f, 0.0f, 0.0f,
     0.0f, 0x1.04333p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.044e08p-100f,
     0x1.215c3p-31f, 0.0f, 0x1.80c718p-119f, 0x1.390d62p-13f, 0x1.6ba0e4p-48f,
     0x1.6935e6p-15f, 0.0f, 0.0f, 0.0f, 0x1.d25686p-60f, 0x1.580ccp-14f,
     0x1.b2276cp-32f, 0.0f, 0x1.155976p-65f, 0.0f, 0x1.eb36e4p-50f, 0.0f,
     0x1.a0be4p-95f, 0.0f, 0.0f, 0x1.8d4b1ap-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb2ba2p-2f, 0.0f, 0.0f, 0.0f, 0x1.58b2f6p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a03ed2p-52f, 0x1.ac106p-105f, 0x1.2774d4p-5f, 0x1.996c44p-81f, 0.0f, 0.0f,
     0x1.613d3ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb26f6p-62f, 0.0f, 0.0f, 0.0f,
     0x1.64d554p-117f, 0.0f, 0.0f, 0x1.856f36p-17f, 0.0f, 0.0f, 0.0f,
     0x1.7801b4p-102f, 0x1p0f, 0.0f, 0.0f, 0x1.706558p-87f, 0x1.48b938p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.976deap-37f, 0.0f, 0x1.33fc32p-85f,
     0.0f, 0.0f, 0x1.bbc0a4p-85f, 0.0f, 0x1.4952bp-17f, 0x1.0a3ccp-27f, 0.0f,
     0x1.ca60c4p-24f, 0x1.e4895ap-26f, 0.0f, 0x1.7157a6p-41f, 0x1.ee1f18p-112f,
     0x1.4b416ap-92f, 0x1.ed3066p-56f, 0x1.1e425cp-58f, 0.0f, 0.0f, 0x1.d7686p-27f,
     0.0f, 0x1.0f7286p-77f, 0x1.98003ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09e76ap-54f, 0x1.752becp-52f, 0x1.fe0c82p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c2b5c4p-90f, 0.0f, 0x1.73c5eep-97f, 0.0f, 0x1.37191cp-27f, 0.0f, 0.0f,
     0x1.f7c53ap-95f, 0x1.e9b00cp-34f, 0x1.c35a6ap-117f, 0.0f, 0x1.a2ecc4p-124f, 0.0f,
     0x1.ea139ep-83f, 0.0f, 0x1.b0abep-83f, 0x1.e3aecep-105f, 0.0f, 0.0f,
     0x1.04fa8ap-106f, 0x1.08194p-47f, 0x1.d90678p-10f, 0.0f, 0.0f, 0x1.c88b3cp-56f,
     0.0f, 0.0f, 0.0f, 0x1.5dfa5cp-121f, 0.0f, 0x1.526cbep-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.471476p-49f, 0x1.1b1834p-116f, 0x1.9c4a48p-19f,
     0x1.29d14ep-44f, 0x1.f4213cp-91f, 0x1.0bdc0cp-113f, 0x1.9af9bcp-104f,
     0x1.00e162p-59f, 0.0f, 0x1.d4c8e6p-97f, 0.0f, 0x1.9ae89cp-23f, 0.0f, 0.0f,
     0x1.647ff2p-124f, 0.0f, 0x1.f95dbap-19f, 0.0f, 0.0f, 0.0f, 0x1.59fd88p-92f, 0.0f,
     0x1.0a8bdcp-120f, 0x1.ac6788p-79f, 0x1.f40d8ap-110f, 0.0f, 0x1.2e3a78p-38f,
     0x1.e4ea92p-24f, 0x1.72155cp-19f, 0x1.431fc6p-39f, 0.0f, 0x1.5d9442p-104f, 0.0f,
     0x1.058916p-2f, 0x1.52af36p-92f, 0x1.8929d8p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db8dccp-57f, 0x1.c2e622p-29f, 0x1.c054fp-19f, 0.0f, 0.0f, 0x1.a02838p-87f,
     0.0f, 0.0f, 0x1.941fdep-29f, 0.0f, 0x1.38ea24p-59f, 0.0f, 0.0f, 0x1.a0a5a2p-95f,
     0x1.e9c7a4p-97f, 0x1.22c10ep-84f, 0x1.64326cp-81f, 0.0f, 0x1.9c75aep-110f, 0.0f,
     0.0f, 0x1.a2a1cap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9445bcp-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c40ff4p-40f, 0.0f, 0x1.e5d944p-120f, 0.0f, 0x1.631672p-46f,
     0x1.334fbcp-18f, 0x1.46dd6ap-24f, 0x1.edacaep-101f, 0x1.5f56fp-48f,
     0x1.700f4ep-39f, 0x1.1c8ce2p-73f, 0.0f, 0.0f, 0x1.a1439p-55f, 0.0f,
     0x1.eac5cep-103f, 0.0f, 0.0f, 0.0f, 0x1.117668p-122f, 0.0f, 0.0f,
     0x1.0dab6ap-101f, 0.0f, 0x1.d1c93p-52f, 0.0f, 0.0f, 0x1.370acp-107f,
     0x1.6cdc16p-7f, 0.0f, 0.0f, 0x1.ad12d8p-54f, 0.0f, 0.0f, 0x1.66d78ap-5f,
     0x1.17f1d6p-76f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fdb7ep-112f,
     0x1.212b7ap-20f, 0x1.1247bcp-53f, 0.0f, 0x1.ecfdbap-11f, 0.0f, 0.0f, 0.0f,
     0x1.0c08dap-4f, 0.0f, 0x1.7aeedp-61f, 0x1.6148a4p-43f, 0.0f, 0.0f,
     0x1.373e9p-32f, 0x1.3ae9ap-106f, 0.0f, 0.0f, 0x1.b28802p-111f, 0.0f, 0.0f, 0.0f,
     0x1.7c0714p-100f, 0.0f, 0.0f, 0x1.5739e4p-35f, 0x1.0c5d72p-113f, 0.0f,
     0x1.d34d2cp-85f, 0.0f, 0.0f, 0x1.3a5dd8p-93f, 0x1.b9a8e2p-96f, 0x1.1589cap-80f,
     0x1.c21a66p-111f, 0.0f, 0x1.215712p-69f, 0x1.3e6688p-81f, 0x1.3830fcp-43f,
     0x1.d181e2p-86f, 0x1.34960cp-28f, 0x1.dac0f2p-13f, 0x1.df18d6p-21f,
     0x1.c11794p-69f, 0x1.e227acp-61f, 0x1.bb5728p-9f, 0.0f, 0x1.d02ddap-13f,
     0x1.3274p-16f, 0x1.62ce7ep-24f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df9104p-58f, 0x1.232202p-106f, 0.0f, 0x1.44f9cp-9f, 0x1.008306p-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e2bc8p-7f, 0.0f, 0.0f, 0x1.13cadp-62f, 0.0f,
     0x1.54657cp-6f, 0x1.c97f4ap-46f, 0x1.be4c6p-4f, 0.0f, 0x1.49839cp-10f,
     0x1.b04498p-20f, 0.0f, 0.0f, 0x1.3f9fb2p-9f, 0.0f, 0.0f, 0.0f, 0x1.c38da6p-56f,
     0x1.7988ecp-25f, 0x1.1b9094p-44f, 0.0f, 0x1.39e82ep-76f, 0x1.a0bf04p-32f,
     0x1.9af2ccp-27f, 0.0f, 0.0f, 0x1.2b1cbcp-113f, 0x1.d58308p-28f, 0.0f,
     0x1.1b0b9ep-41f, 0x1.f8236ep-86f, 0.0f, 0x1.639498p-7f, 0x1.171bbp-35f,
     0x1.0553eap-80f, 0x1.1e2bacp-35f, 0.0f, 0.0f, 0x1.a72bdep-78f, 0x1.cb8178p-111f,
     0.0f, 0x1.c7e476p-107f, 0.0f, 0x1.a8546p-101f, 0x1.19fee6p-6f, 0.0f,
     0x1.71e9dcp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1708ecp-99f, 0x1.dfbc7cp-15f,
     0x1.a9b966p-24f, 0.0f, 0x1.fdd888p-15f, 0x1.ec06e2p-79f, 0x1.cb5c7ap-98f,
     0x1.5aa502p-79f, 0x1.4bed68p-7f, 0.0f, 0x1.9596d6p-58f, 0.0f, 0x1.a377fep-30f,
     0x1.597206p-56f, 0x1.f6bdeap-25f, 0x1.bd9a78p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.877ae4p-48f, 0x1.801b24p-46f, 0x1.084dd2p-89f, 0.0f, 0x1.a1aca4p-94f, 0.0f,
     0x1.89339cp-77f, 0x1.6cbc9cp-107f, 0x1.0a84eap-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c5c06p-121f, 0.0f, 0x1.b005fep-92f, 0x1.409f8cp-71f, 0.0f, 0.0f,
     0x1.6aba64p-111f, 0x1.6a953cp-117f, 0x1.86172ep-51f, 0x1.d9a35ep-85f, 0.0f,
     0x1.c387d4p-63f, 0.0f, 0.0f, 0.0f, 0x1.660aa8p-117f, 0x1.8bd678p-103f, 0.0f,
     0.0f, 0x1.31b4a6p-6f, 0x1.97801ap-77f, 0x1.9955f2p-60f, 0x1.b3922cp-63f,
     0x1.22a57ep-45f, 0x1.5795a4p-8f, 0x1.77d83cp-11f, 0x1.82db52p-2f, 0.0f,
     0x1.18051ap-5f, 0.0f, 0x1.f0531p-66f, 0x1.b75288p-81f, 0.0f, 0x1.0985a8p-93f,
     0x1.99bec4p-50f, 0.0f, 0x1.994b9ap-13f, 0x1.cbe3cp-107f, 0x1.62864ep-108f, 0.0f,
     0x1.40ed56p-56f, 0.0f, 0.0f, 0x1.90832ap-45f, 0x1.1dbd58p-10f, 0x1.2bf3fp-126f,
     0.0f, 0x1.8492p-47f, 0x1.f0f5bap-124f, 0x1.aa6828p-46f, 0x1.0d17e4p-13f, 0.0f,
     0.0f, 0.0f, 0x1.24f062p-40f, 0.0f, 0.0f, 0x1.873a0ep-49f, 0x1.87336ep-47f,
     0x1.fed81p-2f, 0.0f, 0.0f, 0.0f, 0x1.ce3b56p-91f, 0x1.39cfa4p-82f,
     0x1.ce3c0ep-87f, 0x1.5b2f72p-37f, 0.0f, 0.0f, 0x1.2abe9ap-100f, 0.0f,
     0x1.fae766p-123f, 0.0f, 0.0f, 0.0f, 0x1.567d72p-94f, 0x1.23497cp-16f,
     0x1.98475p-46f, 0.0f, 0.0f, 0x1.06f908p-63f, 0.0f, 0x1.3eaf2ap-12f,
     0x1.247a42p-53f, 0.0f, 0x1.48828p-99f, 0.0f, 0x1.372aacp-65f, 0.0f, 0.0f, 0.0f,
     0x1.6ae5fcp-28f, 0x1.e714b6p-46f, 0x1.fda494p-89f, 0x1.08024ep-33f, 0.0f, 0.0f,
     0x1.87637cp-124f, 0x1.2aaafcp-95f, 0.0f, 0.0f, 0x1.77aedp-38f, 0x1.563a5cp-111f,
     0.0f, 0.0f, 0.0f, 0x1.a66ccep-70f, 0.0f, 0x1.69d3bcp-112f, 0.0f,
     0x1.d651eep-103f, 0x1.e41736p-117f, 0x1.9f6096p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a1024p-67f, 0x1.30883p-108f, 0x1.37626ap-103f, 0.0f, 0x1.e826cep-90f, 0.0f,
     0x1.b8d518p-22f, 0.0f, 0x1.e8e02ep-30f, 0x1.89b182p-110f, 0x1.254b42p-27f,
     0x1.121368p-32f, 0x1.61aeb2p-73f, 0.0f, 0x1.4ca4eap-111f, 0.0f, 0.0f,
     0x1.ea0372p-75f, 0x1.d56f4p-22f, 0.0f, 0.0f, 0x1.802c4ap-7f, 0.0f,
     0x1.c2a5b2p-35f, 0x1.16657p-121f, 0x1.7be2fcp-64f, 0.0f, 0x1.d6e518p-49f, 0.0f,
     0x1.2eda7ap-22f, 0x1.a7958ap-49f, 0x1.84ed08p-50f, 0x1.c20746p-34f,
     0x1.cb6eep-91f, 0x1.85a03cp-89f, 0.0f, 0x1.3110b4p-99f, 0.0f, 0.0f,
     0x1.c8c59cp-119f, 0.0f, 0x1.5bb06p-94f, 0.0f, 0.0f, 0.0f, 0x1.33a646p-18f, 0.0f,
     0.0f, 0x1.31d762p-8f, 0.0f, 0.0f, 0x1.5d259cp-38f, 0.0f, 0.0f, 0x1.9a69eap-121f,
     0x1.cc20b8p-108f, 0.0f, 0x1.9e3b2ap-102f, 0x1.a37e4ap-57f, 0.0f, 0.0f,
     0x1.c4bee8p-117f, 0x1.5c6932p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34fb1ep-55f,
     0x1.d6834p-17f, 0x1.f47832p-38f, 0x1.cf74c8p-17f, 0.0f, 0x1.09812ep-6f, 0.0f,
     0x1.b2ef7p-71f, 0.0f, 0x1.25bf46p-101f, 0x1.4a316ep-121f, 0x1.454394p-31f, 0.0f,
     0.0f, 0.0f, 0x1.2a048ep-17f, 0.0f, 0x1.559192p-74f, 0x1.929342p-5f, 0.0f, 0.0f
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
            tmp1 = rintf(tmp0);
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
    printf("rintf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("rintf bench acc %a\n", global_bench_acc);
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
