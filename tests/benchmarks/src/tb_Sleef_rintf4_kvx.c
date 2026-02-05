/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintf4_kvx.c --function Sleef_rintf4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.30a13ap-65f, 0x1.8c36c6p-31f, 0x1.9f35b6p-120f, 0x1.3bbb76p-103f,
     0.0f, 0x1.067828p-85f, 0.0f, 0.0f, 0.0f, 0x1.5745b8p-36f, 0x1.2ac14ep-40f, 0.0f,
     0x1.49f67ep-125f, 0.0f, 0x1.d949ap-20f, 0.0f, 0x1.aa05fep-5f, 0.0f,
     0x1.d44024p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04f47p-57f, 0x1.6caf64p-74f, 0.0f,
     0x1.12fa6ap-60f, 0.0f, 0x1.d2a7fcp-80f, 0x1.8e9c8p-92f, 0.0f, 0.0f, 0.0f,
     0x1.ce8d5p-95f, 0x1.1d41eap-73f, 0.0f, 0x1.d4e06p-44f, 0x1.18f4cep-85f, 0.0f,
     0x1.10e38cp-100f, 0x1.02ec34p-14f, 0x1.6dff3ap-20f, 0x1.8eb8c6p-33f,
     0x1.b3d63cp-92f, 0.0f, 0x1.ade412p-76f, 0x1.f0748ap-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8e0592p-13f, 0x1.1c0b38p-62f, 0.0f, 0x1.22c104p-84f, 0x1.bcf4aep-92f,
     0.0f, 0.0f, 0x1.dfff82p-122f, 0.0f, 0.0f, 0.0f, 0x1.fdced6p-22f, 0x1.c29d72p-27f,
     0x1.51aaaep-88f, 0.0f, 0x1.f42f6ap-84f, 0x1.9ce2b4p-94f, 0.0f, 0x1.9aaa12p-84f,
     0.0f, 0.0f, 0x1.eebd42p-115f, 0x1.498c68p-24f, 0x1.0d9af4p-78f, 0.0f,
     0x1.2eb65ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.803dfp-59f, 0.0f, 0.0f,
     0x1.afe3b8p-19f, 0.0f, 0.0f, 0x1.0c5832p-2f, 0x1.6476f6p-3f, 0.0f,
     0x1.68147ep-33f, 0.0f, 0x1.f4e682p-57f, 0.0f, 0x1.0f0a5p-16f, 0.0f, 0.0f,
     0x1.a6344ep-53f, 0.0f, 0x1.fca8e8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf7a2ap-91f,
     0.0f, 0.0f, 0x1.3b20dcp-106f, 0x1.67491p-57f, 0x1.9969dep-33f, 0.0f, 0.0f,
     0x1.824fd4p-47f, 0.0f, 0.0f, 0x1.54fc94p-38f, 0.0f, 0.0f, 0x1.0ff94cp-48f,
     0x1.8a1f4p-112f, 0.0f, 0x1.57cddep-117f, 0.0f, 0x1.63ceccp-105f,
     0x1.c659a8p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.729cbp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b22692p-80f, 0.0f, 0x1.088266p-122f, 0.0f, 0x1.6f8f68p-89f,
     0x1.bbe204p-102f, 0.0f, 0x1.3372cp-20f, 0x1.503f12p-45f, 0.0f, 0.0f,
     0x1.422868p-94f, 0x1.08d2ap-124f, 0x1.cb5bfcp-93f, 0.0f, 0.0f, 0x1.29870ep-91f,
     0x1.0c38d2p-14f, 0x1.b7ba66p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc27c6p-21f, 0.0f,
     0x1.0d659ap-106f, 0.0f, 0x1.3228eep-55f, 0x1.52d4d2p-40f, 0x1.8a06d2p-24f, 0.0f,
     0x1.962c3p-10f, 0x1.aa2e06p-92f, 0.0f, 0.0f, 0x1.5a6a6cp-41f, 0x1.c98294p-66f,
     0.0f, 0.0f, 0x1.aac5e4p-83f, 0x1.d28d4cp-79f, 0.0f, 0x1.1fbab2p-2f, 0.0f, 0.0f,
     0x1.59c262p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbc31ep-95f, 0.0f, 0.0f, 0.0f,
     0x1.963e1cp-99f, 0.0f, 0x1.3db426p-32f, 0x1.04205cp-93f, 0.0f, 0.0f,
     0x1.571e82p-120f, 0.0f, 0.0f, 0x1.4e53b2p-93f, 0x1.f9c8bep-100f, 0.0f,
     0x1.2a4c4cp-31f, 0.0f, 0x1.81142ep-117f, 0x1.0e6b3ep-30f, 0.0f, 0.0f,
     0x1.87e22ep-35f, 0x1.f0e4p-28f, 0x1.634482p-126f, 0x1.4c57bep-73f, 0.0f, 0.0f,
     0x1.89022ep-59f, 0.0f, 0x1.78d0cap-35f, 0.0f, 0x1.61fc94p-39f, 0x1.f5b50ap-37f,
     0x1.aa5644p-62f, 0.0f, 0x1.1dd71ap-3f, 0x1.da7bbep-76f, 0.0f, 0x1.c367fep-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb92aap-66f, 0x1.36183cp-66f, 0.0f, 0x1.c27cdap-14f,
     0x1.129798p-39f, 0x1.0657e6p-2f, 0.0f, 0.0f, 0x1.ed00cap-56f, 0.0f, 0.0f,
     0x1.87cc08p-23f, 0x1.939504p-61f, 0x1.0bda96p-48f, 0.0f, 0.0f, 0x1.90dcc8p-43f,
     0x1.b12d4ap-104f, 0x1.1ad8fp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.937472p-65f,
     0x1.3a7704p-78f, 0.0f, 0x1.1e0bccp-113f, 0x1.316b6ep-64f, 0x1.610438p-65f, 0.0f,
     0.0f, 0x1.9cef4ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26801cp-21f, 0x1.14a6c8p-17f,
     0x1.69e952p-41f, 0.0f, 0.0f, 0.0f, 0x1.910faep-122f, 0x1.0e6bcp-25f,
     0x1.c002ap-17f, 0.0f, 0x1.133abp-7f, 0.0f, 0.0f, 0x1.4e47dap-13f, 0.0f,
     0x1.82aecep-67f, 0x1.32af5ap-34f, 0.0f, 0x1.425cc8p-49f, 0.0f, 0.0f,
     0x1.35272cp-80f, 0x1.b847b2p-114f, 0.0f, 0x1.915182p-71f, 0x1.b10776p-2f, 0.0f,
     0.0f, 0x1.1d024ep-19f, 0.0f, 0x1.25f40ep-92f, 0x1.0e9be6p-3f, 0.0f, 0.0f, 0.0f,
     0x1.443492p-103f, 0x1.e9d2ap-101f, 0x1.95a734p-42f, 0.0f, 0x1.68b238p-118f, 0.0f,
     0x1.104e08p-30f, 0x1.baeb9p-48f, 0x1.887226p-59f, 0.0f, 0x1.bd1db4p-125f, 0.0f,
     0x1.9c7deap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da24d8p-51f, 0.0f,
     0x1.8c051p-61f, 0.0f, 0x1.dca2dep-115f, 0x1.cab8p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcd64p-35f, 0x1.3ab6bap-76f, 0x1.d68ed8p-72f,
     0x1.acaf7ap-36f, 0.0f, 0x1.edc4e4p-116f, 0.0f, 0x1.8afdcp-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7a45a4p-79f, 0.0f, 0x1.15b5eep-9f, 0.0f, 0.0f, 0.0f, 0x1.e404d6p-124f,
     0.0f, 0x1.463c7ap-117f, 0.0f, 0x1.db5306p-52f, 0.0f, 0.0f, 0x1.5bfb6ap-52f, 0.0f,
     0x1.d220dap-94f, 0.0f, 0.0f, 0.0f, 0x1.cf578p-12f, 0x1.ab65c4p-109f,
     0x1.bf17a2p-35f, 0x1.6b5e3ep-66f, 0x1.c2dda4p-67f, 0.0f, 0x1.b30528p-41f, 0.0f,
     0x1.b565bep-115f, 0x1.3dff36p-27f, 0x1.8d53cap-75f, 0x1.6525dap-80f,
     0x1.31fcaap-53f, 0x1.f69f6ap-16f, 0.0f, 0.0f, 0.0f, 0x1.747d7ap-16f,
     0x1.d2e274p-68f, 0.0f, 0x1.751d68p-55f, 0x1.ffd77p-71f, 0.0f, 0x1.66a5bep-56f,
     0x1.d4ebb6p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0856acp-75f, 0x1.442f8p-100f,
     0x1.17d6c6p-89f, 0x1.f43114p-14f, 0x1.a159dp-124f, 0x1.724bf6p-22f,
     0x1.d03864p-71f, 0x1.fa43dp-87f, 0.0f, 0x1.ebd822p-92f, 0.0f, 0x1.c93a3ap-51f,
     0.0f, 0.0f, 0x1.974c3p-19f, 0.0f, 0x1.c5e70ep-88f, 0.0f, 0x1.18effcp-101f,
     0x1.1e4964p-40f, 0x1.422618p-126f, 0.0f, 0x1.396b38p-115f, 0x1.1c293ap-84f,
     0x1.93b68cp-20f, 0.0f, 0x1.41f7e4p-107f, 0.0f, 0x1.0d20dep-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.111f3ap-57f, 0x1.ea1f1cp-16f, 0x1.e6637cp-108f, 0x1.c30a42p-32f,
     0x1.d58b62p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be3e44p-3f,
     0.0f, 0x1.c82e26p-21f, 0x1.f06c92p-13f, 0x1.c36c1p-51f, 0.0f, 0.0f,
     0x1.62902cp-8f, 0x1.53631ep-25f, 0x1.6f2334p-52f, 0.0f, 0x1.91daep-96f, 0.0f,
     0.0f, 0.0f, 0x1.ece22cp-124f, 0x1.2cdeb8p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e217ap-15f, 0.0f, 0.0f, 0x1.f21b94p-22f, 0.0f, 0x1.1475dp-52f, 0.0f,
     0x1.8cfe6cp-97f, 0x1.febadep-64f, 0.0f, 0x1.a920c6p-53f, 0x1.dfd0b6p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.78e474p-33f, 0x1.8390dp-1f, 0x1.670478p-124f,
     0x1.2f4b6p-68f, 0.0f, 0.0f, 0x1.593142p-110f, 0.0f, 0x1.372222p-27f, 0.0f,
     0x1.22f4bap-93f, 0x1.20b234p-36f, 0.0f, 0.0f, 0x1.9e48dep-81f, 0.0f,
     0x1.e94766p-7f, 0.0f, 0.0f, 0x1.faec3cp-45f, 0x1.9cb774p-110f, 0x1.a4031cp-58f,
     0x1.af9a6cp-51f, 0.0f, 0.0f, 0x1.6f6588p-75f, 0.0f, 0x1.6e93c8p-103f,
     0x1.63bdb8p-12f, 0.0f, 0x1.4cc332p-99f, 0.0f, 0.0f, 0x1.37f5bap-54f,
     0x1.de0f2cp-62f, 0.0f, 0x1.0601cap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.223cp-11f, 0.0f, 0.0f, 0x1.1aeac6p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.952abcp-89f, 0x1.73e0fep-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b4e5cp-5f, 0x1.47a026p-92f, 0x1.8dd76p-54f, 0.0f, 0.0f, 0x1.4f0adp-124f,
     0.0f, 0.0f, 0x1.2c8412p-69f, 0x1.e17bep-63f, 0.0f, 0.0f, 0.0f, 0x1.f4cdaap-30f,
     0x1.cbf76ep-33f, 0.0f, 0x1.00ada6p-11f, 0x1.9caff6p-116f, 0x1.58b956p-55f, 0.0f,
     0x1.a971d2p-7f, 0.0f, 0.0f, 0x1.3a0952p-48f, 0.0f, 0x1.06f8ecp-73f,
     0x1.73ea76p-42f, 0x1.d7afd2p-77f, 0x1.e6c9ecp-125f, 0.0f, 0x1.f2151p-28f,
     0x1.36421p-50f, 0x1.ac09b2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6a816p-121f,
     0x1.58e2d2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f38e6ap-72f,
     0.0f, 0x1.4ffffap-114f, 0x1.ef6096p-37f, 0.0f, 0x1.235a82p-41f, 0x1.eb492cp-94f,
     0x1.abc3bcp-37f, 0.0f, 0.0f, 0x1.25efcap-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6883cp-124f, 0.0f, 0.0f, 0.0f, 0x1.bcd5f6p-16f, 0.0f, 0x1.4b3d1ep-15f,
     0x1.8a9bf8p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b4d9p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54ce3p-26f, 0.0f, 0.0f, 0x1.8d48dap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e77ff2p-108f, 0x1.6fb12cp-53f, 0.0f, 0x1.310744p-31f, 0.0f, 0x1.4ab4c2p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0d1p-94f, 0.0f, 0.0f, 0x1.618d3p-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b60dap-109f, 0.0f, 0.0f, 0.0f,
     0x1.c38c3p-47f, 0x1.88d73cp-49f, 0x1.513126p-66f, 0x1.55f6aep-58f,
     0x1.705944p-116f, 0x1.54874ep-71f, 0x1.d494p-126f, 0.0f, 0x1.f899aap-57f,
     0x1.855cep-13f, 0.0f, 0x1.67ba5cp-99f, 0x1.4e8db4p-31f, 0.0f, 0.0f,
     0x1.bbad44p-76f, 0.0f, 0x1.3eb5eap-13f, 0x1.0f405p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a5e13ap-12f, 0x1.8ad766p-98f, 0.0f, 0x1.df8a38p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d769ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a691aap-87f,
     0x1.5c55b4p-100f, 0.0f, 0.0f, 0x1.649f4p-32f, 0x1.c16138p-40f, 0x1.415af6p-16f,
     0x1.7c1f28p-57f, 0x1.567a76p-60f, 0.0f, 0x1.ff1818p-48f, 0x1.69e104p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4b1c26p-92f, 0x1.9b8d6cp-78f, 0x1.028ce4p-43f,
     0x1.196bcp-104f, 0x1.ae8652p-102f, 0.0f, 0x1.6b2534p-42f, 0x1.aa4c12p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c502dap-52f, 0x1.eb5aep-109f, 0x1.2d29b6p-51f,
     0x1.a5b7c6p-1f, 0.0f, 0.0f, 0.0f, 0x1.faa43ep-123f, 0.0f, 0x1.27701cp-87f,
     0x1.9e022ep-52f, 0x1.c8671cp-48f, 0x1.21797cp-65f, 0x1.e08bdap-23f, 0.0f, 0.0f,
     0x1.15889ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1045ep-98f, 0.0f,
     0x1.64b44p-122f, 0.0f, 0.0f, 0x1.93cd6p-67f, 0x1.9a4b94p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b015fep-96f, 0.0f, 0x1.76155ep-96f, 0x1.1a7288p-2f, 0.0f, 0.0f,
     0x1.f7f9p-62f, 0x1.273ce2p-15f, 0.0f, 0.0f, 0.0f, 0x1.4b736ep-74f,
     0x1.e02166p-30f, 0.0f, 0x1.3e9b68p-106f, 0.0f, 0.0f, 0x1.2e2bfap-119f,
     0x1.dff28cp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dfdc6p-93f,
     0x1.3e99acp-103f, 0.0f, 0x1.25ee38p-78f, 0.0f, 0x1.81054cp-21f, 0.0f,
     0x1.213dd6p-2f, 0x1.908eb2p-92f, 0x1.a462fap-3f, 0.0f, 0.0f, 0x1.8e16e6p-62f,
     0.0f, 0.0f, 0x1.16ad9ep-104f, 0.0f, 0x1.4009aap-20f, 0.0f, 0.0f, 0x1.3be31ep-73f,
     0x1.919504p-14f, 0.0f, 0.0f, 0.0f, 0x1.3105aap-66f, 0.0f, 0.0f, 0x1.ecc43p-85f,
     0x1.5ed286p-114f, 0x1.c9d164p-112f, 0x1.24f6f4p-80f, 0x1.da27cp-62f,
     0x1.9251bp-53f, 0.0f, 0x1.b1f2ecp-55f, 0.0f, 0.0f, 0.0f, 0x1.591166p-50f,
     0x1.0e7918p-99f, 0x1.fb1932p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62ca92p-100f,
     0.0f, 0x1.e11f1ap-10f, 0.0f, 0x1.9a7ddep-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63a15cp-55f, 0x1.1334c4p-38f, 0x1.a3080ep-111f, 0.0f, 0x1.217d84p-113f,
     0x1.f1e78p-38f, 0x1.6ce4dcp-73f, 0x1.e83c5ep-108f, 0x1.3d7b6cp-45f, 0.0f,
     0x1.aeb42p-25f, 0x1.d4d2f6p-12f, 0x1.91ace6p-47f, 0x1.309facp-20f,
     0x1.440c38p-73f, 0.0f, 0x1.665692p-57f, 0.0f, 0.0f, 0x1.374f48p-92f, 0.0f, 0.0f,
     0x1.85a482p-33f, 0.0f, 0.0f, 0x1.5edf8p-108f, 0.0f, 0.0f, 0x1.06361ap-67f,
     0x1.6386acp-91f, 0.0f, 0x1.a21474p-14f, 0x1.e7395cp-70f, 0x1.12aa14p-81f, 0.0f,
     0x1.60ef34p-62f, 0x1.302256p-102f, 0x1.6aa912p-114f, 0x1.bcb47ap-111f, 0.0f,
     0.0f, 0x1.943e68p-110f, 0.0f, 0.0f, 0.0f, 0x1.fc28bp-9f, 0x1.9d991p-56f,
     0x1.19b98cp-49f, 0x1.37fd62p-77f, 0x1.866876p-121f, 0.0f, 0x1.e7dc9ap-73f, 0.0f,
     0x1.95e8a6p-54f, 0x1.b9e00cp-99f, 0.0f, 0x1.ad4a4p-60f, 0.0f, 0.0f,
     0x1.101c28p-74f, 0.0f, 0x1.f7c73ep-66f, 0.0f, 0x1.7714d4p-39f, 0.0f,
     0x1.a9b0cp-28f, 0.0f, 0x1.977ceap-58f, 0.0f, 0x1.d6dabap-86f, 0x1.f186dep-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2e4dp-44f, 0x1.b607a4p-103f, 0x1.9f760cp-109f,
     0x1.741a64p-14f, 0x1.9e6b08p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b151p-56f,
     0x1.39fcc6p-3f, 0x1.4ef4a8p-118f, 0.0f, 0x1.af117ap-113f, 0.0f, 0x1.4f8658p-73f,
     0.0f, 0.0f, 0x1.2575a4p-59f, 0.0f, 0x1.4c5544p-38f, 0x1.b1db8ap-46f, 0.0f,
     0x1.f96e08p-57f, 0x1.166118p-61f, 0x1.29a8b8p-69f, 0x1.ea00a2p-80f,
     0x1.b935dap-79f, 0.0f, 0x1.6516bep-89f, 0.0f, 0x1.010ea8p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1f6f24p-98f, 0.0f, 0x1.5ac7a2p-108f, 0x1.287276p-124f, 0x1.18c95ep-22f,
     0.0f, 0x1.f5d7ccp-12f, 0.0f, 0x1.7855e8p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb93dap-126f, 0.0f, 0x1.eafa6cp-87f, 0x1.ed4c5cp-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c40bap-34f, 0.0f, 0x1.dc9872p-104f, 0x1.786a94p-49f, 0.0f, 0x1.c6b4fp-28f,
     0.0f, 0.0f, 0x1.4861d2p-31f, 0x1.fbc824p-58f, 0x1.38a8ap-16f, 0x1.c8bfc2p-105f,
     0x1.176e7ap-6f, 0.0f, 0x1.b56b4ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.030886p-2f,
     0.0f, 0.0f, 0.0f, 0x1.7a36f4p-37f, 0.0f, 0x1.413be4p-61f, 0x1.1186d8p-64f,
     0x1.ef901cp-16f, 0.0f, 0x1.bb9a42p-37f, 0x1.2f831ep-21f, 0.0f
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
            tmp1 = Sleef_rintf4_kvx(tmp0);
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
    printf("Sleef_rintf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_rintf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
