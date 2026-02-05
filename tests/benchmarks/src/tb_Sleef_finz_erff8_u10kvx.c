/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erff8_u10kvx.c --function Sleef_finz_erff8_u10kvx \
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
     0.0f, 0.0f, 0x1.88e3e4p-102f, 0x1.0d6406p-82f, 0x1.27c3b8p-26f,
     0x1.b0059ep-106f, 0x1.defa6ep-39f, 0x1.65565p-82f, 0.0f, 0x1.f49ac4p-64f, 0.0f,
     0.0f, 0x1.5e580cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ce59cp-19f, 0.0f, 0.0f,
     0x1.8103fap-110f, 0.0f, 0x1.bca2d8p-82f, 0x1.d8ac68p-9f, 0x1.4d97a8p-84f, 0.0f,
     0x1.864e52p-46f, 0.0f, 0x1.c81c52p-51f, 0x1.7975ccp-25f, 0x1.da249ap-76f, 0.0f,
     0x1.b32fbcp-58f, 0x1.889c4ep-68f, 0.0f, 0x1.1d69eep-60f, 0x1.2e63dap-15f, 0.0f,
     0x1.28575ap-121f, 0x1.0ccb38p-106f, 0.0f, 0.0f, 0.0f, 0x1.144298p-89f, 0.0f,
     0x1.f69cf4p-77f, 0x1.d2223ep-36f, 0.0f, 0.0f, 0x1.6463fep-89f, 0.0f, 0.0f,
     0x1.33082p-11f, 0.0f, 0x1.adf754p-25f, 0x1.8e1b9p-40f, 0x1.8e8d98p-43f,
     0x1.30845ep-120f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.bbd352p-59f, 0x1.68f128p-1f,
     0.0f, 0x1.5edd5ap-67f, 0x1.be27a8p-10f, 0.0f, 0.0f, 0x1.e04244p-102f, 0.0f, 0.0f,
     0x1.46722ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b65a4p-100f, 0x1.4cea76p-92f,
     0.0f, 0.0f, 0x1.8f562ep-31f, 0x1.aff51cp-13f, 0.0f, 0x1.c206d4p-122f,
     0x1.3f61fep-115f, 0x1.c3e63cp-6f, 0.0f, 0x1.a70faep-56f, 0x1.9003ecp-29f,
     0x1.fff834p-47f, 0x1.75d3d6p-86f, 0x1.9695cp-109f, 0x1.af253cp-89f,
     0x1.6186bap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc7cbap-5f, 0x1.2142ecp-37f, 0.0f,
     0x1.051478p-25f, 0.0f, 0x1.6ae32ap-56f, 0x1.c19ae4p-5f, 0x1.a81bc2p-114f,
     0x1.5a6f8p-105f, 0.0f, 0.0f, 0x1.51a8c2p-86f, 0x1.733a7p-78f, 0.0f,
     0x1.739184p-101f, 0x1.5de18ap-121f, 0.0f, 0x1.041ebap-19f, 0.0f, 0.0f,
     0x1.a8ef0ap-32f, 0x1.cf741p-105f, 0.0f, 0.0f, 0x1.36323ep-93f, 0.0f,
     0x1.029d26p-69f, 0.0f, 0.0f, 0.0f, 0x1.ba4b16p-29f, 0x1.16d74ep-91f, 0.0f,
     0x1.5c171ap-45f, 0.0f, 0.0f, 0x1.36463ap-4f, 0x1.9f2298p-20f, 0.0f, 0.0f,
     0x1.f1ff46p-81f, 0x1.1fa6ccp-25f, 0x1.ac27b4p-40f, 0x1.35e33ep-59f, 0.0f,
     0x1.986e44p-126f, 0x1.11c974p-41f, 0x1.e6e24ep-122f, 0.0f, 0.0f,
     0x1.636448p-107f, 0x1.9d162ep-69f, 0x1.c35d94p-19f, 0x1.32f2aap-51f,
     0x1.048a9ep-92f, 0x1.9a78ccp-118f, 0x1.5899b8p-26f, 0x1.89ff94p-73f,
     0x1.d17366p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d62ep-37f, 0.0f, 0.0f,
     0x1.796312p-12f, 0x1.946c68p-96f, 0.0f, 0.0f, 0x1.c6618ep-116f, 0x1.01d556p-36f,
     0.0f, 0x1.9c7676p-91f, 0x1.6ad112p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.137886p-40f,
     0.0f, 0.0f, 0.0f, 0x1.4f8bf6p-95f, 0.0f, 0x1.0c2p-53f, 0x1.74dbe8p-73f, 0.0f,
     0x1.52b48ep-79f, 0x1.487536p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.631a5cp-38f, 0x1.53470ap-18f, 0.0f, 0x1.f2103ap-1f, 0x1.4e29ecp-49f,
     0x1.c24ba8p-32f, 0.0f, 0x1.4a4e7cp-39f, 0.0f, 0.0f, 0.0f, 0x1.a557d6p-3f,
     0x1.223ab6p-121f, 0.0f, 0x1.d650e2p-4f, 0.0f, 0.0f, 0x1.cd5db6p-2f, 0.0f,
     0x1.553f6ep-53f, 0x1.c7e942p-72f, 0.0f, 0.0f, 0x1.822d9cp-38f, 0.0f, 0.0f,
     0x1.643616p-70f, 0x1.760b0ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b52778p-2f,
     0.0f, 0x1.13b5ap-77f, 0.0f, 0x1.b8a662p-77f, 0.0f, 0x1.6a27f8p-50f,
     0x1.39a54ep-90f, 0x1.b1b78ap-26f, 0.0f, 0.0f, 0x1.9ee228p-49f, 0x1.5b88f4p-87f,
     0x1.e9e5dap-114f, 0.0f, 0.0f, 0.0f, 0x1.eaf176p-98f, 0.0f, 0.0f, 0x1.232474p-67f,
     0.0f, 0x1.3f50eep-20f, 0.0f, 0x1.d22048p-113f, 0x1.719ad8p-34f, 0.0f, 0.0f, 0.0f,
     0x1.71a3ap-121f, 0.0f, 0.0f, 0x1.a0130cp-5f, 0x1.c65adep-126f, 0.0f,
     0x1.337aa8p-54f, 0x1.e466fcp-55f, 0x1.1667b6p-58f, 0.0f, 0x1.19316p-116f,
     0x1.2afe74p-65f, 0x1.9ffe66p-75f, 0.0f, 0x1.0dadeep-20f, 0x1.bc821ap-109f,
     0x1.1b9d96p-64f, 0.0f, 0x1.6d234p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.35c23p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1c08ep-39f, 0.0f, 0x1.fdb7a4p-41f, 0.0f, 0.0f, 0.0f, 0x1.ea05a6p-93f,
     0x1.8bed2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.848a54p-1f,
     0x1.8085e8p-45f, 0x1.ac02acp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae440ep-106f, 0x1.131244p-3f, 0.0f, 0x1.7cc308p-109f, 0x1.e4d592p-71f, 0.0f,
     0x1.8f7c14p-10f, 0x1.166c88p-80f, 0.0f, 0.0f, 0x1.3efd1cp-48f, 0x1.7c7eaap-119f,
     0.0f, 0x1.eb0d2p-59f, 0.0f, 0.0f, 0.0f, 0x1.2d5be2p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e178p-52f, 0x1.fb25bap-14f, 0.0f, 0x1.1377ap-6f, 0x1.c20472p-86f,
     0x1.3e2cbep-11f, 0.0f, 0x1.c21c5ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4868c6p-12f, 0.0f, 0.0f, 0x1.3aee9p-11f, 0.0f, 0x1.f8f922p-111f,
     0x1.7899cep-1f, 0.0f, 0x1.830e2ap-14f, 0.0f, 0.0f, 0.0f, 0x1.dddddcp-82f,
     0x1.7c6692p-117f, 0x1.a8201cp-2f, 0x1.1df788p-21f, 0.0f, 0.0f, 0x1.a24c48p-31f,
     0.0f, 0.0f, 0x1.847332p-88f, 0.0f, 0x1.38a264p-56f, 0.0f, 0.0f, 0x1.e4d864p-2f,
     0x1.abc56ap-20f, 0.0f, 0x1.39623ep-85f, 0.0f, 0x1.cc03dp-41f, 0.0f,
     0x1.56a524p-58f, 0x1.6ba416p-113f, 0x1.48e8a6p-40f, 0x1.a907d8p-106f,
     0x1.c86056p-54f, 0.0f, 0.0f, 0x1.c25cbp-24f, 0.0f, 0.0f, 0x1.5bd928p-86f,
     0x1.12fa76p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b4f04p-53f, 0x1.2bca5p-62f, 0x1.f1319p-64f, 0x1.b58d7cp-124f, 0.0f,
     0x1.e0588cp-119f, 0.0f, 0x1.971fdp-121f, 0x1.f398dp-88f, 0.0f, 0.0f,
     0x1.0873a2p-15f, 0.0f, 0.0f, 0x1.65c574p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a198b2p-14f, 0x1.a10c4ep-37f, 0x1.eeb4a6p-113f, 0.0f, 0x1.5e8edep-63f, 0.0f,
     0x1.6c66d6p-116f, 0.0f, 0.0f, 0x1.8ed9e2p-33f, 0.0f, 0.0f, 0.0f, 0x1.d6b834p-75f,
     0x1.4903ccp-56f, 0x1.fbe25cp-106f, 0x1.cc4e98p-45f, 0x1.c6a33ap-9f, 0.0f,
     0x1.fccadap-24f, 0.0f, 0x1.315902p-113f, 0.0f, 0x1.d9db6cp-76f, 0.0f, 0.0f,
     0x1.d8f426p-12f, 0x1.594a8ep-40f, 0.0f, 0.0f, 0x1.7c94a4p-73f, 0x1.c6cd82p-25f,
     0.0f, 0x1.9f35d6p-72f, 0.0f, 0x1.b9168ap-78f, 0x1.e35aa6p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5c234cp-112f, 0x1.8e3514p-74f, 0.0f, 0x1.d3499ap-45f,
     0x1.eeda94p-96f, 0.0f, 0.0f, 0x1.0e61aap-90f, 0.0f, 0.0f, 0x1.93bcecp-74f,
     0x1.089c54p-37f, 0x1.de12cep-30f, 0.0f, 0x1.1665fp-18f, 0.0f, 0x1.1c4a9cp-70f,
     0.0f, 0.0f, 0x1.0ae1aep-3f, 0.0f, 0x1.5862dap-6f, 0x1.dbed8cp-96f, 0.0f, 0.0f,
     0.0f, 0x1.811fb6p-25f, 0x1.0107b6p-44f, 0.0f, 0x1.7a999cp-45f, 0x1.b41f32p-55f,
     0.0f, 0.0f, 0x1.2c1a02p-91f, 0.0f, 0x1.ab5efap-34f, 0.0f, 0.0f, 0.0f,
     0x1.5873e4p-63f, 0x1.7b168ep-35f, 0x1.e6b55ap-53f, 0.0f, 0.0f, 0.0f,
     0x1.3a4b6ap-67f, 0.0f, 0x1.e626acp-13f, 0x1.0c715ep-102f, 0x1.486d2ep-113f,
     0x1.e8769cp-26f, 0.0f, 0.0f, 0x1.806b62p-97f, 0.0f, 0x1.003cd8p-119f,
     0x1.64cd08p-119f, 0.0f, 0x1.e0fd9p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.06440cp-68f, 0x1.2ccb02p-107f, 0x1.5f8cb2p-6f,
     0x1.c6ac44p-11f, 0.0f, 0x1.6030b8p-57f, 0.0f, 0x1.c0ed84p-29f, 0.0f, 0.0f,
     0x1.59f24p-121f, 0.0f, 0.0f, 0.0f, 0x1.3b4594p-24f, 0x1.6af086p-90f, 0.0f, 0.0f,
     0x1.327256p-122f, 0x1.6f0842p-31f, 0.0f, 0x1.a878f2p-106f, 0.0f, 0.0f, 0.0f,
     0x1.14e706p-61f, 0.0f, 0x1.ee8fbap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4853cp-46f,
     0.0f, 0x1.b334bep-53f, 0.0f, 0x1.d087c6p-115f, 0x1.5021c8p-46f, 0x1.115ecap-32f,
     0x1.d3da8p-110f, 0.0f, 0.0f, 0.0f, 0x1.82365ep-81f, 0.0f, 0x1.5dd66cp-50f, 0.0f,
     0.0f, 0.0f, 0x1.27f09p-15f, 0.0f, 0x1.eaf8b4p-123f, 0.0f, 0x1.c8015ap-93f,
     0x1.7c2f6ep-103f, 0x1.f1e876p-119f, 0x1.a1bd5cp-29f, 0x1.e723eap-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a03d8p-36f, 0x1.0019f8p-87f,
     0x1.510c5ap-117f, 0x1.452d9ap-100f, 0x1.764adap-63f, 0x1.8c93dap-116f,
     0x1.4055ccp-61f, 0x1.1fdedcp-33f, 0x1.f3561cp-92f, 0x1.9dde1ep-51f,
     0x1.29ffdep-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43585ap-98f,
     0x1.db652p-87f, 0x1.37ad4cp-108f, 0x1.e8f296p-72f, 0.0f, 0x1.b9f078p-52f,
     0x1.9993e4p-95f, 0x1.ea4cd4p-19f, 0.0f, 0x1.3c9574p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b81cbcp-34f, 0.0f, 0.0f, 0x1.0feb6cp-3f, 0.0f, 0.0f, 0x1.58a856p-9f,
     0x1.d672c4p-96f, 0x1.57ab2cp-116f, 0x1.bbe7bap-20f, 0x1.3a4b02p-77f, 0.0f,
     0x1.a00656p-116f, 0.0f, 0.0f, 0x1.d76738p-86f, 0.0f, 0.0f, 0x1.1b30bep-111f,
     0.0f, 0.0f, 0.0f, 0x1.d76156p-102f, 0x1.49213cp-101f, 0.0f, 0.0f,
     0x1.3d0616p-75f, 0.0f, 0x1.f01978p-118f, 0x1.1f8ca6p-88f, 0x1.47e166p-51f, 0.0f,
     0x1.687bc2p-98f, 0.0f, 0.0f, 0x1.6ed7bcp-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.348d26p-79f, 0x1.145872p-30f, 0.0f, 0x1.03abap-25f, 0x1.e7ec0cp-105f, 0.0f,
     0x1.10cd48p-14f, 0x1.507a8ap-59f, 0x1.94a494p-111f, 0x1.bbf29cp-71f,
     0x1.c28272p-79f, 0.0f, 0x1.a25feap-101f, 0.0f, 0x1.6118bap-68f, 0.0f,
     0x1.24da7ap-78f, 0.0f, 0.0f, 0.0f, 0x1.187648p-30f, 0x1.ffe9b4p-86f, 0.0f,
     0x1.d8611cp-119f, 0x1.c7322ep-121f, 0x1.27025ep-85f, 0x1.ddcfcap-80f, 0.0f, 0.0f,
     0.0f, 0x1.3fa84ep-114f, 0.0f, 0x1.1ea528p-60f, 0x1.b472d8p-96f, 0x1.fc2d0cp-47f,
     0.0f, 0x1.147694p-16f, 0x1.55c042p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.40ab34p-97f, 0.0f, 0.0f, 0x1.1a1f86p-35f, 0.0f, 0x1.7af1ccp-90f,
     0x1.39facep-91f, 0.0f, 0.0f, 0x1.a6e444p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0693b4p-6f, 0x1.41f3f8p-32f, 0.0f, 0x1.8813fep-9f, 0.0f, 0.0f,
     0x1.b5081ep-107f, 0.0f, 0x1.11655ep-28f, 0.0f, 0.0f, 0.0f, 0x1.9e8988p-32f, 0.0f,
     0x1.5cea58p-18f, 0.0f, 0.0f, 0x1.ab0f28p-118f, 0x1.c2c79ep-106f, 0.0f,
     0x1.be1bbcp-4f, 0x1.52fb48p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3feefep-14f,
     0x1.6854a6p-2f, 0.0f, 0x1.a1d4dap-41f, 0x1.e6baaap-12f, 0x1.a5db94p-44f,
     0x1.296a3p-87f, 0x1.bd1a7p-61f, 0.0f, 0x1.2266ap-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c277b8p-69f, 0.0f, 0.0f, 0.0f, 0x1.52be7ap-31f, 0x1.4caa6p-85f, 0.0f,
     0x1.afc918p-64f, 0.0f, 0x1.94accp-98f, 0.0f, 0.0f, 0x1.812b98p-102f, 0.0f, 0.0f,
     0x1.8666dp-24f, 0.0f, 0x1.37fafp-57f, 0x1.b90bc6p-66f, 0.0f, 0x1.7e9a52p-85f,
     0x1.38f0ep-109f, 0.0f, 0.0f, 0.0f, 0x1.c09b2p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d5f24p-2f, 0x1.813ba2p-56f, 0.0f, 0x1.c6183p-8f, 0x1.9a073ap-66f,
     0x1.eaf8acp-86f, 0x1.910408p-105f, 0x1.8937b6p-44f, 0x1.bf233ap-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.398d96p-93f, 0x1.2265f4p-12f, 0.0f, 0.0f, 0.0f,
     0x1.98fca8p-1f, 0.0f, 0.0f, 0.0f, 0x1.4f97bap-13f, 0.0f, 0x1.4b85c6p-97f,
     0x1.bbcc5ap-20f, 0x1.888b72p-42f, 0x1.32bc2ep-71f, 0.0f, 0x1.f064bp-68f, 0.0f,
     0x1.cfddep-75f, 0x1.85735p-64f, 0.0f, 0x1.eb7828p-18f, 0.0f, 0x1.f8255cp-74f,
     0x1.a22444p-98f, 0x1.acfd86p-64f, 0.0f, 0.0f, 0x1.bd321cp-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4db12ep-54f, 0.0f, 0x1.4dfe9p-58f, 0x1.69283ep-28f, 0.0f,
     0x1.bb1d6p-123f, 0x1.750d5ap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7de9bep-41f, 0x1.c1aecp-19f, 0x1.824c4ap-14f, 0x1.aa3a74p-126f,
     0x1.5e3888p-10f, 0x1.151438p-111f, 0x1.264ce4p-28f, 0.0f, 0.0f, 0x1.61d5fap-109f,
     0.0f, 0.0f, 0.0f, 0x1.d3d3f8p-119f, 0.0f, 0x1.636c22p-119f, 0x1.59df3ap-41f,
     0.0f, 0x1.d3bd24p-24f, 0.0f, 0.0f, 0x1.c9598ap-37f, 0x1.b101acp-83f,
     0x1.bf0dc4p-92f, 0.0f, 0.0f, 0x1.e21d64p-121f, 0.0f, 0x1.265456p-41f, 0.0f,
     0x1.5d2e34p-31f, 0x1.e88206p-29f, 0x1.476a1cp-27f, 0x1.2b05aep-63f,
     0x1.2663fep-124f, 0.0f, 0x1.15e54ep-113f, 0.0f, 0x1.8cdfd2p-15f, 0x1.4cfc3ap-23f,
     0.0f, 0x1.49c628p-46f, 0.0f, 0x1.a78fa6p-33f, 0.0f, 0.0f, 0.0f, 0x1.1b0c62p-103f,
     0.0f, 0x1.bc5432p-15f, 0x1.5c2f66p-102f, 0.0f, 0.0f, 0.0f, 0x1.caa9a2p-82f, 0.0f,
     0.0f, 0x1.7a0e04p-110f, 0.0f, 0.0f, 0.0f, 0x1.13e6fap-80f, 0x1.ebdacp-63f, 0.0f,
     0x1.d22074p-83f, 0.0f, 0x1.33c762p-11f, 0.0f, 0x1.680c3p-61f, 0.0f, 0.0f,
     0x1.538102p-24f, 0x1.662d4p-67f, 0.0f, 0x1.dfce9ap-14f, 0x1.0d7e02p-115f, 0.0f,
     0x1.d427f6p-67f, 0x1.7a435ap-77f, 0.0f, 0.0f, 0x1.104b78p-22f, 0.0f, 0.0f, 0.0f,
     0x1.0e5678p-72f, 0.0f, 0x1.c42c24p-120f, 0.0f, 0.0f, 0x1p0f, 0x1.6784fp-87f,
     0.0f, 0x1.025d5ap-27f, 0.0f, 0.0f, 0x1.7b6218p-11f, 0x1.356ca6p-45f,
     0x1.769a86p-108f, 0.0f, 0.0f, 0x1.8c574cp-111f, 0x1.d660cp-54f, 0x1.bf38eap-36f,
     0.0f, 0.0f, 0.0f, 0x1.7d1902p-30f, 0x1.ff296cp-84f, 0x1.5d330ap-55f,
     0x1.822e8cp-78f, 0.0f, 0x1.0efd6ep-3f, 0.0f, 0.0f, 0.0f, 0x1.6d2348p-52f, 0.0f,
     0x1.41f12ap-86f, 0x1.d15c14p-82f, 0.0f, 0x1.c96a56p-15f, 0x1.f1125cp-30f,
     0x1.3e2ff4p-56f, 0x1.4fb934p-73f, 0.0f, 0.0f, 0.0f, 0x1.f6132ap-57f, 0.0f, 0.0f,
     0x1.f0f196p-113f, 0x1.4c7d7ep-24f, 0.0f, 0x1.cdde52p-109f, 0x1.f55ac8p-55f, 0.0f,
     0x1.4bf218p-67f, 0x1.abac7ep-70f, 0.0f
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
            tmp1 = Sleef_finz_erff8_u10kvx(tmp0);
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
    printf("Sleef_finz_erff8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_erff8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
