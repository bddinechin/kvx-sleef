/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf4_u35avx2128.c --function Sleef_tanhf4_u35avx2128 \
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
     0.0f, 0x1.622752p-61f, 0.0f, 0.0f, 0.0f, 0x1.2e9e46p-125f, 0x1.a33c52p-97f,
     0x1.416a0cp-79f, 0x1.819f42p-11f, 0x1.5dc238p-8f, 0.0f, 0x1.32770cp-31f,
     0x1.e774c4p-7f, 0.0f, 0x1.f3db54p-31f, 0.0f, 0x1.5d224p-66f, 0x1.ccf086p-50f,
     0x1.c06c9cp-35f, 0x1.b9f13cp-5f, 0x1.8ea80cp-112f, 0.0f, 0x1.e1d522p-56f,
     0x1.6a5294p-54f, 0x1.577574p-18f, 0x1.04630ap-94f, 0.0f, 0x1.d789c4p-55f, 0.0f,
     0x1.006a4p-34f, 0x1.2c0a1p-27f, 0.0f, 0x1.76360cp-121f, 0x1.203824p-124f,
     0x1.b5d4dep-23f, 0.0f, 0.0f, 0.0f, 0x1.8fcf74p-120f, 0x1.0b746ap-11f, 0.0f,
     0x1.e164e2p-106f, 0x1.9c6f3ep-30f, 0.0f, 0.0f, 0x1.f9be82p-123f, 0.0f,
     0x1.4dd862p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6d632p-122f, 0x1.be7992p-92f, 0x1.522886p-88f, 0x1.3c29aap-76f,
     0x1.0c81fp-53f, 0.0f, 0x1.3c8a14p-79f, 0.0f, 0x1.d03d82p-58f, 0.0f, 0.0f,
     0x1.a1ef56p-18f, 0.0f, 0x1.d94232p-70f, 0.0f, 0x1.ecd93ep-37f, 0.0f,
     0x1.85e936p-54f, 0.0f, 0x1.4400a6p-123f, 0x1.f77424p-74f, 0.0f, 0x1.e2eddep-93f,
     0.0f, 0x1.2b1c14p-40f, 0x1.5b30c8p-119f, 0.0f, 0x1.09b8a8p-33f, 0.0f,
     0x1.6b4912p-81f, 0.0f, 0.0f, 0.0f, 0x1.dd827ep-71f, 0.0f, 0x1.277c42p-30f,
     0x1.1a1b48p-53f, 0.0f, 0.0f, 0.0f, 0x1.969916p-32f, 0x1.bf2792p-63f, 0.0f,
     0x1.a8920ep-55f, 0x1.60da6ep-94f, 0x1.a786f4p-77f, 0.0f, 0x1.f1e0cep-75f, 0.0f,
     0x1.c8eef4p-44f, 0x1.60cb9p-83f, 0x1.1f065p-65f, 0.0f, 0x1.b7e8c2p-48f,
     0x1.6c3c84p-46f, 0.0f, 0x1.67c5fcp-100f, 0.0f, 0.0f, 0x1.2e624cp-27f,
     0x1.c7a0c4p-55f, 0.0f, 0.0f, 0.0f, 0x1.97c3f2p-122f, 0x1.74fde6p-107f, 0.0f,
     0.0f, 0x1.1c7eecp-124f, 0.0f, 0x1.206f1ep-21f, 0x1.529beep-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6d5966p-80f, 0x1.5a3a3ap-39f, 0x1.ec8372p-120f, 0x1.cb23c2p-123f,
     0x1.0fe9bep-65f, 0x1.431768p-108f, 0x1.90d16ap-74f, 0x1.990a0ep-84f, 0.0f,
     0x1.168a14p-75f, 0x1.5551b6p-27f, 0.0f, 0.0f, 0x1.3bf11p-55f, 0.0f,
     0x1.5ea3cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1878cap-26f, 0x1.98fdacp-27f,
     0x1.513606p-34f, 0x1.cd40e6p-90f, 0.0f, 0.0f, 0x1.ccbaccp-69f, 0x1.5e188ep-42f,
     0.0f, 0x1.c4a7dcp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91ce6p-63f, 0.0f,
     0x1.afdc6ap-8f, 0x1.17c374p-20f, 0x1.bf25a8p-25f, 0.0f, 0x1.1fd622p-4f,
     0x1.05a12cp-19f, 0x1.7c7562p-43f, 0.0f, 0x1.85a83cp-71f, 0.0f, 0.0f, 0.0f,
     0x1.274936p-37f, 0.0f, 0x1.f6b326p-9f, 0.0f, 0.0f, 0.0f, 0x1.bcdad2p-72f,
     0x1.6f89d6p-38f, 0.0f, 0x1.3107a6p-33f, 0x1.374428p-33f, 0.0f, 0.0f,
     0x1.c5a03cp-25f, 0.0f, 0.0f, 0x1.9e47dep-2f, 0x1.80f9bap-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba3d4ap-33f, 0.0f, 0x1.60fec6p-67f, 0x1.ba97ap-46f,
     0.0f, 0.0f, 0x1.ed56dcp-22f, 0x1.751e4p-57f, 0.0f, 0x1.c2c82ep-123f,
     0x1.a4d872p-78f, 0x1.e5e206p-4f, 0x1.a9391ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6b25ap-9f, 0.0f, 0.0f, 0x1.37b708p-38f, 0x1.136768p-15f,
     0x1.28d6c8p-94f, 0x1.d11b38p-18f, 0.0f, 0x1.924b8cp-87f, 0.0f, 0.0f,
     0x1.751646p-70f, 0.0f, 0x1.271fe2p-118f, 0.0f, 0.0f, 0x1.ce69acp-9f,
     0x1.92871cp-29f, 0.0f, 0.0f, 0x1.1491ep-63f, 0x1.f046cp-93f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a76526p-46f, 0.0f, 0x1.2ad95cp-2f, 0.0f, 0x1.694c3ap-25f, 0.0f, 0.0f,
     0.0f, 0x1.d289b8p-71f, 0.0f, 0x1.158034p-13f, 0x1.93665p-70f, 0x1.06002ap-21f,
     0.0f, 0x1.80b262p-44f, 0.0f, 0.0f, 0.0f, 0x1.43c4d2p-84f, 0x1.0604cp-65f,
     0x1.1526c6p-74f, 0.0f, 0.0f, 0x1.717f18p-119f, 0x1.3ef0bep-44f, 0.0f,
     0x1.6cb8cep-101f, 0x1.7df274p-3f, 0.0f, 0.0f, 0x1.16e1bep-48f, 0x1.6f6c36p-82f,
     0.0f, 0x1.0df8aap-113f, 0.0f, 0x1.29e988p-38f, 0.0f, 0.0f, 0x1.486edcp-68f, 0.0f,
     0x1.a06182p-92f, 0.0f, 0.0f, 0x1.aadd96p-105f, 0.0f, 0x1.4c7aa8p-124f,
     0x1.8e0cbp-34f, 0.0f, 0.0f, 0x1.e548a6p-61f, 0.0f, 0x1.b2483ep-56f,
     0x1.e80f98p-46f, 0x1.6a8bbcp-94f, 0.0f, 0.0f, 0.0f, 0x1.bd7792p-99f, 0.0f,
     0x1.d32022p-18f, 0x1.e06746p-107f, 0x1.76463ep-26f, 0x1.8be334p-81f,
     0x1.47140cp-53f, 0x1.7b2c5ep-106f, 0.0f, 0x1.d8b18p-115f, 0x1.88453cp-22f,
     0x1.09c42ap-89f, 0.0f, 0x1.8e5702p-77f, 0x1.d33b16p-77f, 0x1.39d4b6p-40f, 0.0f,
     0.0f, 0x1.a1ef2ep-38f, 0.0f, 0.0f, 0x1.bc2ebep-9f, 0x1.2dc12ap-103f,
     0x1.122784p-54f, 0x1.08be74p-7f, 0.0f, 0.0f, 0x1.3078d2p-99f, 0x1.460cdp-87f,
     0x1.5d026ap-10f, 0.0f, 0x1.d2c24ep-117f, 0x1.c332aap-108f, 0.0f, 0.0f,
     0x1.f40c6ep-53f, 0.0f, 0x1.95829ep-38f, 0x1.96b124p-103f, 0x1.eb3ddap-4f, 0.0f,
     0.0f, 0.0f, 0x1.1e698ap-102f, 0x1.7f327ap-20f, 0x1.14a3ccp-41f, 0.0f,
     0x1.6fa812p-43f, 0.0f, 0.0f, 0x1.d46758p-8f, 0x1.a6ce1p-112f, 0.0f, 0.0f, 0.0f,
     0x1.0ba84cp-11f, 0.0f, 0x1.2c515ap-53f, 0.0f, 0.0f, 0x1.4d160ep-43f, 0.0f, 0.0f,
     0.0f, 0x1.e56be4p-79f, 0x1.e1f3a2p-98f, 0.0f, 0x1.ea1da4p-42f, 0x1.d15684p-106f,
     0x1.c1add4p-126f, 0x1.e61148p-96f, 0x1.a8f17cp-25f, 0x1.217634p-52f,
     0x1.026164p-26f, 0.0f, 0.0f, 0x1.f32646p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d447p-47f, 0x1.fe428ap-85f, 0.0f, 0.0f, 0.0f, 0x1.c9418p-7f,
     0x1.44af0cp-75f, 0.0f, 0.0f, 0x1.793ddep-103f, 0.0f, 0x1.849dd2p-71f,
     0x1.08224p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de30ep-60f,
     0x1.ef576ep-33f, 0x1.4c916p-78f, 0.0f, 0x1.06dc14p-15f, 0x1.9f9174p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3fc62cp-97f, 0.0f, 0x1.1357dp-120f, 0x1.d651e4p-50f, 0.0f,
     0x1.2151b6p-45f, 0.0f, 0x1.945b8cp-25f, 0.0f, 0.0f, 0x1.c1aeeep-40f, 0.0f, 0.0f,
     0.0f, 0x1.8e3c9ep-90f, 0.0f, 0x1.56059ep-106f, 0x1.d471b2p-53f, 0.0f, 0.0f,
     0x1.cbe9aep-34f, 0.0f, 0x1.810ca4p-29f, 0x1.c7df98p-47f, 0x1.ef529cp-108f, 0.0f,
     0x1.3763bcp-101f, 0.0f, 0.0f, 0x1.3736b4p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd6752p-58f, 0x1.fdc598p-99f, 0x1.adefbcp-31f, 0x1.a08c5cp-33f,
     0x1.5444bap-6f, 0x1.606b3p-11f, 0.0f, 0x1.1895a6p-112f, 0.0f, 0x1.8d26eap-49f,
     0.0f, 0.0f, 0.0f, 0x1.88f50ap-76f, 0.0f, 0.0f, 0x1.f07732p-32f, 0.0f, 0.0f, 0.0f,
     0x1.fa5924p-68f, 0.0f, 0.0f, 0.0f, 0x1.e6a902p-2f, 0.0f, 0x1.e0886ap-97f, 0.0f,
     0x1.c8e53ap-78f, 0x1.4c28a8p-87f, 0x1.61f49ap-24f, 0.0f, 0x1.5db31ep-9f, 0.0f,
     0.0f, 0x1.256f26p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.672e9ep-13f,
     0x1.3a8a7ap-48f, 0x1.03390cp-69f, 0x1.accd42p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8b796p-44f, 0.0f, 0.0f, 0x1.8e11a8p-115f, 0x1.bb8446p-74f, 0x1.26b092p-5f,
     0.0f, 0x1.27c50ap-47f, 0x1.55ec64p-108f, 0.0f, 0x1.838e4p-73f, 0x1.a146e2p-87f,
     0.0f, 0x1.02033ap-71f, 0x1.e02b4p-106f, 0x1.322868p-87f, 0x1.432576p-39f,
     0x1.3f48a2p-85f, 0.0f, 0.0f, 0x1.c9d7c6p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6458ccp-37f, 0x1.dc1b0ap-45f, 0x1.cd11aap-27f, 0x1.760ebp-85f,
     0x1.e7e594p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.147096p-35f, 0.0f, 0.0f,
     0x1.8699d6p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52b02p-26f, 0x1.da66bcp-28f, 0.0f, 0.0f, 0.0f, 0x1.2d7846p-49f, 0.0f, 0.0f,
     0.0f, 0x1.b984fep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03ecacp-23f,
     0x1.e8873p-46f, 0x1.47016ap-1f, 0x1.0dab82p-2f, 0.0f, 0x1.a861cp-65f,
     0x1.9b53d8p-81f, 0x1.f7f966p-44f, 0x1.b85f8p-100f, 0x1.970038p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dcbbcap-48f, 0x1.0a874ap-43f, 0.0f, 0x1.ab6d68p-60f,
     0x1.473528p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16fe3ap-78f, 0x1.8150e6p-37f,
     0.0f, 0.0f, 0x1.02a0a4p-19f, 0.0f, 0.0f, 0.0f, 0x1.a1bdb6p-3f, 0x1.9c0b36p-16f,
     0.0f, 0.0f, 0x1.874692p-47f, 0x1.170dc6p-104f, 0x1.95e302p-111f, 0x1.032dcap-62f,
     0.0f, 0x1.9a8a4p-55f, 0.0f, 0x1.75a892p-65f, 0.0f, 0.0f, 0x1.2aa96ap-43f, 0.0f,
     0x1.c1b3fcp-82f, 0x1.db6648p-103f, 0x1.069f6ep-83f, 0x1.b26208p-126f,
     0x1.fbf78p-47f, 0x1.2193dp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1eeedcp-23f, 0.0f, 0x1.5880ap-59f, 0x1.40cb06p-47f, 0.0f, 0.0f, 0.0f,
     0x1.dc8p-122f, 0.0f, 0x1.aa4daep-51f, 0.0f, 0x1.0227fp-124f, 0x1.805c98p-103f,
     0.0f, 0x1.c467e4p-80f, 0x1.bcb682p-121f, 0x1.fb9068p-86f, 0x1.89775cp-22f,
     0x1.ee9b0ap-23f, 0.0f, 0x1.2c7fc6p-61f, 0x1.3539eep-9f, 0.0f, 0.0f,
     0x1.1f81d4p-6f, 0x1.a2405ep-124f, 0x1.8a42ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.644be8p-120f, 0.0f, 0.0f, 0.0f, 0x1.fbdf76p-94f, 0.0f, 0.0f,
     0x1.6c93d4p-75f, 0x1.0f6ff6p-13f, 0x1.e84554p-65f, 0x1.c934dap-53f,
     0x1.70b1f4p-68f, 0x1.7c6406p-125f, 0.0f, 0.0f, 0x1.ffa706p-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2af0d8p-117f, 0.0f, 0x1.25eb7p-62f,
     0x1.49296ep-14f, 0x1.de8992p-14f, 0.0f, 0x1.2be876p-5f, 0.0f, 0.0f,
     0x1.7e3bfep-55f, 0x1.3594ap-41f, 0.0f, 0x1.7168cep-125f, 0.0f, 0.0f,
     0x1.adc0cep-24f, 0.0f, 0.0f, 0.0f, 0x1.73036p-121f, 0x1.66df52p-120f, 0x1p0f,
     0x1.3c3bacp-74f, 0x1.202b9ap-110f, 0.0f, 0x1.43e28ep-87f, 0x1.844fccp-56f, 0.0f,
     0x1.176b5cp-35f, 0x1.ce73d2p-35f, 0.0f, 0.0f, 0x1.57bf72p-48f, 0.0f, 0.0f,
     0x1.44df16p-83f, 0.0f, 0.0f, 0x1.474f4p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6e522p-10f, 0x1.608a04p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c20c4ep-63f,
     0x1.1cd3c6p-42f, 0x1.96cab4p-92f, 0x1.56765cp-95f, 0.0f, 0.0f, 0x1.790174p-23f,
     0x1.7e936ap-75f, 0.0f, 0x1.429c9ap-41f, 0.0f, 0x1.06a71ap-124f, 0x1.f4e434p-109f,
     0.0f, 0x1.ab9212p-80f, 0x1.f43ac4p-77f, 0x1.e8778cp-42f, 0.0f, 0x1.8bceb4p-110f,
     0x1.f568d8p-107f, 0.0f, 0x1.ddb332p-36f, 0x1.976d78p-78f, 0.0f, 0x1.b8891cp-23f,
     0.0f, 0.0f, 0x1.173468p-56f, 0.0f, 0.0f, 0x1.5fe904p-75f, 0.0f, 0.0f,
     0x1.8912fcp-82f, 0x1.9a1abp-64f, 0x1.05fc1ap-89f, 0.0f, 0.0f, 0x1.77a658p-5f,
     0.0f, 0x1.b89456p-65f, 0.0f, 0x1.fca8fap-36f, 0x1.991718p-93f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b664b8p-113f, 0x1.fa2636p-113f, 0x1.621cc4p-68f, 0x1.7caf8p-117f, 0.0f,
     0x1.6b3588p-104f, 0.0f, 0x1.4f55dep-34f, 0.0f, 0x1.654272p-9f, 0.0f,
     0x1.927ebp-1f, 0x1.230ea2p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb26bap-72f,
     0.0f, 0x1.f1803cp-54f, 0.0f, 0x1.36b16p-119f, 0x1.56fa12p-113f, 0.0f,
     0x1.78fecap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac81dep-40f, 0.0f, 0.0f,
     0x1.31187cp-30f, 0.0f, 0x1.d9892ep-2f, 0.0f, 0x1.93d716p-110f, 0x1.e7d06p-122f,
     0.0f, 0x1.b3af52p-44f, 0.0f, 0x1.c6454p-49f, 0x1.08eabcp-34f, 0.0f,
     0x1.78e532p-76f, 0x1.71044cp-111f, 0x1.6bf2cp-84f, 0x1.c2f89cp-64f,
     0x1.5df4e2p-3f, 0x1.60ae9p-14f, 0.0f, 0.0f, 0x1.d1bcfap-112f, 0.0f,
     0x1.2b2a9ep-77f, 0x1.9ee306p-50f, 0.0f, 0x1.e563f8p-29f, 0.0f, 0.0f,
     0x1.0890fp-121f, 0x1.780e5ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc5832p-90f,
     0x1.689dfcp-56f, 0.0f, 0.0f, 0.0f, 0x1.c9d95cp-87f, 0.0f, 0.0f, 0x1.93efa4p-109f,
     0x1.ce8bbep-15f, 0.0f, 0.0f, 0x1.71e4bep-9f, 0.0f, 0x1.0c5408p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.217f8cp-70f, 0x1.8e513p-72f, 0.0f,
     0x1.0330cp-107f, 0.0f, 0.0f, 0.0f, 0x1.1d5a6p-11f, 0.0f, 0.0f, 0x1.ca525p-20f,
     0.0f, 0.0f, 0x1.59e3bp-35f, 0x1.a1248ep-111f, 0.0f, 0x1.edea96p-46f, 0.0f, 0.0f,
     0x1.b04fdap-103f, 0.0f, 0x1.d81fe4p-104f, 0.0f, 0x1.4e8a76p-93f, 0.0f, 0.0f,
     0x1.4c6b9ep-2f, 0.0f, 0x1.958654p-79f, 0x1.f908c4p-52f, 0x1.d170bap-41f,
     0x1.fc8d72p-10f, 0.0f, 0.0f, 0x1.51269ep-64f, 0x1.26e57p-56f, 0.0f, 0.0f,
     0x1.018102p-70f, 0x1.64d062p-90f, 0.0f, 0x1.c45fc8p-124f, 0x1.04a03ap-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4a2b8p-36f, 0.0f, 0.0f, 0x1.180c9cp-13f, 0.0f, 0.0f,
     0x1.232f16p-36f, 0.0f, 0x1.6cf8e8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47c032p-18f, 0x1.bb09c8p-51f, 0x1.0b2162p-61f, 0.0f, 0.0f, 0x1.9400d6p-88f,
     0.0f, 0.0f, 0x1.1a32aap-58f, 0.0f, 0.0f, 0.0f, 0x1.e773bp-85f, 0x1.2673f4p-51f,
     0x1.d55d7ep-117f, 0x1.5492aep-104f, 0x1.90adcep-52f, 0.0f, 0.0f, 0x1.89370ap-84f,
     0.0f, 0.0f, 0x1.f9dd6cp-123f, 0x1.526c24p-90f, 0x1.bd237p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.037f82p-100f, 0x1.b6893ep-108f, 0.0f, 0x1.56b54cp-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30150cp-108f, 0x1.a4c3e8p-17f,
     0x1.b4a91ap-124f, 0.0f, 0x1.e69006p-86f, 0.0f, 0x1.c29a16p-95f, 0x1.1db64p-94f,
     0.0f, 0x1.048bd4p-125f, 0x1.d2e2a8p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76615cp-103f, 0x1.b71476p-107f, 0x1.eba48cp-122f, 0.0f, 0.0f, 0.0f,
     0x1.6ff0b4p-102f, 0x1.6e9e3ap-52f, 0.0f, 0.0f, 0x1.7eab0ap-50f
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
            tmp1 = Sleef_tanhf4_u35avx2128(tmp0);
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
    printf("Sleef_tanhf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanhf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
