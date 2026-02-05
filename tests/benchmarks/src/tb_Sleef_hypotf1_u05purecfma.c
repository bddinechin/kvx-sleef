/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf1_u05purecfma.c --function \
 *     Sleef_hypotf1_u05purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     kv3
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
     0x1.894782p-29f, 0.0f, 0x1.775058p-48f, 0x1.795fa4p-77f, 0.0f, 0.0f,
     0x1.6102b6p-18f, 0x1.4d4e52p-58f, 0x1.0cdcf4p-74f, 0x1.8cf564p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.59c12p-101f, 0.0f, 0x1.a1bb0cp-13f, 0x1.f7fe9p-73f, 0.0f,
     0x1.8e0044p-41f, 0.0f, 0x1.c3efb8p-104f, 0.0f, 0.0f, 0x1.745d12p-36f,
     0x1.3603cep-50f, 0.0f, 0x1.a61bcep-1f, 0.0f, 0.0f, 0x1.5efaccp-28f, 0.0f,
     0x1.d49376p-35f, 0.0f, 0.0f, 0x1.d146cap-101f, 0x1.0428bcp-52f, 0x1.add746p-21f,
     0.0f, 0.0f, 0.0f, 0x1.6dc408p-58f, 0.0f, 0x1.9674bcp-117f, 0x1.34e406p-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80bd46p-77f, 0x1.9148fep-53f,
     0x1.85a6aap-26f, 0x1.58d2fap-103f, 0.0f, 0.0f, 0x1.1f63d4p-36f, 0.0f, 0.0f,
     0x1.63b58ap-52f, 0x1.abde2ap-108f, 0x1.c34c02p-83f, 0.0f, 0x1.708496p-82f, 0.0f,
     0x1.9c70f2p-121f, 0.0f, 0x1.c561bap-120f, 0x1.4023c6p-12f, 0x1.a62a68p-32f, 0.0f,
     0.0f, 0x1.504ec2p-27f, 0.0f, 0.0f, 0x1.1fd8fep-108f, 0.0f, 0x1.8b8786p-30f,
     0x1.07b082p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e41f9cp-40f, 0.0f, 0x1.9da7d2p-19f, 0x1.c345eep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0f884p-112f, 0.0f, 0x1.e83782p-41f, 0.0f, 0.0f, 0x1.c3d32cp-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.feb9b2p-97f, 0x1.092d8p-118f, 0x1.ca538ep-22f, 0x1.adc80cp-85f,
     0x1.67ap-23f, 0x1.da4c7ep-71f, 0x1.4f82b2p-89f, 0.0f, 0x1.14e288p-71f, 0.0f,
     0.0f, 0x1.70c6f4p-2f, 0x1.52366cp-64f, 0x1.0e9cdp-2f, 0x1.ccf976p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acf318p-31f, 0x1.9b8dcep-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2051p-72f, 0.0f, 0.0f, 0x1.e921eep-93f, 0.0f, 0x1.5f1f1ep-38f, 0.0f,
     0.0f, 0x1.3b93dp-10f, 0.0f, 0.0f, 0x1.6f612ep-20f, 0x1.d307bap-91f,
     0x1.b708b6p-16f, 0.0f, 0x1.428ce2p-13f, 0x1.6fc622p-122f, 0x1.c8c156p-66f,
     0x1.36184ep-32f, 0x1.5c2934p-75f, 0x1.fcf946p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.660e78p-99f, 0x1.8f788ap-90f, 0.0f, 0.0f, 0.0f, 0x1.ac8088p-13f,
     0x1.ec74fep-125f, 0x1.55f40ap-9f, 0x1.87251p-17f, 0.0f, 0.0f, 0x1.7faaf6p-103f,
     0.0f, 0x1.527feap-60f, 0x1.176dap-67f, 0.0f, 0.0f, 0x1.633d72p-101f,
     0x1.4ca0bcp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.201096p-14f, 0x1.84fab4p-41f, 0.0f,
     0.0f, 0x1.5ac2b4p-19f, 0.0f, 0x1.7809dp-87f, 0x1.ae620cp-10f, 0.0f,
     0x1.372e2p-91f, 0x1.5ea728p-100f, 0.0f, 0.0f, 0x1.a6424p-46f, 0x1.82e39p-112f,
     0.0f, 0x1.aa092p-47f, 0.0f, 0x1.bcdfdcp-113f, 0x1.5abc7ap-23f, 0x1.49b2aep-58f,
     0x1.27192ep-115f, 0.0f, 0x1.ea94ap-34f, 0x1.9eb906p-69f, 0.0f, 0.0f,
     0x1.ee6df8p-19f, 0.0f, 0.0f, 0x1.a1bd72p-96f, 0.0f, 0.0f, 0.0f, 0x1.a2fd3cp-35f,
     0x1.fb9b5ap-52f, 0.0f, 0x1.d48df2p-28f, 0x1.b9eb8ep-89f, 0x1.cb835cp-15f,
     0x1.021566p-119f, 0.0f, 0x1.0e3b2ap-35f, 0.0f, 0x1.51f9a6p-109f, 0.0f,
     0x1.6331dp-113f, 0x1.23db98p-28f, 0x1.af84d6p-61f, 0x1.f9ae14p-62f,
     0x1.027714p-29f, 0.0f, 0x1.0e097cp-17f, 0.0f, 0.0f, 0.0f, 0x1.6c2d6p-34f,
     0x1.28534ap-110f, 0x1.73e07p-88f, 0x1.3a684p-66f, 0x1.d6ade8p-77f,
     0x1.92f15ap-92f, 0x1.e2e9bp-4f, 0.0f, 0x1.760066p-1f, 0x1.6f1e6ap-80f, 0.0f,
     0x1.284144p-52f, 0x1.b3890cp-17f, 0.0f, 0x1.a7a4bep-122f, 0.0f, 0.0f,
     0x1.85354p-7f, 0x1.b3e35ep-98f, 0x1.c7bd22p-12f, 0.0f, 0x1.6d8be8p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92cadep-73f, 0x1.3591f2p-115f, 0x1.4e691cp-94f, 0x1.cde258p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b221e4p-66f, 0x1.b50c4cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.6424c6p-32f, 0.0f, 0.0f, 0.0f, 0x1.813ad8p-92f, 0.0f, 0x1.427734p-23f, 0.0f,
     0x1.aaf016p-52f, 0.0f, 0.0f, 0.0f, 0x1.21e06ep-65f, 0x1.f045eap-79f,
     0x1.87f1eap-53f, 0x1.b4fb46p-9f, 0.0f, 0.0f, 0x1.4616e4p-76f, 0x1.1a9bf4p-57f,
     0x1.57391cp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.397a12p-21f, 0.0f,
     0x1.0852f4p-42f, 0.0f, 0.0f, 0.0f, 0x1.0a8612p-103f, 0.0f, 0.0f, 0x1.9b0bd4p-35f,
     0x1.624af6p-28f, 0x1.0a44dep-118f, 0x1.bdf20ap-110f, 0.0f, 0x1.02c2f4p-62f,
     0x1.e89e22p-64f, 0.0f, 0.0f, 0x1.ca5ec6p-89f, 0.0f, 0x1.31b9eap-73f,
     0x1.44c1ap-64f, 0.0f, 0.0f, 0x1.a231fap-85f, 0x1.8f0deep-124f, 0x1.292a34p-90f,
     0x1.d01d94p-117f, 0.0f, 0x1.a096bp-86f, 0.0f, 0.0f, 0x1.11276ap-105f, 0.0f,
     0x1.7830dp-60f, 0x1.1edbbp-19f, 0x1.1f518cp-45f, 0.0f, 0x1.10d6d6p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e0a26p-79f, 0.0f, 0.0f,
     0x1.9e8acp-28f, 0.0f, 0.0f, 0.0f, 0x1.bf9058p-56f, 0x1.4b52a8p-46f,
     0x1.88e294p-126f, 0x1.e23726p-120f, 0x1.c10174p-14f, 0.0f, 0x1.170156p-53f,
     0x1.2e33b8p-42f, 0.0f, 0x1.3a17fp-13f, 0.0f, 0x1.aeab2ap-31f, 0x1.cbdbf6p-101f,
     0.0f, 0.0f, 0.0f, 0x1.5e21bap-3f, 0.0f, 0.0f, 0x1.875c2ep-75f, 0x1.46416ap-24f,
     0.0f, 0x1.5a5b26p-25f, 0x1.465fa6p-15f, 0.0f, 0.0f, 0x1.f01a2ap-98f,
     0x1.460dep-13f, 0.0f, 0.0f, 0x1.37dbe6p-121f, 0.0f, 0x1.58db9p-48f,
     0x1.c71928p-20f, 0x1.5745ecp-93f, 0x1.82f51p-57f, 0x1.0362a8p-19f,
     0x1.c043ccp-120f, 0x1.dc771ep-4f, 0.0f, 0x1.58a802p-96f, 0x1.863368p-6f, 0.0f,
     0x1.ee4db6p-101f, 0.0f, 0x1.d442eap-74f, 0x1.218a96p-19f, 0.0f, 0x1.a9a7c4p-1f,
     0.0f, 0.0f, 0x1.69fdf8p-66f, 0.0f, 0x1.a9d632p-23f, 0x1.806acap-38f, 0.0f, 0.0f,
     0.0f, 0x1.3d807ep-49f, 0.0f, 0x1.945576p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.320a3p-81f, 0.0f, 0x1.9b1464p-90f,
     0x1.3c90f4p-26f, 0.0f, 0.0f, 0x1.21ff98p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.71e6d4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f9f7p-113f,
     0x1.a620d6p-106f, 0.0f, 0.0f, 0.0f, 0x1.85717cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f93a4p-52f, 0.0f, 0.0f, 0x1.b34204p-2f, 0x1.2e376ap-89f, 0x1.29df66p-77f,
     0x1.3634f2p-50f, 0x1.4c7adap-31f, 0.0f, 0x1.530544p-43f, 0x1.e66fb8p-63f,
     0x1.64cceap-95f, 0x1.726a9p-19f, 0.0f, 0x1.1699c8p-87f, 0x1.f5d38p-84f,
     0x1.e72498p-33f, 0x1.7dff68p-28f, 0x1.c1999p-25f, 0.0f, 0.0f, 0x1.0267bep-8f,
     0x1.3f52a2p-78f, 0.0f, 0x1.407a9cp-105f, 0x1.582966p-9f, 0.0f, 0.0f,
     0x1.d0ac2ap-49f, 0x1.945bcep-31f, 0.0f, 0x1.08d286p-110f, 0.0f, 0x1.240becp-14f,
     0x1.c79214p-21f, 0.0f, 0x1.d81baep-116f, 0x1.e9612p-116f, 0.0f, 0x1.7d29c8p-16f,
     0.0f, 0x1.d956acp-16f, 0.0f, 0x1.e504dcp-37f, 0.0f, 0.0f, 0x1.d07dd4p-36f,
     0x1.013b48p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c16a38p-104f, 0x1.618ac8p-26f,
     0x1.ad8ae8p-33f, 0.0f, 0.0f, 0x1.9b805cp-17f, 0.0f, 0x1.737a3cp-31f,
     0x1.c031eep-59f, 0x1.7bf8fcp-7f, 0.0f, 0.0f, 0x1.4fc706p-54f, 0.0f,
     0x1.756f74p-12f, 0x1.ee8e9p-73f, 0.0f, 0x1.2664c4p-53f, 0x1.a19dc2p-2f,
     0x1.2913dp-85f, 0x1.ac50e2p-65f, 0x1.73a7c4p-32f, 0x1.6d9ec6p-22f,
     0x1.6f1568p-72f, 0x1.c25dcep-51f, 0x1.5bad6cp-46f, 0x1.5f3d8ep-89f,
     0x1.17e5dep-1f, 0.0f, 0x1.a82798p-109f, 0.0f, 0.0f, 0x1.a4e814p-104f, 0.0f, 0.0f,
     0x1.7bbfd8p-53f, 0.0f, 0.0f, 0x1.906c52p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac3058p-8f, 0x1.bb2678p-112f, 0x1.87a9f4p-60f, 0.0f, 0x1.c4a68ap-31f,
     0x1.a27edap-113f, 0x1.b1a4b2p-94f, 0.0f, 0.0f, 0x1.d567c6p-72f, 0x1.d89e96p-109f,
     0.0f, 0.0f, 0.0f, 0x1.592f8ap-101f, 0x1.00f9a4p-122f, 0x1.a1d616p-42f, 0.0f,
     0x1.ccb884p-101f, 0x1.cf38ap-98f, 0.0f, 0.0f, 0x1.308b94p-69f, 0.0f, 0.0f, 0.0f,
     0x1.c97f82p-65f, 0.0f, 0x1.639d54p-96f, 0x1.227468p-120f, 0x1.295214p-20f, 0.0f,
     0x1.634f48p-34f, 0.0f, 0.0f, 0x1.7e905p-38f, 0x1.7d38f8p-48f, 0x1.c14254p-52f,
     0.0f, 0x1.e1cdfcp-9f, 0.0f, 0x1.2570bap-27f, 0x1.72004cp-18f, 0x1.9a4586p-82f,
     0x1.abd69cp-27f, 0x1.62ebacp-80f, 0x1.863c08p-114f, 0.0f, 0.0f, 0x1.69a23ap-97f,
     0x1.60fec2p-107f, 0.0f, 0.0f, 0x1.cca9dp-121f, 0.0f, 0.0f, 0x1.206e9p-79f, 0.0f,
     0.0f, 0x1.e9188ap-125f, 0.0f, 0.0f, 0x1.1230b4p-126f, 0x1.10c1cp-78f,
     0x1.e30cc8p-19f, 0x1.9924bcp-32f, 0.0f, 0x1.651c22p-20f, 0.0f, 0x1.a14e1p-12f,
     0x1.65cfcep-42f, 0x1.1c484p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f24402p-74f,
     0x1.e544bep-18f, 0.0f, 0.0f, 0.0f, 0x1.d06a64p-35f, 0x1.8a6b9cp-28f, 0.0f,
     0x1.99565p-14f, 0x1.bbdef2p-125f, 0x1.a63992p-73f, 0.0f, 0.0f, 0.0f,
     0x1.36129ep-121f, 0x1.f7bce4p-5f, 0x1.b6abb8p-88f, 0x1.7b99bap-115f, 0.0f,
     0x1.91ffecp-126f, 0x1.4020d4p-109f, 0x1.eae676p-21f, 0.0f, 0x1.b753a4p-86f, 0.0f,
     0.0f, 0x1.70cc2cp-100f, 0.0f, 0x1.63b752p-96f, 0x1.89113ep-103f, 0x1.80aa52p-28f,
     0.0f, 0.0f, 0x1.afc85p-95f, 0.0f, 0.0f, 0.0f, 0x1.af01bcp-106f, 0x1.2c7e48p-31f,
     0x1.0bd184p-31f, 0x1.f3a3ap-122f, 0x1.fdeee8p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a3ea18p-9f, 0x1.06c6fap-12f, 0x1.8a59a8p-72f, 0x1.e8abf2p-116f, 0.0f,
     0x1.40e9eep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.125dd4p-71f, 0x1.4d61dcp-96f,
     0x1.277e74p-34f, 0x1.c2d958p-81f, 0x1.a8352p-69f, 0.0f, 0.0f, 0x1.203dd2p-70f,
     0x1.f7cf6ap-89f, 0.0f, 0x1.32a01p-114f, 0.0f, 0x1.928524p-31f, 0.0f, 0.0f,
     0x1.6ae4b2p-26f, 0.0f, 0x1.7407e8p-26f, 0.0f, 0x1.2814f2p-91f, 0x1.94175p-38f,
     0x1.c817dp-21f, 0x1.045004p-47f, 0.0f, 0.0f, 0x1.cbd314p-94f, 0.0f,
     0x1.a49e6cp-99f, 0x1.8238c4p-126f, 0x1.ea9e0ep-37f, 0.0f, 0x1.976aa4p-38f, 0.0f,
     0.0f, 0x1.c4900ap-102f, 0x1.8f9852p-56f, 0.0f, 0x1.ce5fdp-101f, 0.0f, 0.0f,
     0x1.0599a4p-11f, 0x1.a896b8p-20f, 0x1.bb76cap-47f, 0x1.889dc2p-83f,
     0x1.ee9fcp-114f, 0x1.40068ap-22f, 0.0f, 0x1.5c8a72p-10f, 0.0f, 0x1.c6af32p-9f,
     0x1.d8dc34p-6f, 0x1.a8bcb4p-91f, 0x1.44eceep-26f, 0x1.c7642ap-22f, 0.0f, 0.0f,
     0.0f, 0x1.5d5186p-48f, 0x1.553344p-83f, 0.0f, 0.0f, 0x1.6d345cp-7f, 0.0f, 0.0f,
     0x1.e7a458p-1f, 0x1.c180a4p-7f, 0.0f, 0.0f, 0x1.7c57c6p-19f, 0x1.0af918p-73f,
     0x1.418832p-89f, 0x1.1d0d94p-5f, 0x1.57ae9cp-124f, 0.0f, 0.0f, 0x1.33b44cp-6f,
     0x1.e6437ep-24f, 0x1.482bcap-1f, 0.0f, 0x1.bdff58p-26f, 0x1.40ac3p-103f, 0.0f,
     0x1.bc7758p-2f, 0x1.86abp-64f, 0.0f, 0x1.cbaadap-63f, 0x1.cbc10cp-7f,
     0x1.e9ea36p-35f, 0.0f, 0.0f, 0.0f, 0x1.2c5834p-105f, 0x1.604c68p-88f, 0.0f,
     0x1.1c6e96p-103f, 0.0f, 0x1.a90f18p-51f, 0x1.ec878ap-48f, 0x1.2c8b5ap-11f, 0.0f,
     0.0f, 0x1.899bfcp-20f, 0x1.2b4954p-21f, 0x1.3d6526p-48f, 0x1.7f77fp-75f, 0.0f,
     0x1.9d7896p-125f, 0x1.f7373ep-102f, 0.0f, 0x1.750544p-21f, 0.0f, 0.0f,
     0x1.af643p-63f, 0.0f, 0x1.deabf2p-92f, 0.0f, 0x1.8b329ep-10f, 0.0f, 0.0f,
     0x1.8fc86cp-108f, 0x1.52a272p-5f, 0.0f, 0x1.e202bp-63f, 0x1.40de52p-47f,
     0x1.c653f8p-90f, 0.0f, 0x1.e6e74ep-30f, 0x1.0731dcp-28f, 0x1.d1173ap-42f, 0.0f,
     0.0f, 0.0f, 0x1.dd1444p-102f, 0x1.3f7efap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37e026p-76f, 0x1.6ad7aep-121f, 0x1.f3730ep-98f, 0x1.8f5e96p-34f,
     0x1.200c98p-4f, 0x1.17479p-68f, 0x1.fef778p-108f, 0x1.896dbcp-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c15f0ap-14f, 0x1.db68dep-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.895368p-57f, 0x1.db0ap-116f, 0.0f, 0.0f, 0.0f, 0x1.dcd734p-16f,
     0x1.0176dcp-122f, 0.0f, 0x1.34ac38p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c3e1ap-112f, 0x1.e7aedcp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d656f4p-43f,
     0x1.d2b6b4p-49f, 0x1.596b72p-103f, 0x1.d28206p-34f, 0.0f, 0x1.23333p-33f, 0.0f,
     0x1.303452p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91d02cp-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00b62ap-60f, 0x1.fd9c08p-48f, 0.0f, 0x1.52767ap-2f, 0.0f, 0x1.79b15p-40f,
     0x1.87e58p-123f, 0x1.8f3316p-49f, 0.0f, 0x1.8599cp-45f, 0x1.d1e55cp-75f, 0.0f,
     0.0f, 0x1.1b5b24p-41f, 0x1.ebab0ap-104f, 0.0f, 0x1.f407d6p-37f, 0x1.1122a2p-99f,
     0x1.556cdap-117f, 0.0f, 0.0f, 0x1.ce171ap-54f, 0.0f, 0x1.8509aep-37f, 0.0f, 0.0f,
     0x1.401ebap-108f, 0.0f, 0.0f, 0x1.3415fap-12f, 0x1.d8b3d4p-98f, 0x1.fa87eap-94f,
     0x1.eeab9ep-61f, 0x1.48aad4p-56f, 0x1.61ae3ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.386fe6p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fab9bp-47f, 0x1.369abcp-45f,
     0x1.11517ep-3f, 0.0f, 0.0f, 0.0f, 0x1.b397dp-6f, 0x1.315e3cp-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8f28e4p-25f, 0.0f, 0.0f, 0x1.23435ap-66f, 0x1.3520cap-18f,
     0x1.2e2638p-116f, 0.0f, 0x1.31e752p-13f, 0x1.42ed02p-67f, 0x1.3c94ecp-23f, 0.0f,
     0x1.a6c2ecp-116f, 0x1.06e87ap-86f, 0x1.aed7bcp-35f, 0x1.9927bp-28f,
     0x1.5011a8p-63f, 0.0f, 0x1.30462cp-24f, 0x1.1a0a5cp-126f, 0.0f, 0x1.ef995ap-56f,
     0.0f, 0x1.3ddcb8p-61f, 0x1.0ffe26p-88f, 0x1.ae20d6p-74f, 0.0f, 0.0f,
     0x1.a93a54p-38f, 0x1.e013a2p-25f, 0x1.8716d8p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9be6cp-90f, 0x1.96fa74p-56f, 0x1.de1768p-104f, 0x1.aa814ep-17f,
     0x1.07da52p-118f, 0.0f, 0.0f, 0x1.a0f0aap-119f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.7b83dcp-77f, 0x1.15f03p-34f, 0.0f, 0.0f, 0x1.f4419ep-84f, 0.0f,
     0x1.69c1d2p-32f, 0.0f, 0x1.ccd354p-42f, 0.0f, 0x1.4ed506p-114f, 0x1.c6776ap-13f,
     0.0f, 0.0f, 0x1.6821aep-107f, 0x1.a1731cp-14f, 0x1.03c526p-27f, 0.0f,
     0x1.8e7138p-120f, 0x1.b9317ap-4f, 0.0f, 0.0f, 0x1.a02ac4p-95f, 0.0f, 0.0f, 0.0f,
     0x1.9a06cp-124f, 0x1.a12bb6p-117f, 0.0f, 0x1.92bd42p-39f, 0.0f, 0x1.83106ep-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acc0dap-98f, 0.0f, 0x1.672e74p-66f, 0.0f, 0.0f,
     0.0f, 0x1.3cf36ap-85f, 0.0f, 0x1.660774p-104f, 0x1.0d95e4p-26f, 0.0f, 0.0f, 0.0f,
     0x1.72ee3cp-46f, 0x1.678ebep-55f, 0.0f, 0x1p0f, 0x1.13f612p-59f, 0.0f,
     0x1.62573p-56f, 0.0f, 0.0f, 0.0f, 0x1.65c658p-22f, 0x1.6547a6p-37f, 0.0f,
     0x1.81fe08p-114f, 0.0f, 0.0f, 0.0f, 0x1.53e3ap-80f, 0x1.085eb4p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.14006p-92f, 0.0f, 0.0f, 0x1.1082b8p-51f, 0.0f, 0.0f,
     0x1.9ecaaep-97f, 0.0f, 0x1.6d0d3cp-56f, 0.0f, 0.0f, 0x1.4871cep-29f, 0.0f, 0.0f,
     0.0f, 0x1.429e84p-45f, 0.0f, 0.0f, 0x1.781f54p-2f, 0.0f, 0.0f, 0.0f,
     0x1.65e0d4p-114f, 0.0f, 0x1.b703a8p-14f, 0x1.5abe3cp-79f, 0x1.f7053cp-98f, 0.0f,
     0x1.71669ep-11f, 0x1.4e7776p-13f, 0.0f, 0x1.85d7b8p-24f, 0x1.9c3a48p-101f,
     0x1.faa0ep-65f, 0x1.c345a4p-16f, 0x1.bc4042p-52f, 0.0f, 0.0f, 0x1.7ca418p-119f,
     0.0f, 0x1.a3a0c2p-39f, 0.0f, 0.0f, 0x1.452dp-50f, 0x1.1fc374p-83f,
     0x1.845d76p-19f, 0x1.82fc3ap-75f, 0.0f, 0x1.27c6e2p-46f, 0.0f, 0x1.33cd8cp-40f,
     0x1.45a7e2p-15f, 0x1.21855ep-84f, 0.0f, 0.0f, 0.0f, 0x1.a6edc8p-6f,
     0x1.5e3e1cp-124f, 0.0f, 0.0f, 0.0f, 0x1.3021fp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eaa1a8p-106f, 0x1.0951acp-101f, 0x1.cd113cp-125f, 0.0f, 0.0f,
     0x1.66f866p-19f, 0.0f, 0x1.4dcadp-45f, 0x1.3a7bb2p-82f, 0.0f, 0x1.04c54cp-16f,
     0x1.c0fba6p-48f, 0.0f, 0.0f, 0x1.b81b3ep-121f, 0.0f, 0x1.22df2cp-77f, 0.0f, 0.0f,
     0x1.0de736p-65f, 0.0f, 0.0f, 0.0f, 0x1.03e166p-9f, 0.0f, 0.0f, 0.0f,
     0x1.f11cbcp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.426d76p-55f,
     0.0f, 0.0f, 0x1.d09e7p-115f, 0x1.4ce432p-65f, 0.0f, 0.0f, 0x1.760e02p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7560c4p-15f, 0x1.c8f878p-25f, 0x1.3803bep-109f, 0.0f,
     0x1.07ff2ap-86f, 0x1.6b7216p-47f, 0.0f, 0.0f, 0x1.34a56ep-87f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.75937ep-82f, 0.0f, 0x1.2f2f7cp-31f, 0.0f, 0x1.e59fccp-125f, 0.0f,
     0x1.13f522p-51f, 0.0f, 0x1.9aa31ep-100f, 0x1.930d42p-37f, 0x1.a7f666p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b4d32cp-30f, 0.0f, 0x1.9b296ep-98f, 0x1.d4180cp-1f,
     0x1.f2e3e6p-122f, 0.0f, 0x1.7c486ep-37f, 0.0f, 0.0f, 0.0f, 0x1.ab7d2p-44f,
     0x1.111bfap-87f, 0.0f, 0x1.a3d2dep-97f, 0x1.e7d45ap-103f, 0.0f, 0x1.820b24p-98f,
     0.0f, 0x1.039b7cp-12f, 0x1.92597cp-105f, 0x1.ffd428p-15f, 0.0f, 0x1.7d2704p-19f,
     0.0f, 0x1.1e62a4p-52f, 0.0f, 0x1.fdfbf4p-21f, 0x1.05dc1cp-108f, 0.0f, 0.0f,
     0x1.d86426p-112f, 0.0f, 0.0f, 0x1.ef1d52p-38f, 0.0f, 0.0f, 0x1.e963d2p-49f,
     0x1.d3db7ap-75f, 0.0f, 0x1.527984p-121f, 0x1.be4446p-23f, 0.0f, 0.0f,
     0x1.0cb576p-113f, 0x1.353decp-120f, 0x1.42c6dep-26f, 0.0f, 0.0f, 0x1.ca43bp-75f,
     0.0f, 0.0f, 0x1.45d1dap-90f, 0x1.6fa6ccp-121f, 0.0f, 0x1.f8d846p-99f,
     0x1.9274aep-113f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.69e252p-74f, 0x1.97d12p-30f,
     0x1.b34a6cp-53f, 0x1.b586d8p-105f, 0.0f, 0x1.ff087ep-14f, 0.0f, 0.0f,
     0x1.62436ap-99f, 0.0f, 0.0f, 0x1.77e0fp-89f, 0x1.4b10c4p-101f, 0.0f,
     0x1.f925dcp-32f, 0x1.d9d6ccp-30f, 0.0f, 0.0f, 0x1.633862p-38f, 0.0f, 0.0f,
     0x1.93b2dcp-17f, 0x1.ec58d8p-116f, 0x1.ba7086p-115f, 0.0f, 0.0f, 0x1.39394ap-63f,
     0.0f, 0.0f, 0.0f, 0x1.2ddf98p-57f, 0.0f, 0.0f, 0.0f, 0x1.d4b984p-64f, 0.0f,
     0x1.38c6c4p-90f, 0.0f, 0.0f, 0x1.1f829ep-109f, 0x1.aa1eap-21f, 0.0f, 0.0f,
     0x1.97ed7p-51f, 0x1.3c4232p-42f, 0.0f, 0x1.4ed6dcp-86f, 0x1.aaab48p-117f,
     0x1.b8c40cp-99f, 0x1.fc3438p-25f, 0.0f, 0.0f, 0.0f, 0x1.42e468p-16f, 0.0f,
     0x1.08f75p-35f, 0.0f, 0x1.aa8812p-82f, 0.0f, 0.0f, 0.0f, 0x1.aefd76p-88f, 0.0f,
     0.0f, 0x1.bfe992p-116f, 0x1.8057dcp-109f, 0x1.78f8cep-39f, 0x1.b681aap-113f,
     0x1.995bc8p-21f, 0x1.24cebp-66f, 0x1.c9fcd6p-37f, 0.0f, 0x1.6e1de4p-58f, 0.0f,
     0.0f, 0x1.d546c6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18a49p-77f, 0x1.75ae84p-72f,
     0.0f, 0x1.0058dep-18f, 0x1p0f, 0.0f, 0.0f, 0x1.46d592p-6f, 0.0f, 0.0f, 0.0f,
     0x1.d27b74p-126f, 0.0f, 0x1.d85ac2p-82f, 0.0f, 0x1.4e28ecp-9f, 0.0f, 0.0f,
     0x1.d7addep-56f, 0.0f, 0.0f, 0x1.7cc9a2p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6195e6p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73db32p-121f,
     0x1.5feff2p-43f, 0x1.b86ecp-46f, 0.0f, 0.0f, 0.0f, 0x1.5e8168p-46f, 0.0f, 0.0f,
     0.0f, 0x1.53f12cp-25f, 0x1.0ce924p-87f, 0.0f, 0x1.1893d4p-9f, 0.0f,
     0x1.e7f48ap-30f, 0x1.bd909ep-124f, 0x1.1342d4p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.028868p-50f, 0x1.fb6fcap-68f, 0x1.95ea8ap-79f, 0x1.a3ade8p-22f, 0.0f,
     0x1.0b3cccp-1f, 0x1.38bd76p-32f, 0.0f, 0.0f, 0.0f, 0x1.f61626p-73f,
     0x1.079252p-117f, 0.0f, 0.0f, 0x1.29da78p-106f, 0x1.70741cp-41f, 0.0f,
     0x1.194042p-97f, 0x1.acefc8p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bd81cp-7f,
     0x1.ee0bacp-118f, 0.0f, 0x1.23ec18p-4f, 0.0f, 0x1.fefbf4p-48f, 0x1.821c72p-68f,
     0x1.04380ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.725b1cp-5f, 0x1.75dbep-107f, 0.0f,
     0x1.2fea5ap-55f, 0.0f, 0.0f, 0x1.4a4feep-86f, 0.0f, 0x1.607224p-52f,
     0x1.f1d16p-77f, 0x1.4e3a36p-74f, 0.0f, 0x1.3d29e8p-88f, 0x1.504914p-56f,
     0x1.a465bep-80f, 0x1.3abe28p-29f, 0.0f, 0x1.7ac56ap-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee5174p-122f, 0x1.8b5874p-90f, 0.0f, 0x1.237904p-8f, 0x1.ceeb3p-70f,
     0x1.024934p-69f, 0x1.3163fap-73f, 0.0f, 0.0f, 0x1.8c12e4p-87f, 0.0f, 0.0f,
     0x1.0fbeb4p-66f, 0x1.8b628ep-7f, 0x1.63237ap-125f, 0x1.f67bfcp-19f,
     0x1.340084p-124f, 0x1.74059ap-10f, 0.0f, 0x1.5aac44p-120f, 0x1.aa043p-22f, 0.0f,
     0.0f, 0.0f, 0x1.27adb2p-1f, 0.0f, 0x1.b6e378p-51f, 0.0f, 0.0f, 0.0f,
     0x1.c53408p-27f, 0.0f, 0x1.ede7dp-82f, 0x1.6db1d4p-119f, 0.0f, 0.0f, 0.0f,
     0x1.35d414p-94f, 0.0f, 0x1.99f1b4p-57f, 0x1.cac96ep-2f, 0x1.d926bcp-76f,
     0x1.a5640ap-69f, 0x1.42a8ap-36f, 0.0f, 0x1.a552bp-114f, 0x1.a1f692p-60f,
     0x1.7706c6p-48f, 0x1.5f200ap-35f, 0.0f, 0.0f, 0x1.c02d92p-124f, 0.0f,
     0x1.e4cb62p-125f, 0.0f, 0.0f, 0x1.8bd092p-70f, 0x1.84fe6p-45f, 0.0f,
     0x1.658be2p-59f, 0x1.2908aap-87f, 0.0f, 0x1.fb3c54p-117f, 0x1.c0147cp-41f,
     0x1.1e1512p-88f, 0x1.1a342p-78f, 0.0f, 0.0f, 0x1.e9fb9p-73f, 0.0f, 0.0f, 0.0f,
     0x1.8ba32cp-33f, 0x1.d385c6p-111f, 0.0f, 0.0f, 0x1.48ae9cp-114f, 0.0f,
     0x1.20714ap-112f, 0x1.c27aa2p-125f, 0.0f, 0x1.3d68fep-63f, 0x1.f71a0ap-74f,
     0x1.5853aap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcda6p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be154p-87f, 0.0f, 0.0f, 0x1.886f7ap-66f, 0.0f, 0x1.f5c846p-98f, 0.0f, 0.0f,
     0x1.a171d8p-74f, 0.0f, 0.0f, 0x1.bcb9cep-82f, 0x1.b0164cp-68f, 0x1.75a51ep-49f,
     0x1.727dcp-98f, 0x1.b54a3ap-7f, 0.0f, 0.0f, 0x1.90975ep-90f, 0x1.9e7dacp-110f,
     0.0f, 0x1.ecf1c8p-119f, 0x1.4ab86ap-118f, 0x1.50a9e8p-35f, 0x1.e6a86ap-100f,
     0x1.e9fc02p-74f, 0x1.7fb822p-96f, 0x1.66c676p-101f, 0.0f, 0x1.486b7ep-7f,
     0x1.6585a8p-20f, 0.0f, 0x1.2fab3ep-43f, 0.0f, 0.0f, 0x1.b9ddfap-108f,
     0x1.86775cp-93f, 0.0f, 0.0f, 0.0f, 0x1.d3f43cp-75f, 0x1.081022p-57f, 0.0f,
     0x1.e3b2dcp-59f, 0x1.07ed16p-30f, 0.0f, 0x1.9b60fep-108f, 0x1.c3e23p-39f,
     0x1.5f6b6p-92f, 0.0f, 0.0f, 0x1.1a7db6p-74f, 0.0f, 0x1.c2933cp-19f,
     0x1.5098e2p-95f, 0.0f, 0x1.18c4c6p-69f, 0.0f, 0x1.df4cbep-37f, 0.0f, 0.0f, 0.0f,
     0x1.09c14cp-13f, 0.0f, 0.0f, 0x1.891694p-3f, 0x1.ac1692p-68f, 0x1.2d30bap-69f,
     0.0f, 0.0f, 0x1.267dc4p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db1b3ep-14f, 0.0f, 0.0f,
     0x1.e199eep-113f, 0x1.0d5cccp-73f, 0x1.a98f0ap-82f, 0x1.eeca9ap-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.53f6fap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b076b4p-52f, 0x1.e2b8e6p-92f, 0.0f, 0.0f, 0x1.8a2018p-13f, 0x1.5c6938p-117f,
     0.0f, 0x1.1fc35cp-109f, 0x1.e48aeap-65f, 0x1.682fdep-74f, 0x1.25ffa8p-52f, 0.0f,
     0.0f, 0.0f, 0x1.5cbe3cp-91f, 0.0f, 0x1.b848dcp-36f, 0x1.7779d2p-1f,
     0x1.63c304p-39f, 0.0f, 0x1.0c54fcp-46f, 0x1.7bbef6p-4f, 0.0f, 0.0f, 0.0f,
     0x1.054ea8p-118f, 0.0f, 0.0f, 0x1.3bc08ap-98f, 0x1.b3c8cap-22f, 0x1.10ca32p-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65bd32p-86f, 0x1.05a2cap-113f, 0x1.64f932p-9f,
     0x1p0f, 0.0f, 0x1.7794aap-36f, 0x1.f49b84p-32f, 0.0f, 0.0f, 0x1.300d2cp-99f,
     0x1.8962ap-20f, 0x1.3d995ap-52f, 0x1.179994p-91f, 0.0f, 0x1.627838p-38f,
     0x1.f2949p-77f, 0x1.6be5cep-29f, 0x1.f5109ep-61f, 0.0f, 0x1.5841b8p-38f,
     0x1.52f5dp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e3edap-107f, 0.0f, 0.0f,
     0x1.c28068p-46f, 0.0f, 0.0f, 0x1.12c94ap-41f, 0x1.198994p-27f, 0.0f,
     0x1.3d1e38p-73f, 0x1.9e4f2cp-45f, 0x1.7684aap-63f, 0x1.465362p-11f,
     0x1.7e0a88p-52f, 0.0f, 0.0f, 0.0f, 0x1.9da90ep-6f, 0x1.a7f866p-82f,
     0x1.bbd9a2p-120f, 0.0f, 0.0f, 0x1.9de49ep-32f, 0.0f, 0x1.fff258p-32f, 0.0f,
     0x1.66c8e4p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92ad94p-71f, 0.0f, 0.0f,
     0x1.7dc93cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb90d8p-19f, 0.0f,
     0x1.69f278p-9f, 0x1.1be87ep-43f, 0x1.cd8cf8p-79f, 0x1.a50db4p-39f, 0.0f,
     0x1.b0814ap-39f, 0.0f, 0.0f, 0x1.400f7cp-103f, 0x1.06178p-65f, 0.0f,
     0x1.d267bap-70f, 0.0f, 0x1.e135b8p-63f, 0.0f, 0x1.88074ep-2f, 0x1.2f9fc4p-42f,
     0.0f, 0x1.4ff168p-47f, 0.0f, 0.0f, 0x1.b6efaep-79f, 0x1.8776ecp-54f,
     0x1.f0c71p-90f, 0x1.3c7024p-124f, 0.0f, 0.0f, 0x1.22051cp-49f, 0.0f,
     0x1.310cfap-113f, 0.0f, 0.0f, 0.0f, 0x1.38992p-78f, 0.0f, 0x1.ee959ep-69f,
     0x1.bc44fap-79f, 0x1.0dc7f2p-30f, 0.0f, 0x1.db6f9p-35f, 0.0f, 0.0f,
     0x1.2de0cp-105f, 0x1.7c7c24p-105f, 0x1.986f86p-35f, 0.0f, 0.0f, 0.0f,
     0x1.310916p-114f, 0x1.44b5b6p-47f, 0.0f, 0x1.51c5a4p-81f, 0x1.ed969cp-121f,
     0x1.13625p-46f, 0x1.bf00e2p-94f, 0x1.da0812p-92f, 0.0f, 0.0f, 0.0f,
     0x1.822daap-83f, 0x1.0a93aap-104f, 0.0f, 0x1.63eecap-3f, 0x1.8821e4p-12f,
     0x1.80ce56p-106f, 0.0f, 0x1.5549d6p-31f, 0x1.80cfeep-109f, 0x1.87ec54p-102f,
     0.0f, 0x1.24b1c2p-104f, 0.0f, 0x1.7c2d5cp-99f, 0.0f, 0x1.4fbe38p-63f,
     0x1.f638a8p-23f, 0x1.6afccp-63f, 0x1.e2e13ap-74f, 0x1.fdc3a2p-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e537cep-124f, 0x1.cdbbe6p-98f, 0.0f, 0x1.736812p-83f,
     0x1.ecbb9p-60f, 0.0f, 0.0f, 0x1.501124p-80f, 0x1.db6d1ap-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ee032p-2f, 0x1.06dbfep-52f, 0x1.a09e26p-13f, 0x1.09267p-89f,
     0x1.ff3204p-55f, 0x1.08654p-48f, 0.0f, 0.0f, 0x1.40ce92p-122f, 0.0f, 0.0f,
     0x1.e45572p-113f, 0x1.0387bep-50f, 0.0f, 0.0f, 0x1p0f, 0x1.11e70ep-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc8b06p-21f, 0x1.4bf702p-56f, 0.0f,
     0x1.0abb14p-87f, 0x1.ef096cp-66f, 0.0f, 0.0f, 0x1.dc9ffep-5f, 0x1.75438cp-45f,
     0x1.d24c26p-70f, 0x1.f880bp-62f, 0x1.f1e9b2p-12f, 0.0f, 0.0f, 0x1.7f8566p-117f,
     0x1.ec51c8p-101f, 0.0f, 0.0f, 0x1.559cp-11f, 0.0f, 0x1.8dfba8p-118f,
     0x1.e0d81ap-33f, 0x1.ef62e4p-51f, 0x1.e3a8dp-80f, 0x1.61342ep-29f,
     0x1.b1bf1ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c509b8p-109f, 0x1.8f53e6p-8f,
     0.0f, 0x1.34a622p-32f, 0.0f, 0x1.aa8562p-76f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.187978p-75f, 0x1.776c68p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.318a9p-37f, 0.0f, 0.0f, 0x1.0b0baap-70f, 0x1.082522p-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.10f53ap-11f, 0.0f, 0x1.078422p-112f, 0.0f, 0.0f, 0x1.e9b346p-13f,
     0x1.c0e9a2p-105f, 0x1.33da24p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbbf46p-24f, 0.0f,
     0.0f, 0x1.bb4c4cp-27f, 0x1.cbe12p-124f, 0.0f, 0x1p0f, 0x1.57f588p-109f,
     0x1.2cac88p-70f, 0x1.16a258p-46f, 0x1.17842ap-5f, 0x1.8006e6p-97f,
     0x1.99cbd8p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.638db4p-117f, 0x1.d3a8acp-18f,
     0x1.7d452cp-42f, 0.0f, 0.0f, 0x1.2d1928p-107f, 0.0f, 0.0f, 0x1.a53514p-36f, 0.0f,
     0.0f, 0.0f, 0x1.2c4cfep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.132e2ap-13f,
     0x1.57f3fap-93f, 0.0f, 0.0f, 0.0f, 0x1.2c3b08p-29f, 0x1.b3eafp-7f,
     0x1.8d30bcp-112f, 0.0f, 0.0f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_hypotf1_u05purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_hypotf1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_hypotf1_u05purecfma bench acc %a\n", global_bench_acc);
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
