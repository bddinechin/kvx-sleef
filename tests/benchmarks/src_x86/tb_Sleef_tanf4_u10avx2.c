/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf4_u10avx2128.c --function Sleef_tanf4_u10avx2128 --headers \
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
     0.0f, 0.0f, 0.0f, 0x1.a8757ap-66f, 0x1.82489ap-71f, 0x1.e4f1d8p-122f,
     0x1.25ab6cp-34f, 0x1.05c6f4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.865596p-50f,
     0.0f, 0x1.69af3ap-94f, 0.0f, 0x1.166da4p-99f, 0.0f, 0.0f, 0x1.19c6acp-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.055394p-43f, 0x1.35bb9p-72f, 0x1.5117acp-94f,
     0x1.359cfap-37f, 0.0f, 0x1.12aa24p-102f, 0x1.0024f4p-9f, 0.0f, 0.0f,
     0x1.93ea32p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a5c72p-57f, 0x1.370cd6p-47f,
     0x1.b5cd2p-27f, 0x1.a50896p-44f, 0.0f, 0.0f, 0x1.2f99b2p-15f, 0.0f,
     0x1.17d2c6p-62f, 0.0f, 0x1.642cbap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2869p-124f, 0x1.033fdap-83f, 0.0f, 0.0f, 0.0f, 0x1.34e5b2p-110f,
     0x1.c268e6p-94f, 0x1.c35b24p-54f, 0x1.8bfd58p-18f, 0x1.883d06p-53f, 0.0f,
     0x1.82ae16p-60f, 0x1.73e508p-60f, 0.0f, 0x1p0f, 0.0f, 0x1.8af02cp-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51e854p-49f, 0.0f, 0.0f, 0.0f, 0x1.446f24p-88f, 0x1p0f,
     0x1.c12134p-13f, 0x1.a30f54p-100f, 0.0f, 0x1.57b0bep-37f, 0.0f, 0.0f,
     0x1.20616p-97f, 0.0f, 0.0f, 0x1.d86256p-58f, 0x1.86580ep-57f, 0x1.ebca36p-16f,
     0.0f, 0x1.2bc376p-45f, 0x1.5b0b86p-55f, 0.0f, 0x1.665e9cp-58f, 0x1.577eb2p-116f,
     0.0f, 0.0f, 0x1.412386p-83f, 0x1.7475fp-47f, 0.0f, 0.0f, 0.0f, 0x1.6422d2p-105f,
     0x1.7a0754p-120f, 0x1.aaefe6p-91f, 0x1.51ca9cp-73f, 0.0f, 0x1.ee5ce6p-119f,
     0x1.63c602p-17f, 0x1.a9b5e6p-118f, 0.0f, 0x1.5a4cf4p-72f, 0x1.ab9742p-103f, 0.0f,
     0x1.8e92f6p-69f, 0.0f, 0x1.9c2154p-63f, 0x1.2e9906p-105f, 0.0f, 0x1.35ae2ap-118f,
     0x1.5a98c4p-10f, 0x1.5ade92p-115f, 0x1.9ec312p-108f, 0.0f, 0x1.b24d6p-34f,
     0x1.d3d81ep-13f, 0x1.529aaep-26f, 0x1.c2c99ep-50f, 0x1.0576p-115f,
     0x1.ffce4cp-121f, 0x1.10ff44p-67f, 0.0f, 0x1.3d80ecp-45f, 0.0f, 0.0f, 0.0f,
     0x1.cb30a4p-79f, 0x1.4a1f3ep-92f, 0.0f, 0x1.2cb7bp-62f, 0x1.48a504p-104f, 0.0f,
     0.0f, 0.0f, 0x1.ed8184p-22f, 0.0f, 0.0f, 0.0f, 0x1.f93cbp-82f, 0x1.3c6c14p-19f,
     0.0f, 0x1.abae08p-90f, 0.0f, 0.0f, 0.0f, 0x1.c2b4f4p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.07e0dep-30f, 0x1.6c16p-47f, 0.0f, 0x1.414d4ep-9f,
     0x1.391c12p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57a954p-121f, 0.0f,
     0x1.9c3166p-111f, 0x1.4b101p-67f, 0x1.522b5ap-36f, 0.0f, 0.0f, 0x1.42245cp-28f,
     0.0f, 0x1.8bdd3ap-11f, 0.0f, 0x1.4930bap-85f, 0x1.b2704cp-4f, 0x1.370d4p-6f,
     0.0f, 0.0f, 0.0f, 0x1.06ce22p-121f, 0.0f, 0.0f, 0x1.860734p-47f, 0x1.5d43f4p-94f,
     0x1.8a4b08p-17f, 0.0f, 0x1.26d84ap-105f, 0.0f, 0x1.aa523cp-13f, 0.0f, 0.0f, 0.0f,
     0x1.27909ep-110f, 0x1.e3e718p-83f, 0.0f, 0.0f, 0x1.252ab8p-36f, 0x1.25a69cp-32f,
     0.0f, 0x1.c54e7p-24f, 0x1.4d226ap-25f, 0.0f, 0x1.5d072p-123f, 0x1.a94446p-93f,
     0x1.74c902p-73f, 0.0f, 0.0f, 0x1.3a76aep-117f, 0x1.6fbf6ep-83f, 0x1.b27416p-13f,
     0.0f, 0x1.f49a8cp-103f, 0x1.dbefc4p-38f, 0.0f, 0x1.e18b4ep-93f, 0x1.68d256p-81f,
     0x1.ffc72p-38f, 0x1.e40126p-77f, 0.0f, 0.0f, 0x1.ddeb6ep-85f, 0.0f,
     0x1.3985dap-125f, 0x1.f9ed3ap-73f, 0.0f, 0.0f, 0.0f, 0x1.b9475ap-8f,
     0x1.8e865ep-110f, 0x1.972a66p-104f, 0x1.9cc5e6p-3f, 0.0f, 0.0f, 0x1.ca7abep-72f,
     0.0f, 0x1.5ffbfcp-87f, 0x1.4b4c78p-31f, 0.0f, 0x1.69f2d8p-63f, 0x1.906e66p-44f,
     0x1.996712p-32f, 0x1.d06b7p-57f, 0x1.1bd0fp-34f, 0.0f, 0x1.9bfb5cp-42f,
     0x1.13ddd8p-79f, 0.0f, 0x1.db5a86p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdb008p-110f, 0.0f, 0x1.1b60acp-46f, 0x1.d451aap-68f, 0x1.ad3c1ap-97f, 0.0f,
     0.0f, 0x1.a009ep-78f, 0.0f, 0x1.857deap-53f, 0.0f, 0x1.6db9ep-116f,
     0x1.8e3e8ep-44f, 0x1.28da92p-61f, 0x1.3f0fd8p-43f, 0.0f, 0x1.77f07ap-112f,
     0x1.51d61ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9f8eep-45f, 0x1.a01b8ap-41f, 0.0f,
     0.0f, 0x1.f659bep-109f, 0.0f, 0.0f, 0.0f, 0x1.f3573ap-89f, 0x1.c47272p-95f,
     0x1.1cebf6p-23f, 0x1.927f48p-124f, 0.0f, 0.0f, 0.0f, 0x1.a8bed6p-91f, 0.0f,
     0x1.94ce82p-25f, 0x1.f633ep-6f, 0x1p0f, 0.0f, 0x1.0aca42p-53f, 0x1.d88f8ap-49f,
     0.0f, 0.0f, 0.0f, 0x1.505d22p-85f, 0x1.9d0932p-77f, 0x1.2efb6p-54f, 0.0f,
     0x1.09b2acp-54f, 0.0f, 0x1.60c408p-45f, 0.0f, 0.0f, 0x1.6f183ep-88f,
     0x1.087446p-46f, 0x1.61e93cp-55f, 0x1.829796p-30f, 0x1.bbc9f6p-3f, 0.0f,
     0x1.7ba432p-40f, 0.0f, 0.0f, 0.0f, 0x1.0d03d2p-64f, 0x1.b27b9cp-63f, 0.0f,
     0x1.75e158p-62f, 0x1.5bb1b4p-16f, 0.0f, 0.0f, 0x1.76f6d2p-97f, 0x1.f9e72cp-84f,
     0.0f, 0x1.02a29p-37f, 0.0f, 0.0f, 0x1.daa79ap-103f, 0x1.8b8a56p-38f, 0.0f, 0.0f,
     0x1.7ed84ap-36f, 0x1.6ec0e4p-28f, 0.0f, 0.0f, 0x1.30004ep-38f, 0.0f,
     0x1.8fe53ap-126f, 0.0f, 0.0f, 0x1.2d75a6p-54f, 0x1.13125cp-58f, 0x1.4771a8p-113f,
     0.0f, 0x1.49db0ap-65f, 0.0f, 0.0f, 0x1.d3054p-1f, 0.0f, 0x1.3fdcc6p-19f,
     0x1.34759ap-75f, 0x1.52198p-125f, 0.0f, 0.0f, 0.0f, 0x1.6fac5p-16f,
     0x1.7a4be6p-58f, 0.0f, 0x1.47dd16p-10f, 0.0f, 0.0f, 0x1.fee292p-118f, 0.0f, 0.0f,
     0x1.fff55p-66f, 0x1.010042p-62f, 0.0f, 0.0f, 0x1.2c4838p-90f, 0x1.0f0a78p-72f,
     0.0f, 0x1.0c8ae2p-28f, 0.0f, 0x1.f41826p-98f, 0x1.13dddap-82f, 0.0f,
     0x1.fb3516p-84f, 0.0f, 0.0f, 0.0f, 0x1.dc2a36p-30f, 0.0f, 0x1.f1e894p-11f,
     0x1.34538p-72f, 0.0f, 0x1.9c826ep-27f, 0.0f, 0x1.e02b18p-8f, 0x1.4ae656p-16f,
     0.0f, 0.0f, 0x1.ebc12cp-52f, 0.0f, 0.0f, 0x1.36dc2ep-114f, 0x1.da3818p-51f, 0.0f,
     0.0f, 0.0f, 0x1.2c32aap-119f, 0.0f, 0x1.29a0eep-113f, 0.0f, 0x1.bee406p-53f,
     0x1.4afdeep-23f, 0x1.313594p-110f, 0.0f, 0x1.72421ap-35f, 0x1.0a1ae6p-74f, 0.0f,
     0.0f, 0x1.fad9e8p-100f, 0x1.aacc82p-45f, 0.0f, 0x1.927f7ap-49f, 0.0f,
     0x1.86ca1p-89f, 0x1.43eb46p-124f, 0x1.9aede4p-44f, 0.0f, 0x1.176c04p-55f,
     0x1.2926e8p-6f, 0x1.4a62d8p-19f, 0x1.96cab8p-17f, 0.0f, 0x1.7a786ap-8f,
     0x1.7e02c4p-28f, 0x1.8a180cp-90f, 0x1.6efb5ap-123f, 0x1.f5336cp-25f, 0.0f,
     0x1.bf189ap-112f, 0x1.6113e2p-76f, 0x1p0f, 0x1.8a0ff2p-3f, 0x1.d136a4p-78f, 0.0f,
     0x1.9606d4p-123f, 0.0f, 0.0f, 0.0f, 0x1.20bfdep-103f, 0.0f, 0x1.89ebacp-26f,
     0.0f, 0.0f, 0x1.f8ff82p-86f, 0x1.6f0ccep-88f, 0.0f, 0x1.6b6b8cp-26f,
     0x1.52faa8p-58f, 0x1.250452p-90f, 0.0f, 0x1.4d6adcp-120f, 0x1.004916p-69f, 0.0f,
     0.0f, 0x1.15ce0ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3023ecp-58f, 0.0f, 0.0f,
     0.0f, 0x1.849404p-50f, 0.0f, 0x1.b415d2p-105f, 0x1.39a77ep-18f, 0.0f,
     0x1.78b708p-78f, 0.0f, 0.0f, 0x1.f4a2bep-99f, 0.0f, 0x1.1279ccp-32f, 0.0f, 0.0f,
     0.0f, 0x1.a07f7ap-61f, 0x1.fc0598p-57f, 0x1.2ec20cp-14f, 0x1.6db174p-94f,
     0x1.a0e6eap-111f, 0x1.a478aap-16f, 0.0f, 0x1.ef8f3ap-86f, 0x1.44963p-51f,
     0x1.776d58p-80f, 0.0f, 0.0f, 0.0f, 0x1.90c69p-7f, 0.0f, 0x1.83123cp-24f, 0.0f,
     0x1.f831eep-74f, 0x1.6b7472p-51f, 0x1.85351cp-63f, 0x1.8b9a4ep-59f, 0.0f,
     0x1.811f6cp-10f, 0x1.3c6094p-63f, 0.0f, 0.0f, 0.0f, 0x1.28e916p-34f,
     0x1.e02fdap-61f, 0x1.a1e93p-55f, 0x1.ec0104p-8f, 0x1.bf8094p-36f, 0.0f,
     0x1.afa76ep-23f, 0.0f, 0.0f, 0x1.a5002ap-35f, 0.0f, 0.0f, 0x1.06d1ep-72f,
     0x1.007bdp-23f, 0.0f, 0x1.54978ep-85f, 0x1.1e52f4p-113f, 0x1.299b0cp-45f, 0.0f,
     0x1.6f32eap-123f, 0x1.5fdffp-93f, 0.0f, 0x1.edf32ep-102f, 0.0f, 0x1.bf6b9ap-21f,
     0.0f, 0.0f, 0.0f, 0x1.4e1b4cp-49f, 0x1.e7492ep-76f, 0.0f, 0x1.95051p-16f, 0.0f,
     0.0f, 0x1.c95e96p-8f, 0.0f, 0x1.2c4c14p-83f, 0.0f, 0.0f, 0x1.bf59d6p-73f,
     0x1.f59a2cp-98f, 0x1.358414p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec4b7p-103f,
     0x1.8088e4p-109f, 0.0f, 0x1.6b28ap-20f, 0x1.9b0636p-22f, 0x1.902cf4p-92f, 0.0f,
     0.0f, 0x1.185e4ep-84f, 0.0f, 0x1.1aad26p-114f, 0x1.73edf8p-126f, 0.0f,
     0x1.726b4cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d49e94p-59f, 0.0f, 0.0f,
     0x1.5818bcp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3512dep-100f, 0.0f, 0.0f,
     0x1.a82828p-27f, 0.0f, 0x1.d2332cp-68f, 0.0f, 0x1.e19722p-56f, 0x1.a6bb5ep-117f,
     0x1.cb9836p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.de49a4p-9f, 0.0f,
     0.0f, 0x1.d9c35cp-24f, 0x1.25ee46p-12f, 0.0f, 0x1.5b9b8ap-118f, 0x1.0bae82p-66f,
     0x1.cf6fdep-62f, 0x1.541b4ap-49f, 0x1.271c1ep-65f, 0.0f, 0x1.bcb5eap-72f,
     0x1.3bacf8p-57f, 0.0f, 0.0f, 0.0f, 0x1.d5203p-69f, 0.0f, 0.0f, 0x1.ef8c7cp-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa6aaep-104f, 0x1.d4119p-56f, 0x1.187478p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebe69p-13f, 0x1.b71ff4p-103f, 0x1.c67fb6p-88f,
     0x1.88ef6ap-84f, 0x1.093358p-122f, 0.0f, 0.0f, 0x1.626582p-57f, 0.0f,
     0x1.190638p-79f, 0.0f, 0x1.926b24p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.797d06p-82f,
     0x1.d553f4p-62f, 0x1.39c85cp-88f, 0x1.b44576p-72f, 0x1.c55c68p-30f,
     0x1.f7721ap-83f, 0.0f, 0x1.a7bacap-111f, 0.0f, 0.0f, 0.0f, 0x1.7cec34p-102f,
     0.0f, 0x1.3dbff2p-93f, 0x1.7a044ap-29f, 0.0f, 0.0f, 0.0f, 0x1.d77ab4p-25f, 0.0f,
     0x1.0510fp-53f, 0.0f, 0.0f, 0x1.fb14ccp-99f, 0x1.3e878cp-67f, 0x1p0f,
     0x1.f628fep-125f, 0x1.e102f4p-15f, 0.0f, 0x1.3e2822p-71f, 0x1.ff673ep-73f,
     0x1.671176p-110f, 0.0f, 0x1.bf7398p-49f, 0x1.a8a2e6p-114f, 0.0f, 0.0f,
     0x1.427676p-63f, 0.0f, 0x1.5303eep-48f, 0.0f, 0x1.9b1aa4p-96f, 0.0f, 0.0f, 0.0f,
     0x1.ec2504p-1f, 0x1.23c23p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d08ac2p-7f,
     0.0f, 0x1.1e7fd4p-43f, 0.0f, 0.0f, 0x1.1d50fcp-27f, 0x1.76c0b6p-68f, 0.0f, 0.0f,
     0x1.7b712cp-56f, 0x1.43bcdp-35f, 0x1.2fb366p-57f, 0x1.1690c2p-97f,
     0x1.726a58p-89f, 0x1p0f, 0x1.f78878p-123f, 0x1.8a1c82p-28f, 0.0f, 0.0f, 0.0f,
     0x1.b10b56p-85f, 0.0f, 0.0f, 0.0f, 0x1.adf5b2p-59f, 0.0f, 0.0f, 0.0f,
     0x1.10100ap-88f, 0x1.70f9e8p-69f, 0x1.a29bbep-124f, 0x1.59b3cp-3f,
     0x1.b3135ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67850ep-49f, 0.0f, 0.0f,
     0x1.580752p-96f, 0.0f, 0.0f, 0x1.79c9dep-99f, 0x1.ffbaa6p-27f, 0.0f,
     0x1.93ae58p-4f, 0x1.f36e86p-7f, 0x1.2e7fb2p-5f, 0.0f, 0x1.700886p-118f, 0.0f,
     0.0f, 0x1.4c33ep-63f, 0x1.6e389cp-33f, 0x1.3cc68p-23f, 0x1.9110dep-22f, 0.0f,
     0x1.76a378p-85f, 0.0f, 0x1.29f6c6p-52f, 0x1.352bcap-109f, 0x1.372a04p-120f, 0.0f,
     0x1.51d6dep-91f, 0x1.b943e2p-40f, 0x1.253918p-41f, 0x1.64533ep-33f,
     0x1.7d641p-71f, 0x1.ec08bp-41f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.758e2ap-77f, 0.0f,
     0x1.8abdap-79f, 0.0f, 0.0f, 0x1.fb084p-93f, 0x1.bb7eeep-1f, 0.0f, 0x1.9e193p-30f,
     0x1.9403p-42f, 0x1.e19784p-69f, 0x1.21d936p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.109994p-49f, 0.0f, 0x1.61e8f2p-23f, 0x1.d6dbdap-16f, 0.0f, 0x1.368f96p-83f,
     0.0f, 0x1.d0e9d8p-50f, 0.0f, 0.0f, 0x1.8d6a58p-64f, 0.0f, 0x1.5b7204p-86f,
     0x1.8f7316p-53f, 0.0f, 0.0f, 0.0f, 0x1.3d2ca4p-100f, 0.0f, 0.0f, 0x1.54e474p-40f,
     0x1.ae62fcp-95f, 0.0f, 0x1.a930fep-70f, 0.0f, 0x1.764fdp-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.818606p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.503dfap-70f, 0.0f, 0.0f, 0.0f, 0x1.b178dep-96f, 0.0f, 0.0f, 0x1.9e016p-94f,
     0.0f, 0x1.482792p-5f, 0.0f, 0x1.e7799ep-120f, 0.0f, 0x1.79242ep-17f, 0.0f, 0.0f,
     0.0f, 0x1.61df72p-115f, 0x1.b86c0ap-35f, 0x1.a0ee42p-25f, 0x1.f80308p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.125096p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5df92p-101f, 0x1.69e976p-109f, 0x1.6eda6ep-1f, 0.0f, 0.0f, 0x1.b8a07cp-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.738eap-106f, 0.0f, 0x1.63b0dap-67f, 0.0f, 0x1.1967ap-70f, 0x1.47770ep-70f,
     0x1.610b6cp-113f, 0.0f, 0.0f, 0x1.68d3fp-63f, 0.0f, 0.0f, 0x1.54397p-86f, 0.0f,
     0x1.45bc3ap-36f, 0.0f, 0.0f, 0x1.b6bec2p-38f, 0x1.9ccaacp-106f, 0x1.943068p-97f,
     0.0f, 0.0f, 0.0f, 0x1.871b7ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aeee36p-9f,
     0x1.1960dp-70f, 0.0f, 0.0f, 0x1.dc3922p-3f, 0x1.346956p-119f, 0x1.4adde2p-85f,
     0x1p0f, 0.0f, 0.0f, 0x1.295a42p-60f, 0x1.36a726p-74f, 0x1.cfaf1p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9e7b66p-85f, 0.0f, 0x1.8eba84p-26f, 0x1.5afc32p-104f,
     0x1.b16e32p-16f, 0x1.3b707cp-60f, 0.0f, 0.0f, 0x1.d33378p-101f, 0x1.c94682p-58f,
     0.0f, 0x1.f40d8ap-68f, 0x1.0b6e5p-15f, 0.0f, 0.0f, 0x1.a53a5ep-107f, 0.0f,
     0x1.52467cp-87f, 0.0f, 0.0f, 0.0f, 0x1.aeaa4p-114f, 0x1.8719ccp-58f, 0.0f,
     0x1.aaf8c4p-64f, 0x1.802404p-62f, 0x1.3dd202p-28f, 0x1.c86686p-50f,
     0x1.587cc2p-120f, 0x1.1265ccp-87f, 0x1.bddecap-51f, 0.0f, 0x1.43500ap-75f, 0.0f,
     0x1.d4f02cp-63f, 0.0f, 0.0f, 0x1.d8ef08p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ec3ep-87f, 0x1.eb3514p-76f, 0.0f, 0x1.f0b8d4p-50f, 0x1.733316p-20f,
     0x1.e53f56p-108f, 0.0f, 0.0f, 0x1.69a84ep-106f, 0x1.70e6fp-65f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_tanf4_u10avx2128(tmp0);
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
    printf("Sleef_tanf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
