/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1f4_u10kvx.c --function \
 *     Sleef_finz_expm1f4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.610024p-102f, 0.0f, 0x1.c25372p-65f, 0x1.9350b2p-89f, 0x1.06dbf4p-101f,
     0x1.89053cp-121f, 0.0f, 0x1.f25a2ap-90f, 0x1.b111e8p-115f, 0x1.854f54p-123f,
     0x1.3a00c8p-102f, 0x1.457224p-18f, 0x1.f351cp-100f, 0x1.5ff80ep-97f,
     0x1.358264p-37f, 0x1.eb43ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64e042p-69f,
     0x1.23b362p-51f, 0.0f, 0.0f, 0x1.97cd9ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.782fb4p-38f, 0.0f, 0.0f, 0.0f, 0x1.a71e4ep-121f, 0x1.f3e222p-5f,
     0x1.2e0d2ap-16f, 0x1.74b99cp-112f, 0.0f, 0x1.1f9284p-59f, 0x1.21170ap-71f,
     0x1.12cd2p-46f, 0.0f, 0.0f, 0x1.3ea666p-39f, 0x1.5e449ap-44f, 0.0f, 0.0f,
     0x1.3fdf1ap-126f, 0.0f, 0.0f, 0x1.c8b32cp-126f, 0.0f, 0x1.805446p-94f,
     0x1.9a4ca6p-54f, 0.0f, 0.0f, 0x1.0d96c8p-58f, 0.0f, 0x1.d7f636p-61f,
     0x1.02d4ep-92f, 0x1.8acf76p-80f, 0x1.c4d244p-77f, 0.0f, 0.0f, 0x1.562a1cp-92f,
     0.0f, 0x1.f7b00ep-114f, 0.0f, 0x1.3c1fa4p-61f, 0x1.ce4a2p-32f, 0.0f,
     0x1.3a7a88p-119f, 0.0f, 0x1.6ca0dp-110f, 0.0f, 0x1.34f17ep-55f, 0.0f,
     0x1.5fa61p-16f, 0.0f, 0.0f, 0x1.e6d2ap-11f, 0x1.dd2c6cp-111f, 0x1.e3d378p-109f,
     0.0f, 0x1.0a500ap-57f, 0x1.3072fp-53f, 0.0f, 0.0f, 0.0f, 0x1.bf5aap-53f,
     0x1.9e4014p-51f, 0.0f, 0x1.580312p-43f, 0x1.15349ap-106f, 0.0f, 0.0f,
     0x1.70b2dap-121f, 0x1.e26b6cp-80f, 0x1.6c0526p-33f, 0.0f, 0x1.3be89cp-2f,
     0x1.65d9a2p-101f, 0x1.f7bda8p-103f, 0.0f, 0x1.9a6b66p-10f, 0.0f, 0.0f, 0.0f,
     0x1.458a06p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3da5ap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e67a8p-28f, 0.0f, 0x1.ad0a9p-28f, 0x1.a3887ap-97f, 0x1.23c59cp-56f,
     0x1.d63a74p-38f, 0x1.14840ap-92f, 0x1.237c5p-71f, 0x1.115ed6p-3f,
     0x1.ba84d4p-45f, 0.0f, 0.0f, 0.0f, 0x1.131b94p-28f, 0.0f, 0.0f, 0x1.99d8d8p-37f,
     0x1.26d3dcp-98f, 0x1.530248p-36f, 0x1.b29e4ep-89f, 0.0f, 0.0f, 0x1.a87702p-68f,
     0.0f, 0x1.448e7ap-21f, 0x1.d2e2b2p-100f, 0x1.e60866p-76f, 0x1.4d4852p-9f,
     0x1.c111bep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2c12p-71f, 0.0f, 0x1.ae729ap-52f,
     0x1.16e22cp-97f, 0.0f, 0x1.4c030ap-50f, 0.0f, 0x1.843d2cp-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.473654p-92f, 0x1.4e58dep-19f, 0x1.cc6b6p-27f,
     0.0f, 0x1.a2901p-121f, 0.0f, 0.0f, 0.0f, 0x1.202b3ap-13f, 0x1.23fe5ep-30f,
     0x1.fc23fep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5fbc8p-31f, 0x1.e0868ep-47f, 0.0f,
     0x1.90b9e8p-42f, 0.0f, 0x1.254df6p-21f, 0.0f, 0.0f, 0x1.e63ac8p-60f, 0.0f, 0.0f,
     0x1.4ec1a4p-37f, 0.0f, 0.0f, 0.0f, 0x1.72f05ap-79f, 0x1.48ec6cp-7f, 0.0f,
     0x1.9af22ap-116f, 0.0f, 0.0f, 0x1.cfbca8p-114f, 0x1.47f5eep-121f, 0.0f, 0.0f,
     0x1.960486p-71f, 0x1.5c7e74p-78f, 0.0f, 0x1.2fff1cp-47f, 0.0f, 0.0f, 0.0f,
     0x1.ca81fcp-15f, 0x1.5ddb2p-91f, 0x1.bc972ap-22f, 0x1.a5aab8p-44f,
     0x1.7c2bf2p-97f, 0.0f, 0x1.91d9cap-118f, 0x1.902c38p-18f, 0.0f, 0x1.2d3dcep-21f,
     0x1.07bacap-82f, 0x1.9aaee8p-72f, 0.0f, 0x1.8d7146p-75f, 0.0f, 0.0f, 0.0f,
     0x1.de4d76p-47f, 0.0f, 0.0f, 0x1.211e06p-105f, 0x1.7a465p-97f, 0x1.06d918p-52f,
     0.0f, 0.0f, 0.0f, 0x1.0ec8f6p-100f, 0.0f, 0x1.ab0c78p-83f, 0x1.71e3c4p-3f,
     0x1.404564p-24f, 0.0f, 0x1.8fe5b4p-75f, 0x1.2c9316p-83f, 0.0f, 0.0f, 0.0f,
     0x1.c6b738p-16f, 0x1.ff53c2p-49f, 0.0f, 0x1.6d43eep-100f, 0.0f, 0x1p0f,
     0x1.a7b926p-52f, 0.0f, 0.0f, 0x1.b6e2fap-27f, 0.0f, 0x1.8f558cp-64f,
     0x1.b9a032p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48c086p-94f, 0.0f, 0x1.f2622ap-66f,
     0.0f, 0.0f, 0.0f, 0x1.f38e66p-7f, 0x1.046a4p-71f, 0x1.e77b2ap-48f,
     0x1.8dfaf2p-1f, 0.0f, 0x1.6afa58p-7f, 0x1.32aaf4p-21f, 0x1.cd110ap-18f, 0.0f,
     0x1.7f0cd6p-69f, 0x1.d2c636p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.755ab4p-9f,
     0x1.547ceap-26f, 0x1.71b42ap-8f, 0x1.1043ccp-43f, 0x1.b1ce5p-81f,
     0x1.e5b0c2p-38f, 0x1.894482p-117f, 0.0f, 0.0f, 0x1.b87d82p-82f, 0.0f,
     0x1.146962p-8f, 0.0f, 0.0f, 0x1.cc89c8p-53f, 0.0f, 0.0f, 0.0f, 0x1.b60562p-84f,
     0x1.3369d2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70a4ep-17f, 0.0f, 0x1.61c186p-89f,
     0.0f, 0x1.08bb1p-80f, 0x1.13514p-47f, 0x1.d2da74p-101f, 0.0f, 0.0f, 0.0f,
     0x1.88284ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc99d6p-43f,
     0x1.a1009ap-32f, 0.0f, 0x1.a25f92p-53f, 0.0f, 0x1.2289a4p-105f, 0x1.0836ap-73f,
     0.0f, 0.0f, 0.0f, 0x1.6d563cp-79f, 0.0f, 0x1.6f1ce4p-47f, 0.0f, 0x1.9e8e44p-34f,
     0.0f, 0.0f, 0x1.5aac52p-77f, 0.0f, 0.0f, 0.0f, 0x1.44d818p-93f, 0x1.0952bcp-88f,
     0x1.661cbep-55f, 0x1.d81f5cp-36f, 0x1.4f4ed8p-73f, 0.0f, 0x1.71f156p-86f,
     0x1.8b95f6p-34f, 0.0f, 0.0f, 0x1.253006p-22f, 0x1.761a58p-53f, 0x1.477db2p-99f,
     0x1.4cc36ep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b92428p-61f, 0x1.4cdf2ap-62f, 0.0f, 0.0f, 0x1.9ea166p-50f,
     0x1.c2262p-23f, 0.0f, 0.0f, 0x1.0fc626p-68f, 0x1.7adc84p-73f, 0.0f,
     0x1.1c8c1p-84f, 0x1.db05a2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.354eap-119f,
     0.0f, 0x1p0f, 0x1.aecaeep-14f, 0.0f, 0x1.f69df2p-14f, 0x1.674e14p-26f, 0.0f,
     0x1.3c7898p-106f, 0.0f, 0x1.58fd84p-67f, 0.0f, 0x1.f9121cp-66f, 0x1p0f,
     0x1.02afccp-118f, 0.0f, 0x1.06cfeep-27f, 0x1.a9365cp-66f, 0.0f, 0x1.322e24p-40f,
     0.0f, 0x1.971b9cp-126f, 0x1.cb5da8p-23f, 0x1.f13488p-18f, 0x1.c3ba3cp-51f, 0.0f,
     0.0f, 0x1.9e76fap-59f, 0x1.dd08a6p-66f, 0x1.efda8p-121f, 0x1.e960e6p-68f,
     0x1.ad5144p-41f, 0x1.4bea86p-92f, 0.0f, 0.0f, 0x1.dd84b4p-63f, 0x1.08fde4p-73f,
     0.0f, 0.0f, 0x1.5ceba8p-40f, 0.0f, 0.0f, 0x1.1b65dap-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b9a1f6p-54f, 0x1.0c5be8p-85f, 0x1p0f, 0x1.135fccp-17f,
     0x1.082484p-114f, 0.0f, 0.0f, 0.0f, 0x1.194de4p-39f, 0x1.e04916p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.520c14p-9f, 0x1.c6eb7cp-56f, 0x1.60c33ep-126f, 0.0f, 0.0f,
     0x1.8a111ep-98f, 0.0f, 0x1.1175d8p-110f, 0x1.f25426p-80f, 0x1.bb4b64p-39f,
     0x1.4347b2p-76f, 0.0f, 0.0f, 0x1.4f5e96p-119f, 0.0f, 0.0f, 0x1.69963ep-89f,
     0x1.d6c10ep-20f, 0x1.eccafcp-42f, 0.0f, 0x1.77916ap-34f, 0x1.6789dcp-14f, 0.0f,
     0x1.5bf648p-18f, 0x1.d0b8dcp-58f, 0x1.9d03f4p-93f, 0x1.598738p-44f,
     0x1.29f1c4p-15f, 0x1.e7a616p-34f, 0x1.b9fa94p-95f, 0.0f, 0x1.a3d522p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e127b2p-21f, 0.0f, 0.0f, 0.0f, 0x1.c25866p-117f,
     0x1.3719b4p-13f, 0x1.b74504p-89f, 0.0f, 0.0f, 0.0f, 0x1.d5d25ep-98f,
     0x1.ce024ep-30f, 0x1.45fa5cp-31f, 0x1.2443bap-45f, 0.0f, 0.0f, 0x1.38274cp-50f,
     0x1.540e96p-20f, 0.0f, 0.0f, 0x1.839fcap-42f, 0x1.e004bep-24f, 0x1.155fdcp-13f,
     0x1.fc368ap-46f, 0x1.fd7642p-21f, 0.0f, 0x1.3c0fcap-61f, 0x1.3022b4p-117f,
     0x1.ae83dcp-55f, 0x1.5d8808p-69f, 0.0f, 0.0f, 0.0f, 0x1.45d62p-102f, 0.0f, 0.0f,
     0x1.071aeep-114f, 0.0f, 0x1.e83b04p-97f, 0.0f, 0.0f, 0x1.a74e4p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.938674p-24f, 0x1.c2eb54p-63f, 0x1.1240dp-52f,
     0.0f, 0x1.a54472p-84f, 0x1.dd40fep-53f, 0.0f, 0.0f, 0x1.4fe1e6p-119f,
     0x1.c0a9f2p-105f, 0.0f, 0x1.9894f8p-19f, 0.0f, 0.0f, 0x1.b01e38p-92f,
     0x1.8cccbep-58f, 0x1.c4a7bp-34f, 0x1.80648ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.35a0f8p-9f, 0.0f, 0x1.321c62p-61f, 0x1.acb5b4p-35f, 0.0f,
     0.0f, 0x1.cb111p-4f, 0.0f, 0x1.ea94f2p-100f, 0.0f, 0.0f, 0.0f, 0x1.39af78p-71f,
     0x1.4709a2p-74f, 0.0f, 0x1.3d4406p-106f, 0.0f, 0x1.b914e2p-2f, 0.0f,
     0x1.d7f22ap-62f, 0x1.50a574p-19f, 0x1.cf9ff4p-114f, 0.0f, 0.0f, 0x1.d74472p-11f,
     0.0f, 0x1.81ff6p-64f, 0x1.1ed9c4p-32f, 0x1.ed77dap-43f, 0x1.d74e2ap-99f, 0.0f,
     0x1.dfeb08p-126f, 0x1.f50b6p-43f, 0.0f, 0.0f, 0x1.59785ep-83f, 0x1.4042b2p-31f,
     0x1.a2ac7p-81f, 0x1.3db5cap-120f, 0.0f, 0x1.ba4ee4p-72f, 0x1.d32f98p-95f, 0.0f,
     0x1.9b79c2p-103f, 0x1.27d284p-96f, 0x1.c3573ep-48f, 0.0f, 0.0f, 0x1.265fd8p-93f,
     0.0f, 0x1.01a63cp-78f, 0x1.07bebp-62f, 0.0f, 0x1.b3dffap-5f, 0x1.4e46d8p-115f,
     0x1.92a116p-126f, 0x1.6a24acp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff466p-54f,
     0x1.374fcp-100f, 0.0f, 0x1.bec86ap-67f, 0.0f, 0x1.3d260ap-51f, 0.0f,
     0x1.77ccbap-9f, 0x1.6d1cdap-105f, 0x1.9336aap-96f, 0x1.97d8dap-108f, 0.0f,
     0x1.6ee3cep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.159d2cp-38f, 0x1.3516cap-81f,
     0x1.ef8a5p-48f, 0.0f, 0x1.c468a6p-19f, 0.0f, 0.0f, 0x1.c0e8f2p-99f, 0.0f,
     0x1.52926cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.126c84p-12f, 0x1.45fd78p-7f,
     0x1.3e3756p-79f, 0.0f, 0x1.7701b6p-110f, 0.0f, 0.0f, 0.0f, 0x1.80badep-96f, 0.0f,
     0x1.2fe8a6p-94f, 0.0f, 0x1.f840fp-77f, 0x1.213a32p-56f, 0.0f, 0.0f, 0.0f,
     0x1.08bee2p-34f, 0x1.60cf96p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.613d52p-114f,
     0.0f, 0x1.461be8p-116f, 0x1.2cd948p-58f, 0x1.abd99cp-110f, 0x1.1c2e88p-45f,
     0x1.84e4a2p-117f, 0.0f, 0x1.6578ep-49f, 0x1.093006p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04fffcp-3f, 0.0f, 0x1.79036ep-102f, 0x1.a4db5cp-124f, 0x1.63dd0cp-116f, 0.0f,
     0x1.82790ep-64f, 0x1.63278ep-86f, 0x1.1d826ep-98f, 0.0f, 0.0f, 0x1.c2d0f8p-13f,
     0.0f, 0.0f, 0x1.f407a6p-113f, 0x1.1d0cbcp-42f, 0x1.32933ap-38f, 0x1.4a4694p-48f,
     0x1.d9f66ep-40f, 0.0f, 0x1.aa481ap-81f, 0x1.5b5e08p-21f, 0.0f, 0.0f,
     0x1.0a2922p-44f, 0.0f, 0.0f, 0x1.e26976p-42f, 0.0f, 0.0f, 0.0f, 0x1.8846ep-108f,
     0x1.a2dffcp-13f, 0x1.e1d672p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2dca4p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08fdd4p-89f, 0x1.f62882p-101f,
     0x1.8d5b3cp-126f, 0.0f, 0x1.5639b2p-81f, 0.0f, 0x1.051f2p-84f, 0.0f,
     0x1.7c19acp-2f, 0x1.250b4ap-75f, 0x1.01c84cp-41f, 0.0f, 0x1.df704ep-121f, 0.0f,
     0x1.08dap-98f, 0x1.b2a2eep-28f, 0.0f, 0.0f, 0.0f, 0x1.b50f48p-72f, 0.0f,
     0x1.8249fap-78f, 0x1.2d00acp-27f, 0x1.a13504p-52f, 0x1.4b578cp-60f, 0.0f,
     0x1.3f9bc6p-22f, 0x1.196a58p-117f, 0x1.e17214p-52f, 0.0f, 0x1.9d3f2cp-7f,
     0x1.b62c76p-100f, 0x1.735e22p-93f, 0.0f, 0x1.bd72fap-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cddd0ep-107f, 0.0f, 0x1.75c438p-115f, 0x1.d791bcp-61f, 0.0f,
     0x1.027e2p-9f, 0.0f, 0x1.0bc3ccp-76f, 0x1.a9f8eap-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d83934p-23f, 0x1.a6788p-54f, 0x1.3a5f5p-7f, 0.0f,
     0x1.553f8p-121f, 0.0f, 0.0f, 0x1.5380cp-89f, 0.0f, 0.0f, 0.0f, 0x1.b02868p-114f,
     0x1.802b2ep-41f, 0.0f, 0.0f, 0x1.936146p-65f, 0.0f, 0.0f, 0x1.779faap-10f,
     0x1.70002ap-61f, 0x1.90353ap-15f, 0x1.62d648p-60f, 0.0f, 0.0f, 0x1.3c3dbap-89f,
     0x1.4d2272p-105f, 0x1.bcbcd2p-8f, 0x1.d4cc3ep-88f, 0.0f, 0x1.356daep-47f,
     0x1.24ca54p-33f, 0.0f, 0.0f, 0x1.bd9e32p-125f, 0x1.40a4a4p-22f, 0.0f, 0.0f,
     0x1.51064p-121f, 0x1.890fd2p-123f, 0.0f, 0x1.99ab52p-122f, 0.0f, 0.0f,
     0x1.2e1e12p-85f, 0x1.1248dap-123f, 0.0f, 0x1.5578a2p-89f, 0x1.da1378p-41f, 0.0f,
     0.0f, 0.0f, 0x1.2e2c12p-59f, 0.0f, 0.0f, 0x1.e4d79cp-121f, 0x1.5c051p-124f,
     0x1.1c2ba8p-120f, 0x1.2c9972p-70f, 0x1.66708ep-58f, 0.0f, 0x1.f102a8p-123f, 0.0f,
     0x1.40878cp-40f, 0x1.71f0e8p-116f, 0x1.4b4ff6p-61f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.d12622p-72f, 0.0f, 0.0f, 0x1.f9c0dep-78f, 0.0f, 0.0f, 0.0f, 0x1.f19c5cp-41f,
     0.0f, 0x1.4e490ap-42f, 0x1.92c81ep-57f, 0x1.159a5p-107f, 0x1.cfce88p-108f, 0.0f,
     0.0f, 0x1.55300ep-13f, 0.0f, 0.0f, 0.0f, 0x1.f5d76p-72f, 0x1.96d542p-29f,
     0x1.7464b2p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2bbaap-93f, 0.0f, 0.0f,
     0x1.8b31c6p-98f, 0x1.8e7364p-101f, 0.0f, 0.0f, 0x1.f8fb3ep-96f, 0x1.10708ap-85f,
     0.0f, 0.0f, 0.0f, 0x1.eff83p-119f, 0x1.7986eap-12f, 0x1.040ed2p-80f, 0.0f, 0.0f,
     0.0f, 0x1.a0409ep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06c29p-69f, 0.0f,
     0x1.5de4dcp-92f, 0x1.32dac2p-4f, 0x1.21d7ccp-123f, 0.0f, 0x1.39bf9p-80f, 0.0f,
     0x1.cb24bep-104f, 0x1p0f, 0.0f, 0.0f, 0x1.452ac4p-33f, 0.0f, 0.0f, 0.0f,
     0x1.605c2ap-124f, 0x1.4a7e24p-111f, 0x1.350e8ap-95f, 0x1.9371d2p-12f,
     0x1.4c593ap-107f, 0.0f, 0x1.575b12p-20f, 0.0f, 0x1.83accep-67f, 0x1.138a0ep-55f,
     0x1.56d1ccp-108f, 0.0f, 0x1.b59352p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d12d6ep-64f, 0x1.d1f574p-105f, 0x1.787458p-114f, 0x1.2d448ap-33f, 0.0f,
     0x1.34e7bep-102f, 0.0f, 0.0f, 0x1.fdce54p-68f, 0x1.d928acp-90f, 0x1.7a4e38p-66f,
     0.0f, 0.0f, 0.0f, 0x1.00c2dcp-51f, 0.0f, 0x1.f728ccp-45f, 0x1.abf954p-117f,
     0x1.351f6p-2f, 0.0f, 0x1.2d652p-112f, 0x1.5f78fap-74f, 0x1.00873p-23f,
     0x1.81d6dap-86f, 0x1.66858p-117f, 0.0f, 0.0f, 0.0f, 0x1.ef3e1ap-87f, 0.0f,
     0x1.9a56dep-125f, 0x1.f1df62p-54f, 0x1.4046ecp-26f, 0x1.d155e4p-79f, 0.0f, 0.0f,
     0x1.07d924p-39f, 0x1.45c6f2p-112f, 0x1.9faec6p-114f, 0x1.e2d416p-98f, 0.0f,
     0x1.502a86p-124f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_expm1f4_u10kvx(tmp0);
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
    printf("Sleef_finz_expm1f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_expm1f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
