/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanf4_u35kvx.c --function Sleef_atanf4_u35kvx \
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
     0.0f, 0x1.2518f4p-99f, 0x1.413d08p-34f, 0x1.b2b578p-82f, 0x1.4b2684p-80f, 0.0f,
     0.0f, 0x1.77bafp-119f, 0x1.1d218p-44f, 0.0f, 0.0f, 0.0f, 0x1.40944p-78f, 0.0f,
     0x1.bedd72p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b943b4p-22f, 0x1.522ccap-55f, 0.0f,
     0x1.81b2d4p-55f, 0x1.6c5ac8p-57f, 0x1.93089ep-60f, 0x1.fbfce8p-51f, 0.0f,
     0x1.d4ba92p-38f, 0.0f, 0x1.0988aap-93f, 0.0f, 0x1.181ad6p-74f, 0.0f,
     0x1.41fce8p-17f, 0x1.df70bp-14f, 0.0f, 0.0f, 0x1.b565ep-32f, 0.0f,
     0x1.73415ep-100f, 0x1.f1a46ep-108f, 0.0f, 0.0f, 0.0f, 0x1.8a1e2ep-65f,
     0x1.48f73p-80f, 0.0f, 0x1.dfac1ep-63f, 0.0f, 0.0f, 0.0f, 0x1.d4d9b8p-2f, 0.0f,
     0.0f, 0.0f, 0x1.03a382p-45f, 0.0f, 0x1.e6feb8p-15f, 0x1.80ca6ep-9f,
     0x1.92449cp-59f, 0x1.5994c4p-25f, 0x1.36260ap-54f, 0x1.2d82eap-58f,
     0x1.3658bcp-124f, 0x1.3a0c86p-88f, 0x1.15f4dap-90f, 0.0f, 0x1.4ebf9cp-20f, 0.0f,
     0x1.1e7922p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74a4e2p-47f, 0.0f, 0.0f,
     0x1.0de11cp-126f, 0x1.0b5e12p-83f, 0.0f, 0.0f, 0.0f, 0x1.d18adap-69f, 0.0f,
     0x1p0f, 0x1.8beba2p-35f, 0.0f, 0x1.c33dfcp-113f, 0x1.58d924p-105f, 0.0f, 0.0f,
     0x1.f3ef98p-52f, 0x1.c0e8ccp-97f, 0x1.d4adfcp-90f, 0x1.b66d4p-7f, 0.0f,
     0x1.74e9f8p-75f, 0x1.4871ccp-54f, 0.0f, 0x1.077c8cp-56f, 0x1.e4b646p-93f, 0.0f,
     0.0f, 0x1.82f0bep-43f, 0.0f, 0.0f, 0x1.563676p-117f, 0x1.ada258p-57f, 0.0f,
     0x1.e04bdp-6f, 0.0f, 0x1.a3e88ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21735ap-13f,
     0x1.c38c64p-121f, 0.0f, 0x1.19b952p-86f, 0.0f, 0x1.025d6cp-114f, 0x1.b2fa6ep-6f,
     0x1.ee615cp-51f, 0x1.5bd1dcp-1f, 0x1.47ffc6p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f528b8p-117f, 0.0f, 0.0f, 0.0f, 0x1.3c018ap-69f, 0x1.3489e2p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5d83b8p-38f, 0x1.5f0feap-108f, 0x1.7017e8p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3aa902p-126f, 0x1.af3368p-34f, 0x1.b1c716p-33f, 0.0f, 0.0f,
     0x1.a4e60cp-10f, 0x1.9ec914p-98f, 0x1.3eeddp-96f, 0.0f, 0.0f, 0x1.8202dcp-106f,
     0.0f, 0x1.d45f7p-53f, 0.0f, 0x1.2e1a5p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa1ap-31f, 0.0f, 0.0f, 0x1.747636p-110f, 0x1.52baa6p-41f, 0x1.a7af52p-103f,
     0x1.1032bcp-71f, 0x1.3cbeecp-111f, 0x1.197d8ap-36f, 0.0f, 0.0f, 0x1.33cdaep-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1c4dap-54f, 0.0f, 0.0f, 0.0f, 0x1.4c92aep-110f,
     0x1.7c384cp-24f, 0.0f, 0x1.31e27ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d41ccp-98f,
     0x1.98456cp-33f, 0x1.145be8p-44f, 0x1.242deep-18f, 0x1.7920b8p-73f, 0.0f,
     0x1.65b2aap-121f, 0.0f, 0x1.d07d48p-40f, 0x1.fef6c8p-5f, 0x1.a8ff98p-14f, 0.0f,
     0x1.3c114ap-68f, 0.0f, 0.0f, 0x1.2ff406p-13f, 0x1.35e2b2p-74f, 0.0f,
     0x1.18764ap-97f, 0.0f, 0.0f, 0x1.f002e8p-125f, 0.0f, 0x1.a79ba6p-19f, 0.0f,
     0x1.90282p-28f, 0.0f, 0x1.704734p-104f, 0.0f, 0x1.939d3ep-94f, 0x1.295238p-67f,
     0.0f, 0x1.66e3fcp-14f, 0x1.7fdb7p-101f, 0.0f, 0x1.00f00cp-19f, 0x1.2673e4p-105f,
     0.0f, 0.0f, 0x1.9aa1eep-102f, 0x1.0d1792p-70f, 0.0f, 0x1.7b0b3ap-25f,
     0x1.bc57c6p-24f, 0x1.2ffdcap-85f, 0.0f, 0.0f, 0x1.8276a8p-66f, 0x1.82627p-89f,
     0x1.e4e99p-6f, 0x1.e2745p-14f, 0.0f, 0.0f, 0x1.ec29e4p-75f, 0.0f, 0.0f,
     0x1.fe0c2ap-14f, 0x1.3ba1c8p-71f, 0.0f, 0x1.c0bc9ap-39f, 0.0f, 0x1.4bfe54p-98f,
     0x1.39767cp-24f, 0x1.4168bep-88f, 0x1.c46efep-70f, 0.0f, 0.0f, 0x1.391762p-120f,
     0x1.37e51ep-63f, 0.0f, 0x1.5db4eep-3f, 0x1.4ce6e4p-61f, 0.0f, 0.0f, 0.0f,
     0x1.954314p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d2f0ep-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2d00bap-2f, 0.0f, 0x1.e35402p-10f, 0.0f, 0x1.5a34b4p-26f,
     0.0f, 0x1.a5b1d4p-106f, 0x1.958d4p-106f, 0.0f, 0.0f, 0x1.6d36ecp-60f, 0.0f,
     0x1.d5ec92p-24f, 0x1.56c154p-16f, 0.0f, 0x1.01497ep-91f, 0x1.0accep-19f, 0.0f,
     0x1.e20f2ap-45f, 0.0f, 0x1.4b07e8p-101f, 0x1.3b77dap-126f, 0.0f, 0x1.928e72p-15f,
     0x1.493cdep-86f, 0.0f, 0.0f, 0.0f, 0x1.7a4ddcp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e977ccp-121f, 0x1.df475p-2f, 0.0f, 0x1.c4924cp-54f, 0.0f, 0.0f,
     0x1.094fb2p-87f, 0x1.5bc7fap-102f, 0.0f, 0.0f, 0x1.a18b34p-101f, 0.0f,
     0x1.7a5c56p-84f, 0x1.9b4f8ep-119f, 0x1.d41e26p-2f, 0.0f, 0x1.bb05e4p-66f, 0.0f,
     0x1.5a2ea4p-11f, 0x1.f7683ep-3f, 0.0f, 0.0f, 0x1.3c8f4cp-29f, 0x1.dd5a6cp-4f,
     0.0f, 0.0f, 0x1.51dfc2p-35f, 0x1.e56e9ap-68f, 0x1.2c8654p-29f, 0x1.62688cp-64f,
     0x1.24138ep-62f, 0x1.fba0f6p-9f, 0.0f, 0x1.32f9a8p-39f, 0.0f, 0.0f, 0.0f,
     0x1.a6b92ep-45f, 0x1.d972f8p-119f, 0x1.159ee2p-25f, 0x1.0cf632p-45f,
     0x1.92f92cp-3f, 0x1.1d0614p-71f, 0.0f, 0x1.fa032cp-44f, 0.0f, 0.0f,
     0x1.0831dap-62f, 0x1.35d692p-69f, 0.0f, 0.0f, 0x1.254954p-71f, 0x1.624844p-37f,
     0x1.e6b322p-43f, 0x1.d8c00cp-58f, 0x1.65b152p-115f, 0.0f, 0x1.311606p-105f,
     0x1.dd1a7ap-93f, 0x1.585d88p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e135f6p-126f,
     0x1.da7d8cp-60f, 0x1.89a8c2p-117f, 0x1.a606d4p-1f, 0x1.88b346p-42f,
     0x1.12d02ep-25f, 0x1.5dcab2p-79f, 0x1.d8a0c4p-17f, 0x1.d95e6ap-35f,
     0x1.6b5dacp-55f, 0.0f, 0x1.b74efp-111f, 0.0f, 0x1.559004p-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.08f63cp-73f, 0.0f, 0.0f, 0x1p0f, 0x1.99c9e4p-47f, 0.0f, 0.0f,
     0x1.77f418p-71f, 0x1.280b42p-93f, 0x1.d6a4fcp-29f, 0x1.14509ap-41f,
     0x1.2a498cp-61f, 0x1.124cf6p-103f, 0x1.879c82p-36f, 0x1.83020ap-69f, 0.0f,
     0x1.f7f0ap-20f, 0.0f, 0x1.86ca86p-27f, 0.0f, 0x1.7736ep-86f, 0x1.75334ap-74f,
     0x1.de6d5ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84e8f2p-45f, 0x1.a69c0cp-7f, 0.0f,
     0.0f, 0.0f, 0x1.bd92fep-125f, 0.0f, 0x1.024feap-91f, 0.0f, 0.0f, 0.0f,
     0x1.7e4e1ap-54f, 0x1.c9d10ep-107f, 0.0f, 0x1.e20ca8p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8157dep-87f, 0.0f, 0.0f, 0x1.585efcp-62f, 0x1.4d05d2p-45f, 0x1.11abdep-40f,
     0.0f, 0x1.4157f8p-124f, 0.0f, 0.0f, 0.0f, 0x1.e1dddcp-57f, 0x1.2ddc42p-66f,
     0x1.1100fp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.330742p-3f, 0.0f,
     0.0f, 0x1.e8ccaap-31f, 0.0f, 0x1.3178bep-104f, 0.0f, 0.0f, 0.0f,
     0x1.8c61c8p-119f, 0x1.5719d6p-3f, 0.0f, 0.0f, 0.0f, 0x1.99e122p-78f,
     0x1.7b53f6p-92f, 0.0f, 0.0f, 0x1p0f, 0x1.d4f43ep-12f, 0x1.c62ccp-30f, 0.0f,
     0x1.fdd878p-121f, 0.0f, 0x1.380ebap-126f, 0x1.d234cep-82f, 0.0f, 0x1.50a21ap-35f,
     0.0f, 0x1.4802bp-84f, 0.0f, 0x1.e6c866p-81f, 0.0f, 0.0f, 0.0f, 0x1.7b7844p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fc808p-86f, 0.0f, 0x1.26263p-20f, 0.0f,
     0x1.8b755ap-109f, 0x1.42004ep-45f, 0x1.11933ap-118f, 0.0f, 0x1.9966bap-80f, 0.0f,
     0.0f, 0x1.91a82ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e2a3ep-80f, 0.0f, 0.0f,
     0x1.9d5018p-75f, 0x1.983696p-82f, 0x1.9cbc8ep-25f, 0x1.49f7cp-55f,
     0x1.1fef96p-11f, 0.0f, 0.0f, 0x1.962e42p-119f, 0x1.e4d11ep-13f, 0.0f,
     0x1.930a4ap-104f, 0.0f, 0.0f, 0x1.70f598p-38f, 0x1.4c5de2p-73f, 0.0f, 0.0f,
     0x1.74f48ap-37f, 0x1.fcb57ep-12f, 0.0f, 0x1.a4e402p-26f, 0x1.00d514p-64f,
     0x1.62209cp-88f, 0x1.1a621p-56f, 0x1.9865bp-19f, 0.0f, 0.0f, 0x1.45f408p-63f,
     0x1.a9eadp-30f, 0.0f, 0x1.ccca6ap-67f, 0.0f, 0.0f, 0x1.0b816ep-116f,
     0x1.0ce9a8p-109f, 0.0f, 0x1.066886p-77f, 0.0f, 0.0f, 0x1.b5e5dep-105f, 0.0f,
     0.0f, 0x1.25d4bep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e58d6p-109f, 0x1.c32bfp-26f,
     0.0f, 0.0f, 0x1.547676p-14f, 0x1.7cd7ep-101f, 0x1.e7d31p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b24b0cp-82f, 0x1.7fd23cp-3f, 0.0f, 0x1.7f53dep-82f, 0.0f,
     0x1.e07306p-107f, 0.0f, 0.0f, 0x1.e48156p-117f, 0.0f, 0x1.76d6ccp-67f, 0.0f,
     0.0f, 0.0f, 0x1.0f17aep-28f, 0.0f, 0x1.743f54p-70f, 0x1.86bf9p-18f,
     0x1.99b06p-13f, 0x1.d7a28cp-33f, 0.0f, 0x1.0b7e66p-92f, 0x1.65d352p-65f, 0.0f,
     0x1.98165ep-86f, 0x1.958014p-5f, 0.0f, 0.0f, 0x1.3f1076p-91f, 0.0f,
     0x1.4c24a4p-85f, 0x1.b64c38p-100f, 0x1.83944cp-66f, 0.0f, 0x1.b89b12p-12f,
     0x1.8a4c4cp-80f, 0.0f, 0x1.0a997p-120f, 0.0f, 0x1.56087p-120f, 0.0f, 0.0f,
     0x1.575ae4p-68f, 0x1.722346p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.a0eae2p-56f, 0.0f, 0x1.54cbcep-35f, 0x1.f44628p-98f, 0x1.bbfa34p-35f, 0.0f,
     0x1.7c3622p-26f, 0x1.28f29ap-106f, 0x1.f1727ap-18f, 0.0f, 0x1.d1e262p-3f,
     0x1.1abc44p-80f, 0.0f, 0.0f, 0x1.00ea5ep-64f, 0x1.2cdfa2p-3f, 0x1.35c0dep-70f,
     0x1.74c9bcp-17f, 0x1.97b058p-73f, 0x1.ce69c4p-9f, 0.0f, 0x1.6e232cp-110f,
     0x1.f5ec42p-93f, 0x1.409594p-89f, 0x1.262aap-53f, 0x1.e69798p-52f, 0.0f, 0.0f,
     0x1.cbb4a4p-107f, 0x1.bb9b36p-24f, 0x1.fa8ab8p-2f, 0x1.5a3866p-92f,
     0x1.5c9f9ap-59f, 0.0f, 0.0f, 0.0f, 0x1.078362p-116f, 0.0f, 0x1.f7caep-112f,
     0x1.7eefb4p-3f, 0x1.247782p-43f, 0.0f, 0x1.82157p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.40a3ecp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76e3aap-97f, 0x1.63bf4p-60f,
     0x1.45469ap-66f, 0x1.8a51bp-87f, 0x1.2bc2dcp-100f, 0x1.cf05ecp-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e0d1dep-77f, 0x1.38d8e8p-120f, 0x1.4f72f8p-24f, 0.0f,
     0x1.d307a8p-48f, 0.0f, 0x1.fa311ep-59f, 0.0f, 0x1.53586ep-69f, 0.0f, 0x1p0f,
     0x1.7c12dp-98f, 0.0f, 0x1.d5d02p-51f, 0x1.ba0bep-90f, 0x1.211b94p-61f, 0.0f,
     0x1.9d8274p-95f, 0.0f, 0x1.a9d78ep-50f, 0.0f, 0x1.2ffb3p-21f, 0.0f, 0.0f,
     0x1.772542p-11f, 0.0f, 0.0f, 0x1.b841fap-60f, 0x1.d8a1b6p-126f, 0.0f,
     0x1.6deb5p-69f, 0x1.b81586p-115f, 0.0f, 0.0f, 0x1.47b6dap-121f, 0x1.09e9ap-3f,
     0x1.d44c2cp-108f, 0x1.8d15e2p-89f, 0.0f, 0.0f, 0x1.b75cfcp-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1dc3f4p-24f, 0x1.8b802p-110f, 0x1.1adb38p-1f, 0x1.1c0c3ap-105f,
     0.0f, 0x1.50a0f4p-103f, 0x1.27c4bep-105f, 0.0f, 0.0f, 0x1.bcd404p-88f,
     0x1.023784p-100f, 0.0f, 0x1.0edf8p-60f, 0x1.0b0388p-106f, 0x1.daf6ep-49f,
     0x1.94c2aep-123f, 0x1.e1e756p-84f, 0x1.6a5afp-77f, 0.0f, 0.0f, 0x1.5197bap-39f,
     0x1.85ae98p-4f, 0.0f, 0x1.bbb20ap-80f, 0.0f, 0x1.8d9daep-110f, 0.0f, 0.0f,
     0x1.cd8cp-26f, 0.0f, 0x1.5a51b2p-23f, 0x1.63fed4p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.071a5ep-20f, 0x1.7b66d6p-15f, 0.0f, 0.0f, 0x1.b00d88p-3f,
     0x1.3cc51ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9b81p-20f, 0.0f, 0x1.fe2a94p-51f,
     0x1.6a56e6p-2f, 0.0f, 0.0f, 0x1.9c7df2p-23f, 0.0f, 0.0f, 0x1.08d71ep-20f, 0.0f,
     0x1.d63378p-34f, 0.0f, 0x1.bec7ep-95f, 0.0f, 0.0f, 0x1.746eap-34f, 0.0f,
     0x1.cb07a8p-91f, 0x1.8a046ep-107f, 0.0f, 0x1.360e7ep-57f, 0.0f, 0x1.c1136cp-94f,
     0x1.28b004p-47f, 0x1.04d6e6p-82f, 0x1.25964cp-27f, 0x1.14d9bap-92f, 0.0f,
     0x1.13a63p-100f, 0x1.b1a164p-75f, 0.0f, 0.0f, 0.0f, 0x1.32da3ep-125f, 0.0f, 0.0f,
     0.0f, 0x1.95edb4p-17f, 0.0f, 0x1.d844fcp-3f, 0.0f, 0x1.2951b8p-93f, 0.0f, 0.0f,
     0x1.13c55ep-122f, 0x1.15103cp-50f, 0x1.f63b5p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ceaefep-118f, 0.0f, 0x1p0f, 0x1.427aep-22f, 0.0f, 0x1.6cececp-54f, 0.0f,
     0.0f, 0x1.c239ep-22f, 0x1.1cc5fep-33f, 0.0f, 0.0f, 0x1.f7ad1cp-115f,
     0x1.98301cp-22f, 0.0f, 0.0f, 0.0f, 0x1.b83fbap-126f, 0x1.14911cp-91f, 0.0f, 0.0f,
     0x1.acdf64p-74f, 0x1.c11886p-80f, 0x1.4ebf3p-1f, 0.0f, 0.0f, 0.0f,
     0x1.004792p-80f, 0x1.38fa6ep-36f, 0.0f, 0x1.443b8cp-62f, 0.0f, 0.0f,
     0x1.bfa14ap-3f, 0.0f, 0.0f, 0x1.8ef01p-92f, 0.0f, 0.0f, 0x1.610018p-56f,
     0x1.84799ep-99f, 0x1.bd8456p-23f, 0.0f, 0.0f, 0x1.b2f0cp-61f, 0.0f, 0.0f, 0.0f,
     0x1.76d14p-52f, 0.0f, 0.0f, 0.0f, 0x1.91dddp-46f, 0.0f, 0x1.53f128p-95f,
     0x1.6c37fep-51f, 0x1.8e0042p-13f, 0x1.a92e72p-110f, 0.0f, 0x1.d3c934p-112f,
     0x1.d15a3cp-8f, 0x1.2cb4aap-56f, 0.0f, 0x1.b21542p-79f, 0.0f, 0x1.c97202p-58f,
     0.0f, 0.0f, 0x1.81ec66p-101f, 0.0f, 0.0f, 0.0f, 0x1.8e913cp-36f, 0.0f,
     0x1.59bff2p-56f, 0x1.c40022p-34f, 0x1.d769dap-64f, 0.0f, 0x1.5f4e64p-122f,
     0x1.b9aaeap-112f, 0.0f, 0.0f, 0.0f, 0x1.e69ebp-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3bf0ep-82f, 0.0f, 0.0f, 0x1.90078cp-59f, 0x1.e685fp-47f, 0.0f, 0.0f, 0.0f,
     0x1.0b332ep-85f, 0x1.4130cap-83f, 0x1.cab52ep-113f, 0.0f, 0.0f, 0.0f,
     0x1.13e64ap-79f, 0x1.00aea8p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5392f6p-57f, 0x1.f4e508p-87f, 0x1.30551cp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6a118p-82f, 0.0f, 0x1.ad4472p-101f, 0.0f, 0x1.a8cee8p-84f, 0x1.f0442cp-20f,
     0.0f, 0x1.597646p-56f, 0x1.2273e6p-73f, 0.0f, 0.0f, 0.0f, 0x1.1f2f2ep-32f, 0.0f,
     0x1.7ccdcp-40f, 0x1.79a688p-77f, 0x1.5b45b6p-63f, 0x1.1f9aap-59f,
     0x1.3d50d6p-120f, 0x1.66722ap-69f, 0x1.87df0ep-37f, 0x1.d67446p-105f, 0.0f, 0.0f,
     0x1.dd485ep-34f, 0.0f, 0x1.c9d2ccp-48f, 0.0f, 0x1.eba3cap-84f, 0x1.6110cp-103f,
     0x1.bac62ep-113f, 0.0f, 0x1.c4672ap-108f, 0x1.c96bacp-45f, 0x1.7d5c0ep-110f,
     0.0f, 0.0f
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
            tmp1 = Sleef_atanf4_u35kvx(tmp0);
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
    printf("Sleef_atanf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atanf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
