/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erff4_u10kvx.c --function Sleef_erff4_u10kvx --headers \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e93f4cp-46f, 0x1.3ab14ap-11f, 0.0f, 0x1.84c234p-25f,
     0x1.9bf3e6p-3f, 0.0f, 0.0f, 0.0f, 0x1.d40574p-78f, 0x1.cd61dp-59f,
     0x1.15e18ep-70f, 0.0f, 0x1.949688p-124f, 0x1.7a6d4p-26f, 0x1.6079eap-66f, 0.0f,
     0x1.b49adap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fbdd8p-20f, 0x1.57704ep-56f,
     0x1.cb82ep-8f, 0x1.f08adap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d6318p-88f, 0.0f,
     0x1.7c043p-1f, 0x1.bccc06p-27f, 0.0f, 0x1.346e68p-45f, 0.0f, 0.0f,
     0x1.249cccp-37f, 0.0f, 0x1.3e8b2ep-17f, 0x1.a11728p-48f, 0x1.ad541ep-23f, 0.0f,
     0.0f, 0x1.7f447p-79f, 0.0f, 0x1.210322p-98f, 0.0f, 0.0f, 0x1.0cee5p-92f,
     0x1.94a0fep-100f, 0.0f, 0x1.e7bd9cp-88f, 0.0f, 0x1.7f2b5p-1f, 0.0f,
     0x1.366f7p-48f, 0x1.c9952p-5f, 0x1.c41dacp-33f, 0x1.695ecep-106f,
     0x1.c96f64p-11f, 0.0f, 0.0f, 0x1.6aa874p-90f, 0.0f, 0x1.ca5744p-27f,
     0x1.4c71d2p-41f, 0x1.c2311cp-106f, 0.0f, 0.0f, 0.0f, 0x1.646652p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.90dcb8p-113f, 0x1.b6b082p-48f, 0.0f, 0.0f, 0.0f,
     0x1.7c3fd8p-19f, 0x1.d37154p-54f, 0x1.a352ecp-83f, 0.0f, 0x1.419874p-11f, 0.0f,
     0.0f, 0x1.75a7d4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09d49cp-56f,
     0x1.412c0ap-32f, 0.0f, 0x1.226a84p-109f, 0x1.a04d2cp-6f, 0x1.189e14p-7f,
     0x1.e5a4f4p-35f, 0x1.19156ap-12f, 0.0f, 0.0f, 0x1.956efp-48f, 0.0f, 0.0f, 0.0f,
     0x1.4e425ap-126f, 0.0f, 0.0f, 0.0f, 0x1.11664ap-70f, 0.0f, 0.0f, 0x1.be05b6p-83f,
     0.0f, 0x1.6e81b4p-55f, 0.0f, 0.0f, 0.0f, 0x1.b9c11ep-49f, 0x1.572394p-53f,
     0x1.ae93fcp-61f, 0.0f, 0.0f, 0x1.4e8a2ap-121f, 0x1.2969bcp-111f, 0.0f,
     0x1.26152cp-124f, 0.0f, 0.0f, 0x1.987f7ep-90f, 0x1.b7e9f4p-76f, 0x1.3060bep-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d0b96p-76f, 0.0f, 0.0f, 0.0f,
     0x1.4db17ap-3f, 0x1.5f0c2ap-78f, 0x1.6684dcp-2f, 0x1.c69324p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.333136p-56f, 0.0f, 0x1.f54bd2p-93f, 0.0f, 0x1.f64a18p-57f,
     0x1.10aaaep-78f, 0.0f, 0x1.92f80ep-20f, 0.0f, 0.0f, 0.0f, 0x1.d4f08p-84f,
     0x1.7bc42ep-48f, 0x1.cfa8f6p-17f, 0.0f, 0.0f, 0x1.79235p-19f, 0.0f, 0.0f,
     0x1.26c8bp-44f, 0.0f, 0.0f, 0x1.3e14cep-107f, 0x1.a0867cp-20f, 0.0f, 0.0f, 0.0f,
     0x1.71e2c6p-71f, 0.0f, 0.0f, 0x1.80a1e2p-102f, 0x1p0f, 0x1.8ddfa4p-86f,
     0x1.aa1f64p-87f, 0x1.45daep-57f, 0x1.de25bcp-22f, 0x1.13a4f2p-72f, 0.0f,
     0x1.c9a5b6p-55f, 0x1.12c264p-1f, 0.0f, 0x1.9c67a4p-37f, 0.0f, 0.0f, 0.0f,
     0x1.8394b6p-11f, 0.0f, 0.0f, 0x1.94c7d6p-72f, 0.0f, 0.0f, 0.0f, 0x1.0a9c26p-64f,
     0.0f, 0x1.99e26ep-85f, 0.0f, 0.0f, 0x1.7c0b8p-100f, 0x1.793abep-1f, 0x1p0f, 0.0f,
     0.0f, 0x1.7f2162p-91f, 0x1.998ed8p-9f, 0x1.b9dccp-115f, 0.0f, 0x1.17e12ap-63f,
     0.0f, 0x1.269c56p-125f, 0.0f, 0x1.30294cp-84f, 0x1.d38654p-66f, 0.0f,
     0x1.38a016p-36f, 0x1.3c5196p-100f, 0x1.5ecaaap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f83bcp-80f, 0x1.ae1d34p-40f, 0.0f, 0x1.f336bcp-61f, 0.0f,
     0x1.241b12p-65f, 0x1.1c853p-7f, 0x1.a3780cp-74f, 0x1.7da65cp-99f, 0.0f, 0.0f,
     0x1.c78ffep-59f, 0x1.02d4ap-108f, 0.0f, 0.0f, 0.0f, 0x1.568282p-76f,
     0x1.2d1b4ap-121f, 0x1.be773ap-22f, 0.0f, 0.0f, 0.0f, 0x1.e7fdccp-112f,
     0x1.c5b646p-35f, 0.0f, 0.0f, 0.0f, 0x1.aaa098p-52f, 0.0f, 0.0f, 0x1.f11904p-122f,
     0.0f, 0.0f, 0x1.bb58f8p-44f, 0.0f, 0.0f, 0.0f, 0x1.c36834p-95f, 0x1.6a5fa6p-81f,
     0x1.e6706ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.046d12p-87f, 0.0f, 0.0f, 0.0f,
     0x1.71c618p-71f, 0x1.cbee6ep-52f, 0.0f, 0.0f, 0x1.63c4f8p-78f, 0x1.73a7e8p-34f,
     0.0f, 0x1.d2a67ap-100f, 0x1.522056p-10f, 0x1.d45f66p-89f, 0x1.91088ap-66f, 0.0f,
     0x1.8535c8p-28f, 0x1.11ca4ap-84f, 0.0f, 0x1.9c9d12p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c033ap-51f, 0x1.18994ep-67f, 0.0f, 0x1.634cdp-70f, 0x1.13ab7p-2f,
     0x1.f36108p-42f, 0x1.26b474p-42f, 0.0f, 0.0f, 0.0f, 0x1.d3beaep-60f, 0.0f, 0.0f,
     0x1.c93de4p-101f, 0.0f, 0.0f, 0x1.03ce3ep-28f, 0.0f, 0x1.8d7708p-16f,
     0x1.bd14dep-88f, 0.0f, 0x1.47055ep-50f, 0x1.f705p-71f, 0x1.55034cp-11f, 0.0f,
     0x1.0a3986p-77f, 0.0f, 0.0f, 0.0f, 0x1.6c621cp-96f, 0.0f, 0x1.5440b6p-49f,
     0x1.ce3ae2p-15f, 0.0f, 0x1.9e5b08p-108f, 0x1.a33ee8p-100f, 0x1.df485ep-100f,
     0x1.85dfbap-86f, 0.0f, 0x1.6c5412p-25f, 0x1.97190ap-81f, 0.0f, 0.0f, 0.0f,
     0x1.f7827p-71f, 0.0f, 0x1.c781aep-92f, 0x1.bdc42cp-81f, 0x1.a39fd8p-67f,
     0x1.f195e4p-75f, 0.0f, 0x1.19a36ep-31f, 0.0f, 0.0f, 0x1.2086aep-68f,
     0x1.ebb4fep-67f, 0x1.12dc96p-47f, 0.0f, 0x1.4d1666p-51f, 0x1.d01396p-109f,
     0x1.dfccbap-69f, 0.0f, 0.0f, 0.0f, 0x1.5f6346p-54f, 0x1.b72a3ap-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa75d8p-1f, 0.0f, 0.0f, 0.0f, 0x1.877ae8p-3f, 0.0f,
     0x1.e9c702p-84f, 0x1p0f, 0.0f, 0x1.0f447ep-114f, 0.0f, 0.0f, 0.0f,
     0x1.951ef6p-55f, 0.0f, 0.0f, 0.0f, 0x1.01ca88p-102f, 0.0f, 0x1.97acacp-59f, 0.0f,
     0.0f, 0x1.7505a4p-123f, 0.0f, 0.0f, 0x1.105da8p-17f, 0x1.0845bap-123f, 0.0f,
     0x1.94e51p-81f, 0x1.52ba7p-121f, 0.0f, 0x1.0c749ep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac698ap-53f, 0x1.d42ce6p-34f, 0x1.978e84p-45f, 0.0f, 0x1.2c2296p-61f, 0.0f,
     0x1.880f08p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.213e2cp-13f, 0.0f, 0x1.8aa496p-119f,
     0x1.7fccep-26f, 0x1.693b88p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41ebdcp-100f,
     0.0f, 0x1.252518p-114f, 0.0f, 0x1.56d252p-78f, 0x1.5bdfaap-46f, 0.0f,
     0x1.e46dc2p-118f, 0x1.74b732p-70f, 0x1.3f613cp-35f, 0x1.69a83ap-101f,
     0x1.2f1bcap-66f, 0x1.515a88p-65f, 0x1.47351ap-112f, 0.0f, 0x1.bc339p-92f,
     0x1.092396p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.643b54p-99f,
     0x1.a5ba86p-26f, 0x1.8a218ap-79f, 0x1.d1afccp-68f, 0x1.a2c858p-58f,
     0x1.a3261cp-16f, 0x1.98077p-88f, 0.0f, 0x1.03e008p-10f, 0x1.4eb3ecp-99f, 0.0f,
     0x1.a23c2ap-69f, 0.0f, 0x1.0ca82ep-65f, 0.0f, 0x1.04c82ap-85f, 0.0f, 0.0f, 0.0f,
     0x1.78d68ep-69f, 0.0f, 0x1.b573bcp-99f, 0x1.874238p-24f, 0x1.270126p-73f, 0.0f,
     0x1.9164p-75f, 0x1.b24fd4p-26f, 0.0f, 0x1.9c34f2p-33f, 0x1.d4bc4p-90f,
     0x1.ec4e28p-108f, 0.0f, 0x1.dfba76p-115f, 0x1.acc624p-24f, 0.0f, 0x1.75ffbap-10f,
     0x1.fff1f6p-3f, 0x1.237852p-30f, 0.0f, 0x1.af906ap-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2c38dp-125f, 0.0f, 0x1.9efe28p-68f, 0.0f, 0x1.38b1b8p-9f, 0.0f,
     0x1.389a42p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c774cep-32f, 0.0f, 0.0f,
     0x1.33f966p-70f, 0x1.5e4cfep-87f, 0x1.46e828p-88f, 0.0f, 0x1.e4c2bcp-106f, 0.0f,
     0x1.4faa08p-22f, 0.0f, 0x1.0e3f4ap-61f, 0.0f, 0x1.36add4p-38f, 0x1.cf6f8p-31f,
     0x1.040498p-115f, 0.0f, 0.0f, 0x1.d89a26p-30f, 0x1.762a9cp-35f, 0.0f, 0.0f,
     0x1.0ee356p-116f, 0x1.31a1bcp-2f, 0x1.89e9ccp-16f, 0x1.20048ep-9f, 0.0f,
     0x1.20f05p-37f, 0x1.799d6p-23f, 0x1.fb2cep-41f, 0x1.c1f17cp-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7e969ap-83f, 0x1.43887cp-108f, 0x1.660448p-90f, 0.0f,
     0x1.895cdap-125f, 0.0f, 0x1.6b92ecp-54f, 0.0f, 0x1.6706c2p-8f, 0x1.4c87fep-93f,
     0x1.425994p-59f, 0x1.ecb5eap-87f, 0.0f, 0x1.d92482p-74f, 0.0f, 0.0f,
     0x1.663d0cp-30f, 0x1.46fdap-86f, 0.0f, 0.0f, 0x1.807c22p-54f, 0x1.95ed4cp-122f,
     0.0f, 0.0f, 0.0f, 0x1.99c9ep-61f, 0.0f, 0.0f, 0.0f, 0x1.d14586p-51f, 0.0f,
     0x1.bc7594p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70c428p-101f, 0x1.4c02c8p-34f,
     0x1.e8f8c8p-7f, 0.0f, 0x1.f10a06p-21f, 0x1.938544p-105f, 0x1p0f, 0x1.f83f38p-4f,
     0x1.2b3bfap-68f, 0x1.3eb482p-67f, 0x1.909802p-10f, 0.0f, 0x1.ff8c9cp-108f,
     0x1.cd06f4p-121f, 0.0f, 0.0f, 0.0f, 0x1.cb572ep-92f, 0x1.10fc4cp-86f,
     0x1.ff7674p-112f, 0.0f, 0x1.54f53cp-92f, 0x1.66640ap-5f, 0x1.7a4714p-19f, 0.0f,
     0.0f, 0x1.a56b04p-11f, 0.0f, 0x1.e4b3c6p-88f, 0.0f, 0x1.c6fe36p-78f,
     0x1.827998p-118f, 0x1.e43dc4p-37f, 0.0f, 0.0f, 0x1.a6e97cp-47f, 0x1.32b4aep-90f,
     0.0f, 0.0f, 0x1.3c444ep-89f, 0x1.cbf63ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7679dap-32f, 0x1.3ca788p-45f, 0x1.00593p-49f, 0x1.b21898p-86f,
     0x1.0b1f4ep-60f, 0x1.221b0ep-126f, 0x1.62a412p-71f, 0.0f, 0x1.24f502p-77f, 0.0f,
     0.0f, 0x1.b0e22p-13f, 0.0f, 0.0f, 0x1.b42bb4p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7461ep-60f, 0x1.34d17p-116f, 0.0f, 0.0f, 0.0f, 0x1.086886p-4f, 0.0f,
     0x1.851d82p-7f, 0x1.d497f6p-30f, 0x1.1332f4p-125f, 0x1.3c1feep-112f,
     0x1.031da2p-7f, 0.0f, 0.0f, 0.0f, 0x1.170084p-89f, 0.0f, 0.0f, 0x1.c0a106p-53f,
     0.0f, 0.0f, 0.0f, 0x1.029e9cp-12f, 0.0f, 0x1.6337dp-112f, 0.0f, 0.0f,
     0x1.38238ep-79f, 0.0f, 0x1.0fa2e8p-60f, 0x1.851a46p-74f, 0.0f, 0x1.4f39ecp-94f,
     0x1.bf3018p-100f, 0x1.a6c38cp-120f, 0.0f, 0.0f, 0x1.6197a8p-33f,
     0x1.4e437ep-100f, 0.0f, 0.0f, 0x1.1ee904p-57f, 0.0f, 0.0f, 0.0f, 0x1.a9fc2p-57f,
     0.0f, 0.0f, 0x1.513bf4p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad5ebep-41f,
     0x1.c2c25p-28f, 0x1.c3f1cap-1f, 0.0f, 0.0f, 0x1.f70cep-2f, 0x1.bb5162p-48f, 0.0f,
     0x1.b797e8p-21f, 0x1.8355acp-122f, 0.0f, 0x1.77a6b4p-119f, 0x1.efc98ep-109f,
     0.0f, 0.0f, 0x1.f69b36p-69f, 0x1.4c4d2p-67f, 0x1.80364cp-22f, 0x1.75510ep-73f,
     0x1.bcd9a8p-89f, 0x1.484dc4p-22f, 0.0f, 0x1.6d4f5ap-19f, 0.0f, 0x1.cf1c88p-87f,
     0.0f, 0x1.fd8a64p-125f, 0x1.2d575ap-69f, 0.0f, 0x1.049be6p-82f, 0.0f,
     0x1.3df11ep-33f, 0x1.0fdca2p-14f, 0x1.7518b6p-9f, 0.0f, 0.0f, 0x1.1c2ebep-75f,
     0.0f, 0.0f, 0.0f, 0x1.cacb9p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c3556p-72f,
     0x1.dec1aep-28f, 0.0f, 0x1.cb58dp-92f, 0.0f, 0.0f, 0x1.f4d274p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e6a8cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.797604p-1f, 0x1.ab9a9ep-119f, 0.0f, 0x1.62d558p-101f, 0.0f, 0x1.c2d6f8p-35f,
     0.0f, 0x1.6b8e92p-15f, 0x1.be0748p-22f, 0x1.4b79eap-12f, 0x1.a4954ap-69f,
     0x1.9ecb8ap-44f, 0x1.034d2p-112f, 0.0f, 0.0f, 0x1.6c5d44p-97f, 0x1.922288p-6f,
     0x1.695b38p-78f, 0.0f, 0.0f, 0x1.a68d3cp-60f, 0x1.c7501cp-119f, 0x1.09674p-79f,
     0.0f, 0x1.32239ap-4f, 0x1.30b37ap-80f, 0.0f, 0x1.e92c1cp-11f, 0.0f,
     0x1.2d5878p-106f, 0x1.3c5feep-22f, 0.0f, 0x1.6223cap-107f, 0x1.464f76p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f141dcp-71f, 0x1.6b3514p-94f, 0.0f, 0x1.b0840ap-116f,
     0x1.9de18ap-57f, 0x1.21e1ecp-71f, 0x1.29e4f8p-42f, 0x1.92b0f2p-111f, 0.0f,
     0x1.efc716p-14f, 0x1.fc567ap-116f, 0x1.9d6e4p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88ce56p-66f, 0x1.35a0aap-90f, 0.0f, 0x1.088152p-43f, 0x1.5c49aap-81f, 0.0f,
     0.0f, 0x1.fc93dcp-8f, 0x1.44ee6cp-116f, 0x1.cb8c5ep-11f, 0x1.dcd816p-112f, 0.0f,
     0.0f, 0x1.1636a8p-84f, 0x1.0aa4a8p-53f, 0x1.08ecbp-69f, 0x1.5168f4p-124f, 0.0f,
     0x1.e9f528p-120f, 0x1.2c7308p-114f, 0x1p0f, 0.0f, 0x1.b9d55p-103f, 0.0f,
     0x1.23aa7ap-119f, 0x1.6bcc74p-58f, 0x1.0b5eb8p-59f, 0x1.581bd6p-11f,
     0x1.b37b1ap-5f, 0.0f, 0.0f, 0.0f, 0x1.b26d98p-6f, 0x1.b1cdfep-13f, 0.0f, 0.0f,
     0.0f, 0x1.ed822ap-71f, 0x1.4de99ap-43f, 0.0f, 0x1.ae9bbcp-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aeb13p-97f, 0x1.b1efdcp-67f, 0x1.78447ep-5f,
     0x1.1cc77cp-42f, 0.0f, 0.0f, 0x1.7acf08p-49f, 0.0f, 0.0f, 0x1.cd83e8p-111f, 0.0f,
     0x1.734aa4p-99f, 0.0f, 0.0f, 0.0f, 0x1.1ea452p-47f, 0x1.a0f5c4p-8f,
     0x1.c57a9cp-125f, 0.0f, 0.0f, 0x1.a3ca2p-67f, 0.0f, 0x1.aa8ea4p-87f, 0.0f,
     0x1.226d74p-61f, 0.0f, 0.0f, 0x1.969282p-13f, 0.0f, 0x1.c7556ap-28f, 0.0f, 0.0f,
     0x1.80ae04p-21f, 0x1.cc77a4p-40f, 0.0f, 0.0f, 0.0f, 0x1.db42a6p-4f, 0.0f,
     0x1.f0cb3p-80f, 0.0f, 0.0f, 0.0f, 0x1.4e659ap-106f, 0.0f, 0x1.779f66p-72f, 0.0f,
     0.0f, 0x1.c3fcc6p-30f, 0x1.eb021ep-43f, 0.0f, 0.0f, 0.0f, 0x1.0619f8p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.174f3p-70f, 0.0f, 0x1.05c144p-37f, 0.0f, 0.0f,
     0x1.fae0cap-27f, 0x1.04bc66p-67f, 0.0f, 0.0f, 0x1.7491dcp-42f, 0.0f,
     0x1.aa27f4p-70f, 0.0f, 0x1.a24432p-37f, 0.0f, 0.0f, 0.0f, 0x1.660a6ap-10f, 0.0f,
     0x1.312fb8p-36f, 0.0f, 0.0f, 0.0f, 0x1.280e7p-45f, 0.0f, 0x1.e2270ap-60f,
     0x1.b846d4p-91f, 0x1.13fd7p-121f, 0x1.8a68b2p-9f, 0x1.ace7d8p-43f, 0.0f, 0.0f,
     0x1.7dae3ap-31f, 0.0f, 0.0f, 0.0f, 0x1.1a90f2p-70f, 0.0f, 0.0f, 0x1.a0af4ep-21f,
     0x1.ff707p-118f, 0x1.cca882p-62f, 0.0f, 0.0f, 0x1.addaa4p-106f, 0.0f, 0.0f,
     0x1.f7caap-61f, 0x1.88a252p-106f, 0x1.830aecp-53f, 0.0f, 0x1.e68f82p-46f,
     0x1.43f262p-118f, 0x1.98e13cp-37f, 0.0f, 0x1.d2ef86p-75f, 0.0f, 0x1.2d3e9ep-106f,
     0x1.cec736p-85f, 0.0f, 0x1.57b0ap-8f, 0x1.55680cp-40f, 0.0f, 0x1.ecd01p-70f,
     0x1.6e51d8p-64f, 0.0f
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
            tmp1 = Sleef_erff4_u10kvx(tmp0);
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
    printf("Sleef_erff4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_erff4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
