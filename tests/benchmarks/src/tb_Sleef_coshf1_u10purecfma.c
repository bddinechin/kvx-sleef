/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf1_u10purecfma.c --function \
 *     Sleef_coshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28ee2ap-125f, 0.0f, 0x1.7e8c56p-81f, 0.0f, 0.0f,
     0x1.3f508ap-108f, 0.0f, 0x1.6ac98ep-124f, 0.0f, 0x1.eabfc2p-76f, 0.0f,
     0x1.dca8eep-71f, 0.0f, 0x1.0afef2p-19f, 0.0f, 0.0f, 0x1.544d8ap-9f,
     0x1.7d189p-116f, 0x1.f41394p-49f, 0.0f, 0x1.bc180cp-18f, 0x1.adc56p-20f,
     0x1.2e7f06p-69f, 0.0f, 0.0f, 0.0f, 0x1.9d792p-116f, 0x1.2d2ec4p-99f, 0.0f, 0.0f,
     0.0f, 0x1.9720dep-106f, 0.0f, 0.0f, 0.0f, 0x1.3065bcp-79f, 0.0f, 0x1.fdf368p-6f,
     0x1.c6210cp-92f, 0x1.4a708p-111f, 0.0f, 0x1.1cf502p-22f, 0.0f, 0.0f,
     0x1.07392cp-111f, 0.0f, 0x1.d9c51p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.206238p-45f,
     0x1.0b1b74p-107f, 0x1.e013a8p-109f, 0.0f, 0x1.042346p-76f, 0x1.7a728p-87f, 0.0f,
     0x1.7217ap-110f, 0x1.66acfcp-122f, 0x1.379e98p-81f, 0.0f, 0.0f, 0x1.79746ap-21f,
     0x1.b02a9p-18f, 0.0f, 0x1.02cb94p-34f, 0.0f, 0x1.efb754p-60f, 0.0f, 0.0f,
     0x1.391fe2p-86f, 0x1.127bcp-23f, 0.0f, 0.0f, 0x1.da3632p-95f, 0x1.640d44p-59f,
     0.0f, 0.0f, 0.0f, 0x1.b9f5dep-3f, 0.0f, 0.0f, 0x1.b0132ap-68f, 0x1.9f9dfcp-12f,
     0.0f, 0.0f, 0x1.ef7ccap-22f, 0.0f, 0x1.ae1236p-67f, 0.0f, 0.0f, 0x1.6e7c44p-47f,
     0.0f, 0x1.ca0fbp-33f, 0.0f, 0x1.e074ep-42f, 0x1.ff1a9ep-65f, 0x1.8d725ep-117f,
     0x1.36096cp-66f, 0.0f, 0x1.d388fcp-29f, 0.0f, 0.0f, 0x1.48b962p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.779116p-31f, 0x1.634f0ep-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9b596p-50f, 0.0f, 0x1.32d32cp-39f, 0x1.380532p-76f, 0.0f, 0.0f, 0.0f,
     0x1.9cfeeap-72f, 0x1.84ece8p-83f, 0x1.6660e4p-109f, 0.0f, 0.0f, 0x1.e84b58p-105f,
     0.0f, 0.0f, 0.0f, 0x1.f0ae82p-10f, 0.0f, 0x1.b26578p-90f, 0.0f, 0x1.e340cap-53f,
     0.0f, 0.0f, 0x1.e9df1ep-116f, 0x1.04ac48p-39f, 0.0f, 0x1.603b14p-45f, 0.0f,
     0x1.ac8b5ep-42f, 0x1.7ace62p-67f, 0.0f, 0x1.8e97dap-12f, 0x1.ac45cap-106f,
     0x1.15c656p-6f, 0.0f, 0x1.819dc6p-5f, 0.0f, 0.0f, 0x1.ee2a46p-39f, 0.0f,
     0x1.9e3a2cp-76f, 0x1.9f9448p-54f, 0.0f, 0x1.8f61ccp-58f, 0.0f, 0.0f,
     0x1.614d28p-87f, 0.0f, 0x1.69b1b2p-15f, 0.0f, 0.0f, 0.0f, 0x1.a8796ap-74f, 0.0f,
     0x1.aed2fap-122f, 0x1.f5bcc2p-105f, 0x1.ac97d2p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.918b86p-37f, 0x1.ac3e68p-100f, 0x1.87baeep-62f, 0.0f, 0x1.caa0dp-107f,
     0x1.6207dcp-61f, 0.0f, 0x1.4d374cp-78f, 0x1.5bd0b2p-113f, 0x1.61e0e2p-14f, 0.0f,
     0.0f, 0.0f, 0x1.e251acp-19f, 0x1.2cfa98p-3f, 0x1.3d2884p-74f, 0.0f,
     0x1.a2e05ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0470d2p-82f, 0x1.077652p-126f,
     0.0f, 0x1.170df6p-80f, 0x1.722bbp-33f, 0.0f, 0.0f, 0x1.d68848p-73f,
     0x1.383582p-44f, 0.0f, 0.0f, 0x1.549d3ap-7f, 0.0f, 0.0f, 0x1.e5622ap-51f, 0.0f,
     0.0f, 0x1.feae52p-87f, 0x1.6b9c18p-72f, 0.0f, 0.0f, 0x1.0ef816p-116f,
     0x1.1def5ep-57f, 0.0f, 0x1.8cfb8p-42f, 0x1.0d2c06p-98f, 0.0f, 0x1.611a62p-124f,
     0.0f, 0.0f, 0x1.fc7ee8p-29f, 0.0f, 0.0f, 0.0f, 0x1.f6c71ep-114f, 0.0f, 0.0f,
     0.0f, 0x1.78522ap-20f, 0.0f, 0.0f, 0x1.7c402ep-84f, 0.0f, 0.0f, 0.0f,
     0x1.bacc46p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d251acp-101f, 0x1.46b496p-122f,
     0.0f, 0.0f, 0.0f, 0x1.e2cf1ap-39f, 0x1.6e7494p-83f, 0.0f, 0x1.3ed55ap-83f, 0.0f,
     0x1.9bc082p-4f, 0.0f, 0x1.fde9ap-119f, 0.0f, 0x1.d5cddap-30f, 0x1.edc4a8p-103f,
     0x1.71229cp-114f, 0.0f, 0x1.7d8654p-11f, 0.0f, 0.0f, 0x1.66c58ap-20f, 0.0f,
     0x1.e557e2p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac0258p-107f, 0.0f,
     0x1.595e78p-61f, 0.0f, 0.0f, 0x1.99a89p-80f, 0.0f, 0x1.a3d9bcp-64f,
     0x1.4dd982p-91f, 0.0f, 0x1.31ae08p-90f, 0x1.2b6bc6p-25f, 0.0f, 0x1.32ec7cp-28f,
     0.0f, 0x1.30405ep-101f, 0x1.0f06c8p-70f, 0x1.8bd426p-60f, 0x1.cfca4ep-90f,
     0x1.0fe334p-18f, 0.0f, 0.0f, 0x1.08fa0cp-99f, 0x1.b4ab8p-61f, 0x1.b13d38p-107f,
     0x1.72e06p-35f, 0x1.ef66c6p-37f, 0.0f, 0.0f, 0x1.b8c2bp-116f, 0x1.21ce88p-126f,
     0.0f, 0.0f, 0x1.52e066p-112f, 0.0f, 0.0f, 0x1.519534p-24f, 0x1.1e9ef8p-121f,
     0x1.3c052ep-33f, 0x1.c0ba06p-20f, 0.0f, 0.0f, 0.0f, 0x1.2e7622p-37f,
     0x1.49aaeap-106f, 0x1.215372p-52f, 0x1.bce9f6p-51f, 0x1.5296aep-102f, 0.0f, 0.0f,
     0x1.51122cp-113f, 0x1.8b0774p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ec96ep-68f, 0.0f,
     0.0f, 0x1.56752cp-126f, 0.0f, 0x1.026c66p-89f, 0.0f, 0.0f, 0x1.d4417ap-10f, 0.0f,
     0.0f, 0.0f, 0x1.450f7p-59f, 0x1.be4348p-17f, 0x1.d8b884p-27f, 0x1.fa2caep-78f,
     0x1.215a46p-86f, 0x1.b3afbep-84f, 0.0f, 0x1.0336a6p-27f, 0x1.ea6a1ap-32f, 0.0f,
     0x1.1e156ap-41f, 0.0f, 0.0f, 0x1.eabf24p-12f, 0x1.8e309ap-78f, 0x1.bb7e4cp-55f,
     0.0f, 0.0f, 0x1.341746p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.505eaap-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fbfe66p-113f, 0.0f, 0.0f, 0.0f, 0x1.ee8f8ep-53f, 0x1.713fbap-30f,
     0.0f, 0x1.6c0ff6p-46f, 0.0f, 0.0f, 0.0f, 0x1.7ea10ep-119f, 0x1.43ed28p-50f, 0.0f,
     0x1.65c6fp-88f, 0.0f, 0.0f, 0x1.ba5e36p-112f, 0x1.875786p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fbb244p-5f, 0x1.771c9cp-53f, 0x1.5871dp-8f, 0x1.cd6602p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e173c8p-105f, 0.0f, 0x1.5f5e08p-79f, 0x1.3b3efep-38f,
     0x1.0640fcp-74f, 0.0f, 0x1.ca583p-43f, 0.0f, 0.0f, 0.0f, 0x1.d9c686p-104f, 0.0f,
     0x1.aaa754p-53f, 0x1.838b78p-58f, 0.0f, 0x1.5ef5dap-28f, 0x1.2cf736p-116f, 0.0f,
     0x1.69816p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbb608p-97f, 0x1.e74602p-42f,
     0x1.966d4p-1f, 0.0f, 0x1.e510e6p-109f, 0x1.4d2dfap-109f, 0.0f, 0x1.150d2cp-93f,
     0.0f, 0x1.da61dep-27f, 0x1.19ba9ep-33f, 0x1.cb7ca6p-40f, 0x1.8df10ep-76f, 0.0f,
     0.0f, 0x1.4ef2d2p-63f, 0x1.4bb13ep-49f, 0x1.94838ep-121f, 0x1.07206ep-94f,
     0x1.734bdep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76f2f6p-37f,
     0.0f, 0x1.f2a0a2p-22f, 0x1.6adb2p-69f, 0x1.a0060ep-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e556fp-77f, 0x1.b082fcp-58f, 0.0f, 0.0f, 0x1.2e0c08p-74f,
     0x1.f01ef6p-125f, 0.0f, 0x1.7b2624p-1f, 0x1.cd105cp-29f, 0x1.c1ea34p-14f,
     0x1.e54206p-35f, 0.0f, 0.0f, 0x1.b3fccap-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1840b2p-18f, 0x1.2f9968p-95f, 0.0f, 0x1.7dbdf4p-90f, 0x1.1baa16p-5f,
     0x1.1c71d2p-73f, 0x1.36e61cp-61f, 0x1.028b0cp-89f, 0x1.5d3f72p-25f, 0.0f, 0.0f,
     0x1.4a38ecp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3cb02cp-14f,
     0x1.8ad2acp-8f, 0x1.9e3118p-42f, 0x1.025bdcp-106f, 0.0f, 0.0f, 0.0f,
     0x1.4a9a52p-103f, 0.0f, 0x1.445d36p-55f, 0.0f, 0.0f, 0x1.ca2246p-44f,
     0x1.1b18c2p-115f, 0.0f, 0x1.ccd3ap-60f, 0x1.914ec4p-17f, 0x1.b49fb8p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c72aaep-10f, 0.0f, 0.0f,
     0.0f, 0x1.3f1d62p-4f, 0.0f, 0.0f, 0.0f, 0x1.45ff18p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.945d0ep-12f, 0.0f, 0.0f, 0.0f, 0x1.df6dbep-122f, 0x1.4d53eep-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.931936p-40f, 0.0f, 0.0f, 0.0f, 0x1.b6628ep-105f,
     0x1.70458cp-78f, 0.0f, 0x1.3c81d6p-4f, 0x1.ba229p-20f, 0.0f, 0x1.2bd5e8p-122f,
     0.0f, 0x1.4d9124p-33f, 0.0f, 0x1.e399c2p-34f, 0.0f, 0x1.7f4c82p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.142d5cp-101f, 0.0f, 0x1.144518p-95f, 0.0f, 0x1.06c70ep-14f, 0.0f,
     0x1.7515ap-114f, 0x1.a0ec12p-100f, 0.0f, 0.0f, 0.0f, 0x1.f20be6p-104f,
     0x1.a490fap-85f, 0.0f, 0x1.e9a9b2p-124f, 0x1.f1cdap-9f, 0x1.54859p-89f, 0.0f,
     0.0f, 0x1.7540c4p-63f, 0.0f, 0x1.eede96p-122f, 0.0f, 0.0f, 0x1.dbacacp-111f,
     0.0f, 0.0f, 0x1.8a1deap-36f, 0.0f, 0x1.f8b65cp-62f, 0x1.a9cb62p-105f,
     0x1.b3db6p-19f, 0.0f, 0.0f, 0x1.a03c76p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d31888p-93f, 0x1.067bd6p-51f, 0x1.ad0566p-105f, 0x1.e7c6p-81f,
     0x1.2bbe1ep-125f, 0x1.09c89cp-47f, 0.0f, 0x1.9df07ep-31f, 0.0f, 0.0f,
     0x1.0da878p-1f, 0.0f, 0x1.88e1bep-104f, 0.0f, 0.0f, 0.0f, 0x1.b3dd32p-77f, 0.0f,
     0x1.b33bbp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d51a62p-52f, 0.0f, 0.0f,
     0x1.a4e69ep-64f, 0.0f, 0x1.054796p-10f, 0.0f, 0.0f, 0.0f, 0x1.99548p-74f, 0.0f,
     0x1.bd7156p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2868cp-26f, 0x1.67fa46p-100f,
     0x1.21cb8p-10f, 0x1.e5d584p-47f, 0x1.355baep-113f, 0.0f, 0x1.c4d32ap-55f, 0.0f,
     0x1.24847cp-1f, 0x1.2eb14ap-41f, 0x1.03efdcp-78f, 0x1.d40f76p-34f, 0.0f, 0.0f,
     0.0f, 0x1.b6a8aep-9f, 0.0f, 0x1.8b8cf6p-107f, 0x1.b49c1p-118f, 0x1.867d66p-29f,
     0x1.568e38p-79f, 0x1.849ef6p-84f, 0.0f, 0x1.5c7b5ap-125f, 0x1.de1d76p-17f, 0.0f,
     0.0f, 0x1.766b6ap-63f, 0.0f, 0x1.4a2348p-14f, 0.0f, 0.0f, 0.0f, 0x1.cae824p-21f,
     0x1.cff3c2p-23f, 0.0f, 0.0f, 0x1.33752ep-65f, 0x1.0b6caep-15f, 0x1.d64ee8p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3e36ap-84f, 0.0f,
     0x1.0fb47p-108f, 0.0f, 0x1.8aa09cp-115f, 0x1.9c3684p-87f, 0x1.5de014p-38f, 0.0f,
     0x1.3e93f4p-97f, 0x1.07be4ap-40f, 0x1.df66c6p-77f, 0.0f, 0x1.bccce8p-16f, 0.0f,
     0x1.9a96c8p-78f, 0.0f, 0.0f, 0x1.1aa322p-46f, 0.0f, 0x1.78ec2ap-19f,
     0x1.8cd244p-45f, 0.0f, 0.0f, 0.0f, 0x1.3d5d2ep-121f, 0x1.badda2p-1f,
     0x1.34b384p-122f, 0.0f, 0.0f, 0x1.5fa204p-38f, 0.0f, 0.0f, 0x1.3d970ep-109f,
     0.0f, 0x1.83d4bp-16f, 0.0f, 0x1.f57daep-102f, 0.0f, 0x1.75def8p-9f, 0.0f, 0.0f,
     0x1.f7a164p-65f, 0x1.f51a4ep-11f, 0x1.ab42b4p-90f, 0x1.8b95acp-24f,
     0x1.2789a2p-101f, 0.0f, 0x1.8d1a06p-52f, 0x1.8e5f2p-3f, 0x1.5315e2p-28f,
     0x1.fe8d5p-98f, 0x1.1d0348p-21f, 0.0f, 0.0f, 0.0f, 0x1.c67474p-54f, 0.0f,
     0x1.fe347p-113f, 0.0f, 0x1.fed138p-38f, 0x1.4ac1d4p-30f, 0x1.4f7d3cp-102f, 0.0f,
     0.0f, 0x1.9435a8p-38f, 0x1.8515ep-70f, 0x1.584f2cp-2f, 0x1.e2cf18p-122f, 0.0f,
     0.0f, 0.0f, 0x1.54a89ep-58f, 0.0f, 0.0f, 0.0f, 0x1.c11d88p-99f, 0x1.284b28p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc150ap-74f, 0.0f, 0x1.1a758ep-32f, 0.0f, 0.0f,
     0.0f, 0x1.fa417p-100f, 0.0f, 0.0f, 0.0f, 0x1.93c42cp-63f, 0x1.d76cdep-105f, 0.0f,
     0.0f, 0x1.d8696p-31f, 0.0f, 0x1.784282p-117f, 0.0f, 0.0f, 0x1.9397b8p-74f,
     0x1.8fef28p-64f, 0.0f, 0x1.915c84p-122f, 0x1.d933fp-107f, 0x1.6809c6p-87f, 0.0f,
     0.0f, 0.0f, 0x1.33e3b8p-39f, 0.0f, 0.0f, 0x1.3a7b08p-75f, 0x1.230f16p-59f,
     0x1.649c4ep-115f, 0x1.d2eaecp-69f, 0x1.4e26p-122f, 0.0f, 0x1.a8f18ep-81f,
     0x1.ebe6bap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a54fp-53f, 0.0f,
     0x1.34e58ep-59f, 0.0f, 0x1.7c2cap-62f, 0x1.6e125ap-78f, 0x1.8dc486p-10f, 0.0f,
     0.0f, 0x1.15c8dap-64f, 0x1.dc8614p-86f, 0.0f, 0.0f, 0.0f, 0x1.37153ap-45f, 0.0f,
     0x1.4b7098p-36f, 0x1.b3a59cp-18f, 0x1.711976p-34f, 0.0f, 0x1.caf786p-36f,
     0x1.7b459ap-98f, 0.0f, 0x1.2b40b2p-8f, 0x1.19bc0cp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9394b4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.984948p-63f, 0x1.876678p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6df2ep-35f, 0x1.7bae2cp-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f634f6p-103f, 0.0f, 0.0f,
     0x1.1ea232p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cfc8p-86f, 0.0f,
     0x1.1cf2e4p-11f, 0x1.a26f06p-50f, 0.0f, 0.0f, 0.0f, 0x1.e19686p-73f, 0.0f, 0.0f,
     0x1.1e5c1p-37f, 0x1.bc3fd6p-92f, 0x1.aa94a2p-26f, 0.0f, 0.0f, 0x1.15bf2ap-75f,
     0.0f, 0x1.4854c6p-95f, 0x1.47b4dep-31f, 0.0f, 0x1.11004ep-73f, 0x1.bf1ba6p-85f,
     0x1.c23094p-25f, 0x1.bf2222p-35f, 0x1.d67d9p-40f, 0x1.da947ep-76f, 0.0f, 0.0f,
     0x1.9621c4p-11f, 0x1.72247p-23f, 0.0f, 0x1.36c37p-57f, 0.0f, 0x1.afb172p-39f,
     0x1.768d88p-51f, 0.0f, 0.0f, 0x1.76ee1cp-52f, 0.0f, 0.0f, 0.0f, 0x1.83a894p-108f,
     0x1.92b4d6p-42f, 0x1.923a46p-61f, 0.0f, 0x1.2b9514p-30f, 0.0f, 0x1.fba9bep-29f,
     0.0f, 0x1.5ba50ap-21f, 0x1.820bf8p-54f, 0.0f, 0x1.32373ep-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.31e7a4p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7daa2p-110f, 0.0f, 0.0f,
     0x1.9681eep-43f, 0.0f, 0.0f, 0x1.466694p-106f, 0.0f, 0x1.44b474p-91f,
     0x1.0cf1a4p-15f, 0x1.2d516p-12f, 0x1.19f63ep-106f, 0.0f, 0.0f, 0.0f,
     0x1.f72af2p-84f, 0x1.9ebf9ap-6f, 0x1.f5cdd8p-52f, 0.0f, 0.0f, 0x1.d000d2p-5f,
     0.0f, 0x1.d736fep-83f, 0x1.6c8d62p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b07b7p-112f, 0x1.18413ep-39f, 0x1.1fa6f8p-112f, 0x1.44795ep-91f, 0.0f,
     0x1.933a9ep-126f
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
            tmp1 = Sleef_coshf1_u10purecfma(tmp0);
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
    printf("Sleef_coshf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
