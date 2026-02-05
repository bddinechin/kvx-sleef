/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf8_u35kvx.c --function Sleef_finz_sinf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0x1.8b1bap-54f, 0x1.010266p-76f, 0.0f, 0x1.91cb92p-76f, 0x1.b8450ap-122f, 0.0f,
     0x1.1526f2p-47f, 0x1.4f938p-96f, 0x1.431d98p-56f, 0.0f, 0.0f, 0x1.697e5ep-15f,
     0.0f, 0.0f, 0x1.f78454p-120f, 0x1.337622p-80f, 0.0f, 0x1.49ad1cp-63f, 0.0f, 0.0f,
     0x1.9da3d2p-56f, 0x1.344f6ap-89f, 0x1.1f36c8p-85f, 0.0f, 0x1.31b41cp-101f, 0.0f,
     0.0f, 0.0f, 0x1.635a8p-72f, 0.0f, 0x1.422c16p-58f, 0x1.cc1b2ap-75f,
     0x1.c3ee2p-109f, 0.0f, 0x1.24d43ep-51f, 0.0f, 0.0f, 0x1.c1ce9cp-87f, 0.0f,
     0x1.73506ap-21f, 0x1.2c0c4p-118f, 0x1.561e42p-118f, 0x1.1f8ebep-9f, 0.0f,
     0x1.f924dep-124f, 0x1.e3c81ep-20f, 0.0f, 0.0f, 0x1.2071ep-8f, 0.0f,
     0x1.e5ddb8p-62f, 0x1.38b44p-54f, 0x1.c1b938p-52f, 0x1.03aaf4p-49f, 0.0f, 0.0f,
     0x1.87ca04p-76f, 0x1.b5182cp-53f, 0.0f, 0.0f, 0.0f, 0x1.f06becp-77f,
     0x1.cda124p-76f, 0.0f, 0.0f, 0.0f, 0x1.b69604p-124f, 0.0f, 0x1.1400e4p-5f, 0.0f,
     0x1.95ad0ep-97f, 0x1.680b5ap-70f, 0x1.3d545p-28f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.6ac9b2p-105f, 0x1.fe604p-17f, 0.0f, 0x1.f98d14p-15f, 0.0f, 0.0f,
     0x1.2860fcp-52f, 0.0f, 0x1.39a034p-78f, 0.0f, 0.0f, 0x1.76a69ep-85f, 0.0f, 0.0f,
     0x1.cd230cp-102f, 0x1.427018p-31f, 0x1.1d1da4p-88f, 0x1.13cc18p-92f, 0.0f,
     0x1.a39818p-106f, 0x1.6dd1ep-40f, 0.0f, 0x1.1dc4d6p-103f, 0x1p0f,
     0x1.c92ebp-110f, 0x1.570024p-54f, 0x1.469cfcp-117f, 0x1.b2c25ep-24f, 0.0f, 0.0f,
     0x1.710002p-74f, 0.0f, 0.0f, 0x1.a7885ap-120f, 0x1.73c76ap-18f, 0x1.8fb13p-5f,
     0x1.ac6be2p-122f, 0.0f, 0.0f, 0x1.0e9bdp-13f, 0.0f, 0x1.b12422p-118f, 0.0f, 0.0f,
     0.0f, 0x1.e3b858p-9f, 0.0f, 0.0f, 0.0f, 0x1.0f98eep-65f, 0x1.c853a6p-12f,
     0x1.ade91cp-69f, 0.0f, 0.0f, 0x1.af75ep-75f, 0.0f, 0x1.ee389cp-81f,
     0x1.2ef1d2p-54f, 0x1.1fa1dep-105f, 0.0f, 0x1.448168p-50f, 0x1.11b57cp-108f,
     0x1.5a61e6p-102f, 0.0f, 0x1.ee1e9ep-97f, 0x1.23336cp-55f, 0x1.2795dcp-93f,
     0x1.1ed0f2p-19f, 0x1.615d9ap-101f, 0x1.c5c73cp-28f, 0x1.6028c4p-56f, 0.0f,
     0x1.64437cp-16f, 0x1.cdbd5p-84f, 0x1.b618bep-71f, 0.0f, 0.0f, 0x1.2ba834p-41f,
     0x1.e1ab74p-52f, 0.0f, 0x1.eadb1p-19f, 0.0f, 0.0f, 0x1.eedc38p-48f,
     0x1.8dd98p-124f, 0.0f, 0.0f, 0.0f, 0x1.0e4b2ap-65f, 0x1.2ee14cp-95f, 0.0f, 0.0f,
     0x1.45b702p-70f, 0.0f, 0x1.6d421ep-18f, 0x1.f3a56p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f5fb4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ad2bep-84f,
     0.0f, 0x1.651298p-36f, 0x1.a8b17cp-65f, 0.0f, 0.0f, 0.0f, 0x1.0e035cp-15f, 0.0f,
     0.0f, 0x1.a9781ep-59f, 0x1.ab2f9p-103f, 0x1.b74abcp-126f, 0.0f, 0x1.aaf8e8p-12f,
     0x1.84d6f2p-29f, 0x1.899db4p-28f, 0x1.9594aep-89f, 0x1.98db38p-111f,
     0x1.4f5864p-76f, 0x1.622356p-18f, 0.0f, 0.0f, 0.0f, 0x1.698f3p-115f,
     0x1.ba1106p-61f, 0.0f, 0x1.fb89cap-89f, 0.0f, 0.0f, 0x1.d1e5acp-89f,
     0x1.0a5d9ap-106f, 0x1.742a4ep-82f, 0x1.b140bap-69f, 0x1.c19ba6p-74f,
     0x1.0e00c2p-73f, 0x1.b4c7dap-94f, 0.0f, 0x1.cbd75cp-6f, 0x1.3ea378p-40f, 0.0f,
     0.0f, 0x1.c428dcp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.222976p-70f, 0.0f, 0x1.6538b6p-121f, 0x1.ae636cp-81f, 0x1.bb425p-67f,
     0x1.612f76p-72f, 0.0f, 0x1.def33ep-33f, 0x1.f6a538p-58f, 0x1.dfe5b8p-64f, 0.0f,
     0.0f, 0x1.88ac2p-13f, 0x1.8765dp-13f, 0x1.1dc442p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f750dap-1f, 0x1.94ce8ap-22f, 0x1.a2aa6p-1f, 0x1.e54aep-47f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83d52ep-61f, 0x1.fef604p-97f,
     0.0f, 0x1.79260ep-119f, 0.0f, 0x1.ca296ep-7f, 0.0f, 0x1.2a85e2p-83f,
     0x1.91bdd6p-122f, 0x1.f07618p-87f, 0x1.9e0a26p-43f, 0x1.ba29d2p-94f, 0.0f,
     0x1.4a80cap-28f, 0x1.a4f6cep-120f, 0x1.3f759p-3f, 0x1.b01248p-4f,
     0x1.0fd62cp-68f, 0.0f, 0x1.92c0d6p-50f, 0x1.3ab258p-23f, 0.0f, 0.0f,
     0x1.f128bp-91f, 0x1.e9d344p-4f, 0x1.dcb77p-31f, 0.0f, 0.0f, 0.0f,
     0x1.ec35d8p-69f, 0x1.5ae11cp-76f, 0x1.4a4d12p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb831p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.979432p-24f, 0x1.9b63fep-99f,
     0.0f, 0.0f, 0.0f, 0x1.115002p-106f, 0.0f, 0.0f, 0x1.c2192p-115f, 0.0f,
     0x1.925dfp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.877054p-32f,
     0x1.5a8ebep-66f, 0x1.9e8b46p-98f, 0x1.c44ab6p-15f, 0.0f, 0.0f, 0x1.62f8p-65f,
     0x1.69bef8p-45f, 0x1.3050b2p-48f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.b5fefep-47f,
     0x1.e81b6ap-60f, 0x1.eb8622p-88f, 0x1.5a9cc6p-126f, 0.0f, 0.0f, 0x1.9639d2p-2f,
     0x1.7616dap-34f, 0.0f, 0x1.43032cp-9f, 0.0f, 0x1.0ac854p-123f, 0x1.e70712p-98f,
     0x1.7c724ap-56f, 0.0f, 0.0f, 0.0f, 0x1.deffd2p-2f, 0.0f, 0x1.ce4316p-8f,
     0x1.2e60dp-48f, 0x1.fc8ad6p-31f, 0x1.365caep-30f, 0.0f, 0.0f, 0.0f,
     0x1.bbf3dcp-41f, 0.0f, 0.0f, 0x1.904674p-73f, 0x1.c3cfap-70f, 0x1.5c8cd8p-68f,
     0.0f, 0.0f, 0x1.d4ee4ep-63f, 0x1.e4b0b2p-60f, 0x1.0a058ap-11f, 0x1.7c7326p-89f,
     0x1.941eep-32f, 0x1.12c1bp-109f, 0.0f, 0.0f, 0.0f, 0x1.eda6e6p-15f,
     0x1.ef37dp-106f, 0.0f, 0x1.8867acp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8382b6p-124f,
     0.0f, 0x1.d96354p-44f, 0.0f, 0x1.9c1214p-53f, 0x1.a328b2p-68f, 0x1.4e6e74p-61f,
     0x1.d7d03ap-122f, 0.0f, 0x1.bd8052p-77f, 0x1.6dd3fep-67f, 0.0f, 0x1.3267fap-84f,
     0x1.4b1a2ep-99f, 0x1.8fc9e8p-24f, 0.0f, 0.0f, 0x1.b17f5cp-65f, 0.0f, 0.0f, 0.0f,
     0x1.6737c2p-23f, 0x1.e2e3ep-106f, 0x1.ae3584p-114f, 0x1.9e51eap-33f,
     0x1.61c252p-66f, 0x1.cc06c8p-103f, 0x1.a4ca5p-64f, 0x1.e0e2b2p-76f, 0.0f, 0.0f,
     0x1.04d9f2p-25f, 0x1.2f86aep-29f, 0.0f, 0x1.203c5ep-33f, 0x1.7c5668p-64f,
     0x1.b5f04p-117f, 0.0f, 0x1.2df44p-54f, 0x1.7ae468p-42f, 0x1.a38dfp-112f, 0.0f,
     0.0f, 0x1.9ff45p-4f, 0x1.0434fep-37f, 0x1.96399ap-36f, 0.0f, 0.0f,
     0x1.7dcbc4p-51f, 0.0f, 0.0f, 0.0f, 0x1.1deb68p-63f, 0x1.4ce35ap-12f, 0.0f, 0.0f,
     0.0f, 0x1.2be316p-116f, 0.0f, 0.0f, 0x1.01ecfp-87f, 0x1.1e7e9ap-56f,
     0x1.5afeep-23f, 0.0f, 0.0f, 0x1.ed7488p-18f, 0x1.f54f5p-90f, 0.0f, 0.0f,
     0x1.38e54ep-66f, 0x1.0b45a8p-21f, 0x1.30527cp-99f, 0x1.2cd974p-5f, 0.0f, 0.0f,
     0x1.d4ea58p-35f, 0x1.d9c92cp-110f, 0.0f, 0.0f, 0x1.6dba5cp-117f,
     0x1.17a88cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daae4ap-78f, 0x1.e40cep-27f,
     0x1.8f1f22p-116f, 0.0f, 0.0f, 0.0f, 0x1.76bf6cp-50f, 0x1.ff9f7ap-100f,
     0x1.16b8fap-50f, 0x1.61037ep-11f, 0x1.856e14p-95f, 0.0f, 0.0f, 0x1.dd810cp-9f,
     0x1.768484p-17f, 0x1.7fc0fap-79f, 0x1.1b415ap-9f, 0x1.77bf96p-36f, 0.0f,
     0x1.c5f7e4p-76f, 0.0f, 0x1.5497d4p-25f, 0x1.3bd2c8p-100f, 0.0f, 0x1.caa2e8p-95f,
     0.0f, 0x1.ab6326p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b91cc2p-40f, 0x1.2664bp-72f,
     0x1.2d8a5cp-22f, 0.0f, 0x1.d4c9p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6811fep-71f, 0x1.653ccp-57f, 0x1.4a6b36p-109f, 0x1.b6889ep-124f, 0.0f,
     0x1.71edc2p-109f, 0x1.1b12dap-48f, 0x1.c6752cp-9f, 0x1.24a144p-67f,
     0x1.d6c66p-97f, 0.0f, 0x1.79438cp-83f, 0x1.0ceec6p-77f, 0x1.d3ad6ap-20f, 0.0f,
     0.0f, 0.0f, 0x1.fea566p-21f, 0x1.a9c06ep-40f, 0.0f, 0.0f, 0x1.4c9604p-63f,
     0x1.ab0d92p-16f, 0x1.c6c2e8p-78f, 0.0f, 0x1.49e1a6p-68f, 0x1.17ed1ap-107f,
     0x1.92dbdp-93f, 0.0f, 0x1.f6e8fp-112f, 0x1.49b8acp-46f, 0.0f, 0x1.1332c6p-38f,
     0.0f, 0x1.af2e02p-33f, 0x1.0f8bfp-9f, 0.0f, 0.0f, 0.0f, 0x1.3be69cp-125f, 0.0f,
     0.0f, 0x1.4946a8p-65f, 0x1.90fca8p-54f, 0.0f, 0x1.338448p-54f, 0.0f, 0.0f, 0.0f,
     0x1.964da2p-26f, 0x1.42a956p-91f, 0x1.ae79bep-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c25b04p-105f, 0.0f, 0x1.b027c4p-58f, 0x1.8c6272p-77f, 0x1.66c53p-83f,
     0x1.bff2acp-7f, 0x1.03fc7p-76f, 0.0f, 0.0f, 0x1.f2e81ep-12f, 0x1.03728ap-100f,
     0.0f, 0x1.ac5f3ep-2f, 0x1.df794cp-37f, 0x1.b81956p-58f, 0x1.dbc036p-76f, 0.0f,
     0x1.049448p-17f, 0x1.df24e4p-98f, 0x1.3d0b4ep-99f, 0x1.989e94p-47f, 0.0f,
     0x1.0442dep-104f, 0x1.afc802p-103f, 0x1p0f, 0.0f, 0x1.bc5f02p-31f,
     0x1.b8b77ep-65f, 0x1.8e15f2p-101f, 0.0f, 0x1.fec816p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.efa312p-34f, 0x1.463678p-86f, 0x1.08effcp-38f, 0x1.87cd36p-94f, 0.0f,
     0.0f, 0x1.f1326ep-99f, 0x1.2f280cp-53f, 0x1.29f70ep-20f, 0.0f, 0x1.27df24p-51f,
     0.0f, 0x1.5017f8p-82f, 0.0f, 0x1.355d1cp-75f, 0.0f, 0x1.88445p-61f, 0.0f, 0.0f,
     0x1.8ac1b2p-118f, 0x1.1cde0cp-91f, 0x1.128facp-121f, 0.0f, 0.0f, 0x1.3ae08p-76f,
     0x1.3cd3b4p-39f, 0x1.9181d6p-13f, 0x1.53743ep-64f, 0.0f, 0.0f, 0x1.13e2dp-116f,
     0x1.35e122p-29f, 0.0f, 0x1.644f7ep-41f, 0x1.0ef762p-65f, 0x1.d42fecp-65f,
     0x1.9ff69cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91cc9p-29f,
     0x1.5ac12ap-40f, 0.0f, 0x1.a23d84p-41f, 0x1.f7bc54p-7f, 0.0f, 0x1.506f7ep-28f,
     0x1.6e5a76p-29f, 0.0f, 0x1.d7e3p-18f, 0x1.aaef58p-100f, 0x1p0f, 0x1.c840eap-94f,
     0.0f, 0x1.830e64p-47f, 0.0f, 0.0f, 0.0f, 0x1.31f33ep-93f, 0x1.48c822p-85f,
     0x1.9991bcp-85f, 0x1.3618c6p-40f, 0x1.c67d4p-86f, 0x1.6a0abp-72f, 0.0f,
     0x1.8b6608p-4f, 0x1.9ab242p-36f, 0x1.6df3cep-120f, 0x1.e3e7bp-39f, 0.0f,
     0x1.94e018p-9f, 0x1.6bb702p-19f, 0.0f, 0x1.cb753ap-25f, 0x1.f0853cp-96f, 0.0f,
     0.0f, 0x1.da60a2p-91f, 0.0f, 0x1.227a9p-58f, 0.0f, 0x1.d1b5cp-119f, 0.0f,
     0x1.d0fcc2p-34f, 0.0f, 0x1.da5b2cp-1f, 0x1.06ec5p-22f, 0x1.ea296ep-125f,
     0x1.940074p-41f, 0x1.eeead4p-15f, 0x1.83d5e4p-106f, 0x1.5b5d0ep-90f, 0.0f,
     0x1.735126p-19f, 0.0f, 0.0f, 0x1.8ec6b8p-55f, 0x1.ce579ep-53f, 0x1.32d794p-27f,
     0x1.610824p-41f, 0x1.41a5fp-126f, 0x1.c5c89p-3f, 0.0f, 0.0f, 0x1.5a0a22p-35f,
     0x1.4b8bccp-6f, 0.0f, 0x1.e1a9eep-84f, 0.0f, 0x1.88e8e8p-27f, 0.0f,
     0x1.38d508p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20392ap-88f, 0x1.849aap-5f,
     0x1.e22b16p-54f, 0x1.69d274p-72f, 0.0f, 0.0f, 0.0f, 0x1.791098p-110f, 0.0f, 0.0f,
     0x1.ec3afcp-61f, 0.0f, 0x1.0c0604p-94f, 0x1.b4ba0ep-81f, 0.0f, 0x1.5963b8p-76f,
     0x1.ad15e6p-84f, 0x1.fe08eap-101f, 0x1.38e64ap-31f, 0x1.ecfep-111f, 0.0f, 0.0f,
     0x1.a0866ep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.889b4cp-50f,
     0x1.fce5d4p-120f, 0.0f, 0x1.e1a08p-78f, 0x1.ba6f4p-4f, 0.0f, 0.0f,
     0x1.4d82d6p-51f, 0x1.904d02p-64f, 0x1.a4bfacp-12f, 0.0f, 0.0f, 0x1.5ec772p-73f,
     0x1.e9a33p-14f, 0x1.f66ddcp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.059b82p-62f,
     0x1.f5989ep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5832ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.51f314p-10f, 0.0f, 0x1.3c6424p-112f, 0x1.dde972p-56f, 0x1.b68dd6p-47f,
     0x1.ce5b96p-59f, 0x1.ddfd28p-7f, 0x1.ed3fdcp-71f, 0.0f, 0.0f, 0.0f,
     0x1.7edf34p-62f, 0x1.d2311ap-43f, 0.0f, 0.0f, 0x1.de7a36p-87f, 0x1.8c892ap-24f,
     0x1.307c78p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42e8e4p-91f, 0.0f, 0x1.828056p-104f,
     0.0f, 0x1.924e8ap-25f, 0x1.b01b18p-30f, 0.0f, 0.0f, 0x1.9e8224p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.498554p-106f, 0.0f, 0x1.245d92p-75f, 0x1.6cbbecp-17f, 0.0f,
     0.0f, 0x1.ebcf04p-38f, 0.0f, 0.0f, 0x1.ae3db4p-118f, 0.0f, 0.0f, 0x1.f8de42p-30f,
     0x1.8ae9b4p-115f, 0x1.5cecfep-40f, 0x1.4634a8p-107f, 0x1.edd634p-42f,
     0x1.fcc2c2p-113f, 0.0f, 0x1.25d34cp-104f, 0.0f, 0x1.3231b4p-63f, 0x1.f58d54p-62f,
     0x1.0ed85ep-10f, 0.0f, 0x1.699b6ap-29f, 0.0f, 0x1.41e028p-96f, 0.0f, 0.0f,
     0x1.ae0522p-98f, 0x1.c11bcap-98f, 0.0f, 0.0f, 0x1.522cecp-68f, 0x1.17e004p-14f,
     0.0f, 0.0f, 0x1.3bb39ap-74f, 0.0f, 0x1.6d6d68p-1f, 0.0f, 0x1.5877d6p-16f, 0.0f,
     0.0f, 0.0f, 0x1.dd0198p-56f, 0.0f, 0.0f, 0x1.fd7e72p-54f, 0x1.f9c2b8p-123f,
     0x1.e9217cp-48f, 0.0f, 0.0f, 0x1.8675c6p-77f, 0.0f, 0.0f, 0x1.c53fap-46f,
     0x1.989d3ap-103f, 0x1.c8aa3cp-84f, 0x1.9622acp-47f, 0.0f, 0.0f, 0x1.a1bd78p-96f,
     0x1.59b296p-88f, 0x1.9b757ap-77f, 0x1.18a7b2p-40f, 0.0f, 0.0f, 0x1.8302fep-17f,
     0x1.30a94p-36f, 0x1.39332ep-28f, 0x1.06562p-62f, 0.0f, 0x1.3256c4p-77f, 0.0f,
     0.0f, 0.0f, 0x1.67e4eap-13f, 0x1.c95b1ep-119f, 0x1.d6c5b4p-92f, 0.0f, 0.0f,
     0x1.3fbd2cp-54f, 0.0f, 0x1.782f16p-97f, 0.0f, 0.0f, 0x1.7883f2p-37f,
     0x1.2a021ep-109f, 0x1.99e18cp-38f, 0.0f, 0x1.bf0462p-79f, 0.0f, 0.0f,
     0x1.fadd46p-13f, 0.0f, 0.0f, 0x1.fb890ap-82f, 0x1.c17132p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d8b4bep-117f, 0.0f, 0x1.b4281cp-125f, 0x1.5232a4p-60f, 0x1.9cde7p-106f,
     0.0f, 0x1.6e1b34p-90f, 0x1.0c989p-69f, 0x1.9544bap-8f, 0.0f, 0x1.754dfap-24f,
     0.0f, 0x1.f8603p-51f, 0x1.7ba14p-115f, 0x1.f7456ep-55f, 0x1.bbe72ep-124f,
     0x1.0c89bcp-73f, 0x1.f91edep-82f, 0.0f, 0x1.ef55a4p-14f, 0.0f, 0.0f,
     0x1.cfc86ep-57f, 0x1.676ebp-45f, 0x1.ab60b4p-46f, 0x1.ab78a2p-125f,
     0x1.c49bap-11f, 0.0f, 0.0f, 0x1.546b78p-32f, 0.0f, 0x1.97bfbep-89f,
     0x1.952368p-98f, 0x1.5400acp-100f, 0.0f, 0x1.563dbep-61f, 0.0f, 0x1.5ed35ep-47f,
     0x1.0d9ee2p-45f, 0.0f, 0.0f, 0.0f, 0x1.c6733p-113f, 0.0f, 0x1.9510cap-27f, 0.0f,
     0x1.203e88p-126f, 0.0f, 0x1.3ff99ap-116f, 0x1.d88d9cp-71f, 0x1.735fe2p-4f,
     0x1.ec2ed4p-40f, 0x1.8e0c44p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5102p-19f, 0.0f,
     0.0f, 0.0f, 0x1.ac870ep-43f, 0x1.34ccc8p-92f, 0x1.192bb2p-59f, 0.0f,
     0x1.4585e6p-66f, 0x1.1ee978p-82f, 0x1.a6b604p-23f, 0x1.6254fep-91f,
     0x1.303948p-32f, 0x1.3ebebap-77f, 0x1.0ea41ep-109f, 0.0f, 0x1.56248ap-26f, 0.0f,
     0.0f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sinf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
            i = tmp3;
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
    printf("Sleef_finz_sinf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sinf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
