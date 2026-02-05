/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_nextafterf8_kvx.c --function \
 *     Sleef_finz_nextafterf8_kvx --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6558dcp-8f, 0x1.61649ep-104f,
     0x1.29fc7ap-102f, 0x1.7bb466p-55f, 0x1.da722ep-79f, 0.0f, 0x1.f30ea2p-103f,
     0x1.8127p-29f, 0x1.26864ap-37f, 0.0f, 0x1.f716fcp-102f, 0x1.deed4ep-42f,
     0x1.dd9eeep-64f, 0x1.f87caap-80f, 0.0f, 0x1.0b599p-59f, 0x1.866e1cp-43f,
     0x1.0723e6p-23f, 0x1.be1ceep-79f, 0x1.206072p-2f, 0x1.0d7fd8p-33f,
     0x1.c69b38p-118f, 0.0f, 0x1.4e12e6p-108f, 0x1.6104acp-48f, 0.0f, 0.0f,
     0x1.ed937p-42f, 0.0f, 0x1.3d11d8p-114f, 0x1.7da4f4p-3f, 0x1.ba0c7p-89f,
     0x1.48f3aep-1f, 0.0f, 0x1.11d3c2p-40f, 0x1.238134p-105f, 0.0f, 0.0f,
     0x1.348fb6p-29f, 0.0f, 0.0f, 0x1.2f22dep-44f, 0x1.6b7c8ep-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bd0acp-33f, 0x1.47ac68p-36f, 0x1.fc8192p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.11b2b8p-10f, 0.0f, 0x1.d8d4d8p-97f, 0.0f, 0x1.55108cp-82f,
     0x1.d0afdap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d930eep-96f, 0.0f,
     0x1.b294p-7f, 0.0f, 0x1.c00cfap-91f, 0.0f, 0x1.e69d1cp-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.643bc4p-27f, 0x1.052db6p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e50f56p-18f, 0x1.e71444p-91f, 0.0f,
     0x1.4bd32ep-94f, 0x1.b10e26p-33f, 0x1.714018p-30f, 0.0f, 0x1.d7268p-37f,
     0x1.d70baep-40f, 0x1.6e34dap-124f, 0.0f, 0x1.395cf6p-32f, 0.0f, 0.0f,
     0x1.a53496p-41f, 0.0f, 0x1.22a1b8p-76f, 0.0f, 0x1.fdb3e8p-95f, 0x1.937d2ap-95f,
     0.0f, 0x1.3f028p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c498bep-20f, 0x1.0856eep-12f,
     0.0f, 0.0f, 0x1.61ded6p-13f, 0x1.8c88cap-50f, 0x1.fe5d74p-87f, 0.0f,
     0x1.8b98fep-109f, 0x1.87d5fep-13f, 0.0f, 0.0f, 0x1.f03868p-73f, 0x1.c04f2p-39f,
     0.0f, 0x1.bc5926p-119f, 0.0f, 0.0f, 0.0f, 0x1.56a93p-78f, 0x1.b3d87ap-80f, 0.0f,
     0x1.f864fap-104f, 0x1.4dd3p-54f, 0x1.6280ecp-46f, 0x1.8bb874p-98f, 0.0f,
     0x1.f1ae44p-81f, 0.0f, 0x1.c9765cp-65f, 0x1.0ad0aep-17f, 0x1.c0cc22p-44f, 0.0f,
     0.0f, 0x1.5275a4p-93f, 0x1.226358p-26f, 0x1.5925b6p-52f, 0x1.ec9152p-92f, 0.0f,
     0.0f, 0.0f, 0x1.23558ep-17f, 0x1.c3bd32p-31f, 0.0f, 0x1.40be04p-23f,
     0x1.97a442p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce960ep-86f, 0x1.ecf21p-61f, 0.0f,
     0x1.6ec668p-120f, 0x1.3361e6p-60f, 0x1.766d9cp-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d8612p-25f, 0.0f, 0x1.4ec0d6p-24f, 0x1.d1e7c4p-11f, 0x1.7e754ep-15f, 0.0f,
     0.0f, 0x1.db5b4p-123f, 0x1.991b3ep-125f, 0x1.7cd794p-108f, 0x1.1b8c74p-13f,
     0x1.7199a2p-45f, 0x1.bec738p-40f, 0x1.1cd372p-90f, 0.0f, 0x1.a2091ap-60f, 0.0f,
     0x1.38a652p-11f, 0x1.ef0174p-53f, 0x1.16e7f6p-11f, 0.0f, 0.0f, 0x1.fd328cp-118f,
     0.0f, 0x1.3d3208p-3f, 0.0f, 0x1.1e8d9ep-12f, 0x1.9ed394p-76f, 0.0f,
     0x1.0551b8p-13f, 0x1.dc38e6p-48f, 0.0f, 0x1.0bf01cp-42f, 0x1.f7ce48p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1ee42ep-82f, 0x1.b05e5ap-35f, 0x1.5161bep-120f,
     0x1.33bf24p-52f, 0x1.99a3acp-89f, 0x1.964cd4p-80f, 0.0f, 0.0f, 0x1.6cca7ap-62f,
     0x1.6c1a64p-47f, 0.0f, 0x1.41508ap-17f, 0.0f, 0.0f, 0.0f, 0x1.500aa6p-14f, 0.0f,
     0.0f, 0.0f, 0x1.112138p-118f, 0x1.1e670ap-124f, 0.0f, 0x1.95202ap-81f,
     0x1.5900c8p-47f, 0x1.ffae74p-93f, 0.0f, 0x1.b15aap-86f, 0x1.c8493cp-24f,
     0x1.eeac06p-111f, 0x1.429502p-97f, 0.0f, 0x1.12a66p-59f, 0.0f, 0x1.eec0ap-60f,
     0x1.04f47ep-44f, 0x1.9e5f56p-9f, 0.0f, 0.0f, 0x1.01d122p-36f, 0.0f,
     0x1.6a9c8cp-111f, 0x1.49646p-105f, 0.0f, 0.0f, 0x1.a886a4p-19f, 0x1.9825bap-119f,
     0.0f, 0x1.ce7acap-33f, 0.0f, 0x1.006144p-84f, 0.0f, 0x1.e1b3c4p-29f,
     0x1.713c3ap-69f, 0.0f, 0.0f, 0x1.8b72fep-55f, 0.0f, 0x1.9bdd24p-18f, 0.0f, 0.0f,
     0.0f, 0x1.7d648p-62f, 0x1.f9c1f4p-22f, 0x1.b1529ap-57f, 0.0f, 0x1.c15504p-49f,
     0.0f, 0x1.28e522p-95f, 0.0f, 0x1.84c4d2p-31f, 0x1.7bd0c2p-110f, 0x1.a3dec8p-38f,
     0.0f, 0x1.f3cbap-9f, 0.0f, 0.0f, 0.0f, 0x1.15ffdcp-26f, 0.0f, 0.0f, 0.0f,
     0x1.badc88p-106f, 0.0f, 0.0f, 0.0f, 0x1.aad818p-97f, 0x1.eec0c6p-100f,
     0x1.828132p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66107cp-77f,
     0x1.7495a8p-94f, 0.0f, 0x1.3a009cp-92f, 0x1.cc6258p-45f, 0.0f, 0x1.02fd24p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.90e25ep-111f, 0x1.9eadf4p-70f, 0x1.fea962p-33f,
     0x1.4c7d6ep-56f, 0.0f, 0.0f, 0x1.a4af32p-42f, 0.0f, 0x1.a80758p-39f, 0.0f,
     0x1.8b9026p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.527662p-21f, 0.0f, 0x1.7ae0b6p-118f,
     0.0f, 0x1.5edabcp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e5694p-84f, 0.0f, 0.0f, 0x1.31f962p-126f, 0x1.dbb2b4p-97f, 0x1.58ab26p-81f,
     0.0f, 0.0f, 0x1.112e08p-72f, 0x1.38c578p-41f, 0x1.0496a4p-126f, 0x1.089d7cp-67f,
     0.0f, 0.0f, 0.0f, 0x1.f6eb22p-102f, 0.0f, 0x1.0bb4eap-35f, 0x1.caaee6p-2f,
     0x1.4302f8p-105f, 0x1.a350c8p-81f, 0.0f, 0x1.414b2ap-25f, 0.0f, 0x1.c9d23p-41f,
     0.0f, 0.0f, 0x1.c9ebeap-45f, 0x1.5ac39cp-114f, 0.0f, 0.0f, 0x1.ccb9cap-55f, 0.0f,
     0.0f, 0x1.b91038p-93f, 0.0f, 0.0f, 0x1.2e8adep-48f, 0x1.fb6feap-11f, 0.0f,
     0x1.de628ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64eecp-95f,
     0x1.7773b4p-14f, 0x1.1ce614p-57f, 0x1.2b3128p-32f, 0x1.77957ep-54f,
     0x1.69971ep-30f, 0x1.bd64bp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.833d4ep-55f,
     0.0f, 0.0f, 0x1.37517ap-66f, 0x1.862322p-63f, 0.0f, 0x1.18bac6p-50f, 0.0f, 0.0f,
     0x1.5883cep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e978cp-75f, 0.0f, 0x1.671358p-71f,
     0.0f, 0x1.dc164cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be8b18p-111f,
     0x1.aa2c2cp-52f, 0x1.ce8546p-1f, 0.0f, 0x1.c6f37ep-29f, 0x1.704826p-102f,
     0x1.a3bc92p-105f, 0x1.e2ed24p-12f, 0x1.f53002p-52f, 0x1.ad51d4p-71f, 0.0f,
     0x1.498f32p-107f, 0x1.d2cbap-47f, 0.0f, 0x1.a8146ep-91f, 0.0f, 0x1.d25f18p-30f,
     0.0f, 0x1.5a0034p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b435p-108f, 0.0f,
     0x1.5915cep-65f, 0x1.d85c0cp-115f, 0x1.224dbp-20f, 0x1.7306d8p-86f, 0.0f,
     0x1.a19b5p-73f, 0x1.53efa6p-12f, 0.0f, 0.0f, 0.0f, 0x1.3c437ap-87f,
     0x1.cbe8e6p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67b082p-91f, 0x1.2f0a6ep-70f,
     0x1.55600ap-76f, 0x1.a987bp-30f, 0x1.f6b292p-121f, 0x1.de69b2p-103f,
     0x1.2abcdp-92f, 0x1.b00e74p-71f, 0x1.946ae6p-54f, 0x1.1d7c3cp-122f, 0.0f,
     0x1.7706aap-121f, 0x1.06df12p-31f, 0x1.8410fap-16f, 0.0f, 0x1.31effap-98f, 0.0f,
     0x1.93ce14p-27f, 0x1.2bf71cp-13f, 0x1.f2bc4ep-45f, 0x1.ffbf8ep-99f, 0.0f,
     0x1.f5eaa8p-45f, 0.0f, 0x1.6494ap-50f, 0x1.12f128p-114f, 0x1.861884p-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.649382p-14f, 0.0f, 0x1.5a38e4p-47f, 0.0f,
     0x1.2fa8d2p-105f, 0.0f, 0x1.a4a306p-112f, 0.0f, 0.0f, 0x1.d2c69p-68f,
     0x1.4c55d6p-99f, 0x1.a6dca2p-102f, 0x1.c1ff24p-124f, 0.0f, 0x1.0fc1ep-53f, 0.0f,
     0.0f, 0x1.aa8a92p-110f, 0x1.05157p-81f, 0x1.ea3e8cp-56f, 0x1.aba57ep-72f,
     0x1.4f71fcp-55f, 0x1.969d3ap-57f, 0.0f, 0.0f, 0x1.05ee9ap-38f, 0.0f,
     0x1.dda9f8p-25f, 0x1.667d98p-10f, 0x1.8171ecp-110f, 0x1.aafe6p-103f,
     0x1.4a872ep-39f, 0.0f, 0x1.8edfb6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.faa9acp-23f, 0.0f, 0x1.465c3ep-70f, 0x1.8df268p-65f, 0x1.1e4f7cp-80f, 0.0f,
     0x1.52ab72p-28f, 0x1.9db62ap-33f, 0.0f, 0.0f, 0x1.256b52p-18f, 0.0f,
     0x1.e493bap-57f, 0x1.5dbee2p-106f, 0.0f, 0x1.8960cp-29f, 0x1.91ba06p-11f,
     0x1.5612dp-38f, 0.0f, 0x1.078decp-123f, 0.0f, 0.0f, 0.0f, 0x1.89f34ap-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4df4cp-98f, 0.0f, 0x1.030a5p-92f, 0x1.b1dd26p-16f,
     0.0f, 0x1.7dbb9ap-56f, 0.0f, 0x1.b147aap-100f, 0.0f, 0x1.d5fd54p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.24a738p-22f, 0.0f, 0x1.4563bep-7f, 0x1.b90f04p-66f,
     0x1.aed31ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d37b6p-52f, 0.0f, 0x1.42c22ap-37f,
     0x1.cebea2p-98f, 0.0f, 0x1.c199bcp-124f, 0.0f, 0.0f, 0.0f, 0x1.1de9a2p-109f,
     0x1.74f17cp-93f, 0x1.f89542p-81f, 0x1.a0d9bep-122f, 0.0f, 0x1.505f1p-61f, 0.0f,
     0.0f, 0.0f, 0x1.375852p-78f, 0x1.15138p-94f, 0.0f, 0.0f, 0x1.b453d2p-12f, 0.0f,
     0.0f, 0x1.f2cc9cp-51f, 0x1.8190cap-52f, 0x1.187d78p-9f, 0.0f, 0x1.6303b4p-124f,
     0x1.9d096p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8bedcp-69f, 0.0f, 0.0f,
     0x1.88f0b2p-10f, 0x1.b169cap-111f, 0.0f, 0.0f, 0x1.43fdeap-38f, 0.0f, 0.0f,
     0x1.b4b8b2p-126f, 0x1.adc364p-34f, 0.0f, 0.0f, 0.0f, 0x1.2c8f74p-88f,
     0x1.4a509cp-121f, 0.0f, 0x1.7c0942p-102f, 0.0f, 0x1.ccf7f2p-22f,
     0x1.a1c6a2p-109f, 0x1.0f4a22p-86f, 0.0f, 0x1.e7712p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e4b504p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.215c02p-117f, 0.0f,
     0x1.444cd2p-2f, 0.0f, 0.0f, 0x1.c8249ap-125f, 0x1.0c9a1ap-77f, 0.0f, 0.0f, 0.0f,
     0x1.75bbc4p-115f, 0x1.c0ab46p-70f, 0x1.72e30ep-51f, 0.0f, 0x1.13c9dap-12f, 0.0f,
     0x1.d9f40ep-43f, 0x1.d9536p-53f, 0x1.96b7f2p-67f, 0.0f, 0x1.449272p-103f, 0.0f,
     0x1.10c2e4p-85f, 0x1.99b7aep-79f, 0x1.d802a8p-124f, 0x1.c65514p-60f, 0.0f,
     0x1.05d6bcp-121f, 0x1.ffeb4ap-7f, 0.0f, 0x1.c3b54ap-50f, 0.0f, 0x1.8c5cb2p-93f,
     0.0f, 0.0f, 0x1.dd7022p-42f, 0.0f, 0x1.c10902p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e634p-105f, 0.0f, 0x1p0f, 0x1.08c934p-90f, 0.0f, 0x1.eac02p-102f,
     0x1.c422c2p-65f, 0x1.71502cp-61f, 0x1.b8c6ep-67f, 0.0f, 0x1.18734p-21f, 0.0f,
     0x1.7ba0dep-102f, 0x1.167ee8p-72f, 0x1.f4de92p-48f, 0x1.9ed48ap-89f,
     0x1.05d618p-67f, 0x1.9ee9d8p-118f, 0.0f, 0x1.37c534p-110f, 0.0f,
     0x1.3407f4p-117f, 0x1.afda92p-56f, 0x1.d36b6cp-59f, 0.0f, 0.0f, 0x1.ad0eb6p-14f,
     0.0f, 0x1.dd3f96p-81f, 0.0f, 0x1.5402cap-93f, 0.0f, 0.0f, 0x1.6b5334p-67f,
     0x1.77774p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28fc12p-126f, 0x1.9db078p-81f, 0.0f,
     0x1.5eedc8p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.171234p-14f, 0x1.6ea6f6p-55f, 0.0f,
     0.0f, 0.0f, 0x1.2f5fcep-35f, 0.0f, 0x1.ac8b52p-87f, 0.0f, 0.0f, 0x1.dba19ep-66f,
     0.0f, 0x1.5cb1dap-23f, 0x1p0f, 0x1.4f93fap-68f, 0x1.c724e6p-67f, 0.0f, 0.0f,
     0.0f, 0x1.8df8e2p-91f, 0x1.bf4d6ep-111f, 0x1.dc229ep-10f, 0.0f, 0x1.2c0962p-65f,
     0.0f, 0x1.1f62acp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdf7d4p-43f, 0x1.146e02p-60f,
     0x1.cc25dp-52f, 0x1.b7e3ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f10214p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6c768p-3f, 0x1.794dc4p-100f, 0x1.ba880ap-103f,
     0x1.789a4cp-30f, 0.0f, 0.0f, 0x1.3a440ep-46f, 0.0f, 0x1.323ab2p-88f, 0.0f,
     0x1.7d5a96p-77f, 0x1.d201ap-75f, 0.0f, 0.0f, 0.0f, 0x1.1a73bcp-90f,
     0x1.b674d8p-124f, 0x1.049c68p-62f, 0x1.a1c31ap-50f, 0.0f, 0.0f, 0x1.2003a8p-16f,
     0x1.2eb852p-65f, 0.0f, 0x1.df9608p-97f, 0.0f, 0x1.9b88e4p-60f, 0x1.83f20ap-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42c2a6p-72f, 0x1.06201ep-2f, 0.0f, 0.0f,
     0x1.931f1ap-11f, 0.0f, 0x1.4b0beap-47f, 0.0f, 0x1.e8a36ep-120f, 0x1.d48f48p-60f,
     0.0f, 0.0f, 0.0f, 0x1.cfba7ep-26f, 0.0f, 0x1.6348fcp-125f, 0x1.4d1452p-123f,
     0x1.cc33e2p-35f, 0x1.109f6cp-25f, 0x1.e12604p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.06f5e4p-81f, 0.0f, 0.0f, 0.0f, 0x1.17c12ep-118f, 0.0f, 0.0f, 0.0f,
     0x1.e42096p-57f, 0x1.dd824cp-120f, 0.0f, 0x1.d94554p-74f, 0x1.c426bep-117f,
     0x1.0fe7ecp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d56f2p-79f,
     0x1.df25bap-123f, 0x1.b3b00ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f14206p-52f,
     0x1.a13402p-114f, 0x1.bfb26cp-64f, 0x1.9bbf9ep-91f, 0.0f, 0.0f, 0x1.da04eap-75f,
     0x1.59810ep-45f, 0x1.c1b1aep-21f, 0x1.340c4ep-118f, 0x1.0919dap-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.93880ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.febfacp-105f,
     0x1.504f8ep-53f, 0x1.b5d1a2p-14f, 0.0f, 0x1.6e631cp-38f, 0.0f, 0.0f,
     0x1.ae8feap-123f, 0.0f, 0.0f, 0.0f, 0x1.689e2p-53f, 0x1.232f3ep-20f,
     0x1.0c2388p-99f, 0x1.8f72dap-26f, 0x1.932e32p-117f, 0x1.e50c1cp-126f,
     0x1.cc274ap-12f, 0x1.4163cep-64f, 0x1.7635dap-95f, 0x1.77a414p-46f,
     0x1.30fa02p-118f, 0x1.ebc144p-63f, 0.0f, 0x1.073a2ep-117f, 0.0f, 0x1.1fa00ep-54f,
     0.0f, 0x1.85a5cep-113f, 0x1.2bfc7ep-32f, 0x1.e0bd2p-47f, 0.0f, 0x1.8f8d84p-47f,
     0.0f, 0x1.06a5f2p-59f, 0.0f, 0.0f, 0x1.2a50a6p-121f, 0x1.03e794p-5f,
     0x1.58a4dp-73f, 0x1.50e682p-86f, 0.0f, 0.0f, 0x1.136afap-89f, 0x1.462dep-70f,
     0.0f, 0.0f, 0x1.52018cp-25f, 0x1.de82e2p-22f, 0.0f, 0x1.86e898p-47f,
     0x1.36a498p-126f, 0.0f, 0x1.f5404p-99f, 0.0f, 0x1.36f434p-11f, 0.0f,
     0x1.67f82p-68f, 0x1.837b5ap-43f, 0.0f, 0.0f, 0x1.6b6f74p-36f, 0.0f, 0.0f, 0.0f,
     0x1.a0b046p-62f, 0.0f, 0.0f, 0.0f, 0x1.06bd7ep-35f, 0.0f, 0.0f, 0.0f,
     0x1.a5d34p-15f, 0x1.5663ep-107f, 0x1.e68394p-77f, 0x1.7748acp-65f,
     0x1.b199aap-121f, 0.0f, 0x1.c1ed92p-99f, 0x1.42ac6p-95f, 0x1.da0e46p-25f,
     0x1.159952p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6003ap-49f, 0x1.964988p-47f,
     0x1.7c1c64p-78f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac57fp-121f, 0.0f, 0x1.be3e6ap-116f,
     0x1.8b3d5p-84f, 0.0f, 0.0f, 0x1.9e1732p-34f, 0x1.05e1bcp-69f, 0x1.8d8d48p-11f,
     0.0f, 0.0f, 0.0f, 0x1.40062cp-117f, 0x1.64d3c8p-23f, 0x1.b7f4aep-54f, 0.0f, 0.0f,
     0.0f, 0x1.99475ap-79f, 0x1.6893ccp-66f, 0x1.b5218ep-42f, 0.0f, 0x1.b2533ep-103f,
     0.0f, 0x1.c32168p-3f, 0x1.f3fc3ep-67f, 0x1.f4d54ep-42f, 0x1.2d8928p-83f, 0.0f,
     0.0f, 0x1.37d198p-86f, 0x1.6dc7fp-102f, 0x1.36381p-59f, 0x1.9c26fp-48f, 0.0f,
     0x1.524bd6p-111f, 0x1.916d06p-11f, 0x1.8a1192p-112f, 0x1.11aa8ap-77f,
     0x1.caeaep-73f, 0x1.25b3c6p-4f, 0.0f, 0x1.468336p-47f, 0x1.db84b4p-84f, 0.0f,
     0x1.67afccp-70f, 0.0f, 0x1.64c508p-91f, 0.0f, 0x1.078d98p-100f, 0x1.a1bba8p-6f,
     0x1.a9465cp-12f, 0x1.e4b3f4p-12f, 0.0f, 0.0f, 0.0f, 0x1.f3556ap-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1f8e46p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7892acp-66f, 0.0f,
     0x1.ca633ap-45f, 0x1.32a9a6p-107f, 0x1.1e5c7ap-32f, 0x1.ad7c8ap-89f,
     0x1.767564p-73f, 0x1.5f6e8ep-111f, 0.0f, 0x1.bdcbccp-117f, 0x1.eef17ep-118f,
     0.0f, 0.0f, 0x1.28d39ep-27f, 0.0f, 0.0f, 0x1.e89dd4p-50f, 0.0f, 0x1.209132p-64f,
     0x1p0f, 0x1.63e184p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0be526p-44f,
     0x1.a83098p-40f, 0x1p0f, 0x1.211248p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a97846p-83f, 0.0f, 0.0f, 0x1.d7cd1ap-53f, 0x1.5db2bcp-39f, 0.0f,
     0x1.f2ce7cp-47f, 0x1.bda828p-30f, 0x1.45d42ep-25f, 0.0f, 0x1.8b5e12p-83f,
     0x1.a480d2p-46f, 0x1.7a405cp-79f, 0.0f, 0x1.a4e548p-104f, 0x1.9002e6p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8dc7cap-74f, 0.0f, 0.0f, 0x1.187fbp-94f, 0x1.459006p-105f,
     0.0f, 0.0f, 0.0f, 0x1.6dd2d2p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.730724p-108f,
     0.0f, 0x1.2787dcp-22f, 0.0f, 0x1.56ce98p-111f, 0.0f, 0x1.cf5756p-99f, 0.0f,
     0x1.9d4ed6p-3f, 0x1.b686c8p-69f, 0x1.e81526p-20f, 0.0f, 0x1.846864p-111f, 0.0f,
     0.0f, 0.0f, 0x1.fd90f6p-104f, 0x1.3b9754p-105f, 0x1.f3cd24p-3f, 0x1.2a252cp-31f,
     0x1.b51882p-84f, 0x1.5caa8cp-30f, 0.0f, 0x1.1e8fccp-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba86fap-26f, 0.0f, 0x1.16eb4ap-12f, 0.0f, 0x1.6c2256p-21f, 0.0f,
     0x1.474c6ep-18f, 0x1.9b55bap-34f, 0.0f, 0.0f, 0x1.c07c76p-44f, 0.0f,
     0x1.bc683ap-113f, 0x1.b79988p-14f, 0.0f, 0.0f, 0.0f, 0x1.56a314p-28f,
     0x1.98bc12p-47f, 0x1.a2bb78p-47f, 0x1.f487bp-16f, 0.0f, 0x1.f938e6p-88f,
     0x1.ea8896p-30f, 0.0f, 0.0f, 0x1.57d58p-59f, 0.0f, 0.0f, 0x1.6da6ap-75f, 0.0f,
     0x1.6e85ccp-114f, 0.0f, 0.0f, 0.0f, 0x1.286baep-46f, 0.0f, 0.0f, 0.0f,
     0x1.a9869cp-14f, 0x1.b81598p-10f, 0.0f, 0x1.650138p-88f, 0.0f, 0.0f,
     0x1.a5bb9ap-53f, 0x1.4e52e4p-108f, 0x1.b3b78cp-62f, 0x1.7b555cp-71f,
     0x1.c29968p-24f, 0.0f, 0.0f, 0x1.b11f16p-107f, 0x1.b98a22p-47f, 0x1.464a5ep-88f,
     0.0f, 0x1.7ffac4p-120f, 0x1.ac168ap-9f, 0x1.0c7a8ap-116f, 0x1.bb9254p-114f,
     0x1.a43f2cp-34f, 0.0f, 0x1.570892p-86f, 0x1.f620a8p-70f, 0.0f, 0x1.f78874p-58f,
     0.0f, 0x1.e20e7ep-48f, 0x1.6a92aap-59f, 0x1.c3fd9p-119f, 0.0f, 0.0f,
     0x1.cbd12cp-3f, 0x1.7a8bap-101f, 0x1.c0c0fap-31f, 0.0f, 0x1.cd3374p-4f,
     0x1.29a9d6p-12f, 0.0f, 0.0f, 0x1.494f46p-47f, 0x1.f16158p-114f, 0x1.e6a924p-87f,
     0x1.3a87c4p-115f, 0x1.9f37e2p-21f, 0x1.bfdad8p-119f, 0.0f, 0.0f, 0.0f,
     0x1.fcb13ep-38f, 0x1.7e996cp-24f, 0.0f, 0.0f, 0.0f, 0x1.5bddd6p-85f, 0.0f,
     0x1.bc9716p-89f, 0.0f, 0.0f, 0.0f, 0x1.8bbeb2p-81f, 0x1.95f52ep-31f,
     0x1.9ec666p-64f, 0x1.bfea24p-58f, 0x1.9363f2p-25f, 0x1.1ab7ccp-60f,
     0x1.3636bcp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ebc54p-93f, 0.0f,
     0.0f, 0.0f, 0x1.aa3d78p-6f, 0.0f, 0x1.ae713p-116f, 0.0f, 0x1.9a816ap-33f, 0.0f,
     0x1.ed92e2p-32f, 0.0f, 0x1.a28846p-65f, 0x1.343cdp-69f, 0x1.1c7aep-23f,
     0x1.3f4e5cp-23f, 0.0f, 0.0f, 0.0f, 0x1.11a67ep-25f, 0x1.2621fap-78f, 0.0f, 0.0f,
     0x1.801824p-83f, 0x1.f02efp-85f, 0x1.1c903cp-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7a8cep-59f, 0.0f, 0.0f, 0x1.81ddf8p-89f, 0x1.da1ce2p-106f, 0.0f,
     0x1.21b97ep-116f, 0.0f, 0.0f, 0x1.325794p-8f, 0.0f, 0x1.fde20cp-65f, 0.0f,
     0x1.7ef7cep-106f, 0x1.4b9ebap-92f, 0x1.e77328p-58f, 0x1.db215p-54f,
     0x1.a2bac8p-115f, 0x1.a0f0dp-92f, 0.0f, 0x1.b2cf2cp-106f, 0.0f, 0x1.23f93ap-63f,
     0x1.2c3e9p-109f, 0.0f, 0x1.09a64ap-89f, 0x1.af9eb2p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.858594p-71f, 0x1.a58558p-105f, 0.0f, 0x1p0f, 0.0f, 0x1.9d38c4p-102f,
     0x1.9df538p-53f, 0x1.48295cp-15f, 0x1.88bdbp-39f, 0x1.92d99p-70f, 0.0f, 0.0f,
     0x1.225442p-13f, 0.0f, 0.0f, 0x1.ff5d4ep-82f, 0.0f, 0.0f, 0.0f, 0x1.dcef0ap-17f,
     0.0f, 0.0f, 0x1.c1296ap-50f, 0x1.43f736p-32f, 0x1.fab838p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d431ap-92f, 0.0f, 0x1.85cefep-126f, 0x1.6ecb5ap-19f, 0x1.16970cp-89f,
     0.0f, 0x1p0f, 0x1.b306a8p-2f, 0.0f, 0.0f, 0.0f, 0x1.06771ap-117f,
     0x1.00ab5cp-102f, 0.0f, 0x1.2aa10ap-112f, 0.0f, 0.0f, 0.0f, 0x1.a1977p-2f, 0.0f,
     0x1.b855eap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e27782p-85f, 0x1.e833cep-90f,
     0x1.1a37d2p-116f, 0x1.ebe69ep-104f, 0x1.f46638p-115f, 0.0f, 0x1.454becp-118f,
     0x1.92f3p-95f, 0.0f, 0x1.329046p-38f, 0.0f, 0x1.40c6a2p-69f, 0x1.609a94p-66f,
     0.0f, 0.0f, 0x1.647adap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e1794p-62f, 0.0f,
     0x1.efcc1ap-33f, 0x1.659ac8p-29f, 0.0f, 0x1.cb4bdcp-28f, 0x1.a0682ap-14f,
     0x1.5285c6p-10f, 0x1.1380dp-20f, 0x1.338fbap-41f, 0x1.0f425p-84f, 0.0f,
     0x1.faf3c2p-15f, 0.0f, 0x1.059b2p-117f, 0.0f, 0.0f, 0x1.0532ep-98f, 0.0f,
     0x1.7d2926p-117f, 0.0f, 0x1.ba7752p-83f, 0.0f, 0.0f, 0.0f, 0x1.7912d8p-126f,
     0x1.f184e2p-55f, 0.0f, 0x1.fcc1f6p-79f, 0.0f, 0x1.1493eep-70f, 0.0f, 0.0f,
     0x1.0784cp-113f, 0.0f, 0x1.59c5f6p-12f, 0.0f, 0x1.eef69cp-68f, 0x1.339e3ep-44f,
     0x1.e6716ep-107f, 0x1.3b17d8p-7f, 0x1.522c9ap-67f, 0.0f, 0x1.6f9e76p-119f, 0.0f,
     0x1.22823p-45f, 0.0f, 0x1.96d694p-39f, 0x1.4a4f1ep-54f, 0.0f, 0x1.24ee64p-51f,
     0x1.4c58dap-20f, 0x1.519e76p-20f, 0.0f, 0x1.9296ap-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.faec4ep-8f, 0.0f, 0.0f, 0x1.dde69ep-103f, 0x1.305b5p-119f, 0.0f,
     0x1.9eafb8p-101f, 0x1.a29a76p-109f, 0.0f, 0x1.6d4d44p-84f, 0.0f, 0.0f,
     0x1.30d802p-52f, 0x1.6f8ddcp-78f, 0x1.f4a70ep-64f, 0.0f, 0x1.e27a4ap-114f,
     0x1.4ee0bap-52f, 0.0f, 0x1.96424p-34f, 0.0f, 0.0f, 0x1.fd5214p-1f,
     0x1.5970cep-94f, 0.0f, 0.0f, 0.0f, 0x1.bc189ap-52f, 0.0f, 0.0f, 0x1.e69096p-21f,
     0.0f, 0x1.65b606p-24f, 0x1.e7aee8p-62f, 0x1.d15a0cp-77f, 0.0f, 0x1.e2e6fap-58f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7ce04p-19f, 0x1.a65a46p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bad3cp-47f, 0.0f, 0.0f, 0.0f, 0x1.15b9ccp-77f, 0.0f,
     0.0f, 0.0f, 0x1.636302p-6f, 0.0f, 0.0f, 0x1.95f922p-117f, 0x1.e21814p-86f,
     0x1.3e90cep-124f, 0x1.7e1ceap-90f, 0x1.0044bep-50f, 0.0f, 0.0f, 0x1.81f7c2p-118f,
     0x1.128edp-49f, 0.0f, 0.0f, 0x1.cdf326p-19f, 0.0f, 0.0f, 0x1.99a3e6p-48f, 0.0f,
     0.0f, 0x1.5e0d76p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7687a6p-95f,
     0x1.f76fd4p-101f, 0.0f, 0.0f, 0x1.ca5a86p-79f, 0x1.821a66p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8379a8p-58f, 0x1.0af6e6p-109f, 0.0f, 0.0f, 0x1.93653ep-38f,
     0x1.8fed9ep-68f, 0.0f, 0.0f, 0.0f, 0x1.59730cp-36f, 0x1.23d9c4p-108f,
     0x1.535544p-86f, 0.0f, 0.0f, 0x1.40b57cp-39f, 0x1.cdb9f4p-90f, 0x1.977d7p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8cc08p-67f, 0.0f, 0x1.4879c6p-115f,
     0.0f, 0.0f, 0x1.ba723ap-53f, 0.0f, 0x1.adfb5ep-121f, 0x1.9864eep-110f,
     0x1.3b0a06p-4f, 0.0f, 0x1.20468ep-31f, 0.0f, 0.0f, 0x1.0fe084p-93f, 0.0f,
     0x1.34dc1ap-11f, 0x1.bffdcap-76f, 0.0f, 0.0f, 0x1.0f97fap-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.16164p-117f, 0.0f, 0x1.5343a6p-113f, 0x1.5dda1cp-117f,
     0x1.7859eep-11f, 0.0f, 0x1.9440acp-24f, 0x1.1fce82p-77f, 0x1.fa68aep-2f, 0.0f,
     0x1.1e5feap-2f, 0.0f, 0x1.3f4b9ep-27f, 0.0f, 0.0f, 0x1.622aeep-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.494a76p-85f, 0.0f, 0x1.ad4c48p-97f, 0x1.18cacp-5f, 0.0f,
     0x1.2d7cfcp-62f, 0x1.3eb17p-97f, 0.0f, 0x1.b7ac4ep-25f, 0.0f, 0x1.09dba4p-110f,
     0.0f, 0x1.1c663ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0277cp-83f, 0x1.1b6844p-82f, 0.0f, 0x1.fd9ebep-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34bf6cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.486168p-70f, 0x1.78825ep-53f,
     0x1.474dbap-43f, 0x1.0974cp-36f, 0.0f, 0x1.540c52p-29f, 0.0f, 0.0f, 0.0f,
     0x1.d87704p-16f, 0x1.519c46p-107f, 0x1.3695fap-103f, 0x1.ff49f6p-58f,
     0x1.d297a4p-62f, 0x1.8fe61ap-67f, 0.0f, 0.0f, 0x1.4d2438p-4f, 0.0f, 0.0f, 0.0f,
     0x1.ec785p-27f, 0x1.9e08dp-26f, 0x1.e17096p-102f, 0.0f, 0x1.b7c498p-3f, 0.0f,
     0.0f, 0x1.c482p-67f, 0x1.ea9048p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.decc3p-17f, 0x1.84513cp-124f, 0x1.330152p-116f, 0x1.bcc23ep-12f,
     0x1.ea444p-98f, 0.0f, 0.0f, 0.0f, 0x1.693d82p-122f, 0.0f, 0.0f, 0.0f,
     0x1.b1cca4p-125f, 0.0f, 0x1.8f2678p-12f, 0.0f, 0x1.1bb6eep-70f, 0.0f, 0.0f,
     0x1.81a574p-47f, 0x1.837994p-69f, 0.0f, 0x1.a8538ep-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c96aep-79f, 0x1.81464p-95f, 0.0f, 0x1.050a46p-124f, 0.0f,
     0x1.a2827ep-88f, 0x1.53622p-93f, 0.0f, 0.0f, 0x1.6306bcp-7f, 0x1.75e67ap-20f,
     0x1.51aedap-126f, 0x1.94fe56p-5f, 0.0f, 0x1.30b1f4p-77f, 0x1.294fecp-64f, 0.0f,
     0x1.10565ap-121f, 0.0f, 0x1.41c4b6p-28f, 0x1.a4d4bcp-27f, 0.0f, 0.0f,
     0x1.0f0c2p-8f, 0x1.736884p-126f, 0x1.25936ep-68f, 0x1.df6d4ep-14f,
     0x1.2afcap-52f, 0.0f, 0.0f, 0x1.b09bc2p-123f, 0.0f, 0.0f, 0x1.bffb2ap-75f,
     0x1.80de06p-5f, 0.0f, 0.0f, 0.0f, 0x1.c2ba62p-70f, 0x1.56f1ccp-76f,
     0x1.fbaa24p-34f, 0x1.79957ap-30f, 0.0f, 0.0f, 0x1.38c652p-33f, 0.0f,
     0x1.cdf934p-26f, 0.0f, 0x1.da1baap-16f, 0x1.ecf75cp-107f, 0x1.21ba0ep-81f, 0.0f,
     0.0f, 0x1.d442c6p-115f, 0.0f, 0.0f, 0.0f, 0x1.43a354p-35f, 0.0f, 0.0f, 0.0f,
     0x1.ee8af4p-28f, 0x1.aace7ap-113f, 0x1.a9db5ap-9f, 0x1.dc74f6p-78f,
     0x1.39bdd6p-75f, 0x1.25828ep-52f, 0.0f, 0x1.9ae942p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e1919ap-54f, 0x1.dede02p-61f, 0x1.b27526p-35f, 0x1.bb2a6ap-95f,
     0x1.06bf5cp-33f, 0x1.d606dep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5741ep-50f, 0.0f, 0.0f, 0.0f,
     0x1.659d3cp-116f, 0.0f, 0x1.159b54p-31f, 0.0f, 0.0f, 0x1.d33132p-39f,
     0x1.95b5b6p-112f, 0x1.e1de2ap-57f, 0.0f, 0x1.75348p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c5f46p-55f, 0x1.58e154p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5d216p-23f,
     0x1.6cdac6p-67f, 0x1.4b112ep-61f, 0x1.ad19a4p-26f, 0.0f, 0x1.5e3772p-86f, 0.0f,
     0x1.a6285p-104f, 0x1.5144b2p-106f, 0.0f, 0x1.bea434p-110f, 0x1.8dab06p-25f, 0.0f,
     0.0f, 0x1.d09b54p-78f, 0x1.903128p-17f, 0x1.480b6p-90f, 0.0f, 0.0f,
     0x1.a53fa4p-116f, 0.0f, 0x1.1ce4dep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f0a4ap-88f,
     0x1.2f8ep-43f, 0.0f, 0.0f, 0.0f, 0x1.0822c8p-11f, 0x1.619ae4p-34f, 0.0f, 0.0f,
     0.0f, 0x1.569c12p-33f, 0x1.146d54p-29f, 0.0f, 0.0f, 0.0f, 0x1.0dccap-49f,
     0x1.75f08cp-10f, 0.0f, 0x1.5cd206p-112f, 0x1.7bc1a2p-30f, 0x1.2535eap-125f,
     0x1.efbcccp-70f, 0x1.8bfa76p-27f, 0x1.ad01f2p-18f, 0.0f, 0x1.b843bcp-101f,
     0x1.fcd0bap-27f, 0x1.6d7b1ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66602ep-18f, 0.0f, 0x1.4b3418p-126f, 0x1.5e35aep-16f, 0x1.924cdap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.098e62p-4f, 0.0f,
     0x1.aef2b8p-43f, 0x1.93a704p-14f, 0x1.12dcc6p-26f, 0.0f, 0.0f, 0x1.e46662p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.25a62cp-66f, 0x1.31d17ep-120f, 0.0f, 0x1.63b5f6p-90f,
     0.0f, 0.0f, 0.0f, 0x1.88763cp-17f, 0x1.da66f2p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08193cp-49f, 0.0f, 0x1.b39b84p-43f, 0.0f, 0.0f, 0x1.9616acp-27f, 0.0f, 0.0f,
     0x1.3839d2p-60f, 0.0f, 0x1.b355e8p-57f, 0x1.fa523ep-50f, 0.0f, 0x1.9a3716p-25f,
     0.0f, 0.0f, 0x1.d9e7c8p-2f, 0x1.20589cp-9f, 0x1.3ba542p-81f, 0x1.11fa0ap-94f,
     0x1.a85516p-90f, 0.0f, 0x1.4167ap-22f, 0x1.3572dcp-22f, 0x1.c7bb62p-84f,
     0x1.d3724p-108f, 0x1.e4ffc8p-16f, 0x1.cfbf24p-106f, 0x1.39555p-43f,
     0x1.94d35ap-79f, 0x1.70f3c8p-8f, 0x1.54952p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9e518ap-113f, 0x1.f4a38p-49f, 0x1.7a5e1cp-72f, 0x1.b6f092p-21f,
     0.0f, 0.0f, 0x1.37a7b8p-18f, 0x1.601246p-102f, 0x1.4ff36p-39f, 0x1.c63b48p-14f,
     0.0f, 0x1.6b64eap-22f, 0.0f, 0x1.65b9fep-75f, 0x1.0915b6p-38f
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
            tmp2 = Sleef_finz_nextafterf8_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_nextafterf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_nextafterf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
