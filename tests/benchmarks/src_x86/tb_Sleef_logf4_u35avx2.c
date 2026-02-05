/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf4_u35avx2128.c --function Sleef_logf4_u35avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0f, 0.0f, 0x1.20eadcp-99f, 0.0f, 0x1.cb9a5cp-65f, 0.0f, 0.0f, 0x1.bbe67p-106f,
     0.0f, 0.0f, 0x1.3d3e3ep-77f, 0.0f, 0x1.017968p-37f, 0x1.25e746p-94f, 0.0f,
     0x1.8f1eb4p-33f, 0x1.d4007cp-21f, 0.0f, 0.0f, 0x1.4a8ed8p-37f, 0x1.4cbe9ep-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.278e24p-31f, 0x1.71ead6p-58f, 0x1.8c9b4ep-7f,
     0x1.009104p-118f, 0.0f, 0x1.1de3dp-7f, 0x1.0ed7f8p-105f, 0.0f, 0x1.4d9b6p-98f,
     0x1.e8638cp-26f, 0x1.8b002cp-9f, 0.0f, 0x1.5c031ap-72f, 0.0f, 0x1.f27fbcp-43f,
     0x1.0e207p-49f, 0x1.a347dep-107f, 0x1.750a8ap-92f, 0x1.6b4586p-43f, 0.0f, 0.0f,
     0x1.c16b72p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96be22p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a3118p-82f, 0.0f, 0x1.bf1cbap-24f, 0.0f, 0.0f,
     0x1.999366p-1f, 0x1.d59254p-73f, 0x1.568ed4p-4f, 0.0f, 0.0f, 0.0f,
     0x1.72a828p-113f, 0x1.7f2a12p-106f, 0.0f, 0.0f, 0x1.6f5b84p-12f,
     0x1.27ef84p-101f, 0x1.7311bep-54f, 0x1.799e58p-104f, 0.0f, 0.0f, 0.0f,
     0x1.8b7c36p-87f, 0x1.75f4acp-29f, 0x1.072352p-109f, 0x1.68fa76p-59f, 0.0f,
     0x1.bec2f4p-110f, 0x1.9ffd08p-12f, 0x1.49e0fap-96f, 0.0f, 0.0f, 0x1.2648bp-101f,
     0.0f, 0x1.91850ep-116f, 0x1.d39p-32f, 0x1.127d96p-30f, 0.0f, 0.0f, 0.0f,
     0x1.045ee6p-71f, 0x1.15365ap-14f, 0x1.507902p-4f, 0x1.df110ap-39f,
     0x1.481084p-82f, 0x1.958388p-90f, 0x1.402ebcp-93f, 0.0f, 0.0f, 0.0f,
     0x1.93ca82p-122f, 0x1.9f26e4p-97f, 0x1.e9c15p-32f, 0.0f, 0x1.d84fbep-112f,
     0x1.1bf596p-10f, 0x1.9bc52cp-60f, 0.0f, 0x1.e9ef08p-32f, 0.0f, 0x1.ed7dc6p-98f,
     0.0f, 0x1.8ea688p-23f, 0x1.883a22p-105f, 0x1.6ab3dap-123f, 0.0f, 0.0f, 0.0f,
     0x1.0232bep-113f, 0x1.d79aeep-34f, 0.0f, 0.0f, 0x1.9e8aa6p-106f, 0.0f,
     0x1.2ce766p-110f, 0.0f, 0x1.ce778cp-63f, 0x1.aa1a8ep-24f, 0.0f, 0x1.f6e818p-13f,
     0.0f, 0.0f, 0x1.506026p-60f, 0x1.485178p-89f, 0.0f, 0x1.dbd38cp-4f, 0.0f,
     0x1.1567d8p-88f, 0.0f, 0.0f, 0.0f, 0x1.ca19fap-100f, 0.0f, 0x1.8a634cp-42f,
     0x1.e683bcp-18f, 0.0f, 0x1.c61b7cp-42f, 0x1.773588p-31f, 0.0f, 0.0f,
     0x1.37c062p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdc36cp-7f, 0x1.02e92ep-1f,
     0x1.22f9d8p-23f, 0.0f, 0x1.4df76ep-47f, 0.0f, 0.0f, 0.0f, 0x1.826e3p-105f,
     0x1.c83bccp-37f, 0.0f, 0x1.2a2702p-94f, 0.0f, 0x1.813beap-37f, 0x1.b1fdfap-32f,
     0x1.17a742p-51f, 0x1.ebf5e4p-29f, 0x1.bcee3ep-113f, 0.0f, 0x1.f6ec66p-4f,
     0x1.aa8ccap-40f, 0.0f, 0x1.e032d8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84b51ep-76f,
     0x1.54ba38p-21f, 0.0f, 0x1.61fedp-3f, 0.0f, 0x1.ba07bap-114f, 0.0f,
     0x1.d9ce48p-108f, 0x1.2c3cf2p-37f, 0x1.b96ecap-28f, 0x1.6d481ep-81f, 0.0f, 0.0f,
     0x1.dfb3dep-27f, 0x1.849e9p-82f, 0x1.200c94p-65f, 0x1.d3aa28p-53f,
     0x1.f7e29ap-32f, 0x1.c015f2p-8f, 0.0f, 0x1.d199cep-44f, 0x1.718922p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f41666p-73f, 0x1.8d2836p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d2508p-23f, 0x1.aa97bep-85f, 0x1.6a1fccp-117f, 0x1.af351ep-7f, 0.0f,
     0x1.89e5bp-67f, 0x1.659526p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.498f36p-78f, 0x1.3c7764p-102f, 0.0f, 0.0f, 0.0f, 0x1.fdfc52p-18f,
     0x1.db4494p-48f, 0x1.771c4cp-102f, 0x1.eedb12p-84f, 0x1.671eeap-8f, 0.0f,
     0x1.371412p-4f, 0.0f, 0.0f, 0x1.2c2cb2p-17f, 0x1.193fd4p-95f, 0x1.dfc9c4p-36f,
     0.0f, 0x1.924e6ap-19f, 0.0f, 0.0f, 0.0f, 0x1.d32a96p-51f, 0.0f, 0x1.fd8a5p-36f,
     0x1.1b782ep-94f, 0x1.7e35c6p-38f, 0x1.f8e1a4p-95f, 0.0f, 0.0f, 0.0f,
     0x1.7b054ap-25f, 0.0f, 0x1.3cb068p-35f, 0.0f, 0x1.6efcfap-59f, 0.0f, 0.0f, 0.0f,
     0x1.0e180ap-21f, 0x1.e464fap-119f, 0.0f, 0x1.9b6256p-43f, 0.0f, 0x1.9fd70ap-60f,
     0.0f, 0x1.95fd46p-45f, 0x1.38663ep-125f, 0x1.230e4p-70f, 0.0f, 0x1.f61b36p-60f,
     0x1.12629ep-96f, 0x1.3dea0cp-14f, 0.0f, 0x1.849424p-120f, 0.0f, 0.0f,
     0x1.dede7cp-103f, 0x1.56537ep-64f, 0x1.f47e6cp-124f, 0x1.313e7cp-7f,
     0x1.0032a8p-26f, 0x1.05f63p-82f, 0x1.b9ae98p-85f, 0x1.76efb4p-33f, 0.0f,
     0x1.147366p-84f, 0.0f, 0.0f, 0x1.2e1c32p-5f, 0x1.e13c44p-107f, 0.0f,
     0x1.f27caap-71f, 0.0f, 0.0f, 0.0f, 0x1.d5dd78p-58f, 0.0f, 0x1.fffcfcp-110f,
     0x1.22b96cp-115f, 0.0f, 0x1.d8773p-25f, 0.0f, 0x1.06f5ep-81f, 0.0f, 0.0f,
     0x1.44bf0cp-44f, 0x1.58c26cp-61f, 0x1.dd65ccp-51f, 0.0f, 0x1.1aa45ap-117f, 0.0f,
     0.0f, 0x1.78734ep-94f, 0.0f, 0.0f, 0x1.dd981ap-14f, 0x1.1f74ep-99f, 0.0f,
     0x1.04396ep-65f, 0.0f, 0x1.c7e7b4p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e88b2p-26f,
     0.0f, 0.0f, 0x1.55f0a4p-81f, 0x1.52da3ep-13f, 0x1.e4eb56p-2f, 0.0f, 0.0f,
     0x1.2bb87ap-96f, 0.0f, 0x1.058a0cp-101f, 0x1.7f0246p-124f, 0x1.02b904p-40f, 0.0f,
     0.0f, 0x1.4d23c2p-126f, 0.0f, 0x1.1ebac6p-51f, 0.0f, 0.0f, 0.0f,
     0x1.5c23fep-111f, 0x1.bdb30ep-42f, 0x1.e199dap-44f, 0.0f, 0x1.970c6ep-126f, 0.0f,
     0x1.004a72p-93f, 0x1.69595cp-70f, 0x1.47651p-104f, 0x1.49fcccp-104f,
     0x1.dde19ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d1cf4p-63f,
     0x1.b4ab7ep-84f, 0.0f, 0.0f, 0.0f, 0x1.a262cap-126f, 0x1.063f6ap-3f,
     0x1.bbf44ep-53f, 0x1.9eca42p-119f, 0.0f, 0x1.bbaecap-68f, 0x1.d4e15cp-102f,
     0x1.c5e19ep-15f, 0.0f, 0x1.6e19dep-47f, 0.0f, 0x1.f1ba92p-91f, 0x1.68f59p-3f,
     0x1.4c9ecp-3f, 0x1.5e7cb4p-115f, 0.0f, 0x1.6982eap-105f, 0x1.1c27e4p-96f,
     0x1.5b335cp-56f, 0.0f, 0x1.0c3ad8p-33f, 0.0f, 0x1.3895d8p-115f, 0x1.828b52p-104f,
     0.0f, 0.0f, 0.0f, 0x1.b2cb6p-98f, 0x1.70071ep-113f, 0x1.7340b4p-97f,
     0x1.3f2c5ap-109f, 0x1p0f, 0.0f, 0.0f, 0x1.fd5decp-85f, 0x1.28072ep-96f,
     0x1.6db23p-77f, 0x1.edaa94p-77f, 0.0f, 0x1.0fd90cp-50f, 0.0f, 0x1.4e391ep-8f,
     0x1.2b19b2p-125f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4135cp-30f, 0.0f,
     0x1.3cceap-46f, 0.0f, 0.0f, 0x1.bf1252p-9f, 0x1.4c7b2ap-100f, 0x1.07722p-103f,
     0x1.2dad36p-27f, 0x1.be3de4p-50f, 0.0f, 0.0f, 0x1.d8eb0cp-114f, 0.0f, 0.0f,
     0x1.e49c4cp-27f, 0.0f, 0x1.b0e76cp-44f, 0.0f, 0x1.c4aap-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd362ap-29f, 0x1.36bep-64f, 0x1.a9485ap-8f, 0x1.c9f126p-17f,
     0x1.82eee4p-42f, 0.0f, 0.0f, 0.0f, 0x1.ea51cap-1f, 0x1.a7b3a6p-2f, 0.0f,
     0x1.db5d44p-125f, 0x1.4d8faap-47f, 0x1.95ae84p-107f, 0.0f, 0x1.f7436ep-78f, 0.0f,
     0.0f, 0x1.0ea86ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e8576p-2f, 0.0f, 0.0f,
     0x1.839836p-22f, 0x1.48bb38p-89f, 0x1.a5eeaep-108f, 0x1.d5f3ap-22f,
     0x1.f6ac5ep-52f, 0.0f, 0x1.9974c4p-37f, 0.0f, 0.0f, 0.0f, 0x1.0affb6p-85f,
     0x1.fc7e8cp-27f, 0.0f, 0.0f, 0.0f, 0x1.70f92cp-15f, 0x1.4d233p-85f,
     0x1.b74244p-44f, 0.0f, 0.0f, 0.0f, 0x1.7866fap-49f, 0.0f, 0x1.45b83cp-49f,
     0x1.f4969cp-72f, 0x1.399e2ep-29f, 0x1.8eb8e4p-59f, 0.0f, 0x1.798644p-81f, 0.0f,
     0x1.1180ccp-39f, 0.0f, 0.0f, 0x1.0e196ap-11f, 0.0f, 0.0f, 0x1.fa6bfp-104f, 0.0f,
     0.0f, 0x1.414eaep-8f, 0x1.400448p-42f, 0x1.faba32p-62f, 0.0f, 0x1.7a9d34p-100f,
     0x1.e4c5a4p-32f, 0x1.d78cf8p-51f, 0.0f, 0x1.b6496ep-56f, 0.0f, 0x1.b2e804p-87f,
     0x1.618e7p-9f, 0.0f, 0x1.0a43f4p-76f, 0.0f, 0x1.b4cf28p-55f, 0.0f,
     0x1.b392d4p-73f, 0x1.5ced3ep-7f, 0.0f, 0.0f, 0x1.1580dcp-5f, 0x1.a9edb6p-28f,
     0.0f, 0.0f, 0.0f, 0x1.338036p-125f, 0x1.a21fbp-106f, 0x1.4628p-49f, 0.0f,
     0x1.673488p-67f, 0.0f, 0x1.5a6e28p-61f, 0.0f, 0x1.d0a4b6p-21f, 0.0f, 0.0f,
     0x1.67158cp-79f, 0x1.50cf3ap-81f, 0x1.1b19aep-42f, 0x1.8bde9cp-97f,
     0x1.1ae146p-16f, 0.0f, 0.0f, 0.0f, 0x1.06ad8ep-47f, 0.0f, 0x1.4c3e18p-75f,
     0x1.1b0f18p-8f, 0.0f, 0.0f, 0.0f, 0x1.5ccc24p-48f, 0x1.ca71cep-120f, 0.0f,
     0x1.708518p-15f, 0x1.e3e386p-80f, 0.0f, 0x1.2812b8p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98b2d8p-125f, 0.0f, 0.0f, 0x1.d760bp-23f, 0.0f, 0x1.7c57b4p-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a105p-105f, 0.0f, 0x1.d78d9ep-36f, 0.0f, 0.0f, 0.0f,
     0x1.30024p-76f, 0x1.0085d2p-48f, 0.0f, 0x1.ccc91cp-23f, 0.0f, 0x1.f81bd6p-40f,
     0x1.4f9fcp-85f, 0x1.6578ecp-28f, 0.0f, 0.0f, 0x1.e36022p-44f, 0x1.4c728ep-81f,
     0x1.28adf6p-122f, 0x1.cc92a8p-85f, 0.0f, 0.0f, 0x1.6c6ce8p-7f, 0x1.78dceap-9f,
     0x1.e360cep-54f, 0.0f, 0x1.e3e6bep-6f, 0x1.f8c34cp-74f, 0x1.67cb6p-84f, 0.0f,
     0.0f, 0x1.544596p-39f, 0.0f, 0x1.ab34d8p-64f, 0.0f, 0.0f, 0.0f, 0x1.bfe212p-84f,
     0.0f, 0x1.dd4f1cp-99f, 0x1.f55684p-48f, 0x1p0f, 0.0f, 0x1.c62246p-14f,
     0x1.3679fap-40f, 0x1.530336p-58f, 0.0f, 0x1.50eb22p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b490ep-78f, 0.0f, 0x1.469b2ap-122f, 0.0f, 0.0f, 0x1.391186p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.79abf6p-111f, 0.0f, 0.0f, 0x1.1e599ep-51f,
     0x1.6291fap-60f, 0x1.fad478p-124f, 0.0f, 0.0f, 0x1.cea70cp-101f, 0x1.0fb62ap-63f,
     0x1.e36916p-3f, 0x1.3e94fep-110f, 0x1.3b5adp-87f, 0.0f, 0x1.0e269ep-115f,
     0x1.944f16p-33f, 0x1.28570ap-107f, 0x1.0167e4p-19f, 0x1.722ebep-97f,
     0x1.fd1c78p-95f, 0.0f, 0x1.6e254ep-86f, 0.0f, 0x1.1629bap-70f, 0x1.725c1cp-111f,
     0x1.8fd49p-51f, 0x1.f3dcb2p-12f, 0.0f, 0.0f, 0x1.1bb3bp-67f, 0x1.1ae92cp-83f,
     0x1.d76bc4p-8f, 0.0f, 0x1.2ccfc4p-116f, 0x1.145b52p-9f, 0x1.da8746p-78f,
     0x1.e2b482p-14f, 0.0f, 0x1.a4fc28p-125f, 0x1.4d102ep-45f, 0.0f, 0x1.c520ccp-103f,
     0x1.f19fdep-63f, 0.0f, 0x1.fa0946p-34f, 0x1.119f8ep-21f, 0x1.6b3ea6p-53f,
     0x1.94115p-123f, 0.0f, 0x1.99b288p-84f, 0.0f, 0x1.3c7798p-100f, 0.0f, 0.0f,
     0x1.807fbcp-45f, 0x1.c0f3cap-111f, 0.0f, 0x1.69f378p-105f, 0.0f, 0.0f,
     0x1.4e94fep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fbf5p-14f, 0.0f, 0x1.fd526cp-26f,
     0x1.116d02p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc8a3cp-108f, 0x1.14b4a6p-71f,
     0.0f, 0x1.9d6ad2p-56f, 0x1.2b4ff4p-102f, 0.0f, 0x1.8eab42p-97f, 0x1.ec5a2ap-14f,
     0x1.88c0bep-71f, 0x1.8942cp-26f, 0.0f, 0x1.4974b8p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8c223ep-102f, 0x1.c99fcp-25f, 0.0f, 0x1.1e3a24p-107f, 0.0f, 0.0f,
     0x1.08fb94p-81f, 0.0f, 0x1.5983aep-84f, 0.0f, 0.0f, 0x1.70036cp-6f, 0.0f, 0.0f,
     0x1.5f2144p-34f, 0x1.6407acp-5f, 0.0f, 0x1.3a2b48p-62f, 0x1.b7b80ap-10f,
     0x1.f6eb4ep-5f, 0.0f, 0.0f, 0.0f, 0x1.8de3aap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.85edfep-84f, 0x1.c80fbap-64f, 0.0f, 0x1.c7bce4p-100f, 0x1.9a90ap-77f,
     0x1.0984f4p-68f, 0.0f, 0.0f, 0x1.fddca8p-87f, 0.0f, 0x1.60a8a4p-110f, 0.0f, 0.0f,
     0.0f, 0x1.1516bep-54f, 0.0f, 0x1.b39194p-72f, 0.0f, 0x1.624d98p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.716b4ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c29218p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24f01cp-14f, 0.0f, 0.0f, 0.0f, 0x1.664a8p-56f, 0.0f, 0.0f, 0x1.da8b88p-11f,
     0x1.974308p-39f, 0.0f, 0.0f, 0x1.c063cap-3f, 0x1.4b4afcp-124f, 0x1.a28be4p-100f,
     0.0f, 0.0f, 0.0f, 0x1.910792p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c60636p-75f, 0.0f,
     0x1.15b3fap-34f, 0x1.171138p-16f, 0.0f, 0x1.4dd87ep-84f, 0x1.8809a4p-114f,
     0x1.62293ap-13f, 0x1.866422p-124f, 0x1.4234cap-12f, 0.0f, 0.0f, 0.0f,
     0x1.a9aff2p-54f, 0x1.bcc2f6p-100f, 0.0f, 0.0f, 0x1.27d27cp-43f, 0x1.b996a8p-13f,
     0x1.d8f302p-121f, 0.0f, 0x1.e88f9p-116f, 0x1.a824bcp-53f, 0x1.29414ap-46f, 0.0f,
     0x1.76e0f6p-101f, 0.0f, 0.0f, 0.0f, 0x1.f803dap-102f, 0.0f, 0.0f,
     0x1.e5c838p-56f, 0x1.f55fd4p-52f, 0.0f, 0x1.45630ep-40f, 0.0f, 0x1.fdc06ap-71f,
     0x1.802cdp-47f, 0x1.64a0fap-93f, 0x1.637f82p-14f, 0.0f, 0x1.4b0596p-21f, 0.0f,
     0.0f, 0.0f, 0x1.699828p-27f, 0.0f, 0.0f, 0x1.61c438p-91f, 0x1.d1811ep-121f,
     0x1.3d8436p-111f, 0x1.d3b7bcp-76f, 0.0f, 0.0f, 0x1.bcf614p-120f, 0.0f,
     0x1.eb3f0cp-70f, 0x1.91ae06p-84f, 0x1.ba6b36p-16f, 0x1.c00e64p-93f, 0.0f,
     0x1.871dep-37f, 0x1.fc19f6p-46f, 0x1.b52de6p-48f, 0.0f, 0x1.2efb5ap-18f, 0.0f,
     0x1.675874p-70f, 0x1.847536p-57f, 0x1.d6d662p-92f, 0x1.d655cep-88f,
     0x1.0ab44ap-107f, 0x1.96026ap-73f, 0.0f, 0.0f, 0x1.ac7e8ep-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e3654ap-97f, 0.0f, 0.0f, 0.0f, 0x1.1403dcp-91f, 0.0f, 0.0f,
     0x1.62055p-114f, 0x1.9842c4p-15f, 0x1.6e09d8p-2f, 0x1.475d2cp-84f, 0.0f, 0.0f,
     0.0f, 0x1.d064b8p-15f, 0x1.8da8dep-6f, 0x1.29e356p-69f, 0x1.767cd8p-81f, 0.0f,
     0x1.f4200cp-86f, 0x1.e06778p-117f, 0x1.067feep-80f, 0.0f, 0x1.41a4dap-8f,
     0x1.a9735ap-47f, 0.0f, 0.0f, 0x1.2380e6p-16f, 0x1.ff0c76p-79f, 0x1.50644ap-105f,
     0.0f, 0x1.3572f2p-24f, 0x1.e53d7cp-50f, 0x1.c28dc2p-44f, 0x1.a50348p-5f, 0.0f,
     0x1.a155bep-122f, 0x1.6896ap-1f, 0x1.9f7206p-102f, 0.0f, 0x1.7dd4bap-100f,
     0x1.27539cp-92f, 0x1.0a7c5ap-19f, 0.0f, 0.0f, 0x1.13d06cp-18f, 0.0f,
     0x1.15ad88p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9895cp-15f, 0.0f, 0.0f,
     0x1.f1db16p-85f, 0x1.4d1d6ep-91f, 0x1.4726bap-103f, 0x1.5629d8p-82f,
     0x1.9b0ec4p-67f, 0x1.75a934p-48f, 0.0f, 0x1.45cd9ap-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86c1d2p-125f, 0x1.f90454p-50f, 0x1.1b0d96p-96f, 0x1.1aaafp-111f, 0.0f,
     0x1.db0336p-96f, 0x1.315d72p-110f
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
            tmp1 = Sleef_logf4_u35avx2128(tmp0);
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
    printf("Sleef_logf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_logf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
