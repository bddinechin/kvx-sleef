/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_sinhf.c --function sinhf --headers math.h,ml_support_lib.h \
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
     0x1.fec922p-106f, 0.0f, 0x1.d9afb2p-46f, 0x1.5898fcp-27f, 0x1.d8e75cp-54f,
     0x1.5d644ep-17f, 0x1.1aca66p-74f, 0x1.05c68cp-119f, 0.0f, 0x1.ae3d48p-9f, 0.0f,
     0.0f, 0x1.96b754p-94f, 0x1.bf26p-24f, 0.0f, 0.0f, 0x1.7e95c2p-95f,
     0x1.316776p-100f, 0.0f, 0x1.a7d864p-87f, 0.0f, 0x1.433634p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e26642p-36f, 0x1.d36c04p-19f, 0.0f, 0.0f, 0x1.413288p-3f,
     0x1.44cd48p-71f, 0x1.b5148p-113f, 0x1.55f644p-65f, 0x1.9d4772p-124f,
     0x1.e05116p-10f, 0x1.9c7574p-26f, 0x1.b25df8p-15f, 0.0f, 0x1.e5d184p-15f, 0.0f,
     0x1.5d3f5p-28f, 0.0f, 0x1.edf6ep-109f, 0.0f, 0x1.139918p-46f, 0.0f,
     0x1.6b81b8p-63f, 0x1.851bc6p-123f, 0x1.6fc70ep-111f, 0.0f, 0x1.d0b086p-98f, 0.0f,
     0.0f, 0.0f, 0x1.abb51p-32f, 0x1.0ce1f6p-42f, 0.0f, 0x1.e97bcp-18f,
     0x1.aa4584p-84f, 0x1.57b27ep-25f, 0x1.b2218ep-73f, 0x1.530a7p-48f, 0.0f,
     0x1.2a96cep-61f, 0x1.321cb6p-85f, 0.0f, 0.0f, 0x1.00785ap-92f, 0.0f,
     0x1.70bc7ap-102f, 0.0f, 0x1.57209ap-16f, 0.0f, 0x1.202656p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ca64cp-60f, 0.0f, 0x1.09006ep-75f, 0.0f, 0x1.7222bcp-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dd32fap-73f, 0.0f, 0x1.8228d4p-73f, 0.0f, 0x1.b76dcep-99f, 0.0f,
     0.0f, 0.0f, 0x1.a73a2ep-118f, 0.0f, 0.0f, 0x1.4fa81cp-110f, 0.0f,
     0x1.6ee2ccp-33f, 0x1.9a6514p-103f, 0x1.979cf2p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.c5261ap-58f, 0x1.aa9bfap-65f, 0x1.e8733cp-119f, 0.0f,
     0x1.f400d4p-125f, 0x1.7c5e44p-75f, 0x1.e21c16p-117f, 0.0f, 0x1.a2b0f6p-98f, 0.0f,
     0x1.b76704p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.004b82p-79f, 0.0f, 0.0f,
     0x1.f8b016p-86f, 0x1.f734d8p-40f, 0.0f, 0x1.2f0418p-112f, 0x1.de761ep-89f,
     0x1.ef0612p-38f, 0x1.80dcap-105f, 0x1.623468p-34f, 0x1.2839dep-119f, 0.0f,
     0x1.4001f8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8d794p-23f, 0x1.972b7ap-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3401p-104f, 0.0f, 0x1.ff4904p-113f, 0.0f, 0.0f,
     0x1.6f470ep-75f, 0.0f, 0x1.781a74p-80f, 0.0f, 0x1.bf77e8p-120f, 0x1.719b96p-76f,
     0x1.87f302p-64f, 0x1.3d6fp-42f, 0.0f, 0x1.112196p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66d522p-44f, 0x1.17b656p-79f, 0x1.0bc1aep-54f, 0.0f, 0x1.729f12p-64f,
     0x1.cd3eccp-15f, 0x1.37a2e2p-97f, 0x1.7b1734p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32a0a8p-33f, 0x1.0c516p-55f, 0.0f, 0x1.30c99ap-106f, 0x1.173f36p-88f,
     0x1.198404p-21f, 0.0f, 0x1.77d7dcp-26f, 0.0f, 0.0f, 0x1.13d27p-10f, 0.0f,
     0x1.b811b8p-120f, 0x1.3bee48p-38f, 0x1.19b162p-118f, 0.0f, 0.0f, 0x1.753f86p-13f,
     0x1.ee9ad2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfc67p-116f, 0.0f,
     0x1.d907c8p-106f, 0x1.866cacp-123f, 0x1.bd99f6p-89f, 0x1.dd2238p-100f,
     0x1.0564eap-108f, 0x1.c2635ep-82f, 0.0f, 0x1.920ffcp-86f, 0x1.86e3cp-104f,
     0x1.1c7da8p-24f, 0x1.cc9094p-72f, 0x1.f981ecp-45f, 0x1.1eec6ap-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f9db56p-5f, 0x1.060adap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6b9a2p-74f, 0x1.e5d218p-53f, 0x1.d83db2p-33f, 0.0f, 0.0f, 0.0f,
     0x1.e8dba6p-96f, 0x1.936d34p-41f, 0.0f, 0.0f, 0.0f, 0x1.45f606p-100f,
     0x1.a3e6dp-63f, 0.0f, 0.0f, 0x1.3e707ep-5f, 0x1.502b82p-8f, 0.0f,
     0x1.ae0d8ep-11f, 0.0f, 0x1.ba1cbcp-101f, 0.0f, 0x1.309b84p-72f, 0x1.3d306ep-61f,
     0.0f, 0.0f, 0x1.91b816p-19f, 0x1.7837bp-87f, 0.0f, 0.0f, 0.0f, 0x1.6a436cp-88f,
     0.0f, 0.0f, 0x1.9e2beap-24f, 0x1.2c5bf8p-85f, 0x1.d8a5c4p-6f, 0.0f,
     0x1.c7ae3p-120f, 0.0f, 0x1.2f2f1ap-71f, 0x1.2d3a9p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a12d6p-105f, 0x1.6fcd52p-45f, 0x1.c798dap-99f, 0x1.3a0ad4p-108f,
     0x1.c15c7ap-40f, 0.0f, 0x1.8a7d24p-1f, 0x1.15645ap-31f, 0x1.f1e8d4p-17f, 0.0f,
     0x1.5493fep-36f, 0x1.87bf7cp-67f, 0x1.222f7p-24f, 0x1.939356p-27f, 0.0f, 0.0f,
     0x1.dadf5p-35f, 0x1.992cdcp-111f, 0.0f, 0x1.afeep-39f, 0x1.0de3e8p-82f, 0.0f,
     0.0f, 0.0f, 0x1.af4f7cp-30f, 0x1.e0ac16p-15f, 0x1.8ac022p-119f, 0x1.03da04p-3f,
     0x1.6583dap-72f, 0.0f, 0.0f, 0.0f, 0x1.b1d8d4p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.84e798p-99f, 0x1.835848p-4f,
     0x1.7a0f7ap-51f, 0x1.89fdf2p-113f, 0.0f, 0x1.15f3bp-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.996518p-74f, 0x1.6a3378p-20f, 0.0f, 0.0f, 0x1.afa2ap-109f, 0.0f,
     0x1.ca9402p-69f, 0.0f, 0x1.5c9132p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d7d46p-102f, 0x1.1d8e56p-75f, 0.0f, 0x1.172462p-83f, 0.0f, 0x1.614054p-66f,
     0x1.b113bap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13ca42p-29f, 0.0f, 0.0f,
     0x1.9b8b0cp-67f, 0.0f, 0x1.e54f02p-84f, 0.0f, 0x1.b3f608p-19f, 0.0f, 0.0f, 0.0f,
     0x1.ded1e6p-124f, 0.0f, 0.0f, 0.0f, 0x1.ca345ap-6f, 0.0f, 0x1.e94488p-98f,
     0x1.120e92p-90f, 0.0f, 0.0f, 0x1.f48352p-63f, 0x1.4595cp-43f, 0x1.6cd09cp-47f,
     0x1.9c91c8p-110f, 0.0f, 0.0f, 0.0f, 0x1.438dfep-4f, 0x1.a08e7ep-117f, 0.0f,
     0x1.4918c8p-112f, 0.0f, 0x1.30d65ap-38f, 0.0f, 0.0f, 0x1.faad54p-39f, 0.0f, 0.0f,
     0x1.5dbf3p-63f, 0x1.e6ea1cp-110f, 0x1.899feep-72f, 0x1.34efe6p-116f,
     0x1.37459cp-81f, 0.0f, 0.0f, 0x1.30acacp-78f, 0.0f, 0.0f, 0.0f, 0x1.df34fcp-111f,
     0x1.a72378p-27f, 0x1.918442p-77f, 0x1.c48d3p-50f, 0.0f, 0.0f, 0x1.67f91cp-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7786f6p-50f, 0.0f, 0x1.4acf04p-60f, 0.0f,
     0x1.ff794ap-55f, 0x1.f3e9eep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9166bp-73f,
     0x1.37ce88p-46f, 0x1.8aef18p-119f, 0.0f, 0x1.4184aap-72f, 0x1.43b2dp-28f,
     0x1.5ff6eap-42f, 0.0f, 0x1.32639ep-54f, 0.0f, 0.0f, 0.0f, 0x1.3d03acp-121f,
     0x1.1e0708p-29f, 0.0f, 0.0f, 0x1.bf538cp-10f, 0x1.940f12p-90f, 0x1.24489cp-73f,
     0.0f, 0.0f, 0.0f, 0x1.f96906p-89f, 0.0f, 0.0f, 0.0f, 0x1.9bb4dcp-55f, 0.0f,
     0x1.495b3ap-48f, 0.0f, 0.0f, 0x1.6076f2p-71f, 0x1.6f7d2p-81f, 0x1.963c9cp-110f,
     0.0f, 0.0f, 0x1.3bad2cp-77f, 0x1.577d76p-42f, 0x1.49a9eep-55f, 0.0f,
     0x1.d0183ep-77f, 0x1.5f059ep-44f, 0.0f, 0x1.5b482p-70f, 0.0f, 0x1.764212p-28f,
     0.0f, 0x1.2b8dep-71f, 0.0f, 0x1.5aa82ep-12f, 0x1.c5791cp-69f, 0x1.7377b2p-56f,
     0.0f, 0x1.a66a48p-119f, 0x1.a18286p-95f, 0.0f, 0x1.1335b4p-94f, 0x1.3bde9p-126f,
     0.0f, 0x1.b648aap-41f, 0x1.01bd42p-117f, 0.0f, 0.0f, 0x1.f2b76ep-119f,
     0x1.d2963cp-90f, 0.0f, 0x1.885e1ep-88f, 0x1.bd0568p-49f, 0x1.c0f7b8p-89f,
     0x1.a629a2p-8f, 0x1.de10bep-110f, 0x1.532e94p-12f, 0x1.225f34p-105f,
     0x1.cc656ap-42f, 0.0f, 0x1.a9b944p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2277ep-1f,
     0.0f, 0x1.d6ae02p-115f, 0.0f, 0x1.e93dd6p-59f, 0.0f, 0x1.3a93d4p-69f,
     0x1.5e8846p-96f, 0x1.73e6c2p-101f, 0.0f, 0x1.38c62ap-2f, 0.0f, 0.0f, 0.0f,
     0x1.47332ap-94f, 0x1.b7566ep-117f, 0x1.aab13p-111f, 0.0f, 0x1.024d96p-87f, 0.0f,
     0x1.66571ap-59f, 0.0f, 0x1.664d08p-65f, 0x1.4f8f3cp-70f, 0.0f, 0.0f,
     0x1.559e16p-122f, 0.0f, 0.0f, 0x1.1ce23cp-59f, 0x1.4fa47p-26f, 0.0f, 0.0f,
     0x1.57620cp-7f, 0.0f, 0.0f, 0x1.201e4p-23f, 0x1.ae3a5cp-47f, 0x1.f59358p-113f,
     0.0f, 0x1.748e8p-105f, 0x1.d51f34p-16f, 0x1.8eef52p-97f, 0x1.c756d8p-72f, 0.0f,
     0x1.c2d522p-118f, 0.0f, 0x1.eb331ap-20f, 0x1.3e2292p-69f, 0.0f, 0x1.152eeap-10f,
     0.0f, 0x1.c8f83ep-117f, 0x1.640f72p-59f, 0.0f, 0.0f, 0x1.f746bcp-102f,
     0x1.8e0ecp-36f, 0.0f, 0x1.9c2818p-123f, 0x1.d7432p-65f, 0x1.592288p-12f,
     0x1.05dafap-26f, 0x1.5e7b2p-37f, 0x1.9dc45cp-53f, 0x1.d8f75ep-10f, 0.0f, 0.0f,
     0.0f, 0x1.3a0518p-108f, 0x1.6fbf9ep-123f, 0x1.77f6b6p-2f, 0x1.a38c34p-15f, 0.0f,
     0x1.ea9942p-120f, 0x1.68a4bcp-74f, 0x1.de0a2ap-41f, 0x1.4bd708p-59f, 0.0f, 0.0f,
     0x1.5ce1cap-53f, 0x1.b7ff8ep-2f, 0.0f, 0.0f, 0x1.235e96p-95f, 0.0f,
     0x1.bad1f8p-62f, 0.0f, 0.0f, 0x1.2f2b0cp-95f, 0x1.f31b72p-96f, 0x1.6d6842p-68f,
     0x1.24c6f8p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caa78ep-106f, 0.0f,
     0x1.adb2f6p-113f, 0x1.5f2e1cp-17f, 0x1.5decap-15f, 0x1.027baap-118f,
     0x1.483ae8p-55f, 0.0f, 0.0f, 0x1.4bbe08p-20f, 0x1.126cp-43f, 0.0f,
     0x1.47af1p-14f, 0.0f, 0.0f, 0x1.6c7dc2p-125f, 0x1.3cf4ap-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.425b1ap-77f, 0x1.6e9438p-116f, 0.0f, 0x1.1e50c2p-83f, 0x1.96fd8ap-51f,
     0x1.4cdb9ap-113f, 0.0f, 0.0f, 0x1.336396p-6f, 0x1.9e3906p-24f, 0x1.16c1e2p-120f,
     0.0f, 0.0f, 0.0f, 0x1.aa2288p-76f, 0.0f, 0x1.40f084p-6f, 0.0f, 0.0f,
     0x1.da9b56p-18f, 0.0f, 0x1.3dae3ep-5f, 0x1.4cbf34p-39f, 0.0f, 0.0f,
     0x1.5508b2p-50f, 0x1.8a8198p-88f, 0.0f, 0x1.6fb53cp-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41eb2ep-114f, 0.0f, 0x1.d46124p-18f, 0x1.77bb0ap-47f, 0x1.b99adep-79f,
     0x1.497246p-96f, 0x1.96f8cap-86f, 0.0f, 0x1.9f3382p-79f, 0.0f, 0x1.6342e4p-110f,
     0.0f, 0.0f, 0x1.ac7d64p-23f, 0.0f, 0x1.0ca166p-50f, 0x1.da6beep-47f, 0.0f, 0.0f,
     0.0f, 0x1.10ec36p-80f, 0x1.7da35ap-50f, 0.0f, 0x1.b379f6p-86f, 0.0f,
     0x1.8ecc28p-89f, 0x1.264cf4p-69f, 0.0f, 0.0f, 0x1.dbc28p-51f, 0x1.b909b8p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08d54ep-79f, 0.0f, 0x1.f58618p-40f,
     0x1.b7f192p-22f, 0.0f, 0x1.be41bep-110f, 0.0f, 0.0f, 0x1.ea6ef2p-73f,
     0x1.966c3ap-65f, 0.0f, 0.0f, 0x1.0dea5ap-23f, 0x1.d93dc4p-36f, 0x1.4c1a5cp-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1ecbcp-118f, 0.0f, 0x1.26c55ap-115f, 0.0f,
     0x1.43feaep-21f, 0.0f, 0.0f, 0.0f, 0x1.421ddcp-81f, 0x1.9e7f9cp-62f, 0.0f, 0.0f,
     0x1.934cep-123f, 0.0f, 0.0f, 0x1.f21ecp-82f, 0.0f, 0.0f, 0x1.754a8ap-88f, 0.0f,
     0x1.7893e8p-25f, 0x1.32d46ep-73f, 0x1.7bd286p-92f, 0x1.5a3d4p-70f, 0.0f, 0.0f,
     0.0f, 0x1.78d218p-61f, 0.0f, 0.0f, 0x1.f533d4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da909ep-117f, 0x1.0284f6p-35f, 0.0f, 0x1.30c90ep-12f, 0x1.f7c63p-72f,
     0x1.e6359ap-108f, 0x1.fd7a6cp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9a786p-15f,
     0.0f, 0x1.c43e92p-21f, 0x1.af6e6p-73f, 0x1.d79eecp-19f, 0.0f, 0x1.666e0ep-118f,
     0x1.5b107p-58f, 0.0f, 0x1.07f0d4p-4f, 0x1.890216p-87f, 0x1.54e154p-3f,
     0x1.a76a6ap-122f, 0x1.b9bce2p-31f, 0x1.b33464p-104f, 0.0f, 0x1.e2aeccp-96f,
     0x1.3b83f6p-74f, 0x1.75f078p-13f, 0.0f, 0.0f, 0x1.806c3cp-59f, 0.0f,
     0x1.ccb388p-96f, 0x1.994588p-2f, 0x1.633c82p-106f, 0x1.2d07cep-55f, 0.0f,
     0x1.88e408p-100f, 0.0f, 0x1.fa6628p-21f, 0x1.6bd904p-107f, 0.0f, 0.0f, 0.0f,
     0x1.08a8e4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.347a12p-92f, 0x1.1532f2p-104f,
     0x1.953f28p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75c4p-8f, 0.0f, 0.0f, 0x1.9ce9bap-9f,
     0.0f, 0x1.bd319p-46f, 0.0f, 0.0f, 0x1.10de02p-108f, 0x1.2b019p-26f, 0.0f, 0.0f,
     0x1.ded17ep-83f, 0.0f, 0.0f, 0x1.4d6b88p-71f, 0.0f, 0x1.d2f9fp-20f,
     0x1.5c2be2p-29f, 0x1.1f3be8p-32f, 0x1.b0c98ep-92f, 0.0f, 0x1.3b365ap-123f,
     0x1.4a1deap-23f, 0x1.6a943p-36f, 0x1.40a16p-37f, 0x1.50d80ap-82f, 0.0f, 0.0f,
     0.0f, 0x1.7cbcacp-48f, 0.0f, 0x1.ae4c26p-46f, 0x1.6743fap-12f, 0.0f,
     0x1.298e1p-23f, 0x1.1a5e6ap-104f, 0.0f, 0x1.9b6c5ep-63f, 0.0f, 0.0f,
     0x1.bf96d2p-17f, 0x1.57309p-15f, 0.0f, 0.0f, 0x1.908f92p-106f, 0x1.882872p-120f,
     0.0f, 0.0f, 0x1.7ab59p-12f, 0x1.765046p-91f, 0x1.e04c74p-19f, 0.0f,
     0x1.97b8fcp-99f, 0.0f, 0.0f, 0.0f, 0x1.50cb24p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f4eb44p-15f, 0x1.3ca18ep-113f, 0.0f, 0x1.3eccbap-80f, 0.0f,
     0x1.a3bebp-15f, 0.0f, 0x1.55a71ap-89f, 0x1.6304e2p-69f, 0.0f, 0.0f,
     0x1.a889c4p-30f, 0.0f, 0.0f, 0x1.87f28ep-91f, 0x1.f001e2p-99f, 0.0f, 0.0f,
     0x1.3df8fcp-51f, 0.0f, 0.0f, 0.0f, 0x1.088d38p-109f, 0x1.8d8582p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.642522p-94f, 0.0f, 0.0f, 0.0f, 0x1.e165p-110f, 0.0f,
     0x1.995352p-102f, 0x1.011056p-19f, 0.0f, 0x1.1b624ep-98f, 0.0f, 0.0f,
     0x1.7470fp-28f, 0x1.a46a2ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06255ap-92f, 0.0f, 0x1.c5c5ccp-34f, 0x1.9f798p-15f, 0.0f, 0x1.3a486cp-6f,
     0.0f, 0x1.a12636p-105f, 0.0f, 0.0f, 0x1.ae5d9p-33f, 0x1.c8998ap-84f, 0.0f,
     0x1.af3be4p-26f, 0.0f, 0x1.7ca534p-39f, 0.0f, 0x1.cce4e8p-18f, 0x1.2f15e8p-68f,
     0.0f, 0.0f, 0.0f, 0x1.a60efap-44f, 0x1.89e5cp-4f, 0x1.916b36p-103f,
     0x1.4069ccp-46f, 0x1.aa0fa2p-109f, 0.0f, 0.0f, 0x1.7b2d3ep-40f, 0x1.63399ep-52f,
     0.0f, 0x1.9fc93ap-13f, 0.0f, 0x1.2a8ecap-93f, 0.0f, 0x1.07579p-10f,
     0x1.659412p-33f, 0x1.f73382p-58f, 0.0f, 0x1.a916fcp-39f, 0x1.0be2a6p-83f, 0.0f,
     0.0f, 0.0f, 0x1.dc881p-39f, 0.0f, 0.0f, 0x1.01762ap-16f, 0.0f, 0x1.0db706p-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fdc08p-16f, 0x1.7f0482p-60f, 0.0f, 0.0f, 0.0f,
     0x1.9b1b3p-62f, 0x1.fa9d84p-20f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = sinhf(tmp0);
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
    printf("sinhf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("sinhf bench acc %a\n", global_bench_acc);
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
