/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncf4_kvx.c --function Sleef_truncf4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.481accp-71f, 0x1.2f1e78p-22f, 0x1.2ba206p-57f, 0.0f, 0x1.302c9ap-3f, 0.0f,
     0.0f, 0x1.c8e918p-69f, 0.0f, 0x1.d9e5fap-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9345ccp-113f, 0x1.1c7694p-108f, 0x1.ff4822p-35f, 0x1.0a477ep-66f,
     0x1.48580cp-88f, 0.0f, 0.0f, 0x1.71712ap-86f, 0x1.067aeep-115f, 0x1.ead758p-125f,
     0.0f, 0x1.11ffbap-33f, 0x1.ca94dap-114f, 0x1.1bdeaap-50f, 0x1.39f898p-52f,
     0x1.ef2f5p-110f, 0x1.0e589ep-70f, 0.0f, 0.0f, 0.0f, 0x1.921554p-15f, 0.0f, 0.0f,
     0.0f, 0x1.78c9bcp-82f, 0.0f, 0.0f, 0.0f, 0x1.5495b2p-1f, 0.0f, 0.0f,
     0x1.3c0fcp-12f, 0x1.593816p-58f, 0x1.944f72p-29f, 0.0f, 0x1.76601p-68f,
     0x1.65fea4p-82f, 0.0f, 0.0f, 0x1.6a41bep-70f, 0.0f, 0.0f, 0.0f, 0x1.40bb6ap-55f,
     0x1.b12484p-64f, 0.0f, 0.0f, 0x1.c11828p-52f, 0x1.e5b358p-25f, 0x1.cf8ca8p-102f,
     0.0f, 0x1.8adf5ap-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49f706p-117f, 0x1.ea3e8ap-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b06046p-89f, 0.0f, 0.0f, 0.0f, 0x1.93436ap-22f,
     0x1.c95306p-121f, 0x1.d154c8p-102f, 0x1.dd474cp-47f, 0.0f, 0x1.a2197cp-50f,
     0x1.143d1p-54f, 0.0f, 0x1.c6ca6ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d81526p-96f, 0x1.58646ap-64f, 0x1.748b96p-46f, 0.0f, 0x1.0b2864p-19f, 0.0f,
     0.0f, 0x1.683fdap-68f, 0x1.e37daap-13f, 0.0f, 0.0f, 0x1.6f4c02p-104f,
     0x1.328f4ep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48e724p-104f, 0.0f, 0x1.0069fp-42f,
     0.0f, 0x1.3008e2p-45f, 0.0f, 0.0f, 0.0f, 0x1.483ccap-41f, 0x1.9272dep-77f,
     0x1p0f, 0x1.8f7acp-15f, 0x1.9628dp-36f, 0x1.24f05cp-79f, 0.0f, 0.0f,
     0x1.35d6cep-24f, 0x1.4182e4p-102f, 0.0f, 0x1.88a15cp-63f, 0.0f, 0x1.57314ap-67f,
     0.0f, 0.0f, 0.0f, 0x1.49b5ccp-91f, 0x1.26ebb8p-37f, 0x1.437834p-8f,
     0x1.bd6356p-35f, 0x1.054516p-68f, 0x1.d7368cp-109f, 0.0f, 0x1.f7dffp-123f,
     0x1.75492ap-21f, 0x1.7565fap-72f, 0x1.6ce0a6p-120f, 0x1.ca41fap-20f,
     0x1.01529ap-50f, 0x1.caa462p-3f, 0x1.c66f9ep-73f, 0.0f, 0.0f, 0.0f,
     0x1.019b3cp-61f, 0.0f, 0x1.2841bap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e17254p-94f, 0x1.f1d44ep-47f, 0x1.5a128ep-91f, 0x1.806c86p-25f,
     0x1.f46b64p-94f, 0.0f, 0x1.588a6ep-25f, 0.0f, 0x1.0952d4p-110f, 0x1.f0fccap-71f,
     0x1.c92504p-114f, 0x1.f83b3cp-107f, 0x1.75666cp-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e15d46p-116f, 0x1.cbf0d6p-12f, 0.0f, 0x1.34898ap-1f, 0.0f, 0.0f,
     0x1.8c0db2p-51f, 0.0f, 0.0f, 0x1.d52dbp-36f, 0.0f, 0x1.94c4ap-69f, 0.0f, 0.0f,
     0x1.4a4b18p-55f, 0.0f, 0.0f, 0.0f, 0x1.a24ceap-55f, 0.0f, 0x1.ba3264p-81f,
     0x1.7deb36p-39f, 0.0f, 0.0f, 0x1.fb26eep-52f, 0.0f, 0x1.6e5f98p-82f, 0.0f,
     0x1.2ba046p-1f, 0x1.d1cf76p-68f, 0.0f, 0x1.e7f62cp-14f, 0x1.94d38ep-56f,
     0x1.752ab6p-49f, 0x1.1febbp-54f, 0x1.276722p-37f, 0.0f, 0x1.0cb0e2p-71f, 0.0f,
     0x1.c2e6c8p-125f, 0.0f, 0.0f, 0x1.ed09c6p-37f, 0x1.33409ap-70f, 0.0f, 0.0f,
     0x1.da53aep-9f, 0x1.a2977cp-12f, 0.0f, 0x1.9db466p-76f, 0x1.fe458ep-66f, 0.0f,
     0.0f, 0.0f, 0x1.e42614p-21f, 0x1.a11036p-116f, 0.0f, 0.0f, 0x1.68e946p-12f,
     0x1.92a77ep-51f, 0x1.28dbcap-39f, 0.0f, 0x1.44877ep-40f, 0.0f, 0x1.cf145p-112f,
     0.0f, 0x1.cf4488p-96f, 0x1.13034ep-10f, 0.0f, 0x1.0123e6p-58f, 0.0f,
     0x1.af17dep-115f, 0x1.d7daap-14f, 0x1.9e634ap-68f, 0x1.e623e2p-8f, 0.0f, 0.0f,
     0x1.2e7536p-71f, 0x1.0d1da4p-6f, 0x1.b12b56p-105f, 0.0f, 0x1.d029dep-35f, 0.0f,
     0x1.b19f92p-90f, 0.0f, 0.0f, 0.0f, 0x1.c6e51p-73f, 0.0f, 0x1.88f7ecp-39f, 0.0f,
     0x1.dbf368p-99f, 0x1.73ae2ap-39f, 0x1.8001acp-39f, 0.0f, 0x1.4102bp-10f, 0.0f,
     0x1.5dcd8ap-43f, 0.0f, 0.0f, 0x1.cfb32p-8f, 0x1.bcb656p-62f, 0x1.505618p-104f,
     0.0f, 0x1.15fd1cp-21f, 0.0f, 0.0f, 0x1.8ac8bap-23f, 0x1.0a5c1p-94f, 0.0f, 0.0f,
     0x1.1692a4p-80f, 0.0f, 0.0f, 0x1.eb46aep-4f, 0x1.da11c2p-30f, 0x1.3fa4bap-51f,
     0.0f, 0x1.d74986p-6f, 0.0f, 0x1.d8ece8p-32f, 0.0f, 0x1.f80146p-94f,
     0x1.97c76ap-78f, 0.0f, 0x1.52efbcp-2f, 0x1.5480aap-91f, 0x1.ba288cp-48f, 0.0f,
     0x1.a3326ep-53f, 0.0f, 0x1.829906p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f142cp-113f, 0.0f, 0.0f, 0x1.9c0ab6p-6f, 0.0f, 0.0f, 0.0f, 0x1.a4d1eep-7f,
     0x1.6a6a42p-82f, 0.0f, 0.0f, 0x1.c833f8p-50f, 0.0f, 0x1.09b9cep-52f,
     0x1.ae9306p-21f, 0x1.e894f2p-78f, 0x1.04f712p-4f, 0x1.6b630cp-99f,
     0x1.c35302p-81f, 0x1.194676p-25f, 0x1.839ef4p-70f, 0x1.b6ff9p-43f, 0.0f, 0.0f,
     0x1.124a4ap-11f, 0.0f, 0x1.aeedecp-57f, 0x1.de2e3ap-64f, 0x1.c1fe48p-87f, 0.0f,
     0.0f, 0x1.5938fap-63f, 0.0f, 0.0f, 0x1.a36a02p-89f, 0.0f, 0.0f, 0x1.14edf2p-42f,
     0.0f, 0.0f, 0.0f, 0x1.a71d9p-47f, 0.0f, 0.0f, 0.0f, 0x1.cd33bp-78f,
     0x1.bed6c8p-60f, 0x1.12d81ap-6f, 0.0f, 0.0f, 0x1.8aa4b4p-31f, 0.0f, 0.0f,
     0x1.bc129p-125f, 0.0f, 0.0f, 0.0f, 0x1.dc068p-81f, 0x1.4aee2ap-100f,
     0x1.365688p-48f, 0.0f, 0.0f, 0x1.b39c1cp-3f, 0.0f, 0x1.81e42ep-114f,
     0x1.6db4cap-123f, 0.0f, 0.0f, 0x1.63ad18p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f31132p-78f, 0x1.acc77ep-114f, 0x1.0e15dep-94f, 0.0f, 0.0f, 0x1.453c6cp-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e8bd2p-64f, 0x1.98abc4p-106f,
     0.0f, 0x1.a9a812p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de654p-52f,
     0x1.d69dd6p-104f, 0.0f, 0x1.2d9596p-83f, 0.0f, 0x1.1c9016p-98f, 0.0f, 0.0f,
     0x1.3e9d98p-96f, 0x1.e5af8ep-26f, 0.0f, 0x1.79ce94p-49f, 0.0f, 0.0f,
     0x1.8e7b64p-10f, 0.0f, 0x1.71fa88p-17f, 0.0f, 0.0f, 0x1.6c39fp-60f,
     0x1.864e4cp-35f, 0x1.2bc712p-7f, 0.0f, 0x1.7e2576p-90f, 0x1.3170cp-56f, 0.0f,
     0x1.37365ap-17f, 0x1.d9b318p-87f, 0.0f, 0x1.d76eb2p-41f, 0.0f, 0.0f, 0.0f,
     0x1.c848a4p-64f, 0x1.87c256p-121f, 0x1.e00106p-21f, 0x1.bea64p-108f,
     0x1.d930f6p-50f, 0x1.57d2e6p-123f, 0x1.2c8a76p-101f, 0x1.f26542p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.410c9ep-89f, 0.0f, 0.0f, 0x1.b3fabp-11f, 0x1.f891d6p-117f,
     0x1.1e6a0ap-71f, 0.0f, 0x1.852426p-12f, 0.0f, 0x1.363546p-9f, 0x1.aac41ap-113f,
     0.0f, 0.0f, 0x1.611edap-18f, 0x1p0f, 0.0f, 0x1.584c0ep-67f, 0x1.226e74p-51f,
     0.0f, 0x1.a24612p-92f, 0x1.27c518p-109f, 0.0f, 0.0f, 0x1.866208p-109f, 0.0f,
     0.0f, 0x1.30cfacp-9f, 0x1.ccc8fp-45f, 0.0f, 0x1.2ee1aap-36f, 0x1.344f48p-123f,
     0x1.850696p-56f, 0.0f, 0x1.83df8p-72f, 0x1.ac4b56p-104f, 0x1.7b19e2p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cabfd2p-119f, 0x1.611392p-85f, 0.0f, 0x1.e55f02p-84f, 0.0f,
     0.0f, 0x1.4a191ep-40f, 0.0f, 0.0f, 0x1.0a672ep-93f, 0x1.809cd6p-66f,
     0x1.23ff5p-14f, 0x1.3b19eap-72f, 0x1.e3b86ep-25f, 0x1.bac32ap-80f, 0.0f, 0.0f,
     0.0f, 0x1.f509ep-100f, 0x1.3d7cf4p-34f, 0.0f, 0.0f, 0.0f, 0x1.d3bc0ap-115f,
     0x1.9f71dcp-19f, 0x1.854a9ap-39f, 0.0f, 0.0f, 0x1.a32862p-52f, 0.0f, 0.0f,
     0x1.0c2ee8p-62f, 0x1.08dcf8p-28f, 0.0f, 0x1.1fdf2ap-38f, 0x1.0d0c8ep-21f,
     0x1.f9831ep-69f, 0x1.4a94f4p-16f, 0x1.fa9812p-92f, 0.0f, 0x1.1b1a5cp-77f, 0.0f,
     0x1.c1c386p-55f, 0x1.ec897cp-33f, 0.0f, 0.0f, 0x1.c290ap-85f, 0x1.c2e32p-72f,
     0x1.358a7ap-32f, 0.0f, 0x1.3c5eb6p-61f, 0.0f, 0x1.b4fc86p-125f, 0.0f,
     0x1.cf66d6p-92f, 0.0f, 0x1.0af16p-108f, 0.0f, 0.0f, 0.0f, 0x1.c1cc72p-7f, 0.0f,
     0.0f, 0x1.99f26ap-13f, 0.0f, 0x1.c53fc8p-72f, 0x1.409e64p-69f, 0.0f,
     0x1.914ae8p-28f, 0x1.96ec88p-114f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa5ea4p-12f, 0x1.9f91a2p-73f, 0.0f, 0x1.f231d6p-18f, 0.0f, 0.0f,
     0x1.c66d52p-103f, 0.0f, 0x1.280f1ep-13f, 0x1.746b7p-76f, 0x1.bf4264p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df2256p-45f, 0.0f, 0.0f, 0x1.3e164cp-109f, 0x1.eff724p-20f,
     0.0f, 0x1.68e9cap-114f, 0.0f, 0x1.94ba2p-89f, 0.0f, 0x1.b0a24cp-41f, 0.0f,
     0x1.17484ep-27f, 0.0f, 0.0f, 0x1.639754p-67f, 0x1.76eb7ap-24f, 0.0f, 0.0f,
     0x1.940f34p-108f, 0x1.2ac2b8p-27f, 0x1.efc1b8p-1f, 0.0f, 0.0f, 0.0f,
     0x1.cd49a4p-97f, 0x1.b2d9f2p-122f, 0x1.054226p-119f, 0x1p0f, 0.0f, 0.0f,
     0x1.5494a8p-43f, 0.0f, 0x1.2ad5p-116f, 0x1.bf7ba4p-64f, 0x1.7a391p-8f, 0.0f,
     0x1.6acd34p-85f, 0.0f, 0x1.1960a6p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c924ep-43f, 0.0f, 0x1.f91d5ap-91f, 0x1.d53a24p-83f, 0x1.3d58a8p-42f, 0.0f,
     0.0f, 0x1.1759f8p-73f, 0x1.7cfd92p-40f, 0x1.25a53p-95f, 0x1.cbe878p-115f,
     0x1.4aae28p-123f, 0x1.33e87ep-48f, 0x1.852c46p-19f, 0x1.151a98p-120f,
     0x1.41d42ep-97f, 0.0f, 0.0f, 0.0f, 0x1.afdb56p-66f, 0x1.26c00ap-39f,
     0x1.d4258cp-66f, 0.0f, 0x1.4f490ap-85f, 0x1.1687ap-12f, 0.0f, 0.0f,
     0x1.d8d398p-123f, 0x1.4608b4p-102f, 0.0f, 0.0f, 0.0f, 0x1.9862eep-23f, 0.0f,
     0x1.9506f2p-92f, 0.0f, 0.0f, 0.0f, 0x1.99f0c2p-56f, 0x1.4fcb0cp-84f, 0.0f,
     0x1.cb833ap-116f, 0.0f, 0x1.27019ap-63f, 0x1.bea0a8p-6f, 0x1.9ebee2p-121f,
     0x1.54efbp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64c87cp-13f, 0.0f,
     0x1.82d79ep-21f, 0x1p0f, 0x1.4661cep-92f, 0x1.91215ap-65f, 0.0f, 0x1.4510c6p-93f,
     0.0f, 0.0f, 0x1.f0d15p-24f, 0.0f, 0.0f, 0x1.744efap-111f, 0x1.34dcfp-58f,
     0x1.ff3c5cp-11f, 0x1p0f, 0x1.8adbfcp-112f, 0x1.16be48p-46f, 0x1.08e2e8p-33f,
     0.0f, 0.0f, 0x1.228ceep-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bc8e4p-80f, 0.0f, 0.0f,
     0x1.f700c8p-99f, 0.0f, 0x1.3055cep-115f, 0x1.13c06cp-20f, 0x1.76501cp-54f,
     0x1.1e6a0ep-118f, 0x1.84029ep-117f, 0.0f, 0.0f, 0.0f, 0x1.3d2baap-30f, 0.0f,
     0.0f, 0.0f, 0x1.b14652p-59f, 0.0f, 0x1.a4b502p-55f, 0.0f, 0x1.258a52p-81f,
     0x1.16b06p-112f, 0x1.b21b58p-92f, 0.0f, 0x1.669c6ap-53f, 0.0f, 0x1.1dfd6ap-64f,
     0.0f, 0.0f, 0.0f, 0x1.9b114ap-110f, 0x1.fd4c22p-64f, 0x1.cc9f2p-22f, 0.0f,
     0x1.604f7ap-12f, 0.0f, 0x1.ad286cp-84f, 0x1.fec274p-125f, 0.0f, 0x1.c35928p-34f,
     0x1.3f438ap-37f, 0x1.85881p-11f, 0x1.e235f4p-42f, 0.0f, 0x1.7b9c84p-17f,
     0x1.2add3ep-112f, 0x1.ce3a94p-102f, 0x1.4ed5e4p-101f, 0x1.c98f2ep-10f, 0.0f,
     0x1.ffefc6p-94f, 0.0f, 0.0f, 0x1.476646p-40f, 0.0f, 0.0f, 0.0f, 0x1.41ac32p-46f,
     0x1.a19cdcp-62f, 0.0f, 0.0f, 0.0f, 0x1.5a6848p-91f, 0x1.994aa6p-88f,
     0x1.435f7ep-68f, 0x1.3f462ep-78f, 0x1.dc3648p-91f, 0x1.bae3b4p-44f,
     0x1.022ccp-94f, 0.0f, 0.0f, 0.0f, 0x1.8e81b6p-37f, 0x1.e850e6p-88f, 0.0f,
     0x1.8b4fe2p-110f, 0x1.05531ap-99f, 0.0f, 0.0f, 0x1.2c1f1ep-88f, 0x1.3e84a6p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef2e4p-108f, 0x1.c5d56ap-100f, 0x1.3deccp-53f,
     0.0f, 0x1.4e66f8p-5f, 0.0f, 0x1.75408ap-5f, 0.0f, 0.0f, 0x1.10a9c4p-103f, 0.0f,
     0.0f, 0.0f, 0x1.a9fe52p-70f, 0x1.d3ef3p-40f, 0x1.132f3p-121f, 0.0f,
     0x1.9a1daap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.624734p-124f,
     0x1.42a43ep-29f, 0.0f, 0.0f, 0.0f, 0x1.652bf4p-29f, 0.0f, 0x1.9bc2a2p-59f, 0.0f,
     0x1.fc519p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79f15cp-76f, 0x1.f4cd8ap-93f,
     0x1.935b38p-123f, 0x1.078bb6p-104f, 0.0f, 0x1.061544p-29f, 0.0f, 0.0f, 0.0f,
     0x1.627078p-76f, 0x1.27f50cp-54f, 0x1.a9456ap-82f, 0.0f, 0.0f, 0.0f,
     0x1.ec2562p-105f, 0x1.24fdeep-38f, 0x1.96de9cp-76f, 0x1.e95342p-18f,
     0x1.4ec8fp-87f, 0.0f, 0x1.d49b5ap-96f, 0x1.832a5ap-88f, 0.0f, 0x1.cb2b92p-98f,
     0x1.6665p-72f, 0.0f, 0x1.76bf4ep-28f, 0x1.3d9c5ap-48f, 0.0f, 0x1.039634p-45f,
     0.0f, 0x1.b2f7eep-42f, 0.0f, 0.0f, 0x1.01dccap-123f, 0.0f, 0.0f, 0.0f,
     0x1.be40aep-14f, 0x1.18331ep-27f, 0.0f, 0.0f, 0x1.3ea058p-28f, 0x1.36942ep-12f,
     0x1.9ba51p-100f, 0.0f, 0x1.2a22aap-64f, 0x1.8c9ecep-36f, 0x1.f4f358p-103f,
     0x1.247d66p-118f, 0x1.d9bacap-25f, 0.0f, 0.0f, 0x1.a12ae4p-39f, 0x1.7e98e6p-19f,
     0.0f, 0x1.2dd434p-83f, 0.0f, 0x1.fe2f54p-45f, 0x1.65c4a4p-55f, 0.0f,
     0x1.7916bap-54f, 0.0f, 0x1.fb62f8p-41f, 0x1.3ffe68p-63f, 0.0f, 0.0f, 0.0f,
     0x1.eae12p-51f, 0x1p0f, 0x1.05e35cp-55f, 0x1.17576ep-12f, 0x1.2076cep-47f,
     0x1.956802p-83f, 0x1.1bc13cp-66f, 0x1.d947f8p-63f, 0x1.8beba6p-121f,
     0x1.8cd69ep-91f, 0x1.354cc2p-102f, 0x1.941cdap-55f, 0.0f, 0x1.6444c2p-78f,
     0x1.7d642cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25a06ap-30f, 0.0f,
     0x1.03bc7p-113f, 0x1.cfcda4p-41f, 0x1.1795acp-74f, 0x1.0ea3fep-122f,
     0x1.839828p-126f, 0x1.ca56dp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.86cfc2p-15f, 0.0f, 0x1.36949p-63f, 0x1.2435c6p-112f,
     0.0f, 0.0f, 0x1.55d52ap-78f, 0x1.23d2dp-2f, 0x1.b9b5d4p-80f, 0x1.9f5edap-65f,
     0.0f, 0x1.ca5d3p-76f, 0x1.23344ap-111f, 0.0f, 0x1.475766p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.50882ap-36f, 0.0f, 0x1.382742p-2f, 0.0f, 0x1.8abdcap-48f, 0.0f,
     0x1.d63fcap-39f, 0x1.eb4f6ep-125f, 0.0f, 0x1.709abep-105f, 0.0f, 0.0f, 0.0f,
     0x1.3223bap-12f, 0.0f, 0.0f, 0x1.d6d278p-95f, 0x1.0c223cp-52f, 0.0f,
     0x1.f68cd8p-20f, 0x1.9c5532p-58f, 0x1.4eddcep-1f, 0x1.69691ap-86f,
     0x1.59dfep-105f, 0x1.5c830ap-123f, 0.0f, 0x1.aa3086p-26f, 0.0f, 0x1.b908bp-107f,
     0.0f, 0.0f, 0x1.8623c4p-14f, 0x1.82e008p-10f
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
            tmp1 = Sleef_truncf4_kvx(tmp0);
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
    printf("Sleef_truncf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_truncf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
