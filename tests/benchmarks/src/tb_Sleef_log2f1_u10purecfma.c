/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f1_u10purecfma.c --function \
 *     Sleef_log2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.4b83eap-91f, 0.0f, 0x1.e9f11p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c005e4p-26f, 0.0f, 0x1.1c5d1p-33f, 0.0f, 0x1.0b35aep-56f, 0x1.4cbe78p-125f,
     0x1.0c0f02p-87f, 0.0f, 0x1.396c7ap-43f, 0x1.98eedcp-38f, 0.0f, 0x1.33c816p-34f,
     0x1.59c346p-75f, 0x1.00e7dap-22f, 0x1.33b5c2p-75f, 0x1.66ed4ep-73f,
     0x1.d73a7ep-126f, 0.0f, 0x1.77951cp-55f, 0.0f, 0x1.c831ccp-77f, 0x1.6c7372p-93f,
     0x1.05db22p-75f, 0x1.2a3c38p-4f, 0.0f, 0.0f, 0x1.eb50f6p-25f, 0x1.aefec4p-8f,
     0x1.fc13d2p-6f, 0x1.bea99p-114f, 0.0f, 0x1.e2dd9cp-85f, 0x1.0b4c2p-117f, 0.0f,
     0x1.c0c3bap-67f, 0x1.bab5b8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b2c42p-11f,
     0x1.8211b8p-56f, 0x1.bd3696p-17f, 0.0f, 0.0f, 0x1.f4c322p-107f, 0x1.3d51b4p-60f,
     0.0f, 0x1.794f32p-115f, 0x1.3811dp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa62d8p-116f, 0x1.75e7dp-113f, 0x1.609178p-76f, 0.0f, 0.0f, 0x1.7b1132p-29f,
     0x1.50ed8ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad6f62p-6f, 0x1.f2b332p-50f, 0.0f,
     0x1.1baca2p-105f, 0x1.b7f99cp-106f, 0.0f, 0.0f, 0.0f, 0x1.32355ep-116f,
     0x1.2ab598p-30f, 0x1.a42c1ap-71f, 0.0f, 0.0f, 0x1.330bd4p-31f, 0x1.0ad43ep-89f,
     0x1.542f54p-107f, 0x1.bb1768p-10f, 0.0f, 0.0f, 0.0f, 0x1.e851dap-114f,
     0x1.03ea86p-97f, 0x1.a9f7cep-13f, 0.0f, 0x1.89c1ecp-66f, 0.0f, 0x1.27aa0cp-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34d40ep-110f, 0.0f, 0.0f, 0x1.f22744p-105f, 0.0f,
     0x1.74f354p-115f, 0.0f, 0x1.a1f6a8p-25f, 0x1.dbfb18p-21f, 0x1.6ead02p-24f,
     0x1.2988c4p-76f, 0.0f, 0.0f, 0.0f, 0x1.2fc2fp-120f, 0x1.4db886p-98f,
     0x1.08ba7cp-21f, 0x1.6ce4p-54f, 0.0f, 0x1.28a684p-1f, 0x1.ee1956p-30f,
     0x1.e61b96p-89f, 0.0f, 0x1.8475a2p-116f, 0.0f, 0.0f, 0x1.5c5072p-77f,
     0x1.7552fp-6f, 0x1.2b9e98p-38f, 0.0f, 0.0f, 0.0f, 0x1.233f7cp-2f,
     0x1.88bf08p-72f, 0x1.1c8a94p-78f, 0x1.2f6f68p-5f, 0x1.526b78p-48f,
     0x1.19ad0ep-17f, 0.0f, 0x1.be0bdap-121f, 0.0f, 0.0f, 0.0f, 0x1.c40626p-25f,
     0x1.d66eaap-94f, 0.0f, 0x1.fccef6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f1bb6p-87f,
     0.0f, 0x1.53994ap-105f, 0x1.574d76p-113f, 0.0f, 0.0f, 0.0f, 0x1.085fbep-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.04433p-57f, 0x1.eade6p-18f, 0x1.398382p-120f,
     0x1.c3ab18p-114f, 0.0f, 0x1.f312aap-58f, 0x1.52492ap-85f, 0x1.a6ab84p-51f, 0.0f,
     0.0f, 0x1.c44bacp-70f, 0.0f, 0.0f, 0x1p0f, 0x1.fca486p-110f, 0x1.bbaf7cp-34f,
     0.0f, 0x1.4b3988p-58f, 0.0f, 0x1.f006bcp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b4e4b6p-78f, 0x1.e77156p-97f, 0x1.1ae19p-25f, 0x1.99aef8p-20f,
     0x1.e8c7acp-105f, 0x1.4ea6d4p-60f, 0x1.2773cap-62f, 0x1.5cfb74p-39f, 0.0f,
     0x1.434034p-32f, 0.0f, 0.0f, 0.0f, 0x1.16c5aap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.122b84p-14f, 0.0f, 0.0f, 0x1.0b1becp-31f, 0x1.ae5074p-63f, 0.0f,
     0x1.0817b8p-19f, 0.0f, 0x1.c8dc3cp-51f, 0x1.7f51a8p-18f, 0x1.172572p-55f,
     0x1.51e88cp-54f, 0.0f, 0.0f, 0.0f, 0x1.92bee6p-98f, 0x1.43461ep-30f,
     0x1.915162p-49f, 0.0f, 0.0f, 0x1.ef74b6p-109f, 0x1.d9340ap-87f, 0.0f, 0.0f,
     0x1.74328p-6f, 0x1.543fdcp-20f, 0x1.eb8344p-114f, 0x1.bd3b6ep-93f,
     0x1.eea8e2p-6f, 0.0f, 0.0f, 0x1.a60b7p-106f, 0x1.814436p-63f, 0.0f,
     0x1.9ebf1ap-96f, 0x1.a2a072p-17f, 0x1.519f2cp-87f, 0.0f, 0.0f, 0x1.5979fap-103f,
     0.0f, 0.0f, 0x1.ab3e26p-82f, 0x1.db851ap-86f, 0.0f, 0x1.7eb4aap-7f, 0.0f,
     0x1.9f30d8p-100f, 0x1.0629d4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7bbdp-108f,
     0.0f, 0x1.2bfe02p-126f, 0.0f, 0.0f, 0x1.ea6e16p-122f, 0.0f, 0x1.ac3246p-114f,
     0.0f, 0.0f, 0x1.1b6d7ap-94f, 0x1.adbb5cp-3f, 0.0f, 0.0f, 0.0f, 0x1.bb4028p-20f,
     0.0f, 0x1.bb88bp-17f, 0.0f, 0x1.0e0022p-66f, 0x1.d8b9p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a11cfep-83f, 0.0f, 0x1.f6b1a4p-109f, 0x1.6c290ap-33f, 0x1.dd061p-66f,
     0.0f, 0x1.78c7d6p-55f, 0.0f, 0x1.c982e8p-114f, 0x1.68756p-91f, 0.0f, 0.0f, 0.0f,
     0x1.0af24cp-8f, 0x1.feb1b8p-62f, 0x1.d8ad0ep-26f, 0.0f, 0x1.7a3138p-36f, 0.0f,
     0x1.217236p-16f, 0.0f, 0.0f, 0.0f, 0x1.23714p-27f, 0.0f, 0x1.5ad15ap-84f, 0.0f,
     0x1.ae16aep-79f, 0x1.9c888ep-82f, 0x1.595e9ap-9f, 0x1.b40322p-81f, 0.0f,
     0x1.633d38p-120f, 0x1.3533cp-9f, 0x1.4e8d9cp-11f, 0x1.f6686cp-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.209c1p-60f, 0x1.e5885ep-53f, 0.0f, 0x1.22dd9p-59f, 0.0f,
     0x1.fd0e2p-88f, 0x1.9b4ecep-120f, 0x1.82dbc4p-4f, 0.0f, 0x1.4d61eap-87f, 0.0f,
     0x1.51010ap-71f, 0x1.e92252p-88f, 0.0f, 0x1.5ae322p-39f, 0x1.0e6b4p-20f,
     0x1.e96a1p-14f, 0x1.58bebp-58f, 0x1.45199p-81f, 0.0f, 0.0f, 0x1.9059eap-69f,
     0x1.0e16c4p-66f, 0.0f, 0.0f, 0.0f, 0x1.ae5p-11f, 0x1.3aaf24p-75f,
     0x1.0c3f2ep-95f, 0.0f, 0x1.56d6fap-74f, 0x1.cac126p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6db0e8p-76f, 0x1.f4cb2p-22f, 0.0f, 0x1.1ae74ap-19f,
     0x1.6adbf4p-45f, 0.0f, 0x1.5a641ep-38f, 0x1.6aecacp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c34624p-2f, 0.0f, 0x1.3f8b7ep-37f, 0x1.8fe1e4p-12f,
     0x1.45e20cp-35f, 0x1.acb4ccp-8f, 0x1.00b308p-21f, 0.0f, 0.0f, 0.0f,
     0x1.57fa02p-10f, 0x1.fd1b4ap-3f, 0x1.a1eb84p-82f, 0.0f, 0.0f, 0x1.0327f6p-4f,
     0x1.1741cp-124f, 0.0f, 0.0f, 0.0f, 0x1.d31834p-118f, 0.0f, 0x1.0943acp-28f, 0.0f,
     0.0f, 0x1.518b0ap-78f, 0.0f, 0x1.c3f87ep-126f, 0.0f, 0x1.fc3cd6p-31f,
     0x1.7c80c8p-30f, 0.0f, 0x1.5adf3ep-114f, 0.0f, 0x1.7a3d62p-57f, 0.0f, 0.0f, 0.0f,
     0x1.aede5ep-13f, 0x1.2c5e2p-55f, 0.0f, 0.0f, 0x1.d53f0cp-52f, 0x1.ecf09ep-7f,
     0x1.2b02a2p-13f, 0x1.fb5ebap-52f, 0x1.5696e8p-82f, 0.0f, 0x1.17991ep-125f, 0.0f,
     0.0f, 0x1.5b107ap-37f, 0.0f, 0.0f, 0x1.217b0cp-71f, 0.0f, 0x1.a4448cp-120f, 0.0f,
     0.0f, 0x1.dfdbccp-72f, 0.0f, 0x1.18a0aap-87f, 0.0f, 0.0f, 0x1.cf4e54p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0d562p-52f, 0x1.6f2136p-95f,
     0x1.826fe2p-43f, 0.0f, 0x1.8e606ep-44f, 0x1.94b03ap-124f, 0x1.894398p-83f,
     0x1.ad3036p-12f, 0.0f, 0.0f, 0.0f, 0x1.0c722ap-92f, 0x1.fe8096p-89f, 0.0f,
     0x1.ffd00ep-52f, 0.0f, 0.0f, 0x1.da74ap-90f, 0.0f, 0.0f, 0x1.0c8366p-25f, 0.0f,
     0x1.99feecp-7f, 0.0f, 0x1.530ff2p-61f, 0.0f, 0x1.cc8e6ap-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.90265ep-102f, 0.0f, 0.0f, 0x1.a853f2p-3f, 0x1.893be2p-78f,
     0x1.36c666p-113f, 0.0f, 0.0f, 0.0f, 0x1.c5ece8p-64f, 0.0f, 0.0f, 0x1.4aafecp-90f,
     0.0f, 0.0f, 0x1.2e55bep-18f, 0.0f, 0x1p0f, 0x1.958306p-116f, 0x1.6d57ep-120f,
     0x1.444bc6p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.266fb6p-82f, 0.0f, 0x1.a4339ep-107f,
     0x1.e664b8p-24f, 0.0f, 0x1.8d2868p-107f, 0.0f, 0x1.8f5d72p-34f, 0.0f,
     0x1.7908f4p-92f, 0.0f, 0x1.5a2906p-97f, 0x1.82772ap-10f, 0x1.ede26ep-19f,
     0x1.06928ep-89f, 0x1.af0f54p-2f, 0x1.d520d2p-33f, 0x1.18d484p-27f,
     0x1.82f05p-126f, 0.0f, 0x1.295a3ep-122f, 0x1.e91faap-82f, 0x1.34617ap-8f, 0.0f,
     0.0f, 0.0f, 0x1.53af16p-59f, 0.0f, 0x1.6ea856p-92f, 0x1.d3be6ep-65f, 0.0f, 0.0f,
     0x1.3a4f64p-50f, 0x1.44fe82p-41f, 0x1.6f815ep-71f, 0.0f, 0x1.083eaap-64f,
     0x1.1ffad2p-11f, 0x1.a93c9ep-121f, 0.0f, 0.0f, 0x1.59f602p-68f, 0.0f, 0.0f,
     0x1.7b277p-62f, 0x1.e7c7ecp-71f, 0.0f, 0.0f, 0x1.325ccep-93f, 0x1.8f8438p-66f,
     0x1.3f6a88p-58f, 0x1.b0e7eep-114f, 0x1.4b999ep-75f, 0x1.92dc04p-100f, 0.0f,
     0x1.dbf7dap-111f, 0.0f, 0x1p0f, 0x1.7b360ep-19f, 0x1.9a1e1cp-86f,
     0x1.768b0cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb8034p-96f, 0.0f, 0.0f, 0.0f,
     0x1.d0383ap-6f, 0.0f, 0x1.2ab744p-1f, 0x1.29d218p-78f, 0x1.f11754p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6faebep-1f, 0.0f, 0.0f, 0x1.2c59bep-89f, 0.0f,
     0x1.49d388p-116f, 0.0f, 0x1.f917e8p-38f, 0x1.93b93cp-24f, 0.0f, 0.0f,
     0x1.ec915ep-89f, 0x1.0ba696p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a009p-83f, 0.0f,
     0x1.d5e166p-5f, 0x1.ea9ba6p-77f, 0x1.bbb1b6p-94f, 0x1.5783d4p-117f, 0.0f,
     0x1.9a1912p-38f, 0.0f, 0x1.42e882p-121f, 0x1.36d7b8p-124f, 0x1.a2ae24p-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.07716p-55f, 0.0f, 0x1.ef3e98p-90f, 0.0f, 0x1.2e1236p-86f,
     0x1.b8474ap-109f, 0.0f, 0x1.6de722p-86f, 0x1.3f525ap-50f, 0x1.4fac76p-79f,
     0x1.c2418cp-121f, 0.0f, 0x1.d66a7p-84f, 0x1.169658p-92f, 0x1.169718p-19f, 0.0f,
     0.0f, 0.0f, 0x1.eac632p-26f, 0x1.35e12ep-10f, 0.0f, 0x1.1df0aap-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.df47fap-77f, 0.0f, 0x1.00e0aap-48f, 0x1.0bf5eep-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.690082p-35f, 0.0f, 0x1.043dc2p-68f, 0.0f, 0x1.1d2028p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.96abb4p-23f, 0x1.402562p-54f, 0.0f, 0.0f, 0x1.f92f4p-118f,
     0x1.4bc12ep-99f, 0.0f, 0x1.58ee74p-109f, 0.0f, 0x1.31a7b4p-100f, 0x1.08fef4p-17f,
     0.0f, 0x1.7bbf06p-49f, 0x1.ff323cp-50f, 0.0f, 0.0f, 0.0f, 0x1.dbfa2cp-93f,
     0x1.09d0d8p-44f, 0.0f, 0.0f, 0x1.7deacp-92f, 0.0f, 0x1.205f4cp-12f, 0.0f,
     0x1.bc95aep-99f, 0x1.4451dap-85f, 0x1.b63c1ep-52f, 0.0f, 0.0f, 0x1.9086aep-115f,
     0x1.cdb464p-122f, 0.0f, 0x1.ff22bcp-24f, 0.0f, 0x1.6962f2p-41f, 0.0f, 0.0f,
     0x1.8e35f6p-37f, 0x1.060966p-126f, 0.0f, 0.0f, 0x1.3b825p-77f, 0x1.d8df32p-114f,
     0x1.017cecp-25f, 0x1.887a9cp-6f, 0.0f, 0x1.e3f8f6p-42f, 0x1.8861d8p-7f,
     0x1.118726p-125f, 0x1.c615dap-57f, 0.0f, 0.0f, 0.0f, 0x1.44f0b6p-1f,
     0x1.bae588p-36f, 0x1.de5deep-111f, 0x1.9f2daep-81f, 0.0f, 0x1.eae3ccp-13f,
     0x1.22ce0ep-43f, 0.0f, 0x1.abb6c2p-116f, 0x1.2fed44p-35f, 0x1.615a9ap-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.709efcp-6f, 0x1.a72d36p-8f, 0.0f, 0x1.9ded2ap-97f, 0.0f,
     0x1.adb392p-53f, 0x1.18c61ep-116f, 0x1.982b5p-70f, 0.0f, 0.0f, 0x1.05a846p-126f,
     0.0f, 0x1.0f18a2p-53f, 0.0f, 0x1.933e4ep-119f, 0.0f, 0x1.7c1e6ap-44f, 0.0f, 0.0f,
     0x1.c787fp-87f, 0.0f, 0x1.32ce5ep-90f, 0x1.ae7e4cp-2f, 0x1.84f154p-72f, 0.0f,
     0x1.9b2bf6p-56f, 0x1.0fc5ep-100f, 0.0f, 0x1.5c738cp-88f, 0x1.89dab8p-3f,
     0x1.4b5834p-47f, 0.0f, 0x1.2995bep-88f, 0x1.5b0fc6p-3f, 0x1.efd8d6p-61f,
     0x1.e11f7ap-18f, 0.0f, 0x1.2a8992p-92f, 0.0f, 0.0f, 0x1.fb69bp-64f,
     0x1.c85874p-61f, 0.0f, 0x1.ba8d0ep-63f, 0.0f, 0.0f, 0x1.143c56p-15f, 0.0f,
     0x1.d9cf1ep-64f, 0.0f, 0x1.d1dde2p-84f, 0x1.bd44dcp-67f, 0x1.943a06p-125f,
     0x1.c7a2dap-35f, 0.0f, 0.0f, 0x1.78a998p-58f, 0x1.b6c37ep-20f, 0x1.daf25ap-93f,
     0x1.542908p-29f, 0x1.c31cc2p-42f, 0x1.0ffd6cp-41f, 0x1.f2d36ep-114f,
     0x1.6457d2p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e67b18p-25f, 0x1.4cb0eap-77f, 0.0f,
     0.0f, 0x1.a56866p-24f, 0x1.57fd8cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6b614p-85f,
     0x1.291156p-72f, 0x1.8357cap-48f, 0x1.0b42eep-57f, 0x1.70f2cep-95f, 0.0f, 0.0f,
     0.0f, 0x1.d63216p-6f, 0x1.696122p-1f, 0x1.eb9b9ep-50f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.94219ep-126f, 0x1.deacfap-94f, 0.0f, 0.0f, 0x1.319c9ep-58f, 0x1.9164fcp-73f,
     0x1.0144fcp-59f, 0.0f, 0.0f, 0x1.1eb0a4p-93f, 0x1.4af41p-102f, 0x1.e9f836p-27f,
     0.0f, 0x1.369792p-125f, 0.0f, 0.0f, 0x1.76ac9ep-71f, 0.0f, 0x1.02d19p-53f,
     0x1.538442p-7f, 0.0f, 0.0f, 0x1.3e544p-50f, 0.0f, 0.0f, 0x1.0e887ap-70f, 0.0f,
     0x1.81b4eep-108f, 0x1.e2c446p-119f, 0.0f, 0.0f, 0.0f, 0x1.e84076p-55f, 0.0f,
     0.0f, 0x1.7ccc3p-80f, 0.0f, 0.0f, 0x1.6a065ap-72f, 0x1.db0bbap-108f,
     0x1.e6c0a8p-11f, 0x1.f76308p-21f, 0.0f, 0x1.241442p-59f, 0x1.269d2p-92f,
     0x1.bd47fp-120f, 0.0f, 0.0f, 0.0f, 0x1.b39cfap-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee5712p-60f, 0x1.bafdc6p-112f, 0x1.969a78p-41f, 0x1.2ca404p-38f,
     0x1.bba5dp-1f, 0.0f, 0.0f, 0.0f, 0x1.a8f2dap-120f, 0x1.0a267cp-47f,
     0x1.c37232p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2235e4p-65f, 0x1.9a4ebap-92f,
     0x1.4fbb64p-34f, 0.0f, 0x1.762f42p-33f, 0x1.6cd77cp-38f, 0x1.4aeffap-25f,
     0x1.e68564p-27f, 0.0f, 0.0f, 0x1.30ffccp-93f, 0.0f, 0.0f, 0x1.a3ac42p-104f, 0.0f,
     0.0f, 0x1.ef43dap-18f, 0x1.572662p-81f, 0x1.1259dap-88f, 0.0f, 0x1.11260cp-13f,
     0x1.af7ebcp-68f, 0x1.b994acp-89f, 0x1.a5f5p-38f, 0.0f, 0.0f, 0x1.bf7c26p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.50ca1cp-56f, 0x1.fad0c8p-75f, 0.0f, 0x1.48fbecp-97f,
     0.0f, 0x1.858c92p-97f, 0x1.daf666p-112f, 0x1.59bd2p-78f, 0.0f, 0x1.5e292p-45f,
     0x1.4fbb2p-64f, 0x1.97ad78p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9d936p-28f,
     0x1.d67152p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f5a92p-44f, 0.0f, 0.0f,
     0x1.701b78p-4f, 0.0f, 0.0f, 0x1.7dad8p-123f, 0.0f, 0.0f, 0.0f, 0x1.2b264ep-30f,
     0x1.5d7cf4p-103f, 0.0f, 0x1.a317aep-50f, 0.0f, 0x1.0a677cp-69f, 0x1.c2d996p-94f,
     0.0f, 0.0f, 0.0f, 0x1.ad53dap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad7df2p-66f, 0x1.04955cp-40f, 0x1.5de83ap-26f, 0.0f, 0.0f, 0x1.9c5e2ep-80f,
     0x1.96d072p-91f, 0.0f, 0.0f
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
            tmp1 = Sleef_log2f1_u10purecfma(tmp0);
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
    printf("Sleef_log2f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
