/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf1_u10purecfma.c --function \
 *     Sleef_finz_sinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.605f46p-45f, 0.0f, 0x1.2ab31p-9f, 0x1.50ea4ap-112f, 0.0f, 0x1.8b81f2p-94f,
     0.0f, 0.0f, 0.0f, 0x1.e221a2p-13f, 0x1.ee61d2p-122f, 0x1.9f0f4cp-75f, 0.0f, 0.0f,
     0x1.7a463ap-92f, 0.0f, 0x1.90fda2p-110f, 0x1.085ffp-73f, 0.0f, 0.0f, 0.0f,
     0x1.fbc036p-52f, 0x1.7c7cep-49f, 0.0f, 0x1.77ff12p-48f, 0.0f, 0x1.94d43cp-94f,
     0x1.fd3fbcp-2f, 0.0f, 0x1.094168p-125f, 0.0f, 0x1.21f748p-120f, 0x1.5c3f44p-105f,
     0x1.063454p-15f, 0.0f, 0x1.7cbb46p-124f, 0.0f, 0x1.739668p-115f, 0.0f, 0.0f,
     0.0f, 0x1.309e44p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.273e48p-41f, 0x1.645ab2p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.403baep-19f, 0.0f, 0x1.8231d4p-53f, 0.0f,
     0.0f, 0x1.89bfbep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.791c4cp-35f, 0x1.5e9878p-126f,
     0x1.a0c1b8p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.975e96p-93f, 0x1.210d2cp-97f, 0x1.7065cap-72f, 0x1.763dbp-99f, 0.0f, 0.0f,
     0x1.7def66p-62f, 0.0f, 0x1.aa5756p-80f, 0x1.da8078p-103f, 0.0f, 0x1.5a8dc8p-96f,
     0x1.cd4abep-5f, 0x1.191d0ap-91f, 0.0f, 0x1.7a7fb4p-80f, 0x1.9b71c8p-112f,
     0x1.014c66p-82f, 0x1.d08af4p-84f, 0.0f, 0.0f, 0x1.910682p-81f, 0x1.a0db56p-8f,
     0x1.d53432p-19f, 0x1.0d90fep-93f, 0x1.f7d5b6p-88f, 0.0f, 0.0f, 0x1.599556p-32f,
     0.0f, 0x1.6571d8p-13f, 0x1.c37a2ap-62f, 0.0f, 0x1.ebd12ep-56f, 0.0f,
     0x1.2dba5ep-59f, 0.0f, 0x1.938bb2p-109f, 0.0f, 0x1.a78164p-121f, 0x1.bdf9f6p-53f,
     0x1.ae4e98p-121f, 0.0f, 0x1.1a8408p-25f, 0x1.6678b2p-74f, 0.0f, 0x1.142c76p-97f,
     0.0f, 0.0f, 0x1.3ef756p-100f, 0x1.5bf6c2p-38f, 0.0f, 0x1.8d45cp-22f,
     0x1.9d0438p-59f, 0.0f, 0x1.5d1b84p-50f, 0.0f, 0.0f, 0x1.086feap-102f, 0.0f, 0.0f,
     0.0f, 0x1.51eb76p-102f, 0x1.3e502ep-126f, 0.0f, 0x1.a8886cp-20f, 0x1.d9a1e2p-28f,
     0x1.95317ap-28f, 0x1.e019dep-40f, 0.0f, 0.0f, 0.0f, 0x1.38fc9cp-18f, 0.0f, 0.0f,
     0.0f, 0x1.0c80b4p-33f, 0.0f, 0x1.0a8c96p-39f, 0.0f, 0.0f, 0.0f, 0x1.9e2c9ap-112f,
     0x1.0cb47p-107f, 0.0f, 0.0f, 0x1.2ffc72p-86f, 0x1.bfe3e2p-56f, 0.0f,
     0x1.47c348p-63f, 0x1.f29fa2p-29f, 0x1.7324d6p-69f, 0.0f, 0x1.709b26p-118f, 0.0f,
     0.0f, 0x1.baa2acp-123f, 0x1.bd3d16p-32f, 0.0f, 0x1.6e126p-84f, 0x1.52eb22p-109f,
     0.0f, 0x1.1642c6p-90f, 0x1.f72d08p-88f, 0x1.35f648p-5f, 0.0f, 0x1.24c58ap-88f,
     0x1.d38d7p-90f, 0.0f, 0x1.b29d04p-10f, 0.0f, 0.0f, 0x1p0f, 0x1.e64fc2p-121f,
     0.0f, 0.0f, 0x1.2f9edcp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72071p-19f, 0.0f,
     0x1.f8c546p-62f, 0.0f, 0x1.3fc0e4p-80f, 0.0f, 0.0f, 0x1.ff6706p-92f,
     0x1.392c3cp-76f, 0x1.3f8aa4p-54f, 0.0f, 0x1.ce7404p-115f, 0.0f, 0.0f,
     0x1.48a40cp-1f, 0x1.bad582p-88f, 0.0f, 0x1.090b12p-37f, 0x1.feb53ap-33f, 0.0f,
     0x1.131b9p-89f, 0.0f, 0.0f, 0.0f, 0x1.e021e2p-115f, 0.0f, 0x1.41152ep-116f, 0.0f,
     0x1.0d626p-26f, 0.0f, 0x1.e6a7fcp-115f, 0x1.c9afe6p-27f, 0x1.be307ap-18f,
     0x1.aa09acp-11f, 0x1.c5939cp-3f, 0x1.4e9c48p-31f, 0x1.582772p-46f, 0.0f,
     0x1.3c8a9ap-28f, 0.0f, 0.0f, 0.0f, 0x1.1d2894p-36f, 0x1.281b64p-111f,
     0x1.9b1598p-94f, 0.0f, 0x1.380f3ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a10cecp-72f, 0.0f, 0.0f, 0x1.c935f4p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17d31ep-77f, 0x1.08fb9ep-81f, 0x1.ac9c46p-9f, 0x1.756cfcp-104f, 0.0f,
     0x1.55c81ap-95f, 0.0f, 0x1p0f, 0x1.091c96p-109f, 0x1.4800bcp-113f, 0.0f,
     0x1.f9d484p-21f, 0.0f, 0.0f, 0.0f, 0x1.2cbfaep-120f, 0.0f, 0x1.75680cp-71f, 0.0f,
     0x1.bc614cp-91f, 0x1p0f, 0.0f, 0x1.fb1b98p-79f, 0x1.17358ep-107f,
     0x1.bae37ep-121f, 0x1.e805d6p-16f, 0.0f, 0x1.832f9p-45f, 0x1.b21654p-90f, 0.0f,
     0.0f, 0x1.04eaa2p-30f, 0x1.bed81ep-22f, 0.0f, 0.0f, 0x1.f6a4cap-96f, 0.0f,
     0x1.2e6156p-8f, 0x1.4796eep-90f, 0.0f, 0x1.c39f4p-112f, 0x1.1dbc64p-25f,
     0x1.3fccdep-104f, 0x1.4230bcp-22f, 0x1.912daep-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4201b8p-107f, 0.0f, 0x1.4587ecp-123f, 0x1.9e9f02p-36f, 0.0f,
     0x1.f8da5ep-71f, 0x1.67f62cp-101f, 0x1.33ebdp-81f, 0x1.6150b2p-121f,
     0x1.a0332ep-113f, 0.0f, 0x1.2aaef6p-124f, 0.0f, 0.0f, 0x1.434628p-65f,
     0x1.4f88cp-82f, 0.0f, 0x1.9f41bcp-89f, 0x1.a14dcp-86f, 0x1.01cff6p-86f, 0.0f,
     0x1.5df7ecp-107f, 0x1.9ff6b8p-112f, 0.0f, 0x1.527d0ap-83f, 0x1.948facp-56f, 0.0f,
     0x1.fe4296p-15f, 0.0f, 0x1.5ac6d4p-68f, 0x1.d62506p-53f, 0.0f, 0.0f,
     0x1.85edacp-87f, 0x1.516f5p-30f, 0x1.1efb92p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c2fb5ep-55f, 0.0f, 0x1.a32a7cp-18f, 0.0f, 0x1.ee199ep-45f,
     0x1.2cfdb4p-8f, 0x1.ab5b46p-121f, 0x1.93cc88p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c43a58p-79f, 0.0f, 0x1.6b55acp-110f, 0.0f, 0x1.ecd664p-115f, 0x1.069f8ap-25f,
     0x1.dff6c8p-84f, 0.0f, 0x1.9b1dcap-100f, 0x1.d0e926p-1f, 0.0f, 0x1.4f35b6p-96f,
     0x1.c0dddcp-30f, 0x1.f46b8ep-37f, 0x1.c552bp-50f, 0.0f, 0.0f, 0x1.ede116p-32f,
     0x1.87536ep-38f, 0x1.28b4fep-25f, 0x1.6a9a9cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.e5ac1cp-30f, 0.0f, 0.0f, 0x1.6d3432p-35f, 0x1.c12c9ap-52f, 0x1.c4d5b2p-113f,
     0.0f, 0x1.85a016p-98f, 0x1.db3718p-14f, 0.0f, 0.0f, 0x1.27f27p-110f, 0.0f, 0.0f,
     0x1.c0a486p-1f, 0x1.d5f96cp-73f, 0.0f, 0x1.1e398ep-80f, 0x1.0fc252p-72f, 0.0f,
     0x1.046348p-89f, 0x1.4a1e94p-4f, 0x1.c7c7e6p-53f, 0.0f, 0.0f, 0x1.dfca04p-96f,
     0.0f, 0x1.d342fp-20f, 0x1.abca9cp-56f, 0.0f, 0.0f, 0.0f, 0x1.bae1c8p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.89c09p-66f, 0.0f, 0x1.42df8ep-115f, 0.0f, 0.0f,
     0x1.a9aabep-32f, 0.0f, 0.0f, 0x1.8b4546p-29f, 0x1.a56952p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.03b23ep-124f, 0.0f, 0x1.e0405p-81f, 0.0f, 0.0f, 0.0f, 0x1.241e96p-3f,
     0.0f, 0x1.7442c4p-52f, 0x1.95d75cp-103f, 0.0f, 0x1.88325ep-45f, 0x1.03f046p-25f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1p0f, 0x1.c20eb2p-59f, 0.0f, 0x1.180838p-13f, 0.0f,
     0.0f, 0.0f, 0x1.9b3d0ep-49f, 0x1.c5d384p-109f, 0.0f, 0.0f, 0.0f, 0x1.f034eap-35f,
     0x1.fcdd2ep-108f, 0.0f, 0x1.533734p-41f, 0x1.ac6b14p-30f, 0x1.ac6436p-99f, 0.0f,
     0.0f, 0x1.35ee22p-37f, 0x1.4fae18p-78f, 0x1.813afcp-16f, 0x1.f8d946p-99f,
     0x1.3a0ccp-97f, 0x1.5a573ap-14f, 0.0f, 0x1.235024p-85f, 0.0f, 0x1.123b8ap-19f,
     0x1.54203ep-57f, 0.0f, 0.0f, 0x1.458e26p-94f, 0.0f, 0x1.4cadeap-80f,
     0x1.69fbd6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bf74cp-14f, 0.0f, 0x1.fe7f3ep-111f,
     0.0f, 0.0f, 0x1.f5d17cp-45f, 0x1.f67e66p-10f, 0x1.4a407ap-45f, 0.0f, 0.0f,
     0x1.4a67c6p-66f, 0x1.9f8046p-14f, 0x1.219886p-66f, 0x1.d60a6cp-18f, 0.0f,
     0x1.c77052p-98f, 0.0f, 0.0f, 0x1.9b3832p-61f, 0x1.782d3ap-36f, 0.0f,
     0x1.fbb8c8p-43f, 0.0f, 0x1.6810bp-61f, 0x1.3dc59ap-29f, 0x1.6c447p-126f, 0.0f,
     0.0f, 0x1.c7fe6ep-122f, 0x1.7a0ee2p-97f, 0x1.d0956ep-126f, 0x1.c3f61cp-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.213c6cp-71f, 0x1.7ae838p-29f, 0x1.762508p-49f, 0.0f,
     0x1.d957p-109f, 0x1.30bc86p-24f, 0x1.cf0944p-90f, 0x1.b7c31cp-18f,
     0x1.a86d66p-66f, 0.0f, 0x1.0d3988p-32f, 0.0f, 0x1.50aea8p-7f, 0x1.08782ap-99f,
     0.0f, 0.0f, 0x1.9891fep-19f, 0x1.164816p-106f, 0x1.6d298ep-126f, 0x1.ffb26cp-18f,
     0.0f, 0.0f, 0x1.f96e8p-13f, 0.0f, 0x1.75a1fap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.87cdbep-82f, 0x1.5aeep-107f, 0.0f, 0x1.212488p-45f, 0.0f,
     0x1.0aa17p-68f, 0.0f, 0x1.88af82p-121f, 0x1.90c8f8p-109f, 0x1.980d5cp-13f, 0.0f,
     0.0f, 0x1.6c516ap-29f, 0.0f, 0.0f, 0x1.beaf7p-99f, 0.0f, 0x1.d2cd58p-81f,
     0x1.8766e6p-36f, 0x1.b18656p-83f, 0.0f, 0x1.06f78ep-27f, 0x1.2742ccp-111f, 0.0f,
     0.0f, 0.0f, 0x1.713adap-19f, 0.0f, 0.0f, 0x1.c2fab4p-75f, 0x1.f5cff2p-107f,
     0x1.ab842cp-14f, 0.0f, 0x1.dd4b36p-119f, 0x1.c5535ep-17f, 0.0f, 0.0f,
     0x1.98594p-45f, 0x1.24a648p-7f, 0.0f, 0x1.208034p-103f, 0.0f, 0x1.7b1c0cp-99f,
     0.0f, 0.0f, 0.0f, 0x1.149952p-61f, 0x1.00d82p-58f, 0x1.e5ae8cp-117f, 0.0f,
     0x1.52d422p-111f, 0x1.6ea592p-29f, 0x1.67a95p-88f, 0x1.0f0486p-96f,
     0x1.54017cp-96f, 0.0f, 0.0f, 0x1.84ffaep-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37ff4cp-82f, 0.0f, 0x1.54af2p-45f, 0.0f, 0.0f, 0x1.950d1ap-65f, 0.0f, 0.0f,
     0.0f, 0x1.7b5c7p-36f, 0.0f, 0.0f, 0x1.7f2fd2p-1f, 0.0f, 0x1.49375p-15f, 0.0f,
     0.0f, 0x1.400ec4p-48f, 0x1.a4b6dap-13f, 0x1.f769fcp-54f, 0.0f, 0.0f, 0.0f,
     0x1.f1e076p-38f, 0.0f, 0x1.176ecep-16f, 0x1p0f, 0x1.ec26cp-63f, 0x1.317f9ep-14f,
     0x1.262e58p-17f, 0x1.25173cp-69f, 0.0f, 0.0f, 0x1.dcf9bcp-28f, 0.0f, 0.0f,
     0x1.a936bep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2867bap-23f, 0x1.f48bd6p-82f, 0.0f,
     0.0f, 0.0f, 0x1.c1c77ep-22f, 0x1.23be7p-99f, 0.0f, 0x1.258dp-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d1ae7ap-11f, 0x1.87f9acp-91f, 0x1.a38902p-74f, 0.0f, 0.0f,
     0.0f, 0x1.dc8632p-5f, 0.0f, 0.0f, 0x1.aefc6ap-17f, 0x1.294096p-100f, 0.0f,
     0x1p0f, 0.0f, 0x1.d773a4p-36f, 0x1.22c9b6p-30f, 0.0f, 0x1.2912f2p-31f, 0.0f,
     0.0f, 0.0f, 0x1.acf2dcp-108f, 0x1.1c0614p-55f, 0x1.fc5c8ep-107f, 0x1.1dc9aap-8f,
     0.0f, 0x1.efe774p-4f, 0x1.88cc5ap-5f, 0.0f, 0x1.8538ecp-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e460bap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4606aap-120f, 0.0f,
     0x1.4e3f5p-118f, 0x1.d7ac8p-36f, 0x1.9d15aep-49f, 0.0f, 0.0f, 0.0f,
     0x1.d23e34p-86f, 0.0f, 0.0f, 0x1.22b3c8p-57f, 0.0f, 0x1p0f, 0x1.ab6228p-114f,
     0.0f, 0x1.19efe2p-13f, 0.0f, 0x1.261d5p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74bbap-23f, 0.0f, 0.0f, 0x1.367d84p-17f, 0x1.daa944p-91f, 0x1.618df8p-40f,
     0x1.aeb95p-83f, 0.0f, 0.0f, 0.0f, 0x1.5b9394p-43f, 0x1.c5f826p-42f, 0.0f,
     0x1.68135p-39f, 0.0f, 0.0f, 0x1.792b3ap-95f, 0x1.ca9b84p-57f, 0x1.3703ccp-29f,
     0x1.b496ap-11f, 0x1.00dfa8p-12f, 0.0f, 0.0f, 0x1.09f7fcp-55f, 0.0f, 0.0f, 0.0f,
     0x1.4f2514p-12f, 0x1.e4aa8ap-60f, 0x1.09f7a8p-92f, 0x1.fe48c2p-69f, 0.0f, 0.0f,
     0x1.878d3ep-58f, 0x1.676eeap-67f, 0x1.5c58d2p-16f, 0.0f, 0x1.a18fc4p-7f, 0.0f,
     0.0f, 0.0f, 0x1.8a7338p-93f, 0.0f, 0x1.ef12cp-82f, 0.0f, 0.0f, 0.0f,
     0x1.bdafd8p-107f, 0.0f, 0.0f, 0x1.b7894p-27f, 0.0f, 0.0f, 0x1.44cd5ap-96f,
     0x1.7c677ep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.465dap-103f, 0.0f, 0.0f,
     0x1.a8f9dp-108f, 0.0f, 0x1.687ce4p-34f, 0.0f, 0x1.0f5cfap-12f, 0x1.81dfb6p-41f,
     0x1.73f57ap-53f, 0x1.3e0ecep-12f, 0x1.4841c8p-106f, 0x1.d245d4p-1f,
     0x1.c97584p-12f, 0.0f, 0.0f, 0x1.aeba28p-16f, 0.0f, 0x1.b451dap-14f,
     0x1.e742dp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dccf36p-29f, 0x1.7dd43cp-86f,
     0x1.a5c954p-93f, 0x1.f4cdd2p-126f, 0x1.66b238p-101f, 0x1.d516a6p-91f,
     0x1.96eaf6p-117f, 0x1.52f782p-38f, 0.0f, 0.0f, 0x1.e5a2f6p-116f, 0x1.19094ep-60f,
     0x1.de958cp-76f, 0x1.54cb48p-45f, 0.0f, 0x1.aa67fp-46f, 0x1.f0564ap-64f, 0.0f,
     0x1.f55f3ap-74f, 0.0f, 0x1.9632bp-22f, 0.0f, 0x1.01199ap-104f, 0x1.c6abecp-107f,
     0.0f, 0.0f, 0x1.c79b3ep-54f, 0.0f, 0x1.72eb44p-93f, 0.0f, 0x1.0221fap-90f, 0.0f,
     0.0f, 0x1.3f8382p-55f, 0x1.658fb4p-115f, 0.0f, 0x1.780f0cp-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b1b3f6p-118f, 0.0f, 0x1.5b2abp-90f, 0x1.dbf046p-47f, 0x1.a0c41ap-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b99a8p-28f,
     0x1.03ad0ap-101f, 0x1.16f0c8p-104f, 0x1.953ae4p-32f, 0x1.63a624p-66f,
     0x1.053792p-9f, 0x1.e660e4p-86f, 0x1.aac9fcp-43f, 0.0f, 0.0f, 0x1.f662eep-9f,
     0.0f, 0x1.c719b6p-100f, 0.0f, 0.0f, 0x1.583edap-12f, 0.0f, 0x1.132918p-53f,
     0x1.a714cap-39f, 0x1.fec8ecp-51f, 0x1.d4a71p-57f, 0.0f, 0x1.7f481ep-16f, 0.0f,
     0x1.6a433p-1f, 0x1.2ae892p-4f, 0.0f, 0x1.84dc64p-36f, 0.0f, 0.0f, 0x1.497478p-6f,
     0.0f, 0x1.1967ecp-17f, 0.0f, 0x1.791be2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1dcc02p-112f, 0.0f, 0x1.8b07e2p-117f, 0.0f, 0.0f, 0.0f,
     0x1.945e44p-17f, 0x1.04e6eep-66f, 0x1.e5e2e6p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3495b4p-117f, 0.0f, 0x1.b8d2aep-51f, 0.0f, 0x1.cd3662p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b5fecp-79f, 0.0f, 0x1.60f4a6p-96f, 0.0f, 0.0f, 0x1.3b0586p-28f, 0.0f,
     0x1.a6eeb6p-114f, 0x1.c3c196p-91f, 0.0f, 0x1.27628cp-100f, 0x1.ef8c8p-33f,
     0x1.230fe6p-49f, 0x1.ccd0eep-79f, 0x1.600d6p-77f, 0.0f, 0x1.29051p-50f,
     0x1.878f4p-11f, 0.0f, 0x1.9ab04p-49f, 0x1.ce06c8p-124f, 0.0f, 0x1.7a39fep-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f9d22p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c751p-107f, 0x1.42ca8cp-75f, 0.0f, 0x1.6de18p-126f, 0.0f, 0.0f, 0.0f,
     0x1.5a67cep-57f, 0x1.27e8fcp-1f, 0.0f, 0x1.00b22ep-73f, 0x1.7ab78p-55f,
     0x1.d12ddp-17f, 0.0f, 0.0f, 0.0f, 0x1.9d84fap-99f, 0.0f, 0x1.4bbef6p-32f, 0.0f,
     0.0f
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
            tmp1 = Sleef_finz_sinhf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sinhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
