/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf4_u10kvx.c --function \
 *     Sleef_finz_coshf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.0dbc4ap-68f, 0.0f, 0.0f, 0x1.bea1a6p-93f, 0x1.af10b6p-77f,
     0x1.9120c2p-30f, 0x1.be52dep-72f, 0.0f, 0x1.82c5e8p-17f, 0.0f, 0x1.12ac08p-24f,
     0.0f, 0.0f, 0x1.3d425cp-11f, 0.0f, 0x1.e41fep-79f, 0x1.7dec78p-101f,
     0x1.7f051cp-101f, 0x1.53761ap-109f, 0x1.fbf768p-48f, 0.0f, 0.0f, 0x1.f9e078p-96f,
     0.0f, 0.0f, 0x1.371288p-115f, 0.0f, 0x1.1852d4p-55f, 0.0f, 0.0f, 0.0f,
     0x1.c305d6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2f5cp-77f, 0x1.927b86p-67f,
     0x1.46b884p-1f, 0x1.f967e8p-117f, 0x1.e9e79ep-53f, 0x1.baeac6p-67f,
     0x1.1f0c8cp-31f, 0.0f, 0x1.c19fc2p-59f, 0x1.4f97bcp-19f, 0.0f, 0x1.5d8d5ap-87f,
     0.0f, 0.0f, 0x1.3d5eep-115f, 0x1.8eaf22p-30f, 0.0f, 0x1.e80a26p-76f, 0.0f, 0.0f,
     0x1.52848ap-109f, 0.0f, 0.0f, 0x1.85c4a8p-105f, 0.0f, 0.0f, 0.0f,
     0x1.e553fcp-60f, 0x1.22866cp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e646p-13f,
     0x1.4fa364p-53f, 0x1.bf8bp-34f, 0x1.12d606p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f17fcp-36f, 0x1.a0f814p-22f, 0x1.83b82ep-34f, 0.0f, 0x1.343e08p-55f,
     0x1.4a036ep-2f, 0x1.bb0a2cp-2f, 0.0f, 0.0f, 0x1.72d63ap-66f, 0x1.e400e2p-93f,
     0.0f, 0x1.f3e438p-49f, 0x1.af91a2p-102f, 0x1.343442p-29f, 0.0f, 0.0f,
     0x1.183044p-104f, 0x1.e1fb9ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d89f2p-27f, 0x1.fdda96p-125f, 0x1.6f194cp-75f, 0x1.0da394p-4f,
     0x1.1acde4p-23f, 0x1.3fa31ap-46f, 0x1.2fb488p-73f, 0x1.e644cp-43f, 0.0f,
     0x1.afea4ap-89f, 0x1.08f312p-34f, 0.0f, 0x1.09643cp-26f, 0.0f, 0.0f,
     0x1.d7451cp-69f, 0x1.43b8d4p-106f, 0.0f, 0x1.15db74p-56f, 0.0f, 0x1.384f2cp-62f,
     0.0f, 0.0f, 0x1.287692p-44f, 0.0f, 0x1.13e906p-25f, 0.0f, 0.0f, 0x1.798806p-1f,
     0.0f, 0x1.20393ep-11f, 0x1.fb45a8p-64f, 0x1.3c377cp-126f, 0.0f, 0x1.11225ep-1f,
     0.0f, 0.0f, 0x1.9ba5fep-79f, 0x1.dd5868p-67f, 0.0f, 0.0f, 0x1.946796p-85f,
     0x1.d1609ep-82f, 0.0f, 0x1.fb1d2p-66f, 0x1.ef6212p-119f, 0.0f, 0x1.faba98p-36f,
     0.0f, 0x1.5b3834p-123f, 0x1.068294p-102f, 0x1.6c56p-125f, 0.0f, 0x1.4a48d6p-120f,
     0x1.2b326p-113f, 0x1.7d218ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3cdfep-48f, 0.0f,
     0.0f, 0.0f, 0x1.5b30f8p-1f, 0x1.db2874p-4f, 0x1.b3aa1cp-8f, 0x1.b0841cp-68f,
     0x1.65cf02p-27f, 0.0f, 0x1.616f7ep-90f, 0x1.b9c3eep-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe0bdap-113f, 0x1.3d0964p-38f, 0.0f, 0x1.f6c036p-79f, 0x1.ca225cp-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9db438p-31f, 0x1.dbb1f2p-89f, 0x1.eb969ep-86f,
     0x1.2ad132p-34f, 0.0f, 0x1.ba1e2p-48f, 0x1.b960cp-5f, 0x1.809286p-12f,
     0x1.fc1924p-49f, 0x1.8533a8p-117f, 0x1.079ddap-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5b7c8p-120f, 0x1.f07146p-69f, 0x1.3d250ap-27f, 0.0f, 0.0f, 0.0f,
     0x1.6868f4p-110f, 0x1.c829aep-72f, 0x1.97b308p-27f, 0.0f, 0.0f, 0x1.73ee6ep-73f,
     0.0f, 0.0f, 0.0f, 0x1.2b7d06p-61f, 0x1.f27d3ap-27f, 0x1.82103cp-86f, 0x1p0f,
     0.0f, 0x1.46655ep-38f, 0.0f, 0x1.04b1fep-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed8606p-57f, 0x1.abd9fp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70acbcp-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab9ca2p-34f, 0x1.848d8ap-37f, 0x1.2c9b04p-59f,
     0x1.37afe6p-62f, 0x1.c42272p-72f, 0.0f, 0x1.04606ep-110f, 0.0f, 0.0f, 0.0f,
     0x1.fb907ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec7b4p-27f, 0x1.246d3ep-114f,
     0x1.ef5a6cp-59f, 0.0f, 0.0f, 0x1.b0273ap-104f, 0.0f, 0x1.643e8cp-41f,
     0x1.6abe94p-119f, 0x1.af65aep-30f, 0x1.4ba3d2p-61f, 0.0f, 0.0f, 0x1.862c74p-50f,
     0.0f, 0x1.cca27cp-18f, 0x1.52aa0ap-53f, 0x1.65d214p-23f, 0x1.1b3b26p-10f, 0.0f,
     0x1.4061e6p-47f, 0x1.0a5c3cp-100f, 0.0f, 0.0f, 0x1.155792p-14f, 0x1.4e15fep-35f,
     0.0f, 0.0f, 0.0f, 0x1.ec0aap-126f, 0x1.131c8p-92f, 0x1.6b97e8p-76f,
     0x1.43013ap-106f, 0x1.1ca572p-5f, 0.0f, 0x1.ce1a3cp-31f, 0.0f, 0x1.c0709cp-71f,
     0x1.d5a76p-20f, 0x1.6f87ep-110f, 0.0f, 0x1.b0f036p-61f, 0x1.75738ap-85f, 0.0f,
     0x1.6c652ep-75f, 0x1.9d279p-110f, 0.0f, 0x1.ebde16p-8f, 0x1.cdd2acp-113f, 0.0f,
     0.0f, 0.0f, 0x1.3020d8p-28f, 0.0f, 0x1.c57b72p-42f, 0x1.23d10ep-73f, 0.0f, 0.0f,
     0x1.bb5922p-47f, 0.0f, 0x1.7550e2p-70f, 0.0f, 0x1.87ebcep-114f, 0.0f, 0.0f, 0.0f,
     0x1.14d744p-49f, 0.0f, 0x1.cd8362p-72f, 0.0f, 0.0f, 0x1.a00afap-106f,
     0x1.359ed2p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.620278p-96f,
     0x1.ece19cp-53f, 0.0f, 0x1.8aa082p-123f, 0x1.5f775p-101f, 0.0f, 0.0f, 0.0f,
     0x1.9cb73cp-13f, 0x1.88ccd6p-39f, 0x1.35fc3p-108f, 0x1.97aadp-59f, 0.0f, 0.0f,
     0.0f, 0x1.f7000ep-25f, 0.0f, 0x1.eabc18p-75f, 0x1.4b389p-115f, 0x1.f3766ap-23f,
     0.0f, 0x1.3739e4p-109f, 0x1.34cdf4p-71f, 0.0f, 0.0f, 0x1.ab6c42p-116f,
     0x1.97e68p-119f, 0x1.62a8ecp-40f, 0x1.b84f66p-55f, 0.0f, 0x1.3f39bap-16f, 0.0f,
     0x1.1c6ccep-10f, 0x1.a7f4dep-34f, 0.0f, 0x1.6e1e66p-96f, 0x1.90616ep-40f,
     0x1.581b2p-27f, 0.0f, 0x1.52fd9ap-29f, 0.0f, 0.0f, 0x1.63a826p-9f, 0.0f,
     0x1.ff699ap-32f, 0.0f, 0.0f, 0.0f, 0x1.0e50bep-104f, 0.0f, 0x1.dc91e8p-59f, 0.0f,
     0.0f, 0.0f, 0x1.e85c4ep-27f, 0x1.e7a28cp-121f, 0.0f, 0x1.474aa2p-82f, 0.0f,
     0x1.5ead3p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d98f3ep-77f, 0.0f, 0.0f, 0.0f,
     0x1.d92a5cp-95f, 0x1.167bc6p-80f, 0x1.07c9a8p-90f, 0.0f, 0.0f, 0.0f,
     0x1.5c9fd6p-72f, 0x1.37897ap-67f, 0x1.dc1e64p-31f, 0.0f, 0x1.e0b34cp-45f, 0.0f,
     0x1.e365dcp-100f, 0.0f, 0x1.bbc22p-113f, 0.0f, 0x1.c4673p-29f, 0x1.e362a4p-81f,
     0.0f, 0.0f, 0x1.ad167ap-124f, 0x1.4ecb6p-48f, 0x1.465e4ep-80f, 0x1.ebbd34p-26f,
     0.0f, 0x1.718f38p-126f, 0.0f, 0.0f, 0.0f, 0x1.e030bcp-2f, 0x1.14a584p-46f,
     0x1.97d35cp-85f, 0x1.6f4a82p-24f, 0.0f, 0x1.c2fe68p-7f, 0x1.566236p-34f,
     0x1.4608dep-123f, 0x1.d5fbd6p-120f, 0x1.9c3fa2p-10f, 0.0f, 0x1.fd93f6p-22f, 0.0f,
     0x1.62d8acp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d0c52p-117f, 0.0f,
     0.0f, 0x1.cfb512p-67f, 0x1.b41466p-26f, 0x1.5b99eap-57f, 0.0f, 0.0f,
     0x1.13b2a8p-69f, 0.0f, 0.0f, 0x1.9b6ce6p-3f, 0x1.037656p-70f, 0x1.e92adap-40f,
     0.0f, 0x1.16306cp-62f, 0.0f, 0x1.179096p-37f, 0x1.cf669ep-41f, 0x1.02d304p-64f,
     0x1.96c4b8p-79f, 0.0f, 0.0f, 0.0f, 0x1.6978aep-50f, 0x1.0632p-98f, 0.0f, 0.0f,
     0x1.89c6a4p-10f, 0.0f, 0.0f, 0x1.e4a372p-99f, 0.0f, 0x1.d1c82cp-2f,
     0x1.911cd6p-50f, 0.0f, 0x1.fc9ae6p-112f, 0.0f, 0.0f, 0.0f, 0x1.28ebaap-24f,
     0x1.d5217ep-121f, 0x1.d42a0cp-119f, 0.0f, 0x1.23193ap-107f, 0.0f,
     0x1.0fcf98p-64f, 0.0f, 0x1.21463ep-113f, 0x1.e1bb5cp-111f, 0.0f, 0.0f,
     0x1.3d2a4cp-7f, 0x1.596366p-30f, 0.0f, 0.0f, 0x1.6d795p-35f, 0x1.39476ap-108f,
     0x1.138fbp-46f, 0.0f, 0x1.ffa8cep-37f, 0.0f, 0x1.b5d032p-36f, 0x1.918feap-13f,
     0x1.13fd0ep-77f, 0x1.ac0ae8p-4f, 0x1.d0f186p-19f, 0x1.085468p-40f, 0.0f,
     0x1.b19656p-51f, 0x1.4fbc0cp-116f, 0x1.15571ep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb2218p-71f, 0x1.b0858ep-50f, 0.0f, 0x1.d68828p-96f, 0.0f, 0x1.e1806cp-17f,
     0.0f, 0x1.b1e172p-78f, 0.0f, 0.0f, 0.0f, 0x1.8c3188p-104f, 0x1.511c4ep-61f,
     0x1.382972p-16f, 0.0f, 0x1.5779d2p-28f, 0x1.dd293ep-83f, 0.0f, 0x1.67dfbcp-89f,
     0.0f, 0.0f, 0x1.deda3cp-121f, 0.0f, 0.0f, 0x1.b4dd54p-83f, 0.0f, 0.0f,
     0x1.cc29d2p-64f, 0.0f, 0x1.96c162p-13f, 0x1.16de2cp-59f, 0x1.576f8ep-8f,
     0x1.f616f4p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d4dbep-25f, 0.0f, 0x1.72e566p-14f,
     0x1.c1df9cp-95f, 0x1.b84462p-58f, 0x1.791c58p-86f, 0.0f, 0x1.7d6fap-30f,
     0x1.5cbc7ep-121f, 0.0f, 0x1.94b32cp-43f, 0.0f, 0.0f, 0x1.4eb7f4p-24f,
     0x1.6e4f6cp-68f, 0.0f, 0x1.9d2ad4p-72f, 0x1.7bdcb4p-90f, 0.0f, 0x1.fbd316p-10f,
     0.0f, 0x1.8d5074p-113f, 0x1.758766p-125f, 0.0f, 0x1.c7401ap-58f, 0x1.de68c8p-81f,
     0x1.8a4a1p-8f, 0.0f, 0.0f, 0x1.ed18b8p-44f, 0.0f, 0.0f, 0.0f, 0x1.fffc6cp-40f,
     0.0f, 0x1.eae562p-104f, 0.0f, 0x1.69e04ap-70f, 0.0f, 0.0f, 0x1.a6ef6ap-110f,
     0x1.8d9746p-45f, 0.0f, 0.0f, 0x1.456f6ap-15f, 0.0f, 0x1.623f4ap-54f,
     0x1.59c916p-94f, 0.0f, 0x1.e3abeap-7f, 0.0f, 0.0f, 0x1.bddc54p-52f,
     0x1.8ff978p-63f, 0.0f, 0.0f, 0x1.73436ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60eadap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abaed4p-93f, 0.0f, 0.0f,
     0x1.45bfe2p-113f, 0.0f, 0x1.b79fb6p-98f, 0.0f, 0x1.99e2ep-75f, 0x1.aa58f2p-80f,
     0x1.55a606p-14f, 0x1.d504aep-43f, 0x1.51fdeap-72f, 0.0f, 0x1.db7f92p-72f,
     0x1.d9de9cp-7f, 0.0f, 0x1.8739b2p-68f, 0x1.69174ap-55f, 0x1.832724p-53f, 0.0f,
     0x1.8e6a36p-125f, 0.0f, 0x1.e922c2p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46cee8p-12f, 0.0f, 0x1.32362p-115f, 0.0f, 0x1.2f7a98p-39f, 0x1.c9c56cp-93f,
     0.0f, 0.0f, 0x1.950314p-81f, 0.0f, 0x1.3b1ba8p-5f, 0x1.3c2012p-119f,
     0x1.03859ep-48f, 0.0f, 0.0f, 0x1.2eec3p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.217afap-49f, 0x1.b3ee9ep-40f, 0x1.ee1314p-77f, 0.0f, 0.0f, 0.0f,
     0x1.0d5214p-117f, 0.0f, 0x1.e961bep-103f, 0x1.c33ab8p-82f, 0x1.479378p-4f,
     0x1.0e1638p-66f, 0x1.11479ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ca78ep-118f, 0x1.4a1e22p-80f, 0x1.58e49ap-117f, 0x1.70fdbcp-96f,
     0x1.b155f2p-22f, 0x1.20642p-69f, 0.0f, 0x1.92bb7ap-86f, 0x1.1957d6p-72f,
     0x1.b1857p-37f, 0x1.064a9cp-9f, 0x1.96403p-122f, 0x1.84105cp-47f,
     0x1.fdd556p-74f, 0x1.154026p-42f, 0x1.126dc8p-29f, 0x1.beaf7ep-83f,
     0x1.a18446p-28f, 0.0f, 0x1.e4a7d6p-37f, 0x1.f3fc56p-83f, 0.0f, 0.0f, 0.0f,
     0x1.c969bcp-102f, 0x1.01363ap-9f, 0.0f, 0.0f, 0.0f, 0x1.9dc14ap-125f,
     0x1.434a4p-4f, 0x1.4a107ap-85f, 0.0f, 0x1.11402cp-92f, 0.0f, 0x1.68390cp-39f,
     0x1.b6e056p-117f, 0x1.271c1cp-11f, 0.0f, 0x1.172548p-120f, 0.0f, 0x1.dc32bap-89f,
     0.0f, 0.0f, 0.0f, 0x1.08075ap-47f, 0.0f, 0x1.39fa36p-115f, 0x1.c1e84ep-22f,
     0x1.681aeep-111f, 0.0f, 0x1.1eb322p-119f, 0x1.5dc8a2p-39f, 0x1.e2186cp-49f,
     0x1.56527ap-119f, 0.0f, 0.0f, 0.0f, 0x1.671d08p-12f, 0x1.380248p-27f, 0.0f,
     0x1.8863f4p-24f, 0.0f, 0x1.fe1eb8p-73f, 0x1.9e2eccp-9f, 0x1.995166p-99f,
     0x1.e1423cp-23f, 0.0f, 0.0f, 0x1.349528p-99f, 0x1.60a6f8p-121f, 0.0f,
     0x1.894f9cp-108f, 0.0f, 0.0f, 0.0f, 0x1.d186eep-11f, 0.0f, 0.0f, 0.0f,
     0x1.4a6284p-99f, 0.0f, 0x1.c9a2a6p-109f, 0.0f, 0.0f, 0x1.5e9194p-27f,
     0x1.fc2f5p-104f, 0.0f, 0x1.881388p-87f, 0x1.b38bb6p-58f, 0x1.17c898p-18f,
     0x1.013dd6p-25f, 0x1.182f08p-73f, 0.0f, 0.0f, 0x1.66b7a4p-67f, 0x1.d24414p-30f,
     0.0f, 0x1.b2de5ap-15f, 0.0f, 0x1.fd0602p-66f, 0x1.db023ap-126f, 0.0f,
     0x1.0ba004p-14f, 0x1.f8bb0ap-1f, 0x1.749142p-125f, 0x1.fd8ba6p-6f, 0.0f,
     0x1.354fc2p-28f, 0x1.47d428p-71f, 0x1.2a580ap-115f, 0x1.81a18ep-114f, 0.0f,
     0x1.340134p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ac69p-46f, 0.0f, 0.0f,
     0x1.cded2ep-93f, 0.0f, 0x1.bab7dp-30f, 0x1.437ee2p-65f, 0x1.70a2eep-40f, 0.0f,
     0x1.602d54p-2f, 0x1.ad690cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.310ed6p-50f, 0.0f,
     0x1.012fcp-82f, 0.0f, 0.0f, 0x1.de53b8p-23f, 0.0f, 0.0f, 0.0f, 0x1.209712p-41f,
     0x1.6a9a52p-90f, 0.0f, 0x1.fa8ce6p-79f, 0.0f, 0.0f, 0x1.13df84p-33f,
     0x1.0c6b96p-1f, 0x1.d37358p-52f, 0x1.1292d8p-88f, 0x1.e4962ep-76f,
     0x1.0ea05ap-63f, 0x1.10bd5ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8fa3cep-31f, 0.0f, 0x1.d548cep-118f, 0x1.7697bcp-23f, 0.0f, 0.0f,
     0x1.26c6bp-30f, 0x1.c85c64p-28f, 0.0f, 0.0f, 0x1.22663ap-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.45d1e2p-11f, 0x1.581a14p-33f, 0.0f, 0x1.4467bap-94f, 0.0f, 0.0f, 0.0f,
     0x1.ba1484p-88f, 0.0f, 0x1.424c14p-100f, 0x1.64ac0ep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e9ef5p-18f, 0x1.83bd9p-74f, 0x1.593afep-1f, 0.0f, 0x1.b3153cp-70f,
     0.0f, 0.0f, 0.0f, 0x1.add634p-108f, 0.0f, 0x1.a4a80cp-6f, 0x1.bfc24ep-113f, 0.0f,
     0x1.21042ap-109f, 0.0f, 0x1.3174b4p-56f, 0x1.2bd5a4p-40f, 0x1.ebe4c6p-88f,
     0x1.b8032ap-20f, 0.0f, 0x1.d4223cp-20f, 0x1.0fc584p-3f, 0x1.ffefc8p-10f, 0.0f,
     0x1.987be8p-60f, 0x1.68d938p-34f, 0x1.bd286p-92f, 0x1.8b92bap-81f,
     0x1.ffc638p-10f, 0x1.fc2104p-14f, 0.0f, 0.0f, 0x1.31b67ap-36f, 0.0f,
     0x1.24b44ep-38f, 0.0f, 0x1.d6166ap-54f, 0x1.38d9b8p-15f, 0x1.56d52cp-21f,
     0x1.0801bep-79f, 0x1.0dc878p-105f, 0x1.a05496p-79f, 0.0f, 0.0f, 0x1.0cb6d8p-14f,
     0.0f, 0x1.42bb36p-13f, 0.0f, 0x1.d9347ep-104f, 0.0f, 0x1.824baap-51f,
     0x1.4d277cp-35f, 0.0f, 0x1.2dac94p-111f, 0x1.05f894p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.767f44p-46f, 0.0f, 0.0f, 0x1.1a103p-81f, 0x1.870984p-77f, 0.0f,
     0x1.d03cap-92f, 0x1.1983fcp-32f, 0x1.fb3796p-68f, 0x1.77544p-13f,
     0x1.e67a6ep-96f, 0.0f, 0.0f, 0x1.03b2fcp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be218cp-86f, 0.0f, 0x1.45d696p-32f, 0.0f, 0.0f, 0x1.c5fe94p-82f, 0.0f,
     0x1.7080f4p-96f, 0.0f, 0.0f, 0.0f, 0x1.0aa1bp-74f, 0.0f, 0x1.022ed2p-98f,
     0x1.373p-123f, 0.0f, 0x1.dc6034p-7f, 0x1.2c2514p-66f, 0.0f, 0.0f, 0.0f,
     0x1.1156f8p-62f, 0x1.d53e9p-90f, 0.0f, 0.0f, 0x1.19be1p-37f, 0.0f
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
            tmp1 = Sleef_finz_coshf4_u10kvx(tmp0);
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
    printf("Sleef_finz_coshf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_coshf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
