/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_atan2f.c --function atan2f --arity 2 --headers \
 *     math.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.7d9988p-18f, 0x1.ef7926p-121f, 0.0f, 0x1.b7fd46p-4f, 0x1.0735aap-96f, 0.0f,
     0x1.13fca6p-15f, 0x1.015f02p-105f, 0.0f, 0.0f, 0.0f, 0x1.912a96p-46f,
     0x1.f5f9f2p-99f, 0x1.90b6e8p-99f, 0x1.e2110ap-96f, 0x1.98dd58p-18f, 0.0f,
     0x1.669456p-126f, 0x1.8319c2p-100f, 0.0f, 0.0f, 0x1.20ee2ap-124f, 0.0f, 0.0f,
     0x1.1c26dep-66f, 0.0f, 0x1.96ce82p-118f, 0x1.9534bap-40f, 0x1.2755fcp-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.007f1ep-41f, 0.0f, 0x1.1bd436p-13f, 0x1.b0acfp-49f, 0.0f,
     0x1.87977p-68f, 0.0f, 0x1.b0ef68p-61f, 0x1.bcca6p-97f, 0x1.1d45bap-80f, 0.0f,
     0.0f, 0.0f, 0x1.6219eep-25f, 0.0f, 0x1.d5fb22p-109f, 0x1.2bd366p-55f, 0.0f,
     0x1.c7308p-87f, 0x1.864008p-34f, 0.0f, 0x1.e8b54ep-2f, 0x1.256dd2p-8f, 0.0f,
     0x1.de961cp-66f, 0x1.2cc454p-115f, 0x1.a83168p-116f, 0.0f, 0x1.23d922p-17f,
     0x1.d1ecc6p-14f, 0x1.a22f92p-38f, 0x1.2357c8p-90f, 0x1.7f0afp-79f,
     0x1.6652d4p-35f, 0x1.45b192p-37f, 0.0f, 0x1.619046p-20f, 0.0f, 0x1.cf45b6p-122f,
     0x1.e0ea66p-28f, 0.0f, 0x1.ad98e8p-63f, 0x1.4891cp-115f, 0.0f, 0.0f,
     0x1.813278p-94f, 0.0f, 0.0f, 0x1.f213e4p-65f, 0x1p0f, 0.0f, 0x1.2abefep-40f,
     0x1.8d546p-113f, 0.0f, 0.0f, 0x1.d52168p-49f, 0.0f, 0x1.cbbd7ap-20f,
     0x1.cc5668p-11f, 0.0f, 0x1.55c496p-63f, 0x1p0f, 0.0f, 0x1.c46e2cp-56f,
     0x1.8bb514p-58f, 0x1.3c3b72p-45f, 0x1.eb57a8p-10f, 0.0f, 0x1.b6a138p-92f,
     0x1.3103b6p-15f, 0x1.8094bcp-106f, 0.0f, 0.0f, 0x1.c89908p-70f, 0x1.db2154p-67f,
     0.0f, 0x1.e26016p-110f, 0x1.71912cp-117f, 0.0f, 0.0f, 0.0f, 0x1.884362p-123f,
     0.0f, 0x1.8ede96p-3f, 0.0f, 0x1.2b33eap-99f, 0x1.40c888p-88f, 0x1.551234p-123f,
     0.0f, 0.0f, 0x1.00c73ep-28f, 0x1.3a4236p-13f, 0.0f, 0x1.d48238p-30f,
     0x1.8f3086p-1f, 0.0f, 0.0f, 0x1.92b284p-109f, 0x1.690546p-72f, 0.0f, 0.0f,
     0x1.04b394p-73f, 0x1.860f6ap-38f, 0.0f, 0.0f, 0x1.09c08ap-38f, 0.0f,
     0x1.e4d5eep-67f, 0x1.70bbfp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.107b5ap-103f, 0.0f,
     0x1.415p-57f, 0.0f, 0.0f, 0x1.ee6c54p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57b3ep-97f, 0.0f, 0x1.104b24p-31f, 0x1.8ad516p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1f4c86p-67f, 0.0f, 0.0f, 0x1.c249e2p-123f, 0x1.c16076p-38f, 0.0f,
     0x1.d3e4c2p-82f, 0.0f, 0.0f, 0x1.95ea68p-2f, 0x1.ed6204p-9f, 0.0f, 0.0f, 0.0f,
     0x1.49a1ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22a70ap-110f, 0x1.e2eb8ep-117f,
     0.0f, 0x1.51d824p-61f, 0x1.97f5eep-55f, 0x1.15592ap-97f, 0x1.f05fc8p-40f,
     0x1.231edp-121f, 0.0f, 0x1.e2566cp-79f, 0.0f, 0x1.e2cb76p-28f, 0x1.602ec8p-78f,
     0x1.0ca622p-76f, 0x1.40b5fcp-47f, 0x1.712172p-96f, 0x1.be7c76p-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1bb65p-17f, 0.0f, 0x1.05fbbcp-71f, 0x1.9407e6p-38f,
     0x1.697c9ep-52f, 0x1.d67404p-48f, 0.0f, 0x1.125a84p-66f, 0.0f, 0.0f,
     0x1.c0d51cp-120f, 0.0f, 0x1.f9a7f2p-8f, 0x1.6a54c4p-50f, 0.0f, 0.0f,
     0x1.69a02ep-63f, 0.0f, 0x1.f87c24p-110f, 0.0f, 0.0f, 0x1.c6ced6p-86f, 0.0f,
     0x1.144ec8p-84f, 0x1.03625p-69f, 0.0f, 0x1.1fc1ap-123f, 0x1.d0431cp-4f,
     0x1.6cb9d2p-123f, 0.0f, 0x1.b5e00cp-18f, 0x1.dc292p-102f, 0.0f, 0.0f, 0.0f,
     0x1.0ceaap-27f, 0.0f, 0x1.fa7e82p-5f, 0x1.014a6p-77f, 0.0f, 0x1.b9d3bep-69f,
     0x1.eee19cp-20f, 0x1.b8b97ap-36f, 0x1.6f96b6p-14f, 0x1.e514c8p-61f, 0.0f, 0.0f,
     0x1.23269cp-73f, 0.0f, 0x1.e04372p-78f, 0x1.be1056p-101f, 0x1.ac60cap-24f, 0.0f,
     0.0f, 0x1.58b32cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b531ap-26f, 0x1.482f44p-93f,
     0.0f, 0x1.f88638p-5f, 0.0f, 0x1.88852cp-53f, 0x1.322784p-7f, 0x1.0b69dap-75f,
     0x1.ec62d2p-34f, 0x1.8fe72ap-84f, 0.0f, 0x1.154f7cp-45f, 0.0f, 0.0f,
     0x1.b3a372p-9f, 0.0f, 0x1.058ab4p-68f, 0x1.13d0a4p-33f, 0.0f, 0.0f, 0.0f,
     0x1.ca5836p-52f, 0.0f, 0x1.1fffd8p-37f, 0x1.952b6ep-66f, 0.0f, 0x1.ef284ap-85f,
     0x1.9e9788p-60f, 0.0f, 0x1.0f123cp-62f, 0x1.748204p-42f, 0x1.a38ed2p-87f,
     0x1.8d6ffap-124f, 0.0f, 0.0f, 0.0f, 0x1.137392p-24f, 0x1.45c2dp-46f,
     0x1.133d62p-92f, 0.0f, 0x1.fb1dfcp-36f, 0x1.c32bc6p-50f, 0.0f, 0x1.2b6718p-61f,
     0x1.b11542p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cc74p-96f, 0.0f,
     0x1.28ad02p-90f, 0.0f, 0.0f, 0.0f, 0x1.5694fep-10f, 0x1.2b0b1p-50f, 0.0f, 0.0f,
     0x1.13abc6p-33f, 0x1.ebc85cp-16f, 0.0f, 0x1.ae2bf6p-82f, 0x1.14c294p-122f, 0.0f,
     0x1.fd7848p-20f, 0x1.32d5bep-120f, 0.0f, 0x1.75a456p-73f, 0x1.d0c72cp-7f,
     0x1.042cfp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.388e22p-66f, 0x1.e6eabp-55f,
     0x1.1cfc7p-118f, 0x1.641db8p-126f, 0.0f, 0.0f, 0x1.bf2adep-77f, 0.0f,
     0x1.e02042p-86f, 0x1.afaf9p-23f, 0.0f, 0x1.0f01b6p-11f, 0.0f, 0x1.2604dap-52f,
     0x1.bbf176p-63f, 0x1.0a125cp-90f, 0x1.e051fp-33f, 0.0f, 0x1.9d97cp-30f,
     0x1.a285d8p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7872c2p-62f, 0x1.16dcb2p-63f,
     0.0f, 0.0f, 0x1.140f0ep-120f, 0.0f, 0x1.ec9b4ep-77f, 0x1.1b0796p-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2af364p-18f, 0.0f, 0x1.3353cp-96f, 0x1.0072bap-14f, 0.0f,
     0x1.55cec6p-103f, 0.0f, 0x1.62183cp-6f, 0.0f, 0.0f, 0.0f, 0x1.f74a54p-72f, 0.0f,
     0x1.1d258ep-80f, 0.0f, 0.0f, 0.0f, 0x1.ff811ep-20f, 0.0f, 0x1.0822f6p-74f, 0.0f,
     0x1.8ad33ep-24f, 0x1.c458bep-115f, 0.0f, 0x1.ae8ccep-35f, 0x1.a3797cp-115f,
     0x1.337e92p-103f, 0x1.c32e94p-38f, 0.0f, 0x1.db678p-92f, 0.0f, 0x1.6016a4p-51f,
     0x1.46e2d2p-71f, 0.0f, 0x1.8448e4p-62f, 0.0f, 0x1.f6cb6ep-68f, 0x1.aadc88p-45f,
     0.0f, 0x1.e693aep-76f, 0x1.366182p-95f, 0.0f, 0x1.79b62ep-17f, 0x1.37e7b4p-48f,
     0x1.b91efcp-37f, 0.0f, 0x1.3e3e44p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f82164p-42f,
     0x1.d26ff2p-94f, 0x1.3dbee2p-35f, 0.0f, 0x1.b56ebp-110f, 0x1.104d9p-60f, 0.0f,
     0x1.04ec3ep-18f, 0.0f, 0.0f, 0x1.cde3c4p-85f, 0x1.49631p-18f, 0x1.867d36p-11f,
     0x1.edd67ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e6088p-126f,
     0x1.e5603cp-18f, 0.0f, 0x1.3c7b9ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ef962p-44f, 0x1.c1dfa4p-105f, 0x1.b67b8ap-56f, 0x1.ea793ep-96f,
     0x1.f6f2b4p-80f, 0x1.a6956cp-66f, 0x1.d4e81ap-75f, 0.0f, 0x1.c34fc6p-27f, 0.0f,
     0x1.1204b6p-28f, 0.0f, 0x1.7ddec4p-16f, 0.0f, 0x1.396e72p-71f, 0x1.018548p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9bb94p-37f, 0x1.1746b2p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.368b4p-22f, 0.0f, 0.0f, 0.0f, 0x1.26ab96p-2f, 0x1.24bad4p-79f,
     0x1.fde77p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ae998p-87f, 0x1.e65676p-58f,
     0x1.1acb12p-78f, 0.0f, 0x1.1963e6p-21f, 0.0f, 0x1.1d29ep-40f, 0.0f,
     0x1.7fa5c2p-82f, 0x1.d414e4p-124f, 0x1.ed6172p-29f, 0x1.60cbc6p-37f,
     0x1.f7b512p-110f, 0x1.d84602p-114f, 0x1.fee6ccp-126f, 0.0f, 0.0f, 0.0f,
     0x1.fc2806p-60f, 0x1.e946fep-7f, 0x1.dd3fbap-32f, 0.0f, 0.0f, 0.0f,
     0x1.59b7aep-15f, 0x1.4772eep-39f, 0.0f, 0x1.dd654ap-98f, 0.0f, 0x1.70f482p-5f,
     0x1.a03b14p-21f, 0.0f, 0.0f, 0x1.abc1d6p-21f, 0x1.4ab8c2p-2f, 0x1.29bdc6p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bad964p-106f, 0.0f, 0x1.d8dc9ep-10f, 0x1.c0ec28p-39f,
     0x1.442a8ap-111f, 0x1.151a02p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac1a56p-79f, 0.0f,
     0x1.a60c64p-37f, 0.0f, 0.0f, 0x1.7b3998p-31f, 0.0f, 0x1.2e83ap-84f,
     0x1.6ca0b6p-41f, 0.0f, 0x1.7b6144p-62f, 0x1p0f, 0x1.245bc2p-35f, 0.0f,
     0x1.574b58p-65f, 0.0f, 0.0f, 0x1.462a6cp-75f, 0x1.7c04fep-7f, 0x1.82bc26p-76f,
     0x1.3d3d9cp-34f, 0x1.30783cp-31f, 0.0f, 0.0f, 0x1.576578p-72f, 0.0f, 0.0f,
     0x1.2e4b92p-94f, 0x1.75defcp-77f, 0x1.2c0eap-106f, 0.0f, 0x1.1d506p-51f, 0.0f,
     0.0f, 0x1.f1c9d2p-80f, 0.0f, 0.0f, 0.0f, 0x1.57ac5p-25f, 0.0f, 0x1.3e1892p-9f,
     0.0f, 0x1.fb2064p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81d1ep-120f, 0.0f,
     0x1.d42d0ep-115f, 0.0f, 0.0f, 0.0f, 0x1.3420bcp-50f, 0x1.bf9bfap-33f, 0.0f,
     0x1.a68608p-16f, 0x1.fa19dp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f24008p-70f,
     0.0f, 0.0f, 0x1.02287p-119f, 0x1.38dc2cp-45f, 0.0f, 0.0f, 0x1.a7ca42p-38f, 0.0f,
     0x1.a86e78p-80f, 0x1.aa7ac2p-106f, 0.0f, 0x1.cca8a6p-111f, 0.0f,
     0x1.b02fecp-100f, 0.0f, 0x1.eaf3ep-38f, 0x1.e36d8ep-110f, 0.0f, 0x1.37700ep-77f,
     0.0f, 0.0f, 0.0f, 0x1.363fbcp-6f, 0.0f, 0.0f, 0x1.f2098ep-46f, 0x1.984f5ap-77f,
     0x1.0357cep-50f, 0x1.efa5dep-110f, 0.0f, 0.0f, 0.0f, 0x1.890ddcp-59f, 0.0f,
     0x1.0e6c4ep-35f, 0.0f, 0x1.d5826p-38f, 0x1.d2f0e6p-59f, 0.0f, 0.0f,
     0x1.89cf8ap-102f, 0x1.56c8bep-57f, 0.0f, 0.0f, 0x1.3b38cep-99f, 0x1.5f6636p-89f,
     0.0f, 0.0f, 0.0f, 0x1.7f0a76p-65f, 0x1.d32dd8p-65f, 0x1.e756c2p-119f,
     0x1.9f56acp-80f, 0x1.c014a2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.333ca6p-19f, 0.0f, 0.0f, 0x1.dac042p-43f, 0x1.786af2p-98f, 0x1.d29b64p-18f,
     0x1.9eb21ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff6f8p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e9ee2ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27dd28p-93f,
     0x1.9ac382p-78f, 0x1.42e87ep-103f, 0x1.d7e4d4p-8f, 0x1.6d8c24p-86f,
     0x1.f0f8dep-86f, 0x1.ede18ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efcb74p-84f,
     0x1.8094fp-91f, 0x1.fde84p-21f, 0x1.d02a26p-61f, 0x1.e5a24p-61f, 0x1.6cac8cp-58f,
     0x1.b52a54p-13f, 0x1.b5b76p-97f, 0x1.ccf018p-79f, 0.0f, 0x1.19fcbep-18f, 0.0f,
     0x1.f326aep-65f, 0.0f, 0.0f, 0x1.98e778p-89f, 0.0f, 0x1.3daa8ep-16f, 0.0f, 0.0f,
     0x1.f10bbp-62f, 0.0f, 0.0f, 0x1.65434p-36f, 0.0f, 0x1.054252p-15f, 0.0f,
     0x1.a553dp-86f, 0x1.91aca8p-74f, 0.0f, 0x1.0458c6p-37f, 0x1.0e4094p-117f, 0.0f,
     0x1.3067eap-118f, 0.0f, 0x1.56d2f8p-82f, 0.0f, 0x1.9fd91p-17f, 0.0f,
     0x1.d57d6ap-85f, 0x1.0e30d8p-56f, 0.0f, 0.0f, 0x1.0cfb1cp-63f, 0x1.65cc28p-61f,
     0x1.f5878ep-96f, 0.0f, 0.0f, 0.0f, 0x1.39381ap-99f, 0.0f, 0.0f, 0.0f,
     0x1.0b0342p-55f, 0.0f, 0x1.7d7d6cp-36f, 0x1.746814p-76f, 0.0f, 0x1.e5de54p-27f,
     0x1.0dc60ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.872a1ep-13f, 0x1.02c722p-105f, 0.0f,
     0.0f, 0x1.cc37fp-72f, 0x1.44a794p-12f, 0.0f, 0.0f, 0x1.e08376p-90f, 0.0f, 0.0f,
     0x1.5e1b32p-89f, 0.0f, 0x1.59ba88p-90f, 0.0f, 0x1.52c87p-89f, 0x1.b64b86p-76f,
     0.0f, 0.0f, 0x1.e13a8ap-90f, 0x1.3b3f9ep-115f, 0.0f, 0.0f, 0.0f, 0x1.95fee8p-99f,
     0x1.df1d18p-25f, 0x1.928b1ap-95f, 0.0f, 0x1.8b70bap-77f, 0.0f, 0x1.ed7cf8p-44f,
     0x1.015c7ep-55f, 0.0f, 0.0f, 0x1.6d03c4p-41f, 0x1.1e480ep-91f, 0.0f,
     0x1.0e7268p-105f, 0x1.a010c2p-23f, 0x1.44da34p-46f, 0.0f, 0.0f, 0x1.872318p-45f,
     0x1.c99e38p-27f, 0x1.a1b618p-126f, 0.0f, 0x1.773b62p-49f, 0x1.b619bap-12f,
     0x1.fef03cp-59f, 0.0f, 0.0f, 0.0f, 0x1.6e87fp-76f, 0x1.d5e1ccp-106f, 0.0f, 0.0f,
     0x1.82c792p-53f, 0.0f, 0.0f, 0x1.7a945cp-84f, 0x1.79ff6ap-122f, 0x1.8805a2p-61f,
     0x1.a8817ap-16f, 0.0f, 0x1.c5626ep-126f, 0.0f, 0x1.d7212ep-44f, 0.0f,
     0x1.7f8aaap-92f, 0x1.635646p-33f, 0x1.5c3b5ep-1f, 0.0f, 0x1.b81e38p-35f, 0.0f,
     0.0f, 0.0f, 0x1.5e33e2p-19f, 0.0f, 0x1.721d74p-41f, 0.0f, 0.0f, 0.0f,
     0x1.2dc99p-30f, 0.0f, 0x1.80411ep-35f, 0.0f, 0.0f, 0x1.9d0f4ap-110f,
     0x1.79db2ep-78f, 0x1.365e9ap-14f, 0x1.d6f9ecp-35f, 0x1.1572dep-75f, 0.0f, 0.0f,
     0x1.1f7104p-7f, 0x1p0f, 0x1.41791p-25f, 0.0f, 0x1.7fb43p-105f, 0.0f,
     0x1.5a9626p-120f, 0x1.dca8bp-33f, 0x1.020b1ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.335eap-121f, 0.0f, 0.0f, 0x1.036b2ap-90f, 0.0f, 0x1.883f7p-43f, 0.0f,
     0.0f, 0x1.9e517p-84f, 0.0f, 0x1.a1ca62p-91f, 0.0f, 0x1.67b2d8p-120f, 0.0f, 0.0f,
     0x1.b5fd0ap-2f, 0.0f, 0x1.136a08p-89f, 0x1.bff30cp-119f, 0x1.b42f8ap-16f, 0.0f,
     0.0f, 0x1.d65de2p-65f, 0x1.92d3cp-91f, 0x1.9005cp-34f, 0.0f, 0x1.a0779p-20f,
     0.0f, 0.0f, 0x1.eabe4p-30f, 0x1.fc2bb8p-3f, 0.0f, 0.0f, 0x1.67560ep-102f,
     0x1.bbc792p-94f, 0x1.8dc306p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2adf42p-56f, 0.0f,
     0x1.0e7bd8p-105f, 0x1.81a878p-100f, 0x1.0bc1bap-11f, 0x1.827388p-105f, 0x1p0f,
     0.0f, 0x1.ed89f8p-60f, 0x1.82475cp-9f, 0.0f, 0x1.2d6a6p-73f, 0.0f,
     0x1.08c8e8p-67f, 0x1.b462fp-80f, 0x1.bd0694p-15f, 0.0f, 0.0f, 0x1.142c8ep-66f,
     0x1.c0081p-58f, 0x1.a6cf46p-98f, 0.0f, 0.0f, 0.0f, 0x1.bbc9e8p-101f,
     0x1.a3f95ep-114f, 0.0f, 0.0f, 0x1.e81b1ep-117f, 0.0f, 0x1.6e0abap-87f,
     0x1.78468p-81f, 0x1.400ba8p-73f, 0.0f, 0.0f, 0x1.51396ep-101f, 0.0f, 0.0f,
     0x1.740616p-123f, 0.0f, 0x1.a2239cp-71f, 0.0f, 0.0f, 0x1.9a7f6ap-68f,
     0x1.9255fcp-9f, 0x1.79667p-74f, 0.0f, 0.0f, 0.0f, 0x1.ee5f48p-63f, 0.0f,
     0x1.1963c8p-67f, 0.0f, 0.0f, 0x1.8fdd6ep-109f, 0.0f, 0x1.630b74p-68f, 0.0f, 0.0f,
     0x1.bc417ep-99f, 0x1.4df8cep-7f, 0x1.740512p-62f, 0.0f, 0x1.c411eap-3f, 0.0f,
     0x1.29569ep-88f, 0x1.a3d32ap-16f, 0x1.e0b17ep-92f, 0.0f, 0.0f, 0x1.ee27e4p-117f,
     0x1.93358cp-96f, 0x1.22f71ap-64f, 0x1.8a6332p-9f, 0x1.fa0fep-102f, 0.0f,
     0x1.5a8e52p-5f, 0x1.36e4e2p-48f, 0x1.e3f198p-2f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b74f3cp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7479dcp-20f, 0.0f, 0x1.edf1ccp-53f, 0.0f, 0.0f, 0.0f, 0x1.46f5b8p-126f,
     0x1.e85becp-124f, 0.0f, 0.0f, 0x1.b93e4p-4f, 0x1.8a6acap-54f, 0x1.cfa1bcp-7f,
     0x1.d8e6b2p-23f, 0x1.230492p-92f, 0.0f, 0.0f, 0x1.678fcap-91f, 0.0f,
     0x1.a525d8p-4f, 0.0f, 0x1.c5fa42p-120f, 0.0f, 0x1.f02c54p-48f, 0x1.6e8cbep-35f,
     0.0f, 0.0f, 0.0f, 0x1.d3346ep-104f, 0.0f, 0x1.f0ccp-27f, 0x1.96ae56p-28f,
     0x1.b08306p-98f, 0.0f, 0x1.c91d48p-4f, 0.0f, 0.0f, 0.0f, 0x1.820064p-6f, 0.0f,
     0x1.e9e15ap-19f, 0.0f, 0.0f, 0x1.3269dp-23f, 0.0f, 0.0f, 0x1.c72188p-36f,
     0x1.5ba7a6p-85f, 0.0f, 0x1.d60fcap-65f, 0.0f, 0.0f, 0x1.3bc1a8p-51f, 0.0f, 0.0f,
     0x1.203e56p-53f, 0.0f, 0x1.4499aep-92f, 0x1.36801ap-86f, 0.0f, 0.0f,
     0x1.3d0ff8p-1f, 0x1.5927c6p-41f, 0.0f, 0.0f, 0x1.52ba1p-37f, 0x1.8d68ccp-32f,
     0.0f, 0.0f, 0x1.896c9cp-4f, 0x1.c89528p-116f, 0.0f, 0x1.266e5ap-104f,
     0x1.8a231ep-10f, 0.0f, 0.0f, 0x1.1ed578p-32f, 0.0f, 0.0f, 0.0f, 0x1.713f7ap-24f,
     0.0f, 0x1.013122p-101f, 0.0f, 0.0f, 0.0f, 0x1.af012ap-42f, 0x1.754254p-100f,
     0.0f, 0.0f, 0.0f, 0x1.d698f4p-53f, 0x1.c271ep-63f, 0x1.b850a8p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d52756p-126f, 0x1.78b89cp-64f, 0.0f, 0x1.26951cp-97f, 0.0f, 0.0f,
     0x1.bbb9bp-28f, 0x1.0accaap-122f, 0x1.04b77ap-101f, 0.0f, 0x1.b56b24p-6f,
     0x1.c281c8p-9f, 0x1.869f7p-98f, 0.0f, 0x1.26d428p-113f, 0x1.7f22a8p-48f, 0.0f,
     0.0f, 0x1.8ab8a6p-108f, 0.0f, 0.0f, 0.0f, 0x1.c86976p-56f, 0.0f,
     0x1.497fb4p-102f, 0.0f, 0.0f, 0x1.591b26p-109f, 0x1.da9dc4p-71f, 0x1.462954p-60f,
     0x1.f247ep-103f, 0.0f, 0.0f, 0x1.d7fae6p-70f, 0x1.f9f832p-15f, 0.0f,
     0x1.f43008p-4f, 0x1.ce68b2p-72f, 0x1.71b70ap-109f, 0.0f, 0x1.cf4f7ep-75f,
     0x1.48ce62p-71f, 0.0f, 0.0f, 0x1.9639e2p-34f, 0.0f, 0x1.8a9388p-86f,
     0x1.90ffecp-19f, 0.0f, 0x1p0f, 0x1.703334p-112f, 0x1.5a885p-88f, 0.0f, 0x1p0f,
     0.0f, 0x1.2a6774p-15f, 0.0f, 0.0f, 0x1.7da3dp-15f, 0.0f, 0x1.aac7a6p-81f,
     0x1.dd6fc8p-34f, 0.0f, 0.0f, 0x1.1fcb6cp-123f, 0x1.f342d8p-117f, 0x1.00c03ap-87f,
     0x1.6b643cp-22f, 0x1.5a13b4p-5f, 0.0f, 0x1.a112ccp-33f, 0x1.6fbd3p-121f,
     0x1.45471p-32f, 0.0f, 0x1.71b23ep-29f, 0x1.f56832p-97f, 0.0f, 0x1.72f55ap-9f,
     0.0f, 0x1.d082d2p-40f, 0x1.18eeeap-5f, 0x1.8b1712p-116f, 0.0f, 0x1.a2814cp-76f,
     0x1.511884p-59f, 0x1.bf7c32p-44f, 0x1.717d2ep-89f, 0.0f, 0.0f, 0x1.cd3bfep-31f,
     0.0f, 0x1.55edb2p-53f, 0x1.fd3f64p-100f, 0x1.0e5ff8p-89f, 0.0f, 0.0f,
     0x1.ba4de6p-101f, 0x1.0dd88ep-30f, 0.0f, 0x1.bfc66cp-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.25944cp-64f, 0.0f, 0x1.2a1294p-36f, 0x1.1ee208p-76f, 0x1.4dc96p-23f,
     0.0f, 0.0f, 0.0f, 0x1.492c16p-118f, 0x1.53b51ap-44f, 0x1.ef4faap-84f, 0.0f, 0.0f,
     0x1.aa8f58p-9f, 0x1.55069p-45f, 0x1.cca6d2p-85f, 0.0f, 0x1.f02958p-59f,
     0x1.494356p-117f, 0.0f, 0x1.427288p-121f, 0.0f, 0.0f, 0x1.3958ep-47f,
     0x1.4b928cp-34f, 0x1.12b26ep-44f, 0.0f, 0x1.e75874p-17f, 0x1.0240d2p-96f,
     0x1.07c2cap-64f, 0.0f, 0.0f, 0x1.ef6efcp-86f, 0.0f, 0x1.ab7c42p-47f,
     0x1.24adc8p-19f, 0x1.17c4d4p-26f, 0x1.1c136ap-68f, 0.0f, 0x1.cb623ep-31f, 0.0f,
     0x1.3d9cdcp-26f, 0x1.4a6bd8p-28f, 0x1.3e82bp-119f, 0.0f, 0.0f, 0.0f,
     0x1.fd390ep-91f, 0x1.92258p-106f, 0x1.6ea206p-26f, 0x1.284288p-87f, 0.0f,
     0x1.dd2108p-63f, 0.0f, 0x1.2672fep-22f, 0.0f, 0x1.4ba6b6p-120f, 0x1.c18e6cp-54f,
     0x1.606908p-7f, 0x1.eeb478p-111f, 0.0f, 0x1.15ad12p-56f, 0.0f, 0x1.0ca57ap-33f,
     0.0f, 0x1.ab45f4p-82f, 0.0f, 0x1.b1408cp-123f, 0x1.88a0fcp-118f, 0.0f,
     0x1.52cc46p-123f, 0x1.4fa0c4p-122f, 0.0f, 0.0f, 0x1.f2804ap-39f, 0.0f,
     0x1.156a4cp-94f, 0.0f, 0x1.70f526p-91f, 0x1.2c39c8p-11f, 0x1.8a5714p-47f, 0.0f,
     0.0f, 0.0f, 0x1.f5422p-116f, 0x1.638cb8p-49f, 0.0f, 0.0f, 0.0f, 0x1.16a1a2p-123f,
     0x1.f1d87ap-99f, 0x1.55d46cp-62f, 0.0f, 0x1.87be2ap-74f, 0x1.bfef2ap-80f,
     0x1.22a4c2p-24f, 0.0f, 0x1.98b2b8p-118f, 0x1.9c202ep-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1186e8p-99f, 0x1.ee8f1p-42f, 0x1.5f0e9ap-102f, 0.0f, 0x1.d4ac9ap-100f, 0.0f,
     0x1.72c486p-14f, 0x1.a13004p-25f, 0x1.79a59ep-96f, 0.0f, 0.0f, 0x1.729fap-74f,
     0.0f, 0x1.f0c732p-119f, 0x1.d72a2p-100f, 0x1.336824p-108f, 0x1.ddd95ep-75f, 0.0f,
     0.0f, 0x1.d237dap-31f, 0.0f, 0.0f, 0x1.2ca302p-60f, 0.0f, 0x1.d0c08p-21f,
     0x1.9860d4p-14f, 0x1.c3a7a6p-78f, 0.0f, 0.0f, 0.0f, 0x1.9d345ap-72f,
     0x1.001e2p-78f, 0.0f, 0x1.f77b62p-47f, 0x1.7c9f38p-64f, 0x1.b2580cp-13f, 0.0f,
     0.0f, 0x1.a0fe3ap-121f, 0x1.e35722p-25f, 0x1.2c5f06p-20f, 0x1.96fa8ep-26f, 0.0f,
     0.0f, 0.0f, 0x1.fa507cp-36f, 0.0f, 0x1.86eef4p-18f, 0.0f, 0.0f, 0.0f,
     0x1.af123ep-14f, 0x1.c4784p-116f, 0x1.310a1p-84f, 0.0f, 0.0f, 0x1.47a6bap-63f,
     0x1.c29fc4p-68f, 0x1.aa53p-103f, 0x1p0f, 0x1.d85c16p-79f, 0.0f, 0x1.f9dfdap-38f,
     0.0f, 0.0f, 0.0f, 0x1.2eb774p-54f, 0.0f, 0.0f, 0x1.473912p-104f, 0x1.fd14a6p-63f,
     0.0f, 0.0f, 0x1.317956p-115f, 0.0f, 0x1.b7b1fp-117f, 0x1.07b2ap-93f, 0.0f, 0.0f,
     0.0f, 0x1.3e52fcp-120f, 0.0f, 0.0f, 0x1.e2c19ep-93f, 0.0f, 0.0f, 0.0f,
     0x1.b6d44p-60f, 0.0f, 0x1.410106p-23f, 0x1.e0a69p-110f, 0x1.02d3fep-62f,
     0x1.2c37c8p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70e50cp-17f, 0x1.b8970ep-98f,
     0x1.bf9b18p-49f, 0x1.70dd3cp-109f, 0x1.5f8e18p-103f, 0x1.56260ep-3f, 0.0f,
     0x1.650674p-60f, 0x1.a0be96p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bfac2p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6d2f26p-89f, 0x1.f119e2p-16f, 0.0f, 0x1.d749acp-80f,
     0x1.989ffap-39f, 0x1.da441cp-34f, 0x1.604d6cp-12f, 0x1.8bad2ep-4f, 0.0f,
     0x1.bc2a48p-26f, 0.0f, 0x1.01066ap-114f, 0x1.0ca918p-86f, 0x1.c474cep-49f, 0.0f,
     0x1.be03e8p-61f, 0x1.21005ap-26f, 0x1.e504ap-46f, 0x1.db314cp-7f, 0x1.f7f5fp-32f,
     0.0f, 0.0f, 0.0f, 0x1.824e64p-14f, 0.0f, 0.0f, 0x1.ab965p-55f, 0x1.0baafcp-51f,
     0x1.5bcb38p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.038f64p-122f, 0.0f, 0.0f,
     0x1.e8fdacp-4f, 0.0f, 0.0f, 0x1.e6bf68p-63f, 0.0f, 0.0f, 0x1.bce362p-89f, 0.0f,
     0x1.c6f644p-102f, 0x1.27cfbap-74f, 0.0f, 0x1.38b066p-56f, 0x1.c3efbcp-86f, 0.0f,
     0.0f, 0x1.2b673ep-93f, 0.0f, 0x1.5d2ec4p-76f, 0.0f, 0x1.5c0734p-30f, 0.0f,
     0x1.a57342p-66f, 0x1.17d984p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.039f5ap-45f, 0.0f,
     0x1.7060bcp-29f, 0.0f, 0x1.f0f134p-98f, 0x1.8e0e4p-87f, 0x1.4b2096p-120f, 0.0f,
     0.0f, 0x1.bead7ap-64f, 0x1.df86e6p-53f, 0x1.5637dcp-94f, 0x1.4930cp-41f, 0.0f,
     0.0f, 0x1.af7c5p-110f, 0.0f, 0.0f, 0.0f, 0x1.b993fep-73f, 0.0f, 0x1.7ee336p-79f,
     0x1.6093c6p-95f, 0.0f, 0.0f, 0x1.000ec6p-27f, 0x1.7c92acp-123f, 0.0f,
     0x1.bc50ap-75f, 0.0f, 0x1.b6ac3ap-56f, 0.0f, 0.0f, 0x1.36939ap-1f, 0.0f,
     0x1.21c1f4p-30f, 0x1.2239fp-28f, 0x1.b826c8p-117f, 0.0f, 0.0f, 0x1.1666c4p-102f,
     0x1.7feef6p-25f, 0.0f, 0x1.a5df64p-91f, 0x1.9e0aap-114f, 0.0f, 0x1.08837ap-9f,
     0x1.c22cacp-125f, 0.0f, 0x1.b0ec5ep-7f, 0x1.d7914ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.453cccp-5f, 0x1.59a73p-98f, 0x1.cb69aap-33f, 0x1.6c465ap-77f, 0.0f,
     0x1.0683aap-99f, 0.0f, 0.0f, 0x1.a38972p-21f, 0.0f, 0x1.d0a49ap-123f, 0.0f, 0.0f,
     0x1.67143ap-112f, 0x1.1140acp-122f, 0.0f, 0.0f, 0.0f, 0x1.82ce02p-104f,
     0x1.d46bb6p-116f, 0x1.7ddbd4p-50f, 0.0f, 0x1.eb54b4p-14f, 0x1.c222f8p-111f, 0.0f,
     0.0f, 0x1.6e649ep-67f, 0.0f, 0.0f, 0x1.a082d2p-46f, 0x1.a93296p-26f, 0.0f,
     0x1.c673eep-74f, 0.0f, 0.0f, 0x1.ffd0c4p-110f, 0x1.086cd8p-18f, 0x1.e78794p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79969p-116f, 0.0f, 0x1.f8eb24p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6762ep-22f, 0.0f, 0x1.f64482p-64f, 0x1.1db986p-107f,
     0x1p0f, 0x1.526446p-28f, 0x1.9b61c4p-48f, 0x1.3f0578p-6f, 0.0f, 0x1.df3862p-84f,
     0x1.705e52p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.069004p-19f, 0.0f, 0.0f,
     0x1.e08b3ap-11f, 0x1.dbc098p-73f, 0x1.1dd8a8p-87f, 0.0f, 0x1.2fd406p-105f,
     0x1.69a0a8p-99f, 0x1.8f8634p-105f, 0.0f, 0x1.66479p-21f, 0.0f, 0.0f,
     0x1.76d186p-60f, 0x1.195f32p-107f, 0x1.1787e6p-96f, 0x1.9665f2p-107f, 0.0f,
     0x1.1319e8p-50f, 0x1.9b1836p-31f, 0x1.04ae7cp-93f, 0x1.3f1536p-11f, 0.0f,
     0x1.d6e66ap-32f, 0.0f, 0x1.2494d4p-69f, 0x1.ace11ep-16f, 0.0f, 0x1.3963fcp-77f,
     0x1.456a88p-26f, 0x1.c8355ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c6434p-41f, 0.0f,
     0.0f, 0x1.fa057p-73f, 0x1.31d5fep-118f, 0.0f, 0x1.88bcc6p-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.59cd92p-102f, 0x1.5114e6p-99f, 0.0f, 0x1.d64ebap-122f, 0.0f,
     0x1.d033aap-42f, 0x1.c2858ep-81f, 0x1.fc618p-79f, 0x1.986172p-88f, 0.0f, 0.0f,
     0x1.280846p-4f, 0x1.3fa432p-118f, 0.0f, 0x1.8db8a6p-67f, 0x1.f890f6p-37f, 0.0f,
     0x1.c3cef4p-126f, 0.0f, 0.0f, 0.0f, 0x1.44a772p-16f, 0.0f, 0x1.767f84p-95f, 0.0f,
     0x1.f83acap-115f, 0x1.bb63cp-48f, 0x1p0f, 0x1.2244ap-81f, 0x1.f09a1ep-8f,
     0x1.f079bap-73f, 0x1.14d19cp-9f, 0.0f, 0x1.e8bed6p-93f, 0x1.9458cap-93f, 0.0f,
     0x1.67f622p-27f, 0.0f, 0x1p0f, 0x1.2748e2p-111f, 0x1.0985c4p-18f, 0x1.d87d1p-98f,
     0x1.d47caep-75f, 0.0f, 0x1.0ee0bcp-110f, 0x1.afa28p-80f, 0x1.a65084p-40f, 0.0f,
     0x1.f4d5a6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c99b3p-34f, 0.0f,
     0x1.fa5d46p-74f, 0.0f, 0.0f, 0.0f, 0x1.b63f36p-70f, 0.0f, 0x1.38942ap-49f, 0.0f,
     0x1.c8757ap-4f, 0x1.2f3542p-52f, 0x1.cde8f2p-93f, 0x1.e85b7ap-126f,
     0x1.43028p-94f, 0x1.4b31f8p-20f, 0x1.00dfecp-9f, 0.0f, 0x1.c3eb2cp-122f, 0.0f,
     0x1.fb804cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d7d36p-42f,
     0x1.cebea2p-54f, 0x1.4abeeap-93f, 0x1.ea98p-10f, 0x1.02167ep-31f, 0.0f, 0.0f,
     0.0f, 0x1.bcfc16p-125f, 0.0f, 0.0f, 0x1.aa90dcp-85f, 0x1.94b4ap-1f, 0.0f, 0.0f,
     0x1.7a4554p-62f, 0x1.5ed67ep-73f, 0x1.30b11p-83f, 0x1.2a115ap-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a367ap-41f, 0x1.60f54cp-67f, 0x1.6f783ep-65f,
     0x1.fc48a8p-61f, 0x1.f0ef3ep-15f, 0x1.88aef4p-107f, 0x1.8785d8p-86f, 0.0f, 0.0f,
     0x1.93fb58p-77f, 0.0f, 0.0f, 0x1.d95b8p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df544cp-88f, 0.0f, 0x1.ee02cp-112f, 0.0f, 0.0f, 0x1.ae006cp-1f, 0.0f,
     0x1.8fae34p-91f, 0x1.b3c1d4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1ce66p-13f, 0.0f, 0.0f, 0x1.ae1b2cp-53f, 0x1.e2429p-5f, 0x1.fbaa9p-68f,
     0x1.01d8fep-48f, 0x1.8c5b78p-110f, 0.0f, 0x1.b633ecp-18f, 0.0f, 0.0f,
     0x1.a123c2p-3f, 0x1.e8c114p-55f, 0.0f, 0x1.73fb8ap-67f, 0x1.debeb8p-50f, 0.0f,
     0x1.6025dp-23f, 0x1.d83f26p-70f, 0x1.a3a06p-98f, 0x1.f01562p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cf848p-56f, 0x1.3a8e44p-124f, 0x1.a69cc2p-116f,
     0.0f, 0x1.c4ca08p-72f, 0.0f, 0.0f, 0x1.42033p-87f, 0x1.dc028cp-20f, 0.0f,
     0x1.7ae406p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb98c2p-50f,
     0x1.ddb468p-1f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.5d1938p-45f, 0x1.699834p-87f, 0.0f,
     0x1.473e16p-126f, 0x1.917be8p-66f, 0.0f, 0x1.fb006p-95f, 0x1.327638p-85f,
     0x1.e3953ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef7556p-14f,
     0x1.34bbe6p-69f, 0.0f, 0x1.5a30c8p-79f, 0x1.89cf66p-6f, 0x1.69934ap-81f, 0.0f,
     0x1.edcb4p-17f, 0x1.cec4fp-33f, 0.0f, 0x1.489b0ep-99f, 0x1.89b4a6p-67f,
     0x1.8d163p-125f, 0.0f, 0x1.8a37dcp-80f, 0x1.3dd9d6p-11f, 0.0f, 0x1.c89996p-103f,
     0x1.208034p-76f, 0.0f, 0.0f, 0.0f, 0x1.70a952p-98f, 0x1.0aebe8p-33f, 0.0f, 0.0f,
     0x1.a5081ep-55f, 0x1.4c345p-6f, 0x1.ee24b2p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4012ep-82f, 0.0f, 0.0f, 0x1.f0576ap-49f, 0x1.be2c2ep-21f, 0x1p0f,
     0x1.bda928p-22f, 0x1.f472aap-103f, 0x1.e79cfap-116f, 0x1.ef1decp-55f, 0.0f, 0.0f,
     0x1.60788ap-64f, 0x1.3e0b58p-101f, 0x1.dca3acp-82f, 0.0f, 0.0f, 0.0f,
     0x1.30ad86p-120f, 0x1.d29df6p-38f, 0x1.492c76p-123f, 0.0f, 0.0f,
     0x1.c7f70cp-103f, 0.0f, 0x1.b16326p-36f, 0.0f, 0x1.81614p-126f, 0x1.ab793ap-8f,
     0x1.1301f8p-64f, 0.0f, 0.0f, 0x1.63a4ap-71f, 0.0f, 0x1.d7a47p-5f,
     0x1.204e88p-44f, 0x1.a02c16p-6f, 0x1.44143ep-31f, 0.0f, 0.0f, 0x1.03be88p-69f,
     0.0f, 0.0f, 0x1.309546p-107f, 0.0f, 0x1.296cdp-27f, 0x1.8bdf7ap-8f, 0.0f, 0.0f,
     0x1.20093ep-57f, 0x1.c1624p-38f, 0x1.a5fbb4p-74f, 0x1.b40648p-63f,
     0x1.5074c4p-24f, 0x1.a5b292p-93f, 0.0f, 0x1.04dfd2p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c80558p-111f, 0.0f, 0x1.2cbb4cp-12f, 0.0f, 0.0f, 0x1.34b44cp-66f, 0.0f,
     0x1.1dc55ap-11f, 0x1.64923cp-77f, 0x1.4539f2p-110f, 0x1.a8f696p-99f, 0.0f, 0.0f,
     0x1.3ec4f2p-44f, 0.0f, 0x1.9faecp-63f, 0.0f, 0.0f, 0x1.bb7336p-92f,
     0x1.3af7ap-18f, 0.0f, 0x1.9d8a22p-14f, 0.0f, 0x1.558f66p-3f, 0x1.b9c6f2p-111f,
     0x1.e14bb6p-113f, 0x1.552a1ap-69f, 0x1.7246a8p-8f, 0x1.0cd7a6p-126f,
     0x1.240bacp-54f, 0x1.cd30fap-117f, 0.0f, 0x1.74e2e6p-103f, 0.0f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = atan2f(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("atan2f %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("atan2f bench acc %a\n", global_bench_acc);
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
