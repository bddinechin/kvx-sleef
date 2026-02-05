/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmodf1_purecfma.c --function Sleef_fmodf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target x86_sse2
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
     0x1.e1d284p-71f, 0x1.84557ap-17f, 0x1.383f4cp-120f, 0.0f, 0.0f, 0.0f,
     0x1.aa92b4p-118f, 0x1.b8512p-123f, 0x1.32ef4p-29f, 0.0f, 0x1.8c487cp-17f, 0.0f,
     0x1.34b4f4p-72f, 0.0f, 0x1.865ab6p-106f, 0x1.2c12d4p-76f, 0x1.651fcp-75f, 0.0f,
     0x1.9bdefap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a032c8p-4f, 0.0f, 0x1.27d874p-114f,
     0.0f, 0x1.bf37b8p-24f, 0.0f, 0.0f, 0x1.795a48p-84f, 0.0f, 0x1.7bfe58p-13f, 0.0f,
     0.0f, 0x1.e6abc6p-87f, 0x1.e2d518p-114f, 0x1.e3d48ap-93f, 0x1.edbbap-104f, 0.0f,
     0x1.4f60c4p-119f, 0x1.7e0afp-2f, 0.0f, 0.0f, 0x1.61a612p-92f, 0.0f, 0.0f,
     0x1.51c248p-113f, 0x1.81885ep-81f, 0x1.d84698p-33f, 0.0f, 0x1.2f4acap-62f, 0.0f,
     0x1.bc8fb2p-76f, 0.0f, 0x1.c561acp-37f, 0.0f, 0x1.a9827cp-40f, 0x1.0a195ap-78f,
     0x1.6faf2cp-113f, 0.0f, 0.0f, 0x1.ff874ep-109f, 0.0f, 0.0f, 0.0f,
     0x1.d4b4b4p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c280cp-56f,
     0x1.b9fd84p-112f, 0.0f, 0x1.ca77dp-112f, 0x1.fb973ep-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a55cdcp-26f, 0x1.cd550ep-7f, 0x1.438p-111f, 0x1.8614fep-62f, 0.0f,
     0x1.d387d8p-117f, 0x1.ccca2p-104f, 0x1.64395p-46f, 0x1.fe9774p-100f,
     0x1.46664ep-70f, 0x1.4b4adep-113f, 0x1.8cdfb2p-8f, 0x1.13acc8p-67f,
     0x1.e24c56p-119f, 0x1.a9eep-113f, 0.0f, 0.0f, 0x1.ae647p-115f, 0.0f, 0.0f, 0.0f,
     0x1.cfb52cp-104f, 0x1.0f4a4p-113f, 0.0f, 0x1.a2004ap-54f, 0.0f, 0x1.2d471cp-116f,
     0x1p0f, 0x1.bdc16ap-27f, 0.0f, 0x1.cd49e6p-40f, 0x1.bbe3ccp-20f,
     0x1.cc5f4ap-119f, 0.0f, 0.0f, 0x1.232b08p-72f, 0x1.7a2b06p-13f, 0x1.b02644p-31f,
     0.0f, 0x1.14a028p-62f, 0x1.bae61ep-111f, 0.0f, 0x1.3d2e36p-26f, 0.0f,
     0x1.6975dcp-61f, 0x1.1764fep-126f, 0x1.308a1cp-24f, 0.0f, 0x1.3f2538p-45f, 0.0f,
     0x1.69f998p-119f, 0.0f, 0x1.1097bep-123f, 0.0f, 0.0f, 0x1.e987aap-24f,
     0x1.740a3p-115f, 0x1.7839b8p-66f, 0x1.85732cp-4f, 0.0f, 0.0f, 0x1.e0301p-36f,
     0.0f, 0x1.31914ep-84f, 0.0f, 0.0f, 0x1.14d67cp-52f, 0x1.0fd092p-124f, 0.0f,
     0x1.d09334p-94f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.92444cp-78f,
     0x1.4c68cp-61f, 0x1.4a2d9p-28f, 0x1.e7665ap-97f, 0x1.e444a4p-34f,
     0x1.b14a54p-80f, 0.0f, 0x1.9c50c8p-80f, 0x1.5acb84p-44f, 0x1.702008p-10f,
     0x1.2f72b8p-4f, 0x1.f74bd2p-112f, 0.0f, 0.0f, 0x1.654b1ep-30f, 0x1.a4a6fep-11f,
     0x1.35c2bp-100f, 0x1.bf504ep-19f, 0x1.b8f09ap-109f, 0.0f, 0x1.189d5ep-68f, 0.0f,
     0x1.58b10ep-109f, 0.0f, 0.0f, 0x1.931e9ap-39f, 0.0f, 0.0f, 0.0f, 0x1.1d538p-35f,
     0x1.6c9a84p-92f, 0.0f, 0x1.c3e1dp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1cdd8p-44f,
     0x1.6bae6p-51f, 0.0f, 0.0f, 0x1.22dbccp-55f, 0.0f, 0.0f, 0.0f, 0x1.6c6b4ap-96f,
     0.0f, 0x1.044f62p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3736ep-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.467a3cp-81f, 0.0f, 0.0f, 0x1.5cc46p-79f, 0.0f,
     0x1.bfa8d8p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33355cp-12f, 0.0f, 0x1.50cb1cp-34f,
     0.0f, 0x1.e1d3c2p-80f, 0.0f, 0x1.c852dep-89f, 0x1.8bd5a6p-90f, 0x1.3fec8ap-23f,
     0x1.66f0ccp-113f, 0x1.b18a42p-73f, 0x1.1c9182p-92f, 0x1.3226ep-76f,
     0x1.577dcep-2f, 0.0f, 0x1.f093e8p-126f, 0.0f, 0.0f, 0x1.7d1182p-52f, 0x1p0f,
     0x1.c9a2ap-54f, 0.0f, 0.0f, 0.0f, 0x1.e6d44p-71f, 0x1.a50fecp-76f,
     0x1.bceccp-101f, 0x1.7a4436p-56f, 0.0f, 0x1.8c34fep-34f, 0.0f, 0.0f, 0.0f,
     0x1.5dc2a8p-53f, 0.0f, 0.0f, 0x1.f4179ep-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4548aap-67f, 0.0f, 0.0f, 0x1.3489dap-65f, 0x1.193c68p-26f, 0.0f,
     0x1.6e3ec4p-81f, 0x1.27a1bep-84f, 0.0f, 0.0f, 0x1.1b954cp-79f, 0.0f, 0.0f, 0.0f,
     0x1.1baep-97f, 0.0f, 0x1.e2ce16p-78f, 0x1.834c46p-112f, 0.0f, 0.0f,
     0x1.1759e6p-109f, 0x1.375a56p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.727e5cp-25f, 0.0f, 0x1.9b7b1cp-107f, 0x1.4549ecp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0a6748p-2f, 0x1.9ee1e2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebacdp-57f,
     0.0f, 0x1.0f9ddap-44f, 0x1.134a0ap-55f, 0.0f, 0x1.4694e6p-34f, 0x1.2d1c5p-93f,
     0x1.9bbc02p-32f, 0.0f, 0x1.c2954ep-117f, 0x1.f97996p-99f, 0x1.589282p-123f,
     0x1.e04b7cp-52f, 0.0f, 0x1.c612ap-65f, 0x1.a413b8p-10f, 0x1.916316p-60f,
     0x1.721fb6p-26f, 0x1.2e12a6p-65f, 0x1.a0d522p-65f, 0x1.f79d42p-28f,
     0x1.defc12p-24f, 0.0f, 0x1.c54766p-100f, 0.0f, 0x1.7e67d2p-105f, 0.0f,
     0x1.b02838p-123f, 0x1.e98502p-8f, 0x1.3143d6p-105f, 0x1.dcec6ep-77f,
     0x1.85a2ccp-112f, 0x1.5db24ap-27f, 0x1.b8e622p-34f, 0x1.4fc8fp-69f,
     0x1.ce3968p-74f, 0x1.00ebdp-80f, 0.0f, 0x1.73e04cp-19f, 0x1.cc317p-55f,
     0x1.0e7666p-16f, 0.0f, 0.0f, 0x1.cb7cccp-24f, 0.0f, 0.0f, 0x1.ab875ap-114f,
     0x1.6dadd4p-38f, 0x1.7e47a6p-84f, 0.0f, 0x1.aaa34p-87f, 0.0f, 0.0f,
     0x1.e7b42ap-98f, 0x1.3d032p-95f, 0.0f, 0x1p0f, 0x1.8cfe54p-113f, 0.0f,
     0x1.f8cbbcp-102f, 0.0f, 0x1.2189aep-25f, 0x1.d79ccep-97f, 0.0f, 0.0f,
     0x1.07d0b8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2cfp-9f, 0x1.b7812p-108f, 0.0f,
     0x1.63c4dcp-92f, 0.0f, 0x1.e2d78ap-90f, 0x1.8eb582p-77f, 0x1.f23228p-84f, 0.0f,
     0x1.c9e98cp-50f, 0.0f, 0x1.016208p-35f, 0.0f, 0x1.2f317cp-116f, 0x1.633af4p-37f,
     0x1.ac376ap-51f, 0.0f, 0.0f, 0x1.ea6cep-9f, 0.0f, 0x1.b691c8p-40f, 0.0f,
     0x1.07efb4p-97f, 0x1.23cfc2p-47f, 0x1.b66402p-56f, 0x1.2f5p-115f,
     0x1.5c67dcp-39f, 0.0f, 0.0f, 0.0f, 0x1.1a0ee4p-70f, 0x1.b13348p-8f,
     0x1.28da58p-65f, 0.0f, 0.0f, 0x1.19abdep-113f, 0.0f, 0.0f, 0x1.ca0268p-33f, 0.0f,
     0x1.dd7b8cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9d28ep-3f, 0x1.009202p-3f,
     0x1.844beep-87f, 0.0f, 0x1.ad625cp-5f, 0x1.e531c2p-83f, 0x1.3e6c9p-105f, 0.0f,
     0x1.0265a4p-121f, 0.0f, 0x1.86eac8p-28f, 0x1.baac7cp-110f, 0.0f, 0x1.b93462p-83f,
     0.0f, 0.0f, 0x1.9eea18p-20f, 0.0f, 0.0f, 0x1.af68d6p-11f, 0.0f, 0x1.94c6cp-22f,
     0.0f, 0x1.970d12p-113f, 0.0f, 0x1.bdc5aep-115f, 0.0f, 0x1.5d1b9p-69f, 0.0f,
     0x1.6ff1f4p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f754ap-26f, 0.0f, 0x1.3b45dap-40f,
     0.0f, 0.0f, 0.0f, 0x1.b05054p-29f, 0x1.51def4p-74f, 0x1.7cb8f6p-89f, 0.0f,
     0x1.deed3ep-12f, 0x1.91376ap-34f, 0.0f, 0.0f, 0.0f, 0x1.6beddap-77f,
     0x1.7fd5fcp-99f, 0.0f, 0x1.10209ap-122f, 0.0f, 0x1.0d46f2p-22f, 0.0f,
     0x1.ebdcf6p-125f, 0.0f, 0.0f, 0.0f, 0x1.5c26acp-67f, 0.0f, 0.0f, 0x1.1b189cp-83f,
     0.0f, 0.0f, 0.0f, 0x1.4bb33ep-11f, 0x1.684c1cp-119f, 0x1.7604ap-62f,
     0x1.29bba2p-78f, 0.0f, 0.0f, 0x1.2afd5cp-32f, 0.0f, 0x1.845dcp-124f,
     0x1.8bfc44p-15f, 0x1.bda984p-92f, 0.0f, 0.0f, 0.0f, 0x1.db692cp-73f, 0.0f,
     0x1.df9974p-67f, 0x1.bbc26cp-67f, 0x1.85044ap-101f, 0x1.f8d554p-12f,
     0x1.2f958p-93f, 0.0f, 0.0f, 0x1.496672p-39f, 0x1.2d299ep-8f, 0x1.263ac4p-84f,
     0.0f, 0x1.928eb4p-53f, 0.0f, 0x1.10c52cp-93f, 0x1.0014f4p-89f, 0x1.e439cp-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5f4a2p-35f, 0x1.a887d2p-55f, 0x1.319ff2p-88f, 0.0f,
     0x1.8fdc44p-58f, 0.0f, 0.0f, 0.0f, 0x1.3ee3cp-63f, 0x1.9e83fep-95f, 0.0f,
     0x1.8cc054p-54f, 0.0f, 0.0f, 0x1.93419ap-106f, 0x1.4abff4p-41f, 0.0f, 0.0f,
     0x1.ff8242p-6f, 0.0f, 0x1.0796b6p-94f, 0.0f, 0x1.f7a518p-42f, 0x1.22a49p-107f,
     0x1.6a7822p-14f, 0x1.3caffp-65f, 0.0f, 0x1.14edfp-82f, 0x1.39219ap-85f, 0.0f,
     0.0f, 0.0f, 0x1.62babep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2244b4p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abb3e4p-20f, 0x1.e94442p-66f, 0x1.005d84p-21f,
     0.0f, 0.0f, 0x1.b9fe8cp-93f, 0x1.32297ap-30f, 0x1.a1614p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9333ccp-115f, 0x1.c62354p-71f, 0.0f, 0.0f, 0x1.910554p-65f,
     0x1.2f5b3ap-41f, 0x1.811576p-40f, 0x1.844912p-19f, 0x1.82d2acp-69f,
     0x1.ee679p-31f, 0x1.629cdep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1efc3ep-41f, 0.0f,
     0x1.e7993p-43f, 0.0f, 0x1.61a73cp-21f, 0.0f, 0.0f, 0x1.bd764p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9c37p-83f, 0.0f, 0x1.4e4b04p-69f, 0.0f,
     0x1.6aa2cep-52f, 0.0f, 0x1.596fc4p-10f, 0x1.46f3a4p-83f, 0.0f, 0.0f, 0.0f,
     0x1.188e68p-97f, 0.0f, 0.0f, 0x1.16cf7cp-27f, 0.0f, 0.0f, 0x1.ffeb66p-62f,
     0x1.4bbe7cp-102f, 0.0f, 0.0f, 0x1.185286p-83f, 0.0f, 0x1.03fbf8p-105f, 0.0f,
     0x1.01d9f6p-12f, 0.0f, 0.0f, 0x1.ea4a2ap-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85db48p-50f, 0.0f, 0x1.730d48p-60f, 0x1.6f6e26p-15f, 0.0f, 0.0f,
     0x1.1d9824p-42f, 0.0f, 0.0f, 0.0f, 0x1.aa5732p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ce4d8p-24f, 0x1.84e32ep-61f, 0.0f, 0x1.146a72p-62f, 0x1.c1b2cap-124f,
     0x1.c559c4p-114f, 0x1.b3eec2p-59f, 0.0f, 0.0f, 0x1.3f8c54p-105f, 0.0f,
     0x1.fe8e76p-12f, 0.0f, 0.0f, 0x1.cb635cp-4f, 0x1.85555cp-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cf07eap-59f, 0x1.82fa68p-111f, 0x1.0d8b7p-77f, 0x1.e237ap-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.26b33ap-14f, 0.0f, 0x1.f14d28p-70f, 0.0f, 0.0f, 0.0f,
     0x1.9bcc18p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8a626p-67f, 0.0f, 0x1.1f115p-66f,
     0x1.3f629ep-97f, 0.0f, 0x1.2ce7c2p-55f, 0x1.7262e4p-3f, 0.0f, 0.0f,
     0x1.3dc28ep-44f, 0x1.f4378ap-23f, 0.0f, 0x1.81096ap-5f, 0.0f, 0.0f,
     0x1.892862p-21f, 0x1.c01658p-93f, 0x1.256916p-102f, 0.0f, 0x1.132dccp-5f, 0.0f,
     0.0f, 0x1.2c0716p-9f, 0x1.d2f97cp-62f, 0x1.ec89fcp-51f, 0.0f, 0x1.affcd8p-116f,
     0x1.cd0998p-12f, 0.0f, 0.0f, 0x1.ae2d8p-34f, 0x1.b79822p-23f, 0.0f,
     0x1.cda2e4p-122f, 0x1.dc03p-13f, 0x1.4d0feep-65f, 0x1.c94d86p-80f, 0.0f,
     0x1.3254acp-1f, 0x1.da91dep-28f, 0x1.2f6126p-11f, 0.0f, 0x1.cbe12ep-57f,
     0x1.d4e5dap-59f, 0x1.4d5aa2p-89f, 0.0f, 0x1.b1c234p-94f, 0.0f, 0x1.f7085cp-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b6942p-100f, 0x1.997526p-112f,
     0x1.18ced8p-45f, 0x1.bc643cp-81f, 0.0f, 0x1.750258p-124f, 0x1.8d479cp-24f, 0.0f,
     0x1.a95548p-73f, 0x1.ef2fbp-23f, 0x1.12fcdep-24f, 0.0f, 0.0f, 0x1.cfda32p-77f,
     0x1.c98dd8p-46f, 0x1.cf3bf8p-20f, 0.0f, 0.0f, 0.0f, 0x1.c5d3c4p-57f, 0.0f, 0.0f,
     0x1.939ddcp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e81e24p-60f,
     0.0f, 0x1.cea3b2p-94f, 0.0f, 0x1.b35a3cp-90f, 0.0f, 0.0f, 0x1.3a7842p-112f,
     0x1.267d2ep-70f, 0x1.619c2cp-55f, 0x1.ae0674p-93f, 0.0f, 0x1.3bb7c2p-58f,
     0x1.60188cp-78f, 0.0f, 0x1.37b27p-35f, 0x1.e2ec32p-84f, 0x1.05e4eap-4f, 0.0f,
     0x1.b62a04p-119f, 0.0f, 0.0f, 0.0f, 0x1.cfaa7ap-112f, 0x1.ad3aa4p-91f, 0.0f,
     0x1.310a1ap-74f, 0.0f, 0.0f, 0x1.17779p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e8b78p-10f, 0x1.01483ap-9f, 0.0f, 0x1.2be738p-1f, 0.0f, 0.0f,
     0x1.ef129ap-92f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c2834p-36f,
     0x1.3e436p-54f, 0x1.64e8eap-6f, 0x1.a0089ap-73f, 0x1.229b26p-76f,
     0x1.dac42cp-112f, 0x1.294732p-100f, 0x1.77368ep-31f, 0.0f, 0x1.c7ed82p-6f,
     0x1.e73d18p-112f, 0x1.133e7p-28f, 0.0f, 0x1.6da92p-12f, 0x1.142ebap-7f,
     0x1.0c3738p-75f, 0.0f, 0.0f, 0x1.15250cp-24f, 0.0f, 0x1.d48f86p-3f,
     0x1.fe77e4p-28f, 0.0f, 0.0f, 0x1.193fe8p-122f, 0x1.ef5236p-27f, 0.0f,
     0x1.d88946p-94f, 0x1.78df0ep-102f, 0x1.6b6292p-83f, 0.0f, 0x1.5924a8p-63f, 0.0f,
     0.0f, 0x1.5b4602p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cafc5ep-95f, 0x1.4b876ap-119f,
     0x1.26bc4ep-100f, 0.0f, 0x1.342a6p-77f, 0.0f, 0.0f, 0x1.3ca534p-94f, 0.0f,
     0x1.f11ce4p-41f, 0x1.8464d8p-54f, 0x1.2c70ap-65f, 0.0f, 0x1.70c838p-29f, 0.0f,
     0.0f, 0x1.cf34fp-71f, 0x1.cce5f4p-112f, 0.0f, 0x1.9aafa4p-86f, 0x1.e4aa74p-91f,
     0x1.0604c8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75f0fcp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.535272p-67f, 0x1.30553ap-58f, 0.0f, 0x1.dc18p-11f, 0x1.39ddf8p-46f,
     0x1.f47acep-56f, 0x1.c68476p-21f, 0x1.e8bd8cp-117f, 0x1.65f948p-111f,
     0x1.c124fp-54f, 0x1.4500e2p-79f, 0x1.1c2988p-105f, 0.0f, 0.0f, 0x1.359782p-111f,
     0.0f, 0x1.b1f8dep-103f, 0x1.dd0b92p-90f, 0x1.ee7d18p-60f, 0.0f, 0.0f,
     0x1.362b14p-109f, 0x1.ef6ccep-99f, 0x1.6e8b8ap-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a9d4e8p-38f, 0x1.f9d8b4p-19f, 0.0f, 0.0f, 0.0f, 0x1.dbeaaep-8f, 0.0f,
     0x1.a9c57p-74f, 0x1.65fe46p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eebdcp-51f, 0.0f,
     0x1.f9afdep-36f, 0.0f, 0x1.77fabcp-53f, 0x1.1df182p-76f, 0x1.99d54ep-113f,
     0x1.8098b2p-70f, 0x1.8acd86p-58f, 0x1.2dabc2p-43f, 0x1.b561eep-5f, 0.0f, 0.0f,
     0.0f, 0x1.a4aa4ep-118f, 0x1.a13bcep-81f, 0x1.c1f2d2p-114f, 0x1.6aae7cp-77f, 0.0f,
     0.0f, 0.0f, 0x1.0a46bp-25f, 0x1.478198p-54f, 0.0f, 0.0f, 0x1.541112p-118f, 0.0f,
     0x1.0b28f8p-76f, 0x1.7103a4p-105f, 0.0f, 0x1.24d6ep-90f, 0.0f, 0x1.233236p-30f,
     0x1.5341b4p-82f, 0x1.454aeep-36f, 0.0f, 0.0f, 0.0f, 0x1.789bbp-117f, 0.0f, 0.0f,
     0x1.ded738p-12f, 0x1.0d066ep-60f, 0.0f, 0.0f, 0x1.e5eabp-81f, 0x1.31c2fp-100f,
     0.0f, 0x1.5ffep-41f, 0x1p0f, 0x1.f86b76p-50f, 0.0f, 0x1.55dcdep-10f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.a96ae4p-16f, 0.0f, 0x1.675468p-27f, 0.0f, 0x1.35127ap-120f,
     0x1.2ff8eep-29f, 0x1.50498p-107f, 0.0f, 0x1.60c114p-120f, 0.0f, 0.0f,
     0x1.3c5d86p-106f, 0.0f, 0.0f, 0.0f, 0x1.28db64p-4f, 0x1.7d61fap-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d144f8p-110f, 0x1.de886cp-69f, 0x1.28f5f6p-35f, 0.0f, 0.0f,
     0x1.df338ap-36f, 0.0f, 0x1.c49df4p-7f, 0x1.cf7276p-27f, 0.0f, 0.0f, 0.0f,
     0x1.c527a2p-99f, 0x1.349aep-39f, 0.0f, 0.0f, 0x1.7915dp-100f, 0.0f,
     0x1.fde606p-123f, 0x1.57760ep-98f, 0.0f, 0.0f, 0x1.a5f0e6p-50f, 0.0f, 0.0f,
     0x1.c62aep-4f, 0x1.32daacp-18f, 0.0f, 0x1.939c9ap-116f, 0x1.eab7a8p-100f, 0.0f,
     0.0f, 0x1.5ee87ap-1f, 0x1.fad572p-109f, 0x1.96bacp-44f, 0.0f, 0.0f,
     0x1.0efc04p-58f, 0x1.875f12p-110f, 0.0f, 0.0f, 0.0f, 0x1.d36cbcp-116f,
     0x1.c2ca1cp-62f, 0.0f, 0x1.68a07cp-120f, 0.0f, 0x1.e25862p-77f, 0x1.818d1cp-64f,
     0.0f, 0x1.0db566p-54f, 0.0f, 0x1p0f, 0x1.aaa9bap-118f, 0.0f, 0.0f, 0.0f,
     0x1.b33de4p-56f, 0.0f, 0x1.a5395p-28f, 0.0f, 0x1.3fd81p-85f, 0x1.189f04p-36f,
     0x1.14629p-61f, 0.0f, 0.0f, 0x1.370d0cp-93f, 0x1.0102d6p-68f, 0x1.10fd3cp-60f,
     0x1.29e9dcp-98f, 0.0f, 0x1.db7936p-96f, 0.0f, 0x1.84f548p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6bc1e8p-122f, 0.0f, 0x1.61746p-95f, 0x1.ce0452p-85f,
     0x1.8e7fbep-46f, 0x1.443902p-102f, 0.0f, 0x1.b039dp-113f, 0.0f, 0x1.ae9868p-30f,
     0.0f, 0x1.b74ccap-19f, 0.0f, 0.0f, 0x1.0b3154p-111f, 0x1.2970dp-103f, 0.0f,
     0x1.874f2ep-22f, 0.0f, 0x1.f9a69p-39f, 0x1.788384p-26f, 0.0f, 0.0f,
     0x1.8c4c2ap-8f, 0.0f, 0x1.7a8766p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba3f2p-48f, 0x1.734c26p-118f, 0.0f, 0.0f, 0x1.4973bcp-107f, 0.0f, 0.0f, 0.0f,
     0x1.95d386p-12f, 0.0f, 0x1.858664p-117f, 0x1.b10538p-112f, 0x1.63d9bep-6f, 0.0f,
     0.0f, 0x1.8b6c8ep-57f, 0.0f, 0x1.871b2ep-75f, 0.0f, 0x1.6de1bep-7f,
     0x1.00f57p-40f, 0x1.23a046p-90f, 0.0f, 0x1.f03e72p-111f, 0.0f, 0x1.5ec7bcp-96f,
     0x1.a3d748p-47f, 0x1.42353cp-43f, 0.0f, 0.0f, 0x1.7c312ep-16f, 0.0f,
     0x1.be5198p-74f, 0.0f, 0.0f, 0x1.06ba8ap-15f, 0x1.2ca04p-5f, 0.0f, 0.0f,
     0x1.75457ap-36f, 0.0f, 0.0f, 0.0f, 0x1.8f3c54p-64f, 0x1.4792c8p-83f,
     0x1.2a906p-112f, 0.0f, 0.0f, 0.0f, 0x1.8f6974p-56f, 0.0f, 0.0f, 0.0f,
     0x1.f10c68p-38f, 0.0f, 0x1.0c47dap-75f, 0x1.939908p-25f, 0x1.8824c6p-85f, 0.0f,
     0x1.a20998p-27f, 0x1.9c2258p-24f, 0.0f, 0x1.add7ecp-70f, 0.0f, 0x1.49fcfap-88f,
     0x1.c05022p-21f, 0.0f, 0x1.0532f2p-88f, 0.0f, 0x1.61ecb2p-67f, 0x1.bf1d3ep-39f,
     0x1.b4d2bcp-62f, 0x1.a8f102p-75f, 0x1.a0fec2p-81f, 0x1.d4b31cp-82f,
     0x1.0adb2ap-14f, 0x1.b5e96p-114f, 0.0f, 0.0f, 0.0f, 0x1.dd4accp-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.12e09p-9f, 0.0f, 0x1.3aed58p-94f, 0.0f, 0.0f, 0x1.50219ap-86f,
     0x1.fbd818p-93f, 0x1.b09b8p-18f, 0x1.27b512p-22f, 0.0f, 0x1.624f82p-87f, 0.0f,
     0x1.8d0002p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.766552p-109f, 0.0f,
     0x1.48c87ep-107f, 0.0f, 0x1.c831a4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b5bb8p-68f, 0.0f, 0x1.37383ep-73f, 0.0f, 0.0f, 0x1.21137ep-104f, 0.0f,
     0x1.b26d4cp-82f, 0x1.61085ep-61f, 0x1.5a6d08p-104f, 0.0f, 0x1.44251ap-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1bcf92p-110f, 0x1.1ea25ap-79f, 0x1.99b6dcp-5f,
     0x1.87d044p-83f, 0.0f, 0.0f, 0.0f, 0x1.18f52ap-10f, 0.0f, 0x1.766f02p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5f689p-6f, 0x1.b814ep-94f, 0x1.37881p-82f, 0x1.4154dep-88f,
     0x1.45d4c8p-49f, 0.0f, 0.0f, 0x1.802d6cp-37f, 0x1.0252fep-116f, 0.0f,
     0x1.961ba6p-120f, 0x1.42620ep-56f, 0x1.cea296p-119f, 0x1.a6b256p-28f,
     0x1.6a799ap-48f, 0.0f, 0x1.60112ap-2f, 0x1.ae116cp-20f, 0x1.afed38p-111f,
     0x1.201a5cp-15f, 0.0f, 0.0f, 0x1.21290ap-106f, 0x1.49f65cp-20f, 0x1.5fff46p-105f,
     0.0f, 0.0f, 0.0f, 0x1.b2ff22p-57f, 0x1.28aef8p-14f, 0.0f, 0.0f, 0.0f,
     0x1.9a4ce6p-69f, 0.0f, 0x1.338c48p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab0bdcp-109f, 0.0f, 0.0f, 0x1.915248p-11f, 0.0f, 0.0f, 0.0f, 0x1.c1bccap-47f,
     0x1.cb3b6cp-10f, 0x1.919bb4p-34f, 0.0f, 0x1.fb203cp-66f, 0x1.a11176p-79f,
     0x1.9afddap-44f, 0x1.d0e17p-78f, 0.0f, 0.0f, 0x1.af3fe8p-72f, 0x1.80876ep-18f,
     0.0f, 0x1.05123ep-14f, 0x1.2d28cap-46f, 0.0f, 0x1.73e556p-121f, 0.0f,
     0x1.e3bd32p-114f, 0x1.279db6p-100f, 0.0f, 0x1.63bb86p-60f, 0x1.abce82p-32f,
     0x1.15b978p-5f, 0x1.588cc2p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.419f56p-101f,
     0x1.4e0edep-64f, 0x1.2f44ccp-105f, 0x1.6f536ap-26f, 0x1.05b982p-62f,
     0x1.d77f6p-90f, 0.0f, 0x1.eb0b56p-46f, 0.0f, 0x1.005bc4p-81f, 0.0f,
     0x1.ac07ccp-36f, 0x1.51dd64p-105f, 0.0f, 0.0f, 0.0f, 0x1.dd14f4p-43f,
     0x1.5ac1bep-93f, 0.0f, 0x1.898f4p-83f, 0x1.c94426p-66f, 0x1.34cb04p-30f, 0.0f,
     0x1.69b80cp-41f, 0x1.f59fa2p-126f, 0x1.8dcac4p-15f, 0.0f, 0.0f, 0x1.e47286p-74f,
     0x1.f05fb4p-4f, 0x1.27e2eep-10f, 0x1.2499c4p-85f, 0x1.c6a0dep-17f, 0.0f,
     0x1.499018p-93f, 0x1.315654p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.185f52p-103f,
     0x1.b171a4p-116f, 0.0f, 0.0f, 0x1.529552p-118f, 0x1.43e43cp-105f,
     0x1.b3e7b2p-37f, 0x1.1189acp-123f, 0.0f, 0.0f, 0x1.83b19p-81f, 0x1.5187bp-39f,
     0x1.eb26fp-108f, 0.0f, 0x1.2d4bep-88f, 0.0f, 0x1.931446p-32f, 0x1.1c3356p-75f,
     0x1.0f5efep-44f, 0x1.098316p-29f, 0.0f, 0x1.351546p-102f, 0x1.c22ep-61f,
     0x1.e988fap-117f, 0x1.a9197ep-124f, 0x1.bb41d2p-73f, 0x1.019eb4p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b9224p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f316e8p-124f,
     0x1.0a43ep-64f, 0x1.078bbcp-36f, 0.0f, 0.0f, 0x1.4655f4p-84f, 0x1.1e661p-33f,
     0x1.d9c07cp-114f, 0x1.40fcf2p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02d0dp-49f, 0.0f,
     0x1.78a0f2p-80f, 0x1.c28fd6p-98f, 0x1.c529f2p-54f, 0x1.311924p-72f,
     0x1.232fe6p-98f, 0.0f, 0x1.b51754p-80f, 0.0f, 0x1.f31ddp-58f, 0.0f,
     0x1.eb1436p-104f, 0x1.5336f4p-1f, 0.0f, 0x1.3cf0aep-114f, 0x1.775df4p-76f, 0.0f,
     0.0f, 0.0f, 0x1.a8b78cp-32f, 0x1.854246p-3f, 0x1.8f88eap-44f, 0x1.290b46p-85f,
     0x1.067af6p-88f, 0x1.268774p-72f, 0x1.cb1caep-14f, 0x1.dfdce2p-117f,
     0x1.d9911ap-39f, 0x1.a9e8c2p-74f, 0x1.dda494p-6f, 0x1.a222ap-36f,
     0x1.8416bep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.271de2p-55f,
     0x1.f46744p-95f, 0x1.5b08a4p-85f, 0x1.c3b01ap-71f, 0.0f, 0.0f, 0x1.2cddbap-54f,
     0x1.fdb9cep-84f, 0x1.409f64p-64f, 0.0f, 0x1.f18d7ep-72f, 0x1.f50f82p-30f, 0.0f,
     0.0f, 0.0f, 0x1.fcf624p-37f, 0.0f, 0.0f, 0x1.6eaa1ep-27f, 0x1.f83e74p-107f, 0.0f,
     0x1.1d9598p-112f, 0.0f, 0x1.9d05cep-21f, 0.0f, 0.0f, 0x1.de85f8p-78f, 0.0f,
     0x1.27dbfap-115f, 0.0f, 0x1.84a126p-84f, 0x1.9de8ccp-12f, 0x1.9ebe1ep-28f,
     0x1.03bcd8p-72f, 0x1.e9c338p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c17636p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab43dep-105f, 0.0f, 0x1.4a0c28p-2f, 0.0f, 0.0f, 0.0f,
     0x1.9aec64p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a34d5ap-26f, 0.0f,
     0x1.9e5ce8p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8070bp-91f, 0x1.97bdd8p-53f,
     0x1.c6ca8p-77f, 0x1.f3e47ap-46f, 0.0f, 0x1.5f80e4p-7f, 0.0f, 0x1.330a8p-111f,
     0x1.97c5ap-121f, 0.0f, 0x1.2b12aap-30f, 0.0f, 0.0f, 0.0f, 0x1.9b2518p-68f,
     0x1.7a8aacp-73f, 0.0f, 0x1.e803a6p-34f, 0x1.54c90cp-95f, 0x1.1e278ep-120f, 0.0f,
     0.0f, 0x1.0ed4e2p-31f, 0.0f, 0x1.431ca8p-77f, 0.0f, 0.0f, 0.0f, 0x1.76c638p-4f,
     0.0f, 0x1.82926p-38f, 0x1.a59b32p-87f, 0x1.03b4d6p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5ce84ep-61f, 0x1.f89ad8p-55f, 0x1.ad051ap-48f, 0x1.7c689p-90f, 0.0f,
     0.0f, 0.0f, 0x1.ff73dp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c117ap-69f,
     0x1.16a336p-67f, 0x1.5afb88p-38f, 0.0f, 0x1.709b0ap-55f, 0.0f, 0x1.534d24p-20f,
     0x1.9382ap-71f, 0x1.aa8d8cp-96f, 0x1.4eb78ep-64f, 0x1.8d1974p-105f,
     0x1.383cecp-86f, 0.0f, 0x1.268dcp-29f, 0x1.da58d6p-103f, 0x1.179ed4p-14f,
     0x1.77b45ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c43f8p-99f, 0x1.9dccf8p-35f,
     0x1.d65054p-71f, 0x1.cdf7d6p-65f, 0.0f, 0.0f, 0x1.ab9622p-62f, 0x1.02e908p-17f,
     0x1.7b34f6p-38f, 0x1.8c153ap-96f, 0.0f, 0x1.1907c8p-19f, 0.0f, 0x1.c6d496p-86f,
     0x1.0774c6p-123f, 0x1.856832p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de0f3ap-108f,
     0.0f, 0.0f, 0x1.ec5bd8p-91f, 0x1.a5452cp-57f, 0.0f, 0x1.144154p-1f, 0.0f,
     0x1.5d8e2cp-53f, 0x1.2fdec4p-24f, 0x1.8ea412p-29f, 0.0f, 0.0f, 0x1.5b0598p-66f,
     0x1.3bfd66p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbe1a2p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.453ea4p-63f, 0.0f, 0x1.78a858p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f98bf8p-113f, 0.0f,
     0x1.59db5ep-114f, 0x1.cc2d2ap-79f, 0x1.d5431p-42f, 0.0f, 0x1.e43e86p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c54052p-109f, 0.0f, 0.0f, 0.0f, 0x1.e2850ep-14f,
     0x1.9d58dp-88f, 0x1.f47f58p-61f, 0x1.77483ep-70f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.cd66b8p-126f, 0.0f, 0.0f, 0x1.69330cp-16f, 0x1.883278p-85f, 0x1.654a04p-29f,
     0x1.cf0542p-31f, 0x1.abd34cp-81f, 0x1.530c84p-39f, 0.0f, 0.0f, 0x1.0028dp-117f,
     0.0f, 0.0f, 0x1.da7ca8p-84f, 0.0f, 0x1.3ae38ap-47f, 0.0f, 0x1.f438dcp-37f,
     0x1.a32f12p-30f, 0.0f, 0.0f, 0x1.610fcp-82f, 0x1.5da852p-76f, 0.0f,
     0x1.37467p-17f, 0.0f, 0x1.b32a3ep-56f, 0x1.89d5d4p-95f, 0x1.f51728p-29f, 0.0f,
     0.0f, 0x1.fee23ep-121f, 0x1.05552ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfd408p-8f, 0x1.17838cp-77f, 0.0f, 0x1.acca7cp-97f, 0.0f, 0.0f,
     0x1.d85852p-125f, 0.0f, 0.0f, 0x1.7fba26p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc7ad8p-86f, 0x1.7f633p-65f, 0.0f, 0.0f, 0x1.348ed6p-61f, 0.0f,
     0x1.006928p-59f, 0.0f, 0.0f, 0.0f, 0x1.920ffcp-97f, 0.0f, 0x1.29b1c4p-77f,
     0x1.45944ap-25f, 0x1.0b424ep-44f, 0x1.d9410cp-20f, 0.0f, 0.0f, 0x1.db8214p-67f,
     0x1.023126p-81f, 0x1.1a11aap-41f, 0x1.7a8c4cp-42f, 0x1.7f777ep-69f, 0.0f, 0.0f,
     0x1.563f2p-76f, 0.0f, 0.0f, 0.0f, 0x1.7b20a6p-125f, 0x1.ec65d2p-9f, 0.0f, 0.0f,
     0x1.68496ap-75f, 0.0f, 0x1.9eac86p-19f, 0x1.3b8b86p-63f, 0x1.037638p-42f, 0.0f,
     0.0f, 0x1.c46fb4p-7f, 0.0f, 0.0f, 0x1.5516b2p-5f, 0.0f, 0x1.a12ff6p-60f,
     0x1.e6cb18p-104f, 0.0f, 0x1.ce6b8cp-2f, 0x1.0ee018p-70f, 0.0f, 0x1.ee44ecp-7f,
     0.0f, 0x1.9a924cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58c4bp-47f,
     0.0f, 0x1.8dd56cp-98f, 0x1.7d10bp-114f, 0x1.225ff2p-126f, 0.0f, 0.0f,
     0x1.3b952cp-29f, 0.0f, 0.0f, 0.0f, 0x1.650da6p-34f, 0.0f, 0.0f, 0x1.c8296ep-25f,
     0.0f, 0.0f, 0.0f, 0x1.c0c8fp-44f, 0x1.79fbf8p-111f, 0x1.4cea36p-7f,
     0x1.886336p-43f, 0x1.bd0774p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f9adep-60f, 0.0f,
     0x1.0162dap-24f, 0.0f, 0x1.895fdap-86f, 0.0f, 0x1.208e54p-100f, 0x1.cf20e6p-74f,
     0.0f, 0.0f, 0x1.ba993ep-110f, 0x1.0dc1c4p-56f, 0x1.0a238cp-35f, 0x1.b7ba9ap-20f,
     0x1.b80442p-106f, 0x1.a7bbdcp-115f, 0x1.d1ebdcp-14f, 0x1.0d6046p-79f,
     0x1.51aedep-34f, 0.0f, 0x1.863f9ep-114f, 0x1.28c08ap-76f, 0.0f, 0x1.f0604cp-81f,
     0x1.2a8d76p-60f, 0x1.e48646p-109f, 0x1.04f64ap-3f, 0x1.ba8c5ep-1f, 0.0f,
     0x1.9d718ap-105f, 0.0f, 0.0f, 0.0f, 0x1.9eb7b6p-126f, 0x1.6fa11cp-90f,
     0x1.303cbep-62f, 0x1.0cc6ecp-11f, 0x1.d768e6p-87f, 0.0f, 0.0f, 0.0f,
     0x1.77df94p-81f, 0x1.a212f8p-5f, 0x1.4e3194p-54f, 0x1.204da8p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.38b348p-58f, 0.0f, 0.0f, 0.0f, 0x1.5a1f36p-9f, 0x1.958684p-66f,
     0x1.76ea3ep-46f, 0x1.b39096p-33f, 0x1.915f18p-63f, 0x1.c1322p-53f,
     0x1.3722f6p-109f, 0x1.f0293p-32f, 0.0f, 0x1.146412p-18f, 0.0f, 0.0f, 0.0f,
     0x1.11fc28p-55f, 0.0f, 0x1.cd9b52p-122f, 0x1.8fd036p-44f, 0.0f, 0x1.da56c4p-100f,
     0x1.dacbcap-13f, 0x1.20ae0ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e69ccp-77f,
     0x1.6d3cc2p-71f, 0.0f, 0x1.d62338p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fd00ap-71f,
     0x1.9c8734p-124f, 0x1.2254fap-104f, 0.0f, 0x1.78f5dap-73f, 0x1.91a2f8p-67f,
     0x1.fde3c6p-15f, 0x1.cfa7e8p-2f, 0.0f, 0x1.e78534p-28f, 0.0f, 0.0f, 0.0f,
     0x1.587a72p-44f, 0x1.640976p-86f, 0x1.b97c52p-25f, 0.0f, 0x1.e85cbp-77f,
     0x1.4bc686p-89f, 0.0f, 0.0f, 0x1.680b4ap-43f, 0x1.a13144p-62f, 0x1.3891eep-40f,
     0x1.645892p-84f, 0.0f, 0.0f, 0.0f, 0x1.241556p-25f, 0x1.f6ff46p-100f,
     0x1.c1b872p-40f, 0x1.01029p-98f, 0x1.eaa556p-37f, 0x1.696976p-23f, 0.0f,
     0x1.1303a4p-80f, 0x1.77c93cp-10f, 0x1.ab227p-69f, 0x1.729262p-117f, 0.0f,
     0x1.693b8ep-80f, 0x1.02bfb4p-32f, 0x1.c2f69p-57f, 0.0f, 0x1.3cc4dp-70f, 0.0f,
     0x1.5d3fe6p-18f, 0.0f, 0.0f, 0.0f, 0x1.1f5b4ep-31f, 0x1.0f1396p-107f, 0.0f, 0.0f,
     0x1.28f4d8p-124f, 0.0f, 0x1.06f1b8p-15f, 0x1.f760a8p-77f, 0.0f, 0x1.a2ec9cp-30f,
     0x1.4dfd7cp-34f, 0.0f, 0x1.f9f854p-40f, 0x1.b65f8p-19f, 0.0f, 0.0f, 0.0f,
     0x1.49e096p-97f, 0x1.8c60c6p-56f, 0.0f, 0x1.0ab5e6p-126f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fmodf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_fmodf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fmodf1_purecfma bench acc %a\n", global_bench_acc);
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
