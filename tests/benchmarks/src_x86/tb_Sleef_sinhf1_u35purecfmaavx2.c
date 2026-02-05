/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf1_u35purecfma.c --function \
 *     Sleef_sinhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.0eed38p-31f, 0x1.bfcf3cp-104f, 0x1.9291c6p-82f, 0x1.39ae88p-35f,
     0x1.f68f94p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d950ap-25f, 0.0f,
     0x1.c76352p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df9d66p-57f, 0x1.9a2e0ap-15f, 0.0f,
     0x1.71d476p-5f, 0.0f, 0x1.93e0e2p-126f, 0x1.3f86bcp-109f, 0x1.39cfc2p-60f,
     0x1.a31cp-76f, 0x1.98911ep-48f, 0.0f, 0x1.c8a37cp-82f, 0.0f, 0x1.b3be42p-56f,
     0.0f, 0.0f, 0.0f, 0x1.807f7ep-83f, 0x1.4d6bcp-117f, 0x1.5aa64p-79f, 0.0f,
     0x1.bed07ap-67f, 0x1.d9240cp-85f, 0x1.2ddefcp-14f, 0x1.30a7b6p-61f, 0.0f,
     0x1.ceb712p-119f, 0.0f, 0.0f, 0x1.031c12p-57f, 0x1.f0fe88p-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.530a2ep-29f, 0x1.10ab62p-84f, 0x1.99d158p-110f, 0x1.8bb1ap-18f,
     0x1.b8fd46p-105f, 0x1.43bb36p-42f, 0x1.bc8e36p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb94dep-102f, 0.0f,
     0x1.1ce5fcp-42f, 0x1.aa43dp-124f, 0x1.bdef2cp-53f, 0.0f, 0x1.71afeap-78f,
     0x1.5a4fb2p-25f, 0.0f, 0x1.d561f4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03db4ep-43f, 0x1.c1b7e8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abd7b2p-77f, 0.0f,
     0x1.15e122p-74f, 0.0f, 0.0f, 0x1.252756p-87f, 0x1.cb56e6p-84f, 0x1.35afb6p-49f,
     0.0f, 0x1.612f0cp-30f, 0.0f, 0.0f, 0.0f, 0x1.621bbep-84f, 0.0f, 0x1.25ceb2p-4f,
     0x1.9e9eaap-64f, 0x1.ab20b4p-100f, 0.0f, 0.0f, 0x1.0d8f58p-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fe9b2ep-35f, 0x1.7df3e4p-26f, 0x1.94e5a4p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c073cp-116f, 0x1.6f41ecp-53f, 0x1.0dad98p-95f, 0x1.79f604p-63f,
     0x1.7105ccp-84f, 0x1.3bdc08p-74f, 0.0f, 0.0f, 0.0f, 0x1.b655a8p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e10604p-41f, 0.0f, 0x1.fd7bcap-112f, 0x1.acb38cp-75f,
     0x1.60cd52p-105f, 0.0f, 0.0f, 0.0f, 0x1.d0f45cp-123f, 0x1.4f5b02p-40f, 0x1p0f,
     0.0f, 0.0f, 0x1.1af54cp-18f, 0.0f, 0x1.a6b16cp-26f, 0.0f, 0x1.e23554p-110f, 0.0f,
     0x1.e4d26cp-126f, 0x1.70556ap-69f, 0.0f, 0x1.2f77acp-97f, 0x1.14894p-71f,
     0x1.f5f214p-59f, 0.0f, 0x1.652a86p-70f, 0.0f, 0.0f, 0x1.bea75ap-111f, 0.0f, 0.0f,
     0.0f, 0x1.d3c588p-119f, 0x1.e08422p-51f, 0.0f, 0x1.b77292p-75f, 0.0f,
     0x1.febeccp-78f, 0x1.55cb8cp-4f, 0.0f, 0x1.12e9acp-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.812c74p-30f, 0x1.f9b2cp-81f, 0.0f, 0.0f, 0.0f, 0x1.e81552p-9f, 0.0f,
     0.0f, 0x1.08316p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f89ffcp-96f, 0.0f, 0.0f,
     0x1.4b915ap-81f, 0x1.be0c88p-22f, 0.0f, 0.0f, 0.0f, 0x1.da6094p-24f,
     0x1.0124e6p-106f, 0x1.2b64e6p-52f, 0x1.47929ap-113f, 0x1.511294p-90f,
     0x1.f919c4p-21f, 0.0f, 0.0f, 0x1.52aa08p-57f, 0.0f, 0.0f, 0.0f, 0x1.806da8p-82f,
     0x1.1f2924p-125f, 0.0f, 0x1.422746p-109f, 0.0f, 0.0f, 0x1.bab0fep-8f,
     0x1.6b6a6ep-114f, 0.0f, 0.0f, 0.0f, 0x1.1fa364p-115f, 0.0f, 0x1.5149d4p-35f,
     0.0f, 0x1.5f6388p-90f, 0x1.54231p-32f, 0.0f, 0x1.235302p-112f, 0.0f, 0.0f, 0.0f,
     0x1.897454p-110f, 0.0f, 0x1.e91182p-45f, 0x1.6dd3acp-6f, 0.0f, 0x1.5e1376p-114f,
     0x1.1aab4ap-16f, 0x1.a0a0f6p-115f, 0x1.13d046p-65f, 0x1.ee60e4p-33f,
     0x1.0ff20cp-110f, 0.0f, 0.0f, 0x1.595b0ep-40f, 0.0f, 0.0f, 0x1.8cb4cep-9f,
     0x1.1913ap-51f, 0.0f, 0.0f, 0x1.584f92p-85f, 0x1.d3932ap-25f, 0.0f,
     0x1.735fe6p-31f, 0.0f, 0x1.857658p-6f, 0.0f, 0x1.3117fep-36f, 0.0f,
     0x1.3fc62ap-41f, 0.0f, 0x1.cbad08p-77f, 0.0f, 0.0f, 0x1.7e9c7ap-27f, 0.0f,
     0x1.3e01b8p-14f, 0.0f, 0x1.c7ba5cp-2f, 0x1.a4d92cp-105f, 0x1.e1f35p-3f, 0.0f,
     0x1.30c7cap-92f, 0x1.b4b95cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a4d2ap-48f,
     0x1.c39e26p-115f, 0.0f, 0x1.b3b454p-76f, 0.0f, 0x1.d15f86p-112f, 0x1.f6546ep-74f,
     0x1.ed4b4ap-114f, 0x1.6f911p-45f, 0.0f, 0x1.b48e6ep-91f, 0.0f, 0.0f,
     0x1.c80aa8p-52f, 0.0f, 0x1.591e12p-68f, 0.0f, 0.0f, 0x1.829baap-43f,
     0x1.5ce658p-66f, 0x1.73d524p-94f, 0.0f, 0x1.a00902p-78f, 0.0f, 0.0f, 0.0f,
     0x1.b87c1ep-59f, 0.0f, 0x1.484e9cp-14f, 0x1.d7cc4ap-2f, 0x1.ee96ap-64f, 0.0f,
     0.0f, 0x1.73337ap-4f, 0x1.e31764p-58f, 0x1.9b401ap-53f, 0x1.367fe2p-121f,
     0x1.0b4c9ep-76f, 0x1.52cb18p-59f, 0x1.f1d95cp-50f, 0.0f, 0.0f, 0x1.bef8f6p-75f,
     0x1.7f36ecp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f74254p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6eba88p-93f, 0.0f, 0x1.d2d086p-69f, 0x1.2c3cd2p-23f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.9e772cp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.326cap-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0c57cp-25f, 0x1.a2fd6ep-55f, 0.0f, 0.0f,
     0.0f, 0x1.23ede2p-45f, 0x1.f323c2p-14f, 0x1.dbc176p-74f, 0x1.430d0ap-71f, 0.0f,
     0x1.83f8f4p-9f, 0.0f, 0x1.afdf4ap-116f, 0x1.5c392ap-84f, 0x1.486062p-42f,
     0x1.f207dep-35f, 0.0f, 0x1.0b3cc8p-48f, 0x1.9f1386p-7f, 0.0f, 0x1.3f344ap-104f,
     0x1.516ae8p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41d3b2p-2f, 0x1.7ceb0ap-41f,
     0.0f, 0x1.621776p-25f, 0x1.cd99acp-81f, 0.0f, 0x1.d68a3p-92f, 0.0f,
     0x1.727648p-26f, 0x1.a85862p-53f, 0x1.2c446p-71f, 0x1.a537acp-98f,
     0x1.cc6a7cp-7f, 0.0f, 0.0f, 0x1.c87174p-77f, 0.0f, 0x1.63abf8p-105f, 0.0f,
     0x1.81b706p-4f, 0x1.80149p-75f, 0x1.cafe66p-113f, 0.0f, 0x1.501868p-122f, 0.0f,
     0.0f, 0x1.23675cp-20f, 0x1.b096dcp-104f, 0x1.ade1d8p-110f, 0.0f, 0.0f,
     0x1.c84bcp-60f, 0.0f, 0.0f, 0x1.e32d14p-68f, 0.0f, 0.0f, 0x1.7d09f4p-67f,
     0x1.7eea7ap-93f, 0.0f, 0x1.a79276p-68f, 0.0f, 0x1.a912d6p-92f, 0x1.a3529ep-29f,
     0x1.cbb36cp-14f, 0.0f, 0.0f, 0.0f, 0x1.385dp-56f, 0.0f, 0.0f, 0.0f,
     0x1.cb985p-73f, 0x1.d86b02p-80f, 0.0f, 0.0f, 0x1.52b74p-111f, 0x1.ae959ep-6f,
     0x1.6cac4ap-92f, 0x1.0d6266p-34f, 0.0f, 0x1.e3acf2p-121f, 0x1.a0d4bep-28f,
     0x1.a7811ep-15f, 0x1p0f, 0x1.5ca7b4p-77f, 0.0f, 0.0f, 0.0f, 0x1.96a98ap-39f,
     0x1.faa9bep-33f, 0x1.3e84cp-72f, 0.0f, 0.0f, 0x1.9bbbfp-8f, 0x1.380beap-74f,
     0x1.e48bdp-109f, 0.0f, 0.0f, 0x1.a506b2p-118f, 0x1.11f22ap-49f, 0x1.4fee92p-77f,
     0.0f, 0x1.4ad536p-35f, 0.0f, 0x1.4ee7a4p-99f, 0x1.c616f4p-125f, 0x1.eec248p-109f,
     0.0f, 0.0f, 0x1.9c206ep-105f, 0x1.b0ecccp-50f, 0.0f, 0x1.c7c12ap-123f,
     0x1.a215d4p-115f, 0x1.813712p-99f, 0x1.2b2e6ap-30f, 0.0f, 0x1.a38044p-90f, 0.0f,
     0.0f, 0x1.8836ep-23f, 0.0f, 0x1.5f8e58p-39f, 0x1.38827p-49f, 0x1.df172p-100f,
     0.0f, 0.0f, 0x1.a9944cp-115f, 0.0f, 0x1.c8de64p-53f, 0x1.e01aa8p-102f, 0.0f,
     0.0f, 0.0f, 0x1.7753fap-119f, 0x1.ff8202p-21f, 0x1.c7e214p-81f, 0.0f,
     0x1.8599cap-40f, 0x1.1b599p-36f, 0.0f, 0x1.ad42bp-95f, 0.0f, 0x1.2fd414p-123f,
     0.0f, 0.0f, 0x1.eac1b6p-19f, 0.0f, 0x1.7f1754p-60f, 0.0f, 0.0f, 0x1.41169ap-5f,
     0x1.48cb64p-89f, 0.0f, 0.0f, 0x1.a71974p-103f, 0x1.dff938p-17f, 0.0f, 0.0f,
     0x1.4d3d56p-1f, 0x1.26461p-37f, 0.0f, 0.0f, 0.0f, 0x1.9f9392p-64f,
     0x1.36e634p-3f, 0x1.f2a18cp-26f, 0.0f, 0.0f, 0x1.53808ep-83f, 0.0f,
     0x1.fe98d8p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30bb7cp-54f, 0.0f, 0x1.be2ce2p-37f,
     0x1.f73074p-82f, 0x1.448448p-40f, 0x1.1e494cp-111f, 0.0f, 0x1.5334cep-73f, 0.0f,
     0.0f, 0.0f, 0x1.439abep-14f, 0.0f, 0x1.2219cap-94f, 0x1.79857cp-5f, 0.0f,
     0x1.87b2dp-41f, 0.0f, 0.0f, 0x1.2bf7dcp-5f, 0.0f, 0x1.79ae84p-104f,
     0x1.82cebp-82f, 0x1.60df3p-26f, 0.0f, 0.0f, 0x1.929c22p-7f, 0.0f,
     0x1.f730dep-53f, 0.0f, 0.0f, 0x1.43ef14p-38f, 0x1.67a936p-122f, 0.0f, 0.0f,
     0x1.c0c61ep-1f, 0x1.1f1bp-53f, 0x1.bbf354p-24f, 0.0f, 0.0f, 0.0f,
     0x1.f41758p-79f, 0x1.dc83dap-101f, 0x1.8a4a42p-123f, 0x1.0ba72cp-95f, 0.0f, 0.0f,
     0.0f, 0x1.8680e4p-81f, 0x1.48cfb4p-114f, 0x1.5d94fp-99f, 0x1.fc4d4cp-60f,
     0x1.14243ep-42f, 0.0f, 0x1.28dcd4p-4f, 0x1.26cd28p-69f, 0.0f, 0.0f,
     0x1.c4f7a2p-52f, 0x1.a926bcp-57f, 0.0f, 0x1.c00754p-15f, 0x1.fca87cp-112f,
     0x1.e9c3aep-6f, 0x1.cc7b44p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a02826p-73f, 0.0f, 0x1.68a048p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28192p-51f,
     0x1.0e2502p-88f, 0x1.de200cp-105f, 0.0f, 0x1.23f1ccp-124f, 0x1.e9ec52p-110f,
     0.0f, 0.0f, 0.0f, 0x1.d6d1d4p-30f, 0.0f, 0x1.874804p-67f, 0.0f, 0x1.695072p-33f,
     0.0f, 0.0f, 0x1.093e82p-100f, 0.0f, 0x1.1602cep-126f, 0x1.acb90cp-57f, 0.0f,
     0x1.ced536p-50f, 0.0f, 0.0f, 0x1.057764p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7dec4p-78f, 0x1.b6ca4cp-4f, 0x1.fa6af6p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.03f4c2p-51f, 0x1.b51ac2p-83f, 0x1.558b38p-9f, 0.0f,
     0.0f, 0.0f, 0x1.fd19bap-81f, 0.0f, 0x1.af9c9ep-88f, 0x1.79c9fep-96f,
     0x1.8aa7c8p-71f, 0.0f, 0x1.53209cp-52f, 0x1.aba682p-65f, 0.0f, 0.0f, 0.0f,
     0x1.db80bep-65f, 0x1.d20b1cp-106f, 0x1.228fa8p-82f, 0.0f, 0x1.5865e4p-122f, 0.0f,
     0x1.99dc56p-90f, 0.0f, 0x1.766ef6p-123f, 0x1.7a03cap-123f, 0x1.35d36ap-4f, 0.0f,
     0x1.3c65ecp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.495974p-40f, 0.0f, 0x1.f3dcdcp-41f,
     0.0f, 0.0f, 0x1.9e3a5ap-105f, 0.0f, 0x1.45829ep-121f, 0x1.a78ab6p-79f,
     0x1.d28e42p-30f, 0x1.f39996p-124f, 0x1.f67748p-98f, 0x1.9768ecp-109f,
     0x1.d4365ap-37f, 0x1.328ef6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1c93p-27f, 0.0f,
     0x1.a74a4cp-6f, 0x1.391892p-99f, 0x1.36954ap-84f, 0.0f, 0.0f, 0x1.f25594p-38f,
     0x1.b10534p-125f, 0.0f, 0.0f, 0.0f, 0x1.0413b6p-8f, 0.0f, 0.0f, 0.0f,
     0x1.9be9f8p-116f, 0x1.b47644p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fd23cp-112f,
     0x1.6cb2a2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04e19ap-109f,
     0.0f, 0.0f, 0.0f, 0x1.99d36cp-52f, 0x1.ed0fcap-28f, 0x1.419e86p-79f,
     0x1.3f3b9ap-37f, 0x1.b1b9e6p-40f, 0x1.dea7c4p-85f, 0.0f, 0.0f, 0x1.028326p-46f,
     0x1.fdb318p-111f, 0x1.bb4886p-53f, 0x1.f5f4ecp-75f, 0x1.7cb4ap-80f,
     0x1.2791d2p-74f, 0x1.2972e6p-111f, 0.0f, 0x1.45265cp-36f, 0x1.b7ea12p-47f, 0.0f,
     0x1.51699ap-17f, 0.0f, 0x1.bc82aap-118f, 0.0f, 0x1.8623f6p-43f, 0.0f,
     0x1.597f92p-23f, 0x1.51074cp-13f, 0x1.c694e8p-17f, 0.0f, 0.0f, 0x1.2d3378p-86f,
     0.0f, 0x1.166b4ep-15f, 0.0f, 0x1.50132ep-92f, 0x1.aaad5p-78f, 0x1.969892p-6f,
     0.0f, 0x1.32383cp-95f, 0x1.4c1ff8p-62f, 0x1.50abep-84f, 0x1.def1f8p-100f, 0.0f,
     0.0f, 0x1.8fb8ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b506e6p-124f,
     0x1.526104p-20f, 0.0f, 0x1.d369bp-19f, 0x1.2f9ae6p-103f, 0.0f, 0x1.7bdabep-58f,
     0.0f, 0x1.73f2a4p-38f, 0.0f, 0x1.769412p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41d1cap-122f, 0.0f, 0.0f, 0x1.bbcc9p-119f, 0x1.ac8622p-39f, 0x1.9dc27p-49f,
     0.0f, 0.0f, 0.0f, 0x1.aa0d52p-79f, 0x1.446d8p-70f, 0.0f, 0.0f, 0.0f,
     0x1.d01b5ap-4f, 0x1.d8936p-84f, 0x1.abac8cp-20f, 0.0f, 0.0f, 0.0f,
     0x1.78cd74p-66f, 0x1.7426e8p-26f, 0x1.756284p-86f, 0x1.bbfa04p-124f, 0.0f,
     0x1.42e39ap-14f, 0x1.6e6da2p-47f, 0x1.3f9a82p-90f, 0x1.2d52ap-37f,
     0x1.11c676p-100f, 0.0f, 0x1.8a1e1ap-64f, 0.0f, 0.0f, 0x1.a1de2p-33f, 0.0f, 0.0f,
     0x1.f10d22p-51f, 0.0f, 0x1.4118b2p-102f, 0.0f, 0.0f, 0x1.ca0782p-74f, 0.0f,
     0x1.b3a622p-31f, 0x1.ccd874p-105f, 0.0f, 0x1.b1f51p-110f, 0.0f, 0.0f,
     0x1.ac6d44p-93f, 0x1.3cda86p-52f, 0x1.3924fcp-105f, 0x1.f45bf2p-18f,
     0x1.7c1b0ep-118f, 0x1.4a790ap-48f, 0.0f, 0.0f, 0x1.70a71ep-116f, 0.0f, 0.0f,
     0x1.2b56b8p-109f, 0x1.61b3p-73f, 0.0f, 0x1.4ecfb8p-23f, 0.0f, 0.0f,
     0x1.d235bp-71f, 0x1.0bb372p-96f, 0.0f, 0.0f, 0x1.64f198p-78f, 0.0f,
     0x1.0bccfp-10f, 0x1.7dc08p-124f, 0.0f, 0x1.856938p-118f, 0.0f, 0.0f, 0.0f,
     0x1.7dc13cp-18f, 0.0f, 0x1.bf1a46p-96f, 0x1.e4b418p-24f, 0.0f, 0x1.86766cp-7f,
     0.0f, 0x1.1670f2p-20f, 0x1.c13e5ep-107f, 0.0f, 0x1.aca3dep-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.724b8ep-122f, 0.0f, 0x1.c2c8f4p-48f, 0.0f, 0x1.43251p-104f,
     0.0f, 0x1.3652ap-67f, 0x1.a70cdcp-25f, 0x1.d07ae6p-97f, 0.0f, 0x1.3dc6d2p-80f,
     0.0f, 0x1.900046p-90f, 0x1.f7f866p-78f, 0.0f, 0x1.61513cp-55f, 0.0f, 0.0f,
     0x1.58a2f4p-29f, 0.0f, 0x1.cefce2p-14f, 0x1.f1704cp-19f, 0.0f, 0x1.1d37a2p-21f,
     0.0f, 0x1.9f4f74p-125f, 0.0f, 0x1.8e7138p-52f, 0x1.70c8dcp-81f, 0.0f,
     0x1.e18e6p-97f, 0x1.d687e8p-108f, 0x1.07e312p-34f, 0x1.ea2bdcp-90f, 0.0f,
     0x1.22f7fp-22f, 0x1.1c7ef4p-16f, 0.0f, 0.0f, 0x1.03fa8ap-43f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f119fp-98f, 0.0f, 0.0f, 0.0f, 0x1.537ccep-3f,
     0x1.e076aep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d326ep-62f, 0.0f, 0.0f,
     0x1.ee756cp-97f, 0x1.cc269ep-115f, 0.0f, 0x1.06bc5ap-5f, 0.0f, 0x1.e51e2p-99f,
     0.0f, 0x1.ba4c56p-118f, 0x1.f99f9cp-57f, 0x1.fc1936p-48f, 0x1.cc83dcp-18f, 0.0f,
     0x1.0199a4p-63f, 0.0f, 0.0f, 0x1.82c786p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sinhf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sinhf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhf1_u35purecfma bench acc %a\n", global_bench_acc);
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
