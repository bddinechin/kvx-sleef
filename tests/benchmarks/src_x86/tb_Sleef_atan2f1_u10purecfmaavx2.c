/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f1_u10purecfma.c --function \
 *     Sleef_atan2f1_u10purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     x86_sse2
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
     0x1.3bdc7cp-75f, 0.0f, 0x1.dc3346p-16f, 0x1.489998p-63f, 0.0f, 0.0f,
     0x1.bd9afap-90f, 0x1.323358p-52f, 0x1.7a8c9ep-65f, 0.0f, 0.0f, 0x1.fd53e8p-53f,
     0x1.8e924cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93f118p-120f, 0.0f, 0x1.200fbcp-96f,
     0x1.2ec314p-16f, 0x1.5dc4b4p-46f, 0.0f, 0.0f, 0x1.bee1a8p-64f, 0x1.e64ec2p-20f,
     0x1.e31f3p-86f, 0x1.2a268cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb0458p-60f, 0.0f,
     0.0f, 0x1.b770d4p-97f, 0.0f, 0x1.652e7cp-27f, 0x1.02f738p-96f, 0x1.fa5dbcp-26f,
     0.0f, 0.0f, 0x1.ce1828p-119f, 0.0f, 0x1.923ccp-108f, 0.0f, 0.0f, 0.0f,
     0x1.f70104p-32f, 0.0f, 0x1.b65022p-99f, 0.0f, 0x1.b510d2p-96f, 0.0f,
     0x1.89fae8p-102f, 0.0f, 0x1.ffc896p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63875cp-72f,
     0x1.a7aa5cp-27f, 0.0f, 0x1.c851d2p-17f, 0x1.11a28ap-9f, 0x1.5e65a2p-36f, 0.0f,
     0x1.8eee6ep-92f, 0x1.6e00e2p-76f, 0.0f, 0.0f, 0.0f, 0x1.fdecfap-101f, 0.0f, 0.0f,
     0x1.b49086p-2f, 0.0f, 0x1.3c399ap-126f, 0x1.8a3742p-101f, 0x1.ecd8cp-1f,
     0x1.9e4272p-53f, 0.0f, 0x1.b3c324p-18f, 0x1.fde32ap-103f, 0x1.dbef4p-80f,
     0x1.73fc4cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53af0ep-13f, 0x1.628a0cp-74f,
     0x1.4b2b6cp-23f, 0x1.d3ba4p-94f, 0.0f, 0x1.d073c6p-23f, 0x1.85096cp-26f,
     0x1.2df906p-83f, 0.0f, 0x1.7ed234p-87f, 0x1.83fb66p-53f, 0x1.e35228p-77f, 0.0f,
     0.0f, 0x1.abc1d4p-54f, 0x1.2054dep-95f, 0.0f, 0x1.1d5628p-112f, 0x1.b60a56p-30f,
     0x1.c875cp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b4432p-84f, 0x1.17ecdap-34f,
     0x1.efe41p-89f, 0x1.042bbp-4f, 0.0f, 0.0f, 0.0f, 0x1.eb631cp-60f,
     0x1.66239ap-98f, 0.0f, 0.0f, 0x1.c70f92p-105f, 0.0f, 0.0f, 0.0f, 0x1.e91278p-46f,
     0.0f, 0x1.694a7ap-115f, 0x1.90c442p-36f, 0x1.e4a724p-108f, 0.0f, 0x1.37241cp-68f,
     0.0f, 0.0f, 0.0f, 0x1.bfbf1ap-11f, 0x1.1eb566p-101f, 0.0f, 0.0f, 0x1.562c8p-93f,
     0x1.ec4152p-92f, 0x1.650e2cp-67f, 0x1.999deep-57f, 0.0f, 0.0f, 0.0f,
     0x1.07c7d4p-34f, 0x1.193226p-126f, 0.0f, 0x1.ed4e92p-21f, 0x1.9c2742p-21f,
     0x1.6dd574p-27f, 0.0f, 0x1.345f08p-52f, 0x1.8bb59ap-12f, 0.0f, 0x1.9386a8p-5f,
     0.0f, 0x1.807fcp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d41c9ep-73f,
     0x1.8c485ep-11f, 0.0f, 0.0f, 0.0f, 0x1.77e9e4p-120f, 0x1.d0a74ap-106f,
     0x1.d8def8p-7f, 0.0f, 0.0f, 0x1.446f1cp-11f, 0x1.fec316p-61f, 0.0f,
     0x1.bf1006p-114f, 0x1p0f, 0.0f, 0x1.071b4p-37f, 0.0f, 0.0f, 0.0f,
     0x1.4dcdeap-92f, 0.0f, 0.0f, 0x1.af62c6p-87f, 0.0f, 0x1.f97d04p-23f, 0.0f,
     0x1.819474p-44f, 0x1.42293ap-8f, 0.0f, 0x1.0e0f62p-28f, 0.0f, 0.0f, 0.0f,
     0x1.89ab12p-10f, 0x1.bf1f32p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.25e3f4p-78f, 0.0f, 0x1.daae52p-45f, 0.0f, 0.0f, 0x1.f5852ap-94f, 0.0f,
     0x1.59982ap-88f, 0.0f, 0x1.4f0f9p-12f, 0x1.95b938p-114f, 0x1.7572e4p-30f, 0.0f,
     0.0f, 0.0f, 0x1.7f895cp-12f, 0x1.c12f4ep-20f, 0.0f, 0x1.ab76aap-122f,
     0x1.7f0d7p-3f, 0x1.f3833ep-77f, 0x1.c517p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f1b96p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1300fap-3f, 0.0f, 0.0f,
     0x1.0145e6p-50f, 0.0f, 0.0f, 0.0f, 0x1.db8dc8p-19f, 0x1.41b2cep-66f,
     0x1.f6bf7ap-50f, 0x1.9dfeeep-14f, 0.0f, 0x1.cf73c4p-33f, 0.0f, 0.0f,
     0x1.e95a2p-97f, 0x1.f52342p-39f, 0x1.7f3e3p-98f, 0x1.8d47dap-122f, 0.0f,
     0x1.a14d18p-66f, 0x1.12cfd8p-49f, 0.0f, 0x1.4096f6p-31f, 0.0f, 0.0f, 0.0f,
     0x1.44c4bap-79f, 0x1.17a5ecp-75f, 0x1.b450a4p-91f, 0x1.0c057cp-118f, 0.0f,
     0x1.9b82ep-55f, 0.0f, 0x1.79ca14p-109f, 0x1.709a52p-89f, 0.0f, 0.0f,
     0x1.f15738p-84f, 0.0f, 0x1.c6d87ap-81f, 0x1.6b1aa2p-63f, 0.0f, 0.0f, 0.0f,
     0x1.d26974p-48f, 0.0f, 0x1.1bc49cp-47f, 0x1.3a8726p-103f, 0.0f, 0x1.bc2cacp-42f,
     0.0f, 0x1.992dd2p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b9cb4p-42f, 0x1.b898p-108f,
     0.0f, 0.0f, 0.0f, 0x1.f90454p-72f, 0.0f, 0x1.abb848p-123f, 0x1.be66bap-97f, 0.0f,
     0x1.6ac70cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.956e08p-21f, 0x1.a2331ep-7f, 0x1.ee7f42p-126f, 0x1.ded926p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.567c92p-107f, 0x1.e7831cp-54f,
     0x1.9bce22p-89f, 0x1.99391ap-66f, 0.0f, 0.0f, 0x1.175792p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b95b14p-124f, 0x1.ce288ap-70f, 0x1.36504p-64f, 0x1.12e72ep-102f, 0.0f,
     0x1.bb2e0ap-30f, 0x1.ac3a46p-79f, 0x1.d7eb12p-79f, 0x1.1d6b16p-59f,
     0x1.eadb3p-17f, 0.0f, 0x1.1da2dap-49f, 0x1.dec86ep-67f, 0x1.8fde3cp-64f, 0.0f,
     0x1.ee3a36p-79f, 0x1.dff2cap-1f, 0x1.f84f08p-76f, 0.0f, 0.0f, 0x1.bb1cep-12f,
     0.0f, 0.0f, 0.0f, 0x1.9f3f4ep-116f, 0.0f, 0.0f, 0.0f, 0x1.d20cep-3f, 0.0f,
     0x1.cf4e92p-10f, 0x1.2460a2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdeb8ap-34f, 0.0f, 0x1.383302p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.268be4p-95f, 0.0f, 0x1.7a77a4p-28f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9e71dap-76f, 0x1.0bd2b6p-124f, 0x1.977f9cp-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.74e456p-92f, 0x1.21bcbcp-4f, 0.0f, 0.0f, 0x1.af13aep-47f, 0.0f,
     0x1.66673ap-85f, 0x1p0f, 0x1.2cce1ep-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93d79ap-37f, 0x1.d539c2p-44f, 0x1.1f2186p-111f, 0.0f, 0.0f, 0x1.072d54p-81f,
     0x1.5925cp-98f, 0.0f, 0.0f, 0x1.b18a5ap-65f, 0x1.e7bac8p-47f, 0.0f, 0.0f, 0.0f,
     0x1.79758ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb827ap-9f, 0.0f, 0.0f,
     0x1.1d07bcp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3df0a6p-36f, 0.0f, 0.0f,
     0x1.1ad656p-79f, 0x1.21be16p-81f, 0.0f, 0x1.29d69cp-23f, 0.0f, 0.0f,
     0x1.b38606p-87f, 0x1.e9ffe6p-92f, 0x1.c86048p-99f, 0x1.81efd8p-20f,
     0x1.6cf9e4p-112f, 0.0f, 0x1.76d5aap-119f, 0x1.ddc136p-6f, 0.0f, 0x1.41a58ep-89f,
     0.0f, 0.0f, 0x1.d2b77ep-28f, 0x1.96a272p-95f, 0.0f, 0x1.ac279p-112f, 0.0f, 0.0f,
     0x1.3819d2p-102f, 0.0f, 0x1.025604p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a05b94p-67f, 0x1.4eb2bcp-36f, 0.0f, 0x1.e8f934p-90f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.ba09eap-41f, 0x1.cfb846p-13f, 0x1.afbd32p-27f, 0x1.595816p-121f,
     0.0f, 0.0f, 0x1.4c1ecp-83f, 0.0f, 0.0f, 0x1.2734a2p-73f, 0.0f, 0.0f, 0.0f,
     0x1.c1ae8p-2f, 0x1.c2e5d8p-91f, 0x1.530b92p-49f, 0.0f, 0x1.f42c34p-74f,
     0x1.d729fcp-77f, 0x1.5f8036p-6f, 0.0f, 0x1.0021b4p-66f, 0x1.0d11e4p-85f,
     0x1.08e34ap-73f, 0x1.d5e3fap-126f, 0.0f, 0.0f, 0x1.1454fcp-93f, 0x1.db5eb4p-8f,
     0x1.577c94p-46f, 0.0f, 0x1.6f60a8p-83f, 0x1.0bbb6ap-29f, 0.0f, 0x1.e0ab82p-22f,
     0x1.b869ccp-109f, 0x1.6cfc9ep-55f, 0x1.e15638p-21f, 0.0f, 0x1.6144e4p-87f,
     0x1.9c4074p-51f, 0.0f, 0.0f, 0.0f, 0x1.75bfeep-68f, 0.0f, 0x1.6ce7e8p-29f, 0.0f,
     0x1.8b71d6p-3f, 0x1.086c14p-72f, 0x1.590644p-83f, 0.0f, 0.0f, 0x1.664e56p-71f,
     0x1.e43672p-6f, 0x1.3be1ep-75f, 0.0f, 0x1.5cc9aep-19f, 0.0f, 0x1.57fb9p-46f,
     0.0f, 0x1.304c44p-48f, 0.0f, 0x1.9b4204p-6f, 0.0f, 0x1.2a77cp-102f, 0.0f,
     0x1.13f3eep-69f, 0.0f, 0.0f, 0.0f, 0x1.edc652p-57f, 0x1.13e52p-44f, 0.0f, 0.0f,
     0x1.c59e72p-121f, 0.0f, 0x1.f3ee44p-50f, 0x1.08c93ep-21f, 0.0f, 0.0f,
     0x1.4620a2p-93f, 0.0f, 0.0f, 0x1.859adap-86f, 0.0f, 0x1.77c5dep-42f,
     0x1.324594p-90f, 0.0f, 0x1.dc8c74p-31f, 0.0f, 0x1.64dd4p-94f, 0x1.0a4ebap-50f,
     0x1.760d1ep-37f, 0x1.1b48fcp-66f, 0.0f, 0x1.1b06f6p-65f, 0.0f, 0.0f, 0.0f,
     0x1.af5b28p-88f, 0x1.2dfb46p-4f, 0x1.30d67p-88f, 0x1.e4ea94p-49f,
     0x1.67e286p-95f, 0.0f, 0.0f, 0.0f, 0x1.dbbeep-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26a70ap-84f, 0.0f, 0x1.963f6p-4f, 0.0f, 0.0f, 0x1.31cbbp-84f,
     0x1.13ab6ap-84f, 0x1.14d64ep-18f, 0x1.d982fap-99f, 0.0f, 0.0f, 0x1.170db2p-9f,
     0.0f, 0x1.3f0f6ep-82f, 0.0f, 0x1.5d0c6p-77f, 0x1.2edcaep-62f, 0x1.9f84fcp-87f,
     0.0f, 0.0f, 0x1.55020ep-63f, 0.0f, 0x1.f779fep-23f, 0x1.536002p-41f,
     0x1.c9de52p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf7726p-48f, 0x1.bbf2eep-79f,
     0x1.4716b4p-120f, 0x1.c7b8dcp-49f, 0.0f, 0.0f, 0x1.0d046cp-73f, 0x1.1833f4p-25f,
     0x1.e7e0bcp-105f, 0.0f, 0x1.d7bbbep-3f, 0.0f, 0x1.794c3ep-112f, 0.0f,
     0x1.8ce16cp-83f, 0x1.2d752ep-1f, 0x1.359822p-26f, 0x1.2db658p-108f,
     0x1.012738p-47f, 0x1.e83786p-8f, 0x1.7398aep-6f, 0.0f, 0.0f, 0x1.cb3b1ap-69f,
     0x1.08ad2p-101f, 0x1.be4228p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54b906p-47f,
     0x1.1ea07ap-49f, 0.0f, 0x1p0f, 0.0f, 0x1.83eac6p-1f, 0.0f, 0x1.58f8e4p-71f, 0.0f,
     0x1.6f1812p-113f, 0.0f, 0x1.e05b2ep-33f, 0x1.35ddep-95f, 0.0f, 0x1.9c046ap-7f,
     0.0f, 0x1.d3da8ep-109f, 0.0f, 0.0f, 0x1.054aeep-27f, 0x1.0ce726p-103f,
     0x1.179542p-78f, 0x1.311556p-85f, 0x1.9726b4p-98f, 0x1.4f24dcp-37f, 0.0f,
     0x1.319c2ap-91f, 0x1.90f58ap-22f, 0x1.23c046p-53f, 0.0f, 0x1.5845bcp-56f, 0.0f,
     0.0f, 0x1.5226a4p-75f, 0.0f, 0x1.4b8e5p-115f, 0x1.66e6ap-105f, 0.0f,
     0x1.6fe6eap-92f, 0x1.4a8ffep-39f, 0x1.f0824cp-57f, 0x1.d7a88cp-28f, 0.0f, 0.0f,
     0.0f, 0x1.da3908p-125f, 0x1.32f02p-10f, 0.0f, 0x1.8f7f8ep-119f, 0x1.80b45cp-99f,
     0.0f, 0x1.73c5dep-95f, 0x1.e1da92p-28f, 0.0f, 0x1.2dd8d8p-47f, 0x1.efdbe2p-7f,
     0x1.9faec4p-67f, 0x1.d1aebp-120f, 0.0f, 0x1.04341cp-94f, 0.0f, 0x1.67cdf2p-16f,
     0.0f, 0.0f, 0.0f, 0x1.e9b6aap-54f, 0.0f, 0x1.7fbcecp-4f, 0x1.036284p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.829afp-120f, 0.0f, 0x1.5413f8p-32f, 0x1.eaddd8p-6f,
     0x1.02e48cp-58f, 0x1.23fd4ep-101f, 0.0f, 0x1.5a9566p-118f, 0x1.2ab862p-49f,
     0x1.d58cd2p-58f, 0x1.ccb7a6p-71f, 0x1.7b300ap-1f, 0x1.2fcdf6p-62f, 0.0f,
     0x1.9d0966p-115f, 0x1.c020e4p-23f, 0x1.625c9ap-54f, 0x1.c3ed7ap-36f,
     0x1.4407ecp-70f, 0.0f, 0x1.2864e8p-21f, 0.0f, 0x1.1474e2p-75f, 0x1.d770f8p-93f,
     0.0f, 0x1.5c1d5p-26f, 0.0f, 0.0f, 0x1.e5dd2p-116f, 0x1.ad122p-82f,
     0x1.ca2bccp-47f, 0.0f, 0x1.0bc2eap-104f, 0.0f, 0.0f, 0.0f, 0x1.d7d8ep-7f,
     0x1.59bfe6p-78f, 0x1.9e49c2p-35f, 0x1.219cc2p-41f, 0x1.40f2ep-40f,
     0x1.fdcfcap-78f, 0.0f, 0.0f, 0x1.65a262p-67f, 0x1.095b2p-20f, 0.0f,
     0x1.374004p-93f, 0x1.5bc0bp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5414b8p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebfcc2p-71f, 0x1.5fb354p-37f, 0x1.d78c14p-14f,
     0x1.643506p-90f, 0x1.d8a8b2p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17098ap-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f755aap-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7f02cp-70f, 0x1.233c92p-126f, 0x1.0ebc4ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d5acbep-40f, 0x1.f0f0cp-7f, 0x1.fa1b28p-104f, 0x1.d9ef72p-92f,
     0x1.693b16p-87f, 0.0f, 0x1.e2de62p-61f, 0x1.99639ap-29f, 0x1.19f9dp-39f,
     0x1.5be2ap-57f, 0.0f, 0x1.6a045ep-57f, 0.0f, 0.0f, 0x1.0fc4dap-91f, 0.0f, 0.0f,
     0x1.6ccc7ep-87f, 0x1.b81692p-52f, 0.0f, 0.0f, 0x1.56f8dcp-61f, 0x1.501884p-57f,
     0x1.4f0bacp-121f, 0x1.5f1528p-68f, 0x1.707bdep-117f, 0x1.1e789ep-101f, 0.0f,
     0.0f, 0x1.cce468p-111f, 0.0f, 0x1.28ba8cp-65f, 0.0f, 0x1.d5989p-11f,
     0x1.1c343ep-64f, 0.0f, 0.0f, 0x1.12d618p-4f, 0.0f, 0x1.891a9cp-6f,
     0x1.53c814p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe7ae4p-86f,
     0x1.7dabf8p-66f, 0.0f, 0x1.c55872p-125f, 0x1.00649p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0bcc88p-20f, 0x1.1a7bcp-8f, 0x1.3a0e0cp-122f, 0.0f, 0.0f,
     0x1.824018p-21f, 0.0f, 0.0f, 0x1.7ec478p-100f, 0x1.f9c64cp-41f, 0.0f,
     0x1.a388b2p-45f, 0.0f, 0.0f, 0.0f, 0x1.fff9c2p-75f, 0x1.a4c31cp-2f, 0.0f, 0.0f,
     0x1.722b74p-65f, 0x1.5b136cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d4eep-113f,
     0x1.8d883p-42f, 0.0f, 0x1.77b4fp-2f, 0.0f, 0.0f, 0x1.72f938p-45f, 0.0f, 0.0f,
     0.0f, 0x1.7e3286p-47f, 0x1.fdf872p-96f, 0x1.5565dcp-46f, 0x1.4a407p-105f, 0.0f,
     0.0f, 0.0f, 0x1.914768p-29f, 0.0f, 0.0f, 0x1.4d77f6p-43f, 0.0f, 0x1.e6e506p-77f,
     0x1.dc9124p-63f, 0.0f, 0x1.5322p-90f, 0x1.ecb386p-88f, 0x1.b8944p-23f, 0.0f,
     0.0f, 0x1.b6745ep-113f, 0x1.4ec776p-48f, 0x1.84e91cp-21f, 0x1.ff132cp-69f,
     0x1.ccdc66p-62f, 0x1.195592p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.203292p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93cf82p-21f, 0x1.5a6e74p-85f, 0.0f,
     0.0f, 0x1.0ce08ep-67f, 0.0f, 0x1.77844cp-120f, 0.0f, 0x1.abe418p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3d60bp-25f, 0x1.6cfaecp-51f, 0x1.d049bcp-11f, 0.0f,
     0x1.ab5a4cp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90fee2p-80f,
     0.0f, 0.0f, 0x1.4a46bep-114f, 0.0f, 0x1.0798e4p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0.0f, 0x1.03f2e2p-29f, 0x1.fcf694p-75f, 0.0f, 0.0f, 0.0f, 0x1.d9434ep-82f,
     0.0f, 0x1.07c932p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d7d32p-33f,
     0x1.87cap-12f, 0.0f, 0x1.c1bbbp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d17196p-17f,
     0.0f, 0x1.51579ep-58f, 0x1.88ab2cp-105f, 0x1.7bd3ecp-55f, 0.0f, 0.0f,
     0x1.a5163cp-5f, 0x1.dcae26p-92f, 0.0f, 0.0f, 0x1.c8acf4p-83f, 0x1.4e6376p-33f,
     0x1.6cbd2p-16f, 0.0f, 0x1.dea6bep-76f, 0x1.73cce2p-22f, 0x1.077b9ap-39f, 0.0f,
     0x1.bfa5c2p-117f, 0x1.099bcap-76f, 0x1.bee7f4p-48f, 0x1.08828p-72f, 0.0f,
     0x1.754dbep-51f, 0x1.0bc3fcp-106f, 0x1.aad2dcp-84f, 0x1.b0c22ep-95f, 0.0f,
     0x1.f0c0c2p-80f, 0x1.0a1c1p-52f, 0x1.737878p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc5f2cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bb776p-96f, 0x1.2cafd6p-100f,
     0.0f, 0x1.7ea9bp-123f, 0.0f, 0x1.13116ap-76f, 0.0f, 0x1.684cf6p-123f, 0.0f, 0.0f,
     0x1.79cea8p-73f, 0.0f, 0x1.347406p-26f, 0x1.9cbb6ep-39f, 0x1.eee524p-31f, 0.0f,
     0x1.e8c148p-13f, 0.0f, 0x1.62ef8ap-23f, 0x1.287512p-27f, 0.0f, 0x1.ab21d8p-7f,
     0x1.49d8f6p-4f, 0.0f, 0.0f, 0x1.2ae1d4p-19f, 0.0f, 0x1.12981cp-3f,
     0x1.bf3c96p-57f, 0.0f, 0.0f, 0.0f, 0x1.b143e8p-94f, 0.0f, 0x1.4f72fap-31f, 0.0f,
     0x1.5efadcp-102f, 0.0f, 0.0f, 0x1.d5dcaap-63f, 0x1.15cc1cp-26f, 0x1.05c2ccp-101f,
     0x1.e2ec78p-44f, 0.0f, 0x1.5c5a62p-38f, 0.0f, 0x1.b8e462p-35f, 0.0f, 0.0f, 0.0f,
     0x1.d86ffep-58f, 0x1.ba9ca6p-121f, 0x1.f42316p-53f, 0x1.cb1252p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7f6b9p-98f, 0.0f, 0.0f, 0x1.aae502p-15f, 0.0f, 0.0f, 0.0f,
     0x1.005cd2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95f444p-122f,
     0.0f, 0x1.86e8aep-94f, 0x1.e202bep-88f, 0.0f, 0.0f, 0.0f, 0x1.edb0eep-8f,
     0x1.1c7e16p-24f, 0x1.cb4a32p-103f, 0.0f, 0x1.db1368p-83f, 0.0f, 0x1.64d774p-10f,
     0.0f, 0x1.adbc18p-34f, 0x1.2ce286p-108f, 0x1.1f90e8p-68f, 0x1.0d59a6p-9f,
     0x1.a768d2p-47f, 0x1.836054p-8f, 0x1.86a504p-95f, 0x1.abe1ecp-75f, 0.0f,
     0x1.974b7ep-102f, 0x1.bd92a2p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26b26p-123f,
     0x1.8bdd1ep-36f, 0.0f, 0.0f, 0x1.734fdp-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.445c64p-44f, 0x1.0978p-14f, 0.0f, 0x1.2dda72p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cdd6eep-96f, 0.0f, 0x1.736768p-18f, 0x1.dc0518p-86f, 0.0f, 0.0f,
     0x1.57de6cp-82f, 0.0f, 0x1.cf829ap-117f, 0.0f, 0x1.20a8ep-101f, 0x1.656d9p-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec96dap-4f, 0x1.546c4p-36f, 0x1.b967c6p-46f,
     0x1.d0c9b8p-53f, 0.0f, 0x1.a842e6p-41f, 0.0f, 0.0f, 0x1.e0acep-48f,
     0x1.e8c05p-92f, 0.0f, 0.0f, 0.0f, 0x1.63ccbp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bf56ep-101f, 0x1.3603bap-23f, 0x1.da989ep-100f, 0x1.01ac08p-106f,
     0x1.665836p-110f, 0x1.e8cf8ap-48f, 0x1.0ea0f8p-46f, 0x1.81f9acp-59f,
     0x1.a758dap-83f, 0x1.b35014p-117f, 0.0f, 0.0f, 0x1.c1205ap-19f, 0.0f,
     0x1.b5cde6p-30f, 0.0f, 0x1.f10c06p-95f, 0.0f, 0x1.aaff42p-34f, 0.0f,
     0x1.f92a24p-92f, 0.0f, 0x1.9ae302p-110f, 0x1.c31a0cp-82f, 0.0f, 0.0f, 0.0f,
     0x1.5a2baep-75f, 0x1.e58a42p-40f, 0.0f, 0.0f, 0.0f, 0x1.15ca6p-124f, 0.0f, 0.0f,
     0x1.47afcap-43f, 0x1.890b4p-105f, 0.0f, 0.0f, 0x1.0775fp-117f, 0x1.20b1cp-31f,
     0.0f, 0x1.2db138p-104f, 0.0f, 0x1.48edbp-8f, 0.0f, 0.0f, 0x1.300ce4p-19f, 0.0f,
     0.0f, 0.0f, 0x1.7b6eb6p-121f, 0x1.a1797cp-65f, 0x1.f43aaap-20f, 0x1.e542ecp-115f,
     0.0f, 0x1.930caap-58f, 0.0f, 0x1.be63cp-114f, 0.0f, 0x1.4a45a8p-52f,
     0x1.ba265cp-6f, 0.0f, 0x1.181dc6p-124f, 0.0f, 0x1.6151ccp-27f, 0.0f,
     0x1.0b0714p-64f, 0.0f, 0.0f, 0x1.ca20ccp-105f, 0.0f, 0x1p0f, 0x1.f932fcp-48f,
     0.0f, 0x1.a52468p-46f, 0.0f, 0x1.c33fccp-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e2394p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6afa06p-43f, 0.0f, 0.0f,
     0x1.d31bdap-48f, 0.0f, 0.0f, 0.0f, 0x1.f6b99cp-82f, 0x1.e490bp-8f, 0.0f,
     0x1.7350bep-17f, 0x1.da25f8p-12f, 0x1.029b6p-103f, 0x1.477c7p-37f, 0.0f,
     0x1.1e1664p-116f, 0x1.50c09p-29f, 0x1.52d046p-62f, 0x1.b90b72p-110f,
     0x1.eb4ee2p-98f, 0x1.c9f87p-1f, 0.0f, 0x1.66f226p-56f, 0x1.e915dcp-51f,
     0x1.8e113ep-117f, 0x1p0f, 0.0f, 0x1.a476fap-79f, 0x1.bb2cb8p-26f,
     0x1.ae6432p-86f, 0x1.1cb9bp-116f, 0x1.2b03aap-114f, 0.0f, 0x1.107fb6p-35f,
     0x1.7c4592p-23f, 0.0f, 0.0f, 0x1.5659ecp-103f, 0x1.a68186p-7f, 0.0f, 0.0f,
     0x1.5a68a8p-115f, 0.0f, 0x1.9dce5ap-23f, 0.0f, 0x1.f19cd8p-116f, 0.0f,
     0x1.24fb26p-15f, 0.0f, 0x1.c709bap-58f, 0x1.c089c8p-39f, 0x1.e6907ap-97f,
     0x1.9cec66p-104f, 0x1.e4852cp-80f, 0x1.7c4616p-105f, 0x1.00f8e2p-91f,
     0x1.590ba4p-33f, 0x1.c14b82p-21f, 0.0f, 0x1.298536p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ea8612p-82f, 0.0f, 0x1.68e93ep-37f, 0x1.14ced4p-18f, 0.0f, 0.0f,
     0x1.defa7ap-76f, 0.0f, 0x1.1ed1d2p-25f, 0.0f, 0.0f, 0x1.e2b25p-103f,
     0x1.8db14p-124f, 0x1.4481fp-6f, 0.0f, 0x1.7b4afep-25f, 0x1.a0176cp-60f,
     0x1.9541a2p-33f, 0x1.befa4p-111f, 0x1.dcc048p-82f, 0.0f, 0x1.b05564p-68f,
     0x1.6d67b8p-42f, 0.0f, 0x1.de2834p-84f, 0x1.32828ap-78f, 0.0f, 0.0f, 0.0f,
     0x1.cada7p-68f, 0x1.285528p-40f, 0.0f, 0x1.aaff2ep-88f, 0.0f, 0.0f, 0.0f,
     0x1.208338p-8f, 0.0f, 0x1.efe5b4p-89f, 0x1.22a7f2p-89f, 0x1.9814d4p-99f, 0.0f,
     0.0f, 0x1.4b1c12p-17f, 0x1.4bd282p-62f, 0.0f, 0.0f, 0x1.b53a56p-125f, 0.0f,
     0x1.c3c886p-113f, 0.0f, 0x1.9c1bc6p-95f, 0.0f, 0.0f, 0x1.98c49p-1f, 0.0f, 0.0f,
     0x1.272048p-12f, 0x1.e843ap-1f, 0.0f, 0x1.60c9cp-35f, 0.0f, 0x1.d46764p-89f,
     0x1.896b98p-56f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.d8cc12p-67f, 0x1.79c1fp-111f,
     0x1.7ac3b4p-84f, 0x1.5c1058p-107f, 0.0f, 0x1.ed66a4p-39f, 0x1.051f0ap-35f, 0.0f,
     0x1.45eb9p-21f, 0.0f, 0x1.48b3aap-33f, 0.0f, 0x1.3d4b48p-111f, 0.0f,
     0x1.de3f24p-80f, 0.0f, 0x1.a406a2p-121f, 0.0f, 0x1.1abf5cp-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b053b2p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.768bc2p-22f, 0x1.5f0cacp-30f, 0x1.36bc52p-107f, 0x1.bf8f1p-39f, 0.0f, 0.0f,
     0x1.3979b4p-22f, 0x1.e06664p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a52944p-14f,
     0x1.41c02ap-120f, 0x1.fd94dep-95f, 0.0f, 0.0f, 0x1.637d6ep-87f, 0.0f,
     0x1.63df02p-118f, 0x1.0661dep-115f, 0.0f, 0x1.ae896ep-105f, 0x1.01099ap-59f,
     0.0f, 0.0f, 0.0f, 0x1.8ad644p-111f, 0.0f, 0x1.0962c8p-47f, 0x1.502a6p-68f,
     0x1.25a108p-23f, 0.0f, 0x1.a101e2p-26f, 0x1.d8b4c2p-51f, 0.0f, 0x1.44b39cp-44f,
     0.0f, 0.0f, 0x1.752d7ap-29f, 0.0f, 0x1.93e1a2p-78f, 0x1.b1148ep-77f, 0.0f,
     0x1.a2e396p-49f, 0x1.4c4862p-27f, 0x1.b6cf82p-19f, 0.0f, 0.0f, 0.0f,
     0x1.e5cb6ep-36f, 0.0f, 0x1.d04fccp-88f, 0.0f, 0x1.536ec2p-81f, 0x1p0f,
     0x1.d31df6p-104f, 0.0f, 0x1.6838fcp-36f, 0x1.00f81ep-28f, 0.0f, 0x1.c9d41ep-117f,
     0x1.13d7d6p-62f, 0x1.adb4b4p-2f, 0x1.b6237p-39f, 0.0f, 0.0f, 0.0f,
     0x1.9ecccp-13f, 0x1.b9412ap-45f, 0.0f, 0x1.8adf4ep-33f, 0x1.b19ec6p-113f,
     0x1.03dd54p-2f, 0x1.41694ep-18f, 0.0f, 0.0f, 0.0f, 0x1.603986p-11f, 0.0f, 0.0f,
     0.0f, 0x1.6d9c42p-83f, 0x1.9441fcp-67f, 0x1.f0f6ecp-86f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.f97156p-109f, 0x1.6a1c0ep-38f, 0x1.117eccp-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b542cp-55f, 0.0f, 0x1.3545bcp-14f, 0x1.6e2a26p-119f, 0.0f, 0.0f,
     0x1.4d886p-98f, 0x1.46d38ep-65f, 0x1.fb6b42p-120f, 0x1.ece85ap-50f, 0.0f,
     0x1.391b46p-121f, 0x1.124b02p-38f, 0.0f, 0x1.79806ep-44f, 0.0f, 0.0f, 0.0f,
     0x1.ba0fbap-47f, 0.0f, 0x1.58748ap-21f, 0.0f, 0.0f, 0x1.7c18cp-87f,
     0x1.228c6ep-29f, 0.0f, 0x1.9dd7b2p-112f, 0.0f, 0x1.6162c4p-3f, 0x1.d64ac8p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afcafcp-103f, 0x1.44e436p-9f, 0.0f, 0.0f,
     0x1.bd6866p-115f, 0x1.b998ccp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e7c28p-57f, 0.0f,
     0x1.a0cc24p-60f, 0.0f, 0.0f, 0x1.d004dp-30f, 0.0f, 0.0f, 0.0f, 0x1.c11f7ap-25f,
     0x1.2f97f4p-93f, 0x1.3a12aap-102f, 0.0f, 0.0f, 0.0f, 0x1.dac578p-94f, 0.0f, 0.0f,
     0.0f, 0x1.c8ac88p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7029ap-10f, 0x1.0e0186p-117f,
     0x1.b6cc8ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19704ap-1f, 0.0f, 0.0f,
     0x1.442562p-51f, 0.0f, 0x1.a78bd8p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51aff8p-17f, 0x1.66f9e8p-32f, 0.0f, 0x1.5e7ce8p-79f, 0x1.71055ap-92f,
     0x1.64ddc8p-115f, 0.0f, 0.0f, 0x1.e57f2p-33f, 0.0f, 0.0f, 0x1.d00ff4p-103f, 0.0f,
     0x1.bc13a8p-36f, 0x1.3cfdf2p-29f, 0x1.462692p-93f, 0.0f, 0x1.a92cfep-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.92ba3p-58f, 0.0f, 0.0f, 0.0f, 0x1.4fb7eap-123f,
     0x1.f1961p-9f, 0.0f, 0x1.056a26p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ed6aep-87f, 0.0f, 0.0f, 0x1.3dda6p-108f, 0.0f, 0x1.42440cp-126f, 0.0f, 0.0f,
     0x1.b81a9p-97f, 0.0f, 0x1.ae897ap-107f, 0.0f, 0.0f, 0.0f, 0x1.7a053ap-95f, 0.0f,
     0.0f, 0.0f, 0x1.77dc94p-37f, 0x1.b901d8p-34f, 0x1.f0dfdap-122f, 0x1.ff8cap-31f,
     0x1.7197ap-120f, 0x1.42f52cp-6f, 0.0f, 0x1.9d6464p-73f, 0x1.61408cp-126f,
     0x1.f585dp-119f, 0.0f, 0x1.c901a8p-7f, 0.0f, 0x1.3f790cp-94f, 0.0f,
     0x1.1b4e94p-98f, 0x1.e28cf4p-8f, 0.0f, 0x1.e39c54p-90f, 0x1.6462eap-119f,
     0x1.276f9cp-84f, 0.0f, 0.0f, 0x1.182c26p-110f, 0.0f, 0x1.e61b1p-99f, 0.0f,
     0x1.5f15eep-10f, 0x1.5283ecp-28f, 0x1.c31c14p-88f, 0.0f, 0.0f, 0x1.29232ep-70f,
     0x1.a32bap-25f, 0.0f, 0.0f, 0.0f, 0x1.bf481ep-52f, 0.0f, 0.0f, 0x1.dd427cp-46f,
     0x1.57f0fcp-105f, 0.0f, 0.0f, 0x1.b1ba84p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f35c8p-99f, 0x1.56944ap-110f, 0x1.52e8bap-35f, 0x1.fc9e22p-56f,
     0x1.f2ad3p-100f, 0.0f, 0.0f, 0.0f, 0x1.47ab52p-92f, 0x1.45505ap-15f, 0.0f,
     0x1.c3b036p-124f, 0.0f, 0x1.69748ap-20f, 0.0f, 0x1.19fb54p-64f, 0.0f,
     0x1.33c5fp-48f, 0.0f, 0.0f, 0x1.fa109cp-90f, 0.0f, 0.0f, 0x1.a23b5p-32f,
     0x1.1e80a4p-19f, 0.0f, 0x1.e2fc56p-29f, 0x1.5ac9aap-29f, 0.0f, 0x1.487fdap-52f,
     0.0f, 0.0f, 0x1.b824a8p-16f, 0x1.ad7fa2p-20f, 0.0f, 0.0f, 0.0f, 0x1.c7277ep-52f,
     0.0f, 0.0f, 0x1.a75c6ep-19f, 0x1.eb7594p-52f, 0.0f, 0x1.98012cp-117f,
     0x1.194b6ap-118f, 0.0f, 0x1.c1af0ep-70f, 0.0f, 0x1.a714fep-90f, 0.0f, 0.0f,
     0x1.5b7338p-98f, 0x1.29ccc2p-17f, 0x1.8a99b6p-45f, 0.0f, 0.0f, 0x1.84e1ap-24f,
     0.0f, 0x1.af3f4cp-123f, 0.0f, 0x1.7414dp-59f, 0.0f, 0x1.73ae76p-64f, 0.0f, 0.0f,
     0x1.3570d8p-2f, 0x1.70fd26p-17f, 0.0f, 0x1.55ed5ap-101f, 0x1.9ae678p-81f,
     0x1.e0b358p-16f, 0.0f, 0x1.3a4f44p-68f, 0x1.3f2f1ep-115f, 0x1.7bc4fp-111f,
     0x1.54f4c8p-116f, 0x1.aaa806p-44f, 0.0f, 0x1.4bc98ep-9f, 0x1.e8298ap-110f,
     0x1.ebee2ap-113f, 0.0f, 0x1.fbb034p-30f, 0.0f, 0x1.871012p-109f, 0.0f, 0.0f,
     0.0f, 0x1.648412p-73f, 0x1.f306e6p-56f, 0x1.098dfap-72f, 0.0f, 0x1.6e41fap-29f,
     0x1.f0e488p-76f, 0x1.954258p-64f, 0.0f, 0x1.ab0f7ap-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00965ap-20f, 0x1.f7ed14p-84f, 0.0f, 0x1.098a82p-21f, 0.0f, 0.0f,
     0x1.1da3f6p-79f, 0x1.ed9148p-63f, 0.0f, 0x1.d0e192p-13f, 0x1.aa1a5cp-112f,
     0x1.145e28p-52f, 0x1.cba712p-23f, 0x1.3d9466p-28f, 0x1.4bacfap-43f,
     0x1.abfc1ap-12f, 0.0f, 0.0f, 0x1.2fed26p-76f, 0x1.33caf8p-114f, 0x1.ef9762p-18f,
     0.0f, 0x1.b11082p-100f, 0.0f, 0x1.ba4156p-6f, 0.0f, 0x1.904daap-76f,
     0x1.c77416p-73f, 0.0f, 0.0f, 0x1.7af69ep-63f, 0x1.9a3836p-47f, 0x1.0dae9ap-81f,
     0.0f, 0x1.088756p-50f, 0.0f, 0x1.b6ea5ep-60f, 0x1.e216ccp-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9048c4p-56f, 0x1.5ad972p-53f, 0x1.e39b66p-87f, 0.0f, 0.0f,
     0x1.ac612p-69f, 0x1.3bf6acp-85f, 0.0f, 0.0f, 0x1.24a43ap-54f, 0.0f, 0.0f, 0.0f,
     0x1.b391f8p-47f, 0x1.229a8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.791272p-10f,
     0x1.14aa76p-18f, 0x1.437daep-104f, 0x1.951bdp-10f, 0x1.312c02p-21f,
     0x1.a09a98p-16f, 0x1.f0b4aep-2f, 0.0f, 0x1.f6a308p-50f, 0x1.6a3fa8p-32f,
     0x1.60122ep-37f, 0x1.37018ap-93f, 0x1.545118p-23f, 0x1.999764p-23f, 0.0f, 0.0f,
     0x1.dc21dp-85f, 0.0f, 0.0f, 0x1.8f2e18p-19f, 0x1.069d88p-6f, 0.0f,
     0x1.5871f8p-68f, 0.0f, 0x1.81ea46p-103f, 0.0f, 0.0f, 0x1.571b58p-30f, 0.0f, 0.0f,
     0.0f, 0x1.e1eb4cp-78f, 0.0f, 0x1.1c9daep-50f, 0x1.ca0554p-94f, 0.0f,
     0x1.d4cc26p-62f, 0.0f, 0x1.411c9p-89f, 0.0f, 0x1.f44332p-37f, 0.0f,
     0x1.d3ddap-51f, 0x1.b3cfd4p-107f, 0x1.e660e4p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff12c2p-30f, 0x1.daf12ep-50f, 0x1.f82382p-101f, 0x1.ae3772p-13f,
     0x1.ebc95ep-74f, 0.0f, 0.0f, 0.0f, 0x1.efc3f2p-88f, 0x1.fb0f06p-52f,
     0x1.6851aap-38f, 0.0f, 0.0f, 0x1.2d0cbap-89f, 0x1.b8773ap-26f, 0.0f, 0.0f,
     0x1.16f3c8p-109f, 0.0f, 0.0f, 0x1.9b1974p-5f, 0.0f, 0.0f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_atan2f1_u10purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_atan2f1_u10purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atan2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
