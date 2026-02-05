/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf4_u35kvx.c --function Sleef_sinf4_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.e2aec8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17bd4p-86f,
     0x1.5370fap-23f, 0.0f, 0x1.ad22a2p-19f, 0.0f, 0x1.73472p-91f, 0x1.3f643ap-124f,
     0x1.20c974p-116f, 0x1.5a1894p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.375ca6p-26f, 0x1.6732cep-7f, 0.0f, 0x1.87dbacp-25f, 0x1.5d5ae6p-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d7d3ep-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bdff52p-13f, 0x1.a93f14p-45f, 0x1.c2a9dcp-21f, 0.0f,
     0x1.0834cap-66f, 0x1.644474p-21f, 0.0f, 0x1.48b166p-42f, 0.0f, 0x1.c76492p-37f,
     0x1.278dfcp-25f, 0x1.3908bap-94f, 0.0f, 0x1.6e9ba4p-7f, 0.0f, 0.0f, 0.0f,
     0x1.be546p-7f, 0x1.d55b9ep-82f, 0.0f, 0.0f, 0x1.ed96fap-26f, 0x1.628c5p-74f,
     0x1.d3272ep-42f, 0x1.7496cap-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3646e4p-20f, 0.0f,
     0x1.81c762p-86f, 0.0f, 0.0f, 0x1.ccc7e4p-71f, 0x1.250006p-114f, 0x1.9043c6p-7f,
     0.0f, 0x1.d5c7f2p-8f, 0x1.db6398p-29f, 0.0f, 0x1.10b0c8p-71f, 0x1.ad12b4p-70f,
     0x1.b463ecp-76f, 0.0f, 0.0f, 0x1.776a8ap-57f, 0x1.3d7936p-100f, 0x1.66f374p-40f,
     0.0f, 0x1.c0fddap-113f, 0x1.ae0204p-88f, 0x1.1d37fcp-126f, 0x1.860abap-98f,
     0x1.646028p-15f, 0.0f, 0.0f, 0x1.b9cb82p-95f, 0x1.3685cp-115f, 0.0f,
     0x1.24b98cp-111f, 0.0f, 0x1.f53498p-78f, 0x1.b25b54p-14f, 0x1.c2e3eep-97f,
     0x1.14316p-86f, 0x1.01d17ap-18f, 0x1.a48118p-8f, 0x1.ff349ap-14f,
     0x1.a1e05ep-14f, 0x1.45fc2ep-51f, 0.0f, 0x1.4f928ep-6f, 0.0f, 0.0f,
     0x1.ecbb64p-122f, 0x1.195fdcp-103f, 0x1.35c1fcp-54f, 0x1.e85434p-12f, 0.0f,
     0x1.a18916p-115f, 0.0f, 0.0f, 0x1.c943e2p-71f, 0x1.0e1584p-120f, 0.0f, 0.0f,
     0.0f, 0x1.7ad93cp-24f, 0.0f, 0.0f, 0x1.6f2d02p-2f, 0x1.1fba78p-101f,
     0x1.ae62fep-51f, 0x1.9feb82p-52f, 0x1.fa3edcp-32f, 0x1.bc7a3p-57f, 0.0f, 0.0f,
     0.0f, 0x1.08aaf4p-23f, 0.0f, 0.0f, 0.0f, 0x1.0f12fcp-54f, 0.0f, 0x1.79fe54p-72f,
     0x1.b5c998p-111f, 0x1.2c3dc6p-41f, 0x1.f64ee2p-6f, 0x1.b3a512p-104f, 0.0f,
     0x1.66ef9p-47f, 0x1.62bep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65c5ap-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6f3518p-61f, 0.0f, 0.0f, 0x1.9cb50ap-8f, 0x1.a1acb6p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17d272p-106f, 0.0f, 0.0f, 0.0f,
     0x1.f35f48p-73f, 0x1.614358p-23f, 0x1.e1c7b6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f6bd6ap-26f, 0.0f, 0.0f, 0x1.574918p-113f, 0.0f, 0x1.4e07a8p-86f,
     0x1.75c53p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb9b02p-55f, 0.0f,
     0x1.beb9b8p-41f, 0.0f, 0.0f, 0x1p0f, 0x1.eadd22p-42f, 0.0f, 0.0f,
     0x1.d9c838p-125f, 0.0f, 0.0f, 0x1.10cf02p-82f, 0x1.b1289cp-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b1c4cap-9f, 0.0f, 0x1.c69a7p-116f, 0x1.8b809ep-60f,
     0x1.ea1a0cp-59f, 0x1.3b38a4p-51f, 0x1.a9073cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.19b17cp-23f, 0.0f, 0x1.936b2ap-29f, 0.0f, 0.0f,
     0x1.3b0186p-37f, 0.0f, 0x1.dbb872p-38f, 0.0f, 0x1.df71dep-50f, 0x1.057bf2p-90f,
     0.0f, 0.0f, 0x1.f0c03cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50b206p-28f, 0.0f,
     0x1.84dfa8p-66f, 0x1.88da5ap-71f, 0x1.55da7ep-4f, 0x1.104746p-111f,
     0x1.00f602p-34f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9be126p-120f, 0.0f, 0x1.d29f54p-79f, 0.0f, 0x1.85d6b4p-59f, 0x1.01dff2p-76f,
     0x1.ea83dep-105f, 0.0f, 0x1.5ae00cp-29f, 0.0f, 0x1.b3894ep-8f, 0.0f, 0.0f,
     0x1.df210cp-42f, 0.0f, 0x1.9ca1ep-51f, 0.0f, 0.0f, 0x1.115242p-82f, 0.0f,
     0x1.97411cp-105f, 0.0f, 0x1.adbc88p-55f, 0.0f, 0.0f, 0x1.7f9efp-25f,
     0x1.557b2p-46f, 0x1.6a08fap-121f, 0x1.52d46ep-109f, 0x1.98666p-78f,
     0x1.cbf666p-96f, 0.0f, 0x1.9c977p-60f, 0x1.b86acp-34f, 0.0f, 0x1.638532p-119f,
     0.0f, 0x1.a7312ap-19f, 0.0f, 0x1.6349dp-47f, 0.0f, 0x1.8db15ep-77f, 0.0f,
     0x1.72b4d4p-68f, 0.0f, 0.0f, 0x1.04414p-49f, 0.0f, 0x1.f0f73cp-87f, 0.0f,
     0x1.b99bdap-94f, 0x1.ad4b86p-97f, 0x1.cdab38p-36f, 0x1.b76314p-96f, 0.0f,
     0x1.a73d3cp-14f, 0x1.c83134p-67f, 0.0f, 0.0f, 0x1.3fd11cp-80f, 0x1.c85884p-39f,
     0.0f, 0x1.5285dcp-14f, 0.0f, 0.0f, 0x1.b1795ep-15f, 0x1.a62dbcp-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bb62dp-46f, 0.0f, 0.0f, 0x1.d11222p-5f, 0.0f, 0.0f,
     0x1.8d06eap-122f, 0x1.438d9cp-39f, 0x1.bf9476p-113f, 0.0f, 0.0f, 0x1.00405cp-48f,
     0.0f, 0.0f, 0x1.78b10ep-89f, 0x1.49faecp-74f, 0.0f, 0.0f, 0x1.ef60e2p-86f,
     0x1.732d7ap-70f, 0.0f, 0x1.0f5c72p-52f, 0.0f, 0.0f, 0x1.dbe1dap-9f, 0.0f,
     0x1.ffdbb4p-4f, 0x1.46967ap-39f, 0x1.546b08p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.23cbaap-4f, 0x1.34d178p-40f, 0.0f, 0x1.f14d66p-20f, 0.0f, 0x1.6fef58p-94f,
     0x1.f4533ep-95f, 0.0f, 0x1.fcbff8p-73f, 0x1.4e680ep-108f, 0x1.127ef2p-56f,
     0x1.071ad6p-51f, 0x1.8862ap-43f, 0.0f, 0x1.1f2642p-97f, 0x1.8354b8p-117f, 0.0f,
     0.0f, 0x1.f7e058p-35f, 0x1.b4d7dep-59f, 0x1.6f560ap-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.66af82p-7f, 0x1.397b4ep-1f, 0x1.193bcep-121f, 0.0f,
     0x1.260b06p-55f, 0.0f, 0.0f, 0x1.e7954ap-68f, 0.0f, 0x1.8c386cp-96f,
     0x1.d335cap-72f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1p0f, 0.0f, 0x1.6d868cp-68f, 0.0f,
     0x1.33e3bcp-23f, 0x1.d8ce6p-33f, 0.0f, 0x1.ac044ap-65f, 0.0f, 0x1.d31e8p-67f,
     0.0f, 0x1.7ce43ap-53f, 0x1.30b67cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a12a4p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.528edep-112f, 0.0f, 0x1.87a3f4p-37f,
     0x1.e8a38ep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33d7fp-36f, 0.0f, 0.0f,
     0x1.a43102p-3f, 0.0f, 0x1.b2830ep-8f, 0x1.0e5a0cp-31f, 0x1.92f122p-6f,
     0x1.f6acd6p-97f, 0.0f, 0x1.e4c9dep-45f, 0x1.2df252p-33f, 0.0f, 0x1.9a1f68p-111f,
     0x1.655c16p-21f, 0.0f, 0x1.c1f6dp-55f, 0x1.9b4122p-114f, 0.0f, 0x1.0eeadap-102f,
     0x1.390bcap-34f, 0.0f, 0.0f, 0x1.55328cp-115f, 0.0f, 0.0f, 0x1.9d9f8p-27f, 0.0f,
     0x1.860068p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.111e98p-31f, 0x1.31580ap-41f, 0.0f,
     0.0f, 0x1.dc0a14p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0aeabap-17f,
     0x1.c16356p-115f, 0x1.cf45ep-77f, 0x1.ecd2dp-22f, 0.0f, 0x1.394944p-23f,
     0x1.c0ea6ep-72f, 0.0f, 0x1.86f8d8p-67f, 0x1.3c979cp-10f, 0.0f, 0.0f,
     0x1.53443p-88f, 0x1.75706ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b67f7ep-29f,
     0x1.ec3d72p-7f, 0x1.db63f4p-86f, 0.0f, 0.0f, 0.0f, 0x1.263ac2p-39f, 0.0f,
     0x1.5c65a8p-99f, 0.0f, 0.0f, 0.0f, 0x1.f0bfccp-8f, 0.0f, 0x1.7e9864p-56f, 0.0f,
     0.0f, 0.0f, 0x1.6f9772p-110f, 0x1.746968p-89f, 0x1.197612p-39f, 0.0f, 0.0f, 0.0f,
     0x1.6956d4p-6f, 0.0f, 0.0f, 0.0f, 0x1.b5fd4cp-107f, 0x1.3d305ap-92f,
     0x1.ff93a8p-32f, 0.0f, 0x1.406bf2p-63f, 0.0f, 0.0f, 0.0f, 0x1.f3e1b2p-67f,
     0x1.135a4p-115f, 0x1.272f5p-70f, 0.0f, 0x1.ba9588p-102f, 0.0f, 0.0f, 0.0f,
     0x1.12c674p-46f, 0x1.bb241p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffdb3cp-46f,
     0x1.d501e6p-118f, 0.0f, 0x1.51db26p-25f, 0x1.a2d11p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c4854ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62aca2p-98f, 0.0f, 0.0f,
     0x1.692fbap-5f, 0x1.f467bp-4f, 0x1.375b4cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5eded6p-15f, 0x1.0ea044p-58f,
     0x1.e46e5p-75f, 0.0f, 0.0f, 0x1.52eceep-7f, 0.0f, 0.0f, 0x1.e19b18p-102f, 0.0f,
     0x1.c343a6p-51f, 0x1.c76874p-44f, 0.0f, 0x1.3b986ap-42f, 0x1.c4801ep-32f, 0.0f,
     0.0f, 0x1.c4df48p-4f, 0.0f, 0x1.1aef4cp-3f, 0.0f, 0.0f, 0x1.4cbb34p-102f,
     0x1.b8448cp-44f, 0x1.63654ap-24f, 0x1.2505a6p-107f, 0x1.b021a4p-70f, 0.0f,
     0x1.de8fdep-1f, 0.0f, 0x1.f9e7a8p-47f, 0x1.12df32p-88f, 0x1.608a24p-70f,
     0x1.dc4b08p-63f, 0.0f, 0x1.d7b502p-80f, 0.0f, 0.0f, 0x1.cb862cp-11f,
     0x1.9e8bbap-80f, 0.0f, 0x1.eccbf6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e8e48p-12f, 0x1.a09ecap-81f, 0.0f, 0.0f, 0x1.7e4d82p-84f, 0x1.86d796p-87f,
     0.0f, 0x1.749e56p-82f, 0.0f, 0.0f, 0x1.1efc4p-111f, 0.0f, 0.0f, 0.0f,
     0x1.a8925ep-40f, 0.0f, 0x1.6cc3aep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81222ep-112f,
     0.0f, 0.0f, 0x1.43e8b4p-9f, 0x1.baf5dep-77f, 0x1.67afb6p-48f, 0x1.eb30fep-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e2a4ep-17f, 0x1.d10e38p-106f, 0.0f, 0x1.1aadap-20f,
     0x1.16f80ep-4f, 0x1.f23e4ep-18f, 0.0f, 0x1.81046ep-57f, 0x1.bd9a08p-85f,
     0x1.9de70cp-13f, 0x1.263b58p-21f, 0x1.c8936ep-28f, 0.0f, 0x1.c63bp-107f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c9e14p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1aca16p-30f, 0x1.cef44cp-34f, 0.0f, 0x1.b4afap-2f, 0x1.7d63dcp-113f, 0.0f,
     0x1.f2ba8p-82f, 0.0f, 0.0f, 0x1.ad46dp-77f, 0x1.1b96aep-39f, 0.0f,
     0x1.d079e2p-19f, 0x1.69918ep-36f, 0.0f, 0.0f, 0.0f, 0x1.37fffcp-97f, 0.0f,
     0x1.ae2c14p-124f, 0.0f, 0.0f, 0.0f, 0x1.ff3fe6p-80f, 0.0f, 0x1.546368p-28f,
     0x1.3690f4p-83f, 0.0f, 0.0f, 0.0f, 0x1.6f9c06p-21f, 0.0f, 0x1.e55b72p-106f, 0.0f,
     0x1.7a07aap-71f, 0.0f, 0x1.be0ef8p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.972cb2p-73f, 0.0f, 0.0f, 0x1.bfca6cp-113f, 0.0f, 0.0f, 0x1.b910fap-102f,
     0.0f, 0x1.2f2d4ep-74f, 0x1.cce35ep-104f, 0.0f, 0x1.56220ap-58f, 0x1.2e327cp-101f,
     0.0f, 0x1.ffd344p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f2646p-103f,
     0.0f, 0.0f, 0x1.91c024p-6f, 0x1.4cf56ap-46f, 0x1.9c1f2p-111f, 0x1.7591a2p-7f,
     0x1.f5d9fcp-11f, 0x1.c29c4p-93f, 0.0f, 0x1.0318ep-48f, 0.0f, 0x1.f3fb4ap-89f,
     0x1.455f92p-25f, 0x1.848a1ap-70f, 0x1.7a7d5ap-118f, 0x1.0cfbd4p-120f,
     0x1.d2647cp-122f, 0x1.bd009ap-114f, 0x1.73cb9ap-115f, 0x1.b7d696p-80f,
     0x1.9a66a4p-71f, 0x1.ecf664p-59f, 0x1.f44796p-78f, 0x1.c45998p-42f, 0.0f, 0.0f,
     0.0f, 0x1.85b23ep-92f, 0.0f, 0x1.f71436p-120f, 0x1.b1d94p-68f, 0x1.9926bp-50f,
     0x1.886b76p-67f, 0x1.2bfd98p-103f, 0.0f, 0x1.b7956ep-24f, 0x1.47615p-102f, 0.0f,
     0x1.bdf7dcp-70f, 0.0f, 0x1.c65cbp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.85a5a2p-124f, 0x1.deff8ep-68f, 0x1.55a5cp-114f, 0x1.1e8b5cp-23f, 0.0f,
     0.0f, 0x1.5a8aa4p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a3a3p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.261dfep-86f, 0x1.302464p-119f, 0.0f, 0.0f, 0x1.d0ff5ap-98f, 0.0f,
     0x1.a3e88p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5140c2p-16f, 0x1.bab3eep-71f,
     0x1.a61bcp-58f, 0.0f, 0x1.6e2358p-122f, 0.0f, 0.0f, 0x1.5698b8p-89f, 0.0f,
     0x1.a616fap-57f, 0x1.be29dcp-70f, 0.0f, 0x1.1c7086p-41f, 0x1.4d65a4p-17f,
     0x1.fb5bb8p-82f, 0x1.065d6cp-61f, 0x1.67c1dep-100f, 0.0f, 0x1.78112ep-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a65ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15638ap-75f,
     0x1.524f7p-106f, 0x1.0a93e4p-31f, 0.0f, 0x1.1411dap-65f, 0x1.30832ep-1f, 0.0f,
     0.0f, 0.0f, 0x1.b7aacep-70f, 0x1.00de86p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6b18ep-91f, 0.0f, 0.0f, 0x1.ce5cbap-98f, 0.0f, 0x1.a309d2p-111f,
     0x1.91d1d2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4451f4p-80f, 0x1.403bfp-122f,
     0x1.271366p-88f, 0.0f, 0.0f, 0x1.83f6d2p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88bab6p-47f, 0x1.9b8112p-115f, 0x1.bbd848p-49f, 0.0f, 0x1.e2a812p-92f,
     0x1.b034f6p-82f, 0x1.66a4bap-88f, 0.0f, 0x1.ea4b8p-116f, 0x1.ee3816p-58f, 0.0f,
     0.0f, 0x1.d20adep-74f, 0x1.8acd6cp-37f, 0.0f, 0.0f, 0x1.b7d6b2p-54f, 0.0f, 0.0f,
     0.0f, 0x1.31de34p-62f, 0.0f, 0.0f, 0x1.e88eaap-45f, 0x1.6c0498p-34f,
     0x1.f4c1f8p-98f, 0.0f, 0x1.a97c4cp-23f, 0.0f, 0.0f, 0x1.bfc278p-113f, 0.0f,
     0x1.805a5p-6f, 0.0f, 0x1.1011fp-83f, 0x1.23ceep-36f, 0.0f, 0.0f,
     0x1.48642ap-111f, 0.0f, 0x1.497f04p-7f, 0x1.1dc2c8p-101f, 0.0f, 0x1.53c566p-84f,
     0x1.5cb45p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b26b4p-1f, 0x1.bfe47ep-85f, 0.0f,
     0x1.17f01cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5c388p-119f, 0.0f,
     0x1.3d6d26p-82f, 0x1.688c0ap-26f, 0x1.60bb8ep-4f, 0x1.c3b4cap-9f,
     0x1.755404p-53f, 0x1.4e5692p-71f, 0x1.4093a6p-76f, 0.0f, 0.0f, 0x1.345e92p-76f,
     0x1.861a4cp-60f, 0x1.1377dcp-11f, 0x1.068768p-6f, 0x1.207444p-70f, 0.0f,
     0x1.fe5e14p-16f, 0x1.06e024p-122f, 0x1.71ea3ap-84f, 0.0f, 0x1.68264ap-120f,
     0x1.14aaeep-47f, 0.0f, 0.0f, 0x1.8c1708p-52f, 0x1.688cfap-78f, 0.0f, 0.0f, 0.0f,
     0x1.07fd04p-42f, 0x1.1735dp-30f, 0x1.58dc62p-109f, 0x1.8e58f8p-40f,
     0x1.ced228p-25f, 0.0f, 0x1.6ca25cp-13f, 0x1.821dfep-57f, 0x1.707c7ap-32f, 0.0f,
     0x1.dd739p-58f, 0.0f
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
            tmp1 = Sleef_sinf4_u35kvx(tmp0);
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
    printf("Sleef_sinf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
