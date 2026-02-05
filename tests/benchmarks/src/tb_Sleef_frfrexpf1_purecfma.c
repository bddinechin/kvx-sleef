/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpf1_purecfma.c --function \
 *     Sleef_frfrexpf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.503724p-96f, 0.0f, 0x1.a4f87p-65f, 0.0f, 0x1.f529eep-5f, 0.0f,
     0x1.c8c046p-100f, 0.0f, 0.0f, 0x1.4111aep-123f, 0x1.6ed62ep-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3efbcp-25f, 0x1.4ffc5cp-82f,
     0x1.3b3a4ap-53f, 0.0f, 0x1.957ca4p-22f, 0.0f, 0x1.61ee0ep-37f, 0x1.990606p-97f,
     0.0f, 0.0f, 0x1.177acep-81f, 0.0f, 0x1.3384fcp-49f, 0x1.e6df4p-122f,
     0x1.56125ep-83f, 0.0f, 0x1.dc582ep-98f, 0x1.0f6274p-20f, 0.0f, 0.0f,
     0x1.1b7e4p-126f, 0.0f, 0.0f, 0x1.1afd3ap-97f, 0.0f, 0x1.d43ae6p-117f, 0.0f,
     0x1.502184p-35f, 0x1.f9e288p-79f, 0x1.9bf618p-16f, 0x1.a743bcp-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.796fd4p-100f, 0x1.c4858cp-60f, 0x1.3d8fe2p-79f, 0x1.1c69e6p-85f,
     0.0f, 0.0f, 0x1.298e6ep-110f, 0.0f, 0x1.933d52p-83f, 0.0f, 0.0f, 0x1.02c5bp-117f,
     0x1.daacbp-22f, 0x1.1ff5d2p-96f, 0x1.b61b4ep-19f, 0x1.a2a2d8p-67f,
     0x1.fbc03cp-19f, 0x1.97117cp-16f, 0.0f, 0.0f, 0x1.59a12ap-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.acd31cp-43f, 0.0f, 0.0f, 0x1.dff92ap-103f, 0x1.ad9634p-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4fe66p-31f, 0x1.6c5058p-44f, 0x1.129beap-36f,
     0x1.ab3d5p-89f, 0x1.163fdap-57f, 0.0f, 0.0f, 0x1.87aa1p-63f, 0.0f,
     0x1.60c03ap-35f, 0x1.a01af6p-62f, 0x1.ce6bacp-41f, 0x1.46ce08p-119f,
     0x1.8b5b02p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aad202p-64f, 0.0f,
     0.0f, 0x1.915d36p-40f, 0x1.0af7c8p-98f, 0.0f, 0.0f, 0.0f, 0x1.c40d54p-123f, 0.0f,
     0.0f, 0x1.1a13c2p-56f, 0.0f, 0.0f, 0.0f, 0x1.539498p-32f, 0x1.b61f4ap-35f, 0.0f,
     0x1.940d52p-124f, 0x1.9ad7cp-69f, 0x1.85e5e4p-70f, 0x1.9120e2p-95f,
     0x1.90bfecp-12f, 0x1.55d296p-39f, 0x1.fc9cfep-22f, 0x1.f32606p-51f,
     0x1.5d67e6p-68f, 0.0f, 0x1.7642d8p-73f, 0x1.3c6d1cp-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b2854cp-121f, 0x1.f44118p-106f, 0x1.3d4c98p-95f, 0x1.95ea1p-103f,
     0.0f, 0x1.be483ep-16f, 0.0f, 0x1.90881p-97f, 0x1.a5ddd4p-11f, 0x1.de3caep-85f,
     0x1.a115c8p-3f, 0.0f, 0.0f, 0x1.25ae9ep-49f, 0x1.878cc4p-113f, 0.0f, 0.0f,
     0x1.8cb314p-125f, 0.0f, 0x1.fec266p-115f, 0.0f, 0x1.458cd2p-58f, 0x1.6e3ba8p-79f,
     0x1.13c936p-77f, 0.0f, 0.0f, 0x1.71a706p-103f, 0.0f, 0.0f, 0.0f,
     0x1.7fe09ap-114f, 0.0f, 0.0f, 0x1.77c3c2p-26f, 0x1.eb5fccp-4f, 0x1.a08f3p-51f,
     0x1.7ec5e6p-46f, 0.0f, 0x1.3eb03ep-125f, 0x1.3bef24p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e53f8cp-110f, 0x1.18c05ap-95f, 0.0f, 0.0f, 0x1.6a076ap-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.71f0d4p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df5ee4p-49f, 0.0f,
     0x1.a60b9p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9def6p-54f,
     0x1.7e2fd2p-46f, 0.0f, 0x1.973536p-72f, 0.0f, 0.0f, 0x1.114368p-106f,
     0x1.22fcaep-33f, 0.0f, 0x1.5d330ap-92f, 0x1.f8a676p-18f, 0x1.a85152p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.abbcc4p-116f, 0x1.3323f6p-8f, 0.0f, 0x1.226906p-78f, 0.0f,
     0.0f, 0.0f, 0x1.30ba24p-98f, 0.0f, 0x1.97745p-44f, 0.0f, 0.0f, 0x1.6e068cp-126f,
     0x1.f1c188p-122f, 0x1.fa9d72p-15f, 0.0f, 0x1.a90eaap-24f, 0.0f, 0.0f,
     0x1.77c82ep-77f, 0.0f, 0x1p0f, 0.0f, 0x1.547aeep-23f, 0x1.e877ccp-20f,
     0x1.b3fcfap-95f, 0.0f, 0.0f, 0x1.a9d5e4p-94f, 0.0f, 0.0f, 0x1.973494p-80f,
     0x1.2ff00cp-125f, 0.0f, 0x1.8dee02p-2f, 0x1.e14abap-22f, 0.0f, 0x1.e990fcp-99f,
     0.0f, 0x1.d926a6p-78f, 0x1.975906p-75f, 0x1.a1b44ep-79f, 0.0f, 0x1.c2206ap-119f,
     0.0f, 0.0f, 0x1.e43a3p-70f, 0x1.cf793ep-52f, 0.0f, 0x1.abebcep-103f, 0.0f,
     0x1.a7f6dcp-83f, 0x1.28be8ep-119f, 0.0f, 0x1.f2cdfp-74f, 0.0f, 0x1.5715aap-68f,
     0.0f, 0.0f, 0.0f, 0x1.6269b4p-50f, 0.0f, 0x1.4b496p-103f, 0x1.fb1e98p-14f,
     0x1.b39c32p-53f, 0x1.c4d162p-76f, 0.0f, 0x1.f8d896p-120f, 0.0f, 0.0f, 0.0f,
     0x1.fb7e56p-46f, 0.0f, 0x1.876c82p-116f, 0x1.ea6eb2p-118f, 0x1.d95592p-70f, 0.0f,
     0.0f, 0.0f, 0x1.69d9e2p-47f, 0x1.74dee8p-39f, 0x1.c01d26p-57f, 0x1.2b61fep-78f,
     0x1.12805ep-34f, 0.0f, 0.0f, 0x1.c2dfc8p-113f, 0x1.8d2f0ep-102f, 0.0f,
     0x1.e8bae4p-57f, 0x1.323d6ep-19f, 0.0f, 0x1.2f0638p-107f, 0x1.eb0e94p-31f, 0.0f,
     0.0f, 0x1.677672p-92f, 0.0f, 0x1.da8408p-90f, 0.0f, 0x1.97702ap-117f,
     0x1.f9ed2ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b07446p-123f, 0x1.eb557cp-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cfc6bep-4f, 0x1.46a622p-121f, 0.0f, 0.0f, 0x1.3596aap-87f,
     0.0f, 0.0f, 0.0f, 0x1.5d2f8ap-38f, 0x1.42d2d4p-24f, 0x1.590e9cp-88f, 0.0f,
     0x1.e12f52p-72f, 0.0f, 0x1.36b95cp-39f, 0.0f, 0.0f, 0x1.df5a9ep-99f, 0.0f, 0.0f,
     0.0f, 0x1.7130d6p-97f, 0x1.041b02p-124f, 0.0f, 0x1.bd1bfep-58f, 0x1.825548p-48f,
     0.0f, 0x1.da968cp-61f, 0.0f, 0.0f, 0.0f, 0x1.792eccp-4f, 0x1.fb1c8cp-124f,
     0x1.2eafeap-49f, 0x1.989f54p-17f, 0x1.6f3244p-66f, 0.0f, 0x1.1c7d1ap-91f, 0.0f,
     0.0f, 0.0f, 0x1.375738p-96f, 0x1.218092p-87f, 0x1.a879a4p-46f, 0.0f,
     0x1.9ff6f2p-110f, 0x1.f3f52ap-85f, 0x1.4bf59p-18f, 0.0f, 0.0f, 0x1.7baa0cp-34f,
     0x1.1a8036p-97f, 0.0f, 0x1.e19058p-17f, 0.0f, 0x1.4dd4dap-10f, 0x1.227a82p-75f,
     0x1.fc5c3p-57f, 0.0f, 0.0f, 0x1.113292p-88f, 0.0f, 0x1.81243p-17f,
     0x1.eaac4ap-97f, 0.0f, 0x1.94568ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.855284p-102f, 0x1.0ee012p-10f, 0x1.7fc7ep-105f, 0x1.6370fp-56f, 0.0f, 0.0f,
     0x1.47733cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c134ep-20f, 0x1.b2b368p-106f,
     0x1.1ad494p-32f, 0x1.547246p-66f, 0.0f, 0.0f, 0.0f, 0x1.f7b7cp-25f,
     0x1.4e14f4p-22f, 0x1.6caa7cp-116f, 0x1.1f1abcp-93f, 0x1.7e1c7ep-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ba9f1p-51f, 0.0f, 0x1.efa57ep-82f, 0x1.6e83bp-74f,
     0x1.0dd85ep-114f, 0x1.4697fep-30f, 0x1.fd8b9ap-35f, 0.0f, 0x1.5e237ep-100f, 0.0f,
     0x1.a69b2cp-105f, 0x1.f75434p-29f, 0x1.d6716cp-61f, 0x1.f8bf64p-84f, 0.0f, 0.0f,
     0x1.d94048p-105f, 0x1.2f548ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71f582p-77f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.468abcp-76f, 0x1p0f, 0.0f, 0x1.2ae1b2p-26f, 0.0f,
     0x1.f82b1p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a83edap-102f, 0.0f,
     0x1.75089ep-62f, 0.0f, 0x1.8abd62p-61f, 0x1.68397p-9f, 0x1.b6918ep-7f,
     0x1.33984p-18f, 0.0f, 0.0f, 0x1.897d2cp-67f, 0x1.3d3af6p-14f, 0.0f,
     0x1.f2ff5cp-114f, 0.0f, 0x1.a3ca1p-16f, 0x1.74fb8ap-109f, 0x1.30fa9cp-104f, 0.0f,
     0x1.79c7a4p-17f, 0.0f, 0.0f, 0.0f, 0x1.26514ap-84f, 0x1.500c6p-37f, 0.0f,
     0x1.526028p-115f, 0.0f, 0x1.48da3p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ac894p-100f, 0x1.e1cd4ap-4f, 0x1.7b3806p-118f, 0.0f, 0.0f, 0.0f,
     0x1.ab52c6p-125f, 0.0f, 0x1.0d3a88p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f4b8p-42f,
     0x1.a9d6eep-58f, 0.0f, 0x1.70feep-121f, 0x1.aed462p-91f, 0x1.a4f0a4p-90f, 0.0f,
     0.0f, 0.0f, 0x1.907168p-95f, 0x1.cd49bcp-61f, 0x1.e4aeap-83f, 0x1.24c97cp-68f,
     0.0f, 0x1.d93d6cp-32f, 0.0f, 0x1.b4103ap-103f, 0.0f, 0.0f, 0x1.36916ap-41f, 0.0f,
     0.0f, 0x1.d3a62ap-62f, 0.0f, 0.0f, 0.0f, 0x1.b0c9f8p-45f, 0x1.41ded4p-72f,
     0x1.359326p-115f, 0x1.230a74p-98f, 0.0f, 0x1.65af7ep-7f, 0x1.450204p-17f,
     0x1.349bcp-44f, 0.0f, 0.0f, 0.0f, 0x1.2a2edep-60f, 0.0f, 0x1.7b99c6p-79f,
     0x1.e1ac76p-59f, 0x1.e49edap-86f, 0x1.548838p-24f, 0.0f, 0x1.7f86cep-66f, 0.0f,
     0x1.7c9d02p-96f, 0x1.d0323p-12f, 0.0f, 0x1.d544c6p-87f, 0.0f, 0.0f,
     0x1.798e4cp-100f, 0x1.b4ee24p-78f, 0.0f, 0x1.37dba8p-92f, 0.0f, 0x1.5a228ap-71f,
     0x1.54a5cp-94f, 0.0f, 0x1.787a2cp-48f, 0x1.fcdaap-26f, 0x1.082934p-5f, 0.0f,
     0x1.57c3f2p-25f, 0.0f, 0x1.e94d4ap-100f, 0.0f, 0x1.360926p-94f, 0x1.880db4p-19f,
     0.0f, 0x1.afaa7p-71f, 0x1.71249ap-125f, 0x1.ef3d3cp-79f, 0x1.63cdf6p-24f, 0.0f,
     0x1.5a0c46p-105f, 0.0f, 0x1.871f1ap-55f, 0.0f, 0x1.32bc46p-78f, 0x1.9c23f8p-12f,
     0x1.e86148p-28f, 0x1.b96ffep-67f, 0.0f, 0x1.33ce82p-124f, 0x1.b2288p-97f, 0.0f,
     0x1.558022p-51f, 0x1.b79c18p-17f, 0.0f, 0x1.00715p-4f, 0.0f, 0x1.015784p-116f,
     0x1.96d668p-116f, 0x1.def836p-86f, 0.0f, 0x1.18559ep-6f, 0x1.607726p-41f, 0.0f,
     0x1.d3652ep-2f, 0x1.aa6974p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee2872p-79f, 0x1.0e7632p-96f, 0x1.60b17ep-121f, 0x1.f6546p-28f, 0.0f,
     0x1.e3016cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d6feap-10f, 0.0f, 0x1.2ff5bcp-4f,
     0.0f, 0.0f, 0x1.22879ap-75f, 0.0f, 0.0f, 0x1.59231cp-3f, 0.0f, 0x1.37a05cp-28f,
     0x1.816618p-69f, 0x1.44179p-91f, 0x1.86068ap-39f, 0.0f, 0x1.90be6cp-63f, 0.0f,
     0x1.69f672p-122f, 0x1.bece9ap-64f, 0.0f, 0.0f, 0x1.d097dp-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd2e8ap-121f, 0.0f, 0x1.e246d4p-95f, 0x1.f5da72p-54f,
     0x1.a165c2p-80f, 0x1.93b46p-85f, 0x1.88a702p-33f, 0x1.62086ap-116f,
     0x1.7d6ca4p-110f, 0x1.9bf122p-96f, 0.0f, 0.0f, 0x1.96dap-102f, 0x1.afb9e4p-3f,
     0x1.8d0b32p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e1578p-107f,
     0x1.b48976p-122f, 0.0f, 0x1.63c5f6p-1f, 0x1.dc9f4ap-94f, 0x1.69edp-36f,
     0x1.d210bap-73f, 0.0f, 0.0f, 0x1.702aeep-46f, 0x1.7edf86p-2f, 0.0f,
     0x1.4a637cp-117f, 0.0f, 0x1.af7aa2p-50f, 0.0f, 0.0f, 0.0f, 0x1.a48296p-6f, 0.0f,
     0x1.34f23cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4c292p-125f, 0.0f, 0.0f,
     0x1.ccc562p-42f, 0x1.1f2d62p-88f, 0.0f, 0.0f, 0x1.69a3f2p-28f, 0x1.a5aac4p-126f,
     0.0f, 0x1.ead2ap-19f, 0x1.6a632ep-32f, 0x1.0dd8dep-124f, 0x1.5eb092p-119f,
     0x1.7ce862p-33f, 0x1.b07c7p-55f, 0x1.d0d87p-104f, 0x1.a62556p-54f, 0.0f,
     0x1.bead96p-58f, 0.0f, 0x1.a4022cp-112f, 0x1.2b3506p-91f, 0x1.89a862p-76f,
     0x1.753a6p-8f, 0x1.5c1706p-112f, 0.0f, 0x1.4a0b4p-19f, 0x1.ebaa5cp-114f,
     0x1.9ea384p-26f, 0x1.0252cap-118f, 0.0f, 0x1.348f18p-73f, 0x1.32c0c2p-121f,
     0x1.4c9e44p-62f, 0.0f, 0x1.7c85dcp-105f, 0.0f, 0x1.8a055ep-104f, 0.0f,
     0x1.de4a86p-55f, 0x1.0620eap-31f, 0.0f, 0x1.e0df2cp-30f, 0x1.0e9282p-31f,
     0x1.218f28p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.502a3ap-5f, 0x1.50b45cp-78f, 0.0f,
     0x1.26806p-56f, 0x1.4e5cb6p-23f, 0.0f, 0x1.69a81p-27f, 0x1.8e34dep-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.5f466p-52f, 0x1.d8301p-80f,
     0x1.2796eap-7f, 0.0f, 0x1.3b4c86p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed78ecp-58f,
     0x1.5bbcc4p-122f, 0x1.3d6068p-74f, 0x1.a62376p-70f, 0x1.375cp-22f, 0.0f, 0.0f,
     0x1.5d1cfp-33f, 0x1.062f6p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.872852p-26f, 0x1.c7012ep-105f, 0x1.5324fp-17f, 0x1.ba2c78p-113f,
     0x1.b40e3cp-24f, 0.0f, 0.0f, 0.0f, 0x1.e03432p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cc76ap-25f, 0x1.a8c61cp-4f, 0.0f, 0x1.510d62p-34f, 0x1.ba1292p-3f, 0.0f,
     0x1.af2546p-62f, 0.0f, 0.0f, 0x1.bab8d4p-24f, 0.0f, 0.0f, 0x1.90683cp-12f, 0.0f,
     0.0f, 0x1.669274p-124f, 0x1p0f, 0.0f, 0x1.a5295cp-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3a5032p-42f, 0x1.85ac86p-72f, 0x1.5b6a78p-84f,
     0x1.b2cee4p-91f, 0.0f, 0x1.a6c5a6p-69f, 0x1.2f16p-95f, 0x1.c383cep-82f, 0.0f,
     0x1.e6b872p-116f, 0.0f, 0.0f, 0x1.35a1ap-101f, 0.0f, 0x1.63befep-72f,
     0x1.f6ac56p-84f, 0.0f, 0x1.09e924p-125f, 0.0f, 0x1.7fae4p-65f, 0x1.4ff1ep-88f,
     0x1.6a2dfep-69f, 0.0f, 0.0f, 0.0f, 0x1.4c085ep-90f, 0x1.f8ff94p-62f, 0.0f, 0.0f,
     0.0f, 0x1.7c4e04p-12f, 0.0f, 0x1.d352f8p-71f, 0.0f, 0.0f, 0x1.70ec0ap-56f,
     0x1.2e8f7cp-66f, 0.0f, 0x1.12865ep-88f, 0x1.67b38p-112f, 0.0f, 0x1.b5e582p-49f,
     0x1.cc0f64p-120f, 0x1.4a1bb6p-31f, 0x1.b28876p-59f, 0.0f, 0x1.a6fef6p-87f, 0.0f,
     0x1.7c0fd2p-29f, 0.0f, 0.0f, 0x1.7c3664p-44f, 0x1.e0a24ep-74f, 0.0f,
     0x1.1d36d6p-82f, 0.0f, 0x1.c53602p-22f, 0.0f, 0x1.f262a4p-32f, 0x1.6d7204p-87f,
     0x1.5cb19ap-54f, 0.0f, 0x1.db6656p-70f, 0.0f, 0.0f, 0x1.3abe24p-14f,
     0x1.11ca1ap-119f, 0.0f, 0x1.6286dcp-97f, 0.0f, 0x1.4f6454p-54f, 0x1.0b76e8p-65f,
     0x1.9991b4p-50f, 0.0f, 0.0f, 0x1.344e36p-39f, 0.0f, 0.0f, 0x1.1f5c92p-50f, 0.0f,
     0x1.ccc426p-13f, 0.0f, 0.0f, 0.0f, 0x1.a7fbep-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66e9cep-80f, 0.0f, 0.0f, 0x1.af1018p-49f, 0x1.c6586ap-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.04559ep-70f, 0.0f, 0.0f, 0x1.a2bf64p-81f, 0.0f, 0.0f,
     0x1.ecfeep-113f, 0x1.7e83f4p-16f, 0x1.5f10dcp-42f, 0.0f, 0x1.a802dap-27f, 0.0f,
     0.0f, 0x1.88209ap-64f, 0.0f, 0x1.9e74d8p-23f, 0.0f, 0.0f, 0.0f, 0x1.63e226p-5f,
     0.0f, 0.0f, 0x1.38345ep-2f, 0.0f, 0x1.635bap-6f, 0.0f, 0.0f, 0x1.6618a4p-63f,
     0.0f, 0.0f, 0.0f, 0x1.7a6a8ap-44f, 0x1.9f0352p-107f, 0.0f, 0x1.1623d2p-10f,
     0x1.e3074ap-52f, 0.0f, 0.0f, 0x1.6f49dcp-116f, 0x1.e4adc4p-32f, 0.0f,
     0x1.be9608p-35f, 0x1.78bdaap-80f, 0x1.ef0d5ep-84f, 0x1.2a93dep-6f,
     0x1.36df4ep-38f, 0x1.a6b60ap-8f, 0x1.a7d16cp-92f
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
            tmp1 = Sleef_frfrexpf1_purecfma(tmp0);
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
    printf("Sleef_frfrexpf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_frfrexpf1_purecfma bench acc %a\n", global_bench_acc);
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
