/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10f8_u10kvx.c --function \
 *     Sleef_finz_log10f8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.cf1084p-80f, 0.0f, 0x1.11038cp-113f, 0x1.59cdfep-27f, 0.0f, 0.0f,
     0x1.15bc6p-123f, 0x1.ba9ef4p-121f, 0x1.af41aap-51f, 0x1.28543ep-74f, 0.0f,
     0x1.e6e15ep-92f, 0x1.e9bbcap-90f, 0x1.3a3c9ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b28ceep-47f, 0x1.7dfd8cp-107f, 0x1.d610bcp-109f, 0x1.982528p-3f,
     0x1.d0ba02p-120f, 0x1.14ea5cp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff19e4p-121f,
     0x1.49707cp-43f, 0.0f, 0.0f, 0x1.b2019ep-93f, 0.0f, 0x1.003ebp-41f, 0.0f,
     0x1.be96dap-41f, 0.0f, 0x1.60e9a8p-1f, 0x1.f8ee44p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d5c4fep-82f, 0.0f, 0x1.7e235ap-100f, 0x1.460cfcp-22f, 0x1.c9b366p-15f,
     0.0f, 0.0f, 0.0f, 0x1.9e568ep-19f, 0.0f, 0x1.37fba4p-72f, 0x1.34720ep-33f,
     0x1.a33796p-41f, 0x1.a407bep-115f, 0.0f, 0.0f, 0x1.3f0fa4p-70f, 0x1.afbcd8p-48f,
     0x1.e41f1cp-52f, 0.0f, 0x1.d9a024p-23f, 0x1.384884p-86f, 0x1.abb48ap-48f,
     0x1.5d51f2p-9f, 0x1.19943cp-43f, 0.0f, 0.0f, 0x1.e3056cp-60f, 0x1.83beaep-69f,
     0x1.c41e92p-73f, 0x1.fc2bcap-112f, 0.0f, 0.0f, 0x1.81268ap-71f, 0x1.27427cp-114f,
     0.0f, 0.0f, 0x1.6dc48ep-91f, 0x1.5df13cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b8cdcp-66f, 0.0f, 0.0f, 0.0f, 0x1.088af6p-106f, 0.0f, 0x1.bd86c8p-93f,
     0x1.518998p-30f, 0.0f, 0x1.527902p-19f, 0.0f, 0.0f, 0.0f, 0x1.f214c6p-55f, 0.0f,
     0x1.d57992p-20f, 0.0f, 0.0f, 0.0f, 0x1.901332p-99f, 0x1.7419fep-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b2c1e8p-105f, 0.0f, 0.0f, 0.0f, 0x1.4ec944p-8f, 0x1.dac0d4p-56f,
     0.0f, 0x1.5a6a28p-79f, 0x1.2024cep-94f, 0.0f, 0x1.ea2bbp-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d7d66ep-88f, 0x1.a8a1b8p-38f, 0x1.ae762ap-70f, 0x1.4556bep-86f,
     0x1.b8eafcp-50f, 0x1.5bde2cp-100f, 0.0f, 0x1.515cc8p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60bcfep-49f, 0.0f, 0.0f, 0.0f, 0x1.a6f9dcp-66f, 0x1.6210b2p-56f, 0.0f, 0.0f,
     0x1.78bb4cp-37f, 0x1.cea248p-19f, 0x1.3006d4p-80f, 0.0f, 0.0f, 0x1.4396b6p-31f,
     0x1.a5ee8p-45f, 0.0f, 0x1.3eec66p-122f, 0.0f, 0x1.b79358p-9f, 0.0f,
     0x1.cb78eep-114f, 0.0f, 0.0f, 0x1.7094bp-99f, 0x1.1b83dp-87f, 0.0f, 0.0f, 0.0f,
     0x1.364dd2p-87f, 0x1.000f1cp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.14b112p-123f, 0.0f, 0x1.03a0dcp-69f, 0.0f, 0x1.4b6e0ap-75f, 0x1.24a856p-10f,
     0x1.0337e6p-28f, 0x1.af4b9p-50f, 0x1.21924ap-71f, 0x1.6500aep-32f,
     0x1.ce6e6cp-50f, 0.0f, 0x1.5f393ap-49f, 0x1.2499dap-108f, 0x1.2f4974p-97f,
     0x1.197bb4p-37f, 0.0f, 0.0f, 0x1.d0ced6p-43f, 0x1.d88fcap-67f, 0.0f,
     0x1.1ba91cp-125f, 0.0f, 0.0f, 0x1.92ff16p-117f, 0x1.22c08p-78f, 0x1.cb14eap-50f,
     0x1.878f8cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22118p-59f, 0x1.bd2b3p-119f,
     0x1.c4b76p-77f, 0x1.5f4012p-45f, 0x1.43b8c6p-70f, 0x1.4676d4p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c1b05ep-75f, 0.0f, 0x1.7926b4p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1526acp-101f, 0x1.6b3a5p-61f, 0.0f, 0x1.bb4d7cp-112f, 0x1.2169c6p-73f,
     0.0f, 0x1.00e104p-46f, 0.0f, 0.0f, 0x1.1a47p-30f, 0x1.181972p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3dc2ep-27f, 0x1.0e7af8p-92f, 0x1.69adbp-104f, 0x1.558cc4p-66f,
     0.0f, 0x1.494ffcp-126f, 0.0f, 0.0f, 0.0f, 0x1.63fe6ap-40f, 0x1.5cdf28p-77f,
     0x1.c164dcp-25f, 0.0f, 0x1.41c9f6p-28f, 0.0f, 0x1.8d439ep-112f, 0.0f, 0.0f,
     0x1.c188eep-35f, 0.0f, 0x1p0f, 0.0f, 0x1.afb3fp-70f, 0x1.358532p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2a6682p-41f, 0x1.14dd1cp-103f, 0.0f, 0.0f, 0x1.b15d12p-98f,
     0x1.e3a28p-37f, 0x1.62a1dep-66f, 0x1.011a2ep-38f, 0.0f, 0x1.aec15ep-55f, 0.0f,
     0.0f, 0.0f, 0x1.57ee56p-6f, 0x1.06f106p-79f, 0.0f, 0.0f, 0x1.409528p-9f,
     0x1.9da54cp-74f, 0.0f, 0x1.3adf5ep-39f, 0.0f, 0x1.c35deep-47f, 0x1.4e4a8ep-97f,
     0x1.fe8cc4p-13f, 0x1.c60322p-60f, 0.0f, 0x1.2b2d16p-23f, 0x1.3afea6p-35f, 0.0f,
     0x1.19ffe4p-54f, 0.0f, 0.0f, 0x1.128b54p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a2e44p-82f, 0x1.ddeda6p-13f, 0x1.e6546ap-48f, 0x1.b00794p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7da518p-5f, 0.0f, 0x1.81b258p-30f, 0.0f, 0x1.e4a894p-48f,
     0.0f, 0.0f, 0x1.f217eep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.896016p-6f,
     0x1.d1f3bap-92f, 0x1.abba3ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.437518p-120f, 0x1.e502fep-4f, 0.0f, 0.0f, 0.0f, 0x1.c4625ep-26f, 0.0f,
     0x1.3e1912p-117f, 0x1.e8d138p-102f, 0.0f, 0x1.2bb82cp-109f, 0.0f, 0.0f,
     0x1.62fdb4p-21f, 0.0f, 0x1.b41618p-29f, 0x1.5aabccp-38f, 0.0f, 0.0f, 0.0f,
     0x1.1d39p-118f, 0x1.02f064p-78f, 0.0f, 0.0f, 0x1.8b1f6ap-18f, 0.0f,
     0x1.fcd612p-74f, 0x1.6dc8cap-5f, 0.0f, 0x1.3ea30cp-18f, 0x1.a1cb02p-65f, 0.0f,
     0x1.735692p-122f, 0.0f, 0x1p0f, 0x1.aaea7ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.02a7b8p-57f, 0x1.b17118p-84f, 0x1.965efcp-50f, 0.0f, 0.0f, 0.0f,
     0x1.37544ap-8f, 0.0f, 0.0f, 0x1.ea654ep-124f, 0x1.b79e94p-44f, 0.0f, 0.0f, 0.0f,
     0x1.806978p-20f, 0x1.778feep-10f, 0x1.6c1652p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ef42p-120f, 0.0f, 0.0f, 0.0f, 0x1.49ef6p-76f, 0x1.28d824p-1f,
     0x1.6b58c8p-73f, 0.0f, 0x1.41aa3ep-62f, 0x1.a7c68cp-56f, 0x1.06519p-109f, 0.0f,
     0x1.5eef6ap-5f, 0x1.c32ac8p-39f, 0.0f, 0.0f, 0x1.5af372p-24f, 0x1.8b9c94p-31f,
     0x1.09bd3cp-112f, 0.0f, 0x1.c0e9ap-92f, 0.0f, 0x1.7ac0dep-101f, 0x1.7d7c3p-82f,
     0x1.d7c3f2p-109f, 0x1.1179b8p-38f, 0.0f, 0.0f, 0x1.e3856cp-85f, 0.0f,
     0x1.e24c7ep-114f, 0x1.72665p-78f, 0x1.6a2bp-106f, 0.0f, 0x1.75ec7cp-71f,
     0x1.ba88cep-50f, 0x1.7632e4p-92f, 0x1.fe35d8p-42f, 0.0f, 0x1.368788p-104f,
     0x1.34c414p-49f, 0x1.81b862p-74f, 0.0f, 0x1.f0725ep-54f, 0.0f, 0x1.d6334cp-24f,
     0.0f, 0x1.cad8cp-53f, 0x1.f5acbp-99f, 0x1.594fd6p-93f, 0.0f, 0x1.afe81ap-99f,
     0.0f, 0.0f, 0x1.dc113cp-78f, 0.0f, 0x1.f26c8ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.366c8ep-68f, 0.0f, 0x1.6846a2p-66f, 0x1.775d98p-83f, 0.0f, 0x1.3bb586p-18f,
     0.0f, 0.0f, 0x1.600f0ep-31f, 0.0f, 0.0f, 0x1.3ec22cp-8f, 0x1.28ac0ep-37f, 0.0f,
     0x1.64341p-116f, 0.0f, 0x1.9c5bdep-18f, 0.0f, 0x1.840178p-94f, 0.0f, 0.0f,
     0x1.e809bep-30f, 0x1.caf73p-9f, 0x1.2c7e58p-19f, 0x1.3524cp-91f, 0.0f, 0.0f,
     0.0f, 0x1.2c6772p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.554ec6p-84f,
     0.0f, 0.0f, 0x1.3cde2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d01274p-98f, 0.0f,
     0x1.16981cp-120f, 0x1.734f04p-61f, 0.0f, 0x1.a1917cp-84f, 0x1.0f20f6p-84f,
     0x1.b3adc2p-67f, 0x1.36f9c6p-12f, 0.0f, 0x1.6bc792p-98f, 0x1.46b57cp-103f,
     0x1.ec2136p-91f, 0x1.6d19e2p-36f, 0x1.992d7ap-95f, 0.0f, 0.0f, 0x1.2f90b8p-113f,
     0.0f, 0.0f, 0.0f, 0x1.229f06p-27f, 0.0f, 0.0f, 0.0f, 0x1.9503b4p-99f,
     0x1.5644d8p-87f, 0x1.f01426p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e6p-50f,
     0x1.28c208p-45f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.3cc468p-102f, 0.0f, 0.0f,
     0x1.984356p-121f, 0x1.c799bap-12f, 0.0f, 0.0f, 0x1.1bf5f4p-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.76e92ap-52f, 0.0f, 0x1.da8ff6p-79f, 0x1.f08b4cp-7f,
     0x1.58dc1p-55f, 0x1.95e0f4p-38f, 0.0f, 0x1.86f9e4p-62f, 0x1.b2c47cp-108f,
     0x1.ee686cp-90f, 0x1.1ad8fp-81f, 0.0f, 0x1.7aa4d2p-38f, 0x1.b7cd82p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.578beap-29f, 0.0f, 0x1.7bc884p-1f, 0.0f,
     0x1.22e382p-89f, 0.0f, 0.0f, 0x1.97558p-5f, 0x1.c9d552p-24f, 0.0f,
     0x1.ba57ecp-46f, 0x1.e5eb26p-2f, 0.0f, 0x1.2c8d56p-12f, 0x1.4677b4p-64f,
     0x1.2b1c4p-105f, 0x1.5ccc8ap-28f, 0x1.bbb79cp-119f, 0.0f, 0x1.68aa54p-54f, 0.0f,
     0.0f, 0x1.0b16b2p-53f, 0x1.9dcf64p-59f, 0x1.25d8dep-118f, 0x1.9397fp-10f, 0.0f,
     0x1.e2a6c2p-77f, 0.0f, 0x1.37b7p-57f, 0x1.cc18eap-66f, 0.0f, 0x1.fedc04p-85f,
     0x1.cd50aep-99f, 0x1.94589p-80f, 0x1.496e22p-126f, 0.0f, 0x1.904cdcp-93f, 0.0f,
     0.0f, 0x1.c96144p-54f, 0x1.c384c8p-85f, 0.0f, 0.0f, 0.0f, 0x1.cabd04p-106f,
     0x1.08ce3ep-52f, 0.0f, 0x1.eaff04p-65f, 0.0f, 0x1.7b3826p-28f, 0x1.4f8546p-53f,
     0x1.1a0c54p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7e0a4p-114f,
     0x1.9d3e08p-123f, 0.0f, 0x1.56d062p-48f, 0x1.c9b9d4p-124f, 0.0f, 0x1.ed6016p-5f,
     0.0f, 0.0f, 0x1.f47aeep-76f, 0.0f, 0.0f, 0x1.b5abfep-35f, 0.0f, 0.0f, 0.0f,
     0x1.91e3eep-61f, 0x1.706e76p-122f, 0x1.b55db2p-69f, 0.0f, 0x1.f1afb4p-107f, 0.0f,
     0x1.8e6a74p-85f, 0.0f, 0.0f, 0.0f, 0x1.36378ap-48f, 0.0f, 0.0f, 0.0f,
     0x1.b9de26p-95f, 0x1.b38794p-113f, 0x1.5af24cp-66f, 0x1.a11c08p-120f, 0.0f,
     0x1.5a8a3cp-125f, 0x1.6fa4c6p-99f, 0x1.970712p-18f, 0.0f, 0x1.fd7e92p-98f, 0.0f,
     0x1.93b11ap-9f, 0x1.2b61b6p-65f, 0x1.352a5ap-15f, 0.0f, 0x1.b7307cp-37f, 0.0f,
     0x1.02d4a6p-110f, 0x1.f09f44p-43f, 0x1.18514p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f30c2p-36f, 0.0f, 0.0f, 0x1.bbd2bep-94f, 0x1.4ac24cp-50f, 0.0f, 0.0f,
     0x1.5b2728p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.889ab8p-99f, 0x1.404c4ep-44f, 0.0f,
     0x1.d282dcp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.662d8ep-62f, 0x1.9cd864p-36f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.07fa42p-51f, 0.0f, 0x1.3a70b6p-86f, 0.0f, 0.0f,
     0.0f, 0x1.c5cfap-89f, 0x1.9e823cp-22f, 0.0f, 0.0f, 0x1.f16eep-92f,
     0x1.f0ba54p-101f, 0.0f, 0.0f, 0x1.a65ce2p-68f, 0.0f, 0x1.0d7c74p-28f, 0.0f,
     0x1.34188ep-42f, 0.0f, 0.0f, 0x1.3627b4p-9f, 0x1.e56066p-125f, 0.0f, 0.0f, 0.0f,
     0x1.36f492p-72f, 0.0f, 0x1.2ebc22p-81f, 0.0f, 0x1.097b66p-10f, 0.0f,
     0x1.190d8ap-114f, 0.0f, 0x1.2ff8d8p-99f, 0.0f, 0.0f, 0x1.9e42d6p-88f, 0.0f,
     0x1.7c434ap-23f, 0.0f, 0x1.47877cp-29f, 0.0f, 0x1.47ac76p-55f, 0.0f,
     0x1.025e58p-98f, 0x1.ffbb9cp-97f, 0x1.3a9fd2p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41758ep-36f, 0.0f, 0x1.f20b2p-25f, 0x1.2e1bc8p-19f, 0x1.b3a822p-71f,
     0x1.732bd4p-82f, 0x1.82880ep-1f, 0x1.4c9768p-77f, 0.0f, 0.0f, 0x1.2359f8p-125f,
     0.0f, 0.0f, 0x1.bb2756p-91f, 0x1.2ebb42p-42f, 0x1.a415f2p-19f, 0.0f,
     0x1.c5b324p-41f, 0.0f, 0.0f, 0x1.ce3f68p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d5de2p-56f, 0x1.e9a25ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa9c8p-20f,
     0.0f, 0.0f, 0.0f, 0x1.baba0ap-87f, 0.0f, 0x1.ef322ep-124f, 0.0f, 0x1.4cb684p-80f,
     0.0f, 0x1.b5aaacp-33f, 0.0f, 0x1.cad212p-116f, 0x1.4bd304p-99f, 0.0f,
     0x1.8d2b56p-44f, 0x1.b305bep-37f, 0x1.68470ap-17f, 0x1.9ff28p-52f,
     0x1.4059ap-63f, 0x1.f66864p-33f, 0x1.0215f2p-9f, 0x1.0a8446p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.680d4p-90f, 0x1.7d0414p-103f, 0x1.2e5b58p-21f, 0x1.2f6c4cp-67f,
     0x1.2f61bcp-27f, 0.0f, 0.0f, 0x1.bed086p-24f, 0.0f, 0x1.5bad76p-105f,
     0x1.b87dbep-39f, 0.0f, 0.0f, 0x1.34f4c2p-58f, 0x1.b8759ap-34f, 0.0f, 0.0f,
     0x1.04aa7p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8cf02ap-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5b5c2p-126f, 0x1.2895f6p-109f, 0.0f, 0.0f,
     0x1.331dbp-7f, 0x1.9d2768p-68f, 0x1.09fb7p-79f, 0.0f, 0.0f, 0x1.af6964p-126f,
     0x1.3c707p-41f, 0.0f, 0.0f, 0.0f, 0x1.459638p-109f, 0x1.f354d2p-23f,
     0x1.c37ffap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3d502p-88f, 0x1.31604ep-29f, 0.0f,
     0x1.e3c118p-11f, 0.0f, 0x1.acf12ep-117f, 0x1.10f18ap-52f, 0x1.235376p-110f, 0.0f,
     0x1.6b384ep-83f, 0x1.9e0aaap-7f, 0x1.a7cfe4p-89f, 0x1.9e55fp-26f, 0.0f,
     0x1.90f394p-126f, 0x1.68cecap-77f, 0.0f, 0x1.04c37p-39f, 0x1.b034fep-103f, 0.0f,
     0.0f, 0x1.00c90ep-22f, 0x1.f110eep-80f, 0x1.f91f1cp-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c39a2p-73f, 0.0f, 0x1.702d12p-57f, 0.0f, 0x1.21721ep-22f, 0x1.61fb0cp-88f,
     0.0f, 0x1.fc921ap-92f, 0.0f, 0.0f, 0.0f, 0x1.5015dp-82f, 0x1.0fb45p-44f, 0.0f,
     0x1.1beabep-5f, 0.0f, 0x1.317888p-44f, 0x1.7dc1a4p-126f, 0x1.b78c54p-3f, 0.0f,
     0x1.c315b8p-25f, 0x1.afcabp-112f, 0x1.60015p-21f, 0x1.b0eb4ep-106f,
     0x1.5745c4p-48f, 0x1.be6a3ap-7f, 0.0f, 0.0f, 0x1.2164e6p-91f, 0.0f,
     0x1.4bd26ep-69f, 0.0f, 0.0f, 0x1.e01a44p-8f, 0.0f, 0.0f, 0.0f, 0x1.3de266p-22f,
     0x1.03f5e6p-111f, 0.0f, 0.0f, 0x1.30de72p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9ac48p-82f, 0x1.ae5f66p-53f, 0x1.401922p-16f, 0.0f, 0.0f, 0.0f,
     0x1.9af952p-9f, 0.0f, 0.0f, 0x1.ad736cp-85f, 0.0f, 0.0f, 0x1.09667p-8f,
     0x1.edae64p-21f, 0x1.523aep-66f, 0.0f, 0.0f, 0x1.e1624p-61f, 0x1.370bp-84f, 0.0f,
     0x1.fc05fap-52f, 0x1.1b209cp-88f, 0x1.3c30b4p-47f, 0x1.896fbap-79f, 0.0f, 0.0f,
     0x1.605dd8p-13f, 0.0f, 0x1.b879b6p-11f, 0x1.b76eb4p-8f, 0x1.36dc7ep-103f, 0.0f,
     0.0f, 0x1.89e9c8p-89f, 0x1.0decbp-46f, 0x1.fd2194p-21f, 0.0f, 0x1.b65916p-6f,
     0.0f, 0.0f, 0x1.07a0a6p-97f, 0.0f, 0x1.1691fap-14f, 0x1.6c5184p-95f,
     0x1.95e8bap-108f, 0.0f, 0.0f, 0x1.2d99c4p-72f, 0x1.4c2adap-39f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_log10f8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_log10f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_log10f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
