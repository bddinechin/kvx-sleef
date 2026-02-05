/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundf4_avx2128.c --function Sleef_finz_roundf4_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.83b166p-44f, 0x1.5a0ba4p-104f, 0x1.f0fceep-35f, 0x1.8f896ep-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ebb7ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9abd4p-13f,
     0x1.4baec4p-65f, 0x1.48478ap-58f, 0x1.5e0bbcp-71f, 0.0f, 0x1.684978p-67f, 0.0f,
     0.0f, 0x1.99f4aap-105f, 0.0f, 0.0f, 0.0f, 0x1.61eee8p-120f, 0x1.a715aap-123f,
     0x1.616f28p-105f, 0.0f, 0.0f, 0x1.3d1d94p-21f, 0x1.8fb752p-103f, 0.0f,
     0x1.6c94acp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01d46ep-3f,
     0x1.4e59a2p-10f, 0x1.d8f122p-78f, 0.0f, 0.0f, 0.0f, 0x1.fd9a5p-2f, 0.0f, 0.0f,
     0.0f, 0x1.ba1344p-101f, 0x1.234e54p-38f, 0x1.edb3b6p-62f, 0.0f, 0.0f,
     0x1.463764p-103f, 0x1.357f0ap-37f, 0.0f, 0.0f, 0.0f, 0x1.7a6f68p-87f,
     0x1.21badcp-73f, 0x1.46b164p-105f, 0.0f, 0x1.f9e0e2p-73f, 0x1.1adc2ep-125f,
     0x1.9ec3f8p-20f, 0x1.42f83p-99f, 0x1.3713bcp-94f, 0.0f, 0x1.a432e8p-11f,
     0x1.83cfap-41f, 0.0f, 0.0f, 0x1.11ede8p-78f, 0.0f, 0.0f, 0.0f, 0x1.837dp-65f,
     0x1.354fcp-92f, 0x1.bf2e0ap-29f, 0.0f, 0.0f, 0x1.2c28e8p-29f, 0.0f, 0.0f,
     0x1.adc92cp-17f, 0x1.3a5712p-31f, 0.0f, 0x1.88d754p-41f, 0x1.a0146p-2f, 0.0f,
     0x1.7a9b8cp-123f, 0.0f, 0x1.1852f2p-122f, 0x1.59768p-96f, 0.0f, 0.0f,
     0x1.b08a04p-37f, 0x1.5f77cep-40f, 0.0f, 0x1.41f29ap-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.507898p-4f, 0.0f, 0.0f, 0.0f, 0x1.211174p-67f, 0.0f, 0.0f, 0x1p0f,
     0x1.719e98p-33f, 0.0f, 0x1.208982p-114f, 0x1.bd449ap-3f, 0.0f, 0.0f,
     0x1.5245a8p-42f, 0x1.9af79ap-24f, 0x1.7869dcp-12f, 0.0f, 0x1.b8a77cp-58f,
     0x1.ad2902p-66f, 0x1.e2f21p-10f, 0x1.8c3248p-40f, 0.0f, 0x1.7b6486p-75f,
     0x1.277e0ep-42f, 0x1.a0c20cp-28f, 0x1.5a0b08p-100f, 0x1.4b96bep-99f, 0.0f,
     0x1.3a48dap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.315b76p-1f, 0x1.104f0cp-43f, 0.0f,
     0.0f, 0x1.bee2dap-84f, 0x1.f95f66p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00b482p-59f, 0.0f, 0x1.ac9d4ep-8f, 0.0f, 0x1.08f772p-1f, 0x1.161ce6p-15f,
     0.0f, 0x1.b31fd8p-72f, 0.0f, 0x1.1e4cd2p-33f, 0x1.6feb48p-22f, 0x1.dd179ap-108f,
     0x1.854a9ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a6ab8p-35f, 0.0f, 0.0f,
     0x1p0f, 0x1.db9fap-43f, 0x1p0f, 0x1.e19266p-49f, 0x1.4157ep-52f, 0.0f,
     0x1.840d5p-108f, 0x1.df19e6p-87f, 0.0f, 0x1.da07dcp-75f, 0x1.4521p-116f,
     0x1.416be4p-9f, 0.0f, 0x1.aca19ep-26f, 0x1.77af36p-118f, 0x1.012a68p-65f, 0.0f,
     0.0f, 0x1.4b22b6p-106f, 0.0f, 0x1.729262p-34f, 0x1.da1948p-119f, 0x1.6d92c8p-46f,
     0.0f, 0x1.97955ap-81f, 0.0f, 0x1.81888ap-100f, 0x1.faa9f6p-124f,
     0x1.79abf2p-101f, 0.0f, 0x1.4eb43p-12f, 0x1.6a4e6ep-27f, 0.0f, 0x1.7884d6p-12f,
     0x1.1ea6b6p-106f, 0.0f, 0x1.f713b6p-49f, 0.0f, 0.0f, 0.0f, 0x1.830e24p-35f,
     0x1.2780cp-20f, 0.0f, 0.0f, 0x1.21a0cap-14f, 0x1.2a8a7ap-66f, 0x1.dd3d3ep-113f,
     0x1.a18c54p-62f, 0.0f, 0x1.faa37cp-57f, 0x1.8f7808p-87f, 0.0f, 0x1.949a14p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c6f46p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3debp-18f, 0x1.840d3cp-88f, 0.0f, 0x1.548418p-19f, 0.0f, 0x1.a6a978p-33f,
     0x1.0b2146p-74f, 0x1.40678ap-29f, 0.0f, 0.0f, 0.0f, 0x1.03f866p-73f, 0.0f, 0.0f,
     0.0f, 0x1.ed538ep-16f, 0x1.8603a4p-29f, 0.0f, 0x1.c1d21p-39f, 0x1.5c19a6p-88f,
     0x1.8611fp-44f, 0.0f, 0x1.81ca9cp-94f, 0.0f, 0x1.ba434cp-96f, 0.0f,
     0x1.ebee84p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70053ep-106f,
     0x1.5cc0a2p-116f, 0x1.28d322p-92f, 0.0f, 0.0f, 0x1.03f0ep-77f, 0x1.2e1dcep-16f,
     0.0f, 0.0f, 0x1.05a174p-99f, 0.0f, 0.0f, 0.0f, 0x1.2637cp-121f, 0.0f, 0x1p0f,
     0x1.61dd46p-108f, 0x1.3d4dc2p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a8188p-74f, 0.0f, 0x1.a14e92p-123f, 0x1.3f240ap-103f,
     0x1.32318ap-115f, 0x1.5b636cp-23f, 0x1.c75036p-29f, 0.0f, 0.0f, 0.0f,
     0x1.5c07fap-59f, 0x1.2eba1p-45f, 0x1.888f88p-17f, 0.0f, 0x1.94981ep-26f,
     0x1.6f3068p-106f, 0x1.4c0198p-52f, 0x1.7ce5ap-64f, 0.0f, 0x1.7b9198p-75f,
     0x1.e1cd1ep-126f, 0x1.8c798cp-118f, 0.0f, 0.0f, 0x1.ea3af2p-27f, 0.0f,
     0x1.eb6a1ep-109f, 0x1.c83afp-21f, 0.0f, 0.0f, 0x1.819ea8p-28f, 0x1.46fea8p-92f,
     0.0f, 0x1.91c3b4p-96f, 0.0f, 0x1.7fc706p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8bf18p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee06p-8f, 0.0f, 0x1.db4364p-62f,
     0x1.71f3e4p-4f, 0x1.7eeb98p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a8a06p-83f, 0.0f,
     0x1.d6cff4p-59f, 0x1.be3776p-107f, 0.0f, 0x1.aec086p-17f, 0x1.08fdb8p-36f,
     0x1.4a6926p-47f, 0.0f, 0x1.925b76p-105f, 0.0f, 0.0f, 0.0f, 0x1.ac190ap-38f,
     0x1.cec91p-36f, 0x1.5d20acp-80f, 0x1.ec0c82p-14f, 0.0f, 0.0f, 0x1.5c96bep-126f,
     0.0f, 0.0f, 0x1.fc66ap-92f, 0.0f, 0.0f, 0.0f, 0x1.e77c04p-81f, 0x1.a4dfa8p-112f,
     0x1.895bd4p-83f, 0x1.095b2cp-101f, 0.0f, 0x1.ce59c6p-107f, 0x1.68a788p-42f, 0.0f,
     0x1.98227ap-50f, 0x1.3d354cp-99f, 0.0f, 0x1.5fcdcp-18f, 0x1.fadaeap-35f,
     0x1.05071ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaba4ap-51f, 0.0f, 0.0f,
     0x1.3e3bd6p-34f, 0.0f, 0x1.3f5becp-38f, 0x1.e90c64p-107f, 0.0f, 0.0f, 0.0f,
     0x1.b71264p-125f, 0.0f, 0x1.edfbf6p-104f, 0x1.2a451ap-126f, 0x1.086a3ep-57f,
     0x1.4052b2p-93f, 0x1.1cae36p-19f, 0.0f, 0x1.c3417ap-124f, 0.0f, 0x1.832f6p-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.af117ap-87f, 0.0f, 0x1.aaf92ep-119f, 0.0f,
     0x1.40a8e8p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.931a6ep-87f, 0x1.5d6488p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.156f76p-74f, 0.0f, 0.0f, 0x1.5cc994p-74f,
     0x1.64b1cap-1f, 0.0f, 0x1.b71f82p-20f, 0.0f, 0.0f, 0.0f, 0x1.09546cp-84f,
     0x1.292914p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.729e4ep-46f, 0x1.b7355cp-36f,
     0x1.9fee68p-122f, 0x1.ac07e8p-14f, 0x1.ac35ccp-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.252fb8p-112f, 0x1.eebc9ap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c1ffep-114f,
     0x1.f2dbd6p-9f, 0x1.eca882p-61f, 0x1.28de58p-55f, 0x1.880f64p-42f, 0.0f,
     0x1.49b2aap-63f, 0.0f, 0x1.71404ep-42f, 0x1.0a44aap-54f, 0x1.a4737ap-63f,
     0x1.466a2ap-76f, 0.0f, 0x1.e88246p-43f, 0.0f, 0x1.3b763ep-30f, 0x1.7b101ap-61f,
     0x1.c5e89ep-45f, 0.0f, 0x1.4e115cp-123f, 0.0f, 0x1.408588p-36f, 0.0f,
     0x1.b257b6p-109f, 0x1.ffcfp-115f, 0.0f, 0.0f, 0.0f, 0x1.ebc8fp-30f,
     0x1.7b945ap-31f, 0.0f, 0x1.04e246p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.896d2cp-123f,
     0x1.0ff66p-7f, 0x1.e59f26p-39f, 0x1.741678p-2f, 0x1.77b81p-87f, 0x1.4dc67p-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca412p-36f, 0.0f, 0.0f, 0.0f, 0x1.84358cp-121f,
     0x1.c35d36p-31f, 0x1.0c4a64p-26f, 0x1.7b6486p-11f, 0x1.1661bap-115f,
     0x1.f49beep-61f, 0x1.836e8ap-18f, 0x1.9f67acp-69f, 0.0f, 0x1.68bd06p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1095dap-65f, 0.0f, 0x1.1880eap-59f, 0x1.7d9958p-100f,
     0x1.0a5194p-79f, 0.0f, 0.0f, 0.0f, 0x1.d6cd54p-68f, 0x1.1bf252p-70f, 0.0f,
     0x1.dd3a7p-106f, 0x1.2b85aep-34f, 0x1.164bcp-98f, 0x1.7b4644p-104f,
     0x1.d76f5p-52f, 0.0f, 0x1.89afa8p-111f, 0x1.ebea08p-103f, 0.0f, 0.0f, 0.0f,
     0x1.6fedb2p-44f, 0x1.8b8ff2p-81f, 0.0f, 0.0f, 0x1.8c679cp-28f, 0x1.b756d4p-71f,
     0x1.51970ap-24f, 0.0f, 0.0f, 0x1.cf017ap-115f, 0x1.549186p-11f, 0x1.ab2514p-54f,
     0.0f, 0x1.46e7a8p-103f, 0.0f, 0x1.c0e4a8p-107f, 0.0f, 0x1.a79296p-18f,
     0x1.db06a4p-124f, 0x1.69b6c8p-67f, 0x1.c626acp-15f, 0x1.50e61ep-92f, 0.0f, 0.0f,
     0x1.bacbf8p-100f, 0.0f, 0.0f, 0.0f, 0x1.a2e00cp-87f, 0x1.285c1p-17f,
     0x1.32a076p-21f, 0x1.5976f2p-100f, 0.0f, 0x1.e61264p-49f, 0x1.a5a7ecp-10f, 0.0f,
     0.0f, 0x1.d12908p-93f, 0.0f, 0x1.26e19ap-93f, 0x1.8706bcp-83f, 0x1.eab97ep-41f,
     0x1.6b3664p-65f, 0.0f, 0.0f, 0x1.158368p-62f, 0.0f, 0.0f, 0.0f, 0x1.0fec66p-96f,
     0x1.b28ee2p-101f, 0.0f, 0.0f, 0x1.96638cp-111f, 0.0f, 0x1.93daa2p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0d849ep-12f, 0x1.3535fcp-34f, 0.0f, 0.0f, 0x1.210d18p-117f,
     0x1.f640f4p-31f, 0.0f, 0x1.bf6f66p-121f, 0x1.25c9fp-44f, 0x1.039304p-42f,
     0x1.ffcb5ep-122f, 0.0f, 0.0f, 0x1.0d822ap-100f, 0x1.cf018ap-45f, 0x1.03fe62p-46f,
     0x1.67e696p-41f, 0.0f, 0.0f, 0.0f, 0x1.99e2aep-26f, 0x1.a7caap-58f,
     0x1.54d1f6p-118f, 0x1.627636p-10f, 0.0f, 0x1.055988p-52f, 0.0f, 0x1.ad5b86p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce9cf8p-47f, 0x1.7ef0ccp-63f, 0x1.11bb32p-12f,
     0x1.1d84ecp-99f, 0.0f, 0.0f, 0.0f, 0x1.ea090ap-64f, 0x1.ef3b3p-78f, 0.0f,
     0x1.98db4cp-105f, 0x1.ce936cp-21f, 0.0f, 0x1.5cac86p-4f, 0x1.83e1fp-12f, 0.0f,
     0x1.885da8p-1f, 0x1.f1935ep-17f, 0x1.085216p-76f, 0x1.fb7caap-35f,
     0x1.fc4a9ep-6f, 0.0f, 0x1.3c7e5ep-53f, 0.0f, 0x1.27c24ap-93f, 0x1.f953c6p-88f,
     0.0f, 0x1.4f3e26p-38f, 0.0f, 0x1.511d48p-11f, 0.0f, 0.0f, 0x1.8c3506p-63f,
     0x1.0af04ep-18f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c31bp-82f,
     0.0f, 0.0f, 0x1.0e1854p-61f, 0x1.7aa56ap-124f, 0.0f, 0.0f, 0x1.62b11p-93f, 0.0f,
     0x1.262576p-8f, 0.0f, 0.0f, 0.0f, 0x1.418c48p-103f, 0x1.bd4bfap-81f, 0.0f,
     0x1.bebf64p-3f, 0x1.aa8ca2p-111f, 0x1.bac4d8p-7f, 0x1.28177p-111f,
     0x1.afa614p-91f, 0.0f, 0x1.7de8d8p-49f, 0.0f, 0x1.eacde2p-110f, 0.0f,
     0x1.9953a2p-91f, 0x1.08425ep-3f, 0x1.195b88p-119f, 0x1.08a686p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f497c2p-31f, 0.0f, 0x1.f406aep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4d62e8p-22f, 0x1.6923c6p-68f, 0x1.cbf04ap-96f,
     0x1.734adep-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a68e26p-16f, 0.0f, 0x1.48412ap-118f,
     0.0f, 0x1.0e29e8p-86f, 0.0f, 0.0f, 0.0f, 0x1.7b16d6p-48f, 0x1.98891cp-84f,
     0x1.e6b6aap-93f, 0x1.abe5b8p-33f, 0x1.55fab4p-6f, 0.0f, 0x1.8c02f6p-115f, 0.0f,
     0x1.9df2bap-40f, 0x1.b5dd7ep-41f, 0x1.de90cep-122f, 0.0f, 0x1.d20298p-77f, 0.0f,
     0x1.0578aep-119f, 0x1.a3b8e4p-23f, 0.0f, 0.0f, 0x1.b68f2ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.c2404ep-84f, 0.0f, 0x1.8b2adep-19f, 0.0f, 0x1.c78c74p-34f, 0.0f,
     0x1.7650a4p-77f, 0x1.3a32dcp-29f, 0x1.9bf5bp-11f, 0x1.b6fc54p-100f, 0.0f, 0.0f,
     0x1.884bcp-122f, 0.0f, 0x1.d1362p-27f, 0x1.a25cd2p-102f, 0x1.f4cep-61f,
     0x1.fe1622p-36f, 0.0f, 0x1.2de132p-122f, 0.0f, 0x1.17173ep-110f, 0x1.e8fa98p-1f,
     0.0f, 0.0f, 0x1.e32288p-111f, 0x1.0497c2p-73f, 0.0f, 0x1.f9918p-111f,
     0x1.3de12cp-23f, 0x1.304e0ap-65f, 0x1.a797dcp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.59c202p-38f, 0.0f, 0x1.38c714p-64f, 0x1.0a088p-60f,
     0x1.a05582p-14f, 0x1.08702p-23f, 0x1.8c78a4p-35f, 0x1.fa3792p-8f,
     0x1.88b84ap-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68381ap-67f, 0x1.2ad178p-31f,
     0x1.01cfe8p-109f, 0.0f, 0x1.598a6p-24f, 0x1.d94634p-94f, 0x1.cc949ap-125f, 0.0f,
     0.0f, 0x1.09ff5p-111f, 0x1.a7b766p-22f, 0x1.ae70d8p-45f, 0.0f, 0.0f, 0.0f,
     0x1.1eb5b4p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7699bep-90f,
     0x1.134da4p-31f, 0.0f, 0.0f, 0x1.acfde2p-110f, 0.0f, 0.0f, 0.0f,
     0x1.f77f32p-116f, 0x1.6fcf28p-57f, 0x1.8341dap-5f, 0.0f, 0x1.0e9b7p-59f, 0.0f,
     0.0f, 0.0f, 0x1.6d22d4p-33f, 0x1.6cef8p-71f, 0.0f, 0x1.d54134p-91f, 0.0f,
     0x1.2fb4bcp-75f, 0.0f, 0.0f, 0x1.b0c04p-67f, 0x1.0b7fd4p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a06cep-22f, 0x1.cd381ep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.48f5a8p-111f, 0.0f, 0x1.265374p-123f, 0.0f, 0.0f, 0x1.ea0164p-88f,
     0x1.4df216p-109f, 0x1.533ecap-97f, 0.0f, 0x1.65670cp-122f, 0.0f,
     0x1.bbd7bap-109f, 0x1p0f, 0.0f, 0x1.db93acp-3f, 0x1.47ecacp-80f, 0.0f,
     0x1.b275dcp-63f, 0.0f, 0x1.add618p-60f, 0.0f, 0.0f, 0.0f, 0x1.062f34p-35f,
     0x1.526bfap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e588d2p-4f, 0.0f,
     0x1.f50ff6p-102f, 0.0f, 0.0f, 0x1.fb876ep-32f, 0x1.46a514p-103f, 0.0f,
     0x1.3fbe76p-75f, 0x1.603f7ep-103f, 0.0f, 0.0f, 0x1.36ee7p-76f, 0x1.28247p-51f,
     0x1.68210ep-78f, 0x1.b56a42p-53f, 0.0f, 0x1.afb90ap-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.909382p-53f, 0.0f, 0x1.ae6462p-94f, 0.0f, 0x1.3c8c4p-101f, 0.0f,
     0x1.6fe836p-2f, 0.0f, 0x1.4e5ad2p-16f, 0x1.c95b8ap-57f, 0x1.a8e56ap-119f,
     0x1.9f54b4p-41f, 0.0f, 0x1.bf583ep-103f, 0x1.57e008p-78f, 0x1p0f, 0.0f,
     0x1.ff8d4ap-52f, 0x1.57facep-26f, 0.0f, 0x1.e74d28p-109f, 0x1.c3f146p-112f,
     0x1.e6110ep-42f, 0.0f, 0.0f, 0x1.c5d576p-88f, 0.0f, 0.0f, 0x1.63f70ep-44f,
     0x1.96cec4p-41f, 0.0f, 0x1.5b3496p-52f, 0.0f, 0.0f, 0.0f, 0x1.ded3bap-86f, 0.0f,
     0x1.8adb0ap-25f, 0x1.2b083cp-39f, 0x1.53de9cp-84f, 0x1.6496ecp-70f,
     0x1.06955cp-42f, 0x1.1cc512p-10f, 0.0f, 0x1.9ae52ep-3f, 0.0f, 0x1.87486cp-98f,
     0x1p0f, 0.0f, 0x1.ca67d8p-21f, 0x1.ae082ap-6f, 0.0f, 0x1.2e21eep-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d9e2b4p-41f, 0x1.34a9a8p-52f, 0.0f, 0x1.716cecp-55f,
     0x1.afed42p-28f, 0x1.5ea74ap-4f, 0.0f, 0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_roundf4_avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_roundf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_roundf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
