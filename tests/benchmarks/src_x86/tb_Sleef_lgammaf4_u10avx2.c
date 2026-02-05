/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammaf4_u10avx2128.c --function Sleef_lgammaf4_u10avx2128 \
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
     0x1.75c06ap-29f, 0x1.b8c86ep-52f, 0.0f, 0x1.76c122p-52f, 0x1.9718a2p-27f, 0.0f,
     0x1.665034p-76f, 0.0f, 0.0f, 0x1.51ea36p-57f, 0x1.281624p-111f, 0x1.29598ap-83f,
     0.0f, 0.0f, 0x1.5a65f2p-126f, 0x1.245528p-18f, 0x1.7700d4p-62f, 0x1.1b7ef4p-36f,
     0x1.dc2be4p-81f, 0x1.634f64p-93f, 0.0f, 0.0f, 0x1.302b06p-56f, 0x1.e86ffcp-31f,
     0x1.b57a46p-45f, 0x1.42f7b8p-15f, 0.0f, 0.0f, 0x1.774234p-54f, 0x1.86c59ep-81f,
     0x1.f73bf2p-58f, 0x1.d2a7a2p-27f, 0x1.e8aa8cp-79f, 0.0f, 0.0f, 0x1.4544d6p-15f,
     0.0f, 0.0f, 0.0f, 0x1.470dccp-8f, 0x1.2e5e3cp-37f, 0.0f, 0x1.5794bep-112f, 0.0f,
     0x1.a0252p-77f, 0x1.aa06eap-73f, 0.0f, 0.0f, 0x1.63d3e2p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ebe75ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fffcaep-3f, 0x1.8d8324p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a8284p-25f, 0.0f, 0x1.a9583ap-21f, 0.0f, 0.0f,
     0x1.8cd894p-101f, 0x1.6927dcp-79f, 0.0f, 0x1.7503dp-92f, 0.0f, 0x1.c351a6p-20f,
     0x1.e3628p-27f, 0.0f, 0x1.8f8adep-50f, 0x1.9ecd4ap-105f, 0x1.555226p-77f,
     0x1.e9ea22p-123f, 0.0f, 0x1.9e87b2p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1b1fap-30f, 0x1.76d632p-107f, 0.0f, 0.0f, 0x1.28c8dp-96f, 0x1.6f6d6ap-89f,
     0x1.7b1676p-126f, 0x1.682772p-70f, 0x1.f8f79ep-86f, 0.0f, 0x1.236682p-68f,
     0x1.5fbcacp-13f, 0x1.63e7ecp-115f, 0x1.e9c27cp-120f, 0x1.0a4e3p-60f,
     0x1.b3ae7ap-56f, 0.0f, 0x1.8745e4p-61f, 0x1.78d9b2p-56f, 0.0f, 0x1.ebfc28p-104f,
     0x1.8c9bd8p-44f, 0x1.541b04p-51f, 0.0f, 0x1.bfa5cp-15f, 0x1.c163ecp-73f,
     0x1.0059dcp-77f, 0.0f, 0x1.e70ad6p-71f, 0x1.a14e32p-17f, 0.0f, 0x1.1157d6p-88f,
     0.0f, 0.0f, 0x1.66c0a8p-105f, 0.0f, 0x1.37b448p-84f, 0.0f, 0x1.52d6dcp-91f, 0.0f,
     0x1.4de3f2p-41f, 0.0f, 0.0f, 0x1.b5202ep-43f, 0.0f, 0x1.bfead2p-120f, 0.0f, 0.0f,
     0x1.36001ap-76f, 0.0f, 0x1.66f06p-22f, 0.0f, 0.0f, 0x1.6fed3p-1f, 0.0f, 0.0f,
     0x1.609864p-93f, 0x1.831cd4p-52f, 0.0f, 0.0f, 0x1.79653ap-109f, 0x1.6a94f4p-49f,
     0.0f, 0x1.5f99bap-96f, 0.0f, 0.0f, 0x1.98aad2p-22f, 0.0f, 0x1.292d16p-2f,
     0x1.eb1f6ap-118f, 0.0f, 0x1.81414ap-124f, 0x1.d58d1ep-95f, 0x1.b56644p-24f,
     0x1.905ec8p-23f, 0x1.aa0c92p-116f, 0.0f, 0.0f, 0x1.851d46p-20f, 0.0f,
     0x1.619dep-120f, 0x1.652074p-76f, 0.0f, 0x1.ed3042p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fda576p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e29188p-4f,
     0x1.e56ecp-111f, 0x1.cd1af8p-74f, 0x1.4f3b8ep-45f, 0.0f, 0x1.684f88p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082fa6p-15f, 0x1.30262cp-72f, 0x1.8f235ap-86f,
     0x1.ab0604p-46f, 0.0f, 0x1.64a618p-73f, 0x1.86eb4ap-102f, 0.0f, 0x1.7f8572p-6f,
     0x1.8192dep-55f, 0.0f, 0.0f, 0x1.17f052p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.de4ae8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7413a6p-110f,
     0x1.3a24e8p-24f, 0x1.702fd4p-93f, 0.0f, 0x1.ed0d52p-11f, 0x1.dca186p-110f,
     0x1.a909fap-77f, 0x1.0d2948p-116f, 0.0f, 0x1.fb282ap-17f, 0.0f, 0.0f,
     0x1.30cfa8p-4f, 0x1.0b02dp-23f, 0x1.c56372p-12f, 0.0f, 0.0f, 0x1.32d6bcp-105f,
     0.0f, 0.0f, 0x1.553f0ap-27f, 0.0f, 0.0f, 0.0f, 0x1.ea5718p-63f, 0.0f, 0.0f,
     0x1.f5799ap-87f, 0.0f, 0.0f, 0x1.11711cp-48f, 0x1.9636b2p-46f, 0x1.fae08cp-31f,
     0x1.667de4p-60f, 0x1.d32456p-34f, 0x1.3677e6p-95f, 0x1.b0376ep-32f, 0.0f, 0.0f,
     0x1.9166f4p-53f, 0x1.4b26d4p-6f, 0x1.35072ep-110f, 0.0f, 0.0f, 0x1.a74704p-109f,
     0x1.0a1a36p-112f, 0.0f, 0.0f, 0.0f, 0x1.6eeed2p-109f, 0.0f, 0.0f,
     0x1.be8488p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78c5fep-24f,
     0x1.2d1348p-2f, 0x1.12d2d2p-28f, 0x1.8ca81ep-37f, 0x1.a5ce02p-126f,
     0x1.6a3e1p-103f, 0x1.0ce64p-40f, 0x1.7fd9e4p-59f, 0.0f, 0.0f, 0x1.3f75f6p-45f,
     0x1.92915ap-120f, 0x1.8ec8fap-102f, 0.0f, 0x1.d545e8p-32f, 0x1.09f85cp-93f, 0.0f,
     0x1.fdfd6ep-82f, 0x1.09c5f8p-109f, 0.0f, 0x1.babec8p-123f, 0x1.bb40eep-38f,
     0x1.5a6f24p-45f, 0x1.66c926p-89f, 0x1.6b2826p-8f, 0x1.81316cp-87f, 0.0f,
     0x1.cac44p-4f, 0x1.1faf92p-80f, 0.0f, 0x1.9c05ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.1d13e2p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a44eep-51f, 0x1.0c0d1ep-49f,
     0x1.e2b7fep-81f, 0x1.c0701p-101f, 0.0f, 0x1.bb06e8p-87f, 0.0f, 0x1.40d0a6p-63f,
     0x1.3c6ae4p-73f, 0.0f, 0x1.c7fbf2p-64f, 0x1.6372e6p-13f, 0.0f, 0.0f,
     0x1.03e6b8p-3f, 0x1.3cfc8ap-8f, 0.0f, 0.0f, 0.0f, 0x1.222a3ep-70f,
     0x1.084668p-8f, 0.0f, 0.0f, 0.0f, 0x1.d2afe8p-104f, 0.0f, 0x1.493636p-70f,
     0x1.61ee06p-9f, 0.0f, 0x1.8c5874p-13f, 0x1.ea422p-97f, 0x1.9ab0aap-58f,
     0x1.0f19d2p-73f, 0.0f, 0x1.f920f2p-107f, 0.0f, 0x1.4c8bcp-105f, 0.0f,
     0x1.4c13d8p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65bc5cp-9f, 0x1.5d01ccp-110f,
     0x1.830694p-33f, 0.0f, 0.0f, 0.0f, 0x1.1ab21p-72f, 0.0f, 0.0f, 0x1.89d41p-115f,
     0x1.9a2472p-4f, 0x1.77fdb6p-41f, 0.0f, 0x1.940bc8p-31f, 0x1.f5aee4p-16f,
     0x1.a43d4cp-45f, 0x1.9ecf7ep-80f, 0.0f, 0x1.257c5cp-52f, 0.0f, 0x1.e19816p-3f,
     0x1.05f74ep-109f, 0x1.5f4eeep-59f, 0.0f, 0.0f, 0x1.6e4608p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.92f498p-33f, 0x1.0d05d4p-28f, 0x1.d16786p-98f, 0.0f,
     0x1.3992bap-35f, 0x1.85e566p-94f, 0.0f, 0.0f, 0.0f, 0x1.aced02p-82f, 0.0f, 0.0f,
     0x1.31847ap-92f, 0x1.4ce33cp-32f, 0.0f, 0.0f, 0.0f, 0x1.fca09cp-64f, 0.0f,
     0x1.f075e2p-29f, 0.0f, 0x1.da488ep-68f, 0.0f, 0x1.a50f6ap-3f, 0x1.54af06p-64f,
     0.0f, 0.0f, 0.0f, 0x1.3f5386p-114f, 0x1.2091a4p-115f, 0x1.e69c5ep-125f, 0.0f,
     0x1.4350e2p-25f, 0x1.96f0fcp-77f, 0x1.6794f2p-113f, 0x1.fdc62cp-20f,
     0x1.cd6bccp-40f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4be1cp-11f, 0.0f,
     0x1.97f6fep-102f, 0.0f, 0x1.66cb98p-115f, 0.0f, 0.0f, 0x1.39c1a6p-47f, 0.0f,
     0.0f, 0.0f, 0x1.98899p-83f, 0.0f, 0x1.2f00f6p-14f, 0x1.120162p-79f,
     0x1.7391d6p-38f, 0x1.9d057ep-46f, 0x1.45ff9cp-125f, 0x1.12e63ep-108f,
     0x1.ab3e78p-71f, 0x1.7f27fap-86f, 0.0f, 0x1.cab76cp-76f, 0.0f, 0.0f,
     0x1.eb9c1ep-123f, 0.0f, 0x1.3e0316p-16f, 0.0f, 0x1.7ba66ep-120f, 0.0f, 0.0f,
     0x1.53b724p-85f, 0x1.65cabep-76f, 0x1.38ac56p-91f, 0x1.7dccfcp-124f,
     0x1.22e1d6p-17f, 0x1.1ea2c8p-69f, 0.0f, 0.0f, 0x1.413afp-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34157ap-105f, 0.0f, 0.0f, 0x1.8535cap-86f, 0.0f,
     0.0f, 0.0f, 0x1.71a9f8p-28f, 0.0f, 0.0f, 0x1.c73954p-25f, 0x1.b20afep-27f, 0.0f,
     0x1.be424ap-81f, 0x1.0e6528p-119f, 0.0f, 0x1.6040e2p-52f, 0.0f, 0x1.2bde86p-98f,
     0x1.470de4p-49f, 0x1.6a8bd4p-106f, 0.0f, 0x1.69172ap-31f, 0.0f, 0.0f,
     0x1.c897dap-78f, 0x1.c111d2p-31f, 0x1.c5d44cp-89f, 0x1.f2a474p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e681c4p-78f, 0.0f, 0x1.7c7f2ap-38f, 0x1.c19708p-40f, 0.0f,
     0x1.f67cbp-96f, 0.0f, 0x1.a5ec14p-32f, 0x1.79320ap-59f, 0.0f, 0.0f,
     0x1.a26a74p-102f, 0.0f, 0.0f, 0x1.7653d6p-56f, 0.0f, 0x1.0d25cp-54f, 0.0f, 0.0f,
     0.0f, 0x1.8f3e94p-93f, 0.0f, 0x1.22dbfap-35f, 0x1.c3366ap-121f, 0x1.b0832cp-65f,
     0x1.404aaap-18f, 0x1.e6f156p-49f, 0.0f, 0.0f, 0.0f, 0x1.6534bep-78f,
     0x1.e9d494p-71f, 0.0f, 0x1.cb320ep-108f, 0.0f, 0.0f, 0.0f, 0x1.7d854cp-25f, 0.0f,
     0x1.2a6c74p-118f, 0.0f, 0.0f, 0.0f, 0x1.03f7c6p-34f, 0.0f, 0x1.95e146p-7f, 0.0f,
     0x1.376f86p-96f, 0x1.5d9cfep-116f, 0x1.a41298p-96f, 0.0f, 0.0f, 0x1.4a0d3ap-23f,
     0.0f, 0x1.f0c95ap-11f, 0.0f, 0x1.57c808p-72f, 0x1.48a46p-105f, 0x1.9e231ap-12f,
     0.0f, 0.0f, 0x1.f17a22p-99f, 0x1.9c7a4ep-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.603904p-83f, 0x1.6fa962p-92f, 0.0f, 0x1.42b6acp-69f, 0x1.3ad12cp-68f,
     0x1.d8db56p-114f, 0x1.d47b38p-48f, 0x1.e271e6p-12f, 0x1.41c0f4p-18f,
     0x1.d63da2p-46f, 0x1.8e2f22p-126f, 0.0f, 0.0f, 0x1.d429fp-101f, 0x1.3c2dcep-81f,
     0x1.55fffp-64f, 0.0f, 0.0f, 0.0f, 0x1.3d741ap-120f, 0.0f, 0.0f, 0.0f,
     0x1.c2878cp-25f, 0.0f, 0.0f, 0.0f, 0x1.c53bdcp-107f, 0.0f, 0x1.a4c624p-49f,
     0x1.2a8708p-36f, 0.0f, 0x1.8f65ep-101f, 0x1.71fe78p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2b3e6p-40f, 0x1.07ecaap-9f, 0.0f, 0.0f, 0x1.ba734ep-84f, 0.0f,
     0x1.572fdep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9345fep-67f, 0x1.531422p-103f, 0.0f, 0x1.b1bf08p-49f, 0x1.c739aap-65f,
     0x1.401968p-55f, 0x1.1f396ap-102f, 0.0f, 0x1.f469eap-64f, 0x1.12762p-7f,
     0x1.82df62p-26f, 0.0f, 0.0f, 0.0f, 0x1.aeba5ap-73f, 0.0f, 0x1.42b838p-83f,
     0x1.a95ceap-92f, 0x1.71957cp-70f, 0.0f, 0x1.44035ap-79f, 0.0f, 0x1.9e7eb2p-77f,
     0.0f, 0.0f, 0.0f, 0x1.811958p-114f, 0x1.df77b2p-10f, 0x1.482dbep-126f, 0.0f,
     0x1.08d0f8p-61f, 0x1.48ada2p-55f, 0x1.ac6926p-101f, 0.0f, 0.0f, 0x1.524522p-108f,
     0.0f, 0.0f, 0.0f, 0x1.09c4ep-91f, 0x1.189a1ap-8f, 0x1.874004p-97f,
     0x1.68793ap-103f, 0x1.57328ap-116f, 0x1.bc49c2p-53f, 0.0f, 0x1.c5a81p-44f,
     0x1.27d85ep-8f, 0.0f, 0x1.ff98cep-42f, 0.0f, 0x1.16f24p-126f, 0x1.a9e04ep-43f,
     0x1.c3c32ap-80f, 0.0f, 0x1.f8618ep-36f, 0.0f, 0x1.4e9b1ap-92f, 0.0f,
     0x1.d3f13cp-56f, 0x1.3d6aa8p-23f, 0x1.a464aep-3f, 0x1.d86e14p-9f, 0x1.379bfp-80f,
     0.0f, 0x1.7c0434p-93f, 0x1.ebc324p-51f, 0x1.4d4d52p-2f, 0x1.6fdf28p-116f, 0.0f,
     0x1.3680cp-65f, 0x1.907d06p-9f, 0.0f, 0.0f, 0x1.c7f23p-91f, 0x1.cb6ap-99f, 0.0f,
     0.0f, 0x1.c271b2p-72f, 0.0f, 0x1.935f08p-39f, 0x1.a86dc4p-58f, 0x1.f34bd6p-64f,
     0.0f, 0x1.62c586p-21f, 0.0f, 0.0f, 0x1.d6a512p-37f, 0x1.266e5ap-19f,
     0x1.3dc86ep-47f, 0.0f, 0x1.84bf34p-82f, 0x1.a26a26p-29f, 0.0f, 0.0f,
     0x1.cb5b6cp-14f, 0x1.888a08p-55f, 0.0f, 0x1.82348ep-43f, 0x1.c51462p-106f, 0.0f,
     0.0f, 0.0f, 0x1.2ab3c4p-66f, 0.0f, 0x1.e07334p-85f, 0.0f, 0x1.5f8f36p-72f,
     0x1.14d16cp-63f, 0x1.a18ea8p-23f, 0x1.d40974p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.26b51p-116f, 0x1.97cb7p-109f, 0.0f, 0x1.53495p-33f,
     0x1.ac31ecp-12f, 0.0f, 0x1.4ec422p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82a1bep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af55cep-92f, 0.0f,
     0x1.43fd8cp-97f, 0.0f, 0.0f, 0x1.e3956p-106f, 0.0f, 0.0f, 0x1.bf97f4p-117f,
     0x1.7c5b02p-83f, 0x1.bea17ep-1f, 0.0f, 0x1.6bef4p-91f, 0x1.c6ae5p-70f, 0.0f,
     0.0f, 0x1.7e527cp-120f, 0x1.7de99p-113f, 0x1.36b998p-60f, 0x1.12d58ep-65f,
     0x1.aeeb56p-103f, 0.0f, 0.0f, 0x1.9a87e2p-97f, 0x1.6b1d0ep-121f, 0x1.f495fep-49f,
     0.0f, 0x1.555816p-66f, 0x1.9096a8p-114f, 0.0f, 0x1.426f7p-3f, 0.0f,
     0x1.cf805ap-27f, 0x1.2dce68p-80f, 0x1.96b396p-84f, 0.0f, 0x1.f879ecp-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96712cp-94f, 0x1.42096ap-47f, 0x1.df31a8p-26f,
     0.0f, 0x1.af1b0ap-81f, 0.0f, 0.0f, 0.0f, 0x1.293e72p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91419ep-100f, 0x1.cf3ce4p-108f, 0.0f, 0.0f, 0x1.6d1802p-22f, 0.0f,
     0x1.4f095ep-69f, 0x1.a934cp-98f, 0x1.02b1d6p-15f, 0.0f, 0x1.fd4ep-22f,
     0x1.90500ap-124f, 0.0f, 0x1.bd415ep-32f, 0.0f, 0x1.05959p-22f, 0.0f, 0.0f,
     0x1.61c4b2p-89f, 0.0f, 0x1.e2511ap-68f, 0x1.2b32b4p-11f, 0x1.29a4e8p-41f,
     0x1.dd7f24p-77f, 0.0f, 0x1.fe7ae6p-28f, 0x1.c5fe82p-42f, 0.0f, 0x1.577ec6p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd7844p-91f, 0x1.4a03cep-39f, 0.0f, 0.0f,
     0x1.0c6caep-14f, 0.0f, 0x1.94c9fep-116f, 0x1.59ecc4p-21f, 0x1.8d8efep-89f,
     0x1.033efp-25f, 0x1.79f388p-8f, 0.0f, 0x1.431eb2p-14f, 0.0f, 0x1.0e1da8p-103f,
     0x1.f86f5ep-114f, 0.0f, 0x1.61731ap-6f, 0.0f, 0x1.1ab33ap-72f, 0x1.9d391ep-53f,
     0x1.edb6acp-100f, 0.0f, 0x1.5ad51ap-19f, 0x1.262beap-64f, 0x1.4bddfap-78f, 0.0f,
     0.0f, 0.0f, 0x1.b94682p-71f, 0x1.52b7aep-36f, 0.0f, 0x1.1fed4cp-112f,
     0x1.70e22ap-58f, 0.0f, 0x1.b18e7cp-48f, 0.0f, 0.0f, 0.0f, 0x1.a1b768p-41f,
     0x1.9c5642p-94f, 0x1.102926p-104f, 0.0f, 0.0f, 0x1.f610b2p-17f, 0x1.63ec7ap-86f,
     0.0f, 0.0f, 0x1.2be198p-95f, 0.0f, 0x1.6a16dap-112f, 0.0f, 0x1.f36366p-125f,
     0x1.7a4c34p-122f, 0.0f, 0x1.e2578ep-49f, 0x1.0166b2p-46f, 0x1.51c778p-5f, 0.0f,
     0.0f, 0x1.82ccbap-71f, 0.0f, 0x1.3b518cp-90f, 0.0f, 0x1.72d54p-86f, 0.0f, 0.0f,
     0x1.c09e3p-86f, 0x1.d65abep-66f, 0x1.447208p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2aa164p-2f, 0x1.bf7a86p-123f, 0.0f, 0x1.fdd4ap-116f, 0.0f, 0x1.aa637p-77f,
     0.0f, 0.0f, 0x1.043b22p-46f, 0.0f, 0.0f, 0x1.550578p-64f, 0.0f, 0.0f,
     0x1.3425b2p-3f, 0x1.a91b84p-70f, 0.0f, 0x1.a646aap-104f, 0x1.7758f2p-123f, 0.0f,
     0x1.38d9c4p-69f, 0.0f, 0.0f, 0x1.d1e32cp-56f, 0.0f, 0x1.12dae2p-34f,
     0x1.305aap-124f, 0.0f, 0x1.76e986p-125f, 0x1.49f936p-23f, 0.0f, 0x1.2496bp-59f,
     0x1.b22ebap-108f, 0x1.ce4dacp-15f, 0x1.c4eb7cp-18f, 0.0f, 0x1.f997b2p-25f, 0.0f,
     0x1.f9d8f8p-118f, 0x1.4efb3ep-104f, 0.0f, 0x1.d186eap-105f, 0x1.96212ap-29f,
     0x1.291dfp-95f, 0.0f, 0x1.377df8p-89f, 0.0f, 0.0f, 0.0f, 0x1.5c1854p-67f,
     0x1.37a7aep-10f, 0.0f, 0.0f, 0x1.ab7b36p-25f, 0x1.35724cp-13f, 0x1.32d496p-104f,
     0.0f, 0x1.8cc9aap-46f, 0.0f, 0x1.d78926p-82f, 0x1.1e5114p-111f, 0x1.0b1af2p-39f
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
            tmp1 = Sleef_lgammaf4_u10avx2128(tmp0);
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
    printf("Sleef_lgammaf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_lgammaf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
