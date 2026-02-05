/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_powf1_u10purecfma.c --function Sleef_powf1_u10purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0.0f, 0.0f, 0x1.cd5b0ap-66f, 0x1.349b16p-91f, 0.0f, 0.0f,
     0x1.c8047ep-115f, 0.0f, 0.0f, 0x1.77beb4p-106f, 0x1.e9ffd6p-56f, 0.0f, 0.0f,
     0x1.19fc08p-66f, 0.0f, 0x1.f603ccp-20f, 0x1.9adcf8p-46f, 0x1.78f6fp-35f,
     0x1.ad37ecp-6f, 0x1.0327f6p-54f, 0x1.f4dcfap-98f, 0.0f, 0x1.06faf6p-52f,
     0x1.c0b4fap-3f, 0x1.6a325cp-33f, 0.0f, 0x1.442c4cp-49f, 0x1.889c6cp-80f, 0.0f,
     0.0f, 0x1.fac78p-115f, 0.0f, 0.0f, 0x1.163748p-95f, 0x1.54609ep-63f,
     0x1.f3b886p-61f, 0x1.24b15cp-95f, 0.0f, 0x1.34b916p-109f, 0x1.1b0104p-112f, 0.0f,
     0.0f, 0x1.0c2882p-77f, 0.0f, 0.0f, 0.0f, 0x1.901b0ap-98f, 0.0f, 0.0f, 0.0f,
     0x1.da56a4p-79f, 0.0f, 0x1.a2da8ap-10f, 0.0f, 0.0f, 0x1.3e079ep-85f, 0.0f, 0.0f,
     0.0f, 0x1.d5512cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5161c2p-75f, 0.0f, 0.0f,
     0x1.11b0eap-111f, 0.0f, 0.0f, 0x1.3dcc6ap-10f, 0.0f, 0.0f, 0x1.86660ep-56f, 0.0f,
     0x1.1ef45p-70f, 0x1.f3426ap-119f, 0x1.140448p-8f, 0x1.e537cep-113f,
     0x1.449dbp-90f, 0.0f, 0.0f, 0x1.4a6faap-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2136b6p-111f, 0x1.b54b08p-77f, 0.0f, 0x1.f0deb8p-13f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.2e8c8cp-123f, 0x1.7fcc86p-103f, 0x1.6bec8p-53f, 0x1.d436f6p-29f, 0.0f,
     0x1.74fd0cp-57f, 0x1.5597p-22f, 0x1.13de72p-34f, 0.0f, 0.0f, 0x1.d986f6p-65f,
     0x1.bf9accp-10f, 0.0f, 0x1.f2f7p-36f, 0.0f, 0x1.d4dcc2p-62f, 0x1.d4509ap-27f,
     0x1.21ecdp-111f, 0.0f, 0x1.497c1ep-95f, 0x1.423f2ap-48f, 0.0f, 0x1.2e1058p-61f,
     0x1.14d8c4p-74f, 0.0f, 0.0f, 0x1.4a2afcp-72f, 0.0f, 0x1.1da8b4p-76f,
     0x1.45871ap-94f, 0.0f, 0.0f, 0x1.58186cp-80f, 0x1.3780acp-28f, 0.0f, 0.0f, 0.0f,
     0x1.87eb46p-28f, 0x1.f1eda6p-14f, 0x1.32db1cp-82f, 0x1.d7f346p-123f,
     0x1.9215bep-84f, 0x1.94ed3cp-124f, 0.0f, 0x1.85738p-32f, 0x1.3c3a76p-104f, 0.0f,
     0.0f, 0x1.7242dp-67f, 0x1.31d56ap-116f, 0x1.5020aep-29f, 0x1.e1244ap-53f,
     0x1.748134p-124f, 0x1.244b1cp-76f, 0.0f, 0.0f, 0.0f, 0x1.6c06bcp-87f,
     0x1.61e80cp-81f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.49ac26p-26f, 0.0f, 0.0f,
     0x1.62ad4p-19f, 0.0f, 0x1.f8f08p-7f, 0x1.0b4af6p-79f, 0.0f, 0x1.9d74f6p-49f,
     0.0f, 0x1.c04c36p-104f, 0.0f, 0x1.949abp-98f, 0.0f, 0x1.1c3d02p-37f,
     0x1.234b8ep-50f, 0x1.870c66p-122f, 0x1.43d59p-103f, 0x1.6d1194p-57f,
     0x1.dfa2e6p-39f, 0x1.67b15ep-3f, 0.0f, 0x1.34419ep-63f, 0x1.3e79cap-62f, 0.0f,
     0x1.f77658p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b8a08p-122f, 0.0f, 0.0f, 0.0f,
     0x1.2c0bf6p-49f, 0.0f, 0x1.40bba2p-80f, 0.0f, 0x1.dcbdfap-80f, 0x1.daf2dep-18f,
     0x1.21fdd4p-91f, 0.0f, 0.0f, 0x1.3fd564p-15f, 0x1.6cdc8cp-45f, 0.0f, 0.0f,
     0x1.453b8ap-13f, 0x1.4c591ep-66f, 0x1.bf0c68p-47f, 0x1.2e94aep-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59cdbep-16f, 0x1.b03f6p-48f,
     0x1.faaff4p-115f, 0.0f, 0.0f, 0x1.dfe924p-99f, 0.0f, 0.0f, 0.0f, 0x1.994854p-51f,
     0x1.e09eecp-100f, 0.0f, 0x1.26f1aep-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4068p-115f, 0x1.49c484p-52f, 0.0f, 0.0f, 0x1.a7b62cp-88f, 0x1.f32326p-29f,
     0.0f, 0.0f, 0.0f, 0x1.44d66ep-65f, 0.0f, 0x1.2458c6p-109f, 0x1.f53526p-70f, 0.0f,
     0x1.943dbcp-12f, 0.0f, 0.0f, 0x1.0f5b1ap-41f, 0x1.2d2552p-36f, 0x1.5a1eb2p-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b8e52p-75f, 0x1.e1b71cp-13f, 0x1.6fca56p-84f,
     0x1.29a88ep-35f, 0x1.4358b6p-19f, 0x1.6acf2ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1e6e2p-27f, 0.0f, 0x1.63205p-57f, 0x1.e01474p-42f, 0.0f, 0.0f, 0.0f,
     0x1.7c6956p-49f, 0.0f, 0x1.99fc22p-50f, 0.0f, 0.0f, 0x1.36349cp-85f,
     0x1.8cc188p-105f, 0.0f, 0x1.a6dba4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b854cp-4f,
     0.0f, 0.0f, 0x1.5c8deap-7f, 0x1.ec713cp-49f, 0x1.9b15a8p-1f, 0x1.a13824p-105f,
     0x1.abad2cp-117f, 0.0f, 0x1.c6d418p-60f, 0.0f, 0.0f, 0.0f, 0x1.9c2ca8p-111f,
     0x1.c7e44p-104f, 0x1.842a7cp-36f, 0.0f, 0x1.45f4cep-4f, 0x1.85a07p-39f, 0.0f,
     0.0f, 0.0f, 0x1.7ae262p-66f, 0.0f, 0x1.078e6ap-99f, 0.0f, 0.0f, 0x1.cc3abcp-34f,
     0x1.169f82p-24f, 0.0f, 0x1.dcbefp-102f, 0.0f, 0.0f, 0x1.19e4d6p-4f, 0.0f,
     0x1.103cbep-49f, 0.0f, 0x1.c99c96p-117f, 0x1.7ad916p-72f, 0.0f, 0.0f,
     0x1.937fcap-25f, 0.0f, 0x1.0eccd2p-97f, 0.0f, 0x1.fa15c2p-125f, 0.0f,
     0x1.19f9acp-35f, 0.0f, 0.0f, 0.0f, 0x1.400aacp-84f, 0.0f, 0.0f, 0.0f,
     0x1.7b97bcp-84f, 0.0f, 0x1.1a79fep-3f, 0x1.cb2414p-41f, 0.0f, 0x1.261dp-65f,
     0.0f, 0x1.336fb8p-110f, 0x1.242afap-86f, 0.0f, 0.0f, 0.0f, 0x1.e0f27p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd5434p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d6b6ep-77f, 0.0f, 0x1.c17acep-123f, 0.0f, 0x1.9b6936p-48f, 0x1.903e22p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.043106p-10f, 0.0f, 0x1.de16bep-22f, 0.0f,
     0x1.f378acp-23f, 0x1.81003ep-94f, 0x1.915c34p-73f, 0x1.8ec31ap-25f,
     0x1.3f0e48p-69f, 0.0f, 0.0f, 0x1.5d458cp-45f, 0.0f, 0x1.43bc1ep-105f, 0.0f,
     0x1.725594p-13f, 0.0f, 0.0f, 0x1.a5f0e6p-94f, 0x1.acd384p-71f, 0.0f, 0.0f,
     0x1.03ee44p-57f, 0.0f, 0x1.e7e93ap-35f, 0x1.924804p-107f, 0.0f, 0x1.c1415ap-43f,
     0.0f, 0x1.fa20b2p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb5ba2p-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.934362p-116f, 0x1.224e9p-93f, 0x1.fbe1c8p-87f, 0.0f, 0.0f,
     0x1.aa48f4p-40f, 0x1.0fdf62p-46f, 0.0f, 0x1.10d17cp-115f, 0x1.59fd22p-21f, 0.0f,
     0.0f, 0x1.d8a262p-47f, 0x1.339b5p-90f, 0.0f, 0x1.69fd78p-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.68d7acp-81f, 0x1.2c8372p-125f, 0.0f, 0x1.e9694ap-8f, 0.0f, 0.0f, 0.0f,
     0x1.5e61acp-58f, 0.0f, 0.0f, 0x1.69500ep-102f, 0x1.b661ap-82f, 0x1.c32c1cp-21f,
     0.0f, 0x1.aba9cp-58f, 0.0f, 0x1.8a094ap-105f, 0x1.e81318p-102f, 0x1.e41ceep-104f,
     0x1.8fa73ep-57f, 0.0f, 0.0f, 0.0f, 0x1.c8001ap-51f, 0x1.a35966p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4ffb4ep-91f, 0.0f, 0x1.c48312p-64f, 0.0f, 0x1.015318p-100f,
     0x1.464eaep-79f, 0.0f, 0.0f, 0x1.bc1bbcp-47f, 0x1.e3cc64p-82f, 0x1.d269e6p-88f,
     0.0f, 0.0f, 0.0f, 0x1.00a36cp-114f, 0.0f, 0.0f, 0.0f, 0x1.109228p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04125ap-77f, 0.0f, 0x1.e2a9dap-33f, 0.0f, 0.0f,
     0x1.a74066p-12f, 0.0f, 0x1.0ee206p-83f, 0.0f, 0.0f, 0x1.5c55dcp-89f, 0.0f,
     0x1.c01eeap-98f, 0.0f, 0x1.500b0ap-109f, 0.0f, 0.0f, 0.0f, 0x1.6c065ep-91f, 0.0f,
     0x1.f8c1fep-81f, 0.0f, 0.0f, 0x1.8c10e6p-10f, 0x1.9f8812p-83f, 0.0f, 0.0f,
     0x1.39766ap-100f, 0x1.3715cep-79f, 0x1.fc8904p-38f, 0x1.49d436p-40f,
     0x1.30d55p-54f, 0x1.17dd8ap-13f, 0.0f, 0x1.90ee9p-115f, 0.0f, 0x1.da8cdp-9f,
     0.0f, 0x1.579dd6p-9f, 0x1.190258p-6f, 0x1.8243d8p-76f, 0.0f, 0x1.7a138cp-23f,
     0.0f, 0x1.1dad26p-62f, 0x1.f17d28p-41f, 0x1.f6892p-73f, 0.0f, 0x1.21eb4p-120f,
     0x1.28519ap-37f, 0x1.ddc846p-62f, 0x1.26438cp-116f, 0x1.dcdc5ep-12f, 0.0f, 0.0f,
     0x1.996488p-102f, 0.0f, 0x1.3957fp-20f, 0x1.b11eeap-49f, 0.0f, 0.0f, 0.0f,
     0x1.3dfb8ep-35f, 0x1.3781fap-65f, 0x1.a51698p-17f, 0x1.e91292p-1f,
     0x1.e981acp-124f, 0x1.b7734ap-48f, 0x1.faeb6p-109f, 0.0f, 0.0f, 0x1.2b629p-27f,
     0x1.bb82bap-26f, 0x1.85ce4ep-52f, 0x1.7d3224p-22f, 0x1.8c6e6p-117f,
     0x1.3457a6p-108f, 0x1.ae9f6cp-108f, 0.0f, 0.0f, 0x1.b531bep-67f, 0.0f,
     0x1.988c54p-65f, 0.0f, 0.0f, 0.0f, 0x1.988cd4p-3f, 0x1.0f55eep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.37861p-21f, 0x1.72062cp-26f, 0x1.f8668p-101f, 0x1.27976cp-89f,
     0x1.5ad382p-106f, 0x1.7bc534p-28f, 0.0f, 0x1.aa0782p-14f, 0.0f, 0x1.ab85fp-74f,
     0.0f, 0.0f, 0.0f, 0x1.101e12p-7f, 0.0f, 0x1.16262ep-16f, 0x1.00e168p-42f,
     0x1.501abep-88f, 0.0f, 0x1.7e975ap-90f, 0.0f, 0x1.4d3118p-62f, 0x1.cf2d4cp-57f,
     0x1.a1723p-56f, 0.0f, 0x1.d72e74p-79f, 0x1.7775fcp-18f, 0x1.39d39ep-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.807a3cp-50f, 0x1.94a7a4p-5f, 0.0f, 0x1.f8f7fcp-25f,
     0x1.c575c2p-70f, 0.0f, 0x1.a2588ap-108f, 0x1.ac2daap-7f, 0x1.cb3718p-35f, 0.0f,
     0x1.730316p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f63aep-59f, 0.0f, 0x1.085f46p-15f,
     0x1.d5f8f6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c5ca4p-84f, 0.0f,
     0x1.915332p-112f, 0x1.66dba8p-104f, 0.0f, 0x1.eb0c08p-69f, 0.0f, 0x1.7583f8p-83f,
     0.0f, 0x1.d678a6p-2f, 0.0f, 0x1.4d78dp-24f, 0x1.fb2a74p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b24b9ap-78f, 0x1.ec6968p-9f, 0x1.8885a8p-99f, 0x1.9f84cp-113f,
     0.0f, 0x1.3b1e1ep-30f, 0.0f, 0.0f, 0x1.f2f2f4p-53f, 0x1.dcf418p-1f,
     0x1.78e3cep-94f, 0x1.526d86p-126f, 0x1.218896p-70f, 0x1.b54c98p-104f,
     0x1.213d48p-16f, 0.0f, 0x1.31d118p-9f, 0x1.e5227ep-43f, 0x1.5713ap-104f,
     0x1.69da96p-107f, 0.0f, 0x1.53003ap-74f, 0.0f, 0.0f, 0x1.102d96p-67f,
     0x1.be1c3ap-17f, 0x1.43297ep-49f, 0x1.6a3566p-53f, 0x1.e939bcp-121f, 0.0f,
     0x1.1140b4p-29f, 0x1.57d318p-5f, 0.0f, 0x1.a2994ap-116f, 0x1.9f6704p-106f,
     0x1.13e20ap-70f, 0x1.8e3164p-112f, 0x1.237c5p-4f, 0x1.9df5b4p-31f, 0.0f, 0.0f,
     0.0f, 0x1.129e72p-14f, 0x1.b27648p-113f, 0.0f, 0.0f, 0x1.c5f198p-62f, 0.0f,
     0x1.32c5b2p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aa66d6p-101f, 0.0f, 0x1.c926bap-17f, 0.0f, 0x1.5a706cp-97f,
     0x1.e8ab8p-34f, 0x1.58a5dp-36f, 0.0f, 0x1.75f4ep-77f, 0.0f, 0x1.cbcbep-100f,
     0x1.96a818p-3f, 0x1.c7e168p-114f, 0.0f, 0.0f, 0x1.2b3faep-1f, 0.0f, 0.0f,
     0x1.aaabcep-59f, 0x1.1760bep-123f, 0x1.5049p-53f, 0x1.b04a9ep-11f,
     0x1.419cb6p-46f, 0x1.ad2e9ap-30f, 0x1.805a78p-78f, 0x1.958ee2p-91f,
     0x1.db01c8p-35f, 0x1.90e2eap-83f, 0x1.e4d4e2p-60f, 0.0f, 0x1.e75756p-77f, 0.0f,
     0x1.617ba8p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de9dd6p-54f, 0.0f, 0.0f,
     0x1.d1f9bp-13f, 0.0f, 0.0f, 0x1.e643b4p-55f, 0.0f, 0.0f, 0.0f, 0x1.8837c6p-40f,
     0x1.fca326p-84f, 0x1.9160ep-101f, 0x1.babdap-77f, 0.0f, 0x1.23c32cp-80f,
     0x1.b8f5bcp-73f, 0.0f, 0.0f, 0x1.5ec4c2p-74f, 0x1.ad15p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e658dcp-50f, 0x1.bcbffcp-104f, 0x1.6e8a8ep-78f, 0.0f, 0x1.11c742p-49f,
     0x1.a6677cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f94c2p-25f, 0.0f, 0.0f,
     0x1.2b1502p-49f, 0x1.2c8208p-61f, 0.0f, 0x1.acd222p-102f, 0x1.78baacp-82f,
     0x1.7486fep-53f, 0x1.74e2a4p-50f, 0.0f, 0.0f, 0.0f, 0x1.dd8feap-74f,
     0x1.3ab908p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c294dep-115f, 0.0f, 0.0f, 0x1.4141e6p-36f, 0.0f,
     0.0f, 0x1.bfe898p-68f, 0x1.f3ffdap-4f, 0.0f, 0x1.f57df4p-17f, 0.0f,
     0x1.67b838p-58f, 0.0f, 0x1.18259p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5edd7p-36f, 0x1.5041c2p-73f, 0x1.0f79a6p-24f, 0.0f, 0x1.51254cp-81f,
     0x1.096134p-79f, 0x1.0030f6p-14f, 0.0f, 0.0f, 0x1p0f, 0x1.6b0e8p-83f, 0.0f, 0.0f,
     0x1.0fb126p-118f, 0.0f, 0x1.1b035p-11f, 0x1.415a72p-87f, 0x1.cebe2cp-57f, 0.0f,
     0.0f, 0x1.17a4ecp-45f, 0x1p0f, 0.0f, 0x1.5ce48ap-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c76264p-79f, 0x1.aa6d9p-74f, 0x1.192dfep-113f, 0x1.87a302p-92f, 0.0f, 0.0f,
     0x1.140978p-24f, 0x1.2a1f46p-85f, 0x1.390e26p-70f, 0.0f, 0x1.e1eb3ep-89f, 0.0f,
     0.0f, 0.0f, 0x1.79492p-12f, 0.0f, 0x1.1d1cdep-84f, 0x1.692caep-13f, 0.0f, 0.0f,
     0.0f, 0x1.69eaa2p-5f, 0.0f, 0x1.9675a4p-8f, 0x1.d180cap-79f, 0x1.440bbp-90f,
     0x1.baab4p-116f, 0x1.32b4bap-123f, 0x1.910a84p-48f, 0x1.abf66ep-88f,
     0x1.8b9ba4p-72f, 0x1.fb096ap-110f, 0.0f, 0x1.cc98b8p-109f, 0x1.1c86a2p-34f,
     0x1.04e4c2p-42f, 0x1.bffe6cp-68f, 0.0f, 0x1.11f456p-7f, 0x1.33645ap-42f,
     0x1.1972fep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.523ec6p-11f, 0x1.31e488p-95f,
     0x1.7af38p-52f, 0x1.02cb12p-4f, 0x1.cc1dc6p-43f, 0.0f, 0x1.07f1acp-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.670c2p-77f, 0.0f, 0x1.cdd3bap-79f, 0.0f, 0.0f,
     0x1.911cb8p-86f, 0x1.9fdd48p-33f, 0.0f, 0x1.777ddcp-81f, 0.0f, 0x1.9745f2p-79f,
     0.0f, 0.0f, 0x1.b798b8p-96f, 0.0f, 0x1.8defaep-69f, 0.0f, 0.0f, 0x1.ec4658p-8f,
     0x1.d4629ep-13f, 0.0f, 0.0f, 0x1.d2a418p-94f, 0x1.4dcadap-68f, 0.0f, 0.0f, 0.0f,
     0x1.9b28acp-24f, 0x1.d82f4ep-116f, 0x1.6730ecp-92f, 0.0f, 0.0f, 0x1.b9b13cp-22f,
     0.0f, 0x1.4cc216p-35f, 0x1.b927bep-82f, 0x1.198f4ap-26f, 0x1.e394eep-27f, 0.0f,
     0.0f, 0x1.ba20dcp-86f, 0x1.508c4ep-126f, 0x1.ca839p-106f, 0x1.d14d1cp-30f,
     0x1.e4ad54p-36f, 0x1.b35ceep-87f, 0x1.1c4772p-101f, 0x1.53cb06p-9f, 0.0f,
     0x1.c2239cp-68f, 0x1.42e5d2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7ab88p-17f,
     0.0f, 0x1.e3edaap-77f, 0x1.b4353p-106f, 0x1.7cacacp-124f, 0.0f, 0.0f,
     0x1.cddeeep-34f, 0.0f, 0x1.f205e8p-11f, 0x1.e4974cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.2e00a4p-20f, 0x1.a73522p-98f, 0x1.7f0f2ep-11f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.630f36p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afbefp-54f, 0.0f,
     0x1.8a768p-116f, 0.0f, 0x1.60f33ep-108f, 0x1.6189b4p-112f, 0x1.76f986p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38856p-112f, 0x1.ef5312p-46f, 0.0f,
     0x1.bdf978p-28f, 0x1.1a8112p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4dd34p-119f,
     0.0f, 0x1.f3aadap-70f, 0x1.e9e042p-32f, 0.0f, 0x1.5e595cp-12f, 0.0f, 0.0f,
     0x1.7c3ffp-12f, 0.0f, 0x1.416b96p-100f, 0.0f, 0.0f, 0x1.056794p-122f,
     0x1.d890bep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.568938p-115f, 0.0f, 0.0f,
     0x1.eeb5cp-14f, 0x1.afca88p-78f, 0x1.411d9ap-91f, 0x1.9c1d8p-119f,
     0x1.316638p-68f, 0x1.bdccp-122f, 0.0f, 0.0f, 0x1.8679c8p-75f, 0.0f, 0.0f,
     0x1.f1757cp-93f, 0.0f, 0x1.af898p-90f, 0x1.3ffacp-71f, 0x1.d8a532p-22f, 0.0f,
     0x1.e878bp-10f, 0.0f, 0x1.49b552p-23f, 0.0f, 0.0f, 0x1.651bcap-21f, 0.0f, 0.0f,
     0.0f, 0x1.b670a2p-121f, 0x1.5161a2p-74f, 0.0f, 0x1.a400dp-55f, 0.0f,
     0x1.fb712ap-3f, 0x1.5e0f62p-12f, 0x1.ec5a0ep-108f, 0x1.03630ap-32f,
     0x1.eaa42ep-109f, 0.0f, 0x1.b3e2c6p-103f, 0.0f, 0x1.cc134cp-7f, 0.0f, 0.0f, 0.0f,
     0x1.9f179ap-7f, 0.0f, 0.0f, 0.0f, 0x1.d945d8p-33f, 0x1.98af3ap-63f, 0.0f,
     0x1.821946p-19f, 0x1.3017ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47a714p-17f,
     0x1.747d3ep-124f, 0.0f, 0x1.fcb9f4p-92f, 0.0f, 0x1.3184b6p-75f, 0x1.593f88p-58f,
     0.0f, 0x1.5a0e02p-68f, 0.0f, 0.0f, 0x1.753cf2p-106f, 0.0f, 0x1.e6732ep-17f, 0.0f,
     0.0f, 0.0f, 0x1.c93dc4p-126f, 0.0f, 0.0f, 0.0f, 0x1.71addap-117f, 0.0f,
     0x1.b19cfep-28f, 0.0f, 0x1.1b4d9ep-53f, 0.0f, 0x1.6714eap-55f, 0x1.9f07cp-13f,
     0x1.c47dc8p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f45bep-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f7d42p-26f, 0.0f, 0x1.13d872p-76f, 0.0f, 0x1.51fb56p-110f,
     0x1.55cb1ep-49f, 0.0f, 0.0f, 0.0f, 0x1.d41696p-53f, 0.0f, 0.0f, 0x1.15d07ap-64f,
     0x1.68f526p-104f, 0.0f, 0.0f, 0x1.20cab4p-31f, 0x1.3a8b74p-35f, 0.0f, 0.0f, 0.0f,
     0x1.bb21acp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cdf96p-84f, 0x1.ac4fc6p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8acc36p-100f, 0.0f, 0x1.59ab68p-123f, 0.0f, 0.0f,
     0.0f, 0x1.48b356p-31f, 0x1.46759ep-63f, 0.0f, 0x1.29633cp-78f, 0x1.fecdfep-29f,
     0x1.99080cp-23f, 0.0f, 0x1.57d4ecp-113f, 0x1.167dcap-17f, 0x1.03660ap-37f,
     0x1.81998p-2f, 0.0f, 0.0f, 0.0f, 0x1.9a990ap-77f, 0x1.2e5c48p-52f, 0.0f, 0.0f,
     0x1.956244p-91f, 0.0f, 0.0f, 0x1.bf805p-99f, 0x1.7d4094p-107f, 0x1.3f5ddep-24f,
     0x1.a60252p-8f, 0.0f, 0x1.32550cp-27f, 0x1.d8b5f2p-10f, 0x1.0ea17ap-69f,
     0x1.f837aep-4f, 0x1.ee5d72p-64f, 0.0f, 0x1.20ee26p-82f, 0x1.41f8e8p-15f,
     0x1.427d26p-70f, 0.0f, 0x1.0bf244p-16f, 0x1.f0d238p-92f, 0.0f, 0.0f,
     0x1.19c15ep-19f, 0.0f, 0x1.652178p-97f, 0x1.609a5cp-104f, 0x1.be11d2p-54f, 0.0f,
     0.0f, 0x1.cebd26p-119f, 0.0f, 0.0f, 0x1.487a7ep-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4ab68p-112f, 0.0f, 0.0f, 0.0f, 0x1.e153dp-99f, 0x1.86283p-94f,
     0x1.138eap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.112772p-98f, 0x1.5f0aa6p-9f,
     0.0f, 0.0f, 0.0f, 0x1.446a54p-109f, 0x1.b8f2d2p-55f, 0.0f, 0x1.36df7ap-3f,
     0x1.cc3d14p-90f, 0.0f, 0x1.38e8d6p-12f, 0x1.ecd3b4p-121f, 0x1.9b5802p-46f, 0.0f,
     0x1.45047p-76f, 0x1.f80c7cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a994c4p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97e3fep-87f, 0.0f, 0.0f, 0x1.8de468p-64f,
     0x1.d74aeep-49f, 0.0f, 0x1.95ed1cp-52f, 0x1.2fc3e8p-53f, 0.0f, 0x1.1b17bap-29f,
     0x1.ed08c2p-67f, 0.0f, 0x1.9b529p-81f, 0x1.25c2c4p-64f, 0x1.26f448p-94f,
     0x1.ce4042p-61f, 0.0f, 0.0f, 0.0f, 0x1.8912d2p-22f, 0x1.1e36ecp-52f,
     0x1.5ef75ap-17f, 0x1.d3198p-47f, 0x1.4bf26p-35f, 0x1.b04c48p-109f, 0.0f,
     0x1.7a991ep-30f, 0x1.3148bap-118f, 0.0f, 0x1.b226f8p-99f, 0.0f, 0x1.eab4bap-74f,
     0x1.d51d36p-71f, 0x1.9324c6p-56f, 0.0f, 0x1.19a55p-8f, 0.0f, 0x1.96d47p-40f,
     0x1.693752p-101f, 0x1.3573dap-44f, 0.0f, 0x1.525894p-35f, 0x1.fa3ba4p-51f,
     0x1.13fedcp-10f, 0x1.417dc8p-48f, 0x1.15ec6ap-57f, 0x1.f6c50ap-49f, 0.0f, 0.0f,
     0x1.30872ep-117f, 0x1.e25f5ep-61f, 0x1.34eec2p-116f, 0x1.c4747ap-63f, 0.0f, 0.0f,
     0x1.21057p-85f, 0.0f, 0.0f, 0x1.af1574p-57f, 0.0f, 0x1.b4dfeap-21f, 0.0f,
     0x1.77eadp-43f, 0x1.08d058p-59f, 0x1.86edc4p-81f, 0.0f, 0.0f, 0.0f,
     0x1.148776p-108f, 0x1.6f316ap-90f, 0x1.f81e3cp-73f, 0x1.dc1a46p-48f, 0.0f,
     0x1.f86c8cp-67f, 0x1.0f899ep-124f, 0x1.eeaf26p-20f, 0.0f, 0x1.23710cp-37f, 0.0f,
     0.0f, 0.0f, 0x1.2f2faep-72f, 0x1.ca544cp-94f, 0x1.d878aap-118f, 0.0f, 0.0f,
     0x1.3064eap-49f, 0.0f, 0x1.d1faf4p-103f, 0.0f, 0x1.14ea0cp-101f, 0x1.c5069ep-74f,
     0.0f, 0.0f, 0x1.491aecp-96f, 0x1.137b04p-100f, 0.0f, 0x1.9eea56p-29f,
     0x1.f63222p-38f, 0x1.5dd4bep-119f, 0x1.6a3c2ep-106f, 0.0f, 0.0f,
     0x1.41dfecp-105f, 0x1.f78276p-55f, 0.0f, 0.0f, 0x1.73b122p-87f, 0.0f,
     0x1.22acc8p-100f, 0x1.d81126p-101f, 0.0f, 0x1.0fcebcp-112f, 0.0f,
     0x1.7a9a84p-81f, 0.0f, 0.0f, 0x1.b0d442p-32f, 0x1.1c5ad4p-79f, 0x1.183e02p-48f,
     0x1.61892cp-85f, 0x1.dd1fd8p-77f, 0.0f, 0.0f, 0x1.945cb6p-7f, 0x1.e2682cp-11f,
     0x1.1ada38p-68f, 0x1.3e8a5cp-61f, 0x1.1f973ap-2f, 0x1.4d258ep-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.02560ap-51f, 0.0f, 0x1.aee196p-39f, 0.0f, 0x1.2a8cb6p-32f,
     0x1.3e0b7ap-78f, 0x1.1d5db8p-93f, 0x1.ad2b8ap-18f, 0x1.735a88p-91f, 0.0f,
     0x1.117bdcp-17f, 0.0f, 0.0f, 0.0f, 0x1.a58daap-74f, 0x1.0a9bbcp-43f, 0.0f, 0.0f,
     0.0f, 0x1.b69d74p-94f, 0x1.15830ap-78f, 0x1.28a85ep-112f, 0.0f, 0.0f, 0.0f,
     0x1.4132d8p-30f, 0x1.43ca56p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f3a42p-67f,
     0x1.f53d2ap-95f, 0.0f, 0.0f, 0.0f, 0x1.4ec452p-125f, 0.0f, 0.0f, 0.0f,
     0x1.561aa6p-48f, 0.0f, 0.0f, 0x1.22156ap-125f, 0x1.c786dcp-17f, 0x1.47d268p-76f,
     0.0f, 0.0f, 0x1.d254f6p-108f, 0.0f, 0x1.33760ap-51f, 0x1.584da8p-80f,
     0x1.4c53dp-110f, 0x1.6363c8p-104f, 0.0f, 0x1.820534p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6b846p-1f, 0x1.cb1bd4p-20f, 0.0f, 0.0f, 0.0f, 0x1.e88134p-103f,
     0x1.490bc6p-33f, 0x1.ccdf5ap-43f, 0.0f, 0x1.dbb3d8p-125f, 0x1.3e4ee6p-61f, 0.0f,
     0x1.aba94p-17f, 0x1.4a3e98p-14f, 0.0f, 0x1.17b042p-77f, 0.0f, 0.0f,
     0x1.24d116p-30f, 0x1.c4f13ap-43f, 0.0f, 0x1.34ba6p-88f, 0.0f, 0.0f, 0.0f,
     0x1.8debf2p-72f, 0x1.02ce02p-119f, 0x1.44385p-36f, 0x1.55f9acp-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1da024p-58f, 0x1.74133ap-39f,
     0x1.7cca8ap-111f, 0x1.eb7116p-19f, 0.0f, 0.0f, 0x1.19f54ap-75f, 0.0f, 0.0f,
     0x1.ab1394p-111f, 0x1.cacc1cp-59f, 0.0f, 0.0f, 0.0f, 0x1.02eacp-73f, 0.0f,
     0x1.374744p-37f, 0.0f, 0x1.b03f24p-114f, 0.0f, 0.0f, 0x1.46df1ep-34f, 0.0f,
     0x1.5f8d38p-41f, 0x1.69fe3cp-7f, 0x1.425af6p-105f, 0.0f, 0.0f, 0x1.9b4a1cp-91f,
     0.0f, 0x1.12c4dep-9f, 0x1.179bfap-76f, 0.0f, 0x1.b3f2bap-39f, 0.0f, 0.0f, 0.0f,
     0x1.e1939ep-120f, 0.0f, 0.0f, 0.0f, 0x1.25a56ep-87f, 0.0f, 0x1.b65dd2p-46f, 0.0f,
     0x1.5cb2e2p-10f, 0.0f, 0x1.41f29cp-30f, 0x1.b6f33ap-70f, 0.0f, 0x1.253cd2p-102f,
     0.0f, 0x1.2f9212p-121f, 0x1.159dfcp-61f, 0.0f, 0x1.92f6d4p-66f, 0.0f,
     0x1.6c56a6p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f25b2p-95f, 0.0f,
     0x1.e02f7ep-89f, 0x1.2149d6p-12f, 0x1.ca56c6p-54f, 0x1.85d124p-21f, 0.0f, 0.0f,
     0x1.e71c88p-21f, 0x1.38016p-18f, 0.0f, 0.0f, 0x1.52815ep-4f, 0.0f,
     0x1.02e146p-85f, 0x1.8ea8cap-9f, 0x1.5a9444p-83f, 0x1.8095bcp-121f, 0.0f,
     0x1.994bf2p-96f, 0.0f, 0.0f, 0x1.58362ep-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42396ap-122f, 0.0f, 0x1.125e54p-126f, 0x1.5c910cp-35f, 0.0f, 0x1.887e12p-96f,
     0.0f, 0.0f, 0x1p0f, 0x1.89a10ep-57f, 0x1.862188p-75f, 0x1.088682p-98f,
     0x1.310c6ap-113f, 0x1.940cdep-61f, 0x1.f7ecaap-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb2dbcp-5f, 0x1.21234cp-13f, 0x1.1109e6p-83f, 0x1.121724p-87f,
     0x1.9b5978p-64f, 0x1.e958a4p-96f, 0x1.6b569cp-9f, 0.0f, 0.0f, 0x1.be3936p-103f,
     0.0f, 0x1.503fccp-10f, 0x1.138c0ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c054fap-15f, 0.0f, 0x1.334658p-91f, 0.0f, 0x1.65361p-121f, 0.0f,
     0x1.f40e1p-102f, 0.0f, 0x1.d2a276p-47f, 0x1.7ae35ap-108f, 0x1.c156ccp-38f, 0.0f,
     0x1.f206ap-50f, 0x1p0f, 0.0f, 0.0f, 0x1.bdfb12p-64f, 0x1.05ad8cp-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.827eccp-52f, 0x1.88764cp-70f, 0.0f, 0x1.40130ap-19f,
     0x1.72a766p-88f, 0x1.f625a2p-1f, 0.0f, 0.0f, 0.0f, 0x1.f2772ep-95f,
     0x1.be2a3ap-83f, 0x1.b662c2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.569794p-27f,
     0x1.e0ff24p-100f, 0x1.bb7edep-72f, 0x1.b97812p-52f, 0.0f, 0x1.ec94ccp-89f, 0.0f,
     0.0f, 0x1.f25dacp-59f, 0x1.01be04p-64f, 0.0f, 0x1.381cf4p-107f, 0x1.558974p-79f,
     0.0f, 0x1.ec93f6p-84f, 0x1.13cd5p-106f, 0x1.c4e39cp-30f, 0x1.a722cap-82f,
     0x1.7bbbe2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69a572p-10f, 0.0f, 0.0f,
     0x1.5a0b0ep-88f, 0.0f, 0.0f, 0.0f, 0x1.2c19c4p-103f, 0x1.c73e06p-118f,
     0x1.c34188p-61f, 0.0f, 0x1.81620cp-13f, 0x1.ac0764p-22f, 0x1.9f591ap-56f,
     0x1.400732p-24f, 0.0f, 0x1.6f8d3cp-125f, 0x1.403622p-33f, 0x1.d21974p-41f,
     0x1.77d8c8p-6f, 0x1.5f9ce6p-20f, 0x1.3838acp-15f, 0x1.443abap-29f,
     0x1.414d08p-18f, 0.0f, 0x1.a62682p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.549ee4p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecc5c2p-126f, 0x1.80864ap-58f, 0.0f,
     0x1.370064p-98f, 0.0f, 0.0f, 0x1.a09734p-112f, 0x1.8c84e6p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.04619p-108f, 0x1.d5b3a2p-30f, 0.0f, 0.0f, 0x1.3b82cp-49f,
     0x1.43e608p-31f, 0.0f, 0x1.6d756ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed87e6p-123f,
     0.0f, 0.0f, 0.0f, 0x1.4343aap-78f, 0x1.4ddaa6p-83f, 0x1.08a9dap-21f,
     0x1.870074p-106f, 0x1.b12756p-64f, 0x1.3015cep-84f, 0.0f, 0x1.d491bap-30f,
     0x1.50387cp-34f, 0.0f, 0x1.db911cp-55f, 0x1.9e7476p-66f, 0x1.68fd5p-105f,
     0x1.d8ecb2p-41f, 0x1.1e92d6p-91f, 0x1.580cacp-104f, 0x1.1d6c46p-119f,
     0x1.be9afcp-90f, 0x1.31f902p-94f, 0x1.699cdep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7345cp-94f, 0.0f, 0x1.d65486p-6f, 0x1.002dfp-40f, 0.0f, 0x1.55cbccp-109f,
     0.0f, 0.0f, 0x1.172698p-55f, 0.0f, 0.0f, 0x1.4e07f6p-81f, 0.0f, 0x1.73e9d8p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1212aap-117f, 0.0f, 0x1.e8c7fap-113f, 0.0f, 0.0f,
     0x1.2d768p-50f, 0x1.07a0dep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.214af4p-18f,
     0.0f, 0x1.19d0e4p-102f, 0x1.f6d716p-66f, 0x1.c4f51p-45f, 0x1.44a11cp-125f, 0.0f,
     0x1.73ec4ep-102f, 0x1.4354f6p-71f, 0.0f, 0x1.a7dc52p-121f, 0.0f, 0.0f, 0.0f,
     0x1.9a84e4p-41f, 0x1.37e16cp-14f, 0.0f, 0.0f, 0.0f, 0x1.e93268p-123f,
     0x1.79f28cp-111f, 0.0f, 0x1.07ef92p-61f, 0.0f, 0x1.47f8a2p-82f, 0x1.761d72p-51f,
     0x1.56407cp-66f, 0.0f, 0.0f, 0.0f, 0x1.dcecf8p-115f, 0.0f, 0x1.b306b8p-61f, 0.0f,
     0.0f, 0x1.9e7f78p-5f, 0.0f, 0.0f, 0x1.230b16p-119f, 0x1.6d1a66p-14f, 0.0f,
     0x1.d45p-57f, 0x1.3fafe8p-109f, 0.0f, 0x1.d77e94p-40f, 0x1.16e5f6p-123f, 0.0f,
     0.0f, 0x1.be56eep-73f, 0x1.cd660cp-116f, 0x1.920dep-7f, 0x1.dc836p-112f,
     0x1.b8831ep-87f, 0x1.8dd86ap-123f, 0.0f, 0x1.b14d7ap-121f, 0.0f, 0.0f, 0.0f,
     0x1.65221ap-71f, 0x1.99894ep-38f, 0.0f, 0x1.38dab6p-108f, 0x1.cd7e02p-92f,
     0x1.64d09cp-107f, 0.0f, 0x1.efaafp-126f, 0x1.8896fp-11f, 0.0f, 0x1.9dbf7cp-23f,
     0x1.b4066cp-51f, 0x1.160142p-33f, 0x1.d6eb5cp-122f, 0.0f, 0x1.424e6ep-65f, 0.0f,
     0x1.936286p-94f, 0.0f, 0x1.90045ep-109f, 0x1.da2e7ap-95f, 0x1.288178p-99f, 0.0f,
     0.0f, 0x1.1d60d4p-110f, 0.0f, 0x1.bd70dcp-107f, 0.0f, 0.0f, 0x1.ffe742p-114f,
     0x1.dfda14p-93f, 0.0f, 0x1.42525p-38f, 0.0f, 0.0f, 0x1.3d0428p-61f,
     0x1.178054p-24f, 0.0f, 0.0f, 0x1.5ebad4p-94f, 0x1.6a2856p-11f, 0.0f, 0.0f,
     0x1.d07aa4p-99f, 0.0f, 0x1.ba887p-72f, 0x1.af4708p-62f, 0.0f, 0x1.365484p-88f,
     0x1.a54408p-108f, 0.0f, 0x1.1cdb3ep-110f, 0x1.f6da3p-126f, 0x1.5afdc2p-25f, 0.0f,
     0.0f, 0.0f, 0x1.71e568p-100f, 0x1.988d4p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b6b1cp-26f, 0.0f, 0x1.05b172p-41f, 0.0f, 0x1.589f32p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.93a0e8p-31f, 0.0f, 0x1.c0d9e6p-11f, 0.0f, 0.0f, 0.0f,
     0x1.b167c2p-98f, 0.0f, 0x1.a4a26p-43f, 0x1.2fcd92p-103f, 0.0f, 0.0f, 0.0f,
     0x1.854b42p-62f, 0x1.f67468p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.608b1ep-83f, 0.0f, 0.0f, 0x1.90c91ep-32f, 0.0f, 0x1.5486ccp-57f,
     0x1.095ba4p-102f, 0x1.b46c08p-126f, 0.0f, 0x1.92eaf4p-111f, 0.0f, 0x1p0f, 0x1p0f,
     0.0f, 0x1.f39b0cp-18f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_powf1_u10purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_powf1_u10purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_powf1_u10purecfma bench acc %a\n", global_bench_acc);
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
