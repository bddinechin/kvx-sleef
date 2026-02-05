/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf1_u35purecfma.c --function \
 *     Sleef_tanhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.427346p-32f, 0.0f, 0.0f, 0.0f, 0x1.a4e59cp-66f, 0x1.79efcp-67f, 0.0f,
     0x1.330b3p-58f, 0x1.34a83p-25f, 0.0f, 0.0f, 0x1.1edf9p-76f, 0x1.6baf22p-49f,
     0.0f, 0.0f, 0x1.18d28p-62f, 0x1.cd3a9ap-86f, 0.0f, 0.0f, 0.0f, 0x1.2d0b2cp-66f,
     0.0f, 0.0f, 0x1.42927ep-19f, 0x1.a12434p-79f, 0.0f, 0x1.d3401ep-16f,
     0x1.71dee2p-14f, 0x1.950706p-63f, 0x1.8350f2p-47f, 0.0f, 0x1.39cb5cp-81f,
     0x1.c61816p-22f, 0.0f, 0x1.f8940ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0f27p-6f, 0x1.42387ap-12f, 0x1.3fe09ap-95f, 0x1.17fd8cp-115f,
     0x1.6c9702p-104f, 0.0f, 0.0f, 0x1.e49716p-38f, 0x1.4bd20cp-13f, 0.0f, 0.0f, 0.0f,
     0x1.916ed8p-77f, 0.0f, 0x1.7f2a62p-83f, 0x1.6feec4p-89f, 0.0f, 0x1.1c3c6ap-86f,
     0.0f, 0.0f, 0x1.479ae2p-68f, 0.0f, 0x1.1118e2p-106f, 0.0f, 0.0f, 0x1.856952p-28f,
     0.0f, 0x1.1220a2p-58f, 0x1.b3afb6p-122f, 0x1.5bff46p-59f, 0.0f, 0.0f,
     0x1.7d2014p-1f, 0x1.cdbe0ap-96f, 0x1.c6c2b6p-120f, 0.0f, 0x1.9cd7dp-114f,
     0x1.c9b112p-87f, 0.0f, 0x1.84cc0ap-11f, 0x1.4bacdcp-89f, 0.0f, 0.0f,
     0x1.a1bba8p-50f, 0x1.f7902ep-6f, 0x1.397686p-120f, 0.0f, 0.0f, 0x1.98a3d6p-50f,
     0x1.ca1e22p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08fdeap-9f, 0x1.94d3fp-85f, 0.0f,
     0.0f, 0.0f, 0x1.fa08d6p-84f, 0.0f, 0x1.ac94fp-66f, 0.0f, 0.0f, 0.0f,
     0x1.ed8ff2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.030b4ep-108f, 0.0f, 0x1.89b1b6p-48f,
     0x1.05ce92p-13f, 0x1.1b6a4ap-107f, 0x1.ec0ab6p-27f, 0.0f, 0x1.34203ap-73f, 0.0f,
     0.0f, 0x1.2fdd62p-41f, 0x1.f4404cp-61f, 0x1.3d5774p-100f, 0x1.85fea8p-22f,
     0x1.99dc26p-84f, 0.0f, 0.0f, 0.0f, 0x1.b4401cp-41f, 0x1.451c4cp-43f,
     0x1.e64abp-98f, 0x1.5cc3c2p-99f, 0.0f, 0x1.6c7ffcp-108f, 0x1.447ea2p-9f,
     0x1.683f0ap-27f, 0x1.4514d4p-18f, 0.0f, 0.0f, 0x1.f49dcp-54f, 0x1.df3e38p-39f,
     0x1.0de774p-92f, 0x1.80cccp-68f, 0x1.e212p-102f, 0x1.df2288p-16f, 0.0f,
     0x1.c154dp-32f, 0x1.96548ap-5f, 0x1.109e38p-77f, 0x1.3e9dc4p-70f, 0x1.59fa3p-3f,
     0x1.d555a6p-24f, 0.0f, 0.0f, 0x1.abe454p-95f, 0x1.ab891ep-95f, 0x1.ea416cp-94f,
     0.0f, 0.0f, 0x1.94b568p-11f, 0.0f, 0x1.a16f1cp-40f, 0.0f, 0.0f, 0x1.072492p-50f,
     0.0f, 0x1.c2feb8p-43f, 0x1.4b68a6p-61f, 0x1.0c75ep-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac2404p-109f, 0x1.43b4a6p-21f, 0x1.65c046p-120f, 0.0f, 0x1.78f808p-126f,
     0x1.f8efp-119f, 0.0f, 0.0f, 0x1.fed254p-110f, 0x1.1b87c4p-111f, 0x1.99e92ep-104f,
     0.0f, 0x1.59db74p-92f, 0.0f, 0x1.6d8228p-75f, 0x1.7420ap-43f, 0x1.8ffafcp-4f,
     0.0f, 0.0f, 0.0f, 0x1.a774ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49ab68p-26f,
     0.0f, 0x1.c59936p-46f, 0x1.322832p-55f, 0x1.171528p-41f, 0x1.dedbb4p-39f,
     0x1.e4ep-82f, 0x1.5c4a72p-82f, 0x1.33332p-5f, 0x1.d7b314p-118f, 0x1.9491f8p-19f,
     0x1.46118p-23f, 0.0f, 0x1.56bf98p-22f, 0.0f, 0x1.35d79ep-74f, 0x1.9508d2p-17f,
     0.0f, 0x1.06b1c2p-118f, 0x1.9de6p-56f, 0x1.9f5738p-9f, 0.0f, 0x1.8c40a8p-76f,
     0x1.e20c3p-116f, 0x1.d415d8p-51f, 0x1.993fccp-126f, 0x1.a7c384p-39f,
     0x1.36c9bp-46f, 0.0f, 0x1.375dc6p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ab41ap-38f, 0.0f, 0x1.363f64p-75f, 0x1.84625ep-69f, 0x1.0f901ap-32f,
     0x1.01ae8p-41f, 0.0f, 0.0f, 0x1.10c004p-96f, 0x1.bf1596p-52f, 0.0f, 0.0f, 0.0f,
     0x1.fec9dcp-30f, 0.0f, 0x1.1b8d9p-27f, 0.0f, 0x1.c158fep-54f, 0x1.af7f88p-86f,
     0x1.c34a2ep-27f, 0x1.abdd64p-64f, 0x1.4b5896p-117f, 0.0f, 0.0f, 0.0f,
     0x1.7ad49p-82f, 0.0f, 0.0f, 0.0f, 0x1.0de94p-82f, 0x1.332824p-79f, 0.0f, 0.0f,
     0.0f, 0x1.77dfd6p-93f, 0.0f, 0x1.211a2cp-51f, 0.0f, 0.0f, 0x1.13dc58p-68f,
     0x1.725c48p-8f, 0x1.e0845p-109f, 0.0f, 0x1.0a3fcp-76f, 0x1.36689p-81f,
     0x1.1c767ap-68f, 0.0f, 0x1.8c6d94p-105f, 0.0f, 0.0f, 0x1.311b48p-42f, 0.0f,
     0x1.607122p-81f, 0x1.4bbf3p-105f, 0.0f, 0x1.7bae28p-83f, 0x1.90901p-117f,
     0x1.cb65dep-75f, 0x1.eff43p-123f, 0x1.ac478ap-70f, 0x1.2fdc8p-15f,
     0x1.8f21ccp-24f, 0x1.dfb36ep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5ed5ep-15f,
     0.0f, 0.0f, 0x1.b0f81cp-22f, 0x1.93f96cp-63f, 0x1.3bc00ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.ced518p-87f, 0x1.c634f6p-70f, 0x1.c904bap-104f, 0.0f, 0x1.3a3108p-38f,
     0x1.5a86b8p-115f, 0.0f, 0.0f, 0x1.1966c2p-39f, 0x1.2257dap-84f, 0x1.35909p-55f,
     0x1.f36bap-23f, 0.0f, 0.0f, 0x1.251e82p-86f, 0x1.42878ap-122f, 0.0f, 0.0f,
     0x1.084f26p-52f, 0x1.04d338p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b987p-90f, 0.0f,
     0.0f, 0x1.fda208p-22f, 0.0f, 0.0f, 0x1.25cc56p-111f, 0x1.5dec8ap-98f,
     0x1.97ea32p-29f, 0.0f, 0x1.afe5a4p-73f, 0x1.a462fep-120f, 0.0f, 0x1.3de4bep-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa53a8p-98f, 0.0f, 0.0f, 0x1.f87c96p-36f, 0.0f,
     0x1.b2bbe2p-15f, 0.0f, 0.0f, 0x1.9e962ap-62f, 0.0f, 0.0f, 0x1.5752cep-45f,
     0x1.bdc5b8p-57f, 0x1.ca1e56p-106f, 0x1.c56bc8p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4251eep-60f, 0.0f, 0x1.06ceeep-110f, 0x1.21e4aap-74f, 0x1.beab9cp-25f,
     0x1.90096cp-66f, 0x1.5883a8p-90f, 0.0f, 0x1.359d2cp-121f, 0x1.f5cd8ep-107f, 0.0f,
     0x1.5b74b8p-18f, 0.0f, 0x1.42a9c2p-72f, 0.0f, 0.0f, 0.0f, 0x1.a6be06p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fc564p-88f, 0x1.17fcfp-91f,
     0x1.ba59c2p-112f, 0.0f, 0x1.50d286p-106f, 0x1.8ff708p-109f, 0x1.0ed7dap-84f,
     0.0f, 0.0f, 0.0f, 0x1.989e38p-60f, 0x1.07862p-15f, 0x1.8b9e32p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d1468p-18f, 0.0f, 0x1.4aa482p-102f, 0.0f, 0.0f,
     0x1.27fc7p-63f, 0x1.829486p-17f, 0x1.e70cb2p-60f, 0x1.33dacep-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c75048p-52f, 0.0f, 0x1.a5caf2p-25f, 0.0f, 0.0f, 0.0f,
     0x1.7b1f26p-102f, 0x1.8d088ep-115f, 0.0f, 0x1.fd53fap-2f, 0.0f, 0x1.d4aeap-66f,
     0x1.a550b4p-50f, 0x1.781e16p-31f, 0x1.6f166p-72f, 0.0f, 0x1.c0f0aap-45f, 0.0f,
     0.0f, 0x1.1cf3f2p-42f, 0.0f, 0.0f, 0x1.114b08p-49f, 0.0f, 0.0f, 0x1.59d60ep-11f,
     0x1.d6ce54p-126f, 0x1.2bd504p-6f, 0.0f, 0x1.4e4bap-5f, 0x1.bb5272p-83f,
     0x1.b0abp-30f, 0.0f, 0.0f, 0.0f, 0x1.a610fcp-15f, 0.0f, 0x1.2fd218p-91f, 0.0f,
     0x1.c02b0ep-23f, 0.0f, 0.0f, 0x1.1d5b78p-107f, 0x1.00d7fp-22f, 0x1.eee56cp-122f,
     0x1.00c892p-118f, 0.0f, 0.0f, 0.0f, 0x1.ddf206p-119f, 0x1.d89adep-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.77356cp-104f, 0x1.b56942p-39f, 0.0f, 0.0f, 0x1.5ff07cp-25f,
     0.0f, 0x1.5ccf26p-40f, 0x1.ec5864p-78f, 0.0f, 0.0f, 0.0f, 0x1.5e1126p-7f,
     0x1.cdcd6p-38f, 0x1.06ed2p-57f, 0.0f, 0x1.9d3cp-67f, 0.0f, 0x1.5690dap-73f, 0.0f,
     0.0f, 0x1.3d7816p-64f, 0x1.6e7dep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94bb12p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a124p-64f, 0.0f, 0x1.b3c56cp-12f, 0.0f,
     0x1.4fed5p-18f, 0x1.096c08p-118f, 0.0f, 0x1.0fbac8p-5f, 0x1.4e938cp-80f, 0.0f,
     0x1.c0ac04p-121f, 0.0f, 0.0f, 0x1.d4d6bep-95f, 0.0f, 0.0f, 0.0f, 0x1.f814aep-71f,
     0.0f, 0x1.2cae74p-94f, 0x1.70ea76p-120f, 0x1.b8efep-12f, 0.0f, 0x1.77ca52p-27f,
     0x1.129716p-30f, 0.0f, 0x1.857436p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d90d3ep-72f,
     0x1.8a52c6p-9f, 0.0f, 0x1.390d7ep-48f, 0x1.f27baap-66f, 0x1.b0b43p-81f, 0.0f,
     0.0f, 0x1.050eb6p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbbbfep-48f, 0.0f,
     0x1.46e0a6p-66f, 0x1.adc7e8p-43f, 0.0f, 0x1.f46706p-20f, 0x1.52af6cp-16f,
     0x1.174252p-10f, 0x1.2c9484p-45f, 0x1.dc2c3p-80f, 0x1.2bbd06p-27f, 0.0f,
     0x1.81e2bcp-56f, 0x1.6724b6p-123f, 0x1.04b552p-47f, 0x1.d51506p-27f, 0.0f,
     0x1.0376dp-31f, 0x1p0f, 0x1.b60b14p-105f, 0.0f, 0.0f, 0x1.ab3de6p-123f,
     0x1.387f88p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdd21ap-3f, 0x1.85e582p-111f, 0.0f,
     0.0f, 0x1.77e23ep-53f, 0x1.5f924p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.e2538ap-109f, 0.0f, 0.0f, 0x1.e7b4dep-35f, 0x1.55ae3cp-70f,
     0x1.d24bcp-24f, 0x1.35c91p-8f, 0x1.61c052p-23f, 0.0f, 0.0f, 0.0f,
     0x1.b3cb46p-90f, 0x1.601d7ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b246p-113f,
     0x1.a46b28p-28f, 0.0f, 0x1.0ee31ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d66ep-28f, 0x1.749ad8p-48f, 0x1.1f2ad2p-56f, 0.0f, 0.0f, 0x1.2afd8ep-98f,
     0.0f, 0x1.192b48p-68f, 0x1.a318d4p-87f, 0x1.dd3ce4p-108f, 0x1.a9fd6ap-49f, 0.0f,
     0.0f, 0x1.b8aae8p-46f, 0.0f, 0.0f, 0x1.8e60e8p-124f, 0.0f, 0.0f,
     0x1.5ae3fcp-116f, 0x1.ce6ba2p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.264802p-48f, 0x1.e7b75p-124f, 0x1.955e2cp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7c17ep-89f, 0x1.51e70cp-29f, 0.0f, 0x1.69ce5p-5f, 0x1.2d7386p-74f, 0.0f,
     0x1.aa33d2p-113f, 0x1.215e12p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.203daep-110f,
     0x1.9939cp-21f, 0x1.51fe2ep-81f, 0.0f, 0.0f, 0x1.42ae0cp-103f, 0x1.41246ap-60f,
     0x1.e9b9c2p-111f, 0.0f, 0x1.9bb008p-109f, 0x1.228ba6p-68f, 0x1.c7b8d2p-18f,
     0x1.830dc2p-123f, 0x1.b81678p-32f, 0x1.344a1ap-68f, 0x1.408cf4p-16f,
     0x1.1ddc06p-7f, 0.0f, 0x1.04469p-58f, 0.0f, 0x1.3f03d6p-61f, 0x1.f9a3d4p-103f,
     0.0f, 0x1.c61ep-123f, 0x1.b41bd6p-54f, 0.0f, 0x1.7859e8p-99f, 0.0f,
     0x1.17abe6p-73f, 0.0f, 0.0f, 0x1.a4d7e8p-47f, 0x1.d848f2p-65f, 0.0f,
     0x1.e212f2p-89f, 0x1.f221ccp-32f, 0x1.8c95aep-21f, 0.0f, 0x1.73556p-32f,
     0x1.414078p-62f, 0x1.d0021ap-69f, 0.0f, 0x1.806fbcp-86f, 0x1.7d118cp-118f, 0.0f,
     0x1.665e88p-18f, 0.0f, 0.0f, 0x1.ebe898p-16f, 0.0f, 0x1.b3074p-25f, 0.0f, 0.0f,
     0x1.ce02p-97f, 0x1.200b8ep-72f, 0.0f, 0x1.1c0b0cp-35f, 0x1.eddb7p-120f, 0.0f,
     0x1.4cd278p-13f, 0x1.f447f2p-75f, 0.0f, 0.0f, 0x1.832778p-91f, 0.0f,
     0x1.a0d9eap-19f, 0.0f, 0.0f, 0x1.830cc8p-94f, 0x1.f902a2p-125f, 0x1.4aa15ap-48f,
     0.0f, 0x1.ef5fc6p-35f, 0.0f, 0.0f, 0x1.34c0ccp-48f, 0x1.cb0152p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5b9cf8p-22f, 0.0f, 0x1.e43628p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.841928p-45f, 0x1.69dfe4p-104f, 0.0f, 0.0f, 0x1.1eca24p-19f, 0.0f, 0.0f,
     0x1.6ff6e6p-31f, 0x1.6a2644p-47f, 0x1.d4ca32p-110f, 0x1.0ce6a8p-29f, 0.0f,
     0x1.bf752ep-122f, 0.0f, 0x1.7247b6p-3f, 0x1.7bf23ap-89f, 0x1.5261p-26f,
     0x1.bed11ep-108f, 0.0f, 0.0f, 0x1.d0e9cp-34f, 0.0f, 0.0f, 0x1.aec382p-106f, 0.0f,
     0x1.07a73ap-62f, 0.0f, 0.0f, 0x1.b5e4a4p-114f, 0.0f, 0x1.e3491ep-18f,
     0x1.e6e594p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d41338p-64f, 0.0f,
     0x1.237694p-113f, 0.0f, 0x1.710a4ep-59f, 0.0f, 0x1.d03182p-73f, 0.0f,
     0x1.7140f6p-42f, 0x1.1e7bb4p-105f, 0.0f, 0x1.d07842p-57f, 0x1.46ff3cp-68f, 0.0f,
     0.0f, 0.0f, 0x1.8fc26ap-111f, 0x1.d6dfa2p-24f, 0.0f, 0.0f, 0.0f, 0x1.65f602p-57f,
     0x1.602608p-90f, 0x1.8839ccp-86f, 0.0f, 0.0f, 0x1.d86b1ep-11f, 0.0f,
     0x1.5433acp-99f, 0x1.43b826p-94f, 0.0f, 0.0f, 0.0f, 0x1.f03bd2p-94f,
     0x1.5ea77ep-82f, 0.0f, 0.0f, 0.0f, 0x1.900d1p-78f, 0x1.911feep-89f,
     0x1.11ca5ap-4f, 0x1.6a52aap-71f, 0.0f, 0x1.3cf5fep-33f, 0.0f, 0.0f, 0.0f,
     0x1.f3b084p-69f, 0.0f, 0x1.2c5e04p-89f, 0.0f, 0x1.4c7af8p-110f, 0.0f,
     0x1.181ba2p-62f, 0.0f, 0.0f, 0x1.96d6cep-64f, 0.0f, 0.0f, 0.0f, 0x1.d53a02p-103f,
     0.0f, 0x1.ea74eep-114f, 0x1.4fdf3cp-17f, 0x1.dd5ca4p-85f, 0.0f, 0.0f,
     0x1.51fbe6p-77f, 0x1.20933ap-46f, 0.0f, 0.0f, 0x1.af5c3p-69f, 0.0f, 0.0f,
     0x1.76131ep-98f, 0.0f, 0x1.5ea27p-59f, 0.0f, 0x1.0fa722p-104f, 0.0f,
     0x1.ab375p-28f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.03ec38p-41f, 0.0f, 0.0f,
     0x1.74458ep-62f, 0x1.5d8244p-112f, 0x1.315f36p-56f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.4ab5f8p-105f, 0.0f, 0x1.b888c2p-61f, 0.0f, 0.0f, 0x1.ae9ffap-32f, 0.0f,
     0x1.5dfe2ep-108f, 0.0f, 0x1.470f46p-53f, 0.0f, 0.0f, 0x1.190cdp-22f,
     0x1.71584p-86f, 0.0f, 0.0f, 0x1.3146c6p-70f, 0.0f, 0.0f, 0.0f, 0x1.a02d6ep-105f,
     0x1.b18816p-58f, 0.0f, 0x1.5b5d3ep-30f, 0.0f, 0x1.694ddep-106f, 0x1.efe66p-115f,
     0x1.3c366ap-54f, 0.0f, 0.0f, 0x1.845ebcp-125f, 0x1.daf0b6p-112f, 0.0f,
     0x1.bc7e52p-117f, 0.0f, 0.0f, 0.0f, 0x1.264142p-50f, 0x1.c38256p-8f,
     0x1.30ecdep-82f, 0.0f, 0x1.3e38b8p-66f, 0x1.0d72bp-6f, 0x1.e521dep-86f, 0.0f,
     0.0f, 0.0f, 0x1.19ec0ep-83f, 0x1.424c5ep-51f, 0.0f, 0x1.89ed6ep-52f,
     0x1.39198cp-105f, 0.0f, 0.0f, 0x1.c72e9ep-26f, 0x1.ef8c0ap-86f, 0.0f, 0.0f,
     0x1.e9841cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b102c2p-63f, 0.0f, 0.0f,
     0x1.55fb34p-10f, 0.0f, 0.0f, 0x1.c108f4p-45f, 0.0f, 0x1.9d3b62p-59f, 0.0f, 0.0f,
     0x1.4855f4p-2f, 0x1.3819bcp-116f, 0.0f, 0.0f, 0x1.403508p-25f, 0.0f, 0.0f,
     0x1.411de2p-21f, 0x1.02edcap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cd947cp-46f, 0.0f, 0x1.bdb8fap-52f, 0x1.4143f2p-29f, 0x1.d6a818p-116f,
     0x1.eb8cdcp-59f, 0x1.f66b22p-42f, 0.0f, 0.0f, 0x1.5009fp-62f, 0.0f,
     0x1.944816p-23f, 0.0f
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
            tmp1 = Sleef_tanhf1_u35purecfma(tmp0);
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
    printf("Sleef_tanhf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhf1_u35purecfma bench acc %a\n", global_bench_acc);
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
