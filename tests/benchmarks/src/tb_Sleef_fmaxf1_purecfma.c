/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmaxf1_purecfma.c --function Sleef_fmaxf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.80765cp-114f, 0x1.c4d87cp-16f, 0x1.341386p-110f, 0.0f, 0x1.7801b4p-39f,
     0.0f, 0x1.5de142p-68f, 0x1.3a0e8p-25f, 0x1.a3a7d6p-31f, 0.0f, 0x1.83d538p-50f,
     0.0f, 0.0f, 0.0f, 0x1.3c0bfep-115f, 0x1.d3f07cp-33f, 0x1.ba1d44p-54f, 0.0f,
     0x1.bde778p-79f, 0x1.738b34p-53f, 0.0f, 0.0f, 0x1.fdbff2p-54f, 0x1.f889d6p-18f,
     0x1.339eb8p-15f, 0.0f, 0x1.f829ep-46f, 0x1.06f1eap-105f, 0x1.71a0c8p-17f,
     0x1.6dbf4p-20f, 0.0f, 0.0f, 0.0f, 0x1.ae002ep-82f, 0x1.61a2fp-74f,
     0x1.0f083cp-21f, 0.0f, 0x1.953e6p-110f, 0x1.a6f9acp-72f, 0x1.b6fef6p-125f, 0.0f,
     0x1.174cf2p-121f, 0.0f, 0.0f, 0x1.e85cfep-41f, 0.0f, 0x1.fa144ep-6f, 0.0f,
     0x1.9a83a8p-101f, 0.0f, 0x1.c26152p-48f, 0x1.9e3baep-40f, 0x1.64a9bcp-108f, 0.0f,
     0.0f, 0.0f, 0x1.b563e2p-46f, 0x1.e4b86p-103f, 0x1.985e14p-115f, 0x1.36145ep-102f,
     0x1.e57658p-27f, 0x1.10fbeap-117f, 0.0f, 0.0f, 0.0f, 0x1.69bffcp-100f, 0.0f,
     0x1.5884c8p-99f, 0.0f, 0.0f, 0x1.2af904p-59f, 0x1.e700dp-114f, 0x1.a62e9ep-77f,
     0x1.914b48p-90f, 0x1.2108fap-57f, 0.0f, 0x1.6b1dc2p-22f, 0x1.7976cep-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5b51b2p-90f, 0.0f, 0x1.f0d18cp-31f, 0x1.824cd6p-112f, 0.0f,
     0.0f, 0x1.62ae9ep-8f, 0x1.22d06ap-80f, 0x1.64820ep-9f, 0x1.4576a6p-39f, 0.0f,
     0.0f, 0.0f, 0x1.76e64ap-40f, 0x1.aff45ap-67f, 0.0f, 0.0f, 0.0f, 0x1.9a6914p-106f,
     0.0f, 0x1.50718ep-98f, 0x1.d4cef2p-29f, 0.0f, 0.0f, 0x1.74d3aap-101f, 0.0f,
     0x1.d5ad3ep-10f, 0x1.3c04b8p-117f, 0.0f, 0x1.6fc10ep-17f, 0.0f, 0.0f,
     0x1.95ef4ep-82f, 0.0f, 0x1.a4ba3ap-99f, 0x1.5124acp-13f, 0.0f, 0.0f,
     0x1.9bc67ap-71f, 0.0f, 0.0f, 0.0f, 0x1.cc2566p-58f, 0.0f, 0.0f, 0x1.05b67p-108f,
     0.0f, 0x1.081282p-81f, 0x1.8a674ap-64f, 0x1.7d530cp-96f, 0x1.b153p-111f,
     0x1.83e0cap-124f, 0.0f, 0x1.cd4da8p-27f, 0x1.857168p-98f, 0.0f, 0x1.108d1cp-125f,
     0.0f, 0x1.2ffd08p-51f, 0x1.66ef2cp-77f, 0x1.1ff28p-113f, 0x1.a704cep-73f,
     0x1.fe8ed2p-84f, 0.0f, 0x1.651596p-27f, 0.0f, 0.0f, 0.0f, 0x1.84c9cp-75f, 0.0f,
     0x1.f22daap-75f, 0.0f, 0x1.0e33a4p-58f, 0.0f, 0.0f, 0x1.6afb94p-102f,
     0x1.bdaafep-118f, 0.0f, 0.0f, 0.0f, 0x1.c0b7bp-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f959ep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d06cdep-77f, 0x1.2ab882p-9f,
     0x1.7eb5d6p-10f, 0.0f, 0.0f, 0x1.3194eap-64f, 0x1.0a9eb2p-51f, 0x1.3a650ap-120f,
     0x1.8424f2p-94f, 0x1.b0d006p-104f, 0.0f, 0.0f, 0x1.23d95ep-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd3808p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c92b0ep-1f,
     0x1.4d0a1ap-121f, 0x1.38f3f8p-31f, 0.0f, 0.0f, 0x1.a7ec4ep-65f, 0x1.5251f6p-14f,
     0.0f, 0.0f, 0.0f, 0x1.4fc4dep-80f, 0x1.d0295cp-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da4214p-31f, 0x1.c9bb8ep-57f, 0.0f, 0.0f, 0x1.5f3a36p-81f, 0x1.4615f2p-32f,
     0.0f, 0x1.80aa22p-97f, 0x1.fc12bap-51f, 0x1.7cd39cp-115f, 0.0f, 0x1p0f, 0.0f,
     0x1.9a3b4cp-21f, 0x1.81ffecp-88f, 0.0f, 0x1.9451d2p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.026d28p-19f, 0.0f, 0.0f, 0.0f, 0x1.1dca7cp-32f,
     0x1.a630dcp-55f, 0x1.f15e7ep-94f, 0x1.8879f2p-120f, 0.0f, 0x1.0d21aap-99f,
     0x1.41b9a2p-18f, 0x1.c97b06p-110f, 0x1.e221cp-125f, 0.0f, 0x1.63f0eap-20f, 0.0f,
     0x1.d948a6p-17f, 0x1.35fc28p-80f, 0.0f, 0.0f, 0.0f, 0x1.afcec2p-126f, 0.0f, 0.0f,
     0x1.981436p-74f, 0x1.b5185p-123f, 0x1.51097p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e0e1cp-120f, 0.0f, 0x1.8369e4p-126f, 0x1.34909ep-66f, 0.0f, 0x1.9250f6p-20f,
     0.0f, 0x1.2cc8d2p-71f, 0x1.631004p-91f, 0.0f, 0.0f, 0x1.322f8ap-25f, 0.0f, 0.0f,
     0x1.07c0ecp-63f, 0x1.1c869ep-61f, 0.0f, 0x1.13372cp-35f, 0x1.064954p-120f, 0.0f,
     0x1.9ff6d8p-27f, 0.0f, 0.0f, 0x1.de64e2p-4f, 0x1.203f4p-7f, 0x1.6899a6p-55f,
     0.0f, 0.0f, 0x1.8af806p-15f, 0x1.b7888cp-4f, 0.0f, 0x1.3ba73ap-78f, 0.0f,
     0x1.301e7cp-111f, 0.0f, 0.0f, 0x1.84eee6p-112f, 0x1.4459b2p-70f, 0.0f, 0.0f,
     0x1.53632cp-114f, 0x1.82785ep-119f, 0.0f, 0.0f, 0x1.3fa728p-38f, 0.0f, 0.0f,
     0x1.c05bc6p-98f, 0x1.302f0cp-88f, 0.0f, 0x1.4c4daap-78f, 0.0f, 0x1.d5329cp-71f,
     0.0f, 0x1.4617c4p-43f, 0x1.20f2ap-124f, 0x1.33a8fcp-15f, 0.0f, 0x1.927cd8p-102f,
     0x1.e23e5cp-5f, 0.0f, 0.0f, 0x1.3fbe7p-107f, 0x1.a14c76p-48f, 0.0f, 0.0f,
     0x1.975928p-33f, 0.0f, 0.0f, 0x1.efeb06p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b8edep-22f, 0x1.cedfb8p-56f, 0x1.48a4ccp-2f, 0.0f, 0.0f, 0x1.c1c6cep-18f,
     0x1.6f4edcp-25f, 0.0f, 0.0f, 0x1.4bd946p-101f, 0.0f, 0.0f, 0x1.42c77p-53f,
     0x1.c3fc3cp-112f, 0x1.9a5e38p-37f, 0.0f, 0x1.9dd4fp-113f, 0x1.c86288p-49f, 0.0f,
     0x1.dd810ep-4f, 0x1.f05e68p-116f, 0.0f, 0.0f, 0x1.bb6388p-59f, 0x1.6b141cp-96f,
     0x1.c2c9b2p-32f, 0.0f, 0x1.838794p-104f, 0x1.4e3228p-95f, 0.0f, 0.0f,
     0x1.89a79ap-55f, 0.0f, 0x1.ab3f38p-6f, 0.0f, 0x1.5fd7fp-6f, 0.0f,
     0x1.bc4b54p-10f, 0.0f, 0.0f, 0x1.c034fp-107f, 0x1.5fa71p-88f, 0.0f,
     0x1.1d8954p-85f, 0.0f, 0.0f, 0x1.e892c6p-112f, 0.0f, 0x1.97f548p-115f, 0.0f,
     0x1.00eacp-65f, 0.0f, 0x1.220198p-108f, 0.0f, 0.0f, 0.0f, 0x1.2a5382p-81f,
     0x1.d3a554p-57f, 0.0f, 0x1.dd688ep-57f, 0.0f, 0.0f, 0x1.60e628p-60f, 0.0f,
     0x1.36c31cp-11f, 0.0f, 0.0f, 0x1.13158cp-113f, 0.0f, 0x1.cf72a8p-117f, 0.0f,
     0.0f, 0x1.df31cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3cb4d4p-57f, 0.0f,
     0x1.1aac2p-24f, 0x1.c5551ap-86f, 0.0f, 0x1.f39c04p-39f, 0.0f, 0.0f,
     0x1.8514p-90f, 0x1.26c384p-81f, 0x1.e60614p-28f, 0.0f, 0.0f, 0x1.9b6b4ep-124f,
     0.0f, 0x1.170f04p-126f, 0x1.890d36p-92f, 0x1.208bdcp-103f, 0x1.5ac0a8p-85f,
     0x1.5733fcp-53f, 0x1.2e1fe8p-2f, 0.0f, 0.0f, 0x1.a47c4p-78f, 0x1.189936p-42f,
     0x1.af1d78p-31f, 0.0f, 0x1.fbe02ep-51f, 0x1.34048p-92f, 0x1.166036p-25f, 0.0f,
     0x1.47aecep-58f, 0x1.77ddbp-49f, 0.0f, 0x1.3d49eap-22f, 0x1.33db72p-108f,
     0x1.173d9cp-13f, 0x1.c30ee4p-17f, 0x1.4d5052p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f55c72p-95f, 0.0f, 0.0f, 0.0f, 0x1.1b2658p-19f, 0x1.9ca5aep-34f, 0.0f,
     0x1.caa778p-71f, 0.0f, 0x1.9dc816p-41f, 0.0f, 0x1.403368p-56f, 0x1.fe91bap-88f,
     0.0f, 0.0f, 0x1.7bfcep-9f, 0.0f, 0.0f, 0x1.603f2cp-101f, 0x1.eca7ep-64f, 0.0f,
     0x1.535d5ap-30f, 0.0f, 0x1.8a8b12p-18f, 0.0f, 0x1.4ca1p-126f, 0x1.3dcef4p-67f,
     0.0f, 0.0f, 0x1.749d8p-125f, 0x1.0cef9ap-46f, 0.0f, 0x1.48edf2p-14f, 0x1p0f,
     0x1.c44f64p-122f, 0x1.e6e3c4p-21f, 0.0f, 0.0f, 0x1.03dd92p-105f, 0x1.d7eadap-97f,
     0.0f, 0x1.c549dep-79f, 0.0f, 0x1.d885aep-12f, 0.0f, 0x1.2cf77ep-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3d5b88p-61f, 0.0f, 0.0f, 0.0f, 0x1.993aep-9f, 0.0f,
     0x1.a3e86p-32f, 0x1.ad2884p-3f, 0x1.9a3a46p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1b2f2p-2f, 0.0f, 0x1.250426p-43f, 0.0f, 0x1.802b22p-19f, 0x1.9e8edp-76f,
     0.0f, 0x1.bf8facp-117f, 0.0f, 0x1.d08c5cp-74f, 0x1.f796cep-52f, 0.0f,
     0x1.7b65b8p-91f, 0x1.f588cp-92f, 0x1.fa05a6p-35f, 0x1.71d554p-45f,
     0x1.92ded2p-32f, 0x1.31f77ap-75f, 0x1.99ba2ap-121f, 0.0f, 0x1.280f26p-97f, 0.0f,
     0.0f, 0x1.d9eeeep-10f, 0x1.9e69cap-84f, 0.0f, 0x1.7939c4p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4798ap-47f, 0.0f, 0.0f, 0x1.342616p-18f, 0.0f, 0.0f, 0x1.f9c964p-80f,
     0x1.55e15ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43f0eep-60f, 0x1.0da35ep-114f,
     0.0f, 0.0f, 0x1.e39024p-102f, 0x1.634178p-2f, 0.0f, 0.0f, 0x1.c8d1d2p-122f, 0.0f,
     0x1.39804cp-110f, 0.0f, 0x1.c664bep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b151bep-45f,
     0.0f, 0x1.608dfp-118f, 0x1.c602f8p-73f, 0.0f, 0.0f, 0.0f, 0x1.026622p-66f, 0.0f,
     0.0f, 0.0f, 0x1.c122p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78247p-1f,
     0x1.6516f8p-93f, 0.0f, 0x1.04a164p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a9664p-55f,
     0x1.7b0fd4p-63f, 0x1.22ec22p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6caa8ep-88f, 0.0f,
     0.0f, 0x1.38a7fcp-89f, 0x1.25a95cp-98f, 0.0f, 0x1.5ef01ep-44f, 0x1.5a23f8p-63f,
     0x1.39b89p-61f, 0.0f, 0x1.081d2ep-61f, 0x1.9793f6p-126f, 0.0f, 0x1.4a966cp-39f,
     0x1.a71644p-75f, 0x1.8945bap-24f, 0.0f, 0x1.f288cp-47f, 0x1.5ad0d2p-1f,
     0x1.178652p-9f, 0.0f, 0x1.f9599cp-70f, 0x1.520d5p-92f, 0x1.a06a06p-101f,
     0x1.956d0cp-118f, 0.0f, 0.0f, 0.0f, 0x1.bd705ap-113f, 0.0f, 0.0f,
     0x1.3ae324p-30f, 0.0f, 0x1.f7f894p-108f, 0.0f, 0x1.969a02p-45f, 0x1.85b00ap-84f,
     0.0f, 0x1.c424cp-95f, 0x1.8a8e3ep-7f, 0x1.e3cf26p-95f, 0.0f, 0x1.bd7c6cp-30f,
     0.0f, 0.0f, 0.0f, 0x1.63b5eap-6f, 0x1.71eda2p-83f, 0x1.898dfep-26f, 0.0f, 0.0f,
     0.0f, 0x1.d15162p-42f, 0.0f, 0.0f, 0x1.47bea8p-116f, 0.0f, 0x1.650edp-77f, 0.0f,
     0.0f, 0x1.152aa6p-49f, 0.0f, 0.0f, 0.0f, 0x1.51f87ap-95f, 0.0f, 0x1.0b993p-44f,
     0.0f, 0x1.7d2facp-105f, 0x1.c2dd9cp-115f, 0.0f, 0x1.11e382p-118f, 0.0f,
     0x1.bb6d98p-23f, 0.0f, 0.0f, 0.0f, 0x1.528f7ep-37f, 0.0f, 0.0f, 0.0f,
     0x1.561de6p-115f, 0.0f, 0.0f, 0.0f, 0x1.ff2514p-51f, 0x1.b74eeep-13f,
     0x1.4a5deap-60f, 0.0f, 0.0f, 0x1.ed2592p-4f, 0x1.b45408p-57f, 0.0f,
     0x1.494aa8p-25f, 0.0f, 0x1.720624p-100f, 0.0f, 0x1.d56a12p-77f, 0x1.4c5126p-73f,
     0x1.4d745ap-103f, 0x1.5b3de6p-11f, 0x1.949742p-47f, 0.0f, 0x1.0cee3p-90f, 0.0f,
     0x1.db4e1p-69f, 0.0f, 0x1.cd73c6p-36f, 0.0f, 0x1.eee87ap-61f, 0.0f,
     0x1.41fffcp-3f, 0x1.ddb1aep-45f, 0.0f, 0x1.316056p-74f, 0.0f, 0.0f,
     0x1.691674p-6f, 0x1.b9db78p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.739d3ep-46f, 0.0f, 0x1.98e238p-37f, 0.0f, 0x1.4f4126p-73f, 0.0f,
     0x1.ee135cp-58f, 0.0f, 0x1.5a494ap-9f, 0.0f, 0.0f, 0x1.8813cap-107f,
     0x1.183fcap-6f, 0x1.07d9dep-52f, 0x1.bc00bep-2f, 0.0f, 0.0f, 0.0f,
     0x1.e4c8c8p-82f, 0.0f, 0x1.fd45dep-64f, 0x1.116a4ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.07c1bap-90f, 0.0f, 0.0f, 0x1.892a5p-11f, 0.0f, 0.0f, 0.0f, 0x1.d1f4b4p-13f,
     0.0f, 0.0f, 0x1.87cecp-42f, 0.0f, 0.0f, 0x1.f4b04ep-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76b12ep-30f, 0x1.886f16p-53f, 0x1.1d71cep-124f, 0.0f, 0.0f, 0x1.8a70e8p-76f,
     0x1.03604ap-52f, 0x1.3c0674p-22f, 0.0f, 0x1.ec0038p-66f, 0x1.63836ep-42f,
     0x1.123c2ep-121f, 0.0f, 0x1.0ff9cp-77f, 0x1.f20594p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.874f5p-56f, 0.0f, 0.0f, 0.0f, 0x1.a6d56p-91f, 0.0f, 0x1.dfc3e2p-83f, 0.0f,
     0.0f, 0x1.2ba9bap-119f, 0x1.a981a8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.990f76p-85f,
     0.0f, 0x1.f4ea24p-125f, 0.0f, 0.0f, 0x1.08f36ep-72f, 0.0f, 0x1.3b9d76p-64f, 0.0f,
     0.0f, 0.0f, 0x1.91106ep-125f, 0x1.ab21a4p-110f, 0.0f, 0.0f, 0x1.d918c4p-51f,
     0.0f, 0.0f, 0x1.0393cep-57f, 0x1.4e3298p-112f, 0x1.ccb81cp-66f, 0x1.80d902p-63f,
     0.0f, 0.0f, 0.0f, 0x1.477aeap-81f, 0.0f, 0x1.cc59ep-95f, 0x1.651188p-50f,
     0x1.5db9fep-45f, 0x1.a8259ep-60f, 0.0f, 0x1.86bd2ep-29f, 0x1.378368p-22f, 0.0f,
     0.0f, 0.0f, 0x1.48a556p-48f, 0.0f, 0x1.ce6e86p-52f, 0.0f, 0x1.502e8ep-18f, 0.0f,
     0x1.903504p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d06aap-38f, 0.0f,
     0x1.4151c2p-80f, 0.0f, 0x1.d9f1bep-94f, 0x1.cde0aep-48f, 0x1.05c62cp-113f, 0.0f,
     0.0f, 0x1.ae8988p-2f, 0.0f, 0x1.9b9058p-40f, 0.0f, 0.0f, 0.0f, 0x1.620c9p-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75eb22p-85f, 0.0f, 0x1.086532p-63f, 0.0f, 0.0f,
     0.0f, 0x1.7c952p-124f, 0.0f, 0.0f, 0.0f, 0x1.60858ep-17f, 0x1.8514dp-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4cfd3p-104f, 0x1.80da3p-47f, 0.0f, 0.0f, 0.0f,
     0x1.f8213p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f258acp-68f,
     0x1.2fb1cp-33f, 0.0f, 0.0f, 0x1.d6ce1p-62f, 0x1.b20918p-122f, 0.0f, 0.0f,
     0x1.19a4cp-47f, 0.0f, 0.0f, 0x1.aed0e4p-16f, 0.0f, 0.0f, 0x1.670c3ep-122f, 0.0f,
     0.0f, 0x1.24c3b6p-56f, 0x1.bb1b56p-61f, 0x1.e3198p-81f, 0x1.883eaep-44f,
     0x1.87f91p-72f, 0x1.1c7cfep-64f, 0x1.76b69cp-58f, 0.0f, 0x1.9e069p-28f, 0.0f,
     0x1.5ce306p-85f, 0x1.42e61p-54f, 0x1.03140ap-105f, 0x1.606502p-67f, 0.0f,
     0x1.d8fd54p-40f, 0x1.29a046p-24f, 0.0f, 0.0f, 0.0f, 0x1.d9e68ap-113f, 0.0f, 0.0f,
     0x1.ce8cp-23f, 0x1.55bdb4p-10f, 0.0f, 0.0f, 0x1.c9db8p-52f, 0x1.6998e6p-26f,
     0x1p0f, 0.0f, 0x1.932f26p-19f, 0x1.39ad16p-33f, 0x1.22f5e6p-52f, 0.0f,
     0x1.4fc5e6p-85f, 0x1.e6a384p-93f, 0.0f, 0x1.49628cp-36f, 0.0f, 0.0f,
     0x1.8bee86p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6f76ep-17f,
     0x1.d302ecp-13f, 0x1.778268p-53f, 0.0f, 0x1.2d8834p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.05b3fp-101f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.6b4fd4p-60f, 0x1.34f764p-106f, 0x1.9f1792p-89f, 0x1.5f7dfcp-75f,
     0x1.8f77fap-13f, 0.0f, 0x1.4332bp-126f, 0x1.26b64ep-82f, 0x1.d2e228p-50f,
     0x1.0ff966p-13f, 0x1.b87604p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dc7b6p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.530a42p-64f, 0x1.59c3ccp-2f,
     0x1.7a569ep-45f, 0x1.cef4eep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a79928p-70f, 0x1.4e274cp-27f, 0.0f, 0x1.71f116p-44f, 0.0f, 0.0f,
     0x1.28c38cp-39f, 0x1.9ab5aep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.05522ep-122f, 0.0f, 0x1.1cc6fep-89f, 0.0f, 0.0f, 0.0f, 0x1.31622p-70f,
     0x1.e8ccfep-48f, 0.0f, 0x1.593d6cp-101f, 0x1.e127cep-95f, 0x1.1c71bcp-107f,
     0x1.ee70d4p-49f, 0.0f, 0x1.4ea1bep-114f, 0x1.912152p-16f, 0x1.41b778p-56f, 0.0f,
     0x1.091b16p-51f, 0.0f, 0x1.834958p-26f, 0.0f, 0x1.5a803ep-15f, 0x1.2ac286p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0518d6p-47f, 0x1.31f0c8p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ef3ff2p-100f, 0x1.fc6416p-81f, 0x1.ad14bcp-121f, 0x1.5b7c52p-113f,
     0x1.0da91cp-22f, 0.0f, 0x1.ae1448p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c9d1cp-14f,
     0x1.1484a4p-47f, 0.0f, 0x1.64e35ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.399d58p-20f,
     0x1.ab59b4p-119f, 0x1.f7ad14p-124f, 0.0f, 0x1.d6691p-97f, 0.0f, 0x1.94d63p-84f,
     0.0f, 0x1.97355p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85d244p-79f, 0x1.3d14dep-23f,
     0x1.36293cp-92f, 0.0f, 0x1.4a2b4ap-6f, 0x1.a6ef0cp-34f, 0.0f, 0x1.8fa35ep-34f,
     0.0f, 0x1.29b23ap-116f, 0.0f, 0.0f, 0.0f, 0x1.512008p-17f, 0x1.66f5e8p-39f,
     0x1.5dc8aap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1535cep-56f, 0x1.b66e3ep-30f,
     0x1.45812ep-53f, 0.0f, 0x1.5442e8p-29f, 0x1.563f1cp-58f, 0.0f, 0x1.8967cap-117f,
     0x1.9d0b0ep-91f, 0x1.b7e0f8p-56f, 0.0f, 0.0f, 0.0f, 0x1.451934p-36f,
     0x1.f4749p-79f, 0.0f, 0x1.f295b2p-83f, 0x1.8999cap-26f, 0x1.e01d9p-124f,
     0x1.d7324ap-18f, 0.0f, 0x1.eb908ep-29f, 0.0f, 0.0f, 0x1.318638p-10f,
     0x1.4bc37ap-86f, 0x1.e30cdp-19f, 0x1.3d775ap-72f, 0.0f, 0x1.db5216p-85f, 0.0f,
     0.0f, 0.0f, 0x1.b95ab4p-7f, 0.0f, 0.0f, 0.0f, 0x1.c85d7ap-47f, 0.0f, 0.0f,
     0x1.7f3ec4p-16f, 0x1.1c94dap-53f, 0x1.6bb386p-58f, 0x1.42aa94p-101f, 0x1p0f,
     0x1.99d684p-88f, 0x1.79c926p-51f, 0.0f, 0.0f, 0x1.57842p-103f, 0x1.de7bdp-117f,
     0x1.aff1acp-107f, 0x1.6b20b6p-125f, 0.0f, 0.0f, 0.0f, 0x1.0337cap-82f,
     0x1.5de5e8p-105f, 0.0f, 0x1.dacc04p-110f, 0.0f, 0.0f, 0x1.fe1ea6p-117f,
     0x1.d3ce38p-34f, 0.0f, 0x1.057f4ap-50f, 0.0f, 0.0f, 0x1.95eb16p-104f, 0.0f, 0.0f,
     0x1.2b55b8p-118f, 0.0f, 0x1.f905c8p-64f, 0x1.e3eebep-121f, 0.0f,
     0x1.3cc11ap-106f, 0.0f, 0.0f, 0x1.85d2a8p-107f, 0.0f, 0.0f, 0.0f,
     0x1.27cb5cp-53f, 0x1.8c06aep-60f, 0x1.b13d28p-41f, 0.0f, 0.0f, 0x1.79e748p-112f,
     0.0f, 0x1.b69c98p-88f, 0x1.9639d6p-19f, 0x1.0da7a8p-78f, 0x1.240c08p-122f, 0.0f,
     0x1.c71c4cp-15f, 0.0f, 0.0f, 0x1.70cedcp-27f, 0x1.c44e64p-88f, 0.0f,
     0x1.3b2808p-34f, 0.0f, 0.0f, 0x1.563232p-124f, 0.0f, 0.0f, 0.0f, 0x1.d82952p-88f,
     0.0f, 0.0f, 0x1.df4bfap-81f, 0x1.0ecc4p-96f, 0.0f, 0.0f, 0x1.44666ap-4f, 0.0f,
     0x1.2670bap-110f, 0.0f, 0x1.8e0b78p-50f, 0x1.4da40ap-16f, 0.0f, 0.0f, 0.0f,
     0x1.1096e4p-96f, 0x1.b11fdap-113f, 0x1.dfd86p-48f, 0.0f, 0.0f, 0x1.b3fa44p-84f,
     0x1.c0b988p-78f, 0.0f, 0x1.2b7c88p-60f, 0.0f, 0x1.bf1edep-15f, 0x1.a0b64ep-29f,
     0.0f, 0.0f, 0x1.e32bfp-87f, 0x1.0c992p-108f, 0.0f, 0.0f, 0x1.792b92p-43f, 0.0f,
     0.0f, 0x1.daaacp-63f, 0.0f, 0x1.a3bdcep-123f, 0.0f, 0x1.0671dep-112f,
     0x1.b7d6a6p-62f, 0x1.d0b2b6p-111f, 0.0f, 0.0f, 0x1.5b4d5cp-12f, 0x1.3271f6p-3f,
     0.0f, 0.0f, 0.0f, 0x1.323b8ap-91f, 0x1.ccabd2p-123f, 0.0f, 0.0f, 0x1.44b656p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.539edap-48f, 0x1.42b862p-49f, 0.0f,
     0x1.6807cep-61f, 0.0f, 0x1.7d79f4p-86f, 0.0f, 0.0f, 0.0f, 0x1.300208p-75f, 0.0f,
     0.0f, 0x1.0162cep-62f, 0.0f, 0.0f, 0x1.e9304p-78f, 0x1.45b762p-14f,
     0x1.99d446p-71f, 0x1.082f0ep-88f, 0.0f, 0.0f, 0x1.751174p-90f, 0x1.4d12bap-23f,
     0x1.e81a44p-53f, 0x1.0c1e52p-12f, 0.0f, 0x1.4e6e9ep-38f, 0.0f, 0.0f,
     0x1.7353d2p-77f, 0.0f, 0x1.bfbd26p-23f, 0x1.18f61p-95f, 0x1.b6b60ep-109f, 0.0f,
     0.0f, 0x1.b1400ep-30f, 0x1.ea8baap-94f, 0.0f, 0.0f, 0x1.396bfep-70f,
     0x1.d6acdep-105f, 0x1p0f, 0.0f, 0x1.3733d4p-86f, 0.0f, 0x1.c04522p-38f,
     0x1.d126e4p-9f, 0.0f, 0x1.a5b9b2p-63f, 0x1.770112p-55f, 0x1.760d58p-74f,
     0x1.d073eap-105f, 0x1.b2470cp-22f, 0.0f, 0x1.451854p-30f, 0.0f, 0x1.6db42ap-105f,
     0.0f, 0x1.634a56p-47f, 0x1.2936e2p-24f, 0.0f, 0.0f, 0.0f, 0x1.48002ap-73f,
     0x1.a48758p-104f, 0.0f, 0x1.dda2fp-70f, 0x1.05fdfp-96f, 0.0f, 0.0f,
     0x1.0625cp-105f, 0x1.f83b2ep-6f, 0x1.ec431ap-30f, 0.0f, 0.0f, 0x1.bddb7p-99f,
     0.0f, 0x1.325fc8p-49f, 0x1.757a8p-31f, 0.0f, 0x1.94750ep-121f, 0x1.441e6ep-114f,
     0.0f, 0x1.ed7102p-104f, 0.0f, 0.0f, 0x1.e51968p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c79bc6p-61f, 0.0f, 0x1.5f1022p-5f, 0x1.de3c84p-49f, 0x1.3e29c2p-83f,
     0x1.b173cp-81f, 0x1.db65dcp-60f, 0.0f, 0x1.3d7f4p-60f, 0x1.5ec11cp-28f,
     0x1.e235dp-68f, 0.0f, 0.0f, 0x1.24e5ecp-104f, 0x1.13c05ep-125f, 0x1.40696ep-72f,
     0x1.5f209ep-117f, 0.0f, 0.0f, 0x1.353044p-2f, 0x1.0b257p-17f, 0.0f, 0.0f, 0.0f,
     0x1.96ae04p-124f, 0x1.ccaccap-10f, 0.0f, 0.0f, 0x1.71eaeap-32f, 0.0f, 0.0f, 0.0f,
     0x1.8150fcp-88f, 0x1.6c8b0ap-101f, 0.0f, 0x1.3f302ap-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6db85ep-61f, 0.0f, 0.0f, 0x1.3c416ap-124f, 0x1.3d5e44p-73f, 0.0f,
     0x1.3e98c8p-18f, 0x1.609722p-113f, 0x1.9f26e6p-82f, 0x1.5533b6p-18f,
     0x1.344754p-88f, 0x1.2258f6p-109f, 0x1.4cf6bep-15f, 0x1.e6b834p-66f, 0.0f,
     0x1.69a046p-81f, 0.0f, 0.0f, 0.0f, 0x1.c61f4cp-83f, 0x1p0f, 0.0f, 0.0f,
     0x1.58006ap-26f, 0x1.298d1ep-69f, 0.0f, 0x1.4d7692p-120f, 0.0f, 0x1.4bd6e6p-45f,
     0x1.bcef8p-4f, 0x1.d8cf2p-22f, 0x1.ccbdf8p-82f, 0.0f, 0x1.9cb4cp-12f,
     0x1.8e8184p-97f, 0.0f, 0.0f, 0.0f, 0x1.58617p-34f, 0x1.0d2976p-14f, 0.0f,
     0x1.6c4086p-83f, 0x1.645e42p-103f, 0x1.c8cb8ep-33f, 0x1.6ff094p-20f, 0.0f,
     0x1.85d1b6p-89f, 0x1.980abp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12571cp-108f,
     0.0f, 0x1.acc024p-98f, 0x1.f77cacp-117f, 0x1.63e804p-125f, 0x1.b5ea6ap-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa7eaep-6f, 0.0f, 0x1.5074eap-81f, 0.0f,
     0x1.4cf116p-65f, 0x1.1c898p-42f, 0.0f, 0.0f, 0x1.ec708cp-44f, 0x1.0921fep-19f,
     0x1.80c0c6p-58f, 0x1.e23a4p-92f, 0x1.5e7996p-54f, 0.0f, 0.0f, 0x1.ba8366p-92f,
     0.0f, 0x1.3f40b6p-1f, 0x1.6a98c2p-7f, 0x1.421aa4p-72f, 0x1.9bf3c2p-59f,
     0x1.40afd6p-64f, 0.0f, 0.0f, 0x1.bfe9bep-100f, 0x1.34c9acp-110f,
     0x1.2ff3bap-108f, 0x1.d114b4p-53f, 0.0f, 0x1.17467ep-61f, 0x1.b1ea5cp-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b7b52p-52f, 0.0f, 0x1.7816aap-63f, 0.0f, 0.0f,
     0x1.660daap-5f, 0x1.f777d2p-87f, 0.0f, 0.0f, 0x1.e8dcf6p-82f, 0.0f,
     0x1.62b12ep-31f, 0x1.bc28c6p-14f, 0x1.8abe9ep-42f, 0.0f, 0.0f, 0.0f,
     0x1.0317d8p-61f, 0x1.73c828p-71f, 0.0f, 0x1.4e1a46p-44f, 0x1.df498p-85f,
     0x1.cdef1cp-76f, 0.0f, 0.0f, 0x1.ba78eep-6f, 0x1.efb634p-71f, 0.0f,
     0x1.ceaaccp-55f, 0x1.ec6e94p-10f, 0x1.5b0e22p-34f, 0.0f, 0x1.ef7438p-87f, 0x1p0f,
     0.0f, 0x1.9d800ep-29f, 0.0f, 0.0f, 0x1.36db5ep-48f, 0x1p0f, 0x1.d3dcd4p-65f,
     0x1.6e0f72p-121f, 0.0f, 0.0f, 0x1.ea505ap-105f, 0.0f, 0.0f, 0x1.6f9a26p-115f,
     0.0f, 0.0f, 0.0f, 0x1.115cfep-35f, 0x1.9a519ep-11f, 0x1.5e5122p-116f,
     0x1.0e64aap-99f, 0x1.a80a7ep-74f, 0x1.dad49cp-33f, 0x1.c6e648p-76f, 0.0f,
     0x1.c949ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5ecf4p-41f, 0.0f, 0.0f, 0.0f,
     0x1.52d616p-75f, 0.0f, 0x1.8f7ebep-60f, 0.0f, 0x1.b0b28ep-53f, 0x1.f40facp-48f,
     0.0f, 0x1.5c8452p-6f, 0.0f, 0.0f, 0x1.bc428cp-123f, 0x1.d48522p-119f,
     0x1.5c4aa2p-64f, 0x1.46b86p-2f, 0x1.76f332p-107f, 0x1.8b3aecp-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0c8be6p-72f, 0x1.01c0acp-105f, 0.0f, 0x1.b25c08p-27f,
     0x1.730414p-9f, 0.0f, 0x1.304614p-98f, 0.0f, 0x1.39a57ep-32f, 0.0f, 0.0f, 0.0f,
     0x1.a853bap-21f, 0x1.fad40cp-81f, 0.0f, 0.0f, 0x1.10c5bap-107f, 0.0f,
     0x1.f8bf0ep-74f, 0x1.c31f42p-73f, 0.0f, 0.0f, 0x1.bdd02ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.1397c6p-6f, 0x1.7effe2p-25f, 0.0f, 0.0f, 0x1.3e09a2p-59f, 0.0f,
     0x1.44201ap-102f, 0x1.d278b4p-54f, 0.0f, 0x1.dd5632p-1f, 0.0f, 0x1.42051cp-6f,
     0.0f, 0.0f, 0.0f, 0x1.983592p-107f, 0x1.b68ea4p-118f, 0x1.514e8cp-4f,
     0x1.dbfep-45f, 0x1.c7ba2p-67f, 0x1.4b7d98p-81f, 0x1.097d82p-93f, 0x1.6e644ap-62f,
     0.0f, 0.0f, 0x1.d53a38p-6f, 0x1.a5cf98p-26f, 0.0f, 0.0f, 0.0f, 0x1.767978p-124f,
     0x1.fa90fap-62f, 0.0f, 0.0f, 0x1.319974p-106f, 0.0f, 0x1.afa842p-93f, 0.0f, 0.0f,
     0x1.c2defcp-59f, 0.0f, 0.0f, 0.0f, 0x1.c97f58p-32f, 0.0f, 0x1.9520fap-10f,
     0x1.496fe6p-9f, 0.0f, 0x1.a290cp-34f, 0x1.3dee5p-115f, 0x1.2a3766p-18f, 0.0f,
     0x1.67471ep-117f, 0x1.c87d9ap-125f, 0.0f, 0x1.85d12ep-32f, 0x1.821e0cp-50f, 0.0f,
     0x1.89cfdep-80f, 0.0f, 0x1.054528p-93f, 0.0f, 0.0f, 0x1.232fe6p-58f, 0.0f, 0.0f,
     0.0f, 0x1.4d3296p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b7118p-89f,
     0x1.bfb0bp-44f, 0x1.174a86p-50f, 0.0f, 0x1.2a0342p-11f, 0x1.665edap-13f, 0.0f,
     0.0f, 0x1.e87326p-109f, 0x1.82a2e6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81e166p-6f, 0.0f, 0x1.813f32p-123f, 0.0f, 0x1.dfa90cp-3f, 0.0f, 0.0f, 0.0f,
     0x1.cb046p-58f, 0x1.5ecddcp-78f, 0.0f, 0x1.25f3d2p-3f, 0x1.5afa78p-116f, 0.0f,
     0x1.889208p-92f, 0.0f, 0x1.e371d8p-114f, 0x1.9f7206p-117f, 0.0f, 0x1.a788aep-40f,
     0x1.0d238cp-4f, 0.0f, 0x1.52284ep-88f, 0x1.fc267ap-36f, 0x1.1bb1e2p-119f, 0.0f,
     0.0f, 0.0f, 0x1.5c1dd6p-3f, 0.0f, 0x1.c57becp-16f, 0.0f, 0.0f, 0.0f,
     0x1.1fc432p-48f, 0.0f, 0x1.2566aep-54f, 0.0f, 0.0f, 0x1.c51a72p-119f,
     0x1.d3d102p-65f, 0x1.88d2ecp-20f, 0.0f, 0.0f, 0.0f, 0x1.8f49cap-26f, 0.0f,
     0x1.5669fcp-87f, 0.0f, 0x1.dde742p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0acb5ep-49f,
     0x1.e5d66p-30f, 0x1.3d58d2p-39f, 0.0f, 0.0f, 0x1.430b8cp-75f, 0x1.e177e8p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ee818p-58f, 0.0f, 0x1.cd98dap-3f, 0x1.b389e6p-25f,
     0x1.fbd85cp-125f, 0x1.e4ffcp-25f, 0.0f, 0x1.9510eep-126f, 0.0f, 0x1.81d506p-123f,
     0x1.c15fa6p-114f, 0x1.92babap-74f, 0x1.b5067p-77f, 0x1.80622cp-123f, 0.0f, 0.0f,
     0x1.7586cep-81f, 0x1.7aaacep-73f, 0.0f, 0x1.08c744p-64f, 0x1.6fba5ep-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.959af6p-35f,
     0x1.e35af4p-67f, 0x1.121ae6p-84f, 0.0f, 0.0f, 0x1.d7211cp-60f, 0.0f,
     0x1.6698bcp-19f, 0.0f, 0x1.b77456p-55f, 0x1.c196e4p-5f, 0.0f, 0x1.3702b4p-100f,
     0x1.3498e6p-15f, 0.0f, 0.0f, 0x1.34e15ep-83f, 0x1.2eac4p-22f, 0.0f,
     0x1.402616p-32f, 0.0f, 0x1.87b32ep-69f, 0x1.1cc12cp-106f, 0.0f, 0x1.7efbcap-88f,
     0.0f, 0x1.314b58p-22f, 0x1.ef4938p-24f, 0x1.29e502p-34f, 0.0f, 0x1.762e3ap-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a63ep-108f, 0x1.591f2p-73f, 0.0f, 0x1.a0746cp-35f,
     0.0f, 0x1.d193dp-58f, 0x1.f011bcp-17f, 0.0f, 0.0f, 0x1.480ffap-94f, 0.0f, 0.0f,
     0.0f, 0x1.e42deep-93f, 0x1.5823d2p-8f, 0.0f, 0x1.4675c2p-109f, 0x1.d3d2e8p-108f,
     0x1.0268d4p-33f, 0.0f, 0.0f, 0x1.3d79f4p-9f, 0x1.12c284p-37f, 0x1.db2ebep-50f,
     0x1.123a2p-15f, 0x1.c498fcp-106f, 0x1.c1d61p-31f, 0x1.fcf4f4p-17f,
     0x1.154452p-84f, 0x1.02b6f2p-109f, 0x1.40a6dcp-97f, 0.0f, 0.0f, 0x1.840166p-16f,
     0x1.9461p-41f, 0x1.00ecc6p-121f, 0.0f, 0.0f, 0x1.ad3792p-107f, 0.0f,
     0x1.f2e61ep-1f, 0.0f, 0x1.d864fep-107f, 0.0f, 0x1.51ed42p-94f, 0x1.17d59p-4f,
     0.0f, 0x1.9e52ccp-92f, 0.0f, 0x1.a27b68p-27f, 0.0f, 0x1.d3b852p-78f,
     0x1.007afcp-104f, 0.0f, 0x1.c7813ap-111f, 0.0f, 0x1.10d344p-58f, 0.0f, 0.0f,
     0x1.7cb506p-103f, 0x1.67abfp-88f, 0x1.b7932cp-114f, 0x1.cfa188p-107f,
     0x1.2d7edp-5f, 0x1.5a9446p-121f, 0.0f, 0x1.0ceb2p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5a7b14p-26f, 0.0f, 0x1.ff40a6p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19850ap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aea0dcp-59f, 0.0f, 0.0f, 0x1.8c9312p-68f, 0x1.bd6204p-117f, 0.0f,
     0x1.fda8aep-79f, 0.0f, 0x1.9e4e2ep-104f, 0.0f, 0x1.24354cp-110f, 0.0f,
     0x1.cc6492p-7f, 0.0f, 0.0f, 0.0f, 0x1.4d0aap-10f, 0.0f, 0.0f, 0x1.63216ep-120f,
     0.0f, 0x1.789ffap-39f, 0x1.c610c8p-17f, 0x1.11ecb4p-126f, 0x1.e15616p-3f, 0.0f,
     0.0f, 0x1.fd4b78p-70f, 0.0f, 0x1.03ep-57f, 0.0f, 0x1.26b086p-124f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fmaxf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_fmaxf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fmaxf1_purecfma bench acc %a\n", global_bench_acc);
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
