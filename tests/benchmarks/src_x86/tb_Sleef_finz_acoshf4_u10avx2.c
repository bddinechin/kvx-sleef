/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshf4_u10avx2128.c --function \
 *     Sleef_finz_acoshf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.25222p-18f, 0x1.30c134p-98f, 0.0f, 0.0f, 0.0f, 0x1.a077fap-97f, 0.0f,
     0x1.3a5942p-32f, 0.0f, 0.0f, 0x1.c6ebe2p-39f, 0.0f, 0x1.d77f66p-98f, 0.0f, 0.0f,
     0x1.b65e08p-40f, 0x1.2f69ep-107f, 0x1.463b28p-59f, 0.0f, 0x1.094764p-101f,
     0x1.78827ap-86f, 0.0f, 0.0f, 0.0f, 0x1.d97d5ep-78f, 0.0f, 0x1.91cb9p-76f, 0.0f,
     0x1.d7ec5cp-52f, 0x1.a00c3ap-118f, 0x1.d4efa2p-40f, 0x1.4e7bfep-37f,
     0x1.d1ee78p-122f, 0.0f, 0x1.fd72aap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e5af06p-45f, 0.0f, 0.0f, 0x1.5a119p-60f, 0.0f, 0x1.1dbb56p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6084fap-69f, 0x1.c842e6p-43f, 0.0f, 0x1.b7c884p-30f,
     0.0f, 0x1.367586p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d3fc6p-73f,
     0x1.655894p-36f, 0.0f, 0.0f, 0x1.7b3efep-68f, 0x1.0fc798p-26f, 0x1.4cd388p-42f,
     0.0f, 0x1.9aed5ap-75f, 0x1.5fa19p-53f, 0.0f, 0x1.22a052p-85f, 0.0f,
     0x1.44167p-123f, 0.0f, 0x1.dbe348p-25f, 0x1.992352p-85f, 0.0f, 0x1.4b7b16p-82f,
     0x1.a7f06p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5b21cp-41f, 0x1.2dfedap-51f,
     0.0f, 0.0f, 0.0f, 0x1.4d564cp-61f, 0.0f, 0.0f, 0x1.e1a428p-20f, 0x1.7c0d12p-45f,
     0.0f, 0x1.1acb1ep-116f, 0.0f, 0x1.0767e2p-73f, 0.0f, 0.0f, 0x1.957e1p-123f,
     0x1.bb1cc4p-7f, 0x1.d47b9ep-91f, 0.0f, 0x1.472c5p-111f, 0.0f, 0.0f, 0.0f,
     0x1.57a26ep-95f, 0.0f, 0x1.d18492p-19f, 0x1.0e9004p-118f, 0.0f, 0x1.47f39ap-112f,
     0x1.4a15e2p-102f, 0x1.2e916p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5b4cap-11f, 0.0f, 0x1.56ac76p-20f, 0.0f, 0x1.2a5678p-7f, 0x1.db5032p-1f,
     0x1.72033ep-109f, 0.0f, 0x1.60d548p-105f, 0x1.f3f9f8p-23f, 0x1.389a7ep-66f, 0.0f,
     0x1.ccc1d4p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ebfep-13f, 0.0f,
     0x1.7e8da2p-85f, 0x1.3a74c4p-28f, 0.0f, 0.0f, 0.0f, 0x1.4a9e88p-120f, 0.0f, 0.0f,
     0x1.6651c2p-99f, 0.0f, 0.0f, 0x1.6488ap-117f, 0x1.c7e7d6p-76f, 0x1.683c76p-21f,
     0x1.1db72ep-97f, 0x1.8e672ap-25f, 0.0f, 0.0f, 0x1.4153bp-68f, 0x1.2ee814p-116f,
     0.0f, 0x1.78fd8cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f3724p-73f, 0.0f,
     0x1.80d922p-88f, 0.0f, 0x1.2b3e8cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41df48p-45f,
     0x1.a44c56p-103f, 0x1.cb3de6p-109f, 0.0f, 0x1.5318d6p-83f, 0.0f, 0x1.8d604ep-51f,
     0x1.ce3214p-65f, 0.0f, 0.0f, 0x1.2ca74ap-100f, 0x1.4a01f2p-77f, 0x1.acb51cp-96f,
     0x1.3d1b8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00d2fap-54f, 0.0f, 0.0f, 0.0f, 0x1.258aeap-18f, 0x1.00f8cep-75f,
     0x1.33aebp-121f, 0x1.36778ap-6f, 0.0f, 0x1.97a68ep-6f, 0.0f, 0x1.33ac1cp-94f,
     0.0f, 0.0f, 0.0f, 0x1.264162p-67f, 0x1.9f4c08p-10f, 0.0f, 0.0f, 0x1.4a574p-28f,
     0.0f, 0.0f, 0.0f, 0x1.89ccdp-7f, 0.0f, 0.0f, 0x1.a1f30ep-12f, 0x1.d8dc66p-106f,
     0x1.f174fp-44f, 0x1.d4b2aep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1eb13ep-20f, 0.0f,
     0x1.61276ap-100f, 0.0f, 0.0f, 0x1.50533ap-91f, 0.0f, 0x1.4b547ap-33f,
     0x1.dbcc4ap-53f, 0x1.967754p-46f, 0.0f, 0.0f, 0.0f, 0x1.b04a44p-54f, 0.0f,
     0x1.c23c5ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a9436p-34f, 0x1.1fb28cp-12f, 0.0f,
     0.0f, 0.0f, 0x1.a9f0dp-120f, 0x1.d2b3ep-41f, 0x1.a4940ep-108f, 0x1.85438ep-47f,
     0.0f, 0.0f, 0.0f, 0x1.f6308ep-121f, 0x1.19972ep-61f, 0.0f, 0x1.75d84p-126f,
     0x1.2c9296p-124f, 0.0f, 0.0f, 0x1.f58422p-17f, 0x1.5bb2ccp-38f, 0.0f,
     0x1.aa7642p-63f, 0.0f, 0x1.c72b72p-120f, 0x1.2a946ep-36f, 0x1.e24b38p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e36fb6p-5f, 0.0f, 0.0f, 0x1.d93a1ap-61f, 0.0f, 0.0f,
     0x1.6b3f28p-43f, 0x1.ad5d5cp-71f, 0x1.56c47ap-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f5d2p-42f, 0x1.ae881cp-125f, 0x1.e46e0ap-47f, 0.0f, 0.0f, 0.0f,
     0x1.72e9c6p-113f, 0x1.6d71a6p-82f, 0x1.947b9ap-6f, 0x1.a9f9e4p-8f,
     0x1.995826p-17f, 0x1.b357f6p-7f, 0x1.eeba1cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65ffcp-30f, 0.0f, 0.0f,
     0x1.aa8448p-78f, 0.0f, 0.0f, 0x1.ba027ap-97f, 0x1.7fcd26p-118f, 0.0f,
     0x1.0220cap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bec2cp-111f, 0x1.430912p-15f, 0.0f,
     0x1.bd79d8p-103f, 0x1.bc626p-43f, 0.0f, 0x1.3812d6p-95f, 0.0f, 0.0f,
     0x1.cb6e18p-75f, 0.0f, 0x1.6279bap-66f, 0.0f, 0.0f, 0.0f, 0x1.80eaeap-77f, 0.0f,
     0.0f, 0x1.aaac6cp-54f, 0x1.e6d262p-87f, 0.0f, 0.0f, 0.0f, 0x1.81a122p-34f, 0.0f,
     0.0f, 0x1.7ab558p-79f, 0.0f, 0x1.25ea22p-97f, 0.0f, 0.0f, 0x1.c7c762p-27f,
     0x1.f6fe42p-65f, 0.0f, 0x1.aee3b6p-4f, 0x1.91b0e4p-119f, 0x1.99cf7ep-46f,
     0x1.3fcd9ep-102f, 0.0f, 0.0f, 0x1.91de62p-23f, 0x1.02c238p-87f, 0.0f, 0.0f,
     0x1.bd0bb4p-3f, 0.0f, 0.0f, 0.0f, 0x1.a0b15cp-120f, 0.0f, 0.0f, 0x1.78ca2ep-113f,
     0.0f, 0.0f, 0x1.2f00b4p-50f, 0x1.cc88c2p-82f, 0.0f, 0.0f, 0.0f, 0x1.65a898p-34f,
     0.0f, 0.0f, 0x1.cbd53ep-123f, 0x1.bdadbep-3f, 0x1.3292ccp-19f, 0x1.3edc8ep-59f,
     0.0f, 0x1.4f0e3ep-91f, 0.0f, 0.0f, 0.0f, 0x1.e2cfc8p-11f, 0x1.5db93p-1f,
     0x1.c6af0ep-27f, 0x1.3a0fc4p-48f, 0.0f, 0x1.9f6cbep-64f, 0.0f, 0x1.4fe98cp-61f,
     0x1.ac8f0ap-51f, 0.0f, 0.0f, 0x1.1e8268p-124f, 0.0f, 0.0f, 0x1.029834p-91f,
     0x1.3dd46cp-103f, 0x1.4eb396p-14f, 0x1.0cb43p-67f, 0x1.04a8fp-26f, 0.0f,
     0x1.95aecep-104f, 0x1.74be84p-8f, 0x1.0a128ap-92f, 0x1.dd1cecp-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e1b114p-73f, 0.0f, 0.0f, 0x1.3415c6p-50f, 0x1.488fdcp-17f,
     0x1.0b67f8p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c92bdp-122f, 0x1.c5d25p-67f, 0.0f,
     0.0f, 0x1.09f6dep-72f, 0.0f, 0x1.2a3498p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.032072p-91f, 0x1.f5937cp-73f, 0x1.467112p-27f, 0.0f, 0.0f, 0x1.a84842p-124f,
     0.0f, 0x1.4ddab2p-110f, 0.0f, 0x1.67d822p-18f, 0.0f, 0.0f, 0x1.b5b81p-81f,
     0x1.00a43p-54f, 0x1.0817ccp-122f, 0x1.75a2aep-2f, 0.0f, 0x1.db43d6p-5f,
     0x1.ebd8d8p-25f, 0.0f, 0x1.86ae82p-4f, 0x1.c4fd08p-14f, 0x1.8a4f98p-96f, 0.0f,
     0.0f, 0x1.122198p-77f, 0x1.50a422p-19f, 0x1.323342p-94f, 0.0f, 0.0f, 0.0f,
     0x1.005756p-25f, 0x1.61790ep-32f, 0x1.d9e9b6p-39f, 0.0f, 0.0f, 0.0f,
     0x1.08522ap-52f, 0x1.76ab9ep-77f, 0x1.ff532ep-51f, 0x1.c45948p-99f, 0.0f, 0.0f,
     0x1.8fefap-58f, 0.0f, 0.0f, 0x1.e5a65p-58f, 0x1.dfc0f6p-17f, 0.0f,
     0x1.2630ap-25f, 0.0f, 0x1.8668f6p-54f, 0x1.eb4592p-125f, 0x1.177302p-118f,
     0x1.80239ap-19f, 0x1.e902fp-25f, 0.0f, 0x1.3cc8a4p-116f, 0x1.ec8b1cp-80f,
     0x1.6f1f06p-99f, 0.0f, 0x1.19c094p-28f, 0x1.9f3c22p-18f, 0.0f, 0x1.4aa60ep-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4f2acp-85f, 0.0f, 0.0f,
     0x1.28bce8p-43f, 0x1.d65b58p-4f, 0.0f, 0x1.cf5a14p-119f, 0.0f, 0.0f,
     0x1.4dcc44p-16f, 0x1.adbc12p-125f, 0.0f, 0x1.19a972p-17f, 0x1.2134bp-35f, 0.0f,
     0x1.060718p-18f, 0x1.08ff74p-43f, 0x1.ae168p-12f, 0.0f, 0.0f, 0.0f,
     0x1.33cce8p-98f, 0.0f, 0x1.cff474p-52f, 0x1.05c3dcp-38f, 0x1.4b62ecp-27f, 0.0f,
     0.0f, 0x1.d0bb8cp-56f, 0x1.1b23eep-102f, 0x1.282e2cp-29f, 0x1.153b66p-20f, 0.0f,
     0.0f, 0x1.205fbcp-117f, 0.0f, 0.0f, 0x1.3b76fap-19f, 0x1.86def4p-86f,
     0x1.8a0f56p-112f, 0.0f, 0.0f, 0x1.4d5506p-28f, 0x1.205016p-96f, 0x1.07c45cp-75f,
     0.0f, 0x1.1658eep-3f, 0.0f, 0.0f, 0.0f, 0x1.f22c96p-62f, 0x1.f3dc5p-24f, 0.0f,
     0x1.7eeae8p-102f, 0x1.ffb264p-52f, 0.0f, 0.0f, 0x1.460d72p-36f, 0.0f,
     0x1.4efde4p-57f, 0.0f, 0x1.2bd2bep-49f, 0.0f, 0.0f, 0.0f, 0x1.fc4db8p-12f, 0.0f,
     0x1.1af1f6p-2f, 0.0f, 0x1.6a0238p-115f, 0x1.2c334ap-16f, 0.0f, 0.0f,
     0x1.3e4034p-107f, 0x1.521ab4p-64f, 0.0f, 0.0f, 0x1.1ad3c8p-115f, 0x1.2a7b3cp-16f,
     0.0f, 0.0f, 0x1.24772ep-110f, 0.0f, 0x1.f17a12p-96f, 0x1.7ceadep-79f, 0x1p0f,
     0x1.f0a37ep-15f, 0.0f, 0x1.07056p-4f, 0.0f, 0x1.8c7566p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1p0f, 0x1.2cd79cp-38f, 0.0f, 0x1.ee9f0cp-67f, 0x1.0b6f06p-40f,
     0.0f, 0x1.1468dap-70f, 0x1.35cc04p-85f, 0x1.c35f52p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1fcaap-58f, 0x1.a97c2cp-53f, 0.0f, 0.0f, 0.0f, 0x1.e88b66p-54f,
     0x1.665016p-43f, 0.0f, 0x1.3e184p-53f, 0x1.d45d72p-48f, 0.0f, 0.0f, 0.0f,
     0x1.c4e3ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1665e2p-94f, 0.0f, 0x1.72c746p-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.036744p-95f, 0x1.40116ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.83da68p-87f, 0.0f, 0.0f, 0.0f, 0x1.b73c88p-2f, 0x1.74946cp-9f,
     0x1.d7fecep-123f, 0.0f, 0.0f, 0x1.de81c6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.308d56p-9f, 0x1.ba2f6cp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e7fd4p-32f, 0x1.12ce24p-41f, 0x1.280238p-63f, 0.0f, 0x1.b749ep-20f, 0.0f,
     0x1.de046ap-30f, 0.0f, 0.0f, 0x1.21c2a2p-52f, 0.0f, 0.0f, 0.0f, 0x1.9cf60ap-99f,
     0.0f, 0x1.8c5dap-47f, 0x1.817d48p-110f, 0x1.c50c36p-7f, 0.0f, 0x1.04cb6p-25f,
     0x1.ff8e62p-122f, 0.0f, 0.0f, 0x1.ebeadap-106f, 0.0f, 0.0f, 0.0f,
     0x1.4900bp-112f, 0.0f, 0x1.ddd4d2p-117f, 0x1.574626p-124f, 0x1.9752fap-26f,
     0x1.21d3e2p-12f, 0x1.80b968p-83f, 0x1.983e62p-94f, 0.0f, 0.0f, 0.0f,
     0x1.79739ap-83f, 0.0f, 0.0f, 0x1.017df6p-97f, 0x1.01eb5p-54f, 0x1.aefb32p-4f,
     0x1.d94e7p-14f, 0x1.9f79ccp-23f, 0.0f, 0x1.1de0b2p-45f, 0.0f, 0x1.e11dfp-90f,
     0x1.265ab2p-78f, 0x1.96ba1p-126f, 0x1.6c7c78p-96f, 0x1.b9a35ap-60f, 0.0f,
     0x1.6b1184p-1f, 0.0f, 0x1.d11d14p-48f, 0x1.e0b636p-118f, 0x1.08413p-47f, 0.0f,
     0x1.dcfa82p-10f, 0.0f, 0.0f, 0x1.55cf2p-83f, 0.0f, 0x1.7bb414p-62f, 0.0f,
     0x1.661192p-66f, 0x1.d8f27ep-109f, 0x1.5bb4c4p-87f, 0x1.79c7ap-88f,
     0x1.97a704p-110f, 0x1.b8bc84p-78f, 0.0f, 0.0f, 0x1.009acep-49f, 0.0f,
     0x1.0a9cf8p-52f, 0.0f, 0.0f, 0.0f, 0x1.8e67e8p-22f, 0.0f, 0x1.5c35aap-75f, 0.0f,
     0x1.304522p-9f, 0x1.a2e142p-50f, 0.0f, 0x1.d41206p-85f, 0x1.3b596cp-95f, 0.0f,
     0.0f, 0x1.ca60fap-6f, 0x1.832d1ep-19f, 0.0f, 0x1.6bb7f8p-113f, 0.0f,
     0x1.a90ad2p-48f, 0.0f, 0.0f, 0x1.6ae352p-38f, 0.0f, 0.0f, 0x1.2b1fa4p-29f, 0.0f,
     0.0f, 0x1.a6fffp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c7d4ep-51f,
     0x1.08caaep-76f, 0.0f, 0x1.b8ac9cp-18f, 0.0f, 0.0f, 0.0f, 0x1.29d0fcp-7f,
     0x1.2cecd4p-108f, 0.0f, 0.0f, 0x1.d36c18p-8f, 0x1.cec794p-23f, 0x1.4ba208p-126f,
     0.0f, 0.0f, 0x1.206918p-43f, 0x1.18aa1p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2aa7dep-121f, 0.0f, 0.0f, 0x1.274e82p-10f,
     0.0f, 0.0f, 0.0f, 0x1.3d2b5p-55f, 0x1.cc307p-18f, 0.0f, 0x1.f892fcp-42f,
     0x1.62790ap-61f, 0.0f, 0x1.7a3138p-75f, 0x1.5c283p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d7ca6cp-71f, 0.0f, 0x1.3f54bep-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8c4f0ep-13f, 0x1.f480eap-74f, 0.0f, 0x1.e1f108p-115f, 0x1.e858eep-49f, 0.0f,
     0.0f, 0x1.e61998p-109f, 0.0f, 0.0f, 0x1.43c9bep-93f, 0x1.d0d8fp-13f,
     0x1.f19274p-53f, 0.0f, 0.0f, 0x1.e91282p-80f, 0x1.a1742ap-17f, 0.0f,
     0x1.888606p-21f, 0x1.d9fa2cp-26f, 0.0f, 0.0f, 0x1.623aep-79f, 0x1.711c3ep-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d8c16p-13f, 0x1.772aeap-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a719ep-53f, 0.0f, 0.0f, 0x1.61c10ep-126f, 0x1.ab7d9cp-11f,
     0.0f, 0.0f, 0.0f, 0x1.c78c8ap-90f, 0x1.50ca68p-122f, 0x1.2b1f1p-79f, 0.0f,
     0x1.db0694p-110f, 0.0f, 0x1.22d89ap-109f, 0.0f, 0.0f, 0x1.bb6b4p-27f, 0.0f,
     0x1.6590e4p-45f, 0.0f, 0.0f, 0x1.b0e898p-54f, 0.0f, 0x1.af5c9cp-4f,
     0x1.953b2p-70f, 0.0f, 0.0f, 0x1.ff97cep-21f, 0.0f, 0.0f, 0.0f, 0x1.433972p-28f,
     0x1.bac12cp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3301aap-3f, 0x1.4e5d86p-19f,
     0x1.68a92cp-101f, 0x1.9d188p-17f, 0x1.8814d4p-33f, 0.0f, 0.0f, 0x1.c4f058p-37f,
     0x1.d5581p-53f, 0.0f, 0.0f, 0x1.e2924ap-80f, 0x1.61ef0ap-120f, 0x1.abb5d8p-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ed4f4p-109f, 0x1.324696p-98f,
     0.0f, 0x1.5277bap-60f, 0x1.24c206p-62f, 0x1.4956b6p-91f, 0x1.732532p-119f,
     0x1.82288cp-73f, 0x1.0eac34p-115f, 0x1.065d96p-64f, 0x1.cfb582p-26f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a1474p-97f, 0x1.dc7c0cp-116f, 0.0f, 0x1.f3e4aep-56f,
     0x1.98fdb4p-7f, 0x1.e9ffb4p-57f, 0x1.2ee662p-16f, 0.0f, 0.0f, 0x1.21fd16p-34f,
     0.0f, 0x1.4d05ep-1f, 0x1.46cadep-29f, 0x1.14743ep-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f
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
            tmp1 = Sleef_finz_acoshf4_u10avx2128(tmp0);
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
    printf("Sleef_finz_acoshf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acoshf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
