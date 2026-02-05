/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmodf4_avx2128.c --function Sleef_finz_fmodf4_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.4688d6p-121f, 0.0f, 0.0f, 0.0f, 0x1.d1a90cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.936718p-29f, 0x1.0a84d6p-84f, 0x1.27394ep-52f, 0x1.8e0c6ap-18f, 0.0f,
     0x1.8e9608p-122f, 0x1.e87bdap-124f, 0x1.ba5306p-35f, 0x1.246c58p-12f, 0.0f,
     0x1.db94aep-55f, 0.0f, 0x1.af4e6p-102f, 0.0f, 0.0f, 0x1.3254dap-78f,
     0x1.70b1aep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab32c6p-95f, 0.0f, 0x1.5bb30cp-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc145ep-12f, 0x1.814c6p-108f, 0x1.d2d69p-117f, 0.0f,
     0x1.3c62bp-39f, 0x1.0350bcp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca06dp-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a60f84p-13f, 0.0f, 0.0f, 0x1.8b7912p-27f,
     0x1.f2f59p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ea745p-5f, 0.0f, 0.0f, 0x1.9e0ac6p-114f, 0x1.347d9ap-62f, 0.0f,
     0x1.218f2ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.709c0ep-93f, 0.0f,
     0x1.bb44fp-35f, 0.0f, 0x1.58cf08p-33f, 0.0f, 0x1.eb2f4ep-44f, 0.0f,
     0x1.054c94p-115f, 0x1.52f404p-34f, 0x1.9e34aap-2f, 0.0f, 0x1.57326ep-12f, 0.0f,
     0x1.4db966p-99f, 0.0f, 0.0f, 0.0f, 0x1.53912p-88f, 0x1.98b4ap-38f, 0.0f,
     0x1.bda58cp-118f, 0.0f, 0x1.1a92ccp-82f, 0x1.c4982p-108f, 0.0f, 0x1.1ad41p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f6aa8p-31f, 0.0f, 0.0f, 0x1.6dd6dep-30f, 0.0f,
     0x1.26e558p-110f, 0.0f, 0.0f, 0x1.5d8ba2p-111f, 0x1.91b86cp-108f,
     0x1.11d536p-20f, 0.0f, 0x1.b4117p-109f, 0.0f, 0x1.55b778p-89f, 0x1.def9d4p-66f,
     0x1.18edf2p-120f, 0x1.3b6544p-19f, 0.0f, 0x1.ccb3a6p-47f, 0x1.151792p-101f, 0.0f,
     0.0f, 0x1.0270ccp-66f, 0x1.3b769ap-102f, 0x1.32ccb2p-4f, 0x1.2198e4p-74f, 0.0f,
     0x1.8d4b9cp-31f, 0.0f, 0.0f, 0.0f, 0x1.8dbaccp-52f, 0x1.7f90bep-40f, 0.0f, 0.0f,
     0x1.cf7052p-32f, 0.0f, 0.0f, 0x1.667376p-92f, 0x1.e56b84p-76f, 0x1.52a712p-41f,
     0x1.435492p-96f, 0x1.0c5d58p-72f, 0.0f, 0x1p0f, 0x1.c34c84p-76f,
     0x1.30e12ep-108f, 0x1.7532dp-17f, 0.0f, 0x1.e5da22p-104f, 0.0f, 0.0f,
     0x1.67ca28p-37f, 0.0f, 0.0f, 0x1.01e35ep-15f, 0x1.d78d52p-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a2bd54p-83f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.d30858p-56f, 0.0f, 0.0f,
     0x1.45ac72p-8f, 0.0f, 0.0f, 0x1.c281b6p-98f, 0x1.a7e63ep-85f, 0.0f,
     0x1.6c5686p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cc49cp-112f, 0.0f, 0x1.4d27eep-8f,
     0x1.40a576p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8557dcp-63f, 0x1.2371f6p-34f,
     0x1.dc2fb4p-107f, 0.0f, 0.0f, 0x1.091218p-35f, 0x1.dc0ad8p-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.889806p-62f, 0.0f, 0.0f, 0.0f, 0x1.06a17ap-81f, 0x1.b9b868p-5f,
     0x1.872752p-106f, 0.0f, 0x1.f317e2p-98f, 0.0f, 0.0f, 0.0f, 0x1.67cap-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdb28ap-14f, 0.0f, 0.0f, 0x1.da7522p-96f,
     0x1.cc64dep-110f, 0x1.16cf24p-123f, 0.0f, 0x1p0f, 0.0f, 0x1.b7cf5p-20f,
     0x1.5c5d08p-51f, 0x1.b47decp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.049896p-4f,
     0x1.35c11cp-115f, 0.0f, 0x1.eac618p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c9432p-34f,
     0x1.a2bb4p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b77e4p-75f, 0x1.0425ccp-63f,
     0.0f, 0x1p0f, 0x1.18c9bcp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfb15ep-46f,
     0x1.931198p-59f, 0.0f, 0x1.f04a36p-67f, 0x1.39d882p-62f, 0.0f, 0.0f,
     0x1.ee163p-13f, 0.0f, 0x1.b1277p-112f, 0.0f, 0x1.a033bap-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ce59bap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b78454p-61f,
     0x1.4cef7ep-80f, 0x1.baf4a2p-28f, 0x1.9e505cp-117f, 0.0f, 0.0f, 0x1.8344ap-3f,
     0x1.7743b6p-114f, 0x1.7e267cp-68f, 0.0f, 0x1.9681eep-95f, 0.0f, 0x1.b204cep-26f,
     0.0f, 0x1.f164bp-126f, 0x1.ef849p-20f, 0.0f, 0x1.472d16p-121f, 0x1.9e0526p-66f,
     0x1.5b04b6p-79f, 0.0f, 0x1.bf75c2p-84f, 0x1.d4c17ap-1f, 0.0f, 0.0f,
     0x1.005834p-72f, 0x1.8296fep-32f, 0.0f, 0x1.829568p-57f, 0x1.a2a26ep-17f, 0.0f,
     0x1.fa5386p-45f, 0x1.f355bap-68f, 0.0f, 0x1.ff2546p-9f, 0.0f, 0.0f,
     0x1.03fe8p-15f, 0x1.9717ccp-31f, 0x1.608b94p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91a8ap-53f, 0.0f, 0x1.1bdda4p-21f, 0.0f, 0.0f, 0.0f, 0x1.c19a16p-121f,
     0x1.9fe7dep-37f, 0x1.b2cb84p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37a22cp-8f,
     0x1.06421ep-27f, 0x1.abae64p-122f, 0.0f, 0.0f, 0x1.03bf38p-36f, 0x1.620b72p-68f,
     0x1.68301p-36f, 0.0f, 0x1.62d8fp-98f, 0.0f, 0x1.23e7eap-69f, 0x1p0f,
     0x1.c6a062p-47f, 0.0f, 0x1.9a986cp-83f, 0.0f, 0x1.dec4bcp-93f, 0.0f,
     0x1.034f04p-33f, 0x1.d8150ap-21f, 0x1.672b58p-88f, 0.0f, 0.0f, 0x1.df60c8p-3f,
     0x1.7371e6p-7f, 0x1.433bfcp-11f, 0x1.9567c8p-98f, 0.0f, 0x1.8b36c2p-11f,
     0x1.d477f2p-48f, 0.0f, 0x1.6bd45cp-96f, 0x1.21e21ep-102f, 0.0f, 0x1.806e96p-63f,
     0.0f, 0x1.7f2478p-64f, 0.0f, 0x1.6b4b08p-60f, 0x1.d4883p-126f, 0x1.5da1e8p-33f,
     0x1.a05c7ep-122f, 0x1.0da958p-7f, 0x1.ec0f54p-33f, 0x1.5345ccp-126f,
     0x1.3ad24ep-71f, 0x1.3b3254p-17f, 0.0f, 0.0f, 0x1.c73f82p-55f, 0.0f,
     0x1.239f34p-25f, 0x1.0e5088p-3f, 0.0f, 0x1.e3a742p-120f, 0.0f, 0x1.7a5ab2p-56f,
     0x1.add756p-80f, 0x1.2707b4p-115f, 0x1.6edbe6p-83f, 0x1.a07a08p-73f, 0.0f,
     0x1.02ef44p-42f, 0.0f, 0x1.2429fep-27f, 0x1.3909aap-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24f526p-96f, 0x1.85bc02p-123f, 0x1.dc8d28p-37f, 0x1.997318p-7f, 0.0f, 0.0f,
     0x1.74c072p-6f, 0x1.4be442p-85f, 0.0f, 0.0f, 0x1.9922f4p-28f, 0.0f, 0.0f,
     0x1.ad9d8p-118f, 0x1.436f26p-3f, 0.0f, 0x1.783692p-29f, 0.0f, 0x1.7a2972p-67f,
     0.0f, 0.0f, 0.0f, 0x1.17dbdep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.834f1ep-125f,
     0x1.debf94p-3f, 0x1.26c5f6p-107f, 0x1.a5a8dcp-92f, 0x1.38cc0ep-112f, 0.0f,
     0x1.3bc3c8p-8f, 0.0f, 0.0f, 0.0f, 0x1.e3eaap-16f, 0.0f, 0.0f, 0x1.159aaep-66f,
     0.0f, 0x1.6792dap-116f, 0.0f, 0x1.848498p-126f, 0.0f, 0x1.2c94cp-38f,
     0x1.f8740cp-122f, 0.0f, 0x1.fc18e2p-33f, 0x1.37e53cp-3f, 0x1.0892ecp-81f, 0.0f,
     0.0f, 0x1.b96c4cp-9f, 0.0f, 0x1.c7c2dcp-120f, 0x1.f7149ep-112f, 0x1.9eec2ep-63f,
     0.0f, 0x1.d98098p-44f, 0x1.6566c8p-89f, 0x1.d88c2p-126f, 0x1.b2c77ap-25f, 0.0f,
     0x1.23d57cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb544cp-76f, 0x1.719726p-34f,
     0x1.2eac66p-29f, 0.0f, 0.0f, 0x1.2cab2p-83f, 0.0f, 0.0f, 0x1.adfd56p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.66b2bcp-61f, 0.0f, 0.0f, 0x1.e626d8p-114f, 0.0f, 0.0f,
     0x1.0463dep-90f, 0x1.e018c6p-98f, 0x1.afff96p-98f, 0x1.e137f2p-83f,
     0x1.bd389p-122f, 0x1.a55182p-16f, 0.0f, 0x1.8b3954p-92f, 0x1.d2a836p-59f,
     0x1.475f22p-40f, 0.0f, 0x1.af6bf6p-102f, 0x1p0f, 0.0f, 0x1.6d0cbap-41f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.92d60ep-52f, 0x1.53d308p-53f, 0x1.eb441ep-112f,
     0x1.2a2f1ep-2f, 0x1.3da336p-23f, 0x1.de4824p-55f, 0.0f, 0.0f, 0x1.07e7c2p-125f,
     0x1.d2d4e4p-99f, 0.0f, 0.0f, 0x1.b815fcp-72f, 0x1.2809dap-63f, 0.0f, 0.0f,
     0x1.28474ep-43f, 0.0f, 0x1.7a78d8p-75f, 0.0f, 0x1.64756ep-29f, 0x1.c46492p-81f,
     0.0f, 0x1.b21b5ap-7f, 0x1.95042cp-78f, 0.0f, 0.0f, 0.0f, 0x1.b53646p-74f, 0.0f,
     0.0f, 0.0f, 0x1.94a198p-102f, 0.0f, 0x1.ecfac6p-91f, 0x1.5962f8p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.74eecep-64f, 0.0f, 0x1.b41444p-42f, 0x1.347512p-48f,
     0x1.b97816p-90f, 0x1.fa5204p-109f, 0x1.139f5p-112f, 0x1.7d88eep-30f,
     0x1.e5657ap-67f, 0.0f, 0x1.0841aap-106f, 0x1.6856d4p-92f, 0x1.e6b454p-94f,
     0x1.b026eap-56f, 0x1.700e28p-125f, 0.0f, 0.0f, 0x1.a958f8p-72f, 0.0f,
     0x1.76ce0ep-37f, 0x1.64bb08p-49f, 0.0f, 0.0f, 0x1.710eccp-103f, 0.0f, 0.0f, 0.0f,
     0x1.f5ed22p-95f, 0x1.3b5aacp-31f, 0x1.cc9eb4p-117f, 0.0f, 0x1.766754p-125f, 0.0f,
     0.0f, 0x1.f934dep-44f, 0x1.5efe08p-88f, 0x1.7e77ep-94f, 0.0f, 0x1.0e0ef4p-9f,
     0.0f, 0.0f, 0x1.2440c8p-101f, 0x1.e50a88p-97f, 0x1.869602p-126f, 0x1.e2af6ep-75f,
     0x1.819a46p-7f, 0.0f, 0.0f, 0x1.1bdadcp-77f, 0.0f, 0.0f, 0.0f, 0x1.0b6224p-2f,
     0.0f, 0x1.8edea6p-41f, 0.0f, 0.0f, 0x1.c1ef08p-57f, 0x1.4cc288p-43f,
     0x1.5f6248p-102f, 0x1.72fe86p-6f, 0.0f, 0.0f, 0.0f, 0x1.134c64p-36f,
     0x1.830288p-93f, 0.0f, 0.0f, 0x1.07f81p-76f, 0.0f, 0x1.57e2a2p-12f, 0.0f,
     0x1.7aea2ap-29f, 0x1.1d2eeep-34f, 0.0f, 0x1.1c2ffap-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6872p-88f, 0.0f, 0.0f, 0x1.ba05d8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.715a58p-124f, 0x1.45e70cp-93f, 0x1.38b5eep-55f, 0x1.51fb7ep-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.64d1d4p-41f, 0x1.3ab3a4p-120f, 0x1.15fccep-62f, 0.0f,
     0x1.5d1dd6p-34f, 0x1.11fb5ep-43f, 0x1.75d5b6p-89f, 0x1.4383p-35f,
     0x1.bba108p-104f, 0x1.6d2714p-5f, 0x1.11473p-81f, 0.0f, 0x1.b1c7a4p-69f,
     0x1.c9790ap-4f, 0x1.d874fep-116f, 0x1.343c4ap-39f, 0x1.01903ap-122f,
     0x1.0825d6p-67f, 0x1.ef9632p-43f, 0x1.a8197p-85f, 0x1.fd749ap-31f,
     0x1.3675aap-68f, 0x1.a1471ep-113f, 0x1.fb6bfap-49f, 0.0f, 0.0f, 0x1.e455ep-104f,
     0x1.70021p-79f, 0.0f, 0x1.2854fcp-41f, 0x1.0ff24ap-58f, 0.0f, 0x1.eb149p-35f,
     0x1.d8afc8p-40f, 0x1.4b6474p-71f, 0x1.019ec8p-99f, 0.0f, 0x1.84f0eap-25f, 0.0f,
     0.0f, 0x1.9168b2p-9f, 0x1.ae7272p-2f, 0x1.18a58cp-25f, 0x1.3676bcp-47f,
     0x1.770306p-50f, 0x1.0e7feep-56f, 0.0f, 0x1.83241ep-63f, 0x1.888934p-28f,
     0x1.fe7d38p-22f, 0x1.df4602p-30f, 0.0f, 0.0f, 0x1.e87132p-90f, 0x1.fda238p-25f,
     0x1.fa58d2p-59f, 0x1.1972p-72f, 0.0f, 0x1.f93298p-123f, 0.0f, 0x1.dabba4p-65f,
     0x1.793094p-110f, 0x1.c93d96p-44f, 0.0f, 0.0f, 0.0f, 0x1.b172cp-73f, 0.0f, 0.0f,
     0.0f, 0x1.b19e2ap-62f, 0.0f, 0x1.e38f86p-36f, 0x1.1b1daap-3f, 0.0f, 0.0f,
     0x1.8fea5ap-40f, 0.0f, 0x1.7e47bp-34f, 0x1.b6aa56p-121f, 0x1.7861fep-118f, 0.0f,
     0x1.7ac618p-93f, 0x1.9304f4p-69f, 0.0f, 0.0f, 0x1.81f664p-78f, 0.0f,
     0x1.f6a8a2p-64f, 0x1.d7406cp-37f, 0.0f, 0.0f, 0.0f, 0x1.d2e54p-105f,
     0x1.d100b2p-31f, 0.0f, 0x1.f690b6p-47f, 0x1.000c3cp-64f, 0x1.da15a2p-62f, 0.0f,
     0x1.7e0968p-11f, 0.0f, 0x1.163424p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d55aap-88f, 0.0f, 0.0f, 0.0f, 0x1.31505ep-125f, 0x1.711bd4p-83f,
     0x1.648e52p-33f, 0x1.c0321ep-49f, 0.0f, 0x1.bb721p-3f, 0x1.7ab8a2p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b5032p-67f, 0.0f, 0x1.171a12p-51f, 0.0f, 0.0f, 0.0f,
     0x1.35cefap-35f, 0x1.1f952ep-42f, 0x1.e412ap-72f, 0x1.01cc16p-64f,
     0x1.fd0a6ap-44f, 0x1.17d42p-1f, 0x1.b367b8p-18f, 0x1.b8de12p-2f,
     0x1.09e122p-104f, 0x1.8e344ep-5f, 0x1.6f5898p-4f, 0.0f, 0x1.00a8ccp-109f,
     0x1.f2ef34p-23f, 0.0f, 0x1.6460b4p-65f, 0x1.15b7dep-58f, 0.0f, 0x1.0247eap-17f,
     0x1.7853d6p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5438f2p-55f, 0x1.fe4e32p-84f,
     0x1.944ceep-64f, 0.0f, 0x1.c746bcp-29f, 0x1.34b8bp-31f, 0.0f, 0.0f,
     0x1.491056p-92f, 0.0f, 0x1.eb1714p-58f, 0x1.007e1ap-21f, 0.0f, 0x1.2a3fbap-105f,
     0.0f, 0x1.bbfbc6p-116f, 0x1.7417a6p-25f, 0.0f, 0.0f, 0.0f, 0x1.ab1742p-108f,
     0.0f, 0x1.10b4c2p-71f, 0.0f, 0x1.30de58p-99f, 0x1.175c5ep-70f, 0.0f,
     0x1.b2572ep-92f, 0x1.8078cap-7f, 0x1.c3a3eap-73f, 0x1.07f8eep-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b123bep-123f, 0.0f, 0x1.4564dep-102f, 0.0f, 0x1.73b66ap-117f,
     0x1.f591c6p-63f, 0.0f, 0.0f, 0x1.b08b2p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd2868p-61f, 0.0f, 0x1.b371d4p-41f, 0x1.8759fcp-113f, 0x1.a7bd58p-64f,
     0x1.3b62ap-75f, 0.0f, 0.0f, 0x1.f17c5p-62f, 0x1.7dc0dcp-37f, 0x1.6c08acp-66f,
     0.0f, 0.0f, 0.0f, 0x1.b099d2p-27f, 0.0f, 0x1.983458p-1f, 0x1.cbeea4p-115f,
     0x1.3f4768p-41f, 0x1.2dbc2cp-9f, 0.0f, 0.0f, 0x1.84fdb8p-47f, 0x1.6a2912p-38f,
     0.0f, 0.0f, 0.0f, 0x1.177dap-126f, 0x1.e52ac2p-114f, 0.0f, 0x1.368c16p-28f,
     0x1.784becp-108f, 0.0f, 0.0f, 0.0f, 0x1.01401ep-52f, 0x1.83905ap-126f, 0.0f,
     0.0f, 0x1.3a3abep-69f, 0x1.f6b64ap-87f, 0.0f, 0.0f, 0.0f, 0x1.5aeac6p-28f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60da1cp-92f, 0x1.c80b12p-5f, 0.0f,
     0x1.143274p-14f, 0x1.ea0924p-61f, 0.0f, 0x1.dfed14p-80f, 0.0f, 0x1.dd432cp-9f,
     0x1.c68fc2p-3f, 0.0f, 0.0f, 0x1.185b82p-35f, 0.0f, 0.0f, 0x1.afb6eap-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed3b9p-37f, 0x1.f8e37p-9f, 0x1.f40e3ep-35f, 0.0f,
     0x1.30885ap-74f, 0.0f, 0.0f, 0x1.e8a18ep-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9cc34p-71f, 0x1.00fbb6p-17f, 0x1.524022p-117f, 0.0f, 0x1.7e2096p-109f,
     0x1.fd8166p-54f, 0.0f, 0.0f, 0x1.c2ac36p-123f, 0.0f, 0x1.efeae2p-1f,
     0x1.4ad46p-50f, 0x1.a7de8ep-68f, 0.0f, 0x1.f843f4p-88f, 0x1.7bbc18p-63f,
     0x1.ea05d2p-23f, 0x1.71a458p-88f, 0.0f, 0.0f, 0.0f, 0x1.f3acccp-29f,
     0x1.10ed9ep-33f, 0x1.cae988p-38f, 0.0f, 0x1.aa53fep-46f, 0.0f, 0.0f, 0.0f,
     0x1.742a82p-119f, 0x1.5e4df6p-57f, 0.0f, 0x1.86b08ep-108f, 0x1.d411c2p-81f,
     0x1.1b07e6p-72f, 0.0f, 0x1.21c5dap-50f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.7078aap-48f, 0x1.b8a01p-17f, 0.0f, 0.0f, 0x1.b5c34p-7f, 0.0f,
     0x1.40033p-50f, 0x1.ba82a4p-32f, 0.0f, 0x1.a01c86p-7f, 0x1.80928ap-67f, 0.0f,
     0x1.5b90a4p-20f, 0x1.acdf64p-5f, 0.0f, 0.0f, 0.0f, 0x1.26317ep-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fe472p-23f, 0.0f, 0.0f, 0x1.c7d5c2p-35f, 0.0f,
     0.0f, 0x1.3eb4e2p-106f, 0.0f, 0.0f, 0x1.7ead56p-111f, 0.0f, 0x1.193e54p-5f, 0.0f,
     0.0f, 0x1.bd99a2p-95f, 0x1.4bab72p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98fde6p-43f, 0x1.8edd6cp-19f, 0x1.87df8cp-95f, 0.0f, 0.0f, 0.0f,
     0x1.760748p-110f, 0.0f, 0.0f, 0x1.3f081ep-8f, 0x1.f7f408p-34f, 0.0f,
     0x1.eb65e6p-30f, 0.0f, 0x1.16dabap-110f, 0x1.6df554p-69f, 0x1.d87a8ap-85f, 0.0f,
     0x1.3deb7p-46f, 0x1.01ac98p-118f, 0x1.cc0174p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0df80ep-26f, 0x1.c109fep-34f, 0x1.f4e1f8p-102f, 0x1.d3cdfap-48f, 0.0f, 0.0f,
     0x1.60a88ep-112f, 0x1.4d0334p-72f, 0x1.c08bcep-20f, 0.0f, 0.0f, 0x1.cbfde6p-39f,
     0x1.97fb34p-106f, 0x1.60affcp-95f, 0.0f, 0.0f, 0x1.45e2e6p-34f, 0x1.8ef594p-9f,
     0.0f, 0.0f, 0x1.f493fep-90f, 0x1.0c43acp-126f, 0x1.ba3a4ep-108f, 0x1.0ced16p-33f,
     0x1.74228p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb0f64p-29f, 0.0f,
     0.0f, 0x1.3a3424p-89f, 0.0f, 0x1.6c01cp-67f, 0x1.5056f8p-87f, 0x1.c8567ep-16f,
     0x1.7c5374p-23f, 0x1.ad095cp-20f, 0x1.0e2d18p-25f, 0.0f, 0x1.a805b8p-105f, 0.0f,
     0x1.2fcf3p-42f, 0.0f, 0x1.02c042p-48f, 0x1.4c5a5ap-60f, 0x1.76b26ep-71f, 0.0f,
     0x1.86bb66p-35f, 0.0f, 0x1.52dd2ep-4f, 0x1.9d1c9p-83f, 0x1.a4894ap-43f, 0.0f,
     0x1.b1f1fap-121f, 0x1.58566ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.993864p-52f,
     0x1.053286p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa5e16p-77f, 0x1.b7f566p-118f,
     0x1.141b8cp-85f, 0.0f, 0x1.a96cd4p-120f, 0.0f, 0.0f, 0x1.b89a34p-13f,
     0x1.14932ap-39f, 0.0f, 0x1.918474p-30f, 0x1.d304bcp-102f, 0.0f, 0x1.1f46ep-5f,
     0.0f, 0x1.a63bc4p-102f, 0x1.ea7776p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38a392p-36f, 0.0f, 0.0f, 0x1.849784p-115f, 0x1.f52f56p-103f,
     0x1.93d9a6p-118f, 0.0f, 0x1.01d572p-80f, 0x1.60bcfep-49f, 0.0f, 0.0f,
     0x1.14b714p-50f, 0x1.575afcp-82f, 0x1.d445e2p-74f, 0.0f, 0x1.d26f74p-80f, 0.0f,
     0x1.f92fc6p-21f, 0.0f, 0.0f, 0.0f, 0x1.4097p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3360eap-29f, 0x1.29bd4ep-30f, 0x1.a4c4e8p-113f, 0.0f, 0.0f, 0x1.79b354p-14f,
     0x1.f6ee9cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1b04cp-63f, 0.0f,
     0.0f, 0.0f, 0x1.c2670cp-35f, 0x1.591a42p-95f, 0.0f, 0x1.cc6e8cp-49f,
     0x1.0544c6p-94f, 0x1.f152f2p-43f, 0.0f, 0x1.b86022p-13f, 0.0f, 0x1.83f1aep-59f,
     0.0f, 0.0f, 0x1.d284c4p-35f, 0.0f, 0.0f, 0x1.72d6c4p-73f, 0x1.71dd2p-98f, 0.0f,
     0.0f, 0.0f, 0x1.bab7c2p-83f, 0.0f, 0.0f, 0.0f, 0x1.45f562p-111f, 0.0f,
     0x1.6d48cep-116f, 0x1.f7f22ep-54f, 0x1.5b2bp-82f, 0x1.94b0aep-118f,
     0x1.25c0bep-115f, 0x1.c45f54p-78f, 0x1.f85f3ap-80f, 0x1.869be8p-102f,
     0x1.6f345p-5f, 0.0f, 0x1.a6494p-100f, 0.0f, 0x1.871eap-44f, 0.0f,
     0x1.c1b1d2p-104f, 0.0f, 0x1.eba54ep-9f, 0x1.684904p-75f, 0.0f, 0.0f,
     0x1.3b374p-13f, 0x1.d87cf6p-85f, 0x1.d34fe2p-8f, 0x1.696c3cp-126f, 0.0f,
     0x1.10287ap-114f, 0.0f, 0x1.b53876p-102f, 0x1.784cd2p-14f, 0x1.045e3p-20f,
     0x1.952d52p-24f, 0.0f, 0.0f, 0.0f, 0x1.34114ap-63f, 0.0f, 0x1.d02be6p-117f, 0.0f,
     0.0f, 0x1.d33cdcp-43f, 0x1.4a8e44p-120f, 0x1.0513b4p-23f, 0.0f, 0x1.e4dd48p-89f,
     0.0f, 0x1.4fc478p-98f, 0x1.cb7c5cp-61f, 0x1.dff8dp-60f, 0x1.066d6ep-48f,
     0x1.7abd78p-96f, 0x1.a89f6ap-68f, 0.0f, 0.0f, 0x1.90c8f4p-20f, 0x1.4590c6p-52f,
     0x1.7e1caep-46f, 0x1.e6d04ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.694fd8p-75f,
     0x1.a73248p-13f, 0x1.79e7f6p-109f, 0.0f, 0x1.73835ep-98f, 0x1.5e986p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6460aap-16f, 0x1.b7fd32p-93f, 0.0f, 0.0f, 0.0f,
     0x1.3f6e88p-114f, 0.0f, 0x1.9573b6p-108f, 0.0f, 0x1.a028e2p-95f, 0.0f, 0.0f,
     0x1.0e5c86p-93f, 0x1.06e9fep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9c3ccp-33f, 0.0f, 0x1.eb338ep-22f, 0.0f, 0x1.8cf81p-60f, 0x1.f2acc2p-78f,
     0.0f, 0.0f, 0x1.53789p-119f, 0x1.b9a90cp-117f, 0.0f, 0.0f, 0x1.5cc43p-71f, 0.0f,
     0x1.350342p-2f, 0x1.7a5d12p-42f, 0.0f, 0.0f, 0.0f, 0x1.da158ap-2f, 0.0f, 0.0f,
     0x1.8d85fp-18f, 0.0f, 0.0f, 0x1.13dc88p-41f, 0.0f, 0x1.f687d4p-90f,
     0x1.1fe8bep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00c34ep-70f, 0.0f, 0x1.1c412ap-82f,
     0.0f, 0x1.0e5d0ap-30f, 0x1.552aaep-21f, 0.0f, 0.0f, 0.0f, 0x1.89351cp-31f,
     0x1.d2c7bp-48f, 0.0f, 0.0f, 0x1.4fe6cep-116f, 0x1.ecea7p-46f, 0x1.879d1p-63f,
     0x1.5eadf4p-34f, 0x1.54c23ep-119f, 0.0f, 0x1.44d34cp-120f, 0x1.e913ecp-53f,
     0x1.ffb8ecp-91f, 0x1.cbcf84p-115f, 0x1.0cc94ep-12f, 0x1.6e594cp-17f, 0.0f,
     0x1.24f544p-53f, 0.0f, 0x1.32980ap-5f, 0.0f, 0x1.8b33f8p-116f, 0.0f,
     0x1.00e84p-86f, 0x1.07656p-58f, 0x1.99579ap-26f, 0.0f, 0x1.237d5cp-80f,
     0x1.014708p-122f, 0x1.29cc8cp-73f, 0x1.b297fep-113f, 0x1.15c16ep-27f,
     0x1.1e3f7cp-58f, 0x1.d4e438p-3f, 0.0f, 0x1.7a6f48p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b63a8p-17f, 0x1.7d3be8p-55f, 0.0f, 0.0f, 0.0f, 0x1.4c35p-65f, 0.0f, 0.0f,
     0x1.83b44ap-40f, 0x1.b617dap-10f, 0x1.3a1accp-85f, 0x1.e3414ap-30f, 0.0f, 0.0f,
     0x1.fbeaf6p-46f, 0.0f, 0.0f, 0x1.3778acp-9f, 0x1.15cf1ep-15f, 0.0f,
     0x1.5331c8p-34f, 0.0f, 0x1.2e6d6cp-52f, 0.0f, 0.0f, 0x1.787deap-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.227c94p-59f, 0.0f, 0x1.214df2p-51f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.6c113p-95f, 0x1.423146p-89f, 0x1.43ec06p-24f, 0x1.510fd4p-43f,
     0x1.32d9bep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.410e0cp-9f, 0x1.60b592p-47f, 0.0f, 0.0f, 0x1.67ffcp-69f, 0x1.fd0778p-124f,
     0.0f, 0x1.5c1004p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35860cp-96f, 0.0f, 0.0f,
     0x1.54651ap-107f, 0x1.756e0cp-104f, 0.0f, 0x1.bb2d14p-79f, 0x1.b958d2p-29f,
     0x1.5b597ap-3f, 0x1.58b7dap-104f, 0.0f, 0.0f, 0.0f, 0x1.14058cp-88f, 0.0f, 0.0f,
     0x1.4a4e1cp-101f, 0.0f, 0.0f, 0x1.5092ap-28f, 0x1.48516ep-27f, 0x1.ec5dc8p-58f,
     0x1.164662p-71f, 0.0f, 0.0f, 0x1.720384p-90f, 0x1.6d651ap-122f, 0x1.fe881cp-114f,
     0x1.ebaf2p-96f, 0.0f, 0x1.e905fcp-66f, 0.0f, 0.0f, 0x1.97952cp-52f, 0.0f,
     0x1.1cebc4p-84f, 0x1.f294d8p-91f, 0.0f, 0.0f, 0.0f, 0x1.923722p-23f, 0.0f,
     0x1.9edf66p-17f, 0.0f, 0x1.1b5522p-109f, 0.0f, 0.0f, 0.0f, 0x1.2239dp-37f, 0.0f,
     0x1.9d0636p-61f, 0x1.1248e8p-109f, 0x1.f2f496p-2f, 0.0f, 0x1.baebdep-119f, 0.0f,
     0x1.8347e6p-101f, 0x1.5716e8p-103f, 0.0f, 0.0f, 0.0f, 0x1.d10bf6p-113f, 0.0f,
     0x1.53ec4cp-67f, 0.0f, 0.0f, 0x1.c14714p-125f, 0x1.176bf6p-73f, 0x1.45328cp-42f,
     0x1.010ec6p-78f, 0x1.25b5e4p-33f, 0x1.a7f522p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79374p-100f, 0.0f, 0x1.1898a2p-76f, 0x1.8d83dcp-26f, 0x1.8f1528p-85f, 0.0f,
     0x1.6f640ap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c89dfap-59f, 0x1.4a7816p-117f,
     0.0f, 0x1.add78ap-43f, 0x1p0f, 0x1.5f8d7ap-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b6d28p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26cd44p-98f, 0.0f,
     0x1.ffdb9cp-92f, 0x1.0f3b8cp-24f, 0x1.70d5cp-20f, 0.0f, 0.0f, 0x1.af0dc4p-79f,
     0x1.4da9cap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5e31ep-67f, 0.0f, 0x1.828eb2p-123f,
     0x1.ca84a4p-31f, 0.0f, 0x1.0e8168p-36f, 0.0f, 0x1.d283d6p-21f, 0x1.bdaf16p-20f,
     0.0f, 0x1.030acp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f2266p-93f, 0x1.4ac94ep-37f,
     0x1.cafc56p-88f, 0.0f, 0.0f, 0x1.4ab1e2p-89f, 0.0f, 0x1.5abd3ep-36f,
     0x1.43f0c4p-22f, 0x1.d7e288p-98f, 0x1.153e4ap-110f, 0x1.93f9d8p-59f, 0.0f, 0.0f,
     0.0f, 0x1.268658p-110f, 0x1.86b866p-89f, 0x1.e95b1ap-121f, 0x1.1abc1p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.349f86p-68f, 0x1.f3c8b2p-93f,
     0x1.24403cp-65f, 0.0f, 0x1.6f8066p-46f, 0.0f, 0x1.dd886ap-95f, 0.0f,
     0x1.d2767cp-89f, 0.0f, 0x1.4dfe8p-36f, 0.0f, 0x1.42076cp-42f, 0x1.5348eap-68f,
     0.0f, 0.0f, 0x1.967c88p-93f, 0x1.dc91f8p-23f, 0.0f, 0.0f, 0x1.16dbep-103f,
     0x1.e2e9bp-71f, 0x1.1c0da4p-109f, 0.0f, 0x1.ad72bep-3f, 0.0f, 0x1.15fc18p-40f,
     0.0f, 0.0f, 0x1.622bd8p-67f, 0x1.4407fcp-20f, 0.0f, 0.0f, 0x1.e06d76p-27f, 0.0f,
     0x1.36545p-109f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.92d212p-83f, 0.0f,
     0x1.5bf9b2p-71f, 0.0f, 0x1.8c4022p-41f, 0x1.033b5cp-79f, 0.0f, 0x1.066278p-40f,
     0x1.1a43c2p-73f, 0.0f, 0x1.8e824p-85f, 0.0f, 0.0f, 0x1.4609acp-123f, 0.0f, 0.0f,
     0.0f, 0x1.b05702p-55f, 0.0f, 0x1.fe7cdep-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a22c1ap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23d10ep-39f, 0.0f, 0.0f, 0.0f,
     0x1.fe6d04p-79f, 0.0f, 0x1.254d9ap-38f, 0x1.5248d6p-126f, 0.0f, 0x1.48ea84p-3f,
     0.0f, 0x1.72a5b4p-19f, 0.0f, 0x1.d0d0fp-91f, 0x1.bc2798p-21f, 0.0f,
     0x1.ca10f6p-124f, 0.0f, 0.0f, 0x1.d9f986p-73f, 0x1.1c15bcp-4f, 0x1.aeed9ap-98f,
     0x1.dccfe2p-50f, 0x1.2d5d4p-19f, 0.0f, 0.0f, 0x1.f0197cp-95f, 0x1.ea4f9ep-105f,
     0x1.1ad044p-112f, 0.0f, 0x1.d14576p-7f, 0.0f, 0.0f, 0.0f, 0x1.acc3b6p-22f,
     0x1.dd20ep-90f, 0.0f, 0.0f, 0x1.0487aap-57f, 0.0f, 0x1.83dd8ep-25f,
     0x1.d7bb02p-96f, 0x1.55f1eap-110f, 0x1.bf59bap-71f, 0.0f, 0x1.2651ccp-41f, 0.0f,
     0x1.c0eebep-101f, 0x1.4943d4p-31f, 0.0f, 0x1.748e48p-43f, 0.0f, 0x1.1066cap-110f,
     0.0f, 0.0f, 0x1.c1d93ap-99f, 0x1.e7b7a2p-6f, 0x1.4c1bd8p-88f, 0.0f,
     0x1.3533aap-47f, 0x1.4a5b2ap-98f, 0x1.44d27ep-65f, 0.0f, 0x1.780accp-109f, 0.0f,
     0x1.97c2bep-32f, 0x1.906a8ap-59f, 0.0f, 0.0f, 0.0f, 0x1.5d863ep-82f, 0.0f,
     0x1.c96f3ep-47f, 0x1.50c986p-47f, 0.0f, 0.0f, 0x1.4c9a02p-60f, 0x1.6081a4p-55f,
     0x1.3103d2p-110f, 0.0f, 0x1.455938p-78f, 0x1.bc7e26p-89f, 0x1.3a307ep-105f,
     0x1.6b59dep-24f, 0.0f, 0x1.f0a03ep-97f, 0x1.eb41a4p-105f, 0.0f, 0x1.546214p-98f,
     0x1.4fe5aap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5ec0cp-118f, 0.0f, 0x1.c8a568p-114f, 0.0f, 0x1.20e932p-24f, 0.0f,
     0x1.1a2c44p-28f, 0.0f, 0x1.5966b4p-11f, 0.0f, 0.0f, 0x1.ad2a46p-58f, 0.0f,
     0x1.3fa7d8p-45f, 0.0f, 0x1.2e2bfp-78f, 0x1.c6a4e6p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.596b22p-55f, 0x1.b9e886p-97f, 0x1.d2fe62p-126f, 0x1.2c4b2p-66f, 0.0f, 0.0f,
     0.0f, 0x1.2a82aap-124f, 0x1.8187ccp-54f, 0x1.f95df4p-39f, 0.0f, 0.0f, 0.0f,
     0x1.e4a0ecp-62f, 0.0f, 0x1.1215a8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e08p-46f,
     0x1.1386a6p-64f, 0x1.ec64fap-125f, 0x1.ddc49p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13aea2p-37f, 0x1.43944ep-53f, 0.0f, 0x1.e8b3f8p-41f, 0x1.a44f7ap-79f, 0.0f,
     0x1.9f9ec4p-13f, 0x1.5fb76p-33f, 0x1.39a262p-115f, 0.0f, 0x1.1650bp-64f,
     0x1.89e652p-35f, 0.0f, 0x1.42c034p-79f, 0.0f, 0x1.b20b6ep-100f, 0x1.392874p-68f,
     0x1.da8c24p-73f, 0.0f, 0x1.06076p-67f, 0x1.f6bc9ep-15f, 0x1.1583ccp-70f, 0.0f,
     0.0f, 0x1.eed8a4p-67f, 0.0f, 0x1.dc04c4p-79f, 0x1.b00982p-124f, 0.0f,
     0x1.79146ap-64f, 0.0f, 0x1.8ef59p-54f, 0x1.7fdb38p-32f, 0x1.022092p-36f, 0.0f,
     0.0f, 0x1.8a5a42p-30f, 0.0f, 0x1.d1682cp-49f, 0x1.d4a412p-71f, 0.0f,
     0x1.0377e4p-23f, 0.0f, 0x1.5ea236p-16f, 0x1.298cfcp-34f, 0x1.962a32p-86f, 0.0f,
     0x1.7c125cp-76f, 0x1.18bb44p-108f, 0.0f, 0x1.5006bp-48f, 0x1.5dcacap-91f,
     0x1.65f4a2p-47f, 0x1.fb0928p-44f, 0x1.dd148cp-87f, 0.0f, 0x1.bc2d7cp-28f,
     0x1.ffab7p-55f, 0x1.8b4d9ap-72f, 0.0f, 0x1.779194p-11f, 0x1.d871f2p-99f,
     0x1.e25cc6p-94f, 0x1.899802p-112f, 0x1.3fc00ep-49f, 0x1.5334d6p-77f,
     0x1.0324c4p-4f, 0x1.01c332p-94f, 0x1.5db93cp-102f, 0x1.4d673p-12f,
     0x1.e36f62p-44f, 0x1.ce6b2cp-73f, 0.0f, 0x1.25f92p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7cc6b2p-116f, 0.0f, 0x1.bfa0fp-69f, 0x1.ddb0b8p-97f,
     0x1.260bb8p-4f, 0x1.bd947ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8eaa8p-34f,
     0x1.fec39ap-108f, 0.0f, 0.0f, 0x1.7a3fb2p-108f, 0.0f, 0x1.1d4d0ep-28f, 0.0f,
     0x1.3c57aap-52f, 0.0f, 0.0f, 0.0f, 0x1.2f29bcp-92f, 0x1.1bac5ep-14f,
     0x1.984554p-32f, 0.0f, 0.0f, 0.0f, 0x1.9fcc8ap-110f, 0x1.3d7f8ep-8f,
     0x1.fa0732p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1e35p-42f, 0x1.77cf78p-92f,
     0x1.921088p-11f, 0.0f, 0x1.730c2ap-100f, 0.0f, 0x1.cf96dep-28f, 0x1.65286ap-43f,
     0x1.a3d4cep-70f, 0x1.075334p-12f, 0x1.157cfcp-96f, 0.0f, 0x1.eacdbep-98f,
     0x1.15ea12p-89f, 0.0f, 0.0f, 0x1.903c82p-98f, 0x1.9a9d64p-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bb9006p-112f, 0.0f, 0x1.810dd4p-11f, 0x1.fe5a22p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c36bep-74f, 0x1.ce8fa2p-84f, 0.0f, 0x1.a30878p-58f, 0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp2 = Sleef_finz_fmodf4_avx2128(tmp0, tmp1);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_fmodf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fmodf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
