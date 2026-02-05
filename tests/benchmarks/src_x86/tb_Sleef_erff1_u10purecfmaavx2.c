/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erff1_u10purecfma.c --function Sleef_erff1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.f17bc8p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d06528p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.492226p-18f, 0x1.693668p-35f, 0.0f, 0.0f, 0.0f, 0x1.6ec6c4p-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.710764p-122f, 0.0f, 0x1.2ffbecp-103f,
     0.0f, 0.0f, 0x1.8be4bcp-28f, 0.0f, 0x1.f8918ap-121f, 0x1.9dae14p-38f, 0.0f, 0.0f,
     0x1.43475p-56f, 0x1.8742fcp-19f, 0.0f, 0.0f, 0.0f, 0x1.c98196p-43f, 0.0f,
     0x1.8d5946p-52f, 0.0f, 0.0f, 0.0f, 0x1.dac6bp-73f, 0.0f, 0.0f, 0x1.ba0e82p-37f,
     0.0f, 0.0f, 0x1.555c02p-66f, 0x1.15e77ep-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05188p-58f, 0.0f, 0x1.0ffc02p-5f, 0x1.60d27ep-13f, 0x1.8e398cp-58f,
     0x1.b37da2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb38e4p-21f, 0.0f, 0.0f,
     0x1.655bf6p-8f, 0x1.c6f7dap-17f, 0x1.e4f694p-113f, 0x1.0307e2p-83f,
     0x1.50d80ap-78f, 0x1.c4869ep-57f, 0x1.32403ep-18f, 0.0f, 0x1.217d64p-14f, 0.0f,
     0.0f, 0.0f, 0x1.79bf4p-124f, 0x1.788c8ep-56f, 0.0f, 0.0f, 0x1.8a4976p-84f,
     0x1.aa204cp-33f, 0x1.3fc18ep-15f, 0.0f, 0.0f, 0x1.607678p-3f, 0x1.6c0a34p-20f,
     0.0f, 0x1.fb485p-101f, 0.0f, 0.0f, 0.0f, 0x1.dc98e4p-38f, 0x1.335ad8p-119f,
     0x1.2628fap-64f, 0.0f, 0x1.efae7p-123f, 0.0f, 0x1.d8f9a8p-28f, 0.0f, 0.0f, 0.0f,
     0x1.c8ae66p-45f, 0.0f, 0.0f, 0x1.4b88e6p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8bddp-8f, 0.0f, 0.0f, 0x1.d53cb8p-73f, 0x1.765524p-116f, 0x1.800baap-126f,
     0.0f, 0.0f, 0x1.3fc49ep-36f, 0x1.b1c788p-47f, 0x1.ff352cp-60f, 0.0f, 0.0f,
     0x1.b52b5p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.908cbep-2f, 0.0f, 0.0f, 0.0f,
     0x1.7af36p-40f, 0.0f, 0x1.6ad39p-93f, 0.0f, 0x1.cb7f9p-10f, 0.0f,
     0x1.1b05eep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21ee2ap-70f, 0.0f,
     0x1.4d596ap-96f, 0x1.5d5398p-98f, 0.0f, 0x1.8ddee8p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44e45p-16f, 0x1.10acb2p-59f, 0.0f, 0.0f, 0.0f, 0x1.8e4a4p-31f, 0.0f,
     0x1.895646p-17f, 0.0f, 0.0f, 0x1.8dea44p-85f, 0.0f, 0x1.bfd5c2p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5956e8p-97f, 0x1.21583ep-3f, 0x1.e44402p-49f, 0x1.6a207ep-69f,
     0x1.d52122p-35f, 0x1.bbdf84p-93f, 0x1.447046p-79f, 0.0f, 0.0f, 0.0f,
     0x1.116bp-26f, 0.0f, 0x1.6a7898p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b7a02p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdfd84p-8f, 0x1.f9394ep-124f, 0x1.8f0a4ep-82f,
     0x1.a13416p-81f, 0x1.1c81d4p-101f, 0.0f, 0.0f, 0x1.614238p-93f, 0x1.1794aap-123f,
     0.0f, 0.0f, 0x1.71942ap-113f, 0x1.606e76p-108f, 0x1.9d1c4ap-89f, 0.0f,
     0x1.1422aap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.670e22p-78f, 0x1.67cd2ep-44f,
     0x1.8d2a14p-1f, 0.0f, 0.0f, 0x1.28e006p-110f, 0x1.a77942p-120f, 0x1.dfe928p-62f,
     0.0f, 0x1.42d27p-13f, 0.0f, 0.0f, 0x1.a404dep-122f, 0.0f, 0x1.4bb7e6p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ece5c4p-103f, 0.0f, 0.0f,
     0x1.2536f6p-86f, 0x1.5ec09ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9c394p-58f, 0x1.23c2aep-119f, 0.0f, 0x1.6ff17ep-78f, 0.0f, 0.0f,
     0x1.2c7df6p-83f, 0.0f, 0.0f, 0.0f, 0x1.4c99acp-12f, 0x1.bbfd44p-7f,
     0x1.d1716p-2f, 0x1.30a2ap-63f, 0.0f, 0.0f, 0.0f, 0x1.bf9646p-33f,
     0x1.2aec44p-11f, 0x1.533346p-96f, 0x1.145542p-41f, 0x1.6b741ep-53f, 0.0f, 0.0f,
     0x1.8f1e2ep-43f, 0x1.e71274p-122f, 0x1.e940cp-16f, 0x1.fa0a34p-96f, 0.0f, 0.0f,
     0x1.aa2d3cp-26f, 0.0f, 0x1.8a604ep-122f, 0x1.7bceccp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2010e4p-59f, 0x1.4c7412p-39f, 0.0f, 0x1.e200fcp-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb782p-116f, 0.0f, 0x1.935c0cp-116f, 0x1.5792aep-97f, 0x1.5393bcp-2f,
     0x1.b7033p-71f, 0.0f, 0x1.8cad68p-64f, 0x1.3af682p-83f, 0x1.81903p-34f,
     0x1.030784p-10f, 0x1.10e35ep-41f, 0x1.03f02ap-94f, 0x1.cf06f4p-123f, 0.0f, 0.0f,
     0.0f, 0x1.5762dep-26f, 0.0f, 0.0f, 0x1.6e8618p-94f, 0.0f, 0.0f, 0x1.60ca1ep-26f,
     0.0f, 0x1.6110d8p-75f, 0x1.dc7b44p-117f, 0x1.eeb042p-96f, 0x1.7f55a2p-23f,
     0x1.818c54p-26f, 0.0f, 0.0f, 0x1.bf7ed4p-13f, 0x1.0a005cp-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d3ca2ap-61f, 0x1.264b78p-3f, 0.0f, 0x1.b720eep-115f, 0x1.bf7d16p-29f,
     0x1.078926p-82f, 0.0f, 0x1.f6662ap-102f, 0x1.b642bcp-17f, 0x1.9a7476p-3f, 0.0f,
     0x1.481808p-25f, 0x1.b45bep-113f, 0x1.e3c9a8p-97f, 0.0f, 0x1.278d24p-125f,
     0x1.5287aap-51f, 0.0f, 0x1.78f3b6p-36f, 0x1.76c74ep-85f, 0x1.ac81f8p-78f,
     0x1.80b5f6p-38f, 0.0f, 0.0f, 0x1.461f7ep-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.924bdcp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f013cep-103f, 0x1.9677dcp-25f,
     0x1.60b68ap-55f, 0x1.a229ap-53f, 0.0f, 0x1.39be2cp-7f, 0x1.9ce702p-38f,
     0x1.5a9fc2p-29f, 0x1.269dc4p-56f, 0x1.460ff4p-43f, 0x1.4b21c4p-92f, 0.0f, 0.0f,
     0x1p0f, 0x1.dffad8p-104f, 0x1.68c73p-31f, 0x1.d596e8p-52f, 0.0f,
     0x1.773206p-103f, 0.0f, 0.0f, 0x1.6fa176p-109f, 0x1.13e51ap-57f, 0.0f, 0.0f,
     0x1.279836p-81f, 0.0f, 0x1.13d98cp-61f, 0.0f, 0x1.f731ap-22f, 0x1.abe2ccp-49f,
     0x1.33c9bcp-48f, 0x1.3112acp-51f, 0.0f, 0x1.641e0cp-81f, 0x1.cc1466p-64f,
     0x1.38909ep-100f, 0x1.830352p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dbd51cp-15f, 0x1.8844e4p-56f, 0.0f, 0x1.5cf558p-98f, 0.0f, 0x1.43145cp-74f,
     0x1.2f02d2p-52f, 0x1.733ab6p-107f, 0x1.2396ccp-110f, 0x1.73c812p-67f, 0.0f,
     0x1.ad9934p-21f, 0x1.342222p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.486c0ep-75f, 0.0f,
     0.0f, 0x1.ec1144p-80f, 0.0f, 0.0f, 0.0f, 0x1.c6bb98p-107f, 0.0f, 0.0f, 0.0f,
     0x1.a22d8cp-23f, 0.0f, 0.0f, 0x1.a70cd8p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0713ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f6662p-91f, 0x1.189e1cp-10f, 0.0f,
     0.0f, 0x1.c3dacp-107f, 0x1.2e3b48p-65f, 0.0f, 0x1.7f38dap-37f, 0x1.df926ap-98f,
     0.0f, 0x1.d4daeep-102f, 0.0f, 0x1.78fdf8p-63f, 0.0f, 0.0f, 0x1.085696p-74f, 0.0f,
     0x1.05bb12p-125f, 0x1.2c7132p-108f, 0x1.6158fap-103f, 0.0f, 0.0f,
     0x1.e38554p-18f, 0.0f, 0.0f, 0.0f, 0x1.452594p-70f, 0x1.61a94ep-17f,
     0x1.09dba8p-16f, 0x1.1f18e6p-47f, 0x1.30d586p-92f, 0.0f, 0x1.c3634ep-59f,
     0x1.7de24cp-14f, 0.0f, 0x1.6fcafcp-107f, 0x1.a3f1ecp-72f, 0x1.42940ap-28f,
     0x1.7b723p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b0418p-5f, 0.0f, 0.0f,
     0x1.947a7p-29f, 0.0f, 0.0f, 0x1.2ec6d2p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31cf34p-26f, 0.0f, 0x1.8efc1cp-77f, 0x1.396336p-115f, 0.0f, 0x1.3089dep-105f,
     0.0f, 0.0f, 0x1.e359d4p-110f, 0.0f, 0.0f, 0x1.befdcep-3f, 0x1.71f55ep-80f, 0.0f,
     0x1.a58f82p-41f, 0.0f, 0.0f, 0x1.1adc3ap-58f, 0.0f, 0.0f, 0.0f, 0x1.6b982ep-71f,
     0.0f, 0.0f, 0x1.767d5ap-64f, 0.0f, 0.0f, 0.0f, 0x1.41a0e2p-73f, 0.0f,
     0x1.c9319ap-18f, 0.0f, 0.0f, 0x1.400efp-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7b9c8p-24f, 0x1.006a0ap-68f, 0.0f, 0x1.95e754p-4f, 0.0f, 0.0f,
     0x1.3f3d36p-106f, 0.0f, 0x1.8b5f3ap-26f, 0x1.125792p-123f, 0x1.7bafe6p-99f, 0.0f,
     0x1.30e804p-79f, 0.0f, 0.0f, 0x1.79c44cp-54f, 0.0f, 0.0f, 0x1.b8ca16p-9f, 0.0f,
     0x1.9ae11ap-23f, 0x1.f78254p-38f, 0x1.473ba4p-34f, 0.0f, 0x1.abaf46p-79f, 0.0f,
     0x1.7d09d6p-111f, 0.0f, 0x1.379df8p-57f, 0x1.25b9e6p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.02390ap-124f, 0.0f, 0x1.fb0946p-55f, 0.0f, 0.0f,
     0x1.bd6fe2p-47f, 0x1.7124b6p-95f, 0x1.669618p-105f, 0.0f, 0x1.b7d8dp-83f,
     0x1.862a34p-82f, 0x1.e398eep-49f, 0x1.e0467p-101f, 0x1.97ea08p-31f,
     0x1.868a8cp-121f, 0x1.87357ep-83f, 0.0f, 0x1.dd4c88p-46f, 0x1.ea2e3ep-1f, 0x1p0f,
     0x1.c06fc6p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f27a4cp-116f,
     0x1.a8d34ep-74f, 0.0f, 0x1.2a263p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7eaf28p-10f,
     0x1.ab0454p-107f, 0.0f, 0.0f, 0x1.ec6486p-47f, 0.0f, 0.0f, 0x1.43aab8p-3f,
     0x1.20415ep-23f, 0.0f, 0x1.850e46p-14f, 0.0f, 0.0f, 0x1.86794cp-116f,
     0x1.f2a07ep-51f, 0.0f, 0.0f, 0x1.27ae44p-82f, 0.0f, 0x1.847cfep-79f,
     0x1.f3bbbap-96f, 0x1.5736b2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b0a5d2p-69f, 0.0f, 0.0f, 0x1.935cd6p-114f, 0.0f, 0x1.29bf62p-117f,
     0x1.45030ep-93f, 0x1.52f62ep-6f, 0.0f, 0.0f, 0x1.3b3114p-32f, 0.0f, 0.0f,
     0x1.6b5972p-123f, 0.0f, 0.0f, 0.0f, 0x1.fc8a1ap-46f, 0x1.63dd22p-26f,
     0x1.1dff4p-65f, 0x1.69743ep-118f, 0.0f, 0x1.6ffe8p-123f, 0.0f, 0.0f,
     0x1.e076p-30f, 0x1.e3e4c4p-67f, 0.0f, 0x1.4b1324p-24f, 0x1.c9e23ep-17f, 0.0f,
     0.0f, 0x1.2afc48p-85f, 0x1.a8d28cp-28f, 0x1.2acc1p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f1f2aep-57f, 0x1.d44a52p-101f, 0x1.e9188ap-19f, 0.0f, 0x1.d462dcp-72f,
     0.0f, 0x1.d67a5p-58f, 0x1.af5d0ap-85f, 0.0f, 0x1.2aafbep-119f, 0.0f,
     0x1.3d8bf8p-114f, 0.0f, 0.0f, 0.0f, 0x1.4d8508p-63f, 0.0f, 0x1.adaed4p-110f,
     0.0f, 0x1.8feep-4f, 0.0f, 0.0f, 0x1.ad9d46p-63f, 0x1.99a062p-50f,
     0x1.c5a432p-49f, 0x1.684322p-104f, 0x1.773a44p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef6b96p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e3fdep-115f, 0.0f,
     0.0f, 0x1.2d557p-38f, 0x1.a46428p-31f, 0.0f, 0x1.5a9f3cp-44f, 0x1.bf3e58p-77f,
     0x1.aadddep-80f, 0.0f, 0x1.3adfd2p-47f, 0.0f, 0.0f, 0x1.651ebcp-92f, 0.0f, 0.0f,
     0.0f, 0x1.e1c602p-43f, 0.0f, 0.0f, 0x1.b8417cp-12f, 0x1.b38046p-99f,
     0x1.e8d9eap-11f, 0.0f, 0x1.6278e8p-104f, 0.0f, 0.0f, 0x1.475ffep-47f,
     0x1.d5318p-17f, 0.0f, 0x1.a596d6p-25f, 0.0f, 0.0f, 0.0f, 0x1.dcdf2cp-126f,
     0x1.09a9e2p-81f, 0x1.fdc242p-113f, 0.0f, 0.0f, 0x1.929d3ap-59f, 0.0f, 0.0f, 0.0f,
     0x1.232b6p-62f, 0.0f, 0x1.1883e6p-65f, 0.0f, 0x1.35c928p-125f, 0.0f, 0.0f, 0.0f,
     0x1.f1039p-86f, 0.0f, 0x1.4424c4p-115f, 0x1.c36bd8p-13f, 0x1.6f42d2p-117f,
     0x1.dde78p-96f, 0.0f, 0x1.8c087cp-21f, 0x1.20798ep-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f5ebep-78f, 0.0f, 0.0f, 0x1.a24612p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fb43bep-102f, 0.0f, 0.0f, 0x1.3273cep-122f, 0x1.6a711p-37f,
     0x1.6244c6p-91f, 0.0f, 0x1.6d3068p-88f, 0.0f, 0x1.8f79a2p-100f, 0.0f, 0.0f,
     0x1.136d4p-122f, 0.0f, 0x1.376ebcp-76f, 0.0f, 0x1.49dc74p-119f, 0x1.83b176p-106f,
     0x1.108f04p-37f, 0x1.44b744p-9f, 0.0f, 0.0f, 0x1.704a28p-60f, 0.0f,
     0x1.b4b3a4p-48f, 0x1.4b0df4p-39f, 0.0f, 0x1.f8f9fap-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.baefap-104f, 0.0f, 0x1.6d273ep-59f, 0x1.6dd042p-14f, 0x1.829df6p-29f,
     0x1.e72638p-18f, 0x1.95de28p-70f, 0.0f, 0x1.6777aap-50f, 0.0f, 0.0f, 0.0f,
     0x1.a653fep-29f, 0.0f, 0x1.64cc7cp-84f, 0x1.f25724p-51f, 0x1.bc70bcp-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.320e8cp-126f, 0.0f, 0.0f, 0.0f, 0x1.ec1f8cp-116f,
     0x1.993676p-103f, 0x1.ba8328p-103f, 0x1.25f0b4p-26f, 0.0f, 0.0f, 0x1.eac026p-51f,
     0.0f, 0x1.df6406p-19f, 0x1.3b6ca2p-77f, 0x1.6efd12p-5f, 0.0f, 0.0f,
     0x1.38d92cp-2f, 0x1.8fb89cp-83f, 0.0f, 0x1.2acdacp-53f, 0.0f, 0.0f,
     0x1.4f6caap-50f, 0x1.e58f88p-1f, 0x1.bb8fdp-45f, 0x1.35166p-38f, 0.0f,
     0x1.17b0f2p-45f, 0.0f, 0x1.20c3ccp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.432cfap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.764ecap-52f, 0x1.e990aap-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c4394p-75f, 0x1.10d33cp-76f, 0x1.79a4b6p-27f,
     0x1.85709ap-38f, 0.0f, 0x1.5462bp-125f, 0x1.ca7644p-112f, 0.0f, 0.0f,
     0x1.58999cp-100f, 0x1.4f5a3cp-86f, 0.0f, 0.0f, 0x1.84fa3cp-28f, 0x1.62775cp-41f,
     0x1.1f4932p-12f, 0x1.f429a4p-122f, 0x1.844ac2p-66f, 0.0f, 0x1.2f2546p-59f, 0.0f,
     0x1.b9b88ap-90f, 0.0f, 0x1.a04622p-122f, 0.0f, 0x1.fb7268p-45f, 0x1.9b3bd8p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.048ee2p-52f, 0.0f, 0x1.740236p-126f,
     0x1.4ecfd2p-109f, 0.0f, 0.0f, 0x1.fe41ap-67f, 0.0f, 0x1.93996ep-108f,
     0x1.51ddfep-96f, 0x1.6a548ep-23f, 0x1.227544p-69f, 0x1.b8a5e2p-60f,
     0x1.413038p-7f, 0.0f, 0x1.9d0328p-44f, 0.0f, 0.0f, 0x1.e29dbap-47f,
     0x1.10c18ep-28f, 0x1.4cb44cp-23f, 0.0f, 0x1.040dp-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15219p-96f, 0.0f, 0.0f, 0.0f, 0x1.18d58cp-75f, 0.0f, 0x1.aaa80cp-2f,
     0x1.60559ep-61f, 0x1.c1b6aep-27f, 0x1.663a92p-69f, 0x1.59bf04p-35f,
     0x1.38c0a6p-75f, 0x1.a1cb74p-76f, 0x1.9ccadap-105f, 0.0f, 0x1.5c268cp-13f,
     0x1.870b98p-7f, 0.0f, 0x1.c34f4ap-27f, 0x1.03b23cp-98f, 0x1.eedb6ap-100f, 0.0f,
     0x1.b5b9d4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d46a7p-110f, 0x1.3bc2acp-21f, 0.0f,
     0x1.796666p-108f, 0x1.eec7ep-81f, 0.0f, 0x1.29c422p-29f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_erff1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_erff1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erff1_u10purecfma bench acc %a\n", global_bench_acc);
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
