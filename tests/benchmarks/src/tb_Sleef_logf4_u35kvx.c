/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf4_u35kvx.c --function Sleef_logf4_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
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
     0.0f, 0x1.ad25f4p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0632f2p-41f, 0x1.693d1ap-79f,
     0.0f, 0.0f, 0.0f, 0x1.b0f388p-43f, 0.0f, 0x1.e57a92p-1f, 0x1.46e352p-102f,
     0x1.35146p-97f, 0x1.1f38d4p-99f, 0.0f, 0.0f, 0x1.4ddd2ep-46f, 0x1.da1be6p-52f,
     0x1.39b768p-95f, 0x1.dcd0d2p-84f, 0.0f, 0.0f, 0x1.8ef244p-96f, 0x1.d6de26p-102f,
     0x1.cd140ep-19f, 0x1.387b56p-80f, 0x1.c5f7cap-119f, 0.0f, 0x1.7722fap-72f,
     0x1.5f48f2p-96f, 0x1.e6829p-116f, 0.0f, 0.0f, 0.0f, 0x1.591c08p-31f,
     0x1.c40758p-8f, 0.0f, 0x1.d70c8p-92f, 0.0f, 0.0f, 0.0f, 0x1.1ada08p-30f, 0.0f,
     0.0f, 0x1.f237ecp-71f, 0.0f, 0.0f, 0x1.edb6dp-1f, 0x1.0d4638p-50f, 0.0f,
     0x1.cb41dcp-25f, 0x1.824adcp-56f, 0.0f, 0.0f, 0x1.71e99cp-61f, 0x1.3539eap-6f,
     0x1.ba65c8p-1f, 0.0f, 0x1.7ef3bcp-17f, 0.0f, 0x1.4500dcp-45f, 0x1.6c6018p-34f,
     0.0f, 0x1.d0d5dp-30f, 0.0f, 0x1.f2922ap-15f, 0x1.e18458p-4f, 0x1.2da9d6p-28f,
     0x1.4b56bcp-112f, 0x1.677258p-87f, 0.0f, 0.0f, 0x1.1b266p-68f, 0x1.e73ef6p-102f,
     0x1.441a5cp-9f, 0.0f, 0.0f, 0x1.77f4ccp-16f, 0x1.6f5edep-83f, 0.0f,
     0x1.7b6606p-45f, 0.0f, 0x1.4aefccp-18f, 0x1.9a8868p-9f, 0x1.62d106p-110f, 0.0f,
     0x1.a5a44p-87f, 0x1.b64714p-124f, 0.0f, 0.0f, 0x1.39debap-52f, 0.0f,
     0x1.044e1cp-54f, 0.0f, 0x1.478bf2p-75f, 0.0f, 0x1.52e0a4p-13f, 0.0f,
     0x1.439324p-19f, 0.0f, 0.0f, 0x1.983796p-10f, 0x1.d56b2ep-5f, 0x1.c39e16p-6f,
     0x1.d58d24p-117f, 0x1.8d9ca2p-105f, 0x1.356e08p-85f, 0x1.9e8e24p-118f,
     0x1.58f8dap-59f, 0.0f, 0.0f, 0.0f, 0x1.60c84cp-65f, 0x1.e9207ep-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aaed48p-3f, 0.0f, 0x1.3a5bbap-126f, 0x1.cf2102p-114f, 0.0f,
     0x1.40d6cep-18f, 0.0f, 0x1.9e9f78p-14f, 0.0f, 0.0f, 0x1.6cb40ap-108f, 0.0f,
     0x1.2ddaa4p-104f, 0.0f, 0x1.7723d2p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b86ef4p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45ce8ep-89f, 0x1.aa9b0ep-93f,
     0x1.69eca4p-70f, 0.0f, 0x1.a18e3ap-52f, 0x1.e7c542p-15f, 0x1.f844ep-45f, 0.0f,
     0x1.6049b2p-45f, 0.0f, 0x1.65183ap-110f, 0.0f, 0.0f, 0x1.24f762p-91f,
     0x1.4fbce8p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c66922p-102f,
     0x1.e96abap-104f, 0x1.414ddep-93f, 0x1.dfec52p-16f, 0x1.3d654p-30f, 0.0f, 0.0f,
     0x1.28a17ap-116f, 0.0f, 0x1.18082ap-40f, 0x1.972104p-48f, 0x1.69c8f6p-35f,
     0x1.ba2c22p-55f, 0.0f, 0x1.240ca4p-3f, 0x1.209cap-122f, 0x1.b1620ep-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e0e4ap-14f, 0.0f, 0x1.9b607ep-5f, 0.0f,
     0x1.55c54cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.390442p-9f, 0.0f,
     0x1.b8ee2cp-97f, 0.0f, 0.0f, 0.0f, 0x1.867518p-78f, 0x1.d63688p-65f,
     0x1.f5719ap-11f, 0.0f, 0x1.5e3258p-79f, 0.0f, 0.0f, 0.0f, 0x1.6c73b8p-33f,
     0x1.d36f12p-22f, 0x1.9642acp-120f, 0x1.d2e676p-86f, 0.0f, 0.0f, 0x1.510edep-118f,
     0x1.eda26cp-5f, 0x1.e9adcap-84f, 0x1.498c52p-123f, 0.0f, 0x1.49a764p-92f,
     0x1.1e5e0cp-105f, 0x1.5ad0c2p-28f, 0.0f, 0x1.eb05bap-56f, 0.0f, 0x1.370368p-34f,
     0x1.e8a79ep-62f, 0.0f, 0.0f, 0.0f, 0x1.24c72ap-34f, 0.0f, 0.0f, 0.0f,
     0x1.65f1dcp-92f, 0.0f, 0x1.d6ce9ap-115f, 0.0f, 0x1.c989ep-102f, 0x1.02a82ep-34f,
     0.0f, 0x1.185d42p-126f, 0x1.77a3e2p-90f, 0.0f, 0x1.8055f6p-27f, 0x1.86be6ap-113f,
     0.0f, 0x1.38f27ap-36f, 0.0f, 0.0f, 0x1.1698e4p-88f, 0x1.3796c6p-117f, 0.0f,
     0x1.bc857p-78f, 0.0f, 0x1.c2895p-32f, 0.0f, 0.0f, 0x1.3ac214p-21f, 0.0f, 0.0f,
     0.0f, 0x1.cfa008p-58f, 0.0f, 0.0f, 0x1.363a48p-80f, 0x1.4db608p-126f, 0.0f,
     0x1.37557ap-121f, 0x1.1c6386p-106f, 0x1.71cc72p-28f, 0x1.8505bcp-32f, 0.0f,
     0x1.267ecep-94f, 0x1.8651aap-23f, 0.0f, 0x1.9d0926p-65f, 0.0f, 0.0f,
     0x1.c87b14p-126f, 0x1.a45a9cp-110f, 0x1.7e5072p-94f, 0x1.b05356p-36f, 0.0f,
     0x1.f52c0ap-97f, 0.0f, 0x1.2f112ap-109f, 0x1.4faf5p-66f, 0.0f, 0.0f,
     0x1.f5470ap-20f, 0x1.b783f6p-113f, 0x1.5f552cp-119f, 0x1.041d5ap-85f,
     0x1.f7ca54p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef2a8p-34f, 0.0f, 0x1.cfe172p-126f,
     0x1.1eb238p-63f, 0x1.d5c99p-25f, 0.0f, 0x1.3c3b32p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac9c04p-22f, 0.0f, 0x1.98b21cp-60f, 0.0f, 0x1.8fadb6p-117f, 0.0f,
     0x1.3dfa8p-95f, 0x1.0751ep-57f, 0x1.1d5b56p-47f, 0x1.c412e8p-117f,
     0x1.b5310ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13024ap-8f, 0x1.88bb42p-2f,
     0.0f, 0.0f, 0x1.0671dep-99f, 0.0f, 0x1.41537ep-112f, 0.0f, 0.0f, 0x1.8d81acp-12f,
     0x1.39677ap-55f, 0x1.c8ca66p-44f, 0x1.cd40c8p-121f, 0x1.2899cap-5f, 0.0f,
     0x1.dc1bp-62f, 0x1.ad55a2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11df1ep-43f,
     0x1.4b151cp-76f, 0x1.87805ap-1f, 0.0f, 0.0f, 0.0f, 0x1.8ce1e2p-104f,
     0x1.e08414p-83f, 0.0f, 0x1.3d546ap-42f, 0.0f, 0x1.c186f4p-90f, 0x1.16442cp-67f,
     0.0f, 0x1.5cf91cp-35f, 0x1.fed5d8p-49f, 0x1.d87672p-106f, 0x1.d55d6ep-19f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93373cp-97f, 0x1.803046p-31f, 0x1.60a49p-61f,
     0x1.a0fdf6p-107f, 0.0f, 0.0f, 0x1.b6dfdep-40f, 0.0f, 0x1.313eb6p-7f,
     0x1.af10d8p-121f, 0x1.f97c46p-57f, 0x1.4d0142p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b795fap-79f, 0.0f, 0x1.1f7718p-34f, 0x1.10edep-92f, 0.0f, 0x1.73c5c6p-72f,
     0x1.cf5c3cp-75f, 0x1.ec51c4p-85f, 0.0f, 0x1.d881bcp-46f, 0x1.b23ffp-46f,
     0x1.c0531ap-65f, 0.0f, 0.0f, 0.0f, 0x1.daac8ap-45f, 0x1.8c5848p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6898a4p-64f, 0.0f, 0x1.ee395cp-91f, 0x1.c09c9ap-66f,
     0x1.bcb2cep-91f, 0x1.63323cp-126f, 0.0f, 0x1.aabab6p-105f, 0x1.ac49aep-55f,
     0x1.a23416p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de91eap-57f, 0.0f, 0x1.d3ad26p-58f,
     0x1.47023cp-104f, 0.0f, 0.0f, 0.0f, 0x1.7e391cp-78f, 0.0f, 0x1.612b6cp-41f, 0.0f,
     0x1.5da8e2p-36f, 0.0f, 0x1.10e212p-16f, 0x1.3a4338p-52f, 0.0f, 0.0f,
     0x1.cde2aap-10f, 0x1.fcf2dap-103f, 0.0f, 0x1.29309ep-78f, 0.0f, 0x1.257a7cp-24f,
     0x1.533396p-61f, 0x1.1a35a2p-115f, 0x1.ba5a32p-5f, 0.0f, 0.0f, 0x1.acad1ep-54f,
     0x1.2861ccp-99f, 0.0f, 0.0f, 0x1.b15996p-64f, 0x1.d23736p-43f, 0x1.23e214p-86f,
     0.0f, 0x1.30dc74p-13f, 0x1.557f5ap-35f, 0x1.0c5ba6p-11f, 0x1.98659p-120f, 0.0f,
     0.0f, 0x1.a331a8p-79f, 0x1.b4accap-74f, 0x1.e7b456p-71f, 0x1.98f5ep-66f,
     0x1.dd53eep-66f, 0x1.69df86p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c6cdp-109f,
     0x1.dd77fp-112f, 0x1.1346d4p-59f, 0.0f, 0.0f, 0x1.302752p-125f, 0x1.59b37ap-36f,
     0.0f, 0.0f, 0x1.906e94p-79f, 0.0f, 0x1.583762p-119f, 0x1.58bad6p-63f,
     0x1.08bed6p-107f, 0.0f, 0x1.8488b8p-55f, 0.0f, 0x1.9f7e42p-37f, 0.0f, 0.0f,
     0x1.029d1cp-120f, 0x1.0b455p-54f, 0x1.adc504p-82f, 0x1p0f, 0.0f, 0.0f,
     0x1.8b9ae8p-59f, 0x1.993454p-72f, 0x1.7be6ecp-59f, 0.0f, 0x1.c567cp-80f,
     0x1.5f9dccp-16f, 0x1.d860c2p-51f, 0x1.1c60e4p-11f, 0x1.5ac224p-56f, 0.0f, 0.0f,
     0x1.7206cap-50f, 0x1.75549ap-73f, 0.0f, 0x1.acc01ap-39f, 0.0f, 0x1.ae84a2p-63f,
     0x1.b512e6p-41f, 0x1.674198p-79f, 0.0f, 0.0f, 0.0f, 0x1.9f1e6p-49f, 0.0f, 0.0f,
     0x1.963496p-112f, 0.0f, 0.0f, 0x1.529abcp-67f, 0.0f, 0.0f, 0.0f, 0x1.92ff2cp-85f,
     0.0f, 0.0f, 0x1.ddec22p-107f, 0x1.c721eap-17f, 0x1.a9f1ep-77f, 0.0f, 0.0f,
     0x1.97c9bep-105f, 0.0f, 0x1.76b016p-76f, 0x1.be57f8p-38f, 0.0f, 0x1.8c0d3cp-52f,
     0.0f, 0x1.011af8p-90f, 0.0f, 0.0f, 0.0f, 0x1.be258p-91f, 0.0f, 0.0f,
     0x1.37e53cp-97f, 0.0f, 0x1.cdf256p-126f, 0x1.73e664p-47f, 0x1.58aa3ep-19f,
     0x1.83d0d2p-98f, 0x1.973946p-9f, 0x1.e47918p-10f, 0x1.223002p-73f,
     0x1.08d08ap-100f, 0.0f, 0x1.d9b7e6p-51f, 0.0f, 0x1p0f, 0x1.91fd8cp-79f, 0.0f,
     0x1.bba218p-59f, 0.0f, 0x1.da82bap-53f, 0x1.2d952ap-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d63fe2p-70f, 0.0f, 0.0f, 0x1.a841cep-55f, 0x1.69ce7p-123f, 0.0f,
     0x1.4c8284p-6f, 0x1.828798p-59f, 0x1.4e58eep-105f, 0x1.bdf59cp-60f, 0.0f, 0.0f,
     0.0f, 0x1.9b3facp-104f, 0x1.c0945p-74f, 0x1.f94f44p-77f, 0x1.12189p-80f, 0.0f,
     0x1.73a702p-56f, 0x1.a51836p-43f, 0.0f, 0x1.5ccf08p-17f, 0x1.29366ep-32f, 0.0f,
     0x1.1cd06ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3df9cp-124f, 0x1.6a3a4p-55f,
     0x1.7ab57cp-10f, 0x1.e5b274p-17f, 0x1.eff6eep-92f, 0.0f, 0x1.cec336p-61f,
     0x1.8d6ad6p-85f, 0.0f, 0x1.3b550ap-96f, 0x1.b43c56p-7f, 0x1.514596p-96f,
     0x1.d1a17ap-13f, 0.0f, 0x1.1f3aa8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aa11p-21f,
     0x1.24575cp-44f, 0x1.4d84a8p-125f, 0x1.b1c3d2p-90f, 0.0f, 0x1.53ce64p-104f, 0.0f,
     0x1.7175fep-108f, 0x1.9285d6p-46f, 0.0f, 0.0f, 0.0f, 0x1.47fe1p-24f, 0.0f,
     0x1.bab2cap-83f, 0x1.7972a4p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aeabbap-9f, 0.0f,
     0x1.987ab4p-84f, 0x1.3ec71ep-60f, 0x1.744a0ep-27f, 0x1.dcb54cp-108f, 0.0f, 0.0f,
     0.0f, 0x1.fc3052p-112f, 0.0f, 0.0f, 0x1.98be7cp-14f, 0.0f, 0x1.596ee6p-97f, 0.0f,
     0.0f, 0x1.30f512p-91f, 0x1.2eecfap-33f, 0x1.2f14ap-107f, 0.0f, 0x1.839702p-126f,
     0x1.aba69ap-53f, 0x1.248708p-38f, 0x1.fe5488p-24f, 0.0f, 0.0f, 0.0f,
     0x1.71a2bep-93f, 0x1.f87f3ep-8f, 0x1.cffdep-63f, 0x1.54a8aep-100f,
     0x1.ba6346p-59f, 0.0f, 0x1.c8727ep-72f, 0.0f, 0x1.34e3e6p-69f, 0.0f, 0.0f,
     0x1.8b8bccp-104f, 0.0f, 0x1.8073cp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93d9b8p-59f, 0x1.f3be54p-42f, 0.0f, 0x1.7dca44p-20f, 0x1.b2b3a4p-119f, 0.0f,
     0.0f, 0.0f, 0x1.1aba3p-97f, 0.0f, 0.0f, 0.0f, 0x1.a37d4cp-22f, 0.0f, 0.0f,
     0x1.35a8a2p-33f, 0.0f, 0x1.6b7ca4p-35f, 0x1.c14b38p-80f, 0.0f, 0.0f, 0.0f,
     0x1.c8576cp-113f, 0.0f, 0x1.1e80a2p-73f, 0x1.43b756p-77f, 0.0f, 0.0f,
     0x1.94294ap-67f, 0.0f, 0.0f, 0x1.e7dc36p-38f, 0.0f, 0x1.64d0e8p-12f, 0.0f,
     0x1.79ee8ep-113f, 0x1.a0e1ap-66f, 0.0f, 0x1.c1ec5ap-102f, 0.0f, 0.0f,
     0x1.d7baap-97f, 0.0f, 0x1.42c2p-108f, 0.0f, 0.0f, 0x1.3e6f7ep-118f,
     0x1.6cb338p-3f, 0x1.569e96p-32f, 0x1.b34618p-69f, 0x1.0d2928p-96f, 0.0f, 0.0f,
     0x1.aef7ep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fe918p-35f, 0x1.794cfep-56f,
     0.0f, 0.0f, 0x1.98501cp-15f, 0x1.703e4ep-29f, 0.0f, 0x1.7e9682p-119f, 0.0f,
     0x1.514cc2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9710a8p-41f, 0x1.c0e4f6p-64f,
     0.0f, 0.0f, 0x1.388f6ep-30f, 0x1.be22d2p-50f, 0x1.18e518p-50f, 0x1.c64584p-112f,
     0.0f, 0x1.3144e8p-106f, 0.0f, 0x1.18eb4p-64f, 0x1.dda052p-27f, 0x1.221a9ap-14f,
     0.0f, 0x1.780c58p-43f, 0.0f, 0x1.40286ep-34f, 0.0f, 0x1.06405cp-34f, 0.0f,
     0x1.99da82p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.865846p-98f, 0x1.ed6672p-110f,
     0x1.75a19ep-74f, 0.0f, 0x1.7f85b4p-108f, 0.0f, 0x1.add59p-112f, 0x1.221852p-74f,
     0.0f, 0.0f, 0.0f, 0x1.5bef88p-108f, 0.0f, 0.0f, 0.0f, 0x1.a1398ep-42f, 0.0f,
     0x1.c23836p-44f, 0x1.35ebe8p-96f, 0.0f, 0.0f, 0.0f, 0x1.0a9a4cp-51f,
     0x1.eaaab6p-121f, 0.0f, 0x1.ecbd22p-84f, 0.0f, 0.0f, 0.0f, 0x1.8128f6p-25f,
     0x1.957cb4p-85f, 0.0f, 0.0f, 0.0f, 0x1.384032p-59f, 0.0f, 0x1.0bbc34p-99f, 0.0f,
     0x1.d774f8p-7f, 0.0f, 0.0f, 0.0f, 0x1.eaae28p-89f, 0.0f, 0x1.291b32p-12f, 0.0f,
     0.0f, 0x1.3f3492p-42f, 0.0f, 0x1.dda9c8p-38f, 0.0f, 0.0f, 0.0f, 0x1.13049p-33f,
     0x1.98df06p-62f, 0x1.29664ep-122f, 0.0f, 0.0f, 0x1.72c158p-120f, 0.0f,
     0x1.3e4692p-82f, 0.0f, 0.0f, 0x1.00f84ap-120f, 0x1.5b4c22p-72f, 0x1.6dd99ap-100f,
     0.0f, 0x1.cdf2f2p-4f, 0.0f, 0.0f, 0.0f, 0x1.d57fa6p-19f, 0.0f, 0.0f, 0.0f,
     0x1.49fe84p-84f, 0.0f, 0x1.716612p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.303c42p-64f,
     0x1.9ade12p-19f, 0.0f, 0.0f, 0.0f, 0x1.aa4c34p-120f, 0x1.06b18cp-21f,
     0x1.4bfbc6p-121f, 0x1.9f3232p-24f, 0.0f, 0x1.80e24cp-46f, 0.0f, 0.0f, 0.0f,
     0x1.431p-86f, 0x1.51fd2p-21f, 0.0f, 0.0f, 0x1.a1a568p-86f, 0.0f, 0.0f,
     0x1.04961p-120f, 0.0f, 0.0f, 0x1.8ade3p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e9dd2p-37f, 0.0f, 0.0f, 0x1.616696p-101f, 0.0f, 0.0f, 0.0f, 0x1.041c94p-50f,
     0x1.a55e46p-63f, 0x1.94dd5ep-49f, 0x1.a6d35ap-50f, 0x1.748b88p-57f, 0.0f,
     0x1.1ab4b8p-106f, 0x1.387062p-71f, 0x1.a6ba7ep-17f, 0.0f, 0.0f, 0x1.8a7716p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.80c164p-123f, 0x1.22e3f6p-90f, 0.0f, 0.0f,
     0x1.31e5eap-89f, 0.0f, 0x1.f4254ap-16f, 0.0f, 0x1.74a176p-27f, 0x1.4e933cp-52f,
     0.0f, 0.0f, 0.0f, 0x1.b92318p-17f, 0x1.53d816p-123f, 0.0f, 0.0f, 0x1.38feeap-11f,
     0.0f, 0x1.2add5ap-65f, 0.0f, 0.0f, 0x1.11785p-79f, 0.0f, 0.0f, 0x1.43e2eap-23f,
     0x1.9787ccp-67f, 0.0f, 0x1.fc5ac2p-4f, 0x1.f6139ep-120f, 0.0f, 0x1.a224f4p-53f,
     0.0f, 0x1.6be0d6p-38f, 0x1.0f5feap-22f, 0x1.75c03ap-111f, 0x1.f1f03ep-72f, 0.0f,
     0.0f, 0.0f, 0x1.88cf3cp-14f, 0x1.38e76cp-49f, 0.0f, 0x1.b986cap-29f, 0.0f,
     0x1.48c7dp-22f, 0x1.5be4aap-4f, 0x1.1dc36p-24f, 0x1.b879ap-43f, 0.0f, 0.0f,
     0x1.edfad2p-109f, 0x1.ce3d82p-56f, 0x1.d6e418p-86f, 0x1.c6874ap-42f,
     0x1.296be8p-19f, 0x1.6dbfap-33f, 0.0f, 0x1.4958e2p-34f, 0x1.8743bcp-112f, 0.0f,
     0x1.797ea4p-67f, 0.0f, 0x1.ffd998p-69f, 0x1.6d4844p-95f, 0x1.9cbf62p-105f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_logf4_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_logf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_logf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
