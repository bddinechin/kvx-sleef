/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmodf1_purecfma.c --function Sleef_fmodf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target kv3
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
     0x1.9be35p-109f, 0.0f, 0.0f, 0x1.b34e5p-64f, 0x1.516792p-86f, 0.0f,
     0x1.355492p-125f, 0x1.0e1ebp-103f, 0x1.635e48p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8141acp-105f, 0.0f, 0x1.7d05f4p-79f, 0.0f, 0.0f, 0.0f, 0x1.0ca04ap-74f, 0.0f,
     0x1.55cf9ap-49f, 0x1.cdbf0ep-4f, 0.0f, 0x1.0a4fep-52f, 0.0f, 0.0f,
     0x1.a82b98p-57f, 0.0f, 0x1.e70d0ep-60f, 0.0f, 0x1.f982d8p-76f, 0.0f, 0.0f,
     0x1.553bdp-15f, 0x1.d6afdep-65f, 0.0f, 0x1.72866ap-47f, 0.0f, 0x1.f1857p-93f,
     0.0f, 0x1.5405bp-109f, 0x1.7aeeccp-86f, 0.0f, 0x1.0c768ep-39f, 0x1.e4368p-96f,
     0.0f, 0x1.4b4082p-36f, 0.0f, 0.0f, 0x1.74e082p-110f, 0x1.6085b4p-122f, 0.0f,
     0x1.073a58p-27f, 0x1.cbd3ecp-77f, 0.0f, 0.0f, 0x1.0acb5ap-18f, 0.0f,
     0x1.442eb6p-26f, 0x1.372152p-7f, 0x1.bc437cp-123f, 0x1.83089ap-58f,
     0x1.93ca22p-21f, 0x1.0bb992p-15f, 0x1.0e51d6p-39f, 0x1.18d2ep-82f, 0.0f, 0.0f,
     0.0f, 0x1.ccb22ep-4f, 0x1.7b8a1ap-82f, 0x1.f5ade4p-48f, 0.0f, 0x1.18eca2p-65f,
     0x1.ab884p-117f, 0.0f, 0x1.ff51bep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1063ccp-52f,
     0x1.ae2ba2p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46615ep-5f, 0.0f, 0.0f,
     0x1.3c1d48p-20f, 0.0f, 0x1.86e442p-67f, 0x1.2a4216p-50f, 0.0f, 0.0f,
     0x1.a63b22p-6f, 0x1.16effcp-97f, 0.0f, 0x1.4d6804p-4f, 0x1.2db124p-34f, 0.0f,
     0.0f, 0x1.5952c4p-109f, 0.0f, 0x1.63fb52p-31f, 0.0f, 0.0f, 0x1.44345ap-43f,
     0x1.184c68p-53f, 0x1.a9705p-14f, 0x1.4f2fb2p-57f, 0x1.a3bac4p-25f, 0.0f, 0.0f,
     0.0f, 0x1.5f3838p-5f, 0x1.9adceep-64f, 0x1.7134ep-12f, 0.0f, 0x1.b433p-27f,
     0x1.f80cf4p-105f, 0x1.03b9eap-78f, 0.0f, 0x1.4e5272p-26f, 0x1.d809eap-53f,
     0x1.4f7b7ep-109f, 0x1.da9b5cp-122f, 0x1.f2c2d2p-91f, 0.0f, 0x1.b0a5fcp-103f,
     0x1.94ef86p-62f, 0.0f, 0x1.145f7ep-17f, 0x1.c428e8p-114f, 0x1.023716p-118f,
     0x1.e16914p-115f, 0.0f, 0x1.ad6f52p-4f, 0.0f, 0.0f, 0.0f, 0x1.dd0e3ap-110f, 0.0f,
     0.0f, 0x1.69fbfep-39f, 0.0f, 0.0f, 0x1.945faap-14f, 0.0f, 0.0f, 0.0f,
     0x1.ca3ce2p-11f, 0x1.ca6f84p-32f, 0x1.e90a74p-45f, 0.0f, 0.0f, 0.0f,
     0x1.1287f8p-119f, 0x1.1b23b4p-104f, 0x1.85fa6ep-57f, 0.0f, 0x1.c9795ap-54f,
     0x1.7a9e84p-11f, 0x1.42a302p-45f, 0x1.a6acdap-80f, 0.0f, 0x1.d5901ep-54f,
     0x1.8a0beap-77f, 0.0f, 0x1.ba0736p-1f, 0x1.b76624p-31f, 0.0f, 0.0f,
     0x1.7cc276p-119f, 0.0f, 0.0f, 0x1.079b02p-71f, 0.0f, 0.0f, 0.0f, 0x1.26b65p-93f,
     0x1.0322fp-121f, 0.0f, 0x1.bbf4e8p-71f, 0x1.46b7dcp-41f, 0x1.d02352p-26f,
     0x1.4f82c8p-56f, 0.0f, 0x1.e6942ap-22f, 0x1.1a22dcp-68f, 0x1.216ba6p-20f,
     0x1.9b7966p-83f, 0x1.9a264p-63f, 0x1.e37354p-101f, 0x1.060f38p-51f,
     0x1.b48118p-59f, 0.0f, 0x1.6b7312p-1f, 0x1.fa2126p-10f, 0.0f, 0x1.9d4c98p-8f,
     0x1.6fe808p-106f, 0.0f, 0x1.82fd62p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b5f58p-50f,
     0x1.604598p-31f, 0x1.c21936p-90f, 0x1.905ceap-100f, 0x1.7a6b76p-11f, 0.0f,
     0x1.2fbd74p-40f, 0.0f, 0x1.2d2d94p-101f, 0x1.ec9dacp-60f, 0x1.8fba6ep-94f,
     0x1.12f008p-123f, 0.0f, 0x1.aee9e8p-102f, 0x1.30f5c2p-8f, 0x1.1962aap-63f,
     0x1.ca105cp-71f, 0.0f, 0x1.ddfb2p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8309a8p-113f, 0.0f, 0x1.84eedcp-16f, 0x1.49c672p-106f, 0x1.85b558p-9f, 0.0f,
     0.0f, 0.0f, 0x1.b75b58p-118f, 0x1.358548p-67f, 0x1.5420e4p-85f, 0.0f,
     0x1.cca968p-54f, 0.0f, 0x1.f46acp-117f, 0.0f, 0.0f, 0.0f, 0x1.072572p-52f,
     0x1.a63744p-55f, 0x1.9b9c96p-16f, 0x1.34521p-82f, 0x1.69262ep-83f,
     0x1.b5a576p-70f, 0.0f, 0x1.792aa4p-13f, 0.0f, 0x1.cc528ep-92f, 0.0f,
     0x1.8ddc58p-22f, 0.0f, 0x1.20f63ep-57f, 0x1.af4766p-10f, 0.0f, 0x1.49411ep-70f,
     0x1.f10caap-65f, 0.0f, 0x1.44aa0cp-59f, 0.0f, 0.0f, 0x1.c35bbp-39f, 0.0f, 0.0f,
     0x1.03936cp-85f, 0.0f, 0x1.d28554p-56f, 0x1.88724cp-8f, 0x1.09c3d8p-62f, 0.0f,
     0x1.f6deacp-10f, 0.0f, 0x1.7e9a66p-95f, 0x1.31c59p-72f, 0x1.141b88p-69f,
     0x1.126efep-43f, 0x1.03eebp-96f, 0x1.82411ep-12f, 0.0f, 0x1.226a3p-26f, 0.0f,
     0.0f, 0.0f, 0x1.6b40cep-5f, 0.0f, 0x1.437aa4p-29f, 0x1.0d137p-98f, 0.0f,
     0x1.03706cp-99f, 0x1.85510ep-19f, 0x1.d65faap-40f, 0.0f, 0.0f, 0.0f,
     0x1.6c8a0cp-4f, 0x1.474b54p-112f, 0x1.7445e4p-20f, 0.0f, 0x1.311076p-66f, 0x1p0f,
     0.0f, 0x1.c14dd6p-39f, 0x1.839e96p-125f, 0x1.5d6e9p-57f, 0x1.9fcad8p-12f, 0.0f,
     0.0f, 0.0f, 0x1.9d7becp-74f, 0.0f, 0x1.33ae96p-73f, 0x1.eced5ap-117f,
     0x1.92fafp-38f, 0.0f, 0x1.67b298p-48f, 0x1.2854a6p-64f, 0.0f, 0x1.483d68p-28f,
     0.0f, 0.0f, 0x1.8a695cp-98f, 0.0f, 0.0f, 0x1.ee94d2p-20f, 0.0f, 0x1.0002e2p-98f,
     0.0f, 0.0f, 0x1.423ef2p-64f, 0.0f, 0.0f, 0x1.70195p-121f, 0x1.0940eep-53f,
     0x1.6dd5aep-5f, 0.0f, 0.0f, 0x1.ef27d8p-66f, 0.0f, 0x1.948db4p-48f, 0.0f, 0.0f,
     0.0f, 0x1.47cfeap-19f, 0.0f, 0.0f, 0x1.2d4f02p-55f, 0.0f, 0x1.44269p-111f, 0.0f,
     0x1.068dap-64f, 0.0f, 0x1.930eaap-110f, 0x1.0c4628p-36f, 0.0f, 0x1p0f,
     0x1.88e91cp-6f, 0x1.1a8686p-76f, 0.0f, 0x1.ac62a2p-112f, 0.0f, 0x1.30a39ep-41f,
     0.0f, 0.0f, 0x1.f5c07p-60f, 0x1.2dc1c4p-38f, 0.0f, 0.0f, 0x1.647e32p-81f,
     0x1.adcb44p-63f, 0x1.b9e518p-30f, 0x1.7c51acp-21f, 0x1.3039f4p-106f,
     0x1.691702p-2f, 0x1.b91a42p-59f, 0x1.84819cp-53f, 0x1.9e1874p-111f,
     0x1.182d92p-25f, 0.0f, 0.0f, 0.0f, 0x1.ce3b62p-16f, 0x1.abe56ep-12f, 0.0f,
     0x1.9bfebap-40f, 0x1.c5786ep-56f, 0x1.f6a9ep-41f, 0x1.62d8ccp-30f,
     0x1.2f73aep-8f, 0x1.dec65cp-98f, 0x1.efddeap-111f, 0x1.5a92cp-22f,
     0x1.d1c428p-58f, 0.0f, 0x1.b81ca4p-56f, 0x1.537efp-16f, 0x1.8f59fep-55f,
     0x1.beec7ap-112f, 0x1.611fd2p-97f, 0x1.a02dacp-97f, 0x1.bc92e4p-19f, 0.0f,
     0x1.af4b1ep-93f, 0.0f, 0x1.67dc3cp-106f, 0.0f, 0x1.9ffe7ep-23f, 0.0f, 0.0f, 0.0f,
     0x1.239862p-66f, 0x1.8b8cbp-116f, 0.0f, 0x1.fc3148p-76f, 0x1.c160cp-66f,
     0x1.72ce24p-88f, 0x1.6735aap-87f, 0x1.b3e93ap-110f, 0x1.2c8daap-105f,
     0x1.9a8974p-69f, 0.0f, 0x1.6a1ebep-45f, 0x1.87e6d8p-83f, 0.0f, 0x1.d97186p-68f,
     0.0f, 0x1.004856p-108f, 0x1.1c94cep-111f, 0.0f, 0x1.98e4d8p-20f, 0.0f,
     0x1.45cd74p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e78e1ap-13f, 0.0f, 0x1.c8d5f2p-124f,
     0.0f, 0.0f, 0x1.dfcee2p-124f, 0.0f, 0.0f, 0x1.044ebep-19f, 0x1.926316p-87f, 0.0f,
     0.0f, 0x1.863788p-26f, 0x1.d9d382p-23f, 0.0f, 0.0f, 0.0f, 0x1.e43facp-24f, 0.0f,
     0x1.fcf92ep-12f, 0x1.80844cp-31f, 0.0f, 0x1.af8da8p-110f, 0x1.c0e9dep-41f, 0.0f,
     0.0f, 0x1.befecep-89f, 0.0f, 0x1.2f5a5ep-99f, 0x1.b0bf14p-94f, 0x1.39caacp-60f,
     0.0f, 0x1.7ebfbcp-114f, 0x1.d763b8p-92f, 0.0f, 0x1.5502ecp-47f, 0.0f,
     0x1.9ea5bep-80f, 0.0f, 0x1.365c54p-107f, 0x1.a3612ap-47f, 0x1.fc3c84p-46f,
     0x1.2f441ap-117f, 0x1.5be62ep-62f, 0.0f, 0.0f, 0.0f, 0x1.04edf2p-110f, 0.0f,
     0.0f, 0x1.7641a2p-92f, 0.0f, 0.0f, 0.0f, 0x1.445cdp-72f, 0x1.8fca86p-65f,
     0x1.544a9ap-107f, 0x1.921254p-97f, 0x1.887aa4p-7f, 0x1.514926p-71f,
     0x1.9a843cp-87f, 0x1.3bd12ap-100f, 0x1.f97fbp-70f, 0.0f, 0x1.d5aaa2p-101f, 0.0f,
     0x1.1d9bfcp-58f, 0.0f, 0.0f, 0x1.3c549cp-71f, 0x1.c2859ep-57f, 0.0f, 0.0f,
     0x1.59c356p-51f, 0x1.2a17fp-59f, 0x1.700de2p-64f, 0x1.a80c84p-55f, 0.0f,
     0x1.3e4fd2p-64f, 0.0f, 0x1.8170fap-33f, 0x1.781a34p-59f, 0x1.92c0b8p-114f, 0.0f,
     0.0f, 0.0f, 0x1.dadd38p-31f, 0.0f, 0.0f, 0x1.8fdc3ap-84f, 0.0f, 0.0f, 0.0f,
     0x1.963684p-11f, 0.0f, 0x1.5d65e6p-3f, 0x1.87cab6p-79f, 0x1.73c75cp-41f, 0.0f,
     0.0f, 0.0f, 0x1.8327cap-66f, 0x1.bc5a04p-1f, 0.0f, 0.0f, 0.0f, 0x1.711de8p-15f,
     0.0f, 0x1.9464d8p-6f, 0x1.c4ef56p-104f, 0x1.207452p-29f, 0.0f, 0x1.f9b028p-24f,
     0x1.92855ep-52f, 0x1.7dd9dap-70f, 0.0f, 0x1.d20f24p-35f, 0x1.be628ap-19f, 0.0f,
     0x1.b25036p-88f, 0.0f, 0x1.db7872p-90f, 0x1.ee8a2cp-89f, 0.0f, 0x1.ebb12ep-66f,
     0.0f, 0x1.a35c02p-4f, 0.0f, 0x1.6ffa22p-100f, 0.0f, 0x1.a168cep-22f,
     0x1.b9a0a6p-52f, 0x1.c669e8p-18f, 0.0f, 0x1.4ac974p-94f, 0x1.c765eap-3f, 0.0f,
     0.0f, 0x1.fedbecp-97f, 0.0f, 0x1.5b9076p-71f, 0x1.bd7a9ap-74f, 0x1.ed9d7ep-84f,
     0.0f, 0x1.9daa1p-55f, 0.0f, 0.0f, 0x1.4f0bap-124f, 0x1.e588eep-43f, 0.0f,
     0x1.09a03p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32812ep-64f, 0.0f, 0x1.4dbb0cp-90f,
     0x1p0f, 0x1.9431e6p-20f, 0x1.c8b744p-101f, 0x1.53ad56p-20f, 0.0f, 0.0f, 0.0f,
     0x1.b6304ap-80f, 0x1.40e6b6p-68f, 0.0f, 0.0f, 0x1.2d8fdp-23f, 0.0f, 0.0f,
     0x1.22969ap-21f, 0.0f, 0x1.25f7a2p-99f, 0.0f, 0x1.176964p-43f, 0.0f, 0.0f,
     0x1.c3c0f2p-104f, 0x1.a132e2p-8f, 0.0f, 0x1.0bbe72p-101f, 0.0f, 0x1.cb94bap-124f,
     0x1.0b5158p-39f, 0x1.6fd5e6p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6aceep-116f, 0x1.42b20ap-113f, 0.0f, 0.0f, 0x1.ea243p-106f, 0.0f, 0.0f,
     0x1p0f, 0x1.c97a9cp-96f, 0x1.3d21bap-62f, 0x1.7ae2cp-82f, 0.0f, 0x1.131028p-26f,
     0x1.a5044ap-118f, 0x1.c5c382p-66f, 0.0f, 0.0f, 0x1.a865bcp-102f, 0x1.9572bcp-74f,
     0.0f, 0.0f, 0x1.0481ep-118f, 0x1.285c6ep-33f, 0.0f, 0x1.880674p-104f, 0.0f,
     0x1.021828p-59f, 0x1.c93d28p-60f, 0x1.b91dc2p-28f, 0.0f, 0x1.bdbb72p-43f,
     0x1.53a18cp-91f, 0.0f, 0.0f, 0x1.532f56p-28f, 0.0f, 0x1.ea75b8p-87f,
     0x1.9c60e6p-77f, 0.0f, 0x1.725338p-88f, 0x1.470676p-16f, 0x1.d80a1cp-62f, 0.0f,
     0.0f, 0.0f, 0x1.282e98p-98f, 0x1.f28d02p-72f, 0.0f, 0.0f, 0x1.d8e26ap-118f,
     0x1.a8a754p-73f, 0x1.642ec8p-118f, 0.0f, 0x1.6eb74ap-20f, 0.0f, 0x1.68ae7ap-25f,
     0.0f, 0x1.4d9eaep-48f, 0x1.8793fcp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b723ep-118f,
     0x1.d7f278p-55f, 0x1.9b9e88p-78f, 0.0f, 0.0f, 0x1.251f66p-125f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.fef452p-39f, 0x1.8fa796p-3f, 0x1.8b4624p-11f, 0x1.82bd0cp-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e90ca6p-72f, 0x1.ecc15cp-23f, 0x1.e4ff26p-9f, 0.0f,
     0x1.312b6ep-21f, 0.0f, 0x1.7688e4p-16f, 0.0f, 0x1.5aacc8p-27f, 0.0f,
     0x1.c02d5ap-41f, 0.0f, 0.0f, 0.0f, 0x1.ced9bp-10f, 0.0f, 0x1.63d276p-116f, 0.0f,
     0.0f, 0.0f, 0x1.344bd4p-104f, 0.0f, 0.0f, 0x1.b6caeep-84f, 0.0f, 0x1.df7392p-88f,
     0.0f, 0x1.06a4a8p-16f, 0.0f, 0.0f, 0x1.c9db0ap-13f, 0.0f, 0.0f, 0x1.0e5b6ep-42f,
     0.0f, 0.0f, 0x1.363f5ap-49f, 0.0f, 0x1.8c638ep-119f, 0x1.d61f6ep-82f, 0.0f,
     0x1.e46e9ep-101f, 0.0f, 0x1.d1391ep-40f, 0.0f, 0x1.3cdbdep-38f, 0x1.baf756p-62f,
     0x1.979988p-40f, 0x1.ead014p-1f, 0.0f, 0.0f, 0x1.b3a584p-117f, 0.0f,
     0x1.d2234p-80f, 0x1.1a263cp-124f, 0x1.cf6f68p-95f, 0x1.f70eecp-121f, 0.0f, 0.0f,
     0.0f, 0x1.820ffcp-119f, 0x1.3786c2p-107f, 0.0f, 0x1.463d72p-74f, 0x1.ceb53ep-63f,
     0.0f, 0x1.d0d6a2p-89f, 0.0f, 0.0f, 0x1.d2e5ecp-97f, 0.0f, 0.0f, 0x1.0b41b6p-96f,
     0.0f, 0.0f, 0.0f, 0x1.e5397cp-108f, 0x1.9f80b2p-51f, 0x1.a94056p-94f,
     0x1.428fcap-64f, 0x1.0a6f22p-109f, 0.0f, 0.0f, 0.0f, 0x1.43699ep-94f,
     0x1.c63c5p-67f, 0.0f, 0x1.0c04a8p-108f, 0x1.d1f83p-110f, 0x1.a0ee34p-82f,
     0x1.6064dcp-44f, 0x1.e1a52cp-91f, 0.0f, 0.0f, 0.0f, 0x1.241c76p-104f, 0.0f, 0.0f,
     0x1.e5fabp-25f, 0.0f, 0x1.2da462p-86f, 0.0f, 0.0f, 0x1.8747b4p-125f, 0.0f,
     0x1.55d7eap-39f, 0x1.e10adep-10f, 0x1.e6639cp-61f, 0.0f, 0.0f, 0x1.ab3ffcp-98f,
     0.0f, 0x1.3aa918p-114f, 0x1.26755ap-125f, 0.0f, 0.0f, 0x1.2f6c82p-29f,
     0x1.25b59p-75f, 0.0f, 0x1.22ed1ap-15f, 0x1.eb3016p-23f, 0x1.1c16b8p-62f,
     0x1.a3b904p-99f, 0.0f, 0x1.98495p-117f, 0x1.8f376ap-92f, 0.0f, 0x1.2755bep-45f,
     0x1.e0371ap-45f, 0.0f, 0.0f, 0x1.de0f3ep-85f, 0.0f, 0x1.92fa6ep-65f,
     0x1.9c7c78p-87f, 0.0f, 0x1.8dfa2ap-28f, 0.0f, 0.0f, 0.0f, 0x1.3e913ap-113f, 0.0f,
     0x1.c63bd2p-59f, 0x1.3aea72p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b5322p-118f,
     0x1.637288p-22f, 0.0f, 0x1.c33cp-83f, 0x1.42946ep-99f, 0x1.17c528p-38f,
     0x1.6292ccp-2f, 0.0f, 0x1.da8d48p-47f, 0x1.4567bcp-115f, 0x1.0b4fdcp-72f, 0.0f,
     0x1.338302p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bda16p-105f,
     0x1.9831e8p-114f, 0.0f, 0x1.8e3eep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.986ceep-123f,
     0.0f, 0.0f, 0x1.118e84p-92f, 0x1p0f, 0x1.ec45f2p-22f, 0x1.ced626p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6827ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81a96cp-12f, 0.0f, 0x1.eb3898p-96f, 0.0f, 0x1.e72e56p-116f, 0x1.c13fdp-74f,
     0.0f, 0.0f, 0x1.72cbc2p-105f, 0x1.ff237p-124f, 0x1.e74c16p-109f, 0.0f,
     0x1.1b25acp-123f, 0.0f, 0.0f, 0x1.3afc6cp-37f, 0x1.667286p-70f, 0x1.503b3p-70f,
     0x1.a94ba2p-99f, 0x1.435bb2p-117f, 0.0f, 0.0f, 0.0f, 0x1.28163p-20f, 0.0f, 0.0f,
     0.0f, 0x1.15219ep-62f, 0x1.a3efaap-100f, 0.0f, 0.0f, 0x1.adf97cp-9f,
     0x1.d7d372p-100f, 0.0f, 0x1.aba1d8p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e8622p-61f, 0.0f, 0.0f, 0x1.43982p-36f, 0x1.bb9a06p-18f, 0x1.bd012ap-122f,
     0.0f, 0x1.71b258p-9f, 0.0f, 0x1.9ba09ap-30f, 0x1.efbc02p-31f, 0x1.4ef70ap-29f,
     0x1.8e15bp-115f, 0x1.df68p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c771f4p-8f, 0.0f,
     0x1.997cb6p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfb1f4p-65f, 0.0f, 0x1.782372p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c5796p-103f, 0x1.80451cp-76f, 0.0f, 0x1.3ce26cp-35f,
     0.0f, 0x1.3e8458p-98f, 0x1.e81b2ap-7f, 0.0f, 0x1.fc43dap-52f, 0x1.45744ap-22f,
     0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.85ec3p-100f, 0.0f, 0.0f, 0.0f, 0x1.7487ep-20f,
     0x1.afc9f4p-91f, 0.0f, 0.0f, 0.0f, 0x1.c684dp-100f, 0x1.b90d22p-15f, 0.0f,
     0x1.715abp-15f, 0x1.f7dfaap-103f, 0.0f, 0x1.acadfcp-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0ad4fcp-124f, 0.0f, 0x1.c0005cp-71f, 0.0f,
     0x1.2f3624p-106f, 0x1.513852p-72f, 0x1.c56978p-53f, 0.0f, 0.0f, 0x1.3ffbbep-83f,
     0x1.fcf3b2p-64f, 0x1.459cecp-70f, 0x1.b6ceb4p-18f, 0.0f, 0x1.353b2cp-53f, 0.0f,
     0.0f, 0x1.88ef48p-24f, 0x1.1b1c5ap-75f, 0x1.337b3ap-95f, 0.0f, 0x1.3a2d46p-57f,
     0.0f, 0x1.d8a3e4p-108f, 0.0f, 0x1.445ee8p-67f, 0.0f, 0.0f, 0.0f,
     0x1.8d1b0cp-100f, 0x1.2243fcp-85f, 0.0f, 0.0f, 0.0f, 0x1.57b558p-13f,
     0x1.27e39p-82f, 0x1.e9001cp-52f, 0x1.88dc38p-118f, 0.0f, 0.0f, 0x1.1f637ap-9f,
     0x1.832948p-26f, 0.0f, 0x1.a6f0d2p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9339acp-23f, 0.0f, 0x1.2ba99ep-114f, 0x1.4e3e52p-122f, 0x1.0e4458p-42f, 0.0f,
     0.0f, 0.0f, 0x1.4b4afp-98f, 0x1.042d52p-36f, 0.0f, 0x1.992cccp-34f, 0.0f, 0.0f,
     0.0f, 0x1.e8ac78p-65f, 0x1.a18a72p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb6ae6p-36f,
     0x1.f091c8p-58f, 0x1.2c9aaep-2f, 0.0f, 0x1.8e11dcp-88f, 0x1.71f398p-119f, 0.0f,
     0x1.31bd58p-23f, 0x1.12d076p-32f, 0.0f, 0.0f, 0x1.55833ep-45f, 0x1.66c4ecp-23f,
     0.0f, 0x1.03d198p-41f, 0.0f, 0x1.3657dcp-88f, 0.0f, 0.0f, 0x1.76d104p-4f,
     0x1.432b72p-39f, 0.0f, 0.0f, 0x1.bfdc7ap-18f, 0x1.d6adfep-15f, 0x1.d3a396p-56f,
     0.0f, 0.0f, 0x1.9233c4p-95f, 0.0f, 0x1.6602aap-89f, 0x1.47edc6p-112f,
     0x1.5f5414p-23f, 0.0f, 0x1.b6262p-35f, 0x1.71cfe6p-53f, 0x1.97e7ccp-15f, 0.0f,
     0x1.7e14c2p-21f, 0x1.1a390ep-113f, 0x1.933666p-68f, 0.0f, 0x1.89fb4ap-97f,
     0x1.77f124p-81f, 0x1.5edc2ep-52f, 0x1.045b96p-9f, 0.0f, 0.0f, 0x1.df14b2p-15f,
     0x1.f123e8p-87f, 0x1.fd81e4p-12f, 0.0f, 0.0f, 0x1.17384ep-53f, 0x1.31eb5p-66f,
     0.0f, 0x1.70d078p-37f, 0.0f, 0x1.7c5f46p-95f, 0.0f, 0x1.d79238p-85f, 0.0f,
     0x1.0b23bep-60f, 0.0f, 0.0f, 0x1.df70e4p-94f, 0.0f, 0x1.61848cp-82f,
     0x1.0dbc1cp-53f, 0x1.5a9da2p-52f, 0.0f, 0x1.86434ap-15f, 0.0f, 0x1.460c08p-68f,
     0x1.2b197p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c3eb2p-17f, 0.0f, 0.0f, 0.0f,
     0x1.e3c3fcp-40f, 0x1.b8565ap-110f, 0.0f, 0.0f, 0x1.bb133p-122f, 0x1.7e8f54p-33f,
     0.0f, 0.0f, 0x1.c4ccfp-20f, 0.0f, 0x1.b08cdap-102f, 0.0f, 0.0f, 0x1.6b9d2ap-60f,
     0x1.f1edaap-23f, 0x1.af6f68p-95f, 0x1.4044e8p-115f, 0.0f, 0.0f, 0.0f,
     0x1.39068ep-86f, 0x1.ed435ep-39f, 0x1.4be24ap-25f, 0x1.b090f4p-66f,
     0x1.c762d6p-84f, 0x1.3da8a2p-62f, 0x1.de99e8p-20f, 0.0f, 0x1.0d4628p-16f, 0.0f,
     0x1.8541fcp-3f, 0x1.898ecep-34f, 0x1.e7b392p-95f, 0x1.f05116p-64f,
     0x1.4051a8p-102f, 0x1.7e79ccp-111f, 0x1.8922a6p-76f, 0x1.6488e4p-53f, 0.0f,
     0x1.84b4ap-21f, 0.0f, 0x1.1e0396p-81f, 0x1.92a6fep-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0b65ap-78f, 0.0f, 0x1.5e8408p-2f, 0x1.5cca0ap-52f,
     0x1.104544p-26f, 0x1.d51c3ep-113f, 0.0f, 0x1.5fc0bp-24f, 0x1.0a3a18p-95f,
     0x1.756404p-81f, 0x1.add486p-62f, 0x1.f38c22p-110f, 0x1.65e24cp-122f,
     0x1.0a94e8p-101f, 0x1.f844fap-84f, 0x1.ebae5cp-40f, 0x1.7c386p-40f, 0.0f,
     0x1.605e52p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.447bf8p-11f, 0x1.567fd2p-121f,
     0x1.0feb46p-12f, 0x1.033382p-70f, 0.0f, 0x1.c1806p-5f, 0x1.41d4ep-74f, 0.0f,
     0x1.493be4p-89f, 0x1.0552e4p-41f, 0x1.1cb518p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93c0e6p-21f, 0.0f, 0x1.627cc8p-6f, 0.0f, 0x1.25963ap-87f, 0x1.a3bea2p-97f,
     0x1.c56556p-98f, 0.0f, 0x1.46553ep-65f, 0.0f, 0.0f, 0x1.a0335ap-17f, 0.0f, 0.0f,
     0x1.1a0d8ep-36f, 0.0f, 0x1.52c42ap-79f, 0.0f, 0x1.6045dp-72f, 0x1.be6594p-21f,
     0.0f, 0.0f, 0x1.2fc18ep-53f, 0.0f, 0.0f, 0x1.5dc2cep-120f, 0.0f, 0.0f,
     0x1.b7a4ecp-90f, 0.0f, 0.0f, 0x1.487f98p-71f, 0x1.fe2868p-108f, 0.0f, 0.0f,
     0x1.466a82p-90f, 0.0f, 0x1.8023ap-32f, 0x1.ecc568p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86f86cp-94f, 0x1.ff3b18p-106f, 0.0f, 0.0f, 0x1.dbcdp-100f, 0x1.9e53c6p-14f,
     0x1.675e2p-71f, 0.0f, 0x1.a8b4a2p-26f, 0x1.44c1c6p-68f, 0.0f, 0x1.30731cp-92f,
     0x1.87b328p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0a5a6p-99f,
     0x1.c8335ep-58f, 0x1.dc2664p-114f, 0.0f, 0x1.b803f6p-23f, 0.0f, 0x1.5437bp-35f,
     0x1.52aebp-126f, 0x1.99cfcp-121f, 0.0f, 0.0f, 0x1.b213c8p-99f, 0x1.0bf4eap-104f,
     0.0f, 0x1.255fe8p-109f, 0.0f, 0.0f, 0x1.f24182p-44f, 0.0f, 0.0f, 0.0f,
     0x1.45f024p-82f, 0x1.c4b2e4p-101f, 0.0f, 0.0f, 0.0f, 0x1.8e1fc6p-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5c6ebep-2f, 0x1.266b22p-88f, 0x1.598162p-67f,
     0x1.975122p-97f, 0.0f, 0x1.980bcep-17f, 0.0f, 0x1.6162d4p-1f, 0x1.65b5e8p-53f,
     0x1.c1e986p-124f, 0.0f, 0.0f, 0x1.d859b8p-60f, 0x1p0f, 0x1.aceaf2p-122f, 0.0f,
     0.0f, 0.0f, 0x1.ae7c28p-28f, 0x1.fb5234p-55f, 0x1.6775eep-28f, 0x1.29bc62p-96f,
     0.0f, 0x1.e08992p-6f, 0.0f, 0.0f, 0x1.4ed096p-1f, 0.0f, 0.0f, 0.0f,
     0x1.118a9ap-124f, 0.0f, 0x1.b13dc6p-107f, 0.0f, 0.0f, 0x1.b4543ep-117f, 0.0f,
     0x1.5353c6p-89f, 0x1.4b6a0ap-29f, 0x1.a5e0c2p-117f, 0x1.5c15ep-86f,
     0x1.24dedcp-71f, 0x1.e415acp-51f, 0.0f, 0x1.acd098p-36f, 0x1.9c6c16p-100f,
     0x1.47399ap-27f, 0x1.d8ce34p-122f, 0x1.c4591ap-78f, 0x1.c7b5a6p-102f,
     0x1.1ffd26p-114f, 0x1.5a453p-33f, 0.0f, 0x1.088bc6p-100f, 0x1.cfff3ep-112f, 0.0f,
     0x1.92089ap-88f, 0.0f, 0.0f, 0x1.56b942p-90f, 0x1.418ee4p-5f, 0x1.3c6e4ap-117f,
     0.0f, 0x1.a4c8e4p-46f, 0.0f, 0.0f, 0.0f, 0x1.9839dep-89f, 0x1.774b5p-95f, 0.0f,
     0.0f, 0x1.45f00cp-40f, 0.0f, 0.0f, 0x1.bcbc6ap-106f, 0x1.54a64ep-18f,
     0x1.b956e6p-14f, 0x1.b5b56ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.191cf6p-14f, 0x1.661738p-87f, 0x1.22ca94p-120f, 0.0f, 0x1.e68daap-7f, 0.0f,
     0.0f, 0.0f, 0x1.34a07cp-16f, 0x1.337c1ep-14f, 0x1.54dccp-6f, 0x1.d6667cp-9f,
     0.0f, 0.0f, 0x1.58ca52p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da60d2p-53f,
     0x1.acd51p-110f, 0x1.63e918p-85f, 0x1.4b78cp-93f, 0x1.b3b164p-102f, 0.0f,
     0x1.41ae82p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fb13ep-53f, 0.0f, 0.0f,
     0x1.34fa5ap-81f, 0x1.0d8ebcp-24f, 0.0f, 0x1.2ad1b6p-103f, 0x1.fb3176p-32f,
     0x1.1de6aap-126f, 0.0f, 0.0f, 0.0f, 0x1.25f05p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9a7d4p-94f, 0.0f, 0.0f, 0.0f, 0x1.d0d53ep-77f, 0x1.6c1d54p-123f, 0.0f,
     0x1.5a5762p-11f, 0x1.064536p-2f, 0.0f, 0x1.230114p-49f, 0x1.d9a7fap-9f,
     0x1.4be904p-19f, 0.0f, 0x1.f9722p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c911fap-21f, 0x1.c47bf6p-8f, 0.0f, 0x1.18153ep-113f, 0.0f, 0x1.617a98p-39f,
     0.0f, 0x1.5e3f0ep-50f, 0.0f, 0x1.e2dca2p-41f, 0x1.5ba266p-68f, 0x1.2bd854p-6f,
     0x1.76121ap-41f, 0.0f, 0.0f, 0.0f, 0x1.164c38p-122f, 0x1.375426p-21f,
     0x1.7a87c6p-7f, 0.0f, 0.0f, 0x1.0a7dd6p-61f, 0.0f, 0.0f, 0x1.dc2ffp-87f,
     0x1.d4a8cap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67212p-2f, 0.0f, 0x1.e48edcp-42f,
     0x1.6a1998p-17f, 0.0f, 0x1.dcd57ap-40f, 0x1.2ecdeap-10f, 0.0f, 0.0f,
     0x1.264022p-116f, 0x1.4728eap-74f, 0.0f, 0x1.f39318p-44f, 0.0f, 0.0f,
     0x1.3779dep-91f, 0.0f, 0x1.f98e28p-8f, 0.0f, 0x1.8939e4p-112f, 0x1.435ec4p-9f,
     0x1.5163c6p-105f, 0.0f, 0.0f, 0.0f, 0x1.ef443cp-84f, 0.0f, 0.0f, 0.0f,
     0x1.8364a4p-115f, 0x1.0e4736p-3f, 0x1.3d5ddap-105f, 0x1.9bb1bep-39f,
     0x1.3c574ep-28f, 0.0f, 0.0f, 0.0f, 0x1.dedb3ap-19f, 0.0f, 0.0f, 0.0f,
     0x1.2cdbdep-71f, 0.0f, 0x1.332902p-72f, 0.0f, 0.0f, 0.0f, 0x1.0946aep-119f,
     0x1.041a9ap-99f, 0x1.4076f4p-66f, 0x1.73a5cap-124f, 0x1.f819d6p-12f, 0x1p0f,
     0x1.537a2ap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d60a9p-11f, 0.0f,
     0x1.dc7932p-4f, 0.0f, 0.0f, 0x1.a3f882p-51f, 0x1.ba474ep-110f, 0.0f,
     0x1.d6cea2p-103f, 0.0f, 0x1.2059c6p-78f, 0.0f, 0x1.37f1b6p-35f, 0x1.5c6e6ap-112f,
     0.0f, 0x1.49fadap-37f, 0.0f, 0x1.82a426p-60f, 0.0f, 0x1.aefbep-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dad00cp-13f, 0x1.2eda1cp-33f, 0x1.2a57f6p-114f, 0.0f,
     0x1.13731ap-54f, 0.0f, 0.0f, 0.0f, 0x1.2dbb4ap-35f, 0x1.4fc4dep-21f, 0.0f,
     0x1.47ca48p-84f, 0.0f, 0x1.bd5812p-58f, 0.0f, 0x1.a04296p-4f, 0.0f, 0.0f, 0.0f,
     0x1.e8ff6cp-29f, 0x1.e384d2p-33f, 0x1.4f8c6ep-57f, 0x1.3dab0ap-66f,
     0x1.2e57dcp-3f, 0.0f, 0.0f, 0.0f, 0x1.089b8ep-56f, 0.0f, 0x1.46694p-85f,
     0x1.3480a8p-20f, 0.0f, 0.0f, 0.0f, 0x1.8a8dap-98f, 0x1.b48958p-53f, 0.0f, 0.0f,
     0x1.245774p-73f, 0.0f, 0.0f, 0x1.76c8c6p-63f, 0.0f, 0x1.aaf642p-37f,
     0x1.da474ep-2f, 0x1.468dep-36f, 0.0f, 0x1.16d6e8p-13f, 0.0f, 0x1.ce5afcp-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7da8a6p-16f, 0x1.7b193ap-125f, 0x1.6e14eep-17f,
     0x1.a33dp-51f, 0x1.3701ccp-3f, 0.0f, 0x1.529722p-52f, 0x1.0e5404p-16f,
     0x1.a12a2ap-32f, 0.0f, 0x1.dd488cp-2f, 0.0f, 0.0f, 0x1.22bb9p-55f, 0.0f,
     0x1.5f7a78p-20f, 0.0f, 0x1.d74aa4p-59f, 0.0f, 0.0f, 0x1.28df78p-31f,
     0x1.974a24p-97f, 0.0f, 0x1.526d84p-126f, 0x1.34f428p-92f, 0.0f, 0x1.7ec17ap-89f,
     0.0f, 0x1.9b5bbp-97f, 0.0f, 0x1.92bb4cp-103f, 0x1.b5ae24p-28f, 0.0f, 0.0f, 0.0f,
     0x1.b4cdd4p-94f, 0.0f, 0.0f, 0.0f, 0x1.1113e6p-116f, 0.0f, 0.0f, 0x1.ed8a66p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae9c06p-105f, 0.0f, 0.0f, 0x1.1a844ap-53f, 0.0f,
     0.0f, 0.0f, 0x1.1d143ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a49a8ep-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.40fa14p-103f, 0x1.b69f9cp-81f, 0.0f, 0.0f, 0x1.cbb52cp-95f,
     0x1.9c25dep-94f, 0x1.d2ebb8p-60f, 0x1.fe6a02p-8f, 0.0f, 0.0f, 0x1.cc058p-71f,
     0x1.596d36p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ba6f8p-63f, 0.0f,
     0x1.eb4b06p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.721bdep-89f, 0.0f, 0.0f,
     0x1.92e058p-104f, 0.0f, 0.0f, 0x1.a4e28ap-10f, 0.0f, 0x1.8a190ap-115f, 0.0f,
     0.0f, 0x1.2a2a1ep-27f, 0.0f, 0x1.2f227ap-86f, 0x1.b9565ap-1f, 0.0f,
     0x1.154b6ap-114f, 0x1.2c0b1ap-33f, 0x1.994c2p-2f, 0.0f, 0x1.04d144p-124f, 0.0f,
     0x1.a9f134p-120f, 0.0f, 0x1.67a458p-34f, 0.0f, 0.0f, 0x1.970e0ep-118f, 0.0f,
     0.0f, 0.0f, 0x1.ca1878p-2f, 0x1.67ffaap-16f, 0.0f, 0x1.fb9c1cp-38f,
     0x1.8a400ep-12f, 0.0f, 0.0f, 0x1.3ccc96p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d0134p-8f, 0.0f, 0x1.f996e4p-109f, 0x1.8be782p-30f, 0.0f, 0x1.e480fp-2f,
     0x1.53b0c6p-1f, 0x1.a313acp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb480ap-72f, 0.0f, 0x1.a05d5cp-41f, 0x1.a12d08p-66f, 0x1.767b12p-92f,
     0x1.72825ap-59f, 0x1.fe6bbcp-10f, 0x1.7ae8p-126f, 0.0f, 0.0f, 0.0f,
     0x1.e5679p-18f, 0x1.6370bap-94f, 0x1.88173ep-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de3282p-95f, 0.0f, 0x1.c0118p-48f, 0.0f, 0x1.f8d5e4p-33f, 0x1.f2ac46p-36f,
     0.0f, 0x1.1eec06p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1963f6p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65762cp-12f, 0x1.673582p-33f, 0x1.bbb7aep-35f,
     0.0f, 0.0f, 0.0f, 0x1.449602p-125f, 0x1.5760e8p-43f, 0x1.768eeap-111f,
     0x1.d2a034p-70f, 0x1.935a4ep-120f, 0x1.666be4p-9f, 0x1.cb1002p-67f, 0.0f,
     0x1.3b4c3ep-102f, 0.0f, 0x1.31b8a6p-11f, 0x1.032046p-19f, 0x1.0ccd26p-34f,
     0x1.4df0a2p-72f, 0x1.8c60b8p-74f, 0x1.7e82a6p-22f, 0x1.f009fep-89f, 0.0f, 0.0f,
     0.0f, 0x1.78363ep-46f, 0.0f, 0x1.4cf922p-92f, 0.0f, 0x1.ef827p-126f,
     0x1.681b84p-74f, 0x1.c74d0ep-124f, 0.0f, 0x1.660e92p-25f, 0x1.a1181cp-50f, 0.0f,
     0x1.6c0bc2p-36f, 0.0f, 0.0f, 0x1.7d4d1cp-66f, 0x1.955218p-73f, 0.0f,
     0x1.ab87c6p-50f, 0x1.e14ef8p-2f, 0x1.bd9298p-93f, 0x1.012396p-20f, 0.0f,
     0x1.ffca42p-106f, 0x1.5dd398p-69f, 0.0f, 0x1.42b05p-72f, 0x1.0545fep-111f, 0.0f,
     0x1.02f5ecp-107f, 0x1.d597f4p-92f, 0.0f, 0x1.76cff2p-83f, 0x1.dce2eap-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9d554p-45f, 0x1.037ac2p-32f, 0.0f, 0.0f,
     0x1.11599ap-14f, 0.0f, 0.0f, 0x1.891eccp-10f, 0.0f, 0.0f, 0x1.488f34p-23f, 0.0f,
     0x1.ec95d6p-110f, 0.0f, 0.0f, 0.0f, 0x1.c71bd4p-28f, 0x1.0eb756p-59f, 0.0f, 0.0f,
     0.0f, 0x1.37014p-29f, 0.0f, 0x1.d3a0b4p-57f, 0x1.aaa534p-91f, 0.0f,
     0x1.0331eap-44f, 0x1.aeb12cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e104b4p-86f, 0.0f,
     0x1.774276p-15f, 0x1.6c6ffp-73f, 0x1.93c7dap-117f, 0x1.c12f2cp-71f, 0.0f,
     0x1.9df23p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66dd06p-34f, 0x1.41f4b2p-105f,
     0x1.85718ap-16f, 0x1.b636c6p-17f, 0x1.04b4dap-96f, 0x1.2beeeap-34f,
     0x1.b129cap-120f, 0x1.ab008ep-77f, 0.0f, 0.0f, 0.0f, 0x1.fee9fcp-126f,
     0x1.9c8c8ap-92f, 0x1.c31344p-8f, 0x1.8a37a4p-125f, 0.0f, 0x1.52599p-49f,
     0x1.1c69b2p-6f, 0x1.390d96p-91f, 0x1.bdcf88p-17f, 0x1.6894f2p-13f,
     0x1.c45604p-54f
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
            tmp2 = Sleef_fmodf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_fmodf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fmodf1_purecfma bench acc %a\n", global_bench_acc);
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
