/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1f4_u10kvx.c --function Sleef_expm1f4_u10kvx \
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
     0.0f, 0x1.b791f2p-113f, 0.0f, 0x1.016ff4p-22f, 0x1.188936p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b44b2p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.905b18p-10f, 0x1.b367a8p-28f, 0x1.ddb9aep-22f, 0x1.f42514p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a0c5a8p-122f, 0x1.4a4e0ep-15f, 0x1.8842d2p-25f, 0.0f,
     0x1.e1c8fap-38f, 0x1.bd429p-51f, 0.0f, 0.0f, 0x1.56e4b6p-82f, 0x1.021468p-79f,
     0.0f, 0.0f, 0x1.4db36ep-55f, 0.0f, 0x1.f7e46ep-27f, 0x1.6c8de8p-46f, 0.0f,
     0x1.c2ca1ep-58f, 0.0f, 0.0f, 0x1.307a84p-95f, 0x1.af8ff6p-97f, 0.0f,
     0x1.94247ap-46f, 0.0f, 0.0f, 0.0f, 0x1.cb4bf6p-100f, 0x1.5d326ep-36f,
     0x1.b00346p-64f, 0x1.0bd1d4p-78f, 0x1.32f6eep-13f, 0.0f, 0.0f, 0.0f,
     0x1.f491fep-117f, 0.0f, 0.0f, 0x1.54caa8p-2f, 0x1.b9ac94p-39f, 0.0f, 0.0f, 0.0f,
     0x1.f5461p-94f, 0.0f, 0x1.22e48p-110f, 0.0f, 0.0f, 0x1.3db9eap-63f,
     0x1.5c6154p-50f, 0x1.4fa5f4p-23f, 0x1.549bdcp-102f, 0x1.b7f548p-101f, 0.0f,
     0x1.6f740cp-28f, 0.0f, 0x1.53a47ap-84f, 0x1.cebf9p-1f, 0x1.a9e9cep-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6565d6p-111f, 0.0f, 0x1.ff894cp-98f, 0.0f, 0x1.c0318cp-13f,
     0x1.21e24ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6020c2p-72f, 0x1.414c6ap-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.889ef8p-35f, 0.0f, 0x1.30dcbap-4f, 0x1.70f5d8p-85f,
     0x1.e9b4eap-40f, 0.0f, 0.0f, 0x1.957984p-35f, 0x1.afab1ep-124f, 0x1.c5f4dcp-54f,
     0x1.82aa42p-47f, 0x1.c6c5cep-34f, 0x1.e02e84p-1f, 0.0f, 0x1.22023cp-29f,
     0x1.7bd874p-116f, 0.0f, 0.0f, 0x1.8d3442p-123f, 0x1.71ac8ap-7f, 0.0f, 0.0f,
     0x1.88f5aap-29f, 0.0f, 0.0f, 0x1.93cd2ep-123f, 0.0f, 0x1.71d2cap-2f,
     0x1.2612bap-20f, 0x1.776bep-63f, 0.0f, 0x1.5b27e8p-73f, 0x1.e15412p-8f,
     0x1.bef962p-66f, 0.0f, 0x1.22ab58p-109f, 0.0f, 0.0f, 0.0f, 0x1.373032p-64f, 0.0f,
     0.0f, 0x1.1180dep-18f, 0.0f, 0x1.8b2272p-50f, 0x1.f6f242p-110f, 0x1.98c6d4p-56f,
     0.0f, 0.0f, 0x1.9b9b56p-41f, 0.0f, 0x1.3521b2p-61f, 0.0f, 0x1.cae9bcp-74f, 0.0f,
     0x1.55ec7ep-95f, 0.0f, 0x1.855294p-112f, 0.0f, 0.0f, 0.0f, 0x1.f2410cp-22f,
     0x1.d0f6b8p-99f, 0.0f, 0x1.7f6b1p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96c264p-13f, 0x1.82326cp-54f, 0x1.b27498p-60f, 0x1.a0a0cap-86f,
     0x1.5dd676p-64f, 0.0f, 0.0f, 0.0f, 0x1.71305cp-28f, 0.0f, 0.0f, 0x1.7d4c5ap-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c140c6p-16f, 0.0f,
     0x1.fce5b6p-33f, 0.0f, 0x1.bf4c94p-49f, 0.0f, 0x1.9d61ecp-88f, 0x1.ac5edep-94f,
     0x1.21d288p-63f, 0x1.12acfep-44f, 0x1.35837ap-115f, 0x1.7f2b94p-121f, 0.0f,
     0x1.eec10ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d57802p-40f, 0x1.936a1ap-39f,
     0x1.fec504p-77f, 0.0f, 0x1.96da8ep-67f, 0x1.6a98a6p-89f, 0x1.eb0dbep-124f,
     0x1.c69024p-18f, 0x1.12b038p-66f, 0.0f, 0x1.5611bcp-110f, 0.0f, 0x1.2b72p-53f,
     0x1.2c80dap-80f, 0x1.b331fcp-16f, 0x1.710d3ap-55f, 0.0f, 0x1.5cb9bcp-18f,
     0x1.f9e14p-13f, 0x1.5b616p-124f, 0.0f, 0.0f, 0.0f, 0x1.800042p-18f,
     0x1.b46e82p-125f, 0x1.10e142p-120f, 0.0f, 0x1.d08132p-126f, 0x1.82246cp-102f,
     0.0f, 0x1.397188p-24f, 0x1.79064ap-109f, 0x1.083868p-80f, 0x1.caf1bcp-69f,
     0x1.6f11b8p-43f, 0.0f, 0.0f, 0.0f, 0x1.08270ap-76f, 0x1.74b5fp-98f, 0.0f,
     0x1.1cefecp-41f, 0.0f, 0.0f, 0x1.6a9fecp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6677ap-75f, 0.0f, 0x1.bbaa4p-17f, 0.0f, 0.0f, 0.0f, 0x1.134c4p-98f,
     0x1.b35b6cp-103f, 0.0f, 0x1.2513c8p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e64704p-80f, 0x1.924fb4p-124f, 0.0f, 0x1.31510ap-12f, 0x1.81b302p-71f, 0.0f,
     0.0f, 0.0f, 0x1.5c8e46p-31f, 0x1.b353d6p-87f, 0.0f, 0.0f, 0x1.5657e8p-95f,
     0x1.742a5ap-20f, 0x1.5a6c6ep-25f, 0.0f, 0x1.8a9e3p-19f, 0x1.6a0442p-3f,
     0x1.64d0b8p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca58ccp-123f, 0.0f, 0.0f,
     0x1.388cf6p-6f, 0x1.d6cc3cp-104f, 0x1.33ba9ap-16f, 0.0f, 0x1.bed27ap-53f, 0.0f,
     0.0f, 0x1.86cd5p-18f, 0x1.6b1a9ap-27f, 0.0f, 0.0f, 0x1.ca6314p-14f, 0.0f,
     0x1.4e75fep-59f, 0x1.9686dp-99f, 0x1.c05a34p-61f, 0x1.64fd1cp-92f, 0.0f,
     0x1.e69bb4p-37f, 0.0f, 0x1.d53a44p-49f, 0.0f, 0.0f, 0.0f, 0x1.10768cp-78f, 0.0f,
     0x1.5019ap-87f, 0x1p0f, 0x1.2a62b2p-44f, 0.0f, 0x1.ca3074p-39f, 0x1.c7c486p-120f,
     0x1.5ddb6cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe03dep-3f,
     0x1.dbffcap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e16e3cp-124f, 0.0f,
     0x1.7823d8p-95f, 0.0f, 0x1.e7ded6p-104f, 0x1.06801ep-105f, 0x1.19d3ep-81f, 0.0f,
     0.0f, 0.0f, 0x1.56ebcap-114f, 0x1.e6db6ap-87f, 0.0f, 0x1.f4854ep-65f,
     0x1.8d03aep-53f, 0.0f, 0x1.793f36p-47f, 0.0f, 0x1.39071cp-100f, 0.0f, 0.0f,
     0x1.3a2c24p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a23a0ap-48f, 0.0f,
     0x1.0f4108p-1f, 0x1.d8654ap-87f, 0x1.4f1752p-65f, 0x1.e40db6p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1413ep-100f, 0.0f, 0.0f, 0.0f, 0x1.ce0a1p-107f, 0.0f, 0.0f,
     0x1.fe5e7ap-79f, 0x1.69e054p-120f, 0.0f, 0.0f, 0x1.a3fceap-106f, 0.0f, 0.0f,
     0.0f, 0x1.ed614ep-50f, 0.0f, 0.0f, 0x1.f5fb2cp-17f, 0x1.5cfb48p-39f, 0.0f, 0.0f,
     0x1.12328ap-61f, 0x1.0099eep-19f, 0x1.b331bap-9f, 0.0f, 0.0f, 0x1.093a4p-60f,
     0x1.d6a53ap-64f, 0.0f, 0x1.7b4b0cp-115f, 0x1.4e526ep-100f, 0.0f, 0x1.4d4c42p-28f,
     0.0f, 0x1.f783acp-109f, 0.0f, 0x1.b6dfd8p-91f, 0x1.3c671p-64f, 0x1.b778d2p-11f,
     0x1.256f1ep-19f, 0x1.a34a2ep-22f, 0.0f, 0x1.8f27e4p-28f, 0x1.5c7ea4p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.054528p-47f, 0x1.1f798p-17f, 0.0f, 0x1.305f86p-28f, 0.0f,
     0.0f, 0x1.a3c378p-18f, 0.0f, 0.0f, 0.0f, 0x1.9985fcp-18f, 0.0f, 0x1.ffb8b4p-41f,
     0.0f, 0x1.f5717ap-10f, 0.0f, 0x1.83945ap-15f, 0x1.7b125p-26f, 0.0f, 0.0f,
     0x1.c61a52p-115f, 0.0f, 0x1.c2f0dep-70f, 0.0f, 0.0f, 0.0f, 0x1.2a5b52p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ca0264p-34f, 0x1.3a6046p-50f, 0.0f, 0x1.9e0e4cp-33f,
     0x1.62a7f8p-40f, 0x1.a3c4f2p-76f, 0x1.673082p-66f, 0x1.2bf1b8p-125f, 0.0f,
     0x1.bf93e6p-67f, 0x1.62c1ccp-10f, 0.0f, 0x1.b4aafap-113f, 0x1.2d8dbep-71f, 0.0f,
     0x1.57283ap-116f, 0x1.d97decp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f474f8p-64f,
     0x1.4d4a56p-58f, 0.0f, 0x1.d47106p-59f, 0x1.9e3254p-116f, 0x1.49f20cp-73f, 0.0f,
     0.0f, 0x1.7c46c4p-35f, 0x1.0a9384p-62f, 0.0f, 0.0f, 0x1p0f, 0x1.97969p-103f,
     0x1.79887cp-6f, 0.0f, 0.0f, 0x1.dab804p-49f, 0x1.7919bep-39f, 0x1.d34f6cp-107f,
     0x1.b0c0ccp-60f, 0.0f, 0x1.e8f706p-57f, 0x1.33ba48p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94a8c4p-54f, 0.0f, 0x1.3774ccp-16f, 0.0f, 0x1.02c04p-107f, 0x1.98ff4ep-58f,
     0x1.2e3baap-121f, 0.0f, 0x1.22d9f4p-23f, 0.0f, 0x1.0078dp-17f, 0.0f,
     0x1.f3e908p-122f, 0x1.94e9f8p-97f, 0.0f, 0x1.8e1178p-37f, 0.0f, 0.0f,
     0x1.9a116p-36f, 0.0f, 0x1.2ddfe6p-12f, 0x1.5e560ep-79f, 0x1.2b541cp-96f,
     0x1.4602ccp-79f, 0x1.123ffap-116f, 0x1.6ecb66p-1f, 0.0f, 0x1.01a9d8p-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bc49bcp-30f, 0x1.b7b366p-65f, 0x1.70aac6p-115f,
     0x1.25622p-53f, 0x1.8552cp-46f, 0.0f, 0.0f, 0.0f, 0x1.0b0b94p-103f,
     0x1.6c6198p-75f, 0x1.751614p-81f, 0.0f, 0x1.b92258p-62f, 0.0f, 0x1.b8905ap-2f,
     0.0f, 0.0f, 0x1.fe41dap-51f, 0x1.45f922p-110f, 0x1.fb4a5ap-29f, 0x1.504e3cp-52f,
     0x1.f49ec2p-7f, 0x1.4c81a4p-61f, 0.0f, 0x1.bae1a8p-98f, 0.0f, 0x1.19bac8p-13f,
     0.0f, 0x1.c3a854p-19f, 0x1.fc4696p-72f, 0x1p0f, 0x1.b49f8cp-12f, 0x1.8d55eap-88f,
     0x1.1e32bp-95f, 0x1.36c2p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6424bep-92f,
     0x1.442486p-53f, 0x1.a6a82ep-3f, 0x1.2654fcp-107f, 0x1.aada3ep-33f,
     0x1.dc8bcp-46f, 0x1.510742p-67f, 0.0f, 0.0f, 0.0f, 0x1.fa7bd8p-80f,
     0x1.ded03p-51f, 0x1.c0e47p-83f, 0.0f, 0.0f, 0x1.9ef7d8p-41f, 0x1.cce672p-70f,
     0x1.342614p-46f, 0x1.6191b6p-39f, 0.0f, 0x1.706d74p-124f, 0x1.24056ep-116f, 0.0f,
     0x1.312dfap-53f, 0.0f, 0x1.1bf9fep-27f, 0x1.b20d8p-114f, 0.0f, 0x1.3ae8c4p-122f,
     0.0f, 0.0f, 0x1.1607c8p-78f, 0.0f, 0.0f, 0x1.0b4beep-81f, 0.0f, 0x1.b5e34p-2f,
     0.0f, 0x1.3811f8p-14f, 0x1.d7bfdcp-57f, 0x1.974efp-31f, 0x1.ecdcfap-122f, 0.0f,
     0x1.0e8c7ep-9f, 0x1.976f66p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9f59p-113f, 0.0f, 0x1.b71124p-91f, 0.0f, 0x1.996e7cp-78f, 0x1.be9bccp-55f,
     0x1.e7c63p-106f, 0x1.0f3f5p-30f, 0x1.9d45f8p-20f, 0.0f, 0x1.844c8p-7f,
     0x1.f3a9c6p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b52f6p-49f, 0.0f, 0.0f,
     0x1.d16becp-78f, 0x1.2973b2p-27f, 0.0f, 0.0f, 0x1.7e33eap-91f, 0.0f,
     0x1.fd0f0cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60d9c2p-84f, 0.0f, 0x1.6dbb5cp-125f,
     0.0f, 0x1.87557cp-42f, 0.0f, 0x1.681c44p-45f, 0x1.57a8fp-102f, 0x1.ebb9d6p-15f,
     0x1.febb8cp-49f, 0.0f, 0.0f, 0.0f, 0x1.bfd5c2p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c718cap-102f, 0.0f, 0x1.376e06p-29f, 0.0f, 0x1.919088p-123f,
     0x1.acfc2cp-100f, 0.0f, 0.0f, 0x1.9b5f2cp-24f, 0.0f, 0x1.3bcc94p-56f, 0.0f,
     0x1.110188p-92f, 0.0f, 0x1.a7b292p-11f, 0x1.50c696p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.158b44p-58f, 0x1.200f1ap-125f, 0x1.1ad65cp-11f, 0x1.2c6864p-4f,
     0x1.f006acp-48f, 0.0f, 0x1.670f36p-126f, 0x1.31e2f6p-121f, 0x1.57cc08p-95f, 0.0f,
     0.0f, 0x1.33fc48p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9099fp-28f, 0.0f, 0.0f,
     0x1.7200d2p-87f, 0.0f, 0x1.312cccp-14f, 0.0f, 0x1.3756a6p-121f, 0x1.d66b16p-90f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a443cp-65f, 0.0f, 0x1.59755ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.e6a7e8p-126f, 0.0f, 0.0f, 0x1.237058p-72f, 0.0f, 0x1.ee58f4p-76f, 0.0f,
     0x1.97a2fep-18f, 0x1.7c1d8ap-105f, 0x1.6c6918p-18f, 0x1.c34a28p-24f,
     0x1.7d9af8p-55f, 0.0f, 0.0f, 0x1.7cf186p-6f, 0x1.854218p-23f, 0.0f, 0.0f, 0.0f,
     0x1.a79292p-4f, 0x1.a9d848p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f02b6p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8471p-86f, 0x1.89a8a2p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b58f24p-121f, 0.0f, 0.0f, 0.0f, 0x1.c72842p-40f, 0.0f, 0.0f, 0x1.165734p-64f,
     0x1.760844p-95f, 0.0f, 0.0f, 0x1.0ecc52p-4f, 0x1.1b5c7ep-95f, 0x1.7dac22p-104f,
     0x1.0a67c6p-5f, 0x1.c92416p-38f, 0.0f, 0.0f, 0.0f, 0x1.8c4d98p-78f,
     0x1.8c41f8p-95f, 0.0f, 0.0f, 0.0f, 0x1.1e6804p-115f, 0x1.77db8cp-109f,
     0x1.9229c4p-55f, 0x1.6ec932p-124f, 0x1.23e2e6p-53f, 0x1.aa13dcp-12f, 0.0f,
     0x1.82fdaep-110f, 0.0f, 0x1.a4a53ap-14f, 0x1.c79ae6p-22f, 0x1.05ac38p-92f, 0.0f,
     0x1.c97354p-75f, 0.0f, 0.0f, 0x1.f8a56ep-96f, 0x1.d19a1ap-25f, 0x1.75b03p-73f,
     0x1.4e7b4ap-33f, 0x1.a374eap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16acdep-84f, 0.0f, 0x1.dfe178p-72f, 0.0f, 0x1.28b9aep-88f, 0.0f, 0.0f, 0.0f,
     0x1.807a1cp-118f, 0x1.8984e4p-6f, 0x1.313e9cp-37f, 0x1.3dbb76p-84f,
     0x1.d0de6p-39f, 0.0f, 0x1.b9c20ap-122f, 0x1.8f1aacp-35f, 0.0f, 0x1.246c3ep-115f,
     0x1.8c4006p-46f, 0x1.dc75f6p-118f, 0.0f, 0x1.4587cep-118f, 0.0f, 0.0f,
     0x1.9e7204p-75f, 0x1.8fef06p-66f, 0x1.425f7ap-120f, 0.0f, 0.0f, 0.0f,
     0x1.5a1e1cp-39f, 0x1.f9eebap-107f, 0x1.ba3efp-113f, 0.0f, 0.0f, 0.0f,
     0x1.3c5728p-96f, 0.0f, 0x1.fd493cp-98f, 0x1.672b9p-99f, 0x1.d05a5cp-95f, 0.0f,
     0.0f, 0x1.d26c14p-8f, 0x1.9e1e96p-41f, 0.0f, 0x1.a526eep-55f, 0.0f, 0.0f,
     0x1.f0efb6p-17f, 0x1.abb2eap-92f, 0.0f, 0x1.60bebep-119f, 0x1.b2ecd8p-93f,
     0x1.89a734p-11f, 0x1.f3dc72p-94f, 0x1.bfa6c6p-44f, 0.0f, 0.0f, 0x1.fdfc32p-32f,
     0.0f, 0x1.de76p-24f, 0x1.7c5776p-94f, 0x1.dc3f54p-70f, 0x1.74f32ep-92f, 0.0f,
     0.0f, 0x1.f8c1ecp-58f, 0x1.006af2p-23f, 0x1.7054eap-97f, 0.0f, 0.0f,
     0x1.520316p-74f, 0.0f, 0x1.8f0fb4p-28f, 0x1.e18e68p-55f, 0.0f, 0.0f, 0.0f,
     0x1.12c63cp-102f, 0.0f, 0.0f, 0x1.b4ac42p-90f, 0.0f, 0x1.bbca28p-11f,
     0x1.c621dep-119f, 0.0f, 0x1.50b5f4p-48f, 0x1.4a7c72p-90f, 0.0f, 0x1.d76c46p-44f,
     0.0f, 0x1.028878p-100f, 0x1.fff0cap-124f, 0.0f, 0x1.2cb85p-51f, 0x1.9beb12p-125f,
     0x1.8b409ap-28f, 0x1.84df9ap-21f, 0x1.79b56cp-59f, 0.0f, 0.0f, 0.0f,
     0x1.99d5a6p-52f, 0.0f, 0.0f, 0.0f, 0x1.ff88c8p-113f, 0.0f, 0x1.cf3b1ap-95f,
     0x1.c509d2p-28f, 0x1.75a908p-122f, 0.0f, 0.0f, 0.0f, 0x1.4518b2p-94f,
     0x1.24c4b6p-121f, 0.0f, 0x1.7771a2p-22f, 0x1.20d982p-61f, 0.0f, 0x1.535924p-77f,
     0x1.248beep-50f, 0.0f, 0.0f, 0x1.5f6edap-123f, 0.0f, 0x1.5d0558p-11f,
     0x1.86d4dap-14f, 0.0f, 0.0f, 0.0f, 0x1.40634ep-76f, 0x1.503d14p-88f,
     0x1.8b4712p-98f, 0x1.10fff8p-56f, 0.0f, 0.0f, 0.0f, 0x1.ea6904p-58f,
     0x1.14b7a2p-57f, 0x1.686f24p-86f, 0.0f, 0.0f, 0x1.ebd184p-38f, 0.0f,
     0x1.833032p-99f, 0x1.4b1dccp-96f, 0x1.1aabdep-32f, 0.0f, 0x1.5c973p-50f,
     0x1.ef3df6p-87f, 0x1.4db8fcp-60f, 0x1.41debep-117f, 0x1.87496ep-125f,
     0x1.0a7df6p-36f, 0.0f, 0x1.6fdbcp-97f, 0.0f, 0.0f, 0x1.b718c2p-28f,
     0x1.19ab8ap-34f, 0.0f, 0x1.d8c13p-20f, 0x1.73de68p-16f, 0.0f, 0.0f, 0.0f,
     0x1.6291f2p-46f
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
            tmp1 = Sleef_expm1f4_u10kvx(tmp0);
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
    printf("Sleef_expm1f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_expm1f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
