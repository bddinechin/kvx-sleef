/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f1_u35purecfma.c --function \
 *     Sleef_atan2f1_u35purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.6f68eap-79f, 0x1.c4edc4p-108f, 0x1.85e8bcp-74f,
     0x1.71cc7cp-99f, 0.0f, 0x1.f98facp-57f, 0x1.0b5cc8p-100f, 0x1.67d11ep-52f,
     0x1.3a269ep-101f, 0x1.cffc08p-116f, 0.0f, 0x1.063172p-118f, 0.0f, 0x1.53d7aap-4f,
     0x1.81461ap-118f, 0x1.1193dcp-27f, 0x1.42d7fep-57f, 0x1.dd146cp-56f, 0.0f,
     0x1.54ce34p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37c622p-34f, 0x1.a45918p-97f,
     0.0f, 0x1.5d32f8p-116f, 0.0f, 0x1.97a1c4p-124f, 0.0f, 0.0f, 0.0f,
     0x1.a1522p-122f, 0.0f, 0x1.9e2fecp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7a1c2p-57f,
     0x1.187232p-69f, 0x1.a019ccp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.564b14p-44f, 0x1.378cd4p-58f, 0x1.08d4aap-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70bd26p-117f, 0.0f, 0x1.89e394p-69f, 0.0f, 0.0f,
     0x1.1ecd32p-46f, 0.0f, 0x1.26d0b2p-105f, 0.0f, 0x1.77c9bap-34f, 0x1.0d32b8p-16f,
     0x1.e24602p-69f, 0x1.1b62a4p-50f, 0x1.171bcap-66f, 0x1.bddd66p-29f,
     0x1.1085b8p-62f, 0x1.60c552p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1900c4p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9354cp-64f, 0.0f,
     0x1.76f86ep-2f, 0.0f, 0x1.57067cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc1418p-18f, 0x1.d8f93ap-62f, 0.0f, 0x1.514d9p-51f, 0.0f, 0x1.ef2948p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b6c08p-71f, 0x1.8a54eep-107f, 0.0f, 0.0f,
     0x1.452fd6p-113f, 0x1.af3a5ap-25f, 0x1p0f, 0.0f, 0x1.5536c4p-89f,
     0x1.9f59f6p-96f, 0x1.a8a3p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3acc2ap-19f,
     0x1.9a059p-77f, 0.0f, 0.0f, 0.0f, 0x1.db7588p-52f, 0x1.98944ap-110f, 0.0f,
     0x1.7e3638p-76f, 0x1.b8f026p-97f, 0.0f, 0.0f, 0x1.7bff4ap-34f, 0.0f, 0.0f,
     0x1.03e132p-29f, 0.0f, 0.0f, 0.0f, 0x1.e77398p-101f, 0.0f, 0x1.ba520cp-20f,
     0x1.4f979cp-5f, 0x1.131a1cp-45f, 0.0f, 0x1.576f48p-16f, 0.0f, 0x1.798e86p-27f,
     0x1.e9f9dep-101f, 0.0f, 0x1.1da90cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff5626p-59f, 0x1.6cbdbp-30f, 0x1.36150cp-113f, 0x1.53ea66p-85f,
     0x1.6fd34ep-91f, 0x1.76677cp-126f, 0.0f, 0x1.01c6e2p-89f, 0x1.ed936ep-93f,
     0x1.f7b35ap-125f, 0x1.c76508p-103f, 0x1.62129ap-61f, 0x1.120334p-72f, 0.0f,
     0x1.a35624p-53f, 0.0f, 0x1.71118ap-122f, 0.0f, 0x1.1942bap-28f, 0x1.8946e2p-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79d632p-91f, 0.0f, 0.0f, 0x1.72926p-67f, 0.0f,
     0.0f, 0.0f, 0x1.74498ap-117f, 0.0f, 0x1.ee1b4ap-55f, 0.0f, 0.0f, 0x1.df2186p-19f,
     0x1.2ba298p-51f, 0x1.964ed6p-57f, 0.0f, 0.0f, 0.0f, 0x1.ca0bb4p-69f,
     0x1.ef832ep-63f, 0x1.420408p-35f, 0x1.3c7ddp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.835412p-66f, 0.0f, 0x1.6f42fep-76f, 0.0f, 0.0f, 0x1.d95e6ap-84f, 0.0f, 0.0f,
     0.0f, 0x1.faf66ap-46f, 0.0f, 0x1.70570cp-31f, 0x1.b64516p-75f, 0.0f, 0.0f,
     0x1.ea7f68p-20f, 0x1.3321f4p-41f, 0.0f, 0.0f, 0x1.d1e3dp-25f, 0.0f,
     0x1.ae1e36p-3f, 0x1.560604p-108f, 0.0f, 0x1.fbfb4p-79f, 0.0f, 0.0f,
     0x1.5b961ep-51f, 0.0f, 0x1.a9dde8p-48f, 0.0f, 0.0f, 0x1.51ae36p-62f,
     0x1.7711fp-116f, 0x1.3bf012p-17f, 0.0f, 0x1.276be2p-34f, 0.0f, 0.0f, 0.0f,
     0x1.e001f2p-15f, 0x1.9d1a2p-18f, 0x1.a4813ap-48f, 0.0f, 0x1.2ebf4cp-113f,
     0x1.a350e4p-9f, 0.0f, 0x1.80f0a2p-31f, 0.0f, 0x1.e81d3p-22f, 0.0f,
     0x1.589d32p-89f, 0x1.0d459ap-32f, 0x1.b5e028p-15f, 0.0f, 0x1.887758p-99f,
     0x1.576b6ap-36f, 0.0f, 0.0f, 0x1.d13a18p-29f, 0.0f, 0x1.3b898ap-103f,
     0x1.45c1fap-93f, 0x1.8d9a0ap-90f, 0.0f, 0.0f, 0.0f, 0x1.495a0cp-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e361b4p-105f, 0.0f, 0x1.948eap-117f, 0.0f, 0x1.672628p-1f,
     0.0f, 0.0f, 0.0f, 0x1.ebedf6p-89f, 0.0f, 0.0f, 0.0f, 0x1.4fe0a4p-92f, 0.0f,
     0x1.9f3d14p-64f, 0.0f, 0.0f, 0x1.4a50c4p-87f, 0x1.ef6adp-15f, 0x1.242e64p-35f,
     0x1.738342p-47f, 0x1.6c1bap-37f, 0x1.daef92p-86f, 0x1.15de28p-11f, 0.0f, 0.0f,
     0.0f, 0x1.5005ecp-66f, 0.0f, 0x1.e4c07ep-1f, 0.0f, 0.0f, 0x1.e71064p-4f, 0.0f,
     0.0f, 0.0f, 0x1.78518p-17f, 0.0f, 0x1.2cfcb4p-80f, 0x1.8cf4a6p-53f,
     0x1.0e95e8p-116f, 0.0f, 0.0f, 0.0f, 0x1.b3936cp-9f, 0x1.0b5baap-8f, 0.0f,
     0x1.15b0dp-35f, 0x1.62b776p-22f, 0x1.aca6eap-51f, 0x1.faae5ap-86f,
     0x1.744f7p-86f, 0x1.876732p-34f, 0x1.e87f26p-52f, 0x1.e7ff72p-94f,
     0x1.89b36p-59f, 0.0f, 0.0f, 0.0f, 0x1.07ed9cp-37f, 0.0f, 0x1.330386p-58f,
     0x1.c6dbecp-53f, 0.0f, 0x1.57ae6p-56f, 0x1.d61a0ap-114f, 0x1.26f754p-22f,
     0x1.ab8cfap-31f, 0x1.92f00cp-120f, 0.0f, 0x1.9dc47ep-118f, 0.0f, 0.0f,
     0x1.27007ap-103f, 0.0f, 0x1.86e254p-57f, 0x1.8f56dep-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ccd2ep-31f, 0x1.bb74c8p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.126882p-50f,
     0x1.b01e46p-92f, 0x1.61a5fap-8f, 0.0f, 0x1.6c1328p-37f, 0x1.becf42p-115f, 0.0f,
     0.0f, 0.0f, 0x1.f2733ap-12f, 0.0f, 0x1.e3730ep-4f, 0.0f, 0x1.fff574p-121f, 0.0f,
     0.0f, 0x1.00b2ep-110f, 0x1.637608p-26f, 0x1.6c2fe8p-49f, 0.0f, 0x1.e547fcp-124f,
     0.0f, 0x1.519cdcp-85f, 0x1.538c32p-50f, 0x1.5da0b4p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.98b0d4p-80f, 0.0f, 0x1.3d2c68p-112f, 0x1.5e2da8p-7f, 0.0f, 0.0f,
     0x1.412458p-25f, 0.0f, 0x1.c70bf8p-1f, 0x1.b2ad8ap-42f, 0x1.827922p-98f, 0.0f,
     0.0f, 0.0f, 0x1.ab4bd4p-97f, 0x1.62c5eap-117f, 0.0f, 0x1.d34f2ep-38f, 0.0f,
     0x1.1f1244p-94f, 0.0f, 0.0f, 0x1.5f349ep-17f, 0x1.66fa3cp-25f, 0x1.b8f15ap-2f,
     0x1.9f18dap-81f, 0x1.82205ap-5f, 0.0f, 0.0f, 0x1.a9733cp-99f, 0x1.028becp-14f,
     0.0f, 0x1.8bb0acp-81f, 0.0f, 0x1.f9394p-108f, 0.0f, 0x1.53e5aep-100f, 0.0f,
     0x1.cbd0c8p-110f, 0.0f, 0.0f, 0x1.572e7ap-98f, 0.0f, 0.0f, 0x1.95ce36p-92f, 0.0f,
     0.0f, 0x1.50595cp-72f, 0x1.5ca95cp-41f, 0x1.5cd9c4p-44f, 0x1.27d2fp-64f,
     0x1.cba3f2p-93f, 0.0f, 0x1.5ca9cp-123f, 0.0f, 0x1.169e62p-109f, 0.0f, 0.0f,
     0x1.e16efap-94f, 0.0f, 0x1.8feaf4p-50f, 0.0f, 0.0f, 0.0f, 0x1.61f92cp-105f,
     0x1.ca0af2p-78f, 0.0f, 0x1.290c56p-84f, 0x1.1172d2p-98f, 0.0f, 0.0f, 0.0f,
     0x1.72e8acp-74f, 0x1.5a0868p-24f, 0x1.793b5ap-86f, 0x1.78095ep-51f, 0.0f,
     0x1.23b39p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.253a7cp-72f, 0.0f,
     0x1.921072p-32f, 0.0f, 0x1.921886p-59f, 0x1.6894b4p-50f, 0.0f, 0.0f,
     0x1.6943f4p-120f, 0.0f, 0x1.3cc61cp-10f, 0x1.13f25p-74f, 0.0f, 0.0f,
     0x1.2afd9ep-119f, 0x1.a9be52p-62f, 0x1.49a542p-126f, 0.0f, 0x1.ed425cp-37f,
     0x1.c81508p-94f, 0.0f, 0.0f, 0x1.a749bap-4f, 0.0f, 0.0f, 0.0f, 0x1.9441b6p-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85380cp-103f, 0x1.ebd812p-4f,
     0x1.c58bc4p-77f, 0.0f, 0.0f, 0x1.012254p-71f, 0.0f, 0.0f, 0x1.4fd40cp-65f,
     0x1.4f0308p-94f, 0.0f, 0x1.c8e91cp-101f, 0x1.90b91ap-74f, 0.0f, 0x1.4d7f6p-110f,
     0x1.a2fcd4p-33f, 0.0f, 0x1.1edadp-36f, 0x1.c3cddp-60f, 0x1.f09794p-28f,
     0x1.d3d996p-85f, 0.0f, 0.0f, 0x1.13b5fap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26e196p-93f, 0x1.67b15ep-35f, 0.0f, 0x1.d806b4p-78f, 0x1.160b8cp-34f, 0.0f,
     0.0f, 0x1.642b9ap-27f, 0x1.7814ecp-101f, 0.0f, 0.0f, 0x1.8cdbd2p-104f,
     0x1.a670c2p-14f, 0.0f, 0.0f, 0x1.e00788p-68f, 0.0f, 0.0f, 0x1.0ad5ccp-120f,
     0x1.59a4cep-62f, 0.0f, 0x1.c43c96p-27f, 0x1.bffa74p-113f, 0x1.3c70f2p-59f, 0.0f,
     0x1.24ab2cp-83f, 0.0f, 0x1.04fd32p-19f, 0x1.3659d6p-43f, 0.0f, 0.0f,
     0x1.35f144p-106f, 0x1.fa8ee2p-122f, 0.0f, 0x1.757a5cp-32f, 0.0f,
     0x1.7a8968p-119f, 0.0f, 0x1.f566a2p-41f, 0x1.db4628p-65f, 0x1.cacd66p-55f, 0.0f,
     0x1.1d6246p-123f, 0.0f, 0x1.3a17ccp-56f, 0.0f, 0.0f, 0.0f, 0x1.9a775p-59f, 0.0f,
     0.0f, 0x1.1f60eep-109f, 0x1.2e642cp-125f, 0x1.d7e64ep-16f, 0x1.f6509ep-43f,
     0x1.42c3ccp-92f, 0x1.d33d5ep-88f, 0x1p0f, 0.0f, 0x1.58a866p-97f, 0.0f, 0.0f,
     0x1.eeb8b6p-74f, 0.0f, 0.0f, 0.0f, 0x1.5c91a8p-74f, 0x1.63cc98p-41f,
     0x1.96a5c8p-44f, 0x1.67669cp-42f, 0x1.ce8994p-24f, 0.0f, 0.0f, 0x1.00eee8p-7f,
     0x1.1dea6cp-71f, 0.0f, 0x1.ba6db4p-98f, 0x1.13716ep-106f, 0.0f, 0.0f,
     0x1.1f85bp-109f, 0.0f, 0x1.897196p-30f, 0x1.aed70ap-125f, 0.0f, 0x1.2207aap-14f,
     0x1.0ee0b2p-49f, 0x1.cfaadp-7f, 0.0f, 0x1.c1d49ep-109f, 0.0f, 0x1.b74fcep-31f,
     0x1.e1454p-46f, 0x1.b2f638p-63f, 0.0f, 0.0f, 0.0f, 0x1.aa7b06p-7f, 0.0f,
     0x1.45faa2p-123f, 0x1.c56e0ap-71f, 0x1.0e9fecp-83f, 0x1.2b84ep-70f,
     0x1.774736p-20f, 0.0f, 0.0f, 0x1.fd03c6p-51f, 0x1.062a4ep-101f, 0.0f,
     0x1.82a4fcp-80f, 0x1.47970ep-2f, 0x1.35c1b8p-71f, 0.0f, 0x1.a802ep-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38bb1p-60f, 0.0f, 0x1.7968fp-28f, 0.0f, 0.0f,
     0x1.41d694p-84f, 0x1.e7ba62p-103f, 0.0f, 0.0f, 0x1.3d792ep-22f, 0.0f,
     0x1.090d6ep-72f, 0x1.49407ap-85f, 0x1.48fc7cp-1f, 0x1.001fd4p-108f,
     0x1.64ac3ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a13626p-98f, 0.0f, 0x1.3842d8p-97f,
     0x1.0121c8p-33f, 0x1.7c2174p-114f, 0x1.36af9cp-113f, 0.0f, 0x1.247424p-50f,
     0x1.2c80d8p-10f, 0x1.12a21ap-119f, 0.0f, 0x1.2fa6dep-53f, 0x1.ae9dd4p-26f, 0.0f,
     0x1.6c6da4p-54f, 0.0f, 0.0f, 0x1.26bebcp-44f, 0.0f, 0x1.f9dc6ep-64f,
     0x1.1b33bcp-91f, 0x1.1d34bap-12f, 0.0f, 0x1.605dacp-67f, 0.0f, 0x1.d38cbap-81f,
     0x1.329d4cp-124f, 0x1.5f0354p-36f, 0.0f, 0.0f, 0x1.c86c3ap-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.21ce6ep-87f, 0x1.2d221ap-58f, 0x1.a7defap-69f, 0.0f, 0.0f,
     0x1.581726p-91f, 0x1.557532p-100f, 0.0f, 0x1.f59af8p-11f, 0.0f, 0.0f,
     0x1.f52df6p-86f, 0.0f, 0x1.0069c4p-36f, 0.0f, 0.0f, 0x1.a1a39cp-96f,
     0x1.4511d6p-11f, 0x1.6adfb2p-125f, 0x1.ac5c6p-36f, 0x1.677cc6p-16f, 0.0f, 0.0f,
     0x1.936b2cp-63f, 0.0f, 0x1.cba3bep-124f, 0x1.2da8a2p-18f, 0x1.d88472p-61f, 0.0f,
     0x1.1d7fb4p-124f, 0x1.d0de44p-48f, 0x1.28a6eep-81f, 0x1.42a5bep-116f, 0.0f, 0.0f,
     0x1.a777dcp-14f, 0x1.e49396p-120f, 0.0f, 0.0f, 0.0f, 0x1.82f412p-49f,
     0x1.9c678cp-77f, 0x1.1fd5bcp-115f, 0x1.1eacc4p-24f, 0x1.800186p-88f,
     0x1.995724p-77f, 0.0f, 0.0f, 0.0f, 0x1.4e9db2p-122f, 0x1.7398ecp-42f,
     0x1.4c9186p-50f, 0x1.5f976ap-48f, 0x1.8278ap-43f, 0x1.6253bep-88f, 0.0f,
     0x1.1b71fp-54f, 0x1.722316p-21f, 0.0f, 0.0f, 0x1.84e4a2p-104f, 0x1.f9eb7ap-59f,
     0x1.e73942p-25f, 0x1.1b38c8p-39f, 0x1.3b4244p-57f, 0.0f, 0.0f, 0.0f,
     0x1.369a3ep-6f, 0x1.c2c6c2p-8f, 0x1.178cecp-77f, 0.0f, 0x1.0e2f6ap-4f,
     0x1.e6c1aep-78f, 0.0f, 0x1.9054fap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df635ep-88f, 0x1.ba98d2p-6f, 0.0f, 0.0f, 0x1.1166fcp-55f, 0x1.990696p-41f,
     0x1.516342p-16f, 0x1.e93494p-38f, 0x1.299f3p-101f, 0.0f, 0x1.3d9a96p-48f,
     0x1.ff3f26p-123f, 0x1.18749ep-24f, 0x1.0b5634p-75f, 0.0f, 0x1.be104p-104f, 0.0f,
     0x1.39c408p-58f, 0x1.4decd6p-5f, 0x1.1efcc4p-64f, 0.0f, 0.0f, 0x1.04791cp-68f,
     0.0f, 0.0f, 0x1.76f886p-95f, 0.0f, 0x1.9ae49ap-86f, 0x1.e41cdap-69f,
     0x1.5352a8p-5f, 0x1.7a6ebcp-103f, 0.0f, 0.0f, 0.0f, 0x1.c42992p-36f, 0.0f, 0.0f,
     0x1.0b49dp-43f, 0x1.2040c2p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1d358p-12f,
     0.0f, 0x1.b5a1p-35f, 0x1p0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.b2c4d4p-125f,
     0.0f, 0x1.fcd1aep-99f, 0x1.0fecaep-27f, 0x1.fa0938p-37f, 0.0f, 0x1.27c1eap-34f,
     0x1.3570fcp-108f, 0x1.edf5e6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8755acp-124f,
     0.0f, 0.0f, 0x1.74581cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b59734p-2f,
     0x1.a8ff3p-48f, 0.0f, 0.0f, 0x1.100fb8p-52f, 0x1.99b988p-39f, 0x1.16316ap-125f,
     0.0f, 0.0f, 0.0f, 0x1.86e43cp-65f, 0x1.a5c652p-76f, 0x1.429288p-103f,
     0x1.29bb04p-16f, 0x1.8efc22p-3f, 0.0f, 0x1.d71fbap-108f, 0.0f, 0x1.cb918ep-100f,
     0x1.57dee2p-112f, 0x1.5cad0ep-28f, 0x1.ae1226p-105f, 0x1.216112p-85f, 0.0f,
     0x1.7dc8aap-62f, 0.0f, 0.0f, 0x1.da3216p-114f, 0.0f, 0x1.20a508p-33f, 0.0f,
     0x1.c0b5b4p-68f, 0x1.3a0472p-47f, 0x1.dd23fep-47f, 0.0f, 0.0f, 0x1.021ac6p-30f,
     0x1.38f4cp-49f, 0x1.7a3586p-114f, 0.0f, 0.0f, 0x1.3d7b38p-8f, 0.0f,
     0x1.42b458p-118f, 0.0f, 0.0f, 0.0f, 0x1.ae5d02p-73f, 0x1.7e2696p-101f, 0.0f,
     0x1.877ec6p-16f, 0x1.b99a1ap-18f, 0.0f, 0.0f, 0x1.e62b5ap-33f, 0.0f,
     0x1.0339d4p-50f, 0.0f, 0x1.a3a652p-21f, 0x1.82296p-109f, 0.0f, 0x1.489f46p-39f,
     0.0f, 0x1.5ca1aep-24f, 0.0f, 0x1.ceb24ap-110f, 0.0f, 0.0f, 0x1.d85cc4p-109f,
     0x1.b49daap-64f, 0x1.84bd42p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49bb7p-54f,
     0x1.54f87p-89f, 0.0f, 0x1.b94dacp-120f, 0x1.3891d8p-1f, 0.0f, 0.0f,
     0x1.340c1ap-96f, 0.0f, 0.0f, 0.0f, 0x1.270646p-39f, 0.0f, 0.0f, 0x1.c816b8p-85f,
     0x1.6bd3c8p-101f, 0.0f, 0.0f, 0.0f, 0x1.3ae3bap-20f, 0x1.93daf6p-27f,
     0x1.e8539cp-32f, 0.0f, 0.0f, 0x1.125c7p-124f, 0x1.15bd96p-62f, 0.0f, 0.0f,
     0x1.586f5cp-69f, 0x1p0f, 0x1.5a3cf2p-34f, 0x1.1e0d9cp-101f, 0x1.468998p-36f,
     0.0f, 0x1.544a3ap-98f, 0x1.3a6932p-101f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.231b2ep-72f, 0.0f, 0x1.cf92bp-103f, 0.0f, 0.0f, 0.0f, 0x1.fbf216p-37f, 0.0f,
     0x1.745322p-79f, 0.0f, 0.0f, 0x1.54ece6p-6f, 0x1.cb31bcp-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e714ap-38f, 0x1.6ed81cp-90f, 0x1.0dd5eap-10f, 0.0f,
     0.0f, 0x1.2549fap-31f, 0.0f, 0.0f, 0x1.35e78ep-3f, 0.0f, 0x1.4a72f2p-106f,
     0x1.185542p-19f, 0.0f, 0.0f, 0x1.58316ep-53f, 0x1.5a0c98p-116f, 0x1.cd8c9p-46f,
     0.0f, 0.0f, 0.0f, 0x1.0b4c54p-29f, 0.0f, 0.0f, 0x1.931ffep-100f,
     0x1.62e44cp-101f, 0x1.d4107cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4541f4p-49f,
     0x1.5abdb8p-15f, 0.0f, 0.0f, 0x1.9b4f06p-80f, 0x1.5265a2p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6162dcp-32f, 0.0f, 0x1.a5f5eep-1f,
     0.0f, 0x1.f761e8p-47f, 0x1.320bb4p-63f, 0.0f, 0x1.6fb69cp-18f, 0x1.d56e7p-53f,
     0.0f, 0.0f, 0x1.12692ep-69f, 0x1.651e52p-43f, 0.0f, 0x1.a4f02p-34f, 0.0f,
     0x1.cb5dep-40f, 0x1.c2f724p-93f, 0.0f, 0x1.626df4p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0969dep-60f, 0x1.e0b258p-91f, 0.0f, 0.0f, 0.0f, 0x1.045cfcp-115f,
     0x1.115c86p-32f, 0x1.2cb212p-22f, 0x1.5dap-55f, 0x1.dd1d7ap-66f, 0.0f, 0.0f,
     0.0f, 0x1.0a6006p-17f, 0x1.5313bp-87f, 0x1.7c7dd8p-120f, 0.0f, 0.0f,
     0x1.d1646ap-54f, 0.0f, 0.0f, 0.0f, 0x1.0e1deap-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.77a90ep-27f, 0.0f, 0x1.2235fep-47f, 0x1.2791aap-112f,
     0x1.7ff496p-50f, 0.0f, 0.0f, 0x1.833f08p-118f, 0.0f, 0x1.0782ep-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d812aep-4f, 0x1.f24012p-125f, 0.0f, 0x1.2d0542p-72f,
     0x1.cfa5dap-14f, 0x1.253b1ap-62f, 0x1.2bf49ep-26f, 0x1.7675c4p-101f, 0.0f, 0.0f,
     0x1.303a74p-115f, 0.0f, 0.0f, 0.0f, 0x1.482624p-41f, 0.0f, 0x1.304fb2p-8f,
     0x1.65bb94p-52f, 0.0f, 0x1.c9104p-69f, 0.0f, 0x1.c99228p-13f, 0x1.716c0cp-79f,
     0.0f, 0.0f, 0x1.12dff6p-97f, 0x1.cee796p-100f, 0.0f, 0.0f, 0x1.fc62d8p-23f,
     0x1.0cb0f6p-77f, 0.0f, 0.0f, 0.0f, 0x1.089624p-22f, 0x1.6bc3eap-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.357cc8p-43f, 0x1.2ffb16p-96f, 0.0f, 0.0f,
     0x1.dd8dap-31f, 0x1.dfa6dp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c7a5cp-76f,
     0x1.e03f9cp-26f, 0x1.83e87ep-25f, 0.0f, 0.0f, 0x1.ab2742p-24f, 0x1.12afe2p-83f,
     0.0f, 0x1.f3c836p-42f, 0.0f, 0.0f, 0x1.b272e4p-52f, 0.0f, 0x1.c140fcp-61f, 0.0f,
     0.0f, 0x1.3af104p-39f, 0.0f, 0x1.8d8438p-119f, 0x1.5fdc06p-69f, 0x1.259864p-117f,
     0x1.14e1dp-57f, 0.0f, 0.0f, 0.0f, 0x1.615318p-32f, 0x1.c7320ap-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8931cep-84f, 0.0f, 0.0f, 0.0f, 0x1.4b5162p-58f,
     0x1.37aeccp-87f, 0x1.cda882p-102f, 0.0f, 0x1.f65cd2p-33f, 0x1.620e7cp-48f, 0.0f,
     0.0f, 0x1.391494p-67f, 0x1.5af034p-32f, 0.0f, 0.0f, 0.0f, 0x1.6f0694p-81f, 0.0f,
     0.0f, 0x1.15963cp-20f, 0.0f, 0x1.206794p-38f, 0.0f, 0.0f, 0x1.f44178p-48f, 0.0f,
     0x1.49535ep-28f, 0x1.354b96p-73f, 0x1.c358dep-86f, 0.0f, 0x1.f57c92p-46f,
     0x1.a3e7d4p-55f, 0x1.5f2ec8p-101f, 0x1.78cab2p-56f, 0x1.ee6a44p-89f,
     0x1.50837ep-100f, 0x1.db6da6p-56f, 0x1.19d67ap-66f, 0.0f, 0x1.2296a4p-97f, 0.0f,
     0.0f, 0x1.fb144p-40f, 0.0f, 0x1.74a06p-83f, 0x1.2967aap-36f, 0.0f, 0.0f, 0.0f,
     0x1.f3a316p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34d0cp-31f,
     0x1.5a9cap-70f, 0x1.2a2d48p-80f, 0x1.ad7accp-90f, 0x1.87e8fap-94f, 0.0f,
     0x1.c0b296p-5f, 0.0f, 0x1.b08c68p-94f, 0.0f, 0x1.733c1ap-122f, 0x1.cbb85cp-10f,
     0x1.fc2c9ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4ce96p-83f, 0x1.2c50e8p-42f,
     0x1.014c62p-87f, 0x1.9b0c3ep-38f, 0.0f, 0x1.2a2262p-26f, 0x1.65fb06p-94f,
     0x1.a54844p-14f, 0x1.6570f2p-97f, 0.0f, 0.0f, 0x1.2a0704p-52f, 0.0f,
     0x1.2ff0cp-125f, 0.0f, 0x1.9d0cd8p-10f, 0.0f, 0.0f, 0x1.32a31ap-31f,
     0x1.7b4d22p-120f, 0.0f, 0x1.4a2e4cp-84f, 0.0f, 0x1.6380f6p-61f, 0x1.bdeb7cp-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f37bd2p-91f, 0.0f, 0.0f, 0x1.15beaep-98f,
     0.0f, 0x1.08892ep-32f, 0.0f, 0x1.45b39ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.935f0cp-104f, 0.0f, 0x1.80a662p-124f, 0.0f, 0.0f, 0.0f, 0x1.31f3bp-10f,
     0x1.a2da42p-117f, 0x1.9f96ecp-88f, 0x1.646a48p-71f, 0.0f, 0x1.b50096p-98f,
     0x1.0bf8fep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46d16p-77f, 0x1.790cc6p-7f,
     0x1.b26522p-50f, 0x1.3923c8p-88f, 0x1.84992ep-116f, 0.0f, 0x1.93cf4p-17f,
     0x1.5aaf5p-56f, 0.0f, 0x1.cf0d8ep-116f, 0.0f, 0.0f, 0x1.06250cp-13f, 0.0f, 0.0f,
     0x1.b918a8p-53f, 0x1.efd5b4p-26f, 0x1.9d4c12p-83f, 0.0f, 0.0f, 0x1.09f552p-80f,
     0x1.9f9ff2p-116f, 0.0f, 0.0f, 0.0f, 0x1.3ce40cp-11f, 0.0f, 0x1.4194d8p-46f,
     0x1.5f781p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.183ac2p-4f, 0.0f, 0.0f, 0.0f,
     0x1.c9f1b4p-36f, 0x1.2cecc8p-59f, 0x1.7cb512p-81f, 0x1.40e55ap-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a45a44p-5f, 0.0f, 0.0f, 0x1.fb7dacp-50f, 0.0f, 0x1.8e535ap-74f,
     0.0f, 0.0f, 0x1.47906ap-52f, 0.0f, 0.0f, 0.0f, 0x1.40a7a4p-96f, 0.0f,
     0x1.d3a70ap-51f, 0x1.f3ba96p-43f, 0x1.f137a2p-41f, 0.0f, 0x1.95a08cp-126f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.61912cp-8f, 0x1.b20a6p-86f, 0x1.fc003p-119f, 0x1p0f,
     0x1.82e1d6p-27f, 0x1.b8b138p-41f, 0x1.8784bp-78f, 0.0f, 0x1.5599aap-63f,
     0x1.4fb754p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d7354p-106f, 0.0f, 0.0f,
     0x1.c9b866p-25f, 0.0f, 0x1.ded18p-13f, 0x1.fd813ap-6f, 0x1.280316p-43f, 0.0f,
     0x1.456554p-48f, 0x1.eae9bcp-112f, 0.0f, 0x1.f6e864p-9f, 0x1.c5f36ap-67f, 0.0f,
     0x1.a37e2cp-25f, 0x1.f1b2bep-113f, 0.0f, 0x1.9e6ac8p-32f, 0.0f, 0x1.0e9188p-5f,
     0.0f, 0.0f, 0x1.f3a232p-92f, 0.0f, 0x1.1ddb2p-14f, 0x1.912ad2p-91f,
     0x1.b7d6eap-25f, 0.0f, 0.0f, 0x1.f75b8ap-30f, 0.0f, 0x1.587a6ep-49f,
     0x1.42bd38p-24f, 0.0f, 0.0f, 0.0f, 0x1.8c2a5p-30f, 0x1.ecdaecp-51f,
     0x1.4e9926p-41f, 0.0f, 0.0f, 0x1.8f61b6p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.24d59ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8debcp-22f,
     0x1.b476fcp-45f, 0.0f, 0.0f, 0.0f, 0x1.422a9cp-34f, 0.0f, 0.0f, 0.0f,
     0x1.d0ed16p-23f, 0.0f, 0x1.43b698p-23f, 0x1.25e856p-68f, 0.0f, 0.0f,
     0x1.025c22p-126f, 0x1.b634c2p-21f, 0.0f, 0x1.5e6a9cp-100f, 0.0f,
     0x1.5076f6p-110f, 0.0f, 0x1.6bfe24p-98f, 0.0f, 0x1.13e328p-7f, 0x1.74f6c6p-75f,
     0x1.6e346cp-43f, 0.0f, 0x1.360802p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c20d4ep-72f,
     0x1.c5be64p-103f, 0x1.3fbc94p-66f, 0x1.4fee2cp-81f, 0x1.5ce7d6p-113f, 0.0f,
     0x1.ad2c7p-67f, 0x1.60d39cp-121f, 0x1.e91438p-77f, 0.0f, 0.0f, 0.0f,
     0x1.23ec08p-70f, 0.0f, 0.0f, 0x1.11ab8p-93f, 0.0f, 0.0f, 0x1.00520ep-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afa30cp-32f, 0.0f, 0x1.78d59ap-95f,
     0.0f, 0x1.5f4ba8p-7f, 0.0f, 0x1.3981bcp-1f, 0.0f, 0.0f, 0.0f, 0x1.ac3e2ep-55f,
     0.0f, 0x1.376c3cp-20f, 0x1.3de3e4p-112f, 0x1p0f, 0x1.9114b4p-3f, 0.0f, 0.0f,
     0x1.9d5ed8p-99f, 0x1.d3c03ep-35f, 0.0f, 0x1.5039c6p-45f, 0x1.768216p-15f,
     0x1.09dde8p-62f, 0.0f, 0.0f, 0x1.0eae6p-126f, 0.0f, 0.0f, 0x1.a0d5c6p-11f,
     0x1.0da72ep-114f, 0x1.4526f2p-78f, 0x1.877584p-87f, 0.0f, 0.0f, 0.0f,
     0x1.69e89p-61f, 0.0f, 0x1.d53b9ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e73d4p-56f, 0x1.e51fccp-78f, 0x1.4955eap-2f, 0x1.502a3p-64f, 0.0f, 0.0f,
     0x1.894c24p-122f, 0.0f, 0x1.01cfaep-17f, 0.0f, 0.0f, 0.0f, 0x1.827326p-107f,
     0x1.372ae2p-14f, 0x1.cdf872p-97f, 0x1.ee7eb8p-33f, 0.0f, 0x1.b6de12p-5f,
     0x1.b7e3bp-123f, 0x1.10f602p-69f, 0.0f, 0x1.decac2p-47f, 0.0f, 0x1.2ea57ap-74f,
     0.0f, 0.0f, 0x1.483112p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86c4e2p-94f,
     0x1.40f26ep-24f, 0.0f, 0.0f, 0x1.91b85p-102f, 0x1.4718f4p-48f, 0.0f,
     0x1.1305dep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5afb5ap-83f, 0x1.d7aeb2p-37f,
     0x1.6139c4p-101f, 0.0f, 0x1.85cb0ap-45f, 0x1.26b8b8p-40f, 0x1.34aa52p-55f,
     0x1.d9a14cp-55f, 0x1.2b2646p-23f, 0x1.e914d8p-44f, 0x1.df2134p-77f, 0.0f,
     0x1.04d0aap-66f, 0.0f, 0.0f, 0x1.9217f6p-39f, 0.0f, 0x1.373e2cp-108f,
     0x1.bccb22p-114f, 0.0f, 0x1.657f64p-73f, 0x1.f8b278p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1724p-50f, 0.0f, 0.0f, 0x1.da18aep-118f, 0x1.9483b2p-54f, 0x1.a4bacap-78f,
     0x1.c34a56p-119f, 0x1.cbd8aep-13f, 0x1.9e0a3ap-56f, 0x1.12018p-27f, 0.0f, 0.0f,
     0x1.ff5158p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87f1fcp-123f, 0.0f, 0.0f,
     0x1.ea1e9ap-70f, 0x1.30d034p-85f, 0.0f, 0x1.bc734ep-86f, 0x1.e68ab6p-58f,
     0x1.ce2bb4p-13f, 0x1.3fc13p-20f, 0x1.ba175ap-42f, 0.0f, 0.0f, 0x1.caf5bep-104f,
     0x1.81966ap-103f, 0x1.056476p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2a2p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.94ca9p-4f, 0x1.df92dap-113f, 0x1.4cee94p-58f, 0.0f, 0.0f,
     0x1.bfacp-126f, 0x1.a1710ap-120f, 0x1.556834p-9f, 0x1.28b69cp-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fdf63cp-123f, 0x1.5019dep-64f, 0.0f, 0x1.0937f2p-68f,
     0x1.cd5a0ep-95f, 0.0f, 0x1.c24a4p-79f, 0.0f, 0.0f, 0x1.d2d3b6p-55f,
     0x1.08dff6p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73d944p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b26904p-31f, 0.0f, 0x1.c8abbep-7f, 0x1.3db73ap-15f, 0x1.176a3ep-84f,
     0.0f, 0x1.3d9334p-39f, 0x1.b2cadp-106f, 0.0f, 0.0f, 0x1.4eb262p-89f,
     0x1.2e8c0ep-53f, 0x1.9d0f06p-124f, 0.0f, 0.0f, 0x1.b46c72p-118f, 0.0f,
     0x1.0394a8p-106f, 0.0f, 0x1.de64a4p-11f, 0.0f, 0x1.caeebp-56f, 0.0f, 0.0f, 0.0f,
     0x1.fd864p-34f, 0.0f, 0.0f, 0x1.d18968p-91f, 0x1.c87a46p-85f, 0x1.5bafacp-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64c02ap-100f, 0.0f, 0x1.5b280cp-54f,
     0x1.12e0e6p-111f, 0.0f, 0x1.d7647cp-7f, 0.0f, 0x1.c9fff4p-125f, 0x1.330be2p-99f,
     0.0f, 0x1.66a6f2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9cafcp-10f, 0.0f,
     0x1.aba86cp-30f, 0x1.d8aeaep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f95e4cp-9f, 0.0f, 0.0f, 0x1.2a59a8p-23f, 0.0f, 0x1.42cebep-41f, 0.0f, 0.0f,
     0x1.f271e6p-77f, 0.0f, 0.0f, 0.0f, 0x1.4eecbap-115f, 0x1.9ae45ap-83f,
     0x1.81031cp-120f, 0x1.ddf936p-46f, 0.0f, 0x1.f1573ap-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.616356p-83f, 0.0f, 0.0f, 0x1.e34cbp-109f, 0.0f, 0x1.31c602p-85f,
     0x1.639b3ap-69f, 0.0f, 0.0f, 0x1.e929cep-12f, 0.0f, 0x1.91dd6ep-76f,
     0x1.d6dfa8p-111f, 0x1.955bbep-71f, 0x1.cd5a16p-62f, 0.0f, 0.0f, 0x1.e6205p-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.92c018p-119f, 0x1.de6adp-24f, 0.0f, 0x1.32bf08p-43f,
     0.0f, 0x1.e2915p-47f, 0.0f, 0.0f, 0.0f, 0x1.f0467p-43f, 0x1.cbbe18p-4f,
     0x1.cf6d1ep-88f, 0x1.8add2cp-104f, 0x1.040c48p-11f, 0x1.33d6dep-14f,
     0x1.96f3b8p-92f, 0x1.f9497ap-18f, 0x1.61c96cp-42f, 0x1.5706bep-94f, 0.0f,
     0x1.33e686p-22f, 0.0f, 0x1.0aa68cp-61f, 0.0f, 0.0f, 0x1.08f3d4p-44f, 0.0f,
     0x1.dbc2p-24f, 0.0f, 0x1.c15afep-108f, 0.0f, 0.0f, 0x1.c4e778p-12f, 0.0f,
     0x1.c9e3a2p-78f, 0x1.0f621p-33f, 0x1.20872cp-51f, 0.0f, 0x1.c3e538p-2f, 0.0f,
     0x1.0db698p-63f, 0x1.9828dap-37f, 0x1.90b1b6p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b15f4p-43f, 0.0f, 0x1.2367d8p-10f, 0x1.b6c4eep-105f, 0.0f, 0.0f, 0.0f,
     0x1.4b77e4p-80f, 0.0f, 0.0f, 0x1.2c469cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa057ep-6f, 0.0f, 0x1.142718p-115f, 0.0f, 0x1.0599b4p-88f, 0x1.4c04f8p-21f,
     0.0f, 0x1.c585bep-80f, 0x1.050322p-125f, 0.0f, 0.0f, 0x1.55d838p-43f, 0.0f,
     0x1.71952ep-7f, 0x1.113714p-77f, 0.0f, 0.0f, 0.0f, 0x1.094faap-102f,
     0x1.a9a6dep-119f, 0.0f, 0x1.ded5cp-111f, 0x1.aa13a6p-49f, 0x1.a2d0ep-75f, 0.0f,
     0x1.bf9322p-87f, 0.0f, 0.0f, 0x1.2402dep-72f, 0x1.e6349ap-104f, 0x1.0aa7cep-93f,
     0x1.674accp-92f, 0.0f, 0.0f, 0x1.78c908p-5f, 0x1.d8521ep-1f, 0.0f,
     0x1.61dea2p-33f, 0.0f, 0.0f, 0.0f, 0x1.801d6ep-20f, 0x1.3715cap-98f,
     0x1.4ae436p-101f, 0.0f, 0.0f, 0x1.71a7b6p-7f, 0.0f, 0x1.c5251ep-20f, 0.0f,
     0x1.8486f6p-70f, 0.0f, 0.0f, 0.0f, 0x1.8ff90cp-30f, 0x1.7d312p-43f,
     0x1.d9c83cp-14f, 0.0f, 0.0f, 0.0f, 0x1.29e4f8p-106f, 0x1.afeec2p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba958cp-86f, 0.0f, 0x1.240672p-19f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_atan2f1_u35purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_atan2f1_u35purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atan2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
