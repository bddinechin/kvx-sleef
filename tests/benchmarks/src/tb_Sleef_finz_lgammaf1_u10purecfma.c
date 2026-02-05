/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammaf1_u10purecfma.c --function \
 *     Sleef_finz_lgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.35d3aap-94f, 0.0f, 0.0f, 0x1.b2364ap-56f, 0x1.7ae9fcp-41f, 0x1.16f82cp-67f,
     0.0f, 0x1.1c67c2p-89f, 0.0f, 0.0f, 0x1.eb4988p-61f, 0.0f, 0x1.9b04fp-125f,
     0x1.54a3dap-42f, 0.0f, 0x1.92b1ecp-17f, 0x1.88e75ep-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bfe4fp-12f, 0x1.e5f1d2p-104f, 0x1.e32b98p-57f, 0.0f, 0.0f, 0.0f,
     0x1.3822ep-72f, 0x1.a1af6ep-114f, 0.0f, 0x1.23598ep-89f, 0x1.86699ap-122f,
     0x1.bb4802p-124f, 0x1.24182ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.496c46p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ad16cp-56f, 0.0f, 0x1.044f52p-93f,
     0x1.3ce0eep-23f, 0.0f, 0x1.41b292p-90f, 0x1.027f44p-49f, 0.0f, 0.0f,
     0x1.4868d2p-45f, 0.0f, 0.0f, 0.0f, 0x1.d113b2p-11f, 0x1.331472p-84f, 0.0f,
     0x1.63757ep-56f, 0.0f, 0x1.c77614p-106f, 0x1.a094f2p-22f, 0x1.9d123ap-7f,
     0x1.3816b6p-42f, 0x1.2ca8dp-24f, 0x1.c7586p-96f, 0x1.7236cep-8f, 0.0f,
     0x1.64494ep-80f, 0x1.fb5aa8p-94f, 0.0f, 0x1.47398ap-6f, 0x1.15526ap-36f, 0.0f,
     0.0f, 0x1.c941cap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70296ep-52f, 0x1.c80feep-66f,
     0x1.fb6e08p-12f, 0x1.29e91p-7f, 0x1.6b07c6p-53f, 0.0f, 0.0f, 0x1.460756p-12f,
     0x1.6a8218p-39f, 0x1.3c4a5ep-99f, 0.0f, 0.0f, 0.0f, 0x1.f2d702p-15f,
     0x1.042a9p-61f, 0x1.4776f4p-80f, 0x1.871c3cp-10f, 0.0f, 0x1.954448p-73f, 0.0f,
     0.0f, 0x1.ec6856p-80f, 0x1.c67152p-124f, 0x1.921426p-29f, 0.0f, 0.0f,
     0x1.d4c882p-88f, 0x1.843baap-87f, 0x1.982a9cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae2c52p-7f, 0x1.5af0c2p-9f, 0x1.feaf34p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.46557ap-1f, 0.0f, 0x1.07b3d6p-76f, 0x1.955bccp-79f, 0.0f, 0.0f,
     0x1.945058p-8f, 0x1.d6f694p-69f, 0.0f, 0x1.89c0d4p-23f, 0x1.1746eap-31f, 0.0f,
     0x1.1856b6p-39f, 0.0f, 0x1.a6e1f4p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a7f7p-4f, 0x1.b35cccp-48f, 0.0f, 0.0f, 0x1.7cc55cp-47f, 0x1.08cefp-96f,
     0.0f, 0x1.8cadd8p-8f, 0.0f, 0.0f, 0.0f, 0x1.e26dep-41f, 0x1.f7b466p-78f,
     0x1.e36762p-73f, 0x1.a5057ep-86f, 0x1.daf288p-51f, 0.0f, 0x1.fe005p-18f,
     0x1.f8d1fcp-124f, 0x1.a9dc52p-84f, 0x1.b1b7cep-1f, 0x1.561a2cp-51f, 0.0f,
     0x1.08b6cp-110f, 0x1.8a3bbcp-33f, 0.0f, 0x1.553896p-66f, 0.0f, 0x1.69b2e4p-115f,
     0.0f, 0.0f, 0.0f, 0x1.788dp-67f, 0.0f, 0.0f, 0x1.c1096ep-126f, 0.0f,
     0x1.6b6f7p-4f, 0.0f, 0x1.af006p-122f, 0x1.7e69aep-55f, 0x1.05b852p-25f, 0.0f,
     0x1.31b626p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73f502p-23f, 0.0f, 0.0f,
     0x1.0f396cp-103f, 0x1.67bfb8p-43f, 0x1.7087c8p-3f, 0.0f, 0.0f, 0.0f,
     0x1.5a51c6p-28f, 0.0f, 0x1.e72a62p-52f, 0.0f, 0.0f, 0x1.90ffe4p-41f, 0.0f, 0.0f,
     0.0f, 0x1.1b7394p-105f, 0x1.8154ap-122f, 0x1.f377bcp-20f, 0x1.f98256p-23f, 0.0f,
     0x1.1ddda4p-72f, 0.0f, 0.0f, 0.0f, 0x1.4b4d08p-52f, 0.0f, 0x1.f07ed2p-64f,
     0x1.52d1acp-43f, 0.0f, 0x1.d28cdep-115f, 0x1.55c458p-48f, 0x1.81b27ap-72f, 0.0f,
     0.0f, 0x1.8972cap-123f, 0x1.1ed078p-111f, 0.0f, 0x1.eb051p-56f, 0.0f, 0.0f,
     0x1.f9d84ep-75f, 0x1.92cfa2p-19f, 0.0f, 0.0f, 0x1.9a4efcp-10f, 0.0f,
     0x1.66849ap-109f, 0.0f, 0x1.ac2db6p-83f, 0x1.1939dcp-43f, 0.0f, 0.0f,
     0x1.8c3edp-17f, 0.0f, 0.0f, 0.0f, 0x1.7b42fcp-5f, 0.0f, 0x1.f173a6p-21f, 0.0f,
     0x1.39ab98p-69f, 0x1.a41b54p-89f, 0.0f, 0.0f, 0x1.5f366p-100f, 0x1.338accp-43f,
     0.0f, 0x1.75881ep-40f, 0x1.645496p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b8da4p-21f,
     0x1.c92e86p-31f, 0.0f, 0x1.2da2e6p-40f, 0x1.b6253ep-74f, 0x1.cf0dfap-41f,
     0x1.8b27b4p-55f, 0x1.9cab24p-28f, 0.0f, 0x1.79592p-48f, 0x1.748394p-55f,
     0x1.2586fep-2f, 0.0f, 0.0f, 0x1.497756p-66f, 0x1.e78da6p-96f, 0.0f,
     0x1.8c3808p-52f, 0.0f, 0x1.6ec9bcp-46f, 0x1.df047p-8f, 0x1.0c753ap-112f, 0.0f,
     0x1.43c4bap-71f, 0.0f, 0.0f, 0x1.c403c4p-93f, 0x1.dca234p-91f, 0x1.b9b568p-68f,
     0.0f, 0x1.241788p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc5d4p-103f, 0.0f, 0.0f, 0.0f,
     0x1.eeba2p-92f, 0x1.dc1d32p-99f, 0x1.387bf6p-107f, 0.0f, 0.0f, 0x1.a1dffap-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e9f0cp-65f, 0x1.657ec4p-31f, 0x1.f5c792p-42f,
     0x1.328402p-8f, 0x1.d55e1p-86f, 0x1.94b272p-63f, 0.0f, 0x1.030fbcp-21f, 0.0f,
     0.0f, 0.0f, 0x1.a86d78p-96f, 0.0f, 0x1.bfe04p-49f, 0x1.357eeep-24f,
     0x1.1fed4cp-15f, 0x1.29a41cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1945cp-26f, 0.0f, 0.0f, 0x1.f404a8p-52f, 0.0f, 0.0f, 0.0f, 0x1.8f983ep-94f,
     0.0f, 0x1.9073cp-98f, 0.0f, 0.0f, 0x1.ccff6p-101f, 0.0f, 0x1.b87f2p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d4a7b8p-107f, 0x1.0cca6ap-110f, 0x1.e1030cp-11f, 0.0f,
     0x1.3785d6p-72f, 0x1.71b8bep-23f, 0.0f, 0.0f, 0x1.16c324p-109f, 0x1.54c2a2p-117f,
     0.0f, 0.0f, 0x1.3efd24p-92f, 0.0f, 0x1.38c26ap-52f, 0x1.85d042p-102f,
     0x1.b71e24p-56f, 0x1.d21a0cp-13f, 0x1.1a90d2p-70f, 0x1.b3ac58p-65f,
     0x1.593e1p-103f, 0x1.c64deap-103f, 0x1.ebdfc2p-54f, 0x1.d444bep-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c4a86p-62f, 0x1.46fc1ep-2f, 0.0f, 0.0f,
     0x1.254b1ap-25f, 0.0f, 0.0f, 0x1.7acde6p-89f, 0x1.50ef3ep-24f, 0x1.edd5p-58f,
     0x1.5dad0cp-122f, 0.0f, 0.0f, 0x1.a98a4p-51f, 0.0f, 0x1.065d38p-83f, 0.0f, 0.0f,
     0.0f, 0x1.90c442p-8f, 0x1.e728cp-119f, 0x1.4ce53p-38f, 0.0f, 0.0f,
     0x1.1ad2a2p-61f, 0x1.ea8712p-74f, 0x1.0393fcp-57f, 0x1.fb9484p-53f, 0.0f,
     0x1.cf04aap-17f, 0x1.65ecfp-45f, 0x1.d321a8p-16f, 0.0f, 0x1.742dd4p-47f, 0.0f,
     0.0f, 0x1.390396p-19f, 0x1.cd2dp-82f, 0.0f, 0.0f, 0x1.1a652p-18f,
     0x1.eb0936p-105f, 0x1.afd3ap-42f, 0x1.d6c332p-54f, 0x1.5cbd5cp-71f,
     0x1.10395p-74f, 0x1.a2dca4p-69f, 0x1.420692p-118f, 0.0f, 0.0f, 0.0f,
     0x1.d7c5bep-22f, 0.0f, 0.0f, 0x1.5a1682p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8c704p-98f, 0x1.e99ebcp-62f, 0x1.7cc95p-111f, 0x1.e0192ep-63f, 0.0f,
     0x1.7805a4p-21f, 0x1.b9a486p-100f, 0x1.5b302ep-74f, 0x1.99392ep-25f,
     0x1.69d80ap-21f, 0.0f, 0x1.ff0b94p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.682128p-88f, 0.0f, 0x1.8ac884p-90f, 0x1.6c2ca2p-43f, 0.0f, 0.0f, 0.0f,
     0x1.103b3ap-50f, 0x1.00519p-1f, 0x1.a4d88ap-28f, 0x1.4652f2p-17f,
     0x1.fa8f9ep-19f, 0x1.862f12p-111f, 0.0f, 0x1.f3b6d8p-28f, 0x1.d99282p-87f,
     0x1.57ee48p-38f, 0x1.0d8482p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3305f2p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.98b80cp-101f, 0.0f, 0.0f, 0.0f, 0x1.1962cp-57f,
     0x1.362462p-75f, 0.0f, 0x1.7dee6ep-4f, 0x1.b264a4p-57f, 0.0f, 0x1.372704p-25f,
     0.0f, 0.0f, 0x1.1a58d6p-101f, 0x1.c8819p-123f, 0x1.d862b8p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.44265p-91f, 0.0f, 0.0f, 0x1.c31882p-75f, 0x1.d7613ap-11f, 0.0f,
     0x1.a9da0ap-70f, 0.0f, 0.0f, 0x1.521646p-29f, 0x1.cda3f2p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8f58b8p-70f, 0x1.a698ep-101f, 0.0f, 0.0f, 0x1.274bacp-7f,
     0x1.e908fp-102f, 0.0f, 0.0f, 0.0f, 0x1.4f7df6p-59f, 0x1.0eddep-26f, 0.0f, 0.0f,
     0.0f, 0x1.0acc26p-101f, 0x1.c45e94p-41f, 0.0f, 0.0f, 0x1.c2ec44p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.003538p-35f, 0x1.825b84p-103f, 0.0f, 0x1.9a2484p-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a0108p-69f, 0x1.3bfc18p-48f, 0x1.8d1cf8p-22f,
     0x1.eec6fep-84f, 0.0f, 0x1.e532fcp-31f, 0x1.2b64e2p-126f, 0.0f, 0x1.5aef56p-39f,
     0x1.b116aep-17f, 0x1.8e95e6p-58f, 0.0f, 0.0f, 0x1.1af2e2p-124f, 0x1.683978p-17f,
     0x1.a55776p-93f, 0.0f, 0.0f, 0x1.feb74cp-125f, 0.0f, 0x1.af55bep-49f, 0.0f,
     0x1.91757ap-74f, 0x1.da98d6p-103f, 0x1.8ed9fep-2f, 0x1.941df8p-92f,
     0x1.cdce84p-53f, 0.0f, 0x1.892ceep-122f, 0x1.0280a2p-65f, 0x1.b17922p-53f,
     0x1.216eeap-103f, 0x1.83e2d4p-83f, 0.0f, 0x1.57f8ep-116f, 0x1.be34f6p-61f,
     0x1.0f471ap-7f, 0x1.f9adf6p-71f, 0x1.281bdp-70f, 0.0f, 0x1.e2d03ap-11f,
     0x1.209ecep-41f, 0x1.fcbdep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.faf7ap-3f,
     0x1.4dfe64p-10f, 0.0f, 0x1.faae5cp-92f, 0.0f, 0x1.ca0fc6p-114f, 0.0f, 0.0f,
     0x1.602d94p-30f, 0x1.102beap-21f, 0x1.650ef2p-97f, 0x1.78502cp-1f,
     0x1.a2e25cp-37f, 0.0f, 0.0f, 0.0f, 0x1.fbb182p-98f, 0x1.52e00cp-6f, 0.0f, 0.0f,
     0.0f, 0x1.1add56p-87f, 0x1.feff08p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83bc4ep-83f, 0x1.f0cfep-40f, 0x1.14d5cp-5f, 0.0f, 0x1.0616bcp-56f, 0.0f,
     0x1.75d2e2p-109f, 0x1.ed56b6p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f79a7p-67f,
     0x1.a9f11cp-100f, 0x1.477278p-26f, 0x1.23b1d6p-63f, 0x1.426084p-65f, 0.0f,
     0x1.f6c128p-63f, 0.0f, 0x1.1a52e6p-5f, 0.0f, 0.0f, 0x1.e342d8p-80f, 0.0f, 0.0f,
     0.0f, 0x1.8ec606p-54f, 0.0f, 0x1.6f6fbep-31f, 0.0f, 0x1.2bbcc8p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7fc66ap-78f, 0x1.9a7676p-30f, 0x1.14e352p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5bee6cp-11f, 0.0f, 0.0f, 0x1.038702p-11f, 0.0f, 0x1p0f,
     0x1.0df5c6p-102f, 0x1.7f4014p-115f, 0x1.bc1c5p-90f, 0x1.1f9406p-40f,
     0x1.1921bcp-21f, 0.0f, 0.0f, 0x1.64d04ep-25f, 0.0f, 0x1.20ad8p-35f,
     0x1.3d4c28p-11f, 0x1.cbc08ep-14f, 0.0f, 0x1.14a19cp-88f, 0.0f, 0x1.67b1bep-113f,
     0x1.d534ep-40f, 0x1.8ac56ep-120f, 0x1.0d173ep-30f, 0.0f, 0.0f, 0x1.55c568p-23f,
     0.0f, 0x1.6a3d36p-57f, 0x1.0a7702p-115f, 0.0f, 0x1.0aaa06p-119f, 0.0f,
     0x1.3a91e4p-55f, 0.0f, 0.0f, 0x1.7478d4p-68f, 0x1.c888f4p-110f, 0x1.c837dep-58f,
     0x1.8a61ap-71f, 0.0f, 0x1.a46814p-120f, 0x1.03c4a2p-27f, 0x1.77cb8ap-106f,
     0x1.48dea4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b14b38p-66f, 0x1.bf6342p-77f,
     0x1.9926c8p-13f, 0x1.06fdecp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.52137ep-86f, 0x1.07455ap-105f, 0x1.fadaeap-49f, 0.0f, 0.0f,
     0x1.387518p-78f, 0x1.79947ap-58f, 0x1.97cfe6p-20f, 0x1.8eaa9ep-104f, 0.0f,
     0x1.e72d1ep-57f, 0x1.4ed08ap-61f, 0x1.99919cp-1f, 0.0f, 0x1.26d244p-61f, 0.0f,
     0.0f, 0x1.4223a8p-61f, 0.0f, 0x1.431c52p-12f, 0.0f, 0.0f, 0.0f, 0x1.4d507cp-63f,
     0.0f, 0.0f, 0x1.bf2886p-32f, 0.0f, 0x1.5a8e1ep-43f, 0x1.b131fcp-31f, 0.0f, 0.0f,
     0x1.98ae2p-109f, 0.0f, 0x1.ef5faep-14f, 0.0f, 0.0f, 0x1.87936ap-19f,
     0x1.e6ae86p-48f, 0x1.78047p-37f, 0x1.4f487p-91f, 0.0f, 0.0f, 0.0f,
     0x1.b41108p-86f, 0x1.ce5292p-95f, 0.0f, 0x1.ceb57p-121f, 0.0f, 0.0f,
     0x1.103142p-123f, 0x1.305f9p-61f, 0x1.41ab2cp-49f, 0x1.6492p-88f, 0x1.71518p-75f,
     0x1.596efp-97f, 0x1.4b24a6p-67f, 0x1.9c7258p-112f, 0x1.2b836ap-5f,
     0x1.077a26p-29f, 0x1.f88d9p-38f, 0x1.f4c8d8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0f7cc8p-98f, 0.0f, 0x1.e0af86p-78f, 0x1.b3a73cp-51f,
     0x1.a7dd7ap-63f, 0x1.9d2d9ap-85f, 0.0f, 0x1.879342p-97f, 0.0f, 0x1.d49dd8p-40f,
     0.0f, 0x1.d2256p-6f, 0.0f, 0.0f, 0x1.bc77fap-76f, 0.0f, 0.0f, 0x1.beeabap-89f,
     0.0f, 0.0f, 0x1.837392p-45f, 0x1.a93194p-73f, 0.0f, 0x1.f5fcaap-32f, 0.0f,
     0x1.255b04p-68f, 0x1.8d2954p-48f, 0x1.6f12d2p-55f, 0.0f, 0.0f, 0.0f,
     0x1.8c5be6p-25f, 0.0f, 0.0f, 0x1.5c9dfcp-74f, 0x1.5e0cf2p-23f, 0x1.16796cp-30f,
     0.0f, 0x1.d77bfp-116f, 0x1.f8338ep-60f, 0.0f, 0x1.1f4e32p-102f, 0x1.c60ef2p-93f,
     0x1.566e42p-12f, 0.0f, 0x1.a9309ep-77f, 0x1.dc1498p-54f, 0.0f, 0x1.2a5cep-35f,
     0x1.d19364p-27f, 0x1.c49372p-112f, 0.0f, 0.0f, 0.0f, 0x1.bb930ep-9f,
     0x1.a3990ep-122f, 0.0f, 0.0f, 0x1.d98002p-90f, 0x1.d07f24p-49f, 0x1.083466p-97f,
     0.0f, 0x1.940536p-38f, 0.0f, 0x1p0f, 0x1.297956p-122f, 0x1.08f5fcp-44f,
     0x1.30ebb8p-82f, 0.0f, 0.0f, 0.0f, 0x1.560002p-105f, 0.0f, 0.0f, 0x1.822edap-35f,
     0.0f, 0x1.bc22f6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65a354p-112f,
     0x1.547a56p-103f, 0.0f, 0.0f, 0.0f, 0x1.a72b82p-94f, 0x1.d2b854p-117f,
     0x1.98d178p-63f, 0x1.b234c6p-40f, 0x1.f39a86p-2f, 0.0f, 0x1.89e782p-42f,
     0x1.bc82fap-23f, 0.0f, 0.0f, 0x1.78bee4p-91f, 0x1.892acp-4f, 0x1.e559b6p-84f,
     0.0f, 0x1.4f5f2p-107f, 0.0f, 0.0f, 0x1.e9245p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36b8e2p-79f, 0.0f, 0x1.74486ap-98f, 0.0f, 0.0f, 0x1.5329dap-109f,
     0x1.761b64p-78f, 0x1.60d752p-49f, 0x1.31a0cep-4f, 0.0f, 0x1.cdcddep-39f,
     0x1.b9c5a8p-27f, 0x1.d86ceep-22f, 0x1.b776a4p-22f, 0x1.638e84p-13f, 0.0f,
     0x1.a56fbap-104f, 0.0f, 0x1.b78618p-90f, 0x1.25617p-59f, 0.0f, 0x1.fb3cf6p-71f,
     0x1.51de16p-106f, 0.0f, 0x1.c7859ep-118f, 0.0f, 0x1.69c138p-45f, 0.0f,
     0x1.2b76f8p-33f, 0.0f, 0x1.de7716p-30f, 0.0f, 0.0f, 0x1.f9accp-20f, 0.0f, 0.0f,
     0.0f, 0x1.19271cp-44f, 0.0f, 0x1.ccd264p-28f, 0.0f, 0.0f, 0.0f, 0x1.d96414p-106f,
     0x1.fb959ep-92f, 0.0f, 0x1.dfc894p-93f, 0x1.b061aap-73f, 0.0f, 0x1.35a9f4p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67ce8ap-12f, 0x1.9e7d66p-64f, 0x1.fec53p-123f,
     0x1.1a1ab2p-112f, 0.0f, 0.0f, 0x1.2065d4p-25f, 0.0f, 0.0f, 0x1.6732cap-21f, 0.0f,
     0.0f, 0.0f, 0x1.8f6f52p-125f, 0.0f, 0x1.7702b8p-107f, 0x1.cd8ba2p-91f,
     0x1.330ec2p-1f, 0.0f
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
            tmp1 = Sleef_finz_lgammaf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_lgammaf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_lgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
