/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastcosf1_u3500purecfma.c --function \
 *     Sleef_fastcosf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f58798p-95f, 0.0f, 0.0f, 0x1.55f73ep-62f,
     0x1.045a38p-66f, 0x1.f23a3p-85f, 0.0f, 0x1.033576p-126f, 0x1.1833d4p-90f, 0.0f,
     0x1.c848b6p-79f, 0.0f, 0.0f, 0.0f, 0x1.2fb3bap-120f, 0x1.dca668p-78f,
     0x1.b7dccep-92f, 0x1.51cf9p-107f, 0.0f, 0x1.5ab824p-36f, 0x1.3e7c2cp-1f,
     0x1.884884p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96aadap-47f,
     0.0f, 0.0f, 0x1.5540cep-114f, 0x1.65e82ep-90f, 0x1.e85828p-84f, 0.0f,
     0x1.03ac18p-39f, 0x1.8ab50ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f4578p-119f,
     0.0f, 0x1.9da426p-13f, 0.0f, 0.0f, 0x1.a6ad04p-83f, 0x1.74db42p-46f,
     0x1.dd7794p-118f, 0x1.3312d6p-64f, 0x1.4852c6p-71f, 0x1.4992eep-45f, 0.0f,
     0x1.61e22ep-24f, 0x1.1ec6cp-10f, 0.0f, 0x1.c09412p-119f, 0x1.699b76p-82f,
     0x1.730968p-122f, 0x1.1a8f46p-90f, 0.0f, 0x1.158e8cp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.40cbecp-62f, 0.0f, 0x1.b4dfep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.178bc4p-59f,
     0.0f, 0.0f, 0.0f, 0x1.3b4eccp-26f, 0x1.bd0ad4p-16f, 0x1.4792b6p-79f,
     0x1.7f4ce2p-50f, 0x1.94eeb6p-91f, 0.0f, 0x1.a2c7bp-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa0cdcp-52f, 0.0f, 0.0f, 0x1.6dc134p-122f, 0.0f, 0x1.d4eb5p-78f,
     0x1.922026p-121f, 0.0f, 0.0f, 0x1.15f74p-39f, 0.0f, 0.0f, 0x1.fc359cp-60f,
     0x1.7bd456p-52f, 0x1.307456p-86f, 0x1.70a4eep-112f, 0.0f, 0x1.4dee94p-122f,
     0x1.6a4bccp-53f, 0.0f, 0.0f, 0x1.590404p-122f, 0.0f, 0.0f, 0x1.565af6p-58f,
     0x1.e013e2p-42f, 0.0f, 0x1.1dc70cp-92f, 0.0f, 0x1.dfab5ap-69f, 0.0f, 0.0f,
     0x1.8b9984p-92f, 0.0f, 0x1.e452dcp-37f, 0x1.063de6p-19f, 0x1.e1369cp-66f, 0.0f,
     0.0f, 0x1.5a57aep-104f, 0.0f, 0x1.185f12p-24f, 0x1.2732c6p-31f, 0x1.f63262p-109f,
     0x1.0e36bep-75f, 0x1.ba9d2cp-95f, 0.0f, 0x1.67114cp-3f, 0.0f, 0.0f, 0.0f,
     0x1.d753dap-17f, 0x1.8f6b86p-45f, 0x1p0f, 0x1.2ed84p-77f, 0x1.b777c8p-86f, 0.0f,
     0.0f, 0x1.b4d74ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a43d2ap-40f, 0x1.072cb8p-33f,
     0x1.ab1054p-75f, 0.0f, 0x1p0f, 0x1.6547f6p-124f, 0x1.e96eb8p-57f,
     0x1.8394cep-18f, 0x1.7ae806p-107f, 0x1.bdeb5ep-1f, 0.0f, 0x1.90b642p-72f,
     0x1.8c47b6p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bfa52p-103f, 0.0f,
     0x1.d262acp-15f, 0.0f, 0x1.a2c69ep-43f, 0.0f, 0x1.6dac3ep-121f, 0x1.a851fcp-74f,
     0.0f, 0x1.6086ecp-93f, 0.0f, 0x1.a14a5ap-69f, 0x1.0bd524p-65f, 0.0f, 0.0f, 0.0f,
     0x1.af0feep-102f, 0x1.40ffc8p-22f, 0.0f, 0x1.d0b478p-59f, 0x1.fe4528p-33f, 0.0f,
     0.0f, 0.0f, 0x1.1a05e2p-125f, 0x1.23e276p-108f, 0x1.a3989p-91f, 0.0f,
     0x1.b7a848p-34f, 0x1.6ce1a8p-3f, 0.0f, 0x1.3a2cd4p-61f, 0x1.cb163cp-45f,
     0x1.b6de8ap-45f, 0x1.fc1db8p-54f, 0x1.373deep-58f, 0x1.64715p-60f, 0.0f, 0.0f,
     0x1.63835ep-36f, 0x1.7a81c6p-76f, 0x1.eb8c3cp-66f, 0x1.12579p-86f, 0.0f, 0.0f,
     0.0f, 0x1.daec4p-91f, 0x1.6a21d8p-112f, 0x1.eafd26p-112f, 0.0f, 0x1.86abbap-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8dc7p-71f, 0.0f, 0x1.4643c2p-53f, 0x1.cf9f66p-23f,
     0x1.ad17bp-54f, 0.0f, 0.0f, 0.0f, 0x1.adf056p-66f, 0x1.bfeb32p-13f, 0.0f,
     0x1.a83382p-35f, 0x1.2d2952p-58f, 0x1.ca2288p-32f, 0.0f, 0x1.5e977p-87f,
     0x1.0b38fap-44f, 0.0f, 0x1.dc963p-91f, 0x1.5f0dacp-115f, 0x1.742028p-93f,
     0x1.5f4cbp-16f, 0x1.a91b3ep-105f, 0x1.2014f6p-33f, 0.0f, 0x1.1b54e6p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42b8fap-122f, 0x1.068122p-55f, 0x1.c6e7f2p-92f,
     0.0f, 0x1.5087b8p-34f, 0x1.802b04p-49f, 0.0f, 0x1.a34454p-31f, 0x1.36eaeep-21f,
     0.0f, 0.0f, 0x1.cbdc9cp-3f, 0x1.576ed6p-116f, 0.0f, 0x1.5185b4p-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.627646p-87f, 0x1.ee89bep-85f, 0x1.90182p-84f, 0x1.3feafp-91f,
     0x1.1a3d74p-86f, 0.0f, 0.0f, 0x1.d60d4p-107f, 0x1.2a6e52p-8f, 0x1.0b9fd2p-109f,
     0x1.474c48p-121f, 0.0f, 0x1.fb171cp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f896e4p-34f,
     0.0f, 0x1.6659bcp-106f, 0x1.15bc76p-107f, 0.0f, 0.0f, 0x1.3583bcp-87f,
     0x1.fa87a2p-54f, 0x1.8d82fap-22f, 0x1.af7eccp-44f, 0.0f, 0.0f, 0x1.4664d8p-4f,
     0x1.6645ccp-114f, 0.0f, 0.0f, 0.0f, 0x1.09067cp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.527548p-31f, 0x1.11d04ap-78f, 0.0f, 0.0f, 0x1.f50da2p-77f,
     0x1.b791d8p-70f, 0x1.3572cp-111f, 0.0f, 0x1.c329c2p-60f, 0.0f, 0.0f,
     0x1.a71836p-53f, 0x1.b46e9p-60f, 0.0f, 0x1.669e0ap-5f, 0x1.f3f15ep-23f, 0.0f,
     0x1.bcefdep-109f, 0.0f, 0x1.d4f414p-70f, 0x1.3ecc82p-83f, 0x1.d76ab4p-51f, 0.0f,
     0.0f, 0x1.7dbebap-20f, 0.0f, 0x1.e08f76p-46f, 0.0f, 0x1.fb91b4p-9f, 0.0f, 0.0f,
     0x1.aeb4ecp-47f, 0x1.9a41b4p-71f, 0.0f, 0.0f, 0.0f, 0x1.3c14eep-107f, 0.0f,
     0x1.5a3908p-116f, 0x1.74ef3cp-8f, 0.0f, 0.0f, 0x1.479fp-116f, 0x1.a38032p-17f,
     0.0f, 0.0f, 0x1.9c52ccp-38f, 0x1.446a74p-72f, 0.0f, 0.0f, 0.0f, 0x1.feee4ep-108f,
     0.0f, 0x1.819842p-103f, 0x1.931586p-41f, 0x1.a8fe5cp-86f, 0.0f, 0x1.9496dp-30f,
     0x1.dba16p-63f, 0.0f, 0x1.bedd8cp-48f, 0.0f, 0x1.a5bb34p-33f, 0x1.47e33ep-47f,
     0.0f, 0x1.651efcp-29f, 0.0f, 0.0f, 0x1.5bfbap-110f, 0.0f, 0x1.18428cp-116f,
     0x1.10df22p-91f, 0x1.d6feccp-62f, 0x1.11c4e6p-107f, 0x1.5d5752p-85f, 0.0f,
     0x1.3479p-110f, 0.0f, 0x1.cc19d2p-107f, 0x1.34177p-24f, 0x1.da18e2p-87f, 0.0f,
     0.0f, 0x1.9dbb28p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91d25p-55f, 0x1.70addep-38f,
     0.0f, 0x1.41c07p-125f, 0x1.6f3868p-66f, 0x1.fd09f8p-2f, 0x1.a3ee3cp-30f,
     0x1.9e3518p-33f, 0.0f, 0x1.529b82p-6f, 0.0f, 0.0f, 0x1.7a176cp-118f,
     0x1.b24cb6p-72f, 0.0f, 0x1.e79b4cp-63f, 0x1.fcf2bcp-90f, 0x1.2e8e12p-95f, 0.0f,
     0x1.6367dcp-7f, 0.0f, 0x1.3538ecp-21f, 0x1.d8ea7cp-37f, 0x1.27f504p-120f, 0.0f,
     0x1.982a9ep-8f, 0x1.f942fep-56f, 0x1.de1608p-126f, 0.0f, 0x1.b887b2p-17f, 0.0f,
     0.0f, 0x1.fa3c7p-56f, 0x1.05a026p-61f, 0x1.c003b8p-77f, 0x1.f3bbaep-8f, 0.0f,
     0x1.5e31a4p-106f, 0.0f, 0.0f, 0.0f, 0x1.7aa42cp-119f, 0x1.fd0804p-123f, 0.0f,
     0x1.bec956p-44f, 0x1.617c3ep-51f, 0.0f, 0.0f, 0x1.f5a632p-39f, 0x1.5007e6p-81f,
     0x1.e9e288p-69f, 0x1.f014e2p-13f, 0.0f, 0.0f, 0x1.7bc014p-7f, 0.0f, 0.0f,
     0x1.8f0462p-17f, 0.0f, 0.0f, 0x1.286adep-98f, 0.0f, 0x1.cd961ep-56f,
     0x1.998442p-94f, 0x1.50ff1p-80f, 0.0f, 0.0f, 0x1.21f236p-36f, 0.0f, 0.0f, 0.0f,
     0x1.e82e5ap-50f, 0.0f, 0.0f, 0x1.2df742p-4f, 0x1.6b4d88p-26f, 0x1.4702fcp-71f,
     0.0f, 0.0f, 0x1.7e8dbp-30f, 0.0f, 0x1.d2c16cp-120f, 0.0f, 0x1.573634p-59f,
     0x1.11ca4p-65f, 0.0f, 0.0f, 0x1.b8efd2p-32f, 0x1.4f297ap-124f, 0x1.49dbd6p-43f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4998cp-49f, 0x1.ade402p-68f,
     0.0f, 0x1.3e7816p-50f, 0x1.e88362p-5f, 0x1.828e0cp-56f, 0.0f, 0x1.6a4c6p-119f,
     0.0f, 0.0f, 0.0f, 0x1.4edd18p-118f, 0.0f, 0x1.56249p-89f, 0.0f, 0.0f,
     0x1.079fe6p-31f, 0x1.57a06ep-80f, 0x1.a0f73ap-14f, 0x1.35db62p-125f, 0.0f, 0.0f,
     0x1.9c51ep-27f, 0x1.6c9524p-108f, 0.0f, 0.0f, 0x1.fab85cp-125f, 0.0f,
     0x1.c6b428p-122f, 0x1.9e7c8ep-121f, 0x1.1f0758p-97f, 0x1.c93ca2p-53f,
     0x1.522156p-119f, 0.0f, 0x1.9b0cp-94f, 0.0f, 0.0f, 0x1.cccb7p-45f,
     0x1.f5a8fap-47f, 0x1.b639c4p-42f, 0x1.9e6284p-72f, 0x1.1dbd3ep-98f,
     0x1.b264c6p-120f, 0x1.eaeffp-106f, 0.0f, 0.0f, 0x1.54ac98p-16f, 0.0f,
     0x1.4b4cb8p-114f, 0x1.c0c7c6p-16f, 0x1.4c19c4p-92f, 0x1.42e9e8p-93f,
     0x1.84153p-100f, 0.0f, 0x1.8b1108p-103f, 0x1.179052p-57f, 0x1.fb4e22p-6f,
     0x1.1c9482p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d45636p-25f, 0x1.dfdeccp-67f, 0.0f,
     0.0f, 0x1.1ab2eep-91f, 0.0f, 0.0f, 0x1.225c8p-40f, 0x1.33ced4p-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0cb3f6p-20f, 0.0f, 0.0f, 0x1.20f4fp-22f, 0.0f, 0x1.01647ep-60f,
     0.0f, 0x1.ba0886p-109f, 0x1.ffc0b4p-52f, 0x1.bd0a2ap-119f, 0.0f, 0x1.c2177cp-10f,
     0.0f, 0x1.4df746p-66f, 0x1.7fe5fap-96f, 0x1.97e7cap-74f, 0x1.5b697cp-62f,
     0x1.086194p-26f, 0.0f, 0.0f, 0.0f, 0x1.3bcacp-111f, 0.0f, 0x1.b94e88p-101f, 0.0f,
     0x1.7dfb44p-105f, 0x1.d35c2cp-59f, 0.0f, 0x1.8552cp-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab4d88p-66f, 0.0f, 0x1.52a884p-106f, 0x1.402c72p-38f, 0.0f, 0.0f,
     0x1.28f30ep-98f, 0x1.655p-108f, 0x1.9456eap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.66c802p-26f, 0.0f, 0x1.974e56p-63f, 0x1.a132f2p-38f, 0.0f,
     0x1.649d18p-48f, 0.0f, 0x1.b3cd28p-91f, 0x1.c4b148p-20f, 0.0f, 0x1.75e912p-71f,
     0.0f, 0.0f, 0.0f, 0x1.f80b6cp-25f, 0.0f, 0.0f, 0x1.fd7b3ap-94f, 0x1.987f4p-85f,
     0x1.3903c4p-70f, 0.0f, 0x1.5ee28p-100f, 0.0f, 0x1.4cccecp-62f, 0x1.bb347cp-112f,
     0.0f, 0.0f, 0x1.02e7c6p-102f, 0x1.8b7b58p-74f, 0x1.6f6748p-123f,
     0x1.5b413ap-118f, 0x1.7cb52cp-109f, 0x1.6716ep-105f, 0x1.d3c188p-47f,
     0x1.6e267p-90f, 0x1.828bbap-69f, 0x1.8987d4p-40f, 0x1.7f5e3ap-120f,
     0x1.400372p-10f, 0x1.8f4b1ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bf072p-20f,
     0x1.88ec38p-42f, 0x1.12fc2ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1bfdap-85f,
     0x1.c9578cp-96f, 0.0f, 0x1.03186ep-123f, 0.0f, 0x1.bcbb68p-88f, 0x1.37526ap-58f,
     0.0f, 0x1.000e2cp-11f, 0x1.21dc8cp-112f, 0.0f, 0x1.fde9f8p-108f,
     0x1.a7b46cp-119f, 0.0f, 0x1.80565ep-122f, 0x1.1f85bcp-51f, 0.0f, 0.0f, 0.0f,
     0x1.dd03b4p-10f, 0x1.59a966p-99f, 0.0f, 0x1.74c01ap-52f, 0x1.500708p-81f,
     0x1.14a3fp-20f, 0.0f, 0x1.00424ap-96f, 0x1.33a01ep-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42d168p-78f, 0x1.6e0cbep-38f, 0x1.852034p-110f, 0x1.413d1ep-42f, 0.0f, 0.0f,
     0.0f, 0x1.c1f3p-13f, 0x1.cd91aep-122f, 0.0f, 0x1.786e88p-92f, 0x1.a5777p-47f,
     0.0f, 0.0f, 0.0f, 0x1.700a6p-116f, 0x1.1b7b98p-14f, 0x1.714074p-52f,
     0x1.ad1108p-76f, 0x1.df41e4p-81f, 0x1.109986p-125f, 0x1.ac8d98p-48f,
     0x1.548736p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f235ap-38f, 0x1.877544p-51f,
     0x1.59dabcp-49f, 0.0f, 0.0f, 0.0f, 0x1.0aff92p-97f, 0x1.563c86p-65f,
     0x1.97360ep-6f, 0.0f, 0x1.8d872ep-43f, 0x1.1c44e2p-62f, 0.0f, 0x1.0df59ap-123f,
     0.0f, 0x1.acb96cp-62f, 0.0f, 0.0f, 0.0f, 0x1.b950f6p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bbe72ep-125f, 0x1.c7c0fep-72f, 0x1p0f, 0.0f, 0x1.f35c3p-80f,
     0x1.4f70dp-40f, 0x1.a7228ap-17f, 0x1.286fd6p-29f, 0x1.6feb9cp-24f, 0.0f, 0.0f,
     0x1.fb0d8ep-120f, 0x1.213ce8p-84f, 0.0f, 0.0f, 0x1.7aa93ep-86f, 0x1.8389fp-91f,
     0x1.f41732p-79f, 0x1.ba9028p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51a7fep-63f, 0.0f,
     0x1.670a28p-96f, 0.0f, 0x1.998784p-85f, 0.0f, 0.0f, 0x1.fc5998p-38f,
     0x1.0ab8d8p-37f, 0x1.bdb9p-2f, 0.0f, 0x1.a4f666p-83f, 0x1.bf658ep-32f, 0.0f,
     0x1.162b32p-27f, 0x1.93e2fp-19f, 0.0f, 0.0f, 0x1.794d44p-24f, 0.0f,
     0x1.67767cp-37f, 0x1.87dccap-114f, 0x1.8b5abep-112f, 0.0f, 0x1.716df8p-1f,
     0x1.87e664p-16f, 0x1.de3b2ap-36f, 0.0f, 0.0f, 0x1.4ace6cp-16f, 0.0f, 0.0f, 0.0f,
     0x1.779c14p-52f, 0x1.ed08fcp-23f, 0x1.726a62p-84f, 0x1.6e93p-2f, 0x1.e3bf9ep-98f,
     0.0f, 0.0f, 0x1.324312p-16f, 0x1.abd624p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.70d98p-14f, 0x1.ce5a18p-122f, 0x1.e9b1dp-117f, 0x1.12228ap-4f, 0.0f, 0.0f,
     0x1.dcbd74p-108f, 0.0f, 0.0f, 0x1.f3d6fcp-26f, 0x1.b691d2p-31f, 0.0f, 0.0f, 0.0f,
     0x1.934b42p-41f, 0.0f, 0.0f, 0x1.cfd83p-97f, 0x1.3e05acp-107f, 0x1.0a1a12p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a838dap-67f, 0.0f, 0.0f, 0x1.a31e6cp-77f,
     0.0f, 0x1.fb6398p-76f, 0x1.0406b4p-13f, 0.0f, 0x1.04bf66p-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.344788p-100f, 0x1.f23f0ep-59f, 0.0f, 0x1.0f3e92p-14f, 0.0f,
     0x1.569d96p-41f, 0.0f, 0.0f, 0x1.420666p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82c34ep-87f, 0.0f, 0.0f, 0x1.da2a58p-40f, 0x1.9d72eep-29f, 0.0f,
     0x1.3a7dc2p-26f, 0x1.035fcp-118f, 0x1.7e6d4ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1977ap-43f, 0.0f, 0.0f, 0x1p0f, 0x1.9d672cp-34f, 0x1.a90856p-56f,
     0x1.2dcedp-26f, 0.0f, 0.0f, 0.0f, 0x1.5e66a2p-59f, 0.0f, 0.0f, 0x1.d12efcp-49f,
     0.0f, 0.0f, 0.0f, 0x1.f928f8p-82f, 0.0f, 0x1.94a9aap-123f, 0.0f, 0x1.bdd3f4p-64f,
     0x1.5f1cc8p-1f, 0x1.b4c5ap-44f, 0x1.e7284cp-61f, 0.0f, 0x1.bd010ap-56f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.bf0f7p-115f, 0x1.817986p-121f, 0x1.b27494p-35f,
     0x1.888ddcp-118f, 0.0f, 0.0f, 0x1.dfe514p-10f, 0.0f, 0x1.f6c2d2p-91f, 0.0f,
     0x1.c9b7dap-11f, 0.0f, 0.0f, 0x1.f19776p-13f, 0.0f, 0.0f, 0x1.528484p-116f,
     0x1.7df01ep-56f, 0.0f, 0x1.38fd62p-65f, 0x1.c1675cp-86f, 0.0f, 0x1.bfd5b6p-61f,
     0.0f, 0x1.e6f2fcp-45f, 0.0f, 0.0f, 0.0f, 0x1.01f104p-126f, 0.0f, 0.0f,
     0x1.64cc2ap-5f, 0.0f, 0x1.d7bdccp-12f, 0.0f, 0x1.9e33c2p-84f, 0.0f,
     0x1.de9806p-7f, 0x1.f73ab8p-94f, 0x1.aa3094p-116f, 0x1.a5b57p-88f,
     0x1.8f8116p-101f, 0.0f, 0x1.302b8ap-95f, 0.0f, 0x1.e936fcp-109f, 0.0f, 0.0f,
     0.0f, 0x1.22c226p-8f, 0x1.4d831ap-112f, 0.0f, 0.0f, 0x1.816d52p-44f, 0.0f,
     0x1.c2b5dcp-117f, 0x1.70a9e4p-103f, 0x1.145a32p-5f, 0x1.6a2886p-28f,
     0x1.891bep-81f, 0x1.71f03p-35f, 0x1.4083ccp-62f, 0.0f, 0.0f, 0x1.29b19ap-114f,
     0.0f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_fastcosf1_u3500purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_fastcosf1_u3500purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fastcosf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
