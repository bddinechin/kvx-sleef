/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf4_u10kvx.c --function Sleef_finz_cosf4_u10kvx \
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
     0x1.9e916p-45f, 0x1.417adep-108f, 0.0f, 0.0f, 0x1.28bc64p-3f, 0x1.d35352p-76f,
     0x1.63a95cp-19f, 0x1.a155cep-7f, 0.0f, 0x1.72e8bp-42f, 0x1.50278p-13f,
     0x1.d9ffd4p-85f, 0.0f, 0.0f, 0x1.2487e6p-40f, 0x1.b69da8p-48f, 0.0f, 0.0f, 0.0f,
     0x1.22d35ep-99f, 0.0f, 0.0f, 0.0f, 0x1.9c7d44p-80f, 0x1.df79f2p-97f, 0x1p0f,
     0x1.b3df1ap-116f, 0.0f, 0x1.fe3096p-47f, 0.0f, 0x1.5cb476p-22f, 0x1.dd5618p-95f,
     0x1.e439fap-72f, 0.0f, 0.0f, 0x1.35c4aap-125f, 0.0f, 0x1.029746p-58f,
     0x1.f369c8p-68f, 0x1.013626p-103f, 0x1.78544p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aac2p-80f, 0.0f, 0.0f, 0.0f, 0x1.7bf6bep-101f,
     0x1.787998p-50f, 0.0f, 0x1.f1efc2p-83f, 0x1.8a4c24p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cc712p-107f, 0.0f, 0x1.0c6a3cp-12f, 0x1.ff028p-6f, 0.0f, 0x1.5c59dep-84f,
     0x1.6181eap-18f, 0x1.dbf77ap-36f, 0x1.2751c6p-85f, 0x1.664b06p-39f,
     0x1.5c8be2p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eed2d4p-53f,
     0.0f, 0x1.1bb716p-94f, 0.0f, 0x1.48cf42p-75f, 0.0f, 0.0f, 0x1.0e0d32p-32f,
     0x1.90847p-28f, 0.0f, 0x1.1410c2p-70f, 0.0f, 0x1.44f6cap-80f, 0x1.2f3712p-71f,
     0.0f, 0x1.33be8ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c966ap-58f, 0.0f,
     0x1.008244p-70f, 0.0f, 0.0f, 0x1.60fb18p-92f, 0x1.c1de48p-10f, 0.0f, 0.0f,
     0x1.466462p-83f, 0x1.77feep-23f, 0.0f, 0x1.daa452p-37f, 0.0f, 0x1.f20276p-85f,
     0.0f, 0x1.9d9baep-42f, 0x1.1eaa5cp-39f, 0.0f, 0x1.057736p-20f, 0.0f, 0.0f, 0.0f,
     0x1.4ef0f2p-113f, 0.0f, 0.0f, 0x1.76c12ep-83f, 0x1.d3bfe2p-90f, 0.0f,
     0x1.18cdd2p-77f, 0x1.b56fap-74f, 0x1.06c0d8p-84f, 0.0f, 0x1.acce1cp-13f,
     0x1.cc98f8p-31f, 0x1.94e76ep-11f, 0x1.66d518p-47f, 0.0f, 0.0f, 0.0f,
     0x1.e8d7b2p-69f, 0x1.54977ep-17f, 0x1.019d7ap-63f, 0.0f, 0x1.35b76p-19f,
     0x1.c3f6dap-74f, 0.0f, 0x1.410a96p-21f, 0.0f, 0.0f, 0.0f, 0x1.9224c6p-72f, 0.0f,
     0x1.e230b6p-78f, 0x1.d03046p-30f, 0x1.0be4b8p-93f, 0x1.4df5aap-60f,
     0x1.df6d04p-91f, 0.0f, 0.0f, 0x1.299668p-33f, 0x1.0bc0c6p-28f, 0x1.78f89cp-40f,
     0x1.c50baap-49f, 0x1.ed119p-58f, 0x1.730cdep-41f, 0x1.5e9366p-31f,
     0x1.70ac3p-49f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.60f54ep-91f,
     0x1.e76628p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4783b6p-24f, 0x1.369eep-90f, 0.0f,
     0.0f, 0x1.1a511p-26f, 0x1.0756eap-113f, 0.0f, 0x1.019fa2p-29f, 0x1.4510fcp-119f,
     0x1.138ddep-100f, 0.0f, 0x1.91eadp-72f, 0x1.1132b2p-2f, 0x1.c76f42p-57f, 0.0f,
     0.0f, 0.0f, 0x1.32634cp-52f, 0x1.405a82p-34f, 0x1.ebef0ep-1f, 0.0f, 0.0f, 0.0f,
     0x1.79040ep-47f, 0.0f, 0.0f, 0x1.a7e9aep-71f, 0x1.49c84ap-34f, 0.0f,
     0x1.207d7ap-98f, 0x1.778848p-116f, 0.0f, 0x1.08abbep-14f, 0.0f, 0.0f,
     0x1.bd967cp-94f, 0.0f, 0.0f, 0x1.cb08bcp-83f, 0.0f, 0.0f, 0x1.1924aap-2f,
     0x1.caa19ep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.186798p-16f, 0.0f, 0.0f, 0.0f,
     0x1.6d044ap-65f, 0x1.7bf438p-28f, 0x1.248b2p-67f, 0.0f, 0x1.7cd2eep-104f, 0.0f,
     0.0f, 0x1.48e84p-89f, 0.0f, 0x1.4979ap-72f, 0.0f, 0.0f, 0.0f, 0x1.b93436p-3f,
     0.0f, 0x1.f8c818p-34f, 0.0f, 0x1.bf47c4p-80f, 0x1.e662ccp-76f, 0.0f,
     0x1.1cfca6p-20f, 0.0f, 0.0f, 0.0f, 0x1.e18164p-70f, 0x1.e0dc88p-125f,
     0x1.4d2cacp-88f, 0x1.282668p-122f, 0x1.93637ep-29f, 0x1.4e0cc8p-39f,
     0x1.69817cp-100f, 0x1.0a3cecp-17f, 0.0f, 0x1.cc5f66p-19f, 0x1.ad9974p-73f,
     0x1.d61812p-67f, 0.0f, 0x1.aaf4eap-39f, 0.0f, 0.0f, 0x1.40d44ap-13f, 0.0f, 0.0f,
     0.0f, 0x1.5c997ap-103f, 0.0f, 0x1.483a8cp-77f, 0.0f, 0x1.f5088cp-65f, 0.0f,
     0x1.a64d8p-117f, 0x1.cd531cp-32f, 0.0f, 0x1.e1797cp-40f, 0.0f, 0.0f,
     0x1.63ee28p-109f, 0.0f, 0x1.e9a99ep-60f, 0.0f, 0.0f, 0x1.5a6792p-4f, 0.0f, 0.0f,
     0x1.9981b4p-80f, 0.0f, 0x1.e89c4ap-22f, 0x1.eb4048p-80f, 0x1.96a156p-72f,
     0x1.d12a5p-18f, 0x1.317116p-54f, 0.0f, 0x1.42ba08p-111f, 0.0f, 0.0f,
     0x1.cb563ap-51f, 0.0f, 0.0f, 0.0f, 0x1.e8bc3cp-60f, 0x1.202f22p-109f, 0.0f,
     0x1.561594p-30f, 0.0f, 0.0f, 0x1.833d5ep-19f, 0.0f, 0.0f, 0x1.86044cp-35f, 0.0f,
     0x1.87d1fp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a1292p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.45747cp-17f, 0x1.c86138p-117f, 0.0f, 0x1.8d725cp-55f,
     0x1.fb0148p-94f, 0.0f, 0.0f, 0x1.6362fcp-21f, 0x1.875a2ep-37f, 0x1.b5c33cp-106f,
     0x1.4daa3ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f30504p-72f,
     0x1.4ba66ep-8f, 0x1.2aebeap-37f, 0.0f, 0.0f, 0x1.0a5418p-62f, 0x1.51000ap-19f,
     0x1.cb3baep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65cbd8p-91f, 0.0f,
     0x1.07e4c2p-19f, 0x1.0038f6p-86f, 0.0f, 0.0f, 0x1.4e1142p-78f, 0.0f,
     0x1.33af54p-104f, 0.0f, 0x1.1a79f6p-5f, 0x1.3c6dcep-103f, 0x1.6b5394p-61f, 0.0f,
     0x1.d72e02p-14f, 0x1.9f2f78p-29f, 0.0f, 0x1.3c1f6ap-112f, 0.0f, 0x1.80b936p-18f,
     0x1.84951ep-114f, 0.0f, 0.0f, 0.0f, 0x1.1c761ep-85f, 0x1.8996d6p-35f,
     0x1.fe720ep-18f, 0.0f, 0.0f, 0.0f, 0x1.5583e8p-106f, 0.0f, 0.0f, 0x1.bc411p-119f,
     0x1.44c1f4p-106f, 0x1.9a4212p-73f, 0.0f, 0x1.64081ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.49275ep-97f, 0x1.1cd4b2p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1c9a4p-29f,
     0x1.d7c452p-39f, 0.0f, 0.0f, 0x1.a05448p-109f, 0x1.926f5ap-66f, 0.0f, 0.0f,
     0x1.f3caa2p-67f, 0x1.ba87f2p-96f, 0.0f, 0.0f, 0x1.3ea0dp-1f, 0x1.2386b2p-47f,
     0x1.68602p-92f, 0x1.75cedp-57f, 0.0f, 0x1.ee3846p-65f, 0.0f, 0x1.397c84p-112f,
     0x1.763e9ap-102f, 0x1.e332bap-85f, 0x1.8005a4p-11f, 0.0f, 0x1.2c5348p-7f,
     0x1.22df0cp-3f, 0.0f, 0x1.6ccb3ap-91f, 0.0f, 0x1.7b5bcep-20f, 0.0f, 0.0f, 0.0f,
     0x1.56cd7ap-30f, 0.0f, 0.0f, 0x1.99e2fp-88f, 0.0f, 0.0f, 0.0f, 0x1.8d5c68p-29f,
     0x1.cee54ap-52f, 0.0f, 0x1.ac6d04p-112f, 0.0f, 0.0f, 0.0f, 0x1.5ac96ep-55f, 0.0f,
     0.0f, 0.0f, 0x1.b78d52p-118f, 0.0f, 0x1.eaf8e6p-106f, 0.0f, 0.0f,
     0x1.e2a4ep-104f, 0x1.1a21fep-83f, 0x1.a4d24ap-5f, 0x1.d50aa4p-81f,
     0x1.f557fcp-53f, 0.0f, 0x1.d58bbap-67f, 0.0f, 0.0f, 0x1.4d7996p-95f, 0.0f, 0.0f,
     0x1.5f5458p-41f, 0.0f, 0x1.cf0342p-125f, 0.0f, 0x1.afce84p-122f, 0x1.5e42ccp-72f,
     0x1.aadf5cp-49f, 0x1.7099e8p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f5f98p-44f,
     0x1.a4efep-121f, 0x1.feacc2p-28f, 0x1.2bfd42p-6f, 0.0f, 0.0f, 0x1.4de2a6p-86f,
     0x1.5ba54cp-31f, 0x1.37b16ap-47f, 0.0f, 0x1.c5a224p-78f, 0x1.72cfep-40f, 0.0f,
     0x1.61ca0ep-8f, 0x1.3925f4p-44f, 0x1.ad768cp-91f, 0x1.1b45e6p-97f, 0.0f,
     0x1.ae35f6p-51f, 0x1.0d2a64p-21f, 0.0f, 0.0f, 0x1.50cf68p-126f, 0.0f,
     0x1.de4c8p-121f, 0.0f, 0x1.7a9aap-9f, 0x1.2ec6fap-5f, 0.0f, 0.0f, 0.0f,
     0x1.3532b6p-82f, 0x1.f92592p-104f, 0.0f, 0x1.f0d132p-91f, 0.0f, 0x1.ae2af4p-54f,
     0.0f, 0x1.c52632p-38f, 0.0f, 0.0f, 0.0f, 0x1.18aadcp-47f, 0x1.822532p-51f,
     0x1.8d5276p-25f, 0x1.10668ap-86f, 0x1.eda754p-67f, 0.0f, 0.0f, 0x1.32e7eap-51f,
     0.0f, 0x1.f4bfa6p-5f, 0.0f, 0x1.f7a412p-22f, 0x1.a72bc4p-120f, 0x1.62b048p-119f,
     0x1.847d4ep-88f, 0.0f, 0x1.4acb58p-109f, 0x1.731ba2p-114f, 0.0f, 0x1.dba3e6p-66f,
     0.0f, 0x1.454fccp-105f, 0x1.079e78p-31f, 0.0f, 0x1.a8137ap-93f, 0x1.f31e9ep-63f,
     0x1.8f41bap-73f, 0x1.04b382p-9f, 0x1.d25eaap-28f, 0x1.a42c8cp-21f, 0.0f, 0.0f,
     0x1.eb124cp-17f, 0.0f, 0.0f, 0x1.30c9d4p-100f, 0x1.7b759ap-112f, 0.0f,
     0x1.68b974p-97f, 0.0f, 0x1.d71df4p-12f, 0x1.d3876ap-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.22abbep-53f, 0.0f, 0x1.9c8d38p-8f, 0x1.4aaae2p-79f,
     0x1.2e0aep-83f, 0x1.9c0476p-45f, 0x1.097d4ep-86f, 0x1.a941b8p-36f,
     0x1.c22adcp-100f, 0x1.efbe1cp-117f, 0x1.d7f146p-66f, 0.0f, 0.0f, 0.0f,
     0x1.72a8fap-62f, 0.0f, 0.0f, 0x1.97f824p-86f, 0.0f, 0x1.ab2afp-44f,
     0x1.e9ec98p-72f, 0x1.598cb8p-80f, 0x1.af207ep-28f, 0x1.f6326ep-14f, 0.0f, 0.0f,
     0x1.d6301cp-58f, 0.0f, 0.0f, 0x1.68ed3ap-63f, 0x1.2436e4p-120f, 0.0f,
     0x1.fc7676p-113f, 0x1.57e05cp-7f, 0x1.2600bcp-88f, 0x1.9d9cccp-16f,
     0x1.4c7acp-10f, 0.0f, 0x1.46df7ep-18f, 0.0f, 0.0f, 0x1.833b62p-110f,
     0x1.d3bad4p-70f, 0x1.15bd4ap-25f, 0x1.125c32p-19f, 0x1.771d8cp-24f, 0.0f, 0.0f,
     0x1.18a32p-113f, 0x1.6d743p-19f, 0.0f, 0x1.433d14p-2f, 0.0f, 0x1.334e6ep-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d299dp-65f, 0.0f, 0.0f, 0x1.8db9a2p-47f, 0.0f,
     0x1.46027ap-105f, 0.0f, 0.0f, 0.0f, 0x1.57fe68p-100f, 0.0f, 0.0f,
     0x1.b912c6p-52f, 0x1.7b60aap-13f, 0.0f, 0.0f, 0.0f, 0x1.51c38cp-35f, 0.0f,
     0x1.8bece2p-59f, 0x1.edb23ep-5f, 0.0f, 0x1.7372ccp-79f, 0.0f, 0x1.ea4222p-32f,
     0.0f, 0x1.23a55cp-21f, 0x1.72d192p-113f, 0.0f, 0.0f, 0x1.7ccbcp-40f, 0.0f,
     0x1.a3110ap-106f, 0x1.c2bc36p-82f, 0.0f, 0.0f, 0x1.2369d4p-82f, 0x1.64b29ep-93f,
     0x1.69333cp-90f, 0x1.b95aeap-84f, 0x1.dcc3ccp-22f, 0.0f, 0x1.415692p-89f, 0.0f,
     0x1.5a173ap-82f, 0.0f, 0.0f, 0x1.f300d8p-68f, 0.0f, 0.0f, 0.0f, 0x1.3d11cep-23f,
     0x1.87411p-5f, 0x1.1b55d4p-26f, 0.0f, 0x1.2a6d62p-78f, 0.0f, 0x1.ac1a1p-6f, 0.0f,
     0x1.618e76p-5f, 0x1.775eeap-71f, 0.0f, 0x1.1b4568p-39f, 0.0f, 0.0f,
     0x1.0118fp-40f, 0.0f, 0.0f, 0.0f, 0x1.6b2122p-101f, 0.0f, 0x1.1bcf8p-112f,
     0x1.5469bap-22f, 0x1.fca1bcp-69f, 0x1.e538p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.44b158p-66f, 0.0f, 0x1.ece2bcp-113f, 0x1.a86938p-93f, 0x1.3bbfccp-41f,
     0x1.13ca22p-5f, 0x1.873d9p-47f, 0.0f, 0x1.73c954p-33f, 0x1.6beebp-5f,
     0x1.4e394p-63f, 0.0f, 0x1.89bbbap-42f, 0.0f, 0.0f, 0x1.69648ep-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee88ap-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b789ep-44f, 0x1.e33fc6p-89f, 0.0f, 0.0f, 0x1.96273ap-28f,
     0x1.64abeap-87f, 0x1.8e8b4ap-8f, 0.0f, 0x1.afe85ap-22f, 0.0f, 0x1.b29b1ap-4f,
     0.0f, 0.0f, 0.0f, 0x1.29b84ep-90f, 0x1.e4f5f2p-126f, 0x1.08353cp-120f,
     0x1.4ed62ap-31f, 0x1.e71dfp-84f, 0x1.84be32p-35f, 0x1.9396f4p-60f,
     0x1.ad5c2p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.555366p-38f,
     0x1.e57566p-24f, 0.0f, 0.0f, 0.0f, 0x1.418b0cp-70f, 0.0f, 0x1.b2748p-81f, 0.0f,
     0x1.dd90acp-27f, 0.0f, 0.0f, 0x1.2c484ep-1f, 0x1.65d2f4p-53f, 0.0f, 0.0f,
     0x1.19c31cp-22f, 0x1.5013c8p-9f, 0.0f, 0x1.7f9ee2p-3f, 0x1.67ab9cp-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.21000ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56cf7cp-23f, 0.0f, 0.0f, 0x1.e7da4ep-110f, 0.0f, 0x1.a1dfb2p-101f,
     0x1.6f6bb8p-91f, 0.0f, 0.0f, 0x1.92b636p-69f, 0x1.37db0cp-26f, 0.0f, 0.0f,
     0x1.45d8eap-40f, 0.0f, 0.0f, 0x1.997e24p-1f, 0.0f, 0x1.399d52p-114f, 0.0f,
     0x1.4b8c54p-4f, 0x1.ebef48p-29f, 0x1.70adf6p-37f, 0.0f, 0.0f, 0x1.30ae3cp-112f,
     0x1.1a12p-59f, 0x1.cf7d5cp-104f, 0x1.18845ep-89f, 0x1.520b9cp-39f,
     0x1.04b018p-62f, 0x1.78fb16p-44f, 0x1.a2c1f4p-98f, 0x1.bd728ap-126f,
     0x1.8b77aap-102f, 0.0f, 0.0f, 0.0f, 0x1.2f768ep-89f, 0.0f, 0x1.1273a4p-4f,
     0x1.400a92p-9f, 0x1.37ae36p-37f, 0.0f, 0x1.7e5ef6p-80f, 0x1.bf0eep-11f,
     0x1.9d2854p-76f, 0x1.52b38ep-111f, 0.0f, 0x1.152eeap-52f, 0x1.c0046ep-89f,
     0x1.7e0beep-36f, 0x1.0f5fd2p-99f, 0x1.bfc1a2p-26f, 0x1.4aad92p-8f,
     0x1.8515bcp-67f, 0.0f, 0x1.ec1be8p-105f, 0.0f, 0x1.6816ep-6f, 0.0f, 0.0f, 0.0f,
     0x1.809222p-119f, 0x1.3cbdc4p-34f, 0.0f, 0.0f, 0x1.be86bep-112f, 0.0f,
     0x1.c66fc6p-115f, 0.0f, 0x1.f1683p-109f, 0x1.95207cp-3f, 0.0f, 0.0f,
     0x1.4f39fap-41f, 0.0f, 0x1.aaced8p-124f, 0x1.4bdf3p-117f, 0.0f, 0x1.b2a8d8p-45f,
     0.0f, 0x1.37b166p-36f, 0.0f, 0.0f, 0x1.f6cab4p-81f, 0x1.70efc4p-42f,
     0x1.a967d2p-94f, 0x1.74008ep-62f, 0.0f, 0x1.88502cp-110f, 0x1.9510aep-82f,
     0x1.173b08p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be4abep-59f, 0.0f,
     0x1.80537ap-24f, 0x1.816526p-29f, 0x1.9fcc64p-99f, 0x1.969f24p-38f,
     0x1.8efc9p-90f, 0x1.3fc45p-117f, 0.0f, 0x1.c6b286p-4f, 0.0f, 0x1.ef1354p-62f,
     0x1.9b7222p-124f, 0x1.c99852p-115f, 0x1.b4ba16p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90afcap-68f, 0x1.0a1928p-38f, 0x1.452012p-27f, 0.0f, 0.0f, 0.0f,
     0x1.21cde4p-86f, 0.0f, 0.0f, 0.0f, 0x1.c5398ep-125f, 0.0f, 0x1.3fd4ep-62f, 0.0f,
     0x1.fecb4cp-104f, 0.0f, 0.0f, 0.0f, 0x1.5309fcp-12f, 0x1.7e9edap-47f, 0.0f,
     0x1.4376fep-66f, 0x1.9fff1ep-111f, 0x1.8f06b6p-60f, 0.0f, 0.0f, 0x1.5f2ce6p-88f,
     0.0f, 0x1.14d244p-28f, 0x1.fecb96p-3f, 0.0f, 0x1.796968p-79f, 0x1.c2710ep-61f,
     0x1.9f98cap-83f, 0x1.365138p-8f, 0x1.f660d8p-100f, 0x1.614f5ep-114f, 0.0f, 0.0f,
     0x1.66f0eep-5f, 0.0f, 0.0f, 0.0f, 0x1.cb5bp-96f, 0.0f, 0x1.9b2a68p-108f,
     0x1.2bd77p-44f, 0x1.de288p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e3b8f8p-45f, 0.0f, 0.0f, 0.0f, 0x1.01fbfcp-121f, 0x1.ec0dbap-85f, 0.0f,
     0.0f, 0.0f, 0x1.85bb5ep-42f, 0.0f, 0x1.3ec4e4p-74f, 0x1.29e7c6p-105f
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
            tmp1 = Sleef_finz_cosf4_u10kvx(tmp0);
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
    printf("Sleef_finz_cosf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cosf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
