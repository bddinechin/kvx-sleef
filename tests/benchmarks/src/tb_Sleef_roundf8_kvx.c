/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundf8_kvx.c --function Sleef_roundf8_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7051f6p-5f, 0.0f, 0x1.8dc3b4p-5f, 0.0f,
     0x1.9215f8p-107f, 0x1.858eacp-125f, 0.0f, 0.0f, 0x1.45a73ep-68f, 0x1.7ba06p-111f,
     0.0f, 0.0f, 0.0f, 0x1.36e35ap-32f, 0x1.0b1774p-42f, 0x1.3263b6p-41f,
     0x1.f52546p-67f, 0x1.e0d35cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36931p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a8734p-49f, 0x1.1e724p-76f, 0x1.ad90c2p-2f, 0.0f,
     0x1.c0432ap-10f, 0.0f, 0x1.df8e52p-16f, 0.0f, 0.0f, 0x1.1e92eap-86f,
     0x1.b198d4p-90f, 0.0f, 0x1.c1ab64p-61f, 0x1.6916aap-90f, 0.0f, 0x1.94f10cp-39f,
     0x1.de702ep-11f, 0x1.588926p-109f, 0.0f, 0.0f, 0x1.68b2ccp-80f, 0.0f, 0.0f,
     0x1.343112p-112f, 0.0f, 0x1.89407ep-83f, 0.0f, 0x1.c6a2ecp-29f, 0.0f, 0.0f,
     0x1.78431p-54f, 0.0f, 0.0f, 0x1.115e18p-107f, 0.0f, 0.0f, 0.0f, 0x1.92a498p-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1252p-22f, 0x1.aa94f6p-109f, 0x1.87d56ep-47f, 0.0f,
     0x1.484f4p-85f, 0x1.d389fp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7912b4p-93f,
     0x1.aaa274p-72f, 0x1.f064bcp-41f, 0x1.33de74p-35f, 0x1.8063ccp-40f, 0.0f,
     0x1.45e752p-19f, 0.0f, 0.0f, 0x1.7176bp-124f, 0x1.e8fbacp-36f, 0.0f,
     0x1.44382p-48f, 0x1.771ed2p-112f, 0.0f, 0x1.d53474p-63f, 0x1.094f58p-72f, 0.0f,
     0.0f, 0.0f, 0x1.2c8216p-92f, 0.0f, 0x1.3824ecp-100f, 0.0f, 0x1.c957dcp-36f,
     0x1.8bef6p-2f, 0.0f, 0.0f, 0x1.062ba8p-7f, 0.0f, 0.0f, 0x1.c7a80cp-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.069b16p-58f, 0.0f, 0.0f, 0x1.467aa2p-70f, 0.0f,
     0x1.dac8fp-126f, 0.0f, 0x1p0f, 0x1.549b2p-67f, 0x1.8eabp-20f, 0.0f,
     0x1.91736p-51f, 0x1.332f1ep-52f, 0x1.120c34p-59f, 0.0f, 0x1.45da2ep-60f,
     0x1.7fc156p-20f, 0x1p0f, 0.0f, 0x1.98381ep-107f, 0x1.2067fep-86f, 0.0f,
     0x1.ad9068p-41f, 0x1.e0351p-32f, 0x1.1bf3b4p-77f, 0x1.648212p-54f, 0.0f, 0.0f,
     0x1.2f04d4p-32f, 0.0f, 0.0f, 0x1.5690bcp-77f, 0x1.509a38p-6f, 0x1.1c2c54p-94f,
     0.0f, 0x1.5a4cc6p-33f, 0.0f, 0x1.a39274p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0528eep-72f, 0.0f, 0.0f, 0x1.9ee02ep-40f, 0x1.470e08p-18f, 0x1.f44d3p-72f,
     0.0f, 0.0f, 0x1.e5e7b2p-50f, 0x1.072c66p-69f, 0x1.73bb9ep-126f, 0.0f,
     0x1.22c26ep-94f, 0.0f, 0.0f, 0x1.2ba19ap-112f, 0x1.5e6a24p-123f,
     0x1.15ad62p-107f, 0.0f, 0.0f, 0x1.bbee36p-78f, 0x1.932b96p-72f, 0x1.92169p-4f,
     0x1.3b1f44p-101f, 0.0f, 0.0f, 0x1.a4b786p-70f, 0.0f, 0x1.db730cp-34f,
     0x1.0d42d8p-125f, 0x1.f247b8p-40f, 0x1.49afacp-83f, 0.0f, 0.0f, 0x1.2c7718p-14f,
     0.0f, 0x1.ba8fe6p-126f, 0x1.db7c56p-68f, 0x1.2f85d6p-51f, 0.0f, 0x1.429af4p-108f,
     0x1.052f1ep-73f, 0.0f, 0x1.86fb14p-61f, 0x1.914b0ep-94f, 0x1.4be1f2p-42f,
     0x1.a2958ap-125f, 0.0f, 0x1.09a50cp-36f, 0x1.bb264ap-42f, 0.0f, 0.0f,
     0x1.345502p-55f, 0.0f, 0x1.e3ff9p-7f, 0x1.27bf6ap-83f, 0.0f, 0.0f,
     0x1.fda834p-27f, 0x1.ede6f8p-97f, 0x1.76e818p-45f, 0x1.354af2p-83f,
     0x1.4f969p-29f, 0.0f, 0x1.33619ap-22f, 0x1.e22032p-20f, 0.0f, 0.0f,
     0x1.b8b47ep-51f, 0x1.e281b6p-45f, 0x1.f39d0cp-57f, 0.0f, 0x1.65d4cp-125f, 0.0f,
     0.0f, 0x1.d63abep-94f, 0x1.e9cd44p-25f, 0x1.a623a8p-64f, 0.0f, 0x1.e31132p-39f,
     0.0f, 0x1.2e0ee6p-9f, 0x1.449e4ap-95f, 0x1.37057ep-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1ac956p-53f, 0x1.8abafep-97f, 0.0f, 0x1.3468b8p-63f, 0.0f,
     0x1.567332p-43f, 0x1.53434cp-59f, 0x1.c36e7p-48f, 0x1.ab9ebep-58f, 0.0f,
     0x1.804578p-32f, 0.0f, 0x1.71626ep-57f, 0x1.d2afdap-47f, 0x1.12120ep-80f,
     0x1.e8436cp-105f, 0.0f, 0x1.8f8884p-31f, 0x1.405d76p-9f, 0x1.17001ap-124f,
     0x1.69697ep-71f, 0.0f, 0x1.014468p-78f, 0x1.328048p-37f, 0.0f, 0x1.d013bep-21f,
     0x1.23f1ep-110f, 0x1.97fa76p-74f, 0x1.527996p-61f, 0x1.10f604p-10f, 0.0f,
     0x1.c0b964p-31f, 0x1.5c076cp-110f, 0.0f, 0.0f, 0x1.9fc884p-67f, 0x1.fbafbap-69f,
     0.0f, 0x1.ad8768p-95f, 0x1.68824cp-46f, 0.0f, 0x1.7f86bcp-4f, 0x1.5ca80ep-44f,
     0x1.1b1ffap-95f, 0.0f, 0x1.8edbep-70f, 0.0f, 0x1.baaf2ap-98f, 0x1.5c5f04p-66f,
     0.0f, 0x1.897c5cp-59f, 0.0f, 0x1.925ebcp-88f, 0x1.5cb5d2p-16f, 0x1.69353cp-80f,
     0.0f, 0x1.c5bd92p-64f, 0x1.d669fcp-14f, 0x1.493024p-102f, 0.0f, 0.0f, 0.0f,
     0x1.dbad08p-66f, 0x1.10c372p-89f, 0.0f, 0.0f, 0.0f, 0x1.5c47ep-90f,
     0x1.3f2484p-120f, 0x1.932e5p-37f, 0x1.48b664p-69f, 0.0f, 0x1.bb6ecap-75f, 0.0f,
     0.0f, 0x1.4d58cap-62f, 0x1.3d15ap-87f, 0.0f, 0x1.fc7ba2p-39f, 0.0f, 0.0f, 0.0f,
     0x1.cd3bcep-44f, 0x1.906886p-80f, 0x1.1f0568p-107f, 0.0f, 0x1.33f10ep-81f,
     0x1.5ce9fcp-76f, 0.0f, 0.0f, 0x1.adbbe6p-118f, 0x1.1d21a8p-120f, 0.0f,
     0x1.bee502p-49f, 0.0f, 0x1.cda266p-66f, 0x1.cc9b2ep-39f, 0x1.9f67a2p-96f, 0.0f,
     0x1.a1c9ep-11f, 0x1.2635e2p-19f, 0.0f, 0x1.42ec62p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19e2f6p-114f, 0x1.c1b622p-2f, 0x1.cd00ep-53f, 0x1.2ad0cep-8f, 0.0f, 0.0f,
     0x1.81f34ep-110f, 0.0f, 0.0f, 0.0f, 0x1.51233ep-62f, 0x1.7f1e2cp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.76a08p-59f, 0.0f, 0.0f, 0x1.41212cp-79f, 0.0f, 0.0f,
     0x1.deb166p-90f, 0x1.02aa0cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.969568p-81f,
     0x1.9fa352p-63f, 0.0f, 0.0f, 0.0f, 0x1.583e36p-10f, 0.0f, 0x1.13c822p-61f,
     0x1.4dc3ap-85f, 0x1.e4f3f2p-76f, 0x1.c2de8cp-29f, 0.0f, 0x1.97cedep-11f, 0.0f,
     0.0f, 0x1.66f0f6p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.545dfep-2f,
     0x1.497df8p-73f, 0x1.078dccp-20f, 0.0f, 0.0f, 0x1.3d9dfcp-55f, 0.0f,
     0x1.213df6p-57f, 0x1.b05b9cp-117f, 0x1.95d6a8p-96f, 0.0f, 0.0f, 0x1.24a1fp-14f,
     0x1.40b66ap-36f, 0x1.a0f1a6p-90f, 0x1.07c9eep-86f, 0x1.ba2348p-111f, 0.0f,
     0x1.44fdecp-74f, 0x1.f838aap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bca28p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2dc182p-124f, 0x1.038c7p-53f, 0.0f, 0x1.fe5158p-36f, 0.0f,
     0.0f, 0.0f, 0x1.4db992p-120f, 0x1.a0d278p-123f, 0x1.6f8384p-42f, 0x1.1bb7c8p-32f,
     0x1.1ffac6p-66f, 0x1.0ddcd6p-121f, 0x1p0f, 0.0f, 0.0f, 0x1.aedd84p-22f, 0.0f,
     0x1.111568p-2f, 0x1.bbd122p-12f, 0.0f, 0x1.8e5bc2p-22f, 0.0f, 0x1.1b56aap-116f,
     0.0f, 0x1.46769ap-25f, 0x1.0763dep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4ad3ap-37f, 0x1.13cb12p-65f, 0x1.4a442p-55f, 0x1.43cd16p-55f, 0.0f,
     0x1.e5172ep-41f, 0.0f, 0.0f, 0x1.7ec7ecp-34f, 0.0f, 0x1.e943f6p-5f, 0.0f,
     0x1.31678ap-65f, 0x1.0911cep-33f, 0x1.4cd71p-1f, 0x1.8569f4p-108f,
     0x1.fca03ep-70f, 0x1.fec65cp-8f, 0x1.314056p-45f, 0x1.8e5862p-22f, 0.0f, 0.0f,
     0x1.c66226p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dc6bep-62f, 0.0f,
     0x1.76e4fcp-60f, 0.0f, 0x1.043c32p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.420588p-44f, 0.0f, 0x1.e8c3cep-79f, 0.0f, 0.0f, 0x1.abb4a8p-112f,
     0x1.f23636p-110f, 0x1.c99982p-17f, 0x1.18bd16p-104f, 0.0f, 0x1.55141ep-99f,
     0x1.c20558p-85f, 0.0f, 0.0f, 0x1.591c44p-60f, 0x1.1db594p-51f, 0.0f,
     0x1.778c54p-81f, 0x1.d5ed8cp-39f, 0x1.7cc8c8p-29f, 0.0f, 0x1.eae168p-76f,
     0x1.ce864ep-98f, 0x1.458302p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc8352p-107f,
     0x1.186a88p-69f, 0.0f, 0.0f, 0.0f, 0x1.9eda5p-35f, 0x1.63e26ap-79f, 0.0f,
     0x1.ff9cd8p-54f, 0.0f, 0x1.c7e7a2p-32f, 0x1.07708cp-86f, 0.0f, 0x1.e91aeap-12f,
     0.0f, 0x1.def904p-121f, 0.0f, 0.0f, 0x1.d9262ep-11f, 0x1.18bf64p-102f, 0.0f,
     0x1.08cc3cp-9f, 0.0f, 0.0f, 0.0f, 0x1.d685bp-115f, 0.0f, 0x1.009656p-70f,
     0x1.1e7aap-24f, 0x1.17c9b2p-46f, 0x1.b76bdp-74f, 0.0f, 0x1.7869c2p-57f,
     0x1.ec01dcp-100f, 0x1.2519c2p-87f, 0.0f, 0x1.e7e5b4p-54f, 0.0f, 0x1.9cdf24p-113f,
     0x1.401e8cp-97f, 0x1.487c84p-15f, 0x1.bc9232p-115f, 0.0f, 0x1.0f4e7p-91f, 0.0f,
     0.0f, 0x1.7e1d14p-98f, 0.0f, 0x1.bc947ep-21f, 0.0f, 0x1.29f03cp-77f, 0.0f,
     0x1.06d6e6p-23f, 0x1.75c3aap-35f, 0.0f, 0x1.312cdap-65f, 0.0f, 0.0f, 0.0f,
     0x1.081014p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0fdb2p-104f, 0x1.60ab84p-29f,
     0x1.23778p-29f, 0x1.be773p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c697ccp-47f, 0.0f,
     0x1.76c598p-48f, 0x1.59a98p-100f, 0.0f, 0x1.61e87p-62f, 0.0f, 0.0f,
     0x1.f6cd08p-108f, 0x1.e32256p-103f, 0x1.52aa9ap-101f, 0x1.b3326ep-29f,
     0x1.be795cp-84f, 0x1.113b82p-99f, 0.0f, 0x1.20962p-49f, 0.0f, 0x1.b0ea54p-69f,
     0.0f, 0.0f, 0x1.a69d18p-27f, 0.0f, 0x1.7dc81cp-42f, 0.0f, 0.0f, 0x1.8d652ep-112f,
     0.0f, 0.0f, 0.0f, 0x1.f9293ap-20f, 0.0f, 0.0f, 0x1.19567cp-34f, 0.0f,
     0x1.d3b54ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.118692p-28f, 0.0f, 0.0f,
     0x1.2e631ap-20f, 0.0f, 0.0f, 0.0f, 0x1.29e07ep-34f, 0.0f, 0.0f, 0x1.64b0ap-29f,
     0x1.5b973p-20f, 0.0f, 0.0f, 0x1.254056p-101f, 0.0f, 0x1.6ce994p-37f, 0.0f, 0.0f,
     0.0f, 0x1.3f3bccp-85f, 0.0f, 0x1.a7df28p-125f, 0x1.092be8p-101f, 0x1.2720d2p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c18f44p-23f, 0x1.365bbp-61f, 0.0f, 0x1.dfab86p-76f,
     0x1.29d786p-61f, 0.0f, 0.0f, 0x1.17f65ep-15f, 0.0f, 0x1p0f, 0.0f,
     0x1.2920b2p-10f, 0x1.c9840ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.616032p-61f,
     0x1.29f96p-80f, 0x1.26e21ap-108f, 0x1.f74d06p-44f, 0.0f, 0x1.737022p-36f,
     0x1.f9b4d6p-40f, 0.0f, 0x1.90c0cap-39f, 0.0f, 0.0f, 0.0f, 0x1.a6fa9p-4f, 0.0f,
     0x1.9af306p-122f, 0.0f, 0x1.a0b9fap-52f, 0.0f, 0x1.4fab3ap-55f, 0.0f, 0.0f,
     0x1.08e3d4p-38f, 0x1.2926cap-52f, 0.0f, 0.0f, 0.0f, 0x1.498d44p-6f, 0.0f, 0.0f,
     0.0f, 0x1.158ff6p-23f, 0.0f, 0.0f, 0x1.c06d82p-52f, 0x1.bee8fp-48f,
     0x1.d6e744p-40f, 0x1.7caadcp-40f, 0.0f, 0x1.e1c81p-66f, 0x1.eb77fp-54f,
     0x1.59ea2p-94f, 0.0f, 0.0f, 0x1.810ffap-15f, 0x1.f9f4c2p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.937216p-111f, 0.0f, 0x1.4c8cd2p-17f, 0.0f, 0.0f,
     0x1.590946p-119f, 0x1.f7263cp-67f, 0x1.464752p-47f, 0x1.0c5beep-70f,
     0x1.78385ep-65f, 0x1.c0df2p-56f, 0.0f, 0x1.1142ecp-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.35b9ccp-69f, 0.0f, 0x1.94608p-79f, 0x1.e96834p-25f, 0x1p0f, 0.0f,
     0x1.94cc82p-17f, 0x1.6b507p-103f, 0x1.51bc7cp-12f, 0x1.2c37c6p-59f,
     0x1.36e28ap-125f, 0x1.252dc4p-46f, 0x1.d91416p-14f, 0.0f, 0x1.ceb204p-52f,
     0x1.db3e9ep-52f, 0.0f, 0x1.2d9d92p-36f, 0.0f, 0x1.b81b16p-52f, 0.0f,
     0x1.387634p-71f, 0.0f, 0x1.9d9d96p-52f, 0x1.c33b24p-31f, 0.0f, 0x1.7dd71cp-76f,
     0.0f, 0.0f, 0x1.487744p-1f, 0.0f, 0x1.c21ddap-112f, 0x1.a42e9ap-51f, 0.0f,
     0x1.e1996cp-92f, 0x1.5c14a6p-100f, 0x1.b1dd7p-113f, 0.0f, 0.0f, 0x1.80186ap-10f,
     0x1.8a49bp-23f, 0x1.6705a8p-84f, 0x1.cd34b8p-75f, 0.0f, 0.0f, 0x1.115ad6p-69f,
     0.0f, 0.0f, 0x1.454858p-3f, 0x1.d4d43ep-67f, 0.0f, 0.0f, 0x1.ba0a2ep-35f, 0.0f,
     0x1.7901fap-17f, 0x1.1539bap-9f, 0.0f, 0x1.2f14ep-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1de62cp-34f, 0x1.ada3aap-37f, 0x1.db4b18p-99f, 0x1.811ed4p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00dc72p-17f, 0.0f, 0.0f, 0x1.5cfa3ep-74f, 0.0f,
     0x1.627b7p-85f, 0.0f, 0x1.adff9ep-64f, 0.0f, 0x1.5f1602p-106f, 0x1.9c2998p-110f,
     0x1.360b82p-4f, 0.0f, 0x1.2a9aa6p-107f, 0x1.09a5acp-109f, 0.0f, 0.0f, 0.0f,
     0x1.8ad572p-14f, 0x1.215d58p-14f, 0.0f, 0.0f, 0x1.46f018p-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c9a37cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c16f1ap-114f, 0x1.3e6ae8p-64f,
     0.0f, 0.0f, 0.0f, 0x1.054bd8p-42f, 0x1.b3706cp-42f, 0x1.c7ad36p-23f, 0.0f,
     0x1.e525d8p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fb128p-24f, 0.0f, 0.0f, 0.0f,
     0x1.526bfp-114f, 0x1.b627d8p-49f, 0x1.04e9f2p-20f, 0x1.ea77c8p-76f,
     0x1.a0137p-31f, 0x1.d639cp-111f, 0x1.eb22cap-82f, 0x1.1922e8p-44f,
     0x1.67c896p-119f, 0x1.3ed7aep-13f, 0x1.e93668p-107f, 0.0f, 0.0f, 0.0f,
     0x1.95576p-88f, 0.0f, 0x1.412e4p-55f, 0x1.6143acp-55f, 0.0f, 0.0f,
     0x1.5b7e7ap-94f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.77a548p-22f, 0.0f, 0.0f, 0.0f,
     0x1.a112d6p-97f, 0x1.c6d066p-15f, 0x1.5fe0dp-7f, 0.0f, 0.0f, 0.0f,
     0x1.ce05ccp-88f, 0x1.69dc42p-2f, 0.0f, 0x1.d6f55cp-52f, 0.0f, 0x1.f50fc2p-36f,
     0.0f, 0x1.337f4cp-12f, 0x1.69856cp-104f, 0.0f, 0.0f, 0x1.f071c8p-75f,
     0x1.c6f706p-87f, 0.0f, 0.0f, 0.0f, 0x1.af922ap-25f, 0x1.16f178p-85f, 0.0f,
     0x1.69d676p-11f, 0x1.2a8b14p-100f, 0.0f, 0.0f, 0.0f, 0x1.ec543ap-74f, 0.0f, 0.0f,
     0x1.e42898p-71f, 0x1.8730dap-15f, 0.0f, 0.0f, 0.0f, 0x1.beacdcp-73f, 0.0f, 0.0f,
     0.0f, 0x1.79572ep-121f, 0.0f, 0x1.2046a8p-38f, 0x1.a69d54p-23f, 0.0f,
     0x1.edd372p-28f, 0x1.4e29p-18f, 0.0f, 0x1.bc79c2p-30f, 0x1.122934p-34f,
     0x1.2e87ap-5f, 0x1.ff6396p-15f, 0.0f, 0.0f, 0x1.54279p-114f, 0x1.96367ap-44f,
     0.0f, 0x1.73eabcp-113f, 0x1.626f5ep-50f, 0x1.aba8p-123f, 0.0f, 0x1.8158e4p-14f,
     0x1.20fb9cp-81f, 0.0f, 0.0f, 0.0f, 0x1.a4975ep-111f, 0x1.f1ad28p-21f, 0.0f,
     0x1.7a73b6p-55f, 0x1.d343e6p-109f, 0.0f, 0.0f, 0x1.2679cep-77f, 0x1.6cc81ap-90f,
     0.0f, 0x1.fe884ap-22f, 0x1.fc0638p-100f, 0.0f, 0x1.8a37a8p-113f,
     0x1.101948p-109f, 0x1.8c63c8p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d6d1cp-5f, 0.0f,
     0x1.3ec03ep-55f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_roundf8_kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_roundf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_roundf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
