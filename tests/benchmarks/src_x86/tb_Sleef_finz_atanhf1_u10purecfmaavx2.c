/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhf1_u10purecfma.c --function \
 *     Sleef_finz_atanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.9fe4b2p-2f, 0.0f, 0x1.08e802p-74f, 0x1.733fp-89f, 0x1.d108eap-121f, 0.0f,
     0x1.992acap-92f, 0x1.eb3504p-117f, 0x1.0723b8p-114f, 0x1.fa0b8p-83f,
     0x1.b56f8ap-82f, 0x1.4ba618p-9f, 0.0f, 0x1.5c339ep-75f, 0.0f, 0x1.8b5388p-16f,
     0.0f, 0x1.a15292p-35f, 0.0f, 0.0f, 0.0f, 0x1.7340ap-39f, 0.0f, 0x1.523f14p-75f,
     0x1.911feap-1f, 0.0f, 0.0f, 0x1.ddc3c6p-64f, 0x1.c5c43cp-109f, 0x1.e184d2p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c77ep-3f, 0.0f, 0.0f, 0.0f, 0x1.8c1cc4p-2f,
     0.0f, 0x1.4bb59ap-10f, 0x1.d74984p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.62cd7p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b552d6p-120f, 0.0f, 0x1.5dad4p-12f,
     0x1.0e8e92p-95f, 0x1.53fa16p-120f, 0x1.3c5c22p-70f, 0.0f, 0.0f, 0.0f,
     0x1.d82ffap-119f, 0.0f, 0x1.92d9ap-28f, 0.0f, 0x1.82d166p-114f, 0x1.b839acp-34f,
     0x1.1630ep-66f, 0x1.176d06p-90f, 0.0f, 0.0f, 0x1.d177eep-73f, 0.0f, 0.0f,
     0x1.c2076cp-81f, 0x1.921a28p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6feb6p-14f,
     0x1.3c5572p-81f, 0.0f, 0x1.c21be6p-113f, 0x1.e7cbdp-54f, 0x1.ddd3bcp-11f, 0.0f,
     0x1.15d292p-67f, 0.0f, 0.0f, 0x1.76a7d8p-97f, 0.0f, 0x1.57d5fap-113f, 0.0f, 0.0f,
     0x1.379a94p-5f, 0.0f, 0.0f, 0.0f, 0x1.1e21f8p-88f, 0x1.b896d8p-14f,
     0x1.37a9c6p-38f, 0x1.d4528cp-31f, 0.0f, 0.0f, 0x1.14aefp-23f, 0.0f,
     0x1.e8a254p-23f, 0x1.45ccecp-79f, 0x1.843b7ep-97f, 0x1.b9d27p-58f,
     0x1.4c6ee8p-33f, 0.0f, 0x1.8255b2p-69f, 0x1.270204p-113f, 0x1.059f9cp-116f, 0.0f,
     0x1.4b8ecap-115f, 0.0f, 0x1.ae96bap-68f, 0x1.29414ep-18f, 0.0f, 0.0f, 0.0f,
     0x1.eeda8ep-68f, 0x1.d0565p-99f, 0.0f, 0x1.9c4a08p-84f, 0x1.d190c8p-90f,
     0x1.3e5956p-17f, 0.0f, 0x1.81d0d6p-54f, 0.0f, 0x1.dfdc7ep-96f, 0.0f, 0.0f,
     0x1.694684p-87f, 0.0f, 0x1.ce4dfep-81f, 0x1.aee886p-34f, 0.0f, 0.0f,
     0x1.2dafcap-24f, 0.0f, 0x1.42a7fep-75f, 0.0f, 0.0f, 0.0f, 0x1.7f498p-39f,
     0x1.52d508p-117f, 0x1.7cbfb8p-57f, 0.0f, 0x1.236f92p-83f, 0.0f, 0.0f, 0.0f,
     0x1.a69954p-33f, 0.0f, 0x1.fccd08p-32f, 0x1.0aa55cp-121f, 0x1.51bf18p-113f, 0.0f,
     0x1.796c32p-71f, 0.0f, 0x1.83789cp-14f, 0.0f, 0.0f, 0x1.73d4fep-118f,
     0x1.e755e4p-107f, 0.0f, 0x1.f09328p-63f, 0x1p0f, 0.0f, 0x1.22a604p-73f,
     0x1.8e61fcp-13f, 0x1.4d7916p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.298388p-47f, 0.0f,
     0.0f, 0.0f, 0x1.5a9a14p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50c3cp-84f,
     0x1.f980b2p-85f, 0x1.322302p-58f, 0.0f, 0.0f, 0x1.240aap-84f, 0.0f, 0.0f,
     0x1.756ba8p-57f, 0.0f, 0.0f, 0.0f, 0x1.9ce19ep-30f, 0.0f, 0x1.d1fd16p-126f, 0.0f,
     0.0f, 0x1.ab85cp-117f, 0x1.3bdb52p-19f, 0x1.c7dfb2p-95f, 0x1.e8c656p-104f,
     0x1.05851ep-92f, 0x1.1f8966p-108f, 0.0f, 0x1.656be4p-51f, 0.0f, 0x1.77ed4p-94f,
     0.0f, 0x1.7386aap-10f, 0x1.42ae22p-53f, 0.0f, 0x1.23740ap-13f, 0x1.b4b354p-13f,
     0x1.0a685cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43bd1p-18f, 0.0f,
     0x1.f97a4cp-32f, 0x1.d2ea12p-43f, 0x1.e0a866p-126f, 0.0f, 0x1.8fd93ep-50f, 0.0f,
     0x1.1bbf34p-121f, 0.0f, 0x1.3f57bp-59f, 0x1.da759ep-4f, 0x1.ce551ap-13f,
     0x1.2dd866p-62f, 0x1.de04d8p-119f, 0.0f, 0x1.0d3614p-39f, 0.0f, 0.0f, 0.0f,
     0x1.aa3e2p-4f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.d51ebcp-7f, 0x1.0c3794p-2f,
     0x1.1c8fe6p-16f, 0x1.9a9144p-18f, 0.0f, 0x1.faf41cp-59f, 0x1.75e6bp-81f,
     0x1.d8f2bep-117f, 0x1.23103ep-68f, 0x1.e809cep-60f, 0.0f, 0x1.6c11f2p-126f, 0.0f,
     0.0f, 0x1.efce2ep-26f, 0x1.77f29p-38f, 0.0f, 0.0f, 0x1.436608p-3f, 0.0f,
     0x1.19f33ep-31f, 0x1.8f3be6p-102f, 0x1.b7f1a2p-87f, 0x1.1088fap-94f,
     0x1.090144p-1f, 0x1.262c1ep-87f, 0.0f, 0x1.a7b8cp-24f, 0x1.b5af1ap-21f,
     0x1.d71cfp-95f, 0.0f, 0x1.b5a366p-36f, 0x1.d06876p-101f, 0.0f, 0.0f, 0.0f,
     0x1.167506p-89f, 0.0f, 0.0f, 0x1.9ad262p-104f, 0.0f, 0.0f, 0x1.520feep-21f, 0.0f,
     0.0f, 0x1.f03a0ap-3f, 0x1.e402dp-4f, 0x1.db0416p-51f, 0.0f, 0.0f, 0.0f,
     0x1.ca7ac4p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d69db4p-94f, 0.0f, 0x1.053c2cp-52f,
     0.0f, 0x1.fa08cep-10f, 0.0f, 0.0f, 0.0f, 0x1.cbff2cp-115f, 0x1.552b9ep-59f, 0.0f,
     0.0f, 0.0f, 0x1.7e718ap-117f, 0x1.9f8e6cp-40f, 0x1.b3c1bcp-80f, 0x1.8d17e6p-63f,
     0.0f, 0x1.199f34p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6126cep-61f, 0x1.059c22p-124f,
     0.0f, 0x1.7d3842p-24f, 0.0f, 0.0f, 0x1.181638p-105f, 0.0f, 0x1.86712p-17f, 0.0f,
     0x1.7313a2p-66f, 0x1.44576ap-91f, 0.0f, 0.0f, 0.0f, 0x1.88c694p-11f,
     0x1.a94586p-68f, 0x1.be4d8p-66f, 0.0f, 0.0f, 0x1.b221c4p-62f, 0x1.1b92c6p-121f,
     0x1.73d68ep-5f, 0x1.28779ep-51f, 0x1.8a8c4ep-50f, 0.0f, 0x1.fe5fd8p-119f, 0.0f,
     0x1.e045b6p-117f, 0x1.368bap-22f, 0x1.ce3aap-63f, 0x1.e80ad8p-79f, 0.0f, 0.0f,
     0.0f, 0x1.9374bcp-6f, 0x1.b033f4p-21f, 0x1.d113f8p-114f, 0x1p0f, 0.0f,
     0x1.6d33fcp-21f, 0.0f, 0x1.186a86p-115f, 0.0f, 0x1.72bdep-49f, 0.0f,
     0x1.ce3f56p-85f, 0.0f, 0x1.e6b4ecp-113f, 0.0f, 0x1.7ea002p-100f, 0.0f, 0.0f,
     0x1.7f128cp-35f, 0.0f, 0x1.e41388p-120f, 0.0f, 0.0f, 0.0f, 0x1.2e3236p-90f, 0.0f,
     0.0f, 0x1.881424p-49f, 0.0f, 0x1.68d60ep-84f, 0.0f, 0.0f, 0x1.c5b216p-71f, 0.0f,
     0x1.81eaacp-73f, 0.0f, 0x1.9683b8p-76f, 0.0f, 0x1.0841ccp-108f, 0.0f,
     0x1.23072ep-115f, 0x1.0eadaep-78f, 0.0f, 0x1.e02da8p-92f, 0x1.77a3d6p-62f,
     0x1.f7ae1ep-23f, 0x1.c8ae1ep-108f, 0.0f, 0x1.2035e6p-96f, 0.0f, 0x1.599e72p-79f,
     0x1.367d3p-84f, 0x1.00f964p-111f, 0x1.1ab162p-37f, 0x1.a5bd8p-37f,
     0x1.2600b2p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89e2e2p-63f, 0.0f,
     0x1.39ed42p-5f, 0x1.3862acp-71f, 0.0f, 0.0f, 0x1.47a29cp-71f, 0.0f, 0.0f,
     0x1.f2dbbp-34f, 0.0f, 0.0f, 0x1.e0759p-10f, 0.0f, 0x1.aa605ap-82f, 0.0f, 0.0f,
     0x1.d41574p-52f, 0x1.adbda2p-84f, 0.0f, 0.0f, 0x1.466dcap-118f, 0x1.6982f2p-49f,
     0x1.0c08ap-82f, 0.0f, 0.0f, 0.0f, 0x1.b5f71cp-68f, 0x1.1e384cp-123f,
     0x1.b62a94p-119f, 0x1.3d0a92p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8151eep-67f, 0.0f,
     0x1.3bb622p-32f, 0x1.38a01cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4de118p-116f,
     0x1.2e63a6p-102f, 0x1.a8feeap-93f, 0.0f, 0x1.79a186p-15f, 0.0f, 0x1.c94d18p-125f,
     0x1.07bccp-16f, 0x1.85028p-98f, 0x1.641ep-67f, 0x1.478338p-80f, 0x1.1f34cap-58f,
     0.0f, 0.0f, 0x1.c89676p-81f, 0x1.d834f8p-95f, 0x1.af5526p-102f, 0.0f,
     0x1.70e3ap-4f, 0.0f, 0.0f, 0x1.4a90f2p-49f, 0x1.18a75cp-93f, 0.0f, 0.0f, 0.0f,
     0x1.83a982p-44f, 0.0f, 0x1.2f9a16p-97f, 0x1.187ae2p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.47bf9ep-47f, 0.0f, 0x1.b1b9e4p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d998d8p-40f, 0x1.074996p-33f, 0x1.259e82p-90f, 0x1.0a0622p-15f,
     0x1.735244p-47f, 0x1.9a5ebep-63f, 0.0f, 0x1.c60502p-95f, 0.0f, 0x1.11570cp-122f,
     0x1.ffff6ep-85f, 0x1.6ca364p-97f, 0.0f, 0x1.50bfa2p-110f, 0.0f, 0x1.5d537cp-20f,
     0.0f, 0x1.dc363p-121f, 0x1.5cb17p-16f, 0.0f, 0.0f, 0x1.3aaa28p-40f, 0.0f, 0.0f,
     0x1.d3d4f2p-108f, 0x1.d6266p-26f, 0.0f, 0x1.314f16p-42f, 0.0f, 0.0f,
     0x1.9e5eb2p-81f, 0.0f, 0x1.e5c054p-13f, 0x1.878f56p-36f, 0x1.1db774p-70f,
     0x1.cbe4dp-77f, 0.0f, 0.0f, 0x1.10f8b8p-109f, 0.0f, 0x1.e273fcp-36f, 0.0f,
     0x1.2edaap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b8b08p-52f, 0.0f, 0x1.b79224p-123f,
     0.0f, 0x1.07c3ccp-58f, 0.0f, 0x1.0cb67ap-113f, 0x1.237618p-37f, 0.0f, 0.0f,
     0x1.17c63cp-111f, 0x1.26531p-115f, 0x1.4ef738p-85f, 0.0f, 0x1.5a12d4p-9f, 0.0f,
     0x1.c53e3ep-57f, 0x1.2a7a3ap-91f, 0x1.e44a2ap-87f, 0x1.597b9ep-70f,
     0x1.064922p-80f, 0x1.5fdc1cp-60f, 0x1.978596p-49f, 0x1.75c8eep-69f,
     0x1.7a6f1cp-107f, 0x1.4e72bap-86f, 0.0f, 0x1.b4362cp-18f, 0x1.8c0ceap-121f, 0.0f,
     0.0f, 0x1.0c5d6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1584cp-121f,
     0x1.51c9a8p-74f, 0x1.c707acp-9f, 0.0f, 0x1.18872p-99f, 0x1.6e6fep-119f,
     0x1.947cf8p-84f, 0.0f, 0.0f, 0x1.22085ap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f874p-84f, 0x1.4d0e9ap-118f, 0x1.83ce08p-70f, 0.0f, 0.0f, 0x1.0eacbp-26f,
     0x1.24571ep-86f, 0x1.1d275ep-17f, 0x1p0f, 0x1.fde534p-63f, 0x1.7c36c4p-81f,
     0x1.b0187ap-20f, 0x1.89d0dap-64f, 0x1.067f26p-47f, 0.0f, 0x1.ad9286p-50f, 0.0f,
     0.0f, 0x1.41d0c2p-86f, 0x1.8c1836p-21f, 0.0f, 0.0f, 0x1.6a3186p-90f, 0.0f,
     0x1.7388cep-122f, 0x1.4f0308p-53f, 0.0f, 0.0f, 0.0f, 0x1.a46d2cp-80f,
     0x1.bc87e8p-115f, 0.0f, 0x1.a1e16ap-13f, 0x1.8818a2p-65f, 0.0f, 0.0f,
     0x1.af39bep-109f, 0x1.b47b46p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.072e5p-92f,
     0x1.5af752p-37f, 0x1.d87adcp-38f, 0.0f, 0.0f, 0x1.2a4d44p-4f, 0x1.86052cp-44f,
     0.0f, 0x1.c66a5cp-2f, 0x1.353d1ap-114f, 0.0f, 0x1.111a66p-91f, 0.0f, 0.0f,
     0x1.d5c534p-82f, 0x1.60a31ep-110f, 0x1.132e6p-15f, 0x1.715cf2p-32f,
     0x1.773d16p-77f, 0.0f, 0x1.547112p-90f, 0.0f, 0.0f, 0x1.d90adcp-11f,
     0x1.c8bfbcp-73f, 0x1.115312p-1f, 0.0f, 0.0f, 0x1.beff06p-103f, 0x1.72cc54p-99f,
     0.0f, 0.0f, 0x1.62864cp-42f, 0.0f, 0.0f, 0x1.5c5266p-122f, 0x1.602044p-90f,
     0x1.bca3cp-32f, 0.0f, 0.0f, 0x1.70e81ap-27f, 0.0f, 0x1.4a76bap-117f,
     0x1.d23912p-108f, 0x1.fcda76p-122f, 0x1.b961aap-5f, 0x1.2211d2p-30f, 0.0f,
     0x1.bb5e84p-102f, 0x1.79c908p-57f, 0x1.e6a1a2p-36f, 0.0f, 0.0f, 0x1.bf3d18p-12f,
     0x1.06dd68p-34f, 0.0f, 0x1.54cb3cp-30f, 0.0f, 0x1.dddaf6p-2f, 0.0f,
     0x1.da4534p-119f, 0x1.9aeb3ap-30f, 0x1.2002d4p-64f, 0.0f, 0.0f, 0x1.26177ep-25f,
     0.0f, 0x1.c93b14p-101f, 0x1.1ba76ep-12f, 0x1.b447bep-38f, 0x1.2cc3aap-123f, 0.0f,
     0.0f, 0x1.0991a4p-110f, 0x1.a0cf12p-41f, 0x1.d52bb2p-27f, 0x1.120e9p-10f,
     0x1.714946p-78f, 0x1.637fb6p-74f, 0.0f, 0.0f, 0x1.7701cap-3f, 0.0f, 0.0f,
     0x1.d33b9ep-94f, 0x1.eee886p-39f, 0.0f, 0x1.7b7e22p-98f, 0x1.fcdcd6p-79f,
     0x1.9bad42p-29f, 0x1.35c324p-11f, 0.0f, 0x1.4c6f5ap-35f, 0x1.172baep-100f, 0.0f,
     0.0f, 0.0f, 0x1.3cfdcap-96f, 0.0f, 0x1.6eeb2ep-43f, 0x1.44d042p-75f, 0.0f,
     0x1.5e5c18p-85f, 0.0f, 0x1.f4ec8ap-13f, 0x1.73283ap-76f, 0.0f, 0.0f,
     0x1.e783cp-125f, 0.0f, 0x1.83375ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f916ccp-4f,
     0x1.cbfd7ap-12f, 0.0f, 0x1.e8bac8p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21fee2p-6f,
     0x1.a29468p-93f, 0x1.ca0a0ap-85f, 0x1.3c7ebep-14f, 0x1.7493c6p-61f, 0.0f, 0.0f,
     0.0f, 0x1.83307p-5f, 0x1.cead76p-120f, 0x1.02ee5ep-40f, 0x1.f653p-42f,
     0x1.b6d1ecp-48f, 0x1.12336cp-38f, 0.0f, 0.0f, 0x1.1f8e22p-85f, 0.0f, 0.0f, 0.0f,
     0x1.856efap-80f, 0.0f, 0x1.2b915ap-113f, 0.0f, 0x1.7d4362p-15f, 0x1.8aef5p-73f,
     0.0f, 0x1.a309a4p-3f, 0x1.1ad628p-22f, 0x1.1be31cp-37f, 0x1.51f8aap-65f, 0.0f,
     0x1.bc7e3p-6f, 0x1.cb8f72p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04d202p-90f,
     0x1.a76172p-121f, 0x1.39d808p-35f, 0x1.fa4fc4p-85f, 0.0f, 0x1.bfbe64p-14f, 0.0f,
     0.0f, 0.0f, 0x1.73684p-89f, 0x1.f93648p-58f, 0x1.d0ee44p-3f, 0x1.03253ap-118f,
     0.0f, 0.0f, 0.0f, 0x1.662e2p-17f, 0.0f, 0x1.0b1118p-46f, 0x1.7d66f6p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c93876p-74f, 0x1.af8a9ap-65f, 0.0f, 0.0f, 0x1.a541p-116f,
     0.0f, 0x1.36d4aap-23f, 0x1.3f6d2ep-71f, 0.0f, 0.0f, 0x1.480016p-75f, 0.0f,
     0x1.75552p-90f, 0.0f, 0x1.22e73p-111f, 0x1.0afc78p-83f, 0.0f, 0x1.1fa08p-102f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa06c4p-86f, 0x1.ea66d6p-80f,
     0x1.883a7ap-59f, 0.0f, 0x1.4634d8p-81f, 0.0f, 0x1.31585ap-91f, 0x1.a9b0c6p-16f,
     0.0f, 0.0f, 0x1.0600f2p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d51a88p-3f, 0.0f, 0x1.88e9e4p-29f, 0x1.2fa1fp-112f, 0.0f, 0x1.de5af2p-96f,
     0.0f, 0.0f, 0x1.6e2b4p-37f, 0.0f, 0.0f, 0x1.9301b2p-20f, 0.0f, 0.0f,
     0x1.5554eep-81f, 0x1.3885e2p-63f, 0x1.3f84bap-3f, 0.0f, 0x1.cd2b52p-81f, 0.0f,
     0.0f, 0x1.a99446p-21f, 0.0f, 0x1.4d389ap-98f, 0.0f, 0.0f, 0.0f, 0x1.6ce6dcp-111f,
     0.0f, 0.0f, 0.0f, 0x1.48251ap-72f, 0.0f, 0.0f, 0x1.19c47cp-30f, 0.0f,
     0x1.1dcc2cp-99f, 0.0f, 0x1.a9ca96p-94f, 0.0f, 0x1.bff904p-54f, 0x1.063472p-60f,
     0x1.6c6622p-41f, 0x1.772ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8e79ap-66f, 0.0f,
     0.0f, 0x1.321756p-116f, 0.0f, 0x1.b2137ep-71f, 0x1.f215bap-62f, 0.0f, 0.0f, 0.0f,
     0x1.fbe9cp-29f, 0x1.ff1dacp-90f, 0x1.84c27p-66f, 0x1.10969ep-124f, 0.0f,
     0x1.727908p-26f, 0x1.0d55e8p-125f, 0.0f, 0x1.9f81dap-88f, 0.0f, 0x1.6538aep-99f,
     0x1.24d41ap-113f, 0x1.a2af26p-73f, 0.0f, 0x1.a79bd8p-113f, 0x1.e653a8p-100f,
     0.0f, 0x1.07b55p-21f, 0.0f, 0x1.2d01eap-22f, 0x1.2973fep-93f, 0.0f,
     0x1.dc8a6cp-60f, 0x1.020b0ap-56f, 0.0f, 0x1.89748p-124f, 0x1.b051bap-56f,
     0x1.eb1bbep-57f, 0x1.02feeap-1f, 0x1.6b55dp-9f, 0x1.2c5e6ep-80f,
     0x1.65e64cp-125f, 0.0f, 0x1.e2d69ep-95f, 0x1.b9d09ep-24f, 0x1.4f3866p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.21aabcp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.83da1p-47f, 0.0f, 0x1.566f5ep-75f, 0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_atanhf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_atanhf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
