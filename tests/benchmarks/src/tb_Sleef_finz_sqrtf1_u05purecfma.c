/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf1_u05purecfma.c --function \
 *     Sleef_finz_sqrtf1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0x1.7c3df6p-2f, 0.0f, 0x1.896688p-41f, 0x1.671864p-115f,
     0x1.a563f2p-109f, 0.0f, 0.0f, 0x1.03210ap-91f, 0x1.d1f84p-40f, 0x1.791d5ep-22f,
     0.0f, 0x1.7afd8p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70c31p-80f,
     0x1.9669e4p-104f, 0.0f, 0x1.7224d8p-97f, 0.0f, 0x1.0d41dcp-4f, 0x1.289afcp-74f,
     0x1.b2ec32p-123f, 0x1.ff4916p-125f, 0.0f, 0.0f, 0x1.7e212cp-79f, 0.0f,
     0x1.cccbe6p-42f, 0.0f, 0.0f, 0.0f, 0x1.37cf6cp-48f, 0.0f, 0x1.3acadep-123f,
     0x1.ece49ep-76f, 0.0f, 0x1.35a1dp-19f, 0x1.c1dabep-55f, 0x1.0ff576p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aaa116p-57f, 0x1.479d2ap-101f, 0x1.8edc4p-123f, 0.0f, 0.0f,
     0x1.16baa6p-9f, 0x1.c84e72p-38f, 0x1.c3b31ep-47f, 0.0f, 0x1.eafe64p-36f,
     0x1.2a20dep-93f, 0x1.4525eap-45f, 0x1.1783aep-103f, 0x1.d68c7p-41f,
     0x1.30a27ep-67f, 0.0f, 0x1.7bf438p-5f, 0.0f, 0.0f, 0x1.edd934p-84f, 0.0f,
     0x1.0d5dbcp-78f, 0x1.6330e8p-53f, 0.0f, 0x1.9b5b14p-30f, 0x1.9e6f44p-93f, 0.0f,
     0x1.961772p-86f, 0.0f, 0x1.15e2fap-20f, 0x1.db76e6p-50f, 0x1.6a178ep-122f, 0.0f,
     0.0f, 0.0f, 0x1.a370aap-84f, 0.0f, 0x1.b065a2p-51f, 0x1.7fa68cp-53f, 0.0f, 0.0f,
     0.0f, 0x1.8dbd4ep-111f, 0x1.550b18p-119f, 0.0f, 0x1.dee792p-33f, 0.0f, 0.0f,
     0x1.c469b6p-23f, 0.0f, 0x1.f75932p-88f, 0.0f, 0x1.455ff6p-94f, 0x1.8099ecp-52f,
     0x1.d88094p-115f, 0x1.03794ap-76f, 0x1.4ee624p-94f, 0x1.6586aep-19f, 0.0f, 0.0f,
     0x1.e06de2p-14f, 0x1.37d596p-121f, 0x1.044064p-66f, 0.0f, 0.0f, 0x1.3943e2p-56f,
     0.0f, 0.0f, 0x1.4a8994p-20f, 0x1.2ee552p-18f, 0.0f, 0x1.b0aa0ep-88f,
     0x1.959336p-106f, 0.0f, 0x1.a28a3cp-117f, 0.0f, 0.0f, 0x1.6e82dep-91f, 0.0f,
     0x1.70cb6ap-104f, 0x1.e7db06p-92f, 0x1.b9fcc6p-88f, 0x1.ea2666p-71f,
     0x1.986f18p-121f, 0x1.e01deap-31f, 0x1.0de968p-56f, 0x1.59f58ep-39f, 0.0f, 0.0f,
     0x1.357ec2p-20f, 0.0f, 0x1.25b4e2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.534754p-109f, 0.0f, 0.0f, 0x1.3a8ef2p-28f, 0.0f, 0.0f, 0x1.a7b756p-106f,
     0x1.17d83p-11f, 0.0f, 0x1.1c3162p-48f, 0.0f, 0.0f, 0.0f, 0x1.0c192p-103f, 0.0f,
     0.0f, 0x1.97a546p-113f, 0x1.8d4844p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53ce7ap-76f, 0x1.712294p-66f, 0x1.845de2p-66f, 0x1.7fc7aep-26f,
     0x1.b41dd2p-66f, 0x1.73761cp-57f, 0.0f, 0.0f, 0.0f, 0x1.1a2334p-49f,
     0x1.4ed59p-66f, 0.0f, 0.0f, 0x1.8c46d4p-107f, 0.0f, 0x1.3d814p-71f,
     0x1.92dd86p-118f, 0x1.5083bap-70f, 0.0f, 0x1.3b150cp-24f, 0.0f, 0.0f,
     0x1.f30d02p-14f, 0x1.12f62ap-96f, 0.0f, 0x1.3d08a4p-22f, 0x1.9606dap-56f, 0.0f,
     0x1.e1f2aep-75f, 0x1.1a4156p-97f, 0x1.229a7ap-121f, 0.0f, 0.0f, 0x1.2da1d4p-114f,
     0x1.1094a4p-12f, 0x1.8798bp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5c0c8p-112f, 0x1.d1355p-63f, 0.0f, 0x1.2ffc86p-45f, 0.0f, 0.0f, 0.0f,
     0x1.fcdfdap-113f, 0.0f, 0x1.059814p-96f, 0x1.ec46bap-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5342fep-48f, 0x1.409acap-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.927188p-98f, 0.0f, 0x1.53f39cp-118f, 0.0f, 0.0f, 0x1.c17edap-55f, 0.0f,
     0x1.8d22c2p-19f, 0x1.a5a7eap-78f, 0.0f, 0.0f, 0.0f, 0x1.96d02ep-71f, 0.0f,
     0x1.36be48p-23f, 0x1.48784ap-20f, 0.0f, 0x1.e193aep-18f, 0x1.c250d6p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d107b6p-72f, 0x1p0f,
     0x1.0aed6ap-104f, 0x1.251d66p-19f, 0x1.8493cp-84f, 0x1.a7c17cp-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e87ffep-83f, 0x1.e25e56p-58f, 0x1.baa876p-121f, 0x1.580b5p-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe9672p-30f, 0.0f,
     0x1.25a1f6p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a8ffcp-11f,
     0x1.917394p-1f, 0x1.9229e6p-60f, 0.0f, 0x1.54b94ep-40f, 0x1.e58a7cp-9f, 0.0f,
     0.0f, 0x1.f89a5cp-70f, 0.0f, 0x1.cd58f6p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7976cap-69f, 0x1.127eccp-48f, 0x1.6c5eb4p-54f, 0.0f, 0x1.e82af2p-123f, 0.0f,
     0.0f, 0x1.7b5c0ep-37f, 0.0f, 0x1.802526p-10f, 0.0f, 0x1.cf3b48p-30f, 0.0f,
     0x1.68cc6ep-20f, 0x1.03c706p-125f, 0x1.a57204p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3efe9ap-92f, 0x1.5c8f18p-80f, 0x1.889ff2p-103f, 0.0f, 0.0f, 0x1.aae2ccp-78f,
     0.0f, 0x1.896118p-41f, 0x1.f82ea2p-26f, 0x1.8df0e6p-70f, 0x1.5af224p-4f, 0.0f,
     0.0f, 0.0f, 0x1.445c0ap-69f, 0.0f, 0x1.21805ep-45f, 0.0f, 0.0f, 0x1.a9819p-7f,
     0x1.6e18bap-110f, 0x1.2cfe76p-56f, 0x1.c816bap-117f, 0.0f, 0x1.480ca4p-75f,
     0x1.ae3afcp-87f, 0x1.70184ap-38f, 0x1.09640ap-62f, 0.0f, 0x1.f59bdcp-61f,
     0x1.d38ae6p-102f, 0.0f, 0x1.52d5bep-66f, 0x1.672dfap-67f, 0x1.d58f36p-121f,
     0x1.eb0a3cp-64f, 0x1.5c18bap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46ce5ap-112f,
     0.0f, 0x1.70ffb4p-71f, 0.0f, 0x1.d459bap-8f, 0.0f, 0x1.6fd392p-11f,
     0x1.db6db4p-32f, 0.0f, 0x1.65aa7p-115f, 0.0f, 0.0f, 0x1.1f2314p-109f, 0.0f,
     0x1.f485cp-33f, 0.0f, 0x1.daa608p-114f, 0x1.56e2eep-68f, 0x1.5a4b32p-31f,
     0x1.664c2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fea12p-57f, 0.0f,
     0x1.4e9b2p-60f, 0.0f, 0x1.583a78p-126f, 0x1.c4f40ep-78f, 0.0f, 0.0f,
     0x1.58b608p-69f, 0x1.ac96b6p-82f, 0x1.7ed46ep-105f, 0.0f, 0x1.f4895ap-41f, 0.0f,
     0.0f, 0x1.f48bap-114f, 0.0f, 0.0f, 0x1.58c086p-97f, 0.0f, 0x1.85257ep-35f, 0.0f,
     0.0f, 0.0f, 0x1.47fb8p-1f, 0x1.08fb3cp-69f, 0x1.532cf4p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c9a3bep-32f, 0.0f, 0.0f, 0x1.bd4cf8p-38f, 0.0f, 0.0f,
     0x1.9102d6p-13f, 0x1.b80d8cp-59f, 0.0f, 0.0f, 0.0f, 0x1.7e9344p-115f, 0.0f,
     0x1.a3fb82p-110f, 0x1.205e24p-66f, 0.0f, 0x1.1d7f34p-46f, 0x1.80fd96p-56f, 0.0f,
     0x1.45315p-86f, 0x1.0e4efp-13f, 0x1.eda24ap-53f, 0x1.636fdp-103f,
     0x1.b50468p-99f, 0.0f, 0.0f, 0x1.fd80ap-77f, 0.0f, 0x1.b0e37ep-125f,
     0x1.a9b818p-28f, 0x1.e4481ap-92f, 0.0f, 0.0f, 0x1.a40a82p-106f, 0x1.8d633ep-23f,
     0x1.b61034p-41f, 0x1.818b92p-20f, 0.0f, 0x1.0a7c66p-8f, 0.0f, 0.0f,
     0x1.e5464ap-4f, 0.0f, 0.0f, 0.0f, 0x1.7a27dcp-3f, 0x1.32cbe8p-3f, 0.0f, 0.0f,
     0x1.95958ep-97f, 0x1.23af8ep-72f, 0x1.7a46dap-14f, 0x1.f1ba6ep-4f,
     0x1.673b94p-36f, 0x1.62c7e4p-20f, 0x1.7d03ccp-37f, 0.0f, 0x1.d04f22p-29f,
     0x1.cbed98p-22f, 0.0f, 0x1.f00478p-62f, 0x1.cbe816p-13f, 0x1.7e5d64p-81f,
     0x1.43cb66p-52f, 0.0f, 0.0f, 0x1.3138acp-120f, 0x1.3449cep-18f, 0x1.14b62cp-21f,
     0x1.521d62p-19f, 0x1.bff5f8p-83f, 0x1.6b4beap-34f, 0.0f, 0.0f, 0x1.789b74p-124f,
     0x1.c4372cp-54f, 0x1.e78458p-49f, 0x1.0a3352p-89f, 0.0f, 0.0f, 0.0f,
     0x1.994f2ep-28f, 0x1.060348p-119f, 0x1.dca5bcp-89f, 0x1.8dc068p-122f, 0.0f, 0.0f,
     0x1.b6920ep-11f, 0.0f, 0.0f, 0.0f, 0x1.81b334p-67f, 0x1.ac4bcap-48f, 0.0f, 0.0f,
     0x1.831b8ap-33f, 0x1.9dfdb8p-114f, 0x1.1f99d2p-88f, 0x1.689148p-100f, 0.0f, 0.0f,
     0x1.cf892p-88f, 0.0f, 0x1.6bc428p-4f, 0x1.a7d154p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.555668p-50f, 0.0f, 0x1.cb06b8p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5cd5a2p-14f, 0x1.ac7adap-28f, 0.0f, 0x1.2e18d8p-52f, 0x1.809172p-39f,
     0x1.72086ap-87f, 0x1.4ece3ap-106f, 0.0f, 0x1.b2680ap-107f, 0.0f, 0.0f, 0.0f,
     0x1.bc5028p-70f, 0.0f, 0x1.87c974p-2f, 0.0f, 0x1.414476p-39f, 0.0f, 0.0f, 0.0f,
     0x1.b8c9eap-1f, 0.0f, 0x1.b04442p-12f, 0.0f, 0.0f, 0.0f, 0x1.7f1f1cp-84f, 0.0f,
     0x1.ca6c46p-7f, 0x1.d232d4p-49f, 0x1.fdde0ep-97f, 0.0f, 0.0f, 0x1.869422p-110f,
     0.0f, 0x1.6ee0e6p-108f, 0.0f, 0.0f, 0.0f, 0x1.765b06p-20f, 0.0f,
     0x1.5da898p-100f, 0.0f, 0.0f, 0.0f, 0x1.95988ep-115f, 0.0f, 0x1.e3ae58p-2f, 0.0f,
     0x1.e15722p-65f, 0x1p0f, 0.0f, 0x1.7c29dcp-31f, 0.0f, 0x1.c142b2p-8f,
     0x1.01d85p-29f, 0.0f, 0.0f, 0.0f, 0x1.2145e6p-78f, 0x1.211196p-125f, 0.0f,
     0x1.2f436cp-89f, 0.0f, 0.0f, 0x1.8c88f6p-48f, 0x1.dffa9ep-33f, 0.0f, 0.0f,
     0x1.f5f0f8p-70f, 0x1.81d3cep-6f, 0x1.878c16p-25f, 0.0f, 0.0f, 0.0f,
     0x1.e814a2p-53f, 0.0f, 0x1.55cc5p-23f, 0.0f, 0x1.433c8ap-82f, 0x1.ea7292p-109f,
     0x1.db35bap-78f, 0.0f, 0.0f, 0x1.346bd6p-81f, 0.0f, 0x1.ef6b66p-58f,
     0x1.56d83cp-104f, 0x1.19748ep-27f, 0.0f, 0.0f, 0x1.3f9168p-86f, 0.0f,
     0x1.8f2b32p-63f, 0.0f, 0x1.89e4b2p-63f, 0.0f, 0.0f, 0x1.76fd8cp-78f,
     0x1.319fccp-16f, 0.0f, 0x1.2c9b5cp-33f, 0x1.63936ep-101f, 0x1.35ab26p-125f,
     0x1.13bb6ap-55f, 0x1.a59376p-54f, 0.0f, 0.0f, 0.0f, 0x1.4c913ep-52f,
     0x1.123a7ep-5f, 0.0f, 0.0f, 0.0f, 0x1.ba3bccp-78f, 0x1.664b5ep-89f, 0.0f,
     0x1.16688ap-71f, 0x1.28629p-66f, 0x1.35b1f8p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44e5b2p-124f, 0x1.9ad7b8p-47f, 0x1.e00258p-120f, 0x1.4ceebcp-126f,
     0x1.3002fp-107f, 0x1.de429p-15f, 0x1.bb13f2p-12f, 0.0f, 0.0f, 0x1.14d53ep-22f,
     0.0f, 0.0f, 0.0f, 0x1.3ec7bcp-73f, 0x1.abf214p-28f, 0x1.e48d0cp-52f,
     0x1.8c7aaep-26f, 0x1.b2ac5p-53f, 0x1.15c7fp-121f, 0.0f, 0x1.f7d78p-79f, 0.0f,
     0x1.c32536p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb2c5cp-25f,
     0x1.3f053cp-32f, 0x1.c268bcp-75f, 0.0f, 0.0f, 0.0f, 0x1.b05748p-88f,
     0x1.3c2f2cp-89f, 0x1.666bbep-70f, 0x1.059a8cp-29f, 0.0f, 0x1.a7eaacp-23f, 0.0f,
     0.0f, 0x1.74f398p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36cebep-47f, 0.0f,
     0x1.3d9dbcp-111f, 0x1.c926a4p-101f, 0.0f, 0x1.60d376p-107f, 0x1.0b6c24p-70f,
     0x1.bfba4ep-52f, 0x1.560c18p-49f, 0.0f, 0x1.cc0a22p-87f, 0.0f, 0x1.26ff6p-83f,
     0.0f, 0.0f, 0x1.cfd52cp-107f, 0x1.b30eb8p-109f, 0.0f, 0.0f, 0x1.36e796p-97f,
     0x1.67e924p-8f, 0.0f, 0.0f, 0x1.89d84ap-70f, 0.0f, 0x1.28aaeap-62f,
     0x1.650628p-12f, 0x1.f410ep-31f, 0x1.b766f2p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3cda6p-4f, 0x1.c59b1ep-18f, 0.0f, 0.0f, 0.0f, 0x1.35f556p-101f,
     0x1.f551ecp-117f, 0.0f, 0x1.0d8ff6p-13f, 0x1.5c174p-8f, 0.0f, 0.0f, 0x1p0f,
     0x1.1181a2p-69f, 0x1.184458p-22f, 0.0f, 0.0f, 0.0f, 0x1.17a49ep-38f, 0.0f,
     0x1.4775dap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b2bf4p-43f, 0x1.c05dcep-122f, 0x1.dc6e94p-94f, 0x1.e36e34p-21f, 0.0f,
     0x1.8bf8dcp-35f, 0.0f, 0x1.8f6176p-40f, 0x1.3c25bap-99f, 0.0f, 0.0f,
     0x1.7aa9d6p-111f, 0x1.d3af98p-103f, 0.0f, 0.0f, 0.0f, 0x1.5e916ep-36f,
     0x1.6806d2p-31f, 0.0f, 0.0f, 0x1.aec64ep-49f, 0.0f, 0x1.baf90cp-104f,
     0x1.a0eb1ep-29f, 0.0f, 0x1.7a6f44p-67f, 0x1.9ecd1ap-20f, 0x1.7315dep-59f,
     0x1.5917fap-68f, 0x1.a196p-92f, 0x1.c8a43ep-75f, 0x1.21b03p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d0c67ep-107f, 0x1.11009cp-116f, 0x1.a07938p-37f, 0.0f,
     0x1.831da2p-18f, 0x1.161ac6p-8f, 0.0f, 0.0f, 0x1.bd2f84p-100f, 0x1.20e506p-62f,
     0.0f, 0x1.8b7b86p-12f, 0.0f, 0x1.df1aecp-48f, 0x1.65a2e8p-66f, 0x1.1b12dep-118f,
     0.0f, 0x1.94d4c8p-99f, 0x1.04c0cp-95f, 0x1.0639cep-68f, 0x1.b0d5fap-109f,
     0x1.472e7cp-81f, 0.0f, 0x1.81cea8p-31f, 0.0f, 0x1.e3fcccp-86f, 0.0f,
     0x1.fed352p-72f, 0.0f, 0x1.bd04f4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59fb9p-30f,
     0x1.304096p-23f, 0.0f, 0x1.078d72p-44f, 0.0f, 0x1.44d48ap-109f, 0x1.143ec8p-55f,
     0x1.327972p-88f, 0.0f, 0.0f, 0x1.8c00f8p-3f, 0.0f, 0.0f, 0x1.0b8428p-40f,
     0x1.314fccp-73f, 0.0f, 0x1.4a932ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.76b72cp-86f, 0.0f, 0.0f, 0x1.748f06p-93f,
     0x1.61dbc2p-120f, 0x1.c2856p-98f, 0.0f, 0.0f, 0x1.abfdfp-2f, 0.0f,
     0x1.a0b906p-40f, 0.0f, 0.0f, 0x1.d5ee7cp-29f, 0.0f, 0x1.fdcbfap-105f, 0.0f,
     0x1.430f5ep-64f, 0x1.add9ecp-76f, 0.0f, 0x1.012848p-114f, 0x1.0a395p-95f,
     0x1.f97caap-115f, 0x1.55a79cp-4f, 0x1.af7f5p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa475ap-62f, 0x1.f1860cp-71f, 0x1.ff3602p-75f, 0x1.3c2668p-51f,
     0x1.a74dbep-53f, 0.0f, 0.0f, 0.0f, 0x1.82466ap-84f, 0x1p0f, 0x1.ed2efcp-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6225ep-13f, 0.0f, 0.0f, 0.0f, 0x1.37ada4p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f72ddep-47f, 0x1.03b06ap-56f, 0.0f,
     0x1.3d906cp-29f, 0x1.77a45p-92f, 0x1.5f111ap-68f, 0x1.d0f96p-28f, 0.0f, 0.0f,
     0.0f, 0x1.34fc3ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02667ep-119f, 0.0f,
     0x1.21ffe6p-126f, 0x1.779716p-14f, 0x1.cc3576p-22f, 0x1.bdc892p-58f,
     0x1.eea4a2p-22f, 0.0f, 0x1.eecb08p-57f, 0x1.dff32p-102f, 0x1.6c9b78p-38f,
     0x1.d08fccp-61f, 0x1.946808p-40f, 0.0f, 0.0f, 0x1.306406p-17f, 0.0f, 0.0f, 0.0f,
     0x1.5f9766p-51f, 0x1.ee3e9cp-14f, 0x1.3da80ep-8f, 0x1.f2c94ap-65f,
     0x1.591e34p-100f, 0.0f, 0.0f, 0.0f, 0x1.599c3ep-80f, 0x1.9febb6p-54f,
     0x1.da3bbcp-39f, 0.0f, 0x1.bb32acp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.f73268p-120f, 0.0f, 0.0f, 0.0f, 0x1.256552p-96f
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
            tmp1 = Sleef_finz_sqrtf1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sqrtf1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf1_u05purecfma bench acc %a\n", global_bench_acc);
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
