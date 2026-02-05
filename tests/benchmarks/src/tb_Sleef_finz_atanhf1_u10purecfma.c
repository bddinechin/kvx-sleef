/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhf1_u10purecfma.c --function \
 *     Sleef_finz_atanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.001fecp-49f, 0x1.ea473ap-66f, 0.0f, 0x1.c88ff8p-5f, 0.0f, 0x1.c4a9b6p-123f,
     0x1.958892p-101f, 0x1.1fd1f6p-96f, 0.0f, 0.0f, 0x1.8b92dcp-119f, 0.0f,
     0x1.76e362p-97f, 0.0f, 0.0f, 0x1.4d54f8p-19f, 0x1.25c1d6p-6f, 0.0f,
     0x1.3c36d8p-58f, 0.0f, 0x1.052f84p-62f, 0.0f, 0x1.21cb48p-60f, 0x1.a65e06p-20f,
     0x1.5a106cp-84f, 0x1.58938cp-80f, 0.0f, 0.0f, 0x1.38836ep-103f, 0.0f,
     0x1.b3fee8p-13f, 0.0f, 0x1.93d9eap-107f, 0x1.af62fp-18f, 0x1.444a2cp-115f,
     0x1.73817cp-79f, 0.0f, 0.0f, 0x1.80c1c2p-84f, 0x1.e1bd04p-98f, 0x1.5cf7a8p-111f,
     0.0f, 0x1.9aef76p-52f, 0x1.bfa726p-41f, 0.0f, 0x1.17bafep-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.82af28p-27f, 0x1.6d4118p-123f, 0.0f, 0.0f, 0x1.c33c16p-125f,
     0.0f, 0x1.de7d2cp-78f, 0x1.411a1cp-89f, 0x1.babfc2p-59f, 0.0f, 0.0f,
     0x1.0d331ep-75f, 0x1.69a72cp-4f, 0.0f, 0.0f, 0x1.c5c1c4p-33f, 0.0f,
     0x1.a88926p-108f, 0.0f, 0x1.e29874p-115f, 0x1.8a01bcp-4f, 0.0f, 0x1.a2c438p-104f,
     0x1.f37e98p-35f, 0x1.99f368p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf43b8p-6f, 0.0f,
     0.0f, 0.0f, 0x1.31a1b4p-69f, 0x1.aff7bep-105f, 0x1.dd2896p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5ecf5cp-62f, 0.0f, 0x1.7fc9bep-115f, 0.0f, 0x1.43493ap-13f, 0.0f,
     0x1.37142ap-105f, 0.0f, 0.0f, 0x1.b778cap-4f, 0.0f, 0x1.03e98ep-85f, 0.0f,
     0x1.cd790cp-3f, 0x1.a3502p-66f, 0.0f, 0x1.44fe2ep-111f, 0x1.b82f4p-16f, 0.0f,
     0.0f, 0x1.f3a5b4p-77f, 0.0f, 0x1.b2a07ep-95f, 0.0f, 0x1.66d638p-90f,
     0x1.658fb6p-115f, 0x1.8d6b54p-30f, 0x1.ee8bcap-93f, 0.0f, 0x1.5c10fap-27f,
     0x1.ff797ap-16f, 0.0f, 0.0f, 0.0f, 0x1.29c18ap-43f, 0.0f, 0.0f, 0x1.dfe92cp-5f,
     0.0f, 0x1.82bc16p-24f, 0.0f, 0x1.3c471ap-24f, 0x1.a9629ap-110f, 0.0f,
     0x1.b0da24p-5f, 0.0f, 0x1.ec0eaep-51f, 0.0f, 0.0f, 0.0f, 0x1.4991c6p-50f, 0.0f,
     0.0f, 0.0f, 0x1.605d86p-91f, 0x1.77972ap-106f, 0.0f, 0.0f, 0.0f, 0x1.bd9d42p-17f,
     0x1.344feap-111f, 0x1.53b29ap-14f, 0.0f, 0.0f, 0x1.8836eep-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0731fcp-38f, 0x1.36d172p-87f, 0.0f, 0.0f, 0x1.fec3aap-99f, 0.0f, 0.0f,
     0.0f, 0x1.1ab0d8p-105f, 0.0f, 0.0f, 0.0f, 0x1.50ebd8p-87f, 0.0f,
     0x1.02d218p-120f, 0x1.4d556cp-28f, 0.0f, 0.0f, 0x1.63241p-126f, 0x1.0adce8p-103f,
     0.0f, 0.0f, 0x1.dd38a2p-75f, 0.0f, 0x1.92376p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.006714p-55f, 0x1.2292b2p-83f, 0.0f, 0x1.568fep-48f, 0x1.5b9676p-70f,
     0x1.58ef66p-2f, 0.0f, 0.0f, 0x1.b300dap-108f, 0.0f, 0.0f, 0.0f, 0x1.664c2p-97f,
     0.0f, 0.0f, 0x1.10dffep-125f, 0.0f, 0.0f, 0x1.a1b15ap-100f, 0x1.9a0b16p-89f,
     0.0f, 0x1.6174a6p-56f, 0x1.8eb318p-61f, 0.0f, 0.0f, 0x1.eee1bp-111f,
     0x1.c1f84ap-49f, 0x1.18e8fp-12f, 0x1.77903p-104f, 0x1.74e7bep-17f, 0.0f, 0.0f,
     0.0f, 0x1.bc75ccp-121f, 0.0f, 0x1.a89b62p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18343ap-71f, 0.0f, 0x1.551032p-119f, 0x1.281372p-76f, 0x1.b8b046p-100f,
     0x1.c98bbap-40f, 0.0f, 0x1.664f74p-96f, 0.0f, 0.0f, 0x1.17bda8p-72f,
     0x1.c8e11cp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d1868p-84f, 0x1.197a04p-29f, 0.0f, 0x1.c9f496p-33f, 0x1.5b258p-66f,
     0x1.5a9d0ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.688e4ep-52f, 0.0f,
     0.0f, 0x1.3dd2ep-19f, 0x1.412b0cp-123f, 0.0f, 0x1.56a518p-113f, 0x1.9a6d1cp-119f,
     0.0f, 0x1.7b1834p-11f, 0x1.010ceap-31f, 0x1.c757bap-121f, 0x1.ee8d8cp-120f,
     0x1p0f, 0.0f, 0x1.611548p-103f, 0.0f, 0x1.a3bde2p-18f, 0x1.2e6c4ep-45f, 0.0f,
     0.0f, 0x1.298a12p-63f, 0.0f, 0x1.dbf49ap-37f, 0x1.cb591p-74f, 0x1.021524p-109f,
     0x1.c0c124p-106f, 0.0f, 0x1.5ccd16p-40f, 0x1.2d98p-75f, 0.0f, 0x1.0167b4p-105f,
     0x1.875076p-50f, 0x1.8e662p-122f, 0.0f, 0x1.821b62p-81f, 0x1.dff684p-76f, 0.0f,
     0x1.6c9d6ep-36f, 0x1.dd584cp-105f, 0x1.bcb454p-110f, 0.0f, 0x1.7c69eap-94f,
     0x1.b1f3bep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.017ac8p-89f, 0x1.f0766p-3f, 0.0f, 0x1.f83368p-44f, 0.0f, 0.0f,
     0x1.e1f498p-77f, 0x1.e04742p-76f, 0x1.a34c64p-80f, 0.0f, 0.0f, 0x1.f8343ap-34f,
     0x1.3656d4p-75f, 0x1.85d8dap-27f, 0.0f, 0x1.a59586p-123f, 0.0f, 0x1.975f18p-61f,
     0.0f, 0.0f, 0x1.5d5b3cp-4f, 0x1.0f234ep-42f, 0x1.341204p-18f, 0x1.6f5fdp-111f,
     0.0f, 0.0f, 0x1.266a6cp-54f, 0.0f, 0x1.e7891cp-7f, 0x1.e502c2p-108f,
     0x1.6eab48p-50f, 0.0f, 0.0f, 0x1.3d31fcp-54f, 0x1.7534d2p-98f, 0x1.229036p-21f,
     0.0f, 0.0f, 0x1.86b0b6p-15f, 0.0f, 0.0f, 0.0f, 0x1.5252aep-7f, 0x1.5842e8p-35f,
     0.0f, 0.0f, 0x1.4ce138p-46f, 0.0f, 0.0f, 0.0f, 0x1.996f44p-8f, 0x1.ea4fd2p-82f,
     0.0f, 0.0f, 0x1.182608p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5894a8p-29f,
     0.0f, 0x1.fcddd6p-93f, 0.0f, 0.0f, 0x1.a7aa88p-88f, 0.0f, 0x1.47c044p-77f,
     0x1.ee97c6p-126f, 0.0f, 0x1.3a78a8p-73f, 0.0f, 0x1.34c1dp-76f, 0x1.be894ap-76f,
     0x1.bb49ecp-74f, 0x1.c4648ep-10f, 0x1.1252d6p-116f, 0.0f, 0x1.ae39b4p-122f, 0.0f,
     0.0f, 0.0f, 0x1.029b5p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53a744p-61f, 0.0f,
     0x1.2ca716p-95f, 0.0f, 0x1.a6f072p-59f, 0x1.96e464p-9f, 0.0f, 0.0f, 0.0f,
     0x1.9f3726p-86f, 0x1.2903b8p-29f, 0.0f, 0x1.84f3p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.a58cdep-104f, 0.0f, 0x1.08caa6p-61f, 0.0f, 0x1.401e06p-119f,
     0.0f, 0x1.d56c44p-106f, 0.0f, 0.0f, 0.0f, 0x1.49d7bcp-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.564a42p-69f, 0x1.70ce58p-119f, 0.0f, 0.0f, 0x1.1be37ap-100f, 0.0f,
     0x1.de042ep-38f, 0.0f, 0.0f, 0x1.3d84f4p-82f, 0x1.572ef4p-79f, 0.0f,
     0x1.547218p-58f, 0x1.a49c4ap-94f, 0.0f, 0x1.604c3ep-16f, 0x1.1e55fcp-67f,
     0x1.ae7b18p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bb94p-107f, 0x1.7154b4p-42f,
     0.0f, 0x1.175546p-9f, 0.0f, 0x1.57e5a4p-28f, 0.0f, 0.0f, 0x1.960e26p-116f, 0.0f,
     0.0f, 0.0f, 0x1.fa21c8p-83f, 0x1.fed3c4p-35f, 0x1.2a50ccp-56f, 0x1.39dafcp-65f,
     0.0f, 0.0f, 0.0f, 0x1.90cd7cp-68f, 0.0f, 0x1.d95904p-51f, 0.0f, 0.0f,
     0x1.cc91fep-106f, 0x1.645acep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6941e8p-69f,
     0x1.f43dccp-91f, 0.0f, 0x1.debf92p-124f, 0.0f, 0x1.114794p-72f, 0.0f,
     0x1.dd55fep-9f, 0.0f, 0.0f, 0x1.1ca2acp-50f, 0.0f, 0x1.1426f8p-16f,
     0x1.9fa266p-96f, 0x1.2a6fccp-106f, 0x1.001ca8p-91f, 0.0f, 0x1.8f383p-67f, 0.0f,
     0.0f, 0x1.d6b41p-58f, 0x1.47b45p-4f, 0x1.00b47p-52f, 0.0f, 0.0f, 0x1.f26966p-99f,
     0.0f, 0.0f, 0x1.ddc40cp-7f, 0x1.33befap-28f, 0.0f, 0.0f, 0x1.c23cap-112f, 0.0f,
     0x1.102d2ap-43f, 0x1.bb3854p-98f, 0x1.d45302p-79f, 0.0f, 0.0f, 0.0f,
     0x1.c08a5p-102f, 0.0f, 0x1.bd5576p-9f, 0x1.8d73fep-98f, 0x1.a75af8p-86f, 0.0f,
     0.0f, 0x1.4fbb94p-6f, 0.0f, 0x1.fb6a12p-60f, 0.0f, 0x1.e0bdfcp-117f, 0.0f, 0.0f,
     0x1.603edcp-21f, 0.0f, 0x1.6152bap-66f, 0.0f, 0.0f, 0.0f, 0x1.5e2b28p-46f, 0.0f,
     0x1.c575cep-2f, 0.0f, 0x1.736e06p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.632d4ep-22f, 0x1.67d1fcp-69f, 0.0f, 0.0f, 0x1.0a9b38p-17f, 0x1.d13b12p-3f,
     0.0f, 0x1.a41f8cp-117f, 0x1.007a78p-40f, 0x1.7ee8eep-56f, 0x1.72999ap-29f, 0.0f,
     0x1.9ca1f4p-58f, 0.0f, 0x1.affd42p-97f, 0.0f, 0x1.29844ep-3f, 0.0f,
     0x1.abe844p-3f, 0.0f, 0.0f, 0x1.539186p-78f, 0.0f, 0.0f, 0x1.b32188p-78f,
     0x1.f56246p-68f, 0x1.ba6f72p-96f, 0.0f, 0.0f, 0.0f, 0x1.b0d9b6p-20f,
     0x1.ab945ep-84f, 0x1.7a818ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.688d36p-20f,
     0.0f, 0x1.a44962p-10f, 0x1.cc9c76p-58f, 0x1.2becd2p-95f, 0x1.32c71p-96f,
     0x1.fc59c2p-23f, 0.0f, 0x1.635276p-32f, 0.0f, 0x1.809288p-89f, 0.0f, 0.0f,
     0x1.9b728ep-24f, 0x1.30ed48p-23f, 0.0f, 0x1.ec201ep-32f, 0.0f, 0.0f, 0.0f,
     0x1.2a196ep-78f, 0.0f, 0x1.50e84ap-6f, 0x1.e9dc8ep-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.185e1p-103f, 0x1.f02beep-88f, 0x1.3cc38p-14f, 0x1.3a9bb8p-101f, 0.0f,
     0x1.da40b6p-11f, 0x1.a8bf18p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a28b2p-25f, 0.0f, 0x1.7af712p-68f, 0x1.8ced2cp-21f, 0x1.38e442p-34f, 0.0f,
     0x1.8dfb6cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a12c7cp-91f, 0.0f, 0.0f,
     0x1.debc62p-25f, 0x1.b5da96p-107f, 0.0f, 0x1.9c3acp-11f, 0x1.ec47aep-50f, 0.0f,
     0x1.d974dep-35f, 0x1.96b238p-107f, 0x1.ffc206p-81f, 0.0f, 0x1.43c11cp-7f, 0x1p0f,
     0.0f, 0.0f, 0x1.7bb95p-49f, 0x1.b89372p-122f, 0x1.757a56p-101f, 0x1.afa382p-2f,
     0.0f, 0x1.14a56p-8f, 0x1.67d222p-17f, 0x1.df1d7cp-44f, 0.0f, 0.0f,
     0x1.3f5dfap-113f, 0x1.3a5112p-59f, 0.0f, 0.0f, 0x1.1c427cp-106f, 0x1.ebbec8p-18f,
     0.0f, 0.0f, 0.0f, 0x1.a2a2bcp-10f, 0.0f, 0x1.55fac8p-28f, 0x1.23efbap-80f,
     0x1.debf5ep-52f, 0x1.5cc41ap-61f, 0x1.c4afbp-17f, 0x1.45a918p-47f,
     0x1.eed4aap-50f, 0x1.3aa804p-12f, 0.0f, 0.0f, 0x1.82a0fp-5f, 0x1.7aeeeep-83f,
     0x1.dcc7e2p-45f, 0.0f, 0.0f, 0.0f, 0x1.6b6fbcp-73f, 0.0f, 0.0f, 0x1.2df176p-24f,
     0x1.f22622p-59f, 0.0f, 0x1.3bd408p-56f, 0.0f, 0x1.e415cap-88f, 0x1.7693c2p-79f,
     0.0f, 0.0f, 0x1.611a38p-76f, 0x1.6dabb2p-68f, 0x1.f146a2p-115f, 0.0f, 0.0f, 0.0f,
     0x1.fff412p-1f, 0.0f, 0.0f, 0.0f, 0x1.4ea218p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0c0fap-119f, 0.0f, 0.0f, 0x1.f36758p-113f, 0.0f, 0.0f, 0.0f,
     0x1.0a451ep-62f, 0x1.83e32p-49f, 0x1.e1d5bcp-60f, 0.0f, 0.0f, 0x1.a289eap-71f,
     0x1.c09c2ep-30f, 0.0f, 0x1.08668cp-125f, 0x1.bc711ap-22f, 0.0f, 0x1.7eaa48p-37f,
     0x1.00516ep-45f, 0x1.280ad6p-94f, 0.0f, 0x1.096b74p-62f, 0.0f, 0.0f,
     0x1.997224p-46f, 0x1.baa6eap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fff9c2p-14f,
     0x1.dcd7aap-106f, 0.0f, 0x1.d010d4p-124f, 0x1.c49ea8p-11f, 0.0f, 0x1.960192p-88f,
     0x1.735fa4p-17f, 0.0f, 0x1.a80f2cp-93f, 0.0f, 0x1.b3c63p-10f, 0x1.eb306cp-41f,
     0.0f, 0x1.b9e41p-118f, 0.0f, 0.0f, 0x1.5f1d14p-87f, 0.0f, 0.0f, 0.0f,
     0x1.63308cp-26f, 0.0f, 0x1.9c31e4p-39f, 0.0f, 0x1.9a689ep-41f, 0x1.80c96p-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c13dcap-19f, 0x1.dfb3e6p-23f, 0.0f,
     0x1.0ae9d8p-124f, 0x1.3b5a4p-63f, 0.0f, 0x1.0edb2ep-19f, 0x1.18d194p-81f, 0.0f,
     0x1.e5c546p-29f, 0x1.83973ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ad396p-93f,
     0x1.2b882cp-93f, 0x1.36cfdap-70f, 0.0f, 0.0f, 0.0f, 0x1.73d6dcp-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0fdf78p-4f, 0x1.5faa46p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85a204p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62f1d8p-30f, 0x1.609406p-5f, 0.0f,
     0x1.e40a54p-60f, 0x1.829e3cp-36f, 0x1.573a7p-74f, 0x1.8b2a66p-63f, 0.0f,
     0x1.4722bp-9f, 0.0f, 0.0f, 0x1.c645aep-100f, 0.0f, 0x1.ef2492p-103f, 0.0f, 0.0f,
     0.0f, 0x1.ba0baep-11f, 0x1.4d9088p-34f, 0.0f, 0x1.fa6178p-59f, 0x1p0f,
     0x1.29e368p-112f, 0.0f, 0.0f, 0.0f, 0x1.f1600ep-124f, 0x1.3fe81p-23f,
     0x1.6a6888p-92f, 0.0f, 0x1.e93f72p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2179ecp-27f, 0x1.0b4ec4p-103f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.e07424p-48f,
     0.0f, 0.0f, 0x1.e79d2ep-47f, 0.0f, 0x1.2e140ep-98f, 0.0f, 0x1.49de46p-82f, 0.0f,
     0.0f, 0x1.fb1c12p-118f, 0.0f, 0.0f, 0x1.13ae48p-17f, 0.0f, 0.0f, 0.0f,
     0x1.a99a96p-91f, 0.0f, 0.0f, 0x1.f757eap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e38e42p-106f, 0.0f, 0x1.070b32p-54f, 0x1.4ff6fp-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.10a652p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfe984p-64f, 0x1.c7e49p-47f, 0x1.730bc8p-86f, 0x1.7254eep-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2b836p-121f, 0x1.37b66p-45f, 0.0f, 0.0f, 0.0f,
     0x1.774366p-19f, 0x1.88c892p-31f, 0.0f, 0.0f, 0.0f, 0x1.8660f8p-5f, 0.0f,
     0x1.15fa68p-88f, 0x1.e42c9p-91f, 0x1.2690bp-36f, 0x1.acb046p-62f, 0.0f,
     0x1.f79f1p-122f, 0.0f, 0.0f, 0x1.4efe5ap-87f, 0.0f, 0x1.67df36p-34f, 0.0f,
     0x1.cafbe2p-81f, 0x1.84b0b2p-38f, 0.0f, 0x1.b97d96p-123f, 0x1.c4eed8p-13f, 0.0f,
     0x1.1b8f8ep-51f, 0x1.9bd4f8p-44f, 0.0f, 0.0f, 0.0f, 0x1.c44fbap-122f,
     0x1.f35742p-65f, 0x1.2f1324p-41f, 0.0f, 0x1p0f, 0x1.f88f48p-120f,
     0x1.f93d2ap-66f, 0x1.771f1ap-113f, 0x1.bdf046p-25f, 0.0f, 0x1.19d2e2p-3f,
     0x1.fa8eb2p-53f, 0x1.4bbecep-79f, 0x1.881676p-31f, 0.0f, 0.0f, 0x1.e90e32p-10f,
     0.0f, 0.0f, 0x1.a58bcap-28f, 0.0f, 0.0f, 0x1.efab5ep-98f, 0x1.7a55cep-114f, 0.0f,
     0.0f, 0x1.a2bfbep-111f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_atanhf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_atanhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
