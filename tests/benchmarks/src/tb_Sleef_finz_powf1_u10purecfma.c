/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_powf1_u10purecfma.c --function \
 *     Sleef_finz_powf1_u10purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
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
     0x1.4c6d96p-65f, 0x1.90961p-118f, 0.0f, 0.0f, 0.0f, 0x1.985b7ep-48f, 0.0f,
     0x1.b76852p-105f, 0.0f, 0x1.279834p-125f, 0x1.f3e1cap-31f, 0x1.fde818p-110f,
     0.0f, 0.0f, 0x1.d2c7b8p-3f, 0.0f, 0x1.77620ep-58f, 0.0f, 0x1.59fdap-121f, 0.0f,
     0.0f, 0x1.6d64bp-35f, 0.0f, 0.0f, 0.0f, 0x1.d9c146p-100f, 0x1.cfbd94p-104f, 0.0f,
     0x1.e320bp-124f, 0x1.8f7ab8p-43f, 0x1.446fcp-65f, 0x1.e9b21cp-36f,
     0x1.e8a334p-11f, 0.0f, 0x1.1864fcp-122f, 0.0f, 0.0f, 0x1.d93dacp-114f, 0.0f,
     0x1.4f6beap-74f, 0.0f, 0.0f, 0x1.1966c8p-34f, 0x1.5c64c4p-81f, 0.0f,
     0x1.b9bc72p-30f, 0x1.f6e64ap-35f, 0x1.d513c4p-121f, 0x1.bae374p-62f,
     0x1.49b31p-13f, 0x1.fd7c92p-35f, 0.0f, 0.0f, 0x1.4c2adap-109f, 0x1.61baa2p-59f,
     0.0f, 0x1.91c0bp-121f, 0.0f, 0.0f, 0x1.35ce44p-86f, 0x1.f36e1ep-42f, 0.0f,
     0x1.3ea8ap-49f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.ca1fb6p-120f, 0.0f, 0.0f, 0.0f,
     0x1.68467p-20f, 0.0f, 0.0f, 0.0f, 0x1.e11b56p-12f, 0.0f, 0x1.91323ap-60f,
     0x1.2ea366p-12f, 0.0f, 0.0f, 0.0f, 0x1.4f6c96p-126f, 0.0f, 0x1.8103fp-40f, 0.0f,
     0x1.26511p-73f, 0.0f, 0x1.9b0942p-23f, 0.0f, 0x1.7c98ap-118f, 0.0f, 0.0f, 0.0f,
     0x1.4d7b8ep-60f, 0x1.2a08fep-50f, 0x1.749fcep-69f, 0x1.7f6888p-117f, 0.0f,
     0x1.95b3b6p-93f, 0x1.29a9d2p-24f, 0.0f, 0x1.c23a8cp-39f, 0x1.1d0d98p-88f, 0.0f,
     0.0f, 0x1.e06906p-117f, 0x1.3bd68ep-117f, 0.0f, 0.0f, 0.0f, 0x1.40b4c6p-106f,
     0x1.e3c85p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87454ep-22f, 0x1.137144p-4f,
     0x1.7c2d8ep-35f, 0.0f, 0x1.baed04p-17f, 0.0f, 0x1.522ba6p-53f, 0.0f,
     0x1.7e4adep-10f, 0x1.abdbp-15f, 0x1.5b4006p-98f, 0x1.2e078cp-34f, 0.0f, 0.0f,
     0x1.14229ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c739b8p-25f, 0.0f,
     0x1.b13d96p-111f, 0x1.9620bcp-120f, 0x1.4daa64p-23f, 0x1.c4233p-101f, 0.0f,
     0x1.0f1636p-98f, 0x1.c32346p-69f, 0.0f, 0x1.6f9288p-37f, 0x1.2aad02p-72f,
     0x1.1c8d38p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.253762p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.566846p-99f, 0x1.8c8eccp-115f, 0x1.48483cp-118f,
     0x1.49e53p-5f, 0x1.5e42cep-116f, 0x1.eb0518p-105f, 0.0f, 0.0f, 0x1.cbb30cp-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21ce76p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.272ef4p-75f, 0x1.14fe0ap-28f, 0.0f, 0x1.47c732p-116f, 0.0f, 0x1.e84c5cp-45f,
     0.0f, 0.0f, 0x1.c0a9ap-22f, 0x1.b156c2p-73f, 0x1.785e66p-1f, 0x1.150358p-24f,
     0x1.a9793cp-97f, 0x1.795082p-31f, 0x1.aed6dep-89f, 0x1.5b568ap-75f,
     0x1.a39dfp-78f, 0x1.5d4102p-71f, 0x1.7b3e12p-85f, 0x1.28c4bap-123f,
     0x1.0386c6p-20f, 0.0f, 0x1.0c8d7p-61f, 0x1.65fec4p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.708752p-54f, 0.0f, 0x1.3fbf94p-35f, 0.0f, 0x1.8426f8p-77f, 0.0f,
     0x1.39326ep-19f, 0x1.5df04ep-55f, 0.0f, 0.0f, 0.0f, 0x1.d141bap-84f,
     0x1.fb826p-109f, 0.0f, 0x1.cb9ae4p-36f, 0x1.ab23a4p-54f, 0.0f, 0.0f,
     0x1.869f6p-52f, 0.0f, 0.0f, 0x1.920a2ap-98f, 0.0f, 0.0f, 0x1.779332p-42f,
     0x1.f19e8p-15f, 0.0f, 0x1.f5106ep-82f, 0x1.6bcecap-42f, 0.0f, 0x1.15c0bap-26f,
     0x1.98b46ep-29f, 0x1.962a9p-103f, 0x1.e52fcp-49f, 0.0f, 0.0f, 0x1.e50206p-78f,
     0x1.86f994p-103f, 0.0f, 0x1.3aa104p-125f, 0x1.75274ap-51f, 0x1.7573aep-118f,
     0.0f, 0.0f, 0.0f, 0x1.6a8554p-56f, 0.0f, 0x1.8d4e2ep-95f, 0x1.140fap-36f, 0.0f,
     0.0f, 0x1.ba773p-126f, 0x1.487e04p-86f, 0.0f, 0.0f, 0.0f, 0x1.7b0a6p-114f,
     0x1.f61d98p-26f, 0.0f, 0.0f, 0.0f, 0x1.95b83ep-120f, 0x1.8bda86p-19f,
     0x1.f7c38p-110f, 0.0f, 0x1.a5534ep-92f, 0x1.f65f7ep-41f, 0.0f, 0.0f,
     0x1.25f664p-50f, 0x1.2da118p-117f, 0x1.cbf08ep-15f, 0x1.58df4cp-67f, 0.0f,
     0x1.e322f8p-67f, 0.0f, 0x1.fab2bcp-88f, 0x1.beec58p-118f, 0.0f, 0.0f,
     0x1.92177cp-109f, 0x1.d999e8p-87f, 0x1.28d4a4p-13f, 0x1.4e64d6p-29f,
     0x1.1dd97ep-8f, 0.0f, 0x1.59a5a8p-46f, 0.0f, 0x1.f5a4fcp-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.345eep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cece92p-104f,
     0x1.767a5ep-39f, 0.0f, 0x1.9a7a96p-5f, 0.0f, 0x1.574db8p-124f, 0.0f,
     0x1.f3c9ccp-49f, 0.0f, 0x1.c8510cp-109f, 0x1.9edfa8p-125f, 0x1.33d7fap-17f,
     0x1.7de1f2p-20f, 0x1.e840d8p-62f, 0x1.817196p-119f, 0x1.636fe8p-100f, 0.0f,
     0x1.a3eeeap-64f, 0.0f, 0.0f, 0.0f, 0x1.08fb76p-114f, 0.0f, 0.0f, 0x1.eed5f8p-62f,
     0x1.b9effp-5f, 0.0f, 0x1.0a501cp-110f, 0.0f, 0.0f, 0.0f, 0x1.b629e6p-56f,
     0x1.17af4p-99f, 0.0f, 0.0f, 0.0f, 0x1.6c056ap-85f, 0x1.4bde5ep-56f, 0.0f, 0.0f,
     0x1.701668p-84f, 0x1.ff3b1p-14f, 0x1.998bf4p-57f, 0.0f, 0x1.25e81ap-80f,
     0x1.7eb678p-12f, 0x1.cd59c8p-65f, 0x1.a4835ap-25f, 0.0f, 0x1.4d6074p-26f, 0.0f,
     0x1.f1d2e4p-9f, 0.0f, 0.0f, 0.0f, 0x1.bc510ap-57f, 0x1.552d76p-94f, 0.0f, 0.0f,
     0x1.2c7b5ep-91f, 0x1.fea6p-1f, 0.0f, 0x1.d6b49cp-42f, 0x1.10e69ep-27f,
     0x1.88abecp-18f, 0x1.38e186p-118f, 0.0f, 0x1.bd6f96p-40f, 0x1.f62258p-116f,
     0x1.61fe1p-48f, 0.0f, 0x1.9e53dcp-56f, 0x1.8dbea8p-59f, 0x1.2cb5b6p-62f, 0.0f,
     0x1.2b5d42p-72f, 0x1.c7028cp-95f, 0.0f, 0x1.1af94ap-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7deebp-126f, 0x1.5448c6p-27f, 0x1.d05f4ep-20f, 0x1.818e7ep-33f,
     0x1.4a986ap-56f, 0x1.05e4fp-2f, 0x1.214ef6p-17f, 0x1.05187ep-15f, 0.0f, 0.0f,
     0x1.e82244p-105f, 0x1.ac4c48p-87f, 0.0f, 0.0f, 0x1.0415eap-49f, 0x1.9d3a6cp-120f,
     0.0f, 0x1.8c99eep-32f, 0x1.e90bb4p-80f, 0.0f, 0.0f, 0x1.f45af8p-48f, 0.0f,
     0x1.39311ap-69f, 0.0f, 0.0f, 0x1.bcde3ap-59f, 0x1.f65a08p-60f, 0.0f, 0.0f, 0.0f,
     0x1.8ed068p-77f, 0x1.80779cp-60f, 0x1.9e8d1p-43f, 0x1.7b3abcp-11f,
     0x1.13bb5ap-32f, 0.0f, 0x1.7287a4p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c8618p-91f,
     0.0f, 0.0f, 0x1.fbed56p-25f, 0x1.de0f98p-36f, 0x1.afe87cp-119f, 0x1.35b3c4p-102f,
     0.0f, 0x1.58ccdap-28f, 0.0f, 0.0f, 0x1.37a76ep-71f, 0.0f, 0x1.dc5a86p-107f,
     0x1.0319b8p-68f, 0x1.8a5918p-97f, 0.0f, 0x1.6737dep-31f, 0x1.c79fbep-110f,
     0x1.21d524p-108f, 0.0f, 0x1.2b8bp-112f, 0x1.f1ebf6p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1d726p-26f, 0.0f, 0x1.42bcap-69f, 0.0f, 0x1.c724d8p-104f, 0.0f, 0.0f,
     0x1.39908ep-125f, 0x1.13d516p-3f, 0x1.ad7534p-81f, 0.0f, 0.0f, 0x1.57b9a6p-45f,
     0x1.33b0acp-36f, 0x1.14b326p-53f, 0x1.07ec3cp-76f, 0x1.288a92p-122f,
     0x1.9bbd8cp-37f, 0.0f, 0x1.43ccd4p-55f, 0.0f, 0.0f, 0x1.56ae58p-49f, 0.0f, 0.0f,
     0.0f, 0x1.60547p-122f, 0.0f, 0.0f, 0x1.fe2bfcp-54f, 0.0f, 0x1.e28b52p-92f, 0.0f,
     0x1.4c59fep-79f, 0x1.a8f76p-85f, 0.0f, 0.0f, 0x1.bf74c2p-120f, 0.0f, 0.0f,
     0x1.1951dp-115f, 0.0f, 0.0f, 0x1.8a9fa2p-58f, 0x1.8488c4p-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f54e88p-45f, 0x1.aab8bap-47f, 0.0f, 0.0f, 0x1.495c1ap-97f,
     0x1.07244p-98f, 0.0f, 0x1.a2ac08p-107f, 0x1.8f415ap-15f, 0.0f, 0x1.b58f0cp-76f,
     0x1.febe74p-106f, 0x1.d251fep-31f, 0x1.81f6f4p-19f, 0x1.dba8d4p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cece4p-102f, 0.0f, 0.0f, 0x1.65feeep-10f,
     0x1.6c88ecp-88f, 0.0f, 0.0f, 0x1.3345acp-50f, 0.0f, 0.0f, 0.0f, 0x1.07f324p-49f,
     0x1.c89816p-70f, 0x1.b8ab84p-59f, 0.0f, 0x1.edd57ep-120f, 0.0f, 0.0f, 0.0f,
     0x1.5ad3dcp-73f, 0x1.88ee74p-91f, 0x1.912f48p-55f, 0x1.a404dap-13f,
     0x1.682f46p-44f, 0x1.9c43e8p-104f, 0x1.84a79ap-70f, 0.0f, 0x1.68cafp-57f,
     0x1.822854p-85f, 0.0f, 0x1.800f52p-34f, 0.0f, 0x1.1f0704p-82f, 0x1.9a3f54p-121f,
     0.0f, 0x1.466608p-15f, 0x1.8e33ap-113f, 0x1.d01166p-92f, 0x1.4a6d5cp-43f,
     0x1.7b141ap-18f, 0.0f, 0.0f, 0.0f, 0x1.0f2c9p-28f, 0x1.a214dcp-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a7474p-52f, 0.0f, 0.0f, 0x1.254b6ap-1f,
     0x1.8e31aep-110f, 0.0f, 0x1.ad8026p-32f, 0.0f, 0x1.823adap-32f, 0x1.59177cp-41f,
     0.0f, 0x1.f10852p-44f, 0.0f, 0x1.cf9e4ep-45f, 0x1.fc2bd2p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.408e18p-33f, 0x1.0a044ep-119f, 0x1.d50f6ap-37f,
     0x1.c2bap-12f, 0.0f, 0x1.bc60fep-103f, 0x1.e710b6p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f59902p-71f, 0x1.05aefep-34f, 0x1.ad5d36p-70f, 0x1.7f17bep-118f, 0.0f,
     0x1.c082cp-4f, 0x1.058218p-20f, 0x1.576538p-57f, 0x1.f97f8cp-12f,
     0x1.32f552p-98f, 0x1.512d4p-91f, 0.0f, 0.0f, 0x1.3e420ep-10f, 0x1.ca6bf8p-82f,
     0.0f, 0.0f, 0.0f, 0x1.df3998p-23f, 0.0f, 0x1.f02b14p-6f, 0.0f, 0.0f,
     0x1.ef69fap-6f, 0x1.e9e26ep-97f, 0x1.d2772ap-100f, 0x1.e64976p-23f, 0.0f, 0.0f,
     0x1.8f898ap-111f, 0.0f, 0.0f, 0x1.68ca0ap-15f, 0.0f, 0.0f, 0x1.c5b8bp-6f,
     0x1.768f7p-72f, 0x1.58615p-117f, 0.0f, 0x1.595aeep-87f, 0.0f, 0x1.90818cp-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab8e5p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3d534p-111f, 0.0f, 0x1.e6ee9ep-126f, 0.0f, 0.0f,
     0.0f, 0x1.1dc816p-16f, 0x1.2b983p-30f, 0.0f, 0x1.bc93acp-8f, 0x1.4b8bb6p-17f,
     0x1.e594f6p-42f, 0x1.121e3ep-24f, 0x1.aba76p-7f, 0.0f, 0x1.ef77fp-107f, 0.0f,
     0x1.4c4ebep-69f, 0x1.7c4fa8p-109f, 0.0f, 0x1.3f0e92p-83f, 0x1.30092ap-6f,
     0x1.e724c4p-10f, 0x1.b24fdep-50f, 0x1.548e52p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.95a95ep-42f, 0x1.af8cb8p-45f, 0x1.483cbp-90f, 0.0f, 0.0f, 0x1.79aaacp-67f,
     0x1.42a132p-12f, 0x1.e9f5acp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3f7f6p-38f,
     0x1.f90d72p-16f, 0.0f, 0.0f, 0.0f, 0x1.40a0acp-12f, 0x1.73ce68p-8f,
     0x1.f98f78p-112f, 0x1.5c5fccp-2f, 0x1.0f01ccp-54f, 0.0f, 0x1.1ebb18p-47f,
     0x1.2fc844p-34f, 0.0f, 0x1.38c23ep-14f, 0x1.517de6p-110f, 0x1.beb6f8p-63f,
     0x1.78bc6cp-47f, 0x1.525a2cp-116f, 0x1.743618p-21f, 0x1.6fa72cp-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.76c7cap-85f, 0x1.54ba32p-123f, 0.0f, 0x1.f41324p-52f, 0.0f,
     0x1.d89068p-30f, 0.0f, 0.0f, 0x1.c0f0aap-126f, 0.0f, 0x1.c02958p-6f, 0.0f,
     0x1.fc8a12p-46f, 0x1.a5ed0cp-80f, 0x1.8eba64p-97f, 0.0f, 0.0f, 0.0f,
     0x1.972198p-94f, 0x1.8a778ap-92f, 0.0f, 0x1.c553ccp-124f, 0.0f, 0.0f,
     0x1.cd9efcp-28f, 0.0f, 0x1.f8d16p-119f, 0x1.32611ap-126f, 0x1.c31602p-80f, 0.0f,
     0x1.ec9b44p-15f, 0.0f, 0.0f, 0x1.422c52p-116f, 0x1.65162ep-121f, 0x1.75b226p-26f,
     0.0f, 0x1.81e6bep-32f, 0x1.2f518p-16f, 0x1.2134fap-78f, 0x1.789bfep-100f, 0.0f,
     0x1.e49f6cp-14f, 0.0f, 0x1.771914p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2b06p-103f,
     0.0f, 0x1.350c34p-1f, 0x1.782586p-94f, 0x1.4218fp-13f, 0x1.ea5a44p-50f, 0.0f,
     0x1.6aa8ecp-102f, 0.0f, 0x1.a088bp-61f, 0.0f, 0.0f, 0x1.f513b2p-71f, 0.0f,
     0x1.334c8cp-122f, 0.0f, 0.0f, 0.0f, 0x1.8532b8p-59f, 0.0f, 0x1.22404ep-32f, 0.0f,
     0x1.434a1ap-11f, 0.0f, 0x1.ce75f6p-125f, 0.0f, 0x1.bc49c8p-73f, 0.0f,
     0x1.8163c4p-23f, 0.0f, 0x1.70be38p-2f, 0x1.ee642p-82f, 0.0f, 0.0f,
     0x1.06ae64p-69f, 0x1.229618p-28f, 0x1.682972p-101f, 0x1.827556p-6f, 0.0f,
     0x1.62a91p-47f, 0x1.b20028p-101f, 0x1.2bf556p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.486472p-83f, 0x1.abf8fcp-108f, 0x1.54c8cap-104f, 0.0f, 0.0f, 0x1.7d9a4p-73f,
     0x1.9394ccp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d7fe8p-78f,
     0x1.f159a4p-106f, 0x1.68a91cp-111f, 0.0f, 0.0f, 0.0f, 0x1.b2498cp-31f, 0.0f,
     0x1.1d0058p-86f, 0.0f, 0x1.05a462p-22f, 0x1.e3e498p-123f, 0.0f, 0x1.be6c32p-30f,
     0x1.bcb9bcp-49f, 0x1.c1e456p-85f, 0.0f, 0x1.e7a216p-82f, 0x1.2bc022p-92f, 0.0f,
     0.0f, 0x1.bb917p-53f, 0.0f, 0x1.2def8p-25f, 0x1.bfd4bap-90f, 0x1.c67a94p-32f,
     0.0f, 0x1.8a2758p-6f, 0.0f, 0.0f, 0.0f, 0x1.7019ccp-34f, 0x1.724862p-75f, 0.0f,
     0x1.22945ap-88f, 0x1.83bf7ap-61f, 0x1.cf4e96p-124f, 0x1.721e8ep-87f, 0.0f,
     0x1.9f97a2p-68f, 0.0f, 0.0f, 0x1.177a5cp-125f, 0x1.6dbbbp-40f, 0x1.b8db78p-76f,
     0x1.b1d7cp-30f, 0.0f, 0x1.a4e6d4p-20f, 0x1.6c2bdp-49f, 0x1.f73918p-84f, 0.0f,
     0x1.da8d2cp-56f, 0.0f, 0.0f, 0x1.01d4c2p-66f, 0x1.65eff8p-82f, 0.0f,
     0x1.1a2232p-39f, 0.0f, 0.0f, 0x1.60ee88p-91f, 0.0f, 0.0f, 0x1.0dcc72p-17f, 0.0f,
     0.0f, 0.0f, 0x1.21c01ep-92f, 0x1.c6820ep-70f, 0x1.041b0ap-116f, 0x1.345beep-113f,
     0x1.dcf464p-108f, 0.0f, 0x1.07b704p-74f, 0.0f, 0.0f, 0x1.109aa8p-105f, 0.0f,
     0x1.36c424p-40f, 0.0f, 0x1.8a1024p-57f, 0x1.4aede6p-126f, 0x1.8eb404p-30f, 0.0f,
     0.0f, 0.0f, 0x1.f90858p-56f, 0x1.467ed8p-45f, 0.0f, 0x1.b20ba8p-50f,
     0x1.334a36p-36f, 0x1.918cb6p-101f, 0x1.9996b6p-126f, 0.0f, 0.0f,
     0x1.8565b4p-116f, 0x1.2e4894p-119f, 0.0f, 0x1.c36efp-27f, 0x1.c155f2p-118f,
     0x1.fa5244p-30f, 0x1.700388p-111f, 0.0f, 0.0f, 0x1.87f3d6p-72f, 0x1.551b08p-29f,
     0.0f, 0x1.8e3122p-117f, 0x1.ad358ap-13f, 0x1.9732e4p-93f, 0x1.6c4b84p-37f,
     0x1.a3893cp-93f, 0x1.0c50b2p-36f, 0.0f, 0.0f, 0.0f, 0x1.a7a25ep-14f, 0.0f, 0.0f,
     0x1.3e278p-60f, 0x1.59c342p-87f, 0x1.a24bf2p-44f, 0.0f, 0x1.3070b8p-23f, 0.0f,
     0.0f, 0.0f, 0x1.8afcdap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96e5fcp-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.38c678p-55f, 0.0f, 0.0f, 0.0f,
     0x1.1b7bdap-53f, 0.0f, 0.0f, 0x1.ec422ap-87f, 0x1.15901p-92f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.308636p-29f, 0.0f, 0.0f, 0x1.0b4f22p-110f, 0x1.9dd56p-10f, 0.0f,
     0x1.c1b0bp-20f, 0.0f, 0.0f, 0x1.776b5ep-13f, 0x1.59c358p-69f, 0.0f,
     0x1.a440cep-13f, 0x1.8108acp-31f, 0x1.29e9p-71f, 0x1.9ce646p-45f,
     0x1.42e242p-78f, 0.0f, 0x1.b2b3d2p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d4e9p-1f, 0x1.1f1274p-27f, 0x1.379502p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.535d66p-109f, 0x1.1461dap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.eafebap-108f, 0.0f,
     0x1.b3be6ap-64f, 0x1.66f6fep-38f, 0.0f, 0.0f, 0x1.0e1a1cp-91f, 0.0f,
     0x1.1905a8p-7f, 0x1.20b088p-42f, 0.0f, 0x1.10db06p-67f, 0x1.b45a3p-13f, 0.0f,
     0x1.c926f2p-86f, 0.0f, 0.0f, 0x1.9d8ccep-39f, 0x1.7b0efap-83f, 0.0f, 0.0f, 0.0f,
     0x1.c897aep-26f, 0x1.33f9a4p-85f, 0x1.d839a6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e359d2p-73f, 0.0f, 0.0f, 0x1.42827ap-13f,
     0x1.e1bc8cp-73f, 0.0f, 0x1.fc834ep-30f, 0x1.03e8b6p-23f, 0x1.4107acp-113f,
     0x1.108d0cp-69f, 0x1.985518p-85f, 0.0f, 0x1.911454p-85f, 0x1.170722p-90f,
     0x1.8b9bap-69f, 0.0f, 0x1.ef303cp-17f, 0.0f, 0.0f, 0.0f, 0x1.1b0f5cp-46f,
     0x1.4b1262p-84f, 0x1.f1999ap-62f, 0x1.2f4e18p-102f, 0x1.2c7f8ap-94f,
     0x1.46989p-41f, 0.0f, 0.0f, 0.0f, 0x1.177c54p-88f, 0.0f, 0x1.5979b2p-73f,
     0x1.ccc002p-46f, 0x1.998284p-40f, 0.0f, 0.0f, 0x1.6eb9b2p-23f, 0x1.916f08p-118f,
     0.0f, 0.0f, 0x1.17098ap-43f, 0x1.4d7cdp-40f, 0x1.b66d0ep-22f, 0x1.d7102p-9f,
     0x1.a21df8p-107f, 0.0f, 0.0f, 0x1.8751bep-43f, 0x1.8c0708p-107f, 0x1.e7a98p-113f,
     0x1.3df95ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e8e1ep-63f, 0x1.80af38p-108f,
     0x1.c50cb4p-111f, 0.0f, 0.0f, 0.0f, 0x1.baadfep-27f, 0x1.310f1p-60f, 0.0f,
     0x1.28a96ap-123f, 0x1.6c5558p-24f, 0.0f, 0.0f, 0x1.86edfap-119f, 0x1.ab3dp-66f,
     0.0f, 0x1.c6fbe2p-26f, 0x1.04a11p-88f, 0x1.717bap-15f, 0.0f, 0x1.490e5p-68f,
     0.0f, 0.0f, 0.0f, 0x1.1c1e12p-70f, 0.0f, 0x1.f323aep-17f, 0.0f, 0x1.6d0e0ap-55f,
     0.0f, 0.0f, 0x1.637dcep-83f, 0.0f, 0x1.4943bcp-93f, 0x1.9be3p-21f,
     0x1.6d779cp-48f, 0x1.391ed8p-74f, 0.0f, 0x1.db1da6p-3f, 0x1.f89262p-6f,
     0x1.0879ap-50f, 0x1.23f932p-116f, 0.0f, 0.0f, 0x1.5c1f58p-14f, 0.0f, 0.0f,
     0x1.4804fp-117f, 0.0f, 0x1.d4a514p-72f, 0.0f, 0x1.8a411p-19f, 0x1.f1d536p-26f,
     0x1.cdedb4p-10f, 0.0f, 0x1.b54adcp-94f, 0x1.1f090cp-121f, 0.0f, 0x1.cb73cap-66f,
     0x1.84b604p-50f, 0.0f, 0.0f, 0x1.50c03ep-102f, 0x1.c10bccp-123f, 0.0f, 0.0f,
     0.0f, 0x1.c533bp-108f, 0x1.0c1a54p-10f, 0x1.ba94e8p-34f, 0x1.0191ccp-75f, 0.0f,
     0.0f, 0x1.9472cep-41f, 0.0f, 0x1.4a39bep-31f, 0.0f, 0.0f, 0x1.155d04p-69f,
     0x1.b326fap-80f, 0x1.0609e2p-64f, 0.0f, 0.0f, 0.0f, 0x1.b5827ap-11f, 0.0f,
     0x1.c3414p-46f, 0x1.a5f51ep-48f, 0x1.8b6bf2p-23f, 0.0f, 0x1.adc34p-80f,
     0x1.e2e56p-1f, 0x1.e63034p-8f, 0x1.ee6b4cp-102f, 0x1.ae8ec4p-102f,
     0x1.c9fa9ep-120f, 0x1.1a5a36p-71f, 0.0f, 0.0f, 0x1.33931ap-31f, 0.0f,
     0x1.46668p-30f, 0x1.13ecd2p-30f, 0.0f, 0.0f, 0x1.ac26a2p-53f, 0x1.29ce7cp-31f,
     0x1.93a34p-119f, 0.0f, 0.0f, 0.0f, 0x1.6baba6p-92f, 0.0f, 0.0f, 0.0f,
     0x1.b21a7cp-120f, 0.0f, 0.0f, 0x1.bde432p-125f, 0x1.06db08p-86f, 0x1.7f3118p-86f,
     0x1.45f092p-24f, 0x1.640722p-52f, 0.0f, 0.0f, 0x1.971a1ep-52f, 0.0f,
     0x1.0e9694p-108f, 0.0f, 0x1.73531ap-12f, 0x1.afd51p-103f, 0.0f, 0.0f,
     0x1.8e2d3cp-84f, 0.0f, 0.0f, 0x1.eb3aecp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7a662p-45f, 0x1.3c1366p-104f, 0x1.92b47ap-87f, 0x1.6dd13cp-85f,
     0x1.e72fe2p-7f, 0x1.e05a8ep-59f, 0x1.c6d886p-11f, 0x1.4388fcp-121f, 0.0f, 0.0f,
     0x1.54b1fap-68f, 0x1.397a5p-84f, 0.0f, 0.0f, 0x1.bd13d8p-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.585ebap-68f, 0.0f, 0x1.2886e2p-83f, 0.0f, 0.0f,
     0x1.e3f1f4p-123f, 0.0f, 0x1.c2d34ep-108f, 0x1.488d54p-109f, 0.0f, 0.0f, 0.0f,
     0x1.698ecap-79f, 0.0f, 0x1.fe3fa4p-114f, 0.0f, 0x1.59e17cp-22f, 0x1.28a21p-62f,
     0x1.659b1ep-97f, 0.0f, 0.0f, 0x1.142bcep-51f, 0x1.8dcff8p-1f, 0x1.169c6p-120f,
     0.0f, 0x1.a77e4cp-85f, 0.0f, 0.0f, 0x1.c5307cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e05f0cp-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09010cp-16f, 0x1.3be11ep-72f, 0x1.58f974p-105f, 0x1.135acap-96f, 0.0f,
     0x1.d782d6p-22f, 0.0f, 0.0f, 0x1.c39p-12f, 0.0f, 0x1.74630cp-54f, 0x1.1a00fap-1f,
     0.0f, 0.0f, 0.0f, 0x1.8c51bep-96f, 0.0f, 0.0f, 0.0f, 0x1.2aea86p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2411d4p-7f, 0.0f, 0x1.4bea8p-71f, 0.0f, 0.0f,
     0x1.3af2c8p-55f, 0x1.80938cp-74f, 0x1.a63e2p-40f, 0x1.ab3a34p-57f, 0.0f, 0.0f,
     0x1.b69ecp-80f, 0.0f, 0.0f, 0x1.c42608p-29f, 0.0f, 0x1.9abd64p-62f, 0.0f,
     0x1.f8690ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9df4b8p-104f, 0x1.01e6ep-29f, 0x1.c0d3fp-48f, 0x1.bd761ap-120f,
     0x1.94905ap-83f, 0x1.60408ap-43f, 0x1.f85ddcp-118f, 0x1.f9104p-72f, 0.0f, 0.0f,
     0x1.b63c44p-54f, 0.0f, 0.0f, 0x1.c7b55cp-79f, 0.0f, 0x1.f27466p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ea984ep-35f, 0x1.52c1dap-28f, 0x1.2fcd52p-103f,
     0x1.5118cp-115f, 0.0f, 0x1.e93eeap-19f, 0.0f, 0.0f, 0.0f, 0x1.16216cp-79f,
     0x1.e4226p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.519488p-75f,
     0x1.416d48p-83f, 0x1.532db2p-93f, 0.0f, 0.0f, 0.0f, 0x1.102f2cp-124f, 0.0f, 0.0f,
     0x1.a6b33cp-63f, 0.0f, 0x1.473a92p-71f, 0.0f, 0x1.bae4b6p-106f, 0x1.500e5cp-101f,
     0x1.b73644p-105f, 0x1.55a92ep-119f, 0x1.a929bp-109f, 0x1.96b09cp-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1fac22p-57f, 0x1.437b46p-67f, 0x1.ec1e24p-56f, 0.0f,
     0x1.a6c2c6p-104f, 0x1.eb2c9cp-125f, 0x1.3aa05ep-29f, 0.0f, 0x1.0d3acep-42f,
     0x1.9c6762p-68f, 0x1.ef950ap-16f, 0.0f, 0x1.3653a4p-12f, 0x1.82b332p-100f, 0.0f,
     0.0f, 0.0f, 0x1.3a5b88p-69f, 0x1.5f2b1cp-104f, 0x1.dd5c1ep-58f, 0x1.11decp-114f,
     0.0f, 0.0f, 0.0f, 0x1.589b36p-1f, 0x1.d4995ep-15f, 0.0f, 0x1.22476ep-18f,
     0x1.8dfa18p-64f, 0x1.7e9dd6p-68f, 0x1.1f40a2p-103f, 0x1.a865eep-28f, 0.0f, 0.0f,
     0x1.71c062p-66f, 0.0f, 0x1.f7b5eap-121f, 0x1.f15386p-94f, 0.0f, 0x1.6989c4p-21f,
     0.0f, 0x1.0e104ep-81f, 0.0f, 0.0f, 0x1.d5ee64p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a18524p-54f, 0.0f, 0.0f, 0.0f, 0x1.14c7dap-126f, 0x1.7cd59p-91f, 0.0f, 0.0f,
     0.0f, 0x1.f7bfcep-35f, 0x1.21025p-8f, 0x1.96706ep-26f, 0x1.698f54p-83f, 0.0f,
     0x1.555ca6p-98f, 0x1.6e2f8p-31f, 0x1.d22662p-83f, 0x1.4fdbfp-8f, 0x1.034a2ep-73f,
     0.0f, 0.0f, 0x1.7ef428p-104f, 0.0f, 0.0f, 0x1.7aa51p-125f, 0.0f, 0.0f,
     0x1.001e0cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f38p-67f, 0x1.8ef3cap-37f,
     0x1.39ae48p-116f, 0x1.719e42p-113f, 0x1.f1ecb6p-108f, 0.0f, 0.0f,
     0x1.37801ep-35f, 0x1.b728a2p-76f, 0x1.5dfc1p-46f, 0x1.ce28aap-65f,
     0x1.5d0e6cp-2f, 0x1.f61adap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5554d8p-39f,
     0x1.4377c8p-73f, 0x1.f9e0bap-113f, 0x1.6f3bp-71f, 0.0f, 0x1.a7d3e6p-77f, 0.0f,
     0x1.ef732p-80f, 0x1.b2b52p-102f, 0.0f, 0x1.1077cep-1f, 0x1.e9619p-61f, 0.0f,
     0x1.a25ee6p-103f, 0.0f, 0x1.b2283ep-28f, 0x1.9fa48p-41f, 0x1.1896c4p-47f,
     0x1.932328p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea1d32p-58f, 0x1.eb2bdp-11f,
     0x1.41ff34p-69f, 0.0f, 0x1.4a0de8p-109f, 0x1.b456ccp-19f, 0.0f, 0x1.9e8a7p-25f,
     0.0f, 0x1.53de22p-23f, 0x1.0456a2p-10f, 0x1.64e254p-104f, 0x1.dc3f0cp-31f,
     0x1.7e538cp-9f, 0x1.203578p-66f, 0x1.a6955ap-99f, 0x1.a376eep-24f, 0.0f,
     0x1.6a3902p-7f, 0x1.359a0cp-48f, 0x1.92467ap-60f, 0x1.daa448p-126f,
     0x1.5f569ap-2f, 0.0f, 0x1.fbc6dep-29f, 0x1.6ad032p-19f, 0x1.bfc882p-39f,
     0x1.e5377ap-100f, 0.0f, 0.0f, 0x1.90245p-26f, 0x1.5d6ad2p-74f, 0.0f, 0.0f,
     0x1.8f0454p-15f, 0x1.01fdcp-15f, 0x1.5f52d4p-80f, 0.0f, 0.0f, 0x1.f41aeap-3f,
     0.0f, 0x1.9a007p-16f, 0.0f, 0.0f, 0x1.47eb92p-70f, 0x1.a204p-125f, 0.0f, 0.0f,
     0.0f, 0x1.20eb52p-123f, 0.0f, 0x1.11ed9ap-97f, 0.0f, 0.0f, 0x1.cb84c8p-71f, 0.0f,
     0.0f, 0x1.c6fedcp-14f, 0x1.3f6e38p-45f, 0x1.fb1be6p-17f, 0.0f, 0.0f, 0.0f,
     0x1.6648f4p-49f, 0x1.faea76p-116f, 0.0f, 0x1.4bc128p-3f, 0x1.ceacbcp-23f, 0.0f,
     0x1.7e1918p-103f, 0x1.613aa8p-52f, 0x1.49c5f8p-101f, 0x1.31e8e2p-19f, 0.0f, 0.0f,
     0.0f, 0x1.fcac0ep-66f, 0x1.b69fdp-44f, 0x1.fb1f5ep-57f, 0.0f, 0.0f, 0.0f,
     0x1.fba83ep-103f, 0x1.6da85p-35f, 0.0f, 0x1.057cacp-6f, 0.0f, 0.0f,
     0x1.4b2418p-121f, 0.0f, 0.0f, 0x1.24aba4p-92f, 0.0f, 0x1.6f1d3ap-58f,
     0x1.f388b6p-92f, 0.0f, 0.0f, 0.0f, 0x1.37b4f4p-53f, 0.0f, 0.0f, 0.0f,
     0x1.e0fb22p-123f, 0x1.a83decp-118f, 0x1.c68c12p-42f, 0.0f, 0.0f,
     0x1.0f6292p-113f, 0.0f, 0.0f, 0x1.b6f8a4p-13f, 0.0f, 0.0f, 0x1.fc3174p-98f, 0.0f,
     0.0f, 0x1.2b86eep-36f, 0x1.2d6ae2p-71f, 0x1.719114p-31f, 0.0f, 0.0f,
     0x1.e0062ap-120f, 0.0f, 0x1.c55d66p-69f, 0.0f, 0x1.f5e0d8p-20f, 0.0f,
     0x1.42c808p-28f, 0.0f, 0x1.3051f2p-98f, 0.0f, 0x1.20cd26p-45f, 0.0f,
     0x1.1453ap-7f, 0.0f, 0.0f, 0.0f, 0x1.3e82b4p-16f, 0.0f, 0.0f, 0.0f,
     0x1.90470ep-71f, 0.0f, 0x1.a0bc36p-12f, 0.0f, 0.0f, 0x1.3f612ep-46f,
     0x1.0a596cp-64f, 0.0f, 0.0f, 0x1.c868d6p-82f, 0x1.19e5c2p-18f, 0.0f, 0.0f, 0.0f,
     0x1.bfce1cp-114f, 0x1.bc3d72p-25f, 0.0f, 0x1.b92794p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1c19fep-32f, 0x1.e22deap-51f, 0x1.9ef3ep-73f, 0x1.497f6ap-95f, 0.0f,
     0.0f, 0x1.98b174p-115f, 0.0f, 0.0f, 0.0f, 0x1.cea978p-7f, 0x1.e2175ap-70f, 0.0f,
     0x1.23d11ep-104f, 0.0f, 0x1.9566b6p-123f, 0x1.cda45cp-126f, 0x1.51a5d6p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5db6d4p-80f, 0.0f, 0x1.c39b38p-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd71d2p-64f, 0x1.795f08p-67f, 0.0f, 0.0f, 0.0f,
     0x1.a98b7cp-52f, 0.0f, 0.0f, 0x1.0e7c0cp-29f, 0.0f, 0.0f, 0.0f, 0x1.56afcp-96f,
     0x1.d5e68ap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46ac44p-104f,
     0x1.55fdd8p-81f, 0x1.b805dap-7f, 0.0f, 0x1.f9fa3p-101f, 0x1.12a38ap-68f,
     0x1.439ba2p-119f, 0.0f, 0.0f, 0x1.ceb9d2p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3df684p-98f, 0x1.61db94p-22f, 0x1.370414p-117f, 0x1.fe777ep-53f,
     0x1.6e5d34p-93f, 0x1.45ddep-20f, 0x1.9e543cp-56f, 0.0f, 0.0f, 0x1.e7a6a6p-66f,
     0.0f, 0.0f, 0x1.572d26p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.feaf02p-22f,
     0x1.2454c4p-60f, 0x1.6ef826p-33f, 0.0f, 0x1.29b65ep-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1fd14p-62f, 0.0f, 0x1.c2254ap-108f, 0.0f, 0.0f, 0x1.697472p-51f, 0.0f, 0.0f,
     0x1.28a55cp-62f, 0.0f, 0x1.23881cp-41f, 0x1.aa8abep-116f, 0x1.fbb668p-66f,
     0x1.b563d8p-11f, 0x1.d2890ep-52f, 0x1.f09768p-44f, 0.0f, 0.0f, 0.0f,
     0x1.bcb1fp-111f, 0.0f, 0x1.4429aap-119f, 0.0f, 0x1.01c408p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.29ae6ap-104f, 0x1.42f516p-55f, 0.0f, 0.0f, 0x1.bb097ap-99f,
     0x1.683612p-31f, 0x1.a73016p-44f, 0.0f, 0.0f, 0.0f, 0x1.87ea12p-65f,
     0x1.4d39a2p-107f, 0x1.c94698p-44f, 0x1.39eb96p-46f, 0x1.51489p-69f,
     0x1.fecb1p-60f, 0.0f, 0.0f, 0x1.7a7584p-103f, 0x1.c72dcep-53f, 0.0f, 0.0f, 0.0f,
     0x1.8021dp-95f, 0x1.813bf6p-61f, 0.0f, 0x1.76c872p-30f, 0.0f, 0.0f, 0.0f,
     0x1.4b60cap-105f, 0x1.5f5e9ap-37f, 0.0f, 0x1.4b8696p-109f, 0x1.9bce32p-5f, 0.0f,
     0.0f, 0x1.345b4cp-117f, 0.0f, 0.0f, 0.0f, 0x1.fe873cp-92f, 0x1.0d178p-35f,
     0x1.151d7ep-37f, 0x1.8ff6a2p-45f, 0.0f, 0x1.56497p-75f, 0x1.c47a82p-124f,
     0x1.c15c72p-14f, 0x1.52a4p-125f, 0.0f, 0x1.a02452p-118f, 0.0f, 0x1.e04d3ep-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e7c9ap-51f, 0x1.832f78p-15f,
     0x1.e6e83p-80f, 0.0f, 0.0f, 0.0f, 0x1.c54e98p-88f, 0x1.8cc188p-33f, 0.0f,
     0x1.743a62p-119f, 0.0f, 0.0f, 0x1.777e7p-42f, 0x1.a55f64p-57f, 0x1.ad5fdap-9f,
     0x1.4aa9e2p-21f, 0.0f, 0x1.ae7964p-124f, 0x1.4bf97cp-14f, 0x1.40632p-106f,
     0x1.dbbf9ep-73f, 0.0f, 0x1.f496fcp-70f, 0.0f, 0.0f, 0x1.c23418p-117f,
     0x1.91da88p-50f, 0x1.d8075cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.376de8p-37f, 0.0f,
     0x1.d4ff86p-15f, 0.0f, 0x1.099dd6p-10f, 0.0f, 0.0f, 0x1.6ea916p-10f,
     0x1.722ff2p-43f, 0x1.1cbe38p-43f, 0x1.aaac66p-17f, 0x1.fb902ap-68f, 0.0f,
     0x1.a66924p-125f, 0x1.4ba46p-15f, 0x1.279a4ep-120f, 0.0f, 0x1.7e1adep-108f, 0.0f,
     0x1.426f72p-78f, 0.0f, 0.0f, 0x1.ee6922p-73f, 0.0f, 0.0f, 0x1.dd4444p-77f,
     0x1.fb7cfep-49f, 0.0f, 0x1.373d68p-14f, 0.0f, 0x1.47a2b6p-58f, 0x1.1a91cp-22f,
     0x1.56b4eep-32f, 0.0f, 0.0f, 0x1.c6edap-2f, 0.0f, 0x1.fde4d6p-31f, 0.0f, 0.0f,
     0x1.433fc6p-26f, 0.0f
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
            tmp2 = Sleef_finz_powf1_u10purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_powf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_powf1_u10purecfma bench acc %a\n", global_bench_acc);
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
