/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_remainderf1_purecfma.c --function \
 *     Sleef_remainderf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.46487p-56f, 0x1.4c7d18p-37f, 0.0f, 0.0f, 0.0f,
     0x1.9af42p-26f, 0.0f, 0x1.42e5d2p-32f, 0.0f, 0.0f, 0x1.cbe3a4p-40f,
     0x1.fefa98p-27f, 0x1.9228a8p-93f, 0.0f, 0.0f, 0.0f, 0x1.40e1e2p-28f, 0.0f,
     0x1.244b9ap-96f, 0.0f, 0.0f, 0.0f, 0x1.fda6fep-111f, 0.0f, 0x1.cd7ea6p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e86dd2p-8f, 0x1.b7c9f2p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15fea8p-64f, 0x1.f5d5bap-98f, 0x1.4fb4c4p-124f, 0x1.5c203ep-107f,
     0x1.af38c2p-25f, 0x1.8b9d96p-49f, 0.0f, 0x1.cf3716p-119f, 0.0f, 0.0f, 0.0f,
     0x1.8ef29ap-91f, 0x1.049528p-110f, 0.0f, 0x1.cf38aap-42f, 0x1.ae9adp-81f, 0.0f,
     0x1.bfc6aap-17f, 0x1.440038p-20f, 0x1.1cea3ep-9f, 0.0f, 0x1.94edb2p-36f,
     0x1.bc1d68p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86811p-115f, 0.0f, 0.0f,
     0x1.388afep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f0faap-38f, 0.0f,
     0x1.368c7ep-113f, 0x1.7c9faap-112f, 0.0f, 0.0f, 0.0f, 0x1.dbdc82p-43f,
     0x1.4a25c2p-93f, 0.0f, 0.0f, 0x1.d17c7ep-9f, 0x1.873c72p-109f, 0x1.ed1bccp-3f,
     0x1.62b672p-35f, 0.0f, 0x1.5d98c6p-96f, 0x1.b13cd8p-5f, 0x1.04ae88p-14f, 0.0f,
     0x1.d58bc6p-86f, 0x1.2b4762p-96f, 0x1.9e7ddcp-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.de6a38p-124f, 0x1.ae73c4p-31f, 0.0f, 0x1.6d18bcp-60f, 0.0f, 0x1.f964p-69f,
     0.0f, 0x1.5f8608p-116f, 0x1.b1a7b2p-84f, 0.0f, 0.0f, 0.0f, 0x1.64265p-121f,
     0x1.b88774p-124f, 0x1.be6c72p-71f, 0x1.89f2b6p-98f, 0x1.64a412p-9f,
     0x1.71d722p-17f, 0.0f, 0x1.f2afe8p-44f, 0.0f, 0x1.fac72cp-51f, 0.0f, 0.0f,
     0x1.69a56cp-13f, 0.0f, 0.0f, 0x1.2c1fb6p-82f, 0x1.2bc89ep-97f, 0x1.534b38p-108f,
     0.0f, 0x1.65aa26p-102f, 0x1.b35fap-63f, 0x1.7b6bbap-18f, 0x1.f3839cp-19f,
     0x1.36ba8p-119f, 0.0f, 0x1.f7a138p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f075ep-68f,
     0x1.10716ep-2f, 0x1.9f4394p-117f, 0x1.9903b2p-42f, 0.0f, 0.0f, 0.0f,
     0x1.e4c88ep-85f, 0x1.44df44p-58f, 0x1.532588p-25f, 0.0f, 0x1.3d0de8p-97f,
     0x1.51294cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aec3cp-55f, 0x1.0065p-18f,
     0x1.5997e2p-102f, 0x1.87bd44p-92f, 0.0f, 0.0f, 0x1.7bc77p-53f, 0x1.2933e4p-51f,
     0x1.321e5p-67f, 0x1.76b47ep-17f, 0x1.3d16fp-122f, 0.0f, 0x1.f39e7ep-3f,
     0x1.1beefap-21f, 0x1.38a72ap-30f, 0x1.1b2f9ep-10f, 0x1.7d829ep-45f, 0.0f,
     0x1.beab5cp-114f, 0.0f, 0x1.85d7c8p-38f, 0.0f, 0x1.bb17d4p-90f, 0.0f,
     0x1.30d47ap-35f, 0x1.f21c8p-99f, 0x1.3e5d3ap-95f, 0x1.64d96ap-46f, 0.0f,
     0x1.be0f3ap-121f, 0x1.5b090ap-18f, 0x1.450716p-21f, 0.0f, 0.0f, 0x1.28e72ap-50f,
     0x1.7ef9d8p-108f, 0.0f, 0.0f, 0.0f, 0x1.caa2fp-44f, 0x1.19e0bep-34f,
     0x1.6ac536p-111f, 0x1.ae712ap-48f, 0x1.919194p-32f, 0x1.f058acp-33f,
     0x1.07cdd6p-20f, 0x1.fb67e8p-111f, 0x1.96818cp-75f, 0.0f, 0.0f, 0.0f,
     0x1.b9385ap-87f, 0.0f, 0x1.38e792p-14f, 0.0f, 0.0f, 0.0f, 0x1.564202p-97f, 0.0f,
     0.0f, 0x1.2bb4b6p-10f, 0.0f, 0x1.d066dcp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.367a6p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccde7ap-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e9a63cp-28f, 0.0f, 0.0f, 0.0f, 0x1.bc41c2p-57f,
     0x1.fc926cp-95f, 0x1.97ae7ap-14f, 0x1.1cce76p-14f, 0.0f, 0.0f, 0x1.f346e8p-114f,
     0x1.345efap-11f, 0x1.a6766cp-116f, 0x1.f42132p-76f, 0x1.f24bfep-41f,
     0x1.77235cp-45f, 0.0f, 0x1.aaf5d8p-58f, 0.0f, 0.0f, 0x1.cb9e86p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5be1fap-117f, 0.0f, 0x1.eba71p-98f, 0.0f,
     0x1.4fcaa6p-126f, 0.0f, 0.0f, 0.0f, 0x1.fa8d68p-109f, 0.0f, 0.0f, 0.0f,
     0x1.bdd098p-55f, 0x1.dd65c8p-63f, 0x1.fccb2cp-103f, 0.0f, 0x1.3c1e32p-36f,
     0x1.d31b1ep-2f, 0.0f, 0x1.af8958p-102f, 0x1.4e9b8ep-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a17de4p-89f, 0x1.484944p-77f, 0x1.7d9f52p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4468ccp-30f, 0x1.54db16p-80f, 0x1.1c0ce6p-9f, 0x1.e53048p-62f,
     0x1.a71d8ap-110f, 0.0f, 0x1.1b5ddap-2f, 0x1.0729ep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2dc7b2p-73f, 0.0f, 0.0f, 0x1.2938f8p-106f, 0x1.270a06p-47f,
     0x1.d3a38ep-112f, 0.0f, 0x1.5b282ap-39f, 0x1.240be4p-40f, 0x1.042b76p-25f,
     0x1.32ac26p-13f, 0x1.8181eep-12f, 0.0f, 0x1.76d788p-23f, 0.0f, 0.0f,
     0x1.4b226cp-121f, 0x1.8bdb1p-126f, 0x1.11688cp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.778e0cp-19f, 0x1.05700cp-7f, 0x1.5a9294p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3b45ap-18f, 0x1.c46fe2p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55be38p-20f, 0.0f, 0x1.1823f6p-20f, 0.0f, 0.0f, 0x1.1226ep-75f,
     0x1.d31562p-42f, 0.0f, 0x1.2bac5p-94f, 0x1.1ab57cp-37f, 0x1.71df0cp-74f, 0.0f,
     0x1.c97e76p-115f, 0x1.829316p-72f, 0x1.219a92p-59f, 0.0f, 0x1.055a0ep-105f, 0.0f,
     0x1.670ce4p-108f, 0.0f, 0x1.7a08b8p-111f, 0x1.7d3f9cp-40f, 0x1.b42882p-9f,
     0x1.ad00e6p-97f, 0.0f, 0.0f, 0x1.fdf5b2p-1f, 0x1.2281dcp-73f, 0.0f, 0.0f, 0.0f,
     0x1.207042p-77f, 0.0f, 0.0f, 0.0f, 0x1.96df52p-59f, 0.0f, 0x1.ead992p-118f,
     0x1.b57cf2p-103f, 0.0f, 0x1.754a7cp-64f, 0.0f, 0.0f, 0.0f, 0x1.a20094p-84f, 0.0f,
     0.0f, 0x1.540c82p-120f, 0x1.a11a02p-49f, 0.0f, 0x1.6d707p-75f, 0.0f, 0.0f, 0.0f,
     0x1.0f2a1ap-88f, 0.0f, 0x1.987852p-98f, 0x1.4e2e1ep-112f, 0x1.8071f8p-70f,
     0x1.a093a4p-25f, 0.0f, 0.0f, 0x1.6718cp-19f, 0x1.1f97dp-2f, 0.0f,
     0x1.242eb8p-42f, 0.0f, 0x1.2047p-56f, 0.0f, 0.0f, 0.0f, 0x1.e735c4p-126f, 0.0f,
     0.0f, 0x1.f0742ep-16f, 0x1.d8be4ep-56f, 0x1.81485cp-34f, 0x1.2bf17cp-76f, 0.0f,
     0x1.ffe412p-105f, 0.0f, 0x1.497dccp-76f, 0.0f, 0x1.aecf82p-23f, 0x1.709032p-8f,
     0.0f, 0x1.6932e4p-17f, 0x1.915eb8p-23f, 0x1.eeda48p-78f, 0x1.7a801cp-42f,
     0x1.4cb696p-93f, 0x1.f9c772p-70f, 0.0f, 0.0f, 0x1.f57d12p-5f, 0x1.943638p-41f,
     0.0f, 0x1.81760ep-83f, 0.0f, 0x1.039488p-63f, 0.0f, 0.0f, 0x1.02b0bep-8f,
     0x1.782b24p-17f, 0x1.1a1b06p-26f, 0x1.38eb64p-14f, 0x1.a940dap-93f,
     0x1.7342f4p-7f, 0.0f, 0x1.e6237cp-112f, 0.0f, 0x1.5862d8p-49f, 0.0f, 0.0f,
     0x1.59e24ap-41f, 0x1.5b47bp-119f, 0.0f, 0x1.d7d562p-58f, 0x1.85134p-121f,
     0x1.715362p-90f, 0x1.8ab942p-26f, 0.0f, 0x1.46ecc8p-24f, 0x1.902be2p-80f,
     0x1.a5ba4ep-111f, 0.0f, 0x1.e6924ep-8f, 0.0f, 0.0f, 0x1.b8649cp-40f, 0.0f, 0.0f,
     0.0f, 0x1.493036p-78f, 0x1.d1b22ap-112f, 0x1.b41e6cp-4f, 0.0f, 0.0f, 0.0f,
     0x1.a761fcp-18f, 0.0f, 0x1.0188c2p-73f, 0.0f, 0x1.82636ep-10f, 0x1.d38d74p-91f,
     0.0f, 0.0f, 0.0f, 0x1.2efcdep-121f, 0x1.0675bcp-33f, 0x1.cac1bep-61f,
     0x1.66cddep-106f, 0x1.28e472p-89f, 0.0f, 0.0f, 0.0f, 0x1.8c0908p-90f,
     0x1.ff7f62p-92f, 0.0f, 0.0f, 0x1.5271ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.327976p-76f, 0.0f, 0x1.be2b36p-50f, 0.0f, 0.0f, 0x1.f38abcp-13f,
     0.0f, 0.0f, 0.0f, 0x1.eeff2p-65f, 0.0f, 0x1.61e816p-40f, 0x1.9b357ap-85f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.83c79ep-113f, 0x1.ba503ap-28f, 0.0f, 0x1.5c0a12p-23f,
     0x1.928c22p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.905c22p-46f, 0.0f, 0x1.71be2ep-67f,
     0.0f, 0.0f, 0.0f, 0x1.f49c08p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8651f8p-22f, 0.0f,
     0.0f, 0.0f, 0x1.b86604p-63f, 0x1.27e95p-59f, 0x1.9b2b7ap-35f, 0x1.e68b0cp-66f,
     0.0f, 0.0f, 0x1.0997a2p-124f, 0x1.68a198p-108f, 0x1.c9ec4ap-17f, 0x1.6dbdf4p-48f,
     0.0f, 0.0f, 0.0f, 0x1.caf17ap-80f, 0.0f, 0.0f, 0x1.d961cp-109f, 0x1.8653dcp-75f,
     0.0f, 0x1.27e66p-41f, 0x1.c3af4p-80f, 0.0f, 0x1.69447ep-29f, 0.0f, 0.0f,
     0x1.8991bcp-65f, 0x1.67cd4cp-74f, 0.0f, 0x1p0f, 0.0f, 0x1.7b0044p-18f,
     0x1.09b94p-15f, 0.0f, 0.0f, 0.0f, 0x1.11b532p-20f, 0x1.2c5d54p-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.11e82ep-53f, 0.0f, 0.0f, 0x1.dc1aecp-57f, 0.0f, 0.0f,
     0x1.3b79dep-21f, 0x1.83e9dcp-72f, 0x1.c7282cp-121f, 0.0f, 0.0f, 0x1.f06832p-89f,
     0.0f, 0x1.789a08p-95f, 0x1.bb587ep-123f, 0.0f, 0x1.2999eep-15f, 0.0f, 0.0f,
     0x1.0e212cp-13f, 0.0f, 0x1.4483d8p-110f, 0x1.2431f2p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c7db4p-27f, 0x1.706536p-88f, 0.0f, 0x1.2cb2fap-89f, 0x1.76fa1ep-107f,
     0.0f, 0x1.fde16cp-27f, 0x1.daa998p-30f, 0x1.41c858p-43f, 0.0f, 0.0f,
     0x1.129836p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a333cap-80f,
     0x1.eb3e66p-70f, 0.0f, 0.0f, 0x1.4c2d2ep-75f, 0.0f, 0x1.5ff9bap-71f,
     0x1.ad3dbap-72f, 0.0f, 0x1.53169ap-101f, 0.0f, 0x1.cbbf32p-110f, 0.0f, 0.0f,
     0.0f, 0x1.88e016p-52f, 0.0f, 0x1.adf0d8p-121f, 0x1.51fe38p-61f, 0.0f,
     0x1.38dd2ep-63f, 0x1.cd55ep-80f, 0.0f, 0.0f, 0x1.e856dap-44f, 0x1.02ca48p-71f,
     0x1.fed1aep-55f, 0.0f, 0.0f, 0.0f, 0x1.7d4cdep-112f, 0x1.a4ac16p-112f, 0.0f,
     0.0f, 0.0f, 0x1.739902p-88f, 0.0f, 0x1.9d1544p-6f, 0x1.962daap-98f, 0.0f, 0.0f,
     0.0f, 0x1.08ee92p-5f, 0x1.8929b4p-37f, 0.0f, 0x1.be48dep-85f, 0.0f, 0.0f,
     0x1.8d54c2p-2f, 0x1.1de2a4p-112f, 0.0f, 0.0f, 0.0f, 0x1.6e9ff8p-124f, 0.0f,
     0x1.b4913ep-25f, 0.0f, 0x1.c90438p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd4ec8p-11f,
     0x1.cb44dcp-34f, 0.0f, 0x1.f4513ep-108f, 0.0f, 0x1.ee2fbcp-42f, 0.0f,
     0x1.031f94p-20f, 0.0f, 0x1.48c00ap-41f, 0.0f, 0.0f, 0.0f, 0x1.76d798p-57f,
     0x1.dc638ap-105f, 0x1.90e05p-17f, 0.0f, 0.0f, 0.0f, 0x1.7e0bb4p-49f,
     0x1.8726fap-36f, 0x1.b3de9ep-61f, 0.0f, 0x1.de355cp-28f, 0.0f, 0x1.6c4bacp-42f,
     0x1.4f587p-25f, 0.0f, 0.0f, 0x1.2b4ff6p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a61acp-54f, 0x1.30ad98p-125f, 0x1.55910ep-65f, 0.0f, 0.0f, 0x1.e7e144p-123f,
     0.0f, 0x1.f6c9acp-1f, 0.0f, 0.0f, 0x1.369c2ap-11f, 0x1.26af24p-51f,
     0x1.d89f42p-106f, 0x1.70fb5ap-98f, 0x1.34186p-34f, 0.0f, 0.0f, 0.0f,
     0x1.ab75fp-49f, 0x1.cd2672p-117f, 0x1.00389ap-40f, 0x1.c9ca16p-89f, 0.0f,
     0x1.eda14ap-73f, 0.0f, 0x1.90a11p-84f, 0x1.8ec83cp-105f, 0x1.6271f4p-121f,
     0x1.f7986p-126f, 0x1.5d4766p-68f, 0x1.e9fefap-10f, 0x1.d8226ap-27f,
     0x1.c615d8p-65f, 0.0f, 0x1.12406p-38f, 0x1.c192f6p-108f, 0x1.139566p-34f,
     0x1.b134a6p-36f, 0.0f, 0x1.b38992p-117f, 0x1.b799c6p-113f, 0.0f,
     0x1.2b8356p-109f, 0x1.054afp-35f, 0.0f, 0x1.46c5dp-94f, 0.0f, 0x1.b3c64ap-5f,
     0.0f, 0x1.de9c5cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c1d1cp-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f05dfcp-74f, 0.0f, 0.0f, 0x1.25830ep-95f, 0.0f,
     0x1.88003ep-41f, 0x1.2c41ep-51f, 0x1.57c0f6p-100f, 0x1.318374p-104f,
     0x1.b70c3ap-44f, 0x1.654704p-111f, 0x1.dd186ep-105f, 0.0f, 0x1.f3a10ep-36f, 0.0f,
     0x1.695ceep-46f, 0.0f, 0x1.94da9ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3263ap-50f, 0x1.01c362p-85f, 0x1.6e6afp-83f, 0x1.1d605cp-11f,
     0x1.ea499ep-19f, 0.0f, 0x1.939706p-32f, 0x1.a69704p-114f, 0.0f, 0x1.7d992ap-100f,
     0x1.861724p-42f, 0x1.49a946p-91f, 0.0f, 0x1.367d84p-13f, 0x1.7def16p-26f,
     0x1.16f38ep-95f, 0x1.1756acp-43f, 0x1.ef1b26p-80f, 0x1.fea558p-70f,
     0x1.0d821p-76f, 0x1.ec6db4p-118f, 0x1.4930ep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.93a7dep-125f, 0x1.3ccb6ep-26f, 0x1.4fe8dp-26f, 0.0f, 0.0f,
     0x1.bf8c88p-2f, 0x1.19baf6p-92f, 0.0f, 0.0f, 0x1.da7deap-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5f76p-122f, 0.0f, 0x1.f2bd06p-13f, 0.0f,
     0x1.14cdeep-92f, 0.0f, 0x1.090624p-5f, 0x1.df42aap-89f, 0.0f, 0x1.da1dep-16f,
     0.0f, 0.0f, 0x1.9656c4p-31f, 0x1.48c8e2p-60f, 0.0f, 0x1.93467p-41f, 0.0f, 0.0f,
     0x1.453eb2p-56f, 0.0f, 0.0f, 0.0f, 0x1.7f73e8p-96f, 0.0f, 0x1.0037dap-30f,
     0x1.f7585ap-59f, 0x1.6908c4p-78f, 0x1.e57908p-73f, 0.0f, 0x1.e8cdacp-67f, 0.0f,
     0x1.4a696ap-65f, 0x1.7f359ap-90f, 0x1.4fa87cp-102f, 0.0f, 0.0f, 0x1.0eda3p-28f,
     0x1.654eeep-75f, 0.0f, 0.0f, 0.0f, 0x1.afe6f8p-116f, 0.0f, 0.0f, 0x1.e77a24p-51f,
     0.0f, 0.0f, 0x1.f0eb6p-67f, 0.0f, 0.0f, 0x1.cd42d8p-126f, 0.0f, 0x1.51d59ap-8f,
     0x1.ba2448p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40f798p-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.808254p-107f, 0x1.151d56p-2f,
     0x1.411112p-40f, 0x1.d67fbep-122f, 0.0f, 0x1.ac4a42p-55f, 0x1.d032cep-41f,
     0x1.9a6114p-25f, 0x1.3beb5p-122f, 0x1.a98e5p-1f, 0.0f, 0.0f, 0x1.ad0878p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccd4cep-82f, 0.0f, 0x1.3aa47p-33f, 0x1.eaef02p-83f,
     0x1.9448c4p-8f, 0.0f, 0.0f, 0x1.f3cb2ap-90f, 0.0f, 0x1.330fbap-54f,
     0x1.b142cep-99f, 0x1.61669cp-104f, 0.0f, 0.0f, 0x1.dbffcp-55f, 0.0f,
     0x1.da6c34p-29f, 0.0f, 0.0f, 0x1.5c5208p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0a408p-59f, 0x1.6ed5d4p-50f, 0x1.1e4202p-39f, 0.0f, 0x1.b32fd2p-62f,
     0x1.a7af74p-62f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.ace6dep-33f, 0.0f, 0x1.276314p-89f, 0x1.2b26p-30f, 0.0f, 0.0f, 0.0f,
     0x1.f32936p-30f, 0.0f, 0x1.991742p-105f, 0.0f, 0x1.7c479ep-4f, 0x1.b2db7ap-80f,
     0.0f, 0x1.317014p-3f, 0.0f, 0.0f, 0x1.5c91c8p-54f, 0x1.083558p-34f, 0.0f,
     0x1.be42f8p-32f, 0.0f, 0x1.21998cp-111f, 0.0f, 0x1.78e438p-114f, 0x1.9d381cp-26f,
     0x1.3fe738p-38f, 0.0f, 0x1.b6bb2ep-13f, 0x1.e30f58p-112f, 0.0f, 0x1.622da6p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76a982p-104f, 0.0f, 0x1.4cbe98p-40f,
     0x1.98ea2p-33f, 0x1.888154p-52f, 0.0f, 0.0f, 0.0f, 0x1.a0e732p-85f, 0.0f, 0.0f,
     0.0f, 0x1.f2c876p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2435cp-21f, 0.0f, 0.0f,
     0x1.56ff86p-107f, 0.0f, 0x1.838b0cp-122f, 0x1.bfbfd6p-115f, 0x1.cece8cp-106f,
     0.0f, 0.0f, 0x1.49e8fap-71f, 0x1.1cf8bcp-32f, 0x1.9c3702p-110f, 0.0f,
     0x1.2455d8p-121f, 0x1.6176dcp-24f, 0.0f, 0.0f, 0.0f, 0x1.724c88p-79f,
     0x1.59ea88p-54f, 0x1.00ad82p-76f, 0x1.519d88p-15f, 0.0f, 0.0f, 0x1.d16a78p-96f,
     0x1.f0ae3ap-93f, 0.0f, 0.0f, 0.0f, 0x1.2d2be6p-104f, 0.0f, 0.0f, 0x1.aced04p-44f,
     0x1.f032f6p-17f, 0.0f, 0x1.9ce104p-83f, 0x1.3f2a1cp-101f, 0x1.bc5e54p-99f,
     0x1.97b136p-90f, 0.0f, 0x1.e7f1d4p-6f, 0x1.8205c6p-97f, 0x1.1d65bcp-88f,
     0x1.c7abcep-35f, 0.0f, 0.0f, 0x1.0fb26cp-66f, 0x1.a3142ap-57f, 0.0f,
     0x1.1ab23p-32f, 0x1.712a98p-49f, 0x1.bd766p-55f, 0x1.4eb17ep-8f, 0.0f, 0.0f,
     0x1.28261ap-79f, 0x1.b756fcp-119f, 0.0f, 0x1.e189dep-6f, 0x1.6725e6p-73f, 0.0f,
     0.0f, 0x1.286446p-53f, 0x1.ef407p-34f, 0.0f, 0.0f, 0x1.54bfaap-125f,
     0x1.8d67dep-50f, 0x1.a123cep-76f, 0.0f, 0x1.e12e78p-31f, 0x1.732af8p-56f,
     0x1.089b28p-61f, 0x1.ade64cp-58f, 0x1.75328p-8f, 0x1.50112ep-58f, 0.0f,
     0x1.eac272p-4f, 0x1.cff31p-101f, 0.0f, 0.0f, 0x1.1390cep-27f, 0.0f,
     0x1.278a9ep-25f, 0.0f, 0.0f, 0.0f, 0x1.e9266p-76f, 0.0f, 0.0f, 0x1.b026fp-5f,
     0.0f, 0.0f, 0x1.d5a0acp-93f, 0.0f, 0.0f, 0.0f, 0x1.8c9cf4p-106f, 0x1.0ad39ep-67f,
     0x1.9adfcap-55f, 0x1.ae355cp-5f, 0.0f, 0x1.8c98d4p-82f, 0.0f, 0x1.bb3596p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd8c8p-116f, 0x1.0195d6p-101f, 0x1.39c68p-102f, 0.0f,
     0x1.429a86p-55f, 0x1.c4d808p-111f, 0x1.e040fap-113f, 0x1.bedefp-68f,
     0x1.c1a376p-86f, 0x1.20d914p-20f, 0.0f, 0.0f, 0x1.e8d28cp-120f, 0.0f, 0.0f, 0.0f,
     0x1.4ef2ccp-41f, 0x1.16578ep-73f, 0x1.4eaca2p-79f, 0x1.3d54cep-31f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.765d1cp-43f, 0.0f, 0x1.a7386cp-82f, 0x1.d4d1ep-19f,
     0x1.86b4c6p-64f, 0.0f, 0x1.39f9e2p-59f, 0x1.690d02p-45f, 0x1.215684p-115f, 0.0f,
     0.0f, 0x1.1fb6e4p-57f, 0x1.2fa9ep-82f, 0.0f, 0.0f, 0.0f, 0x1.00b11p-111f, 0.0f,
     0x1.da126ep-31f, 0x1.69e316p-20f, 0x1.6fd4cap-11f, 0x1.e104cep-125f,
     0x1.84663p-10f, 0x1.dea792p-93f, 0.0f, 0x1.04d088p-1f, 0.0f, 0.0f, 0.0f,
     0x1.fcf686p-74f, 0.0f, 0.0f, 0x1.db80b6p-88f, 0x1.ab0e28p-69f, 0x1.8bfc14p-120f,
     0.0f, 0.0f, 0x1.10f354p-116f, 0x1.0239b4p-4f, 0x1.b5740ep-3f, 0x1.a61282p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.edf594p-36f, 0.0f, 0.0f, 0.0f, 0x1.382e24p-11f, 0.0f,
     0x1.bbc8dap-6f, 0.0f, 0x1.649ccap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4096a4p-51f,
     0x1.577dfap-44f, 0x1.37fb6cp-31f, 0x1.0bac64p-21f, 0.0f, 0x1.80cafp-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef8f0ep-81f, 0x1.6c3bccp-114f, 0x1.627c6cp-90f, 0.0f,
     0x1.df7d8ep-97f, 0x1.644ca4p-53f, 0.0f, 0x1.def22cp-46f, 0x1.452282p-52f, 0.0f,
     0x1.619794p-10f, 0.0f, 0.0f, 0x1.f2fb1ap-82f, 0x1.78d30ap-90f, 0x1.7455d2p-14f,
     0.0f, 0.0f, 0x1.f31fb8p-17f, 0x1.8caf08p-29f, 0x1.b2bd4cp-19f, 0x1.775268p-123f,
     0x1.b47b78p-42f, 0x1.80aa2ep-6f, 0x1.70fd98p-71f, 0.0f, 0x1.f12986p-105f, 0.0f,
     0.0f, 0x1.31d2dep-21f, 0x1.7743cp-61f, 0x1.fb55c8p-45f, 0x1.ab856ap-18f,
     0x1.e0847cp-17f, 0.0f, 0.0f, 0x1.3a9812p-66f, 0x1.531ae4p-29f, 0.0f, 0.0f,
     0x1.d2723cp-100f, 0.0f, 0x1.1fed3cp-41f, 0.0f, 0x1.2cbbp-1f, 0.0f,
     0x1.a8549ap-123f, 0x1.5cb39cp-74f, 0.0f, 0x1.7ff912p-30f, 0x1.fd7d2ap-120f,
     0x1.e5cc9ep-50f, 0.0f, 0.0f, 0x1.76289ep-29f, 0x1.8d5446p-94f, 0x1.ff61cap-31f,
     0x1.7f5fe6p-123f, 0x1.294d6p-74f, 0.0f, 0.0f, 0x1.674698p-58f, 0x1.fa6656p-9f,
     0x1.6f827ap-80f, 0.0f, 0x1.1cfe98p-87f, 0x1.6e64d2p-11f, 0x1.0109fep-71f,
     0x1.cfefd8p-83f, 0.0f, 0.0f, 0x1.81c904p-38f, 0x1.eaed64p-25f, 0.0f,
     0x1.e15352p-24f, 0x1.212372p-119f, 0x1.484edcp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae54aap-51f, 0.0f, 0.0f, 0.0f, 0x1.60906p-109f, 0x1.882db2p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a57e6p-27f, 0x1.0fc0a6p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d451f8p-46f, 0x1.2936fp-81f, 0.0f, 0x1.016d7ap-41f,
     0x1.740b6p-52f, 0.0f, 0.0f, 0x1.8659aep-83f, 0.0f, 0.0f, 0x1.d217dp-34f,
     0x1.749b8cp-101f, 0x1.0ae608p-67f, 0.0f, 0x1.0cf70cp-59f, 0.0f, 0.0f,
     0x1.a1c438p-97f, 0.0f, 0.0f, 0.0f, 0x1.de5b98p-12f, 0.0f, 0x1.1e79cp-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.065adap-27f, 0x1.4d970cp-104f, 0.0f, 0x1.e6a9dep-73f,
     0x1.a5258ap-55f, 0.0f, 0x1.7e533ep-53f, 0.0f, 0.0f, 0x1.8f7a36p-14f, 0.0f, 0.0f,
     0.0f, 0x1.943698p-122f, 0x1.3324fcp-2f, 0x1.29cf78p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.948442p-35f, 0.0f, 0x1.3a821ep-116f, 0x1.3dc292p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f565ap-54f, 0x1.acbb26p-18f, 0x1.d0750ap-62f,
     0x1.53379ep-39f, 0.0f, 0.0f, 0x1.70ecc2p-100f, 0x1.dc9a56p-21f, 0x1.0fbf92p-9f,
     0x1.ae0a9cp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfab32p-33f, 0x1.f6612p-37f, 0.0f,
     0x1.3cb804p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83943cp-96f, 0.0f, 0.0f,
     0x1.c5e33ap-24f, 0.0f, 0.0f, 0x1.1c383cp-1f, 0.0f, 0x1.28f6f6p-11f,
     0x1.9dbb4p-27f, 0x1.3bd514p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ab0cep-104f,
     0x1.b74578p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.ffb3p-9f,
     0x1.c0b99p-55f, 0.0f, 0x1.096324p-9f, 0x1.1a77bp-15f, 0x1.8958c8p-115f, 0.0f,
     0x1.006d8ap-48f, 0x1.fe84ap-81f, 0.0f, 0.0f, 0x1.c46508p-104f, 0.0f,
     0x1.e4806ap-83f, 0.0f, 0.0f, 0x1.8e591ap-115f, 0x1.4d6ae6p-26f, 0.0f,
     0x1.651cd4p-104f, 0.0f, 0.0f, 0.0f, 0x1.8d5868p-22f, 0x1.b527aep-11f,
     0x1.34a05p-11f, 0.0f, 0.0f, 0x1.10a70cp-116f, 0x1.5ee8a8p-43f, 0.0f,
     0x1.0a012ep-91f, 0.0f, 0x1.e14b86p-24f, 0x1.5a344cp-111f, 0.0f, 0.0f,
     0x1.5eb7c6p-95f, 0.0f, 0.0f, 0x1.3b6c92p-5f, 0.0f, 0.0f, 0.0f, 0x1.2e62e2p-5f,
     0x1.3dfd5ap-113f, 0x1.8895a4p-72f, 0.0f, 0.0f, 0x1p0f, 0x1.104fd4p-40f, 0.0f,
     0x1.ef4ec6p-21f, 0.0f, 0.0f, 0x1.733d72p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.052b38p-25f, 0.0f, 0x1.d6b6b4p-10f, 0.0f, 0.0f, 0x1.a1a402p-113f, 0.0f, 0.0f,
     0.0f, 0x1.309e4cp-52f, 0.0f, 0.0f, 0x1.187fecp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc4aaap-7f, 0.0f, 0x1p0f, 0x1.5c404cp-44f, 0x1.5a363ep-85f, 0.0f,
     0x1.95a10ep-35f, 0x1.ab6376p-86f, 0x1.5470c6p-50f, 0.0f, 0x1.b6d8d2p-51f, 0.0f,
     0x1.9c5dbp-73f, 0x1.afa948p-25f, 0.0f, 0.0f, 0x1.17122ep-67f, 0.0f,
     0x1.3af558p-84f, 0.0f, 0.0f, 0x1.aa5ba4p-61f, 0x1.7874bcp-119f, 0.0f,
     0x1.9d6724p-3f, 0.0f, 0.0f, 0x1.f2bf24p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50212p-80f, 0.0f, 0.0f, 0x1.459cep-26f, 0.0f, 0x1.453c44p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4d1c66p-71f, 0.0f, 0.0f, 0.0f, 0x1.299b5cp-60f,
     0x1.1bc91ap-91f, 0x1.a7813cp-104f, 0.0f, 0x1.0b2e9cp-10f, 0.0f, 0.0f, 0.0f,
     0x1.2007cp-46f, 0.0f, 0x1.3eea84p-27f, 0x1.5488fcp-104f, 0x1.dcb46ap-84f, 0.0f,
     0x1.657c9p-60f, 0.0f, 0x1p0f, 0x1.846082p-31f, 0x1.264088p-38f, 0x1.403e88p-116f,
     0x1.f2756ap-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d19b4p-5f, 0x1.f4cd52p-16f,
     0.0f, 0x1.6cd0f4p-35f, 0x1.cbad08p-90f, 0.0f, 0x1.a5612ap-11f, 0x1.80898p-24f,
     0.0f, 0.0f, 0x1.5b146ep-117f, 0.0f, 0x1.d37f84p-120f, 0x1.a89df8p-85f, 0.0f,
     0.0f, 0x1.2fe6bep-48f, 0x1.e68fccp-77f, 0x1.95d6b8p-92f, 0x1.cec26cp-119f, 0.0f,
     0x1.491696p-110f, 0x1.3602aap-19f, 0.0f, 0.0f, 0x1.37481p-34f, 0.0f,
     0x1.08bc38p-73f, 0.0f, 0.0f, 0.0f, 0x1.ad43bp-57f, 0.0f, 0x1.ad94fp-99f,
     0x1.49769ap-10f, 0x1.b679d6p-104f, 0.0f, 0x1.c386f4p-57f, 0.0f, 0.0f,
     0x1.a6dfeap-27f, 0.0f, 0.0f, 0x1.bca3b6p-39f, 0x1.d691ap-52f, 0x1.5b54f6p-26f,
     0x1.3c68cep-46f, 0x1.76dc1p-81f, 0.0f, 0.0f, 0.0f, 0x1.d46742p-11f, 0.0f,
     0x1.6ea03cp-5f, 0.0f, 0x1.c0d59p-12f, 0.0f, 0.0f, 0x1.7bab4ep-3f,
     0x1.41ba9ap-28f, 0x1.e3be0cp-118f, 0.0f, 0x1.35935cp-112f, 0.0f, 0.0f,
     0x1.504fc8p-106f, 0.0f, 0.0f, 0x1.264c96p-73f, 0x1.c1774p-119f, 0x1.95c736p-13f,
     0x1.d45e9cp-112f, 0x1.eb8ae4p-9f, 0x1.26aef8p-56f, 0x1.aff49ep-104f, 0.0f,
     0x1.a1a67cp-46f, 0.0f, 0x1.76e424p-7f, 0.0f, 0.0f, 0x1.23331cp-123f,
     0x1.460a08p-43f, 0x1.6ca9bep-49f, 0.0f, 0.0f, 0x1.ad2998p-16f, 0x1.0b4cd2p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7832b4p-70f, 0x1.7b0ccap-24f, 0.0f, 0.0f,
     0x1.1e8aaep-46f, 0.0f, 0.0f, 0x1.096fcap-44f, 0x1.676784p-72f, 0x1.88d8b2p-65f,
     0.0f, 0x1.69e3fcp-9f, 0x1.e2fad2p-86f, 0x1.d828d4p-92f, 0.0f, 0x1.80c918p-91f,
     0x1.7495d2p-64f, 0.0f, 0.0f, 0x1.df5d88p-75f, 0x1.62feaep-64f, 0x1.83440ep-20f,
     0x1.ad7b06p-47f, 0.0f, 0.0f, 0x1.fdb12cp-66f, 0x1.c29636p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6b612cp-125f, 0.0f, 0x1.c84f9p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.579a1ap-106f, 0x1.d0f198p-36f, 0.0f, 0.0f, 0x1.14f346p-103f, 0x1.0c55ap-51f,
     0.0f, 0x1.eb377ap-124f, 0x1.40672ap-81f, 0.0f, 0.0f, 0.0f, 0x1.31d3e8p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6b43a8p-4f, 0.0f, 0.0f, 0x1.526cccp-39f, 0x1.cb7492p-44f,
     0.0f, 0x1.999514p-5f, 0x1.16bd32p-83f, 0x1.c93638p-68f, 0.0f, 0.0f,
     0x1.ec922ap-30f, 0x1.fe6bd2p-107f, 0x1.ce0de8p-88f, 0x1.844748p-123f,
     0x1.e35106p-14f, 0x1.1463ep-69f, 0x1.904bf2p-24f, 0x1.f3d83ep-92f,
     0x1.54dc52p-107f, 0x1.912b5p-97f, 0x1.d2223cp-19f, 0x1.45566p-110f,
     0x1.60768cp-99f, 0.0f, 0.0f, 0.0f, 0x1.c931fcp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.02c03ep-48f, 0x1.9594bp-66f, 0x1.766584p-86f, 0x1.5d8db4p-104f,
     0x1.abd5fep-75f, 0.0f, 0x1.b00092p-104f, 0.0f, 0x1.d7a34ap-75f, 0x1.6522a2p-60f,
     0x1.60557ap-23f, 0x1.31a1ap-12f, 0x1.6adcb4p-80f, 0x1.51aefcp-2f,
     0x1.84feb8p-95f, 0x1.94485p-48f, 0.0f, 0x1.491266p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f53ca4p-68f, 0x1.1c9c7p-116f, 0.0f, 0x1.f91b8ep-39f,
     0x1.eed36p-13f, 0x1.337b0ap-82f, 0x1.b68954p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.365fd2p-48f, 0.0f, 0x1.8a3956p-53f, 0x1.ddedcp-1f, 0.0f, 0.0f,
     0x1.db565ap-67f, 0.0f, 0.0f, 0.0f, 0x1.d9815ap-19f, 0x1.72a1e4p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2abecp-121f, 0x1.b29ebcp-114f, 0.0f, 0.0f, 0x1.1aa764p-67f,
     0x1.752d7p-72f, 0x1.467e12p-52f, 0x1.6c57p-110f, 0x1.1e96a2p-64f,
     0x1.d89558p-61f, 0x1.03481ap-27f, 0x1.45b91cp-48f, 0.0f, 0x1.bed7c6p-23f, 0.0f,
     0.0f, 0.0f, 0x1.b3ad2ep-101f, 0x1.599c74p-114f, 0.0f, 0x1.6b0de4p-31f, 0.0f,
     0.0f, 0x1.befd1p-30f, 0x1.28fbe2p-59f, 0.0f, 0x1.86aad2p-65f, 0x1.cd7acep-44f,
     0x1.5e5c22p-21f, 0x1.e0fde4p-58f, 0.0f, 0x1.563e92p-7f, 0.0f, 0.0f, 0.0f,
     0x1.ff08fap-119f, 0x1.5b7b72p-109f, 0.0f, 0.0f, 0x1.05a2a2p-44f, 0x1.c3cf42p-49f,
     0x1.08347ap-69f, 0x1.395b68p-19f, 0x1.586fecp-36f, 0x1.e50d74p-107f,
     0x1.29791ap-72f, 0x1.c38986p-71f, 0.0f, 0x1.a20c4ap-18f, 0.0f, 0.0f,
     0x1.f18cf2p-32f, 0x1.8fc85ep-53f, 0x1.3620c4p-44f, 0x1.083f8ep-125f,
     0x1.00e1ap-89f, 0x1.b5e2b2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a33f8p-55f, 0x1.20972ap-28f, 0.0f, 0.0f, 0.0f, 0x1.49e71cp-39f,
     0x1.a25c72p-93f, 0.0f, 0x1.4f38e4p-103f, 0x1.8de4e2p-69f, 0.0f, 0x1.036ac8p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf80aep-104f, 0.0f,
     0x1.569afep-25f, 0.0f, 0x1.4bbd48p-88f, 0.0f, 0.0f, 0x1.d74a3ep-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.355004p-7f, 0x1.db1a54p-104f, 0.0f, 0.0f, 0x1.d07544p-113f, 0.0f,
     0x1.01e7dap-24f, 0x1.cf485cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9a15ap-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5f62ep-120f, 0.0f, 0.0f, 0.0f,
     0x1.e0be1cp-71f, 0.0f, 0x1.186fecp-49f, 0x1.55d8b8p-31f, 0x1.01f494p-1f,
     0x1.a6122ep-103f, 0.0f, 0.0f, 0x1.409d62p-94f, 0x1.a76b7p-82f, 0x1.e09578p-84f,
     0.0f, 0x1.c23404p-53f, 0x1p0f, 0x1.7756ep-74f, 0.0f, 0.0f, 0x1.c1362ap-22f, 0.0f,
     0x1.d8ad38p-79f, 0.0f, 0.0f, 0x1.e1c12p-22f, 0x1.b54d72p-125f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_remainderf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_remainderf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_remainderf1_purecfma bench acc %a\n", global_bench_acc);
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
