/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastcosf4_u3500kvx.c --function \
 *     Sleef_finz_fastcosf4_u3500kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.d21614p-17f, 0.0f, 0x1.21b5a2p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dbde76p-38f, 0.0f, 0x1.0d550ep-52f, 0x1.eb1d18p-100f, 0.0f,
     0x1.2b7daap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e658p-120f,
     0x1.b1f582p-123f, 0.0f, 0x1.4304b2p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ddd422p-75f, 0.0f, 0.0f, 0.0f, 0x1.f91ecep-45f, 0x1.4a0c4ap-102f, 0.0f,
     0x1.4f602p-37f, 0.0f, 0x1.133becp-84f, 0x1.f7f2fp-57f, 0.0f, 0x1.e8fa22p-24f,
     0.0f, 0.0f, 0.0f, 0x1.af3e18p-83f, 0x1.90e3f4p-90f, 0.0f, 0.0f, 0.0f,
     0x1.f94038p-14f, 0x1.a37f5ep-115f, 0x1.2e8d46p-62f, 0.0f, 0.0f, 0x1.a4d3p-18f,
     0x1.a3b238p-2f, 0.0f, 0x1.427346p-7f, 0.0f, 0x1.19ab28p-66f, 0x1.f51976p-112f,
     0x1.7f59c4p-75f, 0.0f, 0x1.98b428p-87f, 0.0f, 0x1.4a9e84p-70f, 0x1.a86116p-66f,
     0x1.2a5deap-63f, 0.0f, 0.0f, 0x1.a1f594p-112f, 0.0f, 0.0f, 0x1.296b88p-41f,
     0x1.8a8426p-28f, 0x1.cb844p-80f, 0.0f, 0x1.73895p-83f, 0.0f, 0.0f,
     0x1.f1b32ap-54f, 0x1.9b739p-84f, 0.0f, 0.0f, 0x1.c7737ap-53f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.b6320ep-89f, 0.0f, 0x1.6b60bcp-96f, 0.0f, 0.0f,
     0x1.088f44p-104f, 0.0f, 0x1.a0c1eap-16f, 0.0f, 0.0f, 0x1.e1d2b6p-115f, 0.0f,
     0x1.7b397ap-89f, 0x1.f45f4ep-54f, 0x1.f5581ep-93f, 0.0f, 0.0f, 0x1.33064ep-93f,
     0.0f, 0.0f, 0x1.a85e92p-15f, 0.0f, 0x1.ea2d44p-40f, 0.0f, 0.0f, 0.0f,
     0x1.959d78p-126f, 0x1.78f1fep-123f, 0x1.11591cp-86f, 0x1.c4e914p-32f, 0.0f,
     0x1.36e6c8p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65cd14p-111f, 0x1.41563ap-19f,
     0x1.c11ffcp-40f, 0x1.45af98p-68f, 0.0f, 0x1.a93edp-20f, 0x1.20658ap-8f, 0.0f,
     0.0f, 0x1.4ace0cp-124f, 0.0f, 0x1.237de4p-23f, 0x1.473d96p-46f, 0x1.712f4p-99f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.172e3cp-46f, 0x1.9dee4ap-8f,
     0x1.222874p-115f, 0x1.80e04p-60f, 0x1.0dcap-29f, 0x1.55f346p-29f,
     0x1.b11aeap-93f, 0x1.8de2c4p-62f, 0.0f, 0x1.a784ap-4f, 0x1.1581e2p-91f,
     0x1.7fb70ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a6294p-110f,
     0x1.0b08aep-61f, 0.0f, 0.0f, 0x1.ca47dap-62f, 0.0f, 0.0f, 0x1.a84744p-15f,
     0x1.135ac6p-25f, 0.0f, 0x1.9fa8b8p-43f, 0x1.76e5f6p-69f, 0.0f, 0.0f,
     0x1.193654p-66f, 0x1.234efcp-86f, 0.0f, 0.0f, 0x1.8fbe64p-25f, 0.0f,
     0x1.892bb6p-75f, 0.0f, 0x1.3b38fep-89f, 0x1.5e0d76p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b6976p-42f, 0.0f, 0.0f, 0.0f, 0x1.abb55cp-90f, 0.0f, 0x1.8a697cp-24f,
     0x1.a44e8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60fd8ap-122f, 0.0f, 0x1.2ae0eep-31f,
     0x1.ed873cp-21f, 0.0f, 0x1.341c82p-64f, 0.0f, 0.0f, 0x1.deaa52p-108f,
     0x1.8b3afep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.408374p-98f, 0x1.a6e2ep-59f,
     0.0f, 0x1.a9a5fp-7f, 0.0f, 0x1.0c2be2p-21f, 0.0f, 0.0f, 0.0f, 0x1.ad8facp-19f,
     0x1.1cf51ap-100f, 0.0f, 0.0f, 0x1.084eeap-101f, 0x1.80affp-77f, 0x1.51c3c2p-108f,
     0.0f, 0x1.3a8bbp-1f, 0.0f, 0x1.416c2cp-118f, 0x1.f81fa8p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.22a454p-108f, 0.0f, 0x1.da60eep-81f, 0.0f, 0.0f, 0.0f,
     0x1.827c34p-59f, 0x1.83871ep-29f, 0.0f, 0x1.16792cp-53f, 0x1.256694p-103f, 0.0f,
     0.0f, 0x1.6f7e56p-7f, 0x1.6b3cbcp-27f, 0.0f, 0.0f, 0x1.b1a93ep-77f, 0.0f, 0.0f,
     0x1.9065a4p-37f, 0.0f, 0.0f, 0x1.fc2ebep-18f, 0x1.c4a864p-114f, 0x1.a8f302p-124f,
     0x1.a7bc86p-102f, 0x1.47e3dp-77f, 0x1.96b668p-80f, 0x1.5cfe6ap-33f, 0.0f, 0.0f,
     0x1.be7794p-71f, 0x1.e9114ep-97f, 0x1.24a2ecp-120f, 0x1.9a1a1cp-125f,
     0x1.a9033ep-66f, 0x1.cb3e38p-32f, 0.0f, 0.0f, 0x1.5b916ep-116f, 0x1.67d7a2p-113f,
     0.0f, 0x1.e12cbap-78f, 0.0f, 0.0f, 0x1.e25ecp-50f, 0x1.d4840cp-80f, 0.0f,
     0x1.e9dbbcp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90ddfp-114f, 0.0f, 0.0f,
     0x1.f17b12p-33f, 0.0f, 0x1.70923cp-102f, 0x1.476a6ap-120f, 0x1.170d0cp-40f, 0.0f,
     0x1.4d5fdep-120f, 0.0f, 0.0f, 0x1.38da1p-124f, 0.0f, 0.0f, 0x1.312944p-40f, 0.0f,
     0x1.de2c22p-56f, 0x1.d14a18p-14f, 0x1.de7a14p-29f, 0x1.20b9b8p-11f, 0.0f,
     0x1.1b8bdap-84f, 0.0f, 0x1.6eaf6p-105f, 0x1.c59ad2p-16f, 0x1.e51d56p-32f,
     0x1.d8baeap-27f, 0x1.93edeep-17f, 0x1.5f744cp-55f, 0x1.f0b834p-70f,
     0x1.4c0b5p-103f, 0x1.01aaf4p-94f, 0.0f, 0x1.76e208p-89f, 0x1.da9a42p-36f, 0.0f,
     0x1.11622cp-1f, 0.0f, 0.0f, 0x1.4b65c2p-82f, 0x1.c86e94p-94f, 0x1.d02058p-18f,
     0x1.c5f1aap-121f, 0.0f, 0x1.16131ap-4f, 0x1.4159c2p-59f, 0.0f, 0x1.07844p-38f,
     0x1.d266d6p-111f, 0x1.64d33ep-105f, 0x1.6ae3dap-5f, 0.0f, 0.0f, 0.0f,
     0x1.041038p-96f, 0x1.fb02cap-85f, 0.0f, 0x1.f7e776p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3c61ap-3f, 0.0f, 0x1.d43b22p-94f, 0x1.6db82ep-43f,
     0x1.b28d3p-43f, 0x1.3e658ap-126f, 0x1.f176f8p-103f, 0.0f, 0x1.3a6a0ap-90f, 0.0f,
     0x1.8af92p-54f, 0.0f, 0x1.001496p-119f, 0x1.fb7324p-34f, 0.0f, 0x1.2b1906p-51f,
     0x1.8daa2cp-38f, 0x1.87a1e6p-5f, 0.0f, 0x1.961dbap-62f, 0x1p0f, 0x1.29ef06p-19f,
     0x1.6d9768p-2f, 0x1.55ede2p-109f, 0x1.fa5d04p-61f, 0x1.47a772p-10f,
     0x1.3929e2p-89f, 0.0f, 0x1.b3b2p-111f, 0.0f, 0.0f, 0x1.bbaedep-16f,
     0x1.408a78p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9e55p-19f, 0x1.00e62p-78f,
     0x1.e7e22cp-5f, 0x1.9ec5d2p-31f, 0x1.e8c5f2p-38f, 0x1.89444p-67f, 0.0f,
     0x1.57b55ep-92f, 0x1.489eeap-38f, 0.0f, 0x1.1e7bc4p-35f, 0.0f, 0.0f, 0.0f,
     0x1.2b4fdcp-31f, 0.0f, 0x1.baf8b6p-59f, 0.0f, 0x1.de3a76p-51f, 0x1.361e1ap-79f,
     0x1.20ac66p-44f, 0x1.a89366p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3c626p-86f, 0x1.24dd84p-34f, 0.0f, 0.0f, 0x1.65c0acp-76f, 0x1.91fb9cp-126f,
     0.0f, 0.0f, 0x1.cb6bp-119f, 0x1.b6210ep-29f, 0.0f, 0.0f, 0x1.d0efd8p-24f,
     0x1.3ad83ap-104f, 0x1.16bde4p-46f, 0x1.984e8cp-120f, 0x1.1d3cbep-70f, 0.0f,
     0x1.1faddap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f58bb4p-76f, 0.0f, 0.0f,
     0x1.85ebe2p-60f, 0x1.81c9bep-18f, 0.0f, 0x1.d09af2p-7f, 0.0f, 0x1.7939dap-117f,
     0x1.b9aecep-4f, 0.0f, 0x1.5698e8p-8f, 0x1.0512b2p-56f, 0x1p0f, 0.0f,
     0x1.ad2c5ap-112f, 0.0f, 0x1.dca99cp-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f11fd4p-105f, 0.0f, 0.0f, 0x1.9c7016p-39f, 0.0f, 0x1.74d054p-32f,
     0x1.1ad7dp-84f, 0.0f, 0x1.75a38ep-33f, 0x1.aef232p-13f, 0x1.d30ce4p-121f, 0.0f,
     0x1.31aba8p-32f, 0.0f, 0.0f, 0.0f, 0x1.cc8544p-100f, 0x1.1a96ap-115f, 0.0f,
     0x1.b6fd58p-44f, 0x1.bd88ccp-117f, 0x1.00aa34p-99f, 0x1.dd986p-9f,
     0x1.bc01dep-49f, 0x1.9bfb9ep-1f, 0x1.6473eep-7f, 0.0f, 0x1.0cfa2ep-86f, 0.0f,
     0.0f, 0x1.6a9726p-46f, 0.0f, 0x1.0d07d2p-120f, 0x1.ee8dp-105f, 0.0f, 0.0f,
     0x1.d13ab2p-49f, 0x1.c1cfdep-43f, 0.0f, 0x1.c6b05cp-35f, 0.0f, 0.0f,
     0x1.14a23cp-119f, 0.0f, 0.0f, 0x1.1e9e04p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b847ap-3f, 0x1.acbb8ep-86f, 0.0f, 0x1.44715cp-50f, 0.0f, 0.0f,
     0x1.a92d06p-17f, 0.0f, 0x1.98cf06p-107f, 0.0f, 0.0f, 0.0f, 0x1.44d0b4p-72f,
     0x1.188ea8p-70f, 0x1.966d3p-6f, 0x1.a4986ep-70f, 0x1.6b7aecp-94f, 0.0f, 0.0f,
     0.0f, 0x1.eae51p-29f, 0x1.b3dd16p-94f, 0x1.39c1cp-62f, 0.0f, 0x1.b16eeap-26f,
     0x1.1bb214p-48f, 0x1.8d6216p-41f, 0.0f, 0.0f, 0x1.dd28cap-58f, 0.0f,
     0x1.f4f6bp-89f, 0x1.db03b2p-29f, 0x1p0f, 0x1.d1e238p-11f, 0x1.8cd06p-15f,
     0x1.4b2d6cp-67f, 0.0f, 0x1.8a6a48p-48f, 0x1.ae6a54p-115f, 0x1.6d3fa2p-82f,
     0x1.0c6d78p-23f, 0.0f, 0x1.e3aed4p-11f, 0x1.13ba9p-31f, 0x1.5e8c2p-11f,
     0x1.2e86c8p-29f, 0.0f, 0x1.b52adp-19f, 0x1.7a810ep-71f, 0x1.886a16p-112f,
     0x1.d5ea22p-106f, 0x1.e22394p-100f, 0.0f, 0x1.ed1f04p-1f, 0.0f, 0x1.52e79p-68f,
     0.0f, 0.0f, 0x1.806d1ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76dce2p-74f,
     0x1.1b6386p-40f, 0.0f, 0x1.ffd262p-12f, 0x1.0255f8p-79f, 0.0f, 0.0f,
     0x1.290184p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.720666p-123f, 0.0f,
     0x1.b90e52p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b1f62p-71f, 0.0f, 0.0f,
     0x1.8302bap-77f, 0.0f, 0x1.d7d68cp-92f, 0x1.01ed18p-109f, 0x1.a87b26p-81f,
     0x1.2d1712p-26f, 0x1.d7addep-49f, 0x1.5a1afep-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.23884p-76f, 0x1.1cb67ap-117f, 0x1.94f336p-96f, 0.0f, 0.0f, 0.0f,
     0x1.f17218p-12f, 0x1.89be18p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cf7ep-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.baa2d6p-82f, 0x1.5e735ap-102f, 0x1.c3dc7ap-53f,
     0x1.a54c66p-105f, 0x1.826836p-117f, 0x1.c952dep-70f, 0x1.0a4b48p-91f, 0.0f,
     0x1.3183f8p-4f, 0.0f, 0.0f, 0x1.32be8ap-71f, 0.0f, 0.0f, 0x1.bcf78ep-80f, 0.0f,
     0.0f, 0x1.ce72a4p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.180606p-96f, 0x1.97c74p-108f,
     0.0f, 0x1.bf8fd6p-27f, 0x1.52dbc4p-104f, 0x1.1d8264p-29f, 0.0f, 0.0f,
     0x1.6f2ed2p-113f, 0x1.e9d5bep-102f, 0.0f, 0x1.a8c7f4p-4f, 0x1.6c35bp-13f, 0.0f,
     0x1.b1f13p-24f, 0.0f, 0.0f, 0x1.0e4e2cp-61f, 0.0f, 0.0f, 0x1.fb025ap-98f, 0.0f,
     0.0f, 0x1.f6779p-42f, 0x1.dec8dep-114f, 0.0f, 0x1.35e6ap-76f, 0.0f, 0.0f,
     0x1.6e532ap-116f, 0x1.70db6ep-110f, 0x1.0d4458p-68f, 0x1.b245f6p-38f,
     0x1.e2fe62p-9f, 0.0f, 0.0f, 0x1.aeff32p-29f, 0x1.89436cp-108f, 0x1.7d1ap-74f,
     0.0f, 0.0f, 0x1.3dc496p-9f, 0x1.4285a8p-26f, 0.0f, 0x1.72271p-115f, 0.0f, 0.0f,
     0x1.0ab42ep-57f, 0x1.542928p-118f, 0x1.a9c394p-8f, 0.0f, 0x1.531ff2p-86f, 0.0f,
     0.0f, 0.0f, 0x1.7a7b62p-76f, 0.0f, 0x1.ffc3eep-19f, 0.0f, 0x1.883524p-63f,
     0x1.9d2ddcp-63f, 0.0f, 0.0f, 0.0f, 0x1.b261f2p-55f, 0.0f, 0x1.791006p-33f, 0.0f,
     0.0f, 0x1.6fb9p-105f, 0x1.9bfdb2p-58f, 0x1.46f172p-92f, 0x1.4ac22cp-3f,
     0x1.e71a64p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.059c88p-92f, 0x1.5b996p-73f,
     0x1.888202p-114f, 0x1.7b5eeap-99f, 0x1.3f20ccp-68f, 0x1.accbep-63f,
     0x1.6645aep-85f, 0.0f, 0.0f, 0x1.addd34p-48f, 0.0f, 0.0f, 0x1.33f39p-26f, 0.0f,
     0x1.129812p-71f, 0.0f, 0.0f, 0x1.776abap-58f, 0.0f, 0x1.d5a8c8p-9f,
     0x1.f33f2p-40f, 0.0f, 0.0f, 0x1.8382f8p-95f, 0x1.64d5ecp-87f, 0.0f, 0.0f, 0.0f,
     0x1.0622ecp-22f, 0x1.f7ca4ep-21f, 0.0f, 0x1.708cb6p-123f, 0x1.da5c18p-77f, 0.0f,
     0x1.8a7816p-3f, 0x1.37b41ap-59f, 0.0f, 0.0f, 0.0f, 0x1.a99dbep-66f, 0.0f, 0.0f,
     0.0f, 0x1.2c5f16p-60f, 0x1.eb54dcp-120f, 0x1.5d6c1cp-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dca6a6p-59f, 0x1.8e161p-47f,
     0x1.513e4p-27f, 0x1.229cb4p-13f, 0.0f, 0.0f, 0x1.89a932p-56f, 0x1.d435c4p-95f,
     0.0f, 0.0f, 0.0f, 0x1.658272p-29f, 0.0f, 0x1.3f4fcap-36f, 0x1.ef4c6ep-39f,
     0x1.f72f84p-32f, 0x1.816de6p-76f, 0x1.88351p-124f, 0.0f, 0x1.07e55ap-54f,
     0x1.308544p-95f, 0x1.7a0da2p-124f, 0x1.947752p-77f, 0x1.3e20fp-117f,
     0x1.1e0102p-79f, 0.0f, 0x1.9abe98p-119f, 0.0f, 0x1.57455ep-70f, 0x1.c838f2p-41f,
     0.0f, 0.0f, 0x1.d7c4cep-124f, 0.0f, 0x1.5e3316p-45f, 0.0f, 0.0f,
     0x1.7737dap-121f, 0.0f, 0x1.776702p-108f, 0x1.1313c8p-98f, 0.0f,
     0x1.e6e198p-100f, 0.0f, 0x1.f6ed64p-77f, 0x1.1eef08p-19f, 0x1.da90d2p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.160bbp-47f, 0.0f, 0x1.b3059cp-104f, 0.0f, 0x1.a0bae8p-78f,
     0x1.a710d2p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.05af2p-85f, 0.0f, 0.0f, 0x1.10afe2p-111f, 0.0f, 0.0f,
     0x1.a8a482p-35f, 0.0f, 0x1.5d690ap-41f, 0.0f, 0x1.bc9272p-56f, 0x1.23c462p-41f,
     0x1.32f21cp-51f, 0.0f, 0x1.b3d862p-66f, 0.0f, 0.0f, 0.0f, 0x1.d0c28p-41f,
     0x1.112a7p-9f, 0.0f, 0x1.a4090ep-34f, 0.0f, 0.0f, 0.0f, 0x1.3a4a7ap-120f, 0.0f,
     0x1.f3f72p-20f, 0x1.053db4p-17f, 0x1.4aa8a4p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.850ecap-123f, 0.0f, 0x1.a43de2p-45f, 0x1.4ed9eep-16f, 0x1.0b7d58p-80f,
     0x1.3e4b8cp-50f, 0.0f, 0x1.a6254p-117f, 0x1.f5ba84p-55f, 0x1.305d8cp-34f,
     0x1.8b3c66p-26f, 0.0f, 0.0f, 0x1.c3bcb8p-86f, 0.0f, 0x1.3be566p-49f, 0.0f,
     0x1.309424p-28f, 0.0f, 0.0f, 0x1.a3787p-37f, 0.0f, 0x1.b5300ep-104f, 0.0f,
     0x1.b9c936p-123f, 0.0f, 0.0f, 0x1.5b75e8p-116f, 0.0f, 0x1.63d8cap-17f, 0.0f,
     0x1.a9594p-5f, 0x1.6a2138p-53f, 0.0f, 0.0f, 0x1.8a13c8p-8f, 0.0f,
     0x1.bdfc64p-28f, 0x1.5e742p-22f, 0x1.257fc4p-55f, 0.0f, 0x1.0960bcp-125f,
     0x1.c334f6p-17f, 0.0f, 0.0f, 0x1.9dd54ap-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77fe36p-41f, 0x1.38dc9ep-16f, 0x1.fa0c8ep-54f, 0x1.fd80c6p-32f, 0.0f,
     0x1.2d6e08p-125f, 0.0f, 0x1.e7271cp-21f, 0x1.7ca81p-33f, 0.0f, 0.0f,
     0x1.10203ap-7f, 0x1.514674p-43f, 0x1.accdacp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69557p-15f, 0x1.0ecd1p-52f, 0x1.75b7b4p-43f, 0x1.f1d8fcp-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a05fd2p-85f, 0x1.64fc98p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2961f4p-78f, 0.0f, 0x1.116a52p-24f, 0.0f, 0x1.a7f864p-79f, 0x1.493b1p-78f,
     0x1.009406p-6f, 0.0f, 0.0f, 0.0f, 0x1.0ebd2ap-8f, 0x1.53e42ap-118f,
     0x1.e5d322p-68f, 0.0f, 0.0f, 0x1.3a5102p-88f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_fastcosf4_u3500kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_fastcosf4_u3500kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fastcosf4_u3500kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
