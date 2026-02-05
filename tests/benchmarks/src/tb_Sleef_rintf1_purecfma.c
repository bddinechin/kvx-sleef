/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintf1_purecfma.c --function Sleef_rintf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.93aac6p-74f, 0x1.0ae96ap-77f, 0.0f, 0x1.2155dp-25f, 0.0f, 0.0f,
     0x1.2a954ap-57f, 0x1.866fdp-71f, 0.0f, 0.0f, 0x1.f9eae8p-53f, 0x1.f1094ep-120f,
     0.0f, 0.0f, 0.0f, 0x1.69d23p-71f, 0x1.92a50cp-114f, 0.0f, 0.0f, 0x1.f02162p-7f,
     0.0f, 0.0f, 0x1.84fa84p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86e99p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95de56p-67f, 0.0f, 0x1.e794aep-60f, 0.0f, 0.0f,
     0x1.ca9936p-93f, 0x1.b93b32p-105f, 0x1.d83e26p-70f, 0.0f, 0.0f, 0x1.811106p-117f,
     0.0f, 0x1.bd36bep-60f, 0x1.61943p-62f, 0.0f, 0x1.97b30ap-121f, 0.0f,
     0x1.247478p-94f, 0.0f, 0x1.08f766p-5f, 0x1.44510ep-53f, 0.0f, 0.0f,
     0x1.8349f8p-32f, 0x1.186b38p-60f, 0.0f, 0.0f, 0x1.810206p-76f, 0.0f,
     0x1.f567ecp-21f, 0x1.52ff86p-99f, 0x1.998d3cp-1f, 0x1.ba2644p-42f,
     0x1.f8f942p-25f, 0.0f, 0x1.89d45cp-84f, 0x1.3f47c6p-126f, 0x1.656a44p-42f, 0.0f,
     0x1.c0a0d8p-44f, 0x1.8d2bbcp-122f, 0x1.ee7c3ep-8f, 0.0f, 0x1.1579c6p-57f,
     0x1.ee5076p-45f, 0x1.a36b1cp-116f, 0.0f, 0x1.836bap-52f, 0x1.89469ap-26f, 0.0f,
     0x1.cbb398p-96f, 0.0f, 0.0f, 0.0f, 0x1.f2d75ep-11f, 0x1.eedb2ap-70f, 0.0f, 0.0f,
     0x1.226dbcp-65f, 0.0f, 0.0f, 0x1.f54fd2p-32f, 0x1.419e36p-105f, 0.0f, 0.0f,
     0x1.77eba8p-48f, 0x1.ce6e3ap-43f, 0x1.c17c8p-68f, 0x1.456e6ep-84f,
     0x1.4d6d62p-69f, 0.0f, 0.0f, 0x1.917ae2p-36f, 0x1.a74bacp-60f, 0x1.1c5d92p-111f,
     0.0f, 0x1.565f88p-96f, 0x1.38056cp-121f, 0x1.e6beeep-67f, 0.0f, 0.0f,
     0x1.2a9376p-105f, 0.0f, 0.0f, 0x1.2b8f56p-44f, 0x1.0be32cp-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.18bd9cp-88f, 0.0f, 0x1.6d9024p-126f, 0x1.1430dap-31f,
     0x1.f048dap-60f, 0.0f, 0x1.0bc3dep-111f, 0x1.455c6ap-4f, 0.0f, 0.0f, 0.0f,
     0x1.a066dap-81f, 0.0f, 0x1.2004aap-67f, 0.0f, 0x1.a51168p-67f, 0x1.94a15cp-8f,
     0.0f, 0x1.af0382p-3f, 0x1.6a5ee4p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8369fcp-84f,
     0.0f, 0.0f, 0.0f, 0x1.33a852p-13f, 0.0f, 0.0f, 0.0f, 0x1.9c2528p-54f,
     0x1.0a9d04p-9f, 0x1.760f16p-77f, 0.0f, 0.0f, 0x1.831798p-76f, 0x1.ed313cp-60f,
     0.0f, 0.0f, 0.0f, 0x1.71964ep-102f, 0x1.6a9a64p-42f, 0x1.c5f4b4p-32f,
     0x1.c12356p-99f, 0.0f, 0x1.fed27ap-15f, 0.0f, 0x1.20f0ap-68f, 0.0f, 0.0f,
     0x1.44422ep-83f, 0.0f, 0.0f, 0x1.41d5eap-85f, 0.0f, 0x1.69d996p-75f, 0.0f,
     0x1.a5eabep-126f, 0.0f, 0x1.a06042p-49f, 0x1.ddab74p-92f, 0x1.2d36e6p-51f,
     0x1.ae5f44p-119f, 0.0f, 0x1.ee9444p-82f, 0.0f, 0.0f, 0.0f, 0x1.f0968p-33f,
     0x1p0f, 0x1.f2efaap-83f, 0x1.3f9ba8p-42f, 0.0f, 0.0f, 0x1.2d5e6ap-69f,
     0x1.68a46cp-52f, 0.0f, 0.0f, 0x1.a018c8p-66f, 0x1.bebec4p-14f, 0.0f,
     0x1.b3fa78p-36f, 0x1.703774p-119f, 0.0f, 0.0f, 0.0f, 0x1.e02258p-62f,
     0x1.da4708p-66f, 0x1.261084p-16f, 0x1.800776p-10f, 0x1.84de8p-43f, 0.0f,
     0x1.932098p-124f, 0.0f, 0.0f, 0.0f, 0x1.ea52e8p-82f, 0.0f, 0.0f, 0x1.ab617ap-92f,
     0.0f, 0.0f, 0.0f, 0x1.0dde28p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dab228p-16f,
     0x1.d636a4p-64f, 0x1.cd1802p-21f, 0x1.a3082p-33f, 0x1.6281f8p-96f,
     0x1.a7d9eap-5f, 0.0f, 0.0f, 0x1.a4a532p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b8e4ep-86f, 0x1.d3fb44p-122f, 0x1.afdf34p-55f, 0.0f, 0x1.8a4d52p-37f,
     0x1.60d996p-32f, 0x1.23befp-66f, 0.0f, 0x1.357e8ap-106f, 0x1.619bc6p-122f,
     0x1.885506p-1f, 0x1.f1d894p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.023294p-68f, 0.0f, 0x1.0b39dep-13f, 0.0f, 0x1.e4280cp-33f, 0.0f, 0.0f,
     0x1.6c9494p-119f, 0x1.42baf8p-5f, 0.0f, 0x1.87eb54p-79f, 0x1.6630bap-7f, 0.0f,
     0x1.e28cb2p-23f, 0x1.8ebec6p-114f, 0x1.592032p-103f, 0x1.947922p-121f,
     0x1.0b3b6ap-107f, 0.0f, 0.0f, 0.0f, 0x1.940db6p-15f, 0.0f, 0.0f, 0.0f,
     0x1.84ae8cp-18f, 0x1.7346e2p-69f, 0.0f, 0x1.674a16p-61f, 0x1.649bp-14f, 0.0f,
     0.0f, 0.0f, 0x1.f0a078p-111f, 0x1.5e37d2p-32f, 0.0f, 0.0f, 0.0f, 0x1.03774ep-12f,
     0x1.1ee722p-95f, 0x1.d65362p-93f, 0.0f, 0x1.1694d8p-15f, 0x1.710006p-1f, 0.0f,
     0.0f, 0.0f, 0x1.46c70ep-22f, 0.0f, 0x1.6d0d2ep-111f, 0.0f, 0x1.65eb44p-75f,
     0x1.64cb8ep-74f, 0x1.d3d6e8p-80f, 0.0f, 0.0f, 0x1.a5b74cp-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.25bf78p-68f, 0.0f, 0x1.94141p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b841bcp-122f, 0x1.83479cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e74ea8p-31f,
     0x1.58c79p-9f, 0.0f, 0.0f, 0x1.c11134p-101f, 0x1.4efd3ap-19f, 0.0f,
     0x1.a9408ep-107f, 0.0f, 0.0f, 0.0f, 0x1.35f51p-101f, 0x1.fd27c6p-34f,
     0x1.ab12b2p-89f, 0x1.7d211ep-126f, 0x1.568e1ep-73f, 0x1.2972e8p-17f, 0.0f,
     0x1.2e702ap-121f, 0x1.361db6p-72f, 0.0f, 0.0f, 0x1.39d32ap-73f, 0.0f,
     0x1.df8d9ep-7f, 0.0f, 0.0f, 0.0f, 0x1.8d2f18p-16f, 0.0f, 0.0f, 0x1.8f215cp-30f,
     0x1.045e5ap-72f, 0x1.a03524p-86f, 0.0f, 0x1.9ace8ep-29f, 0x1.6d5f0ep-39f,
     0x1.9408e8p-16f, 0.0f, 0.0f, 0x1.b2b5fp-17f, 0x1.8f5eaap-11f, 0x1.321694p-107f,
     0x1.57cc62p-78f, 0x1.7e808p-71f, 0.0f, 0x1.d3bf9ep-101f, 0x1.feacd8p-112f,
     0x1.461cf8p-123f, 0.0f, 0x1.f60f5ep-14f, 0.0f, 0.0f, 0.0f, 0x1.ff02ep-41f, 0.0f,
     0x1.4bbbeap-71f, 0x1.23d236p-68f, 0.0f, 0x1.f16afep-36f, 0.0f, 0x1.96b704p-78f,
     0.0f, 0.0f, 0x1.e80b32p-31f, 0x1.e6bfb2p-33f, 0x1.6f8fe8p-51f, 0x1.bf8a72p-10f,
     0.0f, 0.0f, 0x1.97978p-123f, 0x1.07d17ap-123f, 0x1.4b0a7p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.614744p-126f, 0x1.7402dap-55f, 0x1.54c31cp-70f, 0.0f, 0x1.b4891ap-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e642e2p-90f, 0x1.1e63p-33f, 0.0f,
     0x1.fb359cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a1168p-53f, 0.0f,
     0x1.8a3812p-118f, 0x1.a4095p-57f, 0.0f, 0x1.803622p-22f, 0.0f, 0.0f,
     0x1.f508ccp-61f, 0x1.5b3e9ep-60f, 0.0f, 0.0f, 0x1.0801a2p-79f, 0x1.6d25a2p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.daafc6p-100f, 0.0f, 0.0f, 0x1.0eea9ap-56f, 0.0f,
     0.0f, 0x1.b1fc5ep-113f, 0x1.dbe32p-8f, 0x1.b5be64p-15f, 0x1.6dfa12p-1f, 0.0f,
     0.0f, 0.0f, 0x1.ec8324p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.70add8p-117f, 0.0f, 0x1.dee2fcp-115f, 0.0f, 0.0f, 0.0f, 0x1.d6ebb8p-61f,
     0x1.c4b5d2p-11f, 0x1.5d5d16p-79f, 0x1.023e5ep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d44acp-96f, 0x1.c620a2p-49f, 0.0f, 0x1.5e4098p-59f, 0x1.ab031p-33f,
     0x1.16128cp-25f, 0x1.808f82p-45f, 0x1.78e09cp-74f, 0x1.64d34cp-36f, 0.0f, 0.0f,
     0x1.f4518ep-61f, 0.0f, 0x1.82dc9p-14f, 0x1.b1b7bcp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3d326p-84f, 0.0f, 0x1.6bf626p-50f, 0.0f, 0x1.49ad14p-117f, 0x1.4db5d2p-85f,
     0.0f, 0x1.d27578p-43f, 0.0f, 0.0f, 0x1.dff626p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c32214p-71f, 0x1.249c26p-37f, 0.0f, 0.0f, 0x1.f5992p-20f, 0x1.66a836p-104f,
     0x1.486fbap-121f, 0.0f, 0.0f, 0x1.96ffe6p-68f, 0x1.c14656p-113f, 0x1.2970ep-121f,
     0.0f, 0x1.01314ap-100f, 0x1.1e605ap-60f, 0.0f, 0x1.8bbc4ep-117f, 0x1.9c576cp-21f,
     0x1.3f9bfap-58f, 0x1.89d8c2p-63f, 0x1.96c524p-119f, 0.0f, 0.0f, 0x1.5e4dbcp-24f,
     0.0f, 0x1.c3282cp-126f, 0x1.33944cp-96f, 0.0f, 0.0f, 0.0f, 0x1.b7bd96p-82f,
     0x1.6912d4p-55f, 0.0f, 0x1.f918p-11f, 0x1.616212p-30f, 0x1.eb0e5ap-5f,
     0x1.75df84p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df4602p-6f, 0.0f, 0.0f,
     0x1.d52f14p-19f, 0x1.5a10a4p-113f, 0x1.8bdcdap-29f, 0x1.953a7ap-16f,
     0x1.00edeep-90f, 0x1.858ecap-36f, 0.0f, 0.0f, 0x1.2fee0cp-109f, 0x1.9b4b2ap-1f,
     0x1.8e406ep-98f, 0x1.8b9eaep-5f, 0.0f, 0x1.890124p-10f, 0x1.50b042p-93f, 0.0f,
     0.0f, 0.0f, 0x1.9df14cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42d91cp-69f, 0.0f,
     0.0f, 0x1.41061cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.734aecp-33f, 0.0f,
     0x1.79060ep-14f, 0x1.7182bap-46f, 0x1.3321bap-95f, 0.0f, 0x1.c9dd58p-78f, 0.0f,
     0.0f, 0x1.96e2d8p-112f, 0.0f, 0x1.704afap-27f, 0x1.9b4366p-106f, 0.0f,
     0x1.441686p-60f, 0.0f, 0.0f, 0x1.8e13ccp-79f, 0.0f, 0.0f, 0x1.f81a1p-64f,
     0x1.6407a2p-74f, 0.0f, 0.0f, 0x1.f8d1c2p-54f, 0x1.449102p-59f, 0x1.2424b8p-109f,
     0.0f, 0.0f, 0x1.c05708p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ad116p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.366d8p-43f, 0x1.5c273p-112f, 0.0f, 0x1.db3f8ap-76f, 0.0f,
     0.0f, 0.0f, 0x1.7ac6b8p-108f, 0.0f, 0.0f, 0.0f, 0x1.60d0fap-75f, 0x1.ac8508p-43f,
     0.0f, 0.0f, 0.0f, 0x1.d6e044p-96f, 0x1.610becp-73f, 0.0f, 0x1.fa8becp-6f, 0.0f,
     0x1.fb025cp-76f, 0x1.9c951cp-91f, 0x1.a9df06p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.64b348p-31f, 0x1.462994p-92f, 0.0f, 0x1.a79506p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.729ed6p-76f, 0.0f, 0x1.b9e868p-83f,
     0x1.2cfd74p-41f, 0x1.c21208p-118f, 0x1.cf60f6p-94f, 0.0f, 0.0f, 0x1.5eaa5p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.beb054p-115f, 0x1.12daep-11f, 0x1.9145acp-17f, 0.0f,
     0.0f, 0x1.ff0f1ap-39f, 0.0f, 0x1.f8036cp-122f, 0x1.568772p-72f, 0.0f,
     0x1.66f928p-123f, 0x1.b4fb24p-88f, 0x1.4b57ap-84f, 0x1.386a34p-49f, 0.0f,
     0x1.8c0052p-99f, 0x1.ca784p-90f, 0.0f, 0.0f, 0.0f, 0x1.61796ep-76f,
     0x1.7eeb4p-97f, 0x1.8e2692p-77f, 0x1.ec6dcep-98f, 0.0f, 0x1.4a41f6p-74f, 0.0f,
     0x1.44fbcap-79f, 0x1.269dcp-86f, 0x1.aa107ep-100f, 0.0f, 0.0f, 0x1.0f6b24p-9f,
     0.0f, 0.0f, 0x1.53040ap-24f, 0x1.9eaa84p-26f, 0x1.ae726cp-66f, 0x1.f8d15cp-68f,
     0.0f, 0x1.eecf58p-64f, 0.0f, 0.0f, 0x1.4fcceep-63f, 0.0f, 0x1.508b9ep-81f,
     0x1.dcdf34p-95f, 0x1.6cab9cp-120f, 0x1.388108p-112f, 0.0f, 0x1.67228ap-10f, 0.0f,
     0.0f, 0x1.4b9a7cp-51f, 0.0f, 0x1.b2a7a6p-93f, 0.0f, 0.0f, 0x1.344444p-74f,
     0x1.9125f6p-48f, 0x1.286bbp-49f, 0.0f, 0x1.77cc36p-8f, 0x1.f23bdap-16f, 0.0f,
     0x1.6c10fep-110f, 0x1.772746p-43f, 0x1.ac35f6p-55f, 0.0f, 0.0f, 0x1.0e27c4p-29f,
     0.0f, 0x1.e9b092p-92f, 0.0f, 0.0f, 0.0f, 0x1.78e156p-8f, 0.0f, 0.0f,
     0x1.fd68bcp-86f, 0x1.a200d6p-122f, 0.0f, 0.0f, 0.0f, 0x1.62b5aep-116f, 0.0f,
     0x1.d69b9ap-122f, 0x1.b6b55p-31f, 0.0f, 0x1.efebaap-68f, 0x1.a4c84p-111f, 0.0f,
     0.0f, 0.0f, 0x1.48d554p-49f, 0x1.cfcd86p-81f, 0x1.6cba14p-71f, 0x1.503efap-36f,
     0.0f, 0x1.a3358p-56f, 0.0f, 0.0f, 0.0f, 0x1.51191p-56f, 0.0f, 0x1.0e3776p-72f,
     0.0f, 0.0f, 0x1.a5847ep-4f, 0.0f, 0x1.d29488p-17f, 0.0f, 0x1.6bcbbcp-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ee5eap-30f, 0x1.928abcp-122f, 0.0f,
     0x1.cbe2ap-50f, 0x1.cfe866p-6f, 0.0f, 0x1.f36b3cp-5f, 0x1.250996p-15f,
     0x1.901d96p-91f, 0.0f, 0.0f, 0.0f, 0x1.159266p-80f, 0x1.49eadep-44f, 0.0f,
     0x1.20d226p-85f, 0.0f, 0x1.5cf7f4p-79f, 0.0f, 0.0f, 0x1.63602cp-42f,
     0x1.eef4dap-81f, 0.0f, 0x1.074bfep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae6154p-31f, 0.0f, 0.0f, 0.0f, 0x1.511bbp-96f, 0.0f, 0.0f, 0x1.ed466cp-12f,
     0.0f, 0.0f, 0.0f, 0x1.c1e79ap-33f, 0x1.f685e4p-108f, 0.0f, 0x1.d40672p-74f, 0.0f,
     0x1.71479cp-8f, 0.0f, 0x1.b1b876p-12f, 0x1.d0bed8p-109f, 0.0f, 0.0f,
     0x1.ba25a8p-56f, 0.0f, 0x1.9e6218p-71f, 0x1.39605p-97f, 0x1.0587fap-65f,
     0x1.77c53cp-42f, 0.0f, 0.0f, 0x1.d84edep-94f, 0.0f, 0x1.e48346p-62f, 0.0f,
     0x1.cff58ep-117f, 0x1.5c8f02p-102f, 0.0f, 0x1.0c0bfap-112f, 0.0f, 0.0f,
     0x1.b178ecp-112f, 0.0f, 0.0f, 0x1.92d69p-29f, 0x1.6139c6p-23f, 0x1.87c84cp-12f,
     0.0f, 0x1.825caep-45f, 0x1.516f4ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1b052p-40f, 0.0f, 0x1.0fe952p-126f, 0x1.0d3826p-59f, 0.0f, 0.0f,
     0x1.3f5d94p-22f, 0x1.247e6cp-111f, 0x1.9b2b08p-2f, 0x1.6b4ddap-59f, 0.0f, 0.0f,
     0.0f, 0x1.3b56fap-74f, 0.0f, 0.0f, 0x1.4409e6p-125f, 0.0f, 0.0f, 0x1.72c0d4p-23f,
     0.0f, 0x1.9f77cp-110f, 0.0f, 0x1.ba211ap-72f, 0.0f, 0x1.034eb6p-19f, 0.0f, 0.0f,
     0x1.fb048ap-53f, 0.0f, 0x1.fe2992p-72f, 0x1.c92258p-30f, 0.0f, 0x1.684d32p-39f,
     0.0f, 0x1.fce0dcp-4f, 0x1.5b5d34p-5f, 0x1.65e1bep-68f, 0.0f, 0.0f, 0.0f,
     0x1.aa0f08p-107f, 0x1.405b22p-104f, 0x1.14c4p-107f, 0.0f, 0x1.a77a94p-49f,
     0x1.e67d24p-114f, 0x1.b3077p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8dc2f2p-123f, 0.0f, 0.0f, 0.0f, 0x1.e5ab88p-33f, 0.0f, 0x1.b14dap-94f,
     0x1.46ca8ap-107f, 0.0f, 0.0f, 0x1.cf9f1cp-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4cecep-32f, 0x1.adc808p-31f, 0.0f, 0.0f, 0x1.da59e2p-44f, 0.0f,
     0x1.ffcef4p-26f, 0.0f, 0x1.20fed6p-95f, 0.0f, 0.0f, 0x1.b3f6b6p-101f,
     0x1.39d81ap-115f, 0x1.cdd324p-77f, 0.0f, 0.0f, 0x1.1b7d96p-13f, 0.0f, 0.0f,
     0x1.58caaap-123f, 0x1.e99fc6p-78f, 0.0f, 0x1.ea57a4p-72f, 0x1.20a454p-3f,
     0x1.23a60ep-6f, 0.0f, 0.0f, 0.0f, 0x1.91dadp-114f, 0.0f, 0.0f, 0x1.2aa8c2p-78f,
     0.0f
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
            tmp1 = Sleef_rintf1_purecfma(tmp0);
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
    printf("Sleef_rintf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_rintf1_purecfma bench acc %a\n", global_bench_acc);
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
