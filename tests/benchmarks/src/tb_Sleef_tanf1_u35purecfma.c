/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf1_u35purecfma.c --function Sleef_tanf1_u35purecfma \
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
     0.0f, 0x1.1a1d68p-66f, 0.0f, 0.0f, 0x1.b6a004p-2f, 0x1.e7c4dap-52f,
     0x1.41abbap-102f, 0x1.3065c2p-6f, 0.0f, 0.0f, 0x1.f0a3ecp-97f, 0x1.16066p-62f,
     0.0f, 0.0f, 0x1.ad5adep-113f, 0x1.1ff74p-10f, 0x1.6336aap-5f, 0x1.411306p-33f,
     0.0f, 0.0f, 0x1.9fbf02p-116f, 0x1.26f214p-73f, 0x1.731036p-2f, 0x1.3a8138p-111f,
     0.0f, 0x1.e2f6cep-77f, 0x1.96eb16p-47f, 0x1.258d4p-109f, 0.0f, 0x1.0ef5b6p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5ffcap-90f, 0x1.72714ep-10f, 0.0f,
     0x1.fa09cp-103f, 0x1.84523ep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4073a8p-100f,
     0x1.9d9fccp-103f, 0x1.a82f9ap-92f, 0.0f, 0x1.3463a8p-44f, 0.0f, 0x1.8f720ep-19f,
     0x1.6a8dap-65f, 0.0f, 0.0f, 0x1.d2c5dep-84f, 0x1.0206aap-94f, 0x1.e4f2aep-20f,
     0.0f, 0x1.2f8bp-90f, 0.0f, 0x1.645a7ap-124f, 0.0f, 0x1.57aae8p-52f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.349dcp-4f, 0x1.0a9e6p-32f, 0x1.7746fp-50f, 0x1.60b18cp-36f,
     0x1.c6782ap-86f, 0.0f, 0x1.38b9eap-83f, 0.0f, 0x1.2992bp-44f, 0x1.6310f2p-126f,
     0x1.c27e6p-100f, 0x1.ec9494p-20f, 0x1.fa01dap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f2e64ep-31f, 0x1.90f5a2p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7afc2p-99f, 0x1.cc3e96p-29f, 0x1.51c464p-50f, 0x1.bc5d9ap-114f, 0.0f,
     0x1.0c740ap-54f, 0.0f, 0x1.b24c2p-80f, 0x1.ff8262p-29f, 0x1.4c0b02p-62f, 0.0f,
     0.0f, 0x1.f053ccp-2f, 0x1.c31cd6p-92f, 0x1.1d6846p-93f, 0x1.c9069cp-76f,
     0x1.eb94c8p-124f, 0.0f, 0x1.16c638p-123f, 0x1.f50b56p-101f, 0.0f,
     0x1.84f7a4p-14f, 0.0f, 0x1.065caep-120f, 0.0f, 0x1.2d1b3ap-110f, 0.0f,
     0x1.3f61acp-9f, 0x1.1503c8p-69f, 0.0f, 0.0f, 0x1.bf8f2cp-3f, 0x1.39823cp-96f,
     0x1.db90ccp-70f, 0.0f, 0.0f, 0.0f, 0x1.850f02p-40f, 0x1.8ad5bp-123f, 0.0f,
     0x1.8cd51cp-67f, 0x1.c00a92p-121f, 0.0f, 0x1.f666d4p-123f, 0.0f,
     0x1.634f76p-116f, 0x1.bde09ap-72f, 0x1.4b34dp-111f, 0x1.5a4544p-92f, 0.0f,
     0x1.863714p-77f, 0.0f, 0.0f, 0x1.68858ep-63f, 0x1.6d3652p-102f, 0.0f,
     0x1.2450fp-10f, 0x1.c450a6p-78f, 0.0f, 0.0f, 0.0f, 0x1.7c1c8ep-68f, 0.0f, 0.0f,
     0x1.330c9p-53f, 0x1.f1cef4p-44f, 0.0f, 0.0f, 0x1.f6c566p-109f, 0.0f,
     0x1.e2ae68p-88f, 0x1.f8e49cp-112f, 0.0f, 0.0f, 0.0f, 0x1.382ac6p-61f, 0.0f, 0.0f,
     0x1.6b03cap-10f, 0.0f, 0.0f, 0x1.29573cp-35f, 0.0f, 0x1.079bep-114f,
     0x1.e09282p-66f, 0.0f, 0.0f, 0.0f, 0x1.70e0d6p-82f, 0x1.cb61d4p-106f, 0.0f,
     0x1.59d478p-51f, 0x1.04c53cp-79f, 0x1.1bfbbp-23f, 0.0f, 0.0f, 0.0f,
     0x1.4262p-85f, 0.0f, 0x1.5532d6p-78f, 0.0f, 0.0f, 0.0f, 0x1.3aa282p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.133f34p-123f, 0.0f, 0x1.1fafap-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7abap-109f, 0x1.c19da4p-74f, 0x1.0d667ap-29f, 0.0f, 0x1.ba9c72p-78f,
     0.0f, 0.0f, 0x1.f49af4p-34f, 0.0f, 0x1.66425ap-49f, 0x1.f83e62p-35f, 0.0f, 0.0f,
     0.0f, 0x1.1651cp-87f, 0x1.f7e318p-90f, 0x1.2d3248p-31f, 0.0f, 0.0f,
     0x1.9bc91ep-6f, 0.0f, 0x1.de5c44p-37f, 0x1.327e96p-59f, 0.0f, 0x1.3fe91cp-80f,
     0x1.7daa16p-18f, 0x1.ecd76cp-62f, 0.0f, 0x1.9accf4p-93f, 0.0f, 0x1.8b0b9ap-27f,
     0x1.e7e476p-4f, 0.0f, 0x1.c67198p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f885cp-118f,
     0.0f, 0.0f, 0.0f, 0x1.f721d6p-121f, 0.0f, 0.0f, 0x1.a4344p-66f, 0.0f, 0.0f,
     0x1.697b3ap-104f, 0.0f, 0x1.9e7b7ap-78f, 0x1.541c88p-46f, 0x1.86952ap-94f,
     0x1.3baa0ap-114f, 0x1.4ac428p-124f, 0x1.94a6bp-120f, 0x1.8bb6aep-64f,
     0x1.7111a4p-67f, 0.0f, 0x1.2834b6p-72f, 0x1.09820ep-63f, 0x1.28658cp-104f, 0.0f,
     0x1.fca9d6p-113f, 0x1.bb64dap-111f, 0x1.6c45cp-107f, 0.0f, 0.0f, 0x1.ef136ep-42f,
     0x1.04683ap-22f, 0x1.2c97c4p-4f, 0.0f, 0x1.00a94ap-10f, 0x1.4a645p-72f, 0.0f,
     0x1.e05db8p-31f, 0x1.14b28ep-70f, 0.0f, 0x1.9b27aap-80f, 0.0f, 0.0f,
     0x1.3d90f2p-91f, 0.0f, 0.0f, 0x1.72596cp-76f, 0.0f, 0x1.eb7836p-102f, 0.0f, 0.0f,
     0x1.94143p-80f, 0.0f, 0x1.af0b08p-18f, 0.0f, 0x1.39b5b4p-126f, 0.0f,
     0x1.4ec11ep-57f, 0x1.6c39p-82f, 0.0f, 0.0f, 0.0f, 0x1.9d9c42p-17f, 0.0f, 0.0f,
     0x1.b7eae4p-118f, 0.0f, 0x1.a9457ep-38f, 0.0f, 0x1.e7d72ap-13f, 0x1.0b465ep-46f,
     0.0f, 0x1.ce37b8p-90f, 0x1.6e4198p-85f, 0x1.68265p-75f, 0.0f, 0.0f, 0.0f,
     0x1.df468ep-112f, 0x1.3af9fep-25f, 0.0f, 0.0f, 0.0f, 0x1.739456p-18f,
     0x1.202af4p-10f, 0x1.917838p-106f, 0x1.7cdea6p-73f, 0.0f, 0.0f, 0x1.5f3aap-37f,
     0x1p0f, 0.0f, 0x1.a16d7p-62f, 0.0f, 0x1.bab8c4p-19f, 0x1.d8567cp-48f, 0.0f, 0.0f,
     0x1.d352bap-67f, 0.0f, 0.0f, 0.0f, 0x1.93665ap-38f, 0x1.262afap-112f,
     0x1.4c2c5ep-39f, 0.0f, 0x1.bp-73f, 0x1.b26f0cp-42f, 0x1.388334p-33f,
     0x1.e86db8p-71f, 0.0f, 0x1.a7874cp-82f, 0.0f, 0.0f, 0x1.1e60f2p-117f, 0.0f, 0.0f,
     0.0f, 0x1.490de6p-17f, 0x1.075938p-18f, 0x1.a403eep-33f, 0.0f, 0x1.4eee4p-86f,
     0.0f, 0.0f, 0x1.82172ep-13f, 0x1.8a524p-73f, 0.0f, 0x1.a416b8p-48f, 0.0f, 0.0f,
     0x1.6f2f16p-12f, 0x1.f328aap-125f, 0x1.0b368ep-59f, 0.0f, 0x1.bebedap-78f,
     0x1.6097c4p-104f, 0x1.98c3e2p-56f, 0.0f, 0.0f, 0x1.00e8cp-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dec4eep-17f, 0x1.c0ae3cp-34f, 0.0f, 0.0f, 0x1.da4f1ep-17f,
     0x1.97e34ep-30f, 0.0f, 0.0f, 0x1p0f, 0x1.b1543ap-35f, 0.0f, 0.0f, 0.0f,
     0x1.ffe15ap-92f, 0.0f, 0x1.792634p-91f, 0.0f, 0.0f, 0x1.535caap-110f,
     0x1.e4c0bp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57dbdp-32f,
     0x1.8d087ap-20f, 0x1.e5b3bcp-42f, 0.0f, 0x1.039e92p-65f, 0.0f, 0.0f,
     0x1.a6f4f6p-33f, 0x1.3df712p-35f, 0.0f, 0x1.c4b4dep-66f, 0.0f, 0.0f,
     0x1.b2188cp-17f, 0x1.ff42a8p-55f, 0x1.29b426p-56f, 0.0f, 0x1.44805ap-96f, 0.0f,
     0.0f, 0x1.e9af26p-4f, 0x1.ecb4a6p-67f, 0.0f, 0x1.1b814cp-112f, 0x1.dbad12p-96f,
     0.0f, 0.0f, 0.0f, 0x1.e5606p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d79d6p-49f, 0.0f,
     0.0f, 0x1.24a80ap-60f, 0x1.853dd4p-32f, 0x1.4f9948p-5f, 0x1.aa00dp-59f, 0.0f,
     0.0f, 0.0f, 0x1.30763ep-102f, 0.0f, 0x1.e4185p-69f, 0.0f, 0.0f, 0x1.8ae558p-14f,
     0x1.574086p-12f, 0.0f, 0x1.f7ced4p-1f, 0.0f, 0.0f, 0x1.442cccp-19f,
     0x1.dfc0e4p-32f, 0.0f, 0.0f, 0x1.aecc6ap-113f, 0.0f, 0.0f, 0x1.bc1e94p-1f,
     0x1.77175p-72f, 0.0f, 0x1.92b244p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c107cep-61f, 0x1.2ff366p-85f, 0.0f, 0x1.0ea78ep-51f,
     0x1.8f9054p-4f, 0x1.3b33fcp-114f, 0.0f, 0.0f, 0x1.eebec2p-25f, 0x1.43d682p-61f,
     0.0f, 0x1.7cdb06p-67f, 0.0f, 0.0f, 0.0f, 0x1.cce9a6p-100f, 0.0f, 0x1.2065d2p-83f,
     0x1.18a014p-45f, 0x1.65417cp-40f, 0x1.06ca3p-121f, 0x1.d7b7cap-105f, 0.0f,
     0x1.e5e7cep-59f, 0x1.56302ap-47f, 0.0f, 0.0f, 0.0f, 0x1.1897f4p-120f,
     0x1.33d956p-100f, 0x1.8dc098p-107f, 0.0f, 0.0f, 0x1.729b9cp-108f,
     0x1.df0ecp-107f, 0x1.cd9172p-5f, 0x1.eb67ecp-49f, 0x1.df0998p-44f, 0x1.455d8p-2f,
     0.0f, 0.0f, 0x1.57f2f8p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c2fdccp-23f, 0.0f, 0.0f, 0.0f, 0x1.5595ccp-69f, 0.0f, 0.0f, 0x1.6c2f5p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3164e2p-126f, 0x1.53b6dcp-81f, 0.0f,
     0x1.fa1f64p-51f, 0x1.4d8904p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10c97ap-98f,
     0x1.db618cp-94f, 0x1.f376e6p-70f, 0x1.d0be7ap-80f, 0.0f, 0.0f, 0x1.0a8706p-9f,
     0x1.55d102p-36f, 0x1.98142p-98f, 0.0f, 0x1.480b8ap-4f, 0.0f, 0.0f, 0.0f,
     0x1.040b6ap-82f, 0x1.30eefap-10f, 0x1.9f8a0ap-29f, 0.0f, 0.0f, 0x1.941ae4p-114f,
     0.0f, 0x1p0f, 0.0f, 0x1.f3e032p-96f, 0x1.a08384p-106f, 0.0f, 0x1.75df98p-126f,
     0.0f, 0x1.2edce6p-28f, 0x1.ccc5aap-107f, 0.0f, 0x1.35ffbp-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f75e12p-79f, 0.0f, 0x1.c64f4p-5f,
     0x1.88abd4p-80f, 0.0f, 0x1.95bf7ap-16f, 0x1.5b1d42p-108f, 0x1.bd6eaap-73f, 0.0f,
     0.0f, 0x1.882fc2p-7f, 0.0f, 0.0f, 0x1.8fefeep-4f, 0x1.95c858p-6f,
     0x1.13fcfcp-109f, 0.0f, 0.0f, 0x1.7e8e56p-43f, 0x1.22cc9cp-28f, 0.0f,
     0x1.198cf8p-71f, 0x1.4a3c6ap-29f, 0x1.00c83ep-9f, 0x1.07e48ep-66f, 0.0f,
     0x1.3b6416p-75f, 0x1.eef434p-23f, 0x1.767384p-47f, 0x1.08e036p-121f, 0.0f,
     0x1.5efd04p-106f, 0x1.fe84cp-65f, 0.0f, 0x1.ea21cep-106f, 0.0f, 0x1.86563cp-60f,
     0.0f, 0x1.342b6ep-73f, 0x1.c1b6e8p-99f, 0.0f, 0x1.2c656ap-102f, 0x1.d1f4f6p-4f,
     0x1.6e67eep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1p0f, 0x1.59a872p-97f,
     0.0f, 0x1.2193dep-7f, 0x1.091a3cp-43f, 0x1.9441d2p-25f, 0.0f, 0.0f, 0.0f,
     0x1.cc76d8p-108f, 0.0f, 0.0f, 0.0f, 0x1.a7673ep-16f, 0x1.569676p-11f,
     0x1.8547d6p-19f, 0x1.3c6fe8p-26f, 0.0f, 0.0f, 0.0f, 0x1.836776p-35f,
     0x1.7ab9a6p-102f, 0x1.869c18p-82f, 0x1.e01da2p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d29034p-61f, 0.0f, 0.0f, 0.0f, 0x1.8d388ep-118f, 0.0f, 0.0f, 0.0f,
     0x1.e1214p-118f, 0.0f, 0.0f, 0.0f, 0x1.269b92p-47f, 0x1.880a8cp-87f, 0.0f, 0.0f,
     0x1.29a958p-23f, 0x1.984fd6p-102f, 0.0f, 0x1.748fep-2f, 0x1.d480e4p-40f,
     0x1.6c084ap-121f, 0.0f, 0.0f, 0.0f, 0x1.c2bcep-126f, 0x1.8c39bap-15f, 0.0f,
     0x1.db2ac2p-10f, 0x1.ae1f1p-41f, 0.0f, 0x1.ea3b06p-52f, 0x1.4a5c78p-32f,
     0x1.995ff6p-75f, 0.0f, 0x1.3c6344p-52f, 0.0f, 0.0f, 0.0f, 0x1.981b84p-34f, 0.0f,
     0.0f, 0x1.6acdb6p-55f, 0.0f, 0.0f, 0.0f, 0x1.ebf596p-122f, 0.0f, 0.0f,
     0x1.90b586p-26f, 0x1.d69e38p-68f, 0.0f, 0x1.6c94cap-14f, 0.0f, 0x1.fc59fep-22f,
     0x1.6b7c36p-126f, 0x1.428eb4p-114f, 0.0f, 0x1.db6766p-74f, 0.0f, 0.0f,
     0x1.5f3186p-8f, 0x1.b7001ap-58f, 0x1.d9e846p-91f, 0.0f, 0x1.46342cp-14f, 0.0f,
     0x1.27d9fap-66f, 0.0f, 0x1.642edp-106f, 0x1.5f5b78p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2d21p-30f, 0x1.b99a72p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b911ap-87f, 0.0f, 0.0f, 0x1.5ecfap-99f, 0.0f, 0.0f, 0x1.e66d5p-113f,
     0x1.1a06f4p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.682caep-27f, 0.0f, 0.0f, 0.0f,
     0x1.9724a2p-88f, 0x1.fb2d86p-89f, 0x1.53247ep-106f, 0.0f, 0x1.fa6b54p-85f,
     0x1.1272aep-109f, 0x1.c1a55ap-23f, 0x1.8af96ap-10f, 0x1.9b9318p-65f,
     0x1.d5f7fap-36f, 0x1.38dfd2p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1eb0bcp-119f,
     0x1.d8bf32p-19f, 0x1.9d203ap-68f, 0.0f, 0.0f, 0x1.a95a72p-103f, 0.0f, 0.0f,
     0x1.1876dp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5441f4p-103f, 0.0f, 0.0f,
     0x1.0b21bcp-69f, 0x1.d2aafep-107f, 0x1.3a9024p-114f, 0x1.3035a4p-26f,
     0x1.0dfa1cp-11f, 0.0f, 0.0f, 0.0f, 0x1.5944dp-114f, 0x1.56c308p-124f,
     0x1.b4473ap-2f, 0.0f, 0x1.4e3d0ap-95f, 0x1.21d3cp-46f, 0x1.8d2bep-32f, 0.0f,
     0x1.ce5446p-40f, 0.0f, 0.0f, 0.0f, 0x1.c9cdf2p-16f, 0x1.51ac78p-59f,
     0x1.a6d76ap-91f, 0x1.841966p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0b78ap-29f, 0.0f,
     0x1.b9b958p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c827fep-39f, 0.0f, 0.0f,
     0x1.d3c74ap-86f, 0.0f, 0x1.a4467p-120f, 0x1.5ccceap-122f, 0.0f, 0.0f,
     0x1.ea76a2p-60f, 0x1.d5d2fcp-4f, 0x1.bcb6f8p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39e798p-88f, 0x1.45abbep-11f, 0.0f, 0.0f, 0x1.ce120ap-14f, 0x1.a2652cp-65f,
     0x1.6b50d6p-119f, 0.0f, 0.0f, 0x1.c2c68p-40f, 0.0f, 0x1.72facp-81f,
     0x1.0ef86cp-54f, 0x1.c7a0dep-78f, 0.0f, 0.0f, 0x1.0ea68ep-65f, 0.0f, 0.0f,
     0x1.26998cp-67f, 0x1.8e6414p-24f, 0.0f, 0.0f, 0x1.23836ap-85f, 0.0f,
     0x1.662b84p-50f, 0x1.0b815p-110f, 0x1.7ac5cp-114f, 0x1.bef41ep-23f, 0.0f, 0.0f,
     0.0f, 0x1.19b772p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8acfp-42f, 0.0f,
     0x1.17141ap-119f, 0.0f, 0.0f, 0x1.4b667p-52f, 0x1.71cd8p-2f, 0.0f,
     0x1.f01502p-53f, 0.0f, 0x1.cde032p-101f, 0x1.58f04p-53f, 0.0f, 0.0f,
     0x1.1f7f9ap-5f, 0x1.ef182ap-5f, 0.0f, 0x1.c4aa58p-73f, 0.0f, 0.0f,
     0x1.26f1ep-24f, 0.0f, 0x1.c6d23ap-41f, 0.0f, 0x1.cf186ep-15f, 0.0f,
     0x1.da3668p-91f, 0.0f, 0x1.2809c2p-55f, 0.0f, 0.0f, 0.0f, 0x1.de9198p-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.697c38p-65f, 0.0f, 0x1.baf978p-108f, 0.0f, 0.0f,
     0x1.935992p-10f, 0.0f, 0x1.4835d6p-73f, 0x1.239f0ep-76f, 0x1.b9bc6ep-94f, 0.0f,
     0x1.1f6d94p-31f, 0x1.78dda4p-29f, 0.0f, 0.0f, 0x1.2fb9bap-42f, 0.0f, 0.0f,
     0x1.f38fbep-52f, 0x1.bb158cp-10f, 0x1.634f5cp-18f, 0x1.2b591ap-119f,
     0x1.206ec2p-44f, 0x1.4f911p-104f, 0.0f, 0x1.4463eep-34f, 0.0f, 0x1.6b7104p-20f,
     0.0f, 0x1.191a6ap-76f, 0.0f, 0x1p0f, 0x1.dee4dcp-51f, 0x1.2a7cc2p-105f,
     0x1.30c97ep-29f, 0x1.eae114p-58f, 0x1.c86f26p-117f, 0.0f, 0.0f, 0x1.fa532ap-103f,
     0.0f, 0.0f, 0x1.e33abep-35f, 0.0f, 0x1.80dec2p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.814e0ap-48f, 0x1.6f25eap-77f
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
            tmp1 = Sleef_tanf1_u35purecfma(tmp0);
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
    printf("Sleef_tanf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
