/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastcosf1_u3500purecfma.c --function \
 *     Sleef_fastcosf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.aa97fap-19f, 0x1.1aa142p-73f, 0x1.13acep-14f, 0x1.264948p-112f,
     0x1.6df71ap-9f, 0.0f, 0.0f, 0x1.015c68p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.791d18p-42f, 0.0f, 0x1.45194cp-54f, 0x1.806cb4p-116f, 0.0f, 0x1.c23f4cp-62f,
     0x1.8820a4p-93f, 0.0f, 0.0f, 0.0f, 0x1.615a14p-1f, 0x1.6cac78p-102f, 0.0f,
     0x1.754c7cp-3f, 0x1.46d036p-81f, 0x1.1877e2p-77f, 0.0f, 0.0f, 0x1.421382p-52f,
     0.0f, 0x1.211e3p-37f, 0.0f, 0.0f, 0.0f, 0x1.41b57cp-123f, 0x1.e9f08cp-94f, 0.0f,
     0.0f, 0x1.4d6fdap-107f, 0x1.18906p-82f, 0x1.d8c8c6p-29f, 0x1.3047ep-42f, 0.0f,
     0.0f, 0.0f, 0x1.2d5bc8p-42f, 0.0f, 0.0f, 0x1.d68bf6p-118f, 0.0f, 0x1.5a00b2p-6f,
     0x1.5a055p-125f, 0.0f, 0x1.499d4p-10f, 0.0f, 0x1.2d93fep-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bceacp-58f, 0x1.b5fa7p-43f, 0x1.41d006p-113f, 0.0f,
     0x1.9cf5c6p-87f, 0.0f, 0x1.cf6b12p-18f, 0.0f, 0x1.339e92p-31f, 0.0f, 0.0f,
     0x1.18b6bp-93f, 0x1.906242p-81f, 0x1.4b4b4ep-68f, 0.0f, 0x1.11dfacp-77f,
     0x1.b3b756p-9f, 0.0f, 0x1.7a9a24p-126f, 0.0f, 0.0f, 0x1.964a0cp-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dd9a6cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d1aacp-35f,
     0x1.110d16p-61f, 0.0f, 0x1.abdf7cp-23f, 0.0f, 0.0f, 0x1.0c7d26p-10f,
     0x1.fea406p-37f, 0x1.62228p-102f, 0.0f, 0.0f, 0x1.b556e6p-59f, 0.0f,
     0x1.b35e78p-35f, 0x1.7e6042p-81f, 0x1.341454p-120f, 0.0f, 0.0f, 0x1.4119eep-104f,
     0.0f, 0x1.9ec0acp-112f, 0x1.37204ap-99f, 0.0f, 0x1.9b06ccp-124f, 0x1.f5f3a4p-84f,
     0.0f, 0x1.ffa6c4p-80f, 0.0f, 0.0f, 0.0f, 0x1.00f614p-2f, 0x1.744928p-43f,
     0x1.2b8fa6p-9f, 0x1.345708p-74f, 0.0f, 0x1.12d26ep-106f, 0.0f, 0x1.c1f1cp-126f,
     0.0f, 0.0f, 0.0f, 0x1.88ba72p-118f, 0.0f, 0x1.e4cd84p-96f, 0x1.4cbe4ap-91f,
     0x1.728636p-60f, 0.0f, 0x1.997bf8p-82f, 0x1.cc44b6p-17f, 0x1.fd5bd4p-120f,
     0x1.260ff6p-104f, 0x1.e6fb04p-84f, 0x1.611768p-6f, 0x1.2b529p-39f,
     0x1.6b377p-71f, 0x1.63d14p-83f, 0.0f, 0.0f, 0x1.fefa28p-94f, 0.0f, 0.0f,
     0x1.82ec28p-101f, 0x1.5a02bp-100f, 0.0f, 0.0f, 0x1.665e96p-95f, 0x1.24b242p-102f,
     0x1.6b53e6p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1474fp-67f, 0.0f, 0x1.469dp-38f,
     0x1.cb0204p-34f, 0x1.012b0ep-85f, 0.0f, 0x1.c44e54p-67f, 0x1.997b06p-103f, 0.0f,
     0x1.72112ep-97f, 0x1.d3df42p-89f, 0.0f, 0.0f, 0x1.9c3fccp-23f, 0x1.4b19e2p-20f,
     0x1.764044p-84f, 0.0f, 0.0f, 0x1.d7d53p-70f, 0.0f, 0.0f, 0x1.6394e4p-78f,
     0x1.028cb8p-57f, 0.0f, 0x1.e8719ep-49f, 0.0f, 0.0f, 0.0f, 0x1.3e79p-37f,
     0x1.963888p-86f, 0x1.cf9274p-25f, 0.0f, 0x1.4956b8p-108f, 0x1.54b21cp-113f,
     0x1.d8d3dep-17f, 0.0f, 0x1.0b041ap-91f, 0x1.52e7ap-15f, 0x1.260c88p-101f,
     0x1.d98312p-100f, 0.0f, 0.0f, 0.0f, 0x1.7f92bep-2f, 0x1.48ae56p-3f, 0.0f, 0.0f,
     0x1.cf1994p-114f, 0.0f, 0x1.d99ab4p-43f, 0x1.7e32e6p-4f, 0x1.441244p-16f,
     0x1.c4bad6p-45f, 0x1.e6a936p-63f, 0.0f, 0.0f, 0x1.b6df22p-105f, 0.0f, 0.0f,
     0x1.1e083ap-77f, 0.0f, 0.0f, 0.0f, 0x1.87ffe8p-110f, 0x1.b5bce6p-94f,
     0x1.f01594p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.700826p-48f, 0x1.f2146cp-6f, 0.0f,
     0x1.444742p-63f, 0x1.ea61bep-94f, 0x1.274d6p-63f, 0x1.132d16p-72f, 0.0f,
     0x1.ba5d9ep-65f, 0.0f, 0.0f, 0x1.6ce4e6p-57f, 0.0f, 0x1.545b64p-21f, 0.0f, 0.0f,
     0x1.2cd6a8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a6c3cp-56f,
     0x1.aea274p-84f, 0x1.f41a82p-66f, 0x1.e24b2p-80f, 0x1.2a525ap-15f,
     0x1.d4f38cp-6f, 0.0f, 0.0f, 0.0f, 0x1.c70668p-52f, 0x1.ed358ep-14f,
     0x1.240044p-25f, 0x1.5efbd8p-26f, 0x1.f95dacp-18f, 0x1.20c6dap-80f,
     0x1.1dd1aap-27f, 0.0f, 0x1.7d74bp-34f, 0.0f, 0x1.2a21bcp-13f, 0x1.9dcc2p-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b5714p-5f, 0x1.3af9ap-12f, 0x1.512154p-99f,
     0x1.a8ac42p-72f, 0.0f, 0.0f, 0x1.7c74d6p-121f, 0.0f, 0x1.bf4534p-98f, 0.0f,
     0x1.ab2ep-94f, 0.0f, 0.0f, 0x1.eef7b2p-72f, 0x1.2294aep-124f, 0x1.ba1116p-13f,
     0x1.626178p-34f, 0x1.b91cdep-46f, 0x1.c69c5p-85f, 0x1.d8ca74p-77f, 0.0f,
     0x1.1340dap-5f, 0x1.ea71ccp-50f, 0.0f, 0.0f, 0x1.6646a2p-12f, 0x1.c95e0cp-51f,
     0x1.f695c8p-102f, 0.0f, 0.0f, 0x1.967d32p-83f, 0.0f, 0x1.f1d08ap-125f,
     0x1.fe8e7cp-41f, 0x1.741d6ep-85f, 0x1.94dbdap-42f, 0.0f, 0x1.5159c4p-69f,
     0x1.fea566p-13f, 0.0f, 0x1.2391d6p-93f, 0x1.d5456ep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d32b8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69a9bp-95f, 0x1.6abaep-63f, 0.0f,
     0.0f, 0.0f, 0x1.ad09fp-21f, 0x1.ce8c5ep-83f, 0.0f, 0.0f, 0.0f, 0x1.7a413p-105f,
     0x1.880542p-123f, 0x1.d2fbcep-50f, 0x1.076b04p-32f, 0x1.dbb298p-91f,
     0x1.5a47fap-100f, 0.0f, 0x1.3cb046p-49f, 0.0f, 0x1.33c3dp-90f, 0x1.d15164p-16f,
     0.0f, 0x1.740adp-102f, 0.0f, 0x1.7afaf6p-47f, 0x1.af564p-106f, 0.0f, 0.0f,
     0x1.84d226p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1147dep-72f, 0.0f, 0.0f,
     0x1.223268p-119f, 0.0f, 0x1.d6d9a8p-70f, 0.0f, 0.0f, 0x1.c3866cp-113f,
     0x1.c49afap-122f, 0.0f, 0.0f, 0x1.0d33e6p-119f, 0.0f, 0.0f, 0x1.a29d9p-71f, 0.0f,
     0.0f, 0x1.f30224p-99f, 0.0f, 0x1.156046p-99f, 0x1.5c1bd8p-85f, 0x1.b06484p-93f,
     0.0f, 0x1.e58578p-105f, 0x1.10b3bcp-66f, 0.0f, 0x1.f86028p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7779d4p-85f, 0x1.2e4b5ep-10f, 0x1.41277cp-66f, 0.0f, 0.0f, 0.0f,
     0x1.b7b248p-49f, 0.0f, 0x1.96318p-44f, 0.0f, 0.0f, 0.0f, 0x1.d0422cp-86f,
     0x1.abd988p-32f, 0x1.cb09fcp-4f, 0x1.4e0606p-119f, 0.0f, 0.0f, 0x1.c5ead4p-105f,
     0x1.cb7bb2p-90f, 0x1.a4199ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.150fe2p-13f,
     0.0f, 0.0f, 0x1.cd7f4ep-62f, 0x1.9819f2p-84f, 0.0f, 0x1.b71004p-93f,
     0x1.6061c4p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5fe4ap-46f, 0x1.b2ec8cp-59f,
     0x1.1f3caep-5f, 0x1.7b6feap-38f, 0x1.51d8dp-2f, 0.0f, 0x1.1c5754p-14f,
     0x1.569f2ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.135fb2p-66f, 0.0f, 0.0f,
     0x1.acf988p-1f, 0x1.8510cp-103f, 0.0f, 0x1.bab15ap-99f, 0.0f, 0.0f,
     0x1.9d6f1p-8f, 0x1.ad36f6p-4f, 0.0f, 0.0f, 0x1.add41ep-125f, 0.0f,
     0x1.34918cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e07e96p-4f, 0x1.2a8b36p-40f,
     0x1.8411dep-126f, 0x1.ff5942p-21f, 0x1.452e2ep-43f, 0.0f, 0x1.1d58fap-52f, 0.0f,
     0x1.10455ap-38f, 0.0f, 0x1.d34f3ep-42f, 0x1.d758b6p-35f, 0.0f, 0.0f,
     0x1.aba31ap-51f, 0.0f, 0x1.f69188p-113f, 0x1.c4afd8p-35f, 0.0f, 0.0f,
     0x1.92c5a4p-14f, 0.0f, 0x1.e3d732p-56f, 0.0f, 0.0f, 0x1.f4f588p-55f, 0.0f, 0.0f,
     0x1.9572bap-24f, 0.0f, 0.0f, 0x1.5e574cp-53f, 0x1.37c858p-50f, 0.0f,
     0x1.7ff6eep-8f, 0x1.29128p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c12176p-115f,
     0x1.8d3462p-119f, 0x1.6eb6ecp-35f, 0.0f, 0x1.b5c584p-4f, 0.0f, 0x1.de9ff4p-74f,
     0x1.c99676p-99f, 0.0f, 0x1.f247a4p-60f, 0x1.6eddc2p-122f, 0x1p0f, 0.0f, 0.0f,
     0x1.a0dee6p-36f, 0x1.629a48p-20f, 0x1.495da8p-106f, 0.0f, 0.0f, 0.0f,
     0x1.23d844p-108f, 0.0f, 0x1.f331cep-29f, 0.0f, 0.0f, 0x1.aeb7e6p-91f,
     0x1.a9fe4p-20f, 0x1.e9a5f2p-25f, 0x1.3fb87cp-45f, 0x1.797c3cp-88f,
     0x1.9214bp-74f, 0.0f, 0x1.53a8fep-78f, 0x1.c077c6p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea5742p-66f, 0x1.1ab646p-64f, 0.0f, 0.0f, 0x1.db77a4p-85f, 0.0f, 0.0f, 0.0f,
     0x1.5336e4p-126f, 0.0f, 0x1.ea6fc4p-97f, 0x1.a21caep-63f, 0.0f, 0x1.f78dcap-110f,
     0x1.bf5deap-111f, 0.0f, 0x1.2ccd6ap-24f, 0x1.e93fp-15f, 0.0f, 0.0f,
     0x1.a2517cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14bd4ep-109f, 0.0f, 0.0f, 0.0f,
     0x1.6757dcp-66f, 0.0f, 0.0f, 0x1.921b92p-124f, 0x1.f6eaccp-68f, 0x1.baea1p-83f,
     0x1.4231bcp-29f, 0.0f, 0.0f, 0x1.19317p-61f, 0x1.b443cap-101f, 0x1.6be4b8p-37f,
     0.0f, 0.0f, 0x1.cba3dp-30f, 0x1.c56754p-65f, 0x1.9c5948p-61f, 0x1.ed992p-9f,
     0x1.c15366p-13f, 0x1.51670cp-37f, 0.0f, 0.0f, 0x1.8a5976p-3f, 0.0f,
     0x1.04d898p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2b246p-38f, 0x1.20e60cp-11f,
     0x1.9c132ep-96f, 0.0f, 0.0f, 0x1.a999eap-109f, 0x1.edb104p-103f, 0x1.f67ecep-40f,
     0.0f, 0x1.e5afp-81f, 0.0f, 0x1.447c14p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46f85p-61f, 0.0f, 0x1.f2a9d6p-60f, 0x1.cbc13cp-114f, 0.0f, 0x1.e64d78p-41f,
     0.0f, 0x1.8c2b8ep-95f, 0.0f, 0x1.5f2848p-75f, 0.0f, 0.0f, 0x1.11c474p-67f,
     0x1.575ad4p-54f, 0.0f, 0x1.e66e46p-18f, 0x1.17e266p-29f, 0x1.4d57dep-109f, 0.0f,
     0.0f, 0x1.9384d8p-116f, 0x1.f8d5bap-37f, 0x1.3b825ep-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef3082p-80f, 0x1.e6441cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3636ap-10f, 0.0f, 0.0f, 0x1.c520b4p-86f, 0x1.c9d45ap-56f, 0x1.abc70ep-1f,
     0x1.f9423p-113f, 0x1.8f02acp-43f, 0.0f, 0x1.a9725p-98f, 0.0f, 0.0f,
     0x1.f5564cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.830f4cp-66f, 0x1.70a424p-43f,
     0.0f, 0.0f, 0x1.48481ap-37f, 0.0f, 0.0f, 0.0f, 0x1.a3ca1p-94f, 0.0f,
     0x1.e01966p-27f, 0x1.278e58p-116f, 0x1.2d82dap-34f, 0x1.c38434p-38f, 0.0f,
     0x1.ff0464p-71f, 0x1.b4165ap-67f, 0x1.4c2a52p-95f, 0.0f, 0x1.99e1b6p-49f,
     0x1.107838p-83f, 0x1.312834p-29f, 0x1.a9419cp-4f, 0.0f, 0x1.62886ap-27f, 0.0f,
     0x1.041872p-25f, 0x1.e2e522p-22f, 0.0f, 0x1.d963ccp-91f, 0x1.203232p-91f,
     0x1.45fc9cp-28f, 0x1.078fe4p-49f, 0x1.e44e74p-44f, 0x1.8f2dbcp-40f,
     0x1.cdd72cp-47f, 0.0f, 0x1.9d9dd4p-30f, 0x1.84c6bp-108f, 0.0f, 0x1.677e22p-76f,
     0x1.4b6a3ap-104f, 0.0f, 0.0f, 0x1.29fecp-30f, 0.0f, 0x1.3bf584p-40f,
     0x1.4892cap-111f, 0x1.7a3d88p-57f, 0.0f, 0x1.a36aa6p-72f, 0x1.560c44p-53f,
     0x1.56b70ap-95f, 0.0f, 0.0f, 0.0f, 0x1.2a1f8p-89f, 0x1.bc7a5p-22f,
     0x1.2b56c8p-25f, 0x1.63a12ep-51f, 0x1.466e62p-98f, 0x1.4b3cc2p-69f,
     0x1.d9fd0ap-80f, 0x1.ac20fep-113f, 0.0f, 0.0f, 0x1.9eaeb6p-11f, 0.0f, 0.0f,
     0x1.39d9bep-15f, 0x1.1f8b1p-123f, 0x1.25215p-37f, 0x1.a24b04p-16f,
     0x1.66dc74p-10f, 0.0f, 0x1.5707d8p-57f, 0x1.4e4f2ep-17f, 0x1.f17b14p-61f,
     0x1.f50bb2p-95f, 0.0f, 0x1.f3ac22p-35f, 0.0f, 0.0f, 0.0f, 0x1.d94bd2p-53f, 0.0f,
     0x1.e9e5f8p-51f, 0.0f, 0x1.824182p-24f, 0.0f, 0x1.072cccp-44f, 0.0f, 0.0f,
     0x1.0b5936p-62f, 0.0f, 0x1.faeffap-117f, 0.0f, 0x1.4b06d4p-37f, 0x1.374432p-117f,
     0.0f, 0x1.7c930cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a858cp-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b6721ep-44f, 0.0f, 0x1.46e434p-14f, 0.0f, 0.0f,
     0x1.66dfb6p-70f, 0x1.5077dp-124f, 0.0f, 0.0f, 0.0f, 0x1.f0f552p-69f,
     0x1.acf1f8p-34f, 0.0f, 0x1.c6f484p-63f, 0.0f, 0x1.d66b2ep-98f, 0.0f,
     0x1.2c0074p-77f, 0x1.947e8p-16f, 0x1.06fcap-20f, 0x1.caa348p-69f, 0.0f, 0.0f,
     0x1.f0618cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10a962p-125f, 0x1.c2616ep-45f,
     0x1.dd1b22p-59f, 0.0f, 0x1.cb9ea4p-46f, 0.0f, 0.0f, 0x1.3e9f86p-75f,
     0x1.bcc788p-78f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.3316eap-78f, 0x1.b63a2ap-40f,
     0x1.c72c2ap-26f, 0x1.d78e28p-94f, 0.0f, 0x1.2a77aap-87f, 0x1.dba4b6p-74f, 0.0f,
     0.0f, 0x1.9a027ap-84f, 0.0f, 0.0f, 0.0f, 0x1.ec7146p-80f, 0.0f, 0x1.06edfap-95f,
     0x1.05ed9p-15f, 0x1.298d6ep-116f, 0x1.900d7p-75f, 0.0f, 0.0f, 0.0f,
     0x1.38bfa2p-95f, 0.0f, 0x1.307a8ap-106f, 0.0f, 0x1.9021fap-36f, 0.0f,
     0x1.627098p-126f, 0.0f, 0.0f, 0x1.20c834p-42f, 0.0f, 0.0f, 0x1.080368p-42f, 0.0f,
     0x1.a05c6cp-46f, 0x1.c37a2ap-24f, 0.0f, 0x1.37bfbcp-98f, 0.0f, 0x1.ab74d4p-24f,
     0x1.766622p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b11ac8p-69f, 0.0f, 0x1.45428cp-43f,
     0x1.aae176p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4372d6p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9adc3ep-4f, 0.0f, 0.0f,
     0x1.0c0b16p-6f, 0.0f, 0.0f, 0x1.6f03cap-63f, 0x1.329fccp-18f, 0x1.84f9a2p-119f,
     0.0f, 0x1.ecc514p-60f, 0x1.e9f5eep-46f, 0x1.5c7106p-54f, 0.0f, 0x1.0b247cp-1f,
     0.0f, 0.0f, 0x1.2fa106p-119f, 0.0f, 0.0f, 0x1.43c408p-38f, 0x1.a4c786p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4473a2p-111f, 0x1.5f1506p-18f, 0x1.3f2a38p-124f,
     0.0f, 0x1.9803a4p-74f, 0x1.3c799ep-50f, 0.0f, 0x1.cbf1f4p-78f, 0x1.66587cp-72f,
     0x1.38ba7cp-106f, 0x1.b153b6p-118f, 0.0f, 0.0f, 0.0f, 0x1.832f1cp-40f, 0.0f,
     0x1.a0400ep-19f, 0.0f, 0x1.f967f2p-69f, 0.0f, 0x1.593e6ap-22f, 0x1.205052p-126f,
     0x1.4b7b86p-34f, 0x1.05c6f6p-25f, 0x1.e9d6p-103f, 0.0f, 0x1.c8dc6ap-24f, 0x1p0f,
     0x1.68bc58p-51f, 0x1.d7a126p-84f, 0x1.ba6bep-103f, 0x1.073a9ap-92f,
     0x1.f1e14cp-60f, 0.0f, 0x1.c4ef84p-116f, 0x1.d2981ep-18f, 0.0f, 0x1.c92796p-3f,
     0x1.f44ea2p-51f, 0.0f, 0.0f, 0x1.19aa62p-40f, 0x1.43d212p-46f, 0.0f, 0.0f, 0.0f,
     0x1.396fcap-100f, 0x1.f73ea8p-110f, 0.0f, 0.0f, 0x1.79cdfep-29f, 0.0f, 0.0f,
     0x1.bf517cp-59f, 0x1.0527e2p-110f, 0.0f, 0x1.3777bap-36f, 0x1.96f5cp-92f, 0.0f,
     0.0f, 0.0f, 0x1.e01836p-116f, 0x1.e6b8ccp-8f, 0.0f, 0x1.576f02p-88f, 0.0f,
     0x1.cbe69p-26f, 0.0f
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
            tmp1 = Sleef_fastcosf1_u3500purecfma(tmp0);
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
    printf("Sleef_fastcosf1_u3500purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fastcosf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
