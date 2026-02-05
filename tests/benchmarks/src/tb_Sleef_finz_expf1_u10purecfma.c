/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expf1_u10purecfma.c --function \
 *     Sleef_finz_expf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.de9aa6p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.941dc6p-9f,
     0x1.de2a88p-107f, 0x1.1ba0d4p-102f, 0.0f, 0x1.8c7e96p-90f, 0.0f, 0x1.c461ccp-29f,
     0x1.f45638p-60f, 0x1.1bfc4cp-25f, 0x1.11574ep-57f, 0x1.c709fap-11f,
     0x1.1c2828p-113f, 0.0f, 0x1.ac5e8ep-42f, 0x1.68d686p-20f, 0x1.b1289ep-109f, 0.0f,
     0.0f, 0x1.fb7f8ep-20f, 0x1.5e8348p-91f, 0.0f, 0x1.34410ep-90f, 0.0f, 0.0f, 0.0f,
     0x1.f3eaa4p-101f, 0.0f, 0.0f, 0x1.3068f6p-59f, 0x1.d912ccp-70f, 0x1.4f6f7p-48f,
     0.0f, 0x1.b942dep-99f, 0x1.79c916p-105f, 0.0f, 0x1.8c58d2p-118f, 0.0f,
     0x1.99eaccp-61f, 0x1.afa912p-57f, 0.0f, 0x1.ba00b6p-120f, 0.0f, 0.0f,
     0x1.54b21cp-5f, 0x1.93f054p-55f, 0x1.dbf176p-19f, 0x1.dbaed2p-14f,
     0x1.33cd12p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1ebdcp-41f,
     0x1.e97228p-84f, 0x1.32e84p-92f, 0.0f, 0x1.1503b2p-79f, 0x1.cbe582p-83f,
     0x1.9acabap-59f, 0.0f, 0x1.fbbfdcp-55f, 0.0f, 0x1.5c46a8p-8f, 0.0f,
     0x1.970a08p-59f, 0x1.5b97bap-60f, 0x1.9efbeep-125f, 0.0f, 0.0f, 0.0f,
     0x1.e0bd92p-15f, 0.0f, 0x1.46b28ep-112f, 0x1.6eed7ep-23f, 0x1.36e59ep-96f, 0.0f,
     0x1.e715acp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18b348p-25f, 0.0f,
     0x1.da66e6p-20f, 0x1.a53f76p-102f, 0.0f, 0.0f, 0x1.214646p-14f, 0.0f, 0.0f, 0.0f,
     0x1.e96036p-82f, 0x1.2d639ap-110f, 0x1.3065a8p-104f, 0x1.ad648cp-102f,
     0x1.b5ccb6p-21f, 0x1.11cb14p-91f, 0x1.a5fdep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77f776p-99f, 0.0f, 0.0f, 0.0f, 0x1.c1bc3ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6d6b2ap-52f, 0.0f, 0.0f, 0.0f, 0x1.1a79aap-85f, 0.0f, 0x1.619928p-97f,
     0.0f, 0x1.941ccap-70f, 0x1.e049c2p-24f, 0.0f, 0.0f, 0x1.c41e32p-62f, 0.0f,
     0x1.41d696p-26f, 0x1.bc2bf4p-60f, 0.0f, 0x1.dc63e6p-8f, 0.0f, 0.0f,
     0x1.398e0ep-20f, 0.0f, 0x1.3e133cp-53f, 0x1p0f, 0x1.8003aap-52f, 0.0f,
     0x1.9c4f1p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9e3b4p-1f, 0.0f, 0.0f,
     0x1.c10916p-54f, 0x1.f8cecep-9f, 0.0f, 0.0f, 0x1.91c13cp-43f, 0.0f,
     0x1.d2f67ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fa2aap-53f, 0x1.557454p-75f, 0.0f,
     0.0f, 0x1.3761aap-82f, 0.0f, 0x1.01bc48p-120f, 0x1.756b5p-109f, 0x1.45fb6ap-65f,
     0x1.040024p-106f, 0x1.a8e7ccp-94f, 0x1.f36ebcp-108f, 0x1.a684e2p-18f,
     0x1.70bcc8p-11f, 0x1.e55d32p-96f, 0.0f, 0x1.94858p-70f, 0.0f, 0.0f, 0.0f,
     0x1.4877a4p-96f, 0.0f, 0.0f, 0x1.662e52p-103f, 0.0f, 0.0f, 0x1.a1941p-30f,
     0x1.d25c16p-57f, 0x1.715084p-5f, 0.0f, 0x1.22c54ep-40f, 0.0f, 0x1.aaabe2p-80f,
     0x1.d69896p-7f, 0.0f, 0x1.f706c8p-91f, 0.0f, 0.0f, 0.0f, 0x1.13333p-29f,
     0x1.ca93dap-67f, 0.0f, 0x1.d38a6p-12f, 0x1.174da4p-79f, 0.0f, 0.0f,
     0x1.8e0706p-120f, 0x1.5fc016p-54f, 0x1.381d08p-87f, 0x1.472a82p-118f,
     0x1.5a7e12p-4f, 0x1.aa4ceap-2f, 0x1p0f, 0x1.66cef8p-121f, 0x1.8cf6bcp-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.102be8p-63f, 0x1.7b0b7ap-105f, 0x1.8ef42ep-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8ae562p-46f, 0x1.949fe6p-115f, 0.0f, 0x1.03215ep-112f,
     0.0f, 0x1.90769p-28f, 0.0f, 0x1.59b722p-39f, 0x1.725bb8p-5f, 0x1.1a8bc6p-44f,
     0.0f, 0.0f, 0x1.7d7158p-126f, 0x1.8cfcf2p-93f, 0.0f, 0x1.23769ep-4f, 0.0f,
     0x1.2a3fbap-37f, 0x1.8c933p-43f, 0x1.9a8f64p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b427ap-64f, 0.0f, 0x1.83e2d8p-79f, 0.0f, 0.0f, 0x1.4739fcp-101f,
     0x1.9f3968p-54f, 0.0f, 0x1.b5cc4cp-66f, 0.0f, 0.0f, 0x1.7d5e48p-29f, 0.0f,
     0x1.5485dap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6d928p-69f, 0.0f, 0x1.c5bc44p-100f,
     0x1.2c173p-118f, 0x1.dd95ecp-50f, 0.0f, 0.0f, 0x1.84ec4ap-84f, 0.0f,
     0x1.137656p-27f, 0.0f, 0.0f, 0x1.1acap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b8604p-12f, 0.0f, 0.0f, 0.0f, 0x1.f7778ep-36f, 0.0f, 0x1.932f5ap-11f, 0.0f,
     0x1.00f2ccp-126f, 0x1.6b5c36p-107f, 0.0f, 0.0f, 0x1.f203b2p-126f, 0.0f,
     0x1.fb8474p-105f, 0.0f, 0.0f, 0x1.240b26p-119f, 0x1.e3f164p-102f,
     0x1.3beceap-77f, 0.0f, 0x1.62b35ap-62f, 0.0f, 0x1.4bb6c6p-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ab4364p-116f, 0.0f, 0x1.d600bap-109f, 0.0f, 0.0f, 0x1.beead8p-2f,
     0x1.44ab88p-51f, 0.0f, 0x1.cc08e4p-18f, 0.0f, 0.0f, 0.0f, 0x1.c754aep-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.168248p-72f, 0.0f, 0.0f, 0x1.5f4e6cp-82f, 0x1.647a5ep-126f,
     0x1.091674p-112f, 0.0f, 0x1.294da4p-2f, 0.0f, 0.0f, 0.0f, 0x1.8fc99ap-112f, 0.0f,
     0.0f, 0x1.db9f5ap-68f, 0.0f, 0x1.055e06p-13f, 0x1.68b1fap-2f, 0.0f, 0.0f, 0.0f,
     0x1.1c0c8ap-70f, 0.0f, 0x1.712e36p-62f, 0x1.0b6a3ep-37f, 0.0f, 0x1.539826p-70f,
     0x1.afc922p-84f, 0.0f, 0x1.5682f2p-119f, 0.0f, 0.0f, 0x1.771838p-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3cd4ep-113f, 0.0f, 0x1.16a3e2p-7f, 0.0f, 0.0f, 0x1.967f88p-105f,
     0.0f, 0.0f, 0x1.27abecp-106f, 0.0f, 0.0f, 0.0f, 0x1.4fae1cp-108f,
     0x1.cd7f1cp-80f, 0x1.c64f44p-20f, 0x1.0cbbacp-109f, 0.0f, 0x1.6dcc2cp-36f, 0.0f,
     0x1.82385p-124f, 0x1.e038a8p-93f, 0.0f, 0.0f, 0x1.0d6c9ep-11f, 0.0f, 0.0f, 0.0f,
     0x1.6678b8p-18f, 0x1.2a225p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.315a38p-54f,
     0x1.363bf8p-52f, 0x1.784aaap-86f, 0.0f, 0x1.2090f6p-30f, 0x1.87ffa2p-42f, 0.0f,
     0x1.9da174p-55f, 0.0f, 0x1.be53c2p-91f, 0.0f, 0.0f, 0x1.17a7c6p-48f, 0.0f, 0.0f,
     0x1.8f0dap-35f, 0x1.6b0272p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39f8b8p-17f, 0.0f,
     0.0f, 0x1.3ad8c6p-18f, 0.0f, 0x1.6983a8p-56f, 0x1.5a99aap-2f, 0.0f,
     0x1.63d59p-124f, 0.0f, 0x1.35612ep-4f, 0x1.39721ap-125f, 0x1.a4773ep-8f, 0.0f,
     0x1.5fa958p-97f, 0x1.021bc2p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8eedfap-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb6decp-18f, 0.0f, 0x1.43b6d8p-74f, 0.0f,
     0x1.eed424p-19f, 0x1.7239dcp-33f, 0x1.bfc5cep-22f, 0.0f, 0.0f, 0x1.731c7cp-104f,
     0.0f, 0x1.7f118p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0e326p-67f, 0.0f,
     0x1.0b3206p-108f, 0x1.64418ap-8f, 0x1.f055dap-48f, 0.0f, 0x1.97a5dp-27f, 0.0f,
     0.0f, 0x1.ae10fap-77f, 0x1.9c1a56p-63f, 0x1.06cb4cp-60f, 0.0f, 0x1.80e64p-107f,
     0x1.bac56cp-87f, 0x1.218022p-22f, 0x1.202fcp-65f, 0.0f, 0x1.313036p-20f, 0.0f,
     0.0f, 0x1.322d0cp-23f, 0x1.647e96p-107f, 0x1p0f, 0x1.196f56p-93f, 0x1.b526bp-82f,
     0x1.e15daap-80f, 0x1.140d2p-116f, 0.0f, 0.0f, 0x1.bc3e44p-28f, 0.0f,
     0x1.1a22fap-8f, 0.0f, 0x1.30b0ap-119f, 0.0f, 0x1.e79ba2p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a65a4p-103f, 0x1.177be2p-2f, 0x1.175c5ep-118f, 0.0f, 0x1p0f,
     0x1.949f92p-43f, 0x1.41b236p-28f, 0.0f, 0x1.02436cp-28f, 0.0f, 0.0f,
     0x1.ff0f0cp-4f, 0x1.94809ep-36f, 0x1.7f86ccp-5f, 0.0f, 0.0f, 0.0f,
     0x1.581fcp-27f, 0.0f, 0.0f, 0x1.a1c83p-30f, 0x1.8c67cap-24f, 0x1.f184p-74f,
     0x1.d3aecp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d37a86p-15f, 0.0f,
     0x1.99fea2p-56f, 0x1.bcfd3ap-29f, 0x1.93d2d2p-117f, 0x1.1ea9bp-109f,
     0x1.cc177p-29f, 0.0f, 0.0f, 0x1.921644p-102f, 0.0f, 0.0f, 0x1.dfe408p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea2e5ap-61f, 0x1.72af8ep-106f, 0.0f,
     0.0f, 0x1.73a1c6p-22f, 0x1.261ae2p-73f, 0.0f, 0.0f, 0.0f, 0x1.1af1aap-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ee7ce2p-14f, 0x1.dcef3p-38f, 0x1.ae2764p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6d824p-59f, 0x1.bd179ap-85f, 0.0f,
     0x1.b94cc6p-42f, 0x1.dae4b4p-124f, 0x1.06188ep-78f, 0x1.6df074p-46f, 0.0f, 0.0f,
     0x1.b128p-119f, 0.0f, 0.0f, 0.0f, 0x1.3b1fc8p-121f, 0.0f, 0x1.f5041ep-91f,
     0x1.6f872ep-57f, 0.0f, 0x1.89c36p-91f, 0.0f, 0x1.e48efcp-44f, 0x1.93dd0ep-64f,
     0.0f, 0.0f, 0.0f, 0x1.013d2ap-125f, 0.0f, 0x1.0578a8p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cac6c4p-118f, 0.0f, 0x1.e5703ap-11f, 0.0f, 0x1.2bd6f8p-106f,
     0x1.94dcdcp-32f, 0x1.bb3c88p-2f, 0x1.22452ep-58f, 0x1.64e432p-120f, 0.0f, 0.0f,
     0x1.a1dd4ap-7f, 0.0f, 0.0f, 0x1.7c3b76p-55f, 0x1.077126p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0acbbep-125f, 0.0f, 0x1.82b316p-41f, 0x1.89f0bap-34f, 0x1.083c92p-54f,
     0x1.74f1c2p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3d4fcp-104f, 0x1.21269p-96f,
     0x1.54fd44p-5f, 0x1.290a5ep-46f, 0x1.d0c256p-26f, 0.0f, 0.0f, 0x1.7b519cp-82f,
     0.0f, 0x1.438c4ap-29f, 0.0f, 0.0f, 0x1.9830a6p-35f, 0x1.9b87dep-115f, 0.0f,
     0x1.5cee12p-46f, 0.0f, 0.0f, 0x1.d46a7cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef50cep-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7db982p-122f, 0x1.64c0a4p-46f, 0x1.258ad6p-72f, 0x1.01a166p-15f,
     0x1.d8345ap-12f, 0x1.9f1734p-18f, 0x1.c4e842p-86f, 0x1.38759cp-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9961eap-97f, 0.0f, 0x1.99a564p-112f, 0x1.5925aap-48f, 0.0f,
     0x1.8b2146p-1f, 0.0f, 0x1.79e558p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.474232p-87f,
     0x1.2af9dep-14f, 0.0f, 0x1.7d0712p-120f, 0x1.c5d13cp-6f, 0x1.e8109ep-75f, 0.0f,
     0x1.9e8478p-15f, 0.0f, 0.0f, 0x1.1dd434p-99f, 0x1.578778p-107f, 0x1.772002p-123f,
     0x1.be6a9p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb77c2p-18f,
     0x1.81d764p-19f, 0x1.61727cp-111f, 0.0f, 0.0f, 0.0f, 0x1.a3efa4p-6f, 0.0f, 0.0f,
     0x1.c4f3d8p-19f, 0x1.03113ep-117f, 0.0f, 0.0f, 0x1.94b644p-93f, 0x1.e86c76p-113f,
     0.0f, 0x1.70e036p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.765e18p-120f, 0.0f,
     0x1.1e4f64p-111f, 0.0f, 0x1.7b4258p-84f, 0.0f, 0.0f, 0x1.b8eaecp-56f,
     0x1.25f20ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b9fb6p-36f, 0x1.340982p-31f,
     0.0f, 0x1.46ebb2p-126f, 0x1.2a1774p-59f, 0x1.bd2ffap-27f, 0.0f, 0.0f, 0.0f,
     0x1.96edeap-62f, 0.0f, 0x1.e3665ap-103f, 0x1.6adf7ep-33f, 0.0f, 0.0f,
     0x1.0fd34ap-30f, 0.0f, 0x1.72ad3p-97f, 0x1.51f71ap-78f, 0x1.b6c784p-31f, 0.0f,
     0x1.9c7902p-71f, 0x1.05f5b4p-90f, 0x1.9c1e6ap-83f, 0x1.eb4526p-68f, 0.0f,
     0x1.348caep-53f, 0x1.fb44c6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1346e6p-86f,
     0x1.ea48f2p-86f, 0.0f, 0x1.a9c262p-63f, 0.0f, 0x1.eb98d4p-28f, 0x1.fee7dep-85f,
     0.0f, 0x1.8615a2p-122f, 0x1p0f, 0x1.28f5bep-72f, 0x1.e9700cp-99f, 0.0f, 0.0f,
     0.0f, 0x1.d0f364p-119f, 0.0f, 0x1.d5f8d6p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3183cp-83f, 0x1.bb875ep-93f, 0.0f, 0x1.734124p-117f, 0x1.81111cp-58f,
     0x1.ba879p-33f, 0.0f, 0.0f, 0x1.8e0628p-115f, 0x1.58c83p-114f, 0x1.e811aap-45f,
     0x1.1fd796p-79f, 0x1.59e86p-20f, 0x1.42cc16p-88f, 0.0f, 0.0f, 0.0f,
     0x1.9963dcp-109f, 0x1.cd35ap-75f, 0x1.896ba6p-87f, 0x1.c61feap-79f, 0.0f,
     0x1.db708ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a8c18p-108f, 0x1.6b9a22p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c502c4p-33f, 0.0f, 0.0f, 0x1.3921ep-79f, 0.0f, 0.0f,
     0.0f, 0x1.f1719cp-5f, 0.0f, 0.0f, 0x1.9b3604p-57f, 0.0f, 0x1.f039e2p-50f,
     0x1.468fdp-74f, 0.0f, 0x1.2086d2p-116f, 0x1.925c6ep-16f, 0x1.01ab66p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f02f4p-30f, 0.0f, 0x1.4bc53cp-26f, 0.0f,
     0x1.92e0a4p-72f, 0x1.40a1p-115f, 0.0f, 0x1.2bbcf8p-27f, 0.0f, 0.0f,
     0x1.2281dep-23f, 0x1.ba8efap-120f, 0.0f, 0.0f, 0.0f, 0x1.c65424p-57f, 0.0f, 0.0f,
     0x1.b2e398p-16f, 0x1.9e4a8cp-105f, 0.0f, 0x1.1af92ep-25f, 0x1.7105d4p-126f,
     0x1.156cbcp-61f, 0.0f, 0x1.d778e6p-31f, 0.0f, 0x1.ca12bep-7f, 0x1.faba34p-90f,
     0x1.f54f42p-97f, 0.0f, 0.0f, 0x1.31d4a2p-35f, 0.0f, 0.0f, 0.0f, 0x1.9207f2p-25f,
     0.0f, 0x1.5c7a7ap-95f, 0x1.7398e2p-110f, 0x1.03b4f2p-46f, 0.0f, 0.0f, 0.0f,
     0x1.43acdp-105f, 0x1.690b0ap-116f, 0.0f, 0x1.bac07ap-82f, 0x1.a4c2c8p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.497a44p-33f, 0x1.18bf62p-84f, 0.0f, 0.0f,
     0x1.73c3c8p-62f, 0.0f, 0.0f, 0.0f, 0x1.7fda34p-39f, 0x1.1ca086p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6c66c2p-75f, 0.0f, 0.0f, 0x1.c6cca6p-19f, 0.0f, 0.0f,
     0x1.fe82ecp-26f, 0.0f, 0x1.f64a56p-28f, 0x1.b17c0ep-98f, 0x1.0c388cp-46f,
     0x1.b226e2p-95f, 0x1.71fd62p-96f, 0x1.08b228p-27f, 0x1.5eaefcp-14f, 0.0f, 0.0f,
     0x1.a7c5dep-72f, 0.0f, 0.0f, 0x1.42fd1ap-45f, 0x1.88b8acp-112f, 0x1.f5bd26p-15f,
     0x1.4fbf6p-96f, 0.0f, 0x1.bd7b6p-68f, 0.0f, 0.0f, 0x1.7a6934p-125f,
     0x1.6fedd6p-11f, 0x1.97257ep-44f, 0.0f, 0x1.b35324p-72f, 0x1.241012p-88f,
     0x1.13f986p-58f, 0.0f, 0.0f, 0x1.64b732p-68f, 0x1.ed8dbep-30f, 0x1.9baacap-90f,
     0x1.12c3b4p-95f, 0x1.ad1ap-27f, 0x1.7970cap-38f, 0x1.b91c0ep-126f,
     0x1.23caf6p-25f, 0.0f, 0x1.da20ecp-72f, 0x1.ee80dep-5f
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
            tmp1 = Sleef_finz_expf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_expf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expf1_u10purecfma bench acc %a\n", global_bench_acc);
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
