/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosf1_u10purecfma.c --function \
 *     Sleef_finz_acosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0x1.ff5a18p-46f, 0x1.3d102ap-94f, 0.0f, 0x1.b8f0bep-52f, 0.0f, 0x1.eda196p-16f,
     0.0f, 0.0f, 0x1.936c3ep-69f, 0.0f, 0.0f, 0x1.b7af66p-87f, 0.0f, 0.0f,
     0x1.859496p-59f, 0x1.e5926ep-53f, 0.0f, 0x1.3aa91ep-108f, 0.0f, 0x1.b0f70ep-93f,
     0x1.004a48p-75f, 0x1.8c8ecap-96f, 0x1.cc4e56p-69f, 0x1.537b88p-100f,
     0x1.ef9588p-38f, 0x1.687312p-17f, 0.0f, 0.0f, 0x1.9123e4p-118f, 0.0f,
     0x1.f7d61p-97f, 0x1.1c5054p-57f, 0.0f, 0.0f, 0.0f, 0x1.858d42p-76f, 0.0f,
     0x1.4bffa4p-56f, 0x1.0def86p-20f, 0.0f, 0.0f, 0x1.4c6eeap-95f, 0x1.054912p-125f,
     0x1.c3f826p-70f, 0.0f, 0.0f, 0x1.0c7ef6p-26f, 0x1.313222p-101f, 0.0f,
     0x1.7b1bbp-17f, 0x1.48adfcp-110f, 0.0f, 0.0f, 0x1.597d44p-27f, 0.0f, 0.0f,
     0x1.7026ep-64f, 0.0f, 0x1.584ddap-93f, 0x1.64f028p-43f, 0.0f, 0x1.66db36p-36f,
     0x1.a997f8p-110f, 0.0f, 0x1.042cd6p-46f, 0x1.d79cc6p-16f, 0.0f, 0.0f, 0.0f,
     0x1.fe2cbep-2f, 0.0f, 0.0f, 0x1.72afacp-4f, 0x1.f74264p-108f, 0x1.19bceep-41f,
     0x1.fbee0ep-29f, 0x1.15c536p-99f, 0x1.65421cp-81f, 0x1.81fb68p-29f, 0.0f,
     0x1.75260ap-83f, 0.0f, 0.0f, 0x1.edaa3ap-19f, 0.0f, 0.0f, 0x1.781838p-94f,
     0x1.31e8bap-17f, 0x1.751046p-61f, 0x1.f9885p-28f, 0.0f, 0.0f, 0x1.aad7c8p-113f,
     0.0f, 0.0f, 0.0f, 0x1.f5d9e6p-40f, 0x1.7c7f54p-16f, 0.0f, 0x1.742ed4p-90f, 0.0f,
     0x1.46a1eap-120f, 0.0f, 0.0f, 0x1.774458p-76f, 0.0f, 0x1.9354e6p-106f, 0.0f,
     0.0f, 0.0f, 0x1.30eaa2p-87f, 0x1.ed92e6p-51f, 0x1.844facp-102f, 0.0f,
     0x1.b0d736p-40f, 0x1.d05f4cp-15f, 0.0f, 0.0f, 0x1.2162d6p-61f, 0x1.5d84b2p-94f,
     0.0f, 0x1.31c53ep-106f, 0.0f, 0.0f, 0.0f, 0x1.f3ad5cp-68f, 0.0f, 0.0f,
     0x1.123edap-79f, 0x1.d56a8ep-28f, 0x1.32454ap-31f, 0x1.230526p-32f, 0.0f,
     0x1.3c61b8p-41f, 0.0f, 0.0f, 0x1.7662cp-21f, 0.0f, 0x1.641e28p-51f,
     0x1.56d85p-125f, 0x1.4e31a8p-35f, 0.0f, 0x1.43e35p-5f, 0x1.772c1ap-36f,
     0x1.d0e714p-75f, 0.0f, 0.0f, 0.0f, 0x1.ab5098p-66f, 0.0f, 0x1.e955c2p-77f,
     0x1.b107b8p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5c34cp-18f, 0.0f, 0x1.b49412p-68f,
     0x1.e4576ep-48f, 0.0f, 0x1.98434ep-94f, 0.0f, 0x1.e33c16p-101f, 0x1.d244bap-66f,
     0.0f, 0x1.d97d26p-26f, 0x1.11eea2p-5f, 0x1.aa111p-87f, 0x1.aa362ap-117f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.fa3b06p-75f, 0x1.d2b63p-116f, 0.0f, 0.0f, 0.0f,
     0x1.60845p-111f, 0.0f, 0x1.84da8ap-61f, 0x1.c39fe2p-37f, 0.0f, 0x1.190d1ap-2f,
     0.0f, 0x1.7034ecp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d53ddep-11f,
     0x1.199adcp-123f, 0x1.f08f86p-39f, 0x1.8059a4p-122f, 0.0f, 0x1.429392p-50f, 0.0f,
     0x1.146138p-56f, 0.0f, 0.0f, 0x1.130aa6p-47f, 0x1.dd6e0ap-62f, 0.0f, 0.0f,
     0x1.93cf26p-52f, 0.0f, 0.0f, 0x1.b2a5bp-89f, 0.0f, 0.0f, 0x1.d8f934p-55f,
     0x1.8bcaf6p-5f, 0x1.bcd744p-117f, 0x1.5a28bcp-61f, 0x1.a78fcap-87f, 0.0f, 0.0f,
     0x1.22ef7ap-34f, 0.0f, 0x1.1dfce4p-111f, 0.0f, 0x1.34ee2cp-65f, 0x1.1d0c84p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.710a54p-100f, 0.0f, 0x1.8b8fe2p-69f,
     0.0f, 0x1.1fb002p-20f, 0x1.2d07aep-12f, 0.0f, 0.0f, 0x1.0d428p-110f, 0.0f,
     0x1.cb463cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea6e36p-50f, 0.0f,
     0x1.a335c2p-58f, 0x1.49c8f6p-3f, 0x1.81b2d2p-82f, 0x1.438cb4p-29f,
     0x1.b7f778p-123f, 0.0f, 0.0f, 0x1.fb1c1p-29f, 0x1.fbc94p-14f, 0.0f, 0.0f,
     0x1.8e3f3ap-79f, 0x1.2c9f96p-46f, 0x1.479b0cp-63f, 0.0f, 0.0f, 0x1.44081ep-42f,
     0.0f, 0x1.0af04p-105f, 0.0f, 0x1.9dae02p-18f, 0.0f, 0.0f, 0x1.425c98p-59f, 0.0f,
     0.0f, 0x1.0b59p-87f, 0.0f, 0x1.5a5afp-41f, 0x1.1de1e6p-87f, 0x1.2a37fp-57f,
     0x1.f8365cp-8f, 0x1.19d088p-82f, 0x1.33ead4p-78f, 0.0f, 0x1.78d606p-37f, 0.0f,
     0.0f, 0x1.6d7bdep-125f, 0x1.ffac3cp-102f, 0x1.e5fe76p-22f, 0.0f, 0x1.afaee4p-99f,
     0.0f, 0.0f, 0.0f, 0x1.59287ep-86f, 0.0f, 0.0f, 0.0f, 0x1.47913ep-113f, 0.0f,
     0x1.14ffd4p-54f, 0x1.ea0444p-50f, 0.0f, 0x1.b7901p-116f, 0x1.57bbdp-99f, 0.0f,
     0.0f, 0.0f, 0x1.c1c87p-48f, 0x1.c90eap-64f, 0.0f, 0.0f, 0x1.31effep-100f,
     0x1.181fc2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.192f06p-91f, 0x1.9969c4p-96f, 0.0f,
     0x1.717322p-44f, 0.0f, 0x1.1f1e4ap-29f, 0x1.2fb2a8p-4f, 0.0f, 0.0f,
     0x1.3d5492p-92f, 0.0f, 0.0f, 0x1.721c54p-11f, 0x1.2d363p-87f, 0x1.cfeffp-5f,
     0x1.a6d8dcp-45f, 0x1.d9d35p-37f, 0.0f, 0.0f, 0x1.76d02cp-68f, 0x1.ab4deep-11f,
     0.0f, 0.0f, 0x1.29433p-30f, 0.0f, 0.0f, 0x1.923fbep-16f, 0x1.42d1dap-96f,
     0x1.3fc3bcp-115f, 0x1.eadb36p-75f, 0.0f, 0.0f, 0.0f, 0x1.b60ee4p-19f, 0.0f,
     0x1.70d46ap-65f, 0x1.d46456p-124f, 0x1.8d0d4ep-55f, 0.0f, 0.0f, 0x1.1dc716p-20f,
     0.0f, 0x1.c771eap-8f, 0.0f, 0x1.9b001ep-9f, 0x1.886f48p-71f, 0x1.603952p-41f,
     0.0f, 0x1.91dfcep-107f, 0.0f, 0x1.b60bep-58f, 0.0f, 0x1.edd468p-91f,
     0x1.55c3f2p-32f, 0x1.ade148p-11f, 0x1.e67adap-35f, 0.0f, 0x1.17de86p-102f, 0.0f,
     0.0f, 0.0f, 0x1.d2aa72p-100f, 0x1.664c26p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.309d5ap-43f, 0.0f, 0x1.aa5af4p-113f, 0.0f, 0x1.da5bf8p-89f, 0.0f,
     0x1.234b7ap-83f, 0x1.ec997ep-118f, 0x1.1a8a7p-93f, 0x1.2cd5a6p-120f,
     0x1.304ea4p-65f, 0.0f, 0x1.bf9622p-112f, 0.0f, 0.0f, 0.0f, 0x1.fb5fd4p-104f,
     0.0f, 0x1.a51e28p-79f, 0x1.64ccep-38f, 0x1.d917fp-72f, 0.0f, 0.0f, 0.0f,
     0x1.af6e4cp-76f, 0.0f, 0x1.12fdd4p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b9554p-16f,
     0.0f, 0x1.a2f91p-112f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.72bc86p-37f,
     0x1.0dd156p-126f, 0x1.3e095ap-100f, 0x1.2f41ap-94f, 0.0f, 0x1.6e945ap-35f, 0.0f,
     0x1.66296cp-47f, 0.0f, 0x1.821d58p-49f, 0x1.4f68a6p-85f, 0.0f, 0.0f, 0.0f,
     0x1.040996p-75f, 0.0f, 0x1.43ac9cp-70f, 0x1.480636p-93f, 0.0f, 0x1.eaec3ep-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0d544p-9f, 0x1.789734p-75f, 0.0f, 0.0f,
     0x1.5a743cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.891c7cp-120f, 0.0f,
     0x1.f2f64cp-81f, 0.0f, 0.0f, 0x1.6b871ep-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb589cp-58f, 0x1.3cbec8p-103f, 0x1.bb2ee6p-104f, 0.0f, 0x1.d188aap-49f, 0.0f,
     0x1.386b2p-92f, 0.0f, 0x1.dca0c2p-20f, 0x1.8168dp-99f, 0x1.59957ap-104f,
     0x1.b3c4d6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68668cp-39f, 0x1.22ddf6p-41f, 0.0f,
     0x1.ad1b38p-72f, 0.0f, 0.0f, 0x1.08e59cp-121f, 0x1.c4746ep-16f, 0x1.0b7f64p-110f,
     0.0f, 0.0f, 0x1.767612p-83f, 0.0f, 0x1.47bd42p-65f, 0.0f, 0x1.007b02p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a71582p-46f, 0x1.113102p-29f, 0.0f, 0x1.b4329cp-25f, 0.0f,
     0x1.10491ap-27f, 0x1.d0cdcep-39f, 0.0f, 0x1.2d3adep-33f, 0.0f, 0.0f, 0.0f,
     0x1.7eecf4p-29f, 0.0f, 0x1.d4c8cp-105f, 0x1.0debfcp-94f, 0.0f, 0.0f,
     0x1.0b9e12p-30f, 0x1.95291ap-105f, 0.0f, 0x1.3982ap-1f, 0x1.38d4fp-118f, 0.0f,
     0.0f, 0.0f, 0x1.bf6bap-93f, 0.0f, 0.0f, 0.0f, 0x1.40e0fap-22f, 0.0f, 0.0f,
     0x1.04073p-46f, 0.0f, 0x1.c70364p-42f, 0.0f, 0x1.379cd2p-59f, 0x1.f7f60ap-51f,
     0x1.3224dp-90f, 0x1.ab7f92p-69f, 0.0f, 0x1.a381dcp-12f, 0x1.897774p-83f, 0.0f,
     0.0f, 0x1.ebcc46p-103f, 0.0f, 0.0f, 0.0f, 0x1.3e8472p-114f, 0.0f,
     0x1.f31d48p-42f, 0x1.c96f66p-122f, 0x1.710c9p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e05e44p-99f, 0.0f, 0.0f, 0.0f, 0x1.5a720ep-78f, 0.0f, 0.0f, 0x1.f12e7ap-62f,
     0x1.9216f4p-60f, 0.0f, 0.0f, 0.0f, 0x1.0c846cp-96f, 0x1.f3305ap-45f, 0.0f,
     0x1.98dfdep-80f, 0.0f, 0.0f, 0x1.682336p-93f, 0x1.eac7fcp-76f, 0x1.62c772p-78f,
     0.0f, 0x1.972c6p-61f, 0x1.fa26ecp-70f, 0.0f, 0.0f, 0x1.2e6d0ap-43f,
     0x1.bb5262p-110f, 0.0f, 0x1.951256p-72f, 0x1.78a7f2p-28f, 0x1.5b991ep-51f,
     0x1.948676p-93f, 0x1.07e572p-88f, 0x1.a1953cp-102f, 0.0f, 0.0f, 0.0f,
     0x1.fdc6e4p-124f, 0x1.43eae2p-76f, 0.0f, 0x1.02d766p-97f, 0.0f, 0x1.9d83cep-31f,
     0x1.e8c8f6p-6f, 0.0f, 0x1.ab680ap-81f, 0x1.d4608ep-109f, 0.0f, 0.0f, 0.0f,
     0x1.f038c6p-113f, 0x1.f71084p-53f, 0.0f, 0.0f, 0x1.568a6p-106f, 0.0f, 0.0f, 0.0f,
     0x1.6c9c34p-90f, 0x1.06d50cp-117f, 0.0f, 0.0f, 0.0f, 0x1.be31cep-39f,
     0x1.f6da2ep-55f, 0x1.f500c8p-63f, 0x1.dd44bcp-6f, 0x1.beca18p-16f, 0.0f, 0.0f,
     0x1.9ebc7p-14f, 0.0f, 0x1.302ebap-80f, 0x1.c113fp-16f, 0x1.7dd2c4p-124f, 0.0f,
     0x1.3c999ap-83f, 0.0f, 0x1.dd5e7ep-80f, 0x1.174f06p-95f, 0x1.fe531ap-3f,
     0x1.eef33cp-101f, 0.0f, 0.0f, 0x1.25c55p-120f, 0.0f, 0x1.7ee936p-94f, 0.0f,
     0x1.66c7e4p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58a4bep-37f, 0.0f, 0.0f, 0.0f,
     0x1.47cda6p-94f, 0.0f, 0.0f, 0x1.e93a58p-82f, 0x1.e88726p-93f, 0x1.d7fc8ep-48f,
     0x1.d655b8p-24f, 0x1.a77a72p-32f, 0x1.42309ep-74f, 0.0f, 0x1.bed41ap-56f,
     0x1.14a01ep-73f, 0x1.2d17b4p-77f, 0x1.c7ebd6p-86f, 0x1.237f9ep-67f,
     0x1.6210e2p-3f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.2aa966p-42f, 0x1.58f47p-60f,
     0x1.a3b1b2p-55f, 0.0f, 0x1.206148p-124f, 0.0f, 0x1.6754f2p-22f, 0x1.60afp-4f,
     0.0f, 0.0f, 0x1.423eaep-68f, 0.0f, 0.0f, 0x1.d18308p-84f, 0.0f, 0x1.34167ap-126f,
     0x1.7277aap-109f, 0x1.e6155ep-75f, 0x1.81028ap-65f, 0x1.9d79f2p-7f,
     0x1.cfc974p-5f, 0x1.82345p-110f, 0.0f, 0.0f, 0x1.d95dd6p-119f, 0x1.a64d6cp-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1242p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee47e8p-123f, 0.0f, 0.0f, 0.0f, 0x1.7ddba8p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c82fep-85f, 0x1.cd8facp-34f, 0x1.32b3cap-27f, 0x1.e0d6bap-97f, 0.0f, 0.0f,
     0x1.5c8dp-31f, 0.0f, 0.0f, 0x1.8118c6p-1f, 0.0f, 0x1.b5d264p-68f, 0.0f, 0.0f,
     0.0f, 0x1.21dcep-61f, 0x1.4001f6p-65f, 0x1.00d3b6p-122f, 0x1.675d38p-97f,
     0x1.4cae4cp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7593bcp-29f, 0.0f, 0x1.8c3accp-90f,
     0.0f, 0x1.fb376cp-74f, 0x1.84678ep-59f, 0x1.582922p-117f, 0.0f, 0.0f,
     0x1.1bd9f4p-48f, 0.0f, 0.0f, 0x1.e806c4p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7cf822p-5f, 0x1.3e7c2p-74f, 0x1.6de12cp-38f, 0.0f, 0.0f, 0x1.231d3ap-126f,
     0x1.2ca58ep-57f, 0.0f, 0x1.1b66aap-27f, 0x1.d522b6p-44f, 0x1.a7fb8ep-113f,
     0x1.430974p-47f, 0x1.533b26p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79ae6cp-100f,
     0.0f, 0x1.79720ap-2f, 0.0f, 0.0f, 0x1.172a4ep-22f, 0.0f, 0x1.2ab3b6p-118f,
     0x1.726d6ep-76f, 0x1.f3aecp-11f, 0.0f, 0x1.88abe4p-70f, 0x1.749cfap-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bc4bcp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.391ea2p-18f, 0x1.19aabp-78f, 0.0f, 0x1.3a752ap-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7596ep-122f, 0x1.82ea68p-69f, 0.0f, 0.0f, 0.0f,
     0x1.619b8cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23e914p-4f, 0.0f,
     0.0f, 0x1.aa606p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7bfc2p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.deadf2p-87f, 0x1.402bb8p-21f, 0.0f, 0x1.b08e2ep-120f,
     0x1.14e6b8p-67f, 0x1.278702p-13f, 0.0f, 0.0f, 0x1.dc272ap-95f, 0x1.29204cp-113f,
     0x1.4687bp-24f, 0x1.0d0576p-59f, 0.0f, 0x1.bc654p-92f, 0.0f, 0.0f,
     0x1.7f42b2p-114f, 0.0f, 0.0f, 0x1.69d338p-99f, 0x1.2e76c6p-43f, 0x1.717642p-91f,
     0x1.a8319cp-82f, 0x1.ec2a44p-70f, 0.0f, 0.0f, 0x1.fce0c6p-110f, 0x1.fbf288p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.21e4d2p-122f, 0.0f, 0x1.976f72p-65f, 0.0f,
     0x1.3a42d6p-38f, 0x1.15d118p-2f, 0x1.27dad2p-22f, 0.0f, 0.0f, 0x1.a202bep-41f,
     0.0f, 0.0f, 0x1.49ae0cp-112f, 0x1.6363fp-51f, 0x1.746d4ep-100f, 0.0f, 0.0f, 0.0f,
     0x1.829e14p-34f, 0.0f, 0x1.7202dep-26f, 0x1.1ede3ap-13f, 0x1.011fp-53f, 0.0f,
     0x1.8d41c2p-45f, 0x1.6a30d2p-68f, 0.0f, 0x1.b9ac64p-44f, 0x1.960676p-85f, 0.0f,
     0.0f, 0.0f, 0x1.e06f5cp-71f, 0x1.4c4fdap-13f, 0x1.75f83ep-18f, 0x1.77b50cp-74f,
     0.0f, 0x1.d7ca32p-23f, 0.0f, 0.0f, 0x1.f5d3aep-115f, 0x1.5b779p-28f, 0.0f, 0.0f,
     0x1.3efd8cp-37f, 0x1.765afep-104f, 0.0f, 0.0f, 0.0f, 0x1.c21f1ep-83f,
     0x1.bca254p-22f, 0x1.9ec334p-79f, 0.0f, 0.0f, 0.0f, 0x1.e04d82p-5f,
     0x1.039698p-68f, 0x1.fd1e9cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2eb734p-77f, 0.0f,
     0x1.07ba36p-39f, 0.0f, 0x1.9604c2p-5f, 0x1.e2478p-76f, 0x1.c3175p-122f, 0.0f,
     0x1.83ffe2p-121f, 0.0f, 0.0f, 0.0f, 0x1.4b2974p-30f, 0x1.0af224p-116f, 0.0f,
     0.0f, 0x1.209a34p-110f, 0.0f, 0.0f, 0.0f, 0x1.84789cp-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4435e2p-90f, 0x1.a69b3ap-110f, 0.0f, 0.0f, 0.0f,
     0x1.a53f9ep-111f, 0.0f, 0x1.191a22p-52f, 0x1.f60886p-55f, 0x1.c1cb6cp-72f,
     0x1.094eccp-94f, 0.0f, 0x1.b9e846p-53f, 0x1.490aa2p-106f, 0.0f, 0.0f, 0.0f,
     0x1.90c126p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62bf46p-6f
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
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_acosf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_finz_acosf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
