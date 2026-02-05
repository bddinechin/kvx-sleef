/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospif1_u05purecfma.c --function \
 *     Sleef_cospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.eaba96p-5f, 0x1.5e1d78p-53f, 0.0f, 0x1.4706bap-82f, 0.0f, 0x1.551e06p-55f,
     0x1.b1aa3cp-100f, 0.0f, 0x1.70b71p-59f, 0x1.bfb0a6p-76f, 0x1.56c4f4p-118f, 0.0f,
     0x1.32cbaep-56f, 0.0f, 0.0f, 0.0f, 0x1.254c2p-34f, 0x1.2ab2aap-76f, 0.0f,
     0x1.35a946p-8f, 0x1.013984p-75f, 0x1.b613c4p-82f, 0x1.ebe50ap-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7c8686p-18f, 0x1.da13cep-117f, 0.0f, 0.0f, 0x1.405d6ap-57f,
     0x1.2e30ep-25f, 0x1.a0fea6p-61f, 0.0f, 0.0f, 0x1.508baep-84f, 0.0f,
     0x1.4ddceap-70f, 0.0f, 0x1.14f636p-53f, 0.0f, 0.0f, 0x1.426db6p-90f, 0.0f,
     0x1.532e52p-72f, 0x1.b40804p-105f, 0.0f, 0x1.d79d6p-104f, 0.0f, 0x1.195bdp-59f,
     0x1.019f2ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85f956p-124f, 0x1.0cdad6p-20f, 0.0f, 0x1.5f56d4p-66f, 0x1.d113e2p-123f,
     0x1.2a5526p-11f, 0.0f, 0.0f, 0x1.949abp-114f, 0x1.6f7e46p-58f, 0x1.caf72p-74f,
     0.0f, 0.0f, 0x1.68b7dcp-44f, 0.0f, 0x1.f06ad8p-28f, 0x1.20a83ep-29f,
     0x1.99f184p-76f, 0.0f, 0.0f, 0.0f, 0x1.0c0cecp-122f, 0x1.2c952cp-92f, 0.0f, 0.0f,
     0.0f, 0x1.54f146p-12f, 0x1.c1c44ep-22f, 0x1.5cb20ap-23f, 0.0f, 0.0f,
     0x1.cb4c34p-27f, 0x1.1c04e6p-84f, 0x1.971b5ep-36f, 0x1.4402bep-80f, 0.0f,
     0x1.ad57b8p-62f, 0.0f, 0.0f, 0x1.fd23cp-19f, 0.0f, 0x1.3835cep-14f,
     0x1.9ab5a4p-51f, 0x1.4d7e6p-96f, 0x1p0f, 0.0f, 0.0f, 0x1.fcaa08p-33f,
     0x1.09e0f2p-98f, 0x1.cf0cd2p-12f, 0x1.8e246ap-98f, 0x1.40160cp-112f, 0.0f,
     0x1.57050ep-76f, 0.0f, 0x1.bd4102p-8f, 0x1.bb0fd2p-39f, 0.0f, 0.0f,
     0x1.92dceep-69f, 0x1.068d16p-27f, 0x1.57132cp-51f, 0x1.d9102ep-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ee35ep-57f, 0x1.09ee2cp-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05115cp-110f, 0.0f, 0.0f, 0.0f,
     0x1.eccc8ap-54f, 0x1.de411cp-51f, 0x1.918d64p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf485cp-54f, 0.0f, 0.0f, 0x1.b7a456p-38f, 0x1.f1b502p-11f, 0x1.13e9c4p-7f,
     0x1.0f461cp-33f, 0x1.ddd0c6p-117f, 0.0f, 0.0f, 0x1.13dc32p-83f, 0.0f,
     0x1.2f5cf2p-96f, 0x1.6f7806p-100f, 0x1.58bf0ep-14f, 0x1.e3912ep-8f, 0.0f,
     0x1.30ddaap-118f, 0.0f, 0x1.2cfe9ap-9f, 0x1.fce66ep-7f, 0x1.26ed66p-77f,
     0x1.b1275ep-1f, 0x1.d8cb1p-47f, 0.0f, 0.0f, 0x1.beaf06p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.391f28p-35f, 0.0f, 0x1.a17d76p-12f, 0x1.5fdb0ep-55f, 0.0f, 0.0f,
     0x1.be5154p-2f, 0.0f, 0.0f, 0x1.2025a8p-91f, 0x1.085ea4p-3f, 0.0f,
     0x1.f9c97p-81f, 0x1.ca0eb4p-44f, 0x1.c5c93p-16f, 0.0f, 0.0f, 0x1.0a2a6cp-4f,
     0x1.bd9f22p-110f, 0x1.cd4672p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc1dap-24f, 0.0f,
     0x1.d3ddfep-20f, 0x1.3db488p-10f, 0x1.13d5bp-97f, 0x1.4867b6p-89f, 0.0f,
     0x1.daba58p-122f, 0x1.0372f2p-44f, 0.0f, 0.0f, 0x1.66aae2p-8f, 0x1.9f5e46p-33f,
     0.0f, 0.0f, 0.0f, 0x1.721672p-71f, 0.0f, 0x1.c89c8p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6c335ap-22f, 0.0f, 0x1.59627ep-21f, 0.0f, 0.0f, 0.0f,
     0x1.dc81fap-1f, 0.0f, 0x1.9ecc72p-64f, 0.0f, 0.0f, 0.0f, 0x1.2cedd4p-112f, 0.0f,
     0x1.9c8e6p-113f, 0.0f, 0x1.bafaf8p-44f, 0.0f, 0.0f, 0.0f, 0x1.b53132p-80f,
     0x1.981684p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c0d5ap-70f, 0x1.20a2aap-6f,
     0x1.e88148p-110f, 0x1.b018aep-124f, 0x1.508648p-17f, 0.0f, 0x1.d21282p-42f,
     0x1.857dap-103f, 0.0f, 0x1.4b96cp-26f, 0.0f, 0x1.45b696p-33f, 0x1.a1ad18p-59f,
     0.0f, 0x1.8d7a6ap-56f, 0x1.59f66ep-123f, 0x1.980f7cp-107f, 0x1.d69024p-62f,
     0x1.95be0ap-4f, 0x1.2f95ap-107f, 0.0f, 0.0f, 0x1.6f1bcp-89f, 0x1.51377cp-70f,
     0.0f, 0x1.2f8a0ap-7f, 0.0f, 0x1.a1b5e8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c8da2p-42f, 0.0f, 0.0f, 0.0f, 0x1.dbcd8p-86f, 0.0f, 0x1.8e10f6p-61f,
     0x1.eec274p-90f, 0.0f, 0.0f, 0.0f, 0x1.c8b91p-38f, 0x1.cddc08p-109f, 0.0f,
     0x1p0f, 0x1.256f12p-42f, 0x1.1e8c52p-16f, 0x1.ded234p-106f, 0x1.83108ap-75f,
     0.0f, 0.0f, 0x1.941708p-106f, 0.0f, 0.0f, 0x1.afdeaap-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9441eep-100f, 0.0f, 0x1.cf7a3ap-90f, 0x1.336192p-51f,
     0x1.32727ap-80f, 0x1p0f, 0x1.e52e2ep-38f, 0x1.73401ep-18f, 0x1.e5f89p-10f,
     0x1.2be3b6p-8f, 0.0f, 0x1.b1e26ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18df36p-73f,
     0.0f, 0.0f, 0x1.589494p-73f, 0x1.846c88p-15f, 0x1.44e4fp-101f, 0x1.47bf6cp-16f,
     0x1.755458p-31f, 0x1.259718p-96f, 0.0f, 0x1.1800a4p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.756f8ep-25f, 0x1.5b0282p-104f, 0x1.09a01cp-95f, 0x1.29b78ep-122f, 0.0f,
     0x1.835faep-21f, 0x1.367f04p-84f, 0x1.f73baap-11f, 0x1.651198p-24f,
     0x1.166684p-9f, 0.0f, 0.0f, 0x1.d2662ep-99f, 0.0f, 0.0f, 0.0f, 0x1.7a66bp-86f,
     0.0f, 0.0f, 0x1.5f7c8ep-85f, 0x1.55fd3p-73f, 0.0f, 0x1.80cf3ep-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dc595cp-14f, 0x1.e5e89ap-21f, 0.0f, 0.0f, 0x1.d712bp-54f, 0.0f,
     0.0f, 0x1.322566p-88f, 0.0f, 0x1.bfeae8p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15c1c2p-50f, 0x1.73ce36p-6f, 0.0f, 0x1.5f1042p-119f, 0x1.5af88ep-26f,
     0x1.81be6p-123f, 0x1.a0e17cp-12f, 0.0f, 0x1.c4b442p-108f, 0.0f, 0x1.e0ddb4p-115f,
     0x1.69de78p-31f, 0x1.64e2fp-27f, 0.0f, 0.0f, 0x1.c775ccp-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.08deeep-102f, 0x1.1e3b42p-107f, 0x1.affa6cp-87f, 0x1.215d8p-6f,
     0x1.31b24ap-87f, 0.0f, 0x1.5e048cp-94f, 0x1.d3dfp-10f, 0.0f, 0x1.7e9518p-65f,
     0.0f, 0.0f, 0.0f, 0x1.1ad2f4p-53f, 0x1.90cfap-111f, 0.0f, 0x1.c5a084p-83f,
     0x1.834146p-45f, 0x1.86bc08p-125f, 0.0f, 0x1.da3ae2p-14f, 0x1.ba3d0ep-68f,
     0x1.114f8p-68f, 0x1.541b52p-38f, 0x1.c3b118p-113f, 0.0f, 0x1.c7298p-61f, 0.0f,
     0.0f, 0.0f, 0x1.878bd2p-3f, 0x1.88a70ep-64f, 0.0f, 0x1.7ea75p-43f,
     0x1.bb03fcp-45f, 0.0f, 0x1.b2d3aep-47f, 0x1.593c1ap-57f, 0x1.a4cd06p-46f, 0.0f,
     0.0f, 0.0f, 0x1.25fbe4p-53f, 0.0f, 0.0f, 0x1.f2897p-5f, 0.0f, 0x1.536b36p-38f,
     0x1.9ab1bap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1c9fap-80f, 0x1.1ef92cp-17f, 0.0f,
     0.0f, 0.0f, 0x1.7d96bp-17f, 0.0f, 0x1.cc66bp-116f, 0x1.af2a7ep-2f,
     0x1.775434p-65f, 0.0f, 0.0f, 0x1.248212p-125f, 0x1.998dep-93f, 0.0f, 0.0f,
     0x1.e9d46cp-11f, 0.0f, 0x1.bc1d58p-122f, 0.0f, 0x1.79f808p-67f, 0x1.e01562p-73f,
     0x1.7812bcp-98f, 0.0f, 0.0f, 0.0f, 0x1.9d1a5cp-103f, 0x1.d6551p-121f, 0.0f,
     0x1.b24bdcp-113f, 0.0f, 0x1.d39b0ep-78f, 0.0f, 0.0f, 0x1.5bb6e4p-60f, 0.0f,
     0x1.c11e5p-74f, 0.0f, 0x1.b2889ap-42f, 0x1.2f666ep-46f, 0x1.ebca7ep-100f, 0.0f,
     0x1.bdd6b6p-35f, 0.0f, 0x1.efc434p-94f, 0.0f, 0.0f, 0x1.9cb276p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.325e22p-16f, 0x1.214b5p-68f, 0x1.fcb2bap-60f, 0.0f,
     0x1.e34384p-20f, 0.0f, 0x1.e19e24p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b49eb8p-26f, 0.0f, 0.0f, 0x1.f63278p-66f, 0x1.3f0f7ap-114f, 0x1.0315ecp-26f,
     0x1.c097e8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5fa58p-10f, 0.0f, 0.0f, 0.0f,
     0x1.cf9a36p-93f, 0x1.090b0cp-104f, 0.0f, 0.0f, 0x1.fb18dap-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fad7fap-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac151ep-27f, 0x1.9ebf7cp-79f, 0.0f, 0.0f, 0.0f, 0x1.b70892p-9f, 0.0f, 0.0f,
     0.0f, 0x1.3922p-50f, 0x1.5e71a4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09a4e6p-96f, 0.0f, 0x1.89b7e4p-116f, 0x1.b2fc16p-99f, 0x1.5fd5b4p-49f, 0.0f,
     0.0f, 0x1.fc7342p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38682ep-120f, 0.0f, 0.0f,
     0x1.2016b2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d355p-89f, 0.0f, 0.0f,
     0x1.8ad12cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44fbe8p-111f, 0x1.ed2a56p-19f,
     0x1.c72be8p-94f, 0.0f, 0.0f, 0.0f, 0x1.b91p-95f, 0x1.d9501cp-38f, 0.0f,
     0x1.5588d8p-44f, 0.0f, 0x1.474ea6p-51f, 0x1.e3943cp-69f, 0x1.42efa2p-39f,
     0x1.5ec1eap-113f, 0.0f, 0.0f, 0.0f, 0x1.d77b18p-37f, 0.0f, 0.0f, 0.0f,
     0x1.a9e25cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7426a6p-66f,
     0x1.4b1186p-6f, 0x1.a57f86p-102f, 0.0f, 0.0f, 0x1.2c16a8p-65f, 0x1.dda7dp-75f,
     0.0f, 0x1.80650cp-126f, 0x1.2b718ap-51f, 0.0f, 0.0f, 0.0f, 0x1.e0eacap-56f,
     0x1.0ed36ap-75f, 0x1.bda362p-69f, 0x1.e9511ep-14f, 0x1.3527ecp-31f,
     0x1.e6570ep-74f, 0.0f, 0x1.acefc8p-105f, 0x1.49296p-92f, 0x1.0d6d88p-24f, 0.0f,
     0x1.c17b26p-87f, 0x1.b3308p-10f, 0.0f, 0.0f, 0x1.a6ffc2p-63f, 0x1.af35aep-68f,
     0.0f, 0x1.9b28f4p-67f, 0x1.efc20ep-94f, 0.0f, 0.0f, 0x1.bda8d2p-126f,
     0x1.727af6p-97f, 0.0f, 0x1.e1f70ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbd228p-119f,
     0x1.5e1b2p-114f, 0.0f, 0x1.b795b2p-119f, 0x1.95be38p-44f, 0.0f, 0x1.58b638p-117f,
     0.0f, 0x1.014026p-49f, 0.0f, 0.0f, 0.0f, 0x1.e6e6e6p-101f, 0.0f, 0x1.8d5c28p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce57b4p-69f, 0.0f, 0x1.5dd71p-41f, 0x1.b086ap-46f,
     0.0f, 0x1.23685ap-62f, 0.0f, 0x1.ff551ep-77f, 0x1.7028a2p-39f, 0x1.2736cp-91f,
     0.0f, 0.0f, 0.0f, 0x1.d2ca36p-5f, 0.0f, 0.0f, 0x1.45dbdp-103f, 0.0f,
     0x1.d416fp-4f, 0x1.6f9b56p-38f, 0.0f, 0x1.a4892ap-41f, 0.0f, 0x1.5257e8p-19f,
     0x1.d6f7bep-61f, 0x1.e2e402p-55f, 0x1.60335p-101f, 0.0f, 0.0f, 0.0f,
     0x1.5e2af2p-17f, 0.0f, 0x1.0ac164p-21f, 0x1.a2980ap-41f, 0.0f, 0.0f,
     0x1.2ee32ap-101f, 0.0f, 0.0f, 0.0f, 0x1.c3482ap-9f, 0.0f, 0x1.56855cp-4f, 0.0f,
     0x1.2693ecp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cf906p-33f, 0.0f, 0.0f,
     0x1.82fc2ep-22f, 0.0f, 0.0f, 0x1.1a26bcp-58f, 0.0f, 0.0f, 0x1.43a344p-70f, 0.0f,
     0.0f, 0x1.a14e4cp-107f, 0x1.47c54ap-25f, 0x1.ddc67cp-95f, 0.0f, 0x1.3146ecp-9f,
     0x1.516462p-96f, 0.0f, 0x1.5decb2p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f3d12p-91f,
     0.0f, 0x1.21219cp-88f, 0x1.6dba1ap-63f, 0x1.fd5cd4p-56f, 0x1.71147p-7f, 0.0f,
     0x1.e2ab9ep-8f, 0x1.141d2cp-123f, 0x1p0f, 0x1.46a206p-116f, 0x1.6284a6p-118f,
     0.0f, 0.0f, 0.0f, 0x1.c0d0bap-54f, 0.0f, 0x1.89b32ap-58f, 0.0f, 0x1.74926ap-123f,
     0.0f, 0x1.e4f7d6p-55f, 0x1.d2a62cp-92f, 0x1.e2aa6cp-22f, 0.0f, 0x1.511ffap-121f,
     0x1.5ebc1cp-63f, 0x1.caa87ap-48f, 0x1.47360cp-89f, 0.0f, 0x1.bc6048p-79f,
     0x1.4e0abep-94f, 0.0f, 0.0f, 0x1.8d0ca8p-88f, 0x1.74a1dp-64f, 0x1.1d2ep-85f,
     0x1.0930a2p-77f, 0.0f, 0x1.dca162p-91f, 0.0f, 0x1.f2f16ap-73f, 0.0f, 0.0f, 0.0f,
     0x1.bdbdfep-83f, 0.0f, 0x1.7f97eap-81f, 0x1.bc15ap-117f, 0.0f, 0.0f,
     0x1.aba9e8p-36f, 0.0f, 0.0f, 0x1.e16724p-31f, 0.0f, 0x1.1f7b76p-69f, 0.0f,
     0x1.78ddp-78f, 0x1.1af8aep-108f, 0x1.32376cp-42f, 0.0f, 0.0f, 0x1.3fdfeap-38f,
     0x1.a25cb8p-16f, 0.0f, 0x1.9ba986p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5122d6p-71f, 0x1.2328f2p-118f, 0x1.86f716p-119f, 0x1.b725a4p-2f,
     0.0f, 0.0f, 0x1.ca907cp-67f, 0.0f, 0.0f, 0x1.16ed82p-7f, 0.0f, 0.0f,
     0x1.d05fdcp-89f, 0x1.697336p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd8e2ep-74f,
     0x1.edbceep-90f, 0x1.eaf738p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af86fp-38f, 0x1.d2fef4p-120f, 0.0f, 0x1.a7b4c2p-73f, 0.0f, 0.0f,
     0x1.c653f6p-4f, 0x1.cac79ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.934f3ep-68f, 0.0f, 0x1.1dd10ap-95f, 0x1.e107f4p-42f, 0.0f, 0.0f, 0.0f,
     0x1.234c68p-112f, 0x1.6da184p-71f, 0x1.da90f6p-82f, 0x1.24e446p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.66d1f6p-50f, 0x1.a34f8cp-76f, 0.0f, 0x1.67f2e8p-51f, 0.0f,
     0.0f, 0.0f, 0x1.dd898p-83f, 0.0f, 0.0f, 0x1.0f8822p-71f, 0.0f, 0.0f,
     0x1.b9b898p-124f, 0x1.b0144cp-82f, 0x1p0f, 0x1.b9a726p-115f, 0x1.de261ap-112f,
     0x1.ffd9d6p-109f, 0.0f, 0x1.722726p-118f, 0x1.3266b8p-101f, 0.0f, 0.0f,
     0x1.06d1f4p-110f, 0.0f, 0x1.4773dep-45f, 0.0f, 0x1.abd73ep-30f, 0x1.5c184ap-11f,
     0x1.d71a34p-54f, 0.0f, 0.0f, 0.0f, 0x1.7ecd34p-103f, 0.0f, 0x1.5ab3bcp-118f,
     0.0f, 0x1.56abfcp-78f, 0.0f, 0x1.8beacep-52f, 0x1.2729f8p-55f, 0x1.8cc1e8p-72f,
     0x1.1c30f8p-59f, 0.0f, 0x1.fa605cp-112f, 0x1.9fdd92p-30f, 0x1.fe6934p-126f,
     0x1.825f56p-35f, 0x1.cbb97ap-32f, 0.0f, 0x1.d35c1ap-19f, 0.0f, 0.0f,
     0x1.06e3a2p-53f, 0.0f, 0x1.7b4a3ap-47f, 0.0f, 0x1.cb8ffcp-113f, 0x1.1c5262p-3f,
     0.0f, 0x1.6ed98ap-46f, 0x1.01ccd6p-56f, 0x1.b20f88p-10f, 0x1.acaaa4p-2f,
     0x1.2e546cp-106f, 0x1.06fe2p-29f, 0.0f, 0x1.f6c97cp-13f, 0.0f, 0.0f,
     0x1.49ad22p-84f, 0x1.4313d4p-20f, 0x1.0c4e16p-56f, 0x1.2ba168p-109f,
     0x1.92ab5cp-5f, 0x1.3c45d2p-118f, 0.0f, 0.0f, 0x1.6a242ep-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27c0c6p-31f, 0x1.a1f842p-44f, 0x1.8d20a2p-4f, 0x1.31d85ep-14f
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
            tmp1 = Sleef_cospif1_u05purecfma(tmp0);
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
    printf("Sleef_cospif1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cospif1_u05purecfma bench acc %a\n", global_bench_acc);
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
