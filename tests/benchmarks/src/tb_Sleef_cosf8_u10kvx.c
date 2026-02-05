/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf8_u10kvx.c --function Sleef_cosf8_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.3fb534p-22f, 0.0f, 0x1.24b45cp-100f, 0.0f, 0.0f, 0.0f, 0x1.d71858p-9f,
     0.0f, 0x1.72575p-80f, 0x1.76d8f8p-24f, 0.0f, 0.0f, 0x1.df7918p-30f, 0.0f,
     0x1.3d075p-31f, 0.0f, 0x1.d89b42p-58f, 0x1.2d0f7ap-40f, 0x1.8964bcp-92f,
     0x1.52e2fep-122f, 0.0f, 0x1.0fd1d6p-126f, 0x1.17cb4ep-10f, 0.0f,
     0x1.233d08p-101f, 0.0f, 0x1.e2fa4ap-111f, 0x1.7beae2p-37f, 0x1.53ce6ap-34f, 0.0f,
     0.0f, 0x1.6bd86ap-18f, 0.0f, 0x1.69ddaap-118f, 0x1.fa5fb4p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94457p-126f, 0x1.ab5c1cp-21f, 0.0f, 0.0f, 0.0f, 0x1.300d76p-101f,
     0.0f, 0.0f, 0x1.8ecdfcp-81f, 0.0f, 0x1.1591d6p-75f, 0.0f, 0.0f, 0.0f,
     0x1.467182p-109f, 0.0f, 0x1.bd7c3p-58f, 0x1.8a93e6p-115f, 0x1.9df18cp-64f,
     0x1.dae86ap-30f, 0x1.768dc6p-121f, 0x1.17215cp-108f, 0.0f, 0.0f, 0.0f,
     0x1.607d72p-13f, 0x1.8e3cb6p-67f, 0x1.f014acp-41f, 0.0f, 0.0f, 0x1.bb1bf6p-6f,
     0.0f, 0.0f, 0x1.cc1f64p-51f, 0.0f, 0.0f, 0x1.e8d86ep-36f, 0x1.0311e6p-90f, 0.0f,
     0x1.4289acp-87f, 0x1.293538p-50f, 0.0f, 0.0f, 0.0f, 0x1.319fbp-79f, 0.0f,
     0x1.d31e52p-62f, 0x1.b868acp-13f, 0.0f, 0x1.882e12p-99f, 0.0f, 0.0f, 0.0f,
     0x1.307904p-98f, 0.0f, 0.0f, 0.0f, 0x1.7fa088p-110f, 0x1.250facp-85f,
     0x1.8643b4p-7f, 0x1.3a2fb2p-89f, 0x1.735958p-109f, 0.0f, 0.0f, 0x1.f4926cp-20f,
     0.0f, 0.0f, 0x1.f3555ap-47f, 0x1.c0c664p-41f, 0.0f, 0x1.f6f9ccp-8f,
     0x1.b6a554p-33f, 0.0f, 0x1.c78a8ap-72f, 0.0f, 0.0f, 0x1.975f8cp-101f,
     0x1.98f0bep-75f, 0.0f, 0x1.88f08ep-14f, 0x1.fa7c46p-115f, 0.0f, 0x1.7b46cp-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30b0f4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6632e4p-29f, 0x1.b9c6fep-13f, 0.0f, 0.0f, 0x1.e71a88p-98f, 0x1.0b4bb4p-50f,
     0x1.555aaap-8f, 0x1.5b3a46p-31f, 0x1.754ccep-41f, 0x1.ae61acp-104f,
     0x1.a46674p-73f, 0x1.09439p-28f, 0x1.e6d6fcp-54f, 0x1.3806c6p-6f, 0.0f,
     0x1.aadb1ap-17f, 0.0f, 0.0f, 0x1.d09d06p-66f, 0x1.b9cb88p-115f, 0.0f,
     0x1.7e01p-58f, 0.0f, 0.0f, 0.0f, 0x1.ccdee4p-46f, 0.0f, 0.0f, 0x1.d574f8p-122f,
     0x1.2c649p-51f, 0.0f, 0.0f, 0.0f, 0x1.87151p-125f, 0x1.7e5fdep-93f,
     0x1.c393aep-9f, 0x1.bedacp-91f, 0x1.8f67eep-61f, 0.0f, 0.0f, 0x1.c41268p-11f,
     0.0f, 0x1.d1f6fep-119f, 0.0f, 0x1.e6cacap-14f, 0.0f, 0x1.77f3dep-12f, 0.0f,
     0x1.d0777ap-32f, 0x1.bfb3c2p-103f, 0x1.2eabep-65f, 0.0f, 0x1.5729ccp-123f,
     0x1.0d2a2ep-8f, 0.0f, 0x1.44dc8cp-42f, 0.0f, 0x1.257b58p-100f, 0.0f,
     0x1.65b1f8p-69f, 0.0f, 0x1.7e27b8p-81f, 0x1.24f3d6p-14f, 0x1.d1f612p-117f,
     0x1.b9e51ap-97f, 0.0f, 0x1.0aa99ap-102f, 0.0f, 0.0f, 0x1.bb96cp-71f, 0.0f,
     0x1.edc01p-40f, 0x1.4ff3c2p-60f, 0x1.42e128p-4f, 0.0f, 0.0f, 0x1.9c1a44p-76f,
     0.0f, 0x1.359bap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02d594p-19f, 0x1.9b0ff2p-28f,
     0.0f, 0x1p0f, 0.0f, 0x1.6aaf2ap-24f, 0x1.e144e4p-58f, 0.0f, 0x1.7d8808p-113f,
     0x1.50c82cp-12f, 0.0f, 0x1.ed9718p-81f, 0x1.71388cp-55f, 0x1.244624p-40f, 0.0f,
     0.0f, 0x1.17c3b8p-86f, 0x1.f55442p-49f, 0.0f, 0x1.d366c2p-99f, 0x1.a7218ap-93f,
     0x1.876436p-35f, 0x1.1f2674p-19f, 0x1.d45628p-110f, 0x1.9acf14p-20f,
     0x1.bc4cdep-19f, 0.0f, 0x1.207fdp-109f, 0x1.b9bd06p-113f, 0.0f, 0.0f,
     0x1.a3b1ap-117f, 0.0f, 0.0f, 0x1.e9b464p-99f, 0x1.4b66fep-28f, 0.0f, 0.0f,
     0x1.debd1ep-16f, 0x1.d18b52p-78f, 0x1.237f7ep-88f, 0.0f, 0x1p0f, 0.0f,
     0x1.3e7cb4p-12f, 0x1.e2434ap-123f, 0x1.781aa2p-98f, 0x1.6e0fe6p-2f,
     0x1.4b241ep-80f, 0.0f, 0x1.269b76p-33f, 0x1.57758ap-42f, 0x1.a6d336p-33f, 0.0f,
     0x1.1173f6p-19f, 0x1.ac4012p-61f, 0.0f, 0.0f, 0x1.ce2534p-33f, 0.0f, 0.0f,
     0x1.7d7ce2p-68f, 0.0f, 0x1.d32198p-61f, 0x1.2d079p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79c688p-81f, 0x1.fb6bbp-40f, 0x1.1c554p-77f, 0.0f,
     0x1.9d214cp-117f, 0.0f, 0x1.4d29fcp-7f, 0x1.e88932p-15f, 0.0f, 0.0f,
     0x1.006828p-86f, 0x1.f94976p-21f, 0x1.a504eep-99f, 0x1.6a8104p-49f, 0.0f, 0.0f,
     0.0f, 0x1.d4634ep-32f, 0.0f, 0.0f, 0x1.538722p-16f, 0.0f, 0x1.ad23e2p-115f, 0.0f,
     0.0f, 0x1.1a28cp-86f, 0.0f, 0x1.32d5f4p-106f, 0x1.d37cfep-16f, 0.0f,
     0x1.735fd2p-117f, 0x1.ba0a6cp-28f, 0.0f, 0x1.0a2354p-8f, 0x1.9e7a6ap-10f,
     0x1.3ea5e2p-95f, 0x1.62c768p-40f, 0x1.ef36aep-68f, 0x1.2f23fep-12f,
     0x1.280d4ap-46f, 0x1.ead03cp-95f, 0.0f, 0.0f, 0x1.6335b8p-3f, 0x1.cc591ap-113f,
     0x1.446ccp-122f, 0x1.0ba004p-86f, 0x1.725f26p-37f, 0x1.70fceep-86f, 0.0f,
     0x1.b0e3e6p-33f, 0.0f, 0x1.6f63bep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f44fcp-97f, 0.0f, 0x1.66f14cp-15f, 0x1.59f098p-107f, 0x1.b23d3ep-49f, 0.0f,
     0x1.168244p-102f, 0.0f, 0x1.701642p-13f, 0.0f, 0x1.0702fap-59f, 0x1.80619ap-79f,
     0x1.8b5b82p-89f, 0.0f, 0.0f, 0.0f, 0x1.320c2cp-36f, 0x1.ee583cp-43f,
     0x1.15c416p-76f, 0.0f, 0.0f, 0.0f, 0x1.00fb0cp-2f, 0.0f, 0x1.aaa7dep-35f, 0.0f,
     0.0f, 0x1.614bfcp-59f, 0x1.851bd2p-21f, 0.0f, 0x1.49e1fep-116f, 0x1.7247b4p-94f,
     0x1.e04ac6p-96f, 0.0f, 0x1.58e702p-17f, 0x1.dbb868p-2f, 0.0f, 0x1.e9ce36p-11f,
     0x1.a9b606p-7f, 0x1.d254f2p-56f, 0.0f, 0x1.813978p-26f, 0x1.bf5f02p-28f, 0.0f,
     0x1.338648p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d19c82p-70f, 0x1.8638bcp-20f,
     0.0f, 0x1.d8f8b4p-44f, 0x1.e9e9dcp-117f, 0.0f, 0.0f, 0.0f, 0x1.dd4532p-65f,
     0x1.1278a4p-21f, 0x1.d0893ap-38f, 0.0f, 0.0f, 0.0f, 0x1.08fe1ap-121f,
     0x1.ab4f46p-51f, 0.0f, 0.0f, 0x1.5dd208p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c520ep-104f, 0.0f, 0x1.521634p-18f, 0x1.d60fp-104f, 0x1.ed2b2p-90f, 0.0f,
     0x1.57e8ep-118f, 0x1.505294p-32f, 0x1.a26968p-25f, 0.0f, 0.0f, 0x1.0a7806p-48f,
     0.0f, 0x1.6437a8p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f05486p-1f, 0x1.cfd4f8p-93f,
     0.0f, 0x1.9263cap-59f, 0.0f, 0x1.8c2958p-52f, 0x1.12c0eep-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3fa068p-44f, 0.0f, 0.0f, 0.0f, 0x1.516c72p-50f, 0x1.6a6c0ap-4f,
     0.0f, 0x1.ea872ap-14f, 0x1.9f68aap-34f, 0x1.ad429p-28f, 0.0f, 0.0f,
     0x1.d81be8p-3f, 0x1.c2d732p-108f, 0x1.ddd26p-110f, 0x1.4ccaf2p-47f,
     0x1.92e4c4p-41f, 0x1.30b76p-45f, 0.0f, 0x1.f2007ep-125f, 0x1.5bff8p-107f,
     0x1.a34ab2p-37f, 0.0f, 0.0f, 0x1.8ff494p-113f, 0x1.a0d594p-121f, 0x1.db61fp-92f,
     0x1.c20ba4p-118f, 0x1.0f5686p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61a7e2p-102f, 0.0f, 0x1.2ab798p-1f, 0.0f, 0x1.1f0578p-86f, 0.0f,
     0x1.5accd4p-87f, 0x1.81c4cap-33f, 0.0f, 0x1.9e8828p-15f, 0x1.7cad0ep-57f,
     0x1.8e663cp-39f, 0.0f, 0.0f, 0x1.7b858p-1f, 0.0f, 0x1.954ebp-13f,
     0x1.26bd56p-98f, 0.0f, 0x1.d1f082p-106f, 0.0f, 0x1.68ad38p-88f, 0x1.7e4a98p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa3764p-116f, 0x1.38ccap-120f, 0x1.dfb7dep-87f,
     0x1.ae5d94p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.535af4p-90f, 0.0f,
     0.0f, 0x1.38c746p-47f, 0.0f, 0x1.6a7d68p-100f, 0x1.a752c2p-118f, 0x1.559e6cp-11f,
     0.0f, 0.0f, 0x1.4a4a96p-52f, 0x1.3981e4p-54f, 0x1.115472p-33f, 0x1.06fd4p-93f,
     0x1.5879a6p-8f, 0x1.9e599ep-27f, 0x1.f27d0ap-25f, 0x1.8ac1bep-38f,
     0x1.5de424p-1f, 0.0f, 0x1.52caecp-18f, 0x1.721p-89f, 0.0f, 0.0f, 0x1.bf74e8p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bb4b8p-58f, 0.0f,
     0x1.81d86cp-84f, 0.0f, 0x1.2cc846p-91f, 0x1.a7f11cp-79f, 0x1.2aeacep-105f, 0.0f,
     0x1.d55836p-98f, 0.0f, 0x1.5908e4p-23f, 0.0f, 0.0f, 0x1.1acfe2p-24f,
     0x1.396666p-6f, 0.0f, 0.0f, 0x1.c3108p-92f, 0.0f, 0x1.8d608ap-101f, 0.0f,
     0x1.d79862p-90f, 0x1.c47908p-84f, 0x1.519564p-74f, 0.0f, 0x1.fa9606p-48f,
     0x1.abc1fep-96f, 0.0f, 0.0f, 0x1.5159bcp-114f, 0x1.2761ccp-93f, 0.0f,
     0x1.a65674p-101f, 0.0f, 0.0f, 0.0f, 0x1.fea19p-66f, 0.0f, 0.0f, 0x1.deee0cp-74f,
     0.0f, 0.0f, 0x1.d8f33ap-121f, 0.0f, 0x1.b7b3p-59f, 0x1.f67f2ap-94f, 0.0f,
     0x1.d867c4p-4f, 0x1.7a2d4cp-81f, 0.0f, 0x1.d8a166p-58f, 0x1.96762ap-63f,
     0x1.d68ff2p-101f, 0x1.a04be6p-17f, 0x1.ca3996p-54f, 0.0f, 0.0f, 0.0f,
     0x1.68c3ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.564b4ap-28f, 0x1.c1858ap-36f, 0x1.c3ae9p-31f, 0x1.66eb0ap-112f, 0.0f,
     0x1.4546fp-126f, 0x1.0d3824p-39f, 0.0f, 0x1.42d66ap-80f, 0x1.fe743p-28f, 0.0f,
     0.0f, 0.0f, 0x1.e6e01ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5631bep-83f,
     0x1.c72668p-107f, 0x1.f4cb68p-67f, 0.0f, 0.0f, 0.0f, 0x1.7b59bcp-98f, 0.0f, 0.0f,
     0x1.ed2afep-103f, 0.0f, 0.0f, 0x1.6d59b4p-80f, 0x1.d40f88p-107f, 0.0f, 0.0f,
     0x1.31fc2ep-39f, 0x1.0e50dcp-25f, 0x1.d7259p-42f, 0x1.9717e2p-39f,
     0x1.305ef6p-85f, 0x1.9ecdbep-71f, 0.0f, 0x1.554c74p-12f, 0.0f, 0x1.e218c6p-88f,
     0x1.1c0b0ap-59f, 0.0f, 0.0f, 0x1.a2ede6p-39f, 0.0f, 0x1.c4291ap-70f,
     0x1.05290cp-46f, 0x1.d65e1ap-112f, 0.0f, 0.0f, 0.0f, 0x1.64f122p-98f, 0.0f,
     0x1.bf8a0cp-81f, 0.0f, 0.0f, 0x1p0f, 0x1.8ff1b4p-49f, 0x1.65a9c8p-46f,
     0x1.d88ef6p-7f, 0x1.a11b12p-107f, 0x1.c5dfbcp-116f, 0x1.30b308p-62f,
     0x1.45fbbp-19f, 0.0f, 0x1.04b91p-51f, 0x1.5be8fap-7f, 0.0f, 0.0f, 0x1.53c64p-5f,
     0x1.17249ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a671ap-36f, 0x1.000354p-87f, 0.0f,
     0x1.20a0ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e2f78p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acae7p-56f, 0x1.05055ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d506cp-78f, 0.0f, 0.0f, 0x1.a072bp-8f, 0.0f, 0x1.ecb908p-53f,
     0x1.c1b3b2p-33f, 0.0f, 0.0f, 0x1.9e0aap-31f, 0x1.94c6b4p-13f, 0.0f,
     0x1.6981cep-125f, 0x1.c2914p-113f, 0.0f, 0.0f, 0.0f, 0x1.48a69ap-82f,
     0x1.7a9cb4p-3f, 0x1.89446cp-24f, 0x1.f9221ap-122f, 0.0f, 0.0f, 0x1.31fd5p-26f,
     0x1.b004a4p-58f, 0.0f, 0.0f, 0.0f, 0x1.29fa56p-87f, 0x1.51ab2cp-48f, 0.0f,
     0x1.dbf6d2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79b42p-46f, 0.0f,
     0x1.d955bap-62f, 0.0f, 0.0f, 0.0f, 0x1.2ab50ep-123f, 0x1.6ca4b4p-27f, 0.0f,
     0x1.ab7764p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f56a9p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.56b29p-63f, 0x1.9ec71p-74f, 0.0f, 0x1.e3d8d4p-32f, 0.0f, 0.0f,
     0.0f, 0x1.3fa694p-122f, 0.0f, 0.0f, 0x1.30a6a8p-122f, 0.0f, 0.0f,
     0x1.21b9dep-14f, 0.0f, 0.0f, 0x1.fb8a9ap-110f, 0.0f, 0x1.29e14p-121f,
     0x1.7d2cp-119f, 0.0f, 0x1.1b1ed4p-100f, 0x1.3e20a2p-55f, 0.0f, 0.0f, 0.0f,
     0x1.1d028ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.078db6p-108f, 0.0f,
     0x1.10dc32p-83f, 0.0f, 0.0f, 0x1.ea20f2p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.87b1b4p-74f, 0.0f, 0.0f, 0x1.feb9ecp-64f, 0.0f, 0.0f, 0x1.f5896cp-1f,
     0.0f, 0x1.39d23ap-96f, 0x1.cd6ap-119f, 0x1.70c624p-48f, 0.0f, 0.0f,
     0x1.b32298p-40f, 0x1.a4aa2ap-18f, 0x1.c9e672p-52f, 0.0f, 0x1.b9c6dep-17f, 0.0f,
     0.0f, 0x1.16499p-23f, 0x1.dfbf5ap-49f, 0.0f, 0.0f, 0x1.4f158ap-86f, 0.0f, 0.0f,
     0x1.ef6b6ep-76f, 0x1.42babp-25f, 0x1.05f106p-75f, 0.0f, 0.0f, 0x1.36c5b6p-90f,
     0.0f, 0.0f, 0.0f, 0x1.1bf1d6p-113f, 0.0f, 0x1.bbefb4p-53f, 0.0f, 0.0f,
     0x1.3c1798p-86f, 0.0f, 0.0f, 0.0f, 0x1.8608eep-91f, 0.0f, 0x1.8c26cp-6f, 0.0f,
     0x1.da69e4p-65f, 0x1.baae4cp-126f, 0x1.33115cp-56f, 0x1.8ad23cp-71f,
     0x1.de7714p-71f, 0.0f, 0x1.e4d33p-75f, 0x1.5947fcp-109f, 0x1.e0a6dap-80f,
     0x1.eb7e0ep-111f, 0x1.fb2628p-38f, 0.0f, 0x1.47d142p-76f, 0x1.7cb7b4p-36f,
     0x1.a19176p-59f, 0.0f, 0.0f, 0.0f, 0x1.fd624ep-55f, 0.0f, 0.0f, 0.0f,
     0x1.398efcp-52f, 0.0f, 0x1.9217aep-59f, 0x1.db34ap-116f, 0.0f, 0x1.fc7f42p-79f,
     0x1.de01a6p-68f, 0x1.b56ba6p-47f, 0.0f, 0x1.90711cp-75f, 0x1.ac5cb8p-90f,
     0x1.e2af5ep-39f, 0x1.2a65b4p-52f, 0.0f, 0x1.9e387ep-5f, 0.0f, 0x1.6c2686p-124f,
     0x1.04fbd8p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5463ap-71f, 0x1.86062cp-92f,
     0x1.46553ep-63f, 0.0f, 0.0f, 0x1.22028ap-119f, 0.0f, 0.0f, 0x1.51417ap-50f,
     0x1.98de58p-51f, 0x1.6ee272p-91f, 0.0f, 0x1.97da1ap-91f, 0x1.94c6a2p-62f, 0.0f,
     0x1.2b7b98p-104f, 0x1.e412fp-15f, 0x1.0bb27ap-7f, 0x1.d60162p-101f,
     0x1.23712p-69f, 0.0f, 0x1.c594a4p-49f, 0x1.23686ep-4f, 0x1.36a118p-118f, 0.0f,
     0x1.87c77p-103f, 0x1.d9e1f2p-50f, 0x1.605c0ap-55f, 0.0f, 0x1.0b1708p-69f,
     0x1.77b8cep-78f, 0x1.70e848p-42f, 0x1.102828p-60f, 0x1.f50556p-68f, 0.0f,
     0x1.74c554p-111f, 0x1.b89932p-20f, 0.0f, 0x1.ed92dap-85f, 0.0f, 0.0f,
     0x1.719826p-91f, 0.0f, 0x1.a137acp-2f, 0.0f, 0.0f, 0.0f, 0x1.c86ee6p-58f, 0.0f,
     0.0f, 0x1.a405eap-66f, 0x1.69099cp-94f, 0.0f, 0.0f, 0.0f, 0x1.f5fa7p-5f, 0.0f,
     0.0f, 0.0f, 0x1.7f58d4p-99f, 0.0f, 0x1.2f22e2p-53f, 0.0f, 0x1.0fc9d6p-51f,
     0x1.647be6p-39f, 0.0f, 0.0f, 0.0f, 0x1.177338p-50f, 0.0f, 0x1.740f2ep-23f, 0.0f,
     0x1.2f59bap-117f, 0x1.d5d42ep-120f, 0.0f, 0x1.4d4858p-30f, 0.0f
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
            tmp1 = Sleef_cosf8_u10kvx(tmp0);
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
    printf("Sleef_cosf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_cosf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
