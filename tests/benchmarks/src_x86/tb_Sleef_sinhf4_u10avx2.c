/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf4_u10avx2128.c --function Sleef_sinhf4_u10avx2128 \
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
     0x1.54cebap-118f, 0.0f, 0.0f, 0.0f, 0x1.f12786p-34f, 0.0f, 0x1.d8af32p-101f,
     0x1.156522p-12f, 0x1.e3f3fap-71f, 0.0f, 0x1.6b6cb2p-69f, 0.0f, 0.0f,
     0x1.a0bcd8p-86f, 0.0f, 0x1.23537cp-32f, 0x1.357b48p-24f, 0.0f, 0.0f,
     0x1.704cfcp-40f, 0x1.c56fcap-71f, 0.0f, 0x1.0b3c9p-78f, 0.0f, 0.0f,
     0x1.2a69bcp-46f, 0x1.2ab0bp-81f, 0x1.9157bp-91f, 0x1.b37bfep-80f, 0x1.155da4p-5f,
     0x1.c2ec4ap-62f, 0.0f, 0x1.20892ep-34f, 0.0f, 0x1.e68262p-21f, 0x1.651918p-19f,
     0x1.0878d4p-106f, 0x1.3cf50ep-104f, 0x1.bc588ep-88f, 0x1.1a0f84p-63f, 0.0f, 0.0f,
     0x1.aea00ap-124f, 0x1.eec6c6p-74f, 0x1.b7eb72p-80f, 0.0f, 0x1.73a6f8p-19f,
     0x1.0fb016p-77f, 0.0f, 0x1.b9bc4cp-118f, 0x1.3d5752p-63f, 0x1.efc178p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.013ad4p-97f, 0x1.b9e4fcp-32f, 0.0f, 0x1.8217dp-46f,
     0x1.23d1c4p-58f, 0.0f, 0x1.92056ap-12f, 0.0f, 0x1.83caaep-17f, 0x1.72d748p-35f,
     0.0f, 0.0f, 0.0f, 0x1.d5902cp-45f, 0x1.32d8f2p-110f, 0x1.2f366ep-110f, 0.0f,
     0x1.bd5624p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.549b3p-10f, 0x1.35c8b6p-92f,
     0x1.6f0102p-124f, 0x1.e580dp-38f, 0.0f, 0.0f, 0x1.6dc60cp-36f, 0.0f,
     0x1.2846d2p-64f, 0.0f, 0x1.ff1d9p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef418ep-30f,
     0.0f, 0x1.7471bp-58f, 0x1.f38398p-77f, 0x1.985f04p-87f, 0x1.29d42ep-52f, 0.0f,
     0.0f, 0x1.3ce88ep-92f, 0.0f, 0.0f, 0x1.abd746p-10f, 0x1.716394p-125f, 0.0f,
     0x1.52d816p-44f, 0x1.0992f8p-98f, 0x1.27942p-104f, 0.0f, 0x1.7b9e5p-12f,
     0x1.a3d724p-39f, 0.0f, 0x1.541ddcp-88f, 0x1.e6d2fp-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eeccp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.390f7ap-123f,
     0x1.00f476p-12f, 0x1.ca1aacp-115f, 0x1.d40a7ep-50f, 0.0f, 0x1.45c63ep-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef09bep-95f, 0.0f, 0x1.5397d4p-120f, 0x1.6ecb1ep-90f,
     0.0f, 0x1.daef3ep-16f, 0x1.b426dp-64f, 0.0f, 0x1.348ad4p-18f, 0x1.fa3088p-65f,
     0x1.d0765ap-41f, 0.0f, 0x1.4d0542p-115f, 0x1.d73816p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9cdbcp-96f, 0.0f, 0x1.81563ap-88f, 0.0f, 0x1.357aecp-43f, 0.0f, 0.0f,
     0x1.2183eap-55f, 0x1.a1a016p-58f, 0x1.9ddcc4p-2f, 0x1.5d27b6p-103f,
     0x1.e7b712p-63f, 0x1.3e786ep-125f, 0.0f, 0.0f, 0.0f, 0x1.a9f5f8p-48f,
     0x1.a7ab3ap-95f, 0.0f, 0x1.4df73p-60f, 0x1.99f7p-68f, 0.0f, 0x1.0a415p-80f, 0.0f,
     0.0f, 0x1.11a9d2p-98f, 0x1.bfc6d4p-15f, 0.0f, 0x1.9ab9bap-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.90bdcp-67f, 0.0f, 0x1.3c5448p-66f, 0.0f, 0.0f, 0x1.b55246p-97f,
     0.0f, 0x1.f54d48p-70f, 0x1.e5afdep-71f, 0.0f, 0.0f, 0.0f, 0x1.693e3cp-112f, 0.0f,
     0x1.748cb2p-88f, 0.0f, 0x1.f08acep-46f, 0.0f, 0x1.cee6c4p-52f, 0.0f,
     0x1.0d0af8p-19f, 0x1.963666p-72f, 0x1.1d5cap-113f, 0.0f, 0x1.0692d2p-49f, 0.0f,
     0x1.63c686p-77f, 0.0f, 0x1.ecb8a6p-50f, 0x1.1f793ap-69f, 0.0f, 0.0f, 0.0f,
     0x1.87fcc8p-70f, 0.0f, 0x1.7a43a2p-116f, 0.0f, 0x1.ec9876p-65f, 0x1.3fc3f4p-41f,
     0.0f, 0x1.3a4bc4p-38f, 0.0f, 0.0f, 0x1.7b9c88p-67f, 0.0f, 0x1.c20f2cp-91f, 0.0f,
     0x1.b3f93ep-23f, 0.0f, 0.0f, 0x1.453fep-69f, 0.0f, 0.0f, 0x1.f3a9bp-22f, 0.0f,
     0x1.301ae4p-1f, 0.0f, 0.0f, 0x1.e9649cp-62f, 0.0f, 0.0f, 0x1.84abbap-125f,
     0x1.e177ecp-106f, 0.0f, 0.0f, 0x1.32a674p-100f, 0x1.30058ap-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ecbe6p-120f, 0x1.4d11fcp-48f, 0x1.9168bcp-46f, 0.0f,
     0x1.5cca42p-26f, 0x1.a085f4p-50f, 0x1.69d31ep-92f, 0x1.c4b458p-13f,
     0x1.dba8e8p-20f, 0x1.246094p-100f, 0x1.4deb54p-30f, 0x1.288a1cp-33f,
     0x1.82d836p-39f, 0.0f, 0.0f, 0.0f, 0x1.59197ap-120f, 0x1.495fc8p-72f,
     0x1.c73e58p-77f, 0.0f, 0x1.4a6b5cp-54f, 0x1.9e8564p-123f, 0x1.489636p-95f, 0.0f,
     0.0f, 0x1.249a64p-70f, 0x1.ee699ep-31f, 0x1.78f0dep-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b051cp-46f, 0.0f, 0.0f, 0x1.2aaeap-89f, 0x1.6aad7ep-89f, 0.0f, 0.0f,
     0.0f, 0x1.708866p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9293e2p-43f, 0.0f,
     0x1.538664p-32f, 0x1.f79a6cp-52f, 0.0f, 0x1.eef488p-119f, 0x1.65f748p-74f, 0.0f,
     0x1.a48d4ap-35f, 0x1.d6fc36p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.567886p-116f,
     0.0f, 0x1.101d58p-47f, 0x1.5ba9c2p-85f, 0x1.67c5eap-49f, 0.0f, 0x1.36947ep-20f,
     0x1.25c084p-112f, 0.0f, 0x1.7799dp-52f, 0x1.107edp-5f, 0.0f, 0.0f,
     0x1.de2548p-100f, 0x1.87a1a6p-106f, 0x1.df5b9ep-63f, 0.0f, 0x1.1c446ep-121f,
     0x1.f2e99ep-42f, 0x1.a46d18p-39f, 0.0f, 0x1.07dae4p-53f, 0.0f, 0x1.23efd2p-48f,
     0.0f, 0x1.05a752p-90f, 0.0f, 0x1.7f7ea6p-114f, 0.0f, 0.0f, 0x1.f19c3ep-95f,
     0x1.109e48p-12f, 0x1.141364p-83f, 0x1.8d6d9p-106f, 0x1.b3bbep-40f,
     0x1.6a57b6p-23f, 0.0f, 0.0f, 0x1.a082cp-83f, 0x1.48bd3p-43f, 0x1.f956bep-119f,
     0x1.b3f5d4p-48f, 0x1.036514p-40f, 0x1.eaed1ep-63f, 0x1.4af2f2p-111f,
     0x1.1f2846p-2f, 0x1.50ade2p-34f, 0x1p0f, 0x1.fa1c7ap-109f, 0x1.857a5cp-66f, 0.0f,
     0.0f, 0.0f, 0x1.84b358p-85f, 0x1.bf2db2p-118f, 0x1.09d002p-45f, 0x1.0df742p-85f,
     0.0f, 0.0f, 0x1.f2fd6ep-109f, 0x1.357084p-27f, 0.0f, 0x1.c84638p-114f,
     0x1.124472p-122f, 0.0f, 0.0f, 0x1.a76b58p-103f, 0x1.949deep-50f, 0x1.fd739cp-55f,
     0.0f, 0.0f, 0x1.760ff4p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe4682p-113f, 0.0f,
     0x1.5408dcp-87f, 0.0f, 0.0f, 0x1.40aa14p-125f, 0.0f, 0x1.3cdc0ep-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7781p-20f, 0.0f, 0.0f, 0x1.5ecebep-99f, 0.0f, 0x1.ba4c4ap-86f,
     0.0f, 0x1.a9d8e2p-6f, 0.0f, 0x1.efdf8ap-97f, 0.0f, 0.0f, 0x1.dafb14p-89f, 0.0f,
     0.0f, 0x1.a07356p-77f, 0.0f, 0x1.25dc52p-85f, 0.0f, 0.0f, 0x1.c379fp-30f,
     0x1.a636e8p-39f, 0.0f, 0x1.c2db68p-20f, 0.0f, 0.0f, 0x1.aa9de8p-74f,
     0x1.8c052p-51f, 0.0f, 0x1.f3c5eap-94f, 0x1.a02d7cp-125f, 0x1.8fdbcap-31f,
     0x1.84f54ap-74f, 0.0f, 0x1.c782cep-35f, 0x1.898c0ep-100f, 0.0f, 0x1.12ce6ep-125f,
     0.0f, 0x1.5cb468p-76f, 0.0f, 0x1.84f8a4p-21f, 0.0f, 0x1.933886p-55f, 0.0f,
     0x1.b704d2p-101f, 0.0f, 0x1.5f6e2cp-77f, 0.0f, 0.0f, 0x1.9d3e18p-55f, 0.0f, 0.0f,
     0x1.417f7p-52f, 0.0f, 0x1.d2061ep-88f, 0.0f, 0x1.9829b8p-34f, 0.0f,
     0x1.c8431ep-32f, 0x1.34e882p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.548d62p-112f, 0x1.d12906p-27f, 0.0f, 0.0f, 0x1.635856p-51f, 0x1.3ac5bep-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c472cp-47f, 0x1.bac6eep-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9e7a16p-36f, 0x1.4407c6p-74f, 0.0f, 0.0f, 0x1.b30dccp-64f,
     0x1.783fe4p-124f, 0.0f, 0x1.8e888ap-77f, 0.0f, 0x1.846e52p-97f, 0x1.4ae9acp-49f,
     0x1.e51afap-10f, 0.0f, 0x1.7208c6p-115f, 0.0f, 0x1.e7ed58p-54f, 0.0f,
     0x1.094eb6p-8f, 0x1.0aca4ep-90f, 0.0f, 0x1.d1321ep-83f, 0x1.8eef54p-58f,
     0x1.b9d26ap-113f, 0.0f, 0.0f, 0.0f, 0x1.9c1b0ep-122f, 0x1.00393ap-15f, 0.0f,
     0.0f, 0x1.5f396cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19472cp-24f, 0.0f, 0.0f, 0.0f,
     0x1.68cea2p-23f, 0x1.d3b7e8p-54f, 0.0f, 0.0f, 0.0f, 0x1.e085cep-79f,
     0x1.5cd18cp-109f, 0x1.d056d8p-33f, 0.0f, 0.0f, 0x1.558f04p-4f, 0.0f,
     0x1.50311ap-122f, 0x1.9a4072p-11f, 0x1.164594p-82f, 0.0f, 0x1.0b1fdap-40f, 0.0f,
     0.0f, 0x1p0f, 0x1.0aa828p-59f, 0x1.617684p-12f, 0x1.6b609cp-47f, 0.0f,
     0x1.5513a4p-6f, 0.0f, 0.0f, 0x1.317356p-55f, 0.0f, 0x1.663db6p-30f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.92d82ep-50f, 0x1.24282ap-7f, 0x1.b90bccp-29f, 0x1.e7c76ep-42f,
     0x1.8702e6p-41f, 0.0f, 0.0f, 0x1.7b68cep-57f, 0x1.7f4ac8p-8f, 0.0f,
     0x1.7fb9f6p-64f, 0.0f, 0x1.956298p-57f, 0x1.f3adbap-56f, 0.0f, 0.0f,
     0x1.ab0bb6p-87f, 0x1.9c78ecp-43f, 0x1.894728p-119f, 0.0f, 0x1.ff9744p-119f,
     0x1.0f099ep-72f, 0.0f, 0x1.fb8b16p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83ac6ap-65f,
     0.0f, 0x1.d04954p-122f, 0.0f, 0x1.60cb02p-73f, 0x1.62db2p-105f, 0x1.c2c204p-8f,
     0.0f, 0x1.f9929cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e8c9p-47f, 0x1.e2664ep-37f,
     0.0f, 0.0f, 0.0f, 0x1.c2e1a6p-114f, 0.0f, 0.0f, 0x1.d9e2d6p-27f,
     0x1.d2a512p-121f, 0.0f, 0x1.335f52p-89f, 0.0f, 0x1.79b126p-113f, 0.0f,
     0x1.b3c248p-108f, 0.0f, 0x1.182feep-116f, 0x1.042d4p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.174946p-76f, 0.0f, 0.0f, 0x1.5b5794p-76f, 0.0f, 0x1.6b9b1ap-19f,
     0x1.5d649ep-34f, 0x1.a0c138p-22f, 0x1.36241p-4f, 0.0f, 0.0f, 0x1.d210c2p-32f,
     0.0f, 0x1.3d726p-95f, 0x1.63dedep-26f, 0.0f, 0.0f, 0.0f, 0x1.29f11cp-124f, 0.0f,
     0x1.9c7e96p-13f, 0x1.1516d4p-38f, 0x1.394074p-113f, 0x1.f6ed06p-19f,
     0x1.23e8aap-85f, 0.0f, 0.0f, 0.0f, 0x1.dc5624p-21f, 0.0f, 0.0f, 0x1.8c0ca6p-5f,
     0.0f, 0x1.26ba9ap-96f, 0x1.d6acacp-33f, 0.0f, 0.0f, 0x1.e8f286p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.263a4ap-34f, 0x1.48a4d8p-60f, 0x1.d8396cp-79f,
     0x1.53164ap-70f, 0x1.5cf2c2p-105f, 0.0f, 0x1.4a22bcp-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.743028p-40f, 0x1.0f2f94p-124f, 0.0f, 0.0f, 0x1.59fccep-5f, 0.0f,
     0x1.59202ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.560022p-2f, 0.0f, 0x1.d51328p-97f,
     0.0f, 0x1.58a704p-120f, 0.0f, 0x1.0c61d2p-76f, 0.0f, 0.0f, 0.0f, 0x1.9e3cfep-50f,
     0x1.4e0332p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.333976p-1f, 0.0f, 0.0f, 0.0f,
     0x1.f0dc96p-27f, 0x1.609e24p-86f, 0.0f, 0x1.3f2f92p-58f, 0x1.45b3e2p-54f, 0.0f,
     0x1.bdc926p-12f, 0x1.f8701ep-20f, 0x1.803026p-122f, 0x1.2307f6p-50f,
     0x1.12f9a2p-37f, 0.0f, 0.0f, 0x1.d6f5ccp-73f, 0x1.25d956p-47f, 0x1.052efcp-115f,
     0.0f, 0x1.5a924ep-84f, 0x1.950d3ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2925b4p-38f,
     0.0f, 0.0f, 0.0f, 0x1.fa95bap-65f, 0x1.575a1cp-95f, 0.0f, 0.0f, 0x1.1941e6p-53f,
     0.0f, 0.0f, 0x1.32f804p-71f, 0x1.1b12d6p-52f, 0x1.32e9fep-12f, 0.0f,
     0x1.f12ce8p-49f, 0x1.40068p-88f, 0.0f, 0x1.5df032p-69f, 0x1.2bd6c4p-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6bd38p-31f, 0x1.564e0cp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5a13cp-114f, 0x1.963f52p-109f, 0x1.659214p-60f, 0x1.08fa9cp-121f, 0.0f,
     0x1.7b1366p-100f, 0x1.939d22p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a13feap-57f,
     0x1.bacc1cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42c702p-2f, 0x1.e240d6p-121f,
     0.0f, 0x1.48cb9ap-111f, 0x1.e014cp-60f, 0.0f, 0x1.74741p-93f, 0.0f,
     0x1.b27e22p-4f, 0.0f, 0x1.ee3dcep-76f, 0.0f, 0x1.ac829ep-47f, 0.0f,
     0x1.0833aep-13f, 0x1.752d34p-91f, 0.0f, 0x1.533e9p-124f, 0.0f, 0.0f, 0.0f,
     0x1.13f01ep-124f, 0x1.840acep-96f, 0.0f, 0.0f, 0x1.b1ad4ap-114f, 0.0f, 0.0f,
     0x1.a6332ap-97f, 0x1.f99402p-66f, 0x1.f98f56p-50f, 0x1.e7c66cp-63f, 0.0f,
     0x1.691658p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e05acp-45f, 0.0f,
     0x1.26d016p-77f, 0.0f, 0.0f, 0x1.6b7456p-60f, 0.0f, 0x1.4887f4p-1f,
     0x1.c992ccp-29f, 0.0f, 0.0f, 0x1.1ce9c6p-75f, 0.0f, 0x1.87ffdap-26f,
     0x1.b6a22ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9bee4p-80f, 0.0f,
     0x1.0a81dep-57f, 0.0f, 0.0f, 0x1.4da2ecp-94f, 0.0f, 0x1.6ab18ap-33f,
     0x1.f59056p-65f, 0x1.65f0d8p-45f, 0.0f, 0.0f, 0x1.b0a512p-45f, 0.0f,
     0x1.e40a72p-42f, 0x1.1886dcp-117f, 0.0f, 0x1.d4833ep-101f, 0.0f, 0.0f, 0.0f,
     0x1.978218p-34f, 0x1.402daap-24f, 0.0f, 0.0f, 0.0f, 0x1.6d6952p-97f, 0.0f,
     0x1.288a74p-101f, 0x1.53e588p-87f, 0.0f, 0x1.41f3d2p-49f, 0x1.d249b4p-58f,
     0x1.548ef4p-10f, 0.0f, 0.0f, 0x1.24f198p-118f, 0.0f, 0x1.f1236p-101f,
     0x1.c3468cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b51056p-3f,
     0x1.aba642p-46f, 0.0f, 0.0f, 0x1.12734ep-83f, 0.0f, 0x1.284a0ap-123f, 0.0f,
     0x1.c522c2p-10f, 0x1.994b5cp-47f, 0x1.3e191p-124f, 0.0f, 0x1.e3312ap-126f,
     0x1.f6c64ep-28f, 0x1.9fab8ep-10f, 0x1.55e0dep-21f, 0.0f, 0x1.d4d0b2p-105f,
     0x1.3fd7b8p-91f, 0x1.ccc39ap-32f, 0x1.529e06p-96f, 0x1.1c9b76p-1f, 0.0f,
     0x1.8f96c2p-57f, 0.0f, 0x1.edc118p-80f, 0x1.c5244ap-48f, 0.0f, 0x1.7d2c28p-88f,
     0x1.a03c9cp-75f, 0.0f, 0.0f, 0x1.0ad93ap-11f, 0x1.f00b34p-74f, 0.0f,
     0x1.78843ep-93f, 0.0f, 0.0f, 0.0f, 0x1.ff0b06p-3f, 0x1.37217ep-74f,
     0x1.91e55ap-5f, 0.0f, 0x1.70cd6ap-18f, 0x1.0976f4p-15f, 0x1.7e4fdcp-119f,
     0x1.ac299cp-23f, 0.0f, 0.0f, 0.0f, 0x1.1385e2p-39f, 0.0f, 0x1.99c8c8p-92f,
     0x1.5c938p-16f, 0x1.f4fb4p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a35538p-75f,
     0.0f, 0x1.a9546ap-39f, 0.0f, 0.0f, 0x1.3ab08p-111f, 0x1.173316p-70f,
     0x1.e08da8p-18f, 0.0f, 0.0f, 0x1.5ad686p-126f, 0x1.98e55ap-19f, 0.0f,
     0x1.092c88p-106f, 0.0f, 0x1.b2e062p-109f, 0x1.6b32bap-112f, 0x1.ec8d68p-35f,
     0x1.025ca8p-67f, 0.0f, 0x1.d73a52p-95f, 0.0f, 0.0f, 0x1.f5ef16p-45f,
     0x1.51276ep-1f, 0x1.a8c70ap-73f, 0x1.0981aep-41f, 0.0f, 0.0f, 0.0f,
     0x1.fb3cbep-99f, 0.0f, 0x1.a7395cp-66f, 0x1.1a8956p-47f, 0.0f, 0.0f,
     0x1.bcdd82p-59f, 0x1.19617ep-124f, 0x1.6aa8bp-31f, 0.0f, 0x1.84a426p-50f,
     0x1.64bee2p-78f, 0.0f, 0.0f, 0.0f, 0x1.863556p-96f, 0x1.7683eep-22f
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
            tmp1 = Sleef_sinhf4_u10avx2128(tmp0);
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
    printf("Sleef_sinhf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinhf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
