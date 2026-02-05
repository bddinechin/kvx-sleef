/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf1_u10purecfma.c --function \
 *     Sleef_finz_coshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0x1.fe6084p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70e066p-91f, 0.0f,
     0x1.edcb94p-125f, 0x1.57bd9ap-31f, 0.0f, 0.0f, 0x1.870714p-13f, 0.0f, 0.0f, 0.0f,
     0x1.69c43ap-4f, 0x1.eb9cf2p-21f, 0x1.edcf18p-80f, 0.0f, 0x1.671ccep-44f,
     0x1.9b468p-46f, 0x1.93c2aep-45f, 0x1.beefdcp-62f, 0x1.e6da06p-12f,
     0x1.fb7368p-28f, 0x1.da102p-89f, 0x1.7061acp-69f, 0x1.f4eab2p-116f,
     0x1.f2cc5p-81f, 0x1.75566ep-81f, 0x1.4b487ep-1f, 0.0f, 0.0f, 0x1.557ec8p-11f,
     0x1.ad60cep-78f, 0.0f, 0.0f, 0x1.90ddc4p-77f, 0x1.da8a66p-101f, 0.0f,
     0x1.f00c38p-42f, 0.0f, 0x1.1a7762p-17f, 0.0f, 0x1.ce7b52p-90f, 0x1.9d6604p-107f,
     0x1.060d1ep-73f, 0.0f, 0x1.cd42bap-53f, 0x1.750a8ep-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4961p-41f, 0x1.312e08p-60f, 0.0f, 0.0f,
     0x1.ded45cp-58f, 0.0f, 0x1.536f8cp-9f, 0x1.5e9c3cp-50f, 0.0f, 0x1.6ff67cp-84f,
     0.0f, 0x1.4fb54p-77f, 0.0f, 0x1.213df6p-54f, 0x1.868e16p-76f, 0x1.ea0986p-68f,
     0x1.408cb4p-48f, 0x1.481342p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ca5dcp-2f, 0.0f,
     0x1.c8cb2p-21f, 0x1.7716cap-18f, 0x1.fd8dacp-86f, 0x1.ef87b2p-66f,
     0x1.24c18ep-118f, 0.0f, 0x1.3b6f3p-20f, 0.0f, 0x1.7c785ep-18f, 0.0f,
     0x1.a329e4p-20f, 0.0f, 0.0f, 0.0f, 0x1.065c2ep-98f, 0.0f, 0.0f, 0x1.09f80cp-16f,
     0.0f, 0x1.5fe21ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae2d22p-71f, 0.0f,
     0x1.76ed86p-118f, 0x1.6f9938p-17f, 0x1.ed95fep-86f, 0.0f, 0x1.cb388ap-124f, 0.0f,
     0x1.74b188p-79f, 0.0f, 0x1.0ad6a4p-24f, 0x1.dd54eep-10f, 0x1.3efcd2p-55f,
     0x1.63488ep-102f, 0.0f, 0x1.62f7b4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd1c28p-38f, 0x1.216c64p-51f, 0x1.b735a4p-10f, 0.0f, 0.0f, 0x1.44959ep-103f,
     0x1.b839fap-124f, 0x1.ae0be8p-118f, 0.0f, 0.0f, 0x1.010cfap-126f, 0.0f, 0.0f,
     0x1.fb8258p-32f, 0.0f, 0.0f, 0.0f, 0x1.160044p-30f, 0.0f, 0x1.6e9edp-9f,
     0x1.3eb4ccp-83f, 0x1.70dac8p-53f, 0.0f, 0x1.add05cp-79f, 0x1.9608p-87f,
     0x1.f48ee4p-27f, 0x1.2915d6p-33f, 0x1.cf9088p-123f, 0x1.efa0a8p-18f,
     0x1.237a42p-23f, 0x1.78b5ecp-19f, 0x1.0bd082p-126f, 0.0f, 0x1.f068b4p-104f,
     0x1.46c59p-90f, 0.0f, 0x1.115e62p-28f, 0.0f, 0x1.44b7fp-69f, 0.0f, 0.0f,
     0x1.3b124ep-58f, 0.0f, 0.0f, 0x1.62e48p-31f, 0.0f, 0x1.49cbb4p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a036fcp-94f, 0.0f, 0x1.15b93cp-3f, 0x1.11f51ap-59f,
     0x1.ecc322p-96f, 0x1.a7a9d8p-58f, 0x1.63f734p-96f, 0.0f, 0x1.198028p-116f,
     0x1.a602dp-45f, 0.0f, 0x1.67cfacp-108f, 0x1.0768d2p-116f, 0.0f, 0.0f,
     0x1.24859ep-93f, 0x1.968f18p-93f, 0.0f, 0x1.f7875p-8f, 0.0f, 0.0f, 0x1.f1b7p-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1227ap-20f, 0.0f, 0.0f, 0.0f,
     0x1.0c43aep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8604dp-50f, 0.0f, 0.0f,
     0x1.24b396p-17f, 0.0f, 0x1.b2551ap-71f, 0x1.748662p-83f, 0.0f, 0x1.109426p-76f,
     0x1.f09b6cp-54f, 0x1.bc80b4p-62f, 0x1.e4b484p-8f, 0.0f, 0x1.bef7d6p-77f, 0.0f,
     0.0f, 0.0f, 0x1.6faadep-106f, 0x1.c6156ep-52f, 0.0f, 0x1.b369a4p-51f, 0.0f,
     0x1.151436p-109f, 0x1.0d4a82p-123f, 0x1.1a70fap-75f, 0.0f, 0.0f, 0x1.f48434p-41f,
     0x1.f3531cp-125f, 0.0f, 0x1.d8e428p-84f, 0x1.51bb1ap-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.45f06p-74f, 0.0f, 0.0f, 0.0f, 0x1.f49adep-124f, 0x1.099434p-42f,
     0x1.7acfap-30f, 0x1.c21696p-47f, 0.0f, 0x1.76617ep-86f, 0x1.08c106p-22f,
     0x1.7e98ep-110f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.25489p-92f, 0.0f, 0.0f, 0.0f,
     0x1.d6b878p-62f, 0x1.343fdp-101f, 0x1.494d64p-93f, 0x1.83b59cp-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3ab108p-52f, 0x1.147042p-64f, 0.0f, 0x1.1545bap-76f,
     0x1.7a2d1p-21f, 0.0f, 0x1.4e884p-58f, 0x1.7395c2p-100f, 0x1.b77cf2p-98f, 0.0f,
     0.0f, 0x1.264b96p-2f, 0x1p0f, 0x1.03497p-28f, 0.0f, 0x1.777702p-118f,
     0x1.0761bap-101f, 0.0f, 0x1.360e8p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c11ap-91f, 0x1.c5156cp-11f, 0x1.5fc0b4p-63f, 0x1.dcc538p-19f,
     0x1.1b2dd6p-39f, 0x1.3ad776p-42f, 0.0f, 0.0f, 0x1.452da8p-56f, 0.0f,
     0x1.992c28p-70f, 0x1.495b54p-89f, 0.0f, 0x1.9e8588p-13f, 0x1.1de536p-26f,
     0x1.b4fb6cp-59f, 0.0f, 0x1.5f555ap-17f, 0.0f, 0x1.8a40d2p-56f, 0x1.f47b4cp-52f,
     0x1.f8bc2ep-92f, 0.0f, 0x1.0d94e2p-109f, 0.0f, 0.0f, 0.0f, 0x1.16aa9ep-123f,
     0.0f, 0x1.6e0b88p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0d258p-92f, 0x1.64eb1ap-111f,
     0x1.17b17p-35f, 0x1.67f6d8p-32f, 0.0f, 0x1.a0fd7ap-70f, 0x1.c2dbp-10f,
     0x1.3a7b84p-3f, 0.0f, 0x1.8a9b66p-31f, 0x1.5f845cp-31f, 0.0f, 0x1.727d2cp-14f,
     0x1.8c885ep-122f, 0x1.61ba0ap-36f, 0.0f, 0.0f, 0x1.c5aefap-84f, 0x1.061c0cp-76f,
     0x1.926d14p-114f, 0.0f, 0.0f, 0x1.646cbep-41f, 0.0f, 0.0f, 0x1.ab8fdp-76f, 0.0f,
     0x1.76a6cep-118f, 0x1.7b6e86p-44f, 0x1.f5d034p-2f, 0x1.a90358p-76f,
     0x1.6940cp-60f, 0.0f, 0x1.898182p-7f, 0.0f, 0.0f, 0.0f, 0x1.bbcf48p-109f, 0.0f,
     0x1.0eb684p-2f, 0x1.f6aabcp-91f, 0.0f, 0x1.f8e4p-78f, 0.0f, 0.0f,
     0x1.dbd25ep-103f, 0x1.bbedd4p-43f, 0x1.1a29a2p-44f, 0x1.012b6cp-104f,
     0x1.0bf49cp-86f, 0x1.37e76ep-120f, 0.0f, 0x1.f77d78p-30f, 0.0f, 0.0f,
     0x1.68f3ap-93f, 0.0f, 0x1.40bfc2p-39f, 0.0f, 0.0f, 0x1.c5688ep-51f,
     0x1.aefd36p-85f, 0x1.37bd8ep-119f, 0x1.ffeb86p-25f, 0x1.3f5d06p-72f,
     0x1.0dd1dep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.083f7ap-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e3485p-121f, 0.0f, 0.0f, 0x1.ae18f8p-10f, 0x1p0f,
     0x1.e4a2ep-43f, 0.0f, 0x1.bee3ecp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85e1dap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee9fep-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aa7bc4p-45f, 0x1.0be47ap-30f, 0.0f, 0.0f, 0.0f,
     0x1.552296p-79f, 0.0f, 0x1.cc026ap-101f, 0x1.70dd02p-1f, 0.0f, 0.0f,
     0x1.f010ap-20f, 0.0f, 0x1.9b3452p-114f, 0.0f, 0x1.6e5334p-66f, 0.0f, 0.0f,
     0x1.cc5046p-56f, 0x1.177e3ep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ea792p-52f,
     0.0f, 0.0f, 0x1.5872p-124f, 0x1.d0e34cp-42f, 0x1.c9c8c2p-33f, 0.0f,
     0x1.448b66p-109f, 0x1.b8cf7ep-47f, 0.0f, 0x1.13ad92p-19f, 0.0f, 0.0f,
     0x1.2514cap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c6196p-9f, 0x1.4d1abap-29f,
     0x1.dca224p-20f, 0x1.5a6d0ep-80f, 0.0f, 0.0f, 0.0f, 0x1.715b58p-56f, 0.0f,
     0x1.936b9cp-70f, 0x1.be32b4p-19f, 0x1.1b4db2p-29f, 0x1.94331ep-87f, 0.0f,
     0x1.df470cp-100f, 0x1.baf9c4p-24f, 0.0f, 0x1.f5e75ep-111f, 0x1.79084ep-20f, 0.0f,
     0x1.fe54e8p-35f, 0.0f, 0.0f, 0x1.3c7018p-72f, 0x1.69bfccp-5f, 0x1.b21a9ep-49f,
     0.0f, 0x1.8d0d8p-98f, 0.0f, 0.0f, 0x1.111ab6p-37f, 0.0f, 0x1.2c52c4p-101f,
     0x1.7b3f0ep-3f, 0x1.5dfdbp-69f, 0.0f, 0.0f, 0x1.02cd46p-70f, 0x1.5ece38p-46f,
     0x1.828c2ap-33f, 0x1.ea1cbap-91f, 0x1.36df7p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a410ap-111f, 0x1.848eap-119f, 0x1.c4dbc8p-62f, 0x1.1a5b5p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.779a56p-96f, 0.0f, 0x1.56c19ep-123f, 0.0f, 0.0f, 0.0f,
     0x1.18e51p-8f, 0x1.d38p-81f, 0x1.3ef152p-100f, 0x1.bd444ep-109f, 0x1.a6a0c2p-39f,
     0.0f, 0x1.fca956p-77f, 0.0f, 0.0f, 0x1.5eea0cp-68f, 0x1.86ad0ep-119f, 0.0f, 0.0f,
     0.0f, 0x1.428d14p-23f, 0x1.2cc13p-103f, 0.0f, 0x1.e7a2fp-121f, 0.0f, 0.0f, 0.0f,
     0x1.049baep-122f, 0x1.e1f3fp-120f, 0.0f, 0.0f, 0x1.27c4ecp-111f, 0x1.640c1ep-23f,
     0x1.b20da4p-95f, 0x1.17238ep-13f, 0.0f, 0x1.873cap-102f, 0x1.b808ccp-113f,
     0x1.398cb6p-112f, 0.0f, 0x1.dcf64ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8125cap-1f,
     0.0f, 0x1.5e1ffp-109f, 0.0f, 0.0f, 0.0f, 0x1.0955ep-11f, 0.0f, 0.0f,
     0x1.2fbc3ep-75f, 0x1.e2b1e4p-45f, 0x1.d51c92p-103f, 0x1.f1fa58p-44f, 0.0f,
     0x1.ba27f8p-87f, 0x1.013d5p-57f, 0.0f, 0x1.55f1e2p-103f, 0.0f, 0x1.3215c8p-46f,
     0.0f, 0.0f, 0.0f, 0x1.9490b2p-27f, 0.0f, 0.0f, 0x1.7046cp-112f, 0x1.bf329ap-43f,
     0.0f, 0x1.edf03p-126f, 0x1.35171p-87f, 0x1.b6dd7cp-124f, 0x1.70171ep-88f,
     0x1.f73f9ap-93f, 0.0f, 0x1p0f, 0x1.8bf422p-83f, 0x1.3589d6p-97f, 0.0f, 0.0f,
     0x1.b13e9p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25ef04p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.46e54ep-109f, 0.0f, 0.0f, 0x1.5e39b8p-93f, 0.0f, 0.0f, 0x1.f07fa6p-76f,
     0x1.be834p-114f, 0.0f, 0.0f, 0x1.d9b106p-50f, 0x1.eefd92p-27f, 0x1.b15fd4p-110f,
     0x1.4eb7e6p-78f, 0x1.e79b28p-54f, 0.0f, 0x1.eb78b6p-31f, 0x1.51bd0ep-53f, 0x1p0f,
     0x1.1348c6p-40f, 0x1.aeff2ep-80f, 0.0f, 0x1.3924fcp-29f, 0.0f, 0x1.30808p-102f,
     0.0f, 0x1.4be826p-45f, 0.0f, 0.0f, 0x1.72401cp-112f, 0x1.df9bdep-75f, 0.0f, 0.0f,
     0x1.7ee78cp-64f, 0.0f, 0x1.c41662p-98f, 0.0f, 0x1.17814ep-4f, 0x1.61618ap-4f,
     0.0f, 0.0f, 0x1.ace906p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f31eap-15f,
     0x1.cc6bdep-15f, 0.0f, 0.0f, 0.0f, 0x1.38c6dep-93f, 0x1.82ab78p-125f, 0.0f, 0.0f,
     0.0f, 0x1.a60dc8p-103f, 0.0f, 0.0f, 0x1.810ccp-74f, 0.0f, 0.0f, 0x1.84f9ecp-43f,
     0.0f, 0x1.0c6832p-33f, 0.0f, 0x1.b8d266p-69f, 0.0f, 0.0f, 0x1.d334aep-1f, 0.0f,
     0x1.f29ae6p-53f, 0x1.51ce3cp-8f, 0.0f, 0.0f, 0x1.33a06ap-20f, 0.0f,
     0x1.1c86f2p-113f, 0.0f, 0.0f, 0.0f, 0x1.c83f72p-25f, 0x1.997928p-43f,
     0x1.8b3d48p-4f, 0x1.b166c6p-46f, 0x1.6a982cp-41f, 0x1.9844p-111f, 0.0f,
     0x1.97a5eep-110f, 0x1.f69192p-38f, 0x1.070d2p-21f, 0x1.b0babcp-6f, 0.0f, 0.0f,
     0.0f, 0x1.021ebap-100f, 0.0f, 0x1.0bce22p-59f, 0.0f, 0.0f, 0x1.bd3814p-67f,
     0x1.e15394p-12f, 0.0f, 0.0f, 0.0f, 0x1.29e382p-16f, 0x1.90f622p-85f,
     0x1.83f48ap-89f, 0.0f, 0x1.06e77ap-104f, 0.0f, 0x1.e17f98p-74f, 0.0f,
     0x1.3c6e3ep-36f, 0x1.9a4d4ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c1f5p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.97ca4cp-60f, 0x1.075ddcp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a06b2cp-33f, 0.0f, 0.0f, 0x1.dcaa6cp-14f, 0x1.08ddf4p-78f, 0.0f,
     0x1.dc9b3ep-57f, 0x1.66b494p-73f, 0x1.c3715ap-29f, 0.0f, 0x1.f92644p-9f,
     0x1.02021cp-106f, 0x1.b41d9cp-49f, 0x1.db375ap-36f, 0x1.1cf87cp-7f, 0.0f, 0.0f,
     0x1.4c8826p-25f, 0.0f, 0.0f, 0x1.dfe6e4p-108f, 0x1.192b84p-63f, 0x1.5d91a8p-74f,
     0.0f, 0x1.ef1f16p-6f, 0x1.55e42p-99f, 0.0f, 0x1.c6f61cp-62f, 0.0f, 0.0f,
     0x1.d149c4p-56f, 0.0f, 0.0f, 0.0f, 0x1.461b5ep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f68b54p-52f, 0x1.f241c2p-122f, 0.0f, 0x1.28585ep-93f, 0x1.dc815ep-20f,
     0x1.4498d6p-66f, 0x1.f72936p-56f, 0.0f, 0x1.dbc48ep-29f, 0.0f, 0x1.5eaec6p-30f,
     0.0f, 0x1.baa12cp-66f, 0x1.caa14p-117f, 0.0f, 0x1.b8d4e2p-6f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.52e09p-1f, 0x1.80ac9ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.854efcp-81f, 0x1.42b33cp-48f, 0.0f, 0.0f, 0x1.c99a94p-75f, 0.0f,
     0x1.1473bap-57f, 0x1.13d75p-26f, 0.0f, 0x1.719af4p-36f, 0x1.99195ep-120f, 0.0f,
     0x1.cd5d12p-122f, 0x1.99777ap-74f, 0x1.bbac32p-59f, 0.0f, 0.0f, 0.0f,
     0x1.a23964p-65f, 0x1.e9f0e6p-102f, 0x1.120c9ep-10f, 0.0f, 0.0f, 0x1.0b4c1ep-8f,
     0x1.c4c4e8p-66f, 0x1.3c0d2cp-40f, 0x1.8f9814p-13f, 0.0f, 0.0f, 0.0f,
     0x1.51eabep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5468ep-117f,
     0x1.a8fd82p-73f, 0x1.d72fcep-13f, 0.0f, 0.0f, 0x1.f4823ap-69f, 0x1.903838p-21f,
     0.0f, 0.0f, 0.0f, 0x1.4654a8p-51f, 0x1.8ed506p-95f, 0x1.c60bf2p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffc098p-44f, 0x1.746248p-25f, 0.0f, 0.0f, 0.0f,
     0x1.06a256p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b8c08p-116f, 0x1.f0b662p-22f,
     0x1.68f0f2p-9f, 0.0f, 0x1.d25feap-66f, 0.0f, 0x1.3e5bep-2f, 0.0f,
     0x1.903574p-66f, 0.0f, 0x1.3da9e4p-53f, 0.0f, 0x1.7758dep-56f, 0x1.32955ep-120f,
     0.0f, 0x1.326214p-79f, 0.0f, 0x1.3869p-11f, 0.0f, 0x1.300e16p-56f,
     0x1.04d302p-54f, 0.0f, 0.0f, 0x1.95d312p-94f, 0x1.bf8644p-20f, 0x1.08e3a2p-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab6bfap-124f, 0x1.0368d4p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.04c72p-45f, 0x1.39f148p-76f, 0x1.c4545ep-120f, 0.0f,
     0x1.9d6b48p-18f, 0.0f, 0.0f, 0x1.ccd10cp-108f, 0x1.f491a6p-115f,
     0x1.0ec2fap-103f, 0.0f, 0x1.c76824p-31f, 0.0f, 0.0f, 0.0f, 0x1.2787e8p-108f,
     0x1.feb1fp-38f, 0x1.2ece6cp-92f, 0.0f, 0x1.99cc9ep-19f, 0.0f, 0x1.11bb4cp-75f,
     0.0f, 0.0f, 0x1.e01f3ep-4f, 0.0f, 0x1.0f5ecep-83f, 0.0f, 0x1.b0ba9cp-41f,
     0x1.792df2p-89f, 0x1.7fcdfp-60f, 0x1.ba7c32p-126f, 0x1.1a826ap-16f, 0.0f,
     0x1.b8fb1p-23f, 0.0f, 0x1.cd8d94p-103f, 0x1.345faap-89f, 0x1.ab770ap-13f, 0.0f,
     0x1.ee1474p-5f, 0x1.dbb5p-117f, 0.0f, 0x1.c91c04p-59f, 0.0f, 0x1.c4a57p-38f,
     0x1.bcf586p-13f, 0x1.78f7d8p-95f, 0x1.d07258p-116f, 0x1.9500f2p-112f, 0.0f,
     0x1.109676p-16f, 0x1.4789d4p-54f, 0x1.81b9d8p-13f
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_coshf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_coshf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
