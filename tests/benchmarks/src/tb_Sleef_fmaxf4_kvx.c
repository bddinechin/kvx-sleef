/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmaxf4_kvx.c --function Sleef_fmaxf4_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0x1.08c6a4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10e64ap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85c25ep-15f, 0.0f, 0.0f, 0.0f,
     0x1.a7a48ep-29f, 0x1.472624p-70f, 0x1.35c0d4p-44f, 0.0f, 0x1.5697fp-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.195124p-79f, 0.0f, 0.0f, 0x1.e07456p-86f,
     0x1.8d459cp-49f, 0x1.51e62ap-91f, 0x1.aec442p-89f, 0x1.129b72p-94f, 0.0f, 0.0f,
     0x1.f25adap-76f, 0x1.9315cap-80f, 0x1.f81b1p-73f, 0x1.59bb3cp-124f,
     0x1.63e03ap-106f, 0.0f, 0x1.d400bap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54941cp-85f, 0x1.5a682cp-56f, 0x1.c027c8p-12f, 0x1.9b3f14p-71f,
     0x1.c3582p-1f, 0x1.9a8a0ep-110f, 0.0f, 0x1.a0097ap-122f, 0x1.03334ep-87f,
     0x1.99e7f2p-93f, 0x1.65b182p-101f, 0.0f, 0x1.d0d61ep-50f, 0x1.dd5018p-69f, 0.0f,
     0x1.837222p-46f, 0x1.1fba5ap-40f, 0x1.c9b4ap-12f, 0x1.d7f51p-98f,
     0x1.f1820cp-20f, 0.0f, 0.0f, 0x1.bc6d5ap-10f, 0.0f, 0x1.7a616ap-58f,
     0x1.097a9ap-100f, 0x1.777e36p-110f, 0x1.ccef7p-94f, 0x1.147918p-125f,
     0x1.7bd624p-33f, 0.0f, 0.0f, 0x1.9b45ep-49f, 0.0f, 0.0f, 0.0f, 0x1.1b450cp-94f,
     0x1.0eb122p-26f, 0x1.e891e2p-124f, 0x1.d1623ap-113f, 0.0f, 0x1.ad08ap-5f, 0.0f,
     0x1.0a53b4p-19f, 0.0f, 0x1.333982p-28f, 0.0f, 0x1.8f0e08p-110f, 0x1.59572p-53f,
     0x1.6981d6p-93f, 0x1.27c0a2p-74f, 0x1.fa5332p-113f, 0.0f, 0.0f, 0x1.50bae2p-71f,
     0x1.4425dep-46f, 0x1.5f0e04p-24f, 0.0f, 0x1.c46a1ap-109f, 0x1.495fa4p-69f,
     0x1.c5ab86p-29f, 0x1.b6e1e6p-77f, 0.0f, 0.0f, 0.0f, 0x1.83726p-44f, 0.0f,
     0x1.5d8858p-41f, 0x1.0eff0ap-7f, 0x1.31370ep-106f, 0x1.aa8be6p-45f, 0.0f,
     0x1.b167a4p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efc646p-102f, 0x1.adff4ep-58f,
     0x1.a8429ap-11f, 0.0f, 0x1.86d3cap-28f, 0.0f, 0.0f, 0x1.0f4fp-91f, 0.0f,
     0x1.a71b2p-6f, 0.0f, 0.0f, 0x1.17f6a4p-21f, 0x1.8888bcp-46f, 0x1.5ce048p-75f,
     0x1.5ed342p-76f, 0x1.bbd6a8p-106f, 0.0f, 0.0f, 0x1.e4ad52p-10f, 0x1.96852p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.764c08p-29f, 0x1.466738p-61f, 0x1p0f, 0.0f,
     0x1.763288p-96f, 0x1p0f, 0.0f, 0.0f, 0x1.07c40ap-79f, 0x1.f3a64p-58f,
     0x1.727ba4p-47f, 0x1.ad95bep-7f, 0x1.03f85p-85f, 0x1.b7418cp-59f,
     0x1.8fd548p-42f, 0x1.5b8898p-74f, 0.0f, 0.0f, 0.0f, 0x1.a27e7cp-51f,
     0x1.ff5582p-87f, 0.0f, 0x1.95fdbp-103f, 0.0f, 0.0f, 0.0f, 0x1.f35ca6p-51f, 0.0f,
     0x1.1a8344p-122f, 0x1.a03dc6p-76f, 0x1.a626eep-41f, 0x1.a63a4cp-78f,
     0x1.424edp-87f, 0x1.cb556cp-120f, 0.0f, 0x1.dde6d6p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4bd3ap-54f, 0.0f, 0.0f, 0x1.c772aep-38f, 0.0f,
     0x1.d90ce8p-20f, 0.0f, 0x1.04fe9ap-25f, 0.0f, 0.0f, 0.0f, 0x1.305e54p-46f,
     0x1.c5f76p-84f, 0.0f, 0x1.c942a2p-9f, 0x1.3ed0b6p-104f, 0x1.4db49p-65f, 0.0f,
     0.0f, 0x1.166ba4p-14f, 0x1.e2c0bap-55f, 0x1.47489ep-16f, 0x1.581f76p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.104d62p-36f, 0x1.75dea2p-54f, 0x1.c85a8ep-92f,
     0x1.9b752ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e23dcp-58f, 0x1.83cb14p-87f, 0.0f,
     0x1.003d98p-122f, 0x1.e47becp-46f, 0x1.a329a4p-47f, 0x1.a9f65ep-81f, 0.0f, 0.0f,
     0x1.7d4678p-69f, 0.0f, 0.0f, 0.0f, 0x1.f1d3aap-119f, 0.0f, 0x1.0042d2p-10f, 0.0f,
     0x1.a75388p-107f, 0.0f, 0x1.6a95cep-32f, 0x1.36fa0cp-104f, 0.0f, 0.0f,
     0x1.370066p-103f, 0x1.e0973p-84f, 0x1.273b32p-61f, 0x1.245904p-51f,
     0x1.dab588p-2f, 0x1.5eb58ap-105f, 0.0f, 0x1.8e40a6p-23f, 0.0f, 0x1.5cc79ep-46f,
     0.0f, 0x1.519242p-58f, 0x1.3c6992p-13f, 0.0f, 0x1.794c82p-110f, 0x1.5fba46p-10f,
     0x1.d82386p-120f, 0x1.c97c46p-43f, 0.0f, 0.0f, 0.0f, 0x1.444b8p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.08941ap-65f, 0x1.2e96b4p-41f, 0x1.efce2p-103f, 0x1.d621f2p-71f,
     0.0f, 0.0f, 0x1.0b39a4p-64f, 0x1.4c971ap-103f, 0.0f, 0.0f, 0x1.d8e0d4p-21f, 0.0f,
     0x1.7bde2ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66b1f8p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2237aep-71f, 0.0f, 0x1.696444p-118f, 0.0f, 0x1.d5e34ap-106f, 0x1.7b5eacp-28f,
     0.0f, 0.0f, 0x1.e23c12p-112f, 0.0f, 0.0f, 0.0f, 0x1.de6304p-32f, 0.0f, 0.0f,
     0x1.63e8d6p-75f, 0.0f, 0x1.068604p-39f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.775178p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11fd1ap-31f, 0.0f,
     0x1.74c83ep-43f, 0.0f, 0.0f, 0.0f, 0x1.94580ep-55f, 0x1.f90c1ep-24f, 0.0f,
     0x1.b59accp-117f, 0.0f, 0x1.dce396p-126f, 0x1.539b7ap-28f, 0.0f,
     0x1.9c4d1ep-110f, 0.0f, 0.0f, 0x1.1cf818p-69f, 0x1.4d7cecp-87f, 0x1.bc4836p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87235cp-68f, 0x1.78cb62p-81f, 0.0f,
     0x1.a67d08p-24f, 0.0f, 0x1.cc28bep-2f, 0x1.d49b9cp-72f, 0.0f, 0x1.ce424ap-12f,
     0.0f, 0x1.91176cp-76f, 0x1.775c08p-54f, 0.0f, 0.0f, 0.0f, 0x1.87152p-32f, 0.0f,
     0.0f, 0.0f, 0x1.550d56p-120f, 0x1.066456p-65f, 0.0f, 0x1.97d0fcp-87f,
     0x1.1db828p-60f, 0x1.54940ep-117f, 0x1.8255bp-58f, 0.0f, 0x1.419e6cp-29f, 0.0f,
     0.0f, 0.0f, 0x1.b42f94p-20f, 0x1.8f018cp-115f, 0.0f, 0x1.965484p-59f, 0.0f,
     0x1.655018p-112f, 0.0f, 0.0f, 0x1.a8d5a2p-107f, 0x1.041124p-40f, 0.0f, 0.0f,
     0x1.b078b6p-114f, 0x1.270a94p-3f, 0.0f, 0.0f, 0x1.64317ep-121f, 0x1.c6eb0ap-68f,
     0x1.728244p-25f, 0x1.b88f36p-8f, 0.0f, 0x1.21bb5ep-24f, 0.0f, 0x1.6a85a4p-28f,
     0.0f, 0x1.b9a52ap-89f, 0.0f, 0.0f, 0x1.e0f328p-8f, 0.0f, 0.0f, 0.0f,
     0x1.c0cfeap-15f, 0x1.161c32p-77f, 0x1.9bf484p-119f, 0x1.89bcf8p-32f,
     0x1.3ad7b4p-3f, 0.0f, 0x1.bcf222p-116f, 0.0f, 0x1.553df2p-33f, 0.0f,
     0x1.ab8d1p-65f, 0.0f, 0x1.2dbe2p-21f, 0x1.927f12p-79f, 0x1.e31ef6p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a144e8p-41f, 0x1.4cf626p-7f, 0.0f, 0x1.b6bc9ep-94f,
     0x1.045de2p-108f, 0.0f, 0x1.1deefap-121f, 0x1.6d6dccp-125f, 0x1.3e6ca2p-83f,
     0x1.fb858cp-101f, 0x1.2b66e8p-8f, 0x1.a28106p-41f, 0.0f, 0.0f, 0x1.c54cb4p-42f,
     0x1.9510aep-36f, 0.0f, 0x1.925d9cp-25f, 0.0f, 0x1.0a29c4p-54f, 0x1.c0ffeep-116f,
     0.0f, 0x1.4fd0bp-6f, 0x1.005ba4p-87f, 0x1.02e7e8p-21f, 0x1.2d22f6p-123f,
     0x1.d46c1cp-78f, 0.0f, 0.0f, 0x1.8ee18ep-3f, 0x1.cbe586p-58f, 0.0f,
     0x1.ebc47ep-28f, 0.0f, 0x1.54736ep-114f, 0.0f, 0x1.6b961cp-68f, 0x1.faaa8cp-69f,
     0x1.60d382p-99f, 0.0f, 0.0f, 0x1.d2f812p-113f, 0.0f, 0.0f, 0x1.c40b5ep-124f,
     0x1.77ad04p-91f, 0.0f, 0x1.ec711p-117f, 0.0f, 0.0f, 0x1.73c276p-24f, 0.0f,
     0x1.63793cp-29f, 0x1.d1aef2p-6f, 0x1.b4930cp-8f, 0x1.fc8cccp-32f, 0.0f, 0.0f,
     0.0f, 0x1.daa86ep-12f, 0x1.80182p-77f, 0.0f, 0x1.31d29cp-84f, 0x1.448274p-2f,
     0x1.1ec3bp-21f, 0x1.2f7cacp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9275p-70f,
     0x1.85bfaap-93f, 0x1.0e12e8p-63f, 0x1.b24b9ep-88f, 0.0f, 0x1.c77472p-34f, 0.0f,
     0x1.2e5cd8p-97f, 0x1.0c781cp-91f, 0x1.cd5a3ep-63f, 0x1.ee3efep-5f,
     0x1.01de64p-82f, 0.0f, 0.0f, 0.0f, 0x1.0df65p-112f, 0.0f, 0x1.572e2cp-57f, 0.0f,
     0.0f, 0x1.32583ep-56f, 0.0f, 0x1.584332p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cefa4ap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.045dcap-13f, 0.0f, 0x1.05db78p-58f, 0x1.6f14e4p-106f,
     0x1.cef2aap-53f, 0x1.be6992p-86f, 0x1.b3315ep-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f3dccp-111f, 0.0f, 0x1.155b58p-96f, 0x1.b02bb6p-25f, 0x1.e3554ep-69f,
     0x1.9be67ap-123f, 0.0f, 0x1.a87e0ap-76f, 0x1.95f7c6p-86f, 0.0f, 0.0f, 0.0f,
     0x1.6e4ddap-80f, 0.0f, 0x1.42e96p-32f, 0x1.7456eap-49f, 0x1.e739cp-10f, 0.0f,
     0x1.1d7adcp-110f, 0x1.1017acp-99f, 0.0f, 0x1.93f60ap-65f, 0x1.448e4ap-9f, 0.0f,
     0.0f, 0x1.e0cab2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa6984p-61f,
     0x1.c950aep-79f, 0.0f, 0x1.0d57fp-49f, 0x1.f430b8p-47f, 0x1.7ff8dep-27f,
     0x1.cf96b8p-109f, 0.0f, 0x1.2f5daep-7f, 0x1.b5b0e6p-14f, 0.0f, 0.0f,
     0x1.bfab84p-116f, 0x1.b14a92p-106f, 0.0f, 0.0f, 0x1.5a35c8p-56f, 0x1.4e78d4p-3f,
     0.0f, 0x1.9241b6p-74f, 0x1.65a91cp-69f, 0.0f, 0x1.7d0bfp-81f, 0x1.0a34fap-26f,
     0.0f, 0x1.a895ep-15f, 0x1.ab1aa6p-3f, 0x1.dfc99cp-46f, 0.0f, 0.0f,
     0x1.c07d3ap-10f, 0x1.54d55ep-53f, 0x1.48b90ap-99f, 0x1.8b74aep-9f,
     0x1.86ebfp-15f, 0x1.35a0bcp-118f, 0x1.160044p-47f, 0x1.88ade8p-10f, 0.0f, 0.0f,
     0.0f, 0x1.5733ecp-102f, 0.0f, 0.0f, 0x1.e01c44p-44f, 0.0f, 0.0f, 0.0f,
     0x1.f90aa6p-111f, 0x1.c8ad9ap-87f, 0.0f, 0.0f, 0x1.aef5fcp-31f, 0x1.5afff2p-35f,
     0x1.94cbcap-56f, 0.0f, 0.0f, 0x1.67ee5p-103f, 0.0f, 0.0f, 0x1.9ce49cp-92f,
     0x1.b8819ap-65f, 0.0f, 0x1.ab476p-117f, 0x1.843af4p-84f, 0.0f, 0.0f,
     0x1.3b23c2p-102f, 0.0f, 0x1.a409e4p-65f, 0.0f, 0.0f, 0x1.ae803ep-3f,
     0x1.11e48cp-40f, 0x1.fc8956p-27f, 0.0f, 0x1.bf47eep-76f, 0x1.faaa32p-101f, 0.0f,
     0x1.ad0faep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73f558p-97f, 0.0f, 0.0f,
     0x1.2fc036p-43f, 0.0f, 0x1.ef932ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.422fd4p-26f,
     0.0f, 0.0f, 0.0f, 0x1.af5594p-102f, 0.0f, 0x1.77452ep-25f, 0.0f, 0.0f,
     0x1.946414p-38f, 0.0f, 0.0f, 0.0f, 0x1.be8ebep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9e9d2p-106f, 0.0f, 0.0f, 0x1.cf0716p-50f, 0x1.bfb034p-11f,
     0x1.91bb0cp-76f, 0x1.eaec04p-49f, 0.0f, 0x1.ed9f8ep-16f, 0x1.0684a6p-11f,
     0x1.7a1642p-110f, 0.0f, 0.0f, 0x1.906026p-74f, 0.0f, 0.0f, 0.0f, 0x1.6afd02p-32f,
     0.0f, 0x1.f3c99p-88f, 0.0f, 0x1.c1d7b6p-18f, 0x1.45afdep-79f, 0x1.8faa9p-87f,
     0.0f, 0.0f, 0x1.5a95b2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28ad52p-101f,
     0x1.c53f98p-7f, 0x1.31674p-1f, 0x1.91dc84p-14f, 0.0f, 0x1.c616b4p-66f, 0.0f,
     0x1.fc0f8ap-3f, 0x1.d17eaep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cd446p-80f, 0.0f,
     0x1.0586f8p-7f, 0.0f, 0x1.62afa6p-22f, 0x1.b3e2e4p-63f, 0.0f, 0.0f,
     0x1.9d0acp-87f, 0.0f, 0x1.32ca96p-13f, 0.0f, 0.0f, 0x1.6d9492p-13f, 0.0f,
     0x1.ad8eecp-68f, 0x1.8145eap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcd838p-116f, 0.0f,
     0.0f, 0x1.3b73aep-85f, 0.0f, 0.0f, 0.0f, 0x1.7ad2b2p-9f, 0.0f, 0x1.fecba2p-30f,
     0x1.69f294p-114f, 0x1.c0d9aap-99f, 0.0f, 0x1.61b596p-106f, 0x1.0b0032p-38f, 0.0f,
     0.0f, 0.0f, 0x1.b07c0cp-12f, 0x1.fbb6eep-56f, 0.0f, 0.0f, 0x1.d690fap-69f, 0.0f,
     0x1.bc7f4ep-43f, 0.0f, 0x1.62c83p-51f, 0x1.6957dcp-11f, 0.0f, 0.0f, 0.0f,
     0x1.129558p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f614e6p-107f,
     0x1.709f3cp-80f, 0x1.d9c07cp-74f, 0.0f, 0.0f, 0x1.df90d4p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1872d8p-70f, 0.0f, 0.0f, 0.0f, 0x1.b19772p-56f, 0.0f, 0.0f,
     0x1.4993b4p-27f, 0.0f, 0x1.f2c7c8p-30f, 0.0f, 0x1.072e04p-62f, 0x1.9ade24p-26f,
     0.0f, 0.0f, 0x1.363cf2p-62f, 0x1p0f, 0.0f, 0x1.90f46p-26f, 0x1.aa4a3p-40f,
     0x1.d2bfcap-5f, 0.0f, 0.0f, 0x1.208568p-96f, 0.0f, 0.0f, 0x1.d39108p-18f, 0.0f,
     0x1.383a3ap-59f, 0x1.0669c2p-13f, 0.0f, 0.0f, 0x1.10694ep-1f, 0x1.89d63ap-66f,
     0.0f, 0x1.42d7c8p-123f, 0.0f, 0.0f, 0x1.7bd5d2p-37f, 0.0f, 0x1.9d2d3cp-65f,
     0x1.34c6f8p-75f, 0.0f, 0x1.1abf68p-117f, 0.0f, 0x1.81434ap-18f, 0x1.75f6e4p-29f,
     0x1.1186a8p-69f, 0x1.83029ep-21f, 0x1.59f798p-109f, 0x1.5f2d38p-95f, 0.0f,
     0x1.2dfaa4p-3f, 0x1.9fcd4ap-78f, 0.0f, 0.0f, 0x1.1d636ep-7f, 0x1.0a7eep-25f,
     0.0f, 0x1.3b3c32p-101f, 0x1.898594p-55f, 0.0f, 0x1.cfdb8ap-32f, 0.0f,
     0x1.b5b964p-45f, 0x1.7bea7ep-22f, 0.0f, 0.0f, 0x1.4442a8p-25f, 0.0f, 0.0f,
     0x1.f25092p-69f, 0x1.3ff25ap-19f, 0.0f, 0x1.8edf9p-54f, 0x1.0e78c2p-6f, 0.0f,
     0.0f, 0x1.4a94p-57f, 0.0f, 0x1.1b60eap-53f, 0x1.a7b0a2p-77f, 0x1.d1f0aap-98f,
     0.0f, 0x1.c229eap-44f, 0x1.8814b6p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c45282p-103f, 0.0f, 0.0f, 0.0f, 0x1.4b6b7cp-119f, 0x1.2a8616p-28f, 0.0f,
     0.0f, 0x1p0f, 0x1.6d580cp-67f, 0x1.234724p-13f, 0x1.701f32p-4f, 0.0f, 0.0f, 0.0f,
     0x1.8b9a28p-109f, 0x1.4301dp-98f, 0.0f, 0.0f, 0x1.cad24cp-92f, 0x1.363ebcp-85f,
     0x1.9a8866p-3f, 0x1.e4aac4p-93f, 0x1.83020ep-84f, 0.0f, 0.0f, 0x1.015e9ep-41f,
     0.0f, 0x1.c24642p-52f, 0x1.eb3c82p-45f, 0x1.8b4902p-90f, 0.0f, 0x1.e5f58ap-50f,
     0.0f, 0.0f, 0x1.0bbaaep-95f, 0.0f, 0x1.539b04p-66f, 0.0f, 0.0f, 0x1.ca875ep-39f,
     0.0f, 0x1.92c9d2p-41f, 0.0f, 0x1.ad2e2ap-107f, 0x1.d31588p-57f, 0.0f,
     0x1.cd693ap-65f, 0x1.9098cep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfca84p-107f, 0.0f,
     0.0f, 0x1.a3701ap-2f, 0x1.37e762p-31f, 0.0f, 0.0f, 0x1.e2a26ep-41f,
     0x1.7a287p-15f, 0.0f, 0.0f, 0.0f, 0x1.5e72fap-46f, 0.0f, 0.0f, 0.0f,
     0x1.f2a63p-48f, 0x1.eb9342p-107f, 0.0f, 0.0f, 0x1.c6d98ep-62f, 0x1.26eecp-21f,
     0.0f, 0.0f, 0x1.0e4d08p-14f, 0x1.5b766p-86f, 0x1.4b9e12p-21f, 0.0f,
     0x1.14f66cp-113f, 0.0f, 0x1.eb8f34p-104f, 0.0f, 0.0f, 0.0f, 0x1.1e358cp-59f,
     0.0f, 0x1.967ce6p-49f, 0x1.f0e8eap-88f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0x1.0bd4d2p-50f, 0.0f, 0.0f, 0.0f, 0x1.c37984p-27f, 0x1.7637dp-125f,
     0.0f, 0.0f, 0.0f, 0x1.284e44p-100f, 0x1.5a4138p-11f, 0x1.01c564p-19f, 0.0f,
     0x1.10819p-19f, 0x1.ec7a2cp-91f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.041944p-107f, 0.0f, 0x1.a5196p-76f, 0x1.46c5a8p-69f, 0.0f, 0.0f,
     0x1.99f01cp-125f, 0.0f, 0.0f, 0x1.8edd42p-86f, 0.0f, 0x1.f17e72p-77f,
     0x1.02de0ep-44f, 0.0f, 0x1.bbbf28p-124f, 0.0f, 0x1.1d32b6p-56f, 0.0f, 0.0f,
     0x1.fdfb28p-117f, 0.0f, 0x1.385acep-99f, 0x1.87741ep-118f, 0.0f,
     0x1.ccec58p-102f, 0x1.cbc78ap-75f, 0.0f, 0x1.d2bcb6p-53f, 0.0f, 0x1.c401fcp-60f,
     0x1.17800ep-98f, 0x1.a47ab6p-78f, 0x1.ccceaep-123f, 0x1.5f37bp-51f, 0.0f,
     0x1.0af98ap-15f, 0.0f, 0x1.eaae88p-105f, 0x1.d961ecp-13f, 0x1.c11d56p-29f,
     0x1.c1a948p-78f, 0.0f, 0.0f, 0.0f, 0x1.636a16p-10f, 0.0f, 0x1.4c47ap-36f,
     0x1.80fdacp-23f, 0x1p0f, 0x1.c8199ap-55f, 0.0f, 0x1.7df1aap-80f, 0.0f,
     0x1.565a3cp-52f, 0.0f, 0.0f, 0x1.fd1616p-70f, 0x1.84748ep-84f, 0.0f, 0.0f,
     0x1.77574p-7f, 0x1.c8666p-118f, 0x1.c7c53ep-68f, 0x1.633566p-96f, 0x1.9fe3aap-2f,
     0.0f, 0.0f, 0x1.0a63bep-39f, 0.0f, 0x1.7af996p-94f, 0.0f, 0.0f, 0x1.489262p-25f,
     0x1.032a98p-102f, 0x1.d94d2ap-13f, 0x1.b6f2a6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c7eeep-48f, 0.0f, 0.0f, 0.0f, 0x1.f7f4dp-12f, 0x1.8f998p-5f,
     0x1.662738p-93f, 0.0f, 0x1.44be2cp-75f, 0.0f, 0.0f, 0.0f, 0x1.13bb42p-43f,
     0x1.021bcap-39f, 0.0f, 0.0f, 0.0f, 0x1.411b18p-125f, 0x1.6a7e76p-109f, 0.0f,
     0.0f, 0x1.18a3d6p-2f, 0x1.ffc52ep-92f, 0x1.ec28bcp-116f, 0x1.61c09p-96f, 0.0f,
     0x1.eb826ap-123f, 0.0f, 0.0f, 0x1.fb266ap-41f, 0.0f, 0x1.9cc12ap-19f,
     0x1.83c462p-73f, 0.0f, 0x1.b4a972p-111f, 0x1.438facp-23f, 0x1.afd9dcp-61f,
     0x1.aa6ee8p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe50eep-40f, 0.0f, 0.0f,
     0.0f, 0x1.d01938p-24f, 0.0f, 0.0f, 0x1.712a7ep-120f, 0x1.3d29dcp-31f, 0.0f, 0.0f,
     0.0f, 0x1.d0c592p-30f, 0.0f, 0.0f, 0x1.3eae6cp-19f, 0x1.448ebcp-43f, 0.0f, 0.0f,
     0x1.0f4b56p-6f, 0.0f, 0x1.3acd3ap-77f, 0.0f, 0.0f, 0x1.c87b78p-86f,
     0x1.4c08a4p-53f, 0x1.fdeebcp-79f, 0.0f, 0x1.eb2526p-62f, 0x1.766ec8p-60f, 0.0f,
     0.0f, 0.0f, 0x1.459966p-80f, 0.0f, 0x1.3211dap-9f, 0.0f, 0x1.0fe02p-46f,
     0x1.d573c6p-28f, 0x1.1aa6aep-54f, 0.0f, 0x1.db0e98p-43f, 0.0f, 0.0f,
     0x1.93e21ep-68f, 0x1.f853fcp-14f, 0x1.b240cp-91f, 0x1.901f3ep-101f,
     0x1.a053c8p-8f, 0x1.2fcb8ep-80f, 0.0f, 0.0f, 0x1.eac5eep-37f, 0.0f, 0.0f, 0.0f,
     0x1.98ac36p-103f, 0.0f, 0.0f, 0x1.eac9aep-41f, 0.0f, 0x1.af0802p-19f, 0.0f, 0.0f,
     0x1.de93aep-123f, 0x1.6303b2p-61f, 0.0f, 0.0f, 0.0f, 0x1.669588p-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.767282p-45f, 0x1.d1d7c6p-52f, 0.0f, 0x1.31589p-103f, 0.0f,
     0x1.a0d9ccp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bdfe4p-70f, 0x1.65b768p-59f, 0.0f,
     0x1.70157cp-2f, 0.0f, 0.0f, 0x1.f8ceaap-65f, 0.0f, 0x1.556b32p-115f, 0.0f, 0.0f,
     0x1.78fddep-11f, 0.0f, 0x1.719f7ep-120f, 0x1.85c3fep-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e3572p-85f, 0x1.86df5p-57f, 0.0f, 0x1.8f6a94p-25f, 0x1.135478p-20f, 0.0f,
     0.0f, 0.0f, 0x1.c21182p-28f, 0.0f, 0x1.683ec4p-70f, 0.0f, 0x1.50e1fp-87f,
     0x1.b5e3f8p-8f, 0x1.bd3c36p-115f, 0x1.a3b0d2p-22f, 0.0f, 0x1.1b73d6p-46f,
     0x1.58c4f8p-120f, 0x1.8e681p-89f, 0.0f, 0x1.f11f94p-93f, 0.0f, 0.0f,
     0x1.82279ap-64f, 0.0f, 0x1.b40a46p-22f, 0x1.257968p-9f, 0x1.22edfp-16f,
     0x1.0c0e7p-26f, 0x1.1b6bdep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcf956p-63f,
     0x1.65eae2p-102f, 0.0f, 0.0f, 0.0f, 0x1.01c514p-103f, 0x1.663438p-55f, 0.0f,
     0x1.0b7966p-99f, 0.0f, 0x1.cab3cap-7f, 0.0f, 0x1.47f716p-32f, 0x1p0f,
     0x1.473856p-6f, 0x1.f25e2p-69f, 0.0f, 0x1.b29a92p-122f, 0.0f, 0x1.564532p-26f,
     0x1.e1944ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd6284p-64f, 0.0f, 0.0f,
     0x1.f51026p-51f, 0.0f, 0x1.88f53ap-6f, 0x1.26b90cp-91f, 0.0f, 0x1.5d1422p-73f,
     0.0f, 0x1.b2bebp-107f, 0.0f, 0x1.20e658p-110f, 0x1.de8bdcp-100f, 0x1.35282cp-49f,
     0x1.819f56p-123f, 0.0f, 0x1.883972p-123f, 0.0f, 0.0f, 0.0f, 0x1.e4e46ap-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b86f72p-125f, 0.0f, 0x1.edd53p-51f,
     0x1.95988ep-13f, 0.0f, 0x1.102c1p-56f, 0x1.c435ap-5f, 0x1.018d2p-63f,
     0x1.c54722p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.044b6p-37f, 0x1.e43fa4p-8f,
     0.0f, 0x1.ec5124p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83efa6p-18f,
     0x1.e6499ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ac57ep-6f, 0x1.04954cp-54f, 0.0f,
     0x1.d13e7ap-38f, 0.0f, 0x1.3dc8f2p-51f, 0x1.89827ap-109f, 0x1.93a3ep-10f, 0.0f,
     0x1.14a95p-15f, 0.0f, 0x1.4aa916p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0d8ep-25f,
     0.0f, 0x1.a1ee02p-55f, 0.0f, 0.0f, 0x1.a225cep-113f, 0x1.407952p-79f, 0.0f, 0.0f,
     0x1.33db54p-24f, 0x1.e98eeap-113f, 0x1.18c522p-89f, 0x1.bbc8cap-116f, 0.0f,
     0x1.74824cp-39f, 0x1.f9e3a8p-71f, 0x1.6024b2p-79f, 0.0f, 0x1.a2788ep-124f, 0.0f,
     0.0f, 0.0f, 0x1.5a9838p-64f, 0x1.a39458p-2f, 0x1.0faffp-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8eef6ep-111f, 0x1.fafa2ep-126f, 0.0f, 0.0f, 0x1.e2283ap-93f, 0.0f,
     0.0f, 0x1.36ee6cp-87f, 0.0f, 0x1.6b2bdap-86f, 0x1.508012p-60f, 0.0f,
     0x1.54dfeap-10f, 0x1.56593ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f6decp-71f, 0.0f, 0x1.9d8396p-39f, 0.0f, 0x1.68be2p-110f, 0x1.47136ap-61f,
     0x1.42efb6p-94f, 0.0f, 0x1.d7b6ap-85f, 0x1.53d34cp-51f, 0x1.3531fep-63f,
     0x1.cd9e32p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91ffa2p-104f, 0x1.d5cd42p-114f,
     0.0f, 0x1.53008cp-102f, 0x1.d617d4p-74f, 0x1.36299ap-15f, 0x1.1340ep-82f,
     0x1.d979d6p-62f, 0x1.21455cp-76f, 0x1.ee741ep-44f, 0.0f, 0x1.b6bffep-87f, 0.0f,
     0x1p0f, 0.0f, 0x1.80878p-89f, 0.0f, 0x1.2a2c9ap-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9cb62cp-20f, 0.0f, 0x1.318afap-77f, 0x1.d865cap-113f,
     0x1.5a0712p-63f, 0.0f, 0.0f, 0x1.a2e2cep-19f, 0x1.f8436cp-101f, 0x1.5989d4p-122f,
     0x1.8da936p-67f, 0x1.9dd61ep-75f, 0.0f, 0.0f, 0.0f, 0x1.8712acp-121f, 0.0f, 0.0f,
     0.0f, 0x1.38f224p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4dd28p-50f, 0x1.795e12p-30f,
     0x1.b14c6ap-87f, 0x1.c4136ap-16f, 0.0f, 0x1.7a9786p-68f, 0.0f, 0.0f,
     0x1.1bc1cap-104f, 0.0f, 0.0f, 0x1.356d5ep-58f, 0x1.900754p-118f, 0.0f,
     0x1.347e34p-19f, 0.0f, 0.0f, 0x1.6e4b3ep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3184ap-90f, 0x1.96ed12p-27f, 0x1.977d5p-83f, 0x1.e7d906p-60f,
     0x1.db7ac2p-51f, 0.0f, 0.0f, 0.0f, 0x1.7b53ep-124f, 0x1.ac7c48p-46f, 0.0f,
     0x1.f68cdap-39f, 0.0f, 0.0f, 0x1.9f3a34p-17f, 0.0f, 0x1.f17cd4p-117f, 0.0f, 0.0f,
     0x1.7cd016p-126f, 0x1.c7ec86p-77f, 0x1.a810fep-109f, 0.0f, 0x1.66568cp-40f, 0.0f,
     0x1.3e3b92p-37f, 0.0f, 0.0f, 0x1.1f98fap-38f, 0x1.8355bap-19f, 0x1.959af8p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db6714p-126f, 0x1.14a154p-11f,
     0x1.0cb382p-28f, 0.0f, 0.0f, 0.0f, 0x1.e33abcp-119f, 0x1.d1c17p-91f, 0.0f,
     0x1.8de87p-53f, 0x1p0f, 0x1.192c74p-62f, 0x1.472416p-13f, 0x1.164e56p-64f,
     0x1.a02e22p-68f, 0.0f, 0.0f, 0x1.f8e18ap-92f, 0.0f, 0x1.7b4dc6p-53f,
     0x1.634844p-13f, 0x1.3c91cep-33f, 0.0f, 0x1.e8dedcp-4f, 0.0f, 0.0f,
     0x1.2355bep-94f, 0.0f, 0x1.9a578ap-120f, 0.0f, 0x1.2aae38p-57f, 0.0f,
     0x1.539a48p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0815p-99f, 0.0f, 0.0f,
     0x1.d8d3f6p-23f, 0.0f, 0x1.61bb8cp-38f, 0x1.a932cp-17f, 0x1.15c73cp-107f,
     0x1.966d5p-103f, 0x1.938f9ap-86f, 0x1.96d59cp-56f, 0x1.4aa93cp-16f,
     0x1.f0eee2p-25f, 0x1.695acap-114f, 0x1.13d17ap-36f, 0x1.4bf5d8p-90f, 0.0f,
     0x1.93514p-32f, 0.0f, 0x1.e0b51cp-25f, 0.0f, 0.0f, 0x1.05a526p-76f,
     0x1.eea72ep-92f, 0.0f, 0x1.7f2678p-99f, 0.0f, 0.0f, 0x1.6c2758p-38f,
     0x1.153ca8p-26f, 0x1.79512p-99f, 0.0f, 0.0f, 0x1.844972p-51f, 0x1.de116ep-74f,
     0.0f, 0.0f, 0x1.730736p-89f, 0x1.d0cbfp-87f, 0x1.2d4b4ap-16f, 0.0f,
     0x1.4aaf22p-125f, 0.0f, 0x1.0e441p-106f, 0x1.ba93f4p-49f, 0x1.a7947p-104f, 0.0f,
     0x1.c94f7p-87f, 0x1.c6fb24p-122f, 0x1.f0315ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.43c4c6p-122f, 0.0f, 0x1.25799p-5f, 0.0f, 0x1.83d702p-49f, 0x1.f2530cp-56f,
     0x1.b2d738p-122f, 0x1.fb3552p-92f, 0x1.7bbeap-111f, 0.0f, 0x1.180a2cp-40f,
     0x1.1d7168p-8f, 0x1.3ab80ap-28f, 0.0f, 0x1.3650dep-46f, 0x1.3e827ap-52f,
     0x1.5e3234p-39f, 0.0f, 0x1.ea58fep-117f, 0.0f, 0x1.c2277p-91f, 0x1.c44318p-92f,
     0x1.364758p-36f, 0x1.21cadp-63f, 0.0f, 0.0f, 0.0f, 0x1.f0329cp-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6a304p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ecbd7ap-111f, 0x1.529596p-108f, 0x1.b83694p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d17c8cp-107f, 0x1.b0687ap-75f, 0x1.29988ap-60f, 0.0f,
     0.0f, 0x1.d1cbc8p-66f, 0.0f, 0.0f, 0x1.e3856ap-120f, 0.0f, 0x1.232e48p-37f,
     0x1.4d003ep-4f, 0x1.d5db06p-65f, 0.0f, 0.0f, 0x1.3ae85p-48f, 0x1.d53394p-33f,
     0x1.f43cbep-67f, 0x1.a14936p-58f, 0.0f, 0.0f, 0x1.212474p-50f, 0x1.0d5b48p-84f,
     0x1.0de7a4p-8f, 0.0f, 0.0f, 0x1.1afb6ep-113f, 0x1.51259ap-64f, 0.0f, 0.0f,
     0x1.eaaf76p-27f, 0.0f, 0x1.47f552p-63f, 0.0f, 0x1.a37d36p-118f, 0x1.b3518cp-82f,
     0.0f, 0x1.94adfap-38f, 0x1.2d38a8p-78f, 0x1.251052p-59f, 0x1.284a94p-7f,
     0x1.fe7024p-96f, 0x1.49e4b8p-68f, 0.0f, 0.0f, 0x1.35e2d8p-120f, 0x1.77c526p-46f,
     0x1.25f84p-39f, 0.0f, 0x1.2e8f9ep-36f, 0x1.515ad6p-119f, 0x1.ac4494p-72f, 0.0f,
     0.0f, 0x1.949a8cp-74f, 0.0f, 0x1.0e9088p-34f, 0x1.3f9654p-54f, 0.0f, 0.0f, 0.0f,
     0x1.54b948p-98f, 0.0f, 0x1.e8a49cp-72f, 0x1.fe1a68p-113f, 0.0f, 0x1.ef45dap-28f,
     0.0f, 0x1.95bdb6p-99f, 0.0f, 0.0f, 0x1.8e3218p-79f, 0.0f, 0x1.4b74bep-4f,
     0x1.c0e51ap-66f, 0x1.a5e04cp-124f, 0x1.4644eep-54f, 0.0f, 0x1.0417eap-121f, 0.0f,
     0.0f, 0.0f, 0x1.d8e2c2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.533b76p-64f, 0.0f,
     0x1.da51fap-86f, 0.0f, 0x1.b879e6p-22f, 0.0f, 0.0f, 0x1.8dcbc8p-80f, 0.0f,
     0x1.bd23b2p-67f, 0x1.0a1ep-104f, 0x1.f84fa6p-67f, 0.0f, 0x1.c9125ap-20f, 0.0f,
     0.0f, 0x1.7d36cep-118f, 0x1.c8eb32p-22f, 0.0f, 0.0f, 0.0f, 0x1.693014p-105f,
     0x1.16544cp-123f, 0x1.21a28ap-122f, 0.0f, 0x1.08e9b8p-29f, 0x1.25773ap-7f,
     0x1.667a7cp-119f, 0x1.3c6f0ep-66f, 0x1.9f043p-36f, 0x1.9e36c6p-118f, 0.0f, 0.0f,
     0x1.fa10c8p-93f, 0.0f, 0.0f, 0x1.806c62p-70f, 0x1.25a2e2p-74f, 0x1.3704a4p-98f,
     0.0f, 0x1.db0784p-96f, 0.0f, 0.0f, 0x1.2f592cp-66f, 0.0f, 0x1.b8ae84p-75f, 0.0f,
     0x1.6944cep-38f, 0x1.9fab5ap-70f, 0.0f, 0.0f, 0.0f, 0x1.d42db4p-5f, 0.0f, 0.0f,
     0.0f, 0x1.90d57cp-78f, 0x1.42f012p-32f, 0x1.a4a68p-57f, 0x1.9aa6d8p-62f, 0.0f,
     0.0f, 0x1.d5b90ep-74f, 0.0f, 0.0f, 0.0f, 0x1.b2090ap-81f, 0.0f, 0.0f,
     0x1.701cccp-26f, 0.0f, 0x1.dce4dp-52f, 0.0f, 0x1.e32102p-123f, 0x1.88916p-12f,
     0.0f, 0.0f, 0x1.17c21cp-36f, 0x1.fbda4ap-63f, 0x1.c87facp-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eea6b4p-91f, 0.0f, 0x1.d11fa8p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cdebdp-115f, 0x1.21f92ep-2f, 0x1.e11544p-51f, 0x1.d582fap-9f,
     0x1.44de4p-20f, 0x1.e2003ap-31f, 0x1.78033ep-8f, 0x1.1abacap-20f, 0.0f,
     0x1.0e7d44p-102f, 0x1.eda05p-89f, 0.0f, 0.0f, 0x1.4fc4a8p-92f, 0.0f, 0.0f,
     0x1.9226b2p-88f, 0.0f, 0.0f, 0.0f, 0x1.cdb3aap-28f, 0.0f, 0.0f, 0x1.496764p-24f,
     0x1.f40332p-2f, 0x1.3d0312p-41f, 0.0f, 0.0f, 0.0f, 0x1.534f9p-89f, 0.0f, 0.0f,
     0x1.a4a7c8p-100f, 0x1.43fc94p-71f, 0x1.1e9aa2p-103f, 0.0f, 0x1.95b0c2p-61f, 0.0f,
     0.0f, 0x1.07592ep-64f, 0x1.76d60ep-29f, 0.0f, 0.0f, 0x1.253a6p-114f,
     0x1.2dee2cp-97f, 0x1.f8009ap-114f, 0x1.de5f4ap-113f, 0x1.a6aadp-14f,
     0x1.734fc4p-6f, 0.0f, 0.0f, 0x1.484c32p-4f, 0x1.d6c2a2p-94f, 0x1.9a42aap-62f,
     0x1.96cf4ap-64f, 0x1.1d5f5cp-95f, 0.0f, 0x1.cb272p-61f, 0.0f, 0.0f,
     0x1.c4b262p-105f, 0x1.ffc97ap-49f, 0.0f, 0.0f, 0x1.620ce2p-68f, 0x1.73577ep-43f,
     0.0f, 0.0f, 0.0f, 0x1.6bcaacp-87f, 0x1.a34ba8p-33f, 0.0f, 0x1.95d08ap-107f,
     0x1.bb839cp-37f, 0.0f, 0.0f, 0.0f, 0x1.90b60cp-19f, 0x1.0de10ep-105f, 0.0f,
     0x1.ad3fecp-37f, 0.0f, 0x1.4aca52p-20f, 0.0f, 0.0f, 0.0f, 0x1.1debfep-23f, 0.0f,
     0.0f, 0x1.ab382ep-19f, 0.0f, 0x1.c57d14p-101f, 0.0f, 0x1.cfbf3cp-35f,
     0x1.2743cp-7f, 0x1.d0e896p-115f, 0x1.161f2ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7aabap-103f, 0x1.6e44ep-98f, 0.0f, 0x1.f516dap-5f, 0x1.816af6p-46f, 0.0f,
     0x1.045d0ap-7f, 0.0f, 0x1.38178cp-102f, 0.0f, 0.0f, 0x1.c5ff36p-114f, 0.0f, 0.0f,
     0.0f, 0x1.90e76ap-73f, 0.0f, 0x1.cffa62p-120f, 0.0f, 0.0f, 0.0f,
     0x1.e9d436p-122f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_fmaxf4_kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_fmaxf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fmaxf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
