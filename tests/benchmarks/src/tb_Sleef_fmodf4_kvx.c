/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmodf4_kvx.c --function Sleef_fmodf4_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0.0f, 0x1.a023d4p-80f, 0x1.1ca212p-16f, 0.0f, 0x1.4c2a3p-45f, 0.0f,
     0x1.8826e4p-56f, 0x1.96204cp-20f, 0x1.9ed65p-108f, 0x1.2fe398p-105f, 0.0f, 0.0f,
     0x1.d82b7ap-57f, 0x1.a14a2ap-107f, 0x1.a5139ap-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4c1ccp-93f, 0.0f, 0x1.545eep-2f, 0x1.c44926p-44f, 0.0f, 0x1.9c46d2p-13f,
     0x1.546baep-86f, 0.0f, 0x1.385578p-49f, 0.0f, 0x1.981152p-77f, 0.0f,
     0x1.f8feaep-107f, 0x1.0361f8p-23f, 0.0f, 0x1.51810cp-92f, 0.0f, 0x1.b0d7d8p-17f,
     0.0f, 0x1.64cc96p-34f, 0.0f, 0.0f, 0x1.d996bp-105f, 0x1.a028d2p-75f,
     0x1.a9c942p-117f, 0.0f, 0x1.271ef6p-20f, 0x1.8ae26ap-20f, 0x1.31cf0ep-65f, 0.0f,
     0x1.696882p-118f, 0x1.2cd382p-75f, 0x1.414ae4p-119f, 0x1.83d168p-44f, 0.0f,
     0x1.aa5b78p-98f, 0.0f, 0.0f, 0x1.a9c206p-120f, 0.0f, 0.0f, 0x1.aab614p-64f,
     0x1.d90e64p-88f, 0x1.45449ep-95f, 0x1.e0a31ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a41f7ap-58f, 0x1.caf84ap-7f, 0.0f, 0x1.eef926p-52f, 0.0f, 0x1.d5cfcep-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ef296p-93f, 0.0f, 0x1.e98fa4p-110f, 0.0f,
     0.0f, 0.0f, 0x1.50294ap-38f, 0x1.c1d216p-102f, 0.0f, 0x1.94b42ap-39f, 0.0f,
     0x1.7b74d8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bed0cp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.995e24p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06bda6p-14f, 0.0f, 0.0f,
     0.0f, 0x1.a0c25cp-79f, 0x1.c86b08p-18f, 0x1.67cf84p-25f, 0.0f, 0x1.2438e8p-34f,
     0.0f, 0.0f, 0.0f, 0x1.eec322p-75f, 0x1.97b3ep-2f, 0x1.45b9b8p-64f, 0.0f,
     0x1.a7f916p-104f, 0x1.3ba076p-104f, 0x1.f4869ep-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c89f8p-68f, 0.0f, 0x1.196b06p-13f, 0.0f, 0x1.05b326p-81f, 0.0f,
     0x1.d64bf8p-120f, 0x1.926edp-125f, 0x1.76107ep-112f, 0.0f, 0x1.be0232p-53f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1492b6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.736932p-48f,
     0x1.b9d60ep-100f, 0x1.c3597ap-40f, 0.0f, 0x1.006de8p-25f, 0.0f, 0x1.731eccp-9f,
     0.0f, 0.0f, 0x1.55ed18p-38f, 0x1.bf6f2ep-75f, 0.0f, 0.0f, 0x1.1e9718p-12f, 0.0f,
     0x1.5b920ep-83f, 0x1.9fcfcep-25f, 0x1.eeeb32p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54dcd4p-91f, 0x1.9185bap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3e85ap-72f,
     0x1.84e296p-105f, 0.0f, 0x1.d7cdfep-49f, 0x1.77fb1ep-36f, 0x1.8984f4p-108f, 0.0f,
     0x1.1dbba6p-27f, 0.0f, 0.0f, 0.0f, 0x1.a5fddep-19f, 0x1.4adbeap-123f, 0.0f, 0.0f,
     0x1.3bd1b2p-31f, 0x1.fcab0ep-122f, 0.0f, 0.0f, 0x1.4779ep-65f, 0x1.ba5fap-81f,
     0x1.3c04fp-18f, 0x1.23236ep-14f, 0.0f, 0.0f, 0x1.216706p-93f, 0x1.9c55f6p-107f,
     0x1.69a802p-124f, 0.0f, 0.0f, 0x1.39378ap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6dd702p-23f, 0x1.2e480ep-90f, 0.0f, 0.0f, 0x1.8de1cap-123f, 0x1.520c64p-46f,
     0.0f, 0.0f, 0.0f, 0x1.3bc802p-114f, 0x1.07bcb4p-89f, 0.0f, 0.0f, 0x1.f6769ep-40f,
     0.0f, 0x1.32184p-56f, 0x1.f0416ep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f7874p-16f, 0x1.2fd84cp-85f, 0.0f, 0.0f, 0x1.3b51ecp-37f, 0.0f,
     0x1.1aedbep-78f, 0x1.390db6p-12f, 0.0f, 0x1.103206p-7f, 0.0f, 0.0f,
     0x1.18c58cp-6f, 0.0f, 0.0f, 0x1.1f691ap-21f, 0x1.29fa3p-68f, 0.0f,
     0x1.9d5f94p-123f, 0x1.541842p-85f, 0.0f, 0.0f, 0.0f, 0x1.0ccd4ap-76f,
     0x1.3ff28cp-125f, 0.0f, 0x1.4db808p-67f, 0.0f, 0.0f, 0x1.51a316p-66f,
     0x1.963a34p-1f, 0x1.ddf76p-22f, 0.0f, 0.0f, 0.0f, 0x1.88aa12p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6db86p-57f, 0.0f, 0x1.54371ep-10f, 0x1.d77562p-126f,
     0x1.a5e434p-93f, 0.0f, 0.0f, 0x1.2024c4p-58f, 0.0f, 0x1.d8113ap-34f,
     0x1.af4b5p-97f, 0.0f, 0.0f, 0.0f, 0x1.89ffep-96f, 0.0f, 0x1.de8d1ap-89f,
     0x1.106bbep-13f, 0x1.69d72ap-94f, 0.0f, 0.0f, 0.0f, 0x1.b6ee96p-11f, 0.0f,
     0x1.42c874p-96f, 0x1.fde306p-24f, 0.0f, 0.0f, 0x1.43f73ap-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.463362p-29f, 0.0f, 0x1.5fb33cp-34f, 0.0f, 0.0f, 0x1.7ef5eep-19f,
     0x1.5ad0b4p-109f, 0x1.17c5p-25f, 0.0f, 0x1.00dd5ap-71f, 0x1.8ed5f8p-44f, 0.0f,
     0x1.8d5f2cp-48f, 0.0f, 0x1.d231bep-30f, 0.0f, 0x1.12ad6p-43f, 0x1.4cd8c6p-23f,
     0x1.8d4eb4p-101f, 0x1.5330a8p-2f, 0.0f, 0.0f, 0x1.c8f782p-62f, 0x1.782448p-100f,
     0x1.25c49ap-29f, 0x1.1e135ap-54f, 0.0f, 0x1.73643cp-6f, 0.0f, 0.0f,
     0x1.abb9d8p-36f, 0x1.06d6e2p-78f, 0.0f, 0x1.bc557p-125f, 0x1.19b6a6p-116f, 0.0f,
     0x1.197064p-36f, 0x1.faeadep-40f, 0x1.75271p-51f, 0.0f, 0x1.dfcd16p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.048636p-73f,
     0x1.252b0ap-110f, 0x1.afd97ap-100f, 0x1.f6adcep-63f, 0x1.f87fe8p-103f, 0.0f,
     0x1.53649cp-61f, 0x1.d494f2p-48f, 0.0f, 0.0f, 0x1.403088p-47f, 0.0f,
     0x1.290206p-3f, 0.0f, 0.0f, 0x1.7d094ep-35f, 0x1.f9ac88p-75f, 0.0f,
     0x1.fd01d2p-65f, 0.0f, 0x1.e3868p-47f, 0.0f, 0.0f, 0x1.84af8cp-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b19c02p-93f, 0x1.63686cp-120f, 0.0f, 0x1.d0f382p-100f, 0.0f,
     0.0f, 0.0f, 0x1.f4ecap-29f, 0.0f, 0x1.326948p-7f, 0.0f, 0.0f, 0x1.521c6p-107f,
     0x1.8f6b8ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0b9cap-33f, 0.0f, 0.0f, 0.0f,
     0x1.b582dep-74f, 0.0f, 0.0f, 0.0f, 0x1.15a488p-60f, 0x1.0f4f16p-8f, 0.0f, 0.0f,
     0.0f, 0x1.c041c2p-4f, 0.0f, 0.0f, 0x1.41c7a2p-68f, 0.0f, 0.0f, 0x1.0010a4p-97f,
     0x1.dd381p-31f, 0x1.e01414p-94f, 0.0f, 0x1.7389acp-34f, 0.0f, 0x1.39c47ap-93f,
     0x1.26f838p-5f, 0.0f, 0x1.b1f8cp-25f, 0x1.84176ep-12f, 0x1.19e204p-14f,
     0x1.425cc6p-87f, 0x1.927756p-35f, 0.0f, 0.0f, 0x1.394a0cp-69f, 0x1.24387cp-23f,
     0.0f, 0x1.1a032cp-74f, 0x1.306a2ep-28f, 0x1.f2c57cp-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ca8eep-105f, 0.0f, 0x1.f631bep-80f, 0x1.e5facap-93f, 0x1.0f3c0cp-6f, 0.0f,
     0.0f, 0x1.3a7498p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32dc58p-52f, 0x1.e7bea6p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b73cc6p-15f, 0x1.c20808p-13f, 0x1.5bddep-114f, 0.0f,
     0x1.c00f72p-37f, 0x1.7c946ep-62f, 0x1.2559dap-89f, 0x1.66f69ap-3f, 0.0f,
     0x1.363f8cp-120f, 0x1.41394ap-69f, 0x1.75c134p-13f, 0.0f, 0x1.df024ep-59f,
     0x1.679344p-57f, 0.0f, 0.0f, 0x1.453496p-66f, 0x1.62c136p-48f, 0.0f, 0.0f, 0.0f,
     0x1.e9f09ap-7f, 0.0f, 0.0f, 0x1.22bccp-109f, 0.0f, 0.0f, 0x1.702072p-12f,
     0x1.58d11ap-49f, 0.0f, 0x1.f6935cp-26f, 0.0f, 0.0f, 0x1.943a6cp-114f, 0.0f, 0.0f,
     0x1.fb210ep-52f, 0x1.61abc2p-48f, 0x1.7be614p-102f, 0x1.2ea1fcp-11f,
     0x1.07ab72p-107f, 0.0f, 0x1.ca843ap-20f, 0.0f, 0x1.7f064cp-86f, 0x1.f3c1c6p-123f,
     0.0f, 0.0f, 0x1.fb0c48p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d3096p-45f, 0.0f, 0.0f,
     0x1.9f1bfap-4f, 0.0f, 0.0f, 0x1.5d4086p-64f, 0x1.0d907ap-61f, 0.0f,
     0x1.343668p-41f, 0.0f, 0.0f, 0x1.67c8d6p-12f, 0.0f, 0.0f, 0x1.b1ee76p-37f,
     0x1.26e4eap-116f, 0.0f, 0x1.abdc52p-55f, 0x1.8f5c5cp-20f, 0x1.25a2f2p-13f,
     0x1.0a289cp-49f, 0.0f, 0x1.f61b0ep-73f, 0x1.879e02p-74f, 0x1.79652ep-33f, 0.0f,
     0x1.69c8bep-75f, 0.0f, 0.0f, 0.0f, 0x1.08c3c4p-23f, 0x1.4fb364p-110f,
     0x1.ee45c2p-51f, 0x1.171aecp-62f, 0x1.b68094p-112f, 0x1.fed0fcp-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.547186p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d85ff2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ed118p-80f, 0.0f, 0x1.839c0ep-18f,
     0.0f, 0x1.23c8f2p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c36bp-91f,
     0x1.f9d55ep-62f, 0.0f, 0x1.d502fap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f7ep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98ee64p-41f, 0.0f, 0.0f,
     0x1.df567ap-94f, 0x1.dc7512p-48f, 0.0f, 0.0f, 0.0f, 0x1.06d706p-103f, 0.0f, 0.0f,
     0x1.3db926p-53f, 0.0f, 0x1.6734ep-63f, 0x1.6632eep-104f, 0.0f, 0x1.d8b938p-84f,
     0x1.9377d2p-107f, 0.0f, 0.0f, 0x1.258a06p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.793d5ap-11f, 0x1.4e0a62p-83f, 0.0f, 0x1.d8bc32p-92f, 0x1.1af3b8p-54f,
     0x1.f33b08p-97f, 0x1.919044p-98f, 0.0f, 0.0f, 0x1.4972f6p-65f, 0.0f,
     0x1.342b5ep-104f, 0x1.7653dep-34f, 0.0f, 0.0f, 0.0f, 0x1.67fdbep-46f,
     0x1.1d3bfep-113f, 0.0f, 0.0f, 0.0f, 0x1.aad4aap-40f, 0x1.ae88dep-63f,
     0x1.18c7b4p-64f, 0.0f, 0.0f, 0.0f, 0x1.eec314p-90f, 0x1.a62b5ap-77f,
     0x1.6d4f76p-93f, 0x1.6737e2p-101f, 0x1.f4638ep-108f, 0x1.466436p-81f, 0.0f,
     0x1.753094p-7f, 0x1.c98434p-18f, 0x1.fba5e4p-67f, 0.0f, 0x1.e418bcp-82f, 0.0f,
     0.0f, 0.0f, 0x1.27a062p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fde804p-90f,
     0.0f, 0x1.8fd6c8p-67f, 0x1.151a6ap-12f, 0.0f, 0x1.656c04p-26f, 0.0f, 0.0f,
     0x1.814p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84b156p-60f, 0.0f, 0x1.3983f2p-87f,
     0x1.6fbd76p-72f, 0.0f, 0.0f, 0x1.2d1ffep-102f, 0x1.8d76e6p-79f, 0x1.abd5c6p-95f,
     0x1.1b2378p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.839e7cp-105f, 0.0f, 0.0f, 0.0f,
     0x1.f2778cp-24f, 0.0f, 0x1.3a7224p-20f, 0.0f, 0.0f, 0x1.cb2872p-13f,
     0x1.145e08p-38f, 0x1.f65576p-31f, 0.0f, 0.0f, 0x1.6143b8p-31f, 0.0f,
     0x1.f5afep-4f, 0x1.c35d76p-107f, 0x1.4964dep-1f, 0.0f, 0x1.475e34p-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.81ccdep-22f, 0x1.11be84p-52f, 0x1.4d70b2p-120f,
     0x1.a7d1e2p-94f, 0x1.92c5e6p-91f, 0.0f, 0.0f, 0.0f, 0x1.6c322ep-16f, 0.0f, 0.0f,
     0x1.67383ep-102f, 0x1.8bda72p-55f, 0x1.fd493p-75f, 0.0f, 0x1.36968cp-39f,
     0x1.669712p-120f, 0.0f, 0.0f, 0.0f, 0x1.9dd5c2p-40f, 0.0f, 0x1.0b50a8p-35f,
     0x1.5fa9bp-11f, 0x1.72c7bap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.632134p-72f, 0x1.fb8a34p-52f, 0x1.5c4384p-113f, 0x1.1d2b96p-29f, 0.0f,
     0x1.ff7c6p-44f, 0x1.c27796p-78f, 0.0f, 0.0f, 0x1.e5939p-46f, 0.0f, 0.0f,
     0x1.8284b4p-58f, 0x1.3fc022p-54f, 0.0f, 0x1.2ebe02p-9f, 0x1.896b98p-122f,
     0x1.16516ep-26f, 0.0f, 0x1.6f7188p-96f, 0x1.a7e6e8p-23f, 0x1.fbcc4cp-13f, 0.0f,
     0x1.dcdcdp-38f, 0.0f, 0x1.b9c542p-40f, 0.0f, 0.0f, 0.0f, 0x1.3bde2cp-1f,
     0x1.8a97f2p-56f, 0x1.5f117ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b442p-45f,
     0x1.9c25eap-20f, 0.0f, 0x1.3fc52cp-38f, 0.0f, 0x1.84854cp-92f, 0.0f, 0.0f,
     0x1.e6e284p-26f, 0.0f, 0.0f, 0x1.fe7902p-39f, 0.0f, 0x1.4497c2p-85f, 0.0f, 0.0f,
     0x1.d56d6p-24f, 0x1.0f277ap-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8cda2p-116f,
     0.0f, 0x1.6af1d4p-109f, 0x1.a4d24p-13f, 0.0f, 0x1.959b98p-114f, 0.0f,
     0x1.bcfedep-36f, 0.0f, 0.0f, 0x1.171018p-100f, 0x1.d1d3bp-126f, 0x1.fdf2d6p-76f,
     0x1.fbd1c4p-18f, 0x1.6ff65p-99f, 0x1.3388f4p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30e36p-4f, 0x1.e8e2bep-33f, 0x1.b76c24p-114f, 0.0f, 0x1.a6469ep-24f,
     0x1.53ecc6p-79f, 0x1.8a74fp-27f, 0.0f, 0x1.e428e8p-109f, 0.0f, 0x1.9b368ep-45f,
     0x1.cce1dp-4f, 0x1.aa4304p-112f, 0x1.837a32p-53f, 0x1.6682c4p-30f, 0.0f,
     0x1.2286p-98f, 0.0f, 0x1.18d1ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.048fe4p-92f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.6e75fcp-57f, 0.0f, 0.0f, 0x1.d38a84p-6f,
     0x1.14216ap-71f, 0x1.77f132p-45f, 0.0f, 0x1.d8fd5p-106f, 0.0f, 0.0f,
     0x1.0bbe42p-119f, 0x1.f867f8p-114f, 0.0f, 0x1.88122cp-71f, 0x1.2adcd4p-37f, 0.0f,
     0x1.e395bp-84f, 0.0f, 0x1.5d2a22p-73f, 0x1.d9774ap-85f, 0x1.3f155p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c07ba2p-17f, 0x1.9db146p-100f, 0x1.e4660ap-70f, 0.0f, 0.0f,
     0x1.454172p-36f, 0x1.a896e2p-83f, 0x1.4bb902p-87f, 0.0f, 0.0f, 0x1.11cb64p-64f,
     0x1.94fd62p-67f, 0x1.bf4648p-102f, 0x1.5e3646p-28f, 0x1.0d25fep-112f, 0.0f, 0.0f,
     0x1.249e04p-29f, 0x1.7f2be6p-65f, 0x1.9473c2p-96f, 0x1.a0faacp-55f,
     0x1.abe8dp-9f, 0x1.17b392p-103f, 0.0f, 0x1.66c856p-74f, 0x1.e3fdcap-111f,
     0x1.881edep-15f, 0x1.3d0436p-89f, 0x1.237e7cp-107f, 0x1.d57ef2p-95f,
     0x1.dda288p-80f, 0x1.0274c2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ffc74p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b07d8ep-60f, 0x1.7842c2p-117f,
     0x1.55628cp-51f, 0.0f, 0x1.c6b1cap-52f, 0x1.158ffep-51f, 0x1.ddb7b2p-68f, 0.0f,
     0.0f, 0x1.c77152p-11f, 0.0f, 0x1.266ef2p-92f, 0x1.81b6e2p-25f, 0x1.8e0d86p-10f,
     0.0f, 0x1.158c66p-75f, 0x1.ee8764p-54f, 0x1.e1f468p-108f, 0x1.4a530ep-49f, 0.0f,
     0x1.eeed9cp-23f, 0.0f, 0x1.ca9daap-120f, 0x1.6c5eb8p-117f, 0x1.a072bp-82f,
     0x1.780b52p-110f, 0.0f, 0x1.c1ad8cp-61f, 0x1.178836p-59f, 0.0f, 0x1.06374cp-7f,
     0x1.5fe79ep-125f, 0x1.e04044p-1f, 0.0f, 0.0f, 0.0f, 0x1.157494p-92f,
     0x1.d6a97p-48f, 0.0f, 0.0f, 0.0f, 0x1.96946ap-13f, 0x1.69e98p-28f,
     0x1.dab494p-46f, 0x1.c4e68p-3f, 0.0f, 0.0f, 0.0f, 0x1.09b1bcp-67f, 0.0f, 0.0f,
     0x1.9d444ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3a3f6p-96f, 0x1.75a3b8p-95f,
     0x1.05deaep-123f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.66bc8ap-25f, 0.0f, 0x1.db3a58p-82f, 0x1.b8303cp-90f, 0.0f, 0.0f, 0.0f,
     0x1.8f5154p-52f, 0.0f, 0.0f, 0x1.a0b8cp-85f, 0x1.7bbf78p-103f, 0.0f,
     0x1.14c872p-68f, 0.0f, 0x1.2ec384p-67f, 0.0f, 0.0f, 0x1.83a552p-56f,
     0x1.e4cc78p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b159ep-63f, 0x1.80a44ap-94f, 0.0f,
     0.0f, 0x1.9b0f9cp-44f, 0x1.41479ep-34f, 0x1.4bd75cp-23f, 0.0f, 0x1.feab36p-13f,
     0x1.0fbb28p-39f, 0.0f, 0x1.dd05dcp-37f, 0x1.4cacf2p-84f, 0x1.0794eap-40f,
     0x1.5c6b6p-89f, 0.0f, 0x1.e96d62p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46398ep-12f, 0x1.91387p-8f, 0.0f, 0.0f, 0.0f, 0x1.49e2d4p-92f,
     0x1.73c5f8p-34f, 0x1.f02d42p-6f, 0x1.55a34p-100f, 0.0f, 0.0f, 0x1.f501fap-6f,
     0x1.c4719ap-66f, 0.0f, 0.0f, 0x1.c011c8p-80f, 0x1.0847aep-41f, 0.0f, 0.0f,
     0x1.a9d3aep-120f, 0x1.7ff7fcp-26f, 0.0f, 0.0f, 0.0f, 0x1.7c5236p-86f,
     0x1.4d37b2p-76f, 0x1.0d18dep-22f, 0.0f, 0x1.13a2aep-63f, 0x1.cdb90ap-87f,
     0x1.f903e2p-108f, 0.0f, 0x1.bb6104p-57f, 0x1.13f416p-70f, 0x1.666ddap-67f, 0.0f,
     0x1.19d11p-14f, 0.0f, 0x1.e7940cp-3f, 0x1.f3f8fp-40f, 0x1.fa1126p-14f,
     0x1.70c2bap-46f, 0.0f, 0x1.03ae32p-77f, 0x1.05bb26p-61f, 0x1.2d8cf4p-33f,
     0x1.2ab35ap-112f, 0.0f, 0.0f, 0.0f, 0x1.0deba6p-12f, 0x1.42f7d8p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af0fa2p-19f, 0.0f, 0x1.91284cp-23f,
     0x1.5f0d1ap-21f, 0x1.27e2e4p-84f, 0.0f, 0.0f, 0x1.72e44p-18f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8e54ap-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2eaf5cp-46f, 0x1.ecb9fep-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81f54p-107f, 0.0f,
     0.0f, 0x1.65d7a6p-108f, 0.0f, 0x1.a5ddbap-40f, 0x1.f19e02p-107f,
     0x1.d03a3ap-105f, 0.0f, 0.0f, 0x1.66d316p-73f, 0.0f, 0x1p0f, 0.0f,
     0x1.f84668p-76f, 0x1.fbe244p-84f, 0.0f, 0.0f, 0x1.f34492p-69f, 0x1.228b26p-33f,
     0.0f, 0.0f, 0x1.be7322p-89f, 0.0f, 0x1.5eefb2p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cae4dcp-4f, 0x1.f08a54p-4f, 0x1.8d71bap-5f, 0.0f, 0x1.8b04ecp-53f,
     0x1.a9f586p-83f, 0.0f, 0x1p0f, 0x1.a32cdep-89f, 0x1.cc7e74p-124f,
     0x1.90c2d8p-46f, 0.0f, 0x1.d9c2fp-62f, 0x1.46d454p-126f, 0x1.283986p-75f, 0.0f,
     0.0f, 0x1.474668p-111f, 0x1.9dd062p-54f, 0x1.196bc4p-56f, 0.0f, 0.0f, 0.0f,
     0x1.b03c1ap-87f, 0x1.15f88ap-50f, 0x1.be2588p-111f, 0x1.11baecp-41f,
     0x1.739e5p-29f, 0.0f, 0.0f, 0x1.b4b488p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f2a676p-120f, 0x1.aab468p-89f, 0.0f, 0x1.8d3accp-82f, 0.0f,
     0x1.d96fcap-126f, 0x1.d204bap-105f, 0x1.75836ap-45f, 0x1.6d1c68p-99f,
     0x1.07c42ep-110f, 0x1.3db956p-120f, 0x1.5320fap-58f, 0.0f, 0.0f, 0.0f,
     0x1.73afbp-5f, 0x1.c390c8p-119f, 0.0f, 0x1.7cdb08p-103f, 0x1.843156p-32f,
     0x1.f5fb9ap-125f, 0x1.45d422p-96f, 0x1.1549fcp-92f, 0.0f, 0.0f, 0x1.8dca2p-63f,
     0.0f, 0.0f, 0x1.a8fb08p-110f, 0.0f, 0x1.87fa66p-123f, 0.0f, 0x1.1d7p-108f,
     0x1.290e82p-97f, 0.0f, 0.0f, 0.0f, 0x1.2deba2p-56f, 0x1.e9a02cp-9f, 0.0f,
     0x1.7ad512p-5f, 0x1.2aa3a8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9efaf6p-69f, 0.0f, 0x1.a4cae8p-77f, 0x1.4d393ep-26f, 0x1.e5d0aep-88f, 0.0f,
     0.0f, 0x1.01c54ap-109f, 0x1.8cdbd8p-99f, 0.0f, 0x1.b785a2p-32f, 0x1.5b1b22p-8f,
     0x1.d0785cp-95f, 0.0f, 0.0f, 0x1.1f46ep-22f, 0x1.4b39b2p-90f, 0.0f, 0.0f,
     0x1.aa6e52p-99f, 0.0f, 0x1.75e778p-19f, 0.0f, 0.0f, 0x1.ee0beep-59f,
     0x1.b93a4ap-96f, 0x1.eb2d54p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75506ep-59f,
     0x1.0c4754p-86f, 0x1.5444c2p-71f, 0x1.339f1p-109f, 0.0f, 0x1.fe8d2cp-1f,
     0x1.d485p-42f, 0.0f, 0.0f, 0.0f, 0x1.1b41dep-111f, 0.0f, 0x1.a5d6bap-81f, 0.0f,
     0x1.44e2e2p-120f, 0x1.26aad4p-102f, 0x1.b2f28cp-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7275d4p-50f, 0x1.2eec42p-34f, 0x1.4db6b6p-118f, 0x1.476d4ap-16f, 0.0f,
     0x1.033288p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c05858p-124f, 0.0f, 0.0f, 0.0f,
     0x1.7a3454p-115f, 0.0f, 0.0f, 0x1.c2233ap-24f, 0x1.c02084p-21f, 0.0f,
     0x1.22d4e2p-34f, 0x1.50894ap-92f, 0x1.480404p-74f, 0.0f, 0x1.91d3aep-86f, 0.0f,
     0x1.ef4d98p-34f, 0x1.f8529p-2f, 0.0f, 0x1.775ca4p-83f, 0x1.5c0ddp-26f, 0.0f,
     0x1.9a2cc8p-110f, 0.0f, 0x1.d4987ap-52f, 0x1.77a054p-73f, 0x1p0f,
     0x1.022c78p-10f, 0x1.de9b54p-3f, 0.0f, 0x1.c8f072p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7cf03ep-57f, 0.0f, 0x1.04d65ep-34f, 0.0f, 0.0f, 0.0f, 0x1.a9406ep-73f, 0.0f,
     0.0f, 0x1.2988ep-2f, 0x1.7febbep-40f, 0.0f, 0.0f, 0x1.e559acp-107f, 0.0f, 0.0f,
     0x1.073764p-93f, 0x1.e83628p-70f, 0.0f, 0x1.814c5p-69f, 0x1.e245f8p-46f, 0.0f,
     0x1.043e42p-14f, 0x1.72303cp-24f, 0x1.59265p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.78613ep-109f, 0x1.2ac16cp-6f, 0.0f, 0.0f, 0x1.2f8b68p-2f, 0.0f,
     0x1.8add9cp-83f, 0.0f, 0x1.13c85p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2aa04p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64b0f8p-51f, 0x1.74514ap-17f, 0.0f,
     0.0f, 0x1.879864p-111f, 0.0f, 0.0f, 0.0f, 0x1.0a53bap-51f, 0x1.a2802cp-87f,
     0x1.e6dc6cp-48f, 0x1.c47fdcp-2f, 0.0f, 0x1.66e9c4p-116f, 0.0f, 0.0f, 0.0f,
     0x1.edcc12p-46f, 0.0f, 0x1.4528a8p-8f, 0x1.5ad71p-95f, 0x1.71438ep-17f,
     0x1.268554p-126f, 0x1.0afb26p-66f, 0.0f, 0.0f, 0x1.cba32ap-105f, 0.0f,
     0x1.88f2f2p-95f, 0x1.42c95cp-61f, 0.0f, 0.0f, 0x1.fdaaa2p-74f, 0.0f, 0.0f, 0.0f,
     0x1.c0a88cp-12f, 0x1.20e4e8p-80f, 0x1.f2fb9ap-3f, 0x1.4cf248p-80f,
     0x1.8e488p-73f, 0x1.fb9802p-101f, 0.0f, 0x1.77a03ap-79f, 0x1.ea0a7ap-20f, 0.0f,
     0x1.298ceep-55f, 0x1.15d43ap-7f, 0x1.c7925ap-59f, 0x1.0b808p-122f, 0.0f, 0.0f,
     0x1.47f28ap-4f, 0x1.0abb3p-111f, 0.0f, 0x1.35e7eap-64f, 0x1.4a270cp-29f,
     0x1.bf29d6p-121f, 0x1.749b5ep-30f, 0x1.3c05a8p-98f, 0x1.7e3bcp-80f, 0.0f, 0.0f,
     0x1.eb3074p-63f, 0x1.56bfbp-4f, 0.0f, 0x1.87a442p-10f, 0x1.294334p-73f,
     0x1.6b14eep-77f, 0x1.156f92p-28f, 0x1.3195bap-22f, 0.0f, 0x1.58c382p-106f, 0.0f,
     0.0f, 0x1.52d4acp-66f, 0.0f, 0x1.4a059p-90f, 0.0f, 0x1.925dap-46f, 0.0f,
     0x1.8ff554p-75f, 0x1.5d5f78p-15f, 0.0f, 0.0f, 0x1.46f072p-95f, 0.0f, 0.0f, 0.0f,
     0x1.86b512p-52f, 0x1.437648p-123f, 0.0f, 0.0f, 0.0f, 0x1.b769bap-43f,
     0x1.53801ep-54f, 0x1.dc4592p-81f, 0x1.fa7c56p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b4666p-33f, 0x1.349b58p-5f, 0.0f, 0x1.89cc48p-16f,
     0.0f, 0x1.946848p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95bbcp-43f,
     0x1.9b96c2p-115f, 0x1.d48574p-2f, 0x1.c6d264p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c46218p-46f, 0x1.30386p-6f, 0x1.54a43ep-69f, 0x1.812448p-59f,
     0x1.5b6e96p-88f, 0x1.0883bp-89f, 0.0f, 0x1.9e6038p-55f, 0.0f, 0x1.3ee934p-32f,
     0.0f, 0x1.fd6a4ap-31f, 0x1.754068p-24f, 0.0f, 0.0f, 0x1.796716p-119f, 0.0f,
     0x1.bf6bbap-3f, 0.0f, 0x1.68ee24p-42f, 0x1.8e10bap-101f, 0.0f, 0x1.6abf4ap-121f,
     0.0f, 0.0f, 0x1.1469aep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1335a6p-116f,
     0x1.41c568p-111f, 0x1.eaf616p-7f, 0.0f, 0x1.822b2cp-45f, 0.0f, 0.0f, 0.0f,
     0x1.3b883ep-103f, 0.0f, 0x1.64206ep-89f, 0x1.b5ee3cp-117f, 0x1.967cb4p-87f,
     0x1.3ecdeap-87f, 0x1.bf8f2cp-1f, 0.0f, 0.0f, 0x1.519ae6p-125f, 0.0f,
     0x1.f113cp-42f, 0x1.d52caep-4f, 0.0f, 0x1.247a4ep-111f, 0x1.cadc62p-19f,
     0x1.d1d716p-122f, 0x1.29df1p-19f, 0x1.29e536p-18f, 0x1.687adap-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44e6dap-92f, 0x1.8d5a7ep-125f, 0x1.5ef74ep-27f, 0x1.084f2ep-124f,
     0.0f, 0.0f, 0x1.c6b33cp-80f, 0.0f, 0.0f, 0x1.e0a972p-59f, 0.0f, 0x1.af8f3p-81f,
     0x1.b49454p-96f, 0x1.b49d24p-95f, 0.0f, 0x1.80cc44p-47f, 0x1.0f1148p-25f,
     0x1.b156fp-22f, 0.0f, 0x1.9c7d08p-74f, 0.0f, 0.0f, 0x1.d82ef2p-87f, 0.0f, 0.0f,
     0x1.9c4d2ap-95f, 0.0f, 0.0f, 0x1.d41258p-57f, 0.0f, 0x1.35387ep-126f,
     0x1.cb8b36p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.009dc4p-7f, 0.0f, 0x1.4dd49p-28f,
     0.0f, 0x1.eb3a64p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b9dcep-87f,
     0x1.a401bep-66f, 0.0f, 0.0f, 0.0f, 0x1.b024cep-45f, 0x1.9e0e1cp-70f,
     0x1.ed6e28p-31f, 0x1.08c36ep-9f, 0x1.32ea0ep-80f, 0.0f, 0.0f, 0.0f,
     0x1.bf204ep-68f, 0x1.6eba8ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc4d86p-28f,
     0x1.d24b3ap-114f, 0.0f, 0x1.94b4acp-104f, 0.0f, 0.0f, 0x1.4fb7e8p-121f, 0.0f,
     0x1.9cef8ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afc402p-113f, 0.0f, 0.0f,
     0x1.04975p-96f, 0x1.9d2832p-18f, 0x1.90a48ap-54f, 0x1.fae382p-58f,
     0x1.3a7f16p-95f, 0.0f, 0.0f, 0.0f, 0x1.77c5eap-94f, 0.0f, 0.0f, 0x1.da3568p-69f,
     0.0f, 0x1.15b05p-97f, 0.0f, 0.0f, 0x1.e68b28p-49f, 0x1.cdc892p-44f, 0.0f, 0.0f,
     0x1.fd839p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a950ccp-24f, 0.0f,
     0x1.458478p-47f, 0x1.f6f10ep-72f, 0.0f, 0.0f, 0x1.c02acap-91f, 0.0f,
     0x1.4bdc64p-29f, 0.0f, 0x1.9699aap-27f, 0.0f, 0.0f, 0x1.68ee78p-42f, 0.0f,
     0x1.b718cap-14f, 0x1.90f9dp-19f, 0.0f, 0x1.136d5cp-105f, 0.0f, 0x1.4fa8a2p-27f,
     0.0f, 0.0f, 0.0f, 0x1.4f201p-82f, 0.0f, 0.0f, 0x1.5115c8p-37f, 0.0f,
     0x1.cb58aep-90f, 0.0f, 0.0f, 0.0f, 0x1.422158p-126f, 0x1.9f5a82p-73f,
     0x1.d7e55p-76f, 0.0f, 0.0f, 0x1.fcda1ep-77f, 0.0f, 0.0f, 0x1.83e67ap-78f, 0.0f,
     0x1.9dae2p-23f, 0.0f, 0x1.3ffa6p-8f, 0.0f, 0.0f, 0x1.aa3282p-124f, 0.0f,
     0x1.b9b618p-30f, 0.0f, 0x1.e9bdcp-111f, 0x1.c9664p-92f, 0x1.3fef72p-14f,
     0x1.617c5p-38f, 0x1.a4a4bap-91f, 0.0f, 0x1.2f693p-48f, 0x1.9c343p-52f,
     0x1.2b340ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83964ap-99f, 0x1.6d20fp-20f, 0.0f,
     0x1.dbbdc4p-109f, 0.0f, 0.0f, 0x1.7323ap-30f, 0x1.a8ef48p-79f, 0x1.c74f2ap-65f,
     0.0f, 0.0f, 0.0f, 0x1.80fd28p-25f, 0x1.62a21ap-16f, 0x1.f9ba28p-13f, 0.0f, 0.0f,
     0x1.3bdcecp-99f, 0x1.a5bfc4p-115f, 0.0f, 0x1.cda026p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1970a2p-106f, 0x1.051722p-50f, 0.0f, 0x1.39b2aep-52f, 0.0f, 0.0f,
     0.0f, 0x1.68a6d8p-28f, 0x1.e0c356p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4bddc4p-77f, 0.0f, 0.0f, 0x1.719a9p-36f, 0x1.58c2cep-44f,
     0.0f, 0x1.aaa9c8p-56f, 0x1.823ac2p-53f, 0x1.866ddep-112f, 0x1.64d246p-77f,
     0x1.16601p-57f, 0x1.eb39a6p-34f, 0.0f, 0.0f, 0x1.9a2506p-28f, 0.0f,
     0x1.b3252p-100f, 0.0f, 0x1.68b09ep-68f, 0.0f, 0.0f, 0x1.2e9c2p-16f,
     0x1.446338p-105f, 0.0f, 0x1.66020ep-79f, 0x1.542558p-57f, 0x1.e558b2p-12f, 0.0f,
     0.0f, 0x1.4952acp-92f, 0x1.21835ep-108f, 0x1.d4bffap-106f, 0.0f, 0.0f, 0.0f,
     0x1.e98244p-2f, 0x1.fb534cp-41f, 0x1.e9691p-68f, 0.0f, 0.0f, 0x1.28f16ap-62f,
     0x1.0b11cap-11f, 0x1p0f, 0.0f, 0.0f, 0x1.87f4ccp-31f, 0x1.1284ccp-116f,
     0x1.d5e844p-59f, 0.0f, 0.0f, 0.0f, 0x1.740c34p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f10d9p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.062e82p-60f, 0.0f, 0.0f,
     0.0f, 0x1.e9646ep-55f, 0x1.931c9ap-32f, 0x1.a462ap-45f, 0x1.de293ap-68f,
     0x1.e86bdap-92f, 0.0f, 0.0f, 0x1.e14ff2p-38f, 0x1.7c00dcp-71f, 0.0f, 0.0f, 0.0f,
     0x1.420388p-61f, 0x1.7fc4cep-41f, 0x1.c2e4dp-39f, 0x1.72cba8p-113f,
     0x1.a2e1fep-25f, 0.0f, 0.0f, 0.0f, 0x1.60c58p-19f, 0x1.fba0c4p-86f, 0.0f, 0.0f,
     0.0f, 0x1.1fa552p-88f, 0.0f, 0.0f, 0.0f, 0x1.7fcc6ep-72f, 0x1.6594eap-26f,
     0x1.236c02p-100f, 0x1.1bccfcp-66f, 0.0f, 0.0f, 0.0f, 0x1.3f21d6p-42f, 0.0f,
     0x1.789b4p-46f, 0x1.35026ep-52f, 0x1.25e346p-28f, 0x1.2bdfdap-75f,
     0x1.d621eep-108f, 0x1.d1538p-62f, 0x1.3321ep-72f, 0x1.b8c1c6p-31f, 0.0f, 0.0f,
     0x1.4312aep-87f, 0x1.d2f166p-91f, 0x1.e1536p-3f, 0.0f, 0x1.b84c6ap-28f,
     0x1.6efeccp-6f, 0.0f, 0x1.95379p-78f, 0x1.fa3adap-42f, 0x1.bb5b18p-37f,
     0x1.cec0c4p-44f, 0x1.078da2p-104f, 0.0f, 0.0f, 0.0f, 0x1.5bff02p-81f, 0.0f, 0.0f,
     0.0f, 0x1.9d389cp-75f, 0x1.bbb49cp-5f, 0x1.d5b578p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f4994p-26f, 0.0f, 0.0f, 0x1.d9b67ep-92f, 0x1.8f91e6p-72f, 0.0f, 0.0f,
     0.0f, 0x1.5a946ap-2f, 0x1.070cdp-8f, 0.0f, 0x1.ec13dap-20f, 0x1.f9f934p-108f,
     0x1.0c5b28p-8f, 0x1.9c081cp-18f, 0.0f, 0.0f, 0x1.c0e812p-124f, 0.0f, 0.0f, 0.0f,
     0x1.b5a3f2p-73f, 0x1.f5fcf8p-79f, 0x1.ce013ep-4f, 0.0f, 0x1.efcaf8p-78f, 0.0f,
     0x1.52827ep-59f, 0.0f, 0x1.d855fcp-37f, 0x1.c43fe8p-72f, 0.0f, 0x1.f71a86p-29f,
     0x1.a5fd28p-107f, 0x1.0fec62p-47f, 0.0f, 0x1.707874p-121f, 0x1.f439eap-31f,
     0x1.332b84p-36f, 0.0f, 0x1.306be6p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cdbef6p-30f, 0x1.f86e28p-72f, 0.0f, 0x1.2ce73ap-124f, 0.0f, 0x1.1c5a1ep-120f,
     0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_fmodf4_kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_fmodf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fmodf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
