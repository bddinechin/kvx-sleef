/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf4_u35avx2128.c --function Sleef_finz_sinf4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.ebb42ap-58f, 0x1p0f, 0x1.80807cp-39f, 0x1.481bfep-1f, 0.0f,
     0x1.71f1b8p-101f, 0x1.240fd6p-125f, 0x1.369158p-27f, 0x1.7d7136p-56f, 0.0f, 0.0f,
     0.0f, 0x1.ea51d2p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be48c8p-31f, 0x1.85ccc6p-9f,
     0x1.638cp-5f, 0.0f, 0x1.7d1e34p-126f, 0x1.6ba172p-108f, 0.0f, 0.0f,
     0x1.8345cep-92f, 0.0f, 0x1.cf8ad8p-75f, 0.0f, 0x1.2208aep-65f, 0x1.b032ap-83f,
     0.0f, 0x1.7de5dcp-116f, 0x1.d52446p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81b5e4p-117f, 0x1.5a7788p-96f, 0.0f, 0x1.4e5c46p-81f, 0x1.312f74p-116f,
     0x1.f4ae5ep-87f, 0x1.48022cp-81f, 0.0f, 0x1.88b45cp-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1fd846p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9129ecp-24f, 0x1.1be71p-56f,
     0x1.ea8606p-21f, 0.0f, 0x1.2c17e8p-49f, 0.0f, 0x1.007a94p-20f, 0.0f,
     0x1.858fb4p-95f, 0.0f, 0x1.b1b516p-4f, 0.0f, 0x1.2acb8cp-110f, 0x1.d131dp-60f,
     0.0f, 0x1.e3eae8p-124f, 0.0f, 0x1.92c142p-122f, 0x1.a9b0a8p-123f, 0.0f, 0.0f,
     0.0f, 0x1.d1917ep-81f, 0x1.a2358ep-117f, 0.0f, 0x1.789e5ap-32f, 0.0f, 0.0f, 0.0f,
     0x1.05aa9ep-76f, 0x1.927f78p-34f, 0x1.67d12p-72f, 0.0f, 0x1.1a1054p-16f,
     0x1.ae747ep-80f, 0.0f, 0x1.739ab4p-30f, 0x1.be14d4p-96f, 0.0f, 0x1.01b328p-55f,
     0x1.45eb6cp-62f, 0x1.c156acp-91f, 0.0f, 0x1.394556p-6f, 0.0f, 0x1.d3b65cp-80f,
     0.0f, 0.0f, 0x1.f2e622p-22f, 0.0f, 0.0f, 0.0f, 0x1.353034p-64f, 0x1.19a57ap-126f,
     0.0f, 0.0f, 0x1.f0acf6p-107f, 0x1.da5a8cp-45f, 0.0f, 0x1.a91cd6p-115f,
     0x1.30d228p-76f, 0x1.79237ep-114f, 0x1.1a07dap-40f, 0.0f, 0.0f, 0x1.604d78p-47f,
     0x1.bad2eap-93f, 0.0f, 0.0f, 0x1.e396dp-126f, 0.0f, 0x1.a3de4ep-102f, 0.0f,
     0x1.b3c20ap-90f, 0.0f, 0.0f, 0x1.22fb82p-108f, 0x1.cad128p-98f, 0x1.54466cp-80f,
     0x1.d09838p-100f, 0.0f, 0.0f, 0x1.3027a6p-12f, 0.0f, 0.0f, 0x1.881c9ap-64f,
     0x1.799706p-25f, 0.0f, 0.0f, 0.0f, 0x1.36274ep-5f, 0x1.04911p-79f,
     0x1.655ecep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20f7e4p-86f,
     0x1.fe7ecap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fba55ap-66f, 0x1.09398ep-111f,
     0x1.398c36p-36f, 0.0f, 0x1.5c7a8cp-90f, 0.0f, 0x1.afb7c4p-10f, 0x1.76783p-50f,
     0.0f, 0.0f, 0.0f, 0x1.4fd63ep-103f, 0.0f, 0.0f, 0x1.a8846p-59f, 0.0f,
     0x1.f05b22p-20f, 0x1.b7e14cp-79f, 0x1.80e334p-12f, 0x1.8b8804p-30f, 0.0f,
     0x1.845af4p-72f, 0x1.b9789ap-89f, 0x1.2f21c4p-62f, 0.0f, 0.0f, 0x1.2d5b9p-101f,
     0x1.b2eb16p-43f, 0x1.49e772p-17f, 0x1.2d2bf6p-94f, 0.0f, 0x1.b0815cp-77f,
     0x1.f56e7ap-109f, 0.0f, 0.0f, 0.0f, 0x1.886b02p-8f, 0x1.97ceb8p-86f, 0.0f,
     0x1.9a3166p-88f, 0.0f, 0x1.5fe5ccp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f5e32p-49f,
     0.0f, 0x1.35ea9ep-4f, 0.0f, 0x1.36d02cp-113f, 0.0f, 0x1.04ce98p-76f,
     0x1.42d0b2p-81f, 0.0f, 0x1.3ec57cp-102f, 0x1.973daap-63f, 0x1.41ad5ap-17f, 0.0f,
     0x1.a90232p-61f, 0.0f, 0x1.7468c4p-60f, 0x1.bc9f94p-47f, 0x1.8364bp-107f,
     0x1.55b078p-23f, 0x1.d3335p-68f, 0.0f, 0x1.66db3cp-80f, 0x1.a72da2p-42f,
     0x1.6f6b2ap-32f, 0.0f, 0.0f, 0x1.7ba5b4p-50f, 0x1.7410dcp-41f, 0x1.ec1fc6p-125f,
     0.0f, 0x1.80768cp-43f, 0.0f, 0x1.33b5a4p-25f, 0.0f, 0x1.307946p-100f, 0.0f, 0.0f,
     0x1.c7e99cp-109f, 0.0f, 0.0f, 0x1.5b95c6p-42f, 0x1.08b798p-27f, 0x1.135e56p-101f,
     0.0f, 0.0f, 0.0f, 0x1.9e0462p-54f, 0.0f, 0x1.69d466p-121f, 0x1.6adf18p-73f, 0.0f,
     0x1.d7ead2p-73f, 0.0f, 0x1.7e1b9cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1f052p-101f,
     0x1.10717ep-10f, 0.0f, 0x1.a0d6dep-21f, 0x1.9569cep-122f, 0.0f, 0.0f,
     0x1.b6877ep-121f, 0x1.df098ep-101f, 0.0f, 0x1.e97d8cp-31f, 0x1.fbe8c8p-34f,
     0x1.9e4866p-3f, 0x1.1a6838p-26f, 0x1.6ebd64p-60f, 0.0f, 0x1.ce3926p-69f,
     0x1.0f765cp-84f, 0x1.8c0d12p-23f, 0x1.8084ep-34f, 0.0f, 0x1.4dd29ep-23f,
     0x1.7f2a3ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8ccf8p-37f, 0.0f,
     0x1.75a9d6p-112f, 0x1.7e8ee2p-124f, 0x1.99b6f2p-100f, 0.0f, 0x1.a7d77ep-126f,
     0x1.d7b24cp-27f, 0x1.9996f2p-43f, 0x1.1dcb2ap-22f, 0.0f, 0.0f, 0x1.6d46eap-15f,
     0.0f, 0.0f, 0.0f, 0x1.4cd54ep-13f, 0x1.857fe2p-103f, 0x1.589b7cp-120f,
     0x1.a92c7ap-84f, 0.0f, 0.0f, 0x1.eeff46p-5f, 0x1.a81704p-125f, 0x1.b838a4p-87f,
     0x1.ee712ep-7f, 0.0f, 0.0f, 0.0f, 0x1.ef895ep-82f, 0x1.789ab2p-37f, 0.0f,
     0x1.805e58p-58f, 0x1.32e718p-27f, 0x1.6592b2p-90f, 0x1.2ba2a6p-25f, 0.0f, 0.0f,
     0x1.7a0d3cp-119f, 0.0f, 0x1.2d44ep-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a06f8p-123f, 0x1.519d7ep-39f, 0x1.eeb74ep-126f, 0x1.b7cbf6p-121f,
     0x1.b124eap-41f, 0.0f, 0.0f, 0.0f, 0x1.dc7f4cp-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.db7098p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ceede2p-7f,
     0x1.117b78p-55f, 0x1.fdf0f6p-103f, 0x1.575294p-98f, 0.0f, 0x1.f0562cp-53f,
     0x1.46e734p-111f, 0.0f, 0.0f, 0x1.35e29cp-80f, 0.0f, 0x1.950a82p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1fc168p-63f, 0x1.3f6eb8p-124f, 0.0f, 0x1.a54b84p-1f, 0.0f, 0.0f,
     0.0f, 0x1.83df4ep-86f, 0x1.37191ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c96ccp-126f,
     0x1.3b47fcp-54f, 0.0f, 0.0f, 0x1.bd9d04p-59f, 0x1.fed50ep-105f, 0x1.c9535ap-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b35648p-37f, 0x1.9e9cb4p-112f,
     0x1.1aa8bp-113f, 0x1.16dd68p-73f, 0x1.699e14p-119f, 0x1.5e36bap-57f, 0.0f,
     0x1.93294ap-126f, 0x1.23065ap-103f, 0x1.84a2a4p-9f, 0x1.a56f7ep-39f,
     0x1.b4faf4p-33f, 0x1.a88174p-110f, 0.0f, 0x1.8df426p-25f, 0x1.dda1fp-111f,
     0x1.3e51p-62f, 0.0f, 0.0f, 0x1.00baeap-64f, 0x1.9e9ba2p-56f, 0x1.5fff48p-105f,
     0x1.983c4ap-17f, 0.0f, 0.0f, 0.0f, 0x1.1b4586p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc2668p-18f, 0.0f, 0x1.d6a652p-53f, 0.0f, 0x1.fa95e8p-43f, 0x1.2558d8p-124f,
     0.0f, 0x1.fad49p-105f, 0.0f, 0x1.955b44p-119f, 0.0f, 0.0f, 0x1.9ffebp-42f,
     0x1.fda4b2p-18f, 0x1.9d6dbep-11f, 0.0f, 0x1.96f512p-120f, 0.0f, 0x1.bb7024p-87f,
     0.0f, 0x1.e581a6p-74f, 0x1.d09af6p-35f, 0x1.685daap-24f, 0x1.1982c8p-100f,
     0x1.3d99dap-87f, 0x1.7885bp-17f, 0x1.f59846p-10f, 0.0f, 0x1.42ab96p-102f,
     0x1.9255c8p-113f, 0x1.69af9ap-10f, 0.0f, 0x1.313bfap-91f, 0.0f, 0.0f, 0.0f,
     0x1.f926fp-94f, 0x1.8e3c7cp-4f, 0.0f, 0x1.67a084p-106f, 0x1.6cf0d6p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.af16eep-65f, 0.0f, 0.0f, 0x1.a04f0ep-36f,
     0x1.00d49cp-120f, 0x1.99a35cp-65f, 0.0f, 0.0f, 0x1.f13bdap-16f, 0x1.cf348p-44f,
     0x1.eb79dcp-68f, 0x1.ac2d9cp-4f, 0.0f, 0.0f, 0x1.ba54d6p-50f, 0.0f, 0.0f, 0.0f,
     0x1.cdc18ep-109f, 0x1.df3b7cp-91f, 0x1.44d304p-82f, 0.0f, 0.0f, 0x1.8c62p-74f,
     0x1.82b482p-119f, 0.0f, 0x1.9bbb5p-125f, 0x1.d4ab18p-69f, 0x1.3cdc48p-68f, 0.0f,
     0x1.c8309ep-86f, 0.0f, 0.0f, 0x1.6b701cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.843c16p-13f, 0x1.17e308p-45f, 0x1.240256p-45f, 0.0f, 0x1.26106ep-115f,
     0x1.35a798p-124f, 0x1.f6f5a2p-121f, 0.0f, 0.0f, 0.0f, 0x1.e57526p-20f,
     0x1.9a05bp-18f, 0x1.47f982p-55f, 0x1.20e768p-39f, 0x1.90588cp-7f,
     0x1.f83c8ep-97f, 0x1.5e572p-60f, 0.0f, 0.0f, 0x1.34cd32p-119f, 0.0f,
     0x1.9769fcp-2f, 0x1.47a454p-12f, 0.0f, 0.0f, 0x1.e9e51cp-67f, 0.0f, 0.0f,
     0x1.1350b4p-31f, 0.0f, 0x1.dbeb38p-17f, 0x1.e4ff6p-18f, 0x1.768258p-88f, 0.0f,
     0x1.7bdfacp-10f, 0x1.c22fcap-116f, 0x1.a30886p-98f, 0.0f, 0x1.9c2b44p-101f, 0.0f,
     0x1.cb4f9p-49f, 0.0f, 0x1.7e8ce2p-91f, 0.0f, 0.0f, 0.0f, 0x1.76eab2p-76f,
     0x1.f33076p-91f, 0.0f, 0x1.97d3b4p-104f, 0x1.6afa2p-48f, 0.0f, 0x1.7c8dfcp-60f,
     0x1.8ae638p-87f, 0x1.7ec3e2p-98f, 0.0f, 0.0f, 0x1.b4abbap-112f, 0x1.1e4e7p-73f,
     0.0f, 0.0f, 0x1.3afa66p-108f, 0.0f, 0x1.c88baap-82f, 0.0f, 0.0f, 0x1.c60f08p-43f,
     0x1.0e4568p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a8636p-92f, 0.0f, 0.0f, 0.0f,
     0x1.3a67f8p-84f, 0x1.f8d1f6p-31f, 0x1.fb4feep-10f, 0x1.0e9d8ep-115f, 0.0f, 0.0f,
     0.0f, 0x1.fa6f8cp-45f, 0x1.d1b9dap-63f, 0.0f, 0.0f, 0x1.ee4648p-71f,
     0x1.c4c4aep-51f, 0x1.13b4dep-41f, 0.0f, 0.0f, 0.0f, 0x1.21bb16p-104f, 0.0f,
     0x1.f1a506p-76f, 0.0f, 0x1.1d99e8p-41f, 0x1.27cdd4p-50f, 0.0f, 0x1.483c38p-8f,
     0.0f, 0x1.c0d05ep-66f, 0x1.79d9e4p-57f, 0.0f, 0x1.de9dbep-15f, 0.0f, 0.0f,
     0x1.92ebc6p-31f, 0.0f, 0.0f, 0x1.78ed8ep-5f, 0.0f, 0.0f, 0x1.c2aa8cp-14f,
     0x1.b4eb78p-101f, 0x1.d83184p-110f, 0.0f, 0x1.c6654cp-83f, 0x1.70f8cap-40f,
     0x1.8f7eaep-29f, 0x1.2b9f08p-102f, 0x1.c11e24p-15f, 0x1.772524p-63f, 0.0f,
     0x1.9f8b8p-75f, 0x1.245192p-123f, 0.0f, 0x1.46d002p-89f, 0x1.22056ep-2f,
     0x1.869906p-57f, 0x1.573d4p-35f, 0x1.e66cc6p-75f, 0x1.7cd80cp-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.983888p-13f, 0.0f, 0x1.d62872p-106f, 0.0f, 0x1.41af6p-39f,
     0x1.8b285p-64f, 0.0f, 0.0f, 0x1.1524f2p-108f, 0x1.ea718p-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7a5cap-118f, 0x1.5c875cp-5f, 0.0f, 0.0f,
     0.0f, 0x1.2316bap-49f, 0.0f, 0x1.d08742p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cae1aap-71f, 0.0f, 0.0f, 0x1.3c3b5ap-53f, 0.0f, 0x1.70e1ep-1f, 0.0f, 0.0f,
     0.0f, 0x1.80af3cp-58f, 0.0f, 0x1.6c429ep-126f, 0.0f, 0x1.9acf06p-99f, 0.0f,
     0x1.879ffap-22f, 0x1.131356p-106f, 0.0f, 0x1.0dfa08p-102f, 0.0f, 0.0f,
     0x1.aa7e58p-113f, 0x1.bc44e8p-51f, 0x1.31e68ep-9f, 0.0f, 0.0f, 0x1.055a7p-77f,
     0x1.f2485p-69f, 0x1.507d3ap-59f, 0x1.d0b41ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb3aaap-89f, 0x1.ba136cp-57f, 0x1.9082dap-63f, 0x1.6f7734p-104f,
     0x1.a7031ap-96f, 0.0f, 0x1.fe3ddp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20a2c6p-89f,
     0.0f, 0.0f, 0.0f, 0x1.6eb0a8p-11f, 0x1.2e2976p-72f, 0x1.9980aap-114f, 0.0f,
     0x1.7d114ep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed9002p-71f, 0x1.d40354p-104f,
     0.0f, 0.0f, 0.0f, 0x1.3bdb48p-100f, 0x1.c0d716p-13f, 0.0f, 0x1.14958p-109f,
     0x1.d2a298p-78f, 0.0f, 0x1.25555ap-7f, 0x1.c3b558p-63f, 0.0f, 0.0f, 0.0f,
     0x1.e69198p-81f, 0x1.e32a18p-74f, 0.0f, 0x1.db129cp-63f, 0x1.6dba8ap-73f,
     0x1.56c398p-50f, 0x1.f34af4p-51f, 0x1.9ea638p-61f, 0.0f, 0x1.53660ap-83f,
     0x1.e9d70ap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.427acep-23f,
     0x1.8c22d8p-47f, 0x1.13a07ap-61f, 0x1.f462p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0259a6p-79f, 0x1.917966p-17f, 0x1.61f9ep-61f, 0x1.76ab4ep-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b3a7c8p-32f, 0x1.d7c362p-63f, 0x1.c776acp-109f, 0.0f, 0.0f,
     0x1.77b48p-126f, 0.0f, 0x1.efc064p-53f, 0x1.6c6eacp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1eec98p-97f, 0x1.8c899ep-97f, 0x1.a97378p-62f, 0x1.e43aa2p-37f, 0.0f,
     0.0f, 0x1.abe394p-42f, 0.0f, 0x1.14e77cp-58f, 0.0f, 0.0f, 0x1.ec9a08p-8f, 0.0f,
     0x1.8d9f78p-64f, 0.0f, 0.0f, 0.0f, 0x1.3b31c6p-46f, 0.0f, 0x1.2cad36p-102f, 0.0f,
     0x1.b72498p-43f, 0x1.0db294p-121f, 0.0f, 0x1.55bfc2p-123f, 0x1.fb1468p-78f,
     0x1.6eed82p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f0ffap-8f, 0.0f, 0x1.6428e4p-71f,
     0.0f, 0.0f, 0.0f, 0x1.1b9b24p-92f, 0x1.5c888ap-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ec8cep-29f, 0.0f, 0x1.c528fap-119f, 0x1p0f, 0x1.2ec1c8p-114f, 0.0f, 0.0f,
     0x1.9247c8p-34f, 0.0f, 0x1.0fc7b6p-31f, 0.0f, 0.0f, 0x1.594de6p-28f, 0.0f,
     0x1.d1e2dcp-29f, 0x1.cf0728p-71f, 0x1.644a84p-3f, 0.0f, 0.0f, 0x1.f061f2p-19f,
     0x1.ce6b3cp-6f, 0.0f, 0x1.357efap-32f, 0x1.68acecp-43f, 0x1.321fdap-53f,
     0x1.18dc3ap-87f, 0.0f, 0x1.cfe13p-39f, 0.0f, 0x1.a871d8p-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb98dp-29f, 0x1.e5fd1ep-41f,
     0x1.546beep-109f, 0x1.66f7e6p-46f, 0x1.40ebb4p-87f, 0x1.36d9a8p-6f,
     0x1.1b7448p-38f, 0x1.930d9cp-108f, 0x1.dc7e98p-25f, 0.0f, 0x1.5eab8p-30f,
     0x1.0f821cp-93f, 0.0f, 0x1.ec2ccp-111f, 0.0f, 0x1.ea61cep-65f, 0x1.8c7254p-111f,
     0x1.1d8d74p-1f, 0x1.1d66f8p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5fb5p-94f,
     0x1.0ffb3ap-58f, 0.0f, 0.0f, 0x1.d2badp-112f, 0x1.532dcep-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f72eb8p-113f, 0x1.f04a02p-22f, 0x1.95c62ep-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.795164p-118f, 0x1.3c9ea8p-57f, 0.0f, 0x1.1a26a4p-23f,
     0x1.fde18ap-46f, 0.0f, 0x1.bc3bcp-45f, 0x1.20dbecp-34f, 0x1.7d3c2p-83f,
     0x1.010b1ap-42f, 0.0f, 0.0f, 0x1.b4df02p-71f, 0x1.e0c484p-23f, 0x1.8a8e64p-62f,
     0x1.76c3b6p-93f, 0x1.a1079cp-86f, 0x1.4bc9p-22f, 0x1.15762ap-59f, 0x1.e6b2b8p-1f,
     0.0f, 0x1.d28a92p-72f, 0.0f, 0x1.c3cc6p-85f, 0x1.4aab0cp-105f, 0.0f,
     0x1.a93a02p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d75b4p-98f, 0x1.5afcc8p-43f,
     0.0f, 0x1.68be3cp-1f, 0.0f, 0.0f, 0.0f, 0x1.123396p-99f, 0x1.7084c6p-112f,
     0x1.168feap-67f, 0x1.7ab7dep-75f, 0x1.e35b38p-48f, 0x1.6142e6p-43f, 0.0f,
     0x1.19affap-104f, 0.0f, 0.0f, 0x1.de6168p-9f, 0x1.e7dfdp-37f, 0x1.0e9276p-42f,
     0x1.610226p-31f, 0x1.25d2bep-111f, 0.0f, 0.0f, 0.0f, 0x1.56c70cp-60f, 0.0f,
     0x1.3e13b8p-7f, 0x1.8c3cccp-111f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sinf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_sinf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
