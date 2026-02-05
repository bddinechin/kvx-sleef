/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf8_u35kvx.c --function Sleef_sincosf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.c9f7e4p-81f, 0.0f, 0x1.249cdap-100f, 0x1.2ec576p-37f,
     0.0f, 0x1.b6959ap-58f, 0x1.9355a2p-50f, 0x1.359ddp-121f, 0.0f, 0.0f,
     0x1.3ffbbep-64f, 0x1.8c765ap-57f, 0x1.305d4ep-55f, 0x1.9c0bep-63f, 0.0f,
     0x1.6aea18p-41f, 0x1.2a5c9p-20f, 0x1.cd30dep-85f, 0.0f, 0x1.8882f8p-53f, 0x1p0f,
     0x1.44521p-42f, 0.0f, 0.0f, 0x1.8cc9cap-86f, 0x1.7cf43ap-126f, 0x1.dc08ccp-86f,
     0.0f, 0x1.10dc66p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a27ff2p-62f,
     0x1.acf2cep-39f, 0x1.118f24p-70f, 0x1.efe436p-25f, 0x1.551cacp-108f,
     0x1.b2fa66p-47f, 0x1.74456cp-38f, 0x1.cc589ap-88f, 0x1.debe64p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfcfd6p-124f, 0x1.f91314p-108f, 0.0f, 0.0f,
     0x1.c7293ap-108f, 0.0f, 0x1.ee6908p-6f, 0x1.5a086cp-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cf5f34p-36f, 0.0f, 0x1.d65d4ap-120f, 0x1.d5ef4cp-83f, 0.0f,
     0x1.cbc1e8p-12f, 0x1.98541cp-62f, 0.0f, 0x1.06b7fcp-72f, 0.0f, 0x1.8225e6p-86f,
     0x1.02795ap-115f, 0.0f, 0x1.69f7b6p-48f, 0.0f, 0.0f, 0.0f, 0x1.e3bfd2p-15f, 0.0f,
     0.0f, 0x1.4afb52p-74f, 0x1.ed33b2p-13f, 0x1.8f36e6p-119f, 0.0f, 0.0f,
     0x1.025ee8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ace58p-123f, 0.0f, 0.0f, 0.0f,
     0x1.6f6aacp-19f, 0.0f, 0.0f, 0x1.31e8d6p-53f, 0x1.b56042p-17f, 0.0f, 0.0f, 0.0f,
     0x1.85c376p-117f, 0x1.5c2a8cp-63f, 0x1.f52ad2p-100f, 0.0f, 0.0f, 0.0f,
     0x1.750a1ep-114f, 0x1.76fd8cp-52f, 0.0f, 0x1.5b75b2p-123f, 0x1.a69336p-43f,
     0x1.192c5ap-100f, 0.0f, 0.0f, 0x1.135352p-67f, 0x1.4a2cbep-109f, 0x1.f610fcp-62f,
     0x1.143212p-13f, 0x1.a700fcp-125f, 0.0f, 0x1.edb804p-77f, 0.0f, 0.0f, 0.0f,
     0x1.9c0f1ap-91f, 0x1.1ea39ep-33f, 0.0f, 0x1.531406p-79f, 0.0f, 0.0f, 0.0f,
     0x1.bff3b4p-110f, 0.0f, 0x1.b58552p-36f, 0.0f, 0.0f, 0.0f, 0x1.f4a0b6p-124f,
     0.0f, 0x1.9c5f4p-2f, 0x1.6102c2p-84f, 0.0f, 0.0f, 0x1.0208ccp-62f, 0.0f,
     0x1.ed03e4p-22f, 0x1.266c3cp-88f, 0.0f, 0x1.9addb2p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8b9eap-37f, 0x1.966cf8p-1f, 0x1.dd47dp-12f, 0.0f, 0x1.7c6cbap-111f, 0.0f,
     0x1.d1310ap-2f, 0.0f, 0x1.2c5806p-126f, 0x1.b4e104p-121f, 0x1.227eacp-32f, 0.0f,
     0x1.f21baep-1f, 0x1.7ed894p-49f, 0.0f, 0x1.3f3596p-14f, 0x1.fb7282p-70f, 0.0f,
     0.0f, 0x1.82bd84p-6f, 0x1.6efe22p-40f, 0x1.c6598ep-92f, 0x1.9cc348p-72f,
     0x1.ee2438p-2f, 0.0f, 0x1.b243eep-45f, 0x1.30aa6cp-86f, 0.0f, 0.0f,
     0x1.73aa46p-29f, 0.0f, 0.0f, 0x1.820b3ap-87f, 0x1.a12c9ap-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.744b7cp-113f, 0x1.a34458p-123f, 0.0f, 0x1.5825d4p-50f, 0.0f,
     0x1.1d9832p-38f, 0x1.aa7eeap-29f, 0x1.85623cp-47f, 0.0f, 0x1.d35f3ap-73f, 0.0f,
     0x1.99685ap-33f, 0x1.440afap-102f, 0x1.7ea4b4p-36f, 0.0f, 0x1.ca5e9ep-112f, 0.0f,
     0x1.93401p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.863574p-31f, 0x1.3b0cc8p-35f,
     0x1.a59084p-43f, 0x1.b2ffcap-3f, 0x1.8f43cp-113f, 0x1.d55c4ep-55f, 0.0f,
     0x1.96d04ep-55f, 0.0f, 0.0f, 0.0f, 0x1.ebc58ep-37f, 0.0f, 0.0f, 0x1.997d92p-67f,
     0x1.a66a62p-39f, 0x1.65e6f8p-58f, 0x1.013ccp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6e46a2p-85f, 0x1.d1119cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fe90ep-79f, 0.0f, 0x1.77728ap-57f, 0.0f, 0x1.c79a22p-55f, 0x1.34d6fep-119f,
     0.0f, 0.0f, 0x1.8cba2ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a0dc8p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9bab4p-6f, 0.0f, 0x1.ee1b6ep-30f, 0x1.684544p-122f,
     0.0f, 0x1.7edba4p-49f, 0.0f, 0x1.4fd60ap-21f, 0.0f, 0x1.726e1ap-120f, 0.0f,
     0x1.54cbcp-13f, 0.0f, 0x1.7fefe2p-51f, 0.0f, 0.0f, 0x1.f491e6p-72f, 0.0f, 0.0f,
     0x1.2fbcf6p-41f, 0x1.81229ep-16f, 0.0f, 0x1.c53d5cp-29f, 0x1.1ea8f8p-4f,
     0x1.09adbp-31f, 0.0f, 0x1.622082p-51f, 0x1.3c0448p-90f, 0.0f, 0.0f,
     0x1.ebf202p-88f, 0x1.6ad528p-27f, 0x1.1a26dp-73f, 0x1.cfc148p-96f, 0.0f,
     0x1.0d6962p-63f, 0x1.7075f6p-124f, 0x1.776a0ap-70f, 0.0f, 0.0f, 0.0f,
     0x1.893ae4p-44f, 0.0f, 0.0f, 0x1.2a4c26p-107f, 0x1.1176a8p-124f, 0x1.86bca4p-9f,
     0.0f, 0.0f, 0.0f, 0x1.967c7cp-53f, 0.0f, 0.0f, 0.0f, 0x1.ea673cp-57f, 0.0f,
     0x1.77492ep-117f, 0x1.60f778p-13f, 0x1.a3d756p-121f, 0x1.5ba8a8p-62f,
     0x1.81b342p-53f, 0.0f, 0.0f, 0x1.a9029ap-40f, 0x1.5c56a6p-105f, 0.0f, 0.0f,
     0x1.7566ep-117f, 0.0f, 0.0f, 0x1.a8b7ep-106f, 0.0f, 0.0f, 0x1.b91bfp-72f, 0.0f,
     0x1.fca61ep-102f, 0x1.ebb812p-8f, 0x1.d7efd6p-122f, 0x1.1afcb4p-123f, 0.0f,
     0x1.887c3ep-38f, 0.0f, 0x1.da664cp-101f, 0x1.c1c81ap-47f, 0.0f, 0x1.1cf40ep-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e09a78p-85f, 0x1.0fd75p-63f, 0.0f, 0.0f,
     0x1.71d3bp-93f, 0x1.bd188ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7672p-48f,
     0x1.df021cp-34f, 0.0f, 0x1.d35894p-79f, 0.0f, 0x1.655738p-45f, 0x1.b4eca8p-41f,
     0.0f, 0.0f, 0x1.ce2426p-18f, 0x1.29b8fep-77f, 0.0f, 0x1.ae66d4p-62f, 0.0f,
     0x1.3dd166p-97f, 0.0f, 0x1.1a1438p-42f, 0x1.781d0ep-123f, 0x1.6cabd2p-78f, 0.0f,
     0x1.501a88p-32f, 0.0f, 0.0f, 0x1.122e3ep-65f, 0.0f, 0x1.3dfcbap-83f,
     0x1.c6b11cp-114f, 0.0f, 0x1.e44742p-119f, 0x1.c49b16p-87f, 0.0f, 0x1.de9d08p-68f,
     0.0f, 0x1.820e62p-75f, 0.0f, 0.0f, 0.0f, 0x1.51aec4p-37f, 0.0f, 0x1.ae2684p-99f,
     0x1.9b45fcp-101f, 0x1.57a956p-106f, 0x1.6ce7a8p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.52a33ep-64f, 0.0f, 0.0f, 0x1.baa89ep-66f, 0.0f, 0.0f,
     0x1.713ef6p-69f, 0.0f, 0x1.494b2p-4f, 0.0f, 0x1.5be53ep-124f, 0.0f,
     0x1.a5730ep-78f, 0.0f, 0.0f, 0x1.74a8ap-1f, 0.0f, 0x1.61564p-85f, 0.0f, 0.0f,
     0.0f, 0x1.ca314ep-6f, 0.0f, 0.0f, 0x1.6e5484p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef32e6p-56f, 0.0f, 0.0f, 0x1.d4e0fcp-3f, 0.0f, 0x1.aa9e62p-92f, 0.0f, 0.0f,
     0x1.4ba7f8p-77f, 0.0f, 0.0f, 0x1.0ae7c8p-73f, 0x1.6063b2p-120f, 0x1.49b73cp-11f,
     0.0f, 0x1.3a96aep-50f, 0x1.04c7bcp-42f, 0.0f, 0x1.fe586ap-114f, 0x1.9dbea6p-77f,
     0x1.a55c4p-41f, 0x1.6bdad6p-44f, 0.0f, 0.0f, 0.0f, 0x1.fb64a8p-35f,
     0x1.b50274p-52f, 0.0f, 0x1.bf3ae8p-62f, 0x1.64be7ap-3f, 0x1.7acd2ap-35f,
     0x1.6fab1cp-49f, 0x1.0ad776p-33f, 0x1.766b2cp-69f, 0.0f, 0.0f, 0.0f,
     0x1.a9ce44p-102f, 0.0f, 0.0f, 0.0f, 0x1.2fb4ecp-84f, 0x1.c4ac8ep-8f,
     0x1.8276ccp-89f, 0x1.105398p-74f, 0.0f, 0x1.39cff6p-64f, 0x1.7907d8p-90f, 0.0f,
     0x1.ad6f3p-84f, 0x1.411992p-10f, 0x1.0f709ap-12f, 0.0f, 0.0f, 0x1.47261cp-21f,
     0.0f, 0.0f, 0x1.d0c256p-1f, 0.0f, 0x1.800658p-68f, 0.0f, 0x1.66f0d4p-115f, 0.0f,
     0.0f, 0x1.5787dap-66f, 0x1.f0717p-40f, 0x1.adbc36p-114f, 0x1.53b9fap-121f,
     0x1.4a51e4p-96f, 0.0f, 0x1.0d0cfap-24f, 0.0f, 0x1.13b7a4p-88f, 0.0f,
     0x1.44c63cp-7f, 0.0f, 0.0f, 0x1.8e9282p-108f, 0.0f, 0x1.3663dep-92f, 0.0f, 0.0f,
     0.0f, 0x1.93d906p-28f, 0x1.8c95aap-25f, 0x1.0cdb4ap-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d4a48p-110f, 0.0f, 0x1.040f02p-35f, 0.0f, 0x1.3530fcp-6f, 0x1.5e5f84p-82f,
     0x1.848452p-47f, 0x1.5fee7p-61f, 0x1.4a4784p-107f, 0x1.a88fbcp-99f,
     0x1.bd16aap-119f, 0.0f, 0x1.9e66fp-111f, 0x1.e65d24p-29f, 0x1.a2fd7cp-9f,
     0x1.17785ep-71f, 0.0f, 0.0f, 0x1.1a5cbep-38f, 0x1.5618a8p-99f, 0x1.49baaep-112f,
     0.0f, 0.0f, 0.0f, 0x1.e5dabp-8f, 0.0f, 0.0f, 0.0f, 0x1.357afap-38f, 0.0f, 0.0f,
     0.0f, 0x1.98a9f6p-21f, 0x1.5ac198p-74f, 0.0f, 0x1.35138cp-76f, 0.0f, 0.0f,
     0x1.a45dfp-46f, 0.0f, 0x1.2240bap-86f, 0.0f, 0x1.92207cp-95f, 0.0f,
     0x1.3d9cb4p-6f, 0x1.ec278cp-117f, 0x1.56d552p-7f, 0x1.749738p-120f, 0.0f, 0.0f,
     0x1.b3e47p-34f, 0.0f, 0x1.5eb9f2p-98f, 0x1.084594p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ac5834p-90f, 0.0f, 0.0f, 0x1.aaca74p-81f, 0x1.b7c65ep-88f,
     0x1.e03296p-83f, 0.0f, 0.0f, 0x1.462838p-98f, 0.0f, 0x1.94ea8ep-11f,
     0x1.0020bp-20f, 0x1.1997eap-109f, 0x1.730008p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b3006p-62f, 0.0f, 0.0f, 0x1.4ac994p-41f, 0.0f, 0x1.9187ep-83f, 0.0f, 0.0f,
     0.0f, 0x1.baf684p-116f, 0x1.2d3d84p-47f, 0x1.416652p-93f, 0x1.63917ep-36f,
     0x1.0c3e6cp-61f, 0x1.c61b4ap-117f, 0x1.df555cp-46f, 0.0f, 0.0f, 0x1.2d26b4p-112f,
     0x1.95a972p-51f, 0.0f, 0.0f, 0.0f, 0x1.93e8ccp-75f, 0x1.c4ff4p-13f,
     0x1.dd6daap-93f, 0.0f, 0x1.60ed96p-64f, 0x1.718374p-13f, 0x1.863266p-117f, 0.0f,
     0x1.4f667cp-42f, 0x1.4ea2e2p-28f, 0.0f, 0x1.36de2ap-79f, 0x1.45d85cp-90f,
     0x1.bdfa98p-94f, 0x1.6008c2p-45f, 0.0f, 0.0f, 0.0f, 0x1.c8314cp-57f,
     0x1.106d26p-37f, 0x1.ff7688p-29f, 0.0f, 0x1.c9d90ep-63f, 0.0f, 0x1.a983fep-103f,
     0.0f, 0x1.65ec3ep-24f, 0x1.91b6d8p-35f, 0x1.3ba264p-77f, 0.0f, 0x1.556a2ap-9f,
     0.0f, 0x1.b406acp-33f, 0.0f, 0x1.f9c35ap-66f, 0x1.3df104p-73f, 0.0f, 0.0f,
     0x1.95889cp-26f, 0.0f, 0x1.4bf52ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be5b3cp-12f, 0.0f, 0.0f, 0x1.93c6bp-80f, 0x1.4945cp-18f, 0.0f, 0.0f,
     0x1.b14d5ep-109f, 0x1.47e8dp-97f, 0x1.d7a95ep-8f, 0x1.565c56p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0d822p-43f, 0x1.a17cd6p-121f, 0.0f, 0x1.5dba42p-89f,
     0.0f, 0.0f, 0.0f, 0x1.15b714p-107f, 0.0f, 0x1.e4fb2ep-29f, 0.0f, 0.0f, 0.0f,
     0x1.fa6bdap-123f, 0x1.da332cp-57f, 0.0f, 0x1.b4c2a4p-40f, 0.0f, 0.0f,
     0x1.c564cp-105f, 0x1.31a84cp-100f, 0.0f, 0.0f, 0x1.fbb93ap-122f, 0.0f,
     0x1.62eac2p-24f, 0x1.424238p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a0b76p-114f, 0.0f,
     0.0f, 0x1.2329b8p-12f, 0.0f, 0x1.58b128p-88f, 0x1.1dda42p-61f, 0x1.8f9c3ap-26f,
     0x1.28bf52p-57f, 0.0f, 0.0f, 0x1.ab8d48p-50f, 0.0f, 0.0f, 0x1.e8d14p-100f, 0.0f,
     0.0f, 0.0f, 0x1.84634ep-89f, 0x1.0923ccp-71f, 0.0f, 0.0f, 0.0f, 0x1.d96268p-59f,
     0x1.e7c9e2p-83f, 0.0f, 0x1.11f7ap-7f, 0.0f, 0.0f, 0x1.656c56p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bf9c54p-48f, 0x1.44e706p-119f, 0x1.faf6b2p-17f, 0.0f, 0.0f, 0.0f,
     0x1.887bb4p-13f, 0x1.29c064p-53f, 0.0f, 0.0f, 0x1.79f8e8p-34f, 0x1.b1e36cp-65f,
     0.0f, 0.0f, 0x1.09565p-97f, 0x1.c675a4p-57f, 0x1.1a909cp-63f, 0.0f,
     0x1.7b9352p-40f, 0x1.c8ff2ap-95f, 0x1.b0d76ap-104f, 0x1.148f52p-102f, 0.0f,
     0x1.9495f6p-47f, 0x1.85da32p-91f, 0.0f, 0x1.1db516p-113f, 0x1.96fecp-63f, 0.0f,
     0x1.3c0f12p-34f, 0x1.6909e2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0823dap-121f, 0.0f, 0x1.4ae642p-109f, 0.0f, 0x1.6a5968p-65f,
     0x1.46c664p-124f, 0x1.212128p-103f, 0x1.62dbaep-124f, 0x1.9253ecp-5f,
     0x1.c9ec04p-72f, 0.0f, 0.0f, 0x1.c7ecbap-82f, 0.0f, 0.0f, 0x1.b4f238p-96f, 0.0f,
     0x1.73df26p-58f, 0x1.ade0b6p-81f, 0x1.fdf8a6p-85f, 0x1.95e83ep-123f,
     0x1.33f336p-125f, 0x1.938f3cp-5f, 0.0f, 0.0f, 0x1.30538cp-81f, 0x1.d78d7ap-95f,
     0x1.756d78p-7f, 0x1.33f464p-54f, 0.0f, 0x1.92083cp-94f, 0x1.384d4ap-31f, 0.0f,
     0.0f, 0x1.d7df78p-102f, 0x1.e5d666p-64f, 0.0f, 0x1.8450e6p-18f, 0x1.d5f956p-49f,
     0x1.4f98f2p-61f, 0x1.b941f4p-14f, 0.0f, 0x1.b0273ap-124f, 0.0f, 0x1.8b3a3ap-2f,
     0x1.9acad8p-77f, 0x1.c5b742p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed3eecp-71f, 0x1.c76618p-10f, 0x1.b1ad32p-4f, 0x1.29713ep-24f, 0.0f,
     0x1.79dc48p-97f, 0x1.270446p-69f, 0.0f, 0.0f, 0.0f, 0x1.7224fcp-60f, 0.0f, 0.0f,
     0x1.9543b4p-19f, 0x1.4efbc6p-39f, 0x1.dbabb4p-47f, 0x1.e109bap-104f,
     0x1.79b816p-59f, 0.0f, 0x1.ff165ap-12f, 0.0f, 0x1.1afaap-41f, 0x1.b8906p-17f,
     0x1.b0551cp-53f, 0.0f, 0x1.a31a24p-98f, 0x1.e4d56ap-104f, 0x1.3afd14p-15f,
     0x1.23be44p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0202eep-67f, 0.0f, 0x1.b04d6ap-36f,
     0x1.1b079ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19cde6p-117f, 0.0f, 0.0f,
     0x1.aa5ea8p-82f, 0x1.7da3f8p-47f, 0.0f, 0x1.840996p-115f, 0.0f, 0x1.244ee2p-47f,
     0x1.33157ep-66f, 0.0f, 0x1.56f34ep-18f, 0.0f, 0x1.1cb274p-66f, 0x1.339fd2p-68f,
     0x1.a2bb6cp-61f, 0x1.c6fba4p-24f, 0.0f, 0.0f, 0x1.0f2b5ap-11f, 0.0f,
     0x1.fe7336p-110f, 0.0f, 0x1.499a5cp-14f, 0x1.fdf7cep-98f, 0.0f, 0x1.cf1172p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b0638p-104f, 0x1.9279b4p-118f, 0x1.6f74fcp-84f,
     0.0f, 0x1.c12a62p-3f, 0.0f, 0x1.cc8d18p-56f, 0x1.7822a4p-62f, 0x1.eeec2ap-78f,
     0x1.1fda4cp-113f, 0x1.1f802p-49f, 0.0f, 0.0f, 0x1.1f8e62p-59f, 0.0f,
     0x1.1f59f8p-42f, 0.0f, 0x1.a6c494p-123f, 0x1.a9a55ep-31f, 0.0f, 0x1.d88f4ep-60f,
     0x1.4deaaap-65f, 0x1.472622p-11f, 0x1.b119dep-108f, 0.0f, 0x1.b47c22p-115f,
     0x1.c4e42ap-29f, 0x1.da95c2p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06097ap-97f,
     0.0f, 0x1.1849c2p-117f, 0.0f, 0x1.bc8a6ap-56f, 0.0f, 0.0f, 0x1.3ce39cp-8f,
     0x1.3273e6p-83f, 0.0f, 0x1.4d7b84p-116f, 0x1.d540c4p-103f, 0x1.cd0196p-45f,
     0x1.085db2p-25f, 0.0f, 0.0f, 0x1.d8865cp-2f, 0x1.ea7f08p-35f, 0.0f,
     0x1.eabcfp-8f, 0x1.02013ap-37f, 0.0f, 0x1.6d6a2cp-81f, 0x1.3681c4p-34f, 0.0f,
     0x1.cb5112p-101f, 0.0f, 0.0f, 0x1.4ea6f4p-42f, 0.0f, 0.0f, 0x1.5a83eap-60f,
     0x1.1b9be2p-59f, 0.0f, 0.0f, 0x1.61a4cp-113f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
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
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sincosf8_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincosf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincosf8_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
