/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf4_u05kvx.c --function \
 *     Sleef_finz_sqrtf4_u05kvx --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.1e7808p-93f, 0x1.74ef7ap-48f, 0.0f, 0x1.e38dd6p-83f, 0.0f,
     0x1.5d02eap-88f, 0x1.72734ep-113f, 0.0f, 0x1.8d95aep-4f, 0x1.ff0966p-16f,
     0x1.87f772p-20f, 0x1.5d10bcp-93f, 0x1.8d5b32p-98f, 0.0f, 0.0f, 0x1.6416e8p-6f,
     0.0f, 0x1.e00bdcp-87f, 0.0f, 0.0f, 0x1.50dc22p-21f, 0x1.10312cp-116f, 0.0f,
     0x1.d669c8p-97f, 0x1.1be65cp-45f, 0.0f, 0.0f, 0x1.030766p-124f, 0.0f,
     0x1.400dccp-80f, 0x1.40b3b4p-47f, 0x1.57bcbap-63f, 0.0f, 0x1.9eb67cp-111f, 0.0f,
     0x1.46e02cp-125f, 0x1.003d6ep-42f, 0x1.499194p-45f, 0.0f, 0x1.d54b6ep-1f,
     0x1.e4555cp-39f, 0x1.0da1p-126f, 0x1.bbbd5cp-80f, 0x1.d111ep-15f,
     0x1.b1a604p-57f, 0x1.bbb4e8p-13f, 0x1.e2e5b8p-121f, 0.0f, 0.0f, 0x1.3b149ap-11f,
     0.0f, 0x1.3f2b4ep-100f, 0x1.788c22p-54f, 0.0f, 0.0f, 0x1.37578p-90f, 0.0f,
     0x1.8d7p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a03812p-124f, 0.0f, 0.0f,
     0x1.492d8ep-60f, 0x1.42d778p-59f, 0.0f, 0x1.907224p-74f, 0x1.8c25d8p-31f,
     0x1.885b88p-98f, 0x1.9fc06p-42f, 0x1.fa5734p-36f, 0.0f, 0.0f, 0x1.4d94dcp-77f,
     0.0f, 0x1.d7786cp-115f, 0.0f, 0x1.99ffb6p-50f, 0x1.e8587ap-43f, 0.0f,
     0x1.0c1cb2p-11f, 0.0f, 0.0f, 0.0f, 0x1.70ac2p-42f, 0.0f, 0x1.c806p-83f,
     0x1.4f83dap-16f, 0x1.3f3586p-94f, 0x1.7854ep-71f, 0.0f, 0.0f, 0x1.93666ap-90f,
     0.0f, 0x1.8c4df6p-105f, 0x1.bf142ep-1f, 0.0f, 0.0f, 0.0f, 0x1.df71bcp-125f, 0.0f,
     0.0f, 0x1.63da8ep-8f, 0.0f, 0x1.5a1cdep-11f, 0x1.9404c2p-78f, 0.0f,
     0x1.39fb02p-6f, 0.0f, 0x1.3e0212p-3f, 0.0f, 0x1.4e554p-92f, 0x1.0d9c48p-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f8194p-57f, 0.0f, 0.0f, 0x1.0dd49p-36f,
     0x1.78fff4p-69f, 0x1.52226cp-57f, 0.0f, 0.0f, 0x1.8c6f08p-109f, 0.0f,
     0x1.7d6fa4p-36f, 0.0f, 0x1.38c56p-67f, 0x1.5fc71cp-120f, 0.0f, 0x1.117002p-29f,
     0x1.aa0176p-65f, 0.0f, 0x1.5a1216p-105f, 0.0f, 0x1.5d7cc6p-90f, 0x1.27c728p-121f,
     0x1.c9246ep-13f, 0.0f, 0.0f, 0x1.400f6ep-114f, 0.0f, 0x1.c6f192p-41f,
     0x1.dd76c8p-14f, 0.0f, 0x1.de4f2ep-88f, 0x1.9c0abap-124f, 0.0f, 0x1.b77f76p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac74f8p-31f, 0.0f, 0.0f, 0.0f, 0x1.37c4a6p-112f,
     0x1.455a64p-46f, 0x1.3d1ddcp-25f, 0.0f, 0x1.fe8622p-57f, 0x1.542e64p-31f, 0.0f,
     0x1.52dab8p-112f, 0x1.f9472cp-61f, 0x1.591546p-12f, 0x1.a69eeap-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8deb5cp-3f, 0x1.d12e7ap-33f, 0x1.5950a6p-92f, 0x1.bab94p-42f,
     0.0f, 0x1.9b6bap-44f, 0x1.91dc66p-19f, 0x1.23afa6p-71f, 0.0f, 0.0f,
     0x1.0543f2p-24f, 0.0f, 0.0f, 0x1.94d784p-22f, 0.0f, 0x1.b46212p-31f, 0.0f, 0.0f,
     0.0f, 0x1.80ac4ap-121f, 0x1.0ddf0cp-31f, 0.0f, 0x1.ab090ep-36f, 0x1.f99662p-59f,
     0x1.971c02p-86f, 0x1.3ec53cp-100f, 0x1.a5b5fcp-41f, 0x1.aa63fp-41f, 0.0f,
     0x1.9d977ap-124f, 0x1.ccf30ap-7f, 0x1.b5410cp-106f, 0.0f, 0x1.3264f8p-37f, 0.0f,
     0.0f, 0x1.82dbbcp-16f, 0x1.43be0cp-1f, 0x1.82d68ap-102f, 0.0f, 0x1.a0bd7ep-125f,
     0.0f, 0x1.6125a8p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f94fp-17f,
     0x1.4b2958p-84f, 0.0f, 0x1.69ac56p-46f, 0x1.107662p-97f, 0.0f, 0.0f,
     0x1.002e2p-21f, 0x1.842046p-14f, 0.0f, 0x1.3959f6p-15f, 0x1.7809cp-49f,
     0x1.7e9bb2p-92f, 0x1.2d919p-123f, 0.0f, 0.0f, 0.0f, 0x1.e50be2p-112f, 0.0f,
     0x1.d9da58p-75f, 0.0f, 0x1.72844ap-15f, 0x1.91d712p-60f, 0x1.73756ap-121f,
     0x1.ed9edp-17f, 0.0f, 0x1.0cf41cp-12f, 0x1.c9a6e2p-28f, 0x1.cfc846p-7f,
     0x1.cdcf5ep-49f, 0x1.530504p-73f, 0.0f, 0.0f, 0x1.207d9cp-90f, 0.0f,
     0x1.f9bac8p-46f, 0.0f, 0x1.26ae54p-37f, 0.0f, 0x1.9c5p-12f, 0x1.c359a4p-44f,
     0.0f, 0.0f, 0x1.ab363ap-15f, 0.0f, 0.0f, 0.0f, 0x1.c5ae8ap-114f, 0x1.242c9p-68f,
     0.0f, 0x1.5f2698p-74f, 0x1.ecaf78p-41f, 0.0f, 0.0f, 0.0f, 0x1.3d2882p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b02fep-118f, 0x1.d598d6p-8f, 0.0f, 0.0f,
     0x1.42b208p-11f, 0.0f, 0x1.09099cp-124f, 0.0f, 0.0f, 0x1.ed08b2p-15f, 0.0f,
     0x1.6df49ep-54f, 0.0f, 0x1.36f60ep-69f, 0x1.49ecdcp-79f, 0x1.76aaacp-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba590cp-40f, 0.0f, 0x1.6479b2p-72f, 0x1.56ec92p-16f,
     0x1.5b9be4p-42f, 0.0f, 0x1.3c6d66p-84f, 0.0f, 0.0f, 0x1.96e83cp-46f,
     0x1.4bb0aep-63f, 0.0f, 0x1.48bbd4p-37f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.232622p-50f, 0x1.a8d0f8p-74f, 0x1.98d774p-5f, 0x1.f7f52ep-98f,
     0x1.effc7ep-41f, 0x1.4584d8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87e8d8p-113f,
     0x1.e0a22ap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd8b3cp-124f, 0.0f, 0.0f, 0x1.d6bea4p-80f, 0x1.070a6cp-82f, 0x1.cf6f78p-1f,
     0.0f, 0x1.816c7p-51f, 0.0f, 0.0f, 0x1.ddfea6p-22f, 0x1.710fc2p-85f,
     0x1.bf912p-104f, 0x1.e557dep-55f, 0.0f, 0x1.17aeaep-11f, 0x1.e2a9aep-87f,
     0x1.691442p-57f, 0x1.6d055cp-72f, 0x1.f73456p-101f, 0x1.16868ap-21f, 0.0f,
     0x1.85cca8p-31f, 0x1.227d6p-7f, 0.0f, 0.0f, 0.0f, 0x1.391422p-99f, 0.0f, 0.0f,
     0.0f, 0x1.b48f8ep-18f, 0.0f, 0x1.ef2684p-81f, 0.0f, 0x1.97f3f6p-69f,
     0x1.6bd342p-108f, 0x1.770728p-75f, 0.0f, 0.0f, 0x1.369244p-70f, 0.0f, 0.0f,
     0x1.ee787p-33f, 0x1.5d091p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.777632p-79f, 0.0f,
     0x1.54becep-5f, 0.0f, 0x1.b092bep-80f, 0x1.3d7dfcp-100f, 0.0f, 0x1.dfe4a6p-126f,
     0.0f, 0x1.32cdb6p-23f, 0.0f, 0x1.8c02cep-6f, 0.0f, 0x1.20a288p-116f,
     0x1.ee87d4p-2f, 0x1.9ee006p-34f, 0x1.54cffep-2f, 0x1.e14a8cp-25f, 0x1.080aap-55f,
     0.0f, 0.0f, 0x1.7b9e0ap-92f, 0x1.f3bf6ap-6f, 0x1.0051f8p-106f, 0x1.6b5bap-20f,
     0x1.52aa52p-37f, 0.0f, 0.0f, 0x1.9f417ap-70f, 0.0f, 0.0f, 0x1.301bcp-18f,
     0x1.00af0ep-15f, 0x1.47868cp-99f, 0.0f, 0.0f, 0x1.1a7256p-109f, 0.0f,
     0x1.b1ae46p-79f, 0.0f, 0.0f, 0x1.b288d6p-40f, 0.0f, 0x1.df0f74p-116f,
     0x1.bb06dap-57f, 0x1.d403bp-72f, 0.0f, 0.0f, 0x1.754caap-98f, 0x1.8296f2p-120f,
     0x1.3a3148p-4f, 0.0f, 0.0f, 0x1.843caap-44f, 0x1.c571a4p-53f, 0x1.53e824p-105f,
     0x1.9b677ep-4f, 0.0f, 0x1.c254b8p-38f, 0.0f, 0.0f, 0x1.1b1ed4p-34f, 0.0f,
     0x1.d991b6p-22f, 0.0f, 0x1.2f37b8p-69f, 0x1.973b6cp-16f, 0x1.3b5708p-42f,
     0x1.5ed254p-26f, 0.0f, 0x1.9c2b22p-49f, 0x1.6134d4p-98f, 0.0f, 0.0f,
     0x1.6b6806p-125f, 0x1.acd298p-7f, 0.0f, 0.0f, 0x1.e449ap-116f, 0x1.04bc0ep-92f,
     0x1.8e511cp-39f, 0.0f, 0x1.77a674p-115f, 0x1.95459cp-94f, 0x1.22793p-72f, 0.0f,
     0.0f, 0x1.8c4d72p-67f, 0.0f, 0x1.f36baap-54f, 0x1.5d60fep-90f, 0x1.a53234p-109f,
     0x1.51ed9ep-45f, 0x1.4c37bep-117f, 0.0f, 0x1.dbd1d4p-81f, 0x1.8c632ap-60f, 0.0f,
     0x1.10b052p-38f, 0x1.abf0c8p-44f, 0.0f, 0x1.7129cap-76f, 0.0f, 0.0f,
     0x1.6ac4b8p-65f, 0.0f, 0x1.957906p-79f, 0x1.cb054ep-75f, 0x1.85495cp-88f, 0.0f,
     0.0f, 0.0f, 0x1.d6115ep-64f, 0.0f, 0.0f, 0x1.d7331p-101f, 0.0f, 0x1.344524p-115f,
     0x1.609266p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e76c9ep-43f, 0x1.2b699ap-111f,
     0x1.1a71f4p-107f, 0x1.47b9e2p-52f, 0x1.1833fep-105f, 0x1.27580ep-55f,
     0x1.45a70ep-86f, 0.0f, 0.0f, 0x1.be7048p-42f, 0x1.9f5d3cp-96f, 0x1.4a0212p-37f,
     0x1.5e71c6p-2f, 0.0f, 0x1.696048p-27f, 0.0f, 0x1.9665fep-106f, 0.0f, 0.0f,
     0x1.2cb17ap-57f, 0.0f, 0x1.5e22a8p-55f, 0.0f, 0.0f, 0.0f, 0x1.ccdd3ep-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9edbc6p-29f, 0.0f, 0x1.08e2c4p-101f, 0x1.2f617cp-65f, 0.0f,
     0.0f, 0x1.e0f68ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c20bf2p-45f, 0.0f, 0.0f,
     0.0f, 0x1.964996p-74f, 0.0f, 0.0f, 0x1.1660d6p-111f, 0.0f, 0x1.e3e332p-113f,
     0x1.6e7bb6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e5d5ap-79f,
     0x1.2a4ecp-23f, 0.0f, 0.0f, 0x1.e033fp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04d73ap-48f, 0x1.9535ccp-115f, 0.0f, 0x1.72346p-74f, 0.0f, 0.0f,
     0x1.36372ep-1f, 0.0f, 0x1.a98a96p-106f, 0x1.4aaf8ep-36f, 0.0f, 0.0f, 0.0f,
     0x1.74dd84p-19f, 0.0f, 0.0f, 0x1.7b3daap-101f, 0x1.361386p-122f, 0.0f,
     0x1.0e8eb4p-66f, 0x1.bb0d5cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8a918p-7f,
     0.0f, 0x1.6585b8p-65f, 0x1.4fa664p-86f, 0x1.fd4ad4p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc284p-106f, 0x1.95710cp-121f, 0x1.25876cp-61f, 0x1.32d418p-51f, 0.0f, 0.0f,
     0x1.4215dap-93f, 0x1.79f0e8p-79f, 0x1.009ba8p-106f, 0x1.914c3ap-110f, 0.0f,
     0x1.269fccp-10f, 0.0f, 0.0f, 0.0f, 0x1.de8b84p-20f, 0.0f, 0x1.ce4b28p-28f,
     0x1.2f08dp-32f, 0.0f, 0x1.9dacp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.005306p-78f,
     0.0f, 0.0f, 0.0f, 0x1.09121ep-7f, 0x1.fb466cp-9f, 0.0f, 0x1.a7e708p-122f, 0.0f,
     0.0f, 0.0f, 0x1.d0dcd6p-64f, 0.0f, 0x1.e9d7cep-110f, 0x1.448424p-108f,
     0x1.b30622p-5f, 0.0f, 0.0f, 0x1.c5cd0ep-62f, 0x1.08c064p-66f, 0.0f, 0.0f,
     0x1.9aa19ap-56f, 0x1.b70154p-3f, 0.0f, 0.0f, 0.0f, 0x1.d2f564p-95f, 0.0f,
     0x1.6d5d76p-50f, 0.0f, 0.0f, 0x1.4c2b54p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ef3c4p-87f, 0x1.f78f4ep-95f, 0x1.6b218ap-116f,
     0x1.f0a82p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e898ap-74f,
     0x1.00bfc6p-22f, 0.0f, 0.0f, 0x1.5ce174p-88f, 0x1.4e311cp-115f, 0x1.bfd386p-23f,
     0x1.79af1ep-124f, 0.0f, 0.0f, 0x1.76883ep-100f, 0.0f, 0.0f, 0.0f, 0x1.d9ab3p-47f,
     0x1.1c60c2p-62f, 0x1.7db3fep-17f, 0x1.29939ap-23f, 0x1.72d18p-13f, 0.0f,
     0x1.497886p-29f, 0x1.efbce8p-9f, 0.0f, 0.0f, 0x1.40ed5ap-81f, 0.0f, 0.0f,
     0x1.1aee5ep-19f, 0x1.ed1c86p-17f, 0.0f, 0x1.4b49dap-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31fe6p-124f, 0x1.526c76p-97f, 0.0f, 0x1.d43442p-74f, 0x1p0f, 0x1.006c9ap-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d648ap-121f, 0.0f, 0x1.0e40bep-71f,
     0x1.510406p-86f, 0x1.37a58p-9f, 0x1.9badap-125f, 0x1.adea26p-20f,
     0x1.e8dc64p-67f, 0x1.4a0c78p-122f, 0.0f, 0x1.31df8cp-104f, 0x1.ff0f92p-68f, 0.0f,
     0.0f, 0x1.01d07cp-125f, 0x1.dbe998p-115f, 0.0f, 0x1.79e848p-100f, 0.0f,
     0x1.252c6p-63f, 0.0f, 0x1.a680bep-17f, 0.0f, 0.0f, 0x1.2e7a6p-93f,
     0x1.3cdf64p-101f, 0.0f, 0.0f, 0x1.17fcf2p-72f, 0x1.5a7d14p-14f, 0x1.fc9434p-17f,
     0x1.e2505p-12f, 0.0f, 0x1.0e5264p-65f, 0.0f, 0x1.fb97bep-123f, 0.0f,
     0x1.51f9d2p-9f, 0.0f, 0x1.2d4e9ap-6f, 0x1.cbefp-45f, 0x1.c6133p-83f, 0.0f, 0.0f,
     0.0f, 0x1.cfc516p-76f, 0x1.262364p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.583818p-126f,
     0x1.ea6a36p-27f, 0x1.814772p-32f, 0.0f, 0x1.9fcb4ep-1f, 0x1.3f99c2p-120f,
     0x1.ef97c8p-17f, 0x1.8bde6ap-53f, 0.0f, 0x1.cb3e64p-78f, 0x1.305ffep-17f, 0.0f,
     0x1.9f23e8p-22f, 0x1.cf4c7ep-125f, 0.0f, 0x1.3673f8p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.758fd6p-90f, 0x1.6b7736p-101f, 0.0f, 0.0f, 0x1.b37e5p-31f, 0x1.d29fc8p-88f,
     0.0f, 0.0f, 0x1.ac837ep-89f, 0x1.00d13ep-82f, 0x1.72127cp-13f, 0x1.a2338cp-96f,
     0.0f, 0x1.df1fccp-56f, 0x1.5e8d18p-52f, 0.0f, 0x1.5a63f6p-3f, 0x1.052c6p-61f,
     0x1.b86846p-4f, 0.0f, 0x1.5f995ep-118f, 0x1.686ef2p-65f, 0x1.2a7b92p-87f,
     0x1.7a64cap-47f, 0.0f, 0.0f, 0.0f, 0x1.8c87bcp-107f, 0x1.fefa04p-118f,
     0x1.f37104p-55f, 0x1.5c4846p-81f, 0x1.07733p-1f, 0.0f, 0x1.28c4p-44f,
     0x1.353238p-68f, 0x1.025aa6p-43f, 0x1.c28f12p-29f, 0.0f, 0.0f, 0x1.508a3ep-61f,
     0.0f, 0.0f, 0x1.328faap-38f, 0x1.9cc5b6p-10f, 0.0f, 0x1.37dd8ap-3f, 0.0f,
     0x1.57d3dcp-48f, 0.0f, 0x1.ed828cp-95f, 0x1.018076p-35f, 0x1.69e17ap-72f,
     0x1.ab7c52p-77f, 0x1.06e3e8p-72f, 0x1.2b2d9cp-68f, 0x1.d6a7ecp-56f,
     0x1.11d64p-53f, 0x1.2e1276p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fd808p-17f,
     0x1.622afep-58f, 0x1.134028p-62f, 0x1.7a574ap-37f, 0x1.e6dd5cp-44f, 0.0f,
     0x1.f42f38p-106f, 0x1.b0fcd8p-9f, 0x1.a0a986p-99f, 0x1.3d3becp-109f, 0.0f,
     0x1.5be34ap-3f, 0x1.c5e70ep-7f, 0.0f, 0x1.1c47bcp-68f, 0x1.ff70dp-42f,
     0x1.9ef2aep-73f, 0x1.080edap-38f, 0x1.48a684p-81f, 0x1.968528p-9f, 0.0f, 0.0f,
     0x1.e446b6p-96f, 0x1.9aab1cp-80f, 0.0f, 0x1.0c2548p-54f, 0x1.ab8f8ep-64f, 0.0f,
     0x1.d191a2p-10f, 0x1.32c44cp-102f, 0.0f, 0x1.048944p-44f, 0x1.e1d716p-35f,
     0x1.978f42p-71f, 0.0f, 0.0f, 0.0f, 0x1.fdbbdp-84f, 0.0f, 0x1.2ed342p-125f, 0.0f,
     0x1.208396p-49f, 0x1.c8f9cap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5daefcp-78f,
     0x1.efb07p-5f, 0.0f, 0x1.b2dae2p-22f, 0.0f, 0.0f, 0x1.deddc8p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.047552p-15f, 0x1.33a2b2p-48f, 0.0f, 0.0f, 0x1.e7d2acp-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7146cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4daa1ep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15c0dcp-91f,
     0x1.e41a86p-20f, 0.0f, 0x1.e7d27cp-14f, 0x1p0f, 0x1.35c1acp-86f, 0.0f, 0.0f,
     0x1.fcac08p-79f, 0x1.42590ap-25f, 0.0f, 0x1.0aaff6p-92f, 0.0f, 0.0f,
     0x1.15db0ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f2be4p-77f, 0x1.6f5e3ep-120f, 0.0f,
     0x1.47887ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.283638p-10f, 0.0f, 0x1.d3a1ccp-104f,
     0.0f, 0x1.5212cp-46f, 0.0f, 0.0f, 0.0f, 0x1.2f28e6p-3f, 0x1.ff8006p-68f, 0.0f,
     0x1.163b84p-119f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf4_u05kvx(tmp0);
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
    printf("Sleef_finz_sqrtf4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
