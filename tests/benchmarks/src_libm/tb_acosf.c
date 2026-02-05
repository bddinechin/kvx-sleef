/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_acosf.c --function acosf --headers math.h,ml_support_lib.h \
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
     0x1.6cce1p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18fc26p-27f, 0.0f, 0.0f,
     0x1.2b2e32p-82f, 0x1.4e1aaap-9f, 0.0f, 0.0f, 0x1p0f, 0x1.3141d8p-72f,
     0x1.62c4c4p-19f, 0.0f, 0.0f, 0x1.4583cap-14f, 0x1.8d44bp-16f, 0x1.72dde4p-100f,
     0x1.e02308p-109f, 0x1.c175ep-49f, 0.0f, 0x1.402a72p-61f, 0.0f, 0x1.659cf4p-75f,
     0x1.bf8a8ap-20f, 0x1.5b8d5p-102f, 0.0f, 0x1.e628acp-94f, 0.0f, 0.0f,
     0x1.3ab68ap-20f, 0.0f, 0x1.2f111cp-118f, 0x1.c3afbap-35f, 0.0f, 0x1.b6a226p-28f,
     0.0f, 0.0f, 0.0f, 0x1.d8087ap-22f, 0.0f, 0.0f, 0.0f, 0x1.c273e8p-28f,
     0x1.8dbefep-20f, 0x1.c9ecfcp-64f, 0.0f, 0x1.fbd56ep-104f, 0x1.4774p-38f, 0.0f,
     0x1.bd702p-72f, 0.0f, 0.0f, 0x1.3b62f2p-28f, 0.0f, 0x1.1d5578p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8f3d7ap-19f, 0.0f, 0x1.2f0e6p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65905ap-6f, 0.0f, 0.0f, 0x1.0d58d6p-34f, 0.0f, 0.0f, 0x1.efa426p-105f,
     0x1.d008eep-108f, 0.0f, 0.0f, 0x1.85aa48p-97f, 0x1.89fa26p-71f, 0x1.60291cp-61f,
     0.0f, 0x1.369edap-92f, 0x1.b921b4p-120f, 0.0f, 0x1.1bf41cp-116f, 0.0f,
     0x1.d9623ep-74f, 0x1.c35832p-48f, 0.0f, 0x1.caf894p-23f, 0.0f, 0.0f, 0.0f,
     0x1.04e18ap-24f, 0x1.79d3b8p-90f, 0x1.81de7p-28f, 0.0f, 0x1.a2b5ep-86f,
     0x1.106f08p-78f, 0.0f, 0x1.19f7e2p-38f, 0x1.7b080ap-90f, 0x1.aba6e4p-12f,
     0x1.270baap-82f, 0x1.f10df4p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41eaa4p-77f, 0x1.6ac20ap-91f, 0.0f, 0x1.4fe836p-97f, 0.0f, 0x1.ff3306p-77f,
     0x1.749d9cp-79f, 0.0f, 0x1.3f257ap-5f, 0x1.38e4ccp-36f, 0.0f, 0x1.07d4b2p-75f,
     0.0f, 0.0f, 0.0f, 0x1.e457fap-36f, 0x1.8e032cp-104f, 0x1.66550ep-91f,
     0x1.f05f72p-30f, 0x1.ebeefap-6f, 0.0f, 0x1.385848p-22f, 0x1.d601eep-77f, 0.0f,
     0.0f, 0x1.444902p-115f, 0.0f, 0.0f, 0x1.cf2042p-56f, 0.0f, 0.0f, 0.0f,
     0x1.2e0332p-13f, 0x1.d59434p-77f, 0x1.2114b2p-114f, 0.0f, 0.0f, 0x1.823ddp-61f,
     0.0f, 0.0f, 0x1.c28966p-97f, 0x1.173f64p-125f, 0.0f, 0x1.902844p-82f, 0.0f,
     0x1.a5e994p-90f, 0.0f, 0x1.691baap-106f, 0x1.46bceep-110f, 0x1.a382f2p-70f,
     0x1.ef7756p-61f, 0x1.d476f8p-4f, 0.0f, 0.0f, 0x1.cc853ap-31f, 0x1.454f38p-9f,
     0x1.bd85a8p-59f, 0x1.f5d3ap-74f, 0.0f, 0x1.9f45dcp-5f, 0.0f, 0.0f,
     0x1.bdb108p-46f, 0x1.f6c46cp-87f, 0x1.a11212p-46f, 0x1.548892p-14f, 0.0f, 0.0f,
     0.0f, 0x1.16a2c6p-51f, 0x1.537e3ep-15f, 0x1.8bb60cp-62f, 0.0f, 0.0f,
     0x1.bfdaa8p-49f, 0.0f, 0x1.54bb6ep-126f, 0.0f, 0.0f, 0x1.369c04p-92f, 0.0f, 0.0f,
     0x1.21c43ep-10f, 0x1.20921cp-65f, 0x1.66d184p-11f, 0x1.4b3a3p-1f, 0.0f,
     0x1.bf88ecp-7f, 0.0f, 0x1.d3fc7p-71f, 0.0f, 0x1.af2218p-82f, 0x1.2e9cd8p-111f,
     0.0f, 0.0f, 0x1.172a6p-123f, 0x1.f2fff8p-116f, 0x1.01e77p-39f, 0x1.5eb71p-91f,
     0.0f, 0.0f, 0x1.f18502p-119f, 0x1.811704p-119f, 0.0f, 0x1.2b8dbcp-111f,
     0x1.7a836ap-55f, 0.0f, 0x1.9ea2dep-121f, 0x1.638398p-24f, 0.0f, 0x1.8410bap-39f,
     0.0f, 0.0f, 0x1.f86d2cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71ebfep-6f, 0.0f, 0.0f,
     0x1.576062p-32f, 0.0f, 0x1.e1e4a8p-37f, 0.0f, 0.0f, 0x1.03e1e6p-38f, 0.0f, 0.0f,
     0.0f, 0x1.a5a3dp-107f, 0x1.fecda4p-48f, 0x1.dfa72cp-20f, 0x1.0aa582p-6f,
     0x1.157e96p-21f, 0x1.987c5cp-80f, 0.0f, 0x1.440b4cp-30f, 0x1.2ba36cp-22f, 0.0f,
     0x1.6ecf8cp-16f, 0x1.c67bfep-49f, 0.0f, 0x1.9c6c0ap-98f, 0x1.04308ep-90f,
     0x1.7b6d62p-36f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.fe7204p-55f, 0.0f,
     0x1.6b1f2ap-12f, 0.0f, 0.0f, 0.0f, 0x1.9b5196p-121f, 0.0f, 0x1.7f89dcp-123f,
     0.0f, 0x1.ca1de2p-67f, 0.0f, 0x1.91992p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf28a8p-9f, 0x1.e9b014p-58f, 0x1.c55dd8p-43f, 0x1.e531bep-2f, 0.0f,
     0x1.4887eep-9f, 0.0f, 0x1.12cffep-47f, 0.0f, 0x1.8de756p-9f, 0x1.d14e64p-6f,
     0.0f, 0.0f, 0.0f, 0x1.bd65b6p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae9978p-125f,
     0.0f, 0x1.4e7826p-36f, 0.0f, 0x1.28d98ap-66f, 0x1.ba3b38p-84f, 0.0f, 0.0f,
     0x1.9f6522p-91f, 0.0f, 0.0f, 0x1.645c88p-43f, 0.0f, 0x1.480cfp-45f,
     0x1.7fd9p-89f, 0x1.7051a4p-38f, 0.0f, 0.0f, 0.0f, 0x1.083de2p-75f, 0.0f,
     0x1.841e8cp-42f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.dec2b8p-39f,
     0x1.06b8cep-3f, 0x1.698b14p-15f, 0x1.de0bf6p-41f, 0.0f, 0.0f, 0.0f,
     0x1.8fd7p-81f, 0x1.db1f2ap-37f, 0.0f, 0.0f, 0x1.97511ep-101f, 0x1.9e48e4p-86f,
     0.0f, 0.0f, 0x1.8e1058p-8f, 0.0f, 0.0f, 0x1.b9882ap-104f, 0x1.85e7dp-84f, 0.0f,
     0.0f, 0.0f, 0x1.46c8fcp-54f, 0.0f, 0x1.2c3ae8p-112f, 0.0f, 0x1.190c78p-59f, 0.0f,
     0x1.b513cp-24f, 0x1.7cb91ep-19f, 0x1.60a3ccp-115f, 0x1.2ba15ep-37f, 0.0f, 0.0f,
     0x1.449d28p-31f, 0x1.e30e58p-43f, 0.0f, 0.0f, 0.0f, 0x1.c849b2p-74f, 0.0f, 0.0f,
     0.0f, 0x1.45223ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bf362p-70f, 0.0f,
     0x1.f5abd6p-120f, 0x1.33e634p-14f, 0x1.831654p-87f, 0.0f, 0.0f, 0.0f,
     0x1.0592cep-114f, 0.0f, 0x1.9266e4p-77f, 0x1.5a42fp-23f, 0.0f, 0x1.dbd62ap-106f,
     0x1.48c83p-109f, 0x1.801136p-85f, 0.0f, 0x1.b7e39cp-33f, 0.0f, 0.0f,
     0x1.9fcb8p-85f, 0x1.dc6d72p-99f, 0x1.de72f6p-41f, 0.0f, 0.0f, 0.0f,
     0x1.c751e4p-86f, 0.0f, 0x1.d87cc6p-126f, 0.0f, 0x1.800edp-41f, 0x1.922d3p-104f,
     0.0f, 0x1.c300e8p-3f, 0.0f, 0x1.c06e02p-28f, 0x1.34a4ep-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d85136p-111f, 0.0f, 0x1.bae096p-122f, 0x1.b25fbap-122f,
     0x1.a58078p-98f, 0.0f, 0x1.1dc1p-52f, 0x1.dbf24cp-67f, 0x1.03bf38p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.126204p-107f, 0x1.11f0f6p-101f, 0x1.34d072p-106f,
     0x1.69783ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e18efcp-68f, 0x1.9bb13p-116f,
     0x1.37f9ap-26f, 0.0f, 0.0f, 0x1.469084p-100f, 0x1.5208ep-19f, 0.0f, 0.0f,
     0x1.c4bdecp-45f, 0.0f, 0x1.5a1bfep-104f, 0x1.a2e6a2p-87f, 0x1.206ff4p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.909fp-107f, 0.0f, 0x1.eb2e96p-32f,
     0x1.bebe18p-103f, 0x1.ac5ba6p-68f, 0x1.fa63ecp-123f, 0x1.35538p-108f, 0.0f, 0.0f,
     0x1.b87b8ap-72f, 0x1.bc242ap-35f, 0x1.1cb1d2p-74f, 0.0f, 0x1.09a8c6p-15f,
     0x1.84315ep-25f, 0x1.7147c8p-95f, 0.0f, 0.0f, 0.0f, 0x1.937262p-39f,
     0x1.5b1d76p-93f, 0x1.37d9f8p-7f, 0x1.3fdb6ap-52f, 0.0f, 0x1.7380b8p-46f,
     0x1.e38256p-39f, 0.0f, 0x1.54fc88p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dcd5p-10f,
     0x1.669122p-76f, 0.0f, 0x1.38efc8p-90f, 0.0f, 0x1.cf3072p-93f, 0x1.0403f2p-84f,
     0x1.88273cp-9f, 0.0f, 0x1.81ca2ep-108f, 0x1.afb80ep-60f, 0x1.0c97d6p-63f,
     0x1.7656f6p-36f, 0.0f, 0.0f, 0x1.02596cp-73f, 0.0f, 0x1.927fd8p-93f,
     0x1.d516d2p-46f, 0.0f, 0.0f, 0.0f, 0x1.5794aap-76f, 0x1.c5dcb2p-112f, 0.0f,
     0x1.4974a2p-26f, 0x1.1ef694p-65f, 0x1.e949b2p-18f, 0.0f, 0x1.2e7b38p-124f, 0.0f,
     0x1.9e42dep-75f, 0x1.98f4a2p-101f, 0.0f, 0x1.5b7df2p-35f, 0.0f, 0.0f,
     0x1.f77bbcp-78f, 0x1.2a5af6p-77f, 0.0f, 0x1.b60404p-50f, 0x1.5ec4cp-39f, 0.0f,
     0x1.88b606p-3f, 0.0f, 0.0f, 0x1.fc2adep-90f, 0.0f, 0.0f, 0.0f, 0x1.f9de28p-22f,
     0x1.7b1264p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17376ap-18f, 0.0f, 0x1.3a55b4p-118f,
     0x1.6897bep-22f, 0.0f, 0x1.8307d2p-38f, 0.0f, 0.0f, 0x1.d82b94p-113f,
     0x1.d1db2cp-122f, 0.0f, 0.0f, 0x1.5796ccp-15f, 0x1.1be312p-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef21c2p-70f, 0x1.3e9d38p-35f, 0.0f, 0x1.4fd02cp-100f,
     0x1.b8436cp-28f, 0x1.7968ccp-116f, 0x1.db81b2p-57f, 0.0f, 0x1.7f06c8p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e374b2p-119f, 0.0f, 0x1.bcbcfep-8f, 0x1.16172ap-99f, 0.0f,
     0x1.2bf2ep-21f, 0x1.c2994ap-122f, 0x1.53572cp-100f, 0x1.324b5ap-9f, 0.0f,
     0x1.0afb3ep-44f, 0.0f, 0.0f, 0x1.1d798ap-14f, 0.0f, 0x1.b5972ep-56f,
     0x1.26501ap-82f, 0.0f, 0.0f, 0x1.63d4bcp-57f, 0.0f, 0.0f, 0.0f, 0x1.819bbcp-91f,
     0.0f, 0.0f, 0x1.d1e194p-124f, 0x1.d8ea2ap-95f, 0x1.b851ecp-19f, 0.0f, 0.0f,
     0x1.66b548p-74f, 0.0f, 0.0f, 0.0f, 0x1.e20e9p-126f, 0.0f, 0.0f, 0x1.17004cp-30f,
     0.0f, 0.0f, 0x1.16e8b2p-21f, 0x1.ad551ep-45f, 0x1.54259p-67f, 0x1.fbce68p-87f,
     0.0f, 0x1.1610ep-58f, 0.0f, 0x1.c6b3fp-110f, 0x1.719b5ap-48f, 0.0f, 0.0f,
     0x1.846696p-106f, 0x1.70fcdp-86f, 0.0f, 0x1.2c2cb4p-70f, 0.0f, 0x1.d1cdcp-95f,
     0x1.df4ba8p-105f, 0.0f, 0x1.1e26eep-92f, 0x1.71a91ep-75f, 0.0f, 0x1.a6b398p-59f,
     0x1.6ce17p-52f, 0.0f, 0x1.39af3p-34f, 0.0f, 0x1.6115fcp-84f, 0x1.ba6bfp-84f,
     0.0f, 0x1.dbb1d8p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1f982p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3c0462p-71f, 0.0f, 0.0f, 0.0f, 0x1.df93bcp-63f, 0x1.c96cb6p-114f, 0.0f,
     0x1.fed724p-70f, 0x1.27dbc6p-60f, 0x1.6b1b3cp-48f, 0.0f, 0x1.1289f8p-87f, 0.0f,
     0.0f, 0x1.6cba94p-73f, 0x1.1d04fcp-82f, 0.0f, 0.0f, 0.0f, 0x1.d4dca4p-41f,
     0x1.2c5faep-20f, 0x1.fc83dcp-13f, 0.0f, 0.0f, 0x1.130206p-86f, 0.0f, 0.0f,
     0x1.b20a2ap-67f, 0.0f, 0.0f, 0.0f, 0x1.944af4p-16f, 0.0f, 0x1.f3c0dp-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea67fep-108f, 0.0f, 0x1.ff5af2p-32f, 0x1.bc7b9ep-22f,
     0.0f, 0x1.618116p-120f, 0.0f, 0x1.c27bccp-91f, 0x1.664c66p-94f, 0x1.86ca34p-86f,
     0x1.44623ap-39f, 0x1.8f30aep-95f, 0.0f, 0.0f, 0.0f, 0x1.0aedc6p-3f, 0.0f, 0.0f,
     0x1.d03282p-40f, 0.0f, 0x1.03982ep-9f, 0x1.2bf09cp-118f, 0x1.2f662cp-99f,
     0x1.481192p-124f, 0.0f, 0.0f, 0.0f, 0x1.425afap-122f, 0.0f, 0.0f,
     0x1.490034p-115f, 0x1.f33c48p-14f, 0x1.77ca4p-91f, 0.0f, 0x1.8ec8e2p-103f, 0.0f,
     0x1.0c4cecp-111f, 0x1.e07b0ap-63f, 0.0f, 0x1.fa85dap-27f, 0.0f, 0.0f,
     0x1.f73fdcp-10f, 0x1.32119ap-49f, 0.0f, 0x1.977e48p-63f, 0.0f, 0x1.b33538p-82f,
     0x1.c3abf6p-120f, 0.0f, 0x1p0f, 0.0f, 0x1.36e46ap-47f, 0.0f, 0.0f, 0.0f,
     0x1.0a9a72p-68f, 0x1.24da34p-24f, 0.0f, 0x1.97bc56p-87f, 0x1.1db684p-39f, 0.0f,
     0.0f, 0x1.afb884p-67f, 0.0f, 0.0f, 0x1.bbf934p-33f, 0x1.c6e50ep-112f,
     0x1.3e2ef4p-96f, 0.0f, 0.0f, 0x1.3e505ep-41f, 0.0f, 0.0f, 0x1.607dep-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ae2a42p-91f, 0x1.59b12ap-37f, 0x1.2b342ep-52f,
     0x1.f08c1ap-13f, 0.0f, 0x1.0d905cp-101f, 0x1.d148fap-58f, 0x1.907324p-77f, 0.0f,
     0x1.8ac29p-104f, 0x1.6f24fcp-93f, 0.0f, 0x1.50de34p-119f, 0.0f, 0x1.accf36p-79f,
     0x1.c51d94p-77f, 0x1.aee692p-51f, 0x1.3d49ecp-104f, 0x1.5d29ecp-101f, 0.0f, 0.0f,
     0.0f, 0x1.2f05bcp-26f, 0x1.bf2f0ep-46f, 0x1.3769f6p-84f, 0.0f, 0.0f, 0.0f,
     0x1.32e8a2p-97f, 0.0f, 0.0f, 0x1.2f000ap-48f, 0x1.acd0fap-124f, 0x1.940678p-22f,
     0x1.5f178cp-49f, 0.0f, 0.0f, 0x1.0a09e6p-69f, 0.0f, 0x1.5c87dap-44f,
     0x1.1f849ep-71f, 0.0f, 0x1.0c4fcap-22f, 0.0f, 0x1.8aae8p-77f, 0x1.d6ae22p-30f,
     0x1.7338c2p-123f, 0.0f, 0x1.4712ap-53f, 0.0f, 0.0f, 0x1.0bca24p-118f, 0.0f,
     0x1.06e4cap-24f, 0.0f, 0.0f, 0.0f, 0x1.310674p-122f, 0x1.d1addep-82f,
     0x1.9e63bap-70f, 0x1p0f, 0.0f, 0.0f, 0x1.c6ed9ap-62f, 0x1.d862dcp-5f,
     0x1.ceed72p-56f, 0x1.051bf6p-63f, 0x1.453336p-89f, 0x1.6fd71p-10f, 0.0f,
     0x1.094792p-37f, 0x1.717664p-94f, 0.0f, 0.0f, 0x1.65824ap-86f, 0x1.2bed02p-101f,
     0.0f, 0x1.5fa62ep-115f, 0x1.3c6c96p-59f, 0x1.a5bc34p-107f, 0.0f, 0.0f,
     0x1.47a93p-64f, 0.0f, 0x1.ad66bp-44f, 0x1.16b298p-26f, 0.0f, 0x1.de647ap-51f,
     0.0f, 0x1.f08a5p-120f, 0.0f, 0x1.8b84e4p-58f, 0x1.84afe2p-7f, 0x1.bbb992p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0d1ep-77f, 0.0f, 0.0f, 0x1.7fd6b8p-24f,
     0x1.792d0ap-62f, 0.0f, 0x1.02aa7cp-99f, 0x1.b704fp-92f, 0x1.b3fc68p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5b109ep-79f, 0x1.62301ap-5f, 0.0f, 0x1.f3f3aap-123f,
     0x1.005a5cp-9f, 0x1.4f286cp-93f, 0.0f, 0.0f, 0.0f, 0x1.7852cap-41f,
     0x1.9baf4ap-100f, 0.0f, 0.0f, 0.0f, 0x1.d4f14p-114f, 0x1.07e09p-79f, 0.0f, 0.0f,
     0x1.c1c6cp-117f, 0.0f, 0x1.7d895p-54f, 0.0f, 0.0f, 0x1.3aa876p-63f,
     0x1.b18b48p-46f, 0.0f, 0.0f, 0x1.8f04ccp-39f, 0x1.a46166p-21f, 0x1.92d15ap-14f,
     0x1.225042p-70f, 0x1.4d482p-39f, 0x1.091f3cp-73f, 0x1.f08faap-31f,
     0x1.102746p-114f, 0x1.c8f6d2p-18f, 0.0f, 0.0f, 0x1.227122p-35f, 0x1.44c198p-83f,
     0.0f, 0x1.de8cb4p-15f, 0x1.a4f7bcp-110f, 0x1.088c52p-101f, 0.0f,
     0x1.81519cp-100f, 0.0f, 0x1.d9e758p-88f, 0x1.7210f6p-95f, 0x1.0b4362p-61f,
     0x1.203882p-61f, 0.0f, 0.0f, 0.0f, 0x1.e57b9p-122f, 0x1.3b078cp-52f,
     0x1.36ec9ep-121f, 0.0f, 0x1.8dcf4cp-90f, 0x1.484a56p-39f, 0x1.e9b362p-85f,
     0x1.08b2e6p-71f, 0.0f, 0x1.5fb6f8p-123f, 0x1.ad9656p-2f, 0x1.0bb514p-5f,
     0x1.f673bcp-3f, 0.0f, 0x1.fcecb8p-33f, 0.0f, 0.0f, 0.0f, 0x1.7b42cap-75f,
     0x1.fa2f92p-120f, 0x1.9ba4fap-57f, 0x1.170816p-11f, 0.0f, 0.0f, 0.0f,
     0x1.eae722p-5f, 0x1.86fc84p-6f, 0.0f, 0.0f, 0x1.74d406p-114f, 0.0f,
     0x1.425c6ep-1f, 0.0f, 0x1.3e1cd6p-108f, 0x1.c7a0e8p-101f, 0.0f, 0x1.8e7136p-80f,
     0x1.e54a88p-47f, 0x1.442d1cp-114f, 0x1.279858p-111f, 0x1.b64faep-1f,
     0x1.74d164p-90f, 0x1.865c3p-89f, 0x1.270116p-36f, 0x1.49057ep-114f, 0.0f,
     0x1.2d9e7ap-9f, 0x1.9c2c0cp-34f, 0x1.2aaep-109f, 0.0f
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
            tmp1 = acosf(tmp0);
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
    printf("acosf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("acosf bench acc %a\n", global_bench_acc);
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
