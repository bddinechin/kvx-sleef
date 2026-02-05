/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtf4_u35avx2128.c --function \
 *     Sleef_finz_cbrtf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.fa3324p-86f, 0x1.a09cf2p-51f, 0x1.ea0826p-16f, 0x1.8e06d4p-6f, 0.0f,
     0x1.c39158p-46f, 0x1.ce1baep-56f, 0.0f, 0x1.dd4164p-102f, 0.0f, 0x1.42feb6p-39f,
     0x1.2f1638p-81f, 0x1.37c536p-32f, 0.0f, 0.0f, 0x1.268baap-20f, 0x1.ad7c2ap-6f,
     0x1.e1b5a4p-125f, 0.0f, 0x1.4a22f4p-80f, 0x1.0b2996p-88f, 0x1.a25e2p-103f, 0.0f,
     0x1.a9d084p-68f, 0.0f, 0.0f, 0.0f, 0x1.96ead2p-18f, 0.0f, 0.0f, 0x1.5b29e6p-114f,
     0.0f, 0x1.5870c4p-101f, 0.0f, 0x1.a94028p-17f, 0x1.286132p-104f,
     0x1.7d9964p-100f, 0.0f, 0x1.02a452p-121f, 0x1.3bd9ccp-15f, 0.0f, 0x1.2d508cp-88f,
     0x1.25db7ap-18f, 0.0f, 0x1.d03674p-53f, 0.0f, 0x1.0c3d16p-55f, 0x1.0af70cp-99f,
     0.0f, 0x1.bdf892p-73f, 0x1.ba43ecp-22f, 0x1.87badap-17f, 0x1.9f49f6p-57f,
     0x1.ba4cd8p-43f, 0x1.c3fbf8p-82f, 0x1.c0844cp-49f, 0x1.1b6c6ap-37f, 0.0f, 0.0f,
     0x1.bbd446p-19f, 0.0f, 0.0f, 0x1.84d1p-35f, 0x1.28ec88p-36f, 0x1.0d7acap-126f,
     0x1.3c53a6p-77f, 0.0f, 0.0f, 0.0f, 0x1.0512a2p-32f, 0.0f, 0x1.e0c91p-2f, 0.0f,
     0.0f, 0x1.5fb502p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.592f68p-110f, 0x1.f3f3eep-41f,
     0x1.5407d6p-116f, 0x1.92a1d2p-100f, 0x1.07184p-108f, 0x1.5cfcfcp-88f,
     0x1.aac338p-12f, 0.0f, 0.0f, 0x1.d6a044p-68f, 0x1.eb4a1ap-19f, 0x1.a453fep-95f,
     0x1.f4e524p-5f, 0x1.efe366p-42f, 0x1.6320a4p-103f, 0x1.730d2p-60f,
     0x1.688e84p-97f, 0x1.948af2p-112f, 0.0f, 0.0f, 0x1.7c452ap-108f, 0x1.e8c9dcp-1f,
     0.0f, 0.0f, 0x1.5250eep-115f, 0.0f, 0x1.150ed8p-62f, 0x1.6311dep-32f,
     0x1.89ddaap-50f, 0.0f, 0x1.2603f2p-6f, 0x1.58f6eap-38f, 0.0f, 0x1.7bb096p-124f,
     0x1.ef435ep-54f, 0.0f, 0x1.4f7afp-34f, 0x1.9606ecp-115f, 0.0f, 0.0f, 0.0f,
     0x1.e0c992p-76f, 0.0f, 0x1.89de0ap-48f, 0x1.364f66p-87f, 0.0f, 0x1.928ee4p-75f,
     0x1.22452p-14f, 0.0f, 0x1.0307c2p-56f, 0x1.ca0392p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.436ccp-21f, 0.0f, 0x1.fbefe6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa995ap-69f, 0x1.97ae32p-125f, 0.0f, 0x1.c3d542p-89f, 0.0f, 0.0f,
     0x1.98c1a4p-126f, 0x1.1677ap-43f, 0x1.5edd5ap-75f, 0x1.a17f6ep-76f, 0.0f,
     0x1.a3a72cp-102f, 0.0f, 0.0f, 0.0f, 0x1.780596p-93f, 0x1.389e42p-30f,
     0x1.ffe678p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.331506p-57f, 0x1.4d2e18p-108f,
     0x1.ff3b14p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60a7d4p-27f, 0.0f, 0.0f,
     0x1.19fdb4p-125f, 0x1.4ae496p-32f, 0.0f, 0x1.2829d2p-124f, 0x1.259f14p-68f, 0.0f,
     0.0f, 0x1.762b3ep-66f, 0.0f, 0.0f, 0.0f, 0x1.b2782cp-4f, 0.0f, 0x1.245146p-58f,
     0x1.64da16p-103f, 0.0f, 0.0f, 0.0f, 0x1.9341c8p-63f, 0.0f, 0x1.42389cp-90f,
     0x1.217eb8p-2f, 0.0f, 0x1.8bca5ep-104f, 0x1.2d07bap-77f, 0x1.7be90ap-104f, 0.0f,
     0.0f, 0x1.73ab12p-118f, 0.0f, 0x1.196666p-32f, 0.0f, 0x1.8be898p-9f,
     0x1.01794p-58f, 0.0f, 0x1.c74c7ap-64f, 0x1.ce97e8p-29f, 0x1.f97792p-118f, 0.0f,
     0.0f, 0x1.f1e482p-61f, 0.0f, 0.0f, 0x1.a44adep-104f, 0.0f, 0x1.d67f0ep-34f,
     0x1.0782acp-8f, 0x1.f89e4p-63f, 0x1.313b9cp-38f, 0x1.0e4daep-1f, 0x1.c99826p-96f,
     0x1.6c693ap-72f, 0.0f, 0x1.2e4cd8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3662bap-23f, 0x1.836382p-122f, 0x1.714392p-54f, 0.0f, 0x1.cca55ap-98f,
     0x1.8bf2c2p-49f, 0.0f, 0x1.9fa8c6p-29f, 0x1.14a65cp-107f, 0x1.158438p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.430a36p-59f, 0x1.f4e762p-65f, 0.0f, 0x1.68de1p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fde15ep-61f, 0x1.bc6bc4p-15f, 0.0f, 0x1.252beap-44f, 0.0f,
     0x1.74888ep-121f, 0.0f, 0x1.00e06cp-45f, 0x1.c1de7ap-7f, 0x1.17c352p-84f,
     0x1.322cbap-20f, 0.0f, 0x1.8fa6e4p-93f, 0x1.c4870cp-122f, 0x1.156ecep-17f, 0.0f,
     0x1.b54188p-82f, 0.0f, 0.0f, 0x1.87c632p-100f, 0x1.2372fp-73f, 0x1.a0e32ap-20f,
     0.0f, 0.0f, 0x1.995534p-76f, 0x1.c053cap-105f, 0.0f, 0x1.46a7f4p-81f, 0.0f, 0.0f,
     0x1.fb5942p-81f, 0.0f, 0x1.e1454ep-43f, 0x1.814a94p-38f, 0x1.07daap-70f,
     0x1.71fbb2p-119f, 0x1.e02022p-44f, 0x1.ae0a06p-33f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.a83aap-57f, 0.0f, 0x1.c1ce38p-71f, 0x1.6d36b8p-36f, 0x1.ec8fcap-70f,
     0x1.55619cp-119f, 0x1.0162d4p-17f, 0.0f, 0x1.8c68d4p-106f, 0x1p0f,
     0x1.ddf278p-84f, 0x1.75ed1ep-3f, 0.0f, 0x1.710266p-52f, 0.0f, 0.0f,
     0x1.1cb42ap-22f, 0.0f, 0x1.49b74p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.939d14p-112f, 0x1.0e35b4p-1f, 0.0f, 0x1.39192p-116f, 0x1p0f, 0x1.ab8f2cp-37f,
     0.0f, 0.0f, 0.0f, 0x1.eb738p-112f, 0x1.ab1384p-12f, 0x1.3387dep-50f, 0.0f, 0.0f,
     0.0f, 0x1.97ef48p-19f, 0.0f, 0x1.f6990ap-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.776e18p-39f, 0.0f, 0x1.e8d70cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.883264p-106f,
     0x1.eb815ap-72f, 0.0f, 0x1.4b8514p-117f, 0x1.382fdap-15f, 0.0f, 0x1.2d9fdp-84f,
     0.0f, 0.0f, 0.0f, 0x1.1f3b6cp-119f, 0.0f, 0x1.5bb1a6p-1f, 0x1.17097p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.35ea54p-99f, 0x1.c0ec9ep-72f, 0x1.47be7p-19f, 0.0f,
     0.0f, 0x1.af1392p-89f, 0.0f, 0x1.d51b88p-113f, 0.0f, 0x1.4382p-5f,
     0x1.acb516p-50f, 0.0f, 0x1.5f108cp-4f, 0.0f, 0x1.f3584p-21f, 0x1.ae385ep-44f,
     0.0f, 0x1.0d8c06p-123f, 0.0f, 0.0f, 0.0f, 0x1.12d68ap-125f, 0x1.b62c48p-83f,
     0x1.35d7ccp-74f, 0x1.e973eep-90f, 0.0f, 0x1.5c16d8p-108f, 0.0f, 0x1.75758ep-50f,
     0x1.4ac85cp-88f, 0x1.db2b9ap-121f, 0x1.7bfa6ap-114f, 0x1.acd96p-45f,
     0x1.648706p-53f, 0x1.17d9bp-26f, 0x1.c58bap-117f, 0.0f, 0x1.63bd52p-60f, 0.0f,
     0x1.18ee2cp-29f, 0.0f, 0x1.84c5acp-19f, 0x1.749d1cp-90f, 0.0f, 0.0f, 0.0f,
     0x1.7a381ap-62f, 0.0f, 0x1.983c8p-117f, 0x1.ed83e2p-109f, 0x1.32807ep-81f,
     0x1.810178p-28f, 0x1.5526a8p-92f, 0x1.f33706p-112f, 0.0f, 0x1.00083ap-37f,
     0x1.bc6822p-106f, 0.0f, 0.0f, 0.0f, 0x1.10e976p-4f, 0x1.22d9ap-124f,
     0x1.fd9be2p-65f, 0x1.68e4fcp-69f, 0x1.82748cp-15f, 0.0f, 0x1.4c0048p-87f,
     0x1.c0b4b2p-65f, 0x1.13f1e4p-3f, 0.0f, 0x1.0d4a44p-61f, 0.0f, 0x1.5dfea8p-93f,
     0x1.2234ecp-48f, 0.0f, 0.0f, 0x1.55ee1ap-104f, 0x1.c8407p-42f, 0.0f,
     0x1.ba2fa6p-51f, 0.0f, 0x1.52b6ecp-82f, 0x1.017e5ep-29f, 0x1.76238ep-35f,
     0x1.af30ep-64f, 0.0f, 0.0f, 0x1.b457b2p-52f, 0x1.99d9dep-62f, 0x1.7f6dfcp-74f,
     0.0f, 0.0f, 0x1.f7693ap-104f, 0x1.43f1fep-17f, 0x1.7a7fe4p-34f, 0.0f, 0.0f, 0.0f,
     0x1.6b2418p-46f, 0.0f, 0x1.17ddcp-1f, 0x1.0538dcp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.433864p-62f, 0x1.4c8282p-121f, 0.0f, 0.0f, 0.0f, 0x1.08576cp-46f,
     0x1.2e5c96p-77f, 0x1.e3f272p-92f, 0x1.d70cbp-79f, 0x1.5a459ap-1f, 0x1.5ad8d4p-8f,
     0x1.dbfc1cp-67f, 0.0f, 0.0f, 0x1.b39d62p-111f, 0x1.38edc4p-32f, 0x1.67351ap-106f,
     0.0f, 0x1.10d744p-110f, 0x1.1e3f8p-16f, 0x1.294a88p-38f, 0x1.86f72ep-1f, 0.0f,
     0.0f, 0x1.eba3cep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cec99ap-74f,
     0x1.3f293cp-63f, 0.0f, 0x1.357718p-101f, 0x1.a85ea6p-45f, 0.0f, 0.0f,
     0x1.d67386p-17f, 0.0f, 0x1.889546p-38f, 0x1.96d91cp-64f, 0.0f, 0x1.8e2586p-26f,
     0x1.2a7824p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.059088p-11f, 0.0f, 0.0f,
     0x1.fa50ccp-9f, 0x1.898aa6p-110f, 0x1.a3aca4p-61f, 0.0f, 0x1.6e13c8p-121f, 0.0f,
     0x1.c5d1eap-108f, 0.0f, 0x1.4c7704p-49f, 0.0f, 0x1.8c74c2p-103f, 0.0f,
     0x1.482dbp-23f, 0.0f, 0x1.36a51cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f39f8ep-105f, 0x1.ebdeb4p-41f, 0x1.b8ca04p-86f, 0.0f, 0x1.82349ep-92f,
     0x1.54f828p-83f, 0x1.94b1dp-24f, 0.0f, 0x1.05818ep-54f, 0x1.0c96d8p-41f, 0.0f,
     0x1.990052p-26f, 0x1.c66746p-85f, 0x1.6d2d2p-126f, 0x1.4e8e5p-123f,
     0x1.71b80cp-41f, 0.0f, 0x1.c71c96p-7f, 0x1.ca41f4p-57f, 0x1.fc082ep-89f, 0.0f,
     0.0f, 0.0f, 0x1.ee60fep-119f, 0.0f, 0.0f, 0x1.d5d6cep-65f, 0x1.2877fap-101f,
     0.0f, 0.0f, 0x1.2b4968p-108f, 0.0f, 0.0f, 0x1.9ed8acp-89f, 0.0f, 0.0f, 0.0f,
     0x1.22f42ap-44f, 0.0f, 0x1.1c6906p-64f, 0x1.bcb778p-102f, 0x1.298ea8p-123f,
     0x1.11290ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d20d24p-85f, 0x1.4ca74cp-56f,
     0x1p0f, 0x1.e0f4bap-73f, 0x1.cbe4d8p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.db924cp-73f, 0x1.8225cap-108f, 0x1.ababap-28f, 0x1.923f26p-31f,
     0x1.9ec012p-93f, 0x1.98f776p-92f, 0.0f, 0x1.f2930cp-77f, 0x1.9d3dc6p-10f,
     0x1.1a513cp-74f, 0.0f, 0x1.2b8e34p-105f, 0x1.c69ba4p-21f, 0x1.67da2ap-32f, 0.0f,
     0.0f, 0x1.5bf07ap-48f, 0x1.9b281ep-109f, 0.0f, 0.0f, 0x1.f89e3ep-112f,
     0x1.ae0578p-112f, 0.0f, 0.0f, 0x1.4de6a6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3fdf84p-126f, 0.0f, 0x1.120922p-71f, 0.0f, 0x1.19f97p-42f, 0.0f, 0.0f,
     0x1.5e0542p-85f, 0x1.3d0da2p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0377b8p-68f,
     0x1.652a18p-23f, 0.0f, 0.0f, 0.0f, 0x1.9fa6dep-13f, 0.0f, 0.0f, 0.0f,
     0x1.9a073ep-18f, 0.0f, 0x1.0d0cbcp-92f, 0x1.e54b4ep-52f, 0.0f, 0x1.e7c684p-123f,
     0x1.0efc54p-66f, 0x1.c762d6p-34f, 0.0f, 0.0f, 0.0f, 0x1.156584p-68f,
     0x1.bc74fep-37f, 0x1p0f, 0x1.274bf6p-59f, 0.0f, 0x1.9dba6p-2f, 0.0f,
     0x1.0c8658p-120f, 0x1.abecbep-46f, 0x1.91c856p-14f, 0.0f, 0.0f, 0x1.f4a71cp-15f,
     0.0f, 0.0f, 0.0f, 0x1.86dc92p-107f, 0x1.f80d42p-63f, 0.0f, 0.0f, 0x1.93ca0ap-72f,
     0x1.a38ba6p-117f, 0x1.3bbc32p-23f, 0.0f, 0x1.d31ac2p-70f, 0x1.1f369ap-79f, 0.0f,
     0.0f, 0.0f, 0x1.5cedfep-44f, 0x1.c3c33ap-108f, 0x1.013446p-64f, 0x1.6100aep-96f,
     0x1.c1458cp-43f, 0x1.ce66f2p-104f, 0x1.cbb694p-121f, 0.0f, 0x1.36819p-121f, 0.0f,
     0x1.136776p-21f, 0.0f, 0.0f, 0x1.8af9bap-27f, 0x1.fae3ecp-71f, 0.0f,
     0x1.c39286p-23f, 0x1.09ba2ep-68f, 0x1.bbc16ap-12f, 0x1.eb23dcp-110f,
     0x1.76703ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12df3p-116f, 0x1.85a13ap-66f,
     0x1.aabea8p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96f3d8p-22f,
     0x1.4de484p-107f, 0x1.49a32ep-12f, 0.0f, 0x1.6f127cp-31f, 0x1.22d21ep-122f,
     0x1.5ccfb6p-77f, 0x1.452d16p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d93392p-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34efdcp-78f, 0x1.d632f4p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.233c58p-16f, 0x1.f3f75cp-100f, 0x1.670ce6p-104f, 0.0f, 0.0f,
     0x1.9fc38p-78f, 0x1.473edap-81f, 0.0f, 0x1.0ea79ap-113f, 0.0f, 0x1.4c39ep-63f,
     0.0f, 0x1.522368p-38f, 0x1.44faeep-60f, 0x1.d67046p-34f, 0.0f, 0.0f,
     0x1.76ee5ap-42f, 0x1.9c6d0ep-114f, 0.0f, 0x1.9761fap-42f, 0.0f, 0.0f,
     0x1.f36f26p-81f, 0.0f, 0x1.f04bf6p-71f, 0x1.70a8c8p-42f, 0x1.b3089ep-14f,
     0x1.df3f4ep-87f, 0.0f, 0x1.36b732p-93f, 0x1.0911a4p-120f, 0x1.72aba4p-2f, 0.0f,
     0x1.aa3218p-100f, 0.0f, 0.0f, 0x1.3afbd2p-79f, 0.0f, 0.0f, 0x1.a74bdcp-63f,
     0x1.35338cp-111f, 0x1.4544aap-4f, 0x1.077906p-124f, 0x1.19b39p-35f, 0.0f,
     0x1.282a5p-6f, 0x1.edfe1ap-79f, 0.0f, 0x1.274a4ap-111f, 0.0f, 0.0f,
     0x1.a3191cp-30f, 0.0f, 0.0f, 0x1.e94e8p-86f, 0x1.42b00cp-51f, 0x1.789508p-20f,
     0.0f, 0.0f, 0x1.013952p-55f, 0x1.ceee3p-92f, 0x1.0ef07cp-89f, 0x1.c0a31ap-108f,
     0.0f, 0.0f, 0.0f, 0x1.9e14a8p-126f, 0.0f, 0.0f, 0x1.86bfe8p-114f,
     0x1.bae8c6p-120f, 0.0f, 0.0f, 0x1.590aa8p-82f, 0.0f, 0.0f, 0x1.b053c6p-73f, 0.0f,
     0.0f, 0x1.c974c2p-88f, 0x1.cf030ep-111f, 0x1.9691c4p-30f, 0.0f, 0x1.a90c78p-45f,
     0.0f, 0.0f, 0.0f, 0x1.6e4ab8p-116f, 0x1.65d622p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f57f8ep-51f, 0.0f, 0.0f, 0x1.f5088cp-75f, 0.0f, 0.0f, 0.0f, 0x1.9545f4p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbf8c8p-95f, 0.0f, 0x1.290a5p-79f, 0.0f, 0.0f,
     0x1.5428aep-30f, 0.0f, 0x1.20268ep-18f, 0x1.97a5ecp-76f, 0x1.1cb51ap-42f,
     0x1.e30818p-106f, 0.0f, 0x1.3f2372p-2f, 0.0f, 0.0f, 0x1.0eeadcp-107f, 0.0f,
     0x1.78d6b4p-105f, 0x1.47ea12p-68f, 0.0f, 0.0f, 0.0f, 0x1.b09f6cp-71f, 0.0f, 0.0f,
     0.0f, 0x1.c737eep-22f, 0x1.826254p-30f, 0.0f, 0x1.350af4p-69f, 0x1.f05f66p-86f,
     0.0f, 0x1.d6bb02p-18f, 0.0f, 0.0f, 0.0f, 0x1.4390cep-111f, 0x1.39d912p-61f,
     0x1.2b9736p-7f, 0.0f, 0.0f, 0.0f, 0x1.230a46p-55f, 0x1.9d847cp-7f,
     0x1.15d03p-32f, 0.0f, 0x1.59eeb8p-122f, 0x1.76b86ap-22f, 0.0f, 0.0f,
     0x1.cd541cp-92f, 0.0f, 0.0f, 0.0f, 0x1.57ae0ap-81f, 0.0f, 0x1.e59ecap-33f, 0.0f,
     0.0f, 0x1.b7cfcp-9f, 0x1.4eefa8p-7f, 0x1.65e364p-37f, 0.0f, 0x1.36902p-78f,
     0x1.e1c2d2p-125f, 0.0f, 0.0f, 0x1.6a4f48p-80f, 0x1.335522p-89f, 0x1.25920ap-62f,
     0.0f, 0.0f, 0.0f, 0x1.c3a45p-35f, 0x1.e3a6b2p-54f, 0.0f, 0x1.7a4778p-39f, 0.0f,
     0x1.e355bp-38f, 0x1.8cff1ep-103f, 0x1.d498eap-69f, 0x1.062908p-120f,
     0x1.ebe8dep-60f, 0x1.a3e24p-21f, 0.0f, 0x1.2387b8p-61f, 0x1.48a3cep-84f,
     0x1.471ca6p-32f, 0x1.589b42p-30f, 0x1.001ecp-96f, 0.0f, 0x1.317f46p-118f, 0.0f,
     0x1.590f84p-60f, 0.0f, 0.0f, 0x1.747aaap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58bd36p-40f, 0x1.1d8236p-105f, 0x1.4f016p-20f, 0x1.b8b2cep-11f,
     0x1.06bf42p-68f, 0x1.07776ep-96f, 0.0f, 0.0f, 0x1.09292p-75f, 0.0f, 0.0f, 0.0f,
     0x1.73a9f4p-68f, 0.0f, 0.0f, 0x1.9e9382p-116f, 0.0f, 0x1.68402ep-117f, 0.0f,
     0.0f, 0x1.1dcf86p-27f, 0.0f, 0.0f, 0.0f, 0x1.b2b3bap-76f, 0.0f, 0.0f, 0.0f,
     0x1.ed1c96p-86f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_cbrtf4_u35avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_cbrtf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cbrtf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
