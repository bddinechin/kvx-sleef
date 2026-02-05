/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastsinf4_u3500kvx.c --function \
 *     Sleef_finz_fastsinf4_u3500kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.dedfb8p-25f, 0x1.dc553cp-61f, 0x1.30c34cp-62f, 0x1.3349bap-70f,
     0x1.cfb4e2p-122f, 0x1.65a2fcp-10f, 0x1.fa825cp-25f, 0x1.c13f14p-123f, 0.0f, 0.0f,
     0x1.3d235p-119f, 0.0f, 0x1.6c0fp-81f, 0.0f, 0x1.f94efcp-65f, 0.0f,
     0x1.234cb8p-45f, 0.0f, 0x1.3cad4cp-116f, 0x1.bb2128p-35f, 0x1.f9419p-123f, 0.0f,
     0x1.91cee6p-46f, 0x1.87f08cp-28f, 0x1.6518f8p-12f, 0.0f, 0x1.2acb44p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5640a2p-49f, 0.0f, 0.0f, 0.0f, 0x1.3bbaeep-72f,
     0x1.20b182p-49f, 0.0f, 0x1.123b3p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3eaf46p-3f,
     0.0f, 0.0f, 0.0f, 0x1.49114cp-17f, 0x1.951484p-21f, 0x1.8a2c68p-66f, 0.0f,
     0x1.ec0e38p-99f, 0.0f, 0x1.c450dcp-51f, 0x1.0af4b4p-105f, 0x1.095096p-21f,
     0x1.cb176ap-43f, 0x1.75bd7cp-59f, 0x1.b66b24p-61f, 0.0f, 0x1.46037p-102f, 0.0f,
     0x1.3c61dp-26f, 0.0f, 0.0f, 0x1.2fccd4p-70f, 0x1.5238dcp-97f, 0x1.eb310ap-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.edb8fep-108f, 0.0f, 0.0f, 0x1.1b0b3ep-65f,
     0x1.7c8d54p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e530ap-75f,
     0.0f, 0.0f, 0x1.f4ced6p-26f, 0.0f, 0.0f, 0.0f, 0x1.b222f8p-56f, 0x1.20889p-16f,
     0.0f, 0.0f, 0x1.5eec66p-115f, 0x1.9f81fap-83f, 0x1.8a3a14p-124f, 0.0f,
     0x1.7fe642p-42f, 0.0f, 0.0f, 0x1.699252p-89f, 0x1.8574c2p-73f, 0x1.659a74p-92f,
     0.0f, 0x1.ccd5a8p-115f, 0.0f, 0.0f, 0x1.d3a366p-126f, 0.0f, 0x1.61d6aep-68f,
     0x1.5cb014p-22f, 0.0f, 0.0f, 0.0f, 0x1.8b42bp-72f, 0.0f, 0x1.12f58p-40f,
     0x1.85de6ap-66f, 0x1.9fe53cp-78f, 0x1.833fd4p-76f, 0x1.c8ee28p-38f, 0.0f, 0.0f,
     0x1.1ba19p-113f, 0x1.871d54p-39f, 0.0f, 0.0f, 0.0f, 0x1.4a3c24p-13f,
     0x1.fc31d8p-117f, 0.0f, 0x1.5d1f0cp-25f, 0x1.7b5fbap-25f, 0x1.fe506p-106f, 0.0f,
     0.0f, 0.0f, 0x1.303904p-87f, 0x1.328d7cp-61f, 0x1.a47aaep-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd1b6ap-41f, 0.0f, 0.0f, 0x1.b7251ap-23f, 0.0f, 0.0f, 0x1.f38f06p-124f,
     0x1.614e56p-63f, 0.0f, 0x1.7b2eeep-118f, 0.0f, 0.0f, 0.0f, 0x1.fd813cp-116f,
     0.0f, 0x1.cb8f98p-51f, 0.0f, 0x1.cc5816p-105f, 0x1.436192p-26f, 0.0f,
     0x1.3d52fep-111f, 0x1.cce394p-40f, 0x1.bab826p-82f, 0x1.c2b04p-33f,
     0x1.81aebap-109f, 0.0f, 0x1.48fd56p-98f, 0x1.95521p-116f, 0x1.0b81acp-57f, 0.0f,
     0.0f, 0.0f, 0x1.a71e9ep-123f, 0.0f, 0x1.56fccep-34f, 0.0f, 0.0f, 0x1.c6d676p-99f,
     0x1.39d2f4p-96f, 0.0f, 0x1.ef3c36p-21f, 0x1.f47cep-65f, 0x1.82ee5ap-38f,
     0x1.88a3aep-9f, 0.0f, 0x1.2e84dcp-63f, 0.0f, 0.0f, 0x1.b35aa2p-95f, 0.0f, 0.0f,
     0x1.53e05ap-81f, 0x1.9bcfb6p-116f, 0.0f, 0.0f, 0x1.8ccc66p-54f, 0x1.ba6e9ep-49f,
     0.0f, 0.0f, 0.0f, 0x1.89ba3ep-94f, 0x1.8231a6p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20f1acp-15f, 0x1.e59be4p-4f, 0x1.a35daap-33f, 0.0f, 0.0f, 0.0f,
     0x1.54b3d2p-102f, 0.0f, 0x1.be5058p-61f, 0.0f, 0.0f, 0.0f, 0x1.c4955cp-47f,
     0x1.ca4c44p-115f, 0.0f, 0x1.6be2d8p-77f, 0x1.7e0b08p-54f, 0x1.1f4a68p-52f,
     0x1.90725ep-107f, 0x1.5705ecp-41f, 0x1.81e76ap-84f, 0x1.6cdc1p-57f, 0.0f, 0.0f,
     0x1.f3a55p-46f, 0x1.48dc88p-107f, 0.0f, 0.0f, 0x1.72d39cp-67f, 0.0f,
     0x1.662f08p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80b908p-53f, 0x1.b4433ep-56f,
     0x1.35f7dcp-58f, 0.0f, 0x1.bc64d2p-64f, 0x1.c6bf1cp-103f, 0x1.56d664p-79f,
     0x1.8356cep-68f, 0.0f, 0x1.6e66f4p-75f, 0x1.79a33ap-109f, 0x1.340008p-27f, 0.0f,
     0.0f, 0.0f, 0x1.fc265ap-57f, 0x1.0455cep-125f, 0.0f, 0.0f, 0.0f, 0x1.57013ep-46f,
     0x1.5498f8p-92f, 0x1.9f338cp-4f, 0x1.953698p-123f, 0x1.f8bcf8p-4f,
     0x1.4cf792p-39f, 0.0f, 0x1.4186acp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b40a76p-48f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98fd34p-68f, 0x1.6ef9eap-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0f29ep-41f, 0x1.4e1384p-92f, 0.0f, 0.0f, 0x1.f86ab8p-91f,
     0x1.2c2d22p-19f, 0x1.74e7d6p-111f, 0.0f, 0x1.60d844p-40f, 0.0f, 0x1.ec055p-78f,
     0.0f, 0x1.778d8p-122f, 0x1.088828p-49f, 0x1.00a018p-124f, 0.0f, 0.0f,
     0x1.214294p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0f774p-122f, 0x1.6ec50ap-25f, 0.0f,
     0x1.3d1f3ap-52f, 0.0f, 0.0f, 0x1.3a9cd6p-24f, 0.0f, 0.0f, 0x1.9605f2p-103f,
     0x1.07374ep-124f, 0x1.cfffccp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.179d64p-45f,
     0x1.8d0754p-10f, 0x1.22819p-9f, 0.0f, 0.0f, 0.0f, 0x1.1367b8p-93f,
     0x1.df435ep-2f, 0x1.8faa2ep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c735f4p-38f, 0.0f,
     0.0f, 0x1.0c5c52p-105f, 0.0f, 0x1.df338ap-30f, 0x1.494b6ep-95f, 0x1.6df896p-11f,
     0.0f, 0.0f, 0.0f, 0x1.c32a1ap-114f, 0.0f, 0.0f, 0x1.3f0244p-14f, 0.0f,
     0x1.fbdb06p-110f, 0x1.1cb2bcp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63a7bcp-43f, 0x1.4ce4dcp-54f, 0.0f, 0x1.2448b4p-101f, 0.0f, 0x1.cd7f6p-34f,
     0x1.2f20ap-70f, 0x1.4f3118p-25f, 0x1.c639e6p-46f, 0.0f, 0x1.624e8cp-18f, 0.0f,
     0.0f, 0.0f, 0x1.f128f6p-1f, 0.0f, 0x1.d552bp-43f, 0x1.05bf94p-55f,
     0x1.b5dd64p-70f, 0.0f, 0x1.f5c414p-58f, 0.0f, 0x1.c2bdd2p-19f, 0.0f,
     0x1.1fd0bcp-45f, 0x1.85dc2ap-30f, 0.0f, 0x1.a27a98p-11f, 0.0f, 0.0f, 0.0f,
     0x1.73add8p-11f, 0.0f, 0.0f, 0x1.516fbep-60f, 0x1.340e5ap-3f, 0.0f, 0.0f,
     0x1.619e74p-16f, 0.0f, 0x1.79b7bep-121f, 0x1.42de58p-77f, 0.0f, 0x1.4e5c56p-39f,
     0x1.573558p-16f, 0.0f, 0x1.31ef7ap-73f, 0.0f, 0.0f, 0x1.9159e4p-40f,
     0x1.ae52acp-45f, 0x1.32eb5ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c79dep-69f, 0x1.ea0bd6p-55f, 0.0f, 0.0f, 0x1.ba2028p-40f, 0.0f, 0.0f, 0.0f,
     0x1.638724p-117f, 0x1.f55872p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3bacp-74f, 0x1.f96c7ap-100f, 0x1.640366p-23f, 0.0f, 0x1.1cd45ep-21f,
     0.0f, 0x1.42fed2p-117f, 0x1.bef014p-16f, 0x1.702c68p-102f, 0x1.3dec2ap-99f,
     0x1.7699cap-81f, 0x1.b3ee4ap-90f, 0x1.edc6cp-85f, 0.0f, 0.0f, 0x1.ef59c6p-95f,
     0x1.b56efap-105f, 0x1.3401cap-17f, 0.0f, 0.0f, 0x1.078d5cp-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.96819ap-18f, 0.0f, 0x1.3811p-7f, 0.0f, 0.0f, 0.0f,
     0x1.8d5ecap-99f, 0x1.1fafcep-126f, 0x1.ef59c4p-84f, 0x1.563b24p-28f, 0.0f,
     0x1.df3cbep-57f, 0x1.13331ep-13f, 0.0f, 0.0f, 0x1.fd9e4cp-109f, 0.0f,
     0x1.8434a4p-25f, 0.0f, 0x1.cb8c1ep-54f, 0.0f, 0x1.a40438p-37f, 0.0f,
     0x1.cae842p-30f, 0.0f, 0x1.ce8f36p-47f, 0x1.29f1ap-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d04692p-113f, 0.0f, 0x1.283966p-22f, 0.0f, 0x1.44a2e4p-102f, 0.0f,
     0x1.9df416p-79f, 0.0f, 0x1.9d3d8p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.656b48p-79f,
     0.0f, 0.0f, 0x1.f1e776p-52f, 0.0f, 0.0f, 0.0f, 0x1.eff442p-74f, 0.0f,
     0x1.a551eap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb0386p-24f, 0x1.003358p-4f,
     0x1.95b036p-49f, 0x1.eabbc8p-96f, 0x1.504852p-67f, 0.0f, 0x1.b0e56cp-103f, 0.0f,
     0.0f, 0x1.6845b6p-60f, 0x1.937d6ep-48f, 0.0f, 0x1.af5248p-24f, 0.0f,
     0x1.d23378p-42f, 0.0f, 0x1.42067cp-92f, 0.0f, 0.0f, 0.0f, 0x1.2d00d4p-55f,
     0x1.46c912p-56f, 0x1.31a1bep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb64c4p-70f, 0.0f,
     0x1.266e34p-53f, 0.0f, 0x1.aa3b06p-113f, 0x1.0744e2p-111f, 0.0f, 0x1.e4fa84p-1f,
     0x1.5f234ap-114f, 0.0f, 0.0f, 0x1.9b45cap-15f, 0.0f, 0x1.af6516p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c9184p-95f, 0x1.aae9e4p-1f, 0x1.594fc6p-59f, 0.0f,
     0x1.0ec08ap-93f, 0x1.3ee7b4p-118f, 0x1.72ffp-115f, 0.0f, 0.0f, 0x1.a01282p-67f,
     0x1.573cdap-18f, 0.0f, 0x1.7d2968p-2f, 0x1.7b8474p-25f, 0.0f, 0x1.b10eb6p-40f,
     0x1.5494p-67f, 0x1.8736c8p-40f, 0x1.2b69dap-114f, 0x1.96e3ecp-19f,
     0x1.3a4a5ap-125f, 0x1.9bb23ap-27f, 0.0f, 0x1.5a6d8p-93f, 0.0f, 0x1.7f505cp-125f,
     0x1.26216cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c573ap-18f, 0x1.cb2544p-9f,
     0x1.d8c0fp-70f, 0x1.26f114p-119f, 0.0f, 0.0f, 0.0f, 0x1.2d5366p-126f, 0.0f,
     0x1.b35a14p-24f, 0x1.55515ap-5f, 0.0f, 0x1.8096a4p-86f, 0.0f, 0.0f,
     0x1.a316bp-15f, 0x1.b83ce8p-111f, 0x1.ff7ae8p-70f, 0.0f, 0.0f, 0x1.f403b2p-57f,
     0x1.c1003ep-44f, 0.0f, 0.0f, 0.0f, 0x1.43ee7cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b3dda4p-45f, 0x1.c6b302p-9f, 0x1.119daep-95f, 0.0f,
     0x1.c7b48ap-9f, 0.0f, 0.0f, 0x1.aa17d6p-92f, 0.0f, 0x1.07fa2cp-56f, 0.0f,
     0x1.df2c24p-7f, 0x1.e657dcp-60f, 0.0f, 0x1.a7498ap-85f, 0.0f, 0.0f,
     0x1.fb7a8ap-3f, 0.0f, 0x1.df187ep-73f, 0x1.5609a8p-126f, 0x1.cf8974p-21f,
     0x1.3dd5ep-71f, 0.0f, 0.0f, 0x1.691c2ap-54f, 0x1.dd740ap-19f, 0.0f,
     0x1.21618ap-119f, 0x1.bedd2ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ae1bp-94f,
     0x1.431e2ap-41f, 0.0f, 0.0f, 0.0f, 0x1.badddcp-30f, 0x1.30efd4p-72f,
     0x1.d1520ap-92f, 0x1.2e9d76p-74f, 0.0f, 0.0f, 0x1.e04d42p-102f, 0x1.3d5da2p-27f,
     0x1.0181fp-5f, 0x1.f7249cp-104f, 0x1.ade81p-125f, 0x1.5c949ap-88f, 0.0f,
     0x1.74b12cp-120f, 0.0f, 0x1.7c9e38p-55f, 0x1.96996p-81f, 0x1.4baap-38f,
     0x1.e77f2ep-6f, 0.0f, 0x1.6b5cb4p-86f, 0x1.bf8cf6p-103f, 0x1.ef4bf4p-81f,
     0x1.e7537ep-26f, 0x1.5666d4p-3f, 0x1.f4cfeap-85f, 0.0f, 0.0f, 0x1.fbc692p-77f,
     0.0f, 0.0f, 0.0f, 0x1.f90548p-117f, 0.0f, 0x1.63d7d8p-82f, 0x1.c51da2p-111f,
     0.0f, 0.0f, 0x1.9548a4p-89f, 0.0f, 0x1.0a981cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.d758d2p-42f, 0.0f, 0x1.d1e0a6p-28f, 0.0f, 0.0f, 0x1.76cc9cp-1f,
     0x1.6dbb2ep-10f, 0.0f, 0.0f, 0.0f, 0x1.be0698p-79f, 0x1.b47c82p-76f,
     0x1.932d1ep-70f, 0.0f, 0x1.895272p-107f, 0.0f, 0x1.11a33ap-70f, 0x1.525592p-8f,
     0x1.2bd51ap-28f, 0x1.7cb558p-54f, 0x1.9b8e62p-97f, 0x1.fcf22p-102f,
     0x1.1c753cp-15f, 0x1.74e0e4p-93f, 0x1.755702p-49f, 0x1.cdfb08p-75f,
     0x1.6539d4p-57f, 0x1.1b5c82p-59f, 0x1.f08092p-57f, 0x1.47ff0cp-87f, 0.0f,
     0x1.bb031cp-27f, 0x1.6c7fa4p-21f, 0.0f, 0.0f, 0x1.c47bbp-37f, 0x1.b7a1dp-59f,
     0x1.54fd0ap-28f, 0x1.c7e4fep-98f, 0.0f, 0.0f, 0.0f, 0x1.9c8116p-82f,
     0x1.a1e5c8p-88f, 0x1.8eb42p-5f, 0x1.65c46ep-43f, 0.0f, 0x1.c8f658p-5f,
     0x1.c91532p-5f, 0x1.72c136p-40f, 0.0f, 0x1.1bb19ep-58f, 0x1.5ebf96p-71f,
     0x1.f5801ep-108f, 0x1.57a38ap-95f, 0x1.275d72p-98f, 0.0f, 0x1.948ed8p-47f,
     0x1.a4a942p-79f, 0.0f, 0x1.3c8702p-50f, 0x1.73fdb2p-106f, 0x1.683382p-28f,
     0x1.631de8p-33f, 0x1.fe02p-29f, 0x1.5ebec8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.798188p-47f, 0x1.080964p-103f, 0x1.082444p-117f, 0x1.a9b878p-18f,
     0.0f, 0.0f, 0x1.cc8f7cp-64f, 0x1.a616a8p-69f, 0.0f, 0x1.84414p-126f, 0.0f,
     0x1.48c1c8p-118f, 0.0f, 0x1.a2e3eep-100f, 0.0f, 0x1.1ff0cap-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1aebdep-117f, 0x1.3aadeap-111f, 0.0f,
     0x1.16e9fep-91f, 0x1.e826c8p-118f, 0x1.8b20c8p-81f, 0.0f, 0x1.e68244p-52f, 0.0f,
     0.0f, 0x1.e0e81cp-65f, 0.0f, 0x1.903478p-21f, 0x1.7eea5p-6f, 0.0f,
     0x1.0e03d6p-56f, 0x1.eb1a6cp-26f, 0x1.1d5508p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f02e5cp-75f, 0x1.7d295p-48f, 0x1.441496p-83f, 0.0f, 0x1.e3c4d2p-49f,
     0.0f, 0x1.284e9p-69f, 0.0f, 0x1.d582cp-78f, 0x1.0151fcp-64f, 0x1.ec29b6p-48f,
     0x1.c7b71ep-74f, 0x1.fa64aap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bf3fap-46f,
     0x1.2a4bf8p-22f, 0.0f, 0.0f, 0x1.1fcc4ep-25f, 0x1.43350ap-47f, 0.0f, 0.0f,
     0x1.3cf94cp-123f, 0x1.4fa47ep-20f, 0x1.29c01ap-78f, 0x1.78f696p-87f,
     0x1.d0b8ep-82f, 0.0f, 0.0f, 0x1.614d6p-80f, 0.0f, 0.0f, 0.0f, 0x1.7294b2p-8f,
     0.0f, 0.0f, 0x1.fcf306p-58f, 0x1.300414p-89f, 0.0f, 0x1.c12d32p-78f, 0.0f, 0.0f,
     0x1.6e9578p-37f, 0x1.0ab89ap-105f, 0.0f, 0x1.c495a6p-37f, 0x1.3736c6p-50f, 0.0f,
     0x1.529a32p-14f, 0x1.7e042ep-110f, 0.0f, 0.0f, 0x1.3509d2p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1053f8p-95f, 0x1.746352p-101f, 0.0f, 0x1.6d2e24p-29f, 0.0f,
     0x1.303734p-31f, 0.0f, 0x1.d41622p-71f, 0.0f, 0.0f, 0.0f, 0x1.975a56p-48f,
     0x1.61dbe6p-65f, 0x1.de221ep-99f, 0.0f, 0x1.5aaa5p-10f, 0.0f, 0x1.e010e6p-105f,
     0x1.ca63ep-108f, 0.0f, 0x1.6a0c96p-57f, 0x1.6ced86p-55f, 0x1.717d02p-23f,
     0x1.d83d5p-28f, 0x1.707438p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce30b4p-17f, 0.0f,
     0x1.af0d2p-42f, 0.0f, 0x1.4924bcp-33f, 0.0f, 0.0f, 0x1.ccfab4p-60f, 0.0f,
     0x1.586bf4p-13f, 0x1.0ebff8p-105f, 0x1.8b935ep-98f, 0x1.b9aae2p-49f, 0.0f,
     0x1.12e68p-43f, 0x1.fb45bep-71f, 0.0f, 0x1.9ae112p-81f, 0x1.dd9354p-33f,
     0x1.8c503ep-96f, 0x1.26f0f6p-17f, 0x1.4a2d4p-57f, 0x1.b9e9dcp-85f, 0.0f, 0.0f,
     0.0f, 0x1.7abaa2p-50f, 0x1.ec3df6p-59f, 0.0f, 0.0f, 0.0f, 0x1.1d5716p-36f, 0.0f,
     0.0f, 0.0f, 0x1.dba1ep-12f, 0.0f, 0x1.1ea46ep-123f, 0x1.77e0f6p-75f, 0.0f,
     0x1.9189b2p-78f, 0.0f, 0x1.3af65cp-9f, 0.0f, 0.0f, 0.0f, 0x1.6681fap-78f,
     0x1.92e2d4p-75f, 0.0f, 0x1.7415a2p-72f, 0.0f, 0x1.b2b812p-100f, 0.0f,
     0x1.ef182ap-35f, 0x1.ccec8cp-84f, 0x1.5475fcp-126f, 0.0f, 0.0f, 0x1.b5894p-93f,
     0x1.cebb32p-20f, 0.0f, 0.0f, 0x1.d76f84p-74f, 0x1.a9e22ap-99f, 0.0f
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
            tmp1 = Sleef_finz_fastsinf4_u3500kvx(tmp0);
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
    printf("Sleef_finz_fastsinf4_u3500kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fastsinf4_u3500kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
