/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf8_u10kvx.c --function \
 *     Sleef_finz_acosf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.d81b6p-111f, 0.0f, 0.0f, 0x1.a41918p-78f, 0.0f, 0.0f, 0x1.f2a09p-58f,
     0x1.ae7ddcp-21f, 0x1.f88d9ap-31f, 0.0f, 0x1.38e91p-20f, 0x1.024aa4p-21f,
     0x1.8df0dep-119f, 0x1.de1d36p-8f, 0.0f, 0x1.359388p-88f, 0.0f, 0x1.e556d6p-3f,
     0.0f, 0x1.766cbcp-56f, 0x1.4d818ep-58f, 0.0f, 0.0f, 0x1.cdb0ap-6f, 0.0f,
     0x1.59cbeap-94f, 0.0f, 0.0f, 0x1.73129cp-75f, 0x1.6413b4p-79f, 0.0f, 0.0f,
     0x1.fdb24cp-68f, 0x1.c15464p-24f, 0.0f, 0x1.952a8ap-44f, 0.0f, 0x1.f1cbcep-35f,
     0x1.d73728p-31f, 0x1.61b0c4p-67f, 0.0f, 0x1.dfd7d2p-9f, 0.0f, 0x1.24ba42p-82f,
     0.0f, 0.0f, 0x1.a1aa4cp-1f, 0x1.30e614p-87f, 0.0f, 0x1.921ee6p-87f,
     0x1.bfc238p-32f, 0.0f, 0.0f, 0x1.e3d7fcp-80f, 0.0f, 0.0f, 0.0f, 0x1.1fee98p-44f,
     0.0f, 0.0f, 0x1.456f6cp-43f, 0.0f, 0x1.6a6c24p-56f, 0x1.6073e6p-85f, 0.0f,
     0x1.25c65ep-28f, 0.0f, 0x1.162624p-1f, 0.0f, 0x1.5ea6f2p-69f, 0x1.36c736p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8e608p-27f, 0x1.14db3ep-48f, 0.0f, 0.0f, 0.0f,
     0x1.1edeep-27f, 0x1.de3f42p-72f, 0x1.fc0f8ep-64f, 0x1.fd4d36p-26f,
     0x1.cdeaap-79f, 0.0f, 0x1.23ada2p-38f, 0x1.c3db48p-73f, 0x1.033214p-59f,
     0x1.277de4p-11f, 0x1.8a67b6p-123f, 0x1.7a56aap-116f, 0x1.f7c34p-92f,
     0x1.62c748p-102f, 0x1.0c3228p-55f, 0x1.b9df8ep-36f, 0.0f, 0.0f, 0x1.bcb208p-54f,
     0.0f, 0x1.45bdep-90f, 0.0f, 0x1.fd71dcp-114f, 0x1.442ab2p-35f, 0.0f,
     0x1.48c758p-20f, 0.0f, 0.0f, 0x1.26ee06p-4f, 0x1.1743bp-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2910b6p-43f, 0.0f, 0x1.2313b4p-107f, 0x1.bec6dap-32f, 0.0f,
     0x1.b840d4p-108f, 0.0f, 0x1.3d1318p-74f, 0x1.1c3bc4p-50f, 0.0f, 0.0f,
     0x1.26777ap-10f, 0x1.dd07d8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23407p-42f, 0.0f,
     0x1.8cbb8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3da512p-116f,
     0x1.200b24p-119f, 0x1.94666ep-4f, 0x1.38e8p-15f, 0x1.b28fcep-118f, 0.0f, 0.0f,
     0x1.e964fep-54f, 0x1.336372p-76f, 0x1.bbd53p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67f52p-94f, 0.0f, 0.0f, 0x1.021ad2p-9f, 0x1.0bd0a2p-24f, 0.0f, 0.0f,
     0x1.13315ep-68f, 0x1.03a71cp-55f, 0.0f, 0.0f, 0x1.20de82p-21f, 0x1.fb2f9p-58f,
     0.0f, 0.0f, 0x1.e442fep-106f, 0x1.5dd46cp-115f, 0.0f, 0.0f, 0x1.ce742ep-69f,
     0.0f, 0.0f, 0x1.0ce99p-65f, 0.0f, 0x1.ea6b04p-46f, 0.0f, 0x1.5e546p-120f, 0.0f,
     0x1.40aeap-47f, 0x1.b4891p-9f, 0.0f, 0.0f, 0x1.11611p-60f, 0x1.a11cb2p-51f, 0.0f,
     0x1.5e2b54p-15f, 0.0f, 0.0f, 0x1.91524p-63f, 0x1.52c044p-98f, 0.0f, 0.0f,
     0x1.83f922p-34f, 0x1.8b8c32p-106f, 0x1.52177cp-115f, 0x1.b4cc3ep-41f,
     0x1.e1a35ep-29f, 0x1.a06a3ep-117f, 0.0f, 0x1.5bdafp-110f, 0x1.9f618ap-71f, 0.0f,
     0x1.f172fp-83f, 0.0f, 0.0f, 0.0f, 0x1.6c8cfep-17f, 0x1.ce350ap-25f, 0.0f, 0.0f,
     0x1.52a534p-121f, 0x1.00417ep-21f, 0.0f, 0x1.cc3fdp-52f, 0x1.54f18ap-72f,
     0x1.7b0b36p-35f, 0x1.5ecbbcp-53f, 0x1.3c7b08p-64f, 0.0f, 0.0f, 0.0f,
     0x1.0b7a76p-90f, 0x1.334c5p-126f, 0x1.597dfcp-8f, 0x1.fep-10f, 0x1.744148p-126f,
     0.0f, 0x1.772bcp-19f, 0x1.e1ba1p-81f, 0x1.996862p-43f, 0.0f, 0x1.c0de08p-30f,
     0.0f, 0.0f, 0x1.304794p-14f, 0.0f, 0.0f, 0.0f, 0x1.bdf488p-114f, 0x1.629c28p-42f,
     0.0f, 0x1.38c864p-77f, 0x1.b22d2ep-116f, 0x1.656cd8p-115f, 0.0f,
     0x1.399e6ap-113f, 0.0f, 0.0f, 0x1.a56f6ep-35f, 0.0f, 0x1.d51ad8p-34f,
     0x1.ee355ep-59f, 0x1.c3dd14p-119f, 0x1.bb8c9ap-46f, 0x1.146f06p-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9e43bcp-121f, 0.0f, 0x1.6071b4p-61f, 0x1.4f2e84p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43fc46p-118f, 0x1.0826ccp-99f,
     0x1.c13e6ap-69f, 0x1.f382a8p-63f, 0x1.042528p-73f, 0x1.6185ap-33f,
     0x1.52ad98p-27f, 0x1.242d4p-43f, 0x1.485e5cp-31f, 0x1.44939p-123f, 0.0f, 0.0f,
     0.0f, 0x1.1f65cep-43f, 0.0f, 0x1.96e156p-53f, 0.0f, 0x1.50540cp-56f,
     0x1.c859fcp-32f, 0x1.c043f4p-13f, 0x1.55ab7p-9f, 0x1.728226p-15f, 0.0f,
     0x1.3e5b3cp-36f, 0.0f, 0.0f, 0x1.2c83e4p-110f, 0.0f, 0x1.409ed2p-4f,
     0x1.cd102cp-90f, 0.0f, 0.0f, 0.0f, 0x1.4c99d6p-55f, 0.0f, 0.0f, 0.0f,
     0x1.23ceacp-25f, 0.0f, 0.0f, 0.0f, 0x1.fc3e44p-119f, 0.0f, 0x1.b586a6p-125f,
     0.0f, 0x1.5c937cp-13f, 0x1.6a2688p-17f, 0x1.98c7b2p-40f, 0x1.c604ap-84f, 0.0f,
     0x1.77968ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a794cep-114f, 0x1.9b66e8p-16f, 0.0f,
     0x1.76913p-39f, 0.0f, 0.0f, 0x1.f9829p-112f, 0.0f, 0x1.a40d2ep-102f,
     0x1.e62cdap-54f, 0x1.098d7ep-98f, 0.0f, 0x1.725694p-7f, 0.0f, 0x1.35229ep-75f,
     0.0f, 0.0f, 0x1.4f449ep-56f, 0.0f, 0.0f, 0x1.b198ap-27f, 0.0f, 0x1.eb75cp-9f,
     0.0f, 0.0f, 0x1.822adp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79db5ap-9f, 0.0f,
     0x1.e87daap-23f, 0x1.61bfdcp-50f, 0.0f, 0.0f, 0x1.068dccp-22f, 0.0f,
     0x1.e7cc7p-99f, 0x1.f7cf14p-17f, 0x1.c8dc8ap-121f, 0x1.c7433ep-27f, 0.0f, 0.0f,
     0x1.d816ccp-59f, 0x1.54958cp-99f, 0x1.6e077ep-6f, 0x1.74babep-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ffd8c8p-117f, 0x1.c42c94p-104f, 0x1.43f0d6p-97f,
     0x1.3c7bf6p-119f, 0.0f, 0x1.c68a56p-124f, 0.0f, 0.0f, 0x1.043edap-9f,
     0x1.d5b446p-25f, 0x1.fe04cep-123f, 0x1.5407f8p-33f, 0.0f, 0x1.b1e9c4p-121f, 0.0f,
     0x1.9cbcf8p-63f, 0.0f, 0x1.e796aap-38f, 0.0f, 0x1.c94022p-119f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.b4bd1ep-87f, 0x1.34aefcp-27f, 0x1.bbb30ep-33f, 0x1.e16406p-114f,
     0.0f, 0x1.ccf92cp-46f, 0.0f, 0.0f, 0x1.a92188p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18a22p-39f, 0.0f, 0x1.0b08aap-5f, 0x1.ca5f8p-48f, 0.0f, 0.0f, 0.0f,
     0x1.7b65e8p-46f, 0.0f, 0.0f, 0x1.f37632p-49f, 0x1.3748fap-58f, 0x1.fb7308p-48f,
     0.0f, 0x1.6d191ap-103f, 0x1.e22ddcp-67f, 0.0f, 0x1.3f1eb6p-25f, 0x1.bda54ep-64f,
     0.0f, 0.0f, 0x1.ea283cp-5f, 0x1.c888aap-38f, 0.0f, 0x1.205342p-11f,
     0x1.6e6ceep-111f, 0x1.e61ec4p-68f, 0.0f, 0.0f, 0x1.351d62p-88f, 0x1.bb006cp-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfe6ep-52f, 0x1.bd1468p-92f, 0.0f, 0x1.28e4eap-65f,
     0.0f, 0x1.d43784p-84f, 0x1.77388ep-1f, 0x1.803e66p-98f, 0x1.2bad66p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7ebaf2p-76f, 0.0f, 0x1.a5a876p-44f, 0.0f, 0x1.d36dcep-103f,
     0x1.43206ep-87f, 0x1.d2cd32p-22f, 0x1.c90da8p-50f, 0x1.54a21ap-109f,
     0x1.b3d598p-122f, 0x1.382e14p-70f, 0x1.6311c2p-77f, 0.0f, 0x1.17e884p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.84f31ap-2f, 0x1.48f2c8p-121f, 0.0f, 0.0f, 0.0f,
     0x1.b398fep-75f, 0.0f, 0.0f, 0x1.03099p-53f, 0x1.0848c2p-3f, 0x1.22378ep-68f,
     0x1.bf8b62p-93f, 0x1.576884p-55f, 0x1.0b993ap-104f, 0x1.3d2bcp-84f, 0.0f,
     0x1.2afdb2p-11f, 0.0f, 0x1.e86734p-90f, 0.0f, 0x1.2fe222p-104f, 0.0f, 0.0f, 0.0f,
     0x1.777db4p-91f, 0x1.eae812p-88f, 0x1.00a702p-66f, 0x1.a7977cp-76f,
     0x1.bf62eep-60f, 0x1.abb19cp-53f, 0x1.84f75p-79f, 0.0f, 0.0f, 0x1.75ca76p-81f,
     0.0f, 0x1.f41e9p-42f, 0x1.1748fep-71f, 0x1.9dcc8p-51f, 0x1.b077b8p-103f, 0.0f,
     0x1.195b8ap-113f, 0x1.32339p-99f, 0.0f, 0x1.54492ep-77f, 0x1.3e9246p-99f,
     0x1.7c1b0ap-57f, 0x1.87c896p-28f, 0x1.5a9572p-29f, 0.0f, 0x1.d1cf8cp-104f,
     0x1.16a0fap-81f, 0.0f, 0.0f, 0x1.413ee6p-103f, 0x1.0caa82p-4f, 0x1.2bfc08p-19f,
     0x1.98b7f2p-97f, 0.0f, 0.0f, 0x1.99b54p-97f, 0x1.7db88p-124f, 0x1.749adp-101f,
     0x1.339264p-123f, 0x1.61a55ep-45f, 0.0f, 0x1.46d932p-3f, 0x1.b9b09cp-113f, 0.0f,
     0x1.a71978p-11f, 0.0f, 0.0f, 0.0f, 0x1.e5bb02p-117f, 0.0f, 0.0f,
     0x1.5722a2p-120f, 0.0f, 0.0f, 0.0f, 0x1.9f9cfp-71f, 0x1.2e6162p-103f,
     0x1.31d6bep-20f, 0x1.7c575cp-108f, 0x1.55660cp-119f, 0x1.9e2022p-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.36f3aep-79f, 0x1.b3baeep-72f, 0x1.13ec2ep-39f, 0.0f,
     0x1.3ce61cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec2414p-90f, 0x1.d0e2b6p-105f, 0.0f,
     0.0f, 0x1.7af136p-56f, 0.0f, 0x1.1b491ep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.807564p-105f, 0.0f, 0.0f, 0x1.fdd6d4p-84f, 0.0f, 0.0f, 0x1.e002p-69f,
     0x1.6649d8p-68f, 0x1.25f25p-98f, 0x1.9ad7dep-110f, 0.0f, 0x1.aeaefap-27f, 0.0f,
     0.0f, 0x1.a31224p-95f, 0.0f, 0x1.11a284p-56f, 0x1.667e4ap-101f, 0.0f,
     0x1.69d21p-125f, 0x1.9c5964p-16f, 0x1.677b84p-48f, 0x1.7810ap-117f, 0.0f,
     0x1.37d732p-103f, 0x1.f72e1ep-126f, 0.0f, 0x1.e0dc56p-120f, 0.0f, 0.0f,
     0x1.77cc98p-103f, 0x1.7f75fep-50f, 0x1.759f2p-78f, 0.0f, 0.0f, 0x1.a280a6p-110f,
     0x1.509852p-12f, 0.0f, 0x1.a775d8p-29f, 0x1.a471bep-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.46b12ap-123f, 0x1.ed8228p-56f, 0.0f, 0x1.65e04ap-58f, 0.0f, 0.0f,
     0x1.5acadap-46f, 0x1.5f4244p-92f, 0.0f, 0x1.a2d046p-55f, 0x1.fc0cep-8f, 0.0f,
     0.0f, 0x1.5c6c9cp-94f, 0.0f, 0.0f, 0.0f, 0x1.dd289cp-113f, 0.0f, 0x1.f0d866p-16f,
     0x1.eb022cp-65f, 0x1.0a817cp-6f, 0.0f, 0x1.754da6p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0e0a9ap-109f, 0.0f, 0x1.b1758ap-14f, 0x1.49a708p-90f, 0x1.7762d4p-109f,
     0.0f, 0.0f, 0x1.bcb656p-45f, 0.0f, 0x1.b39beap-113f, 0x1.462334p-61f, 0.0f,
     0x1.9c002cp-14f, 0.0f, 0.0f, 0x1.1ca15ep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a61b3p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cd87p-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b6d9p-19f, 0.0f, 0x1.a3d8bp-88f, 0x1.4024aap-92f, 0.0f, 0.0f,
     0x1.02c86ap-31f, 0x1.86b8dap-22f, 0x1.1f5e24p-75f, 0x1.30dacp-5f,
     0x1.0c3246p-11f, 0.0f, 0.0f, 0.0f, 0x1.efe934p-59f, 0.0f, 0.0f, 0x1.994c34p-97f,
     0.0f, 0.0f, 0x1.f027c8p-98f, 0x1.fe75eap-121f, 0.0f, 0x1.b42e14p-60f,
     0x1.e2e0b2p-62f, 0x1.ac39b8p-106f, 0x1.e82488p-96f, 0x1.a770f2p-118f,
     0x1.dd114p-92f, 0.0f, 0x1.643f6p-104f, 0x1.f4fe6cp-56f, 0.0f, 0x1.d31f18p-86f,
     0.0f, 0.0f, 0.0f, 0x1.849f18p-20f, 0.0f, 0x1.df8b02p-60f, 0.0f, 0.0f, 0.0f,
     0x1.20601p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c9262p-39f, 0x1.c896ccp-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.535464p-5f, 0x1.5e763ep-76f, 0x1.0f5fcp-76f,
     0x1.5494dcp-48f, 0.0f, 0.0f, 0x1.27787ap-84f, 0.0f, 0x1.12f2f8p-125f,
     0x1.39299p-77f, 0.0f, 0x1.45755cp-98f, 0x1.b73d9cp-105f, 0.0f, 0x1.1ec098p-85f,
     0.0f, 0x1.922d52p-24f, 0.0f, 0.0f, 0x1.24858p-38f, 0.0f, 0x1.6d898ep-86f,
     0x1.e84434p-111f, 0x1.a3605ap-69f, 0x1.3b2436p-64f, 0x1.8a9662p-78f,
     0x1.4d020cp-13f, 0x1.114116p-1f, 0x1.365468p-91f, 0.0f, 0.0f, 0.0f,
     0x1.e6f586p-113f, 0x1.954322p-109f, 0x1.9ed28p-121f, 0.0f, 0x1.52e522p-50f, 0.0f,
     0.0f, 0x1.33e464p-123f, 0x1.da9fe2p-110f, 0x1.5b054ap-108f, 0x1.d65eaep-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4fa16p-40f, 0x1.b61aaep-4f, 0.0f, 0.0f,
     0x1.a34f96p-8f, 0x1.2fc01ep-58f, 0x1.ec954ap-96f, 0.0f, 0.0f, 0.0f,
     0x1.85adb2p-56f, 0.0f, 0.0f, 0.0f, 0x1.dd56a2p-102f, 0.0f, 0.0f, 0.0f,
     0x1.c667e6p-89f, 0.0f, 0x1.3f8b5cp-122f, 0.0f, 0.0f, 0x1.2db2ccp-92f, 0.0f,
     0x1.def5c8p-50f, 0x1.e6d63p-62f, 0.0f, 0.0f, 0.0f, 0x1.a55ed2p-11f,
     0x1.d96bfap-55f, 0.0f, 0.0f, 0x1.059fb2p-12f, 0x1.2f2f32p-47f, 0.0f, 0.0f,
     0x1.c6091ap-49f, 0.0f, 0.0f, 0x1.bbfc66p-13f, 0x1.3750d6p-86f, 0.0f,
     0x1.ec1d0ap-22f, 0x1.7e206ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db686ap-13f,
     0x1.2b1bc2p-57f, 0.0f, 0.0f, 0x1.011a66p-13f, 0.0f, 0x1.9d6474p-30f,
     0x1.4e9c16p-22f, 0x1.ada554p-92f, 0.0f, 0x1.8af1dap-76f, 0x1.75e21ep-123f,
     0x1.27866p-100f, 0x1.d5888ap-120f, 0x1.2a51e6p-45f, 0x1.79b214p-4f, 0.0f,
     0x1.8c0e52p-66f, 0x1.fdc22ep-53f, 0x1.84417cp-73f, 0.0f, 0x1.7e923cp-100f,
     0x1.28f76ap-73f, 0.0f, 0x1.f95fe8p-13f, 0.0f, 0.0f, 0.0f, 0x1.006226p-53f,
     0x1.5835bp-15f, 0.0f, 0x1.afdbb2p-33f, 0x1.b2aa3cp-54f, 0x1.895f96p-64f, 0.0f,
     0.0f, 0x1.b67ffep-90f, 0.0f, 0.0f, 0.0f, 0x1.da61c6p-79f, 0x1.617d66p-120f, 0.0f,
     0x1.68934p-36f, 0.0f, 0.0f, 0.0f, 0x1.7addaep-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e4cbcp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.826534p-21f, 0x1.304aecp-6f,
     0x1.6d2244p-106f, 0.0f, 0x1.ff523cp-82f, 0x1.f5acd6p-116f, 0x1.5e1802p-112f,
     0x1.1e808ap-6f, 0.0f, 0x1.5fbc66p-80f, 0.0f, 0x1.629312p-18f, 0.0f,
     0x1.e54af4p-81f, 0.0f, 0x1.d1b8d6p-100f, 0x1.fcf6e4p-58f, 0x1.38ef48p-61f,
     0x1.042132p-56f, 0.0f, 0x1.e64828p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c64c6p-118f, 0x1.1850ap-26f, 0.0f, 0.0f, 0x1.89bf9cp-49f, 0.0f, 0.0f, 0.0f,
     0x1.136bc8p-56f, 0.0f, 0x1.75cdeap-36f, 0x1.e18608p-1f, 0x1.8923e8p-13f,
     0x1.b09e5cp-96f, 0.0f, 0x1.f5748ap-50f, 0x1.6ece8ap-82f, 0.0f, 0x1.26cddap-55f,
     0x1.fb96f8p-13f, 0x1.c0b78ap-52f, 0x1.87505ap-32f, 0x1.c53996p-48f, 0.0f, 0.0f,
     0.0f, 0x1.148556p-81f, 0x1.d90676p-24f, 0.0f, 0x1.e3f82ap-25f, 0x1.61f3f4p-111f,
     0.0f, 0.0f, 0x1.717848p-90f, 0x1.cc86e8p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eff0cep-35f, 0.0f, 0x1.381e4ap-23f, 0.0f, 0x1.9b7aap-66f, 0x1.099278p-5f,
     0x1.7012bcp-23f, 0x1.b85bf6p-4f, 0.0f, 0.0f, 0x1.9e4bbep-126f, 0x1.ff22cap-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8096ap-41f, 0x1.54dba2p-84f, 0x1.077p-54f,
     0x1.8aae72p-61f, 0x1.54500cp-55f, 0x1.6b933cp-18f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_acosf8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_acosf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_acosf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
