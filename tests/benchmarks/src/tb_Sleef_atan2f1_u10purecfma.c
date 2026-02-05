/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f1_u10purecfma.c --function \
 *     Sleef_atan2f1_u10purecfma --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --bench --no-embedded-bin --target \
 *     kv3
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bb7e4p-5f, 0x1.7742cap-116f,
     0x1.c29712p-74f, 0.0f, 0x1.71188p-110f, 0x1.c36f52p-93f, 0x1.accffap-69f, 0.0f,
     0x1.5dcbe2p-119f, 0.0f, 0.0f, 0.0f, 0x1.e3f32p-103f, 0x1.600c22p-110f, 0.0f,
     0x1.f3a4aap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c48e8p-124f, 0.0f, 0.0f,
     0x1.c39f0ap-122f, 0.0f, 0.0f, 0x1.cc296p-58f, 0.0f, 0x1.569cecp-78f,
     0x1.0bf152p-59f, 0.0f, 0x1.9bfff4p-85f, 0x1.6f4e6cp-53f, 0.0f, 0x1.772f84p-53f,
     0x1.72cdcp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da2e84p-27f, 0.0f, 0x1.fec34cp-51f,
     0x1.fa32e6p-15f, 0x1.ec0f52p-4f, 0x1.2f91c6p-108f, 0.0f, 0.0f, 0x1.624342p-31f,
     0x1.9728dcp-93f, 0x1.159dfep-24f, 0x1.91ad2p-119f, 0x1.b526aep-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.17d32cp-19f, 0.0f, 0.0f, 0.0f, 0x1.c41482p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.51c4dcp-101f, 0.0f, 0.0f, 0.0f, 0x1.5ad5b2p-26f, 0.0f,
     0.0f, 0.0f, 0x1.c33426p-53f, 0x1.c8f0f2p-27f, 0x1.8eb3ap-12f, 0.0f,
     0x1.62ba18p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.012efcp-55f, 0x1.d5af8ep-85f, 0.0f,
     0.0f, 0x1.e850dap-59f, 0.0f, 0.0f, 0.0f, 0x1.97c5a2p-17f, 0.0f, 0x1.27a3f2p-81f,
     0x1.badb48p-32f, 0x1.4af1e4p-22f, 0x1.290864p-1f, 0x1.d35bb2p-25f, 0.0f,
     0x1.4dafp-72f, 0.0f, 0x1.ef1506p-56f, 0x1.0e34cp-105f, 0.0f, 0.0f,
     0x1.e0683ap-2f, 0x1.ac0f9ep-91f, 0x1.814104p-42f, 0x1.cf105ep-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b46d9ep-23f, 0.0f, 0x1.2e6a1cp-23f,
     0.0f, 0x1.518ba4p-7f, 0.0f, 0x1.75aabep-15f, 0x1.e9874ap-99f, 0.0f,
     0x1.b399fap-41f, 0.0f, 0x1.043e7cp-3f, 0x1.e4b1f2p-13f, 0.0f, 0x1.bf8912p-19f,
     0x1.f17ec2p-47f, 0x1.814ba6p-120f, 0.0f, 0x1.2558ecp-24f, 0.0f, 0.0f,
     0x1.f5c82p-53f, 0x1.a898cp-87f, 0.0f, 0.0f, 0x1.357736p-31f, 0x1.891238p-28f,
     0x1.a64b5cp-6f, 0x1.2f37c6p-34f, 0.0f, 0x1.812c06p-96f, 0x1.9f2decp-62f,
     0x1.5026e6p-112f, 0.0f, 0.0f, 0x1.ae84d4p-120f, 0x1.bc9708p-23f, 0.0f,
     0x1.c79478p-6f, 0.0f, 0x1.0bb71ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bcd94p-42f, 0x1.f91e8ep-123f, 0.0f, 0x1.b033dap-27f, 0.0f, 0x1.d10facp-55f,
     0.0f, 0.0f, 0x1.74ba66p-50f, 0.0f, 0x1.520832p-8f, 0.0f, 0.0f, 0x1.cd1d64p-77f,
     0x1.e3e8aap-58f, 0.0f, 0x1.64c5d8p-24f, 0.0f, 0x1.62ad66p-27f, 0x1.f5a632p-72f,
     0x1.8ba33ap-39f, 0.0f, 0x1.96c52cp-123f, 0x1.49455p-24f, 0.0f, 0.0f,
     0x1.5c9b44p-104f, 0x1.20558ap-22f, 0.0f, 0.0f, 0x1.eb708p-16f, 0x1.4bfdccp-82f,
     0x1.b46c58p-9f, 0.0f, 0.0f, 0.0f, 0x1.ac2a4ap-23f, 0x1.5797dp-4f,
     0x1.8407e2p-63f, 0x1.8e6038p-75f, 0x1.1f9e44p-124f, 0x1.9e618ep-9f, 0.0f, 0.0f,
     0x1.985562p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36530ap-80f,
     0x1.9a6cp-82f, 0.0f, 0.0f, 0.0f, 0x1.346c2cp-111f, 0x1.4c2b66p-36f, 0.0f,
     0x1.a47caap-86f, 0x1.21903p-75f, 0.0f, 0x1.9893p-75f, 0.0f, 0x1.d4c5ccp-70f,
     0.0f, 0x1.bfdbf6p-22f, 0.0f, 0.0f, 0x1.76c4fp-28f, 0x1.521126p-25f,
     0x1.c58e1p-9f, 0x1.ed2234p-67f, 0.0f, 0x1.fab21ap-29f, 0.0f, 0x1.5d898p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba8c08p-114f, 0.0f, 0x1.48d28ap-42f, 0.0f,
     0x1.274ea2p-63f, 0x1.631d32p-29f, 0x1.a6ae8cp-28f, 0x1.2e0326p-31f,
     0x1.71eb1ep-36f, 0.0f, 0x1.496132p-71f, 0.0f, 0.0f, 0x1.66ae32p-8f, 0.0f,
     0x1.b3a81ap-112f, 0x1.397fd8p-66f, 0x1.d7a8c4p-21f, 0.0f, 0x1.f46b16p-55f,
     0x1.3f824p-84f, 0x1.62b82cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77769p-120f,
     0x1.7535fp-44f, 0x1.b0a97cp-55f, 0.0f, 0.0f, 0x1.a034d8p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.195b74p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00e628p-2f, 0.0f, 0x1.0df6bp-113f, 0.0f, 0.0f, 0x1.3729dcp-105f,
     0x1.e4ebb8p-69f, 0.0f, 0.0f, 0x1.ebd106p-79f, 0.0f, 0.0f, 0.0f, 0x1.b2eb1p-4f,
     0x1.2e23eap-91f, 0.0f, 0.0f, 0.0f, 0x1.eb624p-86f, 0.0f, 0x1.ab71bep-80f,
     0x1.7c8594p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.960e5ep-36f, 0.0f,
     0x1.fa92fep-6f, 0.0f, 0x1.1cf41ap-24f, 0.0f, 0x1.76229ep-91f, 0x1.e56ac8p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7442dcp-12f, 0x1.f5400cp-72f, 0x1.d69bdap-12f, 0.0f,
     0x1.ebc786p-3f, 0.0f, 0.0f, 0.0f, 0x1.a56c6p-126f, 0x1.acf1b2p-116f,
     0x1.fc6636p-123f, 0x1.da4d9p-23f, 0x1.fe703cp-48f, 0x1.ce4292p-62f, 0.0f, 0.0f,
     0x1.668a3ap-108f, 0x1.370f48p-104f, 0x1.3d2558p-71f, 0x1.e8af8ap-1f,
     0x1.b083ep-19f, 0x1.3f375ep-122f, 0.0f, 0x1.de2d62p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3ae22p-3f, 0x1.f3ceccp-9f, 0x1.758f14p-125f, 0x1.42dbf2p-8f, 0.0f,
     0x1.28def8p-58f, 0.0f, 0.0f, 0.0f, 0x1.35f2c6p-14f, 0x1.34443ep-23f,
     0x1.c2922ap-107f, 0.0f, 0x1.4d4dp-117f, 0.0f, 0x1.8d4686p-74f, 0.0f, 0.0f, 0.0f,
     0x1.395896p-7f, 0x1.1ab586p-87f, 0.0f, 0x1.c011f2p-120f, 0.0f, 0x1.f8bcaep-97f,
     0.0f, 0.0f, 0x1.5ae06cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8d618p-85f, 0.0f,
     0x1.da8abep-91f, 0.0f, 0x1.29ba5ep-89f, 0.0f, 0x1.9f9522p-118f, 0x1.6cb166p-11f,
     0x1.945f3ep-15f, 0x1.b0b5e8p-114f, 0.0f, 0x1.4495eep-85f, 0x1.c1f8fap-116f, 0.0f,
     0x1.868c5ep-78f, 0.0f, 0x1.559192p-41f, 0.0f, 0.0f, 0x1.9c6f1cp-61f,
     0x1.03c6f4p-95f, 0x1.58ca18p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1815a2p-94f,
     0x1.2757e8p-40f, 0x1.84e582p-73f, 0x1.fbdd2ap-122f, 0.0f, 0x1.f46168p-112f, 0.0f,
     0x1.9a2f36p-32f, 0x1.9d2f6p-77f, 0x1.493414p-42f, 0.0f, 0.0f, 0.0f,
     0x1.77ce34p-87f, 0.0f, 0.0f, 0x1.b5e736p-71f, 0.0f, 0.0f, 0.0f, 0x1.1fa94p-110f,
     0.0f, 0x1.6f44c4p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3da422p-88f, 0x1.683dd2p-121f,
     0.0f, 0.0f, 0x1.4270e2p-32f, 0x1.67940ap-10f, 0.0f, 0.0f, 0x1.6fde6p-22f,
     0x1.9c4cccp-47f, 0.0f, 0x1.5c057ep-48f, 0.0f, 0.0f, 0x1.0a7066p-87f,
     0x1.f93938p-59f, 0.0f, 0x1.7e4b3p-106f, 0x1.9c1508p-48f, 0x1p0f, 0.0f, 0.0f,
     0x1.3ca662p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc95d6p-30f, 0x1.38f0a2p-101f,
     0x1.929514p-108f, 0x1.d9a24ap-17f, 0.0f, 0x1.e8b636p-35f, 0x1.90a9eap-109f,
     0x1.caa79ep-71f, 0x1.4b2fd8p-98f, 0.0f, 0.0f, 0x1.13f4ep-64f, 0x1.68518cp-56f,
     0x1.7f4c22p-114f, 0x1.b2bdd8p-10f, 0x1.65fd9p-53f, 0.0f, 0.0f, 0x1.171abcp-55f,
     0x1.fcd3eap-103f, 0.0f, 0.0f, 0x1.a44ddap-14f, 0.0f, 0x1.745cep-86f, 0.0f, 0.0f,
     0x1.e5db9ap-50f, 0x1.a36e3p-49f, 0.0f, 0x1.374452p-93f, 0x1.80189p-83f,
     0x1.a90dbap-51f, 0x1.52cd04p-65f, 0x1.eea472p-61f, 0x1.0bfc16p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e306bcp-40f, 0x1.adf94p-8f, 0x1.7dc6bcp-106f, 0x1.bae86p-25f,
     0.0f, 0.0f, 0x1.d62d2cp-101f, 0.0f, 0.0f, 0.0f, 0x1.09099cp-1f, 0.0f, 0.0f, 0.0f,
     0x1.b287fep-69f, 0x1.8ff83ep-118f, 0.0f, 0x1.39f7fcp-113f, 0.0f, 0.0f, 0.0f,
     0x1.3cc28cp-23f, 0x1.1168f6p-79f, 0.0f, 0x1.a0d814p-98f, 0x1.92e158p-109f, 0.0f,
     0.0f, 0.0f, 0x1.0b5c48p-46f, 0x1.e6d06ap-101f, 0x1.f8fa84p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6e1d86p-68f, 0.0f, 0.0f, 0x1.658fap-101f, 0x1.6dafb6p-19f,
     0x1.d735e4p-24f, 0.0f, 0x1.20f75ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1048fap-74f, 0x1.688b7ap-67f, 0x1.4c66b4p-124f, 0.0f, 0x1.7c2acep-16f,
     0x1.2dc7c6p-17f, 0x1.6bc35ep-29f, 0.0f, 0.0f, 0.0f, 0x1.a7d04p-82f,
     0x1.04e262p-24f, 0x1.f35424p-121f, 0x1.a13da2p-8f, 0.0f, 0.0f, 0.0f,
     0x1.6c5e44p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12db6ap-28f,
     0x1.590226p-13f, 0.0f, 0.0f, 0x1.ff0328p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a36f4p-115f, 0.0f, 0x1.61e7d8p-124f, 0x1.a8e026p-106f, 0x1.344b3ep-119f,
     0.0f, 0x1.221eb2p-62f, 0x1.ea69c4p-106f, 0.0f, 0.0f, 0.0f, 0x1.9f493p-26f, 0.0f,
     0.0f, 0x1.04387cp-49f, 0x1.5130bap-45f, 0.0f, 0.0f, 0.0f, 0x1.a7cd6cp-29f,
     0x1.468b92p-18f, 0.0f, 0.0f, 0x1.f8c666p-51f, 0.0f, 0.0f, 0x1.456dbp-64f, 0.0f,
     0.0f, 0x1.51269cp-5f, 0.0f, 0.0f, 0x1.0a4fbcp-35f, 0.0f, 0.0f, 0.0f,
     0x1.cd382p-46f, 0x1.808b86p-93f, 0x1.2b89cep-79f, 0.0f, 0.0f, 0x1.59e3ccp-30f,
     0.0f, 0x1.99ff08p-40f, 0x1.f23adcp-119f, 0.0f, 0x1.37b038p-96f, 0x1.7c0742p-121f,
     0x1.1a21bcp-7f, 0x1.d3f118p-112f, 0x1.87b2dap-102f, 0x1.2de0bcp-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c111dcp-93f, 0.0f, 0x1.a111d4p-125f, 0x1.5a3914p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.912df2p-27f, 0x1.a5fba2p-47f, 0x1.1c5bdcp-99f, 0.0f,
     0x1.9ab9f2p-41f, 0x1.6c4d78p-60f, 0x1.0eee02p-58f, 0x1.2b530ep-50f, 0.0f,
     0x1.1dfa96p-107f, 0x1.1217bep-59f, 0x1.79433cp-41f, 0x1.7cd66ap-23f, 0.0f,
     0x1.0e12e2p-126f, 0.0f, 0.0f, 0x1.c48ed6p-120f, 0x1.9ae4dap-58f, 0.0f,
     0x1.0b634ap-13f, 0.0f, 0x1.1e759cp-77f, 0.0f, 0.0f, 0.0f, 0x1.2140b6p-43f,
     0x1.5ca1f4p-47f, 0.0f, 0x1.0675c6p-35f, 0x1.195ef8p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.95ff4ep-124f, 0x1.77f696p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00cd1cp-105f, 0.0f, 0x1.bef7dp-104f, 0x1.9a878ep-122f, 0.0f,
     0x1.948cc4p-120f, 0x1.96fe3p-113f, 0x1.6ed29ap-78f, 0x1.b03f42p-18f,
     0x1.6d30dp-21f, 0x1.03c6fap-22f, 0.0f, 0x1.60e31ap-35f, 0x1.a84f42p-13f, 0.0f,
     0x1.4e186ap-16f, 0x1.6c6c52p-116f, 0.0f, 0.0f, 0x1.90deb6p-124f, 0.0f,
     0x1.da09bep-65f, 0x1.42f94ep-57f, 0.0f, 0.0f, 0x1.b891ap-24f, 0.0f,
     0x1.92d69cp-84f, 0.0f, 0.0f, 0x1.5dbd3p-80f, 0x1.285d46p-59f, 0.0f,
     0x1.d50ec4p-79f, 0.0f, 0x1.a6d29ep-80f, 0.0f, 0x1.103c5cp-4f, 0.0f,
     0x1.c7fa86p-98f, 0.0f, 0x1.88817p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0355dcp-92f, 0x1.43e3eap-62f, 0.0f, 0x1.c44d44p-123f, 0.0f, 0.0f,
     0x1.f51f0cp-57f, 0.0f, 0x1.2d657ep-107f, 0x1.c54c98p-25f, 0.0f, 0.0f,
     0x1.5fa7ap-62f, 0.0f, 0x1.d38c1p-82f, 0x1.99ed04p-121f, 0x1.fb4cecp-76f, 0.0f,
     0x1.47c0bp-38f, 0x1.873954p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44a53p-81f, 0x1.5a70b8p-70f, 0x1.c87e1ap-2f, 0.0f, 0.0f,
     0x1.e153f4p-26f, 0.0f, 0x1.d78c82p-30f, 0.0f, 0.0f, 0x1.15f57cp-73f, 0.0f,
     0x1.1c68b6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99aac4p-81f, 0x1.858ad6p-12f, 0.0f,
     0x1.d91202p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e7c2cp-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c5495p-27f, 0x1.77a8fap-116f, 0.0f, 0.0f, 0x1.9a2dc2p-43f, 0.0f,
     0x1p0f, 0x1.d6760ep-84f, 0x1.d08ffap-31f, 0x1.94a0d6p-78f, 0.0f, 0.0f,
     0x1.e6530ep-10f, 0.0f, 0.0f, 0.0f, 0x1.71f47cp-77f, 0.0f, 0x1.d8de7cp-101f,
     0x1.c64faap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d28e78p-90f, 0x1.869868p-104f,
     0x1.2517bep-82f, 0.0f, 0x1.8a8678p-8f, 0x1.f9214cp-99f, 0.0f, 0x1.13eb64p-19f,
     0x1.d8533cp-15f, 0x1.91f7p-19f, 0.0f, 0x1.f8b908p-120f, 0x1.b31066p-16f,
     0x1.6db0b2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23200cp-99f, 0x1.462804p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43fa0ap-91f, 0.0f, 0.0f,
     0x1.6552c6p-11f, 0.0f, 0.0f, 0x1.5d89d2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e57436p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55a174p-30f,
     0x1.fbfe4p-80f, 0.0f, 0x1.2a7faep-28f, 0x1.a9f946p-60f, 0x1.03a47p-49f,
     0x1.8ffabp-25f, 0.0f, 0x1.317c8ep-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.37d2e8p-64f, 0x1.b6d192p-19f, 0.0f, 0.0f, 0x1.53c1d6p-106f,
     0x1.9582ap-120f, 0.0f, 0x1.493b42p-45f, 0x1.7fec2cp-61f, 0.0f, 0x1.926264p-67f,
     0x1.161ab6p-70f, 0x1.c1aad6p-8f, 0x1.0d60c6p-106f, 0x1.03563p-123f, 0.0f,
     0x1.51ccb4p-61f, 0.0f, 0.0f, 0.0f, 0x1.6af7aep-54f, 0.0f, 0x1.973adap-86f,
     0x1.efa666p-102f, 0.0f, 0x1.0ed09p-120f, 0.0f, 0x1.cbdd78p-79f, 0.0f,
     0x1.19f1cp-77f, 0x1.880cd4p-50f, 0x1.17227p-68f, 0.0f, 0x1.f7d5e6p-48f,
     0x1.fdb0d2p-52f, 0x1.ed3078p-126f, 0x1.e60d58p-64f, 0x1.5ec6e2p-109f,
     0x1.1053b2p-40f, 0x1.66535p-47f, 0x1.42905ap-85f, 0.0f, 0.0f, 0x1.8be288p-66f,
     0.0f, 0.0f, 0x1.5461bep-47f, 0x1.3fd684p-26f, 0x1.232ddcp-35f, 0x1.a172eap-125f,
     0.0f, 0x1.c9b19ap-94f, 0x1.cc224ep-40f, 0x1.b69a3p-98f, 0x1.3a6c8ep-39f,
     0x1.4a08c2p-73f, 0x1.8ec9eap-75f, 0x1.35ad26p-25f, 0.0f, 0x1.62094p-49f, 0.0f,
     0x1.b1b8fcp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bcf2cp-59f, 0.0f,
     0x1.7f4c3ep-70f, 0x1.b014dcp-61f, 0x1.89c0c2p-85f, 0x1.0d91bp-97f,
     0x1.36cda8p-36f, 0.0f, 0x1.fb7bc8p-120f, 0.0f, 0x1.3ed0a4p-119f,
     0x1.8e65e4p-103f, 0.0f, 0x1.5dcbp-48f, 0x1.98337ap-16f, 0.0f, 0x1.e4db0ap-17f,
     0x1.323398p-97f, 0.0f, 0x1.511a1ep-115f, 0.0f, 0x1.df0a62p-62f, 0x1.35ec46p-122f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.5ea236p-58f, 0x1.943ccap-98f, 0.0f, 0.0f, 0x1.c87ffp-14f, 0x1.a06456p-100f,
     0.0f, 0.0f, 0x1.e8ad46p-124f, 0x1.40a61ap-38f, 0x1.7c9934p-111f,
     0x1.ddc4f6p-100f, 0.0f, 0x1.d168ep-113f, 0.0f, 0x1.d3498cp-79f, 0x1.e464e2p-85f,
     0x1.9a9efap-15f, 0.0f, 0.0f, 0.0f, 0x1.7306fep-45f, 0x1.393daap-46f, 0.0f, 0.0f,
     0.0f, 0x1.d93f9p-62f, 0x1.e20156p-107f, 0.0f, 0x1.166c72p-61f, 0.0f,
     0x1.ea18f6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b0078p-78f, 0x1.f593e6p-27f, 0.0f,
     0x1.a5436p-32f, 0.0f, 0x1.7d45fep-37f, 0x1.99744cp-78f, 0x1.74c7ecp-18f,
     0x1.ed7d78p-103f, 0x1.69dc96p-116f, 0x1.bb3d6p-120f, 0x1.e3775p-99f, 0.0f,
     0x1.2cb30ep-92f, 0x1.681b0ap-37f, 0x1.6c21fcp-23f, 0.0f, 0x1.98a552p-32f,
     0x1.9d1b9ep-61f, 0x1.c994bcp-121f, 0.0f, 0.0f, 0x1.d6f836p-74f, 0.0f, 0.0f, 0.0f,
     0x1.62ebaap-40f, 0x1.6ee0dep-8f, 0.0f, 0x1.166394p-85f, 0x1.8eb43ap-7f,
     0x1.ca2536p-76f, 0x1.00f13ep-99f, 0x1.dbb66cp-112f, 0x1.8e1cc8p-75f,
     0x1.653e6cp-80f, 0x1.eca362p-6f, 0x1.6e8e9p-121f, 0x1.f9c4dap-85f,
     0x1.d8e03ep-15f, 0x1.e49b3cp-29f, 0x1.5524aap-104f, 0x1.fbdf3cp-49f,
     0x1.13101ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a50ap-60f, 0.0f, 0x1.87c088p-125f,
     0x1.2c9ac4p-125f, 0.0f, 0x1.41a2f2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45e8f6p-74f,
     0.0f, 0.0f, 0x1.022078p-10f, 0x1.c0d39p-55f, 0.0f, 0x1.8de09ep-43f,
     0x1.d3932ap-67f, 0x1.9b4e8ap-94f, 0.0f, 0x1.de708p-96f, 0.0f, 0x1.aa2cfap-107f,
     0.0f, 0x1.c90046p-104f, 0x1.7900d6p-11f, 0x1.d10db2p-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f06e2p-83f, 0.0f, 0.0f, 0x1.0eb7dp-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73eceep-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59d536p-57f, 0.0f,
     0x1.b36f8cp-6f, 0.0f, 0x1.0b2b92p-70f, 0x1.275f4p-12f, 0.0f, 0x1.14fd7ap-70f,
     0.0f, 0x1.b89fdp-126f, 0x1.a752f4p-45f, 0x1.f8d8c8p-4f, 0x1.b8a5fep-55f, 0.0f,
     0.0f, 0x1.289018p-117f, 0.0f, 0x1.0d4f68p-10f, 0x1.9a5284p-23f, 0x1.7193a2p-77f,
     0.0f, 0.0f, 0x1.0f797cp-12f, 0.0f, 0.0f, 0.0f, 0x1.95eb8ap-15f, 0x1.3db5fp-5f,
     0.0f, 0.0f, 0x1.88913ap-40f, 0x1.299efep-40f, 0x1.9f6c12p-34f, 0x1.51a1c6p-97f,
     0.0f, 0x1.b70524p-74f, 0.0f, 0.0f, 0x1.f48b8p-101f, 0x1.66495ap-32f,
     0x1.f43808p-62f, 0x1.9715ccp-108f, 0x1.e720e4p-7f, 0x1.455f54p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.943666p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7572ep-61f, 0.0f, 0x1.0423e6p-22f, 0.0f, 0.0f, 0x1.8565e6p-17f,
     0x1.0dd04cp-27f, 0.0f, 0.0f, 0x1.5aeba8p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.497624p-53f, 0.0f, 0x1.bdbcb8p-79f, 0.0f, 0x1.942abcp-31f, 0x1.11ae5ep-16f,
     0x1.2feb4ep-114f, 0.0f, 0.0f, 0x1.5b9564p-45f, 0.0f, 0.0f, 0x1.b19564p-124f,
     0x1.a0af7ap-71f, 0.0f, 0x1.2b021ap-78f, 0.0f, 0.0f, 0.0f, 0x1.19f156p-121f,
     0x1.3071dap-34f, 0x1.63a2a4p-69f, 0x1.c896dap-75f, 0x1.805c1ap-100f,
     0x1.05cb38p-121f, 0.0f, 0.0f, 0.0f, 0x1.943c54p-117f, 0.0f, 0x1.b1ca8p-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a7226p-89f, 0.0f, 0.0f, 0x1.a7b0f4p-32f, 0.0f,
     0x1.31f814p-97f, 0x1.c6428p-23f, 0x1.f39b9p-35f, 0.0f, 0x1.1b66aap-67f,
     0x1.3e0e24p-57f, 0x1.4a7b48p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15dfecp-43f,
     0x1.17f9eep-94f, 0x1.b9993p-91f, 0x1.b3abdap-73f, 0x1.887ed8p-12f, 0.0f, 0.0f,
     0x1.2dce4p-32f, 0x1.c5647ap-96f, 0x1.1b7ec2p-56f, 0x1.139c04p-35f,
     0x1.159202p-109f, 0x1.038f54p-21f, 0.0f, 0.0f, 0x1.d66932p-111f, 0.0f,
     0x1.487cap-38f, 0x1.baf764p-33f, 0.0f, 0x1.1cc73p-67f, 0.0f, 0.0f, 0.0f,
     0x1.294fb2p-72f, 0x1.9b7bb6p-98f, 0x1.51db8cp-22f, 0.0f, 0x1.30b86ep-16f, 0.0f,
     0x1.27e678p-34f, 0x1.de8156p-40f, 0x1.cdbd8cp-69f, 0.0f, 0x1.1628fcp-20f, 0.0f,
     0.0f, 0x1.2a2dc8p-62f, 0.0f, 0.0f, 0x1.d8b098p-115f, 0.0f, 0x1.75fecap-51f, 0.0f,
     0.0f, 0.0f, 0x1.6c8f7cp-64f, 0x1.ec436ap-108f, 0x1.e93822p-22f, 0x1.1d904p-88f,
     0x1.0afe5ep-39f, 0.0f, 0x1.be9138p-13f, 0x1.d5ffaep-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.31643p-12f, 0x1.493f12p-33f, 0x1.0ffc5ap-57f,
     0x1.347ba8p-38f, 0.0f, 0x1.f17b28p-84f, 0x1.fccc98p-19f, 0x1.97d912p-34f, 0.0f,
     0.0f, 0x1.60c036p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f6a0cp-65f, 0.0f, 0.0f,
     0.0f, 0x1.29569ep-93f, 0x1.fcdf82p-29f, 0x1.eb63b4p-23f, 0.0f, 0.0f,
     0x1.d70c44p-55f, 0x1.c14a2ap-30f, 0.0f, 0x1.51406ep-44f, 0x1.1ec522p-39f, 0.0f,
     0x1.b1ce32p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd09b2p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3ba9cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fc4d8p-102f,
     0x1.d45a9ap-88f, 0x1.6dbfccp-70f, 0x1.1e203p-95f, 0x1.5a3a9ap-118f,
     0x1.384268p-102f, 0x1.7a743ap-119f, 0.0f, 0x1.91c376p-78f, 0.0f, 0x1.d80776p-44f,
     0x1.0965e4p-43f, 0x1.300abp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74e06p-106f, 0.0f, 0x1.e7f8b2p-82f, 0x1.537e94p-123f, 0.0f, 0x1.56c96ep-100f,
     0.0f, 0x1.443662p-114f, 0.0f, 0.0f, 0x1.861e18p-97f, 0x1.abb4b6p-24f, 0.0f, 0.0f,
     0x1.f5f0dep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12cbd6p-118f, 0x1.01c0bap-81f, 0x1.bac8aap-41f, 0x1.4d292p-9f,
     0x1.d4e5c4p-79f, 0.0f, 0.0f, 0x1.2af796p-81f, 0.0f, 0.0f, 0.0f, 0x1.03d6bcp-31f,
     0.0f, 0.0f, 0.0f, 0x1.88fd84p-62f, 0x1.c7ee6p-10f, 0.0f, 0x1.37b958p-63f, 0.0f,
     0x1.a9f44p-92f, 0x1.ed99b8p-24f, 0x1.ea25f6p-65f, 0.0f, 0x1.0ab4dap-122f, 0.0f,
     0.0f, 0x1.216c58p-11f, 0x1.5b8c34p-125f, 0x1.e6d1f8p-22f, 0.0f, 0x1.9a0056p-117f,
     0x1.accc42p-84f, 0x1.7f1f1p-16f, 0x1.189f04p-123f, 0x1.47db46p-9f,
     0x1.8cce18p-8f, 0.0f, 0.0f, 0x1.bac67cp-64f, 0.0f, 0.0f, 0x1.9f661ap-44f, 0.0f,
     0.0f, 0x1.0e1584p-44f, 0x1.4444dcp-96f, 0x1.10ef3cp-20f, 0x1.74534ap-110f, 0.0f,
     0x1.f120bap-124f, 0.0f, 0x1.55caf6p-95f, 0.0f, 0.0f, 0.0f, 0x1.1b8bfap-108f,
     0.0f, 0x1.f58858p-111f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d840ep-25f, 0x1.85732cp-99f, 0x1.e8e6c8p-17f, 0.0f, 0.0f, 0.0f,
     0x1.47296ap-104f, 0x1.1295aap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69ec96p-120f,
     0x1.df3f94p-110f, 0x1.491f4p-38f, 0.0f, 0.0f, 0x1.96999ap-75f, 0.0f, 0.0f, 0.0f,
     0x1.3e605cp-43f, 0x1.329924p-117f, 0.0f, 0.0f, 0.0f, 0x1.460e9cp-85f, 0.0f,
     0x1.914b3ap-62f, 0x1.f10548p-108f, 0.0f, 0.0f, 0.0f, 0x1.a709d2p-82f,
     0x1.11446ep-8f, 0.0f, 0.0f, 0.0f, 0x1.460432p-49f, 0x1.ee5ffep-24f,
     0x1.89a15cp-11f, 0x1.4da9c2p-42f, 0x1.5b3ddp-48f, 0x1.780218p-28f,
     0x1.e5b7eep-21f, 0.0f, 0x1.f28582p-48f, 0x1.b421ap-115f, 0x1.3109eap-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.372478p-1f, 0x1.b54308p-38f, 0x1.34ae64p-74f, 0.0f, 0.0f,
     0.0f, 0x1.ee2a44p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9246dap-87f,
     0x1.232c0ap-89f, 0.0f, 0.0f, 0.0f, 0x1.5ce1e8p-94f, 0.0f, 0x1.1d2a2ep-89f,
     0x1.b24a8p-106f, 0x1.ede91p-88f, 0x1.f88816p-17f, 0x1.2e1f46p-47f,
     0x1.6ea97ep-125f, 0x1.e389b6p-61f, 0x1.d72114p-37f, 0.0f, 0.0f, 0x1.56445ap-88f,
     0.0f, 0.0f, 0x1.2e4afcp-118f, 0x1.2dc356p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.518fa4p-99f, 0x1.215b82p-14f, 0.0f, 0x1.c9d626p-80f, 0.0f, 0.0f, 0.0f,
     0x1.8d907ap-48f, 0x1p0f, 0x1.646afp-80f, 0.0f, 0x1.a773c6p-59f, 0x1.13db78p-100f,
     0.0f, 0x1.9d9a2p-25f, 0x1.4f14a2p-19f, 0x1.0217p-84f, 0.0f, 0.0f,
     0x1.022e74p-116f, 0x1.74f85ep-82f, 0.0f, 0x1.b11202p-35f, 0.0f, 0x1.4065d8p-120f,
     0x1.e22fa2p-71f, 0x1.43381ap-69f, 0.0f, 0.0f, 0x1.e01edcp-46f, 0x1.2a1dd6p-80f,
     0.0f, 0.0f, 0x1.0e731ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de1f36p-12f,
     0x1.cead8ap-73f, 0x1.c693d2p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.235b7p-18f,
     0.0f, 0x1.df3122p-109f, 0x1.eadd5ap-35f, 0.0f, 0.0f, 0x1.44f376p-21f, 0.0f, 0.0f,
     0x1.b9544p-103f, 0.0f, 0.0f, 0.0f, 0x1.d4ad5ap-15f, 0.0f, 0x1.0aff5p-5f, 0.0f,
     0.0f, 0x1.3ffc3cp-28f, 0x1.c82bf2p-49f, 0.0f, 0.0f, 0x1.7bd914p-41f,
     0x1.e431ep-49f, 0.0f, 0.0f, 0.0f, 0x1.9475b8p-53f, 0x1.a2bdep-38f, 0.0f,
     0x1.f7b264p-126f, 0x1.1f3d5p-15f, 0x1.1c9cb8p-109f, 0x1.3afb3ep-20f,
     0x1.e76cb4p-45f, 0.0f, 0x1.0c2e42p-10f, 0.0f, 0.0f, 0.0f, 0x1.ad4a6cp-75f, 0.0f,
     0x1.59f9c2p-63f, 0x1.c48b0ep-50f, 0x1.ece426p-108f, 0.0f, 0.0f, 0x1.6584aep-38f,
     0x1.39a87cp-33f, 0.0f, 0.0f, 0x1.5f4ac8p-25f, 0.0f, 0.0f, 0x1.2df336p-112f,
     0x1.270b74p-97f, 0.0f, 0x1.a68bb4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e916p-1f, 0.0f, 0x1.807572p-122f, 0.0f, 0x1.f1a312p-27f, 0x1.060f34p-109f,
     0.0f, 0.0f, 0x1.40a942p-106f, 0x1.14092ep-39f, 0.0f, 0x1.591d8ap-87f,
     0x1.1db0d8p-77f, 0.0f, 0x1.f1e08ep-16f, 0x1.227af6p-31f, 0x1.29b6dep-102f,
     0x1.9c0742p-60f, 0.0f, 0x1.1099aep-65f, 0x1.c90a54p-57f, 0.0f, 0x1.fa559ap-99f,
     0x1.36f27cp-14f, 0x1.d6ce0cp-13f, 0x1.246bd2p-95f, 0x1.458516p-94f, 0.0f,
     0x1.8aecp-61f, 0.0f, 0.0f, 0.0f, 0x1.e18df4p-62f, 0.0f, 0.0f, 0.0f,
     0x1.fa3792p-12f, 0x1.634b52p-23f, 0.0f, 0.0f, 0x1.bb0846p-113f, 0.0f, 0.0f,
     0x1.02330cp-92f, 0x1.e94e66p-19f, 0.0f, 0x1.a0862ep-23f, 0x1.a05506p-43f,
     0x1.0c691ep-25f, 0x1.78227p-125f, 0x1.ccf1fep-98f, 0.0f, 0.0f, 0.0f,
     0x1.b8d0b4p-71f, 0.0f, 0.0f, 0x1.0f31aap-84f, 0x1.92a0b2p-24f, 0.0f, 0.0f,
     0x1.3dfc1ep-32f, 0x1.4538c8p-113f, 0x1.6f2dbep-33f, 0x1.f53dbp-104f, 0.0f,
     0x1.b77b2p-122f, 0.0f, 0x1.f55e2p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d266p-39f,
     0.0f, 0.0f, 0x1.2227bcp-105f, 0x1.8667e2p-18f, 0.0f, 0.0f, 0x1.e4fe82p-88f, 0.0f,
     0.0f, 0x1.a4fa96p-39f, 0x1.0a6e64p-16f, 0x1.0923b8p-22f, 0x1.a0cd18p-63f, 0.0f,
     0x1.e0308ep-121f, 0.0f, 0x1.5afe38p-82f, 0.0f, 0x1.57d8p-33f, 0x1.b10d56p-5f,
     0.0f, 0x1.dee6ap-122f, 0.0f, 0.0f, 0x1.1dcddep-70f, 0x1.b9276ep-40f, 0.0f,
     0x1.84285cp-50f, 0.0f, 0x1.5dedp-3f, 0x1.c4e382p-21f, 0x1.552a8ep-107f, 0.0f,
     0x1.13a03ap-81f, 0.0f, 0x1.4b4d64p-4f, 0.0f, 0.0f, 0x1.460d7ap-31f,
     0x1.55f678p-111f, 0.0f, 0x1.c8110ap-87f, 0x1.2d7068p-74f, 0.0f, 0x1.289a04p-95f,
     0.0f, 0x1.87276ap-60f, 0x1.403796p-15f, 0x1.9804eep-118f, 0.0f, 0.0f,
     0x1.97588ap-28f, 0x1.87a67ap-14f, 0.0f, 0.0f, 0.0f, 0x1.11d61cp-81f, 0.0f, 0.0f,
     0.0f, 0x1.ba6334p-62f, 0.0f, 0x1.62f41ap-73f, 0.0f, 0x1.bed44p-23f, 0.0f,
     0x1.f4f7fap-87f, 0.0f, 0x1.d6c628p-34f, 0.0f, 0x1.03e166p-9f, 0x1.4e701ap-76f,
     0.0f, 0.0f, 0x1p0f, 0x1.e02964p-100f, 0x1.04376ap-83f, 0.0f, 0x1.69082p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.617f4cp-30f, 0.0f, 0x1.d49c0cp-90f, 0.0f,
     0x1.be582cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a5632p-114f, 0x1.d4696ap-13f,
     0x1.48c8c8p-94f, 0x1.0a524ap-31f, 0x1.6425c4p-23f, 0x1.16c64ap-63f,
     0x1.e9cb18p-17f, 0x1.326048p-124f, 0.0f, 0x1.006c2ep-112f, 0.0f, 0x1.d0a38ap-72f,
     0x1.14482ep-16f, 0x1.1fdad4p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21196ap-42f,
     0.0f, 0x1.2099f8p-27f, 0x1.0e1ee6p-70f, 0x1.4e4efep-93f, 0.0f, 0x1.c92f86p-58f,
     0.0f, 0x1.78014p-53f, 0.0f, 0.0f, 0x1.7533d8p-104f, 0.0f, 0x1.097c16p-103f, 0.0f,
     0.0f, 0x1.db2426p-16f, 0.0f, 0x1.53db68p-45f, 0.0f, 0x1.4d8f76p-35f,
     0x1.ec49ccp-79f, 0x1.6ac19ep-126f, 0x1.011decp-115f, 0.0f, 0.0f,
     0x1.fd0144p-101f, 0x1.f25ad4p-84f, 0x1.9f7278p-118f, 0.0f, 0.0f, 0x1.a39aecp-54f,
     0x1.de0118p-21f, 0x1.117628p-47f, 0.0f, 0x1.1c30f8p-86f, 0.0f, 0x1.f849c8p-61f,
     0x1.6d00e8p-21f, 0.0f, 0x1.653e8p-1f, 0.0f, 0x1.d97688p-81f, 0x1.1e9f76p-15f,
     0x1.a71b8p-97f, 0.0f, 0x1.047e08p-104f, 0x1.02f46cp-101f, 0x1.ca71acp-86f, 0.0f,
     0x1.41d9a2p-80f, 0x1.ae9b4p-3f, 0x1.8ce9cap-65f, 0x1.0b42dep-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d4038ep-82f, 0.0f, 0.0f, 0x1.fa475ap-26f, 0.0f, 0.0f, 0.0f,
     0x1.9a43e8p-59f, 0x1.30b19ep-95f, 0.0f, 0.0f, 0.0f, 0x1.7f2296p-31f,
     0x1.30a96ap-54f, 0x1.3e71fp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8bc88p-116f,
     0x1.c49efap-24f, 0.0f, 0x1.080b5p-66f, 0.0f, 0x1.e8c636p-20f, 0x1.798fe2p-44f,
     0x1.e6d4e2p-98f, 0x1.111e62p-102f, 0.0f, 0.0f, 0x1.4267f2p-123f, 0x1.7e75e4p-10f,
     0x1.7a007cp-45f, 0x1.4474dp-104f, 0x1.60d17p-18f, 0.0f, 0.0f, 0x1.6d959cp-79f,
     0x1.d1e73p-24f, 0x1.ccbb26p-5f, 0.0f, 0x1.c4183p-86f, 0.0f, 0x1.8056f2p-124f,
     0.0f, 0.0f, 0x1.29b05cp-80f, 0x1.f9efa4p-118f, 0x1.a7ef82p-77f, 0.0f, 0.0f, 0.0f,
     0x1.f3a04cp-5f, 0x1.dab662p-58f, 0.0f, 0x1.99d4eap-38f, 0x1.9342fap-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.02c412p-27f, 0.0f, 0x1.2d7a28p-94f, 0.0f, 0.0f, 0.0f,
     0x1.208734p-113f, 0.0f, 0x1.1f5d4ap-36f, 0x1.06b1b6p-65f, 0.0f, 0.0f,
     0x1.27f7f8p-34f, 0.0f, 0.0f, 0.0f, 0x1.a7ae4p-54f, 0x1.483f02p-13f,
     0x1.323508p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp2 = Sleef_atan2f1_u10purecfma(tmp0, tmp1);
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
    printf("Sleef_atan2f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atan2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
