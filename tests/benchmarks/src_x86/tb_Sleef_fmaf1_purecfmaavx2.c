/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmaf1_purecfma.c --function Sleef_fmaf1_purecfma \
 *     --arity 3 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32,binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.508264p-102f, 0x1.12d384p-116f, 0x1.ff4e46p-78f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aab7aap-59f, 0x1.389bc8p-66f, 0.0f, 0x1.fa0274p-126f,
     0x1.b222dap-94f, 0.0f, 0x1.0b8fdcp-56f, 0.0f, 0.0f, 0x1.e54876p-59f,
     0x1.5a8258p-17f, 0x1.2d7f1ap-102f, 0x1.90d572p-62f, 0.0f, 0x1.0970cep-1f, 0.0f,
     0x1.4d6eb4p-54f, 0x1.bbec6ep-14f, 0x1.d0b73cp-101f, 0.0f, 0.0f, 0x1.710a62p-97f,
     0.0f, 0.0f, 0x1.bcf66cp-18f, 0x1.cb8358p-36f, 0x1.edef7p-109f, 0.0f, 0.0f, 0.0f,
     0x1.ea0b6cp-21f, 0x1.905a3ep-104f, 0x1.30bf4cp-35f, 0x1.882eb2p-55f,
     0x1.37c7f2p-61f, 0.0f, 0x1.382c14p-64f, 0.0f, 0.0f, 0x1.e06de4p-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc0a62p-61f, 0x1.73a18ep-37f, 0.0f, 0.0f, 0.0f,
     0x1.33caeap-109f, 0x1.90e27p-36f, 0x1.87fd54p-68f, 0x1.6b920ap-74f,
     0x1.a2b14p-126f, 0.0f, 0x1.69b208p-20f, 0.0f, 0.0f, 0.0f, 0x1.03b7ep-27f, 0.0f,
     0x1.fce1bap-119f, 0.0f, 0x1.99f9fp-71f, 0x1.659eb2p-103f, 0x1.d8855cp-123f,
     0x1.14e2a4p-66f, 0x1.6b94aap-83f, 0x1.96805ep-8f, 0x1.ee0a02p-23f, 0.0f, 0.0f,
     0x1.775366p-114f, 0x1.c6693ep-62f, 0.0f, 0.0f, 0x1.fed2d4p-109f, 0x1.004a8ep-51f,
     0.0f, 0.0f, 0x1.5a6feep-104f, 0x1.2a0998p-58f, 0x1.c497aep-28f, 0x1.08354ap-123f,
     0x1.ad538cp-91f, 0.0f, 0x1.5c5c5p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20f7c2p-10f, 0x1.26e986p-24f, 0x1.c32ee8p-69f, 0.0f, 0x1.342dbp-24f, 0.0f,
     0.0f, 0x1.32d5acp-24f, 0x1.a4e684p-15f, 0.0f, 0x1.99e714p-56f, 0x1.2f4974p-117f,
     0.0f, 0.0f, 0x1.33632ap-90f, 0.0f, 0x1.f9942cp-18f, 0x1.eccb58p-13f,
     0x1.deb82ep-18f, 0x1.ad018cp-93f, 0.0f, 0.0f, 0.0f, 0x1.6901f2p-31f, 0.0f,
     0x1.b5fb34p-111f, 0x1.8d1d26p-63f, 0x1.594292p-51f, 0.0f, 0x1.f14b1ap-93f,
     0x1.b03ef8p-94f, 0.0f, 0x1.ecc388p-104f, 0x1.1a6fe6p-14f, 0.0f, 0x1.ccd772p-70f,
     0x1.d4715ap-90f, 0x1.20c14ap-83f, 0.0f, 0x1.68f512p-121f, 0.0f, 0.0f, 0.0f,
     0x1.be4d86p-62f, 0.0f, 0.0f, 0x1.1843bap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8c573p-13f, 0.0f, 0.0f, 0x1.9715eep-101f, 0.0f, 0.0f, 0x1.abb422p-29f,
     0x1.ae7e82p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf3f66p-38f, 0.0f, 0.0f,
     0x1.085868p-92f, 0x1.9cadf4p-90f, 0x1.b12a9cp-48f, 0x1.8d489cp-76f, 0.0f, 0.0f,
     0x1.a25994p-24f, 0x1.1b8112p-95f, 0.0f, 0x1.1b1f86p-47f, 0.0f, 0.0f,
     0x1.fef56ep-4f, 0x1.67df44p-89f, 0x1.a86f2cp-76f, 0.0f, 0.0f, 0.0f,
     0x1.27b492p-68f, 0x1.499026p-95f, 0.0f, 0.0f, 0x1.3c3322p-89f, 0.0f,
     0x1.351ce6p-82f, 0x1.2fd848p-13f, 0.0f, 0x1.22515ep-1f, 0.0f, 0x1.3ae1bep-33f,
     0.0f, 0x1.23025p-44f, 0.0f, 0x1.403ddp-44f, 0.0f, 0.0f, 0x1.c4ffdp-31f,
     0x1.2ddef6p-10f, 0.0f, 0.0f, 0.0f, 0x1.098b3ep-10f, 0.0f, 0.0f, 0.0f,
     0x1.462f9cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6ccb8p-124f, 0.0f,
     0.0f, 0x1.e1a868p-76f, 0.0f, 0x1.c21b16p-109f, 0.0f, 0x1.725dc4p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.78fd66p-65f, 0.0f, 0x1.7d16acp-36f, 0x1.248688p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1ecc2ep-14f, 0x1.a8736ap-3f, 0.0f, 0x1.d24416p-96f,
     0x1.064936p-35f, 0x1.66f21ep-41f, 0x1.f8deb8p-38f, 0x1.2b096ep-57f, 0.0f,
     0x1.f5bc22p-52f, 0x1.c15992p-84f, 0x1.00a86cp-17f, 0x1.42dccep-55f,
     0x1.4966bp-124f, 0.0f, 0x1.011a0cp-25f, 0.0f, 0.0f, 0x1.85fb7ep-34f, 0.0f,
     0x1.2db4eap-114f, 0x1.04dc22p-124f, 0x1.d4d664p-29f, 0.0f, 0.0f, 0x1.896726p-48f,
     0.0f, 0x1.b29124p-117f, 0x1.3d272p-17f, 0.0f, 0.0f, 0.0f, 0x1.f51014p-106f,
     0x1.37406p-65f, 0.0f, 0x1.d9449ap-4f, 0.0f, 0.0f, 0.0f, 0x1.823b44p-86f,
     0x1.ba41a4p-60f, 0.0f, 0.0f, 0x1.ba23b8p-29f, 0x1.739acap-39f, 0x1.609c16p-109f,
     0x1.54316ap-96f, 0x1.e18b0ap-27f, 0.0f, 0.0f, 0.0f, 0x1.31884cp-53f, 0.0f, 0.0f,
     0x1.dd11c4p-68f, 0x1.542f5p-62f, 0.0f, 0.0f, 0.0f, 0x1.71f36cp-73f, 0.0f, 0.0f,
     0x1.ed4484p-88f, 0.0f, 0.0f, 0x1.9f8722p-91f, 0.0f, 0.0f, 0x1.a0d222p-12f,
     0x1.17f0c4p-73f, 0x1.42a13cp-105f, 0x1.1a3204p-66f, 0x1.2e36bap-35f,
     0x1.0f8086p-53f, 0x1.f4a52ep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9dfce2p-125f, 0x1.30d828p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ff338p-116f, 0.0f, 0x1.1ac5c6p-99f, 0x1.066754p-88f, 0.0f, 0x1.140842p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8413b6p-25f, 0.0f, 0x1.ad6846p-61f, 0.0f, 0.0f,
     0x1.710812p-47f, 0.0f, 0x1.8701cp-107f, 0x1.724652p-48f, 0.0f, 0x1.2b7a9ap-62f,
     0.0f, 0x1.748c1p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e2c48p-86f, 0.0f,
     0x1.83cbb8p-121f, 0.0f, 0.0f, 0x1.b3099ap-73f, 0x1.66f816p-112f, 0.0f,
     0x1.ffb9bp-74f, 0x1.d1d638p-85f, 0x1.77835ap-18f, 0x1.347bf4p-37f,
     0x1.d22dbp-73f, 0x1.d30bep-25f, 0.0f, 0.0f, 0.0f, 0x1.4f9afap-73f,
     0x1.58a38ep-49f, 0x1.db45dep-44f, 0.0f, 0x1.ed63e4p-68f, 0x1.aeb0e2p-52f, 0.0f,
     0.0f, 0.0f, 0x1.660e96p-53f, 0x1.b1c5bcp-119f, 0x1.832a64p-124f, 0x1.92366ap-84f,
     0x1.01d69cp-42f, 0.0f, 0.0f, 0x1.db8374p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8905cp-94f, 0x1.d9d732p-42f, 0x1.bcd8a4p-97f, 0.0f, 0.0f, 0x1.7ef902p-82f,
     0.0f, 0.0f, 0.0f, 0x1.c99e6ap-114f, 0.0f, 0.0f, 0x1.7c631ap-117f,
     0x1.7da398p-16f, 0x1.8b990ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.551f8ap-94f,
     0.0f, 0.0f, 0x1.7fd2ecp-113f, 0x1.ee6924p-8f, 0x1.d1ad4cp-64f, 0.0f,
     0x1.095b66p-120f, 0x1.260db8p-117f, 0x1.cdcde8p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8110dap-77f, 0x1.10090ap-83f, 0x1.277ba6p-97f, 0x1.d5bf5p-99f, 0.0f,
     0x1.43859cp-118f, 0.0f, 0.0f, 0x1.c80ba8p-102f, 0x1.d92214p-58f, 0.0f, 0.0f,
     0x1.c548c6p-28f, 0x1.2aa60ep-60f, 0.0f, 0.0f, 0.0f, 0x1.0338bap-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6bf678p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73fb3ep-68f, 0.0f,
     0x1.c24748p-23f, 0x1.8c062ep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f0a42p-26f, 0.0f,
     0x1.8ed9bp-107f, 0x1.e2e362p-53f, 0.0f, 0.0f, 0.0f, 0x1.8bfbd6p-14f,
     0x1.f3b18ap-116f, 0x1.ed3cdp-75f, 0x1.fc94fep-100f, 0.0f, 0x1.456bf6p-120f,
     0x1.304772p-19f, 0.0f, 0x1.6a73fp-112f, 0x1.b28e24p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c02b26p-52f, 0x1.16dee6p-122f, 0.0f, 0.0f, 0x1.47e70ap-30f, 0.0f,
     0x1.ec9aeap-34f, 0x1.92de34p-1f, 0x1.2bd04p-12f, 0x1.067b62p-24f,
     0x1.90ba8cp-16f, 0x1.b2cae2p-64f, 0.0f, 0x1.81efccp-48f, 0.0f, 0x1.b4de86p-121f,
     0.0f, 0x1.98eb1p-36f, 0x1.fe3906p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8cf03p-12f, 0.0f, 0x1.e8d122p-123f, 0x1.a220b8p-89f, 0.0f, 0x1.2c9dc4p-44f,
     0x1.31506cp-99f, 0.0f, 0.0f, 0x1.62c234p-4f, 0x1.27df6ep-73f, 0.0f, 0.0f, 0.0f,
     0x1.6c067ep-54f, 0.0f, 0.0f, 0.0f, 0x1.07b5f8p-24f, 0.0f, 0.0f, 0.0f,
     0x1.2632bcp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c669a6p-54f, 0.0f, 0.0f, 0.0f,
     0x1.cf946ap-68f, 0x1.9f67bap-41f, 0.0f, 0x1.86a4f2p-116f, 0.0f, 0.0f, 0.0f,
     0x1.33ad2p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f0548p-44f, 0x1.433f74p-36f,
     0x1.368306p-125f, 0.0f, 0x1.62e094p-82f, 0x1.ffd8dap-90f, 0.0f, 0x1.9bcd14p-19f,
     0x1.7d96d6p-54f, 0.0f, 0x1.bd7888p-32f, 0x1.0366c2p-61f, 0x1.63c982p-107f, 0.0f,
     0x1.56fd9ep-112f, 0x1.e189dep-67f, 0x1.d5d6a6p-74f, 0x1.b7432cp-112f,
     0x1.0891cp-14f, 0.0f, 0x1p0f, 0.0f, 0x1.09e7c2p-11f, 0x1.961f7cp-79f, 0.0f, 0.0f,
     0.0f, 0x1.d540fcp-36f, 0.0f, 0x1.42a974p-86f, 0x1.7cb42p-67f, 0x1.dbf9f4p-54f,
     0x1.d5f2eep-88f, 0x1.6efc8ap-87f, 0x1.803a9ap-64f, 0.0f, 0x1.15a832p-28f,
     0x1.7f8066p-17f, 0x1.ffd9bap-113f, 0x1.7ec06ap-26f, 0.0f, 0.0f, 0.0f,
     0x1.70b16ap-20f, 0x1.7a3a74p-125f, 0.0f, 0x1.5e9adep-123f, 0.0f, 0x1.840a58p-74f,
     0x1.4401f8p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.437b2ap-60f, 0x1.7821fap-82f,
     0.0f, 0.0f, 0x1.91d164p-54f, 0x1.3cbf2p-51f, 0x1.7ed054p-29f, 0.0f, 0.0f, 0.0f,
     0x1.d6678p-13f, 0x1.8b4a84p-90f, 0x1.1dcf4p-64f, 0x1.c196acp-13f, 0.0f,
     0x1.bf83bep-6f, 0.0f, 0x1.06639ep-108f, 0.0f, 0x1.7108cep-120f, 0x1.2cb1f8p-74f,
     0.0f, 0x1.75d7f2p-3f, 0x1.a1e174p-14f, 0x1.0a598cp-21f, 0x1.024114p-66f,
     0x1.58377p-29f, 0x1.4f2148p-54f, 0x1.f6fecep-44f, 0x1.b059d6p-99f, 0.0f,
     0x1.8465ep-111f, 0x1.571834p-14f, 0.0f, 0.0f, 0x1.ecbceep-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5d028ep-44f, 0x1.8db794p-78f, 0.0f, 0x1.28b608p-81f,
     0x1.2ba53p-68f, 0.0f, 0x1.bf347ap-78f, 0x1.42ea16p-18f, 0.0f, 0x1.22e434p-124f,
     0x1.e91d8ep-56f, 0.0f, 0x1.bce678p-90f, 0x1.31de94p-87f, 0x1.8cfap-15f,
     0x1.47d67p-34f, 0.0f, 0x1.2d10e6p-76f, 0x1.04cad8p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4733a4p-57f, 0.0f, 0.0f, 0x1.283e72p-10f, 0x1.61c4e4p-2f, 0x1.8d49eap-20f,
     0.0f, 0x1.d0dfap-94f, 0.0f, 0x1.c86716p-29f, 0x1.ddf668p-23f, 0x1.ea7e8ap-72f,
     0.0f, 0.0f, 0x1.212edep-51f, 0x1.7279c6p-65f, 0x1.8010fp-112f, 0x1.64d30ep-116f,
     0.0f, 0.0f, 0x1.2dda56p-58f, 0x1.e39de8p-3f, 0x1.9369f6p-109f, 0.0f, 0.0f, 0.0f,
     0x1.f01444p-12f, 0.0f, 0x1.7da462p-44f, 0x1p0f, 0.0f, 0.0f, 0x1.8e55bcp-9f,
     0x1.0e40d4p-90f, 0x1.400c0ep-12f, 0x1.7a2b0ap-82f, 0x1.9af94ep-109f,
     0x1.2b5ae4p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66ec6ep-12f, 0x1.26a7aap-57f, 0.0f,
     0.0f, 0x1.ae34ccp-99f, 0.0f, 0x1.51965ap-121f, 0x1.d8166ep-49f, 0x1.af6b02p-32f,
     0.0f, 0x1.91cab4p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8c02ep-91f, 0.0f, 0.0f, 0.0f,
     0x1.5afd4p-121f, 0x1.2a1928p-95f, 0.0f, 0.0f, 0x1.6739aep-84f, 0x1.d14022p-119f,
     0x1.06e226p-84f, 0x1.2878d4p-53f, 0x1.7f2976p-51f, 0x1.b5eee4p-78f, 0.0f,
     0x1.a01b7ep-20f, 0.0f, 0.0f, 0x1.273e86p-2f, 0x1.0c88f6p-31f, 0.0f,
     0x1.f3e48ep-98f, 0x1.dc1674p-90f, 0.0f, 0x1.5d3196p-88f, 0.0f, 0x1.7ccc5cp-110f,
     0x1.ece11p-9f, 0x1.04fd7p-4f, 0x1.b85deep-59f, 0x1.e6b3e4p-125f,
     0x1.1aecbap-124f, 0.0f, 0.0f, 0.0f, 0x1.0cf3a2p-67f, 0x1.eeed6p-52f,
     0x1.9d1f58p-106f, 0x1.ae9bc6p-34f, 0x1.377ccep-120f, 0.0f, 0x1.a8a5b6p-102f,
     0x1.bd46cp-100f, 0x1.71d56ap-69f, 0x1.dba1aep-8f, 0x1.a94364p-6f,
     0x1.c38082p-76f, 0x1.4df806p-76f, 0.0f, 0.0f, 0x1.5f028ap-57f, 0x1.bd86d6p-15f,
     0.0f, 0.0f, 0x1.2acc5cp-104f, 0x1.f51af4p-94f, 0x1.7da25cp-103f,
     0x1.cba8c8p-103f, 0.0f, 0.0f, 0x1.e6dbc4p-86f, 0.0f, 0x1.fd08cep-95f, 0.0f, 0.0f,
     0x1.58efb6p-59f, 0x1.449a66p-85f, 0.0f, 0.0f, 0x1p0f, 0x1.93f232p-4f,
     0x1.93b4d8p-48f, 0x1.9cc128p-76f, 0x1.c4cdeep-1f, 0x1.519496p-123f,
     0x1.fdca14p-35f, 0.0f, 0x1.5708bep-76f, 0x1.d6243ep-94f, 0.0f, 0.0f,
     0x1.63141p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.931242p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b50d4p-106f, 0.0f, 0x1.3b1236p-99f, 0x1.b631eap-110f, 0x1.ce21ap-68f,
     0x1.adae44p-86f, 0.0f, 0x1.48de4p-23f, 0x1.4acc4ep-47f, 0.0f, 0x1.e0988p-18f,
     0x1.b691bep-47f, 0.0f, 0.0f, 0x1.45a27ap-75f, 0x1.6cd79cp-3f, 0x1.9478f8p-77f,
     0.0f, 0x1.e92e1cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f336d8p-124f, 0x1.4919b8p-40f, 0x1.cc1b92p-123f, 0.0f, 0x1.94447p-13f,
     0.0f, 0x1.278beep-2f, 0.0f, 0x1.009eeap-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f1d94p-38f, 0x1.d078ccp-88f, 0x1.56e72ap-39f, 0.0f, 0.0f, 0x1.346aa4p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.266d48p-120f, 0.0f, 0x1.599f5ap-51f, 0.0f, 0.0f,
     0x1.2c96dcp-38f, 0x1.7fd51ap-114f, 0x1.2c1ef2p-126f, 0x1.ebcd1cp-70f, 0.0f,
     0x1.257034p-23f, 0.0f, 0.0f, 0x1.4852dp-120f, 0.0f, 0x1.97aac2p-62f,
     0x1.7e4c84p-61f, 0x1.b9f1ccp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cc282p-75f,
     0x1.7d95fap-8f, 0.0f, 0x1.684102p-112f, 0.0f, 0x1.bc2a06p-42f, 0x1.0360dap-118f,
     0x1.d403ecp-14f, 0.0f, 0.0f, 0x1.f7a534p-101f, 0.0f, 0.0f, 0x1.d88168p-114f,
     0x1.7ad10ap-111f, 0.0f, 0x1.a74364p-100f, 0x1.7bd85cp-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.898fb2p-37f, 0.0f, 0x1.361824p-36f, 0x1.13d5p-90f, 0.0f,
     0x1.d610b6p-118f, 0x1.cfbed2p-82f, 0.0f, 0x1.80bba4p-2f, 0x1.9c8146p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6306cp-65f, 0.0f, 0x1.cf80a2p-36f, 0x1.ad9378p-111f,
     0.0f, 0x1.c2ca9ep-112f, 0.0f, 0x1.39cda8p-66f, 0x1.1ae538p-97f, 0x1.4b0338p-114f,
     0x1.c2b5f6p-33f, 0x1.678ffep-42f, 0.0f, 0x1.3c1094p-19f, 0.0f, 0x1.c86522p-5f,
     0.0f, 0x1.57b59p-70f, 0x1.de3efcp-54f, 0.0f, 0.0f, 0x1.9b8352p-78f,
     0x1.e06b92p-82f, 0x1.da9168p-20f, 0x1.9c2988p-7f, 0x1.e4b23cp-55f,
     0x1.40e828p-91f, 0.0f, 0x1.41a0fap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fb054p-105f, 0x1.1b1198p-102f, 0.0f, 0.0f, 0.0f, 0x1.2a8958p-94f,
     0x1.1dc818p-56f, 0x1.c331e4p-88f, 0.0f, 0x1.fe2cb4p-92f, 0.0f, 0.0f,
     0x1.b5b606p-1f, 0x1p0f, 0x1.3e3deap-100f, 0.0f, 0x1.2b2782p-121f, 0.0f, 0.0f,
     0x1.9ae71ap-37f, 0x1.6e1ebp-29f, 0.0f, 0x1.7b66ap-25f, 0.0f, 0x1.d6718cp-46f,
     0x1.3c56fcp-21f, 0.0f, 0.0f, 0x1.23aadp-52f, 0.0f, 0x1.2a369ep-32f,
     0x1.4c512p-112f, 0x1.906cfcp-78f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.1ce40cp-126f, 0x1.06224p-15f, 0.0f, 0x1.35329ap-103f, 0.0f, 0x1.df5d44p-16f,
     0.0f, 0.0f, 0x1.615eep-124f, 0x1.8b9ab2p-97f, 0.0f, 0.0f, 0x1.15fa1p-4f,
     0x1.57b03cp-95f, 0x1.43abep-25f, 0x1.f63462p-88f, 0x1.874594p-101f, 0.0f, 0.0f,
     0x1.186b1p-16f, 0.0f, 0x1.d87338p-18f, 0.0f, 0.0f, 0x1.77c53ap-78f, 0.0f, 0.0f,
     0.0f, 0x1.73162p-90f, 0.0f, 0.0f, 0x1.29e5p-123f, 0x1.92368ep-47f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.5cd31cp-23f, 0x1.cbcdfep-113f, 0.0f, 0.0f, 0x1.9e8326p-101f,
     0.0f, 0x1.96c6b8p-66f, 0.0f, 0.0f, 0.0f, 0x1.5930dcp-102f, 0.0f,
     0x1.490862p-101f, 0.0f, 0x1.5a27c4p-124f, 0x1.1becc2p-74f, 0x1.28ab12p-29f,
     0x1.ed7ec2p-88f, 0.0f, 0x1.2aa358p-56f, 0x1.a4f93ap-46f, 0.0f, 0.0f,
     0x1.44cc34p-24f, 0x1.2cdb54p-18f, 0x1.3f474cp-112f, 0.0f, 0x1.99aa14p-100f,
     0x1.b718dep-64f, 0.0f, 0.0f, 0x1.06101ap-13f, 0.0f, 0.0f, 0x1.b0e9a6p-65f,
     0x1.df3a2ep-32f, 0x1.f80fb4p-62f, 0.0f, 0.0f, 0x1.6e2bbcp-20f, 0x1.4f9b36p-58f,
     0x1.ba345cp-84f, 0x1.1a31bp-35f, 0.0f, 0x1.ab8a52p-58f, 0.0f, 0.0f, 0.0f,
     0x1.b1935p-117f, 0.0f, 0x1.215456p-40f, 0x1.66a0d4p-94f, 0x1.ade9f4p-77f, 0.0f,
     0x1.32436ep-21f, 0x1.92cec8p-3f, 0x1.8d887ap-13f, 0x1.543bcap-103f,
     0x1.5a693cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93c17cp-104f, 0.0f,
     0x1.a6f82ap-36f, 0.0f, 0.0f, 0x1.995036p-24f, 0.0f, 0x1.241aap-42f,
     0x1.713ee8p-16f, 0.0f, 0x1.d854cp-77f, 0.0f, 0.0f, 0.0f, 0x1.a15864p-117f,
     0x1.df8feap-4f, 0.0f, 0x1.3c9deap-106f, 0.0f, 0.0f, 0x1.bad8p-125f, 0.0f,
     0x1.576bap-12f, 0x1.eeb466p-70f, 0x1.a08d5p-44f, 0.0f, 0.0f, 0x1.239c06p-112f,
     0.0f, 0.0f, 0x1.3010dep-36f, 0.0f, 0x1.a86e96p-77f, 0x1.98c7f6p-53f, 0.0f,
     0x1.87696ep-4f, 0x1.aeacccp-28f, 0x1.db3e9cp-4f, 0x1.cc31b6p-84f,
     0x1.0da5cep-82f, 0x1.e828fap-103f, 0.0f, 0x1.5c710cp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.391512p-39f, 0x1.1bf656p-66f, 0x1.e4742cp-62f, 0x1.69cdc6p-5f, 0.0f,
     0x1.2a2abep-53f, 0x1.a0a6c4p-6f, 0x1.36a706p-95f, 0.0f, 0x1.26ffbap-9f,
     0x1.2ad9dep-43f, 0.0f, 0.0f, 0.0f, 0x1.6b870cp-55f, 0.0f, 0x1.4f5216p-110f, 0.0f,
     0x1.441eep-90f, 0.0f, 0x1.1482fep-23f, 0x1.c07248p-87f, 0x1.9780dp-38f,
     0x1.2a1ebap-12f, 0x1.97a3cap-60f, 0x1.b6761ep-120f, 0.0f, 0x1.4f2c9cp-96f, 0.0f,
     0x1.e8da62p-61f, 0.0f, 0.0f, 0x1.43a592p-123f, 0.0f, 0x1.6e35f2p-116f, 0.0f,
     0.0f, 0x1.6e30a8p-45f, 0.0f, 0.0f, 0.0f, 0x1.32c7cep-63f, 0.0f, 0.0f, 0.0f,
     0x1.f38d58p-71f, 0.0f, 0.0f, 0.0f, 0x1.5a4e82p-112f, 0x1.5c7362p-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4486f4p-23f, 0.0f, 0x1.892108p-92f, 0.0f,
     0x1.0ae97cp-31f, 0x1.9c23ap-78f, 0x1.6f3fecp-68f, 0.0f, 0x1.2705f2p-19f, 0.0f,
     0x1.133154p-81f, 0.0f, 0x1.7a5f2ep-53f, 0.0f, 0x1.954c14p-44f, 0x1.f74d8p-4f,
     0x1.e276e4p-59f, 0x1.531654p-72f, 0x1.8bb626p-44f, 0x1.56b966p-50f, 0.0f,
     0x1.1d44aap-68f, 0x1.a89d28p-34f, 0x1.0cca9ap-68f, 0x1.031dd8p-120f,
     0x1.4488cap-54f, 0x1.510c12p-27f, 0.0f, 0x1.973944p-19f, 0x1.fed518p-95f,
     0x1.c25104p-6f, 0.0f, 0x1.780122p-110f, 0x1.624604p-33f, 0x1.8646dap-36f, 0.0f,
     0x1.e91c9cp-80f, 0x1.ffeeccp-87f, 0.0f, 0x1.b27e74p-94f, 0.0f, 0x1.6fa1c6p-66f,
     0x1.728e9ap-10f, 0x1.7c58ccp-94f, 0x1.1a3f92p-4f, 0x1.8c2af2p-70f, 0.0f, 0.0f,
     0.0f, 0x1.1ef792p-88f, 0x1.1c20ccp-98f, 0.0f, 0.0f, 0x1.81f016p-5f, 0.0f, 0.0f,
     0x1.3417dcp-35f, 0x1.efbe2cp-108f, 0x1.6ad4bep-122f, 0.0f, 0.0f, 0x1.0de338p-81f,
     0.0f, 0.0f, 0x1.85b848p-117f, 0.0f, 0x1.f0b39p-64f, 0.0f, 0.0f, 0.0f,
     0x1.4cf942p-83f, 0.0f, 0x1.3b8c3ap-95f, 0.0f, 0x1.4a0d48p-74f, 0.0f, 0.0f,
     0x1.181d6cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2f65p-59f,
     0x1.d2e30ep-102f, 0.0f, 0.0f, 0.0f, 0x1.316592p-111f, 0x1.bb3b02p-20f, 0.0f,
     0x1.9ca95p-36f, 0.0f, 0.0f, 0.0f, 0x1.69b9c4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c924bap-90f, 0x1.39e218p-2f, 0x1.8c5dacp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9abdc4p-90f, 0.0f, 0x1.2c9e28p-8f, 0x1.2752bcp-126f, 0x1.087bd4p-101f, 0.0f,
     0.0f, 0x1.14b22cp-95f, 0x1.fc99dcp-117f, 0x1.827db6p-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1935eep-45f, 0.0f, 0x1.c5b166p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03cff2p-18f, 0x1.75e556p-66f, 0x1.1353e2p-46f, 0x1.35a86ep-70f, 0.0f,
     0x1.575c54p-123f, 0.0f, 0x1.ca8d32p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4d98ep-66f, 0.0f, 0x1.935882p-37f, 0.0f, 0.0f, 0x1.f1f094p-83f,
     0x1.1d8908p-1f, 0.0f, 0x1.0b1f24p-54f, 0x1.0df3e2p-60f, 0.0f, 0x1.6ca85p-107f,
     0.0f, 0x1.ca2f3ap-110f, 0x1.6c49d2p-16f, 0x1.38f62ap-116f, 0x1.6364a6p-43f,
     0x1.09b0f8p-119f, 0x1.d7bba6p-79f, 0.0f, 0.0f, 0.0f, 0x1.1f2e3p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5c34a4p-84f, 0.0f, 0x1.8e276ep-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e8afcp-27f, 0.0f, 0x1.b40426p-63f, 0.0f, 0.0f, 0x1.6f1cp-52f,
     0x1.5f74d6p-32f, 0x1.39a644p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.312646p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3982b2p-23f, 0.0f, 0.0f, 0.0f, 0x1.65c5f8p-22f,
     0x1.4bed9cp-36f, 0.0f, 0x1.0248d6p-12f, 0x1.b94338p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5c8d8p-23f, 0.0f, 0x1.8eb60ep-52f, 0x1.32525ep-109f, 0.0f, 0.0f, 0.0f,
     0x1.7fb694p-121f, 0x1.13e5c8p-61f, 0x1.9ad124p-61f, 0.0f, 0x1.3e698p-20f, 0.0f,
     0x1.509dbp-29f, 0.0f, 0x1.e798fcp-22f, 0.0f, 0x1.d700bap-91f, 0x1.8db39ap-60f,
     0x1.343daep-65f, 0x1.23b7ep-110f, 0.0f, 0x1.fc0eeep-120f, 0x1.49763ep-125f,
     0x1.737584p-69f, 0.0f, 0.0f, 0x1.d26a02p-48f, 0x1.1d915p-97f, 0.0f,
     0x1.bfd282p-93f, 0x1.7ea756p-15f, 0.0f, 0.0f, 0x1.fee9a4p-74f, 0x1.b3fc4p-77f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fdf26p-30f, 0x1.cee866p-51f,
     0x1.e87708p-90f, 0x1.bad11ap-35f, 0x1.a43eep-85f, 0x1.39a184p-94f,
     0x1.537672p-23f, 0x1.c53ea8p-40f, 0x1.6bb1dp-92f, 0x1.f0e77p-114f,
     0x1.b12e92p-124f, 0x1.464e04p-37f, 0x1.7e932ap-68f, 0.0f, 0x1.710c5ap-97f, 0.0f,
     0x1.bd3f7ep-60f, 0.0f, 0x1.e04278p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a9c2cp-86f, 0x1.a2fbaep-123f, 0.0f, 0x1.24dff4p-94f, 0x1.31a756p-81f, 0.0f,
     0x1.4bf2bap-3f, 0.0f, 0x1.3e3394p-86f, 0x1.dd9158p-63f, 0.0f, 0x1.09686ap-38f,
     0.0f, 0x1.6c04b2p-73f, 0x1.77ae24p-27f, 0.0f, 0.0f, 0x1.1dce72p-81f,
     0x1.500bfep-101f, 0.0f, 0.0f, 0x1.1a0c62p-126f, 0x1.ec0f3cp-18f, 0x1.7f806cp-87f,
     0x1.15fd4p-55f, 0x1.8c5f7cp-110f, 0x1.aeb79ep-5f, 0.0f, 0x1.100b48p-21f, 0.0f,
     0.0f, 0x1.cc7d2ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.192aacp-74f,
     0x1.e11168p-119f, 0x1.557276p-114f, 0x1.704514p-96f, 0x1.8b3724p-9f,
     0x1.3fed68p-107f, 0.0f, 0.0f, 0.0f, 0x1.47f82ep-30f, 0x1.4b2496p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1be658p-92f, 0.0f, 0x1.cefa7ep-1f, 0.0f,
     0x1.04542ep-81f, 0.0f, 0.0f, 0x1.317d0ep-9f, 0.0f, 0x1.ca90e8p-89f,
     0x1.e1a59ep-109f, 0x1.63fc58p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8acf34p-111f,
     0x1.8b786ap-109f, 0x1.a0685cp-32f, 0.0f, 0.0f, 0x1.0fd5d2p-121f, 0.0f,
     0x1.14ae84p-33f, 0x1.eebaep-37f, 0.0f, 0x1.819142p-73f, 0.0f, 0.0f,
     0x1.27678ep-10f, 0.0f, 0x1.0e8052p-94f, 0x1.f55812p-29f, 0x1.c7f0b6p-97f,
     0x1.7fb3bcp-19f, 0.0f, 0x1.d6cdf8p-111f, 0x1.3aad8cp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.79f524p-91f, 0.0f, 0x1.44f3dp-99f, 0.0f, 0.0f, 0x1.4cfb7cp-110f, 0.0f,
     0x1.d9de9cp-41f, 0.0f, 0x1.89d0bp-120f, 0.0f, 0x1.b96208p-3f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.42dea4p-114f, 0x1.60f0b6p-13f, 0.0f, 0x1.200826p-111f, 0x1.bdfee2p-24f,
     0x1.583508p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.710d66p-30f, 0.0f,
     0x1.05bf46p-25f, 0.0f, 0.0f, 0x1.df41bcp-30f, 0.0f, 0x1.a5cecap-63f, 0.0f, 0.0f,
     0.0f, 0x1.87a9cep-30f, 0x1.4b9fa8p-116f, 0x1.1f224p-105f, 0x1.2259ccp-35f,
     0x1.fdbf1p-83f, 0x1.66efc6p-38f, 0.0f, 0x1.03f48ep-96f, 0.0f, 0x1.324922p-113f,
     0.0f, 0x1.f7105ap-102f, 0x1.b3d89ep-51f, 0x1.7dd24ap-101f, 0.0f, 0.0f,
     0x1.c8b14cp-8f, 0x1.3ab86cp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.449c6ap-87f, 0.0f,
     0.0f, 0x1.d0f0aap-40f, 0x1.3b3cc6p-112f, 0.0f, 0x1.3e3668p-76f, 0.0f,
     0x1.e9b1bp-57f, 0.0f, 0x1.365e8cp-124f, 0x1.0f4ff8p-61f, 0.0f, 0.0f,
     0x1.5f0524p-111f, 0x1.640918p-95f, 0x1.b8efa8p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cde7f6p-44f, 0x1.911516p-50f, 0x1.908a6p-119f, 0.0f, 0x1.a68146p-17f,
     0x1.e3a02ap-7f, 0x1.5cbd2ep-72f, 0x1.bd989ap-109f, 0x1.f1ef14p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c1p-123f, 0.0f, 0x1.8944cep-87f, 0x1.e0412ep-82f,
     0x1.690e06p-45f, 0.0f, 0.0f, 0.0f, 0x1.5dcc84p-62f, 0.0f, 0.0f, 0.0f,
     0x1.82973ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41a298p-105f, 0.0f,
     0x1.a3a848p-102f, 0x1.bde5bep-32f, 0.0f, 0x1.704c8p-26f, 0.0f, 0x1.e29f5ep-14f,
     0.0f, 0x1.b5fe86p-74f, 0x1.d172cp-87f, 0x1.f93b14p-74f, 0x1.af1bacp-2f,
     0x1.b2da6p-97f, 0.0f, 0x1.2b141ep-45f, 0.0f, 0x1.e48e4p-98f, 0x1.6d1ceap-43f,
     0x1.8c0288p-52f, 0.0f, 0x1.7f5f44p-43f, 0x1.f8a9e4p-83f, 0x1.336af2p-103f, 0.0f,
     0x1p0f, 0x1.58b7bep-102f, 0.0f, 0x1.fad55p-76f, 0.0f, 0.0f, 0.0f,
     0x1.0e937ep-93f, 0x1.6b0572p-115f, 0.0f, 0x1p0f, 0x1.6559eap-88f, 0.0f,
     0x1.e988d4p-79f, 0x1.983c62p-81f, 0.0f, 0.0f, 0x1.5edc88p-71f, 0x1.718a0cp-92f,
     0x1p0f, 0.0f, 0x1.709092p-106f, 0x1.ed75d2p-82f, 0x1.f19516p-109f,
     0x1.bd8c42p-102f, 0x1.5fa4a8p-36f, 0.0f, 0.0f, 0x1.c437fep-5f, 0x1.c2b19p-118f,
     0x1.6d69fap-14f, 0.0f, 0x1.cdc3e8p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1c1966p-100f, 0.0f, 0.0f, 0x1.204b3ep-33f, 0.0f, 0.0f, 0x1.9061c8p-29f,
     0x1.a0d764p-26f, 0x1.4848d6p-28f, 0x1.46307cp-112f, 0.0f, 0.0f, 0x1.668d2ap-115f,
     0x1.4136bcp-17f, 0.0f, 0.0f, 0x1.f91d42p-41f, 0.0f, 0x1.60d858p-11f, 0.0f,
     0x1.b0b49cp-94f, 0x1.0686c4p-10f, 0.0f, 0.0f, 0.0f, 0x1.b059e6p-76f,
     0x1.e7f2a4p-126f, 0x1.47ede4p-95f, 0x1.4ffa2cp-92f, 0.0f, 0x1.80c9cep-52f,
     0x1.1f5abp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fefbf4p-6f, 0x1.1d679cp-77f,
     0.0f, 0x1.75c584p-18f, 0x1.acdabp-60f, 0.0f, 0x1.5bb9ep-121f, 0x1.0f9c06p-107f,
     0x1.a7ea74p-65f, 0.0f, 0.0f, 0.0f, 0x1.4f86f2p-89f, 0.0f, 0x1.2334e4p-72f,
     0x1.d1e6p-121f, 0.0f, 0.0f, 0.0f, 0x1.b9f438p-62f, 0.0f, 0x1.b2267p-59f,
     0x1.2c691ap-8f, 0.0f, 0.0f, 0.0f, 0x1.f03f18p-7f, 0.0f, 0.0f, 0.0f,
     0x1.294198p-38f, 0.0f, 0x1.d9faecp-58f, 0.0f, 0.0f, 0.0f, 0x1.f1c738p-91f,
     0x1.a36f8ep-124f, 0.0f, 0.0f, 0x1.879992p-69f, 0x1.aa180ap-57f, 0.0f,
     0x1.b3db46p-96f, 0.0f, 0.0f, 0x1.264c42p-31f, 0x1.c75924p-84f, 0x1.0ae34ap-72f,
     0x1.de73a2p-123f, 0x1.cfb3ccp-57f, 0.0f, 0x1.f27bc6p-59f, 0x1.9fa92ap-66f,
     0x1.a2e22cp-115f, 0.0f, 0.0f, 0.0f, 0x1.910f1ap-75f, 0.0f, 0.0f, 0x1.b119fcp-82f,
     0.0f, 0.0f, 0x1.e43a2ap-43f, 0.0f, 0.0f, 0.0f, 0x1.8acddap-6f, 0x1.11fbacp-58f,
     0x1.2b1eaep-15f, 0.0f, 0x1.743a22p-120f, 0.0f, 0x1.2b4f04p-116f, 0x1.6431f2p-65f,
     0x1.1591cap-56f, 0x1.3fdc0cp-68f, 0.0f, 0.0f, 0x1.126b4cp-63f, 0x1.8e964ep-87f,
     0x1.a94ab6p-14f, 0.0f, 0x1.f1c21ap-28f, 0.0f, 0.0f, 0x1.a84bd2p-69f, 0.0f,
     0x1.2026d2p-63f, 0x1.6d1ad8p-84f, 0x1.123f42p-42f, 0x1.65fe7ep-78f,
     0x1.69a184p-115f, 0.0f, 0x1.13794cp-45f, 0x1.23d88ep-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.50d0ccp-109f, 0x1.82a958p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b8944p-110f, 0.0f, 0.0f, 0.0f, 0x1.94b1c6p-79f, 0x1.64207ap-67f,
     0x1.9689fp-17f, 0.0f, 0x1.dc0884p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a784ep-48f, 0x1.3a7348p-114f, 0.0f, 0x1.b520e6p-32f, 0.0f, 0.0f,
     0x1.64f47ep-124f, 0x1.7cfc38p-121f, 0x1.f5d744p-90f, 0.0f, 0.0f, 0x1.3906f6p-11f,
     0.0f, 0x1.67433cp-108f, 0x1.8dee9cp-71f, 0x1.d59b4cp-8f, 0.0f, 0x1.75cf58p-71f,
     0.0f, 0.0f, 0.0f, 0x1.5c3cd8p-115f, 0.0f, 0.0f, 0x1.8bf864p-24f, 0x1.43fadcp-47f,
     0.0f, 0x1.b9a4bcp-120f, 0x1.57867ap-94f, 0.0f, 0x1.6ea194p-87f, 0.0f,
     0x1.912832p-54f, 0.0f, 0x1.8f65c2p-53f, 0x1.49df5ep-107f, 0x1.a116p-15f,
     0x1.f23e9cp-82f, 0x1.0485p-13f, 0.0f, 0.0f, 0.0f, 0x1.18ce88p-23f,
     0x1.c0ceb6p-22f, 0.0f, 0.0f, 0x1.543074p-19f, 0x1.21d6dap-43f, 0x1.28b6bp-44f,
     0x1.2e72dep-34f, 0x1.abf29ep-87f, 0.0f, 0x1.992d9ep-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.29986p-26f, 0x1.81b208p-73f, 0x1.c7a858p-118f, 0x1.95bc06p-57f,
     0x1.2d49eap-50f, 0.0f, 0x1.adaaeep-86f, 0x1.38af3p-29f, 0.0f, 0.0f,
     0x1.d03d58p-107f, 0x1.5c0f7p-1f, 0x1.cd78b4p-101f, 0.0f, 0.0f, 0x1.356df8p-82f,
     0x1.01fa12p-94f, 0.0f
};
static const float external_bench_wrapper_input_table_arg2[1001]  = {
     0x1.a9e16ap-10f, 0.0f, 0x1.88f41ap-4f, 0x1.a062dep-53f, 0x1.8f1ac8p-103f,
     0x1.81bab8p-85f, 0.0f, 0.0f, 0.0f, 0x1.0d93a8p-34f, 0x1.6070b2p-58f,
     0x1.85194cp-24f, 0.0f, 0x1.253e2p-48f, 0.0f, 0x1.d47d8p-20f, 0.0f, 0.0f,
     0x1.c70c9cp-69f, 0x1.a8786p-27f, 0.0f, 0x1.713e8ap-70f, 0x1.42fc3ep-28f,
     0x1.fdde8cp-53f, 0x1.bf477ap-5f, 0x1.e295dcp-39f, 0x1.f21968p-14f, 0.0f,
     0x1.4aac9cp-86f, 0.0f, 0.0f, 0x1.369358p-72f, 0x1.fa37eap-39f, 0x1.695eb4p-27f,
     0.0f, 0x1.f60534p-60f, 0x1.d28584p-51f, 0.0f, 0x1.a73dcap-104f, 0x1.78035p-4f,
     0x1.fd5e4ep-9f, 0x1.5998f6p-98f, 0.0f, 0x1.a82a0ep-102f, 0x1.87df28p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.074b3cp-9f, 0.0f, 0x1.d1d44p-94f, 0.0f, 0x1.833a5cp-45f,
     0x1.368b0ep-120f, 0.0f, 0x1.79998cp-47f, 0.0f, 0x1.9884bap-57f, 0x1.64a6fap-98f,
     0.0f, 0.0f, 0x1.179d3ep-31f, 0x1.e8680cp-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c636eap-11f, 0.0f, 0x1.088aecp-17f, 0.0f, 0x1.7b3ffcp-54f, 0x1.32f6ap-42f,
     0.0f, 0x1.f6320ap-92f, 0x1.3828aep-98f, 0.0f, 0.0f, 0x1.4aa6e8p-75f, 0.0f,
     0x1.7d82b4p-89f, 0x1.e17812p-93f, 0.0f, 0x1.7b4bc6p-18f, 0x1.24826ep-73f, 0.0f,
     0.0f, 0x1.fd889p-60f, 0.0f, 0.0f, 0x1.1bf124p-43f, 0.0f, 0.0f, 0.0f,
     0x1.d06b44p-122f, 0x1.2af138p-21f, 0x1.d53862p-33f, 0.0f, 0x1.6d8498p-80f,
     0x1.15384p-95f, 0x1.53f88cp-61f, 0x1.c08e06p-114f, 0.0f, 0x1.805b1p-53f, 0.0f,
     0x1.9c4864p-13f, 0x1.bea866p-2f, 0x1.10d166p-77f, 0.0f, 0.0f, 0.0f,
     0x1.202096p-103f, 0.0f, 0x1.dcb068p-48f, 0x1.514a98p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d7d9ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f44896p-37f, 0x1.89aea8p-20f,
     0x1.f5b89ep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1532p-83f, 0x1.40a826p-51f,
     0x1.ea0f24p-44f, 0.0f, 0.0f, 0x1.75e26ep-80f, 0x1.136ddcp-96f, 0x1.fe8e82p-5f,
     0.0f, 0x1.390e42p-2f, 0.0f, 0x1.98148p-65f, 0x1.64c166p-20f, 0x1.e35858p-85f,
     0.0f, 0x1.3850fp-8f, 0x1.2473a6p-89f, 0.0f, 0x1.44546p-57f, 0.0f,
     0x1.f367bap-110f, 0.0f, 0x1.1b9b34p-51f, 0x1.e1e4p-9f, 0.0f, 0x1.a5260ap-77f,
     0x1.3357dp-26f, 0x1.17ff94p-105f, 0x1.0df488p-1f, 0.0f, 0x1.398beap-124f,
     0x1.abc9eep-20f, 0x1.be437ep-3f, 0x1.4b1d94p-21f, 0.0f, 0.0f, 0x1.db2c7ep-108f,
     0.0f, 0x1.b872cep-45f, 0.0f, 0.0f, 0x1.21bd1cp-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ec832p-119f, 0x1.8762a6p-44f, 0.0f, 0x1.aa12bep-33f, 0x1.fde8cp-24f,
     0x1.29a0bap-95f, 0x1.e9c37p-33f, 0x1.50d088p-60f, 0x1.f0353ap-84f, 0.0f, 0.0f,
     0x1.631da4p-79f, 0x1.f113cap-125f, 0.0f, 0x1.a1e81cp-123f, 0.0f, 0.0f,
     0x1.62b8b4p-24f, 0x1.95da44p-88f, 0.0f, 0x1.0a765ep-39f, 0.0f, 0x1.489152p-32f,
     0x1.fc1caep-12f, 0.0f, 0x1.5cf0bep-74f, 0x1.dc7a2ap-96f, 0.0f, 0x1.85abf2p-102f,
     0x1.3de594p-14f, 0x1.858b5p-10f, 0x1.1c837p-54f, 0.0f, 0x1.a7868ap-27f,
     0x1.101ddcp-69f, 0x1.5a31d4p-20f, 0.0f, 0x1.d05a66p-15f, 0x1.ceaf4ep-105f,
     0x1.4e456ep-52f, 0x1.080062p-117f, 0.0f, 0.0f, 0x1.fee592p-37f, 0x1.d95532p-6f,
     0.0f, 0.0f, 0.0f, 0x1.de8c94p-42f, 0x1p0f, 0x1.cb99cap-77f, 0x1.ef641ap-89f,
     0x1.49b87p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3b4cp-69f,
     0x1.0deacap-7f, 0x1.1b19p-41f, 0.0f, 0.0f, 0x1.b5cda4p-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.304866p-38f, 0x1.3b34e2p-122f, 0.0f, 0x1.4049d2p-47f,
     0x1.d20172p-30f, 0x1.6bb818p-92f, 0x1p0f, 0x1.417dd4p-101f, 0.0f,
     0x1.cec106p-72f, 0.0f, 0x1.eeb5c4p-91f, 0.0f, 0.0f, 0.0f, 0x1.f28842p-13f,
     0x1.eeed98p-13f, 0.0f, 0x1.b4203p-77f, 0.0f, 0.0f, 0.0f, 0x1.4abe5cp-7f,
     0x1.f621a2p-53f, 0.0f, 0.0f, 0.0f, 0x1.3c2104p-97f, 0x1.4d3ef8p-112f,
     0x1.b2f062p-44f, 0x1.00fe9ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8edd2ap-99f, 0.0f, 0.0f, 0x1.c4d198p-40f, 0.0f, 0x1.a4ecc6p-44f, 0.0f,
     0x1.1a2c86p-56f, 0.0f, 0x1.68759p-57f, 0x1.f0409p-109f, 0x1.42415cp-108f,
     0x1.2f4c7p-69f, 0x1.002d44p-39f, 0x1.5e1f1ep-7f, 0x1.336e08p-2f, 0x1.0118e6p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ca80ap-62f,
     0.0f, 0.0f, 0x1.148a4p-94f, 0x1.715f98p-94f, 0.0f, 0.0f, 0x1.40d4c4p-118f,
     0x1.7c8b14p-29f, 0x1.00815ep-24f, 0.0f, 0x1.af7162p-69f, 0.0f, 0.0f,
     0x1.3ff5e8p-88f, 0x1.29127p-31f, 0x1.2c1ce2p-117f, 0x1.77c0dcp-49f,
     0x1.1f3716p-11f, 0x1.206c7p-43f, 0x1.4c8bb6p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fb70c6p-20f, 0.0f, 0x1.a31134p-80f, 0x1.19c7d6p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4fb8cp-21f, 0x1.6d3566p-81f, 0.0f,
     0x1.90426ap-98f, 0x1.8fcddap-56f, 0x1.a9ad54p-76f, 0x1.34c094p-51f,
     0x1.92a664p-107f, 0x1.6b8276p-125f, 0.0f, 0x1.d6636cp-53f, 0x1.81d278p-123f,
     0x1.aec078p-21f, 0.0f, 0x1.84ed62p-102f, 0x1.1ddd6p-18f, 0.0f, 0.0f,
     0x1.35bad8p-39f, 0.0f, 0.0f, 0.0f, 0x1.153656p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.727088p-117f, 0x1.562ff6p-116f, 0x1.2e0b76p-48f, 0x1.444ac6p-5f, 0.0f,
     0x1.931166p-33f, 0.0f, 0x1.a69aa6p-65f, 0.0f, 0x1.69ead8p-16f, 0x1.0d897p-98f,
     0x1.1cf074p-114f, 0.0f, 0.0f, 0x1.25922ap-113f, 0x1.8c3bd4p-89f, 0.0f, 0.0f,
     0.0f, 0x1.4c7e4cp-54f, 0x1.2216eep-17f, 0.0f, 0.0f, 0x1.83ee4ap-31f, 0.0f,
     0x1.39a58cp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc812cp-121f, 0.0f, 0.0f, 0.0f,
     0x1.c45386p-7f, 0.0f, 0x1.c75fdp-27f, 0.0f, 0x1.324628p-2f, 0x1.9e485p-78f, 0.0f,
     0x1.2ff806p-50f, 0.0f, 0.0f, 0x1.54ac78p-108f, 0x1.cb8d26p-44f, 0.0f,
     0x1.ea074ap-124f, 0x1.1fe342p-9f, 0x1.0dbbd6p-76f, 0.0f, 0x1.6c551cp-25f, 0.0f,
     0x1.e72bp-93f, 0x1.6f9f16p-16f, 0x1.ef9388p-108f, 0.0f, 0.0f, 0x1.7fc284p-26f,
     0.0f, 0.0f, 0x1.b6b196p-52f, 0.0f, 0.0f, 0.0f, 0x1.b8347ap-13f, 0x1.ecb58p-36f,
     0.0f, 0x1.076fc8p-54f, 0x1.52ee9p-74f, 0.0f, 0x1.1d302ep-87f, 0x1.4a9b42p-112f,
     0x1.a0151p-70f, 0.0f, 0x1.196c82p-75f, 0x1.8e9c0ap-13f, 0.0f, 0.0f, 0.0f,
     0x1.377606p-46f, 0x1.d2dep-97f, 0x1.0e5e1ep-14f, 0x1.9ac3dep-88f, 0.0f,
     0x1.ed994cp-41f, 0x1.3c0128p-36f, 0x1.3e353ep-73f, 0x1.023fa6p-99f, 0.0f, 0.0f,
     0x1.513d9cp-62f, 0.0f, 0x1.4c5d84p-23f, 0.0f, 0.0f, 0x1.679d32p-90f,
     0x1.e7b406p-75f, 0.0f, 0.0f, 0x1.8adf12p-89f, 0x1.3373aep-53f, 0x1.f6eaa6p-115f,
     0.0f, 0x1.020f3cp-39f, 0x1.1ce95cp-82f, 0x1.95cb2cp-72f, 0.0f, 0.0f,
     0x1.ded7bcp-22f, 0x1.60fee4p-109f, 0.0f, 0x1.e5726cp-104f, 0x1.ad9512p-27f, 0.0f,
     0.0f, 0x1.93348p-103f, 0x1.c452p-84f, 0x1.3a9e4cp-66f, 0.0f, 0x1.2b5c2ep-46f,
     0x1.72fcd6p-66f, 0x1.d67142p-38f, 0x1.3e4d94p-55f, 0x1.179facp-122f,
     0x1.8faadep-72f, 0.0f, 0x1.a7d334p-93f, 0.0f, 0x1.5f6a8cp-78f, 0x1.5e8bf4p-19f,
     0x1.b723b4p-24f, 0x1.f5635ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea3f62p-6f, 0x1.e420dcp-80f, 0x1.bbdec8p-4f, 0.0f, 0x1.17efecp-65f,
     0x1.7a5bc2p-81f, 0x1.27fd08p-99f, 0x1.a5776ep-101f, 0.0f, 0x1.0017dcp-101f, 0.0f,
     0.0f, 0x1.6ed8e8p-44f, 0x1.e9f96ap-16f, 0.0f, 0.0f, 0x1.d7cc3ap-1f, 0.0f,
     0x1.e80dcp-6f, 0.0f, 0.0f, 0x1.87e88ep-2f, 0x1.6981f2p-51f, 0.0f,
     0x1.993afcp-98f, 0x1.3aced4p-117f, 0x1.c1a4cep-103f, 0.0f, 0.0f, 0x1.9022aep-27f,
     0x1.b0a40ep-9f, 0x1.6b8dc4p-61f, 0x1.c1f52ap-109f, 0.0f, 0x1.e0da88p-46f,
     0x1.0ba3a2p-73f, 0x1.fd8a02p-91f, 0x1.f7ebf6p-80f, 0x1.27d902p-9f,
     0x1.526412p-34f, 0.0f, 0.0f, 0x1.c37e5ep-98f, 0.0f, 0x1.b3825p-115f, 0.0f,
     0x1.085128p-60f, 0.0f, 0x1.568f7cp-108f, 0x1.7fcc26p-76f, 0.0f, 0.0f,
     0x1.fb1f76p-45f, 0x1.252814p-60f, 0.0f, 0.0f, 0.0f, 0x1.fcf764p-12f,
     0x1.0fd59ep-56f, 0x1.35b1eap-19f, 0.0f, 0x1.8c4ccap-81f, 0.0f, 0.0f, 0.0f,
     0x1.21eddap-60f, 0x1.71d17ep-50f, 0.0f, 0.0f, 0.0f, 0x1.5ab7ecp-39f, 0.0f,
     0x1.e166bep-51f, 0.0f, 0x1.76c57cp-102f, 0.0f, 0.0f, 0.0f, 0x1.0aac6cp-105f,
     0x1.895f38p-96f, 0.0f, 0x1.8551p-1f, 0x1.dd19ccp-7f, 0.0f, 0x1.c4376p-12f, 0.0f,
     0.0f, 0x1.a0e51ep-91f, 0x1.6ced2ep-8f, 0x1.210c38p-76f, 0.0f, 0x1.a377a6p-68f,
     0.0f, 0x1.1b5748p-6f, 0x1.bf30dep-3f, 0x1.fd352p-23f, 0.0f, 0x1.4f64cp-86f,
     0x1.21de5cp-42f, 0x1.a78f4ep-41f, 0x1.faaadp-18f, 0x1.eb270ep-62f,
     0x1.77311p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1a53ep-125f, 0x1.3de306p-78f,
     0x1.731d7ep-54f, 0.0f, 0x1.d7c17ep-74f, 0x1.311c96p-11f, 0x1.6130fp-107f,
     0x1.f82714p-108f, 0x1.0dc572p-36f, 0.0f, 0x1.ffbed8p-115f, 0.0f, 0.0f,
     0x1.f5e108p-41f, 0.0f, 0.0f, 0.0f, 0x1.974286p-1f, 0.0f, 0x1.2ce4cp-2f, 0.0f,
     0x1.cf4bfap-30f, 0.0f, 0x1.e4ccf6p-43f, 0.0f, 0.0f, 0x1.46fb4p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2ad34p-32f, 0x1.52c0b8p-70f, 0.0f, 0.0f, 0x1.5dab9p-37f,
     0x1.51bc18p-4f, 0x1.5859bep-113f, 0.0f, 0x1.427f6ep-46f, 0x1.593afep-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.145e7ep-99f, 0x1.b2f692p-62f, 0x1.4fce0cp-57f,
     0x1.b59df6p-37f, 0.0f, 0x1.d3f648p-104f, 0.0f, 0x1.0a0c6cp-27f, 0x1.9c7dc6p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3b49ep-65f, 0x1.546c6cp-103f, 0.0f, 0.0f,
     0x1.109406p-105f, 0x1.06fe22p-18f, 0x1.bdf21ep-109f, 0.0f, 0x1.591f26p-1f, 0.0f,
     0x1p0f, 0x1.074948p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8eb238p-90f, 0.0f, 0.0f, 0x1.d2393p-94f, 0x1.5664d8p-100f, 0.0f, 0.0f,
     0x1.63c7b8p-20f, 0x1.a36182p-49f, 0.0f, 0x1.b1f91ep-55f, 0x1.bccb54p-110f,
     0x1.f44dbcp-13f, 0x1.6c503p-42f, 0.0f, 0.0f, 0x1.13963cp-126f, 0.0f, 0.0f,
     0x1.e5b5a8p-87f, 0x1.b50b12p-6f, 0.0f, 0x1.efa0eap-115f, 0.0f, 0.0f,
     0x1.7447fp-62f, 0.0f, 0.0f, 0x1.9a46c4p-49f, 0x1.a439eep-122f, 0x1.19f95p-43f,
     0.0f, 0.0f, 0.0f, 0x1.2ac8e2p-10f, 0.0f, 0x1.177f8ap-49f, 0.0f, 0x1.404f24p-2f,
     0.0f, 0.0f, 0x1.e5294cp-89f, 0x1.c88068p-34f, 0x1.9d0b8cp-116f, 0x1.f968e8p-31f,
     0.0f, 0.0f, 0x1.3a8aecp-91f, 0.0f, 0x1.c422e6p-24f, 0x1.212288p-32f, 0.0f, 0.0f,
     0.0f, 0x1.d976f2p-26f, 0x1.732dc2p-18f, 0.0f, 0.0f, 0x1.39cfeap-125f, 0.0f, 0.0f,
     0x1.aaea32p-46f, 0.0f, 0x1.0a380ep-41f, 0x1.da312cp-33f, 0.0f, 0x1.dd058cp-89f,
     0x1.3876a4p-51f, 0.0f, 0.0f, 0x1.5469eep-83f, 0x1.a81064p-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c199a2p-123f, 0x1.c8c77p-60f, 0x1.da2d42p-82f, 0x1.43da34p-125f,
     0x1.953cdcp-114f, 0.0f, 0.0f, 0.0f, 0x1.3ccf8ep-90f, 0.0f, 0x1.6d0fbep-10f,
     0x1.c55a8p-97f, 0.0f, 0x1.c00996p-102f, 0.0f, 0x1.9c54ap-34f, 0.0f, 0.0f, 0.0f,
     0x1.ec1fep-91f, 0.0f, 0.0f, 0x1.108258p-98f, 0.0f, 0x1.2976aap-118f,
     0x1.e8d70cp-48f, 0x1.eab526p-63f, 0.0f, 0.0f, 0.0f, 0x1.0b1fe8p-114f,
     0x1.8a5f82p-11f, 0x1.309942p-120f, 0x1.97ee84p-18f, 0.0f, 0.0f, 0x1.4c080cp-4f,
     0.0f, 0.0f, 0.0f, 0x1.f00648p-5f, 0.0f, 0x1.d4f4c4p-13f, 0.0f, 0x1.d0a68ap-121f,
     0x1.62b864p-116f, 0x1.6a82ccp-81f, 0x1.f32456p-80f, 0x1.ff0612p-92f,
     0x1.a2d604p-48f, 0x1.8ad888p-80f, 0.0f, 0x1.69495ep-28f, 0.0f, 0x1.ad71ecp-125f,
     0x1.cdf2aep-100f, 0x1.838e9ep-124f, 0.0f, 0x1.646b6ap-108f, 0x1.dc3964p-35f,
     0.0f, 0.0f, 0x1.1118fep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03650ep-31f,
     0x1.d0864ap-116f, 0x1.c4e504p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.23f0a2p-22f, 0.0f, 0.0f, 0x1.2aea54p-121f, 0x1.bb455ap-59f, 0x1.3548bcp-36f,
     0x1.befeb2p-124f, 0x1.c82bccp-53f, 0x1.3a1b96p-124f, 0.0f, 0x1.46ebcp-22f, 0.0f,
     0x1.b1c90cp-41f, 0.0f, 0.0f, 0x1.463662p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aac50ep-84f, 0.0f, 0.0f, 0x1.37dabap-72f, 0x1.5af93cp-63f, 0.0f,
     0x1.cfcbf4p-125f, 0x1.a9ba94p-96f, 0.0f, 0x1.cb868ap-44f, 0.0f, 0.0f, 0.0f,
     0x1.3b7e3ap-103f, 0.0f, 0.0f, 0x1.326984p-67f, 0x1.8ae4ep-103f, 0.0f,
     0x1.db8caap-60f, 0x1.e844f6p-28f, 0x1.d70aa6p-9f, 0x1.52a87ep-31f, 0.0f, 0.0f,
     0x1.fecfp-23f, 0x1.c854cp-45f, 0x1.1e1e5ep-11f, 0x1.3f71aap-115f, 0.0f,
     0x1.71870ap-98f, 0.0f, 0.0f, 0.0f, 0x1.703116p-78f, 0x1.5aa5fp-123f, 0.0f,
     0x1.44686ep-115f, 0.0f, 0x1.b038eap-109f, 0.0f, 0.0f, 0x1.69b796p-96f, 0.0f,
     0.0f, 0x1.f1dee6p-112f, 0.0f, 0.0f, 0x1.223fdap-73f, 0.0f, 0.0f,
     0x1.d609c8p-104f, 0x1.7e9caap-44f, 0.0f, 0x1.8c8644p-96f, 0.0f, 0.0f,
     0x1.37da48p-56f, 0x1.6e2cd4p-93f, 0.0f, 0x1.f18646p-103f, 0x1.3deb8p-74f,
     0x1.01c7d4p-37f, 0.0f, 0x1.dc95b2p-55f, 0.0f, 0x1.bda932p-104f, 0.0f,
     0x1.938b9ep-39f, 0.0f, 0x1.267fecp-82f, 0.0f, 0x1.a06e26p-114f, 0.0f,
     0x1.1fefaap-105f, 0.0f, 0x1.7595b6p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f02acp-18f,
     0x1.967ddp-70f, 0.0f, 0x1.663674p-10f, 0x1.641b22p-24f, 0.0f, 0x1.f7911ap-26f,
     0x1.4a0f5p-3f, 0.0f, 0x1.81048ep-86f, 0x1.100fb6p-61f, 0.0f, 0x1.3b61a8p-108f,
     0.0f, 0.0f, 0x1.7f44a6p-70f, 0x1.09b5cap-29f, 0x1.644ddp-89f, 0.0f, 0.0f,
     0x1.b5185ep-100f, 0.0f, 0.0f, 0.0f, 0x1.aa953ap-27f, 0.0f, 0.0f, 0x1.6ec2f2p-74f,
     0x1.b993b4p-80f, 0x1.812434p-54f, 0x1.54d07ep-37f, 0.0f, 0x1.7ea3cap-17f, 0.0f,
     0x1.1ef734p-23f, 0.0f, 0x1.c63142p-37f, 0.0f, 0.0f, 0x1.11402cp-53f,
     0x1.73c8fp-13f
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
            float tmp3;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp4;
            int32_t tmp5;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = external_bench_wrapper_input_table_arg2[i];
            tmp3 = Sleef_fmaf1_purecfma(tmp0, tmp1, tmp2);
            external_bench_wrapper_output_table[i] = tmp3;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp3);
            carg2 = _mm_add_ss(carg, carg1);
            tmp4 = _mm_cvtss_f32(carg2);
            bench_acc = tmp4;
            tmp5 = i + INT32_C(1);
            i = tmp5;
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
    printf("Sleef_fmaf1_purecfma %"PRIi64" elts over [[0;1], [0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fmaf1_purecfma bench acc %a\n", global_bench_acc);
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
