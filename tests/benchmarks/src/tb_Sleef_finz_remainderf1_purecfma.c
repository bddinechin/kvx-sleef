/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_remainderf1_purecfma.c --function \
 *     Sleef_finz_remainderf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.af701ep-85f, 0.0f, 0x1.bccb6p-97f, 0x1.cce816p-34f, 0x1.cdce6ep-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.41f0a4p-50f, 0x1.c17f28p-66f, 0x1.ebabbp-45f, 0.0f,
     0x1.d5e6cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67f5eap-92f, 0x1.d06a4ap-63f,
     0.0f, 0x1.9e9b6p-91f, 0.0f, 0.0f, 0x1.7e8c4ep-30f, 0x1.b7fb86p-114f,
     0x1.21498p-62f, 0x1.5269e4p-109f, 0x1.dda97ep-91f, 0.0f, 0x1.566e52p-119f, 0.0f,
     0.0f, 0x1.dd1a6ap-1f, 0x1.38c3fap-45f, 0x1.18459cp-46f, 0.0f, 0.0f, 0.0f,
     0x1.90defap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368a48p-57f, 0x1.132bd4p-68f, 0.0f,
     0.0f, 0.0f, 0x1.2b92acp-21f, 0x1.e6ad1p-85f, 0.0f, 0x1.aa8da6p-84f,
     0x1.53bdacp-31f, 0.0f, 0.0f, 0x1.55d5cp-47f, 0x1.267f72p-16f, 0x1.4407ccp-115f,
     0x1.f752b4p-87f, 0.0f, 0x1.e13bfp-124f, 0x1.7eb2e4p-110f, 0.0f, 0x1.7acd1ep-75f,
     0x1.d13846p-53f, 0.0f, 0.0f, 0.0f, 0x1.ed449cp-111f, 0.0f, 0x1.cb2598p-11f, 0.0f,
     0x1.a883f4p-111f, 0x1.e343bp-48f, 0.0f, 0.0f, 0.0f, 0x1.6009eap-74f,
     0x1.4ccdacp-85f, 0.0f, 0.0f, 0x1.82369p-2f, 0x1.7d651p-77f, 0x1.9accd4p-54f,
     0x1.33f0b2p-58f, 0.0f, 0.0f, 0.0f, 0x1.11f014p-25f, 0.0f, 0x1.13ea02p-9f,
     0x1.0ad334p-6f, 0.0f, 0.0f, 0x1.48e6e4p-119f, 0.0f, 0x1.a8f8f4p-20f,
     0x1.c3e974p-80f, 0.0f, 0x1.dd4cc2p-37f, 0x1.ed295ap-27f, 0x1.e049bap-1f, 0.0f,
     0x1.6aa0bap-61f, 0.0f, 0.0f, 0x1.0a0afp-67f, 0.0f, 0.0f, 0.0f, 0x1.d30e7p-26f,
     0x1.eadedcp-81f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.923e42p-100f, 0x1.3f472cp-8f,
     0.0f, 0x1.d5ab8p-81f, 0x1.1cf7c8p-37f, 0x1.ff9722p-96f, 0x1.17f606p-23f,
     0x1.5c354cp-39f, 0x1.1c621cp-12f, 0.0f, 0x1.a59e9p-11f, 0.0f, 0x1.0c3012p-32f,
     0x1.67349ep-4f, 0.0f, 0x1.dafc6p-105f, 0x1.85e1dep-62f, 0x1.20579ap-27f,
     0x1.57bc5ep-75f, 0x1.36d4c2p-82f, 0x1.1efcfp-97f, 0x1.bb24b2p-65f, 0.0f, 0.0f,
     0x1.8b680ap-54f, 0.0f, 0x1.439226p-89f, 0.0f, 0.0f, 0.0f, 0x1.45e232p-53f,
     0x1.2acb1ap-24f, 0.0f, 0x1.0efbd6p-19f, 0x1.9bff04p-74f, 0x1.88d3acp-16f, 0.0f,
     0x1.653756p-41f, 0.0f, 0.0f, 0.0f, 0x1.172848p-103f, 0.0f, 0.0f, 0x1.5a3e82p-92f,
     0x1.9903aep-61f, 0x1.4b62a6p-24f, 0.0f, 0x1.6cc798p-18f, 0x1.ec40bp-73f,
     0x1.64677ep-83f, 0x1.958f6ep-119f, 0.0f, 0x1.05be6cp-14f, 0x1.2a0ceep-22f, 0.0f,
     0.0f, 0.0f, 0x1.36c4cap-60f, 0x1.b6bbb2p-80f, 0.0f, 0x1.3b97eep-100f, 0.0f,
     0x1.40688cp-93f, 0x1.258c72p-8f, 0x1.c310f8p-68f, 0x1.f8859ap-24f, 0.0f, 0.0f,
     0x1.f2dd4cp-119f, 0.0f, 0.0f, 0.0f, 0x1.d520cep-124f, 0.0f, 0x1.8248fp-64f, 0.0f,
     0x1.5e281ep-120f, 0x1.f37f16p-115f, 0.0f, 0.0f, 0x1.77e046p-113f, 0.0f,
     0x1.ac9666p-57f, 0x1.cf900cp-113f, 0x1.8d101cp-81f, 0x1.8bf0ap-109f,
     0x1.2f268ep-95f, 0x1.963894p-97f, 0x1.bb43dp-36f, 0.0f, 0.0f, 0.0f,
     0x1.82cecep-11f, 0x1.d9344ep-59f, 0x1.32f8a8p-22f, 0.0f, 0.0f, 0x1.ef037cp-69f,
     0x1.41094ap-44f, 0x1.1352p-35f, 0x1.069ff4p-40f, 0.0f, 0x1.890f48p-120f, 0.0f,
     0x1.9a455p-14f, 0x1.16242cp-43f, 0x1.842bdep-6f, 0.0f, 0.0f, 0.0f,
     0x1.900f18p-74f, 0x1.83c34ep-85f, 0x1.e3bfb2p-69f, 0x1.4c73fep-121f, 0.0f,
     0x1.de59eep-86f, 0.0f, 0x1.e350fcp-63f, 0.0f, 0.0f, 0x1.322a24p-103f,
     0x1.24fffcp-22f, 0x1.dcb11ep-115f, 0x1.2c2aaep-81f, 0.0f, 0x1.2d2426p-126f,
     0x1.d644dcp-52f, 0.0f, 0x1.cdb67ep-21f, 0x1.7b44fep-33f, 0x1.102p-25f,
     0x1.ebb63ep-97f, 0x1.7d6abp-95f, 0.0f, 0x1.0a79acp-73f, 0x1.d96baep-78f,
     0x1.1ee832p-23f, 0x1.b08714p-37f, 0.0f, 0x1.c172e8p-17f, 0.0f, 0x1.83f674p-68f,
     0.0f, 0.0f, 0x1.580b12p-119f, 0.0f, 0x1.e081fap-81f, 0.0f, 0x1.3a936ap-101f,
     0.0f, 0.0f, 0x1.0e9ba4p-73f, 0.0f, 0x1.94a3e8p-11f, 0.0f, 0x1.b7d882p-113f, 0.0f,
     0x1.07491p-79f, 0x1.04e3cap-90f, 0x1p0f, 0.0f, 0x1.857fc2p-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.755e1ep-15f, 0.0f, 0x1.f57604p-112f, 0.0f, 0.0f, 0x1.c37f1cp-43f,
     0x1.171808p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3372c2p-122f, 0.0f, 0x1.c45094p-114f, 0x1.3da3e6p-49f, 0x1.708e68p-5f, 0.0f,
     0x1.36455ep-18f, 0x1.d2541p-76f, 0.0f, 0x1.4322f6p-114f, 0x1.ad456ep-62f, 0.0f,
     0.0f, 0.0f, 0x1.980cf4p-88f, 0.0f, 0.0f, 0x1.0836c4p-122f, 0.0f, 0x1.63504ap-84f,
     0.0f, 0x1.885fecp-70f, 0x1.9ba3aap-104f, 0x1.241b16p-6f, 0x1.0214b6p-46f,
     0x1.e804fap-92f, 0.0f, 0x1.1abebp-28f, 0x1.3a05d4p-119f, 0x1.ba226cp-8f,
     0x1.8d83ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08792ep-27f, 0.0f, 0x1.09c6c8p-67f,
     0.0f, 0.0f, 0x1.7d66e8p-113f, 0.0f, 0x1.27f966p-65f, 0x1.5defb6p-65f,
     0x1.be532ap-71f, 0x1.233502p-8f, 0.0f, 0x1.ba1b84p-55f, 0.0f, 0.0f,
     0x1.dadeeep-70f, 0x1.24e6dcp-118f, 0x1.660abp-42f, 0x1.4c14bp-16f,
     0x1.48cd7ap-9f, 0.0f, 0x1.4dcebcp-104f, 0.0f, 0.0f, 0x1.e2285ap-86f,
     0x1.14cfa2p-119f, 0x1.9b344ep-22f, 0.0f, 0x1.360a9ep-116f, 0x1.5e2db4p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.80a0bap-33f, 0x1.4a5f68p-69f, 0.0f, 0.0f, 0.0f,
     0x1.f83dbap-76f, 0x1.8eb068p-10f, 0.0f, 0.0f, 0.0f, 0x1.627f6p-61f, 0.0f,
     0x1.fab11p-72f, 0x1.36a358p-89f, 0.0f, 0x1.cba728p-78f, 0x1.1b5c94p-52f,
     0x1.d9845ap-94f, 0x1.c7340cp-91f, 0.0f, 0.0f, 0x1.57974cp-92f, 0.0f, 0.0f, 0.0f,
     0x1.6bff84p-55f, 0.0f, 0x1.6e07d2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da256cp-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d403cep-3f, 0x1.68e532p-105f, 0x1.15e78ap-63f,
     0x1.e6daecp-59f, 0.0f, 0.0f, 0x1.c5d832p-83f, 0x1.e901dep-104f, 0x1.80b956p-61f,
     0.0f, 0x1.ded118p-77f, 0x1.6dd9f2p-74f, 0x1.ec612cp-70f, 0.0f, 0.0f,
     0x1.449d1cp-121f, 0x1.86bf22p-81f, 0x1.501de6p-100f, 0.0f, 0.0f, 0x1.ace9d2p-22f,
     0.0f, 0.0f, 0x1.9420b8p-50f, 0.0f, 0.0f, 0x1.661cc4p-120f, 0x1.56f814p-55f,
     0x1.5a74f2p-120f, 0x1.db3998p-16f, 0x1.0a9b9ep-48f, 0.0f, 0x1.96e266p-28f, 0.0f,
     0x1.bbff86p-22f, 0x1.c88baep-106f, 0x1.bfd05ep-84f, 0x1.ccf718p-5f, 0.0f,
     0x1.f6c50cp-26f, 0.0f, 0x1.6af6b6p-26f, 0.0f, 0.0f, 0x1.266004p-49f, 0.0f, 0.0f,
     0.0f, 0x1.eeca3cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4b53p-92f, 0x1.d556bap-94f,
     0.0f, 0x1.088222p-15f, 0x1.dc6248p-101f, 0.0f, 0.0f, 0x1.9db1dap-106f, 0.0f,
     0.0f, 0x1.33b424p-5f, 0.0f, 0x1.a8f812p-28f, 0.0f, 0x1.9ceb7cp-70f, 0.0f, 0.0f,
     0x1.8d400ep-98f, 0x1.7a1e3cp-33f, 0x1.0478cp-10f, 0x1.0fb632p-10f,
     0x1.442794p-110f, 0.0f, 0x1.35215p-98f, 0x1.0e4352p-73f, 0.0f, 0.0f,
     0x1.201ab2p-72f, 0x1.8ee86ap-119f, 0x1.40d0b4p-93f, 0x1.d8f78p-90f, 0.0f,
     0x1.8dc35p-108f, 0.0f, 0x1.7f0c1cp-72f, 0.0f, 0.0f, 0x1.56e5bap-101f, 0.0f, 0.0f,
     0x1.fda854p-121f, 0x1.6b6a88p-2f, 0.0f, 0x1.d642cp-63f, 0x1.2efa62p-91f, 0.0f,
     0.0f, 0x1.20d7acp-13f, 0x1.44cd08p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03ce68p-23f, 0.0f, 0.0f, 0x1.36af3ap-65f, 0x1.4822a8p-25f, 0x1.26a1bep-23f,
     0x1.b39f8ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b4b7ep-71f,
     0x1.6d4334p-50f, 0x1.d41f18p-93f, 0x1.47ae8p-14f, 0x1.527a9ap-113f, 0.0f,
     0x1.46902ep-120f, 0.0f, 0x1.c47e36p-13f, 0x1.4e94d2p-99f, 0x1.256ff2p-34f,
     0x1.b10b08p-54f, 0x1.623bd4p-29f, 0.0f, 0.0f, 0.0f, 0x1.95c202p-42f,
     0x1.51b446p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.3eba9ep-78f, 0.0f, 0x1.61e476p-98f, 0.0f, 0.0f, 0.0f, 0x1.d6b0b8p-10f,
     0x1.da99ccp-48f, 0.0f, 0.0f, 0x1.fb5ec2p-9f, 0.0f, 0x1.470d76p-94f,
     0x1.1970d4p-102f, 0x1.393422p-3f, 0x1.864d7cp-25f, 0x1.a9a234p-26f,
     0x1.30ccdcp-13f, 0x1.58b582p-104f, 0x1.d35dfep-71f, 0.0f, 0x1.df2ad2p-109f,
     0x1.4e2f32p-62f, 0.0f, 0.0f, 0.0f, 0x1.3b186p-119f, 0.0f, 0.0f, 0x1.cb0de8p-14f,
     0x1.16c616p-8f, 0x1.78262ap-30f, 0.0f, 0x1.c949b8p-10f, 0.0f, 0x1.ce771ap-46f,
     0.0f, 0.0f, 0.0f, 0x1.dbedf8p-71f, 0.0f, 0x1.a49eaep-37f, 0x1.af612ep-45f,
     0x1.11e3d4p-23f, 0x1.4b56e4p-110f, 0x1.aeffd4p-76f, 0x1p0f, 0.0f, 0x1.dfcde4p-4f,
     0.0f, 0.0f, 0x1.d1ae12p-53f, 0x1.39a736p-104f, 0x1.85fc48p-119f, 0x1.3ddb46p-28f,
     0x1.397f4ep-124f, 0x1.7bff3p-14f, 0.0f, 0x1.81cb3ap-69f, 0.0f, 0.0f,
     0x1.099826p-118f, 0.0f, 0.0f, 0x1.ee2c6p-117f, 0x1.4784bp-88f, 0.0f,
     0x1.3f243p-24f, 0x1.54ea0ap-68f, 0x1.49f17p-37f, 0.0f, 0x1.741c98p-76f,
     0x1.9e9d5cp-106f, 0x1.1bd3dcp-26f, 0.0f, 0x1.325b16p-87f, 0x1.4e1294p-63f,
     0x1.1edaeap-55f, 0x1.5e122ap-85f, 0x1.f0c04ep-107f, 0.0f, 0.0f, 0x1.46602p-103f,
     0x1.76771cp-57f, 0x1.c2621ep-42f, 0x1.fbe742p-63f, 0.0f, 0x1.f35dc8p-30f, 0.0f,
     0x1.50bbc8p-95f, 0x1.a723ccp-25f, 0x1.02f616p-6f, 0.0f, 0.0f, 0x1.f44108p-94f,
     0x1.c031dcp-33f, 0.0f, 0x1.f7311ep-85f, 0x1.e5b78cp-34f, 0x1.63394ap-39f,
     0x1.a04652p-100f, 0.0f, 0.0f, 0x1.21fcp-55f, 0.0f, 0.0f, 0x1.78ebdp-70f, 0.0f,
     0x1.3ee678p-85f, 0x1.bdf868p-26f, 0x1.d81508p-4f, 0x1.7b640cp-81f,
     0x1.e7b0b4p-60f, 0x1.538a44p-22f, 0x1.259176p-27f, 0x1.685b72p-104f,
     0x1.3fbe1cp-99f, 0x1.191d4ep-29f, 0x1.0e2046p-47f, 0x1.aa8062p-61f, 0.0f,
     0x1.85c0a8p-107f, 0.0f, 0x1.a6c00ep-42f, 0x1.ae9e3cp-75f, 0x1.9040c2p-6f,
     0x1.047658p-116f, 0x1.ea6612p-66f, 0.0f, 0x1.41d154p-70f, 0x1.7a5ce4p-76f,
     0x1.0ce11p-65f, 0x1.6b8f54p-15f, 0x1.b92552p-2f, 0x1.4d9796p-59f, 0.0f, 0.0f,
     0.0f, 0x1.2d7964p-125f, 0x1.968b36p-24f, 0x1.a51034p-115f, 0x1.dd7da8p-5f,
     0x1.a7597p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3841aep-9f, 0.0f, 0.0f,
     0x1.1a8652p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84271cp-102f,
     0x1.2b61e2p-58f, 0.0f, 0.0f, 0x1.80ac02p-47f, 0x1.564c2ep-112f, 0.0f,
     0x1.5ea1ccp-72f, 0x1.b3827cp-77f, 0.0f, 0x1.3970cap-23f, 0x1.bd9b8ep-109f, 0.0f,
     0.0f, 0x1.fc7aecp-29f, 0x1.5eda7p-5f, 0.0f, 0x1.c4d33p-17f, 0x1.ffd44cp-99f,
     0.0f, 0.0f, 0.0f, 0x1.bd6ccp-34f, 0.0f, 0x1.a269f8p-94f, 0.0f, 0.0f,
     0x1.50c14ap-2f, 0.0f, 0.0f, 0.0f, 0x1.719b52p-32f, 0.0f, 0x1.856a1cp-126f,
     0x1.22e49ap-106f, 0x1.994404p-14f, 0x1.3acd0ap-71f, 0x1.d7fec4p-59f,
     0x1.d3d58ep-74f, 0.0f, 0x1.f5c912p-61f, 0x1.53559p-118f, 0x1.0eaadap-54f,
     0x1.bdc63ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a54d66p-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e2526p-37f, 0x1.0c754cp-89f, 0.0f, 0.0f, 0.0f,
     0x1.c31c1ap-117f, 0.0f, 0x1.bc3aa2p-96f, 0.0f, 0x1.05fc2ap-39f, 0.0f, 0.0f, 0.0f,
     0x1.5c2856p-108f, 0x1.7224f6p-52f, 0.0f, 0x1.c11f7ap-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4ab9eap-82f, 0.0f, 0x1.68aca8p-32f, 0x1.4aaf66p-69f, 0.0f,
     0x1.361a4cp-101f, 0x1.7ec99p-61f, 0x1.1073b2p-59f, 0x1.964516p-59f, 0.0f, 0.0f,
     0.0f, 0x1.f807eap-87f, 0x1.68b2e2p-90f, 0.0f, 0x1.1ab0bep-98f, 0.0f, 0.0f,
     0x1.bcbad2p-87f, 0x1.46b3cap-81f, 0x1.6d8a3ep-21f, 0x1.954f6p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a42fep-64f,
     0x1.7968a2p-120f, 0x1.833b8p-36f, 0.0f, 0.0f, 0x1.5ec524p-6f, 0.0f,
     0x1.9eaf34p-4f, 0.0f, 0x1.a6f8d2p-10f, 0x1.647996p-103f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.7d795p-126f, 0.0f, 0x1.04b0a8p-78f, 0x1.2334c8p-18f, 0.0f,
     0x1.b62eb6p-89f, 0.0f, 0x1.b0715cp-12f, 0x1.2ab1ap-45f, 0.0f, 0.0f, 0.0f,
     0x1.5b48fp-76f, 0.0f, 0x1.0296c8p-119f, 0x1.a719ecp-89f, 0.0f, 0.0f,
     0x1.b80a44p-83f, 0.0f, 0x1.d931f4p-74f, 0.0f, 0x1.be98dcp-102f, 0x1.dbd058p-118f,
     0x1.30a21cp-48f, 0.0f, 0x1.b9770ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31d792p-43f, 0.0f, 0.0f, 0x1.ed5768p-88f, 0.0f, 0x1.0a411cp-70f,
     0x1.25d9bp-13f, 0.0f, 0x1.c58c14p-15f, 0.0f, 0.0f, 0.0f, 0x1.4c2ec6p-89f, 0.0f,
     0.0f, 0x1.6068bep-43f, 0x1.e1e63ap-22f, 0x1.d9ccfap-23f, 0x1.4f0d54p-107f,
     0x1.aeb2e6p-120f, 0x1.bd2bf8p-39f, 0.0f, 0x1.12fddcp-24f, 0.0f, 0x1.b89878p-6f,
     0x1.c39018p-113f, 0.0f, 0.0f, 0x1.26113cp-60f, 0x1.edf012p-67f, 0x1.24d478p-4f,
     0.0f, 0.0f, 0.0f, 0x1.625932p-104f, 0x1.f3a3fcp-42f, 0x1.7c9fdcp-87f,
     0x1.c1f456p-110f, 0.0f, 0x1.40e952p-44f, 0x1.098886p-97f, 0.0f, 0x1.77d4dp-119f,
     0x1.ed20f6p-76f, 0x1.b6985p-38f, 0.0f, 0.0f, 0x1.74c912p-88f, 0x1.21667p-49f,
     0x1.aa7534p-80f, 0.0f, 0x1.53416p-80f, 0x1.4e249cp-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0c068p-103f, 0.0f, 0.0f, 0x1.059e24p-21f, 0.0f,
     0x1.79116ep-91f, 0x1.e6fc64p-7f, 0x1.e6fb96p-25f, 0.0f, 0.0f, 0.0f,
     0x1.f1f2a8p-18f, 0.0f, 0.0f, 0x1.ba63e4p-56f, 0x1.913d9ap-125f, 0.0f, 0.0f, 0.0f,
     0x1.7d5bf4p-75f, 0.0f, 0x1.fdc93ap-21f, 0.0f, 0x1.d9fa06p-77f, 0x1.9ec6ccp-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.696f1p-103f, 0x1.760ddcp-79f,
     0x1.b311aep-18f, 0x1.f391bcp-69f, 0.0f, 0x1.4e96d6p-92f, 0x1.f6214cp-113f,
     0x1.dfa826p-60f, 0x1.139a1cp-50f, 0x1.a4f494p-108f, 0.0f, 0x1.22b3eap-10f, 0.0f,
     0.0f, 0.0f, 0x1.ca99b8p-111f, 0.0f, 0.0f, 0x1.3ffa28p-52f, 0x1.146f9ap-40f, 0.0f,
     0.0f, 0x1.ff1cbp-24f, 0x1.3d2cb2p-88f, 0x1.04b14cp-63f, 0.0f, 0x1.3191b6p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3796f2p-121f, 0x1.278528p-97f, 0.0f,
     0x1.527768p-28f, 0.0f, 0x1.9ea8bap-94f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.e94532p-32f, 0.0f, 0.0f, 0.0f, 0x1.94819cp-103f, 0.0f, 0.0f, 0.0f,
     0x1.22bdbep-82f, 0x1.8cbc82p-22f, 0.0f, 0x1.502c82p-18f, 0.0f, 0x1.4c1922p-100f,
     0x1.e8129p-36f, 0.0f, 0.0f, 0x1.e22852p-48f, 0x1.916eecp-115f, 0.0f, 0.0f,
     0x1.c32c72p-104f, 0.0f, 0.0f, 0x1.268ep-11f, 0.0f, 0x1.a0f78ep-44f, 0.0f,
     0x1.a0501cp-51f, 0x1.706b7p-25f, 0x1.d9c3ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.39ef22p-87f, 0x1.5339b4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea6c3p-106f,
     0.0f, 0.0f, 0x1.e7e058p-92f, 0x1.d5a54cp-38f, 0x1.d2960cp-58f, 0x1.ecf4cp-70f,
     0x1.67a15ap-91f, 0x1.030c8p-36f, 0.0f, 0x1.a5e97ep-5f, 0x1.f7f904p-88f, 0.0f,
     0x1.12c45p-78f, 0x1.f809eep-91f, 0x1.74c706p-57f, 0x1.c61e6ap-109f,
     0x1.21160cp-30f, 0x1.9265bap-45f, 0x1.da9614p-6f, 0.0f, 0x1.0c0d3p-96f,
     0x1.d57296p-90f, 0x1.3d1624p-12f, 0x1.ee4486p-112f, 0.0f, 0.0f, 0x1.a9984ap-11f,
     0x1.ff57aap-105f, 0x1.230546p-72f, 0.0f, 0.0f, 0.0f, 0x1.9bbc74p-19f, 0.0f,
     0x1.c17fdap-126f, 0x1.dd1e5p-12f, 0.0f, 0.0f, 0x1.aadc72p-18f, 0x1.db5b04p-78f,
     0.0f, 0.0f, 0x1.34a538p-9f, 0.0f, 0x1.94c3cap-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76c9fcp-111f, 0x1.9dd502p-7f, 0x1.95824ap-7f, 0.0f, 0x1.5bcc4ap-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.507ec8p-40f, 0x1.49d46ep-104f, 0x1.a327a2p-46f,
     0.0f, 0x1.a2df8ap-79f, 0.0f, 0.0f, 0x1.532a8ap-85f, 0x1.acc0c6p-108f,
     0x1.762bb8p-123f, 0.0f, 0.0f, 0.0f, 0x1.d4e734p-53f, 0.0f, 0x1.32c034p-37f, 0.0f,
     0x1.60f372p-31f, 0.0f, 0x1.09c4dp-45f, 0.0f, 0x1.36582p-63f, 0x1.ea3aa6p-2f,
     0x1.1b465p-45f, 0.0f, 0.0f, 0x1.06b60ep-117f, 0x1.6998p-14f, 0x1.90eafcp-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef389ep-54f, 0x1.2f8b74p-87f, 0x1.30f36p-120f,
     0x1.ac7f1cp-33f, 0x1.27eda2p-61f, 0.0f, 0x1.2be2dcp-3f, 0x1.dda4f2p-62f, 0.0f,
     0x1.e06b06p-36f, 0x1.922336p-40f, 0x1.2cae9cp-67f, 0.0f, 0x1.98f27ap-57f, 0.0f,
     0.0f, 0x1.7e09dap-20f, 0.0f, 0x1.f52856p-45f, 0x1.4c0d72p-81f, 0x1.8623c8p-92f,
     0.0f, 0x1.a66566p-81f, 0.0f, 0x1.cac062p-89f, 0.0f, 0x1.c6c31cp-57f, 0.0f,
     0x1.a4424ap-30f, 0x1.25f4cap-121f, 0x1.613414p-18f, 0.0f, 0x1.fa12a8p-85f,
     0x1.53efc6p-46f, 0.0f, 0x1.f62d6ep-33f, 0x1.d9a5fp-42f, 0.0f, 0x1.3ed992p-68f,
     0.0f, 0x1.990d58p-33f, 0x1.568a9ap-120f, 0.0f, 0x1.2743fap-43f, 0.0f,
     0x1.ac99cp-11f, 0x1.a9cd18p-10f, 0.0f, 0.0f, 0x1.cb91cap-88f, 0.0f,
     0x1.b56dd8p-56f, 0x1.2d3bd4p-12f, 0x1.86248p-75f, 0.0f, 0.0f, 0.0f,
     0x1.5ba922p-67f, 0.0f, 0.0f, 0.0f, 0x1.2e5dc4p-60f, 0x1.22aa4cp-24f, 0.0f, 0.0f,
     0x1.75f148p-64f, 0.0f, 0.0f, 0x1.8a119ap-35f, 0.0f, 0.0f, 0x1.189da4p-111f,
     0x1.370b1p-92f, 0.0f, 0.0f, 0x1.929d72p-6f, 0x1.7c8c68p-73f, 0x1.27228ap-29f,
     0x1.162ce8p-21f, 0.0f, 0x1.5f220cp-107f, 0x1.16092cp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcbd16p-123f, 0x1.bc51acp-32f, 0x1.0a4b8ap-107f, 0.0f, 0.0f,
     0x1.4540b2p-124f, 0.0f, 0x1.c11144p-5f, 0.0f, 0.0f, 0.0f, 0x1.612964p-105f, 0.0f,
     0.0f, 0x1.31f4f8p-74f, 0.0f, 0x1.386ac4p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41daf4p-91f, 0x1.2989e2p-66f, 0.0f, 0x1.10b8c4p-125f, 0.0f, 0x1.2a8b3p-13f,
     0.0f, 0x1.1f76fcp-60f, 0x1.70432p-121f, 0.0f, 0.0f, 0.0f, 0x1.4bf9e2p-19f, 0.0f,
     0.0f, 0.0f, 0x1.7015d2p-122f, 0x1.ff813p-103f, 0x1.815c7ap-88f, 0.0f, 0.0f,
     0x1.d828dcp-10f, 0.0f, 0x1.475868p-32f, 0.0f, 0x1.22c58ep-43f, 0x1.85d6e4p-109f,
     0x1.31993ap-29f, 0x1.2faad8p-86f, 0x1.73aa0cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8a922p-33f, 0x1.9f1022p-126f, 0.0f, 0.0f, 0x1.cef486p-38f, 0x1.65d048p-87f,
     0.0f, 0.0f, 0x1.2cced2p-71f, 0x1.a0ebp-30f, 0x1.1eb138p-82f, 0x1.a41d2ap-99f,
     0.0f, 0.0f, 0x1.ca13ap-64f, 0x1.e7bd2ap-103f, 0x1.e55236p-73f, 0x1.5b7e4ap-45f,
     0x1.51db0ap-74f, 0.0f, 0x1.4a4ad4p-96f, 0.0f, 0x1.6b0954p-61f, 0x1.1b46f4p-18f,
     0.0f, 0.0f, 0.0f, 0x1.049282p-69f, 0.0f, 0.0f, 0.0f, 0x1.8e6d6ap-81f, 0.0f,
     0x1.d484f2p-8f, 0.0f, 0x1.9c0f02p-102f, 0.0f, 0.0f, 0.0f, 0x1.b2377ap-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.81d85p-46f, 0x1.61bf8p-32f, 0x1.1e3654p-25f,
     0x1.637a38p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2d0fp-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.278aeap-4f, 0.0f, 0x1.299a96p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80b026p-106f, 0.0f, 0.0f, 0x1.dc3714p-86f, 0.0f, 0x1.a9d526p-70f, 0.0f, 0.0f,
     0x1.bc1ab8p-24f, 0.0f, 0x1.a98e7ap-77f, 0.0f, 0.0f, 0.0f, 0x1.89fbc8p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc0b84p-71f, 0x1.c83f68p-78f, 0.0f, 0x1.036cf8p-63f,
     0x1.2784dp-18f, 0x1.5210eep-49f, 0x1.65ea52p-106f, 0x1.aa798ap-91f, 0.0f,
     0x1.228ae4p-63f, 0.0f, 0x1.409b4cp-64f, 0x1.7241f4p-13f, 0.0f, 0x1.38ed1ep-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eea6bcp-83f,
     0x1.10ca26p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d69d8p-108f, 0x1.d13ee8p-2f, 0.0f,
     0x1.d91e4p-5f, 0.0f, 0.0f, 0.0f, 0x1.04ef9ep-50f, 0.0f, 0x1.9ab8b8p-95f, 0.0f,
     0x1.d8fc2ap-6f, 0.0f, 0x1.dd4cd6p-95f, 0.0f, 0x1.c53cc6p-102f, 0x1.f2c6c8p-37f,
     0.0f, 0.0f, 0x1.3d8b96p-109f, 0x1.d691a8p-22f, 0x1.44c032p-17f, 0.0f, 0.0f,
     0x1.fb36c8p-120f, 0.0f, 0.0f, 0x1.15c10ep-55f, 0.0f, 0.0f, 0x1.7b458ap-100f,
     0.0f, 0x1.7a424p-124f, 0x1.f212e4p-28f, 0.0f, 0.0f, 0x1.ac710ap-105f, 0.0f, 0.0f,
     0.0f, 0x1.35af8cp-51f, 0x1.9e682ep-17f, 0x1.ad23e6p-68f, 0.0f, 0.0f,
     0x1.fdd8cp-24f, 0.0f, 0x1.cc2df4p-84f, 0.0f, 0x1.1d7c1ap-94f, 0.0f,
     0x1.669416p-114f, 0.0f, 0x1.2f4ba6p-23f, 0x1.b61df4p-78f, 0x1.452f7ep-112f, 0.0f,
     0x1.d536ecp-65f, 0x1.3ab51ep-7f, 0.0f, 0x1.f94faap-116f, 0x1.f3959cp-6f, 0.0f,
     0.0f, 0x1.76683p-30f, 0x1.2dd93p-23f, 0x1.bee7c8p-81f, 0x1.73ce86p-48f, 0.0f,
     0.0f, 0x1.d27aaep-37f, 0.0f, 0.0f, 0x1.e22746p-124f, 0x1.9d881p-93f,
     0x1.8a1d5p-33f, 0x1.e0e744p-15f, 0x1.62404ap-63f, 0.0f, 0x1.1020a6p-57f, 0.0f,
     0.0f, 0x1.7cd03ep-6f, 0x1.e18172p-34f, 0.0f, 0x1.c1a5a6p-73f, 0.0f, 0.0f, 0.0f,
     0x1.4cf604p-124f, 0x1.5ad55ap-90f, 0.0f, 0x1.7a549p-47f, 0x1.1cf55ep-69f, 0.0f,
     0x1.55911ep-114f, 0.0f, 0x1.c635f2p-27f, 0x1.7e16a4p-111f, 0.0f,
     0x1.195692p-109f, 0.0f, 0x1.5768e8p-67f, 0x1.d78316p-121f, 0x1.05a76ep-13f, 0.0f,
     0x1.b8650cp-77f, 0x1.d85194p-49f, 0x1.2c54dep-28f, 0x1.a593dcp-39f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c38cc4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08f1d8p-48f,
     0.0f, 0x1.93ca0ep-27f, 0x1.561298p-82f, 0x1.e26a8cp-60f, 0x1.8d4f92p-39f,
     0x1.b24b32p-111f, 0.0f, 0.0f, 0x1.a0c558p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.821132p-81f, 0.0f, 0x1.3c49e8p-31f, 0.0f, 0x1.9f00cap-78f, 0x1.94bc5p-38f,
     0x1.73580ap-3f, 0x1.6ad0ep-50f, 0.0f, 0x1.c7ab3p-40f, 0.0f, 0.0f,
     0x1.14c068p-84f, 0.0f, 0x1.985a5cp-7f, 0.0f, 0x1.3f0e96p-47f, 0x1.d3c57p-94f,
     0.0f, 0x1.f2494ap-28f, 0x1.7ec724p-99f, 0x1.a33e74p-117f, 0.0f, 0.0f,
     0x1.2a6c8ap-45f, 0x1.d81cecp-85f, 0x1.d56d64p-119f, 0.0f, 0x1.f6225ep-83f, 0.0f,
     0.0f, 0.0f, 0x1.3d5738p-106f, 0x1.28f642p-22f, 0x1.d472e4p-74f, 0x1.b490dep-122f,
     0x1.384d98p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.140e72p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a28baap-29f, 0.0f, 0.0f, 0x1.8bef3p-32f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fd0dep-115f, 0.0f, 0x1.b9d594p-107f, 0.0f, 0.0f,
     0.0f, 0x1.4a963ep-10f, 0.0f, 0x1.f4b23cp-32f, 0x1.abaaap-49f, 0x1.ff7b14p-56f,
     0.0f, 0.0f, 0x1.54023ap-16f, 0x1.ab862p-107f, 0.0f, 0.0f, 0.0f, 0x1.a35606p-123f,
     0x1.6dae76p-37f, 0x1.ce13e8p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.483faap-87f,
     0x1.bb436p-102f, 0.0f, 0x1.4bfefcp-97f, 0x1.d0de6p-30f, 0x1.29b3bp-94f, 0.0f,
     0x1.d5fe4cp-124f, 0x1.3827ecp-15f, 0x1.7ad6a4p-109f, 0.0f, 0.0f, 0x1.322056p-36f,
     0x1.a3612cp-105f, 0.0f, 0.0f, 0x1.3689ecp-72f, 0.0f, 0x1.ac99e2p-38f,
     0x1.5a3a64p-37f, 0.0f, 0.0f, 0.0f, 0x1.2e2fa8p-108f, 0x1.c27c08p-67f,
     0x1.32bfe8p-58f, 0.0f, 0x1.a3cddep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6e2fep-61f, 0x1.5f7126p-80f, 0.0f, 0x1.a37f9p-112f, 0x1.b867ap-62f, 0.0f,
     0x1.417108p-95f, 0x1.6c7d36p-66f, 0x1.121f3ep-77f, 0x1.3c6028p-113f,
     0x1.36b958p-105f, 0.0f, 0x1.e38382p-67f, 0.0f, 0.0f, 0x1.31b2b8p-30f,
     0x1.a49f68p-18f, 0.0f, 0x1.92a1bep-93f, 0x1.5c450cp-38f, 0.0f, 0.0f,
     0x1.c88194p-56f, 0x1.c91956p-61f, 0.0f, 0.0f, 0x1.a8f8c8p-53f, 0x1.c44d46p-98f,
     0.0f, 0.0f, 0x1.fb48c6p-67f, 0.0f, 0x1.7dba7p-103f, 0x1.fd18f6p-49f,
     0x1.ca79e2p-9f, 0x1.4f1ap-49f, 0x1.e1119cp-43f, 0x1.c45ef6p-96f, 0.0f,
     0x1.d159cp-68f, 0x1.f2f40cp-25f, 0x1.a96962p-93f, 0x1.84a03ap-21f,
     0x1.41196p-88f, 0x1.23dfd8p-28f, 0x1.727158p-100f, 0x1.14c35p-76f,
     0x1.02da96p-21f, 0x1.d76b34p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb61b6p-69f,
     0x1.889e3ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf8dfcp-12f,
     0x1.392dp-35f, 0x1.4bbb56p-55f, 0x1.a85adap-70f, 0.0f, 0.0f, 0.0f,
     0x1.087d9cp-90f, 0.0f, 0x1.a903ap-77f, 0x1.6d9dd4p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.db901ep-57f, 0x1.e5ea3cp-5f, 0.0f, 0.0f, 0x1.5fc508p-50f,
     0x1.658bc2p-117f, 0x1.ff10acp-93f, 0x1.b97a1cp-125f, 0x1.6121ep-22f,
     0x1.e94356p-46f, 0x1.721378p-109f, 0x1.e505a2p-53f, 0.0f, 0.0f, 0x1.c12038p-18f,
     0.0f, 0x1.baef42p-52f, 0x1.914ff8p-125f, 0x1.f2b3e4p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ab3ff2p-88f, 0.0f, 0.0f, 0x1.db84f8p-32f, 0.0f, 0x1.987176p-90f, 0.0f,
     0.0f, 0x1.051f1p-124f, 0x1.5ea19cp-11f, 0.0f, 0.0f, 0x1.6b040cp-73f, 0.0f,
     0x1.d16a08p-36f, 0x1.d43092p-31f, 0x1.3f4c4cp-31f, 0.0f, 0.0f, 0x1.7455cap-59f,
     0x1.e15ad6p-62f, 0x1.560554p-67f, 0x1.1e7eacp-28f, 0.0f, 0.0f, 0x1.7aff96p-66f,
     0x1.1d6692p-57f, 0.0f, 0x1.6a554ap-108f, 0.0f, 0x1.a52d54p-81f, 0.0f, 0.0f,
     0x1.e23984p-45f, 0.0f, 0x1.a9e87ep-98f, 0.0f, 0x1.10805ep-96f, 0.0f,
     0x1.de70eep-115f, 0x1.f1d012p-121f, 0.0f, 0x1.6334bp-113f, 0x1.750a7p-9f,
     0x1.0f84c2p-126f, 0.0f, 0x1.bbea6ap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.acab1ap-54f, 0.0f, 0x1.3c0e18p-90f, 0.0f, 0x1.f876acp-37f, 0.0f, 0.0f,
     0x1.024c8ep-59f, 0x1.e9d33p-115f, 0.0f, 0x1.2564bap-19f, 0x1.a3f958p-63f, 0.0f,
     0.0f, 0x1.582fdcp-110f, 0x1.dfa336p-63f, 0x1.8bdc16p-59f, 0x1.06393p-63f,
     0x1.4519b6p-20f, 0.0f, 0x1.4e353ap-97f, 0.0f, 0x1.08022cp-67f, 0x1.e54174p-33f,
     0x1.71b25ep-119f, 0.0f, 0x1.46aabap-105f, 0x1.1eeb5p-8f, 0.0f, 0.0f, 0.0f,
     0x1.287da2p-56f, 0x1.2d10ccp-95f, 0.0f, 0x1.135406p-108f, 0.0f, 0x1.47bf9ep-72f,
     0.0f, 0.0f, 0x1.fde9a4p-12f, 0.0f, 0x1.ad5368p-34f, 0.0f, 0.0f, 0x1.5742fap-101f,
     0.0f, 0x1.9fd036p-110f, 0.0f, 0.0f, 0.0f, 0x1.484b8ep-10f, 0.0f, 0.0f, 0.0f,
     0x1.3cc714p-63f, 0x1.39e076p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f580b8p-10f, 0.0f, 0x1.181e34p-101f, 0x1.b4bd4ap-119f, 0x1.fffa62p-29f,
     0x1.654af6p-48f, 0x1.7aadb8p-18f, 0x1.d770aep-63f, 0x1.648966p-11f, 0.0f,
     0x1.b2bdb4p-10f, 0.0f, 0x1.37d1dap-6f, 0x1.54c388p-61f, 0.0f, 0.0f,
     0x1.95daa6p-91f, 0x1.c839b8p-113f, 0x1.bff85cp-51f, 0x1.69278ep-64f, 0.0f,
     0x1.143fbep-116f, 0x1.4de968p-91f, 0x1.a22d58p-64f, 0.0f, 0.0f, 0x1.0002dp-112f,
     0x1.cd2128p-97f, 0x1.bd2c48p-13f, 0x1.c9094p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.c5357ep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15be32p-32f, 0x1.2e7b28p-32f,
     0x1.135b2cp-102f, 0.0f, 0.0f, 0x1.f47fd6p-92f, 0x1.828ba2p-26f, 0.0f, 0.0f, 0.0f,
     0x1.d8f6e4p-68f, 0.0f, 0.0f, 0x1.c8a932p-108f, 0x1.aa3714p-125f, 0.0f, 0.0f,
     0x1.393878p-77f, 0x1.98936ap-34f, 0x1.88ddb8p-33f, 0.0f, 0.0f, 0x1.f474dap-100f,
     0x1.bbf194p-1f, 0.0f, 0.0f, 0.0f, 0x1.d95668p-34f, 0.0f, 0.0f, 0.0f,
     0x1.0bf1bap-102f, 0x1.8d16fap-101f, 0x1.045d88p-5f, 0.0f, 0x1.15cf16p-36f,
     0x1.3ce8aep-116f, 0.0f, 0x1.87d4c2p-115f, 0.0f, 0x1.d3ae8p-62f, 0.0f,
     0x1.3373e2p-65f, 0.0f, 0x1.f8bad8p-79f, 0.0f, 0x1.c6eb0cp-82f, 0x1.579768p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7010ap-29f, 0x1.dc69ep-14f,
     0x1.9838ep-29f, 0x1.f0e3dap-15f, 0x1.11ae92p-3f, 0.0f, 0x1.5cbddap-75f, 0.0f,
     0x1.32bd2cp-17f, 0.0f, 0x1.f9fedcp-29f, 0x1.70734ep-122f, 0.0f, 0x1.48cbeap-74f,
     0x1.2f2846p-75f, 0x1.e97b8p-50f, 0.0f, 0x1.4568c2p-121f, 0.0f, 0x1.6b39b4p-6f,
     0.0f, 0.0f, 0x1.f76312p-64f, 0x1.a8159cp-101f, 0x1.7d2c1ep-15f, 0x1.171362p-64f,
     0.0f, 0.0f, 0x1.f69e8p-55f, 0x1.51cd86p-108f, 0x1.a4d28ep-42f, 0.0f,
     0x1.6b836cp-124f, 0.0f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_remainderf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_remainderf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_remainderf1_purecfma bench acc %a\n", global_bench_acc);
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
