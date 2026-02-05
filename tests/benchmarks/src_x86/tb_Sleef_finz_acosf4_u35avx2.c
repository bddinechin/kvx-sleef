/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf4_u35avx2128.c --function \
 *     Sleef_finz_acosf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.080898p-29f, 0.0f, 0x1.45c3c2p-113f, 0.0f, 0.0f, 0x1.13d2eep-10f, 0.0f,
     0x1.cc660ap-117f, 0.0f, 0x1.d5b238p-84f, 0.0f, 0.0f, 0.0f, 0x1.88570ep-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.15f5e8p-120f, 0.0f, 0x1.bc6b58p-108f, 0.0f, 0.0f,
     0x1.4a226ap-73f, 0x1.cbab8p-56f, 0.0f, 0x1.980a4ep-74f, 0.0f, 0x1.20da82p-101f,
     0x1.f54e26p-56f, 0.0f, 0x1.b0188ap-94f, 0.0f, 0x1.6dc4f8p-115f, 0x1.d4e816p-83f,
     0x1.697e22p-62f, 0.0f, 0x1.ea352p-94f, 0x1.f4d578p-78f, 0.0f, 0.0f,
     0x1.4db786p-8f, 0.0f, 0.0f, 0x1.a2e4dp-121f, 0x1.85df24p-82f, 0.0f,
     0x1.304ccep-118f, 0x1.d55922p-90f, 0.0f, 0.0f, 0x1.18129ep-125f, 0x1.173d3ep-55f,
     0x1.608fe4p-63f, 0x1.beb9ap-96f, 0.0f, 0x1.84d3fp-96f, 0.0f, 0x1.4a2432p-114f,
     0x1.82aeep-106f, 0.0f, 0x1.457718p-98f, 0x1.119d06p-26f, 0x1.582a28p-81f,
     0x1.d2a474p-14f, 0x1.b53c8cp-38f, 0.0f, 0.0f, 0x1.d3ced2p-29f, 0x1.420f36p-78f,
     0x1.a10e08p-7f, 0x1.88d3b2p-97f, 0.0f, 0x1.1bead2p-24f, 0x1.b0c2eap-100f, 0.0f,
     0.0f, 0x1.89d2dap-64f, 0.0f, 0.0f, 0x1.a47b6ap-112f, 0.0f, 0x1.a2322p-61f,
     0x1.8a065cp-17f, 0.0f, 0x1.8f9b1ep-40f, 0.0f, 0x1.8cb7dap-122f, 0.0f, 0.0f, 0.0f,
     0x1.ae2be2p-84f, 0x1.28532ap-31f, 0x1.787eb6p-87f, 0x1.6728d2p-8f, 0.0f, 0.0f,
     0.0f, 0x1.51391ep-59f, 0x1.7efe4ap-69f, 0x1.1e3ff6p-74f, 0x1.c863cp-47f, 0.0f,
     0x1.224148p-55f, 0x1.60b452p-12f, 0x1.aa2976p-97f, 0x1.78ab9ap-35f,
     0x1.b117b2p-8f, 0x1.95470cp-58f, 0.0f, 0x1.a1ab8p-98f, 0x1.18f21cp-79f,
     0x1.29b906p-82f, 0.0f, 0.0f, 0.0f, 0x1.2caa7p-81f, 0.0f, 0x1.97d324p-64f, 0.0f,
     0x1.bb5062p-49f, 0x1.983f14p-12f, 0x1.a8ce6ap-116f, 0.0f, 0.0f, 0x1.9a7b5cp-26f,
     0x1.b121fap-40f, 0.0f, 0.0f, 0x1.ef2a08p-44f, 0x1.70a05p-68f, 0x1.4fd852p-24f,
     0x1.74fcaep-96f, 0x1.291386p-113f, 0.0f, 0.0f, 0x1.6d92d4p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.63c6a4p-20f, 0x1.22495ap-31f, 0.0f, 0.0f, 0x1.63221ap-119f, 0.0f, 0.0f,
     0.0f, 0x1.feb818p-81f, 0.0f, 0.0f, 0x1.2149a4p-46f, 0.0f, 0x1.c43b14p-114f, 0.0f,
     0.0f, 0.0f, 0x1.224536p-78f, 0.0f, 0.0f, 0x1.a2b092p-71f, 0x1.ce4e18p-53f, 0.0f,
     0.0f, 0x1.25804ep-81f, 0.0f, 0.0f, 0x1.326a92p-28f, 0x1.01ba14p-101f,
     0x1.141a4ep-111f, 0.0f, 0x1.4abe16p-115f, 0x1.d274fap-102f, 0x1.30b872p-4f, 0.0f,
     0.0f, 0.0f, 0x1.60633ep-79f, 0.0f, 0.0f, 0.0f, 0x1.791558p-14f, 0x1.036518p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f82828p-12f, 0.0f, 0x1.37ce2ap-57f, 0.0f,
     0.0f, 0x1.59aa36p-74f, 0x1.d81bap-122f, 0.0f, 0.0f, 0x1.336c48p-75f,
     0x1.714804p-31f, 0x1.02df8ap-81f, 0x1.5cef7p-55f, 0.0f, 0x1.250af2p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a022a8p-57f, 0.0f, 0.0f, 0x1.5b0ce6p-109f,
     0x1.2de702p-64f, 0x1.52e53ep-73f, 0.0f, 0x1.411fe4p-117f, 0x1.93501p-7f,
     0x1.a4e2c4p-49f, 0.0f, 0x1.f587fap-96f, 0.0f, 0.0f, 0.0f, 0x1.3dca6cp-84f,
     0x1.4d5bcap-118f, 0.0f, 0.0f, 0x1.5b8bcp-61f, 0x1.f14b88p-56f, 0x1.9d935ap-85f,
     0x1.153d12p-81f, 0x1.fa55b6p-31f, 0.0f, 0.0f, 0x1.371594p-14f, 0.0f, 0.0f,
     0x1.d42b82p-58f, 0.0f, 0.0f, 0.0f, 0x1.8f6ceep-126f, 0x1.c75a82p-81f,
     0x1.27533ep-104f, 0x1.5d6914p-7f, 0.0f, 0.0f, 0x1.50b0cap-111f, 0x1.18c97ap-109f,
     0.0f, 0x1.bd48eap-48f, 0x1.2b55bp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d9a48p-23f,
     0x1.160984p-89f, 0.0f, 0x1.6ed6a6p-13f, 0.0f, 0.0f, 0x1.321962p-26f, 0.0f,
     0x1.e401cp-66f, 0.0f, 0x1.4e2fa6p-68f, 0x1.661b0ap-90f, 0x1.203476p-81f,
     0x1.6fd97cp-64f, 0x1.fc8dc2p-13f, 0.0f, 0.0f, 0x1.aabe08p-113f, 0.0f,
     0x1.3f41dep-121f, 0.0f, 0x1.4fc51ap-51f, 0.0f, 0.0f, 0.0f, 0x1.17d09p-108f,
     0x1.ff7592p-17f, 0.0f, 0x1.ce84bp-121f, 0x1.626944p-75f, 0.0f, 0.0f, 0.0f,
     0x1.e99578p-64f, 0x1.279b22p-76f, 0x1.d3781ep-109f, 0.0f, 0x1.4c83bcp-94f,
     0x1.2fa0eap-121f, 0.0f, 0x1.34d4b8p-5f, 0.0f, 0x1.27f94cp-61f, 0x1.1e5e3p-59f,
     0.0f, 0.0f, 0x1.59be5cp-126f, 0x1.5b92ep-80f, 0x1.d72566p-50f, 0.0f, 0.0f, 0.0f,
     0x1.77f104p-108f, 0x1.fa0e3p-27f, 0.0f, 0x1.2e756p-54f, 0x1.e5ed6ep-112f,
     0x1.577dep-40f, 0.0f, 0x1.47f4acp-16f, 0x1.66f07cp-54f, 0x1.f30e64p-50f,
     0x1.d3532ap-82f, 0x1.851062p-17f, 0x1.e114eep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f635cp-76f, 0.0f, 0.0f, 0x1.7eaf2p-98f, 0x1.53067ep-37f, 0x1.2848dep-56f,
     0x1.c1eb04p-3f, 0.0f, 0.0f, 0x1.43a596p-19f, 0.0f, 0x1.bef004p-23f,
     0x1.377a7ep-62f, 0x1.60f642p-4f, 0x1.5429bcp-17f, 0x1.a0f7dp-60f, 0.0f,
     0x1.bf1c76p-32f, 0x1.1eb444p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dcf27p-78f, 0x1.d209p-93f, 0.0f, 0.0f, 0x1.fa746p-39f,
     0x1.4322b2p-49f, 0.0f, 0x1.e08b48p-36f, 0.0f, 0x1.ac2bdp-104f, 0.0f,
     0x1.22c1c8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff834p-9f, 0.0f, 0.0f,
     0x1.ed54bp-97f, 0.0f, 0x1.f1b138p-18f, 0x1.92df82p-24f, 0.0f, 0.0f,
     0x1.58f0acp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0072ap-112f, 0x1.0d5cc2p-56f,
     0x1.7f82dp-28f, 0.0f, 0x1.0c7246p-28f, 0.0f, 0x1.f275aep-35f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.698bccp-31f, 0.0f, 0.0f, 0x1.89e47cp-59f, 0x1.41bbf8p-85f,
     0x1.3b77bp-52f, 0.0f, 0x1.eead1cp-74f, 0.0f, 0x1.bce538p-80f, 0x1.288f04p-49f,
     0.0f, 0x1.65cabep-91f, 0x1.ac94f6p-60f, 0x1.f48d0ap-8f, 0x1.9ea80ap-17f,
     0x1.f7c1a4p-57f, 0x1.5d1a46p-50f, 0.0f, 0x1.dfc26ap-103f, 0.0f, 0.0f, 0.0f,
     0x1.0065c6p-63f, 0x1.683856p-53f, 0x1.9b9024p-43f, 0x1.b619c8p-32f,
     0x1.1bacc6p-88f, 0x1.04556cp-36f, 0.0f, 0.0f, 0.0f, 0x1.4cbe22p-88f, 0.0f,
     0x1.86ce9cp-105f, 0x1.a3a51ep-80f, 0.0f, 0x1.65cf6ep-90f, 0x1.3ce47ep-3f, 0.0f,
     0.0f, 0.0f, 0x1.a0a35p-63f, 0x1.b963c2p-48f, 0x1.09d72ap-29f, 0.0f,
     0x1.c2251cp-56f, 0x1.e71828p-63f, 0x1.99e312p-60f, 0x1.9a9472p-1f,
     0x1.a4d82p-54f, 0x1.ab85f6p-87f, 0.0f, 0x1.63693ap-37f, 0x1p0f, 0x1.33106cp-1f,
     0x1.4f9a1ep-8f, 0x1.884fe2p-3f, 0.0f, 0x1.24a77ap-3f, 0x1.4499d2p-7f,
     0x1.f92912p-59f, 0.0f, 0.0f, 0.0f, 0x1.9c7f12p-48f, 0.0f, 0.0f, 0x1.da163p-108f,
     0.0f, 0.0f, 0x1.3cf644p-82f, 0x1.bd7e8ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc972cp-116f, 0.0f, 0x1.1a0d62p-82f, 0x1p0f, 0x1.be7ddap-9f, 0.0f, 0.0f,
     0.0f, 0x1.887b0ep-121f, 0.0f, 0.0f, 0x1.fcdefcp-23f, 0x1.1179aep-61f, 0.0f, 0.0f,
     0x1.4a0812p-89f, 0.0f, 0.0f, 0.0f, 0x1.afadc4p-38f, 0.0f, 0.0f, 0.0f,
     0x1.f7e98p-17f, 0x1.a7105cp-19f, 0x1.aa7996p-11f, 0.0f, 0.0f, 0.0f,
     0x1.ece5fcp-120f, 0x1.e95fa2p-17f, 0x1.4e6904p-40f, 0.0f, 0x1.4b4436p-81f, 0.0f,
     0.0f, 0x1.566954p-83f, 0x1.7b420ep-60f, 0.0f, 0x1.c37e2ap-37f, 0x1.586a26p-30f,
     0x1.e289dp-79f, 0x1.dc1a6ep-76f, 0x1.5dc95ap-86f, 0.0f, 0.0f, 0x1.b64294p-50f,
     0x1.9d0bf6p-121f, 0x1.2b144ap-109f, 0.0f, 0.0f, 0x1.25fd1ap-50f, 0x1.176268p-52f,
     0x1.da5dfep-111f, 0x1.08f5e2p-112f, 0.0f, 0.0f, 0.0f, 0x1.c72d46p-7f, 0.0f,
     0x1.6fd512p-92f, 0.0f, 0x1.494cf8p-98f, 0x1.83f38ep-78f, 0x1.ea04c6p-106f, 0.0f,
     0x1.c3c378p-47f, 0x1.a1958p-117f, 0.0f, 0x1.03c4c6p-94f, 0.0f, 0x1.4f9054p-17f,
     0.0f, 0x1.0e1a9cp-7f, 0x1.e7a4cp-3f, 0x1.dbd52cp-111f, 0x1.c1f868p-62f,
     0x1.46dc88p-6f, 0x1.2a2df4p-24f, 0.0f, 0x1.50a70ap-122f, 0x1.56e73cp-61f,
     0x1.0ba084p-72f, 0x1.191d6ep-10f, 0.0f, 0x1.f74232p-3f, 0.0f, 0x1.13d3d6p-99f,
     0x1.825978p-44f, 0.0f, 0x1.2fb274p-37f, 0x1.8a6692p-122f, 0x1.4419d6p-36f,
     0x1.e89a64p-36f, 0x1.e9bebcp-95f, 0x1.11bcf4p-42f, 0.0f, 0.0f, 0x1.eec448p-12f,
     0x1.f28818p-12f, 0x1.e2d07p-36f, 0.0f, 0x1.e4505p-85f, 0x1.fdd738p-91f, 0.0f,
     0x1.819c5ap-59f, 0.0f, 0x1.0c2ab2p-104f, 0.0f, 0.0f, 0x1.2d8e56p-8f,
     0x1.8fbf84p-119f, 0x1.f9c3ccp-109f, 0.0f, 0.0f, 0x1.0b065cp-102f, 0.0f,
     0x1.d93e08p-7f, 0.0f, 0x1.3f1ebp-123f, 0.0f, 0.0f, 0x1.ef4812p-53f,
     0x1.7463dp-21f, 0.0f, 0.0f, 0.0f, 0x1.ce27e4p-36f, 0.0f, 0x1.cf9c58p-23f,
     0x1.330834p-61f, 0.0f, 0x1.5ad2d6p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b361ecp-107f, 0x1.3f55eep-40f, 0.0f, 0x1.ba4a0cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.18f07p-8f, 0.0f, 0x1.b4ec52p-75f, 0.0f, 0.0f, 0.0f, 0x1.eb0e1ep-104f,
     0x1.879af4p-109f, 0.0f, 0x1.4b0f6cp-50f, 0.0f, 0x1.503602p-29f, 0.0f, 0.0f, 0.0f,
     0x1.c484a8p-49f, 0x1.f022d8p-125f, 0x1.a9f4ep-12f, 0.0f, 0.0f, 0x1.74d058p-122f,
     0.0f, 0.0f, 0.0f, 0x1.0e0964p-80f, 0x1.f90b84p-30f, 0x1.de50eap-117f, 0x1p0f,
     0.0f, 0x1.7e028cp-1f, 0.0f, 0x1.4abe8cp-125f, 0x1.f21d84p-31f, 0x1.40aef8p-39f,
     0.0f, 0x1.53d45ep-55f, 0x1.0b53dep-31f, 0.0f, 0x1.6ff426p-17f, 0.0f,
     0x1.35fd32p-2f, 0x1.e1dd6cp-10f, 0x1.7e85dcp-36f, 0x1.90cebap-91f,
     0x1.805884p-35f, 0x1.e0c796p-98f, 0x1.abebaep-85f, 0x1.f5f6b4p-52f, 0.0f, 0.0f,
     0x1.38d618p-125f, 0x1.d04b92p-21f, 0x1.6eec72p-54f, 0x1.c56acp-76f,
     0x1.b91cdp-46f, 0x1.aecfbep-39f, 0.0f, 0.0f, 0x1.f9b3a8p-62f, 0x1.7af718p-103f,
     0x1.900b62p-94f, 0x1.3139cep-45f, 0.0f, 0x1.50bb8ep-57f, 0x1.f8b89ap-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a4a14p-16f, 0x1.4881cap-43f, 0x1.ce0b32p-43f,
     0x1.d487fp-32f, 0x1.49742ap-43f, 0.0f, 0x1.63307ep-86f, 0.0f, 0.0f,
     0x1.4329c2p-84f, 0.0f, 0x1.f52b8cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1f9ad8p-3f, 0.0f, 0x1.fb739ap-31f, 0.0f, 0.0f, 0x1.8959d2p-116f,
     0x1.597154p-18f, 0x1.8f61f2p-6f, 0.0f, 0x1.c15748p-9f, 0.0f, 0x1.d2aaa6p-125f,
     0x1.b8cf54p-108f, 0.0f, 0.0f, 0x1.9b1724p-7f, 0x1.910cep-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5924c8p-44f, 0.0f, 0x1.90abdap-27f, 0x1.be509p-116f, 0.0f,
     0x1.9bff34p-55f, 0x1.794d7ap-45f, 0x1.091588p-65f, 0x1.c240ap-49f, 0.0f, 0.0f,
     0x1.5184bep-93f, 0x1.4cbd9ap-48f, 0x1.7e1c2cp-44f, 0x1.ff043p-68f,
     0x1.1a27fep-111f, 0x1.a4c81ap-50f, 0.0f, 0x1.7cf3ep-65f, 0.0f, 0x1.678c38p-35f,
     0.0f, 0.0f, 0x1.fc5fdcp-106f, 0.0f, 0x1.29c01p-43f, 0x1.89736p-80f,
     0x1.1411d8p-71f, 0.0f, 0x1.da7906p-104f, 0.0f, 0.0f, 0x1.cbfb3ap-51f,
     0x1.e50376p-74f, 0x1.058abp-99f, 0x1.506af8p-42f, 0.0f, 0x1.79dd84p-28f,
     0x1.5697eap-58f, 0.0f, 0.0f, 0x1.42494ap-17f, 0x1.4d7212p-109f, 0x1.66516ep-97f,
     0x1.f322a4p-12f, 0.0f, 0.0f, 0x1.8f8a62p-16f, 0x1.f9885ep-104f, 0.0f,
     0x1.82bc22p-114f, 0x1.6c5266p-120f, 0x1.c7ada4p-2f, 0.0f, 0x1.abcd56p-67f,
     0x1.5094cep-46f, 0x1.a40efep-87f, 0x1.e055e6p-121f, 0.0f, 0x1.f7e128p-100f,
     0x1.eda0a4p-50f, 0.0f, 0x1.3fa14p-56f, 0x1.aa3f5cp-50f, 0x1.653786p-51f, 0.0f,
     0x1.2c376cp-38f, 0.0f, 0.0f, 0.0f, 0x1.4b42aep-74f, 0x1.82fe84p-25f, 0.0f, 0.0f,
     0.0f, 0x1.6152e8p-114f, 0.0f, 0x1.fa0d1ap-6f, 0x1.66dc48p-49f, 0x1.c92b0cp-6f,
     0x1.f89ab8p-123f, 0.0f, 0x1.bbd0b2p-74f, 0.0f, 0x1.c158b2p-110f, 0.0f,
     0x1.976078p-69f, 0x1.a5119p-57f, 0x1.6ede0ep-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebc484p-43f, 0x1.e8a9c6p-40f, 0x1.c67b4p-30f, 0.0f, 0x1.98be14p-105f, 0.0f,
     0x1.f0726ep-126f, 0.0f, 0x1.ce5468p-121f, 0x1.ca60fap-11f, 0x1.19b9a8p-110f,
     0x1.3b2af4p-41f, 0x1.1052b8p-13f, 0x1.962888p-29f, 0x1.c1536ap-70f,
     0x1.d018c4p-64f, 0x1.5b79a6p-2f, 0x1.67dbeap-126f, 0.0f, 0.0f, 0.0f,
     0x1.3a7ep-101f, 0x1.0f2798p-29f, 0.0f, 0.0f, 0x1.9c3bbap-82f, 0x1.da05f4p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.154496p-80f, 0.0f,
     0x1.76afdep-118f, 0.0f, 0x1.8549ap-54f, 0x1.2d4d2ep-36f, 0.0f, 0.0f,
     0x1.10910cp-108f, 0.0f, 0.0f, 0.0f, 0x1.be8666p-3f, 0.0f, 0x1.057fcap-83f, 0.0f,
     0.0f, 0x1.2437a2p-60f, 0x1.4b095ap-96f, 0.0f, 0.0f, 0.0f, 0x1.49ee8ep-25f,
     0x1.a3a6cp-73f, 0.0f, 0x1.8a35f8p-49f, 0.0f, 0x1.bbe964p-72f, 0.0f,
     0x1.08ce4ap-110f, 0.0f, 0x1.fbfc3ap-10f, 0.0f, 0.0f, 0x1.670c2ap-87f, 0.0f, 0.0f,
     0x1.3a1188p-10f, 0.0f, 0x1.922b8ap-38f, 0.0f, 0.0f, 0x1.24a348p-67f, 0.0f,
     0x1.5a6696p-108f, 0x1.2dcf74p-21f, 0.0f, 0x1.617beep-80f, 0.0f, 0x1.8b6396p-5f,
     0x1.b0ba4cp-83f, 0x1.9bc49ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.577f7ep-90f,
     0.0f, 0.0f, 0.0f, 0x1.6d98a4p-89f, 0x1p0f, 0x1.297d78p-79f, 0.0f,
     0x1.43bbb2p-108f, 0.0f, 0x1.90ba0cp-16f, 0.0f, 0x1.61b7e2p-105f, 0x1.44a64cp-55f,
     0.0f, 0x1.e61c7ep-75f, 0.0f, 0.0f, 0x1p0f, 0x1.adf6acp-122f, 0.0f,
     0x1.9e19c2p-88f, 0x1.629f02p-93f, 0.0f, 0.0f, 0x1.b2ee02p-31f, 0x1.18997cp-79f,
     0x1.f8fab2p-50f, 0x1.6e3f14p-38f, 0.0f, 0x1.ab3dfcp-81f, 0.0f, 0x1p0f,
     0x1.e6092ap-30f, 0.0f, 0.0f, 0x1.27fd4ep-14f, 0x1.cb7ae2p-71f, 0x1.7878bap-111f,
     0x1.41a47cp-60f, 0x1.7bbddcp-19f, 0x1.1470a4p-52f, 0x1.6d39a4p-99f,
     0x1.6acf56p-50f, 0.0f, 0.0f, 0.0f, 0x1.55b374p-4f, 0x1.6c3dfcp-95f, 0.0f, 0.0f,
     0x1.f19bb4p-96f, 0x1.6c126ap-97f, 0.0f, 0x1.34bdap-125f, 0.0f, 0x1.c03e2ep-114f,
     0.0f, 0x1.2b0544p-24f, 0.0f, 0x1.23c15p-6f, 0x1.79827ep-117f, 0x1.d04eeap-33f,
     0.0f, 0.0f, 0x1.3dbc9p-82f, 0x1.6ef702p-121f, 0.0f, 0x1.f24ddcp-18f, 0.0f,
     0x1.323e8cp-112f, 0x1.a5e29ap-6f, 0.0f, 0x1.5bfa4cp-55f, 0.0f, 0.0f,
     0x1.88a166p-21f, 0.0f, 0.0f, 0x1.1e6de8p-6f, 0x1.a78498p-46f, 0x1.6ec45ep-121f,
     0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_acosf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_acosf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acosf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
