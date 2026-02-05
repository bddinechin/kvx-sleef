/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erff1_u10purecfma.c --function Sleef_erff1_u10purecfma \
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
     0.0f, 0x1.8ecbf4p-16f, 0x1.6c118ap-81f, 0x1.bb2872p-83f, 0.0f, 0.0f,
     0x1.3d525cp-78f, 0.0f, 0x1.3282eap-48f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.b934f4p-32f, 0x1.a59068p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97f8d2p-62f, 0.0f, 0.0f, 0x1.774f4ep-97f, 0.0f, 0x1.62d544p-26f, 0.0f,
     0x1.c15086p-46f, 0x1.d04032p-107f, 0.0f, 0.0f, 0.0f, 0x1.07017ap-99f,
     0x1.c284d2p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1932c2p-63f, 0.0f, 0.0f,
     0x1.3ad35ap-118f, 0.0f, 0x1.79b238p-58f, 0.0f, 0.0f, 0x1.d17736p-59f,
     0x1.267fbep-36f, 0.0f, 0x1.728226p-52f, 0.0f, 0x1.89c4dcp-1f, 0x1.57686ap-25f,
     0.0f, 0x1.42e254p-105f, 0x1.88076p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.781b7ap-15f,
     0x1.5e370ap-93f, 0x1.102906p-33f, 0x1.c39e44p-53f, 0x1.95d822p-13f, 0.0f,
     0x1.b6a3e8p-72f, 0.0f, 0.0f, 0x1.bbadbcp-12f, 0.0f, 0x1.105802p-85f, 0.0f,
     0x1.88c4dcp-116f, 0x1.0b7cf6p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45100ap-25f,
     0x1.f4ea88p-55f, 0.0f, 0x1.934232p-42f, 0x1.8ed5f8p-89f, 0x1.c1caep-45f,
     0x1.84ced8p-126f, 0x1.3c896p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b69632p-6f,
     0.0f, 0x1.8da36ep-22f, 0x1.507b82p-91f, 0x1.b7c1a4p-107f, 0.0f, 0.0f, 0.0f,
     0x1.c75c34p-93f, 0x1.130b5p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c464f4p-18f, 0.0f,
     0.0f, 0.0f, 0x1.c2a102p-61f, 0.0f, 0.0f, 0x1.d6d8b4p-30f, 0.0f, 0.0f,
     0x1.7a20ap-95f, 0x1.9685e6p-36f, 0x1.2b2784p-4f, 0.0f, 0.0f, 0.0f,
     0x1.0b58acp-44f, 0.0f, 0.0f, 0x1.1251cp-63f, 0x1.9e3368p-28f, 0.0f, 0.0f, 0.0f,
     0x1.1b782ep-75f, 0x1.154e2ep-114f, 0x1.f8b31ep-114f, 0.0f, 0x1.1f5f14p-71f,
     0x1.43f69ap-125f, 0x1.f2727ap-13f, 0x1.c505d8p-53f, 0x1.183d2ap-54f, 0.0f, 0.0f,
     0.0f, 0x1.144a98p-29f, 0x1.d69a94p-100f, 0x1.ace9d2p-62f, 0x1.9a15ccp-24f,
     0x1.cdcb5ep-49f, 0.0f, 0x1.4ef94ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.045d6cp-29f,
     0.0f, 0x1.76619ap-110f, 0.0f, 0.0f, 0x1.a4b7eap-69f, 0.0f, 0x1.a64476p-47f,
     0x1.122e58p-33f, 0x1.21e47p-22f, 0.0f, 0.0f, 0x1.347ba8p-27f, 0x1.6501b8p-124f,
     0x1.70b70ep-54f, 0x1.dfb7fcp-15f, 0.0f, 0.0f, 0x1.cc0aep-101f, 0x1.1e3746p-104f,
     0x1.517ad6p-112f, 0x1.35225p-119f, 0x1.ad4fc8p-7f, 0x1.fc9abcp-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1747f4p-81f, 0.0f, 0x1.4c9128p-93f, 0.0f,
     0x1.4ca4d6p-68f, 0.0f, 0.0f, 0x1.dee46ap-87f, 0x1.6375a6p-72f, 0x1.68a5c2p-115f,
     0.0f, 0.0f, 0.0f, 0x1.ee2e84p-16f, 0.0f, 0x1.62341p-93f, 0x1.6bea5ep-95f,
     0x1.09a0b2p-120f, 0x1p0f, 0.0f, 0x1.186366p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd1e94p-46f, 0x1.c80b3cp-52f, 0x1.ea2d18p-11f, 0.0f, 0.0f, 0.0f,
     0x1.3514a6p-15f, 0.0f, 0x1.09d77ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d706aep-36f,
     0.0f, 0.0f, 0x1.f3d106p-57f, 0x1.b423cep-98f, 0x1.0e2fe6p-90f, 0.0f, 0.0f,
     0x1.80a082p-87f, 0x1.8a7f12p-74f, 0x1.d3a906p-124f, 0x1.c2163ep-100f,
     0x1.5ff368p-36f, 0x1.79f55p-6f, 0x1.e1c696p-121f, 0.0f, 0x1.90afcep-114f, 0.0f,
     0.0f, 0.0f, 0x1.6c91cp-96f, 0x1.29725ap-11f, 0x1.74eec6p-27f, 0x1.b9a0b8p-27f,
     0.0f, 0x1.a84ee8p-26f, 0x1.cfc0d6p-86f, 0x1.7ef97ap-107f, 0x1.3f4c2p-109f,
     0x1.05dcd8p-86f, 0.0f, 0.0f, 0x1.41804ap-88f, 0x1.2e6ccp-34f, 0.0f,
     0x1.c0c59ap-26f, 0x1.5ebd84p-121f, 0x1.fa39c2p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.879ecap-16f, 0x1.147d96p-75f, 0x1.304b84p-80f, 0.0f, 0x1.354176p-56f,
     0x1.e0fb62p-79f, 0x1.8918e4p-47f, 0.0f, 0x1.d59a66p-119f, 0.0f, 0.0f,
     0x1.1c64p-5f, 0.0f, 0x1.04c8a6p-89f, 0x1.fe6592p-9f, 0.0f, 0.0f,
     0x1.dda7a4p-118f, 0x1.96a776p-125f, 0x1.4cb698p-32f, 0.0f, 0x1.35198ap-11f,
     0x1.538128p-38f, 0.0f, 0x1.2f260ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f968c2p-112f,
     0.0f, 0.0f, 0x1.641b46p-9f, 0x1.a70ba4p-77f, 0x1.33742p-34f, 0.0f, 0.0f,
     0x1.e4590ep-119f, 0x1.9285d8p-107f, 0.0f, 0x1.f47858p-21f, 0x1.afb71p-94f, 0.0f,
     0x1.5ad288p-103f, 0.0f, 0x1.adba98p-81f, 0x1.a7964ep-46f, 0x1.eb6148p-49f, 0.0f,
     0x1.cad4bp-34f, 0.0f, 0x1.407e0ap-110f, 0.0f, 0x1.318eb4p-71f, 0x1.79ad72p-77f,
     0.0f, 0x1.a905d8p-84f, 0x1.893866p-23f, 0x1.ea405ep-101f, 0.0f, 0.0f,
     0x1.3cbf1p-55f, 0x1.04bda6p-19f, 0x1.5f8dfep-31f, 0x1.6c0fdp-60f,
     0x1.fa883cp-125f, 0x1.b0c2b2p-74f, 0x1.18d366p-73f, 0x1.2d30cap-50f, 0.0f,
     0x1.0db116p-119f, 0.0f, 0.0f, 0x1.4feadp-36f, 0.0f, 0.0f, 0x1.1e2396p-25f,
     0x1.7267dap-103f, 0x1.50583p-14f, 0x1.b052f6p-29f, 0.0f, 0.0f, 0.0f,
     0x1.168404p-38f, 0x1.42c8dcp-56f, 0.0f, 0x1.ff0a38p-124f, 0.0f, 0x1.126c96p-28f,
     0x1.726318p-62f, 0x1.e864a8p-114f, 0x1.af46eap-10f, 0x1.69337p-3f, 0.0f,
     0x1.78242cp-96f, 0x1.dae48p-44f, 0.0f, 0x1.df6bdep-101f, 0.0f, 0x1.2843bcp-103f,
     0x1.865798p-54f, 0.0f, 0x1.1a6e62p-110f, 0.0f, 0x1.baae76p-125f,
     0x1.3ca68ep-120f, 0x1.4f8bacp-2f, 0x1.967362p-63f, 0.0f, 0x1.543898p-52f,
     0x1.f3e0ep-77f, 0.0f, 0.0f, 0x1.f6e85cp-115f, 0x1.72687ap-47f, 0x1.410d14p-4f,
     0x1.b4b70cp-79f, 0x1.090f62p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46abp-33f,
     0x1.e66574p-24f, 0.0f, 0.0f, 0.0f, 0x1.b5154p-39f, 0.0f, 0x1.2f248p-76f, 0.0f,
     0x1.8855b4p-3f, 0.0f, 0x1.a1f47ap-4f, 0x1.f4fdc2p-18f, 0.0f, 0x1.14127p-32f,
     0x1.8e4df4p-21f, 0.0f, 0.0f, 0.0f, 0x1.a6c37cp-38f, 0.0f, 0.0f, 0x1.90afbp-111f,
     0x1.f939cep-74f, 0.0f, 0.0f, 0x1.73275cp-25f, 0x1.c86134p-52f, 0.0f, 0.0f,
     0x1.e42fa6p-55f, 0.0f, 0.0f, 0x1.042fcep-33f, 0x1.027edcp-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1d392p-28f, 0.0f, 0x1.e351c6p-90f,
     0x1.07d706p-121f, 0x1.959bc6p-81f, 0.0f, 0.0f, 0.0f, 0x1.321b8ap-84f,
     0x1.30097cp-66f, 0x1.c95976p-3f, 0x1.dbe6d4p-122f, 0x1.0a471ep-9f,
     0x1.4999e8p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6ebbap-95f, 0x1.f7715p-101f, 0.0f,
     0.0f, 0.0f, 0x1.182552p-125f, 0x1.1b76cap-69f, 0.0f, 0x1.a1c092p-76f,
     0x1.644d1ep-52f, 0.0f, 0.0f, 0x1.9f7952p-78f, 0x1.5c92dap-82f, 0x1.d47c6p-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c272fp-112f, 0x1.686d92p-27f, 0.0f, 0x1.e6794ep-30f,
     0x1.c191e2p-78f, 0x1.40a14ep-95f, 0.0f, 0x1.4d0f7cp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a5a22p-119f, 0.0f, 0x1.8d9d72p-66f, 0x1.88286ep-5f, 0x1.a39eb8p-88f,
     0x1.a7121cp-81f, 0.0f, 0.0f, 0x1.787ebp-68f, 0x1.ea22a8p-10f, 0.0f, 0.0f,
     0x1.d39b2p-121f, 0x1.0c370ap-119f, 0.0f, 0.0f, 0x1.dff27cp-62f, 0.0f, 0.0f, 0.0f,
     0x1.5e40b6p-120f, 0x1.16bea6p-75f, 0.0f, 0x1.65887ap-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7891p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.371aa8p-124f, 0.0f, 0x1.0d17cp-17f,
     0.0f, 0x1.012342p-14f, 0.0f, 0x1.aacc8cp-1f, 0x1.42dc78p-34f, 0.0f, 0.0f, 0.0f,
     0x1.94e1f6p-102f, 0.0f, 0x1.05c002p-87f, 0x1.874906p-27f, 0x1.308c08p-106f, 0.0f,
     0x1p0f, 0x1.3866ap-56f, 0.0f, 0.0f, 0.0f, 0x1.66526ap-4f, 0.0f, 0x1.0dad2ap-74f,
     0x1.1df43p-64f, 0.0f, 0.0f, 0x1.6dc896p-103f, 0.0f, 0.0f, 0x1.fc4548p-54f,
     0x1.ffdc7ep-52f, 0.0f, 0x1.dc83b8p-30f, 0x1.2c58ecp-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.de76e2p-106f, 0x1.604454p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd4fd8p-117f, 0.0f, 0x1.517e5ep-52f, 0x1.b60b8p-35f, 0x1.0cd29p-14f,
     0x1.61c5e6p-50f, 0.0f, 0x1.485dep-46f, 0x1.16d40ap-22f, 0.0f, 0.0f,
     0x1.2736b4p-121f, 0.0f, 0x1.0d5c4cp-99f, 0x1.11f6f4p-104f, 0x1.76bab2p-39f, 0.0f,
     0.0f, 0x1.523256p-123f, 0x1.6cbefp-101f, 0x1.e149a6p-51f, 0x1.11240ep-23f,
     0x1.4a0cd6p-26f, 0x1.e3038p-61f, 0x1.32ac58p-118f, 0x1.823c6p-19f,
     0x1.c54f0ep-40f, 0x1.71e83cp-24f, 0.0f, 0.0f, 0x1.77426p-83f, 0.0f,
     0x1.6094aap-40f, 0x1.cdb87p-122f, 0.0f, 0x1.efadc8p-81f, 0x1.14626p-94f,
     0x1.b824acp-28f, 0x1.0999bep-89f, 0x1.58deb6p-113f, 0.0f, 0.0f, 0x1.2bd83cp-92f,
     0x1.08264cp-1f, 0x1.60cd36p-38f, 0.0f, 0.0f, 0x1.3fcc68p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc69e8p-89f, 0x1.dfede4p-45f, 0x1.5d8252p-17f, 0.0f,
     0x1.990f42p-111f, 0.0f, 0.0f, 0.0f, 0x1.eb7c9ep-98f, 0x1.69369p-15f, 0.0f, 0.0f,
     0x1.e1a192p-81f, 0x1.26a84p-86f, 0.0f, 0.0f, 0x1.98f97ap-85f, 0x1.9e1d48p-49f,
     0x1.656622p-14f, 0x1.721f8ep-56f, 0.0f, 0x1.ec69ccp-87f, 0.0f, 0x1.744eacp-14f,
     0.0f, 0.0f, 0x1.7a50e8p-13f, 0x1.bb286ap-76f, 0.0f, 0.0f, 0.0f, 0x1.6d1a58p-85f,
     0.0f, 0.0f, 0x1.5a3756p-42f, 0.0f, 0.0f, 0.0f, 0x1.ff9cdcp-62f, 0.0f, 0.0f,
     0x1.deeca4p-64f, 0x1.726d38p-87f, 0x1.0bc656p-44f, 0.0f, 0.0f, 0.0f,
     0x1.f807c6p-22f, 0x1.eac284p-106f, 0x1.3b7e0ap-123f, 0.0f, 0x1.425fe6p-88f, 0.0f,
     0.0f, 0x1.2b8f7ep-112f, 0x1.198c64p-37f, 0x1.1e9e86p-110f, 0x1.af8aa2p-14f, 0.0f,
     0.0f, 0.0f, 0x1.9ba1c8p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37dbe2p-29f,
     0x1.f60a62p-118f, 0x1.a4d7acp-84f, 0x1.165dc6p-32f, 0.0f, 0.0f, 0x1.e7325p-26f,
     0x1.fa4252p-61f, 0.0f, 0x1.6df21ep-94f, 0x1.9eb91p-86f, 0.0f, 0x1.fa4c38p-43f,
     0x1.3a0fc2p-28f, 0x1.afc8a2p-76f, 0.0f, 0x1.d96588p-26f, 0.0f, 0x1.7d59e2p-70f,
     0x1.3fce12p-24f, 0.0f, 0x1.413836p-35f, 0x1.41f9b4p-87f, 0x1.40ca4ep-39f, 0.0f,
     0x1.ff8d32p-125f, 0x1.2a71ccp-86f, 0x1.c6f45p-112f, 0.0f, 0x1.3ecc8ap-106f,
     0x1.128fa2p-46f, 0.0f, 0.0f, 0.0f, 0x1.c8e326p-88f, 0.0f, 0x1.d65a76p-14f,
     0x1.b7ecb4p-86f, 0.0f, 0.0f, 0x1.db6d0ap-117f, 0x1.54ae5ap-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0bce1ap-21f, 0.0f, 0x1.eb619p-5f, 0.0f, 0.0f, 0x1.f96b1ap-64f,
     0x1.2bef4p-51f, 0.0f, 0x1.dcb866p-29f, 0.0f, 0x1.ddc94cp-108f, 0.0f,
     0x1.df764ap-29f, 0x1.87fb3p-55f, 0x1.5296cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a15fap-82f, 0x1.df8dbep-48f, 0x1.b32be4p-20f,
     0x1.357b06p-87f, 0x1.fe4efcp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.144bf6p-95f,
     0x1.a7feecp-57f, 0x1.37223ep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fdfdep-22f,
     0x1.db23b2p-21f, 0x1.da31a8p-27f, 0x1.6a6a3cp-70f, 0x1.bb26a6p-9f, 0.0f, 0.0f,
     0x1.87e71ap-25f, 0x1.3e192ap-71f, 0.0f, 0.0f, 0.0f, 0x1.9479fcp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.22d14cp-69f, 0x1.c051d6p-49f, 0x1.eaa5ecp-80f, 0.0f,
     0x1.0f4514p-111f, 0x1.35d33ap-87f, 0.0f, 0.0f, 0x1.657aacp-58f, 0.0f, 0.0f, 0.0f,
     0x1.336e78p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.549f32p-75f, 0.0f, 0.0f, 0x1.ddd17cp-28f, 0.0f, 0x1.1e6dc8p-97f, 0.0f,
     0x1.6e9a1ep-56f, 0.0f, 0x1.d6a6dp-94f, 0x1.b0634ep-31f, 0.0f, 0x1.eae5acp-54f,
     0.0f, 0x1.de40fap-113f, 0.0f, 0x1.0c5edcp-54f, 0.0f, 0.0f, 0.0f, 0x1.d4c252p-81f,
     0x1.8e70f4p-38f, 0x1.04f246p-104f, 0x1.fd88d4p-46f, 0.0f, 0x1.627e44p-12f, 0.0f,
     0.0f, 0.0f, 0x1.01f4bap-62f, 0x1.707738p-124f, 0x1.b61cc4p-120f, 0x1.89ad1ap-71f,
     0.0f, 0.0f, 0x1.00f37ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0d0bep-111f, 0.0f,
     0.0f, 0x1.1ccda8p-101f, 0.0f, 0.0f, 0x1.9ef784p-123f, 0x1.915ap-123f, 0.0f, 0.0f,
     0x1.cad3fp-46f, 0x1.6b009ep-22f, 0x1.7b4a2cp-41f, 0.0f, 0x1.fb2b4ap-66f,
     0x1.ae4c84p-109f, 0.0f, 0.0f, 0x1.2e543ep-21f, 0x1.29ea24p-95f, 0.0f,
     0x1.f02cfap-11f, 0.0f, 0x1.23bd4p-110f, 0.0f, 0x1.3dc68ap-88f, 0.0f,
     0x1.9edca8p-21f, 0x1.cb4dbcp-84f, 0.0f, 0.0f, 0x1.4b4848p-109f, 0x1.7ccd2cp-14f,
     0x1.e6fd4p-119f, 0.0f, 0.0f, 0.0f, 0x1.27ac3cp-114f, 0x1.58502ap-3f,
     0x1.2c0d7ep-35f, 0.0f, 0x1.7587a4p-48f, 0x1.174ed4p-38f, 0.0f, 0.0f,
     0x1.42b8fep-103f, 0x1.54d1p-120f, 0x1.1ab4ep-112f, 0x1.717f02p-41f,
     0x1.075ccap-89f, 0x1.f05746p-85f, 0.0f, 0.0f, 0.0f, 0x1.6aa23ep-56f, 0.0f,
     0x1.467b52p-60f, 0.0f, 0x1.82fabp-32f, 0x1.555548p-7f, 0.0f, 0x1.2cacap-12f,
     0x1.3463dcp-54f, 0.0f, 0.0f, 0x1.7af5a2p-39f, 0.0f, 0x1.a6e92ep-68f, 0.0f,
     0x1.7a2b3ap-118f, 0.0f, 0.0f, 0x1.41431ep-90f, 0x1.54c98cp-108f,
     0x1.a6ddc4p-122f, 0.0f, 0x1.8142bap-37f, 0x1.53ce1ep-123f, 0x1.1d1012p-91f, 0.0f,
     0x1.15ab1ep-68f, 0.0f, 0.0f, 0x1.e954bcp-125f, 0x1.e909fep-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c0babep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f147b6p-91f,
     0x1.3ccb3cp-108f, 0x1.f5a1cep-115f, 0.0f, 0x1.07b9b2p-72f, 0x1.f2808ep-20f, 0.0f,
     0x1.2ea20ap-40f, 0x1.b77302p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76a5e6p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ad492p-1f, 0.0f, 0x1.1e98bp-60f, 0x1.a9479ep-82f,
     0x1.ce09a6p-114f, 0.0f, 0.0f, 0x1.3100d6p-52f, 0.0f, 0.0f, 0x1.0ddf46p-104f,
     0.0f, 0.0f, 0.0f, 0x1.802926p-43f, 0.0f, 0x1.9c6d84p-66f, 0x1.ab408ep-72f,
     0x1.178cap-19f, 0.0f, 0.0f, 0.0f, 0x1.6c0f56p-14f, 0x1.df663ap-115f,
     0x1.e0f772p-123f, 0x1.daa266p-4f, 0.0f, 0x1.1295c2p-26f, 0.0f, 0.0f,
     0x1.b20d06p-99f, 0.0f, 0.0f, 0.0f, 0x1.b48052p-32f
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
            tmp1 = Sleef_erff1_u10purecfma(tmp0);
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
    printf("Sleef_erff1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erff1_u10purecfma bench acc %a\n", global_bench_acc);
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
