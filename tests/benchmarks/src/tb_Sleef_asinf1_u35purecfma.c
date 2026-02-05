/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf1_u35purecfma.c --function \
 *     Sleef_asinf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f27acp-44f,
     0x1.09db76p-52f, 0x1.15dedap-29f, 0.0f, 0x1.13474cp-11f, 0.0f, 0x1.1c3ec6p-24f,
     0.0f, 0x1.a35958p-48f, 0x1.9bff5cp-56f, 0x1.d2f5aap-94f, 0.0f, 0.0f, 0.0f,
     0x1.a1489cp-17f, 0.0f, 0x1.0b71f6p-44f, 0.0f, 0x1.068b48p-18f, 0.0f,
     0x1.d504f2p-9f, 0x1.69e1a8p-59f, 0.0f, 0x1.ed6e6p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.10ff0ap-83f, 0.0f, 0.0f, 0x1.7d61eep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a019ap-87f, 0.0f, 0x1.d36c5ep-37f, 0.0f, 0.0f, 0.0f, 0x1.bc829cp-85f,
     0x1.908f5ep-69f, 0.0f, 0.0f, 0x1.0ce53cp-3f, 0x1.c9c492p-6f, 0.0f,
     0x1.3b5d2cp-35f, 0x1.3a0b6cp-41f, 0.0f, 0.0f, 0x1.f552bp-15f, 0.0f,
     0x1.4709fp-90f, 0.0f, 0.0f, 0x1.b9f3f2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3e816p-110f, 0x1.3b9b7ap-5f,
     0x1.f51bf4p-73f, 0.0f, 0x1.7ca966p-106f, 0.0f, 0x1.b462aap-73f, 0x1.6b84f4p-64f,
     0x1.5b767cp-52f, 0x1.a921dep-79f, 0x1.198f02p-117f, 0.0f, 0x1.214b8p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.829624p-76f, 0x1.262d3ap-4f, 0.0f, 0.0f, 0x1.749524p-86f,
     0x1.f2dbd4p-81f, 0.0f, 0.0f, 0x1.015ac6p-86f, 0x1.9de2bcp-18f, 0.0f, 0.0f, 0.0f,
     0x1.93b57p-43f, 0x1.509a5ap-23f, 0x1.fb55dp-105f, 0x1.006e82p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e46e96p-80f, 0.0f, 0.0f, 0.0f, 0x1.506152p-50f, 0x1.0ffd6p-107f,
     0x1.8c60f2p-97f, 0.0f, 0.0f, 0.0f, 0x1.1c73f6p-66f, 0x1.0e0c8ep-34f,
     0x1.09179p-21f, 0.0f, 0x1.250874p-105f, 0.0f, 0x1.7c7e66p-118f, 0.0f,
     0x1.e76b6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d3d2ep-104f, 0x1.269bccp-58f,
     0x1.1bdcf6p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc8ec8p-99f, 0.0f,
     0x1.d87e84p-41f, 0x1.e64adep-26f, 0.0f, 0x1.669b1cp-63f, 0x1.c6be94p-15f, 0.0f,
     0.0f, 0.0f, 0x1.04d818p-121f, 0.0f, 0x1.6b029cp-36f, 0.0f, 0.0f, 0.0f,
     0x1.89d3f2p-60f, 0x1.6f5a1ap-72f, 0x1.2d6aa8p-76f, 0.0f, 0x1.c6ee78p-75f, 0.0f,
     0.0f, 0x1.917f22p-43f, 0x1.652b6ep-58f, 0.0f, 0.0f, 0x1.4a4ecep-4f,
     0x1.2044fp-8f, 0x1.6fe9dep-44f, 0.0f, 0x1.6d68ap-51f, 0x1.530e72p-114f, 0.0f,
     0.0f, 0.0f, 0x1.6df6eap-82f, 0x1.88849cp-110f, 0.0f, 0x1.058a1ep-11f, 0.0f, 0.0f,
     0x1.3178e4p-100f, 0.0f, 0x1.7a859p-114f, 0.0f, 0.0f, 0x1.29e334p-40f,
     0x1.31b552p-104f, 0.0f, 0.0f, 0x1.effbfap-53f, 0x1.8a32d2p-42f, 0.0f,
     0x1.21b694p-65f, 0.0f, 0x1.c9ca5p-105f, 0.0f, 0.0f, 0x1.e461bep-28f, 0.0f, 0.0f,
     0x1.dd74fp-18f, 0x1.c425c8p-28f, 0.0f, 0.0f, 0x1.b82cc8p-104f, 0x1.b253d4p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8f576p-102f, 0.0f, 0x1.e2655p-49f, 0.0f,
     0x1.60dac8p-75f, 0.0f, 0x1.75bb08p-66f, 0.0f, 0.0f, 0x1.cee816p-86f,
     0x1.461c5cp-109f, 0.0f, 0.0f, 0x1.40aa5p-43f, 0.0f, 0x1.0b1f96p-38f, 0.0f, 0.0f,
     0.0f, 0x1.bfa0bp-35f, 0.0f, 0.0f, 0x1.2112c8p-84f, 0.0f, 0.0f, 0.0f,
     0x1.447b86p-1f, 0x1.db8f78p-53f, 0x1.4da378p-106f, 0.0f, 0.0f, 0x1.475fb6p-32f,
     0.0f, 0x1.6abe7p-78f, 0.0f, 0x1.ca259p-10f, 0x1.2fb3ccp-6f, 0x1.71e3d6p-9f, 0.0f,
     0.0f, 0.0f, 0x1.4546c6p-62f, 0x1.d81624p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46eb94p-69f, 0x1.02426cp-23f, 0x1.587cdap-50f, 0x1.c654bcp-40f, 0.0f, 0.0f,
     0x1.3f3c0ap-93f, 0x1.714d64p-20f, 0.0f, 0x1.c03a44p-11f, 0.0f, 0x1.6a4a82p-35f,
     0.0f, 0x1.58403p-76f, 0.0f, 0x1.329c56p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9463b4p-20f, 0.0f, 0.0f, 0.0f, 0x1.258236p-107f, 0x1.6a3fbap-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ba6f9p-65f, 0.0f, 0x1.6d647ap-42f, 0.0f, 0x1.ba582ep-71f, 0.0f,
     0x1.b094aap-91f, 0.0f, 0x1.eb25bcp-86f, 0x1.1e2106p-58f, 0x1.f54766p-13f,
     0x1.732888p-81f, 0x1.65bd8ap-92f, 0x1.e5b946p-35f, 0.0f, 0.0f, 0x1.e7ad1p-109f,
     0x1.f2773ap-122f, 0.0f, 0x1.212322p-25f, 0x1.d89d82p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8be8fcp-77f, 0x1.bfeae8p-51f, 0x1.8a5e7ap-107f, 0x1.2a433ap-50f, 0.0f,
     0.0f, 0x1.43ba68p-120f, 0.0f, 0x1.45ad2p-118f, 0x1.465204p-72f, 0.0f,
     0x1.b0a632p-23f, 0x1.b9c8fep-123f, 0.0f, 0x1.6ecfd4p-91f, 0.0f, 0.0f,
     0x1.6b98cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a8cbcp-103f,
     0x1.bf1dbp-110f, 0x1.56c42ap-76f, 0.0f, 0x1.006024p-29f, 0x1.8e917p-10f, 0.0f,
     0.0f, 0.0f, 0x1.9594dp-52f, 0x1.11c16ap-40f, 0.0f, 0x1.3e251ap-34f,
     0x1.6559dcp-99f, 0.0f, 0.0f, 0.0f, 0x1.20f8cap-115f, 0.0f, 0.0f,
     0x1.0082cap-121f, 0x1.9d936ep-97f, 0.0f, 0x1.0fc65p-21f, 0.0f, 0x1.5f5ab4p-122f,
     0.0f, 0x1.c62dbep-64f, 0x1.8d1b9ap-93f, 0x1.775ac6p-77f, 0x1.802cap-19f, 0.0f,
     0x1.d2ae8ep-99f, 0x1.d649b2p-98f, 0x1.5ace86p-119f, 0x1.9cfc7cp-83f, 0.0f, 0.0f,
     0x1.36ea28p-65f, 0x1.3e9312p-43f, 0.0f, 0x1.5fc8b2p-51f, 0.0f, 0.0f,
     0x1.1eb978p-125f, 0x1.a481d2p-41f, 0x1.2ee208p-88f, 0x1.692f8ep-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2403bep-35f, 0.0f, 0x1.bc6d2p-105f, 0x1.ba2fd8p-25f,
     0x1.a3325p-107f, 0.0f, 0.0f, 0x1.d0c6bcp-113f, 0x1.b7abb4p-2f, 0x1.d7f324p-102f,
     0x1.d1f374p-60f, 0x1.7ac6ccp-114f, 0.0f, 0.0f, 0x1.aa01f4p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f6d0eap-120f, 0x1.0de9b2p-9f, 0.0f, 0.0f, 0.0f, 0x1.e24caep-121f,
     0x1.f07fb8p-10f, 0.0f, 0x1.28d0bcp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d30a64p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfd80cp-4f,
     0x1.273dcep-107f, 0.0f, 0x1.bd7f9ep-98f, 0.0f, 0.0f, 0.0f, 0x1.bbb694p-78f, 0.0f,
     0x1.823fb4p-75f, 0.0f, 0x1.1aef78p-39f, 0.0f, 0.0f, 0x1.e74adcp-112f, 0.0f, 0.0f,
     0x1.19714ap-28f, 0x1.0e75fcp-59f, 0x1.c3499cp-43f, 0x1.dbe58ep-5f,
     0x1.d281d2p-112f, 0.0f, 0x1.15c17ap-35f, 0x1.f9a4b4p-51f, 0.0f, 0.0f, 0.0f,
     0x1.0904fep-95f, 0x1.42f448p-20f, 0.0f, 0x1.335308p-72f, 0.0f, 0x1.40c162p-55f,
     0.0f, 0x1.fbffe6p-49f, 0.0f, 0x1.163f08p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.339fd4p-12f, 0x1.934352p-73f, 0.0f, 0x1.29547ep-113f, 0x1.2a55dap-75f,
     0x1.1d1a64p-109f, 0.0f, 0.0f, 0x1.410c9ep-120f, 0x1.dc4fcp-87f, 0.0f, 0.0f, 0.0f,
     0x1.1648e4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6290cep-108f, 0x1.23a518p-96f,
     0x1.7bdca8p-46f, 0x1.25ad82p-41f, 0.0f, 0.0f, 0x1.f42a96p-22f, 0x1.bb6e02p-56f,
     0x1.8b4162p-84f, 0x1.95e91p-116f, 0x1.3b49d6p-61f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.7a258ap-125f, 0.0f, 0x1.5cb682p-12f, 0.0f, 0x1.42b3d8p-121f, 0.0f,
     0x1.700c2ap-31f, 0.0f, 0x1.144a84p-80f, 0x1.31fd7cp-23f, 0x1.24856p-61f, 0.0f,
     0x1.88cc66p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8a37cp-95f, 0.0f, 0.0f,
     0x1.a4d42cp-49f, 0x1.95ecdcp-113f, 0x1.824c2cp-42f, 0x1.5b529ap-118f, 0.0f, 0.0f,
     0x1.4bbe3p-22f, 0.0f, 0x1.4e7a7ep-17f, 0.0f, 0.0f, 0x1.e51a26p-13f,
     0x1.bb7af6p-12f, 0.0f, 0x1.bee554p-83f, 0.0f, 0.0f, 0x1.048be2p-61f, 0.0f, 0.0f,
     0x1.2d6d36p-51f, 0.0f, 0x1.926226p-96f, 0x1.d88d4cp-90f, 0.0f, 0x1.fd0e92p-92f,
     0.0f, 0x1.0dcccap-119f, 0x1.018ffcp-33f, 0x1.b2239cp-73f, 0x1.ece86cp-13f, 0.0f,
     0.0f, 0x1.d28c9ep-123f, 0.0f, 0.0f, 0x1.937042p-121f, 0x1.53136ep-12f,
     0x1.763746p-124f, 0.0f, 0x1.9c7e34p-28f, 0x1.383fb4p-113f, 0x1.26fcf2p-36f, 0.0f,
     0.0f, 0x1.e422ep-38f, 0.0f, 0.0f, 0x1.4f557ap-19f, 0.0f, 0x1.93c572p-76f, 0.0f,
     0x1.08beeap-120f, 0.0f, 0.0f, 0x1.664fbcp-84f, 0x1.068fd4p-73f, 0x1.9f6c1ep-56f,
     0x1.70fbe4p-117f, 0.0f, 0x1.cbbeb2p-102f, 0.0f, 0x1.90ea28p-32f, 0x1.76c69ap-79f,
     0x1.fd92a8p-77f, 0.0f, 0.0f, 0x1.7ece34p-51f, 0.0f, 0x1.19700ep-21f,
     0x1.4ccdfp-104f, 0x1.867288p-33f, 0x1.a691dap-78f, 0.0f, 0x1.9b3606p-11f, 0.0f,
     0.0f, 0.0f, 0x1.4e362ap-9f, 0x1.2b76bcp-61f, 0.0f, 0.0f, 0x1.37ade6p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.57c086p-17f, 0x1.2734ecp-93f, 0x1.b5a798p-75f,
     0x1.c466fcp-85f, 0.0f, 0.0f, 0x1.e6717cp-109f, 0x1.df0a24p-47f, 0x1.e01b78p-9f,
     0x1.edd2f4p-112f, 0x1.cf89aep-50f, 0.0f, 0.0f, 0.0f, 0x1.583712p-118f, 0.0f,
     0.0f, 0x1.767cfap-9f, 0.0f, 0x1.6f7036p-29f, 0x1.41bb98p-36f, 0.0f, 0.0f,
     0x1.4dc49p-53f, 0.0f, 0.0f, 0x1.e7b10cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3658ccp-16f, 0x1.9243eap-27f, 0x1.ed25fap-70f, 0.0f, 0x1.dbf6dp-88f, 0.0f,
     0.0f, 0.0f, 0x1.d7dd4p-3f, 0x1.c68514p-66f, 0x1.a9e076p-38f, 0.0f,
     0x1.d6551cp-29f, 0.0f, 0x1.af97ccp-42f, 0x1.a1f588p-87f, 0x1.e84e28p-85f,
     0x1.1cf944p-43f, 0x1.8be10cp-18f, 0x1.39588ep-125f, 0x1.839b92p-92f,
     0x1.7d44a6p-61f, 0.0f, 0.0f, 0x1.24e53ep-53f, 0.0f, 0.0f, 0x1.035284p-89f, 0.0f,
     0x1.9ea73p-69f, 0.0f, 0x1.231ddcp-64f, 0x1.973fccp-53f, 0.0f, 0x1.ca1ec6p-54f,
     0x1.7802f8p-5f, 0x1.ab5f7ep-110f, 0.0f, 0.0f, 0x1.aacf76p-80f, 0x1.1ef88ep-102f,
     0.0f, 0.0f, 0x1.41f70ep-2f, 0.0f, 0x1.abe388p-17f, 0.0f, 0.0f, 0x1.864ab6p-33f,
     0x1.6a6274p-19f, 0x1.6b9b0ep-102f, 0x1.6773dep-96f, 0.0f, 0x1.4e830cp-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3518d6p-77f, 0x1.9c7076p-58f, 0x1.31f266p-27f,
     0x1.ea0e44p-91f, 0x1.0a581ep-112f, 0.0f, 0x1.915678p-39f, 0.0f, 0.0f,
     0x1.b26ddp-84f, 0.0f, 0x1.8c973ap-1f, 0x1.27723p-113f, 0x1.72e6dcp-116f,
     0x1.ab1ff6p-82f, 0.0f, 0x1.7ab584p-23f, 0.0f, 0.0f, 0.0f, 0x1.2ad0d8p-88f, 0.0f,
     0x1.f396fap-98f, 0.0f, 0.0f, 0x1.e33846p-87f, 0.0f, 0.0f, 0.0f, 0x1.527ef4p-63f,
     0x1.9b01aap-121f, 0x1.01919p-42f, 0x1.0465d8p-109f, 0.0f, 0x1.e64c7cp-67f, 0.0f,
     0x1.ba73d6p-104f, 0.0f, 0x1.b4861p-66f, 0x1.ee60c8p-22f, 0.0f, 0.0f,
     0x1.8f8c7ap-103f, 0.0f, 0.0f, 0x1.2e8484p-27f, 0x1.28ba26p-88f, 0x1.f7602cp-119f,
     0.0f, 0.0f, 0x1.0530bcp-48f, 0x1.8f6c9ep-112f, 0.0f, 0.0f, 0x1.050978p-47f, 0.0f,
     0x1.132dacp-6f, 0x1.925d6p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dececp-52f,
     0x1.5081dcp-123f, 0.0f, 0x1.875328p-36f, 0.0f, 0x1.b6a242p-67f, 0x1.abbffep-86f,
     0x1.2804eap-3f, 0.0f, 0x1.2e109ep-117f, 0.0f, 0x1.15fd48p-21f, 0x1.0b0478p-114f,
     0.0f, 0.0f, 0.0f, 0x1.3fd1dp-48f, 0x1.e81506p-86f, 0x1.10235ap-118f, 0.0f, 0.0f,
     0x1.9dca12p-96f, 0x1.c4ee5ap-57f, 0x1.3b272ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef6e5ep-39f, 0.0f, 0.0f, 0.0f, 0x1.f7cc82p-62f, 0x1.002082p-73f, 0.0f,
     0x1.7d8426p-103f, 0.0f, 0x1.9093ecp-8f, 0.0f, 0x1.df283p-11f, 0x1.befbe6p-111f,
     0x1.38fb2p-25f, 0x1.14a02cp-83f, 0x1.a7b5acp-67f, 0x1.83bc9cp-124f, 0.0f, 0.0f,
     0x1.ed11b6p-103f, 0x1.4e6a7ep-119f, 0x1.52770ap-43f, 0.0f, 0.0f,
     0x1.ece366p-105f, 0x1.372decp-26f, 0x1.20f51cp-76f, 0.0f, 0x1.8959bap-91f,
     0x1.eac49ep-36f, 0.0f, 0.0f, 0.0f, 0x1.fff8ecp-96f, 0.0f, 0.0f, 0.0f,
     0x1.bbc4acp-20f, 0x1.ffaep-118f, 0x1.72f3d4p-97f, 0.0f, 0.0f, 0.0f,
     0x1.2735cap-84f, 0x1.810938p-125f, 0x1.70c224p-75f, 0x1.ee9106p-6f, 0.0f, 0.0f,
     0x1.918c6ep-33f, 0x1.04400cp-90f, 0x1.93f782p-84f, 0x1.ad52a8p-21f, 0.0f, 0.0f,
     0x1.e4a86ep-41f, 0x1.df13b8p-76f, 0x1.500dd4p-74f, 0.0f, 0.0f, 0.0f,
     0x1.54b768p-14f, 0x1.607e7ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c287bp-122f,
     0x1.9a216ep-17f, 0x1.ded8bap-31f, 0x1.aa04a6p-21f, 0.0f, 0x1.1e1688p-41f, 0.0f,
     0x1.db626ap-94f, 0x1.76abf6p-31f, 0x1.c781dcp-125f, 0x1.57f0cap-45f,
     0x1.475c54p-101f, 0.0f, 0.0f, 0.0f, 0x1.60ef9ep-69f, 0.0f, 0.0f,
     0x1.bb0e7cp-102f, 0x1.3549eap-126f, 0.0f, 0x1.1aea98p-80f, 0.0f, 0x1.5e3ebp-30f,
     0x1.6716b2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c8aaep-36f, 0.0f, 0x1.41ea4ep-79f,
     0x1.affdfap-103f, 0x1.4030dap-23f, 0x1.0c18fep-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.28a926p-88f, 0x1.920632p-16f, 0.0f, 0.0f, 0.0f,
     0x1.d0a93p-4f, 0x1.0fd90cp-76f, 0.0f, 0x1.e2c0fep-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e9fc8ep-31f, 0x1.101e76p-43f, 0.0f, 0x1.863d3ap-15f, 0.0f, 0.0f,
     0x1.83479p-2f, 0x1.19935p-14f, 0x1.238778p-78f, 0.0f, 0.0f, 0x1.c8c24ep-49f,
     0.0f, 0.0f, 0.0f, 0x1.de32fap-1f, 0x1.adc906p-31f, 0x1.6856c2p-109f, 0.0f, 0.0f,
     0x1.639714p-54f, 0x1.0f222p-53f, 0.0f, 0.0f, 0.0f, 0x1.39185cp-44f,
     0x1.e4b18ap-46f, 0x1.46f54ap-97f, 0x1.1f92d2p-125f, 0.0f, 0x1.7d62e6p-52f, 0.0f,
     0x1.dc5bcap-125f, 0.0f, 0x1.184f76p-90f, 0x1.0d740ap-36f, 0x1.c4b92p-61f,
     0x1.23e142p-94f, 0x1.886b64p-26f, 0x1.6d5038p-106f, 0x1.f37c12p-57f,
     0x1.517dp-14f, 0.0f, 0.0f, 0.0f, 0x1.0c3f1ep-104f, 0.0f, 0.0f, 0.0f,
     0x1.f782c8p-69f, 0x1.160a88p-38f, 0.0f, 0x1.c5b436p-91f, 0x1.886e1p-57f, 0.0f,
     0x1.154598p-43f, 0.0f, 0x1.751464p-97f, 0.0f, 0x1.333f22p-7f, 0.0f,
     0x1.22146p-115f, 0x1.4f0e3ep-22f, 0x1.f5b51p-28f, 0x1.8936fcp-102f,
     0x1.46f61ep-55f, 0.0f, 0.0f
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
            tmp1 = Sleef_asinf1_u35purecfma(tmp0);
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
    printf("Sleef_asinf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
