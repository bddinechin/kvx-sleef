/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif8_u05kvx.c --function \
 *     Sleef_finz_sincospif8_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x8_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x8_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x8_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.6c2d7cp-122f, 0x1.6b04aep-16f, 0x1.106b2cp-16f,
     0x1.574868p-108f, 0.0f, 0x1.b4f276p-25f, 0.0f, 0.0f, 0.0f, 0x1.766e1p-114f,
     0x1.3aec5cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.329646p-53f, 0x1.956b56p-69f,
     0x1.f1f284p-2f, 0x1.48df96p-8f, 0x1.407b9cp-46f, 0x1.6580cap-38f,
     0x1.55605cp-51f, 0x1.f9f364p-87f, 0.0f, 0x1.892a02p-108f, 0.0f, 0.0f,
     0x1.44ddecp-110f, 0x1p0f, 0.0f, 0x1.7e5fbp-115f, 0x1.00d75cp-93f, 0.0f, 0.0f,
     0x1.d17c4p-113f, 0.0f, 0x1.9e038ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8e172p-23f, 0.0f, 0.0f, 0x1.e1e6c4p-16f, 0.0f, 0x1.a5e1a4p-125f, 0.0f,
     0x1.5eea74p-25f, 0x1.6be114p-71f, 0x1.83568ap-32f, 0.0f, 0x1.49050cp-91f,
     0x1.d2f99cp-8f, 0.0f, 0.0f, 0x1.34c734p-82f, 0.0f, 0x1.a27e2cp-48f, 0.0f, 0.0f,
     0.0f, 0x1.db50bep-69f, 0x1.5e25a6p-90f, 0x1.d66d5ap-81f, 0.0f, 0.0f,
     0x1.0dae22p-114f, 0.0f, 0x1.ac9bd2p-34f, 0.0f, 0.0f, 0x1.a7b606p-8f,
     0x1.5e13bap-28f, 0.0f, 0.0f, 0x1.1594d2p-80f, 0.0f, 0.0f, 0.0f, 0x1.8459fcp-22f,
     0.0f, 0x1.2af348p-83f, 0x1.bc7692p-8f, 0.0f, 0.0f, 0.0f, 0x1.734ec8p-109f,
     0x1.864674p-59f, 0x1.b6cecp-111f, 0.0f, 0x1.5457dep-8f, 0.0f, 0x1.fbd394p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da7b38p-81f, 0x1.af60f2p-50f,
     0x1.23eddp-98f, 0x1.b4991cp-9f, 0.0f, 0.0f, 0x1.ae9fecp-14f, 0x1.dc219ep-35f,
     0x1.10e51p-106f, 0.0f, 0x1.2afb6p-15f, 0.0f, 0x1.f48be8p-61f, 0x1.83cc04p-69f,
     0x1.b7f1c2p-68f, 0x1.8858bcp-81f, 0x1.73d0f8p-122f, 0x1.57e7d8p-42f, 0.0f, 0.0f,
     0x1.ce15fcp-52f, 0.0f, 0x1.f6be68p-70f, 0x1.65da06p-22f, 0x1.882cbap-60f,
     0x1.4465ccp-31f, 0x1.ff7f5ap-55f, 0.0f, 0x1.41bfap-35f, 0.0f, 0x1.f10506p-113f,
     0x1.88bccep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aab03p-58f,
     0x1.b3999ap-40f, 0x1.ad2f54p-59f, 0x1.17ab3p-48f, 0x1.5f81fap-94f, 0.0f,
     0x1.1fdfacp-42f, 0x1.90f624p-2f, 0.0f, 0.0f, 0.0f, 0x1.42b5dcp-95f,
     0x1.c7f718p-104f, 0.0f, 0.0f, 0x1.844ee8p-58f, 0x1.7e5726p-10f, 0.0f, 0.0f,
     0x1.9c1e4ep-21f, 0x1.4239b8p-76f, 0x1.c1fd96p-81f, 0.0f, 0x1.300146p-36f, 0.0f,
     0x1.5440ap-4f, 0x1.8e2c34p-28f, 0x1.ad6388p-120f, 0.0f, 0x1.e5428ep-8f,
     0x1.5b2fap-16f, 0x1.f44b92p-29f, 0x1.2ca7c2p-49f, 0.0f, 0.0f, 0.0f,
     0x1.72bf02p-66f, 0x1.4b7082p-31f, 0x1.84ee3p-38f, 0.0f, 0x1.f2accap-56f,
     0x1.80b79p-45f, 0x1.e1a46ap-74f, 0x1.90075cp-125f, 0x1.03348p-87f, 0.0f, 0.0f,
     0.0f, 0x1.b640cp-85f, 0x1.7e7914p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be9f3cp-25f,
     0x1.e93dd4p-1f, 0x1.97bec6p-79f, 0x1.1f4978p-118f, 0.0f, 0.0f, 0x1.1b256p-87f,
     0x1.3fca26p-68f, 0x1.36ac2ap-95f, 0x1.b9c96ep-101f, 0.0f, 0x1.c75c56p-16f,
     0x1.400accp-80f, 0x1.50c98ap-102f, 0x1.388f2cp-52f, 0.0f, 0x1.a2141ap-22f,
     0x1.57bfa2p-123f, 0.0f, 0x1.153b62p-123f, 0x1.a9e8e8p-59f, 0x1.1e8f4ap-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fd2dep-79f, 0x1.155782p-7f, 0.0f,
     0x1.be36b8p-49f, 0.0f, 0x1.f4ee3p-119f, 0.0f, 0x1.21f656p-11f, 0.0f, 0.0f,
     0x1.7b1144p-75f, 0.0f, 0.0f, 0.0f, 0x1.fea6a2p-30f, 0x1.bcefbap-106f, 0.0f,
     0x1.d0235ep-8f, 0.0f, 0.0f, 0x1.095b38p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.606f34p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24632ep-39f, 0.0f, 0x1.503774p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0226cp-27f,
     0x1.86bd6ap-47f, 0.0f, 0.0f, 0x1.13f1bcp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98a7d6p-49f, 0.0f, 0x1.618fc2p-92f, 0x1.46a64ap-89f, 0x1.798eb4p-37f, 0.0f,
     0x1.7e235p-52f, 0.0f, 0x1.4b4e86p-123f, 0x1.d06eccp-42f, 0.0f, 0x1.53dfcep-43f,
     0x1.f1bf7ep-25f, 0x1.337a6ap-29f, 0.0f, 0x1.be47f2p-92f, 0.0f, 0.0f, 0.0f,
     0x1.3e8beep-93f, 0x1.a7adf2p-52f, 0.0f, 0x1.1cb1f8p-84f, 0x1.a0a9f2p-93f, 0.0f,
     0x1.677a54p-83f, 0.0f, 0x1.a9cd9p-106f, 0.0f, 0x1.49a018p-11f, 0x1.aadc7p-119f,
     0x1.fc628p-93f, 0.0f, 0x1.3f3f48p-1f, 0x1.e2f466p-20f, 0x1.ddc1d6p-125f,
     0x1.6a588ap-55f, 0.0f, 0x1.741da8p-58f, 0.0f, 0.0f, 0x1.b50bf6p-106f,
     0x1.eae50cp-60f, 0x1.97a5fcp-18f, 0x1.d08226p-91f, 0.0f, 0x1.f2e36ep-112f,
     0x1.e5eae8p-80f, 0x1.a94606p-65f, 0.0f, 0.0f, 0.0f, 0x1.6b6082p-12f, 0.0f,
     0x1.dfa1dcp-111f, 0x1.299d3cp-29f, 0.0f, 0.0f, 0x1.f74962p-89f, 0x1.843a2ep-80f,
     0x1.6e3e36p-87f, 0x1.bf3428p-91f, 0.0f, 0x1.96857ep-76f, 0x1.754c34p-89f,
     0x1.fd171ap-50f, 0x1.7168d2p-53f, 0.0f, 0x1.d187cap-126f, 0x1.cfa16cp-70f, 0.0f,
     0x1.12b65ap-80f, 0x1.1f5f1cp-30f, 0x1.61a19cp-50f, 0.0f, 0x1.dee964p-81f, 0.0f,
     0.0f, 0x1.bce65cp-48f, 0.0f, 0.0f, 0x1.ed9b18p-55f, 0.0f, 0x1.a5818p-79f,
     0x1.97aba2p-53f, 0x1.f8ac5cp-65f, 0.0f, 0.0f, 0x1.76fbfp-90f, 0x1.4769p-74f,
     0x1.1a560ap-38f, 0.0f, 0x1.723578p-123f, 0.0f, 0.0f, 0x1.75d018p-83f,
     0x1.611244p-94f, 0.0f, 0.0f, 0x1.6368d8p-45f, 0x1.95ed6p-104f, 0.0f,
     0x1.0fa81cp-50f, 0x1.3416e4p-96f, 0.0f, 0.0f, 0x1.2f67a8p-113f, 0x1.5ec512p-86f,
     0x1.c9f694p-1f, 0.0f, 0.0f, 0x1.0afafcp-56f, 0.0f, 0.0f, 0x1.3b7f94p-9f, 0.0f,
     0.0f, 0x1.a96dcep-118f, 0x1.095318p-13f, 0x1.28e9eep-22f, 0x1.976a36p-119f, 0.0f,
     0x1.b22ff8p-55f, 0x1.ed2c8ep-7f, 0.0f, 0x1.a1d076p-55f, 0.0f, 0x1.80e3fp-28f,
     0x1.c2e85p-54f, 0x1.1357e8p-34f, 0x1.a698ep-60f, 0x1.4f7944p-36f,
     0x1.2afda8p-79f, 0.0f, 0x1.834bbep-48f, 0.0f, 0x1.650bd4p-94f, 0.0f, 0.0f,
     0x1.a4ebb6p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.677b24p-84f, 0.0f,
     0x1.cee208p-7f, 0x1.73cf96p-2f, 0.0f, 0.0f, 0x1.40d4e6p-12f, 0.0f, 0.0f,
     0x1.22e318p-11f, 0.0f, 0.0f, 0x1.555e9p-91f, 0x1.45705p-27f, 0x1.9f0d2p-14f,
     0.0f, 0.0f, 0.0f, 0x1.c4e2aep-48f, 0.0f, 0.0f, 0.0f, 0x1.09ca6p-97f, 0.0f,
     0x1.8606ap-67f, 0.0f, 0x1.a85264p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d32b96p-96f,
     0.0f, 0.0f, 0x1.a5f2bp-67f, 0.0f, 0x1.7f7f64p-102f, 0x1.00723p-13f, 0.0f,
     0x1.2cfa58p-20f, 0x1.8fa1d6p-86f, 0.0f, 0.0f, 0x1.d471e2p-18f, 0.0f,
     0x1.5b2ccep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bda5ep-32f, 0x1.fc620ep-13f,
     0.0f, 0.0f, 0.0f, 0x1.52a1e6p-71f, 0.0f, 0.0f, 0x1.9339dep-30f, 0.0f,
     0x1.05186ap-63f, 0x1.f5867ap-57f, 0x1.79d13p-78f, 0.0f, 0x1.31bb22p-34f, 0.0f,
     0x1.713aa2p-79f, 0.0f, 0x1.1e2b7cp-24f, 0x1.eeb06ap-39f, 0x1.934016p-36f, 0.0f,
     0.0f, 0x1.9d742cp-45f, 0.0f, 0x1.1cadacp-105f, 0.0f, 0.0f, 0.0f,
     0x1.186c3cp-126f, 0x1.78084ap-112f, 0x1.758694p-79f, 0x1.0e1c82p-107f,
     0x1.ac1b8p-47f, 0x1.e91e66p-18f, 0.0f, 0.0f, 0.0f, 0x1.8e84d8p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dd065ap-23f, 0x1.bc2f5cp-37f, 0x1.27e1bep-65f, 0x1.b713d2p-97f,
     0x1.4422bcp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7b998p-10f,
     0x1.8631fp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae18dep-21f, 0x1.1010ecp-101f,
     0x1.600c04p-112f, 0.0f, 0x1.81d742p-112f, 0.0f, 0.0f, 0x1.4f8756p-8f, 0.0f, 0.0f,
     0x1.579c3cp-29f, 0.0f, 0x1.13dc1cp-92f, 0.0f, 0.0f, 0.0f, 0x1.7892fp-15f, 0.0f,
     0.0f, 0x1.19787ap-74f, 0x1.c75a1ap-90f, 0.0f, 0x1.fd7b88p-16f, 0x1.cca4f8p-2f,
     0.0f, 0.0f, 0x1.ed64d4p-3f, 0.0f, 0.0f, 0x1.a4c69p-17f, 0.0f, 0x1.2eb24p-94f,
     0x1.1758acp-63f, 0.0f, 0x1.8ef3acp-27f, 0x1.0a409p-5f, 0x1.f9e36ap-8f, 0.0f,
     0x1.ea9054p-120f, 0x1.11bcb4p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ad976p-66f, 0.0f,
     0.0f, 0.0f, 0x1.409584p-16f, 0x1.af5cc6p-25f, 0x1.fcb382p-13f, 0.0f,
     0x1.ea307ep-34f, 0x1.c7bf5p-102f, 0x1.e2082p-67f, 0.0f, 0x1.f3076p-112f,
     0x1.3622c6p-15f, 0.0f, 0.0f, 0x1.2073d4p-121f, 0.0f, 0.0f, 0x1.d5f34cp-43f, 0.0f,
     0.0f, 0x1.6ce98ap-60f, 0x1.d89bdp-70f, 0.0f, 0.0f, 0.0f, 0x1.b1ae3ap-33f,
     0x1.99faa6p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5562cep-30f, 0x1.8db9cp-53f, 0.0f,
     0.0f, 0x1.764038p-57f, 0x1.57c7aep-122f, 0.0f, 0x1.064faep-5f, 0x1.bd7b9cp-72f,
     0x1.089d7ap-7f, 0.0f, 0.0f, 0x1.669682p-56f, 0.0f, 0.0f, 0x1.3f5d98p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.219646p-6f, 0x1.86bd5ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.79973p-37f, 0x1.14275ap-3f, 0x1.5989dcp-73f, 0.0f,
     0x1.ca7936p-21f, 0x1.647d18p-121f, 0x1.aa15b2p-94f, 0.0f, 0x1.58a928p-17f,
     0x1.930632p-43f, 0x1.de93d2p-115f, 0.0f, 0x1.d5ee3cp-20f, 0x1.788d58p-115f,
     0x1.0905f6p-103f, 0.0f, 0.0f, 0x1.2256ecp-52f, 0x1.e7acfp-107f, 0.0f,
     0x1.b3ca0ep-68f, 0x1.5918e4p-43f, 0x1.b44efcp-82f, 0x1.91f886p-32f,
     0x1.536c42p-67f, 0x1.de8348p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e88fep-115f, 0.0f, 0x1.181636p-90f, 0.0f, 0.0f, 0x1.0cb172p-105f,
     0x1.efcb7p-79f, 0x1.a9782ep-93f, 0.0f, 0x1.a1de8ep-122f, 0.0f, 0x1.22defap-118f,
     0x1.3aad2ap-113f, 0.0f, 0x1.a56bbap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a7f196p-124f, 0.0f, 0x1.614548p-1f, 0x1.ac754ap-48f, 0x1.9f20ecp-21f,
     0x1.cf4872p-112f, 0.0f, 0x1.831d8cp-63f, 0.0f, 0.0f, 0x1.c5ab2p-116f, 0.0f, 0.0f,
     0x1.5ab43ep-112f, 0.0f, 0x1.9ddfe4p-19f, 0x1.e55df2p-43f, 0x1.eca246p-36f,
     0x1.c54224p-53f, 0x1.b066cap-92f, 0.0f, 0x1.d4d1dp-59f, 0.0f, 0.0f,
     0x1.ecf5dcp-22f, 0x1.8a6f56p-20f, 0.0f, 0.0f, 0x1.0434c6p-30f, 0x1.8627dcp-124f,
     0x1.014c0ep-22f, 0.0f, 0x1.efa212p-10f, 0x1.35cdaap-67f, 0x1.6eb296p-113f, 0.0f,
     0.0f, 0x1.f770ecp-87f, 0x1.a2c342p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.921608p-67f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.6ab24ep-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9810bcp-107f, 0.0f, 0.0f, 0.0f, 0x1.9f858ap-96f, 0.0f, 0x1.062a4p-62f,
     0.0f, 0x1.59e94cp-53f, 0x1.884206p-124f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.f70d6ep-109f, 0.0f, 0x1.e8b4ap-1f, 0x1.6fdb74p-124f, 0x1.3da708p-94f, 0.0f,
     0x1.8c6a78p-39f, 0.0f, 0x1.bafcdep-34f, 0x1.09c8f6p-79f, 0x1.1d13a6p-75f, 0.0f,
     0x1.12048p-103f, 0x1.38ed76p-93f, 0x1.b21a66p-54f, 0x1.9d7b1p-90f, 0.0f, 0.0f,
     0.0f, 0x1.299a5ap-32f, 0.0f, 0x1.3cd9bp-86f, 0.0f, 0x1.98e9dep-87f, 0.0f,
     0x1.89367ep-85f, 0.0f, 0.0f, 0x1.48522ap-22f, 0x1.f34a08p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d841bep-21f, 0x1.a2e256p-108f, 0x1.ff31a8p-69f, 0.0f,
     0x1.7986dap-75f, 0.0f, 0.0f, 0x1.a89c42p-58f, 0.0f, 0x1.567b9ep-14f,
     0x1.d30a26p-117f, 0.0f, 0x1.c8bc22p-27f, 0x1.d1252ep-70f, 0x1.34906cp-40f, 0.0f,
     0x1.e6ec7ep-1f, 0x1p0f, 0x1.cf5898p-79f, 0.0f, 0x1.458e5ap-21f, 0x1.b8ca56p-5f,
     0.0f, 0x1.bf45acp-84f, 0.0f, 0.0f, 0x1.32e23ap-74f, 0x1.86b77ep-24f, 0.0f, 0.0f,
     0.0f, 0x1.6fdf7p-21f, 0x1.9cbd54p-75f, 0x1.4fef28p-53f, 0x1.3d2a3ep-16f, 0.0f,
     0.0f, 0x1.7e264cp-37f, 0x1.153d4cp-102f, 0.0f, 0x1.d7da5ap-100f, 0.0f, 0.0f,
     0x1.173be2p-79f, 0x1.7a0438p-18f, 0.0f, 0.0f, 0x1.5bd078p-25f, 0.0f,
     0x1.1b18e8p-55f, 0.0f, 0x1.aba918p-98f, 0.0f, 0x1.fa4312p-59f, 0x1.cfb642p-61f,
     0x1.b3d7dp-73f, 0x1.75c898p-57f, 0x1.e413dap-44f, 0.0f, 0x1.8234fep-97f, 0.0f,
     0.0f, 0x1.a25f9ap-123f, 0.0f, 0.0f, 0x1.e702bp-112f, 0.0f, 0.0f, 0x1.21614ep-42f,
     0.0f, 0.0f, 0x1.01f6bp-11f, 0x1.d1d616p-57f, 0x1.7f1abp-10f, 0.0f,
     0x1.30fecp-41f, 0x1.dc3b8p-52f, 0x1.96b4fp-84f, 0.0f, 0.0f, 0.0f,
     0x1.0ee83ep-107f, 0.0f, 0.0f, 0.0f, 0x1.79901cp-8f, 0x1.9414a4p-94f,
     0x1.95c62p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e444p-91f, 0x1.d24a04p-22f,
     0x1.77e6c6p-23f, 0.0f, 0.0f, 0.0f, 0x1.6b4fd8p-33f, 0.0f, 0.0f, 0.0f,
     0x1.aabbf8p-66f, 0x1.87029ap-28f, 0x1.98edbp-89f, 0x1.7553fep-66f,
     0x1.fe3a94p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a88b0cp-9f, 0.0f, 0x1.e6297cp-100f,
     0x1.13d28p-66f, 0x1.48fd12p-66f, 0x1.be3aa2p-85f, 0.0f, 0.0f, 0.0f,
     0x1.08f3aep-77f, 0x1.27c4bep-104f, 0x1.a7f85p-91f, 0x1.50d83cp-115f,
     0x1.f2695cp-89f, 0x1.5c35b6p-89f, 0.0f, 0.0f, 0x1.b5d752p-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bad93cp-55f, 0.0f, 0.0f, 0x1.3bc91p-35f, 0.0f, 0x1.e294eep-104f,
     0x1.1e00b8p-4f, 0.0f, 0.0f, 0.0f, 0x1.7405d8p-19f, 0x1.d896cap-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b5d98ep-107f, 0x1.a49c58p-46f, 0x1.924a4cp-95f, 0x1.377e62p-108f,
     0x1.8ada76p-114f, 0.0f, 0x1.64fb2p-112f, 0.0f, 0x1.f2ebf8p-89f, 0x1.810bc6p-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92255p-60f, 0.0f, 0.0f, 0x1.f1fa16p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2bfaa6p-23f, 0x1.8eca44p-112f, 0x1.211316p-2f, 0.0f, 0.0f,
     0x1.b4a316p-33f, 0x1.373b98p-29f, 0.0f, 0.0f, 0x1.b43894p-19f, 0.0f,
     0x1.82a0b4p-108f, 0.0f, 0x1.080786p-15f, 0.0f, 0x1.1fddf2p-117f, 0.0f,
     0x1.85cca6p-92f, 0x1.3954eap-69f, 0x1.95029cp-55f, 0.0f, 0x1.ab633p-48f,
     0x1.9f5304p-60f, 0x1.bc8fb8p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c22052p-123f,
     0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x8_t_2 global_bench_acc;
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
        Sleef_float32x8_t_2 local_acc;
        int32_t i;
        ml_float8_t tmp0;
        ml_float8_t tmp1;
        ml_float8_t tmp2;
        ml_float8_t tmp3;
        ml_float8_t tmp4;
        ml_float8_t tmp5;
        Sleef_float32x8_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float8_t tmp0;
            Sleef_float32x8_t_2 tmp1;
            ml_float8_t tmp2;
            ml_float8_t tmp3;
            ml_float8_t tmp4;
            ml_float8_t tmp5;
            ml_float8_t tmp6;
            ml_float8_t tmp7;
            Sleef_float32x8_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincospif8_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x8_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(8);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x8_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_sincospif8_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincospif8_u05kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
