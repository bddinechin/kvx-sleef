/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fdimf1_purecfma.c --function \
 *     Sleef_finz_fdimf1_purecfma --arity 2 --headers \
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
     0.0f, 0x1.5c6196p-37f, 0x1.27786ap-124f, 0.0f, 0.0f, 0x1.16a14ap-5f,
     0x1.d8c8b4p-60f, 0.0f, 0.0f, 0x1.12386ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09aa2p-29f, 0x1.bccbd8p-3f, 0.0f, 0.0f, 0.0f, 0x1.8054e8p-109f, 0.0f, 0.0f,
     0x1.6f2588p-36f, 0.0f, 0x1.1d2d8p-11f, 0.0f, 0.0f, 0x1.7fead2p-11f, 0.0f, 0.0f,
     0x1.9bab8ep-38f, 0x1.ed36e6p-42f, 0x1.14b52cp-74f, 0.0f, 0.0f, 0x1.777dp-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4fbc6p-61f, 0x1.0ed502p-65f,
     0x1.f9d65cp-67f, 0x1.6fb3b8p-57f, 0.0f, 0.0f, 0x1.1cc81cp-100f, 0x1.218ec6p-64f,
     0.0f, 0x1.7be534p-124f, 0.0f, 0.0f, 0x1.00163p-115f, 0x1.cff6dep-34f,
     0x1.597a72p-67f, 0.0f, 0x1.32158cp-79f, 0x1.d10832p-62f, 0.0f, 0x1.d7a1cp-95f,
     0.0f, 0x1.964016p-109f, 0.0f, 0x1.e161eep-42f, 0.0f, 0x1.f8317p-101f, 0.0f,
     0x1.507b6cp-88f, 0.0f, 0x1.c07f52p-64f, 0.0f, 0x1.04bcf6p-38f, 0x1.db1b14p-54f,
     0x1.7b2898p-95f, 0.0f, 0.0f, 0x1.11bbdap-123f, 0x1.0eaacap-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d98e0ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c6e6ap-114f,
     0x1.55a7d8p-117f, 0.0f, 0x1.f4b938p-44f, 0x1.959eep-73f, 0.0f, 0x1.164d3ep-48f,
     0x1.9a5f3ap-35f, 0x1.cee3cp-123f, 0.0f, 0.0f, 0.0f, 0x1.6f7b0ep-24f, 0.0f,
     0x1.761f46p-20f, 0x1.d663b4p-4f, 0x1.e333f6p-73f, 0.0f, 0x1.4f5156p-25f,
     0x1.8f5dep-114f, 0.0f, 0x1.f4c1eep-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89f646p-100f, 0.0f, 0x1.ddc618p-108f, 0x1p0f, 0x1.ccb68cp-29f, 0.0f,
     0x1.e73914p-49f, 0x1.b15192p-32f, 0x1.44153ep-84f, 0.0f, 0x1.567404p-60f, 0.0f,
     0.0f, 0x1.976dfep-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdefd2p-10f, 0x1.0c14ecp-64f,
     0.0f, 0.0f, 0.0f, 0x1.007e64p-75f, 0x1.f71fe8p-119f, 0.0f, 0.0f, 0.0f,
     0x1.990cf6p-64f, 0.0f, 0x1.21e09ep-9f, 0x1.25c72ap-59f, 0.0f, 0x1.7a62a4p-23f,
     0.0f, 0x1.0164e6p-22f, 0x1.c67e48p-3f, 0x1.2a4bc4p-13f, 0.0f, 0.0f,
     0x1.ee926ep-30f, 0x1.7c2872p-29f, 0x1.be7aecp-102f, 0.0f, 0x1.93ae14p-95f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.a25b88p-46f, 0x1.4269c4p-107f, 0x1.8fe434p-124f,
     0x1.99c20ep-110f, 0x1.6a34a4p-61f, 0x1.3172e8p-64f, 0x1.67f4f2p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f5a72p-89f, 0x1.728542p-4f, 0x1.18fe5cp-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.79bd2ap-97f, 0x1.b0648ep-46f, 0x1.1d0b86p-106f,
     0x1.bc20f8p-6f, 0.0f, 0x1.74158ep-102f, 0.0f, 0x1.072ee6p-3f, 0x1.727296p-51f,
     0x1.b0b986p-123f, 0.0f, 0.0f, 0x1.be887p-54f, 0.0f, 0x1.fda3bp-24f, 0.0f,
     0x1.92621p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17b6d6p-18f, 0x1.998c24p-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ea2f4p-5f, 0x1.d14004p-96f, 0x1.73a294p-8f, 0.0f,
     0.0f, 0x1.0ef59p-103f, 0x1.cbfd3cp-11f, 0.0f, 0x1.2852b6p-54f, 0x1.8b304ap-71f,
     0.0f, 0x1.6d807ep-56f, 0x1.598722p-125f, 0.0f, 0.0f, 0x1.5364fp-8f, 0.0f,
     0x1.f539d2p-104f, 0x1.7a231ep-126f, 0.0f, 0x1.b59b9ep-16f, 0x1.5a5672p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d7de86p-7f, 0x1.587ffep-115f, 0.0f, 0.0f, 0x1.25f544p-101f,
     0x1.fa1f78p-40f, 0x1.bec458p-65f, 0x1.75c596p-46f, 0.0f, 0x1.78ee5ep-93f,
     0x1.3060f4p-112f, 0.0f, 0x1.f7270ep-20f, 0.0f, 0.0f, 0x1.ad8368p-34f,
     0x1.39dee2p-60f, 0.0f, 0x1p0f, 0x1.6e2e16p-36f, 0x1.1a7d5cp-46f, 0x1.902578p-27f,
     0x1.bd1886p-104f, 0.0f, 0.0f, 0x1.33168ap-18f, 0x1.a09dc4p-51f, 0.0f, 0.0f,
     0x1.0b8b54p-76f, 0x1.beca24p-101f, 0x1.1d8998p-41f, 0x1.ba675p-85f, 0.0f,
     0x1.8c92fep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a5282p-42f, 0.0f,
     0x1.51a156p-115f, 0x1.baea48p-14f, 0.0f, 0x1.707ac6p-100f, 0x1.b9908cp-73f, 0.0f,
     0.0f, 0x1.5ab26cp-44f, 0x1.40320cp-36f, 0x1.d97896p-40f, 0x1.ffe614p-43f,
     0x1.ba9c3cp-52f, 0.0f, 0.0f, 0x1.9dba56p-39f, 0.0f, 0.0f, 0.0f, 0x1.3eab2cp-122f,
     0.0f, 0x1.08e08p-3f, 0x1.7a4704p-6f, 0x1.d44522p-71f, 0.0f, 0x1.f8e61cp-59f,
     0.0f, 0x1.fe517ap-46f, 0x1.564426p-107f, 0x1.d7fc74p-78f, 0.0f, 0.0f,
     0x1.054b12p-73f, 0.0f, 0.0f, 0.0f, 0x1.a0be04p-93f, 0.0f, 0x1.9cc582p-80f,
     0x1.4f2532p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04f232p-38f, 0x1.2c69fep-14f,
     0x1.0388cp-54f, 0.0f, 0x1.1fda1ep-112f, 0x1.6a115cp-84f, 0.0f, 0.0f,
     0x1.e459fap-46f, 0.0f, 0.0f, 0x1.84c2eap-106f, 0x1.35df78p-95f, 0x1.abbef4p-96f,
     0.0f, 0.0f, 0x1.48bd3ap-46f, 0x1.c3763ep-30f, 0x1.bb4a24p-94f, 0x1.13dbaep-28f,
     0x1.ef391ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f6a7p-14f, 0x1.b0f18cp-40f, 0.0f,
     0x1.728ca4p-27f, 0.0f, 0x1.28f788p-35f, 0.0f, 0.0f, 0x1.483b0ep-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4ca94p-8f, 0x1.55100ap-125f, 0x1.de23bcp-20f, 0x1.c1a6eap-52f,
     0x1.31b3c6p-119f, 0x1.540bb2p-78f, 0x1.121436p-99f, 0.0f, 0.0f, 0x1.4c7842p-2f,
     0.0f, 0x1.3286f8p-48f, 0x1.074ebcp-5f, 0.0f, 0.0f, 0x1.b0746ep-37f,
     0x1.4cd048p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73b37ap-16f, 0.0f, 0x1.9a3dp-44f,
     0x1.4d2acep-43f, 0x1.5d839cp-84f, 0.0f, 0x1.438054p-71f, 0.0f, 0.0f,
     0x1.a518ecp-100f, 0x1.5bd72ap-98f, 0x1.695f4p-33f, 0.0f, 0x1.e27d8p-36f, 0.0f,
     0.0f, 0.0f, 0x1.5695a4p-44f, 0.0f, 0x1.ff90bep-87f, 0x1.bdc26p-109f,
     0x1.d2846cp-110f, 0x1.3a6974p-89f, 0x1.703212p-12f, 0x1.3e9d42p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c68ae2p-108f, 0.0f, 0x1.3b3066p-48f, 0.0f, 0.0f, 0x1.693c48p-10f,
     0x1.4bc9f8p-31f, 0.0f, 0x1.acf004p-66f, 0.0f, 0x1.f7006cp-15f, 0.0f, 0.0f, 0.0f,
     0x1.5c4d7ap-48f, 0x1.2c3b36p-7f, 0x1.bab24cp-84f, 0x1.d4621p-11f, 0.0f,
     0x1.128246p-113f, 0x1.07e2e4p-85f, 0x1.5b84b2p-110f, 0.0f, 0.0f, 0x1.e2f2aap-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ee2cep-126f, 0.0f, 0x1.86d408p-34f,
     0.0f, 0.0f, 0.0f, 0x1.056074p-85f, 0.0f, 0x1.98dc1cp-68f, 0x1.31d7eap-1f, 0.0f,
     0.0f, 0x1.c9d4aep-78f, 0x1.2b1d5cp-102f, 0.0f, 0.0f, 0.0f, 0x1.077498p-27f, 0.0f,
     0.0f, 0.0f, 0x1.9541a6p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8268ap-69f,
     0x1.8290ecp-36f, 0.0f, 0x1.713e26p-38f, 0.0f, 0x1.9d062ap-122f, 0.0f, 0x1p0f,
     0x1.e1f3d4p-1f, 0x1.50d076p-50f, 0.0f, 0.0f, 0.0f, 0x1.8a48d6p-54f,
     0x1.3384aap-5f, 0.0f, 0x1.63cd0ep-55f, 0.0f, 0x1.50ecb4p-109f, 0x1.8d5126p-101f,
     0.0f, 0x1.4ecd86p-61f, 0.0f, 0.0f, 0.0f, 0x1.827ff6p-15f, 0.0f, 0.0f,
     0x1.22f502p-73f, 0x1.5de942p-72f, 0.0f, 0x1.b0e836p-108f, 0.0f, 0.0f,
     0x1.80e6a2p-50f, 0.0f, 0x1.65234p-71f, 0x1.bb5c94p-122f, 0x1.c529fep-57f,
     0x1.21a9bap-78f, 0x1.bc3244p-98f, 0x1.a00a36p-18f, 0x1.5eb5fap-37f, 0.0f,
     0x1.09f61ap-11f, 0x1.ab2bb8p-85f, 0.0f, 0x1.f55b1ap-18f, 0x1.f60d36p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.40c1a2p-85f, 0x1.edbcdcp-100f, 0.0f, 0x1.e2ed9p-83f,
     0x1.e3c738p-93f, 0x1.f0394ep-11f, 0x1.bfa136p-56f, 0x1.d10174p-83f, 0.0f, 0.0f,
     0x1.1eeb98p-53f, 0.0f, 0x1.65af62p-3f, 0x1.03543p-65f, 0.0f, 0x1.14737ap-22f,
     0x1.c1d73cp-71f, 0.0f, 0x1.158f22p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.75cefcp-106f, 0x1.99082cp-54f, 0x1.ae5442p-34f, 0.0f, 0x1.6437bep-119f, 0.0f,
     0.0f, 0x1p0f, 0x1.51aeb4p-67f, 0.0f, 0x1.ce63f2p-86f, 0.0f, 0x1p0f,
     0x1.71fe48p-95f, 0x1.766c5ep-61f, 0.0f, 0x1.511cbep-29f, 0x1.01dc6ap-82f,
     0x1.066be6p-54f, 0.0f, 0.0f, 0x1.1c6c72p-2f, 0.0f, 0x1.39fdep-37f, 0.0f, 0.0f,
     0x1.fd8d04p-15f, 0.0f, 0.0f, 0.0f, 0x1.7ee06cp-92f, 0x1.c5b052p-54f,
     0x1.919e5p-117f, 0.0f, 0x1.c7c9e2p-60f, 0.0f, 0.0f, 0x1.ed64eep-32f,
     0x1.d55264p-108f, 0.0f, 0.0f, 0.0f, 0x1.f86886p-66f, 0.0f, 0.0f, 0.0f,
     0x1.fef9ccp-60f, 0x1.4bfc42p-15f, 0.0f, 0.0f, 0x1.ac6ebp-91f, 0x1.258304p-71f,
     0x1.e360fep-12f, 0x1.7c331cp-53f, 0.0f, 0x1.aa0674p-7f, 0x1.44e3bap-32f,
     0x1.efa3b2p-56f, 0x1.4461p-63f, 0x1.a746bp-120f, 0x1.c5f6e4p-72f,
     0x1.af698cp-120f, 0x1.7cd87cp-113f, 0x1.3f8c6ep-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aad294p-21f, 0.0f, 0x1.10be62p-58f,
     0.0f, 0x1.476708p-21f, 0x1.8ccc84p-4f, 0.0f, 0x1.384ddp-63f, 0.0f, 0.0f, 0.0f,
     0x1.b0643ap-3f, 0.0f, 0x1.7220f2p-14f, 0x1.0436eap-39f, 0x1.1aded4p-71f,
     0x1.9b7806p-18f, 0.0f, 0.0f, 0.0f, 0x1.2745bp-70f, 0x1.607f62p-118f, 0.0f, 0.0f,
     0x1.3d63cap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69f5e2p-49f, 0x1.7a3b7ep-68f, 0.0f,
     0x1.653018p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d961p-84f, 0.0f, 0x1.2ec0e6p-32f,
     0x1.2f823p-14f, 0.0f, 0x1.a33b4ap-30f, 0.0f, 0x1.563f5ep-35f, 0.0f, 0.0f,
     0x1.1bcc06p-86f, 0x1.add3c2p-104f, 0x1.13fb0cp-60f, 0x1.077c5ap-52f,
     0x1.77dafcp-50f, 0x1.605338p-21f, 0.0f, 0x1.149d42p-70f, 0x1.01d19cp-27f,
     0x1.649532p-67f, 0x1.171e22p-84f, 0.0f, 0.0f, 0.0f, 0x1.9eab38p-77f, 0.0f,
     0x1.7d39a6p-77f, 0.0f, 0x1.14d60ep-51f, 0x1.fc1564p-25f, 0.0f, 0x1.4a4414p-71f,
     0x1.8fcdf2p-107f, 0x1.ba5cd2p-4f, 0.0f, 0.0f, 0x1.939498p-51f, 0x1.ff0216p-104f,
     0x1.185b6ep-87f, 0.0f, 0x1.ee8a2cp-65f, 0x1.63d8acp-23f, 0x1.02171ep-52f,
     0x1.545458p-41f, 0.0f, 0.0f, 0x1.33464cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b15a62p-53f, 0.0f, 0x1.bf8cdcp-16f, 0x1.a3074ap-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ddcacp-102f, 0x1.8b4a6p-88f, 0x1.fb723p-93f, 0.0f, 0x1.e6529ap-81f,
     0x1.c169e2p-89f, 0x1.c93abcp-24f, 0x1.ebe27ap-47f, 0x1.81f186p-76f,
     0x1.53fdeep-99f, 0x1.ee1398p-31f, 0x1.4743dap-34f, 0.0f, 0.0f, 0.0f,
     0x1.6afc2ep-23f, 0.0f, 0.0f, 0.0f, 0x1.7de26p-106f, 0x1p0f, 0.0f, 0.0f,
     0x1.ed4036p-110f, 0x1.b01702p-118f, 0.0f, 0x1.57ae98p-25f, 0.0f, 0.0f, 0.0f,
     0x1.1892b2p-34f, 0x1.372ad4p-121f, 0.0f, 0.0f, 0x1.13a052p-37f, 0.0f,
     0x1.244508p-67f, 0x1.faffa8p-20f, 0x1.10b3e4p-98f, 0.0f, 0x1.8874aap-67f,
     0x1.3dec52p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6f396p-91f, 0.0f,
     0x1.eff882p-102f, 0x1.508c54p-124f, 0.0f, 0x1.7dc46ap-64f, 0.0f, 0.0f, 0.0f,
     0x1.7bab56p-53f, 0.0f, 0.0f, 0x1.518bcep-38f, 0.0f, 0x1.b86c34p-109f, 0.0f, 0.0f,
     0x1.2ee6ecp-118f, 0.0f, 0x1.8ebb58p-16f, 0x1.14d3bcp-63f, 0.0f, 0x1.96d922p-113f,
     0x1.f124d4p-13f, 0x1.a1148p-109f, 0x1.f8c3ap-89f, 0.0f, 0x1.04713ap-71f,
     0x1.bce328p-48f, 0x1.b1673cp-21f, 0x1.f04172p-38f, 0.0f, 0x1.0ca5dap-3f,
     0x1.853b8ep-50f, 0x1.e87052p-118f, 0x1.6c38ap-55f, 0x1.eb59eap-109f, 0.0f, 0.0f,
     0x1.e5b65cp-42f, 0x1.0a5298p-64f, 0x1.80feacp-105f, 0.0f, 0.0f, 0x1.5d14d4p-57f,
     0.0f, 0.0f, 0.0f, 0x1.6494ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19271ap-87f,
     0x1.f21faep-115f, 0x1.f2afa2p-16f, 0x1.927c86p-33f, 0.0f, 0.0f, 0x1.501b84p-58f,
     0.0f, 0x1.54235ep-11f, 0x1.fe611p-56f, 0x1.1cdcfp-80f, 0x1.34b87ap-32f, 0.0f,
     0x1.46c8a4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0c41cp-13f, 0x1.5a42dap-1f,
     0x1.9b8056p-43f, 0.0f, 0.0f, 0x1.2aaf86p-124f, 0x1.92be5p-51f, 0.0f, 0.0f, 0.0f,
     0x1.ad523ap-76f, 0.0f, 0x1.39e0fap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.17ede4p-108f, 0.0f, 0x1.4934bcp-80f, 0x1.6bf43p-72f, 0.0f,
     0x1.746548p-10f, 0x1.7fdfcp-33f, 0.0f, 0x1.512054p-80f, 0x1.a7d002p-71f, 0.0f,
     0.0f, 0.0f, 0x1.b31cc6p-123f, 0.0f, 0.0f, 0.0f, 0x1.767e8ep-64f, 0x1.381c7cp-73f,
     0x1.76143ap-14f, 0.0f, 0.0f, 0.0f, 0x1.f294a8p-96f, 0x1.0b6e2cp-115f, 0.0f,
     0x1.73924ap-46f, 0.0f, 0.0f, 0.0f, 0x1.8ad678p-81f, 0.0f, 0x1.d0fa64p-95f, 0.0f,
     0.0f, 0x1.34c788p-100f, 0.0f, 0x1.16e7b4p-27f, 0.0f, 0x1.56c6d8p-112f, 0.0f,
     0x1.23869p-5f, 0x1.2b17e4p-29f, 0x1.fb36ccp-104f, 0.0f, 0x1.3c9ae8p-104f,
     0x1.3f8c24p-43f, 0x1.ed1e1ap-103f, 0.0f, 0x1.75e3e2p-16f, 0x1.51b7d2p-87f,
     0x1.59559cp-107f, 0x1.1b8beep-103f, 0x1.b962eap-73f, 0x1.9d7c3cp-98f,
     0x1.15e75ep-67f, 0x1.ca3778p-122f, 0.0f, 0.0f, 0.0f, 0x1.51ce78p-113f,
     0x1.07f1b8p-103f, 0x1.9643a8p-75f, 0.0f, 0x1.2beba4p-39f, 0x1.7bcae6p-21f,
     0x1.8c1896p-68f, 0x1.c672d6p-3f, 0x1.a33a5ep-56f, 0.0f, 0x1.dd6514p-22f,
     0x1.fcbeecp-1f, 0x1.696694p-99f, 0.0f, 0x1.2cab0ap-92f, 0.0f, 0.0f,
     0x1.c8ffb4p-120f, 0.0f, 0x1.4388fp-20f, 0x1.8096f6p-35f, 0.0f, 0.0f, 0.0f,
     0x1.238aaap-27f, 0x1p0f, 0x1.e4971p-116f, 0x1.ad49cap-4f, 0x1.9f5ceep-11f, 0.0f,
     0x1.3bba14p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e19d2ep-32f, 0x1.e00f34p-30f,
     0x1.0530fcp-121f, 0.0f, 0x1.3b9a62p-114f, 0x1.77051ep-10f, 0.0f, 0x1.f40788p-51f,
     0.0f, 0.0f, 0x1.8ddd0cp-8f, 0x1.c0072p-46f, 0x1.1a51eap-104f, 0x1.e783dap-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d36dd4p-108f, 0x1.88fb04p-17f,
     0x1.eab3p-47f, 0x1.36d0fap-30f, 0x1.9495ccp-40f, 0.0f, 0x1.62005p-60f,
     0x1.caff2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a6ea6p-31f, 0.0f, 0x1.287cf8p-124f,
     0x1.e247aep-28f, 0x1.3c9898p-59f, 0x1.2854fp-80f, 0.0f, 0x1.d93ec8p-15f,
     0x1.a3df3ap-30f, 0x1.39bc98p-57f, 0x1.5256bp-49f, 0x1.201d5cp-117f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.4f82fap-71f, 0x1.79e98cp-74f, 0.0f, 0.0f, 0x1.31a332p-99f,
     0x1.1d87a4p-61f, 0x1.831c6ep-71f, 0x1.71dd02p-36f, 0x1.a9e19p-123f,
     0x1.12cb66p-7f, 0.0f, 0x1.b2eb28p-103f, 0x1.9e0bb4p-105f, 0x1.b9d2bcp-105f, 0.0f,
     0.0f, 0x1.25967cp-62f, 0x1.ea9efep-120f, 0.0f, 0x1.0b62e8p-91f, 0x1.68e932p-5f,
     0.0f, 0x1.e1a5cp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7b7a8p-60f, 0x1.5b6f14p-112f,
     0.0f, 0x1.f0f09ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a693f2p-79f, 0.0f, 0x1.efc12ep-48f, 0x1.16cb58p-76f, 0.0f, 0.0f, 0.0f,
     0x1.9ec57ep-80f, 0.0f, 0.0f, 0x1.10c7c6p-11f, 0.0f, 0x1.71d676p-58f, 0.0f, 0.0f,
     0x1.6270f8p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df5b0cp-115f, 0x1.efc76cp-120f,
     0x1.07d1cap-19f, 0.0f, 0x1.d59728p-88f, 0x1.3d84aap-119f, 0x1.1dd4c2p-78f,
     0x1.7d25c8p-8f, 0.0f, 0x1.0b849cp-95f, 0.0f, 0x1.dddd88p-27f, 0x1.9a9f04p-120f,
     0x1.87deep-126f, 0.0f, 0x1.8c4398p-31f, 0x1.c642fep-81f, 0x1.c5633ep-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb4fbcp-18f, 0x1.53f5d8p-59f, 0x1.dbab8ap-100f,
     0.0f, 0x1.b791dap-106f, 0x1p0f, 0x1.81c40ap-111f, 0.0f, 0.0f, 0x1.c537bap-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.73dd26p-110f, 0x1.2d8446p-96f, 0.0f,
     0x1.3499e8p-107f, 0.0f, 0x1.a89002p-93f, 0x1.788976p-52f, 0x1.2197cep-112f,
     0x1.cc2208p-58f, 0.0f, 0x1.c788c2p-81f, 0x1.4687c2p-68f, 0x1.b26498p-16f,
     0x1.999904p-34f, 0x1.06cf2ap-62f, 0x1.61138ap-101f, 0x1.ba189cp-51f, 0.0f,
     0x1.3b4a54p-61f, 0.0f, 0.0f, 0x1.46058ap-106f, 0x1.4fb648p-96f, 0.0f,
     0x1.15fd2cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83a59ap-19f, 0.0f, 0.0f, 0.0f,
     0x1.08165cp-112f, 0.0f, 0x1.a8d7d4p-84f, 0.0f, 0x1.312658p-107f, 0.0f,
     0x1.d7a82ap-8f, 0x1.c96b4ep-73f, 0x1.558542p-2f, 0x1.5ee47cp-123f, 0.0f, 0.0f,
     0x1.0aaabp-121f, 0x1.0cae3ap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0242p-68f, 0.0f, 0.0f, 0x1.bc28fcp-118f, 0.0f, 0.0f, 0.0f, 0x1.340d06p-8f,
     0.0f, 0x1.dd0a66p-2f, 0x1.9b7182p-93f, 0x1.896758p-125f, 0x1.5c0cf2p-113f, 0.0f,
     0.0f, 0x1.30a76p-7f, 0x1.3f9808p-30f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.ac3ac8p-40f, 0.0f, 0.0f, 0x1.93b714p-20f, 0.0f, 0x1.2b6b8cp-71f, 0.0f, 0.0f,
     0x1.21c82p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c9972p-117f, 0x1.7385a6p-80f, 0.0f,
     0.0f, 0.0f, 0x1.c344b8p-92f, 0x1.45e2e2p-77f, 0.0f, 0x1.b093b4p-116f,
     0x1.4a05ccp-27f, 0.0f, 0x1.57acdep-93f, 0.0f, 0.0f, 0x1.9dca84p-93f,
     0x1.8e56f8p-119f, 0.0f, 0.0f, 0x1.5609ecp-13f, 0x1.6ba052p-71f, 0.0f, 0.0f, 0.0f,
     0x1.d6cf84p-41f, 0x1.adaed6p-73f, 0.0f, 0.0f, 0x1.bc44bap-83f, 0.0f, 0.0f, 0.0f,
     0x1.14b306p-74f, 0x1.ff5422p-110f, 0.0f, 0x1.e81dd4p-117f, 0.0f, 0.0f,
     0x1.55af42p-74f, 0.0f, 0x1.bf39c4p-11f, 0.0f, 0x1.56aabep-85f, 0x1.b3c914p-93f,
     0x1.697772p-44f, 0x1.76b0aap-103f, 0.0f, 0x1.3882e2p-43f, 0.0f, 0.0f,
     0x1.c66c1ap-63f, 0.0f, 0.0f, 0.0f, 0x1.7e9e0ep-44f, 0x1.b4b4acp-29f, 0.0f,
     0x1.81d1p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c0a9p-17f, 0.0f,
     0x1.8845eep-11f, 0.0f, 0x1.6c6b32p-60f, 0.0f, 0x1.c64fb8p-48f, 0.0f,
     0x1.3da53ap-52f, 0.0f, 0x1.0fe176p-111f, 0x1.736cbep-11f, 0x1.08579p-66f, 0.0f,
     0.0f, 0.0f, 0x1.6f5fdcp-57f, 0.0f, 0.0f, 0x1.8968d2p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2a81d2p-88f, 0.0f, 0x1.535376p-1f, 0x1.43cc94p-12f, 0.0f,
     0x1.3e648cp-107f, 0x1.1a741p-3f, 0x1.660806p-121f, 0x1.a5e47ap-76f,
     0x1.db9f16p-106f, 0x1.a56d68p-58f, 0x1.db581p-49f, 0x1.03c5a2p-10f, 0.0f,
     0x1.d43726p-119f, 0x1.27caa4p-35f, 0x1.55f234p-21f, 0.0f, 0.0f, 0.0f,
     0x1.7fe99p-55f, 0x1.afae9p-5f, 0.0f, 0x1.f6371p-39f, 0.0f, 0x1.fe7244p-96f, 0.0f,
     0x1.6fb96ap-8f, 0.0f, 0x1.b7a58cp-19f, 0x1.ab850cp-40f, 0.0f, 0.0f, 0.0f,
     0x1.002e0ap-9f, 0.0f, 0.0f, 0x1.149c9ap-84f, 0.0f, 0x1.7f1ff6p-81f, 0.0f,
     0x1.c8b114p-71f, 0.0f, 0.0f, 0.0f, 0x1.b4ddb2p-60f, 0x1.854e14p-56f,
     0x1.cae082p-11f, 0.0f, 0x1.fa9ffcp-54f, 0.0f, 0.0f, 0x1.649b62p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7d30b4p-116f, 0.0f, 0.0f, 0.0f, 0x1.b8b492p-62f, 0x1.f7225ep-6f,
     0.0f, 0.0f, 0x1.88159ap-79f, 0x1.97c41p-58f, 0.0f, 0x1.954f8ep-33f,
     0x1.1bcf4ap-89f, 0x1.ce9946p-70f, 0x1.965078p-31f, 0x1.609808p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c5681ap-23f, 0x1.2bb4cap-54f, 0.0f, 0.0f, 0x1.fa319cp-38f, 0.0f,
     0x1.d725bep-59f, 0x1.a5ae08p-105f, 0x1.f98a6ep-64f, 0x1.e10584p-95f, 0.0f,
     0x1.2e2354p-41f, 0x1.abde2ap-19f, 0.0f, 0x1.a9b4a8p-42f, 0x1.6119d4p-31f, 0.0f,
     0x1.a473ep-78f, 0x1.c8424cp-124f, 0.0f, 0x1.5d6674p-10f, 0.0f, 0x1.e28022p-4f,
     0x1.c3b6p-67f, 0x1.8ae804p-21f, 0x1.229f64p-78f, 0x1.424614p-123f, 0.0f,
     0x1.17ab7cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.414b14p-85f, 0.0f, 0.0f, 0.0f,
     0x1.b14406p-26f, 0.0f, 0x1.7a40e8p-78f, 0x1.8da3e2p-40f, 0x1.158d44p-49f,
     0x1.aaf77ap-98f, 0.0f, 0x1.a7281p-19f, 0.0f, 0x1.d9fb56p-16f, 0x1.32244cp-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b863eap-30f, 0x1.19e7f2p-58f, 0x1.f44732p-107f, 0.0f,
     0.0f, 0x1.8b8d88p-119f, 0.0f, 0.0f, 0.0f, 0x1.41f57ap-1f, 0x1.eb1246p-47f, 0.0f,
     0.0f, 0x1.8cfaacp-102f, 0.0f, 0.0f, 0x1.975c56p-119f, 0x1.aa94b2p-120f,
     0x1.3e83eap-18f, 0x1.4f902ap-65f, 0.0f, 0x1.8aeb9ep-97f, 0x1.5e04e2p-110f,
     0x1.af9efp-114f, 0.0f, 0.0f, 0.0f, 0x1.67acb6p-51f, 0.0f, 0.0f, 0x1.6a5ca8p-24f,
     0.0f, 0x1.1178dap-51f, 0x1.b4e8fap-23f, 0x1.1f0a44p-106f, 0.0f, 0x1.f63b62p-114f,
     0x1.75399ap-121f, 0x1.7a0c8p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aac95ep-64f,
     0x1.355b04p-104f, 0x1.023778p-94f, 0.0f, 0x1.2e323ep-22f, 0.0f, 0x1.950866p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eae66p-67f, 0x1.1307b2p-93f, 0.0f, 0x1.a4910cp-85f,
     0x1.b121p-50f, 0.0f, 0.0f, 0x1.6ae644p-7f, 0x1.6bbdd2p-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.46a534p-14f, 0x1.7fe69cp-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.759c9ap-48f, 0.0f, 0x1.a8bc3ep-61f, 0x1.cbac36p-64f, 0x1.93c62p-122f,
     0x1.363566p-101f, 0x1.2d7342p-3f, 0x1.44cbc4p-99f, 0x1.1309e8p-116f,
     0x1.2bcf7cp-45f, 0.0f, 0x1.f246fap-109f, 0.0f, 0.0f, 0x1.053a9p-40f,
     0x1.baa556p-34f, 0x1.bef64p-81f, 0x1.be04dcp-65f, 0x1.2a0adp-8f, 0.0f, 0.0f,
     0x1.a69ffep-109f, 0.0f, 0.0f, 0.0f, 0x1.6248a4p-6f, 0.0f, 0.0f, 0x1.84671ap-67f,
     0x1.5fcfe6p-114f, 0x1.19cddp-88f, 0.0f, 0x1.35e326p-1f, 0.0f, 0.0f, 0.0f,
     0x1.680a9ap-13f, 0.0f, 0.0f, 0x1.383edap-66f, 0x1.6890fp-68f, 0x1.9ab0cap-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b66e4p-70f, 0.0f, 0.0f, 0.0f, 0x1.c0005cp-111f,
     0x1.177adp-72f, 0x1.c0fe8ep-81f, 0.0f, 0.0f, 0.0f, 0x1.c3bc38p-34f,
     0x1.f0d5eap-84f, 0.0f, 0x1.62e496p-102f, 0x1.ca89c6p-63f, 0.0f, 0x1.700b8ep-108f,
     0x1.34d56ap-13f, 0x1.38944cp-32f, 0x1.e5d8c2p-86f, 0x1.97429p-9f,
     0x1.dbf956p-126f, 0x1.ec5b24p-106f, 0x1.e15d4ep-85f, 0x1.88925p-19f,
     0x1.3b85cep-5f, 0x1.6e4006p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c35bc8p-123f, 0.0f,
     0.0f, 0.0f, 0x1.58b89p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62ee3p-14f,
     0x1.ced3a2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f4e74p-117f, 0x1.d075d8p-53f,
     0.0f, 0.0f, 0x1.7978e8p-16f, 0x1.bfe742p-57f, 0x1.803162p-121f, 0x1.2ba668p-27f,
     0x1.ae5d2ep-108f, 0x1.ce3664p-73f, 0x1.0ebbaap-60f, 0x1.02781ep-8f,
     0x1.19b12ep-90f, 0.0f, 0x1.6a9988p-118f, 0.0f, 0x1.9def5p-68f, 0x1.7941dep-79f,
     0x1.963214p-108f, 0.0f, 0x1.78677p-73f, 0x1.08b1f2p-27f, 0x1.c2ce5ap-74f,
     0x1.39c6d4p-102f, 0x1.580b46p-108f, 0x1.c45228p-63f, 0x1.61163ap-85f,
     0x1.9f4f52p-70f, 0.0f, 0.0f, 0x1.5b9d72p-53f, 0x1.f8f5dep-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.960c1ep-109f, 0.0f, 0.0f, 0x1.f3b2a4p-12f,
     0x1.7db904p-81f, 0.0f, 0.0f, 0x1.4c5b4ep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e3d68p-22f, 0.0f, 0x1.0dbc44p-82f, 0x1.2332b4p-103f,
     0x1.97e614p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.31c6b6p-89f, 0.0f, 0.0f, 0x1p0f, 0x1.6953eep-54f, 0x1.19ab62p-2f,
     0.0f, 0x1.937ddap-67f, 0x1.238ab8p-52f, 0x1.cf2934p-105f, 0.0f, 0x1.52d948p-46f,
     0.0f, 0x1.061caap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b80beep-84f, 0.0f,
     0x1.20a666p-13f, 0x1.12424ep-1f, 0x1.d1934p-94f, 0.0f, 0.0f, 0x1.dc7c9p-47f,
     0x1.132ceep-17f, 0.0f, 0.0f, 0x1.98ffb8p-10f, 0.0f, 0.0f, 0x1.0002dcp-22f, 0.0f,
     0x1.eaa93ap-58f, 0x1.74364ap-56f, 0.0f, 0x1.0b8cd8p-95f, 0x1.4c216ep-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eb4e8p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7384fcp-61f, 0x1.821f2cp-104f, 0x1.c472a8p-115f, 0.0f, 0x1.9a3424p-26f,
     0.0f, 0.0f, 0.0f, 0x1.1fa31p-116f, 0x1.0189p-101f, 0x1.33f8a2p-26f, 0.0f, 0.0f,
     0.0f, 0x1.eb4a4ap-72f, 0x1.d9d4d6p-77f, 0.0f, 0x1.eedfa6p-21f, 0.0f,
     0x1.dd02b8p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d119c8p-44f, 0x1.44fa8ap-54f,
     0.0f, 0.0f, 0.0f, 0x1.46652cp-62f, 0.0f, 0.0f, 0.0f, 0x1.4e66a6p-96f,
     0x1.8077b8p-104f, 0x1.ef9d54p-107f, 0.0f, 0x1.ffc00cp-99f, 0x1.d8298ap-85f, 0.0f,
     0.0f, 0.0f, 0x1.b1631ap-66f, 0x1.51f178p-58f, 0x1.07852cp-36f, 0x1.3635aap-45f,
     0.0f, 0.0f, 0x1.7e2d26p-94f, 0.0f, 0x1.30e1c4p-15f, 0x1.4046a6p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.22c1f6p-79f, 0x1.2b3ca2p-52f, 0x1.d37a16p-4f, 0.0f, 0.0f, 0.0f,
     0x1.3198a8p-94f, 0.0f, 0x1.84f00ap-102f, 0x1.f8e8d8p-106f, 0.0f, 0x1.16e63ep-33f,
     0.0f, 0x1.743dfcp-3f, 0.0f, 0.0f, 0x1.a4a5f6p-81f, 0.0f, 0.0f, 0.0f,
     0x1.c4d744p-110f, 0x1.d872a2p-54f, 0x1.3d27bap-68f, 0x1.1fe6d4p-103f,
     0x1.7920dep-94f, 0.0f, 0x1.2e0392p-5f, 0x1.96d9e6p-8f, 0x1.d46e1ep-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0104bep-13f, 0x1.dda3dap-15f, 0x1.932c8ap-62f,
     0x1.e5da72p-6f, 0.0f, 0.0f, 0x1.c0bad6p-120f, 0x1.4abb12p-97f, 0x1.191bbep-77f,
     0x1.cde65cp-19f, 0.0f, 0.0f, 0x1.c458d4p-62f, 0x1.74bd6ap-40f, 0x1.ac42bcp-27f,
     0x1.4bb44p-14f, 0x1.599978p-40f, 0x1.aebfbp-111f, 0.0f, 0.0f, 0x1.465686p-12f,
     0.0f, 0x1.3f65ccp-85f, 0x1p0f, 0.0f, 0x1.aac672p-66f, 0x1.aeec82p-75f,
     0x1.6aa1eap-36f, 0.0f, 0x1.2c9264p-37f, 0x1.6958b8p-4f, 0x1.7af59ep-72f, 0.0f,
     0.0f, 0x1.a7c178p-87f, 0x1.63b612p-43f, 0.0f, 0x1.c4398ap-30f, 0.0f, 0.0f,
     0x1.40f1cap-12f, 0x1.503ef6p-56f, 0x1.a8e19ap-12f, 0x1.8b3c12p-111f, 0.0f,
     0x1.a963c8p-62f, 0x1.56800cp-17f, 0x1.ba8ep-2f, 0.0f, 0x1.6e620ap-65f, 0.0f,
     0x1.32f95cp-76f, 0x1.a9e14cp-104f, 0x1.abb4eap-118f, 0x1.cd1382p-1f, 0.0f,
     0x1.cdfcdep-17f, 0.0f, 0.0f, 0x1.1a55e2p-51f, 0.0f, 0.0f, 0x1.6109d2p-101f, 0.0f,
     0x1.d2ae4ap-11f, 0x1.7f6b78p-62f, 0x1.18200ep-56f, 0x1.ddfc5ap-110f,
     0x1.7d5168p-44f, 0.0f, 0.0f, 0x1.c42e78p-64f, 0x1.0e522ap-62f, 0.0f,
     0x1.513628p-44f, 0x1.6c79b4p-28f, 0x1.5998e2p-36f, 0.0f, 0.0f, 0.0f,
     0x1.b03db8p-9f, 0.0f, 0x1.ee9b2ap-74f, 0.0f, 0.0f, 0x1.196d98p-32f, 0.0f,
     0x1.a6cadap-27f, 0.0f, 0x1.16c8cep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.220ef8p-101f, 0x1.7462a4p-22f, 0.0f, 0.0f, 0x1.fa77aep-5f, 0.0f,
     0x1.b35dc4p-64f, 0x1.80c28ap-46f, 0x1.db2feap-36f, 0x1.0b48e6p-8f, 0.0f,
     0x1.5d5dbcp-8f, 0x1.0ddc88p-96f, 0.0f, 0x1.79c268p-63f, 0x1.eca6e2p-66f, 0.0f,
     0x1.adcadp-123f, 0x1.33163ap-15f, 0.0f, 0x1.f8f0eap-93f, 0x1.a55e78p-18f, 0.0f,
     0x1.2d2894p-40f, 0.0f, 0.0f, 0x1.397362p-1f, 0.0f, 0x1.83c24ep-69f, 0.0f,
     0x1.726042p-30f, 0x1.f729c6p-84f, 0x1.d416c2p-117f, 0.0f, 0.0f, 0x1.2b0d72p-109f,
     0x1.969d48p-107f, 0.0f, 0.0f, 0x1.ff0d32p-53f, 0x1.b7b4fep-119f, 0x1.953f7p-55f,
     0x1.d0c7e6p-26f, 0x1.45d9ep-69f, 0x1.5125a4p-114f, 0x1.085dcap-69f,
     0x1.6b765ep-86f, 0x1.8559d6p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.514e5p-69f,
     0x1.676cc4p-104f, 0x1.04b8bap-111f, 0x1.39393cp-70f, 0.0f, 0x1.1eeb06p-48f, 0.0f,
     0x1.387372p-110f, 0x1.5cd54ep-44f, 0.0f, 0.0f, 0x1.a566cp-93f, 0x1.6b50eep-9f,
     0x1.2f999cp-19f, 0x1.e8b15p-14f, 0x1.63c7bp-25f, 0.0f, 0x1.df81d2p-113f,
     0x1.ffe612p-78f, 0x1.afd8aep-123f, 0.0f, 0x1.9962bp-62f, 0x1.d9e202p-11f, 0.0f,
     0.0f, 0x1.751bdp-116f, 0.0f, 0x1.e8c99p-81f, 0x1.880a72p-106f, 0.0f,
     0x1.b6b354p-91f, 0x1.447bc8p-89f, 0x1.0eceb4p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f684d4p-7f, 0x1.36386p-60f, 0x1.166976p-33f, 0x1.da4112p-31f,
     0x1.4535e8p-107f, 0.0f, 0.0f, 0x1.b5dedep-59f, 0x1.c1d8d4p-87f, 0.0f,
     0x1.ac9c4ap-65f, 0x1.990db6p-72f, 0.0f, 0x1.e208a2p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.763e58p-96f, 0x1.dd86acp-40f, 0x1.8af8e2p-13f, 0x1.1c92f8p-83f,
     0x1.b5df9ep-123f
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
            tmp2 = Sleef_finz_fdimf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_fdimf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fdimf1_purecfma bench acc %a\n", global_bench_acc);
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
