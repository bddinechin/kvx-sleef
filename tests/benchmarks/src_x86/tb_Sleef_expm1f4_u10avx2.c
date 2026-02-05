/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1f4_u10avx2128.c --function Sleef_expm1f4_u10avx2128 \
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
     0.0f, 0x1.f501acp-14f, 0.0f, 0x1.3909f6p-47f, 0.0f, 0.0f, 0.0f, 0x1.3196fcp-77f,
     0x1.d56f96p-59f, 0x1.b5257ap-88f, 0.0f, 0.0f, 0x1.a13b6ap-113f, 0x1.3f581cp-5f,
     0.0f, 0x1.3129e4p-110f, 0.0f, 0.0f, 0x1.7004dep-25f, 0x1.cc39c8p-113f,
     0x1.877af6p-30f, 0.0f, 0x1.7a3212p-23f, 0.0f, 0x1.2d253p-116f, 0x1.571d7ap-123f,
     0x1.36fc62p-108f, 0.0f, 0.0f, 0x1.295b6cp-41f, 0x1.e05efcp-57f, 0.0f,
     0x1.1f25a4p-117f, 0.0f, 0x1.dda93cp-125f, 0x1.0b1932p-86f, 0x1.7975f2p-57f,
     0x1.15fa68p-65f, 0.0f, 0.0f, 0.0f, 0x1.d1515ap-22f, 0x1.539344p-53f, 0.0f, 0.0f,
     0.0f, 0x1.55b9bap-117f, 0x1.c5874p-1f, 0.0f, 0x1.db74e6p-85f, 0x1.1c818p-33f,
     0.0f, 0.0f, 0x1.e5ed72p-102f, 0.0f, 0x1.86a42cp-72f, 0x1.bae2e8p-104f,
     0x1.efb5b2p-96f, 0.0f, 0x1.01fd28p-72f, 0.0f, 0.0f, 0x1.45e832p-23f, 0.0f,
     0x1.1bf39cp-113f, 0.0f, 0.0f, 0.0f, 0x1.123f96p-20f, 0.0f, 0.0f, 0x1.ff721p-44f,
     0x1.ccdb2ap-106f, 0x1.889aep-92f, 0.0f, 0.0f, 0x1.ca6a96p-63f, 0x1.8a463ep-4f,
     0.0f, 0x1.25a592p-47f, 0x1.e2b572p-105f, 0x1.30a8f4p-64f, 0.0f, 0x1.eefd04p-7f,
     0.0f, 0x1.ff450ap-116f, 0x1.9933e4p-89f, 0x1.947cacp-122f, 0.0f, 0.0f, 0.0f,
     0x1.4ee1d6p-8f, 0x1.44e0b8p-111f, 0x1.7d45aep-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f6812p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a4928p-49f, 0.0f, 0.0f,
     0x1.7a7a3cp-76f, 0.0f, 0x1.6d0464p-84f, 0.0f, 0x1.0c1222p-45f, 0x1.a0d186p-81f,
     0x1.96c0fcp-20f, 0.0f, 0x1.6aa674p-34f, 0x1.301a94p-18f, 0x1.585742p-11f, 0.0f,
     0.0f, 0x1.c350c8p-103f, 0x1.af101ep-112f, 0.0f, 0x1.423006p-94f, 0x1.63be64p-26f,
     0.0f, 0x1.4bb7d8p-36f, 0x1.b1f4e8p-56f, 0.0f, 0x1.b59b42p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.be9eb6p-87f, 0x1.93bc7cp-126f, 0x1.8d86bep-125f,
     0.0f, 0.0f, 0.0f, 0x1.dde42ep-118f, 0x1.f15f42p-82f, 0x1.1925eap-47f, 0.0f,
     0x1.61ee24p-35f, 0x1.94e9f2p-126f, 0x1.4779e6p-117f, 0x1.bb57bap-108f, 0.0f,
     0x1.e68392p-10f, 0.0f, 0.0f, 0x1.9cf5f8p-12f, 0x1.3cb2f8p-12f, 0x1.ab8dd6p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1404bp-56f, 0.0f, 0.0f, 0.0f, 0x1.4d0874p-44f,
     0x1.a9f2dp-31f, 0.0f, 0.0f, 0x1.da79e2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8b81eap-64f, 0.0f, 0.0f, 0x1.fd1a74p-33f, 0.0f, 0x1.c63d7ap-56f, 0.0f,
     0x1.103502p-68f, 0x1.e39802p-80f, 0x1.b5e4d4p-1f, 0.0f, 0x1.4992e4p-10f,
     0x1.aa9ffap-76f, 0x1.00cd8ap-54f, 0x1.413466p-33f, 0.0f, 0.0f, 0x1.317a56p-52f,
     0.0f, 0x1.6b5c7ap-75f, 0x1.8963f8p-54f, 0x1.d00d18p-34f, 0.0f, 0x1.475618p-24f,
     0x1.854fcp-107f, 0.0f, 0x1.157d14p-84f, 0.0f, 0x1.917fep-11f, 0.0f,
     0x1.8356ecp-12f, 0.0f, 0.0f, 0x1.d86ba6p-111f, 0x1.c9b634p-100f, 0x1.f3aa6p-89f,
     0.0f, 0x1.66130ep-113f, 0x1.8a6926p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a27444p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf387cp-91f, 0.0f, 0.0f,
     0x1.9052a8p-34f, 0.0f, 0x1.5f981ap-103f, 0.0f, 0x1.30050ep-70f, 0.0f,
     0x1.fe79c4p-10f, 0x1.169052p-117f, 0x1.b29078p-24f, 0x1.3b2d5p-106f, 0.0f,
     0x1.ce697p-31f, 0.0f, 0x1.56f764p-44f, 0x1.21ece2p-70f, 0x1.f5adap-63f,
     0x1.cdc4cap-89f, 0.0f, 0.0f, 0x1.67ade6p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42b472p-30f, 0x1.6ae0ecp-24f, 0x1.506a94p-94f, 0x1.db0a4cp-114f,
     0x1.218bbep-2f, 0x1.bce384p-35f, 0.0f, 0x1.4bafd8p-54f, 0x1.2238eep-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.122f74p-67f, 0.0f, 0.0f, 0x1.733718p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.0757f4p-31f,
     0x1.b6784cp-20f, 0.0f, 0.0f, 0x1.b226ccp-81f, 0.0f, 0.0f, 0.0f, 0x1.a3b08p-42f,
     0.0f, 0x1.11bd1cp-120f, 0x1.b449b2p-48f, 0x1.c2db1ap-119f, 0.0f, 0x1.acc92ep-37f,
     0.0f, 0.0f, 0x1.5cda8ep-66f, 0x1.50b5aap-50f, 0x1.faef16p-118f, 0x1.cd8448p-78f,
     0.0f, 0.0f, 0x1.060474p-100f, 0x1.7170ep-8f, 0.0f, 0.0f, 0x1.2f13e4p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.36f438p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.665d96p-35f,
     0x1.2c037ap-113f, 0x1.d64a6cp-9f, 0.0f, 0.0f, 0x1.074p-97f, 0x1.42e608p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cee3fep-39f, 0.0f, 0x1.32dc7cp-121f,
     0x1.9bba12p-99f, 0.0f, 0x1.f93ee8p-16f, 0.0f, 0.0f, 0x1.99eb6p-101f, 0.0f,
     0x1.e1e846p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a111p-50f, 0.0f, 0x1.76c7aap-16f,
     0x1.671226p-82f, 0x1.cd416ap-78f, 0.0f, 0.0f, 0x1.0add2ap-33f, 0x1.d123bp-57f,
     0x1.915864p-42f, 0.0f, 0.0f, 0x1.a2af5ap-125f, 0.0f, 0x1.a7d8c2p-95f, 0.0f,
     0x1.33ee58p-97f, 0x1.3c3768p-57f, 0x1.4a1bf4p-100f, 0.0f, 0.0f, 0x1.c54edep-83f,
     0x1.fa5162p-124f, 0x1.c442p-9f, 0x1.ed51d8p-75f, 0.0f, 0x1.8b94c4p-79f, 0.0f,
     0x1.4dd302p-122f, 0x1.e4b482p-48f, 0x1.eeade8p-105f, 0.0f, 0.0f,
     0x1.5fa338p-120f, 0x1.344944p-94f, 0x1.3f0c04p-6f, 0.0f, 0x1.8fcaf6p-52f, 0.0f,
     0x1.be0abcp-63f, 0x1.0e13c2p-91f, 0.0f, 0x1.e384eap-51f, 0.0f, 0.0f,
     0x1.e806aep-71f, 0x1.533e9ep-20f, 0.0f, 0.0f, 0x1.582844p-66f, 0x1.b7afa6p-72f,
     0x1.126fc8p-32f, 0x1.8782d6p-121f, 0.0f, 0x1.caab4p-86f, 0.0f, 0x1.e8a02cp-31f,
     0x1.37e7bep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09b372p-49f, 0x1.6b21f6p-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5eba4p-59f, 0.0f, 0.0f, 0x1.3dba12p-91f,
     0x1.e204ap-102f, 0.0f, 0.0f, 0x1.29999ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.768fcp-59f, 0.0f, 0.0f, 0x1.c9c264p-68f, 0x1.dc9f66p-27f, 0x1.90b9c2p-39f,
     0.0f, 0.0f, 0x1.15bf24p-54f, 0.0f, 0x1.cae2d6p-88f, 0x1.0302e6p-9f,
     0x1.4a7c8ap-34f, 0.0f, 0x1.2ef098p-39f, 0x1.c1fb06p-55f, 0.0f, 0x1.b568e2p-63f,
     0.0f, 0x1.e9e548p-1f, 0x1.b8c54cp-119f, 0x1.42bad8p-68f, 0.0f, 0x1.8bb586p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.177d72p-22f, 0x1.ddd6e6p-37f,
     0x1.618a72p-34f, 0x1.907e3p-120f, 0.0f, 0.0f, 0x1.7686c4p-120f, 0x1.dcd5c8p-103f,
     0x1.423002p-26f, 0x1.e38432p-33f, 0.0f, 0x1.4bad06p-68f, 0x1.277424p-95f,
     0x1.a714e6p-20f, 0x1.2a097ap-98f, 0.0f, 0x1.357644p-54f, 0x1.7f05acp-62f,
     0x1.b2116ap-39f, 0.0f, 0.0f, 0x1.abc718p-66f, 0.0f, 0x1.90e138p-24f, 0.0f,
     0x1.2eefccp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0c8dcp-102f, 0.0f, 0.0f,
     0.0f, 0x1.57f034p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29e742p-58f, 0x1.8ab706p-18f,
     0x1.71ce02p-53f, 0.0f, 0x1.fe583ep-97f, 0.0f, 0x1.daa612p-3f, 0x1.992a4ap-21f,
     0.0f, 0.0f, 0x1.0909acp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.5cff86p-1f, 0x1.7485c8p-118f, 0x1.98b208p-52f, 0x1.5b4e74p-33f, 0.0f,
     0x1.5b0e64p-21f, 0x1.d3974ap-80f, 0.0f, 0x1.662c0cp-11f, 0x1.8da826p-3f,
     0x1.b2509p-80f, 0.0f, 0x1.4439e4p-51f, 0.0f, 0.0f, 0x1.11bd2ep-54f,
     0x1.46515ap-105f, 0.0f, 0x1.df9f5ap-12f, 0x1.7bf6ep-94f, 0x1.6f4202p-37f,
     0x1.277d1ap-87f, 0.0f, 0.0f, 0.0f, 0x1.d6f5a4p-35f, 0.0f, 0x1.e016f8p-35f,
     0x1.7f5192p-1f, 0.0f, 0.0f, 0x1.ca93ccp-27f, 0x1.c30ccap-100f, 0x1.53d1ap-91f,
     0x1.bc7fccp-92f, 0.0f, 0.0f, 0x1.5a719ep-28f, 0x1.07fc42p-96f, 0.0f,
     0x1.cf13fap-7f, 0x1.abd384p-30f, 0.0f, 0.0f, 0x1.5e755ep-81f, 0.0f,
     0x1.3eaa1ep-78f, 0.0f, 0x1.27a7b8p-114f, 0.0f, 0x1.75abe2p-99f, 0.0f,
     0x1.239216p-31f, 0x1.34e5bep-98f, 0x1.82cdfap-69f, 0x1.9d2d3ep-115f, 0.0f, 0.0f,
     0.0f, 0x1.fe0e86p-33f, 0.0f, 0.0f, 0.0f, 0x1.e7c6a2p-98f, 0x1.90667ep-37f, 0.0f,
     0.0f, 0.0f, 0x1.421722p-5f, 0x1.63363ap-82f, 0x1.33987ep-53f, 0x1.863ac4p-8f,
     0x1.3c724p-65f, 0.0f, 0x1.379bcep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11d5eep-86f,
     0.0f, 0.0f, 0x1.92ce98p-76f, 0x1.1d3a4p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a8cd4p-58f, 0.0f, 0.0f, 0.0f, 0x1.d6adcp-60f, 0x1.fb8e9ep-66f, 0.0f,
     0x1.3fe204p-109f, 0x1.8cef18p-18f, 0x1.1c681p-6f, 0.0f, 0x1.645a14p-73f, 0.0f,
     0.0f, 0.0f, 0x1.378f2p-120f, 0.0f, 0.0f, 0x1.ea2e4cp-30f, 0x1.fab8d4p-69f,
     0x1.59b89ep-81f, 0.0f, 0x1.2f788p-36f, 0.0f, 0x1.f42ba2p-120f, 0x1.4d4f6ap-94f,
     0x1.601e4cp-74f, 0x1.7612cap-99f, 0.0f, 0x1.be7f88p-56f, 0.0f, 0x1.c21ddp-72f,
     0x1.33cd1ep-109f, 0x1.a7e3fep-112f, 0x1.7ddcc8p-93f, 0x1.caa5cp-121f,
     0x1.6464b6p-13f, 0.0f, 0x1.61e338p-47f, 0x1.b277d2p-26f, 0.0f, 0x1.71b832p-52f,
     0x1.dbafacp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3726c2p-35f, 0x1.e6c8dcp-30f,
     0x1.db7226p-75f, 0x1.4626bcp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c16772p-43f, 0.0f, 0x1.b962d4p-126f, 0.0f, 0x1.184344p-57f,
     0x1.2043aep-38f, 0.0f, 0x1.34c7b6p-71f, 0.0f, 0x1.31eaacp-33f, 0x1.b17f38p-111f,
     0.0f, 0.0f, 0x1.5c6816p-36f, 0.0f, 0.0f, 0.0f, 0x1.62f406p-8f, 0x1.2ebf5cp-52f,
     0x1.8bd72cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f6e74p-62f, 0x1.ed4dbp-62f, 0.0f,
     0x1.dfe38p-67f, 0.0f, 0x1.16efbep-77f, 0.0f, 0x1.81bedap-57f, 0x1.3acc3p-112f,
     0.0f, 0x1.c78da4p-44f, 0x1.510424p-21f, 0.0f, 0x1.e763dp-30f, 0.0f, 0.0f,
     0x1.36f8a2p-13f, 0x1.db9216p-88f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.e56322p-6f, 0.0f, 0.0f, 0.0f, 0x1.e5709ep-53f, 0.0f, 0x1.c2638ep-120f,
     0x1.044952p-60f, 0.0f, 0x1.a4bdd6p-34f, 0.0f, 0.0f, 0x1.ad1e98p-34f, 0.0f,
     0x1.f9ecccp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec68a2p-50f, 0.0f,
     0x1.6efc86p-92f, 0.0f, 0.0f, 0x1.13e1dep-15f, 0.0f, 0.0f, 0x1.31dd66p-40f, 0.0f,
     0x1.f8d52cp-71f, 0.0f, 0.0f, 0x1.49d728p-73f, 0.0f, 0x1.01e48cp-33f,
     0x1.aaf74ap-120f, 0x1.87027p-121f, 0.0f, 0x1.d47af8p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9eaed2p-66f, 0.0f, 0x1.85185cp-93f, 0x1.dfcd76p-126f, 0.0f, 0.0f, 0.0f,
     0x1.aa4b9cp-77f, 0.0f, 0.0f, 0.0f, 0x1.8d0b62p-19f, 0x1.f6ef2cp-11f, 0.0f, 0.0f,
     0.0f, 0x1.87738cp-103f, 0x1.fdf2cp-116f, 0x1.a6f42ep-98f, 0x1.98920cp-85f, 0.0f,
     0x1.75cd92p-82f, 0.0f, 0.0f, 0.0f, 0x1.474d3ap-42f, 0x1.2ba958p-97f, 0.0f,
     0x1.c019ccp-125f, 0.0f, 0x1.c53338p-22f, 0x1.5f7198p-86f, 0.0f, 0x1.e8b4fcp-84f,
     0x1.5d2c0cp-17f, 0.0f, 0.0f, 0.0f, 0x1.8d8c88p-54f, 0.0f, 0x1.3fae6ap-55f,
     0x1.289032p-27f, 0.0f, 0x1.9a2ddp-13f, 0x1.17b388p-111f, 0.0f, 0x1.da0a12p-100f,
     0x1.7945aep-99f, 0x1.b786a2p-95f, 0x1.aa9a1ep-36f, 0x1.9569e2p-50f,
     0x1.3b648cp-100f, 0x1.03e0bcp-54f, 0.0f, 0.0f, 0.0f, 0x1.a1047p-44f,
     0x1.f45d34p-99f, 0x1.8146ccp-110f, 0.0f, 0x1.3b8caap-34f, 0x1.5300a4p-110f, 0.0f,
     0.0f, 0x1.86d8d6p-124f, 0.0f, 0x1.d2baeap-80f, 0.0f, 0x1.a709dap-61f,
     0x1.2d252cp-56f, 0.0f, 0x1.4c3464p-104f, 0x1.f6f292p-5f, 0.0f, 0.0f, 0.0f,
     0x1.21842cp-99f, 0.0f, 0.0f, 0x1.9c481cp-50f, 0x1.d4f98ap-9f, 0.0f,
     0x1.4e1c6p-14f, 0x1.081922p-66f, 0.0f, 0x1.736f4cp-91f, 0x1.8b24p-73f,
     0x1.0b074p-80f, 0.0f, 0.0f, 0x1.19b5acp-125f, 0x1.6e5b36p-29f, 0.0f,
     0x1.212648p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.362ce2p-4f, 0x1.ee7e08p-12f, 0.0f,
     0x1.f5c054p-98f, 0.0f, 0x1.62a624p-107f, 0x1p0f, 0.0f, 0.0f, 0x1.f23568p-94f,
     0x1.c7962p-113f, 0x1.d9d5p-32f, 0.0f, 0x1.42889p-116f, 0x1.a9427cp-79f, 0.0f,
     0x1.73f20cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcc6eep-63f, 0.0f,
     0x1.2e1efep-56f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.c593e6p-123f, 0.0f,
     0.0f, 0x1.f46594p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.143702p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6bf4c8p-40f, 0x1.314a0cp-17f, 0x1.24dfc4p-85f, 0.0f, 0.0f,
     0x1.7f7bp-28f, 0.0f, 0.0f, 0x1.ea7b22p-120f, 0.0f, 0x1.71cf6ep-124f, 0x1p0f,
     0.0f, 0.0f, 0x1.a8e0ap-83f, 0x1.5a439ap-119f, 0.0f, 0x1.7a03f8p-29f, 0.0f,
     0x1.7d8f5p-91f, 0.0f, 0.0f, 0.0f, 0x1.4f1322p-104f, 0x1.9b2398p-48f, 0.0f, 0.0f,
     0x1.93696ap-55f, 0x1.180c26p-63f, 0x1.e5733cp-71f, 0x1.92f3dep-44f, 0.0f, 0.0f,
     0.0f, 0x1.c8b732p-105f, 0.0f, 0x1.98ae42p-3f, 0.0f, 0.0f, 0x1.bd478ep-37f, 0.0f,
     0x1.073022p-106f, 0x1.8e09c6p-23f, 0.0f, 0.0f, 0x1.541d3p-82f, 0.0f,
     0x1.ca0714p-83f, 0.0f, 0x1.189eeep-22f, 0.0f, 0.0f, 0x1.302bc8p-4f,
     0x1.725c3ap-92f, 0.0f, 0.0f, 0.0f, 0x1.8d69eap-70f, 0.0f, 0x1.e34cdcp-1f, 0.0f,
     0x1.c12a34p-26f, 0x1.a41de2p-10f, 0.0f, 0x1.6c4936p-44f, 0.0f, 0x1.665b32p-15f,
     0x1.c9d4fep-57f, 0x1.b703bep-46f, 0.0f, 0.0f, 0x1.cfb02p-76f, 0.0f,
     0x1.a8ad9cp-67f, 0x1.0a4978p-81f, 0x1.1412dap-51f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.107f68p-56f, 0x1.3e5c9p-117f, 0x1.adb296p-18f, 0x1.4f9c68p-82f,
     0.0f, 0.0f, 0x1.16569p-108f, 0.0f, 0.0f, 0x1.8b2616p-115f, 0x1.45e664p-70f, 0.0f,
     0x1.2eb998p-111f, 0.0f, 0x1.d56982p-123f, 0x1.f48e2p-51f
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
            tmp1 = Sleef_expm1f4_u10avx2128(tmp0);
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
    printf("Sleef_expm1f4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_expm1f4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
