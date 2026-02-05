/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshf1_u10purecfma.c --function \
 *     Sleef_acoshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0.0f, 0x1.b4e756p-78f, 0.0f, 0.0f, 0.0f, 0x1.e85b0ep-113f, 0.0f, 0.0f,
     0x1.83e688p-56f, 0x1.667bd4p-122f, 0.0f, 0.0f, 0x1.686f7ep-86f, 0.0f,
     0x1.d43762p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2f32p-43f, 0x1.126b0ap-123f,
     0x1.dde606p-125f, 0.0f, 0x1.358372p-25f, 0.0f, 0x1.578172p-28f, 0x1.2d782p-96f,
     0x1.fbe9fep-71f, 0x1.f06002p-8f, 0.0f, 0x1.61e598p-93f, 0x1.f21168p-25f,
     0x1.0c0482p-30f, 0.0f, 0x1.c7a09p-10f, 0x1.4feafap-105f, 0x1.f2d24cp-90f,
     0x1.81668cp-31f, 0x1.68f25ap-75f, 0x1.c64912p-92f, 0x1.9c38e8p-59f, 0.0f, 0.0f,
     0.0f, 0x1.6aceeap-21f, 0x1.c79af6p-45f, 0.0f, 0.0f, 0x1.8ad196p-126f,
     0x1.9e1cbcp-99f, 0.0f, 0.0f, 0.0f, 0x1.2194cp-67f, 0x1.ab8684p-117f,
     0x1.1c34e2p-95f, 0x1.5972eap-6f, 0x1.7318ecp-89f, 0.0f, 0.0f, 0.0f,
     0x1.a6d05ep-105f, 0.0f, 0x1.540cc8p-54f, 0.0f, 0.0f, 0x1.2a02b4p-72f,
     0x1.ff9eecp-34f, 0x1.331d74p-21f, 0.0f, 0x1.562824p-58f, 0x1.1e552ap-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbca3cp-125f, 0x1.4e02bp-35f,
     0x1.2fc25p-15f, 0.0f, 0.0f, 0x1.296e8ep-34f, 0x1.e1f7fcp-103f, 0.0f,
     0x1.2727dp-75f, 0x1.d232fp-120f, 0.0f, 0x1.2cf9c8p-62f, 0x1.250a08p-101f,
     0x1.e0cba8p-4f, 0x1.bc621cp-4f, 0x1.145cdep-17f, 0.0f, 0.0f, 0x1.b43f62p-28f,
     0x1.47abep-60f, 0x1.a44b28p-94f, 0x1.01f6d6p-30f, 0x1.b9bd04p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1de01p-92f, 0.0f, 0.0f, 0x1.4e3cfcp-25f, 0.0f, 0.0f,
     0x1.dd2a96p-87f, 0.0f, 0.0f, 0.0f, 0x1.eaf956p-98f, 0x1.e6315p-86f,
     0x1.56aa1ap-111f, 0.0f, 0x1.94805ap-102f, 0.0f, 0.0f, 0x1.eff0fcp-96f, 0.0f,
     0x1.986e8cp-30f, 0x1.f0762p-113f, 0x1.888556p-121f, 0x1.96ebd2p-8f, 0.0f,
     0x1.e901c4p-109f, 0.0f, 0.0f, 0.0f, 0x1.f6e816p-15f, 0x1.9ad628p-111f, 0.0f,
     0x1.b44f8p-36f, 0.0f, 0.0f, 0x1.6ebb12p-92f, 0.0f, 0x1.12d2bcp-86f,
     0x1.02f0a4p-110f, 0.0f, 0x1.82257ep-8f, 0.0f, 0x1.4e4c7p-123f, 0.0f,
     0x1.fa71dp-71f, 0x1.f638ap-6f, 0x1.653cbep-58f, 0x1.8f548ep-64f, 0.0f, 0.0f,
     0x1.6c1f8ap-100f, 0.0f, 0.0f, 0x1.03090cp-59f, 0x1.0a90f8p-9f, 0x1.41bf6p-126f,
     0x1.eeab74p-22f, 0x1.91e4dp-78f, 0x1.53d51cp-26f, 0x1.98e36ap-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0256fp-66f, 0.0f, 0.0f, 0x1.508152p-106f, 0.0f, 0.0f,
     0x1.b8043ap-16f, 0.0f, 0.0f, 0.0f, 0x1.9a9b92p-18f, 0.0f, 0x1.784ebap-30f,
     0x1.20fe84p-113f, 0x1.b0a41ap-92f, 0.0f, 0.0f, 0x1.96aa5p-80f, 0x1.9c2516p-101f,
     0x1.778c2ep-1f, 0.0f, 0x1.3b42eap-121f, 0x1.cee74ep-98f, 0x1.c7c554p-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6def68p-18f, 0.0f, 0x1.dc3704p-92f, 0x1.fb1638p-117f,
     0x1.48010ap-23f, 0x1.fa9efap-86f, 0.0f, 0.0f, 0x1.9b62eap-118f, 0x1.9b901p-119f,
     0x1.dc03ecp-76f, 0.0f, 0.0f, 0.0f, 0x1.7c0446p-91f, 0.0f, 0x1.0a2e68p-13f,
     0x1.2b6b8p-62f, 0x1.56be5p-125f, 0x1.22fd3ep-61f, 0x1.1d232cp-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fd6a1p-9f, 0x1.cda434p-23f, 0.0f, 0x1.c2651ep-6f,
     0x1.71150ep-21f, 0x1.e289f8p-4f, 0.0f, 0x1.57df3p-17f, 0x1.4cf02ep-81f, 0.0f,
     0x1.de6eap-96f, 0.0f, 0.0f, 0.0f, 0x1.eaa71p-35f, 0x1.378e2ep-99f,
     0x1.f9e768p-98f, 0.0f, 0x1.136756p-4f, 0.0f, 0.0f, 0.0f, 0x1.b0dc7cp-121f,
     0x1.7f9aecp-57f, 0.0f, 0x1.2b9e34p-114f, 0x1.444c9p-46f, 0.0f, 0x1.f30cf2p-29f,
     0x1.deece4p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ad3cep-1f,
     0x1.6f4f4cp-61f, 0x1.e2ee5p-77f, 0.0f, 0x1.0b8186p-124f, 0x1.fd713ep-66f,
     0x1.859efcp-83f, 0x1.79d71ap-81f, 0x1.0e20e2p-122f, 0x1.cfdfd4p-62f,
     0x1.c3986ap-113f, 0.0f, 0.0f, 0x1.2a5e7ep-36f, 0x1p0f, 0x1.bd56d4p-81f, 0.0f,
     0x1.aeee42p-36f, 0x1.1a191cp-53f, 0x1.f83756p-99f, 0x1.761612p-100f, 0.0f, 0.0f,
     0.0f, 0x1.ac25f4p-53f, 0x1.d18862p-72f, 0x1.708966p-53f, 0.0f, 0x1.b30532p-86f,
     0x1.6fba16p-91f, 0.0f, 0.0f, 0x1.97f962p-58f, 0.0f, 0.0f, 0x1.a445e8p-11f,
     0x1.69b9f8p-111f, 0x1.9389f6p-116f, 0x1.3ee87cp-38f, 0x1.49e33cp-26f, 0.0f, 0.0f,
     0x1.e4eb7ep-47f, 0.0f, 0x1.84b038p-74f, 0.0f, 0x1.5813bcp-56f, 0.0f,
     0x1.a30d4ap-47f, 0x1.d32beap-91f, 0x1.29e4c4p-56f, 0x1.523e14p-7f, 0.0f,
     0x1.e4ae62p-58f, 0x1.51a89cp-100f, 0x1.187ae6p-28f, 0x1.d073e6p-84f,
     0x1.f0f7c4p-46f, 0.0f, 0x1.e9d34ep-33f, 0.0f, 0x1.4e568ap-37f, 0x1.c3ae88p-40f,
     0x1.ae82b6p-46f, 0x1.a14d32p-11f, 0.0f, 0.0f, 0.0f, 0x1.8cd02cp-27f, 0.0f, 0.0f,
     0.0f, 0x1.a3214ep-93f, 0.0f, 0x1.a253bep-98f, 0.0f, 0x1.7f3d54p-55f,
     0x1.24c424p-57f, 0.0f, 0x1.105592p-32f, 0.0f, 0x1.5ea7fp-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cfc838p-44f, 0.0f, 0x1.6f0e44p-70f, 0x1.9fc5cp-106f, 0.0f, 0.0f,
     0x1.b64f98p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31dce6p-109f,
     0x1.89fce8p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2e3e4p-12f,
     0x1.e3c714p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7001p-124f, 0x1.130678p-18f,
     0x1.5a9994p-70f, 0x1.b0d63p-61f, 0x1.90e6dap-13f, 0x1.89c92ep-81f,
     0x1.7f5122p-18f, 0x1.33ea38p-89f, 0x1.e6f8d6p-64f, 0x1.de3f98p-45f, 0.0f,
     0x1.a4c9p-77f, 0.0f, 0x1.d1d974p-8f, 0x1.412162p-96f, 0x1.2c172ap-119f,
     0x1.27b99ep-11f, 0x1.45e51p-66f, 0x1.1a264cp-89f, 0x1.47299ap-71f, 0.0f, 0.0f,
     0x1.22a2d6p-15f, 0.0f, 0x1.f71d2cp-35f, 0.0f, 0.0f, 0x1.d14948p-77f, 0.0f,
     0x1.cfa462p-114f, 0x1.70b928p-6f, 0.0f, 0x1.4987bap-12f, 0x1.d028a8p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f2f9p-10f, 0x1.ae3398p-10f, 0.0f, 0x1.7400acp-116f,
     0.0f, 0x1.795366p-54f, 0.0f, 0.0f, 0.0f, 0x1.012896p-89f, 0x1.6f5e0ap-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a1046p-27f, 0x1.5b8d2cp-44f, 0x1.c50f46p-76f,
     0x1.cb4f6ap-45f, 0x1.509dbep-88f, 0.0f, 0x1.b28eb4p-61f, 0.0f, 0.0f, 0.0f,
     0x1.38302ap-92f, 0x1.b04f72p-62f, 0x1.8294e6p-66f, 0.0f, 0.0f, 0.0f,
     0x1.6b1c4ap-63f, 0x1.0de136p-92f, 0x1.185c3cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c157bap-14f, 0x1.59016p-20f, 0x1.077be6p-57f,
     0x1.64e68ap-83f, 0x1.785e1ep-13f, 0x1.a41fe8p-72f, 0.0f, 0.0f, 0x1.b3363p-4f,
     0x1.f3e6d6p-36f, 0.0f, 0.0f, 0x1.4d438p-68f, 0x1.b9817cp-6f, 0.0f, 0.0f,
     0x1.d860acp-106f, 0.0f, 0x1.aef498p-61f, 0.0f, 0x1.36d6e8p-60f, 0.0f,
     0x1.888574p-34f, 0x1.598daap-56f, 0.0f, 0x1.9edebap-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa530ep-44f, 0x1.6429e2p-18f, 0.0f, 0.0f, 0x1.12167cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.2d726ep-123f, 0x1.e84a48p-77f, 0.0f, 0.0f, 0.0f, 0x1.1a973ap-77f, 0.0f,
     0x1.54989ap-111f, 0x1.ce8722p-14f, 0x1.2d543cp-68f, 0.0f, 0x1.1e0cfap-34f, 0.0f,
     0.0f, 0x1.2af12cp-44f, 0x1.f35a54p-89f, 0x1.73041ap-17f, 0x1.042688p-20f, 0.0f,
     0x1.fecf58p-41f, 0x1.481116p-115f, 0x1.2f827cp-112f, 0x1.2fe66cp-116f,
     0x1.a3d2aep-8f, 0x1.a82beep-63f, 0x1.c60116p-99f, 0.0f, 0x1.b19056p-97f, 0.0f,
     0x1.a3d476p-98f, 0x1.86484ap-108f, 0x1.40073cp-11f, 0.0f, 0.0f, 0.0f,
     0x1.10ad92p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.602726p-50f, 0x1.9556eep-74f,
     0x1.58abb4p-65f, 0x1.941476p-24f, 0.0f, 0x1.fc08a8p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a56658p-90f, 0.0f, 0.0f, 0.0f, 0x1.8cb3bap-69f, 0x1.5144dap-66f,
     0x1.e1cf16p-91f, 0.0f, 0.0f, 0x1.ad2abp-54f, 0.0f, 0x1p0f, 0.0f, 0x1.528682p-59f,
     0.0f, 0x1.bc775ap-80f, 0x1.44b55ap-28f, 0.0f, 0.0f, 0.0f, 0x1.d96e24p-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.192e36p-78f, 0x1.1c4efap-32f, 0.0f, 0.0f, 0.0f,
     0x1.3b097ap-70f, 0.0f, 0.0f, 0x1.8973b2p-5f, 0.0f, 0.0f, 0x1.f1402ep-28f, 0.0f,
     0x1.b20566p-87f, 0.0f, 0.0f, 0x1.c9e4e2p-95f, 0.0f, 0x1.68a9b8p-81f, 0.0f, 0.0f,
     0x1.f43596p-76f, 0.0f, 0.0f, 0x1.e68c8ep-53f, 0x1.ed12f4p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7971f8p-55f, 0.0f, 0x1.1c005p-8f, 0.0f, 0.0f, 0x1.82b91p-49f, 0.0f,
     0x1.6e9f1ap-124f, 0x1.a6d0dp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.136f4cp-98f,
     0x1.13e602p-61f, 0.0f, 0.0f, 0x1.94361p-102f, 0.0f, 0x1.8920aep-50f, 0.0f, 0.0f,
     0x1.bd2c7ep-3f, 0.0f, 0x1.3082fcp-86f, 0.0f, 0x1.8c3396p-21f, 0.0f,
     0x1.bc740ap-94f, 0.0f, 0x1.b771a2p-117f, 0.0f, 0x1.96c62p-31f, 0x1.3bb0b2p-88f,
     0x1.5231dep-17f, 0x1.7f53ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9084cp-77f,
     0x1.da0ad8p-94f, 0.0f, 0x1.a16c44p-56f, 0x1.90af8ap-80f, 0.0f, 0x1.76dc2ep-37f,
     0.0f, 0x1.838984p-69f, 0.0f, 0x1.92bcacp-90f, 0x1.a5dd8ep-58f, 0x1.cb6138p-86f,
     0.0f, 0.0f, 0.0f, 0x1.63c1dp-24f, 0x1.5a60bep-87f, 0.0f, 0x1.a0e52ap-88f, 0.0f,
     0.0f, 0x1.309a92p-102f, 0.0f, 0x1.0c165ap-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca9198p-48f, 0x1.35bf72p-85f, 0x1.329022p-42f, 0.0f, 0x1.e9d1a4p-29f,
     0x1.5f1894p-35f, 0x1.5a60dcp-42f, 0.0f, 0x1.ba2d54p-57f, 0x1.7dd4bcp-120f, 0.0f,
     0x1.ae3a38p-95f, 0.0f, 0x1.eff9cep-51f, 0.0f, 0.0f, 0x1.35bb9ap-112f,
     0x1.2b875ep-18f, 0.0f, 0.0f, 0x1.19dc2ap-60f, 0.0f, 0x1.d4aedcp-36f, 0.0f, 0.0f,
     0x1.b3c6a4p-46f, 0.0f, 0.0f, 0.0f, 0x1.29d4acp-89f, 0.0f, 0x1.ff9e2ep-5f, 0.0f,
     0x1.a3684ap-70f, 0.0f, 0.0f, 0x1.b6b4eep-86f, 0x1.b38a2ap-106f, 0x1.6be3f2p-120f,
     0x1.d68c78p-77f, 0x1.95be82p-19f, 0.0f, 0x1.f0006p-51f, 0.0f, 0.0f, 0.0f,
     0x1.c62146p-104f, 0x1.a9da94p-81f, 0.0f, 0x1.baba46p-22f, 0x1.aa1362p-124f,
     0x1.80237cp-60f, 0x1.9db892p-79f, 0.0f, 0.0f, 0x1.5bc266p-30f, 0.0f,
     0x1.98a19p-54f, 0x1.395a22p-5f, 0.0f, 0.0f, 0x1.e181a2p-48f, 0x1.0c275p-25f,
     0x1.98821cp-75f, 0x1.8697a4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06c6c8p-84f, 0.0f, 0x1.0bd2f8p-14f, 0.0f, 0x1.07d0ap-111f, 0x1.47dac2p-122f,
     0.0f, 0x1.e9ebacp-107f, 0x1.5a38ccp-73f, 0x1.f05d38p-90f, 0.0f, 0x1.c213c8p-46f,
     0.0f, 0x1.0e0b56p-90f, 0x1.3bf54cp-120f, 0.0f, 0x1.8470e2p-83f, 0.0f, 0.0f,
     0x1.b0a44cp-61f, 0x1.2e3546p-108f, 0x1.489eacp-75f, 0x1.31a1f6p-92f, 0.0f, 0.0f,
     0x1.bf1b38p-32f, 0x1.87d628p-118f, 0x1.9f5884p-48f, 0x1.14223ep-122f,
     0x1.1463b4p-48f, 0x1.31f44p-49f, 0.0f, 0x1.4dbea2p-25f, 0.0f, 0x1.08df6cp-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.13300ep-51f, 0.0f, 0x1.84dab4p-63f, 0x1.ec4dacp-87f,
     0.0f, 0.0f, 0x1.3a9214p-79f, 0x1.54ad7ap-69f, 0x1.b19aap-23f, 0x1.c94d3p-65f,
     0.0f, 0x1.4a7bfp-26f, 0x1.66af74p-20f, 0.0f, 0.0f, 0x1.4f8e44p-50f, 0.0f, 0.0f,
     0.0f, 0x1.c71804p-122f, 0x1.8938cap-65f, 0x1.adf076p-55f, 0.0f, 0.0f,
     0x1.9a8376p-108f, 0.0f, 0.0f, 0x1.3ef402p-36f, 0x1.ab4d5p-10f, 0.0f, 0.0f,
     0x1.b05a66p-32f, 0.0f, 0.0f, 0.0f, 0x1.7e5f2ap-114f, 0.0f, 0.0f,
     0x1.93dbe2p-113f, 0.0f, 0x1.0a84cap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b8d3cp-45f,
     0x1.1a8beep-48f, 0x1.511888p-50f, 0.0f, 0x1.c151c8p-96f, 0.0f, 0x1p0f,
     0x1.b0c9bep-63f, 0x1.ed01bap-98f, 0x1.248ddep-38f, 0x1.5ca6e8p-115f,
     0x1.cf1f76p-63f, 0x1.b414bp-53f, 0x1.903fdp-115f, 0x1.22b55ap-92f, 0.0f,
     0x1.d30816p-48f, 0x1.6b5fbap-95f, 0x1.caf982p-88f, 0x1.646ee4p-38f,
     0x1.503dc8p-107f, 0x1.590d4ep-50f, 0.0f, 0.0f, 0x1.92718cp-30f, 0.0f,
     0x1.bd924ep-32f, 0x1.e60fc4p-107f, 0x1.3a214ap-58f, 0.0f, 0.0f, 0x1.6cc90ap-8f,
     0x1.480722p-93f, 0.0f, 0x1.f278b4p-117f, 0.0f, 0x1.3ba5f4p-70f, 0.0f,
     0x1.d8d464p-120f, 0.0f, 0.0f, 0x1.4988cp-11f, 0.0f, 0x1.a59746p-33f, 0.0f,
     0x1.d6122cp-118f, 0x1.afba8ep-49f, 0x1.5c50fap-31f, 0.0f, 0x1.02445cp-125f, 0.0f,
     0x1.bf8f32p-17f, 0x1.d5451p-37f, 0x1.b3a2bp-101f, 0.0f, 0x1.68460ep-105f,
     0x1.6977c4p-1f, 0x1.107c7cp-14f, 0.0f, 0x1.9c14a2p-11f, 0x1.da692cp-28f,
     0x1.a8c11ap-88f, 0x1.0a183p-121f, 0x1.43c816p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d6d62p-17f, 0x1.d9e498p-84f, 0.0f, 0x1.a98074p-117f, 0x1.dfb5d6p-23f, 0.0f,
     0.0f, 0.0f, 0x1.0a19bap-95f, 0x1.538d26p-86f, 0x1.18f39p-81f, 0.0f, 0.0f,
     0x1.bc261p-51f, 0x1.b123d4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e419cp-87f, 0.0f,
     0x1.3cd37ap-87f, 0.0f, 0x1.7a787p-43f, 0x1.4844bcp-35f, 0x1.d9d53ap-80f,
     0x1.fb412p-48f, 0x1.4107eap-106f, 0x1.bf9f5ep-26f, 0x1.ac3354p-42f,
     0x1.1de4ep-115f, 0.0f, 0x1p0f, 0x1.a508bap-77f, 0.0f, 0.0f, 0x1.a2a616p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.869c78p-88f, 0x1.3b8af4p-24f, 0.0f, 0x1.a4823ep-16f,
     0x1.606eaap-71f, 0x1.486932p-61f, 0x1.2c7464p-121f, 0x1.1035d6p-95f, 0.0f,
     0x1.a17cc4p-66f, 0.0f, 0.0f, 0x1.696762p-104f, 0.0f, 0x1.2b35aep-116f, 0.0f,
     0.0f, 0.0f, 0x1.ec784ap-99f, 0.0f, 0.0f, 0x1.44351p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3f6e8p-3f, 0x1.fbd3fap-89f, 0x1.c51908p-83f, 0x1.cad188p-82f,
     0x1.ec8fdcp-86f, 0.0f, 0.0f, 0x1.544104p-92f, 0.0f, 0x1.c81842p-10f, 0.0f,
     0x1.e0eb3cp-15f, 0.0f, 0x1.d34d8ep-120f, 0x1.62f68ep-24f, 0x1.fd1f2ep-56f,
     0x1.966e82p-119f, 0x1.611c5ap-83f, 0.0f, 0x1.78f3f2p-88f, 0.0f, 0.0f,
     0x1.9833cap-108f, 0x1p0f, 0.0f, 0x1.7ab2a4p-82f, 0.0f, 0.0f, 0x1.e6ba6ep-8f,
     0.0f, 0.0f, 0.0f, 0x1.1a6fe4p-125f, 0.0f, 0.0f
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_acoshf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_acoshf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acoshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
