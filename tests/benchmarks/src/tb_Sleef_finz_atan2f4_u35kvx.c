/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f4_u35kvx.c --function \
 *     Sleef_finz_atan2f4_u35kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.af2388p-120f, 0x1.1308a2p-63f, 0x1.8d3ff4p-101f, 0x1.101748p-71f, 0.0f,
     0.0f, 0x1.3e274ap-88f, 0x1.3ff1c4p-79f, 0x1.d08bb8p-96f, 0.0f, 0x1.73fda8p-58f,
     0.0f, 0.0f, 0.0f, 0x1.202546p-110f, 0.0f, 0.0f, 0.0f, 0x1.029c12p-49f,
     0x1.38fc7cp-22f, 0x1.b22bap-22f, 0x1.d6d6aap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b011dp-124f, 0.0f, 0.0f, 0x1.c1551cp-37f, 0x1.a0c402p-10f,
     0x1.0aee1ep-29f, 0x1.17a256p-90f, 0x1.a172e8p-41f, 0.0f, 0.0f, 0x1.126396p-11f,
     0x1.35f284p-67f, 0x1.75fffep-28f, 0x1.d4438p-74f, 0x1.64f7bp-73f,
     0x1.35a63cp-84f, 0.0f, 0x1.062476p-30f, 0.0f, 0.0f, 0x1.4aaaacp-86f,
     0x1.92bb42p-3f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.9f3534p-41f, 0x1.304ddep-37f, 0.0f,
     0x1.399112p-24f, 0x1.57831ap-103f, 0x1.8ec40ep-2f, 0x1.ce0bd2p-54f, 0.0f,
     0x1.b74f98p-54f, 0.0f, 0.0f, 0.0f, 0x1.e78676p-3f, 0x1.1f07p-21f,
     0x1.5d2834p-28f, 0x1.37257ap-98f, 0.0f, 0x1.a83a56p-38f, 0x1.dc9a3ap-21f, 0.0f,
     0x1.2a4b8ap-89f, 0.0f, 0.0f, 0.0f, 0x1.ff3c7ep-13f, 0.0f, 0x1.281a62p-40f, 0.0f,
     0.0f, 0x1.8cbe9ep-20f, 0x1.3a164cp-18f, 0.0f, 0.0f, 0x1.a3d89p-98f, 0.0f,
     0x1.a943fep-89f, 0x1.e2e422p-122f, 0.0f, 0x1.08af9p-62f, 0.0f, 0x1.537b9cp-26f,
     0x1.d2b95ep-5f, 0x1.c699aap-118f, 0x1.6b4a06p-102f, 0x1.87f38ap-119f, 0.0f,
     0x1.f6df66p-39f, 0.0f, 0x1.cadb4ap-15f, 0.0f, 0x1.ea517cp-47f, 0x1.7b0b24p-34f,
     0x1.b27ff4p-113f, 0x1.96a242p-63f, 0x1.a6d368p-7f, 0x1.5720aep-17f, 0.0f, 0.0f,
     0x1.284398p-69f, 0.0f, 0.0f, 0x1.0e768cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.360f58p-85f, 0x1.c70d9ep-73f, 0x1.c2a69cp-48f, 0x1.df6c5ap-76f, 0.0f, 0.0f,
     0x1.a717cep-34f, 0x1.e60dccp-36f, 0x1.9ff57ep-15f, 0.0f, 0.0f, 0.0f,
     0x1.1fcbf4p-54f, 0x1.355496p-54f, 0x1.7804b4p-62f, 0.0f, 0.0f, 0.0f,
     0x1.8a7052p-28f, 0.0f, 0x1.838518p-91f, 0.0f, 0x1.9be06p-11f, 0x1.acaa0ep-56f,
     0x1p0f, 0x1.981ddep-24f, 0.0f, 0.0f, 0x1.ea01f6p-93f, 0x1.58dab8p-110f, 0.0f,
     0.0f, 0x1.85e532p-11f, 0.0f, 0x1.05c24ep-11f, 0.0f, 0x1.eb867ep-72f,
     0x1.b63954p-21f, 0.0f, 0.0f, 0x1.11f8e2p-54f, 0.0f, 0x1.d67872p-44f, 0.0f, 0.0f,
     0x1.3e70fap-10f, 0x1.89e528p-118f, 0x1.e8f4b8p-80f, 0.0f, 0x1.55ebe4p-72f,
     0x1.735114p-4f, 0.0f, 0.0f, 0x1.ee390cp-110f, 0x1.337a34p-105f, 0x1.594b86p-20f,
     0.0f, 0x1.5cb598p-106f, 0.0f, 0.0f, 0.0f, 0x1.85ec24p-43f, 0.0f, 0x1.332202p-52f,
     0.0f, 0x1.f95806p-16f, 0.0f, 0.0f, 0x1.029396p-21f, 0.0f, 0x1.3961d8p-33f,
     0x1.10ce5ap-63f, 0x1.108e68p-75f, 0x1.1bcef6p-104f, 0x1.12f4ecp-99f, 0.0f, 0.0f,
     0x1.7ebc52p-119f, 0.0f, 0x1.766abap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d795bap-81f,
     0.0f, 0x1.3e00eap-91f, 0x1.3e31eep-70f, 0.0f, 0x1.ebe34ap-78f, 0x1.802dep-81f,
     0x1.747a3ep-70f, 0x1.1792a4p-23f, 0x1.f54adp-60f, 0x1.2e3546p-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.33952ep-98f, 0x1.e85fd2p-47f, 0.0f, 0x1.8cb0eep-67f,
     0.0f, 0.0f, 0x1.e2199ep-8f, 0.0f, 0x1.73791p-60f, 0.0f, 0.0f, 0x1.34685p-93f,
     0x1.f6be38p-90f, 0.0f, 0x1.88cc7cp-69f, 0.0f, 0.0f, 0.0f, 0x1.0d415cp-117f,
     0x1.3d54f8p-49f, 0.0f, 0.0f, 0.0f, 0x1.29da56p-108f, 0x1.24dbecp-59f,
     0x1.c3d25ap-124f, 0.0f, 0x1.0c9cd4p-81f, 0x1.708cbep-105f, 0.0f, 0x1.6e2bf4p-50f,
     0x1.da90c8p-21f, 0.0f, 0x1.53e794p-26f, 0.0f, 0.0f, 0x1.f601b2p-49f, 0.0f,
     0x1.8a288ap-25f, 0x1.ab8802p-66f, 0.0f, 0.0f, 0x1.8eece2p-3f, 0x1.ffb68ep-106f,
     0x1.adcec6p-3f, 0x1.075fe2p-102f, 0.0f, 0.0f, 0x1.1e85dp-106f, 0x1.3c2adap-27f,
     0.0f, 0x1.c77af8p-29f, 0x1.08d3a8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce2a36p-69f,
     0.0f, 0.0f, 0.0f, 0x1.bf5b26p-111f, 0x1.f4480cp-35f, 0x1.13422p-47f, 0.0f,
     0x1.3103bap-89f, 0.0f, 0x1.136f7ap-57f, 0.0f, 0.0f, 0.0f, 0x1.b5504ap-29f,
     0x1.4f91f6p-7f, 0x1.f87f18p-83f, 0x1.c27638p-53f, 0x1.86c2dap-93f, 0.0f,
     0x1.b7abcap-7f, 0x1.e5c4p-56f, 0.0f, 0.0f, 0x1.a1dbd6p-119f, 0.0f, 0.0f,
     0x1.78323ep-59f, 0x1.efd3cap-42f, 0.0f, 0.0f, 0.0f, 0x1.6dd02ap-99f,
     0x1.f84de2p-71f, 0x1.4af5a4p-35f, 0.0f, 0.0f, 0.0f, 0x1.3d024ap-89f,
     0x1.b4bc92p-55f, 0.0f, 0.0f, 0x1.ad6ecap-106f, 0x1.97312ep-103f, 0.0f, 0.0f,
     0.0f, 0x1.bcb63cp-68f, 0x1.e990dcp-72f, 0x1.1e798ep-16f, 0x1.9c4a1p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1b6ecp-123f, 0x1.4bdf44p-85f, 0.0f, 0.0f,
     0x1.14a36ap-23f, 0.0f, 0.0f, 0.0f, 0x1.a4fec2p-60f, 0.0f, 0x1.e2947ep-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.95dd4cp-121f, 0x1.9b38aap-28f, 0.0f, 0x1.b7c8cap-44f,
     0x1.dc524ap-43f, 0.0f, 0.0f, 0x1.5f7d52p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65c45cp-17f, 0.0f, 0.0f, 0.0f, 0x1.346b76p-46f, 0x1.e02802p-74f,
     0x1.ac2618p-98f, 0x1.991422p-65f, 0x1.8c611ep-42f, 0x1.0cc5ccp-14f,
     0x1.28dep-80f, 0.0f, 0.0f, 0x1.475572p-28f, 0x1.f0d1aep-45f, 0.0f,
     0x1.bcb992p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.086472p-96f, 0x1.c938bp-8f,
     0.0f, 0.0f, 0x1.4f3164p-104f, 0x1.7bd7dep-97f, 0.0f, 0x1.f2ee16p-44f,
     0x1.0b5d26p-78f, 0x1.5f049ap-3f, 0x1.2d675p-87f, 0x1.12fb4ep-27f,
     0x1.399b9cp-53f, 0x1.c31a4ep-4f, 0x1.bdafc8p-56f, 0x1.bf9d5ep-71f, 0.0f,
     0x1.2608b6p-123f, 0.0f, 0x1.3d5252p-123f, 0x1.ff9f8p-36f, 0x1.c3fb9p-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.191d3cp-125f, 0x1.5e2ef6p-93f, 0x1.5dbad2p-58f, 0.0f,
     0x1.d62788p-118f, 0x1.8c75d2p-81f, 0.0f, 0x1.64f086p-121f, 0x1.da1fe6p-44f, 0.0f,
     0x1.753b1cp-9f, 0.0f, 0.0f, 0.0f, 0x1.22d06ap-3f, 0x1.3c7baap-45f,
     0x1.8bf942p-21f, 0x1.06c40cp-34f, 0.0f, 0x1.26d6fcp-42f, 0x1.54d5aap-42f, 0.0f,
     0.0f, 0.0f, 0x1.2f70a2p-105f, 0x1.ba6a02p-69f, 0x1.a81b16p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94bd5p-48f, 0.0f, 0x1.9cb4f6p-45f, 0.0f, 0x1.1a8d54p-65f,
     0x1.93db98p-45f, 0x1.60ac6p-92f, 0.0f, 0x1.2401b2p-52f, 0.0f, 0.0f, 0.0f,
     0x1.7a895ep-42f, 0x1.648e7ap-38f, 0x1.1bbea4p-94f, 0x1.fd83bp-8f,
     0x1.94b53ep-114f, 0.0f, 0x1.401932p-86f, 0.0f, 0x1.b89016p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3d51c4p-52f, 0x1.95c8bap-53f, 0x1.be19f8p-42f,
     0x1.374168p-119f, 0.0f, 0x1.f5f4a8p-2f, 0x1.cd45fp-69f, 0.0f, 0.0f,
     0x1.ecb272p-7f, 0x1.9ff782p-46f, 0x1.f38b56p-77f, 0x1.5d7154p-98f, 0.0f, 0.0f,
     0.0f, 0x1.3b32bp-63f, 0.0f, 0.0f, 0x1.c5e644p-20f, 0x1.772faep-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.64729ep-94f, 0x1.e3ffdcp-113f, 0x1.b33782p-6f,
     0x1.5f158cp-96f, 0x1.ca6198p-92f, 0x1.716114p-30f, 0x1.88c81ap-37f,
     0x1.f692dp-37f, 0.0f, 0.0f, 0x1.71f22p-126f, 0.0f, 0.0f, 0x1.76f27ep-59f,
     0x1.cf03f2p-122f, 0.0f, 0x1.2c8e2p-2f, 0.0f, 0x1.d92ca6p-49f, 0x1.26cc66p-7f,
     0.0f, 0x1.dec73ep-125f, 0x1.61abfap-93f, 0x1.336f52p-115f, 0.0f, 0.0f, 0.0f,
     0x1.8521fp-57f, 0x1.01b88cp-44f, 0.0f, 0.0f, 0x1.651466p-91f, 0.0f,
     0x1.18b1eap-22f, 0.0f, 0x1.72e206p-108f, 0.0f, 0.0f, 0x1.a22024p-8f, 0.0f, 0.0f,
     0x1.8aeb34p-65f, 0x1.ca8674p-61f, 0x1.30f376p-10f, 0.0f, 0x1.b0f512p-4f,
     0x1.9bd554p-69f, 0.0f, 0x1.7621cp-7f, 0.0f, 0x1.0488dcp-21f, 0x1.638bfep-16f,
     0x1.5f4ef6p-32f, 0x1.c057aap-104f, 0.0f, 0x1.fc9b7p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e9cf4p-88f, 0x1.faf9b6p-111f, 0x1.435426p-71f,
     0x1.65ddf2p-74f, 0x1.aeb1b8p-105f, 0x1.4a8242p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.732f2cp-19f, 0x1.33551p-75f, 0x1.f38602p-94f, 0.0f, 0x1.310e38p-16f,
     0x1.2845dep-111f, 0x1.f9cd7ep-3f, 0x1.33e8ep-3f, 0.0f, 0x1.6e172ep-15f,
     0x1.d0ffeap-37f, 0x1.5e67a4p-98f, 0x1.1b2a14p-37f, 0.0f, 0x1.502af6p-73f,
     0x1.d5a198p-118f, 0x1.8f4d3cp-118f, 0x1.d3577cp-27f, 0.0f, 0x1.33b94ep-73f,
     0x1.b9c0a8p-52f, 0x1.b686d8p-37f, 0.0f, 0.0f, 0x1.c7c83ap-85f, 0x1.4d2ecap-88f,
     0x1.1f9302p-65f, 0.0f, 0.0f, 0x1.8a602ap-98f, 0x1.5b990ap-29f, 0x1.99195ep-75f,
     0.0f, 0.0f, 0.0f, 0x1.854f14p-110f, 0x1.53834cp-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b992ap-61f, 0.0f, 0x1.88276ap-62f, 0x1.30a3aap-98f, 0x1.fd7ccep-106f,
     0.0f, 0.0f, 0x1.46b96ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.424ddcp-15f,
     0.0f, 0.0f, 0x1.8c8d3p-109f, 0.0f, 0x1.102b46p-115f, 0x1.bdd5c6p-22f,
     0x1.cc3d7cp-77f, 0.0f, 0x1.f98574p-104f, 0.0f, 0x1.f787bep-37f, 0x1.7e8bep-37f,
     0.0f, 0x1.26562ep-41f, 0x1.f4bdd4p-68f, 0.0f, 0x1.6cbf9ep-47f, 0x1.1ccae2p-32f,
     0.0f, 0.0f, 0x1.186eccp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c5e14p-48f,
     0x1.7edd1cp-66f, 0x1.243f92p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0c804p-102f,
     0x1.2bc212p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1f086p-57f, 0x1.b6aa3ap-106f,
     0.0f, 0x1.7c3fc8p-81f, 0x1.4ed514p-65f, 0x1.d168d2p-36f, 0x1.c12b3ep-74f, 0.0f,
     0x1.a29d12p-79f, 0x1.508094p-15f, 0.0f, 0.0f, 0.0f, 0x1.38e67ap-8f,
     0x1.82355p-126f, 0x1.175ee8p-73f, 0.0f, 0x1.131854p-61f, 0x1.fa29a6p-75f,
     0x1.b6ab0cp-51f, 0x1.ec8e9ap-48f, 0x1.2fe10ep-90f, 0.0f, 0.0f, 0x1.07456ep-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f67ffp-1f, 0x1.9da606p-47f, 0.0f, 0x1.676d7p-71f,
     0x1.f0acfcp-87f, 0.0f, 0x1.712204p-100f, 0x1.05a5b2p-28f, 0.0f, 0.0f,
     0x1.263e46p-49f, 0x1.971474p-72f, 0x1.29779ep-21f, 0x1.4f33dp-43f,
     0x1.5eb068p-118f, 0x1.8984e2p-27f, 0x1.49cf2ep-60f, 0x1.62706cp-11f, 0.0f,
     0x1.a1eb4ep-50f, 0.0f, 0.0f, 0.0f, 0x1.68a0e8p-126f, 0.0f, 0x1.98ae6ap-46f, 0.0f,
     0x1.62cf48p-55f, 0x1.c89d3cp-74f, 0.0f, 0.0f, 0.0f, 0x1.6408d8p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cb1d6p-24f, 0.0f, 0.0f,
     0x1.33a982p-45f, 0.0f, 0x1.eb7178p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c56f4p-88f,
     0.0f, 0x1.487e18p-48f, 0.0f, 0.0f, 0x1.708996p-2f, 0x1.6d77dep-88f,
     0x1.fb1e5ep-36f, 0x1.4181fp-86f, 0x1.c08e0ap-115f, 0x1.f401bcp-97f, 0.0f,
     0x1.07ddd6p-40f, 0x1.16abeep-121f, 0.0f, 0x1.825da2p-84f, 0.0f, 0.0f,
     0x1.d03598p-121f, 0x1.2f0a76p-88f, 0x1.e7a64cp-9f, 0.0f, 0x1.39387ap-37f,
     0x1.a2711ap-109f, 0.0f, 0x1.b1a258p-46f, 0x1.74844p-43f, 0x1.215694p-1f, 0.0f,
     0x1.59041ep-100f, 0x1.caad68p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.077504p-72f, 0.0f, 0x1.f22616p-104f, 0.0f, 0x1.6ddcd4p-104f, 0.0f, 0.0f,
     0.0f, 0x1.375c2p-17f, 0x1.925872p-48f, 0x1.904bdcp-68f, 0x1.e221eep-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cc8d04p-71f, 0x1.07fb66p-104f, 0.0f, 0x1.df075cp-96f,
     0x1.a3d16ep-20f, 0x1.cb7b44p-68f, 0x1.a41f2ap-88f, 0x1.cbb15p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.500b72p-32f, 0x1.6f0898p-105f, 0.0f, 0.0f, 0.0f, 0x1.907c8ap-43f,
     0.0f, 0.0f, 0x1.5cc79ap-24f, 0x1.15258p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d82cb8p-111f, 0x1.1d535cp-50f, 0x1.59d21ep-98f, 0x1.56f0ccp-93f, 0.0f, 0.0f,
     0x1.9d6314p-34f, 0.0f, 0.0f, 0x1.0b5feep-3f, 0x1.e0a264p-125f, 0.0f, 0.0f, 0.0f,
     0x1.70fb24p-104f, 0.0f, 0.0f, 0x1.f2e5aap-7f, 0.0f, 0.0f, 0x1.c2c6cp-94f, 0.0f,
     0x1.b125cp-24f, 0x1.9e8c38p-116f, 0x1.4aaafp-98f, 0.0f, 0x1.8550c4p-5f, 0.0f,
     0.0f, 0.0f, 0x1.fbcf2p-87f, 0x1.d887e2p-36f, 0x1.b1f6eap-15f, 0.0f, 0.0f,
     0x1.38a3p-6f, 0x1.6c1f92p-53f, 0x1.55e13ep-44f, 0.0f, 0.0f, 0.0f,
     0x1.259afap-121f, 0x1.c38462p-20f, 0x1.17f3bap-39f, 0.0f, 0x1.d2344cp-29f,
     0x1.616de4p-44f, 0x1.81e288p-34f, 0x1.baecdp-2f, 0x1.a959fap-88f, 0.0f,
     0x1.a1a724p-10f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.76bbbp-119f, 0.0f,
     0x1.2b3792p-97f, 0x1.b8d86ep-92f, 0x1.c1abcap-98f, 0x1.8627d2p-98f,
     0x1.63a2ecp-70f, 0.0f, 0x1.eceaeep-20f, 0.0f, 0x1.77ec8ep-118f, 0.0f, 0.0f,
     0x1.476884p-41f, 0x1.ea069cp-92f, 0x1.bd6b28p-56f, 0x1.53cf5cp-51f,
     0x1.ba0178p-51f, 0.0f, 0x1.c2da4ep-18f, 0x1.c5edecp-78f, 0.0f, 0x1.6e5becp-19f,
     0x1.e3cd1cp-84f, 0.0f, 0x1.de04dcp-84f, 0.0f, 0.0f, 0x1.0f2868p-4f,
     0x1.b0696ap-94f, 0x1.fb42b2p-101f, 0x1.7a6886p-97f, 0x1.c55d68p-111f,
     0x1.ee9ff6p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae3376p-68f, 0x1.6b2ddep-63f,
     0.0f, 0x1.5d1aacp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.152fb6p-111f,
     0x1.545fbp-111f, 0x1.e6e192p-114f, 0x1.8b8218p-28f, 0x1.9fe062p-71f, 0.0f, 0.0f,
     0x1.a4e936p-103f, 0x1.b02934p-21f, 0x1.5ae77ap-1f, 0.0f, 0.0f, 0.0f,
     0x1.1d2a34p-88f, 0x1.ead082p-23f, 0.0f, 0x1.8489c6p-18f, 0x1.9cdf6p-11f,
     0x1.eb9868p-44f, 0.0f, 0.0f, 0.0f, 0x1.5bbe76p-52f, 0.0f, 0x1.9be70ap-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.465fc4p-114f, 0x1.817c3p-84f, 0x1.d0b788p-78f,
     0x1.87d9a6p-118f, 0.0f, 0x1.f526ap-102f, 0.0f, 0x1.8002e8p-73f, 0.0f,
     0x1.641e6p-66f, 0x1.478aaap-78f, 0.0f, 0.0f, 0.0f, 0x1.09bc92p-63f,
     0x1.0ee9c8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c89d2p-91f, 0x1.9607c8p-38f,
     0x1.30d58p-107f, 0x1.54f32cp-4f, 0x1.6a46dp-10f, 0x1.a6168ep-76f,
     0x1.82d90ap-45f, 0.0f, 0x1.699ab4p-35f, 0x1.ea7ec2p-54f, 0x1.e0392ap-59f,
     0x1.19d73cp-28f, 0x1.8d3a8p-114f, 0x1.b2c2a4p-39f, 0x1.97436ep-94f,
     0x1.790618p-109f, 0.0f, 0x1.acc648p-6f, 0x1.d7b7fcp-118f, 0x1.b65c9ap-38f,
     0x1.86ae5ep-70f, 0.0f, 0x1.4e41ap-10f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0x1.721972p-109f, 0.0f, 0.0f, 0.0f, 0x1.5dacd8p-43f, 0.0f,
     0x1.8be35cp-108f, 0x1.ea9b82p-66f, 0x1.bbfbfcp-39f, 0.0f, 0.0f, 0x1.2a6d8p-76f,
     0.0f, 0x1.43c5f8p-99f, 0x1.764208p-125f, 0x1.1b3e78p-24f, 0x1.b9b52p-77f,
     0x1.aa089ep-88f, 0x1.2a93p-112f, 0.0f, 0x1.5c3af4p-32f, 0.0f, 0x1.329466p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8185e4p-41f, 0.0f, 0x1.337fb2p-94f, 0.0f,
     0x1.d8ad6ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.639b54p-48f, 0.0f, 0.0f, 0.0f,
     0x1.db2b1cp-81f, 0x1.935916p-25f, 0x1.98b59cp-86f, 0.0f, 0.0f, 0.0f,
     0x1.435a5cp-33f, 0x1.620b92p-101f, 0x1.9c3104p-2f, 0x1.5e5364p-95f,
     0x1.b58012p-77f, 0x1.52c232p-71f, 0.0f, 0.0f, 0.0f, 0x1.0a447cp-84f, 0.0f, 0.0f,
     0.0f, 0x1.022de4p-83f, 0x1.90b158p-113f, 0.0f, 0x1.8eaeaap-121f, 0x1.b4cdp-119f,
     0.0f, 0x1.d2a64cp-47f, 0.0f, 0.0f, 0x1.5cf1dcp-13f, 0.0f, 0.0f, 0.0f,
     0x1.e4537p-71f, 0x1.ac7aa2p-54f, 0.0f, 0.0f, 0x1.ab8ce2p-109f, 0.0f,
     0x1.fdb516p-123f, 0.0f, 0.0f, 0.0f, 0x1.62cbfcp-123f, 0x1.786ecp-45f, 0.0f,
     0x1.cc468cp-73f, 0.0f, 0x1.caa3bcp-77f, 0.0f, 0x1.bc98bp-112f, 0x1.9b9568p-25f,
     0x1.c9bcfp-64f, 0x1.82def8p-1f, 0.0f, 0x1.981816p-112f, 0.0f, 0x1.3ae42ep-71f,
     0.0f, 0x1.32063cp-34f, 0x1.e07298p-56f, 0x1.c8dc9ap-65f, 0.0f, 0x1.2f4252p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.424476p-75f, 0.0f, 0x1.905426p-124f, 0.0f,
     0x1.1503a2p-60f, 0x1.2c73e8p-56f, 0x1.fd451ep-48f, 0.0f, 0.0f, 0x1.1476f8p-71f,
     0.0f, 0x1.ec2856p-103f, 0x1.19d73ap-5f, 0x1.8aaf6cp-77f, 0x1.e3756ep-49f,
     0x1.3e7b46p-64f, 0.0f, 0x1.d357a4p-35f, 0.0f, 0x1.cbaee6p-43f, 0x1.8d1fa4p-83f,
     0.0f, 0x1.12474ep-33f, 0x1.f0caa2p-38f, 0.0f, 0.0f, 0x1.039522p-43f,
     0x1.ab3608p-59f, 0x1.c7399ep-18f, 0.0f, 0x1.e2422p-48f, 0x1.b28a2p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e96a92p-61f, 0x1.c484e8p-121f, 0.0f, 0x1.137a92p-78f,
     0x1.96add4p-22f, 0.0f, 0.0f, 0.0f, 0x1.49494p-88f, 0.0f, 0x1.3cc6cep-62f,
     0x1.00b71cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70f7dep-49f,
     0.0f, 0x1.8798fcp-65f, 0x1.5fedfap-18f, 0.0f, 0x1.c586eep-83f, 0.0f,
     0x1.1a1becp-76f, 0x1.0bf408p-113f, 0x1.8e693p-19f, 0x1.43392ap-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.175d72p-57f, 0.0f, 0.0f, 0.0f, 0x1.4673e2p-17f,
     0x1.daca4cp-29f, 0.0f, 0x1.35caa6p-39f, 0.0f, 0x1.237eacp-114f, 0.0f, 0.0f, 0.0f,
     0x1.6b1e6ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b1b22p-36f, 0.0f, 0x1.02d3a2p-31f,
     0.0f, 0.0f, 0.0f, 0x1.3abb52p-89f, 0x1.8018cap-15f, 0x1.888fbap-58f,
     0x1.d1742p-57f, 0.0f, 0.0f, 0x1.3a435cp-85f, 0.0f, 0.0f, 0x1.6a47a4p-106f, 0.0f,
     0.0f, 0x1.18693ap-38f, 0x1.e9562ap-7f, 0x1.9d8684p-15f, 0x1.cb6e9p-18f,
     0x1.fb98f4p-114f, 0x1.d66facp-67f, 0.0f, 0x1.8c9e3cp-106f, 0.0f, 0x1.89bd74p-22f,
     0x1.4e38p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1d1a2p-99f,
     0x1.354022p-48f, 0.0f, 0.0f, 0.0f, 0x1.237e5ep-107f, 0.0f, 0.0f, 0x1.8b3c52p-89f,
     0x1.1d8b56p-123f, 0.0f, 0.0f, 0x1.a88d9cp-91f, 0x1.1d69a4p-17f, 0x1.e4e8a6p-75f,
     0x1.6fbdfcp-31f, 0.0f, 0.0f, 0.0f, 0x1.d07e7ap-122f, 0x1.8b60ccp-104f,
     0x1.c61d4ap-105f, 0x1.1c8324p-96f, 0x1.e9677cp-11f, 0x1.58f744p-57f,
     0x1.a03f0cp-44f, 0x1.b7ddd2p-109f, 0.0f, 0x1.a8548ap-20f, 0.0f, 0.0f,
     0x1.e5afep-52f, 0.0f, 0x1.390f32p-100f, 0.0f, 0.0f, 0.0f, 0x1.8faad6p-116f, 0.0f,
     0.0f, 0.0f, 0x1.194d82p-31f, 0x1.4e4f5ep-78f, 0.0f, 0.0f, 0x1.0a5be8p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b43a3ep-105f, 0.0f, 0.0f, 0x1.7d074ap-44f,
     0.0f, 0x1.dc38ecp-74f, 0x1.48854cp-79f, 0x1.e3eefp-76f, 0.0f, 0.0f,
     0x1.ef2bfp-108f, 0.0f, 0x1.379e1p-74f, 0.0f, 0x1.da2e9ep-24f, 0.0f,
     0x1.2ef4dep-31f, 0.0f, 0x1.ee2252p-105f, 0x1.44b572p-92f, 0.0f, 0x1.8afd7p-87f,
     0.0f, 0.0f, 0x1.fb3e8ap-32f, 0.0f, 0x1.4cf72ep-8f, 0x1.d52a9ep-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50adfp-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e8316p-10f, 0.0f, 0.0f, 0.0f, 0x1.c9e9cp-74f, 0x1.fe053ap-3f, 0.0f, 0.0f,
     0x1.357a0ep-121f, 0x1.02b03ep-9f, 0x1.dfcb8ap-119f, 0.0f, 0.0f, 0x1.dde334p-9f,
     0x1.c5e6eap-101f, 0.0f, 0.0f, 0x1.dc98c2p-84f, 0.0f, 0x1.61ce92p-47f, 0.0f,
     0x1.91cd7cp-38f, 0.0f, 0x1.b676dp-112f, 0.0f, 0x1.6be592p-13f, 0.0f,
     0x1.3c5f2ap-106f, 0x1.3a2e6p-98f, 0x1.8fbc8p-111f, 0x1.1a99e6p-106f,
     0x1.e4bbfep-51f, 0.0f, 0x1.422c86p-64f, 0x1.5f3bd2p-66f, 0x1.ee5698p-78f, 0.0f,
     0x1.b8718cp-124f, 0x1.68e2dp-38f, 0x1.1801a2p-36f, 0x1.cedf98p-25f,
     0x1.77a4a2p-41f, 0x1.6d68c6p-1f, 0x1.165734p-99f, 0x1.6a9e72p-34f,
     0x1.b72baep-109f, 0.0f, 0.0f, 0x1.6445cp-9f, 0.0f, 0x1.d276b4p-107f, 0.0f, 0.0f,
     0x1.3301dap-80f, 0.0f, 0x1.7ad376p-69f, 0x1.5838dap-7f, 0x1.e3daaep-55f, 0.0f,
     0x1.b1b66cp-6f, 0x1.a492b8p-40f, 0.0f, 0.0f, 0.0f, 0x1.4a97f6p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2a5c22p-10f, 0.0f, 0.0f, 0x1.19797ep-108f, 0.0f,
     0x1.be3124p-107f, 0.0f, 0x1.550d32p-96f, 0x1.dc4e04p-17f, 0.0f, 0x1.a3c5acp-47f,
     0x1.5709eap-27f, 0x1.36f6d8p-96f, 0.0f, 0.0f, 0x1.87d1c8p-71f, 0x1.a1a85cp-121f,
     0.0f, 0x1.08590ap-83f, 0.0f, 0.0f, 0.0f, 0x1.c1700ap-63f, 0.0f, 0x1.2124a2p-40f,
     0.0f, 0x1.ce314cp-39f, 0.0f, 0x1.99e9d4p-62f, 0x1.64077ap-51f, 0.0f,
     0x1.507198p-73f, 0x1.7d7434p-35f, 0.0f, 0.0f, 0.0f, 0x1.c1420ap-56f,
     0x1.f64286p-88f, 0.0f, 0x1.4c24e6p-4f, 0.0f, 0x1.f4094p-1f, 0.0f, 0.0f,
     0x1.78abe6p-25f, 0.0f, 0x1.19bd7cp-2f, 0.0f, 0x1.66b776p-48f, 0x1.7b8004p-52f,
     0.0f, 0x1.0ba7c8p-100f, 0x1.63867ep-81f, 0.0f, 0x1.47c6d2p-102f, 0x1.13dae6p-55f,
     0.0f, 0x1.4dda74p-93f, 0.0f, 0x1.b97694p-44f, 0.0f, 0x1.344f2ep-89f,
     0x1.af2796p-51f, 0x1.388eeap-116f, 0.0f, 0x1.65229ep-105f, 0x1.6b0e04p-79f, 0.0f,
     0.0f, 0x1.fbf4b4p-25f, 0x1.5f35ecp-40f, 0x1.0257f8p-103f, 0x1.6d3bbp-61f, 0.0f,
     0x1.0bedeep-69f, 0.0f, 0x1.b52ec6p-68f, 0x1.f061cep-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2d4fdcp-84f, 0x1.51b4fep-112f, 0.0f, 0x1.8c3ceap-68f, 0.0f, 0.0f,
     0x1.8914c2p-51f, 0x1.8857e8p-31f, 0x1.e044eap-41f, 0x1.3a46a4p-12f, 0.0f, 0.0f,
     0x1.2284e8p-3f, 0x1.a4e7e6p-12f, 0x1.7f9c4cp-110f, 0x1.aa0bb6p-43f, 0.0f, 0.0f,
     0x1.261f04p-92f, 0.0f, 0.0f, 0x1.3ec05ap-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f939bap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6057p-65f, 0.0f, 0.0f, 0.0f,
     0x1.78655ep-120f, 0.0f, 0x1.5ecabep-1f, 0x1.2fd2c6p-78f, 0.0f, 0x1.cab116p-78f,
     0x1.5b6e88p-102f, 0x1.4c8502p-10f, 0.0f, 0.0f, 0x1.c3b26ep-36f, 0.0f,
     0x1.2c070ep-11f, 0x1.f9355ap-70f, 0.0f, 0x1.337e6ep-58f, 0x1.d7e1d8p-27f, 0.0f,
     0.0f, 0x1.af2566p-92f, 0x1.73d3bcp-100f, 0.0f, 0x1.474d96p-103f, 0x1.795a84p-84f,
     0.0f, 0x1.888624p-70f, 0x1.6b1ccap-36f, 0.0f, 0.0f, 0.0f, 0x1.5ea70ap-108f,
     0x1.54b3c8p-72f, 0.0f, 0x1.1b899ap-3f, 0.0f, 0x1.6fd72ep-48f, 0.0f,
     0x1.db0ddap-110f, 0x1.f0da7p-46f, 0.0f, 0x1.67b746p-75f, 0x1.430e0ep-63f, 0.0f,
     0x1.70f2f8p-20f, 0.0f, 0x1.0e532cp-105f, 0.0f, 0x1.daee6cp-65f, 0.0f,
     0x1.d04014p-84f, 0x1.47779ap-23f, 0.0f, 0.0f, 0.0f, 0x1.f1ac48p-121f,
     0x1.c2f7b2p-51f, 0.0f, 0.0f, 0x1.9650dap-16f, 0.0f, 0x1.8d6fbap-49f,
     0x1.d75f66p-91f, 0.0f, 0x1.e9be56p-49f, 0.0f, 0.0f, 0.0f, 0x1.f3088cp-3f, 0.0f,
     0.0f, 0x1.71309p-86f, 0x1.654aecp-18f, 0x1.5ff0ep-44f, 0x1.971c2cp-93f,
     0x1.dbcce6p-18f, 0x1.8e7e1p-99f, 0.0f, 0x1.7bc486p-31f, 0x1.d823fcp-85f, 0.0f,
     0x1.cd69ep-89f, 0x1.1b0c22p-38f, 0.0f, 0.0f, 0x1.c56502p-85f, 0.0f,
     0x1.4b1e34p-43f, 0.0f, 0x1.8394bep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62e802p-86f,
     0.0f, 0x1.31185ep-92f, 0x1.d970cp-106f, 0x1.76f1f4p-13f, 0.0f, 0x1.9cf72p-82f,
     0x1.1a466p-19f, 0.0f, 0.0f, 0x1.9eeb2cp-65f, 0x1.5017b4p-8f, 0.0f,
     0x1.eda3c6p-48f, 0.0f, 0.0f, 0x1.9c6b94p-121f, 0x1.40588p-95f, 0x1.69c63p-1f,
     0x1.177592p-116f, 0.0f, 0.0f, 0x1.3e337ap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa353cp-58f, 0.0f, 0x1.93048ap-57f, 0x1.18d90cp-114f, 0x1.a86d92p-123f,
     0x1.80737cp-90f, 0x1.2d895ep-119f, 0x1.86b73cp-29f, 0x1.0b45a6p-22f,
     0x1.5b2c16p-23f, 0.0f, 0x1.af940ep-61f, 0.0f, 0.0f, 0.0f, 0x1.7cca44p-62f,
     0x1.e4c4e4p-125f, 0.0f, 0.0f, 0.0f, 0x1.b19ce4p-117f, 0.0f, 0.0f, 0.0f,
     0x1.7c26f6p-20f, 0x1.aa059p-90f, 0x1.cb143ap-22f, 0x1.792bbcp-39f, 0.0f,
     0x1.7e21fp-65f, 0.0f, 0x1.16346ep-17f, 0x1.19271ep-5f, 0x1.0bb61p-46f, 0.0f,
     0x1.30f7dep-7f, 0.0f, 0.0f, 0x1.b9d104p-11f, 0x1.0f64ap-112f, 0x1.766d7ap-91f,
     0x1.ba066p-116f, 0x1.6965a2p-23f, 0x1.d0dd92p-7f, 0x1.dc696p-43f, 0.0f, 0.0f,
     0x1.6e2138p-11f, 0x1.08b518p-83f, 0x1.32cfd6p-1f, 0.0f, 0x1.e95526p-79f, 0.0f,
     0.0f, 0.0f, 0x1.b90eb2p-5f, 0x1.f64f66p-66f, 0x1.b0456ep-84f, 0.0f, 0.0f, 0.0f,
     0x1.30726ep-67f, 0x1.a2fbb6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61ead2p-41f, 0.0f,
     0x1.0d749ep-65f, 0x1.b4396p-25f, 0.0f, 0x1.2962ccp-52f, 0.0f, 0.0f,
     0x1.9171c6p-15f, 0.0f, 0x1.82ab42p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.992ec8p-22f, 0.0f, 0x1.8cfd2cp-48f, 0x1.f128bp-83f, 0x1.c444d2p-53f,
     0x1.8c0fc6p-41f, 0x1.a717f4p-87f, 0.0f, 0.0f, 0.0f, 0x1.18051cp-104f,
     0x1.288434p-31f, 0x1.bfea5ep-11f, 0x1.3c98dp-27f, 0.0f, 0x1.48521cp-74f, 0.0f,
     0x1.02ff46p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce336cp-120f, 0.0f, 0.0f, 0.0f,
     0x1.e0700cp-124f, 0x1.95378p-68f, 0.0f, 0.0f, 0x1.76f894p-125f, 0.0f,
     0x1.477c46p-53f, 0.0f, 0x1.80a87cp-39f, 0.0f, 0x1.3199cep-64f, 0x1.0db82p-19f,
     0.0f, 0.0f, 0.0f, 0x1.f9d15cp-21f, 0.0f, 0.0f, 0x1.27de96p-9f, 0x1.04350ep-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d3fa6p-112f, 0.0f, 0x1.7e02c8p-9f, 0x1.8e7202p-25f,
     0x1.008b22p-60f, 0.0f, 0x1.8d80fep-126f, 0x1.f99674p-97f, 0.0f, 0x1.aecbaep-39f,
     0x1.b534cp-69f, 0.0f, 0x1.de41fcp-13f, 0.0f, 0x1.36a36ap-74f, 0.0f, 0.0f, 0.0f,
     0x1.350d26p-58f, 0x1.fe5bf4p-72f, 0x1.14bb6ap-49f, 0x1.97408ap-34f,
     0x1.a9e13p-104f, 0.0f, 0x1.e51936p-51f, 0x1.078118p-67f, 0.0f, 0x1.1af45p-39f,
     0x1.0119cap-12f, 0.0f, 0.0f, 0x1.dbf584p-47f, 0.0f, 0x1.54b4f4p-60f,
     0x1.249b42p-47f, 0x1.5e315cp-34f, 0.0f, 0.0f, 0x1.632efp-55f, 0x1.734058p-126f,
     0.0f, 0x1.aacea6p-94f, 0.0f, 0.0f, 0.0f, 0x1.f60822p-124f, 0.0f, 0.0f, 0.0f,
     0x1.b3e818p-94f, 0x1.34c794p-98f, 0x1.80c8f4p-91f, 0.0f, 0x1.a4a6d2p-59f, 0.0f,
     0.0f, 0x1.7b6bb6p-23f, 0x1.7e34ap-97f, 0x1.d7b292p-16f, 0.0f, 0.0f, 0.0f,
     0x1.90c808p-81f, 0.0f, 0.0f, 0.0f, 0x1.6f20fcp-101f, 0x1.92224p-104f,
     0x1.9483bp-67f, 0x1.b196a4p-126f, 0x1.6199f4p-27f, 0x1.1a4362p-33f,
     0x1.ea18dap-93f, 0.0f, 0x1.35a2a4p-30f, 0x1.df4076p-22f, 0x1.91f54cp-30f, 0.0f,
     0x1.4307e2p-25f, 0.0f, 0x1.37055ap-13f, 0x1.73f2aap-25f, 0x1.425892p-28f,
     0x1.b9e286p-29f, 0x1.3010dcp-120f, 0x1.bb525cp-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e07da8p-6f, 0x1.7943c6p-10f, 0x1.205144p-36f,
     0x1.f04a06p-53f, 0x1.b4871cp-104f, 0.0f, 0x1.c5bfa6p-22f, 0.0f, 0.0f, 0.0f,
     0x1.f1038cp-70f, 0x1.485592p-100f, 0.0f, 0.0f, 0.0f, 0x1.033b4ep-44f, 0.0f,
     0x1.c06baap-20f, 0x1.da6c2p-30f, 0x1.72c6a4p-4f, 0x1.c28c46p-49f,
     0x1.b94a8p-113f, 0.0f, 0x1.1d003cp-106f, 0x1.b2697cp-54f, 0x1.3cb778p-116f,
     0x1.c8bc96p-93f, 0x1.1aa244p-90f, 0.0f, 0.0f, 0x1.8495c6p-91f, 0x1.7d304ep-85f,
     0.0f, 0x1.ea4b7ap-59f, 0x1.5127d8p-116f, 0x1.fde8f6p-16f, 0.0f, 0x1.160642p-82f,
     0x1.64cc08p-18f, 0.0f, 0.0f, 0x1.758002p-8f, 0.0f, 0.0f, 0x1.8281a6p-60f,
     0x1.a51ecap-11f, 0.0f, 0x1.f54a7cp-23f, 0x1.0cd7e6p-5f, 0x1.de70dep-64f, 0.0f,
     0.0f, 0.0f, 0x1.4e3c18p-21f, 0.0f, 0.0f, 0x1.0119aep-102f, 0x1.88281p-68f,
     0x1.4b6c1cp-40f, 0.0f, 0.0f, 0.0f, 0x1.bf659cp-78f, 0x1.6743dap-35f,
     0x1.2d6e14p-122f, 0.0f, 0.0f, 0.0f, 0x1.29f408p-116f, 0x1.012034p-33f,
     0x1.128d66p-31f, 0x1.69f16ep-60f, 0.0f, 0.0f, 0x1.91cc12p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ad7774p-44f, 0.0f, 0.0f, 0.0f, 0x1.b0b72p-63f, 0.0f, 0.0f,
     0x1.ab8416p-37f, 0x1.e296e2p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eae044p-1f,
     0x1.40e842p-27f, 0.0f, 0.0f, 0.0f, 0x1.b5ee2ap-74f, 0.0f, 0x1.eedcaap-101f,
     0x1.17845cp-8f, 0.0f, 0x1.83b43p-78f, 0x1.cacd16p-119f, 0.0f, 0x1.eee8cep-48f,
     0.0f, 0.0f, 0.0f, 0x1.c88d6ep-78f, 0x1.73cbbcp-57f, 0.0f, 0.0f, 0x1.cba4dep-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.726e72p-64f, 0x1.c7f1acp-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5988b8p-35f, 0.0f, 0x1.11cfcp-31f,
     0x1.8050a4p-96f, 0x1.7ee98p-61f, 0x1.da412p-10f, 0x1.ce2926p-83f,
     0x1.0ff9cap-86f
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
            tmp2 = Sleef_finz_atan2f4_u35kvx(tmp0, tmp1);
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
    printf("Sleef_finz_atan2f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atan2f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
