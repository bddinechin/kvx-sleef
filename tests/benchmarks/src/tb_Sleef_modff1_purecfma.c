/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modff1_purecfma.c --function Sleef_modff1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --precision sleef_sf2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0x1.1b9becp-103f, 0.0f, 0.0f, 0x1.9969bap-90f, 0x1.7474d8p-38f,
     0x1.cd9bcap-116f, 0x1.55d7a2p-110f, 0x1.cd2cc2p-102f, 0x1.f64e4ap-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8e38ep-112f, 0.0f, 0x1.ac605p-30f,
     0x1.c483ccp-84f, 0.0f, 0.0f, 0.0f, 0x1.a0751ap-105f, 0.0f, 0x1.f2de4p-7f, 0.0f,
     0.0f, 0.0f, 0x1.0456a8p-111f, 0.0f, 0x1.eb88aep-26f, 0.0f, 0x1.a8b66ep-22f,
     0x1.f55f02p-60f, 0.0f, 0.0f, 0.0f, 0x1.a4d2b2p-109f, 0.0f, 0.0f, 0.0f,
     0x1.b086a6p-73f, 0x1.d09506p-82f, 0.0f, 0x1.7ee7b2p-32f, 0x1.c2266p-49f, 0.0f,
     0x1.43e8ap-42f, 0x1.06284ap-114f, 0x1.b7d042p-86f, 0x1.d866fcp-97f, 0.0f,
     0x1.ab48e2p-52f, 0x1.fd2fc2p-78f, 0.0f, 0x1.569954p-76f, 0x1.eaff0ep-86f, 0.0f,
     0.0f, 0x1.dc17c6p-122f, 0.0f, 0x1.fcbd8ep-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08865p-95f, 0.0f, 0.0f, 0x1.ae642p-11f, 0x1.f61dd2p-100f, 0.0f,
     0x1.b565bcp-115f, 0.0f, 0.0f, 0.0f, 0x1.828a04p-29f, 0x1.e59c64p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0f5ba6p-113f, 0x1.ee1de6p-46f, 0.0f, 0x1.8214c2p-126f,
     0x1.71219ep-122f, 0x1.cab1a2p-4f, 0x1.0458cp-21f, 0x1.6e259cp-11f,
     0x1.816aa2p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cf1dcp-56f, 0x1.133c4p-104f,
     0x1.5c9ab4p-5f, 0x1.696138p-67f, 0.0f, 0x1.bdd18ep-31f, 0.0f, 0x1.59d3fep-27f,
     0.0f, 0.0f, 0.0f, 0x1.838878p-38f, 0.0f, 0.0f, 0x1.8d9fa8p-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.552a6cp-40f, 0x1.747992p-54f, 0.0f, 0.0f, 0.0f,
     0x1.1c3b32p-86f, 0x1.68d6ccp-55f, 0.0f, 0.0f, 0x1p0f, 0x1.abde5ep-40f, 0.0f,
     0x1p0f, 0.0f, 0x1.a75948p-37f, 0.0f, 0.0f, 0.0f, 0x1.e70a84p-123f, 0.0f,
     0x1.b55e4ap-7f, 0x1.fbe02ep-95f, 0.0f, 0.0f, 0x1.d3f33ap-73f, 0x1.9608c2p-82f,
     0x1.bcdf32p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.094fc8p-84f, 0x1.4f3fd4p-34f,
     0.0f, 0x1.b2e3a2p-76f, 0x1.be017ap-68f, 0x1.22fe2ap-35f, 0.0f, 0x1.d49cbp-63f,
     0x1.f40ebep-118f, 0x1.955e9ap-65f, 0x1.7f737ep-108f, 0x1.5d96a2p-122f,
     0x1.8efb42p-18f, 0.0f, 0x1.533516p-37f, 0.0f, 0x1.04dd28p-53f, 0x1.2f03bep-43f,
     0x1.c23926p-57f, 0.0f, 0x1.6e46fap-12f, 0.0f, 0x1.0b6824p-35f, 0.0f, 0.0f, 0.0f,
     0x1.1edad4p-122f, 0x1.5881c8p-34f, 0.0f, 0.0f, 0x1.ef4e9p-22f, 0x1.426df2p-65f,
     0x1.86645ep-92f, 0x1.a47ee8p-12f, 0x1.fe9d52p-84f, 0x1.5db3a6p-23f,
     0x1.50528ep-52f, 0.0f, 0.0f, 0x1.0d1108p-10f, 0.0f, 0.0f, 0x1.7ec02ap-15f,
     0x1.c55b96p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18077ap-18f, 0.0f, 0x1.67c8a8p-89f,
     0x1.3ac956p-95f, 0x1.eb7266p-27f, 0x1.e88148p-54f, 0.0f, 0x1.2806bcp-17f,
     0x1.e04d98p-37f, 0.0f, 0x1.a7ede6p-123f, 0x1.92f2cap-92f, 0.0f, 0.0f,
     0x1.3c52fp-12f, 0x1.551ab6p-66f, 0.0f, 0.0f, 0x1.7d504ap-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b3a43p-42f, 0.0f, 0.0f, 0.0f, 0x1.010c6ap-10f, 0x1.37aae2p-38f,
     0.0f, 0x1.9e465p-115f, 0.0f, 0x1.142ae6p-125f, 0x1.bb7ea8p-111f, 0x1.e5c20ep-8f,
     0.0f, 0.0f, 0x1.dbfc66p-39f, 0x1.a46a48p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.168aeep-45f, 0x1.09565cp-100f, 0x1.cb60fep-1f, 0.0f, 0x1.8f94eep-88f,
     0x1.70bf2p-67f, 0.0f, 0x1.cd05f8p-122f, 0x1.2c80a6p-62f, 0x1.d333b6p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1c99fap-84f, 0x1.3128aap-79f, 0.0f, 0x1.3197b8p-14f,
     0x1.6184b4p-33f, 0.0f, 0x1.d56508p-49f, 0.0f, 0.0f, 0x1.1fe70ap-11f,
     0x1.01bba6p-64f, 0.0f, 0.0f, 0x1.62e736p-88f, 0.0f, 0x1.53e1dep-86f, 0.0f,
     0x1.235ccep-87f, 0.0f, 0.0f, 0x1.e2e93ep-23f, 0.0f, 0x1.9b1418p-40f,
     0x1.df3658p-76f, 0x1.3fc3e4p-60f, 0x1.8ad842p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fbefap-112f, 0.0f, 0x1.d22394p-40f, 0.0f, 0x1.e8cab8p-48f, 0x1.27226cp-55f,
     0x1.7daf9ap-113f, 0.0f, 0.0f, 0x1.20a5ccp-108f, 0x1.d77e1ep-64f, 0x1.6acec4p-33f,
     0.0f, 0x1.4ae3p-104f, 0.0f, 0x1.5ef31ep-122f, 0x1.b51c1ap-109f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3a7418p-119f, 0.0f, 0x1.50bde6p-18f, 0.0f, 0.0f,
     0x1.06f49ap-118f, 0.0f, 0.0f, 0x1.9e0516p-55f, 0.0f, 0.0f, 0.0f,
     0x1.32c1dap-113f, 0x1.297c28p-106f, 0x1.4f5b4p-15f, 0x1.a72284p-91f, 0.0f, 0.0f,
     0x1.76a772p-120f, 0.0f, 0x1.83bdb4p-62f, 0x1.916952p-125f, 0x1.51392cp-70f, 0.0f,
     0x1.b1c136p-62f, 0.0f, 0x1.a035bap-105f, 0.0f, 0.0f, 0x1.1460dp-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.441a2ep-108f, 0.0f, 0x1.5fa444p-111f, 0.0f, 0.0f,
     0x1.5608e4p-86f, 0.0f, 0x1.279758p-77f, 0.0f, 0.0f, 0x1.94cb92p-18f, 0.0f,
     0x1.b0bfp-126f, 0x1.17dadap-39f, 0x1.c7b9dp-46f, 0.0f, 0.0f, 0x1.13ccf6p-56f,
     0x1.9e03a2p-55f, 0x1.42a0c8p-59f, 0.0f, 0x1.4e95e8p-21f, 0.0f, 0x1.14345ep-20f,
     0x1.9ec1aep-73f, 0.0f, 0x1.f41ccep-26f, 0.0f, 0.0f, 0.0f, 0x1.97abcep-119f, 0.0f,
     0x1.6780b6p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.9161aep-16f, 0.0f,
     0x1.706f7ap-62f, 0.0f, 0x1.f61484p-23f, 0x1.7275cp-30f, 0x1p0f, 0.0f,
     0x1.288d38p-104f, 0x1.3541d8p-10f, 0x1.dd10dp-111f, 0x1.485dbep-93f,
     0x1.0f1db4p-105f, 0x1.c86d7ep-6f, 0x1.053c0cp-97f, 0.0f, 0x1.e16486p-116f,
     0x1.6e8ca6p-37f, 0.0f, 0.0f, 0x1.4d7d9cp-55f, 0x1.3589fcp-113f, 0x1.d6ff84p-80f,
     0x1.98a8bap-2f, 0x1.6b039p-14f, 0x1.0e510ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7de6b4p-93f, 0.0f, 0.0f, 0x1.375a5p-27f, 0.0f, 0.0f, 0.0f, 0x1.e2bb4p-13f,
     0.0f, 0x1p0f, 0x1.f3d082p-66f, 0.0f, 0.0f, 0x1.dd76bep-10f, 0.0f,
     0x1.4530aep-114f, 0x1.598694p-60f, 0x1.145c32p-25f, 0x1.b6fedap-30f,
     0x1.bcbf36p-2f, 0x1.a493a8p-126f, 0x1.0d89ap-28f, 0x1.fb2f8ap-123f,
     0x1.65609cp-31f, 0.0f, 0.0f, 0x1.bbc68ap-47f, 0.0f, 0x1.153d86p-113f, 0.0f,
     0x1p0f, 0x1.70a116p-29f, 0x1.c43e02p-14f, 0x1.04da4ep-64f, 0.0f, 0x1.233ac8p-55f,
     0.0f, 0x1.cdc64cp-118f, 0.0f, 0x1.a58c8cp-118f, 0.0f, 0.0f, 0x1.c48b2ep-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecc482p-123f, 0x1.ec0268p-4f, 0x1.12769ep-109f,
     0x1.5123b8p-110f, 0x1.e0e374p-52f, 0x1.c0f394p-15f, 0x1.d05aa6p-59f,
     0x1.87d964p-125f, 0.0f, 0x1.b6bddcp-70f, 0x1.b426dap-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.75273ep-83f, 0.0f, 0x1.004656p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1ed6fep-14f, 0.0f, 0x1.880426p-122f, 0x1.a82174p-126f,
     0x1.73023cp-104f, 0x1.1ac016p-81f, 0x1.dfc6d8p-12f, 0.0f, 0x1.a40fd4p-120f, 0.0f,
     0.0f, 0.0f, 0x1.0400a4p-110f, 0.0f, 0.0f, 0.0f, 0x1.d5a342p-90f, 0.0f, 0.0f,
     0.0f, 0x1.e95478p-86f, 0.0f, 0.0f, 0x1.8a37ap-106f, 0x1.26f3f8p-44f, 0.0f, 0.0f,
     0.0f, 0x1.058eb8p-99f, 0.0f, 0x1.7ef148p-59f, 0x1.243f26p-110f, 0.0f, 0.0f,
     0x1.a7a2f6p-101f, 0.0f, 0x1.766814p-111f, 0.0f, 0x1.a6b83ep-3f, 0.0f, 0.0f,
     0x1.34b4bp-58f, 0x1.52d04p-23f, 0x1.b0c3eep-43f, 0x1.20c49ap-74f, 0x1.724edcp-3f,
     0x1.c38096p-33f, 0.0f, 0x1.d937bep-96f, 0x1.70abc8p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7b916p-46f, 0.0f, 0x1.7c80d6p-114f, 0x1.c0a228p-17f, 0.0f, 0.0f,
     0x1.160e2p-83f, 0x1.8f56e2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e8b62p-104f,
     0.0f, 0x1.db8174p-12f, 0x1.423788p-121f, 0.0f, 0x1.5d705p-23f, 0x1.50c79p-126f,
     0x1.e521a4p-67f, 0x1.7b2afep-125f, 0x1.16e688p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab5edap-52f, 0x1.01f6c4p-73f, 0.0f, 0.0f, 0.0f,
     0x1.dc0facp-38f, 0.0f, 0x1.b08e4ap-33f, 0.0f, 0x1.27c08ap-97f, 0.0f,
     0x1.ed0854p-40f, 0x1.356f38p-88f, 0x1.695c6p-6f, 0.0f, 0.0f, 0.0f,
     0x1.d55772p-79f, 0x1.c913fap-3f, 0.0f, 0x1.24c1cap-87f, 0.0f, 0x1.3ef054p-2f,
     0.0f, 0x1.5ded96p-50f, 0x1.e04142p-64f, 0x1.168528p-24f, 0x1.cac246p-12f,
     0x1.4b6b08p-70f, 0x1.723222p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b02bbep-41f, 0.0f, 0x1.f56bdcp-70f, 0.0f, 0x1.1b699ap-52f, 0x1.38aa0cp-56f,
     0x1.b0eeb8p-51f, 0x1.ccee1cp-11f, 0x1.2daffep-62f, 0x1.e870c2p-11f, 0.0f,
     0x1.3c0572p-41f, 0x1.7aafdcp-7f, 0.0f, 0x1.f169aap-46f, 0x1.ce539p-17f, 0.0f,
     0x1.130f88p-31f, 0.0f, 0x1.95cad2p-111f, 0.0f, 0x1.1f906ap-43f, 0.0f,
     0x1.6e021p-107f, 0.0f, 0x1.8d36d6p-89f, 0x1.f6dfe4p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.883c24p-74f, 0x1.9773fp-98f, 0.0f, 0x1.7da7d6p-102f, 0x1.c50092p-117f,
     0x1.96ad64p-42f, 0x1.64cc86p-49f, 0.0f, 0.0f, 0x1.212176p-118f, 0.0f, 0.0f, 0.0f,
     0x1.ab934ep-39f, 0x1.09f6bp-84f, 0x1.697762p-119f, 0x1.654d68p-100f, 0.0f, 0.0f,
     0x1.4e401ep-79f, 0x1p0f, 0x1.a680dep-14f, 0x1.7c978ap-10f, 0.0f, 0x1.f5c888p-59f,
     0.0f, 0x1.89260ap-109f, 0.0f, 0.0f, 0.0f, 0x1.6a8d56p-26f, 0.0f, 0x1.4e3118p-29f,
     0.0f, 0x1.df3af8p-22f, 0.0f, 0x1.a132c8p-88f, 0x1.f9982p-60f, 0x1.8871b2p-48f,
     0x1.3f9b1p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.086a02p-34f, 0.0f, 0x1.50092ap-46f,
     0.0f, 0x1.8b387p-65f, 0.0f, 0x1.e3774p-105f, 0x1.7e57p-53f, 0.0f, 0.0f, 0.0f,
     0x1.e81a4p-74f, 0x1.ae178ap-97f, 0x1.3752acp-23f, 0.0f, 0x1.7812f4p-40f, 0.0f,
     0.0f, 0.0f, 0x1.c7d258p-126f, 0x1.f419a6p-77f, 0x1.e5abbp-75f, 0.0f,
     0x1.34b59ep-122f, 0x1.c5b0ep-61f, 0x1.43e10cp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d53ee2p-22f, 0.0f, 0x1.b3af4p-24f, 0x1.973d2p-55f, 0x1.c95596p-122f, 0.0f,
     0x1.d54f16p-26f, 0x1.a1ca9cp-22f, 0x1.5d90bcp-57f, 0x1.174a1ap-101f,
     0x1.86a22ep-43f, 0.0f, 0x1.3d5e7cp-63f, 0x1.56ac16p-72f, 0.0f, 0x1.199628p-11f,
     0x1.9389e2p-57f, 0x1.908c8cp-24f, 0.0f, 0x1.885f7ep-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7a17c2p-17f, 0x1.3e03b8p-20f, 0.0f, 0x1.cbb028p-30f,
     0x1.c7898ap-103f, 0x1.6015bcp-53f, 0.0f, 0.0f, 0x1.1ac122p-81f, 0x1.c209d6p-12f,
     0x1.4027e4p-26f, 0.0f, 0x1.9ad526p-99f, 0x1.ca086ap-110f, 0.0f, 0.0f,
     0x1.3f789ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2394p-9f, 0x1.5bc51p-70f,
     0x1.77bbc4p-96f, 0x1.2a1ef6p-95f, 0.0f, 0x1.f3c4b4p-120f, 0x1.fb050ap-58f,
     0x1.201338p-93f, 0.0f, 0.0f, 0x1.afb206p-62f, 0x1.64b8f2p-85f, 0.0f,
     0x1.b80074p-81f, 0.0f, 0x1.876892p-6f, 0x1.8386a6p-119f, 0.0f, 0.0f,
     0x1.5af6fep-60f, 0.0f, 0x1.e28c7p-111f, 0x1.35af5ep-28f, 0x1.f8cd22p-15f,
     0x1.66da54p-112f, 0.0f, 0.0f, 0x1.e844c6p-94f, 0x1.709c0ap-112f, 0x1.74952cp-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67af9ep-76f, 0x1.9da3ep-71f, 0x1.07278ep-25f,
     0x1.d160ccp-69f, 0x1.acb8acp-96f, 0.0f, 0x1.fc7e76p-5f, 0x1.ac2d9ep-87f, 0.0f,
     0.0f, 0x1.4699fep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.188c0ap-54f,
     0x1.3cd0b4p-117f, 0x1.49a2d8p-107f, 0x1.a45a14p-29f, 0.0f, 0.0f, 0x1.6240c2p-17f,
     0x1.fbe0a8p-56f, 0x1.e6759ap-104f, 0.0f, 0x1.ccb648p-91f, 0.0f, 0x1.2cb56p-93f,
     0x1.2ab1aep-33f, 0x1.d28d72p-67f, 0x1.81d17p-87f, 0x1.23bba4p-63f, 0.0f, 0.0f,
     0x1.c81948p-12f, 0x1.d1efcep-123f, 0x1.412562p-22f, 0x1.009a3cp-45f,
     0x1.f8c502p-113f, 0.0f, 0x1.700958p-67f, 0.0f, 0x1.f8e676p-3f, 0.0f,
     0x1.d103c8p-36f, 0x1.2a6c8ap-15f, 0x1.0b57f4p-43f, 0x1.8ef674p-100f,
     0x1.57739ap-117f, 0.0f, 0x1.ef99bp-30f, 0x1.8867ep-4f, 0x1.d177bp-17f,
     0x1.957812p-4f, 0x1.8c21a6p-18f, 0x1.bb0bdep-71f, 0.0f, 0.0f, 0x1.dfdf34p-66f,
     0x1.bad842p-30f, 0.0f, 0.0f, 0.0f, 0x1.051d2p-122f, 0.0f, 0x1.5b05bcp-17f,
     0x1.6174ccp-23f, 0.0f, 0x1.d562ep-21f, 0.0f, 0x1.3c6652p-78f, 0x1.3827b6p-27f,
     0.0f, 0x1.e95ecep-106f, 0.0f, 0.0f, 0.0f, 0x1.e2fc1ap-3f, 0.0f, 0x1.4cda3cp-96f,
     0x1.00caf2p-105f, 0x1.9c1b66p-49f, 0.0f, 0.0f, 0.0f, 0x1.df5e1ep-15f, 0.0f, 0.0f,
     0.0f, 0x1.c69a9ep-59f, 0.0f, 0.0f, 0x1.e743fp-113f, 0x1.ad2068p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b0886p-114f, 0.0f, 0.0f, 0x1.d170a8p-102f, 0.0f,
     0x1.fb394cp-82f, 0.0f, 0x1.1817a4p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c386p-90f,
     0x1.d4738ap-58f, 0x1.135436p-50f, 0x1.d2c7c2p-112f, 0x1.5e3c5cp-83f, 0.0f,
     0x1.5ac4e6p-8f, 0x1.f5dd58p-85f, 0.0f, 0.0f, 0.0f, 0x1.d7fc78p-3f,
     0x1.9eb35ep-16f, 0x1.273d96p-68f, 0x1.1eefaep-30f, 0x1.964692p-95f,
     0x1.7c7162p-32f, 0.0f, 0x1.c8159cp-86f, 0x1.8b802cp-97f, 0.0f, 0.0f,
     0x1.4c6bf2p-68f, 0.0f, 0x1.a47404p-24f, 0.0f, 0x1.961fa2p-90f, 0.0f, 0.0f,
     0x1.b534bap-120f, 0.0f, 0.0f, 0x1.049c04p-91f, 0.0f, 0x1.e8a5c8p-73f,
     0x1.b09268p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a017a4p-94f, 0x1.1f6164p-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6fa6ap-42f, 0.0f, 0x1.42f436p-25f, 0x1.c4afc2p-103f, 0.0f,
     0x1.870d1p-29f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.111364p-42f, 0.0f,
     0x1.7e4c3ep-75f, 0.0f, 0.0f, 0.0f, 0x1.2c8916p-32f, 0.0f, 0.0f, 0x1.5418e4p-37f,
     0.0f, 0.0f, 0.0f, 0x1.88cae6p-12f, 0x1.3d819ap-17f, 0.0f, 0.0f, 0x1.4482b4p-42f,
     0.0f, 0.0f, 0x1.fa250ap-30f, 0x1.86026ep-80f, 0x1.a627ecp-44f, 0x1.6dfbap-123f,
     0x1.72b5b6p-125f, 0.0f, 0x1.64de92p-24f, 0.0f, 0x1.d16b7cp-82f, 0.0f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_modff1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_modff1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_modff1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
