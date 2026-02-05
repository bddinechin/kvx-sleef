/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf1_u35purecfma.c --function \
 *     Sleef_finz_hypotf1_u35purecfma --arity 2 --headers \
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
     0x1.3c1db6p-13f, 0.0f, 0x1.552ecp-77f, 0.0f, 0x1.d4633p-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bad138p-100f, 0x1.208258p-70f, 0.0f, 0x1.02566cp-106f,
     0x1.95ef74p-117f, 0.0f, 0x1.5d648p-15f, 0x1.0d7928p-35f, 0.0f, 0x1.27b53ep-43f,
     0.0f, 0.0f, 0x1.8708ep-19f, 0x1.195814p-89f, 0x1.824458p-89f, 0x1.d32e62p-81f,
     0.0f, 0x1.f8aedap-55f, 0x1.64a5a2p-4f, 0.0f, 0.0f, 0.0f, 0x1.322d98p-115f,
     0x1.30572ap-121f, 0.0f, 0x1.42c0c8p-14f, 0x1.afa00cp-73f, 0x1.f32a9ap-87f, 0.0f,
     0x1.ac58bap-93f, 0x1.af862ap-90f, 0x1.f6fc14p-63f, 0x1.93fd78p-93f, 0.0f,
     0x1.d2cecp-84f, 0.0f, 0.0f, 0.0f, 0x1.ae7fc4p-71f, 0x1.3ba3eep-100f, 0.0f, 0.0f,
     0.0f, 0x1.c66842p-101f, 0.0f, 0x1.6dedb4p-103f, 0.0f, 0.0f, 0x1.0bdcc4p-2f,
     0x1.e4e9dap-63f, 0.0f, 0x1.d77eaep-118f, 0.0f, 0x1.2dc1cap-3f, 0.0f, 0.0f, 0.0f,
     0x1.a8cf98p-51f, 0x1.727d0cp-15f, 0x1.f73bp-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26a25ap-20f, 0.0f, 0x1.b0d94ep-17f, 0x1.424e92p-11f, 0.0f, 0x1.647ebep-61f,
     0.0f, 0x1.93eae6p-57f, 0.0f, 0x1.3fe90ep-75f, 0.0f, 0x1.a36ebap-24f,
     0x1.91a57ap-124f, 0.0f, 0x1.f9f174p-109f, 0x1.84aa82p-35f, 0x1.133288p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6de182p-76f, 0.0f, 0.0f, 0x1.b35066p-51f, 0.0f,
     0x1.90172p-121f, 0.0f, 0x1.a1229cp-35f, 0.0f, 0.0f, 0.0f, 0x1.c04f6ap-116f,
     0x1.ef2c2p-75f, 0x1.6428d6p-97f, 0.0f, 0x1.e5a948p-18f, 0x1.23d68p-88f,
     0x1.739e36p-42f, 0x1.50c2b6p-62f, 0.0f, 0.0f, 0x1.a439fcp-7f, 0x1.eab3fep-59f,
     0.0f, 0.0f, 0x1.f0ec42p-120f, 0.0f, 0x1.5396p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1acb28p-81f, 0.0f, 0x1.b2e15ep-63f, 0.0f, 0.0f, 0x1.437348p-63f, 0.0f,
     0x1.741de4p-73f, 0x1.4f5b62p-47f, 0x1.d9698cp-87f, 0x1.b7ba02p-30f,
     0x1.7dea28p-56f, 0x1.a992c4p-68f, 0x1.bf390ap-125f, 0x1.38a6aap-27f,
     0x1.3a0034p-126f, 0.0f, 0x1.21ad26p-81f, 0x1.b8bb3cp-75f, 0.0f, 0x1.836aa2p-51f,
     0x1.1cca8ep-5f, 0.0f, 0x1.330cf6p-58f, 0x1.50051ap-2f, 0x1.4b9706p-90f,
     0x1.caa50ep-40f, 0x1.71455p-98f, 0.0f, 0.0f, 0x1.0fb536p-80f, 0.0f,
     0x1.05e5ecp-59f, 0x1.3871f6p-101f, 0x1.69885ap-117f, 0x1.d845e8p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ace68cp-126f, 0.0f, 0.0f, 0x1.1eb38p-13f, 0.0f, 0x1.de1892p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9a12ap-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.947fecp-81f, 0.0f, 0x1.906f82p-36f, 0x1.5a5e3p-78f,
     0x1.b7b97ep-45f, 0x1.8b4c1cp-100f, 0.0f, 0x1.28a39cp-104f, 0.0f, 0x1.c5297p-29f,
     0.0f, 0.0f, 0x1.12aaccp-84f, 0x1.c6736ap-126f, 0x1.9e4498p-34f, 0x1.bc9fdep-28f,
     0.0f, 0.0f, 0.0f, 0x1.3eba7ep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe4a8p-30f,
     0x1.81f7aep-19f, 0x1.7f9f1ep-112f, 0.0f, 0x1.fff824p-30f, 0.0f, 0x1.157086p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ec856p-98f, 0x1.cacb14p-36f, 0x1.926d34p-91f,
     0x1.902cfap-78f, 0.0f, 0x1.7677acp-105f, 0.0f, 0x1.f48b58p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cb704ep-72f, 0.0f, 0x1.9a0a62p-74f, 0x1.957a98p-47f, 0x1.25ba74p-89f,
     0x1.250aaep-1f, 0x1.c42728p-59f, 0x1.d74b0ep-22f, 0x1.3265d2p-23f, 0.0f, 0.0f,
     0x1.a9a7ap-77f, 0x1.ed43d6p-108f, 0.0f, 0x1.24ebp-69f, 0.0f, 0x1.d032d6p-57f,
     0.0f, 0.0f, 0x1.cbb512p-95f, 0.0f, 0.0f, 0.0f, 0x1.e726fap-25f, 0x1.11636ap-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d04d12p-74f, 0x1.a216b6p-77f, 0x1.4ea7c2p-23f,
     0x1.75d57ap-116f, 0x1.0cd47ep-1f, 0.0f, 0.0f, 0x1.e3e20ep-23f, 0x1.3d9158p-3f,
     0x1.dab68ep-124f, 0x1.8fb744p-30f, 0.0f, 0.0f, 0x1.f3749ep-104f, 0x1.bf0d36p-82f,
     0.0f, 0.0f, 0x1.b622c8p-113f, 0x1.d89d52p-7f, 0x1.c69054p-91f, 0.0f,
     0x1.34b04p-43f, 0.0f, 0.0f, 0x1.8db86ap-86f, 0.0f, 0x1.acace2p-40f, 0.0f,
     0x1.a4008p-38f, 0.0f, 0x1.d7f396p-116f, 0.0f, 0.0f, 0x1.8a0f96p-108f,
     0x1.1d877ap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f0728p-10f,
     0x1.104afcp-28f, 0x1.d27db4p-65f, 0.0f, 0x1.7fd5eep-29f, 0x1.df9226p-64f, 0.0f,
     0x1.d22bbap-9f, 0x1.1289bep-7f, 0.0f, 0x1.bf191ep-91f, 0x1.446f78p-4f, 0.0f,
     0x1.71ee8cp-83f, 0x1.e85004p-82f, 0x1.74c248p-44f, 0x1.4aeb66p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a15596p-54f, 0x1.ee301p-34f, 0.0f, 0x1.6ae3e2p-124f, 0.0f, 0.0f,
     0x1.1d8d2cp-92f, 0.0f, 0.0f, 0.0f, 0x1.995f8cp-92f, 0.0f, 0x1.fd841cp-91f,
     0x1.41bd72p-6f, 0x1.2c9fb8p-89f, 0.0f, 0x1.ab0068p-118f, 0x1.0318d6p-76f,
     0x1.dbca9ep-82f, 0x1.38ec98p-124f, 0.0f, 0.0f, 0x1.b3cb5cp-45f, 0x1.b222c4p-25f,
     0x1.cbb424p-21f, 0x1.78623p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f308ep-27f, 0.0f,
     0x1.586ceep-123f, 0x1.4a9f5p-14f, 0x1.21402p-42f, 0x1.f0c18ap-119f, 0.0f, 0.0f,
     0x1.29240ap-9f, 0x1.217fb6p-79f, 0.0f, 0.0f, 0x1.5925dap-108f, 0x1.5e6714p-16f,
     0.0f, 0x1.ae41f4p-75f, 0x1.dde882p-104f, 0x1.dcc252p-48f, 0.0f, 0x1.ecedd2p-36f,
     0x1.af6bb2p-39f, 0x1.89b58cp-83f, 0.0f, 0.0f, 0.0f, 0x1.aeaa46p-79f,
     0x1.67ae9cp-62f, 0x1.302cdap-2f, 0.0f, 0.0f, 0x1.7e5edp-51f, 0.0f,
     0x1.fb18b8p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a84434p-90f, 0x1.4cd582p-65f,
     0x1.2512dp-28f, 0x1.bd467ap-102f, 0x1.af22ap-32f, 0x1.c660e4p-27f, 0.0f, 0.0f,
     0x1.3deb4ep-63f, 0x1.d72984p-25f, 0x1.5ad59ap-45f, 0.0f, 0x1.0d8d7cp-82f, 0.0f,
     0.0f, 0.0f, 0x1.8a7fecp-60f, 0.0f, 0x1.bd3bbp-44f, 0.0f, 0x1.06068p-38f, 0.0f,
     0.0f, 0x1.b39f36p-47f, 0x1.acf8b2p-53f, 0.0f, 0x1.7f560ap-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.af680ap-40f, 0x1.26564ap-112f, 0x1.b6d31ap-44f, 0.0f, 0x1.4ef57ap-126f,
     0x1.478924p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c6f46p-107f, 0x1.621e42p-90f, 0.0f,
     0.0f, 0x1.810ff6p-12f, 0x1.45be4cp-17f, 0x1.bf139cp-73f, 0.0f, 0.0f,
     0x1.446774p-15f, 0x1.c01f7ep-103f, 0.0f, 0x1.554accp-106f, 0x1.69ba6ap-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78064p-41f, 0.0f, 0x1.06697ep-27f,
     0x1.53639p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.649938p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b3bf66p-81f, 0x1.ee765ep-77f, 0x1.5eff34p-43f, 0x1.1dbebap-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.691282p-52f, 0.0f, 0.0f, 0x1.6e6ce8p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4af17ep-67f, 0.0f, 0.0f, 0.0f, 0x1.021386p-123f, 0.0f,
     0.0f, 0.0f, 0x1.fed06ap-35f, 0.0f, 0x1.8ea66p-62f, 0.0f, 0x1.ffa834p-41f, 0.0f,
     0x1p0f, 0.0f, 0x1.ca8744p-71f, 0x1.81068ap-82f, 0.0f, 0.0f, 0.0f,
     0x1.dfd064p-81f, 0.0f, 0x1.1671f8p-92f, 0.0f, 0.0f, 0x1.f6409ap-11f, 0.0f, 0.0f,
     0x1.56073cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17311ap-51f, 0x1.2de9bp-111f, 0.0f, 0x1.11711p-55f, 0.0f, 0x1.67a8c4p-70f,
     0x1.eaa4ep-65f, 0.0f, 0.0f, 0.0f, 0x1.0d047p-41f, 0.0f, 0.0f, 0x1.918954p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.936aecp-79f,
     0x1.1e56fep-82f, 0.0f, 0x1.2a4a8cp-6f, 0.0f, 0x1.32e9ccp-44f, 0.0f,
     0x1.2170f2p-14f, 0x1.fa6b2cp-23f, 0.0f, 0x1.d0e4fcp-48f, 0.0f, 0x1.af329ep-110f,
     0.0f, 0x1.4d7f58p-68f, 0.0f, 0.0f, 0.0f, 0x1.77d11p-62f, 0x1.ca89bep-95f, 0.0f,
     0.0f, 0x1.14a962p-2f, 0x1.8ca868p-27f, 0x1.f7a262p-34f, 0x1.c66e7p-13f,
     0x1.2f856ep-39f, 0x1.6dba8ep-81f, 0.0f, 0x1.c5b27ap-67f, 0x1.e0186ep-50f,
     0x1.e9e0a2p-126f, 0.0f, 0.0f, 0.0f, 0x1.cb1e5ap-27f, 0.0f, 0x1.ec2fc8p-53f,
     0x1.9c5362p-120f, 0.0f, 0x1.df405ap-108f, 0.0f, 0.0f, 0x1.eb77aap-121f, 0.0f,
     0.0f, 0.0f, 0x1.253f9cp-79f, 0x1.330d6cp-23f, 0x1.b0911ep-24f, 0x1.a8e07ep-28f,
     0.0f, 0x1.fd690cp-12f, 0.0f, 0x1.ed39dep-95f, 0x1.515252p-115f, 0x1.9cb7fep-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6231ep-104f, 0x1.de8fb4p-96f, 0x1.63a0cp-101f,
     0x1.941554p-1f, 0x1.f89fd4p-90f, 0.0f, 0x1.b695dap-8f, 0x1.ca5dacp-107f, 0.0f,
     0.0f, 0x1.995bf6p-92f, 0x1.281f0cp-2f, 0.0f, 0.0f, 0x1.ae0a14p-45f, 0.0f, 0.0f,
     0x1.7997c8p-99f, 0.0f, 0x1.6d97bp-109f, 0x1.f7e0d6p-56f, 0x1.c6088p-44f, 0.0f,
     0x1.099292p-84f, 0.0f, 0x1.126ff2p-46f, 0.0f, 0x1.ba262cp-93f, 0x1.da5fa2p-115f,
     0x1.840ceep-76f, 0x1.99940ep-12f, 0x1.f8e0fep-5f, 0.0f, 0.0f, 0x1.435f76p-64f,
     0.0f, 0x1.990c48p-118f, 0x1.48a9eap-46f, 0x1.a0ee2p-51f, 0.0f, 0.0f,
     0x1.d31b0ep-55f, 0x1.95adccp-6f, 0x1.604176p-38f, 0x1.49942ap-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d85e58p-22f, 0x1.591d6ap-92f, 0.0f, 0.0f, 0.0f, 0x1.aca1bcp-30f,
     0x1.addd36p-50f, 0.0f, 0.0f, 0.0f, 0x1.c71f2ep-48f, 0x1.0fd95p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2bd9bcp-104f, 0x1.552cccp-20f, 0x1.1763f6p-120f, 0.0f,
     0x1.7e32b2p-67f, 0.0f, 0x1.e35ef6p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f58846p-70f, 0x1.16a3a8p-3f, 0.0f, 0x1.bd246ep-30f, 0x1.2a9742p-13f, 0.0f,
     0.0f, 0x1.592588p-76f, 0x1.92bf24p-6f, 0.0f, 0x1.0993b2p-71f, 0x1.03f6e8p-114f,
     0x1.2711e4p-89f, 0.0f, 0x1.9a4d9ep-101f, 0.0f, 0x1.3c8ef6p-75f, 0.0f,
     0x1.ced016p-61f, 0x1.d515bp-26f, 0x1.74ca12p-28f, 0.0f, 0.0f, 0.0f,
     0x1.156852p-38f, 0.0f, 0x1.79e6c8p-64f, 0x1.082a1cp-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24b8bep-109f, 0.0f, 0.0f, 0.0f, 0x1.0ed39p-108f, 0.0f, 0x1.0a93b6p-31f,
     0x1.fa6d7ep-25f, 0x1.9e9fb8p-104f, 0.0f, 0.0f, 0.0f, 0x1.045cb4p-105f,
     0x1.466fc4p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dc21ap-97f, 0.0f, 0x1.3bdb3p-18f,
     0x1.f3f9f8p-111f, 0.0f, 0x1.3cfb9p-96f, 0x1.8c2ba6p-14f, 0.0f, 0x1.1605e8p-84f,
     0x1.28674cp-56f, 0x1.4be87ep-67f, 0.0f, 0.0f, 0x1.76280ap-120f, 0.0f,
     0x1.ad1268p-107f, 0x1.c73cf2p-70f, 0x1.7a89fep-89f, 0.0f, 0.0f, 0x1.7faab4p-65f,
     0.0f, 0x1.f1daf4p-6f, 0.0f, 0.0f, 0.0f, 0x1.8fb91ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f1b876p-13f, 0.0f, 0x1.cb6838p-117f, 0x1.267f16p-48f, 0.0f, 0.0f,
     0x1.b6af64p-64f, 0.0f, 0.0f, 0x1.e174bep-5f, 0.0f, 0.0f, 0.0f, 0x1.0dc354p-1f,
     0x1.c5ceacp-42f, 0.0f, 0x1.785eeap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7b9aap-2f,
     0x1.46d0cap-78f, 0.0f, 0x1.1b1908p-34f, 0x1.bb779ap-106f, 0x1.b6484ap-19f, 0.0f,
     0x1.f47dp-95f, 0x1.50ff7ap-50f, 0x1.c86f2ap-58f, 0x1.2700c4p-57f,
     0x1.174e44p-77f, 0.0f, 0x1.dd8862p-62f, 0x1.7877f4p-110f, 0.0f, 0x1.3f7546p-76f,
     0x1.c05d9cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d9268p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.724598p-39f, 0.0f, 0.0f, 0.0f, 0x1.4aeb68p-6f, 0.0f, 0.0f,
     0.0f, 0x1.78d6b2p-106f, 0x1.3b59a8p-116f, 0x1.72cff2p-35f, 0.0f, 0x1.ca09dap-42f,
     0x1.2c653ap-83f, 0.0f, 0x1.31b002p-103f, 0x1.bd3ebep-106f, 0x1.b8d9cap-7f,
     0x1.37b004p-6f, 0.0f, 0x1.be96b8p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ae3a8p-5f, 0.0f, 0x1.e69384p-122f, 0x1.563604p-79f, 0.0f, 0.0f, 0.0f,
     0x1.1c40bp-90f, 0x1.123d84p-55f, 0.0f, 0.0f, 0.0f, 0x1.e1232cp-23f, 0.0f,
     0x1.bea64ap-67f, 0.0f, 0x1.939beep-15f, 0x1.da9956p-45f, 0x1.a37278p-26f,
     0x1.46b566p-30f, 0.0f, 0.0f, 0.0f, 0x1.a906fcp-99f, 0.0f, 0x1.b70932p-78f,
     0x1.fdadaep-105f, 0.0f, 0.0f, 0.0f, 0x1.2db24ap-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.83adcap-15f, 0x1.50cf48p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34570ap-29f, 0.0f, 0.0f, 0x1.f7483ep-47f, 0.0f, 0x1.1abc18p-92f,
     0x1.7b8feep-86f, 0.0f, 0x1.999bfp-53f, 0.0f, 0.0f, 0.0f, 0x1.d1b274p-111f, 0.0f,
     0x1.3df214p-125f, 0.0f, 0x1.92214ep-54f, 0x1.88feb6p-16f, 0x1.b9ddb6p-60f,
     0x1.1f302ap-89f, 0x1.2a672ep-52f, 0x1.dfee4cp-53f, 0x1.7e9ce2p-61f,
     0x1.48d394p-104f, 0.0f, 0.0f, 0.0f, 0x1.5e6522p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8bc644p-42f, 0.0f, 0x1.c29ccap-18f, 0.0f, 0x1.e778e8p-21f, 0.0f, 0.0f,
     0x1.290218p-117f, 0x1.2de896p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.339dbcp-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.49aff8p-42f, 0x1.f33a7ep-94f, 0x1.905c46p-55f, 0.0f, 0.0f,
     0x1.8aa284p-46f, 0.0f, 0x1.29fdcep-100f, 0.0f, 0.0f, 0x1.cc73dep-7f,
     0x1.08449cp-68f, 0x1.a82056p-47f, 0x1.387b28p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11218cp-75f, 0x1.8c872cp-66f, 0.0f, 0x1.21dc06p-82f, 0x1.2847ap-75f,
     0x1.e85786p-71f, 0.0f, 0x1.767d5p-46f, 0x1.620284p-92f, 0.0f, 0.0f,
     0x1.e8a0c6p-60f, 0.0f, 0x1.b32062p-33f, 0x1.979994p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63bc64p-22f, 0.0f, 0.0f, 0x1.4c89c6p-61f, 0.0f, 0x1.95ea4ap-50f,
     0x1.f14b16p-55f, 0.0f, 0x1.9bfeccp-49f, 0x1.64b62ap-99f, 0.0f, 0.0f, 0.0f,
     0x1.d7a282p-87f, 0x1.a601aep-22f, 0.0f, 0x1.515d9ap-31f, 0x1.028bf4p-17f, 0.0f,
     0.0f, 0x1.d63214p-104f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.6e6a3ap-95f, 0.0f, 0x1.f8d6e8p-95f, 0x1.75e012p-119f,
     0x1.e2cb0cp-92f, 0.0f, 0x1.04b6b8p-32f, 0x1.82cedp-94f, 0.0f, 0.0f,
     0x1.a7381ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab3236p-65f,
     0x1.b2df4ap-94f, 0x1.23ef66p-26f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.1b55e4p-34f,
     0x1.206278p-49f, 0x1.7fabd8p-47f, 0x1.e1a43cp-23f, 0.0f, 0.0f, 0x1.64ac0cp-34f,
     0x1.007736p-53f, 0x1.04c352p-22f, 0.0f, 0x1.aafb8p-124f, 0.0f, 0.0f,
     0x1.3f0094p-101f, 0x1.1763a8p-53f, 0.0f, 0x1.9b8264p-116f, 0.0f,
     0x1.477eb6p-125f, 0x1.be429p-86f, 0x1.363c6p-124f, 0x1.994cccp-91f, 0.0f,
     0x1.b5a1dap-28f, 0x1.2595c6p-19f, 0.0f, 0.0f, 0.0f, 0x1.120f36p-87f,
     0x1.b4b2fcp-99f, 0.0f, 0x1.d9b492p-100f, 0x1.e294a8p-78f, 0.0f, 0.0f,
     0x1.1c04c4p-79f, 0x1.338198p-9f, 0x1.5669fep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7bd532p-121f, 0.0f, 0x1.6e48bp-114f, 0.0f, 0x1.fdea3cp-27f, 0x1.0410ap-89f,
     0.0f, 0x1.a4af44p-84f, 0x1.f7d38p-61f, 0x1.642b5p-47f, 0.0f, 0.0f,
     0x1.48b0f8p-12f, 0x1.72bp-111f, 0x1.e5fd2ap-12f, 0x1.2d29c6p-59f, 0.0f,
     0x1.af35a6p-121f, 0.0f, 0.0f, 0x1.1eb21cp-77f, 0x1.b33feep-9f, 0x1.f6d7bp-23f,
     0x1.f6e4fep-59f, 0.0f, 0x1.f064f2p-24f, 0.0f, 0x1.f7bdcap-7f, 0.0f,
     0x1.a25e82p-82f, 0x1.d7fa32p-104f, 0.0f, 0x1.d70666p-33f, 0x1.b08cfcp-56f,
     0x1.4c0c4ap-67f, 0.0f, 0x1.a5fe14p-91f, 0.0f, 0x1.293964p-13f, 0.0f,
     0x1.1ca4d2p-41f, 0x1.5942dep-94f, 0x1.f23f22p-15f, 0.0f, 0x1.d9162cp-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6eddb2p-66f, 0x1.262942p-90f, 0x1.dbd0e4p-91f,
     0x1.c5f8ep-93f, 0x1.b23916p-123f, 0.0f, 0x1.3eb55ep-48f, 0x1.ba0398p-7f,
     0x1.399b72p-60f, 0.0f, 0.0f, 0.0f, 0x1.a8ae54p-89f, 0x1.ac2d76p-3f,
     0x1.b7ca9cp-57f, 0x1.8002e6p-13f, 0.0f, 0.0f, 0x1.d95d3ep-100f, 0.0f, 0.0f,
     0x1.3827eep-8f, 0x1.f2149ap-18f, 0.0f, 0.0f, 0.0f, 0x1.90a656p-73f,
     0x1.fcdfc4p-121f, 0.0f, 0x1.e8fb18p-93f, 0.0f, 0x1.0f2a3ap-1f, 0x1.0a8e1p-36f,
     0.0f, 0.0f, 0x1.dc7d24p-44f, 0.0f, 0x1.71da84p-73f, 0x1.b2da92p-64f, 0.0f, 0.0f,
     0x1.7fc80ap-87f, 0x1.075068p-104f, 0x1.044cdp-68f, 0.0f, 0x1.47ef0cp-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.554002p-2f, 0x1.9dacf2p-15f, 0.0f,
     0x1.90a534p-44f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.b62756p-75f, 0x1.a98f1p-29f,
     0.0f, 0.0f, 0x1.bb8c8cp-91f, 0.0f, 0.0f, 0x1.784d66p-119f, 0.0f, 0x1.4324d6p-64f,
     0x1.1c05d8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d403ep-77f, 0x1.fedccp-70f, 0.0f,
     0.0f, 0x1.b423cep-114f, 0.0f, 0x1.510138p-23f, 0x1.9f3a2p-17f, 0.0f,
     0x1.66b664p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad44fep-84f, 0.0f, 0x1.d92c3p-74f,
     0x1.b52faep-11f, 0.0f, 0.0f, 0.0f, 0x1.ad18cp-23f, 0.0f, 0.0f, 0x1.4c94c4p-57f,
     0.0f, 0.0f, 0x1.4d8058p-38f, 0.0f, 0.0f, 0.0f, 0x1.510d22p-60f, 0.0f,
     0x1.fe6a1p-24f, 0.0f, 0x1.ee2786p-40f, 0x1.ef3aa4p-27f, 0x1.4f2e8cp-46f,
     0x1.412828p-50f, 0x1.2bd41p-3f, 0x1.9b9694p-37f, 0x1.5399e2p-88f,
     0x1.a37f6ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fe1f6p-75f, 0x1.cdcffap-121f, 0.0f,
     0x1.4cafc4p-27f, 0.0f, 0x1.5d86a4p-112f, 0.0f, 0x1.a1a2b8p-9f, 0.0f,
     0x1.25481ap-113f, 0x1.26d016p-4f, 0x1.9c1e86p-112f, 0.0f, 0.0f, 0x1.114568p-28f,
     0.0f, 0x1.1bcb06p-77f, 0.0f, 0.0f, 0x1.3eb3aep-109f, 0x1.1ce052p-42f,
     0x1.44d4a8p-91f, 0x1.ba4898p-41f, 0x1.8b3b6ep-91f, 0x1.f48a96p-32f, 0.0f, 0.0f,
     0x1.0fae36p-9f, 0.0f, 0x1.433e4ap-39f, 0x1.0f5e52p-112f, 0x1.dba9dcp-109f,
     0x1.ed127ap-22f, 0x1.b71f5ep-10f, 0x1.badad8p-29f, 0x1.3b611p-110f,
     0x1.6413aep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a395acp-41f, 0.0f,
     0x1.fe4548p-23f, 0x1.327762p-54f, 0x1.a0750ap-77f, 0x1.3a6846p-36f, 0.0f,
     0x1.976278p-33f, 0.0f, 0x1.2afc52p-31f, 0x1.03b4aep-27f, 0x1.04bf48p-49f,
     0x1.103b9ap-42f, 0.0f, 0.0f, 0x1.35f6d2p-97f, 0x1.4b74b4p-74f, 0x1.63265ep-4f,
     0x1.7a407p-96f, 0x1.d7d5aep-32f, 0x1.d159bap-44f, 0.0f, 0x1.bbe602p-47f,
     0x1.7b5828p-102f, 0.0f, 0x1.5721aep-96f, 0.0f, 0x1.5ba728p-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f1450cp-121f, 0.0f, 0.0f, 0x1.0afccep-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f99aaep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e11508p-47f, 0.0f, 0.0f,
     0x1.01cffep-84f, 0x1.37b218p-70f, 0.0f, 0x1.3d53ecp-49f, 0.0f, 0.0f,
     0x1.0e9a26p-30f, 0x1.3ad806p-114f, 0.0f, 0.0f, 0.0f, 0x1.53e5eap-28f,
     0x1.5cc848p-30f, 0x1.629df4p-86f, 0x1.378832p-26f, 0.0f, 0.0f, 0x1.3bfc08p-112f,
     0x1.e428aap-124f, 0.0f, 0.0f, 0x1.5a3c28p-120f, 0x1.f82b92p-21f,
     0x1.130aacp-125f, 0.0f, 0x1.41a996p-47f, 0.0f, 0x1.b54fap-105f, 0x1.c0281p-49f,
     0.0f, 0x1.dc9ffp-3f, 0x1.2a929ap-61f, 0x1.90237p-37f, 0x1.e47bfep-108f, 0.0f,
     0.0f, 0x1.6012fep-96f, 0x1.b2af8ap-33f, 0x1.49be4cp-8f, 0x1.7f6b5ep-9f,
     0x1.e0aec2p-106f, 0x1.90eb3ap-7f, 0x1.93812p-78f, 0x1.0f467p-21f, 0.0f,
     0x1.ddd9dap-120f, 0.0f, 0x1.249364p-14f, 0.0f, 0x1.5e5d28p-38f, 0.0f,
     0x1.53bbfep-37f, 0.0f, 0.0f, 0x1.54bd4ep-58f, 0.0f, 0x1.ede07ep-53f,
     0x1.549f76p-37f, 0.0f, 0x1.2646b4p-80f, 0.0f, 0x1.821d16p-63f, 0x1.cbdb96p-45f,
     0.0f, 0.0f, 0x1.3d5616p-83f, 0x1.2fb982p-21f, 0.0f, 0x1.d1935p-99f,
     0x1.5d7b3cp-25f, 0.0f, 0x1.40eeap-121f, 0.0f, 0.0f, 0x1.8b9cb6p-86f, 0.0f, 0.0f,
     0.0f, 0x1.123eaep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94dcfp-19f, 0x1.50b816p-16f,
     0x1.a58c8cp-83f, 0.0f, 0x1.00ec4ep-119f, 0.0f, 0x1.711eecp-95f, 0x1.be8998p-28f,
     0.0f, 0.0f, 0x1.a44c34p-17f, 0x1.2beb54p-86f, 0x1.2289bap-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.15409ep-94f, 0x1.656704p-89f, 0.0f, 0x1.55a744p-96f,
     0x1.c944ep-6f, 0x1.5f23e8p-20f, 0.0f, 0.0f, 0.0f, 0x1.7e0756p-110f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4342a2p-71f, 0x1.daf5aep-86f, 0.0f, 0.0f,
     0x1.321136p-32f, 0.0f, 0.0f, 0x1.e6ac2cp-46f, 0x1.bd7a1p-61f, 0x1.d65118p-40f,
     0.0f, 0.0f, 0x1.f1db64p-5f, 0.0f, 0x1.e8aac4p-54f, 0.0f, 0x1.caa7d8p-123f, 0.0f,
     0x1.fa3c5ep-79f, 0x1.3e92a8p-107f, 0x1.33d962p-10f, 0x1.afc6cap-117f,
     0x1.53be72p-47f, 0.0f, 0x1.6d9076p-20f, 0x1.9f376p-113f, 0x1.26188p-120f, 0.0f,
     0x1.ff7b84p-28f, 0.0f, 0.0f, 0x1.b2611ep-3f, 0x1.b5c57ap-112f, 0x1.a96fcp-92f,
     0.0f, 0x1.53e29ap-54f, 0x1.f2243ap-16f, 0.0f, 0.0f, 0.0f, 0x1.c9510ep-67f,
     0x1.e7972ap-118f, 0x1.d81314p-19f, 0.0f, 0x1.6f0ef2p-4f, 0x1.5d4cf2p-93f, 0.0f,
     0.0f, 0x1.d1da08p-17f, 0x1.3562dp-86f, 0x1.8ea3dap-103f, 0x1.ab176ap-118f,
     0x1.b07d92p-55f, 0.0f, 0x1.b3c478p-48f, 0.0f, 0.0f, 0x1.32cf6cp-19f, 0.0f, 0.0f,
     0x1.47e886p-46f, 0.0f, 0.0f, 0x1.380f62p-52f, 0.0f, 0x1.cce29cp-54f,
     0x1.a4d882p-117f, 0x1.a95438p-27f, 0.0f, 0.0f, 0x1.c43712p-35f, 0.0f, 0.0f,
     0x1.b92496p-38f, 0.0f, 0x1.8093dap-87f, 0.0f, 0x1.7a149ep-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.860aacp-36f, 0x1.9e7062p-62f, 0x1.dae0f4p-109f, 0x1.84fc4ap-53f, 0.0f,
     0.0f, 0.0f, 0x1.8e022cp-68f, 0.0f, 0.0f, 0x1.a93188p-20f, 0x1.afa28ap-124f, 0.0f,
     0x1.f7010cp-55f, 0x1.7ad862p-111f, 0.0f, 0x1.f0b99ap-9f, 0.0f, 0x1.f25c5ap-64f,
     0.0f, 0x1.af4038p-57f, 0.0f, 0x1.6a70c4p-61f, 0x1.751b7cp-57f, 0x1.4b20b2p-34f,
     0x1.6b3e66p-116f, 0x1.a158b4p-82f, 0.0f, 0x1.a4bedcp-57f, 0x1.83dee4p-109f,
     0x1.87ed68p-43f, 0x1.3fc8d4p-84f, 0x1.bc2d0ep-61f, 0.0f, 0.0f, 0x1.645364p-51f,
     0x1.557df8p-14f, 0x1.3afe84p-81f, 0x1.294b0ep-120f, 0.0f, 0x1.03c8bap-44f,
     0x1.80c7fp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9da8ep-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0df73cp-96f, 0x1.752b0cp-22f, 0.0f, 0x1.6afc32p-102f, 0.0f,
     0x1.fdf694p-14f, 0x1.4f128p-110f, 0x1.68a154p-68f, 0x1.2eb364p-59f,
     0x1.4798b2p-36f, 0.0f, 0x1.7523cap-27f, 0.0f, 0x1.e6d9dcp-102f, 0.0f, 0.0f,
     0x1.dbb0eap-50f, 0x1.b063cep-51f, 0.0f, 0x1.86bb46p-80f, 0x1.50dd7p-50f, 0.0f,
     0x1.736082p-75f, 0x1.1adcbep-8f, 0.0f, 0x1.df29b4p-41f, 0x1.49738cp-5f, 0.0f,
     0x1.a55e9p-110f, 0.0f, 0.0f, 0x1.78fcaep-117f, 0.0f, 0.0f, 0x1.b3390ap-69f,
     0x1.b183cap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e63786p-32f,
     0x1.6dbfbap-71f, 0.0f, 0.0f, 0x1.a5a46cp-94f, 0.0f, 0x1.08a42ep-96f, 0.0f, 0.0f,
     0x1.20083ep-109f, 0x1.f7ab64p-67f, 0.0f, 0.0f, 0.0f, 0x1.be10ap-81f, 0.0f, 0.0f,
     0x1.501a4ep-4f, 0.0f, 0x1.3be744p-42f, 0.0f, 0x1.1ad88p-78f, 0x1.2cffcap-4f,
     0x1.a06ae6p-87f, 0.0f, 0x1.94eed4p-115f, 0x1.b28dp-13f, 0x1.d32042p-45f,
     0x1.33ed1ep-17f, 0.0f, 0x1.8df6fcp-50f, 0.0f, 0.0f, 0.0f, 0x1.575484p-26f,
     0x1.d781c8p-111f, 0x1.88fdep-19f, 0.0f, 0x1.6eac68p-68f, 0.0f, 0x1.7dd69ap-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38155ep-126f, 0.0f, 0.0f,
     0.0f, 0x1.e90d5ap-118f, 0.0f, 0.0f, 0x1.96ca7ap-53f, 0.0f, 0.0f, 0x1.d878ecp-9f,
     0x1.617c44p-80f, 0.0f, 0.0f, 0.0f, 0x1.d481e4p-64f, 0.0f, 0.0f, 0.0f,
     0x1.d303fcp-54f, 0x1.19312cp-59f, 0.0f, 0x1.850a64p-91f, 0x1.e542cep-48f, 0.0f,
     0.0f, 0x1.c46d3p-40f, 0x1.5e4e9p-78f, 0x1.0f37dep-85f, 0x1.8e8892p-28f,
     0x1.e2c66ap-91f, 0x1.73c638p-1f, 0.0f, 0.0f, 0x1.b687aap-75f, 0x1.faff1ap-106f,
     0x1.0df346p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee8398p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.33060ap-2f, 0.0f, 0x1.f5fffcp-30f, 0x1.401f6cp-75f, 0.0f,
     0x1.b261fcp-9f, 0.0f, 0.0f, 0.0f, 0x1.7f8ce4p-75f, 0x1.8bb9cap-36f, 0.0f,
     0x1.a60a48p-97f, 0.0f, 0.0f, 0x1.f6ec82p-69f, 0x1.2d54aep-46f, 0.0f, 0.0f, 0.0f,
     0x1.f4b132p-50f, 0x1.576942p-48f, 0x1.84ebb2p-2f, 0x1.abdacap-123f,
     0x1.7e0184p-54f, 0x1.161198p-38f, 0x1.f13484p-10f, 0x1.726806p-101f,
     0x1.c106d8p-80f, 0x1.868006p-45f, 0.0f, 0.0f, 0x1.d26fb8p-31f, 0x1.245b6cp-86f,
     0x1.8c93dap-83f, 0.0f, 0.0f, 0x1.084a8ap-81f, 0.0f, 0x1.bf437ep-45f,
     0x1.bf9cb6p-71f, 0.0f, 0.0f, 0.0f, 0x1.ab4d98p-19f, 0x1.a294aep-66f,
     0x1.ede7fp-22f, 0.0f, 0.0f, 0.0f, 0x1.c06de4p-48f, 0.0f, 0x1.893ebap-3f,
     0x1.6d52eap-89f, 0x1.3bd306p-13f, 0.0f, 0.0f, 0x1.8dd664p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d4eaap-92f, 0x1.e39cap-30f, 0x1.f04a6ep-35f, 0.0f, 0.0f,
     0.0f, 0x1.1b0b06p-101f, 0.0f, 0x1.5e8156p-42f, 0x1.528cecp-103f, 0.0f,
     0x1.080dfap-115f, 0.0f, 0.0f, 0.0f, 0x1.5338f4p-26f, 0x1.cfb7aap-45f, 0.0f,
     0x1.d2cf1p-67f, 0.0f, 0.0f, 0.0f, 0x1.d92276p-92f, 0.0f, 0x1.880922p-20f, 0.0f,
     0.0f, 0x1.e217eap-56f, 0.0f, 0x1.f859eep-104f, 0.0f, 0.0f, 0.0f,
     0x1.892158p-100f, 0x1.574adep-121f, 0.0f, 0x1.1655cp-78f, 0.0f, 0x1.2700d6p-87f,
     0x1.4aff3ep-77f, 0x1.142da2p-111f, 0x1.0596cep-97f, 0.0f, 0x1.df6066p-51f, 0.0f,
     0x1.b536dap-124f, 0x1.27ac88p-57f, 0.0f, 0x1.988e54p-116f, 0.0f, 0.0f, 0.0f,
     0x1.dec904p-77f, 0x1.60629p-101f, 0.0f, 0.0f, 0.0f, 0x1.3b431ep-76f,
     0x1.2940c4p-86f, 0.0f, 0x1.ae35c6p-68f, 0.0f, 0.0f, 0x1.919506p-124f, 0.0f,
     0x1.4203b4p-16f, 0x1.148ebap-55f, 0.0f, 0x1.06bc3ap-73f, 0x1.ddca0ap-53f, 0.0f,
     0.0f, 0x1.268342p-26f, 0x1.ca94c2p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d203ep-71f, 0.0f, 0x1.644cdp-61f, 0x1.0c0fbp-45f, 0.0f, 0x1.a750fap-68f,
     0x1.073462p-38f, 0x1.0b345p-106f, 0.0f, 0x1.59ac62p-64f, 0x1.e2f4eap-56f,
     0x1.1df05ap-32f, 0x1.1a1fa6p-18f, 0x1.e4bc58p-32f, 0.0f, 0.0f, 0.0f,
     0x1.953acap-123f, 0.0f, 0x1.faa8eap-118f, 0.0f, 0.0f, 0x1.d02e5ap-42f, 0.0f,
     0.0f, 0.0f, 0x1.33a7c8p-55f, 0.0f, 0.0f, 0x1.c1d42ap-78f, 0x1.102914p-18f, 0.0f,
     0x1.4f476ap-64f, 0x1.3b996ap-78f, 0x1.72bd8p-59f, 0x1.9766d2p-80f, 0.0f, 0.0f,
     0x1.cfad24p-59f, 0x1.e78d94p-36f, 0.0f, 0x1.19b6a8p-31f, 0.0f, 0x1.14c354p-63f,
     0x1.fa55bap-11f, 0x1.6362ep-112f, 0x1.e0fc4cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f2bbap-47f, 0x1.dbbcd4p-65f, 0.0f, 0.0f, 0x1.f8bc2ap-101f, 0x1.e15faap-11f,
     0x1.c2576p-35f, 0x1.8c1efp-74f, 0x1.225388p-68f, 0x1.897fc8p-17f,
     0x1.26774ap-28f, 0x1.3ffb5ap-111f, 0.0f, 0.0f, 0.0f, 0x1.1fbe6ep-61f,
     0x1.d6c796p-68f, 0x1.b01758p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e50beep-39f,
     0x1.0c8944p-117f, 0x1.5280d6p-90f, 0x1.7bc96p-90f, 0x1.cd2bbap-1f, 0.0f,
     0x1.69f546p-97f, 0x1.f0fdc8p-24f, 0x1.3325eap-58f, 0x1.c9c3cep-98f, 0.0f,
     0x1.45c058p-70f, 0.0f, 0x1.3476a8p-55f, 0x1.3b5edap-7f, 0x1.3be9eap-25f,
     0x1.f6780cp-66f, 0.0f, 0x1.76a12ap-104f, 0.0f, 0.0f, 0x1.21fa98p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.253392p-94f, 0x1.8030acp-113f, 0.0f, 0.0f, 0x1.8c64aep-21f,
     0x1.c67c2ap-118f, 0x1.f1f718p-9f, 0x1.1a1028p-118f, 0x1.ba089cp-25f,
     0x1.c169ap-78f, 0.0f, 0x1.ef2312p-97f, 0.0f, 0.0f, 0x1.d2e1e2p-44f,
     0x1.65f8fp-74f, 0x1.5e57d6p-49f, 0x1.8d8be6p-1f, 0x1.b8c212p-75f,
     0x1.ee42dcp-88f, 0x1.4ef2b2p-58f, 0.0f, 0x1.6e334ep-22f, 0.0f, 0x1.21300cp-119f,
     0x1.940958p-70f, 0.0f, 0x1.3a04bp-10f, 0.0f, 0.0f, 0x1.05c7p-102f, 0.0f,
     0x1.24dd6cp-123f, 0x1.1c0c2ap-90f
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
            tmp2 = Sleef_finz_hypotf1_u35purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_hypotf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_hypotf1_u35purecfma bench acc %a\n", global_bench_acc);
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
