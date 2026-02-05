/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fminf1_purecfma.c --function \
 *     Sleef_finz_fminf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.7fc12p-78f, 0x1.01dabcp-56f, 0x1.8bd6a8p-99f, 0x1.0d85fcp-60f, 0.0f,
     0x1.6c3142p-117f, 0x1.09f412p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2eec92p-97f, 0.0f,
     0x1.c01f58p-50f, 0.0f, 0.0f, 0x1.11293ep-69f, 0x1.7e3a58p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.49e922p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e67114p-106f, 0x1.5de06cp-72f,
     0.0f, 0.0f, 0.0f, 0x1.7aae6cp-86f, 0.0f, 0.0f, 0x1.b9f88cp-121f, 0x1.6247fp-58f,
     0x1.d055dcp-2f, 0.0f, 0x1.90e9a6p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.390deep-33f, 0x1.214b0ep-24f, 0.0f, 0x1.617ffcp-98f, 0x1.889868p-124f, 0.0f,
     0x1.203ccap-20f, 0x1.632b84p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80f0b4p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65f63cp-37f, 0x1.58eb24p-95f, 0.0f,
     0x1.3515eap-60f, 0.0f, 0x1.23d2a2p-85f, 0x1.90216ap-24f, 0x1.97eec8p-104f, 0.0f,
     0x1.11bbccp-57f, 0.0f, 0x1.d05718p-101f, 0x1.a52d26p-63f, 0x1.b9836cp-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4089c8p-77f, 0.0f, 0x1.7ecab4p-50f, 0x1.9540d2p-70f, 0.0f,
     0.0f, 0x1.82d878p-44f, 0x1.d29eb8p-20f, 0x1.a0ef52p-74f, 0x1.8b62cep-32f,
     0x1.c365c8p-52f, 0x1.88cbdcp-100f, 0x1.351eaap-43f, 0x1.c3c442p-55f,
     0x1.0b3332p-6f, 0x1.232e1ap-42f, 0.0f, 0x1.2763bcp-118f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.326d18p-21f, 0x1.de6118p-87f, 0x1.710e7cp-21f, 0x1.445a6ap-113f, 0.0f,
     0.0f, 0x1.4d1e36p-79f, 0x1.40f552p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f05344p-23f,
     0x1.ed1b34p-32f, 0.0f, 0x1.4ad452p-41f, 0x1.f0867cp-99f, 0.0f, 0.0f, 0.0f,
     0x1.60c386p-4f, 0x1.5df1bcp-64f, 0x1.7a5cf4p-47f, 0x1.9e187ep-46f,
     0x1.2b87fp-71f, 0x1.082f44p-106f, 0.0f, 0.0f, 0.0f, 0x1.1c99b8p-56f, 0.0f,
     0x1.de3892p-104f, 0x1.a7d0aep-71f, 0x1.a1ffccp-99f, 0x1.fec71ap-85f, 0.0f,
     0x1.56a0bep-123f, 0.0f, 0x1.6f9064p-55f, 0.0f, 0.0f, 0x1.b2bc2cp-35f,
     0x1.77e1dp-90f, 0x1.ae79a8p-82f, 0.0f, 0x1.bf0548p-80f, 0x1.480eecp-107f,
     0x1.b5475ep-16f, 0.0f, 0x1.91bfaap-118f, 0x1.455a8cp-19f, 0.0f, 0.0f, 0.0f,
     0x1.84ef6p-34f, 0x1.7a2ba8p-90f, 0.0f, 0.0f, 0x1.4bd002p-33f, 0.0f, 0.0f,
     0x1.60a46ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1d3eap-33f, 0x1.a7b84ap-51f, 0.0f,
     0.0f, 0x1.ef0208p-111f, 0.0f, 0.0f, 0.0f, 0x1.63975p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1c5cp-24f, 0.0f, 0x1.3f454p-10f, 0.0f,
     0x1.5b3aaep-25f, 0x1.44ee56p-71f, 0x1.1841c4p-51f, 0x1.5d94b6p-60f,
     0x1.6fedcep-30f, 0x1.818126p-77f, 0.0f, 0x1.3ffaa4p-108f, 0x1.5c5622p-1f, 0.0f,
     0x1.a17d36p-19f, 0.0f, 0x1.3b3104p-71f, 0x1.76167ep-58f, 0.0f, 0.0f,
     0x1.85b28ap-72f, 0.0f, 0x1.05d7b2p-92f, 0x1.4ee916p-39f, 0x1.ceb5d2p-24f,
     0x1.83cc3ap-56f, 0.0f, 0.0f, 0x1.03463ap-24f, 0.0f, 0x1.405e72p-108f,
     0x1.83149ep-7f, 0x1.489bf2p-105f, 0x1.1ce42p-43f, 0x1.728e28p-42f,
     0x1.4cb0ep-19f, 0.0f, 0.0f, 0x1.3fee82p-13f, 0.0f, 0.0f, 0x1.03290ep-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b38d1cp-126f, 0.0f, 0x1.ca8694p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e375bap-80f, 0x1.6859d2p-5f, 0x1.2a68ccp-56f, 0.0f, 0.0f, 0.0f,
     0x1.972e44p-1f, 0x1.f9be66p-48f, 0.0f, 0x1.5d1192p-89f, 0.0f, 0.0f,
     0x1.9912cep-119f, 0x1.25ab22p-27f, 0x1.3b138p-105f, 0.0f, 0x1.d9092p-55f, 0.0f,
     0.0f, 0x1.03a3ep-93f, 0x1.52edd2p-5f, 0x1.60aba4p-111f, 0.0f, 0.0f,
     0x1.5dc8aep-33f, 0.0f, 0.0f, 0.0f, 0x1.7949eap-59f, 0.0f, 0x1.22c0fcp-12f, 0.0f,
     0x1.ef9d32p-38f, 0x1.11d7b6p-115f, 0.0f, 0x1.c683d6p-45f, 0x1.14134cp-2f,
     0x1.0ef26ap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e756d4p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d89646p-15f, 0x1.bbc474p-11f, 0x1.209622p-73f, 0x1.b3314ep-122f,
     0.0f, 0.0f, 0.0f, 0x1.68a92cp-118f, 0.0f, 0x1.1c04cp-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.975e2cp-46f, 0.0f, 0.0f, 0x1.f36ca4p-56f, 0.0f, 0x1.0dfea2p-96f,
     0x1.a00ed8p-80f, 0.0f, 0.0f, 0x1.3faeeap-54f, 0.0f, 0x1.a224a4p-14f, 0.0f, 0.0f,
     0x1.18d56ap-108f, 0x1.974688p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab8b5cp-58f, 0x1.d4423cp-108f, 0x1.3c937ap-105f, 0x1.2c1c1p-57f, 0.0f, 0.0f,
     0x1.dd7aa2p-22f, 0x1.78afbp-35f, 0.0f, 0.0f, 0.0f, 0x1.8e4d2cp-88f,
     0x1.8fa9fap-115f, 0.0f, 0x1.e43f04p-50f, 0.0f, 0x1.0f27aep-12f, 0.0f,
     0x1.0778e2p-68f, 0.0f, 0x1.ee0254p-44f, 0x1.a9db22p-59f, 0.0f, 0x1.cb2fbap-90f,
     0.0f, 0x1.7997dp-39f, 0x1.1e194ap-89f, 0.0f, 0x1.6569eep-8f, 0.0f, 0.0f,
     0x1.7ff914p-106f, 0x1.7e8178p-56f, 0x1.dc9e92p-70f, 0.0f, 0x1.e4f118p-85f,
     0x1.762822p-121f, 0x1.ea64f2p-12f, 0.0f, 0x1.f191d8p-96f, 0.0f, 0x1.e8af58p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2efafep-18f, 0.0f, 0x1.b96dfcp-53f, 0.0f,
     0x1.49a384p-19f, 0x1.def496p-87f, 0x1.0e1bbp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.590758p-36f, 0.0f, 0.0f, 0.0f, 0x1.38736cp-111f, 0x1.089b36p-42f,
     0.0f, 0x1.a8be8ep-70f, 0x1.4ebe9ap-11f, 0.0f, 0x1.3b95bep-70f, 0.0f,
     0x1.67244cp-73f, 0x1.10e5bep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28a15p-115f,
     0x1.efb2a4p-126f, 0x1.45d164p-5f, 0x1.8e7c46p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c39cf8p-94f, 0x1.ec53fp-18f, 0.0f, 0x1.e0e002p-16f, 0x1.8dbb3ep-115f, 0.0f,
     0.0f, 0x1.87ca4cp-83f, 0x1.9caf62p-100f, 0x1.84350ep-98f, 0x1.e3f592p-46f,
     0x1.1c868ep-51f, 0.0f, 0.0f, 0.0f, 0x1.d7cfd8p-54f, 0.0f, 0.0f, 0x1.bb3696p-21f,
     0.0f, 0x1.15667ep-100f, 0x1.0c5cbap-58f, 0x1.f2e074p-32f, 0.0f, 0x1.c6e7dp-101f,
     0.0f, 0.0f, 0x1.dff04cp-13f, 0x1.880d14p-82f, 0.0f, 0x1.78be9ap-86f,
     0x1.f3c7e2p-24f, 0.0f, 0x1.6785ccp-44f, 0x1.f9608ep-16f, 0x1.306724p-12f, 0.0f,
     0.0f, 0x1.520b02p-22f, 0x1.b8a12ap-96f, 0.0f, 0x1.f3ea82p-14f, 0.0f,
     0x1.8a5d96p-21f, 0.0f, 0x1.46efd8p-76f, 0x1.74aadap-89f, 0x1.0b5c2cp-20f, 0.0f,
     0x1.cf3bacp-53f, 0x1.17a96ep-43f, 0x1.3986b6p-67f, 0x1.b46ad8p-10f, 0.0f, 0.0f,
     0x1.d3312ep-113f, 0x1.391c2ap-93f, 0.0f, 0.0f, 0.0f, 0x1.d2e024p-10f, 0.0f,
     0x1.ce025cp-49f, 0.0f, 0x1.373faap-101f, 0.0f, 0.0f, 0.0f, 0x1.e0554p-114f,
     0x1.5aeccp-85f, 0.0f, 0x1.edaa0ap-80f, 0x1.c4569ep-43f, 0x1.d65c9cp-115f,
     0x1.369558p-51f, 0.0f, 0x1.7b9844p-10f, 0.0f, 0x1.3a3ffep-112f, 0.0f,
     0x1.b2da9ep-75f, 0.0f, 0.0f, 0x1.b686d6p-103f, 0x1.4df926p-3f, 0x1.0cc158p-55f,
     0x1.ec0a34p-14f, 0x1.847784p-7f, 0.0f, 0x1.638f62p-101f, 0x1.303c62p-97f, 0.0f,
     0x1.6cb358p-90f, 0.0f, 0x1.50bf68p-20f, 0x1.9c0aaap-28f, 0.0f, 0.0f, 0.0f,
     0x1.7f32ap-117f, 0.0f, 0x1.164f54p-57f, 0x1.cc490ep-62f, 0x1.bc79b8p-60f, 0.0f,
     0.0f, 0x1.9e8eb8p-66f, 0.0f, 0.0f, 0x1.f0db4ap-27f, 0x1.41f6acp-62f, 0.0f,
     0x1.ac1dbep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c088ap-19f, 0x1.344bd6p-31f, 0.0f,
     0.0f, 0x1.1bb5bp-47f, 0.0f, 0x1.44d004p-47f, 0x1.4c7852p-19f, 0.0f,
     0x1.d03d48p-25f, 0x1.0882eep-22f, 0x1.7cc96ep-120f, 0x1.1779bp-92f, 0.0f, 0.0f,
     0x1.68f4ecp-72f, 0x1.d38668p-104f, 0x1.ddc858p-29f, 0x1.e188b8p-41f, 0.0f, 0.0f,
     0.0f, 0x1.4d2756p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21119cp-55f, 0x1.71c388p-27f,
     0x1.70523ep-5f, 0.0f, 0.0f, 0.0f, 0x1.af030cp-94f, 0x1.bace52p-14f,
     0x1.20fe36p-39f, 0.0f, 0x1.158bp-13f, 0x1.865f56p-6f, 0x1.7083cp-63f, 0.0f, 0.0f,
     0.0f, 0x1.eaef1cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b92fep-115f, 0x1.b4a5bep-66f, 0x1.ed2b8ep-37f, 0x1.3d5af6p-79f,
     0x1.62724p-100f, 0x1.2b3da2p-112f, 0x1.8c0714p-16f, 0x1.71eb38p-100f,
     0x1.aa4e82p-115f, 0x1.dd9494p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.87fcc6p-51f, 0.0f, 0.0f, 0x1.2c430ep-92f, 0.0f, 0.0f, 0.0f, 0x1.cc0942p-42f,
     0.0f, 0.0f, 0x1.347c5p-123f, 0.0f, 0x1.518058p-121f, 0x1.6b7afap-78f,
     0x1.15821ap-111f, 0x1.a98aaep-70f, 0.0f, 0x1.02617cp-115f, 0x1.18f11ep-85f, 0.0f,
     0.0f, 0x1.0ccc4ep-84f, 0.0f, 0.0f, 0x1.3cfb3p-56f, 0.0f, 0x1.38dea6p-110f, 0.0f,
     0x1.74b8eep-101f, 0x1.0710b6p-1f, 0x1.a4c4c2p-50f, 0x1.eba8e2p-37f,
     0x1.333dc4p-93f, 0x1.ada2bap-80f, 0x1.67755cp-50f, 0.0f, 0.0f, 0x1.0ea462p-102f,
     0x1.920434p-114f, 0x1.0eb10ap-3f, 0x1.7f72d2p-49f, 0x1.62a27ap-13f,
     0x1.6ff232p-4f, 0x1.b2db44p-94f, 0x1.933b9p-107f, 0x1.feebc8p-42f, 0.0f,
     0x1.ec6ad2p-90f, 0.0f, 0x1.7e2456p-88f, 0x1.cdced8p-126f, 0x1.7a3566p-38f,
     0x1.1841f8p-33f, 0.0f, 0x1.c86cdcp-106f, 0.0f, 0x1.eaf94ap-93f, 0.0f, 0.0f,
     0x1.10dc28p-44f, 0.0f, 0.0f, 0.0f, 0x1.a470fp-51f, 0x1.2f9602p-42f, 0.0f,
     0x1.ca7d2ap-7f, 0x1.60c45ap-89f, 0x1.17d552p-58f, 0.0f, 0x1.07d236p-113f,
     0x1.0a37a6p-56f, 0.0f, 0.0f, 0x1.b858e2p-69f, 0x1.5b840ep-106f, 0.0f, 0.0f,
     0x1.98a5aap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5590cp-53f, 0.0f, 0.0f, 0.0f,
     0x1.43a0fcp-65f, 0x1.80a2dap-88f, 0x1.18895p-82f, 0.0f, 0x1.603c86p-65f,
     0x1.2b624ap-44f, 0x1.600d1cp-103f, 0x1.4f5f08p-51f, 0.0f, 0x1.6222bcp-63f, 0.0f,
     0.0f, 0x1.3ddee2p-14f, 0.0f, 0.0f, 0x1.5354dap-15f, 0x1.93c102p-58f,
     0x1.065bbap-65f, 0.0f, 0.0f, 0x1.9a4816p-9f, 0x1.793a34p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1277d2p-53f, 0.0f, 0.0f, 0x1.474bbp-8f, 0.0f, 0x1.16a7b6p-91f,
     0.0f, 0.0f, 0x1.55929ep-111f, 0x1.781e3ap-98f, 0x1p0f, 0x1.5d1dccp-103f, 0.0f,
     0.0f, 0x1.811b64p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9da7dep-95f,
     0x1.31aadcp-23f, 0x1.70d5fcp-80f, 0.0f, 0x1.c32d3cp-93f, 0.0f, 0.0f, 0.0f,
     0x1.8d460ep-67f, 0x1.bc7e16p-57f, 0.0f, 0.0f, 0.0f, 0x1.55f586p-33f, 0.0f,
     0x1.12ad64p-120f, 0x1.84e15ap-92f, 0.0f, 0x1.0c2f7ep-90f, 0x1.ed6232p-77f, 0.0f,
     0x1.39c82ep-10f, 0.0f, 0x1.8da87ep-37f, 0.0f, 0x1.08f8ccp-106f, 0x1.021262p-56f,
     0x1.f662cp-64f, 0x1.cb9a24p-116f, 0x1.ff4b7ep-30f, 0.0f, 0.0f, 0x1.602df2p-41f,
     0x1.07d34ep-23f, 0.0f, 0.0f, 0x1.1b174cp-15f, 0.0f, 0.0f, 0x1.666ecep-5f, 0.0f,
     0x1.1d49b2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84a0dap-108f, 0.0f, 0x1.4f4878p-19f,
     0.0f, 0.0f, 0x1.8f4abp-100f, 0x1.8ba56ap-107f, 0x1.b0260ep-39f, 0.0f,
     0x1.8b9e8cp-92f, 0.0f, 0x1.b36728p-21f, 0x1.7a6cd6p-80f, 0x1.616c4p-35f,
     0x1.628ad6p-126f, 0x1.d5f40cp-38f, 0x1.49c592p-49f, 0x1.7a8ffp-97f, 0.0f,
     0x1.d8bf2cp-125f, 0.0f, 0x1.910916p-54f, 0.0f, 0.0f, 0.0f, 0x1.fc092cp-73f,
     0x1.005892p-65f, 0x1.c864aep-20f, 0x1.71d91p-65f, 0.0f, 0.0f, 0.0f,
     0x1.b3e65ap-106f, 0x1.3f562cp-79f, 0x1p0f, 0x1.08ec52p-5f, 0.0f, 0x1.679012p-69f,
     0x1p0f, 0x1.beb6bep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d2232p-15f, 0.0f,
     0.0f, 0.0f, 0x1.0d71p-8f, 0x1.eea9a2p-53f, 0x1.d5ce2p-41f, 0.0f, 0x1.87831cp-89f,
     0x1.872b92p-121f, 0x1.ed6acep-69f, 0x1.b90402p-97f, 0x1.53fad2p-21f,
     0x1.f8588cp-65f, 0x1.6184b6p-60f, 0x1.53c03cp-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.57dce6p-34f, 0.0f, 0.0f, 0.0f, 0x1.3c982cp-72f, 0x1.d7c2cep-19f, 0.0f,
     0x1.70c93p-105f, 0x1.c341f6p-26f, 0.0f, 0x1.9405e4p-24f, 0.0f, 0x1.15888cp-7f,
     0x1.635b96p-20f, 0x1.c3fa1ep-55f, 0.0f, 0x1.710416p-61f, 0.0f, 0x1.4c3948p-11f,
     0x1.053bbep-84f, 0x1.4c0fa4p-4f, 0x1.d07e6cp-13f, 0.0f, 0x1.9bd012p-13f,
     0x1.55a5ap-79f, 0.0f, 0x1.a7f1ecp-29f, 0.0f, 0.0f, 0x1.66ce6ap-44f,
     0x1.db95bep-71f, 0x1.df2194p-8f, 0.0f, 0x1.776032p-9f, 0x1.191f9cp-123f, 0.0f,
     0.0f, 0.0f, 0x1.178be6p-81f, 0.0f, 0x1.9815b4p-108f, 0.0f, 0x1.bc5556p-40f,
     0x1.76a9fcp-110f, 0x1.b0b238p-10f, 0.0f, 0x1.21fde8p-119f, 0x1.326036p-65f,
     0x1.494f64p-26f, 0.0f, 0x1.ab0b72p-56f, 0.0f, 0x1.685408p-118f, 0x1.c97fc8p-73f,
     0x1.abfa4ap-123f, 0x1.533844p-45f, 0x1.3e064p-54f, 0x1.10bae4p-58f,
     0x1.59f80ap-38f, 0x1.27fa06p-40f, 0x1.b0a44cp-8f, 0.0f, 0x1.41824cp-11f, 0.0f,
     0.0f, 0x1.7af64ap-56f, 0x1.622232p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a65678p-110f, 0x1.dd5568p-112f, 0.0f, 0x1.e1fad8p-50f, 0x1.062c96p-92f,
     0x1.8cdc68p-111f, 0.0f, 0.0f, 0x1.605356p-85f, 0x1.dad808p-14f, 0x1.62ac7ap-30f,
     0.0f, 0x1.834afep-4f, 0.0f, 0x1.9de534p-17f, 0x1.67e5d4p-75f, 0x1.bcc638p-42f,
     0x1.a9adbp-29f, 0x1.3587e6p-8f, 0.0f, 0x1.d4b5d6p-46f, 0.0f, 0x1.3f9008p-118f,
     0x1.948094p-58f, 0.0f, 0x1.dd241cp-7f, 0.0f, 0x1.b39916p-46f, 0x1.637726p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f85cccp-101f, 0x1.7e58a4p-23f,
     0x1.d1d92ap-101f, 0x1.81546cp-94f, 0x1.a8b1acp-111f, 0x1.5cd96ep-78f,
     0x1.b7577cp-46f, 0.0f, 0x1.7cba2p-58f, 0.0f, 0x1.d6ba88p-99f, 0x1.a579e8p-115f,
     0x1.3078eep-23f, 0x1.e7e716p-50f, 0.0f, 0x1.cd7b5p-20f, 0.0f, 0x1.7c49aap-74f,
     0x1.dd8cfep-27f, 0x1.eddb0cp-59f, 0x1.d81264p-100f, 0.0f, 0x1.8fc4fp-78f,
     0x1.ee6022p-46f, 0.0f, 0x1.14c78cp-97f, 0x1.89378ep-31f, 0.0f, 0x1.d91ebep-125f,
     0x1.d360bp-28f, 0x1.4e7d44p-45f, 0.0f, 0x1.591ffp-100f, 0x1.ac9c9cp-78f,
     0x1.293ffp-88f, 0x1.d59c3ep-4f, 0x1.9c33p-39f, 0x1.f79c9cp-79f, 0x1.ba6daap-29f,
     0x1.bc2d22p-38f, 0.0f, 0.0f, 0x1.a6c68p-115f, 0x1.d7f0c2p-115f, 0.0f,
     0x1.e60664p-51f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.b6dp-18f, 0.0f, 0x1.986e58p-61f, 0.0f, 0x1.3862d4p-109f,
     0.0f, 0x1.e999bp-2f, 0.0f, 0x1.f47b1p-112f, 0x1.c9a06ep-2f, 0.0f,
     0x1.70b182p-26f, 0x1.bf16b2p-83f, 0.0f, 0.0f, 0x1.9de74p-72f, 0.0f,
     0x1.7a66a2p-67f, 0x1.3f30c4p-59f, 0x1.39723ep-97f, 0.0f, 0x1.af736p-60f,
     0x1.3c77c6p-63f, 0x1.1f3aaep-114f, 0.0f, 0.0f, 0x1.675d2p-34f, 0.0f, 0.0f,
     0x1.f27974p-51f, 0x1.a8c298p-89f, 0x1.c2654p-20f, 0x1.513182p-108f,
     0x1.b8c088p-12f, 0x1.47851ep-53f, 0.0f, 0x1.712964p-110f, 0.0f, 0x1.84a856p-71f,
     0.0f, 0.0f, 0x1.9206a8p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8432p-123f,
     0x1.8f6d8ap-71f, 0.0f, 0.0f, 0x1.70dadap-124f, 0x1.668e5ep-114f, 0x1.075bbp-20f,
     0x1.57ac1p-114f, 0.0f, 0x1.99845ep-1f, 0.0f, 0.0f, 0x1.b4af0ap-31f, 0.0f,
     0x1.bb7adp-121f, 0x1.75c16cp-70f, 0x1.a7ebdep-77f, 0x1.de28fcp-45f, 0.0f,
     0x1.6d00a8p-61f, 0x1.cecb86p-100f, 0.0f, 0x1.8dae3cp-77f, 0x1.e1a922p-115f,
     0x1.bc1198p-59f, 0.0f, 0x1.279fe6p-115f, 0.0f, 0x1.6e91bp-83f, 0x1.89727p-69f,
     0x1.e64286p-14f, 0x1.ab86ap-70f, 0.0f, 0x1.e9a814p-2f, 0x1.b44cbp-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b1fbep-39f, 0x1.e28944p-96f, 0x1.3fe5a6p-50f, 0.0f,
     0x1.fd3eep-29f, 0.0f, 0x1.00f546p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21097cp-55f,
     0.0f, 0.0f, 0x1.25af48p-30f, 0x1.4e0fep-47f, 0x1.3c6448p-124f, 0x1.151694p-47f,
     0x1.80dffcp-44f, 0x1.5db72cp-74f, 0x1.243548p-40f, 0.0f, 0.0f, 0.0f,
     0x1.d4d2fap-85f, 0x1.0c983p-41f, 0x1.fd8578p-38f, 0.0f, 0x1.b0680ap-34f,
     0x1.0b7d42p-24f, 0.0f, 0.0f, 0.0f, 0x1.6efb7cp-2f, 0.0f, 0.0f, 0x1.30e7dap-13f,
     0.0f, 0x1.000c8p-48f, 0.0f, 0.0f, 0x1.1bbd7p-15f, 0x1.36f2bp-3f, 0.0f,
     0x1.18a0a8p-76f, 0.0f, 0.0f, 0x1.7ab50ap-8f, 0x1.1c8994p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0ed492p-50f, 0x1.a969d2p-25f, 0x1.6cd7a2p-41f, 0.0f,
     0x1.500d6ep-52f, 0.0f, 0x1.d6fea6p-118f, 0x1.0908fp-99f, 0.0f, 0x1.0a6aeep-10f,
     0x1.b833c4p-64f, 0.0f, 0x1.775b9p-11f, 0x1.d58992p-58f, 0.0f, 0.0f, 0.0f,
     0x1.fe6d72p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac72a6p-24f,
     0x1.8b08a8p-9f, 0.0f, 0.0f, 0.0f, 0x1.6bce82p-73f, 0x1.ff7e72p-29f,
     0x1.8a53e4p-69f, 0x1.7dd648p-89f, 0x1.7301ap-124f, 0x1.368d32p-23f, 0.0f, 0.0f,
     0.0f, 0x1.79f598p-85f, 0x1.667b1p-17f, 0x1.54156ep-43f, 0x1.b6a684p-74f, 0.0f,
     0x1.84215ap-37f, 0.0f, 0x1.c409a8p-25f, 0x1.2c3474p-103f, 0x1.a46ddcp-27f,
     0x1.5ca80cp-21f, 0.0f, 0.0f, 0x1.dba4ep-101f, 0x1.f7d272p-100f, 0x1.7422fcp-41f,
     0.0f, 0x1.cb4896p-81f, 0.0f, 0x1.ee15b4p-36f, 0x1.f902e2p-113f, 0x1.800aa4p-20f,
     0x1.2454a6p-95f, 0.0f, 0x1.f6fe4ep-99f, 0x1.d17186p-69f, 0x1.671d0ep-49f, 0.0f,
     0x1.d867c2p-89f, 0.0f, 0x1.8a6baap-7f, 0.0f, 0x1.5f3e5cp-1f, 0x1.b9971cp-48f,
     0.0f, 0x1.a7ea8ap-6f, 0.0f, 0x1.b55994p-125f, 0x1.61450ep-17f, 0x1.28228ep-120f,
     0.0f, 0.0f, 0x1.0a7ceap-108f, 0.0f, 0x1.18703ep-108f, 0.0f, 0.0f,
     0x1.6a417ap-126f, 0x1.ff4074p-29f, 0x1.e5cad8p-14f, 0x1.1d9622p-96f, 0.0f,
     0x1.e5b75cp-105f, 0x1.32765cp-118f, 0x1.f57008p-44f, 0.0f, 0x1.9c91b2p-72f,
     0x1.141926p-35f, 0.0f, 0x1.ec1956p-80f, 0.0f, 0.0f, 0x1.ffd96ep-126f, 0.0f,
     0x1.760156p-122f, 0x1.599578p-19f, 0.0f, 0.0f, 0x1.225d9ap-83f, 0.0f, 0.0f,
     0x1.4eadeep-75f, 0.0f, 0x1.e09132p-90f, 0.0f, 0.0f, 0x1.619d6ep-58f,
     0x1.f99858p-39f, 0.0f, 0.0f, 0x1.d0df64p-114f, 0x1.7c8e7ap-99f, 0x1.16e15p-56f,
     0x1.1864b2p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cfeacp-29f, 0x1.14bdf4p-49f, 0.0f,
     0x1.40a258p-47f, 0.0f, 0x1.2321a4p-58f, 0.0f, 0.0f, 0x1.80a44cp-15f, 0.0f,
     0x1.f8ad58p-42f, 0.0f, 0.0f, 0x1.0a7e4cp-60f, 0.0f, 0.0f, 0x1.e39254p-117f, 0.0f,
     0.0f, 0x1.7b995cp-12f, 0x1.546784p-113f, 0.0f, 0x1.342fa8p-67f, 0.0f,
     0x1.fea60ap-57f, 0.0f, 0.0f, 0x1.15a09p-24f, 0.0f, 0x1.71c676p-8f,
     0x1.9ed106p-86f, 0x1.44422ap-113f, 0x1.0120dcp-24f, 0x1.ef6592p-101f, 0.0f, 0.0f,
     0x1.d04a6ep-94f, 0.0f, 0.0f, 0.0f, 0x1.b40fe8p-89f, 0x1.5e1284p-10f,
     0x1.8ffd3cp-89f, 0x1.d67622p-5f, 0x1.990736p-50f, 0x1.665f5ap-15f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b2c648p-39f, 0x1.90df26p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55de48p-48f, 0.0f, 0x1.180898p-87f, 0.0f, 0x1.2502d8p-57f, 0x1.d47dcp-56f,
     0.0f, 0x1.0ff5f8p-71f, 0x1.9758p-98f, 0.0f, 0.0f, 0x1.579a52p-7f, 0x1.85652p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91ad76p-116f, 0x1.f35dc8p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.707cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.044d38p-80f, 0.0f,
     0x1.028cep-67f, 0x1.9e2412p-71f, 0x1.2169fcp-48f, 0x1.36ac32p-39f, 0.0f,
     0x1.139eb2p-35f, 0x1.2ce122p-89f, 0x1.c8ad3p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc3a48p-93f, 0x1.615988p-63f, 0x1.c88fbep-56f, 0x1.45cbdp-86f, 0.0f,
     0x1.fe3024p-108f, 0x1.c23288p-25f, 0x1.af1882p-4f, 0.0f, 0x1.547efap-41f,
     0x1.131f28p-94f, 0x1.7a7b52p-58f, 0x1.a7de38p-112f, 0x1.4098fcp-72f,
     0x1.87e098p-115f, 0x1.319592p-125f, 0x1.992d72p-22f, 0x1.6f9adep-7f,
     0x1.083644p-4f, 0.0f, 0x1.07f87ap-32f, 0.0f, 0x1.75fe6ap-74f, 0x1.1373fep-4f,
     0x1.5bdbb2p-39f, 0x1.c0f61p-25f, 0.0f, 0x1.6bc64cp-52f, 0x1.31944p-105f,
     0x1.96cb8ep-112f, 0x1.612b7ep-19f, 0x1.60b734p-75f, 0x1.c5126p-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bfb15cp-70f, 0x1.9b795ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f342d4p-86f, 0.0f, 0.0f, 0x1.25fa1cp-37f, 0.0f, 0x1.0a692p-118f,
     0x1.2c6d7p-85f, 0x1.c1b87cp-120f, 0x1.d2be24p-8f, 0x1.8af0dp-52f, 0.0f, 0.0f,
     0x1.5f3c8ep-3f, 0x1.f0bef8p-5f, 0x1.6011c4p-113f, 0.0f, 0x1.3dffa6p-33f,
     0x1.6667b6p-88f, 0x1.44d324p-28f, 0x1.535726p-22f, 0x1.54ef88p-61f, 0.0f,
     0x1.cdb1ccp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91918p-10f, 0x1.5c1d78p-9f, 0.0f,
     0x1.b1fecp-3f, 0.0f, 0x1.dd362ap-1f, 0x1.37af06p-18f, 0x1.2e3662p-51f,
     0x1.a6fd3cp-112f, 0x1.2115d6p-105f, 0.0f, 0x1.0f4992p-31f, 0x1.4a261cp-74f,
     0x1.953a4ep-94f, 0x1.ec59bcp-77f, 0.0f, 0.0f, 0.0f, 0x1.fa3d2cp-31f, 0.0f,
     0x1.8f3a8ep-11f, 0x1.6ed0fep-74f, 0x1.37466ap-89f, 0x1.11cae8p-22f, 0.0f, 0.0f,
     0x1.15d086p-123f, 0.0f, 0.0f, 0.0f, 0x1.6d1304p-21f, 0x1.f53d92p-38f,
     0x1.879066p-62f, 0x1.3f4716p-118f, 0.0f, 0x1.c2e8ecp-122f, 0x1.eeeed8p-85f,
     0x1.d422e2p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80d148p-93f, 0.0f, 0.0f,
     0x1.6e3fcp-78f, 0x1.d7b504p-92f, 0x1.dadc22p-73f, 0x1.3dd6dap-78f,
     0x1.84d5bp-81f, 0x1.87889cp-75f, 0x1.ec5e18p-59f, 0.0f, 0.0f, 0x1.49e67ap-125f,
     0.0f, 0x1.c848cep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3a4f8p-102f, 0x1.e8676ep-25f, 0x1.5aa8e6p-66f, 0x1.d6dc36p-14f, 0.0f,
     0x1.c60faap-93f, 0x1.6fab5p-93f, 0x1.e1cf5cp-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2db832p-13f, 0x1.b155a6p-53f, 0x1.9ea672p-95f, 0x1.da7442p-91f,
     0x1.370bbp-45f, 0.0f, 0.0f, 0x1.279362p-21f, 0.0f, 0.0f, 0x1.5a1168p-122f, 0.0f,
     0x1.2ec0ecp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5aa35ap-61f,
     0x1.2c0014p-114f, 0x1.72b58cp-40f, 0.0f, 0x1.39c36ep-93f, 0x1.cb47a8p-117f, 0.0f,
     0x1.05b708p-2f, 0x1.90e31cp-86f, 0.0f, 0.0f, 0x1.ffd406p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a7ce8cp-26f, 0x1.d75fe2p-6f, 0.0f, 0x1.ae14ecp-98f, 0.0f, 0.0f,
     0x1.56f008p-27f, 0x1.c7e694p-68f, 0x1.1e5762p-37f, 0x1.f27368p-51f,
     0x1.0021aap-37f, 0x1.270166p-9f, 0.0f, 0x1.ec73f2p-27f, 0.0f, 0x1.a8347cp-119f,
     0x1.480102p-109f, 0.0f, 0x1.a91632p-80f, 0x1.bf756p-49f, 0x1.7a8d48p-72f,
     0x1.971dcep-113f, 0.0f, 0x1.39e8b2p-18f, 0x1.51167ap-15f, 0x1.c1afdap-18f, 0.0f,
     0.0f, 0x1.ce313cp-56f, 0x1.59831cp-74f, 0.0f, 0x1.4e0dcap-75f, 0x1.b284ccp-55f,
     0x1.83c1e2p-120f, 0x1.4bf8d8p-32f, 0.0f, 0x1.5ae21p-22f, 0.0f, 0.0f,
     0x1.add7f8p-98f, 0.0f, 0x1.22ccdap-91f, 0.0f, 0x1.c27a86p-4f, 0x1.686604p-87f,
     0.0f, 0x1.84617ep-95f, 0.0f, 0.0f, 0.0f, 0x1.cb97e8p-92f, 0.0f, 0x1.859086p-64f,
     0.0f, 0x1.aa583ep-8f, 0x1.737df6p-18f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.43fa9ap-112f, 0.0f, 0x1.ee3f72p-86f, 0.0f, 0.0f, 0x1.a058f4p-46f, 0.0f,
     0x1.96a8f8p-73f, 0.0f, 0x1.cfd11ep-96f, 0x1.048ed2p-70f, 0x1.70156cp-65f, 0.0f,
     0x1.7388d4p-28f, 0x1.6c3cfap-16f, 0.0f, 0.0f, 0x1.8a5522p-71f, 0.0f,
     0x1.c636b2p-104f, 0.0f, 0x1.b00c0cp-116f, 0.0f, 0.0f, 0x1.25144ap-59f, 0.0f,
     0x1.20b5c2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4f4cap-117f, 0x1.37b4fep-29f,
     0.0f, 0.0f, 0.0f, 0x1.7b13e4p-123f, 0x1.f27be2p-111f, 0.0f, 0x1.c63dc2p-89f,
     0.0f, 0.0f, 0x1.86b6b6p-11f, 0x1.8b445ap-125f, 0.0f, 0x1.8c7d26p-118f,
     0x1.993016p-32f, 0.0f, 0x1.e800bcp-108f, 0x1.f77736p-86f, 0.0f, 0.0f,
     0x1.ca126p-66f, 0x1.afb3c2p-79f, 0.0f, 0.0f, 0x1.b0468cp-63f, 0.0f,
     0x1.bf64f8p-84f, 0x1.316f66p-39f, 0x1.f25596p-11f, 0x1.ea0a84p-77f, 0.0f,
     0x1.05ba84p-84f, 0x1.c59cp-70f, 0x1.d25442p-39f, 0x1.c4923ap-1f, 0x1.cb3e6ap-60f,
     0.0f, 0.0f, 0x1.7b2368p-103f, 0.0f, 0x1.927704p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.82ba7p-120f, 0.0f, 0x1.e56a16p-112f, 0.0f,
     0x1.2876b2p-77f, 0.0f, 0x1.b8e9a2p-97f, 0x1.afb5fcp-92f, 0.0f, 0.0f,
     0x1.381e0ap-83f, 0x1.f97a24p-117f, 0x1.fc9124p-57f, 0x1.5ccf7cp-67f, 0.0f,
     0x1.6affd8p-92f, 0x1.37e532p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83b99ep-19f, 0.0f, 0x1.28e362p-96f, 0x1.6523dap-76f, 0x1.582f74p-27f,
     0x1.32a752p-14f, 0.0f, 0.0f, 0x1.8ea3bp-44f, 0x1.b7034ep-4f, 0x1.f068e6p-80f,
     0.0f, 0x1.6a5e32p-39f, 0x1.0df814p-113f, 0.0f, 0x1.4e1864p-33f, 0x1.6616d4p-89f,
     0x1.af68p-113f, 0.0f, 0.0f, 0x1.b374dap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91aadep-23f, 0.0f, 0.0f, 0x1.5e3cbap-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff0b02p-81f, 0x1.5dcb18p-22f, 0x1p0f, 0.0f, 0.0f, 0x1.e4c6fap-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.10a9cp-116f, 0.0f, 0x1.579872p-44f, 0.0f,
     0x1.d7e9d6p-115f, 0x1.37e8aep-54f, 0.0f, 0.0f, 0x1.ecac7p-62f, 0.0f, 0.0f,
     0x1.b3f362p-59f, 0x1.c82e04p-81f, 0x1.953e74p-49f, 0.0f, 0x1.2f4228p-35f,
     0x1.d018bep-88f, 0.0f, 0.0f, 0x1.2dc688p-95f, 0x1.bbcea8p-87f, 0x1.9c24ccp-86f,
     0.0f, 0x1.af34f6p-35f, 0x1.8b8918p-72f, 0x1.6cfcdcp-28f, 0.0f, 0x1.09bac6p-19f,
     0.0f, 0x1.d7c014p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.518ddap-106f, 0.0f,
     0.0f, 0.0f, 0x1.daf422p-53f, 0.0f, 0.0f, 0x1.76f5eep-94f, 0.0f, 0.0f,
     0x1.081fbap-46f, 0x1.16c2d2p-90f, 0.0f, 0x1.9f4114p-91f, 0x1.d1f1ep-57f, 0.0f,
     0x1.63d892p-39f, 0.0f, 0x1.ef3332p-114f, 0x1.8f1216p-56f, 0.0f, 0.0f,
     0x1.969bcep-126f, 0x1.41c1bp-95f, 0x1.267e26p-59f, 0x1.4a077p-10f,
     0x1.18f696p-87f, 0x1.67e45ap-85f, 0x1.2f2acp-82f, 0.0f, 0x1.33643ep-55f, 0.0f,
     0.0f, 0x1.2efd6ep-125f, 0x1.b91134p-118f, 0x1.91672ep-32f, 0.0f, 0x1.1e0426p-16f,
     0x1.0974dap-74f, 0x1.2ef8f2p-32f, 0.0f, 0x1.1e643ep-123f, 0x1.49ab74p-12f, 0.0f,
     0x1.3a2bbep-30f, 0.0f, 0.0f, 0x1.18e69p-21f, 0.0f, 0x1.f204ecp-27f, 0.0f,
     0x1.c530dp-51f, 0.0f, 0x1.1bf31ap-96f, 0.0f, 0.0f, 0x1.f7f7e2p-12f,
     0x1.f0a83p-75f, 0.0f, 0x1.8f264cp-36f, 0x1.fdedaap-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1d76dap-57f, 0.0f, 0x1.e36f8ep-65f, 0.0f, 0.0f, 0.0f,
     0x1.46d1ep-8f, 0.0f, 0x1.07eccap-114f, 0.0f, 0x1.0008bap-13f, 0x1.a2c074p-12f,
     0.0f, 0x1.41f28cp-93f, 0.0f, 0x1.8876bap-91f, 0x1.3bd786p-71f, 0.0f,
     0x1.7366fep-81f, 0x1.4b3a34p-109f, 0x1.ff8c14p-27f, 0.0f, 0.0f, 0x1.14dacap-37f,
     0.0f, 0x1.9da8f4p-40f, 0.0f, 0x1.692eb6p-52f, 0.0f, 0x1.739772p-30f, 0.0f, 0.0f,
     0.0f, 0x1.4de462p-8f, 0x1.c9b93ep-126f, 0x1.096ceap-80f, 0x1.0416e8p-76f, 0.0f,
     0x1.7d18bcp-45f, 0.0f, 0x1.113b26p-75f, 0.0f, 0.0f, 0x1.b785fap-15f, 0.0f,
     0x1.486086p-71f, 0.0f, 0x1.1f2238p-85f, 0x1.5a1e52p-119f, 0.0f, 0.0f,
     0x1.5f1b62p-108f, 0x1.e8d0aap-70f, 0x1.a7d27p-110f, 0x1.c4624ep-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.610a26p-34f, 0x1.50b0b4p-99f, 0x1.f7ee86p-109f,
     0x1.36af1ep-39f, 0.0f, 0x1.bd279cp-73f, 0.0f, 0.0f, 0x1.c2b28p-15f, 0.0f, 0.0f,
     0x1.640c32p-20f, 0.0f, 0x1.8ca22ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04c8d6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a7fe8p-55f, 0.0f,
     0x1.8c38b8p-2f, 0.0f, 0.0f, 0x1.c2b1dep-57f, 0x1.81dc6p-19f, 0.0f,
     0x1.1f6c1ep-64f, 0x1.cd6b38p-16f, 0x1.495d0cp-37f, 0.0f, 0x1.843bcp-103f, 0.0f,
     0x1.b6ab98p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3731p-121f, 0x1.c702p-121f, 0.0f,
     0x1.252206p-101f, 0x1.569368p-17f, 0.0f, 0x1.44d60ep-61f, 0x1.2e572cp-10f,
     0x1.a1b1bap-105f, 0x1.7d0b68p-6f, 0.0f, 0x1.15208ap-28f, 0.0f, 0x1.9f8b44p-67f,
     0x1.28b6a8p-20f, 0.0f, 0.0f, 0x1.b54546p-41f, 0.0f, 0.0f, 0x1.55c556p-25f,
     0x1.9ac9e4p-106f, 0x1.d46d06p-87f, 0.0f, 0x1.185524p-75f, 0.0f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_fminf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_fminf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fminf1_purecfma bench acc %a\n", global_bench_acc);
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
