/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmodf4_kvx.c --function Sleef_finz_fmodf4_kvx \
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
     0.0f, 0x1.a066bcp-22f, 0x1.9b3146p-6f, 0x1.5d70fcp-67f, 0.0f, 0x1.6fcc52p-5f,
     0x1.3c040ep-115f, 0.0f, 0.0f, 0.0f, 0x1.07cb6ep-27f, 0x1.4df7eep-33f,
     0x1.464c54p-3f, 0x1.90ca94p-36f, 0x1.1b239ap-73f, 0x1.6fee28p-108f, 0.0f,
     0x1.fb87f2p-16f, 0.0f, 0x1.4e1b44p-68f, 0x1.73d6dep-111f, 0.0f, 0x1.456642p-42f,
     0.0f, 0.0f, 0x1.1ff326p-94f, 0x1.969866p-6f, 0x1.a62f6p-65f, 0.0f,
     0x1.539b1ap-53f, 0.0f, 0.0f, 0.0f, 0x1.54ee82p-83f, 0.0f, 0x1.922fa4p-45f, 0.0f,
     0.0f, 0.0f, 0x1.9f844ep-22f, 0x1.2f2cacp-92f, 0x1.71de28p-119f, 0x1.ba2c46p-19f,
     0.0f, 0.0f, 0x1.a17d92p-63f, 0.0f, 0.0f, 0x1.b9c638p-16f, 0x1.0969b4p-24f,
     0x1.548cf4p-73f, 0.0f, 0x1.8000ap-62f, 0.0f, 0x1.40dd5p-18f, 0x1.7debc8p-108f,
     0.0f, 0.0f, 0x1.18bd2p-8f, 0x1.a96504p-52f, 0.0f, 0x1.143dc2p-56f, 0.0f,
     0x1.5bd58ep-110f, 0x1.cda5cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db193ep-39f,
     0x1.b02f26p-34f, 0.0f, 0.0f, 0x1.bc8b4ep-94f, 0x1.385598p-119f, 0.0f, 0.0f,
     0x1.e9c456p-118f, 0x1.875854p-54f, 0.0f, 0.0f, 0x1.15a18ap-48f, 0.0f,
     0x1.2f736ep-102f, 0.0f, 0x1.70e03cp-121f, 0x1.4d5b32p-66f, 0.0f,
     0x1.8128aep-122f, 0.0f, 0x1.b7ec82p-49f, 0.0f, 0x1.391288p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b74e58p-17f, 0.0f, 0x1.1d5edcp-65f, 0.0f, 0x1.4a672p-52f,
     0x1.6249ccp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.322842p-27f, 0x1.5df018p-92f,
     0x1.951deep-39f, 0x1.f90506p-25f, 0x1.37159cp-20f, 0x1.022158p-28f,
     0x1.ac3fcp-33f, 0x1.b986fap-88f, 0x1.26ea6p-60f, 0.0f, 0x1.6b1ae8p-68f,
     0x1.41e56p-26f, 0x1.d87fdp-63f, 0x1.e6568cp-72f, 0.0f, 0x1.57d4ecp-97f,
     0x1.a95248p-104f, 0.0f, 0.0f, 0x1.a40068p-102f, 0x1.c97614p-86f, 0.0f,
     0x1.b2bd68p-16f, 0.0f, 0.0f, 0x1.fc573cp-80f, 0x1.c23ecap-48f, 0.0f, 0.0f,
     0x1.ac3fd2p-100f, 0.0f, 0x1.3371fep-87f, 0.0f, 0x1.e5189cp-18f, 0.0f,
     0x1.20256ep-29f, 0x1.cbd9ap-13f, 0.0f, 0x1.9e9efep-126f, 0.0f, 0.0f,
     0x1.a3a414p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9960a4p-123f, 0x1.f8a592p-10f, 0x1.60c384p-102f, 0x1.07da64p-116f, 0.0f,
     0x1.6e6922p-100f, 0.0f, 0.0f, 0x1.2d03bep-125f, 0.0f, 0.0f, 0x1.f4607ap-63f,
     0x1.2f4af4p-116f, 0x1.40eb7cp-79f, 0.0f, 0x1.e4c7c4p-83f, 0x1.61ee1p-117f,
     0x1.38fd18p-78f, 0x1.5d6fbcp-63f, 0x1.6e0f3cp-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5bb93cp-88f, 0.0f, 0.0f, 0.0f, 0x1.303298p-93f, 0.0f, 0x1.cce4cap-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a72e2p-8f, 0x1.775d18p-65f, 0x1.a973e4p-112f,
     0x1.e4de74p-2f, 0.0f, 0.0f, 0x1.656eaep-90f, 0.0f, 0x1.ebfdeep-10f, 0.0f, 0.0f,
     0x1.3d76b6p-40f, 0.0f, 0.0f, 0x1.86ec8ep-97f, 0x1.876a58p-89f, 0.0f,
     0x1.ae34b6p-7f, 0.0f, 0x1.54cbf2p-96f, 0x1.1e2428p-15f, 0.0f, 0.0f,
     0x1.5f96b8p-59f, 0.0f, 0x1.9f268p-119f, 0x1.503666p-58f, 0.0f, 0.0f, 0.0f,
     0x1.94b584p-63f, 0.0f, 0x1.86c24ap-22f, 0.0f, 0.0f, 0x1.c4bca6p-109f,
     0x1.360b86p-75f, 0x1.112c84p-32f, 0x1.921242p-93f, 0x1.2e0ffap-106f, 0.0f,
     0x1.ff7c14p-124f, 0x1.1c1296p-80f, 0x1.973f6p-44f, 0x1.755948p-36f, 0.0f, 0.0f,
     0x1.356652p-36f, 0.0f, 0x1.6d11f4p-68f, 0.0f, 0x1.b3758ep-97f, 0x1.1fde34p-1f,
     0x1.dfddaep-27f, 0x1.339916p-23f, 0.0f, 0.0f, 0x1.30e9cp-120f, 0x1.8cb522p-20f,
     0.0f, 0x1.4e66ccp-64f, 0.0f, 0.0f, 0x1.fb1e78p-2f, 0.0f, 0.0f, 0x1.16c044p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0896dp-124f, 0.0f, 0x1.080192p-78f, 0x1.97b8fcp-82f,
     0x1.2d6a3ap-69f, 0.0f, 0.0f, 0.0f, 0x1.144c3ep-79f, 0.0f, 0x1.4247b6p-4f,
     0x1.4d2a32p-101f, 0.0f, 0.0f, 0x1.b863a4p-69f, 0.0f, 0.0f, 0.0f, 0x1.4fddbap-65f,
     0.0f, 0x1.57378ap-67f, 0x1.437adap-38f, 0x1.a567ecp-29f, 0x1.275058p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5990fcp-122f, 0.0f, 0x1.8f4d2ap-65f, 0.0f, 0.0f,
     0x1.ca8bep-14f, 0x1.713342p-82f, 0.0f, 0x1.d54cbap-54f, 0.0f, 0.0f,
     0x1.a29e2ap-27f, 0.0f, 0.0f, 0x1.5318e8p-20f, 0x1.df3168p-8f, 0x1.db21c8p-73f,
     0x1.1d0756p-120f, 0.0f, 0x1.686aa6p-50f, 0x1.43a3d6p-91f, 0.0f, 0x1.579638p-46f,
     0.0f, 0x1.e20a0cp-33f, 0.0f, 0x1.a9af7cp-32f, 0.0f, 0.0f, 0x1.ea20bp-96f, 0.0f,
     0.0f, 0.0f, 0x1.294d7ap-35f, 0x1.e9ba4ep-71f, 0.0f, 0.0f, 0.0f, 0x1.e39f7p-66f,
     0x1.7aeaaap-20f, 0.0f, 0x1.761428p-25f, 0x1.ac83dep-101f, 0.0f, 0x1.1fb9acp-86f,
     0x1.23820ap-107f, 0x1.b9bd76p-99f, 0x1.819946p-12f, 0.0f, 0.0f, 0x1.aa8e02p-32f,
     0x1.526748p-109f, 0.0f, 0.0f, 0x1.5cefa2p-42f, 0.0f, 0x1.f75f06p-101f,
     0x1.aa332ap-73f, 0x1.fe0154p-7f, 0x1.d65bdap-113f, 0x1.5aac88p-39f, 0.0f, 0.0f,
     0x1.8cf34p-111f, 0.0f, 0.0f, 0.0f, 0x1.8d7b02p-125f, 0x1.ac6d8ep-15f, 0.0f, 0.0f,
     0.0f, 0x1.57e35p-108f, 0x1.29bbaap-115f, 0x1.b78e88p-110f, 0.0f, 0x1.a437c4p-45f,
     0x1.4974b4p-120f, 0.0f, 0x1.deac1cp-110f, 0x1.45e4e4p-27f, 0x1.d65b4ep-74f,
     0x1.92ac58p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31cd62p-90f,
     0x1.d87078p-10f, 0.0f, 0x1.fc81dep-81f, 0.0f, 0.0f, 0x1.c9927ap-2f,
     0x1.499aap-36f, 0x1p0f, 0x1.d91aa6p-117f, 0.0f, 0x1.0b5e6ep-31f, 0.0f, 0.0f,
     0x1.f0d06p-115f, 0x1.d8d07ap-91f, 0.0f, 0.0f, 0.0f, 0x1.b509c2p-91f,
     0x1.79ad74p-100f, 0.0f, 0x1.3e0eaap-71f, 0x1.6234b2p-93f, 0x1.567da8p-14f, 0.0f,
     0x1.dc6fep-28f, 0.0f, 0x1.8f0f64p-88f, 0.0f, 0x1.874fe2p-123f, 0.0f, 0.0f,
     0x1.608c6cp-126f, 0.0f, 0x1.7a48b4p-84f, 0x1.52009p-9f, 0x1.02c998p-116f, 0.0f,
     0.0f, 0x1.7285e2p-39f, 0x1.90cb9ap-91f, 0x1.dc82aap-119f, 0.0f, 0x1.5643cep-19f,
     0x1.bf56aep-33f, 0.0f, 0x1.3ad17ep-27f, 0.0f, 0.0f, 0.0f, 0x1.0131fcp-108f,
     0x1.4bccdp-1f, 0x1.6ccad8p-22f, 0.0f, 0x1.1b034ap-95f, 0x1.63e6a4p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.568afap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.971608p-110f, 0.0f, 0.0f, 0x1.4e547p-53f, 0.0f, 0x1.f1dbfcp-15f,
     0x1.5a13a2p-107f, 0x1.fe642ap-60f, 0x1.d954e8p-27f, 0x1.29e332p-99f, 0.0f, 0.0f,
     0x1.92763ep-87f, 0.0f, 0.0f, 0x1.8c918p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2e594cp-16f, 0.0f, 0x1.e01dd8p-96f, 0x1.45db6cp-11f, 0.0f, 0.0f,
     0x1.21c75ap-40f, 0.0f, 0x1.b8937p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b6be4p-64f, 0.0f, 0x1.51c174p-77f, 0x1.7cb602p-111f, 0.0f, 0x1.1f9eeap-120f,
     0.0f, 0x1.569814p-23f, 0x1.298b82p-51f, 0x1.66c7fap-15f, 0x1.cfced6p-42f,
     0x1.f43f54p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.773abap-116f, 0x1.df1c2p-3f,
     0x1.dd55dep-81f, 0x1.fb23e8p-25f, 0x1.13ddfep-88f, 0.0f, 0x1.93c3b4p-3f,
     0x1.2340d8p-122f, 0x1.bcfc52p-17f, 0x1.57c624p-30f, 0x1.54e9a6p-124f, 0.0f, 0.0f,
     0x1.cc5b5p-2f, 0x1.a2848p-114f, 0x1.38c7aap-65f, 0x1.e0a3eep-103f, 0.0f,
     0x1.8eaf6cp-117f, 0x1.8229fep-50f, 0.0f, 0x1.2c4282p-79f, 0x1.fa3e78p-45f,
     0x1.60d3p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7140bep-78f, 0.0f, 0.0f, 0.0f,
     0x1.04d1c8p-97f, 0x1.d79cap-96f, 0x1.ed6492p-109f, 0x1.74255ap-123f, 0.0f,
     0x1.8b54b6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd9d2ep-16f, 0x1.f00e7ep-68f, 0.0f,
     0.0f, 0.0f, 0x1.c89e26p-48f, 0x1.4069e2p-36f, 0x1.f49b6p-69f, 0.0f, 0.0f,
     0x1.f4306ep-103f, 0x1.2b2ed2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f179cp-4f,
     0x1.a7a0bap-106f, 0.0f, 0x1.097a1p-34f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab69b6p-66f, 0x1.35424cp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aad23ep-56f, 0.0f,
     0x1.86ca6ep-122f, 0.0f, 0.0f, 0x1.9997c2p-56f, 0.0f, 0x1.89c4cp-12f,
     0x1.e5b4fp-18f, 0.0f, 0.0f, 0x1.a4bc2p-14f, 0.0f, 0.0f, 0x1.98086ap-79f,
     0x1.eed614p-76f, 0.0f, 0x1.51e936p-85f, 0x1.a95cb2p-110f, 0x1.c91026p-35f,
     0x1.e64b84p-46f, 0x1.78cf4ep-67f, 0x1.5d0bb4p-122f, 0x1.277982p-22f, 0.0f,
     0x1.425d52p-4f, 0.0f, 0.0f, 0x1.e5eb7p-60f, 0x1.932c34p-99f, 0x1.d2f096p-35f,
     0x1.d5abeep-98f, 0x1.165976p-1f, 0.0f, 0.0f, 0.0f, 0x1.8edba6p-72f,
     0x1.bee0dap-119f, 0.0f, 0.0f, 0x1.dbefcep-92f, 0x1.6561d6p-108f, 0.0f,
     0x1.0941ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66ba68p-95f, 0x1.e1d914p-27f, 0.0f,
     0x1.889a9cp-72f, 0x1.f787e6p-10f, 0.0f, 0x1.2eef78p-29f, 0.0f, 0.0f,
     0x1.0ebd4p-17f, 0.0f, 0x1.c88f72p-41f, 0x1.9f16a6p-122f, 0.0f, 0.0f,
     0x1.4e63a4p-75f, 0x1.ccdf4ap-83f, 0x1.05336ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b1c24p-95f, 0x1.f20f5cp-103f, 0.0f, 0x1.927dcap-35f, 0.0f, 0.0f,
     0x1.244e58p-42f, 0.0f, 0.0f, 0x1.8d3ad6p-20f, 0.0f, 0x1.641dfp-30f,
     0x1.4f64f6p-121f, 0.0f, 0x1.f81806p-98f, 0.0f, 0.0f, 0x1.db8084p-95f,
     0x1.ec23acp-50f, 0.0f, 0.0f, 0x1.008af2p-84f, 0.0f, 0.0f, 0x1.4599b4p-88f, 0.0f,
     0x1.4d4fc2p-83f, 0x1.eaaceep-8f, 0x1.0ff022p-4f, 0x1.2e114p-67f, 0x1.908186p-50f,
     0.0f, 0x1.4bbbb6p-16f, 0x1.e104f2p-28f, 0.0f, 0x1.98ebe6p-87f, 0.0f,
     0x1.00f104p-52f, 0x1.0ccc5ap-111f, 0.0f, 0x1.764572p-67f, 0.0f, 0.0f, 0.0f,
     0x1.341c18p-75f, 0x1.bd9096p-100f, 0x1.50bd68p-7f, 0x1.1832fep-111f,
     0x1.2ab27ap-102f, 0x1.5dd3cp-54f, 0.0f, 0x1.b8415cp-112f, 0x1.ef8e72p-22f,
     0x1.8df102p-119f, 0x1.0199ecp-9f, 0.0f, 0.0f, 0.0f, 0x1.5946dcp-99f,
     0x1.f4668ep-6f, 0.0f, 0x1.a6e53ep-53f, 0x1.4ba316p-103f, 0x1.7947bep-75f, 0.0f,
     0x1.dc0f52p-122f, 0x1.c71ad6p-15f, 0x1.16075ap-120f, 0.0f, 0x1.1dbc2p-89f,
     0x1.cc10bep-68f, 0.0f, 0x1.32b384p-69f, 0.0f, 0.0f, 0.0f, 0x1.38a4bp-69f,
     0x1.e10a88p-79f, 0x1.d1f4f8p-99f, 0.0f, 0.0f, 0.0f, 0x1.07cd0cp-47f, 0.0f,
     0x1.06808cp-40f, 0x1.7b12f8p-12f, 0x1.d3e1b4p-53f, 0.0f, 0x1.492d56p-30f, 0.0f,
     0.0f, 0x1.416b24p-123f, 0.0f, 0.0f, 0.0f, 0x1.cc629ep-17f, 0.0f,
     0x1.0154aep-112f, 0.0f, 0.0f, 0x1.a30748p-14f, 0.0f, 0.0f, 0.0f, 0x1.4955cap-29f,
     0.0f, 0.0f, 0x1.168978p-30f, 0.0f, 0x1.4e73f6p-45f, 0.0f, 0.0f, 0.0f,
     0x1.eeb802p-58f, 0.0f, 0x1.8e10d4p-18f, 0x1.22badcp-63f, 0x1.4a7742p-126f,
     0x1.581086p-105f, 0x1.de5a7ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39b484p-11f, 0x1.b1c468p-72f, 0x1.ca0b8cp-110f, 0x1.9b59c4p-92f, 0.0f,
     0x1.b794d2p-83f, 0.0f, 0.0f, 0.0f, 0x1.97a034p-121f, 0.0f, 0.0f, 0x1.fb2f1p-112f,
     0.0f, 0x1.f3f6e4p-82f, 0.0f, 0x1.6617fap-87f, 0.0f, 0x1.a6306p-71f,
     0x1.62bca6p-72f, 0x1.15a12ap-48f, 0.0f, 0.0f, 0.0f, 0x1.bc5ae8p-43f, 0.0f, 0.0f,
     0x1.85038cp-29f, 0x1.391526p-108f, 0.0f, 0.0f, 0x1.bc8512p-6f, 0x1.17f7ap-65f,
     0x1.1c9334p-95f, 0x1.aaf7eep-87f, 0x1.7ca018p-110f, 0x1.554872p-34f, 0.0f, 0.0f,
     0x1.097ae2p-110f, 0.0f, 0x1.4886c8p-124f, 0x1.07b6e8p-16f, 0x1.dc8d4ep-102f,
     0x1.c57b3ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63b3c2p-85f, 0x1.d0ceep-23f,
     0x1.e477c8p-66f, 0x1.05eccap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b0386p-117f, 0.0f, 0x1.9a163cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55fd82p-79f, 0.0f, 0.0f, 0x1.98813cp-101f, 0x1.c0517p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ce04ap-83f, 0.0f, 0.0f, 0x1.8241a8p-44f,
     0x1.d4061cp-76f, 0.0f, 0.0f, 0x1.fe8e4p-101f, 0.0f, 0x1.d6adc4p-106f,
     0x1.f99012p-124f, 0.0f, 0x1.ba3a6ep-94f, 0.0f, 0x1.7b9fc6p-62f, 0x1.86c12p-92f,
     0.0f, 0x1.68c8a6p-81f, 0.0f, 0x1.49bc8ap-125f, 0.0f, 0x1.98ba56p-115f, 0.0f,
     0.0f, 0.0f, 0x1.fdca36p-11f, 0x1.d51be2p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81e3e8p-76f, 0.0f, 0x1.44921cp-98f, 0.0f, 0x1.8587e8p-77f, 0.0f, 0.0f,
     0x1.50bd2ap-100f, 0x1.2a8d7ap-59f, 0x1.39adap-2f, 0x1.41cfa2p-22f,
     0x1.f2cd8ap-88f, 0x1.acd90ap-46f, 0x1.09375p-17f, 0.0f, 0x1.8f24d6p-97f, 0.0f,
     0x1.b50302p-102f, 0x1.236534p-22f, 0.0f, 0.0f, 0x1.cbba8p-116f, 0.0f,
     0x1.3cfe48p-76f, 0x1.cd4c5ep-65f, 0x1.bdb198p-74f, 0.0f, 0x1.53ff7cp-62f,
     0x1.f125eep-84f, 0x1.dadc9p-118f, 0x1.7d9224p-61f, 0.0f, 0x1.324698p-34f, 0.0f,
     0x1.40a6d8p-34f, 0.0f, 0.0f, 0x1.24f9c2p-116f, 0x1.1302f4p-40f, 0.0f,
     0x1.a64784p-98f, 0.0f, 0x1.c5e9d4p-67f, 0x1.09e5cp-47f, 0x1.f5a2dep-72f, 0.0f,
     0x1.63bf9ep-87f, 0x1.547134p-37f, 0.0f, 0.0f, 0.0f, 0x1.bc8b58p-100f,
     0x1.04d754p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20f57cp-62f, 0.0f, 0x1.c27f6ap-70f,
     0x1.43af6cp-114f, 0x1.a34b76p-109f, 0.0f, 0.0f, 0.0f, 0x1.7bb3ecp-123f, 0.0f,
     0x1.f4e4bap-114f, 0x1.f10454p-14f, 0.0f, 0.0f, 0.0f, 0x1.ebd8eep-109f,
     0x1.9a0432p-29f, 0.0f, 0x1p0f, 0x1.7c32ep-8f, 0x1.aa6622p-59f, 0x1.9b75a6p-123f,
     0.0f, 0x1.a266dcp-74f, 0x1.93a19cp-111f, 0.0f, 0x1.170d68p-86f, 0x1.13a416p-39f,
     0.0f, 0.0f, 0x1.f6b77ep-7f, 0x1.05f938p-10f, 0.0f, 0.0f, 0x1.5df374p-19f,
     0x1.6c649cp-74f, 0x1.8011dcp-20f, 0x1.4d45aep-111f, 0.0f, 0x1.8c79d8p-120f, 0.0f,
     0.0f, 0x1.5233c4p-103f, 0x1.6047fep-92f, 0.0f, 0.0f, 0x1.9f7b9p-63f,
     0x1.7e0feap-96f, 0.0f, 0.0f, 0.0f, 0x1.b6175ap-33f, 0.0f, 0.0f, 0.0f,
     0x1.8acb7cp-84f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.035a66p-91f, 0x1.a4fe1p-111f, 0x1.9e0fb6p-122f, 0.0f, 0x1.703e8p-47f, 0.0f,
     0.0f, 0.0f, 0x1.87b4bcp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b581aep-46f,
     0x1.d7d74ap-104f, 0.0f, 0x1.0cca7p-57f, 0.0f, 0.0f, 0.0f, 0x1.349144p-109f,
     0x1.6a2668p-95f, 0.0f, 0.0f, 0x1.02f7c6p-20f, 0x1.b61594p-64f, 0x1.bee862p-100f,
     0x1.5d2d32p-79f, 0x1.5ac88ep-119f, 0x1.0de104p-40f, 0.0f, 0x1.334a6ep-56f,
     0x1.d9eed4p-58f, 0.0f, 0x1.e3eaf4p-26f, 0x1.77c96cp-94f, 0x1.e7443cp-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e342ap-71f, 0x1.16cfd6p-114f, 0x1.eed5a6p-55f, 0.0f,
     0x1.a58ce8p-121f, 0x1.140836p-77f, 0x1.e6e182p-71f, 0.0f, 0.0f, 0.0f,
     0x1.d8555ep-43f, 0x1.3a97p-100f, 0.0f, 0x1p0f, 0.0f, 0x1.c8660ap-15f,
     0x1.fe4202p-77f, 0.0f, 0x1.a2dc14p-100f, 0x1.8c5ecp-117f, 0.0f, 0.0f,
     0x1.0c2e4ep-28f, 0x1.df815ap-112f, 0.0f, 0x1.b25062p-77f, 0.0f, 0.0f,
     0x1.93934ep-75f, 0.0f, 0x1.d8091ep-96f, 0x1.d5ffc6p-56f, 0x1.c374dep-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.1394e2p-80f, 0.0f, 0x1.546cfp-84f, 0x1.071118p-19f,
     0.0f, 0.0f, 0x1.65a8fcp-102f, 0.0f, 0.0f, 0x1.2741b2p-101f, 0x1.f6c366p-47f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b50184p-6f, 0.0f, 0x1.39370ep-17f, 0.0f,
     0x1.76ebd8p-2f, 0x1.507c7p-102f, 0x1.61f0c2p-12f, 0.0f, 0x1.f28fap-106f,
     0x1.524d4p-39f, 0x1.2ae0ecp-99f, 0x1.b2acfep-79f, 0x1.efb662p-40f,
     0x1.389e3cp-62f, 0x1.6cc8ap-58f, 0x1.652178p-13f, 0x1.ee14b6p-99f,
     0x1.2e8394p-8f, 0x1.743becp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dda92p-8f, 0.0f,
     0.0f, 0x1.6f4738p-13f, 0.0f, 0.0f, 0.0f, 0x1.d970e4p-97f, 0x1.48a046p-6f, 0.0f,
     0x1.f8c2dap-82f, 0.0f, 0x1.702796p-83f, 0x1.24ab5ap-69f, 0x1.3ef632p-122f,
     0x1.30dbdcp-62f, 0x1.ab8926p-31f, 0x1.e6ab48p-29f, 0.0f, 0.0f, 0.0f,
     0x1.5b548ap-54f, 0x1.6a2848p-31f, 0x1.4f209cp-64f, 0x1.c9aa78p-82f, 0.0f, 0.0f,
     0.0f, 0x1.3fbc2cp-51f, 0.0f, 0x1.c8a38ep-36f, 0.0f, 0.0f, 0.0f, 0x1.7fdbe2p-42f,
     0x1.844a4ep-1f, 0x1.164cb8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7fb4d4p-46f, 0.0f, 0.0f, 0x1.9d7872p-69f, 0.0f, 0x1.784c24p-88f,
     0x1.5763d6p-66f, 0.0f, 0x1.a9dd1cp-115f, 0x1.51b51p-22f, 0.0f, 0x1.e5d2dcp-4f,
     0.0f, 0.0f, 0x1.859032p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57ec04p-33f,
     0x1.31c40cp-42f, 0x1.622652p-5f, 0.0f, 0.0f, 0x1.4e214ep-55f, 0.0f,
     0x1.ebe49ap-62f, 0.0f, 0x1.228364p-26f, 0x1.a932aep-12f, 0.0f, 0.0f,
     0x1.fb23cp-89f, 0x1.079264p-101f, 0.0f, 0.0f, 0x1.02df1ep-59f, 0x1.ccaf0cp-86f,
     0x1.5e7ff4p-3f, 0x1.f5f006p-90f, 0x1.301882p-30f, 0x1.5d447p-109f, 0.0f, 0.0f,
     0x1.17b16cp-113f, 0x1.2f71bp-87f, 0.0f, 0x1.452faep-119f, 0.0f, 0.0f, 0.0f,
     0x1.412f9ap-13f, 0x1.c6b7f4p-60f, 0x1.2b3424p-80f, 0x1.954d2ap-41f, 0.0f,
     0x1.6ee1bep-23f, 0x1.707a56p-33f, 0.0f, 0.0f, 0x1.33f5acp-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.906856p-61f, 0.0f, 0x1.1e793ap-3f, 0.0f, 0x1.860d94p-43f,
     0x1.f9a386p-32f, 0.0f, 0x1.631c5cp-16f, 0x1.2e14d8p-123f, 0x1.e0be5p-29f, 0.0f,
     0x1.f8e2ccp-115f, 0.0f, 0.0f, 0x1.0cb6cp-51f, 0x1.deebb2p-57f, 0x1.8e027p-49f,
     0x1.b4c0c4p-44f, 0x1.5f732ep-106f, 0.0f, 0.0f, 0x1.c1c1f4p-62f, 0x1.a6d786p-9f,
     0x1.6fccbap-83f, 0.0f, 0.0f, 0.0f, 0x1.27d84cp-70f, 0x1.48a8ap-69f, 0.0f, 0.0f,
     0x1.7ac57p-74f, 0x1.4dec2cp-81f, 0x1.803c1ep-25f, 0.0f, 0x1.c3515cp-28f,
     0x1.7e0eaap-19f, 0x1.b611ecp-44f, 0.0f, 0x1.48f0cep-59f, 0.0f, 0.0f,
     0x1.66c2f2p-99f, 0x1.b947dcp-6f, 0x1.b9526ep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.72a432p-72f, 0.0f, 0.0f, 0x1.61e8dcp-16f, 0x1.81c87p-91f,
     0x1.e59c52p-115f, 0.0f, 0x1.37c2eap-25f, 0x1.67141cp-47f, 0x1.7075eap-62f,
     0x1.c6b6d8p-19f, 0.0f, 0x1.2e6cb8p-43f, 0.0f, 0x1.95970ep-22f, 0x1.79dbbcp-2f,
     0x1.55fcb4p-74f, 0.0f, 0x1.62d328p-79f, 0x1.4cec8cp-91f, 0.0f, 0.0f, 0.0f,
     0x1.f087ccp-11f, 0.0f, 0.0f, 0.0f, 0x1.cff5d8p-23f, 0.0f, 0x1.00572cp-25f, 0.0f,
     0.0f, 0x1.69d3d6p-28f, 0.0f, 0x1.5d8f26p-37f, 0x1.839276p-68f, 0x1.0adeb6p-104f,
     0x1.96c978p-25f, 0x1.57c61p-22f, 0.0f, 0.0f, 0x1.533f6ap-94f, 0x1.12a71ep-2f,
     0.0f, 0x1.373c18p-66f, 0x1.0d186ep-94f, 0.0f, 0x1.c2ce34p-17f, 0x1.4a32d6p-125f,
     0x1.ab9c4p-18f, 0.0f, 0x1.d79b36p-27f, 0.0f, 0.0f, 0.0f, 0x1.739fecp-95f,
     0x1.d550fp-54f, 0x1.c252eap-83f, 0x1.ed6142p-102f, 0.0f, 0x1.52cc72p-18f, 0.0f,
     0x1.c65358p-30f, 0x1.74459p-21f, 0.0f, 0x1.469518p-102f, 0x1.4d9346p-42f,
     0x1.75342ap-104f, 0.0f, 0x1.aaca16p-108f, 0.0f, 0x1.c41c7cp-33f, 0x1.dc6d18p-75f,
     0.0f, 0x1.b3ad3ep-54f, 0.0f, 0.0f, 0.0f, 0x1.9073b8p-39f, 0.0f, 0.0f, 0.0f,
     0x1.6947b2p-19f, 0x1.5454e8p-63f, 0.0f, 0.0f, 0x1.f458eap-111f, 0.0f, 0.0f, 0.0f,
     0x1.59f8a4p-116f, 0x1.679c8cp-120f, 0x1.c5fd68p-45f, 0.0f, 0.0f, 0x1.4bb38cp-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7bca4p-31f, 0x1.5bff78p-59f, 0.0f,
     0x1.224454p-50f, 0x1.f6308ep-101f, 0.0f, 0.0f, 0x1.5a98fep-27f, 0x1.47dec6p-73f,
     0x1.bb5a14p-18f, 0.0f, 0.0f, 0x1.4e5624p-26f, 0.0f, 0.0f, 0.0f, 0x1.a678dep-4f,
     0.0f, 0x1.9bf642p-48f, 0.0f, 0x1.b816cep-24f, 0x1.3a90dep-66f, 0x1.19c022p-11f,
     0.0f, 0x1.a796d6p-8f, 0.0f, 0.0f, 0.0f, 0x1.e3356ap-104f, 0.0f, 0x1.5cc4c4p-82f,
     0x1.6e8acp-30f, 0.0f, 0x1.d3cdacp-108f, 0x1.648d54p-84f, 0x1.16784ap-29f,
     0x1.ff5a7ap-109f, 0x1.f2bb86p-57f, 0.0f, 0x1.f0ecf6p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ec696p-25f, 0.0f, 0x1.eec032p-88f, 0x1.215788p-32f, 0x1.1f8e22p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.49ec6ep-24f, 0x1.baf4b6p-18f, 0x1.9cfc1ep-54f,
     0x1.1cefc2p-68f, 0x1.a104b8p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dffd3ep-46f,
     0.0f, 0.0f, 0x1.ca819cp-69f, 0x1.e60bd8p-109f, 0.0f, 0x1.61bdcap-13f,
     0x1.c6aa5ep-49f, 0.0f, 0.0f, 0x1.38791p-23f, 0x1.ec6a1ep-36f, 0.0f,
     0x1.36b4dap-82f, 0.0f, 0x1.935cdep-38f, 0x1.9b2df4p-29f, 0x1.a31e44p-104f,
     0x1.26c7dep-45f, 0.0f, 0.0f, 0x1.643632p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5361e6p-35f, 0x1.0ce794p-1f, 0x1.780da8p-74f, 0.0f, 0.0f, 0x1.0f47d4p-40f,
     0x1.c41506p-14f, 0x1.671166p-83f, 0.0f, 0x1.156376p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.318d78p-85f, 0x1.b6e40ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40aa72p-39f,
     0x1.9d9fe2p-112f, 0.0f, 0.0f, 0x1.4d71e8p-10f, 0.0f, 0x1.54f2dep-3f, 0.0f,
     0x1.a1598cp-1f, 0x1.2fecd2p-3f, 0x1.65ac66p-65f, 0x1.e61de6p-40f, 0.0f, 0.0f,
     0x1.d78632p-57f, 0.0f, 0.0f, 0x1.3b9ca4p-118f, 0.0f, 0.0f, 0x1.b029dap-61f,
     0x1.96c606p-103f, 0.0f, 0.0f, 0.0f, 0x1.95593p-75f, 0.0f, 0x1.064cb6p-16f, 0.0f,
     0.0f, 0.0f, 0x1.5cbbfap-1f, 0x1.cf587ep-37f, 0x1.1f2a5cp-77f, 0x1.077bdp-13f,
     0x1.72524ap-95f, 0.0f, 0.0f, 0x1.239ac6p-35f, 0x1.1f1c96p-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2b5ea8p-109f, 0x1.0c45cap-69f, 0.0f, 0x1.a4b2c4p-125f, 0x1.dd4fb2p-82f,
     0.0f, 0x1.252922p-28f, 0.0f, 0x1.d9dc4p-7f, 0.0f, 0x1.30bbcap-65f,
     0x1.5e5b8ap-55f, 0x1.dd5afep-99f, 0x1.a239cp-111f, 0x1.ff62fap-98f, 0.0f,
     0x1.6b29bcp-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72bf8cp-105f,
     0x1.060318p-75f, 0x1.915502p-67f, 0.0f, 0.0f, 0x1.bbb9b8p-29f, 0.0f, 0.0f, 0.0f,
     0x1.aafe3cp-77f, 0.0f, 0.0f, 0.0f, 0x1.dd1ef8p-89f, 0x1.1693aep-29f, 0.0f,
     0x1.0bd822p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef9f7ep-34f,
     0x1.5650f8p-61f, 0x1.6895c4p-81f, 0.0f, 0x1.fffb8ep-123f, 0x1.7a4482p-38f, 0.0f,
     0.0f, 0.0f, 0x1.48e604p-80f, 0x1.3c0f9p-39f, 0.0f, 0.0f, 0x1.320edep-67f, 0.0f,
     0.0f, 0x1.836b58p-33f, 0.0f, 0.0f, 0x1.e21d16p-22f, 0x1.89131p-116f, 0.0f, 0.0f,
     0x1.1383aap-80f, 0x1.02f432p-6f, 0.0f, 0x1.6c83dp-102f, 0x1.d042f8p-77f,
     0x1.e0e00ap-45f, 0x1.db976ap-10f, 0x1.5e2a94p-67f, 0.0f, 0x1.3046c6p-103f,
     0x1.991b74p-102f, 0x1.2ffef4p-50f, 0.0f, 0x1.03d02p-74f, 0.0f, 0.0f,
     0x1.0f42d8p-119f, 0.0f, 0.0f, 0x1.b2fbeap-76f, 0x1.46b36ap-11f, 0.0f,
     0x1.89934p-105f, 0x1.e57cfcp-37f, 0x1.746722p-37f, 0.0f, 0x1.8af8dp-18f,
     0x1.b4fa32p-25f, 0x1.33238cp-91f, 0.0f, 0x1.ecffdep-24f, 0.0f, 0x1.fc4162p-126f,
     0x1p0f, 0x1.e81a28p-24f, 0x1.31263ap-106f, 0.0f, 0.0f, 0x1.00ffeap-26f, 0.0f,
     0.0f, 0.0f, 0x1.84f67ep-109f, 0x1.fba1bep-43f, 0.0f, 0x1.915b48p-41f, 0.0f, 0.0f,
     0x1.30cf9ep-31f, 0x1.c4e30cp-22f, 0x1.0018f6p-121f, 0.0f, 0x1.2a53b2p-37f, 0.0f,
     0.0f, 0x1.bb652p-52f, 0.0f, 0.0f, 0x1.7e5288p-67f, 0x1.79eaf8p-97f, 0.0f,
     0x1.fbaceap-5f, 0.0f, 0.0f, 0x1.5fc806p-116f, 0.0f, 0x1.a9a87ap-35f, 0.0f, 0.0f,
     0x1.7bc72cp-18f, 0x1.5309f4p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.26fdbep-7f, 0.0f, 0.0f, 0x1.b9b6a8p-96f, 0x1.db31d4p-88f,
     0x1.12c056p-60f, 0x1.d744f4p-64f, 0x1.0ba84cp-79f, 0x1.8743c2p-23f, 0.0f, 0.0f,
     0x1.a8c59p-98f, 0x1.91ebeep-113f, 0x1.78d34p-16f, 0x1.4542aep-72f, 0.0f, 0.0f,
     0x1.7c4698p-90f, 0.0f, 0x1.16f8fap-56f, 0x1.b44fd8p-82f, 0x1.0ce488p-108f,
     0x1.cb74aep-62f, 0x1.9e6fd6p-44f, 0.0f, 0x1.e8b4d6p-1f, 0.0f, 0.0f,
     0x1.68b712p-107f, 0.0f, 0.0f, 0.0f, 0x1.1040f2p-114f, 0x1.ac1482p-88f, 0.0f,
     0.0f, 0x1.18d5bep-13f, 0.0f, 0.0f, 0x1.9eaad8p-51f, 0x1.7796a8p-110f,
     0x1.d3c718p-70f, 0x1.96ea24p-116f, 0x1.a8da94p-100f, 0x1.60c224p-79f, 0.0f,
     0x1.f7c79ap-3f, 0x1.491daep-84f, 0x1.de2a32p-90f, 0.0f, 0.0f, 0x1.aa8bap-99f,
     0x1.1a7e34p-61f, 0x1.a86fbp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5f42p-58f,
     0x1.45e88p-117f, 0x1.7fb5a2p-28f, 0.0f, 0x1.bf3e76p-108f, 0x1.265abcp-104f, 0.0f,
     0x1.1bf826p-65f, 0x1.7a7654p-34f, 0x1.33faf4p-53f, 0x1.b2934ep-38f, 0.0f,
     0x1.e75268p-80f, 0.0f, 0.0f, 0x1.34f652p-91f, 0.0f, 0x1.7a8a6ap-109f,
     0x1.14a23p-34f, 0.0f, 0.0f, 0x1.52f3dcp-84f, 0x1.cafe8ap-28f, 0x1.b61f7p-55f,
     0x1.77190cp-27f, 0x1.cf2136p-88f, 0.0f, 0x1.154b4ep-16f, 0x1.72a40ep-89f, 0.0f,
     0x1.70e906p-31f, 0x1.afead2p-81f, 0.0f, 0.0f, 0x1.e30ec4p-27f, 0.0f,
     0x1.32dd0ap-114f, 0x1.9dec7ap-104f, 0x1.ce454ap-70f, 0x1.1f2c14p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.87ebc8p-22f, 0.0f, 0.0f, 0x1.ec077p-109f, 0x1.f5179ap-30f,
     0x1p0f, 0x1.a56f8cp-57f, 0.0f, 0x1.d81478p-104f, 0.0f, 0x1.a61392p-15f,
     0x1.c613b6p-72f, 0.0f, 0x1.a8a97p-39f, 0x1.f4c26p-61f, 0x1.6b6adap-31f, 0.0f,
     0x1.971142p-7f, 0x1.e17aecp-36f, 0.0f, 0.0f, 0.0f, 0x1.f7fa4ep-52f,
     0x1.4574fep-51f, 0x1.26789cp-10f, 0x1.d7bcf6p-57f, 0x1.178bf6p-46f,
     0x1.2e37c2p-17f, 0.0f, 0x1.c6007ep-60f, 0.0f, 0.0f, 0x1.e1b86p-40f, 0.0f, 0.0f,
     0x1.5c66c8p-103f, 0.0f, 0.0f, 0x1.cccaf6p-60f, 0x1.e0537p-99f, 0.0f, 0.0f,
     0x1.f7f9e6p-53f, 0x1.dd2accp-110f, 0x1.8f6eap-116f, 0.0f, 0.0f, 0x1.34ff38p-117f,
     0.0f, 0x1.8554f2p-114f, 0x1.9c200ep-9f, 0.0f, 0x1.f8f004p-37f, 0x1.63743cp-90f,
     0x1.cbd852p-47f, 0x1.07e5fcp-64f, 0x1.d61062p-37f, 0x1.c0d3a8p-51f,
     0x1.4ec068p-57f, 0x1.0435d4p-106f, 0x1.7fb05p-12f, 0x1.9c0e7ep-108f, 0.0f, 0.0f,
     0.0f, 0x1.1b3e3ap-20f, 0x1.63ee94p-106f, 0x1.a8d01ep-84f, 0.0f, 0x1.c3474p-21f,
     0x1.f1cecap-94f, 0x1.8b3bc8p-33f, 0x1.6b7872p-41f, 0x1.34cd42p-83f,
     0x1.53f914p-13f, 0x1.8b54eep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c39b4p-87f, 0.0f, 0.0f, 0x1.03735cp-121f, 0x1.289e14p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.91a52cp-9f, 0x1.fb4bb2p-53f, 0x1.a1518ap-119f, 0.0f, 0x1.3398dp-55f,
     0x1.a1ba98p-76f, 0x1.ec2fd4p-14f, 0.0f, 0x1.575696p-35f, 0x1.d16ca2p-25f,
     0x1.6ad296p-36f, 0x1.f7a79ep-37f, 0.0f, 0x1.8102fcp-6f, 0x1.34bd2ep-23f,
     0x1.39923ap-36f, 0x1.fbc0ap-19f, 0.0f, 0.0f, 0x1.27a21ep-5f, 0.0f, 0.0f,
     0x1.d5675ep-76f, 0.0f, 0x1.352e9cp-7f, 0x1.51ed7p-124f, 0.0f, 0x1.a52386p-44f,
     0.0f, 0.0f, 0x1.b477dap-111f, 0x1.0ea004p-83f, 0.0f, 0x1.36801ap-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5dd5ccp-111f, 0x1.116c92p-40f, 0x1.7e98dep-119f,
     0x1.8e974ap-78f, 0x1.0a7f48p-95f, 0x1.b72342p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44a60ap-76f, 0x1.605c42p-83f, 0x1.8468b2p-28f, 0.0f, 0.0f, 0x1.cf360ep-114f,
     0.0f, 0.0f, 0x1.093aa6p-49f, 0x1.549df6p-75f, 0.0f, 0x1.f2174cp-44f, 0.0f,
     0x1.7029c8p-65f, 0x1.b36b5cp-119f, 0x1.c3603cp-12f, 0.0f, 0.0f, 0x1.ea4f9ap-112f,
     0x1.8d095p-47f, 0x1.7ab86cp-81f, 0.0f, 0x1.9b3152p-73f, 0x1.2c43a2p-63f,
     0x1.71a53p-84f, 0.0f, 0.0f, 0x1.2d55fep-50f, 0x1.9ecb72p-124f, 0x1.1035c4p-62f,
     0x1.8b717ep-23f, 0x1.b5296ep-102f, 0x1.975756p-126f, 0x1.4e3256p-34f, 0.0f,
     0x1.144a32p-5f, 0.0f, 0x1.2b97e4p-32f, 0x1.a022acp-106f, 0x1.0c5a46p-34f, 0.0f,
     0x1.bd683ep-41f, 0.0f, 0x1.a018bp-1f, 0.0f, 0.0f, 0.0f, 0x1.b4114p-75f, 0.0f,
     0.0f, 0.0f, 0x1.0aap-41f, 0.0f, 0x1.0a3faep-58f, 0.0f, 0x1.5c17d8p-2f, 0.0f,
     0x1.838032p-45f, 0.0f, 0.0f, 0x1.3a08d4p-11f, 0x1.8a36b2p-19f, 0x1.010664p-40f,
     0x1.ef198p-92f, 0x1.9260eep-13f, 0x1.552f38p-73f, 0.0f, 0x1.e900c8p-91f, 0.0f,
     0x1.1b5f5cp-72f
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
            tmp2 = Sleef_finz_fmodf4_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_fmodf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fmodf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
