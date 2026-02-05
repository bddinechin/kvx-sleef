/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f1_u10purecfma.c --function \
 *     Sleef_finz_log2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.6e1c64p-105f, 0x1.9c2cc8p-50f, 0.0f, 0x1.f62308p-61f,
     0x1.065d6cp-81f, 0.0f, 0.0f, 0x1.9de7a4p-64f, 0.0f, 0.0f, 0x1.d55016p-69f, 0.0f,
     0x1.937aaap-82f, 0x1.1f6f8cp-76f, 0x1.ea8e2p-30f, 0x1.89c006p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ae31eap-98f, 0.0f, 0x1.09ce12p-62f, 0x1.33890cp-8f, 0.0f,
     0x1.97233cp-116f, 0x1.f20d0cp-23f, 0x1.d7f534p-1f, 0x1.7685d6p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6ec81cp-55f, 0.0f, 0.0f, 0x1.27c148p-114f, 0.0f,
     0x1.8f73dap-71f, 0x1.a3ae7ep-119f, 0.0f, 0x1.c15ddap-44f, 0x1.4737fep-122f,
     0x1.0252cp-110f, 0.0f, 0.0f, 0x1.c8786ep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93cd5ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de2174p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d3fd4p-3f,
     0x1.b528f4p-59f, 0.0f, 0x1.5c8cc4p-61f, 0x1.a7389cp-99f, 0.0f, 0x1.17d412p-2f,
     0.0f, 0.0f, 0.0f, 0x1.c49be8p-40f, 0x1.cea646p-19f, 0x1.1cdf7cp-72f, 0.0f,
     0x1.e95f8ap-82f, 0x1.864ba6p-85f, 0x1.99914p-25f, 0x1.91cf78p-42f,
     0x1.0e8972p-91f, 0x1.6b40d4p-28f, 0.0f, 0x1.f5659ap-37f, 0.0f, 0x1.de062ep-45f,
     0x1.8d2856p-77f, 0x1.433c48p-121f, 0x1.0ee14p-81f, 0x1.be9458p-102f, 0.0f,
     0x1.07e5cep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16fb68p-15f, 0.0f, 0x1.b5dc4ep-78f,
     0x1.daefd4p-93f, 0.0f, 0.0f, 0x1.c866eep-83f, 0x1.2c503cp-9f, 0x1.df9dc6p-88f,
     0x1.9fae1ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edfd98p-39f,
     0x1.c91efcp-62f, 0.0f, 0x1.cf0c84p-122f, 0x1.6afb1cp-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49d5fep-15f, 0.0f, 0.0f, 0x1.8321e2p-87f, 0x1.c76724p-109f, 0.0f, 0x1p0f,
     0x1.dc4324p-17f, 0.0f, 0.0f, 0.0f, 0x1.c93adep-56f, 0.0f, 0x1.3ea5e4p-75f,
     0x1.cc4fcap-28f, 0x1.744268p-38f, 0.0f, 0x1.a6c44p-125f, 0x1.887c56p-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1124c4p-22f, 0x1.cd251ap-60f, 0.0f, 0.0f, 0x1.47691p-92f,
     0.0f, 0.0f, 0.0f, 0x1.3c7654p-92f, 0.0f, 0x1.781f8ep-116f, 0x1.dd4308p-110f,
     0x1.0c7334p-110f, 0x1.caa90ap-125f, 0x1.059efcp-41f, 0x1.ffcd52p-61f, 0.0f,
     0x1.dd780ap-122f, 0x1.f6fe38p-29f, 0x1.42d6cp-125f, 0x1.fc3e1p-116f,
     0x1.1555p-82f, 0x1.e19362p-125f, 0x1.9a1b1ap-61f, 0.0f, 0x1.6fbf0ep-19f,
     0x1.6d39d8p-113f, 0x1.31567ap-73f, 0x1.c952c6p-17f, 0.0f, 0.0f, 0.0f,
     0x1.eed9e2p-34f, 0x1.296c2ep-54f, 0.0f, 0.0f, 0x1.d0d31p-45f, 0.0f,
     0x1.09efd4p-95f, 0x1.e0b92ep-121f, 0.0f, 0x1.99d2f6p-65f, 0x1.dd2da6p-20f,
     0x1.39d556p-60f, 0.0f, 0x1.75c7bap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.63cb2ap-36f, 0x1.e3601ap-46f, 0.0f, 0x1.82c408p-34f,
     0x1.4d7722p-122f, 0.0f, 0.0f, 0.0f, 0x1.092c32p-26f, 0.0f, 0.0f, 0x1.d23f74p-27f,
     0x1.c57856p-53f, 0.0f, 0.0f, 0.0f, 0x1.9a870cp-113f, 0x1.512d66p-41f,
     0x1.731f0cp-85f, 0x1.95e9ep-102f, 0x1.10e1fep-15f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.7abd24p-94f, 0x1p0f, 0.0f, 0x1.5fcf3cp-50f, 0.0f, 0.0f, 0.0f,
     0x1.f7baf2p-99f, 0.0f, 0x1.cc858ep-39f, 0x1.f95248p-81f, 0.0f, 0x1.0afd0ap-45f,
     0x1.a713dcp-5f, 0x1.b27748p-71f, 0x1.8385d4p-32f, 0x1.b66b3ap-124f,
     0x1.5171e8p-66f, 0x1.6ab98p-16f, 0x1.f81b6ep-76f, 0.0f, 0.0f, 0x1.abd246p-82f,
     0x1.c11e24p-37f, 0.0f, 0x1.7c7bb8p-27f, 0.0f, 0.0f, 0x1.712024p-30f,
     0x1.0c6404p-38f, 0x1.15dbb6p-72f, 0x1.e5aff2p-54f, 0.0f, 0x1.abf336p-76f, 0.0f,
     0x1.72169p-67f, 0.0f, 0.0f, 0.0f, 0x1.0bf9fep-125f, 0x1.c1a34ep-27f,
     0x1.ac03fep-79f, 0.0f, 0.0f, 0x1.8a9596p-96f, 0.0f, 0x1.b1c386p-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.222106p-46f, 0.0f, 0.0f, 0.0f, 0x1.803458p-110f,
     0x1.951f86p-108f, 0x1p0f, 0.0f, 0.0f, 0x1.9d70b4p-7f, 0x1.f3b1d8p-44f,
     0x1.c8489cp-68f, 0.0f, 0.0f, 0.0f, 0x1.dc26b4p-33f, 0.0f, 0x1.7afcd4p-91f,
     0x1.fa584cp-6f, 0x1.78e486p-109f, 0.0f, 0x1.b3c268p-42f, 0.0f, 0x1.65b484p-123f,
     0x1.87cd68p-39f, 0.0f, 0x1.c1799p-46f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.6bd7aap-126f, 0x1.ee8f6ep-108f, 0x1.c5256ep-36f, 0x1.17ce78p-18f,
     0x1.97d62ap-111f, 0.0f, 0x1.81947cp-19f, 0x1.6bc5c8p-63f, 0x1.093a5p-36f,
     0x1.1e9754p-51f, 0.0f, 0x1.5a57b4p-4f, 0.0f, 0.0f, 0.0f, 0x1.125ad2p-91f,
     0x1.d583bap-29f, 0.0f, 0x1.58144cp-109f, 0.0f, 0.0f, 0x1.138c84p-69f, 0.0f,
     0x1.3f248cp-48f, 0x1.aa3468p-55f, 0.0f, 0x1.bfc632p-67f, 0x1.a5e916p-120f, 0.0f,
     0.0f, 0x1.0d61bcp-108f, 0x1.1e022cp-95f, 0x1.bcdd0ap-71f, 0.0f, 0x1.16467ap-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d68194p-4f, 0.0f, 0x1.1b667cp-61f,
     0x1.4a2faep-110f, 0x1.5dea5ap-124f, 0x1.d7a642p-111f, 0x1.5b4018p-108f, 0.0f,
     0x1.883812p-121f, 0x1.10154p-107f, 0.0f, 0.0f, 0x1.6d331cp-49f, 0.0f, 0.0f, 0.0f,
     0x1.207d3ep-84f, 0x1.36b73cp-42f, 0.0f, 0x1.5607f2p-13f, 0.0f, 0.0f,
     0x1.3bfcdp-53f, 0x1.607cb8p-86f, 0.0f, 0.0f, 0x1.6d5e5p-42f, 0.0f,
     0x1.28c50cp-73f, 0.0f, 0.0f, 0x1.5ebf0ep-117f, 0x1.516bacp-68f, 0x1.672b52p-32f,
     0x1.63256cp-23f, 0x1.7ac43ap-11f, 0.0f, 0x1.cca91ep-16f, 0x1.f6d8bcp-14f, 0.0f,
     0.0f, 0x1.e9dc5cp-15f, 0.0f, 0x1.b4f1ccp-111f, 0.0f, 0.0f, 0x1.ade246p-59f, 0.0f,
     0.0f, 0x1.e3ee46p-54f, 0x1.c947ccp-39f, 0x1.f4e146p-43f, 0x1.1a2a54p-104f,
     0x1.603d34p-58f, 0x1.c5ea7ap-11f, 0.0f, 0.0f, 0x1.703b8ep-106f, 0x1.115912p-42f,
     0x1.757eecp-103f, 0x1.6c3664p-65f, 0.0f, 0x1.548356p-90f, 0x1.39aafap-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.334758p-43f, 0.0f, 0.0f, 0x1.7581b2p-22f, 0.0f, 0.0f,
     0x1.84d01cp-121f, 0.0f, 0x1.b561f8p-99f, 0x1.a9617p-24f, 0x1.5b2488p-51f,
     0x1.894c2cp-30f, 0.0f, 0x1.75be06p-103f, 0.0f, 0x1.cf91b6p-4f, 0x1.6292acp-69f,
     0x1.e3d04cp-90f, 0x1.5b4c78p-68f, 0.0f, 0.0f, 0x1.99c2a6p-123f, 0.0f, 0.0f, 0.0f,
     0x1.fe23aap-105f, 0.0f, 0x1.083e7cp-15f, 0.0f, 0.0f, 0x1.ee2428p-89f,
     0x1.b388a2p-87f, 0x1.afcb86p-80f, 0x1.521da8p-39f, 0x1.c289bp-16f,
     0x1.e39e26p-16f, 0.0f, 0.0f, 0x1.ff34fcp-64f, 0.0f, 0x1.8a1592p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c2a62p-21f, 0.0f, 0x1.4a10aep-119f, 0x1.39019p-42f, 0.0f, 0.0f,
     0x1.e12f0cp-42f, 0x1.ce29a2p-35f, 0x1.6387c6p-54f, 0.0f, 0x1.dc30b4p-63f, 0.0f,
     0.0f, 0x1.c63566p-13f, 0x1.a7ea0ep-77f, 0x1.f332aep-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.45ba1p-86f, 0.0f, 0.0f, 0x1.2fbbap-69f, 0x1.cbff1ap-48f, 0.0f,
     0.0f, 0x1.415234p-111f, 0x1.90255cp-98f, 0x1.76ce94p-122f, 0.0f,
     0x1.9a5c28p-102f, 0.0f, 0x1.37bf2ap-14f, 0.0f, 0x1.2cfce4p-123f, 0x1.91908p-89f,
     0.0f, 0x1.2002fp-42f, 0.0f, 0x1.91df3cp-121f, 0x1.0c7ba6p-113f, 0.0f,
     0x1.8adc24p-83f, 0.0f, 0x1.d68ea2p-18f, 0x1.1125cp-96f, 0x1.db5d06p-35f,
     0x1.bf6d94p-103f, 0x1.5383b2p-68f, 0.0f, 0x1.c8d73ap-99f, 0.0f, 0x1.222cd4p-32f,
     0.0f, 0x1.23a044p-124f, 0x1.d4738p-107f, 0x1.5bc318p-9f, 0.0f, 0x1.9899dcp-92f,
     0x1.69802cp-50f, 0.0f, 0.0f, 0x1.9a07b6p-63f, 0.0f, 0x1.6864bp-64f,
     0x1.5e3fb4p-41f, 0x1.7a8e4ep-28f, 0.0f, 0.0f, 0x1.34b83ep-31f, 0x1.8803f4p-83f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.587288p-119f, 0x1.47e764p-60f,
     0x1.694726p-74f, 0x1.be389ep-28f, 0.0f, 0x1p0f, 0x1.32bbbep-121f,
     0x1.fc4874p-125f, 0.0f, 0x1.319ca4p-32f, 0x1p0f, 0x1.4add02p-74f, 0x1.d9f48p-70f,
     0.0f, 0.0f, 0.0f, 0x1.724b4ap-125f, 0x1.ae0becp-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9a7fbcp-68f, 0x1.d3aae6p-25f, 0.0f, 0x1.2a715p-60f,
     0x1.939676p-27f, 0.0f, 0x1.1f89ap-13f, 0x1.a4c56cp-83f, 0.0f, 0.0f,
     0x1.3dfd2ep-42f, 0.0f, 0x1.42db24p-89f, 0x1.6afde6p-96f, 0x1.b5a08cp-122f,
     0x1.c51e38p-60f, 0.0f, 0.0f, 0x1.73bb4ap-93f, 0x1.90ebe4p-90f, 0x1.f38d86p-39f,
     0x1.c641b8p-81f, 0x1.1e7ea2p-103f, 0.0f, 0.0f, 0x1.731a88p-81f, 0x1.6c7db6p-50f,
     0.0f, 0.0f, 0x1.d045c6p-65f, 0.0f, 0.0f, 0.0f, 0x1.538ff4p-14f, 0x1.205cdap-66f,
     0x1.5c24ccp-53f, 0x1.ab863cp-19f, 0x1.452ae6p-93f, 0.0f, 0.0f, 0x1.b71c76p-120f,
     0.0f, 0.0f, 0.0f, 0x1.e1dd1p-57f, 0x1.f5b30ap-101f, 0.0f, 0.0f, 0x1.741ca4p-55f,
     0.0f, 0.0f, 0x1.09a936p-81f, 0x1.5b914ap-42f, 0.0f, 0x1.78d09cp-107f, 0.0f,
     0x1.1a9942p-86f, 0.0f, 0.0f, 0.0f, 0x1.85a8dep-113f, 0.0f, 0.0f, 0x1.dbd9ap-56f,
     0.0f, 0.0f, 0x1.456c42p-76f, 0x1.88614ap-54f, 0x1.ca3042p-12f, 0.0f,
     0x1.686e7cp-65f, 0x1.dae3bp-5f, 0.0f, 0x1.9585e2p-36f, 0x1.2fac68p-18f,
     0x1.17ddap-30f, 0x1.bdf4fp-94f, 0.0f, 0.0f, 0x1.86d32cp-67f, 0x1.586b2ep-52f,
     0.0f, 0x1.93b304p-32f, 0x1.62fce8p-11f, 0.0f, 0x1.e7e2dap-39f, 0.0f, 0.0f,
     0x1.bead2cp-54f, 0.0f, 0x1.676d66p-37f, 0.0f, 0x1.2dbc66p-41f, 0.0f,
     0x1.19c7d8p-117f, 0.0f, 0x1.8dc40ap-100f, 0.0f, 0.0f, 0x1.e41dfcp-42f,
     0x1.984dbap-106f, 0.0f, 0x1.8bdf38p-114f, 0x1.984e8cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.64ab1ep-6f, 0.0f, 0.0f, 0.0f, 0x1.d1edc4p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.766378p-70f, 0x1.c26b1p-43f, 0.0f, 0x1.fca7b2p-59f, 0x1.cf3738p-15f,
     0.0f, 0x1.e140d2p-20f, 0.0f, 0x1.9c3a98p-42f, 0x1.e246d2p-101f, 0.0f,
     0x1.ae541cp-111f, 0x1.d77342p-3f, 0x1.0e7f92p-75f, 0x1.a2b34p-74f,
     0x1.518c9p-67f, 0x1.ebf85p-22f, 0.0f, 0x1.979be8p-21f, 0x1.a63622p-105f,
     0x1.6a6bd2p-40f, 0.0f, 0x1.6ac34ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3a792p-91f,
     0x1.c4ccf8p-55f, 0.0f, 0x1.7e3412p-48f, 0x1.ab68dep-19f, 0x1.1c8448p-3f,
     0x1.a8921cp-106f, 0.0f, 0.0f, 0.0f, 0x1.5519c6p-86f, 0x1.d2da28p-62f, 0.0f, 0.0f,
     0x1.0fc7d6p-113f, 0x1.aaf974p-87f, 0x1.2bacf6p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d23e4p-20f, 0.0f, 0x1.b09802p-115f, 0x1.88b178p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5749bp-28f, 0.0f, 0x1.0d0d02p-14f, 0x1.01ce36p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3282c2p-63f, 0x1.dacc68p-2f, 0x1.9b4d7ep-51f, 0x1.71874cp-39f,
     0x1.6cee76p-116f, 0x1.e79a26p-77f, 0x1.97b486p-62f, 0.0f, 0x1.20a0c4p-111f, 0.0f,
     0x1.e62602p-120f, 0x1.604662p-99f, 0x1.d6179ap-10f, 0.0f, 0.0f, 0x1.541c96p-64f,
     0x1.c9e81p-77f, 0.0f, 0x1.b5af7p-35f, 0x1.f0026cp-35f, 0.0f, 0x1.efc258p-55f,
     0x1.24ae6p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08f9f8p-76f, 0.0f,
     0x1.b70db8p-84f, 0x1.3fc826p-1f, 0x1.252ap-74f, 0.0f, 0x1.5a355ep-96f,
     0x1.679f58p-64f, 0x1.87b26cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a2468p-76f,
     0.0f, 0.0f, 0x1.c50502p-40f, 0x1.d0b6b2p-13f, 0x1.fd43eap-24f, 0x1.dcb1fap-18f,
     0.0f, 0x1.2c944ap-86f, 0x1.3638ep-103f, 0.0f, 0.0f, 0.0f, 0x1.154f84p-27f,
     0x1.6d4eacp-96f, 0x1.c9a8ep-57f, 0x1.69f96cp-93f, 0.0f, 0x1.4018b2p-9f,
     0x1.f7bd6ap-33f, 0x1.ea8df8p-108f, 0x1.c5aa74p-72f, 0x1.f1efa2p-97f,
     0x1.7515c6p-109f, 0.0f, 0.0f, 0x1.17b05cp-68f, 0.0f, 0.0f, 0x1.ad5d4p-22f,
     0x1.bbac56p-65f, 0x1.ad71e6p-64f, 0x1.47c96cp-79f, 0x1.79241cp-87f, 0.0f,
     0x1.8ab4e2p-98f, 0.0f, 0x1.ca9e76p-63f, 0x1.261546p-44f, 0x1.4288fp-10f, 0.0f,
     0.0f, 0.0f, 0x1.a80996p-96f, 0.0f, 0.0f, 0x1.7ddd76p-12f, 0.0f, 0.0f,
     0x1.db2e8ep-13f, 0x1.b523bcp-97f, 0.0f, 0.0f, 0.0f, 0x1.ad909p-107f,
     0x1.8c204cp-51f, 0.0f, 0x1.b0b27ap-36f, 0x1.b6c50cp-43f, 0.0f, 0x1.62b574p-17f,
     0.0f, 0x1.56c63ep-47f, 0x1.97f5dcp-108f, 0x1.6be81p-92f, 0x1.9f730ep-60f, 0.0f,
     0.0f, 0x1.550364p-43f, 0x1.b88086p-53f, 0.0f, 0x1.ad0582p-9f, 0.0f,
     0x1.5e8868p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fcc6ap-95f, 0x1.403ebp-103f, 0.0f,
     0x1.33fcc6p-84f, 0x1.ed4ca4p-43f, 0.0f, 0.0f, 0x1.f151ap-69f, 0.0f,
     0x1.e16accp-30f, 0.0f, 0x1.d6a6a6p-22f, 0x1.758f04p-114f, 0x1.a7dcbcp-52f, 0.0f,
     0.0f, 0.0f, 0x1.2fae84p-117f, 0x1.9d2ba6p-29f, 0x1.1fd01ap-85f, 0.0f,
     0x1.ef0ff6p-79f, 0.0f, 0x1.4b8d26p-65f, 0x1.1818a4p-117f, 0x1.f709f6p-40f, 0.0f,
     0.0f, 0.0f, 0x1.b86fc4p-2f, 0x1.21af92p-110f, 0x1.a3edb8p-41f, 0.0f,
     0x1.ba7792p-97f, 0x1.817fb2p-8f, 0.0f, 0.0f, 0x1.eec1dp-5f, 0x1.ca383cp-5f, 0.0f,
     0x1.2d90b8p-19f, 0.0f, 0x1.8546dcp-80f, 0.0f, 0.0f, 0.0f, 0x1.102c9ap-17f,
     0x1.9d75a6p-77f, 0.0f, 0x1.61742cp-38f, 0.0f, 0x1.7cb61p-6f, 0.0f,
     0x1.6530b4p-64f, 0x1.510672p-62f, 0x1.3b3044p-43f, 0.0f, 0.0f, 0.0f,
     0x1.366794p-12f, 0.0f, 0.0f, 0x1.2d0308p-121f, 0x1.5de8a2p-86f, 0x1.298f76p-42f,
     0x1.017ed6p-9f, 0x1.7e610ap-12f, 0.0f, 0.0f, 0x1.ea4244p-86f, 0.0f,
     0x1.50fa7ep-19f, 0.0f, 0x1.0f498ap-107f, 0x1.29930ep-78f, 0.0f, 0.0f,
     0x1.58fd48p-2f, 0.0f, 0.0f, 0x1.5576e4p-37f, 0.0f, 0x1.3cd94ap-74f,
     0x1.25eebcp-83f, 0.0f, 0x1.13d19cp-22f, 0.0f, 0x1.23f594p-38f, 0x1.379cc4p-26f,
     0x1p0f, 0.0f, 0.0f, 0x1.5a5b8p-11f, 0.0f, 0x1.8e5c48p-73f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.065378p-83f, 0.0f, 0x1.d8ce32p-115f, 0.0f, 0x1.887bc8p-16f,
     0.0f, 0x1.b7f8ep-120f, 0.0f, 0x1.75ce8cp-70f, 0x1.7b864p-20f, 0.0f, 0.0f, 0.0f,
     0x1.ddac46p-125f, 0x1.9f3274p-83f
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
            tmp1 = Sleef_finz_log2f1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log2f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
