/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf1_u35purecfma.c --function \
 *     Sleef_finz_sqrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.75344cp-57f, 0.0f, 0.0f, 0x1.a7c708p-77f, 0x1.e2ef66p-69f, 0x1.63ab7p-14f,
     0.0f, 0x1.a7585p-54f, 0.0f, 0.0f, 0x1.5dcd78p-90f, 0.0f, 0.0f, 0x1.de5fe4p-86f,
     0x1.411d3cp-86f, 0.0f, 0x1.cf99a6p-59f, 0x1.cd9d7p-89f, 0.0f, 0.0f, 0.0f,
     0x1.617124p-95f, 0x1.11f6fep-122f, 0.0f, 0x1.30899p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.537ccp-99f, 0x1.7272a6p-63f, 0x1.921f7cp-26f, 0.0f, 0x1.20cd94p-21f, 0.0f,
     0.0f, 0.0f, 0x1.064122p-83f, 0.0f, 0.0f, 0x1.ef94dcp-78f, 0.0f, 0.0f,
     0x1.a3f182p-69f, 0.0f, 0.0f, 0x1.a32ce8p-26f, 0.0f, 0x1.86f232p-81f,
     0x1.eceefcp-121f, 0x1.064596p-105f, 0.0f, 0.0f, 0x1.799c78p-64f, 0x1.df895cp-29f,
     0.0f, 0.0f, 0x1.7043c8p-126f, 0x1.335d1ep-44f, 0.0f, 0x1.3b372cp-99f,
     0x1.1add82p-10f, 0.0f, 0x1.9c60dcp-73f, 0x1.3b1c02p-29f, 0x1.68aafep-30f,
     0x1.ed13e2p-63f, 0.0f, 0.0f, 0x1.4c33bcp-101f, 0.0f, 0.0f, 0x1.dfb4f4p-80f,
     0x1.570976p-6f, 0x1.0eec12p-91f, 0.0f, 0.0f, 0.0f, 0x1.749142p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.497254p-44f, 0.0f, 0.0f, 0x1.a3d274p-59f, 0x1.fa8116p-63f,
     0.0f, 0x1.09eb1cp-20f, 0x1.ebd34ap-88f, 0x1.f301e8p-118f, 0x1.6a19p-34f, 0.0f,
     0x1.437b14p-65f, 0x1.42f8b4p-56f, 0x1p0f, 0.0f, 0x1.648c16p-11f,
     0x1.fd9af6p-126f, 0x1.84b5bep-108f, 0.0f, 0x1.0b7dc2p-86f, 0x1.58ff38p-59f,
     0x1.e143e8p-35f, 0x1.6e44c8p-77f, 0.0f, 0x1.7f1444p-84f, 0.0f, 0x1.8c422ep-124f,
     0x1.8e3eb6p-2f, 0.0f, 0x1.c5c7c8p-53f, 0x1.2e529ap-41f, 0x1.f599e2p-40f,
     0x1.69b3e2p-2f, 0.0f, 0x1.5fa514p-116f, 0.0f, 0.0f, 0x1.adb77ap-93f,
     0x1.bda052p-44f, 0x1.c2057cp-125f, 0x1.c1ccbp-48f, 0.0f, 0x1.c52276p-53f,
     0x1.63bd12p-104f, 0.0f, 0x1.bb0a9ap-120f, 0.0f, 0x1.8b5474p-82f, 0.0f,
     0x1.fcae04p-112f, 0x1.f31522p-48f, 0x1.bf4804p-60f, 0.0f, 0.0f, 0x1.a404d2p-58f,
     0.0f, 0x1.01e544p-53f, 0x1.4001bep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5b5f6p-44f,
     0x1.20df58p-116f, 0x1.e7e382p-92f, 0.0f, 0.0f, 0.0f, 0x1.1e1456p-60f, 0.0f, 0.0f,
     0.0f, 0x1.a6bc12p-4f, 0.0f, 0x1.3c014ep-8f, 0x1.4a5c6ep-47f, 0.0f, 0.0f,
     0x1.cdd378p-82f, 0x1.a119c6p-87f, 0x1.4d3618p-112f, 0.0f, 0x1.97708ep-85f,
     0x1.25d396p-29f, 0x1.e70ec8p-99f, 0.0f, 0x1.d396d4p-126f, 0.0f, 0x1.06748cp-41f,
     0x1.57ab14p-124f, 0.0f, 0x1.e7be88p-85f, 0.0f, 0x1.ac3224p-7f, 0.0f,
     0x1.f612d4p-97f, 0x1.84c6c4p-31f, 0x1.0cf6b2p-95f, 0x1.7a6bbep-31f,
     0x1.2e2f34p-5f, 0.0f, 0.0f, 0x1.37a34ep-11f, 0.0f, 0.0f, 0.0f, 0x1.fe5026p-4f,
     0.0f, 0x1.40ff1ep-3f, 0.0f, 0.0f, 0.0f, 0x1.46645p-17f, 0x1.8b8496p-9f,
     0x1.14897ep-52f, 0.0f, 0x1.65a45ap-31f, 0.0f, 0x1.76afe2p-88f, 0x1.c4394ep-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f8d68p-95f, 0x1.858caep-81f, 0.0f, 0x1.f86ab2p-123f,
     0x1.f6c72cp-75f, 0.0f, 0x1.ba23c8p-43f, 0.0f, 0.0f, 0x1.65dfc6p-111f, 0.0f, 0.0f,
     0x1.7619aep-114f, 0x1.5875dap-11f, 0x1.84f74p-93f, 0.0f, 0.0f, 0x1.6ebe5p-99f,
     0.0f, 0x1.e65b92p-26f, 0x1.98a85ep-121f, 0x1.883072p-5f, 0.0f, 0x1.9b8126p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f98e04p-12f, 0x1.9f0b0cp-125f, 0.0f,
     0x1.c888dep-38f, 0x1.caf1d6p-9f, 0.0f, 0x1.2ca49cp-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.40f3dap-30f, 0.0f, 0x1.a7a6ap-3f, 0x1p0f, 0x1.87fdccp-35f,
     0x1.59543ep-33f, 0x1.022c74p-76f, 0x1.b310bap-92f, 0x1.c52652p-98f, 0.0f,
     0x1.e4c88cp-56f, 0x1.d7bca6p-52f, 0x1.a8f982p-106f, 0.0f, 0x1.3a07f6p-66f,
     0x1.74e0e8p-8f, 0.0f, 0.0f, 0.0f, 0x1.c78e16p-97f, 0.0f, 0.0f, 0x1.76a2dp-34f,
     0.0f, 0.0f, 0x1.a2584cp-88f, 0x1.4091f8p-71f, 0x1.08941cp-21f, 0.0f, 0.0f,
     0x1.46f568p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0b0bep-34f, 0x1.f64728p-110f,
     0.0f, 0x1.70bd56p-9f, 0x1.2975fep-125f, 0.0f, 0x1.a389f6p-67f, 0.0f, 0.0f,
     0x1.e240eap-95f, 0.0f, 0.0f, 0x1.bf3d9ap-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.564bbap-66f, 0.0f, 0.0f, 0.0f, 0x1.7d026p-115f, 0.0f, 0x1.9db38p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfd5c4p-123f, 0x1.b606e4p-103f, 0x1.163874p-21f,
     0x1.c18decp-110f, 0.0f, 0x1.59fdc6p-116f, 0.0f, 0.0f, 0x1.d3e41ep-52f,
     0x1.204fa4p-69f, 0x1.f3328ep-74f, 0x1.652b54p-104f, 0x1.547ac4p-109f, 0.0f, 0.0f,
     0x1.958812p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2e002p-4f, 0.0f, 0x1.55c6acp-123f,
     0x1.b84ffap-124f, 0.0f, 0x1.892988p-34f, 0x1.f199bcp-33f, 0x1.24b4d6p-59f,
     0x1.d0f2ccp-66f, 0x1.2e17d8p-66f, 0.0f, 0x1.ba744ep-84f, 0x1.20985ep-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a362e6p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8374cp-122f,
     0x1.1b9e1cp-61f, 0.0f, 0x1.811c82p-14f, 0.0f, 0.0f, 0.0f, 0x1.217fcap-56f, 0.0f,
     0.0f, 0x1.dc9a2ep-53f, 0x1.1dc24p-89f, 0x1.82a21ep-44f, 0x1.84f86p-3f, 0.0f,
     0.0f, 0.0f, 0x1.b49064p-20f, 0.0f, 0x1.af241p-99f, 0.0f, 0.0f, 0x1.82f82ep-33f,
     0x1.a6ad76p-53f, 0x1.cb7a2ep-117f, 0.0f, 0x1.c8d346p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.88fafcp-97f, 0.0f, 0.0f, 0.0f, 0x1.a856cep-34f, 0.0f,
     0x1.70fe02p-22f, 0x1.28d2cp-45f, 0x1.c4c2fep-91f, 0x1.f27906p-71f, 0.0f,
     0x1.25d634p-15f, 0.0f, 0x1.2f088cp-124f, 0x1.0032f6p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9eaadcp-29f, 0.0f, 0x1.d48386p-78f, 0x1.b28cecp-124f,
     0x1.775faap-100f, 0.0f, 0.0f, 0x1.b9c95cp-88f, 0x1.d7a04ap-64f, 0x1.5f325cp-82f,
     0x1.4b94ep-88f, 0x1.0a4e34p-56f, 0.0f, 0.0f, 0.0f, 0x1.f22bd2p-75f, 0.0f,
     0x1.09e978p-64f, 0x1.20cf28p-46f, 0.0f, 0x1.5c8ff6p-59f, 0.0f, 0x1.a650a6p-10f,
     0x1.ae1f18p-12f, 0.0f, 0x1.4d0c6ap-14f, 0x1.bbb3bap-3f, 0.0f, 0x1.19a7ap-71f,
     0.0f, 0x1.dcca2cp-57f, 0x1.115abcp-124f, 0.0f, 0x1.42debcp-49f, 0x1.18bbe6p-24f,
     0x1.d275a2p-37f, 0x1.35ce32p-105f, 0x1.abbe54p-49f, 0.0f, 0.0f, 0x1.ca6bcap-3f,
     0.0f, 0.0f, 0x1.c7e258p-36f, 0.0f, 0x1.c23d52p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9e0f6p-10f, 0.0f, 0x1.4c96f8p-98f, 0.0f, 0x1.392ac8p-93f, 0x1.4f24b6p-20f,
     0x1.47824p-100f, 0.0f, 0.0f, 0x1.ac01cap-8f, 0.0f, 0x1.890e84p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4039c6p-49f, 0x1.739722p-11f, 0x1.70b67cp-111f,
     0x1.390b6ep-87f, 0.0f, 0.0f, 0x1.d5a12cp-92f, 0.0f, 0x1.eac868p-115f, 0.0f, 0.0f,
     0x1.98954cp-29f, 0x1.f4a9f4p-90f, 0.0f, 0.0f, 0x1.26ce4ap-84f, 0.0f,
     0x1.86a65ap-91f, 0.0f, 0x1.f502c2p-52f, 0x1.3b4232p-54f, 0.0f, 0x1.6a58e8p-49f,
     0.0f, 0.0f, 0.0f, 0x1.bd766ep-5f, 0x1.2250f4p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d9834p-105f, 0x1.4f6de2p-69f, 0x1.c92a1ep-40f, 0x1.70c4fap-49f,
     0x1.b60598p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a4758p-111f, 0.0f, 0.0f,
     0x1.ae09aap-49f, 0x1.aabd4cp-56f, 0x1.d3c29ap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e4fe4ep-92f, 0x1.e28248p-77f, 0x1.65ff4cp-1f, 0.0f,
     0x1.06d32cp-76f, 0.0f, 0x1.75fca8p-3f, 0x1.6d46f4p-5f, 0.0f, 0x1.8618c4p-51f,
     0.0f, 0x1.0409a8p-52f, 0.0f, 0x1.4dd76cp-49f, 0.0f, 0.0f, 0.0f, 0x1.3a71c8p-39f,
     0x1.ca92e2p-42f, 0x1.0e8ff4p-111f, 0x1.0a0c88p-106f, 0x1.f62e2ep-51f,
     0x1.4d83b6p-1f, 0.0f, 0.0f, 0x1.a94638p-16f, 0.0f, 0x1.e291a8p-108f,
     0x1.fca99cp-100f, 0.0f, 0.0f, 0x1.c69cf2p-26f, 0x1.6bc07cp-12f, 0.0f, 0.0f, 0.0f,
     0x1.3bdcd6p-99f, 0x1.a62e52p-79f, 0.0f, 0x1.b75758p-50f, 0.0f, 0x1.90ba8cp-43f,
     0.0f, 0.0f, 0x1.2f2f76p-117f, 0.0f, 0x1.4e6bacp-9f, 0x1.e34744p-101f,
     0x1.f0a314p-106f, 0x1.a271f4p-24f, 0.0f, 0.0f, 0x1.d851e6p-53f, 0x1.4bed22p-81f,
     0.0f, 0.0f, 0.0f, 0x1.4fb914p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9da5ecp-1f, 0x1.8c481p-27f, 0x1.8d25dep-91f, 0x1.4ee8ep-125f,
     0x1.9b42fp-100f, 0.0f, 0.0f, 0x1.fbe896p-85f, 0.0f, 0.0f, 0x1.efa54ep-122f,
     0x1.868c0ap-59f, 0.0f, 0.0f, 0x1.45e42p-89f, 0x1.e5263p-25f, 0.0f, 0.0f,
     0x1.bf2e38p-56f, 0x1.8522e4p-99f, 0x1.d8c7b4p-93f, 0.0f, 0x1.d5902cp-79f, 0.0f,
     0x1.d95676p-34f, 0.0f, 0.0f, 0.0f, 0x1.a750f8p-122f, 0.0f, 0x1.578ab2p-114f,
     0.0f, 0x1.36e6b4p-1f, 0x1.5a4418p-33f, 0x1.7798cep-1f, 0.0f, 0.0f,
     0x1.f339f4p-42f, 0.0f, 0x1.f2c592p-4f, 0.0f, 0x1.246648p-72f, 0x1.6c36dcp-65f,
     0x1.5684f6p-101f, 0x1.c87f66p-60f, 0x1.32512ap-21f, 0x1.9178a8p-26f,
     0x1.6fe218p-119f, 0.0f, 0x1.a441ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b7d2p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a317aep-43f, 0.0f,
     0x1.866898p-54f, 0x1.b6195cp-29f, 0.0f, 0x1.45a254p-91f, 0.0f, 0x1.9c9384p-110f,
     0.0f, 0x1p0f, 0x1.e466cp-65f, 0.0f, 0.0f, 0x1.6bc93ap-77f, 0x1.0f7986p-26f,
     0x1.06007ep-76f, 0x1.c2c4b2p-101f, 0x1.0b95a4p-62f, 0.0f, 0.0f, 0x1.6736f2p-85f,
     0x1.08aed4p-105f, 0.0f, 0.0f, 0x1.765c76p-83f, 0.0f, 0x1.a7c5ap-125f, 0.0f,
     0x1.08fabcp-50f, 0.0f, 0x1.f2afbep-46f, 0.0f, 0.0f, 0x1.b0b81ap-7f,
     0x1.808924p-34f, 0.0f, 0x1.3d5ebcp-63f, 0.0f, 0.0f, 0x1.86c062p-115f, 0.0f, 0.0f,
     0x1.13cf96p-119f, 0x1.2a2938p-22f, 0.0f, 0.0f, 0x1.ebce0ap-11f, 0.0f,
     0x1.c29d82p-13f, 0.0f, 0.0f, 0.0f, 0x1.699d86p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79c7c6p-107f, 0.0f, 0x1.fc07e8p-70f, 0.0f, 0.0f, 0x1.95632ap-69f, 0.0f,
     0x1.28d856p-22f, 0.0f, 0.0f, 0x1.0ef93cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e493dep-126f, 0.0f, 0.0f, 0x1.104318p-6f, 0x1.33522cp-1f, 0x1.d69ca6p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a85aa6p-42f, 0x1.20dfc6p-13f, 0x1.eb9bccp-40f,
     0x1.ee757ap-96f, 0x1.6fc8f8p-95f, 0.0f, 0.0f, 0x1.eaee1ep-82f, 0.0f, 0.0f,
     0x1.980c1ap-103f, 0.0f, 0.0f, 0x1.c35bd6p-92f, 0x1.27ee0ap-87f, 0.0f, 0.0f, 0.0f,
     0x1.d7635ap-93f, 0x1.1a84aep-27f, 0x1.b7f836p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eb9768p-101f, 0.0f, 0.0f, 0x1.5b448ap-34f, 0x1.21cc58p-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5073bep-70f, 0.0f, 0.0f, 0x1.0bdbfap-97f, 0.0f,
     0x1.adca58p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66a034p-9f, 0x1.c592cap-51f, 0.0f,
     0x1.21c262p-118f, 0.0f, 0.0f, 0x1.ce7fep-28f, 0.0f, 0.0f, 0.0f, 0x1.1d9668p-84f,
     0x1.faaa22p-9f, 0.0f, 0.0f, 0.0f, 0x1.fc3b34p-53f, 0.0f, 0.0f, 0.0f,
     0x1.b75234p-110f, 0.0f, 0x1.95e14p-70f, 0x1.a5c4f6p-38f, 0x1.ad6bf6p-18f,
     0x1.6a4e62p-62f, 0x1.1e4e2cp-89f, 0x1.52808ep-14f, 0.0f, 0x1.ba4b2ap-51f, 0.0f,
     0x1.b427aep-60f, 0.0f, 0x1.538b3ap-82f, 0x1.b7aae2p-81f, 0.0f, 0x1.cbad9ep-59f,
     0x1.1eab24p-34f, 0x1.5bd306p-74f, 0.0f, 0.0f, 0.0f, 0x1.290298p-78f,
     0x1.a0affep-69f, 0x1.bb9e88p-29f, 0.0f, 0x1.3e5d4ep-105f, 0x1.fe0eaep-100f,
     0x1.3ed58ap-94f, 0x1.4268c8p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baaf72p-17f,
     0.0f, 0x1.d4d302p-122f, 0x1.10c776p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c60658p-122f, 0x1.573f74p-19f, 0.0f, 0.0f, 0.0f, 0x1.86f0c6p-98f, 0.0f,
     0x1.081d1cp-39f, 0.0f, 0x1.7483fap-94f, 0x1.91306p-92f, 0x1.a341f8p-106f,
     0x1.dd150ap-15f, 0x1.2f9848p-77f, 0.0f, 0.0f, 0x1.0dba7ep-31f, 0.0f,
     0x1.2b46a6p-4f, 0x1p0f, 0x1.2db8a8p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.445cfep-118f, 0x1.90f79cp-55f, 0x1.1ba0c4p-2f, 0.0f, 0.0f, 0x1.78bc36p-3f,
     0x1.4c9aecp-49f, 0.0f, 0.0f, 0x1.d4f594p-40f, 0.0f, 0x1.fbdbdcp-103f, 0.0f, 0.0f,
     0x1.485436p-48f, 0x1.66ad6p-83f, 0.0f, 0.0f, 0x1.273188p-114f, 0.0f,
     0x1.8f5546p-74f, 0x1.c2b4p-108f, 0.0f, 0x1.ec454p-112f, 0x1.c24a5ep-109f,
     0x1.1a68e2p-106f, 0x1.c37d5p-50f, 0x1.551d76p-86f, 0.0f, 0x1.8cbad2p-23f,
     0x1.0d4a74p-5f, 0x1.de542ep-69f, 0.0f, 0.0f, 0x1.f6318ap-126f, 0x1.e75682p-65f,
     0x1.aba822p-115f, 0.0f, 0.0f, 0.0f, 0x1.b3dbb8p-5f, 0x1.36b6cap-48f,
     0x1.ae9b02p-23f, 0x1.664bp-13f, 0.0f, 0x1.f034eap-77f, 0x1.886606p-21f, 0.0f,
     0x1.167e8ep-42f, 0x1.f6ab26p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b641ap-99f, 0.0f, 0x1.a94d0ap-101f, 0.0f, 0x1.4e2878p-12f, 0.0f, 0.0f,
     0x1.876ab8p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.2ff928p-93f, 0.0f,
     0.0f, 0x1.621e06p-78f, 0x1.810e1cp-69f, 0.0f, 0.0f, 0x1.fd01ep-91f,
     0x1.7c85a8p-42f, 0x1.cd51c2p-91f, 0.0f, 0x1.56b13p-100f, 0x1.b8a186p-35f, 0.0f,
     0x1.420598p-5f, 0x1.3c66a8p-49f, 0x1.40d306p-111f, 0x1.9f2244p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.872c0ap-120f, 0.0f, 0x1.f61898p-107f, 0x1.9e42cap-57f,
     0x1.da3a06p-53f, 0.0f, 0x1.e6ce74p-104f, 0x1.66e368p-10f, 0x1.efd714p-98f, 0.0f,
     0.0f, 0x1.31fe4p-99f, 0x1.f541c6p-88f, 0.0f, 0.0f, 0.0f, 0x1.138a44p-14f,
     0x1.9dbdd6p-64f, 0.0f, 0x1.4d203cp-42f, 0x1.d7a6bcp-120f, 0.0f, 0.0f, 0.0f,
     0x1.d6f04p-12f, 0x1.8600cap-124f, 0.0f, 0.0f, 0x1.cd5ca4p-54f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sqrtf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
