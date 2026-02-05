/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf1_u10purecfma.c --function \
 *     Sleef_finz_cosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.47b16p-52f, 0x1p0f, 0x1.e5b144p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ace41p-43f,
     0x1.9c04f8p-121f, 0x1.b80c6p-31f, 0.0f, 0.0f, 0x1.f40d88p-79f, 0.0f, 0.0f, 0.0f,
     0x1.e1a5ccp-7f, 0.0f, 0.0f, 0.0f, 0x1.354adep-57f, 0.0f, 0x1.fee472p-24f,
     0x1.75620ep-68f, 0.0f, 0x1.6ceb52p-14f, 0x1.ecf53ap-118f, 0x1.e3f1b6p-92f,
     0x1.ce8276p-84f, 0.0f, 0.0f, 0.0f, 0x1.2c47e6p-64f, 0x1.df7d5ep-20f, 0.0f, 0.0f,
     0x1.70f43ap-12f, 0.0f, 0x1.81e6d8p-13f, 0.0f, 0x1.b27f1cp-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d74cccp-118f, 0.0f, 0.0f, 0x1.41aff2p-88f,
     0x1.fc7a4p-34f, 0.0f, 0x1.532548p-72f, 0.0f, 0.0f, 0x1.6a2ef2p-31f, 0.0f,
     0x1.3a783ap-108f, 0.0f, 0x1.5c279cp-104f, 0x1.c5f2c6p-53f, 0x1.0bab9cp-6f, 0.0f,
     0.0f, 0x1.f1dd32p-5f, 0x1.12eda8p-45f, 0x1.d2fd3ap-112f, 0x1.255ff6p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8de36ep-25f, 0x1.6cd1eep-83f, 0x1.f9085ep-125f,
     0x1.62194p-125f, 0x1.30051ap-115f, 0x1.07f3ep-50f, 0.0f, 0x1.d01ce6p-104f, 0.0f,
     0x1.808e4cp-53f, 0x1.dec07ap-24f, 0x1.f92432p-38f, 0x1.805abap-120f,
     0x1.f83da2p-77f, 0x1.5eac48p-6f, 0x1.3a15fp-115f, 0x1.f1e8e6p-23f,
     0x1.6d169ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.701b98p-5f, 0.0f,
     0x1.e08c14p-6f, 0.0f, 0x1.549cccp-97f, 0x1.ede6bp-35f, 0.0f, 0x1.473be8p-54f,
     0.0f, 0.0f, 0.0f, 0x1.99a86ap-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acb65cp-34f,
     0x1.92cf1cp-32f, 0x1.740cd8p-90f, 0.0f, 0.0f, 0x1.34ce2ap-50f, 0.0f,
     0x1.4db68cp-73f, 0.0f, 0x1.6bdf92p-52f, 0x1.e6a974p-56f, 0x1.73dd42p-89f,
     0x1.906db8p-94f, 0.0f, 0.0f, 0.0f, 0x1.7eaefp-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3671eap-76f, 0.0f, 0x1.e7e846p-34f, 0x1.0e6994p-53f, 0.0f, 0x1.dc049ep-22f,
     0.0f, 0x1.94c8aap-56f, 0.0f, 0x1.bfe95p-123f, 0x1.294eep-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.5c7fbcp-117f, 0x1.43a1bp-10f,
     0x1.bc0f12p-115f, 0.0f, 0.0f, 0x1.c5d23ap-121f, 0x1.891024p-116f, 0.0f,
     0x1.854aaap-98f, 0.0f, 0x1.34d714p-37f, 0.0f, 0.0f, 0.0f, 0x1.48d5bep-17f, 0.0f,
     0x1.e4181cp-117f, 0x1.10199ap-101f, 0x1.a80c84p-93f, 0.0f, 0x1.7937f6p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59d5d8p-97f, 0.0f, 0.0f, 0x1.6b565ep-73f,
     0x1.62aed2p-3f, 0.0f, 0.0f, 0.0f, 0x1.ac89bep-61f, 0x1.6e9132p-71f,
     0x1.d36712p-89f, 0.0f, 0x1.19d40ap-1f, 0x1.8e9d02p-118f, 0x1.b036a2p-45f, 0.0f,
     0x1.216abep-27f, 0x1.75c802p-109f, 0.0f, 0.0f, 0x1.3bcb7p-19f, 0.0f, 0.0f,
     0x1.fd06d6p-30f, 0x1.7bb0e2p-34f, 0x1.5f53aep-8f, 0x1.a824ap-39f,
     0x1.5f77b4p-63f, 0.0f, 0.0f, 0x1.42db5ap-95f, 0.0f, 0x1.d668dap-60f, 0.0f, 0.0f,
     0x1.910612p-117f, 0.0f, 0.0f, 0x1.2e8d34p-104f, 0.0f, 0x1.7b4ap-10f,
     0x1.3005e2p-69f, 0.0f, 0.0f, 0x1.dfb7bp-45f, 0.0f, 0.0f, 0.0f, 0x1.edf7bap-37f,
     0.0f, 0x1.347eecp-20f, 0x1.95af3p-61f, 0x1.5f15c6p-22f, 0.0f, 0.0f,
     0x1.a60892p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1b31cp-41f, 0x1.365632p-40f, 0.0f,
     0.0f, 0x1.533fdp-84f, 0x1.06c334p-114f, 0.0f, 0x1.5c6c56p-115f, 0x1.08f9d6p-60f,
     0x1.528e6ap-55f, 0x1.8b2356p-6f, 0x1.5415bcp-10f, 0.0f, 0x1.8dbb4ep-90f,
     0x1.b1126ep-20f, 0.0f, 0.0f, 0.0f, 0x1.fb96a6p-84f, 0.0f, 0x1.120e1cp-12f,
     0x1.de4b7ap-95f, 0x1.c7dc1ap-55f, 0.0f, 0.0f, 0.0f, 0x1.40351ap-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.418208p-53f, 0.0f, 0x1.77e3d2p-68f, 0.0f,
     0x1.98117ep-79f, 0.0f, 0.0f, 0.0f, 0x1.9565bp-29f, 0x1.d3cc5ep-22f, 0.0f, 0.0f,
     0x1.2e4e66p-31f, 0.0f, 0x1.e0b45cp-48f, 0x1.c45d0ep-22f, 0.0f, 0.0f,
     0x1.9c8446p-29f, 0x1.7cca4ap-67f, 0x1.412d92p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.605496p-54f, 0x1.55bd42p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f012b8p-18f, 0x1.e14a0cp-91f, 0.0f, 0.0f, 0x1.69bb5cp-112f, 0x1.39ea66p-76f,
     0x1.957e98p-51f, 0x1.abbb3cp-55f, 0x1.c33342p-69f, 0x1.f1a50ep-85f, 0.0f,
     0x1.0eed9ap-53f, 0x1.f67b8ep-99f, 0x1.a85908p-33f, 0x1.54ca9ep-115f,
     0x1.9730ap-64f, 0x1.a9ed04p-94f, 0.0f, 0.0f, 0x1.85d756p-48f, 0x1.6ec04ep-108f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.285136p-122f, 0.0f,
     0x1.194028p-59f, 0x1.ec487ep-59f, 0x1.54eff6p-114f, 0.0f, 0.0f, 0.0f,
     0x1.b681c6p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.257bc4p-62f, 0.0f,
     0x1.3984cep-21f, 0x1.74d7fep-11f, 0x1.3c6906p-23f, 0x1.b2ca04p-105f,
     0x1.78abf4p-8f, 0.0f, 0.0f, 0.0f, 0x1.ec0618p-29f, 0x1.269bacp-80f,
     0x1.b279ap-90f, 0x1.951294p-66f, 0x1.21d23ap-6f, 0x1.2cee6cp-13f, 0.0f,
     0x1.170794p-71f, 0.0f, 0.0f, 0x1.a56e3ap-58f, 0x1.da90bcp-116f, 0x1.1a1014p-103f,
     0.0f, 0.0f, 0x1.223a6ap-48f, 0.0f, 0.0f, 0x1.fd0c4p-89f, 0.0f, 0.0f, 0.0f,
     0x1.dc5f44p-108f, 0x1.481826p-25f, 0.0f, 0.0f, 0x1.02876ep-41f, 0.0f,
     0x1.b6b1c2p-31f, 0.0f, 0.0f, 0x1.d05492p-102f, 0x1.d8460cp-118f, 0.0f, 0.0f,
     0x1.e4b826p-124f, 0x1.0fa32p-22f, 0.0f, 0.0f, 0x1.e9e3a6p-113f, 0x1.b811dap-58f,
     0x1.d9953ep-17f, 0x1.c185a2p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3961ep-59f, 0.0f,
     0x1.64b3dcp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab323cp-75f, 0x1.36cb1ep-32f, 0x1.95da3ep-56f, 0.0f, 0x1.c62492p-3f, 0.0f,
     0.0f, 0.0f, 0x1.84c85ap-123f, 0x1.65082cp-48f, 0x1.06e8fap-11f, 0x1.5b835ep-113f,
     0.0f, 0.0f, 0x1.8c9ea8p-99f, 0.0f, 0.0f, 0x1.9a0e6cp-17f, 0x1.c9be98p-48f,
     0x1.ea6e62p-19f, 0x1.286aacp-64f, 0x1.6e34ep-107f, 0x1.74d5a6p-50f, 0.0f,
     0x1.367ddep-73f, 0x1.ad741ap-55f, 0.0f, 0x1.ae00dcp-13f, 0x1.9f11cp-72f, 0.0f,
     0x1.595388p-113f, 0.0f, 0.0f, 0.0f, 0x1.55a5ep-32f, 0x1.3eec4p-38f, 0.0f, 0.0f,
     0x1.2bfbfap-79f, 0x1.eac6p-66f, 0.0f, 0x1.c89f74p-105f, 0x1.f1389p-76f,
     0x1.dcca26p-5f, 0.0f, 0x1.f13cd8p-35f, 0x1.de831p-124f, 0.0f, 0x1.b7047cp-78f,
     0.0f, 0.0f, 0.0f, 0x1.f49faap-110f, 0x1.401a36p-18f, 0x1.5f0eep-15f, 0x1p0f,
     0x1.01e81cp-22f, 0x1.9a4846p-44f, 0x1.105b6ap-69f, 0x1.fdb4b6p-7f,
     0x1.f8556ep-59f, 0.0f, 0x1.c88e0ap-1f, 0.0f, 0x1.38e15cp-7f, 0x1.e2721ap-61f,
     0x1.a57a2ap-17f, 0x1.1d114ep-126f, 0.0f, 0x1.5e666p-115f, 0x1.eeb2ep-77f,
     0x1.76f99ap-9f, 0x1.9d74a2p-1f, 0.0f, 0.0f, 0x1.b98908p-57f, 0.0f, 0.0f,
     0x1.ba4ccap-78f, 0.0f, 0x1.a85ca8p-100f, 0x1.0d69a6p-73f, 0.0f, 0x1.c7a0dcp-112f,
     0x1.7b9f62p-18f, 0.0f, 0x1.3b0e5ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8df48p-77f, 0.0f, 0x1.a16aaep-37f, 0x1.12bbc2p-110f, 0.0f, 0x1.81e7e6p-8f,
     0x1.a8ceccp-47f, 0x1.182f84p-117f, 0x1.a705cap-21f, 0.0f, 0x1.f7f758p-15f, 0.0f,
     0.0f, 0x1.acfa74p-6f, 0x1.5987dcp-103f, 0x1.7f1732p-46f, 0.0f, 0x1.652764p-110f,
     0x1.974d0ep-67f, 0x1.da3668p-30f, 0.0f, 0.0f, 0.0f, 0x1.3e59b4p-56f, 0.0f, 0.0f,
     0.0f, 0x1.75176p-26f, 0.0f, 0x1.9a8faep-120f, 0x1.812892p-89f, 0.0f, 0.0f, 0.0f,
     0x1.d4cecp-30f, 0.0f, 0.0f, 0.0f, 0x1.3aeb7ep-91f, 0.0f, 0.0f, 0.0f,
     0x1.0a661ep-81f, 0x1.f2ae62p-33f, 0.0f, 0.0f, 0x1.45065cp-3f, 0.0f,
     0x1.015fep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e116ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81d08ep-35f, 0x1.e2d0fep-98f,
     0.0f, 0x1.1d7ecap-118f, 0x1.cdd768p-102f, 0x1.87741ap-63f, 0x1.ce3864p-49f, 0.0f,
     0.0f, 0.0f, 0x1.66dec2p-41f, 0.0f, 0x1.0d513p-108f, 0.0f, 0x1p0f, 0.0f,
     0x1.3323d8p-108f, 0x1.3ecbcep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36857ep-101f,
     0.0f, 0.0f, 0x1.ca5e0ap-12f, 0.0f, 0.0f, 0x1.970768p-100f, 0x1.9bf8eap-113f,
     0x1.a5317ep-100f, 0x1.5108ap-95f, 0x1.1bdfap-111f, 0.0f, 0x1.a1f074p-69f, 0.0f,
     0x1.49f126p-106f, 0x1.80ef1ap-95f, 0.0f, 0.0f, 0x1.59d6cp-47f, 0.0f,
     0x1.b9d9acp-97f, 0x1.30e95ep-79f, 0x1.54d2c2p-10f, 0x1.7bc0d4p-96f, 0.0f,
     0x1.7a26e4p-111f, 0.0f, 0.0f, 0.0f, 0x1.f10c16p-116f, 0.0f, 0x1.94a9f6p-2f, 0.0f,
     0.0f, 0x1.cadc46p-98f, 0x1.db3b7ap-4f, 0.0f, 0x1.db5004p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.019eb6p-32f, 0x1.b86c3p-113f, 0x1.9fa276p-110f, 0.0f, 0.0f, 0.0f,
     0x1.5a382ep-120f, 0.0f, 0.0f, 0x1.e4b112p-72f, 0x1.d4dde6p-77f, 0.0f,
     0x1.6df50cp-43f, 0x1.ac2f8ep-30f, 0x1.e54a74p-102f, 0x1.7618f4p-44f,
     0x1.fd6b1p-75f, 0.0f, 0.0f, 0.0f, 0x1.8e908ap-102f, 0x1.5c4722p-9f, 0.0f, 0.0f,
     0x1.86705ap-64f, 0x1.3250ecp-82f, 0.0f, 0.0f, 0x1.b37cfep-49f, 0.0f, 0.0f, 0.0f,
     0x1.efa6fep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.a93a0cp-95f,
     0x1.63f582p-89f, 0x1.32744ep-9f, 0x1.2062dap-105f, 0.0f, 0.0f, 0x1.3262eep-126f,
     0x1.c60906p-16f, 0.0f, 0.0f, 0x1.de724ep-7f, 0.0f, 0.0f, 0x1.e19d08p-63f,
     0x1.2c774p-68f, 0x1.f5bc5ep-80f, 0.0f, 0x1.dd6478p-59f, 0.0f, 0.0f, 0.0f,
     0x1.d59f7ep-47f, 0.0f, 0x1.159e76p-100f, 0.0f, 0.0f, 0x1.a9ef76p-95f, 0.0f, 0.0f,
     0x1.4c546p-91f, 0x1.70f7a2p-72f, 0.0f, 0.0f, 0x1.3bdbfap-107f, 0x1.27409ep-100f,
     0.0f, 0x1.5fc1e6p-55f, 0.0f, 0x1.c3626cp-95f, 0x1.20768p-98f, 0.0f,
     0x1.937528p-30f, 0.0f, 0.0f, 0x1.405c4cp-50f, 0.0f, 0x1.601ad4p-21f, 0.0f,
     0x1.947512p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c25774p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa2746p-14f, 0x1.0265fep-1f, 0.0f, 0.0f, 0.0f, 0x1.fed462p-31f,
     0x1.322ab2p-123f, 0.0f, 0x1.324994p-74f, 0x1.b56934p-79f, 0x1.370abcp-59f,
     0x1.0596aep-66f, 0.0f, 0.0f, 0x1.358cfp-44f, 0.0f, 0x1.b29b08p-85f, 0.0f,
     0x1.28d6eep-62f, 0.0f, 0x1p0f, 0x1.a3c722p-110f, 0.0f, 0.0f, 0.0f,
     0x1.521b6p-108f, 0.0f, 0x1.ffae72p-27f, 0x1.73bd14p-57f, 0x1.d9d622p-6f, 0.0f,
     0.0f, 0.0f, 0x1.5c6d92p-87f, 0.0f, 0x1.c23cdep-36f, 0.0f, 0x1.c46808p-79f, 0.0f,
     0.0f, 0x1.1f06fep-40f, 0.0f, 0.0f, 0.0f, 0x1.c6978p-28f, 0x1.3de41p-71f,
     0x1.b6511ap-4f, 0.0f, 0.0f, 0x1.415fd8p-71f, 0x1.bc42d4p-29f, 0.0f, 0.0f,
     0x1.1dd85p-52f, 0x1.93e374p-40f, 0x1.30876cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c04b7p-74f, 0x1.06e0ccp-54f, 0.0f, 0.0f, 0x1.e2b214p-70f, 0x1.5be9ep-77f,
     0x1.64b4e6p-92f, 0.0f, 0x1.9a845p-71f, 0x1.ff1344p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.866388p-82f, 0.0f, 0x1.57487ap-58f, 0x1.6198eep-44f, 0x1.760a72p-27f,
     0x1.3b89fp-115f, 0.0f, 0.0f, 0.0f, 0x1.ce2f5ep-95f, 0.0f, 0.0f, 0x1.46103cp-90f,
     0.0f, 0.0f, 0.0f, 0x1.74532ep-72f, 0.0f, 0.0f, 0x1.6b8e28p-63f, 0x1.83a43ep-50f,
     0x1.b7febp-96f, 0.0f, 0.0f, 0x1.fec30ap-69f, 0x1.7ef65cp-98f, 0x1.b12c7ap-100f,
     0x1.231814p-5f, 0x1.69b742p-41f, 0x1.df8b5cp-43f, 0.0f, 0x1.5f13fp-125f,
     0x1.172b5cp-101f, 0.0f, 0x1.b8baap-28f, 0.0f, 0x1.a20a3ap-28f, 0x1.4a63e4p-38f,
     0x1.84257cp-85f, 0.0f, 0.0f, 0x1.ed2452p-22f, 0.0f, 0.0f, 0x1.ace338p-32f,
     0x1.ae1a62p-38f, 0.0f, 0x1.835028p-60f, 0x1.e1ec52p-28f, 0x1.4f4256p-39f,
     0x1.0bc89cp-35f, 0.0f, 0.0f, 0x1.a2f7dcp-68f, 0x1.d114fp-46f, 0.0f,
     0x1.2d7de4p-124f, 0x1.e26204p-38f, 0x1.c34fa8p-59f, 0.0f, 0.0f, 0x1.f82dd2p-14f,
     0.0f, 0x1.d0094ap-49f, 0.0f, 0x1.a15c64p-85f, 0x1.334dd6p-21f, 0x1p0f,
     0x1.810f1p-32f, 0.0f, 0x1.30ce3cp-23f, 0x1.e48658p-25f, 0x1.e0c8ecp-104f,
     0x1.b7718cp-2f, 0.0f, 0x1.304edap-27f, 0.0f, 0.0f, 0x1.25c016p-26f, 0.0f,
     0x1.be457ep-47f, 0.0f, 0.0f, 0.0f, 0x1.6ae0b6p-105f, 0.0f, 0x1.4f0958p-52f,
     0x1.4f0212p-80f, 0.0f, 0.0f, 0x1.6a4d06p-65f, 0x1.0c3d7p-56f, 0.0f, 0.0f,
     0x1.741314p-37f, 0x1.cfc1bap-11f, 0.0f, 0.0f, 0x1.39bf24p-78f, 0.0f,
     0x1.2d99f4p-61f, 0x1.81e5e6p-30f, 0x1.133372p-105f, 0x1.5c107p-111f,
     0x1.f83ecep-122f, 0x1.e3cbbep-119f, 0.0f, 0x1.9109b8p-52f, 0.0f, 0.0f, 0.0f,
     0x1.5dfa64p-35f, 0x1.04741p-91f, 0x1.c0facep-63f, 0x1.70f774p-84f,
     0x1.85ab2ep-84f, 0x1.49a9e2p-46f, 0.0f, 0x1.e944c2p-110f, 0x1.631f52p-107f,
     0x1.70e67ep-53f, 0.0f, 0x1.f8f622p-90f, 0x1.6e98f2p-85f, 0.0f, 0x1.8452fep-66f,
     0x1.396e78p-115f, 0.0f, 0x1.fadd92p-118f, 0.0f, 0x1.f66e46p-13f, 0.0f, 0.0f,
     0x1.70b9a2p-39f, 0.0f, 0x1.c085b2p-111f, 0.0f, 0x1.87c444p-83f, 0x1.c65f66p-100f,
     0x1.f7840cp-57f, 0.0f, 0x1.cc2242p-72f, 0x1.3054e8p-39f, 0x1.97dc68p-102f,
     0x1.afe432p-39f, 0x1.89528cp-39f, 0.0f, 0.0f, 0x1.372ab6p-118f, 0x1.5ae53p-15f,
     0x1.a7cdc4p-7f, 0x1.461ddcp-48f, 0x1.b0ae3ap-76f, 0.0f, 0.0f, 0x1.7a0fbep-28f,
     0x1.211c92p-103f, 0.0f, 0x1.36547cp-49f, 0x1.5f7452p-59f, 0.0f, 0x1.01a25ap-28f,
     0x1.44048p-74f, 0.0f, 0x1.06bffcp-89f, 0x1.3a8ae4p-73f, 0.0f, 0x1.afd00ep-12f,
     0.0f, 0x1.aa16p-94f, 0x1.af6e08p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a9dfp-37f, 0x1.d55d6ap-87f, 0x1.f88966p-34f, 0x1.2714dap-14f,
     0x1.640d24p-98f, 0x1.d41d3ap-12f, 0.0f
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
            tmp1 = Sleef_finz_cosf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_cosf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
