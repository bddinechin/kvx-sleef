/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_ceilf.c --function ceilf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ad518p-57f, 0x1.d56c22p-60f, 0.0f, 0x1.49ccdp-126f,
     0.0f, 0x1.999e42p-51f, 0x1.7b6556p-119f, 0x1.cb3c92p-42f, 0.0f, 0x1.a51dbap-45f,
     0x1.39302ep-38f, 0x1.214e1cp-8f, 0x1.138ccap-15f, 0.0f, 0.0f, 0x1.ba7b18p-3f,
     0x1.681f9ep-91f, 0x1.ec33cep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f6e1p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4d6cap-110f, 0.0f, 0.0f, 0.0f, 0x1.15a4e8p-20f,
     0x1.9ac732p-42f, 0x1.04bb9ep-118f, 0x1.88984ap-42f, 0x1.75f1a4p-93f,
     0x1.175f84p-6f, 0x1.046988p-79f, 0.0f, 0.0f, 0.0f, 0x1.56475ap-116f,
     0x1.5318bep-14f, 0x1.e45078p-19f, 0.0f, 0x1.d1e672p-113f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.a427c4p-9f, 0x1.a80df4p-108f, 0.0f, 0.0f, 0x1.6bc7aap-30f, 0.0f,
     0x1.16b0d4p-11f, 0.0f, 0x1.7ce57ap-123f, 0x1.785886p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a3db24p-80f, 0x1.4c718ep-24f, 0x1.bd115cp-91f, 0.0f, 0.0f, 0.0f,
     0x1.00b546p-36f, 0.0f, 0x1.a75f32p-55f, 0x1.62f4dcp-75f, 0.0f, 0.0f, 0.0f,
     0x1.104566p-82f, 0x1.269162p-31f, 0x1.b90e7ap-62f, 0x1.275e94p-25f,
     0x1.688d8cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27af0ep-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.358074p-96f, 0.0f, 0x1.578af8p-75f, 0.0f, 0x1.bb9bf2p-32f, 0x1.cc07c2p-95f,
     0.0f, 0.0f, 0x1.db486p-38f, 0x1.1dd7fcp-98f, 0.0f, 0.0f, 0.0f, 0x1.0c0dacp-16f,
     0.0f, 0.0f, 0x1.d0acd8p-20f, 0x1.7c4448p-76f, 0.0f, 0.0f, 0x1.50e32ep-86f,
     0x1.15f1d6p-4f, 0x1.16e04cp-79f, 0x1.b1f766p-69f, 0x1.615688p-92f, 0.0f,
     0x1.e78a54p-110f, 0x1.7673fep-49f, 0.0f, 0x1.45dce2p-97f, 0x1.8c1cc8p-47f, 0.0f,
     0x1.d8c5fcp-115f, 0.0f, 0x1.50f5fcp-32f, 0x1.d13a78p-68f, 0.0f, 0x1.a8e4fp-109f,
     0x1.d26214p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5891e2p-21f, 0.0f,
     0x1.6ee582p-70f, 0.0f, 0.0f, 0.0f, 0x1.660fc4p-92f, 0.0f, 0x1.0e10b2p-61f,
     0x1.90495p-121f, 0x1.7cb332p-5f, 0.0f, 0x1.0a21p-109f, 0x1.0279bap-53f, 0.0f,
     0.0f, 0x1.8aceb8p-75f, 0.0f, 0x1.883ef4p-119f, 0.0f, 0x1.a93452p-76f,
     0x1.c96992p-27f, 0x1.8394e2p-37f, 0x1.0d6066p-126f, 0.0f, 0x1.50d988p-86f, 0.0f,
     0x1.f1fb54p-13f, 0.0f, 0.0f, 0.0f, 0x1.b20f1p-102f, 0x1.22411ap-112f, 0.0f, 0.0f,
     0.0f, 0x1.8b4f98p-66f, 0.0f, 0x1.ab5098p-108f, 0.0f, 0x1.49dbd8p-11f,
     0x1.c9dd74p-71f, 0x1.ebd2cep-8f, 0.0f, 0x1.a5559cp-18f, 0x1.33af5p-96f,
     0x1.bffc54p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b01d1p-66f, 0.0f, 0.0f,
     0x1.0e5af4p-99f, 0.0f, 0x1.cb118ap-120f, 0.0f, 0.0f, 0.0f, 0x1.204f5p-35f,
     0x1.1b0438p-103f, 0.0f, 0x1.c2b922p-89f, 0x1.92a362p-94f, 0x1.14d49cp-56f,
     0x1.d4cccp-10f, 0.0f, 0.0f, 0x1.6db3b4p-82f, 0.0f, 0x1.47e5c2p-44f, 0.0f,
     0x1.3ad3fp-49f, 0x1.1e41b2p-81f, 0.0f, 0.0f, 0x1.e48392p-38f, 0.0f,
     0x1.0dcac6p-119f, 0x1.131212p-117f, 0x1.344b44p-81f, 0.0f, 0x1.7d55a2p-47f, 0.0f,
     0x1.931e16p-65f, 0.0f, 0.0f, 0x1.4ddc0ap-60f, 0x1.83f4aap-101f, 0x1.c33f04p-7f,
     0x1.e999b2p-27f, 0x1.89bd72p-89f, 0.0f, 0x1.621eep-94f, 0.0f, 0x1.62af18p-107f,
     0x1.69f88ep-42f, 0.0f, 0x1.e78f98p-17f, 0.0f, 0x1.979caep-33f, 0x1.f49a5p-25f,
     0.0f, 0x1.8f69c6p-40f, 0.0f, 0.0f, 0.0f, 0x1.00907cp-80f, 0x1.6d20fcp-5f,
     0x1.69d756p-121f, 0x1.691362p-22f, 0x1.460e0ep-49f, 0.0f, 0x1.60ad48p-7f,
     0x1.17a682p-25f, 0x1.1e2634p-29f, 0x1.e87cep-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88054p-5f, 0x1.0ba128p-78f, 0.0f, 0.0f, 0.0f, 0x1.96ce64p-31f,
     0x1.eeb17p-104f, 0x1.8986d8p-3f, 0x1.fb25ecp-48f, 0.0f, 0x1.93a118p-43f, 0.0f,
     0x1.cc949cp-123f, 0.0f, 0x1.015298p-26f, 0.0f, 0.0f, 0.0f, 0x1.27bf3ep-42f,
     0x1.628e4p-93f, 0x1.3e9af2p-123f, 0.0f, 0.0f, 0.0f, 0x1.e2fe5cp-86f,
     0x1.cbda4ap-45f, 0.0f, 0x1.8c8df6p-46f, 0x1.f5b214p-108f, 0x1.32c26cp-110f, 0.0f,
     0.0f, 0x1.55c5b8p-60f, 0x1.2e48aap-36f, 0.0f, 0x1.083456p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d75da8p-71f, 0x1.19d6a4p-93f, 0.0f, 0x1.19a38ap-12f, 0x1.116056p-110f,
     0x1.fa357cp-107f, 0x1.776754p-47f, 0x1.b3a406p-52f, 0x1.9db85ap-15f,
     0x1.5a7c5cp-22f, 0x1.749992p-17f, 0x1.aefe5cp-118f, 0x1.6d302p-86f,
     0x1.c3fe32p-56f, 0x1.4d5b7ap-95f, 0.0f, 0x1.56322p-9f, 0x1.9b672ap-55f,
     0x1.d46266p-99f, 0x1.ba8b6ap-49f, 0x1.5f9fbcp-78f, 0.0f, 0x1.7c1c3ap-16f,
     0x1.cd2094p-96f, 0x1.a9aefep-108f, 0.0f, 0.0f, 0x1.165c62p-52f, 0x1.e5731cp-63f,
     0x1.324706p-39f, 0.0f, 0x1.682afap-86f, 0x1.5c1b0cp-32f, 0.0f, 0.0f, 0.0f,
     0x1.f7895ap-88f, 0x1.1dfcc6p-7f, 0.0f, 0x1.d1190ep-49f, 0x1.d58dbcp-36f,
     0x1.3d6808p-38f, 0x1.0f8722p-16f, 0.0f, 0x1.f0630cp-78f, 0x1.e1621ep-69f, 0.0f,
     0.0f, 0.0f, 0x1.9273e6p-18f, 0.0f, 0x1.dbde84p-37f, 0x1.92ff94p-122f, 0.0f, 0.0f,
     0x1.75c134p-75f, 0x1.83ce3ap-30f, 0x1.837fc8p-12f, 0.0f, 0x1.53027ap-120f, 0.0f,
     0x1.013574p-98f, 0.0f, 0x1.1add0ap-98f, 0.0f, 0.0f, 0x1.88e34ap-83f, 0.0f, 0.0f,
     0.0f, 0x1.a9b468p-110f, 0.0f, 0x1.b5c392p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f63e32p-115f, 0x1.c483c4p-17f, 0x1.325a98p-52f, 0x1.9e931ep-109f,
     0.0f, 0.0f, 0x1.a116a8p-44f, 0x1.1e1c88p-84f, 0x1.4032cap-30f, 0.0f,
     0x1.f9d9fcp-73f, 0.0f, 0.0f, 0x1.74e636p-76f, 0x1.0b77cap-97f, 0x1.f821eep-78f,
     0.0f, 0x1.4d1418p-41f, 0.0f, 0x1.e31792p-36f, 0.0f, 0x1.429cb2p-53f,
     0x1.1ced06p-48f, 0.0f, 0x1.ff8f44p-27f, 0x1.62a4c6p-79f, 0x1.72a998p-119f, 0.0f,
     0.0f, 0.0f, 0x1.c9b318p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7935e4p-114f,
     0x1.a4e8c8p-89f, 0x1.3dbe48p-122f, 0x1.67e1dp-48f, 0.0f, 0.0f, 0x1.378b12p-72f,
     0x1.de4932p-12f, 0x1.dafb36p-55f, 0.0f, 0x1.099f76p-15f, 0.0f, 0.0f,
     0x1.28eaa8p-120f, 0.0f, 0x1.1f8afap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4af3p-91f, 0.0f, 0x1.dd1d96p-36f, 0.0f, 0.0f, 0x1.fc9eb2p-38f, 0.0f, 0.0f,
     0.0f, 0x1.cde888p-62f, 0x1.d46814p-34f, 0x1.12aab6p-85f, 0.0f, 0.0f,
     0x1.97dcb8p-106f, 0.0f, 0x1.69215ap-59f, 0x1.e31812p-43f, 0x1.a39398p-81f, 0.0f,
     0x1.4d2dbap-53f, 0x1.7f1c8ep-7f, 0.0f, 0x1.fd8c04p-102f, 0.0f, 0x1.914844p-87f,
     0.0f, 0.0f, 0x1.01b98p-26f, 0x1.5cd986p-41f, 0.0f, 0x1.eba692p-68f,
     0x1.00428p-1f, 0x1.e39666p-37f, 0x1.5f9a26p-30f, 0x1.9d12cep-9f, 0.0f, 0.0f,
     0.0f, 0x1.67e6bap-122f, 0x1.7bc6eep-85f, 0.0f, 0.0f, 0.0f, 0x1.96769ep-62f,
     0x1.b43f1ep-68f, 0.0f, 0.0f, 0.0f, 0x1.295398p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4ee918p-54f, 0.0f, 0x1.301562p-61f, 0.0f, 0x1.e4ee1ap-67f,
     0x1.9e2cp-124f, 0.0f, 0.0f, 0x1.75a734p-112f, 0x1.f020c8p-94f, 0x1.bfe59cp-97f,
     0.0f, 0x1.67d33ep-4f, 0.0f, 0x1.3358f8p-97f, 0.0f, 0x1.da4ccap-38f,
     0x1.c61a0ap-99f, 0x1.9225e8p-121f, 0.0f, 0x1.98ea3p-107f, 0.0f, 0.0f, 0.0f,
     0x1.176426p-107f, 0x1.82b814p-46f, 0x1.96604p-100f, 0x1.5861a2p-115f, 0.0f,
     0x1.5a177cp-108f, 0.0f, 0x1.e07694p-103f, 0x1.c70624p-52f, 0.0f, 0.0f,
     0x1.c28a62p-94f, 0.0f, 0x1.d5ffa2p-17f, 0x1.40879ep-50f, 0x1.8477fcp-9f, 0.0f,
     0x1.d5545p-81f, 0.0f, 0x1.c8736ep-77f, 0.0f, 0.0f, 0x1.cf1fccp-43f, 0.0f,
     0x1.3b960ap-102f, 0x1.bc6bb6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61a29p-69f,
     0x1.de3d0ep-111f, 0.0f, 0x1.477354p-58f, 0x1.eba764p-126f, 0.0f, 0x1.f496cap-37f,
     0.0f, 0.0f, 0x1.8aaf16p-37f, 0.0f, 0.0f, 0.0f, 0x1.45c59p-94f, 0x1.80f594p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d2a8cp-20f, 0.0f, 0.0f, 0x1.941a3p-38f, 0.0f,
     0x1.1a3bfcp-101f, 0.0f, 0.0f, 0x1.8df24ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3845f8p-26f, 0x1.5ca282p-33f, 0x1.f08a2cp-13f,
     0x1.a373a2p-74f, 0.0f, 0x1.4355fap-34f, 0x1.053704p-88f, 0.0f, 0.0f,
     0x1.752ce4p-14f, 0x1.d8502ep-75f, 0x1.8e0128p-75f, 0x1.640824p-113f, 0.0f,
     0x1.00bdb4p-54f, 0.0f, 0.0f, 0x1.748862p-40f, 0.0f, 0.0f, 0.0f, 0x1.defa78p-70f,
     0.0f, 0.0f, 0x1.3e9d9cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b842acp-49f,
     0.0f, 0x1.144bdap-125f, 0.0f, 0x1.fe0b56p-17f, 0x1.45b932p-62f, 0.0f,
     0x1.57a192p-19f, 0.0f, 0x1p0f, 0x1.cd3d56p-124f, 0x1.d0da06p-63f, 0.0f,
     0x1.88146ep-94f, 0.0f, 0.0f, 0.0f, 0x1.672ac4p-8f, 0x1.cfc062p-124f,
     0x1.27a1dep-85f, 0x1.48edb8p-87f, 0x1.4a76ep-72f, 0x1.885f62p-110f,
     0x1.f5e27p-108f, 0.0f, 0.0f, 0x1.89a87ap-56f, 0x1.28e816p-111f, 0x1.957b74p-76f,
     0x1.2157ecp-115f, 0.0f, 0.0f, 0x1.990dccp-114f, 0x1.18136ep-40f, 0x1.8348b2p-36f,
     0x1.950cf6p-35f, 0x1.affb98p-27f, 0x1.300b68p-79f, 0x1.17fc46p-115f, 0.0f,
     0x1.412bb6p-88f, 0x1.ded18ep-99f, 0.0f, 0.0f, 0x1.471c4ep-91f, 0.0f, 0.0f,
     0x1.247cdep-107f, 0.0f, 0x1.4f784ap-66f, 0.0f, 0.0f, 0x1.4ea14cp-113f, 0.0f,
     0x1.fe2576p-36f, 0x1.e3fa3cp-65f, 0.0f, 0.0f, 0x1.b0b3aep-27f, 0.0f, 0.0f,
     0x1.d78ab4p-96f, 0x1.820144p-95f, 0x1.05a72cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21e2b6p-78f, 0x1.6ad8acp-52f, 0x1.a43896p-76f, 0x1.6ebf0cp-64f, 0.0f,
     0.0f, 0.0f, 0x1.cfdfa8p-121f, 0x1.fc2c9cp-118f, 0x1.0a4178p-58f, 0.0f,
     0x1.026eb4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37ffb8p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.603bep-10f, 0.0f, 0.0f, 0x1.5a8f2p-124f, 0x1.1cc15cp-51f, 0.0f,
     0x1.0a7abap-20f, 0x1.6e8deap-39f, 0.0f, 0x1.d954dcp-96f, 0x1.17db0ap-82f,
     0x1.bc5f92p-65f, 0x1.e240ccp-38f, 0x1.d1e352p-51f, 0.0f, 0.0f, 0.0f,
     0x1.f880f2p-82f, 0.0f, 0.0f, 0x1.404b3ap-4f, 0x1.c1070ep-61f, 0.0f, 0.0f,
     0x1.e376f4p-18f, 0x1.0bc0bcp-34f, 0.0f, 0.0f, 0.0f, 0x1.f26ca4p-47f, 0.0f,
     0x1.157d92p-54f, 0.0f, 0.0f, 0x1.381be8p-58f, 0x1.4eba36p-123f, 0x1.ac97aep-25f,
     0x1.ff9e9p-82f, 0x1.21e9fep-71f, 0x1.ac2ddp-97f, 0.0f, 0x1.dc9eaap-65f, 0.0f,
     0x1.2ac758p-69f, 0.0f, 0x1.1dfa56p-68f, 0x1.20ac16p-53f, 0.0f, 0x1.bf51cp-47f,
     0x1.1f9bf8p-32f, 0.0f, 0x1.ebe1bap-79f, 0x1.524758p-85f, 0.0f, 0.0f,
     0x1.82d792p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5b38p-44f, 0.0f,
     0x1.c0b48ap-102f, 0x1.ff8f8p-21f, 0.0f, 0.0f, 0x1.bac9a4p-47f, 0.0f, 0.0f,
     0x1.fcf8bcp-45f, 0.0f, 0x1.054dbcp-118f, 0x1.b61576p-125f, 0.0f,
     0x1.de5dfcp-112f, 0.0f, 0x1.15855ep-125f, 0.0f, 0x1.bfd428p-82f,
     0x1.7584c2p-121f, 0x1.dd58f4p-72f, 0.0f, 0x1.c3a18p-70f, 0.0f, 0x1.617bep-50f,
     0x1.fca708p-89f, 0.0f, 0.0f, 0x1.a972fap-80f, 0.0f, 0.0f, 0x1.e2b072p-92f,
     0x1.bed7d8p-99f, 0x1.c247fep-95f, 0x1.fd6124p-17f, 0x1.130698p-5f,
     0x1.3f818ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0599ccp-56f, 0x1.d1c7fep-74f, 0.0f,
     0x1.3812ep-11f, 0x1.c1287ep-97f, 0x1.5d3f4p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43d814p-27f, 0x1.80a24ep-120f, 0x1.f3d572p-49f, 0.0f, 0.0f, 0x1.ec59ep-40f,
     0x1.bc2662p-119f, 0.0f, 0.0f, 0.0f, 0x1.762e4ap-24f, 0x1.17b54cp-2f,
     0x1.57a166p-24f, 0x1.2747fcp-67f, 0.0f, 0x1.9010eap-7f, 0.0f, 0x1.1c4712p-62f,
     0x1.4432a6p-102f, 0x1.4bda6cp-59f, 0x1.435ae4p-114f, 0x1.cea2dap-99f,
     0x1.e11c5ap-56f, 0x1.e7a2a6p-51f, 0x1.de5d8ep-68f, 0x1.b9f984p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.85155ep-124f, 0.0f, 0x1.641674p-44f, 0x1.ac810cp-101f,
     0x1.603e6ep-77f, 0x1.52045cp-28f, 0.0f, 0x1.ddf196p-107f, 0.0f, 0x1.440986p-71f,
     0x1.b1c72ep-35f, 0.0f, 0x1.f48f4ap-22f, 0.0f, 0x1.296f52p-111f, 0x1.4f0932p-104f,
     0.0f, 0.0f, 0.0f, 0x1.93be3p-59f, 0.0f, 0.0f, 0.0f, 0x1.dbf08ap-89f,
     0x1.9adb16p-78f, 0.0f, 0.0f, 0.0f, 0x1.5eab7p-105f, 0.0f, 0x1.7b9348p-70f,
     0x1.726b36p-23f, 0x1.d57e18p-32f, 0x1.9045aap-69f, 0x1.458a2p-48f,
     0x1.342a1ep-99f, 0.0f, 0x1.9c335p-80f, 0x1.cbfdbp-66f, 0.0f, 0.0f, 0.0f,
     0x1.41ac4ep-7f, 0.0f, 0x1.96387cp-96f, 0.0f, 0.0f, 0x1.2b1aep-106f,
     0x1.ddc196p-20f, 0.0f, 0x1.e7aeeep-101f, 0x1.45d4b4p-2f, 0.0f, 0x1.0efc82p-101f,
     0x1.a1b75cp-102f, 0x1.7e4d42p-35f, 0x1.112a6ap-100f, 0.0f, 0x1.67ce34p-114f,
     0.0f, 0x1.0ae1a2p-27f, 0x1.66d53ep-42f, 0.0f, 0.0f, 0.0f, 0x1.80f25ep-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b119bap-102f, 0.0f, 0.0f, 0x1.26ab9ap-91f, 0.0f,
     0x1.c73e3p-12f, 0x1.f1253ep-104f, 0.0f, 0x1.401cfep-3f, 0x1.88decap-63f,
     0x1.b396c4p-85f, 0.0f, 0x1.750b44p-91f, 0x1.3c4fc2p-70f, 0x1.e0366cp-29f,
     0x1.c9f95ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85f38ep-84f, 0.0f, 0.0f, 0.0f,
     0x1.43fe6cp-21f, 0.0f, 0x1.f99776p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a7b56p-80f,
     0.0f, 0.0f, 0x1.1e08e2p-113f, 0x1.01f9c8p-58f, 0.0f, 0.0f, 0x1.45e5bap-110f,
     0.0f, 0x1.5e35fp-55f, 0.0f, 0x1.a54fd8p-13f, 0.0f, 0.0f, 0x1.727348p-21f,
     0x1.20189ap-111f, 0.0f, 0x1.66bda6p-77f, 0.0f, 0x1.cdbdfep-13f, 0.0f, 0.0f,
     0x1.bf6776p-26f, 0x1.d8943ap-59f, 0.0f, 0x1.046694p-82f, 0x1.ea42a4p-30f,
     0x1.7e420cp-77f, 0.0f, 0x1.c94074p-77f, 0.0f, 0x1.674fa4p-124f, 0x1.cc0662p-90f,
     0x1.72e3e4p-12f, 0x1.d4b7cp-122f, 0x1.e0c2ecp-97f, 0.0f, 0x1.da844cp-75f, 0.0f,
     0.0f, 0.0f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = ceilf(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("ceilf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("ceilf bench acc %a\n", global_bench_acc);
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
