/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_powf4_u10kvx.c --function Sleef_finz_powf4_u10kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.e680f2p-84f, 0x1.ccf0f8p-8f, 0x1.eb2488p-23f, 0x1.2fe36p-54f,
     0x1.08cfd2p-116f, 0x1.1bd972p-49f, 0.0f, 0x1.02b242p-92f, 0.0f, 0.0f, 0.0f,
     0x1.6a7af4p-88f, 0x1.c030c4p-88f, 0x1.d9888ep-121f, 0.0f, 0.0f, 0x1.64aa58p-10f,
     0.0f, 0.0f, 0x1.a9c736p-108f, 0x1.129ec4p-29f, 0.0f, 0.0f, 0x1.9d3f38p-54f,
     0x1.8f6374p-33f, 0x1.0c99c8p-25f, 0x1.7b3f7ep-122f, 0x1.30a952p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.155a08p-30f, 0x1.675602p-117f, 0x1.08adfep-85f,
     0x1.87175ep-5f, 0.0f, 0x1.b30f3cp-94f, 0.0f, 0x1.91722cp-93f, 0.0f,
     0x1.d480b2p-18f, 0.0f, 0.0f, 0.0f, 0x1.b42476p-111f, 0.0f, 0x1.e200ep-13f,
     0x1.c6eeaap-110f, 0x1.bb995ep-119f, 0.0f, 0.0f, 0x1.1a136ap-105f, 0.0f, 0.0f,
     0x1.8a4bb4p-40f, 0x1.2806c6p-36f, 0x1.832bccp-8f, 0x1.87614p-90f, 0.0f, 0.0f,
     0x1.bbc6p-49f, 0.0f, 0x1.30bfp-17f, 0x1.c5cf84p-32f, 0.0f, 0x1.1f4288p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8c095ep-14f, 0x1.8b83dep-12f, 0x1.778728p-97f,
     0x1.11cbbap-12f, 0.0f, 0x1.4bf126p-92f, 0x1.cb2982p-29f, 0.0f, 0.0f,
     0x1.70d3b8p-31f, 0x1.3555eap-117f, 0x1.2c16fp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.542918p-74f, 0x1.aba858p-85f, 0x1.dbce9p-5f, 0x1.19a616p-111f, 0.0f, 0.0f,
     0x1.604b04p-93f, 0.0f, 0x1.390532p-120f, 0x1.2c930cp-102f, 0x1.dd2768p-88f, 0.0f,
     0.0f, 0.0f, 0x1.be727cp-115f, 0.0f, 0.0f, 0x1.6f1b9ap-16f, 0x1.9b940ap-25f, 0.0f,
     0x1.860f06p-71f, 0.0f, 0x1.7d877ap-120f, 0.0f, 0x1.517264p-108f,
     0x1.2d51eap-116f, 0x1.566408p-120f, 0.0f, 0.0f, 0.0f, 0x1.eebf6ep-89f, 0.0f,
     0.0f, 0x1.97f814p-36f, 0x1.2b1f64p-4f, 0x1.a79bd2p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.34b4dap-86f, 0.0f, 0.0f, 0.0f, 0x1.b598e2p-28f, 0.0f, 0.0f, 0.0f,
     0x1.52e39ap-31f, 0.0f, 0x1.41b53ap-58f, 0x1.7b54bep-81f, 0x1.da4598p-66f,
     0x1.2458e4p-64f, 0x1.e68dacp-113f, 0.0f, 0x1.370914p-115f, 0x1.9a42d2p-90f, 0.0f,
     0x1.8265fp-69f, 0x1.219fdep-124f, 0x1.788a98p-29f, 0.0f, 0x1.e3eba8p-31f, 0.0f,
     0.0f, 0.0f, 0x1.ec1p-120f, 0x1.d4477cp-57f, 0x1.e8b34ep-34f, 0.0f,
     0x1.1e0222p-57f, 0.0f, 0.0f, 0x1.f0cc3ap-67f, 0x1.1f9606p-102f, 0.0f, 0x1p0f,
     0.0f, 0x1.959e52p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae473ap-75f, 0.0f, 0.0f,
     0x1.d11aecp-66f, 0.0f, 0x1.f054ep-95f, 0.0f, 0.0f, 0x1.3443fep-85f,
     0x1.0491b6p-56f, 0.0f, 0.0f, 0x1.a66362p-32f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.2ac49p-88f, 0.0f, 0x1.ecd892p-60f, 0x1.0bca5ep-106f, 0x1.f86a8p-103f,
     0x1.d0385p-89f, 0.0f, 0x1.3d8c74p-80f, 0x1.a22188p-62f, 0x1.dd5d24p-75f, 0.0f,
     0x1.b65a0cp-14f, 0x1.949d0cp-91f, 0x1.a33b8ep-101f, 0x1.b1d128p-23f,
     0x1.91a552p-59f, 0.0f, 0x1.8dc91cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.597bf2p-53f,
     0.0f, 0.0f, 0.0f, 0x1.184534p-89f, 0.0f, 0x1.bfb9cap-88f, 0.0f, 0x1.3835c2p-64f,
     0.0f, 0.0f, 0x1.31829ap-80f, 0x1.26979cp-59f, 0x1.25c05ap-84f, 0x1.0468ep-2f,
     0x1.3dbafap-49f, 0.0f, 0x1.e3dbfap-108f, 0x1.f0124cp-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.ce6c12p-89f, 0x1.ba46dcp-6f, 0.0f, 0x1.4949f6p-9f, 0.0f, 0.0f,
     0x1.a266dep-32f, 0x1.51b5ap-87f, 0.0f, 0x1.f26984p-124f, 0x1.deaa68p-51f, 0.0f,
     0x1.93b156p-80f, 0x1.7804dap-56f, 0x1.f2a16p-76f, 0.0f, 0x1.20c78ap-22f, 0.0f,
     0x1.dab602p-9f, 0x1.b7a024p-20f, 0x1.75bb82p-19f, 0x1.6b17cep-1f, 0.0f,
     0x1.49abb6p-18f, 0x1.475016p-123f, 0.0f, 0x1.e695dcp-72f, 0.0f, 0.0f,
     0x1.8da00cp-100f, 0x1.a6459ep-39f, 0.0f, 0x1.3d1ac4p-62f, 0x1.a51706p-73f,
     0x1.6c5ae4p-78f, 0.0f, 0x1.03e982p-49f, 0.0f, 0x1.acc93cp-79f, 0x1.8c491cp-38f,
     0x1.978fecp-96f, 0x1.220032p-3f, 0.0f, 0.0f, 0x1.c5a23ep-123f, 0x1.79a60ep-48f,
     0.0f, 0x1.22bb0ep-20f, 0.0f, 0.0f, 0x1.bf3f74p-118f, 0x1.df9a4p-45f,
     0x1.da640ap-79f, 0x1.3a8e76p-76f, 0.0f, 0.0f, 0x1.768e38p-77f, 0x1p0f,
     0x1.700fbp-25f, 0.0f, 0x1.b58b4p-79f, 0.0f, 0.0f, 0x1.2e1d1cp-18f, 0.0f, 0.0f,
     0x1.ba5dfp-32f, 0.0f, 0.0f, 0x1.8400b4p-29f, 0.0f, 0.0f, 0x1.4e0ed2p-22f,
     0x1.20c2f2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1e9bcp-98f, 0.0f, 0.0f, 0.0f,
     0x1.0bda5ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a60cep-50f, 0x1.ffc6fep-86f,
     0x1.12386p-67f, 0.0f, 0.0f, 0x1.5525c6p-58f, 0x1.2efeb4p-117f, 0x1.f1d60ep-80f,
     0x1.bd3c22p-88f, 0x1.3dd426p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82c536p-36f, 0x1.43769ap-113f, 0x1.1e3548p-12f, 0.0f, 0.0f, 0x1.79ddbap-80f,
     0x1.10f234p-107f, 0x1.19c562p-11f, 0.0f, 0x1.c565c6p-56f, 0.0f, 0x1.be742p-9f,
     0x1.9841d2p-44f, 0x1.c967f8p-38f, 0x1.910de8p-49f, 0.0f, 0x1.cf8b8cp-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.891a72p-93f, 0.0f, 0.0f, 0.0f, 0x1.3d0e96p-43f, 0.0f,
     0x1.faec4ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9415a2p-121f, 0.0f,
     0x1.616942p-19f, 0x1.87c9b2p-2f, 0.0f, 0.0f, 0x1.0d7c9p-19f, 0.0f,
     0x1.6f7a1cp-32f, 0x1.5c9edep-2f, 0x1.e85b42p-40f, 0x1.799d0ep-10f,
     0x1.95063cp-88f, 0.0f, 0.0f, 0.0f, 0x1.6f2d22p-30f, 0x1.491f3cp-70f,
     0x1.fb95a6p-67f, 0x1p0f, 0x1.6e6e08p-33f, 0x1.ff0cacp-17f, 0x1.a21292p-53f,
     0x1.fcffdcp-95f, 0.0f, 0x1.4c08eap-51f, 0x1.c9bc34p-20f, 0.0f, 0x1.56d4bep-22f,
     0.0f, 0x1.8c8144p-65f, 0x1.534b66p-1f, 0.0f, 0.0f, 0x1.b9c2aap-101f, 0.0f, 0.0f,
     0x1.bd23b8p-89f, 0x1.5fa4dep-84f, 0x1.2a4804p-37f, 0x1.262b6ap-97f,
     0x1.b76dc6p-96f, 0.0f, 0.0f, 0.0f, 0x1.a3b5bep-12f, 0x1.f6a9dap-42f, 0.0f, 0.0f,
     0x1.c645b4p-40f, 0x1.3f6ddcp-118f, 0.0f, 0x1.f059d6p-90f, 0x1.5ea4ep-5f, 0.0f,
     0x1p0f, 0.0f, 0x1.a282fep-5f, 0x1.0e8592p-113f, 0.0f, 0x1.895938p-100f, 0.0f,
     0x1.10de3p-31f, 0x1.ac6046p-70f, 0x1.1bd084p-23f, 0x1.dcacf4p-121f, 0.0f,
     0x1.1222cap-39f, 0.0f, 0x1.07cb2ap-121f, 0.0f, 0x1.ad243cp-22f, 0x1.3cfa92p-66f,
     0.0f, 0x1.d055d4p-94f, 0.0f, 0.0f, 0.0f, 0x1.36aa74p-69f, 0x1.05e5fep-78f,
     0x1.abf648p-53f, 0.0f, 0.0f, 0x1.bac2a2p-113f, 0.0f, 0x1.90c934p-68f,
     0x1.9d4b7ep-63f, 0x1.5bef4ep-90f, 0x1.fd099ep-105f, 0x1.4cfdd6p-32f,
     0x1.4b2e28p-73f, 0x1.2b4946p-44f, 0.0f, 0x1.da153p-100f, 0x1.60c99cp-9f,
     0x1.603ec6p-117f, 0x1.bfe7cap-9f, 0.0f, 0.0f, 0.0f, 0x1.0d1334p-8f, 0.0f,
     0x1.3c9248p-98f, 0x1.28813ap-122f, 0.0f, 0x1.fef686p-98f, 0x1.eb6b06p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba664p-39f, 0.0f, 0x1.444824p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2603a4p-98f, 0.0f, 0x1.2bf2e2p-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a49c1cp-33f, 0.0f, 0x1.f83a96p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5c1032p-115f, 0.0f, 0.0f, 0.0f, 0x1.b1809ep-60f, 0x1.5adf5cp-6f,
     0x1.2573dap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72d664p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60b888p-72f, 0.0f, 0.0f, 0.0f, 0x1.fc5e3cp-113f, 0x1.4c520ep-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.37249ep-117f, 0x1.0aa548p-98f, 0x1.685c4ep-114f,
     0.0f, 0x1.d37898p-32f, 0.0f, 0.0f, 0.0f, 0x1.a733a8p-70f, 0.0f, 0.0f,
     0x1.be18fp-103f, 0x1.017b88p-32f, 0.0f, 0.0f, 0.0f, 0x1.145a5ep-30f, 0.0f, 0.0f,
     0.0f, 0x1.dd9fb2p-83f, 0x1.e91054p-98f, 0.0f, 0x1.d6660ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.661e0cp-99f, 0x1.0440cap-19f, 0.0f, 0x1.931f82p-3f, 0.0f, 0.0f,
     0x1.6de8d8p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84ebcp-94f, 0.0f, 0.0f, 0.0f,
     0x1.3942ap-98f, 0.0f, 0.0f, 0x1.0850b4p-33f, 0x1.f39046p-104f, 0x1.9be34ap-103f,
     0x1.1a2632p-14f, 0x1.f721b4p-106f, 0x1.3f9e58p-97f, 0x1.93517ep-19f,
     0x1.cf5a72p-39f, 0.0f, 0x1.d082b2p-107f, 0x1.10aafcp-124f, 0x1.60edeep-95f,
     0x1.5a1232p-78f, 0x1.cbe3dep-65f, 0x1.bc61ep-99f, 0.0f, 0x1.8cc18cp-88f,
     0x1.c410f6p-106f, 0x1.330504p-124f, 0x1.e7b6ccp-34f, 0.0f, 0x1.7ec448p-42f, 0.0f,
     0x1.0e573p-57f, 0x1.82e12p-64f, 0x1.3e0766p-45f, 0x1.2d7eb6p-5f, 0.0f,
     0x1.f2917cp-22f, 0.0f, 0x1.ef6ff4p-89f, 0.0f, 0.0f, 0x1.355a28p-107f,
     0x1.2e8a96p-44f, 0.0f, 0.0f, 0x1.1dc87ap-98f, 0.0f, 0x1.2c5fd6p-32f,
     0x1.4dc7dap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4423d6p-43f, 0x1.fbe53ap-94f,
     0x1.0f1384p-80f, 0.0f, 0.0f, 0x1.51f44cp-17f, 0.0f, 0.0f, 0.0f, 0x1.5a58ep-101f,
     0x1.d68b14p-93f, 0.0f, 0x1.250d24p-123f, 0.0f, 0x1.7ea0c4p-76f, 0.0f, 0.0f, 0.0f,
     0x1.574276p-122f, 0.0f, 0.0f, 0x1.1781fp-32f, 0x1.3f57p-94f, 0.0f, 0.0f,
     0x1.ee973p-54f, 0x1.7f102ap-51f, 0.0f, 0.0f, 0x1.8e9ddcp-82f, 0.0f,
     0x1.9e4386p-34f, 0x1.ce125ep-109f, 0x1.718d2p-88f, 0.0f, 0x1.320d42p-79f,
     0x1.da0356p-69f, 0x1.e40488p-79f, 0.0f, 0x1.fe485p-23f, 0x1.96d4d4p-44f,
     0x1.6db36p-94f, 0.0f, 0.0f, 0x1.0d7caap-64f, 0x1.14ec66p-120f, 0.0f, 0.0f,
     0x1.7be426p-93f, 0x1.967084p-50f, 0.0f, 0.0f, 0x1.63df7ap-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd0becp-80f, 0.0f, 0.0f, 0x1.98817ap-76f, 0x1.f7024p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d6da58p-84f, 0.0f, 0x1.b5ee8ep-64f, 0x1.e268dcp-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d46f16p-117f, 0x1.fd957ep-67f, 0x1.c26a6ep-8f,
     0x1.389fdcp-4f, 0x1.906cc4p-16f, 0x1.34de5cp-21f, 0.0f, 0.0f, 0x1.cdd5ep-92f,
     0.0f, 0.0f, 0.0f, 0x1.546138p-37f, 0.0f, 0.0f, 0x1.c62af8p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2c72p-30f, 0x1.f7e724p-115f, 0.0f, 0.0f,
     0x1.ab2d5cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edb316p-31f, 0x1.20fb4ap-20f,
     0x1.a7b6e2p-47f, 0x1.7585p-5f, 0.0f, 0x1.d77adap-68f, 0.0f, 0x1.68d70ap-35f,
     0.0f, 0x1.256464p-48f, 0x1.a25036p-30f, 0.0f, 0.0f, 0x1.1c655cp-36f,
     0x1.e6aaap-29f, 0.0f, 0.0f, 0x1.f60276p-63f, 0x1.5da464p-50f, 0.0f, 0.0f, 0.0f,
     0x1.d2f0ccp-114f, 0x1.7adb0cp-25f, 0x1.fa4d7cp-12f, 0x1.a5905cp-11f, 0.0f,
     0x1.213d68p-76f, 0.0f, 0x1.9d6dc8p-123f, 0.0f, 0x1.b43a4cp-7f, 0x1.03da54p-114f,
     0x1.3a689cp-14f, 0.0f, 0x1.425578p-90f, 0.0f, 0x1.b52886p-19f, 0x1.08e778p-61f,
     0x1.c18d9cp-105f, 0x1.5a289p-36f, 0.0f, 0x1.fbd29p-2f, 0x1.8ca6e4p-60f, 0.0f,
     0.0f, 0.0f, 0x1.860262p-86f, 0x1.96a38cp-88f, 0.0f, 0x1.301c52p-87f, 0.0f, 0.0f,
     0.0f, 0x1.af63b4p-95f, 0.0f, 0.0f, 0x1.85c69p-86f, 0x1.555f88p-63f, 0.0f,
     0x1.567776p-80f, 0.0f, 0x1.ece352p-90f, 0.0f, 0.0f, 0x1.115f32p-48f, 0.0f, 0.0f,
     0x1.fc471p-44f, 0.0f, 0x1.371bc8p-114f, 0x1.e123bep-96f, 0x1.460efap-1f,
     0x1.cc1bf8p-69f, 0x1.74051ap-58f, 0x1.af68d8p-62f, 0.0f, 0.0f, 0x1.97aefap-18f,
     0.0f, 0x1.789032p-65f, 0.0f, 0x1.a5e9acp-73f, 0x1.93d206p-15f, 0.0f,
     0x1.312f46p-101f, 0.0f, 0x1.d2f802p-98f, 0x1.83db14p-17f, 0.0f, 0x1.feb25cp-75f,
     0.0f, 0.0f, 0x1.51183cp-125f, 0.0f, 0x1.58d414p-36f, 0.0f, 0x1.54c36ap-53f,
     0x1.9455e8p-98f, 0x1.495f74p-43f, 0x1.38cc14p-114f, 0.0f, 0x1.183ccap-107f, 0.0f,
     0x1.167ffcp-79f, 0.0f, 0.0f, 0.0f, 0x1.d70c8cp-71f, 0x1.472fb4p-87f,
     0x1.2d0cap-78f, 0x1.dc920ep-61f, 0x1.7a2c8cp-112f, 0x1.88f344p-73f, 0.0f,
     0x1.60dc8p-11f, 0x1.6339b2p-35f, 0x1.8c1898p-89f, 0x1.6c01a2p-76f,
     0x1.72f18ep-46f, 0.0f, 0.0f, 0x1.173246p-46f, 0x1.563f34p-122f, 0.0f, 0.0f,
     0x1.155ad4p-38f, 0.0f, 0x1.5fefd8p-63f, 0x1.6d579p-85f, 0x1.c66712p-71f, 0.0f,
     0x1.f1956ap-38f, 0x1.6dd3aep-55f, 0.0f, 0x1.e8ab1ep-39f, 0.0f, 0.0f, 0.0f,
     0x1.93f7a6p-121f, 0x1.7683b4p-71f, 0x1.8b8cdep-42f, 0x1.8c6b64p-77f, 0.0f,
     0x1.868762p-77f, 0x1.f8dd68p-96f, 0x1.4cf68ap-47f, 0x1.f7e64ap-1f, 0.0f,
     0x1.c72052p-45f, 0x1.d274a8p-3f, 0.0f, 0.0f, 0x1.3088f2p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8112b6p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8c92cp-80f, 0.0f, 0.0f,
     0x1.56e5ecp-58f, 0.0f, 0x1.4653e4p-100f, 0x1.62288ap-76f, 0x1.be3bc2p-35f,
     0x1.a4f7ccp-61f, 0x1.3cb8cp-21f, 0.0f, 0.0f, 0x1.5b7526p-58f, 0x1.5a8d1ap-114f,
     0.0f, 0x1.ef0694p-104f, 0x1.9758cap-119f, 0.0f, 0x1.15bebep-12f, 0.0f,
     0x1.a446cep-12f, 0x1.87bcd4p-81f, 0x1.f23bp-88f, 0.0f, 0x1.ad4074p-45f,
     0x1.8c283p-14f, 0.0f, 0.0f, 0x1.2bf81cp-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8bbecp-49f, 0.0f, 0x1.a51372p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ecf2p-10f,
     0x1.af2bbp-16f, 0x1.e0c548p-17f, 0.0f, 0x1.47390cp-32f, 0.0f, 0.0f,
     0x1.cb7c42p-110f, 0x1.8972dp-57f, 0x1.b023f6p-37f, 0.0f, 0x1.dfdc7cp-31f, 0.0f,
     0.0f, 0.0f, 0x1.e2215ep-16f, 0.0f, 0x1.fc326ep-34f, 0x1.f7e9fep-38f, 0.0f, 0.0f,
     0x1.42e938p-125f, 0x1.c8b726p-29f, 0.0f, 0x1.2b64f6p-83f, 0.0f, 0.0f,
     0x1.c7453cp-54f, 0.0f, 0.0f, 0x1.d4bf34p-99f, 0x1.70c382p-26f, 0.0f,
     0x1.f58cc8p-46f, 0x1.70d912p-125f, 0x1.ef0b0cp-73f, 0.0f, 0x1.2f105ap-5f, 0.0f,
     0.0f, 0x1.ff5388p-113f, 0.0f, 0x1.3aca04p-54f, 0x1.53bde2p-10f, 0.0f, 0.0f,
     0x1.327c52p-17f, 0.0f, 0x1.02500ep-53f, 0x1.04bb6ap-63f, 0.0f, 0x1.0412e2p-72f,
     0.0f, 0x1.86a426p-78f, 0x1.c1ecb6p-66f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0x1.aa3d3p-106f, 0x1.fd44c8p-31f, 0x1.0e6b7ap-40f, 0.0f,
     0x1.601058p-125f, 0.0f, 0x1.7f5094p-42f, 0.0f, 0x1.9fbc84p-44f, 0x1.99b9a6p-77f,
     0.0f, 0.0f, 0x1.b20e8ap-15f, 0.0f, 0.0f, 0.0f, 0x1.3d06e6p-63f, 0.0f,
     0x1.8d83f6p-88f, 0x1.5423c8p-30f, 0x1.881b2p-5f, 0.0f, 0x1.793672p-66f, 0.0f,
     0x1.8f9ec4p-17f, 0x1.d827d4p-18f, 0x1.4714ccp-8f, 0x1.8d61a2p-23f, 0.0f, 0.0f,
     0x1.e47b12p-48f, 0.0f, 0x1.ba832ep-51f, 0x1.866022p-53f, 0x1.9a22bep-25f,
     0x1.0d9942p-111f, 0x1.170cbcp-96f, 0.0f, 0x1.3b9774p-97f, 0x1.69ba54p-104f,
     0x1.013c4cp-106f, 0.0f, 0x1.fcf4aep-45f, 0.0f, 0.0f, 0x1.c1d2a8p-12f,
     0x1.5406d2p-84f, 0x1.551a94p-36f, 0.0f, 0x1.6d5d76p-101f, 0.0f, 0.0f,
     0x1.f43376p-115f, 0x1.fcaad6p-19f, 0.0f, 0x1.51f5fcp-91f, 0.0f, 0.0f,
     0x1.0795bp-65f, 0.0f, 0x1.857b0ap-91f, 0x1.59438ep-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.247688p-6f, 0.0f, 0.0f, 0.0f, 0x1.b51846p-10f, 0x1.303536p-27f, 0.0f, 0.0f,
     0.0f, 0x1.ceec6p-11f, 0x1.4d766ep-49f, 0.0f, 0x1.c1df5ap-72f, 0.0f, 0.0f,
     0x1.eb04dp-24f, 0.0f, 0x1.7469f2p-108f, 0x1.d7035ap-81f, 0x1.1ecbecp-47f, 0.0f,
     0.0f, 0.0f, 0x1.79344p-93f, 0.0f, 0.0f, 0x1.89815p-59f, 0x1.d28dfep-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a16896p-29f, 0x1.2cb0aap-88f, 0.0f, 0.0f, 0.0f,
     0x1.00e156p-120f, 0x1.36b2eap-88f, 0x1.af6b48p-8f, 0.0f, 0.0f, 0.0f,
     0x1.f19bc6p-86f, 0.0f, 0x1.0575ccp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13d65ap-40f, 0x1.9c8b2ep-19f, 0x1.f6a004p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.032e6cp-79f, 0x1.b1ff1cp-71f, 0.0f, 0.0f, 0x1.558176p-56f, 0.0f, 0.0f,
     0x1.6de07ap-47f, 0.0f, 0x1.ec22aep-96f, 0.0f, 0.0f, 0.0f, 0x1.444c08p-107f, 0.0f,
     0.0f, 0x1.53c1bcp-80f, 0x1.da15f2p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.747d7ep-58f,
     0x1.4618b4p-122f, 0x1.220d04p-119f, 0x1.284bc8p-123f, 0x1.8c7032p-2f,
     0x1.0d9ffap-50f, 0x1.7f8d5ap-64f, 0x1.14ab5ep-23f, 0x1.0dcfccp-6f,
     0x1.de018cp-23f, 0.0f, 0.0f, 0x1.0bce52p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09408p-38f, 0x1.33c91cp-42f, 0x1.1c7bf2p-25f, 0x1.448024p-73f,
     0x1.26dd26p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bf80cp-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.05e468p-90f, 0.0f, 0x1.62fecap-4f, 0x1.ad052ap-91f, 0x1.097646p-16f,
     0x1.b2fe3cp-63f, 0.0f, 0x1.7ac29ap-12f, 0x1.5d6c56p-71f, 0.0f, 0.0f, 0x1p0f,
     0x1.3cd0a4p-76f, 0x1.90d636p-49f, 0x1.9e12d6p-53f, 0.0f, 0x1.cd5bbap-79f, 0.0f,
     0x1.9e3732p-121f, 0x1.bf40aep-55f, 0x1.4bb84ep-30f, 0.0f, 0x1.be7928p-120f,
     0x1.6332bp-25f, 0x1.48e92cp-108f, 0x1.55a1e2p-112f, 0x1.e676eap-106f, 0.0f, 0.0f,
     0.0f, 0x1.d9d94ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bdd1p-121f, 0x1.6e5f56p-2f,
     0.0f, 0x1.34517p-89f, 0x1.9cd756p-14f, 0.0f, 0.0f, 0x1.5ebd2ap-122f,
     0x1.5ab8aep-64f, 0.0f, 0.0f, 0x1.dec91cp-64f, 0.0f, 0x1.9f7a9cp-99f,
     0x1.520f78p-123f, 0.0f, 0.0f, 0.0f, 0x1.eb38c4p-87f, 0.0f, 0.0f,
     0x1.c63624p-106f, 0x1.b5ffb8p-94f, 0x1.d12a6cp-100f, 0x1.10db96p-112f, 0.0f,
     0x1.749beap-60f, 0x1.11da9p-6f, 0x1.664528p-85f, 0x1.5ed71ep-119f, 0.0f, 0.0f,
     0x1.69a89cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f03b86p-63f, 0.0f, 0x1.6f5bc4p-49f,
     0.0f, 0x1.1effc4p-3f, 0x1.cc524ep-3f, 0x1.aa3ce8p-91f, 0x1.ff7bdcp-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59859ep-16f, 0.0f, 0x1.ebba18p-71f,
     0x1.07e00ap-118f, 0x1.40609p-13f, 0.0f, 0.0f, 0.0f, 0x1.db962cp-112f,
     0x1.7d2dbp-2f, 0x1.72a558p-20f, 0x1.27b6aap-16f, 0.0f, 0.0f, 0x1.f74a62p-12f,
     0x1.405cc6p-19f, 0x1.85025ap-116f, 0x1.fe7ebp-25f, 0x1.09266ep-36f, 0.0f,
     0x1.8f21dcp-109f, 0.0f, 0.0f, 0.0f, 0x1.d0ea9p-92f, 0.0f, 0.0f, 0x1.7de5eap-60f,
     0.0f, 0x1.af4b32p-65f, 0.0f, 0x1.003e8cp-117f, 0.0f, 0x1.fef1a2p-42f,
     0x1.6315b8p-86f, 0x1.dce604p-115f, 0.0f, 0x1.1aaf98p-9f, 0.0f, 0.0f, 0.0f,
     0x1.ffe9e4p-28f, 0x1.06c24ap-39f, 0.0f, 0.0f, 0x1.f3d35cp-60f, 0x1.8083bcp-71f,
     0.0f, 0x1.f267c6p-106f, 0.0f, 0x1.ea7278p-90f, 0x1.dd5512p-22f, 0.0f,
     0x1.c22cd2p-106f, 0x1.3db962p-100f, 0.0f, 0x1.41c10ep-102f, 0x1.97cb4ep-27f,
     0.0f, 0x1.d40d0ep-77f, 0.0f, 0x1.fecc28p-12f, 0.0f, 0x1.a7bc2cp-101f, 0.0f,
     0x1.c8f6ap-33f, 0x1.d49d86p-15f, 0x1.bd7c76p-42f, 0.0f, 0x1.66dcdep-69f, 0.0f,
     0.0f, 0.0f, 0x1.0842ccp-90f, 0.0f, 0x1.ef6da8p-76f, 0.0f, 0x1.261258p-114f, 0.0f,
     0x1.6c7842p-25f, 0x1.700ff2p-82f, 0.0f, 0x1.0c2262p-72f, 0.0f, 0.0f, 0.0f,
     0x1.5772bcp-105f, 0.0f, 0.0f, 0x1.cdebecp-104f, 0x1.dd6aa2p-38f, 0.0f,
     0x1.bcbd28p-74f, 0x1.6a24d2p-39f, 0.0f, 0x1.eae79cp-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.92736cp-47f, 0.0f, 0x1.366b8ap-77f, 0x1.67f8c6p-21f, 0.0f, 0.0f,
     0x1.a3fd18p-37f, 0.0f, 0x1.ac351cp-123f, 0.0f, 0x1.bc1bf6p-66f, 0.0f,
     0x1.40c89cp-28f, 0x1.857e6ap-104f, 0.0f, 0.0f, 0x1.c86bbap-78f, 0x1.74254ep-98f,
     0.0f, 0.0f, 0x1.7ca496p-54f, 0x1.080da8p-65f, 0x1.30e16ep-5f, 0x1.0ff50ep-56f,
     0x1.68a4dap-32f, 0.0f, 0.0f, 0x1.556e62p-95f, 0x1.b4000ep-69f, 0.0f, 0.0f, 0.0f,
     0x1.b4b93ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d57a6p-101f, 0x1.2d32fp-77f, 0.0f,
     0x1.23587cp-101f, 0x1.a5423cp-8f, 0.0f, 0x1.c5751cp-68f, 0.0f, 0.0f,
     0x1.c139dep-82f, 0.0f, 0x1.6b5316p-31f, 0.0f, 0.0f, 0x1.8d484cp-73f, 0.0f, 0.0f,
     0x1.ca9a7ap-41f, 0x1.94cfaep-88f, 0.0f, 0x1.b5941cp-57f, 0x1.56c6fcp-10f,
     0x1.adcc46p-110f, 0x1.036a9p-119f, 0x1.49f3e8p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.654f58p-4f, 0.0f, 0x1.9ef226p-50f, 0.0f, 0x1.20ab98p-111f, 0x1.45e448p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.01a956p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e61808p-108f, 0x1.ab608ep-87f, 0x1.b9d5cep-72f, 0x1.fa0b68p-18f,
     0x1.7db54p-46f, 0.0f, 0.0f, 0.0f, 0x1.4828c4p-112f, 0x1.72fd68p-51f, 0.0f,
     0x1.d460dap-68f, 0x1.e3f9a8p-10f, 0.0f, 0.0f, 0x1.4a664p-109f, 0x1.3d8468p-60f,
     0x1.04c642p-91f, 0x1.2ecdd4p-25f, 0.0f, 0.0f, 0x1.587a2ep-104f, 0x1.67b6f2p-105f,
     0x1.5e1e36p-13f, 0x1.462f28p-1f, 0x1.15951ep-32f, 0x1.165da8p-98f, 0.0f, 0.0f,
     0.0f, 0x1.cf209cp-73f, 0x1.f64a68p-17f, 0.0f, 0.0f, 0.0f, 0x1.ae055cp-48f,
     0x1.10ed4cp-42f, 0x1.cd7e2cp-30f, 0.0f, 0.0f, 0x1.13a33p-3f, 0.0f, 0.0f,
     0x1.b4be3ap-51f, 0.0f, 0x1.075d66p-40f, 0x1.3c9216p-93f, 0x1.0d233ep-49f,
     0x1.46be4cp-29f, 0x1.408f8ap-104f, 0.0f, 0x1.56f4dcp-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8c7f4p-104f, 0.0f, 0x1.d2195ep-80f, 0.0f, 0x1.81a306p-27f, 0x1.f7a708p-103f,
     0.0f, 0x1.d3f042p-4f, 0x1.c10b02p-91f, 0.0f, 0x1.cd3888p-32f, 0x1.5a3678p-37f,
     0.0f, 0x1.b8fef6p-105f, 0x1.4e3f56p-124f, 0.0f, 0.0f, 0x1.a85236p-11f,
     0x1.2afaa8p-117f, 0x1.e130ecp-41f, 0x1.95c716p-94f, 0x1.47cbdap-45f, 0.0f, 0.0f,
     0x1.01d9ecp-13f, 0x1.27475ap-87f, 0x1.c04bf2p-102f, 0x1.b67aaap-37f,
     0x1.4d6582p-34f, 0x1.1a4654p-44f, 0.0f, 0x1.fb6cfep-23f, 0x1.42460ep-111f,
     0x1.90e946p-92f, 0.0f, 0.0f, 0.0f, 0x1.cd29ecp-36f, 0x1.f16922p-48f,
     0x1.55938ep-7f, 0x1.ea3a2ep-69f, 0x1.1dae9ap-26f, 0x1.87fa0ep-14f,
     0x1.c99bf2p-124f, 0x1.c261dp-14f, 0x1.d85c7ap-42f, 0x1.8c625p-66f, 0.0f,
     0x1.793da8p-101f, 0x1.e520f4p-55f, 0x1.250578p-40f, 0.0f, 0x1.caf512p-27f, 0.0f,
     0x1.ca671ep-1f, 0x1.6606ecp-44f, 0x1.946954p-92f, 0x1.b2a634p-50f, 0x1.c117dp-9f,
     0x1.ff9e26p-52f, 0x1.cd856ap-42f, 0x1.b757f2p-73f, 0x1.fcb8fap-6f, 0.0f, 0.0f,
     0x1.14f04cp-2f, 0.0f, 0x1.0e84e6p-56f, 0x1.840382p-118f, 0x1.f259f8p-6f,
     0x1.4b3d14p-20f, 0.0f, 0.0f, 0.0f, 0x1.924226p-21f, 0x1.282cf8p-27f,
     0x1.5de676p-108f, 0.0f, 0x1.1a12e8p-60f, 0.0f, 0.0f, 0x1.0432cp-38f, 0.0f, 0.0f,
     0x1.2dc802p-106f, 0x1.0174dp-15f, 0x1.4cffd6p-65f, 0.0f, 0x1.9cff0ap-93f, 0.0f,
     0.0f, 0x1.d250bp-89f, 0x1.20585ap-33f, 0x1.4201p-67f, 0.0f, 0x1.bf5aeep-17f,
     0.0f, 0x1.95415ap-108f, 0.0f, 0.0f, 0x1.01e192p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d12468p-79f, 0x1.d30afcp-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.182bf4p-102f, 0.0f, 0x1.3dffaep-63f, 0x1.d8f72ap-110f,
     0x1.396f42p-32f, 0.0f, 0x1.bf4b7ap-125f, 0.0f, 0x1.103d62p-124f, 0x1.49ad1cp-32f,
     0x1.bd72aap-3f, 0x1.609b36p-63f, 0.0f, 0x1.e8f402p-114f, 0.0f, 0.0f,
     0x1.a6cdbp-75f, 0.0f, 0.0f, 0x1.2c743ap-50f, 0x1.46a556p-65f, 0.0f,
     0x1.a917bap-96f, 0x1.43061p-42f, 0.0f, 0x1.5fe59p-54f, 0x1.151e8ep-112f, 0.0f,
     0x1.1ee862p-68f, 0x1.082f84p-113f, 0x1.dd9e48p-24f, 0x1.905594p-81f,
     0x1.933188p-106f, 0x1.feab8ep-121f, 0.0f, 0x1.05847p-16f, 0.0f, 0.0f,
     0x1.460f44p-7f, 0.0f, 0x1.26b932p-113f, 0.0f, 0.0f, 0x1.abd0e8p-29f,
     0x1.6fbddp-6f, 0x1.78c58p-87f, 0.0f, 0x1.3c12ep-9f, 0x1.011624p-100f,
     0x1.1f0ep-36f, 0x1.e9cac2p-46f, 0.0f, 0.0f, 0.0f, 0x1.0be66ep-4f, 0.0f,
     0x1.f9795p-75f, 0.0f, 0x1.c7c836p-93f, 0.0f, 0.0f, 0.0f, 0x1.8af5b2p-31f, 0.0f,
     0.0f, 0x1.616e7ep-67f, 0x1.a67bep-70f, 0x1.1d7e58p-30f, 0.0f, 0.0f,
     0x1.7fa86ep-35f, 0x1.b40c5p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2bf146p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a928f6p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d8a6p-50f, 0x1.ee741ap-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9c19dep-119f, 0.0f, 0x1.4bbfd8p-67f, 0.0f, 0.0f,
     0x1.745e5p-19f, 0.0f, 0x1.7f3b66p-70f, 0.0f, 0.0f, 0x1.3d3072p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.64a43cp-49f, 0x1.27bffap-39f, 0x1.b881bp-23f,
     0x1.208de8p-90f, 0.0f, 0x1.fa4f0ep-87f, 0x1.96fbd6p-106f, 0x1.5832f4p-98f,
     0x1.79effep-70f, 0.0f, 0.0f, 0.0f, 0x1.6f4824p-105f, 0x1.878d9ep-62f, 0.0f,
     0x1.f17a3ap-108f, 0x1.47470ep-36f, 0x1.0b36d8p-29f, 0x1.334f76p-3f, 0.0f,
     0x1.53c086p-100f, 0x1.2fa13cp-71f, 0.0f, 0.0f, 0.0f, 0x1.f33758p-71f, 0.0f, 0.0f,
     0x1.56ba8ep-69f, 0x1.0f2d68p-12f, 0.0f, 0x1.8e83dcp-18f, 0.0f, 0x1.4280f4p-7f,
     0.0f, 0.0f, 0x1.0652d6p-56f, 0x1.87675ep-116f, 0x1.4c4146p-38f, 0x1.c151f6p-87f,
     0.0f, 0x1.d04282p-39f, 0x1.e6859cp-8f, 0x1.d43336p-55f, 0.0f, 0x1.6c50f8p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7f7p-29f, 0.0f, 0.0f,
     0x1.453aeep-93f, 0x1.08748p-101f, 0.0f, 0x1.acb3aep-3f, 0.0f, 0x1.a3191ap-72f,
     0.0f, 0.0f, 0x1.ca914ep-122f, 0x1.54eccep-47f, 0.0f, 0x1.e0ebe6p-40f,
     0x1.595ae6p-23f, 0x1.8ca0c4p-24f, 0x1.2350c4p-123f, 0x1.96ad28p-77f,
     0x1.9755b6p-118f, 0x1.1cf546p-106f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.7ddc06p-72f, 0.0f, 0x1.4cda48p-110f, 0x1.a7d61p-9f, 0x1.06f616p-53f, 0.0f,
     0.0f, 0.0f, 0x1.40411cp-85f, 0.0f, 0x1.95831p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68bbd8p-109f, 0x1.7d4d98p-21f, 0.0f, 0x1.6b5f2ep-18f, 0x1.cae2d6p-5f, 0.0f,
     0.0f, 0x1.16b548p-125f, 0x1.e47e98p-70f, 0x1.05377ep-58f, 0x1.12872p-36f, 0.0f,
     0.0f, 0.0f, 0x1.8ed12cp-39f, 0x1.56e1cp-98f, 0.0f, 0.0f, 0x1.f50034p-67f,
     0x1.cbe1fcp-21f, 0x1.cb85f8p-114f, 0x1.fcdee2p-97f, 0.0f, 0x1.ec593p-34f,
     0x1.0290cap-43f, 0.0f, 0x1.2a249p-57f, 0x1.dacc68p-53f, 0.0f, 0x1p0f,
     0x1.2bd41cp-95f, 0x1.eec80ep-117f, 0x1.47b73ap-11f, 0.0f, 0x1.eabc22p-34f, 0.0f,
     0.0f, 0x1.6b1668p-40f, 0x1.a423a2p-10f, 0.0f, 0x1.e65ebp-6f, 0.0f,
     0x1.a6e178p-75f, 0x1.d61ea2p-26f, 0.0f, 0x1.a89f6cp-73f, 0x1.81c366p-1f, 0.0f,
     0x1.9882f2p-8f, 0.0f, 0x1.994784p-96f, 0x1.cad512p-81f, 0.0f, 0.0f,
     0x1.e00ba8p-65f, 0.0f, 0x1.335fe8p-110f, 0.0f, 0.0f, 0x1.0b81e6p-97f,
     0x1.c50838p-85f, 0x1.fac1a8p-53f, 0.0f, 0x1.034bc4p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.abaf1p-88f, 0x1.c43daap-49f, 0.0f, 0x1.f7cbcp-77f, 0.0f, 0x1.0041cp-5f,
     0.0f, 0.0f, 0x1.d28f7cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88b67p-91f,
     0x1.68c116p-20f, 0x1.e3e592p-115f, 0x1.cf8eacp-60f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.42a14ep-89f, 0.0f, 0x1.228124p-95f, 0x1.b7fe7cp-117f, 0x1.b2d1f4p-58f, 0.0f,
     0.0f, 0.0f, 0x1.d5bc06p-90f, 0.0f, 0x1.d69cc8p-105f, 0x1p0f, 0x1.7b822p-26f,
     0.0f, 0.0f, 0x1.626828p-85f, 0.0f, 0.0f, 0x1.d51c08p-6f, 0.0f, 0.0f,
     0x1.f0447ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.265efep-2f, 0.0f, 0.0f,
     0.0f, 0x1.d77368p-33f, 0.0f, 0.0f, 0.0f, 0x1.87515ap-40f, 0x1.648c9p-82f, 0.0f,
     0x1.d19a8ep-114f, 0.0f, 0x1.cd58bap-22f, 0.0f, 0.0f, 0x1.9fb814p-90f, 0.0f,
     0x1.91777ap-61f, 0.0f, 0x1.f1d21ep-1f, 0x1.a27612p-102f, 0.0f, 0.0f,
     0x1.b4f73ap-82f, 0.0f, 0x1.809f76p-74f, 0.0f, 0x1.b6f396p-29f, 0.0f,
     0x1.5087e4p-25f, 0.0f, 0x1.9bf9e2p-26f, 0x1.a4c3f8p-67f, 0x1.87f62cp-103f,
     0x1.474e06p-115f, 0.0f, 0x1.9a115p-59f, 0x1.b47812p-119f, 0x1.e2162ap-27f,
     0x1.eac858p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ecadep-90f, 0.0f, 0x1.0e8dc2p-97f
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
            tmp2 = Sleef_finz_powf4_u10kvx(tmp0, tmp1);
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
    printf("Sleef_finz_powf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_powf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
