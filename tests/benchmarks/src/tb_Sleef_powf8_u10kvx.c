/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_powf8_u10kvx.c --function Sleef_powf8_u10kvx --arity 2 \
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
     0.0f, 0.0f, 0.0f, 0x1.3d96dcp-113f, 0.0f, 0x1.37575ep-12f, 0x1.1399aap-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecac9ep-105f, 0.0f, 0x1.33ad22p-78f, 0.0f, 0.0f,
     0.0f, 0x1.abc39ap-15f, 0.0f, 0.0f, 0.0f, 0x1.adaed8p-49f, 0x1.ccd07p-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e76a8p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd559p-5f, 0.0f, 0.0f, 0x1.ad6ba4p-92f, 0x1.4d1da4p-55f, 0.0f, 0.0f, 0.0f,
     0x1.c2772cp-2f, 0.0f, 0.0f, 0x1.590034p-6f, 0x1.aea03ap-72f, 0x1.9bfa08p-53f,
     0x1.15762p-106f, 0x1.ee3a2ap-44f, 0x1.95186p-31f, 0.0f, 0x1.39a012p-48f,
     0x1.fce27p-77f, 0.0f, 0.0f, 0.0f, 0x1.5bc996p-29f, 0.0f, 0.0f, 0x1.a7ba88p-44f,
     0x1.09ef52p-124f, 0x1.ea6282p-51f, 0x1.f5937p-82f, 0x1.366382p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.48fea2p-72f, 0x1.baff0ep-11f, 0x1.757d68p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e0cb2p-23f, 0x1.22afdcp-22f, 0x1.8c50c8p-43f, 0.0f,
     0.0f, 0x1.23a6c2p-23f, 0.0f, 0x1.068d8cp-47f, 0.0f, 0x1.11e5c2p-6f,
     0x1.e4f1f6p-9f, 0x1.008b2p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99e89ap-116f,
     0x1.af12f4p-39f, 0x1.4b4a8cp-74f, 0x1.d2248ap-30f, 0.0f, 0x1.c70944p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a6c49ap-64f, 0.0f, 0x1.6ef83p-45f, 0x1.0e613p-78f, 0.0f,
     0.0f, 0x1.b557fap-12f, 0.0f, 0.0f, 0x1.80dd62p-8f, 0.0f, 0x1.f11fb4p-53f, 0.0f,
     0.0f, 0x1.fded0ep-32f, 0x1.f7b1f4p-37f, 0.0f, 0x1.8a7b58p-75f, 0.0f, 0.0f,
     0x1.fef576p-102f, 0x1.462f44p-78f, 0.0f, 0x1.d81274p-116f, 0.0f, 0.0f,
     0x1.30af44p-73f, 0x1.d9bef2p-33f, 0x1.add30ep-72f, 0x1.7c37e2p-66f,
     0x1.56e24cp-55f, 0x1.b6491p-63f, 0x1.554bcp-25f, 0.0f, 0.0f, 0x1.0ec1e2p-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.67fb7cp-46f, 0.0f, 0x1.85986ap-34f, 0x1.ca84a4p-58f,
     0x1.268d7p-112f, 0.0f, 0x1.56bd04p-94f, 0x1.7ddc8p-102f, 0.0f, 0x1.4e8cbep-21f,
     0.0f, 0.0f, 0x1.e578b2p-82f, 0.0f, 0x1.fa59a8p-57f, 0x1.c47f12p-103f, 0.0f,
     0x1.4d9b8p-126f, 0x1.1f3dd8p-70f, 0x1.4d98c4p-122f, 0x1.5321fap-104f, 0.0f, 0.0f,
     0.0f, 0x1.73483p-42f, 0.0f, 0x1.11a3a4p-67f, 0x1.89e56cp-113f, 0x1.ded8bp-26f,
     0x1.26a224p-63f, 0.0f, 0.0f, 0x1.7a5a4ap-121f, 0.0f, 0.0f, 0.0f, 0x1.e03528p-13f,
     0.0f, 0x1.a3d69ap-4f, 0x1.7c47bcp-82f, 0.0f, 0.0f, 0.0f, 0x1.781fap-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6403a4p-71f, 0.0f, 0x1.5c5c52p-17f, 0x1.e1972cp-14f, 0.0f,
     0x1.03be0cp-8f, 0.0f, 0.0f, 0x1.8a1cc4p-59f, 0.0f, 0.0f, 0x1.0f4c22p-79f, 0.0f,
     0x1.52c636p-9f, 0x1.10ad0cp-24f, 0x1.798296p-1f, 0.0f, 0x1.025a3ap-60f, 0.0f,
     0x1.d6a176p-116f, 0.0f, 0x1.8c8138p-107f, 0.0f, 0.0f, 0x1.3d40c2p-83f,
     0x1.09936cp-73f, 0x1.460ccap-10f, 0x1.17566ep-99f, 0.0f, 0x1.e990d8p-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.63a4ecp-108f, 0.0f, 0x1.697536p-78f, 0.0f, 0.0f,
     0x1.536d9cp-4f, 0.0f, 0x1.da7c18p-16f, 0x1.fe4a22p-121f, 0x1.106036p-43f, 0.0f,
     0.0f, 0x1.390b26p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea7d38p-10f,
     0.0f, 0.0f, 0x1.c4940ep-63f, 0.0f, 0x1.03ef2cp-29f, 0x1.66bfaap-46f, 0.0f,
     0x1.0d558p-76f, 0.0f, 0x1.4baebap-46f, 0x1.b35c7ep-11f, 0.0f, 0x1.03da54p-44f,
     0x1.393e92p-26f, 0x1.4595e6p-47f, 0x1.a7898p-68f, 0.0f, 0.0f, 0x1.d9da7ep-49f,
     0x1.11ac06p-120f, 0.0f, 0x1.18fa46p-50f, 0x1.7a2b4ap-74f, 0.0f, 0x1.134ef8p-34f,
     0.0f, 0x1.bea222p-41f, 0x1.2105dap-65f, 0x1.28159cp-120f, 0.0f, 0x1.39e37p-54f,
     0x1.bbebe8p-35f, 0x1.da7014p-104f, 0x1.94055p-22f, 0.0f, 0.0f, 0x1.346972p-126f,
     0x1.23596ap-83f, 0.0f, 0.0f, 0.0f, 0x1.1a84bep-95f, 0x1.ee30c8p-117f,
     0x1.6a8c76p-100f, 0.0f, 0.0f, 0.0f, 0x1.8f5c74p-98f, 0.0f, 0.0f, 0x1.d76586p-71f,
     0.0f, 0x1.6aaf92p-58f, 0x1.91c8acp-79f, 0.0f, 0x1.8ccf1p-95f, 0x1.2a242ap-104f,
     0x1.01442cp-109f, 0x1.7e83fap-87f, 0.0f, 0.0f, 0x1.187a4cp-62f, 0x1.81dbfcp-16f,
     0.0f, 0.0f, 0x1.ab065ep-38f, 0x1.c52ee6p-93f, 0x1.313b52p-109f, 0.0f,
     0x1.de1e74p-63f, 0.0f, 0.0f, 0x1.37b398p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cee904p-39f, 0x1.29aeeep-86f, 0.0f, 0x1.00bd2cp-113f, 0.0f, 0x1p0f,
     0x1.17216ep-53f, 0x1.919dp-98f, 0x1.0c25ecp-98f, 0.0f, 0.0f, 0x1.4f1894p-124f,
     0x1.c317f6p-57f, 0x1.469a36p-118f, 0.0f, 0x1.f17c78p-123f, 0x1.99e48cp-65f,
     0x1.20b9fap-22f, 0.0f, 0x1.9befb4p-115f, 0x1.d98476p-66f, 0x1.8b45e6p-82f,
     0x1.421c7ap-81f, 0.0f, 0x1.0d4aa4p-56f, 0.0f, 0.0f, 0x1.c6654ap-113f,
     0x1.9a5decp-27f, 0x1.643da4p-122f, 0.0f, 0x1.1fd85p-112f, 0.0f, 0x1.aa103ap-86f,
     0x1.9b58b6p-34f, 0x1.cad6a4p-26f, 0x1.40440ep-17f, 0x1.5d55a6p-6f,
     0x1.d88f1p-40f, 0x1.688238p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8dbbap-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ec11ep-84f, 0.0f, 0.0f, 0.0f, 0x1.ee2fdep-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fa24f8p-11f, 0.0f, 0.0f, 0x1.029506p-5f, 0.0f, 0.0f,
     0x1.6f4f8ap-92f, 0x1.b4a47p-73f, 0x1.086e5ap-38f, 0.0f, 0x1.c4107ap-89f,
     0x1.bb15fcp-117f, 0x1.29b12ap-48f, 0x1.c384d8p-12f, 0.0f, 0.0f, 0x1.24283ap-104f,
     0.0f, 0.0f, 0x1.c592ecp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16e4dcp-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cb4578p-74f, 0x1.7b6216p-79f, 0.0f, 0x1.a488e6p-25f,
     0x1.711e8ep-98f, 0x1.e1d78p-5f, 0.0f, 0x1.53902p-87f, 0.0f, 0x1.b8f542p-18f,
     0x1.4b414ep-5f, 0x1.92977p-125f, 0x1.d6ace8p-60f, 0.0f, 0.0f, 0x1.275372p-66f,
     0x1.11a854p-27f, 0x1.7c1912p-79f, 0x1.f76268p-103f, 0.0f, 0x1.5b07p-80f,
     0x1.e2288ap-70f, 0.0f, 0.0f, 0x1.7f70fap-120f, 0.0f, 0x1.a30ac4p-106f, 0.0f,
     0x1.b362fap-124f, 0.0f, 0.0f, 0x1.4df388p-109f, 0x1.63fda6p-88f, 0.0f,
     0x1.857a12p-17f, 0.0f, 0x1.c98844p-113f, 0x1.d40c46p-16f, 0.0f, 0x1.53dbep-73f,
     0.0f, 0x1.07e458p-23f, 0.0f, 0x1.8f8a28p-24f, 0.0f, 0x1.45c6b2p-30f, 0.0f,
     0x1.05b6dp-27f, 0x1.5b5daep-79f, 0x1.863958p-114f, 0.0f, 0x1.94ce2ep-25f,
     0x1.a09daap-66f, 0x1.7a5b28p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b21e92p-88f,
     0x1.758d3p-1f, 0.0f, 0.0f, 0x1.18156ep-45f, 0x1.c82e0ep-31f, 0.0f,
     0x1.bd2adep-41f, 0x1.0ddf8cp-69f, 0.0f, 0x1.97e074p-77f, 0x1.39fa46p-50f,
     0x1.992544p-24f, 0x1.a245e8p-67f, 0x1.c1993ep-57f, 0x1.2a77dp-108f,
     0x1.f8899ep-14f, 0x1.12317cp-52f, 0x1.26d46p-16f, 0x1.76c73cp-30f, 0.0f, 0.0f,
     0x1.8bd602p-112f, 0.0f, 0.0f, 0x1.3c66c8p-126f, 0x1.f6722cp-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.42eef6p-33f, 0x1.17f2a8p-46f, 0x1.ced408p-55f,
     0x1.04bdap-52f, 0.0f, 0.0f, 0.0f, 0x1.39d748p-45f, 0x1.0195e2p-42f, 0.0f,
     0x1.0d620ep-59f, 0x1.b459c8p-48f, 0x1.34304ep-53f, 0x1.6d11fep-78f,
     0x1.4e0f9p-108f, 0.0f, 0x1.21828p-110f, 0.0f, 0x1.be71ecp-120f, 0x1.e73486p-118f,
     0.0f, 0x1.162068p-55f, 0.0f, 0.0f, 0.0f, 0x1.b066aep-71f, 0.0f, 0x1.e81e3ap-49f,
     0.0f, 0x1.e2ab1p-104f, 0x1.fd6524p-81f, 0x1.23835cp-36f, 0x1.14a45p-19f, 0.0f,
     0x1.fb0e3ap-116f, 0x1.1f7e9cp-33f, 0x1.839112p-69f, 0.0f, 0x1.e26e94p-29f,
     0x1.01efaep-49f, 0x1.44b934p-21f, 0x1.d08bbp-9f, 0x1.31087cp-55f, 0.0f, 0.0f,
     0x1.04f2e2p-124f, 0.0f, 0x1.a94aa8p-15f, 0x1.9f6664p-74f, 0x1.c0e1d6p-41f,
     0x1.967efcp-111f, 0x1.66934ap-97f, 0x1.81d636p-70f, 0.0f, 0x1.403736p-112f, 0.0f,
     0x1.3f8674p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6be27cp-50f, 0x1.adbbd6p-34f,
     0x1.1a8d5ep-101f, 0x1.fe0e9cp-19f, 0.0f, 0.0f, 0x1.5a14c2p-29f, 0x1.8b160cp-116f,
     0.0f, 0x1.ca039cp-80f, 0x1.9803e8p-111f, 0x1.d8784ap-8f, 0x1.a25daap-63f,
     0x1.160de4p-31f, 0.0f, 0.0f, 0.0f, 0x1.7f9702p-22f, 0.0f, 0x1.4b3e8cp-90f,
     0x1.b4599ep-21f, 0.0f, 0x1.725c66p-79f, 0.0f, 0x1.bf571ap-68f, 0x1.5c9a9ap-111f,
     0x1.0c88fcp-73f, 0.0f, 0x1.b8ef5ep-23f, 0.0f, 0.0f, 0x1.1f95fap-28f, 0.0f, 0.0f,
     0.0f, 0x1.b19cdp-42f, 0x1.038c8ep-126f, 0x1.cbe382p-107f, 0.0f, 0x1.cb04b6p-92f,
     0x1.308ab4p-103f, 0x1.e5e68ep-69f, 0.0f, 0x1.6300acp-80f, 0x1.8a143ep-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.555078p-62f, 0.0f, 0x1.49ca36p-37f, 0.0f, 0x1.051022p-84f,
     0.0f, 0.0f, 0x1.65c354p-43f, 0x1.818e04p-109f, 0x1.ccc6ap-50f, 0.0f, 0.0f,
     0x1.ad1e66p-72f, 0.0f, 0x1.15bdbep-22f, 0x1.07ef3ep-5f, 0x1.c1bf1cp-6f, 0.0f,
     0.0f, 0x1.515146p-20f, 0.0f, 0.0f, 0x1.889c8p-108f, 0.0f, 0x1.e2419ap-33f,
     0x1.f4f504p-32f, 0.0f, 0x1.d712e4p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b85eep-42f,
     0x1.14668ap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.614cf6p-29f, 0x1.0559fap-72f, 0x1.01f282p-60f, 0x1.193384p-37f, 0.0f, 0.0f,
     0.0f, 0x1.e1cc36p-115f, 0x1.25c6c2p-62f, 0x1.194bc2p-123f, 0.0f, 0.0f,
     0x1.1ed7fp-45f, 0.0f, 0x1.d234f4p-43f, 0x1.40e8f6p-51f, 0.0f, 0x1.05443p-59f,
     0.0f, 0x1.b89fd2p-87f, 0x1.ddae98p-69f, 0x1.7d027ap-24f, 0.0f, 0.0f, 0.0f,
     0x1.a5f488p-101f, 0x1.2a2512p-104f, 0x1.3bb57ap-76f, 0x1.607f1cp-93f,
     0x1.c0cb14p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35c892p-98f, 0.0f,
     0x1.b71f1ap-34f, 0.0f, 0.0f, 0x1.9bfa78p-40f, 0.0f, 0x1.27ef66p-115f, 0.0f,
     0x1.e758p-106f, 0.0f, 0.0f, 0.0f, 0x1.a5667ep-86f, 0.0f, 0.0f, 0.0f,
     0x1.6dcc6cp-1f, 0x1.20d138p-107f, 0.0f, 0x1.65bc94p-51f, 0x1.119d78p-93f,
     0x1.7dce56p-61f, 0.0f, 0x1.743774p-72f, 0x1.4adacp-6f, 0x1.fb40fp-45f, 0.0f,
     0x1.075448p-21f, 0x1.cdb78ep-67f, 0.0f, 0x1.0ee3dep-110f, 0x1.ba6e66p-86f,
     0x1.713e0ep-118f, 0.0f, 0.0f, 0.0f, 0x1.6bc6cep-12f, 0.0f, 0x1.3244aap-69f, 0.0f,
     0x1.423c82p-14f, 0.0f, 0x1.eb7306p-16f, 0.0f, 0x1.415ea8p-19f, 0x1.56f5fp-103f,
     0.0f, 0x1.61e432p-63f, 0x1.b75c8p-77f, 0x1.b56beep-31f, 0x1.0f0796p-96f, 0.0f,
     0.0f, 0x1.ca245cp-46f, 0.0f, 0.0f, 0x1.af7cc2p-20f, 0x1.052b8ap-79f, 0.0f,
     0x1.d85936p-66f, 0x1.2909bp-112f, 0x1.5eb5b4p-95f, 0x1.4b45e8p-13f,
     0x1.e15422p-45f, 0.0f, 0x1.1ac134p-105f, 0.0f, 0.0f, 0x1.ed383cp-115f,
     0x1.9cf94ep-107f, 0.0f, 0.0f, 0x1.d12c98p-116f, 0.0f, 0.0f, 0x1.eebc8cp-2f,
     0x1.daa872p-45f, 0.0f, 0.0f, 0.0f, 0x1.33d82p-20f, 0x1.0ddc0cp-85f, 0.0f,
     0x1.99686ap-17f, 0.0f, 0x1.55f69ep-66f, 0x1.825d3cp-112f, 0.0f, 0x1.670ca8p-29f,
     0.0f, 0.0f, 0x1.7559dap-92f, 0x1.2c48a4p-105f, 0x1.a3e83p-92f, 0x1.50eafcp-72f,
     0.0f, 0.0f, 0.0f, 0x1.7bd8c4p-58f, 0x1.6fd19cp-60f, 0x1.8f2ecap-118f,
     0x1.b1950cp-93f, 0x1.125fdep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2427e2p-59f,
     0x1.1d962ep-116f, 0.0f, 0x1.040a18p-8f, 0.0f, 0x1.2a47fcp-62f, 0.0f, 0.0f,
     0x1.6e22fap-24f, 0x1.881fd6p-108f, 0.0f, 0x1.47a936p-54f, 0x1.1595b8p-108f,
     0x1.e2cd52p-24f, 0.0f, 0x1.d86162p-53f, 0.0f, 0.0f, 0x1.74ad46p-65f,
     0x1.8e5f2ep-108f, 0.0f, 0x1.84925ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c87886p-92f, 0x1.f6e05ep-68f, 0x1.2cc53ep-42f, 0x1.904d2ep-37f,
     0x1.21fec8p-16f, 0.0f, 0x1.0b27e6p-56f, 0x1.3ee64p-13f, 0x1.dcefbep-121f,
     0x1.d38abap-65f, 0.0f, 0.0f, 0.0f, 0x1.eacefp-91f, 0x1.2a9432p-111f, 0.0f,
     0x1.7f5e8ep-80f, 0.0f, 0x1.6d66aep-64f, 0x1.cc0676p-36f, 0x1.b57054p-65f, 0.0f,
     0.0f, 0.0f, 0x1.5a0e8ep-100f, 0.0f, 0.0f, 0.0f, 0x1.3d042p-42f, 0x1.6bcca6p-54f,
     0.0f, 0x1.adb5b2p-96f, 0.0f, 0.0f, 0.0f, 0x1.c3576p-28f, 0x1.bfc652p-29f,
     0x1.67cffep-53f, 0.0f, 0x1.95e83p-84f, 0x1.244e52p-83f, 0.0f, 0x1.34168ap-36f,
     0.0f, 0.0f, 0x1.ab90cep-83f, 0.0f, 0.0f, 0.0f, 0x1.f855e8p-85f, 0.0f, 0.0f,
     0x1.67f3dp-37f, 0.0f, 0x1.298934p-53f, 0x1.86302p-125f, 0.0f, 0.0f,
     0x1.e71ad6p-54f, 0.0f, 0x1.46067p-86f, 0x1.f09c9ep-75f, 0.0f, 0x1.da6d96p-73f,
     0x1.58118ap-6f, 0.0f, 0.0f, 0.0f, 0x1.ee995ep-66f, 0.0f, 0x1.72754p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4a5316p-18f, 0x1.d30e16p-72f, 0.0f, 0.0f, 0x1.74732ep-116f,
     0x1.c724d4p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fc9e8p-125f, 0.0f, 0x1.030dc2p-25f,
     0x1.0f515p-124f, 0.0f, 0x1.0537ap-105f, 0x1.9be9eap-4f, 0.0f, 0x1.1815bap-103f,
     0.0f, 0.0f, 0x1.1cd978p-4f, 0x1.9035a4p-106f, 0x1.9e916ap-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bb4b8cp-44f, 0.0f, 0x1.52e26cp-105f, 0.0f, 0x1p0f, 0x1.d66de4p-25f,
     0.0f, 0.0f, 0.0f, 0x1.f4bb9ep-110f, 0.0f, 0x1.05c142p-86f, 0x1.640da4p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2fb4ep-95f, 0x1.da617p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f8dc8p-109f, 0.0f, 0.0f, 0x1.523aeep-112f, 0x1.008e9ap-25f, 0.0f, 0.0f,
     0.0f, 0x1.329ae8p-115f, 0x1.53dc3p-17f, 0x1.59d9fcp-118f, 0.0f, 0.0f, 0.0f,
     0x1.e3c326p-33f, 0.0f, 0x1.ad2deap-50f, 0x1.ceedb8p-59f, 0.0f, 0x1.97f01ap-50f,
     0.0f, 0x1.6d404cp-40f, 0.0f, 0.0f, 0x1.77e722p-24f, 0.0f, 0.0f, 0x1.2d2712p-95f,
     0.0f, 0x1.bf63b2p-107f, 0x1.3d1f02p-14f, 0.0f, 0.0f, 0.0f, 0x1.2d39cep-5f, 0.0f,
     0.0f, 0x1.3e089ap-18f, 0.0f, 0x1.947a4ap-93f, 0.0f, 0.0f, 0x1.cf64ccp-77f, 0.0f,
     0x1.10f6e6p-122f, 0.0f, 0x1.63eb88p-53f, 0.0f, 0x1.249526p-60f, 0x1.4abfap-30f,
     0x1.f0b11cp-125f, 0x1.b16c5cp-120f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0.0f, 0x1.5ab66ep-73f, 0x1.a9f27cp-31f, 0x1.dc075ap-92f, 0x1.5c875ep-4f,
     0.0f, 0x1.b12ab6p-125f, 0x1.6ae2f8p-116f, 0.0f, 0x1.27f648p-86f, 0x1.eac332p-2f,
     0.0f, 0x1.0f1566p-50f, 0.0f, 0.0f, 0x1.01960ep-21f, 0.0f, 0.0f, 0x1.6a21e2p-65f,
     0x1.f7ae96p-59f, 0x1.881a02p-35f, 0x1.fea30ap-76f, 0x1.e0c022p-110f, 0.0f,
     0x1.4c6c42p-98f, 0.0f, 0.0f, 0.0f, 0x1.f9b12cp-90f, 0.0f, 0.0f, 0x1.1441b4p-34f,
     0x1.cd632cp-11f, 0.0f, 0x1.3b50a4p-65f, 0x1.76aef2p-49f, 0.0f, 0x1.e0f764p-90f,
     0.0f, 0x1.de5604p-15f, 0.0f, 0x1.67efbep-8f, 0x1.69953cp-3f, 0x1.b85ac8p-112f,
     0x1.46f686p-58f, 0x1.b38ddap-15f, 0.0f, 0x1.f6ee6p-103f, 0x1.1d340cp-118f,
     0x1.ee15ap-45f, 0.0f, 0x1.ec710cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9e31dcp-91f, 0.0f, 0x1.d84b4ep-27f, 0x1.5d7814p-29f,
     0x1.5e21bap-13f, 0x1.4338f2p-108f, 0x1.2c0598p-8f, 0.0f, 0x1.11dbfp-54f,
     0x1.e6aee4p-120f, 0.0f, 0x1.a75c64p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.626c0ap-105f, 0x1.7cb9b6p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5ddc6p-25f,
     0x1.d61c36p-61f, 0x1.c6b064p-75f, 0.0f, 0x1.a75edp-120f, 0.0f, 0.0f,
     0x1.8e3692p-82f, 0x1.a37bcp-122f, 0.0f, 0x1.06350cp-69f, 0x1.491152p-8f,
     0x1.84f65p-12f, 0x1.6a7368p-114f, 0.0f, 0.0f, 0x1.ce9cb4p-94f, 0.0f,
     0x1.70059p-19f, 0.0f, 0x1.ccde08p-21f, 0.0f, 0x1.87fc44p-104f, 0.0f, 0x1p0f,
     0x1.b094c6p-83f, 0x1.7f0e3cp-51f, 0.0f, 0x1.90a5ecp-108f, 0x1.dbb336p-49f,
     0x1.5029ap-100f, 0x1.eb101p-31f, 0x1.d3bcc4p-29f, 0x1.9e9d6ep-85f,
     0x1.bda9e8p-14f, 0.0f, 0.0f, 0x1.ecb6b8p-118f, 0.0f, 0x1.97a888p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.824cdp-98f, 0x1.a65a3p-123f, 0x1.5ed4b8p-46f,
     0x1.64c828p-99f, 0x1.7fb90ep-15f, 0x1.ed632ep-73f, 0x1.95ceb6p-16f, 0.0f,
     0x1.174cp-22f, 0x1.ac8d82p-112f, 0.0f, 0x1.f619ecp-40f, 0.0f, 0.0f,
     0x1.55fed2p-4f, 0.0f, 0x1.11775p-96f, 0x1.cfee1p-89f, 0.0f, 0x1.1c69eep-17f,
     0x1.2838b6p-102f, 0x1.59f112p-16f, 0.0f, 0x1.e7c086p-28f, 0.0f, 0x1.2f35p-62f,
     0x1.5d7078p-2f, 0.0f, 0x1.e51608p-41f, 0.0f, 0x1.29872ap-65f, 0.0f,
     0x1.dc0d3cp-111f, 0.0f, 0.0f, 0x1.3cc7bep-70f, 0x1.c273c6p-71f, 0.0f,
     0x1.1acdbp-46f, 0.0f, 0x1.67ccb2p-100f, 0.0f, 0x1p0f, 0.0f, 0x1.dff1a2p-84f,
     0x1.4158cep-102f, 0x1.cfeb28p-121f, 0x1.d03b8p-91f, 0x1.9860cep-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7dd3aap-13f, 0x1.735d02p-55f, 0x1.d5a246p-17f, 0.0f, 0.0f,
     0x1p0f, 0x1.6ade88p-14f, 0.0f, 0.0f, 0x1.a770aep-53f, 0.0f, 0x1.04b2d2p-37f,
     0x1.ab8c8cp-122f, 0x1.19e35p-103f, 0.0f, 0.0f, 0x1.c925f4p-66f, 0.0f,
     0x1.4d247cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79b2d2p-10f, 0.0f, 0x1.014e7ep-4f,
     0x1.e8f7f6p-41f, 0.0f, 0.0f, 0x1.c07d26p-20f, 0.0f, 0x1.c4cbe2p-110f, 0.0f, 0.0f,
     0.0f, 0x1.f37e3ap-71f, 0.0f, 0.0f, 0.0f, 0x1.595a1p-56f, 0x1.d4b00ep-51f, 0.0f,
     0x1.41deecp-85f, 0.0f, 0x1.7b8b3ep-45f, 0.0f, 0x1.e09eb4p-5f, 0.0f, 0.0f,
     0x1.bde6e2p-1f, 0.0f, 0.0f, 0x1.07fb7p-76f, 0.0f, 0x1.6cde5p-7f, 0x1.46a934p-90f,
     0x1.a17e3cp-61f, 0x1.db2352p-33f, 0x1.4e8812p-69f, 0x1.2b0b6ap-115f, 0.0f, 0.0f,
     0x1.c788c2p-34f, 0x1.d597b2p-35f, 0.0f, 0x1.f095cp-34f, 0.0f, 0.0f,
     0x1.6110a6p-43f, 0x1.127e84p-29f, 0x1.aa068p-98f, 0.0f, 0.0f, 0x1.4cd082p-24f,
     0x1.699a42p-109f, 0x1.b1e802p-79f, 0x1.ebce0cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.712656p-31f, 0x1.37630cp-102f, 0.0f, 0x1.5d1728p-80f, 0.0f, 0.0f,
     0x1.3728a4p-117f, 0x1.151adep-100f, 0.0f, 0.0f, 0x1.4933f6p-81f, 0x1.7ed496p-10f,
     0.0f, 0x1.f02e14p-73f, 0x1.ffc23p-66f, 0.0f, 0.0f, 0x1.e89a36p-30f,
     0x1.547e5p-125f, 0.0f, 0x1.9dab9p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6dadp-61f,
     0x1.d98fecp-77f, 0.0f, 0.0f, 0x1.0016dap-39f, 0.0f, 0.0f, 0x1.aa0702p-115f,
     0x1.3eb11cp-74f, 0.0f, 0x1.7a4552p-69f, 0x1.b9eb6cp-78f, 0x1.6d4bap-69f, 0.0f,
     0x1.0d161p-53f, 0.0f, 0.0f, 0x1.59250ap-27f, 0x1.6e692cp-99f, 0x1.83e16ep-38f,
     0.0f, 0x1.789082p-71f, 0.0f, 0x1.207d22p-65f, 0x1.06064cp-97f, 0.0f,
     0x1.e0e0d4p-36f, 0x1.d0956cp-63f, 0.0f, 0.0f, 0.0f, 0x1.5796c6p-46f, 0.0f,
     0x1.73b33ep-21f, 0.0f, 0x1.a5d14p-109f, 0.0f, 0.0f, 0.0f, 0x1.202a22p-62f,
     0x1.4392f2p-92f, 0.0f, 0x1.2fb4fp-57f, 0x1.ca3a5ap-6f, 0.0f, 0.0f, 0.0f,
     0x1.fa8afap-44f, 0.0f, 0x1.a5114ep-48f, 0x1.f011d4p-107f, 0.0f, 0.0f,
     0x1.c3438ep-69f, 0.0f, 0.0f, 0.0f, 0x1.a296ccp-126f, 0x1.e51b34p-103f, 0.0f,
     0.0f, 0x1.e19a0ap-84f, 0.0f, 0x1.694e84p-8f, 0.0f, 0x1.e257acp-89f,
     0x1.36126ap-5f, 0.0f, 0.0f, 0.0f, 0x1.16f7a8p-85f, 0x1.89632cp-1f, 0.0f, 0.0f,
     0x1.c1d70ep-112f, 0.0f, 0x1.e29d6ep-114f, 0x1.5ce49cp-45f, 0x1.c0bd0cp-5f, 0.0f,
     0x1.e09674p-91f, 0x1.34f2f8p-60f, 0x1.78d6cap-55f, 0x1.d5f3c4p-50f,
     0x1.38772p-33f, 0.0f, 0.0f, 0.0f, 0x1.802eb6p-99f, 0x1.4e1702p-16f, 0.0f, 0.0f,
     0.0f, 0x1.685c5cp-49f, 0x1.228098p-85f, 0x1.32a2d4p-102f, 0.0f, 0x1.61cb5ap-119f,
     0.0f, 0.0f, 0x1.152f0ap-56f, 0.0f, 0x1.9efd54p-125f, 0.0f, 0x1.3bd854p-61f, 0.0f,
     0.0f, 0.0f, 0x1.c69b78p-41f, 0x1.163556p-57f, 0x1.e7b83p-16f, 0x1.3a3c5cp-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2dbecp-62f, 0x1p0f, 0x1.d67f62p-54f,
     0x1.1c53eep-84f, 0.0f, 0x1.dc6812p-3f, 0x1.19363p-114f, 0x1.2f68cp-88f, 0.0f,
     0x1.d3e42ep-14f, 0.0f, 0.0f, 0x1.3bbfe2p-70f, 0.0f, 0.0f, 0x1.728fdep-68f,
     0x1.3ca48p-84f, 0.0f, 0x1.53af3p-92f, 0.0f, 0.0f, 0x1.6f1ed2p-15f, 0.0f, 0.0f,
     0x1p0f, 0x1.b8eeb2p-2f, 0x1.7cf8dcp-26f, 0x1.a0cc1p-21f, 0.0f, 0x1.c4668ap-46f,
     0.0f, 0x1.d238fp-54f, 0.0f, 0.0f, 0.0f, 0x1.81d478p-99f, 0x1.a7cc2cp-83f, 0.0f,
     0x1.76d2d4p-51f, 0x1.230a3ep-53f, 0x1.11e074p-57f, 0x1.4374fp-49f,
     0x1.2de42ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfa5fep-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d12c2p-64f, 0.0f, 0x1.2fc1d2p-103f, 0.0f,
     0x1.71f578p-60f, 0x1.40860ap-12f, 0x1.791982p-79f, 0.0f, 0x1.8d654ep-122f, 0.0f,
     0x1.642972p-12f, 0x1.d8a744p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45a79ap-39f, 0.0f,
     0x1.b85f9ep-54f, 0.0f, 0.0f, 0.0f, 0x1.059a16p-119f, 0.0f, 0x1.27ddf6p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de8c48p-5f, 0x1.654282p-94f,
     0.0f, 0x1.5e95a4p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c63e96p-99f, 0x1.8ac348p-27f,
     0x1.ca226p-111f, 0x1.858132p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2cc6d2p-113f, 0x1.93e45cp-74f, 0.0f, 0x1.666366p-67f, 0.0f, 0x1.528d84p-46f,
     0.0f, 0x1.aca6aap-34f, 0.0f, 0x1.553adap-108f, 0x1.3e7c5cp-100f,
     0x1.6a4cf8p-111f, 0x1.fd504ep-29f, 0x1.2f768cp-22f, 0.0f, 0.0f, 0x1.6f229ap-119f,
     0x1.9669f2p-49f, 0.0f, 0x1.12a8bcp-12f, 0.0f, 0x1.f381d2p-33f, 0x1.b91258p-121f,
     0.0f, 0x1.14cfd8p-80f, 0x1.6260c8p-113f, 0x1.8f2f7p-98f, 0x1.75d64ap-14f, 0.0f,
     0x1.199762p-86f, 0x1.2b1cf8p-119f, 0x1.259074p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6169fep-21f, 0.0f, 0x1.a2f8f8p-1f, 0.0f, 0x1.73683p-4f, 0x1.0d7586p-92f,
     0x1.048212p-25f, 0.0f, 0x1.eb167p-114f, 0.0f, 0.0f, 0x1.c3a676p-76f, 0.0f, 0.0f,
     0x1.e66cf2p-35f, 0x1.9066aep-45f, 0x1.d7da5cp-126f, 0.0f, 0.0f, 0x1.0d191cp-38f,
     0x1.fe0486p-98f, 0x1.1eebfp-94f, 0.0f, 0x1.ad161p-124f, 0.0f, 0x1.015a68p-39f,
     0x1.0df4bap-119f, 0x1.009ecep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.420d38p-39f, 0x1.afe108p-106f, 0.0f, 0.0f, 0x1.bc5b32p-59f, 0x1.7aa2aap-65f,
     0.0f, 0x1.d321p-34f, 0.0f, 0x1.ed12e8p-102f, 0x1.f7dec4p-10f, 0.0f,
     0x1.206a16p-29f, 0.0f, 0x1.c094f6p-105f, 0x1.6ad55p-59f, 0x1.4bc77cp-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.18fb48p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba05d4p-73f, 0.0f, 0x1.a699cp-87f, 0.0f, 0.0f, 0x1.aa0bb6p-12f,
     0x1.679e4ep-42f, 0.0f, 0x1.0726bep-10f, 0.0f, 0x1.0f6cc4p-25f, 0x1.a6e4eep-112f,
     0x1.96dd86p-4f, 0x1.2f954cp-45f, 0.0f, 0.0f, 0x1.3660a8p-63f, 0.0f,
     0x1.13769ep-30f, 0x1.c8f3a6p-104f, 0x1.686f82p-97f, 0x1.07846ep-99f,
     0x1.e328fep-6f, 0x1.8196e8p-20f, 0.0f, 0x1.8c41b8p-107f, 0.0f, 0.0f, 0.0f,
     0x1.22dfdp-78f, 0.0f, 0x1.b6fcbep-14f, 0x1.7097acp-13f, 0x1.17e8bp-62f, 0.0f,
     0x1.e04784p-8f, 0x1.738ceep-59f, 0x1.af0f5cp-37f, 0x1.7f2a94p-75f,
     0x1.e4bbacp-67f, 0x1.dcd95ap-56f, 0x1.ccc696p-117f, 0.0f, 0.0f, 0x1.f4d3a8p-70f,
     0x1.9d5a2ap-120f, 0.0f, 0.0f, 0x1.023512p-41f, 0.0f, 0x1.ea2f5ep-25f,
     0x1.3065d8p-83f, 0.0f, 0x1.8a544ep-55f, 0x1.cbb6c2p-2f, 0.0f, 0.0f, 0.0f,
     0x1.5873ap-40f, 0.0f, 0.0f, 0.0f, 0x1.dc2508p-9f, 0.0f, 0x1.9e8896p-48f, 0.0f,
     0x1.8b85e8p-102f, 0x1.0581b2p-98f, 0x1.6d0d6ap-11f, 0.0f, 0x1.8906fp-57f, 0.0f,
     0x1.2e9ba8p-93f, 0.0f, 0.0f, 0.0f, 0x1.d27008p-79f, 0x1.163762p-100f, 0.0f,
     0x1.5807f4p-2f, 0x1.3625acp-5f, 0.0f, 0x1.a077e2p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.96387p-17f, 0x1.849fbap-103f, 0.0f, 0.0f, 0.0f, 0x1.d9c4e8p-47f, 0.0f,
     0x1.c2bd06p-119f, 0x1.b38f68p-89f, 0x1.1d7d32p-10f, 0x1.c1bb4cp-18f, 0.0f,
     0x1.06553ap-80f, 0.0f, 0x1p0f, 0x1.983198p-109f, 0.0f, 0.0f, 0x1.ed465p-115f,
     0.0f, 0.0f, 0x1.5fb18p-91f, 0x1.3965f2p-115f, 0x1.43075ap-52f, 0x1.43ff52p-42f,
     0.0f, 0x1.f8fe8p-85f, 0.0f, 0.0f, 0x1.d3e6cp-59f, 0.0f, 0.0f, 0.0f,
     0x1.fcef1p-1f, 0x1.792df6p-70f, 0.0f, 0.0f, 0x1.3621d2p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.036178p-40f, 0x1.3f6574p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.113238p-79f, 0x1.462cecp-107f, 0x1.d98704p-38f, 0x1.c3efe2p-113f,
     0x1.20ced2p-14f, 0x1.3a5d7p-101f, 0x1.1265c2p-126f, 0x1.a5b37p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e86124p-65f, 0x1.4d2af4p-93f, 0x1.12a0bap-3f, 0.0f,
     0.0f, 0x1.8d0ec2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75b02cp-6f, 0.0f, 0.0f,
     0x1.077e26p-78f, 0x1.dfb31ep-121f, 0.0f, 0x1.09f96cp-123f, 0.0f, 0x1.950704p-83f,
     0x1.64e9e8p-83f, 0.0f, 0.0f, 0x1.827496p-112f, 0x1.67ac52p-6f, 0.0f,
     0x1.7a94b2p-23f, 0x1.e90c44p-70f, 0x1.50295p-117f, 0x1.1822d4p-114f, 0.0f, 0.0f,
     0x1.089e72p-58f, 0.0f, 0.0f, 0x1.b0cfdp-27f, 0.0f, 0x1.65ecbcp-52f,
     0x1.976a3cp-109f, 0x1.5432b2p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0da0dep-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0c26cp-78f, 0x1.3716f4p-25f, 0x1.5c5fdap-64f,
     0x1.801b4cp-45f, 0x1.ab57aap-83f, 0x1.79d494p-47f, 0.0f, 0x1.a92698p-71f,
     0x1.75c378p-4f, 0x1.36ad66p-37f, 0.0f, 0.0f, 0x1.7ef78cp-51f, 0x1.f80ac2p-28f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.2fd4e6p-37f, 0.0f, 0.0f, 0x1.861428p-100f, 0.0f,
     0.0f, 0x1.7f3418p-43f, 0.0f, 0x1.f221f6p-19f, 0x1.a62144p-125f, 0x1.c0de2ep-88f,
     0.0f, 0.0f, 0x1.99b766p-22f, 0x1.75f59ep-71f, 0.0f, 0.0f, 0.0f, 0x1.4d7a68p-46f,
     0.0f, 0x1.982e86p-112f, 0.0f, 0x1.a8c678p-17f, 0x1.3b22bep-39f, 0x1.b859c2p-47f,
     0x1.d9371cp-87f, 0.0f, 0x1.68cb6p-13f, 0x1.306d8ep-120f, 0x1.a3cf06p-79f, 0.0f,
     0.0f, 0x1.3f655cp-42f, 0x1.7e7764p-29f, 0x1.bfadc6p-105f, 0x1.d1740ap-84f,
     0x1.ca82d2p-5f, 0.0f, 0x1.40b3aep-4f, 0x1.32781ap-94f, 0x1.c8d922p-83f, 0.0f,
     0x1.0951b2p-93f, 0.0f, 0x1.112572p-68f, 0x1.158e78p-74f, 0.0f, 0.0f,
     0x1.560ac4p-102f, 0x1.0921cep-69f, 0x1.ec5eeep-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30f4acp-116f, 0x1.152ba6p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d109b6p-20f, 0.0f,
     0.0f, 0x1.c3e3p-107f, 0x1.a4b394p-8f, 0x1.f60556p-76f, 0.0f, 0x1.8fc888p-16f,
     0x1.c98614p-67f, 0.0f, 0x1.4abd3ap-100f, 0.0f, 0x1.94f752p-33f, 0x1.cf4674p-80f,
     0x1.ae41f4p-94f, 0x1.baee56p-26f, 0x1.3a6506p-50f, 0x1.6b0c6p-118f, 0.0f, 0.0f,
     0.0f, 0x1.0ff968p-90f, 0x1.3e33d4p-18f, 0.0f, 0x1.7e039p-39f, 0x1.2be24cp-19f,
     0x1.450dc8p-7f, 0.0f, 0.0f, 0x1.669a34p-52f, 0.0f, 0x1.4fbf4cp-85f,
     0x1.66b34cp-17f, 0x1.a8c7ecp-40f, 0x1.3b49dap-54f, 0.0f, 0x1.befbcp-112f, 0.0f,
     0.0f, 0.0f, 0x1.8165b2p-106f, 0.0f, 0.0f, 0x1.f1470ap-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.47fc5p-42f, 0.0f, 0.0f, 0x1.62c0fep-26f, 0x1.fce934p-83f,
     0x1.e34f5cp-114f, 0x1.c93f5p-91f, 0.0f, 0x1.49231p-100f, 0x1.9c0306p-101f,
     0x1.eda60ap-123f, 0x1.6208fep-6f, 0x1.de32cap-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65d524p-115f, 0.0f, 0x1.254c04p-88f, 0.0f, 0x1.393972p-45f, 0x1.816898p-124f,
     0.0f, 0x1.4775a8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ffc56p-83f, 0.0f, 0.0f,
     0x1.b7a5bp-124f, 0.0f, 0x1.7c6dd2p-41f, 0x1.39ed2ep-65f, 0x1.b9a392p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f8b93p-59f, 0x1.1fce08p-38f, 0.0f, 0x1.e0a394p-81f, 0.0f,
     0x1.c83498p-57f, 0x1.bbd04ep-47f, 0x1.858de6p-90f, 0x1.51e4d8p-117f,
     0x1.a40956p-70f, 0.0f, 0x1.86dd2ep-55f, 0.0f, 0.0f, 0.0f, 0x1.a71e38p-29f,
     0x1.0d5306p-80f, 0x1.101bdep-114f, 0.0f, 0.0f, 0x1.e9fcf4p-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5343dep-70f, 0.0f
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
            tmp2 = Sleef_powf8_u10kvx(tmp0, tmp1);
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
    printf("Sleef_powf8_u10kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_powf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
