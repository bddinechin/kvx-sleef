/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_nextafterf1_purecfma.c --function \
 *     Sleef_finz_nextafterf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.6e99cp-15f, 0.0f, 0x1.803d76p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ec4eep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.316356p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e1416p-38f, 0x1.215d3p-46f, 0x1.f0ccd6p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba5b62p-15f, 0x1.acff36p-17f, 0x1.539334p-108f, 0x1.bd4a82p-49f, 0.0f,
     0x1.b843d6p-11f, 0x1.d499eep-125f, 0.0f, 0x1.550d44p-22f, 0.0f, 0.0f,
     0x1.314ebcp-119f, 0x1.a433cp-56f, 0x1.7ba026p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd9894p-126f, 0x1.17b3ap-34f, 0x1.e11bb4p-5f, 0x1.f9767ep-27f,
     0x1.7be6f4p-33f, 0x1.0a43d8p-10f, 0x1.8156e8p-83f, 0x1.70b19p-126f,
     0x1.1c8af6p-25f, 0x1.c94514p-81f, 0x1.9a5366p-41f, 0x1.e964b4p-3f, 0.0f, 0.0f,
     0x1.66584p-41f, 0x1.23318p-85f, 0x1.64bd9ep-47f, 0.0f, 0x1.c43bdcp-64f,
     0x1.3e5bc4p-120f, 0.0f, 0x1.0a04dap-24f, 0x1.58fdaap-97f, 0.0f, 0x1.df74c4p-111f,
     0x1.9d512cp-4f, 0x1.bb54b2p-71f, 0x1.2d3e96p-83f, 0x1.d72966p-9f, 0.0f, 0.0f,
     0x1.b92956p-13f, 0x1.22733cp-97f, 0.0f, 0.0f, 0x1.99c76cp-48f, 0x1.caa5bp-46f,
     0x1.c36982p-69f, 0x1.436516p-16f, 0.0f, 0.0f, 0x1.48aedcp-36f, 0.0f,
     0x1.15d8f2p-45f, 0x1.9e3ccp-106f, 0x1.936ffcp-104f, 0.0f, 0.0f, 0.0f,
     0x1.c47ef2p-37f, 0.0f, 0.0f, 0.0f, 0x1.102716p-116f, 0.0f, 0x1.e9902ep-49f, 0.0f,
     0.0f, 0.0f, 0x1.cf15dep-103f, 0.0f, 0x1.4d8d48p-78f, 0x1.0b35ccp-45f,
     0x1.ce1cbcp-115f, 0x1.ecc16p-55f, 0x1.465062p-106f, 0.0f, 0x1.824f9ep-102f, 0.0f,
     0x1.f8b6bp-106f, 0x1.aa26fp-45f, 0x1.d4ae58p-5f, 0x1.e29c78p-62f, 0.0f,
     0x1.8a18bp-47f, 0x1.6da874p-14f, 0.0f, 0.0f, 0x1.d6faf6p-26f, 0.0f, 0.0f, 0.0f,
     0x1.721ff6p-61f, 0x1.bddb94p-92f, 0x1.675eeep-22f, 0.0f, 0.0f, 0x1.953a58p-77f,
     0x1.3b6804p-124f, 0.0f, 0x1.2d25d2p-24f, 0x1.1bc03cp-14f, 0x1.9f6804p-101f,
     0x1.de18aep-94f, 0x1.d8a594p-8f, 0.0f, 0.0f, 0x1.08ec8ep-111f, 0x1.d678cap-126f,
     0x1.ee35a6p-57f, 0x1.bc9912p-70f, 0.0f, 0x1.b72c8p-114f, 0.0f, 0.0f,
     0x1.13e0c6p-57f, 0.0f, 0.0f, 0.0f, 0x1.955d18p-22f, 0.0f, 0x1.c1f6fp-101f, 0.0f,
     0x1.080886p-14f, 0x1.61440ap-97f, 0.0f, 0x1.ec60dap-20f, 0x1.9d3c1cp-34f, 0.0f,
     0x1.7b2c9ap-115f, 0x1.dc46f8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb447cp-101f,
     0x1.dbcaep-50f, 0.0f, 0x1.2a6e76p-45f, 0.0f, 0x1.e80792p-14f, 0x1.ed0138p-99f,
     0.0f, 0x1.4314c4p-116f, 0x1.12f8c4p-38f, 0x1.3327f8p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.da6156p-46f, 0x1.845d6ap-6f, 0x1.47066ap-54f, 0.0f, 0x1.a8b6b8p-82f,
     0.0f, 0x1.1696a6p-87f, 0.0f, 0.0f, 0.0f, 0x1.289afep-6f, 0.0f, 0.0f,
     0x1.c4e058p-84f, 0x1.20c7ecp-64f, 0.0f, 0x1.a7389cp-107f, 0x1.3bdbd2p-40f, 0.0f,
     0.0f, 0x1.c59544p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7dc672p-92f,
     0x1.c8cfeap-102f, 0x1.5f2cf2p-42f, 0x1.08fd9cp-59f, 0.0f, 0x1.89cf6p-87f,
     0x1.beb6b2p-94f, 0.0f, 0x1.3076e4p-46f, 0x1.a88922p-82f, 0.0f, 0x1.6483c6p-118f,
     0.0f, 0.0f, 0x1.7e98acp-91f, 0.0f, 0x1.b08c48p-109f, 0x1.351a36p-1f, 0x1p0f,
     0x1.e35678p-108f, 0x1.6be27ap-5f, 0x1.e6f342p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e09a04p-20f, 0x1.c601fap-45f, 0x1.f2505p-67f, 0x1.6e5598p-112f,
     0x1.e43556p-112f, 0.0f, 0.0f, 0x1.a4da22p-125f, 0x1.f25dbap-29f, 0.0f,
     0x1.9d800ep-25f, 0.0f, 0x1.326fd4p-69f, 0.0f, 0.0f, 0x1.4d471p-73f, 0.0f,
     0x1.e71584p-121f, 0x1.64de12p-31f, 0.0f, 0x1.412e9ep-83f, 0.0f, 0.0f, 0.0f,
     0x1.d0ff58p-63f, 0x1.53a886p-91f, 0x1.e680a4p-38f, 0x1.9b0936p-108f,
     0x1.ed98bep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.984958p-105f, 0x1.f40f9cp-106f,
     0x1.bb11c8p-38f, 0x1.e89e38p-82f, 0.0f, 0.0f, 0x1.877642p-43f, 0.0f,
     0x1.8bdd22p-52f, 0.0f, 0x1.5ef846p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4a432p-57f,
     0.0f, 0x1.e27576p-98f, 0.0f, 0.0f, 0x1.0fc698p-9f, 0x1.7f3534p-103f,
     0x1.5d563ap-38f, 0x1.944ddep-88f, 0.0f, 0x1.84846ep-29f, 0x1.fef7b8p-118f,
     0x1.2b79b6p-125f, 0.0f, 0x1.8a5174p-71f, 0x1.3aacb2p-96f, 0x1.38b6c4p-43f,
     0x1.d1646cp-50f, 0.0f, 0x1.edd1c4p-38f, 0.0f, 0x1.65bc98p-17f, 0x1.5b0d36p-66f,
     0.0f, 0.0f, 0x1.6a8402p-80f, 0x1.8e8864p-90f, 0x1.6339d8p-47f, 0.0f,
     0x1.aaca9ep-3f, 0x1.d666e4p-77f, 0.0f, 0x1.60cd7ep-107f, 0.0f, 0.0f,
     0x1.e05adap-66f, 0x1.deaecep-49f, 0.0f, 0x1.fea3cp-69f, 0.0f, 0x1.db7264p-74f,
     0x1.2e7072p-30f, 0x1p0f, 0x1.4e4c3ap-27f, 0x1.ba7864p-37f, 0x1.4f58bep-72f,
     0x1.d4b33ap-7f, 0x1.bddf5p-119f, 0.0f, 0.0f, 0x1.19addep-57f, 0.0f, 0.0f, 0.0f,
     0x1.0c0b62p-92f, 0.0f, 0.0f, 0x1.fbdc74p-57f, 0x1.f635fp-86f, 0.0f,
     0x1.c6a746p-109f, 0.0f, 0.0f, 0x1.cd254ep-61f, 0x1.522036p-101f, 0x1.7f0408p-21f,
     0x1.e7a576p-23f, 0x1.71d624p-56f, 0x1.459986p-3f, 0x1.5ef91cp-11f, 0.0f, 0.0f,
     0x1.0bef32p-46f, 0x1.ec0342p-47f, 0.0f, 0.0f, 0x1.933dd4p-67f, 0.0f,
     0x1.3d5848p-104f, 0x1.40522ep-85f, 0.0f, 0x1.cefd4ep-95f, 0x1.68a48p-123f,
     0x1.db0464p-7f, 0x1.aba5b4p-100f, 0x1.70cac8p-7f, 0.0f, 0x1.2d561cp-8f,
     0x1.0eced6p-87f, 0x1.15d346p-76f, 0.0f, 0.0f, 0.0f, 0x1.e95d5ap-80f, 0.0f,
     0x1.2c55ecp-7f, 0x1.2cc8a6p-13f, 0x1.30c634p-88f, 0x1.0f8318p-80f,
     0x1.40e48ap-61f, 0.0f, 0x1.da624p-39f, 0x1.e193fcp-97f, 0x1.f22842p-124f, 0.0f,
     0.0f, 0.0f, 0x1.744b74p-90f, 0x1.b224e4p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f51fcp-103f, 0.0f, 0.0f, 0x1.6d2258p-45f, 0.0f, 0x1.071216p-63f, 0.0f,
     0x1.9b2542p-17f, 0x1.fff0fep-24f, 0.0f, 0x1.cbe8aep-125f, 0.0f, 0.0f,
     0x1.f9d4a8p-65f, 0x1.281ecap-96f, 0.0f, 0x1.8c982p-9f, 0x1.136334p-43f, 0.0f,
     0.0f, 0x1.c59302p-47f, 0.0f, 0x1.7fbefap-9f, 0x1.380b0ep-120f, 0.0f,
     0x1.f28c58p-74f, 0.0f, 0x1.134e4cp-106f, 0.0f, 0x1.88094ep-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a95d8p-87f, 0.0f, 0.0f, 0x1.112404p-65f, 0.0f,
     0x1.23b8cep-36f, 0.0f, 0x1.ff52d4p-6f, 0x1.91995p-91f, 0x1.fbb0f2p-68f,
     0x1.cb3462p-84f, 0.0f, 0.0f, 0.0f, 0x1.f29892p-50f, 0x1.0e08bep-58f,
     0x1.57c116p-62f, 0x1.c6e5acp-61f, 0.0f, 0x1.8b5fbcp-79f, 0x1.51f45p-7f,
     0x1.954008p-49f, 0x1.ba7b82p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3716bp-31f, 0x1.2a015p-99f, 0.0f, 0.0f, 0x1.7bb904p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ce9676p-38f, 0x1.3a29dap-126f, 0x1.389884p-90f, 0.0f,
     0x1.5addep-29f, 0x1.260636p-76f, 0.0f, 0x1.d90cb4p-44f, 0x1.a247a8p-36f,
     0x1.29664ap-117f, 0.0f, 0x1.d3698p-24f, 0x1.a74286p-69f, 0.0f, 0.0f,
     0x1.0ea43p-101f, 0x1.ff97b4p-105f, 0x1.9ce11ep-101f, 0x1.d2e9fap-57f, 0.0f, 0.0f,
     0x1.fcfd0ap-51f, 0x1.013d74p-115f, 0.0f, 0x1.64a84ap-13f, 0.0f, 0.0f,
     0x1.d40af2p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.894ec2p-73f, 0.0f,
     0x1.03d746p-100f, 0.0f, 0.0f, 0x1.0b29d2p-16f, 0.0f, 0x1.4b3318p-9f,
     0x1.05e694p-6f, 0.0f, 0x1.31411p-66f, 0x1.feff46p-51f, 0x1.1bb2ccp-47f,
     0x1.fc4f7ap-123f, 0.0f, 0x1.2ff4p-76f, 0x1.3fc7dep-126f, 0.0f, 0.0f,
     0x1.29fd7ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffbe56p-70f, 0.0f,
     0x1.196218p-4f, 0.0f, 0.0f, 0x1.406a22p-119f, 0x1.a633c2p-27f, 0x1.09385ep-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.803228p-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b0e7c2p-124f, 0.0f, 0x1.fcd4ecp-124f, 0.0f, 0x1.e18cbcp-4f,
     0x1.a2a5e4p-80f, 0.0f, 0x1.d82846p-74f, 0x1.3fe118p-55f, 0x1.d3c70ap-71f, 0.0f,
     0x1.5ac928p-1f, 0.0f, 0x1.73b636p-76f, 0.0f, 0x1.339abp-6f, 0.0f, 0.0f, 0.0f,
     0x1.e3e5ep-43f, 0.0f, 0.0f, 0x1.a4f47p-91f, 0x1.074682p-79f, 0.0f, 0.0f, 0.0f,
     0x1.378ca8p-65f, 0x1.d925aap-46f, 0.0f, 0.0f, 0x1.1856d4p-96f, 0x1.5a3dfp-36f,
     0.0f, 0x1.eb8d32p-50f, 0.0f, 0x1.076c46p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8956ap-49f, 0.0f, 0x1.a9427ap-52f, 0x1.88f3f8p-53f, 0x1.4685cep-38f, 0.0f,
     0.0f, 0.0f, 0x1.de328cp-8f, 0x1.46d734p-7f, 0.0f, 0x1.9728cap-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ca55p-30f, 0x1.141de8p-50f, 0.0f, 0.0f,
     0x1.32959p-77f, 0x1.5cfacep-126f, 0.0f, 0x1.be1ffcp-52f, 0x1.3ed45ep-47f,
     0x1.fa56e4p-18f, 0.0f, 0x1.36bb9ap-81f, 0x1.363d84p-89f, 0x1.e65c3cp-64f,
     0x1.4571fp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b7c78p-23f, 0.0f, 0.0f,
     0x1.20ad62p-19f, 0x1.11833ep-125f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.7f93f6p-4f,
     0.0f, 0x1.348bf6p-68f, 0.0f, 0.0f, 0x1.74247ap-8f, 0.0f, 0x1.1d9416p-97f,
     0x1.cafb86p-28f, 0x1.d82cf8p-56f, 0.0f, 0.0f, 0x1.2ef7ep-34f, 0x1.98f29ap-24f,
     0x1.e04442p-110f, 0x1.983538p-119f, 0x1.015bcap-122f, 0x1.ce067ep-67f, 0.0f,
     0x1.48ba2ep-13f, 0.0f, 0.0f, 0.0f, 0x1.103992p-101f, 0x1.4c8408p-22f, 0.0f,
     0x1.c6b09ap-110f, 0.0f, 0x1.acb3fcp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.473c02p-91f, 0.0f, 0.0f, 0.0f, 0x1.ca21c6p-20f, 0.0f, 0.0f, 0.0f,
     0x1.b48d7p-104f, 0.0f, 0.0f, 0x1.6145e8p-52f, 0.0f, 0.0f, 0.0f, 0x1.e9d6d6p-40f,
     0.0f, 0.0f, 0x1.67d78ap-103f, 0x1.20b5dap-88f, 0.0f, 0x1.caaf3ap-65f,
     0x1.32d852p-67f, 0.0f, 0.0f, 0.0f, 0x1.f45c28p-72f, 0x1.a1da98p-51f,
     0x1.1502fp-60f, 0x1.ad0e9p-80f, 0x1.f95922p-94f, 0x1.1687fp-109f, 0.0f,
     0x1.7ef8ecp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21f86p-15f, 0.0f, 0.0f,
     0x1.88a9b4p-122f, 0.0f, 0.0f, 0.0f, 0x1.33db3cp-119f, 0x1.667e6cp-59f,
     0x1.d313e6p-67f, 0x1.7229acp-120f, 0x1.f444d4p-45f, 0x1.fb0044p-18f, 0.0f,
     0x1.110474p-70f, 0x1.053bfep-124f, 0x1.68a85ep-121f, 0.0f, 0.0f, 0x1.51f2ap-43f,
     0x1.ea9c72p-60f, 0x1.62b61ep-80f, 0x1.13af14p-11f, 0.0f, 0.0f, 0x1.baafe8p-35f,
     0.0f, 0.0f, 0.0f, 0x1.60d9bep-3f, 0.0f, 0.0f, 0.0f, 0x1.23d638p-94f,
     0x1.d27a6cp-121f, 0x1.b61a2ap-79f, 0.0f, 0x1.66dcbap-59f, 0.0f, 0.0f,
     0x1.6cbd1ep-18f, 0x1.07db1p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.312a4ep-35f, 0.0f,
     0x1.cd9248p-12f, 0.0f, 0.0f, 0.0f, 0x1.8a3ba2p-101f, 0.0f, 0.0f, 0.0f,
     0x1.ebd7e6p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b4d58p-4f,
     0x1.008188p-58f, 0x1.18fb3cp-64f, 0x1.5ca6c6p-68f, 0.0f, 0.0f, 0x1.c9999ep-69f,
     0.0f, 0x1.49e3fcp-79f, 0x1.c8f15ep-36f, 0.0f, 0x1.80c8p-102f, 0.0f, 0.0f, 0.0f,
     0x1.22d90cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa0598p-9f, 0.0f,
     0x1.c4f14ep-102f, 0x1.07f584p-63f, 0.0f, 0x1.e08c7ap-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34d26ap-99f, 0x1.3a586ap-52f, 0.0f, 0.0f, 0x1.08d38p-19f, 0.0f,
     0x1.3a7d92p-44f, 0x1.ac187p-40f, 0x1.c6354ep-56f, 0x1.df712ap-51f, 0.0f, 0.0f,
     0x1.bee148p-40f, 0x1.9f8222p-122f, 0x1.d1879p-5f, 0x1.3ee37cp-19f, 0.0f,
     0x1.1f29ep-86f, 0x1.d166a8p-20f, 0x1.a747dap-82f, 0x1.a4a0bcp-67f,
     0x1.fbb728p-20f, 0x1.e1250cp-37f, 0x1.73368ap-71f, 0.0f, 0x1.e3d54cp-114f, 0.0f,
     0.0f, 0.0f, 0x1.c010e2p-23f, 0.0f, 0.0f, 0.0f, 0x1.176938p-31f, 0x1.79fffcp-77f,
     0.0f, 0x1.40f7a6p-100f, 0x1.0aca3ep-124f, 0x1.d67174p-35f, 0x1.5c3b44p-91f,
     0x1.220122p-68f, 0.0f, 0.0f, 0x1.4d4bb6p-124f, 0.0f, 0.0f, 0x1.7cfc08p-25f, 0.0f,
     0x1.eb80a2p-87f, 0.0f, 0.0f, 0.0f, 0x1.464924p-122f, 0x1.439264p-77f,
     0x1.e3a562p-69f, 0x1.3e222ep-17f, 0x1.d793fp-1f, 0x1.d81eaap-56f,
     0x1.dd178cp-115f, 0x1.8f987ap-87f, 0x1.da933ep-60f, 0.0f, 0x1.ed33c8p-45f,
     0x1.dd24d2p-1f, 0.0f, 0x1.07e2b6p-95f, 0x1.d0b52p-64f, 0x1.7507dp-91f, 0.0f,
     0.0f, 0x1.079758p-67f, 0x1.5d01dcp-22f, 0.0f, 0x1.eb6446p-94f, 0x1.c32138p-125f,
     0x1.9da246p-52f, 0x1.bcaefcp-78f, 0x1.895e9ep-16f, 0.0f, 0.0f, 0x1.0bc03p-116f,
     0.0f, 0x1.534c1p-38f, 0.0f, 0x1.50de5cp-123f, 0x1.e9a46p-83f, 0x1.87d4f2p-38f,
     0.0f, 0.0f, 0x1.763738p-75f, 0.0f, 0x1.e323fep-96f, 0x1.8f958ep-51f, 0.0f,
     0x1.dacecap-76f, 0x1.dfc55p-61f, 0.0f, 0.0f, 0x1.d89e5cp-68f, 0x1.d730c2p-37f,
     0.0f, 0.0f, 0x1.268a96p-16f, 0x1.b6a62p-52f, 0.0f, 0x1.19f84p-18f,
     0x1.15c4c2p-31f, 0x1.f2e3ap-96f, 0x1.c3f986p-115f, 0x1.0edf1p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fd5e16p-116f, 0x1.c8ae3ap-57f, 0x1.3d821cp-53f, 0.0f, 0.0f,
     0.0f, 0x1.552b86p-126f, 0x1.8908bep-109f, 0x1.fa9212p-85f, 0.0f, 0x1.5171d2p-72f,
     0x1.47d752p-120f, 0x1.c43e32p-95f, 0.0f, 0.0f, 0x1.44ebaap-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c49ac2p-69f, 0.0f, 0x1.f02c3cp-116f, 0x1.38e41cp-114f, 0x1.f0a2e2p-89f,
     0x1.20c848p-104f, 0.0f, 0.0f, 0x1.3cd6fp-38f, 0.0f, 0.0f, 0x1.06322cp-58f,
     0x1.66e172p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d822f4p-76f, 0.0f, 0.0f,
     0x1.769fdep-112f, 0.0f, 0.0f, 0x1.47af26p-5f, 0x1.7e5dd6p-108f, 0.0f,
     0x1.94041p-94f, 0.0f, 0x1.104c44p-93f, 0.0f, 0x1.0ac2c6p-21f, 0x1.5ad902p-78f,
     0.0f, 0.0f, 0.0f, 0x1.0098bp-123f, 0x1.ccf978p-119f, 0x1.f5f1b4p-57f,
     0x1.d7d6ecp-14f, 0x1.f24866p-105f, 0.0f, 0x1.01ae26p-71f, 0.0f, 0x1.12f592p-109f,
     0x1.573764p-118f, 0x1.ba1p-28f, 0x1.d5d8b6p-7f, 0.0f, 0x1.e1e9aap-105f, 0.0f,
     0x1.0a2a1ep-42f, 0x1.7de3d8p-4f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.8aec3p-79f, 0x1.2b140cp-80f, 0x1.fdfe14p-73f, 0.0f,
     0x1.f5ff18p-94f, 0.0f, 0.0f, 0x1.470ddcp-87f, 0.0f, 0x1.e97c12p-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a9c43ep-24f, 0x1.95c6b8p-29f, 0x1.503982p-41f, 0.0f, 0.0f,
     0x1.6e4764p-7f, 0x1.0978bap-63f, 0x1.06414cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.561bdp-42f, 0.0f, 0x1.06cf42p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20ea0ep-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d00adap-86f,
     0x1.e3e9e6p-84f, 0.0f, 0.0f, 0.0f, 0x1.6909fep-76f, 0x1.e1494ap-121f,
     0x1.3aee36p-72f, 0x1.f72e28p-85f, 0.0f, 0.0f, 0x1.dff89cp-108f, 0.0f, 0.0f,
     0x1.f66fbap-94f, 0x1.6b06fcp-112f, 0x1.7a7912p-28f, 0.0f, 0x1.20ce8ap-31f, 0.0f,
     0.0f, 0x1.4c43ep-33f, 0x1.003834p-108f, 0.0f, 0.0f, 0x1.a9886p-125f,
     0x1.8a4b14p-47f, 0x1.67712ap-11f, 0.0f, 0.0f, 0x1.101bb8p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a8d52p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23b242p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f605ep-116f, 0x1.9ee68ap-92f, 0x1.93ccbp-38f, 0x1.edc1cep-89f,
     0x1.8fa6d2p-81f, 0x1.b8262ep-96f, 0x1.1efd66p-92f, 0.0f, 0.0f, 0x1.703968p-13f,
     0x1.a5c03ap-46f, 0x1.b443eap-62f, 0.0f, 0x1.6088b2p-77f, 0.0f, 0x1.86cdfp-6f,
     0x1.6e5e3cp-13f, 0.0f, 0x1.f729b6p-115f, 0x1.bbc6b2p-111f, 0.0f, 0.0f, 0.0f,
     0x1.58819ep-16f, 0x1.abf81ap-7f, 0.0f, 0.0f, 0.0f, 0x1.0e841cp-33f, 0.0f,
     0x1.c32534p-47f, 0x1.3555aep-9f, 0.0f, 0.0f, 0.0f, 0x1.06224p-114f,
     0x1.dc098p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.980bcp-85f,
     0x1.0b1942p-62f, 0x1.bda056p-47f, 0.0f, 0x1.67d4d8p-47f, 0x1.58c66cp-43f, 0.0f,
     0x1.21bff8p-11f, 0.0f, 0.0f, 0.0f, 0x1.1a3fcep-6f, 0x1.dd68cep-7f, 0.0f,
     0x1.49625ep-79f, 0x1p0f, 0x1.ae2deep-114f, 0x1.d3af6cp-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.194bp-101f, 0.0f, 0x1.a99508p-48f, 0x1.662cfcp-63f,
     0.0f, 0.0f, 0x1.5e5824p-102f, 0.0f, 0x1.f64fccp-57f, 0x1.be873ep-9f, 0.0f,
     0x1.faff92p-121f, 0.0f, 0x1.0321bap-118f, 0x1.f964c4p-25f, 0x1.a97dc2p-60f, 0.0f,
     0x1.ffc06cp-4f, 0x1.22752ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5aaadp-111f,
     0x1.27fac2p-82f, 0x1.50fd32p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.320464p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8dc94ep-104f, 0.0f, 0x1.150044p-85f, 0.0f, 0.0f,
     0x1.abde94p-49f, 0x1.c6bdbep-39f, 0x1.31e16cp-96f, 0x1.656622p-107f,
     0x1.6d808ap-2f, 0.0f, 0x1.c2af7ap-72f, 0x1.cc35cep-55f, 0x1.50fce4p-35f, 0.0f,
     0.0f, 0x1.8c5d1ap-8f, 0x1.5f6412p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df978cp-65f,
     0.0f, 0.0f, 0x1.beb322p-76f, 0x1.3ce646p-2f, 0x1.7402eep-116f, 0x1p0f,
     0x1.175ed2p-77f, 0.0f, 0.0f, 0.0f, 0x1.801f18p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07d484p-123f, 0.0f, 0.0f, 0x1.9625a6p-121f, 0x1.6462dap-9f, 0x1.f48f3p-75f,
     0x1.ba1616p-92f, 0x1.c3e29p-8f, 0.0f, 0.0f, 0x1.079462p-97f, 0x1.c50d42p-8f,
     0.0f, 0x1.3d497p-3f, 0.0f, 0.0f, 0x1.dba39cp-38f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f33ba2p-109f, 0.0f, 0.0f, 0.0f, 0x1.68ab38p-113f,
     0x1.9c2ba2p-43f, 0.0f, 0x1.f61a9ap-125f, 0.0f, 0.0f, 0.0f, 0x1.5399aap-102f,
     0.0f, 0.0f, 0x1.ced884p-84f, 0.0f, 0x1.42f90cp-14f, 0.0f, 0x1.ba8ce4p-72f,
     0x1.76e4f6p-2f, 0x1.9deed4p-51f, 0x1.065978p-96f, 0x1.e13024p-123f,
     0x1.fb7864p-67f, 0x1.e8f956p-44f, 0.0f, 0.0f, 0.0f, 0x1.53c1eep-51f, 0.0f, 0.0f,
     0x1.276c84p-68f, 0x1.99bc4ap-14f, 0x1.f18704p-121f, 0x1.5fd798p-8f, 0.0f,
     0x1.bff72ap-2f, 0x1.c1c1e8p-61f, 0.0f, 0x1.d9f74p-44f, 0.0f, 0x1.27f37cp-100f,
     0x1.c1176ap-15f, 0.0f, 0.0f, 0.0f, 0x1.7bafap-102f, 0.0f, 0x1.096acap-36f, 0.0f,
     0.0f, 0.0f, 0x1.be6d8ep-71f, 0.0f, 0x1.01f236p-31f, 0x1.f9a288p-92f,
     0x1.2406ecp-99f, 0x1.148522p-65f, 0.0f, 0.0f, 0x1.b7672ap-121f, 0x1.b7b0cap-85f,
     0.0f, 0.0f, 0x1.38a5c4p-44f, 0.0f, 0x1.da716p-52f, 0x1.1e0f76p-2f,
     0x1.3317a6p-87f, 0x1.fcc33ap-11f, 0x1.d17c3ep-15f, 0.0f, 0x1.c8126ep-36f,
     0x1.f2f8ecp-72f, 0.0f, 0x1.6896fap-96f, 0x1p0f, 0x1.cf2498p-103f,
     0x1.5ffb82p-53f, 0x1.0b3f16p-90f, 0x1.4ff736p-87f, 0.0f, 0x1.143feep-116f,
     0x1.791a64p-22f, 0x1.1f7642p-61f, 0.0f, 0x1.66109cp-26f, 0.0f, 0x1.020ceep-3f,
     0x1.783c3cp-113f, 0x1.bceff6p-90f, 0.0f, 0.0f, 0x1.385596p-17f, 0.0f,
     0x1.8d0944p-48f, 0.0f, 0.0f, 0x1.4d5766p-95f, 0x1.8900cap-117f, 0x1.41db42p-7f,
     0.0f, 0x1.48b6b4p-26f, 0.0f, 0x1.7b646cp-115f, 0.0f, 0.0f, 0.0f, 0x1.3fc6dep-93f,
     0.0f, 0.0f, 0.0f, 0x1.89628p-63f, 0x1.6122c4p-5f, 0.0f, 0x1.7152aep-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71b9c2p-100f, 0x1.3566aap-71f, 0x1.ea5736p-23f,
     0x1.19307ap-117f, 0x1.da88e6p-8f, 0.0f, 0x1.13bd6p-31f, 0.0f, 0x1.03e48cp-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.686156p-116f, 0x1.99c2e2p-14f, 0.0f,
     0x1.3be9ecp-95f, 0x1.e5a23ap-111f, 0.0f, 0x1.63909p-84f, 0x1.823d26p-19f, 0.0f,
     0x1.1b3bcp-9f, 0x1.fc582p-3f, 0.0f, 0x1.e020bap-12f, 0x1.e815e6p-124f,
     0x1.3953a6p-72f, 0.0f, 0.0f, 0x1.7dc1cap-62f, 0x1.9e129cp-39f, 0.0f,
     0x1.60d6dp-96f, 0.0f, 0x1.cbaea6p-76f, 0x1.7b4d66p-27f, 0x1.e0118ap-123f, 0.0f,
     0.0f, 0x1.bee312p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.592ba2p-6f, 0x1.74a03p-35f,
     0x1.61fc8p-12f, 0.0f, 0x1.b71696p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.01d072p-58f, 0.0f, 0.0f, 0.0f, 0x1.00bcacp-59f, 0x1.8d7662p-118f,
     0x1.7302c4p-71f, 0x1.c63456p-91f, 0.0f, 0x1.72a31p-39f, 0.0f, 0x1.8ce412p-11f,
     0x1.da109ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ccd5p-55f, 0x1.f86bf8p-67f,
     0x1.ad2d5p-94f, 0.0f, 0x1.4a37c8p-126f, 0x1.085508p-122f, 0.0f, 0x1.a54a7cp-40f,
     0.0f, 0x1.04cc32p-67f, 0.0f, 0x1.21ec64p-93f, 0x1.cbb936p-93f, 0.0f,
     0x1.18bd2cp-108f, 0x1.fd6192p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.629112p-43f, 0x1.0faa2ap-81f, 0.0f, 0x1.9cf61ep-47f,
     0x1.51f71ep-31f, 0x1.f53f02p-106f, 0x1.3e5502p-104f, 0x1.4c986ap-16f, 0.0f, 0.0f,
     0x1.f1f548p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad3da6p-68f, 0.0f, 0.0f,
     0x1.523552p-72f, 0.0f, 0x1.3c7528p-82f, 0x1.da0272p-124f, 0x1.3482b8p-89f, 0.0f,
     0.0f, 0x1.3fb992p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a8158p-105f,
     0x1.2a89aap-78f, 0x1.087efcp-110f, 0x1.3bfccep-10f, 0.0f, 0x1.76f4aap-51f,
     0x1.152f6p-89f, 0.0f, 0.0f, 0x1.d848e4p-112f, 0.0f, 0.0f, 0x1.73b6d2p-20f,
     0x1.f3cc7p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75ce5ep-30f, 0.0f, 0.0f,
     0x1.158f38p-48f, 0.0f, 0x1.a3921ep-27f, 0x1.43c1aep-83f, 0x1.26283cp-121f,
     0x1.d5fcep-123f, 0.0f, 0x1.268276p-107f, 0x1.a0953cp-37f, 0x1.a8b454p-88f,
     0x1.db491ap-79f, 0x1.d62f88p-88f, 0x1.93eaf8p-20f, 0.0f, 0x1.d8bc0ep-85f,
     0x1.13cc4ap-63f, 0.0f, 0.0f, 0x1.f90b9ep-119f, 0x1.da8a32p-36f, 0.0f,
     0x1.5da234p-14f, 0x1.4fcb16p-72f, 0x1.ada35ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7404b6p-64f, 0x1.c1d95ap-92f, 0x1.716efp-88f, 0x1.f3a89cp-62f,
     0x1.2e040ap-111f, 0x1.70e6c2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8047e4p-67f,
     0.0f, 0x1.9404eap-57f, 0.0f, 0.0f, 0x1.f9aeb2p-53f, 0.0f, 0x1.9c165p-3f,
     0x1.7b82b6p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3db044p-61f, 0x1.7e0af8p-3f,
     0x1.7cbdaap-114f, 0.0f, 0x1.eb136ap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d1e81ap-65f, 0.0f, 0x1.4f7d0ap-53f, 0x1.4e479ep-118f, 0x1.c824eap-39f,
     0.0f, 0x1.973a72p-106f, 0x1.a7a0bcp-10f, 0x1.d2e956p-102f, 0.0f, 0x1.78e50ep-86f,
     0.0f, 0.0f, 0.0f, 0x1.55d44ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f31af4p-11f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.178538p-10f, 0x1.924566p-4f,
     0x1.cacf3cp-124f, 0.0f, 0x1.d20d7cp-26f, 0.0f, 0x1.e19fc2p-104f, 0.0f,
     0x1.520312p-96f, 0x1.9319bp-73f, 0.0f, 0.0f, 0x1.2f4ca6p-80f, 0x1.af5724p-86f,
     0.0f, 0.0f, 0x1.e5ce6p-57f, 0.0f, 0.0f, 0x1.302e94p-72f, 0.0f, 0.0f, 0.0f,
     0x1.cf1d4p-57f, 0x1.2b385p-27f, 0x1.aebdeap-16f, 0.0f, 0.0f, 0x1.5731bp-51f,
     0x1.c895a4p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68e48ep-6f, 0.0f, 0x1.ccc5dcp-5f,
     0.0f, 0x1.22742ep-40f, 0x1.35279p-61f, 0x1.eacdaap-109f, 0x1.f01d7cp-115f,
     0x1.1707c2p-23f, 0x1.5947a4p-113f, 0x1.0283bep-11f, 0x1.493e5cp-6f,
     0x1.6f74cep-30f, 0x1.c80982p-30f, 0.0f, 0.0f, 0.0f, 0x1.388fbp-6f, 0.0f,
     0x1.67fe36p-76f, 0x1.a6b37ap-107f, 0.0f, 0x1.bca3fp-99f, 0x1.dfe72ep-9f, 0.0f,
     0x1.adce64p-98f, 0.0f, 0x1.9ac8f4p-64f, 0.0f, 0.0f, 0x1.0ac028p-7f, 0.0f,
     0x1.e6d89cp-19f, 0.0f, 0x1.6fc20ap-77f, 0x1.cded4p-80f, 0.0f, 0x1.2331b4p-104f,
     0x1.8d8bd8p-96f, 0.0f, 0x1.f31fep-92f, 0x1.62453ep-85f, 0x1.bc377ap-37f, 0.0f,
     0.0f, 0x1.b39ed4p-77f, 0.0f, 0x1.490fa2p-52f, 0.0f, 0x1.6c9c66p-100f, 0.0f, 0.0f,
     0x1.8ffdf8p-96f, 0.0f, 0.0f, 0x1.beb49cp-27f, 0x1.eddaf4p-47f, 0x1.a9740ep-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c65bap-3f, 0x1.9566acp-52f,
     0x1.0ff734p-70f, 0.0f, 0.0f, 0x1.320638p-114f, 0x1.e13608p-59f, 0x1.d2d4dap-27f,
     0.0f, 0x1.9eedf2p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30512ap-119f,
     0.0f, 0x1.b54ed8p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c8548p-115f, 0.0f,
     0x1.1ce87ap-26f, 0x1.31cab2p-111f, 0.0f, 0x1.ada0fap-76f, 0x1.227ca4p-114f, 0.0f,
     0.0f, 0.0f, 0x1.8510e4p-53f, 0x1.ee927p-117f, 0x1.1598e2p-1f, 0.0f, 0.0f,
     0x1.e7b366p-43f, 0x1.5c3fbap-102f, 0.0f, 0x1.e4dd58p-91f, 0x1.13f4e4p-124f, 0.0f,
     0x1.7e579p-38f, 0.0f, 0.0f, 0x1.426fa2p-65f, 0x1.bebd6cp-104f, 0.0f,
     0x1.833a8ap-53f, 0.0f, 0.0f, 0x1.7701f8p-21f, 0x1.dc52e4p-34f, 0x1.974bf2p-4f,
     0x1.c3cdc6p-25f, 0x1.00c6acp-17f, 0.0f, 0.0f, 0x1.2f790cp-14f, 0x1.76d5fcp-68f,
     0x1.3533bap-112f, 0.0f, 0x1.030fe2p-126f, 0.0f, 0x1.5b62e2p-98f,
     0x1.5eaecep-115f, 0.0f, 0x1.c2c904p-19f, 0x1.4785c2p-20f, 0x1.afa87ap-68f,
     0x1.97101ep-87f, 0x1.f4f152p-12f, 0x1.75dde6p-110f, 0.0f, 0.0f, 0.0f,
     0x1.66f586p-119f, 0x1.15b1eep-40f, 0.0f, 0x1.d8d282p-111f, 0x1.d2b93p-70f, 0.0f,
     0.0f, 0x1.be54a2p-56f, 0x1.c8bafcp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08b716p-43f,
     0x1.f61b8p-66f, 0x1.ff04d2p-81f, 0x1.b0aa16p-107f, 0x1.db7924p-89f, 0.0f,
     0x1.348a66p-9f, 0x1.a3550ep-118f, 0x1.27957ap-63f, 0.0f, 0x1.5cfc82p-92f, 0.0f,
     0x1.2680b6p-126f, 0x1.d2ad74p-71f, 0.0f, 0x1.e032bcp-9f, 0.0f, 0.0f,
     0x1.dfc526p-124f, 0x1.7b2358p-99f, 0.0f, 0x1.0fcc68p-23f, 0x1.b8841ap-7f, 0.0f,
     0x1.89717cp-43f, 0x1.e907f4p-9f, 0x1.f0fe76p-45f, 0.0f, 0.0f, 0.0f,
     0x1.936b2cp-125f, 0x1.132caep-81f, 0x1.1f1a04p-21f, 0.0f, 0x1.5f87bap-60f,
     0x1.d53a74p-110f, 0x1.b0f962p-75f, 0.0f, 0x1.aa2bc8p-40f, 0x1.929754p-105f, 0.0f,
     0.0f, 0.0f, 0x1.6cf904p-30f, 0x1.074c5p-31f, 0.0f, 0x1.3d4a94p-98f, 0.0f,
     0x1.75732ap-62f, 0.0f, 0.0f, 0.0f, 0x1.338e6ep-113f, 0x1.76c05ap-92f, 0.0f, 0.0f,
     0.0f, 0x1.b9c59ep-65f, 0.0f, 0.0f, 0x1.6a1086p-60f, 0.0f, 0x1.cdceaep-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83f826p-95f, 0x1.fc6044p-2f, 0.0f, 0x1.bd3de4p-123f, 0.0f,
     0x1.d3a668p-5f, 0.0f, 0x1.b89b3ep-72f, 0.0f, 0x1.fccfd4p-118f, 0.0f,
     0x1.8f6022p-104f, 0.0f, 0x1.5a8642p-28f, 0.0f, 0x1.82539cp-32f, 0.0f, 0.0f,
     0x1.0c14eep-74f, 0.0f, 0x1.9051ecp-84f, 0.0f, 0x1.1b0cc2p-74f, 0x1.75b312p-12f,
     0.0f, 0x1.a9e16p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b3f72p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4e80d4p-9f, 0x1.6662eep-112f, 0.0f, 0.0f, 0.0f, 0x1.846432p-118f,
     0x1.6821d4p-16f, 0x1.bb0d14p-122f, 0.0f, 0x1.8a4184p-85f, 0x1.612d88p-105f,
     0x1.9de5b8p-79f, 0x1.f82148p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.699bd8p-1f, 0.0f,
     0x1.c4ab4ap-100f, 0x1.04933ep-40f, 0x1.299d08p-15f, 0x1.d97242p-4f, 0.0f,
     0x1.1c8154p-18f, 0.0f, 0x1.a13d64p-45f, 0.0f, 0.0f, 0x1.a6cab4p-113f, 0.0f, 0.0f,
     0x1.0129d2p-99f, 0.0f, 0x1.dad3fep-107f, 0.0f, 0.0f, 0x1.75ef86p-66f,
     0x1.c7f8e6p-91f, 0x1.3f6ab8p-93f, 0x1.5c8df2p-18f, 0x1.0e96fep-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b9e562p-40f, 0x1.d275b6p-66f, 0x1.49263ap-29f,
     0x1.dfb45cp-67f, 0.0f, 0x1.8b8a7ap-113f, 0.0f, 0.0f, 0x1.30964ap-73f,
     0x1.531dp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfc4eep-5f, 0.0f
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
            tmp2 = Sleef_finz_nextafterf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_nextafterf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_nextafterf1_purecfma bench acc %a\n", global_bench_acc);
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
