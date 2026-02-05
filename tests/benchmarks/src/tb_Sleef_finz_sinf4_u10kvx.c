/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf4_u10kvx.c --function Sleef_finz_sinf4_u10kvx \
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
     0x1.43256ep-25f, 0.0f, 0.0f, 0x1.3ce96ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.033174p-23f, 0x1.9a3a74p-83f, 0x1.aab88ap-30f, 0x1.68032ap-70f,
     0x1.f3505ap-4f, 0x1.37da2cp-95f, 0x1.730b68p-30f, 0x1.5e217ap-41f, 0.0f,
     0x1.332914p-120f, 0x1.3007f6p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.457a0cp-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c94e2p-52f, 0.0f, 0.0f, 0x1.e89ad2p-20f,
     0x1.b388b8p-97f, 0x1.1c0c04p-93f, 0x1.7d484p-111f, 0.0f, 0.0f, 0x1.4ace06p-94f,
     0x1.7d148ap-98f, 0x1.5dfcf2p-78f, 0.0f, 0.0f, 0x1.bcae4p-52f, 0.0f,
     0x1.268b24p-118f, 0.0f, 0.0f, 0x1.004158p-102f, 0x1.62ec5p-123f, 0.0f,
     0x1.e10e14p-93f, 0.0f, 0x1.90ca5ap-108f, 0x1.d80bacp-29f, 0.0f, 0x1.c881b6p-120f,
     0.0f, 0x1.ac38d8p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90b246p-101f, 0x1.f9fdfp-24f, 0x1.e3bebp-111f, 0.0f, 0.0f, 0.0f,
     0x1.01f96ap-39f, 0.0f, 0x1.93cc78p-8f, 0x1.37b664p-16f, 0x1.352454p-117f, 0.0f,
     0x1.0dbe4ap-54f, 0.0f, 0x1.4fa85p-18f, 0x1.6244ap-116f, 0.0f, 0.0f,
     0x1.5d212cp-73f, 0x1p0f, 0.0f, 0x1.833c6p-1f, 0.0f, 0.0f, 0.0f, 0x1.094a08p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0e784p-6f, 0.0f, 0x1.aadd46p-124f, 0x1.832654p-122f,
     0.0f, 0x1.bbdff4p-63f, 0.0f, 0x1.122c94p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4249e6p-79f, 0x1.d025b8p-112f, 0.0f, 0.0f, 0x1.3e453p-55f, 0.0f, 0.0f, 0.0f,
     0x1.214a18p-81f, 0.0f, 0x1.930a58p-48f, 0x1.78a6d8p-34f, 0x1.036084p-49f,
     0x1.5e0206p-5f, 0x1.d2ee46p-40f, 0.0f, 0x1.459bd2p-97f, 0x1.25c874p-51f,
     0x1.47bed4p-80f, 0.0f, 0x1.e1bd56p-3f, 0x1.78c21ap-119f, 0x1.fbbe28p-70f, 0.0f,
     0.0f, 0.0f, 0x1.495a18p-62f, 0.0f, 0.0f, 0x1.04af06p-26f, 0.0f, 0x1.a3447ap-113f,
     0.0f, 0x1.f68c7cp-98f, 0.0f, 0.0f, 0x1.aa195ep-14f, 0x1.d45c98p-30f,
     0x1.b77e24p-50f, 0x1.93db2p-122f, 0.0f, 0x1.442efep-28f, 0.0f, 0x1.96badep-100f,
     0.0f, 0x1.ef4eb4p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6432f6p-83f, 0.0f, 0.0f,
     0x1.c9dfcep-2f, 0.0f, 0x1.9c3cacp-106f, 0x1.eb948ep-47f, 0x1.6dac3ep-36f,
     0x1.20ade2p-48f, 0x1.61c036p-74f, 0.0f, 0x1.ee2d12p-12f, 0x1.2da696p-24f,
     0x1.8d0408p-124f, 0.0f, 0x1.7d5d26p-14f, 0.0f, 0x1.8bdc14p-118f, 0x1.024ecep-38f,
     0.0f, 0.0f, 0x1.15b046p-15f, 0.0f, 0x1.574532p-57f, 0.0f, 0.0f, 0x1.3ed37p-24f,
     0.0f, 0x1.6d2c62p-94f, 0x1.e884b6p-94f, 0.0f, 0x1.61b38p-66f, 0.0f,
     0x1.f98ff8p-36f, 0x1.119a38p-101f, 0x1.3554a2p-42f, 0.0f, 0x1.83fe78p-66f,
     0x1.b41682p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7744dcp-42f, 0x1.24dad4p-44f, 0.0f,
     0.0f, 0.0f, 0x1.9ad88p-107f, 0x1.d395ecp-6f, 0.0f, 0x1.a7318ep-78f, 0.0f,
     0x1.2eddf8p-109f, 0.0f, 0x1.5ed728p-55f, 0x1.3a880ap-124f, 0.0f, 0.0f,
     0x1.24038p-50f, 0x1.4f662ap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b8942p-96f, 0.0f,
     0.0f, 0x1.da905cp-77f, 0x1.e826b6p-97f, 0.0f, 0x1.140664p-118f, 0x1.f5b77ep-126f,
     0x1.4c07e4p-100f, 0.0f, 0x1.7c7396p-54f, 0x1.a2bc2cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.0578acp-83f, 0.0f, 0x1.f1bd04p-88f, 0.0f, 0x1.89eb3p-67f, 0.0f,
     0x1.d311fep-76f, 0.0f, 0.0f, 0x1.345242p-76f, 0x1.e3e868p-75f, 0x1.e337c8p-14f,
     0x1.e41afp-54f, 0x1.b3ddb6p-33f, 0x1.1b6e08p-58f, 0x1.bc7fcap-64f,
     0x1.088778p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.876a18p-25f, 0.0f, 0.0f,
     0x1.9ad3b4p-32f, 0x1.3b9114p-107f, 0.0f, 0.0f, 0.0f, 0x1.2f7d66p-18f, 0.0f,
     0x1.5eb6dcp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.108f84p-84f, 0x1.42ae52p-104f,
     0.0f, 0x1.cdadbep-76f, 0x1.c5305p-46f, 0x1.0cdf1ep-64f, 0.0f, 0.0f,
     0x1.cdf95p-115f, 0.0f, 0x1.5c084p-28f, 0.0f, 0x1.a0d0dcp-5f, 0.0f, 0.0f,
     0x1.c920e6p-63f, 0x1.c2ee4ep-12f, 0x1.74e944p-79f, 0.0f, 0.0f, 0.0f,
     0x1.091b8ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ed1fap-65f, 0x1.b811ccp-16f,
     0x1.3b2776p-110f, 0.0f, 0x1.caca92p-125f, 0x1.35d6d6p-60f, 0.0f, 0.0f, 0.0f,
     0x1.86ee54p-54f, 0x1.2fe114p-87f, 0.0f, 0x1.082aaap-115f, 0.0f, 0.0f, 0.0f,
     0x1.b4a934p-38f, 0x1.07d516p-112f, 0x1.344c82p-74f, 0x1.36141cp-124f, 0.0f, 0.0f,
     0x1.ef7ep-93f, 0x1p0f, 0.0f, 0x1.666e1p-99f, 0.0f, 0.0f, 0x1.d0d672p-16f,
     0x1.5115e8p-44f, 0x1.80150ep-109f, 0x1.3257ap-63f, 0.0f, 0.0f, 0x1.4ce112p-108f,
     0x1.e6211ep-94f, 0.0f, 0.0f, 0x1.80c3bcp-113f, 0x1.983e4ep-11f, 0.0f,
     0x1.57198ap-109f, 0x1.940e06p-15f, 0x1.b74472p-118f, 0.0f, 0.0f, 0x1.c97526p-99f,
     0.0f, 0.0f, 0.0f, 0x1.16b8f6p-120f, 0.0f, 0x1.f96ee4p-87f, 0.0f, 0.0f, 0.0f,
     0x1.40b482p-118f, 0x1.2673aap-18f, 0.0f, 0x1.2244ep-28f, 0x1.62ce6p-67f, 0.0f,
     0x1.b034acp-25f, 0.0f, 0x1.5be70ep-66f, 0x1.2ea53p-15f, 0x1.5cb77ep-122f, 0.0f,
     0.0f, 0x1.292dd8p-104f, 0.0f, 0x1.cc17d6p-68f, 0.0f, 0.0f, 0x1.f37064p-73f, 0.0f,
     0.0f, 0x1.fbdd2ap-31f, 0x1.abc81ep-24f, 0x1.fb2524p-68f, 0x1.a7293ap-39f, 0.0f,
     0.0f, 0.0f, 0x1.d1227ep-85f, 0.0f, 0.0f, 0x1.46547cp-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4013fcp-101f, 0.0f, 0.0f, 0.0f, 0x1.73468ap-13f, 0.0f, 0.0f,
     0x1.4cfd78p-92f, 0.0f, 0.0f, 0x1.7d55fap-114f, 0.0f, 0x1.f7b45p-110f, 0.0f, 0.0f,
     0x1.3e68b8p-21f, 0x1.9d82cap-68f, 0x1.874becp-42f, 0x1.7b019ep-38f, 0.0f, 0.0f,
     0.0f, 0x1.89807p-113f, 0.0f, 0x1.0c7358p-16f, 0x1.9ad7c8p-97f, 0.0f, 0.0f, 0.0f,
     0x1.91568p-97f, 0.0f, 0.0f, 0x1.d98178p-37f, 0x1.db576p-15f, 0.0f, 0.0f,
     0x1.c76ab2p-114f, 0x1.3c8c18p-4f, 0.0f, 0x1.e82e06p-80f, 0x1.0f7ad2p-39f,
     0x1.a4d292p-52f, 0.0f, 0x1.9ec6cp-26f, 0x1.49725p-103f, 0.0f, 0.0f, 0.0f,
     0x1.b2178p-19f, 0.0f, 0x1.16c9c4p-124f, 0.0f, 0.0f, 0.0f, 0x1.eb6b96p-14f, 0.0f,
     0.0f, 0.0f, 0x1.353c6ap-55f, 0x1.a78d02p-40f, 0x1.739fd4p-110f, 0x1.ad3ee2p-68f,
     0.0f, 0x1.b48b96p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.754b16p-18f,
     0x1.f3f59cp-7f, 0.0f, 0.0f, 0x1.03f7cep-23f, 0x1.2dd19ep-22f, 0x1.124a86p-75f,
     0.0f, 0.0f, 0x1.c7789p-56f, 0x1.ba5d22p-104f, 0x1.c3ec18p-106f, 0x1.ce7952p-60f,
     0x1.a7818ap-3f, 0.0f, 0x1.9150e4p-12f, 0.0f, 0.0f, 0x1.b3ef9ep-97f, 0.0f,
     0x1.52d1cap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65696ep-103f, 0.0f, 0.0f,
     0x1.c226a6p-34f, 0.0f, 0x1.d39bbep-47f, 0.0f, 0x1.8a89c8p-75f, 0.0f,
     0x1.8ef944p-12f, 0x1.9cdd6ap-22f, 0.0f, 0x1.32d86p-14f, 0x1.efa06ap-93f,
     0x1.c80ba6p-38f, 0.0f, 0.0f, 0x1.f3c478p-21f, 0x1.cb0802p-55f, 0x1.93462ap-61f,
     0.0f, 0x1.a59fb2p-89f, 0.0f, 0.0f, 0x1.518a92p-81f, 0.0f, 0.0f, 0x1.255c8cp-122f,
     0x1.f1fc5cp-88f, 0.0f, 0x1.2e153ap-101f, 0x1.93e1dcp-7f, 0x1.5c8816p-23f,
     0x1.e47edap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2888f6p-81f, 0x1.c8f98ep-78f,
     0x1.4de754p-101f, 0.0f, 0.0f, 0.0f, 0x1.0e44ecp-18f, 0x1.3a246p-3f, 0.0f,
     0x1.3e5e24p-23f, 0x1.789856p-124f, 0.0f, 0x1.2c2a86p-19f, 0x1.f28faap-79f, 0.0f,
     0.0f, 0x1.a943fap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.339a72p-63f, 0x1.8a1fe8p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.385dd2p-91f, 0.0f, 0x1.2e46ecp-21f, 0.0f,
     0x1.f2ef5p-17f, 0x1.f2589ap-66f, 0.0f, 0x1.cee64cp-59f, 0x1.027a04p-110f,
     0x1.c81d1p-45f, 0.0f, 0.0f, 0x1.e00ef8p-22f, 0x1.3f361ap-5f, 0.0f, 0.0f,
     0x1.f5f934p-119f, 0x1.92302ep-2f, 0.0f, 0.0f, 0x1.903348p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6e4ee4p-52f, 0x1.b5dfaap-104f, 0x1.0f1416p-14f, 0x1.8b447ep-42f,
     0x1.c67e3ap-54f, 0.0f, 0x1.213cap-35f, 0.0f, 0x1.666d3ap-72f, 0x1.304826p-46f,
     0.0f, 0.0f, 0.0f, 0x1.c55436p-63f, 0x1.74e182p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ffb1eap-2f, 0.0f, 0.0f, 0.0f, 0x1.92df78p-52f, 0.0f, 0.0f, 0x1.7a9f56p-104f,
     0.0f, 0x1.8587c4p-100f, 0x1.bafceap-117f, 0x1.893d54p-51f, 0x1.22d6f8p-57f,
     0x1.eca60ap-13f, 0x1.5cb898p-7f, 0.0f, 0x1.b887a8p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4f2404p-31f, 0x1.6f847cp-77f, 0x1.bf5c48p-22f, 0.0f, 0.0f,
     0x1.afc70ap-57f, 0x1.12b2f2p-123f, 0.0f, 0.0f, 0.0f, 0x1.48613ep-84f, 0.0f, 0.0f,
     0.0f, 0x1.f563f2p-46f, 0.0f, 0x1.0bd2b2p-72f, 0.0f, 0x1.69f3a4p-111f, 0.0f, 0.0f,
     0x1.1fa9f6p-83f, 0x1.6373a6p-96f, 0.0f, 0.0f, 0.0f, 0x1.857806p-112f,
     0x1.734cap-118f, 0x1.7a376ep-41f, 0x1.3c853p-12f, 0x1.9d9ae4p-48f, 0.0f,
     0x1.55f1eep-64f, 0x1.d1fd4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.606b14p-89f,
     0x1.274f32p-63f, 0x1.2cc70ep-69f, 0.0f, 0x1.92db56p-49f, 0x1.022c96p-34f, 0.0f,
     0x1.44fd16p-88f, 0x1.33b934p-41f, 0.0f, 0.0f, 0x1.0f0de8p-62f, 0x1.30c08cp-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83b09p-38f, 0x1.69401ep-95f, 0.0f, 0.0f, 0.0f,
     0x1.4de9e2p-101f, 0.0f, 0x1.507bfp-125f, 0x1.bfe6d6p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.83441ap-108f, 0x1.83909p-19f, 0x1.c46198p-81f, 0x1.6e7d7ap-72f,
     0x1.c0812ep-100f, 0.0f, 0.0f, 0x1.cc663cp-122f, 0x1.3b2c2ep-125f,
     0x1.49f53ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3281cp-82f, 0x1.e52884p-59f,
     0.0f, 0.0f, 0.0f, 0x1.e261bep-32f, 0x1.b4e1a8p-59f, 0x1.efac92p-103f,
     0x1.6cca5p-78f, 0x1.ab3a2ap-99f, 0.0f, 0.0f, 0x1.a7cde4p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18f894p-61f, 0.0f, 0.0f, 0x1.a5293ep-98f, 0.0f,
     0x1.9e88c4p-28f, 0x1.3cc626p-108f, 0x1.b004ap-75f, 0.0f, 0.0f, 0.0f,
     0x1.7307bap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36260ap-58f, 0.0f, 0.0f, 0.0f,
     0x1.3384a6p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e59p-58f,
     0x1.a6c278p-67f, 0x1.48a49p-93f, 0.0f, 0x1.da5ee2p-83f, 0.0f, 0x1.06c034p-61f,
     0x1p0f, 0.0f, 0x1.0fa16ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43a3b2p-17f, 0.0f,
     0x1.72f45ep-56f, 0.0f, 0.0f, 0.0f, 0x1.6475cep-49f, 0.0f, 0x1.f358dcp-18f,
     0x1.d4a42ap-92f, 0.0f, 0.0f, 0.0f, 0x1.8c9eaap-124f, 0.0f, 0.0f, 0x1.fa3d16p-34f,
     0x1.d18cbp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9380f2p-76f, 0x1.f27e74p-46f, 0.0f,
     0.0f, 0.0f, 0x1.7a98cap-51f, 0.0f, 0.0f, 0x1.6a1b22p-124f, 0x1.0c7d9ap-15f, 0.0f,
     0x1.133f9ap-29f, 0x1.541b04p-95f, 0x1p0f, 0.0f, 0.0f, 0x1.106844p-105f,
     0x1.501a8cp-80f, 0x1.5858fap-29f, 0.0f, 0x1.bc027cp-7f, 0x1.1c2d92p-99f, 0.0f,
     0x1.be7dfcp-81f, 0.0f, 0x1.e8a9fp-34f, 0.0f, 0.0f, 0.0f, 0x1.26b172p-116f,
     0x1.0f52eep-64f, 0.0f, 0.0f, 0x1.9e382cp-51f, 0.0f, 0x1.da7f84p-20f, 0.0f, 0.0f,
     0x1.7adc6ep-112f, 0.0f, 0x1.d7e726p-106f, 0x1.ca3f02p-41f, 0x1.dfac06p-11f,
     0x1.e31acep-110f, 0x1.47337cp-77f, 0x1.d9a27cp-83f, 0x1.211adcp-62f,
     0x1.b57434p-18f, 0.0f, 0.0f, 0.0f, 0x1.d8f1ccp-116f, 0x1.6333b4p-23f, 0.0f,
     0x1.c76306p-71f, 0x1.0a786ap-39f, 0.0f, 0x1.195e8ep-39f, 0.0f, 0.0f,
     0x1.9621ep-72f, 0x1p0f, 0x1.a44996p-126f, 0.0f, 0x1.552d9ap-80f, 0.0f,
     0x1.c9effp-126f, 0.0f, 0x1.cee3bap-85f, 0x1.bac906p-86f, 0.0f, 0x1.03e3d2p-114f,
     0x1.4d3e4p-18f, 0x1.3f4bb6p-105f, 0x1.fe691ep-94f, 0.0f, 0.0f, 0x1.4f566ap-12f,
     0.0f, 0.0f, 0x1.550656p-34f, 0.0f, 0x1.2fa62p-105f, 0.0f, 0.0f, 0x1.cfe67ap-23f,
     0x1.b21ba4p-104f, 0x1.a6ad46p-48f, 0x1.d65508p-63f, 0x1.f98856p-72f,
     0x1.e74c3ep-66f, 0.0f, 0.0f, 0x1.15afa2p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5e848p-23f, 0.0f, 0x1.6d3222p-39f, 0.0f, 0.0f, 0x1.fabe6ap-4f,
     0x1.b98504p-88f, 0x1.3e50aep-49f, 0.0f, 0x1.3861ap-45f, 0.0f, 0x1.d3a9dp-114f,
     0.0f, 0.0f, 0x1.3e0d42p-9f, 0x1.39aebp-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab3044p-94f, 0x1.a43ffap-90f, 0.0f, 0x1.625f32p-123f, 0x1.92191ap-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a32f4p-60f, 0.0f, 0x1.649f42p-60f, 0.0f, 0x1.2426bap-49f,
     0.0f, 0x1.cdff14p-97f, 0x1.245624p-126f, 0.0f, 0x1.be15f6p-10f, 0x1.97434p-96f,
     0.0f, 0x1.bfdb78p-94f, 0.0f, 0.0f, 0x1.bb98b6p-40f, 0x1.2debaep-34f,
     0x1.5e8e68p-73f, 0x1.6a977ap-64f, 0.0f, 0x1.3585c4p-15f, 0.0f, 0x1.198028p-86f,
     0x1.2833e2p-68f, 0x1.786018p-101f, 0.0f, 0x1.7e19d4p-27f, 0x1.c560cp-70f,
     0x1.fe1792p-10f, 0.0f, 0x1.d21d36p-36f, 0x1.f6c452p-34f, 0.0f, 0x1.b2ebc4p-32f,
     0x1.22c184p-85f, 0.0f, 0.0f, 0.0f, 0x1.ee6c2ap-7f, 0x1.7e2852p-62f, 0.0f, 0.0f,
     0x1.807e3cp-53f, 0.0f, 0x1.48a758p-6f, 0x1.200e88p-37f, 0x1.9651fp-61f,
     0x1.619ad8p-25f, 0.0f, 0.0f, 0x1.308deep-12f, 0.0f, 0.0f, 0.0f, 0x1.9c7304p-77f,
     0x1.d9569cp-96f, 0x1.a1c722p-50f, 0x1.6bc8bp-24f, 0.0f, 0x1.9bf936p-67f,
     0x1.948b68p-91f, 0x1.d8cffap-96f, 0x1.5fa6b2p-121f, 0x1.85d9b2p-11f,
     0x1.de2aeep-10f, 0x1.8d759cp-1f, 0x1.6f6da4p-48f, 0.0f, 0.0f, 0x1.1d49c6p-110f,
     0.0f, 0x1.0521dap-106f, 0x1.c79978p-21f, 0x1.889482p-38f, 0x1.6fc05cp-93f,
     0x1.046e4ep-45f, 0x1.28209ep-111f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sinf4_u10kvx(tmp0);
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
    printf("Sleef_finz_sinf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
