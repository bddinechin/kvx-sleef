/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f1_u35purecfma.c --function \
 *     Sleef_finz_atan2f1_u35purecfma --arity 2 --headers \
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
     0x1.99589ep-60f, 0x1.6c7b12p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b93194p-36f, 0x1.349c1p-28f, 0.0f, 0x1.6d5312p-85f, 0.0f, 0x1.e00e8p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab4cb6p-101f, 0x1.740f2p-69f,
     0x1.94c232p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11e558p-21f, 0x1.8ec75p-96f,
     0.0f, 0.0f, 0x1.4b90b2p-75f, 0.0f, 0x1.81c92ep-97f, 0.0f, 0x1.0b63b4p-83f,
     0x1.a26af4p-126f, 0.0f, 0.0f, 0.0f, 0x1.f5b072p-30f, 0x1.0a35e6p-24f,
     0x1.9b7e3cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8add32p-101f, 0.0f, 0.0f,
     0x1.025f72p-112f, 0x1.5e0446p-40f, 0.0f, 0.0f, 0x1.4c3156p-12f, 0x1.c76d0ep-54f,
     0x1.3b0aacp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ecfaep-63f, 0x1.164cccp-65f,
     0x1.82987ep-63f, 0.0f, 0x1.06dfbap-106f, 0x1.26cad8p-36f, 0x1.574d84p-22f,
     0x1.625d6ap-3f, 0x1.d2289cp-66f, 0x1.fa9ac2p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac9d24p-46f, 0x1.26786cp-18f, 0.0f, 0x1.5f868cp-1f, 0.0f, 0x1.093c7ap-20f,
     0x1.69a0eap-108f, 0x1.9b851ep-20f, 0x1.b37e2ap-17f, 0x1.70b7bap-81f, 0.0f,
     0x1.66be94p-40f, 0x1.1179c2p-120f, 0.0f, 0x1.1ff5f4p-69f, 0.0f, 0.0f,
     0x1.e96814p-99f, 0x1.077434p-62f, 0.0f, 0x1.d99806p-124f, 0x1.8edde4p-14f,
     0x1.ed213ep-110f, 0x1.fc04d4p-12f, 0x1.85d1a8p-28f, 0.0f, 0.0f, 0.0f,
     0x1.0d8afap-70f, 0.0f, 0x1.3b0972p-5f, 0.0f, 0.0f, 0x1.2db7c4p-14f,
     0x1.fbe88ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.faf1bcp-11f, 0x1.0ee986p-54f,
     0x1.a65d32p-91f, 0.0f, 0.0f, 0.0f, 0x1.cca8fp-3f, 0.0f, 0.0f, 0.0f,
     0x1.58a0b4p-80f, 0.0f, 0x1.c94bc2p-12f, 0x1.13b4aep-14f, 0x1.6e0196p-84f, 0.0f,
     0.0f, 0x1.c4088ep-87f, 0.0f, 0x1.7e3042p-76f, 0x1.1c24acp-63f, 0x1.0ff1cap-103f,
     0.0f, 0x1.462552p-72f, 0x1.c0875p-39f, 0x1.352a02p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b0b1cp-51f, 0x1.74ccbap-86f, 0.0f, 0x1.7f73bcp-89f, 0x1.9f3946p-81f, 0.0f,
     0x1.553d6p-100f, 0x1.f6612p-104f, 0.0f, 0.0f, 0x1.ea2b4ap-69f, 0x1.04d33ap-91f,
     0.0f, 0x1.eb95dcp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8d95ap-99f, 0x1.96d1e6p-30f,
     0x1.f2e6ep-84f, 0x1.8e1aa8p-96f, 0.0f, 0.0f, 0x1.2e6818p-75f, 0.0f,
     0x1.396cf2p-58f, 0.0f, 0x1.4d41fep-65f, 0.0f, 0x1.58cdd4p-111f, 0x1.80ff08p-78f,
     0x1.4da05ap-15f, 0x1.35de0cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7f5d6p-56f, 0x1.9cea18p-5f, 0.0f, 0.0f, 0x1.446962p-22f, 0.0f,
     0x1.9cd7bp-42f, 0x1.b1d542p-48f, 0.0f, 0x1.80718cp-34f, 0x1.426fc2p-103f, 0.0f,
     0.0f, 0.0f, 0x1.7f72b4p-105f, 0x1.cc2d3ap-32f, 0x1.6d3de4p-53f, 0x1.d45beap-111f,
     0.0f, 0.0f, 0x1.8791fp-20f, 0x1.dded6p-24f, 0x1.e8fb98p-83f, 0.0f,
     0x1.ce713p-32f, 0.0f, 0x1.2c9964p-53f, 0.0f, 0.0f, 0x1.6f7762p-121f, 0.0f, 0.0f,
     0x1.240bd2p-54f, 0x1.d7bb02p-47f, 0.0f, 0x1.b716a2p-13f, 0x1.7b77f8p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b2034p-24f, 0.0f, 0x1.e27314p-94f,
     0x1.cec6cap-87f, 0.0f, 0.0f, 0x1.b14b7p-65f, 0x1.40e366p-116f, 0x1.324362p-91f,
     0.0f, 0x1.d61ebcp-45f, 0.0f, 0x1.45deeap-20f, 0.0f, 0x1.24f4f6p-35f,
     0x1.a1f94ap-1f, 0.0f, 0.0f, 0x1.7c2d7ap-52f, 0x1.0cec7ep-117f, 0x1.87ef6p-12f,
     0.0f, 0x1.94b4e6p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6ab4cp-90f,
     0x1.d981a4p-38f, 0.0f, 0.0f, 0x1.95eab4p-86f, 0x1.3986c6p-98f, 0x1.fbd4dap-125f,
     0x1.5762fp-75f, 0.0f, 0x1.1687a4p-80f, 0x1.1ed504p-108f, 0x1.1fae66p-61f, 0.0f,
     0x1.d091cp-27f, 0x1.748a5cp-9f, 0x1.e6bd66p-23f, 0x1.d9a50ap-4f, 0.0f,
     0x1.f6692ap-10f, 0.0f, 0.0f, 0.0f, 0x1.a6d474p-69f, 0x1.da14e4p-55f,
     0x1.b3908ep-21f, 0x1.a519e2p-11f, 0x1.2ad0eep-98f, 0x1.182b18p-61f,
     0x1.358826p-126f, 0.0f, 0x1.c199a2p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b08292p-17f, 0.0f, 0x1.56a44cp-8f, 0.0f, 0.0f, 0x1.bf2e96p-85f,
     0x1.8bd1a8p-50f, 0.0f, 0.0f, 0x1.6d6488p-37f, 0.0f, 0.0f, 0.0f, 0x1.7aaf38p-64f,
     0.0f, 0.0f, 0x1.243dfep-30f, 0.0f, 0.0f, 0.0f, 0x1.5adc9ap-71f, 0x1.ca55p-52f,
     0.0f, 0x1.1b39a6p-21f, 0x1.0085a8p-18f, 0.0f, 0.0f, 0.0f, 0x1.f3e5cap-58f, 0.0f,
     0.0f, 0x1.158ce6p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f2f46p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.33d68cp-56f, 0x1.28605cp-33f, 0.0f, 0x1.3f911ep-110f, 0.0f, 0.0f, 0.0f,
     0x1.853eaap-109f, 0x1.68752p-53f, 0.0f, 0.0f, 0.0f, 0x1.ea255ep-78f,
     0x1.95c0f4p-90f, 0x1.f43642p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d82c06p-46f, 0.0f, 0x1.850ec8p-35f, 0.0f, 0.0f,
     0x1.a4502p-51f, 0x1.254624p-45f, 0.0f, 0.0f, 0x1.8a5284p-63f, 0x1.7ee9bp-8f,
     0.0f, 0x1.d500d6p-89f, 0x1.cdc962p-49f, 0x1.a1725p-119f, 0x1.d64404p-8f,
     0x1.794696p-8f, 0.0f, 0x1.dd18aap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7633cp-19f,
     0x1.d6efb4p-18f, 0x1.5fd274p-24f, 0.0f, 0x1.c6f5d6p-61f, 0.0f, 0x1.6c5656p-124f,
     0x1.d873aap-82f, 0x1.5bf406p-25f, 0x1.0f11eap-76f, 0x1.2a2158p-114f, 0.0f,
     0x1.f5ef58p-43f, 0.0f, 0x1.71b69p-97f, 0.0f, 0.0f, 0.0f, 0x1.1fe25ap-83f, 0.0f,
     0.0f, 0.0f, 0x1.7942f8p-22f, 0.0f, 0.0f, 0x1.decc46p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38cc6ep-118f, 0x1.237608p-44f, 0.0f, 0.0f, 0.0f, 0x1.fe0b26p-119f, 0.0f,
     0.0f, 0.0f, 0x1.0a92fcp-94f, 0.0f, 0.0f, 0.0f, 0x1.962a8p-125f, 0.0f,
     0x1.a8291cp-62f, 0.0f, 0.0f, 0x1.b0d708p-103f, 0x1.6d8acep-90f, 0.0f,
     0x1.e286d8p-68f, 0.0f, 0x1.dc2abep-60f, 0x1.88de14p-112f, 0.0f, 0.0f,
     0x1.304d8p-6f, 0x1.d8a442p-42f, 0.0f, 0.0f, 0x1.31d89cp-44f, 0.0f, 0.0f,
     0x1.5f1b38p-90f, 0x1.2aa922p-5f, 0x1.537d54p-34f, 0x1.4e1d7ap-126f,
     0x1.204edp-33f, 0.0f, 0x1.b3f936p-65f, 0.0f, 0.0f, 0.0f, 0x1.6531dep-9f, 0.0f,
     0x1.0b9b9ap-121f, 0.0f, 0x1.504fccp-77f, 0.0f, 0.0f, 0x1.7375dep-92f,
     0x1.02073p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e08bcp-61f, 0.0f, 0.0f, 0.0f,
     0x1.c4d12cp-43f, 0x1.ae10bp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5581f4p-115f,
     0.0f, 0.0f, 0x1.653e4p-67f, 0.0f, 0x1.14dff4p-43f, 0x1.bb1c2cp-61f,
     0x1.b347dp-106f, 0x1.c0a544p-75f, 0x1.6282a2p-119f, 0.0f, 0.0f, 0x1.db4f44p-93f,
     0.0f, 0x1.7185c2p-115f, 0.0f, 0x1.0d04cp-81f, 0.0f, 0x1.12ca18p-20f, 0.0f,
     0x1.87cb32p-3f, 0x1.5ca354p-107f, 0x1.b1db1p-41f, 0x1.5e707cp-125f,
     0x1.eba9e4p-65f, 0.0f, 0.0f, 0x1.b22a04p-63f, 0.0f, 0x1.99d33ep-56f,
     0x1.14e2a6p-106f, 0x1.1a0c5p-55f, 0x1.7a81c6p-105f, 0.0f, 0x1.6817fcp-75f,
     0x1.47fffap-106f, 0x1.8a8cc4p-49f, 0.0f, 0x1.562fcap-24f, 0.0f, 0x1.a2edf6p-49f,
     0x1.6ef286p-42f, 0.0f, 0x1.8f3e82p-61f, 0.0f, 0x1.4a65bcp-6f, 0.0f,
     0x1.2f05d6p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9dc69ap-67f, 0x1.6cca54p-97f,
     0x1.2bb022p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6c61p-65f, 0.0f, 0x1.d70e5ap-82f,
     0.0f, 0x1.4569e8p-56f, 0x1.49db5ap-35f, 0x1.61c792p-92f, 0.0f, 0x1.dc611ap-89f,
     0x1.291be2p-110f, 0x1.de935cp-90f, 0x1.e4b7eap-3f, 0.0f, 0x1.faaf18p-64f, 0.0f,
     0x1.8f1244p-12f, 0.0f, 0x1.b1498ep-124f, 0.0f, 0x1.d7c4d2p-96f, 0.0f,
     0x1.1f61dap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0624aap-74f,
     0x1.2ad448p-121f, 0x1.b00bbap-42f, 0x1.870eacp-68f, 0x1.6cbb8cp-31f,
     0x1.8e04e2p-93f, 0x1.d69d44p-7f, 0x1.f83d6ap-85f, 0.0f, 0.0f, 0x1.839e44p-49f,
     0x1.1fd27cp-16f, 0x1.036df8p-31f, 0.0f, 0x1.5475c6p-67f, 0.0f, 0x1.0b1f98p-37f,
     0x1.40437cp-83f, 0x1.ea3b5cp-66f, 0.0f, 0x1.cfcf12p-48f, 0.0f, 0.0f,
     0x1.2ae114p-46f, 0x1.13103ep-88f, 0x1.0c9a7ap-51f, 0.0f, 0x1.c4e6dcp-68f, 0.0f,
     0x1.1e0c0ap-66f, 0.0f, 0.0f, 0x1.f92ec4p-39f, 0x1.a1538p-106f, 0x1.59e72cp-101f,
     0.0f, 0x1.c72314p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b2d6ep-1f, 0.0f, 0.0f,
     0x1.1f652ap-11f, 0.0f, 0.0f, 0x1.bc12cap-78f, 0.0f, 0x1.db206cp-20f,
     0x1.f4e9fap-6f, 0.0f, 0.0f, 0.0f, 0x1.a89f98p-67f, 0x1.5bf75p-98f,
     0x1.c01daep-110f, 0x1.01458p-89f, 0x1.882c36p-74f, 0.0f, 0x1.3fc3aep-14f,
     0x1.9818b4p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0bcf4p-117f, 0x1.6f9544p-83f,
     0.0f, 0.0f, 0x1.48998p-117f, 0x1.a3abcap-19f, 0.0f, 0x1.724c6p-65f,
     0x1.3797bp-40f, 0.0f, 0x1.05ca16p-78f, 0x1.b21ab2p-117f, 0.0f, 0.0f, 0.0f,
     0x1.b59aa6p-119f, 0x1.5f53cep-117f, 0.0f, 0x1.6de64p-54f, 0x1.5f9facp-11f, 0.0f,
     0x1.d05c2ap-26f, 0x1.097204p-51f, 0.0f, 0x1.f08794p-114f, 0.0f, 0x1.f2887p-6f,
     0.0f, 0x1.66329ap-107f, 0.0f, 0x1.7c9e28p-85f, 0x1.3e5ep-17f, 0x1.ce4a28p-35f,
     0x1.41d538p-117f, 0.0f, 0x1.62fbbcp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.336d52p-49f,
     0x1.7ea1d6p-23f, 0.0f, 0.0f, 0.0f, 0x1.1d771cp-36f, 0x1.616b6ap-3f, 0.0f,
     0x1.111f6cp-65f, 0x1p0f, 0x1.df76e2p-105f, 0.0f, 0.0f, 0.0f, 0x1.b924ecp-71f,
     0x1.1d4d7cp-13f, 0.0f, 0.0f, 0x1.5d2334p-83f, 0x1.440d52p-89f, 0.0f, 0.0f,
     0x1.d9ffe2p-92f, 0x1.9be5p-55f, 0x1.089302p-81f, 0x1.b9e746p-27f, 0.0f, 0.0f,
     0x1.3559c6p-48f, 0.0f, 0x1.4e6dbap-61f, 0x1.759b1cp-99f, 0.0f, 0.0f,
     0x1.977f7ep-98f, 0x1.00228ap-17f, 0.0f, 0x1.64a8a2p-20f, 0x1.affa42p-34f, 0.0f,
     0.0f, 0x1.be6afcp-65f, 0.0f, 0x1.5f40f6p-85f, 0.0f, 0.0f, 0x1.44981ep-99f, 0.0f,
     0x1.c5d17p-25f, 0x1.114646p-109f, 0x1.7309cap-42f, 0x1.2a57c6p-84f,
     0x1.14f804p-96f, 0x1.df5464p-43f, 0x1.789062p-71f, 0x1.99fec8p-43f, 0.0f,
     0x1.d0293ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70cfc6p-123f, 0x1.66ecc2p-32f,
     0x1.6e436cp-51f, 0.0f, 0.0f, 0.0f, 0x1.7caacep-44f, 0.0f, 0x1.a681ecp-34f, 0.0f,
     0.0f, 0x1.f1ff14p-16f, 0x1.85d47cp-57f, 0x1.ba7ec6p-25f, 0.0f, 0x1.0cc07ep-112f,
     0.0f, 0x1.3e853ep-85f, 0.0f, 0x1.c72bdep-23f, 0.0f, 0.0f, 0.0f, 0x1.25d1ap-39f,
     0.0f, 0.0f, 0x1.bd74dcp-70f, 0x1.045e08p-17f, 0x1.01c0bep-64f, 0x1.d3dc32p-109f,
     0x1.58d746p-8f, 0.0f, 0x1.081b3p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f06152p-100f,
     0x1.c5e94cp-11f, 0x1.a32b5ep-56f, 0x1.e53a76p-20f, 0.0f, 0x1.afb782p-10f,
     0x1.616a64p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3504f8p-74f, 0x1.e72416p-21f,
     0x1.38a7e8p-111f, 0.0f, 0x1.a7144ep-56f, 0x1.ec4814p-116f, 0.0f, 0x1.51dfb2p-64f,
     0x1.8670a4p-16f, 0.0f, 0x1.1814fp-44f, 0.0f, 0.0f, 0x1.b02224p-116f, 0.0f, 0.0f,
     0x1.107298p-97f, 0.0f, 0.0f, 0.0f, 0x1.54a234p-86f, 0.0f, 0.0f, 0x1.9581dp-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d6bb4p-94f, 0x1.dd0bbap-114f, 0.0f,
     0.0f, 0.0f, 0x1.ea4028p-36f, 0.0f, 0.0f, 0x1.ff60ap-34f, 0.0f, 0x1.45c1ep-119f,
     0x1.a0521p-28f, 0.0f, 0.0f, 0x1.bac89ap-12f, 0x1.79efe2p-2f, 0.0f, 0.0f,
     0x1.0fd444p-58f, 0x1.0d2faep-26f, 0.0f, 0.0f, 0.0f, 0x1.5a75c2p-81f, 0.0f,
     0x1.a6dc1cp-118f, 0x1.419a14p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.256bd2p-12f, 0x1.2811aep-3f, 0.0f, 0.0f, 0x1.dc600cp-8f, 0.0f,
     0x1.3228ccp-78f, 0x1.4ce8d6p-112f, 0x1.da7fc2p-59f, 0.0f, 0x1.9daf0ap-8f, 0.0f,
     0x1.508424p-100f, 0.0f, 0.0f, 0.0f, 0x1.c209d8p-111f, 0x1.3359c2p-93f,
     0x1.be8b22p-1f, 0x1.85eb7p-82f, 0.0f, 0.0f, 0.0f, 0x1.195b14p-41f, 0.0f,
     0x1.5fd3e8p-34f, 0x1.cd557ap-65f, 0.0f, 0x1.408ebap-43f, 0x1.2e7b6cp-57f, 0.0f,
     0x1.d2c23ep-103f, 0x1.faf8cep-119f, 0.0f, 0x1.be5f36p-81f, 0x1.1dab94p-98f,
     0x1.fac584p-66f, 0.0f, 0.0f, 0.0f, 0x1.46981ap-95f, 0x1.b75cc8p-43f, 0.0f, 0.0f,
     0x1.ae6222p-43f, 0.0f, 0.0f, 0x1.b71e64p-84f, 0x1.421044p-80f, 0.0f,
     0x1.e22466p-87f, 0.0f, 0x1.c12b9p-118f, 0.0f, 0x1.ccf756p-78f, 0x1.588ec6p-66f,
     0.0f, 0x1.0f3dfep-12f, 0.0f, 0.0f, 0x1.e12edap-64f, 0.0f, 0.0f, 0x1.30fe46p-36f,
     0.0f, 0.0f, 0x1.2e6a08p-118f, 0x1.76edc8p-36f, 0.0f, 0.0f, 0x1.152862p-26f, 0.0f,
     0x1.8f0476p-117f, 0.0f, 0.0f, 0x1.ff2e2ep-6f, 0.0f, 0x1.3bd452p-106f, 0.0f, 0.0f,
     0x1.1a6e9cp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53893ap-41f,
     0x1.09667ep-7f, 0.0f, 0.0f, 0x1.90d7ap-23f, 0x1.371b5p-80f, 0.0f,
     0x1.7a4786p-82f, 0.0f, 0x1.31c9f4p-21f, 0x1.18211ep-15f, 0x1.e3e7cap-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e29b1p-53f, 0x1.dcb67ap-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f2842p-97f, 0x1.fbca86p-58f, 0x1.28d334p-61f,
     0.0f, 0.0f, 0.0f, 0x1.9f6332p-74f, 0x1.4824cp-24f, 0x1.dc777p-104f, 0.0f,
     0x1.14cdc4p-29f, 0.0f, 0.0f, 0.0f, 0x1.9ad51p-1f, 0x1.e9a1d4p-33f,
     0x1.0aa006p-64f, 0.0f, 0x1.bf831ep-34f, 0x1.a6bafep-58f, 0.0f, 0.0f,
     0x1.3e46f2p-86f, 0.0f, 0x1.70469ep-95f, 0x1.373316p-101f, 0x1.1416e8p-12f, 0.0f,
     0.0f, 0x1.9eaf86p-90f, 0x1.314ceap-11f, 0.0f, 0.0f, 0x1.34db5ep-61f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.a8d998p-43f, 0x1.18358ap-40f, 0x1.700cb6p-45f, 0x1.c7a234p-88f, 0.0f,
     0x1.8dc45p-76f, 0x1.bbaf8ap-14f, 0x1.777694p-10f, 0x1.d94612p-125f, 0.0f,
     0x1.700dcp-14f, 0.0f, 0x1.f378b4p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56e8e6p-44f,
     0x1.f70f66p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50081ap-45f, 0.0f, 0x1.4f625p-74f,
     0x1.27e51ap-90f, 0x1p0f, 0.0f, 0x1.29c224p-84f, 0.0f, 0.0f, 0x1.c365d2p-83f,
     0.0f, 0.0f, 0.0f, 0x1.fca32p-54f, 0x1.e816aep-7f, 0.0f, 0.0f, 0x1.336d7ap-2f,
     0.0f, 0.0f, 0x1.0db532p-37f, 0x1.f31aa4p-122f, 0x1.73dbcp-114f, 0x1.99479cp-56f,
     0x1.ffb694p-55f, 0x1.3384dcp-15f, 0.0f, 0.0f, 0x1.48cf8ep-57f, 0x1.21736cp-85f,
     0x1.cf2cbcp-73f, 0.0f, 0x1.6685bcp-21f, 0x1.2f7e0ap-92f, 0x1.f5c78cp-94f, 0.0f,
     0.0f, 0x1.3b1e78p-31f, 0.0f, 0.0f, 0.0f, 0x1.cf6d5p-60f, 0.0f, 0.0f,
     0x1.ac7742p-7f, 0x1.43e9c6p-72f, 0x1.8b15fp-58f, 0.0f, 0x1.f24e78p-43f,
     0x1.685662p-90f, 0x1.de33cap-19f, 0x1.09ad2p-88f, 0x1.bc593ep-38f,
     0x1.96c7fp-71f, 0.0f, 0.0f, 0x1.bee934p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.10cb02p-91f, 0x1.f9f9a4p-116f, 0.0f, 0x1.54d8c6p-54f, 0x1p0f, 0.0f,
     0x1.64f4a2p-124f, 0.0f, 0x1p0f, 0.0f, 0x1.bbc15p-14f, 0.0f, 0x1.4a0b48p-20f,
     0.0f, 0.0f, 0x1.4b58bap-118f, 0x1.024d92p-24f, 0.0f, 0x1.63799cp-36f,
     0x1.68845ap-116f, 0.0f, 0x1.8700d4p-69f, 0x1.e789a6p-68f, 0.0f, 0x1.92228cp-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e47bcp-70f, 0.0f, 0.0f, 0.0f, 0x1.f1ef5ep-122f,
     0.0f, 0x1.d2b25p-84f, 0.0f, 0x1.9d312p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.850c88p-18f, 0.0f, 0x1.ac00bcp-121f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.31fc44p-104f, 0x1.b1aa66p-125f, 0.0f, 0x1.9f625ap-49f,
     0x1.cee932p-98f, 0.0f, 0.0f, 0.0f, 0x1.104258p-41f, 0.0f, 0.0f, 0.0f,
     0x1.e7b95p-68f, 0.0f, 0.0f, 0x1.3fb8ccp-31f, 0.0f, 0x1.3c3eb2p-2f, 0.0f,
     0x1.b8b484p-52f, 0.0f, 0x1.e8a738p-71f, 0x1.494898p-66f, 0.0f, 0x1.7230cap-98f,
     0x1.2ade54p-85f, 0x1.33641ep-9f, 0.0f, 0x1.1756c4p-120f, 0x1.cc5eccp-50f,
     0x1.4e5a9p-42f, 0x1.33f75ep-47f, 0x1.a9d4p-9f, 0.0f, 0.0f, 0x1.1f4884p-121f,
     0x1.77ff1ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fc32ap-97f, 0.0f,
     0.0f, 0x1.68abacp-48f, 0.0f, 0.0f, 0x1.58cfd8p-21f, 0x1.db46cap-33f,
     0x1.14c13cp-106f, 0x1.11f682p-54f, 0x1.ed0508p-58f, 0x1.196072p-46f,
     0x1.6d2fd6p-54f, 0.0f, 0x1.ec3bd4p-18f, 0.0f, 0x1.0db162p-3f, 0x1.d9b636p-105f,
     0x1.0a9aap-75f, 0x1.0fb262p-83f, 0x1.ef36c2p-119f, 0x1.f48902p-79f,
     0x1.7d84c6p-100f, 0.0f, 0.0f, 0.0f, 0x1.28571p-75f, 0x1.ea21e8p-101f, 0.0f,
     0x1.35b64cp-76f, 0x1.5b725cp-101f, 0x1.9c915p-32f, 0x1.c8211ap-111f,
     0x1.2eb7eap-95f, 0x1.5e3018p-38f, 0.0f, 0x1.f0adcap-105f, 0.0f, 0x1.8f484cp-91f,
     0x1.e52c68p-12f, 0.0f, 0x1.b7ff9ep-88f, 0x1.6cae3ep-14f, 0x1.055efap-74f,
     0x1.204df2p-17f, 0x1.521c12p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2695c2p-125f,
     0x1.6f8cdep-120f, 0.0f, 0x1.7c07fp-93f, 0x1.36fc98p-122f, 0.0f, 0.0f, 0.0f,
     0x1.61d48ep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c46ca4p-105f, 0.0f, 0.0f,
     0x1.a3b3e6p-76f, 0x1.d0e33cp-85f, 0x1.a9204ep-88f, 0x1.124a2p-82f,
     0x1.f210fep-51f, 0.0f, 0x1.4963cap-53f, 0.0f, 0x1.be9bf8p-99f, 0.0f,
     0x1.4ea85p-47f, 0x1.d93a42p-80f, 0.0f, 0x1.46c904p-115f, 0.0f, 0x1.53c97p-8f,
     0x1.5100f8p-18f, 0x1.0e9fc2p-78f, 0.0f, 0.0f, 0x1.293ca4p-19f, 0.0f, 0.0f,
     0x1.8b8deap-50f, 0x1.42ff32p-23f, 0.0f, 0.0f, 0x1.82946ep-30f, 0.0f,
     0x1.85628ep-42f, 0x1.7cc01cp-109f, 0.0f, 0x1.f931aep-91f, 0x1.01606ep-51f, 0.0f,
     0.0f, 0x1.4720fp-28f, 0x1.f2cfdap-20f, 0x1.0ad93ep-93f, 0.0f, 0x1.c925a8p-6f,
     0x1.2d4bd2p-73f, 0.0f, 0x1.6f9636p-75f, 0x1.57b8e8p-6f, 0x1.367e7cp-123f, 0.0f,
     0x1.77137p-70f, 0x1.5d48aap-15f, 0x1.eaaafcp-14f, 0.0f, 0x1.53a714p-80f,
     0x1.ca0d76p-22f, 0x1.2d1e68p-30f, 0x1.a1641cp-76f, 0x1.ba54dap-91f, 0.0f, 0x1p0f,
     0.0f, 0x1.557886p-77f, 0.0f, 0x1.1f72ep-111f, 0x1.7ac1c4p-65f, 0.0f, 0.0f,
     0x1.37d55p-64f, 0.0f, 0.0f, 0x1.f103fap-13f, 0.0f, 0.0f, 0x1.dfeac2p-100f, 0.0f,
     0.0f, 0x1.3ab36ap-78f, 0x1.7b56f4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eddc74p-4f, 0x1.b7da82p-82f, 0x1.7c7c06p-73f, 0x1.886dc4p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.832f9p-66f, 0x1.ff3606p-54f, 0.0f, 0x1.b80e28p-59f,
     0x1.ec68c8p-105f, 0x1.749bfp-71f, 0.0f, 0x1.d1823ep-103f, 0x1.40293p-8f,
     0x1.d65386p-6f, 0x1.23ebecp-90f, 0.0f, 0x1.e0f182p-12f, 0x1.cdb13p-113f,
     0x1.71a08p-35f, 0.0f, 0x1.922a3p-116f, 0.0f, 0.0f, 0x1.b12be6p-34f,
     0x1.a00ad8p-84f, 0.0f, 0.0f, 0x1.199f04p-90f, 0.0f, 0.0f, 0.0f, 0x1.a0b384p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48218p-70f, 0x1.8e1c52p-21f, 0x1.ee3cdp-48f,
     0x1.b09f54p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10072ap-28f, 0.0f, 0.0f,
     0x1.c84178p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e7934p-37f, 0.0f, 0.0f,
     0x1.d7a066p-75f, 0x1.face08p-99f, 0x1.851284p-15f, 0.0f, 0x1.49745ap-69f,
     0x1.eeab68p-91f, 0x1.1d67b4p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.509842p-85f,
     0.0f, 0x1.ac6ed8p-77f, 0.0f, 0x1p0f, 0.0f, 0x1.1c30f6p-14f, 0x1.ba570ep-124f,
     0.0f, 0x1.bd7aa4p-28f, 0x1.e698e2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac9d8ep-80f,
     0x1.751b7ap-93f, 0.0f, 0.0f, 0.0f, 0x1.45137ap-22f, 0x1.de9c66p-45f,
     0x1.d19bcep-52f, 0.0f, 0x1.4c86b8p-41f, 0.0f, 0.0f, 0x1.a98f58p-53f, 0.0f, 0.0f,
     0x1.2c0e5ep-122f, 0.0f, 0x1.1b4774p-21f, 0x1.a14dfcp-119f, 0.0f,
     0x1.9c3d4ep-111f, 0x1.7882dep-14f, 0x1.a8c30cp-32f, 0.0f, 0x1.1df39cp-48f,
     0x1.5be63p-119f, 0x1.011af6p-32f, 0x1.d618a8p-23f, 0x1.f0908ap-109f,
     0x1.55676ep-17f, 0x1.a6d93ap-93f, 0x1.540202p-50f, 0x1.9ec306p-122f, 0.0f,
     0x1.22ffdap-53f, 0.0f, 0.0f, 0x1.e13078p-108f, 0.0f, 0.0f, 0.0f, 0x1.9e6646p-14f,
     0x1.0a3134p-121f, 0x1.366fe6p-115f, 0.0f, 0x1.aeab2cp-52f, 0.0f, 0x1.337d52p-2f,
     0.0f, 0x1.fe91d6p-44f, 0x1.99e6c6p-80f, 0x1.cb7fd2p-100f, 0.0f, 0x1.91191cp-30f,
     0x1.cf0566p-6f, 0.0f, 0x1.8f07a6p-66f, 0.0f, 0.0f, 0x1.3f61a6p-10f, 0.0f, 0.0f,
     0x1.b33b6ap-12f, 0.0f, 0x1.3f960cp-49f, 0x1.109d1ep-5f, 0.0f, 0.0f, 0.0f,
     0x1.dde586p-66f, 0x1.f417ap-62f, 0.0f, 0.0f, 0x1.10609ep-116f, 0x1.3e99e8p-68f,
     0.0f, 0x1.5003d8p-88f, 0x1.1dc88p-107f, 0x1.b0ff54p-13f, 0x1.a8f4dcp-52f,
     0x1.3c8324p-30f, 0x1.b2f778p-67f, 0x1.a6a792p-53f, 0x1.7ebf2ap-46f,
     0x1.389a4cp-80f, 0.0f, 0.0f, 0x1.6f0c46p-39f, 0.0f, 0x1.71d5cep-63f,
     0x1.c30c3ep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5329ep-28f, 0.0f, 0.0f,
     0x1.75288ap-121f, 0.0f, 0x1.9e94aap-45f, 0.0f, 0.0f, 0x1.1e6f34p-70f, 0.0f,
     0x1.245e0ap-80f, 0x1.26fb68p-125f, 0x1.07fedap-68f, 0.0f, 0x1.4b320ap-10f,
     0x1.f9822p-7f, 0.0f, 0x1.e0d23ep-109f, 0x1.105e4cp-9f, 0x1.36eee8p-98f, 0.0f,
     0x1.d07adap-44f, 0x1.dc5106p-95f, 0.0f, 0x1.a11ca2p-70f, 0.0f, 0.0f,
     0x1.9275a4p-28f, 0x1.bef4b8p-35f, 0.0f, 0x1.8bdf1cp-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f0be4p-66f, 0.0f, 0x1.e0a13p-95f, 0x1.b2ccaap-57f, 0.0f,
     0x1.b85abep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d43bp-28f, 0.0f,
     0x1.f2fd72p-35f, 0x1.99656ep-19f, 0.0f, 0x1.cdfd3cp-99f, 0.0f, 0x1.32e7d2p-77f,
     0.0f, 0x1.747cbp-35f, 0x1.6859aep-1f, 0x1.4d7faep-101f, 0x1.a753b6p-89f, 0.0f,
     0x1.d06878p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d920b8p-111f, 0.0f, 0.0f, 0.0f,
     0x1.5bf52ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2af378p-55f,
     0x1.28238cp-37f, 0x1.9e2e78p-75f, 0.0f, 0x1.319286p-72f, 0x1.bb9e5p-47f,
     0x1.feae8cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfcce4p-108f, 0x1.800b76p-20f,
     0x1.214e2ep-47f, 0.0f, 0.0f, 0.0f, 0x1.bb6dd8p-47f, 0.0f, 0x1.8409acp-30f, 0.0f,
     0x1.b6cfecp-8f, 0x1.f45ab6p-35f, 0x1.7e40fcp-77f, 0.0f, 0.0f, 0x1.9d58d2p-83f,
     0x1.81d458p-60f, 0x1.9afbcp-33f, 0x1.bf8276p-122f, 0x1.d2a1f4p-85f, 0.0f,
     0x1.788da4p-104f, 0x1.14192p-50f, 0.0f, 0.0f, 0.0f, 0x1.f9fa92p-58f,
     0x1.82bf0ep-77f, 0x1.4b88bap-120f, 0.0f, 0x1.162c26p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4bd4a2p-89f, 0.0f, 0.0f, 0.0f, 0x1.d1700ep-58f, 0x1.bb7b04p-43f,
     0x1.96cd88p-36f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76e316p-19f, 0.0f, 0.0f,
     0x1.3ace2ep-74f, 0x1.4877e2p-46f, 0x1.208e44p-10f, 0.0f, 0x1.0ec45ep-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.44964p-63f, 0x1.6c0534p-90f, 0x1.ff1508p-121f, 0.0f,
     0x1.a04bf4p-121f, 0x1.c7117cp-116f, 0.0f, 0x1.c618e6p-77f, 0x1.6d08c4p-39f, 0.0f,
     0x1.7f5212p-81f, 0x1.6edbb2p-10f, 0x1.d70eb4p-11f, 0.0f, 0x1.970f34p-94f,
     0x1.874bfap-108f, 0x1.e5298p-10f, 0x1.17fc0cp-95f, 0.0f, 0.0f, 0.0f,
     0x1.0cef3cp-35f, 0x1.58adcap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5ec9ep-7f, 0.0f, 0x1.c395cep-118f, 0x1.0681e2p-93f, 0x1.620344p-44f,
     0x1.407484p-16f, 0.0f, 0.0f, 0.0f, 0x1.62ef92p-123f, 0.0f, 0.0f,
     0x1.6e7dfep-112f, 0.0f, 0.0f, 0.0f, 0x1.8297dcp-39f, 0.0f, 0.0f, 0.0f,
     0x1.33e8aep-115f, 0.0f, 0.0f, 0x1.9daa24p-18f, 0x1.cf90b2p-77f, 0x1.42060ap-112f,
     0x1.4a5674p-8f, 0.0f, 0x1.e84b9ap-97f, 0.0f, 0.0f, 0x1.d39c9ap-54f, 0.0f, 0.0f,
     0x1.f0940ep-5f, 0.0f, 0.0f, 0x1.f81552p-54f, 0.0f, 0x1.2a9476p-86f,
     0x1.d747c8p-15f, 0.0f, 0x1.a1b888p-28f, 0x1.d6bb42p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9ac32p-83f, 0x1.024314p-106f, 0.0f, 0.0f, 0x1.a503c2p-98f, 0.0f, 0.0f, 0.0f,
     0x1.0d71d4p-53f, 0.0f, 0.0f, 0.0f, 0x1.8b054ap-78f, 0x1.8d8812p-99f,
     0x1.d3b4a2p-39f, 0x1.8359b4p-53f, 0x1.800c34p-19f, 0x1.ae04d4p-114f,
     0x1.4e0deep-77f, 0x1.b32e1p-126f, 0.0f, 0x1.b6703p-119f, 0.0f, 0x1.373e38p-23f,
     0.0f, 0.0f, 0x1.fb2cc6p-107f, 0.0f, 0.0f, 0x1.57541ep-57f, 0.0f, 0.0f,
     0x1.c38696p-45f, 0x1.c6144cp-116f, 0.0f, 0.0f, 0.0f, 0x1.e04bf2p-61f,
     0x1.b010a4p-57f, 0x1.9b244cp-102f, 0x1.4fc72p-14f, 0.0f, 0x1.cb3facp-26f, 0.0f,
     0.0f, 0.0f, 0x1.4f16f6p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d11e6ap-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.75562ep-75f, 0.0f, 0x1.5aee78p-16f, 0x1.081696p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f5b1ep-52f, 0x1.b45f18p-74f, 0.0f, 0x1.0f091ep-72f,
     0x1.70681cp-114f, 0x1.1f0b4p-114f, 0x1.3a327ep-51f, 0x1.00e662p-3f, 0.0f,
     0x1.306cb2p-15f, 0.0f, 0x1.d9f6ecp-48f, 0x1.a5911p-27f, 0x1.dfd07p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4ff6cp-106f, 0x1.4bec84p-33f,
     0x1.3bf2cep-19f, 0x1.30ebdcp-93f, 0x1.9eb08ap-51f, 0x1.db412ep-12f, 0.0f, 0.0f,
     0x1.3e8386p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97df78p-59f, 0x1.ff1d08p-12f,
     0x1.985d1p-80f, 0x1.d8fab2p-51f, 0x1.6427p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.779de8p-111f, 0x1.36bdaep-49f, 0x1.88f882p-118f, 0.0f, 0x1.661ff6p-76f,
     0x1.11eca4p-73f, 0x1.32ed66p-51f, 0.0f, 0x1.387f94p-123f, 0x1.6b69cap-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.95ba9ep-56f, 0.0f, 0x1.c75ef8p-34f, 0.0f,
     0x1.50995p-49f, 0x1.cc68cap-108f, 0.0f, 0x1.222a06p-16f, 0x1.0ce616p-57f,
     0x1.93fffep-19f, 0.0f, 0x1.bd6578p-99f, 0x1.14ff28p-121f, 0x1.496604p-32f, 0.0f,
     0x1.1a2a5cp-66f, 0.0f, 0x1.ba7b28p-84f, 0x1.73c08cp-66f, 0x1.924864p-85f,
     0x1.f62fd8p-4f, 0.0f, 0x1.0146ep-126f, 0.0f, 0.0f, 0x1p0f, 0x1.87392ep-101f,
     0.0f, 0x1.3b0a98p-3f, 0x1.1f8512p-61f, 0.0f, 0.0f, 0x1.783f2cp-84f,
     0x1.c26deep-8f, 0x1.afd08ap-22f, 0x1.db9564p-119f, 0x1.1ca9aap-19f, 0.0f, 0.0f,
     0x1.aaadbap-24f, 0.0f, 0.0f, 0x1.9fe1c6p-82f, 0x1.d6577p-7f, 0.0f, 0.0f, 0.0f,
     0x1.6793e2p-73f, 0.0f, 0x1.ff7c68p-60f, 0x1.9f0776p-6f, 0x1.dc4086p-107f,
     0x1.32fd5cp-40f, 0.0f, 0.0f, 0.0f, 0x1.5124dap-83f, 0.0f, 0x1.96a766p-116f, 0.0f,
     0.0f, 0.0f, 0x1.9e0ed6p-81f, 0x1.5070b2p-44f, 0.0f, 0.0f, 0.0f, 0x1.9ba5fcp-125f,
     0.0f, 0.0f, 0x1.fe99cap-21f, 0x1.77650cp-93f, 0x1.c3e17ap-40f, 0.0f, 0.0f,
     0x1.517692p-51f, 0.0f, 0.0f, 0.0f, 0x1.7a3f8ep-76f, 0.0f, 0.0f, 0x1.1c56fcp-28f,
     0x1.d979ep-11f, 0x1.0596a6p-98f, 0x1.626014p-84f, 0.0f, 0x1.8601ep-1f, 0.0f,
     0x1.ddfbb6p-24f, 0x1.91d406p-22f, 0.0f, 0x1.6a9338p-3f, 0x1.63ac46p-101f, 0.0f,
     0.0f, 0x1.b6aa66p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.730f14p-66f, 0x1.44d4ccp-33f,
     0.0f, 0x1.95ad72p-53f, 0x1.4b23bp-117f, 0x1.b503b6p-77f, 0.0f, 0x1.80e2fcp-67f,
     0.0f, 0x1.f2403ep-15f, 0x1.9ae1d4p-38f, 0x1.e9e1f6p-33f, 0.0f, 0x1.7f6a8p-91f,
     0.0f, 0x1.1d09a2p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c47798p-110f,
     0x1.bc6022p-112f, 0.0f, 0.0f, 0x1.08ac6ep-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b4478p-108f
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
            tmp2 = Sleef_finz_atan2f1_u35purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_atan2f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atan2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
