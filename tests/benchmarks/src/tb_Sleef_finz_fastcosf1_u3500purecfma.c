/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastcosf1_u3500purecfma.c --function \
 *     Sleef_finz_fastcosf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.e245ecp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7a4c6p-41f, 0.0f,
     0x1.29332ap-68f, 0x1.c35caep-72f, 0.0f, 0x1.4571bep-50f, 0x1.264d5cp-18f,
     0x1.6a9074p-103f, 0.0f, 0x1.bdd9dp-30f, 0x1.ad7ccp-26f, 0.0f, 0x1.95ec2ep-84f,
     0x1.8a1d7p-98f, 0.0f, 0x1.219d86p-4f, 0x1.546d2ep-45f, 0.0f, 0.0f,
     0x1.b44c68p-29f, 0x1.462154p-65f, 0.0f, 0x1.46befep-109f, 0.0f, 0.0f, 0.0f,
     0x1.cb85f8p-96f, 0x1.b1ab08p-110f, 0x1.193e3p-118f, 0.0f, 0.0f, 0.0f,
     0x1.2d5cf8p-94f, 0.0f, 0.0f, 0.0f, 0x1.4f27eap-92f, 0.0f, 0x1.d0c49cp-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.030054p-121f, 0x1.07fad8p-75f, 0.0f, 0x1.29fcfep-19f, 0.0f,
     0x1.71e8eep-99f, 0.0f, 0x1.bb48acp-19f, 0.0f, 0x1.f49376p-56f, 0x1.cb67e8p-63f,
     0.0f, 0.0f, 0.0f, 0x1.5fbcdap-120f, 0x1.070b8ep-107f, 0.0f, 0x1.3c1342p-113f,
     0x1.8ae38ep-108f, 0x1.2cef5ap-96f, 0x1.a98636p-38f, 0x1.e9efd2p-119f, 0.0f,
     0x1.d4dc72p-79f, 0x1.fdd0aap-53f, 0.0f, 0x1.368fbep-96f, 0.0f, 0.0f,
     0x1.1b626ep-110f, 0.0f, 0x1.b27e14p-62f, 0x1.82f6d6p-45f, 0.0f, 0x1.26a4c2p-101f,
     0x1.4f006p-34f, 0x1.b63848p-79f, 0.0f, 0x1.5ac6ccp-95f, 0.0f, 0.0f,
     0x1.03dddp-81f, 0x1.72af38p-125f, 0x1.04c426p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c3baap-17f, 0x1.fa0128p-20f, 0x1.a4e706p-36f, 0.0f, 0.0f,
     0x1.de7e28p-32f, 0.0f, 0.0f, 0x1.f5c78p-41f, 0.0f, 0.0f, 0.0f, 0x1.c8bf4p-109f,
     0x1.27dce4p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95b16ap-68f,
     0x1.c460b4p-123f, 0.0f, 0.0f, 0.0f, 0x1.d1ed5ep-31f, 0.0f, 0x1.4d8094p-32f,
     0x1.ef5efap-29f, 0x1.93bb66p-82f, 0x1.80f524p-103f, 0x1.8dd4b6p-35f,
     0x1.595ac8p-58f, 0x1.d8f312p-82f, 0x1.3a690ap-17f, 0.0f, 0x1.585406p-76f,
     0x1.cd128ap-49f, 0.0f, 0x1.bc46e8p-97f, 0.0f, 0.0f, 0x1.0da61ep-36f,
     0x1.6bb694p-79f, 0.0f, 0.0f, 0x1.53b784p-52f, 0x1.08fb6ap-85f, 0x1.9c0c9ap-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.03199p-43f, 0.0f, 0.0f, 0.0f, 0x1.047232p-28f, 0.0f,
     0x1.46d5b8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19b5d6p-7f, 0x1.57b808p-50f,
     0x1.d09118p-91f, 0.0f, 0.0f, 0.0f, 0x1.0a50e8p-29f, 0x1.60a104p-38f, 0.0f,
     0x1.9a1e92p-72f, 0.0f, 0x1.a74fbap-103f, 0.0f, 0.0f, 0x1.97a6bap-25f,
     0x1.39d008p-95f, 0x1.c1c506p-55f, 0x1.f48a46p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c08238p-102f, 0x1.564a9p-53f, 0x1.227ae8p-68f, 0x1.c5034cp-125f,
     0x1.8f05cap-70f, 0x1.ecf33p-116f, 0.0f, 0.0f, 0.0f, 0x1.b5dd5ap-115f,
     0x1.85ded2p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9302fap-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.73d3f2p-77f, 0x1.8344ep-29f, 0x1.443acp-1f,
     0x1.0e8e34p-18f, 0x1.af2ebap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb0bd6p-80f, 0.0f,
     0x1.b5f09ap-6f, 0.0f, 0x1.bf4e76p-38f, 0.0f, 0x1.062c5ep-98f, 0x1p0f,
     0x1.2f5ebep-110f, 0.0f, 0x1.9c7302p-41f, 0x1.c4e4cep-71f, 0x1.ed5886p-21f, 0.0f,
     0x1.25708p-91f, 0.0f, 0x1.4f209ep-38f, 0.0f, 0.0f, 0x1.35fc88p-21f,
     0x1.86b546p-22f, 0.0f, 0x1.e1d112p-76f, 0.0f, 0x1.d7103p-50f, 0.0f,
     0x1.6fd29ep-58f, 0.0f, 0x1.00df52p-38f, 0.0f, 0x1.85b4aap-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bad7dp-50f, 0x1.46f204p-79f,
     0x1.14a64ap-126f, 0x1.6d501ep-8f, 0x1.95d062p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.305c4p-6f, 0x1.440fa4p-85f, 0x1.88dce4p-56f, 0.0f, 0.0f, 0.0f,
     0x1.68b166p-36f, 0.0f, 0x1.46c5eep-1f, 0x1.b5f7dep-2f, 0.0f, 0.0f, 0.0f,
     0x1.bd90dcp-35f, 0x1.b20f82p-78f, 0.0f, 0x1.2b1e14p-69f, 0.0f, 0x1.dc3a0cp-124f,
     0x1.ee76c6p-93f, 0x1.9b8e1ep-35f, 0.0f, 0x1.cb8f3ap-115f, 0.0f, 0.0f, 0.0f,
     0x1.5fa666p-12f, 0x1.8a4c9ep-6f, 0x1.8c583cp-38f, 0.0f, 0x1.e2386ap-86f, 0.0f,
     0x1.9eac18p-26f, 0.0f, 0.0f, 0.0f, 0x1.312a82p-109f, 0x1.ac38e6p-119f, 0.0f,
     0.0f, 0x1.039ab2p-10f, 0.0f, 0.0f, 0x1.fca2cp-67f, 0.0f, 0x1.79c664p-7f,
     0x1.136d24p-6f, 0.0f, 0.0f, 0x1.7b5862p-31f, 0x1.57da7ep-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e36e3ap-44f, 0.0f, 0x1.445654p-69f, 0x1.63313p-108f, 0.0f,
     0.0f, 0x1.724ba4p-121f, 0.0f, 0.0f, 0x1.3f1a66p-11f, 0.0f, 0.0f, 0.0f,
     0x1.8644c2p-14f, 0.0f, 0.0f, 0.0f, 0x1.e7528p-111f, 0.0f, 0x1.e6492cp-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8f456p-99f, 0x1.a506a4p-85f,
     0x1.0005f4p-5f, 0.0f, 0.0f, 0x1.239e9ep-85f, 0x1.933e22p-125f, 0x1.af935p-94f,
     0x1.3b1634p-94f, 0.0f, 0.0f, 0x1.6b6e9ap-3f, 0.0f, 0.0f, 0x1.12c11ap-124f,
     0x1.52ad7p-18f, 0x1.d9dfaep-49f, 0.0f, 0x1.8226ccp-11f, 0.0f, 0.0f,
     0x1.6695acp-100f, 0x1.c88f52p-14f, 0x1.bf45ecp-2f, 0.0f, 0x1.6859bep-83f,
     0x1.1b7c82p-90f, 0x1.166c1ep-113f, 0x1.b60f74p-85f, 0.0f, 0.0f, 0x1.fe1b8cp-29f,
     0x1.add204p-34f, 0x1.bfb62cp-115f, 0.0f, 0.0f, 0.0f, 0x1.8726dp-16f, 0.0f,
     0x1.83712cp-50f, 0.0f, 0x1.12fc64p-115f, 0.0f, 0x1.a6786ap-6f, 0x1.68b144p-126f,
     0x1.be6ap-46f, 0x1.85fe92p-87f, 0.0f, 0.0f, 0x1.2f0d2p-85f, 0.0f, 0x1.7d96d8p-2f,
     0x1.1fec04p-114f, 0x1.f49c5ap-69f, 0.0f, 0x1.dd706ep-100f, 0x1.50edbap-61f,
     0x1.f496b6p-25f, 0x1.a0395ep-52f, 0x1.598f44p-46f, 0x1.68c18p-70f, 0.0f, 0.0f,
     0x1.8d721ep-91f, 0.0f, 0x1.2e44ecp-66f, 0x1.590a8ap-27f, 0.0f, 0.0f,
     0x1.7d7df2p-81f, 0.0f, 0x1.c6e312p-16f, 0.0f, 0x1.406c24p-50f, 0x1.c73522p-31f,
     0.0f, 0x1.65b966p-89f, 0.0f, 0x1.8fdaf4p-73f, 0x1.d5c4ap-79f, 0.0f, 0.0f, 0.0f,
     0x1.3aeb5ep-40f, 0.0f, 0.0f, 0x1.64047ep-48f, 0.0f, 0.0f, 0x1.fab7f4p-114f,
     0x1.d6d766p-41f, 0.0f, 0x1.3949aep-109f, 0.0f, 0.0f, 0x1.2a2ebap-119f,
     0x1.3298ecp-107f, 0.0f, 0.0f, 0x1.8e1d2ap-58f, 0.0f, 0.0f, 0x1.e81d1ep-29f,
     0x1.92b052p-34f, 0.0f, 0.0f, 0.0f, 0x1.6d2e26p-71f, 0.0f, 0.0f, 0x1.acc43ep-98f,
     0.0f, 0.0f, 0x1.3efdbcp-67f, 0.0f, 0.0f, 0.0f, 0x1.a72c2p-71f, 0.0f,
     0x1.2c3b8ap-113f, 0x1.ddd6acp-102f, 0x1.f8ea9cp-58f, 0x1.0b6164p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ab93f2p-96f, 0x1.1b10dep-111f, 0x1.48d2fep-84f, 0.0f,
     0x1.b7ba6ep-35f, 0.0f, 0x1.f318f8p-53f, 0x1.370a0ap-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f74428p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f7b3cp-78f,
     0x1.93970cp-105f, 0.0f, 0.0f, 0x1.dbe9fap-55f, 0.0f, 0.0f, 0x1.b6d554p-95f,
     0x1.5c766p-11f, 0.0f, 0x1.fc673p-76f, 0.0f, 0.0f, 0x1.c92fap-46f,
     0x1.536eb8p-53f, 0x1.c304f6p-80f, 0.0f, 0.0f, 0x1.6ab574p-1f, 0.0f, 0.0f,
     0x1.a89d84p-56f, 0x1.4b6f42p-58f, 0x1.0261f4p-75f, 0.0f, 0x1.724d9p-9f,
     0x1.5643d4p-1f, 0.0f, 0.0f, 0x1.a22daep-84f, 0x1.18b2b4p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e1aff8p-59f, 0.0f, 0.0f, 0.0f, 0x1.f9a98ap-78f, 0x1.36239ap-20f,
     0x1.145feep-97f, 0x1.efeeacp-66f, 0x1.bd7fa6p-87f, 0.0f, 0x1.daf766p-49f, 0.0f,
     0x1.eda51ep-48f, 0.0f, 0.0f, 0.0f, 0x1.4715f6p-15f, 0.0f, 0x1.0638cap-117f,
     0x1.44bcd2p-41f, 0x1.a146eap-45f, 0x1.814774p-58f, 0.0f, 0x1.78b0cp-36f,
     0x1.117ea6p-91f, 0.0f, 0.0f, 0.0f, 0x1.fb4da6p-51f, 0.0f, 0.0f, 0.0f,
     0x1.65307ap-47f, 0x1.c0610ap-27f, 0.0f, 0.0f, 0.0f, 0x1.4b4664p-48f, 0.0f,
     0x1.d36e2cp-109f, 0.0f, 0.0f, 0x1.efdac2p-50f, 0x1.242e4cp-126f, 0x1.f6ebfp-41f,
     0x1.22d53ep-48f, 0x1.ecf7fep-103f, 0x1.8ef592p-121f, 0.0f, 0.0f, 0.0f,
     0x1.2af8acp-19f, 0.0f, 0.0f, 0x1.93b0eep-13f, 0.0f, 0x1.43dacap-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f9ed44p-15f, 0.0f, 0x1.dfee18p-53f, 0x1.efee16p-28f,
     0x1.16563ep-1f, 0.0f, 0x1.bc8406p-26f, 0x1.95b628p-116f, 0.0f, 0x1.931b58p-111f,
     0.0f, 0x1.8cec8ap-9f, 0x1.57bab6p-81f, 0.0f, 0x1.a0c55p-61f, 0.0f, 0.0f, 0.0f,
     0x1.411a4p-112f, 0x1.98ad76p-69f, 0x1.d28fe6p-87f, 0x1.c98a28p-57f,
     0x1.e9b9f6p-49f, 0x1.457c9ep-72f, 0x1.cea8f4p-22f, 0x1.7e7072p-63f, 0.0f,
     0x1.937d64p-116f, 0.0f, 0x1.169792p-70f, 0x1.5f48ap-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.91f6d2p-5f, 0.0f, 0.0f, 0.0f, 0x1.85295p-6f, 0x1.74c08ep-45f, 0.0f,
     0x1.bfcfcap-2f, 0x1.172cep-114f, 0x1.e0385p-61f, 0.0f, 0.0f, 0x1.59aep-5f, 0.0f,
     0x1.d427d6p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4df56p-29f, 0x1.f8fcb8p-68f, 0.0f,
     0x1.c08d26p-71f, 0.0f, 0x1.4aaa98p-33f, 0x1.e8e6c6p-41f, 0x1.3d5b0cp-41f,
     0x1.00a246p-37f, 0.0f, 0x1.9786f2p-3f, 0x1.2c8b5ep-2f, 0.0f, 0.0f, 0.0f,
     0x1.6f083ap-60f, 0.0f, 0.0f, 0.0f, 0x1.279a5ap-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.64606p-119f, 0.0f, 0x1.ae41dcp-45f, 0x1.9738e6p-14f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.888868p-32f, 0x1.276b0ep-8f, 0.0f, 0x1.b27812p-40f, 0.0f, 0.0f, 0.0f,
     0x1.4f6404p-22f, 0x1.bbb81cp-91f, 0x1.1ef8f8p-34f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6b0ccp-112f, 0x1.89d1f8p-122f, 0x1.71f018p-107f,
     0x1.d70f98p-119f, 0.0f, 0x1.c47b84p-96f, 0x1.52e068p-50f, 0x1.fc5028p-46f,
     0x1.008aeep-30f, 0.0f, 0.0f, 0x1.bd9e26p-123f, 0x1.ff715ep-64f, 0x1.cfcc12p-106f,
     0.0f, 0.0f, 0.0f, 0x1.06f6fcp-35f, 0x1.6f082ep-13f, 0.0f, 0.0f, 0x1.dd9df6p-109f,
     0.0f, 0x1.76cbfap-22f, 0.0f, 0x1.d5866p-21f, 0.0f, 0x1.8a935ep-78f,
     0x1.a0baecp-9f, 0.0f, 0.0f, 0x1.b9216ep-41f, 0.0f, 0.0f, 0x1.1f0a5ap-63f,
     0x1.5e4f74p-83f, 0.0f, 0x1.37ff26p-118f, 0.0f, 0.0f, 0.0f, 0x1.449ecap-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7918p-72f, 0.0f, 0x1.8a802p-19f,
     0.0f, 0x1.7ee51cp-40f, 0x1.ed8126p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be70fcp-7f, 0.0f, 0x1.78822cp-1f, 0.0f, 0x1.5101d6p-104f, 0x1.bdfe8p-68f,
     0x1.4e7aaap-104f, 0.0f, 0x1.489bp-57f, 0.0f, 0x1.cadc98p-68f, 0x1.734992p-58f,
     0.0f, 0x1.d6473p-75f, 0.0f, 0.0f, 0x1.bf2bdcp-24f, 0.0f, 0x1.4edb4ap-103f, 0.0f,
     0.0f, 0x1.d3d75p-112f, 0x1.115716p-27f, 0.0f, 0x1.e6a3dcp-47f, 0.0f,
     0x1.273dc6p-45f, 0x1.3ca2b6p-5f, 0x1.1265b8p-108f, 0x1.8cdc98p-86f, 0.0f, 0.0f,
     0x1.c54032p-96f, 0x1.b81a4ap-73f, 0x1.50a64cp-46f, 0x1.a03b9ep-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.edf2dcp-103f, 0.0f, 0.0f, 0x1.010f7cp-30f, 0x1.1ab09cp-78f, 0.0f,
     0.0f, 0.0f, 0x1.472884p-77f, 0x1.940fdep-93f, 0.0f, 0x1.3f15e8p-80f,
     0x1.98eb54p-47f, 0x1.014008p-30f, 0x1.11f30cp-37f, 0.0f, 0.0f, 0.0f,
     0x1.7bba2p-35f, 0.0f, 0.0f, 0.0f, 0x1.7f19e8p-42f, 0.0f, 0x1.f18b8ep-50f, 0.0f,
     0.0f, 0x1.d74134p-107f, 0x1.36efa2p-109f, 0.0f, 0.0f, 0x1.cd62d8p-32f, 0.0f,
     0x1.8d18ccp-17f, 0x1.167dep-45f, 0.0f, 0.0f, 0x1.886db8p-16f, 0.0f,
     0x1.c0f7d8p-7f, 0.0f, 0x1.9bfc7cp-56f, 0.0f, 0.0f, 0.0f, 0x1.302894p-83f, 0.0f,
     0.0f, 0.0f, 0x1.93ade4p-42f, 0x1.43feeep-66f, 0x1.80f078p-103f, 0x1.cef1cap-114f,
     0x1.a7889ep-1f, 0.0f, 0x1.a4fe58p-6f, 0.0f, 0x1.bc2d18p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aced6ep-28f, 0x1.67e124p-100f, 0x1.7fc0fap-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.07240ap-74f, 0x1.d2100ap-119f, 0x1.7a4d68p-90f, 0.0f, 0.0f, 0.0f,
     0x1.1c7368p-10f, 0x1.7fbfcp-81f, 0x1.f8a376p-124f, 0.0f, 0x1.1e83bep-32f,
     0x1.b1e338p-61f, 0x1.8ef3f8p-39f, 0x1.0f3928p-47f, 0.0f, 0x1.a466eep-48f, 0.0f,
     0x1.46fde4p-38f, 0x1.a1cf5p-8f, 0x1.a8b6f4p-11f, 0.0f, 0x1.260d8cp-77f, 0.0f,
     0x1.9a4f4ep-43f, 0.0f, 0x1.8455e2p-26f, 0x1.99bb78p-82f, 0.0f, 0x1.50281p-81f,
     0x1.45ff42p-11f, 0.0f, 0x1.25ee9ap-41f, 0x1.4a6e6ap-112f, 0x1.68ea8ep-85f,
     0x1.919e6cp-86f, 0x1.344dd8p-123f, 0.0f, 0x1.5a7234p-29f, 0x1.0312e6p-110f,
     0x1.fb0dap-6f, 0x1.41c8dep-10f, 0.0f, 0x1.94905cp-114f, 0.0f, 0.0f,
     0x1.963854p-47f, 0x1.2cdf68p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.039986p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc4092p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e67ef2p-24f, 0.0f, 0x1.6ae8fep-20f, 0x1.82fa26p-79f, 0.0f,
     0x1.194f24p-94f, 0x1.2bc18p-66f, 0.0f, 0.0f, 0x1.816c6ep-12f, 0x1.4829c2p-53f,
     0.0f, 0x1.134088p-3f, 0x1.a01336p-118f, 0.0f, 0x1.f3e22ep-94f, 0.0f,
     0x1.19c872p-75f, 0x1.b1fcfcp-64f, 0.0f, 0x1.0d0d96p-17f, 0x1.0898eap-97f,
     0x1.2b10fap-77f, 0x1.3f8f82p-93f, 0.0f, 0.0f, 0x1.609026p-20f, 0.0f,
     0x1.7a862ep-103f, 0x1.809fap-35f, 0x1.49a93p-109f, 0x1.8b6afap-111f,
     0x1.c54b8cp-28f, 0x1.fba632p-44f, 0.0f, 0x1.168e0ep-22f, 0.0f, 0x1.f87abcp-13f,
     0x1.3d129cp-86f, 0x1p0f, 0x1.7a898cp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.da57d8p-42f, 0x1.0092b2p-59f, 0.0f, 0x1.990ceep-119f, 0x1.fa0fe8p-61f,
     0.0f, 0x1.e3426p-7f, 0x1.552eaap-124f, 0.0f, 0x1.b6093cp-93f, 0x1.f69754p-12f,
     0.0f, 0x1.1caa14p-79f
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
            tmp1 = Sleef_finz_fastcosf1_u3500purecfma(tmp0);
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
    printf("Sleef_finz_fastcosf1_u3500purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fastcosf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
