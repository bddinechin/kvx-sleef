/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expf1_u10purecfma.c --function Sleef_expf1_u10purecfma \
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
     0x1.033e1p-68f, 0.0f, 0.0f, 0x1.6b38f8p-76f, 0x1.83ece4p-121f, 0x1.911092p-116f,
     0x1.ac38dp-52f, 0x1.f3c31ep-4f, 0x1.96c42ep-37f, 0x1.fd6c0ep-11f,
     0x1.788f22p-30f, 0x1.023aap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76323cp-90f, 0x1.a4b118p-43f, 0x1.521e6ep-122f, 0x1.0c1762p-5f, 0.0f, 0.0f,
     0.0f, 0x1.2d046cp-98f, 0x1.17ad26p-54f, 0x1.8eff42p-75f, 0.0f, 0x1.cbeb0cp-116f,
     0x1.c669cp-35f, 0.0f, 0.0f, 0x1.661a9ep-82f, 0x1.4b2664p-85f, 0.0f, 0.0f,
     0x1.72303cp-66f, 0.0f, 0.0f, 0.0f, 0x1.2b5248p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5dd72p-22f, 0x1.e6ef14p-81f, 0.0f, 0x1.e69d98p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a9cp-16f, 0.0f, 0.0f, 0.0f, 0x1.29130ap-4f, 0x1.b8c142p-30f, 0.0f,
     0x1.b359cep-71f, 0.0f, 0x1.4b399cp-98f, 0x1.7ac668p-84f, 0.0f, 0x1.e16486p-79f,
     0.0f, 0.0f, 0x1.0f3cd8p-106f, 0x1.7dfce2p-69f, 0x1.db6e76p-22f, 0.0f,
     0x1.f0dd6cp-84f, 0.0f, 0.0f, 0x1.ce715ep-90f, 0x1.0563bep-39f, 0x1.fba2acp-22f,
     0x1.f23b74p-51f, 0.0f, 0x1.16721p-66f, 0x1.c49dcap-41f, 0.0f, 0.0f, 0.0f,
     0x1.fa9322p-94f, 0x1.ddaeep-78f, 0x1.6dea9ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dee964p-67f, 0x1.30921ep-104f, 0x1.1c9686p-116f, 0.0f, 0.0f, 0x1.a008e8p-9f,
     0x1.49bc12p-59f, 0.0f, 0x1.86d4acp-89f, 0x1.1bba92p-34f, 0x1.0f6a28p-82f, 0.0f,
     0x1.59f342p-72f, 0.0f, 0.0f, 0.0f, 0x1.fdcdacp-35f, 0.0f, 0x1.5519p-19f, 0.0f,
     0.0f, 0x1.9e9b4ap-7f, 0.0f, 0.0f, 0.0f, 0x1.99ab08p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.941acep-12f, 0x1.53c68cp-25f, 0.0f, 0.0f,
     0x1.b41254p-46f, 0x1.8bc5d6p-116f, 0.0f, 0.0f, 0.0f, 0x1.f2894ap-84f,
     0x1.114e9ap-48f, 0x1.7d3fa6p-39f, 0x1.1bff7ep-2f, 0x1.2974a4p-27f,
     0x1.07dfbep-76f, 0x1.30d42ap-121f, 0.0f, 0.0f, 0x1.21589cp-77f, 0x1.87da7ap-116f,
     0.0f, 0x1.b95b64p-110f, 0.0f, 0x1.82588p-113f, 0.0f, 0x1.ca0274p-43f, 0.0f, 0.0f,
     0.0f, 0x1.d946a6p-48f, 0x1.5a52dap-62f, 0.0f, 0.0f, 0.0f, 0x1.bb7d76p-118f,
     0x1.9b8b6ep-70f, 0x1.16d602p-13f, 0x1.be8b42p-39f, 0x1.9dada4p-74f,
     0x1.0011a8p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ebcd4p-101f,
     0x1.b47c5ep-61f, 0x1.137e0cp-16f, 0.0f, 0.0f, 0x1.db97d2p-28f, 0.0f,
     0x1.7ffc8p-114f, 0.0f, 0.0f, 0x1.64ab62p-98f, 0x1.d80dep-40f, 0.0f,
     0x1.68684p-115f, 0x1.0df5dcp-5f, 0.0f, 0.0f, 0x1.9ba6bap-122f, 0x1.afe4a2p-44f,
     0x1.54d89cp-123f, 0x1.a8da48p-91f, 0.0f, 0.0f, 0x1.a240d6p-125f, 0x1.2517c8p-16f,
     0x1.e08c14p-43f, 0.0f, 0x1.52d1d6p-13f, 0.0f, 0x1.8e488ap-12f, 0x1.40ce24p-114f,
     0.0f, 0x1.b856bep-60f, 0.0f, 0x1.c0c7bap-101f, 0x1.daca74p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6781f8p-21f, 0x1.dc9434p-102f, 0.0f, 0x1.ad1f02p-44f, 0.0f,
     0x1.a78412p-87f, 0x1.fdcb52p-81f, 0x1.812a7cp-39f, 0x1.8beb1cp-85f, 0.0f, 0.0f,
     0.0f, 0x1.1fe57ep-70f, 0x1.4dd656p-101f, 0x1.45efcp-55f, 0.0f, 0x1.c3b61ap-77f,
     0x1.21e67ap-51f, 0.0f, 0x1.c7c954p-65f, 0.0f, 0x1.397866p-114f, 0.0f,
     0x1.2cd25p-13f, 0x1.b8f8p-108f, 0x1.bf912cp-110f, 0x1.072768p-77f, 0.0f,
     0x1.640524p-21f, 0x1.0ce2dcp-122f, 0x1.0d0244p-126f, 0.0f, 0x1.20157p-35f,
     0x1.17b252p-18f, 0x1.1de8f8p-60f, 0x1.a2860ep-92f, 0.0f, 0x1.b432dp-122f, 0.0f,
     0x1.6c1348p-64f, 0x1.268234p-1f, 0.0f, 0.0f, 0x1.39a91ep-13f, 0x1.a540a2p-12f,
     0x1.7fe346p-23f, 0.0f, 0x1.461cbp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9031bcp-8f,
     0x1.8dfd64p-89f, 0x1.201408p-108f, 0.0f, 0.0f, 0x1.ca9e1ap-52f, 0.0f, 0.0f,
     0x1.ea2ec6p-92f, 0x1.f43934p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7ff18p-73f, 0.0f, 0.0f, 0x1.dba0b2p-22f, 0.0f, 0x1.7b71bp-54f,
     0x1.db4cfap-62f, 0.0f, 0.0f, 0x1.196a04p-10f, 0.0f, 0.0f, 0.0f, 0x1.1e0744p-118f,
     0x1.158ffap-95f, 0x1.6cd684p-105f, 0.0f, 0x1.b61902p-106f, 0.0f, 0.0f,
     0x1.000da2p-40f, 0.0f, 0x1.e3a11p-34f, 0x1.b94da2p-103f, 0x1.3b2642p-3f, 0.0f,
     0.0f, 0.0f, 0x1.b55eep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c9836ap-40f, 0x1.d261cp-15f, 0.0f, 0x1.171a9cp-85f, 0x1.445d3ep-6f,
     0.0f, 0x1.ea616cp-113f, 0.0f, 0x1.088e76p-94f, 0x1.33386p-52f, 0.0f,
     0x1.0bd80ap-12f, 0.0f, 0.0f, 0x1.6ca8c8p-37f, 0x1.90bbeap-116f, 0.0f,
     0x1.ee0c96p-112f, 0.0f, 0x1.07232ap-25f, 0x1.5ab852p-48f, 0.0f, 0x1.ac3ab8p-2f,
     0x1.1b2bap-64f, 0x1.a5d0fcp-53f, 0.0f, 0x1.e0920ep-50f, 0.0f, 0.0f,
     0x1.49c492p-123f, 0x1.57938cp-119f, 0.0f, 0.0f, 0x1.1ba2e6p-49f, 0x1.0500eep-77f,
     0.0f, 0.0f, 0.0f, 0x1.fa25a2p-47f, 0x1.c63f84p-44f, 0.0f, 0x1.a3f69ep-96f, 0.0f,
     0x1.ce7fbcp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b18dap-57f, 0.0f, 0.0f,
     0.0f, 0x1.cef9a6p-76f, 0x1.f39f1p-95f, 0x1.1850cp-27f, 0.0f, 0x1.125b06p-81f,
     0x1.8f3848p-29f, 0x1.644664p-44f, 0x1.c2d0bap-102f, 0x1.8dff14p-5f,
     0x1.0862c2p-33f, 0x1.cdf2bap-62f, 0.0f, 0x1.ec3d52p-14f, 0.0f, 0x1.9874p-100f,
     0.0f, 0.0f, 0.0f, 0x1.e4e4f4p-31f, 0x1.c20d52p-88f, 0.0f, 0x1.9940c2p-38f,
     0x1.8b993ap-85f, 0x1.f85458p-76f, 0.0f, 0.0f, 0x1.b0ec84p-65f, 0.0f, 0.0f,
     0x1.ec5fa2p-109f, 0x1.9f398p-67f, 0x1.9eb5e6p-32f, 0.0f, 0x1.53b776p-70f,
     0x1.bdb08cp-119f, 0x1.3c54fap-101f, 0.0f, 0.0f, 0.0f, 0x1.88a0b6p-98f,
     0x1.875b6cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2e90ap-94f, 0x1.212904p-79f,
     0.0f, 0.0f, 0.0f, 0x1.a0111ap-11f, 0x1.8a183ep-43f, 0x1.02a43cp-72f, 0.0f, 0.0f,
     0x1.048194p-55f, 0x1.10a924p-5f, 0.0f, 0x1.1aedbp-24f, 0x1.ccb4f8p-1f,
     0x1.3a7f34p-12f, 0x1.7cd8b2p-44f, 0.0f, 0x1.91f1ccp-106f, 0.0f, 0.0f,
     0x1.0a3a4ap-33f, 0.0f, 0.0f, 0x1.aa9ba8p-96f, 0.0f, 0.0f, 0x1.6b0d1p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9432p-61f, 0x1.bdb7b6p-102f, 0.0f, 0.0f, 0.0f,
     0x1.ef175ap-121f, 0x1.68a634p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f6adap-58f,
     0x1.469ed6p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54f9dap-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1fa3a4p-114f, 0x1.a274e4p-82f, 0.0f, 0.0f, 0x1.cd9742p-31f,
     0x1.a849c6p-62f, 0.0f, 0.0f, 0x1.542914p-44f, 0x1.9bf216p-114f, 0x1.ac421ep-69f,
     0.0f, 0.0f, 0.0f, 0x1.e54faap-46f, 0x1.7655a4p-83f, 0x1.cd26fep-88f,
     0x1.9b112ep-22f, 0.0f, 0.0f, 0x1.d5138p-18f, 0.0f, 0x1.5fb00ap-18f, 0.0f, 0.0f,
     0.0f, 0x1.ee0906p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bd6d2p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27cfbap-100f, 0.0f, 0.0f,
     0x1.d426eap-35f, 0x1.dd79p-34f, 0x1.284b82p-4f, 0x1.c74f14p-62f, 0x1.5adbb8p-99f,
     0.0f, 0.0f, 0x1.3f2a84p-5f, 0x1.a74eb6p-12f, 0x1.69bc86p-99f, 0x1.044ad2p-99f,
     0.0f, 0x1.d0455p-24f, 0x1.edecfp-123f, 0.0f, 0.0f, 0x1.c6e9e6p-2f, 0.0f,
     0x1.ac9a38p-40f, 0.0f, 0x1.39bfaep-89f, 0x1.05a858p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59775ap-66f, 0.0f, 0.0f, 0.0f, 0x1.66d9f4p-62f, 0x1.7c6c22p-86f,
     0x1.74eac4p-77f, 0x1.b159bcp-19f, 0.0f, 0.0f, 0x1.928082p-51f, 0x1.3d4d18p-37f,
     0x1.9079fap-70f, 0x1.2c404ep-56f, 0.0f, 0.0f, 0x1.2d7d74p-104f, 0x1.6834ecp-83f,
     0x1.6b454ep-1f, 0.0f, 0x1.64c39ep-16f, 0.0f, 0.0f, 0x1.26ce42p-120f,
     0x1.80a0dcp-103f, 0x1.6f9dacp-66f, 0.0f, 0.0f, 0.0f, 0x1.52e652p-38f,
     0x1.cb6edcp-2f, 0.0f, 0.0f, 0x1.2a4f1ep-79f, 0x1.2a4dcap-106f, 0x1.9fedf6p-108f,
     0.0f, 0.0f, 0.0f, 0x1.d6cf74p-125f, 0.0f, 0.0f, 0x1.dbe0c2p-42f, 0x1.0c093ep-51f,
     0.0f, 0.0f, 0.0f, 0x1.301f9p-33f, 0x1.f88ee4p-54f, 0.0f, 0x1.a5e4p-87f,
     0x1.5cd902p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8e924p-59f, 0x1.9c2438p-123f, 0.0f,
     0.0f, 0x1.219e0cp-83f, 0.0f, 0.0f, 0.0f, 0x1.83c206p-27f, 0.0f, 0.0f, 0.0f,
     0x1.6f8db2p-107f, 0x1.1812c8p-49f, 0.0f, 0x1.da3494p-67f, 0.0f, 0.0f,
     0x1.34ab98p-1f, 0x1.21f6c8p-123f, 0.0f, 0x1.790736p-123f, 0x1.41efa4p-36f, 0.0f,
     0x1.a927c8p-1f, 0.0f, 0.0f, 0x1.62c96cp-68f, 0.0f, 0x1.c184fep-104f, 0.0f,
     0x1.800736p-17f, 0.0f, 0x1.fbafeep-94f, 0x1.19921ap-26f, 0.0f, 0x1.a7bf18p-14f,
     0.0f, 0x1.06d6e8p-23f, 0x1.eb127cp-53f, 0x1.92a254p-112f, 0x1.9db3b6p-52f,
     0x1.31644cp-99f, 0x1.769512p-25f, 0x1.314b5p-92f, 0x1.8854dap-27f, 0.0f,
     0x1.a2835p-72f, 0x1.33c042p-112f, 0x1.ffcfd8p-78f, 0x1.155d56p-43f,
     0x1.90dd92p-91f, 0.0f, 0x1.7b3a58p-99f, 0x1.c7de0ap-60f, 0x1.cf8c56p-31f, 0.0f,
     0x1.862cbp-21f, 0.0f, 0.0f, 0x1.9fdep-26f, 0x1.7c6146p-93f, 0.0f, 0.0f, 0.0f,
     0x1.f5ca14p-44f, 0x1.3f6334p-123f, 0.0f, 0x1.282edp-42f, 0x1.42115p-46f,
     0x1.3bf532p-53f, 0.0f, 0x1.57c7c8p-65f, 0x1.57a3d6p-83f, 0.0f, 0x1.711cecp-73f,
     0.0f, 0.0f, 0x1.393522p-68f, 0.0f, 0x1.40851ap-2f, 0x1.a8e5a6p-88f,
     0x1.f6bb14p-49f, 0x1.09e7c8p-21f, 0.0f, 0x1.afa0e4p-73f, 0x1.38eaep-15f,
     0x1.7640bap-95f, 0.0f, 0.0f, 0x1.cd1054p-60f, 0.0f, 0.0f, 0x1.83d43p-89f,
     0x1.d71c3p-59f, 0.0f, 0x1.f19728p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c079f8p-10f, 0x1.7e3dbp-10f, 0x1.6431cp-73f, 0.0f, 0.0f, 0x1.26037cp-91f,
     0.0f, 0x1.f01eb2p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2739cp-117f,
     0x1.7bdcd4p-26f, 0x1.7d9472p-5f, 0.0f, 0.0f, 0.0f, 0x1.d05598p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.65c246p-25f, 0.0f, 0x1.a1a3dp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f00c6p-42f, 0.0f, 0.0f, 0.0f, 0x1.62f452p-10f, 0x1.27804ap-31f,
     0x1.806554p-12f, 0.0f, 0.0f, 0.0f, 0x1.412696p-40f, 0.0f, 0x1.383224p-54f,
     0x1.45b40ep-102f, 0x1.cbd90ap-13f, 0.0f, 0x1p0f, 0.0f, 0x1.b0daa2p-42f, 0.0f,
     0x1.6658fp-33f, 0.0f, 0.0f, 0x1.29d04p-14f, 0.0f, 0x1p0f, 0.0f, 0x1.3d8ff4p-116f,
     0.0f, 0.0f, 0x1.cb074cp-108f, 0x1.2c67b6p-44f, 0x1.060d14p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.325804p-100f, 0.0f, 0.0f, 0x1.5cfee6p-75f, 0x1.c94358p-80f,
     0x1.5c09e6p-10f, 0.0f, 0x1.e2dd2p-36f, 0.0f, 0x1.802358p-84f, 0x1.e1924cp-44f,
     0.0f, 0.0f, 0x1.17f8a6p-25f, 0x1.596d0ep-59f, 0.0f, 0x1.1cb1ccp-92f, 0.0f, 0.0f,
     0x1.d9cccap-52f, 0x1.255376p-90f, 0x1.0eef96p-29f, 0.0f, 0x1.624b5cp-70f, 0.0f,
     0.0f, 0x1.aec098p-20f, 0.0f, 0x1.f64342p-74f, 0.0f, 0x1.adfa4ep-59f,
     0x1.8fbe44p-83f, 0x1.7fc8dcp-20f, 0x1.38b516p-28f, 0.0f, 0.0f, 0.0f,
     0x1.16748ep-80f, 0.0f, 0x1.29f40cp-122f, 0.0f, 0.0f, 0x1.19fdeep-20f, 0.0f,
     0x1.d5d2dep-124f, 0.0f, 0x1.cde8p-3f, 0x1.305578p-55f, 0x1.769cb4p-25f, 0.0f,
     0.0f, 0x1.58baecp-51f, 0.0f, 0x1.b7ceeep-71f, 0x1.65306ap-10f, 0.0f,
     0x1.186abp-14f, 0.0f, 0.0f, 0.0f, 0x1.5537e4p-5f, 0x1.d3d332p-122f, 0.0f,
     0x1.18e434p-87f, 0x1.32106cp-69f, 0x1.449068p-117f, 0.0f, 0x1.236f9p-86f,
     0x1.aea0eap-58f, 0.0f, 0.0f, 0x1.9da43ap-58f, 0.0f, 0x1.d98128p-120f,
     0x1.f066c4p-66f, 0.0f, 0x1.0e17a6p-47f, 0.0f, 0.0f, 0.0f, 0x1.b6e928p-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3f216cp-120f, 0x1.5eb96cp-57f, 0x1.dd6e3ep-18f, 0.0f,
     0x1.bcaa14p-2f, 0.0f, 0x1.508cbcp-67f, 0x1.f5ef18p-83f, 0.0f, 0.0f, 0.0f,
     0x1.2c621cp-34f, 0.0f, 0.0f, 0x1.2857cap-10f, 0.0f, 0x1.f9ec68p-35f,
     0x1.2b77c4p-38f, 0x1.d7551ap-13f, 0.0f, 0x1.30f3e6p-89f, 0x1.101362p-110f,
     0x1.727e16p-117f, 0x1.0198f4p-121f, 0.0f, 0.0f, 0.0f, 0x1.cc4ae2p-55f,
     0x1.6fb154p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b73c3cp-117f,
     0.0f, 0.0f, 0x1.26e41cp-50f, 0x1.daaaeap-117f, 0x1.915d7cp-54f, 0.0f, 0.0f,
     0x1.9b49c2p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16e8b4p-55f, 0x1.8c4f26p-85f, 0.0f,
     0.0f, 0x1.c138c4p-120f, 0.0f, 0x1.06ccfep-27f, 0x1.9041b2p-73f, 0x1.3fa7e6p-97f,
     0x1.0ca5d8p-44f, 0.0f, 0x1.17a5cp-70f, 0x1.52dd08p-60f, 0.0f, 0.0f,
     0x1.cf5022p-122f, 0.0f, 0x1.20532ep-107f, 0x1.ba4afap-53f, 0.0f, 0x1.2e2c1cp-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ccbcep-19f, 0x1.ef15bcp-52f,
     0x1.2eb28cp-12f, 0x1.46d966p-126f, 0x1.e17cc2p-122f, 0.0f, 0x1.ef8b8p-108f, 0.0f,
     0.0f, 0x1.f69162p-92f, 0.0f, 0x1.69e458p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.362d16p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b6662p-14f, 0.0f,
     0x1.fe4f2cp-38f, 0.0f, 0x1.788e46p-14f, 0.0f, 0x1p0f, 0.0f, 0x1.dae4ecp-91f,
     0.0f, 0x1.fcdaf6p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2b3eep-66f,
     0x1.f5ba18p-120f, 0x1.2af522p-99f, 0x1.ef5668p-55f, 0x1.fd29cp-8f,
     0x1.89d65ep-100f, 0x1.573716p-106f, 0.0f, 0x1.1b416ap-37f, 0.0f, 0x1.2d4d64p-57f,
     0x1.8442d4p-86f, 0x1.496d08p-62f, 0x1.e9ed98p-28f, 0.0f, 0.0f, 0x1.d109f8p-98f,
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
            tmp1 = Sleef_expf1_u10purecfma(tmp0);
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
    printf("Sleef_expf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expf1_u10purecfma bench acc %a\n", global_bench_acc);
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
