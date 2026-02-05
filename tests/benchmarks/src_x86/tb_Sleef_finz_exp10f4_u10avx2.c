/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f4_u10avx2128.c --function \
 *     Sleef_finz_exp10f4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.124c5ap-5f, 0.0f, 0x1.21c0a2p-5f, 0.0f, 0x1.1097bcp-48f, 0.0f,
     0x1.98aeep-26f, 0x1.a8d588p-36f, 0x1.7d3d46p-88f, 0x1.93c5dp-33f,
     0x1.06bc12p-83f, 0x1.e765aap-89f, 0x1.45d83ep-37f, 0x1.af281ep-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e068ap-55f, 0.0f, 0.0f, 0x1.2c9804p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.23162ap-23f, 0.0f, 0x1.cbd604p-70f, 0.0f, 0.0f, 0x1.daa9d8p-109f,
     0x1.5700f2p-43f, 0.0f, 0.0f, 0x1.57e25cp-44f, 0x1.329b4cp-118f, 0x1.df32fp-2f,
     0.0f, 0.0f, 0.0f, 0x1.c099a4p-125f, 0x1.66ec5p-75f, 0.0f, 0x1.341c98p-62f, 0.0f,
     0x1.97430ep-64f, 0.0f, 0.0f, 0x1.feaa02p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cab316p-89f, 0.0f, 0.0f, 0.0f, 0x1.8d2dd2p-39f, 0.0f, 0.0f, 0.0f,
     0x1.4d43ap-110f, 0x1.356c4ap-123f, 0x1.a8cb98p-54f, 0x1.632d82p-60f, 0.0f,
     0x1.0980ccp-29f, 0.0f, 0x1.ad8a32p-48f, 0.0f, 0x1.82b434p-37f, 0x1.718af2p-7f,
     0.0f, 0x1.c42128p-27f, 0.0f, 0.0f, 0x1.f79508p-75f, 0x1.b1a676p-72f,
     0x1.bc34bp-93f, 0x1.0fe5bcp-25f, 0x1.188c0ep-70f, 0x1.742fd2p-71f,
     0x1.2983d8p-89f, 0x1.1a32c4p-76f, 0x1.56b01ap-14f, 0.0f, 0x1.6ba816p-10f,
     0x1.5fbd36p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4358p-35f, 0x1.bcba74p-12f,
     0x1.302214p-5f, 0.0f, 0x1.778718p-115f, 0x1.cf016cp-118f, 0.0f, 0.0f,
     0x1.a32aa2p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d76e84p-123f, 0.0f, 0.0f,
     0x1.eaa16p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62522cp-91f, 0x1.0bd356p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e335p-81f, 0.0f, 0x1.cdf936p-72f, 0x1.0eaa98p-97f,
     0x1.f084eap-73f, 0.0f, 0x1.5d4aa2p-83f, 0x1.a58d94p-106f, 0.0f, 0.0f,
     0x1.60d688p-83f, 0x1.61a9e8p-45f, 0.0f, 0x1.0907ep-83f, 0.0f, 0.0f,
     0x1.24423p-59f, 0.0f, 0.0f, 0x1.37d05ap-120f, 0.0f, 0x1.4f2202p-76f,
     0x1.60469ap-94f, 0.0f, 0.0f, 0x1.e26caep-67f, 0x1.ba10e2p-55f, 0.0f,
     0x1.eeca1ap-16f, 0x1.63e4f8p-78f, 0.0f, 0x1.7f269ep-105f, 0.0f, 0x1.cfd7b8p-2f,
     0x1.f77d74p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9e5b2p-44f, 0.0f,
     0x1.a59044p-61f, 0.0f, 0.0f, 0x1.369a6p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c74498p-21f, 0x1.56c2dap-9f, 0.0f, 0.0f, 0x1.29c472p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9dcce4p-17f, 0x1.f22534p-3f, 0.0f, 0x1.09f3fep-90f, 0.0f, 0.0f,
     0x1.4bbc9p-79f, 0x1.a777eep-96f, 0x1.88c27ap-19f, 0.0f, 0.0f, 0x1.a2ff3p-71f,
     0x1.14d356p-66f, 0x1.9ca36cp-92f, 0x1.ae0d4cp-11f, 0.0f, 0x1.b3901cp-126f,
     0x1.291fe8p-16f, 0.0f, 0x1.635d1cp-10f, 0x1.e07ddp-65f, 0x1.839a6ep-1f,
     0x1.98db66p-97f, 0.0f, 0.0f, 0x1.150d94p-60f, 0x1.976b0ap-93f, 0x1.21bca8p-96f,
     0x1.b9e6b6p-109f, 0.0f, 0x1.a410c6p-107f, 0.0f, 0x1.a1fb4cp-14f, 0.0f,
     0x1.11edccp-110f, 0x1.311558p-36f, 0x1.18acc6p-5f, 0.0f, 0x1.45caccp-28f, 0.0f,
     0.0f, 0.0f, 0x1.14d49cp-32f, 0.0f, 0.0f, 0.0f, 0x1.36ca5ep-93f, 0.0f,
     0x1.d864a8p-87f, 0.0f, 0x1.4ed01p-44f, 0x1.ebc06ap-4f, 0.0f, 0x1.ecb94ap-20f,
     0.0f, 0x1.0b99fcp-53f, 0.0f, 0x1.7843c4p-123f, 0x1.c25ffp-2f, 0x1.7b40dcp-83f,
     0.0f, 0x1.6a7704p-106f, 0.0f, 0.0f, 0.0f, 0x1.970fcp-38f, 0x1.7df3eep-123f, 0.0f,
     0x1.fbfe8ap-68f, 0.0f, 0x1.8e20cap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2090dcp-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d64314p-38f, 0x1.bb8294p-45f, 0.0f, 0.0f,
     0.0f, 0x1.90e102p-124f, 0x1.b44a6ap-102f, 0x1.312642p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a77624p-36f, 0x1.cb5654p-67f, 0.0f, 0x1.7ea7dap-104f,
     0x1.d1a19ep-101f, 0x1.459b8ap-66f, 0x1.430e6ep-68f, 0x1.94431p-42f,
     0x1.f2b76ap-6f, 0.0f, 0x1.84f058p-4f, 0x1.f1293p-28f, 0x1.28e254p-96f,
     0x1.45b262p-6f, 0x1.88586ep-38f, 0x1.fbb25p-50f, 0x1.e72012p-8f, 0x1.4b4fbep-37f,
     0x1.482386p-63f, 0.0f, 0x1.875b5p-48f, 0.0f, 0x1.d4804cp-83f, 0.0f,
     0x1.696594p-65f, 0.0f, 0.0f, 0x1.fc1efep-110f, 0x1.acaa6ep-86f, 0.0f, 0.0f,
     0x1.f6d0fap-116f, 0x1.94f79p-11f, 0.0f, 0x1.3daabp-4f, 0.0f, 0x1.40853ep-105f,
     0.0f, 0.0f, 0.0f, 0x1.1928c2p-29f, 0.0f, 0x1.631896p-19f, 0x1.45125ep-43f, 0.0f,
     0.0f, 0x1.52385cp-6f, 0.0f, 0.0f, 0x1.785892p-66f, 0.0f, 0.0f, 0x1.7bc824p-48f,
     0x1.2f5122p-53f, 0x1.6d71e6p-82f, 0.0f, 0.0f, 0.0f, 0x1.ba25c2p-1f,
     0x1.b2d046p-98f, 0x1.f5d58ap-3f, 0x1.ae6804p-35f, 0.0f, 0.0f, 0.0f,
     0x1.3aec2p-58f, 0x1.5d767p-108f, 0x1.0d497ep-27f, 0x1.03e1ecp-69f, 0.0f, 0.0f,
     0x1.bff2f8p-32f, 0.0f, 0x1.ef2e76p-95f, 0.0f, 0.0f, 0x1.5ac5ep-91f,
     0x1.051e9p-101f, 0x1.3ea152p-126f, 0.0f, 0.0f, 0.0f, 0x1.0b9f1ap-19f, 0.0f, 0.0f,
     0x1.a65704p-29f, 0x1.93fdp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07b0e8p-95f,
     0x1.945ed6p-107f, 0x1.19eab8p-43f, 0x1.92b6fcp-90f, 0.0f, 0x1.832d3p-65f,
     0x1.157742p-84f, 0.0f, 0.0f, 0x1.6ebad8p-59f, 0x1.32333cp-102f, 0.0f,
     0x1.7ffa56p-49f, 0x1.a58fb2p-28f, 0.0f, 0x1.5f0d4cp-61f, 0x1.4181f8p-6f,
     0x1.854408p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65f5ap-25f, 0.0f, 0.0f, 0.0f,
     0x1.b347e2p-82f, 0x1.13f496p-26f, 0x1.f9e1c2p-25f, 0.0f, 0x1.10fc54p-108f,
     0x1.1ec75ep-45f, 0.0f, 0x1.d0cecep-54f, 0x1.156266p-87f, 0x1.05b94p-120f,
     0x1.bda0b2p-47f, 0x1.d6024p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd6f7p-72f,
     0x1.d91644p-24f, 0x1.26c1bap-38f, 0x1.790a0ep-8f, 0x1.10573p-32f,
     0x1.df8b78p-10f, 0x1.3a0d12p-99f, 0.0f, 0x1.d5ca88p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8c383ep-101f, 0.0f, 0.0f, 0x1.efcfe4p-30f, 0.0f, 0x1.1cde14p-40f, 0.0f,
     0x1.c0e69cp-18f, 0x1.eb2cecp-110f, 0x1.a5f986p-44f, 0x1.79f2p-55f, 0.0f,
     0x1.fc6468p-125f, 0.0f, 0x1.7d6cccp-83f, 0x1.e3a434p-22f, 0.0f, 0x1.c146bep-121f,
     0x1.0cdep-57f, 0x1.7ea1eep-11f, 0.0f, 0x1.2fa9e4p-114f, 0x1.ea6b1ap-17f, 0.0f,
     0.0f, 0x1.7cdd9cp-32f, 0x1.c8a26ap-88f, 0x1.93e5e2p-65f, 0.0f, 0.0f,
     0x1.33fa04p-98f, 0.0f, 0x1.4135aep-67f, 0.0f, 0x1.8fa55ap-103f, 0.0f, 0.0f, 0.0f,
     0x1.3f8bc4p-97f, 0x1.f69f3cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43ed12p-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed7c26p-25f, 0.0f, 0x1.23ff32p-98f, 0x1.9172b4p-9f,
     0.0f, 0.0f, 0.0f, 0x1.d9fddep-50f, 0x1.80660cp-32f, 0x1.1eaf1ap-2f, 0.0f, 0.0f,
     0.0f, 0x1.5f8758p-12f, 0.0f, 0.0f, 0x1.e016cp-124f, 0.0f, 0x1.bf1c8cp-54f,
     0x1.7daa7p-30f, 0x1.795034p-37f, 0x1.575eeep-61f, 0.0f, 0x1.cc2136p-66f,
     0x1.3ff9dp-110f, 0.0f, 0x1.2e81ecp-97f, 0x1.1a83cap-36f, 0x1.77a548p-50f,
     0x1.9c853cp-123f, 0x1.171f0ap-97f, 0.0f, 0.0f, 0x1.ab19f2p-104f, 0x1.b92e6ap-69f,
     0x1.4eda78p-28f, 0.0f, 0x1.00362ap-3f, 0.0f, 0x1.be923ap-42f, 0x1.15d68ep-70f,
     0x1.499cb2p-112f, 0.0f, 0x1.c5d32p-72f, 0x1.deb164p-52f, 0.0f, 0x1.9df414p-50f,
     0.0f, 0.0f, 0x1.9e46d8p-8f, 0.0f, 0x1.06c9f8p-66f, 0.0f, 0.0f, 0.0f,
     0x1.0b4bf8p-74f, 0.0f, 0.0f, 0x1.c86e6p-54f, 0.0f, 0x1.257d9p-120f,
     0x1.d793dp-41f, 0x1.1d1cp-116f, 0x1.c42e2cp-123f, 0.0f, 0x1.57d392p-5f,
     0x1.4a3f36p-92f, 0x1.a9a8b8p-115f, 0x1.14d716p-123f, 0.0f, 0.0f, 0.0f,
     0x1.42aaccp-73f, 0x1.0cd658p-117f, 0x1.d8ad8ep-51f, 0x1.6f2a2ap-25f, 0.0f,
     0x1.e432ap-81f, 0.0f, 0.0f, 0.0f, 0x1.7ea5aep-114f, 0.0f, 0.0f, 0x1.44a43cp-56f,
     0.0f, 0.0f, 0x1.7e32c8p-114f, 0.0f, 0x1.9e3676p-88f, 0.0f, 0x1.783becp-19f,
     0x1.f9991ap-45f, 0x1.10221ap-71f, 0.0f, 0x1.c3eb38p-101f, 0x1.99f748p-9f, 0.0f,
     0.0f, 0.0f, 0x1.835e5ap-53f, 0.0f, 0x1.78d898p-85f, 0x1p0f, 0x1.a928cep-14f,
     0x1.499deep-99f, 0x1.c57498p-29f, 0x1.fc5112p-89f, 0.0f, 0x1.12edc6p-69f,
     0x1.a57266p-1f, 0x1.ba4ecp-80f, 0x1.ff2f38p-26f, 0x1.7b5766p-33f, 0.0f,
     0x1.d375fcp-63f, 0x1.e7a944p-34f, 0.0f, 0x1.81671ep-58f, 0.0f, 0.0f,
     0x1.8f3022p-61f, 0x1.cd32ecp-29f, 0x1.bcd5bap-121f, 0.0f, 0x1.6dad88p-96f,
     0x1.37dd6ap-42f, 0.0f, 0x1.d95fep-125f, 0.0f, 0x1.fb47e4p-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a7323ep-51f, 0.0f, 0x1.997626p-32f, 0.0f, 0.0f, 0x1.9134bcp-124f,
     0x1.7029dep-15f, 0.0f, 0x1.4da9a8p-17f, 0x1.f71552p-47f, 0x1.2f793ap-55f, 0.0f,
     0x1.b9b75cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.763abcp-81f,
     0x1.f32a9cp-18f, 0x1.3edd48p-65f, 0x1.6e73aap-113f, 0x1.f5ce92p-12f,
     0x1.333c36p-48f, 0.0f, 0x1.b39162p-40f, 0x1.0c1ae6p-116f, 0x1.07184ap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.598d18p-36f, 0x1.18bd3ap-99f, 0x1.4f6d78p-23f,
     0x1.45f93ep-7f, 0x1.4d580cp-103f, 0.0f, 0x1.5816b2p-99f, 0x1.aafdb2p-118f,
     0x1.c59f1ep-36f, 0.0f, 0.0f, 0x1.3539bp-46f, 0x1.bfac0ep-34f, 0x1.93057ep-46f,
     0.0f, 0.0f, 0x1.11e7cap-118f, 0.0f, 0x1.b0b31cp-123f, 0x1.b994aap-26f,
     0x1.11f8eep-61f, 0x1.41c24cp-78f, 0x1.7e53d4p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.528862p-37f, 0.0f, 0.0f, 0x1.6ccd06p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b18d8cp-99f, 0.0f, 0x1.ca85f6p-28f, 0x1.e8fcf4p-22f, 0x1.89dacep-76f,
     0x1.9b83fep-15f, 0x1.13e262p-73f, 0x1.38b674p-100f, 0x1.6452c4p-29f,
     0x1.686918p-79f, 0.0f, 0x1.7d12b6p-28f, 0x1.29d66ap-84f, 0x1.32c3cp-5f, 0.0f,
     0.0f, 0x1.6277cep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.840e28p-99f, 0x1.1d7efap-94f,
     0.0f, 0x1.89447p-8f, 0x1p0f, 0x1.c79b78p-16f, 0.0f, 0.0f, 0x1.efa796p-47f,
     0x1.ad5d44p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c88eep-105f, 0x1.89f016p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dec1ep-81f, 0.0f, 0x1.84b6acp-74f, 0.0f,
     0x1.3a97cap-119f, 0x1.05128ap-42f, 0.0f, 0.0f, 0x1.6d6f3ap-72f, 0x1.0effdcp-73f,
     0x1.e47b34p-59f, 0.0f, 0x1.e4b2p-97f, 0x1.1b3808p-14f, 0x1.555a9cp-104f, 0.0f,
     0x1.b1fdc2p-64f, 0x1.5087a4p-81f, 0x1.ceaadcp-15f, 0.0f, 0.0f, 0x1.2017b4p-64f,
     0.0f, 0x1.3662b2p-56f, 0x1.1d08e2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a39d38p-44f, 0.0f, 0x1.e63786p-82f, 0.0f, 0.0f, 0x1.687af2p-112f,
     0x1.cba45p-22f, 0x1.a9171p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37b56p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2521ep-117f, 0.0f, 0x1.3b0452p-5f, 0.0f, 0.0f,
     0x1.d7f5d2p-32f, 0x1.7d4d28p-121f, 0.0f, 0.0f, 0x1.012c42p-4f, 0.0f, 0.0f,
     0x1.699b92p-101f, 0x1.f3a37cp-17f, 0x1.f8b428p-83f, 0x1.3992ap-73f,
     0x1.86456ap-12f, 0x1.a66d8ep-46f, 0x1.4d464p-30f, 0.0f, 0.0f, 0x1.344eaep-58f,
     0x1.c619c4p-123f, 0x1.24a772p-122f, 0.0f, 0x1.d51ad4p-124f, 0x1.5e73ecp-114f,
     0x1.7cc772p-35f, 0x1.a74e7ap-101f, 0.0f, 0x1.09ae9ap-16f, 0x1.0046dap-15f,
     0x1.90ef54p-46f, 0x1.b4036cp-91f, 0x1.44b582p-35f, 0.0f, 0x1.54ff94p-105f, 0.0f,
     0x1.126138p-50f, 0x1.1fe34cp-25f, 0.0f, 0x1.1f62acp-57f, 0.0f, 0x1.ceca94p-79f,
     0x1.182c32p-87f, 0x1.ff742ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38a9c8p-104f, 0.0f, 0x1.8ca758p-71f, 0.0f, 0x1.1e905ap-38f, 0.0f,
     0x1.f281e2p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa42d8p-13f,
     0x1.deee64p-54f, 0x1.63550cp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47fb86p-68f,
     0.0f, 0x1.c1afbep-30f, 0x1.e5f74ep-112f, 0.0f, 0x1.b4ff88p-64f, 0.0f, 0.0f,
     0x1.d5ab08p-4f, 0x1.5c0cbap-70f, 0.0f, 0x1.292c86p-68f, 0x1.793bf6p-65f, 0.0f,
     0x1.096cc4p-32f, 0.0f, 0x1.d7f94ep-3f, 0x1.23a102p-52f, 0.0f, 0x1.760ea8p-60f,
     0x1.65ec28p-102f, 0.0f, 0x1.855c24p-41f, 0.0f, 0x1.a1796ap-28f, 0x1.4d5998p-35f,
     0.0f, 0x1.58c9cep-42f, 0x1.c91e28p-75f, 0.0f, 0x1.8e37bap-96f, 0.0f, 0.0f, 0.0f,
     0x1.2ba2cap-51f, 0x1.454728p-101f, 0x1.e8f68ap-117f, 0.0f, 0.0f, 0x1.2f6cc2p-14f,
     0x1.0a6d26p-8f, 0x1.5fc794p-80f, 0x1.3df848p-35f, 0.0f, 0.0f, 0.0f,
     0x1.81c81ep-62f, 0.0f, 0x1.df89f2p-27f, 0x1.dd4942p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8bf8e6p-122f, 0.0f, 0.0f, 0.0f, 0x1.e9d222p-66f, 0.0f, 0x1.f33894p-99f,
     0x1.2dbcc4p-63f, 0x1.c1f734p-123f, 0x1.2edb86p-67f, 0x1.2d703cp-43f, 0.0f,
     0x1.cc47cep-66f, 0.0f, 0x1.a9e7b4p-10f, 0.0f, 0.0f, 0.0f, 0x1.5609c6p-22f,
     0x1.0cc8eep-24f, 0x1.9eda02p-102f, 0x1.d81b5p-61f, 0x1.cebf5p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2f17d4p-8f, 0x1.054814p-54f, 0.0f, 0x1.42d09p-79f,
     0x1.fa8e62p-73f, 0x1.d85396p-39f, 0.0f, 0.0f, 0x1.d38568p-80f, 0x1.261e4ep-1f,
     0.0f, 0x1.39b5ap-48f, 0.0f, 0x1.69bffep-52f, 0.0f, 0x1.4d7556p-72f,
     0x1.b1928ap-75f, 0x1.6a461ap-95f, 0x1.282d6ap-110f, 0.0f, 0.0f, 0.0f,
     0x1.f5e3fp-6f, 0x1.5fe2ep-10f, 0x1.64f496p-80f, 0x1.cf232ep-110f, 0.0f, 0.0f,
     0x1.f9de2ap-18f, 0x1.5a59c6p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ad264p-49f,
     0x1.8e855cp-122f, 0.0f, 0x1.081efep-87f, 0x1.ce62e6p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc9a4ep-103f, 0x1.45ae82p-58f, 0x1.fb2dc4p-82f, 0.0f, 0x1.a485cep-55f,
     0.0f, 0.0f, 0x1.ace454p-5f, 0.0f, 0x1.2f55cap-75f, 0.0f, 0x1.2ede8cp-102f, 0.0f,
     0x1.48ae2ep-14f, 0.0f, 0x1.e962e8p-46f, 0.0f, 0.0f, 0x1.483ab8p-22f, 0.0f,
     0x1.7d4a66p-92f, 0.0f, 0x1.d3f4aep-107f, 0.0f, 0.0f, 0x1.160cf6p-79f,
     0x1.c5c518p-58f, 0.0f, 0.0f, 0x1.54679p-42f, 0.0f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_exp10f4_u10avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_exp10f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp10f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
