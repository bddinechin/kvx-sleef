/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf4_u10kvx.c --function Sleef_coshf4_u10kvx \
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
     0x1.456324p-47f, 0x1.a0fc8cp-123f, 0x1.dc94c2p-10f, 0x1.de8312p-36f,
     0x1.0215a8p-100f, 0.0f, 0.0f, 0x1.f21104p-111f, 0.0f, 0x1.b87cdep-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.173142p-16f, 0.0f,
     0x1.52601cp-89f, 0x1.369bdap-4f, 0.0f, 0x1.42cc0cp-19f, 0.0f, 0.0f, 0.0f,
     0x1.6e7c0cp-78f, 0x1.18dbap-34f, 0.0f, 0.0f, 0x1.d4dfaep-65f, 0x1.bdebdap-35f,
     0x1.7b4994p-123f, 0.0f, 0.0f, 0x1.81673ep-46f, 0x1.b7129ap-104f, 0x1.10ac66p-61f,
     0.0f, 0.0f, 0x1.a48884p-19f, 0x1.6d5ae8p-18f, 0.0f, 0x1.9187dap-75f,
     0x1.ce6376p-83f, 0x1.61fe96p-14f, 0x1.c2f888p-59f, 0.0f, 0.0f, 0.0f,
     0x1.efe244p-99f, 0.0f, 0.0f, 0x1.b015bep-5f, 0x1.cb5cd6p-13f, 0x1.2acbc4p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b95e66p-18f, 0.0f, 0.0f, 0.0f, 0x1.f0cdeep-98f, 0.0f,
     0x1.ee6b3cp-108f, 0x1.fcaa32p-47f, 0.0f, 0x1.740822p-67f, 0.0f, 0x1.937dd6p-92f,
     0x1.f6c9b8p-22f, 0x1.3ad464p-75f, 0.0f, 0x1.0967a8p-107f, 0.0f, 0x1.ee0b74p-33f,
     0.0f, 0x1.ce5dc8p-75f, 0x1.b2ed4p-62f, 0x1.07b79cp-88f, 0.0f, 0.0f,
     0x1.c8aeb4p-7f, 0x1.e244b8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce5e22p-96f, 0x1.2b8ddp-97f, 0x1.7b8c98p-118f, 0.0f, 0x1.73a8f2p-27f, 0.0f,
     0.0f, 0x1.9413c2p-68f, 0.0f, 0.0f, 0.0f, 0x1.39cb48p-92f, 0.0f, 0.0f,
     0x1.6290f6p-64f, 0x1.90efe4p-38f, 0.0f, 0x1.e92c6ap-4f, 0.0f, 0x1.673366p-16f,
     0x1.ef4ef6p-44f, 0x1.9c63fap-56f, 0x1.5fca48p-44f, 0x1.bb0bf4p-50f,
     0x1.2bc118p-84f, 0.0f, 0.0f, 0x1.ed5bfcp-37f, 0x1.9b6b24p-47f, 0x1.ed660ap-16f,
     0.0f, 0.0f, 0x1.d84b9ep-39f, 0x1.6677fp-28f, 0.0f, 0.0f, 0.0f, 0x1.afd52ap-52f,
     0.0f, 0x1.92192cp-84f, 0x1.f503cep-28f, 0.0f, 0x1.195362p-125f, 0x1.57298ep-3f,
     0.0f, 0.0f, 0x1.8f70dcp-24f, 0.0f, 0x1.c64b24p-115f, 0.0f, 0x1.3ba718p-81f, 0.0f,
     0x1.f2f972p-112f, 0x1.2fccbep-31f, 0.0f, 0.0f, 0x1.b410dcp-70f, 0x1.ae4366p-80f,
     0.0f, 0x1.8a3e9ep-89f, 0x1.4e613cp-33f, 0x1.7c930ap-101f, 0.0f, 0.0f,
     0x1.8b277p-93f, 0x1.7badf2p-60f, 0x1.007e9cp-74f, 0x1.f52518p-97f, 0.0f,
     0x1.ac37d6p-54f, 0.0f, 0x1.7bccdp-77f, 0x1.7503c8p-86f, 0.0f, 0x1.094d08p-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f1ed8p-121f, 0.0f, 0x1.8bb29ep-101f, 0.0f, 0.0f,
     0x1.369b3cp-112f, 0x1.ebbe8ap-70f, 0.0f, 0x1.c871b2p-69f, 0x1.6d5052p-78f, 0.0f,
     0x1.1134b6p-100f, 0x1.f3cd66p-48f, 0x1.ba5596p-101f, 0.0f, 0.0f, 0x1.072106p-34f,
     0.0f, 0.0f, 0x1.f40c4cp-115f, 0.0f, 0.0f, 0x1.2b528p-26f, 0.0f, 0x1.19eda8p-23f,
     0x1.15201p-82f, 0.0f, 0x1.31e27cp-13f, 0x1.526a2cp-113f, 0x1.d4f77ap-35f, 0.0f,
     0x1.0510f6p-76f, 0x1.e01268p-62f, 0.0f, 0x1.3bbb06p-65f, 0.0f, 0x1.0579cep-17f,
     0.0f, 0x1.0fcefcp-74f, 0.0f, 0.0f, 0.0f, 0x1.b87bcep-125f, 0x1.ac7e52p-114f,
     0.0f, 0x1.8fce74p-92f, 0x1.e9ab3cp-18f, 0x1.e9ad06p-113f, 0x1.1f9bb2p-11f, 0.0f,
     0x1.e9905ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9591fp-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77e0a6p-63f, 0.0f, 0.0f, 0x1.c29f3ep-121f, 0.0f, 0x1.3a3328p-79f,
     0x1.7ad57p-108f, 0.0f, 0.0f, 0.0f, 0x1.913152p-123f, 0.0f, 0x1.0025dap-4f, 0.0f,
     0x1.7e954p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e003ap-46f, 0x1.60458ep-61f,
     0x1.71ec5ep-91f, 0.0f, 0x1.248a64p-87f, 0.0f, 0x1.d44b4ep-5f, 0.0f,
     0x1.84cfa4p-23f, 0.0f, 0x1.9f94c8p-106f, 0x1.38cad8p-39f, 0x1.1312f4p-104f,
     0x1.cba402p-71f, 0x1.105f9p-107f, 0x1.e8ebcp-51f, 0x1.965d72p-78f,
     0x1.ec5d9p-87f, 0x1.0e7bd8p-65f, 0.0f, 0.0f, 0x1.8759ap-119f, 0.0f, 0.0f, 0.0f,
     0x1.ea83bep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ebd32p-76f,
     0x1.1bd9c4p-124f, 0x1.06c09p-18f, 0x1.5a9bd6p-65f, 0.0f, 0.0f, 0x1.8f85fp-16f,
     0x1.929026p-78f, 0.0f, 0x1.c28e18p-48f, 0x1.816456p-116f, 0.0f, 0x1.1d3f02p-106f,
     0x1.b29acap-13f, 0x1.040e24p-43f, 0x1.f8dd98p-17f, 0.0f, 0.0f, 0.0f,
     0x1.a6bbc4p-23f, 0x1.a72732p-21f, 0x1.f9464ap-18f, 0x1.0f43fap-88f,
     0x1.f6e27p-114f, 0x1.697e66p-84f, 0.0f, 0.0f, 0x1.e9300cp-114f, 0.0f,
     0x1.ed91eep-101f, 0.0f, 0x1.f0fecep-97f, 0x1.924d36p-124f, 0x1.73d162p-115f,
     0x1.29b55ep-80f, 0x1.23ae5ap-60f, 0x1.890d84p-52f, 0x1.1c540ap-113f,
     0x1.e9fec6p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b84ec8p-101f, 0.0f, 0x1.5f2ec2p-87f,
     0x1.bbd04cp-40f, 0x1.96ea32p-33f, 0x1.87d9eap-29f, 0x1.1e99aep-118f,
     0x1.230b8cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7838f2p-60f, 0.0f, 0x1.a00b1cp-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.020526p-31f, 0.0f, 0.0f, 0x1.b3478cp-95f, 0.0f,
     0x1.40da26p-53f, 0.0f, 0x1.e53eb6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6494e6p-70f, 0x1.e84d32p-94f, 0x1p0f, 0.0f, 0.0f, 0x1.e22f1ep-12f, 0.0f,
     0.0f, 0x1.ca51b4p-79f, 0.0f, 0x1.436012p-86f, 0x1.d98b86p-95f, 0x1.6ce682p-113f,
     0x1.61fd22p-14f, 0.0f, 0x1.f5888ap-52f, 0x1.60e07p-53f, 0.0f, 0.0f, 0.0f,
     0x1.3d4faap-93f, 0.0f, 0x1.98f6a8p-10f, 0x1.c4beb2p-15f, 0.0f, 0x1.8b6aa4p-72f,
     0x1.3ef49p-107f, 0.0f, 0.0f, 0.0f, 0x1.751432p-98f, 0x1.7f7a4ep-30f,
     0x1.7887a4p-73f, 0x1.0843fcp-101f, 0.0f, 0x1.06a9cep-78f, 0.0f, 0.0f,
     0x1.26f016p-35f, 0x1.36579p-105f, 0x1.b39066p-42f, 0.0f, 0x1.48b51ep-109f,
     0x1.8bf144p-114f, 0x1.860756p-5f, 0x1.8e2668p-59f, 0x1.ac6894p-124f,
     0x1.6876eap-92f, 0.0f, 0x1.72afbcp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9e328p-65f,
     0x1.12cd36p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ff86ap-40f, 0x1.d693b8p-103f,
     0x1.1785c2p-82f, 0.0f, 0.0f, 0.0f, 0x1.91d9acp-68f, 0.0f, 0.0f, 0.0f,
     0x1.4613e6p-73f, 0.0f, 0.0f, 0x1.2585d8p-85f, 0.0f, 0x1.e559d2p-48f, 0.0f, 0.0f,
     0x1.c94efap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da26ecp-41f, 0x1.a59e86p-69f, 0.0f,
     0.0f, 0x1.73c34cp-62f, 0x1.35f1aap-30f, 0x1.7b01b8p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1fe864p-64f, 0.0f, 0x1.5441fep-44f, 0x1.afe25p-31f, 0x1.e808aap-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b80892p-79f, 0.0f, 0x1.e3c656p-96f, 0x1.0e846ep-35f,
     0x1.4b6fa6p-72f, 0x1.b3c31ap-40f, 0.0f, 0.0f, 0x1.b70278p-99f, 0.0f,
     0x1.003fe2p-20f, 0.0f, 0x1.09973ep-98f, 0.0f, 0x1.05cc2ap-6f, 0.0f,
     0x1.bc1b3ap-44f, 0.0f, 0x1.749e7ap-125f, 0x1.8c2c6p-90f, 0.0f, 0x1.1eafbcp-55f,
     0x1.12bc1ap-111f, 0x1.baf9bp-19f, 0x1.e5ebdcp-77f, 0x1.09a464p-112f, 0.0f,
     0x1.e6c2bep-114f, 0x1.b3032ep-39f, 0x1.df5eb2p-30f, 0x1.3af492p-61f,
     0x1.c0873cp-12f, 0x1.ac20ap-21f, 0x1.d19b9cp-78f, 0.0f, 0x1.d8aa1p-22f, 0.0f,
     0.0f, 0x1.10f156p-102f, 0x1.2c82a2p-96f, 0x1.9e69d4p-5f, 0x1.84ea1ep-58f,
     0x1.14e166p-103f, 0.0f, 0x1.3dafccp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.822c5ep-119f, 0x1.5fd568p-52f, 0x1.487028p-42f, 0x1.558e78p-48f, 0.0f, 0.0f,
     0.0f, 0x1.ea3244p-2f, 0x1.94a712p-24f, 0x1.597204p-13f, 0.0f, 0x1.3245c6p-104f,
     0.0f, 0x1.00e92cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dad38p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b7c892p-77f, 0.0f, 0x1.a63fe6p-106f, 0x1.371a44p-59f, 0.0f,
     0x1.ecc948p-6f, 0x1.70d432p-78f, 0x1.22c9b4p-70f, 0.0f, 0.0f, 0x1.7d1dc2p-121f,
     0x1.b3a2ep-104f, 0x1.ada996p-62f, 0.0f, 0.0f, 0.0f, 0x1.35cfe4p-90f,
     0x1.96d292p-71f, 0.0f, 0x1.2a4e66p-42f, 0.0f, 0x1.0b137p-52f, 0x1.a511ecp-117f,
     0x1.32d26ap-119f, 0x1.e8f38cp-32f, 0x1.bc066p-16f, 0x1.016f86p-114f,
     0x1.61a082p-16f, 0x1.9813aap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27d928p-65f, 0.0f, 0x1.25f4e4p-27f, 0.0f, 0x1.b2b862p-38f, 0x1.41a5dp-124f,
     0x1.4f202cp-97f, 0x1.e1703cp-96f, 0.0f, 0x1.c37f52p-28f, 0x1.c886f4p-104f,
     0x1.8850f6p-21f, 0.0f, 0.0f, 0.0f, 0x1.cffb1ap-109f, 0.0f, 0.0f, 0x1.4ccaeap-46f,
     0.0f, 0x1.8d44eap-94f, 0.0f, 0.0f, 0.0f, 0x1.31d4eap-82f, 0x1.4b30d8p-22f,
     0x1.d7aa7cp-4f, 0x1.04229ap-72f, 0.0f, 0.0f, 0x1.c4e8cap-47f, 0x1.530d8ep-75f,
     0x1.13a38ap-124f, 0x1.2f449cp-55f, 0x1.6dbc48p-85f, 0x1.828798p-83f, 0.0f, 0.0f,
     0x1.969552p-16f, 0x1.bb9588p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc5068p-88f,
     0x1.012dacp-81f, 0.0f, 0x1.d85234p-121f, 0.0f, 0x1.9f1a2ap-108f, 0.0f, 0.0f,
     0x1.cc600ap-64f, 0.0f, 0.0f, 0x1.92f84ep-57f, 0.0f, 0.0f, 0x1.b8bab4p-98f,
     0x1.aecccep-47f, 0x1.424246p-106f, 0x1.87dd4ap-83f, 0.0f, 0x1.aa2384p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b51f4p-88f, 0.0f, 0x1.25e624p-113f,
     0x1.0bfa7cp-114f, 0.0f, 0x1.e99cp-124f, 0.0f, 0x1.b6ccaep-15f, 0x1.a9014ep-118f,
     0x1.b0f16ep-27f, 0x1.34b43ep-22f, 0x1.7b4634p-45f, 0.0f, 0x1.3367d2p-85f,
     0x1.08bb52p-88f, 0x1.76b2bcp-119f, 0.0f, 0x1.127d88p-58f, 0x1.2bdbcp-117f, 0.0f,
     0x1.0ea566p-117f, 0.0f, 0x1.51355ep-25f, 0x1.33bfcap-9f, 0.0f, 0.0f, 0.0f,
     0x1.b964bp-93f, 0x1.00ef28p-109f, 0.0f, 0.0f, 0.0f, 0x1.9613ecp-35f, 0.0f,
     0x1.eebe7ep-120f, 0x1.d4016cp-18f, 0.0f, 0x1.023a5cp-115f, 0.0f, 0x1.ae9f14p-50f,
     0x1.48baf8p-81f, 0.0f, 0.0f, 0.0f, 0x1.feb58cp-105f, 0x1.655226p-9f, 0.0f, 0.0f,
     0x1.55af56p-38f, 0.0f, 0x1.73e92cp-107f, 0x1.41f7ap-123f, 0x1.d95e7ap-38f, 0.0f,
     0x1.b931c8p-96f, 0x1.46452ap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b8c7p-49f,
     0x1.e8fa24p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e71e0ap-19f, 0x1.85a7d2p-31f, 0.0f,
     0.0f, 0.0f, 0x1.0aac8cp-6f, 0x1.154c5ap-40f, 0.0f, 0.0f, 0.0f, 0x1.31a9b6p-6f,
     0x1.a76e34p-30f, 0x1.58545cp-80f, 0x1.afab68p-86f, 0x1.e98a16p-29f,
     0x1.24cde4p-72f, 0x1.195038p-51f, 0.0f, 0x1.9842d4p-90f, 0.0f, 0x1.7c56b6p-16f,
     0x1.ed5dc4p-33f, 0x1.7c42d4p-1f, 0.0f, 0.0f, 0x1.32e0fap-67f, 0.0f, 0.0f, 0.0f,
     0x1.8e86c2p-70f, 0.0f, 0x1.649eaap-31f, 0x1.7e875ep-26f, 0x1.8603ecp-96f, 0.0f,
     0.0f, 0.0f, 0x1.b52492p-12f, 0x1.389d76p-59f, 0.0f, 0.0f, 0x1.06df0ap-9f, 0.0f,
     0.0f, 0x1.2cca3cp-13f, 0x1.9eda12p-44f, 0.0f, 0.0f, 0.0f, 0x1.9005e4p-60f, 0.0f,
     0.0f, 0x1.857dcap-94f, 0.0f, 0.0f, 0x1.9a1622p-103f, 0x1.29f9aep-35f,
     0x1.49713ap-27f, 0.0f, 0.0f, 0x1.81339ap-22f, 0.0f, 0x1.29e69ap-1f, 0.0f, 0.0f,
     0x1.0ed95ep-86f, 0x1.d3eca6p-2f, 0x1.47a532p-11f, 0x1.375ebp-17f, 0.0f, 0.0f,
     0x1.618dd8p-8f, 0x1.a34ab8p-118f, 0.0f, 0x1.eb6ea2p-66f, 0.0f, 0x1.6a690cp-76f,
     0x1.4c986p-24f, 0.0f, 0.0f, 0x1.ce8bb6p-83f, 0x1.0fb1bcp-97f, 0x1.cb97b8p-95f,
     0x1.c1f31cp-67f, 0.0f, 0.0f, 0x1.7ddabap-117f, 0x1.3976a4p-116f, 0x1.59dd92p-67f,
     0.0f, 0.0f, 0x1.2bc3fcp-10f, 0.0f, 0.0f, 0.0f, 0x1.4c66d4p-71f, 0x1.ea30dep-86f,
     0.0f, 0.0f, 0x1.8e751p-53f, 0.0f, 0x1.20ffeap-65f, 0x1.f0e4dp-111f, 0.0f,
     0x1.cb4e8p-82f, 0.0f, 0x1.974676p-50f, 0x1.0bda5ep-26f, 0x1.a6f906p-3f,
     0x1.8b021p-81f, 0.0f, 0.0f, 0x1.a2bb1ep-42f, 0.0f, 0x1.c56372p-55f,
     0x1.5018eep-88f, 0.0f, 0x1.ec6684p-125f, 0x1.9579e6p-122f, 0x1.eba60ap-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc4992p-93f, 0.0f, 0.0f, 0x1.477b4cp-92f,
     0.0f, 0.0f, 0x1.d0a9fap-100f, 0.0f, 0.0f, 0x1.5e575ap-120f, 0.0f, 0.0f,
     0x1.ec93a2p-20f, 0x1.934372p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10aedep-45f,
     0.0f, 0x1.00063ap-100f, 0.0f, 0.0f, 0.0f, 0x1.4b5cbep-70f, 0.0f, 0x1.46f766p-97f,
     0.0f, 0x1.8c9476p-78f, 0x1.02b66ap-125f, 0.0f, 0.0f, 0x1.aa13b6p-72f,
     0x1.9ab2bcp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84b62cp-105f, 0x1.c0971cp-47f,
     0x1p0f, 0.0f, 0x1.46cb4ap-18f, 0x1.4dd2a8p-123f, 0.0f, 0x1.2dad54p-104f, 0.0f,
     0.0f, 0x1.615726p-56f, 0.0f, 0.0f, 0x1.8794dap-108f, 0x1.e7f83cp-114f, 0.0f,
     0.0f, 0.0f, 0x1.590a6p-68f, 0x1p0f, 0x1.d463d8p-88f, 0x1.228292p-11f, 0.0f, 0.0f,
     0x1.773db8p-77f, 0.0f, 0x1.1599d6p-124f, 0x1.50c2ap-84f, 0.0f, 0.0f,
     0x1.8a789ep-121f, 0x1.6adcecp-106f, 0x1.9b3196p-28f, 0x1.04f1c2p-52f, 0.0f,
     0x1.36dd1cp-30f, 0.0f, 0.0f, 0x1.f80a36p-10f, 0x1.a3cab8p-85f, 0x1.8cd2dp-42f,
     0.0f, 0.0f, 0x1.45a472p-80f, 0.0f, 0.0f, 0x1.255a1cp-103f, 0x1.b2e336p-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.896d94p-19f, 0.0f, 0x1p0f, 0x1.96c68ep-123f,
     0x1.8dfaf4p-71f, 0x1.4c40bap-37f, 0x1.69c3bep-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee0a36p-41f, 0.0f, 0.0f, 0x1.5da67p-85f, 0.0f, 0x1.256e64p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6e40a2p-44f, 0.0f, 0x1.60bf82p-27f, 0x1.91d04cp-22f,
     0x1.8a0926p-91f, 0x1.1abbdep-43f, 0x1.3121c8p-96f, 0x1.f3a8acp-4f, 0.0f,
     0x1.dc6edp-89f, 0x1.722632p-104f, 0x1.a4d33cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.74626cp-87f, 0.0f, 0x1.d3ffa4p-75f, 0x1.1ab8bcp-90f, 0x1.0c1c32p-120f, 0.0f,
     0.0f, 0x1.2ca4e8p-112f, 0.0f, 0x1.b625d6p-46f, 0x1.a95bf8p-116f,
     0x1.40a7bep-104f, 0.0f, 0x1.3ff65ep-120f, 0.0f, 0x1.68321p-104f, 0.0f, 0.0f,
     0x1.5229d4p-91f, 0x1.e1eccap-111f, 0x1.e14f1cp-120f, 0x1.b1383ep-18f, 0.0f, 0.0f,
     0.0f, 0x1.bfabacp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98e74ep-38f, 0x1.7631cap-23f,
     0.0f, 0x1.421bacp-26f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_coshf4_u10kvx(tmp0);
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
    printf("Sleef_coshf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_coshf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
