/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf8_u35kvx.c --function Sleef_finz_cosf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0.0f, 0x1.937b8p-90f, 0.0f, 0x1.864574p-126f, 0x1.c8ffeap-75f, 0.0f, 0.0f,
     0.0f, 0x1.899668p-17f, 0.0f, 0x1.e04032p-36f, 0x1.ff8c42p-89f, 0x1.bdb2bep-70f,
     0x1.084edap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7f56p-12f, 0x1.11b8dep-13f,
     0x1.2cd238p-16f, 0x1.130346p-73f, 0.0f, 0x1.6b40cep-10f, 0x1.c674c4p-118f,
     0x1.9fe5a4p-86f, 0x1.68c144p-7f, 0x1.eaebb8p-79f, 0.0f, 0.0f, 0x1.bd3d4p-56f,
     0x1.931078p-102f, 0x1.ae5d06p-33f, 0.0f, 0.0f, 0x1.88c36cp-35f, 0x1.a2371p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dacc2p-45f, 0x1.bdbb64p-51f, 0.0f,
     0x1.ac2f18p-22f, 0.0f, 0.0f, 0x1.d7dea2p-91f, 0x1.e8abcp-6f, 0x1.3b7886p-124f,
     0x1.f9d0c8p-20f, 0.0f, 0x1.e01984p-31f, 0x1.af7038p-79f, 0x1.228d86p-124f, 0.0f,
     0x1.6ce18p-86f, 0x1.1f395p-23f, 0.0f, 0x1.1827b2p-69f, 0x1.62075ep-88f,
     0x1.64e7b4p-64f, 0x1.7d7ecep-73f, 0.0f, 0.0f, 0.0f, 0x1.fe0d3ap-12f, 0.0f,
     0x1.be1646p-118f, 0x1.ac4f84p-33f, 0.0f, 0.0f, 0x1.e81ac6p-99f, 0x1.945704p-76f,
     0.0f, 0x1.ebf262p-9f, 0.0f, 0x1.157094p-93f, 0x1.20aeb8p-73f, 0.0f,
     0x1.474822p-24f, 0x1.1ccd78p-116f, 0.0f, 0x1.a015fep-23f, 0x1.472512p-72f,
     0x1.e930cep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baa38p-29f, 0.0f, 0.0f,
     0x1.0aace2p-10f, 0x1.984baep-36f, 0x1.4ce694p-30f, 0x1.b32de2p-42f,
     0x1.9d013ep-94f, 0x1.073194p-77f, 0x1.63af4cp-115f, 0x1.85f06cp-15f,
     0x1.a7a07p-5f, 0x1.f2469ap-70f, 0.0f, 0.0f, 0x1.451f46p-90f, 0x1.8ca1c6p-120f,
     0.0f, 0x1.9217bep-65f, 0.0f, 0.0f, 0x1.637bdep-51f, 0.0f, 0x1.011222p-86f, 0.0f,
     0.0f, 0.0f, 0x1.87d822p-68f, 0x1.6ae7cep-79f, 0.0f, 0x1.face22p-72f,
     0x1.b5a556p-17f, 0.0f, 0.0f, 0.0f, 0x1.4e1552p-17f, 0.0f, 0.0f, 0x1.cd699ap-99f,
     0.0f, 0x1.0a1a58p-6f, 0.0f, 0x1.a3bb64p-122f, 0x1.b58f7p-95f, 0.0f,
     0x1.1e43aap-55f, 0x1.f4925ep-31f, 0.0f, 0x1.f39896p-124f, 0x1.6d9124p-106f,
     0x1.065a34p-125f, 0x1.f559bcp-71f, 0.0f, 0x1.b1d62p-80f, 0.0f, 0x1.3d40eep-32f,
     0x1.9ea4dep-26f, 0x1.83d514p-30f, 0.0f, 0.0f, 0.0f, 0x1.93ee5ap-68f, 0.0f, 0.0f,
     0x1.6fec22p-82f, 0.0f, 0x1.a5b38ap-100f, 0x1.4f9bd4p-107f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a99ae4p-121f, 0.0f, 0.0f, 0.0f, 0x1.45cdbcp-16f, 0x1.324d2cp-43f,
     0x1.77e76cp-6f, 0x1.ec9ep-125f, 0x1.7351bap-96f, 0.0f, 0x1.458896p-10f, 0.0f,
     0.0f, 0x1.4c2bfep-13f, 0.0f, 0x1.32aed6p-43f, 0.0f, 0.0f, 0.0f, 0x1.06f7fap-13f,
     0.0f, 0x1.88d988p-50f, 0.0f, 0.0f, 0.0f, 0x1.1b18ep-122f, 0.0f, 0x1.80531cp-30f,
     0x1.6ab49cp-68f, 0x1.d94c88p-125f, 0.0f, 0.0f, 0x1.9422dep-88f, 0x1.a2fac4p-111f,
     0.0f, 0x1.b61dap-78f, 0x1.77845p-29f, 0.0f, 0.0f, 0x1.5406c8p-94f, 0.0f,
     0x1.36e2ap-126f, 0x1.6fd43ep-105f, 0.0f, 0.0f, 0.0f, 0x1.f2b6cep-116f, 0.0f,
     0x1.0bdf2ap-6f, 0.0f, 0x1.14285ap-32f, 0.0f, 0x1.7311d8p-36f, 0.0f, 0.0f,
     0x1.4975b2p-39f, 0.0f, 0x1.dd9128p-106f, 0.0f, 0.0f, 0x1.d3d6fep-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eebaccp-69f, 0x1.fbdf4p-1f, 0x1.02e8e2p-120f, 0x1.8ab37ap-26f,
     0x1.46a616p-19f, 0x1.31a53p-87f, 0x1.0e4fb4p-99f, 0x1.73b5ccp-38f,
     0x1.cb5acep-22f, 0.0f, 0.0f, 0x1.f20684p-77f, 0.0f, 0x1.7aa04ep-29f, 0.0f,
     0x1.5057bep-34f, 0.0f, 0.0f, 0x1.e5a72cp-89f, 0.0f, 0x1.766b66p-16f, 0.0f, 0.0f,
     0.0f, 0x1.79066p-71f, 0x1.9274bp-85f, 0.0f, 0x1.a0f2acp-70f, 0.0f,
     0x1.f52258p-59f, 0x1.fcbd74p-102f, 0.0f, 0x1.401e04p-29f, 0x1.ed3cbp-5f, 0.0f,
     0.0f, 0.0f, 0x1.a6eb1p-118f, 0.0f, 0x1.2da2b6p-85f, 0x1.e8967ap-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eacc2ep-43f, 0x1.7d5e44p-61f, 0.0f, 0.0f, 0x1.b1cf1p-71f,
     0x1.94f3cap-84f, 0.0f, 0.0f, 0.0f, 0x1.483e2p-90f, 0x1.54a3acp-33f, 0.0f, 0.0f,
     0x1.5e9328p-67f, 0x1.c6d16p-16f, 0.0f, 0x1.cf1c54p-66f, 0.0f, 0.0f,
     0x1.4a1daep-78f, 0x1.691f2p-22f, 0x1.dea952p-94f, 0.0f, 0x1.f6cb58p-71f,
     0x1.7ed728p-118f, 0x1.7eba24p-15f, 0.0f, 0.0f, 0.0f, 0x1.101ed6p-41f, 0.0f,
     0x1.17d49ep-75f, 0.0f, 0.0f, 0x1.f1439ap-25f, 0x1.d7b71p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.308918p-14f, 0x1.9c155ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea4c6cp-33f, 0x1.a922acp-45f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.13d2dep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e01d14p-66f, 0x1.8422dep-120f,
     0x1.db7f2ep-6f, 0x1.d5a906p-9f, 0x1.7cc474p-38f, 0x1.725692p-11f, 0.0f, 0.0f,
     0.0f, 0x1.7d7464p-51f, 0x1.00db1p-81f, 0.0f, 0x1.6f411p-91f, 0x1.70243cp-89f,
     0x1.ba4bb8p-119f, 0x1.8f756p-4f, 0.0f, 0.0f, 0.0f, 0x1.e844bep-31f, 0.0f, 0.0f,
     0.0f, 0x1.bc5858p-54f, 0.0f, 0x1.fae1fep-89f, 0.0f, 0x1.9a8788p-48f, 0.0f,
     0x1.da2a8cp-25f, 0x1.44269p-121f, 0x1.9026bap-92f, 0.0f, 0.0f, 0x1.b800ecp-52f,
     0.0f, 0x1.2cc0f2p-96f, 0x1.3cba8ap-73f, 0x1.e7135cp-45f, 0.0f, 0x1.19afbap-114f,
     0x1.396926p-118f, 0x1.d27e82p-56f, 0.0f, 0x1.c749a8p-82f, 0.0f, 0.0f,
     0x1.fb2dcp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8ddd4p-104f, 0x1.7654c2p-63f, 0.0f,
     0x1.0b6706p-30f, 0x1.fca50ep-21f, 0x1.094ff6p-42f, 0.0f, 0x1.8b1f78p-69f, 0.0f,
     0x1.faed4ep-112f, 0.0f, 0x1.b13d8cp-58f, 0.0f, 0x1.0d0feap-57f, 0x1.212612p-64f,
     0x1.1591b6p-47f, 0.0f, 0x1.63213ap-76f, 0.0f, 0x1.2e736p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc0116p-41f, 0x1.12ccf8p-4f, 0x1.dad178p-109f, 0x1.d69aa2p-85f,
     0.0f, 0.0f, 0.0f, 0x1.3f312p-47f, 0.0f, 0x1.31a358p-124f, 0x1.7612c2p-97f, 0.0f,
     0x1.2a53a6p-16f, 0x1.0b9804p-82f, 0.0f, 0.0f, 0x1.8ba00ap-114f, 0x1.3d78f4p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f0f54p-113f, 0.0f, 0x1.62ee98p-50f,
     0x1.e88de8p-20f, 0x1.a360d8p-103f, 0x1.8ed384p-21f, 0.0f, 0x1.47f27p-95f,
     0x1.7fbafcp-86f, 0.0f, 0.0f, 0x1.2b2e4cp-18f, 0.0f, 0.0f, 0.0f, 0x1.f8db9ap-113f,
     0.0f, 0x1.4f0a7ep-117f, 0x1.b3a3fp-103f, 0.0f, 0x1.87a488p-87f, 0x1.31deaap-79f,
     0x1.09f184p-67f, 0x1.e2fb46p-92f, 0x1.a24be2p-33f, 0.0f, 0x1.d4ee36p-94f, 0.0f,
     0.0f, 0x1.342ab4p-19f, 0.0f, 0x1.d73ae4p-117f, 0.0f, 0.0f, 0.0f,
     0x1.2eb19cp-106f, 0.0f, 0x1.9bed28p-103f, 0.0f, 0.0f, 0x1p0f, 0x1.7f76b6p-35f,
     0.0f, 0.0f, 0x1.872dbep-97f, 0x1.257ed2p-51f, 0.0f, 0x1.36083cp-62f, 0.0f,
     0x1.858648p-22f, 0x1.0e4edap-37f, 0x1.ee22c8p-122f, 0.0f, 0x1.621852p-79f,
     0x1.47c234p-19f, 0x1.399c6ep-9f, 0.0f, 0.0f, 0.0f, 0x1.fef518p-38f,
     0x1.42c8a4p-121f, 0.0f, 0x1.8c36a2p-66f, 0.0f, 0x1.1ac9f8p-125f, 0.0f, 0.0f,
     0x1.ee7076p-101f, 0x1.0b6752p-98f, 0x1.b0c64p-53f, 0.0f, 0x1.336e82p-88f,
     0x1.20dcecp-2f, 0x1.9584dp-77f, 0x1.88dc48p-20f, 0x1.332e9ep-103f, 0.0f, 0.0f,
     0x1.d87318p-34f, 0x1.51d88ep-79f, 0x1.6b958ep-15f, 0.0f, 0.0f, 0x1.6358fcp-93f,
     0x1.49beeap-108f, 0x1.b3f736p-100f, 0.0f, 0.0f, 0x1.4b768ep-126f,
     0x1.683934p-85f, 0x1.d5dbbp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e58fep-114f,
     0x1.213968p-2f, 0x1.dd18bap-27f, 0x1.7bb3b6p-13f, 0x1.279568p-54f, 0.0f, 0.0f,
     0x1.2936eap-100f, 0x1.87f556p-126f, 0x1.3f6c6ep-88f, 0x1.80efaep-49f,
     0x1.65a838p-44f, 0x1.78c3b8p-5f, 0x1.ec2e3ep-39f, 0x1.e9e11p-68f,
     0x1.2b230ap-107f, 0x1.5c165ap-24f, 0x1.fcf63cp-8f, 0.0f, 0x1.715538p-27f,
     0x1.762bf2p-91f, 0x1.4d1c28p-19f, 0.0f, 0.0f, 0x1.7a537ep-78f, 0x1.1eefacp-60f,
     0x1.a83294p-104f, 0x1.8ea624p-54f, 0x1.84b5p-79f, 0x1.6f8066p-118f, 0.0f, 0.0f,
     0x1.8d3b4cp-89f, 0x1.5fb06ep-75f, 0.0f, 0x1.03cdd2p-90f, 0x1.87369p-81f,
     0x1.a4cc42p-91f, 0x1.966b9ep-23f, 0x1.05184cp-95f, 0.0f, 0x1.226bd6p-78f, 0.0f,
     0x1.6a4696p-5f, 0x1.2868aep-25f, 0x1.b45fa4p-41f, 0.0f, 0.0f, 0x1.4cd29ap-32f,
     0x1.019b06p-82f, 0.0f, 0x1.b4eb9cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25b066p-86f,
     0.0f, 0x1.292adcp-52f, 0.0f, 0x1.1d8d54p-7f, 0x1.4781e4p-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.adfbap-3f, 0.0f, 0x1.91b33cp-8f, 0.0f, 0x1.0a01f6p-93f,
     0x1.bd2c36p-87f, 0.0f, 0.0f, 0x1.b2dd46p-44f, 0.0f, 0.0f, 0.0f, 0x1.9fd98cp-29f,
     0x1.77184ap-3f, 0x1.c97d82p-90f, 0x1.71c03ap-57f, 0.0f, 0x1.f003eap-82f,
     0x1.9e6064p-6f, 0x1.357b24p-121f, 0x1.fe1a7p-97f, 0x1.424a28p-71f,
     0x1.d05eap-34f, 0x1.cbd14ap-31f, 0.0f, 0.0f, 0x1.f6f36cp-56f, 0x1.d0a064p-52f,
     0.0f, 0x1.710c0cp-79f, 0.0f, 0.0f, 0.0f, 0x1.3643a2p-64f, 0.0f, 0x1.01b2b2p-35f,
     0.0f, 0.0f, 0x1.9a94ecp-49f, 0.0f, 0x1.8459a2p-61f, 0x1.d8d604p-36f, 0.0f,
     0x1.e541a4p-19f, 0.0f, 0x1.d2ac7ep-73f, 0.0f, 0x1.d7ffcap-93f, 0.0f,
     0x1.a94784p-13f, 0.0f, 0x1.52ce56p-93f, 0x1.96eb04p-81f, 0.0f, 0.0f,
     0x1.66bebcp-111f, 0x1.1f71fcp-124f, 0.0f, 0x1.c00146p-73f, 0.0f, 0x1.03ac48p-33f,
     0x1.78a47ep-38f, 0.0f, 0.0f, 0.0f, 0x1.6204ap-18f, 0x1.76e574p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.89b4bcp-54f, 0x1.df8e68p-27f, 0.0f, 0.0f, 0x1.b3ddacp-126f,
     0x1.9b2ef6p-52f, 0.0f, 0x1.04b85p-46f, 0.0f, 0x1.8a8d9p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bde6f8p-124f,
     0x1.d546e4p-99f, 0.0f, 0x1.2cff6cp-16f, 0x1.c1d53ep-9f, 0.0f, 0x1.57a38cp-108f,
     0.0f, 0x1.f415a6p-29f, 0x1.c5f67p-117f, 0.0f, 0.0f, 0x1.191f3cp-22f, 0.0f,
     0x1.eb24fep-63f, 0.0f, 0.0f, 0x1.9ea64p-74f, 0x1.e02da2p-68f, 0.0f,
     0x1.492bf4p-11f, 0x1.3e271ep-41f, 0x1.9baf28p-106f, 0.0f, 0.0f, 0.0f,
     0x1.447ed6p-72f, 0x1.d854eap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b18112p-49f, 0.0f,
     0x1.700004p-78f, 0.0f, 0x1.71a50ep-43f, 0x1.7c01c4p-65f, 0x1.a1d36ap-107f, 0.0f,
     0x1.08202p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31e8cap-109f, 0.0f, 0x1.158e12p-12f,
     0.0f, 0x1.45ae5p-37f, 0x1.1a9032p-37f, 0x1.ca94aep-97f, 0.0f, 0x1.dfb374p-111f,
     0.0f, 0x1.1b5bb8p-115f, 0x1.b9264ep-76f, 0x1.807362p-107f, 0x1.547ef2p-58f,
     0x1.b41d4ap-112f, 0.0f, 0.0f, 0.0f, 0x1.386d44p-107f, 0.0f, 0x1.fa4da4p-105f,
     0.0f, 0x1.47093cp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47cef4p-120f, 0.0f, 0x1.7f2ccap-36f, 0.0f, 0x1.867646p-95f, 0x1.12332p-18f,
     0x1.2a1bf8p-34f, 0.0f, 0.0f, 0x1.71274ap-107f, 0x1.1f270ap-21f, 0.0f, 0.0f,
     0x1.a68d38p-90f, 0x1.2ddacap-6f, 0.0f, 0.0f, 0.0f, 0x1.9bcb64p-109f, 0.0f,
     0x1.408074p-71f, 0x1.140ceep-115f, 0x1.dfb9cap-39f, 0x1.d32252p-12f,
     0x1.5ea3p-95f, 0.0f, 0.0f, 0.0f, 0x1.40c29ep-50f, 0x1.7f18b6p-91f,
     0x1.f11a6cp-58f, 0.0f, 0x1.42c6c8p-98f, 0x1.d252aep-62f, 0.0f, 0x1.3857dap-27f,
     0x1.65f904p-30f, 0.0f, 0.0f, 0x1.56699ep-76f, 0.0f, 0x1.124aa8p-48f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.f18de2p-126f, 0.0f, 0.0f, 0x1.bb2e7cp-89f, 0.0f,
     0x1.452a1cp-97f, 0.0f, 0x1.27de0ap-37f, 0.0f, 0.0f, 0x1.6ed3p-99f,
     0x1.0c29ep-30f, 0x1.d84a14p-64f, 0x1.5e0dbep-53f, 0.0f, 0x1.3c3192p-90f,
     0x1.e12e4ep-116f, 0.0f, 0.0f, 0x1.63a8e6p-110f, 0.0f, 0.0f, 0x1.21f3b8p-108f,
     0x1.7ab75p-110f, 0x1.7b045cp-42f, 0.0f, 0x1.076d56p-60f, 0.0f, 0.0f, 0.0f,
     0x1.47be7cp-53f, 0.0f, 0.0f, 0x1.777b1ep-22f, 0x1.cb8ac4p-88f, 0.0f, 0.0f,
     0x1.0950fcp-1f, 0.0f, 0x1.5f2ad6p-97f, 0.0f, 0x1.b7251ap-86f, 0.0f, 0.0f, 0.0f,
     0x1.593bb4p-45f, 0x1.adc2dap-3f, 0.0f, 0.0f, 0x1.d640e4p-48f, 0.0f,
     0x1.23d85cp-24f, 0x1.37bb1p-43f, 0x1.54046ep-117f, 0.0f, 0x1.43ac08p-62f, 0.0f,
     0.0f, 0x1.a6742cp-35f, 0x1.0beaccp-63f, 0x1.989a9ap-106f, 0x1.e9566cp-122f, 0.0f,
     0.0f, 0x1.e5cfecp-68f, 0.0f, 0x1.f22148p-84f, 0x1.6e09eep-52f, 0.0f, 0.0f,
     0x1.94b134p-28f, 0.0f, 0.0f, 0x1.6c711ap-91f, 0.0f, 0x1.66e8bap-50f,
     0x1.b621e6p-110f, 0x1.0ed45p-102f, 0.0f, 0x1.0bb96ep-51f, 0.0f, 0x1.e0bc64p-92f,
     0.0f, 0x1.0e89c2p-19f, 0x1.83bd64p-109f, 0x1.2642ep-94f, 0x1.d1a8b8p-122f, 0.0f,
     0.0f, 0x1.ea6e78p-93f, 0x1.299fa6p-73f, 0x1.54b31ap-97f, 0x1.75e8fap-45f, 0.0f,
     0x1.eda694p-15f, 0.0f, 0x1.0ceb7ap-51f, 0x1.4053d8p-7f, 0x1.b360b2p-99f,
     0x1.ec2016p-50f, 0x1.632596p-7f, 0.0f, 0x1.2f0af4p-11f, 0.0f, 0x1.c1b128p-27f,
     0x1.209a46p-66f, 0x1.a10982p-93f, 0x1.204bacp-54f, 0x1.13608cp-76f, 0.0f,
     0x1.b39f42p-80f, 0.0f, 0.0f, 0x1.c8849ep-66f, 0.0f, 0x1.4044bp-40f, 0.0f,
     0x1.3f3f6ap-67f, 0x1.f48e54p-116f, 0x1.b5bd4p-95f, 0x1.7e6918p-26f,
     0x1.276936p-97f, 0x1.a722e2p-50f, 0x1.27c222p-15f, 0.0f, 0x1.44052ep-6f,
     0x1.59af7p-87f, 0x1.d1612cp-124f, 0x1.00f936p-48f, 0x1.91159ap-9f,
     0x1.4b99eep-78f, 0.0f, 0.0f, 0x1.161956p-52f, 0.0f, 0.0f, 0.0f, 0x1.e7ca46p-94f,
     0x1.11c56p-63f, 0x1.ad93dp-110f, 0x1.b6936ap-100f, 0x1.66e916p-96f, 0.0f, 0.0f,
     0x1.21a07p-88f, 0x1.ea551cp-53f, 0.0f, 0x1.ee68dap-14f, 0x1.9f2684p-42f, 0.0f,
     0x1.bcd9b8p-95f, 0.0f, 0x1.1a1e7p-65f, 0.0f, 0.0f, 0x1.4dbcep-108f, 0.0f,
     0x1.164ad8p-36f, 0.0f, 0.0f, 0x1.f00858p-55f, 0x1.7f08c8p-40f, 0x1.931d9p-73f,
     0x1.d2e19ap-92f, 0.0f, 0x1.e81e5p-83f, 0.0f, 0x1.b9178ap-3f, 0x1.181ed4p-19f,
     0x1.bd15cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56c16ep-19f, 0x1.978be8p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac31fep-72f, 0x1.267e8p-91f, 0x1.c96576p-97f,
     0x1.6aa0e6p-94f, 0.0f, 0.0f, 0.0f, 0x1.07393ap-114f, 0x1.f568b6p-25f,
     0x1.279904p-124f, 0.0f, 0x1.cf800ep-70f, 0x1.90d25ap-91f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_cosf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_cosf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_cosf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
