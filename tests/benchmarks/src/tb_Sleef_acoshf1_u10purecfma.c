/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshf1_u10purecfma.c --function \
 *     Sleef_acoshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.0fefbap-77f, 0x1.47456p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e42b26p-112f, 0x1.7418fp-85f, 0.0f, 0x1.3686fep-1f, 0.0f, 0x1.2922e8p-35f,
     0x1.7033d8p-50f, 0.0f, 0.0f, 0.0f, 0x1.74b7fap-108f, 0x1.aaa56p-83f, 0.0f, 0.0f,
     0x1.a38486p-57f, 0x1.95a5fcp-115f, 0x1.cafbe4p-98f, 0.0f, 0x1.af18bcp-28f, 0.0f,
     0.0f, 0x1.d7e978p-25f, 0x1.0ba86p-51f, 0x1.56c062p-13f, 0x1.bd08f8p-35f, 0.0f,
     0.0f, 0x1.cc928ep-76f, 0.0f, 0.0f, 0x1.941f6cp-125f, 0.0f, 0x1.8ee922p-123f,
     0.0f, 0x1.80599cp-3f, 0.0f, 0.0f, 0x1.ab8ca2p-61f, 0x1.fcb766p-76f,
     0x1.f464a2p-15f, 0.0f, 0x1.2a7996p-66f, 0.0f, 0.0f, 0.0f, 0x1.be4f02p-71f,
     0x1.f3a4f4p-64f, 0.0f, 0x1.815f9ap-126f, 0.0f, 0x1.bff952p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ed6dep-121f, 0x1.b5e3ap-85f,
     0.0f, 0.0f, 0x1.5a196cp-4f, 0x1.dbe48p-57f, 0.0f, 0x1.83760ep-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.04f4aap-68f, 0.0f, 0.0f, 0.0f, 0x1.b65898p-47f, 0.0f,
     0.0f, 0x1.97c8e8p-18f, 0x1.326cd2p-32f, 0x1.936e02p-60f, 0x1.7fcdep-90f, 0.0f,
     0.0f, 0x1.422b7ap-3f, 0x1.0e1f4ep-119f, 0.0f, 0x1.ab32ap-89f, 0x1.b59e92p-35f,
     0x1.6326b4p-105f, 0x1.8692c2p-94f, 0.0f, 0x1.937cb8p-38f, 0x1.a95d4ep-86f, 0.0f,
     0x1.373574p-9f, 0.0f, 0.0f, 0.0f, 0x1.f0a288p-112f, 0x1.94f232p-2f, 0.0f,
     0x1.504f6p-14f, 0x1.3872fep-8f, 0x1.b3b13ap-111f, 0x1.bc9bf8p-74f,
     0x1.0beceap-48f, 0x1.daf242p-13f, 0x1.510a6ap-101f, 0.0f, 0x1.950732p-84f, 0.0f,
     0x1.3be1cap-90f, 0.0f, 0x1.7473dep-60f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.60f518p-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65a476p-78f, 0x1.7d4578p-38f, 0.0f,
     0x1.2851e8p-121f, 0.0f, 0x1.d51b36p-82f, 0x1.e7b9d6p-90f, 0.0f, 0x1.0bfcaap-62f,
     0.0f, 0x1.504d98p-86f, 0.0f, 0.0f, 0x1.41dea2p-51f, 0.0f, 0.0f, 0x1.f9ccf6p-78f,
     0.0f, 0.0f, 0x1.9e593ap-30f, 0.0f, 0x1.c544bep-25f, 0x1.6c258p-65f, 0x1.9bdep-1f,
     0x1.9595e4p-121f, 0x1.367b1p-111f, 0.0f, 0.0f, 0x1.2d7b8ep-94f, 0.0f, 0.0f,
     0x1.468816p-22f, 0x1.33c234p-62f, 0x1.441406p-91f, 0.0f, 0x1.60929p-117f,
     0x1.5e415cp-58f, 0.0f, 0.0f, 0x1.606728p-101f, 0x1.8ffbf2p-95f, 0x1.206988p-117f,
     0x1.c61aaap-49f, 0x1.b8d40ap-63f, 0.0f, 0.0f, 0.0f, 0x1.fe5fdcp-4f, 0.0f, 0.0f,
     0x1.d8ca88p-113f, 0x1.5f55d4p-59f, 0x1.3eef4p-41f, 0x1.8a9658p-50f,
     0x1.27fb98p-101f, 0x1.14d85ap-39f, 0.0f, 0x1.afce42p-47f, 0x1.e4a2e2p-117f, 0.0f,
     0x1.eb95fap-114f, 0x1.8175d8p-121f, 0.0f, 0x1.4322a4p-25f, 0.0f, 0x1.5f318cp-39f,
     0.0f, 0x1.63881ep-83f, 0.0f, 0.0f, 0.0f, 0x1.6b271ep-124f, 0.0f, 0.0f, 0.0f,
     0x1.933852p-105f, 0.0f, 0x1.374912p-60f, 0x1.2c153cp-5f, 0x1.ac5e56p-58f,
     0x1.83d57ep-67f, 0.0f, 0x1.162a08p-52f, 0.0f, 0x1.42773ep-21f, 0x1.4907c4p-2f,
     0.0f, 0x1.03ea08p-90f, 0x1.e0d76p-92f, 0x1.d1c4dap-124f, 0x1.c8340ep-54f, 0.0f,
     0.0f, 0x1.a2122ap-38f, 0x1.c162bp-29f, 0.0f, 0x1.d2783ep-20f, 0.0f, 0.0f,
     0x1.ccf038p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.960ddp-37f, 0.0f, 0.0f, 0.0f,
     0x1.cf3656p-1f, 0x1.6f35e8p-91f, 0x1.b12508p-119f, 0x1.1e627ep-61f,
     0x1.21254p-28f, 0.0f, 0x1.081032p-114f, 0x1.4b827ap-68f, 0.0f, 0x1.993944p-92f,
     0x1.96f10ep-118f, 0x1.9c9b5ap-21f, 0.0f, 0x1.e4b094p-84f, 0.0f, 0.0f,
     0x1.7152c4p-84f, 0.0f, 0x1.feafc8p-33f, 0.0f, 0x1.d81848p-102f, 0x1.9dcf4cp-17f,
     0.0f, 0.0f, 0x1.d23a7ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.966968p-93f,
     0.0f, 0x1.79b2d8p-114f, 0.0f, 0x1.73194ap-52f, 0x1.4de65ep-3f, 0.0f, 0.0f,
     0x1.6ca63ap-2f, 0x1.40021cp-39f, 0.0f, 0x1.272d5cp-110f, 0x1.d0d04ap-106f,
     0x1.f1c39ap-126f, 0.0f, 0x1.02b2ep-68f, 0.0f, 0x1.f901bap-2f, 0x1.15369ap-36f,
     0.0f, 0x1.8550f8p-79f, 0.0f, 0x1.403b3ep-35f, 0x1.73dc3cp-122f, 0.0f,
     0x1.e40bc6p-25f, 0x1.bca67cp-50f, 0x1.5d7e64p-87f, 0x1.7efe72p-18f, 0.0f, 0.0f,
     0x1.e3f87ep-118f, 0x1.0aacaep-99f, 0x1.eebac4p-58f, 0x1.ac5f8p-125f,
     0x1.01b8b4p-51f, 0.0f, 0.0f, 0x1.9c6fbp-80f, 0x1.02917p-49f, 0.0f, 0.0f,
     0x1.25e676p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8f03cp-62f, 0.0f, 0.0f, 0.0f,
     0x1.b463b8p-44f, 0x1.5a05cp-27f, 0x1.992ccp-44f, 0x1.8ae8f8p-117f,
     0x1.e203e4p-109f, 0.0f, 0.0f, 0x1.b4eb08p-36f, 0.0f, 0.0f, 0x1.003bbap-105f,
     0.0f, 0x1.2f59bp-102f, 0.0f, 0x1.b67c7p-85f, 0x1.d1f214p-86f, 0x1.299ab2p-33f,
     0x1.19363cp-11f, 0x1.6327e4p-93f, 0.0f, 0x1.0b6cb6p-101f, 0x1.6d4bf2p-18f,
     0x1.f17f1ep-24f, 0.0f, 0x1.63c54ep-43f, 0.0f, 0x1.ec1b7ap-106f, 0.0f,
     0x1.2cd9cap-96f, 0x1.e21d04p-69f, 0x1.ac41d2p-8f, 0.0f, 0.0f, 0x1.0f431p-41f,
     0x1.f9fae8p-100f, 0.0f, 0.0f, 0x1.b034cap-50f, 0x1.045082p-54f, 0.0f,
     0x1.ea0ec4p-31f, 0.0f, 0.0f, 0x1.b120f8p-42f, 0.0f, 0.0f, 0x1.c1b344p-103f, 0.0f,
     0x1.a16bcp-9f, 0x1.6039f2p-107f, 0.0f, 0x1.f43ae6p-39f, 0x1.008e2ap-78f, 0.0f,
     0.0f, 0x1.238b7ep-106f, 0.0f, 0x1.8114bap-20f, 0x1.cc205ap-13f, 0.0f, 0.0f,
     0x1.cc9edep-117f, 0x1.5bbdfep-68f, 0x1.0dc54ep-125f, 0x1.35e6bp-2f, 0.0f, 0.0f,
     0x1.f80814p-30f, 0x1.92db16p-11f, 0x1.217622p-54f, 0x1.02eefep-60f, 0.0f,
     0x1.4dc1f4p-100f, 0.0f, 0x1.d88fb2p-113f, 0.0f, 0.0f, 0.0f, 0x1.c55498p-2f, 0.0f,
     0x1.8fa2a8p-96f, 0.0f, 0x1.71b0a8p-123f, 0x1.09678p-109f, 0x1.69c6fep-45f, 0.0f,
     0x1.16012cp-60f, 0.0f, 0.0f, 0x1.949124p-24f, 0x1.fbe7b4p-106f, 0.0f, 0.0f,
     0x1.92c14ap-32f, 0.0f, 0.0f, 0x1.4ef686p-48f, 0x1.2232c2p-112f, 0x1.1f06d4p-53f,
     0x1.29f1bp-7f, 0.0f, 0.0f, 0x1.c883bp-23f, 0.0f, 0x1.beb88p-112f,
     0x1.bb6074p-46f, 0x1.7d33acp-118f, 0.0f, 0x1.28948ep-96f, 0.0f, 0x1.1ddc0ap-95f,
     0.0f, 0.0f, 0.0f, 0x1.601106p-44f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.aa498cp-66f, 0x1.fbf712p-115f, 0x1.352f7ep-2f, 0x1.d1b40ep-50f, 0.0f,
     0.0f, 0x1.32622p-125f, 0x1.d28e98p-95f, 0x1.940248p-35f, 0x1.0bb378p-71f,
     0x1.64e06ap-47f, 0x1.fcb80cp-74f, 0.0f, 0.0f, 0x1.dc2a8ep-62f, 0.0f,
     0x1.42a25p-120f, 0.0f, 0x1.a55d1p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1b6bap-30f,
     0x1.69411ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8619cp-76f, 0.0f,
     0x1.587f42p-117f, 0.0f, 0x1.a70d44p-102f, 0x1.f496e2p-14f, 0x1.4a2e3cp-72f,
     0x1.128f8ap-17f, 0x1.f9cbep-93f, 0.0f, 0.0f, 0x1.de7d96p-100f, 0x1.6ec44ep-88f,
     0x1.a4f6f6p-71f, 0.0f, 0x1.975c1p-4f, 0x1.5658e2p-100f, 0.0f, 0.0f,
     0x1.242412p-25f, 0x1.fbcaeap-95f, 0.0f, 0.0f, 0x1.5d1b8cp-10f, 0x1.70ac98p-105f,
     0x1.d9aceap-93f, 0.0f, 0.0f, 0x1.834618p-95f, 0.0f, 0x1.b3ff34p-73f, 0.0f, 0.0f,
     0.0f, 0x1.979292p-4f, 0.0f, 0.0f, 0x1.44cc84p-23f, 0x1.3fe524p-34f,
     0x1.32d8bcp-42f, 0x1.b95108p-25f, 0x1.b6e568p-105f, 0x1.e9d5b8p-30f,
     0x1.c808bp-115f, 0x1.67ed9ap-43f, 0x1.c07314p-55f, 0.0f, 0x1.615eeap-35f, 0.0f,
     0.0f, 0x1.ef79a8p-87f, 0x1.f1d8c8p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4b8f4p-59f, 0x1.b078dcp-106f, 0x1.7c37fp-113f, 0.0f, 0.0f, 0x1.81a45ep-74f,
     0x1.26023ap-16f, 0x1.25c6a4p-89f, 0x1.d30bc2p-48f, 0.0f, 0x1.1e5754p-52f, 0.0f,
     0x1.59090cp-70f, 0x1.fe49e6p-92f, 0x1.a6c514p-69f, 0.0f, 0x1.d0feb6p-114f, 0.0f,
     0.0f, 0x1.07df02p-63f, 0x1.c9b6f6p-65f, 0x1.4b5b24p-41f, 0.0f, 0.0f,
     0x1.f3fc78p-8f, 0.0f, 0x1.89efe8p-106f, 0.0f, 0.0f, 0x1.02ed94p-97f,
     0x1.dc303cp-66f, 0x1.7e7968p-31f, 0.0f, 0x1.78c8a6p-8f, 0.0f, 0x1.a48f38p-7f,
     0.0f, 0.0f, 0x1.fca1bep-76f, 0x1.dc83dcp-99f, 0.0f, 0x1.d1cd66p-17f,
     0x1.eba44ap-55f, 0x1.b4e814p-89f, 0.0f, 0x1.200774p-111f, 0.0f, 0.0f, 0.0f,
     0x1.fc461p-5f, 0x1.bdbcbep-87f, 0x1.c6b718p-125f, 0x1.aa43b2p-46f,
     0x1.102502p-20f, 0.0f, 0x1.a25236p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f433aap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.419c0ep-112f, 0.0f,
     0x1.88b91cp-30f, 0.0f, 0.0f, 0.0f, 0x1.4cdc64p-93f, 0x1.1efd7p-71f, 0.0f, 0.0f,
     0x1.c2739ap-11f, 0.0f, 0x1.d1c712p-40f, 0x1.999fc4p-82f, 0.0f, 0x1.d03e64p-49f,
     0x1.ccffaep-39f, 0x1.0b9f42p-75f, 0.0f, 0.0f, 0x1.64d922p-119f, 0.0f,
     0x1.942e46p-5f, 0x1.40669ap-93f, 0.0f, 0x1.f8b578p-24f, 0.0f, 0x1.589d5cp-39f,
     0x1.21a85ap-77f, 0.0f, 0.0f, 0.0f, 0x1.d0f4b2p-25f, 0.0f, 0x1.dcc386p-70f,
     0x1.4f71a6p-104f, 0x1.dc2d54p-28f, 0x1.62d71cp-56f, 0x1.101108p-105f,
     0x1.8b1f64p-44f, 0x1.49530ep-62f, 0x1p0f, 0x1.833a48p-54f, 0x1.ed8f56p-116f,
     0x1.9b0c86p-56f, 0.0f, 0.0f, 0.0f, 0x1.0e71dcp-119f, 0x1.dcdbc8p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8b50aep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6efa2ap-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.693368p-24f, 0x1.d3f006p-107f, 0x1.a6f66cp-10f,
     0x1.7c1012p-89f, 0x1.2ccdfep-113f, 0.0f, 0.0f, 0x1.b8cf68p-104f, 0.0f,
     0x1.79fec4p-98f, 0x1.b3e9f4p-60f, 0x1.8a1e76p-80f, 0.0f, 0.0f, 0.0f,
     0x1.12f25p-33f, 0x1.a27eep-70f, 0x1.2c16ap-98f, 0.0f, 0x1.eafdb8p-125f, 0.0f,
     0x1.230504p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3926dep-32f, 0x1.9924d4p-38f, 0.0f,
     0.0f, 0x1.e1a432p-94f, 0x1.5a453ep-4f, 0x1.a0d6c4p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e4ceap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35176ap-33f, 0.0f, 0.0f,
     0.0f, 0x1.a4215cp-42f, 0x1.798d1p-84f, 0x1.689cd4p-42f, 0x1.e116dp-56f,
     0x1.7b72bcp-49f, 0.0f, 0.0f, 0x1.3853dap-96f, 0x1.36eb36p-14f, 0.0f, 0.0f,
     0x1.ac99c6p-84f, 0x1.43b958p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad4fap-20f,
     0x1.5a3046p-91f, 0x1.16c50ep-50f, 0x1.b88c66p-85f, 0x1.745e88p-39f, 0.0f,
     0x1.19fb2cp-101f, 0x1.4822p-81f, 0.0f, 0.0f, 0.0f, 0x1.a4fb32p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c81892p-52f, 0x1.110e66p-52f, 0.0f, 0.0f,
     0x1.6f591ep-52f, 0x1.6909b8p-11f, 0x1.fce836p-84f, 0.0f, 0.0f, 0.0f,
     0x1.ea0114p-95f, 0x1.a7f80ap-114f, 0.0f, 0.0f, 0x1.6df03ap-1f, 0.0f,
     0x1.1674dcp-39f, 0x1.0a9196p-88f, 0x1.dc3158p-120f, 0.0f, 0x1.0f2f5p-91f, 0.0f,
     0x1.40d622p-92f, 0x1.936fc8p-106f, 0.0f, 0x1.65bc96p-83f, 0.0f, 0x1.9a897ep-27f,
     0.0f, 0x1.4c08d4p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfa5acp-69f, 0.0f, 0.0f,
     0x1.c7a58p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27bc4ap-6f, 0.0f,
     0x1.c651dp-110f, 0x1.cb9924p-89f, 0x1.fc6fbcp-21f, 0.0f, 0x1.ae840ep-99f,
     0x1.79a374p-21f, 0x1.9ba8b2p-73f, 0.0f, 0x1.26fc02p-122f, 0.0f, 0.0f,
     0x1.b1d612p-2f, 0.0f, 0.0f, 0.0f, 0x1.9b2bep-95f, 0.0f, 0x1.428028p-42f, 0.0f,
     0x1.af722cp-3f, 0x1.b9ade6p-108f, 0x1.506d9cp-7f, 0.0f, 0x1.9f7bb4p-91f, 0.0f,
     0x1.1a97f8p-68f, 0.0f, 0x1.b89faep-60f, 0x1.dd768ap-54f, 0.0f, 0x1.e193c4p-7f,
     0.0f, 0x1.b42766p-126f, 0.0f, 0x1.f8ff74p-66f, 0x1.daceacp-11f, 0.0f, 0.0f, 0.0f,
     0x1.32992ap-61f, 0x1.bb5c7p-20f, 0x1.129ea4p-83f, 0.0f, 0x1.c2f002p-44f,
     0x1.2cbdc2p-80f, 0x1.4e5982p-26f, 0.0f, 0x1.7552a4p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7f2d4p-49f, 0.0f, 0.0f, 0.0f, 0x1.f6cde4p-25f, 0.0f, 0x1.62453cp-100f,
     0x1.80c822p-51f, 0x1.69d364p-49f, 0.0f, 0.0f, 0.0f, 0x1.8ee15p-72f,
     0x1.e5475ep-109f, 0.0f, 0x1.542204p-65f, 0x1.9e0158p-124f, 0.0f, 0x1.4d0864p-20f,
     0x1.3c5884p-26f, 0.0f, 0x1.cf7cc4p-115f, 0x1.43e992p-4f, 0x1.0a9d8ep-44f,
     0x1.0bfe4cp-122f, 0.0f, 0x1.31438p-20f, 0.0f, 0x1.84ec4ap-78f, 0x1.26ca82p-120f,
     0x1.a19498p-98f, 0.0f, 0x1.a2008ep-102f, 0x1.dc4a44p-54f, 0.0f, 0x1.de240ep-104f,
     0x1.7e680ep-60f, 0.0f, 0.0f, 0.0f, 0x1.06275ap-116f, 0x1.5ad8cep-27f,
     0x1.0433b8p-21f, 0.0f, 0x1.430f4p-69f, 0.0f, 0x1.a6a7fp-79f, 0x1.3b59d4p-16f,
     0x1.ae5bep-72f, 0x1.cefbeap-27f, 0x1.d2fce8p-68f, 0x1.fd8cdap-17f, 0.0f,
     0x1.58182ep-119f, 0.0f, 0x1.51991p-7f, 0.0f, 0x1.5f511ap-30f, 0.0f,
     0x1.56b94ep-43f, 0x1.de1d6p-84f, 0.0f, 0.0f, 0x1.75ff22p-42f, 0.0f,
     0x1.1d5f3cp-38f, 0x1.4062f8p-106f, 0.0f, 0.0f, 0x1.a89a0ap-96f, 0.0f,
     0x1.d131d8p-28f, 0x1.d6a4a4p-15f, 0x1.540c76p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc5bbap-24f, 0x1.5b2594p-12f, 0x1.98689cp-75f,
     0x1.73b026p-114f, 0.0f, 0.0f, 0x1.25c464p-112f, 0.0f, 0x1.72daf2p-93f,
     0x1.cded28p-27f, 0x1.407b22p-26f, 0x1.bd6d36p-3f, 0x1.95bc74p-3f,
     0x1.282206p-36f, 0.0f, 0x1.070724p-91f, 0.0f, 0x1.e8373cp-124f, 0.0f,
     0x1.7f10d8p-72f, 0x1.74063ap-88f, 0x1.a489fap-125f, 0x1.3b40ecp-7f, 0.0f,
     0x1.5b8b12p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e36ep-109f,
     0x1.cedd0ap-5f, 0x1.43c072p-79f, 0x1.3be1eap-38f, 0.0f, 0.0f, 0x1.5467f4p-48f,
     0x1.5f3cd8p-105f, 0x1.bf5eeap-27f, 0x1.0e30acp-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.116212p-42f, 0.0f, 0x1.88c052p-109f
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
            tmp1 = Sleef_acoshf1_u10purecfma(tmp0);
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
    printf("Sleef_acoshf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acoshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
