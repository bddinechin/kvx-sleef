/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf1_u35purecfma.c --function \
 *     Sleef_finz_sinf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.197daep-62f, 0x1.573e96p-71f, 0.0f, 0x1.ec1abcp-111f, 0.0f, 0.0f,
     0x1.a78654p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee2ep-25f, 0x1.e892ap-61f,
     0x1.7e9ae2p-87f, 0x1.e558eap-15f, 0x1.e99b44p-25f, 0x1.6c3de2p-98f,
     0x1.6ebcd6p-82f, 0x1.de168p-37f, 0x1.da072ap-30f, 0.0f, 0x1.734ed8p-95f,
     0x1.7d35c2p-19f, 0.0f, 0x1.afa198p-41f, 0.0f, 0x1.13e7c2p-96f, 0.0f, 0.0f,
     0x1.e00b96p-17f, 0.0f, 0.0f, 0x1.42f32cp-21f, 0x1.4d965ep-116f, 0x1.5d4d98p-91f,
     0.0f, 0x1.c7ecfap-42f, 0.0f, 0x1.c45be6p-95f, 0x1.c9cb36p-69f, 0x1.3ca278p-124f,
     0x1.6d5258p-48f, 0x1.0a2b96p-43f, 0.0f, 0x1.903cb4p-3f, 0x1.f94bc6p-85f, 0.0f,
     0.0f, 0x1.c209fcp-122f, 0.0f, 0x1.e745dcp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.13f2f6p-46f, 0.0f, 0.0f, 0x1.54e64p-25f, 0x1.78608ep-31f,
     0.0f, 0.0f, 0.0f, 0x1.8d8b92p-41f, 0.0f, 0.0f, 0x1.e5dfecp-30f, 0x1.cdb24cp-8f,
     0.0f, 0.0f, 0.0f, 0x1.dd66ap-22f, 0.0f, 0x1.490422p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.55316p-39f, 0x1.f31abcp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f807f2p-9f,
     0.0f, 0.0f, 0x1.2c2fc2p-64f, 0x1.6f61aep-31f, 0.0f, 0x1.872812p-101f,
     0x1.c00848p-19f, 0x1.5cf64cp-72f, 0x1.f5d4b8p-36f, 0x1.c742dcp-109f,
     0x1.fe646ap-55f, 0.0f, 0x1.f701aap-67f, 0x1.18358ep-51f, 0x1.0baf6ap-87f, 0.0f,
     0.0f, 0.0f, 0x1.b2fe6ap-71f, 0x1.f9ca9ap-13f, 0.0f, 0x1.0189ap-80f, 0.0f, 0.0f,
     0x1.c496f6p-92f, 0x1.449536p-36f, 0x1.50d6c2p-42f, 0x1.a30a88p-62f,
     0x1.aae41ep-108f, 0.0f, 0x1.580a9p-85f, 0.0f, 0.0f, 0x1.7bdf98p-58f, 0.0f,
     0x1.1c2126p-65f, 0x1.5116f6p-42f, 0.0f, 0.0f, 0x1.995d08p-71f, 0x1.aaa8bp-58f,
     0x1.8d41fap-116f, 0.0f, 0.0f, 0x1.b4551cp-121f, 0.0f, 0.0f, 0.0f,
     0x1.03f914p-69f, 0x1.4afa1p-94f, 0x1.351f2p-42f, 0x1.37a2ep-26f, 0.0f,
     0x1.9e7d7cp-93f, 0x1.ead978p-19f, 0.0f, 0x1.66c0c8p-26f, 0x1.a99f04p-107f,
     0x1.9bf3a6p-109f, 0x1.a436ecp-94f, 0.0f, 0.0f, 0.0f, 0x1.32c708p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c34f2cp-20f, 0x1.99d5c8p-125f, 0x1.ef3148p-86f, 0x1.402904p-77f,
     0x1.2487f4p-112f, 0x1.2938cep-103f, 0.0f, 0.0f, 0x1.dba23ap-93f, 0.0f, 0.0f,
     0.0f, 0x1.a70edcp-90f, 0.0f, 0x1.af1d78p-124f, 0x1.71b0bap-86f, 0.0f,
     0x1.badba6p-74f, 0.0f, 0x1.b698bp-26f, 0.0f, 0x1.ec571cp-2f, 0.0f,
     0x1.918cfap-47f, 0x1.d9504cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70863cp-80f,
     0x1.89e49ep-49f, 0x1.0eb162p-32f, 0.0f, 0.0f, 0x1.0820d4p-11f, 0x1.970774p-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.efa10ap-78f, 0x1.72335ep-11f, 0x1.d0ae34p-56f, 0.0f,
     0.0f, 0x1.44bda6p-90f, 0x1.d60a24p-31f, 0.0f, 0.0f, 0x1.42fdfep-90f,
     0x1.c795a6p-90f, 0.0f, 0x1.031f5cp-39f, 0.0f, 0x1.21a05cp-33f, 0.0f, 0.0f, 0.0f,
     0x1.f6eda6p-3f, 0.0f, 0.0f, 0x1.709424p-76f, 0x1.b39d4cp-19f, 0x1.d8b06ep-87f,
     0x1.835354p-17f, 0.0f, 0x1.16e4e2p-97f, 0.0f, 0x1.004468p-29f, 0x1.10152ep-16f,
     0x1.24ea7cp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73f3fap-97f, 0.0f, 0.0f, 0.0f,
     0x1.b287cep-2f, 0x1.53f9fap-6f, 0.0f, 0x1.03cf3ap-50f, 0.0f, 0x1.6a272cp-87f,
     0.0f, 0.0f, 0x1.ad6996p-121f, 0.0f, 0.0f, 0.0f, 0x1.b34764p-125f,
     0x1.ca8ed6p-119f, 0x1.1bd3d8p-36f, 0x1.d6c618p-77f, 0x1.be9862p-121f, 0.0f, 0.0f,
     0x1.5a9ff2p-72f, 0x1.bf0376p-17f, 0x1.5f1cf2p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af521p-66f, 0x1.bd0eacp-21f, 0x1.57eedep-33f, 0x1.842e8ep-120f, 0.0f,
     0x1.8fe996p-14f, 0x1.ef5466p-42f, 0.0f, 0.0f, 0x1.34d00ep-28f, 0.0f, 0.0f, 0.0f,
     0x1.71bb8ep-87f, 0x1.a2e7d8p-118f, 0x1.e4ab2p-7f, 0.0f, 0.0f, 0.0f,
     0x1.379458p-103f, 0x1.b9d728p-47f, 0.0f, 0x1.db12acp-84f, 0.0f, 0x1.8af926p-72f,
     0x1.3b5676p-1f, 0.0f, 0x1.997dd2p-113f, 0x1.524472p-54f, 0x1.f095d2p-56f,
     0x1.1680d6p-64f, 0x1.262e42p-95f, 0x1.03af5ep-67f, 0x1.76355ep-16f,
     0x1.e3ef3p-95f, 0x1.c7855ap-29f, 0.0f, 0.0f, 0.0f, 0x1.6d251ap-69f, 0.0f,
     0x1.fe063p-8f, 0x1.1d1794p-74f, 0.0f, 0x1.cdaac4p-37f, 0.0f, 0x1.91dc86p-118f,
     0x1.28d3fep-98f, 0x1.3a28e4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.19eca2p-4f, 0x1.28cd3ep-37f, 0x1.7c116p-125f, 0.0f, 0x1.bd11d8p-32f,
     0x1.576facp-80f, 0.0f, 0.0f, 0.0f, 0x1.c972f2p-62f, 0.0f, 0x1.e05548p-105f,
     0x1.16cc3cp-91f, 0x1.39db96p-29f, 0x1.6443ap-90f, 0.0f, 0.0f, 0x1.8faf66p-17f,
     0.0f, 0x1.8540d2p-11f, 0x1.3f09fp-122f, 0x1.3c49eep-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.830abp-21f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.23b126p-41f, 0.0f, 0x1.d45254p-120f, 0x1.fe870ap-103f, 0x1.cb4dd6p-11f,
     0x1.25a33p-110f, 0x1.c8ffap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bde068p-94f,
     0.0f, 0x1.98bc44p-111f, 0x1.94031p-88f, 0x1.039efcp-7f, 0.0f, 0x1.e9d1acp-69f,
     0x1.093bdp-28f, 0x1.69663ep-11f, 0x1.517462p-23f, 0.0f, 0x1.6d68fcp-56f,
     0x1.ade0cp-7f, 0.0f, 0x1.8755fcp-28f, 0x1.63a82p-41f, 0.0f, 0x1.9ea7bcp-121f,
     0x1.994abap-97f, 0.0f, 0x1.5b6052p-4f, 0.0f, 0.0f, 0x1.37957ep-92f,
     0x1.344cccp-76f, 0.0f, 0.0f, 0x1.22c9ep-45f, 0.0f, 0x1.9f76bep-38f,
     0x1.6acb98p-51f, 0.0f, 0.0f, 0.0f, 0x1.ce84b6p-24f, 0x1.093bap-95f,
     0x1.29a17ep-126f, 0.0f, 0.0f, 0x1.8e783p-67f, 0.0f, 0x1.e0814p-35f,
     0x1.ea001ep-109f, 0.0f, 0.0f, 0x1.95182ep-90f, 0.0f, 0x1.901934p-109f, 0.0f,
     0x1.021e18p-14f, 0.0f, 0x1.9f51b6p-82f, 0x1.d371ap-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b4424ap-102f, 0.0f, 0x1.8b506ap-34f, 0.0f, 0.0f, 0.0f, 0x1.da5d9p-112f,
     0.0f, 0.0f, 0.0f, 0x1.b418ecp-97f, 0.0f, 0x1.f90dd4p-2f, 0.0f, 0x1.57ce08p-27f,
     0.0f, 0.0f, 0x1.596572p-56f, 0x1.fa1768p-89f, 0.0f, 0x1.e6f3e2p-101f,
     0x1.a90dp-116f, 0x1.00baaap-87f, 0x1.369c72p-124f, 0x1.d03ab4p-4f,
     0x1.e1d9cp-58f, 0x1.031ecep-67f, 0.0f, 0.0f, 0x1.b28dd6p-95f, 0.0f, 0.0f,
     0x1.dbb7b8p-48f, 0.0f, 0x1.92a21p-52f, 0x1.74c0cep-54f, 0x1.6222ep-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.72904ep-4f, 0.0f, 0.0f, 0x1.657c9ap-26f,
     0x1.136f6ep-32f, 0x1.f12822p-43f, 0x1.681bdp-69f, 0.0f, 0.0f, 0x1.cad48ep-94f,
     0.0f, 0x1.a168e4p-120f, 0x1.7d027cp-94f, 0.0f, 0x1.24820ap-59f, 0x1.3cee9cp-89f,
     0x1.24ec1ep-42f, 0x1.b8a15ep-121f, 0x1.9c4fc6p-99f, 0x1.6ad606p-52f, 0.0f, 0.0f,
     0x1.4588b4p-23f, 0x1.b4db8ap-79f, 0.0f, 0x1.ee377ep-99f, 0x1.e1a942p-81f, 0.0f,
     0x1.6355cep-33f, 0x1.ef6686p-103f, 0x1.28d56cp-122f, 0.0f, 0.0f, 0.0f,
     0x1.980b34p-44f, 0x1.21874ep-120f, 0.0f, 0.0f, 0x1.1f0b36p-26f, 0.0f, 0.0f, 0.0f,
     0x1.49a88ep-123f, 0.0f, 0x1.c37ep-55f, 0x1.266bf8p-13f, 0x1.089a76p-27f, 0.0f,
     0.0f, 0x1.66728p-9f, 0.0f, 0.0f, 0x1.cfad8cp-26f, 0.0f, 0x1.2ef5cp-77f,
     0x1.af1682p-123f, 0x1.21374ap-32f, 0.0f, 0x1.df0172p-82f, 0.0f, 0.0f,
     0x1.c8164p-3f, 0.0f, 0.0f, 0x1.887cbcp-117f, 0x1.ecbcccp-23f, 0.0f,
     0x1.61eebcp-91f, 0x1.93ec1ep-62f, 0.0f, 0.0f, 0x1.23dca6p-94f, 0x1.6813a4p-66f,
     0x1.0d6274p-50f, 0.0f, 0x1.2d016ap-83f, 0.0f, 0x1.15ec54p-72f, 0.0f, 0.0f,
     0x1.b3531ap-68f, 0.0f, 0x1.cdc9eap-72f, 0x1.a46beap-118f, 0x1.692f82p-80f,
     0x1.c4ff8p-19f, 0x1.c0ca1ep-80f, 0x1.fcafbp-48f, 0.0f, 0.0f, 0x1.f9600cp-12f,
     0.0f, 0x1.994dp-119f, 0.0f, 0x1.246544p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acb13ep-5f, 0.0f, 0.0f, 0x1.8609c8p-94f, 0x1.7db5fcp-66f, 0.0f,
     0x1.93ec9ap-24f, 0.0f, 0.0f, 0.0f, 0x1.f3b652p-98f, 0.0f, 0x1.d4dda6p-114f,
     0x1.fe478p-103f, 0.0f, 0x1.b359eep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e6af94p-59f, 0.0f, 0x1.0ab08ap-118f, 0.0f, 0x1.5ebb8p-69f, 0.0f,
     0x1.b0821ap-24f, 0x1.c223e8p-63f, 0.0f, 0.0f, 0x1.3c480ep-21f, 0x1.247f0ep-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6af50ep-95f, 0.0f, 0.0f, 0x1.6aa4a4p-90f,
     0x1.33cd32p-74f, 0x1.9e48a6p-55f, 0x1.9267aep-118f, 0x1.29f028p-88f, 0.0f, 0.0f,
     0.0f, 0x1.5410c6p-41f, 0.0f, 0.0f, 0x1.300ab4p-73f, 0.0f, 0x1.ab1986p-70f,
     0x1.cc5f88p-54f, 0.0f, 0.0f, 0x1.408ccp-96f, 0x1.f00724p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cec402p-8f, 0x1.35650cp-88f, 0.0f, 0x1.c0c60cp-102f, 0.0f, 0.0f,
     0x1.2315c8p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97f8dcp-80f, 0x1.a0fb62p-56f,
     0x1.b643bap-53f, 0.0f, 0.0f, 0.0f, 0x1.a90d54p-95f, 0x1.c5d0d8p-64f,
     0x1.ee47bcp-67f, 0.0f, 0x1.65e9fcp-31f, 0.0f, 0x1.ea8ccap-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f9a374p-35f, 0x1.71eccp-106f, 0x1.980786p-68f,
     0x1.bb9876p-22f, 0.0f, 0x1.4fdc5ap-55f, 0x1.5ae97p-90f, 0x1.4f0b72p-100f, 0.0f,
     0x1.c7d53ep-25f, 0x1.a5cbfep-37f, 0x1.2810dcp-79f, 0x1.ed2c7p-61f,
     0x1.373c16p-83f, 0.0f, 0.0f, 0.0f, 0x1.a719dp-13f, 0.0f, 0.0f, 0x1.bf08d4p-87f,
     0.0f, 0x1.c1f866p-25f, 0.0f, 0x1.9b91c6p-67f, 0x1.4ea7dep-34f, 0x1.d49a32p-18f,
     0.0f, 0.0f, 0x1.be2ef2p-15f, 0x1.1376e4p-16f, 0.0f, 0.0f, 0x1.6cd1ap-90f, 0.0f,
     0.0f, 0x1.99734ep-88f, 0x1.2e1db8p-93f, 0.0f, 0.0f, 0x1.540256p-40f,
     0x1.e1b3aep-62f, 0.0f, 0.0f, 0.0f, 0x1.45ed56p-17f, 0.0f, 0x1.d380aap-98f,
     0x1.b60966p-116f, 0.0f, 0.0f, 0x1.dbecc6p-40f, 0.0f, 0x1.7c4854p-11f, 0.0f,
     0x1.53f882p-34f, 0.0f, 0.0f, 0x1.6bb12ep-113f, 0.0f, 0x1.9baf54p-86f, 0.0f,
     0x1.321aa6p-27f, 0x1.c366a6p-47f, 0x1.d86f9ap-17f, 0x1.c1b566p-37f,
     0x1.c88cdcp-62f, 0x1.85692p-118f, 0x1.6965fep-92f, 0x1.5a6658p-109f,
     0x1.6c4c74p-112f, 0x1.58764ep-82f, 0x1.f2be72p-63f, 0x1.c2e69ap-94f, 0.0f,
     0x1.72d292p-44f, 0.0f, 0x1.8aea8cp-1f, 0x1.4eb76ep-80f, 0.0f, 0x1.06079ep-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.521c5p-126f, 0.0f, 0x1.9ea686p-97f, 0x1.4abfa6p-51f,
     0x1.cb376p-25f, 0.0f, 0.0f, 0x1.e33598p-2f, 0x1.fc2d34p-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.306186p-88f, 0x1.96682cp-32f, 0x1.7d1084p-111f, 0x1.8c2646p-100f,
     0x1.d6f48ep-125f, 0.0f, 0x1.755592p-16f, 0x1.739a46p-119f, 0.0f,
     0x1.00d6b8p-124f, 0x1.401146p-106f, 0.0f, 0.0f, 0x1.388f42p-114f,
     0x1.4af408p-15f, 0x1.110ec6p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.660a72p-73f, 0x1.1084b4p-48f, 0.0f, 0.0f, 0x1.30d4a2p-27f, 0.0f, 0.0f,
     0x1.b1f6f6p-54f, 0.0f, 0.0f, 0.0f, 0x1.6511fep-55f, 0x1.bbf722p-36f, 0.0f, 0.0f,
     0x1.16b5bap-78f, 0x1.df62e6p-67f, 0.0f, 0.0f, 0.0f, 0x1.ce8a6p-25f,
     0x1.25fa06p-42f, 0x1.8474c2p-105f, 0x1.f73d32p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cffe5p-18f, 0.0f, 0.0f, 0x1.ffa2bep-95f, 0x1.f6fcfep-83f, 0.0f,
     0x1.a9378ap-37f, 0x1.901abap-77f, 0x1.b5d57ap-89f, 0.0f, 0.0f, 0.0f,
     0x1.24cd3cp-54f, 0.0f, 0.0f, 0x1.8cc33p-16f, 0x1.962868p-21f, 0x1.05bdd6p-75f,
     0x1.e55a36p-13f, 0.0f, 0x1.502ce2p-34f, 0x1.c7ca7cp-6f, 0.0f, 0x1.fa471ep-107f,
     0.0f, 0x1.e01f44p-100f, 0x1.84bb3ap-96f, 0.0f, 0x1.676baep-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c01d7ap-55f, 0.0f, 0.0f, 0.0f, 0x1.41fa1p-5f,
     0x1.b20436p-51f, 0.0f, 0x1.d58bdep-121f, 0x1.db9f2cp-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0b9a2ep-53f, 0x1.815ff2p-26f, 0.0f, 0x1.44addcp-10f, 0.0f,
     0x1.9e998ap-63f, 0x1.f52c12p-123f, 0x1.1c740cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c98eep-110f, 0x1.80691cp-49f, 0x1.b060d2p-31f, 0x1.8a7532p-31f,
     0.0f, 0x1.fc1112p-88f, 0.0f, 0x1.82efap-114f, 0x1.c78f7ep-42f, 0.0f, 0.0f,
     0x1.b9371ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bf0eep-56f, 0.0f, 0.0f,
     0x1.d96df6p-93f, 0.0f, 0.0f, 0x1.e5afa2p-23f, 0x1.b8812ep-33f, 0.0f,
     0x1.f7a58ep-83f, 0x1.226e3cp-58f, 0x1.ba723cp-119f, 0x1.97a92p-23f, 0.0f, 0.0f,
     0x1.7e810cp-77f, 0x1.9a4bap-21f, 0x1.8d4552p-85f, 0x1.2c50c6p-48f,
     0x1.89d8fap-88f, 0.0f, 0x1.f23e4ep-22f, 0x1.0a6a1cp-44f, 0x1.5c3226p-71f, 0.0f,
     0x1.0e682p-99f, 0x1.f266c4p-70f, 0.0f, 0x1.2902fcp-65f, 0.0f, 0x1.8df3c8p-16f,
     0.0f, 0.0f, 0.0f, 0x1.0c92e8p-71f, 0x1.9a09ecp-9f, 0x1p0f, 0x1.14d83p-71f,
     0x1.a6fa6cp-95f, 0x1p0f, 0.0f, 0.0f, 0x1.dd78f2p-21f, 0x1.4750a2p-4f, 0.0f, 0.0f,
     0x1.d03062p-28f, 0x1.afe45p-102f, 0x1.406fbap-47f, 0x1.727d7cp-32f,
     0x1.7a80bep-79f, 0x1.7d6c1ap-107f, 0.0f, 0x1.fdcc44p-82f, 0x1.49450ep-94f,
     0x1.33159cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f965d4p-33f, 0.0f,
     0x1.9c9a28p-62f, 0.0f, 0.0f, 0x1.f214p-23f, 0x1.9a00a4p-29f, 0.0f, 0.0f, 0.0f,
     0x1.326838p-87f, 0.0f, 0.0f, 0x1.6e44fp-26f, 0x1.719258p-70f, 0x1.c2ec04p-107f,
     0.0f, 0x1.0361eap-68f, 0x1.fc2242p-85f, 0x1.208c78p-106f, 0.0f, 0.0f, 0.0f,
     0x1.4284e4p-110f, 0x1.04c1a4p-99f, 0x1.b6513ap-102f, 0x1.7d73ecp-81f, 0.0f, 0.0f,
     0.0f, 0x1.357758p-37f, 0x1.ef7032p-60f, 0x1.e2f9f2p-94f, 0x1.bd0906p-38f,
     0x1.e7df18p-56f, 0.0f, 0x1.b1903ap-31f, 0x1.c1c3f8p-25f, 0.0f, 0.0f,
     0x1.79e28p-14f, 0x1.6b4966p-67f, 0x1.ecd8ccp-53f, 0.0f
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
            tmp1 = Sleef_finz_sinf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sinf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
