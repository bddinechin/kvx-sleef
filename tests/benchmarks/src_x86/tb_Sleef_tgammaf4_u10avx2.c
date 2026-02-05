/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammaf4_u10avx2128.c --function Sleef_tgammaf4_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.e951f2p-112f, 0x1.33a2ep-126f, 0x1.9f6df8p-53f, 0x1.5caaf6p-92f,
     0x1.fb7d3cp-36f, 0x1.5c99d4p-97f, 0x1.4c0306p-1f, 0.0f, 0.0f, 0x1.f939f6p-40f,
     0x1.a6668ep-5f, 0.0f, 0x1.71eeccp-15f, 0x1.0555fcp-17f, 0.0f, 0x1.de228ep-36f,
     0x1.a29fe2p-4f, 0x1.001fbap-12f, 0.0f, 0.0f, 0.0f, 0x1.316ad2p-118f, 0.0f, 0.0f,
     0x1.00f36cp-35f, 0x1.05e648p-3f, 0x1.7d0628p-44f, 0x1.747ddap-80f, 0.0f,
     0x1.3567e2p-80f, 0.0f, 0x1.a4bc0ap-68f, 0.0f, 0x1.c5880ap-115f, 0.0f, 0.0f,
     0x1.be249ep-36f, 0x1.5bd758p-44f, 0.0f, 0x1.ef21a6p-123f, 0x1.0a34b2p-10f,
     0x1.a1055ep-85f, 0x1.1a01c2p-32f, 0x1.22237ep-61f, 0.0f, 0.0f, 0.0f,
     0x1.dc18d6p-79f, 0.0f, 0x1.f323fcp-49f, 0x1p0f, 0x1.d21e0ep-117f,
     0x1.3f3128p-27f, 0x1.6f8508p-58f, 0.0f, 0x1.8c3a1ep-25f, 0x1.f0afb6p-19f,
     0x1.60b382p-57f, 0.0f, 0x1.8f9048p-112f, 0.0f, 0.0f, 0.0f, 0x1.a22b2cp-16f,
     0x1.0d10f6p-4f, 0x1.b5c48ep-91f, 0x1.a6aa9p-94f, 0x1.04440cp-73f, 0.0f,
     0x1.3402aep-13f, 0.0f, 0.0f, 0x1.198cfep-65f, 0x1.d1a04ep-4f, 0x1.33aa02p-87f,
     0.0f, 0x1.3618c6p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bd436p-73f,
     0x1.8b1462p-67f, 0.0f, 0.0f, 0x1.b2962p-93f, 0.0f, 0x1.b7f8cap-46f,
     0x1.2f6ff2p-107f, 0.0f, 0x1.4c250ap-114f, 0x1.72735p-6f, 0x1.8c717ap-99f, 0.0f,
     0.0f, 0x1.6c31cap-89f, 0.0f, 0.0f, 0x1.792d8ap-93f, 0x1.b273eap-107f, 0.0f, 0.0f,
     0.0f, 0x1.33e2b2p-65f, 0.0f, 0x1.80cacep-8f, 0.0f, 0x1.d17e92p-109f,
     0x1.854a42p-54f, 0.0f, 0x1.886bb8p-16f, 0.0f, 0.0f, 0x1.5e9f82p-74f, 0.0f, 0.0f,
     0x1.936704p-32f, 0x1.4d389ep-120f, 0x1.a1f56cp-66f, 0.0f, 0x1.45a19cp-6f,
     0x1.6566cep-116f, 0x1.d0709ep-94f, 0.0f, 0.0f, 0.0f, 0x1.df8a1ap-61f,
     0x1.4bbc86p-60f, 0x1.b50d68p-39f, 0.0f, 0.0f, 0x1.bc796ap-21f, 0x1.d42d46p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baf5a2p-73f, 0.0f, 0.0f, 0x1.78df9ap-112f,
     0x1.354f92p-92f, 0.0f, 0.0f, 0.0f, 0x1.2f9fcep-93f, 0.0f, 0.0f, 0.0f,
     0x1.ac50e2p-37f, 0.0f, 0.0f, 0x1.a6c176p-78f, 0x1.6fe066p-63f, 0x1.99baaep-49f,
     0x1.d2f68ep-47f, 0x1.661992p-31f, 0x1.7745c6p-116f, 0.0f, 0x1.9a02fp-15f, 0.0f,
     0.0f, 0x1.c36c8ap-5f, 0x1.0eb3f2p-60f, 0.0f, 0.0f, 0.0f, 0x1.c454f6p-63f, 0.0f,
     0.0f, 0x1.c3ecf6p-108f, 0x1.037c04p-46f, 0.0f, 0x1.ce6fb8p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7feap-44f, 0.0f, 0x1.94b4ccp-109f, 0x1.98e1b6p-61f,
     0x1.625c8cp-96f, 0.0f, 0.0f, 0.0f, 0x1.fcf492p-113f, 0x1.543f02p-34f, 0.0f,
     0x1.60dd06p-1f, 0.0f, 0.0f, 0x1.aa0da2p-125f, 0.0f, 0x1.5f749ap-125f, 0.0f, 0.0f,
     0.0f, 0x1.36a054p-91f, 0.0f, 0x1.b2f002p-30f, 0.0f, 0x1p0f, 0.0f,
     0x1.6c8be8p-72f, 0.0f, 0.0f, 0x1.87dfcp-62f, 0x1.23d8fep-81f, 0x1.e0cd86p-18f,
     0x1.2dac5ap-110f, 0.0f, 0x1.435e3cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c84fbap-50f,
     0x1.05b272p-71f, 0x1.0cbc5cp-104f, 0.0f, 0x1.33c0e4p-61f, 0.0f, 0x1.cc7086p-15f,
     0x1.8efd5ep-95f, 0x1.36bfdep-73f, 0.0f, 0.0f, 0x1.2941c4p-66f, 0x1.018304p-123f,
     0.0f, 0.0f, 0x1.46df2ap-66f, 0.0f, 0x1.2ba03ap-105f, 0.0f, 0x1.8e46a8p-12f, 0.0f,
     0x1.86777cp-9f, 0.0f, 0x1.c7184ep-39f, 0.0f, 0x1.6311bep-110f, 0x1.750f2cp-80f,
     0x1.fd79eep-103f, 0x1.baa188p-49f, 0.0f, 0x1.4ba05ap-92f, 0.0f, 0x1.1b42d4p-14f,
     0x1.4757fp-117f, 0x1.4d9762p-88f, 0x1.f23222p-9f, 0.0f, 0.0f, 0.0f,
     0x1.3132e8p-73f, 0.0f, 0x1.29e2dcp-103f, 0x1.4eb066p-19f, 0.0f, 0x1.ddc16ep-11f,
     0x1.b439d8p-80f, 0x1.5221fcp-100f, 0x1.d0867p-100f, 0.0f, 0x1.2d386p-54f, 0.0f,
     0x1.e38ef6p-14f, 0.0f, 0x1.5fb134p-6f, 0.0f, 0.0f, 0x1.c36138p-58f,
     0x1.19d6fap-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c83538p-11f, 0x1.1ccbb4p-48f,
     0x1.6e02p-95f, 0.0f, 0.0f, 0x1.4dd6dap-65f, 0x1.97bae2p-48f, 0x1.24ba5p-32f,
     0x1.e12984p-58f, 0x1.4223bp-74f, 0x1.34b652p-101f, 0x1.394af6p-118f, 0.0f,
     0x1.ade9a6p-92f, 0x1.2fadcep-66f, 0.0f, 0.0f, 0.0f, 0x1.63ae22p-87f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.984078p-119f, 0.0f, 0x1.6cc47ap-58f, 0.0f, 0.0f,
     0x1.ed4f8cp-115f, 0.0f, 0x1.3bd3c4p-7f, 0.0f, 0.0f, 0x1.485308p-24f,
     0x1.dffd54p-26f, 0.0f, 0x1.6d3e96p-50f, 0x1.0bce32p-40f, 0x1.8428b6p-27f,
     0x1.9afffep-20f, 0.0f, 0x1.865a3p-38f, 0.0f, 0x1.7ffb42p-79f, 0.0f, 0.0f,
     0x1.b84f9ep-103f, 0x1.03842cp-21f, 0x1.6593dp-32f, 0.0f, 0.0f, 0x1.df83e2p-88f,
     0.0f, 0x1.16f5cp-116f, 0x1.392afep-65f, 0x1.d21ceep-112f, 0x1.c276d8p-36f, 0.0f,
     0x1.8c1f7ep-120f, 0x1.b3bb82p-109f, 0x1.950f48p-120f, 0x1.a3bcd6p-18f, 0.0f,
     0x1.540b94p-55f, 0x1.0900dp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aff0bcp-38f,
     0x1.9452eap-37f, 0.0f, 0.0f, 0x1.b5061ap-99f, 0x1.a05828p-38f, 0x1.e8fc1ap-121f,
     0x1.fb77ecp-36f, 0.0f, 0.0f, 0.0f, 0x1.5af366p-74f, 0.0f, 0.0f, 0x1.2878ccp-24f,
     0x1.36835ep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5f47cp-42f, 0.0f,
     0x1.ef89fep-69f, 0.0f, 0.0f, 0x1.c7d3p-81f, 0.0f, 0x1.69f12ap-16f, 0.0f, 0.0f,
     0.0f, 0x1.457798p-45f, 0.0f, 0x1.9f8716p-30f, 0.0f, 0.0f, 0x1.49c51cp-94f,
     0x1.3a728p-60f, 0.0f, 0x1.54794p-57f, 0.0f, 0x1.65c88ap-82f, 0.0f, 0.0f, 0.0f,
     0x1.e64f3ap-123f, 0x1.3515p-21f, 0x1.4ee094p-110f, 0x1.38c6b8p-39f,
     0x1.ba542ap-6f, 0x1.8c31fp-12f, 0.0f, 0x1.baf666p-5f, 0x1.53b94cp-109f, 0.0f,
     0x1.24849p-24f, 0x1.329e8cp-85f, 0.0f, 0.0f, 0x1.bd45b6p-9f, 0.0f, 0.0f, 0.0f,
     0x1.db45dcp-3f, 0x1.dd4374p-27f, 0.0f, 0x1.0f384ep-43f, 0x1.79c8e8p-10f, 0.0f,
     0x1.b44084p-121f, 0x1.4806bap-37f, 0x1.dde7b6p-98f, 0x1.27ff08p-103f, 0.0f,
     0x1.015f94p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2338ap-78f, 0.0f, 0.0f,
     0x1.0c3f3p-40f, 0.0f, 0.0f, 0x1.00a0d6p-104f, 0.0f, 0x1.636454p-114f,
     0x1.402caep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9dd8cp-48f, 0.0f, 0x1.bfc848p-4f,
     0.0f, 0x1.7a1aecp-40f, 0.0f, 0.0f, 0.0f, 0x1.4b881cp-21f, 0x1.fd0096p-26f, 0.0f,
     0.0f, 0.0f, 0x1.562c6ep-52f, 0.0f, 0x1.afc544p-101f, 0.0f, 0.0f, 0x1.9f768p-120f,
     0x1.08e348p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a11bap-85f, 0.0f, 0.0f,
     0x1.07a756p-28f, 0x1.5a7492p-42f, 0x1.d6f284p-92f, 0x1.d75bc4p-49f,
     0x1.d70d1ap-116f, 0x1.b9cf7ep-70f, 0x1.3af0b6p-70f, 0x1.4bec7p-111f,
     0x1.2a9aaap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5deea4p-63f, 0x1.026e5ep-7f,
     0.0f, 0.0f, 0x1.588fdp-56f, 0x1p0f, 0x1.3944e4p-22f, 0x1.914b16p-43f,
     0x1.4d9868p-8f, 0.0f, 0.0f, 0.0f, 0x1.4239ep-106f, 0x1.c98bf2p-46f,
     0x1.ee0b9cp-110f, 0.0f, 0.0f, 0x1.7158acp-85f, 0x1.926b0ap-88f, 0x1.fd436ep-1f,
     0.0f, 0x1.240e08p-59f, 0x1.59857ap-12f, 0.0f, 0x1.001f9cp-93f, 0x1.97cd82p-28f,
     0x1.c4695ep-92f, 0.0f, 0x1.19927ep-62f, 0x1.658528p-13f, 0x1.40f208p-125f,
     0x1.774efcp-42f, 0x1.e7c502p-85f, 0.0f, 0x1.169078p-103f, 0.0f, 0.0f,
     0x1.f69bfep-110f, 0.0f, 0.0f, 0.0f, 0x1.ecc472p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c94c82p-107f, 0.0f, 0.0f, 0x1.e7f036p-8f, 0x1.6e63c8p-36f, 0.0f, 0.0f, 0.0f,
     0x1.4e9b4cp-56f, 0.0f, 0x1.e0c058p-81f, 0.0f, 0x1.82f01ep-9f, 0x1.8e8c4ap-89f,
     0x1.02741p-76f, 0.0f, 0x1.3d7dep-2f, 0.0f, 0.0f, 0x1.ee056ap-29f,
     0x1.6ddcc8p-55f, 0x1.a25d46p-62f, 0.0f, 0.0f, 0x1.eb1dfcp-67f, 0.0f, 0.0f, 0.0f,
     0x1.559dc8p-76f, 0x1.6c2fccp-48f, 0x1.0b8ca4p-90f, 0.0f, 0.0f, 0x1.126898p-71f,
     0.0f, 0x1.b7b9eep-20f, 0.0f, 0.0f, 0x1.59ff82p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b1456p-44f, 0.0f, 0.0f, 0x1.aae242p-52f, 0.0f, 0x1.b55f2ap-78f,
     0x1.a1c556p-12f, 0x1.e25ee8p-29f, 0.0f, 0x1.78269ap-39f, 0.0f, 0x1.3f8f92p-72f,
     0x1.2f25c4p-3f, 0.0f, 0.0f, 0x1.4e8adp-71f, 0x1.80000ep-76f, 0.0f,
     0x1.785e18p-44f, 0.0f, 0x1.9b9d26p-107f, 0x1.f7ae12p-105f, 0.0f, 0.0f,
     0x1.c79cfep-61f, 0x1.4b4f54p-46f, 0x1.99834ep-81f, 0x1.61a578p-39f,
     0x1.b1278p-32f, 0x1.0f565cp-88f, 0x1.1630a8p-87f, 0x1.47eafp-72f, 0.0f, 0.0f,
     0x1.ddbad2p-101f, 0.0f, 0x1.c9caep-90f, 0x1.9a99c4p-7f, 0x1.7c8bbep-99f, 0.0f,
     0x1.c622fap-45f, 0.0f, 0.0f, 0x1.eb23cap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b2c45p-7f, 0x1.48f016p-87f, 0x1.0a7228p-74f, 0.0f, 0x1.b71ae2p-83f,
     0.0f, 0x1.e30fe2p-8f, 0x1.9ae0ecp-41f, 0.0f, 0x1.0f4b9cp-51f, 0.0f, 0.0f, 0.0f,
     0x1.d9619ap-76f, 0.0f, 0x1.924e0cp-108f, 0.0f, 0.0f, 0x1.37f8dep-95f,
     0x1.aaf4f2p-111f, 0.0f, 0x1.4e89eap-87f, 0x1.4f7958p-82f, 0x1.d4753ep-51f,
     0x1.7226c2p-113f, 0x1.5b8b9ep-30f, 0.0f, 0.0f, 0x1.b4505ap-119f, 0.0f, 0.0f,
     0x1.1c1888p-7f, 0.0f, 0x1.e16bfap-34f, 0.0f, 0x1.2d511ap-38f, 0.0f, 0.0f,
     0x1.0659p-78f, 0.0f, 0x1.a0a864p-13f, 0x1.8d6338p-19f, 0.0f, 0.0f, 0.0f,
     0x1.de4edcp-59f, 0x1.20f4c6p-31f, 0x1.3b9eep-87f, 0x1.c38302p-24f, 0.0f,
     0x1.89b49cp-27f, 0x1.4d785cp-52f, 0.0f, 0.0f, 0.0f, 0x1.61894ap-11f, 0.0f,
     0x1.6e7a46p-7f, 0x1.5791dp-42f, 0x1.478134p-83f, 0.0f, 0.0f, 0x1.e38beep-19f,
     0.0f, 0x1.339c3cp-7f, 0.0f, 0x1.7ef82cp-5f, 0.0f, 0.0f, 0x1.021a5p-56f,
     0x1.f0e89ap-17f, 0.0f, 0x1.b288fp-26f, 0.0f, 0.0f, 0.0f, 0x1.10bd4p-102f,
     0x1.f7b2e4p-126f, 0.0f, 0.0f, 0.0f, 0x1.231c28p-120f, 0x1.d4d7bep-58f, 0.0f,
     0x1.0a458p-49f, 0x1.44992ep-54f, 0.0f, 0x1.e1bfcap-27f, 0x1.ca5dc6p-96f, 0.0f,
     0.0f, 0.0f, 0x1.0916b6p-83f, 0x1.f4ab16p-110f, 0.0f, 0.0f, 0x1.7d4d02p-125f,
     0.0f, 0.0f, 0x1.b7df82p-98f, 0.0f, 0x1.0f124cp-85f, 0x1.9b26p-104f, 0.0f,
     0x1.d7e266p-49f, 0.0f, 0.0f, 0x1.82ae6p-15f, 0x1.cbe67p-16f, 0.0f,
     0x1.a8beeep-99f, 0.0f, 0.0f, 0.0f, 0x1.8d001p-20f, 0.0f, 0x1.5d9f54p-79f,
     0x1.442644p-74f, 0x1.8d4ddep-39f, 0.0f, 0.0f, 0.0f, 0x1.4db438p-42f, 0.0f, 0.0f,
     0.0f, 0x1.8e18a8p-26f, 0.0f, 0x1.a8cd62p-73f, 0x1.5e0e38p-107f, 0x1.fb4448p-15f,
     0.0f, 0.0f, 0x1.163ed4p-41f, 0.0f, 0.0f, 0.0f, 0x1.3ed5a8p-63f, 0x1.b6cb58p-42f,
     0x1.4c15eep-82f, 0x1.5f9f88p-120f, 0.0f, 0x1.8d9b4p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10a696p-99f, 0.0f, 0x1.c84b38p-34f, 0.0f, 0x1.d390eep-55f, 0x1.1af204p-53f,
     0x1.01eca6p-115f, 0x1.fb4caap-42f, 0.0f, 0.0f, 0x1.809918p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e2bbcap-19f, 0x1.3783fep-34f, 0x1.7a0c18p-116f, 0x1.44b228p-21f,
     0.0f, 0.0f, 0x1.e8472ep-32f, 0x1.d66d5ep-102f, 0x1.bb737cp-118f,
     0x1.079076p-110f, 0x1.b4452ap-32f, 0x1.2ef61ep-61f, 0x1.6e93b2p-126f, 0.0f,
     0x1.9e3bb8p-99f, 0x1.229ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc22dp-3f, 0.0f,
     0.0f, 0x1.2c633ap-51f, 0.0f, 0.0f, 0x1.15b778p-4f, 0x1.7134bp-87f, 0.0f,
     0x1.cf1f8cp-29f, 0.0f, 0.0f, 0.0f, 0x1.6a5f3p-14f, 0.0f, 0.0f, 0x1.a11bacp-105f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c8444p-59f, 0.0f, 0x1.c51b56p-86f,
     0x1.f466d4p-73f, 0x1.76acdcp-95f, 0x1.2c56cap-92f, 0x1.47d33ep-103f,
     0x1.7a80fcp-103f, 0x1.743cfep-27f, 0x1.75757cp-100f, 0x1.84cfc4p-15f, 0.0f, 0.0f,
     0.0f, 0x1.322b5cp-80f, 0.0f, 0.0f, 0x1.d8cddcp-114f, 0.0f, 0x1.6fca12p-120f,
     0x1.0ac6d8p-5f, 0.0f, 0x1.8632fap-41f, 0.0f, 0.0f, 0x1.b843c4p-58f,
     0x1.9e464ep-76f, 0x1.8c64c4p-79f, 0.0f, 0x1.4e525ep-16f, 0x1.9f2cf8p-63f,
     0x1.506662p-16f, 0.0f, 0.0f, 0x1.f892e6p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa71a8p-49f, 0x1.566404p-91f, 0.0f, 0.0f, 0.0f, 0x1.adae72p-16f, 0.0f,
     0x1.24251ep-70f, 0x1.82db18p-45f, 0x1.640f48p-14f, 0x1.d3594cp-41f, 0.0f, 0.0f,
     0.0f, 0x1.ac166cp-102f, 0.0f, 0.0f, 0x1.d4b7cap-92f, 0x1.4df51ep-17f, 0.0f,
     0x1.efd762p-90f, 0x1.eb4ddep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11b7e8p-23f,
     0x1.fe20f2p-116f, 0x1.8816aap-41f, 0.0f, 0.0f, 0x1.980a72p-94f, 0.0f,
     0x1.c5d44ap-80f, 0x1.633ab6p-118f, 0x1.ed3bdap-95f, 0x1.4c687cp-83f, 0.0f, 0.0f,
     0x1.935b9ap-29f, 0x1.4290eep-123f, 0.0f, 0x1.74e5bap-18f, 0.0f, 0x1.aa81d4p-92f,
     0x1.2694b4p-112f, 0.0f, 0x1.63a97ep-88f, 0.0f, 0.0f, 0.0f, 0x1.a67e84p-112f,
     0.0f, 0x1.2c1f6cp-93f, 0.0f, 0x1.78a5cep-50f, 0.0f, 0x1.f3617ap-121f, 0.0f, 0.0f,
     0.0f, 0x1.c3738ep-108f, 0x1.277102p-56f, 0x1.14166cp-119f, 0.0f, 0.0f, 0.0f,
     0x1.1fde1p-60f, 0.0f, 0.0f, 0x1.b75dbap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dab684p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f90f04p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.401482p-26f, 0x1.c600eap-97f, 0x1.4cdeecp-30f, 0x1.99d05ap-110f,
     0x1.219a1cp-23f, 0x1.3b0962p-123f, 0.0f, 0x1.f7f5b4p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d919dep-122f, 0x1.d0252cp-24f, 0x1.514266p-80f, 0x1.c9432ep-13f, 0.0f,
     0.0f, 0x1.a6ebap-10f, 0x1.8771d6p-25f, 0x1.9eb602p-102f, 0x1.49e2f4p-20f, 0.0f,
     0.0f, 0x1.2ac8bp-12f, 0.0f, 0.0f, 0.0f, 0x1.7b9d56p-95f, 0x1.08bbb2p-112f,
     0x1.40335ep-21f, 0x1.c8db3cp-113f, 0.0f, 0x1.93fd7cp-57f, 0.0f, 0.0f,
     0x1.bc2f12p-37f, 0x1.886b82p-21f, 0.0f
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
            tmp1 = Sleef_tgammaf4_u10avx2128(tmp0);
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
    printf("Sleef_tgammaf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tgammaf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
