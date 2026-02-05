/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f1_u35purecfma.c --function \
 *     Sleef_log2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0223e8p-6f, 0x1.e1d24cp-44f, 0x1.d58768p-70f,
     0x1.f7dce4p-73f, 0.0f, 0x1.7b431ap-81f, 0.0f, 0x1.6d8664p-4f, 0.0f,
     0x1.bc9cd8p-120f, 0x1.af0784p-53f, 0x1.dda804p-98f, 0x1.c26eaep-25f, 0.0f,
     0x1.b4493ep-66f, 0x1.561efep-67f, 0.0f, 0.0f, 0x1.c02a34p-104f, 0.0f,
     0x1.985806p-99f, 0x1.3b8e28p-2f, 0x1.51acbap-73f, 0.0f, 0x1.c8e112p-77f, 0.0f,
     0x1.696b18p-69f, 0x1.51fbd2p-61f, 0x1.a37132p-66f, 0x1.fce996p-105f,
     0x1.3b30f8p-114f, 0x1.6ba76ap-101f, 0.0f, 0x1.71d94ep-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47fdeap-108f, 0.0f, 0x1.1689b6p-80f, 0.0f, 0x1.882cdap-26f,
     0x1.85e028p-84f, 0.0f, 0x1.2d2d6cp-70f, 0.0f, 0x1.316ddcp-6f, 0.0f, 0.0f, 0.0f,
     0x1.6af96cp-114f, 0.0f, 0x1.7c7826p-83f, 0x1.476bfp-103f, 0.0f, 0x1.5a5af6p-25f,
     0.0f, 0.0f, 0.0f, 0x1.53df2ap-35f, 0x1.dcef5ap-27f, 0x1.15a5b8p-20f, 0.0f, 0.0f,
     0x1.d1a462p-59f, 0x1.4e99d2p-43f, 0x1.01def2p-14f, 0.0f, 0x1.7090bap-45f,
     0x1.2da8bap-99f, 0.0f, 0.0f, 0x1.95c63p-54f, 0x1.0d0ba4p-7f, 0x1.4fcf8ep-12f,
     0.0f, 0.0f, 0x1.33ac76p-57f, 0x1.25ff3ap-58f, 0x1.2dfd26p-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f5b43ep-115f, 0.0f, 0.0f, 0x1.f16416p-77f, 0x1.5c98b8p-42f,
     0x1.9bd434p-124f, 0x1.605768p-99f, 0.0f, 0x1.1cfe86p-90f, 0x1.59c5cap-49f,
     0x1.2bbb76p-75f, 0.0f, 0x1.732934p-2f, 0.0f, 0.0f, 0x1.0d0c46p-46f,
     0x1.f35ffep-25f, 0.0f, 0x1.cf4da4p-117f, 0.0f, 0x1.b54ef2p-41f, 0x1.b75936p-44f,
     0.0f, 0x1.48bf88p-113f, 0x1.376e9ap-108f, 0.0f, 0x1.9688fap-32f, 0x1.5d218ep-75f,
     0x1.87a00cp-20f, 0.0f, 0x1.8d6374p-87f, 0.0f, 0x1.b2d24cp-21f, 0.0f,
     0x1.79d53ap-18f, 0.0f, 0x1.471a48p-53f, 0x1.6c2964p-109f, 0x1.6b8f0ep-33f, 0.0f,
     0x1.5da612p-41f, 0.0f, 0.0f, 0x1.b4a9dap-57f, 0x1.4f57dp-50f, 0.0f,
     0x1.e227c4p-26f, 0.0f, 0.0f, 0x1.d8022ap-3f, 0x1.6d23eap-76f, 0x1.d786cap-17f,
     0x1.37e928p-61f, 0.0f, 0.0f, 0x1.8daee8p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f8dd4p-94f, 0x1.936026p-28f, 0x1.9c9a52p-17f, 0.0f, 0.0f, 0x1.2b125p-97f,
     0x1.34b488p-13f, 0x1.40df08p-30f, 0x1.bf25eep-84f, 0.0f, 0.0f, 0.0f,
     0x1.0ea564p-42f, 0x1.9606eep-58f, 0x1.bac38ep-13f, 0x1.b76006p-91f, 0.0f,
     0x1.aa9634p-110f, 0.0f, 0x1.83fed6p-52f, 0x1.fdae8ep-48f, 0x1.04875ap-24f, 0.0f,
     0x1.6b051ap-118f, 0.0f, 0x1.c0aa0ap-36f, 0.0f, 0.0f, 0x1.002624p-37f, 0.0f, 0.0f,
     0x1.b1fdd2p-62f, 0x1.893b78p-35f, 0.0f, 0.0f, 0x1.1594cap-111f, 0x1.4c3fa4p-91f,
     0x1.a72834p-37f, 0.0f, 0x1.9fcd22p-57f, 0x1.9d6bbap-99f, 0x1.b591ecp-3f, 0.0f,
     0x1.630b3ep-72f, 0.0f, 0.0f, 0x1.232154p-123f, 0.0f, 0.0f, 0.0f, 0x1.d189bp-106f,
     0.0f, 0x1.262328p-41f, 0.0f, 0x1.b3b62cp-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0c1bep-1f, 0x1.efc548p-9f, 0.0f, 0x1.e9de9ap-94f, 0x1.aae332p-99f, 0.0f,
     0.0f, 0.0f, 0x1.cdef58p-86f, 0.0f, 0.0f, 0.0f, 0x1.60a918p-92f, 0.0f,
     0x1.9864f6p-50f, 0x1.4e9644p-82f, 0.0f, 0.0f, 0x1.69b764p-99f, 0.0f,
     0x1.112fbap-120f, 0.0f, 0.0f, 0.0f, 0x1.a98d6cp-57f, 0x1.1c0fecp-56f, 0.0f,
     0x1.645f22p-40f, 0.0f, 0.0f, 0x1.5312b4p-115f, 0x1.3d6b72p-48f, 0x1.144f32p-3f,
     0x1.6eaf86p-104f, 0.0f, 0x1.ca1924p-43f, 0.0f, 0x1.6b6016p-7f, 0x1.f4c382p-114f,
     0x1.e7c8acp-61f, 0x1.7bc31ep-71f, 0.0f, 0x1.666a1ep-54f, 0.0f, 0x1.3f15eep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.25d754p-60f, 0.0f, 0x1.f2f0f2p-58f, 0.0f,
     0x1.dcec54p-105f, 0x1.aea04p-56f, 0x1.be68ecp-102f, 0.0f, 0x1.d4bf34p-48f, 0.0f,
     0x1.bc70d8p-7f, 0.0f, 0x1.edf892p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ac7fep-63f,
     0x1.48a78ep-123f, 0x1.d7145cp-30f, 0x1.72286p-109f, 0.0f, 0.0f, 0x1.93b66cp-83f,
     0x1.398e94p-63f, 0.0f, 0x1.8cffe8p-28f, 0x1.b9fcbcp-104f, 0.0f, 0x1.cee4p-83f,
     0x1.9c76ep-19f, 0.0f, 0.0f, 0x1.6b7576p-55f, 0x1.cc4c06p-29f, 0x1.3b6792p-74f,
     0.0f, 0.0f, 0.0f, 0x1.3e5aep-42f, 0.0f, 0x1.929d5cp-36f, 0.0f, 0.0f,
     0x1.d15e24p-54f, 0.0f, 0.0f, 0x1.e98594p-76f, 0x1.0e6c34p-118f, 0.0f,
     0x1.d9dfdcp-20f, 0.0f, 0.0f, 0x1.ddceb6p-71f, 0.0f, 0.0f, 0.0f, 0x1.2f4924p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.629e76p-97f, 0x1.787aecp-31f, 0.0f,
     0x1.a12e6ep-79f, 0.0f, 0.0f, 0x1.4d2386p-100f, 0.0f, 0x1.e05e82p-107f, 0.0f,
     0.0f, 0.0f, 0x1.f92392p-49f, 0x1.7c8392p-103f, 0.0f, 0x1.45bed8p-51f,
     0x1.79a998p-8f, 0.0f, 0.0f, 0x1.7c5226p-103f, 0.0f, 0.0f, 0x1.b2791ap-82f, 0.0f,
     0x1.3dbe18p-25f, 0.0f, 0x1.9c3d62p-107f, 0.0f, 0x1.8f4a82p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9b335cp-43f, 0x1.4669bap-3f, 0.0f, 0.0f, 0x1.1d890ep-101f,
     0.0f, 0x1.ec2d46p-49f, 0x1.77b14p-7f, 0x1.cdd5fep-71f, 0x1.7542cp-116f, 0.0f,
     0.0f, 0.0f, 0x1.ed4a2ap-41f, 0.0f, 0.0f, 0x1.653adep-106f, 0.0f, 0x1.b43f6cp-18f,
     0.0f, 0x1.27b788p-81f, 0x1.1131ccp-62f, 0x1.5d4f14p-115f, 0.0f, 0x1.ded3f6p-45f,
     0x1.61522p-57f, 0.0f, 0.0f, 0x1.3a035cp-54f, 0.0f, 0x1.f37248p-37f,
     0x1.db0bfap-53f, 0.0f, 0.0f, 0x1.b4c844p-105f, 0.0f, 0.0f, 0x1.c155dcp-90f, 0.0f,
     0.0f, 0x1.138d9cp-101f, 0.0f, 0x1.a52194p-99f, 0.0f, 0x1.9e917ep-87f, 0.0f,
     0x1.2e604p-12f, 0.0f, 0x1.e0e43ep-74f, 0.0f, 0.0f, 0.0f, 0x1.ca7908p-40f,
     0x1.1a10d6p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c1e68p-58f,
     0x1.e55ebap-32f, 0.0f, 0x1.65b694p-21f, 0x1.70c966p-82f, 0.0f, 0x1.f4f56ep-54f,
     0.0f, 0x1.9b2bd6p-105f, 0.0f, 0x1.da04f2p-126f, 0x1.1a1604p-91f, 0x1.c195e4p-19f,
     0.0f, 0.0f, 0x1.59a3ep-32f, 0x1.c2107ep-75f, 0.0f, 0x1.2686cap-59f,
     0x1.74740ap-5f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.65e202p-60f, 0.0f, 0.0f,
     0.0f, 0x1.ec877p-29f, 0x1.36928p-123f, 0x1.917b5ap-98f, 0x1.02eb0cp-97f, 0.0f,
     0.0f, 0x1.7b0d7cp-65f, 0.0f, 0.0f, 0x1.a78df8p-34f, 0x1.ee1e6cp-106f, 0.0f, 0.0f,
     0x1.1ec9c6p-78f, 0x1.68d64cp-82f, 0.0f, 0.0f, 0.0f, 0x1.4df9e2p-121f,
     0x1.a811b8p-52f, 0x1.8e7928p-38f, 0x1.ab677p-113f, 0.0f, 0x1.5180e4p-38f,
     0x1.3c34ccp-29f, 0x1.171302p-124f, 0.0f, 0x1.b47f72p-9f, 0.0f, 0x1.be18d8p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b328p-56f, 0x1.82f54ap-31f, 0.0f, 0.0f,
     0x1.3a35ep-8f, 0.0f, 0x1.1b6964p-84f, 0.0f, 0x1.b12532p-48f, 0x1.f663b6p-101f,
     0.0f, 0x1.9982aap-32f, 0x1.89890ap-32f, 0x1.346a7ep-107f, 0.0f, 0x1.2043eep-27f,
     0.0f, 0x1.46b544p-37f, 0x1.7e5ea2p-16f, 0x1.5470b4p-85f, 0.0f, 0x1.51b0e8p-61f,
     0x1.b40232p-34f, 0x1.48bc6cp-24f, 0x1.7bfe4cp-87f, 0x1.e6d08ep-50f, 0.0f, 0.0f,
     0x1.260cfep-77f, 0.0f, 0x1.ced48p-47f, 0x1.a48242p-28f, 0x1.3d2a26p-38f, 0.0f,
     0x1.20ff26p-66f, 0.0f, 0.0f, 0x1.2a4302p-52f, 0x1.25f634p-74f, 0x1.8690bp-110f,
     0.0f, 0x1.55b2d2p-91f, 0.0f, 0.0f, 0x1.6e7e44p-21f, 0.0f, 0x1.8f57eap-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d4fdcp-67f, 0.0f, 0x1.10382p-52f, 0x1.3c2142p-49f,
     0.0f, 0x1.61ccecp-12f, 0x1.9fa762p-103f, 0.0f, 0x1.e2944p-59f, 0.0f, 0.0f,
     0x1.839d0ap-21f, 0x1.5a7efap-111f, 0.0f, 0x1.7b7b0cp-75f, 0.0f, 0x1.08949ap-121f,
     0x1.30425ap-75f, 0x1.a268aap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3c1f2p-73f,
     0x1.e9ca94p-2f, 0.0f, 0x1.6587c6p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1cff4p-83f, 0x1.30b76cp-3f, 0x1.340bb8p-11f, 0.0f, 0x1.f799cep-97f, 0.0f,
     0x1.ae1f98p-82f, 0x1.ba2eeep-53f, 0.0f, 0.0f, 0x1.02c468p-71f, 0x1.090e6p-82f,
     0.0f, 0x1.b00e96p-58f, 0x1.82d982p-117f, 0.0f, 0x1.09a91ep-86f, 0.0f, 0.0f, 0.0f,
     0x1.de0e3ep-22f, 0x1.bf576ap-74f, 0x1.b7c5cp-53f, 0x1.13582ep-90f, 0.0f, 0.0f,
     0x1.a76adp-23f, 0x1.1123a8p-57f, 0.0f, 0.0f, 0.0f, 0x1.f34812p-59f,
     0x1.87eddp-17f, 0.0f, 0x1.d265dap-47f, 0x1.400a0ap-72f, 0x1.a9753p-80f, 0.0f,
     0x1.990d88p-126f, 0x1.cc043ap-79f, 0x1.10d812p-84f, 0.0f, 0x1.490cdp-44f,
     0x1.db47f4p-55f, 0.0f, 0.0f, 0.0f, 0x1.39af4ep-73f, 0.0f, 0.0f, 0x1.7be818p-9f,
     0.0f, 0.0f, 0x1.716198p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba34c8p-2f, 0.0f,
     0x1.c1b44ep-97f, 0x1.e17e66p-56f, 0.0f, 0x1.5a761ep-115f, 0x1.424bp-39f,
     0x1.d7eaacp-40f, 0.0f, 0.0f, 0x1.2772p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c2aeep-38f, 0x1.a76af8p-80f, 0.0f, 0x1.73fdbep-25f, 0.0f, 0x1.e76538p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e5a22p-25f, 0x1.2d74aep-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.acd0dep-111f, 0.0f, 0.0f, 0x1.a5e698p-78f, 0x1.ef9248p-99f,
     0x1.063a68p-7f, 0x1.a3af62p-15f, 0.0f, 0x1.9aad64p-19f, 0x1.f0afe2p-104f,
     0x1.da4796p-85f, 0x1.f328cap-109f, 0x1.d2b4cep-2f, 0x1.6792e8p-90f,
     0x1.da014ep-62f, 0.0f, 0x1.deaff6p-40f, 0.0f, 0.0f, 0x1.8337fap-86f, 0.0f, 0.0f,
     0x1.b6f86cp-111f, 0.0f, 0.0f, 0.0f, 0x1.44eee8p-18f, 0x1.250b64p-79f, 0.0f,
     0x1.40c1b6p-1f, 0.0f, 0x1.7b3092p-72f, 0x1.27f5dp-47f, 0x1.445676p-119f,
     0x1.0dfae2p-4f, 0x1.6ef55ap-26f, 0.0f, 0x1.52eb78p-68f, 0.0f, 0x1.c65d0ep-62f,
     0x1.47648ep-113f, 0x1.ca73fcp-126f, 0x1.a62d04p-87f, 0.0f, 0x1.2bf19ap-31f, 0.0f,
     0x1.b47decp-51f, 0.0f, 0x1.a5dc0ep-49f, 0.0f, 0x1.599996p-64f, 0.0f, 0.0f, 0.0f,
     0x1.ca9d56p-56f, 0x1.2f00a2p-113f, 0x1.d65914p-45f, 0.0f, 0x1.b71c4ep-38f, 0.0f,
     0.0f, 0.0f, 0x1.afe22ep-93f, 0x1.61a4a2p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d8426p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a80774p-60f, 0.0f, 0.0f,
     0.0f, 0x1.83be8ap-75f, 0x1.dd263p-33f, 0x1.e37da2p-24f, 0x1.005cfcp-69f, 0.0f,
     0x1.7fcb0cp-72f, 0.0f, 0x1.5374c6p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81dafap-84f,
     0x1.f70732p-26f, 0x1p0f, 0.0f, 0x1.c5aaaep-22f, 0x1.fba596p-109f, 0x1.a57e9p-83f,
     0x1.bbeb04p-56f, 0x1.cfe6c4p-98f, 0x1.ff5818p-29f, 0x1.239daap-7f, 0.0f,
     0x1.a2f8e4p-87f, 0.0f, 0x1.8413fcp-50f, 0.0f, 0.0f, 0x1.49aec2p-9f,
     0x1.c9560ep-8f, 0x1.9f782ap-109f, 0.0f, 0.0f, 0x1.ef3766p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b7b4ecp-102f, 0.0f, 0x1.1e9f58p-111f, 0.0f, 0x1.23972ep-77f,
     0x1.f6642cp-117f, 0x1.910c0ap-88f, 0.0f, 0x1.1ecc06p-3f, 0.0f, 0x1p0f,
     0x1.71324ep-41f, 0.0f, 0x1.08cb64p-51f, 0x1.5576b2p-113f, 0x1.2dfc3ap-36f,
     0x1.dc3932p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de96aap-118f, 0x1.adc1b8p-82f, 0.0f,
     0.0f, 0.0f, 0x1.f08b2ep-98f, 0.0f, 0x1.8cd8dap-44f, 0x1.55a6fp-25f,
     0x1.36cb9ap-57f, 0.0f, 0x1.98efeap-107f, 0.0f, 0x1.5f4ed8p-86f, 0.0f, 0.0f,
     0x1.6a8d78p-87f, 0.0f, 0.0f, 0x1.8bac8cp-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34d74ep-65f, 0.0f, 0.0f, 0x1.01e416p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e50434p-83f, 0.0f, 0.0f, 0x1.3fdd6cp-8f, 0x1.263b96p-8f, 0.0f,
     0x1.f6728p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8aa4ep-37f,
     0x1.3e262ep-8f, 0.0f, 0x1.f4f884p-68f, 0.0f, 0.0f, 0x1.e7782cp-44f, 0.0f,
     0x1.bed8fcp-88f, 0x1.7d575ap-54f, 0.0f, 0x1.54a1bap-45f, 0x1.5877b8p-78f,
     0x1.21e06ap-19f, 0x1.019a7p-95f, 0x1.e48bc6p-78f, 0x1.af558ep-18f,
     0x1.c3589ap-2f, 0.0f, 0.0f, 0.0f, 0x1.642562p-101f, 0.0f, 0x1.b5cdb6p-80f, 0.0f,
     0x1.e9440cp-99f, 0.0f, 0.0f, 0.0f, 0x1.434084p-96f, 0x1.82b4d4p-3f,
     0x1.5bf744p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9201p-70f,
     0x1.b94d84p-37f, 0x1.0c5296p-50f, 0.0f, 0.0f, 0.0f, 0x1.61c36p-3f,
     0x1.e7faf4p-106f, 0.0f, 0x1.6e39a4p-61f, 0x1.96eb64p-63f, 0x1.929932p-102f,
     0x1.c169d4p-25f, 0.0f, 0.0f, 0x1.64af9ap-66f, 0.0f, 0x1.c214dep-92f,
     0x1.8a61a4p-95f, 0x1.8fc42ap-109f, 0.0f, 0x1.65378p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8afb2ap-42f, 0x1.75520ap-118f, 0.0f, 0x1.62c2b4p-111f, 0x1.57b4a8p-94f, 0.0f,
     0x1.8a1ebap-94f, 0.0f, 0x1.a0175ep-86f, 0x1.c1bf96p-109f, 0.0f, 0.0f,
     0x1.cfb1cep-88f, 0x1.b4957ap-77f, 0x1.802092p-75f, 0.0f, 0x1.d4f8bcp-120f, 0.0f,
     0x1.94b3dcp-37f, 0.0f, 0.0f, 0.0f, 0x1.635d84p-42f, 0.0f, 0.0f, 0x1.41a5f6p-31f,
     0x1.3c2af4p-93f, 0x1.813ee8p-105f, 0.0f, 0.0f, 0x1.a5bb82p-69f, 0x1.6d9adap-45f,
     0x1.4c1f8p-66f, 0.0f, 0.0f, 0.0f, 0x1.003db8p-53f, 0x1.9518ecp-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.862606p-104f, 0x1.c56d82p-26f, 0x1.c3ed1cp-19f, 0.0f, 0.0f,
     0x1.521eaep-119f, 0.0f, 0x1.2db718p-116f, 0x1.b9168p-7f, 0x1.0234d8p-91f,
     0x1.14b566p-38f, 0.0f, 0x1.885246p-30f, 0x1.1f212cp-106f, 0.0f, 0x1.91dff8p-112f,
     0.0f, 0.0f, 0.0f, 0x1.3f429p-86f, 0.0f, 0.0f, 0.0f, 0x1.2ac268p-48f, 0.0f, 0.0f,
     0x1.5984ep-93f, 0.0f, 0.0f, 0x1.d18322p-103f, 0x1.a438b8p-34f, 0.0f,
     0x1.c1f1d4p-68f, 0x1.96b98p-99f, 0x1.08a40ap-95f, 0x1.84bbaap-11f,
     0x1.dead58p-121f, 0x1.5df08ap-116f, 0x1.8f8956p-117f, 0.0f, 0x1.0c9978p-100f,
     0x1.ebde8ap-29f, 0.0f, 0x1.1f924ap-43f, 0.0f, 0x1.1735a8p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3d654ap-24f
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
            tmp1 = Sleef_log2f1_u35purecfma(tmp0);
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
    printf("Sleef_log2f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
