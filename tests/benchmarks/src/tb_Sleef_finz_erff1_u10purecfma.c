/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erff1_u10purecfma.c --function \
 *     Sleef_finz_erff1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0x1.ea0f34p-74f, 0.0f, 0x1.ce06d6p-94f, 0x1.236e54p-83f, 0.0f, 0x1.d518dcp-45f,
     0x1.d43f64p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.4f5538p-40f, 0x1.703804p-89f, 0x1.6434fp-63f, 0x1.c4b6cp-55f,
     0x1.fb3944p-116f, 0.0f, 0x1.9b9696p-114f, 0.0f, 0.0f, 0x1.38aec4p-92f, 0.0f,
     0.0f, 0x1.a6b5c4p-46f, 0.0f, 0x1.bb7978p-7f, 0x1.427c14p-78f, 0.0f,
     0x1.a9b3cep-98f, 0.0f, 0.0f, 0x1.981164p-22f, 0x1.effe8ep-4f, 0x1.935486p-13f,
     0x1.d268f2p-20f, 0x1.65a56cp-28f, 0.0f, 0.0f, 0x1.a46d96p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9746f2p-34f, 0.0f, 0x1.949202p-75f, 0.0f, 0.0f, 0x1.ec9392p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f5d3cp-28f, 0.0f, 0x1.aca50cp-81f, 0.0f, 0.0f,
     0x1.b9370ap-32f, 0x1.c257b6p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8535bep-70f, 0.0f,
     0x1.bb4c86p-105f, 0x1.c7421p-51f, 0.0f, 0.0f, 0.0f, 0x1.29cf8cp-54f,
     0x1.ed0fd8p-113f, 0x1.8cc7d4p-20f, 0x1.b15c5cp-8f, 0x1.657982p-64f,
     0x1.270028p-19f, 0.0f, 0x1.1f1b8p-29f, 0x1.cc501ap-19f, 0x1.c3635ep-20f,
     0x1.b01f82p-91f, 0.0f, 0.0f, 0x1.2506b4p-104f, 0x1.1433c4p-88f, 0x1.bf1768p-116f,
     0x1.8aee94p-81f, 0x1.62a0d4p-42f, 0.0f, 0.0f, 0x1.d64c28p-71f, 0x1.43e71cp-85f,
     0x1.aeaef6p-17f, 0x1.6f55b8p-4f, 0x1.a30f14p-23f, 0.0f, 0.0f, 0x1.28bd88p-23f,
     0.0f, 0.0f, 0x1.78d252p-119f, 0.0f, 0x1.eb9494p-22f, 0x1.c938a2p-63f, 0.0f,
     0x1.897b7cp-9f, 0.0f, 0.0f, 0x1.a7b184p-40f, 0.0f, 0.0f, 0x1.aba55ep-10f, 0.0f,
     0x1.7ca6cep-54f, 0x1.f0689p-26f, 0x1.9d0f0ap-61f, 0.0f, 0x1.491b1cp-42f, 0.0f,
     0x1.285a9ep-27f, 0.0f, 0x1.1320ccp-81f, 0x1.c6ab76p-58f, 0x1.173a8ap-88f,
     0x1.7150d6p-49f, 0x1.d6a1c4p-115f, 0x1.ca0a9ep-28f, 0x1.0e802ep-75f, 0.0f,
     0x1.f5eadcp-102f, 0.0f, 0.0f, 0x1.895cf2p-22f, 0.0f, 0x1.112b26p-24f,
     0x1.15ef7cp-1f, 0x1.b4cf1ap-36f, 0.0f, 0x1.f6ad04p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdbb86p-28f, 0x1.7c0472p-46f, 0x1.e9932ep-5f, 0.0f, 0x1.37b126p-114f,
     0x1.2135ecp-3f, 0x1.1e757p-6f, 0x1.10e52p-110f, 0.0f, 0.0f, 0.0f,
     0x1.123228p-79f, 0x1.98ecdcp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83cc08p-71f, 0.0f,
     0.0f, 0x1.7b5bc8p-88f, 0.0f, 0.0f, 0x1.1aecfep-84f, 0x1.5a4f98p-52f, 0.0f,
     0x1.9b2a74p-64f, 0x1.0950dep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73c746p-86f,
     0.0f, 0x1.bf74bep-88f, 0.0f, 0.0f, 0x1.b528f4p-8f, 0.0f, 0x1.54382cp-17f, 0.0f,
     0.0f, 0x1.f658c2p-111f, 0.0f, 0.0f, 0.0f, 0x1.fbc234p-46f, 0x1.52581cp-79f,
     0x1.06932ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d842eep-1f, 0.0f, 0.0f,
     0x1.f42152p-80f, 0.0f, 0x1.6815e2p-111f, 0x1.aeb686p-68f, 0x1.7398a8p-41f, 0.0f,
     0x1.c94f4ep-83f, 0.0f, 0x1.bfd5cap-61f, 0.0f, 0x1.e86ee2p-39f, 0.0f, 0.0f,
     0x1.e32b9cp-10f, 0.0f, 0.0f, 0x1.630ea8p-84f, 0.0f, 0.0f, 0x1.2c561p-10f, 0.0f,
     0x1.bc9838p-69f, 0x1.e1dc44p-5f, 0x1.6a28fcp-56f, 0.0f, 0.0f, 0.0f,
     0x1.1fb25ep-92f, 0.0f, 0x1.0bdf4ep-4f, 0.0f, 0x1.af33e4p-57f, 0x1.a393dep-93f,
     0x1.5f0efap-27f, 0x1.6004eep-50f, 0x1.c82a46p-89f, 0x1.064e74p-85f,
     0x1.dc5628p-2f, 0.0f, 0.0f, 0x1.ee7d46p-6f, 0x1.8b0dcep-38f, 0.0f,
     0x1.8c9c3ap-91f, 0.0f, 0x1.189e7ap-101f, 0.0f, 0x1.17e614p-121f, 0.0f,
     0x1.8efbeap-77f, 0.0f, 0x1.450eecp-30f, 0.0f, 0x1.0d3c6ep-28f, 0x1.86450ep-112f,
     0x1.6181eep-66f, 0.0f, 0x1.6602c6p-123f, 0x1.11cc8ep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08a954p-68f, 0x1.4ac582p-124f, 0x1.ef617ep-98f, 0x1.ffb7e6p-92f, 0.0f,
     0x1.bb5e7ap-55f, 0x1.2c7aeep-63f, 0.0f, 0x1.a8c714p-63f, 0.0f, 0x1.c725cap-87f,
     0.0f, 0x1.4e4b8ep-122f, 0x1.56db26p-59f, 0x1.af5c54p-34f, 0.0f, 0x1.b3701cp-40f,
     0x1.03cep-37f, 0.0f, 0.0f, 0.0f, 0x1.7b0338p-47f, 0.0f, 0.0f, 0x1.3e4da6p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3bc7ap-25f, 0.0f, 0x1.5feec8p-104f, 0.0f,
     0x1.40d90cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef51fcp-59f, 0.0f, 0x1.926606p-90f,
     0.0f, 0x1.5e48ecp-94f, 0.0f, 0x1.08ea8ep-50f, 0x1.443868p-1f, 0x1.d3b5e2p-92f,
     0x1.4fd5fp-120f, 0.0f, 0.0f, 0.0f, 0x1.8b448p-45f, 0x1.98ee14p-41f,
     0x1.b9fc74p-4f, 0x1.4f85fcp-112f, 0x1.7152bcp-85f, 0x1.32a2d2p-100f,
     0x1.670276p-115f, 0x1.d06dcp-109f, 0x1.3fee56p-99f, 0.0f, 0x1.dbff54p-96f, 0.0f,
     0.0f, 0x1.36bd76p-118f, 0.0f, 0.0f, 0x1.f407cep-59f, 0x1.f18122p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4ad3b6p-91f, 0x1.7a7488p-3f, 0x1.14f544p-52f, 0.0f, 0.0f,
     0x1.e70aap-38f, 0.0f, 0x1.34909p-103f, 0x1.45075ap-5f, 0x1.20ade6p-1f, 0.0f,
     0.0f, 0x1.1cf518p-75f, 0x1.f4cc7cp-52f, 0x1.34fdeep-24f, 0x1.c02148p-126f, 0.0f,
     0x1.c624d6p-2f, 0.0f, 0.0f, 0x1.dfd64cp-126f, 0x1.58ce84p-63f, 0x1.f94f38p-93f,
     0.0f, 0x1.a5502cp-36f, 0.0f, 0x1.b8fde6p-28f, 0x1p0f, 0.0f, 0x1.9b5ab6p-74f,
     0.0f, 0x1.8614d8p-7f, 0x1.30f39ap-94f, 0x1.0ff852p-2f, 0x1.f77942p-85f, 0.0f,
     0x1.7285dcp-18f, 0x1.619398p-120f, 0x1.5efd1ap-122f, 0x1.d6e596p-63f, 0.0f,
     0x1.80169cp-89f, 0x1.bdb8f8p-31f, 0x1.79a838p-2f, 0.0f, 0.0f, 0.0f,
     0x1.b1d848p-32f, 0x1.5d544ep-14f, 0x1.ccf5bp-104f, 0x1.3b34dep-34f,
     0x1.00bff2p-38f, 0x1.59c08p-9f, 0.0f, 0.0f, 0x1.0fb75cp-50f, 0.0f,
     0x1.43f3f2p-55f, 0x1.56b04p-97f, 0x1.b77a8ap-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c71p-123f, 0x1.a840dep-9f, 0.0f, 0x1.bee63p-33f, 0x1.7808a4p-122f, 0.0f,
     0x1.9a73bap-5f, 0x1.1358dap-113f, 0x1.a02946p-73f, 0x1.4ba91cp-57f,
     0x1.d5b522p-106f, 0x1.73f71cp-3f, 0.0f, 0x1.06131cp-63f, 0x1.3dba74p-8f, 0.0f,
     0x1.dbe734p-93f, 0.0f, 0x1.9a2958p-101f, 0.0f, 0.0f, 0x1.f8ae12p-72f, 0.0f, 0.0f,
     0.0f, 0x1.374032p-51f, 0.0f, 0.0f, 0.0f, 0x1.688bf8p-109f, 0.0f, 0x1.601bfp-39f,
     0x1.2f52b2p-94f, 0x1.84d9a8p-92f, 0x1.25ce2ep-13f, 0.0f, 0x1.987d76p-115f, 0.0f,
     0.0f, 0x1.75079ap-45f, 0x1.3109fp-111f, 0.0f, 0.0f, 0x1.93e34cp-48f, 0.0f,
     0x1.9f2e46p-57f, 0.0f, 0.0f, 0x1p0f, 0x1.b80756p-111f, 0x1.33479cp-20f,
     0x1.43719p-18f, 0.0f, 0.0f, 0x1.91fd2ep-22f, 0.0f, 0x1.aaffaep-54f,
     0x1.7b0ddap-7f, 0.0f, 0x1.ff28dp-37f, 0.0f, 0x1.8e217cp-120f, 0x1.6148eep-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1f2c6p-73f, 0x1.9d9e3ap-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9127cp-82f, 0x1.fe5a4cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d39d2ep-75f,
     0.0f, 0x1.46d488p-114f, 0.0f, 0.0f, 0x1.e5a49p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b0f8ap-21f, 0.0f, 0x1.e9d78ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e5536p-80f, 0x1.e4bbc2p-93f, 0x1.e1f3bap-78f, 0x1.d0889p-125f, 0.0f,
     0x1.2c3214p-65f, 0x1.35816ep-12f, 0x1.74329cp-42f, 0x1.e7da6cp-47f, 0.0f,
     0x1.8dc126p-93f, 0x1.ef224cp-69f, 0x1.74e736p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5c854p-32f, 0x1.ded084p-27f, 0x1.3b5c06p-118f, 0x1.c45764p-42f,
     0x1.524948p-11f, 0.0f, 0x1.a84c7ep-79f, 0x1.1284ap-33f, 0x1.95afdcp-88f,
     0x1.29baf4p-72f, 0x1.da741cp-55f, 0x1.756a5ep-43f, 0x1.3dc7a2p-57f,
     0x1.a5eeccp-46f, 0.0f, 0x1.5ccc1cp-7f, 0x1.b121ep-16f, 0.0f, 0x1.8a90c4p-57f,
     0.0f, 0x1.af3cb4p-104f, 0.0f, 0.0f, 0x1.fd6a6ep-118f, 0x1.32ff06p-63f,
     0x1.068756p-122f, 0x1.cbf328p-8f, 0x1.099c5ep-44f, 0x1.680998p-34f, 0.0f,
     0x1.11c3b2p-71f, 0x1.1b43dcp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.b693ap-62f, 0x1.90baaep-42f, 0.0f, 0x1.2a4e36p-101f, 0x1.4d1512p-16f,
     0x1.a08e02p-21f, 0.0f, 0.0f, 0x1.6c8e18p-72f, 0x1.40030cp-125f, 0x1.b6df66p-47f,
     0x1.7a2b8ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d59552p-72f, 0x1.6536f6p-97f,
     0x1.4dcefap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5eddc8p-98f, 0.0f,
     0x1.a63088p-114f, 0.0f, 0x1.63047p-67f, 0.0f, 0x1.67b0f2p-58f, 0.0f,
     0x1.1c5268p-6f, 0x1.f6709p-99f, 0x1.8ca19ep-77f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0aaaep-108f, 0x1.7d94aap-30f, 0x1.f8f2p-103f,
     0x1.0c5434p-92f, 0.0f, 0x1.0ac314p-96f, 0.0f, 0x1.41e316p-24f, 0.0f, 0.0f,
     0x1.bd4788p-10f, 0.0f, 0x1.b7b528p-23f, 0x1.58af2cp-98f, 0x1.62537p-88f,
     0x1.dba388p-70f, 0x1.30b3ccp-52f, 0x1.50a826p-64f, 0x1p0f, 0x1.b15feep-79f, 0.0f,
     0x1.ed1926p-115f, 0x1.b351d8p-5f, 0x1.e6627ap-69f, 0x1.ce8c9ep-26f, 0.0f,
     0x1.0bccaep-55f, 0x1.95c9d4p-19f, 0x1.48ab42p-23f, 0.0f, 0x1.0e7c5p-80f, 0.0f,
     0.0f, 0x1.98240cp-25f, 0.0f, 0.0f, 0x1.0825c4p-43f, 0.0f, 0x1.240288p-21f, 0.0f,
     0x1.26f78cp-15f, 0.0f, 0x1.a3937p-8f, 0.0f, 0x1.ca1db6p-46f, 0x1.16f594p-87f,
     0x1.77dde4p-44f, 0x1.4a8594p-62f, 0.0f, 0x1.fcdbap-78f, 0x1.48a7aap-109f,
     0x1.02a608p-86f, 0.0f, 0x1.5e564ap-97f, 0.0f, 0x1.848516p-105f, 0.0f,
     0x1.62fadcp-44f, 0.0f, 0.0f, 0.0f, 0x1.2e6b72p-38f, 0x1.7e9236p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f48e2cp-64f, 0x1.b5fbcp-77f, 0.0f, 0.0f,
     0x1.5e09e6p-58f, 0x1.a0fd9ap-113f, 0x1.c4b688p-70f, 0.0f, 0x1.5420dap-91f, 0.0f,
     0x1.42b776p-57f, 0x1.0fa322p-12f, 0x1.32f11cp-125f, 0.0f, 0x1.f9c97ap-23f, 0.0f,
     0x1.c3c5bap-27f, 0.0f, 0.0f, 0x1.b4f112p-31f, 0.0f, 0x1.fcc19p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.29623ep-39f, 0.0f, 0x1.7b7b48p-121f, 0.0f, 0.0f, 0.0f,
     0x1.0b0e1cp-104f, 0x1.5df4bep-61f, 0.0f, 0x1.b9a108p-118f, 0x1.5a8b56p-25f,
     0x1.d1cffep-65f, 0.0f, 0.0f, 0.0f, 0x1.55dc3ep-113f, 0x1.4e813cp-101f,
     0x1.8424a2p-108f, 0x1.af6d42p-2f, 0x1.da72c8p-11f, 0.0f, 0x1.9b0e3ep-71f, 0.0f,
     0.0f, 0.0f, 0x1.db9eccp-70f, 0x1p0f, 0.0f, 0x1.163676p-54f, 0.0f, 0x1.c10612p-1f,
     0x1.78147ap-11f, 0x1.1b170ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d8c9p-120f,
     0x1.764a9cp-95f, 0x1.e71f78p-106f, 0.0f, 0.0f, 0.0f, 0x1.544456p-76f, 0.0f,
     0x1.cfb482p-105f, 0x1.4dae68p-112f, 0.0f, 0x1.ea332ep-93f, 0.0f, 0.0f, 0.0f,
     0x1.bc440ap-36f, 0.0f, 0x1.8e143ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f792d2p-12f,
     0x1.06a3f6p-105f, 0.0f, 0.0f, 0.0f, 0x1.5f1916p-84f, 0x1.281bccp-22f, 0.0f, 0.0f,
     0.0f, 0x1.0b001ap-112f, 0.0f, 0x1.e05fdap-28f, 0x1.1093f4p-29f, 0.0f, 0.0f,
     0x1.ed2d1ap-24f, 0.0f, 0.0f, 0.0f, 0x1.f674dap-101f, 0x1.f3348ep-78f, 0.0f, 0.0f,
     0x1.0a9544p-123f, 0.0f, 0x1.5ebad2p-35f, 0.0f, 0x1.6fdf54p-90f, 0x1.16b8f6p-120f,
     0x1.6c69b6p-126f, 0.0f, 0x1.1772aap-121f, 0x1.aba886p-60f, 0.0f, 0.0f, 0.0f,
     0x1.956fc8p-49f, 0x1.16beb4p-3f, 0.0f, 0x1.861c7ap-72f, 0x1.0c097ep-40f,
     0x1.61b478p-7f, 0x1.7b459ep-64f, 0x1.4a5a62p-27f, 0.0f, 0x1.0892dcp-99f, 0.0f,
     0x1.ba792ep-22f, 0x1.c3518p-22f, 0x1.cec694p-30f, 0.0f, 0x1.c62e92p-1f, 0.0f,
     0x1.2d0bfap-101f, 0x1.917562p-2f, 0x1.d2c364p-64f, 0x1.57656cp-50f,
     0x1.2e7dbap-19f, 0x1.890914p-47f, 0x1.4e3c1p-5f, 0x1.9ffc3ap-111f, 0.0f,
     0x1.e1c9d8p-68f, 0.0f, 0.0f, 0x1.c3dd5cp-121f, 0x1.9cff52p-90f, 0.0f,
     0x1.e0f948p-116f, 0x1.21b03ap-107f, 0x1.3aaf4ep-80f, 0x1.163994p-30f,
     0x1.984ac4p-100f, 0x1.5da0e6p-103f, 0x1.4cf8d2p-64f, 0x1.fa108cp-124f, 0.0f,
     0.0f, 0x1.f53998p-107f, 0.0f, 0x1.07ad1cp-117f, 0x1.a7a9bap-105f, 0x1.dc4694p-4f,
     0x1.8d3534p-96f, 0x1.bcd81p-110f, 0x1.02291ap-13f, 0x1.dfc83cp-43f,
     0x1.b1970ep-89f, 0.0f, 0x1.dd2472p-32f, 0x1.b6373p-74f, 0x1.752e3ep-122f, 0.0f,
     0x1.921506p-8f, 0x1.6f5322p-59f, 0x1.8b321ep-98f, 0x1.de5d9cp-22f,
     0x1.5d8a12p-90f, 0.0f, 0x1.2c389cp-120f, 0.0f, 0x1p0f, 0x1.488d74p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f88d32p-67f, 0x1.4cc526p-92f, 0x1.fed72ep-54f,
     0x1.5082bp-74f, 0x1.88d6aap-112f, 0.0f, 0x1.31347ap-20f, 0x1.72c8dep-48f, 0.0f,
     0.0f, 0x1.18036p-47f, 0x1.eee696p-21f, 0x1.fe683p-58f, 0.0f, 0x1.f5a7e2p-7f,
     0.0f, 0x1.90f2aap-120f, 0.0f, 0x1.278fdcp-96f, 0x1.886678p-41f, 0x1.bca866p-93f,
     0x1.7ea816p-71f, 0.0f, 0x1.320e7ep-1f, 0x1.e8c3c6p-88f, 0x1.56742cp-95f,
     0x1.b68b52p-99f, 0.0f, 0x1.09b02ap-46f, 0x1.436a7p-119f, 0.0f, 0x1.f228f2p-79f,
     0.0f, 0.0f, 0.0f, 0x1.7d844p-89f, 0.0f, 0.0f, 0.0f, 0x1.0dc2c4p-98f,
     0x1.4f361p-36f, 0x1.4d82c4p-111f, 0.0f, 0x1.4bf564p-7f, 0.0f, 0.0f,
     0x1.75c194p-25f, 0x1.8685dap-38f, 0x1.ea1724p-108f, 0.0f, 0x1.8a53a2p-75f,
     0x1.5c8f1ep-42f, 0x1.977f98p-100f, 0x1.21996ap-3f, 0x1.4e1c7ap-106f, 0.0f,
     0x1.4c6938p-101f, 0.0f, 0x1.1e9c6cp-80f, 0x1.2979p-111f, 0x1.3115d4p-114f, 0.0f,
     0.0f, 0x1.6e578ap-44f, 0.0f, 0.0f, 0.0f, 0x1.b71f8cp-82f, 0x1.bfed9ap-37f,
     0x1.fbd954p-95f, 0.0f, 0.0f, 0x1.effeb2p-53f, 0.0f, 0x1.42aaaap-74f, 0.0f,
     0x1.bc429ap-115f, 0.0f, 0x1p0f, 0.0f, 0x1.fe49p-110f, 0.0f, 0.0f,
     0x1.905022p-53f, 0x1.2b3456p-13f, 0x1.899d3ap-83f, 0.0f, 0.0f, 0.0f,
     0x1.7e427cp-114f, 0x1.bbe806p-99f, 0.0f, 0x1.ca251ep-108f, 0.0f, 0x1.fe1b56p-15f,
     0x1.459624p-28f, 0x1.724fd4p-38f, 0x1.036188p-57f, 0x1.774efp-10f, 0.0f,
     0x1.789c68p-12f, 0.0f, 0x1.52e552p-15f, 0.0f, 0.0f, 0.0f, 0x1.8a6eaap-2f, 0.0f,
     0x1.0cfd98p-76f, 0x1.b26a42p-67f, 0x1.a83608p-84f, 0x1.c00cfcp-88f, 0.0f,
     0x1.b92736p-27f, 0x1.e1ab5ep-106f, 0.0f, 0x1.412f42p-32f, 0x1.e7cabap-78f,
     0x1.b3c1cap-86f, 0.0f, 0x1.b3c9e8p-110f, 0x1.b01bb6p-2f, 0.0f, 0.0f,
     0x1.79fc96p-39f, 0x1.434918p-10f, 0x1.8b7ea8p-98f, 0x1.026328p-123f, 0.0f, 0.0f,
     0x1.60093cp-40f
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
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_erff1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_erff1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erff1_u10purecfma bench acc %a\n", global_bench_acc);
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
