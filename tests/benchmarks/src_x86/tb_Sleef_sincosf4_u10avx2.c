/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf4_u10avx2128.c --function Sleef_sincosf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.ee0324p-89f, 0x1.0800e8p-1f, 0x1.00bd2ep-104f, 0x1.40aa92p-65f,
     0.0f, 0x1.2879e4p-69f, 0.0f, 0.0f, 0.0f, 0x1.dae484p-114f, 0x1.5e95b2p-55f, 0.0f,
     0.0f, 0x1.cea774p-126f, 0.0f, 0.0f, 0x1.f84956p-121f, 0x1.f1bff6p-90f, 0.0f,
     0x1.b6a114p-44f, 0.0f, 0x1.e0f5b6p-61f, 0x1.0f6c34p-9f, 0.0f, 0x1.ac2d3ap-97f,
     0.0f, 0.0f, 0x1.b5ebf2p-31f, 0x1.165928p-104f, 0.0f, 0x1.518bccp-98f, 0.0f,
     0x1.f1dfbep-76f, 0x1.9f7d1ep-57f, 0x1.7327ap-96f, 0x1.20e766p-74f,
     0x1.740466p-78f, 0x1.08eb5ep-98f, 0x1.f01fb8p-15f, 0.0f, 0.0f, 0x1.f88744p-2f,
     0x1.c760eap-84f, 0.0f, 0.0f, 0.0f, 0x1.ff85acp-67f, 0.0f, 0x1.4068ep-12f, 0.0f,
     0.0f, 0x1.dc12e6p-30f, 0.0f, 0x1.964d68p-113f, 0x1.43f2ep-46f, 0.0f,
     0x1.171fb2p-117f, 0x1.7bdfa4p-92f, 0.0f, 0.0f, 0x1.ad54aap-66f, 0x1.f506bp-90f,
     0.0f, 0x1.dd17bcp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.866178p-121f, 0.0f, 0.0f,
     0x1.3c9fa6p-100f, 0x1.5859e8p-55f, 0.0f, 0x1.86ba24p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.02da36p-59f, 0x1.1313dap-57f, 0.0f, 0.0f, 0x1.23c65ap-88f, 0.0f,
     0x1.ffcb7ep-78f, 0.0f, 0x1.900e74p-41f, 0.0f, 0.0f, 0x1.5e4f2p-34f, 0.0f, 0.0f,
     0x1.9e3494p-13f, 0x1.7e90f6p-69f, 0x1.ab3c44p-21f, 0x1.278d98p-5f, 0.0f,
     0x1.452172p-17f, 0x1.0e99aep-94f, 0x1.bf5d48p-48f, 0.0f, 0x1.e73744p-86f,
     0x1.e11948p-89f, 0x1.56e26cp-97f, 0x1.4e84c6p-105f, 0x1p0f, 0.0f,
     0x1.9427bap-65f, 0x1.c080bap-117f, 0x1.dfb5a8p-123f, 0.0f, 0.0f, 0x1.ee81bcp-44f,
     0x1.07f7fep-52f, 0.0f, 0x1.cdd068p-16f, 0x1.ccba9ap-98f, 0.0f, 0.0f,
     0x1.fbe81cp-63f, 0x1.f6f15ap-75f, 0x1.8af918p-70f, 0.0f, 0x1.832658p-96f,
     0x1.f17f4ep-102f, 0x1.77582ep-108f, 0x1.72b0cap-116f, 0x1.883aa6p-8f, 0.0f,
     0x1.484156p-41f, 0x1.8a57f6p-120f, 0.0f, 0x1.84a4ccp-64f, 0.0f, 0x1.329b48p-76f,
     0x1.af543cp-76f, 0.0f, 0.0f, 0x1.346bfap-53f, 0.0f, 0x1.8b9202p-47f,
     0x1.210ed8p-20f, 0.0f, 0.0f, 0x1.be4558p-24f, 0x1.2dc4c2p-15f, 0x1.cbd206p-104f,
     0.0f, 0x1.c2f932p-32f, 0x1.ec496p-116f, 0x1.c08a7cp-31f, 0.0f, 0x1.66afd6p-65f,
     0x1.9901e6p-8f, 0x1.5d319ep-54f, 0.0f, 0x1.3b1fb4p-62f, 0x1.7b3bdep-40f,
     0x1.f98feap-18f, 0x1.e4bc04p-63f, 0.0f, 0.0f, 0.0f, 0x1.1e0b8ap-13f, 0.0f,
     0x1.9f17c8p-50f, 0.0f, 0.0f, 0.0f, 0x1.799298p-124f, 0.0f, 0x1.ac96a8p-2f, 0.0f,
     0.0f, 0x1.580d7ep-55f, 0.0f, 0.0f, 0x1.2e9f7ep-28f, 0x1.1be398p-35f,
     0x1.37e04ap-91f, 0.0f, 0.0f, 0x1.7fe436p-100f, 0x1.c06456p-15f, 0x1.c6a8cp-29f,
     0.0f, 0.0f, 0x1.eeaa4p-77f, 0.0f, 0x1.ae7dd6p-52f, 0x1.e9a3c4p-15f, 0.0f,
     0x1.36c494p-69f, 0.0f, 0x1.445638p-111f, 0.0f, 0.0f, 0x1.be4cb2p-122f, 0.0f,
     0.0f, 0x1p0f, 0x1.934206p-16f, 0x1.44d95ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.02511cp-44f, 0x1.e52b32p-48f, 0x1.74bc8cp-54f, 0.0f,
     0x1.522c88p-98f, 0.0f, 0x1.654738p-97f, 0.0f, 0x1.9e09ccp-113f, 0x1.d11c2cp-58f,
     0.0f, 0.0f, 0x1.c2fd16p-36f, 0.0f, 0.0f, 0x1.3f025p-17f, 0.0f, 0x1.3f6536p-12f,
     0x1.e9345ep-56f, 0x1.0e7dd8p-70f, 0.0f, 0x1.37fb1cp-19f, 0.0f, 0x1.631c3ep-93f,
     0.0f, 0x1.7d2d5ap-110f, 0x1.abbec8p-113f, 0x1.6bc9fp-95f, 0x1.a6aaacp-64f,
     0x1.e9ed1p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7cabp-36f,
     0x1.2ebdap-60f, 0.0f, 0.0f, 0x1.1bdf18p-78f, 0x1.71dc52p-91f, 0.0f,
     0x1.34401ep-38f, 0x1.1c9adep-114f, 0x1.81dc22p-87f, 0x1.52f50cp-60f, 0.0f,
     0x1.4c0ef2p-3f, 0x1.c6b8cep-8f, 0.0f, 0.0f, 0x1.5499d6p-68f, 0.0f,
     0x1.72acdap-58f, 0x1.4171dcp-56f, 0x1.af2b6p-5f, 0.0f, 0.0f, 0x1.d5958ep-8f,
     0x1.5eb53ep-71f, 0.0f, 0x1.c7f854p-55f, 0x1.8b6c2ap-70f, 0x1.2b3708p-14f,
     0x1.62c20ap-70f, 0x1.946ecp-121f, 0.0f, 0.0f, 0.0f, 0x1.98b458p-58f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.07728cp-91f, 0x1.87e2fep-8f, 0x1.31db82p-70f, 0.0f, 0.0f,
     0x1.a3ec38p-45f, 0x1.fec4c8p-123f, 0x1.ebcb92p-116f, 0.0f, 0x1.5b358ep-87f,
     0x1.472b82p-113f, 0x1.de03bep-116f, 0.0f, 0x1.02e862p-36f, 0x1.c61252p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.566ec2p-30f, 0x1.14ad5ap-91f, 0x1.3e8afcp-40f, 0.0f,
     0x1.4d8e7ep-113f, 0x1.9e088ep-85f, 0x1.fbef86p-40f, 0x1.def2b2p-89f, 0.0f,
     0x1.0bd14p-86f, 0.0f, 0x1.b6c99cp-88f, 0.0f, 0x1.a7c77ep-28f, 0x1.bdd19ap-93f,
     0.0f, 0.0f, 0x1.79adeap-1f, 0.0f, 0.0f, 0x1.5b2bf8p-5f, 0.0f, 0x1.873da8p-72f,
     0x1.8d67cap-52f, 0.0f, 0.0f, 0x1.f05a5ep-29f, 0.0f, 0.0f, 0.0f, 0x1.d35592p-124f,
     0.0f, 0x1.3ce70ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8027bep-60f, 0.0f,
     0x1.6b8e32p-71f, 0.0f, 0x1.3cfefcp-120f, 0.0f, 0.0f, 0x1.911f72p-110f, 0.0f,
     0x1.144a62p-15f, 0x1.2b44a8p-10f, 0.0f, 0x1.1f8b6ap-17f, 0.0f, 0x1.a3ef12p-83f,
     0.0f, 0.0f, 0x1.4dbae2p-53f, 0.0f, 0.0f, 0.0f, 0x1.cb8244p-73f, 0.0f, 0.0f, 0.0f,
     0x1.36392cp-53f, 0.0f, 0.0f, 0.0f, 0x1.d8855ap-40f, 0x1.1e1ffap-79f, 0.0f,
     0x1.dd8f2ep-90f, 0x1.332f42p-80f, 0.0f, 0.0f, 0.0f, 0x1.4f431cp-12f, 0.0f, 0.0f,
     0.0f, 0x1.967744p-93f, 0.0f, 0.0f, 0x1.a1ea66p-96f, 0x1.71a562p-35f,
     0x1.83037ep-81f, 0.0f, 0x1.1aefc8p-26f, 0x1.476392p-124f, 0x1.fa86dep-38f, 0.0f,
     0x1.cf1506p-114f, 0.0f, 0x1.23c1bp-8f, 0x1.7b355cp-18f, 0.0f, 0x1.8156p-125f,
     0x1.4d4abap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50a20ep-24f, 0x1.2b3896p-88f, 0.0f, 0x1.641abap-36f, 0x1.8052d6p-66f, 0.0f,
     0.0f, 0.0f, 0x1.f0f6dp-51f, 0.0f, 0.0f, 0x1.aa686cp-70f, 0x1.85986p-57f, 0.0f,
     0x1.d45edcp-68f, 0.0f, 0x1p0f, 0x1.d726f4p-22f, 0x1.5985b8p-84f, 0.0f, 0.0f,
     0x1.7616b8p-108f, 0.0f, 0x1.81e8a4p-118f, 0x1.d53c36p-5f, 0.0f, 0x1.1422d8p-57f,
     0x1.6d5154p-48f, 0x1.cf454ep-54f, 0x1.de0d8cp-111f, 0x1.3dfcccp-96f,
     0x1.1372b6p-35f, 0.0f, 0x1.7312c4p-16f, 0.0f, 0.0f, 0x1.247bc8p-52f,
     0x1.b0cfd2p-29f, 0x1.1a0714p-58f, 0.0f, 0x1.d3e342p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de7554p-116f, 0.0f, 0x1.73144ap-37f, 0x1.70c46p-26f, 0.0f, 0.0f,
     0x1.5a61b4p-125f, 0.0f, 0.0f, 0x1.b4b4ep-43f, 0x1.890236p-119f, 0x1.ede20ep-102f,
     0x1.ed79f4p-77f, 0x1.9a66eap-126f, 0x1.7926bcp-30f, 0.0f, 0x1.9cee4p-65f,
     0x1.82e796p-86f, 0x1.e8d844p-102f, 0x1.cc1f56p-120f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.3906b2p-50f, 0.0f, 0.0f, 0x1.42129p-95f, 0.0f, 0.0f, 0.0f, 0x1.c20088p-10f,
     0.0f, 0.0f, 0x1.aaefa4p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e8ac4p-49f, 0x1.a5f9fcp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.440102p-31f,
     0x1.0c9216p-4f, 0.0f, 0.0f, 0x1.2a106cp-56f, 0x1.76743cp-88f, 0x1.8ba98ap-25f,
     0.0f, 0.0f, 0.0f, 0x1.54cf44p-69f, 0x1.c5b5b2p-95f, 0x1.90e3bcp-112f, 0.0f,
     0x1.657922p-116f, 0.0f, 0.0f, 0x1.5719ap-124f, 0x1.a772fcp-124f, 0x1.fa5fap-52f,
     0.0f, 0x1.24a14ep-20f, 0.0f, 0x1p0f, 0x1.3cc7acp-60f, 0.0f, 0.0f,
     0x1.6eedeap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28d2eep-72f, 0x1.a8dddcp-70f,
     0x1.aedbccp-112f, 0.0f, 0.0f, 0.0f, 0x1.16ce66p-108f, 0x1.34ccb4p-119f,
     0x1.f0020cp-56f, 0.0f, 0.0f, 0x1.59c404p-43f, 0x1.447a08p-97f, 0x1.6d607cp-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f969ep-19f, 0.0f, 0x1.ec66eep-42f, 0.0f,
     0x1.9b25fcp-101f, 0.0f, 0x1.ff9e52p-77f, 0x1.9119bep-97f, 0x1.4dcf7cp-53f,
     0x1.59fda4p-38f, 0x1.e6d40ap-20f, 0x1.b17ab2p-93f, 0.0f, 0.0f, 0.0f,
     0x1.9526e2p-109f, 0x1.582b5cp-34f, 0.0f, 0x1.9a0048p-93f, 0x1.b90accp-16f, 0.0f,
     0x1.3c6942p-101f, 0.0f, 0.0f, 0x1.5f407ep-60f, 0.0f, 0.0f, 0x1.c2da02p-121f,
     0x1.3824cep-8f, 0.0f, 0.0f, 0x1.35cc5p-99f, 0x1.9da2cp-102f, 0.0f, 0.0f,
     0x1.6ba7bp-70f, 0x1.399436p-49f, 0.0f, 0.0f, 0x1.8304e8p-83f, 0.0f, 0.0f,
     0x1.8883aep-52f, 0.0f, 0x1.b81ee2p-72f, 0.0f, 0x1.f45cbcp-125f, 0x1.6de972p-122f,
     0.0f, 0.0f, 0.0f, 0x1.cc1222p-107f, 0x1.9da9eap-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d221cp-56f, 0.0f, 0x1.7c695ap-120f, 0.0f,
     0x1.712d7ap-104f, 0x1.9e0c32p-14f, 0.0f, 0.0f, 0x1.c93462p-48f, 0.0f, 0.0f, 0.0f,
     0x1.ca9ca8p-38f, 0x1.34cee6p-34f, 0x1.35c7eep-29f, 0.0f, 0.0f, 0x1.71893cp-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.375b64p-100f, 0.0f, 0.0f, 0x1.ba80b6p-51f,
     0.0f, 0.0f, 0x1.58b174p-64f, 0x1.d53808p-79f, 0x1.caab9p-112f, 0x1.c53602p-45f,
     0.0f, 0x1.1be344p-111f, 0.0f, 0x1.5a11fcp-98f, 0x1.9d640ep-10f, 0.0f,
     0x1.531a5cp-35f, 0x1.b3974cp-55f, 0x1.389134p-23f, 0.0f, 0.0f, 0x1.b2f8fep-113f,
     0x1.007aeep-19f, 0x1.84023ap-62f, 0x1.fd4d5ep-80f, 0.0f, 0.0f, 0x1.2fd56ap-71f,
     0x1.a747ecp-88f, 0x1.10838p-95f, 0.0f, 0x1.541374p-25f, 0x1.d528f6p-59f,
     0x1.d02a9ep-60f, 0x1.0dbb1cp-83f, 0.0f, 0x1.59f322p-1f, 0.0f, 0x1.0a164p-37f,
     0.0f, 0x1.ee406ep-105f, 0.0f, 0x1.84a56cp-125f, 0.0f, 0.0f, 0.0f, 0x1.45e01p-85f,
     0x1.b6eb9cp-9f, 0.0f, 0.0f, 0x1.d2e85ap-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d5e8ep-84f, 0x1.78becp-108f, 0x1.f42da4p-95f, 0.0f, 0x1.da890ap-98f,
     0x1.219db8p-55f, 0x1.6e5972p-66f, 0x1.35f30ap-86f, 0x1.59f07ap-18f, 0.0f,
     0x1.c052bep-81f, 0.0f, 0.0f, 0x1.e3fc82p-75f, 0.0f, 0x1.762cdcp-30f,
     0x1.a2b2b8p-23f, 0.0f, 0x1.becb6p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d4d76p-104f,
     0.0f, 0x1.30fb9ap-98f, 0x1.f5bf9ap-28f, 0x1.85c882p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82b856p-113f, 0x1.4a9d4p-108f, 0x1.4509aep-85f, 0.0f, 0.0f, 0.0f,
     0x1.04065ap-114f, 0x1.d1faep-68f, 0.0f, 0x1.0bc7aep-75f, 0x1.56c4f4p-73f, 0.0f,
     0x1.51e0a2p-125f, 0.0f, 0x1.015a2ep-61f, 0.0f, 0.0f, 0.0f, 0x1.0f61e6p-27f, 0.0f,
     0.0f, 0x1.b45212p-63f, 0x1.7ca9bap-95f, 0x1.2b3ea6p-28f, 0.0f, 0x1.9b6984p-9f,
     0.0f, 0.0f, 0x1.c2447ap-114f, 0x1.e7ee0ap-61f, 0x1.23c9f4p-84f, 0x1.175ba6p-95f,
     0x1.8e3d38p-21f, 0x1.6b04ecp-96f, 0.0f, 0x1.6b662p-34f, 0x1.1a09p-64f,
     0x1.34d0d8p-73f, 0.0f, 0x1.4b4c74p-7f, 0x1.283b22p-99f, 0x1.9683eap-21f,
     0x1.740656p-122f, 0.0f, 0.0f, 0.0f, 0x1.cf9ce6p-89f, 0x1.4e0254p-64f,
     0x1.ab4852p-94f, 0x1.907fecp-50f, 0.0f, 0x1.0dec76p-68f, 0x1.edca8ep-51f, 0.0f,
     0.0f, 0x1.5e26fcp-79f, 0x1.13b3ep-18f, 0x1.785632p-86f, 0.0f, 0x1.279d2p-121f,
     0.0f, 0x1.8f99ep-13f, 0.0f, 0.0f, 0x1.eb4718p-37f, 0x1.ef32aep-50f, 0.0f,
     0x1.abdd78p-51f, 0x1.f8a93cp-25f, 0x1.355adap-10f, 0.0f, 0x1.1dd5cp-9f,
     0x1.813222p-3f, 0x1.132b04p-108f, 0x1.1740a8p-120f, 0x1.447816p-106f,
     0x1.c424e4p-40f, 0.0f, 0x1.45b4a2p-108f, 0.0f, 0x1.417758p-116f, 0x1.6234eep-18f,
     0.0f, 0.0f, 0x1.b837f2p-49f, 0.0f, 0.0f, 0x1.89b024p-60f, 0x1.83f4e4p-124f, 0.0f,
     0x1.7cfb2p-102f, 0.0f, 0x1.5a1bfap-67f, 0.0f, 0x1.c9cdb2p-92f, 0x1.8294cap-108f,
     0.0f, 0x1.e0195p-72f, 0x1.2a5fbcp-79f, 0x1.da7cbap-30f, 0x1.416f1ap-113f,
     0x1.1d5d2ep-14f, 0x1.1b59cep-18f, 0x1.c318f2p-113f, 0.0f, 0.0f, 0x1.735b1cp-56f,
     0.0f, 0x1.a5ec72p-74f, 0.0f, 0.0f, 0x1.3aa8bep-5f, 0x1.488736p-39f,
     0x1.e568f2p-2f, 0x1.eb3014p-92f, 0x1.be5d8cp-62f, 0.0f, 0x1.c6f4ep-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e907b8p-33f, 0x1.2e18a8p-122f, 0x1.5a96cep-118f, 0.0f,
     0.0f, 0.0f, 0x1.65840ap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fd112p-53f, 0.0f,
     0x1.ed6dp-49f, 0x1.dfc3ecp-125f, 0.0f, 0x1.bde6dcp-41f, 0x1.6096fap-31f,
     0x1.7fd0e6p-98f, 0.0f, 0.0f, 0x1.bd7288p-29f, 0.0f, 0.0f, 0x1.01444ep-108f, 0.0f,
     0x1.9fca2p-102f, 0.0f, 0x1.a63a98p-40f, 0x1.acbc56p-93f, 0x1.adc55ep-76f, 0.0f,
     0.0f, 0x1.96cf52p-52f, 0x1.8e9baep-38f, 0x1.9018p-17f, 0x1.7de08ap-7f,
     0x1.9192d6p-59f, 0x1.ecb002p-87f, 0.0f, 0x1.887968p-48f, 0x1.124dfep-55f, 0.0f,
     0.0f, 0x1.74672cp-45f, 0.0f, 0x1.665dcp-122f, 0x1.9a7d82p-32f, 0x1.e3187p-53f,
     0.0f, 0x1.d84434p-90f, 0x1.ce10b8p-77f, 0x1.42011cp-70f, 0x1.e9336cp-101f, 0.0f,
     0x1.c74872p-51f, 0x1.c8f6eep-104f, 0.0f, 0x1.7d5976p-62f, 0.0f, 0.0f,
     0x1.2b07bp-126f, 0x1.20fee8p-117f, 0x1.5060fap-78f, 0x1.8953cep-83f, 0.0f,
     0x1.c633a4p-106f, 0.0f, 0x1.98394ep-119f, 0.0f, 0x1.fbc67ap-33f, 0x1.a67182p-58f,
     0.0f, 0x1.8e35f2p-26f, 0.0f, 0x1.43a1eep-11f, 0x1.ff0094p-121f, 0.0f, 0.0f,
     0x1.d1adp-51f, 0x1.fd8618p-5f, 0.0f, 0x1.3a67bap-42f, 0x1.8d018cp-7f, 0.0f,
     0x1.04e11cp-120f, 0.0f, 0.0f, 0.0f, 0x1.a85f8ep-74f, 0.0f, 0x1.2829b8p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.855e76p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7299eep-119f, 0.0f, 0.0f, 0.0f, 0x1.93ea6ap-42f, 0.0f, 0.0f, 0.0f,
     0x1.8e23a6p-70f, 0.0f, 0.0f, 0.0f, 0x1.ef9d8cp-15f, 0.0f, 0.0f, 0x1.d0cb3cp-55f,
     0.0f, 0.0f, 0.0f, 0x1.99cd5p-13f, 0.0f, 0x1.43fa9cp-65f, 0.0f, 0x1.7e46c4p-36f,
     0.0f, 0x1.4b7cf6p-21f, 0.0f, 0.0f, 0.0f, 0x1.4b7e7p-61f, 0x1.f5c1b8p-102f, 0.0f,
     0x1.cd451ap-2f, 0x1.188716p-41f, 0x1.f559bep-114f, 0x1.e04d8p-79f,
     0x1.3e28d2p-20f, 0x1.6a6fc4p-42f, 0.0f, 0x1.b5fdb6p-85f, 0x1.7db46ep-102f,
     0x1.cb1174p-33f, 0x1.cd61ccp-30f, 0.0f, 0x1.e4ec14p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eea17p-91f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosf4_u10avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincosf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincosf4_u10avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
