/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf1_u10purecfma.c --function Sleef_logf1_u10purecfma \
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
     0x1.8485bcp-11f, 0x1.24c98ep-88f, 0.0f, 0.0f, 0.0f, 0x1.42b20ap-66f, 0.0f,
     0x1.051dc8p-77f, 0.0f, 0x1.9872d8p-99f, 0x1.0bb362p-22f, 0.0f, 0.0f,
     0x1.a088c2p-102f, 0.0f, 0.0f, 0x1.846b8cp-49f, 0x1.252056p-67f, 0.0f,
     0x1.71cea4p-69f, 0x1.d5551p-34f, 0.0f, 0x1.b2ad08p-114f, 0.0f, 0x1.90f98cp-9f,
     0x1.6e12f4p-121f, 0.0f, 0.0f, 0x1.de6a46p-41f, 0x1.8b2096p-89f, 0x1.3ab8f8p-60f,
     0.0f, 0x1.a18bfep-112f, 0x1.f662ccp-66f, 0.0f, 0.0f, 0.0f, 0x1.846076p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.681cd6p-49f, 0.0f, 0.0f, 0.0f, 0x1.ec16c6p-116f,
     0x1.21076p-12f, 0x1.2f82b8p-9f, 0.0f, 0.0f, 0x1.cee29ep-99f, 0x1.4b0f12p-75f,
     0x1.fcb28cp-87f, 0.0f, 0x1.6d61bp-61f, 0x1.fff5b2p-57f, 0.0f, 0.0f,
     0x1.bf8f56p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d30498p-42f, 0.0f,
     0x1.a48aecp-100f, 0.0f, 0x1.01dc5ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fefe02p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f849cp-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1006d4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca75eap-12f, 0.0f,
     0x1.13094cp-5f, 0.0f, 0.0f, 0.0f, 0x1.0b091ap-83f, 0x1.34567cp-73f,
     0x1.2734c4p-55f, 0x1.37d1ecp-63f, 0.0f, 0.0f, 0x1.00c42cp-61f, 0x1.d85dc6p-41f,
     0.0f, 0.0f, 0.0f, 0x1.abf316p-118f, 0.0f, 0x1.34263p-46f, 0.0f, 0x1.598442p-59f,
     0x1.34835p-8f, 0.0f, 0x1.c82258p-43f, 0x1.d8ecep-124f, 0x1.022388p-1f, 0.0f,
     0.0f, 0.0f, 0x1.0eabc4p-16f, 0x1.1223e8p-90f, 0x1.6d9df4p-24f, 0.0f, 0.0f,
     0x1.de7fe8p-80f, 0x1.2d74bp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09c8b6p-29f,
     0x1.28954ep-112f, 0x1.05e374p-3f, 0.0f, 0.0f, 0x1.fcf2d8p-77f, 0.0f, 0.0f, 0.0f,
     0x1.4ceca2p-93f, 0.0f, 0x1.47dc1ap-68f, 0x1.e64186p-42f, 0.0f, 0x1.0067fep-42f,
     0.0f, 0.0f, 0.0f, 0x1.479edep-59f, 0x1.53277ep-25f, 0x1.4ca20cp-61f,
     0x1.9cd33cp-111f, 0x1.699d76p-62f, 0x1.f61edap-48f, 0x1.b8e186p-108f,
     0x1.2b2de2p-98f, 0.0f, 0x1.3c4d02p-123f, 0x1.80f27cp-104f, 0.0f, 0.0f,
     0x1.37b868p-36f, 0.0f, 0x1.ea7b0cp-106f, 0.0f, 0.0f, 0x1.04f908p-75f,
     0x1.27a5dp-120f, 0.0f, 0.0f, 0x1.1693a6p-87f, 0.0f, 0x1.80c4a8p-96f,
     0x1.afd22ap-118f, 0.0f, 0x1.57113ep-111f, 0x1.0c0926p-8f, 0x1.accb4cp-98f,
     0x1.82f0f8p-31f, 0x1.bec5b4p-59f, 0x1.38a7cp-58f, 0x1.33d498p-70f,
     0x1.4252a8p-31f, 0x1.33f9dap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9448c4p-41f, 0.0f, 0.0f, 0.0f, 0x1.eada6p-27f, 0x1.e71e2ap-34f, 0.0f,
     0x1.a35788p-71f, 0x1.3ede34p-116f, 0x1.5fd608p-5f, 0x1.e647e2p-92f, 0.0f,
     0x1.9fb042p-45f, 0x1.c1256p-70f, 0.0f, 0x1.d44a3ap-13f, 0x1.eca7a4p-14f,
     0x1.ae3c78p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d07bd6p-79f,
     0x1.27d43cp-99f, 0x1.e22eb2p-112f, 0x1.9c28dap-101f, 0.0f, 0.0f, 0.0f,
     0x1.38efb8p-33f, 0x1.9b8cc4p-34f, 0.0f, 0.0f, 0x1.3fe26ap-4f, 0.0f, 0.0f,
     0x1.82ed82p-10f, 0x1.0c9a0ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce6074p-66f, 0.0f, 0x1.ab4b3p-31f, 0.0f, 0.0f, 0x1.72aecep-97f,
     0x1.216e02p-108f, 0x1.9bfbdp-60f, 0x1.3d2aeap-30f, 0.0f, 0.0f, 0.0f,
     0x1.867d5cp-35f, 0x1.3c776ap-27f, 0.0f, 0.0f, 0x1.2a1c8cp-122f, 0.0f, 0.0f, 0.0f,
     0x1.df07cap-89f, 0.0f, 0.0f, 0x1.97c5c6p-95f, 0.0f, 0.0f, 0.0f, 0x1.9c8462p-51f,
     0.0f, 0x1.79a736p-77f, 0x1.cfe8f4p-59f, 0.0f, 0.0f, 0x1.22d1fcp-36f, 0.0f, 0.0f,
     0x1.d282p-70f, 0x1.80c214p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ea126p-98f, 0.0f,
     0x1.dadd86p-50f, 0.0f, 0x1.6ddf26p-49f, 0x1.d94cdp-120f, 0.0f, 0.0f, 0.0f,
     0x1.28121ap-89f, 0.0f, 0x1.f0b636p-113f, 0x1.ab7c18p-50f, 0x1.4d78acp-112f,
     0x1.0a4832p-39f, 0.0f, 0.0f, 0x1.5a3f4ap-76f, 0x1.0d4a64p-105f, 0x1.e8d7cp-72f,
     0.0f, 0x1.b0dc16p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf31p-38f, 0.0f, 0x1.78ddeap-103f, 0x1.4ced4p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.095c8ap-37f, 0x1.32c44ep-10f, 0.0f, 0.0f,
     0x1.148174p-94f, 0.0f, 0x1.a0dbdap-55f, 0.0f, 0x1.0ebdap-82f, 0x1.9755fcp-7f,
     0.0f, 0.0f, 0.0f, 0x1.d8ee58p-114f, 0.0f, 0.0f, 0x1.29d92p-13f, 0.0f,
     0x1.445e26p-60f, 0.0f, 0.0f, 0.0f, 0x1.f420b4p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e1958ep-1f, 0x1.93fa32p-71f, 0x1.ba9148p-92f, 0x1.50567ep-104f,
     0x1.26004ap-3f, 0.0f, 0x1.020526p-126f, 0.0f, 0x1.7d37aap-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a0c78p-52f, 0.0f, 0.0f, 0x1.c3706ap-46f, 0x1.01fe9ap-106f,
     0x1.e7788ap-34f, 0x1.53a32ap-103f, 0x1.329dacp-49f, 0x1.f1e89cp-61f,
     0x1.038432p-106f, 0x1.b39f06p-9f, 0.0f, 0.0f, 0x1.a955dcp-23f, 0.0f,
     0x1.75876cp-25f, 0.0f, 0x1.69a3bep-97f, 0.0f, 0.0f, 0.0f, 0x1.8aa626p-109f,
     0x1p0f, 0x1.2bd40cp-2f, 0x1.26b82ep-105f, 0x1.b5ca06p-15f, 0x1.d06048p-42f,
     0x1.0fbbbap-69f, 0x1.e17916p-117f, 0.0f, 0.0f, 0x1.3bacfcp-40f, 0x1.8155bap-118f,
     0x1.b5ea8cp-9f, 0.0f, 0.0f, 0x1.934994p-106f, 0x1.970bcap-8f, 0x1.9be32p-85f,
     0x1.01b0fcp-94f, 0.0f, 0.0f, 0x1.c64e0ep-50f, 0x1.18263ep-57f, 0x1.ebd184p-103f,
     0.0f, 0x1.127328p-102f, 0x1.bfe0dep-93f, 0x1.f08fbap-123f, 0.0f, 0x1.64c146p-11f,
     0.0f, 0.0f, 0x1.abf468p-84f, 0.0f, 0x1.058466p-57f, 0.0f, 0.0f, 0.0f,
     0x1.d36798p-102f, 0.0f, 0.0f, 0x1.64a526p-109f, 0.0f, 0.0f, 0.0f,
     0x1.b8eec6p-74f, 0x1.20cf64p-37f, 0x1.ea45f4p-111f, 0.0f, 0.0f, 0x1.b5210ep-117f,
     0.0f, 0.0f, 0.0f, 0x1.9f955p-4f, 0x1.400262p-114f, 0.0f, 0.0f, 0x1.3f7dd2p-55f,
     0x1.0cca98p-55f, 0x1.1f3f0ap-2f, 0.0f, 0x1.8ab532p-40f, 0x1.4424b6p-16f,
     0x1.272272p-112f, 0x1p0f, 0.0f, 0x1.0d7044p-36f, 0x1.fe41cp-61f, 0.0f, 0.0f,
     0.0f, 0x1.c32682p-88f, 0.0f, 0.0f, 0x1.dadb7ep-1f, 0x1.a0c89ap-4f, 0.0f, 0.0f,
     0x1.68d626p-68f, 0.0f, 0x1.c3caf8p-111f, 0x1.7e1e8p-117f, 0.0f, 0.0f, 0.0f,
     0x1.8c35cap-84f, 0.0f, 0.0f, 0.0f, 0x1.c56dd4p-57f, 0x1.ef2d36p-117f, 0.0f, 0.0f,
     0x1.b1f9eep-82f, 0x1.33b42p-118f, 0.0f, 0x1.7c7d5cp-42f, 0x1.68f20cp-17f,
     0x1.142e7p-108f, 0.0f, 0x1.d69758p-87f, 0x1.07d81ep-108f, 0.0f, 0x1.035d4ap-118f,
     0.0f, 0x1.5e4572p-122f, 0.0f, 0x1.1bcc26p-28f, 0x1.8cfabcp-52f, 0.0f,
     0x1.8db4eap-57f, 0x1.7c8d4ep-57f, 0x1.be8bfcp-15f, 0x1.4f09f8p-16f,
     0x1.dffcaep-80f, 0.0f, 0.0f, 0x1.40a634p-12f, 0.0f, 0.0f, 0x1.69bbd8p-50f,
     0x1.3af6dep-122f, 0x1.5e5ae2p-37f, 0.0f, 0.0f, 0.0f, 0x1.c6d62ep-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.987024p-111f, 0x1.66978ap-56f, 0x1.6a13eap-109f, 0.0f,
     0x1.6e6e68p-58f, 0.0f, 0x1.0d37b8p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3c97ep-102f, 0x1.d4a832p-58f, 0x1.12e786p-1f, 0x1.3ece72p-27f,
     0x1.c47d28p-113f, 0.0f, 0x1.8065aap-29f, 0x1.c1d7e8p-95f, 0x1.051c8ep-10f,
     0x1.735574p-28f, 0x1.9c464ep-19f, 0.0f, 0x1.0fd968p-17f, 0.0f, 0x1.d3c942p-2f,
     0.0f, 0.0f, 0x1.45c054p-86f, 0x1.bfc42ap-100f, 0.0f, 0.0f, 0.0f,
     0x1.0597c4p-117f, 0.0f, 0.0f, 0x1p0f, 0x1.f98688p-103f, 0x1.639becp-18f,
     0x1.4bef9ep-61f, 0.0f, 0x1.deb704p-43f, 0x1.ae3092p-40f, 0.0f, 0.0f,
     0x1.0f27a2p-73f, 0x1.832a96p-121f, 0x1.cb8738p-34f, 0x1.bc4f96p-20f,
     0x1.fd8c76p-103f, 0.0f, 0.0f, 0x1.81a5d8p-114f, 0x1.d47f92p-9f, 0.0f, 0.0f,
     0x1.1d8a44p-52f, 0.0f, 0x1.504ef6p-44f, 0.0f, 0x1.3614cp-124f, 0.0f,
     0x1.7caeeap-24f, 0x1.e58706p-72f, 0.0f, 0.0f, 0x1.a488e6p-37f, 0.0f, 0.0f,
     0x1.7c169ap-58f, 0x1.32e196p-20f, 0x1.a969d8p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2db8ap-36f, 0.0f, 0x1.77e05ep-46f, 0x1.0f59bp-61f, 0.0f, 0.0f,
     0x1.dd90cp-87f, 0x1.46ae8cp-38f, 0x1.350286p-46f, 0x1.9d803ep-28f,
     0x1.6bde78p-47f, 0x1.857d8cp-2f, 0.0f, 0x1.070a0cp-80f, 0x1.e2c9e4p-10f,
     0x1.8a4f6p-30f, 0x1.a73c9cp-13f, 0.0f, 0x1.644388p-123f, 0.0f, 0x1.e93984p-93f,
     0x1.faf71p-69f, 0x1.5da21cp-82f, 0x1.176a84p-72f, 0x1.b3a098p-41f, 0.0f,
     0x1.02b83ap-15f, 0x1.4ee62p-123f, 0.0f, 0x1.346b9ep-105f, 0x1.2b7b96p-89f,
     0x1.a7f23p-26f, 0x1.a186fp-110f, 0x1.5f343cp-70f, 0.0f, 0x1.6e0656p-57f,
     0x1.2c1696p-35f, 0x1.d56d84p-98f, 0x1.133928p-24f, 0.0f, 0.0f, 0.0f,
     0x1.c7723ep-7f, 0x1.7c6d2p-93f, 0.0f, 0x1.106924p-121f, 0x1.9d520ep-54f,
     0x1.d9d708p-79f, 0x1.5ca828p-115f, 0x1.cfeb5cp-62f, 0x1.1f747ep-39f, 0.0f,
     0x1.3f55d8p-11f, 0x1.ed7f9cp-119f, 0.0f, 0.0f, 0x1.82be72p-41f, 0x1.df62bp-10f,
     0x1.7c343ep-13f, 0.0f, 0x1.f3850ap-113f, 0.0f, 0.0f, 0x1.957b5cp-97f, 0.0f,
     0x1.c331dap-50f, 0.0f, 0.0f, 0x1.cf346cp-67f, 0x1.e15dd4p-76f, 0x1.99556ap-11f,
     0.0f, 0.0f, 0x1.332942p-18f, 0x1.e21242p-101f, 0x1.73df2p-29f, 0x1.125914p-85f,
     0.0f, 0x1.0f7f8ap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b8dbp-3f, 0.0f,
     0.0f, 0x1.f1b8ep-121f, 0.0f, 0.0f, 0.0f, 0x1.7124e4p-49f, 0x1.37ab28p-4f,
     0x1.219196p-61f, 0.0f, 0x1.5c109ep-120f, 0.0f, 0.0f, 0x1.57681cp-2f,
     0x1.12efe2p-26f, 0x1.75b618p-63f, 0x1.bc0e16p-47f, 0x1.258602p-110f,
     0x1.e5e13ap-92f, 0.0f, 0.0f, 0x1.87409ep-61f, 0.0f, 0x1.c5242ep-116f, 0.0f, 0.0f,
     0x1.4c546cp-67f, 0.0f, 0x1.247e68p-105f, 0.0f, 0x1.17092cp-117f, 0.0f,
     0x1.38fc46p-98f, 0x1.88e5c8p-16f, 0.0f, 0.0f, 0x1.efef64p-89f, 0.0f, 0.0f,
     0x1.d6ed16p-84f, 0.0f, 0x1.20af1cp-115f, 0x1.ca51b4p-20f, 0.0f, 0x1.2a140cp-62f,
     0.0f, 0x1.385988p-82f, 0.0f, 0.0f, 0x1.d00e42p-15f, 0.0f, 0.0f, 0.0f,
     0x1.c1faep-56f, 0.0f, 0x1.70a256p-122f, 0x1.b9b516p-7f, 0.0f, 0.0f, 0.0f,
     0x1.8d1ecep-28f, 0x1.cbb4fap-69f, 0x1.14ee0ap-86f, 0.0f, 0.0f, 0x1.2e7758p-47f,
     0x1.a1c14cp-12f, 0.0f, 0.0f, 0x1.072f2ep-113f, 0.0f, 0.0f, 0x1.cd8558p-113f,
     0x1.b74472p-22f, 0.0f, 0x1.3e5a6cp-5f, 0x1.9555eep-11f, 0x1.eb1beap-66f, 0.0f,
     0x1.d135d4p-56f, 0x1.bcb45ap-70f, 0.0f, 0.0f, 0x1.459edcp-100f, 0.0f,
     0x1.95a664p-45f, 0x1.512e2cp-1f, 0x1.df20bcp-87f, 0x1.ebce8cp-64f, 0.0f, 0.0f,
     0.0f, 0x1.4cbbc6p-95f, 0.0f, 0.0f, 0x1.d7615ep-27f, 0x1.d810fap-24f,
     0x1.0199c2p-30f, 0x1.d44ca4p-124f, 0x1.655e42p-11f, 0x1.de9e3cp-6f,
     0x1.34f6d8p-55f, 0x1.6a53f4p-11f, 0.0f, 0.0f, 0x1.289cfcp-70f, 0.0f, 0.0f,
     0x1.18a1f2p-36f, 0x1.ec41dap-101f, 0x1.703eap-42f, 0x1.059dc6p-17f,
     0x1.4a2dbep-8f, 0.0f, 0.0f, 0x1.975c68p-89f, 0x1.301e3ap-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5c0b1ap-91f, 0x1.496a66p-94f, 0.0f, 0x1.e4c706p-71f,
     0x1.cac69p-43f, 0x1.c4d8c8p-33f, 0.0f, 0x1.f3c842p-88f, 0.0f, 0x1.d8222cp-28f,
     0x1.b2b628p-55f, 0x1.871374p-32f, 0.0f, 0.0f, 0x1p0f, 0x1.ba528p-36f,
     0x1.24b374p-121f, 0x1.c1bd02p-51f, 0x1.1657fp-106f, 0x1.056d5cp-3f,
     0x1.5318dap-26f, 0.0f, 0x1.3689b2p-47f, 0.0f, 0x1.430e42p-76f, 0x1.18c064p-59f,
     0x1.4c541p-87f, 0.0f, 0.0f, 0.0f, 0x1.9f716p-94f, 0x1.99977ap-47f, 0.0f,
     0x1.2f66cp-85f, 0x1.bff51p-25f, 0.0f, 0x1.f59184p-45f, 0x1.ad7954p-95f, 0.0f,
     0x1.86618cp-73f, 0x1.e117d4p-2f, 0x1.2c10aap-28f, 0x1.984c44p-90f, 0.0f,
     0x1.15b7a4p-95f, 0x1.1da0e2p-119f, 0.0f, 0.0f, 0x1.fc4f8cp-106f, 0.0f, 0.0f,
     0x1.f7521ap-54f, 0x1.fb4d08p-104f, 0.0f, 0.0f, 0.0f, 0x1.000af6p-24f, 0.0f,
     0x1.0dd398p-112f, 0x1.44c41ep-5f, 0.0f, 0.0f, 0x1.6abb18p-28f, 0.0f,
     0x1.e1113p-121f, 0.0f, 0.0f, 0x1.b52d28p-89f, 0.0f, 0.0f, 0x1.de84bcp-65f,
     0x1.a85564p-63f, 0.0f, 0x1.4e486ap-78f, 0.0f, 0.0f, 0.0f, 0x1.c96526p-8f, 0.0f,
     0x1.0506f6p-118f, 0.0f, 0.0f, 0x1.eeeabap-89f, 0x1.756b28p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9ff7acp-58f, 0x1.41be06p-104f, 0.0f, 0x1.7dcf4ep-11f, 0.0f, 0.0f,
     0x1.c5a47ep-126f, 0.0f, 0x1.5c8e34p-91f, 0.0f, 0x1.58c27cp-88f, 0.0f,
     0x1.d0d404p-115f, 0.0f, 0x1.0993ep-4f, 0.0f, 0x1.dd9d56p-40f, 0.0f,
     0x1.bd2e3ap-119f, 0x1.b9386ap-77f, 0x1.03327cp-4f, 0x1.a12d2ap-13f,
     0x1.e9a60ap-121f, 0.0f, 0x1.eb5b7p-20f, 0x1.e75b34p-108f, 0x1.df3568p-62f,
     0x1.72fef2p-5f, 0x1.0c1aa6p-70f, 0.0f, 0.0f, 0x1.97bcep-54f, 0x1.b9140ep-77f,
     0.0f, 0x1.468eb8p-60f, 0x1.c4b0dp-76f, 0.0f, 0x1.1f89dep-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f6c024p-88f, 0.0f, 0x1.d3dda6p-38f, 0x1.240ae2p-68f,
     0x1.c8f052p-28f, 0x1.a27accp-95f, 0x1.e64a0ep-33f, 0.0f, 0x1.85e9c6p-39f, 0.0f,
     0x1.d5a1d8p-91f, 0.0f, 0.0f, 0.0f, 0x1.745faap-105f, 0x1.e997c6p-66f,
     0x1.481608p-105f, 0.0f, 0.0f, 0x1.076974p-77f, 0.0f, 0x1.e17ffep-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e3a06p-91f, 0x1.5bb9bep-68f, 0x1.3ba242p-87f,
     0x1.b77e34p-40f, 0x1.b99f3ep-55f, 0.0f, 0x1.42ec8ep-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2b34cp-52f, 0x1.3d058ap-21f, 0x1.962cc2p-86f, 0x1.afd90ap-50f, 0.0f, 0.0f,
     0x1.b66cb4p-103f, 0.0f, 0.0f, 0x1.19b612p-92f, 0x1.769232p-14f, 0.0f,
     0x1.79ef84p-113f, 0x1.7b650ep-35f, 0.0f, 0x1.91ead8p-114f, 0.0f,
     0x1.4de7c2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa612ap-51f, 0.0f, 0x1.c560f2p-74f,
     0x1.0edf6p-32f, 0x1.dc46a8p-54f, 0x1.580b0ap-85f
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
            tmp1 = Sleef_logf1_u10purecfma(tmp0);
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
    printf("Sleef_logf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logf1_u10purecfma bench acc %a\n", global_bench_acc);
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
