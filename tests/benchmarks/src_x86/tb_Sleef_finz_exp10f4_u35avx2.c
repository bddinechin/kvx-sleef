/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f4_u35avx2128.c --function \
 *     Sleef_finz_exp10f4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.b22fd6p-49f, 0.0f, 0x1.89865cp-111f, 0x1.03e778p-98f,
     0x1.7df06ep-57f, 0x1.fc3cfp-8f, 0.0f, 0.0f, 0x1.306528p-89f, 0x1.72312ap-79f,
     0x1.a12efp-43f, 0.0f, 0x1.9a024ap-19f, 0x1.0e0134p-55f, 0x1.b020a8p-23f,
     0x1.7f13d6p-27f, 0x1.05584cp-125f, 0x1.ba2f14p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7838cp-123f, 0x1.e66d92p-65f, 0x1.952f32p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25cffcp-111f, 0.0f, 0.0f, 0x1.cb2ea2p-125f, 0x1.c9395cp-28f, 0x1.9b8162p-2f,
     0.0f, 0.0f, 0x1.dd0bcap-39f, 0.0f, 0x1.77735p-28f, 0x1.eefddep-115f, 0.0f,
     0x1.eda68cp-115f, 0.0f, 0x1.16e486p-85f, 0.0f, 0x1.b5c408p-52f, 0x1.c035d6p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cf126p-7f, 0x1.c4a2dap-89f, 0.0f, 0.0f,
     0x1.40a33p-20f, 0.0f, 0.0f, 0x1.fd70eep-79f, 0x1.95640ep-103f, 0x1.3a6806p-18f,
     0x1.ac6c4ap-72f, 0x1.3b954ep-36f, 0.0f, 0.0f, 0x1.634ce2p-82f, 0.0f, 0.0f,
     0x1.2a1bp-9f, 0x1.9df298p-85f, 0.0f, 0.0f, 0.0f, 0x1.7e7146p-119f, 0.0f,
     0x1.bfbbf6p-19f, 0.0f, 0.0f, 0x1.cfc834p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb7e2ep-112f, 0x1.fe48ap-96f, 0.0f, 0.0f, 0x1.b6f2bcp-123f, 0.0f,
     0x1.c776c8p-84f, 0.0f, 0x1.7b6004p-118f, 0x1.57836ep-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5747bcp-6f, 0x1.cc168p-16f, 0.0f, 0x1.9187fap-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6aa33ep-96f, 0x1.c7ebe2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4419ap-66f,
     0x1.09e6b4p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e4326p-91f, 0.0f, 0x1.d1739ep-37f,
     0x1.8c0702p-108f, 0x1.5db216p-110f, 0x1.af6beap-117f, 0x1.bdada2p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cd790cp-49f, 0x1.9c38c4p-9f, 0.0f, 0x1.ecab7ep-28f,
     0x1.49e1f4p-53f, 0.0f, 0.0f, 0.0f, 0x1.e5cbp-63f, 0x1.1ddf3ep-13f,
     0x1.00773ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93b6dp-5f, 0x1.9760bap-98f, 0.0f,
     0.0f, 0x1.b788dap-72f, 0.0f, 0.0f, 0x1.edcb76p-112f, 0.0f, 0.0f,
     0x1.65595ap-124f, 0.0f, 0x1.b28bep-56f, 0.0f, 0x1.1f841ep-9f, 0.0f, 0.0f,
     0x1.431b8ap-67f, 0x1.2a6afp-21f, 0x1.938296p-113f, 0x1.255364p-73f,
     0x1.ace2d4p-96f, 0.0f, 0.0f, 0x1.17050cp-112f, 0x1.0a3d6ep-31f, 0x1.5cb002p-121f,
     0x1.bd191ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad341ap-3f, 0.0f, 0x1.4fcbap-120f,
     0x1.c3175ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8feadp-51f, 0x1.a1102ep-40f,
     0.0f, 0.0f, 0x1.9f15dep-94f, 0.0f, 0.0f, 0.0f, 0x1.37eb1ap-121f, 0.0f,
     0x1.aab344p-123f, 0.0f, 0x1.43316cp-111f, 0.0f, 0x1.ba6f2cp-79f, 0x1.ff8ec4p-20f,
     0.0f, 0x1.a5718ap-120f, 0.0f, 0x1.300bf2p-50f, 0.0f, 0.0f, 0x1.b2d43ap-91f,
     0x1.a65b26p-30f, 0x1.364ed4p-91f, 0x1.0c9a36p-111f, 0x1.73ff4p-17f,
     0x1.aa5e72p-72f, 0x1.d26b06p-22f, 0.0f, 0x1p0f, 0x1.617a5p-40f, 0.0f,
     0x1.3cd008p-102f, 0.0f, 0.0f, 0x1.4ce59ep-89f, 0x1.de1472p-119f, 0x1.2ec55cp-95f,
     0.0f, 0x1.0fa084p-95f, 0.0f, 0x1.94408ep-48f, 0.0f, 0x1.c7bba4p-38f, 0.0f,
     0x1.56dc6ap-122f, 0.0f, 0x1.8a8a3p-90f, 0x1.72fe5cp-62f, 0.0f, 0x1.35256ep-62f,
     0x1.fcea92p-72f, 0.0f, 0x1.14bf78p-79f, 0.0f, 0x1.825584p-60f, 0.0f, 0.0f,
     0x1.afb802p-123f, 0.0f, 0x1.e0cd22p-105f, 0x1.e23e96p-63f, 0x1.482858p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bce60ap-69f, 0x1.fe7204p-47f, 0.0f,
     0x1.1f3b7ep-17f, 0x1.b12d82p-53f, 0.0f, 0.0f, 0x1.3e8bb6p-66f, 0.0f,
     0x1.f96efep-92f, 0.0f, 0x1.172a62p-88f, 0x1.cec454p-121f, 0.0f, 0.0f, 0.0f,
     0x1.dbf01ap-106f, 0.0f, 0.0f, 0x1.f2494ap-49f, 0x1.8386a8p-63f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.90d62p-42f, 0.0f, 0x1.92d1d8p-18f, 0.0f, 0x1.d61fe4p-67f,
     0x1.6fa746p-25f, 0.0f, 0x1.7268e2p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ed4eap-45f,
     0.0f, 0x1.46c8eap-106f, 0.0f, 0x1.e8b6cap-120f, 0x1.bf4cfep-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8569f4p-30f, 0.0f, 0x1.09a7fap-115f, 0.0f, 0.0f,
     0x1.5d5c8ap-102f, 0.0f, 0x1.12c6a8p-63f, 0x1.3e69bap-82f, 0.0f, 0.0f,
     0x1.f32756p-91f, 0.0f, 0x1.501e3ep-33f, 0x1.db6a96p-38f, 0.0f, 0.0f, 0.0f,
     0x1.1de41ap-10f, 0.0f, 0.0f, 0.0f, 0x1.519486p-51f, 0.0f, 0.0f, 0x1.6aefdcp-30f,
     0x1.120f8ep-37f, 0x1.566994p-108f, 0x1.27c25ep-7f, 0x1.283736p-52f,
     0x1.8f4832p-24f, 0x1.0e23b2p-108f, 0.0f, 0x1.9c8392p-106f, 0.0f, 0.0f, 0.0f,
     0x1.c425f2p-47f, 0x1.20e11p-93f, 0x1.cccc3cp-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a5abcep-30f, 0x1.62fbd4p-48f, 0.0f, 0.0f, 0x1.e38d58p-117f, 0.0f,
     0x1.c3f32ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bcfc8p-6f, 0x1.14a6b2p-120f,
     0x1.72fdf6p-42f, 0.0f, 0.0f, 0x1.757288p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.162aaep-109f, 0.0f, 0x1.37d9fp-103f, 0x1.2563c8p-23f, 0x1.562184p-48f, 0.0f,
     0.0f, 0x1.d05464p-108f, 0x1.d4a68ap-100f, 0x1.51f35cp-36f, 0.0f, 0.0f,
     0x1.19fe3cp-64f, 0.0f, 0x1.3c39dep-41f, 0x1.7b4d8p-55f, 0.0f, 0.0f,
     0x1.506ca2p-126f, 0.0f, 0x1.35a054p-51f, 0x1.b27d86p-61f, 0.0f, 0x1.28d4b4p-90f,
     0x1.3507f2p-115f, 0x1.e9a49ep-17f, 0.0f, 0x1.074edcp-63f, 0x1.e5cb72p-115f, 0.0f,
     0.0f, 0x1.509022p-14f, 0.0f, 0x1.c25812p-74f, 0.0f, 0.0f, 0x1.2236eep-19f,
     0x1.3b602ap-23f, 0.0f, 0.0f, 0x1.14da48p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ade53p-26f, 0x1.96a2dap-39f, 0.0f, 0.0f, 0x1.cce304p-7f, 0.0f,
     0x1.a84d34p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebcabp-17f, 0.0f, 0.0f,
     0x1.634a14p-61f, 0x1.515d0ep-60f, 0.0f, 0x1.e76aeep-60f, 0x1.d8641cp-5f, 0.0f,
     0x1.ee2e0ap-46f, 0x1.77a1c8p-25f, 0.0f, 0.0f, 0x1.ee4094p-97f, 0x1.469bd2p-61f,
     0.0f, 0x1.25ff78p-45f, 0.0f, 0.0f, 0.0f, 0x1.a912c4p-35f, 0x1.743a82p-29f, 0.0f,
     0x1.d36cbep-107f, 0x1.792beep-107f, 0x1.ac9c3ap-114f, 0.0f, 0x1.5130aap-81f,
     0.0f, 0x1.031d9ep-7f, 0.0f, 0.0f, 0.0f, 0x1.8de164p-68f, 0x1.a5b8dep-74f,
     0x1.87921p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdd34p-111f, 0.0f, 0x1.450cdp-87f,
     0x1.3eec2cp-77f, 0x1.d32816p-70f, 0.0f, 0x1.9a0fbcp-32f, 0.0f, 0x1.0784ep-93f,
     0x1.be4af8p-121f, 0.0f, 0x1.8df114p-69f, 0x1.b8c1bcp-100f, 0x1.c34138p-112f,
     0x1.f25eacp-25f, 0.0f, 0.0f, 0x1.7f358ap-126f, 0x1.a99c3cp-81f, 0x1.0ad6bcp-94f,
     0x1.a2be3ap-27f, 0x1.4caeccp-119f, 0x1.400bdp-47f, 0.0f, 0x1.0ff0a2p-115f,
     0x1.f13dbep-25f, 0x1.85e7b6p-34f, 0x1.cc2a64p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fca224p-23f, 0.0f, 0x1.75fd74p-94f, 0.0f, 0x1.8b626cp-96f, 0.0f,
     0x1.87e88p-55f, 0.0f, 0.0f, 0.0f, 0x1.f24e0ap-10f, 0x1.ac1cf4p-79f,
     0x1.c63cf4p-33f, 0x1.0c5552p-125f, 0.0f, 0x1.9718b6p-99f, 0x1.cd709cp-50f, 0.0f,
     0.0f, 0x1.d2b2bp-67f, 0x1.d01b9p-6f, 0x1.2131p-46f, 0.0f, 0x1p0f, 0.0f,
     0x1.787578p-116f, 0x1.635ddap-75f, 0.0f, 0x1.88b8cp-90f, 0x1.37b2acp-87f,
     0x1.bcee52p-90f, 0x1.1450a6p-84f, 0.0f, 0x1.5d3b14p-116f, 0.0f, 0.0f,
     0x1.874edp-123f, 0.0f, 0.0f, 0x1.c4b52p-13f, 0x1p0f, 0.0f, 0.0f, 0x1.e27feap-92f,
     0x1.de013cp-106f, 0x1.fb00cap-110f, 0x1.d2b6ecp-124f, 0.0f, 0.0f,
     0x1.0a8048p-45f, 0x1.c7d9e4p-53f, 0x1.c9a77cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a9e4ap-62f, 0.0f, 0x1.aaf81ap-89f,
     0x1.7b2a94p-106f, 0x1.54859p-119f, 0x1.8d6946p-49f, 0x1.4159dep-51f,
     0x1.2268cp-44f, 0x1.96afdcp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9574dcp-16f, 0.0f,
     0.0f, 0x1.9971acp-112f, 0.0f, 0x1.07fc12p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be7cacp-60f, 0x1.c4fe88p-57f, 0x1.9dea22p-45f, 0x1.935704p-121f, 0.0f, 0.0f,
     0.0f, 0x1.8535b2p-64f, 0.0f, 0x1.464bp-29f, 0.0f, 0x1.fe932ap-123f,
     0x1.d1b2cep-70f, 0.0f, 0.0f, 0x1.904c52p-86f, 0x1.67af3p-22f, 0x1.388ad2p-77f,
     0.0f, 0x1.635c5ep-80f, 0.0f, 0.0f, 0.0f, 0x1.8d0e3p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2802ep-125f, 0.0f, 0x1.7747ep-99f, 0.0f, 0.0f, 0x1.03d024p-32f, 0.0f,
     0x1.97b8fep-84f, 0x1.ef2ffp-3f, 0x1.43166ep-61f, 0.0f, 0.0f, 0x1.c4b092p-121f,
     0.0f, 0.0f, 0x1.64e378p-42f, 0.0f, 0x1.ab0958p-35f, 0x1.73b3e4p-96f,
     0x1.2a194p-20f, 0x1.bc13fcp-65f, 0.0f, 0x1.c42a6cp-33f, 0.0f, 0.0f, 0.0f,
     0x1.3de24ap-26f, 0x1.4dfabp-63f, 0x1.c7fb9ap-18f, 0x1.1e179ep-92f, 0.0f, 0.0f,
     0.0f, 0x1.48b886p-99f, 0x1.88cfd6p-80f, 0.0f, 0.0f, 0x1.119a2cp-60f,
     0x1.adced6p-24f, 0x1.28170ep-39f, 0x1.a84d5ap-88f, 0.0f, 0.0f, 0x1.90e6fep-65f,
     0x1.c70a28p-21f, 0x1.b1bc18p-21f, 0.0f, 0x1.2e4906p-11f, 0.0f, 0x1.40d0ep-30f,
     0.0f, 0x1.6ea234p-24f, 0x1.c494p-102f, 0.0f, 0.0f, 0x1.c4e188p-113f, 0.0f,
     0x1.26dbd4p-10f, 0.0f, 0x1.12ca66p-62f, 0.0f, 0x1.0c70a8p-76f, 0x1.03f882p-18f,
     0.0f, 0.0f, 0x1.be6578p-19f, 0x1.1462acp-77f, 0x1.52924ep-107f, 0.0f, 0.0f,
     0x1.ee9d78p-117f, 0x1.08ebf4p-18f, 0x1.551412p-11f, 0x1.480274p-93f, 0.0f,
     0x1.acfa2p-54f, 0.0f, 0x1.78c46ep-9f, 0.0f, 0.0f, 0.0f, 0x1.f6bba6p-103f, 0.0f,
     0x1.934bcp-15f, 0x1.6117d4p-105f, 0.0f, 0.0f, 0.0f, 0x1.8d9fdep-51f,
     0x1.71fa0ep-115f, 0.0f, 0x1.72119ap-15f, 0.0f, 0.0f, 0x1.ff52cep-37f, 0.0f, 0.0f,
     0x1.6ea36cp-40f, 0.0f, 0x1.2fcd2ep-41f, 0.0f, 0.0f, 0x1.6f17b4p-66f, 0.0f, 0.0f,
     0x1.933fb6p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db727cp-57f, 0x1.8260aep-91f,
     0x1.0fd8cp-25f, 0x1.604e18p-5f, 0x1.c4346cp-2f, 0x1.e728bap-60f, 0x1.2d6518p-52f,
     0.0f, 0x1.63011cp-55f, 0.0f, 0.0f, 0.0f, 0x1.096488p-45f, 0.0f, 0x1.6bb3fep-36f,
     0x1.171b7p-44f, 0x1.f847f8p-18f, 0x1.fffcep-80f, 0.0f, 0x1.c25168p-113f, 0.0f,
     0x1.d55a18p-72f, 0x1.f1729ap-117f, 0.0f, 0x1.1e233cp-69f, 0x1.908688p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d530ap-2f, 0.0f, 0x1.35ddeep-126f, 0x1.88fb32p-72f,
     0x1.95a298p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8481ep-72f, 0x1.3e0012p-92f, 0.0f, 0x1.6ccfcap-78f, 0.0f, 0.0f,
     0x1.ae87cp-37f, 0.0f, 0x1.dfa18p-66f, 0x1.63bc8ap-72f, 0x1.07d782p-102f,
     0x1.b7db6cp-5f, 0.0f, 0.0f, 0x1.17a534p-95f, 0.0f, 0x1.f30a8p-121f, 0.0f,
     0x1.9bd2d8p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f64bb4p-7f, 0.0f, 0.0f,
     0x1.49adecp-33f, 0.0f, 0x1.896cecp-66f, 0x1.12b9a6p-80f, 0x1.2a90c4p-18f, 0.0f,
     0x1.e5bd7p-69f, 0x1.dec934p-2f, 0.0f, 0x1.e74b2ap-75f, 0.0f, 0x1.6b8abp-18f,
     0x1.55af0cp-42f, 0.0f, 0x1.ea7a4cp-25f, 0.0f, 0x1.ce691p-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.277f78p-30f, 0x1.28f9aep-48f, 0x1.33d7dcp-122f, 0.0f,
     0x1.199a7cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce7df2p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a445cp-67f, 0x1.c0e322p-36f, 0.0f,
     0x1.b12562p-109f, 0x1.6651d2p-112f, 0x1.4f02bcp-57f, 0.0f, 0x1.dec6eap-30f,
     0x1.e06bcep-13f, 0x1.5b428p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f19c6p-30f,
     0x1.edcf1ep-64f, 0.0f, 0x1.10e986p-10f, 0x1.6e8804p-29f, 0x1.dbfdfp-9f,
     0x1.35fe3ap-114f, 0.0f, 0.0f, 0x1.d99312p-20f, 0.0f, 0.0f, 0x1.8fad82p-82f, 0.0f,
     0x1.455134p-97f, 0x1.4e213ap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.383a78p-107f, 0.0f, 0x1.112748p-112f, 0x1.edec08p-6f, 0.0f, 0.0f, 0.0f,
     0x1.1540bep-18f, 0.0f, 0.0f, 0x1.a7b7f2p-107f, 0.0f, 0x1.5e18ep-54f, 0.0f, 0.0f,
     0x1.0ebf2p-14f, 0x1.33da1cp-43f, 0x1.c55206p-49f, 0.0f, 0x1.8b3396p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5aee68p-39f, 0x1p0f, 0.0f, 0.0f, 0x1.830652p-66f, 0.0f,
     0.0f, 0x1.517b22p-91f, 0x1.b1dfc8p-122f, 0x1.5d570ep-82f, 0x1.e14084p-82f, 0.0f,
     0x1.da8504p-7f, 0x1.773d8ap-104f, 0.0f, 0x1.127444p-98f, 0x1.37092cp-61f,
     0x1.8d16b2p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ebe9p-40f, 0x1.1d4628p-7f,
     0x1.90111p-9f, 0.0f, 0.0f, 0x1.da7374p-104f, 0.0f, 0x1.315e1ep-13f, 0.0f,
     0x1.80de8ep-55f, 0x1.b7d596p-88f, 0x1.81cf8p-8f, 0.0f, 0.0f, 0x1.57907ap-39f,
     0.0f, 0.0f, 0x1.5f044ep-42f, 0.0f, 0.0f, 0x1.c3193p-10f, 0x1.6a3436p-61f, 0.0f,
     0.0f, 0x1.4e6654p-84f, 0.0f, 0.0f, 0.0f, 0x1.5f3792p-68f, 0.0f, 0.0f,
     0x1.b3295cp-117f, 0x1.405178p-95f, 0x1.61ec42p-16f, 0x1.77465ep-55f,
     0x1.b8f2bep-115f, 0.0f, 0x1.f67e0cp-16f, 0.0f, 0x1.115746p-110f, 0.0f, 0.0f,
     0.0f, 0x1.d4ba82p-114f, 0.0f, 0.0f, 0x1.068b8ap-55f, 0.0f, 0x1.c35f8p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e16bep-4f, 0x1.b42f4p-9f,
     0x1.32c13p-52f, 0x1.7d777ep-41f, 0.0f, 0x1.8d76bap-54f, 0.0f, 0x1.786424p-36f,
     0x1.16f872p-24f, 0.0f, 0.0f, 0x1.715d6cp-50f, 0.0f, 0x1.8e4b7ep-9f,
     0x1.b14c48p-125f, 0.0f, 0.0f, 0.0f, 0x1.80499p-105f, 0.0f, 0x1.429386p-51f,
     0x1.d5b0aap-63f, 0.0f, 0x1.ebd278p-64f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_exp10f4_u35avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_exp10f4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp10f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
