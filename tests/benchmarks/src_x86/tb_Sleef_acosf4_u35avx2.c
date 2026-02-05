/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf4_u35avx2128.c --function Sleef_acosf4_u35avx2128 \
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
     0x1.7eaccep-14f, 0x1.2c1002p-41f, 0.0f, 0.0f, 0x1.e66684p-86f, 0.0f,
     0x1.0dd606p-94f, 0.0f, 0x1.ebc98cp-14f, 0x1.8263ecp-8f, 0x1.81f6fap-115f,
     0x1.08e7a6p-10f, 0x1.4e99e2p-92f, 0.0f, 0.0f, 0.0f, 0x1.5f882ep-43f, 0.0f, 0.0f,
     0.0f, 0x1.73cd3ap-112f, 0x1.786482p-67f, 0.0f, 0.0f, 0.0f, 0x1.1a8e6ep-114f,
     0x1.f65982p-112f, 0x1.a356fap-1f, 0.0f, 0x1.4951e6p-94f, 0x1.85ff4cp-110f,
     0x1.a97322p-23f, 0.0f, 0x1.0db282p-72f, 0.0f, 0.0f, 0x1.e89b82p-83f, 0.0f,
     0x1.c564cp-123f, 0x1.b3882p-39f, 0x1.9a4fc6p-34f, 0.0f, 0.0f, 0.0f,
     0x1.9fd21ep-114f, 0.0f, 0.0f, 0x1.def424p-111f, 0x1.deef6ep-17f, 0x1.464ddp-57f,
     0x1.6e469ap-59f, 0.0f, 0.0f, 0x1.9aee9cp-36f, 0.0f, 0.0f, 0.0f, 0x1.252b12p-99f,
     0.0f, 0x1.061bc4p-126f, 0.0f, 0x1.d1c202p-114f, 0.0f, 0.0f, 0.0f,
     0x1.66a96ap-46f, 0.0f, 0.0f, 0x1.cb61c2p-85f, 0.0f, 0.0f, 0x1.f675ap-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e16c58p-22f, 0.0f, 0x1.4d6542p-44f, 0.0f, 0x1.16ea46p-120f,
     0x1.d93028p-16f, 0.0f, 0.0f, 0x1.84c678p-88f, 0.0f, 0x1.200b66p-21f, 0.0f, 0.0f,
     0x1.23d4dcp-118f, 0x1.c1fb62p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ec56cp-94f, 0x1.ff5d96p-118f, 0.0f, 0.0f, 0x1.92c2bcp-88f, 0.0f, 0.0f,
     0x1.99023cp-64f, 0x1.ca2014p-108f, 0.0f, 0x1.e3b682p-108f, 0x1.915c72p-28f,
     0x1.d081c2p-39f, 0x1.0c33b4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.133388p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.121ecep-32f, 0x1.5a9276p-70f, 0.0f,
     0x1.9f807cp-31f, 0x1.9707fp-28f, 0.0f, 0x1.96a316p-105f, 0.0f, 0x1.7cc2ccp-123f,
     0.0f, 0.0f, 0.0f, 0x1.e09e2ep-21f, 0.0f, 0x1.5c05acp-70f, 0.0f, 0x1.701332p-43f,
     0.0f, 0x1.7b4b7p-100f, 0x1.4ae598p-117f, 0.0f, 0x1.f25a2cp-88f, 0.0f,
     0x1.fcf59p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9c7f4p-42f, 0.0f, 0.0f,
     0x1.cf0a3p-22f, 0.0f, 0x1.c8fa46p-79f, 0x1.389b28p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb5bfp-79f, 0.0f, 0.0f, 0x1.61a54ep-48f, 0x1.ce5282p-32f, 0x1.3bb5f8p-96f,
     0x1.0eb266p-3f, 0.0f, 0x1.cbbf2ap-88f, 0x1.5422c4p-91f, 0.0f, 0x1.b58b12p-69f,
     0x1.84558cp-118f, 0x1.2e5546p-115f, 0.0f, 0x1.bc7a9ep-120f, 0x1.9c6094p-100f,
     0x1.935dbp-64f, 0x1.f339e6p-78f, 0.0f, 0.0f, 0x1.88b908p-21f, 0x1.c76402p-115f,
     0.0f, 0.0f, 0x1.e78cc8p-51f, 0.0f, 0x1p0f, 0x1.a5a1cep-72f, 0x1.6e0fdap-68f,
     0.0f, 0.0f, 0.0f, 0x1.f3d638p-52f, 0.0f, 0x1.016406p-51f, 0x1.ecc522p-90f,
     0x1.86422ep-82f, 0x1.b73c9cp-50f, 0x1.372d12p-22f, 0.0f, 0.0f, 0.0f,
     0x1.843554p-125f, 0.0f, 0x1.9767e8p-40f, 0.0f, 0x1.f5f8b6p-23f, 0x1.af3234p-100f,
     0.0f, 0.0f, 0x1.96f312p-41f, 0.0f, 0.0f, 0x1.3de958p-99f, 0.0f, 0x1.1237eep-99f,
     0x1.1a9768p-14f, 0.0f, 0x1.631c66p-17f, 0.0f, 0x1.fe093cp-97f, 0.0f, 0.0f,
     0x1.63e528p-26f, 0x1.2bd8dp-55f, 0.0f, 0x1.439468p-25f, 0.0f, 0x1.d3a248p-45f,
     0.0f, 0.0f, 0.0f, 0x1.1b3274p-94f, 0.0f, 0.0f, 0x1.2b8a54p-100f,
     0x1.4324fep-112f, 0.0f, 0.0f, 0.0f, 0x1.dfc5e4p-100f, 0x1.671d8cp-100f,
     0x1.479086p-98f, 0.0f, 0x1.fe01fcp-125f, 0x1.e0aa1cp-88f, 0x1.bebc9ep-40f,
     0x1.0803a6p-28f, 0.0f, 0x1.05f436p-48f, 0x1.ead31p-66f, 0x1.5cb8f6p-39f, 0.0f,
     0.0f, 0x1.5ac1e4p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fad56p-114f, 0.0f,
     0x1.c42fdp-111f, 0x1.d20ac4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eeb952p-48f, 0x1.83be1cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9645p-5f,
     0x1.64cbe4p-95f, 0.0f, 0x1.f8e12ep-111f, 0x1.26f1f6p-103f, 0x1.0596f4p-98f, 0.0f,
     0.0f, 0.0f, 0x1.ec4574p-93f, 0x1.2fe87p-96f, 0x1.810e9cp-51f, 0x1.d0a6p-30f,
     0x1.909628p-76f, 0.0f, 0.0f, 0x1.0d5cd6p-53f, 0.0f, 0.0f, 0x1.4fdd6cp-9f, 0.0f,
     0x1.fa327ep-21f, 0.0f, 0x1.927a1ap-6f, 0x1.bcb418p-11f, 0.0f, 0.0f, 0.0f,
     0x1.0f8d62p-61f, 0.0f, 0x1.a4207cp-1f, 0.0f, 0x1.e6e4p-79f, 0x1.d4a374p-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.63cddp-40f, 0x1.812acp-111f, 0.0f, 0x1.76a6d4p-111f,
     0x1.9bff1ap-104f, 0.0f, 0x1.69c158p-36f, 0x1.f18912p-116f, 0x1.4cad7ep-84f, 0.0f,
     0x1.fe5b3ap-112f, 0x1.4002e2p-82f, 0.0f, 0x1.15b166p-42f, 0.0f, 0x1.9b0e02p-126f,
     0x1.0ba114p-42f, 0x1.24b9eap-27f, 0x1.9e03cap-52f, 0.0f, 0x1.1be67ap-87f,
     0x1.90c216p-78f, 0.0f, 0x1.3b2fd2p-64f, 0.0f, 0.0f, 0.0f, 0x1.1ea5cep-12f,
     0x1.ae30d6p-125f, 0x1.50122cp-80f, 0.0f, 0.0f, 0.0f, 0x1.01bce4p-36f, 0.0f, 0.0f,
     0x1.2fea04p-56f, 0x1.47830ap-53f, 0x1.5e7eb2p-8f, 0x1.8ffa8ap-21f, 0.0f,
     0x1.95173ep-120f, 0x1.85b5dcp-110f, 0.0f, 0x1.f3e67ep-26f, 0.0f,
     0x1.cf73c2p-105f, 0x1.b7350ep-103f, 0.0f, 0.0f, 0x1.1e2c4ep-41f, 0x1.11a7c4p-22f,
     0x1.717ec2p-38f, 0.0f, 0x1.9cffe2p-101f, 0x1.9b2b68p-79f, 0x1.28f80cp-73f,
     0x1.2a0f3p-5f, 0x1.2e4a02p-73f, 0x1.51b13cp-12f, 0x1.6cdd52p-75f,
     0x1.356c1ap-102f, 0x1.9ff7a8p-17f, 0.0f, 0.0f, 0x1.18628ap-72f, 0x1.76b7b8p-83f,
     0x1.fcafcap-30f, 0x1.77863ap-98f, 0x1.1def4cp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9442ccp-30f, 0.0f, 0x1.338be6p-112f, 0x1.c98966p-33f, 0x1.cfd1bcp-86f,
     0x1.815b3ap-64f, 0.0f, 0x1.8666d8p-104f, 0.0f, 0.0f, 0x1.4a5904p-20f, 0.0f,
     0x1.e561dap-15f, 0.0f, 0.0f, 0.0f, 0x1.211dcp-3f, 0x1.edcb24p-95f, 0.0f, 0.0f,
     0x1.3a0b96p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37d56ap-3f, 0x1.6dfd82p-43f,
     0x1.7ee8f4p-67f, 0.0f, 0.0f, 0x1.f85b1p-118f, 0.0f, 0x1.ebb706p-55f,
     0x1.2015bap-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b9ceep-15f,
     0x1.07b11cp-74f, 0x1.749676p-88f, 0x1.ee2224p-79f, 0x1.3b619ep-25f, 0.0f, 0.0f,
     0.0f, 0x1.bad94p-26f, 0x1.66ed22p-2f, 0.0f, 0.0f, 0x1.f36af4p-124f, 0.0f,
     0x1.a2b69ep-119f, 0x1.261b0cp-60f, 0x1.6ffa56p-93f, 0x1.46bf68p-126f,
     0x1.78411ap-95f, 0x1.3f9626p-118f, 0x1.3a036ep-7f, 0.0f, 0x1.59ea08p-86f,
     0x1.10626ep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b76bep-69f, 0.0f, 0.0f,
     0x1.54a3c8p-46f, 0.0f, 0.0f, 0.0f, 0x1.69bd06p-42f, 0x1.aee266p-60f, 0.0f,
     0x1.81be8p-8f, 0x1.b15018p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4b052p-69f,
     0.0f, 0x1.c85a66p-43f, 0x1.958e34p-4f, 0.0f, 0x1.b984bap-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f87926p-38f, 0.0f, 0.0f, 0.0f,
     0x1.baa6d2p-105f, 0.0f, 0.0f, 0x1.eaf1b8p-120f, 0.0f, 0.0f, 0x1.b64bfp-34f,
     0x1.aef816p-30f, 0x1.08baa2p-4f, 0x1.f65e3ep-98f, 0.0f, 0x1.d7385ap-124f, 0.0f,
     0x1.78d73ap-76f, 0x1.f8158ap-53f, 0.0f, 0x1.7d6b7cp-7f, 0.0f, 0.0f,
     0x1.49fed4p-53f, 0.0f, 0.0f, 0.0f, 0x1.e8d6a4p-31f, 0.0f, 0x1.adc76cp-70f, 0.0f,
     0x1.71bc8ep-46f, 0x1.9ba624p-9f, 0.0f, 0x1.b9bfd4p-61f, 0.0f, 0x1.351754p-61f,
     0.0f, 0x1.bd1b08p-88f, 0.0f, 0.0f, 0x1.29e7ep-110f, 0x1.0457eep-86f,
     0x1.32be28p-24f, 0.0f, 0x1.df32ccp-4f, 0.0f, 0x1.bc15bep-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5afb7ep-86f, 0x1.cd4192p-9f, 0x1.0b4166p-43f, 0x1.054c72p-35f,
     0x1.f96c1ep-17f, 0.0f, 0x1.d6b106p-105f, 0x1.c4d302p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7678c6p-73f, 0.0f, 0.0f, 0.0f, 0x1.e193d2p-7f, 0.0f, 0x1.7bdba6p-23f, 0.0f,
     0x1.22a2bcp-14f, 0.0f, 0x1.a6d6d8p-104f, 0.0f, 0x1.d94c12p-89f, 0x1.0085b6p-70f,
     0.0f, 0x1.83b738p-35f, 0x1.146eccp-110f, 0.0f, 0x1.61e41ep-15f, 0.0f,
     0x1.0fecaap-10f, 0x1.08d3f4p-54f, 0x1.286fbap-26f, 0x1.d31f76p-57f,
     0x1.0d0d72p-73f, 0.0f, 0.0f, 0x1.984baap-23f, 0.0f, 0x1.16f67ap-92f,
     0x1.5485e6p-121f, 0.0f, 0.0f, 0.0f, 0x1.cae8a6p-6f, 0x1p0f, 0x1.57f9f2p-79f,
     0x1.77d8aep-43f, 0.0f, 0.0f, 0x1.b15706p-28f, 0.0f, 0x1.9d0972p-13f,
     0x1.5563ap-41f, 0.0f, 0x1.c5895cp-50f, 0x1.dc2592p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1a9e1ap-109f, 0x1.2e8ac2p-53f, 0.0f, 0x1.5ce5e6p-36f, 0.0f,
     0.0f, 0.0f, 0x1.954896p-87f, 0.0f, 0.0f, 0.0f, 0x1.2a4dc2p-22f, 0.0f, 0.0f,
     0x1.41e89p-35f, 0.0f, 0.0f, 0x1.5e38d8p-67f, 0x1.a9a0b2p-20f, 0x1.1ea3p-121f,
     0.0f, 0.0f, 0x1.4da03ap-102f, 0.0f, 0x1.dbe692p-103f, 0.0f, 0x1.ac88cp-113f,
     0.0f, 0.0f, 0x1.32de9cp-40f, 0.0f, 0.0f, 0x1.f25b3ap-18f, 0x1.386032p-19f, 0.0f,
     0.0f, 0x1.bf003p-61f, 0.0f, 0x1.1be0aep-125f, 0.0f, 0.0f, 0x1.171432p-110f,
     0x1.be2324p-43f, 0.0f, 0.0f, 0.0f, 0x1.9a138ap-13f, 0.0f, 0x1.8b8f6ep-94f,
     0x1.8a5c38p-36f, 0.0f, 0x1.9c9a76p-91f, 0x1.281426p-51f, 0.0f, 0.0f, 0.0f,
     0x1.5df7b2p-87f, 0.0f, 0x1.3d434cp-63f, 0.0f, 0.0f, 0x1.ea7be4p-70f,
     0x1.596a4ap-8f, 0x1.2585d2p-8f, 0.0f, 0x1.e57956p-115f, 0.0f, 0x1.8835bcp-75f,
     0x1.58ed9p-10f, 0.0f, 0x1.7a848ep-66f, 0x1.d90224p-27f, 0.0f, 0x1.410b24p-9f,
     0.0f, 0.0f, 0x1.484bcap-86f, 0.0f, 0x1.3dffc8p-55f, 0.0f, 0x1.2e59ep-114f,
     0x1.5571dcp-101f, 0.0f, 0x1.caea8cp-16f, 0.0f, 0x1.ecae84p-74f, 0x1.8ae3e4p-29f,
     0.0f, 0.0f, 0.0f, 0x1.e2c818p-89f, 0x1.7d2a64p-105f, 0x1.cb6b3ep-36f, 0.0f,
     0x1.532abap-5f, 0x1.a3004p-99f, 0x1.b36cbcp-30f, 0x1.916998p-37f, 0.0f,
     0x1.9934dp-79f, 0.0f, 0x1.7c1ec4p-50f, 0x1.1683eep-75f, 0.0f, 0x1.56e5fcp-1f,
     0x1.1059dcp-56f, 0x1.3b15d6p-49f, 0.0f, 0x1.400e62p-42f, 0x1.1bf95p-3f,
     0x1.09bfd8p-79f, 0x1.671dcap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a894a8p-4f,
     0x1.065aa2p-92f, 0.0f, 0x1.ed272p-81f, 0x1p0f, 0x1.80290ep-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fc0918p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30b328p-18f, 0.0f,
     0x1.37c884p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36f23cp-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bec7cp-106f, 0x1.3dbccep-61f, 0x1.97983p-23f, 0.0f, 0.0f, 0x1.dbffdp-117f,
     0.0f, 0x1.340c3p-68f, 0x1.dd6b6cp-124f, 0.0f, 0.0f, 0x1.3462c4p-23f, 0.0f,
     0x1.12a8a2p-95f, 0.0f, 0x1.e39ff4p-103f, 0x1.a4a0fep-124f, 0.0f, 0x1.0cdc8cp-18f,
     0.0f, 0.0f, 0x1.a11d84p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd2bbp-102f,
     0x1.c70d74p-83f, 0x1.d90422p-69f, 0x1.319a1ap-100f, 0x1.717c8ap-20f,
     0x1.a206b4p-69f, 0.0f, 0x1.75e0dap-2f, 0x1.923d38p-32f, 0x1.232bp-94f,
     0x1.14de8cp-76f, 0x1.4ef69ap-22f, 0.0f, 0.0f, 0x1.c6df2ep-33f, 0x1.8d25fep-105f,
     0x1.815954p-24f, 0x1.b33b6p-83f, 0.0f, 0.0f, 0x1.dcc5dcp-14f, 0x1.69d17cp-100f,
     0x1.3ef214p-94f, 0.0f, 0.0f, 0x1.25abc6p-36f, 0.0f, 0.0f, 0.0f, 0x1.d4160cp-23f,
     0x1.9a6bb8p-29f, 0x1.e5eb0ep-61f, 0x1.52fb08p-72f, 0.0f, 0.0f, 0x1.5ddbaep-23f,
     0x1.aed02ep-56f, 0.0f, 0.0f, 0x1.4c514ap-71f, 0.0f, 0x1.bd7c6p-7f,
     0x1.fb44b2p-118f, 0x1.620aecp-94f, 0.0f, 0.0f, 0x1.93a128p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.460f0ap-23f, 0.0f, 0.0f, 0x1.d58d0ep-66f, 0.0f, 0.0f, 0x1.cbfc9ap-103f,
     0x1.d5181ap-32f, 0x1.7d2194p-64f, 0x1.615d34p-119f, 0.0f, 0.0f, 0x1.e440d4p-75f,
     0.0f, 0.0f, 0x1.2c25p-24f, 0.0f, 0.0f, 0x1.f8932cp-94f, 0.0f, 0.0f,
     0x1.e5dbfcp-16f, 0x1.6d474cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91760ap-7f,
     0x1.bdc1ecp-71f, 0x1.dfef2cp-67f, 0x1.dc4256p-51f, 0x1.8547eap-101f,
     0x1.0c3012p-113f, 0.0f, 0x1.b712bap-62f, 0.0f, 0.0f, 0x1.2621d4p-2f,
     0x1.e37332p-101f, 0x1.03a45cp-97f, 0x1.b04a7cp-118f, 0.0f, 0x1.be7876p-51f,
     0x1.2434e6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.397644p-124f, 0.0f, 0x1p0f, 0.0f,
     0x1.cfa48ep-106f, 0x1.915e6p-43f, 0.0f, 0x1.0f137p-99f, 0.0f, 0x1.e11a08p-25f,
     0x1.a2f422p-29f, 0.0f, 0x1.2d5d78p-64f, 0x1.da9c6ep-65f, 0x1.06191ep-1f,
     0x1.dfa644p-30f, 0x1.464ap-24f, 0x1.661358p-35f, 0.0f, 0x1.29e9cp-71f, 0.0f,
     0x1.7175fep-65f, 0x1.f1ea42p-47f, 0.0f, 0x1.9f4632p-90f, 0x1.b36a78p-123f, 0.0f,
     0x1.e39972p-88f, 0.0f, 0x1.f88376p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0366p-89f,
     0x1.6dadcp-105f, 0x1.011978p-47f, 0.0f, 0x1.85c148p-68f, 0x1.799f0ap-73f, 0.0f,
     0x1.7106ccp-9f, 0.0f, 0x1.05e30ep-41f, 0x1.81972ep-113f, 0.0f, 0.0f,
     0x1.e88c54p-20f, 0x1.a55472p-22f, 0x1.0b584ap-32f, 0x1.95e9e2p-80f, 0.0f,
     0x1.c080c4p-111f, 0x1.e602e6p-125f, 0x1.1a8d5cp-10f, 0x1.7ac884p-19f,
     0x1.88bbd6p-114f, 0.0f, 0.0f, 0x1.c7c256p-124f, 0x1.d1c0ecp-50f, 0x1.298a9p-69f,
     0.0f, 0.0f, 0x1.43f182p-75f, 0.0f, 0x1.bb01f4p-44f, 0.0f, 0.0f, 0x1.9ae4cep-77f,
     0.0f, 0x1.5c5f2ep-40f, 0x1.b7aecap-121f, 0x1.95cedcp-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.30896cp-75f, 0x1.9b9786p-79f, 0x1.c43ae6p-5f, 0x1.92aa22p-56f,
     0x1.a597bcp-46f, 0.0f, 0.0f, 0x1.d96252p-30f, 0x1.5a5d12p-48f, 0.0f,
     0x1.af7178p-6f, 0x1.0a8456p-1f, 0x1.8bf59cp-76f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.3a0578p-52f, 0.0f, 0x1.8886d2p-9f, 0x1.61f62cp-11f, 0.0f, 0.0f,
     0x1.08dc7cp-11f, 0x1.1d80fcp-18f, 0x1.63824p-73f, 0.0f, 0x1.adcb4ap-4f,
     0x1.e420dap-45f, 0.0f, 0.0f, 0.0f, 0x1.3f796ap-116f, 0.0f, 0x1.cf2162p-92f,
     0x1.c12c94p-101f, 0.0f, 0x1.a07458p-70f, 0x1.6cbaf8p-58f, 0.0f, 0x1.37ca48p-66f,
     0.0f
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
            tmp1 = Sleef_acosf4_u35avx2128(tmp0);
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
    printf("Sleef_acosf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acosf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
