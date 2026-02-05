/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospif4_u05kvx.c --function \
 *     Sleef_finz_cospif4_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0x1.ade896p-96f, 0.0f, 0.0f, 0x1.bb55cap-76f, 0x1.ff9c1p-106f, 0.0f,
     0x1.0ef0d4p-9f, 0.0f, 0.0f, 0.0f, 0x1.b54408p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a29f4p-39f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63fca8p-27f,
     0x1.f7bb78p-109f, 0.0f, 0.0f, 0.0f, 0x1.d038c2p-44f, 0x1.eb8498p-25f,
     0x1.4d5e6ep-80f, 0.0f, 0x1.f031a4p-4f, 0.0f, 0x1.e2ff06p-18f, 0.0f,
     0x1.3216d6p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.160a6p-37f, 0.0f, 0x1.eeaf48p-103f,
     0x1.79138p-123f, 0x1.da5ab6p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43bab2p-75f, 0.0f,
     0x1.8b309ep-3f, 0x1.4c6eccp-104f, 0x1.894852p-50f, 0x1.dd62b2p-80f,
     0x1.2e3ddcp-53f, 0.0f, 0x1.90ac84p-126f, 0.0f, 0x1.36b11ap-56f, 0.0f, 0.0f, 0.0f,
     0x1.1c6396p-66f, 0.0f, 0x1.27c72cp-68f, 0x1.6265eep-88f, 0x1.07d6d8p-28f,
     0x1.81bba6p-26f, 0x1.2d94c6p-34f, 0x1.365ecap-115f, 0x1.936f8cp-91f, 0.0f,
     0x1p0f, 0x1.5098ap-108f, 0x1.a00a9cp-76f, 0x1.0374c8p-4f, 0x1.3fdc4ap-49f,
     0x1.ea079cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56e906p-5f, 0.0f,
     0x1.c6f6a2p-31f, 0.0f, 0x1.6fd436p-61f, 0x1.5d502p-118f, 0x1.35ecep-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abbefep-108f, 0x1.2b4e1cp-120f,
     0.0f, 0.0f, 0.0f, 0x1.37f26p-77f, 0.0f, 0x1.364532p-42f, 0x1.4cbc08p-61f, 0.0f,
     0.0f, 0x1.48478ep-36f, 0x1.6c2a9p-95f, 0x1.34ab3ap-40f, 0x1.174c04p-124f,
     0x1.878c14p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e441p-117f, 0x1.135324p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d1ba2p-69f, 0.0f, 0.0f, 0x1.2d2b6ap-56f,
     0x1.d855b8p-41f, 0x1.da63p-92f, 0x1.f40bbp-89f, 0x1.64b3c2p-107f, 0.0f,
     0x1.fcb044p-35f, 0x1.5ee8b4p-98f, 0x1.716d5ap-77f, 0.0f, 0x1.bc3d6ap-40f,
     0x1.08e9b4p-23f, 0x1.eabdcap-39f, 0.0f, 0x1.3fc88cp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fcbcc2p-119f, 0x1.ab7a9ap-1f, 0.0f, 0.0f, 0x1.bc91a2p-77f, 0.0f,
     0x1.8a30eap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3ac58p-84f, 0x1.aa1fdp-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2a8a38p-52f, 0.0f, 0x1.556e5cp-46f, 0x1.824e02p-2f,
     0x1.651b1cp-17f, 0.0f, 0.0f, 0.0f, 0x1.5b5e8p-26f, 0.0f, 0x1.82a486p-45f,
     0x1.03951ep-101f, 0x1.dc1944p-84f, 0x1.38c702p-19f, 0x1.5f87a4p-47f,
     0x1.6ccdp-29f, 0x1.43613cp-110f, 0.0f, 0x1.567118p-118f, 0x1.b59638p-112f,
     0x1.ecaf9ap-67f, 0.0f, 0x1.aad7d8p-23f, 0x1.67a0c4p-54f, 0.0f, 0.0f,
     0x1.0fb8fep-34f, 0x1.22f676p-93f, 0x1.fd9ca2p-60f, 0x1.ca47ap-21f, 0.0f, 0.0f,
     0x1.5c5c32p-66f, 0.0f, 0x1.9244cep-11f, 0x1.5d4932p-126f, 0.0f, 0.0f, 0.0f,
     0x1.d73a1ep-92f, 0x1.66a3c8p-6f, 0x1.955962p-85f, 0.0f, 0x1.f1079p-118f, 0.0f,
     0.0f, 0x1.ec91bap-46f, 0.0f, 0x1.181632p-63f, 0x1.50624ap-126f, 0x1.3a910ep-67f,
     0.0f, 0x1.479f24p-59f, 0x1.ef66e8p-115f, 0x1.0170e6p-19f, 0x1.602c6cp-53f,
     0x1.21897ap-32f, 0x1.fba75ap-90f, 0.0f, 0.0f, 0x1.53b7d2p-5f, 0x1.d7b0eep-70f,
     0.0f, 0.0f, 0.0f, 0x1.65ebdep-111f, 0.0f, 0.0f, 0x1.2ca0a6p-96f,
     0x1.3f7d3cp-105f, 0x1.88819p-99f, 0x1.a7765cp-95f, 0x1.76686ap-78f,
     0x1.a2fddcp-67f, 0x1.d99ea4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbc03ep-112f, 0.0f,
     0x1.248914p-17f, 0.0f, 0x1.d1f212p-38f, 0.0f, 0.0f, 0.0f, 0x1.f18d6ap-99f, 0.0f,
     0x1.062aaep-54f, 0x1.83a11ap-75f, 0x1.1bb902p-40f, 0.0f, 0x1.f53402p-3f,
     0x1.24277ap-104f, 0.0f, 0x1.7e42d4p-99f, 0x1.3807eep-68f, 0x1.3acc38p-59f, 0.0f,
     0x1.e24c74p-1f, 0.0f, 0x1.d19066p-56f, 0x1.475386p-5f, 0.0f, 0x1.4aedfep-32f,
     0.0f, 0x1.a593a2p-95f, 0x1.4ee63cp-123f, 0x1.189d7ap-45f, 0x1.d36316p-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70e3a8p-36f,
     0x1.53bc64p-119f, 0x1.97ed4ep-76f, 0x1.77b17ap-85f, 0x1.02e5bep-89f,
     0x1.902f0cp-77f, 0x1.40544p-10f, 0.0f, 0x1.5f99f6p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6ed2p-52f, 0.0f, 0x1.bdac6ap-34f, 0.0f, 0x1.2d5248p-73f, 0.0f,
     0x1.42f0f4p-74f, 0x1.7f4258p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77a73ep-34f,
     0.0f, 0x1.5a011ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.893236p-114f,
     0x1.22d724p-75f, 0x1.415894p-53f, 0x1.b895b8p-124f, 0.0f, 0.0f, 0x1.65541ap-73f,
     0.0f, 0.0f, 0.0f, 0x1.06e052p-87f, 0x1.5df958p-47f, 0x1.00952ap-23f, 0.0f,
     0x1.810e4cp-17f, 0.0f, 0.0f, 0x1.55c954p-57f, 0.0f, 0x1.9ca46ep-94f,
     0x1.0e8f16p-97f, 0.0f, 0.0f, 0x1.8ca3f4p-17f, 0.0f, 0.0f, 0x1.7950e8p-97f,
     0x1.6c8814p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eae1bep-105f, 0x1.2f8ef4p-64f,
     0x1.37a4dep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fbba6p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f1188p-67f, 0x1.58341ep-91f, 0x1.16de1ap-123f, 0.0f,
     0x1.5122dap-82f, 0x1.c00c9p-9f, 0x1.00b26cp-55f, 0x1.09d082p-57f,
     0x1.83abfap-101f, 0.0f, 0.0f, 0x1.9465e4p-20f, 0x1.97d7fap-12f, 0.0f,
     0x1.e3d7e2p-63f, 0x1.a0cbf4p-102f, 0x1.7d1406p-51f, 0x1.95185ap-37f,
     0x1.8362p-88f, 0x1.4c3922p-68f, 0x1.96f2dcp-10f, 0x1.ef3038p-101f, 0.0f, 0.0f,
     0.0f, 0x1.2f417cp-80f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.10ae02p-9f, 0x1.1b9f72p-70f,
     0x1.bdcc68p-24f, 0x1.841468p-58f, 0.0f, 0.0f, 0x1.582156p-82f, 0.0f,
     0x1.f2c698p-31f, 0.0f, 0.0f, 0.0f, 0x1.b6066ap-115f, 0x1.2ab9bp-113f,
     0x1.c990f6p-16f, 0.0f, 0.0f, 0x1.24dc58p-112f, 0.0f, 0.0f, 0.0f, 0x1.82cd1ep-8f,
     0.0f, 0.0f, 0.0f, 0x1.d0ba36p-102f, 0.0f, 0.0f, 0.0f, 0x1.3cc67cp-111f,
     0x1.c3eb08p-118f, 0x1.655bcep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b6b34p-66f, 0.0f, 0.0f, 0x1.268106p-23f,
     0x1.285892p-46f, 0x1.a3161ap-1f, 0.0f, 0x1.0ab564p-126f, 0.0f, 0x1.330312p-60f,
     0x1.85f102p-23f, 0x1.19edep-96f, 0.0f, 0x1.ee7776p-46f, 0x1.4fa356p-118f,
     0x1.000318p-17f, 0x1.4421aap-54f, 0x1.25a3c8p-101f, 0x1.707de2p-117f,
     0x1.840792p-17f, 0.0f, 0.0f, 0.0f, 0x1.672114p-58f, 0x1.e9e6eep-115f, 0.0f,
     0x1.de87eep-40f, 0.0f, 0x1.166326p-66f, 0x1.901572p-102f, 0.0f, 0x1.b49efp-104f,
     0x1.ae2576p-123f, 0.0f, 0.0f, 0x1.75478ap-95f, 0.0f, 0x1.f3450ap-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36279ep-69f, 0.0f, 0x1.b8059cp-21f,
     0x1.6153cp-117f, 0.0f, 0.0f, 0x1.c4812ep-123f, 0x1.5916f2p-14f, 0.0f, 0.0f,
     0x1.16126p-71f, 0.0f, 0x1.dd5a4p-126f, 0x1.ab058cp-50f, 0.0f, 0.0f,
     0x1.02e96p-96f, 0.0f, 0x1.49eba8p-66f, 0.0f, 0x1.6f292ap-111f, 0x1.8805f2p-11f,
     0x1.fd98f8p-61f, 0x1.2159eep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8486f6p-117f, 0.0f, 0x1.2b1dacp-54f, 0x1.f5ab08p-124f, 0.0f, 0x1.78ba5p-125f,
     0x1.7f59p-63f, 0x1.7abd62p-5f, 0x1.8a3018p-76f, 0x1.11eb4ep-113f, 0.0f, 0.0f,
     0x1.2d1908p-20f, 0.0f, 0.0f, 0x1.8d0f98p-125f, 0x1.5eabcep-40f, 0x1.00c90cp-36f,
     0x1.0d5dfp-40f, 0x1.b65c02p-113f, 0.0f, 0x1.6e2e12p-3f, 0.0f, 0.0f,
     0x1.f5d2acp-82f, 0x1.2658dp-119f, 0x1.39b6d4p-12f, 0.0f, 0x1.6b2b02p-98f, 0.0f,
     0.0f, 0x1.c7a00cp-34f, 0.0f, 0x1.b197e6p-119f, 0x1.0d9c3ap-60f, 0x1.a5f4dap-81f,
     0x1.f1927ap-11f, 0x1.72f956p-60f, 0x1.e3148p-20f, 0x1.90b4d4p-48f,
     0x1.9a3d62p-69f, 0x1.b876ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee4f2ep-33f,
     0x1.78fb5p-115f, 0x1.2d28eep-64f, 0.0f, 0.0f, 0.0f, 0x1.15e1eep-75f, 0.0f,
     0x1.02ca9ep-53f, 0x1.434944p-77f, 0.0f, 0x1.5e9f76p-20f, 0x1.adb47ap-71f, 0.0f,
     0x1.c4b8b4p-2f, 0x1.fe5344p-111f, 0x1.be7c3ep-59f, 0x1.4a916ap-115f,
     0x1.b29a2p-39f, 0x1.ad2d1p-58f, 0x1.25673cp-77f, 0x1.ab9d98p-24f,
     0x1.5e051cp-84f, 0.0f, 0x1.a56b9ep-106f, 0.0f, 0.0f, 0x1.67d26ap-53f,
     0x1.2d213cp-113f, 0x1.1ec72cp-87f, 0.0f, 0x1.72568ap-79f, 0.0f, 0.0f,
     0x1.62a1eep-25f, 0x1.7806p-97f, 0x1.19a4f6p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e767ep-54f, 0.0f, 0.0f, 0x1.1b3bf6p-70f, 0x1.907c94p-103f, 0.0f, 0.0f,
     0x1.4151bep-64f, 0x1.f52dep-124f, 0x1.834f56p-76f, 0.0f, 0x1.c4c4dep-83f,
     0x1.484e1cp-16f, 0x1.e59ab2p-57f, 0x1.bfad1cp-90f, 0.0f, 0.0f, 0x1.74022cp-19f,
     0.0f, 0.0f, 0x1.6eb02ep-6f, 0.0f, 0.0f, 0x1.4b8f0ap-111f, 0x1.41586ap-121f, 0.0f,
     0.0f, 0x1.fe9dep-76f, 0.0f, 0x1.1d095cp-79f, 0.0f, 0.0f, 0.0f, 0x1.098288p-83f,
     0x1.03db46p-6f, 0x1.471d98p-9f, 0x1.27c316p-41f, 0x1.90cf8p-69f, 0x1.cfe678p-62f,
     0x1.d2a39ap-122f, 0.0f, 0.0f, 0x1.77ff72p-105f, 0.0f, 0x1.f974dap-64f,
     0x1.17dcdp-118f, 0.0f, 0x1.9f2f9cp-114f, 0.0f, 0x1.b4181p-79f, 0x1.bbd6dp-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4d8b4p-49f, 0.0f, 0x1.3e6c4cp-5f, 0.0f,
     0x1.47377cp-61f, 0x1.57184ap-119f, 0.0f, 0.0f, 0x1.403f4p-44f, 0.0f,
     0x1.9cb5fp-106f, 0.0f, 0.0f, 0x1.3b123p-91f, 0x1.7d2cc2p-44f, 0.0f,
     0x1.d9c4bp-73f, 0.0f, 0x1.a01b8p-15f, 0.0f, 0x1.17b194p-90f, 0.0f,
     0x1.a0e5e4p-72f, 0.0f, 0x1.f41f78p-43f, 0x1.a477ap-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cdb68ep-40f, 0x1.8c442cp-80f, 0.0f, 0x1.98d322p-11f, 0x1.af5c1p-7f,
     0x1.9cf348p-44f, 0.0f, 0x1.d02726p-110f, 0x1.77e71p-81f, 0.0f, 0x1.d31d9ap-109f,
     0x1.0f6c14p-23f, 0.0f, 0x1.94e72cp-95f, 0x1.ea69a4p-16f, 0.0f, 0x1.b30606p-18f,
     0.0f, 0x1.bcdb64p-54f, 0x1.9aa45p-21f, 0.0f, 0.0f, 0.0f, 0x1.1b3bdep-98f, 0.0f,
     0.0f, 0x1.0202fep-118f, 0x1.9eaa74p-4f, 0x1.97b7e6p-34f, 0.0f, 0.0f,
     0x1.b862ecp-21f, 0x1.f1ee6ap-32f, 0.0f, 0x1.890e1cp-83f, 0x1.25730ep-33f, 0.0f,
     0x1.af354p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c66a6p-34f, 0x1.987a8p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7a418p-107f, 0x1.06865ap-56f, 0x1.944512p-87f,
     0x1.377402p-107f, 0.0f, 0x1.32f84cp-9f, 0.0f, 0.0f, 0x1.a0fff8p-109f, 0.0f, 0.0f,
     0x1.75fa3p-7f, 0x1.412cdcp-26f, 0x1.05127p-126f, 0.0f, 0.0f, 0x1.05293ep-17f,
     0x1.cb78d8p-40f, 0.0f, 0x1.248de6p-9f, 0x1.b41f8p-111f, 0x1.864dc6p-113f,
     0x1.8338eep-119f, 0.0f, 0.0f, 0x1.cbb16ap-86f, 0x1.e3a406p-62f, 0x1.0e8c76p-43f,
     0.0f, 0.0f, 0.0f, 0x1.ae6438p-25f, 0x1.91b248p-26f, 0x1.655d7ep-96f, 0.0f, 0.0f,
     0x1.4151b2p-8f, 0x1.d57facp-36f, 0x1.505c8ap-76f, 0x1.79bf08p-126f, 0.0f, 0.0f,
     0x1.a0199cp-11f, 0x1.c0ca7cp-103f, 0.0f, 0x1.1071d4p-114f, 0.0f, 0x1.15983ep-96f,
     0x1.20e622p-115f, 0.0f, 0x1.3e647ap-9f, 0.0f, 0x1.4c1392p-61f, 0x1p0f,
     0x1.a8bbc4p-73f, 0x1.ba4ce6p-59f, 0x1.06b36ep-52f, 0x1.1783c4p-36f, 0.0f, 0.0f,
     0.0f, 0x1.8a4384p-115f, 0x1.abf6dcp-14f, 0x1.62a6eep-5f, 0.0f, 0x1.0973dep-107f,
     0x1.5460f4p-48f, 0x1.da402p-53f, 0x1.96e488p-23f, 0x1.9cb136p-29f,
     0x1.d02e42p-14f, 0x1.6c700cp-46f, 0.0f, 0x1.fc8196p-126f, 0x1.778cd2p-28f,
     0x1.26a1p-65f, 0.0f, 0.0f, 0.0f, 0x1.944b2cp-68f, 0x1.71a96p-77f, 0x1.9f8bd6p-3f,
     0.0f, 0x1.4265a6p-7f, 0x1.4a56cp-21f, 0x1.546e7ep-82f, 0.0f, 0.0f, 0.0f,
     0x1.57fb56p-73f, 0.0f, 0.0f, 0x1.2817ap-68f, 0x1.d768ecp-100f, 0.0f,
     0x1.171b0ap-46f, 0.0f, 0x1.4c08e6p-22f, 0.0f, 0x1.595dp-93f, 0x1.da756p-124f,
     0.0f, 0x1.a43ecap-126f, 0x1.340722p-67f, 0.0f, 0x1.161f92p-30f, 0.0f,
     0x1.4a688p-4f, 0x1.f96a76p-25f, 0.0f, 0x1.1b523ep-45f, 0x1.29d4a2p-75f, 0.0f,
     0x1.2aea8cp-74f, 0.0f, 0x1.89fff4p-36f, 0.0f, 0.0f, 0x1.1d30f4p-64f,
     0x1.39ce3p-40f, 0.0f, 0x1.df20b4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c645cp-65f, 0x1.f3c25ap-53f, 0.0f, 0x1.963f8ep-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e615ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aea218p-80f, 0.0f, 0.0f,
     0x1.3c29dp-24f, 0.0f, 0.0f, 0x1.856ec8p-81f, 0.0f, 0.0f, 0x1.da3f9p-4f,
     0x1.45a15ep-50f, 0x1.401424p-1f, 0x1.7a439p-19f, 0.0f, 0.0f, 0x1.8d4d1cp-29f,
     0x1.c6d662p-33f, 0.0f, 0.0f, 0.0f, 0x1.92c974p-80f, 0.0f, 0x1.d9939p-24f, 0.0f,
     0x1.d39f86p-57f, 0x1.8bc194p-77f, 0x1.3a757p-10f, 0x1.cfda82p-112f, 0.0f,
     0x1.ce6ce2p-125f, 0.0f, 0x1.5b689ap-60f, 0.0f, 0.0f, 0x1.382c72p-15f,
     0x1.15d98cp-67f, 0x1.b8db28p-32f, 0.0f, 0.0f, 0.0f, 0x1.42a53ep-53f,
     0x1.8a2258p-64f, 0.0f, 0.0f, 0.0f, 0x1.607bc4p-33f, 0x1.09b074p-12f, 0.0f,
     0x1.544a2ep-96f, 0.0f, 0.0f, 0.0f, 0x1.99b8c6p-2f, 0.0f, 0x1.67b5b2p-52f,
     0x1.21dd5ap-81f, 0x1.44ff6ep-63f, 0x1.27064ep-80f, 0x1.bac1d6p-105f, 0.0f, 0.0f,
     0x1.8aa648p-122f, 0x1.b4dd3cp-111f, 0x1.cdf35ep-43f, 0x1.09320cp-96f, 0.0f, 0.0f,
     0.0f, 0x1.d52934p-33f, 0.0f, 0.0f, 0x1.aeb3bep-6f, 0.0f, 0x1.af666ep-114f,
     0x1.07fedap-34f, 0.0f, 0.0f, 0x1.21de68p-76f, 0.0f, 0.0f, 0x1.ae556cp-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.77b6b4p-92f, 0x1.e9c2a6p-29f, 0x1.6e909ap-47f, 0.0f,
     0.0f, 0.0f, 0x1.83f4aap-67f, 0.0f, 0x1.fd4578p-26f, 0x1.5a212ap-79f, 0.0f, 0.0f,
     0.0f, 0x1.aa3c08p-24f, 0x1.18e4e8p-16f, 0.0f, 0.0f, 0.0f, 0x1.f569bcp-39f, 0.0f,
     0.0f, 0x1.e384c6p-85f, 0x1.ac0b88p-9f, 0x1.1e5664p-3f, 0.0f, 0x1.50a324p-54f,
     0.0f, 0x1.d8f51ap-68f, 0x1.fbb528p-98f, 0x1.4f250cp-66f, 0x1.ca55c2p-11f,
     0x1.416b3ap-113f, 0.0f, 0x1.6ea82ap-50f, 0x1.4851dp-116f, 0x1.717678p-20f, 0.0f,
     0.0f
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
            tmp1 = Sleef_finz_cospif4_u05kvx(tmp0);
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
    printf("Sleef_finz_cospif4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cospif4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
