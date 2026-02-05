/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmaf4_avx2128.c --function Sleef_finz_fmaf4_avx2128 \
 *     --arity 3 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32,binary32 --vector-size 4 \
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
     0.0f, 0.0f, 0.0f, 0x1.92d7a4p-67f, 0.0f, 0x1.2e11cep-87f, 0.0f, 0x1.0b2846p-75f,
     0.0f, 0x1.2c2612p-109f, 0.0f, 0x1.4a0e22p-78f, 0.0f, 0x1.1e72d4p-74f,
     0x1.ee2936p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74737ep-79f,
     0x1.9bea3ep-2f, 0x1.319c26p-6f, 0x1.6af572p-119f, 0x1.613802p-97f, 0.0f, 0.0f,
     0x1.536d5ap-48f, 0.0f, 0.0f, 0.0f, 0x1.081d62p-98f, 0x1.a2d1a2p-47f,
     0x1.b8b1aep-94f, 0.0f, 0.0f, 0x1.98125ap-45f, 0x1.7e6414p-112f, 0.0f,
     0x1.dbfbaep-47f, 0x1.51a0bcp-3f, 0.0f, 0x1.e72f72p-45f, 0.0f, 0.0f,
     0x1.35b392p-71f, 0.0f, 0x1.cd5d74p-69f, 0x1.e04f48p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.75e116p-118f, 0x1.d90c24p-118f, 0x1.47ed42p-20f, 0.0f, 0.0f, 0x1.932c5p-6f,
     0x1.e41f8p-80f, 0x1.f7b3b4p-48f, 0.0f, 0x1.790b84p-119f, 0.0f, 0.0f, 0.0f,
     0x1.c78a8p-103f, 0x1.3b0a04p-18f, 0x1.ec2a1ap-73f, 0x1.0e92f6p-112f,
     0x1.4f77c6p-84f, 0x1.8741b8p-9f, 0x1.f3de7ap-3f, 0x1.d33406p-69f,
     0x1.38a43cp-78f, 0x1.65368ap-59f, 0.0f, 0x1.36a1a6p-116f, 0x1.68063ep-36f, 0.0f,
     0x1.a6a376p-38f, 0x1.5f7656p-3f, 0x1.452de6p-116f, 0x1.4935bep-32f, 0.0f,
     0x1.051da2p-6f, 0x1.2fc11ep-61f, 0.0f, 0x1.b1231ep-80f, 0x1.c43c9cp-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.889712p-2f, 0.0f, 0.0f, 0.0f,
     0x1.9fdc8ap-44f, 0x1.cfd804p-99f, 0.0f, 0.0f, 0x1.a2e602p-88f, 0.0f, 0.0f, 0.0f,
     0x1.93171cp-1f, 0x1.605f46p-10f, 0x1.db4d72p-17f, 0.0f, 0.0f, 0x1p0f,
     0x1.0e87c2p-114f, 0.0f, 0x1.2665ecp-38f, 0x1.a79bbcp-25f, 0x1.00ca34p-113f,
     0x1.76f7d4p-70f, 0x1.08ed2ap-88f, 0x1.e68ef2p-32f, 0x1.e3bf1ap-91f, 0.0f,
     0x1.388fcap-125f, 0.0f, 0.0f, 0x1.a624fep-75f, 0x1.da481cp-11f, 0x1.cceccap-39f,
     0x1.0fc2eap-69f, 0x1.435d1p-79f, 0.0f, 0x1.6f7a98p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bcbep-82f, 0.0f, 0.0f, 0x1.84c2bcp-7f,
     0.0f, 0x1.cbf8dcp-24f, 0x1.5817ccp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.33c5a8p-9f, 0x1.85604ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1c77cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d406ep-15f, 0x1.6098a8p-99f,
     0x1.e89a14p-52f, 0x1.7dea24p-29f, 0.0f, 0x1.c2db82p-90f, 0x1.0f0cc4p-55f, 0.0f,
     0.0f, 0x1.fb37bep-54f, 0x1.230514p-62f, 0.0f, 0x1.4fdde6p-34f, 0x1.e92b2cp-97f,
     0x1.9a0faep-47f, 0.0f, 0.0f, 0x1.0df758p-31f, 0.0f, 0.0f, 0x1.bcc022p-29f, 0.0f,
     0.0f, 0x1.62ff82p-101f, 0x1.1ff662p-85f, 0x1.6c096cp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.577f12p-47f, 0x1.6fc8dep-76f, 0x1.97ab78p-71f, 0x1.cd0e36p-6f,
     0x1.6f647cp-93f, 0x1.cbe95ep-60f, 0.0f, 0x1.d8362cp-38f, 0x1.5fda8p-126f, 0.0f,
     0x1.92381cp-29f, 0x1.bde7c2p-22f, 0.0f, 0x1.ac7418p-92f, 0x1.0f844cp-112f, 0.0f,
     0x1.99741cp-14f, 0.0f, 0.0f, 0x1.457e6cp-29f, 0.0f, 0.0f, 0.0f, 0x1.c7d142p-48f,
     0x1.ba6366p-84f, 0x1.216546p-59f, 0.0f, 0.0f, 0.0f, 0x1.07b774p-103f,
     0x1.52522cp-53f, 0.0f, 0x1.340c54p-24f, 0x1.b1c96ap-6f, 0x1.6cfa28p-94f,
     0x1.60c06ap-45f, 0x1.3d6beep-91f, 0.0f, 0x1.68d52ap-112f, 0x1.0ffc62p-112f,
     0x1.9afa54p-18f, 0.0f, 0x1.abd21ep-87f, 0.0f, 0x1.4893fcp-19f, 0x1.9f7518p-10f,
     0x1.5f26fp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59ffc4p-17f, 0x1.6801a6p-52f,
     0x1.26df62p-93f, 0.0f, 0x1.851b56p-107f, 0.0f, 0x1.26127ep-46f, 0.0f, 0.0f, 0.0f,
     0x1.f7d13ap-40f, 0x1.a7e58cp-59f, 0.0f, 0x1.749b8cp-85f, 0x1.2ea494p-61f,
     0x1.9f1994p-29f, 0.0f, 0x1.5dd994p-64f, 0.0f, 0.0f, 0x1.fc4cc6p-68f,
     0x1.294458p-62f, 0x1.cf0076p-91f, 0.0f, 0.0f, 0x1.39e5fap-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca7dfp-47f, 0x1.6d0424p-88f, 0.0f, 0x1.747da6p-73f,
     0x1.6f99eap-24f, 0x1.7a618ap-92f, 0x1.fc6f68p-112f, 0x1.adae06p-91f, 0.0f,
     0x1.bc3366p-116f, 0.0f, 0x1.e4522p-84f, 0.0f, 0.0f, 0.0f, 0x1.3d2b56p-18f,
     0x1p0f, 0x1.0405acp-88f, 0x1.5c395cp-112f, 0x1.ea80e8p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd099ap-117f, 0.0f, 0x1.17be96p-70f, 0x1.b7db48p-90f, 0.0f,
     0x1.b3e172p-99f, 0x1.98d7ep-117f, 0x1.e82efap-104f, 0x1.eb4abcp-95f, 0.0f, 0.0f,
     0.0f, 0x1.7b1512p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f60b8p-12f, 0.0f,
     0.0f, 0x1.51505p-97f, 0x1.61c7cap-21f, 0x1.63786p-53f, 0x1.d301c2p-108f, 0.0f,
     0x1.fe9562p-93f, 0.0f, 0x1.125e6p-5f, 0x1.83852ep-63f, 0.0f, 0x1.baf952p-24f,
     0.0f, 0.0f, 0x1.110cb2p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae4f7ep-28f,
     0x1.823a1cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac39c8p-73f, 0.0f, 0.0f, 0.0f,
     0x1.76d6p-87f, 0.0f, 0x1.cec392p-3f, 0x1.5744fp-12f, 0.0f, 0.0f, 0.0f,
     0x1.a9b666p-126f, 0.0f, 0x1.4bb03ep-17f, 0x1.826568p-47f, 0.0f, 0x1.3f65cep-23f,
     0x1.16b55cp-106f, 0x1.1d0a5p-91f, 0.0f, 0x1.e63962p-12f, 0.0f, 0.0f, 0.0f,
     0x1.195346p-86f, 0.0f, 0x1.e70faep-62f, 0x1.f6dc82p-14f, 0.0f, 0x1.f8ae9cp-121f,
     0.0f, 0x1.bf666p-27f, 0x1.6f3b66p-62f, 0x1.6ee8b6p-72f, 0x1.444d3ap-78f,
     0x1.9c252cp-64f, 0x1.e89bcap-100f, 0.0f, 0.0f, 0.0f, 0x1.92783p-74f, 0.0f, 0.0f,
     0x1.875a0ap-93f, 0x1.40d9cp-124f, 0x1.2e4882p-84f, 0x1.992dc8p-107f, 0.0f, 0.0f,
     0.0f, 0x1.e23596p-114f, 0.0f, 0x1.819882p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48b564p-35f, 0.0f, 0x1.0f486p-111f, 0x1.3a2122p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5ce59ap-113f, 0x1.1afb42p-122f, 0.0f, 0.0f, 0x1.85c74ap-42f,
     0x1.c39a18p-82f, 0x1.7ecd38p-7f, 0x1.a9d9fep-40f, 0.0f, 0x1.1a8ba2p-112f,
     0x1.63101p-4f, 0x1.174da8p-34f, 0.0f, 0x1.6c6deap-95f, 0x1.420c24p-61f, 0.0f,
     0.0f, 0x1.c74878p-82f, 0.0f, 0.0f, 0x1.f017e2p-68f, 0.0f, 0x1.fa596p-5f, 0.0f,
     0x1.7ad708p-45f, 0.0f, 0.0f, 0x1.8ab0d8p-53f, 0x1.4e1f62p-74f, 0.0f, 0.0f,
     0x1.4e42eep-124f, 0x1.d63dep-28f, 0.0f, 0x1.de087ep-48f, 0x1.0d5556p-77f, 0.0f,
     0x1.823118p-16f, 0x1.0db018p-5f, 0.0f, 0x1.8c0c3ap-17f, 0.0f, 0.0f,
     0x1.004c2cp-56f, 0.0f, 0.0f, 0x1.347f36p-98f, 0x1.ed0804p-84f, 0.0f,
     0x1.3907f6p-10f, 0x1.fedc0ep-96f, 0.0f, 0x1.f444a8p-14f, 0.0f, 0x1.2472f4p-47f,
     0x1.9002fap-10f, 0.0f, 0x1.b9cc42p-6f, 0.0f, 0.0f, 0x1.bc39fp-79f, 0.0f,
     0x1.1968c8p-95f, 0.0f, 0x1.f1e242p-123f, 0.0f, 0x1.b309ecp-56f, 0x1.c224a6p-95f,
     0.0f, 0.0f, 0x1.290e7ap-26f, 0x1.a2c93ep-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66c2bap-68f, 0.0f, 0.0f, 0x1.91f3a4p-88f, 0.0f, 0x1.979d5p-56f,
     0x1.3e5e24p-71f, 0.0f, 0x1.b20356p-23f, 0.0f, 0.0f, 0.0f, 0x1.bb26fp-73f,
     0x1.090cf8p-126f, 0.0f, 0.0f, 0x1.6d812ap-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e25ee8p-11f, 0.0f, 0x1.7146ecp-125f, 0x1.43a382p-77f, 0.0f, 0x1.ea0ba2p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86a6p-98f, 0x1.babe3cp-23f, 0.0f,
     0x1.10f778p-4f, 0.0f, 0.0f, 0x1.53a67ep-49f, 0x1.e6a1bap-8f, 0.0f,
     0x1.096324p-70f, 0.0f, 0x1.71d5fcp-35f, 0x1.c6e484p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3942b6p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fdc16p-89f, 0x1.1b7a46p-31f,
     0x1.10d54cp-100f, 0.0f, 0x1.1a8c9ep-108f, 0x1.3f895ap-126f, 0.0f, 0.0f,
     0x1.51b80ep-12f, 0.0f, 0x1.ef160ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fb09cp-32f, 0x1.792a8ep-119f, 0x1.61062ep-21f, 0.0f, 0x1.96c7fcp-126f,
     0x1.9986cap-104f, 0.0f, 0.0f, 0.0f, 0x1.20f7a6p-19f, 0x1.d1ba1p-56f, 0.0f, 0.0f,
     0x1.2556cap-123f, 0.0f, 0.0f, 0x1.b752bep-78f, 0x1.67d144p-15f, 0.0f, 0.0f,
     0x1.6df8d4p-54f, 0x1.b2d5bap-25f, 0x1.aa8fd4p-93f, 0.0f, 0x1.745a8p-81f,
     0x1.06029cp-88f, 0.0f, 0.0f, 0.0f, 0x1.1bfe82p-50f, 0.0f, 0x1.7a5398p-27f, 0.0f,
     0x1.59e708p-110f, 0x1.afdbecp-44f, 0.0f, 0x1.3539e6p-51f, 0.0f, 0x1.5c8d4ap-20f,
     0.0f, 0.0f, 0.0f, 0x1.6ddd62p-92f, 0.0f, 0x1.c3a04p-89f, 0x1.5ef88ap-49f,
     0x1.18e4a4p-30f, 0.0f, 0.0f, 0.0f, 0x1.4efa5ap-59f, 0x1.82fd82p-75f,
     0x1.f4bbd2p-83f, 0x1.6cf48p-25f, 0.0f, 0x1.5a4c5p-22f, 0.0f, 0x1.6fa44ap-4f,
     0x1.5f575ep-44f, 0.0f, 0x1.ef5b8ap-80f, 0x1.2f140ep-33f, 0x1.29b632p-59f, 0.0f,
     0x1.9d9aa2p-103f, 0x1.5dc882p-42f, 0x1.b74cb8p-125f, 0.0f, 0x1.2bb546p-119f,
     0x1.0aba1p-6f, 0x1.3b9a42p-44f, 0x1.3ec26ep-35f, 0x1.3b1198p-11f, 0.0f, 0.0f,
     0x1.71213cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0cc26p-60f, 0.0f, 0x1.2133ecp-111f,
     0x1.acb078p-45f, 0x1.bd44b6p-70f, 0x1.66c596p-102f, 0x1.b6cceap-51f, 0.0f, 0.0f,
     0x1.a6398ap-108f, 0x1.7541cap-76f, 0x1p0f, 0x1.bc5a92p-119f, 0.0f, 0.0f,
     0x1.a16bcp-16f, 0.0f, 0.0f, 0.0f, 0x1.5e8f08p-82f, 0x1.fc08aap-105f,
     0x1.50ec7ap-6f, 0.0f, 0x1.da002ap-55f, 0.0f, 0x1.60af6ep-50f, 0x1.06d19ep-27f,
     0x1.2ac306p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bff43ep-56f, 0.0f, 0x1.37e444p-34f,
     0.0f, 0x1.8b4314p-113f, 0x1.083336p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd145cp-96f,
     0x1.d645fp-36f, 0.0f, 0x1.f5c678p-26f, 0x1.8a38cp-67f, 0x1.38688ap-93f, 0.0f,
     0.0f, 0.0f, 0x1.c2fd82p-7f, 0.0f, 0x1.3dd0e6p-30f, 0.0f, 0.0f, 0x1.5e8634p-83f,
     0.0f, 0x1.8db7d2p-93f, 0.0f, 0.0f, 0x1.0061ecp-117f, 0x1.37a968p-98f,
     0x1.bc7eb6p-21f, 0.0f, 0x1.0b0ed6p-101f, 0.0f, 0x1.d2bc38p-34f, 0x1.6e7a9cp-90f,
     0x1.eecd84p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd52c2p-14f,
     0.0f, 0.0f, 0.0f, 0x1.4e7438p-109f, 0x1.6d4584p-88f, 0x1.3dfabcp-40f, 0.0f,
     0x1.6516e4p-117f, 0.0f, 0.0f, 0.0f, 0x1.bf7132p-73f, 0.0f, 0x1.c75872p-125f,
     0x1.b7814ep-16f, 0x1.435604p-69f, 0x1.269cp-12f, 0x1.8f96e4p-32f,
     0x1.f77df2p-61f, 0.0f, 0.0f, 0x1.8661d8p-48f, 0x1.2ba8bep-46f, 0x1.cc7806p-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4a3d4p-38f, 0.0f, 0x1.37644p-110f, 0.0f,
     0x1.4996ep-49f, 0x1.0639p-90f, 0.0f, 0x1.3d9cf6p-114f, 0x1.396c9cp-71f, 0.0f,
     0x1.c9add8p-116f, 0x1.21354cp-55f, 0.0f, 0x1.247c1ep-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.374b88p-57f, 0x1.83adb2p-52f, 0x1.0cce14p-43f, 0.0f,
     0x1.d25f18p-75f, 0.0f, 0.0f, 0.0f, 0x1.bc53eep-46f, 0.0f, 0x1.769b36p-119f, 0.0f,
     0x1.5049eep-52f, 0.0f, 0.0f, 0.0f, 0x1.b1669ap-40f, 0x1.7c6ccep-109f,
     0x1.5c9718p-24f, 0.0f, 0.0f, 0.0f, 0x1.aa790ap-57f, 0x1.95c3b2p-109f,
     0x1.44d442p-108f, 0x1.544b48p-11f, 0.0f, 0.0f, 0.0f, 0x1.33e408p-114f, 0.0f,
     0x1.9dfdd4p-11f, 0x1.3ea068p-105f, 0.0f, 0x1.3d6b8ep-27f, 0.0f, 0x1.b73942p-67f,
     0.0f, 0x1.21c316p-120f, 0.0f, 0x1.321ac4p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d7d15cp-34f, 0x1.12647cp-25f, 0x1.736aa6p-60f, 0.0f, 0.0f,
     0.0f, 0x1.7dcf04p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19737cp-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ea10bep-2f, 0.0f, 0x1.9ec0bp-111f, 0x1.2f9da6p-106f,
     0x1.044cf6p-84f, 0.0f, 0x1.1e942ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b040ap-40f, 0.0f, 0.0f, 0x1.ec63a4p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa5aep-49f, 0.0f, 0.0f, 0x1.e0f79ap-95f, 0.0f, 0.0f, 0x1.b06038p-58f,
     0x1.36246p-75f, 0.0f, 0.0f, 0x1.c40616p-41f, 0x1.31721cp-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.398112p-87f, 0.0f, 0x1.34d45p-99f, 0.0f, 0x1.a2a878p-107f,
     0x1.96a47ep-54f, 0x1.95a8cap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f171ep-81f, 0.0f, 0x1.793cf4p-114f, 0.0f, 0x1.cf87ep-67f, 0x1.7e8342p-121f,
     0x1.ce3cf4p-110f, 0x1.92d12ap-121f, 0.0f, 0x1.4b13p-88f, 0x1.2db3eap-42f,
     0x1.5dc7d6p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6087cp-37f, 0x1.39d756p-71f, 0.0f,
     0.0f, 0x1.f1cccap-70f, 0x1.f2d506p-35f, 0x1.894aa2p-1f, 0.0f, 0x1.e644fp-45f,
     0x1.b835fap-40f, 0x1.6a6ee2p-67f, 0.0f, 0.0f, 0x1.c554d6p-60f, 0x1.1507fcp-104f,
     0.0f, 0.0f, 0x1.97eb22p-69f, 0x1.08d50ap-1f, 0.0f, 0.0f, 0.0f, 0x1.1bb504p-50f,
     0.0f, 0x1.7b58b2p-122f, 0x1.e2c182p-111f, 0.0f, 0x1.07966cp-47f, 0.0f,
     0x1.33d144p-53f, 0.0f, 0.0f, 0x1.811056p-15f, 0x1.d4ef9ep-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bb9adcp-32f, 0.0f, 0x1.2c5176p-35f, 0.0f, 0x1.f70c7cp-74f, 0.0f,
     0x1.53855p-35f, 0x1.c4cf6cp-119f, 0.0f, 0x1.f66608p-105f, 0x1.c95032p-86f, 0.0f,
     0x1.9351acp-120f, 0.0f, 0x1.e44c9ep-119f, 0.0f, 0x1.f21b4ap-86f, 0.0f,
     0x1.589c68p-99f, 0x1.bb11ap-12f, 0.0f, 0.0f, 0.0f, 0x1.25361p-47f,
     0x1.23c10ep-100f, 0.0f, 0.0f, 0x1.c7d586p-11f, 0x1.b8ca2p-12f, 0.0f, 0.0f,
     0x1.105526p-87f, 0.0f, 0x1.7de1aep-76f, 0x1.db14f6p-85f, 0x1.bcde3cp-9f,
     0x1.a03e9ap-113f, 0x1.3d581ep-73f, 0.0f, 0.0f, 0.0f, 0x1.62030cp-76f, 0.0f,
     0x1.de98cp-75f, 0.0f, 0.0f, 0x1.3483ccp-6f, 0x1.dbdedep-122f, 0x1.912832p-97f,
     0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.f88a4ep-76f, 0x1.92e862p-67f, 0.0f, 0.0f, 0x1.2f6a76p-11f, 0.0f, 0.0f,
     0x1.243fdp-32f, 0x1.bf317cp-103f, 0.0f, 0x1.d136fcp-51f, 0.0f, 0x1.f25812p-36f,
     0.0f, 0x1.7a32bcp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6cc7cp-54f, 0x1.533bcap-18f,
     0x1.3fa1cap-99f, 0x1.6f59eap-51f, 0x1.024c3ap-100f, 0.0f, 0x1.4bfc2p-25f, 0.0f,
     0x1.13f612p-120f, 0x1.db51d8p-34f, 0x1.725eb6p-51f, 0x1.b462e8p-86f, 0.0f,
     0x1.d90e3cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da5134p-28f,
     0x1.15bab2p-9f, 0x1.64fb94p-15f, 0x1.988d76p-59f, 0x1.d6fad2p-89f,
     0x1.d1977p-74f, 0.0f, 0x1.c22f7p-47f, 0.0f, 0.0f, 0x1.faab7cp-27f,
     0x1.d145c2p-97f, 0x1.5bb87ep-26f, 0x1.860704p-103f, 0x1.ea1d22p-19f,
     0x1.11a50ep-89f, 0x1.58b5dcp-72f, 0.0f, 0x1.0853f8p-92f, 0x1.90ee2p-123f, 0.0f,
     0.0f, 0x1.b7f582p-1f, 0x1.67ea3ap-54f, 0.0f, 0x1.5d45b6p-119f, 0x1.c86612p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28c0e2p-49f, 0.0f, 0.0f,
     0x1.1a105ep-77f, 0x1.9e0288p-2f, 0x1.1e345ep-57f, 0x1.3c598cp-66f, 0.0f,
     0x1.cb09cep-77f, 0.0f, 0x1.ee7c2cp-101f, 0x1.05f9aap-8f, 0x1.ff963ep-48f,
     0x1.ee358p-79f, 0.0f, 0x1.26b556p-106f, 0x1.096802p-1f, 0x1.485d0ep-122f, 0.0f,
     0.0f, 0x1.65da9p-85f, 0x1.d037dep-16f, 0x1.2232d6p-45f, 0.0f, 0x1.f859cap-3f,
     0x1.8cbb22p-120f, 0x1.7723fp-106f, 0x1.6cb932p-55f, 0x1.f2da64p-61f,
     0x1.fdb44ep-12f, 0x1.4d7b3p-126f, 0x1.c1a1bp-102f, 0.0f, 0x1.35b5f2p-90f, 0.0f,
     0.0f, 0x1.62a3fcp-91f, 0x1.9fd926p-82f, 0.0f, 0x1.4e1b2cp-83f, 0.0f,
     0x1.fc04fep-62f, 0.0f, 0x1.eba35cp-117f, 0x1.b306a2p-20f, 0x1.e1de28p-25f,
     0x1.77815p-75f, 0.0f, 0x1.5120f4p-53f, 0.0f, 0x1.06382p-25f, 0.0f, 0.0f,
     0x1.98be2cp-122f, 0x1.655798p-9f, 0x1.6e189p-123f, 0x1.02f42ep-20f, 0.0f, 0.0f,
     0x1.ef4e1ap-24f, 0x1.b08962p-40f, 0x1.c74102p-58f, 0x1.8a81cp-28f,
     0x1.fc93b6p-123f, 0x1.07c1eap-7f, 0x1.0b3e2ep-119f, 0.0f, 0.0f, 0x1.c37e8cp-73f,
     0.0f, 0.0f, 0x1.829554p-78f, 0.0f, 0x1.5ea9fap-109f, 0x1.b1c6p-44f,
     0x1.d576cap-111f, 0x1.cf8d04p-113f, 0x1.ea4a52p-93f, 0.0f, 0x1.5386d6p-35f,
     0x1.45cadp-11f, 0.0f, 0x1.65e59cp-105f, 0.0f, 0.0f, 0x1.bfd3eep-96f,
     0x1.d0ba82p-91f, 0x1.451b3ap-68f, 0x1.a3af9ap-120f, 0.0f, 0x1.05ea08p-2f, 0.0f,
     0.0f, 0x1.c54424p-51f, 0x1.2ba1ecp-80f, 0.0f, 0x1.6d15ap-53f, 0x1.a5d29ep-94f,
     0x1.371ce4p-14f, 0x1p0f, 0.0f, 0x1.41925p-50f, 0x1.3a8e9ap-43f, 0x1.afea9p-52f,
     0x1.97022cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.975a42p-16f, 0x1.dc7f8ap-42f,
     0x1.7e525ap-94f, 0.0f, 0x1.a71244p-34f, 0.0f, 0x1.5aa01ep-94f, 0x1.348d18p-23f,
     0.0f, 0.0f, 0x1.efde96p-64f, 0.0f, 0.0f, 0.0f, 0x1.663b8ep-70f, 0x1.f0343cp-72f,
     0x1.e044bcp-109f, 0.0f, 0x1.ebdf4p-100f, 0x1.d56e42p-120f, 0x1.a25728p-106f,
     0.0f, 0x1.8c5f7p-125f, 0.0f, 0x1.ec787cp-45f, 0x1.e1d5e8p-80f, 0.0f,
     0x1.c6c6f4p-86f, 0x1.614336p-117f, 0.0f, 0x1.250e28p-1f, 0x1.e07bb2p-97f,
     0x1.3b9dfep-40f, 0x1.b90a4ap-48f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.fd3482p-53f, 0x1.ec3ac2p-61f, 0.0f, 0.0f, 0x1.3d5cfcp-78f, 0.0f,
     0x1.e02996p-49f, 0x1p0f, 0.0f, 0.0f, 0x1.869be4p-111f, 0.0f, 0x1.54cacep-33f,
     0.0f, 0x1.e6b824p-102f, 0.0f, 0x1.838b94p-95f, 0x1.7af37cp-66f, 0.0f,
     0x1.19ed3cp-36f, 0.0f, 0.0f, 0.0f, 0x1.952bcp-96f, 0.0f, 0x1.965604p-57f, 0.0f,
     0x1.930b52p-43f, 0.0f, 0x1.1c13bcp-103f, 0.0f, 0.0f, 0x1.1fb2b4p-24f, 0.0f, 0.0f,
     0x1.64ae94p-17f, 0x1.a29aaap-29f, 0.0f, 0x1.7efc0ep-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f526dp-9f, 0x1.fa1876p-10f, 0x1.72b7cp-33f, 0.0f, 0x1.fd8df8p-26f,
     0x1.87351p-54f, 0x1.48ed22p-60f, 0x1.09b3f6p-5f, 0x1.d864eap-19f,
     0x1.7a5b3ap-42f, 0.0f, 0.0f, 0x1.d76926p-72f, 0x1.f6d2dep-109f, 0.0f, 0.0f,
     0x1.c795fap-36f, 0x1.87d3dp-115f, 0x1.b5b98ep-1f, 0x1.31e0fep-84f,
     0x1.5c505cp-58f, 0.0f, 0x1.ddd32p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7787aap-82f,
     0.0f, 0x1.5dc92ep-97f, 0x1.0b4cap-113f, 0.0f, 0x1.6a332p-57f, 0.0f, 0.0f, 0.0f,
     0x1.752d0ap-53f, 0.0f, 0.0f, 0.0f, 0x1.e47ac6p-118f, 0x1.111ccap-20f,
     0x1.e7011ep-102f, 0.0f, 0x1.cc2c3cp-74f, 0x1.140bcap-81f, 0.0f, 0x1.4165ecp-35f,
     0.0f, 0x1p0f, 0x1.389026p-74f, 0x1.263806p-99f, 0x1.d0790cp-44f,
     0x1.b071a4p-120f, 0.0f, 0.0f, 0.0f, 0x1.95c3e2p-57f, 0.0f, 0.0f, 0x1.dbe084p-48f,
     0x1.69d7dp-7f, 0.0f, 0x1.887182p-112f, 0x1.1723ep-121f, 0.0f, 0x1.fddc54p-73f,
     0x1.02fc2cp-97f, 0x1.65c738p-20f, 0x1.6e1cf8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.595634p-79f, 0x1.485abcp-34f, 0.0f, 0.0f, 0x1.9dcc2p-110f,
     0x1.c48e52p-118f, 0x1.57ffe8p-99f, 0x1.b67324p-18f, 0x1.1f84a8p-96f, 0.0f, 0.0f,
     0.0f, 0x1.ca6d0ap-34f, 0x1.40af28p-81f, 0x1.3582eep-65f, 0x1.cc28c4p-107f,
     0x1.e0557ap-61f, 0.0f, 0.0f, 0x1.97ef58p-1f, 0.0f, 0x1.e61206p-40f,
     0x1.ece8e4p-90f, 0.0f, 0x1.02228p-17f, 0x1.aa4922p-45f, 0x1.c6d286p-22f, 0.0f,
     0x1.1c77acp-53f, 0.0f, 0x1.0b88fep-94f, 0.0f, 0x1.eabae6p-88f, 0.0f, 0.0f,
     0x1.281062p-77f, 0x1.08238p-94f, 0x1.dcda96p-7f, 0.0f, 0x1.6bb6cap-24f,
     0x1.4996dp-54f, 0x1.0f792p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efd6ep-6f, 0.0f,
     0x1.7fec84p-36f, 0x1.847e7cp-50f, 0x1.b9ba44p-103f, 0.0f, 0.0f, 0.0f,
     0x1.8e2f5ap-83f, 0x1.98a1a2p-81f, 0x1.7c47e8p-27f, 0.0f, 0.0f, 0x1.8383d2p-89f,
     0.0f, 0x1.345074p-8f, 0x1.9c9746p-80f, 0x1.44ee94p-38f, 0x1.25c66ep-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b71cap-91f, 0x1.1febd8p-96f, 0.0f, 0.0f,
     0x1.50e9fcp-100f, 0.0f, 0x1.7430cep-111f, 0.0f, 0.0f, 0.0f, 0x1.453edep-82f,
     0.0f, 0x1.1427dp-27f, 0x1.aeb618p-100f, 0.0f, 0x1.f16ebep-54f, 0x1.e0543ep-71f,
     0x1.9bfe42p-38f, 0x1.3b4dbep-70f, 0.0f, 0.0f, 0x1.6bd616p-54f, 0.0f,
     0x1.6c3dc4p-73f, 0.0f, 0x1p0f, 0x1.bf42acp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f48aep-29f, 0x1p0f, 0.0f, 0x1.45de2p-69f, 0x1.b5a1a4p-103f, 0.0f,
     0x1.726954p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6554b6p-94f, 0.0f, 0x1.684d68p-87f,
     0x1.f05b92p-85f, 0x1.38e07p-100f, 0.0f, 0x1.5e7c86p-117f, 0.0f, 0x1.60495p-19f,
     0x1.96e354p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ef136p-101f, 0x1.a07c18p-48f,
     0x1.cc62e6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd04d8p-82f, 0.0f,
     0x1.91113cp-107f, 0x1.228574p-85f, 0x1.fbbbf4p-33f, 0x1.dd7504p-27f,
     0x1.876126p-92f, 0.0f, 0x1.bc3556p-28f, 0x1.b1f18ap-1f, 0x1.646bfap-47f,
     0x1.3a3c44p-106f, 0x1.b339bap-19f, 0.0f, 0x1.2016dcp-15f, 0x1.5df572p-56f,
     0x1.402deep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eab9b8p-119f,
     0x1.423c0cp-108f, 0x1.6ad08cp-99f, 0.0f, 0x1.490324p-8f, 0x1.fdac9ap-48f, 0.0f,
     0.0f, 0.0f, 0x1.7d5ec6p-35f, 0x1.89d732p-122f, 0.0f, 0.0f, 0.0f, 0x1.d20e14p-93f,
     0x1.e1b604p-79f, 0x1.b7adb6p-81f, 0.0f, 0x1.722de4p-125f, 0x1.c7440ap-5f, 0.0f,
     0x1.37c26ep-85f, 0x1.98c43p-49f, 0.0f, 0.0f, 0x1.153cfep-37f, 0.0f, 0.0f,
     0x1.6ddbe6p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.566efp-9f, 0.0f, 0.0f,
     0x1.c3082cp-60f, 0x1.b757b4p-4f, 0.0f, 0.0f, 0x1.ad13ccp-80f, 0x1.3e2a1cp-77f,
     0x1.d44b78p-103f, 0.0f, 0x1.46f3b6p-107f, 0.0f, 0x1.33c0eep-40f,
     0x1.07f12cp-113f, 0x1.124212p-117f, 0.0f, 0.0f, 0x1.0864a2p-69f, 0.0f,
     0x1.bfa906p-43f, 0.0f, 0.0f, 0x1.85e982p-26f, 0.0f, 0x1.a3b4ecp-67f,
     0x1.b55728p-30f, 0.0f, 0.0f, 0x1.2ab19ep-34f, 0.0f, 0.0f, 0x1.846da6p-32f,
     0x1.d867ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bb68cp-14f, 0.0f, 0.0f, 0.0f,
     0x1.c441dep-76f, 0x1.36759p-41f, 0.0f, 0x1.670534p-25f, 0x1.60c56ap-21f,
     0x1.a22882p-27f, 0x1.18dbcap-46f, 0.0f, 0.0f, 0x1.cdab6ep-67f, 0x1.e2597ap-113f,
     0.0f, 0x1.c77426p-92f, 0x1.d65a66p-45f, 0.0f, 0x1.848cccp-7f, 0x1.3e89a2p-64f,
     0x1.d2ab4cp-28f, 0.0f, 0x1.9ab074p-83f, 0.0f, 0.0f, 0.0f, 0x1.63c4aep-83f, 0.0f,
     0x1.5148bep-36f, 0x1.2f2fp-41f, 0x1.1743d8p-72f, 0.0f, 0.0f, 0x1.08233ap-73f,
     0.0f, 0.0f, 0x1.2829fp-32f, 0.0f, 0.0f, 0x1.4b35bcp-72f, 0.0f, 0x1.a428f6p-58f,
     0.0f, 0.0f, 0.0f, 0x1.3cb428p-23f, 0.0f, 0x1.c8fc94p-62f, 0x1.aa8902p-33f,
     0x1.680ecap-81f, 0.0f, 0x1.bfb986p-53f, 0x1.1c1738p-99f, 0.0f, 0x1.d8402ep-92f,
     0.0f, 0.0f, 0x1.cd58d6p-79f, 0.0f, 0x1.ee499ap-1f, 0x1.f6a7dcp-105f, 0.0f,
     0x1.9224c4p-113f, 0.0f, 0.0f, 0x1.8b0212p-107f, 0.0f, 0x1.f3f978p-63f, 0.0f,
     0.0f, 0x1.cefefp-40f, 0.0f, 0x1.381e64p-54f, 0x1.e4919ap-76f, 0x1.c24fdep-114f,
     0.0f, 0x1.db2de8p-61f, 0.0f, 0.0f, 0x1.1965d6p-79f, 0.0f, 0x1.12ab12p-95f, 0.0f,
     0.0f, 0.0f, 0x1.c80acap-11f, 0.0f, 0x1.3c30dep-7f, 0x1.07832cp-28f,
     0x1.34d288p-68f, 0x1.2d1bb6p-70f, 0.0f, 0x1.46bdcap-65f, 0.0f, 0x1.a6b7aep-82f,
     0.0f, 0x1.eaa0dep-113f, 0x1.6c3afcp-81f, 0x1.32c77cp-84f, 0x1.8675aep-14f,
     0x1.4335p-88f, 0.0f, 0.0f, 0x1.e5443ep-110f, 0.0f, 0x1.00bf56p-8f,
     0x1.072262p-24f, 0x1.a6f0acp-44f, 0x1.2f6106p-5f, 0.0f, 0x1.48cfe2p-13f, 0.0f,
     0.0f, 0x1.cf9234p-7f, 0.0f, 0x1.b2d49cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c71e98p-51f, 0.0f, 0.0f, 0x1.a3384cp-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e84c4ep-35f, 0x1.43bc42p-10f, 0.0f, 0.0f, 0x1.f3cb1p-84f, 0.0f,
     0x1.92f34ep-21f, 0.0f, 0.0f, 0.0f, 0x1.b62a66p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b6d974p-120f, 0.0f, 0.0f, 0x1.de054p-12f, 0x1.84553cp-103f, 0.0f,
     0x1.36e992p-39f, 0x1.b12ea4p-3f, 0.0f, 0x1.042922p-68f, 0x1.b6b6c2p-36f,
     0x1.8c217p-24f, 0x1.85b52ap-101f, 0.0f, 0.0f, 0.0f, 0x1.40a08ep-107f, 0.0f, 0.0f,
     0.0f, 0x1.ad1f14p-17f, 0x1.4b362p-27f, 0.0f, 0x1.3c8e3ap-29f, 0x1.5e8972p-31f,
     0x1.496d32p-20f, 0.0f, 0x1.53e512p-56f, 0x1.72732ap-53f, 0.0f, 0.0f,
     0x1.9feffep-90f, 0.0f, 0.0f, 0x1.e5f132p-33f, 0x1.75b3fap-49f, 0.0f, 0.0f,
     0x1.9924f6p-104f, 0.0f, 0x1p0f, 0.0f, 0x1.dc731ap-57f, 0.0f, 0.0f,
     0x1.ee9a7cp-52f, 0x1.ae0d3p-15f, 0.0f, 0x1.4dd136p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f37a6ep-23f, 0x1.434132p-11f, 0x1.6d2dbep-73f, 0x1.53472cp-41f,
     0x1.c16a5cp-85f, 0.0f, 0x1.88ef66p-7f, 0.0f, 0x1.56867p-126f, 0.0f, 0.0f, 0.0f,
     0x1.6ebb9cp-97f, 0x1.4da06cp-68f, 0.0f, 0x1.6dc596p-112f, 0.0f, 0x1.b3a824p-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a1cf8p-125f, 0.0f, 0.0f, 0x1.1dedp-6f,
     0x1.8d42dcp-92f, 0.0f, 0.0f, 0.0f, 0x1.3d55p-30f, 0x1.a56aaep-23f,
     0x1.dd69cap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d88d02p-61f, 0.0f, 0.0f,
     0.0f, 0x1.29624cp-6f, 0x1.274978p-13f, 0x1.efd462p-16f, 0x1.bab568p-41f, 0.0f,
     0.0f, 0x1.d182d8p-62f, 0x1.7dfeb4p-60f, 0.0f, 0x1.0ce6fap-43f, 0.0f,
     0x1.467fc2p-111f, 0.0f, 0x1.ce7dep-83f, 0.0f, 0x1.bfd984p-78f, 0.0f,
     0x1.a23c96p-80f, 0.0f, 0.0f, 0x1.c74a4cp-16f, 0x1.b9bb7ap-111f, 0.0f,
     0x1.5a19b6p-20f, 0x1.f7e844p-38f, 0.0f, 0x1.0ee43ep-100f, 0x1.bb3768p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab8a6ap-55f, 0x1.fcec0ap-50f, 0.0f, 0x1.2975bp-68f,
     0x1.e7bc66p-14f, 0x1.86eff4p-98f, 0x1.0aed2ep-97f, 0.0f, 0.0f, 0x1.12b35cp-21f,
     0x1.15e328p-105f, 0.0f, 0x1.cce322p-78f, 0x1.ba597cp-84f, 0x1.b49b7ep-10f, 0.0f,
     0.0f, 0.0f, 0x1.27d032p-51f, 0x1.a9533ap-83f, 0.0f, 0x1.93fff2p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.246e6cp-66f, 0.0f, 0.0f, 0x1.272ecap-33f,
     0.0f, 0x1.cc51d2p-88f, 0x1.3b0234p-99f, 0.0f, 0.0f, 0x1.369ap-97f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.5e71ap-48f, 0x1.bf94ep-109f, 0.0f, 0x1.63af02p-42f, 0.0f,
     0x1.03e73ap-100f, 0x1.1bb378p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a1ea8p-82f, 0.0f,
     0.0f, 0x1.e6012ap-20f, 0x1.404c44p-67f, 0x1.31f9f8p-6f, 0x1.52d5c8p-108f, 0.0f,
     0x1.8adf28p-13f, 0.0f, 0x1.5ed4fep-30f, 0x1.0fee9ep-34f, 0x1.983688p-60f, 0x1p0f,
     0.0f, 0x1.0dd0f2p-94f, 0x1.fcd18p-18f, 0x1.ff910cp-123f, 0x1.f5ff78p-82f, 0.0f,
     0.0f, 0x1.a1ed3ep-53f, 0x1.b1dd4ep-61f, 0x1.0753ccp-25f, 0.0f, 0x1.51dd44p-47f,
     0x1.5669d4p-28f, 0.0f, 0.0f, 0x1.9f0054p-97f, 0x1.b66e3cp-15f, 0.0f,
     0x1.31b8ecp-23f, 0x1.cbb706p-4f, 0x1.946848p-107f, 0.0f, 0x1.f1f8dap-89f,
     0x1.3e8d16p-112f, 0.0f, 0.0f, 0.0f, 0x1.fb7866p-43f, 0.0f, 0.0f, 0x1.f28d34p-85f,
     0.0f, 0x1.092b08p-13f, 0.0f, 0x1.3a760ep-5f, 0.0f, 0.0f, 0.0f, 0x1.1f431p-108f,
     0.0f, 0.0f, 0x1.86a8aap-51f, 0x1.ede412p-75f, 0.0f, 0.0f, 0.0f, 0x1.1300ap-21f,
     0.0f, 0x1.1edbf6p-126f, 0.0f, 0x1.78fc02p-85f, 0x1.7fb9ecp-108f, 0.0f, 0.0f,
     0x1.0c79cep-109f, 0.0f, 0.0f, 0.0f, 0x1.8c3662p-72f, 0.0f, 0.0f, 0x1.411f7p-80f,
     0x1.36b0ccp-77f, 0.0f, 0x1.c00154p-45f, 0x1.23ca3ap-4f, 0x1.e3246ap-105f,
     0x1.92c108p-100f, 0x1.57cfa6p-62f, 0x1.6235a4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f88fcp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f72238p-68f, 0.0f, 0x1.a322bp-51f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg2[1004]  = {
     0x1.1c359ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ce91p-124f, 0x1.6b391ap-40f,
     0x1.c46886p-74f, 0x1.8aec88p-92f, 0x1.7e53a6p-114f, 0.0f, 0x1.da81f2p-113f,
     0x1.898fap-104f, 0.0f, 0.0f, 0.0f, 0x1.55e8b6p-33f, 0x1.e5975cp-54f,
     0x1.8ed72cp-54f, 0.0f, 0x1.34b706p-4f, 0.0f, 0.0f, 0x1.3cab28p-74f, 0.0f, 0.0f,
     0x1.4bacdep-16f, 0x1.4ae6d4p-55f, 0x1.378326p-43f, 0.0f, 0x1.b78a12p-19f, 0.0f,
     0x1.e27f82p-51f, 0x1.2ad092p-95f, 0.0f, 0x1.5c7d9ep-85f, 0.0f, 0x1.6a7956p-33f,
     0x1.95374ep-85f, 0x1.d9b8dep-73f, 0x1.aee3c2p-67f, 0x1.eed39ep-61f, 0.0f,
     0x1.dcdc28p-61f, 0.0f, 0x1.fcebe2p-58f, 0.0f, 0x1.83a892p-29f, 0.0f, 0.0f,
     0x1.f111fcp-125f, 0x1.8ce17ap-56f, 0x1.b33918p-36f, 0x1.832386p-84f,
     0x1.29604ep-4f, 0x1.3c714ep-33f, 0x1.28935ep-111f, 0.0f, 0x1.6ff6bep-83f, 0.0f,
     0.0f, 0x1.351c98p-121f, 0.0f, 0.0f, 0x1.50b8eep-55f, 0x1.bf5bccp-105f, 0.0f,
     0.0f, 0.0f, 0x1.63992ap-35f, 0.0f, 0x1.ef2366p-120f, 0x1.d6a9f8p-120f, 0.0f,
     0.0f, 0.0f, 0x1.1256bcp-40f, 0x1.9e7152p-107f, 0x1.0ab106p-13f, 0x1.73bc4ep-11f,
     0x1.c33144p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc642p-104f, 0x1.f4fb34p-11f,
     0x1.f105bep-64f, 0.0f, 0x1.c90c0ep-89f, 0x1.04bde6p-1f, 0x1.6bf716p-62f, 0.0f,
     0x1.7033d6p-115f, 0x1.567238p-104f, 0x1.3cbb1p-3f, 0.0f, 0x1.8f466ap-41f, 0.0f,
     0x1.02cb8ep-88f, 0x1.3030b8p-2f, 0.0f, 0.0f, 0x1.503c7p-11f, 0x1.1593a4p-15f,
     0.0f, 0.0f, 0x1.fffbe8p-83f, 0.0f, 0x1.bc3eacp-61f, 0x1.8ef7ccp-4f,
     0x1.65234ap-48f, 0x1.61948p-59f, 0x1.8c0444p-86f, 0x1.0b39e4p-125f,
     0x1.6a9c1ap-62f, 0.0f, 0.0f, 0x1.dae3f2p-77f, 0.0f, 0x1.5be1e8p-80f,
     0x1.123bbep-116f, 0x1.c4d36ap-61f, 0x1.37365ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86fa36p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d493eap-112f, 0.0f,
     0x1.46b72cp-10f, 0x1.60e836p-11f, 0x1.408ecap-55f, 0x1.9937d8p-51f,
     0x1.42a4a2p-107f, 0.0f, 0x1.9524fep-38f, 0x1.7073bcp-47f, 0x1.0ac25ep-92f, 0.0f,
     0x1.923cc4p-39f, 0x1.77cfap-89f, 0x1.ade37cp-21f, 0x1.ecbd62p-106f,
     0x1.270ba8p-49f, 0x1.aa2f38p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4dbfep-85f,
     0x1.e920fp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3905c8p-42f, 0x1.c9f564p-80f,
     0x1.cc50f2p-78f, 0x1.d0e7f4p-118f, 0x1.d227e6p-3f, 0x1.0c5df4p-21f, 0.0f,
     0x1.9ffe1ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a789p-53f, 0.0f,
     0x1.80b3dap-19f, 0x1.437108p-94f, 0x1.45cc52p-26f, 0.0f, 0.0f, 0x1.2649fap-33f,
     0x1.e79eacp-106f, 0x1.5e09e6p-28f, 0x1.eb4358p-31f, 0x1.957c44p-108f,
     0x1.040196p-52f, 0x1.76259p-25f, 0x1.21727cp-43f, 0.0f, 0.0f, 0.0f,
     0x1.7d2b46p-43f, 0x1.599c36p-73f, 0x1.3cb2c6p-98f, 0.0f, 0x1.baffdep-8f, 0.0f,
     0.0f, 0.0f, 0x1.ad23cp-97f, 0.0f, 0x1.b19446p-2f, 0.0f, 0.0f, 0x1.f7fad4p-75f,
     0x1.4de634p-116f, 0.0f, 0x1.99c2f2p-11f, 0x1.307e2ap-52f, 0x1.2a97d4p-82f,
     0x1.fe717ep-63f, 0.0f, 0.0f, 0.0f, 0x1.16a386p-24f, 0.0f, 0x1.0087e6p-5f,
     0x1.bbe7c8p-126f, 0.0f, 0.0f, 0.0f, 0x1.e7228p-62f, 0.0f, 0x1.a21054p-121f,
     0x1.7a6bc6p-93f, 0x1.0a0282p-116f, 0.0f, 0x1.a33a92p-100f, 0.0f, 0x1.5c2a1p-6f,
     0x1.42769ep-39f, 0.0f, 0.0f, 0.0f, 0x1.e5bf92p-30f, 0x1.30e3dcp-100f, 0.0f, 0.0f,
     0.0f, 0x1.b922d4p-109f, 0x1.86688cp-102f, 0x1.89f1f4p-83f, 0x1.69adbp-57f,
     0x1.6d9c72p-81f, 0.0f, 0x1.0d1194p-122f, 0.0f, 0x1.2d9ebcp-34f, 0.0f, 0.0f, 0.0f,
     0x1.00dedep-45f, 0.0f, 0.0f, 0x1.e3923p-40f, 0x1.3e10dep-89f, 0.0f,
     0x1.295712p-7f, 0x1.fdbe92p-35f, 0x1p0f, 0x1.27732ap-88f, 0.0f, 0x1.467d48p-16f,
     0.0f, 0.0f, 0x1.eac3fcp-29f, 0.0f, 0.0f, 0.0f, 0x1.d80f02p-55f, 0x1.46a84cp-55f,
     0.0f, 0x1.bc8466p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc226ap-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3681a2p-19f, 0.0f, 0.0f, 0x1.45d60cp-44f, 0x1.416dc2p-11f,
     0x1.84f0fep-87f, 0.0f, 0.0f, 0.0f, 0x1.d781bp-71f, 0.0f, 0x1.bc064cp-50f, 0.0f,
     0.0f, 0.0f, 0x1.83a794p-92f, 0x1.59d452p-13f, 0.0f, 0x1.6ae696p-32f, 0.0f,
     0x1.b62b9p-122f, 0.0f, 0.0f, 0x1.71512ap-64f, 0x1.6e3362p-92f, 0x1.1d868p-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cfc58p-100f, 0x1.84f7ccp-111f,
     0x1.3717a2p-5f, 0.0f, 0x1.386d64p-113f, 0x1.a0c944p-68f, 0x1.85c98cp-83f,
     0x1.178364p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62357cp-83f, 0.0f, 0.0f, 0.0f,
     0x1.3b6c4cp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b0002p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eef304p-69f, 0x1.3d69a8p-44f, 0.0f, 0x1.795836p-3f, 0.0f, 0.0f,
     0x1.795c58p-108f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e71236p-112f,
     0.0f, 0.0f, 0x1.5a98bep-123f, 0x1.9b754p-121f, 0.0f, 0x1.9d0014p-106f, 0.0f,
     0x1.e61454p-61f, 0.0f, 0x1.4a779ap-5f, 0.0f, 0x1.a836bp-7f, 0.0f,
     0x1.55adfap-27f, 0.0f, 0x1.f631c4p-85f, 0x1.1e669ap-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.026cc4p-106f, 0x1.2d4d76p-119f, 0x1.11aa04p-100f, 0x1.77ce56p-12f,
     0.0f, 0.0f, 0x1.d4edb2p-5f, 0.0f, 0.0f, 0x1.a9f38p-43f, 0x1.11768cp-91f, 0.0f,
     0x1.6c47aep-51f, 0x1.feaedp-114f, 0x1.4636b4p-83f, 0.0f, 0x1.94eba8p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9ec01ep-28f, 0x1.aad99p-16f, 0x1.abc928p-110f,
     0x1.e4d462p-9f, 0x1.714fd6p-119f, 0.0f, 0.0f, 0x1.079daep-23f, 0x1.3fcde6p-105f,
     0x1.54500cp-60f, 0x1.bc4604p-93f, 0.0f, 0.0f, 0.0f, 0x1.44e1bep-113f, 0.0f, 0.0f,
     0x1.25956ep-65f, 0x1.cac16p-80f, 0x1.241d0ap-124f, 0x1.cf4f52p-110f,
     0x1.334edep-50f, 0.0f, 0x1.26bce4p-6f, 0.0f, 0.0f, 0x1.33bccep-109f,
     0x1.bf9bc6p-65f, 0x1.9f7d94p-39f, 0x1.0b1efap-34f, 0.0f, 0.0f, 0x1.2e4f96p-72f,
     0x1.20f4eap-5f, 0.0f, 0x1.118704p-103f, 0x1.9b1358p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a199bcp-18f, 0x1.00edbp-99f, 0x1.dbb706p-19f, 0.0f, 0.0f, 0.0f,
     0x1.5fe2f4p-32f, 0.0f, 0.0f, 0x1.4b9c2ep-70f, 0x1.f03e4cp-83f, 0.0f, 0.0f,
     0x1.c89f8ap-117f, 0.0f, 0x1.2701ccp-96f, 0x1.2f0498p-75f, 0x1.6b7eb2p-46f,
     0x1.2ff232p-42f, 0x1.23c96cp-5f, 0.0f, 0x1.de69cp-108f, 0x1.2bbdc6p-34f, 0.0f,
     0x1.39292p-111f, 0.0f, 0x1.afbb84p-46f, 0.0f, 0.0f, 0x1.b5262cp-57f,
     0x1.c0ae04p-60f, 0x1.45fad8p-120f, 0x1.87144ep-91f, 0x1.b0ac4ep-125f,
     0x1.74064ep-106f, 0x1.aab39ap-75f, 0.0f, 0.0f, 0x1.6cad8ep-33f, 0.0f, 0.0f,
     0x1.60f2ccp-95f, 0.0f, 0.0f, 0.0f, 0x1.122e5cp-4f, 0.0f, 0.0f, 0x1.1260bp-97f,
     0x1.b8395p-60f, 0x1.3784e6p-7f, 0.0f, 0.0f, 0x1.f10c4p-103f, 0x1.144c6ep-28f,
     0.0f, 0.0f, 0x1.977b2ap-120f, 0.0f, 0x1.f97384p-54f, 0.0f, 0.0f, 0.0f,
     0x1.9e80e8p-5f, 0.0f, 0.0f, 0.0f, 0x1.fb215ap-82f, 0x1.7522d4p-19f,
     0x1.0d9c24p-42f, 0x1.519a86p-36f, 0.0f, 0x1.4db3d6p-104f, 0x1.665472p-46f, 0.0f,
     0x1.518d5cp-27f, 0.0f, 0.0f, 0.0f, 0x1.3117dap-19f, 0.0f, 0x1.934c7ep-63f,
     0x1.dc6a96p-63f, 0x1.132858p-48f, 0x1.33026cp-69f, 0.0f, 0x1.e20746p-25f, 0.0f,
     0x1.180d4p-50f, 0.0f, 0.0f, 0x1.79d1b4p-41f, 0x1.b91b3ap-87f, 0.0f,
     0x1.479886p-49f, 0x1.ee74dcp-19f, 0.0f, 0.0f, 0.0f, 0x1.8a32b4p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e095d4p-102f, 0.0f, 0.0f,
     0x1.3fa16cp-122f, 0.0f, 0x1.cd48a2p-52f, 0.0f, 0x1.a43c38p-91f, 0.0f,
     0x1.9dc68cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03d846p-11f, 0.0f, 0.0f,
     0x1.a4e5ccp-69f, 0.0f, 0x1.6a5d9cp-39f, 0x1.22a13ep-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.98c34p-78f, 0x1.f25256p-43f, 0.0f, 0x1.cfbad8p-38f, 0.0f,
     0x1.aa6b74p-2f, 0x1.dbf454p-107f, 0x1.36f7fp-21f, 0.0f, 0.0f, 0.0f,
     0x1.987234p-51f, 0x1.9e4482p-6f, 0x1.8537c8p-53f, 0x1.87ffc2p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d538d2p-14f, 0x1.80581p-44f, 0.0f,
     0x1.8cce86p-23f, 0x1.f9e5aap-50f, 0x1.e14d3ap-120f, 0x1.6b8536p-60f, 0.0f, 0.0f,
     0x1.cb8a74p-43f, 0x1.f71ecep-8f, 0x1.bbcdd6p-55f, 0.0f, 0.0f, 0x1.674e96p-108f,
     0.0f, 0.0f, 0x1.af9432p-93f, 0x1.1777dap-60f, 0x1.7661bcp-84f, 0x1.328c6ep-48f,
     0.0f, 0x1.1c3baep-95f, 0.0f, 0x1.fa210ep-107f, 0x1.9f2f66p-64f, 0x1.6f8deep-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1d082p-55f, 0x1.1e039ap-77f, 0x1.f4bc6ep-71f, 0.0f,
     0x1.6bea7ep-13f, 0x1.a7bb0ap-64f, 0x1.b1945p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8a2802p-3f, 0x1.c0fe3ap-125f, 0x1.f98e3cp-52f, 0x1.5c6014p-70f, 0.0f, 0.0f,
     0x1.d2b32ep-76f, 0.0f, 0.0f, 0x1.6fea74p-82f, 0.0f, 0x1.523a4ap-78f, 0x1p0f,
     0x1.083dbp-96f, 0.0f, 0.0f, 0.0f, 0x1.32abb4p-101f, 0x1.7583fcp-99f,
     0x1.9bc43cp-50f, 0x1.edad9ep-101f, 0x1.1556e4p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c48c54p-101f, 0x1.16f2c2p-67f, 0x1.a3acacp-11f, 0.0f,
     0x1.3491e4p-83f, 0.0f, 0x1.8d02d8p-61f, 0x1.9631ep-23f, 0.0f, 0.0f,
     0x1.a5198ap-63f, 0.0f, 0.0f, 0.0f, 0x1.952022p-53f, 0x1.71bf1cp-54f, 0.0f, 0.0f,
     0.0f, 0x1.617d2p-114f, 0x1.a615b6p-32f, 0.0f, 0.0f, 0x1.409ebp-32f,
     0x1.80c3ep-71f, 0x1.92b96p-119f, 0.0f, 0x1.78a2ecp-40f, 0.0f, 0.0f, 0.0f,
     0x1.9a8d3p-49f, 0x1.2e95c8p-74f, 0.0f, 0x1.3a2dbp-20f, 0.0f, 0.0f,
     0x1.02451p-41f, 0x1.c9023ap-99f, 0x1.64082p-97f, 0x1.cfa6a4p-122f,
     0x1.cb8b5cp-96f, 0.0f, 0x1.fa5838p-29f, 0.0f, 0x1.2ff31ap-58f, 0x1.321f84p-12f,
     0x1.01eafcp-102f, 0x1.ea6b94p-21f, 0x1.61baf8p-36f, 0x1.1504f2p-55f, 0.0f, 0.0f,
     0x1.90ee84p-24f, 0x1.a586f8p-61f, 0x1.0c4712p-64f, 0x1.e04012p-79f,
     0x1.559492p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5b712p-107f, 0.0f,
     0x1.b0c1ccp-106f, 0.0f, 0x1.2e2bbcp-60f, 0x1.1a87a2p-42f, 0.0f, 0.0f,
     0x1.2ae3aep-29f, 0x1.8a3a66p-24f, 0.0f, 0.0f, 0x1.a0f22ep-54f, 0x1.2bf562p-3f,
     0.0f, 0x1.1e0ae8p-22f, 0.0f, 0.0f, 0x1.239f8ep-81f, 0x1.c2c96ep-118f,
     0x1.a4765ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.379b14p-60f, 0.0f,
     0x1.2cc506p-65f, 0x1.91c92p-9f, 0x1.7e7dbap-36f, 0.0f, 0.0f, 0x1.d6e5c6p-28f,
     0x1.ad1582p-96f, 0.0f, 0.0f, 0x1.d0cbe4p-54f, 0.0f, 0.0f, 0x1.1310aap-56f, 0.0f,
     0x1.9b6d1cp-28f, 0x1.d6f0bap-64f, 0x1.31321ap-48f, 0x1.f50674p-90f,
     0x1.46ab5ep-32f, 0x1.862d2p-102f, 0x1.5c551p-20f, 0x1.2e4a0ap-79f,
     0x1.020efap-23f, 0x1.86ea74p-74f, 0.0f, 0.0f, 0x1.d9d5bep-8f, 0x1.aa7c96p-5f,
     0x1.87606p-70f, 0.0f, 0x1.b0959ep-60f, 0.0f, 0.0f, 0x1.ab8f84p-66f,
     0x1.36b504p-27f, 0x1.429494p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a9cd6p-21f,
     0.0f, 0.0f, 0x1.05a15ap-62f, 0.0f, 0x1.309b02p-124f, 0x1.590b86p-27f, 0.0f,
     0x1.d018e2p-21f, 0.0f, 0x1.24bd2ep-19f, 0.0f, 0x1.2114a2p-84f, 0.0f, 0.0f, 0.0f,
     0x1.ebabc4p-36f, 0.0f, 0x1.377ab8p-102f, 0x1.7ed664p-18f, 0x1.eab39ap-45f, 0.0f,
     0x1.4acfe8p-111f, 0x1.46011p-38f, 0x1.a120c8p-68f, 0x1.143602p-26f,
     0x1.7d459p-78f, 0x1.63d68cp-42f, 0x1.a9fa1cp-63f, 0.0f, 0.0f, 0x1.b3b752p-124f,
     0x1.e1bbdcp-29f, 0.0f, 0.0f, 0x1.030798p-88f, 0.0f, 0x1.a6f016p-3f,
     0x1.f9547ap-21f, 0x1.394b76p-116f, 0.0f, 0.0f, 0x1.497ecep-80f, 0.0f,
     0x1.10492cp-85f, 0x1.de1da6p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c50aep-89f, 0x1.1d3318p-67f, 0x1.2df9dap-43f, 0x1.109006p-119f, 0.0f,
     0x1.81d7cp-20f, 0x1.a07632p-60f, 0x1.375206p-67f, 0x1.218c7ep-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bf97cp-110f, 0x1.44d8b4p-87f, 0x1.69ca9cp-106f,
     0x1.e37ff8p-101f, 0x1.2e6dc6p-70f, 0.0f, 0.0f, 0x1.e8d24ap-38f, 0.0f,
     0x1.8d849ap-124f, 0.0f, 0.0f, 0x1.792824p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed3c24p-74f, 0.0f, 0x1.848fc8p-3f, 0x1.81177p-68f, 0x1.a94212p-56f, 0.0f,
     0x1.0089f4p-52f, 0x1.0f8b32p-42f, 0.0f, 0x1.0e7b18p-71f, 0.0f, 0x1.60ba8ep-82f,
     0x1.d45e2ep-18f, 0x1.e6186p-57f, 0x1.f8c2dp-72f, 0.0f, 0.0f, 0x1.d05b78p-98f,
     0.0f, 0x1.e545f6p-64f, 0x1.db1ebap-39f, 0.0f, 0.0f, 0x1.1197p-95f,
     0x1.2e33d6p-15f, 0.0f, 0x1.d591e6p-37f, 0x1.188d0ep-88f, 0x1.6d71d6p-9f,
     0x1.9f4924p-118f, 0x1.417e16p-42f, 0.0f, 0.0f, 0x1.b92b2p-113f, 0.0f,
     0x1.d1155ep-96f, 0.0f, 0.0f, 0x1.811ab2p-9f, 0.0f, 0x1.d4da1ap-105f,
     0x1.48a8p-87f, 0.0f, 0x1.6b827cp-18f, 0x1.f59a16p-61f, 0.0f, 0x1.c284c2p-121f,
     0.0f, 0x1.9f71eap-106f, 0x1.cf11bcp-54f, 0x1.bfec28p-69f, 0x1.764a66p-22f,
     0x1.5a514p-18f, 0x1.770a94p-100f, 0x1.4bc436p-73f, 0x1.049b5cp-85f,
     0x1.8a88bap-95f, 0.0f, 0x1.187bb6p-16f, 0.0f, 0x1.912a5ap-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.022968p-20f, 0.0f, 0.0f, 0.0f, 0x1.47e3c4p-107f, 0.0f,
     0x1.e9a442p-42f, 0.0f, 0.0f, 0.0f, 0x1.be85aep-53f, 0.0f, 0x1.fcf898p-59f,
     0x1.86fb52p-61f, 0x1.79bf9ep-98f, 0x1.b2c31p-116f, 0x1.d2087cp-7f,
     0x1.c825fcp-30f, 0.0f, 0x1.d8e0e2p-112f, 0.0f, 0x1.cf88dap-88f, 0x1.4e6106p-43f,
     0x1.5abfe8p-18f, 0x1.64b19ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c95e6p-43f, 0x1.b41a8p-46f, 0x1.0c7998p-105f, 0.0f, 0x1.843fccp-8f,
     0x1.861f44p-14f, 0.0f, 0.0f, 0.0f, 0x1.cf5a9cp-21f, 0.0f, 0.0f, 0.0f,
     0x1.694f94p-16f, 0x1.85d4dap-77f, 0x1.8b87fp-100f, 0x1.87344cp-8f, 0.0f, 0.0f
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
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            int32_t tmp5;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            memcpy(&tmp2, ((ml_float4_t*)(external_bench_wrapper_input_table_arg2+ i)), 16);
            tmp3 = Sleef_finz_fmaf4_avx2128(tmp0, tmp1, tmp2);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp3), 16);
            tmp4 = local_acc + tmp3;
            local_acc = tmp4;
            tmp5 = i + INT32_C(4);
            i = tmp5;
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
    printf("Sleef_finz_fmaf4_avx2128 %"PRIi64" elts over [[0;1], [0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fmaf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
