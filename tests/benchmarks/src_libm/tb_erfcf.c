/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_erfcf.c --function erfcf --headers math.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.242dd4p-100f, 0x1.578c56p-105f, 0x1.467a54p-110f,
     0x1.0b5f82p-53f, 0.0f, 0x1.6b7fp-36f, 0x1.791196p-112f, 0x1.aff15ap-92f,
     0x1.6f32c2p-33f, 0x1.28b556p-35f, 0.0f, 0x1.61238ep-23f, 0x1.ce0472p-118f, 0.0f,
     0x1.c4243ap-74f, 0.0f, 0.0f, 0.0f, 0x1.b16d8ap-115f, 0x1.39876ap-88f,
     0x1.5ef8bp-46f, 0x1.51f3c4p-25f, 0.0f, 0.0f, 0x1.55af6ap-83f, 0.0f, 0.0f, 0.0f,
     0x1.bc40d8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f87f4p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1313d2p-105f, 0x1.75016p-35f, 0x1.9dc2dp-45f,
     0x1.3a258cp-29f, 0.0f, 0.0f, 0.0f, 0x1.ac5eb4p-11f, 0x1.5627f4p-93f,
     0x1.a9f9ccp-107f, 0x1.bb3128p-13f, 0.0f, 0x1.9c611p-123f, 0x1.df7ddp-84f,
     0x1.42639ep-37f, 0x1.331728p-90f, 0x1.5dbfe8p-95f, 0.0f, 0.0f, 0.0f,
     0x1.b7da56p-94f, 0x1.aa4576p-123f, 0.0f, 0x1.5dccaep-74f, 0x1.28920cp-37f, 0.0f,
     0x1.db1ab2p-57f, 0x1.592e46p-50f, 0.0f, 0x1.c8ea82p-82f, 0x1.0b77b2p-8f,
     0x1.718feep-89f, 0.0f, 0x1.9ebd3ep-24f, 0.0f, 0.0f, 0x1.fce788p-47f, 0.0f, 0.0f,
     0.0f, 0x1.ed4884p-80f, 0x1.2fb07ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cffb0ap-25f,
     0.0f, 0.0f, 0x1.3c1e5cp-105f, 0.0f, 0x1.df876p-16f, 0.0f, 0x1.be9b98p-106f, 0.0f,
     0.0f, 0x1.32294ap-60f, 0.0f, 0x1.f83f1cp-122f, 0.0f, 0x1.52e63p-91f, 0.0f, 0.0f,
     0.0f, 0x1.f6cf58p-26f, 0x1.3b06bp-60f, 0x1.0691c8p-92f, 0.0f, 0x1.554eaep-75f,
     0.0f, 0.0f, 0x1.50b892p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6975e4p-71f, 0.0f,
     0x1.aa91a8p-102f, 0x1.3790fep-75f, 0x1.c4672p-124f, 0.0f, 0x1.831714p-62f, 0.0f,
     0x1.ac710ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d1fb4p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f88722p-117f, 0x1.1c88f8p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af8544p-77f, 0.0f, 0x1.78b0a6p-116f, 0.0f, 0x1.be57cap-62f, 0.0f, 0.0f,
     0x1.4f9afcp-81f, 0.0f, 0.0f, 0.0f, 0x1.eaef4ep-86f, 0x1.63cc6ap-104f,
     0x1.9d9288p-72f, 0x1.523ddp-9f, 0.0f, 0.0f, 0x1.a05498p-73f, 0.0f,
     0x1.5ce016p-124f, 0x1.4162b4p-115f, 0x1.3df436p-100f, 0.0f, 0x1.b86fcp-61f, 0.0f,
     0.0f, 0.0f, 0x1.e05842p-125f, 0x1.4f481ep-7f, 0.0f, 0x1.7862bep-63f,
     0x1.a0611p-82f, 0x1.943a94p-120f, 0x1.e16b78p-77f, 0x1.db3d4ap-1f,
     0x1.e14746p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83e2cap-106f, 0.0f, 0.0f,
     0.0f, 0x1.acf4a4p-22f, 0.0f, 0x1.692c0ap-115f, 0x1.864524p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.51ce12p-100f, 0.0f, 0.0f, 0x1.a3c772p-75f, 0.0f, 0.0f, 0x1.c9ce4ap-21f,
     0.0f, 0x1.012ea8p-66f, 0.0f, 0x1.4d969cp-26f, 0.0f, 0x1.f7ab8cp-1f,
     0x1.513a8cp-119f, 0.0f, 0x1.0dea9p-10f, 0x1.d692dap-68f, 0x1.249edap-102f, 0.0f,
     0x1.603c68p-53f, 0x1.0b835cp-109f, 0.0f, 0x1.356234p-28f, 0x1.f51282p-124f, 0.0f,
     0x1.1acf08p-83f, 0x1.936b3ap-114f, 0.0f, 0x1.1d986cp-96f, 0.0f, 0x1.8a177ep-118f,
     0x1.936e7p-83f, 0x1.acb2e6p-66f, 0.0f, 0x1.bb50dp-56f, 0.0f, 0.0f,
     0x1.4d9834p-120f, 0x1.39b5e4p-94f, 0.0f, 0x1.5a8aap-49f, 0.0f, 0.0f,
     0x1.f0311ap-37f, 0.0f, 0x1.662848p-95f, 0x1.137f94p-21f, 0.0f, 0.0f, 0.0f,
     0x1.c5bd72p-47f, 0x1.97a7d2p-124f, 0x1.f2ce06p-26f, 0.0f, 0x1.c9a24ep-124f, 0.0f,
     0.0f, 0x1.4c878ap-27f, 0x1.0f5152p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39ddbap-41f,
     0x1.a25f3cp-38f, 0.0f, 0x1.0e5c28p-63f, 0x1.cd3f64p-60f, 0.0f, 0x1.fa97d6p-87f,
     0x1.1b6bb2p-23f, 0.0f, 0x1.1bd6a2p-34f, 0.0f, 0.0f, 0.0f, 0x1.dd2a34p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.952afcp-48f, 0.0f, 0.0f, 0x1.b98aa2p-39f, 0x1.94b8cp-84f,
     0.0f, 0x1.8179e8p-8f, 0.0f, 0.0f, 0x1.a48456p-102f, 0.0f, 0.0f, 0x1.655d1ep-117f,
     0.0f, 0.0f, 0x1.f55eccp-70f, 0x1.61d2ccp-97f, 0x1.712c62p-57f, 0x1.0a638p-9f,
     0x1.855528p-48f, 0x1.d2f698p-58f, 0.0f, 0.0f, 0x1.e5f734p-12f, 0x1.f5ebdep-48f,
     0.0f, 0.0f, 0x1.6a9e22p-92f, 0x1.536834p-67f, 0x1.683066p-63f, 0.0f,
     0x1.681814p-104f, 0.0f, 0x1.302374p-5f, 0.0f, 0.0f, 0x1.397a46p-6f, 0.0f,
     0x1.47438p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.758c68p-115f, 0x1.6b0396p-111f, 0.0f,
     0.0f, 0x1.56e3c4p-5f, 0.0f, 0x1.52346ep-14f, 0.0f, 0x1.80796ap-84f,
     0x1.6ecb4p-53f, 0.0f, 0.0f, 0x1.05639ap-108f, 0x1.5e4a42p-52f, 0.0f, 0.0f,
     0x1.c97884p-91f, 0x1.8f8296p-28f, 0x1.ff170ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f6e6dep-73f, 0x1.f92d12p-88f, 0.0f, 0.0f, 0x1.d85708p-50f,
     0.0f, 0.0f, 0x1.3f857ap-58f, 0.0f, 0.0f, 0.0f, 0x1.43585ap-31f, 0x1.37f6aep-73f,
     0x1.3da5cap-32f, 0.0f, 0.0f, 0x1.ea1d0cp-87f, 0.0f, 0x1.608716p-114f, 0.0f,
     0x1.83e174p-106f, 0x1.6e6536p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3db76p-99f, 0.0f,
     0x1.fc6ca4p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa74a2p-76f, 0.0f,
     0x1.eb052cp-40f, 0.0f, 0.0f, 0x1.50c1ep-40f, 0.0f, 0.0f, 0x1.b663ccp-113f, 0.0f,
     0.0f, 0x1.92d664p-107f, 0x1.ae8fa6p-41f, 0x1.ba31cep-84f, 0.0f, 0x1.7e309p-104f,
     0.0f, 0x1.1a92f4p-49f, 0.0f, 0x1.c32ca2p-2f, 0x1.2c999cp-75f, 0.0f, 0.0f, 0.0f,
     0x1.bb7d26p-43f, 0x1.8b4618p-88f, 0.0f, 0.0f, 0x1.3c4f4cp-84f, 0x1.a456aep-84f,
     0x1.c471d8p-98f, 0.0f, 0x1.c2ba2p-46f, 0x1.fa5832p-12f, 0.0f, 0.0f,
     0x1.6bbe9ap-113f, 0x1.40bfa4p-67f, 0.0f, 0.0f, 0x1.e3a9fcp-39f, 0x1.d5d6fcp-33f,
     0x1.db94d2p-43f, 0.0f, 0x1.edefe8p-66f, 0x1.058444p-1f, 0x1.84f0f8p-58f,
     0x1.34e8fp-76f, 0.0f, 0.0f, 0x1.2398ecp-79f, 0.0f, 0.0f, 0.0f, 0x1.90e4c2p-3f,
     0x1.2d05c8p-69f, 0.0f, 0x1.50140cp-102f, 0x1.3a7222p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.45362cp-105f, 0x1.01fe1cp-62f, 0x1.d5e24p-61f, 0x1.de44e8p-89f,
     0x1.c8f262p-6f, 0.0f, 0.0f, 0x1.db128ap-47f, 0x1.c93e76p-84f, 0.0f,
     0x1.61bca6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cebc2p-111f, 0.0f, 0.0f,
     0x1.931758p-27f, 0.0f, 0x1.e2ff36p-11f, 0.0f, 0x1.c6f5ep-8f, 0.0f,
     0x1.d03c32p-92f, 0.0f, 0.0f, 0.0f, 0x1.92b558p-95f, 0x1.9a8f48p-32f,
     0x1.594286p-86f, 0x1.da0854p-113f, 0.0f, 0.0f, 0.0f, 0x1.a60fa8p-81f, 0x1p0f,
     0.0f, 0x1.f1f9ecp-34f, 0x1.b18accp-119f, 0x1.85109ep-15f, 0x1.f158b2p-91f, 0.0f,
     0.0f, 0.0f, 0x1.35f124p-109f, 0.0f, 0.0f, 0x1.580438p-90f, 0.0f, 0x1.771784p-78f,
     0x1.415138p-82f, 0.0f, 0x1.52e198p-103f, 0x1.b886ep-94f, 0.0f, 0x1.cb6102p-10f,
     0x1.0bc5b6p-28f, 0.0f, 0.0f, 0x1.19399ep-107f, 0x1.3435ep-50f, 0.0f,
     0x1.95e0bep-116f, 0x1.f7fa86p-41f, 0.0f, 0x1.ec633cp-34f, 0x1.d7a7f2p-27f, 0.0f,
     0.0f, 0x1.1f4edap-105f, 0.0f, 0.0f, 0x1.c5577p-41f, 0.0f, 0x1.2af6bap-80f,
     0x1.17d8a6p-51f, 0x1.e90c6ap-59f, 0.0f, 0.0f, 0x1.8fa11ap-8f, 0x1.20da42p-74f,
     0.0f, 0x1.8f0daep-98f, 0x1.46c9c8p-18f, 0x1.6c748ap-109f, 0.0f, 0x1.e9a756p-74f,
     0.0f, 0.0f, 0.0f, 0x1.8c43a4p-69f, 0.0f, 0x1.8c0f9p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.024f7ap-57f, 0x1.6a224cp-47f, 0.0f, 0x1.000bd6p-111f, 0.0f, 0x1.1d9996p-125f,
     0x1.5dd28ep-105f, 0.0f, 0x1.5eb54p-125f, 0x1.e565e8p-9f, 0.0f, 0x1.5f3e2p-9f,
     0x1.a7f3fp-105f, 0x1.22bf9p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30a1eap-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.10101ap-4f, 0x1.b38a8cp-1f, 0.0f, 0x1.2abdb6p-11f,
     0.0f, 0.0f, 0.0f, 0x1.3b686ap-116f, 0x1.be9c9p-95f, 0.0f, 0x1.1a1a42p-87f,
     0x1.80161cp-20f, 0x1.9cbc82p-78f, 0x1.253218p-84f, 0.0f, 0x1.adbe0ep-46f,
     0x1.944264p-77f, 0.0f, 0.0f, 0.0f, 0x1.e9e4dcp-82f, 0x1.a5134p-25f, 0.0f, 0.0f,
     0x1.cfc70ep-59f, 0x1.627d9ap-92f, 0x1.d7b554p-3f, 0.0f, 0.0f, 0x1.e720bp-123f,
     0x1.8c76a2p-60f, 0.0f, 0x1.3709ecp-89f, 0.0f, 0x1.c63234p-87f, 0.0f, 0.0f,
     0x1.ef2fd8p-62f, 0x1.0f4276p-123f, 0x1.f6bb86p-93f, 0x1.943da6p-21f,
     0x1.40dc4p-48f, 0x1.28cf2cp-32f, 0x1.829bdap-124f, 0.0f, 0.0f, 0.0f,
     0x1.5738a4p-22f, 0.0f, 0x1.84b192p-92f, 0.0f, 0x1.1fc0fep-65f, 0x1.f963a4p-105f,
     0x1.a014dap-69f, 0x1.197776p-12f, 0x1.a124dp-114f, 0.0f, 0.0f, 0.0f,
     0x1.a166b8p-62f, 0.0f, 0x1.0f7e02p-71f, 0.0f, 0x1.a4d888p-88f, 0x1.22aaf6p-7f,
     0.0f, 0.0f, 0.0f, 0x1.a4093ap-108f, 0x1.f85c38p-38f, 0.0f, 0x1.43e364p-72f, 0.0f,
     0x1.c3d3b8p-21f, 0.0f, 0x1.454faep-82f, 0x1.7ad78cp-28f, 0x1.a131e8p-35f,
     0x1.14f754p-20f, 0.0f, 0x1.518b4p-102f, 0.0f, 0x1.feed76p-66f, 0.0f,
     0x1.9bcd1ep-104f, 0x1.2dc2fep-56f, 0x1.ebcc8ep-60f, 0x1.3c66fp-86f,
     0x1.485b34p-25f, 0.0f, 0x1.239cf6p-79f, 0.0f, 0x1.ba6002p-41f, 0x1.b37e9ep-23f,
     0.0f, 0.0f, 0x1.128deap-86f, 0x1.7f74fap-105f, 0.0f, 0.0f, 0.0f, 0x1.68d46cp-55f,
     0.0f, 0.0f, 0x1.909d88p-61f, 0.0f, 0.0f, 0x1.0a0efcp-74f, 0.0f, 0x1.cf6bfp-114f,
     0x1.e6c43ep-23f, 0x1.17d97ep-75f, 0.0f, 0x1.d08934p-107f, 0.0f, 0.0f,
     0x1.00059ep-30f, 0x1.fd6a5p-22f, 0x1.3b38ap-74f, 0x1.cfcc16p-35f,
     0x1.3d5cb6p-109f, 0.0f, 0.0f, 0x1.0ae112p-2f, 0.0f, 0x1.e9a65ap-48f,
     0x1.9d49bep-110f, 0.0f, 0.0f, 0x1.0fb2a2p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.daf7a4p-91f, 0x1.8e7b38p-28f, 0x1.7b136ep-60f, 0x1.249c4cp-115f, 0.0f, 0.0f,
     0x1.669b8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dc52ap-25f, 0x1.fa224p-104f,
     0x1.5aae26p-66f, 0.0f, 0.0f, 0x1.756774p-70f, 0x1.98de1ap-123f, 0.0f, 0.0f,
     0x1.0f3406p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.706f76p-89f, 0x1.470ee8p-7f,
     0x1.400948p-96f, 0x1.e5f21cp-53f, 0x1.61ec58p-122f, 0x1.de93dcp-124f, 0.0f, 0.0f,
     0.0f, 0x1.0dcecap-38f, 0.0f, 0.0f, 0x1.aaaffcp-56f, 0.0f, 0x1.5c85b8p-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d3f7f2p-27f, 0.0f, 0.0f, 0x1.686bd4p-2f, 0x1.451a0cp-30f,
     0.0f, 0.0f, 0.0f, 0x1.cc5af6p-81f, 0x1.42b974p-73f, 0x1.5076dcp-94f, 0.0f,
     0x1.af99dp-120f, 0x1.c20bfap-116f, 0x1.dbdcbap-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.006b8cp-28f, 0.0f, 0x1p0f, 0x1.bcfc16p-63f, 0x1.8ddcbcp-123f,
     0x1.fddda8p-18f, 0.0f, 0.0f, 0x1.1110bap-126f, 0x1.c7e2d6p-94f, 0x1.147602p-120f,
     0x1.eacaaap-109f, 0.0f, 0.0f, 0.0f, 0x1.ad2a7ap-100f, 0.0f, 0x1.737d7cp-25f,
     0x1.f815p-116f, 0.0f, 0x1.3d7aep-39f, 0x1.9b03f6p-99f, 0.0f, 0x1.981694p-38f,
     0.0f, 0.0f, 0x1.f3ad1p-38f, 0x1.6ca63cp-17f, 0.0f, 0x1.05fa64p-47f, 0.0f, 0.0f,
     0.0f, 0x1.c6811p-4f, 0x1.1b587ap-45f, 0.0f, 0x1.be6f9p-92f, 0x1.3d1f26p-60f,
     0x1.516f3ap-70f, 0.0f, 0.0f, 0x1.d98d8cp-118f, 0.0f, 0x1.fb74c2p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eef8e4p-30f, 0.0f, 0.0f, 0x1.434a74p-100f, 0.0f, 0.0f,
     0x1.ad7264p-80f, 0x1.3f9376p-18f, 0x1.0da8f4p-75f, 0.0f, 0x1.769f48p-12f,
     0x1.94a22ep-97f, 0.0f, 0x1.a686f8p-64f, 0.0f, 0x1.019a74p-100f, 0.0f, 0.0f,
     0x1.3ac9bep-80f, 0.0f, 0.0f, 0.0f, 0x1.22a54cp-113f, 0x1.0e7b84p-25f,
     0x1.15966cp-95f, 0x1.7eff98p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba95cap-58f, 0x1.9fc34ap-69f, 0.0f, 0.0f, 0.0f, 0x1.fc4b18p-34f,
     0x1.f5deeap-18f, 0.0f, 0.0f, 0x1.6a0eeap-117f, 0.0f, 0x1.9038dcp-40f,
     0x1.56c946p-53f, 0x1.833976p-60f, 0x1.2b2878p-54f, 0.0f, 0.0f, 0x1.a44bc8p-86f,
     0x1.06d22cp-97f, 0x1.55ade4p-22f, 0.0f, 0x1.2fda0cp-41f, 0x1.d9bba6p-118f,
     0x1.19dcb6p-71f, 0x1.05edd6p-103f, 0x1.5434bap-37f, 0x1.a44722p-5f,
     0x1.b818p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d5e7ap-66f, 0x1.c309c4p-9f,
     0x1.6bb87ap-75f, 0x1.f31d28p-9f, 0.0f, 0x1.dffc56p-78f, 0.0f, 0x1.4b122ep-4f,
     0x1.31d826p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e624b2p-66f, 0x1.b4935ep-122f,
     0x1.51f582p-31f, 0x1.dd5618p-126f, 0.0f, 0.0f, 0x1.3ccfdep-14f, 0x1.240da8p-2f,
     0x1.0e9aeep-115f, 0x1.bb8a24p-41f, 0.0f, 0x1.a3278cp-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21c9dap-16f, 0x1.dd1de8p-51f, 0x1.6af27p-15f, 0.0f, 0x1.3d764cp-106f, 0.0f,
     0x1.1adb08p-86f, 0x1.55b54p-91f, 0.0f, 0x1.5b5c8ep-1f, 0x1.6eabep-124f,
     0x1.cf3b5ep-90f, 0x1.16b64ap-116f, 0x1.90c07p-120f, 0x1.d6c12p-56f, 0.0f, 0.0f,
     0.0f, 0x1.b15288p-32f, 0.0f, 0x1.da831p-39f, 0.0f, 0x1.1d0052p-106f, 0.0f,
     0x1.43a4ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe551cp-13f, 0.0f, 0x1.64daf2p-1f,
     0x1.b6115ap-64f, 0x1.726fc6p-48f, 0.0f, 0.0f, 0.0f, 0x1.f3bcdp-81f, 0.0f,
     0x1.04ca38p-95f, 0.0f, 0.0f, 0x1.e24a7ep-71f, 0x1p0f, 0.0f, 0.0f,
     0x1.450304p-118f, 0x1.4cd392p-41f, 0.0f, 0x1.dfa534p-22f, 0.0f, 0x1.14a8dep-25f,
     0.0f, 0.0f, 0x1.8b200ep-12f, 0.0f, 0.0f, 0x1.500874p-121f, 0.0f, 0.0f, 0x1p0f,
     0x1.9077c8p-39f, 0x1.496888p-66f, 0x1.230c1cp-107f, 0x1.954388p-77f, 0.0f,
     0x1.ebec34p-118f, 0.0f, 0x1.68ad86p-52f, 0.0f, 0.0f, 0x1.a132bcp-1f,
     0x1.652d08p-81f, 0x1.f829eep-121f, 0x1.2f89c6p-50f, 0.0f, 0x1.62964p-79f,
     0x1.1bf55p-39f, 0.0f, 0x1.2af1cep-75f, 0.0f, 0.0f, 0x1.c64328p-121f,
     0x1.8e3efcp-15f, 0x1.f3093ap-58f, 0x1.d5ca06p-38f, 0.0f, 0x1.5d7f58p-8f, 0.0f
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
            tmp1 = erfcf(tmp0);
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
    printf("erfcf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("erfcf bench acc %a\n", global_bench_acc);
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
