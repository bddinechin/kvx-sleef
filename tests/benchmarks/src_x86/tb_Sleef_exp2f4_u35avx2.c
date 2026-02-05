/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f4_u35avx2128.c --function Sleef_exp2f4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.756d0ap-93f, 0.0f, 0x1.5db7e2p-89f, 0.0f, 0x1.93ec48p-45f, 0.0f,
     0x1.83c0bap-20f, 0.0f, 0x1.6c2b9ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b9ae4p-44f,
     0.0f, 0x1.d68c3ap-112f, 0.0f, 0.0f, 0x1.e55a4ap-45f, 0.0f, 0x1.4ef172p-73f,
     0x1.a58f1ap-108f, 0.0f, 0.0f, 0x1p0f, 0x1.47d71p-64f, 0x1.27663cp-51f,
     0x1.ead5a2p-6f, 0x1.56d60ap-45f, 0x1.c73a6ep-16f, 0.0f, 0x1.f7efbp-97f,
     0x1.0252cp-107f, 0x1.6ded1p-79f, 0x1.2b2d1ap-29f, 0.0f, 0x1.b939f6p-7f,
     0x1.667772p-122f, 0.0f, 0x1.668fbap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00914cp-75f,
     0x1.646bd4p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d9268p-13f, 0x1.72ef4ep-107f,
     0.0f, 0.0f, 0x1.02b3bap-103f, 0.0f, 0.0f, 0x1.5716e4p-115f, 0x1.13cd08p-125f,
     0x1.1b2882p-35f, 0.0f, 0.0f, 0x1.73a0ap-49f, 0x1.0d1f34p-61f, 0x1.b05c9ep-99f,
     0.0f, 0.0f, 0.0f, 0x1.320946p-107f, 0.0f, 0x1.40ca88p-104f, 0x1.40ee1p-62f,
     0x1.c46b2ap-54f, 0x1.43fc8ep-7f, 0.0f, 0x1.9ecaep-80f, 0x1.047432p-93f, 0.0f,
     0x1.a84688p-91f, 0x1.e28602p-12f, 0x1.c1ac4ap-1f, 0.0f, 0x1.8f71bp-9f, 0.0f,
     0.0f, 0x1.ac6f82p-4f, 0.0f, 0.0f, 0.0f, 0x1.4af8e4p-5f, 0x1.ebd85ap-79f,
     0x1.0dc68ap-124f, 0x1.52e622p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0cc59p-79f, 0.0f, 0x1.9d879ap-40f, 0.0f, 0x1.619064p-36f, 0.0f, 0.0f,
     0x1.5a717p-20f, 0.0f, 0x1.85e824p-3f, 0x1.83adeap-109f, 0x1.76e9fap-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c55f8p-49f, 0x1.6a871p-104f, 0x1.bef1fcp-4f, 0.0f,
     0x1.7e6044p-10f, 0x1.ad04b6p-112f, 0x1.a8bf1p-116f, 0x1.65fa7ep-37f,
     0x1.11725cp-11f, 0x1.9fddcp-123f, 0x1.3b7f56p-8f, 0x1.50595ap-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.87971p-14f, 0x1.e48f4cp-85f, 0x1p0f, 0x1.457b68p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0657ep-98f, 0.0f, 0.0f, 0x1.29af0ep-106f, 0.0f, 0x1.ff897p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b32a5ep-84f, 0.0f, 0x1.f69388p-99f, 0.0f,
     0x1.e77ef6p-33f, 0.0f, 0x1.6e0cc6p-82f, 0.0f, 0.0f, 0x1.c2345ep-38f, 0x1p0f,
     0x1.3915c4p-66f, 0.0f, 0.0f, 0x1.2469d6p-14f, 0x1.edcccp-117f, 0x1.48ce82p-55f,
     0.0f, 0.0f, 0x1.cf00bp-37f, 0x1.d4cbeep-89f, 0.0f, 0x1.fc2834p-46f, 0.0f,
     0x1.889aeap-23f, 0.0f, 0.0f, 0x1.ea0f9ap-73f, 0x1.1a4abp-31f, 0x1.88cc9ep-73f,
     0.0f, 0.0f, 0x1.3a5f2cp-39f, 0x1.23f834p-78f, 0.0f, 0.0f, 0x1.fe34bcp-15f, 0.0f,
     0.0f, 0.0f, 0x1.39c0ecp-17f, 0x1.a33454p-73f, 0x1.e60854p-12f, 0x1.df0578p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd29d6p-84f, 0.0f, 0x1.5df118p-120f, 0x1.a4d04p-44f,
     0x1.86935ap-15f, 0.0f, 0x1.04212ep-41f, 0x1.b8542cp-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3dbf24p-13f, 0.0f, 0x1.b68596p-119f, 0x1.00b4dap-68f, 0x1.64533cp-94f,
     0.0f, 0x1.af793p-59f, 0.0f, 0x1.e9b588p-36f, 0x1.798e5ep-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.82182cp-62f, 0.0f, 0.0f, 0x1.6a5e66p-8f, 0.0f, 0.0f, 0.0f,
     0x1.c4931cp-108f, 0x1.d8f984p-122f, 0.0f, 0.0f, 0x1.e8e1dap-57f, 0x1.f46c5ep-91f,
     0x1.f3609ap-112f, 0.0f, 0.0f, 0x1.9655b4p-123f, 0.0f, 0x1.2ae558p-32f, 0.0f,
     0.0f, 0x1.40681ep-48f, 0.0f, 0x1.37a2f4p-117f, 0.0f, 0.0f, 0.0f,
     0x1.ab3d82p-114f, 0.0f, 0x1.0215dcp-75f, 0x1.0bcc76p-52f, 0.0f, 0x1.e8e194p-48f,
     0.0f, 0.0f, 0x1.dfb586p-11f, 0x1.ec548cp-36f, 0x1.9d7d58p-99f, 0.0f,
     0x1.b0f622p-18f, 0x1.d3d7fcp-33f, 0x1.5fd834p-26f, 0.0f, 0.0f, 0.0f,
     0x1.d0e12ap-93f, 0x1.a7d992p-13f, 0.0f, 0.0f, 0x1.194952p-1f, 0x1.0b3e36p-111f,
     0x1.ab177cp-95f, 0.0f, 0x1.88f26p-85f, 0x1.407994p-32f, 0.0f, 0.0f, 0.0f,
     0x1.b831e4p-117f, 0.0f, 0.0f, 0x1.630474p-105f, 0x1.64350cp-91f, 0.0f,
     0x1.d97a58p-41f, 0x1.f5ee58p-100f, 0.0f, 0.0f, 0x1.4b52dep-59f, 0x1.543c14p-36f,
     0.0f, 0x1.a76daep-12f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.387a76p-110f, 0.0f,
     0x1.1a4286p-121f, 0.0f, 0x1.80f21cp-112f, 0x1.f93bf6p-118f, 0.0f,
     0x1.0ecd92p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cec62p-114f, 0x1.f74214p-106f,
     0x1.1c5d44p-13f, 0.0f, 0.0f, 0.0f, 0x1.e33b42p-72f, 0.0f, 0x1.92f53p-2f,
     0x1.1ded34p-69f, 0.0f, 0.0f, 0.0f, 0x1.398384p-26f, 0x1.2e8316p-9f, 0.0f, 0.0f,
     0.0f, 0x1.f8e9a4p-53f, 0.0f, 0.0f, 0.0f, 0x1.292e46p-61f, 0x1.6298e8p-66f, 0.0f,
     0x1.76f76p-83f, 0.0f, 0x1.c6f458p-104f, 0x1.d9a98ep-76f, 0x1.18296ep-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9d7eap-44f, 0.0f, 0x1.1499d6p-71f, 0x1.159e3ap-5f,
     0x1.c6a48cp-92f, 0.0f, 0.0f, 0x1.5b4c04p-50f, 0.0f, 0.0f, 0x1.cf70c2p-9f, 0.0f,
     0x1.00a1e2p-20f, 0.0f, 0.0f, 0x1.98aep-41f, 0.0f, 0x1.7f9e5cp-44f,
     0x1.21fd52p-126f, 0x1.1549fcp-45f, 0.0f, 0.0f, 0x1.28e656p-121f, 0x1.6dcfacp-16f,
     0x1.4b8c18p-75f, 0x1.41bf36p-52f, 0x1.6cab84p-51f, 0.0f, 0.0f, 0.0f,
     0x1.b9e81p-77f, 0x1.852c6ep-87f, 0.0f, 0.0f, 0.0f, 0x1.a4deb8p-72f,
     0x1.bc4eacp-52f, 0x1.18f60ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49b0a2p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eea7cep-99f, 0.0f, 0x1.d53a3ep-3f, 0.0f, 0.0f,
     0x1.21976ap-76f, 0.0f, 0.0f, 0.0f, 0x1.4e9662p-46f, 0x1.93bd48p-7f,
     0x1.64ebc8p-73f, 0.0f, 0x1.1ac3d6p-12f, 0x1.c1c69p-61f, 0.0f, 0x1.6a4566p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46eba4p-52f, 0x1.8a5c1ep-36f,
     0x1.949f2p-58f, 0x1.52c02cp-26f, 0.0f, 0x1.8fa192p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b31148p-29f, 0.0f, 0x1.2dfbacp-75f, 0.0f, 0.0f, 0x1.544c5ep-106f, 0.0f,
     0x1.54e0aep-97f, 0.0f, 0.0f, 0.0f, 0x1.2f4d9p-107f, 0x1.4ecb2ep-50f,
     0x1.4de91ap-44f, 0.0f, 0x1.bca0ccp-27f, 0x1.49a2d6p-94f, 0.0f, 0x1.65bd04p-104f,
     0.0f, 0x1.7e3c8ap-81f, 0x1.4afe84p-11f, 0.0f, 0.0f, 0.0f, 0x1.893e62p-84f,
     0x1.e03da2p-41f, 0.0f, 0x1.53f04ep-33f, 0.0f, 0.0f, 0x1.652298p-55f,
     0x1.c78d46p-106f, 0x1.b8a0c2p-20f, 0.0f, 0x1.88cca2p-56f, 0x1.37af6p-55f,
     0x1.2d926ep-9f, 0.0f, 0.0f, 0.0f, 0x1.925688p-25f, 0x1.6a1716p-37f, 0.0f,
     0x1.c85a3cp-68f, 0x1.d350f6p-96f, 0.0f, 0x1.dca336p-26f, 0x1.46f966p-41f,
     0x1.6eb6dp-8f, 0.0f, 0x1.3d3a5p-115f, 0.0f, 0.0f, 0x1.33a27cp-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6f164p-107f, 0.0f, 0.0f, 0x1.b2845ep-89f, 0x1.a9bd18p-50f,
     0x1.84e324p-13f, 0.0f, 0.0f, 0.0f, 0x1.27c5c2p-72f, 0.0f, 0x1.d24626p-73f,
     0x1.2586f4p-80f, 0.0f, 0.0f, 0x1.ae3d88p-1f, 0.0f, 0x1.6e0842p-87f, 0.0f, 0.0f,
     0x1.660e54p-119f, 0.0f, 0x1.3177e4p-56f, 0.0f, 0.0f, 0.0f, 0x1.ad5a0ap-28f,
     0x1.1718ep-2f, 0.0f, 0x1.2fd864p-23f, 0x1.d5ebcep-110f, 0.0f, 0x1.7c43aep-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a8478p-20f, 0x1.1ac182p-55f,
     0x1.975db2p-113f, 0x1.041ad2p-38f, 0x1.672f9ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.7489b2p-44f, 0x1.fd64a4p-60f, 0x1.36f222p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aecb6ap-100f, 0.0f, 0.0f, 0x1.ca2a78p-15f, 0x1.68646cp-90f, 0.0f, 0.0f, 0.0f,
     0x1.5c6392p-60f, 0x1.e9bf58p-124f, 0x1.0e34d4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0652e6p-99f, 0x1.ce1a08p-47f, 0.0f, 0.0f, 0x1.b46b48p-51f, 0.0f,
     0x1.ce28a4p-88f, 0x1.45205ep-106f, 0.0f, 0x1.b94ea8p-54f, 0.0f, 0.0f,
     0x1.5abb58p-17f, 0x1.adb4f6p-74f, 0x1.48909ep-56f, 0.0f, 0.0f, 0x1.2fb702p-67f,
     0x1.10cbcp-30f, 0x1.772e84p-100f, 0.0f, 0x1.2ec336p-31f, 0x1.336f16p-66f,
     0x1.ec9a92p-46f, 0x1.782daap-5f, 0x1.06ae02p-103f, 0x1.81a0bap-48f,
     0x1.ea6e7cp-66f, 0.0f, 0x1.dd4414p-1f, 0x1.1ef9bap-42f, 0x1.19a84p-97f,
     0x1.e3a7a8p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.251974p-60f, 0.0f, 0.0f,
     0x1.1244acp-30f, 0x1.40529p-26f, 0x1.981cf6p-87f, 0x1.2f514ep-40f,
     0x1.aa86dep-26f, 0.0f, 0x1.cb5a5p-102f, 0x1.d884e4p-19f, 0x1.41a092p-26f, 0.0f,
     0x1.59129ap-63f, 0x1.9a361ap-27f, 0x1.e2a3d6p-45f, 0x1.0ca608p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.d64f8cp-35f, 0x1.cfa124p-120f,
     0x1.4f5cf4p-12f, 0.0f, 0.0f, 0x1.4cd1c2p-81f, 0.0f, 0x1.27718ap-64f,
     0x1.c000f2p-65f, 0x1.daa9f6p-18f, 0.0f, 0x1.a5fb26p-17f, 0x1.528fbap-82f,
     0x1.b0ca48p-92f, 0.0f, 0x1.c90bccp-94f, 0x1.b35428p-59f, 0x1.409d42p-125f,
     0x1.6c9e1ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8309f4p-61f, 0x1.638bb8p-68f, 0.0f,
     0x1.09d422p-113f, 0.0f, 0x1.70e166p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9565ep-27f,
     0x1.00f6cap-75f, 0x1p0f, 0.0f, 0x1.0f04e4p-71f, 0.0f, 0.0f, 0.0f,
     0x1.0b458ep-110f, 0x1.b77014p-85f, 0x1.a19072p-2f, 0x1.093cd8p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17cd2ap-70f, 0.0f, 0.0f, 0x1.65ef4ep-101f,
     0x1.222cccp-94f, 0.0f, 0x1.d5422ap-67f, 0x1.6e23d2p-106f, 0.0f, 0x1.43b8fp-82f,
     0.0f, 0.0f, 0x1.be9ebcp-81f, 0x1.95529cp-76f, 0.0f, 0.0f, 0x1.fa9f46p-71f,
     0x1.6dd078p-69f, 0x1.22d6ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1408d6p-89f, 0.0f, 0x1.5a8c92p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85846cp-30f, 0.0f, 0.0f, 0x1.fa6ca2p-50f, 0.0f, 0x1.26b498p-80f,
     0x1.c4d404p-100f, 0x1.66d8dap-110f, 0x1.e8cfdap-125f, 0.0f, 0x1.de532ep-106f,
     0.0f, 0x1.83310ep-30f, 0x1.075e0ep-119f, 0.0f, 0x1.0ec636p-102f, 0x1.61ab0cp-23f,
     0x1.04388ep-116f, 0x1.844c3cp-94f, 0.0f, 0x1.4de00ep-62f, 0.0f, 0x1.b7a594p-18f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.34d5e8p-94f, 0.0f, 0x1.1ce2f2p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9bd09p-42f, 0.0f, 0.0f, 0.0f, 0x1.6e590ep-24f, 0.0f,
     0x1.946b4ap-88f, 0.0f, 0x1.19a54cp-19f, 0x1.a4c4ep-95f, 0x1.0d4fe4p-4f, 0.0f,
     0x1.6644b8p-53f, 0x1.f555ep-13f, 0x1.2a21eep-97f, 0x1.92bb72p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d233ep-12f, 0.0f, 0x1.da2686p-56f,
     0x1.3c4ce4p-69f, 0x1.a57b12p-51f, 0.0f, 0.0f, 0.0f, 0x1.3f054ap-105f, 0.0f, 0.0f,
     0x1.817f76p-88f, 0x1.376d9ep-7f, 0x1.4fd3dcp-34f, 0x1.9c6c8cp-12f, 0.0f, 0.0f,
     0x1.dd5decp-112f, 0.0f, 0.0f, 0x1.6a6af2p-116f, 0x1.b9e9d2p-26f,
     0x1.0e689cp-105f, 0x1.cd593cp-86f, 0.0f, 0x1.2de31ap-8f, 0x1.d69074p-31f,
     0x1.3a166ap-83f, 0x1.bdb956p-22f, 0x1.96ffeep-114f, 0.0f, 0.0f, 0x1.c331cap-105f,
     0.0f, 0x1.e76778p-87f, 0.0f, 0.0f, 0x1.75822ap-111f, 0.0f, 0x1.0ebc9p-44f, 0.0f,
     0.0f, 0x1.112248p-13f, 0x1.03aff2p-102f, 0x1.7b69e6p-5f, 0x1.c91b9cp-100f,
     0x1p0f, 0x1.5b9ca8p-46f, 0x1.da3542p-34f, 0x1.ca136p-57f, 0x1.a1e6dp-105f,
     0x1.17778ap-35f, 0x1.9b2a76p-110f, 0.0f, 0.0f, 0x1.46e1e4p-77f, 0x1.6ba948p-105f,
     0x1.643b6p-126f, 0x1.9ab144p-94f, 0.0f, 0x1.09ae12p-121f, 0.0f, 0x1.168c2p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4e0fap-87f, 0x1.bc787ep-41f, 0.0f, 0x1.fb7ea6p-117f,
     0x1.cdfb2cp-11f, 0.0f, 0.0f, 0.0f, 0x1.0d6bb4p-54f, 0.0f, 0.0f, 0.0f,
     0x1.f01612p-95f, 0x1.0735b6p-89f, 0.0f, 0.0f, 0.0f, 0x1.4c6b06p-50f, 0.0f,
     0x1.cb725ap-107f, 0x1.2f81e8p-63f, 0.0f, 0x1.4a704p-114f, 0.0f, 0x1.8fb252p-19f,
     0.0f, 0.0f, 0x1.1b5854p-82f, 0x1.0e12b2p-10f, 0.0f, 0.0f, 0x1.abdbb2p-46f,
     0x1.7f31e6p-5f, 0.0f, 0x1.48c924p-46f, 0x1.81e53p-103f, 0x1.0fc8dcp-20f, 0.0f,
     0x1.98c75ap-13f, 0x1.ce8a24p-121f, 0x1.7c831p-50f, 0x1.2fc3f2p-90f, 0.0f, 0.0f,
     0x1.21f464p-23f, 0.0f, 0x1.acb96ep-21f, 0x1.d9a25ap-33f, 0.0f, 0x1.d12764p-63f,
     0x1.365edp-116f, 0.0f, 0x1.13e5ccp-107f, 0.0f, 0x1.27390cp-82f, 0.0f, 0.0f,
     0x1.a82034p-63f, 0.0f, 0x1.10ae32p-11f, 0.0f, 0x1.69102p-79f, 0x1.0cbcd4p-41f,
     0.0f, 0.0f, 0x1.2d82dcp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36f756p-23f,
     0x1.d48b7ap-96f, 0x1.45078cp-38f, 0.0f, 0x1.4ebf2ep-66f, 0.0f, 0x1.1ce2dcp-18f,
     0x1.ddf87cp-71f, 0.0f, 0.0f, 0x1.d2838ap-4f, 0.0f, 0x1.c4578ep-90f, 0.0f,
     0x1.746baap-74f, 0x1.387b1p-78f, 0.0f, 0x1.349068p-49f, 0.0f, 0.0f,
     0x1.96efa2p-97f, 0.0f, 0x1.f64eb4p-123f, 0x1.417506p-34f, 0x1.3bc596p-95f,
     0x1.c1a7f6p-38f, 0x1.2b63c2p-8f, 0x1.f8eaccp-86f, 0x1.6f7d92p-39f, 0.0f,
     0x1.f34508p-123f, 0x1.ace9ap-67f, 0x1.7dd72p-16f, 0x1.35f50ap-83f, 0.0f, 0.0f,
     0.0f, 0x1.33deaep-90f, 0x1.7765c8p-86f, 0.0f, 0.0f, 0x1.62df2p-1f,
     0x1.31dac8p-122f, 0.0f, 0.0f, 0x1.88d6cap-57f, 0.0f, 0x1.0e3ecap-20f,
     0x1.c324bap-82f, 0.0f, 0.0f, 0.0f, 0x1.300dc4p-84f, 0.0f, 0x1.331428p-120f, 0.0f,
     0.0f, 0x1.2fe81ap-36f, 0x1.8df2b2p-68f, 0x1.e0ee4ep-104f, 0x1.3f137cp-106f, 0.0f,
     0x1.5b33d4p-57f, 0.0f, 0.0f, 0x1.2954p-52f, 0x1.75208ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.7ea90ap-113f, 0.0f, 0.0f, 0.0f, 0x1.bf144p-71f, 0.0f, 0.0f, 0x1.f7f2dap-29f,
     0.0f, 0x1.da48eap-16f, 0.0f, 0x1.d948c8p-55f, 0x1.6d13ep-97f, 0.0f,
     0x1.5a9766p-44f, 0.0f, 0.0f, 0.0f, 0x1.92e0c6p-95f, 0x1.a14ee4p-122f,
     0x1.c46462p-49f, 0x1.43a7c8p-82f, 0.0f, 0.0f, 0x1.ee7ecep-6f
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
            tmp1 = Sleef_exp2f4_u35avx2128(tmp0);
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
    printf("Sleef_exp2f4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp2f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
