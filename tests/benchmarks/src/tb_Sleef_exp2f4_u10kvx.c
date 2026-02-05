/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f4_u10kvx.c --function Sleef_exp2f4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.1a33c8p-116f, 0.0f, 0x1.af822ep-14f, 0.0f, 0x1.488d22p-36f,
     0x1.3b2b5ap-122f, 0x1.fa46a2p-22f, 0.0f, 0x1.26c2dap-5f, 0x1.afe30cp-74f, 0.0f,
     0x1.0097bep-25f, 0x1.faf94cp-28f, 0.0f, 0x1.f3dcf8p-99f, 0x1.bb5d2cp-126f,
     0x1.c327cep-60f, 0x1.2c86b6p-5f, 0.0f, 0x1.7f780ep-56f, 0.0f, 0x1.feb3cp-61f,
     0.0f, 0.0f, 0x1.7fa9ecp-57f, 0.0f, 0.0f, 0x1.935f02p-50f, 0.0f, 0.0f,
     0x1.e2e722p-19f, 0x1.60bf92p-115f, 0x1.e37abep-102f, 0x1.993c48p-45f,
     0x1.c15ea8p-61f, 0x1.4eb466p-82f, 0x1.066f1cp-89f, 0.0f, 0x1.f8675ap-23f, 0.0f,
     0x1.3ae7eep-98f, 0.0f, 0x1.b85b1cp-111f, 0.0f, 0.0f, 0x1.15898ap-12f,
     0x1.1c2ddp-100f, 0.0f, 0.0f, 0x1.eff8e2p-72f, 0x1.6ceabp-9f, 0x1.c20bdep-86f,
     0x1.952e8cp-60f, 0.0f, 0.0f, 0x1.642904p-20f, 0x1.31b682p-27f, 0.0f,
     0x1.d3b23p-6f, 0.0f, 0x1.6e4532p-119f, 0.0f, 0x1.591ee8p-67f, 0.0f,
     0x1.ac50ep-5f, 0x1.20831cp-39f, 0.0f, 0x1.080cbp-25f, 0.0f, 0x1.160a0ep-44f,
     0x1.cc45dep-100f, 0x1.2aaab4p-24f, 0.0f, 0x1.7ace78p-3f, 0x1.0c4c4ep-15f, 0.0f,
     0x1.56d0c2p-71f, 0.0f, 0.0f, 0.0f, 0x1.8ddd1p-89f, 0.0f, 0x1.290ce8p-76f,
     0x1.3e8cc8p-69f, 0.0f, 0.0f, 0x1.d80f08p-52f, 0x1.2dd8e6p-47f, 0x1.371d16p-25f,
     0.0f, 0x1.e7cd9cp-47f, 0x1.ccf47p-45f, 0x1.12a85ap-51f, 0.0f, 0x1.d7fffp-41f,
     0.0f, 0x1.140fdap-118f, 0.0f, 0x1.9ce1fp-103f, 0.0f, 0x1.d8169ap-20f,
     0x1.1e6d7cp-78f, 0x1.29d69ap-101f, 0x1.681f34p-54f, 0x1.b2619ep-106f, 0.0f,
     0x1.ffa32cp-19f, 0.0f, 0x1.736c3p-72f, 0.0f, 0x1.b3994p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ce48eep-77f, 0.0f, 0.0f, 0x1.56269ep-92f, 0x1.bc019p-27f, 0.0f, 0.0f,
     0.0f, 0x1.b42df8p-46f, 0x1.3ffb4p-109f, 0.0f, 0x1.91ef2ep-90f, 0x1.95ff72p-7f,
     0.0f, 0.0f, 0x1.d42b0cp-45f, 0x1.834652p-73f, 0x1.4ff588p-116f, 0.0f,
     0x1.f46498p-80f, 0x1.c0b2cep-16f, 0.0f, 0x1.684fb6p-54f, 0.0f, 0.0f,
     0x1.fa62d6p-54f, 0x1.d345d2p-16f, 0.0f, 0x1.045dd4p-118f, 0x1.17dc38p-97f, 0.0f,
     0x1.ad7d9ep-69f, 0x1.228a6ep-86f, 0x1.1afed6p-2f, 0x1.6983d6p-9f,
     0x1.9098b2p-22f, 0.0f, 0.0f, 0.0f, 0x1.2bf3f6p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e29ecp-29f, 0x1.5b7668p-52f, 0.0f, 0x1.97f3a6p-102f, 0x1.25b0c2p-50f, 0.0f,
     0x1.5fc652p-88f, 0x1.61a07p-67f, 0.0f, 0.0f, 0x1.649732p-95f, 0x1.0c9a98p-51f,
     0x1.95711p-74f, 0.0f, 0x1.4179bep-79f, 0x1.59ab9cp-29f, 0.0f, 0x1.d3a4f4p-123f,
     0x1.310faap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc1abcp-51f, 0.0f, 0x1.9a2d42p-12f,
     0.0f, 0.0f, 0x1.be3428p-86f, 0x1.5fd682p-94f, 0x1.58e9c8p-125f, 0x1.3bcebcp-92f,
     0x1.8dc5e8p-100f, 0x1.b45e46p-40f, 0x1.6fd98p-6f, 0.0f, 0.0f, 0x1.065586p-3f,
     0x1.24110ap-61f, 0x1.cdfba4p-76f, 0x1.881a7cp-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f85cap-62f, 0x1.b1bcp-94f, 0x1.e690bep-39f, 0x1.ea9912p-64f,
     0x1.69501p-121f, 0.0f, 0.0f, 0.0f, 0x1.c0bdccp-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd7e62p-116f, 0.0f, 0x1.03458ap-17f, 0x1.f8bed2p-112f, 0x1.9de848p-87f,
     0x1.c1ccf8p-82f, 0x1.7dccb6p-50f, 0x1.48663ap-15f, 0.0f, 0.0f, 0.0f,
     0x1.ed47dap-25f, 0x1.3ce6fcp-23f, 0.0f, 0.0f, 0.0f, 0x1.9a789ep-39f,
     0x1.a050dap-90f, 0.0f, 0x1.4d5e8ep-40f, 0x1.a02662p-66f, 0.0f, 0x1.5ea9b6p-47f,
     0x1.1b112ep-94f, 0x1.6c9efep-59f, 0x1.8940fap-86f, 0.0f, 0x1.b23b66p-56f, 0.0f,
     0x1.086404p-70f, 0x1.7cd232p-20f, 0.0f, 0.0f, 0.0f, 0x1.8065d6p-104f, 0.0f,
     0x1.af8638p-90f, 0.0f, 0.0f, 0x1.33b28cp-22f, 0x1.fd531cp-73f, 0.0f,
     0x1.0251f8p-94f, 0x1.f26958p-88f, 0x1.d1fa82p-45f, 0x1.2d2d12p-57f,
     0x1.a087b2p-113f, 0x1.15a23ap-109f, 0.0f, 0.0f, 0.0f, 0x1.8d23f2p-52f,
     0x1.fff714p-16f, 0.0f, 0.0f, 0x1.504adp-76f, 0x1.d9ad68p-44f, 0x1.2e16c2p-89f,
     0.0f, 0.0f, 0x1.22f3e6p-105f, 0x1.26fdecp-116f, 0.0f, 0x1.a4150ep-15f, 0.0f,
     0x1.58702cp-105f, 0x1.fc28dp-118f, 0.0f, 0.0f, 0x1.97d746p-118f, 0.0f,
     0x1.471f54p-51f, 0x1.9e12acp-78f, 0.0f, 0.0f, 0.0f, 0x1.3e485ep-82f,
     0x1.824b4ep-21f, 0x1.4a4b48p-96f, 0x1.4be96p-27f, 0.0f, 0.0f, 0x1.84fb9ep-85f,
     0.0f, 0.0f, 0x1.018b96p-107f, 0x1.6cb40ap-62f, 0x1.9c711p-76f, 0x1.4aa8aap-71f,
     0.0f, 0x1.88514p-54f, 0.0f, 0.0f, 0x1.01936ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7dd4b4p-71f, 0x1.5cf74ap-49f, 0.0f, 0.0f, 0.0f, 0x1.958a42p-40f,
     0.0f, 0x1.15f9fp-93f, 0x1.c743acp-15f, 0x1.9916f4p-81f, 0x1.492128p-94f,
     0x1.fdb2fap-126f, 0.0f, 0.0f, 0x1.723b18p-27f, 0x1.87edeap-92f, 0.0f,
     0x1.a3ed1p-3f, 0.0f, 0.0f, 0.0f, 0x1.57fd5p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ae922p-101f, 0.0f, 0.0f, 0x1.e101bep-13f, 0x1.4f7caap-65f, 0x1.38155ep-60f,
     0.0f, 0x1.7b90b8p-106f, 0x1.e6683ep-122f, 0x1.4efep-3f, 0x1.b5361cp-95f, 0.0f,
     0.0f, 0x1.c6afe2p-38f, 0x1.715e3cp-83f, 0.0f, 0x1.1f26f2p-88f, 0x1.c90fbap-115f,
     0x1.62ea7cp-83f, 0.0f, 0.0f, 0.0f, 0x1.4a1e8p-74f, 0.0f, 0.0f, 0x1.b9b8ccp-85f,
     0x1.a833e4p-90f, 0.0f, 0x1.be1fdcp-119f, 0x1.beac9ap-5f, 0.0f, 0x1.883836p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13b9dap-24f, 0.0f, 0.0f, 0x1.5f2268p-50f,
     0x1.29611p-16f, 0x1.2ea182p-44f, 0.0f, 0x1.6859f8p-117f, 0.0f, 0.0f,
     0x1.6f2b5ap-100f, 0x1.1a4704p-43f, 0.0f, 0x1.353f28p-33f, 0x1.09f256p-115f, 0.0f,
     0x1.6fa12ep-68f, 0x1.162a0ap-107f, 0.0f, 0.0f, 0.0f, 0x1.af873ap-13f, 0.0f,
     0x1.c3931ap-91f, 0.0f, 0.0f, 0.0f, 0x1.1d25aap-27f, 0.0f, 0.0f, 0x1.e6befep-35f,
     0x1.2a5ee4p-77f, 0x1.d29d72p-83f, 0.0f, 0x1.477b2ep-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6145fep-116f, 0.0f, 0x1.3afafap-86f, 0.0f, 0x1.768e8p-34f, 0x1.efd4a8p-58f,
     0x1.a8c754p-39f, 0.0f, 0.0f, 0.0f, 0x1.e4eb2ap-98f, 0.0f, 0x1.3cedp-5f,
     0x1.be13e2p-120f, 0.0f, 0x1.9c100ap-91f, 0.0f, 0x1.3998eep-56f, 0.0f, 0.0f,
     0x1.8f306p-72f, 0.0f, 0.0f, 0.0f, 0x1.b117bp-44f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.75c656p-112f, 0.0f, 0x1.a4d47ep-108f, 0.0f, 0.0f, 0x1.4a6226p-41f, 0.0f,
     0x1.29bedep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd7f34p-13f,
     0x1.71799ep-20f, 0.0f, 0.0f, 0x1.111366p-5f, 0x1.fcdb32p-98f, 0.0f,
     0x1.89797p-3f, 0.0f, 0.0f, 0.0f, 0x1.f97928p-110f, 0.0f, 0x1.c9779ep-93f,
     0x1.728c62p-114f, 0.0f, 0x1.926bccp-39f, 0x1.90e99ap-4f, 0.0f, 0x1p0f, 0.0f,
     0x1.7706eap-71f, 0.0f, 0.0f, 0x1.98b0eep-100f, 0x1.04aefep-20f, 0x1.14dd3ep-32f,
     0x1.443894p-123f, 0x1.5afbdcp-54f, 0.0f, 0x1.442946p-65f, 0x1.37b6eap-25f, 0.0f,
     0.0f, 0x1.40bdd8p-79f, 0.0f, 0x1.bcf2dep-95f, 0x1.a676bap-80f, 0x1.44e5fp-106f,
     0.0f, 0.0f, 0.0f, 0x1.d52ec2p-32f, 0.0f, 0.0f, 0x1.020418p-54f, 0.0f, 0.0f,
     0x1.61e138p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08cd6p-57f, 0x1.874996p-12f,
     0x1.29d14ep-85f, 0x1.b1acb8p-96f, 0x1.acb4e4p-60f, 0x1.8104dp-58f,
     0x1.145fa2p-89f, 0x1.1923e4p-24f, 0.0f, 0x1.a99026p-90f, 0.0f, 0x1.df2e94p-29f,
     0.0f, 0x1.d3f4ap-11f, 0x1.4f459p-109f, 0.0f, 0x1p0f, 0.0f, 0x1.8f97acp-97f,
     0x1.93c772p-123f, 0x1.ddc01p-114f, 0x1.288166p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a5d8cp-41f, 0x1.e873cep-56f, 0.0f, 0.0f, 0x1.9a70f8p-27f, 0x1.a448eep-92f,
     0x1.3bca12p-16f, 0x1.5b4304p-100f, 0x1.422426p-18f, 0.0f, 0.0f, 0x1.7508ap-1f,
     0.0f, 0.0f, 0x1.6351cp-65f, 0.0f, 0x1.3e6cf4p-94f, 0.0f, 0x1.8dd348p-13f,
     0x1.b181cp-51f, 0.0f, 0.0f, 0x1.babdd6p-124f, 0.0f, 0.0f, 0.0f, 0x1.92794ep-81f,
     0.0f, 0x1.30adcap-113f, 0x1.40b9fap-63f, 0x1.a36d02p-24f, 0.0f, 0x1.2c9d8ep-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bf00ap-64f, 0x1.423c38p-66f, 0.0f, 0.0f,
     0x1.13f11p-125f, 0.0f, 0x1.1a36fap-47f, 0.0f, 0x1.2b45e4p-105f, 0.0f, 0.0f,
     0x1.e3567ap-64f, 0x1.9418fep-6f, 0.0f, 0.0f, 0x1.769414p-56f, 0.0f,
     0x1.23af6ep-10f, 0.0f, 0x1.ac4a7ap-64f, 0x1.c3142ep-56f, 0x1.a7c90ap-95f, 0.0f,
     0.0f, 0x1.606f8ep-96f, 0.0f, 0x1.600386p-12f, 0x1.c5798cp-66f, 0x1.79baa6p-49f,
     0x1.a9b82p-24f, 0.0f, 0x1.4095p-103f, 0.0f, 0x1.bed018p-106f, 0x1.64fabep-43f,
     0x1.b0848p-126f, 0x1.dd938cp-34f, 0.0f, 0x1.dc31d2p-110f, 0.0f, 0.0f,
     0x1.d64056p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8204dap-47f, 0x1.e2a4d8p-43f,
     0x1.39f6f6p-67f, 0x1.8e48a8p-91f, 0.0f, 0x1.d4625p-31f, 0.0f, 0x1.e5c99ap-103f,
     0x1.fcfe02p-30f, 0.0f, 0x1.240f5ep-104f, 0x1.9736b4p-115f, 0x1.d1728cp-25f,
     0x1.8d1cp-108f, 0.0f, 0x1.12cacap-1f, 0.0f, 0x1.de581cp-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d3aeb8p-8f, 0.0f, 0.0f, 0x1.ac9d9cp-107f, 0x1.e51af8p-56f,
     0x1.83042cp-35f, 0.0f, 0.0f, 0x1.e0d19ap-94f, 0.0f, 0.0f, 0.0f, 0x1.8d580ep-9f,
     0.0f, 0.0f, 0.0f, 0x1.881d3p-97f, 0.0f, 0.0f, 0.0f, 0x1.09b2eep-66f,
     0x1.a3168cp-55f, 0x1.27c37cp-20f, 0.0f, 0.0f, 0x1.5e6778p-94f, 0x1.48cc84p-125f,
     0.0f, 0.0f, 0x1.fd530ep-99f, 0.0f, 0x1.1b10fep-81f, 0x1.c9f69cp-99f, 0.0f,
     0x1.c04bbp-119f, 0x1.7bb922p-60f, 0.0f, 0.0f, 0.0f, 0x1.d1bf94p-13f,
     0x1.8a0ac4p-45f, 0x1.915bb8p-20f, 0.0f, 0x1.cc029ap-18f, 0x1.57cc7ep-120f,
     0x1.0b17c8p-105f, 0.0f, 0.0f, 0.0f, 0x1.a49184p-1f, 0.0f, 0.0f, 0x1.bf2b46p-44f,
     0.0f, 0x1.21d1fp-32f, 0.0f, 0x1.04334cp-123f, 0.0f, 0x1.9a74bap-85f,
     0x1.d7f74p-1f, 0.0f, 0.0f, 0x1.95f3b6p-26f, 0.0f, 0x1.00cf8p-41f, 0.0f, 0.0f,
     0.0f, 0x1.a55a5p-97f, 0x1.87a4cap-113f, 0x1.8fe08ap-45f, 0.0f, 0.0f,
     0x1.788fbcp-56f, 0.0f, 0x1.76ce2cp-37f, 0.0f, 0x1.37f50ep-90f, 0x1.9a67c6p-120f,
     0x1.34b008p-109f, 0x1.7ab4dp-5f, 0.0f, 0.0f, 0x1.c9c654p-125f, 0x1.2c8c24p-60f,
     0.0f, 0.0f, 0.0f, 0x1.1d5a4cp-24f, 0x1.55e174p-89f, 0.0f, 0x1.0ea318p-54f,
     0x1.da9f1ep-19f, 0.0f, 0.0f, 0x1.15a862p-84f, 0.0f, 0x1.b5a454p-112f,
     0x1.ab84bap-13f, 0.0f, 0x1.708f46p-6f, 0x1.5109eep-93f, 0.0f, 0.0f, 0.0f,
     0x1.e6b4a4p-18f, 0x1.16497p-15f, 0.0f, 0.0f, 0x1.a93f04p-105f, 0.0f, 0.0f,
     0x1.1a83d8p-27f, 0.0f, 0x1.6e884ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.116738p-43f, 0.0f, 0x1.d0f7acp-44f, 0x1.1cab82p-56f, 0x1.fb19dcp-27f,
     0x1.e0781ep-43f, 0x1.a7965p-52f, 0.0f, 0x1.5c6f48p-12f, 0x1.de5006p-72f,
     0x1.fd43d8p-28f, 0x1.bc3e26p-99f, 0.0f, 0.0f, 0x1.661d6ap-60f, 0x1.a03e8cp-55f,
     0x1.a120ccp-58f, 0x1.f6f38cp-115f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.ec0f6ap-121f, 0x1.fe0c8p-47f, 0.0f, 0.0f, 0.0f, 0x1.bad912p-88f,
     0x1.50ed3ep-117f, 0.0f, 0.0f, 0x1.0e90e8p-23f, 0.0f, 0x1.757502p-58f,
     0x1.b594f8p-97f, 0.0f, 0.0f, 0x1.f4f262p-14f, 0x1.12681ep-85f, 0x1.7bc756p-83f,
     0x1.7ff21cp-83f, 0x1.bbd8acp-123f, 0x1.374f04p-70f, 0x1.9b2b4p-93f,
     0x1.e41a94p-15f, 0.0f, 0.0f, 0x1.7dc5b8p-32f, 0x1.ed2b34p-52f, 0x1.0483d6p-19f,
     0x1.458082p-14f, 0x1.51f9d8p-124f, 0.0f, 0x1.066616p-78f, 0.0f, 0x1.e73feep-101f,
     0x1.e744bcp-77f, 0x1.74905ap-73f, 0x1.2a6712p-110f, 0.0f, 0x1.6f813ap-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcc5e6p-82f, 0.0f, 0x1.6b0128p-67f,
     0x1.ebcf5cp-107f, 0x1.a1ce06p-40f, 0x1.259c14p-16f, 0.0f, 0.0f, 0x1.7470bep-1f,
     0x1.cb8582p-28f, 0x1.dede6ep-91f, 0x1.a7a678p-52f, 0x1.85dbcep-98f,
     0x1.e527e6p-74f, 0.0f, 0x1.86f8fp-112f, 0.0f, 0x1.e5dd44p-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.264c4ap-3f, 0x1.004c56p-98f, 0x1.4196acp-42f, 0x1.d31d6ap-85f,
     0x1.cf3b3ep-63f, 0.0f, 0.0f, 0x1.e92776p-107f, 0.0f, 0x1.8f52ep-120f, 0.0f, 0.0f,
     0x1.8f814ep-105f, 0.0f, 0x1.6d7224p-28f, 0x1.426bf4p-75f, 0.0f, 0x1.c48deap-120f,
     0.0f, 0x1.08ffcp-120f, 0.0f, 0.0f, 0x1.0fc6e4p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.014fdep-77f, 0x1.380118p-86f, 0.0f, 0x1.4cc4e6p-102f, 0x1.bfad1ep-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3feb22p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a1c2ep-60f,
     0x1.e9496ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0817ap-32f,
     0x1.5bcbc4p-95f, 0x1.44304ap-25f, 0x1.3e3872p-74f, 0.0f, 0x1.a85004p-55f, 0.0f,
     0x1.247a5ep-2f, 0.0f, 0.0f, 0.0f, 0x1.9b7e52p-8f, 0x1.1dceb2p-104f,
     0x1.b9879cp-10f, 0x1.42dfa8p-117f, 0.0f, 0.0f, 0x1.b6d7f4p-11f, 0x1.2adfd4p-109f,
     0x1.48d2p-17f, 0x1.ac0b7p-124f, 0x1.81d208p-10f, 0.0f, 0x1.43611cp-97f,
     0x1.eacda8p-56f, 0.0f, 0.0f, 0.0f, 0x1.6ad964p-44f, 0x1.f4b6p-63f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.59cce8p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a4f06p-112f,
     0x1.46d4ep-111f, 0.0f, 0.0f, 0x1.f52256p-90f, 0.0f, 0x1.01cc12p-90f,
     0x1.3ef3dcp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87256cp-26f, 0.0f, 0x1.d10abep-93f,
     0x1.0bda14p-37f, 0x1.f43cecp-34f, 0x1.92c02ap-70f, 0x1p0f, 0x1.22fcap-118f,
     0x1.b0581cp-84f, 0.0f, 0x1.8d5d26p-6f, 0x1.599152p-12f, 0x1.137efcp-118f, 0.0f,
     0.0f, 0x1.f382f8p-27f, 0.0f, 0.0f, 0.0f, 0x1.051a92p-45f, 0.0f, 0x1.c1384ap-77f,
     0.0f, 0.0f, 0x1.ae56fep-4f, 0x1.0d4482p-117f, 0x1.8680f8p-34f, 0x1.901a3cp-82f,
     0x1.6165cp-123f, 0x1.6820c8p-102f, 0x1.211a5ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9722p-47f, 0x1.f5f05p-84f, 0x1.0d9ffap-34f
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
            tmp1 = Sleef_exp2f4_u10kvx(tmp0);
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
    printf("Sleef_exp2f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp2f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
