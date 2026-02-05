/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_roundf.c --function roundf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.8e8ba2p-18f, 0.0f, 0x1.fca1ap-51f, 0x1.6ca04p-39f, 0x1.a61e5p-45f, 0.0f,
     0x1.a4f452p-22f, 0.0f, 0.0f, 0x1.82627ap-61f, 0x1.8dd18ep-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6284a2p-113f, 0x1.c616b6p-24f, 0x1.1dad72p-123f, 0.0f, 0x1.0093e8p-78f,
     0x1.a5e5ap-49f, 0.0f, 0x1.11910ep-30f, 0.0f, 0x1.d76fd2p-17f, 0x1.6db49cp-96f,
     0x1.cda0dcp-63f, 0x1.741968p-117f, 0.0f, 0.0f, 0x1.9f53dcp-111f, 0.0f, 0.0f,
     0.0f, 0x1.7a90d6p-25f, 0.0f, 0x1.de24acp-106f, 0.0f, 0.0f, 0x1.7f568ep-78f, 0.0f,
     0x1.06257ep-41f, 0.0f, 0x1.42ce3ap-92f, 0x1.0d2ecap-89f, 0x1.0c32a6p-116f,
     0x1.fca9dap-51f, 0x1.4db6ap-24f, 0x1.bc308ep-115f, 0.0f, 0.0f, 0x1.801b3ep-30f,
     0.0f, 0.0f, 0x1.72274p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.763dbcp-54f,
     0.0f, 0.0f, 0x1.af9626p-66f, 0x1.4d7806p-118f, 0x1.0605dp-48f, 0x1.bbc9c6p-69f,
     0.0f, 0x1.733c16p-123f, 0.0f, 0x1.4fc0dap-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90c5b8p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d56454p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.704cfp-52f, 0x1.935c4p-115f, 0.0f, 0.0f, 0.0f, 0x1.bc4196p-62f,
     0x1.dd88cep-92f, 0.0f, 0x1.0c8052p-121f, 0x1.8b27c2p-24f, 0.0f, 0x1.865c42p-59f,
     0.0f, 0.0f, 0x1.278adp-110f, 0x1.56ffb2p-34f, 0x1.450286p-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.68647cp-33f, 0x1.4bc7fap-9f, 0x1.9f8cb4p-52f, 0x1.75e0d2p-49f,
     0.0f, 0x1.0fad02p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15b2e2p-89f, 0.0f, 0x1.ffddb2p-50f, 0.0f, 0.0f, 0x1.e9a792p-77f,
     0x1.af1fbcp-71f, 0x1.96fc76p-115f, 0x1.d6af2p-22f, 0.0f, 0.0f, 0x1.1cb3e2p-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6ab94p-65f, 0.0f, 0x1.04cfdep-110f, 0.0f,
     0x1.0dbd88p-81f, 0.0f, 0x1.936002p-36f, 0.0f, 0x1.8fc16ep-8f, 0.0f,
     0x1.c26bccp-98f, 0.0f, 0x1.09f73ep-66f, 0x1.f566bcp-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82d92ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac87p-107f, 0x1.45afa4p-92f,
     0x1.75269p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ceac98p-57f,
     0x1.d14062p-16f, 0.0f, 0x1.cf55bcp-104f, 0x1.dd7616p-89f, 0x1.072012p-42f, 0.0f,
     0.0f, 0x1.11ff94p-85f, 0x1.0eff48p-102f, 0x1.cd574ap-56f, 0x1.dca568p-53f,
     0x1.ee6178p-112f, 0x1.1386ep-62f, 0.0f, 0x1.0c5c0ap-126f, 0x1.e8f40ap-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4e097cp-42f, 0.0f, 0.0f, 0.0f, 0x1.37f168p-124f,
     0x1.e38c1p-93f, 0x1.a3bc7cp-82f, 0.0f, 0.0f, 0x1.a2134p-12f, 0.0f,
     0x1.3cd5fep-120f, 0x1.f70488p-91f, 0.0f, 0.0f, 0x1.2795fap-30f, 0.0f,
     0x1.2edbb6p-12f, 0.0f, 0.0f, 0.0f, 0x1.04f2b4p-24f, 0x1.3407c4p-102f,
     0x1.886e22p-77f, 0x1.5c94e4p-76f, 0x1.c57514p-102f, 0.0f, 0x1.42707cp-91f, 0.0f,
     0x1.7d1b84p-43f, 0.0f, 0x1.0329c2p-117f, 0.0f, 0.0f, 0x1.444c18p-19f, 0.0f,
     0x1.8cb498p-16f, 0.0f, 0.0f, 0.0f, 0x1.db4a16p-4f, 0.0f, 0.0f, 0x1.a6ce5ap-12f,
     0x1.1d9daep-56f, 0x1.1ede4ep-21f, 0x1.8356a2p-2f, 0x1.093266p-18f, 0.0f,
     0x1.9af56p-58f, 0.0f, 0x1.e1f482p-36f, 0x1.962ca8p-46f, 0.0f, 0.0f, 0.0f,
     0x1.eee276p-44f, 0x1.d2ebeap-15f, 0.0f, 0x1.8ff1fap-73f, 0x1.987f8ep-8f,
     0x1.dd204ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57a112p-57f, 0x1.95bf3p-28f,
     0x1.4254p-46f, 0x1.bf8ep-15f, 0.0f, 0.0f, 0.0f, 0x1.7a6948p-58f, 0.0f,
     0x1.1d7762p-10f, 0x1.3e83dap-6f, 0x1.d678cep-109f, 0x1.a667d6p-31f,
     0x1.e6c906p-69f, 0.0f, 0x1.0e996ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d821ep-25f, 0.0f, 0x1.095bcep-41f, 0.0f, 0x1.2b32d6p-126f, 0x1.9fbedp-115f,
     0.0f, 0x1.c0b838p-46f, 0.0f, 0.0f, 0x1.cfc632p-52f, 0x1.c567fp-52f,
     0x1.c75db4p-103f, 0.0f, 0x1.0ec494p-46f, 0.0f, 0x1.fe68dp-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d6f2b2p-91f, 0x1.0aa524p-33f, 0x1.6f1148p-110f, 0x1.bff892p-22f,
     0x1.e8846p-98f, 0x1.7dd144p-118f, 0.0f, 0x1.141c4ap-106f, 0.0f, 0x1.e2f5f6p-113f,
     0.0f, 0.0f, 0x1.ab17a2p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fdacap-101f,
     0x1.d2092p-66f, 0x1.cef718p-117f, 0x1.3ef6dep-82f, 0.0f, 0.0f, 0.0f,
     0x1.570c38p-108f, 0x1.7726f6p-72f, 0x1.de7304p-42f, 0x1.cbf54cp-101f,
     0x1.84696ap-126f, 0.0f, 0.0f, 0.0f, 0x1.ca6eap-85f, 0.0f, 0x1.b7bbb4p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.28d0aap-53f, 0x1.17cb66p-106f, 0x1.f99dc4p-92f, 0.0f, 0.0f,
     0x1.646214p-39f, 0.0f, 0.0f, 0.0f, 0x1.482c8cp-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2ec45p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4e4dcp-100f, 0x1.004b36p-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8ea386p-97f, 0.0f, 0.0f, 0.0f, 0x1.ca5f34p-55f, 0.0f, 0.0f,
     0x1.858772p-124f, 0x1.4cb80ap-86f, 0.0f, 0x1.cb1876p-98f, 0.0f, 0x1.598b72p-93f,
     0.0f, 0.0f, 0.0f, 0x1.d306cap-80f, 0x1.f69448p-85f, 0x1.52cc0ep-118f,
     0x1.ac668p-98f, 0.0f, 0.0f, 0x1.cf7bf4p-36f, 0x1.20c71cp-48f, 0.0f,
     0x1.300aacp-46f, 0.0f, 0x1.55e5c2p-46f, 0x1.73bfap-33f, 0x1.5df19cp-113f, 0.0f,
     0x1.c45fap-84f, 0.0f, 0x1.1066p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1df71ep-106f, 0.0f, 0.0f, 0x1.963f1cp-45f, 0x1.24d09ep-97f, 0x1.5c16b8p-109f,
     0.0f, 0.0f, 0x1.bafce4p-116f, 0x1.7ee0fep-16f, 0.0f, 0.0f, 0.0f, 0x1.afbecp-118f,
     0x1.11aa76p-77f, 0.0f, 0x1.783692p-81f, 0.0f, 0.0f, 0.0f, 0x1.f492fep-4f, 0.0f,
     0x1.9c0022p-86f, 0x1.45c692p-1f, 0.0f, 0x1.9a45bp-35f, 0x1.c68e0ep-64f, 0.0f,
     0.0f, 0.0f, 0x1.995836p-115f, 0x1.78dcd4p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.001492p-92f, 0x1.59a0dap-48f, 0x1.81214p-36f, 0x1.d14ef4p-75f, 0.0f,
     0x1.adba8ap-113f, 0.0f, 0x1.f356fep-78f, 0x1.62a538p-97f, 0x1.47ddb4p-38f,
     0x1.d06e1ep-75f, 0x1.890e6cp-97f, 0x1.3580b8p-114f, 0.0f, 0x1.e9d07cp-75f,
     0x1.4c0f7p-106f, 0.0f, 0.0f, 0.0f, 0x1.61574ap-38f, 0.0f, 0.0f, 0.0f,
     0x1.6a2c06p-60f, 0.0f, 0.0f, 0x1.0e7b06p-67f, 0.0f, 0x1.a3e464p-74f,
     0x1.ddcbf2p-125f, 0x1.9b965ap-87f, 0x1.56b01cp-26f, 0x1.cc0eeap-35f, 0.0f,
     0x1.2b337p-80f, 0x1.bb814ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8551aap-10f, 0x1.758464p-81f, 0.0f, 0.0f, 0x1.30e06ep-14f, 0.0f, 0.0f,
     0.0f, 0x1.6d6cb8p-14f, 0.0f, 0x1.af632p-47f, 0.0f, 0x1.b82cc8p-99f,
     0x1.26aacp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a1148p-33f, 0x1.530a36p-44f,
     0x1.fb589ep-72f, 0x1.ef0688p-87f, 0.0f, 0x1.144a12p-56f, 0.0f, 0.0f,
     0x1.5f0392p-126f, 0x1.35642ap-86f, 0.0f, 0x1.a93962p-36f, 0.0f, 0.0f,
     0x1.fd8b76p-98f, 0.0f, 0x1.7b0d5cp-34f, 0x1.a2c3d6p-110f, 0.0f, 0.0f,
     0x1.643ddep-31f, 0.0f, 0.0f, 0.0f, 0x1.61eb06p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2cb802p-80f, 0.0f, 0.0f, 0x1.cf93cp-30f, 0.0f, 0x1.c19cbcp-72f,
     0x1.7b213ap-28f, 0x1.758ba6p-29f, 0x1.63c16ap-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb95bp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.962978p-75f, 0.0f, 0.0f,
     0x1.c5b486p-44f, 0.0f, 0x1.1bbfaep-28f, 0x1.eca052p-69f, 0.0f, 0x1.26ecc8p-70f,
     0.0f, 0x1.c166c8p-91f, 0.0f, 0.0f, 0x1.dcab48p-55f, 0.0f, 0.0f, 0x1.34dbb4p-86f,
     0x1.5ad454p-48f, 0x1.7022c8p-41f, 0.0f, 0.0f, 0.0f, 0x1.166922p-78f,
     0x1.db8a2ep-58f, 0.0f, 0.0f, 0.0f, 0x1.1298a6p-117f, 0x1.2cc586p-112f, 0.0f,
     0x1.68ce2ep-3f, 0x1.07b6dp-99f, 0.0f, 0x1.eb27dcp-30f, 0.0f, 0x1.47028p-113f,
     0.0f, 0x1.5617d4p-120f, 0.0f, 0x1.aad33cp-21f, 0x1.9b8126p-31f, 0.0f,
     0x1.e4f496p-117f, 0.0f, 0x1.a8ef7cp-16f, 0.0f, 0x1.bf093cp-124f, 0x1.d6267ap-43f,
     0.0f, 0.0f, 0x1.314c2p-10f, 0.0f, 0x1.7ae432p-49f, 0x1p0f, 0x1.bc0f1ap-8f,
     0x1.eb96bap-23f, 0x1.1bc09p-62f, 0x1.8c84e4p-124f, 0x1.de23aap-72f,
     0x1.764d6cp-125f, 0x1.36f9e6p-106f, 0x1.9858cap-109f, 0.0f, 0.0f,
     0x1.c30ddep-52f, 0x1.8932c4p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.882498p-62f,
     0.0f, 0x1.922b6ap-68f, 0x1.cda844p-57f, 0x1.6d2a2ap-33f, 0x1.f546f8p-51f,
     0x1.c2af64p-4f, 0x1.e2022ap-26f, 0x1.20d69ap-1f, 0.0f, 0.0f, 0x1.26353ep-2f,
     0.0f, 0x1.e3ab3p-78f, 0x1.ea0b58p-5f, 0x1.482246p-64f, 0.0f, 0.0f, 0.0f,
     0x1.4c7716p-15f, 0x1.40afe2p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09df76p-7f,
     0x1.6dd866p-122f, 0.0f, 0x1.7196a2p-10f, 0x1.ca6aeap-12f, 0x1.c01688p-82f,
     0x1.03ca48p-96f, 0.0f, 0.0f, 0x1.d02eaap-90f, 0.0f, 0.0f, 0.0f, 0x1.ae21d8p-106f,
     0x1.08b504p-28f, 0.0f, 0.0f, 0x1.63caaep-103f, 0x1.78141cp-13f, 0x1.c7559p-3f,
     0.0f, 0x1.727812p-118f, 0x1.2b7c04p-88f, 0.0f, 0.0f, 0x1.4d927ap-31f, 0.0f,
     0x1.747e1cp-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7cb1cp-97f, 0x1.94888p-118f, 0.0f,
     0.0f, 0.0f, 0x1.816b02p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aefbeep-66f, 0x1.d3fdccp-52f, 0x1.fee9e8p-118f, 0x1.1f0b5ap-69f, 0.0f,
     0x1.629a5p-94f, 0x1.d8075cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3fc354p-126f, 0x1.d59ab2p-16f, 0x1.07f588p-117f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b113b8p-119f, 0x1.776632p-49f, 0x1.56b60ep-121f, 0x1.763bc6p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19d18ap-2f, 0.0f,
     0x1.dde3acp-79f, 0x1.cc002p-105f, 0x1.02d2d4p-86f, 0x1.6dd52ap-64f,
     0x1.9252cep-86f, 0x1.10ef6cp-78f, 0.0f, 0.0f, 0x1.7c95bep-15f, 0.0f,
     0x1.e5b4bep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3eeacp-77f, 0x1.6e8eap-41f,
     0x1.6c7b5p-20f, 0x1.98f596p-31f, 0.0f, 0x1.04dfc2p-43f, 0x1.d09e64p-118f,
     0x1.048ee2p-96f, 0x1.d4bb7p-108f, 0.0f, 0x1.28284ap-12f, 0.0f, 0x1.f38eb8p-40f,
     0x1.cf551ap-42f, 0.0f, 0.0f, 0x1.0e930ap-95f, 0x1.780236p-96f, 0.0f,
     0x1.88ffe8p-95f, 0.0f, 0.0f, 0.0f, 0x1.bf84f4p-118f, 0.0f, 0x1.ae6dc8p-65f,
     0x1.cf6d8p-111f, 0.0f, 0x1.6c9dbp-35f, 0.0f, 0x1.9b00dcp-22f, 0x1.a75c26p-94f,
     0.0f, 0x1.856208p-85f, 0x1.d3efacp-7f, 0.0f, 0.0f, 0x1.4674e2p-114f, 0.0f, 0.0f,
     0x1.95e712p-93f, 0.0f, 0x1.156ac8p-48f, 0x1.bbf98ep-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.58f00cp-116f, 0x1.2e5c28p-37f, 0.0f, 0x1.c0ce72p-78f, 0.0f,
     0x1.85f698p-22f, 0x1.4b3cfp-29f, 0.0f, 0x1.9a90a4p-113f, 0.0f, 0.0f,
     0x1.b20058p-48f, 0.0f, 0x1.762318p-86f, 0.0f, 0.0f, 0.0f, 0x1.fd1538p-40f,
     0x1.666492p-109f, 0x1.e9da68p-63f, 0.0f, 0x1.df2f62p-113f, 0x1.c77b36p-103f,
     0.0f, 0.0f, 0.0f, 0x1.61c36ap-22f, 0.0f, 0x1.0e7a0ap-77f, 0x1.11eadcp-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f6b428p-63f, 0x1.10fafp-9f, 0x1.66aed6p-11f,
     0x1.c917dap-87f, 0x1.debbd2p-59f, 0x1.b1c674p-94f, 0.0f, 0.0f, 0x1.d91cb8p-96f,
     0.0f, 0.0f, 0x1.bbdd5cp-105f, 0x1.05d25cp-123f, 0x1.04761ep-45f,
     0x1.54f182p-122f, 0x1.89ae78p-98f, 0x1.01277ap-72f, 0x1.fd76p-121f, 0.0f,
     0x1.bdcdeep-3f, 0.0f, 0x1.835abcp-37f, 0x1.03ee7p-99f, 0x1.44317ap-78f, 0.0f,
     0x1.6f4b1cp-79f, 0x1.213aaap-47f, 0.0f, 0.0f, 0.0f, 0x1.7d423cp-29f, 0.0f,
     0x1.8eb082p-39f, 0.0f, 0.0f, 0x1.c323fap-68f, 0x1.80f8f2p-108f, 0x1.20e4b4p-26f,
     0x1.4a4364p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0ad8cp-80f, 0x1.a1c876p-20f,
     0x1.4e97dap-117f, 0.0f, 0x1.dd6356p-74f, 0.0f, 0.0f, 0.0f, 0x1.a9580ep-54f, 0.0f,
     0x1.0cc852p-13f, 0x1.bbbfaep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.932f56p-38f,
     0x1.10bb5p-11f, 0.0f, 0.0f, 0x1.c9faf6p-54f, 0.0f, 0x1.6fefa8p-87f, 0.0f, 0.0f,
     0x1.5c13e8p-97f, 0x1.0a7c06p-21f, 0.0f, 0x1.f66c9cp-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42cdb6p-90f, 0x1.e74678p-30f, 0.0f, 0.0f, 0.0f, 0x1.673a9p-119f,
     0x1.a77ac8p-14f, 0.0f, 0x1.669696p-40f, 0x1.67cc72p-76f, 0.0f, 0.0f,
     0x1.1ab2d8p-93f, 0x1.d1765ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2868e6p-63f,
     0x1.8487b2p-27f, 0x1.41a542p-76f, 0.0f, 0.0f, 0x1.ecf224p-52f, 0x1.e42274p-28f,
     0.0f, 0x1.5afb48p-80f, 0x1.b12506p-4f, 0x1.7e8346p-20f, 0.0f, 0x1.220706p-110f,
     0x1.d3b8d2p-66f, 0x1.b76982p-43f, 0.0f, 0x1.b7b526p-78f, 0x1.ca921p-73f, 0.0f,
     0x1.74159ap-101f, 0.0f, 0x1.57e6f2p-93f, 0.0f, 0x1.93c18cp-80f, 0.0f,
     0x1.25c5c6p-54f, 0x1.6a15e6p-83f, 0.0f, 0x1.564a72p-119f, 0x1.b0bc04p-69f, 0.0f,
     0x1.ee8c84p-98f, 0.0f, 0.0f, 0x1.f8d1ccp-88f, 0x1.d3a4d8p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c5b2p-108f, 0.0f, 0x1.14045ap-57f, 0x1.46f376p-41f,
     0x1.c2d8c8p-12f, 0x1.ff2562p-21f, 0x1.7f0676p-14f, 0x1.ab5e3cp-88f,
     0x1.1f14ep-2f, 0.0f, 0.0f, 0.0f, 0x1.b6b626p-36f, 0.0f, 0.0f, 0x1.415b98p-119f,
     0.0f, 0x1.a1f69cp-109f, 0x1.9fa09ep-99f, 0x1.cfca8ap-38f, 0.0f, 0x1.4be0fap-91f,
     0x1.e8379p-26f, 0.0f, 0x1.71e02ep-25f, 0.0f, 0.0f, 0.0f, 0x1.3eb61ep-103f, 0.0f
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
            tmp1 = roundf(tmp0);
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
    printf("roundf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("roundf bench acc %a\n", global_bench_acc);
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
