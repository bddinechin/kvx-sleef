/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_atanhf.c --function atanhf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9919a8p-43f, 0x1.8b3cc8p-113f, 0x1.f3f21p-97f,
     0x1.586fd2p-76f, 0.0f, 0x1.0134bp-86f, 0.0f, 0x1.59c5c4p-8f, 0x1.2c62dap-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35486ep-120f, 0.0f, 0.0f, 0.0f,
     0x1.ac9364p-78f, 0x1.eb6ab6p-67f, 0.0f, 0x1.d5378ap-60f, 0x1.109eb8p-38f,
     0x1.c6389cp-72f, 0.0f, 0x1.dcce82p-101f, 0x1.240216p-50f, 0x1.0675dep-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a286b6p-91f, 0x1.ec5446p-111f,
     0x1.516982p-78f, 0x1.d4b616p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea8686p-65f,
     0x1.c481fcp-28f, 0x1.8144f2p-109f, 0.0f, 0.0f, 0x1.e52686p-11f, 0.0f,
     0x1.8cd494p-23f, 0x1.7020c6p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec2bbcp-56f,
     0x1.c506cep-96f, 0x1.2e3e98p-119f, 0.0f, 0x1.088968p-88f, 0x1.d79b64p-26f,
     0x1.135af8p-120f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.e635fap-106f, 0.0f,
     0x1.8250ap-83f, 0x1.e716e4p-23f, 0x1.4d2c16p-44f, 0.0f, 0x1.31500ap-36f,
     0x1.98caa6p-32f, 0x1.56c5d4p-117f, 0.0f, 0.0f, 0.0f, 0x1.700a0ep-2f,
     0x1.419ebp-91f, 0.0f, 0x1p0f, 0x1.06f422p-126f, 0.0f, 0.0f, 0x1.186962p-115f,
     0x1.9ca58cp-31f, 0.0f, 0x1.0e0c1cp-103f, 0x1.fe2baep-30f, 0.0f, 0.0f,
     0x1.1af51ep-123f, 0x1.4ac2e8p-2f, 0x1.155fe6p-100f, 0x1.3560f6p-6f,
     0x1.d1a1f4p-32f, 0.0f, 0x1.ef0988p-14f, 0x1.a64e36p-76f, 0x1.64630ap-62f, 0.0f,
     0.0f, 0x1.240746p-54f, 0.0f, 0x1.ac72b2p-124f, 0.0f, 0x1.7de1ecp-73f, 0.0f,
     0x1.56202ap-68f, 0x1.fb4b16p-37f, 0.0f, 0.0f, 0x1.7f242ap-96f, 0.0f, 0.0f,
     0x1.6bea16p-73f, 0.0f, 0x1.f40792p-53f, 0x1.aa8928p-61f, 0x1.e133eap-23f, 0.0f,
     0x1.132a66p-38f, 0x1.495a14p-95f, 0.0f, 0.0f, 0x1.44089ap-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e295fap-81f, 0x1.7741e2p-11f,
     0.0f, 0x1.2b2994p-51f, 0.0f, 0.0f, 0.0f, 0x1.53b786p-102f, 0.0f, 0.0f,
     0x1.ee4e6p-112f, 0x1.8516dep-71f, 0x1.b5e9cap-47f, 0x1.6d754ap-10f,
     0x1.10e7f2p-4f, 0x1.98c286p-97f, 0.0f, 0.0f, 0x1.1259fap-6f, 0x1.84d9ccp-30f,
     0x1.8e47cp-48f, 0x1.06ca26p-60f, 0x1.9bdd7cp-46f, 0.0f, 0x1.3cc488p-104f, 0.0f,
     0.0f, 0.0f, 0x1.cdc0eep-38f, 0.0f, 0.0f, 0.0f, 0x1.8610bp-84f, 0x1.3e8986p-95f,
     0.0f, 0.0f, 0x1.79fb4ep-94f, 0x1.3cabep-40f, 0x1.ed5b34p-29f, 0.0f, 0.0f,
     0x1.8588cp-29f, 0.0f, 0x1.131aaep-16f, 0x1.a3473p-6f, 0x1.8e569cp-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7099a6p-105f, 0.0f, 0.0f, 0x1.dda92cp-53f, 0.0f,
     0.0f, 0x1.f38a06p-103f, 0x1.61b1b4p-104f, 0.0f, 0.0f, 0.0f, 0x1.da513ap-8f, 0.0f,
     0x1.dcadcep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.360098p-50f, 0.0f, 0.0f,
     0x1.dc90cp-29f, 0x1.421ce2p-9f, 0.0f, 0x1.af60cap-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.962b6ap-31f, 0x1.9a51dep-63f, 0.0f, 0.0f, 0.0f, 0x1.79905p-111f, 0.0f,
     0x1.2c6bdep-46f, 0.0f, 0.0f, 0x1.ae8de8p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.edd52p-31f, 0x1.6e1386p-89f, 0.0f, 0x1.fe478ap-47f,
     0x1.a173cp-31f, 0x1.141f9p-77f, 0x1.b60f82p-87f, 0.0f, 0x1.43d15cp-11f,
     0x1.916242p-102f, 0.0f, 0x1.b8c642p-48f, 0x1.b177a8p-58f, 0.0f, 0x1.484dccp-12f,
     0x1p0f, 0.0f, 0.0f, 0x1.7baa82p-6f, 0.0f, 0x1.8fb40ep-23f, 0x1.eab92cp-116f,
     0.0f, 0.0f, 0x1.ce5d9ap-89f, 0.0f, 0.0f, 0.0f, 0x1.bf0476p-108f,
     0x1.10f4e6p-106f, 0.0f, 0x1.d66686p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d40364p-60f,
     0.0f, 0x1.2f8f64p-50f, 0.0f, 0.0f, 0.0f, 0x1.5bb5a4p-44f, 0.0f, 0.0f,
     0x1.26f5e6p-43f, 0x1.2d907ap-33f, 0.0f, 0x1.655e94p-107f, 0x1.46fca6p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.23730cp-20f, 0.0f, 0.0f, 0.0f, 0x1.379678p-103f,
     0x1.2b142p-91f, 0.0f, 0.0f, 0x1.37c15cp-8f, 0x1.77de78p-36f, 0x1.7f5106p-17f,
     0x1.f2ca04p-92f, 0.0f, 0x1.853116p-73f, 0x1.6a04dap-19f, 0.0f, 0.0f,
     0x1.3d77c4p-65f, 0x1.2fee9p-14f, 0x1.3cf858p-70f, 0.0f, 0x1.bf459ep-25f, 0.0f,
     0.0f, 0x1.1bfafp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3480c8p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bef6cp-33f, 0.0f, 0.0f, 0x1.38f97ep-101f, 0x1.52f036p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1ccc1cp-86f, 0x1.8d001ep-31f, 0.0f, 0x1.d3b62p-63f, 0.0f,
     0.0f, 0x1.74db22p-12f, 0x1.2db512p-101f, 0.0f, 0.0f, 0x1.6be09ap-27f, 0.0f, 0.0f,
     0.0f, 0x1.9f8866p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9d0bp-50f, 0x1.99689p-63f,
     0.0f, 0.0f, 0x1.1ed438p-90f, 0.0f, 0x1.5ebcb4p-32f, 0.0f, 0.0f, 0x1.a7794ap-48f,
     0x1.d362ecp-115f, 0x1.ff7e6cp-108f, 0.0f, 0x1.2deb5p-97f, 0x1.e1d9fap-85f, 0.0f,
     0x1.0207ecp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b9dbep-42f, 0.0f, 0.0f,
     0x1.a67868p-98f, 0x1.e4130ep-19f, 0.0f, 0x1.e7a088p-100f, 0x1.c50ffcp-84f,
     0x1.44703ap-117f, 0x1.c2f0bp-68f, 0x1.128d38p-43f, 0.0f, 0.0f, 0x1.0b0b9cp-88f,
     0x1.bee4fp-1f, 0x1.76ac18p-19f, 0x1.729036p-11f, 0x1.2acb16p-46f, 0.0f, 0.0f,
     0x1.5182cap-95f, 0x1.bbaf2ap-120f, 0x1.4010ap-35f, 0x1.11ddeap-58f, 0.0f,
     0x1.c625d2p-112f, 0x1.46f58ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cee56p-81f,
     0x1.631fdep-60f, 0x1.46c632p-119f, 0.0f, 0x1.d6d158p-36f, 0x1.4fecacp-86f, 0.0f,
     0.0f, 0x1.21258p-7f, 0.0f, 0.0f, 0x1.af86a2p-67f, 0x1.32c6aep-69f,
     0x1.f51842p-79f, 0.0f, 0x1.9570acp-8f, 0.0f, 0.0f, 0.0f, 0x1.47665cp-104f,
     0x1.ab76aep-117f, 0x1.3a1b2p-114f, 0x1.13bf0ap-56f, 0.0f, 0.0f, 0x1.712a94p-52f,
     0x1.f40062p-1f, 0x1.7e75fp-74f, 0x1.24a4ep-3f, 0x1.393dfp-20f, 0x1.165f54p-39f,
     0x1.9b2b82p-48f, 0.0f, 0.0f, 0x1.3ed67ep-69f, 0x1.4d7484p-46f, 0.0f,
     0x1.657526p-7f, 0x1.6a2f9ap-117f, 0x1.e2149p-32f, 0x1.caf55p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.03db06p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bc6c2p-117f,
     0x1.83fd28p-6f, 0x1.e40c5p-87f, 0.0f, 0x1.721d68p-106f, 0.0f, 0x1.128354p-75f,
     0x1.37395cp-89f, 0.0f, 0.0f, 0.0f, 0x1.c35c5ep-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d755d4p-60f, 0x1.65194ep-29f, 0.0f, 0x1.0f868ep-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9671dep-108f, 0.0f, 0x1.ef589ap-56f, 0x1.fea49ap-2f, 0x1.b1a718p-39f,
     0x1.e66eecp-28f, 0x1.f39ed4p-41f, 0x1.c4cd52p-66f, 0.0f, 0.0f, 0.0f,
     0x1.0ceb5ap-107f, 0x1.9476bep-61f, 0x1.b895a8p-114f, 0x1.d445ecp-23f, 0.0f, 0.0f,
     0x1.0036e8p-66f, 0.0f, 0x1.c35eb6p-93f, 0x1.57d3b4p-78f, 0x1.1c8688p-56f, 0.0f,
     0.0f, 0.0f, 0x1.2dc884p-59f, 0x1.9db598p-26f, 0x1.c6874ep-8f, 0.0f,
     0x1.d2c718p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5035cp-58f, 0x1.c02ee6p-80f, 0.0f,
     0x1.2af6bap-97f, 0.0f, 0x1.4e75a8p-2f, 0.0f, 0.0f, 0.0f, 0x1.8e1b9p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6ebc6p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.325cfcp-15f,
     0.0f, 0.0f, 0.0f, 0x1.ad0176p-96f, 0x1.59a618p-67f, 0x1.23572p-41f,
     0x1.05222ap-26f, 0.0f, 0x1.b31b6cp-89f, 0.0f, 0.0f, 0.0f, 0x1.319e3ap-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.279de6p-103f, 0.0f, 0x1.76704cp-1f, 0x1.385228p-44f, 0.0f,
     0x1.68d60cp-47f, 0.0f, 0x1.44e34cp-47f, 0x1.aa15b6p-67f, 0.0f, 0.0f,
     0x1.684146p-104f, 0x1.f4a9c6p-85f, 0.0f, 0.0f, 0x1.bb1fdcp-123f,
     0x1.57e2dap-125f, 0.0f, 0.0f, 0.0f, 0x1.5238c2p-45f, 0x1.2bc22ep-65f, 0.0f,
     0x1p0f, 0x1.fbf10ep-21f, 0x1.0630bep-55f, 0.0f, 0.0f, 0x1.ad5f62p-25f,
     0x1.8319acp-80f, 0x1.1f5bfp-30f, 0x1.fb74cap-27f, 0.0f, 0.0f, 0x1.08ec2ep-28f,
     0.0f, 0x1.52bedap-82f, 0.0f, 0x1.6e5f02p-5f, 0.0f, 0.0f, 0.0f, 0x1.2a11fp-8f,
     0.0f, 0.0f, 0x1.80f1bep-86f, 0.0f, 0x1.fceb8ep-80f, 0.0f, 0x1.857712p-119f, 0.0f,
     0x1.adfbap-19f, 0.0f, 0x1.476252p-90f, 0.0f, 0x1.02ec3p-42f, 0.0f,
     0x1.8ee57ep-27f, 0.0f, 0x1.4f569cp-70f, 0.0f, 0.0f, 0x1.f88ec2p-113f, 0.0f, 0.0f,
     0x1.ec2418p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea34d2p-53f, 0x1.ad0e62p-44f,
     0.0f, 0.0f, 0x1.8d1b0ep-93f, 0x1.ec8184p-69f, 0x1.a81a46p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1d2b56p-121f, 0.0f, 0.0f, 0x1.c9d48p-58f, 0x1.416e76p-84f, 0.0f,
     0.0f, 0x1.7f54acp-120f, 0x1.a7bcc2p-76f, 0x1.77f588p-16f, 0x1.cc177ep-46f, 0.0f,
     0.0f, 0.0f, 0x1.aaf974p-27f, 0.0f, 0.0f, 0.0f, 0x1.4b5d78p-2f, 0.0f, 0.0f, 0.0f,
     0x1.4a90f6p-81f, 0x1.7713fep-102f, 0x1.d5f28ep-102f, 0.0f, 0.0f, 0.0f,
     0x1.f7c55cp-8f, 0x1.99a03p-61f, 0.0f, 0.0f, 0x1.10c524p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc53cep-29f, 0.0f, 0.0f, 0x1.5c99fap-22f, 0.0f, 0.0f, 0.0f,
     0x1.96e64ep-42f, 0x1.c987acp-49f, 0.0f, 0x1.e8324p-45f, 0x1.986bd8p-30f,
     0x1.1d6376p-63f, 0x1.fec14ep-119f, 0.0f, 0x1.5b9178p-116f, 0.0f, 0.0f,
     0x1.3231a2p-70f, 0x1.024a94p-11f, 0x1.514234p-73f, 0x1.140294p-104f,
     0x1.110988p-48f, 0x1.88d576p-97f, 0.0f, 0.0f, 0x1.c28d1ap-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9646b2p-47f, 0x1.38ea98p-119f, 0.0f, 0x1.e075b6p-76f,
     0x1.24690ep-67f, 0.0f, 0x1.5be036p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc0668p-103f, 0.0f, 0x1.a536e8p-119f, 0x1.60260ap-92f, 0.0f,
     0x1.6f4ae6p-102f, 0x1.c64f5p-9f, 0.0f, 0x1.bdb79cp-67f, 0x1.d2c688p-21f,
     0x1.188a24p-43f, 0x1.4e644ap-68f, 0.0f, 0.0f, 0.0f, 0x1.f17b3p-95f,
     0x1.857c74p-125f, 0x1.551ea8p-110f, 0.0f, 0x1.9bd18ap-20f, 0x1.9b28b6p-119f,
     0.0f, 0x1.e80a4ep-118f, 0.0f, 0.0f, 0x1.c64d4cp-54f, 0x1.dd3132p-18f, 0.0f, 0.0f,
     0x1.bf84cp-17f, 0.0f, 0.0f, 0x1.9397ep-32f, 0.0f, 0.0f, 0x1.cfe42p-64f,
     0x1.80f6cep-51f, 0x1.5751d2p-29f, 0.0f, 0.0f, 0x1.6947d8p-114f, 0.0f,
     0x1.8be072p-116f, 0.0f, 0x1.8ddb04p-82f, 0.0f, 0x1.50f344p-75f, 0x1.ac0e66p-118f,
     0.0f, 0.0f, 0x1.bc5c5cp-91f, 0.0f, 0x1.d8cf04p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.33e47p-90f, 0.0f, 0x1p0f, 0x1.463434p-47f, 0x1.add5eep-72f, 0.0f,
     0x1.de7bcp-33f, 0.0f, 0x1.f5d6f6p-36f, 0.0f, 0x1.90ee9p-5f, 0.0f,
     0x1.dd9bd6p-36f, 0.0f, 0.0f, 0.0f, 0x1.6497ap-37f, 0x1.1679aap-10f, 0.0f,
     0x1.56619cp-58f, 0.0f, 0x1.2a39c8p-60f, 0.0f, 0x1.bba0c6p-58f, 0.0f, 0.0f, 0.0f,
     0x1.258b64p-62f, 0.0f, 0x1.30941ap-115f, 0.0f, 0x1.884608p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e4435ap-44f, 0x1.754884p-122f, 0x1.3f1d6cp-119f, 0x1.8b95e4p-66f,
     0x1.da27ccp-83f, 0.0f, 0.0f, 0x1.ca53cap-33f, 0.0f, 0x1.05aaa4p-77f,
     0x1.8290a2p-33f, 0.0f, 0x1.5b4656p-40f, 0.0f, 0x1.bd88d2p-104f, 0.0f, 0.0f,
     0x1.98b95ap-41f, 0.0f, 0x1.c84024p-28f, 0.0f, 0x1.6d7dccp-116f, 0x1.c5df3ep-75f,
     0x1.50821ep-101f, 0x1.70b31ep-94f, 0.0f, 0.0f, 0x1.c6217p-104f, 0.0f,
     0x1.854fd4p-92f, 0x1.ba5846p-71f, 0x1.1a5786p-37f, 0x1.ceee1p-18f,
     0x1.85c5aep-79f, 0x1.6318dcp-14f, 0.0f, 0x1.847b0ep-33f, 0x1.21c9fap-27f,
     0x1.821ef6p-28f, 0.0f, 0.0f, 0x1.44367ap-96f, 0x1.be3c58p-95f, 0.0f, 0.0f,
     0x1.1b0d38p-22f, 0.0f, 0.0f, 0x1.cf823p-117f, 0x1.893394p-12f, 0x1.36dfacp-111f,
     0x1.4df636p-44f, 0.0f, 0.0f, 0.0f, 0x1.dd5cf2p-43f, 0x1.31f1bap-57f, 0.0f, 0.0f,
     0x1.521eb6p-63f, 0.0f, 0.0f, 0x1.b84904p-14f, 0.0f, 0x1.921e9p-86f, 0.0f, 0.0f,
     0.0f, 0x1.9de87p-13f, 0.0f, 0.0f, 0.0f, 0x1.5f344ep-71f, 0x1.442c56p-27f, 0.0f,
     0x1.c5a206p-124f, 0.0f, 0x1.1b00b2p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ca40ap-26f,
     0x1.14058ep-85f, 0.0f, 0.0f, 0x1.21d064p-116f, 0.0f, 0.0f, 0x1.ddec82p-50f, 0.0f,
     0x1.3964cep-56f, 0.0f, 0x1.6e86bp-16f, 0.0f, 0.0f, 0.0f, 0x1.44cfd6p-37f,
     0x1.f1dd34p-28f, 0x1.b4acd6p-45f, 0.0f, 0.0f, 0.0f, 0x1.9a085cp-111f,
     0x1.b8cd92p-68f, 0.0f, 0x1.f82d18p-107f, 0x1.f55218p-5f, 0.0f, 0.0f, 0.0f,
     0x1.3044c8p-70f, 0.0f, 0x1.00487ap-93f, 0x1.aa5f02p-28f, 0.0f, 0.0f,
     0x1.6d4108p-10f, 0x1p0f, 0.0f, 0x1.3f9362p-119f, 0x1.08475ep-73f,
     0x1.1f2192p-67f, 0x1.84f4a2p-120f, 0x1.1a06c2p-22f, 0x1.105b88p-54f,
     0x1.c9bf52p-116f, 0x1.e2afe8p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb867p-71f,
     0x1.2ee684p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29894cp-1f, 0x1.181bd6p-10f, 0.0f,
     0x1.d5fb8ep-82f, 0x1.74864ep-6f, 0.0f, 0x1.acbc08p-106f, 0.0f, 0x1.8a70a8p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a41b5ep-26f, 0.0f, 0x1.a44a52p-38f, 0x1.e52e9ep-112f,
     0.0f, 0x1.c0db4ap-37f, 0.0f, 0x1.c68d3cp-59f, 0.0f, 0.0f, 0x1.081ccep-105f,
     0x1.e855dap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74483p-10f, 0x1.ffee3cp-39f, 0.0f,
     0.0f, 0x1.8842b2p-46f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.e23d96p-37f,
     0x1.cc5d82p-75f, 0x1.993268p-87f, 0.0f, 0.0f, 0.0f
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
            tmp1 = atanhf(tmp0);
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
    printf("atanhf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("atanhf bench acc %a\n", global_bench_acc);
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
