/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf1_u35purecfma.c --function \
 *     Sleef_finz_acosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.370c0ep-94f, 0x1.d2f2ccp-41f, 0.0f, 0x1.c16912p-4f, 0.0f, 0.0f,
     0x1.ac3236p-28f, 0x1.de26e2p-33f, 0.0f, 0.0f, 0x1.483eep-1f, 0.0f, 0.0f, 0.0f,
     0x1.0732b2p-85f, 0.0f, 0.0f, 0x1.f0c0cp-21f, 0x1.0e2c0cp-38f, 0x1.809f2cp-88f,
     0.0f, 0.0f, 0x1.a312f8p-113f, 0x1.0f2a58p-42f, 0.0f, 0.0f, 0x1.34304cp-77f,
     0x1.135de8p-49f, 0x1.ef789p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.76a92ap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e99a2p-38f, 0.0f,
     0x1.a8539p-5f, 0x1.1c8f08p-80f, 0x1.cba08cp-102f, 0.0f, 0x1.e36086p-40f,
     0x1.037de8p-29f, 0x1.96625ep-82f, 0x1.bf6e0ep-19f, 0.0f, 0x1.f70d78p-92f,
     0x1.c2030cp-52f, 0.0f, 0.0f, 0x1.f6a0b6p-96f, 0.0f, 0x1.e34254p-9f,
     0x1.637ac6p-4f, 0.0f, 0.0f, 0x1.9b40f6p-11f, 0.0f, 0x1.c2ba7ep-9f,
     0x1.30dceap-108f, 0x1.af0c7p-57f, 0.0f, 0x1.8e3908p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45c72p-63f, 0x1.cf2416p-28f, 0.0f, 0x1.29dc22p-36f, 0x1.79d81p-77f,
     0x1.34382ep-95f, 0x1.04b44ep-14f, 0.0f, 0.0f, 0x1.9c1c82p-97f, 0.0f,
     0x1.1a8316p-79f, 0x1.99d9f6p-74f, 0.0f, 0.0f, 0x1.3a2922p-110f, 0.0f,
     0x1.84c67p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24da2ap-43f, 0.0f,
     0x1.c3262ap-109f, 0.0f, 0.0f, 0x1.f96c94p-61f, 0x1.72bc54p-80f, 0x1.5a815p-20f,
     0.0f, 0x1.9a1f48p-56f, 0.0f, 0x1.8f3796p-2f, 0.0f, 0x1.cbf1e4p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5b1826p-86f, 0x1.a8efc4p-64f, 0.0f, 0x1.294c3p-16f, 0.0f,
     0x1.ac2604p-84f, 0x1.8e3292p-4f, 0x1.b48d6p-120f, 0x1.e8e87ap-14f, 0.0f,
     0x1.42f96ep-84f, 0.0f, 0.0f, 0x1.46074p-46f, 0x1.732526p-124f, 0.0f, 0.0f, 0.0f,
     0x1.5e0584p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfe802p-56f, 0.0f, 0x1.abd99ap-31f,
     0.0f, 0x1.be826cp-49f, 0x1.c2a1e4p-21f, 0x1.299a8ep-40f, 0x1.fb7fdp-17f, 0.0f,
     0x1.db6f48p-83f, 0.0f, 0x1.99f1b2p-48f, 0x1.d56dcep-31f, 0.0f, 0x1.ba7f14p-20f,
     0.0f, 0.0f, 0x1.0e2abp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21a27ep-56f, 0x1.c4220cp-103f, 0.0f, 0.0f, 0x1.7ee282p-84f, 0.0f,
     0x1.c0c5a2p-59f, 0x1.d0b972p-18f, 0x1.3d0dcep-116f, 0x1.e0363p-99f,
     0x1.5f3b4cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c5996p-75f, 0.0f, 0.0f, 0.0f,
     0x1.5e59aap-33f, 0.0f, 0x1.9d9f52p-72f, 0x1.cff22cp-84f, 0x1.c292ccp-73f, 0.0f,
     0x1.cfa626p-102f, 0x1.29df12p-81f, 0x1.223fc8p-104f, 0x1.9e655p-11f, 0.0f,
     0x1.311dd2p-45f, 0.0f, 0x1.24953ep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93a384p-69f,
     0.0f, 0x1.e0ee26p-6f, 0x1.6e143ap-89f, 0.0f, 0x1.863b64p-126f, 0x1.1d5a7ap-14f,
     0.0f, 0.0f, 0x1.b4cb42p-70f, 0x1.f8e5p-100f, 0.0f, 0x1.7bf918p-70f, 0.0f,
     0x1.6a1f7ep-51f, 0x1.8e2f6cp-83f, 0x1.40c3e4p-111f, 0x1.08b234p-62f,
     0x1.069fc6p-62f, 0.0f, 0x1.b857fp-112f, 0.0f, 0x1.d1fec2p-45f, 0.0f, 0.0f, 0.0f,
     0x1.5fa1bap-54f, 0x1.66390cp-75f, 0x1.0baf68p-22f, 0x1.256964p-14f,
     0x1.6db27cp-86f, 0x1.2db4ap-70f, 0.0f, 0.0f, 0.0f, 0x1.9b8d3p-96f, 0.0f,
     0x1.b3a554p-114f, 0x1.26d2dep-47f, 0x1.619514p-117f, 0x1.0d0a18p-26f,
     0x1.2ce73ep-20f, 0.0f, 0.0f, 0x1.5b6fe8p-124f, 0x1.b02554p-12f, 0.0f, 0.0f, 0.0f,
     0x1.15ac02p-38f, 0x1.0ec4bep-126f, 0.0f, 0x1.7ecf7ap-73f, 0.0f, 0x1.c65bacp-117f,
     0x1.ba09b6p-107f, 0.0f, 0x1.46b836p-123f, 0.0f, 0x1.c475eap-88f, 0.0f,
     0x1.be3d56p-2f, 0.0f, 0x1.155c22p-3f, 0x1.4776b8p-7f, 0.0f, 0.0f, 0.0f,
     0x1.7f86b8p-44f, 0.0f, 0x1.803d54p-104f, 0.0f, 0.0f, 0.0f, 0x1.434aap-1f,
     0x1.292232p-63f, 0.0f, 0.0f, 0.0f, 0x1.23b902p-88f, 0x1.f3673p-119f, 0.0f, 0.0f,
     0x1.08a79cp-120f, 0x1.915ff4p-40f, 0x1.ae228ap-107f, 0x1.63786ap-53f, 0.0f,
     0x1.67d60ep-88f, 0x1.c079c6p-124f, 0.0f, 0x1.ca77ep-6f, 0x1.4db73cp-31f, 0.0f,
     0.0f, 0.0f, 0x1.dfdfdcp-86f, 0x1.98a2a6p-57f, 0x1.a6f0dep-12f, 0.0f,
     0x1.536428p-65f, 0x1.296a16p-71f, 0.0f, 0x1.3ce1ep-28f, 0.0f, 0x1.24db02p-119f,
     0.0f, 0x1.51d2aap-14f, 0.0f, 0x1.d961cep-53f, 0x1.fa4e56p-62f, 0x1.c9701cp-42f,
     0x1.483a8cp-13f, 0.0f, 0x1.25cb5p-7f, 0.0f, 0.0f, 0.0f, 0x1.fe04b6p-63f, 0.0f,
     0x1.85f9cap-91f, 0x1.4b0ee6p-78f, 0x1.3b8b98p-21f, 0.0f, 0.0f, 0x1.6db1a6p-86f,
     0.0f, 0.0f, 0x1.ec5f04p-22f, 0x1.11eb0ep-100f, 0.0f, 0.0f, 0x1.7834c4p-55f,
     0x1.c87b1ap-10f, 0x1.d356cp-51f, 0.0f, 0x1.c8250ep-51f, 0x1.cde47cp-23f, 0.0f,
     0.0f, 0x1.c3c5f4p-60f, 0.0f, 0x1.263294p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d02dp-23f, 0x1.bddcb4p-23f, 0x1.afd006p-39f, 0.0f, 0.0f, 0x1.256556p-9f,
     0x1.f5e976p-35f, 0.0f, 0x1.4a57b8p-21f, 0x1.56ae46p-101f, 0.0f, 0x1.f9d3e4p-110f,
     0.0f, 0.0f, 0x1.50cbd4p-38f, 0.0f, 0.0f, 0x1.6e90c4p-22f, 0.0f, 0x1.b4e6fcp-85f,
     0x1.afd5e6p-23f, 0.0f, 0.0f, 0x1.ba2764p-76f, 0x1.ff465ap-62f, 0x1.59a7b6p-77f,
     0.0f, 0x1.d92808p-70f, 0.0f, 0.0f, 0x1.256434p-97f, 0.0f, 0.0f, 0x1.2827aep-7f,
     0x1.98f41cp-110f, 0.0f, 0x1.e7d24cp-117f, 0x1.556374p-57f, 0x1.676278p-93f,
     0x1.06eb72p-1f, 0x1.9eb4f4p-105f, 0.0f, 0x1.030e06p-94f, 0x1.56fb0cp-48f, 0.0f,
     0.0f, 0.0f, 0x1.cd7408p-58f, 0.0f, 0.0f, 0x1.2882d6p-36f, 0.0f, 0.0f,
     0x1.cdebc6p-30f, 0.0f, 0x1.8f99c4p-91f, 0x1.d3936cp-19f, 0.0f, 0.0f,
     0x1.c8d0dcp-86f, 0.0f, 0x1.4c0c64p-31f, 0.0f, 0x1.4ead1p-59f, 0x1.180754p-12f,
     0x1.bbf196p-70f, 0x1.48213p-96f, 0x1.776848p-118f, 0x1.4869b4p-37f, 0.0f,
     0x1.182698p-50f, 0x1.1edb06p-99f, 0x1.06c1cp-73f, 0x1.da0c26p-50f, 0.0f,
     0x1.030bcp-26f, 0x1.38ac42p-57f, 0x1.2e16c2p-97f, 0.0f, 0.0f, 0x1.b6b2c4p-75f,
     0.0f, 0x1.049a5ap-120f, 0x1.1a02a8p-8f, 0x1.2ce5aap-75f, 0x1.8d553ap-34f, 0.0f,
     0.0f, 0.0f, 0x1.1b025cp-124f, 0.0f, 0x1.de819ap-21f, 0x1.e8fb78p-22f, 0.0f, 0.0f,
     0x1.a5f13ep-113f, 0x1.1ca49ep-89f, 0x1.1500bep-66f, 0.0f, 0x1.987c8cp-49f, 0.0f,
     0.0f, 0x1.95cd7ap-5f, 0.0f, 0x1.756e72p-74f, 0.0f, 0x1p0f, 0.0f,
     0x1.416eaep-123f, 0x1.e00bf4p-11f, 0.0f, 0x1.33e3eep-121f, 0.0f, 0x1.3306f2p-13f,
     0.0f, 0.0f, 0.0f, 0x1.dec64cp-22f, 0x1.425132p-110f, 0x1.c24de6p-96f, 0.0f, 0.0f,
     0x1.daa6c8p-118f, 0.0f, 0.0f, 0.0f, 0x1.50a70cp-43f, 0x1.c39822p-59f,
     0x1.1b81bcp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff2554p-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f113d2p-67f, 0x1.b8952ap-83f, 0.0f, 0x1.c5510cp-119f,
     0x1.b656d6p-42f, 0.0f, 0.0f, 0x1.4b7344p-82f, 0.0f, 0x1.97f676p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.50542ap-110f, 0.0f, 0.0f, 0x1.13d176p-72f, 0x1.53a60ep-78f,
     0x1.1a5e46p-38f, 0x1.041c5cp-86f, 0x1.61ee78p-4f, 0.0f, 0x1.baaaa2p-97f,
     0x1.b186f4p-113f, 0.0f, 0x1.88ae4ep-16f, 0x1.701424p-80f, 0.0f, 0.0f,
     0x1.abbe28p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8093a8p-106f, 0x1.22a962p-72f, 0.0f,
     0x1.437fb2p-84f, 0x1.02e57ap-40f, 0.0f, 0x1.0554dp-37f, 0.0f, 0x1.038ebp-2f,
     0.0f, 0x1.cf642ep-3f, 0.0f, 0.0f, 0x1.1903a2p-119f, 0.0f, 0.0f, 0.0f,
     0x1.628c8p-69f, 0.0f, 0.0f, 0x1.6e0ee4p-91f, 0x1.08b07ap-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7adb1cp-86f, 0x1.3b803p-40f, 0.0f, 0x1.fc021cp-47f,
     0x1.e1e9c2p-84f, 0.0f, 0x1.9fa896p-34f, 0x1.5ead08p-76f, 0x1.bd2926p-18f,
     0x1.35a658p-42f, 0.0f, 0.0f, 0.0f, 0x1.a1b626p-48f, 0x1.5fa3f8p-9f, 0.0f, 0.0f,
     0x1.04f244p-103f, 0.0f, 0x1.98041ap-88f, 0.0f, 0.0f, 0.0f, 0x1.eeccbcp-17f,
     0x1.48f48cp-47f, 0x1.d3e79cp-95f, 0.0f, 0x1.8525bep-19f, 0.0f, 0x1.365828p-82f,
     0.0f, 0x1.4c141p-69f, 0x1.26575p-104f, 0.0f, 0.0f, 0x1.62d67ap-20f, 0.0f, 0.0f,
     0x1.38a7d8p-52f, 0.0f, 0x1.97fe06p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fa69ap-92f, 0x1.d47fdcp-16f, 0x1.4f575ap-59f, 0x1p0f, 0x1.a853cap-62f, 0.0f,
     0x1.273394p-68f, 0x1.365bb8p-93f, 0.0f, 0x1.508224p-5f, 0x1.44ac2cp-56f, 0.0f,
     0x1.23eebp-54f, 0.0f, 0.0f, 0x1.bd50aap-65f, 0x1.23a3eap-92f, 0.0f,
     0x1.18ba18p-20f, 0x1.3abc96p-117f, 0.0f, 0x1.d8322p-4f, 0.0f, 0x1.9dd8eep-92f,
     0x1.728134p-54f, 0.0f, 0x1.40cf8cp-78f, 0.0f, 0x1.2ecb6ap-64f, 0.0f,
     0x1.dac62ap-101f, 0x1.b7810ep-98f, 0.0f, 0x1.2d095p-105f, 0.0f, 0x1.dee0d2p-2f,
     0x1.8a6b1cp-35f, 0x1.296764p-81f, 0x1.2ea18cp-29f, 0x1.afda6ep-84f, 0.0f,
     0x1.b08e7p-49f, 0.0f, 0x1.a02806p-65f, 0.0f, 0x1.cf4386p-110f, 0.0f, 0.0f,
     0x1.83064ap-126f, 0.0f, 0x1.b88422p-78f, 0.0f, 0.0f, 0.0f, 0x1.879468p-113f,
     0.0f, 0x1.1223ecp-53f, 0x1.3d3beap-125f, 0x1.2ea66ap-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54ab88p-89f, 0.0f, 0x1.dea838p-107f, 0x1.a76e56p-14f, 0x1.5392e4p-104f, 0.0f,
     0.0f, 0x1.205f62p-70f, 0x1.e87c3cp-76f, 0.0f, 0x1.af0f2cp-110f, 0x1.a6bdd6p-114f,
     0x1.142986p-6f, 0x1.303ad2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16c82p-15f,
     0x1.5891a2p-25f, 0.0f, 0.0f, 0x1.751968p-97f, 0x1.bc5874p-57f, 0x1.0a337ep-121f,
     0.0f, 0.0f, 0x1.f8c78cp-81f, 0x1.26d1b6p-7f, 0.0f, 0.0f, 0x1.5834b4p-114f,
     0x1.effaa4p-120f, 0.0f, 0.0f, 0x1.08f8c8p-43f, 0.0f, 0.0f, 0x1.71ceb2p-38f, 0.0f,
     0x1.21d4cap-32f, 0x1.2ff448p-63f, 0x1.e29a72p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.035964p-85f, 0x1.cff884p-33f, 0.0f, 0.0f, 0x1.5053e2p-96f, 0x1.0908d2p-29f,
     0x1.8c4ffcp-49f, 0x1.c4e42ap-19f, 0x1.424696p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0428bp-105f, 0.0f, 0.0f, 0x1.161e02p-55f, 0.0f, 0.0f, 0.0f, 0x1.a6d904p-107f,
     0.0f, 0x1.656d1ep-51f, 0x1.896aacp-1f, 0.0f, 0.0f, 0x1.99cd62p-10f,
     0x1.7cb83cp-126f, 0x1.ef9fecp-11f, 0.0f, 0.0f, 0x1.2763eap-106f, 0.0f,
     0x1.eab836p-102f, 0.0f, 0.0f, 0x1.8b48aep-70f, 0.0f, 0x1.83f40ap-91f,
     0x1.d69fe4p-94f, 0.0f, 0.0f, 0x1.ef8ffp-123f, 0x1.b489fp-33f, 0x1.6964a4p-123f,
     0.0f, 0.0f, 0.0f, 0x1.f6p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.574f7ap-51f,
     0x1.20cf38p-85f, 0.0f, 0x1.303142p-15f, 0.0f, 0x1.235d3p-120f, 0.0f, 0.0f,
     0x1.e520a2p-17f, 0x1.9fa81ap-64f, 0.0f, 0x1.a03098p-41f, 0x1.b4fcccp-50f,
     0x1.02109ep-108f, 0.0f, 0.0f, 0.0f, 0x1.9a7808p-51f, 0x1.d9c336p-106f, 0.0f,
     0x1.bececp-67f, 0.0f, 0x1.b14fbcp-27f, 0.0f, 0x1.bc757ep-33f, 0.0f, 0.0f, 0.0f,
     0x1.e57caep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c66adap-43f, 0.0f,
     0x1.5d7d5p-115f, 0x1.de4d8p-106f, 0.0f, 0x1.0cea4ap-61f, 0x1.6471d8p-114f,
     0x1.fd6e16p-16f, 0.0f, 0x1.b002c6p-24f, 0.0f, 0.0f, 0x1.ea0b6ep-61f,
     0x1.dd42ap-92f, 0.0f, 0x1.0334b2p-96f, 0x1.d69cb6p-70f, 0.0f, 0.0f,
     0x1.6c8caap-37f, 0.0f, 0.0f, 0x1.2c97eep-76f, 0x1.6533c2p-37f, 0x1.8517dap-13f,
     0x1.3997c8p-118f, 0.0f, 0.0f, 0.0f, 0x1.aa4212p-126f, 0x1.0f0af8p-108f,
     0x1.1503aep-52f, 0.0f, 0x1.abf74cp-8f, 0x1.5deecp-91f, 0x1.cbf814p-37f,
     0x1.5931fap-77f, 0.0f, 0x1.639376p-15f, 0x1.7cd494p-23f, 0.0f, 0x1.018c44p-92f,
     0x1.c198d8p-113f, 0x1.b8774p-55f, 0x1.9d56dcp-95f, 0x1.fd91e4p-54f, 0.0f,
     0x1.8dc5fcp-56f, 0x1.b2af68p-109f, 0x1.9c535ep-100f, 0.0f, 0.0f, 0x1.bb814p-46f,
     0x1.29cbcep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc8c98p-45f, 0.0f,
     0x1.edda3ep-1f, 0.0f, 0.0f, 0.0f, 0x1.b09096p-48f, 0x1.7e39fap-122f, 0.0f, 0.0f,
     0x1.16d7c8p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5c7cep-27f, 0.0f, 0x1.4c69d2p-20f,
     0x1.e9da1p-33f, 0.0f, 0.0f, 0.0f, 0x1.5ee76p-9f, 0.0f, 0x1.90f91ap-97f,
     0x1.3b1016p-27f, 0.0f, 0.0f, 0x1.531f9ep-22f, 0x1.60462ap-61f, 0x1.dd88d2p-16f,
     0.0f, 0x1.74c156p-92f, 0.0f, 0x1.58fa6ep-74f, 0x1.c93d7ep-102f, 0.0f,
     0x1.7c085ap-105f, 0.0f, 0.0f, 0.0f, 0x1.949204p-25f, 0x1.0b588p-88f, 0.0f,
     0x1.9f35bap-22f, 0x1.e979b2p-4f, 0x1.8a39d6p-46f, 0x1.23844cp-60f, 0.0f,
     0x1.e4a926p-82f, 0.0f, 0x1.463dfap-89f, 0.0f, 0.0f, 0x1.dd7612p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.85a5bap-53f, 0.0f, 0.0f, 0.0f, 0x1.55dd3p-46f, 0.0f,
     0x1.872e74p-98f, 0.0f, 0x1.788462p-96f, 0.0f, 0x1.62553ap-74f, 0x1.c6cfc6p-66f,
     0.0f, 0x1.35df38p-93f, 0x1.de5b12p-76f, 0x1.13d168p-113f, 0.0f, 0x1.0662d4p-30f,
     0.0f, 0.0f, 0x1.39bbfep-120f, 0x1.bf6f58p-17f, 0x1.bb956cp-103f, 0.0f, 0.0f,
     0x1.02c7f8p-8f, 0.0f, 0x1.18bf7cp-17f, 0x1.13d71p-48f, 0x1.37152ap-42f, 0.0f,
     0.0f, 0.0f, 0x1.28586ep-46f, 0.0f, 0.0f, 0.0f, 0x1.1900bcp-26f, 0.0f,
     0x1.30082p-62f, 0x1.64cf66p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5c302p-9f,
     0x1.a9f8dcp-76f, 0.0f, 0.0f, 0x1.0ddc38p-108f, 0x1.4b8cd6p-113f, 0x1.5c6046p-29f,
     0x1.417154p-3f, 0.0f, 0.0f, 0.0f, 0x1.7b46fap-100f, 0.0f, 0x1.9c12fep-36f, 0.0f,
     0x1.101b8cp-62f, 0.0f, 0x1.b9c942p-77f, 0.0f, 0.0f, 0.0f, 0x1.1e0f8ap-63f,
     0x1.61b44cp-66f, 0.0f, 0x1.9c4c64p-12f, 0.0f, 0x1.96834cp-8f, 0.0f,
     0x1.89be4p-33f, 0x1.543802p-10f, 0.0f, 0x1.1fd87cp-114f, 0x1.babb7ep-70f, 0.0f,
     0x1.6cf38cp-88f, 0.0f, 0.0f, 0x1.ab10bcp-35f
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
            tmp1 = Sleef_finz_acosf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_acosf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
