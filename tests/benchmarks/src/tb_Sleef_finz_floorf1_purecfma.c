/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floorf1_purecfma.c --function \
 *     Sleef_finz_floorf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.81e2a6p-76f, 0.0f, 0x1.e6d17ep-60f, 0x1.93f3c6p-68f, 0x1.d0e78ap-44f, 0.0f,
     0x1.4caaeap-60f, 0.0f, 0x1.b80f32p-15f, 0.0f, 0.0f, 0x1.4e1446p-28f, 0.0f,
     0x1.65d90ep-119f, 0x1.131518p-110f, 0x1.c8ada6p-99f, 0x1.306aap-87f,
     0x1.ee3f1ap-5f, 0.0f, 0x1.8e8888p-38f, 0x1.b3c6f6p-119f, 0x1.01b35p-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35765cp-95f, 0.0f, 0.0f, 0x1.60b374p-121f,
     0x1.45df68p-19f, 0x1.e4cbdep-24f, 0x1.230276p-107f, 0x1.91aefcp-105f, 0.0f,
     0x1.cef4eep-33f, 0.0f, 0x1p0f, 0.0f, 0x1.8a878ep-46f, 0x1.c419cap-115f,
     0x1.de21f8p-69f, 0x1.432858p-38f, 0x1.05f386p-108f, 0x1.dd8ccep-38f, 0.0f,
     0x1.5a0784p-6f, 0x1.0dc55p-118f, 0.0f, 0.0f, 0x1.11b076p-14f, 0.0f,
     0x1.664ddap-119f, 0.0f, 0x1.7427bap-60f, 0x1.1279c2p-19f, 0x1.7e35a4p-7f,
     0x1.be0e5ep-89f, 0x1.73311ep-64f, 0x1.f400a2p-64f, 0x1.734b68p-57f, 0.0f,
     0x1.2dd84ap-70f, 0x1.c22bp-71f, 0x1.64705cp-31f, 0.0f, 0x1.836b2ap-66f,
     0x1.7362d8p-83f, 0.0f, 0x1.624572p-98f, 0.0f, 0.0f, 0x1.3cee92p-57f,
     0x1.d70708p-23f, 0.0f, 0.0f, 0.0f, 0x1.baa01p-83f, 0.0f, 0x1.9eac6ep-48f, 0.0f,
     0x1.1df0acp-84f, 0.0f, 0.0f, 0.0f, 0x1.7d2dep-98f, 0.0f, 0.0f, 0x1.5afa14p-112f,
     0x1.ba9298p-67f, 0x1.41ba14p-41f, 0x1.66db6p-60f, 0x1.e5a81ap-95f,
     0x1.e8837ep-51f, 0.0f, 0.0f, 0x1.5c907ap-108f, 0.0f, 0x1.721cb2p-43f, 0.0f, 0.0f,
     0x1.9df57p-114f, 0x1.1666acp-6f, 0x1.3adb06p-31f, 0x1.8bf51ep-11f,
     0x1.57b646p-61f, 0.0f, 0.0f, 0x1.9faf76p-96f, 0.0f, 0.0f, 0x1.3a6c78p-74f,
     0x1.de1056p-68f, 0x1.b00bf6p-20f, 0.0f, 0x1.ad913ap-124f, 0.0f, 0x1.8ed5aep-114f,
     0.0f, 0x1.c24f52p-99f, 0x1.e2e60ap-54f, 0x1.666572p-92f, 0.0f, 0x1.d986b2p-95f,
     0x1.600f72p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26a34p-3f, 0x1.451f52p-95f,
     0x1.37fdfp-81f, 0.0f, 0x1.95f1f6p-119f, 0.0f, 0.0f, 0x1.2f3cf8p-67f, 0.0f,
     0x1.94295ep-59f, 0x1.5a43p-111f, 0.0f, 0x1.c869c4p-7f, 0x1.99e94ep-19f, 0.0f,
     0.0f, 0.0f, 0x1.c3c7a4p-106f, 0.0f, 0x1.7bd516p-50f, 0x1.68c07ep-34f,
     0x1.80eb7cp-26f, 0x1.132098p-23f, 0.0f, 0x1.b05362p-90f, 0x1.ff7fap-34f, 0.0f,
     0x1.55c388p-26f, 0x1.e98f8p-71f, 0.0f, 0.0f, 0x1.c26d88p-46f, 0x1.71c74p-43f,
     0x1.25e5e4p-58f, 0.0f, 0.0f, 0x1.e8df66p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e3df8p-109f, 0.0f, 0.0f, 0x1.6f4ccp-67f, 0x1.f6a89cp-93f,
     0x1.ee0468p-29f, 0x1.3e6538p-33f, 0.0f, 0.0f, 0x1.98de3p-87f, 0x1.8e27cep-24f,
     0.0f, 0x1.65fb44p-83f, 0x1.ab6ea2p-59f, 0x1.ae5034p-96f, 0.0f, 0.0f,
     0x1.70066p-28f, 0.0f, 0.0f, 0.0f, 0x1.67628ap-66f, 0x1.0d8e76p-102f,
     0x1.b7253p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d39b12p-38f, 0.0f,
     0x1.275cc6p-85f, 0.0f, 0.0f, 0x1.01e05p-46f, 0.0f, 0.0f, 0.0f, 0x1.002a9cp-19f,
     0.0f, 0x1.e5bd46p-51f, 0x1.323728p-68f, 0.0f, 0.0f, 0x1.ac947ap-94f, 0.0f,
     0x1.fd9fcep-15f, 0.0f, 0x1.0f000ap-12f, 0.0f, 0.0f, 0x1.b3a69ep-45f,
     0x1.de4e1p-116f, 0.0f, 0.0f, 0x1.7d24cap-89f, 0x1.2b0b84p-77f, 0x1.d5008p-115f,
     0.0f, 0.0f, 0x1.dcf3acp-1f, 0x1.84dd66p-64f, 0.0f, 0x1.78d646p-25f,
     0x1.748646p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b1b74p-100f,
     0x1.6ec4ep-113f, 0.0f, 0x1.2510a6p-72f, 0.0f, 0.0f, 0.0f, 0x1.6dbc34p-98f,
     0x1.1972fcp-91f, 0.0f, 0x1.3df9c2p-5f, 0.0f, 0.0f, 0x1.d1a722p-12f, 0.0f,
     0x1.6d5888p-46f, 0.0f, 0.0f, 0x1.1f95bcp-86f, 0x1.7bcd5ep-1f, 0x1.2e638ap-10f,
     0.0f, 0x1.44a66ep-14f, 0.0f, 0.0f, 0x1.6d4f76p-31f, 0.0f, 0.0f, 0x1.7b433cp-54f,
     0x1.8a6278p-116f, 0x1.29d1a4p-8f, 0x1.6e127p-114f, 0.0f, 0x1.0beb2cp-101f,
     0x1.19505cp-41f, 0.0f, 0x1.ad33bcp-48f, 0.0f, 0.0f, 0x1.010428p-120f, 0.0f,
     0x1.e00b4p-19f, 0.0f, 0x1.183976p-35f, 0.0f, 0x1.289ac6p-10f, 0x1.6417cap-81f,
     0.0f, 0x1.f20d14p-108f, 0x1.7fefbap-69f, 0x1.33d06ep-68f, 0x1.8fc1b2p-103f, 0.0f,
     0.0f, 0x1.fc5ab4p-92f, 0x1.f37d98p-79f, 0x1.493b6p-18f, 0.0f, 0x1.60673ap-101f,
     0.0f, 0x1.d72968p-106f, 0x1.aae3bap-91f, 0.0f, 0.0f, 0x1.bd178cp-20f, 0.0f,
     0x1.d987dep-121f, 0x1.d8de7cp-5f, 0x1.431f68p-5f, 0x1.0df2b8p-38f, 0.0f,
     0x1.06a1aap-54f, 0x1.22915p-52f, 0x1.6fd80ap-80f, 0x1.006194p-2f,
     0x1.db262ap-28f, 0x1.31c84p-22f, 0.0f, 0x1.b0e23cp-25f, 0.0f, 0x1.7299e8p-51f,
     0.0f, 0x1.5d5dd8p-47f, 0x1.c3f1f8p-119f, 0.0f, 0x1.06323ap-113f, 0x1.d39946p-99f,
     0.0f, 0x1.332ad2p-45f, 0.0f, 0.0f, 0x1.71790ep-58f, 0x1.7273fep-62f, 0.0f,
     0x1.c57004p-68f, 0.0f, 0.0f, 0x1.42a54ep-10f, 0x1.5f26f8p-96f, 0.0f,
     0x1.a3e83ap-3f, 0x1.5bf0cp-22f, 0.0f, 0x1.e5857ep-100f, 0x1.1f66c8p-121f, 0.0f,
     0.0f, 0.0f, 0x1.ca302p-53f, 0.0f, 0x1.6b296ap-46f, 0x1.46569ep-62f,
     0x1.cb9aecp-87f, 0x1.fb671ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76af96p-114f,
     0.0f, 0.0f, 0x1.ea618ep-13f, 0x1.eae92p-112f, 0x1.32289cp-16f, 0.0f, 0.0f, 0.0f,
     0x1.26d906p-100f, 0x1.7529e6p-98f, 0.0f, 0x1.79a1b4p-68f, 0.0f, 0x1.d4a388p-27f,
     0.0f, 0x1.49b748p-19f, 0x1.71a29ap-29f, 0x1.537e46p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8b94p-37f, 0.0f, 0x1.4cdb78p-1f, 0x1.c11c44p-21f, 0.0f, 0x1.394f5cp-125f,
     0.0f, 0x1.08cc64p-30f, 0x1.9e1636p-124f, 0x1.8829fap-21f, 0x1.36432ep-105f,
     0x1.7aaed6p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b139eap-98f,
     0x1.87548ap-5f, 0.0f, 0.0f, 0x1.89bafep-51f, 0.0f, 0x1.34bf7ep-67f, 0.0f, 0.0f,
     0.0f, 0x1.2f2392p-91f, 0.0f, 0.0f, 0.0f, 0x1.1dae4cp-107f, 0x1.610334p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56ceeap-49f, 0.0f,
     0x1.4d7e6p-102f, 0x1.7a0294p-6f, 0.0f, 0x1.2722ep-117f, 0x1.59c6f8p-63f, 0.0f,
     0x1.99a0e6p-92f, 0.0f, 0.0f, 0x1.cbd228p-2f, 0x1.b180e8p-71f, 0x1.d606ep-18f,
     0.0f, 0.0f, 0.0f, 0x1.29ba2ep-76f, 0.0f, 0.0f, 0.0f, 0x1.0ecb94p-94f,
     0x1.683be4p-22f, 0x1.7e5408p-68f, 0x1.6a2af6p-124f, 0.0f, 0x1.17479cp-101f,
     0x1.b6796ep-94f, 0x1.8fa596p-115f, 0.0f, 0x1.1fe246p-110f, 0x1.b76ae2p-108f,
     0x1.529904p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c34a7ep-61f, 0x1.9f08a4p-29f,
     0x1.dc9cbp-116f, 0x1.bc8b84p-118f, 0.0f, 0.0f, 0x1.d7dee6p-27f, 0x1.a7c6a6p-109f,
     0.0f, 0x1.36a646p-29f, 0x1.cb217p-32f, 0x1.97ec38p-28f, 0x1.6ac1eap-81f, 0.0f,
     0x1.2e3e02p-13f, 0.0f, 0x1.f31522p-49f, 0.0f, 0x1.a40eap-57f, 0x1.a6cd2cp-51f,
     0x1.b060d4p-61f, 0.0f, 0.0f, 0.0f, 0x1.a8ae54p-89f, 0.0f, 0.0f, 0.0f,
     0x1.71e9f8p-8f, 0x1.c9fdfep-17f, 0x1.7b2632p-91f, 0.0f, 0x1.e5cebp-52f, 0.0f,
     0.0f, 0.0f, 0x1.1a99aep-101f, 0.0f, 0x1.dbf51cp-52f, 0.0f, 0x1.30c5f2p-93f,
     0x1.83e15ap-13f, 0x1.eedf32p-89f, 0.0f, 0x1.059878p-40f, 0.0f, 0x1.554cbep-41f,
     0x1.298c3ep-47f, 0.0f, 0.0f, 0x1.50120ap-1f, 0x1.2048fcp-100f, 0.0f, 0.0f, 0.0f,
     0x1.5ef942p-85f, 0x1.8c6a2p-110f, 0x1.cf664ap-96f, 0.0f, 0x1.8e3b9p-108f,
     0x1.dd9bdp-100f, 0x1.815a22p-79f, 0x1.e3f808p-86f, 0.0f, 0.0f, 0x1.8df4bp-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.41de0ap-67f, 0x1.f0b124p-114f, 0x1.59332ep-63f,
     0x1.89f3bp-116f, 0x1.437432p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbd08ap-89f, 0.0f,
     0x1p0f, 0.0f, 0x1.f19eaap-88f, 0x1.07c1b8p-75f, 0x1.e86bc4p-69f, 0x1.25d6c6p-4f,
     0x1.731dd6p-52f, 0x1.4649e2p-73f, 0.0f, 0x1.d591cep-115f, 0.0f, 0.0f,
     0x1.e0887p-50f, 0x1.55defap-112f, 0x1.4d3042p-64f, 0.0f, 0x1.37127ep-19f, 0.0f,
     0.0f, 0.0f, 0x1.b89c3p-112f, 0.0f, 0x1.a7e95ap-95f, 0x1.72ce28p-78f,
     0x1.0d6b6ap-77f, 0x1.0c18dap-73f, 0x1.b66752p-46f, 0x1.82afa6p-61f,
     0x1.ffb60ep-85f, 0.0f, 0x1.f1d28ap-43f, 0x1.fbf24p-51f, 0.0f, 0.0f,
     0x1.3c19f8p-85f, 0x1.ded4dep-70f, 0.0f, 0.0f, 0x1.ff589ep-55f, 0.0f,
     0x1.944956p-93f, 0x1.db1614p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.123e9ap-120f,
     0x1.d22d1ep-60f, 0.0f, 0x1.f08dap-78f, 0x1.e3aebep-51f, 0x1.c98bd2p-92f, 0.0f,
     0x1.98ab5p-25f, 0.0f, 0x1.24fa7cp-26f, 0x1.dff484p-56f, 0x1.3c5cap-62f, 0.0f,
     0x1.c0a336p-20f, 0x1.941596p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1117aep-25f, 0.0f,
     0.0f, 0x1.6779f8p-47f, 0.0f, 0x1.4607cp-5f, 0.0f, 0.0f, 0x1.2c54acp-46f,
     0x1.4ba76cp-78f, 0.0f, 0.0f, 0x1.aa2de6p-82f, 0x1.b70bacp-69f, 0.0f, 0.0f, 0.0f,
     0x1.44f888p-80f, 0x1.33d1a2p-17f, 0x1.fe6a5ep-7f, 0x1.91d9c6p-126f,
     0x1.bebae6p-115f, 0.0f, 0.0f, 0x1.839cbcp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b70eaep-104f, 0.0f, 0.0f, 0x1.889a2p-120f, 0.0f, 0.0f, 0x1.d3f51p-98f, 0.0f,
     0x1.dfd52ap-107f, 0.0f, 0.0f, 0.0f, 0x1.b03f72p-95f, 0.0f, 0.0f, 0x1.41a6cap-70f,
     0x1.0232bep-79f, 0.0f, 0.0f, 0x1.aa09cep-58f, 0.0f, 0.0f, 0x1.e3509cp-117f,
     0x1.f51264p-8f, 0x1.35c2aap-61f, 0x1.f4f904p-70f, 0.0f, 0x1.000158p-97f,
     0x1.8be16p-86f, 0.0f, 0x1.d5b174p-111f, 0x1.cbcdc4p-2f, 0x1.473a18p-83f,
     0x1.b972c6p-65f, 0.0f, 0.0f, 0x1.6b275p-115f, 0x1.c8c77ep-6f, 0x1.41a172p-31f,
     0.0f, 0.0f, 0x1.224726p-65f, 0x1.6dc254p-113f, 0x1.953b76p-62f, 0.0f,
     0x1.4ce6a4p-87f, 0x1.9b9c7cp-28f, 0.0f, 0x1.8f95f4p-99f, 0x1.43d7cap-15f,
     0x1.098f1cp-40f, 0x1.421828p-61f, 0x1.9bc136p-47f, 0.0f, 0.0f, 0x1.64a18p-61f,
     0.0f, 0x1.09a48cp-50f, 0.0f, 0.0f, 0.0f, 0x1.f46fa6p-5f, 0x1.e0f396p-73f, 0.0f,
     0.0f, 0x1.6a08bap-14f, 0.0f, 0x1.05e9c8p-120f, 0x1.51c176p-82f, 0.0f, 0.0f,
     0x1.b0a194p-36f, 0.0f, 0.0f, 0x1.21ed82p-117f, 0.0f, 0x1.cfaa3ep-5f, 0.0f,
     0x1.b07544p-61f, 0x1.d029b2p-93f, 0x1.6c70a4p-45f, 0x1.dfd67ep-67f,
     0x1.bd1512p-76f, 0.0f, 0.0f, 0x1.7ce83ep-1f, 0.0f, 0x1.dac7fap-47f,
     0x1.0bf898p-33f, 0x1.da9e88p-121f, 0x1.3a95d6p-2f, 0.0f, 0x1.695848p-90f,
     0x1.5e4cb6p-97f, 0.0f, 0.0f, 0.0f, 0x1.a9eceap-59f, 0x1.2dab6ap-33f, 0.0f, 0.0f,
     0.0f, 0x1.8acbf4p-126f, 0.0f, 0x1.a25d44p-77f, 0.0f, 0.0f, 0x1.dd8134p-44f, 0.0f,
     0x1.034bfep-62f, 0.0f, 0.0f, 0x1.702e7ap-57f, 0.0f, 0.0f, 0.0f, 0x1.dd1678p-72f,
     0x1.669ebap-51f, 0.0f, 0x1.11131ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d80828p-76f, 0x1.f273dp-62f, 0x1.460796p-33f, 0x1.e6fd34p-49f,
     0x1.fd8a22p-105f, 0x1.9947ccp-93f, 0x1.0880a4p-104f, 0.0f, 0.0f, 0x1.17f512p-17f,
     0x1.00854cp-111f, 0x1.775b16p-114f, 0x1.3b19fcp-79f, 0x1.449d16p-31f,
     0x1.a235a8p-64f, 0.0f, 0.0f, 0x1.f106fp-28f, 0x1.aeacc2p-88f, 0.0f,
     0x1.60a0c8p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.557852p-25f, 0x1.4ec994p-17f,
     0.0f, 0.0f, 0x1.2bd588p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19ddep-126f, 0.0f,
     0x1.936994p-96f, 0.0f, 0x1p0f, 0x1.b71dap-111f, 0x1.82cfep-123f, 0x1.f06d1ap-75f,
     0.0f, 0x1.40c2ap-15f, 0.0f, 0.0f, 0x1.6f7cc4p-43f, 0.0f, 0x1.d32144p-32f,
     0x1.fe48a6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3137e6p-111f,
     0x1.30e4f8p-105f, 0x1.52205ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2368p-114f,
     0x1.81c0b8p-49f, 0.0f, 0x1.4cd428p-12f, 0.0f, 0x1.b964fp-20f, 0.0f,
     0x1.da8176p-46f, 0.0f, 0x1.6a172ep-81f, 0x1.84a8f6p-94f, 0x1.8ff8fep-54f,
     0x1.07440cp-122f, 0x1.35ccd6p-109f, 0.0f, 0x1.57794cp-59f, 0x1.61e53cp-90f,
     0x1.26e9fap-20f, 0.0f, 0.0f, 0x1.98a216p-6f, 0.0f, 0x1.96823ap-46f,
     0x1.de2948p-2f, 0.0f, 0.0f, 0.0f, 0x1.7060fcp-121f, 0x1.ac0caep-111f, 0.0f, 0.0f,
     0x1.e783aep-52f, 0x1.b72034p-86f, 0.0f, 0.0f, 0x1.c461cp-64f, 0.0f,
     0x1.28bcbcp-70f, 0.0f, 0.0f, 0.0f, 0x1.8f5aeap-124f, 0x1.c362f2p-64f,
     0x1.a7da62p-100f, 0.0f, 0x1.c7d75ap-59f, 0x1.2277c2p-115f, 0x1.e3f672p-86f, 0.0f,
     0x1.801c44p-86f, 0.0f, 0.0f, 0x1.f89ee2p-21f, 0.0f, 0x1.8ec956p-61f, 0.0f, 0.0f,
     0x1.ba3062p-9f, 0x1.c38f6p-30f, 0x1.962952p-100f, 0.0f, 0.0f, 0x1.0b780cp-70f,
     0.0f, 0.0f, 0x1.6ca786p-75f, 0x1.7d7cacp-34f, 0x1.9e3154p-92f, 0x1.bb50aap-5f,
     0.0f, 0.0f, 0.0f, 0x1.2dfda2p-56f, 0x1.817cbcp-1f, 0.0f, 0x1.1e7e9p-59f,
     0x1.88ea46p-94f, 0.0f, 0x1.b998p-22f, 0x1.ee38bep-49f, 0.0f, 0.0f,
     0x1.fd1e24p-82f, 0.0f, 0x1.6853cap-109f, 0x1.3c2922p-105f, 0x1.9182fep-23f, 0.0f,
     0x1.7e90dp-82f, 0.0f, 0x1.de3e66p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8aeb4p-70f, 0x1.39ba34p-3f, 0x1.47cb1ap-72f, 0x1.8fdc16p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.792566p-123f, 0.0f, 0x1.d51636p-92f, 0.0f,
     0x1.f1da98p-29f, 0.0f, 0.0f, 0x1.e314acp-25f, 0x1.2063a6p-74f, 0x1.1cb24ep-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.39a5ccp-107f, 0.0f, 0x1.4f45fep-32f, 0x1.1f230cp-41f,
     0.0f, 0.0f, 0.0f, 0x1.0f774p-55f, 0.0f, 0.0f, 0.0f, 0x1.f23158p-76f, 0.0f,
     0x1.3665fep-95f, 0x1.beac76p-100f, 0x1.c3476cp-72f, 0x1.75c588p-33f, 0.0f, 0.0f,
     0x1.97f594p-99f, 0x1.b6fa5p-110f, 0x1.a46828p-5f, 0.0f, 0x1.8fdbdcp-60f, 0.0f,
     0x1.7231ccp-47f, 0x1.9a315cp-118f, 0.0f, 0x1.95f1e6p-32f, 0x1.6c93acp-42f,
     0x1.63b05cp-4f, 0x1.99628p-40f, 0x1.df3c2cp-64f, 0.0f, 0.0f, 0x1.ee08dcp-24f,
     0.0f, 0x1.7d1bd4p-9f, 0.0f, 0x1.7b074ep-67f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_floorf1_purecfma(tmp0);
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
    printf("Sleef_finz_floorf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_floorf1_purecfma bench acc %a\n", global_bench_acc);
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
