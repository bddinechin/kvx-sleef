/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastpowf4_u3500kvx.c --function \
 *     Sleef_fastpowf4_u3500kvx --arity 2 --headers sleef.h,ml_support_lib.h \
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
     0x1.aab65ap-126f, 0.0f, 0.0f, 0x1.d872aep-52f, 0.0f, 0.0f, 0x1.f0e1ap-64f,
     0x1.86dc8ap-96f, 0x1.cb3804p-86f, 0x1.4216acp-96f, 0.0f, 0x1.fe3752p-9f,
     0x1.546a3p-96f, 0x1.ecbbd8p-12f, 0.0f, 0x1.b941b2p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.737552p-85f, 0x1.ee7f82p-63f, 0.0f, 0.0f, 0.0f, 0x1.451658p-75f,
     0x1.f4c558p-14f, 0x1.91128ap-26f, 0x1.2c17f2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.58301p-9f, 0x1.abbea2p-84f, 0x1.621e18p-87f, 0.0f, 0x1.35327ep-1f,
     0.0f, 0x1.37abap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fb1e6p-82f,
     0x1.a2b356p-121f, 0x1.3fd9c8p-28f, 0.0f, 0.0f, 0.0f, 0x1.796a46p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9b7becp-7f, 0.0f, 0x1.036ebp-48f, 0.0f, 0x1.ffd4bcp-119f,
     0x1.627366p-112f, 0.0f, 0x1.9ee14ep-91f, 0x1.989d76p-56f, 0x1.3bdfd8p-90f, 0.0f,
     0.0f, 0.0f, 0x1.ccd0aap-33f, 0x1.64ccf6p-9f, 0x1.c7ecf2p-125f, 0x1.9a217p-36f,
     0x1.b2b9fcp-55f, 0x1.a230ccp-90f, 0x1.9bf13p-114f, 0x1.4e37a2p-39f,
     0x1.ff11bcp-8f, 0.0f, 0x1.711858p-97f, 0x1.c89d7ep-80f, 0.0f, 0x1.58ce24p-1f,
     0x1.96e588p-77f, 0x1.fa9464p-69f, 0x1.da5d7p-11f, 0x1.7f7ae6p-50f, 0.0f, 0x1p0f,
     0x1.e12ae2p-24f, 0.0f, 0x1.9a1facp-73f, 0x1.fa7f38p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1f812p-108f, 0.0f, 0.0f, 0.0f, 0x1.ab7aeep-116f,
     0.0f, 0x1.5c36fap-87f, 0.0f, 0x1.ae240cp-37f, 0x1.48abd8p-30f, 0.0f, 0.0f, 0.0f,
     0x1.da2a42p-70f, 0.0f, 0x1.1f2a94p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90872ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.342f4ap-53f, 0x1.ccf592p-11f, 0.0f,
     0.0f, 0x1.444338p-67f, 0.0f, 0x1.d3c7a6p-90f, 0x1.5a79f8p-94f, 0.0f,
     0x1.967636p-122f, 0x1.3e2ea6p-63f, 0x1.7598bep-104f, 0x1.d0ba84p-106f, 0.0f,
     0x1.b4575p-1f, 0.0f, 0.0f, 0.0f, 0x1.463c4p-91f, 0x1.5cfab6p-83f,
     0x1.3f58fap-53f, 0.0f, 0x1.d2de9ap-116f, 0.0f, 0x1.553f6ep-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2f4f18p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.854886p-98f, 0.0f, 0x1.8ec064p-22f, 0x1.ea769cp-35f,
     0x1.a1563ap-99f, 0x1.f8f81cp-12f, 0.0f, 0x1.ab5d52p-86f, 0x1.b71308p-60f,
     0x1.ba57e8p-36f, 0.0f, 0.0f, 0.0f, 0x1.b69a86p-121f, 0x1.34ab3cp-98f,
     0x1.4cb8cap-55f, 0.0f, 0.0f, 0x1.5ddd22p-38f, 0.0f, 0.0f, 0x1.7017aap-77f,
     0x1.d7bf2cp-106f, 0.0f, 0.0f, 0x1.33afa6p-105f, 0x1.ac6d24p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6c1a28p-5f, 0x1.cf264ap-57f, 0x1.ff51fp-80f, 0.0f, 0.0f,
     0x1.6e905ep-123f, 0x1.a75478p-97f, 0x1.ab4fb8p-76f, 0x1.f11d38p-112f,
     0x1.780366p-99f, 0x1.99c652p-112f, 0.0f, 0.0f, 0x1.057db8p-72f, 0x1.fda136p-5f,
     0.0f, 0x1.593482p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fffc72p-33f, 0.0f,
     0x1.4c29c4p-34f, 0x1.56db82p-92f, 0x1.9d01f4p-47f, 0x1.954e2ap-64f, 0.0f,
     0x1.25b79ap-100f, 0x1.105f56p-18f, 0x1.814a44p-30f, 0x1.887098p-78f, 0.0f,
     0x1.dad758p-89f, 0x1.c7451cp-103f, 0.0f, 0x1.4f06e4p-18f, 0x1.179674p-48f, 0.0f,
     0x1.d01cdep-94f, 0.0f, 0.0f, 0x1.8427a6p-113f, 0x1.eff2a4p-84f, 0.0f,
     0x1.a8432ap-25f, 0x1.b7aaep-94f, 0x1.81f2f8p-81f, 0x1.69de4cp-106f, 0.0f, 0.0f,
     0.0f, 0x1.3a06ccp-99f, 0x1.6e46c2p-109f, 0.0f, 0x1.ba275ap-23f, 0.0f, 0.0f, 0.0f,
     0x1.95532ap-82f, 0x1.973524p-50f, 0.0f, 0x1.dc88ep-16f, 0x1.0a7f0ep-6f,
     0x1.9f28d6p-3f, 0.0f, 0.0f, 0x1.6ab41ap-3f, 0x1.0a6d78p-124f, 0.0f,
     0x1.106eacp-110f, 0.0f, 0x1.a535ap-37f, 0.0f, 0.0f, 0x1.3f018ep-105f,
     0x1.08b868p-43f, 0.0f, 0x1.350c8cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d80eecp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b41b68p-80f, 0.0f, 0x1.9f8b56p-67f,
     0.0f, 0.0f, 0x1.d1898ep-13f, 0x1.4d8c2ap-15f, 0x1.2d598ap-7f, 0.0f,
     0x1.0bd40ep-68f, 0x1.f2f7cep-69f, 0x1.5c6d2ep-13f, 0.0f, 0.0f, 0x1.d858a8p-53f,
     0x1.2db794p-88f, 0x1.049804p-16f, 0.0f, 0x1.0c591ep-18f, 0.0f, 0x1.f37668p-21f,
     0.0f, 0x1.198ca4p-100f, 0.0f, 0x1.e1a906p-62f, 0x1.93ecc4p-73f, 0x1.714ebcp-116f,
     0.0f, 0.0f, 0x1.0b34bcp-38f, 0x1.f0d926p-126f, 0x1.7c46cep-28f, 0.0f,
     0x1.3d1318p-52f, 0x1.ee2ef8p-74f, 0x1.2198e8p-9f, 0.0f, 0x1.03eb42p-80f, 0.0f,
     0x1.60c344p-102f, 0.0f, 0x1.a6a4cap-22f, 0.0f, 0.0f, 0x1.9c6d08p-4f,
     0x1.55f7d8p-125f, 0x1.0c5426p-76f, 0.0f, 0.0f, 0x1.0077d4p-85f, 0x1.ef5b6ap-122f,
     0.0f, 0x1.c3ad4ep-111f, 0.0f, 0.0f, 0.0f, 0x1.c2ba6ep-85f, 0.0f,
     0x1.537be4p-112f, 0x1.cf2972p-67f, 0x1.f72f06p-116f, 0.0f, 0.0f,
     0x1.b16d24p-114f, 0x1.d46c44p-99f, 0.0f, 0x1.d4ca2ep-108f, 0x1.926c28p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1d13p-73f, 0x1p0f, 0x1.0721e8p-117f, 0.0f, 0.0f, 0x1.9f9fd6p-36f, 0.0f,
     0.0f, 0x1.1be4eap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf8a8cp-12f,
     0x1.5b58ccp-30f, 0x1.6bae64p-48f, 0x1.791a08p-56f, 0x1.5bf81p-24f, 0.0f, 0.0f,
     0x1.95dc7ep-16f, 0.0f, 0.0f, 0.0f, 0x1.6b6852p-6f, 0.0f, 0x1.91da6ep-59f, 0.0f,
     0.0f, 0.0f, 0x1.8cc6d6p-29f, 0x1.38a18p-110f, 0x1.12d9e6p-94f, 0x1.81777ep-56f,
     0x1.45d022p-36f, 0.0f, 0x1.1b5548p-61f, 0x1.6488fap-52f, 0.0f, 0x1.8a2db4p-16f,
     0.0f, 0.0f, 0x1.0981e4p-9f, 0x1.3633f8p-75f, 0x1.5349b8p-89f, 0.0f, 0.0f,
     0x1.6b01a4p-101f, 0x1.7feaf6p-20f, 0x1p0f, 0.0f, 0x1.57fc36p-38f, 0.0f, 0.0f,
     0.0f, 0x1.96603ep-71f, 0.0f, 0.0f, 0x1.853308p-59f, 0.0f, 0.0f, 0.0f,
     0x1.904ab4p-9f, 0x1.fe8292p-30f, 0.0f, 0.0f, 0.0f, 0x1.08e7ap-11f, 0.0f,
     0x1.20700ep-105f, 0.0f, 0.0f, 0.0f, 0x1.1c829cp-78f, 0.0f, 0x1.97f2e4p-81f,
     0x1.ace812p-17f, 0x1.5b7b58p-96f, 0x1.60269p-4f, 0.0f, 0.0f, 0.0f,
     0x1.eec092p-23f, 0x1.324b74p-33f, 0x1.7fe236p-25f, 0x1.72caacp-79f,
     0x1.0e66fep-74f, 0x1.81a432p-82f, 0x1.cf4406p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48e31ep-65f, 0x1.f8a4a4p-74f, 0.0f, 0.0f, 0x1.af1b6p-50f, 0.0f, 0.0f, 0.0f,
     0x1.75236ap-90f, 0.0f, 0x1.07acc8p-60f, 0.0f, 0x1.1b1c24p-84f, 0.0f,
     0x1.6e92b4p-16f, 0x1.20c096p-56f, 0.0f, 0.0f, 0.0f, 0x1.bd889cp-54f,
     0x1.b6c502p-86f, 0.0f, 0x1.5ef46ap-75f, 0x1.78863cp-17f, 0.0f, 0.0f,
     0x1.88d796p-44f, 0x1.9e0f4ep-45f, 0x1.79992p-113f, 0.0f, 0.0f, 0x1.a84fb4p-96f,
     0.0f, 0x1.8c4a08p-28f, 0.0f, 0x1.5fd474p-12f, 0x1.78e2d6p-6f, 0x1.e74de8p-104f,
     0.0f, 0x1.1323dep-44f, 0x1.fe242p-13f, 0x1.67007p-33f, 0x1.687448p-74f,
     0x1.3c5f84p-52f, 0x1.2258e2p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11915ap-93f,
     0.0f, 0x1.14a664p-39f, 0.0f, 0.0f, 0.0f, 0x1.936798p-48f, 0x1.2c05ep-56f, 0.0f,
     0x1.9bba2ep-82f, 0x1.99b8ccp-31f, 0x1.aa4bd4p-102f, 0.0f, 0x1.d9e77ap-98f,
     0x1.e62de4p-26f, 0x1.0a098cp-69f, 0x1.e77c2ap-4f, 0.0f, 0x1.6964c6p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf9cdcp-80f, 0.0f, 0.0f, 0.0f, 0x1.65b87cp-36f,
     0x1.95dfccp-12f, 0.0f, 0x1.766e08p-70f, 0x1.991c3ap-36f, 0x1.ff762cp-12f, 0.0f,
     0.0f, 0x1.cd3002p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46332cp-46f, 0x1.3aa644p-94f,
     0.0f, 0.0f, 0x1.dc3d8ap-20f, 0.0f, 0x1.120a02p-63f, 0.0f, 0.0f, 0x1.2fe6fep-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.81f3b4p-117f, 0x1.016902p-126f, 0x1.e93206p-40f,
     0x1.4e326p-10f, 0.0f, 0x1.72dddcp-104f, 0x1.aaaf7cp-118f, 0.0f, 0x1.b846dcp-39f,
     0.0f, 0x1.1846ep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c2862p-70f, 0x1.b943cp-6f, 0x1.fa1488p-121f, 0x1.4c6d04p-57f, 0.0f,
     0x1.9878dep-9f, 0x1.5daa5cp-18f, 0x1.8cbb5ap-33f, 0x1.610f92p-57f, 0x1.03dbep-8f,
     0x1.800cd4p-29f, 0x1.66f62ap-7f, 0.0f, 0x1.edd0e2p-103f, 0.0f, 0x1.5f92p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3cf42p-10f, 0x1.74b3a2p-22f, 0.0f, 0.0f, 0.0f,
     0x1.0b744cp-58f, 0x1.cee7b2p-71f, 0.0f, 0x1.8c6698p-106f, 0x1.032c86p-41f,
     0x1.a547c4p-87f, 0x1.fd5886p-65f, 0x1.4a0bb6p-119f, 0.0f, 0x1.748a7cp-108f,
     0x1.3148e6p-87f, 0x1.cbbab4p-97f, 0.0f, 0.0f, 0x1.2a1992p-78f, 0x1.e7d3aap-34f,
     0.0f, 0.0f, 0x1.bbd944p-94f, 0.0f, 0.0f, 0x1.eba652p-68f, 0x1.f36d64p-71f, 0.0f,
     0x1.094b96p-12f, 0x1.6667cep-26f, 0.0f, 0.0f, 0x1.311536p-50f, 0.0f,
     0x1.6838f4p-56f, 0.0f, 0.0f, 0.0f, 0x1.ae3a6ep-28f, 0.0f, 0x1.70a688p-3f,
     0x1.b02796p-41f, 0x1.d9a3fep-97f, 0x1.db8ffcp-103f, 0x1.06748p-66f,
     0x1.11fac2p-69f, 0x1.fbc518p-72f, 0.0f, 0x1.b7c99ep-85f, 0x1.d8c17ep-42f,
     0x1.d6bc42p-125f, 0x1.6ce33p-124f, 0.0f, 0x1.6882ccp-115f, 0.0f, 0.0f, 0x1p0f,
     0x1.84d3bp-94f, 0x1.0687e2p-49f, 0x1.939bc8p-123f, 0.0f, 0x1.46583cp-45f, 0.0f,
     0.0f, 0x1.ca9c42p-77f, 0.0f, 0.0f, 0x1.a839bap-27f, 0x1.9e276ap-43f,
     0x1.8cd24p-121f, 0.0f, 0.0f, 0x1.357c32p-120f, 0.0f, 0x1.612f54p-1f,
     0x1.027c1ep-69f, 0.0f, 0.0f, 0x1.8e09f4p-23f, 0.0f, 0.0f, 0x1.63d2eap-71f,
     0x1.04a056p-91f, 0.0f, 0x1.4f7e0ep-72f, 0.0f, 0.0f, 0.0f, 0x1.aa97bep-60f,
     0x1.ba588p-113f, 0x1.9f14e4p-59f, 0.0f, 0.0f, 0.0f, 0x1.25735cp-119f, 0.0f,
     0x1.497e3cp-111f, 0.0f, 0x1.63f07ap-57f, 0x1.26cbc2p-93f, 0.0f, 0x1.e51d9cp-98f,
     0x1.1b0f66p-108f, 0x1.23a71p-83f, 0x1.31f63p-23f, 0x1.4cea6cp-28f,
     0x1.59828cp-35f, 0.0f, 0.0f, 0.0f, 0x1.a5d6eep-25f, 0x1.96243ap-122f, 0.0f,
     0x1.5ef364p-61f, 0.0f, 0x1.05de8ep-110f, 0.0f, 0x1.5687b8p-19f, 0.0f, 0.0f,
     0x1.6d690ap-112f, 0x1.8892p-68f, 0x1.97a6bp-103f, 0.0f, 0x1.6fb5d4p-114f, 0.0f,
     0.0f, 0x1.f423f6p-95f, 0.0f, 0.0f, 0x1.699fa6p-58f, 0x1.fe55dcp-57f,
     0x1.fe43e8p-104f, 0x1.920692p-103f, 0x1.a9155cp-65f, 0x1.247aaap-52f, 0.0f,
     0x1.a10f3ep-15f, 0x1.d73e88p-76f, 0x1.068b32p-99f, 0.0f, 0.0f, 0x1.a3bcc6p-94f,
     0x1.fd319ep-83f, 0x1.5dfacep-9f, 0x1.9e3352p-17f, 0.0f, 0.0f, 0x1.8b5846p-77f,
     0.0f, 0.0f, 0x1.68ec5ep-113f, 0x1.b2ec38p-34f, 0.0f, 0x1.cc2374p-67f,
     0x1.3c1326p-98f, 0x1.7537dcp-118f, 0.0f, 0x1.23b7e6p-119f, 0.0f, 0x1.f7204ep-55f,
     0.0f, 0x1.cb1e08p-90f, 0.0f, 0.0f, 0.0f, 0x1.5a67eap-75f, 0x1.b499ap-124f,
     0x1.e7953ap-109f, 0x1.ae7bf6p-27f, 0x1.742044p-74f, 0x1.feebep-116f,
     0x1.a48ea2p-91f, 0.0f, 0x1.99b8f2p-123f, 0x1.01ba5cp-41f, 0.0f, 0.0f,
     0x1.293f24p-6f, 0x1.65f746p-15f, 0.0f, 0.0f, 0x1.7bd878p-115f, 0.0f,
     0x1.dc670ap-116f, 0x1.1ee54ap-71f, 0.0f, 0.0f, 0x1.afb1e6p-6f, 0.0f,
     0x1.4f14a2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f4824p-15f, 0.0f, 0.0f, 0.0f,
     0x1.185602p-30f, 0.0f, 0.0f, 0.0f, 0x1.4f7c94p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9f764p-95f, 0.0f, 0.0f, 0x1.6865cap-73f, 0.0f, 0.0f, 0x1.5a68eap-16f, 0.0f,
     0x1.389b8ap-103f, 0.0f, 0.0f, 0x1.5acbc2p-96f, 0.0f, 0.0f, 0.0f, 0x1.759526p-78f,
     0.0f, 0.0f, 0.0f, 0x1.2de108p-30f, 0.0f, 0x1.e1a116p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e8ed4p-78f, 0x1.4b5742p-88f, 0x1.a1362p-83f, 0x1.54904p-91f, 0.0f,
     0x1.7daf94p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd6f14p-5f, 0.0f,
     0x1.adf2a8p-70f, 0x1.fe49cap-114f, 0.0f, 0x1.e9a918p-59f, 0x1.c91d0ap-39f, 0.0f,
     0x1.1aac44p-46f, 0.0f, 0x1.6f5d9cp-77f, 0.0f, 0.0f, 0.0f, 0x1.54779ep-43f,
     0x1.f5004ap-45f, 0x1.67011cp-111f, 0x1.f8f30ap-52f, 0.0f, 0x1.11b01p-118f,
     0x1.9c2192p-86f, 0.0f, 0.0f, 0x1.68f748p-26f, 0x1.6dba62p-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd4eap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11eca4p-1f, 0x1.510cp-31f,
     0.0f, 0x1.75a246p-23f, 0x1.248ebap-82f, 0.0f, 0x1.6c0caap-101f, 0.0f,
     0x1.582332p-36f, 0.0f, 0x1.86f0fap-125f, 0.0f, 0.0f, 0x1.203c3ap-57f,
     0x1.edcdd8p-13f, 0.0f, 0x1.369a82p-44f, 0.0f, 0x1.80c5a6p-103f, 0.0f,
     0x1.8c183ap-46f, 0x1.a1d3ccp-99f, 0x1.3d0ba8p-106f, 0x1.9d7438p-55f,
     0x1.15a674p-112f, 0x1.2600c4p-63f, 0x1.01086p-81f, 0.0f, 0x1.a57b9ap-11f,
     0x1.9a20bcp-3f, 0.0f, 0.0f, 0x1.75253ep-45f, 0.0f, 0x1.15a5d8p-94f, 0.0f, 0.0f,
     0.0f, 0x1.64e254p-102f, 0.0f, 0.0f, 0x1.09383ep-40f, 0.0f, 0.0f, 0x1.bc3b22p-78f,
     0.0f, 0x1.7349dap-77f, 0x1.9ce1eep-4f, 0.0f, 0.0f, 0x1.648cbcp-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.578b68p-116f, 0x1.b33646p-13f, 0.0f,
     0x1.0acd28p-122f, 0x1.efa60ep-81f, 0x1.991246p-22f, 0.0f, 0x1.03dc9cp-26f,
     0x1.00d018p-2f, 0.0f, 0.0f, 0.0f, 0x1.dc39a4p-85f, 0.0f, 0.0f, 0x1.d588cap-115f,
     0x1.cf10c2p-109f, 0.0f, 0.0f, 0.0f, 0x1.2c5aa2p-13f, 0.0f, 0x1.02eb5p-50f,
     0x1.fbee1ap-20f, 0.0f, 0x1.7580bp-100f, 0x1.eb4fc6p-116f, 0.0f, 0.0f,
     0x1.882f56p-89f, 0.0f, 0x1.520582p-59f, 0.0f, 0x1.a49aap-30f, 0.0f,
     0x1.0385f4p-83f, 0.0f, 0x1.f2cd84p-31f, 0x1.8126f2p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8567a2p-11f, 0.0f, 0.0f, 0.0f, 0x1.8f17bcp-39f, 0x1.e8da92p-97f, 0.0f,
     0.0f, 0x1.a1615ep-24f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.c92cc6p-84f, 0.0f, 0.0f, 0x1.c5fb3ap-85f, 0x1.a068dcp-12f, 0.0f, 0.0f, 0.0f,
     0x1.9c4cdap-46f, 0x1.4f4c86p-9f, 0x1.96214ap-54f, 0x1.232104p-6f, 0.0f,
     0x1.8697fep-66f, 0x1.b3e8dep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54decap-4f,
     0.0f, 0.0f, 0.0f, 0x1.4ea5b4p-1f, 0x1.dd966ap-117f, 0.0f, 0.0f, 0x1.33a8f2p-46f,
     0.0f, 0x1.929688p-117f, 0x1.79e0cep-90f, 0x1.a60dccp-32f, 0.0f, 0.0f, 0.0f,
     0x1.4bf6ccp-21f, 0x1.e8156cp-19f, 0.0f, 0.0f, 0x1.1e83cp-50f, 0.0f, 0.0f,
     0x1.f0a27ap-21f, 0.0f, 0x1.6561d4p-24f, 0.0f, 0x1.edf09cp-23f, 0.0f,
     0x1.248318p-105f, 0x1.6995fep-55f, 0.0f, 0.0f, 0.0f, 0x1.a664dep-54f, 0.0f,
     0x1.03794cp-81f, 0x1.1166b8p-27f, 0x1.03a326p-33f, 0.0f, 0.0f, 0x1.917e5ep-10f,
     0.0f, 0.0f, 0x1.4830fep-5f, 0x1.626514p-22f, 0x1.48fa9ep-58f, 0x1.e1c75cp-121f,
     0.0f, 0x1.dfac12p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.4d557p-72f, 0.0f,
     0x1.0c3a04p-115f, 0.0f, 0.0f, 0x1.83b28p-97f, 0.0f, 0.0f, 0.0f, 0x1.5a7c22p-77f,
     0.0f, 0.0f, 0x1.0aa7b8p-33f, 0.0f, 0.0f, 0.0f, 0x1.ec81acp-16f, 0x1.83c2acp-35f,
     0x1.a78b68p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.343dd4p-103f, 0x1.e2733p-65f, 0.0f,
     0x1.9feda8p-73f, 0.0f, 0.0f, 0x1.261b26p-120f, 0.0f, 0.0f, 0.0f, 0x1.bffa18p-76f,
     0x1.f8bc3ep-49f, 0.0f, 0x1.31d226p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.864df2p-48f, 0.0f, 0x1.156d66p-12f, 0.0f, 0x1.7ab2e6p-68f, 0.0f, 0.0f,
     0x1.21ee0ap-73f, 0x1.04c4c2p-87f, 0.0f, 0x1.706d54p-38f, 0.0f, 0x1.7d719ap-63f,
     0x1.11d1b8p-56f, 0x1.835e54p-28f, 0.0f, 0.0f, 0x1.0788a6p-34f, 0.0f, 0.0f,
     0x1.8a104ep-83f, 0x1.6ccd22p-66f, 0.0f, 0x1.eac5c2p-76f, 0.0f, 0x1.99aac6p-29f,
     0x1.d8ba1ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4318ep-9f,
     0.0f, 0x1.37be78p-27f, 0.0f, 0x1.ea8776p-88f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.429838p-54f, 0x1.9e64cap-86f, 0x1.79c4a6p-22f, 0.0f, 0x1.ab3d82p-73f, 0.0f,
     0.0f, 0.0f, 0x1.54ac06p-100f, 0.0f, 0x1.466ae6p-86f, 0.0f, 0x1.1739b2p-85f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.311926p-92f, 0x1.54b5a6p-75f, 0.0f,
     0x1.cec924p-96f, 0.0f, 0.0f, 0x1.6750b4p-53f, 0x1.a1dc4ep-80f, 0x1.293e94p-118f,
     0x1.e31c18p-63f, 0.0f, 0.0f, 0.0f, 0x1.10367p-28f, 0.0f, 0x1.c41f1p-88f, 0.0f,
     0.0f, 0x1.75e6eap-5f, 0.0f, 0.0f, 0.0f, 0x1.e148d8p-9f, 0x1.3824e4p-126f,
     0x1.cf63a6p-119f, 0x1.b8b0b8p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53f59ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.175498p-69f, 0.0f,
     0x1.344112p-20f, 0x1.352f6cp-64f, 0.0f, 0x1.41165ep-21f, 0.0f, 0.0f,
     0x1.3d64bep-20f, 0x1.faf80cp-115f, 0x1.cc9974p-54f, 0x1.953466p-8f,
     0x1.69abaep-97f, 0.0f, 0.0f, 0.0f, 0x1.a40b18p-122f, 0.0f, 0.0f, 0x1.132eeap-23f,
     0x1.fc8218p-37f, 0.0f, 0x1.0843f8p-85f, 0.0f, 0.0f, 0.0f, 0x1.be06dap-117f,
     0x1.7185b4p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e62c8ap-7f, 0x1.12fe8cp-109f,
     0x1.bfab3ap-31f, 0x1.2be972p-97f, 0x1.d4772ap-21f, 0.0f, 0x1.d8d1ecp-111f, 0.0f,
     0x1.b002ecp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b8868p-33f, 0.0f,
     0.0f, 0x1.143d6cp-49f, 0.0f, 0x1.ce8f9ep-11f, 0x1.eca762p-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.39ab06p-17f, 0.0f, 0.0f, 0.0f, 0x1.032e84p-6f, 0x1.93cf6ep-54f,
     0x1.c3b9dcp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1df52ap-57f, 0x1.55923ep-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.39220cp-96f, 0x1.623f7cp-3f, 0.0f, 0.0f, 0.0f,
     0x1.30e56p-43f, 0x1.bf0ecep-31f, 0.0f, 0x1.885aeap-36f, 0x1.1d66cep-53f, 0.0f,
     0x1.85591ep-60f, 0x1.06509ep-67f, 0x1.eed95p-112f, 0x1.4279e2p-37f,
     0x1.75be24p-13f, 0.0f, 0x1.c6f5ecp-106f, 0x1.772c74p-10f, 0.0f, 0x1.5cb27cp-107f,
     0x1.e34c1ap-91f, 0x1.9e8544p-78f, 0x1.5c70b4p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9436ep-124f, 0.0f, 0.0f, 0.0f, 0x1.dd423p-44f, 0x1.a7f776p-29f,
     0x1.c3a7f8p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7992ap-107f, 0x1.c1f0f6p-68f,
     0.0f, 0x1.f72cc6p-1f, 0x1.731db8p-108f, 0.0f, 0.0f, 0.0f, 0x1.882998p-17f,
     0x1.814c2ap-126f, 0x1.f1fa4ep-79f, 0.0f, 0x1.51bd98p-18f, 0.0f, 0.0f, 0.0f,
     0x1.56bff4p-105f, 0x1.15cdd2p-33f, 0.0f, 0.0f, 0x1.01c9cep-74f, 0.0f, 0.0f, 0.0f,
     0x1.a9fb38p-57f, 0x1.792c9ap-37f, 0.0f, 0x1.75a5c6p-106f, 0.0f, 0.0f, 0.0f,
     0x1.bbdcdap-115f, 0x1.301136p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d5724p-110f, 0.0f, 0.0f, 0x1.ae3886p-72f, 0.0f, 0x1.c23a62p-81f,
     0x1.c83dd4p-53f, 0.0f, 0x1.ae6de4p-80f, 0x1.1c3714p-56f, 0.0f, 0.0f, 0.0f,
     0x1.d6a774p-115f, 0x1.34ba92p-116f, 0.0f, 0.0f, 0x1.7175d2p-120f, 0.0f, 0.0f,
     0.0f, 0x1.d1094ap-56f, 0x1.2e933ep-63f, 0.0f, 0x1.14f27cp-82f, 0x1.d6726ep-32f,
     0.0f, 0x1.6d6398p-57f, 0x1.15a0bp-82f, 0x1.ff7038p-4f, 0x1.b28986p-57f,
     0x1.9f67c4p-34f, 0x1.7ad75ap-8f, 0x1.1ab2c8p-26f, 0x1.de67d4p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b449p-80f, 0x1.d53272p-85f, 0.0f, 0x1.64066cp-93f,
     0x1.69b6ccp-28f, 0.0f, 0x1.4641ecp-82f, 0.0f, 0x1.47ab5p-21f, 0.0f,
     0x1.40ca7ap-105f, 0.0f, 0.0f, 0x1.66a62ep-76f, 0.0f, 0x1.1d168p-11f, 0.0f, 0.0f,
     0x1.2b6efap-33f, 0x1.ed0712p-78f, 0.0f, 0x1.50b41ep-32f, 0x1.87fef2p-108f, 0.0f,
     0.0f, 0x1.7fd206p-86f, 0.0f, 0.0f, 0x1.2109fap-42f, 0.0f, 0x1.58ad22p-3f, 0.0f,
     0.0f, 0x1.d1894ap-9f, 0.0f, 0x1.a926ep-7f, 0.0f, 0.0f, 0x1.d0c412p-38f,
     0x1.525db4p-121f, 0x1.6be7bap-80f, 0x1.ea9992p-58f, 0.0f, 0x1.858f9ep-24f, 0.0f,
     0.0f, 0.0f, 0x1.2d66aep-62f, 0.0f, 0.0f, 0x1.cb4672p-66f, 0.0f, 0x1.07a9e4p-108f,
     0x1.7ce842p-98f, 0.0f, 0.0f, 0x1.7e9bdep-17f, 0x1.b4eaeap-111f, 0.0f,
     0x1.b159bep-83f, 0x1.8e4182p-38f, 0.0f, 0x1.790526p-88f, 0x1.df28a4p-55f,
     0x1.d0a6b8p-101f, 0x1.075e42p-124f, 0x1.e4aac4p-117f, 0.0f, 0x1.0cfbccp-71f,
     0x1.5c2266p-31f, 0x1.aa0d1ep-121f, 0x1.ffeaaap-83f, 0.0f, 0.0f, 0.0f,
     0x1.5693d6p-88f, 0x1.d3ae76p-9f, 0.0f, 0.0f, 0x1.87d504p-51f, 0.0f, 0.0f,
     0x1.ed9776p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19fac4p-71f, 0.0f, 0x1.60e5c6p-120f,
     0x1.59d358p-78f, 0.0f, 0x1.e7301ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6c66p-15f,
     0x1.12f6bap-52f, 0x1.d8d01p-60f, 0x1.8c7a2p-32f, 0x1.fb9a74p-116f, 0.0f,
     0x1.baf158p-27f, 0x1.6b8df6p-122f, 0.0f, 0.0f, 0x1.4e0c8ep-43f, 0.0f,
     0x1.c1f6fap-114f, 0.0f, 0.0f, 0x1.139194p-17f, 0x1.a536a8p-99f, 0.0f, 0.0f,
     0x1.588fd6p-106f, 0.0f, 0.0f, 0x1.dc6888p-32f, 0.0f, 0x1.260d18p-113f,
     0x1.6dff38p-63f, 0.0f, 0.0f, 0x1.9a1118p-88f, 0.0f, 0x1.ef6b52p-70f,
     0x1.c1f37ap-103f, 0.0f, 0.0f, 0x1.3c1c3cp-108f, 0x1.2795f2p-78f, 0.0f,
     0x1.fd3e42p-35f, 0x1.bd5cc2p-114f, 0.0f, 0x1.2470ap-1f, 0x1.1bc0c6p-51f, 0.0f,
     0x1.a23daap-93f, 0.0f, 0x1.f87ba8p-16f, 0.0f, 0x1.446a2cp-45f, 0x1.2b101p-111f,
     0x1.b908e8p-91f, 0.0f, 0x1.5fa1c6p-41f, 0x1.414e86p-99f, 0x1.0dd956p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.7128c8p-17f, 0x1.4ec138p-17f, 0.0f, 0.0f,
     0x1.da4a34p-38f, 0x1.340ed2p-26f, 0x1.b376dp-113f, 0x1.439418p-92f,
     0x1.e8618ep-103f, 0.0f, 0.0f, 0.0f, 0x1.39ec16p-74f, 0x1.a967dep-26f, 0.0f, 0.0f,
     0.0f, 0x1.ebc886p-50f, 0x1.b762b8p-5f, 0.0f, 0.0f, 0x1.96ef24p-121f, 0.0f,
     0x1.a326bp-103f, 0x1.cd9f92p-32f, 0x1.961bd2p-61f, 0x1.5d1d8cp-77f,
     0x1.f9f85p-73f, 0x1.85a9fp-81f, 0x1.e93066p-81f, 0.0f, 0x1.ff0ab6p-41f,
     0x1.8de2f8p-83f, 0x1.badc8p-49f, 0x1.4d4994p-19f, 0x1.51d99ap-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.61f782p-70f, 0x1.9d18ecp-83f, 0x1.faa978p-106f,
     0x1.4e848p-56f, 0.0f, 0x1.a8d9ccp-40f, 0.0f, 0.0f, 0x1.84cb1p-92f,
     0x1.4abb9ap-8f, 0.0f, 0x1.4abab6p-100f, 0.0f, 0x1.8ce91p-9f, 0x1.5223d6p-92f,
     0x1.5e0f5cp-41f, 0x1.e4a05p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.188f6p-73f, 0.0f,
     0.0f, 0x1.73f17p-94f, 0.0f, 0x1.d83e4cp-94f, 0.0f, 0x1.24491p-51f,
     0x1.176414p-49f, 0x1.9621e6p-68f, 0x1.f7e588p-56f, 0.0f, 0x1.8b272p-7f,
     0x1.ab272p-30f, 0x1.99bb9cp-112f, 0.0f, 0x1.c4fd3ep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37a712p-100f, 0.0f, 0.0f, 0x1.d6fa46p-6f, 0.0f, 0x1.ebe548p-100f,
     0x1.75d238p-58f, 0.0f, 0.0f, 0x1.10c23ep-91f, 0.0f, 0x1.83d0acp-51f, 0.0f, 0.0f,
     0x1.60113ap-4f, 0x1.f9d35cp-9f, 0x1.06356ep-104f, 0.0f, 0.0f, 0x1.9d94cp-6f,
     0x1.d2f8c6p-97f, 0x1.3be074p-44f, 0x1.1de00ap-65f, 0x1.0d37a8p-65f,
     0x1.cf66f6p-86f, 0x1.d81daap-5f, 0x1.5366fep-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76864cp-79f, 0.0f, 0.0f, 0x1.29ab28p-26f, 0.0f, 0x1.f97d08p-6f,
     0x1.cce326p-41f, 0x1.3a17e2p-42f, 0x1.d2132ap-11f, 0x1.28ef5ep-118f,
     0x1.8b42e8p-90f, 0.0f, 0.0f, 0.0f, 0x1.d2189ap-6f, 0.0f, 0.0f, 0x1.4ef054p-11f,
     0x1.408994p-70f, 0.0f, 0.0f, 0x1.09836ap-69f, 0.0f, 0.0f, 0x1.48dbeap-27f, 0.0f,
     0x1.f09c38p-90f, 0x1.7a5586p-108f, 0.0f, 0.0f, 0x1.962d72p-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.495fccp-121f, 0.0f, 0x1.8a33dcp-40f, 0x1.682abcp-28f, 0.0f,
     0x1.ae2d38p-56f, 0.0f, 0.0f, 0x1.cd362p-36f, 0x1.24835ep-96f, 0x1.9ff6cep-88f,
     0.0f, 0x1.7007bep-37f, 0.0f, 0x1.6cfcfcp-116f, 0.0f, 0.0f, 0x1.a1f3aap-84f, 0.0f,
     0x1.ec3be8p-83f, 0.0f, 0.0f, 0x1.c9554ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.39e3a4p-22f, 0.0f, 0x1.efab46p-59f, 0.0f, 0.0f,
     0x1.275584p-111f, 0.0f, 0x1.9dff8ap-74f, 0x1.2015acp-49f, 0.0f, 0x1.7d96a2p-88f,
     0.0f, 0x1.1c82e8p-114f, 0.0f, 0x1.a6971ap-26f, 0x1.2bccp-87f, 0.0f, 0.0f,
     0x1.e94258p-61f, 0x1.a5373ap-106f, 0x1.c6b83ap-122f, 0x1.fe1d7p-86f, 0.0f,
     0x1.4c4e9ep-66f, 0.0f, 0.0f, 0x1.ecc574p-48f, 0.0f, 0x1.6400dap-44f, 0.0f,
     0x1.b280fp-1f, 0.0f, 0x1.a6c86cp-54f, 0.0f, 0x1.037c44p-119f, 0.0f, 0.0f, 0.0f,
     0x1.05bb2ep-82f, 0.0f, 0x1.2b77cp-98f, 0x1.5d8b8cp-32f, 0x1.1051dp-65f,
     0x1.2d28ep-79f, 0.0f, 0.0f, 0.0f, 0x1.821152p-95f, 0x1p0f, 0x1.4a8194p-76f,
     0x1.15ce18p-74f, 0x1.a4f104p-7f, 0x1.f8db2ap-42f, 0.0f, 0.0f, 0.0f,
     0x1.e244eep-17f, 0.0f, 0.0f, 0.0f, 0x1.861672p-80f, 0.0f, 0x1.73dd3cp-42f, 0.0f,
     0x1.bec1fep-117f, 0x1.475d8ap-107f, 0x1.834cc8p-68f, 0x1.6b8466p-124f, 0.0f,
     0x1.2a2076p-110f, 0.0f, 0x1.a9cd86p-118f, 0.0f, 0.0f, 0x1.f51da2p-33f,
     0x1.37b106p-38f, 0.0f, 0.0f, 0.0f, 0x1.ca2aeep-124f, 0.0f, 0x1.f7d9fep-117f,
     0x1.9523ap-65f, 0.0f, 0x1.e7f974p-82f, 0x1.3aeb08p-16f, 0.0f, 0x1.a1b15ep-81f,
     0x1.568f6ep-51f, 0.0f, 0x1.339868p-6f, 0.0f, 0x1.3adedp-60f, 0.0f, 0.0f, 0.0f,
     0x1.8ecf3ep-8f, 0.0f, 0x1.eb3722p-10f, 0x1.740d76p-118f, 0.0f, 0.0f,
     0x1.ebdb34p-98f, 0x1.8e4deep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4b3b54p-126f, 0x1.46676p-93f, 0.0f, 0.0f, 0x1.98af9cp-39f, 0.0f, 0.0f,
     0x1.069fcap-37f, 0.0f, 0x1.810d38p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11c80cp-88f, 0.0f, 0.0f, 0x1.6bf3fcp-92f, 0.0f, 0x1.12dc4p-123f,
     0x1.7cfa2cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e906p-102f, 0.0f,
     0x1.a81ff2p-28f, 0x1.c1a60ap-48f, 0x1.6a2e9ap-29f, 0.0f, 0x1.184a7cp-55f, 0.0f,
     0.0f, 0.0f, 0x1.5425bap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f4fb6p-25f, 0.0f,
     0x1.930af6p-100f, 0.0f, 0.0f, 0x1.a7a37p-114f, 0.0f, 0.0f, 0.0f, 0x1.27a6a8p-69f,
     0.0f, 0.0f, 0.0f, 0x1.fc7166p-110f, 0x1.d92d7cp-117f, 0.0f, 0x1.291818p-68f,
     0x1.be0e1ep-49f, 0.0f, 0.0f, 0x1.8837e6p-50f, 0.0f, 0x1.15e3c8p-12f, 0.0f,
     0x1.e0787ap-100f, 0.0f, 0x1.d7501ap-57f, 0x1.9dbafp-31f, 0.0f, 0x1.a45c9cp-88f,
     0.0f, 0.0f, 0x1.5efc94p-2f, 0.0f, 0x1.51c98ap-74f, 0x1.4c9aa8p-47f, 0x1p0f, 0.0f,
     0x1.9387b4p-19f, 0x1.2d6fcep-125f, 0.0f, 0x1.eab5a6p-125f, 0.0f, 0.0f,
     0x1.d734aap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4c274p-62f, 0x1.d29decp-91f, 0.0f,
     0.0f, 0x1.5a64a2p-87f, 0.0f, 0x1.cb20e2p-85f, 0x1.12b83ep-89f, 0.0f,
     0x1.2c5468p-29f, 0.0f, 0.0f, 0.0f, 0x1.f0cffcp-37f, 0x1.f9871ep-87f,
     0x1.a5561p-64f, 0x1.5dd7a2p-102f, 0.0f, 0.0f, 0x1.16e98cp-62f, 0x1.3df7e4p-76f,
     0.0f, 0.0f, 0.0f, 0x1.e659a4p-93f, 0.0f, 0.0f, 0x1.18affcp-60f, 0x1.989a54p-87f,
     0x1.6b7fa8p-20f, 0x1.09da7cp-76f, 0.0f, 0x1.fbf9ep-93f, 0.0f, 0.0f, 0.0f,
     0x1.13a44ap-24f, 0x1.28ca2p-93f, 0x1.353472p-115f, 0x1.5e38f2p-101f, 0.0f, 0.0f,
     0x1.bda448p-62f, 0.0f, 0.0f, 0x1.f47198p-116f, 0x1.8c9daep-52f, 0x1.95fffap-16f,
     0x1.dcac58p-31f
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
            tmp2 = Sleef_fastpowf4_u3500kvx(tmp0, tmp1);
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
    printf("Sleef_fastpowf4_u3500kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fastpowf4_u3500kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
