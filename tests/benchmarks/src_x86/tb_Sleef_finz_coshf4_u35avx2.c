/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf4_u35avx2128.c --function \
 *     Sleef_finz_coshf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0x1.779122p-62f, 0x1.522db8p-102f, 0.0f, 0x1.64feb2p-72f, 0.0f, 0x1.a6c90ep-53f,
     0.0f, 0x1.ce0854p-39f, 0x1.34d244p-97f, 0.0f, 0.0f, 0x1.3be85ap-97f, 0.0f,
     0x1.08aef4p-103f, 0x1.acd91ap-25f, 0.0f, 0.0f, 0.0f, 0x1.87d6fap-63f, 0.0f,
     0x1.0cef5ep-107f, 0.0f, 0x1.0da958p-48f, 0.0f, 0.0f, 0x1.7cc48ap-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e79e9ep-119f, 0.0f, 0x1.e75b7ep-63f, 0.0f, 0.0f, 0.0f,
     0x1.005074p-34f, 0.0f, 0x1.2e024ap-37f, 0x1.7468d8p-116f, 0.0f, 0x1.7ceea6p-28f,
     0.0f, 0.0f, 0.0f, 0x1.aa2c34p-60f, 0x1.e93708p-21f, 0.0f, 0.0f, 0.0f,
     0x1.f4afb8p-122f, 0.0f, 0.0f, 0.0f, 0x1.651b3p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1a525ap-37f, 0.0f, 0x1.d1fadcp-30f, 0.0f, 0x1.96124cp-67f,
     0x1.d0fe5ap-82f, 0x1.7574dep-100f, 0x1.67994cp-57f, 0x1.a0d264p-54f,
     0x1.8a467ap-119f, 0.0f, 0x1.9bf38p-89f, 0x1.306bb6p-52f, 0x1.09a13ap-102f,
     0x1.ee1696p-33f, 0x1.c0c29p-66f, 0.0f, 0.0f, 0x1.8e96c4p-83f, 0.0f,
     0x1.ec8d8ep-18f, 0x1.15495ap-105f, 0x1.220472p-62f, 0.0f, 0.0f, 0x1.96b912p-116f,
     0.0f, 0.0f, 0x1.4fbf6cp-121f, 0x1.2b18d6p-85f, 0x1.5be74ep-81f, 0.0f, 0.0f, 0.0f,
     0x1.419b42p-20f, 0.0f, 0.0f, 0.0f, 0x1.adb4f4p-99f, 0x1.c25a3ap-71f, 0.0f,
     0x1.fedb6ap-95f, 0x1.fa6926p-33f, 0.0f, 0.0f, 0.0f, 0x1.a204ccp-67f,
     0x1.7bdd2p-51f, 0x1.155c2cp-44f, 0x1.7606c8p-125f, 0x1.d4178ap-25f,
     0x1.5ad3ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.247654p-5f, 0.0f, 0x1.c170a2p-10f, 0.0f, 0x1.a2d442p-39f,
     0x1.bad9ecp-75f, 0x1.fdce02p-17f, 0.0f, 0x1.c5133ap-43f, 0x1.a49ea6p-58f,
     0x1.7402cp-90f, 0.0f, 0x1.fcab92p-49f, 0.0f, 0.0f, 0x1.ffebfep-11f, 0.0f, 0.0f,
     0x1.bcb542p-60f, 0x1.b42e4p-40f, 0.0f, 0x1.9c4336p-31f, 0.0f, 0x1.a0c1bcp-114f,
     0x1.422a56p-119f, 0.0f, 0x1.a1f104p-115f, 0x1.106e84p-96f, 0.0f, 0x1.94b618p-4f,
     0.0f, 0.0f, 0x1.41b776p-55f, 0.0f, 0x1.d739cp-6f, 0x1.6352cap-100f, 0.0f, 0.0f,
     0.0f, 0x1.e72dd8p-45f, 0.0f, 0.0f, 0.0f, 0x1.d1629p-90f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.e60856p-4f, 0x1.9ff58ap-40f, 0.0f, 0x1.908fd4p-58f, 0x1.31263p-13f,
     0.0f, 0x1.aa25ep-16f, 0x1.8bbac2p-110f, 0.0f, 0x1.75081ap-125f, 0x1.e70b6cp-83f,
     0x1.84bd18p-21f, 0.0f, 0x1.5207f8p-4f, 0.0f, 0.0f, 0.0f, 0x1.de1dp-7f, 0.0f,
     0.0f, 0.0f, 0x1.db3f94p-75f, 0x1.c82772p-35f, 0.0f, 0x1.bed6p-5f, 0.0f, 0.0f,
     0x1.e56cdp-89f, 0.0f, 0x1.5273d4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.018b22p-5f, 0x1.1cd358p-52f, 0.0f, 0x1.f3a958p-93f,
     0x1.02e8c8p-70f, 0.0f, 0.0f, 0x1.a06386p-69f, 0x1.639b12p-112f, 0.0f, 0.0f,
     0x1.5947f8p-6f, 0x1.481382p-53f, 0.0f, 0.0f, 0x1.98b412p-17f, 0.0f,
     0x1.03d3b8p-94f, 0x1.7206dp-4f, 0.0f, 0.0f, 0x1.94ba64p-90f, 0x1.7ab92p-94f,
     0x1.275346p-105f, 0x1.6bb11ep-84f, 0x1.47e7e2p-19f, 0x1.76fa6cp-56f,
     0x1.57a708p-91f, 0.0f, 0.0f, 0x1.f6305p-46f, 0.0f, 0x1.baabeep-31f, 0.0f, 0.0f,
     0x1.7605fep-11f, 0x1.564788p-108f, 0x1.9a0ep-10f, 0x1.311c5cp-58f, 0.0f,
     0x1.38e7e2p-68f, 0x1.7281a4p-82f, 0.0f, 0x1.924444p-93f, 0x1.402d8p-126f, 0.0f,
     0x1.e63c6cp-121f, 0x1.77e81ep-54f, 0.0f, 0x1.7f2d04p-79f, 0.0f, 0x1.17e204p-21f,
     0x1.5faf6cp-49f, 0.0f, 0.0f, 0x1.fbb52p-99f, 0x1.b1f4bp-85f, 0.0f, 0.0f, 0.0f,
     0x1.5da1bp-58f, 0.0f, 0.0f, 0x1.c61f86p-36f, 0x1.db40fap-88f, 0.0f,
     0x1.cff6a2p-3f, 0.0f, 0.0f, 0x1.e7917ep-83f, 0.0f, 0x1.a8ccbep-68f,
     0x1.7cb2cap-70f, 0.0f, 0.0f, 0x1.e0acd6p-71f, 0.0f, 0x1.047bfp-3f, 0.0f,
     0x1.a0856ap-61f, 0x1.a864bcp-26f, 0x1.7fa284p-46f, 0.0f, 0x1.a871c6p-68f, 0.0f,
     0x1.70b7d4p-53f, 0x1.61ef7p-38f, 0x1.986138p-78f, 0.0f, 0x1.78e43p-13f,
     0x1.466244p-75f, 0x1.d2db6p-68f, 0x1.807ca2p-19f, 0x1.1ef06p-85f, 0.0f, 0.0f,
     0.0f, 0x1.4016aap-86f, 0x1.7ba86ap-11f, 0.0f, 0.0f, 0x1.a52bb8p-33f, 0.0f,
     0x1.fd51b8p-98f, 0x1.1bd456p-82f, 0.0f, 0.0f, 0.0f, 0x1.133d6ap-72f,
     0x1.4f3e4cp-55f, 0.0f, 0.0f, 0x1.5916fep-19f, 0.0f, 0x1.32a85cp-89f,
     0x1.afb84ep-115f, 0.0f, 0x1.234784p-22f, 0.0f, 0x1.c04232p-74f, 0x1.21fafcp-72f,
     0x1.5e8a78p-68f, 0x1.d4eeccp-105f, 0.0f, 0x1.1d5d48p-24f, 0x1.aa30eep-121f, 0.0f,
     0.0f, 0x1.243bc2p-58f, 0.0f, 0x1.ffc5e2p-123f, 0.0f, 0x1.9bf1bap-87f,
     0x1.82e12cp-23f, 0.0f, 0x1.e9887ep-36f, 0x1.ba0b46p-96f, 0x1.b98012p-50f,
     0x1.e18acp-36f, 0.0f, 0x1.f9743ep-124f, 0.0f, 0x1.5daa14p-116f, 0.0f,
     0x1.b5563p-116f, 0.0f, 0x1.cf05bep-62f, 0x1.e19798p-114f, 0x1.5d4fd6p-62f,
     0x1.09ac1cp-13f, 0x1.c9dfp-9f, 0x1.558822p-33f, 0.0f, 0.0f, 0x1.69aaa4p-111f,
     0.0f, 0.0f, 0x1.2abc2cp-72f, 0.0f, 0.0f, 0x1.d5ef8ap-108f, 0.0f, 0.0f,
     0x1.689276p-65f, 0.0f, 0x1.532b2p-99f, 0x1.1d738p-21f, 0x1.ae9a42p-2f, 0.0f,
     0.0f, 0x1.9b031ap-99f, 0.0f, 0.0f, 0x1.3b166ep-77f, 0x1.e2433ap-85f,
     0x1.e3355ap-116f, 0x1.5638bp-11f, 0.0f, 0.0f, 0x1.236e6ap-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0773eap-71f, 0x1.125bf8p-77f, 0.0f, 0x1.80b2p-99f, 0.0f, 0.0f, 0.0f,
     0x1.9263f4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a477ep-21f, 0x1.7a4726p-102f,
     0x1.ccaf62p-82f, 0x1.f18db4p-104f, 0.0f, 0x1.c7c2dcp-76f, 0x1.d13e7cp-116f,
     0x1.3e31fcp-70f, 0.0f, 0.0f, 0x1.2ae0c4p-58f, 0.0f, 0x1.c9f8e4p-114f,
     0x1.19fa3p-98f, 0.0f, 0.0f, 0.0f, 0x1.a72a48p-33f, 0.0f, 0.0f, 0.0f,
     0x1.586a82p-31f, 0x1.b647p-107f, 0.0f, 0.0f, 0x1.e441cap-101f, 0x1.52853cp-115f,
     0.0f, 0.0f, 0x1.94798ap-33f, 0.0f, 0x1.001d24p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27b29p-89f, 0.0f, 0x1.49aa5ep-63f, 0x1.a2652ep-59f, 0x1.133204p-74f, 0.0f,
     0x1.5606b6p-95f, 0x1.16e7d8p-75f, 0.0f, 0.0f, 0.0f, 0x1.6d213ep-88f,
     0x1.e4b04ep-60f, 0.0f, 0x1.a65428p-57f, 0.0f, 0x1.71f524p-69f, 0x1.e6a76ep-25f,
     0x1.2c4daep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ac29cp-98f, 0.0f, 0.0f,
     0.0f, 0x1.6496f4p-126f, 0x1.e3104cp-115f, 0.0f, 0x1.9de004p-2f, 0.0f, 0.0f,
     0x1.2fbb9ep-66f, 0x1.91d04p-73f, 0.0f, 0.0f, 0x1.04a774p-65f, 0x1.8effaap-123f,
     0x1.c84f06p-56f, 0.0f, 0.0f, 0x1.3e3f9cp-73f, 0x1.cd4fc6p-71f, 0.0f,
     0x1.166d3ep-1f, 0x1.312dep-42f, 0x1.75b3a8p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46eb7ep-91f, 0x1.e90e4ep-21f, 0.0f, 0.0f, 0x1.f3efe4p-103f, 0x1.3da282p-79f,
     0x1.88a016p-14f, 0x1.8745c8p-38f, 0.0f, 0x1.bc9976p-57f, 0.0f, 0.0f,
     0x1.f466dep-69f, 0x1.0c1f66p-70f, 0.0f, 0x1.0945cep-24f, 0.0f, 0x1.a5a968p-17f,
     0x1.07c514p-93f, 0x1.1a8a32p-46f, 0.0f, 0.0f, 0x1.e5870ap-79f, 0.0f,
     0x1.01e71cp-89f, 0x1.14f34cp-104f, 0.0f, 0x1.f5e898p-52f, 0x1.43fbc8p-55f, 0.0f,
     0.0f, 0.0f, 0x1.4324d4p-67f, 0x1.2f92fp-108f, 0.0f, 0.0f, 0.0f, 0x1.6a89d2p-13f,
     0.0f, 0x1.f0de8cp-109f, 0.0f, 0x1.1a6b88p-19f, 0x1.9ed0a6p-102f, 0x1.1081b8p-4f,
     0x1.5f4f2ap-38f, 0.0f, 0.0f, 0x1.a147d2p-26f, 0.0f, 0x1.7f5a58p-38f, 0.0f,
     0x1.12c366p-27f, 0.0f, 0.0f, 0x1.4dd468p-125f, 0.0f, 0.0f, 0.0f, 0x1.143faep-20f,
     0.0f, 0.0f, 0.0f, 0x1.9e974ep-26f, 0.0f, 0x1.462d3cp-102f, 0x1.636568p-50f, 0.0f,
     0x1.364ae2p-42f, 0.0f, 0x1.92ea06p-81f, 0x1.490694p-2f, 0.0f, 0.0f,
     0x1.2dec58p-75f, 0x1.5b2a1ep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb9ecp-21f,
     0x1.763c04p-104f, 0x1.0a92b2p-49f, 0.0f, 0.0f, 0.0f, 0x1.3adb3cp-66f,
     0x1.cd18eep-53f, 0.0f, 0.0f, 0x1.f37868p-44f, 0x1.8a6f28p-8f, 0.0f,
     0x1.6cada6p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5ea1ep-125f, 0.0f, 0.0f,
     0x1.cd5ac2p-103f, 0x1.07b17cp-1f, 0x1.fdb1d8p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a83a6p-35f, 0x1.4f6ea8p-51f, 0x1.edbd86p-114f, 0.0f, 0x1.c45fp-108f,
     0x1.2528d2p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf587ep-63f,
     0x1.6e8a8cp-60f, 0x1.8013b2p-20f, 0x1.a5c3cap-6f, 0.0f, 0x1.27a19ep-43f,
     0x1.826aep-57f, 0x1.450f3cp-29f, 0x1.11b374p-58f, 0x1.dc291cp-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b9e242p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6094dep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fef6fcp-53f, 0x1.babfbcp-49f,
     0.0f, 0x1.53456p-64f, 0.0f, 0.0f, 0.0f, 0x1.890c14p-37f, 0x1.458476p-58f,
     0x1.515044p-60f, 0.0f, 0x1.72f592p-67f, 0.0f, 0.0f, 0x1.539e56p-23f, 0.0f, 0.0f,
     0.0f, 0x1.c7755ep-25f, 0.0f, 0x1.bf2f26p-78f, 0x1.7fcf8cp-1f, 0.0f,
     0x1.0b44d8p-123f, 0x1.f4307cp-26f, 0.0f, 0.0f, 0x1.222bbap-84f, 0.0f, 0.0f,
     0x1.4b23ecp-5f, 0.0f, 0.0f, 0x1.7ee952p-88f, 0.0f, 0.0f, 0x1.52b3cap-38f, 0.0f,
     0x1.e566bcp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b34b6ap-120f, 0.0f,
     0x1.f17c1cp-38f, 0.0f, 0x1.f4398ap-115f, 0x1.269818p-16f, 0.0f, 0x1.8d5e5cp-11f,
     0.0f, 0x1.f40d84p-41f, 0x1.6da682p-42f, 0x1.4d5896p-25f, 0x1.5f8602p-45f, 0.0f,
     0.0f, 0.0f, 0x1.62adap-48f, 0.0f, 0.0f, 0x1.995b9ap-89f, 0.0f, 0.0f,
     0x1.75aa88p-55f, 0.0f, 0x1.096014p-82f, 0x1.f18c58p-101f, 0.0f, 0x1.e98e46p-49f,
     0.0f, 0.0f, 0x1.8a5b1ep-113f, 0.0f, 0x1.9d8e52p-110f, 0.0f, 0.0f,
     0x1.330e32p-65f, 0.0f, 0x1.6352bp-101f, 0x1.a1bb5ep-27f, 0.0f, 0.0f, 0.0f,
     0x1.d643fep-35f, 0x1.1296bep-106f, 0x1.33f8fep-96f, 0.0f, 0.0f, 0.0f,
     0x1.f8811p-123f, 0x1.d6c566p-41f, 0.0f, 0x1.9fcf58p-12f, 0x1.973348p-93f, 0.0f,
     0x1.05e322p-125f, 0x1.91126cp-40f, 0.0f, 0.0f, 0x1.b3ee3cp-78f, 0.0f, 0.0f,
     0x1.7ec2dcp-13f, 0x1.307bbp-10f, 0.0f, 0.0f, 0x1.32593cp-94f, 0x1.95377cp-99f,
     0x1.f6b2bp-75f, 0x1.995464p-24f, 0.0f, 0.0f, 0x1.afbbdcp-1f, 0.0f,
     0x1.37572ep-101f, 0.0f, 0x1.07533p-95f, 0x1.74db72p-68f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.804fe6p-43f, 0.0f, 0.0f, 0.0f, 0x1.497b9cp-122f, 0.0f,
     0x1.0cc378p-44f, 0x1.971ba2p-6f, 0.0f, 0.0f, 0x1.40d454p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9a47ap-87f, 0.0f, 0x1.c29fb4p-126f, 0x1.981ea6p-2f, 0x1.75d6fp-6f,
     0.0f, 0x1.5bf3dap-48f, 0.0f, 0x1.697a1ap-44f, 0.0f, 0x1.e93368p-102f,
     0x1.0368e2p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.238288p-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eb206cp-9f, 0.0f, 0x1.c87424p-92f, 0x1.495a76p-71f, 0.0f,
     0.0f, 0.0f, 0x1.50dc64p-114f, 0x1.884d16p-61f, 0x1.70e122p-74f, 0.0f, 0.0f,
     0x1.7cfbeap-4f, 0.0f, 0x1.ba6934p-54f, 0.0f, 0x1.412d24p-92f, 0x1.3d3374p-35f,
     0.0f, 0x1.82a43ap-10f, 0x1.9cb99ep-70f, 0x1.380b96p-12f, 0x1.aad42cp-8f,
     0x1.bdebc4p-71f, 0.0f, 0x1.a0e828p-43f, 0x1.6cd6eap-55f, 0.0f, 0x1.cd551cp-36f,
     0.0f, 0x1.bbe1cp-1f, 0x1.8d957cp-84f, 0x1.d1da9cp-126f, 0.0f, 0x1.a0c4f2p-18f,
     0x1.63da54p-114f, 0x1.933e64p-44f, 0x1.ced02cp-68f, 0.0f, 0.0f, 0x1.88c30cp-96f,
     0x1.2c3a4ep-110f, 0x1.57b63ep-42f, 0x1.97c786p-64f, 0.0f, 0x1.28922ap-96f,
     0x1.3f45c2p-121f, 0x1.083d3ap-116f, 0.0f, 0.0f, 0x1.a5f1b8p-106f,
     0x1.d0c14ap-17f, 0.0f, 0.0f, 0.0f, 0x1.6635e2p-50f, 0x1.f8a1acp-95f,
     0x1.aebebap-30f, 0x1.0926e6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4349ep-89f,
     0x1.c5d04cp-87f, 0.0f, 0x1.a2d3a6p-4f, 0x1.3479e4p-50f, 0.0f, 0.0f,
     0x1.9888f6p-22f, 0x1.1efb12p-6f, 0.0f, 0x1.06f6p-103f, 0x1.b67304p-106f,
     0x1.5cb002p-45f, 0.0f, 0x1.94e87p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6663b2p-94f, 0.0f, 0x1.9bc6dap-123f, 0.0f, 0.0f, 0x1.c6a7fp-95f, 0.0f,
     0x1.31cda4p-101f, 0.0f, 0.0f, 0.0f, 0x1.173806p-64f, 0.0f, 0.0f, 0x1.8a654cp-13f,
     0x1.6cc9dp-118f, 0.0f, 0x1p0f, 0x1.453e64p-21f, 0x1.d898eap-100f, 0.0f,
     0x1.f5c92ap-45f, 0x1.095b1ep-64f, 0x1.16d934p-84f, 0.0f, 0x1.8e357cp-41f, 0.0f,
     0.0f, 0x1.77efccp-26f, 0x1.1c201p-11f, 0.0f, 0x1.519efcp-26f, 0x1.71edacp-36f,
     0.0f, 0x1.3f4bd2p-4f, 0x1.ee4d94p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbdbb4p-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b3826p-15f, 0.0f, 0x1.0b1ebcp-76f,
     0x1.08db36p-29f, 0.0f, 0.0f, 0x1.80d3p-61f, 0x1.032ca8p-83f, 0.0f,
     0x1.cb9b22p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abb158p-27f, 0.0f, 0x1.5034e8p-47f,
     0.0f, 0x1.61b4a2p-51f, 0.0f, 0.0f, 0.0f, 0x1.2879a4p-108f, 0x1.2559e8p-112f,
     0x1.22a89p-106f, 0x1.0dc9bap-18f, 0.0f, 0x1.95e4dep-14f, 0.0f, 0.0f, 0.0f,
     0x1.bfe18cp-89f, 0x1.b34e24p-110f, 0.0f, 0x1.7d15e8p-126f, 0x1.c2961p-35f, 0.0f,
     0.0f, 0x1.8fca28p-121f, 0.0f, 0x1.9a8cdp-17f, 0.0f, 0x1.aeec04p-100f,
     0x1.40570ep-124f, 0.0f, 0.0f, 0x1.3ea25ap-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e2488p-88f, 0.0f, 0.0f, 0x1.6acdfap-99f, 0.0f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_coshf4_u35avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
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
    printf("Sleef_finz_coshf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_coshf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
