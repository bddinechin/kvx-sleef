/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshf1_u10purecfma.c --function \
 *     Sleef_finz_acoshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ed9dc2p-70f, 0x1.976484p-28f, 0.0f, 0.0f, 0x1.d8886p-1f, 0.0f,
     0x1.c560a4p-69f, 0x1.afaaecp-61f, 0.0f, 0.0f, 0x1.5f3ea4p-26f, 0x1.dfaca6p-44f,
     0.0f, 0.0f, 0x1.248792p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a3e11cp-102f, 0x1.595558p-73f, 0.0f, 0.0f, 0x1.996d06p-116f,
     0x1.92cc84p-84f, 0.0f, 0.0f, 0.0f, 0x1.c85eep-123f, 0.0f, 0x1.afed76p-109f, 0.0f,
     0x1.9badb8p-22f, 0.0f, 0x1.14b75cp-94f, 0x1.f32b2ap-73f, 0.0f, 0x1.d0499ap-76f,
     0x1.fb6fd8p-94f, 0.0f, 0x1.736df8p-48f, 0x1.9b675ep-99f, 0x1.3ac7aap-111f, 0.0f,
     0.0f, 0x1.52a382p-108f, 0.0f, 0x1.d2bf66p-58f, 0x1.dd316cp-77f, 0x1.3c25fap-76f,
     0x1.3fe3acp-107f, 0x1.98cd92p-98f, 0x1.d32a34p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6f552p-83f, 0.0f, 0x1.a68eb8p-15f, 0x1.55abfep-102f, 0.0f, 0.0f,
     0x1.083b38p-37f, 0x1.ba391ap-80f, 0x1.bfce76p-94f, 0x1.185174p-28f,
     0x1.744644p-57f, 0x1.aaa91ep-39f, 0.0f, 0x1.24de5ep-62f, 0.0f, 0x1.ec5e48p-1f,
     0.0f, 0.0f, 0x1.b67f28p-38f, 0.0f, 0.0f, 0.0f, 0x1.cd4b1cp-28f, 0.0f, 0.0f, 0.0f,
     0x1.068d9cp-10f, 0x1.3717cp-22f, 0x1.a88a02p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.834a6ep-13f, 0.0f, 0.0f, 0x1.8f75d6p-75f, 0x1.4cf126p-35f, 0.0f,
     0x1.ef7df4p-49f, 0x1.110b52p-71f, 0x1.487f14p-75f, 0x1.62da28p-113f,
     0x1.f50a14p-28f, 0.0f, 0x1.e4fd8cp-53f, 0x1.d856bap-71f, 0x1.70bed2p-32f,
     0x1.3e362p-26f, 0x1.e00248p-3f, 0x1.5b779cp-7f, 0x1.7eaa22p-92f, 0x1.db4882p-19f,
     0x1.73f4d2p-97f, 0.0f, 0x1.7f9dfp-32f, 0x1.7b6d04p-11f, 0.0f, 0x1.339952p-69f,
     0x1.e6bf6p-16f, 0x1.e1486cp-58f, 0x1.c899e2p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76cb12p-124f, 0.0f, 0.0f, 0x1.2ca662p-57f, 0x1.885fb6p-82f, 0.0f,
     0x1.d41fcep-26f, 0.0f, 0.0f, 0x1.8ca66ap-106f, 0.0f, 0x1.4eda3cp-60f,
     0x1.da6d88p-55f, 0x1.372ec8p-72f, 0.0f, 0.0f, 0x1.49f39cp-88f, 0.0f, 0.0f,
     0x1.4b6dcep-9f, 0.0f, 0.0f, 0x1.ce6c3ep-95f, 0.0f, 0.0f, 0.0f, 0x1.756a6p-49f,
     0.0f, 0.0f, 0x1.f905fp-102f, 0x1.84c314p-12f, 0.0f, 0.0f, 0.0f, 0x1.2e284cp-46f,
     0x1.8d2472p-50f, 0x1.dc0916p-21f, 0x1.86f21cp-58f, 0.0f, 0x1.ad6c3p-34f,
     0x1.4f6264p-7f, 0.0f, 0x1.9024c2p-104f, 0x1.7788f2p-83f, 0.0f, 0.0f,
     0x1.7594fp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35fe3cp-114f, 0x1.1225e2p-63f, 0.0f,
     0x1.da133ap-120f, 0.0f, 0.0f, 0x1.6b328ep-109f, 0x1.cb3672p-31f, 0.0f,
     0x1.7c6ecp-58f, 0x1.54543ap-48f, 0.0f, 0.0f, 0x1.67b3cap-34f, 0x1.8abf32p-56f,
     0x1.3c571ep-17f, 0x1.a1c3e2p-83f, 0.0f, 0.0f, 0x1.1d70ap-12f, 0x1.07bdf8p-110f,
     0x1.eaf72p-46f, 0.0f, 0x1.737fa8p-14f, 0.0f, 0x1.41524ap-60f, 0.0f, 0.0f,
     0x1.032eb2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48b92ep-94f, 0x1.8bf978p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.198c8p-65f, 0x1.dc9186p-50f, 0x1.409a18p-90f,
     0x1.46996p-24f, 0x1.3e4584p-26f, 0x1.a3491p-65f, 0x1.56e9e8p-17f, 0.0f,
     0x1.3dc9c6p-81f, 0x1.62b582p-43f, 0.0f, 0x1.81b00ap-107f, 0.0f, 0x1.f06ec6p-16f,
     0.0f, 0x1.3af524p-121f, 0.0f, 0.0f, 0x1.d5f886p-65f, 0x1.cca754p-84f,
     0x1.53ec4ap-110f, 0x1.994a66p-91f, 0x1.3a67dep-38f, 0x1.0b16bcp-56f, 0.0f, 0.0f,
     0x1.4aef82p-2f, 0.0f, 0x1.32a682p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d9e6bep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51af44p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1f2bcp-2f, 0.0f, 0.0f, 0x1.25d6bep-30f,
     0x1.932506p-70f, 0.0f, 0.0f, 0.0f, 0x1.68c0bp-112f, 0x1.914058p-87f,
     0x1.96255cp-93f, 0x1.5666d4p-118f, 0.0f, 0x1.614f6ap-90f, 0.0f, 0x1.560fep-126f,
     0x1.19a536p-91f, 0.0f, 0x1.49f8c4p-64f, 0.0f, 0x1.ad37d8p-55f, 0x1.bef218p-93f,
     0x1.48403cp-2f, 0.0f, 0x1.e28218p-86f, 0.0f, 0x1.a85544p-62f, 0x1.98ba06p-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4005p-14f, 0.0f, 0.0f, 0x1.e4819cp-95f,
     0x1.ebb4p-60f, 0x1.a79fbep-107f, 0x1.b1230cp-118f, 0.0f, 0.0f, 0x1.1d7828p-16f,
     0.0f, 0.0f, 0x1.fd6084p-56f, 0.0f, 0x1.ad133ep-61f, 0.0f, 0x1.834cdap-114f, 0.0f,
     0x1.2c26ep-65f, 0x1.1c4c06p-45f, 0.0f, 0.0f, 0x1.0494eap-88f, 0x1.f452dap-94f,
     0x1.89d446p-107f, 0x1.112dc4p-68f, 0x1.452128p-33f, 0x1.b20a84p-95f,
     0x1.3fcc78p-59f, 0.0f, 0x1.382a04p-67f, 0x1.48be0ap-104f, 0x1.c40e84p-51f,
     0x1.882db4p-120f, 0x1.d13b1ep-18f, 0.0f, 0x1.b77e8ap-10f, 0.0f, 0x1.4e4f72p-117f,
     0x1.d6d93cp-76f, 0x1.e4319p-82f, 0.0f, 0.0f, 0.0f, 0x1.1c33fap-106f, 0.0f,
     0x1.edb7d6p-70f, 0.0f, 0x1.3322aap-17f, 0.0f, 0x1.c3c1bp-15f, 0.0f, 0.0f,
     0x1.f07332p-3f, 0x1.964e8p-9f, 0x1.bee6eap-104f, 0x1.415938p-122f, 0.0f,
     0x1.154d44p-4f, 0x1.b63658p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab194ep-84f, 0.0f,
     0x1.86aec2p-125f, 0.0f, 0x1.0a11eap-4f, 0.0f, 0.0f, 0x1.3a4004p-68f, 0.0f,
     0x1.929464p-43f, 0.0f, 0.0f, 0x1.370fc4p-120f, 0x1.daab16p-106f,
     0x1.d68154p-125f, 0x1.30e2fp-90f, 0x1.6dc23cp-96f, 0x1.df9fecp-101f, 0.0f, 0.0f,
     0x1.b8feb8p-75f, 0.0f, 0x1.66ae2ep-5f, 0.0f, 0.0f, 0.0f, 0x1.3b4fbap-74f,
     0x1.e6e786p-1f, 0x1.c15de6p-17f, 0x1.a11b3ap-22f, 0x1p0f, 0.0f, 0x1.c7b7fp-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfb02ap-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.deebeap-41f, 0x1.f15d84p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5bdb9p-8f, 0x1.b716b4p-1f, 0x1.63b494p-21f,
     0x1.08b83cp-14f, 0.0f, 0x1.0c1886p-4f, 0x1.191224p-78f, 0x1.f966fp-46f,
     0x1.75b70ap-83f, 0x1.40d2cap-18f, 0x1.a89d88p-73f, 0x1.e805acp-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5251a6p-23f, 0x1.17014ap-110f,
     0x1.c2ac1ap-59f, 0x1.d5a95ep-26f, 0.0f, 0x1.3885ccp-5f, 0x1.2f88b4p-113f,
     0x1.0d480ep-74f, 0.0f, 0.0f, 0x1.b4fea6p-125f, 0x1.7e7feap-58f, 0x1.6cdf0cp-10f,
     0.0f, 0x1.cb7318p-64f, 0.0f, 0.0f, 0x1.e07de6p-108f, 0.0f, 0.0f, 0x1.fb9d92p-54f,
     0x1.d2060ep-110f, 0.0f, 0x1.270fdep-32f, 0.0f, 0x1.dce584p-125f, 0.0f, 0.0f,
     0.0f, 0x1.1b071cp-94f, 0x1.ac4f4p-61f, 0.0f, 0.0f, 0x1.937c0ep-126f,
     0x1.a5d77ep-72f, 0.0f, 0x1.406fdep-73f, 0x1.96d6eap-108f, 0x1.c31544p-21f,
     0x1.9fc4a4p-68f, 0.0f, 0.0f, 0x1.ebedfp-69f, 0x1.437ad2p-112f, 0.0f,
     0x1.9848d6p-100f, 0.0f, 0x1.d8442cp-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a4b46p-93f, 0.0f, 0x1.506ce8p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7612f2p-13f, 0x1.b0af78p-116f, 0.0f, 0.0f, 0.0f, 0x1.726d7p-70f, 0.0f,
     0x1.9973dp-93f, 0x1.f74a52p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.071e2p-88f, 0.0f,
     0.0f, 0x1.3ed1bep-34f, 0x1.54b2dcp-41f, 0x1.1c1cd4p-41f, 0.0f, 0.0f,
     0x1.2c8c2cp-11f, 0.0f, 0x1.93e918p-8f, 0.0f, 0x1.1f0568p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6c956p-70f, 0x1.186fap-90f, 0x1.f0f6fp-62f,
     0x1.6a8024p-110f, 0x1.f9b474p-33f, 0x1.b05a7ap-53f, 0x1.f5899ep-99f,
     0x1.c432a8p-86f, 0.0f, 0.0f, 0x1.597668p-82f, 0x1.cd1e22p-123f, 0x1.f72012p-55f,
     0x1.c9c762p-85f, 0.0f, 0x1.f8b338p-51f, 0.0f, 0x1.6b8f1ap-119f, 0x1.ce0edp-106f,
     0x1.cd3084p-104f, 0x1.408728p-112f, 0.0f, 0x1.07ed48p-10f, 0x1.2d8204p-52f, 0.0f,
     0.0f, 0.0f, 0x1.0f4fcep-6f, 0x1.cdfab2p-113f, 0x1.55113ep-85f, 0x1.2eba18p-32f,
     0.0f, 0x1.8d572ap-110f, 0x1.a7bcb4p-63f, 0x1.8e5942p-102f, 0x1.889beap-101f,
     0x1.763d62p-22f, 0x1.26401ap-96f, 0.0f, 0x1.7a337p-74f, 0x1.93c1dap-1f,
     0x1.f78f34p-65f, 0.0f, 0x1.76c568p-75f, 0x1.3d234cp-17f, 0.0f, 0x1.680c34p-12f,
     0x1.ba0db8p-70f, 0.0f, 0x1.8f22bp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4b414p-6f, 0x1.2d2f0cp-68f, 0x1.c2ef5cp-28f, 0.0f, 0x1.0e249cp-96f,
     0x1.3af668p-78f, 0.0f, 0.0f, 0.0f, 0x1.79d5bp-111f, 0x1.59ade4p-116f,
     0x1.a5f82ep-104f, 0x1.5eee7p-35f, 0.0f, 0x1.d293aep-117f, 0x1.aba0d8p-6f, 0.0f,
     0.0f, 0x1.f4821ep-61f, 0.0f, 0x1.c9e9fap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.16ec9p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1efe2p-71f, 0.0f,
     0x1.9880ccp-105f, 0x1.f89b9ap-74f, 0.0f, 0x1.759ceep-40f, 0.0f, 0.0f,
     0x1.be3f64p-61f, 0.0f, 0x1.a64ccp-32f, 0x1.b9b1aep-64f, 0x1.864c5ap-69f,
     0x1.70fc92p-19f, 0x1.a06876p-107f, 0.0f, 0.0f, 0x1.5d668ep-99f, 0.0f, 0.0f, 0.0f,
     0x1.aa25e2p-18f, 0.0f, 0x1.99062cp-7f, 0.0f, 0x1.572622p-93f, 0.0f,
     0x1.3715d2p-109f, 0x1.7553aep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbe69ap-55f, 0.0f,
     0x1.fb1eecp-7f, 0x1.53d2c4p-115f, 0.0f, 0.0f, 0x1.d0b5e2p-119f, 0.0f, 0.0f,
     0x1.5df64ep-116f, 0x1.330f3ep-43f, 0.0f, 0x1.0cd596p-17f, 0.0f, 0.0f,
     0x1.bab2cap-32f, 0.0f, 0.0f, 0x1.84f7cp-72f, 0.0f, 0.0f, 0x1.58733p-86f, 0.0f,
     0x1.d6245ep-62f, 0.0f, 0x1.b5ac1p-42f, 0x1p0f, 0.0f, 0x1.3df97p-80f, 0.0f,
     0x1.6092c8p-34f, 0.0f, 0x1.d2367ep-61f, 0x1.096056p-48f, 0x1.c9cf34p-43f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d61af2p-48f, 0x1.3199a8p-72f, 0.0f, 0x1.63c048p-30f,
     0.0f, 0x1.8342bp-102f, 0.0f, 0.0f, 0.0f, 0x1.bd5ad8p-8f, 0.0f, 0x1.eb3038p-86f,
     0x1.e92e46p-125f, 0.0f, 0x1.e4e348p-103f, 0x1.cb8486p-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0fc6a2p-69f, 0.0f, 0.0f, 0x1.776b1p-8f, 0x1.9777aep-91f,
     0x1.234888p-34f, 0.0f, 0x1.34516ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.074598p-72f, 0.0f, 0.0f, 0x1.4270c2p-11f, 0x1.635ecep-108f, 0.0f, 0.0f,
     0x1.2e3be4p-85f, 0x1.e5a6cep-83f, 0x1.c4fb3p-61f, 0x1.ffa97cp-37f,
     0x1.37dd42p-65f, 0x1.c2915cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e6c4ap-97f, 0.0f,
     0x1.8df984p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.098ac4p-67f, 0.0f, 0.0f,
     0x1.30f606p-5f, 0x1.f57e66p-51f, 0.0f, 0.0f, 0x1.93f708p-56f, 0.0f, 0.0f,
     0x1.9908d2p-61f, 0x1.10f756p-43f, 0x1.b635d4p-103f, 0.0f, 0x1.201a88p-15f, 0.0f,
     0.0f, 0x1.21b602p-107f, 0.0f, 0x1.c6da3ep-71f, 0.0f, 0.0f, 0.0f, 0x1.3d78ap-123f,
     0.0f, 0.0f, 0.0f, 0x1.551318p-50f, 0.0f, 0x1.339474p-125f, 0.0f,
     0x1.75a056p-114f, 0x1.8c37d4p-44f, 0.0f, 0x1.848f4cp-29f, 0x1.c5f744p-49f, 0.0f,
     0x1.d044f2p-97f, 0x1.4d2c86p-15f, 0x1.e0bfd6p-61f, 0x1.b760fcp-87f,
     0x1.d54f82p-1f, 0.0f, 0x1.3c9034p-18f, 0x1.5f9d6p-11f, 0.0f, 0x1.e0d098p-31f,
     0.0f, 0x1.e679b6p-41f, 0x1.cbf21ap-103f, 0x1.64f4bap-52f, 0x1.0523c4p-56f,
     0x1.bb8506p-116f, 0.0f, 0x1.d507a4p-6f, 0x1.c72c9ap-91f, 0x1.7ccc76p-6f,
     0x1.57f2dep-79f, 0x1.e0450cp-8f, 0.0f, 0x1.4e605cp-88f, 0x1.f9cf5ep-95f,
     0x1.dcf498p-86f, 0.0f, 0.0f, 0.0f, 0x1.e3e9eep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.411522p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.588a46p-115f, 0.0f,
     0x1.48a7d4p-71f, 0.0f, 0.0f, 0x1.b56132p-121f, 0.0f, 0x1.91191cp-105f,
     0x1.43cfd8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5893b2p-98f, 0.0f, 0.0f,
     0x1.0806ecp-88f, 0.0f, 0x1.3b704p-114f, 0.0f, 0.0f, 0x1.631c4p-57f, 0.0f,
     0x1.bac8d8p-124f, 0.0f, 0.0f, 0x1.01d4ap-116f, 0.0f, 0.0f, 0x1.54c776p-113f,
     0.0f, 0x1.c7ad8ep-31f, 0x1.bf141ep-103f, 0.0f, 0x1.60800ap-7f, 0.0f,
     0x1.29bdccp-7f, 0.0f, 0x1.fd64d2p-44f, 0.0f, 0x1.4ee828p-17f, 0x1.60d0d6p-11f,
     0x1.131322p-55f, 0x1.cfa3ecp-2f, 0.0f, 0x1.e697c8p-9f, 0x1.28db0cp-44f, 0.0f,
     0x1.560e6p-68f, 0.0f, 0x1.02f74p-88f, 0.0f, 0.0f, 0.0f, 0x1.f385e6p-122f,
     0x1.f90d06p-107f, 0x1.cd9512p-35f, 0.0f, 0.0f, 0.0f, 0x1.014e7cp-66f, 0.0f, 0.0f,
     0x1.a80da8p-9f, 0.0f, 0.0f, 0x1.20f084p-113f, 0.0f, 0.0f, 0x1.e1b8dap-5f,
     0x1.29fb5ep-114f, 0.0f, 0x1.97d318p-28f, 0x1.f91754p-31f, 0.0f, 0x1.20611ep-107f,
     0.0f, 0.0f, 0.0f, 0x1.b11a5p-96f, 0x1.6de67ap-36f, 0x1.82beacp-60f,
     0x1.e4d7d8p-54f, 0.0f, 0.0f, 0x1.dc2adcp-119f, 0x1.496b74p-13f, 0.0f,
     0x1.f2588cp-12f, 0.0f, 0x1.8bf604p-15f, 0x1.481fbp-88f, 0.0f, 0x1.f01932p-27f,
     0.0f, 0.0f, 0x1.107a04p-23f, 0x1.8dffb2p-93f, 0.0f, 0.0f, 0.0f, 0x1.9060dep-12f,
     0x1.6d1abep-53f, 0x1.1960d8p-46f, 0x1.e3ec3cp-73f, 0.0f, 0.0f, 0.0f,
     0x1.4febb6p-94f, 0.0f, 0.0f, 0x1.6c2b4cp-72f, 0.0f, 0x1.cf5dbep-72f, 0.0f,
     0x1.497a18p-48f, 0x1.973ec8p-107f, 0x1.918e62p-47f, 0x1.6aeb46p-93f,
     0x1.a62acap-104f, 0.0f, 0x1p0f, 0x1.82e1a2p-18f, 0.0f, 0x1.f97968p-46f,
     0x1.2e2a44p-9f, 0.0f, 0x1.ddf5cap-21f, 0.0f, 0x1.baf446p-62f, 0.0f,
     0x1.3b034ap-72f, 0.0f, 0x1.7c6f98p-42f, 0.0f, 0.0f, 0x1.24019p-91f,
     0x1.a2091cp-95f, 0.0f, 0.0f, 0.0f, 0x1.7bb81ep-17f, 0x1.b6d608p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7fe88p-10f, 0x1.4752b2p-63f,
     0x1.9738p-71f, 0x1.241d8ep-33f, 0.0f, 0.0f, 0x1.efea28p-79f, 0x1.af970ap-49f,
     0x1.029172p-35f, 0x1.8dccfp-89f, 0x1.da1e44p-105f, 0.0f, 0x1.0165f8p-2f, 0.0f,
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
            tmp1 = Sleef_finz_acoshf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_acoshf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acoshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
