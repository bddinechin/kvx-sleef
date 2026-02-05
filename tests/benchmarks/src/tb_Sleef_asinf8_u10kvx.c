/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf8_u10kvx.c --function Sleef_asinf8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.029014p-25f, 0.0f, 0.0f, 0x1.0ce58ep-37f, 0x1.474dc8p-86f, 0.0f, 0.0f,
     0.0f, 0x1.17979p-4f, 0.0f, 0.0f, 0.0f, 0x1.2c45acp-61f, 0x1.ec712cp-111f, 0.0f,
     0x1p0f, 0.0f, 0x1.090d22p-20f, 0.0f, 0.0f, 0x1.3e8186p-24f, 0.0f,
     0x1.3cec18p-86f, 0.0f, 0.0f, 0.0f, 0x1.5a2ec2p-30f, 0.0f, 0.0f, 0.0f,
     0x1.699b8ap-18f, 0.0f, 0x1.309d0cp-27f, 0x1.45aaecp-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b1ba6p-73f, 0x1.cc36bep-17f, 0x1.6feedcp-5f, 0x1.fb7766p-66f, 0.0f,
     0x1.3fa8dap-65f, 0.0f, 0.0f, 0x1.d674c4p-114f, 0.0f, 0x1.31530cp-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8a1b74p-79f, 0x1.e7ea2ap-65f, 0.0f, 0x1.056652p-119f,
     0x1.6e3f74p-72f, 0.0f, 0.0f, 0.0f, 0x1.dd8e56p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b32acp-92f, 0.0f, 0.0f, 0.0f, 0x1.4fbb9p-35f, 0x1.00689cp-78f,
     0x1.92c174p-77f, 0.0f, 0x1.01d0a2p-103f, 0x1.50e2bp-50f, 0x1.4e364p-111f,
     0x1.2fee2cp-78f, 0.0f, 0x1.7c7634p-41f, 0.0f, 0.0f, 0x1.05eecep-120f, 0.0f,
     0x1.619168p-9f, 0x1.4ac7fap-91f, 0x1.44c2dp-68f, 0x1.9126ecp-106f,
     0x1.32212ap-122f, 0x1.d7d5d2p-85f, 0.0f, 0.0f, 0.0f, 0x1.75de24p-122f,
     0x1.905248p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a849cp-107f, 0.0f, 0.0f, 0.0f,
     0x1.d6cbdep-3f, 0.0f, 0x1.f7d654p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.654aa4p-15f,
     0.0f, 0.0f, 0x1.03d332p-104f, 0x1.3d1002p-24f, 0x1.f56486p-29f, 0.0f, 0.0f,
     0x1.e9d0fcp-61f, 0.0f, 0.0f, 0.0f, 0x1.9cdd34p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.135452p-2f, 0.0f, 0x1.f252a4p-82f, 0.0f, 0.0f, 0.0f, 0x1.1ba45p-66f, 0.0f,
     0x1.df1c9ep-89f, 0x1.ce3f2cp-25f, 0.0f, 0x1.0231fap-85f, 0x1.88f8cap-77f, 0.0f,
     0x1.509a1ap-110f, 0x1.6380eap-1f, 0x1.d0df3p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6cde8p-40f, 0x1.9d570cp-26f, 0.0f, 0.0f, 0.0f, 0x1.5c4ff2p-80f,
     0x1.7e23d4p-102f, 0x1.f1d08cp-66f, 0x1.b1412ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.144772p-110f, 0x1.64cc76p-70f, 0x1.2b1958p-47f, 0.0f,
     0x1.e07c94p-122f, 0.0f, 0.0f, 0x1.be3096p-57f, 0.0f, 0.0f, 0x1.02884ap-88f,
     0x1.51d6e8p-46f, 0.0f, 0.0f, 0.0f, 0x1.2e895p-10f, 0.0f, 0x1.5052e2p-58f, 0.0f,
     0.0f, 0.0f, 0x1.b53386p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bb27ep-67f,
     0x1.f159b8p-39f, 0x1.4dfbb6p-124f, 0x1.8602b8p-62f, 0.0f, 0x1.b02bbcp-40f, 0.0f,
     0x1.9e6982p-14f, 0.0f, 0x1.5780a4p-88f, 0x1.519a48p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df51fep-14f, 0.0f, 0.0f, 0x1.01a276p-78f,
     0x1.0011p-59f, 0.0f, 0x1.f65138p-106f, 0.0f, 0x1.53aa88p-88f, 0x1.1317bp-14f,
     0x1.f7fb2ep-110f, 0x1.a2e216p-88f, 0.0f, 0x1.6edf24p-28f, 0x1.d77202p-126f,
     0x1.56ee12p-105f, 0.0f, 0.0f, 0.0f, 0x1.984cbap-70f, 0.0f, 0x1.038ffap-115f,
     0.0f, 0.0f, 0.0f, 0x1.72cbb2p-84f, 0x1.09aa46p-57f, 0x1.a7cb92p-85f,
     0x1.df401ep-59f, 0x1.1bf0aep-82f, 0.0f, 0.0f, 0x1.6ed2ccp-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.288698p-68f, 0.0f, 0x1.7222b6p-112f, 0.0f, 0.0f, 0.0f,
     0x1.94db64p-32f, 0x1.6a15bap-87f, 0x1.9d9a6p-113f, 0.0f, 0x1.5736c6p-5f, 0.0f,
     0.0f, 0x1.195388p-94f, 0x1.02b75cp-77f, 0.0f, 0.0f, 0.0f, 0x1.a3117ep-125f, 0.0f,
     0x1.e5ba52p-89f, 0.0f, 0.0f, 0x1.bab78ap-119f, 0.0f, 0x1.1ef7fp-12f,
     0x1.863086p-56f, 0.0f, 0.0f, 0.0f, 0x1.3a7d76p-6f, 0x1.b0ba04p-44f,
     0x1.73469cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41d2a8p-89f, 0.0f, 0.0f,
     0x1.4b708ep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5978e2p-14f, 0.0f, 0x1.10196p-76f,
     0.0f, 0x1.5ec296p-77f, 0x1.efa472p-42f, 0x1.8f09c2p-6f, 0.0f, 0.0f,
     0x1.73803ap-20f, 0x1.960096p-105f, 0x1.95bda8p-101f, 0x1.4b2408p-87f, 0.0f,
     0x1.554e76p-110f, 0.0f, 0x1.0fd24cp-85f, 0.0f, 0x1.783322p-46f, 0x1.ca5186p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca2a84p-116f, 0.0f, 0.0f, 0x1.d60da8p-116f, 0.0f,
     0x1.a93f86p-52f, 0x1.d6ce32p-32f, 0.0f, 0x1.d53c52p-76f, 0x1.8d94dcp-71f,
     0x1.1a506p-24f, 0x1.7050cap-15f, 0x1.f9da38p-76f, 0x1.b122p-110f, 0.0f, 0.0f,
     0.0f, 0x1.d922b4p-15f, 0x1.cf66f4p-120f, 0x1.7bce9cp-76f, 0x1.a61068p-76f,
     0x1.0743e6p-49f, 0.0f, 0x1.e0e8bap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27e9d4p-114f, 0x1.fcc732p-12f, 0x1.350018p-11f, 0x1.764dccp-40f, 0.0f, 0.0f,
     0.0f, 0x1.7d30cep-7f, 0.0f, 0x1.9842e6p-88f, 0x1.24cf48p-85f, 0.0f, 0.0f, 0.0f,
     0x1.60948p-76f, 0x1.b8477ap-4f, 0.0f, 0.0f, 0.0f, 0x1.156c7cp-49f,
     0x1.464f9cp-74f, 0x1.12223ep-83f, 0.0f, 0.0f, 0x1.e1588cp-5f, 0.0f,
     0x1.5b0ecap-63f, 0x1.816836p-115f, 0x1.dbe82cp-25f, 0x1.127842p-124f, 0.0f,
     0x1.e72ae6p-49f, 0x1.ec576ep-18f, 0.0f, 0x1.c33d8cp-8f, 0x1.0e1002p-100f,
     0x1.f8ee88p-26f, 0x1.ecb66p-20f, 0x1.ddc5e2p-25f, 0x1.43144p-75f, 0x1.d211ep-95f,
     0.0f, 0x1.7ac5a2p-8f, 0.0f, 0x1.4deb54p-43f, 0.0f, 0.0f, 0x1.bcdc3ap-113f,
     0x1.bbda64p-23f, 0.0f, 0x1.5fc7f6p-103f, 0x1.a5303cp-77f, 0x1.48bc6cp-67f,
     0x1.79a556p-73f, 0x1.2be5bap-52f, 0.0f, 0.0f, 0x1.1390e4p-102f, 0.0f,
     0x1.9c92b2p-21f, 0x1.f433ecp-83f, 0.0f, 0.0f, 0x1.32a582p-67f, 0.0f, 0.0f, 0.0f,
     0x1.32900ep-54f, 0x1.7136dap-49f, 0.0f, 0x1.32e4c8p-99f, 0.0f, 0x1.543e4cp-37f,
     0.0f, 0x1.7b132ep-20f, 0.0f, 0x1.99e46ep-73f, 0x1.72a168p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.781612p-91f, 0x1.b19e7ep-46f, 0x1.b3336cp-95f, 0x1.e1e216p-31f,
     0x1.947ae8p-102f, 0x1.f20c8ap-54f, 0x1.40ab34p-107f, 0x1.723dep-113f, 0.0f,
     0x1.4b2bfp-41f, 0.0f, 0.0f, 0.0f, 0x1.f8e5eap-30f, 0x1.1ef4f2p-119f, 0.0f, 0.0f,
     0x1.f2dd74p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10db76p-68f,
     0x1.5dee8cp-73f, 0.0f, 0x1.18940ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04b00ap-25f,
     0.0f, 0x1.560e1cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b78aap-72f,
     0x1.81e00cp-18f, 0.0f, 0.0f, 0x1.a5ea5ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcbc28p-23f, 0.0f, 0x1.d71cfp-15f, 0.0f, 0.0f, 0x1.86ab8ep-33f,
     0x1.7b0d14p-28f, 0x1.536e7ep-89f, 0x1.2518fap-83f, 0.0f, 0x1.80e886p-101f, 0.0f,
     0.0f, 0x1.7b560cp-105f, 0.0f, 0.0f, 0x1.c1889p-52f, 0x1p0f, 0.0f, 0.0f,
     0x1.700602p-15f, 0x1.2a4698p-22f, 0x1.c992e8p-89f, 0x1.82b36ep-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c919fap-28f, 0x1.793b8ep-28f, 0.0f, 0x1.4d9edep-87f, 0.0f, 0.0f,
     0x1.7a3574p-70f, 0.0f, 0.0f, 0x1.d0fc5cp-53f, 0x1.ee642cp-33f, 0x1.fee1f2p-118f,
     0.0f, 0x1.3123fp-47f, 0.0f, 0.0f, 0.0f, 0x1.59fda8p-72f, 0.0f, 0.0f, 0.0f,
     0x1.b988cp-93f, 0x1.a061aep-83f, 0.0f, 0.0f, 0.0f, 0x1.0835f2p-82f,
     0x1.090d56p-105f, 0x1.e57c56p-88f, 0.0f, 0x1.33f64ap-47f, 0x1.1bec16p-84f,
     0x1.51dddap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0a61p-19f, 0x1.78165p-106f,
     0x1.6f953p-33f, 0x1.d64162p-104f, 0.0f, 0x1.5f1e4ep-80f, 0x1.10d8e6p-112f,
     0x1.7dd43p-112f, 0x1.6d33c8p-40f, 0x1.f5ee4ep-65f, 0.0f, 0x1.1ed6c2p-39f,
     0x1.b6e4eep-16f, 0.0f, 0.0f, 0x1.35e60ap-102f, 0x1.16dc3ap-49f, 0.0f, 0.0f,
     0x1.8083f8p-79f, 0.0f, 0x1.dd033cp-67f, 0x1.4f5bf4p-102f, 0.0f, 0x1.7dcf08p-89f,
     0.0f, 0.0f, 0x1.dd90eep-21f, 0.0f, 0.0f, 0.0f, 0x1.86acaep-7f, 0.0f,
     0x1.4f1618p-90f, 0x1.5e9954p-83f, 0x1.5a28d4p-13f, 0x1.95e7bp-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.75dd76p-126f, 0x1.70c79p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb861ep-94f, 0x1.533b12p-109f, 0.0f, 0.0f, 0.0f, 0x1.8666b6p-86f, 0.0f, 0.0f,
     0x1.360dfp-39f, 0x1.2ea1bcp-82f, 0x1.eac02ep-19f, 0x1.7d3382p-57f,
     0x1.26114cp-22f, 0.0f, 0.0f, 0x1.9c137ap-102f, 0x1.01e8a6p-102f, 0x1.7b79ep-51f,
     0x1.d186c2p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.588356p-78f, 0.0f, 0.0f,
     0x1.45e9f8p-54f, 0x1.1010d6p-42f, 0x1.8273b2p-38f, 0x1.1a3f14p-117f,
     0x1.9510aep-105f, 0.0f, 0x1.c1a1dcp-63f, 0.0f, 0x1.9b6e14p-118f, 0.0f,
     0x1.5bc2c8p-33f, 0.0f, 0.0f, 0.0f, 0x1.3d7a2ep-113f, 0.0f, 0x1.548cf6p-83f,
     0x1.f8b522p-110f, 0.0f, 0x1.c6cb5p-93f, 0x1.c55b3cp-87f, 0.0f, 0x1.22f71ap-27f,
     0x1.65ec3ep-64f, 0x1.717e78p-6f, 0x1.880d24p-50f, 0.0f, 0x1.71e2cep-79f, 0.0f,
     0x1.922fbp-125f, 0.0f, 0x1.31835ap-106f, 0.0f, 0x1.a5da66p-94f, 0x1.061602p-69f,
     0x1.952bb4p-90f, 0x1.c42c0ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8cd2cp-120f,
     0.0f, 0x1.78333p-57f, 0.0f, 0.0f, 0x1.e66f08p-25f, 0x1.12072p-67f,
     0x1.e91decp-3f, 0.0f, 0.0f, 0.0f, 0x1.67b266p-64f, 0.0f, 0x1.a72f66p-25f,
     0x1.2bce94p-117f, 0x1.7f1472p-77f, 0.0f, 0.0f, 0x1.c9e10ep-77f, 0.0f,
     0x1.bcd08cp-50f, 0x1.9cb916p-91f, 0.0f, 0.0f, 0.0f, 0x1.59fb3ep-99f,
     0x1.214ddap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d99178p-103f, 0x1.a3c82p-24f,
     0x1.224ca4p-17f, 0x1.a4c856p-67f, 0.0f, 0x1.4834aap-123f, 0x1.fa43cep-69f,
     0x1.e676d8p-73f, 0.0f, 0.0f, 0.0f, 0x1.3af57ep-114f, 0x1.60487ap-76f,
     0x1.51538ep-75f, 0x1.3ac042p-2f, 0x1.e85d98p-106f, 0x1.be7d2cp-124f, 0.0f,
     0x1.328404p-93f, 0.0f, 0x1.fac66cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a2816p-115f,
     0x1.ecf158p-17f, 0x1.ede7c8p-12f, 0.0f, 0x1.7de3cep-92f, 0x1.ff3f36p-42f, 0.0f,
     0x1.503a24p-89f, 0.0f, 0.0f, 0x1.39eb42p-126f, 0.0f, 0.0f, 0x1.6481c2p-50f,
     0x1.19534cp-91f, 0.0f, 0.0f, 0x1.e5dbaep-71f, 0x1.a2d21ap-111f, 0.0f,
     0x1.8b811cp-84f, 0.0f, 0x1.0dcd9ep-54f, 0x1.f584aap-124f, 0x1.60c93cp-49f,
     0x1.45ebf6p-125f, 0x1.ec94bep-125f, 0x1.32e054p-108f, 0.0f, 0x1.aba1a4p-55f,
     0x1p0f, 0x1.59f8dep-61f, 0.0f, 0.0f, 0x1.575592p-51f, 0.0f, 0x1.0beeaep-52f,
     0.0f, 0x1.e1f892p-65f, 0.0f, 0x1.12e1cap-1f, 0.0f, 0x1.601c72p-106f,
     0x1.9ce966p-95f, 0x1.e7571ep-63f, 0.0f, 0.0f, 0x1.c2d02ap-47f, 0.0f, 0.0f, 0.0f,
     0x1.f4670ap-52f, 0x1.67b15ap-17f, 0.0f, 0x1.280204p-36f, 0x1.5e1c98p-24f,
     0x1.361ce6p-103f, 0x1.a390fap-83f, 0.0f, 0.0f, 0.0f, 0x1.aefb8cp-55f, 0.0f, 0.0f,
     0x1.322edcp-49f, 0.0f, 0x1.cbefdep-2f, 0.0f, 0.0f, 0x1.391bd8p-48f, 0.0f,
     0x1.4d75bep-14f, 0x1.70f9fap-42f, 0x1.2bbc3p-76f, 0.0f, 0x1.4b26dcp-17f, 0.0f,
     0x1.473b72p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.671cfp-27f, 0x1.5474e6p-115f, 0.0f,
     0.0f, 0.0f, 0x1.8f7af2p-55f, 0.0f, 0.0f, 0x1.728ebap-48f, 0x1.4815dap-4f,
     0x1.783c4ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef6428p-9f, 0.0f, 0.0f, 0.0f,
     0x1.24b29cp-101f, 0x1.ee3adp-12f, 0.0f, 0.0f, 0x1.068ee8p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6fb3ap-49f, 0.0f, 0x1.5730dap-51f, 0.0f, 0.0f, 0x1.47d31ap-100f,
     0x1.06fcc6p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0e2aep-76f, 0.0f, 0x1.637dfcp-111f,
     0x1.cc9a72p-96f, 0x1.b714ep-5f, 0x1.8c6d4ap-60f, 0.0f, 0.0f, 0x1.6e69ep-15f,
     0x1.4458dap-74f, 0x1.e4e128p-54f, 0.0f, 0x1.735488p-99f, 0x1.a216e2p-20f,
     0x1.090ba2p-124f, 0.0f, 0.0f, 0.0f, 0x1.0b31dcp-104f, 0.0f, 0.0f,
     0x1.e79f58p-61f, 0x1.7914dp-36f, 0x1.f659aap-49f, 0.0f, 0x1.728ffcp-4f, 0.0f,
     0.0f, 0.0f, 0x1.888b1ap-102f, 0x1.6b76b2p-99f, 0.0f, 0x1.b19eaap-40f,
     0x1.68a5bp-52f, 0.0f, 0.0f, 0x1.4a633ap-121f, 0.0f, 0x1.be6b4ap-9f,
     0x1.902ef8p-43f, 0.0f, 0x1.65617p-76f, 0.0f, 0x1.5033f6p-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1edd92p-77f, 0.0f, 0x1.1cd3bcp-30f, 0.0f, 0x1.6c8d04p-14f,
     0x1.270cbcp-2f, 0x1.b24b7ep-54f, 0.0f, 0x1.7af4bcp-16f, 0.0f, 0x1.b76406p-37f,
     0x1.f2441ap-20f, 0.0f, 0.0f, 0x1.56d532p-26f, 0.0f, 0.0f, 0x1.7d7288p-23f,
     0x1.ca9c2cp-9f, 0.0f, 0x1.557dc2p-114f, 0x1.7c84f6p-86f, 0.0f, 0.0f,
     0x1.024cp-126f, 0x1.d2d21ep-52f, 0.0f, 0.0f, 0.0f, 0x1.f669bp-32f, 0.0f,
     0x1.3863f4p-4f, 0.0f, 0x1.108b0cp-123f, 0.0f, 0x1.c11ea8p-79f, 0x1.3afe98p-56f,
     0.0f, 0.0f, 0x1.f9d458p-50f, 0x1.026c0ep-105f, 0x1.456f5ap-45f, 0.0f,
     0x1.dc3432p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e1f94p-88f, 0.0f, 0x1.3de182p-10f,
     0x1.6d449ep-53f, 0.0f, 0x1.6fe062p-83f, 0x1.26c912p-109f, 0.0f, 0x1.cf636ap-91f,
     0.0f, 0x1.98f196p-9f, 0x1.7e55d8p-56f, 0x1.8d05a4p-119f, 0x1.5e5844p-115f, 0.0f,
     0x1.db67acp-78f, 0.0f, 0.0f, 0.0f, 0x1.de0874p-117f, 0x1.74e01ep-61f,
     0x1.7fdf62p-102f, 0x1.442748p-98f, 0x1.d584f4p-57f, 0x1.a94218p-48f,
     0x1.141432p-71f, 0.0f, 0x1.4f3552p-47f, 0.0f, 0x1.fb4766p-3f, 0.0f, 0.0f, 0.0f,
     0x1.ecb902p-81f, 0.0f, 0.0f, 0x1.30111p-113f, 0.0f, 0.0f, 0.0f, 0x1.e55038p-114f,
     0.0f, 0.0f, 0x1.be0136p-31f, 0x1.257c0ap-10f, 0x1.a4fe0cp-82f, 0.0f, 0.0f,
     0x1.cfad4ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f2fc4p-54f, 0.0f, 0.0f, 0.0f, 0x1.d08f6p-53f, 0x1.df2034p-84f, 0.0f, 0.0f,
     0x1.cd7b56p-50f, 0x1.5a9c74p-100f
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
            tmp1 = Sleef_asinf8_u10kvx(tmp0);
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
    printf("Sleef_asinf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_asinf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
