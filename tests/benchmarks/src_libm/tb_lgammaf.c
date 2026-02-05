/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_lgammaf.c --function lgammaf --headers \
 *     math.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c93fdp-57f, 0.0f, 0x1.8de9eap-78f, 0.0f, 0.0f,
     0x1.352eep-84f, 0x1.d3637ep-29f, 0x1.d2d334p-26f, 0x1.5636ecp-46f,
     0x1.dcb39ep-43f, 0.0f, 0x1.6b994cp-89f, 0.0f, 0x1.9128f2p-45f, 0x1.2c0c26p-24f,
     0x1.224132p-92f, 0x1.58b13cp-118f, 0.0f, 0x1.091d8ap-85f, 0.0f, 0x1.dd3d4cp-67f,
     0.0f, 0x1.c32c6ep-119f, 0x1.bb48c2p-71f, 0.0f, 0x1.ede6e2p-102f, 0x1.c03ee8p-21f,
     0.0f, 0x1.ed5decp-95f, 0x1.f8e8bep-2f, 0x1.9ff05ap-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cdabcp-79f, 0.0f, 0x1.a2d05ap-66f, 0.0f, 0.0f, 0x1.ab63b8p-57f,
     0x1.6514c2p-113f, 0.0f, 0x1.f340dcp-118f, 0x1.ba773ep-87f, 0x1.348facp-76f,
     0x1.27782p-111f, 0.0f, 0x1.c8f406p-43f, 0.0f, 0x1.5dce18p-87f, 0.0f,
     0x1.26812ap-102f, 0.0f, 0.0f, 0x1.712ddap-38f, 0.0f, 0.0f, 0x1.8549ecp-64f,
     0x1.174aecp-124f, 0x1.a79becp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b86bap-95f, 0.0f, 0x1.2e783ap-99f, 0x1.8a109ap-54f, 0x1.e34862p-37f,
     0x1.32e78cp-87f, 0x1.7db13ep-62f, 0x1.7a0a5ep-79f, 0.0f, 0x1.fad1d2p-78f,
     0x1.6600f8p-35f, 0x1.7cc9fep-75f, 0x1.063dc8p-13f, 0.0f, 0x1.c576fap-65f,
     0x1.733d22p-122f, 0x1.81740ap-17f, 0x1.3d733ep-86f, 0.0f, 0.0f, 0x1.4199b2p-2f,
     0.0f, 0x1.c7ae48p-96f, 0x1.6bdfbep-65f, 0.0f, 0x1.654ffcp-22f, 0.0f,
     0x1.dace96p-99f, 0.0f, 0x1.b71cbap-107f, 0.0f, 0x1.3b37a4p-30f, 0x1.3905acp-36f,
     0x1.dea90ap-24f, 0.0f, 0x1.67640ap-8f, 0x1.134b6cp-116f, 0.0f, 0.0f,
     0x1.35db12p-55f, 0x1.f82cccp-51f, 0x1.c4f106p-10f, 0.0f, 0x1.852b2p-52f,
     0x1.f747b8p-1f, 0x1.de831ap-89f, 0x1.b18a76p-74f, 0.0f, 0x1.17233ep-10f,
     0x1.7ac2fap-103f, 0x1.42f8e8p-96f, 0.0f, 0.0f, 0x1.b793ap-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dc4384p-6f, 0x1.db03a8p-6f, 0.0f, 0.0f, 0x1.f39cfap-86f, 0.0f,
     0x1.764ef6p-90f, 0.0f, 0x1.981e2p-110f, 0.0f, 0x1.72824ep-104f, 0x1.4886b2p-34f,
     0x1.06b7p-117f, 0x1.6ddcb2p-22f, 0x1.27b294p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.845b26p-3f, 0x1.427034p-101f, 0.0f, 0x1.21a634p-6f, 0.0f, 0.0f,
     0x1.219dd2p-119f, 0x1.696986p-5f, 0.0f, 0.0f, 0x1.6ed21ap-55f, 0.0f, 0.0f,
     0x1.849e6ap-85f, 0x1.e61b16p-34f, 0.0f, 0.0f, 0.0f, 0x1.6262f2p-36f, 0.0f,
     0x1.1199ep-111f, 0x1.d5f35p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc4422p-82f, 0.0f,
     0x1.ca184ap-36f, 0.0f, 0.0f, 0.0f, 0x1.c45d3ap-121f, 0.0f, 0x1.009a26p-118f,
     0x1.26dff6p-120f, 0.0f, 0x1.54e91ap-56f, 0.0f, 0.0f, 0x1.e36dd2p-13f,
     0x1.464b3cp-54f, 0x1.5bcddep-98f, 0x1.a769b8p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfe9dcp-28f, 0.0f, 0x1.775c34p-101f, 0.0f, 0.0f, 0.0f, 0x1.f20cdcp-24f, 0.0f,
     0x1.6a3132p-124f, 0x1.cb9d6ep-102f, 0.0f, 0.0f, 0.0f, 0x1.1a8646p-46f,
     0x1.3052fcp-33f, 0x1.13842cp-10f, 0x1.338186p-95f, 0x1.599bccp-31f, 0.0f,
     0x1.3212c2p-17f, 0.0f, 0x1.daec1ep-4f, 0.0f, 0x1.f06fc2p-40f, 0x1.0fea8p-88f,
     0x1.b44dbcp-113f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f45edap-66f,
     0x1.e0a2d2p-93f, 0x1.7cd4a4p-83f, 0.0f, 0x1.676652p-111f, 0x1.588abcp-107f, 0.0f,
     0x1.be1628p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b89a8ep-115f, 0.0f, 0x1.2e25a8p-89f,
     0x1.a67328p-55f, 0.0f, 0x1.0b2428p-24f, 0x1.9346eap-23f, 0.0f, 0.0f,
     0x1.ec54d6p-3f, 0x1.71aa18p-22f, 0x1.680d8p-111f, 0x1.bece24p-91f, 0.0f,
     0x1.acf9c2p-3f, 0x1.1847e6p-87f, 0x1.30e16cp-35f, 0.0f, 0x1.53c8e8p-74f,
     0x1.398d2ep-12f, 0x1.f29886p-40f, 0x1.ad70eep-91f, 0.0f, 0.0f, 0.0f,
     0x1.44376ap-80f, 0.0f, 0.0f, 0x1.a49636p-68f, 0x1.cfbd76p-86f, 0.0f, 0.0f,
     0x1.68d1fep-106f, 0.0f, 0.0f, 0.0f, 0x1.9d9b9ap-118f, 0x1.609624p-39f,
     0x1.1c69a4p-59f, 0.0f, 0x1.da5bf2p-36f, 0.0f, 0x1.35023ep-82f, 0.0f,
     0x1.369f02p-10f, 0x1.b00528p-84f, 0x1.5a41dp-39f, 0x1.f659fp-45f,
     0x1.695fd6p-99f, 0.0f, 0.0f, 0x1.dc53b6p-56f, 0x1.ba8776p-80f, 0x1.bee566p-56f,
     0.0f, 0.0f, 0x1.7b01d6p-70f, 0x1.59d7cep-29f, 0.0f, 0x1.80bd5cp-78f,
     0x1.d55612p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d9024p-28f, 0.0f, 0.0f, 0.0f,
     0x1.907392p-86f, 0x1.876a96p-125f, 0x1.800f2ep-85f, 0x1.53ffbep-106f, 0.0f,
     0x1.63654ep-119f, 0.0f, 0.0f, 0x1.be7582p-59f, 0.0f, 0x1.0ecd1ap-82f,
     0x1.236adep-104f, 0x1.415da4p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.405daep-87f,
     0.0f, 0x1.f05d68p-6f, 0.0f, 0x1.e5e55ep-18f, 0.0f, 0x1.ac6134p-87f,
     0x1.424eap-78f, 0x1.8a4af8p-8f, 0x1.32192p-19f, 0.0f, 0.0f, 0x1.2345bap-104f,
     0x1.09df7cp-61f, 0x1.74a874p-78f, 0.0f, 0x1.ab22e8p-1f, 0x1.7c7b4cp-17f, 0.0f,
     0.0f, 0x1.48fb5ap-82f, 0.0f, 0.0f, 0x1.a84e84p-35f, 0x1.6d18e2p-81f,
     0x1.5f7718p-121f, 0x1.0c1a4ep-10f, 0.0f, 0.0f, 0x1.27b6c2p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.279cf8p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a0fb8p-125f,
     0x1.7a8b5cp-118f, 0.0f, 0.0f, 0x1.23ff04p-21f, 0x1.1132a2p-44f, 0.0f,
     0x1.a08f9ep-82f, 0x1.85f7f4p-18f, 0x1.6a4fep-118f, 0.0f, 0.0f, 0.0f,
     0x1.850cdep-56f, 0x1.5d1p-64f, 0x1.d49fa4p-65f, 0x1.e739bp-125f, 0.0f,
     0x1.ef6bd4p-60f, 0.0f, 0x1.2e1c16p-47f, 0x1.64b53ep-96f, 0.0f, 0.0f, 0.0f,
     0x1.71fe98p-49f, 0.0f, 0.0f, 0x1.3ea6fap-126f, 0x1.c30aaep-83f, 0.0f,
     0x1.10d136p-14f, 0x1.7a2ebp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61e83ap-62f,
     0x1.fd0854p-122f, 0.0f, 0.0f, 0x1.c8e02ap-6f, 0x1.5d9506p-11f, 0.0f,
     0x1.6e726p-67f, 0x1.41986ep-107f, 0x1.782f84p-81f, 0.0f, 0x1.9488f2p-10f,
     0x1.ecd568p-11f, 0.0f, 0.0f, 0x1.60b33ap-95f, 0x1.348bccp-15f, 0x1.d447acp-10f,
     0x1.d8d83ap-81f, 0x1.03552cp-86f, 0.0f, 0x1.f22936p-91f, 0x1.c9c8a2p-16f, 0.0f,
     0x1.7fc11ep-91f, 0x1.bbeb9p-65f, 0.0f, 0x1.78e288p-99f, 0x1.84bcf6p-17f,
     0x1.0944aap-8f, 0.0f, 0x1.b822dep-114f, 0.0f, 0x1.3404d2p-114f, 0.0f, 0.0f, 0.0f,
     0x1.09d51ep-118f, 0x1.98d52ap-12f, 0x1.d6c7c6p-61f, 0.0f, 0.0f, 0.0f,
     0x1.6354bap-28f, 0.0f, 0.0f, 0x1.95b5c8p-52f, 0.0f, 0x1.d49842p-67f,
     0x1.5ad0aap-100f, 0x1.45eadp-43f, 0.0f, 0.0f, 0x1.753dc2p-35f, 0x1.2ac31ep-40f,
     0.0f, 0.0f, 0x1.6ed318p-93f, 0.0f, 0x1.d130dap-100f, 0.0f, 0x1.60e85ep-92f,
     0x1.284c4ep-110f, 0.0f, 0.0f, 0x1.54b22ep-32f, 0x1.be769p-13f, 0x1.864692p-106f,
     0.0f, 0x1.22c7eap-10f, 0x1.8b49e8p-72f, 0.0f, 0x1.7a4dc8p-91f, 0x1.c763a2p-2f,
     0x1.a1b758p-116f, 0x1.2ebf6ep-11f, 0.0f, 0x1.9c4b58p-13f, 0.0f, 0.0f,
     0x1.375c64p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc3fd6p-98f, 0.0f, 0.0f,
     0x1.76d838p-98f, 0.0f, 0.0f, 0x1.4820dap-14f, 0x1.86d8c2p-34f, 0x1p0f, 0.0f,
     0x1.ef7a8ap-116f, 0.0f, 0.0f, 0x1.f51574p-47f, 0.0f, 0x1.839fb4p-90f,
     0x1.a7d218p-95f, 0.0f, 0.0f, 0.0f, 0x1.555632p-115f, 0x1.0121c8p-17f, 0.0f,
     0x1.3a7bc8p-119f, 0.0f, 0.0f, 0x1.c1fd2p-83f, 0.0f, 0x1.cc506p-18f, 0.0f, 0.0f,
     0x1.53fc68p-9f, 0x1.5021a8p-17f, 0x1.22009cp-110f, 0.0f, 0.0f, 0.0f,
     0x1.38ee7cp-81f, 0.0f, 0x1.c4eb46p-36f, 0x1.51f3c8p-17f, 0x1.7b5714p-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.576048p-93f, 0.0f, 0.0f, 0x1.b64652p-49f, 0x1.26f1e8p-97f,
     0x1.88489cp-19f, 0x1.7094f2p-55f, 0.0f, 0.0f, 0x1.53cbb4p-62f, 0x1.964af8p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6c5e8p-80f, 0x1.73c1cp-9f, 0x1.9a19a6p-48f,
     0x1.3939bep-35f, 0x1.ce6b26p-16f, 0.0f, 0.0f, 0.0f, 0x1.7d7a14p-95f,
     0x1.44d6b2p-67f, 0.0f, 0x1.e57496p-102f, 0x1.ca97ecp-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6fa7cp-81f, 0.0f, 0.0f, 0x1.db5bacp-24f, 0x1.f60c5ap-50f, 0.0f, 0.0f,
     0x1.1a99e4p-107f, 0.0f, 0x1.a202c4p-123f, 0x1.45690ap-20f, 0.0f, 0x1.eb7158p-12f,
     0.0f, 0x1.960898p-68f, 0.0f, 0x1.e14c24p-28f, 0x1.4dadbcp-111f, 0.0f,
     0x1.5f7792p-95f, 0.0f, 0x1.4d76f8p-99f, 0.0f, 0x1.c4c404p-102f, 0.0f, 0.0f,
     0x1.61396p-28f, 0.0f, 0x1.44f7cap-69f, 0.0f, 0.0f, 0x1.4a1774p-65f,
     0x1.fdb294p-64f, 0.0f, 0.0f, 0.0f, 0x1.9c7c48p-28f, 0x1.565d7p-97f, 0.0f,
     0x1.e14988p-76f, 0x1.9e54a4p-53f, 0x1.d366b2p-99f, 0.0f, 0x1.a8487ap-110f,
     0x1.d472aep-106f, 0x1.52bd22p-80f, 0.0f, 0x1.60d7f8p-19f, 0.0f, 0x1.798f16p-50f,
     0x1.8e0108p-109f, 0.0f, 0x1.86edf4p-106f, 0.0f, 0x1.1a788cp-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5ecccp-5f, 0x1.874496p-45f, 0x1.50e07p-70f, 0x1.b8d8acp-13f,
     0x1.6c355ap-57f, 0x1.376c32p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1213e2p-50f, 0.0f, 0.0f, 0x1.866194p-10f, 0x1p0f,
     0.0f, 0x1.f7cdb8p-111f, 0x1.7de89p-118f, 0.0f, 0x1.4b2faap-23f, 0.0f,
     0x1.0cfc72p-59f, 0x1.d6144ep-67f, 0.0f, 0.0f, 0x1.75fde4p-92f, 0x1.713378p-90f,
     0x1.2cf14p-98f, 0x1.d4af06p-54f, 0.0f, 0.0f, 0x1.32d70ep-10f, 0.0f,
     0x1.93f4c4p-112f, 0x1.f65b62p-108f, 0.0f, 0x1.81a912p-38f, 0.0f, 0.0f,
     0x1.66f1dap-72f, 0.0f, 0.0f, 0.0f, 0x1.062702p-87f, 0x1.4e80c6p-124f, 0.0f,
     0x1.033d1ap-51f, 0x1.6143f4p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf2602p-79f,
     0x1.be023ap-77f, 0x1.445744p-109f, 0x1.7e6d4ap-70f, 0.0f, 0.0f, 0x1.d4e1d2p-62f,
     0x1.7362c4p-111f, 0x1.1b0d2ap-76f, 0x1.9395bap-115f, 0x1.e2dc8ep-20f,
     0x1.54b23cp-111f, 0x1.da56dap-119f, 0x1.e07a8ap-42f, 0x1.68cc2p-1f,
     0x1.f78da6p-54f, 0x1.7e33a8p-57f, 0x1.da07ep-52f, 0x1.7794dap-121f, 0.0f,
     0x1.fb6cbp-52f, 0x1.f0921p-66f, 0.0f, 0.0f, 0x1.79dc5cp-20f, 0.0f,
     0x1.76397ap-8f, 0x1.5437aap-60f, 0x1.908c9ep-82f, 0.0f, 0.0f, 0.0f,
     0x1.a27ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee958cp-31f, 0.0f, 0x1.4987b6p-25f,
     0x1.53877ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1f176p-5f, 0x1.b8d2c4p-3f,
     0.0f, 0x1.c24012p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c335dcp-81f, 0.0f, 0.0f,
     0x1.f8c988p-107f, 0.0f, 0.0f, 0x1.4e4302p-21f, 0x1.b7a71cp-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d011ccp-111f, 0x1.095e34p-80f, 0x1.65bd1p-85f,
     0x1.bafd92p-10f, 0.0f, 0x1.aa8078p-41f, 0x1.bfebd8p-13f, 0x1.d93d28p-33f, 0.0f,
     0.0f, 0x1.b75f4ep-13f, 0.0f, 0x1.acbe64p-64f, 0.0f, 0.0f, 0x1.ef53c4p-107f,
     0x1.0e879cp-12f, 0x1.d67644p-71f, 0x1.59d34cp-82f, 0x1.ceddf2p-30f,
     0x1.033436p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.768848p-5f, 0x1.f44064p-18f, 0x1.cee1c8p-26f, 0.0f, 0x1.5cd80ap-55f,
     0x1.5e5d94p-63f, 0x1.bd849p-74f, 0.0f, 0.0f, 0x1.91278cp-106f, 0x1.38bba8p-53f,
     0.0f, 0x1.989feep-1f, 0.0f, 0x1.a687ap-16f, 0x1.dd8158p-9f, 0x1.450494p-70f,
     0x1.3032dap-9f, 0.0f, 0x1.a16912p-123f, 0x1.85769p-37f, 0.0f, 0.0f,
     0x1.869108p-123f, 0.0f, 0x1.525bacp-63f, 0.0f, 0x1.f94f44p-19f, 0x1.0d17bep-100f,
     0x1.2c1906p-112f, 0x1.03d7f6p-61f, 0.0f, 0x1.f78eeep-35f, 0.0f, 0x1.6ca246p-119f,
     0.0f, 0x1.b0e1aap-70f, 0x1.246732p-79f, 0.0f, 0.0f, 0x1.8126e4p-109f, 0.0f,
     0x1.59de6ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11ed94p-66f, 0x1.3a96c8p-78f,
     0x1.a1555cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70208cp-40f, 0x1.71cc76p-62f,
     0.0f, 0x1.de7c68p-102f, 0x1.3879d4p-22f, 0.0f, 0x1.6cb352p-93f, 0.0f,
     0x1.c6b9b2p-61f, 0.0f, 0x1.bcb06ep-71f, 0x1.ff589ap-106f, 0.0f, 0.0f,
     0x1.79ef76p-74f, 0.0f, 0.0f, 0x1.8a2374p-25f, 0.0f, 0x1.b25ff2p-87f, 0.0f, 0.0f,
     0x1.fd254ap-74f, 0x1.1600fep-11f, 0.0f, 0.0f, 0.0f, 0x1.607e94p-80f,
     0x1.9ad9fap-118f, 0x1.8abe26p-67f, 0x1.aaae44p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b41efep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdbb1ap-21f, 0x1.8bd938p-68f, 0.0f,
     0x1.b194c2p-77f, 0x1.c94e6p-15f, 0.0f, 0.0f, 0x1.d1de4cp-70f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.afc2bp-42f, 0x1.b4bb6ep-41f, 0x1.e45bb2p-15f, 0x1.687e7p-41f, 0.0f,
     0.0f, 0x1.c50e1cp-31f, 0.0f, 0x1.4d1a86p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c361cp-39f, 0.0f, 0x1.4a1f9ap-64f, 0.0f, 0.0f, 0x1.84bf32p-33f,
     0x1.c6dc9p-59f, 0.0f, 0.0f, 0.0f, 0x1.fa7ce2p-50f, 0.0f, 0x1.d5131p-25f,
     0x1.63b5fcp-113f, 0x1.cea612p-15f, 0x1.b68a18p-78f, 0x1.01bfc6p-119f,
     0x1.129fbep-37f, 0.0f, 0x1.1c9c54p-117f, 0.0f, 0.0f, 0x1.a88352p-86f,
     0x1.c5a1b8p-30f, 0x1.c7e9dp-78f, 0x1.b5da7p-35f, 0x1.5014aep-97f, 0.0f,
     0x1.21afdp-30f, 0x1.58fb62p-15f, 0x1.6b8786p-34f, 0.0f, 0x1.e74156p-24f, 0.0f,
     0x1.71b672p-68f, 0x1.fa599p-102f, 0x1.c40fp-68f, 0.0f, 0.0f, 0.0f,
     0x1.1af8cp-88f, 0x1.aaf728p-110f, 0x1.153b5cp-96f, 0x1.ad17a2p-62f, 0.0f,
     0x1.ce573ap-58f, 0x1.0bc4d8p-52f, 0x1.fcc13ep-108f, 0.0f, 0x1.74d422p-14f,
     0x1.d2184ep-56f, 0x1.4ab90cp-84f, 0x1.ba9318p-124f, 0.0f, 0.0f, 0x1.3d3b7ap-104f,
     0.0f, 0x1.9ab616p-109f, 0.0f, 0.0f, 0.0f, 0x1.43037ap-49f, 0x1.e00228p-15f,
     0x1.2c93p-44f, 0.0f, 0x1.3a5632p-22f, 0x1.890f6cp-83f, 0.0f, 0.0f,
     0x1.9b4498p-80f, 0x1.1bb418p-35f, 0x1.2f6e02p-113f, 0.0f, 0x1.09c0e4p-11f,
     0x1.c9c26p-26f, 0.0f, 0x1.e3ac14p-107f, 0x1.0b406cp-67f, 0.0f, 0.0f, 0.0f,
     0x1.32fd7ap-33f, 0.0f, 0x1.1c1692p-50f, 0.0f, 0.0f, 0.0f
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
            tmp1 = lgammaf(tmp0);
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
    printf("lgammaf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("lgammaf bench acc %a\n", global_bench_acc);
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
