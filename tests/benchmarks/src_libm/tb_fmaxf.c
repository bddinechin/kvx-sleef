/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_fmaxf.c --function fmaxf --arity 2 --headers \
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
     0.0f, 0x1.fcb5bep-96f, 0.0f, 0x1.add378p-110f, 0.0f, 0.0f, 0x1.99c7e8p-16f,
     0x1.204ad2p-2f, 0.0f, 0x1.b0156ap-67f, 0x1.6a243ep-31f, 0.0f, 0.0f,
     0x1.98d642p-8f, 0.0f, 0x1.ddd212p-11f, 0x1.fda0ap-90f, 0.0f, 0x1.6bb5b2p-8f,
     0.0f, 0x1.ee1e04p-15f, 0.0f, 0x1.56a13p-89f, 0x1.e77db6p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6835e6p-56f, 0.0f, 0.0f, 0.0f, 0x1.405cb6p-84f, 0x1.5a54p-90f, 0.0f,
     0.0f, 0x1.cdc6d2p-6f, 0.0f, 0.0f, 0x1.b4d6cap-51f, 0.0f, 0.0f, 0x1.9e0ebep-26f,
     0x1.50ecdep-71f, 0.0f, 0x1.ed8d62p-34f, 0x1.df164cp-103f, 0x1.799488p-116f, 0.0f,
     0x1.452beep-116f, 0x1.7dc0bep-88f, 0x1.8bf87ap-66f, 0x1.41c2bep-60f,
     0x1.0833f8p-11f, 0x1.adf006p-1f, 0.0f, 0x1.bd39ap-29f, 0x1.f8392p-71f, 0.0f,
     0.0f, 0.0f, 0x1.14869ep-52f, 0.0f, 0.0f, 0.0f, 0x1.88b984p-36f, 0.0f, 0.0f,
     0x1.c80dbcp-19f, 0x1.df4152p-4f, 0x1.8bab0ep-99f, 0.0f, 0x1.6faa3p-102f, 0.0f,
     0.0f, 0.0f, 0x1.7d1e4ep-66f, 0x1.c0a2fap-80f, 0.0f, 0.0f, 0.0f, 0x1.385d42p-108f,
     0x1.40d1acp-33f, 0.0f, 0x1.d6965cp-16f, 0x1.5d808cp-119f, 0x1.19d786p-48f, 0.0f,
     0x1.54dd2ep-86f, 0.0f, 0.0f, 0.0f, 0x1.e29704p-119f, 0.0f, 0x1.9d0e5ap-11f, 0.0f,
     0.0f, 0x1.ed612cp-90f, 0x1.4f57ccp-9f, 0.0f, 0x1.db3402p-21f, 0.0f, 0.0f,
     0x1.646506p-90f, 0.0f, 0x1.88d7d4p-56f, 0x1.0ed86p-72f, 0.0f, 0x1.b3255ap-87f,
     0x1.abc224p-21f, 0.0f, 0.0f, 0x1.f0bdc8p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6aec9p-83f, 0x1.621b14p-113f, 0.0f, 0x1.e6d686p-86f, 0x1.5a1ed8p-16f,
     0x1.ece8dp-6f, 0.0f, 0.0f, 0.0f, 0x1.bd62a2p-31f, 0.0f, 0.0f, 0.0f,
     0x1.7a83c6p-78f, 0.0f, 0x1.e7335cp-7f, 0.0f, 0.0f, 0x1.88d8bp-115f, 0.0f,
     0x1.c2fc4ep-66f, 0.0f, 0.0f, 0x1.14d918p-98f, 0x1.c5491cp-41f, 0.0f, 0.0f,
     0x1.aefc6cp-29f, 0.0f, 0.0f, 0x1.8cd5d8p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5d004p-87f, 0x1.42e188p-64f, 0.0f, 0x1.3c97b4p-17f, 0x1.1a70d4p-70f, 0.0f,
     0x1.953146p-33f, 0x1.33cd7cp-118f, 0.0f, 0x1.31ebeap-21f, 0x1.b4870ep-60f,
     0x1.bc97f8p-16f, 0x1.976a02p-52f, 0.0f, 0.0f, 0x1.bd768cp-61f, 0.0f, 0.0f,
     0x1.82ff8ep-58f, 0x1.5c2f2p-58f, 0.0f, 0x1.ead354p-73f, 0.0f, 0x1.c7625p-92f,
     0x1.29a246p-122f, 0x1.8d4ed8p-57f, 0.0f, 0x1.7c0424p-68f, 0.0f, 0.0f, 0.0f,
     0x1.7fa2dp-42f, 0x1.4c39eep-70f, 0x1.6410eap-88f, 0x1.b6583ap-33f,
     0x1.2c7a2cp-108f, 0.0f, 0x1.a3485cp-106f, 0x1.837072p-106f, 0.0f, 0.0f,
     0x1.34fd2cp-91f, 0x1.5fe362p-16f, 0x1.e3b8f2p-13f, 0.0f, 0.0f, 0.0f,
     0x1.5a0944p-97f, 0.0f, 0x1.d11f3cp-108f, 0.0f, 0x1.11436p-104f, 0x1.5b2084p-42f,
     0x1.66e53p-12f, 0.0f, 0x1.48c41ep-44f, 0.0f, 0x1.df72a8p-109f, 0.0f, 0.0f,
     0x1.41d2d6p-60f, 0x1.bf221ep-120f, 0x1.e83c24p-76f, 0x1.37aa5ep-45f,
     0x1.036978p-59f, 0x1.6855d6p-106f, 0.0f, 0x1.091728p-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d26b18p-52f, 0.0f, 0x1.ce6356p-92f, 0x1.db34bp-100f,
     0x1.bad612p-64f, 0x1.34c7acp-110f, 0.0f, 0.0f, 0x1.a1b85ep-9f, 0.0f, 0.0f,
     0x1.d5ac74p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.780dap-11f, 0.0f, 0.0f,
     0x1.97c4bep-89f, 0.0f, 0x1.f4e072p-37f, 0.0f, 0x1p0f, 0x1.2cc80ep-98f,
     0x1.2b7eeap-72f, 0x1.b1393ap-30f, 0x1.c1deb4p-25f, 0.0f, 0x1.3f12fap-102f,
     0x1.e3aa4ep-70f, 0.0f, 0.0f, 0.0f, 0x1.f2ca64p-94f, 0x1.14e676p-63f,
     0x1.21209ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23c88ap-82f, 0.0f, 0.0f,
     0x1.25d95ap-64f, 0x1.20fedcp-110f, 0x1.5315a8p-126f, 0.0f, 0x1.4c4a84p-35f,
     0x1.24f6aap-68f, 0x1.188d9p-115f, 0.0f, 0x1.f56798p-100f, 0.0f, 0x1.639ccp-15f,
     0.0f, 0x1.5cf1a4p-104f, 0.0f, 0x1.0ef716p-54f, 0x1.eea6b4p-4f, 0x1.a72168p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c72fap-8f, 0.0f, 0.0f, 0x1.db6b0ap-100f, 0.0f, 0.0f,
     0x1.1376eap-47f, 0.0f, 0x1.5c7c32p-107f, 0x1.dad788p-121f, 0.0f, 0x1.f8a304p-14f,
     0x1.44a44ap-12f, 0x1.f2837ap-20f, 0x1.ade26p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81fabap-126f, 0x1.0ca6aep-23f, 0.0f, 0x1.082122p-101f, 0.0f, 0.0f,
     0x1.bdf218p-122f, 0x1.17587cp-19f, 0x1.822d7ap-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e88d4p-40f, 0x1.c96ddp-100f, 0.0f, 0.0f, 0x1.77be9ap-61f, 0.0f, 0.0f, 0.0f,
     0x1.30ff9cp-76f, 0.0f, 0x1.055578p-45f, 0x1.46f09cp-61f, 0.0f, 0x1.cd126ap-64f,
     0.0f, 0x1.055fcap-8f, 0x1.7c5f28p-73f, 0x1.8846ep-19f, 0.0f, 0.0f,
     0x1.bea8ccp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6873fap-34f, 0.0f, 0.0f,
     0x1.6be792p-48f, 0x1.637f4p-44f, 0.0f, 0.0f, 0.0f, 0x1.e7734p-40f, 0x1.1c57dp-4f,
     0x1.50207p-66f, 0.0f, 0x1.411354p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.723c86p-78f,
     0x1.a7d554p-33f, 0x1.2a344ap-7f, 0x1.b7876cp-115f, 0.0f, 0x1.0cff4cp-39f, 0.0f,
     0x1.5bafecp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.7baa7ep-27f, 0.0f, 0x1.3aba2ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80ab3p-51f, 0x1.c9cf9p-122f, 0x1.f34fdcp-45f, 0.0f, 0x1.631126p-78f,
     0x1.4a5d22p-105f, 0x1.0ea186p-18f, 0x1.77034ap-53f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.c454b8p-105f, 0x1.90261cp-6f, 0.0f, 0.0f, 0.0f, 0x1.5ccdb2p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.601b86p-15f, 0x1.f46c3ep-101f, 0.0f,
     0x1.618aaep-113f, 0x1.fd4cf6p-101f, 0.0f, 0.0f, 0x1.22da78p-57f, 0x1.921b1ep-37f,
     0.0f, 0.0f, 0x1.ec778ap-21f, 0x1.3787a4p-94f, 0x1.5b72fcp-55f, 0.0f,
     0x1.0eae98p-25f, 0.0f, 0.0f, 0.0f, 0x1.4d3a2ap-97f, 0x1.702146p-67f,
     0x1.f30e28p-84f, 0x1.c06744p-58f, 0.0f, 0x1.9da844p-10f, 0x1.e4d4aap-27f,
     0x1.3a2f24p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e783ep-77f, 0.0f,
     0x1.7afe5ap-124f, 0.0f, 0.0f, 0.0f, 0x1.dd9184p-29f, 0.0f, 0x1.74f828p-43f,
     0x1.257286p-44f, 0.0f, 0.0f, 0x1.81abep-4f, 0.0f, 0x1.46cd96p-56f,
     0x1.cbd6ep-53f, 0x1.e0dbfp-45f, 0.0f, 0x1.b8aeaep-37f, 0.0f, 0x1.149a6cp-59f,
     0x1.b80f52p-109f, 0x1.2d027ep-67f, 0x1.7a57cep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a9ea88p-72f, 0.0f, 0.0f, 0x1.ea6674p-60f, 0.0f, 0.0f, 0x1.a4fd1p-47f,
     0.0f, 0x1.cca2ep-43f, 0.0f, 0x1.08b9c2p-23f, 0.0f, 0.0f, 0x1.3a6d2p-75f, 0.0f,
     0x1.f369a4p-9f, 0.0f, 0.0f, 0x1.86c32cp-3f, 0x1.4f4b08p-125f, 0x1.1e9426p-111f,
     0x1.181424p-57f, 0x1.36b258p-73f, 0x1.69a026p-124f, 0.0f, 0.0f, 0x1.4c0b66p-74f,
     0x1.01cefp-58f, 0.0f, 0x1.965ae8p-44f, 0x1.15a042p-23f, 0x1.e14a56p-96f,
     0x1.7b49c4p-12f, 0x1.e5d078p-32f, 0x1.a6b0bcp-39f, 0.0f, 0.0f, 0x1.d24736p-44f,
     0.0f, 0x1.2aec4cp-65f, 0.0f, 0x1.46d332p-37f, 0x1.2ba0bap-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b92b5cp-118f, 0x1.08e93ap-52f, 0x1.e46586p-37f, 0.0f,
     0x1.3ea22ep-95f, 0.0f, 0x1.54399ep-26f, 0.0f, 0x1.1978e6p-97f, 0.0f,
     0x1.5bab12p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.764992p-105f, 0x1.de2572p-55f,
     0x1.62c28cp-79f, 0x1.de8d5ap-109f, 0.0f, 0x1.0ab16p-109f, 0.0f, 0.0f,
     0x1.e96c32p-101f, 0.0f, 0.0f, 0x1.c729f4p-79f, 0.0f, 0.0f, 0x1.4b21b6p-51f,
     0x1.8ee798p-19f, 0.0f, 0x1.4c848ep-34f, 0x1.f674e6p-41f, 0.0f, 0.0f,
     0x1.e52b8p-21f, 0.0f, 0.0f, 0x1.430cbp-89f, 0.0f, 0x1.4801c6p-65f,
     0x1.50410ep-65f, 0.0f, 0x1.fb42c4p-72f, 0x1.5110c2p-9f, 0x1.3c26bep-98f,
     0x1.8309dp-95f, 0x1.439d0cp-122f, 0.0f, 0.0f, 0x1.6aa0f4p-5f, 0.0f,
     0x1.111caap-41f, 0x1.564826p-115f, 0x1.c61ba4p-79f, 0.0f, 0x1.4d01f8p-7f,
     0x1.a11706p-71f, 0x1.8bfcaep-23f, 0x1.2beaa6p-13f, 0.0f, 0.0f, 0x1.b713p-63f,
     0x1.5423e8p-10f, 0x1.b84a8cp-56f, 0x1.cc12fep-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b64486p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.828f9p-105f, 0.0f, 0.0f,
     0x1.cbb3dep-77f, 0.0f, 0.0f, 0x1.04c502p-29f, 0x1.f4c1c4p-84f, 0x1.bc11b4p-88f,
     0.0f, 0.0f, 0x1.1ac9e8p-62f, 0.0f, 0.0f, 0x1.c4aaf4p-26f, 0x1.a5bc34p-99f,
     0x1.29961p-8f, 0.0f, 0x1.6d0bbcp-66f, 0x1.858518p-90f, 0x1.c2f878p-78f, 0.0f,
     0.0f, 0x1.01a83ep-121f, 0.0f, 0x1.b5517ap-50f, 0.0f, 0.0f, 0x1.ecfb96p-10f,
     0x1.1f4d64p-32f, 0.0f, 0x1.76f9a8p-97f, 0x1p0f, 0x1.9ceap-87f, 0.0f,
     0x1.5f12dep-68f, 0x1.4761aep-105f, 0x1.dabba2p-91f, 0x1.c0cec2p-1f,
     0x1.8734ecp-32f, 0.0f, 0x1.dc746cp-64f, 0x1.0206aap-83f, 0.0f, 0x1.ea7fa8p-97f,
     0x1.6be1f8p-29f, 0.0f, 0.0f, 0x1.638c74p-83f, 0x1.eb9cccp-32f, 0x1.1e8b4ep-75f,
     0x1.afb884p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe4d52p-112f,
     0x1.54ab18p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd891p-22f, 0.0f, 0x1.2c627p-51f,
     0.0f, 0x1.07b31ep-50f, 0.0f, 0x1.111d6ap-85f, 0.0f, 0x1.815af8p-114f,
     0x1.abdffp-99f, 0.0f, 0.0f, 0x1.cd8578p-19f, 0.0f, 0.0f, 0x1.c05cd6p-72f,
     0x1.cfe9ep-67f, 0x1.3e4c0ap-37f, 0.0f, 0x1.d37a58p-98f, 0x1p0f, 0.0f,
     0x1.6e73c4p-55f, 0x1.5f3b8ep-72f, 0x1.08d12ap-13f, 0x1.3c76dcp-33f,
     0x1.b9f738p-52f, 0.0f, 0.0f, 0x1.0137fp-104f, 0.0f, 0x1.aa6f26p-77f, 0.0f,
     0x1.dc704ap-96f, 0x1.c65c92p-80f, 0.0f, 0x1.c83624p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b68e02p-14f, 0x1.1894ecp-31f, 0.0f, 0x1.7c8ce4p-18f, 0x1.8146ecp-37f,
     0x1.47cd76p-59f, 0.0f, 0.0f, 0x1.357338p-29f, 0x1.d85b5ep-79f, 0.0f,
     0x1.47527ep-7f, 0x1.42da62p-25f, 0.0f, 0.0f, 0.0f, 0x1.dc83c8p-119f, 0.0f, 0.0f,
     0x1.e9c836p-91f, 0.0f, 0.0f, 0x1.54459cp-105f, 0x1.c8947cp-44f, 0x1.99c33cp-47f,
     0x1.438316p-48f, 0x1.81bbf4p-51f, 0x1.cdb7ccp-125f, 0.0f, 0x1.8ac13ep-49f,
     0x1.92f03ap-27f, 0.0f, 0.0f, 0x1.5b082ep-34f, 0.0f, 0.0f, 0.0f, 0x1.108a46p-79f,
     0x1.731238p-84f, 0x1.158022p-36f, 0x1.2d8a3ep-61f, 0x1.1fea5ep-8f, 0.0f,
     0x1.0e1a7ap-47f, 0.0f, 0x1.c8c7aap-52f, 0x1.8234fp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fd30ap-35f, 0.0f, 0x1.e68022p-56f, 0x1.ce0a16p-114f, 0x1.9d29eep-117f, 0.0f,
     0.0f, 0x1.a51f14p-60f, 0x1.e0edfap-78f, 0.0f, 0.0f, 0x1.aa5fe2p-42f,
     0x1.7e8474p-126f, 0x1.6fec2ep-79f, 0x1.8dbb2cp-36f, 0x1.ebde12p-79f,
     0x1.7953a8p-97f, 0x1.70502p-120f, 0.0f, 0.0f, 0.0f, 0x1.749ddap-81f,
     0x1.00cb3p-13f, 0.0f, 0x1.ffca5ap-66f, 0x1.a643c8p-77f, 0x1.ef5c88p-22f,
     0x1.6648cep-51f, 0x1.66c6a4p-8f, 0.0f, 0.0f, 0x1.ecad4cp-32f, 0x1.92e4eap-94f,
     0.0f, 0.0f, 0.0f, 0x1.c388a6p-96f, 0.0f, 0.0f, 0x1.7ebb84p-76f, 0.0f,
     0x1.e613fcp-109f, 0x1.d888aep-93f, 0x1.a38a78p-6f, 0x1.5eb316p-62f, 0.0f, 0.0f,
     0x1.cc0168p-69f, 0.0f, 0x1.bf8828p-26f, 0x1.a48d84p-121f, 0.0f, 0x1.539f68p-66f,
     0x1.9e4bcp-35f, 0x1.50cba8p-73f, 0x1.e94648p-7f, 0x1.e504fp-84f,
     0x1.c5279ap-107f, 0x1.795b76p-64f, 0x1.2bcc46p-96f, 0x1.c490d2p-58f, 0.0f, 0.0f,
     0.0f, 0x1.972a02p-45f, 0x1.e4ffbap-23f, 0.0f, 0.0f, 0.0f, 0x1.6356aep-82f, 0.0f,
     0x1.90a666p-64f, 0.0f, 0x1.2d0f94p-114f, 0x1.ed777ap-28f, 0.0f, 0x1.26ef36p-53f,
     0.0f, 0x1.778518p-5f, 0x1.7ae972p-1f, 0.0f, 0.0f, 0x1.fba4dp-83f, 0.0f,
     0x1.c826c6p-56f, 0x1.fbe6a4p-4f, 0.0f, 0x1.5cafbp-5f, 0x1.0ad6e2p-55f,
     0x1.f054a8p-116f, 0x1.e44ab2p-80f, 0.0f, 0x1.937966p-3f, 0.0f, 0x1.a0ee88p-22f,
     0x1.374f8p-33f, 0.0f, 0.0f, 0.0f, 0x1.886fd4p-81f, 0.0f, 0.0f, 0.0f,
     0x1.4ed69ep-92f, 0x1.a807d6p-21f, 0.0f, 0.0f, 0x1.cb395cp-35f, 0.0f, 0.0f,
     0x1.918cdep-44f, 0x1.35370ap-72f, 0x1.32492ep-13f, 0x1.09a6f6p-26f,
     0x1.e546bap-16f, 0x1.f04014p-7f, 0.0f, 0.0f, 0x1.472234p-104f, 0.0f, 0.0f, 0.0f,
     0x1.8aeffep-57f, 0.0f, 0x1.ff8fc2p-40f, 0.0f, 0x1.6076eap-30f, 0.0f,
     0x1.06a3bep-107f, 0x1.cc09c2p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.feb9fp-29f, 0.0f,
     0x1.cbc1a6p-45f, 0x1.aa037ap-87f, 0.0f, 0.0f, 0x1.38f4b8p-63f, 0x1.401eaep-21f,
     0.0f, 0x1.96b3bap-36f, 0.0f, 0.0f, 0.0f, 0x1.d85b1ap-41f, 0x1.0baf6ap-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e0e7dp-28f, 0x1.178282p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03116cp-89f, 0.0f, 0.0f, 0.0f, 0x1.165806p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6320b6p-40f, 0.0f, 0.0f, 0x1.25858p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc1574p-84f, 0x1.10301cp-55f, 0x1.9eb55cp-124f, 0.0f, 0.0f, 0x1.a7ac44p-1f,
     0.0f, 0x1.ada51cp-89f, 0x1.67bc62p-73f, 0x1.243e6cp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f57d84p-125f, 0x1.bcf06ap-4f, 0.0f, 0x1.398128p-63f, 0x1.9057f6p-119f,
     0.0f, 0x1.1306b8p-11f, 0x1.48897ep-42f, 0x1p0f, 0.0f, 0x1.a00e8ap-80f,
     0x1.9e1426p-14f, 0.0f, 0.0f, 0x1.730b68p-117f, 0x1.42fad2p-22f, 0.0f,
     0x1.2e76d2p-43f, 0.0f, 0.0f, 0.0f, 0x1.03036ap-48f, 0x1.aaa81ap-76f, 0.0f,
     0x1.282a46p-32f, 0.0f, 0x1.bd67fcp-1f, 0x1.d88a24p-124f, 0x1.002192p-78f, 0.0f,
     0.0f, 0x1.69a4a2p-67f, 0x1.7230fp-92f, 0x1.3ede46p-109f, 0x1.139a0ap-43f, 0.0f,
     0x1.28270ep-105f, 0.0f, 0x1.db7d2ep-81f, 0x1.a30fe2p-88f, 0.0f, 0x1.94c9d8p-106f,
     0.0f, 0x1.3c8004p-51f, 0x1.67145ep-12f, 0x1.eef4a4p-2f, 0x1.b0def2p-111f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.9822ep-41f, 0.0f, 0x1.f443cap-91f, 0.0f, 0x1.5b05ap-91f, 0.0f, 0.0f,
     0x1.efd1b6p-30f, 0.0f, 0.0f, 0x1.d19e26p-88f, 0x1.a35c6p-7f, 0x1.fe9b22p-79f,
     0x1.9df414p-112f, 0x1.2048a4p-101f, 0x1.98c66p-50f, 0.0f, 0x1.ea7428p-48f, 0.0f,
     0.0f, 0.0f, 0x1.a887bcp-35f, 0.0f, 0x1.5d95ecp-54f, 0x1.0c92a2p-30f,
     0x1.d71c2ap-6f, 0.0f, 0.0f, 0x1.75af04p-78f, 0.0f, 0.0f, 0x1.16e3b8p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.982b3cp-59f, 0.0f, 0.0f, 0.0f, 0x1.796e0ep-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.224e22p-74f, 0x1.1e92dp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b96cap-41f, 0x1.388f8ep-114f, 0x1.da763ap-28f, 0.0f, 0x1.d17904p-15f,
     0x1.7afb8cp-88f, 0x1.ab4f82p-83f, 0.0f, 0.0f, 0x1.a0668ep-13f, 0.0f,
     0x1.62ae2p-15f, 0.0f, 0x1.840a18p-44f, 0x1.4efc3ep-73f, 0x1.a135fep-28f, 0.0f,
     0x1.03354ep-112f, 0.0f, 0x1.5e64b8p-47f, 0.0f, 0x1.a207eep-110f, 0x1.5cd4a8p-69f,
     0x1.070daap-23f, 0x1.e9c71cp-61f, 0.0f, 0x1.dee0eep-12f, 0x1.af0fdep-55f, 0.0f,
     0x1.9d5ba8p-107f, 0.0f, 0x1.fa9aa8p-115f, 0x1.7b70fap-26f, 0.0f, 0.0f, 0.0f,
     0x1.c7164p-24f, 0.0f, 0.0f, 0x1.288172p-24f, 0x1.238dap-51f, 0x1.10626ap-94f,
     0x1.454d34p-55f, 0.0f, 0.0f, 0.0f, 0x1.35e11cp-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ab6d8p-29f, 0.0f, 0x1.94fd4ap-122f, 0.0f, 0.0f, 0x1.39f222p-7f, 0.0f,
     0x1.f4934ap-86f, 0x1.b5a5aap-116f, 0x1.08c53cp-102f, 0x1.a0e446p-58f, 0.0f, 0.0f,
     0.0f, 0x1.e5edfp-12f, 0.0f, 0.0f, 0.0f, 0x1.b5d03cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.48aae6p-96f, 0.0f, 0.0f, 0x1.f45508p-111f, 0.0f, 0x1.82df2ep-49f, 0.0f,
     0x1.a4d72cp-26f, 0x1.ca913ep-52f, 0.0f, 0x1.046dccp-89f, 0.0f, 0x1.45e022p-52f,
     0x1.a52e6ep-34f, 0.0f, 0.0f, 0x1.374ce8p-16f, 0.0f, 0x1.d8eefcp-41f,
     0x1.1a6d5cp-56f, 0.0f, 0x1.5cf10cp-68f, 0x1.f3a44cp-111f, 0.0f, 0x1.6d036ep-72f,
     0x1.a6ea0ap-57f, 0x1.27d72ep-91f, 0.0f, 0.0f, 0x1.f17cf4p-61f, 0.0f, 0.0f,
     0x1.98bcf8p-18f, 0x1.845e2ep-63f, 0x1.a8eafp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be8866p-76f, 0x1.a3696p-106f, 0.0f, 0.0f, 0x1.156598p-93f, 0.0f, 0.0f,
     0x1.950544p-8f, 0.0f, 0x1.8de62ap-101f, 0.0f, 0.0f, 0.0f, 0x1.dcfd5ep-2f,
     0x1.afcfd8p-16f, 0.0f, 0x1.1f276ep-108f, 0.0f, 0.0f, 0x1.bbf38ap-108f, 0.0f,
     0x1.821f8cp-95f, 0x1.1752e6p-122f, 0.0f, 0x1.7aeb52p-122f, 0.0f, 0.0f,
     0x1.b8d6d6p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.618612p-15f, 0x1.da7feep-9f, 0.0f,
     0.0f, 0.0f, 0x1.f9f18ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7d1dp-81f,
     0x1.edd0dap-116f, 0x1.15d592p-69f, 0.0f, 0x1.0cb09cp-69f, 0x1.3b4f6ap-20f, 0.0f,
     0x1.a2ea1ap-32f, 0.0f, 0.0f, 0x1.6d74cap-101f, 0.0f, 0.0f, 0x1.229974p-89f,
     0x1.8c777ap-124f, 0.0f, 0x1.9df19ep-79f, 0.0f, 0x1.a3eccep-45f, 0x1.1c3072p-1f,
     0x1.496778p-15f, 0x1.8ff1bep-27f, 0x1.a1da22p-18f, 0x1.a23daep-21f, 0.0f, 0.0f,
     0.0f, 0x1.b4880ep-53f, 0x1.d495d2p-95f, 0.0f, 0.0f, 0x1.dda7ep-84f,
     0x1.4ed05ep-51f, 0x1.e17b1ap-5f, 0.0f, 0x1.e4d4cep-111f, 0x1.317c52p-47f, 0.0f,
     0x1.db1032p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c69098p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b73c0ap-33f, 0.0f, 0.0f, 0x1.de5a1ap-15f, 0x1.eb49cp-72f,
     0x1.49367ap-73f, 0x1.e699b2p-60f, 0.0f, 0.0f, 0x1.59fbep-42f, 0x1.0c1b36p-30f,
     0.0f, 0x1.7af656p-4f, 0x1.1b9874p-101f, 0.0f, 0.0f, 0.0f, 0x1.ba0bbp-95f, 0.0f,
     0x1.505c22p-48f, 0.0f, 0x1.aeb5dap-110f, 0.0f, 0.0f, 0x1.74185cp-92f, 0.0f, 0.0f,
     0x1.619e72p-14f, 0.0f, 0.0f, 0.0f, 0x1.11c714p-39f, 0x1.132f82p-97f, 0.0f, 0.0f,
     0x1.405d94p-22f, 0x1.c611eep-62f, 0x1.7f1652p-93f, 0.0f, 0x1.80ee3cp-51f,
     0x1.4a2d96p-3f, 0x1.6d02d8p-1f, 0x1.d409d2p-10f, 0x1.9a08e4p-101f, 0.0f, 0.0f,
     0x1.4142p-95f, 0.0f, 0x1.133106p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab227ep-57f, 0.0f, 0x1.1fc62ep-122f, 0.0f, 0x1.143182p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae0bd4p-36f, 0x1.7a20dap-18f, 0.0f, 0.0f, 0x1.e6786p-95f,
     0x1.b83072p-41f, 0.0f, 0x1.6a33bap-105f, 0.0f, 0x1.3fcda6p-3f, 0x1.07685ep-123f,
     0.0f, 0.0f, 0x1.57f8cap-117f, 0x1.3cc374p-111f, 0x1.b08e6ap-72f, 0x1.ebdc3ap-63f,
     0x1.c20c5p-108f, 0.0f, 0x1.ccd8a6p-123f, 0.0f, 0.0f, 0.0f, 0x1.dfecacp-114f,
     0x1.cdc094p-100f, 0x1.34538cp-105f, 0x1.6a4a86p-5f, 0x1.f02df6p-67f, 0.0f,
     0x1.6bc71p-98f, 0x1.52c374p-65f, 0.0f, 0x1.08a72ep-66f, 0x1.d722c4p-49f,
     0x1.d1299cp-117f, 0.0f, 0x1.a413ap-119f, 0.0f, 0x1.da45ep-70f, 0.0f,
     0x1.3cfc4ap-65f, 0x1.82e2cep-38f, 0.0f, 0x1.910e9cp-100f, 0x1.386aap-11f,
     0x1.7bc612p-114f, 0x1.5c06b6p-126f, 0x1.7d04f6p-95f, 0.0f, 0.0f, 0.0f,
     0x1.ccf622p-98f, 0.0f, 0x1.13f95ap-119f, 0.0f, 0x1.6fd29p-111f, 0.0f, 0.0f, 0.0f,
     0x1.44f7ep-87f, 0.0f, 0x1.ac75ecp-60f, 0.0f, 0.0f, 0x1.3aaf34p-66f, 0.0f,
     0x1.112ba2p-51f, 0x1.90b0f2p-25f, 0.0f, 0x1.3729p-71f, 0x1.31103ep-27f, 0.0f,
     0x1.4df526p-45f, 0x1.90d7f8p-95f, 0x1.1b2d88p-80f, 0.0f, 0.0f, 0x1.031cb6p-124f,
     0x1.22cee8p-99f, 0.0f, 0.0f, 0x1.2ac73p-51f, 0x1.f9bf72p-26f, 0.0f, 0.0f,
     0x1.62b74cp-53f, 0.0f, 0x1.7cc6a4p-118f, 0.0f, 0x1.7d617p-29f, 0.0f, 0.0f,
     0x1.7531dep-80f, 0x1.73bee6p-21f, 0.0f, 0.0f, 0x1.fb9b4ap-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.91bf6ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22e31ep-97f,
     0x1.6f1d28p-19f, 0.0f, 0.0f, 0x1.4ad5c6p-76f, 0x1.a3dd08p-36f, 0x1.90e5d6p-4f,
     0x1.ec98f4p-68f, 0.0f, 0x1.7362eap-56f, 0.0f, 0.0f, 0.0f, 0x1.9cc1e8p-4f, 0.0f,
     0.0f, 0x1.ecb654p-56f, 0x1.04bf82p-38f, 0x1.10d744p-60f, 0x1.bbb004p-97f, 0.0f,
     0.0f, 0x1.911062p-13f, 0x1.6bd42p-102f, 0.0f, 0x1.db438ep-114f, 0x1.58189cp-48f,
     0x1.deb34cp-76f, 0x1.b9956ap-63f, 0.0f, 0x1.76e6a4p-117f, 0x1.866196p-66f,
     0x1p0f, 0.0f, 0.0f, 0x1.d35b22p-12f, 0x1.f3cbcap-2f, 0.0f, 0x1.0063aap-78f, 0.0f,
     0x1.f7addep-37f, 0.0f, 0x1.7782b2p-81f, 0x1.7fb07ap-29f, 0.0f, 0.0f,
     0x1.435e34p-14f, 0x1.7e2cbp-34f, 0.0f, 0x1.c9d766p-16f, 0.0f, 0x1.f8d08ap-71f,
     0.0f, 0.0f, 0x1.68a2d6p-7f, 0x1.33194ap-77f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.93033cp-1f, 0x1p0f, 0.0f, 0.0f, 0x1.e1c7bcp-2f, 0.0f, 0.0f, 0x1.e70274p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91a53ep-29f, 0x1.ad0b2cp-107f, 0.0f,
     0x1.c8aea2p-6f, 0x1.446c54p-115f, 0x1.a37d4cp-125f, 0.0f, 0x1.a13006p-68f,
     0x1.442a7ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da87ep-124f, 0x1.8c481ap-48f,
     0x1.f187d4p-111f, 0x1.6edbcp-59f, 0.0f, 0x1.e66fa2p-86f, 0.0f, 0x1.0ceeaap-71f,
     0x1.1376eep-100f, 0.0f, 0.0f, 0.0f, 0x1.9b4694p-1f, 0x1.dab42ep-120f, 0.0f,
     0x1.33b0c6p-34f, 0x1.7a65d4p-74f, 0x1.902492p-97f, 0.0f, 0x1.a998c8p-101f,
     0x1.663972p-12f, 0x1.abdb6ep-87f, 0x1.1cd49ep-90f, 0x1.04bb96p-108f, 0.0f, 0.0f,
     0x1.a32606p-80f, 0.0f, 0.0f, 0.0f, 0x1.cc048ap-105f, 0.0f, 0x1.a5a54ep-86f, 0.0f,
     0x1.8dc688p-80f, 0x1.991596p-78f, 0x1.7d644cp-66f, 0x1.452e5cp-9f,
     0x1.e4c5e6p-82f, 0x1.d23a2ap-114f, 0x1.79b52ap-28f, 0x1.a19e8cp-50f, 0.0f,
     0x1.8640acp-55f, 0.0f, 0.0f, 0.0f, 0x1.bc6078p-115f, 0x1.d589acp-102f,
     0x1.fada72p-28f, 0x1.82d0bcp-32f, 0.0f, 0.0f, 0x1.a875bp-118f, 0.0f, 0.0f,
     0x1.8f53a8p-63f, 0.0f, 0.0f, 0.0f, 0x1.92a4c8p-5f, 0x1.b4cbb6p-31f,
     0x1.c5e83p-14f, 0x1.cb6e48p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d6bb2p-125f, 0.0f,
     0x1.fe0866p-109f, 0x1.fd86f6p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ea8d2p-68f,
     0.0f, 0.0f, 0.0f, 0x1.4ff4aep-24f, 0.0f, 0x1.613038p-32f, 0x1.f0ca7ep-23f,
     0x1.2010cp-40f, 0.0f, 0.0f, 0x1.afc318p-76f, 0x1.64402cp-47f, 0.0f,
     0x1.1a6fe6p-95f, 0.0f, 0x1.b4c5aep-112f, 0x1.292eaep-100f, 0x1.1d241p-108f, 0.0f,
     0x1.6ca552p-51f, 0x1.d40bcp-7f, 0.0f, 0x1.4046eep-111f, 0.0f, 0x1.7681d4p-90f,
     0x1.52a086p-56f, 0x1.78474cp-4f, 0.0f, 0x1.4529eep-49f, 0x1.dd5252p-4f,
     0x1.8873b8p-42f, 0.0f, 0.0f, 0x1.bbab02p-84f, 0.0f, 0.0f, 0x1p0f,
     0x1.63016ap-46f, 0x1.a6c562p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.091b3ap-100f,
     0x1.d1efbcp-67f, 0x1.b07a86p-20f, 0.0f, 0x1.139d48p-40f, 0.0f, 0x1.174726p-42f,
     0.0f, 0.0f, 0.0f, 0x1.1ca8d6p-82f, 0.0f, 0x1.78144p-44f, 0x1.1ea3fcp-22f, 0.0f,
     0x1.018ba2p-86f, 0.0f, 0x1.7e412cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ceb8p-103f, 0x1.76f87cp-124f, 0x1.e063cap-59f, 0x1.022936p-54f,
     0x1.fdbf2cp-52f, 0x1.ef4d72p-103f, 0.0f, 0.0f, 0.0f, 0x1.a6971ep-61f,
     0x1.030476p-45f, 0x1.a79f68p-74f, 0.0f, 0x1.eef60ap-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e74ccp-68f, 0x1.cd0c86p-23f, 0.0f, 0x1.42ab9p-7f, 0.0f, 0.0f,
     0x1.0eb638p-81f, 0x1.2592d2p-55f, 0x1.e08722p-39f, 0.0f, 0.0f, 0.0f,
     0x1.ca7c2cp-73f, 0x1.0710f4p-51f, 0x1.23ec76p-120f, 0x1.688f78p-87f,
     0x1.98140ap-84f, 0x1.4d0d3ep-96f, 0x1.465c36p-60f, 0.0f, 0.0f, 0.0f,
     0x1.8832b2p-106f, 0.0f, 0.0f, 0x1.df94b4p-21f, 0x1.ec8934p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a98598p-50f, 0.0f, 0.0f, 0x1.4f60b8p-58f, 0x1.4bf9ap-6f, 0.0f, 0.0f,
     0.0f, 0x1.e79902p-25f, 0.0f, 0x1.d341f4p-93f, 0.0f, 0x1.f5b33ep-17f,
     0x1.bcbc66p-14f, 0x1.6395ap-64f, 0x1.398452p-123f, 0.0f, 0x1.28e2acp-42f, 0.0f,
     0x1.119348p-1f, 0.0f, 0.0f, 0x1.f87fc4p-62f, 0x1.c901acp-113f, 0.0f, 0.0f, 0.0f,
     0x1.d3e49ap-25f, 0.0f, 0.0f, 0.0f, 0x1.68f5fep-53f, 0.0f, 0x1.ff960cp-57f,
     0x1.8b681ap-37f, 0.0f, 0x1.2ceff8p-44f, 0x1.a91314p-118f, 0x1.e46adep-32f,
     0x1.bf2992p-49f, 0x1.fd26dp-44f, 0.0f, 0.0f, 0x1.a137aep-72f, 0.0f,
     0x1.932c1ep-80f, 0.0f, 0x1.d2e9dep-40f, 0x1.7bb9d4p-86f, 0.0f, 0.0f,
     0x1.43f312p-9f, 0.0f, 0.0f, 0x1.2dc658p-71f, 0.0f, 0x1.c91c46p-62f, 0.0f,
     0x1.957978p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69627ap-121f, 0.0f, 0.0f, 0.0f,
     0x1.506834p-98f, 0x1.1c7752p-38f, 0x1.c3d4f4p-123f, 0.0f, 0x1.0ae1bep-73f,
     0x1.7f741cp-76f, 0x1.a53f94p-106f, 0x1.3121b8p-5f, 0x1.71037cp-79f,
     0x1.5eeeeep-27f, 0.0f, 0x1.263e9ep-112f, 0x1.d84068p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f7502p-72f, 0x1.1a5824p-45f, 0x1.c545dep-68f, 0x1.e624b6p-104f,
     0x1.26b42ep-64f, 0.0f, 0x1.5a237p-16f, 0x1.08931cp-41f, 0x1.98dd26p-74f,
     0x1.b7ce82p-62f, 0.0f, 0x1.a7ef18p-88f, 0x1.9bcd7ap-66f, 0.0f, 0x1.79d208p-23f,
     0x1.46cdcp-69f, 0.0f, 0x1.b20508p-28f, 0.0f, 0.0f, 0x1.d6a7dap-119f, 0.0f, 0.0f,
     0x1.92de48p-98f, 0.0f, 0x1.4878ecp-96f, 0x1.ac1188p-90f, 0x1.c92a52p-85f,
     0x1.b0815ap-45f, 0x1.dde796p-108f, 0x1.659cep-64f, 0x1.31d5c4p-4f,
     0x1.eb5a04p-72f, 0x1.01b434p-117f, 0x1.388f9cp-61f, 0.0f, 0x1.9fe0c6p-84f,
     0x1.c7c0dp-71f, 0x1.4fc6bp-49f, 0x1.9166ap-15f, 0x1.e959c6p-110f,
     0x1.521548p-117f, 0.0f, 0.0f, 0x1.187d3p-32f, 0x1.42d41cp-50f, 0.0f,
     0x1.6ead7ap-9f, 0x1.938638p-6f, 0x1.337446p-83f, 0x1.c721fcp-8f, 0.0f,
     0x1.857868p-125f, 0x1.32cb0ep-118f, 0.0f, 0.0f, 0.0f, 0x1.0e4ap-20f,
     0x1.2de8c6p-95f, 0x1.bf96e2p-124f, 0.0f, 0x1.4d60eap-34f, 0.0f, 0.0f,
     0x1.dafb0ap-41f, 0.0f, 0x1.9e617ap-35f, 0x1.85d1a8p-47f, 0.0f, 0.0f, 0.0f,
     0x1.089e0ep-23f, 0x1.2982fp-99f, 0.0f, 0.0f, 0x1.519c94p-5f, 0x1.c7540cp-48f,
     0.0f, 0x1.0e0eeep-19f, 0.0f, 0x1.219a4ap-6f, 0x1.860352p-89f, 0.0f,
     0x1.6f16d4p-21f, 0x1.1680dep-108f, 0x1.0e8f74p-40f, 0.0f, 0.0f, 0.0f,
     0x1.28692ep-14f, 0.0f, 0x1.adde74p-61f, 0.0f, 0x1.6c381ap-117f, 0x1.03e1bap-11f,
     0.0f, 0.0f, 0x1.0deb0ep-4f, 0.0f, 0x1.82aef4p-107f, 0.0f, 0x1.c27a44p-86f, 0.0f,
     0.0f, 0x1.40219ap-108f, 0x1.61b322p-17f, 0.0f, 0x1.fbff22p-62f, 0x1.c07526p-101f,
     0.0f, 0.0f, 0x1.fa83acp-33f, 0x1.0156c6p-26f, 0x1.a21aecp-104f, 0.0f,
     0x1.dbb58p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f3782p-4f, 0.0f,
     0x1.2e68ep-45f, 0x1.6f1498p-1f, 0.0f, 0x1.f58976p-116f, 0x1.14c404p-32f,
     0x1.ec4f7ep-58f, 0x1.66916p-60f, 0.0f, 0.0f, 0.0f, 0x1.51fb9ap-29f, 0.0f,
     0x1.634e68p-36f, 0.0f, 0x1.eda794p-43f, 0x1.dbfcf6p-17f, 0.0f, 0.0f,
     0x1.1f2842p-48f, 0.0f, 0.0f, 0x1.f9c82ap-99f, 0.0f, 0x1.3e5822p-14f,
     0x1.cbe17p-38f, 0x1.c1a528p-73f, 0x1.757344p-115f, 0.0f, 0.0f, 0x1.2034c8p-55f,
     0.0f, 0.0f, 0.0f, 0x1.a4c472p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49ba5ap-125f,
     0x1.837508p-102f, 0.0f, 0x1.d8b81ap-111f, 0.0f, 0x1.ca8ff4p-95f, 0.0f, 0.0f,
     0x1.cc1322p-108f, 0.0f, 0.0f, 0x1.ba139ap-24f, 0x1.4e0e1ep-81f, 0.0f,
     0x1.53df1ap-122f, 0.0f, 0.0f, 0.0f, 0x1.f11ed2p-78f, 0.0f, 0.0f, 0x1.7fdcbp-104f,
     0.0f, 0x1p0f, 0.0f, 0x1.00b60ap-56f, 0x1.7db6p-17f, 0x1.53422p-84f,
     0x1.e648ccp-93f, 0.0f, 0x1.9a65d2p-75f, 0.0f, 0.0f, 0x1.79a29ep-91f, 0.0f, 0.0f,
     0x1.3c93d6p-46f, 0.0f, 0x1.c98bc6p-14f, 0.0f, 0.0f, 0x1.81988ap-22f,
     0x1.e83bfap-92f, 0x1.bf3e4ep-92f, 0.0f, 0x1.e264bep-97f
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
            tmp2 = fmaxf(tmp0, tmp1);
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
    printf("fmaxf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("fmaxf bench acc %a\n", global_bench_acc);
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
