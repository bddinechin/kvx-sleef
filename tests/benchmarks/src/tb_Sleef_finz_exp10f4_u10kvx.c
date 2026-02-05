/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f4_u10kvx.c --function \
 *     Sleef_finz_exp10f4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.952a22p-12f, 0x1.ebb90cp-53f, 0x1.395efcp-25f, 0.0f, 0x1.ab2a3p-126f,
     0x1.33be6cp-33f, 0x1.2ec6eep-124f, 0x1.1532c4p-26f, 0.0f, 0x1.fc83e6p-97f,
     0x1.d1152p-85f, 0.0f, 0.0f, 0x1.724dd2p-12f, 0x1.c68eb6p-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.67f1c8p-75f, 0x1.4817ep-52f, 0.0f, 0.0f, 0x1.6131bep-116f,
     0x1.34fc6cp-22f, 0.0f, 0x1.b4b688p-16f, 0.0f, 0.0f, 0x1.8fda5p-3f, 0.0f, 0.0f,
     0x1.ca678p-101f, 0.0f, 0x1.c2b502p-91f, 0x1.00093ap-34f, 0x1.68d912p-8f, 0.0f,
     0.0f, 0x1.0db6b6p-114f, 0.0f, 0.0f, 0.0f, 0x1.6accf6p-103f, 0x1.3b7c22p-69f,
     0.0f, 0.0f, 0.0f, 0x1.3c8dccp-18f, 0.0f, 0.0f, 0x1.5364c2p-98f, 0.0f, 0.0f, 0.0f,
     0x1.e6e8e2p-19f, 0x1.fabe6p-97f, 0x1.1784e2p-20f, 0.0f, 0.0f, 0x1.430e38p-81f,
     0x1.e71ae2p-6f, 0.0f, 0x1.e18facp-20f, 0.0f, 0.0f, 0x1.e5618ap-38f, 0.0f, 0.0f,
     0.0f, 0x1.ea039cp-14f, 0.0f, 0x1.dd3a96p-48f, 0.0f, 0.0f, 0x1.6a025ap-78f, 0.0f,
     0.0f, 0x1.401862p-93f, 0x1.d8485ep-116f, 0.0f, 0x1.26d77ep-76f, 0.0f,
     0x1.9f379cp-11f, 0x1.aaec16p-33f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.5c2f5ap-70f,
     0.0f, 0x1.72dc8ap-6f, 0.0f, 0x1.e51082p-80f, 0x1.b17ff4p-42f, 0x1.dcc8dp-44f,
     0.0f, 0x1.5ce076p-86f, 0.0f, 0x1.452e78p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15c998p-113f, 0x1.f2f35ep-5f, 0.0f, 0x1.63e78cp-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79aafcp-96f, 0.0f, 0x1.aa6292p-85f, 0.0f, 0x1.bbe36ap-19f, 0.0f,
     0x1.f3c0bp-54f, 0.0f, 0x1.0d6368p-55f, 0x1.706e32p-15f, 0.0f, 0.0f,
     0x1.e4ed78p-72f, 0x1.b3499ep-112f, 0x1.e12b02p-55f, 0x1.2773fp-54f,
     0x1.2c0ef2p-117f, 0.0f, 0.0f, 0x1.1508d4p-80f, 0x1.4caf72p-56f, 0.0f,
     0x1.146c1ep-105f, 0x1.770a9ap-115f, 0.0f, 0.0f, 0x1.4c6b42p-52f,
     0x1.640394p-114f, 0x1.45a3ccp-29f, 0x1.78b852p-31f, 0.0f, 0x1.a93ed6p-14f,
     0x1.522b26p-112f, 0.0f, 0x1.1b4c8ep-12f, 0x1.aa6724p-98f, 0.0f, 0x1.49373cp-19f,
     0.0f, 0x1.bde2c4p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bdf46p-40f, 0.0f, 0.0f, 0.0f,
     0x1.7444fcp-83f, 0.0f, 0.0f, 0.0f, 0x1.ded068p-25f, 0x1.a159d2p-101f, 0.0f,
     0x1.1cf3ap-16f, 0x1.5fd74p-7f, 0x1.58657ep-14f, 0x1.107f54p-111f, 0.0f,
     0x1.4085dep-122f, 0.0f, 0x1.109be2p-69f, 0.0f, 0x1.7df1bp-30f, 0x1.ca05bp-68f,
     0x1.d86e12p-6f, 0x1.f7225ep-93f, 0x1.3f5cdap-110f, 0.0f, 0x1.3a1dbap-90f,
     0x1.2ec8d4p-44f, 0.0f, 0.0f, 0x1.db1caap-65f, 0x1.2f5ee4p-99f, 0.0f,
     0x1.213fc8p-44f, 0.0f, 0.0f, 0x1.4e5f4p-96f, 0.0f, 0x1.74435ep-73f,
     0x1.0ccb8cp-109f, 0.0f, 0.0f, 0x1.50efc8p-31f, 0.0f, 0x1.eddd2p-65f, 0.0f, 0.0f,
     0x1.40754p-104f, 0x1.50332ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b837ep-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dab996p-43f, 0.0f, 0x1.c10ca8p-10f, 0x1.3a90dcp-14f,
     0.0f, 0.0f, 0x1.743eb6p-14f, 0.0f, 0.0f, 0.0f, 0x1.d0aef4p-120f, 0x1.38ccb8p-92f,
     0.0f, 0x1.0821cep-78f, 0x1.3c200ap-125f, 0.0f, 0.0f, 0x1.57565ep-75f,
     0x1.beeedap-116f, 0.0f, 0.0f, 0.0f, 0x1.a36244p-3f, 0.0f, 0x1.9ac518p-58f,
     0x1.03c6acp-110f, 0x1.eeb298p-93f, 0.0f, 0.0f, 0.0f, 0x1.8fbbfap-121f, 0.0f,
     0x1.9b1002p-78f, 0x1.14209ep-65f, 0.0f, 0.0f, 0.0f, 0x1.60ed04p-70f, 0.0f, 0.0f,
     0.0f, 0x1.2d548p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c621p-67f,
     0x1.7c1f0ap-65f, 0x1.6411bcp-101f, 0x1.0958b6p-93f, 0x1.edca5cp-82f, 0.0f,
     0x1.ef88e4p-9f, 0x1.c5b706p-68f, 0.0f, 0x1.7070cp-80f, 0x1.32da9p-1f, 0.0f, 0.0f,
     0.0f, 0x1.2b4e58p-29f, 0.0f, 0.0f, 0x1.0b1566p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.396facp-116f, 0.0f, 0x1.3209f2p-76f, 0x1.4e984ap-9f, 0.0f, 0.0f,
     0x1.9ff53ap-2f, 0.0f, 0x1.42085cp-4f, 0.0f, 0x1.b968cp-83f, 0x1.363416p-44f,
     0.0f, 0.0f, 0x1.5e6278p-49f, 0x1.b12676p-97f, 0.0f, 0x1.5cb272p-100f, 0.0f, 0.0f,
     0.0f, 0x1.fbebf6p-121f, 0.0f, 0.0f, 0.0f, 0x1.d55bacp-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3386c2p-81f, 0x1.c6974cp-114f, 0x1.1a4e48p-101f, 0x1.7692a2p-105f,
     0.0f, 0.0f, 0.0f, 0x1.81ab1cp-98f, 0.0f, 0x1.1abb9ep-75f, 0x1.8dbf2cp-27f, 0.0f,
     0.0f, 0x1.4c4a96p-51f, 0x1.ed18a6p-85f, 0.0f, 0x1.4ccc1ep-59f, 0x1.64b492p-92f,
     0.0f, 0.0f, 0x1.6bba92p-95f, 0x1.61d4d6p-109f, 0x1.5fc4b2p-79f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3601cp-34f, 0x1.35aa0ap-69f, 0x1.06f57cp-102f, 0.0f, 0.0f, 0.0f,
     0x1.e2084cp-111f, 0x1.e4bf44p-76f, 0x1.84cec6p-106f, 0.0f, 0x1.6f3df2p-17f, 0.0f,
     0x1.ff3c78p-76f, 0x1.39f658p-75f, 0.0f, 0.0f, 0.0f, 0x1.ace61p-114f,
     0x1.69b116p-123f, 0.0f, 0.0f, 0x1.2e4a2p-1f, 0.0f, 0x1.84b1aep-70f, 0.0f, 0.0f,
     0.0f, 0x1.87f7bep-66f, 0x1.d7379ep-88f, 0x1.67047ep-61f, 0.0f, 0.0f, 0x1p0f,
     0x1.8e307cp-95f, 0x1.e626eep-67f, 0x1.d77a6p-14f, 0x1.8643dp-113f, 0.0f, 0.0f,
     0.0f, 0x1.6ca202p-64f, 0.0f, 0x1.aec5dp-88f, 0.0f, 0.0f, 0x1.2aafcp-99f, 0.0f,
     0x1.13db3cp-107f, 0x1.bca93ap-96f, 0.0f, 0x1.8dd144p-41f, 0x1.f77958p-113f, 0.0f,
     0x1.143dd6p-11f, 0x1.d99p-41f, 0.0f, 0x1.3dba34p-86f, 0.0f, 0x1.bffc88p-8f,
     0x1.536dc8p-112f, 0.0f, 0x1.dfcb7cp-87f, 0x1.d24068p-24f, 0x1.6407bap-71f, 0.0f,
     0.0f, 0.0f, 0x1.90f7ccp-10f, 0x1.d1606cp-73f, 0x1.3f67f8p-91f, 0x1.aa8c7ap-53f,
     0x1.a211b4p-24f, 0x1.957074p-119f, 0x1.f2efp-38f, 0.0f, 0x1.36f876p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.772cd2p-90f, 0x1.23a21ep-106f, 0.0f,
     0.0f, 0.0f, 0x1.321718p-107f, 0.0f, 0.0f, 0x1.ba9ffp-33f, 0x1.0eca0ep-52f,
     0x1.ecd22ap-85f, 0.0f, 0.0f, 0x1.f2a742p-57f, 0.0f, 0x1.14a238p-66f, 0.0f, 0.0f,
     0x1.005e5p-89f, 0x1.da92c2p-26f, 0.0f, 0.0f, 0x1.5a6b96p-106f, 0.0f,
     0x1.31bde4p-61f, 0x1.795646p-122f, 0x1.7d38ecp-63f, 0.0f, 0x1.c95b3ap-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caff62p-90f, 0.0f, 0x1.bdbc8p-2f,
     0x1.aaa64cp-55f, 0x1.7f8aaap-57f, 0x1.8bd5a4p-41f, 0x1.46d5fap-98f,
     0x1.1561b6p-1f, 0x1.c0488ep-93f, 0x1.648d24p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7088ap-85f, 0x1.cc15c2p-43f, 0.0f, 0x1.d5880ep-109f, 0.0f, 0x1.b504d4p-71f,
     0x1.9eb9a4p-93f, 0x1.147ac6p-18f, 0.0f, 0x1.3dae04p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba087ap-37f, 0x1.329978p-87f, 0.0f, 0.0f, 0x1.eeeb64p-57f, 0.0f, 0.0f,
     0.0f, 0x1.6865ecp-28f, 0.0f, 0x1.6eaadep-34f, 0.0f, 0x1.1a862ap-92f, 0.0f, 0.0f,
     0x1.969f52p-112f, 0.0f, 0.0f, 0x1.088d56p-85f, 0x1.5648dcp-50f, 0x1.fe9b78p-88f,
     0x1.19aea8p-19f, 0.0f, 0x1.4f8a0ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.805bdep-108f,
     0.0f, 0x1.06cfdcp-80f, 0x1.29661cp-31f, 0.0f, 0x1.209b44p-89f, 0.0f, 0.0f, 0.0f,
     0x1.1a794cp-98f, 0.0f, 0.0f, 0.0f, 0x1.0d4102p-66f, 0.0f, 0.0f, 0x1.21895ep-4f,
     0x1.e126f2p-120f, 0.0f, 0x1.b52c98p-47f, 0x1.49ee6ep-50f, 0x1.ebdb54p-38f,
     0x1.a916dp-67f, 0.0f, 0.0f, 0x1.864bc8p-43f, 0x1.2e4d16p-94f, 0.0f, 0.0f, 0.0f,
     0x1.0ebd9cp-89f, 0x1.4d4bcap-66f, 0.0f, 0x1.548f52p-80f, 0x1.e5f116p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4f8c2ep-10f, 0.0f, 0x1.b4c36ap-112f, 0x1.9321cp-38f, 0.0f,
     0.0f, 0.0f, 0x1.78def6p-25f, 0.0f, 0x1.05546ap-52f, 0.0f, 0.0f, 0x1.64edp-31f,
     0.0f, 0x1.37e4a8p-17f, 0.0f, 0x1p0f, 0x1.1e2da8p-88f, 0.0f, 0.0f,
     0x1.8b0ba8p-58f, 0x1.3ab8e8p-111f, 0.0f, 0x1.ad8dbp-64f, 0x1.50fda8p-59f,
     0x1.38a96p-25f, 0x1.511218p-6f, 0x1.20062p-89f, 0x1.3bee26p-4f, 0.0f, 0.0f,
     0x1.e73ac2p-21f, 0.0f, 0x1.dbed98p-64f, 0x1.548ad6p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d555p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1272bp-43f, 0.0f, 0x1.724572p-106f,
     0.0f, 0x1.81c9e6p-90f, 0.0f, 0.0f, 0.0f, 0x1.eaa0e4p-101f, 0.0f, 0.0f,
     0x1.590488p-40f, 0x1.7d4388p-90f, 0.0f, 0x1.7f47ep-105f, 0.0f, 0.0f,
     0x1.2f0752p-23f, 0.0f, 0.0f, 0x1.4d130ep-122f, 0.0f, 0x1.e2f6eep-55f, 0.0f,
     0x1.760a38p-117f, 0.0f, 0x1.24ecbap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fae54p-76f, 0x1.b5dc16p-13f, 0x1.47886cp-23f, 0x1.5202c8p-45f, 0.0f, 0.0f,
     0.0f, 0x1.8b8868p-22f, 0.0f, 0x1.cf107p-101f, 0x1.14d772p-99f, 0x1.da44c8p-99f,
     0.0f, 0.0f, 0x1.c6ec62p-80f, 0.0f, 0x1.1f0f02p-52f, 0x1.0300e8p-105f,
     0x1.c1f84ap-10f, 0x1.bd16e4p-68f, 0.0f, 0x1.0271acp-44f, 0.0f, 0.0f, 0.0f,
     0x1.b2af98p-86f, 0x1.d60e1ap-48f, 0x1.1cf89p-94f, 0.0f, 0x1.f18e9p-115f, 0.0f,
     0x1.7b3418p-38f, 0.0f, 0x1.d08892p-51f, 0x1.b459dep-124f, 0x1.c91072p-54f, 0.0f,
     0.0f, 0x1.8684b2p-86f, 0.0f, 0.0f, 0x1.c0318cp-5f, 0.0f, 0.0f, 0.0f,
     0x1.a4060ap-100f, 0.0f, 0.0f, 0.0f, 0x1.e8bf3ep-118f, 0.0f, 0x1.32432p-123f,
     0.0f, 0.0f, 0.0f, 0x1.5d7196p-71f, 0x1.ee2c68p-64f, 0x1.ebc9c4p-102f, 0.0f, 0.0f,
     0.0f, 0x1.9991c6p-45f, 0x1.e0caf8p-97f, 0x1.1b299ep-104f, 0x1.c51284p-124f, 0.0f,
     0.0f, 0x1.2297fcp-40f, 0.0f, 0x1.ffe75ep-79f, 0x1.65f98cp-29f, 0x1.2d88ecp-78f,
     0.0f, 0x1.ff50ccp-26f, 0.0f, 0.0f, 0.0f, 0x1.d6ebc4p-125f, 0x1.376c58p-37f,
     0x1.14a7b4p-27f, 0x1.595d22p-116f, 0x1.e7776p-75f, 0x1.16fe2ep-13f, 0.0f, 0.0f,
     0.0f, 0x1.e936f4p-105f, 0x1.b1aa58p-122f, 0.0f, 0x1.a5cf34p-121f,
     0x1.362a9ap-81f, 0.0f, 0.0f, 0x1.9056e4p-115f, 0x1.1ab73p-93f, 0.0f,
     0x1.15dab2p-5f, 0x1.5b6052p-88f, 0x1.65fc04p-67f, 0x1.69d3ecp-64f,
     0x1.5d2822p-65f, 0.0f, 0.0f, 0x1.3006cep-82f, 0.0f, 0x1.5fda42p-39f,
     0x1.d2da9cp-49f, 0x1.afa9bp-99f, 0x1.fff322p-1f, 0.0f, 0x1.0577d4p-38f,
     0x1.5aaea8p-72f, 0x1.80030ep-60f, 0.0f, 0x1.ea8df4p-51f, 0x1.daa08p-1f, 0.0f,
     0x1.037394p-13f, 0.0f, 0x1.2de8dp-117f, 0x1.6855acp-87f, 0x1.02d5fp-8f,
     0x1.eede1ap-75f, 0.0f, 0.0f, 0.0f, 0x1.b3bdbp-89f, 0x1.8242b2p-10f,
     0x1.8cd64p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5beap-50f, 0x1.3c4356p-71f,
     0x1.131a56p-4f, 0x1.3d1a96p-36f, 0x1.f4c09ap-7f, 0x1.caf3fp-86f, 0.0f,
     0x1.035812p-117f, 0.0f, 0x1.457dcp-74f, 0x1.76f5eep-44f, 0x1.0717cp-78f,
     0x1.6d1522p-21f, 0x1.491dbcp-15f, 0x1.3068dap-115f, 0x1.a6f1f4p-117f,
     0x1.d16408p-2f, 0x1.4b7f42p-125f, 0.0f, 0.0f, 0.0f, 0x1.767238p-101f,
     0x1.bb971ep-75f, 0x1.6ba91cp-40f, 0x1.9b696ap-120f, 0.0f, 0.0f, 0x1.938358p-119f,
     0.0f, 0x1.92bbbp-27f, 0.0f, 0x1.822a1p-26f, 0x1.8eff6ep-73f, 0.0f,
     0x1.1fc756p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ecb34p-85f, 0x1.7ba1e6p-9f, 0.0f,
     0.0f, 0.0f, 0x1.ce337ap-62f, 0x1.21c272p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fff93ep-11f, 0.0f, 0.0f, 0x1.59a1fap-79f, 0x1.5c1774p-104f, 0x1.7e43bap-45f,
     0.0f, 0x1.1b5ba6p-117f, 0.0f, 0.0f, 0.0f, 0x1.be119cp-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dde06p-92f, 0x1.2a25bcp-31f, 0.0f,
     0x1.80136cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ca0ecp-121f,
     0x1.ee84d4p-54f, 0.0f, 0.0f, 0x1.4643aep-97f, 0x1.4418ap-85f, 0x1.268a14p-23f,
     0x1.28cf5cp-12f, 0x1.067ea2p-84f, 0x1.f50c4p-108f, 0x1.56999ap-112f, 0.0f,
     0x1.a6b2a6p-16f, 0x1.4f70b2p-25f, 0.0f, 0x1.ecab04p-8f, 0x1.086826p-18f, 0.0f,
     0x1.bf75cp-126f, 0.0f, 0x1.c5020cp-103f, 0x1.102f2cp-83f, 0.0f, 0.0f,
     0x1.bdfd42p-115f, 0x1.610286p-47f, 0x1.d42d5ap-61f, 0x1.d4a0bep-70f, 0.0f,
     0x1.33634cp-38f, 0x1.f55fcp-95f, 0.0f, 0.0f, 0.0f, 0x1.8cc08p-97f,
     0x1.5b92c8p-109f, 0.0f, 0x1.5a994p-29f, 0x1.9de5cep-64f, 0x1.2492eep-119f, 0.0f,
     0.0f, 0.0f, 0x1.57b06ep-105f, 0.0f, 0.0f, 0x1.4b9cc4p-50f, 0.0f, 0x1.fb1b78p-86f,
     0x1.8d58c2p-116f, 0.0f, 0x1.f94eb8p-77f, 0.0f, 0.0f, 0x1.71ccd4p-62f,
     0x1.aa283ap-112f, 0.0f, 0x1.84ab8p-42f, 0x1.744f7ap-115f, 0x1.aa9896p-72f, 0.0f,
     0x1.cdd65cp-8f, 0x1.bed3bcp-25f, 0.0f, 0x1.8baa7ep-62f, 0.0f, 0x1.97f1ap-54f,
     0x1.a9cf12p-103f, 0x1.efc248p-74f, 0x1.f90cdcp-30f, 0.0f, 0x1.7e080ep-78f, 0.0f,
     0.0f, 0x1.7216d6p-102f, 0.0f, 0x1.dbd956p-59f, 0.0f, 0x1.11e58ep-6f, 0.0f,
     0x1.51969ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f9968p-19f, 0x1.42760ap-125f,
     0.0f, 0x1.66c8fcp-55f, 0x1.c07586p-57f, 0x1.5d667ep-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f29814p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.513026p-109f, 0.0f, 0x1.c57b0ap-65f,
     0.0f, 0x1.86b6c2p-110f, 0x1.0e1ae4p-97f, 0x1.f8cd06p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.448f66p-44f, 0.0f, 0x1.42817ap-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6aefe8p-56f, 0x1.45101ep-119f, 0x1.04d274p-3f, 0x1.c852fp-29f, 0.0f,
     0.0f, 0.0f, 0x1.91eddp-46f, 0.0f, 0.0f, 0.0f, 0x1.cf389p-24f, 0x1.43eafep-83f,
     0x1.32cb4cp-23f, 0x1.43a766p-107f, 0x1.f8e4aep-124f, 0x1.294ba6p-98f, 0.0f,
     0x1.2131p-90f, 0.0f, 0.0f, 0x1.181f14p-101f, 0.0f, 0x1.e54e1cp-83f,
     0x1.938686p-47f, 0.0f, 0x1.61078ep-121f, 0x1.c33ea8p-62f, 0.0f, 0.0f,
     0x1.cdd4fap-18f, 0x1.5d74c2p-88f, 0x1p0f
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
            tmp1 = Sleef_finz_exp10f4_u10kvx(tmp0);
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
    printf("Sleef_finz_exp10f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp10f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
