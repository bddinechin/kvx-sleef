/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf1_u35purecfma.c --function \
 *     Sleef_finz_tanf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1p0f, 0x1.f7f764p-12f, 0.0f, 0.0f, 0x1.5fd784p-54f, 0.0f,
     0x1.c8dc98p-21f, 0.0f, 0x1p0f, 0x1.4a6316p-89f, 0.0f, 0x1.3d7f8cp-14f,
     0x1.b17a32p-44f, 0.0f, 0.0f, 0x1.e13be4p-30f, 0.0f, 0.0f, 0x1.fcedaep-46f, 0.0f,
     0x1.695eaap-21f, 0x1.3d9c6ap-111f, 0.0f, 0x1.3a72e4p-84f, 0x1.cf4b02p-97f, 0.0f,
     0x1.2f65fep-72f, 0x1.de446p-92f, 0x1.a6eb18p-29f, 0.0f, 0x1.37c8b2p-97f, 0.0f,
     0.0f, 0x1.ce1d84p-71f, 0x1.41829ap-22f, 0x1.38f958p-45f, 0.0f, 0x1.b0d29cp-36f,
     0x1.0a7098p-1f, 0.0f, 0.0f, 0x1.c90cdcp-86f, 0x1.52414cp-90f, 0.0f, 0.0f,
     0x1.38fb6ap-81f, 0x1.984ab4p-102f, 0x1.a136dp-108f, 0x1.6b01a4p-64f, 0.0f, 0.0f,
     0.0f, 0x1.6276fcp-21f, 0.0f, 0.0f, 0.0f, 0x1.589606p-68f, 0.0f, 0x1.078c24p-81f,
     0.0f, 0x1.924d6ep-67f, 0x1.790c8p-24f, 0x1.44e796p-63f, 0x1.a53626p-50f, 0.0f,
     0x1.eeb1c4p-86f, 0.0f, 0x1.178d22p-8f, 0x1.c0137p-4f, 0x1.696d9ap-103f,
     0x1.61c01cp-27f, 0x1.ba5e4p-121f, 0.0f, 0x1.408d2ep-2f, 0.0f, 0x1.50551cp-36f,
     0.0f, 0x1.15543ep-20f, 0x1.d788dp-26f, 0.0f, 0.0f, 0.0f, 0x1.656efap-6f,
     0x1.27edf6p-48f, 0.0f, 0x1.148456p-102f, 0x1.a137fap-126f, 0.0f, 0.0f, 0.0f,
     0x1.c79ff8p-31f, 0x1.54230ap-87f, 0x1.139814p-23f, 0x1.9bbe8p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.467cbp-123f, 0x1.fdb9fap-20f, 0x1.49f7c6p-35f, 0x1.3f64a2p-17f,
     0.0f, 0.0f, 0x1.f04c18p-77f, 0x1.5f2412p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8cd58cp-33f, 0.0f, 0.0f, 0x1.b5bdc6p-6f, 0x1.3c7a7p-50f, 0.0f, 0.0f,
     0x1.8c397ep-99f, 0.0f, 0.0f, 0x1.f803cep-125f, 0.0f, 0x1.178de8p-43f, 0.0f,
     0x1.de822cp-52f, 0.0f, 0.0f, 0x1.7018c6p-1f, 0.0f, 0.0f, 0.0f, 0x1.f50ab2p-79f,
     0x1.f3e51ep-16f, 0.0f, 0x1.4ff0b2p-11f, 0x1.40377ep-107f, 0x1.59a492p-92f, 0.0f,
     0.0f, 0x1.2fe388p-51f, 0.0f, 0.0f, 0.0f, 0x1.962924p-48f, 0x1.8f340ep-67f, 0.0f,
     0x1.538376p-126f, 0.0f, 0x1.f59642p-10f, 0x1.c12f78p-8f, 0.0f, 0x1.bee91p-1f,
     0.0f, 0x1.6e3854p-2f, 0x1.ae7c18p-125f, 0.0f, 0x1.bdbc3ap-112f, 0.0f, 0.0f,
     0x1.d09786p-81f, 0x1.8041c8p-95f, 0.0f, 0.0f, 0x1.5cfccap-49f, 0x1.e6a012p-59f,
     0x1.f5afcp-66f, 0x1.5966e4p-52f, 0.0f, 0x1.8584c4p-65f, 0x1.4b3558p-90f, 0.0f,
     0x1.23d7a8p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.476a72p-124f, 0.0f, 0.0f,
     0x1.3ad59ap-95f, 0x1.fb1c8ap-103f, 0x1.44eaf2p-4f, 0.0f, 0.0f, 0x1p0f,
     0x1.db27fep-11f, 0.0f, 0.0f, 0x1.0c65cep-87f, 0x1.fb91bp-120f, 0x1.240b38p-33f,
     0x1.f07918p-18f, 0.0f, 0x1.dc13dp-36f, 0x1.2ccb12p-12f, 0x1.5f8f5ap-108f,
     0x1.df7756p-10f, 0.0f, 0.0f, 0x1.5d0c56p-8f, 0.0f, 0x1.6d5b58p-43f,
     0x1.213a02p-119f, 0.0f, 0x1.d1832ep-78f, 0.0f, 0.0f, 0x1.5ff5dap-36f, 0.0f,
     0x1.37fe3ep-20f, 0.0f, 0.0f, 0.0f, 0x1.7aeedep-56f, 0x1.ec2a82p-95f, 0.0f, 0.0f,
     0x1.e2aa1p-85f, 0.0f, 0x1.773d0ep-59f, 0x1.3f421ap-27f, 0.0f, 0.0f,
     0x1.c5113ep-98f, 0x1.41006ap-17f, 0x1.e8797ap-122f, 0x1.42831ep-108f, 0.0f, 0.0f,
     0.0f, 0x1.7e8f18p-97f, 0x1.2ef824p-21f, 0.0f, 0x1.be59e4p-32f, 0x1.25736p-68f,
     0x1.ad610ep-84f, 0.0f, 0x1.cf6f92p-34f, 0.0f, 0.0f, 0x1.740ba2p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bee754p-53f, 0x1.dda6aep-5f, 0x1.5c6794p-112f, 0.0f,
     0x1.49320ep-114f, 0x1.8b5a96p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea21ep-93f, 0.0f,
     0x1.bb32f8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.216a64p-5f, 0.0f, 0x1.481fb6p-42f,
     0x1.1704b4p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db8e5ep-42f, 0x1.a7767ap-108f,
     0x1.ecff9ap-118f, 0x1.7c5028p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a20dp-13f,
     0x1.72a17ap-18f, 0.0f, 0x1.e385f2p-45f, 0x1.d572c8p-74f, 0.0f, 0x1.55d26ap-9f,
     0x1.c35e54p-38f, 0x1.f0f392p-44f, 0x1.9c8616p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c98456p-117f, 0x1.fd252p-61f, 0x1.e44e3p-67f,
     0x1.1e96cap-72f, 0x1.e9d6b8p-37f, 0x1.14a982p-18f, 0.0f, 0x1.9f2034p-52f, 0.0f,
     0x1.5e212p-37f, 0.0f, 0.0f, 0x1.a678bp-32f, 0.0f, 0.0f, 0x1.c41906p-57f,
     0x1.94180cp-118f, 0x1.a8c27ap-23f, 0x1.85cc8cp-79f, 0.0f, 0x1.5b1108p-84f, 0.0f,
     0x1.96259cp-14f, 0x1.be16ecp-125f, 0x1.8c822cp-77f, 0x1.2bed52p-85f, 0.0f,
     0x1.3d304ep-100f, 0x1.beda74p-29f, 0.0f, 0.0f, 0x1.48c798p-107f, 0x1.4b400cp-99f,
     0x1.46124p-75f, 0.0f, 0x1.bcfc18p-98f, 0x1.686862p-15f, 0x1.2e4cdcp-42f,
     0x1.e7eecp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a008cp-64f,
     0x1.91266p-119f, 0x1.0eb03ep-18f, 0x1.fa8b3ep-113f, 0.0f, 0x1.482398p-45f, 0.0f,
     0x1.e6d24cp-97f, 0.0f, 0.0f, 0.0f, 0x1.35786cp-104f, 0x1.aa77fep-119f,
     0x1.109952p-108f, 0x1.5bcfe2p-117f, 0.0f, 0x1.2f3cd2p-18f, 0.0f, 0.0f,
     0x1.1d145p-13f, 0x1.d320fcp-5f, 0.0f, 0x1.3f8c46p-23f, 0x1.9e0988p-91f,
     0x1.6800a8p-112f, 0x1.f6f472p-51f, 0.0f, 0x1.9879fep-51f, 0x1.a096fap-93f, 0.0f,
     0x1.2989eap-13f, 0x1.55eb16p-97f, 0.0f, 0.0f, 0.0f, 0x1.9be80cp-115f, 0.0f, 0.0f,
     0x1.34e9cep-26f, 0.0f, 0.0f, 0x1.6bf4a8p-77f, 0x1.3fabap-50f, 0x1.b08e18p-30f,
     0.0f, 0.0f, 0x1.55c7ap-20f, 0.0f, 0.0f, 0.0f, 0x1.14884ap-46f, 0x1.4a5a9p-59f,
     0x1.c65a84p-59f, 0.0f, 0.0f, 0.0f, 0x1.542d2p-48f, 0x1.1fa578p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c80808p-58f, 0.0f, 0x1.e5d7e2p-57f, 0.0f, 0.0f, 0x1.95c52ep-24f,
     0.0f, 0x1.64bfap-86f, 0x1.e52e66p-115f, 0.0f, 0x1.e53e34p-108f, 0.0f,
     0x1.176298p-87f, 0x1.492e44p-109f, 0x1.01b5f4p-17f, 0x1.668172p-77f, 0.0f, 0.0f,
     0.0f, 0x1.e6ae16p-41f, 0x1.358abp-21f, 0x1.bc5f48p-72f, 0.0f, 0x1.49457cp-4f,
     0.0f, 0x1.93b71p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04c126p-62f, 0.0f, 0.0f,
     0x1.f1c208p-57f, 0.0f, 0.0f, 0x1.61b694p-103f, 0x1.257e66p-57f, 0x1.50cefcp-59f,
     0x1.f40948p-42f, 0x1.ccaff8p-105f, 0.0f, 0.0f, 0.0f, 0x1.b14fc2p-16f, 0.0f,
     0x1.2c205ep-1f, 0x1.6d6e42p-25f, 0.0f, 0x1.af027ep-47f, 0x1.e66222p-46f,
     0x1.a4aa06p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c826p-17f, 0x1.0ddfep-94f,
     0x1.8c377p-67f, 0.0f, 0.0f, 0x1.7243aep-3f, 0x1.81a7e6p-73f, 0.0f,
     0x1.333902p-36f, 0.0f, 0.0f, 0.0f, 0x1.260d82p-59f, 0.0f, 0.0f, 0.0f,
     0x1.9f37c8p-82f, 0x1.0f5752p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de6a02p-80f,
     0x1.6f099ep-95f, 0x1.b9a8b2p-101f, 0.0f, 0x1.6543e4p-103f, 0x1.d87efcp-67f,
     0x1.886dbp-54f, 0.0f, 0x1.d05eb6p-44f, 0x1.e4dfdp-110f, 0x1.694996p-75f,
     0x1.2c4cd4p-78f, 0x1.224dfcp-82f, 0x1.b458dp-74f, 0.0f, 0.0f, 0.0f,
     0x1.078beap-57f, 0.0f, 0x1.f212e4p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d1bdp-80f, 0x1.590bbp-104f, 0x1.8021f8p-101f, 0.0f, 0.0f, 0x1.f003f6p-3f,
     0x1.2c9d94p-121f, 0.0f, 0.0f, 0x1.ace728p-16f, 0x1.effdeap-33f, 0x1.08ed3ep-10f,
     0.0f, 0x1.68904cp-6f, 0x1.8ebb08p-79f, 0.0f, 0x1.6afae4p-38f, 0x1.002b86p-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c0cbcp-121f, 0.0f, 0x1.03873cp-74f, 0x1.ed0de8p-58f,
     0.0f, 0x1.8392fcp-4f, 0.0f, 0.0f, 0.0f, 0x1.e7e5ap-46f, 0x1.0a35eap-57f, 0.0f,
     0x1.b493c2p-100f, 0x1.0b8856p-75f, 0x1.31c48cp-40f, 0.0f, 0.0f, 0x1.411ffap-22f,
     0x1.c9af24p-18f, 0x1.88ed96p-89f, 0.0f, 0x1.b95c1ep-92f, 0.0f, 0.0f,
     0x1.ceafacp-19f, 0.0f, 0.0f, 0x1.b39794p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6f55ap-98f, 0x1.6e35b6p-53f, 0.0f, 0x1.553c2ap-3f, 0.0f, 0x1.a042eep-108f,
     0x1.aa97f2p-62f, 0x1.17bdep-5f, 0.0f, 0.0f, 0.0f, 0x1.421a5ap-36f,
     0x1.9c6806p-19f, 0x1.8d741ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4b63p-16f,
     0x1.56f15cp-81f, 0x1.fbc048p-40f, 0.0f, 0x1.287656p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.666ec2p-76f, 0.0f, 0x1.65f7fep-120f, 0x1.7a1708p-48f, 0.0f, 0x1.8c62f2p-100f,
     0x1.bd548ap-103f, 0x1.9b863p-100f, 0x1.3991aap-109f, 0x1.300a9cp-95f,
     0x1.f0d3f8p-116f, 0x1.a435eap-15f, 0x1.a14a82p-100f, 0x1.ce098cp-53f,
     0x1.e74992p-37f, 0x1.74a924p-22f, 0.0f, 0x1.b1228p-38f, 0x1.38e7d8p-107f, 0.0f,
     0.0f, 0x1.51ae56p-106f, 0.0f, 0x1.6ead0ap-40f, 0.0f, 0.0f, 0x1.d73baap-67f,
     0x1.e79dc6p-107f, 0x1.751b8ep-25f, 0.0f, 0.0f, 0x1.a27482p-93f, 0.0f,
     0x1.fed0c2p-109f, 0x1.37f6acp-55f, 0x1.24c3aap-11f, 0x1.083a5p-48f,
     0x1.d592bcp-51f, 0x1.f2483ap-60f, 0x1.cfb0c8p-20f, 0x1.d8ebdap-30f,
     0x1.af70b4p-17f, 0.0f, 0x1.e6d9bep-112f, 0x1.dcbacp-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.341004p-100f, 0x1.d52776p-99f, 0.0f, 0.0f, 0x1.1822c2p-117f,
     0x1.9ae1ep-85f, 0.0f, 0x1.7e7934p-89f, 0.0f, 0.0f, 0x1.1ab1c2p-42f,
     0x1.99bd14p-67f, 0.0f, 0x1.488e6ep-117f, 0x1.cfd14cp-53f, 0x1.f971dp-31f, 0.0f,
     0x1.54f3f4p-79f, 0.0f, 0.0f, 0.0f, 0x1.865d9ap-68f, 0x1.3f8adcp-34f, 0.0f, 0.0f,
     0.0f, 0x1.1b386ap-48f, 0x1.e0b3a4p-4f, 0.0f, 0x1.fc64c2p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fcf52p-55f, 0.0f, 0x1.c4c37ep-97f, 0x1.882414p-91f, 0.0f,
     0x1.76c51p-40f, 0x1.1e717p-56f, 0x1.3054f6p-99f, 0.0f, 0x1.2f23ap-9f,
     0x1.521a52p-32f, 0x1.96e144p-36f, 0.0f, 0x1.32fd08p-18f, 0x1.223c64p-73f, 0.0f,
     0x1.fa69dp-96f, 0.0f, 0.0f, 0x1.40f986p-44f, 0x1.6f613p-84f, 0.0f, 0.0f,
     0x1.77529p-92f, 0x1.c853eap-16f, 0.0f, 0.0f, 0.0f, 0x1.94598ap-2f, 0.0f,
     0x1.8f6a46p-52f, 0.0f, 0.0f, 0x1.406e2p-44f, 0x1.f685f2p-97f, 0x1.adb37cp-8f,
     0.0f, 0x1.7d177cp-48f, 0.0f, 0.0f, 0x1.547454p-52f, 0x1.ab5c5ep-76f,
     0x1.4ac8bep-58f, 0x1.69fa7p-68f, 0x1.b64734p-13f, 0x1.a8ea76p-72f,
     0x1.16cf52p-106f, 0x1.c97794p-54f, 0x1.431a6cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.977628p-43f, 0.0f, 0x1.fe1676p-75f, 0.0f, 0x1.832e1ap-36f,
     0x1.c7e5aep-21f, 0x1.b5c798p-116f, 0x1.0aa1fep-118f, 0x1.a11e86p-12f,
     0x1.873accp-69f, 0x1.75ba58p-19f, 0.0f, 0.0f, 0x1.7851b8p-123f, 0.0f,
     0x1.906a8ap-11f, 0x1.96767cp-17f, 0.0f, 0.0f, 0x1.1a88cep-22f, 0.0f, 0.0f,
     0x1.329146p-82f, 0x1.db1fccp-58f, 0.0f, 0.0f, 0x1.4553aap-93f, 0x1.e233dp-72f,
     0.0f, 0x1.0c6b4ep-33f, 0x1p0f, 0x1.503b5cp-92f, 0x1.f77facp-91f, 0x1.a8f26cp-16f,
     0x1.b7693ep-100f, 0x1.87b53ap-13f, 0.0f, 0x1.17ffe4p-24f, 0x1.895962p-98f, 0.0f,
     0.0f, 0x1.42991cp-92f, 0x1.867832p-84f, 0x1.c3ecap-31f, 0x1.2defccp-80f,
     0x1.a90ceap-97f, 0.0f, 0.0f, 0.0f, 0x1.93fbp-44f, 0x1.b89e4ap-78f,
     0x1.d7cecap-85f, 0.0f, 0.0f, 0x1.8cdc8ap-33f, 0.0f, 0x1.bb67b6p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d2b5ap-60f, 0x1.ca3774p-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.107bc2p-60f, 0x1.7a5adcp-42f, 0.0f, 0.0f, 0x1.e7cddcp-4f,
     0x1.2b4086p-12f, 0x1.c3086cp-63f, 0x1.0fca7cp-38f, 0x1.a36b2ep-112f,
     0x1.7e2d6ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c46b08p-61f, 0.0f,
     0x1.f3e812p-87f, 0.0f, 0x1.64bae8p-1f, 0.0f, 0x1.a6a5a8p-73f, 0.0f,
     0x1.eda588p-48f, 0x1.7ff1b6p-27f, 0x1.bbadb6p-118f, 0x1.aab15cp-8f,
     0x1.93c906p-76f, 0.0f, 0.0f, 0x1.10eac6p-7f, 0x1.b0bd02p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7298ap-81f, 0.0f, 0x1.e92932p-91f, 0x1.808f9p-52f,
     0x1.063df2p-64f, 0.0f, 0x1.3368ecp-83f, 0.0f, 0.0f, 0x1.bccbep-49f,
     0x1.931c2ep-68f, 0.0f, 0x1.dd0f4ap-120f, 0.0f, 0.0f, 0x1.273282p-71f,
     0x1.ee607ep-78f, 0x1.d01bf8p-83f, 0x1.f88476p-97f, 0.0f, 0.0f, 0.0f,
     0x1.48f422p-76f, 0x1.857074p-97f, 0.0f, 0.0f, 0x1.69eb9cp-56f, 0x1.9fdf36p-38f,
     0x1.17a91ep-67f, 0.0f, 0x1.7197bcp-22f, 0x1.d0a65p-104f, 0.0f, 0.0f,
     0x1.58d8eap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ca56cp-36f, 0x1.7eb388p-50f, 0.0f,
     0x1.c5161ap-26f, 0.0f, 0.0f, 0x1.58a81p-71f, 0x1.f0e00cp-58f, 0x1.450e82p-52f,
     0x1.c6a8cep-98f, 0.0f, 0x1.fa844cp-44f, 0.0f, 0x1.1e7906p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f5d8a2p-32f, 0.0f, 0x1.6d4472p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc088cp-19f, 0.0f, 0.0f, 0.0f, 0x1.be99fep-114f, 0.0f, 0.0f, 0x1.0a4976p-69f,
     0x1.b1035p-90f, 0x1.ec68bap-36f, 0x1.db700cp-90f, 0x1.c10ea6p-113f, 0.0f,
     0x1.7dbb8p-94f, 0x1.c4ef2cp-93f, 0.0f, 0.0f, 0x1.6be57ap-65f, 0.0f, 0.0f,
     0x1.1a704cp-78f, 0.0f, 0x1.556be2p-37f, 0x1.31bf7ap-80f, 0x1.4fcf08p-82f,
     0x1.469dcp-23f, 0.0f, 0x1.70547ep-31f, 0.0f, 0x1.9cbbcp-85f, 0x1.85d086p-55f,
     0x1.ed6d62p-106f, 0.0f, 0.0f, 0x1.9a6996p-93f, 0x1.9cd13ep-4f, 0x1.f31294p-15f,
     0x1.bcd20cp-11f, 0x1.7c8f68p-114f, 0x1p0f, 0x1.780c78p-43f, 0.0f,
     0x1.69768ep-63f, 0.0f, 0x1.646c92p-111f, 0x1.428dcep-123f, 0x1.a98072p-12f, 0.0f,
     0.0f, 0.0f, 0x1.31e8b2p-48f, 0x1.e038ecp-18f, 0x1.64dcdp-5f, 0x1.fa9362p-29f,
     0.0f, 0.0f, 0.0f, 0x1.71470ap-65f, 0x1.a1cb26p-123f, 0.0f, 0x1.03336ep-16f,
     0x1.c2eaa4p-95f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.72748cp-104f,
     0x1.860f72p-21f, 0.0f, 0.0f, 0.0f, 0x1.12661p-18f, 0.0f, 0.0f, 0x1.c6c062p-21f,
     0.0f, 0.0f, 0x1.c61f3ap-103f, 0x1.6a366ep-60f, 0x1.e96674p-5f, 0x1.fc62e4p-38f,
     0x1.96e99cp-54f, 0.0f, 0x1.82837ep-125f, 0.0f, 0x1.58dd3ep-91f, 0x1.49e094p-86f,
     0x1.6673cp-50f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_tanf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_tanf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
