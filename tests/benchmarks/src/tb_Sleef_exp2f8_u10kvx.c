/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f8_u10kvx.c --function Sleef_exp2f8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0.0f, 0x1.043efap-36f, 0x1.abf078p-15f, 0x1.3ef3b6p-50f, 0.0f,
     0x1.a6733p-113f, 0.0f, 0.0f, 0x1.cf886cp-7f, 0x1.02dd62p-84f, 0x1.eca312p-48f,
     0x1.dbc9eap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72deap-10f,
     0x1.149a08p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e18404p-33f, 0.0f, 0x1.9ebd4ep-62f,
     0.0f, 0x1.2bbb0ep-99f, 0.0f, 0.0f, 0.0f, 0x1.f5c932p-83f, 0.0f, 0x1.b1e42cp-121f,
     0.0f, 0x1.2e71c4p-79f, 0x1.ded49ap-66f, 0.0f, 0.0f, 0.0f, 0x1.9abb5p-123f,
     0x1.7b52e2p-105f, 0x1.075b54p-125f, 0x1.3a5f64p-42f, 0.0f, 0x1.8edfcp-41f, 0.0f,
     0x1.f56a06p-18f, 0.0f, 0x1.4b9404p-52f, 0.0f, 0.0f, 0x1.084b16p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a59d16p-67f, 0x1.67a372p-74f, 0x1.2ac4a8p-70f, 0x1.4f3b5cp-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3953e4p-71f, 0x1.b2fd9ep-9f, 0x1.963034p-65f, 0.0f,
     0x1.e2de08p-53f, 0x1.f7515cp-32f, 0.0f, 0x1.19c378p-63f, 0x1.6f3f06p-36f,
     0x1.021592p-101f, 0.0f, 0x1.9fc66cp-69f, 0x1.00818cp-37f, 0x1.c81634p-61f,
     0x1.d8882cp-78f, 0x1.9a9dacp-15f, 0x1.ca6a04p-53f, 0.0f, 0x1.5401dep-13f, 0.0f,
     0x1.88112cp-85f, 0.0f, 0x1.108caap-82f, 0x1.1070c6p-43f, 0.0f, 0x1.4cd04ap-112f,
     0x1.76f89cp-68f, 0.0f, 0.0f, 0x1.23ec78p-119f, 0x1.9988eep-74f, 0.0f, 0.0f,
     0x1.db327p-124f, 0.0f, 0x1.c4805cp-117f, 0.0f, 0.0f, 0.0f, 0x1.fb18ecp-75f, 0.0f,
     0.0f, 0x1.bd8ad6p-89f, 0x1.90df6ep-69f, 0x1.ae62eap-1f, 0.0f, 0x1.e7f078p-27f,
     0x1.1276eep-77f, 0x1.a3551p-100f, 0x1.a77f0ep-30f, 0.0f, 0.0f, 0x1.a320b6p-72f,
     0x1.1bcabcp-80f, 0x1.73c3f6p-33f, 0.0f, 0.0f, 0x1.ae288cp-62f, 0x1.233b04p-44f,
     0x1.4df94cp-101f, 0x1.ab51aap-97f, 0x1.85c362p-4f, 0.0f, 0x1.3d61e8p-34f,
     0x1.f44b86p-79f, 0x1.2f847p-40f, 0x1.4f687p-13f, 0.0f, 0x1.cd7df2p-99f,
     0x1.8d702ep-68f, 0.0f, 0.0f, 0x1.5cc93ap-5f, 0x1.7b444cp-11f, 0x1.2e7078p-8f,
     0x1.18e714p-63f, 0.0f, 0x1.6d6078p-8f, 0.0f, 0.0f, 0x1.4043dp-14f,
     0x1.c488dp-27f, 0x1.537d8cp-82f, 0.0f, 0x1.d43a42p-70f, 0x1.dc3ebp-110f,
     0x1.b39cecp-57f, 0.0f, 0.0f, 0x1.f22d1p-16f, 0.0f, 0.0f, 0x1.50609ap-36f, 0.0f,
     0x1.4b337ep-95f, 0x1.25d9c6p-102f, 0x1.5dbadp-66f, 0.0f, 0.0f, 0x1.36b6eep-36f,
     0x1.38c792p-50f, 0.0f, 0.0f, 0x1.2cd29p-45f, 0x1.60d2acp-34f, 0x1.828e1p-12f,
     0.0f, 0x1.3a2ea8p-21f, 0.0f, 0x1.812db4p-9f, 0x1.e4e61p-25f, 0x1.977e4ep-100f,
     0x1.9f3c12p-72f, 0x1.28246cp-84f, 0.0f, 0.0f, 0x1.a80a1cp-26f, 0x1.11940ap-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e0a0ap-30f, 0.0f, 0x1p0f, 0x1.db53ep-81f,
     0x1.6a9148p-4f, 0x1.3f178ap-80f, 0.0f, 0x1.d31298p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e3cbep-31f, 0x1.01d744p-12f, 0.0f, 0x1.52d314p-52f, 0x1.4098e4p-56f,
     0x1.3c60cap-18f, 0x1.489c84p-75f, 0x1.841746p-97f, 0x1.a1566ep-42f, 0.0f,
     0x1.e8fe42p-35f, 0x1.e594bep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e3e5ep-45f, 0x1.aa6d02p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00585p-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.815daep-85f, 0.0f, 0x1p0f, 0x1.76a76p-90f,
     0.0f, 0x1.377d2ep-103f, 0x1.1ec3c2p-64f, 0.0f, 0.0f, 0.0f, 0x1.3b72eep-98f, 0.0f,
     0x1.294522p-57f, 0x1.dae58p-103f, 0.0f, 0.0f, 0x1.6668f2p-24f, 0x1.5442fp-87f,
     0x1.091ef8p-126f, 0.0f, 0x1.9c9a12p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa3ap-8f,
     0.0f, 0.0f, 0x1.9a737cp-52f, 0.0f, 0x1.7b32c2p-37f, 0x1.c3729ep-122f, 0.0f,
     0x1.78ceb2p-21f, 0.0f, 0.0f, 0x1.cd0216p-10f, 0x1.be5762p-16f, 0.0f, 0.0f,
     0x1.36d924p-62f, 0.0f, 0x1.30efbp-81f, 0x1.de209cp-61f, 0x1.d72c2ep-72f,
     0x1.dc0e0cp-122f, 0x1.f44882p-33f, 0x1.61a552p-92f, 0x1.ab9656p-72f,
     0x1.41f48ap-81f, 0x1.015296p-64f, 0x1.5aca36p-20f, 0.0f, 0x1.59c902p-80f,
     0x1.bfa528p-123f, 0x1.6e3cap-7f, 0x1.42e03ep-65f, 0x1.fea322p-3f,
     0x1.6f0e6cp-90f, 0x1.eee35ep-25f, 0x1.e89e1cp-115f, 0.0f, 0x1.97631ap-77f,
     0x1.48cfd6p-55f, 0.0f, 0.0f, 0.0f, 0x1.fa30b2p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1e72ccp-46f, 0x1.9f8daep-114f, 0.0f, 0x1.e8eb8cp-13f,
     0x1.8671d8p-67f, 0x1.a3e7bcp-63f, 0x1.67d1aep-93f, 0.0f, 0x1.6b5cdep-17f, 0.0f,
     0x1.017f5ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb0daep-21f, 0.0f, 0.0f,
     0x1.5a05d8p-86f, 0x1.96ed38p-125f, 0x1.793ae2p-1f, 0x1.2e9e84p-123f, 0.0f, 0.0f,
     0x1.2663eap-118f, 0.0f, 0x1.391fdp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28346ap-126f,
     0x1.dd213ap-8f, 0.0f, 0.0f, 0.0f, 0x1.dca592p-95f, 0x1.256406p-76f, 0.0f,
     0x1.67ec0ap-32f, 0x1.88285ep-87f, 0.0f, 0x1.eef222p-6f, 0.0f, 0x1.daccb2p-25f,
     0.0f, 0x1.a3bd26p-69f, 0x1.28fb5ep-74f, 0x1.d8c6cp-113f, 0x1.08771p-16f, 0.0f,
     0.0f, 0.0f, 0x1.458218p-31f, 0x1.3b1432p-123f, 0.0f, 0x1.0c26aep-99f,
     0x1.f1061p-95f, 0.0f, 0.0f, 0x1.f7a512p-37f, 0.0f, 0x1.e6f568p-116f, 0.0f,
     0x1.66898ap-60f, 0x1.3ad3ccp-35f, 0x1.7b481ap-38f, 0.0f, 0x1.d3ceccp-2f,
     0x1.094d08p-51f, 0x1.ca5ecap-85f, 0.0f, 0.0f, 0.0f, 0x1.e9f24cp-79f, 0.0f, 0.0f,
     0x1.57d7eap-29f, 0.0f, 0x1.cc707cp-85f, 0.0f, 0x1.5cafc4p-72f, 0x1.e54f2cp-4f,
     0.0f, 0.0f, 0x1.30e1e4p-98f, 0.0f, 0.0f, 0x1.d910c8p-59f, 0.0f, 0x1.7e5b0cp-7f,
     0x1.ee5c9ap-113f, 0.0f, 0x1.894738p-6f, 0.0f, 0x1.6d4a44p-90f, 0x1.8c084cp-77f,
     0x1.643848p-25f, 0.0f, 0x1.2c5792p-92f, 0.0f, 0x1.61e89ap-58f, 0.0f, 0.0f,
     0x1.bf2696p-126f, 0.0f, 0.0f, 0x1.5eac6p-59f, 0.0f, 0.0f, 0.0f, 0x1.da3a96p-9f,
     0.0f, 0x1.0e0eb8p-75f, 0x1.4634eep-70f, 0.0f, 0x1.c8047cp-96f, 0.0f, 0.0f, 0.0f,
     0x1.252342p-74f, 0x1.6a734cp-7f, 0.0f, 0.0f, 0.0f, 0x1.289a2ep-95f,
     0x1.8f5fc6p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8bcb4p-106f, 0.0f,
     0x1.a8d396p-90f, 0.0f, 0x1.dcb3b2p-83f, 0.0f, 0x1.f46738p-100f, 0x1.7e4eep-32f,
     0x1.5703ap-79f, 0x1.b671ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d3aeep-15f, 0.0f, 0x1.18a15cp-40f, 0x1.81504ap-1f, 0.0f, 0.0f,
     0x1.5b409cp-37f, 0.0f, 0.0f, 0x1.c6d9bcp-107f, 0.0f, 0x1.887c6cp-92f,
     0x1.09d008p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73a4b4p-19f, 0.0f, 0.0f,
     0x1.3312dap-45f, 0.0f, 0x1.e099aap-26f, 0x1.ca6e94p-110f, 0.0f, 0x1.eea5bp-97f,
     0x1.8a6dbap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a12a4cp-27f, 0x1.382312p-79f,
     0x1.65225ap-2f, 0.0f, 0.0f, 0x1.d75a9ap-112f, 0x1.b0cd28p-113f, 0.0f,
     0x1.61a42ap-57f, 0.0f, 0x1.9d2962p-37f, 0x1.30c4ep-105f, 0x1.d8c142p-53f,
     0x1.8eefbep-92f, 0x1.82710ep-99f, 0x1.682838p-86f, 0x1.fa17bep-69f,
     0x1.3924c6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd7e0cp-33f, 0.0f, 0.0f, 0.0f,
     0x1.4976dep-100f, 0x1.95750cp-106f, 0x1.b9adecp-15f, 0.0f, 0x1.95a052p-78f,
     0x1.a53e52p-53f, 0x1.e9c6ep-73f, 0.0f, 0.0f, 0.0f, 0x1.321244p-82f,
     0x1.0adc98p-106f, 0.0f, 0x1.9ba4ap-120f, 0.0f, 0.0f, 0x1.d2e3cep-28f, 0.0f,
     0x1.b8fe7cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b262p-107f, 0x1.66bbbep-125f,
     0x1.5654bcp-4f, 0x1.7e6de4p-78f, 0.0f, 0x1.60889p-9f, 0.0f, 0.0f,
     0x1.c724d4p-82f, 0x1.42a01p-2f, 0.0f, 0.0f, 0.0f, 0x1.c1a2c8p-65f, 0.0f,
     0x1.935a56p-9f, 0x1.d4e2b4p-93f, 0.0f, 0.0f, 0x1.7846fp-111f, 0x1.727d9p-50f,
     0.0f, 0x1.5392eep-33f, 0x1.388f48p-47f, 0.0f, 0x1.32356ep-15f, 0.0f,
     0x1.c9af9cp-52f, 0x1.872d0ep-45f, 0x1.70f534p-68f, 0x1.56339ap-116f,
     0x1.0becbp-111f, 0x1.b7b5e6p-8f, 0x1.312302p-96f, 0x1.48635cp-97f, 0.0f,
     0x1.6a289p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b47b2ep-54f, 0.0f, 0.0f, 0.0f,
     0x1.fd5d9ep-115f, 0x1.dc60dp-44f, 0x1.ff3282p-100f, 0.0f, 0x1.8e44c2p-7f,
     0x1.31f27ep-75f, 0.0f, 0.0f, 0x1.10a63ap-99f, 0.0f, 0x1.c6c566p-70f, 0.0f,
     0x1.5a9dbp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa75ap-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c4b5cp-25f, 0x1.57acep-80f, 0x1.1d7e7ap-64f, 0x1.eef9b4p-37f,
     0x1.1b1ec2p-115f, 0.0f, 0x1.640766p-60f, 0x1.79dcfap-5f, 0.0f, 0x1.541306p-115f,
     0x1.bd4b0ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cded64p-62f, 0.0f,
     0x1.eedc66p-103f, 0x1.fb3976p-88f, 0x1.40bc6p-82f, 0.0f, 0x1p0f, 0x1.c1875ap-99f,
     0.0f, 0x1.24ac46p-105f, 0.0f, 0x1.35388cp-126f, 0.0f, 0.0f, 0x1.9aa51ap-51f,
     0.0f, 0x1.cb858p-124f, 0.0f, 0.0f, 0.0f, 0x1.47041ap-56f, 0.0f, 0x1.d8fc4cp-116f,
     0.0f, 0.0f, 0x1.ff5422p-77f, 0.0f, 0x1.d433dep-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6a63ep-119f, 0x1.75d8e6p-18f, 0x1.3b4da2p-88f, 0x1.cf1558p-122f, 0.0f, 0.0f,
     0x1.23ed5cp-6f, 0x1.0e1b0ap-15f, 0x1.7cd81cp-70f, 0x1.6b0c98p-79f,
     0x1.a381eep-84f, 0x1.94a8a2p-98f, 0.0f, 0x1.6cfc4cp-34f, 0x1.267f96p-6f,
     0x1.f3ebb4p-114f, 0.0f, 0x1.ec612ap-90f, 0x1.f8ccf8p-75f, 0.0f, 0.0f,
     0x1.dbbcf8p-2f, 0x1.e0f06ap-70f, 0.0f, 0x1.3fa2d4p-60f, 0x1.967c66p-122f,
     0x1.42eb64p-25f, 0x1p0f, 0.0f, 0x1.800b92p-92f, 0.0f, 0x1.04754cp-68f, 0.0f,
     0.0f, 0x1.5da968p-113f, 0x1.ecd8d6p-21f, 0x1.be27bep-16f, 0x1.8c9852p-48f, 0.0f,
     0.0f, 0x1.de3284p-58f, 0x1.e01648p-85f, 0x1.75c176p-15f, 0.0f, 0.0f,
     0x1.afea6ap-79f, 0x1.27364p-59f, 0x1.4b74c4p-27f, 0x1.44a39ap-103f, 0.0f,
     0x1.e12ea8p-111f, 0.0f, 0.0f, 0.0f, 0x1.70831cp-17f, 0x1.1f0278p-103f,
     0x1.fca4bcp-1f, 0x1.1ad9fp-22f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3a998p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24c214p-24f, 0.0f, 0.0f,
     0x1.5b606ep-11f, 0x1.d5047cp-24f, 0x1.80d23ap-68f, 0.0f, 0x1.98731ap-126f,
     0x1.69d4b4p-91f, 0x1.d6d02ep-11f, 0x1.cf50fcp-5f, 0x1.876072p-103f,
     0x1.2793fp-74f, 0x1.8d2606p-9f, 0.0f, 0x1.b2d5eep-110f, 0x1.ae2efp-81f, 0.0f,
     0.0f, 0x1.b10742p-64f, 0.0f, 0x1.68f53p-75f, 0.0f, 0x1.015be4p-106f, 0.0f, 0.0f,
     0x1.8c6ab8p-16f, 0x1.28e9a2p-43f, 0x1.21a682p-124f, 0.0f, 0x1.59d5cap-87f,
     0x1.6bf404p-42f, 0.0f, 0x1.1f6b0cp-41f, 0x1.525dbp-121f, 0x1.210bb6p-43f,
     0x1.a9444cp-12f, 0x1.a259b8p-107f, 0x1.3d5a14p-44f, 0.0f, 0x1.2a979ep-95f,
     0x1.9b583cp-17f, 0.0f, 0x1.9e9b56p-38f, 0x1.54f9f2p-115f, 0x1.a08264p-79f,
     0x1.26db74p-22f, 0x1.ccebaep-49f, 0x1.a3dd6p-113f, 0x1.dbd3dap-83f, 0.0f,
     0x1.081168p-95f, 0.0f, 0.0f, 0.0f, 0x1.9da09ap-35f, 0x1.908c6ap-99f, 0x1p0f,
     0.0f, 0.0f, 0x1.72377ep-91f, 0.0f, 0.0f, 0.0f, 0x1.f402f2p-77f, 0x1.a14f38p-91f,
     0.0f, 0.0f, 0.0f, 0x1.579e1ap-46f, 0.0f, 0.0f, 0x1.1798a2p-91f, 0.0f,
     0x1.2212a4p-97f, 0.0f, 0.0f, 0.0f, 0x1.8c3be4p-12f, 0x1.ea2dd4p-39f, 0.0f,
     0x1.3267aep-88f, 0x1.e8c08ep-114f, 0.0f, 0.0f, 0.0f, 0x1.1739c6p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42225ap-91f, 0x1.6033ep-30f, 0x1.a355a6p-31f,
     0.0f, 0.0f, 0.0f, 0x1.127f58p-82f, 0.0f, 0x1.54663ep-6f, 0x1.6aeb7cp-20f,
     0x1.67624p-112f, 0.0f, 0.0f, 0.0f, 0x1.d20464p-28f, 0.0f, 0.0f, 0x1.7203ccp-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e4bd8p-54f, 0.0f, 0x1.4327c8p-24f,
     0x1.e864dap-31f, 0x1.019bf2p-28f, 0.0f, 0x1.82d912p-35f, 0x1.fe89f6p-57f,
     0x1.eea6e4p-93f, 0x1.3d346ap-103f, 0x1.bd5294p-101f, 0x1.67c92ep-124f,
     0x1.b96c1cp-38f, 0x1.84824ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c29bp-117f,
     0x1.9ab584p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecac38p-38f, 0.0f, 0.0f,
     0x1.a75432p-120f, 0x1.065b42p-15f, 0.0f, 0.0f, 0x1.07846ap-116f, 0.0f,
     0x1.8059d8p-2f, 0.0f, 0.0f, 0x1.256f7ap-60f, 0.0f, 0.0f, 0x1.18af6ep-26f,
     0x1.9c2fd4p-18f, 0x1p0f, 0.0f, 0.0f, 0x1.223ae4p-84f, 0x1.03f204p-47f,
     0x1.bbc926p-115f, 0.0f, 0x1.b7f49ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.77a598p-104f, 0x1.782bbep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c081b4p-14f,
     0x1.db05c6p-70f, 0.0f, 0.0f, 0x1.1005f6p-118f, 0x1.b81bb2p-117f,
     0x1.dd09f8p-110f, 0.0f, 0x1.48d5aep-91f, 0x1.acc93ep-80f, 0.0f, 0x1.da807ap-93f,
     0.0f, 0.0f, 0.0f, 0x1.3dd866p-49f, 0.0f, 0.0f, 0.0f, 0x1.8815a4p-58f, 0.0f, 0.0f,
     0x1.52f8cp-19f, 0.0f, 0.0f, 0x1.3df29ap-4f, 0x1.f51c64p-42f, 0x1.629c88p-47f,
     0x1.0f152cp-62f, 0.0f, 0x1.18a99ep-120f, 0x1.c17a6ap-85f, 0x1.1a50fp-42f, 0.0f,
     0x1.280c2p-86f, 0.0f, 0x1.b31044p-44f, 0x1.9fd0e6p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb477p-124f, 0.0f, 0.0f, 0x1.76f218p-69f, 0.0f, 0.0f, 0x1.c0628ep-98f, 0.0f,
     0x1.890328p-98f, 0x1.6e666cp-91f, 0.0f, 0x1.9d9d98p-74f, 0.0f, 0.0f, 0.0f,
     0x1.72c84ap-126f, 0.0f, 0.0f, 0.0f, 0x1.9c82b6p-69f, 0.0f, 0x1.69a39ap-83f,
     0x1.e9a634p-119f, 0x1.fe439cp-112f, 0x1.76f01ep-113f, 0.0f, 0.0f, 0x1.893fbp-11f,
     0.0f, 0.0f, 0x1.02665ep-93f, 0.0f, 0x1.616944p-66f, 0.0f, 0.0f, 0.0f,
     0x1.3cb324p-2f, 0.0f, 0.0f, 0.0f, 0x1.ed41a4p-51f, 0x1.5c68ccp-99f, 0.0f,
     0x1.fccac6p-68f, 0x1.4b1f16p-48f, 0x1.8202c2p-105f, 0x1.f2e6a4p-22f, 0.0f,
     0x1.618268p-69f, 0x1.ae40a4p-72f, 0.0f, 0x1.f5a7d2p-75f, 0x1.a398fp-49f,
     0x1.63850ap-26f, 0.0f, 0.0f, 0.0f, 0x1.1abb9ap-15f, 0x1.06b8p-125f,
     0x1.4bda72p-35f, 0.0f, 0x1.0bf8c2p-66f, 0.0f, 0.0f, 0x1.c11594p-7f,
     0x1.7b04fap-98f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_exp2f8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_exp2f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_exp2f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
