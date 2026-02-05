/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f4_u10kvx.c --function Sleef_exp10f4_u10kvx \
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
     0.0f, 0x1.2a775ep-55f, 0.0f, 0x1.9b3488p-118f, 0x1.bd04c6p-85f, 0x1.997466p-91f,
     0x1.d8fcd8p-124f, 0x1.fc75b8p-77f, 0.0f, 0.0f, 0x1.50df86p-122f, 0.0f, 0.0f,
     0x1.4cd6fep-31f, 0.0f, 0.0f, 0x1.4e4744p-22f, 0x1.12148ep-73f, 0x1.74bed4p-63f,
     0.0f, 0x1.308d72p-98f, 0.0f, 0x1.0ce874p-34f, 0x1.7ccba4p-70f, 0x1.735958p-15f,
     0x1.eebabcp-119f, 0x1.f325cp-82f, 0.0f, 0.0f, 0x1.57ebcep-84f, 0.0f,
     0x1.388acap-2f, 0.0f, 0.0f, 0x1.485e2cp-4f, 0.0f, 0x1.a309dcp-21f,
     0x1.4b9bap-112f, 0x1.6ecae2p-51f, 0.0f, 0.0f, 0.0f, 0x1.2125c4p-67f,
     0x1.6423bcp-3f, 0x1.fc94ep-83f, 0.0f, 0x1.58f08ep-113f, 0.0f, 0x1.81dd28p-103f,
     0x1.6fda9p-89f, 0.0f, 0x1.68f5ccp-89f, 0x1.698aecp-55f, 0x1.6b788ep-112f, 0.0f,
     0x1.88275ap-44f, 0x1.5e02d8p-126f, 0.0f, 0x1.dbc1ep-14f, 0x1.9a01c6p-81f,
     0x1.260b52p-66f, 0.0f, 0x1.11c334p-115f, 0x1.b805dcp-123f, 0x1.86e398p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.262f04p-114f, 0.0f, 0.0f, 0x1.c34992p-61f,
     0.0f, 0.0f, 0.0f, 0x1.5f4962p-11f, 0.0f, 0x1.0d5fdp-15f, 0.0f, 0x1.281d4p-88f,
     0x1.11c5a4p-63f, 0x1.11692cp-16f, 0x1.8a6f14p-12f, 0.0f, 0.0f, 0x1.0e6d9p-33f,
     0x1.2f3076p-43f, 0x1.32a59cp-41f, 0x1.d799f2p-59f, 0x1.ebb012p-99f,
     0x1.f7955ep-80f, 0.0f, 0.0f, 0x1.07f296p-91f, 0x1.9d608ap-30f, 0.0f, 0.0f, 0.0f,
     0x1.c14dc4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9c9dp-25f, 0.0f, 0.0f,
     0x1.61f07cp-46f, 0x1.bbdfd2p-12f, 0.0f, 0.0f, 0.0f, 0x1.3fc24ep-96f,
     0x1.b117b4p-61f, 0.0f, 0x1.321e9ap-103f, 0.0f, 0.0f, 0x1.5fd712p-47f, 0.0f,
     0x1.82792ap-42f, 0x1.2f8086p-12f, 0.0f, 0x1.fb4adcp-8f, 0.0f, 0x1.51193p-67f,
     0x1.00b0fap-17f, 0.0f, 0x1.9492fcp-98f, 0x1.ee2a64p-24f, 0x1.c314fcp-45f,
     0x1.8009eap-43f, 0x1.a208a4p-52f, 0x1.eccc0cp-77f, 0.0f, 0x1.ff2706p-16f,
     0x1.b61714p-110f, 0.0f, 0x1.e3ecfep-113f, 0x1.ed89fep-54f, 0x1.49cf62p-107f,
     0x1.53402cp-38f, 0.0f, 0.0f, 0x1.0598f8p-31f, 0x1.4d42fp-70f, 0.0f,
     0x1.678da6p-62f, 0x1.20566cp-119f, 0x1.6b7a84p-7f, 0.0f, 0.0f, 0x1.fe60fep-17f,
     0.0f, 0x1.305476p-124f, 0x1.7e25b4p-3f, 0x1.9ae3ccp-112f, 0x1.87083p-63f, 0.0f,
     0.0f, 0.0f, 0x1.ef8c48p-95f, 0x1.1c1b5cp-123f, 0x1.ada1c4p-2f, 0.0f,
     0x1.207126p-79f, 0x1.f49072p-34f, 0.0f, 0.0f, 0.0f, 0x1.c32822p-67f,
     0x1.b62412p-66f, 0.0f, 0.0f, 0.0f, 0x1.ddb8dcp-126f, 0x1.b1f05p-93f,
     0x1.f190a4p-31f, 0x1.a3afaep-99f, 0x1.176834p-106f, 0.0f, 0x1.fd78cep-108f,
     0x1.4bed8ep-45f, 0x1.d1206ep-119f, 0x1.d65334p-26f, 0x1.06c868p-83f,
     0x1.860ff6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.626fbcp-55f, 0.0f, 0.0f,
     0x1.d5d1c2p-78f, 0x1.af9f42p-51f, 0x1.2b61a6p-43f, 0.0f, 0x1.bc5a6ap-111f,
     0x1.5f063ep-102f, 0.0f, 0x1.783cdep-16f, 0x1.e426dp-55f, 0x1.45f93cp-83f,
     0x1.a3fecep-1f, 0.0f, 0.0f, 0x1.a7923cp-6f, 0.0f, 0.0f, 0x1.dcd2d8p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.bd6ecp-37f, 0x1.5dd324p-122f, 0.0f, 0.0f,
     0x1.f169e8p-94f, 0x1.4c5556p-49f, 0.0f, 0.0f, 0x1.bc231cp-110f, 0.0f,
     0x1.02875cp-95f, 0x1.161f88p-66f, 0x1.260258p-44f, 0.0f, 0x1.b5ce66p-44f, 0.0f,
     0.0f, 0.0f, 0x1.f73dfp-50f, 0x1.b6c56p-95f, 0x1.3342cep-58f, 0x1.975168p-103f,
     0x1.2cd9ap-115f, 0.0f, 0x1.63504cp-102f, 0.0f, 0x1.2bea6cp-21f, 0.0f,
     0x1.5ccda4p-94f, 0.0f, 0x1.c7c21ap-74f, 0x1.e39f6ap-18f, 0x1.b3cfcp-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c0839cp-107f, 0.0f, 0x1.80c014p-44f, 0x1.9f3f6p-121f,
     0x1.57a6dp-110f, 0x1.e7da08p-64f, 0.0f, 0.0f, 0.0f, 0x1.f65dfp-70f, 0.0f, 0.0f,
     0.0f, 0x1.bf23b8p-76f, 0x1.43969ap-92f, 0.0f, 0x1.de8528p-107f, 0.0f,
     0x1.1a7e5ep-99f, 0x1.de8adap-104f, 0.0f, 0.0f, 0x1.fdd5a6p-117f, 0.0f,
     0x1.3f7cbap-84f, 0x1.fe5544p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9c568p-82f, 0.0f,
     0x1.5a6446p-101f, 0x1.9f7fdep-107f, 0.0f, 0.0f, 0.0f, 0x1.c71f7p-55f, 0.0f,
     0x1.3d77ccp-50f, 0x1.3b23a8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d9bdap-13f,
     0x1.24dfeap-47f, 0.0f, 0x1.c3574p-9f, 0.0f, 0.0f, 0x1.c93d44p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.743014p-56f, 0.0f, 0.0f, 0x1.e692b2p-4f, 0.0f, 0.0f, 0.0f,
     0x1.c9f918p-107f, 0.0f, 0x1.d500dcp-39f, 0.0f, 0.0f, 0x1.88a95cp-113f, 0.0f,
     0x1.5eaf9ap-48f, 0.0f, 0x1.11f1a8p-16f, 0.0f, 0.0f, 0x1.6559ecp-36f,
     0x1.840e1ap-99f, 0x1.4d6856p-80f, 0x1.783cd6p-79f, 0x1.b48822p-122f, 0.0f,
     0x1.5f78b4p-20f, 0.0f, 0.0f, 0.0f, 0x1.d1a94ep-125f, 0x1.7c3566p-52f, 0.0f,
     0x1.c08ff4p-20f, 0x1.00e632p-49f, 0x1.80965ap-52f, 0.0f, 0x1.083f8p-86f,
     0x1.424612p-99f, 0x1.24a1ep-15f, 0.0f, 0x1.c0ee6ep-122f, 0x1.aff53p-26f,
     0x1.489886p-82f, 0x1.0150eep-39f, 0x1.e620cp-126f, 0.0f, 0x1.f34e86p-72f, 0.0f,
     0x1.842652p-100f, 0.0f, 0x1.4d469ap-85f, 0x1.af1c26p-105f, 0x1.34006p-111f,
     0x1.578d08p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35d1a2p-28f, 0x1.87085ap-56f, 0.0f,
     0x1.93bb66p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.468996p-124f,
     0x1.e5dddcp-116f, 0x1.99da94p-6f, 0x1.e989cp-110f, 0.0f, 0x1.a5ead8p-35f, 0.0f,
     0x1.266874p-70f, 0x1.4d7cbep-97f, 0x1.968326p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d75742p-12f, 0x1.a0d38cp-73f, 0.0f, 0x1.82be74p-69f, 0.0f, 0x1.34ffeep-49f,
     0x1.305182p-102f, 0x1.3e24eep-119f, 0x1.dd9428p-9f, 0x1.6da764p-12f, 0.0f, 0.0f,
     0.0f, 0x1.569c78p-81f, 0x1.960d28p-84f, 0.0f, 0x1.aa07dp-47f, 0.0f,
     0x1.a6476ap-44f, 0x1.344edep-12f, 0.0f, 0x1.505a7ep-7f, 0x1.f9eca4p-112f,
     0x1.f0d044p-45f, 0.0f, 0x1.449514p-65f, 0.0f, 0x1.2cb81cp-27f, 0x1.54047ap-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a2ef6p-103f, 0x1.3197fcp-14f, 0x1.cd0d44p-27f, 0.0f,
     0.0f, 0.0f, 0x1.48d29p-80f, 0x1.825afep-43f, 0x1.a7fd86p-25f, 0x1.7c8a92p-44f,
     0.0f, 0.0f, 0x1.efd95ep-77f, 0x1.d4ce9cp-19f, 0.0f, 0x1.b5d7cp-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.766c5p-26f, 0.0f, 0.0f, 0.0f, 0x1.99ff98p-23f, 0x1.1d106p-43f,
     0.0f, 0x1.20442ap-57f, 0x1.c46eb6p-42f, 0.0f, 0.0f, 0x1.c1dbbep-111f,
     0x1.895af8p-113f, 0x1.9c2fb6p-34f, 0x1.e5e1fep-73f, 0.0f, 0x1.7372ecp-86f,
     0x1.75f844p-102f, 0x1.4b3a94p-26f, 0x1.9b56e8p-7f, 0x1.c8db0cp-110f,
     0x1.415c04p-45f, 0.0f, 0.0f, 0.0f, 0x1.0bf4a6p-37f, 0x1.9100c6p-87f, 0.0f, 0.0f,
     0x1.b8120cp-121f, 0x1.513a8p-60f, 0x1.e0a6bcp-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c8c6p-107f, 0x1.0095e2p-83f, 0.0f, 0x1.003084p-60f, 0x1.d07982p-9f, 0.0f,
     0x1.c466fap-50f, 0.0f, 0.0f, 0x1.937244p-92f, 0x1.99357cp-82f, 0.0f, 0.0f,
     0x1.d4aa78p-17f, 0x1.a652d4p-48f, 0x1.ef4b86p-125f, 0x1.c7dd92p-44f,
     0x1.99467p-50f, 0x1.55c5p-88f, 0.0f, 0x1.525a86p-85f, 0x1.0c1872p-36f, 0.0f,
     0x1.a211dcp-61f, 0.0f, 0.0f, 0x1.457da4p-71f, 0x1.1a29e4p-105f, 0x1.22f72ap-99f,
     0x1.77e078p-39f, 0x1.116028p-59f, 0.0f, 0.0f, 0x1.6d9d6cp-38f, 0x1.ed02ap-10f,
     0.0f, 0x1.069a06p-1f, 0.0f, 0x1.a5773ep-93f, 0.0f, 0.0f, 0x1.4d733p-17f, 0.0f,
     0x1.391372p-33f, 0x1.44b5acp-39f, 0x1.536c52p-92f, 0x1.fbff34p-73f,
     0x1.905dd4p-31f, 0.0f, 0x1.80992ep-52f, 0x1.daf796p-97f, 0x1.41e228p-58f,
     0x1.5be396p-69f, 0.0f, 0x1.359262p-95f, 0.0f, 0x1p0f, 0x1.e87d34p-66f, 0.0f,
     0.0f, 0x1.a0938ep-12f, 0x1.e975cp-117f, 0.0f, 0x1.f89962p-72f, 0x1.996a84p-118f,
     0.0f, 0x1.223acap-112f, 0.0f, 0.0f, 0.0f, 0x1.89a6d4p-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ff871cp-74f, 0x1.cbba9cp-104f, 0.0f, 0x1.960892p-15f,
     0x1.a7ef34p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c28004p-74f, 0.0f,
     0x1.1b98cep-64f, 0.0f, 0.0f, 0x1.b47988p-63f, 0.0f, 0x1.e8a75ep-92f,
     0x1.2c039ap-31f, 0.0f, 0x1.cbc5b4p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1dda2p-79f, 0x1.bc33p-72f, 0x1.2a268p-121f, 0x1.05aep-65f, 0x1.e9c1cep-14f,
     0.0f, 0x1.6be244p-38f, 0.0f, 0.0f, 0x1.f9412cp-105f, 0.0f, 0x1.85d6a4p-55f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.fb4478p-71f, 0x1.38f19p-16f, 0x1.5120dap-19f,
     0x1.d1bafep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7c188p-25f, 0.0f, 0.0f, 0x1.097a44p-123f, 0.0f, 0x1.0a05c8p-41f, 0.0f, 0.0f,
     0.0f, 0x1.0bcb7ep-9f, 0.0f, 0x1.71fe7ap-3f, 0x1.b8228p-2f, 0.0f, 0.0f,
     0x1.3db1e4p-16f, 0.0f, 0x1.ccfa8p-22f, 0.0f, 0x1.f2978p-55f, 0x1.0997d2p-101f,
     0.0f, 0.0f, 0.0f, 0x1.5e1e1cp-21f, 0x1.22edfep-117f, 0x1.cf4d04p-13f,
     0x1.1babf4p-4f, 0.0f, 0x1.21919ap-102f, 0.0f, 0.0f, 0.0f, 0x1.5e2342p-125f, 0.0f,
     0x1.0316bp-56f, 0x1.7491eap-66f, 0.0f, 0x1.429472p-12f, 0x1.edfdbcp-88f, 0.0f,
     0.0f, 0x1.1d03eap-97f, 0.0f, 0.0f, 0x1.2d388cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf4b6ep-15f, 0x1.d84586p-15f, 0x1.49a80cp-88f, 0.0f, 0.0f, 0x1.7fd2f8p-31f,
     0.0f, 0x1.fadf6p-116f, 0x1.a19ecep-117f, 0x1.7f1bcp-48f, 0x1.1cc786p-71f, 0.0f,
     0x1.7ebb42p-23f, 0.0f, 0x1.18f8eep-101f, 0x1.98545ap-41f, 0.0f, 0.0f,
     0x1.8b26f6p-112f, 0.0f, 0x1.d0f828p-90f, 0x1.b29388p-63f, 0.0f, 0.0f,
     0x1.876e42p-79f, 0x1.1595c6p-44f, 0x1.ab6e7ap-70f, 0x1.6ba7a2p-40f,
     0x1.560468p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2621ep-88f, 0.0f, 0.0f, 0.0f,
     0x1.3ceda6p-120f, 0.0f, 0.0f, 0x1.5d2a58p-23f, 0x1.e2c046p-39f, 0.0f, 0.0f, 0.0f,
     0x1.83eddap-104f, 0x1.541972p-79f, 0.0f, 0x1.e55f48p-77f, 0.0f, 0.0f, 0.0f,
     0x1.566d6cp-69f, 0x1.c8eb46p-68f, 0.0f, 0.0f, 0.0f, 0x1.a08fc8p-115f, 0.0f, 0.0f,
     0x1.c8c464p-9f, 0.0f, 0x1.5870a8p-8f, 0.0f, 0.0f, 0x1.6c75bap-70f, 0.0f,
     0x1.241c58p-94f, 0.0f, 0.0f, 0x1.2c569p-79f, 0x1.4814aep-118f, 0.0f, 0.0f, 0.0f,
     0x1.22e8c4p-106f, 0.0f, 0x1.ce6dep-108f, 0.0f, 0x1.ea44f8p-70f, 0x1.4f5624p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3e9bep-54f, 0x1.cc3cbcp-50f, 0x1.bba8aep-41f, 0.0f,
     0x1.a8a73p-46f, 0.0f, 0x1.8178fep-4f, 0x1.af3916p-106f, 0.0f, 0.0f,
     0x1.df9916p-63f, 0x1.0f909ap-71f, 0.0f, 0x1.e982e8p-46f, 0x1.55df46p-122f, 0.0f,
     0.0f, 0.0f, 0x1.fe100cp-17f, 0x1.c3d08ep-31f, 0.0f, 0x1.7e2336p-69f,
     0x1.bb111p-3f, 0.0f, 0x1.fd22dcp-45f, 0x1.d494e8p-98f, 0x1.1a7d78p-13f, 0.0f,
     0.0f, 0x1.8fb2b2p-84f, 0x1.9a77f2p-73f, 0x1.4b69f4p-7f, 0x1.34b228p-94f, 0.0f,
     0.0f, 0x1.1bfap-25f, 0x1.d45c8p-91f, 0.0f, 0x1.304a28p-45f, 0.0f, 0.0f,
     0x1.4677dp-3f, 0x1.71c66p-88f, 0.0f, 0x1.9b9aeep-16f, 0x1.bb239ap-32f, 0.0f,
     0x1.51887p-82f, 0.0f, 0.0f, 0x1.397ac6p-79f, 0x1.5415f6p-77f, 0x1.c645aep-103f,
     0x1.24177p-1f, 0.0f, 0x1.4613f4p-124f, 0.0f, 0x1.8f851ap-91f, 0x1.fec654p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.540c82p-105f, 0.0f, 0.0f, 0x1.f34208p-98f,
     0x1.5922a2p-57f, 0x1.73ee66p-76f, 0.0f, 0x1.5acf92p-44f, 0x1.9a3d0cp-55f,
     0x1.83195ep-59f, 0.0f, 0x1.66f4fcp-6f, 0.0f, 0x1.40e292p-49f, 0.0f,
     0x1.65e992p-122f, 0.0f, 0x1.a44936p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.004a0cp-62f,
     0x1.7d918ap-15f, 0.0f, 0x1.384d74p-94f, 0x1.261232p-82f, 0x1.52b1eap-102f,
     0x1.8969c4p-18f, 0.0f, 0x1.fd7e8ep-74f, 0.0f, 0.0f, 0.0f, 0x1.dd4e78p-92f, 0.0f,
     0.0f, 0x1.d6b324p-75f, 0.0f, 0.0f, 0x1.944958p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a36d6p-36f, 0.0f, 0x1.61b02ep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6c192p-111f, 0x1.6e19b6p-85f, 0x1.244886p-6f, 0.0f, 0x1.36e9dep-1f,
     0x1.e601bep-51f, 0.0f, 0x1.b4b06cp-88f, 0.0f, 0x1.3cae86p-76f, 0x1.7ce884p-25f,
     0.0f, 0x1p0f, 0x1.efb27p-100f, 0.0f, 0x1.0d57b8p-3f, 0x1.c895f8p-71f, 0.0f, 0.0f,
     0x1.8ef3b6p-106f, 0.0f, 0x1.ab89b8p-43f, 0.0f, 0.0f, 0.0f, 0x1.ce10eep-18f,
     0x1.ec3bdp-36f, 0.0f, 0x1.8c4104p-105f, 0x1.ae9de2p-113f, 0.0f, 0x1.30f744p-16f,
     0x1.5e5526p-96f, 0.0f, 0.0f, 0.0f, 0x1.440d38p-91f, 0x1.7a98bep-94f, 0.0f, 0.0f,
     0x1.e6daeap-1f, 0x1.7f1098p-94f, 0x1.0ab516p-93f, 0x1.c8510ap-83f, 0.0f, 0.0f,
     0x1.14403cp-47f, 0.0f, 0.0f, 0x1.b92eb8p-48f, 0.0f, 0x1.572326p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d3d672p-4f, 0.0f, 0.0f, 0.0f, 0x1.cb8f4cp-111f,
     0x1.7a5e78p-109f, 0.0f, 0x1.8562a4p-97f, 0.0f, 0x1.25c564p-27f, 0.0f, 0.0f,
     0x1.b533f6p-104f, 0.0f, 0.0f, 0x1.645902p-8f, 0.0f, 0.0f, 0x1.a1872p-55f,
     0x1.b3febp-59f, 0x1.22ac48p-21f, 0.0f, 0x1.610042p-8f, 0.0f, 0.0f,
     0x1.83e67ep-90f, 0x1.2596bap-107f, 0x1.74c24cp-24f, 0x1.b01a4ep-89f,
     0x1.493954p-125f, 0.0f, 0x1.e0e8ap-31f, 0.0f, 0.0f, 0x1.16f8p-99f, 0.0f, 0.0f,
     0.0f, 0x1.b240d6p-92f, 0x1.9a2016p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f79ad8p-47f,
     0.0f, 0x1.d40e8cp-90f, 0x1.311e7p-4f, 0.0f, 0x1.21a0e8p-44f, 0.0f, 0.0f,
     0x1.bdae76p-104f, 0.0f, 0x1.e74186p-4f, 0x1.02b59ep-64f, 0.0f, 0x1.eb86c6p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e34aa2p-79f, 0x1.90fd98p-18f,
     0x1.b87c9ep-104f, 0.0f, 0.0f, 0x1.7399a6p-118f, 0.0f, 0x1.fcb906p-50f, 0.0f,
     0x1.14209cp-6f, 0.0f, 0x1.8b90d6p-103f, 0x1.1377dap-88f, 0x1.4e8216p-13f
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
            tmp1 = Sleef_exp10f4_u10kvx(tmp0);
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
    printf("Sleef_exp10f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp10f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
