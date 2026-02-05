/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf4_u35avx2128.c --function \
 *     Sleef_finz_asinf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.59848cp-7f, 0.0f, 0x1.11230cp-82f, 0x1.8cb294p-107f, 0.0f,
     0x1.cdb1c2p-79f, 0.0f, 0x1.ce5462p-44f, 0x1.3cc8bp-79f, 0.0f, 0.0f, 0.0f,
     0x1.7c59eap-107f, 0x1.9173e4p-5f, 0x1.50ec7cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.75825cp-77f, 0x1.c0ee2ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.67bec4p-117f, 0.0f, 0.0f, 0x1.178eb8p-94f, 0x1.318fc6p-49f, 0.0f,
     0x1.083a48p-122f, 0.0f, 0.0f, 0x1.2e67d4p-6f, 0.0f, 0.0f, 0.0f, 0x1.50dd5ep-11f,
     0.0f, 0x1.07a634p-126f, 0x1.e33892p-23f, 0x1.8394c8p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88afb8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a1beap-79f, 0.0f,
     0x1.0dd08p-16f, 0x1.bd0476p-50f, 0.0f, 0x1.0518a4p-26f, 0.0f, 0x1.bc3614p-87f,
     0x1.9a1022p-70f, 0x1.85acaep-75f, 0.0f, 0x1.c2b30cp-110f, 0.0f, 0x1.5ce044p-59f,
     0x1.43350ap-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.887f7ep-56f, 0x1.eace5ap-19f,
     0x1.b44e7ap-40f, 0x1.a10024p-62f, 0x1.82581ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.d4a244p-111f, 0.0f, 0.0f, 0x1.a26928p-108f, 0.0f, 0.0f, 0x1.17ff3ap-68f,
     0.0f, 0x1.7be002p-120f, 0x1.6e5adap-125f, 0.0f, 0x1.ccf352p-84f, 0x1.b5674cp-19f,
     0.0f, 0x1.73ee68p-83f, 0.0f, 0.0f, 0.0f, 0x1.aa5a64p-11f, 0.0f, 0.0f,
     0x1.6021bcp-110f, 0x1.9719f4p-75f, 0x1.b5fc8cp-49f, 0x1.b90f9ap-7f,
     0x1.b1de18p-62f, 0.0f, 0x1.96d6b6p-57f, 0.0f, 0.0f, 0x1.f4d3bep-9f,
     0x1.2abe7ep-2f, 0.0f, 0x1.3e162cp-26f, 0.0f, 0.0f, 0x1.6c6b1ap-47f, 0.0f,
     0x1.e7998ap-35f, 0x1.c97364p-92f, 0x1.91fc82p-98f, 0x1.c90e7ap-117f,
     0x1.6ce62ap-37f, 0x1.3b3d4cp-88f, 0.0f, 0x1.e519b2p-20f, 0x1.c70b6ep-61f, 0.0f,
     0.0f, 0x1.7fb3d8p-20f, 0x1.a27a74p-32f, 0.0f, 0x1.a1ea1ap-83f, 0.0f,
     0x1.e92eb2p-85f, 0x1.b98736p-87f, 0.0f, 0.0f, 0.0f, 0x1.7fad6cp-122f,
     0x1.c8272ap-33f, 0.0f, 0x1.f42ad8p-77f, 0.0f, 0x1.3007fap-4f, 0.0f, 0.0f, 0.0f,
     0x1.a3f096p-105f, 0x1.5fa52ap-62f, 0.0f, 0x1.84d0ap-42f, 0.0f, 0.0f, 0.0f,
     0x1.3a1be4p-44f, 0x1.f7e5b4p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3c506p-113f, 0.0f, 0x1.9e101p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d753ep-70f, 0x1.671592p-26f, 0x1.251e0ap-100f, 0x1.123944p-6f, 0.0f,
     0x1.44bbc4p-118f, 0x1.8dd49ep-35f, 0.0f, 0.0f, 0x1.71f07p-38f, 0.0f,
     0x1.6f22ccp-43f, 0.0f, 0x1.c42f02p-62f, 0.0f, 0.0f, 0x1.54f68p-51f, 0.0f, 0.0f,
     0.0f, 0x1.67b136p-112f, 0x1.30545cp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80ad8p-99f,
     0x1.9ad51cp-83f, 0x1.48d3f2p-123f, 0.0f, 0x1.d2be6cp-85f, 0x1.407e18p-78f,
     0x1.f1a34ap-39f, 0x1.80feaap-7f, 0x1.0a7ab2p-82f, 0.0f, 0.0f, 0x1.6a27a8p-58f,
     0x1.a6c652p-83f, 0x1.96455ap-120f, 0x1p0f, 0.0f, 0x1.abddd8p-123f,
     0x1.f9846cp-104f, 0x1.762a5p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f022cp-2f,
     0x1.79d768p-54f, 0.0f, 0.0f, 0x1.6f54c6p-107f, 0x1.c38eap-28f, 0.0f, 0.0f,
     0x1.5cfeacp-93f, 0x1.8df8c2p-25f, 0.0f, 0x1.1278fep-66f, 0x1.be07fap-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2eb564p-28f, 0.0f, 0.0f, 0.0f,
     0x1.af4ceep-20f, 0.0f, 0x1.8395ecp-14f, 0x1.2d6eacp-15f, 0.0f, 0.0f,
     0x1.1cd43p-41f, 0.0f, 0x1.1abb8p-102f, 0.0f, 0x1.f163d6p-9f, 0x1.604deap-21f,
     0x1.85b50ap-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0497dap-25f, 0x1.4254c6p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a98bccp-61f, 0.0f, 0x1.b29adcp-83f, 0.0f, 0.0f, 0.0f,
     0x1.d4839cp-47f, 0.0f, 0x1.77033ep-2f, 0x1.f34c58p-98f, 0x1.be0118p-43f,
     0x1.d7d8eep-120f, 0.0f, 0.0f, 0.0f, 0x1.416a46p-21f, 0x1.b568b4p-40f, 0.0f, 0.0f,
     0x1.50375p-7f, 0x1.0e8118p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.979a96p-22f,
     0x1.36ae0cp-112f, 0x1.4f110ep-54f, 0.0f, 0x1.2b4fccp-25f, 0x1.13ab7p-41f,
     0x1.38066ap-42f, 0.0f, 0x1.dc66a6p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e7f3ep-65f, 0x1.6843dep-75f, 0.0f, 0.0f, 0x1.91f3aep-40f, 0x1.50ccdcp-79f,
     0x1.23cd94p-32f, 0x1.5f2f7cp-46f, 0.0f, 0.0f, 0x1.26e5fep-64f, 0.0f,
     0x1.3ea1c6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f1a74p-13f,
     0x1.b40c58p-87f, 0.0f, 0x1.4234bp-30f, 0.0f, 0.0f, 0.0f, 0x1.7f062ep-85f,
     0x1.3d6b3ep-3f, 0.0f, 0x1.319fp-3f, 0.0f, 0x1.c58f6ep-96f, 0x1.b84c84p-37f, 0.0f,
     0.0f, 0x1.3cee2p-118f, 0.0f, 0.0f, 0.0f, 0x1.42f8b4p-43f, 0.0f, 0x1.3d9634p-106f,
     0.0f, 0x1.71cc1p-3f, 0x1.9f604ep-87f, 0x1.72e138p-16f, 0x1.65aad4p-78f,
     0x1.85a58p-61f, 0.0f, 0x1.c96828p-95f, 0.0f, 0x1.7afc5ep-114f, 0x1.82e03p-30f,
     0x1.f1f1eap-6f, 0x1.7ca15ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.123e04p-74f, 0x1.d6c238p-108f, 0x1.56e6ap-7f, 0.0f, 0x1.8781acp-25f,
     0x1.ced3fp-29f, 0.0f, 0.0f, 0x1.98224ep-114f, 0.0f, 0.0f, 0.0f, 0x1.5921e4p-115f,
     0x1.590c5cp-12f, 0.0f, 0.0f, 0.0f, 0x1.63c378p-35f, 0.0f, 0.0f, 0x1.748784p-34f,
     0x1.5ac34ep-17f, 0x1.862638p-39f, 0.0f, 0.0f, 0x1.6f58ap-125f, 0.0f,
     0x1.839b58p-13f, 0x1.39f946p-45f, 0.0f, 0.0f, 0x1.c5ec0ap-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93c06p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4f4b4ep-87f, 0x1.280062p-6f, 0.0f, 0x1.26195cp-125f, 0.0f,
     0x1.8f41p-49f, 0.0f, 0.0f, 0x1.50da86p-108f, 0.0f, 0.0f, 0x1.69c6b2p-87f, 0.0f,
     0x1.120ecep-69f, 0x1.8fa6c8p-56f, 0x1.5a1dfp-59f, 0x1.5e8dep-34f,
     0x1.645812p-35f, 0.0f, 0.0f, 0x1.b4893ep-115f, 0x1.98a7fep-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bff30ep-80f, 0.0f, 0x1.bdfcc6p-56f, 0x1.51d894p-82f,
     0x1.c9ca4cp-102f, 0.0f, 0x1.633748p-71f, 0.0f, 0.0f, 0.0f, 0x1.135956p-35f,
     0x1.5ae84ep-65f, 0x1.49779ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.523f92p-11f, 0x1.4198d2p-70f, 0.0f, 0x1.683d6p-29f, 0x1.5bb50cp-95f, 0.0f,
     0x1.56db2ep-124f, 0.0f, 0x1.5d5df6p-16f, 0x1.a6cb46p-116f, 0x1.fdddbap-84f, 0.0f,
     0.0f, 0x1.e6a624p-94f, 0.0f, 0.0f, 0x1.789ac6p-11f, 0.0f, 0.0f, 0x1.dd80e4p-20f,
     0.0f, 0x1.ff8eccp-39f, 0.0f, 0x1.d775e4p-52f, 0x1.eb0cccp-26f, 0x1.a7c2bcp-31f,
     0.0f, 0.0f, 0x1.cd5c1ep-17f, 0x1.c958e2p-31f, 0x1.0f74ep-45f, 0.0f,
     0x1.08949ap-78f, 0x1.82e94p-115f, 0x1.49137ep-4f, 0.0f, 0.0f, 0x1.2641eep-119f,
     0.0f, 0x1.c785dap-27f, 0.0f, 0.0f, 0.0f, 0x1.d60db2p-69f, 0.0f, 0.0f,
     0x1.cc7512p-85f, 0.0f, 0.0f, 0x1.52f03ap-103f, 0x1.913becp-120f,
     0x1.08d198p-100f, 0x1.f88ca4p-53f, 0x1.1db06cp-63f, 0.0f, 0.0f, 0x1.6a9cfep-72f,
     0.0f, 0.0f, 0.0f, 0x1.7fcad6p-24f, 0.0f, 0.0f, 0x1.e095bp-36f, 0.0f,
     0x1.634382p-19f, 0x1.7ae22ep-29f, 0.0f, 0.0f, 0x1.9ce77ap-12f, 0.0f,
     0x1.23bff4p-9f, 0.0f, 0.0f, 0x1.9f4d32p-91f, 0x1.9264dep-66f, 0.0f, 0.0f,
     0x1.59c3dep-110f, 0x1.5d1e16p-103f, 0x1.31d21p-86f, 0.0f, 0x1.7360e8p-36f, 0.0f,
     0.0f, 0.0f, 0x1.bb1d68p-44f, 0.0f, 0.0f, 0.0f, 0x1.944428p-103f, 0.0f,
     0x1.cdf78ep-100f, 0.0f, 0.0f, 0x1.7087p-99f, 0.0f, 0.0f, 0.0f, 0x1.df7c9ep-31f,
     0.0f, 0x1.8df0a2p-63f, 0x1.87d42ap-73f, 0.0f, 0x1.909f16p-93f, 0x1.615464p-4f,
     0x1.6ffcd8p-123f, 0x1.88c62ap-96f, 0x1.114acap-78f, 0.0f, 0x1.3443bp-14f,
     0x1.6fb728p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02a104p-41f, 0x1.5be12p-38f,
     0.0f, 0x1.d3da1ep-102f, 0x1.b65642p-83f, 0.0f, 0x1.835016p-19f, 0x1.0a9772p-91f,
     0.0f, 0.0f, 0x1.256deep-18f, 0x1.6f2a7p-106f, 0x1.e0c962p-91f, 0.0f, 0.0f,
     0x1.6613d6p-116f, 0x1.2ee6eep-48f, 0x1.b1b4eap-93f, 0x1.7fe132p-27f, 0.0f,
     0x1.117d96p-119f, 0x1.7187b4p-76f, 0x1.9b80fap-41f, 0.0f, 0.0f, 0x1.8d8804p-71f,
     0x1.575ce2p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5185fp-20f, 0x1.58e662p-34f,
     0x1.a7da02p-35f, 0.0f, 0.0f, 0.0f, 0x1.02937ep-112f, 0.0f, 0x1.ad04f6p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.166bf4p-118f, 0.0f, 0x1.29a50ep-46f, 0.0f, 0.0f,
     0.0f, 0x1.f18b2cp-38f, 0.0f, 0x1.df152ep-111f, 0.0f, 0x1.ad134p-105f,
     0x1.edc3f2p-83f, 0.0f, 0x1.9b16p-88f, 0.0f, 0x1.4ee06ap-113f, 0x1.f23562p-59f,
     0.0f, 0x1.7a23bp-116f, 0x1.f7eb56p-35f, 0.0f, 0x1.f517bcp-100f, 0.0f,
     0x1.7fe0ep-13f, 0x1.98b1bep-8f, 0.0f, 0.0f, 0x1.6367a6p-110f, 0x1.bb625p-69f,
     0x1.53261p-71f, 0.0f, 0x1.2a756ap-116f, 0x1.d67aeep-24f, 0.0f, 0x1.73299ep-74f,
     0x1.732ad8p-25f, 0x1.06c2a4p-4f, 0x1.02039ep-13f, 0x1.9b99p-121f, 0x1.afa186p-2f,
     0.0f, 0x1.9db4c8p-77f, 0.0f, 0x1.f7fce4p-36f, 0x1.52eb74p-97f, 0x1.496236p-53f,
     0.0f, 0x1.a9395ap-125f, 0.0f, 0x1.2faadap-102f, 0x1.b33aaep-83f, 0x1.16fa8ep-99f,
     0.0f, 0x1.22afd8p-52f, 0.0f, 0x1.eff15cp-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc5c82p-6f, 0x1.263122p-12f, 0.0f, 0x1.b04eb6p-42f, 0x1.5abcfp-105f, 0.0f,
     0x1.5828ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cae82p-46f, 0x1.a05a5ap-26f,
     0x1.a9af66p-69f, 0.0f, 0x1.00cb7p-8f, 0x1.43414ep-42f, 0.0f, 0.0f, 0.0f,
     0x1.96ec1cp-51f, 0.0f, 0.0f, 0.0f, 0x1.20ead2p-99f, 0.0f, 0x1.63cfe8p-51f,
     0x1.40273p-66f, 0x1.e7368ap-53f, 0.0f, 0x1.4ede04p-29f, 0x1.33379ep-50f,
     0x1.a9688ep-32f, 0x1.5c748ep-44f, 0.0f, 0x1.170f1p-47f, 0x1.d1126ap-93f, 0.0f,
     0x1.6eb2a6p-54f, 0.0f, 0x1.749d44p-29f, 0x1.5cc7dcp-15f, 0x1.618fa8p-29f, 0.0f,
     0x1.9abbecp-76f, 0x1.540a4ap-27f, 0x1.26ba5p-59f, 0.0f, 0x1.82dc8ap-41f,
     0x1.8da90cp-108f, 0.0f, 0.0f, 0x1.6e11b8p-97f, 0x1.7bbaeep-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.416ffep-99f, 0x1.1a80e2p-95f, 0.0f, 0x1.e25032p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1d0eap-112f, 0x1.ad83e4p-91f, 0x1.4fe3c8p-110f,
     0.0f, 0x1.d48c58p-83f, 0x1.36be1ep-3f, 0.0f, 0x1.2301c2p-78f, 0.0f,
     0x1.0d83fap-96f, 0x1.02899p-34f, 0.0f, 0x1.374116p-98f, 0x1.08f70cp-64f, 0.0f,
     0x1.cc51aep-39f, 0x1.57445p-112f, 0.0f, 0x1.b20b2cp-118f, 0x1.f25c5cp-59f, 0.0f,
     0x1.f82e9ep-121f, 0x1.f6ed82p-118f, 0.0f, 0x1.33517cp-58f, 0x1.f4157ap-114f,
     0x1.8eed2ap-8f, 0.0f, 0x1.9b3da4p-100f, 0.0f, 0x1.50cf28p-102f, 0x1.9a9c0ep-76f,
     0x1.9a8d4ap-15f, 0.0f, 0x1.80c1d6p-74f, 0.0f, 0.0f, 0x1.9896bcp-101f,
     0x1.d23fa2p-35f, 0x1.3b0742p-3f, 0x1.aa4d1ep-62f, 0x1.20c604p-37f,
     0x1.357914p-122f, 0.0f, 0.0f, 0x1.fcf5a8p-23f, 0x1.fad314p-18f, 0x1.55b9d2p-36f,
     0.0f, 0x1.4a040cp-108f, 0x1.a935cep-36f, 0.0f, 0x1.7bp-2f, 0.0f, 0.0f, 0.0f,
     0x1.da14d2p-118f, 0x1.93f9fep-24f, 0x1.1bb63p-60f, 0.0f, 0x1.a24c6p-9f,
     0x1.ab4a96p-102f, 0x1.7e7afap-116f, 0.0f, 0.0f, 0x1.7d0a4cp-86f, 0.0f,
     0x1.edbc5ap-16f, 0x1.f2d668p-126f, 0.0f, 0.0f, 0x1.7c6cc2p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.95b28cp-89f, 0x1.e90d88p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.daa81p-26f, 0.0f, 0x1.d07d04p-51f, 0.0f, 0.0f, 0x1.1e8b7ap-38f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c05d6p-103f, 0.0f, 0.0f, 0x1.28fc0ep-64f, 0.0f,
     0x1.9df672p-70f, 0x1.dc2606p-78f, 0x1.40532ap-58f, 0x1.adde28p-79f,
     0x1.3b6f54p-124f, 0x1.7a43b4p-42f, 0.0f, 0.0f, 0x1.072e6p-119f, 0x1.479bfp-1f,
     0x1p0f, 0x1.213908p-69f, 0.0f, 0x1p0f, 0x1.d53f8cp-26f, 0x1.dcbde2p-34f, 0.0f,
     0x1.4509a2p-96f, 0.0f, 0.0f, 0x1.f1bc7ap-38f, 0x1.bbf644p-100f, 0x1.bbc322p-37f,
     0.0f, 0.0f, 0x1.3d111p-19f, 0x1.c5216ap-69f, 0.0f, 0x1.9bb25cp-48f,
     0x1.fe7a82p-61f, 0x1.4b14a8p-106f, 0.0f, 0.0f, 0.0f, 0x1.8cfe3p-115f, 0.0f,
     0x1.f067c6p-107f, 0.0f, 0.0f, 0x1.470fa4p-69f, 0.0f, 0x1.3bd0c4p-103f, 0.0f,
     0.0f, 0x1.dbcf0cp-51f, 0x1.9a183p-66f, 0.0f, 0x1.fc801ap-52f, 0x1.c8e02cp-108f,
     0.0f, 0.0f, 0.0f, 0x1.8975aap-67f, 0x1.40d064p-108f, 0x1.0c3a84p-51f,
     0x1.aeebfap-126f, 0.0f, 0.0f, 0x1.06f16cp-100f, 0.0f, 0x1.99ec86p-80f,
     0x1.2cfc66p-120f, 0x1.df2388p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.717416p-63f, 0.0f,
     0x1.c99c24p-102f, 0.0f, 0x1.259e62p-32f, 0.0f, 0.0f, 0x1.a0f562p-119f, 0.0f,
     0x1.5411fcp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8c2fcp-51f, 0x1.83643cp-66f, 0.0f,
     0x1.1374aap-120f, 0x1.d3a6c4p-109f, 0.0f, 0x1.250724p-94f, 0.0f, 0x1.b2e476p-6f,
     0.0f, 0.0f, 0x1.4aa226p-95f, 0x1.620d02p-81f, 0.0f, 0.0f, 0x1.f6c8ep-24f, 0.0f,
     0x1.3e79f2p-107f, 0.0f, 0.0f, 0.0f, 0x1.14beap-113f, 0x1.b4e926p-49f,
     0x1.fce6cap-37f, 0.0f, 0.0f, 0.0f, 0x1.8da194p-55f, 0x1.4ca9f6p-29f,
     0x1.539996p-3f, 0.0f, 0.0f, 0.0f, 0x1.6cde98p-80f, 0.0f, 0.0f, 0.0f,
     0x1.e0d756p-74f, 0.0f, 0x1.723326p-14f, 0x1.6fec34p-61f, 0.0f, 0x1.27c10ap-60f,
     0x1.917e14p-55f, 0.0f, 0x1.c58a68p-55f, 0x1.5d2396p-72f, 0.0f, 0x1.3e685ap-105f,
     0x1.b2a108p-73f, 0.0f, 0.0f, 0x1.06fbcep-47f, 0x1p0f, 0x1.a74da8p-124f,
     0x1.b5f9dep-86f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_asinf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_asinf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asinf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
