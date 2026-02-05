/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmaf1_purecfma.c --function \
 *     Sleef_finz_fmaf1_purecfma --arity 3 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32,binary32 --bench --no-embedded-bin \
 *     --target x86_sse2
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
     0x1.d24d9p-123f, 0x1.900cd2p-87f, 0x1.b3fa66p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d406cp-39f, 0x1.e34a66p-114f, 0.0f, 0x1.1665cp-72f, 0x1.14510ap-122f, 0.0f,
     0.0f, 0x1.422faap-125f, 0x1.9c81e8p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62b28ap-4f,
     0.0f, 0.0f, 0.0f, 0x1.2f6e4ep-51f, 0x1.98661p-21f, 0x1.ff9db4p-113f,
     0x1.2cbd62p-48f, 0x1.033eb8p-57f, 0x1.59341ap-38f, 0x1.d1c316p-91f, 0.0f,
     0x1.975a5ap-85f, 0x1.a38bep-101f, 0x1.450a9ep-31f, 0x1.cae586p-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a51e2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ea7d2p-36f,
     0x1.cbe74ep-50f, 0.0f, 0x1.38372cp-20f, 0x1.6bf33cp-66f, 0x1.1cc842p-53f,
     0x1.ef26d4p-28f, 0.0f, 0x1.81767p-114f, 0x1.57b16ap-46f, 0x1.9f8444p-101f, 0.0f,
     0.0f, 0x1.d8d626p-78f, 0.0f, 0x1.e9d5cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.40899ep-27f, 0x1.b2ac0ep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9c88cp-57f,
     0x1.f0341p-6f, 0x1.94e40ep-64f, 0.0f, 0.0f, 0x1.4b7c54p-105f, 0.0f,
     0x1.bb2fb8p-69f, 0x1.2c20cep-67f, 0x1.ba1208p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5cc888p-86f, 0.0f, 0x1.8c43a2p-73f, 0.0f, 0x1.ab051p-105f, 0x1.d38252p-26f,
     0.0f, 0.0f, 0x1.5eb6cp-74f, 0x1.78fff8p-56f, 0x1.34d8d8p-71f, 0x1.aee608p-50f,
     0x1.382c6ep-101f, 0.0f, 0x1.3c3bc8p-21f, 0.0f, 0.0f, 0.0f, 0x1.9aeb74p-113f,
     0x1.29d406p-2f, 0x1.bbfec4p-54f, 0.0f, 0x1.97b97ep-72f, 0.0f, 0.0f,
     0x1.a58dbap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.750846p-38f, 0.0f, 0.0f,
     0x1.9ee00ep-24f, 0.0f, 0.0f, 0x1.2069dcp-60f, 0.0f, 0.0f, 0x1.aa08bep-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.752e24p-14f, 0x1.317306p-21f, 0.0f, 0.0f, 0x1.f613b4p-105f,
     0.0f, 0x1.42103cp-15f, 0.0f, 0x1.9ad876p-76f, 0x1.9da8f2p-53f, 0x1.4d340ep-71f,
     0x1.8eefaap-124f, 0.0f, 0.0f, 0x1.a41acep-82f, 0.0f, 0x1.9b8d96p-121f, 0.0f,
     0x1.3b9e9ap-56f, 0x1.7b6a88p-19f, 0x1.cc8cfp-78f, 0x1.cdb8cp-42f,
     0x1.ed5576p-119f, 0x1.38544ep-113f, 0x1.64f91cp-50f, 0.0f, 0x1.ad591cp-90f, 0.0f,
     0x1.7c7292p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a74e1cp-33f,
     0x1.5044d8p-96f, 0x1.d6495p-15f, 0.0f, 0x1.2df692p-44f, 0.0f, 0x1.e93332p-56f,
     0x1.f2075ap-7f, 0.0f, 0x1.b8206cp-44f, 0.0f, 0x1.ec7082p-29f, 0.0f,
     0x1.6419b2p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8569p-37f, 0x1.9ef5c8p-48f, 0.0f,
     0x1.07dca6p-83f, 0x1.1e1358p-105f, 0x1.00c9ecp-114f, 0x1.a326ccp-7f,
     0x1.3ceebcp-69f, 0x1.e54dfp-59f, 0x1.f86ae6p-53f, 0x1.6f2198p-93f, 0.0f, 0.0f,
     0x1.c05decp-84f, 0.0f, 0x1.a527fep-52f, 0x1.a22ee2p-120f, 0.0f, 0x1.ac2bacp-125f,
     0x1.19e13ep-114f, 0x1.180492p-13f, 0x1p0f, 0x1.a2f506p-51f, 0.0f, 0.0f,
     0x1.03dd04p-65f, 0.0f, 0.0f, 0.0f, 0x1.35f4cap-94f, 0x1.f24142p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a13f9cp-29f, 0.0f, 0.0f, 0.0f, 0x1.53527ep-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.395874p-65f, 0.0f, 0.0f, 0x1.676482p-98f, 0.0f, 0.0f,
     0x1.e55386p-82f, 0.0f, 0.0f, 0x1.ce611p-25f, 0x1.a590d8p-37f, 0.0f, 0.0f, 0.0f,
     0x1.225718p-120f, 0x1.510642p-118f, 0.0f, 0x1.2cb098p-44f, 0x1.340c1p-85f, 0.0f,
     0.0f, 0x1.a03918p-47f, 0.0f, 0.0f, 0.0f, 0x1.d270f6p-54f, 0x1.644342p-67f, 0.0f,
     0x1.9a9832p-108f, 0x1.c2df6ep-103f, 0x1.589082p-71f, 0.0f, 0x1.5e8af6p-118f,
     0.0f, 0x1.7c943ap-73f, 0x1.986d1ap-43f, 0x1.c0553cp-110f, 0.0f, 0.0f,
     0x1.7da7cap-38f, 0x1.48b0fp-106f, 0.0f, 0.0f, 0x1.4d4f6ep-73f, 0.0f,
     0x1.8021dep-17f, 0x1.66efbp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c35becp-45f,
     0x1.cdeb2ap-115f, 0x1.b13f2p-112f, 0.0f, 0x1.892636p-100f, 0x1.09b14ep-126f,
     0.0f, 0x1.ba7ce4p-68f, 0x1.ae5ffcp-62f, 0.0f, 0x1.13541ap-5f, 0.0f,
     0x1.ca79cap-22f, 0.0f, 0x1.093d6ep-98f, 0x1.6475p-52f, 0x1.3f900ap-106f, 0.0f,
     0.0f, 0x1.5883c8p-78f, 0x1.ea7dbp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fda5cp-98f,
     0.0f, 0.0f, 0x1.072d14p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a84aep-116f,
     0x1.5b35d4p-52f, 0.0f, 0.0f, 0x1.2a0f44p-117f, 0x1.fa65aep-91f, 0x1.ce9392p-83f,
     0x1.47a8ecp-57f, 0x1.f36f52p-43f, 0x1.81d10ap-113f, 0x1.2643ccp-126f,
     0x1.715696p-55f, 0.0f, 0x1.2f9916p-49f, 0.0f, 0.0f, 0x1.ffa148p-120f,
     0x1.ff35bap-38f, 0.0f, 0x1.19f5fep-113f, 0.0f, 0.0f, 0.0f, 0x1.48b406p-93f, 0.0f,
     0x1.3d82b8p-63f, 0x1.6e11aap-126f, 0.0f, 0x1.6e575ap-116f, 0x1.120c26p-111f,
     0x1.46a7bp-112f, 0.0f, 0.0f, 0x1.3a3828p-74f, 0x1.15c706p-17f, 0.0f,
     0x1.22023ap-85f, 0x1.bb0b8cp-36f, 0x1.2a7a1ep-73f, 0.0f, 0x1.77b282p-100f, 0.0f,
     0x1.604d74p-15f, 0x1.0db416p-98f, 0.0f, 0x1.f10e18p-36f, 0x1.0970cep-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dc472p-94f, 0x1.620d3p-18f, 0.0f, 0x1.c575p-96f,
     0.0f, 0x1.f83f86p-31f, 0x1.0eff2p-54f, 0x1p0f, 0.0f, 0.0f, 0x1.3e6f1cp-39f, 0.0f,
     0.0f, 0x1.4a940ap-111f, 0.0f, 0.0f, 0x1.dd0386p-124f, 0.0f, 0.0f, 0.0f,
     0x1.17e7f4p-20f, 0x1.f0fcdep-59f, 0x1.1c437p-43f, 0x1.a3923p-33f,
     0x1.daad3p-107f, 0.0f, 0.0f, 0.0f, 0x1.2ed072p-103f, 0.0f, 0x1.1975fp-68f, 0.0f,
     0.0f, 0.0f, 0x1.a65054p-70f, 0.0f, 0x1.7596a4p-47f, 0x1.24d058p-89f, 0.0f,
     0x1.c3b11ep-38f, 0.0f, 0x1.3daa4ep-59f, 0.0f, 0.0f, 0.0f, 0x1.9fbe3ap-60f,
     0x1.59fcecp-122f, 0x1.ec892p-105f, 0x1.900438p-15f, 0.0f, 0.0f, 0x1.5c57c8p-77f,
     0x1.0f06fep-55f, 0x1.0b7126p-57f, 0x1.dc5476p-111f, 0x1.6d6e34p-118f, 0.0f,
     0x1.c70c54p-92f, 0x1.39bbacp-85f, 0.0f, 0.0f, 0x1.45feb6p-124f, 0x1.9c605p-87f,
     0.0f, 0x1.1b693p-120f, 0x1.30d88ap-98f, 0.0f, 0x1.8f92bcp-92f, 0x1.cb7ccep-90f,
     0.0f, 0x1.41da8ap-17f, 0.0f, 0x1.131ed8p-20f, 0x1.680ecp-42f, 0x1.b2105p-110f,
     0x1.4a5aaap-23f, 0x1.ea705ep-30f, 0x1.56d03cp-45f, 0x1.3340b8p-71f, 0.0f,
     0x1.6fab6p-18f, 0x1.c458eap-39f, 0.0f, 0x1.7dbd18p-120f, 0x1.264c5p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce5c14p-117f, 0.0f, 0.0f, 0x1.ed267ep-97f,
     0x1.7eb8cap-56f, 0.0f, 0.0f, 0.0f, 0x1.d05762p-81f, 0x1.a9a88ep-37f, 0.0f, 0.0f,
     0x1.67b372p-43f, 0.0f, 0x1.009f02p-108f, 0x1.ecaabcp-115f, 0.0f, 0.0f, 0.0f,
     0x1.312586p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43e94cp-51f, 0.0f, 0.0f,
     0x1.00bd1ap-32f, 0x1.6c1d16p-96f, 0.0f, 0.0f, 0x1.069cdp-28f, 0x1.3d418ep-81f,
     0.0f, 0x1.dbad8cp-21f, 0x1.75d47p-56f, 0x1.57a126p-117f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.5c7282p-6f, 0.0f, 0.0f, 0.0f, 0x1.7b24aap-17f, 0x1.41eb6cp-6f, 0.0f,
     0.0f, 0x1.7b9868p-110f, 0x1.f7e218p-98f, 0.0f, 0x1.f2c6bcp-120f, 0x1.1b8c72p-28f,
     0x1.6a0196p-89f, 0x1.7f74a6p-123f, 0x1.8db9ccp-95f, 0.0f, 0x1.8fb106p-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.074b28p-88f, 0x1.da5008p-78f, 0.0f, 0.0f, 0.0f,
     0x1.f5d776p-64f, 0x1.cf5b98p-116f, 0.0f, 0.0f, 0.0f, 0x1.621984p-92f,
     0x1.40a72ep-10f, 0.0f, 0.0f, 0.0f, 0x1.692f52p-80f, 0x1.864466p-97f,
     0x1.444fa2p-14f, 0.0f, 0.0f, 0x1.f68af6p-19f, 0x1.d60b32p-87f, 0.0f,
     0x1.8785c6p-74f, 0x1.01f486p-118f, 0x1.f97d42p-19f, 0x1.b28cap-117f,
     0x1.b7ad3p-79f, 0x1.319426p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13e7ccp-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5498bp-8f, 0x1.e1297ep-36f, 0.0f, 0.0f, 0.0f,
     0x1.b30aecp-64f, 0.0f, 0x1.68d384p-84f, 0x1.07107p-96f, 0.0f, 0.0f,
     0x1.956a08p-39f, 0.0f, 0.0f, 0x1.872a3cp-93f, 0x1.9816f4p-53f, 0.0f,
     0x1.acf182p-62f, 0.0f, 0.0f, 0x1.062be6p-83f, 0x1.7047e2p-23f, 0.0f, 0.0f,
     0x1.d4b4b4p-3f, 0.0f, 0x1.209f5ap-26f, 0.0f, 0x1.0b7fe2p-86f, 0x1.ac72e2p-20f,
     0x1.16433ap-110f, 0.0f, 0x1.70714ap-85f, 0.0f, 0x1.2f8d3ep-24f, 0.0f,
     0x1.140e6cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d541cp-18f, 0.0f, 0.0f,
     0x1.fa2d16p-39f, 0.0f, 0.0f, 0.0f, 0x1.b3ac46p-77f, 0x1.b8eep-27f, 0.0f,
     0x1.cc2f88p-46f, 0x1.2cb57ap-107f, 0x1.77379cp-39f, 0.0f, 0x1.c78afcp-44f,
     0x1.72a2d4p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08527ap-122f, 0.0f, 0.0f,
     0x1.87e876p-53f, 0.0f, 0x1.a1798p-119f, 0.0f, 0x1.b02e98p-126f, 0x1.c04f5cp-66f,
     0x1.cb4018p-122f, 0x1.2e4648p-112f, 0x1.12a2b6p-49f, 0x1.33c2c6p-126f,
     0x1.2ceb54p-31f, 0.0f, 0x1.807d5ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a7f12p-52f,
     0.0f, 0.0f, 0x1.e0ac78p-61f, 0x1.5e59d8p-67f, 0.0f, 0.0f, 0x1.28fa88p-35f, 0.0f,
     0x1.5ca09p-97f, 0x1.7159acp-16f, 0x1.af256cp-99f, 0x1.34c284p-79f, 0.0f, 0.0f,
     0x1.b1f46ap-4f, 0x1.d8404p-65f, 0.0f, 0x1.92ef74p-20f, 0x1.a2c1cap-87f, 0.0f,
     0.0f, 0.0f, 0x1.375a9ap-80f, 0.0f, 0x1.7c93dcp-123f, 0x1.d4fbap-47f,
     0x1.11d02p-124f, 0.0f, 0.0f, 0x1.344eaep-12f, 0.0f, 0x1.3faa8p-51f, 0.0f, 0.0f,
     0.0f, 0x1.bd2bfep-22f, 0.0f, 0x1.d0dfacp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b6684p-54f, 0.0f, 0.0f, 0.0f, 0x1.ce7b56p-40f, 0x1.c5a446p-24f,
     0x1.129af6p-16f, 0x1.e1d9d4p-120f, 0x1.2702bcp-29f, 0x1.dffe02p-40f,
     0x1.0dced4p-88f, 0x1.e6891p-77f, 0x1.92da1ap-63f, 0x1.40a63cp-119f, 0.0f,
     0x1.83ae82p-95f, 0x1.d6d5eap-90f, 0.0f, 0x1.484166p-40f, 0x1.e64a9ap-25f,
     0x1.986756p-55f, 0.0f, 0.0f, 0x1.8eb6fep-118f, 0.0f, 0x1.48e982p-88f, 0.0f,
     0x1.723c8ap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.297afp-27f, 0x1.d764d8p-98f,
     0x1.0c5416p-66f, 0x1.2d9798p-54f, 0.0f, 0x1.2fdec6p-5f, 0.0f, 0.0f, 0.0f,
     0x1.af943ap-48f, 0.0f, 0.0f, 0.0f, 0x1.8c4b28p-7f, 0x1.8cbe46p-8f, 0.0f, 0.0f,
     0.0f, 0x1.776934p-85f, 0.0f, 0.0f, 0x1.54a0a4p-8f, 0.0f, 0x1.53238cp-47f, 0.0f,
     0x1.076d2ep-103f, 0x1.57ff7p-91f, 0.0f, 0x1.ed5ceep-30f, 0x1.8ba76cp-3f,
     0x1.7e0b4ep-34f, 0.0f, 0.0f, 0.0f, 0x1.1d98b6p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22a1fap-74f, 0x1.38cbd6p-48f, 0x1.9a41e8p-9f, 0.0f, 0x1.c8b27ap-79f,
     0x1.9cbdf2p-19f, 0x1.757e4ap-75f, 0.0f, 0x1.bf6e98p-54f, 0x1.4e6b28p-1f,
     0x1.da6d1cp-13f, 0x1.320ebp-48f, 0x1.3b76b8p-118f, 0x1.6c7d0ap-40f,
     0x1.feee92p-114f, 0.0f, 0x1.7cd33cp-99f, 0.0f, 0x1.498e1ap-67f, 0.0f,
     0x1.09f4bap-61f, 0x1.d0a022p-73f, 0x1.d5abcp-121f, 0x1.16d51ep-39f, 0.0f,
     0x1.1fa8d8p-77f, 0.0f, 0x1.8aa446p-70f, 0x1.3b478p-94f, 0x1.8b97c2p-25f,
     0x1.9452bcp-120f, 0.0f, 0x1.982482p-104f, 0.0f, 0x1.7bb606p-124f, 0.0f,
     0x1.88408ep-30f, 0x1.2e8142p-84f, 0x1.dc2a3ep-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef9588p-49f, 0.0f, 0.0f, 0x1.14046ap-93f, 0.0f, 0x1.a10e5ep-51f, 0.0f, 0.0f,
     0x1.be1be2p-71f, 0x1.6470c8p-9f, 0x1.f19fdap-33f, 0.0f, 0x1.cf8e0ep-20f, 0.0f,
     0x1.c11b88p-119f, 0.0f, 0x1.0d0a84p-29f, 0x1.bcced4p-44f, 0x1.00168ap-69f,
     0x1.a61c4ap-9f, 0.0f, 0x1.4b2e8p-39f, 0x1.e42cb2p-110f, 0.0f, 0x1.c1675p-65f,
     0.0f, 0x1.9b2998p-75f, 0.0f, 0x1.46a16ep-49f, 0.0f, 0.0f, 0x1.e9cf8ap-27f,
     0x1.6fabb4p-96f, 0x1.0c72cep-124f, 0x1.f6f5fap-92f, 0.0f, 0.0f, 0x1.8230b8p-64f,
     0x1.e037bep-11f, 0x1.55579cp-27f, 0x1.de428ep-96f, 0.0f, 0x1.a4e474p-16f, 0.0f,
     0.0f, 0x1.34d2e2p-32f, 0.0f, 0.0f, 0x1.6b3b66p-34f, 0x1.f699cep-64f, 0.0f, 0.0f,
     0.0f, 0x1.af76dep-105f, 0.0f, 0.0f, 0x1.a96bd4p-73f, 0x1.3e6ddep-117f, 0.0f,
     0x1.c9751ep-50f, 0.0f, 0x1.203d8cp-11f, 0x1.4682c6p-57f, 0x1.96039p-126f,
     0x1.d663b4p-34f, 0x1.0fb5aep-57f, 0x1.2c9d16p-17f, 0x1.bb31d2p-100f, 0.0f, 0.0f,
     0x1.11dc22p-106f, 0.0f, 0x1.8c96f6p-79f, 0x1.49cb2p-106f, 0.0f, 0x1.909344p-71f,
     0.0f, 0.0f, 0x1.e732ep-82f, 0.0f, 0x1.cee5a8p-93f, 0.0f, 0.0f, 0x1.3ce28ep-120f,
     0x1.b9d6dp-23f, 0x1.9ad784p-68f, 0x1.709bfcp-62f, 0.0f, 0x1.ba260cp-89f,
     0x1.fe6e22p-72f, 0.0f, 0.0f, 0x1.16a3cp-76f, 0x1.b8885ep-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.39daccp-116f, 0.0f, 0.0f, 0x1.20449p-94f,
     0x1.26faa2p-15f, 0.0f, 0.0f, 0.0f, 0x1.635306p-118f, 0x1.9ab94cp-114f, 0.0f,
     0x1.a3e8dcp-75f, 0x1.02a136p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdf34p-29f, 0.0f,
     0x1.e38908p-87f, 0x1.6f3a8ep-80f, 0x1.9cf8fp-15f, 0x1.ef893ep-51f, 0.0f,
     0x1.e47fdap-123f, 0x1.c1ba84p-56f, 0x1.cdb90ep-75f, 0.0f, 0x1.879788p-49f,
     0x1.2e94fcp-120f, 0.0f, 0x1.19531cp-116f, 0.0f, 0x1.83a294p-81f, 0.0f,
     0x1.8c0f86p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e9dp-45f, 0x1.a2fed6p-88f,
     0x1.e811a8p-75f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0679a2p-82f,
     0x1.f206a2p-103f, 0x1.d1c23p-95f, 0x1.aa480ap-50f, 0x1.7c7662p-95f, 0.0f, 0.0f,
     0x1.a6e992p-8f, 0.0f, 0x1.130188p-74f, 0.0f, 0x1.7a3ed4p-37f, 0x1.ce26b2p-93f,
     0x1.ab2b12p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.565b7ep-16f, 0x1.dc002ep-119f, 0.0f,
     0.0f, 0x1.0560ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad3de8p-56f, 0x1.2984cep-21f,
     0.0f, 0.0f, 0.0f, 0x1.b7fdeep-2f, 0.0f, 0x1.16bf0ep-60f, 0x1.805972p-54f,
     0x1.779c78p-63f, 0x1.3d8e56p-94f, 0.0f, 0x1.49d552p-90f, 0.0f, 0x1.ddd6c6p-49f,
     0x1.ce867p-65f, 0.0f, 0.0f, 0x1.34659p-101f, 0.0f, 0x1.0c2p-8f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.f45594p-25f, 0x1.585a0ep-49f, 0.0f, 0x1.7434aep-15f, 0.0f, 0x1.7f2f62p-83f,
     0x1.72360ep-81f, 0x1.ee8f24p-33f, 0.0f, 0.0f, 0x1.93f19cp-108f, 0.0f,
     0x1.5ef85p-95f, 0.0f, 0x1.8c6b7ap-76f, 0.0f, 0x1.b128fp-70f, 0x1.faf92p-122f,
     0x1.5554dcp-116f, 0x1.c6466ap-47f, 0x1.f5261ep-76f, 0x1.bcaf28p-9f,
     0x1.eff194p-110f, 0.0f, 0x1.7edf6p-113f, 0x1.a8d1b6p-42f, 0.0f, 0x1.abc8dp-66f,
     0.0f, 0.0f, 0x1.bc0d6cp-6f, 0.0f, 0.0f, 0.0f, 0x1.a728f2p-86f, 0x1.da5ff8p-16f,
     0x1.892116p-57f, 0x1.cd8eb4p-24f, 0x1.9ca216p-48f, 0.0f, 0.0f, 0.0f,
     0x1.d34ceep-124f, 0.0f, 0.0f, 0x1.25fc96p-90f, 0x1.6b4ce4p-52f, 0x1.b33cf2p-86f,
     0x1.8f9a5cp-78f, 0x1.a87338p-92f, 0x1.3a0e3ap-3f, 0x1.436d06p-75f, 0.0f,
     0x1.d87fcep-99f, 0x1.449128p-107f, 0x1.134adep-11f, 0x1.478854p-64f,
     0x1.702db4p-81f, 0x1.61456p-110f, 0x1.928542p-90f, 0x1.9a077cp-24f, 0.0f,
     0x1.0d3246p-52f, 0.0f, 0x1.1429a8p-39f, 0.0f, 0x1.66091ap-84f, 0x1.40bdb6p-118f,
     0x1.ee7918p-82f, 0x1.753d2ep-29f, 0x1.5f58e4p-72f, 0x1.2f0926p-124f,
     0x1.07665ap-67f, 0x1.9e21f4p-70f, 0.0f, 0.0f, 0.0f, 0x1.040314p-23f,
     0x1.214b56p-66f, 0.0f, 0.0f, 0.0f, 0x1.5ccb2p-26f, 0.0f, 0.0f, 0x1.02f744p-3f,
     0x1.a2909p-10f, 0.0f, 0x1.11453ap-35f, 0x1.9c006ap-24f, 0.0f, 0x1.f9dc78p-57f,
     0.0f, 0x1.9e758cp-75f, 0.0f, 0x1.e01406p-88f, 0x1.d56fd2p-51f, 0.0f,
     0x1.170e56p-84f, 0.0f, 0.0f, 0x1.0a9086p-40f, 0x1.8d005ap-31f, 0x1.f723ep-42f,
     0x1.688dbcp-18f, 0x1.4dbc66p-42f, 0.0f, 0x1.0e8a6p-38f, 0x1.b0aeep-66f, 0.0f,
     0.0f, 0.0f, 0x1.070cccp-103f, 0x1.241ddep-29f, 0.0f, 0.0f, 0x1.c9b408p-56f,
     0x1.d62abap-3f, 0.0f, 0x1.824786p-61f, 0.0f, 0x1.e6efdap-30f, 0.0f,
     0x1.484d3p-3f, 0.0f, 0x1.87616ap-125f, 0x1.e93a12p-80f, 0x1.118922p-40f,
     0x1.df06e2p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27fd62p-37f, 0x1.c2e41cp-120f,
     0.0f, 0.0f, 0x1.d89fep-18f, 0.0f, 0x1.933e4ap-61f, 0x1.b46392p-30f,
     0x1.207bbap-26f, 0.0f, 0x1.bddb8p-97f, 0x1.90cd3ap-124f, 0x1.6a6aaap-122f, 0.0f,
     0.0f, 0.0f, 0x1.c6c77ap-94f, 0.0f, 0.0f, 0x1.256df8p-120f, 0.0f, 0x1.7f25a8p-83f,
     0.0f, 0x1.4e4f28p-24f, 0.0f, 0x1.83181p-50f, 0.0f, 0.0f, 0.0f, 0x1.5f04acp-64f,
     0x1.609234p-95f, 0.0f, 0.0f, 0.0f, 0x1.300272p-41f, 0x1.5ab1c6p-83f, 0.0f,
     0x1.ea72dap-79f, 0x1.0ab76ap-114f, 0.0f, 0.0f, 0x1.55a57ep-63f, 0x1.6734ecp-17f,
     0x1.47619cp-1f, 0.0f, 0x1.ea7d8cp-124f, 0.0f, 0x1.d09fbp-65f, 0.0f,
     0x1.ee3ddep-71f, 0x1.e9a12ap-108f, 0.0f, 0x1.8708b6p-90f, 0x1.d742dap-110f,
     0x1.37ce14p-1f, 0.0f, 0x1.7e008ep-84f, 0x1.285db8p-110f, 0.0f, 0.0f,
     0x1.276844p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c105cp-125f, 0.0f,
     0x1.168e86p-28f, 0x1.e44c3ap-52f, 0x1.baf642p-25f, 0.0f, 0x1.9dd02ep-37f,
     0x1.14e1c8p-65f, 0x1.1b9a6ep-5f, 0.0f, 0x1.9e1d2ep-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.463818p-2f, 0.0f, 0x1.3fe3cp-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2354a2p-5f, 0.0f, 0x1.bf9a5cp-78f, 0.0f, 0x1.5fe18ep-110f, 0.0f,
     0x1.9423b8p-113f, 0.0f, 0x1.ddba06p-33f, 0.0f, 0x1.7c655cp-23f, 0x1.fee9e8p-122f,
     0.0f, 0.0f, 0.0f, 0x1.c74d54p-30f, 0.0f, 0.0f, 0x1.c54d42p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cab1eap-51f, 0x1.3a552cp-55f, 0.0f, 0x1.e58172p-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b0968p-78f, 0x1.b52314p-15f, 0x1.12f84p-9f, 0.0f,
     0x1.79994p-61f, 0.0f, 0.0f, 0x1.73726cp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c7ff8p-43f, 0x1.840ae4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d2a0cp-31f,
     0x1.1a7e68p-94f, 0x1.d398a4p-25f, 0x1.269f3cp-44f, 0.0f, 0x1.0be434p-36f,
     0x1.d027bp-45f, 0.0f, 0.0f, 0.0f, 0x1.363bf8p-51f, 0.0f, 0x1.6098acp-47f,
     0x1.63dd04p-116f, 0.0f, 0.0f, 0x1.92e87ap-58f, 0x1.94b71cp-87f, 0x1.f0d7ccp-83f,
     0x1.a643ecp-106f, 0x1.15bf18p-37f, 0.0f, 0.0f, 0x1.69baa4p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e55728p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc2dbcp-48f, 0x1.199074p-80f,
     0.0f, 0x1.bbb182p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61ae1ep-43f, 0x1.852784p-90f, 0.0f, 0.0f, 0x1.963a78p-31f, 0x1.754536p-89f,
     0.0f, 0x1.60a1fap-12f, 0.0f, 0.0f, 0x1.fe4e8p-4f, 0x1.b12b86p-70f, 0.0f, 0.0f,
     0x1.387cb4p-73f, 0.0f, 0.0f, 0x1.a37c92p-62f, 0x1.d517eap-58f, 0x1.33eebp-99f,
     0.0f, 0x1.3692bcp-42f, 0x1.fcf57ap-65f, 0.0f, 0x1.075e5p-86f, 0.0f,
     0x1.655516p-116f, 0.0f, 0x1.3b6316p-31f, 0x1.a309ep-66f, 0x1.0cd5eep-45f,
     0x1.6e26c2p-6f, 0.0f, 0.0f, 0x1.c7d086p-118f, 0x1.191dbcp-54f, 0x1.49f558p-4f,
     0.0f, 0x1.3b15a6p-81f, 0.0f, 0.0f, 0.0f, 0x1.cc668cp-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bdae02p-50f, 0x1.9d0b8ap-41f, 0x1.713a42p-100f, 0.0f, 0x1.595966p-42f,
     0x1.19e0f6p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15a6bap-58f, 0.0f, 0.0f,
     0x1.9af512p-53f, 0x1.3c784cp-121f, 0.0f, 0.0f, 0.0f, 0x1.ed44aep-108f, 0.0f,
     0x1.6d7a74p-91f, 0.0f, 0x1.060f3cp-35f, 0x1.81cbfep-118f, 0x1.3d5158p-79f,
     0x1.765e2ap-78f, 0x1.4da534p-49f, 0.0f, 0.0f, 0.0f, 0x1.3404eap-124f, 0.0f, 0.0f,
     0.0f, 0x1.c18bc6p-103f, 0x1.5944fap-25f, 0.0f, 0x1.0f335cp-60f, 0x1.a24926p-76f,
     0x1.2d18cep-10f, 0.0f, 0.0f, 0x1.7b6ea4p-87f, 0x1.299cfp-116f, 0.0f, 0.0f,
     0x1.a006f2p-53f, 0x1.72cd7cp-7f, 0x1.f1b23ep-108f, 0x1.ee20ap-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.83f26p-118f, 0x1.c83778p-93f, 0x1.29f902p-116f, 0.0f,
     0x1.eb3aap-70f, 0x1.d151eep-5f, 0x1.38041ap-59f, 0x1.dfc3a8p-91f, 0.0f,
     0x1.ea9a74p-27f, 0.0f, 0x1.9add46p-47f, 0x1.4b42f6p-14f, 0x1.df1a84p-10f,
     0x1.414552p-38f, 0x1.bd6cc8p-9f, 0x1.d86bd4p-49f, 0x1.5bbea2p-98f,
     0x1.0c90b2p-29f, 0.0f, 0x1.02f37ep-35f, 0x1.a7cb3p-98f, 0x1.8b8d5ep-72f,
     0x1.433adap-99f, 0x1.3132b2p-96f, 0x1.abad0cp-35f, 0x1.afcb2p-69f,
     0x1.1fc83ap-63f, 0.0f, 0x1.8f534ep-88f, 0.0f, 0.0f, 0x1.5de8a8p-113f,
     0x1.eaf78p-101f, 0x1.496c1ap-104f, 0x1.c24b68p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b235cp-123f, 0x1.79db14p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.373a86p-70f,
     0x1.b64ecap-12f, 0.0f, 0.0f, 0x1.b3573p-55f, 0.0f, 0x1.64a03ap-8f,
     0x1.8f1ccp-45f, 0x1.ebd0b4p-124f, 0x1.8ec9c8p-44f, 0.0f, 0.0f, 0x1.4c55f4p-95f,
     0x1.c202c2p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d1582p-24f,
     0x1.bd9926p-121f, 0x1.cf0338p-20f, 0.0f, 0.0f, 0.0f, 0x1.670a5cp-30f, 0.0f, 0.0f,
     0.0f, 0x1.3293dcp-65f, 0x1.532ec4p-97f, 0.0f, 0x1.b6cc9p-98f, 0.0f, 0.0f, 0.0f,
     0x1.57b64ap-6f, 0x1.2657eep-7f, 0.0f, 0.0f, 0x1.349304p-31f, 0x1.d23ea8p-30f,
     0x1.0e41d4p-41f, 0.0f, 0x1.c9f2d8p-94f, 0x1.aa4836p-107f, 0x1.47ee58p-21f, 0.0f,
     0x1.eaded6p-15f, 0.0f, 0.0f, 0x1.e248f6p-46f, 0.0f, 0.0f, 0x1.dba89p-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c3876cp-70f, 0x1.60f8bcp-52f, 0.0f, 0x1.1348f2p-67f,
     0x1.28d53ep-85f, 0x1.d55918p-2f, 0x1.87303ep-80f, 0.0f, 0.0f, 0.0f,
     0x1.64e504p-63f, 0x1.22b878p-64f, 0.0f, 0.0f, 0x1.8dffacp-61f, 0x1.f9d78ap-47f,
     0.0f, 0x1p0f, 0x1.165f26p-67f, 0.0f, 0x1.7872aep-54f, 0x1.4cd9bp-25f,
     0x1.622be6p-77f, 0.0f, 0.0f, 0.0f, 0x1.329d18p-29f, 0x1.2783c4p-32f, 0.0f, 0.0f,
     0x1.bf3462p-59f, 0x1.5f20dep-4f, 0x1.7e794ap-84f, 0.0f, 0x1.ec0d34p-41f,
     0x1.725cb2p-107f, 0.0f, 0x1.15bc3cp-59f, 0.0f, 0x1.f6bcc6p-73f, 0.0f,
     0x1.9d234ap-120f, 0x1.5e1f6cp-71f, 0.0f, 0x1.edb9e8p-62f, 0x1.ed6ebp-18f, 0.0f,
     0x1.dffaf4p-55f, 0x1.cf8ed8p-86f, 0x1.4eaaep-102f, 0.0f, 0.0f, 0x1.cd062ep-8f,
     0.0f, 0x1.63c2dap-34f, 0x1.702912p-24f, 0.0f, 0.0f, 0x1.50a11ep-23f, 0.0f,
     0x1.1678cp-14f, 0.0f, 0.0f, 0x1.5db782p-102f, 0x1.7fb8aep-113f, 0.0f, 0.0f,
     0x1.f2aa4cp-79f, 0.0f, 0.0f, 0x1.5830acp-50f, 0x1.215a1cp-78f, 0.0f,
     0x1.25963ap-109f, 0.0f, 0.0f, 0.0f, 0x1.17cae8p-24f, 0.0f, 0.0f, 0x1.ba1b66p-45f,
     0.0f, 0x1.e98ed8p-118f, 0x1.c40dd8p-110f, 0x1.b1252ep-85f, 0x1.1bdf1cp-74f,
     0x1.79c002p-18f, 0x1.10a8p-43f, 0x1.70e9d8p-43f, 0x1.231466p-58f, 0.0f, 0.0f,
     0x1.62e8dap-65f, 0x1.87d994p-32f, 0x1.ce552ap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.420c26p-105f, 0.0f, 0x1.b7b0b2p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba18dap-58f, 0x1.dc81c8p-108f, 0x1.0a84ep-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa81bcp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6fac4p-107f, 0.0f, 0.0f,
     0x1.84ac7ep-103f, 0x1.c342fcp-37f, 0.0f, 0.0f, 0x1.c1847p-30f, 0.0f,
     0x1.bd2ed4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a66ecp-118f,
     0x1.23e0cap-120f, 0x1.334dfcp-13f, 0x1.c2afd6p-67f, 0x1.44dcfap-56f, 0.0f,
     0x1.45c3b6p-125f, 0.0f, 0.0f, 0x1.835646p-50f, 0.0f, 0.0f, 0x1.ad6598p-33f, 0.0f,
     0.0f, 0x1.62be34p-39f, 0x1.0ec526p-7f, 0.0f, 0x1.03f3f4p-50f, 0.0f, 0.0f,
     0x1.9b8554p-91f, 0x1.48fa22p-126f, 0x1.863474p-110f, 0x1.1d6f32p-80f,
     0x1.f05424p-93f, 0x1.a43daep-18f, 0x1.bcf89p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03cc06p-117f, 0.0f, 0x1.2f6934p-3f, 0x1.404262p-12f, 0.0f, 0x1.55d522p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0df40ep-55f, 0x1.08da82p-29f, 0.0f, 0x1.3d881p-115f,
     0x1.cfc316p-109f, 0x1.80785ap-22f, 0x1.918802p-55f, 0.0f, 0x1.1691d4p-33f,
     0x1.36de1ep-25f, 0x1.7167a8p-63f, 0x1.c6ec32p-42f, 0.0f, 0.0f, 0x1.ff24ccp-80f,
     0x1.d7addp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a773e6p-81f, 0.0f,
     0x1.3ed636p-32f, 0x1.855154p-10f, 0.0f, 0.0f, 0x1.979eeap-9f, 0x1.f846f8p-112f,
     0x1.3e4f32p-112f, 0x1.5b92dap-26f, 0x1.6bcee4p-79f, 0x1.cdd5cep-104f, 0.0f,
     0x1.a440fcp-86f, 0.0f, 0.0f, 0x1.4744acp-56f, 0x1.517a2cp-126f, 0.0f, 0.0f,
     0x1.973efcp-30f, 0x1.51f5b2p-55f, 0.0f, 0x1.e8b99cp-74f, 0x1.a30152p-109f,
     0x1.bdeef6p-68f, 0x1.041248p-48f, 0x1.6c9618p-100f, 0x1.9267dap-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a83a1p-71f, 0x1.f41e5p-122f, 0x1.e2fc0ep-106f, 0.0f, 0.0f, 0.0f,
     0x1.060c44p-10f, 0x1.b90ae8p-63f, 0x1.fcc538p-59f, 0x1.acfc84p-32f, 0.0f, 0.0f,
     0.0f, 0x1.44f2a8p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75197ep-116f, 0.0f,
     0x1.199168p-91f, 0x1.73a0fap-38f, 0.0f, 0.0f, 0x1.7d8ddap-73f, 0x1.0817fp-125f,
     0.0f, 0x1.50f692p-125f, 0.0f, 0.0f, 0x1.c137fep-22f, 0.0f, 0.0f,
     0x1.21f294p-116f, 0x1.ae5486p-60f, 0x1.55404ep-119f, 0.0f, 0.0f, 0.0f,
     0x1.2613aap-119f, 0x1.62843ap-103f, 0x1.dcee56p-13f, 0.0f, 0x1.9d57fep-13f,
     0x1.e3002ap-78f, 0.0f, 0x1.e9466ep-113f, 0x1.ec2c5ap-56f, 0x1.9fb594p-69f, 0.0f,
     0.0f, 0x1.cdfc7p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.583636p-16f, 0x1p0f,
     0.0f, 0.0f, 0x1.69ba4p-15f, 0.0f, 0.0f, 0.0f, 0x1.7c776ep-6f, 0x1.6d1ce6p-76f,
     0.0f, 0x1.61ab5cp-20f, 0.0f, 0.0f, 0.0f, 0x1.6330fcp-124f, 0x1.bcd08cp-123f,
     0.0f, 0x1.9931fep-117f, 0.0f, 0x1.502bc4p-86f, 0.0f, 0.0f, 0.0f, 0x1.acd7e6p-23f,
     0.0f, 0.0f, 0x1.4eaa9cp-64f, 0x1.9d6802p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c797f6p-37f, 0.0f, 0x1.2ec5c4p-56f, 0x1.d6f8c2p-64f, 0x1.cf97d4p-17f,
     0x1.a1eca4p-109f, 0x1.d6a458p-26f, 0x1.275f44p-38f, 0.0f, 0x1.5166fcp-80f,
     0x1.8d909p-35f, 0x1.c81a0cp-60f, 0x1.1ec872p-118f, 0x1.186ffap-18f, 0.0f, 0.0f,
     0.0f, 0x1.68bc66p-89f, 0x1.e76b2cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8c73dap-21f, 0.0f, 0.0f, 0x1.0ef38ap-94f, 0.0f, 0.0f, 0.0f,
     0x1.704f28p-46f, 0.0f, 0.0f, 0x1.88df56p-55f, 0.0f, 0.0f, 0.0f, 0x1.e0a5f4p-82f,
     0.0f, 0x1.047c3cp-111f, 0.0f, 0x1.6ca1f8p-55f, 0.0f, 0x1.7ca302p-20f,
     0x1.f5dd86p-80f, 0.0f, 0.0f, 0x1.4d122ap-41f, 0x1.4dc7eap-16f, 0.0f,
     0x1.5bd0bap-90f, 0.0f, 0x1.ccc46ap-99f, 0.0f, 0.0f, 0x1.70189p-94f, 0.0f,
     0x1.ac73f2p-40f, 0x1.ad5bdap-22f, 0x1.4106dp-41f, 0.0f, 0.0f, 0x1.5271e6p-95f,
     0.0f, 0x1.1f5a54p-29f, 0.0f, 0.0f, 0x1.2458bcp-51f, 0.0f, 0x1.2aadf4p-94f, 0.0f,
     0.0f, 0x1.d4f47p-86f, 0x1.6c400ep-13f, 0x1.8f29ap-116f, 0x1.5ea1dap-89f, 0.0f,
     0.0f, 0.0f, 0x1.90aa8ep-29f, 0x1.1c09a2p-120f, 0x1.540ae6p-64f, 0.0f, 0.0f, 0.0f,
     0x1.d10d38p-32f, 0.0f, 0x1.8e5d02p-20f, 0x1.193c1ap-121f, 0.0f, 0.0f,
     0x1.566134p-65f, 0x1.8797p-106f, 0.0f, 0.0f, 0.0f, 0x1.6fba0ep-122f,
     0x1.def782p-71f, 0x1.e20efp-54f, 0x1.96a0e8p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dacf82p-40f, 0x1.bf4572p-69f, 0.0f, 0x1.b16776p-30f, 0x1.4538fcp-85f, 0.0f,
     0x1.83e3c2p-55f, 0.0f, 0x1.523662p-36f, 0.0f, 0.0f, 0x1.d69a04p-119f, 0.0f,
     0x1.9c35b2p-80f, 0.0f, 0.0f, 0.0f, 0x1.7e45bep-107f, 0x1.a04b28p-10f, 0.0f,
     0x1.146a2ap-103f, 0x1.68393cp-70f, 0.0f, 0.0f, 0x1.0041d4p-56f, 0x1.5a9908p-110f,
     0x1.60da18p-81f, 0x1.4d72c8p-114f, 0x1.dd8b62p-19f, 0.0f, 0x1.caccccp-33f, 0.0f,
     0x1.dc40c4p-80f, 0.0f, 0.0f, 0x1.034fc6p-66f, 0.0f, 0x1.9c005cp-59f
};
static const float external_bench_wrapper_input_table_arg2[1001]  = {
     0x1.409a28p-30f, 0x1.2d1b1ep-46f, 0.0f, 0.0f, 0x1.84p-83f, 0x1.474b84p-75f,
     0x1.de9dfcp-5f, 0.0f, 0.0f, 0x1.32626p-25f, 0.0f, 0x1.0b7e84p-49f,
     0x1.ba9ad6p-8f, 0.0f, 0x1.422e1ep-12f, 0.0f, 0x1.5319acp-3f, 0.0f, 0.0f,
     0x1.cc56e6p-109f, 0.0f, 0.0f, 0.0f, 0x1.43629cp-45f, 0x1.623768p-95f, 0.0f, 0.0f,
     0.0f, 0x1.976c6cp-6f, 0x1.3abb5cp-69f, 0x1.c61d58p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f341bp-123f, 0x1.2f6b8p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83e814p-16f, 0.0f, 0.0f, 0x1.eafa84p-88f, 0x1.4bfd46p-119f, 0x1.193e1ep-68f,
     0x1.df4f8cp-4f, 0x1.57d6bcp-99f, 0.0f, 0x1.2ff6dcp-32f, 0x1.5c6a3ap-86f, 0.0f,
     0.0f, 0x1.33ceb2p-64f, 0x1.482cfcp-104f, 0.0f, 0x1.df6eaap-118f, 0.0f,
     0x1.d87dd8p-67f, 0.0f, 0.0f, 0x1.1c383ap-9f, 0.0f, 0.0f, 0.0f, 0x1.0d9ff2p-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.386cb4p-61f, 0x1.744684p-112f, 0.0f,
     0x1.3da7ccp-113f, 0x1.e43e8p-104f, 0x1.777744p-5f, 0.0f, 0.0f, 0.0f,
     0x1.9a347ap-8f, 0.0f, 0x1.b6d528p-3f, 0x1.c56756p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84ba64p-39f, 0x1p0f, 0x1.55586p-89f, 0x1.f1a528p-28f, 0x1.ea6ddap-44f, 0.0f,
     0x1.ce1768p-92f, 0.0f, 0x1.2fa86cp-53f, 0.0f, 0x1.3dcc58p-121f, 0.0f, 0.0f, 0.0f,
     0x1.12f2bep-14f, 0.0f, 0.0f, 0.0f, 0x1.847776p-108f, 0.0f, 0.0f, 0x1.a01fc2p-66f,
     0.0f, 0.0f, 0x1.e092cp-114f, 0.0f, 0x1.afa4d6p-98f, 0x1.d3c136p-95f,
     0x1.205596p-65f, 0.0f, 0x1.c2fc3cp-31f, 0.0f, 0.0f, 0.0f, 0x1.f40eecp-121f,
     0x1.7e9b8ap-73f, 0x1.7c031cp-31f, 0x1.66d984p-75f, 0x1.1bad32p-49f, 0.0f, 0.0f,
     0x1.cbd372p-78f, 0x1.faeea6p-23f, 0x1.35042ep-51f, 0x1.8deba6p-43f,
     0x1.47b7fcp-74f, 0x1.363d12p-90f, 0.0f, 0x1.fcd4b6p-78f, 0.0f, 0.0f,
     0x1.3ac9e6p-75f, 0.0f, 0.0f, 0x1.a109fcp-104f, 0x1.9e199ep-113f, 0x1.202d96p-51f,
     0.0f, 0x1.a7bc5cp-93f, 0x1.963f68p-64f, 0.0f, 0x1.719078p-63f, 0x1.16d93ep-88f,
     0.0f, 0x1.16d956p-94f, 0.0f, 0x1.23a166p-112f, 0.0f, 0x1.984688p-12f,
     0x1.9d33bcp-64f, 0.0f, 0.0f, 0.0f, 0x1.42202ep-39f, 0x1.f6d4a6p-84f, 0.0f,
     0x1.8e43c8p-79f, 0x1.ad6ceep-70f, 0.0f, 0.0f, 0.0f, 0x1.4f616cp-43f,
     0x1.1b00dp-116f, 0.0f, 0x1.f8616ap-8f, 0.0f, 0x1.47a41ap-50f, 0x1.bf8074p-41f,
     0.0f, 0.0f, 0.0f, 0x1.2f39dap-96f, 0.0f, 0.0f, 0x1.1ce826p-18f, 0x1.6dda86p-66f,
     0x1.3518fp-113f, 0x1.197bccp-50f, 0.0f, 0.0f, 0x1.d2a5f8p-83f, 0.0f,
     0x1.f4a24cp-16f, 0.0f, 0.0f, 0.0f, 0x1.ed8f94p-57f, 0x1.64a306p-27f, 0.0f,
     0x1.68ae76p-111f, 0x1.6abcb8p-60f, 0.0f, 0.0f, 0.0f, 0x1.59021p-61f, 0.0f, 0.0f,
     0x1.30bc5p-88f, 0x1.a679e6p-89f, 0.0f, 0.0f, 0.0f, 0x1.c1879p-126f,
     0x1.3fdd5p-92f, 0.0f, 0x1.9df1c8p-80f, 0x1.e8213ap-87f, 0.0f, 0x1.37d018p-18f,
     0.0f, 0x1.19b258p-90f, 0x1.ad137ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.717056p-17f,
     0.0f, 0.0f, 0x1.f32a66p-90f, 0.0f, 0x1.51a63ep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0ce02p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.984068p-16f, 0.0f, 0x1.fc2c88p-52f,
     0x1.db25f8p-101f, 0x1.d7b8fcp-52f, 0x1.ee6618p-73f, 0x1.1e2e34p-114f,
     0x1.c2f64cp-69f, 0x1.93698ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f335f4p-19f, 0.0f,
     0x1.c5ab32p-2f, 0x1p0f, 0.0f, 0x1.cd075cp-46f, 0x1.a8459cp-99f, 0.0f, 0.0f,
     0x1.0b7048p-86f, 0x1.79344ap-56f, 0.0f, 0.0f, 0.0f, 0x1.cf1764p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5df438p-106f, 0.0f, 0.0f, 0x1.789f52p-6f, 0x1.b0848ep-106f,
     0.0f, 0x1.8e1122p-54f, 0.0f, 0.0f, 0x1.dbc0bap-33f, 0x1.cde42ep-29f, 0.0f,
     0x1.fbbc8ap-30f, 0.0f, 0.0f, 0.0f, 0x1.95489ep-64f, 0x1.7c95bp-49f,
     0x1.c8cadp-41f, 0.0f, 0.0f, 0x1.53d5e4p-35f, 0.0f, 0x1.94e336p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2237cap-119f, 0.0f, 0x1.62c9b2p-61f,
     0x1.316bc4p-124f, 0x1.9f83bep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58275ep-98f,
     0.0f, 0x1.3f9752p-33f, 0x1.7f67cep-27f, 0.0f, 0x1.6755b8p-46f, 0x1.060e18p-4f,
     0x1.e24f0ep-64f, 0.0f, 0.0f, 0.0f, 0x1.dd240cp-1f, 0x1.59a77cp-17f,
     0x1.15e2aep-57f, 0x1.843ac6p-75f, 0.0f, 0.0f, 0x1.6dccacp-37f, 0x1.b0b506p-69f,
     0x1.8d69d8p-116f, 0x1.14be8ap-118f, 0x1.5b41c6p-16f, 0.0f, 0.0f, 0x1.ce6108p-52f,
     0.0f, 0x1.a53ffcp-30f, 0.0f, 0.0f, 0.0f, 0x1.ec3228p-79f, 0x1.cb0344p-26f,
     0x1.d956e8p-14f, 0.0f, 0x1.d264e2p-12f, 0x1.69f82ep-65f, 0.0f, 0.0f, 0.0f,
     0x1.cccf3ap-111f, 0.0f, 0x1.308524p-104f, 0.0f, 0x1.101a7cp-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.33c8f8p-6f, 0x1.84a854p-49f, 0x1.62b81p-40f, 0.0f,
     0x1.5d3134p-113f, 0.0f, 0x1.2ca142p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.057a7ep-104f, 0.0f, 0.0f, 0.0f, 0x1.11276ap-28f, 0.0f,
     0x1.f09d34p-83f, 0.0f, 0.0f, 0.0f, 0x1.fef134p-35f, 0x1.f20886p-75f, 0.0f,
     0x1.273b56p-98f, 0.0f, 0x1.dfdfd8p-11f, 0x1.258052p-1f, 0x1.ff40d2p-66f, 0.0f,
     0.0f, 0x1.967f5ap-75f, 0x1.5adb22p-32f, 0.0f, 0x1.557582p-45f, 0.0f, 0.0f,
     0x1.e469b4p-115f, 0x1.fb9facp-82f, 0.0f, 0.0f, 0x1.5ce5ap-30f, 0x1.424c5ep-100f,
     0.0f, 0x1.e4b646p-92f, 0x1.7fca94p-95f, 0x1.f49264p-105f, 0.0f, 0.0f, 0.0f,
     0x1.e4f962p-68f, 0x1.899506p-6f, 0.0f, 0x1.17ad5ep-18f, 0.0f, 0.0f,
     0x1.95e7e4p-44f, 0.0f, 0x1.1676f6p-116f, 0.0f, 0.0f, 0x1.fda5ep-102f, 0.0f, 0.0f,
     0.0f, 0x1.2b7d84p-107f, 0x1.405e26p-33f, 0.0f, 0x1.d01252p-37f, 0x1p0f,
     0x1.32536ap-45f, 0.0f, 0x1.7af6dep-92f, 0x1.ba9c3ep-96f, 0x1.0ceb14p-11f, 0.0f,
     0x1.a21356p-78f, 0x1.df84dep-9f, 0.0f, 0.0f, 0x1.ad9d5p-80f, 0.0f,
     0x1.25dd84p-84f, 0x1.6d10cep-47f, 0.0f, 0.0f, 0.0f, 0x1.3224fcp-87f,
     0x1.5eacf8p-32f, 0.0f, 0.0f, 0x1.b44cfp-85f, 0x1.2c3bd8p-47f, 0x1.dd1de8p-86f,
     0x1.eea2c2p-39f, 0.0f, 0x1.dbd7f6p-110f, 0x1.0f126cp-18f, 0x1.c500eap-50f,
     0x1.117a96p-33f, 0.0f, 0.0f, 0x1.44da08p-49f, 0x1.f7a578p-1f, 0.0f,
     0x1.a2d03ep-38f, 0.0f, 0x1.11057ep-12f, 0x1.98f3bcp-126f, 0.0f, 0x1.88f90ap-14f,
     0.0f, 0x1.b7d222p-55f, 0x1.24f312p-98f, 0x1.0b5f9cp-78f, 0.0f, 0.0f,
     0x1.ba94ecp-66f, 0x1.0f983p-28f, 0.0f, 0.0f, 0x1.163cb4p-67f, 0.0f,
     0x1.a4de58p-12f, 0x1.541854p-87f, 0.0f, 0x1.0b34f4p-48f, 0x1.d25604p-22f, 0x1p0f,
     0x1.25e78p-75f, 0x1.612d3ep-61f, 0x1.7173ap-10f, 0.0f, 0.0f, 0x1.a30944p-99f,
     0.0f, 0x1.f5cd5cp-62f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.580588p-124f,
     0x1.148c14p-64f, 0x1.2bbdaep-104f, 0.0f, 0.0f, 0x1.fc91cp-20f, 0.0f,
     0x1.ef7216p-86f, 0.0f, 0.0f, 0x1.dab8e4p-77f, 0.0f, 0.0f, 0.0f, 0x1.0868fep-42f,
     0x1.801aa8p-22f, 0x1.c680fp-73f, 0.0f, 0.0f, 0x1.791ddap-52f, 0.0f, 0.0f, 0.0f,
     0x1.6396e4p-80f, 0x1.a940d8p-15f, 0x1.d74a98p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dda32cp-117f, 0x1.0a016p-107f, 0.0f, 0x1.b8f0b2p-51f, 0.0f, 0.0f,
     0x1.92ab24p-117f, 0.0f, 0.0f, 0.0f, 0x1.614c46p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f8c054p-72f, 0x1.268d6ap-97f, 0.0f, 0x1.a9cf8p-63f,
     0x1.d25d2ep-22f, 0.0f, 0x1.400904p-19f, 0.0f, 0x1.a4e5a2p-84f, 0.0f,
     0x1.425274p-53f, 0.0f, 0x1.25fda6p-72f, 0.0f, 0x1.d975bcp-53f, 0x1.10b514p-70f,
     0x1.442162p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4f124p-12f, 0.0f,
     0x1.662804p-13f, 0x1.f6da8cp-82f, 0x1.8e4e2ep-119f, 0x1.f71882p-49f,
     0x1.a34098p-50f, 0x1.a842b4p-106f, 0x1.02a9cp-6f, 0.0f, 0x1.c1f694p-84f, 0.0f,
     0.0f, 0x1.bb0caap-36f, 0.0f, 0x1.1f3aap-121f, 0x1.68ca8ep-71f, 0x1.3aebd8p-92f,
     0x1.7b7bep-47f, 0x1.81f7c8p-89f, 0x1.efefe6p-97f, 0.0f, 0x1.09031p-76f,
     0x1.6ca6f2p-97f, 0x1.9260fep-86f, 0x1.4a8794p-51f, 0.0f, 0x1.48707ap-73f, 0.0f,
     0.0f, 0x1.0f6506p-88f, 0x1.138fp-44f, 0.0f, 0.0f, 0x1.0fbbacp-67f, 0.0f, 0.0f,
     0x1.c6f89ap-23f, 0x1.72bd7cp-21f, 0.0f, 0x1.5c2f32p-20f, 0x1.d861p-51f,
     0x1.0acf88p-52f, 0.0f, 0x1.129d1ep-48f, 0.0f, 0x1.dcedbp-112f, 0.0f, 0.0f,
     0x1.b77276p-16f, 0x1.fb291p-101f, 0x1.66ba0ep-117f, 0x1.1f224ep-120f,
     0x1.2b9856p-4f, 0.0f, 0.0f, 0x1.61626p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.895f12p-89f, 0x1.d84188p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f1cb2p-120f, 0x1.4e6548p-82f, 0.0f, 0x1.b33b38p-69f, 0.0f, 0.0f,
     0x1.855e24p-75f, 0.0f, 0x1.cf5a6ep-41f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.b5d058p-126f, 0.0f, 0.0f, 0x1.285348p-119f, 0.0f, 0x1.0aa8dep-11f, 0.0f,
     0.0f, 0.0f, 0x1.184e4p-36f, 0x1.ea2a38p-41f, 0x1.d9293ap-124f, 0x1.cea50ap-36f,
     0x1.d02758p-10f, 0x1.4c9926p-103f, 0.0f, 0.0f, 0.0f, 0x1.c70b76p-10f, 0.0f, 0.0f,
     0.0f, 0x1.3bcc2p-65f, 0x1.36a39cp-57f, 0x1.e821ap-14f, 0x1.6df738p-28f, 0.0f,
     0x1.68d276p-54f, 0.0f, 0.0f, 0x1.3b45d8p-112f, 0x1.f9d722p-53f, 0.0f,
     0x1.79f48cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8b308p-106f, 0x1.169778p-21f, 0.0f,
     0.0f, 0x1.1e755ep-56f, 0.0f, 0x1.48b896p-82f, 0x1.95cb22p-3f, 0.0f,
     0x1.48a524p-29f, 0.0f, 0x1.220abcp-126f, 0x1.588c12p-100f, 0.0f, 0x1.3ed6cep-14f,
     0x1.ed5f7ap-124f, 0x1.50b1dep-70f, 0.0f, 0x1.f5f00cp-84f, 0x1.4e18fp-34f,
     0x1.d0104ep-123f, 0.0f, 0x1.e8f6a4p-60f, 0x1.f86beep-59f, 0x1.9ccac8p-108f, 0.0f,
     0x1.f0a66cp-75f, 0x1.5197b2p-87f, 0x1.5a8068p-119f, 0x1.9e9264p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7beba6p-41f, 0.0f, 0x1.7748eep-49f, 0x1.297cb2p-88f,
     0x1.0cd626p-94f, 0x1.90f582p-66f, 0x1.b3918ap-96f, 0.0f, 0.0f, 0x1.829ebep-40f,
     0x1.4f2d4cp-23f, 0x1.36fccap-64f, 0x1.7a254p-55f, 0x1.77eddap-30f, 0.0f,
     0x1.af274ap-97f, 0x1.beadep-71f, 0.0f, 0x1.2565bp-56f, 0.0f, 0.0f,
     0x1.4d309cp-69f, 0.0f, 0x1.49429ap-109f, 0x1.52252cp-55f, 0.0f, 0.0f,
     0x1.5f3182p-11f, 0.0f, 0x1.59a258p-96f, 0x1.072cd2p-122f, 0x1.24f1b4p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.645fcp-38f, 0.0f, 0x1.fb3c48p-91f, 0.0f,
     0x1.ea87a2p-16f, 0.0f, 0x1.ed567ap-1f, 0x1.28ee8p-103f, 0.0f, 0x1.34a164p-97f,
     0x1.ab1878p-89f, 0x1.ed4ae6p-73f, 0x1.4eb514p-17f, 0x1.d40bbp-54f, 0.0f,
     0x1.f87c8p-112f, 0.0f, 0.0f, 0.0f, 0x1.cf8244p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a0f736p-96f, 0.0f, 0.0f, 0x1.f0ffa6p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6d75ap-83f, 0.0f, 0x1.5dd8fcp-119f, 0x1.bc7d98p-63f, 0.0f, 0.0f,
     0x1.37d46ap-30f, 0x1.76ad34p-105f, 0.0f, 0x1.9a0b02p-62f, 0x1.64d9dep-63f,
     0x1.df0c8ap-73f, 0x1.a9f6cap-104f, 0x1.e66352p-32f, 0.0f, 0x1.a30442p-62f, 0.0f,
     0x1.2dc9d6p-104f, 0x1.2c5962p-54f, 0.0f, 0x1.f60b38p-93f, 0.0f, 0.0f,
     0x1.4db22p-108f, 0.0f, 0.0f, 0.0f, 0x1.e2bf42p-49f, 0.0f, 0x1.a85e76p-70f, 0.0f,
     0.0f, 0x1.2ddbbcp-123f, 0.0f, 0.0f, 0.0f, 0x1.0ad382p-65f, 0.0f, 0.0f, 0.0f,
     0x1.0b8528p-108f, 0.0f, 0.0f, 0x1.99972cp-118f, 0x1.5ed472p-114f,
     0x1.f454eap-10f, 0.0f, 0.0f, 0x1.a4f3d6p-9f, 0x1.c43cc6p-36f, 0x1.4090dap-90f,
     0x1.e7da8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c81c6ap-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8d1082p-86f, 0.0f, 0x1.947e7cp-99f, 0.0f, 0x1.d7bcfep-11f,
     0x1.bd2fcap-33f, 0.0f, 0.0f, 0x1.9cd652p-2f, 0x1.aca544p-82f, 0x1.bdbd94p-116f,
     0x1.7ffd7cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cba33ap-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4476c8p-17f, 0x1.ce526ap-55f, 0.0f, 0x1.5ffc96p-22f, 0.0f, 0x1.87183ap-110f,
     0x1.9ad898p-24f, 0x1.8f11fep-16f, 0x1.1bc3e6p-96f, 0x1.c7bc62p-28f, 0.0f, 0.0f,
     0x1.67b2bp-94f, 0.0f, 0x1.f313ccp-11f, 0.0f, 0x1.fa8e58p-119f, 0x1.c31a98p-79f,
     0.0f, 0x1.7ac55p-25f, 0.0f, 0.0f, 0.0f, 0x1.e16954p-70f, 0.0f, 0x1.79084p-110f,
     0.0f, 0.0f, 0.0f, 0x1.c2a998p-11f, 0.0f, 0x1.a43d3p-45f, 0.0f, 0.0f,
     0x1.55ae3ap-97f, 0x1.5a5c4cp-120f, 0.0f, 0.0f, 0x1.30ca6ap-91f, 0x1.87cf0ep-45f,
     0.0f, 0x1.c8513p-1f, 0x1.8bd3fcp-86f, 0.0f, 0.0f, 0.0f, 0x1.d8cf2ap-42f,
     0x1.bd4ea2p-75f, 0x1.1a9708p-88f, 0x1.819e4p-84f, 0x1.2ea7b8p-109f,
     0x1.6c80a4p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.861cc6p-66f,
     0x1.ef4374p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2e3aep-49f, 0.0f,
     0x1.54c7acp-34f, 0x1.263a46p-110f, 0x1.47af2p-114f, 0x1.172e94p-51f, 0.0f, 0.0f,
     0x1.120376p-3f, 0.0f, 0x1.5fcda2p-91f, 0x1.2b8354p-58f, 0.0f, 0x1.ce1c68p-55f,
     0.0f, 0x1.eea6p-15f, 0x1.a71bdep-87f, 0.0f, 0x1.1348acp-73f, 0.0f,
     0x1.4eacf8p-8f, 0x1.b760dap-21f, 0.0f, 0x1.e0dc5cp-126f, 0.0f, 0x1.4d2ecap-115f,
     0x1.65ce72p-30f, 0x1.9f22bcp-56f, 0x1.b44fbep-73f, 0.0f, 0x1.ff19c8p-123f,
     0x1.ea8a14p-44f, 0x1.e3c4cp-55f, 0.0f, 0.0f, 0x1.bc8e58p-92f, 0.0f,
     0x1.e65122p-110f, 0x1.3eed78p-106f, 0x1.d29076p-72f, 0.0f, 0x1.dca4f4p-82f, 0.0f,
     0.0f, 0x1.180d68p-17f, 0x1.681c5cp-2f
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
            float tmp3;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp4;
            int32_t tmp5;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = external_bench_wrapper_input_table_arg2[i];
            tmp3 = Sleef_finz_fmaf1_purecfma(tmp0, tmp1, tmp2);
            external_bench_wrapper_output_table[i] = tmp3;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp3);
            carg2 = _mm_add_ss(carg, carg1);
            tmp4 = _mm_cvtss_f32(carg2);
            bench_acc = tmp4;
            tmp5 = i + INT32_C(1);
            i = tmp5;
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
    printf("Sleef_finz_fmaf1_purecfma %"PRIi64" elts over [[0;1], [0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fmaf1_purecfma bench acc %a\n", global_bench_acc);
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
