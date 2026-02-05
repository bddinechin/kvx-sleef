/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpif4_u05kvx.c --function Sleef_sinpif4_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.79cbfap-49f, 0x1.0a0d1cp-79f, 0.0f, 0x1.f9a7e6p-99f, 0.0f,
     0x1.612a1ep-89f, 0.0f, 0.0f, 0.0f, 0x1.e07554p-124f, 0.0f, 0x1.8eeab6p-78f,
     0x1.098b1ep-63f, 0.0f, 0x1.c326ap-8f, 0x1.e03244p-9f, 0.0f, 0x1.a977a2p-46f,
     0x1.0c39p-85f, 0x1.0ab7f4p-103f, 0x1.091654p-25f, 0x1.ad80ccp-55f,
     0x1.f2affp-93f, 0x1.875856p-120f, 0x1.a04188p-109f, 0x1.40f45cp-119f, 0.0f,
     0x1.baec22p-38f, 0x1.8eb69p-12f, 0.0f, 0x1.b23e74p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d05f82p-87f, 0.0f, 0x1.9fe03p-83f, 0x1.4fcca4p-77f, 0x1.873036p-11f,
     0.0f, 0x1.93773ap-63f, 0.0f, 0x1.bfd06cp-22f, 0x1.67e7a2p-29f, 0.0f, 0.0f, 0.0f,
     0x1.f6e9p-49f, 0.0f, 0x1.201b0ep-83f, 0x1.284686p-42f, 0.0f, 0.0f, 0.0f,
     0x1.081802p-37f, 0x1.4198p-52f, 0.0f, 0x1.9f8c58p-5f, 0x1.2e1e2cp-36f,
     0x1.771342p-28f, 0.0f, 0x1.8d1bcp-24f, 0x1.6625aep-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.52fbd2p-22f, 0.0f, 0x1.511db2p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fad4f2p-66f, 0x1.e5841ap-85f, 0.0f, 0x1.2d7deep-102f, 0.0f, 0.0f,
     0x1.59fd6cp-110f, 0.0f, 0x1.774f1p-83f, 0.0f, 0x1.bb4c72p-126f, 0.0f,
     0x1.fcca24p-125f, 0.0f, 0.0f, 0x1.a3d066p-73f, 0x1.7df11p-26f, 0.0f,
     0x1.81af18p-91f, 0x1.0c17ap-94f, 0.0f, 0.0f, 0.0f, 0x1.a27e74p-82f,
     0x1.efb3fp-26f, 0.0f, 0.0f, 0x1.54de22p-90f, 0.0f, 0x1.8a2274p-104f,
     0x1.70a24cp-47f, 0x1.1fe1d6p-84f, 0x1.f79eap-115f, 0.0f, 0.0f, 0.0f,
     0x1.7894fcp-63f, 0.0f, 0.0f, 0.0f, 0x1.77966ep-105f, 0x1.321458p-92f, 0.0f, 0.0f,
     0x1.dacae6p-3f, 0.0f, 0x1.76711ep-100f, 0x1.cbd7dep-91f, 0x1.afc728p-25f, 0.0f,
     0x1.30c53p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.725632p-69f, 0.0f, 0.0f, 0.0f,
     0x1.416b9ep-45f, 0.0f, 0.0f, 0.0f, 0x1.105cb6p-100f, 0.0f, 0.0f,
     0x1.05d01cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.283bcep-17f, 0.0f, 0.0f,
     0x1.53b1f4p-119f, 0x1.7f1408p-43f, 0x1.5908aep-10f, 0x1.c82a04p-32f,
     0x1.0bcd48p-28f, 0.0f, 0.0f, 0.0f, 0x1.f8f4fap-92f, 0.0f, 0x1.017b62p-60f,
     0x1.f5187p-110f, 0.0f, 0x1.b9bdd6p-84f, 0x1.843e6ep-119f, 0.0f, 0x1.ab257p-74f,
     0x1.c96858p-63f, 0.0f, 0x1.ec557p-32f, 0.0f, 0.0f, 0x1.47d754p-33f, 0.0f, 0.0f,
     0x1.a3a2c4p-106f, 0x1.fabb4ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4de2a8p-125f,
     0.0f, 0x1.7eb28cp-109f, 0x1.b8bdc4p-30f, 0x1.d903cp-79f, 0x1.e40666p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecb852p-27f,
     0x1.07c474p-103f, 0x1.64794cp-42f, 0x1.a77346p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0ecd4cp-76f, 0.0f, 0.0f, 0x1.a124fep-93f, 0.0f, 0x1.e24a48p-126f, 0.0f,
     0.0f, 0x1.53d93ep-33f, 0x1.82d5f8p-68f, 0x1.2a2d9cp-114f, 0x1.680f94p-125f,
     0x1.caece8p-14f, 0.0f, 0x1.f88c46p-5f, 0x1.7db06cp-16f, 0.0f, 0x1.d2604ap-38f,
     0x1.db2fe4p-78f, 0.0f, 0.0f, 0.0f, 0x1.de084ep-76f, 0x1.b71edap-54f, 0.0f,
     0x1.70283ep-84f, 0.0f, 0.0f, 0x1.1e9dd4p-68f, 0.0f, 0x1.2a5912p-96f, 0.0f, 0.0f,
     0x1.6b7086p-94f, 0.0f, 0x1.2d748ep-58f, 0x1.5a4962p-3f, 0.0f, 0x1.30c35cp-52f,
     0x1.468b66p-44f, 0.0f, 0.0f, 0x1.7f9a72p-90f, 0x1.e6990cp-31f, 0.0f, 0.0f,
     0x1.5e435ap-77f, 0.0f, 0x1.6fe278p-100f, 0x1.b108dap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.283756p-70f, 0x1.ee1856p-56f, 0.0f, 0.0f, 0x1.5cd044p-103f, 0x1.1cbb34p-77f,
     0.0f, 0.0f, 0x1.27e822p-110f, 0x1.d43c5p-8f, 0x1.6a442ep-5f, 0x1.83aceap-125f,
     0.0f, 0.0f, 0x1.92723ap-16f, 0.0f, 0x1.d3c3fp-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ee65ep-67f, 0x1.de025ep-96f, 0.0f, 0.0f, 0x1.1ca9p-27f, 0x1.3ec2bep-54f,
     0x1.93b9a6p-2f, 0.0f, 0.0f, 0x1.e538acp-82f, 0x1.48842cp-10f, 0.0f,
     0x1.0602fcp-81f, 0.0f, 0x1.ad32aap-81f, 0.0f, 0x1.21a89p-114f, 0x1.132e24p-83f,
     0x1.5b5b2ep-52f, 0x1.3e64c4p-60f, 0x1.cdf65cp-36f, 0x1.006798p-31f, 0.0f, 0.0f,
     0.0f, 0x1.c22ccp-109f, 0x1.9822c2p-5f, 0x1.d7c5bcp-9f, 0x1.e684ecp-96f, 0.0f,
     0x1.f31994p-61f, 0.0f, 0.0f, 0x1.b22b3ap-87f, 0.0f, 0.0f, 0.0f, 0x1.c37adep-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.446d58p-65f, 0x1.f36a6ap-65f, 0x1.4bc328p-73f,
     0x1.ce8458p-74f, 0x1.5d5f82p-11f, 0.0f, 0.0f, 0.0f, 0x1.070f36p-10f, 0.0f,
     0x1.f44c44p-96f, 0x1.2bb448p-109f, 0x1.79a118p-84f, 0x1.f96898p-100f,
     0x1.34764ap-7f, 0.0f, 0x1.83193ap-27f, 0.0f, 0.0f, 0x1.265b64p-42f, 0.0f, 0.0f,
     0x1.86090ap-95f, 0x1.8deafep-24f, 0.0f, 0.0f, 0x1.20695ep-30f, 0x1.53a458p-72f,
     0x1.5e377p-70f, 0.0f, 0.0f, 0x1.f5e8dep-97f, 0x1.a2640cp-52f, 0x1.f0b56cp-104f,
     0.0f, 0x1.5874eep-3f, 0x1.4a602p-85f, 0x1.10015p-113f, 0x1.0e186p-6f, 0.0f,
     0x1.546594p-11f, 0.0f, 0.0f, 0.0f, 0x1.759fd2p-79f, 0x1.11a86cp-100f, 0.0f,
     0x1.cc1866p-60f, 0.0f, 0x1.25653ap-8f, 0.0f, 0x1.ef74b8p-120f, 0x1.23cf3ep-82f,
     0x1.a45d98p-101f, 0x1.0ecc86p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.933b3p-117f, 0.0f,
     0.0f, 0.0f, 0x1.0c78d6p-15f, 0x1.731f0ap-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27e918p-33f, 0.0f, 0x1.8a0c66p-40f, 0x1.5ab10ep-83f, 0x1.c9c268p-88f,
     0x1.a19e9ap-12f, 0x1.be59b8p-68f, 0x1.56256cp-59f, 0x1.64c2c6p-75f,
     0x1.1ff38ep-18f, 0x1.23c204p-92f, 0.0f, 0x1.cd706p-31f, 0.0f, 0.0f,
     0x1.08456cp-73f, 0x1.4bf8aap-55f, 0x1.0f6a38p-124f, 0x1.16a02ep-86f,
     0x1.53b098p-38f, 0x1.a3b6eap-8f, 0.0f, 0x1.ed65d6p-25f, 0x1.daaa6cp-57f,
     0x1.cf42eep-62f, 0.0f, 0.0f, 0.0f, 0x1.3352ap-13f, 0x1.f037fep-41f,
     0x1.bd4edp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a501ep-52f,
     0x1.a8cd0ap-51f, 0x1.90dc1p-114f, 0.0f, 0x1.28ba76p-39f, 0x1.591744p-107f, 0.0f,
     0x1.5b5108p-63f, 0x1.c120eep-37f, 0.0f, 0x1.161346p-34f, 0.0f, 0x1.47d84cp-107f,
     0.0f, 0x1.7ffa0ap-123f, 0.0f, 0.0f, 0.0f, 0x1.894018p-115f, 0.0f,
     0x1.7ba2b2p-36f, 0.0f, 0x1.522c26p-105f, 0.0f, 0x1.e9fdf2p-96f, 0x1.581a6ep-99f,
     0x1.3c8a0ap-17f, 0x1.b49bd4p-22f, 0x1.01fe86p-17f, 0.0f, 0.0f, 0x1.f97a82p-126f,
     0.0f, 0x1.4f55p-22f, 0x1.28f38cp-37f, 0.0f, 0x1.9aabp-52f, 0x1.60a4dp-96f, 0.0f,
     0.0f, 0.0f, 0x1.1e98eap-12f, 0x1.c723a4p-73f, 0x1.f7ed78p-28f, 0.0f, 0.0f,
     0x1.06244p-41f, 0.0f, 0.0f, 0x1.085bc4p-59f, 0x1.6fdc5ep-14f, 0x1.81c144p-101f,
     0x1.b2d81ep-93f, 0.0f, 0.0f, 0.0f, 0x1.4d4656p-102f, 0.0f, 0x1.e91408p-122f,
     0.0f, 0.0f, 0.0f, 0x1.e26a9ap-84f, 0.0f, 0.0f, 0x1.ab16a2p-110f, 0.0f, 0.0f,
     0x1.a8f202p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93db1ep-10f,
     0x1.0af382p-117f, 0x1.7975c6p-3f, 0x1.4143ep-16f, 0x1.74b026p-57f,
     0x1.ae04a6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.186fdap-85f, 0.0f, 0.0f,
     0x1.03e446p-4f, 0.0f, 0x1.d1a69ep-125f, 0.0f, 0.0f, 0x1.3761eap-102f, 0.0f,
     0x1.8c3f28p-93f, 0.0f, 0x1.e3cbep-46f, 0.0f, 0.0f, 0x1.0d867p-62f,
     0x1.a6187p-35f, 0x1.1458fap-29f, 0x1.5929f8p-121f, 0x1.27c91ep-78f, 0.0f,
     0x1.f08f0ap-78f, 0.0f, 0.0f, 0x1.b5f106p-54f, 0.0f, 0x1.f5931p-100f, 0.0f,
     0x1.6923d6p-116f, 0x1.ab99a4p-63f, 0.0f, 0.0f, 0x1.e5dbcp-92f, 0.0f,
     0x1.f33d06p-117f, 0.0f, 0x1.e9f44ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f876p-58f,
     0x1.f8147cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a97eb2p-4f, 0x1.9ddd46p-38f,
     0x1.799792p-14f, 0x1.42417cp-41f, 0.0f, 0x1.d63802p-12f, 0.0f, 0.0f,
     0x1.646e92p-25f, 0.0f, 0x1.4ff5fep-90f, 0.0f, 0x1.64c0a2p-2f, 0.0f, 0.0f,
     0x1.88b8e6p-103f, 0x1.c7146ap-115f, 0.0f, 0x1.f477cep-116f, 0.0f, 0.0f,
     0x1.1bdf2ep-53f, 0x1.57d936p-95f, 0x1.6afd56p-62f, 0x1.1aac48p-81f, 0.0f,
     0x1.8e5b42p-48f, 0x1.0742dep-23f, 0.0f, 0x1.64994p-27f, 0.0f, 0.0f,
     0x1.da8d32p-73f, 0.0f, 0.0f, 0x1.c379bp-125f, 0x1.26a34ap-3f, 0x1.371fecp-35f,
     0.0f, 0x1.16c474p-106f, 0.0f, 0.0f, 0.0f, 0x1.721cccp-121f, 0x1.f834fap-15f,
     0x1.fe399cp-72f, 0.0f, 0x1.c9fe34p-104f, 0.0f, 0x1.3401acp-113f, 0x1.3efbc2p-32f,
     0.0f, 0.0f, 0x1.1a7cccp-114f, 0x1.f92a42p-7f, 0x1.ee5d6cp-66f, 0x1.7e23eep-105f,
     0.0f, 0.0f, 0x1.a4a9c2p-52f, 0x1.36a5eep-82f, 0x1.36bac8p-33f, 0.0f,
     0x1.6cf0e2p-21f, 0.0f, 0.0f, 0.0f, 0x1.19c594p-62f, 0.0f, 0x1.5562ecp-96f, 0.0f,
     0x1.3f2d2ep-44f, 0x1.e647cep-96f, 0.0f, 0x1.198896p-88f, 0x1.f905f4p-4f, 0.0f,
     0x1.03311ap-14f, 0x1.2765fap-108f, 0x1p0f, 0.0f, 0.0f, 0x1.d9a812p-118f,
     0x1.842cbep-101f, 0x1.83e1dcp-11f, 0.0f, 0.0f, 0x1.90eaap-112f, 0x1.3501acp-14f,
     0.0f, 0x1.098f08p-113f, 0x1.b86794p-83f, 0.0f, 0.0f, 0.0f, 0x1.bd7956p-118f,
     0.0f, 0x1.211f2cp-78f, 0x1.7b34bcp-24f, 0x1.a5d322p-34f, 0.0f, 0x1.c8532ap-3f,
     0x1.68ade2p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14294p-86f, 0x1.4da77ap-49f, 0.0f,
     0.0f, 0x1.dbabc4p-121f, 0.0f, 0.0f, 0x1.f2388ap-24f, 0.0f, 0x1.2bbc96p-125f,
     0.0f, 0.0f, 0x1.2b59e2p-59f, 0.0f, 0.0f, 0.0f, 0x1.6adbe2p-58f, 0x1.ecbcf6p-69f,
     0x1.0168b2p-63f, 0x1.8e5eecp-101f, 0x1.98a306p-100f, 0x1.face48p-84f, 0.0f, 0.0f,
     0x1.516002p-21f, 0.0f, 0x1.5d1b6ep-29f, 0x1.10b342p-81f, 0.0f, 0x1.95ccfcp-45f,
     0.0f, 0x1.e42daap-65f, 0.0f, 0.0f, 0.0f, 0x1.0832fp-82f, 0.0f, 0x1.68e79ap-67f,
     0x1.9bb2d2p-7f, 0x1.6c6444p-26f, 0x1.089722p-41f, 0x1.2c8b64p-115f,
     0x1.0ef536p-61f, 0x1.2010d2p-16f, 0.0f, 0x1.a2251p-50f, 0x1.ed4f0ep-67f,
     0x1.f4ad1ep-17f, 0x1.25b924p-41f, 0.0f, 0.0f, 0x1.2f7fep-48f, 0.0f, 0.0f,
     0x1.deb5cp-126f, 0x1.612c2p-51f, 0.0f, 0.0f, 0x1.23d09ep-56f, 0x1.a77db4p-27f,
     0.0f, 0.0f, 0x1.76a454p-35f, 0x1.166e18p-32f, 0x1.47b5b2p-91f, 0.0f, 0.0f,
     0x1.bc4e52p-102f, 0x1.d5ec26p-21f, 0.0f, 0x1.0169c8p-80f, 0.0f, 0x1.592276p-52f,
     0x1.294bc6p-94f, 0x1.2639f2p-66f, 0.0f, 0.0f, 0x1.78fa24p-66f, 0x1.4660cap-17f,
     0x1.7a6198p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abe8b2p-79f, 0x1.c063e6p-101f,
     0x1.17f714p-76f, 0x1.077552p-72f, 0x1.39951p-17f, 0x1.0952aap-25f, 0.0f,
     0x1.7d7a32p-81f, 0.0f, 0.0f, 0x1.a3aae2p-103f, 0.0f, 0.0f, 0.0f, 0x1.5f1348p-86f,
     0x1.67e7dap-27f, 0x1.3f675ep-109f, 0.0f, 0.0f, 0x1.169a48p-85f, 0x1.b9cd6p-104f,
     0x1.70066ep-77f, 0.0f, 0.0f, 0x1.0f9912p-79f, 0x1.0f2d38p-118f, 0x1.89638p-89f,
     0.0f, 0x1.e5e3a6p-32f, 0x1.9700ap-30f, 0x1.4dc738p-113f, 0.0f, 0x1.40f148p-70f,
     0.0f, 0.0f, 0x1.9f0d38p-36f, 0x1.c39642p-99f, 0x1.92f04ep-61f, 0x1.a7423ap-102f,
     0x1.7f9a88p-73f, 0x1.765a94p-55f, 0x1.89db4p-17f, 0x1.acc632p-71f, 0.0f,
     0x1.e1f69ep-19f, 0x1.7fd1acp-89f, 0.0f, 0x1.1ad1ecp-17f, 0x1.687084p-47f,
     0x1.04f62p-104f, 0.0f, 0x1.23225ap-71f, 0.0f, 0x1.5473b6p-109f, 0.0f,
     0x1.143658p-57f, 0x1.14ddap-36f, 0.0f, 0.0f, 0x1.61f956p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.62d248p-11f, 0x1.850fc2p-28f, 0.0f, 0.0f,
     0x1.69d8cp-44f, 0x1.08914cp-54f, 0x1.e2b1eap-19f, 0x1.806848p-89f,
     0x1.a30b8ap-55f, 0x1.ecc024p-58f, 0x1.2ebf32p-84f, 0x1.2d15cep-119f,
     0x1.d892aap-79f, 0.0f, 0.0f, 0.0f, 0x1.2a66e4p-122f, 0.0f, 0.0f, 0.0f,
     0x1.31b1c2p-17f, 0.0f, 0.0f, 0x1.b17cep-107f, 0x1.8e75b8p-49f, 0x1.1009bap-111f,
     0x1.9b01d6p-99f, 0x1.f736p-25f, 0.0f, 0x1.c0aadp-69f, 0.0f, 0.0f, 0x1.edb7f4p-7f,
     0.0f, 0x1.19a18cp-4f, 0x1.a439eap-78f, 0x1.a90eacp-71f, 0x1.7b8dd8p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a0d8ep-50f, 0.0f, 0.0f, 0x1.9f412p-36f, 0.0f,
     0x1.5f4278p-63f, 0.0f, 0.0f, 0x1.e061f8p-124f, 0.0f, 0x1.aafb66p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7eb7c4p-120f, 0.0f, 0x1.667fe6p-43f, 0.0f, 0x1.f0b97cp-32f, 0.0f,
     0.0f, 0x1.f000f2p-125f, 0x1.ffbd12p-121f, 0.0f, 0x1.f2ae7cp-51f, 0x1.674d52p-76f,
     0x1.3b082cp-83f, 0x1.bd86a8p-79f, 0.0f, 0x1.6dccfcp-81f, 0.0f, 0.0f,
     0x1.da72a4p-14f, 0x1.a891c4p-37f, 0.0f, 0x1.ee93e2p-13f, 0.0f, 0x1.9b9d0ep-51f,
     0x1.31f1ecp-47f, 0.0f, 0.0f, 0x1.56e784p-99f, 0x1.3278eep-26f, 0.0f,
     0x1.fdc068p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d3d3cp-37f,
     0.0f, 0x1.fca358p-56f, 0x1.78560cp-97f, 0x1.423b6p-81f, 0x1.34da6p-31f,
     0x1.30371ap-63f, 0x1.119652p-80f, 0.0f, 0.0f, 0x1.ea69e4p-10f, 0.0f, 0.0f, 0.0f,
     0x1.0db4a6p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02975ap-66f, 0x1.044faap-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ade3ap-102f, 0.0f, 0x1.2869ep-121f, 0x1.bd49d2p-94f, 0.0f,
     0x1.d3b072p-76f, 0x1.5719d8p-55f, 0.0f, 0x1.f071cep-29f, 0x1.dfa76cp-118f, 0.0f,
     0x1.4a655ep-117f, 0x1.adad9p-40f, 0x1.97a3d8p-101f, 0x1.3a6f0cp-1f, 0.0f,
     0x1.df554ep-103f, 0x1.f1114cp-21f, 0x1.2da854p-26f, 0.0f, 0x1.f6fd9p-125f,
     0x1.c95da8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5939cep-42f, 0x1.3ddbecp-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.59913p-30f, 0.0f, 0.0f, 0x1.a9a344p-27f, 0x1.14be52p-78f,
     0x1.0659bap-81f, 0.0f, 0x1.171e3ep-118f, 0x1.0705b2p-48f, 0x1.e73ff6p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6e1b2ap-20f, 0x1.9b9a86p-113f, 0.0f, 0.0f, 0x1.d21d1p-19f,
     0x1.5a94acp-33f, 0.0f, 0.0f, 0x1.4a8614p-56f
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
            tmp1 = Sleef_sinpif4_u05kvx(tmp0);
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
    printf("Sleef_sinpif4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinpif4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
