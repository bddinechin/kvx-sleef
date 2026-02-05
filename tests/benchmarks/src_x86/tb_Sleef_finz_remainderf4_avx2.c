/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_remainderf4_avx2128.c --function \
 *     Sleef_finz_remainderf4_avx2128 --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ec3d4p-119f, 0x1.e3020ep-6f, 0x1.3ab0cep-11f,
     0x1.77d89cp-37f, 0x1.2f47aep-49f, 0x1.88e888p-82f, 0.0f, 0.0f, 0.0f,
     0x1.ffd046p-62f, 0x1.32acbcp-125f, 0x1.b39be4p-13f, 0.0f, 0x1.b507b6p-79f, 0.0f,
     0.0f, 0.0f, 0x1.1ae606p-10f, 0x1.02b0d2p-114f, 0.0f, 0x1.471f36p-30f,
     0x1.fe0b2p-49f, 0x1.582f14p-104f, 0x1.b29442p-92f, 0.0f, 0.0f, 0x1.224ae8p-58f,
     0x1.3eafd2p-11f, 0.0f, 0.0f, 0x1.01705p-54f, 0x1.f8fd6p-35f, 0x1.c3cbd2p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcb94ap-99f, 0x1.9d9a92p-103f, 0x1.b9876ap-91f,
     0x1.24a84ap-61f, 0.0f, 0x1.db6ba4p-39f, 0x1.66173cp-80f, 0x1.944a5p-26f,
     0x1.ae1b4ap-12f, 0x1.96b1aap-96f, 0x1.2085f4p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ccce16p-123f, 0x1.3994a2p-10f, 0x1.37abp-10f, 0x1.9f34bep-107f, 0.0f,
     0x1.cd4c32p-125f, 0.0f, 0x1.31bf1ep-36f, 0.0f, 0.0f, 0x1.0bb9dp-99f,
     0x1.3b1c86p-107f, 0.0f, 0x1.e794bp-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26478ep-114f, 0.0f, 0.0f, 0x1.4e9e08p-15f, 0.0f, 0.0f, 0x1.b00402p-24f, 0.0f,
     0x1.67707cp-110f, 0x1.442642p-107f, 0x1.1b8628p-3f, 0x1.322688p-96f,
     0x1.21aaaep-93f, 0x1.bfa502p-44f, 0x1.9424fp-42f, 0x1p0f, 0x1.5f757ep-40f,
     0x1.2d45dp-118f, 0.0f, 0.0f, 0.0f, 0x1.d1a984p-48f, 0x1.540b68p-76f,
     0x1.0e4a5ep-57f, 0.0f, 0x1.1d66bep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.332018p-19f,
     0x1.906b62p-90f, 0.0f, 0x1.5535aep-110f, 0x1.2c915p-125f, 0.0f, 0x1.6208dap-14f,
     0x1.168936p-49f, 0.0f, 0.0f, 0x1.fd6428p-68f, 0x1.3be07cp-99f, 0.0f, 0.0f,
     0x1.3822e8p-45f, 0.0f, 0.0f, 0.0f, 0x1.46c0a8p-93f, 0x1.572112p-114f,
     0x1.3c50fap-31f, 0x1.0a38f6p-84f, 0.0f, 0x1.6a0632p-103f, 0.0f, 0x1.168e9ep-70f,
     0.0f, 0.0f, 0x1.e6147p-34f, 0.0f, 0x1.14a9a8p-38f, 0x1.f58948p-125f,
     0x1.bb7ed4p-43f, 0x1.f75eecp-92f, 0x1.46a2d8p-109f, 0x1.b9fe96p-81f, 0.0f,
     0x1.f8e384p-76f, 0x1.3f7438p-7f, 0x1.803b92p-32f, 0x1.8d230ep-24f,
     0x1.1fbe84p-116f, 0x1.291d62p-82f, 0x1.f23d4cp-37f, 0x1.e414aep-44f,
     0x1.874d5cp-111f, 0x1.8994ep-2f, 0.0f, 0x1.81fb48p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ec606p-68f, 0.0f, 0.0f, 0x1.8c576p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.373fa6p-11f, 0x1.35df3ap-80f, 0x1.60c902p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bf1e2cp-99f, 0x1.056f06p-107f, 0x1.def832p-63f, 0x1.7441c2p-107f,
     0.0f, 0.0f, 0x1.d625c4p-48f, 0x1.62837ep-39f, 0.0f, 0.0f, 0x1.9a8562p-80f,
     0x1.a16c64p-106f, 0x1.e4d9b6p-105f, 0.0f, 0.0f, 0.0f, 0x1.31cf1ap-97f,
     0x1.51bfecp-2f, 0x1.f3215cp-26f, 0x1.f4725ap-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63225ep-76f, 0.0f, 0x1.18ab9cp-125f, 0.0f, 0.0f, 0x1.ad95c6p-23f,
     0x1.542d94p-66f, 0x1.83dd48p-76f, 0x1.a594b2p-25f, 0.0f, 0.0f, 0.0f,
     0x1.8b68e4p-104f, 0.0f, 0.0f, 0x1.154e3ep-30f, 0.0f, 0x1.bb783cp-103f,
     0x1.126decp-108f, 0.0f, 0.0f, 0.0f, 0x1.eb2942p-68f, 0x1.47236ap-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.905c34p-21f, 0x1.9de42ap-13f,
     0.0f, 0.0f, 0.0f, 0x1.49e2b6p-41f, 0.0f, 0.0f, 0.0f, 0x1.9fcf5cp-85f, 0.0f,
     0x1.0e000ap-50f, 0x1.4e6fbap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2eb54ep-38f,
     0x1.7788a8p-35f, 0x1.9ea18ap-88f, 0.0f, 0.0f, 0.0f, 0x1.489652p-91f,
     0x1.5e10f4p-63f, 0.0f, 0.0f, 0.0f, 0x1.b972f2p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c70cdp-114f, 0x1.abc654p-21f, 0x1.14b1ap-41f,
     0x1.adae72p-61f, 0x1.cd6b4cp-42f, 0x1.83f898p-118f, 0x1.b3e52p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7acdp-51f, 0.0f, 0x1.808194p-2f, 0x1.bc5984p-61f,
     0x1.c8c9dep-78f, 0.0f, 0x1.f33dfcp-45f, 0.0f, 0x1.786598p-88f, 0x1.8559d8p-39f,
     0.0f, 0x1.2919d4p-49f, 0.0f, 0x1.4014ecp-35f, 0.0f, 0x1.47293ap-92f, 0.0f, 0.0f,
     0.0f, 0x1.3a1618p-63f, 0x1.881122p-1f, 0x1.0ea994p-15f, 0x1.d2992p-77f,
     0x1.e16f1p-100f, 0.0f, 0x1.a85248p-49f, 0x1.9898dap-22f, 0.0f, 0x1.abf288p-64f,
     0x1.f28fccp-25f, 0x1.63ce2ap-85f, 0x1.a4a31p-84f, 0x1.fe14a6p-74f,
     0x1.d92b16p-99f, 0x1.cd3cbp-21f, 0x1.46fe86p-5f, 0x1.93204ap-124f,
     0x1.c7cab4p-22f, 0.0f, 0.0f, 0.0f, 0x1.2ac812p-29f, 0x1.16ae74p-84f,
     0x1.b0f18ep-126f, 0.0f, 0x1.6cb7d8p-121f, 0.0f, 0x1.c4bd6ap-119f, 0.0f, 0.0f,
     0x1.0d4646p-5f, 0x1.b584b8p-82f, 0.0f, 0.0f, 0x1.ff451ep-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.047ffap-103f, 0x1.1cfe5cp-68f, 0x1.34dd2p-73f, 0.0f, 0.0f,
     0x1.1ff09cp-2f, 0.0f, 0.0f, 0.0f, 0x1.3faf9ap-125f, 0x1.ef482p-101f, 0.0f,
     0x1.c502p-124f, 0x1.025f44p-81f, 0x1.52faf8p-90f, 0.0f, 0x1.1595dcp-47f, 0.0f,
     0.0f, 0.0f, 0x1.d4bb8cp-12f, 0.0f, 0.0f, 0x1.0fcc7ep-36f, 0.0f, 0x1.eac5fp-113f,
     0.0f, 0x1.62287ep-123f, 0.0f, 0.0f, 0x1.24974ap-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad7bb6p-50f, 0x1.9c4146p-93f, 0x1.1f837ep-46f, 0.0f, 0.0f, 0x1.2dfcf4p-91f,
     0x1.96b13ap-99f, 0.0f, 0.0f, 0.0f, 0x1.5b5838p-16f, 0x1.20f018p-122f,
     0x1.f0d1d8p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b46f64p-111f,
     0.0f, 0.0f, 0x1.a925eep-13f, 0.0f, 0.0f, 0x1.fabaa8p-40f, 0x1.6aca66p-67f, 0.0f,
     0.0f, 0x1.38dc9cp-29f, 0x1.1d843p-79f, 0.0f, 0.0f, 0x1.1e7b44p-89f,
     0x1.93dcccp-76f, 0x1.565c52p-38f, 0.0f, 0.0f, 0x1.5d9c7p-125f, 0x1.4c501ap-87f,
     0x1.65cb86p-17f, 0.0f, 0.0f, 0x1.431ea4p-25f, 0.0f, 0x1.fb62b8p-2f, 0.0f, 0.0f,
     0.0f, 0x1.48050cp-118f, 0.0f, 0.0f, 0x1.9e4d14p-112f, 0x1.53b2b4p-17f, 0.0f,
     0.0f, 0.0f, 0x1.52e98ep-90f, 0.0f, 0.0f, 0.0f, 0x1.8feef6p-108f, 0x1.f243fp-37f,
     0x1.566aaap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa9494p-100f, 0.0f, 0.0f,
     0x1.84ed4cp-13f, 0x1.bf99c8p-21f, 0x1.838bbcp-59f, 0x1.cc1e78p-85f, 0.0f,
     0x1.e664c8p-49f, 0x1.d517ep-53f, 0x1.0df642p-44f, 0x1.231f9p-48f, 0.0f, 0.0f,
     0.0f, 0x1.864976p-82f, 0x1.a42e88p-118f, 0x1.1a0fcp-2f, 0x1.aff6aep-49f,
     0x1.d242c8p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9efd24p-72f, 0x1.170e16p-38f, 0.0f,
     0.0f, 0x1.45f49cp-106f, 0x1.f9d47p-68f, 0x1.b9ff52p-107f, 0x1.e3208p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79f754p-113f, 0x1.2f1e08p-3f, 0x1.9e2528p-103f,
     0x1.79a8dap-117f, 0x1.7bab7ap-16f, 0.0f, 0x1.dd517ap-105f, 0x1.e31e2ep-42f, 0.0f,
     0x1.7b48e4p-21f, 0.0f, 0x1.2cb712p-22f, 0.0f, 0.0f, 0x1.37ab28p-101f,
     0x1.26d7eap-16f, 0.0f, 0x1.f9f38ep-89f, 0.0f, 0x1.237e4cp-68f, 0.0f, 0.0f,
     0x1.52fddcp-38f, 0.0f, 0.0f, 0.0f, 0x1.c4a5a8p-77f, 0x1.38279ap-28f, 0.0f, 0.0f,
     0.0f, 0x1.2de572p-20f, 0.0f, 0x1.53b04ap-119f, 0x1.0925f4p-6f, 0x1.44d758p-90f,
     0.0f, 0.0f, 0.0f, 0x1.2efa8p-40f, 0.0f, 0x1.fb8704p-32f, 0.0f, 0x1.2a18dep-60f,
     0.0f, 0.0f, 0.0f, 0x1.4e137p-101f, 0x1.b6facap-95f, 0.0f, 0x1.d2eb38p-101f,
     0x1.f003fap-49f, 0.0f, 0.0f, 0x1.943824p-47f, 0.0f, 0x1.ede80ep-120f,
     0x1.63e386p-31f, 0x1.0d9e7p-19f, 0x1.4958bcp-59f, 0.0f, 0x1.37a2bep-35f, 0.0f,
     0x1.15947p-18f, 0x1.aeb452p-107f, 0.0f, 0.0f, 0x1.37318ep-26f, 0x1p0f, 0.0f,
     0.0f, 0x1.57a628p-94f, 0.0f, 0.0f, 0.0f, 0x1.a33ff8p-36f, 0x1.4380ap-2f,
     0x1.212fbep-8f, 0x1.48e12p-99f, 0x1.34a346p-2f, 0x1.57c4fp-30f, 0.0f, 0.0f,
     0x1.4418b8p-13f, 0.0f, 0x1.487316p-61f, 0.0f, 0x1.c3c89ep-42f, 0.0f,
     0x1.adf194p-123f, 0x1.1abfd6p-106f, 0x1.4a534ep-43f, 0x1.d66484p-52f,
     0x1.8aa878p-97f, 0x1.e3c986p-59f, 0.0f, 0.0f, 0x1.6099d8p-5f, 0x1.1872c4p-111f,
     0.0f, 0x1.1af18cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1c064p-41f,
     0x1.de2664p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b6bccp-102f,
     0.0f, 0x1.e50ab6p-83f, 0.0f, 0.0f, 0x1.a96242p-113f, 0.0f, 0x1.66e3d6p-64f, 0.0f,
     0x1.737658p-24f, 0x1.736a3ep-18f, 0x1.7e55f8p-95f, 0.0f, 0.0f, 0x1.a05932p-19f,
     0x1.f47bdap-71f, 0x1.aa7e6cp-11f, 0.0f, 0.0f, 0.0f, 0x1.66e9b4p-94f, 0.0f, 0.0f,
     0x1.511fc8p-30f, 0x1.4a11e2p-86f, 0.0f, 0x1.31245cp-18f, 0x1.a658f2p-70f, 0.0f,
     0x1.bbc0ccp-21f, 0.0f, 0x1.f560cp-11f, 0x1.6f1972p-111f, 0.0f, 0x1.b510c4p-77f,
     0x1.49a976p-7f, 0.0f, 0x1.dfca68p-107f, 0.0f, 0.0f, 0x1.519436p-90f, 0.0f,
     0x1.4a6b64p-64f, 0.0f, 0x1.49074p-30f, 0.0f, 0x1.bf1a36p-121f, 0.0f,
     0x1.bbff76p-84f, 0.0f, 0x1.507292p-107f, 0.0f, 0.0f, 0x1.9f9296p-44f,
     0x1.a45da2p-44f, 0x1.a84b64p-78f, 0x1.f5ea9cp-103f, 0.0f, 0x1.20b2acp-78f,
     0x1.9159bp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2bba2p-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3178p-122f, 0x1.22fadcp-57f,
     0x1.4f66a8p-48f, 0.0f, 0.0f, 0x1.653daep-64f, 0x1.dc0754p-68f, 0.0f, 0.0f,
     0x1.a573f8p-75f, 0x1.026b1ep-10f, 0.0f, 0.0f, 0x1.50f6aep-111f, 0x1.85817p-76f,
     0.0f, 0x1.90ae82p-27f, 0x1.1876aep-77f, 0.0f, 0x1.6292b6p-53f, 0.0f,
     0x1.3ad8bap-49f, 0x1.b7613ap-58f, 0x1.e2764ap-62f, 0x1.31f07p-78f, 0.0f,
     0x1.66985p-102f, 0x1.dde92ap-79f, 0.0f, 0.0f, 0x1.718ee8p-61f, 0x1.d9691p-47f,
     0x1.372a42p-122f, 0.0f, 0.0f, 0.0f, 0x1.bb4142p-42f, 0x1.5cf4d2p-41f, 0.0f,
     0x1.3dd538p-84f, 0x1.ca6d62p-125f, 0.0f, 0x1.767d2cp-95f, 0.0f, 0x1.b9f33ep-2f,
     0.0f, 0x1.0232dap-48f, 0x1.3a0184p-27f, 0.0f, 0.0f, 0.0f, 0x1.667976p-59f, 0.0f,
     0x1.202218p-1f, 0x1.b5fb48p-64f, 0.0f, 0x1.8d243p-58f, 0x1.e553dap-124f,
     0x1.d7c494p-49f, 0x1.d4e77cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2358cp-92f,
     0.0f, 0x1.c7241p-34f, 0x1.0d953p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e94b8p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.37e362p-68f, 0.0f, 0.0f, 0x1.e208cp-103f,
     0x1.4c905ep-24f, 0.0f, 0.0f, 0.0f, 0x1.9d9562p-22f, 0x1.a0b7d8p-45f,
     0x1.bf5274p-73f, 0x1.337f12p-111f, 0x1.ee7eecp-99f, 0x1.db1dacp-15f, 0.0f, 0.0f,
     0x1.9db058p-66f, 0.0f, 0x1.e54b1ap-45f, 0.0f, 0.0f, 0.0f, 0x1.e556aep-111f, 0.0f,
     0x1.77f6d4p-86f, 0x1.00f3a4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56ad56p-61f,
     0.0f, 0x1.02daeap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90110ap-20f,
     0x1.9f76d6p-54f, 0x1.fcefb4p-58f, 0.0f, 0x1.4e5d82p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d01ecp-48f, 0.0f, 0.0f, 0x1.03af3p-43f, 0x1.fa637cp-16f, 0x1.52e34p-80f,
     0x1.ce56ep-47f, 0.0f, 0x1.292a34p-71f, 0x1.59d12ep-17f, 0x1.81be72p-67f,
     0x1.fc103cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.492a5p-8f, 0x1.7e25f2p-94f, 0.0f,
     0x1.ee8e1p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.268d92p-93f, 0.0f, 0x1p0f,
     0x1.551096p-114f, 0.0f, 0x1.bcd9aep-40f, 0.0f, 0x1.715cbcp-43f, 0x1.5ea7fp-72f,
     0.0f, 0.0f, 0.0f, 0x1.68919cp-75f, 0x1.51ce1ep-78f, 0.0f, 0.0f, 0.0f,
     0x1.d3215p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.315e1ap-5f, 0x1.dbc7c6p-104f, 0.0f,
     0.0f, 0x1.0694f6p-20f, 0.0f, 0.0f, 0x1.ee694cp-126f, 0x1.cb9e06p-72f,
     0x1.957014p-47f, 0x1.ab296cp-15f, 0.0f, 0x1.cd942cp-92f, 0x1.a64d0ap-87f, 0.0f,
     0.0f, 0x1.f46ab6p-118f, 0.0f, 0.0f, 0x1.f83b38p-83f, 0.0f, 0.0f, 0.0f,
     0x1.4c68a2p-112f, 0.0f, 0x1.922af4p-41f, 0x1.5bd864p-93f, 0.0f, 0.0f,
     0x1.8d49e8p-11f, 0x1.9eac5p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d15c4ep-124f, 0x1.2fbe1cp-85f, 0x1.21e9a8p-79f, 0.0f, 0.0f, 0x1.1ae9bcp-43f,
     0.0f, 0x1.62d27ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7a7b8p-46f, 0.0f, 0.0f,
     0x1.bf78a2p-2f, 0x1.a39cb2p-56f, 0.0f, 0x1.cfa29cp-21f, 0x1.fd56eep-99f,
     0x1.f36712p-60f, 0.0f, 0x1.0cf37ap-1f, 0.0f, 0x1.515534p-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.31675p-45f, 0.0f, 0x1.e7e3cp-117f, 0x1.62ce2ep-105f, 0.0f, 0.0f,
     0x1.00f2eap-4f, 0x1.252ap-120f, 0.0f, 0x1.34a7f6p-10f, 0x1.5cc2c2p-92f, 0.0f,
     0x1.39b346p-60f, 0.0f, 0.0f, 0.0f, 0x1.823a6ep-67f, 0.0f, 0x1.5f16b4p-67f,
     0x1.d12aecp-90f, 0.0f, 0.0f, 0x1.926f82p-86f, 0x1.4db176p-12f, 0.0f, 0.0f,
     0x1.cbad56p-123f, 0x1.0e7f46p-91f, 0.0f, 0x1.405aa4p-86f, 0x1.97b77p-104f,
     0x1.70dp-104f, 0.0f, 0x1.d4b7ccp-7f, 0.0f, 0x1.c68b4ap-40f, 0.0f,
     0x1.4cd18ap-16f, 0x1.b5b73ep-82f, 0x1.e3f6cap-48f, 0x1.42d2bcp-97f, 0.0f,
     0x1.656a3ep-20f, 0x1.f8af68p-64f, 0x1.a5753ep-67f, 0.0f, 0x1.4ab268p-124f,
     0x1.b3825ep-105f, 0.0f, 0.0f, 0x1.75c53p-24f, 0x1.2a4bdep-42f, 0x1.c04334p-12f,
     0.0f, 0x1.9447e6p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47ece4p-34f,
     0x1.a71a72p-113f, 0.0f, 0x1.1bc5a8p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ebd6cp-15f, 0x1.2b6866p-72f, 0x1.ca696ap-71f, 0x1.2d3948p-23f, 0.0f,
     0x1.2ac11cp-10f, 0x1.8f6062p-41f, 0.0f, 0.0f, 0x1.356846p-93f, 0.0f,
     0x1.fcbc1ep-101f, 0x1.b6b634p-20f, 0x1.8335e2p-107f, 0.0f, 0.0f, 0.0f,
     0x1.e0e454p-72f, 0x1.aa4654p-10f, 0.0f, 0x1.f8efdcp-64f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.d38cf2p-126f, 0.0f, 0x1.43648p-72f, 0.0f, 0x1.4835ecp-54f, 0.0f, 0.0f,
     0x1.697aecp-40f, 0x1.1e706cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6864ap-70f, 0.0f, 0.0f, 0x1.3decccp-7f, 0.0f, 0.0f, 0x1.427ad4p-104f, 0.0f,
     0.0f, 0x1.9286ccp-70f, 0.0f, 0x1.7f02b6p-51f, 0x1.791faap-47f, 0x1.33fbecp-19f,
     0.0f, 0x1.ce4228p-92f, 0.0f, 0.0f, 0x1.6df96ap-111f, 0.0f, 0x1.9589a8p-3f, 0.0f,
     0.0f, 0.0f, 0x1.6e127ep-64f, 0x1.11f9ccp-3f, 0x1.672614p-96f, 0.0f,
     0x1.093eeap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f623ep-95f, 0.0f, 0x1.5b4f7ap-27f,
     0x1.85b4bep-97f, 0x1.d04a8p-92f, 0.0f, 0.0f, 0x1.8ebc04p-56f, 0x1.82a75ep-115f,
     0x1.33ceaap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1943ep-33f,
     0x1.79a88ap-17f, 0.0f, 0.0f, 0.0f, 0x1.6bf09ep-69f, 0.0f, 0x1.7c51cp-43f,
     0x1.2b68b6p-126f, 0.0f, 0x1.66a80cp-126f, 0.0f, 0x1.2e0768p-9f, 0.0f,
     0x1.4771c8p-38f, 0x1.130efp-29f, 0x1.1fe4bep-55f, 0.0f, 0x1.093786p-92f, 0.0f,
     0x1.2d7c8p-103f, 0x1.c9c23ep-68f, 0x1.bc4e8p-88f, 0.0f, 0x1.f7cb5cp-15f,
     0x1.aa582ep-5f, 0.0f, 0x1.6d97a6p-4f, 0x1.cd29d8p-105f, 0.0f, 0.0f,
     0x1.6cdfbp-12f, 0x1.a1fa3cp-106f, 0x1.327c52p-33f, 0.0f, 0x1.73cf7cp-110f,
     0x1.780ffep-66f, 0.0f, 0x1.364e18p-70f, 0.0f, 0x1.21fae8p-102f, 0.0f,
     0x1.ca3534p-23f, 0.0f, 0.0f, 0x1.4eb96ep-80f, 0x1.f9c872p-18f, 0x1.9ed312p-59f,
     0.0f, 0.0f, 0x1.077978p-88f, 0.0f, 0x1.e52742p-27f, 0.0f, 0x1.5abe2ep-94f,
     0x1.ffd892p-2f, 0.0f, 0.0f, 0x1.662efcp-58f, 0.0f, 0.0f, 0x1.9a4cc2p-22f,
     0x1.4c0584p-125f, 0.0f, 0x1.698b2p-68f, 0.0f, 0x1.904352p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d9fb6p-109f, 0x1.91b20cp-119f, 0.0f,
     0.0f, 0.0f, 0x1.a1656cp-120f, 0x1.50bafep-119f, 0.0f, 0x1.3e9d98p-51f, 0.0f,
     0x1.51d9bap-12f, 0.0f, 0x1.eaf352p-88f, 0x1.68e06p-29f, 0.0f, 0.0f,
     0x1.2f4df6p-26f, 0.0f, 0x1.7cc3acp-96f, 0x1.d1aee8p-115f, 0x1.869144p-117f, 0.0f,
     0x1.faaa58p-112f, 0x1.f0fb72p-47f, 0.0f, 0x1.e1f9dep-83f, 0x1.d8a6b2p-13f, 0.0f,
     0x1.6fe3d2p-41f, 0.0f, 0.0f, 0x1.4d3e3ep-58f, 0x1.1ad6dcp-49f, 0x1.3e6508p-88f,
     0x1.69fbacp-55f, 0.0f, 0.0f, 0x1.b0141p-5f, 0x1.d987acp-85f, 0.0f,
     0x1.b2b5fap-97f, 0x1.24beb2p-102f, 0.0f, 0x1.c2adfcp-52f, 0.0f, 0x1.44813p-78f,
     0.0f, 0x1.61945cp-8f, 0.0f, 0.0f, 0.0f, 0x1.5696fep-120f, 0x1.fdfdcep-9f,
     0x1.2d8982p-101f, 0x1.6ea45p-47f, 0x1.3bb7ap-67f, 0.0f, 0x1.f090d4p-70f,
     0x1.786a98p-119f, 0x1.fc385cp-13f, 0x1.d803dcp-3f, 0x1.8fc8e6p-103f,
     0x1.4369cep-109f, 0.0f, 0x1.51bc0cp-5f, 0.0f, 0x1.2212ap-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1d1f46p-13f, 0.0f, 0x1.21d0cp-64f, 0.0f, 0x1.8e947cp-38f,
     0x1.2318d2p-16f, 0.0f, 0.0f, 0x1.ce4c74p-6f, 0x1.f1a398p-17f, 0.0f,
     0x1.dde2b2p-38f, 0x1.b387cp-17f, 0x1.a84558p-60f, 0x1.b1238ep-36f, 0.0f,
     0x1.55091cp-52f, 0x1.b74708p-34f, 0.0f, 0.0f, 0x1.614858p-116f, 0.0f,
     0x1.d99292p-77f, 0.0f, 0.0f, 0.0f, 0x1.68fa6ep-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2139c6p-69f, 0x1.1fd46ap-81f, 0.0f, 0x1.4b988ap-100f, 0.0f, 0.0f,
     0x1.34eb8p-55f, 0x1.8cb4cap-51f, 0x1.a4aa5ep-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de582ep-125f, 0x1.17df92p-52f, 0.0f, 0.0f, 0x1.979218p-63f, 0.0f, 0.0f, 0.0f,
     0x1.cbf046p-5f, 0.0f, 0x1.52917ap-52f, 0.0f, 0.0f, 0x1.13aceep-113f, 0.0f, 0.0f,
     0x1.7dc726p-59f, 0x1.3bd984p-87f, 0.0f, 0.0f, 0.0f, 0x1.cedabcp-58f, 0.0f, 0.0f,
     0.0f, 0x1.114b8ap-35f, 0x1.75ed96p-65f, 0x1.6f16cp-115f, 0.0f, 0.0f,
     0x1.9ebc3p-98f, 0.0f, 0x1.91a2ep-83f, 0.0f, 0x1.aa1798p-35f, 0.0f,
     0x1.bb1a1ap-4f, 0.0f, 0x1.4cc202p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11dcdcp-4f,
     0x1.99c6dep-100f, 0x1.2b253ap-46f, 0.0f, 0.0f, 0x1.6e2fc8p-115f, 0.0f, 0.0f,
     0x1.c3dba8p-1f, 0.0f, 0x1.2f35aep-111f, 0x1.603bdap-120f, 0.0f, 0.0f, 0.0f,
     0x1.2e746ap-70f, 0.0f, 0x1.2dde9cp-106f, 0x1.a405a8p-11f, 0x1.0549f6p-108f, 0.0f,
     0x1.220b94p-125f, 0.0f, 0x1.a2374ap-43f, 0.0f, 0.0f, 0.0f, 0x1.232b56p-90f, 0.0f,
     0.0f, 0.0f, 0x1.ae24fap-91f, 0.0f, 0x1.2c7f54p-29f, 0x1p0f, 0x1.dfd98cp-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ce384p-66f, 0x1.406c68p-66f, 0.0f,
     0x1.6a97fcp-106f, 0.0f, 0x1.978602p-72f, 0.0f, 0.0f, 0x1.5ba09p-8f, 0.0f, 0.0f,
     0x1.de5ed8p-111f, 0.0f, 0.0f, 0x1.931f12p-44f, 0x1.852944p-27f, 0x1.01689cp-96f,
     0x1.0ef152p-74f, 0x1.30287ap-106f, 0x1.9027a2p-94f, 0x1.369cb6p-114f,
     0x1.cef4aep-126f, 0x1.b5a866p-110f, 0x1.9b3facp-113f, 0x1.cca5a2p-105f, 0.0f,
     0x1.eeadc8p-119f, 0.0f, 0x1.5acacp-117f, 0x1.572c2ap-11f, 0.0f, 0.0f,
     0x1.654688p-62f, 0.0f, 0.0f, 0x1.8200b4p-110f, 0x1.10649p-123f, 0x1.7c590ep-114f,
     0x1.295f28p-62f, 0x1.f46858p-83f, 0x1.48cb9p-27f, 0.0f, 0x1.dee466p-49f,
     0x1.064d42p-27f, 0x1.6dcda2p-94f, 0.0f, 0x1.decbf4p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c00e6ep-16f, 0x1.2f6356p-94f, 0.0f, 0.0f, 0.0f, 0x1.de7ba6p-73f,
     0.0f, 0.0f, 0x1.427dfcp-82f, 0.0f, 0.0f, 0.0f, 0x1.f7417ap-121f, 0.0f, 0.0f,
     0.0f, 0x1.c33494p-32f, 0.0f, 0x1.def67ap-120f, 0.0f, 0x1.6f1616p-60f, 0.0f, 0.0f,
     0.0f, 0x1.8438a2p-62f, 0x1.606becp-98f, 0x1.91138p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7b96bcp-32f, 0x1.a8127p-2f, 0.0f, 0.0f, 0x1.b58f9cp-100f,
     0x1.dd6086p-27f, 0x1.f40cf8p-98f, 0x1.4b31dcp-87f, 0x1.5e3dep-123f, 0.0f, 0.0f,
     0x1.69eb4cp-33f, 0.0f, 0x1.3a109cp-72f, 0x1.82a9d4p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5fffbap-98f, 0.0f, 0.0f, 0x1.d2becep-82f, 0.0f,
     0x1.55817ep-77f, 0.0f, 0.0f, 0x1.8e6b3p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0a7a8p-10f, 0x1.6ef466p-69f, 0.0f, 0.0f, 0x1.b8a6a2p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1057f4p-109f, 0.0f, 0.0f, 0x1.2504d8p-22f, 0.0f, 0x1.70292p-46f, 0.0f,
     0x1.5bb566p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.217922p-118f, 0.0f, 0x1.49ba96p-92f,
     0.0f, 0x1.381e04p-120f, 0x1.227dacp-87f, 0.0f, 0.0f, 0.0f, 0x1.1eeef2p-116f,
     0.0f, 0x1.b1ba6cp-112f, 0x1.4c2b6cp-118f, 0x1.d3de24p-87f, 0x1.010a4cp-77f,
     0x1.437848p-7f, 0.0f, 0.0f, 0x1.864d44p-19f, 0x1.cb72cap-108f, 0.0f,
     0x1.bf8b76p-117f, 0x1.3687dp-119f, 0.0f, 0x1.b37908p-61f, 0.0f, 0x1.bda456p-10f,
     0.0f, 0x1.4a8774p-59f, 0.0f, 0x1.c13a7ep-117f, 0x1.cb6914p-77f, 0x1.b63084p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a88376p-115f, 0.0f, 0x1.1b5fep-79f, 0.0f, 0.0f,
     0x1.be503ep-36f, 0x1.0b926cp-107f, 0.0f, 0x1.0bd8fp-68f, 0x1.2e28a4p-95f,
     0x1.1c10a6p-117f, 0x1.3fbf3ep-19f, 0x1.ed35a6p-97f, 0x1p0f, 0x1.a85c3cp-118f,
     0x1.a8733ap-8f, 0.0f, 0x1.466a7cp-21f, 0x1.33443ap-109f, 0x1.4010d6p-21f,
     0x1.6d2494p-92f, 0x1.45ef1ap-17f, 0.0f, 0x1.54da62p-87f, 0x1.df40fp-74f, 0.0f,
     0.0f, 0x1.d6faaep-38f, 0.0f, 0x1.6447b8p-34f, 0.0f, 0x1.ea3d9p-90f, 0.0f,
     0x1.46e0eap-71f, 0x1.b1dfc8p-103f, 0x1.57f902p-114f, 0x1.7e39bp-1f,
     0x1.5976bep-32f, 0x1.0562bap-104f, 0.0f, 0x1.941a26p-101f, 0.0f, 0.0f,
     0x1.f6ef1ap-124f, 0.0f, 0x1.4d7ce2p-80f, 0x1.69e9d2p-50f, 0.0f, 0x1.8f6c6ep-54f,
     0x1.8303eap-114f, 0x1.f5c596p-93f, 0.0f, 0x1.3524b2p-46f, 0x1.253b26p-31f,
     0x1.71b11ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c17186p-58f,
     0x1.ac4224p-6f, 0x1.920276p-25f, 0x1.148b16p-22f, 0x1.619576p-105f, 0.0f,
     0x1.2c4e6ap-13f, 0x1.2914fcp-115f, 0x1.35512ep-94f, 0.0f, 0x1.706a86p-49f, 0.0f,
     0x1.55b89ep-33f, 0.0f, 0x1.4e2e5cp-70f, 0.0f, 0.0f, 0x1.8a6992p-72f, 0.0f, 0.0f,
     0x1.d838d2p-122f, 0x1.3e669ep-13f, 0.0f, 0.0f, 0x1.ce9514p-102f, 0.0f, 0.0f,
     0.0f, 0x1.e199e8p-74f, 0.0f, 0x1.09db64p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa14b2p-82f, 0.0f, 0.0f, 0x1.a1dff8p-102f, 0x1.598bb4p-69f, 0x1.2f507cp-95f,
     0x1.a52802p-27f, 0.0f, 0.0f, 0.0f, 0x1.37273p-43f, 0x1.1869f4p-67f, 0.0f,
     0x1.92199cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1433c2p-32f, 0.0f,
     0x1.5ff4dep-77f, 0x1.956f02p-86f, 0.0f, 0x1.a95a6ap-82f, 0.0f, 0x1.f74e1cp-119f,
     0x1.15c08p-72f, 0.0f, 0.0f, 0x1.ad4f76p-126f, 0x1.5342e4p-21f, 0x1.37ee0ap-119f,
     0.0f, 0x1.5d7a2ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75df2ap-30f, 0x1.474bap-16f,
     0x1.5175ccp-79f, 0.0f, 0x1p0f, 0x1.8940aap-111f, 0.0f, 0x1.ae0d08p-2f, 0.0f,
     0x1p0f, 0x1.aeae82p-126f, 0x1.b5d646p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4948ecp-74f, 0x1.7bfeeap-123f, 0x1.8cc078p-81f, 0x1.72b9e2p-34f, 0.0f,
     0x1.c64be2p-23f, 0x1.14429p-74f, 0x1.f98b84p-29f, 0.0f, 0.0f, 0.0f,
     0x1.758f4cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd8618p-49f, 0x1.2ecce4p-86f,
     0.0f, 0.0f, 0x1.d7fc3cp-25f, 0x1.a60408p-80f, 0.0f, 0x1.116c3p-40f,
     0x1.7ee676p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.affe5ep-42f,
     0x1.a1260cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e66b6cp-100f, 0.0f,
     0x1.6915e6p-114f, 0x1.70bb26p-30f, 0.0f, 0x1.c99f7ap-119f, 0x1.1d057ep-82f, 0.0f,
     0x1.8ff9dep-78f, 0.0f, 0.0f, 0x1p0f, 0x1.1bd8d6p-42f, 0.0f, 0.0f,
     0x1.1c153ep-110f, 0.0f, 0.0f, 0.0f, 0x1.244dc6p-69f, 0x1.ae80ep-81f,
     0x1.94326p-99f, 0x1.93198p-35f, 0x1.5326b8p-56f, 0.0f, 0.0f, 0x1.94e29cp-121f,
     0.0f, 0x1.a1737p-115f, 0x1.258124p-13f, 0.0f, 0x1.b03e32p-118f, 0x1.61c74cp-52f,
     0.0f, 0x1.03465ap-87f, 0.0f, 0x1.b4f722p-63f, 0x1.19a76ap-54f, 0.0f,
     0x1.99e2cp-38f, 0.0f, 0x1.9bc828p-88f, 0x1.73604ep-51f, 0x1.ea8f4p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.86935cp-66f, 0x1.cc104ep-20f, 0x1.19360cp-79f,
     0x1.72ce1p-17f, 0x1.959cbap-88f, 0x1.8afbb8p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d97d04p-83f, 0.0f, 0.0f, 0.0f, 0x1.86ab0ap-122f, 0x1.05202cp-23f,
     0x1.5ae5ecp-45f, 0x1.302008p-63f, 0x1.88595cp-67f, 0.0f, 0.0f, 0.0f,
     0x1.d49232p-20f, 0x1.3100dep-86f, 0.0f, 0x1.fee014p-22f, 0x1.e4da62p-80f,
     0x1.da68c8p-63f, 0x1.f898eap-110f, 0.0f, 0.0f, 0x1.3dd02p-25f, 0.0f,
     0x1.349c22p-118f, 0x1.c836dp-77f, 0x1.07130ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.562e4ap-56f, 0.0f, 0.0f, 0x1.3ebef6p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.930f6p-2f, 0x1.68bdccp-29f, 0x1.71a496p-39f, 0x1.d6d976p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.68b64ap-38f, 0x1.d9743cp-72f, 0x1.b62ba4p-16f, 0.0f,
     0x1.41c1bp-62f, 0.0f, 0x1.9f928p-24f, 0.0f, 0.0f, 0x1.8f9bc6p-9f, 0.0f, 0.0f,
     0x1.5c497cp-32f, 0x1.28c14cp-79f, 0.0f, 0x1.d923e8p-103f, 0x1.bc489ep-6f, 0.0f,
     0.0f, 0x1.ecbc98p-34f, 0x1.2192cp-13f, 0.0f, 0x1.04169ap-17f, 0.0f,
     0x1.2f08dap-96f, 0x1.d089bap-41f, 0x1.a5c2a6p-95f, 0x1.91bb5ep-83f, 0.0f, 0.0f,
     0x1.74d66cp-94f, 0x1.59c852p-126f, 0x1.1fd222p-22f, 0x1.2f650ep-52f, 0.0f,
     0x1.6b6826p-72f, 0.0f, 0.0f, 0.0f, 0x1.7771b4p-82f, 0x1.b3d612p-118f, 0.0f, 0.0f,
     0x1.db9c98p-49f, 0.0f, 0x1.8ee4fp-114f, 0.0f, 0.0f, 0x1.07587ep-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ed00a4p-38f, 0.0f, 0.0f, 0.0f, 0x1.79908p-82f, 0x1.8d8f78p-51f,
     0x1.50aa3p-40f, 0x1.1ba29p-29f, 0x1.af89c4p-115f, 0.0f, 0.0f, 0.0f,
     0x1.dc637p-20f, 0x1.6bea0ap-68f, 0x1.a0bd5p-71f, 0.0f, 0x1.0aafeap-31f,
     0x1.20b08ap-12f, 0x1.c67a52p-71f, 0x1.d08becp-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48a7ecp-106f, 0.0f, 0.0f, 0x1.3f844p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c9b126p-45f, 0x1.4bff7p-14f, 0x1.1f883cp-88f,
     0x1.bf0246p-123f, 0.0f, 0x1.7f308ep-68f, 0.0f, 0x1.e53514p-11f, 0x1.ffef3p-60f,
     0.0f, 0.0f, 0x1.ebd3p-69f, 0x1.f14034p-68f, 0x1.2f8dcp-35f, 0.0f,
     0x1.cd161p-115f, 0x1.1f13a4p-107f, 0.0f, 0.0f, 0x1.0b6cd4p-67f, 0x1.5da7dap-36f,
     0x1.bdfb08p-53f, 0.0f, 0x1.c9b8bep-99f, 0.0f, 0x1.a1c51cp-30f, 0.0f,
     0x1.941c1ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fd1e8p-123f, 0x1.0e691cp-37f,
     0x1.115158p-120f, 0.0f, 0.0f, 0.0f, 0x1.46e61cp-28f, 0.0f, 0x1.1b0b28p-56f,
     0x1.3dfbap-78f, 0x1.d3543ep-19f, 0.0f, 0x1.f84dbep-64f, 0x1.9dd956p-119f, 0.0f,
     0x1.34beb6p-105f, 0x1.64304ap-58f, 0x1.b56ebep-77f, 0x1.57cc5ep-48f, 0.0f,
     0x1.f855fp-82f, 0x1.c6a9fcp-118f, 0x1.383e16p-38f, 0.0f, 0.0f, 0.0f,
     0x1.11ea9cp-21f, 0x1.193f2p-120f, 0x1.2b28d4p-120f, 0x1.6d764p-46f, 0.0f, 0.0f,
     0x1.cf2cf6p-27f, 0.0f, 0x1.f4e3cep-3f, 0.0f, 0.0f, 0x1.ba1a8cp-17f, 0.0f, 0.0f,
     0x1.a384a4p-47f, 0.0f, 0x1.6501bcp-80f, 0.0f, 0x1.e7f16ep-2f, 0.0f, 0.0f,
     0x1.8d2d18p-31f, 0.0f, 0x1.54300cp-55f, 0.0f, 0.0f, 0.0f, 0x1.2c0cep-55f, 0.0f,
     0x1.51d4f8p-55f, 0x1.c82916p-60f, 0x1.aa0eccp-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e61bap-105f
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
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp2 = Sleef_finz_remainderf4_avx2128(tmp0, tmp1);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_remainderf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_remainderf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
