/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_copysignf4_kvx.c --function Sleef_copysignf4_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.ae6b3cp-10f, 0.0f, 0x1.f54594p-61f, 0.0f, 0.0f,
     0x1.5c2f4cp-115f, 0.0f, 0x1.273e84p-15f, 0x1.a923cp-19f, 0x1.741fe4p-36f, 0.0f,
     0.0f, 0.0f, 0x1.2d678cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7931fep-60f,
     0x1.769736p-80f, 0.0f, 0.0f, 0x1.2f51b2p-92f, 0.0f, 0.0f, 0x1.cd497p-27f, 0.0f,
     0x1.5b1c02p-22f, 0x1.d9f082p-93f, 0.0f, 0x1.f26668p-40f, 0.0f, 0.0f,
     0x1.c0ddf2p-100f, 0.0f, 0x1.99163ap-100f, 0x1.b430aap-104f, 0.0f,
     0x1.ce4efcp-29f, 0x1.f51b68p-24f, 0.0f, 0x1.65718ep-15f, 0x1.c84636p-23f, 0.0f,
     0.0f, 0.0f, 0x1.72e89ap-3f, 0.0f, 0.0f, 0.0f, 0x1.b4877ep-122f, 0.0f, 0.0f,
     0x1.4f054p-113f, 0x1.29ac5ap-101f, 0.0f, 0x1.485eb8p-119f, 0x1.77126ep-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.814a6ap-116f, 0.0f, 0.0f, 0.0f, 0x1.d4d98ep-5f,
     0x1.8be5b4p-66f, 0x1.8af902p-66f, 0.0f, 0.0f, 0x1.c4736cp-64f, 0.0f, 0.0f,
     0x1.30cfp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ea018p-31f, 0x1.2a9b9p-48f,
     0x1.564116p-7f, 0.0f, 0x1.5e8f62p-4f, 0x1.4012d8p-85f, 0.0f, 0.0f, 0.0f,
     0x1.c08b2ep-109f, 0x1.647f78p-29f, 0x1.3fa9p-110f, 0x1.98bff6p-90f, 0.0f,
     0x1.ff219ep-66f, 0x1.d739b6p-107f, 0x1.2099dcp-94f, 0x1.ab3b1ep-23f, 0.0f,
     0x1.352d0ep-52f, 0x1.678b36p-46f, 0x1.444a7cp-121f, 0x1.8500f8p-34f,
     0x1.fa2524p-36f, 0.0f, 0.0f, 0x1.2be252p-111f, 0x1.279ebep-78f, 0x1.8eeebcp-49f,
     0x1.1e056cp-19f, 0x1.bd6344p-115f, 0.0f, 0x1.5c5c0ap-50f, 0.0f, 0x1.e224cap-35f,
     0x1.469a1ap-19f, 0.0f, 0x1.7bfda6p-5f, 0x1.0a163ep-82f, 0.0f, 0x1.dfa856p-37f,
     0.0f, 0x1.8b968cp-102f, 0x1.73391ep-42f, 0.0f, 0.0f, 0x1p0f, 0x1.dadc9cp-22f,
     0.0f, 0.0f, 0x1.78a6e4p-94f, 0.0f, 0.0f, 0x1.32eb1cp-76f, 0x1.e362cp-29f,
     0x1.32b4cp-49f, 0x1.25105cp-62f, 0x1.7d2aeap-83f, 0x1p0f, 0x1.bc1a64p-116f, 0.0f,
     0.0f, 0.0f, 0x1.4ddbe8p-126f, 0.0f, 0.0f, 0x1.3640c8p-6f, 0x1.841afap-82f, 0.0f,
     0x1.d0975p-126f, 0.0f, 0x1.5717c2p-122f, 0.0f, 0.0f, 0x1.0a56d6p-7f,
     0x1.8c541p-86f, 0.0f, 0x1.1de40ep-30f, 0x1.6f4348p-74f, 0.0f, 0x1.ee7a8p-91f,
     0.0f, 0x1.c227cap-55f, 0x1.fa0b4cp-84f, 0.0f, 0x1.979e5p-87f, 0.0f,
     0x1.fd8406p-90f, 0x1.851584p-93f, 0.0f, 0x1.115b84p-64f, 0x1.3635ccp-96f,
     0x1.821334p-72f, 0x1.6a82cp-48f, 0.0f, 0x1.6035ccp-62f, 0x1.270bp-65f, 0.0f,
     0.0f, 0x1.dd00acp-121f, 0x1.451366p-109f, 0x1.e8ec44p-6f, 0.0f, 0x1.fd5a24p-48f,
     0.0f, 0x1.ab8fb4p-7f, 0.0f, 0x1.2d8628p-17f, 0.0f, 0.0f, 0x1.f76fep-52f, 0.0f,
     0.0f, 0.0f, 0x1.f944dep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ee706p-96f,
     0x1.b9006cp-1f, 0x1.d81592p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4f0b4p-123f, 0.0f, 0.0f, 0x1.163d46p-10f, 0.0f, 0x1.93d35cp-42f, 0.0f,
     0x1.40c2d8p-74f, 0.0f, 0x1.d68c4p-63f, 0.0f, 0x1.b55ce2p-47f, 0x1.1a657ap-88f,
     0.0f, 0.0f, 0x1.6927fcp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.96783ap-99f, 0x1.a3cdc2p-41f, 0x1.e02efap-64f, 0x1.b34454p-16f,
     0.0f, 0.0f, 0x1.a0e82ap-107f, 0x1.184be6p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b9976p-49f, 0x1.1d652ap-108f, 0x1.a44bp-47f, 0.0f, 0.0f, 0x1.e8e482p-80f,
     0.0f, 0x1.537f08p-59f, 0x1.49c466p-61f, 0.0f, 0x1.13a04ep-43f, 0.0f, 0.0f,
     0x1.ad354cp-86f, 0.0f, 0x1.832a1ep-26f, 0x1.ecd7b6p-60f, 0x1.502e12p-6f,
     0x1.b27f28p-96f, 0x1.56cedcp-31f, 0x1.f6df3cp-50f, 0.0f, 0x1.adbbp-68f, 0.0f,
     0.0f, 0x1.a72a64p-114f, 0x1.33e52ap-69f, 0x1.c2e3dap-118f, 0x1.2d0598p-94f,
     0x1.f616cp-103f, 0.0f, 0x1.583ef2p-83f, 0.0f, 0.0f, 0x1.1622dep-33f,
     0x1.e46ed6p-85f, 0.0f, 0.0f, 0.0f, 0x1.b6bf88p-69f, 0.0f, 0.0f, 0x1.123c96p-11f,
     0.0f, 0.0f, 0x1.a25e28p-54f, 0x1.a57ba6p-71f, 0x1.73049cp-123f, 0x1.2b0a0cp-100f,
     0x1.8769b4p-44f, 0x1.f38d66p-41f, 0.0f, 0.0f, 0x1.0463c8p-20f, 0.0f, 0.0f,
     0x1.02e7d4p-14f, 0.0f, 0x1.2f49bep-63f, 0x1.1315c4p-109f, 0.0f, 0x1.b8f48cp-94f,
     0x1.68a8bp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfe478p-96f,
     0.0f, 0x1.63f972p-113f, 0.0f, 0x1.ce45f8p-63f, 0x1.da6a52p-85f, 0x1.9d322cp-58f,
     0x1.7c24bap-69f, 0.0f, 0x1.72b824p-81f, 0.0f, 0.0f, 0x1.fd59dep-122f,
     0x1.e7bc16p-19f, 0x1.961e36p-84f, 0x1.49457ep-2f, 0x1.9164ccp-126f, 0.0f,
     0x1.37b75ap-12f, 0x1.3951d6p-110f, 0x1.015d5ep-98f, 0x1.cb8ed6p-61f,
     0x1.0c37bap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.d0d7d6p-65f, 0.0f,
     0x1.49dc2cp-56f, 0.0f, 0.0f, 0x1.49e66cp-89f, 0x1.5f92f4p-91f, 0x1p0f, 0.0f,
     0x1.8f45d4p-56f, 0.0f, 0.0f, 0.0f, 0x1.e042b6p-75f, 0x1.8d05fep-10f,
     0x1.a6d1fep-7f, 0x1.096874p-79f, 0.0f, 0.0f, 0x1.40b902p-62f, 0x1.7070e2p-28f,
     0.0f, 0x1.9b44a6p-49f, 0x1.24b532p-55f, 0.0f, 0.0f, 0.0f, 0x1.919a7ep-77f, 0.0f,
     0.0f, 0x1.9c498ep-38f, 0x1.6330f8p-7f, 0x1.09d892p-22f, 0x1.3d0874p-125f,
     0x1.928c84p-113f, 0.0f, 0x1.83ab46p-112f, 0x1.c6456p-96f, 0.0f, 0x1.8d4444p-21f,
     0.0f, 0x1.257c92p-123f, 0x1.d6ee96p-67f, 0x1.8a1e1cp-36f, 0x1.eaac3cp-12f,
     0x1.e8b802p-62f, 0.0f, 0.0f, 0x1.94c82cp-74f, 0x1.ce92f4p-22f, 0.0f,
     0x1.fb19p-39f, 0x1.4b758ap-37f, 0.0f, 0.0f, 0x1.f0357ep-46f, 0x1.f07b8ep-110f,
     0.0f, 0.0f, 0.0f, 0x1.5d72ap-122f, 0.0f, 0x1p0f, 0.0f, 0x1.9a3c4ap-126f,
     0x1.388eecp-79f, 0.0f, 0.0f, 0x1.f26764p-89f, 0.0f, 0.0f, 0.0f, 0x1.d961e8p-1f,
     0.0f, 0.0f, 0.0f, 0x1.7aacbcp-126f, 0.0f, 0.0f, 0x1.831918p-118f, 0.0f,
     0x1.704b04p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.076d7p-98f, 0x1.fec8f2p-99f,
     0x1.ea386cp-109f, 0x1.a8a1fap-120f, 0x1.0c116ap-111f, 0.0f, 0.0f, 0.0f,
     0x1.48849p-85f, 0x1.d5ade4p-114f, 0x1.5df10cp-68f, 0.0f, 0.0f, 0x1.3e3074p-43f,
     0.0f, 0.0f, 0x1.71c75cp-65f, 0.0f, 0.0f, 0x1.0be572p-95f, 0x1.d0c5f6p-13f,
     0x1.8b2ceep-79f, 0.0f, 0x1.88b18ep-124f, 0.0f, 0.0f, 0x1.acf208p-14f, 0.0f,
     0x1.0539f6p-85f, 0x1.535d2cp-61f, 0.0f, 0x1.4548c2p-78f, 0.0f, 0x1.e08b5ap-83f,
     0x1.106b7p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.866816p-87f, 0x1.bfb45p-114f, 0.0f,
     0.0f, 0x1.e4eaf4p-108f, 0.0f, 0.0f, 0x1.65bd98p-60f, 0.0f, 0.0f, 0x1.5e5f8ap-25f,
     0x1.8430fp-104f, 0x1.e233f6p-113f, 0x1.85aa68p-53f, 0x1.d06578p-73f, 0.0f, 0.0f,
     0x1.919e2ep-37f, 0.0f, 0.0f, 0x1.5403b6p-69f, 0.0f, 0x1.5967a6p-29f,
     0x1.283e8p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.284522p-25f, 0x1.979f8ap-91f,
     0x1.1a9764p-91f, 0x1.3ceb82p-8f, 0x1.2c019cp-119f, 0.0f, 0.0f, 0x1.0b8a3ep-30f,
     0.0f, 0x1.50bfccp-35f, 0.0f, 0x1.19d8a6p-80f, 0.0f, 0x1.10f8dep-74f,
     0x1.e36aacp-93f, 0.0f, 0x1.84072cp-73f, 0x1.b7be78p-120f, 0x1.72735ep-63f,
     0x1.4311e4p-65f, 0x1.089412p-76f, 0x1.7bfcd2p-68f, 0.0f, 0x1.a224dap-30f,
     0x1.df55b8p-106f, 0.0f, 0x1.25e756p-54f, 0x1.81154ap-2f, 0x1.842abcp-81f, 0.0f,
     0x1.22115ep-56f, 0x1.75952cp-34f, 0.0f, 0.0f, 0.0f, 0x1.c85d04p-97f,
     0x1.403d5ap-73f, 0.0f, 0x1.f18954p-23f, 0x1.60c93cp-108f, 0.0f, 0x1.5e3fb4p-101f,
     0x1.14c0cap-69f, 0.0f, 0x1.233fdp-115f, 0x1.f1c9b4p-103f, 0.0f, 0x1.e8165cp-86f,
     0x1.e9e8e8p-99f, 0x1.2e40a8p-77f, 0x1.cb5cbp-19f, 0x1.4cde2ap-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9192b4p-51f, 0x1.138eccp-14f, 0x1.4752d2p-29f, 0.0f, 0.0f,
     0x1.d72708p-43f, 0.0f, 0x1.5f0b96p-40f, 0x1.3be37ap-59f, 0.0f, 0.0f,
     0x1.62c4aap-85f, 0x1.8e5ca4p-117f, 0x1.6f9ec2p-62f, 0.0f, 0x1.f9180ap-46f,
     0x1.e2ccfap-56f, 0x1.7935fcp-55f, 0x1.ac9e8ep-27f, 0.0f, 0x1.753416p-110f,
     0x1.a9bfap-50f, 0x1.c9009ap-39f, 0.0f, 0x1.21a5bcp-9f, 0.0f, 0.0f, 0.0f,
     0x1.ddf8a4p-55f, 0.0f, 0x1.c45d12p-20f, 0x1.0f7752p-8f, 0.0f, 0x1.96aecap-1f,
     0x1.362928p-104f, 0.0f, 0x1.02b1c4p-54f, 0x1.88946p-101f, 0x1.c121e4p-38f,
     0x1.a491cep-71f, 0x1.446862p-90f, 0.0f, 0x1.0689eep-11f, 0.0f, 0x1.c88f42p-104f,
     0x1.2fbcccp-67f, 0x1.150546p-89f, 0.0f, 0x1.8061d6p-115f, 0x1.adcd4cp-13f, 0.0f,
     0.0f, 0x1.7c359ep-25f, 0.0f, 0.0f, 0.0f, 0x1.11abc2p-60f, 0x1.c3c18ap-23f, 0.0f,
     0.0f, 0.0f, 0x1.7da49ep-46f, 0.0f, 0x1.2edb24p-76f, 0x1.0c6928p-9f,
     0x1.6dbddcp-65f, 0.0f, 0x1.4cc26ep-125f, 0.0f, 0x1.37ebdap-3f, 0x1.07d63cp-116f,
     0.0f, 0.0f, 0x1.f3460ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53e12ap-52f,
     0x1.0f588ap-21f, 0.0f, 0.0f, 0x1.b788eep-80f, 0.0f, 0x1.b51e94p-38f, 0.0f,
     0x1.e950ap-6f, 0.0f, 0x1.502ecap-72f, 0x1.dc1edp-36f, 0x1.5ed0f8p-99f,
     0x1.d9d42cp-22f, 0x1.e46a8cp-81f, 0x1.deafacp-93f, 0x1.c160a2p-5f, 0.0f, 0.0f,
     0.0f, 0x1.55d92ep-27f, 0.0f, 0x1.f141a8p-31f, 0x1.5d53a2p-111f, 0.0f, 0.0f,
     0x1.56744cp-63f, 0x1.ba109p-55f, 0x1.18aadcp-39f, 0.0f, 0x1.767628p-12f,
     0x1.2571bp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91efa2p-35f, 0x1.b02d5p-126f, 0.0f,
     0x1.abd91cp-88f, 0.0f, 0.0f, 0x1.c1fdc8p-68f, 0x1.f5c8ccp-54f, 0x1.9f0e9ep-82f,
     0.0f, 0x1.a1a7bap-66f, 0x1.4f1b28p-8f, 0x1.f6e664p-61f, 0x1.25525ep-75f, 0.0f,
     0.0f, 0.0f, 0x1.ccca3ap-31f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f702ep-78f, 0.0f, 0.0f, 0x1.29dfacp-18f, 0.0f, 0.0f,
     0x1.619a14p-55f, 0x1.a06124p-17f, 0x1.0ede94p-86f, 0x1.ab9204p-45f,
     0x1.8fdfbcp-10f, 0x1.2827fp-11f, 0x1.93046ap-48f, 0x1.d1e66ep-50f,
     0x1.4fdfdep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7be4f8p-110f, 0.0f, 0x1.345fc8p-14f,
     0.0f, 0x1.13c436p-42f, 0.0f, 0x1.afbf7ep-8f, 0.0f, 0.0f, 0x1.35a1b8p-42f, 0.0f,
     0x1.b39a2ap-27f, 0x1.2a910cp-126f, 0x1.cb5928p-87f, 0x1.b7d9dcp-12f,
     0x1.9c691ap-55f, 0x1.742322p-73f, 0.0f, 0x1.6bd8dcp-98f, 0x1.37b24ep-23f, 0.0f,
     0x1.2006dep-49f, 0x1.f83da6p-85f, 0.0f, 0.0f, 0x1.24333p-56f, 0.0f,
     0x1.c2b54ep-77f, 0.0f, 0x1.7c59b8p-111f, 0x1.9340dcp-84f, 0.0f, 0x1.470012p-54f,
     0x1.941db2p-125f, 0.0f, 0x1.118dacp-118f, 0.0f, 0x1.423ae8p-15f, 0.0f, 0.0f,
     0x1.a2cfbep-28f, 0x1.27b892p-89f, 0.0f, 0x1.51fb82p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb9d2ap-16f, 0x1.8469a2p-111f, 0x1.61b34cp-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.612fdep-98f, 0x1.984c94p-57f, 0x1.62412ap-70f, 0x1.5d74d8p-73f,
     0x1.748a32p-65f, 0x1.7f8024p-82f, 0x1.6d9e1ep-10f, 0x1.7a4162p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70b63ep-114f, 0x1.655feep-45f, 0.0f, 0.0f, 0x1.9e094ep-72f,
     0x1.b8fb66p-54f, 0.0f, 0x1.b78bap-16f, 0x1.1ab1e2p-5f, 0.0f, 0x1.cc0134p-1f,
     0.0f, 0x1.0b6368p-73f, 0.0f, 0x1.537a2cp-71f, 0x1.c0d52cp-118f, 0.0f, 0.0f,
     0x1.00bf82p-26f, 0x1.e03ccep-43f, 0x1.de63c4p-91f, 0x1.e6f21ap-68f,
     0x1.22cf5ep-100f, 0.0f, 0x1.bf60a8p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.701edp-51f,
     0.0f, 0.0f, 0.0f, 0x1.4f3154p-32f, 0x1.2de3eep-49f, 0x1.894ec2p-89f,
     0x1.c89a6ep-64f, 0x1.c82212p-75f, 0.0f, 0x1.47f7ecp-98f, 0.0f, 0x1.d4341cp-98f,
     0x1.a575fp-37f, 0.0f, 0.0f, 0x1.52a618p-49f, 0.0f, 0.0f, 0.0f, 0x1.d7848cp-11f,
     0.0f, 0.0f, 0x1.17b7c6p-3f, 0.0f, 0.0f, 0.0f, 0x1.855986p-96f, 0x1.8a96ep-13f,
     0.0f, 0x1.35e556p-27f, 0x1.411326p-88f, 0.0f, 0x1.f93aap-65f, 0x1.0fe674p-80f,
     0.0f, 0.0f, 0x1.29d706p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10dc8ep-70f,
     0x1.cb031ap-47f, 0x1.558bccp-111f, 0.0f, 0x1.6ab824p-96f, 0x1.0f6be6p-18f, 0.0f,
     0.0f, 0.0f, 0x1.b8ea88p-117f, 0x1.15bcd6p-82f, 0.0f, 0x1.aebfap-122f, 0.0f,
     0x1.5bf25ep-67f, 0x1.f5a9dap-93f, 0x1.dd6304p-27f, 0.0f, 0x1.ff9f92p-67f, 0.0f,
     0.0f, 0.0f, 0x1.ee950ep-47f, 0x1.079d4ap-97f, 0.0f, 0x1.07b29p-30f, 0.0f,
     0x1.b3a85p-68f, 0x1.fd5f08p-30f, 0.0f, 0x1.cc5264p-85f, 0.0f, 0x1.816bf4p-84f,
     0x1.3380a4p-121f, 0x1.9d1b7ap-7f, 0.0f, 0x1.a1c4d4p-6f, 0.0f, 0.0f,
     0x1.de9ad4p-87f, 0x1.2403c8p-55f, 0.0f, 0x1.0848f4p-52f, 0x1.2a197p-110f,
     0x1.1665p-89f, 0.0f, 0.0f, 0x1.25eee4p-64f, 0x1.721d3p-94f, 0x1.24ddf4p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3b04cp-89f, 0x1.c56416p-67f, 0.0f,
     0x1.407c98p-14f, 0x1.136e1cp-105f, 0x1.619ccp-120f, 0x1.9e7638p-31f,
     0x1.4eebfp-72f, 0x1.a69d44p-73f, 0x1.e326f2p-126f, 0x1.539b3cp-73f,
     0x1.659d4cp-6f, 0.0f, 0.0f, 0.0f, 0x1.5f2eb8p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34d7fep-114f, 0x1.74b708p-47f, 0x1.e1f26p-120f, 0x1.8e62dcp-16f,
     0x1.5a9d34p-34f, 0.0f, 0.0f, 0.0f, 0x1.3d90b2p-33f, 0x1.ad0e18p-25f,
     0x1.df0d18p-124f, 0.0f, 0x1.0df07cp-95f, 0.0f, 0.0f, 0x1.0d01e4p-32f,
     0x1.58b318p-116f, 0x1.75bcb4p-121f, 0x1.4ed44ep-64f, 0.0f, 0x1.43f748p-90f,
     0x1.d5d908p-21f, 0x1.5d92b2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71a184p-46f,
     0x1.49d91ep-102f, 0x1.a1957p-113f, 0.0f, 0.0f, 0x1.494196p-21f, 0x1.697c9ep-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c0f4ep-54f, 0x1.4a4e1ap-54f,
     0x1.f3376ap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52affap-30f, 0.0f,
     0x1.ef59cp-32f, 0.0f, 0.0f, 0x1.bd767ap-13f, 0x1.76e232p-22f, 0x1.a22c88p-20f,
     0x1.56f7ecp-115f, 0x1.6b030ep-53f, 0.0f, 0.0f, 0.0f, 0x1.baf59ep-15f, 0.0f, 0.0f,
     0x1.d56b7ep-61f, 0x1.cf96bcp-84f, 0x1.044974p-65f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.8c7ac6p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef340ap-88f,
     0x1.0f231cp-107f, 0.0f, 0x1.c3bffcp-3f, 0x1.fe711ep-27f, 0x1.4f625ap-31f,
     0x1.7092d8p-87f, 0x1.63afa2p-82f, 0x1.9e58a6p-98f, 0.0f, 0x1.c3abccp-79f,
     0x1.ecb422p-106f, 0x1.b14d8ep-107f, 0x1.578202p-83f, 0x1.94cbb4p-122f,
     0x1.a0c9e4p-49f, 0x1.308b44p-70f, 0x1.d9f8eap-14f, 0.0f, 0x1.c1f972p-36f,
     0x1.a20aeep-117f, 0x1.5f7ac2p-64f, 0.0f, 0.0f, 0.0f, 0x1.371668p-56f,
     0x1.387feep-16f, 0.0f, 0x1.455e96p-57f, 0x1.5754c2p-50f, 0x1.3e38bp-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.513968p-98f, 0.0f, 0x1.d0d8fep-89f, 0x1.6214c2p-56f, 0.0f,
     0x1.4e29a4p-107f, 0.0f, 0x1.5da4ecp-102f, 0x1.17c8e6p-7f, 0.0f, 0.0f,
     0x1.b0db96p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af135ep-26f, 0x1.ba9514p-92f,
     0x1.4ef3ccp-1f, 0x1.25b702p-96f, 0.0f, 0x1.364f56p-116f, 0x1.d7a942p-51f, 0.0f,
     0.0f, 0x1.c34674p-77f, 0x1.0cb1e4p-48f, 0x1.39f55cp-30f, 0.0f, 0x1.51dfdap-74f,
     0.0f, 0.0f, 0x1.40f022p-110f, 0x1.4b2736p-61f, 0.0f, 0x1.1ceb3ap-11f, 0.0f,
     0x1.608386p-102f, 0x1.913d7p-14f, 0x1.79ffc2p-29f, 0x1.c89938p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d0a7d2p-35f, 0x1.a8edbap-24f, 0x1.873cd6p-65f, 0.0f, 0.0f,
     0x1.889b8ep-24f, 0.0f, 0x1.bb70d2p-73f, 0.0f, 0x1.c4dcd6p-96f, 0x1.b3cf6ep-37f,
     0.0f, 0.0f, 0x1.7ea1c8p-32f, 0x1.1bf44cp-103f, 0x1.31595ap-99f, 0x1.ebc80cp-1f,
     0x1.2a8536p-84f, 0.0f, 0x1.668b04p-47f, 0.0f, 0.0f, 0x1.bf05f8p-113f,
     0x1.6a838cp-117f, 0x1.c1194ep-2f, 0.0f, 0x1.e49a6cp-41f, 0.0f, 0.0f, 0.0f,
     0x1.dc7de6p-55f, 0.0f, 0x1.a2da74p-44f, 0.0f, 0.0f, 0.0f, 0x1.af4ac8p-71f,
     0x1.d98d66p-119f, 0.0f, 0.0f, 0x1.d31216p-74f, 0.0f, 0x1.3ccedp-46f, 0.0f,
     0x1.f43dc8p-74f, 0x1.41e92ap-112f, 0x1.9d1a94p-70f, 0.0f, 0x1.7ca61p-100f,
     0x1.0874f6p-102f, 0x1.36b28ep-66f, 0.0f, 0x1.e2045p-78f, 0x1.9dabeep-8f, 0.0f,
     0x1.17bf68p-57f, 0.0f, 0x1.b9d204p-98f, 0.0f, 0x1.a5eaa6p-44f, 0x1.7e75bep-48f,
     0.0f, 0x1.88186ep-125f, 0.0f, 0.0f, 0x1.15c01ep-71f, 0x1.31789p-94f,
     0x1.53fd72p-17f, 0x1.5f882p-60f, 0x1.72daaap-87f, 0x1.189ae2p-62f, 0.0f,
     0x1.567b1cp-118f, 0.0f, 0x1.7233dp-80f, 0.0f, 0x1.d7e7dap-79f, 0x1.2567e2p-31f,
     0.0f, 0x1.12ecc2p-61f, 0x1.075bacp-44f, 0.0f, 0.0f, 0.0f, 0x1.7272bap-116f, 0.0f,
     0x1.edf3cp-15f, 0x1.fe3d88p-54f, 0.0f, 0x1.2d9b74p-120f, 0x1.991394p-124f,
     0x1.92a5dap-67f, 0.0f, 0.0f, 0x1.643996p-69f, 0x1.2b679ep-103f, 0x1.ab9b44p-73f,
     0x1.860518p-119f, 0x1.972ecep-124f, 0x1.154076p-54f, 0x1.e350cep-29f, 0.0f,
     0x1.0a2d0cp-84f, 0x1.3231e6p-68f, 0x1.487f38p-62f, 0.0f, 0x1.973c48p-124f,
     0x1.ca60aep-94f, 0.0f, 0.0f, 0x1.55f2e4p-78f, 0x1.d7f8aep-94f, 0.0f, 0.0f,
     0x1.69f7a8p-108f, 0.0f, 0.0f, 0x1.f8396p-116f, 0.0f, 0.0f, 0x1.0bff28p-99f, 0.0f,
     0x1.4176bep-58f, 0.0f, 0x1.e24f96p-48f, 0x1.3b8edap-68f, 0x1.b05c6p-70f,
     0x1.8cbc84p-19f, 0x1.02cc6ep-102f, 0.0f, 0x1.96931ep-35f, 0.0f, 0x1.93136p-119f,
     0x1.f32724p-13f, 0x1.cdad24p-103f, 0.0f, 0x1.365bf8p-61f, 0x1.d9c13ep-13f,
     0x1.54c39p-51f, 0x1.090efcp-80f, 0.0f, 0.0f, 0x1.319018p-119f, 0.0f,
     0x1.241caep-39f, 0x1.9be3bcp-68f, 0.0f, 0.0f, 0x1.c501eap-2f, 0x1.5a21c6p-116f,
     0x1.e2a6aep-57f, 0x1.f0f15ap-49f, 0.0f, 0x1.8ac462p-11f, 0x1.52dd58p-34f, 0.0f,
     0.0f, 0.0f, 0x1.ab9044p-38f, 0x1.c1e15ep-108f, 0x1.fb8774p-126f, 0.0f, 0.0f,
     0.0f, 0x1.0b5b1p-24f, 0.0f, 0x1.6b1bb8p-21f, 0.0f, 0x1.91b1e8p-18f,
     0x1.d295bap-26f, 0x1.afb7a2p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4429a2p-38f, 0.0f, 0x1.65e2fap-15f, 0x1.6098a8p-53f, 0x1.1495ecp-104f,
     0x1.26dcd2p-73f, 0x1.3dd45ep-101f, 0x1.6da194p-11f, 0x1.f880e4p-108f,
     0x1.b2466cp-33f, 0x1.929ca6p-2f, 0x1.2730cep-70f, 0.0f, 0x1.e030e8p-84f,
     0x1.f1075p-124f, 0.0f, 0x1.d0e992p-81f, 0.0f, 0x1.fa7c68p-96f, 0x1.e2e054p-59f,
     0x1.e447a6p-103f, 0.0f, 0x1.a55d3ap-4f, 0.0f, 0.0f, 0x1.069d3cp-74f,
     0x1.160f1ap-25f, 0x1.e25b12p-117f, 0.0f, 0x1.851c46p-115f, 0.0f, 0x1.d6591ep-23f,
     0.0f, 0x1.9bea6ep-113f, 0.0f, 0x1.55fe74p-120f, 0x1.25acaep-58f, 0.0f, 0.0f,
     0.0f, 0x1.d90d56p-116f, 0.0f, 0.0f, 0.0f, 0x1.d15f9cp-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4f726ap-71f, 0.0f, 0.0f, 0x1.d5e312p-16f, 0x1.e9866cp-29f,
     0x1.898bf6p-43f, 0x1.5773c2p-57f, 0x1.86b77p-111f, 0x1.b69d76p-76f,
     0x1.a07288p-4f, 0x1.ab7e38p-118f, 0.0f, 0.0f, 0x1.d4f504p-120f, 0x1.f6e9fcp-111f,
     0.0f, 0x1.194714p-57f, 0.0f, 0.0f, 0x1.a553c6p-58f, 0x1.80a2ap-111f,
     0x1.a6663p-104f, 0x1.9d7a3ap-79f, 0x1.2997d8p-121f, 0.0f, 0.0f, 0x1.9f2f58p-59f,
     0x1.1775aep-26f, 0.0f, 0.0f, 0x1.56d3bp-64f, 0.0f, 0x1.4cd944p-4f,
     0x1.903b5p-72f, 0.0f, 0.0f, 0x1.7aebbcp-25f, 0.0f, 0.0f, 0x1.795e5p-47f, 0.0f,
     0x1.4073c2p-7f, 0x1.3bdba6p-23f, 0.0f, 0.0f, 0.0f, 0x1.f4042cp-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e634e4p-80f, 0x1.5fe8p-57f, 0.0f, 0x1.3bb996p-82f,
     0x1.c7bb2cp-91f, 0x1.7eb8c4p-100f, 0.0f, 0x1.1564b6p-24f, 0.0f, 0x1.9a5db8p-31f,
     0x1.223e7ep-2f, 0x1.36b5dcp-110f, 0.0f, 0.0f, 0.0f, 0x1.fe1f52p-113f,
     0x1.5dc964p-18f, 0x1.cfabp-97f, 0x1.9b9c94p-114f, 0x1.a2779p-53f,
     0x1.1924b2p-85f, 0.0f, 0x1.8b322cp-78f, 0.0f, 0x1.2163c2p-113f, 0x1.752d02p-67f,
     0x1.d4484p-88f, 0x1.c7a8cap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38fd0cp-14f, 0.0f,
     0.0f, 0x1.6877fap-1f, 0x1.4ff298p-15f, 0x1.160ee4p-72f, 0x1.39efd6p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e105p-105f, 0.0f, 0.0f, 0x1.2e1876p-63f, 0.0f, 0.0f,
     0.0f, 0x1.1c24eap-15f, 0.0f, 0.0f, 0x1.121ac6p-76f, 0.0f, 0x1.71a546p-22f, 0.0f,
     0x1.71d84ep-61f, 0x1.6f0d7ap-93f, 0x1.0e03acp-25f, 0.0f, 0x1.135d1ap-65f, 0.0f,
     0x1.8519cep-89f, 0.0f, 0.0f, 0.0f, 0x1.652c18p-73f, 0x1.c25062p-22f, 0.0f,
     0x1.f1478ep-36f, 0.0f, 0.0f, 0.0f, 0x1.b025cp-87f, 0x1.31c87cp-38f,
     0x1.33c5c4p-67f, 0.0f, 0x1.22ff28p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9a81p-116f,
     0.0f, 0.0f, 0x1.be135ap-57f, 0.0f, 0.0f, 0x1.76f53cp-12f, 0x1.ba4ebcp-12f, 0.0f,
     0.0f, 0.0f, 0x1.49e168p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.344176p-10f,
     0x1.f3664ap-85f, 0.0f, 0x1.cab962p-58f, 0x1.436f96p-49f, 0.0f, 0x1.488ad2p-12f,
     0x1.08f298p-63f, 0x1.69cf54p-39f, 0x1.ef2f7p-93f, 0.0f, 0.0f, 0x1.99a69ap-114f,
     0.0f, 0x1.c055cep-81f, 0.0f, 0x1.90d456p-23f, 0x1.836fa8p-94f, 0x1.e43766p-27f,
     0.0f, 0x1.e6a63ap-79f, 0x1.7740d6p-106f, 0x1.234e5p-112f, 0x1.8bedd6p-84f,
     0x1.f3a994p-25f, 0.0f, 0x1.d8fe6p-102f, 0.0f, 0x1.49ea0ap-3f, 0.0f,
     0x1.1034a6p-63f, 0.0f, 0.0f, 0x1.8c37a8p-73f, 0x1.33f714p-28f, 0x1.f489aep-25f,
     0x1.9eeba2p-6f, 0x1.bb4d48p-55f, 0x1.a4d7aap-79f, 0x1.a36a02p-68f, 0.0f,
     0x1.1cad14p-53f, 0.0f, 0x1.fca6e6p-107f, 0x1.267a1p-69f, 0.0f, 0.0f,
     0x1.bfed7ap-77f, 0.0f, 0.0f, 0x1.60f024p-72f, 0.0f, 0x1.36d716p-26f,
     0x1.401062p-13f, 0.0f, 0x1.243eb8p-65f, 0.0f, 0.0f, 0.0f, 0x1.bc8be2p-86f,
     0x1.8a0f38p-8f, 0x1.01ed6ep-50f, 0.0f, 0x1.41538p-110f, 0x1.cacee6p-9f, 0.0f,
     0.0f, 0.0f, 0x1.65dbap-19f, 0x1.75833ap-103f, 0x1.4808a4p-60f, 0.0f,
     0x1.9773bap-57f, 0x1.f25c38p-69f, 0.0f, 0.0f, 0.0f, 0x1.50af2ep-90f,
     0x1.844434p-126f, 0.0f, 0x1.69425cp-118f, 0x1.bf1efap-71f, 0.0f, 0x1.3af61ap-63f,
     0x1.63bfacp-81f, 0.0f, 0.0f, 0x1.6b733ap-51f, 0x1.c46d5ap-88f, 0.0f, 0.0f,
     0x1.6cab56p-102f, 0.0f, 0x1.028a6ep-75f, 0x1.0ba4acp-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a6f3ep-52f, 0x1.0eb4c8p-90f, 0x1.0a445ap-76f,
     0x1.dd3752p-3f, 0x1.e16aa6p-118f, 0.0f, 0x1.85fe7cp-22f, 0.0f, 0.0f,
     0x1.7675f4p-119f, 0.0f, 0x1.dc5144p-109f, 0x1.29e16ap-113f, 0x1.01512ap-122f,
     0.0f, 0.0f, 0.0f, 0x1.3940b4p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3a85ep-115f,
     0x1.0a2478p-48f, 0.0f, 0.0f, 0x1.483394p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e2f64p-66f, 0x1.dce134p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee8cdap-117f,
     0x1.ab5e9ep-32f, 0x1.677cdap-77f, 0x1.4e8adcp-108f, 0x1.82c90cp-108f,
     0x1.5b00fcp-97f, 0.0f, 0x1.901e5ep-46f, 0x1.82a14p-102f, 0x1.466cfcp-4f,
     0x1.04556ap-27f, 0x1.dd3cb6p-28f, 0x1.a81a7p-5f, 0.0f, 0x1.0b8aeep-44f, 0.0f,
     0x1.4ea85ep-26f, 0x1.e5f96ap-76f, 0x1.a54896p-119f, 0.0f, 0.0f, 0.0f,
     0x1.1a868ep-38f, 0x1.c55c1p-113f, 0x1.669756p-84f, 0.0f, 0x1.2b4c32p-88f,
     0x1.559b2ap-26f, 0x1.b132d2p-70f, 0.0f, 0x1.215706p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fdfa6p-69f, 0x1.97a4ep-45f, 0x1.dad6d8p-24f, 0.0f, 0x1.f930b8p-57f, 0.0f,
     0x1.929d26p-28f, 0x1.f3fc06p-76f, 0x1.8b9d04p-26f, 0x1.e1f3ap-112f, 0.0f,
     0x1.fe5ab6p-59f, 0.0f, 0.0f, 0.0f, 0x1.7d345p-125f, 0x1.623cbp-114f, 0.0f, 0.0f,
     0x1.baf3a2p-19f, 0x1.6133cap-120f, 0x1.92dfaep-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.340fb4p-105f, 0x1.e42318p-3f, 0.0f, 0.0f, 0.0f, 0x1.4471aep-118f,
     0x1.c9e60ep-96f, 0.0f, 0x1.f77888p-126f, 0x1.ff21ap-69f, 0x1.09f8ep-32f,
     0x1.e93ebep-39f, 0.0f, 0.0f, 0x1.9d5ff8p-41f, 0.0f, 0.0f, 0.0f, 0x1.872c4ap-45f,
     0x1.2dd73cp-39f, 0x1.92609ap-122f, 0.0f, 0.0f, 0x1.e3e98p-68f, 0.0f, 0.0f,
     0x1.77f852p-120f, 0.0f, 0.0f, 0.0f, 0x1.7b0786p-72f, 0x1.e5326ap-117f,
     0x1.563d6ap-73f, 0x1.8b9734p-90f, 0x1.271ffep-79f, 0.0f, 0.0f, 0x1.2effa4p-56f,
     0x1.c5db04p-114f, 0.0f, 0x1.98bedcp-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a27388p-105f, 0x1.a31c28p-21f, 0x1.5721b4p-36f, 0x1.9868d4p-104f,
     0x1.e81056p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cafb68p-44f, 0.0f, 0.0f,
     0x1.7af3e4p-111f, 0x1.6a767cp-38f, 0x1.489bc6p-122f, 0x1.aac9d4p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.da689ap-113f, 0.0f, 0.0f, 0x1.059a76p-73f, 0.0f,
     0x1.c8ec02p-30f, 0.0f, 0x1.28788cp-119f, 0.0f, 0.0f, 0x1.05d23ep-43f, 0.0f, 0.0f,
     0.0f, 0x1.4fa3d6p-111f, 0.0f, 0x1.250b7ap-123f, 0.0f, 0x1.9900c2p-115f,
     0x1.6c614ep-5f, 0.0f, 0x1.0b6eaep-65f, 0x1.8eb7d2p-103f, 0.0f, 0x1.29df08p-109f,
     0x1.2db0fep-2f, 0x1.5f712p-104f, 0x1.c2d84p-33f, 0.0f, 0x1.0f6bb8p-28f, 0.0f,
     0.0f, 0x1.a2d4cp-62f, 0x1.81fbe4p-46f, 0x1.b9e3b6p-51f, 0x1.480d26p-23f,
     0x1.b81576p-14f, 0.0f, 0x1.478492p-82f, 0x1.b6a5cep-74f, 0x1.2cc6f2p-113f,
     0x1.31177cp-122f, 0x1.38d662p-113f, 0x1.63b83ap-8f, 0.0f, 0.0f, 0x1.74b566p-67f,
     0x1.b38736p-83f, 0.0f, 0.0f, 0.0f, 0x1.3b35b2p-52f, 0x1.589254p-97f, 0.0f, 0.0f,
     0x1.6e95c4p-83f, 0x1.5eabbp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.862c4p-118f, 0.0f,
     0.0f, 0x1.6bbfbp-87f, 0x1.c9f0ap-106f, 0x1.8fd74ap-108f, 0.0f, 0x1.7ac6e6p-111f,
     0x1.26181p-75f, 0x1.93154ep-85f, 0.0f, 0x1.167224p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c0c956p-12f, 0x1.c3a492p-75f, 0.0f, 0x1.1bc8d4p-80f,
     0x1.12e48cp-62f, 0x1.fece8ap-40f, 0.0f, 0x1.2e4404p-12f, 0x1.e7983ep-14f, 0.0f,
     0.0f, 0.0f, 0x1.8ddfeap-16f, 0x1.002ccep-98f, 0x1.7acc2ep-103f, 0x1.4837bap-19f,
     0.0f, 0.0f, 0.0f, 0x1.f1b3ap-5f, 0.0f, 0.0f, 0x1.62f2a8p-69f, 0x1.aeb3f2p-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0eaeb8p-123f, 0.0f,
     0x1.b47b6ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e88a14p-75f,
     0x1.ab70b8p-69f, 0.0f, 0x1.cee2acp-18f, 0.0f, 0.0f, 0x1.b8211ap-12f, 0.0f, 0.0f,
     0x1.a963bp-122f, 0.0f, 0x1.a813d8p-124f, 0.0f, 0.0f, 0x1.3db594p-72f,
     0x1.e7970cp-54f, 0x1.eebfa2p-45f, 0x1.d39e3cp-13f, 0x1.3e1a08p-11f,
     0x1.9073e2p-119f, 0x1.becfa2p-35f, 0x1.6586bap-33f, 0x1.c1faf6p-72f,
     0x1.53bcccp-113f, 0.0f, 0x1.5c8ad8p-25f, 0.0f, 0.0f, 0.0f, 0x1.bdaea2p-2f, 0.0f,
     0.0f, 0x1.a6b8dcp-61f, 0.0f, 0.0f, 0x1.b9875ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b44dbp-71f, 0x1.6d4002p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7037p-6f,
     0.0f, 0.0f, 0x1.51bcfap-113f, 0x1.ea9bcap-47f, 0x1.51170ep-102f, 0.0f,
     0x1.cca924p-70f, 0x1.e7e2bep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b899bp-120f, 0.0f,
     0.0f, 0.0f, 0x1.1b91ecp-52f, 0x1.3f8bcp-103f, 0x1.854aaep-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ea2af8p-74f, 0x1.125c2p-9f, 0x1.d64a86p-29f, 0.0f,
     0x1.cc260cp-70f, 0x1.ff7e66p-110f, 0.0f, 0x1.3e6d66p-84f, 0.0f, 0x1.afa214p-115f,
     0.0f, 0x1.080edep-8f, 0.0f, 0x1.3bd836p-91f, 0.0f, 0x1.fd1886p-107f,
     0x1.99c724p-27f, 0.0f, 0x1.42c3e8p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c3c46p-55f, 0x1.39eeb6p-25f, 0x1.47376cp-105f, 0.0f, 0.0f, 0x1.effa38p-60f,
     0x1.226576p-85f, 0.0f, 0x1.244258p-95f, 0.0f, 0x1.2de164p-45f, 0.0f, 0.0f, 0.0f,
     0x1.6ff024p-84f, 0x1.571186p-89f, 0x1.ad26a8p-120f, 0x1.ae3e64p-20f, 0.0f,
     0x1.891976p-114f, 0.0f, 0.0f, 0x1.3fedacp-15f, 0x1.2ac912p-84f, 0x1.129642p-126f,
     0x1.a217c6p-19f, 0x1.d0be44p-11f, 0.0f, 0.0f, 0x1.152308p-28f, 0.0f,
     0x1.70e798p-104f, 0.0f, 0.0f, 0.0f, 0x1.101d1ep-66f, 0.0f, 0x1.fa5c68p-11f, 0.0f,
     0x1.69d758p-110f, 0x1.5c2bf2p-32f, 0.0f, 0x1.24d338p-109f, 0.0f, 0x1.74ea6ep-94f,
     0x1.c26838p-108f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_copysignf4_kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_copysignf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_copysignf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
