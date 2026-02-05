/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fdimf4_kvx.c --function Sleef_finz_fdimf4_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.94843ap-24f, 0x1.fd49fcp-101f, 0x1.4c143cp-43f, 0x1.c914bp-14f, 0.0f,
     0x1.ad8f44p-121f, 0.0f, 0.0f, 0.0f, 0x1.c57e02p-66f, 0x1.55d816p-12f,
     0x1.0f72a4p-18f, 0.0f, 0x1.73e8cep-104f, 0.0f, 0x1.cb2cfep-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c29dap-82f, 0x1.68d96p-51f, 0x1.cbefdcp-83f,
     0.0f, 0x1.bc1f64p-43f, 0x1.3385eep-108f, 0.0f, 0x1.2f6aep-98f, 0.0f,
     0x1.f4df78p-5f, 0.0f, 0.0f, 0x1.611fc8p-54f, 0x1.56e19ap-14f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.a0c81ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63cae8p-24f, 0.0f, 0.0f,
     0x1.9502bep-29f, 0.0f, 0x1.a5d884p-32f, 0x1.31619ep-104f, 0x1.a65b1ep-39f, 0.0f,
     0.0f, 0.0f, 0x1.0cc24p-93f, 0.0f, 0x1.248a1ap-117f, 0.0f, 0x1.863006p-65f,
     0x1.842b3ap-20f, 0.0f, 0.0f, 0x1.ff432ap-23f, 0.0f, 0.0f, 0.0f, 0x1.9e21b8p-60f,
     0x1.1ea2fep-66f, 0.0f, 0x1.138d7p-10f, 0.0f, 0x1.9ce7f4p-11f, 0.0f, 0.0f,
     0x1.b72714p-47f, 0x1.2833fp-3f, 0x1.8c18f6p-82f, 0x1.eb771cp-101f,
     0x1.7319d6p-96f, 0.0f, 0.0f, 0x1.883272p-22f, 0.0f, 0.0f, 0x1p0f, 0x1.76ca24p-2f,
     0.0f, 0x1p0f, 0.0f, 0x1.53b8acp-50f, 0.0f, 0.0f, 0x1.2ce618p-120f,
     0x1.09198p-32f, 0x1.bdefep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9fe7e8p-31f, 0x1.3b847ep-64f, 0x1.fa4c08p-23f, 0.0f, 0x1.9e11bap-49f,
     0x1.eba6d6p-113f, 0.0f, 0x1.280984p-1f, 0.0f, 0x1.3e4526p-50f, 0x1.9a3254p-55f,
     0x1.12bd26p-42f, 0.0f, 0.0f, 0x1.1457fap-40f, 0x1.9665b2p-39f, 0x1.d83f82p-49f,
     0x1.f871d4p-22f, 0.0f, 0.0f, 0.0f, 0x1.021e9ep-41f, 0.0f, 0.0f, 0.0f,
     0x1.bf342ap-22f, 0.0f, 0.0f, 0.0f, 0x1.f75c9ap-33f, 0x1.38f282p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7472a2p-114f, 0x1.40b8f8p-64f, 0.0f, 0x1.0ee98ap-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.742744p-17f, 0x1.13e9bep-42f, 0x1.8aeeaep-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e62412p-124f, 0.0f, 0x1.1094d6p-102f, 0.0f, 0x1.3e3ef2p-42f,
     0.0f, 0.0f, 0x1.5c1092p-3f, 0x1.3a902cp-120f, 0x1.3e45f4p-35f, 0.0f,
     0x1.8273fep-88f, 0x1.162bb8p-24f, 0.0f, 0x1.77b692p-102f, 0x1.b8c338p-124f,
     0x1.9062fep-83f, 0x1.29db1cp-8f, 0x1.614cb6p-27f, 0x1.d8f184p-70f,
     0x1.bd1d4ep-42f, 0.0f, 0x1.ae0556p-11f, 0x1.508814p-11f, 0.0f, 0.0f, 0.0f,
     0x1.d16dfap-24f, 0.0f, 0x1.8e6a88p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bca85p-108f,
     0.0f, 0x1.dbeb5ap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.777426p-52f, 0x1.55504ap-78f,
     0.0f, 0x1.519a76p-112f, 0.0f, 0x1.e2445p-72f, 0x1.a6e9c2p-88f, 0.0f, 0.0f,
     0x1.abde5p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5d768p-122f,
     0x1.40bf9p-51f, 0x1.dc95d8p-116f, 0x1.8fbd18p-42f, 0.0f, 0x1.428792p-103f,
     0x1.3196c4p-62f, 0x1.ea1bcep-9f, 0x1.8d5c62p-1f, 0x1.3a7bb8p-2f, 0.0f,
     0x1.e99f34p-84f, 0.0f, 0.0f, 0.0f, 0x1.96bb52p-34f, 0.0f, 0x1.3d3f22p-126f,
     0x1.1b9cb8p-27f, 0x1.9c39d2p-59f, 0x1.25b9b4p-41f, 0.0f, 0.0f, 0.0f,
     0x1.d2475p-63f, 0.0f, 0x1.7d126ap-56f, 0.0f, 0.0f, 0x1.82bcbp-66f,
     0x1.3bcbdep-86f, 0.0f, 0.0f, 0x1.1f8f9ep-113f, 0x1.dd2ee4p-17f, 0x1.e1b644p-125f,
     0.0f, 0x1.c39526p-67f, 0x1.38305ep-37f, 0.0f, 0x1.6a867p-9f, 0.0f, 0.0f,
     0x1.4f8c3cp-108f, 0.0f, 0.0f, 0x1.245cc6p-62f, 0.0f, 0x1.c13202p-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.97b4fap-91f, 0x1.2b34cep-2f, 0.0f, 0x1.9c6bbp-42f,
     0x1.269f78p-1f, 0.0f, 0.0f, 0.0f, 0x1.5fcf28p-92f, 0x1.882d22p-80f, 0.0f, 0.0f,
     0x1.140cdep-119f, 0x1.e8c9fcp-60f, 0.0f, 0.0f, 0x1.5da036p-98f, 0x1.4b19d8p-66f,
     0x1.bd48cp-64f, 0x1.32bfep-27f, 0x1.e5c50ap-116f, 0.0f, 0x1.9cdcd4p-53f,
     0x1.20b566p-49f, 0.0f, 0x1.cf58f6p-115f, 0x1.c367b4p-99f, 0.0f, 0x1.909daap-71f,
     0.0f, 0x1.b7264cp-61f, 0x1.41cd1ep-122f, 0x1.6a3884p-84f, 0.0f, 0x1.aeb1c4p-1f,
     0x1.f197cap-125f, 0.0f, 0x1.9bbb32p-84f, 0x1p0f, 0.0f, 0x1.4c8abap-47f, 0.0f,
     0x1.ed38bap-92f, 0x1.11cdeap-70f, 0.0f, 0x1.1e0274p-1f, 0x1.a550bep-101f, 0.0f,
     0x1.7a466cp-63f, 0.0f, 0.0f, 0x1.3b375ep-34f, 0x1.bc140ap-69f, 0x1.54197p-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfaf08p-9f, 0.0f, 0.0f, 0x1.342208p-30f, 0.0f,
     0x1.04c2a2p-92f, 0.0f, 0.0f, 0.0f, 0x1.09cd94p-49f, 0x1.87184p-6f,
     0x1.c3285p-113f, 0x1.a78258p-109f, 0x1.e4531ep-121f, 0.0f, 0.0f, 0.0f,
     0x1.cc62b6p-64f, 0.0f, 0x1.7ffd7cp-31f, 0x1.4f45b4p-79f, 0.0f, 0x1.4ad392p-8f,
     0x1p0f, 0.0f, 0x1.623e3p-43f, 0.0f, 0.0f, 0.0f, 0x1.95df54p-41f, 0.0f,
     0x1.e836f8p-36f, 0.0f, 0x1.a0cd58p-30f, 0.0f, 0.0f, 0.0f, 0x1.e845b8p-98f,
     0x1.1d9cbep-38f, 0.0f, 0.0f, 0x1.d13cdp-10f, 0.0f, 0.0f, 0x1.54895cp-51f,
     0x1.5276b6p-22f, 0.0f, 0x1.5cc652p-16f, 0x1.f4bf52p-59f, 0x1.872e86p-36f, 0.0f,
     0x1.326cb4p-101f, 0x1.6d3b78p-55f, 0.0f, 0.0f, 0.0f, 0x1.df15dcp-96f,
     0x1.5b8714p-79f, 0x1.f1197cp-120f, 0x1.a41d26p-95f, 0.0f, 0x1.e3a91ap-56f,
     0x1.c6b7b4p-109f, 0x1.12819cp-42f, 0.0f, 0.0f, 0x1.b3efbp-111f, 0x1.5ad72p-90f,
     0x1.c652cp-23f, 0x1.b470cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0ddc4p-67f, 0.0f,
     0.0f, 0x1.c59ca4p-16f, 0x1.55ebd2p-47f, 0x1.f8f2d4p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1fc14p-29f, 0x1.e6b296p-36f, 0.0f, 0.0f, 0x1.7fe9fap-72f, 0.0f, 0.0f,
     0x1.f290acp-117f, 0.0f, 0x1.bffaa6p-20f, 0x1.e4696p-109f, 0x1.7b6612p-21f,
     0x1.d28b3cp-9f, 0x1.48dd92p-120f, 0x1.4d7ed4p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b4b7p-85f, 0.0f, 0.0f, 0.0f, 0x1.85b542p-38f, 0.0f, 0x1.a90d06p-109f, 0.0f,
     0x1.207574p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.594254p-51f, 0.0f, 0x1.5208eap-83f,
     0.0f, 0.0f, 0x1.73b03ep-23f, 0x1.55d2bap-112f, 0x1.7e84f2p-17f, 0.0f,
     0x1.2a5a04p-105f, 0x1.4de582p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43114ep-20f,
     0x1p0f, 0x1.25645p-11f, 0x1.02ce9p-33f, 0.0f, 0.0f, 0x1.2be1a2p-50f, 0.0f,
     0x1.4e9112p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dba18ep-113f, 0x1.aba55p-7f,
     0x1.a91be2p-21f, 0x1.aaddb8p-6f, 0x1.1f6152p-118f, 0x1.97dfcep-36f,
     0x1.e9df32p-11f, 0.0f, 0.0f, 0.0f, 0x1.7725b8p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8c6b4ap-14f, 0.0f, 0x1.d25d3p-102f, 0.0f, 0.0f,
     0x1.da5148p-104f, 0.0f, 0x1.736efcp-12f, 0x1.ffdc4p-32f, 0x1.140a94p-92f,
     0x1.0875b2p-97f, 0x1.f063c2p-59f, 0x1.5112aap-83f, 0.0f, 0.0f, 0x1.520806p-15f,
     0.0f, 0x1.5b038p-40f, 0.0f, 0x1.095fd4p-64f, 0.0f, 0x1.3a9f84p-29f, 0.0f,
     0x1.f122ap-112f, 0x1.1b4942p-77f, 0x1.d833fap-75f, 0x1.b80c4p-97f, 0.0f,
     0x1.69ae9ep-85f, 0.0f, 0x1.00bc82p-9f, 0x1.f1f79ep-26f, 0x1.89a248p-115f, 0.0f,
     0x1.050b82p-44f, 0.0f, 0.0f, 0.0f, 0x1.530cc8p-122f, 0.0f, 0.0f, 0.0f,
     0x1.467e68p-7f, 0x1.377214p-75f, 0.0f, 0x1.010a5ep-35f, 0x1.a046dcp-102f,
     0x1.1eaac2p-80f, 0.0f, 0.0f, 0.0f, 0x1.a33ae4p-117f, 0.0f, 0x1.538deap-114f,
     0.0f, 0.0f, 0x1.a0c68cp-54f, 0.0f, 0.0f, 0x1.43eb6p-111f, 0.0f, 0.0f, 0.0f,
     0x1.a67018p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.040c8p-18f, 0.0f, 0x1.50d33ap-15f,
     0.0f, 0x1.052656p-38f, 0x1.854578p-89f, 0x1.2863a8p-67f, 0.0f, 0.0f,
     0x1.30e384p-23f, 0.0f, 0.0f, 0x1.3a80a4p-48f, 0x1.9223aap-113f, 0x1.d818a6p-24f,
     0x1.e715b4p-103f, 0.0f, 0.0f, 0.0f, 0x1.cbe4aep-81f, 0x1.88a04ap-44f,
     0x1.1a1482p-29f, 0.0f, 0.0f, 0x1.37f4eep-82f, 0x1.cc02a2p-59f, 0.0f, 0.0f, 0.0f,
     0x1.d0e6e4p-117f, 0x1.b7407p-5f, 0x1.8a08e2p-63f, 0.0f, 0x1.000b5ep-84f,
     0x1.4af7dcp-60f, 0.0f, 0x1.c40858p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.624172p-26f, 0x1.0010fep-95f, 0x1.cc8e9ap-58f, 0x1.be686ep-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.15e878p-70f, 0.0f, 0x1.60071ep-83f, 0.0f, 0x1.da085p-1f,
     0x1.d94458p-48f, 0x1.caa4c8p-37f, 0x1.3061fcp-119f, 0.0f, 0.0f, 0.0f,
     0x1.2ff124p-83f, 0x1.31abecp-64f, 0x1.16a9dep-12f, 0x1.30a44ep-9f, 0.0f, 0.0f,
     0.0f, 0x1.6e615cp-105f, 0.0f, 0x1.4da56ep-126f, 0x1.133baap-90f, 0x1.b965c6p-66f,
     0x1.a3fad8p-58f, 0x1.7e1b6ep-69f, 0x1.317d94p-114f, 0.0f, 0.0f, 0.0f,
     0x1.0143ap-103f, 0x1.70a6cep-74f, 0.0f, 0x1.ee586ap-2f, 0x1.ec5d3p-111f,
     0x1.70f184p-27f, 0x1.27289p-61f, 0x1.c6d6fep-52f, 0x1.5fe2b6p-48f, 0.0f,
     0x1.7b8f0ep-89f, 0.0f, 0.0f, 0x1.fb0944p-72f, 0x1.cc36c2p-117f, 0.0f, 0.0f,
     0x1.668e1p-39f, 0.0f, 0.0f, 0x1.bc94fcp-58f, 0x1.2fea22p-70f, 0x1.367c16p-100f,
     0.0f, 0x1.2a8892p-60f, 0.0f, 0x1.a42ddcp-56f, 0.0f, 0.0f, 0.0f, 0x1.7935f2p-95f,
     0.0f, 0x1.8ed0bcp-106f, 0.0f, 0x1.6bff0cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.9b859p-88f, 0.0f, 0x1p0f, 0x1.2893b4p-73f, 0.0f,
     0x1.dc0dbap-87f, 0x1.486cbp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a8d44p-44f,
     0x1.aa184p-109f, 0x1.9dbb1ep-88f, 0.0f, 0x1.f5f5c8p-67f, 0.0f, 0x1.73728ep-48f,
     0.0f, 0.0f, 0x1.da61f6p-88f, 0x1.ea52c2p-58f, 0.0f, 0x1.461206p-2f,
     0x1.9bb74p-27f, 0x1.a10c94p-88f, 0.0f, 0x1.7fc42ap-100f, 0.0f, 0x1.801426p-79f,
     0.0f, 0x1.c5f924p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d372bcp-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.03406cp-76f, 0x1.a2f016p-58f, 0.0f, 0.0f, 0x1.655bap-110f,
     0x1.9f69ecp-19f, 0x1.0c42dep-35f, 0x1.b0206cp-93f, 0.0f, 0.0f, 0x1.8af318p-65f,
     0.0f, 0x1.2a4a88p-39f, 0x1.b87394p-108f, 0x1.971c1p-13f, 0.0f, 0.0f,
     0x1.e8bd58p-58f, 0x1.1358bcp-97f, 0x1.7f4ff8p-106f, 0.0f, 0.0f, 0.0f,
     0x1.85b0a8p-115f, 0x1.21322ap-73f, 0x1.8f3566p-32f, 0x1.514ae4p-15f, 0.0f,
     0x1.d35636p-81f, 0x1.43379p-33f, 0.0f, 0.0f, 0x1.45b6fap-49f, 0.0f,
     0x1.ced886p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54fe1p-49f, 0.0f, 0.0f,
     0x1.47e578p-62f, 0x1.483c3ep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.776ac2p-40f, 0.0f,
     0.0f, 0x1.83e496p-118f, 0.0f, 0x1.16f53cp-106f, 0.0f, 0x1p0f, 0.0f,
     0x1.2985aap-101f, 0x1.3b08p-108f, 0.0f, 0x1.cb8e5p-93f, 0.0f, 0.0f,
     0x1.8d05f8p-27f, 0x1.f9afe2p-70f, 0.0f, 0.0f, 0x1.f7932ap-64f, 0x1.64afc4p-99f,
     0.0f, 0x1.64b9e8p-82f, 0.0f, 0x1.0c8ccep-73f, 0x1.e85618p-84f, 0.0f,
     0x1.c12048p-118f, 0x1.05e99p-11f, 0.0f, 0.0f, 0x1.2e42b4p-68f, 0x1.e15ecp-118f,
     0.0f, 0x1.d3e4c8p-109f, 0.0f, 0x1.c99808p-46f, 0.0f, 0.0f, 0x1.1ee58ap-74f, 0.0f,
     0.0f, 0.0f, 0x1.cc5332p-74f, 0.0f, 0x1.c149dp-91f, 0x1.b34382p-54f,
     0x1.8b10b8p-119f, 0.0f, 0x1.8bcbfp-113f, 0x1.8b1fd8p-40f, 0.0f, 0x1.6e31b8p-100f,
     0x1.f86fa6p-61f, 0x1.b23c78p-111f, 0.0f, 0x1.ddeae4p-98f, 0x1.59cd3ap-57f, 0.0f,
     0x1.bce4fep-45f, 0.0f, 0.0f, 0.0f, 0x1.b0985cp-113f, 0.0f, 0x1.a9146cp-124f,
     0.0f, 0.0f, 0x1.63f79cp-1f, 0x1.3ef8d8p-118f, 0.0f, 0.0f, 0.0f, 0x1.9181cp-117f,
     0.0f, 0x1.a98dfep-39f, 0.0f, 0x1.6ed2fp-25f, 0x1.22c27ap-43f, 0x1.be7d34p-17f,
     0.0f, 0x1.b00484p-83f, 0x1.8efda8p-51f, 0x1.fcf6b8p-21f, 0.0f, 0x1.f262p-96f,
     0.0f, 0x1.4ca656p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.babb02p-73f, 0x1.d4df58p-96f,
     0.0f, 0.0f, 0x1.a9f7fcp-28f, 0x1.1f7836p-75f, 0x1.ee11p-83f, 0x1.ccd87p-27f,
     0.0f, 0x1.2b00aap-118f, 0x1.32cf12p-78f, 0x1.ef833cp-76f, 0x1.8704b8p-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47291cp-64f, 0x1.420ea8p-74f, 0.0f, 0x1.3aaed8p-8f,
     0x1.f7df78p-88f, 0x1.f9c828p-68f, 0.0f, 0x1.6834d4p-56f, 0.0f, 0x1.d58d06p-79f,
     0.0f, 0x1.a329c2p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bb3e4p-9f,
     0.0f, 0x1.a7e32ap-84f, 0.0f, 0.0f, 0x1.90f422p-95f, 0.0f, 0x1.b42d6ep-101f, 0.0f,
     0x1.a457fp-70f, 0.0f, 0x1.cc645ep-46f, 0x1.7c0a34p-99f, 0x1.b51b1cp-37f,
     0x1.7c332ep-35f, 0.0f, 0.0f, 0x1.89c144p-49f, 0x1.e343e4p-1f, 0.0f,
     0x1.b530bap-34f, 0.0f, 0x1.36d89cp-122f, 0.0f, 0x1.70ccf6p-102f, 0x1.6cd32cp-4f,
     0x1.49aebep-20f, 0.0f, 0.0f, 0x1.f4d7f8p-86f, 0x1.6e8d4ap-113f, 0x1.334662p-2f,
     0x1.a84af2p-125f, 0x1.02366ap-68f, 0.0f, 0.0f, 0x1.512116p-87f, 0x1.45cdaap-39f,
     0x1.90be12p-70f, 0.0f, 0x1.fca986p-58f, 0x1.d58f7p-17f, 0.0f, 0x1.4c27a6p-82f,
     0.0f, 0x1.769f22p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67dc14p-91f,
     0x1.34f256p-104f, 0x1.d7e964p-96f, 0.0f, 0x1.46568ep-105f, 0x1.ef4002p-88f,
     0x1.d71134p-41f, 0x1.89ceap-79f, 0.0f, 0.0f, 0.0f, 0x1.c8c316p-46f, 0.0f, 0.0f,
     0.0f, 0x1.374858p-81f, 0x1.1288aap-110f, 0.0f, 0x1.6b3724p-45f, 0x1.6615cap-77f,
     0x1.cc077ap-89f, 0x1.c7d7c4p-37f, 0x1.a5aa0ep-31f, 0.0f, 0.0f, 0x1.29e802p-35f,
     0x1.4d5296p-42f, 0.0f, 0x1.2ae5c8p-86f, 0.0f, 0x1.4af7p-54f, 0x1.6bb2b2p-33f,
     0x1.c94bf6p-2f, 0.0f, 0.0f, 0x1.9e412p-15f, 0.0f, 0x1.e84446p-14f, 0.0f, 0.0f,
     0.0f, 0x1.07488ep-84f, 0x1.3650aap-47f, 0x1.cfaefep-120f, 0.0f, 0x1.95b98ap-14f,
     0x1.32215ep-80f, 0x1.be7052p-39f, 0.0f, 0.0f, 0x1.715c2ep-21f, 0x1.4d715ep-70f,
     0.0f, 0x1.2a397cp-62f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.2deeccp-16f, 0x1.a16b82p-111f, 0x1.a4c6cep-34f, 0.0f, 0x1.17dfd6p-40f,
     0x1.d5cfdap-102f, 0.0f, 0x1.347d78p-114f, 0.0f, 0x1.b41c4ep-81f, 0.0f, 0.0f,
     0x1.1608e4p-49f, 0x1.389526p-102f, 0.0f, 0x1.877344p-99f, 0x1.47d98cp-107f,
     0x1.d43d8cp-61f, 0.0f, 0.0f, 0.0f, 0x1.d1fb92p-94f, 0x1.71d878p-24f, 0.0f,
     0x1.c4ef5ep-79f, 0x1.f1e836p-23f, 0.0f, 0x1.0b6342p-115f, 0.0f, 0x1.63464ap-45f,
     0x1.47062ep-79f, 0.0f, 0x1.765b72p-61f, 0x1.264b52p-92f, 0.0f, 0x1.77f8f6p-35f,
     0x1.f2ff0cp-53f, 0x1.a09262p-84f, 0.0f, 0x1.21e0ccp-25f, 0.0f, 0.0f,
     0x1.909834p-10f, 0x1.6fa4fp-6f, 0x1.e40b4ep-20f, 0x1.019b3p-20f, 0x1.63477ap-18f,
     0.0f, 0x1.4fdf44p-7f, 0x1.ea317ap-9f, 0x1.a25b14p-125f, 0x1.ae841ep-13f,
     0x1.53d278p-45f, 0x1.574536p-25f, 0x1.e6a15ap-41f, 0x1.9e0dfcp-24f,
     0x1.eba10cp-42f, 0x1.1648aap-109f, 0.0f, 0x1.899864p-95f, 0.0f, 0.0f,
     0x1.18e4b4p-57f, 0.0f, 0x1.752e2ep-58f, 0.0f, 0.0f, 0x1.d28c68p-82f, 0.0f, 0.0f,
     0x1.0886eap-42f, 0x1.56c816p-115f, 0.0f, 0.0f, 0x1.ecd5b8p-118f, 0x1.fb216ap-53f,
     0.0f, 0x1.6fd7fep-66f, 0x1.cb608ap-70f, 0x1.ea7f0ap-23f, 0.0f, 0.0f, 0.0f,
     0x1.56fca4p-26f, 0.0f, 0x1.adab72p-104f, 0x1.d1f762p-87f, 0.0f, 0.0f,
     0x1.ef61e2p-43f, 0x1.5915fap-124f, 0x1.5d709p-91f, 0.0f, 0.0f, 0x1.51f388p-119f,
     0x1.6976bp-32f, 0x1.38639cp-75f, 0.0f, 0x1.308eep-118f, 0.0f, 0.0f,
     0x1.67979ep-54f, 0.0f, 0x1.16153ep-124f, 0x1.ca831ap-7f, 0.0f, 0x1.50ec78p-103f,
     0x1.22beap-94f, 0.0f, 0x1.dc0d7p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86804cp-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4f4cep-109f, 0x1.c8fb8cp-110f,
     0x1.c0f7bap-44f, 0.0f, 0.0f, 0x1.35bcd2p-66f, 0.0f, 0x1.d18856p-20f,
     0x1.3615ap-85f, 0x1.96a68p-105f, 0.0f, 0x1.4adf9p-91f, 0x1.b49faep-39f,
     0x1.8e698cp-84f, 0x1.37cffcp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f8256p-65f,
     0x1.86264p-76f, 0x1.4fa1fcp-34f, 0.0f, 0x1.556d7cp-19f, 0x1.8ee88cp-121f,
     0x1.623f48p-36f, 0x1.542c78p-30f, 0x1.10b81ep-43f, 0x1.721aep-48f,
     0x1.5e3b5cp-67f, 0.0f, 0x1.6cfc7cp-121f, 0.0f, 0x1.d4850ap-18f, 0x1.8eae9p-23f,
     0.0f, 0x1.2e9f6ap-20f, 0.0f, 0x1.7c8f5ap-94f, 0.0f, 0.0f, 0.0f, 0x1.c06ff4p-16f,
     0x1.b9688ep-59f, 0x1.d412c2p-88f, 0x1.68be62p-68f, 0x1.0e5ebcp-119f,
     0x1.ee0532p-117f, 0.0f, 0x1.859e08p-75f, 0.0f, 0.0f, 0x1.1dd4f6p-37f,
     0x1.d0fcb4p-36f, 0.0f, 0x1.77eef6p-8f, 0x1.7f1caep-7f, 0x1.fa15bap-78f, 0.0f,
     0.0f, 0x1.6486f4p-126f, 0x1.cc15d2p-113f, 0x1.36264ep-25f, 0x1.0394fep-54f,
     0x1.4df9ap-73f, 0x1.8ebf5ep-29f, 0.0f, 0x1.3083acp-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b3e2ap-1f, 0x1.79de4ep-110f, 0x1.1ef66ap-20f, 0x1.50452p-71f,
     0x1.285fa8p-87f, 0x1.aedb86p-41f, 0.0f, 0.0f, 0.0f, 0x1.9ff3e4p-7f,
     0x1.688346p-50f, 0x1.266c16p-93f, 0x1.86ac2ep-102f, 0x1.3af036p-51f,
     0x1.715c1ep-16f, 0.0f, 0x1.7ed042p-35f, 0.0f, 0.0f, 0x1.f8519p-57f,
     0x1.58c68cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1483a8p-82f, 0x1.be0fe4p-96f,
     0.0f, 0.0f, 0x1.899352p-36f, 0x1.b7c18cp-31f, 0x1.a84134p-104f, 0x1.4d9f72p-8f,
     0.0f, 0x1.d0c55ap-13f, 0.0f, 0x1.7dc4a6p-104f, 0.0f, 0x1.e9afb8p-17f, 0.0f, 0.0f,
     0.0f, 0x1.0de4ap-86f, 0x1.4e290ap-28f, 0.0f, 0x1.75c6dep-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.248f98p-64f, 0x1.35e13ep-48f, 0x1.d9c766p-122f,
     0x1.4648e6p-70f, 0.0f, 0.0f, 0x1.566818p-98f, 0.0f, 0x1.f0a446p-10f,
     0x1.038cf2p-35f, 0x1.fac1f6p-10f, 0x1.aee48ep-31f, 0x1.a4bd02p-62f, 0.0f, 0.0f,
     0x1.ec2a7cp-121f, 0x1.8c0cbep-78f, 0.0f, 0x1.4cfaep-70f, 0x1.9dfb9p-56f, 0.0f,
     0x1.455c34p-43f, 0.0f, 0.0f, 0x1.b4eb2ep-19f, 0x1.1b0e4cp-29f, 0.0f,
     0x1.4d554p-91f, 0x1.3bb49p-116f, 0x1.b021c2p-103f, 0.0f, 0x1.b2a556p-66f, 0.0f,
     0x1.d4833p-61f, 0x1.e05ccp-80f, 0x1.76b218p-4f, 0.0f, 0.0f, 0x1.a870bp-71f,
     0x1.4bcc98p-117f, 0.0f, 0x1.c5ee04p-106f, 0x1.aebba4p-101f, 0.0f,
     0x1.6ffad2p-86f, 0.0f, 0.0f, 0.0f, 0x1.3bf596p-48f, 0.0f, 0x1.befe9cp-8f,
     0x1.d9063ep-5f, 0x1.3ec086p-27f, 0x1.ddef9ep-104f, 0x1.92e7dap-91f, 0.0f,
     0x1.3c08dcp-126f, 0.0f, 0.0f, 0.0f, 0x1.7df1d4p-50f, 0x1.cd4c52p-10f, 0.0f,
     0x1.3543fep-119f, 0.0f, 0.0f, 0x1.ba088ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6189ep-120f, 0.0f, 0.0f, 0x1.8e63fap-59f, 0.0f, 0.0f, 0.0f,
     0x1.06fe96p-105f, 0.0f, 0x1.e4cd66p-16f, 0x1.9ccd8ep-46f, 0.0f, 0x1.f5c9fcp-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d86154p-53f, 0.0f, 0x1.a80cbep-30f, 0.0f,
     0x1.b0ff3p-56f, 0.0f, 0.0f, 0x1.6013c8p-64f, 0x1.14cc88p-66f, 0.0f,
     0x1.f64ec8p-80f, 0.0f, 0x1.a0a5dp-68f, 0x1.d1f122p-14f, 0x1.82f66cp-105f,
     0x1.c8195p-44f, 0.0f, 0.0f, 0x1.7bc39ep-64f, 0x1.174986p-83f, 0.0f,
     0x1.15ba0ep-126f, 0x1.0b045ap-35f, 0.0f, 0.0f, 0.0f, 0x1.f10a14p-14f,
     0x1.22ffdep-24f, 0.0f, 0.0f, 0.0f, 0x1.343ffap-79f, 0.0f, 0.0f, 0.0f,
     0x1.597252p-84f, 0x1.3f694ep-56f, 0.0f, 0x1.5401a8p-38f, 0x1.42590cp-1f, 0.0f,
     0.0f, 0x1.e3ddd2p-52f, 0x1.d0faf4p-41f, 0x1.eaf834p-94f, 0x1.f82a04p-122f, 0.0f,
     0x1.b3f7ccp-125f, 0x1.c89eaap-14f, 0x1.cde1fap-13f, 0x1.1a85c8p-53f, 0.0f,
     0x1.6791a2p-65f, 0x1.9d7c58p-80f, 0.0f, 0x1.3640a8p-15f, 0x1.f817f8p-108f, 0.0f,
     0.0f, 0.0f, 0x1.1f02d2p-28f, 0x1.35e5fep-45f, 0.0f, 0x1.7d0c9p-103f,
     0x1.4f805cp-48f, 0x1.e1d212p-110f, 0x1.bed8bep-72f, 0.0f, 0.0f, 0x1.9ede4cp-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.284798p-86f, 0.0f, 0x1.386a8p-58f, 0.0f,
     0x1.04aa5p-58f, 0.0f, 0x1.5adaecp-43f, 0.0f, 0x1.64b2dap-89f, 0.0f, 0.0f,
     0x1.26e9f4p-11f, 0x1.e54732p-39f, 0x1.b9999cp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad13bcp-74f, 0.0f, 0x1.1e2ebep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48b7fp-5f,
     0.0f, 0.0f, 0.0f, 0x1.67cf5ep-4f, 0x1.0cc7e2p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.662916p-105f, 0x1.a695f2p-20f, 0x1.8e0f84p-14f, 0x1.084d48p-117f, 0.0f, 0.0f,
     0.0f, 0x1.bfeb0cp-59f, 0x1.60a07ep-37f, 0.0f, 0x1.522e42p-87f, 0.0f,
     0x1.98bbf8p-91f, 0x1.d10942p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e82d2p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.80120ap-3f, 0.0f, 0.0f, 0x1.6e739cp-126f, 0x1.7122d4p-86f,
     0x1.1c6954p-104f, 0.0f, 0x1.414a82p-83f, 0x1.9c26e6p-46f, 0.0f, 0x1.4e1ce4p-99f,
     0x1.658f3ap-8f, 0x1.ab5f6ap-14f, 0x1.091f0ap-88f, 0x1.fd3c9cp-88f,
     0x1.5bcb9ap-91f, 0x1.d6d62ep-110f, 0x1.9f7856p-25f, 0.0f, 0.0f, 0.0f,
     0x1.e22ccep-102f, 0x1.fccfcp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fb6b4p-17f, 0.0f,
     0x1.d689e2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f9104p-101f, 0x1.7a87d2p-39f,
     0x1.5b8b3ep-23f, 0x1.41cfaap-19f, 0.0f, 0x1.172a9p-4f, 0x1.45ccacp-119f,
     0x1.b21f0ap-120f, 0x1.a7d822p-56f, 0x1.5c6426p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77b1p-110f, 0.0f, 0x1.7c6a78p-61f, 0x1.7c6f86p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5bb8e2p-105f, 0x1.e0b078p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4508cp-19f,
     0.0f, 0x1.e5e8c6p-75f, 0x1.df7d3p-103f, 0x1.be11ccp-65f, 0.0f, 0.0f,
     0x1.3934b8p-28f, 0x1.c25126p-116f, 0.0f, 0.0f, 0x1.8fb65ap-101f, 0.0f,
     0x1.b32e34p-57f, 0.0f, 0.0f, 0x1.5a6f7p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ceefdep-53f, 0x1.338f68p-55f, 0x1.a43e68p-123f, 0x1.703adep-94f,
     0x1.78decep-104f, 0x1.66986p-60f, 0.0f, 0x1.f8a592p-86f, 0.0f, 0x1.631742p-42f,
     0.0f, 0.0f, 0x1.cfa1cep-57f, 0x1.ed8c9p-88f, 0x1.7d2282p-78f, 0x1.153ed2p-20f,
     0.0f, 0x1.89331ap-80f, 0.0f, 0x1.93a426p-93f, 0x1.fa618cp-75f, 0x1.e1c334p-6f,
     0.0f, 0x1.780eep-34f, 0.0f, 0.0f, 0x1.af401cp-1f, 0.0f, 0x1.892472p-11f, 0.0f,
     0x1.57917ep-73f, 0x1.d6d15cp-6f, 0.0f, 0.0f, 0.0f, 0x1.6ecf0ap-88f, 0.0f, 0.0f,
     0x1.c3a8fcp-81f, 0x1.16ce9p-34f, 0x1.26ff94p-123f, 0x1.6c7172p-16f,
     0x1.352aa2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22be3cp-63f, 0x1.38adf8p-118f,
     0x1.0f2652p-67f, 0x1.b5c156p-3f, 0x1.7f3ffp-23f, 0.0f, 0x1.6a55cp-108f,
     0x1.3c5b32p-41f, 0x1.27820ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a4638p-74f,
     0x1.5d9e6cp-6f, 0.0f, 0.0f, 0x1.90e66cp-36f, 0.0f, 0.0f, 0.0f, 0x1.f8320ap-83f,
     0.0f, 0.0f, 0x1.94045ep-12f, 0x1.bbce7ap-56f, 0x1.48323ep-5f, 0.0f,
     0x1.7badf4p-73f, 0x1.d24586p-78f, 0x1.e2fde4p-114f, 0.0f, 0x1.dbfdc8p-81f,
     0x1.df03cp-125f, 0x1.c27a18p-10f, 0x1.92cbc2p-34f, 0.0f, 0x1.908112p-34f, 0.0f,
     0.0f, 0x1.ba2ecap-18f, 0x1.bc16bep-49f, 0x1.b06802p-12f, 0.0f, 0x1.aff10cp-47f,
     0x1.e587f6p-37f, 0.0f, 0.0f, 0x1.c575c4p-105f, 0x1.d688c4p-80f, 0.0f, 0.0f,
     0x1.9db244p-42f, 0x1.4e9c04p-33f, 0x1.8ddc68p-61f, 0.0f, 0.0f, 0.0f,
     0x1.957146p-41f, 0x1.9930a4p-71f, 0.0f, 0x1.98e60cp-123f, 0x1.126c8p-3f, 0.0f,
     0x1.6c6a4ep-16f, 0.0f, 0x1.80db16p-86f, 0x1.8e1a0cp-78f, 0.0f, 0x1.cc68fep-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.494cc8p-73f, 0x1.2d1d1cp-30f, 0x1.a06a2ep-72f,
     0x1.aca664p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e9456p-53f, 0.0f, 0x1.0d63b2p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.642fccp-18f, 0.0f,
     0x1.c9425ap-5f, 0.0f, 0.0f, 0x1.bbd64cp-104f, 0x1.5c5e92p-12f, 0x1.6e4036p-78f,
     0x1.b56444p-57f, 0x1.7a05b2p-108f, 0.0f, 0x1.6c2a6cp-22f, 0.0f, 0x1.09fd1ap-33f,
     0x1.dd2712p-109f, 0x1.70b6f8p-1f, 0x1.90b884p-117f, 0x1.c90f6ep-19f,
     0x1.b94768p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d30bf8p-58f, 0.0f, 0x1.e42822p-12f, 0x1.166a4p-10f, 0x1.a61a9ap-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a8a36p-44f, 0.0f, 0.0f, 0x1.1bac02p-110f, 0.0f,
     0x1.774186p-94f, 0.0f, 0.0f, 0x1.e9a25p-88f, 0.0f, 0.0f, 0x1.8f60fap-28f, 0.0f,
     0.0f, 0x1.ae7f7p-14f, 0.0f, 0.0f, 0.0f, 0x1.1733p-47f, 0x1.0c3b3ep-10f, 0.0f,
     0x1.ca218ap-80f, 0x1.2f1796p-47f, 0x1.d4f75ap-28f, 0.0f, 0x1.5fae34p-33f,
     0x1.99480cp-20f, 0x1.e653fcp-91f, 0.0f, 0x1.427094p-69f, 0.0f, 0x1.0146fcp-7f,
     0x1.1ae142p-88f, 0x1.8b9076p-30f, 0.0f, 0x1.650152p-56f, 0x1.83b0c2p-32f,
     0x1.ca1512p-47f, 0.0f, 0x1.1f9234p-8f, 0.0f, 0.0f, 0.0f, 0x1.500746p-126f, 0.0f,
     0x1.241c8ep-3f, 0x1.b7ad06p-41f, 0.0f, 0.0f, 0x1.230a0ep-33f, 0.0f,
     0x1.8d79b8p-81f, 0x1.084c82p-108f, 0x1.5a6da4p-14f, 0.0f, 0x1.33ec04p-28f, 0.0f,
     0x1.4c1184p-72f, 0.0f, 0x1.2e0fc4p-30f, 0x1.0fa6fp-94f, 0x1.1d4554p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5f9b2p-22f, 0.0f, 0.0f, 0x1.e39744p-102f, 0.0f,
     0x1.50fe68p-21f, 0x1.a03d24p-33f, 0x1.3c76fap-100f, 0x1.a3ca26p-31f, 0.0f,
     0x1.54ca4p-84f, 0x1.1d6e92p-87f, 0x1.907ba2p-7f, 0.0f, 0x1.8ed546p-74f,
     0x1.9c1a44p-122f, 0.0f, 0.0f, 0x1.c5e3bcp-4f, 0x1.83d286p-19f, 0x1.26eda4p-101f,
     0.0f, 0.0f, 0.0f, 0x1.f9699ep-45f, 0.0f, 0x1.df9832p-41f, 0.0f, 0.0f, 0x1p0f,
     0x1.4379b6p-120f, 0.0f, 0x1.6dceeap-57f, 0x1.00cb2ap-13f, 0.0f, 0.0f,
     0x1.1d570ep-12f, 0x1.ab2aa2p-5f, 0x1.2c6496p-18f, 0.0f, 0x1.62341p-115f, 0.0f,
     0x1.b5f14ep-16f, 0x1.4f6f6cp-72f, 0.0f, 0x1.4f7056p-114f, 0.0f, 0.0f,
     0x1.cc6056p-123f, 0.0f, 0x1.f43c9p-102f, 0x1.15a3acp-31f, 0.0f, 0.0f, 0.0f,
     0x1.bde5a6p-54f, 0.0f, 0x1.cc7abp-45f, 0x1.2ca108p-107f, 0x1.1390ap-26f, 0.0f,
     0.0f, 0x1.b030ecp-25f, 0.0f, 0x1.f212eap-75f, 0.0f, 0x1.f8d32p-106f, 0.0f, 0.0f,
     0.0f, 0x1.24d168p-19f, 0x1.08ab4ap-30f, 0.0f, 0x1.501ceep-104f, 0.0f, 0.0f,
     0x1.a72bf6p-71f, 0x1.e360a6p-56f, 0.0f, 0x1.0a72d2p-124f, 0x1.b7432ap-100f,
     0x1.d96f9ap-56f, 0x1.97165ap-122f, 0x1.fa6b26p-122f, 0x1.6f698ep-103f, 0.0f,
     0.0f, 0x1.a50512p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78db3ep-12f, 0x1.bee22ep-109f,
     0.0f, 0.0f, 0.0f, 0x1.c5a8cep-123f, 0x1.932f9ap-105f, 0.0f, 0x1.eea276p-95f,
     0.0f, 0x1.33e4a2p-63f, 0x1.a6dc38p-89f, 0.0f, 0x1.4c53f4p-75f, 0x1.258cecp-14f,
     0x1.6b1e44p-56f, 0x1.51ee48p-9f, 0.0f, 0.0f, 0x1.43dfcep-28f, 0.0f,
     0x1.b4ed56p-9f, 0.0f, 0x1.d0a88ap-114f, 0.0f, 0x1.39c756p-114f, 0.0f,
     0x1.72715p-123f, 0x1.7fd5ccp-93f, 0x1.b2113ep-57f, 0.0f, 0.0f, 0.0f,
     0x1.0032eep-32f, 0x1.a0ecf8p-34f, 0.0f, 0x1.eb5682p-31f, 0x1.4b66cep-65f, 0.0f,
     0x1.b30838p-13f, 0.0f, 0x1.e6d5dep-102f, 0.0f, 0x1.884ae4p-31f, 0.0f,
     0x1.383184p-41f, 0.0f, 0x1.6d454ap-99f, 0.0f, 0.0f, 0x1.922a5p-101f,
     0x1.6c64a6p-116f, 0x1.0827bap-119f, 0.0f, 0x1.352362p-118f, 0x1.0cfb6ep-85f,
     0x1.6c15ccp-34f, 0.0f, 0.0f, 0.0f, 0x1.ac43c2p-120f, 0x1.95348ap-54f, 0.0f,
     0x1.8da37cp-84f, 0.0f, 0x1.bf821ap-54f, 0.0f, 0.0f, 0.0f, 0x1.4606eep-39f, 0.0f,
     0.0f, 0x1.e52ef4p-18f, 0.0f, 0x1.9ca2ep-105f, 0x1.4a774cp-28f, 0.0f, 0.0f,
     0x1.782b5ep-86f, 0x1.4d9b3ep-41f, 0x1.710ecep-18f, 0.0f, 0.0f, 0.0f,
     0x1.8e4152p-58f, 0x1.acf64ep-86f, 0x1.87458cp-59f, 0x1.2e7f7p-16f, 0.0f,
     0x1.8f2486p-93f, 0x1.29e054p-63f, 0.0f, 0x1.827bfap-85f, 0.0f, 0.0f, 0.0f,
     0x1.efb79cp-121f, 0x1.303256p-67f, 0.0f, 0.0f, 0x1.2fa0aap-79f, 0.0f, 0.0f,
     0x1.b97cfap-24f, 0x1.360e3ap-119f, 0.0f, 0x1.783488p-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.312bdp-70f
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
            tmp2 = Sleef_finz_fdimf4_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_fdimf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fdimf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
