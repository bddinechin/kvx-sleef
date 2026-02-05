/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_asinf.c --function asinf --headers math.h,ml_support_lib.h \
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
     0x1.57a70cp-95f, 0x1.1bf72p-26f, 0x1.f2b81p-7f, 0.0f, 0x1.e5e47cp-6f,
     0x1.783f1cp-47f, 0x1.2fcbc8p-126f, 0x1.ae064ap-16f, 0x1.8ce61cp-110f, 0.0f,
     0x1.bf5098p-119f, 0.0f, 0x1.add1d2p-69f, 0x1.bc2fd8p-23f, 0.0f, 0x1.ad08eap-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.159d66p-92f, 0.0f, 0.0f,
     0x1.54834p-126f, 0.0f, 0x1.4d708p-112f, 0x1.34d4p-24f, 0.0f, 0.0f, 0.0f,
     0x1.c45edap-15f, 0x1.6b6dd4p-53f, 0.0f, 0x1.2a6798p-64f, 0.0f, 0x1.427d04p-119f,
     0.0f, 0x1.baea5p-123f, 0.0f, 0.0f, 0.0f, 0x1.3f898ap-56f, 0x1.bb5abp-124f, 0.0f,
     0.0f, 0x1.1822d4p-113f, 0x1.ab769cp-104f, 0x1.c4c328p-61f, 0x1.9c8d18p-26f, 0.0f,
     0.0f, 0.0f, 0x1.5cf39p-56f, 0.0f, 0x1.85c48p-25f, 0x1.83a838p-63f, 0.0f,
     0x1.a85a7ap-97f, 0x1.ceb3f2p-86f, 0.0f, 0.0f, 0x1.c8f388p-92f, 0x1.b5c9b4p-118f,
     0x1.b4a4aap-92f, 0x1.c2ee4ap-93f, 0.0f, 0x1.e45026p-122f, 0x1.745616p-81f,
     0x1.868eacp-25f, 0x1.06b302p-119f, 0x1.d1252p-81f, 0x1.aa7148p-105f,
     0x1.7b2e4ap-48f, 0x1.5674b4p-105f, 0.0f, 0x1.8242c4p-98f, 0.0f, 0x1.36fa54p-92f,
     0x1.b8c5p-88f, 0x1.3ef396p-122f, 0x1.a91ff2p-59f, 0.0f, 0x1.f11926p-54f, 0.0f,
     0x1.48b0b4p-117f, 0x1.361312p-114f, 0x1.4be564p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79d0eap-10f, 0.0f, 0x1.39e354p-84f, 0x1.04bcep-64f, 0.0f, 0x1.939deep-79f,
     0x1.08b422p-101f, 0.0f, 0.0f, 0x1.707b7p-92f, 0.0f, 0.0f, 0x1.b478b4p-52f, 0.0f,
     0.0f, 0.0f, 0x1.9ac2acp-13f, 0.0f, 0x1.fdf832p-76f, 0.0f, 0x1.0a59b2p-89f,
     0x1p0f, 0x1.b217aep-51f, 0x1.adda6ep-93f, 0x1.f9e89p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.92690ap-26f, 0.0f, 0x1.5b830cp-41f, 0.0f, 0x1.5fa30ap-75f,
     0x1.7028d2p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05748ep-109f, 0.0f, 0.0f, 0.0f,
     0x1.363122p-115f, 0.0f, 0x1.2015a4p-105f, 0x1.be27c2p-43f, 0x1.4d448p-87f,
     0x1.ad6a38p-47f, 0.0f, 0x1.44c15p-26f, 0x1.5348e4p-122f, 0x1.1005p-1f,
     0x1.b7289cp-63f, 0x1.0f3706p-112f, 0x1.173d74p-40f, 0x1.3ef5a6p-118f, 0.0f, 0.0f,
     0x1.a82f9p-125f, 0.0f, 0.0f, 0.0f, 0x1.93e7dap-69f, 0.0f, 0x1.d45e74p-12f, 0.0f,
     0.0f, 0x1.dab4cp-106f, 0x1.989526p-91f, 0.0f, 0.0f, 0x1.193bbep-45f, 0.0f, 0.0f,
     0.0f, 0x1.134184p-88f, 0x1.f63a2p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.789908p-100f, 0x1.12d6ap-103f, 0x1.8b3364p-36f, 0x1.6fcfb6p-51f, 0.0f, 0.0f,
     0.0f, 0x1.3504b4p-24f, 0.0f, 0x1.f29454p-93f, 0x1.631a44p-96f, 0.0f, 0.0f,
     0x1.da4a0ep-39f, 0.0f, 0x1.083b14p-109f, 0.0f, 0x1.8c1f86p-124f, 0x1.4b0fa2p-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28c95cp-23f, 0x1.b48d5p-40f, 0.0f, 0.0f, 0.0f,
     0x1.e99f5cp-47f, 0x1.387c0ep-18f, 0.0f, 0.0f, 0x1.7c6466p-54f, 0.0f,
     0x1.04f35ep-24f, 0x1.652cf6p-79f, 0.0f, 0.0f, 0.0f, 0x1.cc01dep-76f, 0.0f, 0.0f,
     0x1.8714b4p-83f, 0x1.c9d052p-51f, 0x1.a0e26p-96f, 0x1.1df2e8p-110f,
     0x1.0c785ep-126f, 0x1.f96f92p-116f, 0x1.86a548p-110f, 0x1.d4805p-44f, 0.0f,
     0x1.5ba2p-81f, 0x1.aa6a84p-80f, 0x1.c11d46p-86f, 0x1.8c55cap-75f,
     0x1.7b73acp-107f, 0x1.05fe46p-5f, 0x1.3c8508p-68f, 0.0f, 0x1.e114b2p-28f,
     0x1.3d32b8p-111f, 0.0f, 0x1.6e90b4p-65f, 0.0f, 0.0f, 0.0f, 0x1.799e06p-57f,
     0x1.98fd16p-100f, 0.0f, 0x1.f2248ap-68f, 0x1.b53306p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b3f6cp-54f, 0x1.1df7c8p-50f, 0x1.ac34bp-77f, 0x1.de2734p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.07e5c4p-100f, 0.0f, 0x1.da9958p-120f, 0.0f, 0.0f,
     0x1.cec672p-22f, 0.0f, 0.0f, 0.0f, 0x1.3bbe2ap-35f, 0x1.3190ecp-10f,
     0x1.dcf1bep-87f, 0x1.b159ap-28f, 0x1.41113ap-110f, 0x1.41af92p-71f,
     0x1.a86938p-107f, 0.0f, 0x1.cc15d2p-16f, 0x1.65a098p-34f, 0x1.716e46p-81f,
     0x1.58adccp-86f, 0.0f, 0.0f, 0x1.7e1f1cp-22f, 0x1.efa3acp-34f, 0.0f,
     0x1.34f1fap-25f, 0x1.4d40c2p-16f, 0x1.7b3d34p-120f, 0.0f, 0x1.e7c10ap-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f4278cp-53f, 0x1.26533p-57f, 0x1.19f3eap-21f, 0.0f, 0.0f,
     0.0f, 0x1.942b4ep-59f, 0x1.40e96ap-41f, 0x1.dcb4e8p-46f, 0x1.5358b6p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6ce758p-121f, 0x1.ba9e82p-62f, 0x1.730c24p-28f,
     0x1.bd3872p-88f, 0.0f, 0.0f, 0x1.71c8eap-10f, 0.0f, 0.0f, 0x1.9a9e26p-1f, 0.0f,
     0x1.263b5p-93f, 0x1.d5e88ep-69f, 0x1.311444p-94f, 0x1.449c5ap-56f, 0.0f, 0.0f,
     0x1.30b26p-62f, 0x1.e7be9cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7252fep-67f, 0.0f,
     0x1.02385ep-120f, 0.0f, 0x1.d172aap-35f, 0.0f, 0x1.fbec98p-32f, 0x1.bc49c8p-74f,
     0.0f, 0.0f, 0x1.9409cep-75f, 0.0f, 0x1.8cc24ep-11f, 0.0f, 0x1.cb6b34p-76f, 0.0f,
     0x1.668b42p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19a926p-44f, 0.0f, 0x1.5a6fe8p-76f,
     0x1.10e844p-63f, 0x1.4a8606p-3f, 0.0f, 0.0f, 0.0f, 0x1.5b7ea6p-43f,
     0x1.24f3b2p-16f, 0x1.d14924p-3f, 0x1.eb32b4p-36f, 0x1.a714fap-25f,
     0x1.a0a716p-94f, 0.0f, 0x1.443e18p-71f, 0x1.d0caep-1f, 0x1p0f, 0x1.1f9624p-92f,
     0x1.2794bcp-16f, 0.0f, 0x1.c4184p-51f, 0.0f, 0x1.e9a042p-25f, 0.0f,
     0x1.295332p-31f, 0.0f, 0.0f, 0.0f, 0x1.d49fb2p-30f, 0.0f, 0.0f, 0x1.bc236cp-95f,
     0.0f, 0.0f, 0x1.24aaa8p-78f, 0x1.087d1p-110f, 0x1.ee42fep-36f, 0.0f, 0.0f, 0.0f,
     0x1.d6bc18p-53f, 0.0f, 0x1.e0165ep-34f, 0.0f, 0.0f, 0.0f, 0x1.13986ep-33f,
     0x1.6f86bcp-48f, 0x1.2b08eep-68f, 0.0f, 0x1.05d418p-11f, 0.0f, 0x1.04c14ep-80f,
     0.0f, 0x1.dd20aep-22f, 0x1.716c52p-60f, 0x1.7fae62p-121f, 0x1.dd6cap-83f,
     0x1.64f714p-118f, 0x1.6d562cp-6f, 0x1.163af6p-71f, 0x1.55b2ap-100f,
     0x1.6bd34ep-22f, 0.0f, 0.0f, 0x1.5e0024p-12f, 0x1.034008p-110f, 0x1.ea4a8ep-81f,
     0.0f, 0.0f, 0.0f, 0x1.29d4bap-80f, 0x1.52a5f6p-12f, 0.0f, 0x1.daaaf2p-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.39b84cp-9f, 0.0f, 0.0f, 0x1.e950c8p-83f,
     0x1.64245p-44f, 0.0f, 0x1.4cebep-1f, 0.0f, 0x1.3e1182p-96f, 0x1.f3dc0ap-41f,
     0x1.ad2706p-48f, 0.0f, 0.0f, 0x1.7d31cep-19f, 0.0f, 0x1.ae09ccp-100f, 0.0f,
     0x1.5d0e4p-37f, 0x1.3df6aap-17f, 0.0f, 0x1.796174p-85f, 0.0f, 0.0f,
     0x1.9f5884p-32f, 0x1.ebb204p-4f, 0x1.53a5acp-78f, 0.0f, 0.0f, 0x1.364a7ep-43f,
     0x1.d7c948p-109f, 0.0f, 0x1.c50298p-93f, 0x1.a054c4p-1f, 0.0f, 0.0f,
     0x1.f9ed4ap-104f, 0x1.5137bep-11f, 0.0f, 0x1.bc43ccp-121f, 0.0f, 0.0f, 0.0f,
     0x1.335b04p-18f, 0x1.80cdc8p-79f, 0x1.ec02b8p-119f, 0x1.f75464p-47f, 0.0f,
     0x1.77bfbap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8538ep-111f,
     0x1.b573cap-112f, 0x1.23cc6ep-85f, 0x1.c18208p-28f, 0.0f, 0x1.83dca2p-91f,
     0x1.36134ap-70f, 0.0f, 0x1.d51d66p-32f, 0x1.4ab524p-57f, 0x1.0bd652p-45f, 0.0f,
     0x1.ab392ap-99f, 0.0f, 0x1.ca41d6p-5f, 0x1.099dcap-123f, 0x1.01b7bep-39f, 0.0f,
     0.0f, 0x1.af0c64p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.613328p-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef8d5ep-8f, 0x1.8898aep-6f, 0.0f, 0.0f, 0x1.04cc5cp-96f, 0.0f,
     0.0f, 0x1.844ea4p-47f, 0.0f, 0x1.cc45b6p-10f, 0x1.55f478p-11f, 0.0f,
     0x1.4f0042p-101f, 0x1.10d798p-13f, 0x1.bde5ccp-116f, 0x1.afe8ecp-46f,
     0x1.798f48p-17f, 0.0f, 0x1.d01f38p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.836962p-68f,
     0x1.17cc36p-79f, 0.0f, 0.0f, 0x1.8fab84p-60f, 0.0f, 0.0f, 0x1.09af86p-45f,
     0x1.d64a22p-64f, 0x1.bfcf4ap-1f, 0x1.e00214p-30f, 0.0f, 0x1.728ee8p-57f,
     0x1.c23f12p-12f, 0x1.b0f9e2p-15f, 0.0f, 0.0f, 0x1.df0868p-109f, 0.0f, 0.0f,
     0x1.e1795ep-57f, 0.0f, 0.0f, 0.0f, 0x1.10187p-7f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.cb7a22p-49f, 0.0f, 0x1.846a86p-31f, 0.0f, 0x1.243386p-66f,
     0x1.c23e5cp-44f, 0.0f, 0x1.f077dp-112f, 0x1.8a9bap-52f, 0.0f, 0.0f, 0.0f,
     0x1.b04d24p-104f, 0x1.ceb34cp-41f, 0x1.d24d98p-51f, 0x1.cb13ecp-63f, 0.0f,
     0x1.fda6e4p-31f, 0.0f, 0.0f, 0.0f, 0x1.3c2dd4p-42f, 0.0f, 0.0f, 0x1.aa96f4p-31f,
     0.0f, 0x1.7230f6p-9f, 0.0f, 0.0f, 0.0f, 0x1.f653e8p-114f, 0x1.004a46p-29f,
     0x1.0028b4p-2f, 0.0f, 0x1.027f1ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9365a4p-56f, 0x1.0b4c0ep-34f, 0x1.10201cp-91f, 0.0f, 0x1.695e5ap-55f, 0.0f,
     0x1.39e638p-122f, 0x1.ec466cp-94f, 0x1.e9f464p-59f, 0.0f, 0.0f, 0.0f,
     0x1.10d062p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c851d2p-34f,
     0x1.eacc74p-11f, 0x1.fb9682p-20f, 0x1.f7907ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1547ap-23f, 0x1.ea9e2ep-72f, 0.0f, 0.0f, 0.0f, 0x1.8ea07cp-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b68194p-15f, 0.0f, 0x1.8de1c2p-47f, 0x1.8c942p-3f,
     0x1.40599ep-112f, 0x1.5b026p-92f, 0x1.8464b6p-20f, 0x1.28290ap-83f, 0.0f, 0.0f,
     0x1.2ded32p-110f, 0x1.38f268p-58f, 0.0f, 0.0f, 0.0f, 0x1.ef25a6p-124f, 0.0f,
     0x1.022a4ap-93f, 0x1.654a5cp-90f, 0.0f, 0x1.352c1ap-122f, 0x1.659e3ap-44f,
     0x1.634d5p-105f, 0x1.81c44p-27f, 0.0f, 0.0f, 0.0f, 0x1.2be512p-63f,
     0x1.2391e4p-54f, 0x1.aad6cep-57f, 0x1.28a2b4p-124f, 0x1.66b74ep-57f,
     0x1.291138p-124f, 0x1.1bd1e2p-124f, 0.0f, 0x1.6c6dfcp-45f, 0x1.d79876p-99f,
     0x1.d7ae2cp-70f, 0.0f, 0x1.26e1c8p-20f, 0x1.6b66b6p-84f, 0x1.af5a88p-45f,
     0x1.6b2d68p-61f, 0.0f, 0.0f, 0x1.1767p-21f, 0x1.65659cp-26f, 0x1.283a8cp-16f,
     0x1.cc45cp-32f, 0.0f, 0.0f, 0x1.c5427ap-51f, 0x1.c1132ap-47f, 0x1.26e44cp-16f,
     0x1.826222p-62f, 0.0f, 0.0f, 0.0f, 0x1.44f52p-111f, 0.0f, 0x1.f2e3cap-91f, 0.0f,
     0.0f, 0x1.4fff28p-85f, 0.0f, 0.0f, 0.0f, 0x1.5c37e4p-46f, 0x1.c6610ep-126f,
     0x1.486778p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7d67ap-16f, 0x1.c83fa2p-56f, 0.0f,
     0x1.46422ep-97f, 0x1.54de1ep-81f, 0x1.8ad5c4p-117f, 0x1.dce396p-40f,
     0x1.fc04bep-53f, 0.0f, 0.0f, 0x1.e9eae6p-27f, 0x1.8b58bp-121f, 0x1.75e3ep-36f,
     0.0f, 0x1.20c31cp-33f, 0x1.750ba8p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7bafp-124f,
     0x1.46d03cp-97f, 0.0f, 0x1.90a514p-69f, 0x1.382f32p-78f, 0x1.87bd5ep-87f, 0.0f,
     0.0f, 0x1.63d07ep-46f, 0x1.a4dfecp-17f, 0.0f, 0x1.e20524p-123f, 0.0f,
     0x1.e6d344p-108f, 0.0f, 0x1.9b6548p-68f, 0.0f, 0.0f, 0x1.9c37dp-73f, 0.0f, 0.0f,
     0x1.df7b9ap-21f, 0.0f, 0x1.a6afep-70f, 0.0f, 0x1.d28762p-23f, 0x1.d429f2p-94f,
     0x1.99bf86p-38f, 0.0f, 0x1.5964ep-53f, 0x1.4cc1c6p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ced162p-9f, 0x1.fdeab8p-124f, 0x1.73bf62p-65f, 0x1.45655ap-83f, 0.0f, 0.0f,
     0x1.41431p-121f, 0.0f, 0x1.d68fa6p-39f, 0.0f, 0.0f, 0x1.4f0b08p-56f,
     0x1.b1afbp-1f, 0.0f, 0.0f, 0x1.4d2a9ap-98f, 0x1.aacc18p-95f, 0.0f, 0.0f, 0.0f,
     0x1.b622dp-37f, 0.0f, 0.0f, 0x1.b7fc4ap-125f, 0.0f, 0x1.408524p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ec7aeep-95f, 0.0f, 0x1.8a3e5ep-90f, 0x1.fe411ap-124f, 0.0f, 0.0f,
     0x1.f6d436p-27f, 0.0f, 0x1.d2d4b8p-45f, 0x1.d56deap-17f, 0x1.c85f84p-16f,
     0x1.3b3c5cp-78f, 0x1.8ef69p-92f, 0.0f, 0.0f, 0.0f, 0x1.b0fcbap-10f,
     0x1.b545aep-29f, 0x1.40b032p-126f, 0.0f, 0x1.5ff9aep-6f, 0x1.1a6868p-53f,
     0x1.5181f8p-94f, 0.0f, 0x1.c3f48p-75f, 0x1.3b2ca8p-107f, 0x1.46b56cp-1f, 0.0f,
     0.0f, 0x1.139534p-111f, 0.0f, 0.0f, 0.0f, 0x1.6f6c6ap-95f, 0x1.2dc028p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd28fap-42f, 0x1.5f7358p-1f, 0x1.9056b4p-45f, 0.0f,
     0.0f, 0.0f, 0x1.16f9f2p-119f, 0.0f, 0.0f, 0x1.870d74p-101f, 0.0f,
     0x1.419462p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fc85p-51f, 0.0f, 0x1.38bcc4p-70f,
     0x1.b79b1ep-66f, 0x1.53e05ap-6f, 0x1.38d9aep-124f, 0.0f, 0.0f, 0x1.0c4a58p-12f,
     0.0f, 0.0f, 0.0f, 0x1.ccb0ap-10f, 0.0f, 0.0f, 0.0f, 0x1.14dfa6p-11f,
     0x1.a44f42p-50f, 0x1.081b28p-62f, 0x1.33e1b2p-27f, 0.0f, 0x1.eb85c6p-67f,
     0x1.3d3098p-14f, 0.0f, 0.0f, 0x1.eed164p-96f, 0x1.a7a8ap-63f, 0x1.7e9f52p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7df1fp-24f, 0.0f, 0x1.a64bcep-2f,
     0x1.4a6826p-25f, 0x1.748708p-63f, 0x1.e70a6ap-13f, 0.0f, 0.0f, 0x1.031daep-13f,
     0x1.1d9f6p-78f, 0.0f, 0x1.3e8b82p-58f, 0x1.d2e63cp-112f, 0x1.3beb4p-120f,
     0x1.8a498ap-84f, 0x1.09e994p-22f, 0x1.4729aap-102f, 0.0f, 0x1.da3d84p-6f,
     0x1.f8b97p-42f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.529014p-103f,
     0x1.4d5cccp-48f, 0x1.f194dep-35f, 0.0f, 0x1.e38b1ep-23f, 0x1.32ca08p-99f, 0.0f,
     0.0f, 0x1.191eb6p-119f, 0x1.bf1f6cp-61f, 0x1.c1af36p-42f, 0x1.532fcap-126f,
     0x1.9e4f14p-82f, 0x1.9c988cp-66f, 0x1.04fedap-2f, 0.0f, 0.0f, 0x1.859e6p-50f,
     0.0f, 0x1.0ef1d4p-54f, 0.0f, 0.0f, 0.0f, 0x1.ea17fcp-49f, 0.0f, 0.0f, 0.0f,
     0x1.aad552p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5c43p-52f, 0.0f, 0x1.302beep-93f,
     0x1.7e32cp-90f, 0.0f, 0x1.b1e82p-50f, 0x1.6c2ff4p-114f, 0.0f, 0.0f, 0.0f,
     0x1.f0bcdp-101f, 0.0f, 0x1.ce1452p-34f, 0.0f, 0x1.a114a8p-118f, 0x1.8ff252p-14f,
     0.0f, 0.0f, 0x1.f86526p-121f, 0.0f, 0.0f, 0.0f, 0x1.55907ep-120f,
     0x1.fe3e18p-69f, 0x1.6dd162p-22f, 0.0f, 0x1.e63d04p-82f, 0x1.4e2decp-78f,
     0x1.9bb162p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecb7c2p-122f, 0x1.4bf748p-44f, 0.0f,
     0.0f, 0x1.adfe72p-30f, 0.0f, 0x1.8257e6p-57f, 0.0f, 0x1.e04b9ap-40f, 0.0f
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
            tmp1 = asinf(tmp0);
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
    printf("asinf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("asinf bench acc %a\n", global_bench_acc);
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
