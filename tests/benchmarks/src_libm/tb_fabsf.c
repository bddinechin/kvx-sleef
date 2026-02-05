/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_fabsf.c --function fabsf --headers math.h,ml_support_lib.h \
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
     0x1.3e037ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc313p-57f, 0x1.6f411p-28f,
     0x1.4ee79cp-63f, 0.0f, 0.0f, 0x1.0a3eeap-109f, 0x1.7d2e52p-123f, 0x1.e979f6p-32f,
     0.0f, 0x1.87adb2p-80f, 0.0f, 0.0f, 0x1.11f7acp-115f, 0x1.122bbp-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.293398p-78f, 0x1.953312p-101f, 0x1.a6c218p-38f, 0.0f,
     0x1.1e05cp-38f, 0.0f, 0x1.959b92p-103f, 0.0f, 0.0f, 0x1.2e6e84p-39f, 0.0f,
     0x1.b6c4a8p-117f, 0x1.7d7a88p-105f, 0x1.5e8dap-13f, 0.0f, 0x1.751c0ap-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57338p-60f, 0x1.ba1782p-79f, 0x1.ca4fbep-98f,
     0.0f, 0x1.a324aap-125f, 0x1.62f558p-69f, 0.0f, 0.0f, 0x1.0a11f6p-67f,
     0x1.5202dep-81f, 0x1.c0378ap-96f, 0.0f, 0.0f, 0.0f, 0x1.ff11d6p-71f,
     0x1.cdc05ep-102f, 0.0f, 0.0f, 0x1.88352ap-18f, 0.0f, 0.0f, 0.0f, 0x1.8484fcp-95f,
     0.0f, 0.0f, 0x1.0df614p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.284e14p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7894d2p-72f, 0.0f, 0x1.f46ec6p-56f, 0.0f,
     0x1.856304p-102f, 0.0f, 0.0f, 0x1.a21b1cp-26f, 0.0f, 0.0f, 0x1.596934p-14f, 0.0f,
     0.0f, 0x1.a3ce7ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.421518p-110f,
     0x1.75b438p-96f, 0x1.6215d6p-51f, 0x1.d3358ep-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3002b8p-52f, 0x1.342c18p-16f, 0.0f, 0.0f, 0x1.8fd12p-42f, 0x1.a5dd0ep-78f,
     0x1.73ec2cp-27f, 0.0f, 0x1.d8ffc6p-15f, 0.0f, 0x1.4fa218p-68f, 0.0f,
     0x1.55843p-17f, 0.0f, 0.0f, 0.0f, 0x1.bfd458p-35f, 0.0f, 0x1.feb838p-13f, 0.0f,
     0x1.6b8e44p-66f, 0.0f, 0.0f, 0x1.134f62p-45f, 0.0f, 0.0f, 0x1.eb12c6p-14f,
     0x1.f0f164p-7f, 0x1.b45084p-9f, 0x1.6852bcp-38f, 0.0f, 0.0f, 0x1.b3d358p-106f,
     0x1.1fb2cp-117f, 0x1.309686p-22f, 0x1.c0753ap-32f, 0.0f, 0.0f, 0.0f,
     0x1.11810cp-20f, 0x1.9bfa4p-113f, 0.0f, 0x1.72ab0ep-88f, 0.0f, 0x1.cdbbeap-2f,
     0.0f, 0.0f, 0x1.5289a8p-59f, 0x1.f72e6p-83f, 0x1.005882p-113f, 0x1.d8999ap-61f,
     0x1.2a7e6ep-24f, 0.0f, 0.0f, 0.0f, 0x1.d023e4p-110f, 0.0f, 0.0f,
     0x1.0266e6p-117f, 0.0f, 0.0f, 0.0f, 0x1.6b5932p-42f, 0x1.097b4ap-41f, 0.0f,
     0x1.24e656p-107f, 0x1.79aac6p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31fe52p-84f,
     0x1.f44fb4p-116f, 0.0f, 0.0f, 0.0f, 0x1.5a794cp-58f, 0x1.4cbd72p-36f, 0.0f,
     0x1.a847e8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc70e4p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.e320fep-67f, 0x1.09de7ap-116f, 0.0f, 0.0f, 0.0f,
     0x1.a3b8b8p-88f, 0x1.037ae4p-80f, 0x1.f4e1aap-75f, 0x1.0a22b6p-111f, 0.0f, 0.0f,
     0x1.9f98d6p-68f, 0x1.ebee42p-66f, 0.0f, 0.0f, 0x1.4cd07ep-33f, 0.0f, 0.0f,
     0x1.796d3p-64f, 0.0f, 0.0f, 0x1.b1bd1ap-7f, 0.0f, 0.0f, 0x1.68df86p-55f,
     0x1.62f2aep-99f, 0.0f, 0x1.5f0d3ap-12f, 0x1.857c88p-17f, 0x1.17a8cep-66f,
     0x1.bb08ep-87f, 0x1.91d06ep-15f, 0.0f, 0x1.85c01cp-88f, 0x1.45bd3ap-53f,
     0x1.7543c2p-46f, 0.0f, 0x1.c7fd3p-3f, 0x1.200c6p-92f, 0.0f, 0x1.f1615ap-55f,
     0.0f, 0x1.d808bcp-124f, 0x1.e81f64p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1e9c4p-121f, 0x1.b821bap-34f, 0.0f, 0.0f, 0x1.e2ac8ap-45f, 0.0f,
     0x1.3fd128p-60f, 0x1.6815a4p-16f, 0.0f, 0x1.8da218p-3f, 0x1.e0c03ap-93f,
     0x1.bb5996p-116f, 0x1.d2314ep-2f, 0.0f, 0.0f, 0x1.316bf4p-113f, 0x1.7b9156p-39f,
     0.0f, 0.0f, 0.0f, 0x1.f2f10cp-34f, 0.0f, 0.0f, 0x1.f1fabap-108f, 0.0f,
     0x1.77b854p-22f, 0.0f, 0x1.222274p-93f, 0.0f, 0x1.14a94ap-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6cd00ap-87f, 0x1.1b668ep-44f, 0x1.5bc204p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2af08ep-118f, 0.0f, 0x1.4cec52p-117f, 0x1.f0f0d2p-24f,
     0x1.0d2318p-102f, 0x1.11113cp-43f, 0.0f, 0x1.c8deaep-83f, 0x1.e295bep-118f,
     0x1.fd62cap-99f, 0.0f, 0x1.0acbbap-2f, 0.0f, 0.0f, 0.0f, 0x1.c074b6p-45f, 0.0f,
     0x1.7e5ac2p-86f, 0.0f, 0x1.0df89p-27f, 0x1.8e9588p-121f, 0.0f, 0x1.cddfc8p-81f,
     0x1.dfee92p-9f, 0x1.ee5894p-85f, 0.0f, 0.0f, 0.0f, 0x1.3f107ep-72f, 0.0f, 0.0f,
     0x1.fecac2p-100f, 0x1.8db764p-69f, 0x1.27e63cp-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87db1cp-1f, 0.0f, 0.0f, 0.0f, 0x1.e08482p-13f, 0.0f, 0.0f, 0.0f,
     0x1.89564ap-92f, 0x1.e1b73ep-100f, 0x1.d74c5ap-82f, 0x1.637d6cp-46f, 0.0f,
     0x1.76bae8p-66f, 0.0f, 0x1.0eafb4p-45f, 0x1.b4aa2p-5f, 0x1.9e37b2p-98f,
     0x1.228c84p-126f, 0x1.5ba29cp-8f, 0x1.d6846p-88f, 0.0f, 0x1.512b2ep-1f, 0.0f,
     0.0f, 0x1.1fcbep-38f, 0.0f, 0.0f, 0x1.275264p-111f, 0x1.645704p-14f, 0.0f,
     0x1.d78ff8p-125f, 0x1.d8ddbp-84f, 0x1.5754e6p-124f, 0.0f, 0x1.85c6cp-91f, 0.0f,
     0.0f, 0x1.30d43ap-121f, 0.0f, 0.0f, 0x1.a0ddap-92f, 0.0f, 0x1.54f21cp-31f,
     0x1.52695ep-114f, 0.0f, 0.0f, 0x1.9d0796p-57f, 0.0f, 0.0f, 0.0f, 0x1.34f6dcp-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.366d3p-113f, 0x1.635e4ep-76f, 0x1.d31fap-73f,
     0x1.85c466p-28f, 0x1.66b9f6p-9f, 0x1.aea26ap-94f, 0.0f, 0.0f, 0.0f,
     0x1.e30d02p-108f, 0x1.59d7cap-36f, 0.0f, 0.0f, 0.0f, 0x1.880142p-65f, 0.0f,
     0x1.62438ap-98f, 0.0f, 0.0f, 0.0f, 0x1.82d86ap-98f, 0x1.c5c10ep-93f,
     0x1.fd075cp-40f, 0x1.07af64p-105f, 0.0f, 0.0f, 0.0f, 0x1.8b30ecp-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c4ea3ap-47f, 0x1.bf3b86p-113f, 0.0f, 0x1.b919ep-28f, 0.0f,
     0x1.6a801cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bec716p-119f, 0.0f, 0.0f,
     0.0f, 0x1.f75386p-73f, 0x1.4f6d4ep-13f, 0x1.107526p-117f, 0x1.5dcd22p-83f, 0.0f,
     0x1.9f60ccp-43f, 0.0f, 0x1.a10f7ap-89f, 0.0f, 0x1.2dc424p-123f, 0.0f,
     0x1.fa3ba4p-68f, 0.0f, 0x1.c3285ep-44f, 0x1.f35bd8p-114f, 0x1.0504c8p-119f,
     0x1.704d5p-89f, 0.0f, 0x1.c4c0aap-101f, 0x1.8f8c6ap-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32bb18p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1e51ap-13f,
     0.0f, 0x1.b3d25cp-122f, 0.0f, 0x1.aae43p-110f, 0x1.08c2d6p-92f, 0x1.696bb8p-68f,
     0.0f, 0x1.37ed18p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7887ccp-112f, 0.0f,
     0.0f, 0x1.d53a04p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec0ee4p-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.416e2p-47f, 0x1.446f2cp-42f, 0.0f, 0x1.120ac6p-6f, 0.0f,
     0x1.5e4346p-24f, 0.0f, 0.0f, 0.0f, 0x1.bd68bcp-30f, 0x1.f30db6p-122f,
     0x1.94cbeep-3f, 0.0f, 0.0f, 0x1.bb5ae8p-119f, 0.0f, 0x1.8991bcp-57f,
     0x1.872b7p-13f, 0.0f, 0x1.741138p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17cc86p-23f, 0.0f, 0x1.fa769ep-54f, 0.0f, 0.0f, 0x1.5b87a6p-39f, 0.0f, 0.0f,
     0x1.7eba7ep-121f, 0x1.4ba516p-37f, 0x1.f1e994p-119f, 0.0f, 0.0f, 0x1.9bbcdap-89f,
     0.0f, 0x1.3d5ad4p-14f, 0.0f, 0.0f, 0x1.d828f2p-74f, 0x1.5a147ap-81f,
     0x1.0867fp-20f, 0x1.ca9364p-14f, 0x1.54996ep-67f, 0.0f, 0x1.cc5534p-124f, 0.0f,
     0.0f, 0.0f, 0x1.ed44b8p-95f, 0x1.a9dac8p-86f, 0.0f, 0.0f, 0.0f, 0x1.e79b26p-117f,
     0x1.e0b4e2p-117f, 0.0f, 0.0f, 0.0f, 0x1.4753a6p-54f, 0x1.63d1e6p-86f, 0.0f,
     0x1.80e26ep-36f, 0x1.de915ep-122f, 0x1.5ad52ep-78f, 0.0f, 0x1.b397dep-82f,
     0x1.22dd46p-26f, 0x1.a98bd8p-75f, 0.0f, 0.0f, 0x1.59556ep-100f, 0.0f, 0.0f,
     0x1.b71b86p-125f, 0.0f, 0x1.f9bbdp-63f, 0.0f, 0x1.fae38ep-47f, 0x1.b71b78p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ff26p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4bf1cep-10f, 0x1.ac9f14p-40f, 0.0f, 0x1.ac7adep-123f, 0.0f, 0x1.c4b39p-39f,
     0x1.865ed4p-71f, 0.0f, 0x1.04e52ep-70f, 0.0f, 0x1.692e84p-89f, 0.0f, 0.0f,
     0x1.9f3e96p-30f, 0.0f, 0x1.1803fep-63f, 0x1.4b5de2p-38f, 0.0f, 0.0f,
     0x1.48dc3cp-43f, 0.0f, 0x1.c20de2p-43f, 0.0f, 0.0f, 0x1.4aafe8p-112f,
     0x1.3ce67ep-102f, 0.0f, 0.0f, 0.0f, 0x1.93f5f4p-125f, 0x1p0f, 0x1.a6c914p-104f,
     0x1.346eep-74f, 0.0f, 0x1.c33d08p-46f, 0.0f, 0x1.35a87ep-49f, 0x1.3e634ep-47f,
     0x1.ad03c6p-16f, 0x1.d5a6e6p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c963p-97f, 0.0f,
     0x1.03d44p-102f, 0x1.3086b2p-50f, 0.0f, 0.0f, 0.0f, 0x1.795b2ap-31f, 0.0f,
     0x1.90a852p-107f, 0x1.dfb1c8p-120f, 0.0f, 0x1.01ff4ap-33f, 0x1.560ffap-61f,
     0x1.62380cp-74f, 0x1.e00538p-46f, 0x1.c1bae6p-114f, 0.0f, 0x1.ef98bep-11f, 0.0f,
     0.0f, 0x1.5494aap-69f, 0x1.a1f37ap-104f, 0x1.a9e9acp-7f, 0x1.f8a62cp-124f,
     0x1.18388ep-87f, 0x1.4d218cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.898fe6p-99f, 0.0f,
     0x1.3100ap-95f, 0x1.2b61c2p-90f, 0x1.bce83ep-79f, 0x1.a7dfaap-54f,
     0x1.bd8294p-33f, 0x1.0655b2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7df46p-121f, 0.0f, 0.0f, 0.0f, 0x1.ce2b52p-29f, 0x1.62877cp-32f, 0.0f, 0.0f,
     0.0f, 0x1.601d36p-23f, 0.0f, 0.0f, 0x1.ec757cp-77f, 0.0f, 0x1.fef5eap-99f, 0.0f,
     0.0f, 0x1.4fba9p-65f, 0x1.a64e38p-52f, 0.0f, 0x1.ef6162p-39f, 0.0f,
     0x1.6d62bcp-54f, 0.0f, 0.0f, 0x1.dcc0acp-120f, 0x1.e6f314p-35f, 0x1.de6feap-96f,
     0.0f, 0.0f, 0x1.296642p-104f, 0.0f, 0.0f, 0x1.f88378p-11f, 0x1.7b93d8p-92f,
     0x1.7bec88p-49f, 0.0f, 0.0f, 0.0f, 0x1.9e93e8p-28f, 0.0f, 0x1.d9dbbap-2f,
     0x1.60f3f4p-113f, 0.0f, 0x1.cbb36p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8fb7cp-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e35712p-118f, 0.0f, 0.0f,
     0x1.7adc22p-90f, 0x1.7ec304p-7f, 0x1.589f86p-21f, 0.0f, 0.0f, 0x1.47b186p-36f,
     0x1.6b9ecp-27f, 0x1.840576p-48f, 0.0f, 0.0f, 0x1.fc15aap-118f, 0.0f, 0.0f, 0.0f,
     0x1.a0f7eep-86f, 0x1.60faep-6f, 0.0f, 0x1.c17b2p-61f, 0x1.20c8cap-33f,
     0x1.ce645ap-59f, 0x1.bf8f1ap-50f, 0.0f, 0.0f, 0x1.3c45fep-63f, 0.0f,
     0x1.088a18p-51f, 0.0f, 0x1.73a0bcp-119f, 0.0f, 0.0f, 0.0f, 0x1.07a4b4p-8f, 0.0f,
     0x1.a44836p-30f, 0.0f, 0x1.15f5d6p-34f, 0.0f, 0x1.094744p-94f, 0.0f, 0.0f,
     0x1.723bcap-93f, 0x1.a7496cp-94f, 0.0f, 0x1.c91dbep-71f, 0.0f, 0x1.0470f6p-9f,
     0x1.730a16p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0922d8p-100f,
     0x1.99208ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.515274p-89f,
     0.0f, 0x1.42d004p-32f, 0.0f, 0x1.3c1052p-26f, 0.0f, 0x1.df85cp-68f, 0.0f,
     0x1.a1c572p-125f, 0.0f, 0x1.d6cf06p-32f, 0x1.c3e0e6p-99f, 0.0f, 0x1.cbfe3ep-124f,
     0x1.0f93fcp-2f, 0x1.7c92e6p-54f, 0x1.2a9a14p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d2b04p-87f, 0.0f, 0x1.2234fap-41f, 0x1.1223fep-75f, 0x1.a6c848p-14f, 0.0f,
     0x1.449f96p-124f, 0x1.63565cp-107f, 0.0f, 0x1.b3502p-109f, 0x1.689958p-6f,
     0x1.f390bep-58f, 0x1.b0794ep-126f, 0.0f, 0.0f, 0x1.b0dadcp-118f, 0x1.1965cp-24f,
     0x1.717e28p-53f, 0x1.0df8bap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7194p-52f,
     0.0f, 0x1.2d614cp-57f, 0.0f, 0.0f, 0.0f, 0x1.e05ec8p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7e93ecp-100f, 0.0f, 0.0f, 0x1.f222dap-90f, 0x1.c81dbcp-10f,
     0x1.2a6ddp-28f, 0.0f, 0.0f, 0x1.56b524p-74f, 0.0f, 0.0f, 0x1.67b852p-69f,
     0x1.f8d248p-49f, 0x1.4eeed2p-106f, 0x1.eda4ccp-18f, 0x1.06c878p-103f, 0.0f, 0.0f,
     0x1.fe4064p-24f, 0.0f, 0.0f, 0.0f, 0x1.8199a6p-29f, 0x1.54881cp-61f,
     0x1.1e7628p-86f, 0x1.3424e6p-109f, 0.0f, 0x1.26d904p-37f, 0.0f, 0x1.7269c4p-29f,
     0.0f, 0x1.4aeba2p-50f, 0x1.decd6ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d843dep-71f,
     0x1.cb5c6ap-101f, 0.0f, 0.0f, 0x1.26a6b4p-70f, 0x1.bcb27ep-98f, 0.0f,
     0x1.61f76ep-100f, 0.0f, 0x1.03c274p-61f, 0x1.c81162p-42f, 0x1.88c5dcp-13f,
     0x1.99a396p-40f, 0.0f, 0x1.9dde78p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5c12p-27f,
     0x1.3ce5fap-64f, 0.0f, 0x1.91af48p-121f, 0x1.4bdep-49f, 0x1.94d3a8p-105f, 0.0f,
     0.0f, 0x1.5da132p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60ddfcp-92f,
     0.0f, 0x1.0c3762p-14f, 0x1.3a060ap-111f, 0.0f, 0x1.e2049ep-81f, 0x1.1253e4p-90f,
     0x1.2f183ap-73f, 0x1.001426p-14f, 0x1.862746p-56f, 0x1.465c12p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.687dc2p-18f, 0.0f, 0x1.1269ep-70f, 0x1.5cf79cp-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d9478p-62f, 0x1.66a4dp-21f,
     0x1.d5e3a4p-59f, 0x1.a0d85p-98f, 0.0f, 0.0f, 0x1.1d2228p-50f, 0.0f, 0.0f,
     0x1.c12f04p-6f, 0.0f, 0x1.724d2ep-65f, 0x1.faa17p-87f, 0x1.27b8e6p-43f, 0.0f,
     0.0f, 0.0f, 0x1.e4f18p-81f, 0x1.ed285p-27f, 0.0f, 0.0f, 0x1.40fdb4p-86f, 0.0f,
     0.0f, 0x1.8c9244p-56f, 0x1.eea91ep-97f, 0x1.8b845ep-50f, 0x1.0d9ec6p-117f,
     0x1.bc66eap-75f, 0x1.8d1b6cp-18f, 0x1.d1fdb8p-64f, 0x1.e44482p-50f,
     0x1.e276fap-86f, 0x1.57a948p-88f, 0x1.259732p-61f, 0.0f, 0x1.9aba92p-10f, 0.0f,
     0x1.9e621ep-97f, 0.0f, 0x1.239a58p-65f, 0x1.26ad5ep-6f
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
            tmp1 = fabsf(tmp0);
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
    printf("fabsf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("fabsf bench acc %a\n", global_bench_acc);
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
