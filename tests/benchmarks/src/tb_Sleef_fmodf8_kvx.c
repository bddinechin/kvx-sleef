/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmodf8_kvx.c --function Sleef_fmodf8_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0x1.13901ep-116f, 0x1.e763b6p-119f, 0x1.e025a2p-49f, 0.0f, 0.0f, 0.0f,
     0x1.47039ap-31f, 0x1.94b4bcp-81f, 0.0f, 0x1.85d3aep-111f, 0.0f, 0x1.a2629p-68f,
     0.0f, 0x1.7d79dap-12f, 0x1.f573d6p-119f, 0.0f, 0x1.b59a9ap-20f, 0x1.61d886p-46f,
     0.0f, 0x1.a43af8p-47f, 0x1.ffc52p-73f, 0.0f, 0.0f, 0.0f, 0x1.4e768ap-3f,
     0x1.322decp-85f, 0.0f, 0.0f, 0x1.202414p-67f, 0.0f, 0.0f, 0x1.691796p-36f,
     0x1.1b52dap-47f, 0x1.c7aa44p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.654cd4p-86f,
     0x1.27042cp-111f, 0x1.8dd704p-25f, 0.0f, 0.0f, 0.0f, 0x1.856208p-88f, 0.0f, 0.0f,
     0x1.694c8p-66f, 0.0f, 0.0f, 0x1.43f98cp-87f, 0x1.d897fap-101f, 0x1.c79386p-69f,
     0x1.7334eep-85f, 0.0f, 0x1.7cbbd2p-29f, 0x1.3027fp-122f, 0x1.96cc06p-45f,
     0x1.fa1e54p-97f, 0.0f, 0x1.5a1f9ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8fcd2p-105f, 0.0f, 0x1.45696p-104f, 0x1.7d6ffep-74f, 0x1.23116ap-32f,
     0x1.dcde28p-54f, 0x1.f529fp-35f, 0.0f, 0x1.1d1128p-4f, 0x1.0ed1d6p-53f, 0.0f,
     0x1.ade696p-91f, 0.0f, 0.0f, 0.0f, 0x1.ffbb82p-106f, 0.0f, 0x1.f59a1ap-43f, 0.0f,
     0x1.044c4ap-83f, 0.0f, 0x1.1d384ep-72f, 0.0f, 0x1.952f18p-61f, 0x1.681ba4p-17f,
     0.0f, 0x1.1f813cp-38f, 0.0f, 0x1.1e7712p-41f, 0x1.d7b48ep-42f, 0.0f,
     0x1.0c103p-125f, 0.0f, 0.0f, 0x1.00acfap-89f, 0x1.8008cep-55f, 0x1.97370ep-96f,
     0x1.408a5ap-35f, 0.0f, 0.0f, 0.0f, 0x1.2af96ap-23f, 0x1.881d64p-71f,
     0x1.c9a0cep-43f, 0.0f, 0.0f, 0x1.0cee2cp-82f, 0x1.379c4ap-103f, 0x1.6fa424p-95f,
     0.0f, 0x1.20d298p-81f, 0.0f, 0x1.1157c4p-19f, 0x1.228c78p-89f, 0.0f, 0.0f,
     0x1.73c47cp-112f, 0x1.e91fa4p-103f, 0.0f, 0.0f, 0x1.e67468p-123f,
     0x1.accd0ap-17f, 0x1.e16fa4p-45f, 0.0f, 0.0f, 0.0f, 0x1.40925cp-68f, 0.0f, 0.0f,
     0x1.08f58p-29f, 0.0f, 0x1.61a622p-110f, 0x1.6954dcp-9f, 0.0f, 0.0f,
     0x1.0b458p-96f, 0x1.1783cp-87f, 0x1.806fa2p-98f, 0.0f, 0x1.a5dd12p-28f,
     0x1.718046p-29f, 0x1.da2172p-118f, 0.0f, 0.0f, 0x1.e5b93ep-124f, 0x1.3429cep-32f,
     0x1.949a4ep-48f, 0x1.88a72p-25f, 0.0f, 0x1.4f4986p-3f, 0.0f, 0x1.cf88eep-62f,
     0x1.e8f728p-10f, 0x1.256838p-46f, 0x1.632ca6p-47f, 0.0f, 0x1.e424a2p-99f,
     0x1.a809bp-67f, 0x1.2d239p-29f, 0.0f, 0.0f, 0x1.54b308p-40f, 0x1.3e7006p-109f,
     0x1.9376dcp-16f, 0x1.d5fddep-114f, 0.0f, 0x1.4e3352p-125f, 0x1.ca8b76p-119f,
     0x1.e28eep-94f, 0x1.6adecap-31f, 0x1.5aab74p-45f, 0.0f, 0.0f, 0.0f,
     0x1.486202p-87f, 0x1.0bd72cp-12f, 0x1.3e6da6p-81f, 0x1.e70edcp-75f, 0.0f,
     0x1.a5da66p-76f, 0.0f, 0x1.a600aap-95f, 0x1.f54288p-22f, 0.0f, 0.0f,
     0x1.d4789ap-126f, 0x1.e12164p-18f, 0.0f, 0x1.5f80d4p-95f, 0.0f, 0.0f, 0.0f,
     0x1.e6b56ep-5f, 0.0f, 0.0f, 0x1.e80dp-19f, 0.0f, 0.0f, 0.0f, 0x1.2c89e2p-17f,
     0.0f, 0x1.ab0732p-38f, 0.0f, 0.0f, 0x1.02bfep-2f, 0x1.3723ap-100f,
     0x1.2d62c2p-81f, 0.0f, 0x1.4bacc6p-76f, 0x1.172e0cp-55f, 0x1.a89008p-32f, 0.0f,
     0x1.989e62p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.917e9p-10f, 0x1.97773cp-10f,
     0x1.b9d9ap-31f, 0x1.483a1p-51f, 0x1.dee2a8p-15f, 0x1.d9557p-30f, 0x1.8bffe8p-36f,
     0x1.cc2e56p-50f, 0.0f, 0x1.b6a8b6p-105f, 0x1.08b658p-49f, 0x1.f0da4ap-125f, 0.0f,
     0.0f, 0x1.23aab6p-82f, 0.0f, 0.0f, 0.0f, 0x1.0b4b5p-85f, 0.0f, 0.0f,
     0x1.71d85ap-93f, 0x1.1c9d46p-30f, 0.0f, 0x1.1963f6p-74f, 0.0f, 0x1.19f25cp-106f,
     0.0f, 0x1.aa4f44p-9f, 0.0f, 0.0f, 0x1.bbf98p-50f, 0.0f, 0x1.def2e4p-62f, 0.0f,
     0x1.0c8fbap-22f, 0x1.c0755cp-73f, 0x1.bd251ep-67f, 0.0f, 0.0f, 0x1.0ebf44p-48f,
     0x1.493752p-90f, 0x1.35cb2p-82f, 0x1.ae3cdep-68f, 0.0f, 0x1.3ca2dap-32f,
     0x1.371032p-111f, 0.0f, 0x1.094baep-41f, 0x1.adcf12p-64f, 0x1.67aa5ap-2f,
     0x1.22c32p-111f, 0x1.8a532ap-78f, 0.0f, 0.0f, 0.0f, 0x1.c7266p-97f,
     0x1.f48814p-113f, 0.0f, 0.0f, 0x1.b3b128p-28f, 0.0f, 0.0f, 0x1.90bef2p-108f,
     0x1.36fbfep-38f, 0.0f, 0.0f, 0x1.cfaf2ep-89f, 0.0f, 0.0f, 0x1.600db4p-67f,
     0x1.b437bp-115f, 0.0f, 0x1.e3d314p-122f, 0x1.a7f7b4p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.04f8fep-86f, 0.0f, 0x1.802a4ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.35b2dcp-123f, 0.0f, 0x1.5c1dc6p-88f, 0.0f, 0.0f, 0x1.c5b0dp-101f, 0.0f, 0.0f,
     0.0f, 0x1.1686cep-95f, 0.0f, 0x1.e9ec3p-79f, 0.0f, 0x1.4ac042p-11f, 0.0f, 0.0f,
     0.0f, 0x1.bd8dbcp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd7fp-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e76b3cp-96f, 0x1.07c8fep-17f, 0x1.a5cf2ap-52f, 0.0f, 0.0f,
     0x1.17b622p-125f, 0x1.dd728cp-56f, 0x1.ddca2ap-99f, 0x1.78fdf2p-118f,
     0x1.4a8b0cp-78f, 0.0f, 0x1.1dd938p-119f, 0x1.e203acp-41f, 0x1.b3ed7ep-17f,
     0x1.90bea8p-113f, 0.0f, 0x1.4f8124p-39f, 0x1.89542p-35f, 0x1.8ee556p-66f, 0.0f,
     0x1.13cc28p-63f, 0x1.cf421p-92f, 0.0f, 0x1.73f29ep-49f, 0.0f, 0.0f,
     0x1.4a2688p-113f, 0.0f, 0x1.b5ea36p-103f, 0.0f, 0.0f, 0x1.673b42p-29f,
     0x1.94271cp-25f, 0x1.c27d8ap-108f, 0x1.6e15aep-18f, 0x1.2a09ecp-11f,
     0x1.64c1b4p-73f, 0x1.5078ccp-55f, 0.0f, 0x1.786ef8p-46f, 0.0f, 0.0f, 0.0f,
     0x1.b46edep-22f, 0x1.020da8p-34f, 0x1.59bc8p-48f, 0x1.55b044p-86f,
     0x1.908c7cp-86f, 0x1.e5bab2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.736e44p-55f,
     0x1.9408ep-116f, 0x1.41fe7ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad0b3p-100f,
     0x1.47816ep-115f, 0.0f, 0x1.e7d62ap-56f, 0.0f, 0x1.b895e4p-1f, 0x1.519936p-105f,
     0x1.ee82a2p-33f, 0x1.aaa606p-15f, 0.0f, 0.0f, 0x1.ce22b8p-100f, 0x1.382afep-117f,
     0x1.bca79p-92f, 0.0f, 0x1.5d66ecp-92f, 0.0f, 0.0f, 0x1.b32a6ep-98f, 0.0f, 0.0f,
     0x1.aefb08p-68f, 0.0f, 0x1.79b3b4p-101f, 0x1.fb7a9ap-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a545fcp-1f, 0x1.f2acdap-17f, 0.0f, 0.0f, 0x1.9494fap-126f, 0x1.55ca9cp-24f,
     0.0f, 0x1.b4baecp-86f, 0.0f, 0.0f, 0.0f, 0x1.884ee6p-121f, 0.0f, 0.0f,
     0x1.0df876p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e34fep-105f, 0.0f, 0x1.73f24ap-33f,
     0x1.b892cap-6f, 0x1.c3bbcep-80f, 0x1.c7ed2ap-45f, 0.0f, 0x1p0f, 0.0f,
     0x1.d1452p-26f, 0x1.b47ab6p-61f, 0.0f, 0.0f, 0x1.817702p-51f, 0x1.2609d8p-37f,
     0x1.2b1534p-39f, 0.0f, 0.0f, 0x1.80f494p-65f, 0x1.877036p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.029a26p-120f, 0.0f, 0x1.e2a7bcp-67f, 0.0f, 0x1.6197acp-65f, 0.0f,
     0x1.7558a6p-55f, 0.0f, 0x1.dce99ep-121f, 0.0f, 0.0f, 0x1.ea80f2p-18f, 0.0f, 0.0f,
     0x1.230cc6p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.158024p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.222748p-119f, 0x1.5a9196p-72f, 0x1.0eef1cp-25f, 0x1.cded86p-44f, 0.0f,
     0x1.2bbb28p-27f, 0.0f, 0.0f, 0x1.243ceap-29f, 0.0f, 0x1.131b2ap-30f,
     0x1.b32c3ap-39f, 0x1.ab4a3p-122f, 0x1.71c1bp-46f, 0x1.a709e4p-76f, 0.0f, 0.0f,
     0x1.4bba1cp-98f, 0x1.083224p-62f, 0x1.611848p-71f, 0x1.ec7244p-64f, 0.0f,
     0x1.01e67ep-96f, 0.0f, 0x1.416e86p-46f, 0.0f, 0.0f, 0.0f, 0x1.4cf33ap-105f, 0.0f,
     0x1.fb1ff2p-11f, 0x1.17be72p-49f, 0x1.3ea4ep-94f, 0.0f, 0x1.ee23a2p-18f,
     0x1.98cae8p-86f, 0x1.2a01f8p-91f, 0x1.3d469p-50f, 0x1.9e2692p-92f,
     0x1.5d7064p-87f, 0x1.a68b32p-120f, 0.0f, 0.0f, 0x1.31d1dcp-22f, 0.0f,
     0x1.e81cbp-77f, 0x1.f57c62p-84f, 0x1.d345cep-11f, 0.0f, 0x1.12f992p-112f,
     0x1.ca67a6p-90f, 0.0f, 0.0f, 0.0f, 0x1.d2146ep-64f, 0.0f, 0.0f, 0x1.a05f96p-121f,
     0.0f, 0x1.92338ep-15f, 0x1.5a7706p-12f, 0.0f, 0x1.edf46p-6f, 0.0f,
     0x1.04d9b4p-42f, 0.0f, 0x1.79a9a6p-60f, 0x1.624122p-24f, 0.0f, 0.0f, 0.0f,
     0x1.6561acp-2f, 0x1.927a3ap-43f, 0x1.70eac8p-56f, 0.0f, 0x1.42de64p-46f, 0.0f,
     0.0f, 0x1.8d30bp-103f, 0x1.4ae452p-89f, 0x1.268936p-38f, 0.0f, 0.0f,
     0x1.987382p-94f, 0x1.3ed4d6p-29f, 0x1.875368p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afbcd4p-90f, 0.0f, 0.0f, 0.0f, 0x1.898982p-103f, 0.0f, 0x1.ba10c6p-56f, 0.0f,
     0.0f, 0x1.f91488p-123f, 0x1.71d3dp-17f, 0x1.aae702p-38f, 0x1.ba5962p-81f,
     0x1.98f486p-76f, 0x1.f73306p-1f, 0x1.55de6cp-85f, 0.0f, 0x1.0128bp-64f, 0.0f,
     0x1.e3f05p-4f, 0.0f, 0x1.ed615ep-55f, 0.0f, 0.0f, 0x1.72d028p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ebdf18p-22f, 0.0f, 0.0f, 0x1.0d089cp-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c5ed1ap-18f, 0x1.04faccp-45f, 0x1.8b90d2p-34f, 0.0f, 0x1.c45722p-125f,
     0x1.7d7eap-52f, 0x1.6ef20ep-108f, 0x1.da890cp-45f, 0x1.0144f8p-3f, 0.0f, 0.0f,
     0x1.523c8ep-98f, 0.0f, 0.0f, 0x1.5391c8p-95f, 0x1.4b8fe4p-36f, 0.0f,
     0x1.3c23aap-12f, 0.0f, 0.0f, 0.0f, 0x1.176da2p-15f, 0x1.8118e6p-60f,
     0x1.2168cp-92f, 0x1.7425dcp-21f, 0x1.d7abfp-86f, 0.0f, 0.0f, 0.0f,
     0x1.0da8c2p-121f, 0x1.29ff82p-60f, 0x1.02ac1cp-105f, 0x1.9f215cp-108f, 0.0f,
     0x1.60cffap-75f, 0.0f, 0.0f, 0.0f, 0x1.84f572p-60f, 0.0f, 0x1.4b475p-68f, 0.0f,
     0x1.f4c1e6p-20f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.2ce054p-123f, 0.0f,
     0x1.99d5ap-122f, 0.0f, 0.0f, 0.0f, 0x1.5f0bd6p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07d072p-17f, 0.0f, 0x1.1a72b2p-32f, 0.0f, 0.0f, 0.0f, 0x1.e7402cp-81f,
     0x1.6234a6p-24f, 0x1.fdd74p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce2fa2p-32f,
     0x1.5e46bcp-2f, 0x1.195a14p-70f, 0.0f, 0.0f, 0x1.6be682p-46f, 0x1.58409ep-37f,
     0x1.619066p-85f, 0.0f, 0x1.eabe6ap-123f, 0x1.1a2b4cp-51f, 0.0f, 0x1.bca676p-93f,
     0x1.4731b6p-19f, 0.0f, 0.0f, 0.0f, 0x1.778facp-22f, 0x1.ffcb9cp-54f,
     0x1.e22e22p-33f, 0.0f, 0x1.dfc246p-100f, 0x1.bbba8p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0323eep-32f, 0.0f, 0x1.26d46cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bbb8p-101f,
     0x1.1c4efep-23f, 0.0f, 0.0f, 0x1.41d6f6p-126f, 0.0f, 0.0f, 0x1.6e5e6ep-24f,
     0x1.dcf42p-15f, 0x1.571176p-75f, 0.0f, 0x1.92beb4p-17f, 0x1.26e87ep-89f,
     0x1.0812cp-116f, 0.0f, 0x1.5fb2c2p-17f, 0.0f, 0.0f, 0x1.fbcec2p-102f,
     0x1.8c8d2cp-10f, 0x1.acebc6p-42f, 0.0f, 0x1.180d9ap-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3aa516p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa02bep-44f, 0.0f,
     0x1.9e82f6p-29f, 0x1.6a0ec2p-96f, 0x1.93a2cap-41f, 0.0f, 0.0f, 0x1.16c9c4p-60f,
     0.0f, 0.0f, 0x1.db9924p-13f, 0.0f, 0x1.80914ap-2f, 0.0f, 0.0f, 0x1.ece1fap-102f,
     0x1.dcde38p-78f, 0x1.5e49bp-118f, 0x1.2c5c66p-8f, 0.0f, 0x1.85e7eep-51f, 0.0f,
     0.0f, 0x1.508a5p-25f, 0.0f, 0.0f, 0.0f, 0x1.ded732p-19f, 0x1.c6ee3cp-76f,
     0x1.479e1cp-16f, 0.0f, 0x1.d5ed5ep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1bdddap-84f, 0x1.223b58p-80f, 0.0f, 0x1.241cd2p-124f, 0.0f,
     0x1.5290fap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f08ap-104f, 0.0f, 0.0f,
     0x1.381c32p-33f, 0.0f, 0x1.853148p-111f, 0x1.c60c68p-106f, 0x1.8ee2a8p-15f, 0.0f,
     0x1.f065cp-74f, 0.0f, 0x1.f980b6p-45f, 0x1.bc9918p-37f, 0.0f, 0.0f,
     0x1.8d2988p-7f, 0.0f, 0x1.63687ap-50f, 0x1.82ce78p-47f, 0.0f, 0.0f,
     0x1.c46efp-105f, 0x1.561276p-29f, 0.0f, 0.0f, 0.0f, 0x1.83977ap-78f, 0.0f,
     0x1.cd1daep-111f, 0.0f, 0x1.a64b6p-52f, 0x1.b13d98p-59f, 0x1.92f2bp-67f,
     0x1.417ca6p-2f, 0x1.dad792p-56f, 0.0f, 0.0f, 0x1.d84414p-111f, 0.0f, 0.0f, 0.0f,
     0x1.6f1efp-88f, 0x1.559b0cp-99f, 0x1.639e18p-107f, 0x1.21b146p-71f,
     0x1.c5844ap-112f, 0.0f, 0x1.932adep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95124cp-57f,
     0.0f, 0.0f, 0x1.ee583cp-7f, 0.0f, 0.0f, 0x1.83a61ep-24f, 0.0f, 0x1.d9194ep-116f,
     0.0f, 0.0f, 0x1.2c3862p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f17b56p-48f,
     0x1.5582cep-25f, 0.0f, 0.0f, 0x1.7dc476p-86f, 0x1.52bfe4p-82f, 0.0f, 0.0f, 0.0f,
     0x1.4db346p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2998f8p-50f, 0.0f,
     0.0f, 0x1.0c9b6p-113f, 0x1.db0bf8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36d61p-44f, 0.0f, 0.0f, 0.0f, 0x1.dc44d8p-123f, 0.0f, 0x1.416692p-35f,
     0x1.424ecep-32f, 0x1.1e71a2p-29f, 0.0f, 0.0f, 0x1.4a8542p-77f, 0.0f, 0.0f,
     0x1.fc6acep-104f, 0.0f, 0.0f, 0x1.1656a8p-90f, 0.0f, 0x1.e0a15p-45f, 0.0f, 0.0f,
     0x1.3a9bc4p-19f, 0x1.b84e3ap-99f, 0x1.254884p-81f, 0x1.00b5a4p-101f, 0.0f,
     0x1.8225p-91f, 0x1.28659cp-17f, 0.0f, 0x1.d6d1bep-86f, 0x1.49e004p-126f, 0.0f,
     0x1.ce319ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.344a9cp-123f, 0.0f, 0x1.c481b2p-85f,
     0.0f, 0x1.f3589ap-46f, 0x1.a86e1p-26f, 0.0f, 0x1.bc686ep-6f, 0x1.8cb7aap-82f,
     0.0f, 0.0f, 0.0f, 0x1.93c19ap-118f, 0.0f, 0.0f, 0.0f, 0x1.4ad0b2p-101f,
     0x1.808812p-38f, 0.0f, 0.0f, 0x1.062b26p-113f, 0.0f, 0x1.bc2b26p-125f, 0.0f,
     0x1.0c654ap-33f, 0.0f, 0.0f, 0x1.8ac15cp-38f, 0x1.92cf36p-105f, 0.0f,
     0x1.86ac12p-31f, 0x1.c1e29ep-121f, 0x1.4abd3ep-91f, 0.0f, 0x1.7e05fap-68f, 0.0f,
     0.0f, 0x1.df2364p-37f, 0.0f, 0x1.4c8d16p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83317ap-114f, 0.0f, 0x1.01f89ep-19f, 0.0f, 0.0f, 0x1.5fe9ccp-98f,
     0x1.9eaa8ep-54f, 0x1.eadd58p-12f, 0.0f, 0.0f, 0x1.ca0884p-63f, 0x1.d0fd7ap-61f,
     0x1.d690dcp-42f, 0x1p0f, 0x1.96df74p-45f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0.0f, 0.0f, 0x1.6596dap-29f, 0.0f, 0.0f, 0.0f, 0x1.f48e6ep-44f,
     0x1.fb833ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39ef5cp-68f, 0.0f,
     0x1.8b1976p-19f, 0x1.28f74cp-83f, 0.0f, 0.0f, 0.0f, 0x1.90367p-98f, 0.0f,
     0x1.72fe54p-87f, 0x1.cbbb5ap-123f, 0.0f, 0x1.7182aep-103f, 0.0f, 0x1.101962p-26f,
     0.0f, 0x1.6aa588p-101f, 0.0f, 0x1.219ebap-63f, 0.0f, 0x1.9251d8p-53f, 0.0f, 0.0f,
     0x1.38c016p-2f, 0x1.8c5bd2p-61f, 0x1.be4634p-82f, 0.0f, 0x1.226716p-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb249cp-16f,
     0x1.0052a4p-89f, 0x1.269a94p-3f, 0x1.751ce8p-76f, 0x1.4bdb1p-6f, 0.0f, 0.0f,
     0.0f, 0x1.5e0a0cp-117f, 0x1.89178ep-100f, 0x1.f80476p-113f, 0x1.1f17b4p-41f,
     0x1.3aba7ep-1f, 0x1.522208p-24f, 0x1.b30524p-71f, 0.0f, 0.0f, 0x1.8f12ep-66f,
     0.0f, 0x1.fe3d98p-13f, 0x1.9c0174p-84f, 0.0f, 0x1.1a6d0ep-32f, 0x1.ce6376p-120f,
     0.0f, 0x1.13fc6ap-91f, 0.0f, 0x1.27399ep-108f, 0x1.19f38ap-77f, 0x1.a589f4p-73f,
     0x1.1e3c6ap-118f, 0.0f, 0x1.a414eep-120f, 0.0f, 0x1.8f807ep-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fe303p-114f, 0.0f, 0.0f, 0x1.62affep-53f, 0.0f, 0.0f,
     0x1.686988p-63f, 0x1.85fa4cp-108f, 0.0f, 0x1.e93f08p-27f, 0x1.2232c4p-59f,
     0x1.e7e7f4p-103f, 0x1.3e8d1cp-106f, 0.0f, 0x1.38a036p-121f, 0x1.7b1ba6p-46f,
     0x1.b88beap-91f, 0.0f, 0.0f, 0x1.b08916p-25f, 0x1.edbe6ep-23f, 0x1.9471f4p-53f,
     0.0f, 0x1.76466p-14f, 0x1.478ff8p-26f, 0.0f, 0x1.7b27c8p-74f, 0.0f,
     0x1.11d64ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02e0e2p-37f, 0x1.26c022p-119f,
     0x1.5d108cp-15f, 0x1.9a4f3ep-6f, 0.0f, 0.0f, 0x1.6651b6p-79f, 0x1.75b66ap-13f,
     0x1.5b5e6ep-47f, 0x1.1fd6bap-49f, 0x1.1ec276p-90f, 0x1.20259p-124f, 0.0f, 0.0f,
     0x1.d14a1p-11f, 0x1.7dd002p-13f, 0.0f, 0x1p0f, 0x1.afa284p-107f, 0.0f, 0.0f,
     0.0f, 0x1.851362p-69f, 0x1.4bfa6p-32f, 0.0f, 0.0f, 0.0f, 0x1.44ac8ep-33f,
     0x1.a1319ap-63f, 0.0f, 0x1.39367ap-49f, 0x1.a7f4f6p-32f, 0.0f, 0.0f,
     0x1.edee74p-96f, 0.0f, 0.0f, 0x1.b8b3ecp-115f, 0x1.91768p-62f, 0.0f,
     0x1.b9a354p-64f, 0x1.099718p-32f, 0.0f, 0.0f, 0.0f, 0x1.5175bep-50f,
     0x1.ab1548p-4f, 0x1.f7b7f8p-125f, 0x1.668728p-73f, 0.0f, 0x1.3622b2p-112f,
     0x1.f7e89ap-29f, 0x1.895a3cp-50f, 0.0f, 0x1.aa8ca6p-119f, 0x1.ef48a2p-50f,
     0x1.6b8268p-24f, 0x1.a0c3b2p-120f, 0.0f, 0.0f, 0x1.1e060ap-6f, 0x1.8b51eep-96f,
     0x1.a13b62p-112f, 0.0f, 0x1.1f847ep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.313a38p-17f, 0x1.02ef5p-32f, 0.0f, 0.0f, 0.0f, 0x1.ebef02p-90f,
     0x1.f4c25ep-100f, 0x1.1bc43ep-46f, 0x1.f5e53cp-8f, 0x1.2423p-66f,
     0x1.e2e6f6p-81f, 0x1.4d9d8cp-18f, 0x1.7facb8p-64f, 0x1.cc2484p-31f,
     0x1.7400c4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fab7d6p-67f, 0x1.3a6e1cp-118f,
     0x1.36b97cp-66f, 0x1.886046p-101f, 0.0f, 0x1.390ff8p-106f, 0.0f, 0.0f, 0.0f,
     0x1.37b58ap-48f, 0x1.675eb4p-125f, 0.0f, 0x1.0adb4cp-123f, 0.0f, 0.0f,
     0x1.7ba892p-77f, 0.0f, 0.0f, 0x1.3845cp-114f, 0.0f, 0.0f, 0x1.8fde64p-94f, 0.0f,
     0x1.701b6ap-85f, 0x1.92e45cp-112f, 0.0f, 0x1.8a04ecp-41f, 0.0f, 0x1.4ec58p-16f,
     0x1.dc5d1ep-63f, 0.0f, 0x1.552506p-81f, 0.0f, 0.0f, 0x1.dd7158p-8f,
     0x1.d851a6p-72f, 0x1.fc11fcp-4f, 0.0f, 0.0f, 0x1.860406p-23f, 0.0f,
     0x1.1f0ffep-55f, 0.0f, 0x1.7b95a2p-36f, 0.0f, 0x1.3d8a2ap-12f, 0.0f,
     0x1.89a1c2p-111f, 0x1.5195e2p-66f, 0.0f, 0.0f, 0.0f, 0x1.68f3a2p-50f, 0.0f,
     0x1.ce6792p-57f, 0.0f, 0.0f, 0x1.7970a4p-111f, 0.0f, 0.0f, 0x1.11371p-51f, 0.0f,
     0x1.f534c8p-80f, 0.0f, 0x1.878198p-62f, 0.0f, 0.0f, 0.0f, 0x1.7fcfbcp-35f,
     0x1.5ce6cp-114f, 0x1.a4ead4p-97f, 0.0f, 0.0f, 0x1.5ddd5ep-88f, 0.0f,
     0x1.f2d5p-105f, 0x1.e64694p-119f, 0x1.288b48p-48f, 0x1.190f14p-29f, 0.0f,
     0x1.c7ebd2p-14f, 0x1.fdcfd8p-55f, 0.0f, 0.0f, 0x1.b08782p-9f, 0.0f,
     0x1.9c0f1ap-6f, 0.0f, 0x1.35f5c6p-55f, 0.0f, 0.0f, 0x1.dab08ep-64f,
     0x1.15526ap-25f, 0x1.4396ccp-96f, 0x1.e3116p-111f, 0x1.432686p-59f,
     0x1.561c38p-80f, 0x1.c5d0c4p-101f, 0.0f, 0.0f, 0x1.705118p-38f, 0x1.8d423ep-64f,
     0x1.a27696p-13f, 0.0f, 0x1.e95868p-82f, 0x1.14a1b8p-37f, 0.0f, 0.0f, 0.0f,
     0x1.1b4f96p-64f, 0x1.d41ecp-86f, 0x1.859c6ap-116f, 0x1.45976ep-12f, 0.0f,
     0x1.eb65f6p-83f, 0.0f, 0x1.290464p-43f, 0x1.ff6d6ep-120f, 0.0f, 0x1.455242p-43f,
     0.0f, 0.0f, 0x1.d1f19ap-121f, 0x1.e905dcp-64f, 0.0f, 0.0f, 0x1.90d6fp-4f,
     0x1.d60f9p-22f, 0.0f, 0x1.7e187p-36f, 0.0f, 0x1.a5a878p-8f, 0.0f,
     0x1.7cc046p-99f, 0x1.21fcecp-42f, 0x1.b00bfp-97f, 0x1.fc6fc4p-55f, 0.0f,
     0x1.736beep-102f, 0.0f, 0x1.070416p-3f, 0x1.9af7c4p-24f, 0x1.d0bbc6p-39f,
     0x1.a3494ep-24f, 0.0f, 0x1.2f6012p-55f, 0x1.cf131ep-25f, 0x1.ba608p-124f,
     0x1.6c906p-17f, 0x1.6b4c4cp-74f, 0x1.181382p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4c942p-47f, 0.0f, 0x1.03ae4ep-92f, 0x1.d9f822p-121f, 0x1.3c8b08p-104f,
     0x1.97dad8p-46f, 0x1.78cb5cp-101f, 0x1.136d44p-112f, 0x1.a5104cp-21f,
     0x1.b2cb06p-99f, 0x1.4adb8ep-24f, 0x1.b846cap-39f, 0.0f, 0.0f, 0x1.e5c27ap-7f,
     0x1.6283fap-14f, 0x1.0b4908p-43f, 0.0f, 0.0f, 0.0f, 0x1.8ffd54p-25f,
     0x1.e82f6ap-77f, 0x1.bdd2c8p-84f, 0.0f, 0.0f, 0.0f, 0x1.8b6714p-69f, 0.0f, 0.0f,
     0x1.926458p-100f, 0.0f, 0.0f, 0x1.1bffd8p-2f, 0.0f, 0.0f, 0x1.04e658p-49f,
     0x1.576132p-6f, 0.0f, 0.0f, 0.0f, 0x1.449fb6p-79f, 0x1.0899e4p-85f, 0.0f,
     0x1.a4ee2ap-54f, 0x1.96d3bcp-36f, 0x1.fd1dfep-71f, 0.0f, 0x1.a0472cp-8f,
     0x1.07e174p-66f, 0.0f, 0x1.6a6ef2p-68f, 0.0f, 0x1.0b26e8p-62f, 0x1.598348p-57f,
     0.0f, 0.0f, 0x1.f470f4p-1f, 0x1.af9b3ap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.885698p-125f, 0x1.f9e4bap-35f, 0.0f, 0x1.155b64p-27f, 0x1.bb867ep-62f, 0.0f,
     0x1.52a56ap-119f, 0.0f, 0x1.a9161ep-35f, 0x1.dcb6f4p-20f, 0x1.e9ff26p-71f,
     0x1.b9d18ep-75f, 0.0f, 0.0f, 0x1.036e7p-36f, 0x1.8dab26p-93f, 0x1.84ac26p-28f,
     0.0f, 0x1.d9a464p-47f, 0.0f, 0x1.ffd0aap-55f, 0.0f, 0.0f, 0x1.4b9deep-107f, 0.0f,
     0.0f, 0x1.afaa62p-64f, 0x1.4f18acp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7dac7cp-113f,
     0x1.216e62p-50f, 0x1.5bbe02p-95f, 0x1.0f20b4p-117f, 0.0f, 0x1.65b248p-87f,
     0x1.9ad722p-31f, 0x1.0fc3dap-13f, 0.0f, 0x1.58036ap-54f, 0x1.53c60ap-48f,
     0x1.e12468p-113f, 0x1.021bdcp-3f, 0x1.9a9a6ap-25f, 0.0f, 0.0f, 0x1.d47fcep-92f,
     0x1.7fb61ep-108f, 0.0f, 0x1.169c5p-98f, 0x1.d14858p-37f, 0.0f, 0x1.c29bf6p-54f,
     0.0f, 0x1.dca194p-49f, 0.0f, 0x1.b3c55ep-73f, 0.0f, 0x1.ac647p-4f, 0.0f,
     0x1.354f52p-4f, 0.0f, 0x1.ea7826p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fa8fcp-115f,
     0x1.90ef14p-95f, 0x1.e120fcp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.78a19ep-7f, 0x1.98e858p-12f, 0x1p0f, 0x1.1a93c8p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd3f12p-103f, 0x1.8ab2e2p-112f, 0.0f, 0x1.07b418p-118f, 0.0f,
     0x1.f424e8p-39f, 0x1.2a4548p-93f, 0x1.1c1f1ep-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae32dcp-44f, 0x1.a953ecp-43f, 0.0f, 0.0f, 0.0f, 0x1.e15554p-58f, 0.0f,
     0x1.3410d4p-77f, 0x1.d568c4p-122f, 0.0f, 0.0f, 0.0f, 0x1.3c5c9p-112f,
     0x1.96f004p-96f, 0x1.3f14e8p-44f, 0x1.8fd6f4p-79f, 0x1.258b6ap-25f,
     0x1.7a940cp-16f, 0x1.143e86p-2f, 0.0f, 0.0f, 0.0f, 0x1.201306p-110f,
     0x1.bced6p-78f, 0.0f, 0x1.cba18ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c76f4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21f2bp-75f, 0x1.7244a2p-95f, 0.0f,
     0.0f, 0.0f, 0x1.98e8bap-80f, 0.0f, 0x1.d8804p-113f, 0.0f, 0.0f, 0x1.4364a4p-72f,
     0.0f, 0.0f, 0x1.559ff6p-124f, 0.0f, 0.0f, 0.0f, 0x1.f0aa5ep-16f, 0.0f,
     0x1.f29612p-10f, 0x1.7299a6p-18f, 0x1.39505ep-59f, 0x1.02c98p-4f, 0.0f, 0.0f,
     0x1.9bad36p-98f, 0.0f, 0x1.eb1a6cp-84f, 0.0f, 0x1.37912p-84f, 0.0f,
     0x1.6087cp-59f, 0x1.ea2a3p-103f, 0x1.236b2cp-90f, 0.0f, 0x1.027d24p-5f, 0.0f,
     0x1.e37f58p-95f, 0x1.51b942p-37f, 0.0f, 0x1.f96b62p-29f, 0x1.9e1d44p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6ab432p-10f, 0.0f, 0x1.465a34p-61f, 0x1.a2382ep-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71accp-67f, 0x1.0d9e5p-46f,
     0x1.b67384p-41f, 0x1.0588aep-27f, 0.0f, 0x1.7833bp-30f, 0x1.c5c508p-20f, 0.0f,
     0x1.c9352p-86f, 0.0f, 0x1.9bd166p-72f, 0x1.6546c8p-21f, 0x1.09b62ep-76f,
     0x1.6f7d12p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab75f6p-123f,
     0x1.fbbd08p-78f, 0x1.44bc94p-80f, 0x1.b7e74ap-58f, 0.0f, 0x1.6c5c24p-23f, 0.0f,
     0.0f, 0.0f, 0x1.db593cp-8f, 0.0f, 0.0f, 0x1.c51546p-80f, 0x1.901174p-57f, 0.0f,
     0.0f, 0x1.4adbbep-22f, 0x1.9f51c2p-22f, 0.0f, 0.0f, 0x1.4b53c4p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.831a84p-19f, 0x1.5b8004p-45f, 0x1.e512cap-89f, 0.0f,
     0x1.6facc4p-88f, 0.0f, 0x1.5e834p-104f, 0.0f, 0.0f, 0x1.b4268ep-17f,
     0x1.d04c1p-53f, 0x1.98264p-125f, 0x1.6b2b18p-11f, 0.0f, 0.0f, 0x1.7d1d8ap-111f,
     0.0f, 0x1.9d264cp-92f, 0x1.061c3p-60f, 0.0f, 0.0f, 0x1.df574ep-58f, 0.0f, 0.0f,
     0x1.10b8b4p-67f, 0.0f, 0x1.921054p-102f, 0.0f, 0x1.2a3638p-96f, 0.0f,
     0x1.6dbc28p-49f, 0x1.0dc23cp-109f, 0x1.b21788p-81f, 0.0f, 0.0f, 0x1.9aa38ap-25f,
     0.0f, 0x1.764558p-29f, 0x1.29496cp-7f, 0x1.953ac8p-55f, 0x1.4d377cp-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef448p-46f, 0x1.9afc4ep-45f, 0.0f, 0.0f,
     0x1.e7861cp-111f, 0.0f, 0x1.3d3944p-116f, 0.0f, 0x1.37dd7ap-40f,
     0x1.50d94ep-121f, 0x1.f222fep-29f, 0.0f, 0x1.96d48p-118f, 0x1.8ba436p-18f,
     0x1.4068bep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ce004p-1f, 0x1.9898dcp-10f, 0.0f,
     0x1.a55846p-43f, 0x1.ff2826p-89f, 0x1.e4f832p-110f, 0.0f, 0x1.a9f054p-30f, 0.0f,
     0x1.8311cap-97f, 0.0f, 0.0f, 0x1.2d9e02p-69f, 0x1.68dfc4p-90f, 0.0f, 0.0f,
     0x1.0e5162p-77f, 0x1.b0540ap-110f, 0x1.3b1c92p-78f, 0.0f, 0x1.d5647p-37f, 0.0f,
     0x1.dc884cp-85f, 0x1p0f, 0.0f, 0x1.be95acp-54f, 0x1.4d3236p-9f, 0.0f,
     0x1.798694p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34160ep-104f, 0x1.ae1eacp-42f,
     0x1.7b04e4p-6f, 0.0f, 0x1.db879p-94f, 0x1.89fcfap-123f, 0.0f, 0.0f, 0.0f,
     0x1.5193d8p-87f, 0x1.0210a4p-99f, 0x1.afe792p-76f, 0.0f, 0.0f, 0.0f,
     0x1.aa405ap-55f, 0x1.901334p-4f, 0x1.4ea10cp-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.544e34p-59f, 0.0f, 0.0f, 0.0f, 0x1.01ff78p-107f, 0x1.c57f9ap-40f,
     0x1.21172ap-33f, 0x1.b85faap-22f, 0.0f, 0x1.82c80ep-76f, 0x1.8d4cd8p-82f, 0.0f,
     0.0f, 0.0f, 0x1.b526d8p-17f, 0x1.c10bfcp-2f, 0.0f, 0.0f, 0x1.83cfa6p-5f, 0.0f,
     0.0f, 0x1.8228eep-40f, 0x1.82011p-74f, 0x1.f520c6p-57f, 0.0f, 0.0f,
     0x1.f32348p-37f, 0x1.8d301p-84f, 0x1.317cc4p-37f, 0x1.31575ap-24f,
     0x1.dc7426p-106f, 0.0f, 0.0f, 0x1.b11e8ap-81f, 0x1.9bd7ep-124f, 0.0f,
     0x1.66689ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d849c2p-48f, 0x1.fb9f3ep-100f,
     0x1.10dadp-59f, 0.0f, 0.0f, 0x1.063ab4p-49f, 0x1.6731p-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.92e716p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b5662p-41f, 0.0f, 0x1.062284p-19f, 0x1.0b5112p-100f, 0.0f, 0.0f,
     0x1.8fdddep-14f, 0x1.317804p-61f, 0x1.6c80c8p-121f, 0x1.5df3dcp-43f,
     0x1.c2448cp-95f, 0.0f, 0.0f, 0x1.65f54cp-57f, 0x1.50df7ep-42f, 0.0f, 0.0f,
     0x1.067b2ep-78f, 0.0f, 0x1.f41082p-83f, 0x1.31162cp-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43a502p-26f, 0.0f, 0x1.1fa334p-86f, 0.0f, 0x1.a08c9ap-10f, 0x1.26b5c2p-11f,
     0.0f, 0.0f, 0x1.8d0a44p-65f, 0.0f, 0.0f, 0x1.9de392p-22f, 0x1.f4832ap-82f, 0.0f,
     0.0f, 0x1.de0f58p-41f, 0x1.a4a8f8p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a6996p-8f,
     0x1.509582p-109f, 0x1.cd360cp-115f, 0.0f, 0x1.0f3f3ep-88f, 0x1.3e45aap-102f,
     0x1.f08556p-22f, 0x1.20262ap-54f, 0x1.941292p-109f, 0x1.0fa94ep-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2617bp-77f, 0x1.a4d8eap-109f, 0x1.a84482p-109f, 0x1.17f7c2p-113f,
     0x1.b41ecp-81f, 0.0f, 0x1.f69ffp-92f, 0x1.ee3d0ap-76f, 0.0f, 0x1.76f116p-37f,
     0x1.937b8p-79f, 0x1.8c183ap-99f, 0x1.da8acp-86f, 0.0f, 0.0f, 0.0f,
     0x1.f36a08p-102f, 0x1.ea7f6ep-61f, 0x1.1480d2p-96f, 0x1.b64322p-78f, 0.0f,
     0x1.785eaep-107f, 0x1.bdb1bcp-15f, 0x1.89c006p-105f, 0x1.6c896p-114f,
     0x1.78b008p-54f, 0.0f, 0x1.d081b6p-76f, 0x1.2d05ecp-126f, 0.0f, 0.0f,
     0x1.3c10fep-115f, 0.0f, 0.0f, 0x1.393e38p-40f, 0.0f, 0.0f, 0x1.ded524p-102f,
     0x1p0f, 0.0f, 0.0f, 0x1.36032ap-42f, 0.0f, 0x1.9e2df4p-83f, 0x1.01e8cep-108f,
     0x1.9ad36ap-46f, 0.0f, 0x1.fc8004p-78f, 0x1.968b42p-79f, 0x1.d9af62p-108f, 0.0f,
     0x1.c4eddcp-45f, 0.0f, 0x1.fa494ep-66f, 0x1.ab726ep-57f, 0x1.47df5ap-93f, 0.0f,
     0.0f, 0x1.e67226p-12f, 0.0f, 0x1.9d2214p-31f, 0x1.8a945cp-37f, 0.0f,
     0x1.cd3ea2p-81f, 0x1.237508p-38f, 0.0f, 0x1.a00bc2p-116f, 0x1.6e6aecp-98f, 0.0f,
     0x1.d25908p-16f, 0x1.b93aa4p-18f, 0.0f, 0.0f, 0.0f, 0x1.8548e6p-36f,
     0x1.8a317ap-91f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_fmodf8_kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    printf("Sleef_fmodf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fmodf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
