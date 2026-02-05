/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floorf8_kvx.c --function Sleef_floorf8_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0.0f, 0.0f, 0.0f, 0x1.5e5c82p-18f, 0x1.7962ccp-106f, 0.0f, 0x1.0462cp-8f,
     0x1.c837bp-121f, 0x1.d9b5f6p-109f, 0x1.6211ep-53f, 0.0f, 0.0f, 0x1.2345c4p-12f,
     0.0f, 0.0f, 0x1.f5fc82p-12f, 0.0f, 0.0f, 0x1.68d384p-50f, 0.0f, 0x1.20cbeep-83f,
     0.0f, 0x1.574864p-113f, 0x1.07840ap-60f, 0.0f, 0.0f, 0.0f, 0x1.a77224p-93f, 0.0f,
     0x1.2bf0ep-92f, 0.0f, 0x1.e88cd8p-95f, 0.0f, 0.0f, 0x1.ebfc0ep-101f, 0.0f, 0.0f,
     0.0f, 0x1.91bd9ap-76f, 0x1.03119cp-4f, 0.0f, 0.0f, 0x1.391afp-24f,
     0x1.dd6782p-13f, 0.0f, 0x1.160cep-16f, 0x1.3c43b2p-23f, 0.0f, 0x1.4ff0ecp-17f,
     0.0f, 0x1.2dd056p-119f, 0x1.ef0ce6p-70f, 0.0f, 0x1.eb1d3cp-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.028414p-1f, 0x1.95043p-86f, 0x1.9c1074p-54f, 0.0f,
     0.0f, 0.0f, 0x1.d8d6bp-20f, 0x1.e4513ap-10f, 0.0f, 0.0f, 0x1.0b70a4p-107f,
     0x1.db441ep-74f, 0x1.2a0c72p-74f, 0.0f, 0x1.e3f70cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3453f6p-28f, 0x1.f7142ap-45f, 0x1.cb8ce6p-64f, 0.0f, 0.0f, 0.0f,
     0x1.670088p-74f, 0x1.be6cfap-57f, 0x1.eb1462p-121f, 0.0f, 0x1.e6ecd6p-39f, 0.0f,
     0x1.a85efp-86f, 0x1.364d04p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0cb5ep-10f, 0.0f,
     0x1.ff0d06p-14f, 0x1.8392bep-39f, 0x1.591798p-89f, 0x1.3f908p-98f, 0.0f,
     0x1.ea3336p-97f, 0.0f, 0.0f, 0.0f, 0x1.4badep-57f, 0x1.cb5facp-75f, 0.0f,
     0x1.76956ap-18f, 0.0f, 0x1.da2c2cp-77f, 0.0f, 0.0f, 0x1.658e04p-110f, 0.0f, 0.0f,
     0.0f, 0x1.cfa9f8p-99f, 0.0f, 0x1.06c132p-103f, 0.0f, 0.0f, 0x1.41ae3cp-46f,
     0x1.06b778p-31f, 0.0f, 0x1.7932f4p-83f, 0x1.d1a6c4p-49f, 0x1.082db4p-63f,
     0x1.12960ep-21f, 0x1.f68964p-40f, 0x1.b11d56p-10f, 0.0f, 0x1.b8a7ccp-32f, 0.0f,
     0x1.6e30dcp-112f, 0x1.bace82p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71d856p-41f,
     0.0f, 0.0f, 0x1.da074ep-111f, 0x1.75400ap-20f, 0.0f, 0.0f, 0x1.1b7d3ep-34f,
     0x1.9883e6p-117f, 0x1.a6bc62p-51f, 0x1.ccf8ccp-18f, 0.0f, 0.0f, 0.0f,
     0x1.7e534cp-60f, 0x1.c376dep-68f, 0x1.6d0ae2p-44f, 0x1.4a56b4p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.271c34p-109f, 0x1.7b0012p-100f, 0.0f, 0x1.93eafcp-24f, 0.0f,
     0x1.3f9926p-44f, 0x1.22cfbep-37f, 0.0f, 0.0f, 0.0f, 0x1.6dcdf8p-33f, 0.0f, 0.0f,
     0.0f, 0x1.ae28cap-67f, 0x1.442e74p-86f, 0x1.1037b2p-51f, 0.0f, 0.0f,
     0x1.4a9eecp-54f, 0x1.e1cff2p-39f, 0.0f, 0.0f, 0x1.3375bap-73f, 0.0f,
     0x1.1aa32ep-124f, 0x1.fecf12p-104f, 0x1.bf657ap-67f, 0x1.c74378p-80f,
     0x1.5dd258p-25f, 0x1.aba19p-26f, 0x1.98218cp-89f, 0x1.101aa8p-21f, 0.0f,
     0x1.8eab4cp-17f, 0x1.a919bap-21f, 0x1.cbb2f6p-56f, 0.0f, 0x1.7c78fcp-21f,
     0x1.b0147ep-96f, 0.0f, 0.0f, 0x1.582536p-1f, 0.0f, 0x1.451ccep-13f, 0.0f, 0.0f,
     0x1.a3ac28p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c59f66p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.27e0c2p-55f, 0.0f, 0.0f, 0x1.e94284p-77f, 0x1.652a0cp-94f, 0.0f,
     0.0f, 0x1.68a5cep-45f, 0.0f, 0.0f, 0x1.f37b8ep-6f, 0.0f, 0x1.73f1d8p-34f, 0.0f,
     0.0f, 0x1.be43fap-86f, 0x1p0f, 0.0f, 0x1.4a7e64p-34f, 0x1.893126p-77f, 0.0f,
     0.0f, 0x1.7a881ep-16f, 0.0f, 0x1.c92fep-78f, 0.0f, 0x1.08e53p-102f,
     0x1.44f534p-95f, 0x1.a9419ep-19f, 0.0f, 0x1.a2810ep-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34f3f8p-80f, 0x1.601cf6p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da34aep-122f,
     0.0f, 0.0f, 0x1.3cb8dep-110f, 0x1.008d2p-126f, 0.0f, 0.0f, 0.0f,
     0x1.3f9034p-104f, 0x1.79cc4cp-37f, 0.0f, 0.0f, 0x1.2095bep-30f, 0x1.2ce67p-60f,
     0x1.82ce3ap-38f, 0.0f, 0.0f, 0x1.713916p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a4a9b6p-80f, 0x1.4ab1f2p-89f, 0.0f, 0.0f, 0x1.6678ap-57f, 0x1.c95d04p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b41d4p-51f, 0x1.37a216p-118f,
     0x1.193df6p-27f, 0x1.d02126p-18f, 0x1.323dfep-95f, 0.0f, 0.0f, 0x1.b39004p-50f,
     0x1.e211d2p-32f, 0x1.ac737p-85f, 0x1.9c16ap-16f, 0x1.bc858cp-43f,
     0x1.f38f8cp-21f, 0x1.eb56b8p-12f, 0.0f, 0x1.418326p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bb7a4p-57f, 0x1.2a9e26p-60f, 0x1.6cb734p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.377d42p-90f, 0.0f, 0x1.34429p-50f, 0.0f, 0x1.03d69p-16f, 0.0f, 0.0f,
     0x1.9fa9e4p-109f, 0.0f, 0.0f, 0x1.9b3c64p-23f, 0x1.338304p-16f, 0x1.875cap-3f,
     0.0f, 0.0f, 0x1.4e0a04p-70f, 0.0f, 0x1.3adeeep-74f, 0.0f, 0x1.55fbfap-29f, 0.0f,
     0x1.faaa6p-65f, 0.0f, 0.0f, 0x1.4ec308p-120f, 0.0f, 0.0f, 0x1.4c2c64p-68f,
     0x1.bce4f2p-57f, 0.0f, 0.0f, 0.0f, 0x1.9e17cap-109f, 0x1.e4fde6p-116f,
     0x1.57ba8ep-101f, 0x1.17bd6p-10f, 0x1.679994p-117f, 0.0f, 0x1.ad77a2p-10f, 0.0f,
     0x1.55f3e6p-30f, 0.0f, 0x1.a43fp-98f, 0.0f, 0.0f, 0x1.08b5e6p-125f,
     0x1.57107ep-117f, 0x1.cc12bap-89f, 0.0f, 0x1.318668p-50f, 0.0f, 0.0f,
     0x1.46b266p-14f, 0x1.bc7ff2p-35f, 0.0f, 0.0f, 0x1.d110e6p-98f, 0.0f, 0.0f, 0.0f,
     0x1.f32eecp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d7616p-34f, 0.0f,
     0x1.8c7ecep-48f, 0x1.14b72ap-23f, 0x1.5d8592p-120f, 0.0f, 0x1.542058p-100f,
     0x1.585adep-116f, 0.0f, 0x1.d85faap-95f, 0.0f, 0x1.716f5ap-70f, 0x1.c3920ap-43f,
     0x1.57137cp-123f, 0.0f, 0.0f, 0.0f, 0x1.d0a7a6p-22f, 0.0f, 0.0f, 0x1.7d2cd8p-53f,
     0x1.33e2e4p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56891ep-60f, 0x1.60a84ep-95f,
     0.0f, 0.0f, 0x1.e0d0e4p-104f, 0x1.a8d37ep-109f, 0x1.2c6126p-8f, 0x1.bcde1ep-5f,
     0x1.ec561ep-32f, 0x1.760224p-88f, 0x1.1db0acp-83f, 0x1.d8917ap-25f,
     0x1.4d4238p-25f, 0.0f, 0x1.ccefe4p-95f, 0x1.df478cp-25f, 0.0f, 0x1.b1031ep-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d2e68p-84f, 0.0f, 0.0f, 0x1.12790ap-113f,
     0x1.77955ep-45f, 0x1.b5f464p-12f, 0x1.7635bcp-66f, 0x1.73da94p-23f,
     0x1.fbd1e6p-76f, 0.0f, 0x1.4e1e3ep-35f, 0.0f, 0x1.772602p-34f, 0x1.3f5f46p-20f,
     0.0f, 0x1.122874p-68f, 0x1.87dbd8p-44f, 0x1.0ff3e2p-17f, 0.0f, 0.0f,
     0x1.825a86p-106f, 0.0f, 0x1.f3950ap-123f, 0.0f, 0.0f, 0x1.4a79f2p-3f,
     0x1.c5ef36p-51f, 0x1.b0d03p-1f, 0x1.98181cp-27f, 0.0f, 0.0f, 0x1.68e214p-7f,
     0.0f, 0.0f, 0.0f, 0x1.acf4b4p-22f, 0x1.582a76p-106f, 0.0f, 0.0f, 0x1.b53084p-87f,
     0.0f, 0x1.77d74ep-36f, 0.0f, 0x1.a7f06ap-12f, 0.0f, 0x1.6f7f02p-25f, 0.0f, 0.0f,
     0.0f, 0x1.b7dcf2p-57f, 0x1.7c6526p-116f, 0x1.eda99cp-115f, 0.0f, 0.0f, 0.0f,
     0x1.85910ep-52f, 0x1.a70dacp-8f, 0.0f, 0.0f, 0.0f, 0x1.4e999ap-14f,
     0x1.5b068cp-117f, 0.0f, 0x1.1f3ceap-62f, 0x1.c29846p-28f, 0x1.e92868p-90f,
     0x1.8338aap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed325ap-106f, 0x1.e3801p-90f,
     0x1.b55792p-20f, 0x1.e0c032p-81f, 0.0f, 0.0f, 0.0f, 0x1.886c9cp-109f,
     0x1.8df87p-40f, 0x1.637434p-106f, 0x1.efe38p-4f, 0x1.b4d7d2p-106f,
     0x1.92a5cep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.865242p-28f, 0.0f, 0x1.3e24bp-124f,
     0x1.a244fcp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d0c1ap-75f, 0x1.c0547p-105f,
     0x1.aba076p-9f, 0.0f, 0.0f, 0x1.ada392p-103f, 0.0f, 0.0f, 0x1.531fp-93f,
     0x1.f21c18p-125f, 0x1.cf95ep-48f, 0x1.74f602p-28f, 0x1.3f6bp-34f, 0.0f, 0.0f,
     0.0f, 0x1.04262ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88ec92p-74f,
     0x1.23033ep-108f, 0x1.fc502ep-53f, 0.0f, 0x1.8d0c8p-62f, 0.0f, 0x1.e2fbe6p-37f,
     0x1.165738p-82f, 0.0f, 0x1.f84ebcp-70f, 0.0f, 0.0f, 0x1.2ceeacp-30f,
     0x1.ad50c6p-97f, 0x1.3f1604p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df4dc8p-10f,
     0x1.a9fd66p-55f, 0x1.4bbc46p-105f, 0x1.11b4e8p-74f, 0x1.a286fep-25f, 0.0f, 0.0f,
     0x1.cdcf26p-56f, 0x1.af86b2p-108f, 0.0f, 0.0f, 0x1.8df25p-60f, 0x1.38386cp-44f,
     0.0f, 0.0f, 0.0f, 0x1.8bf51cp-29f, 0.0f, 0.0f, 0.0f, 0x1.28158ap-28f,
     0x1.8fcdecp-46f, 0x1.87f58ep-103f, 0.0f, 0.0f, 0.0f, 0x1.7a732ep-54f, 0.0f, 0.0f,
     0x1.b75a28p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ade6fep-123f, 0.0f,
     0x1.eb8f0ap-91f, 0x1.d8e11ap-121f, 0x1.ff8838p-59f, 0.0f, 0x1.5a1ddcp-1f,
     0x1.e7ffdep-41f, 0x1.f3fa68p-26f, 0.0f, 0x1.5b0dccp-14f, 0x1.cd8366p-117f, 0.0f,
     0x1.9d7ebp-70f, 0x1.d15d9cp-112f, 0x1.f65df4p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.23d632p-88f, 0x1.d78774p-105f, 0.0f, 0x1.189884p-82f, 0x1.801b0ap-50f, 0.0f,
     0.0f, 0x1.a12efep-89f, 0x1.5424f8p-103f, 0x1.0c5b06p-105f, 0x1.ce2c22p-15f, 0.0f,
     0x1.19c10ap-48f, 0x1.2c8bp-69f, 0x1.e0f334p-86f, 0.0f, 0x1.7eb5f4p-119f,
     0x1.0c4892p-116f, 0x1.67923p-88f, 0.0f, 0x1.ddbd12p-98f, 0x1.651f54p-80f,
     0x1.49d7f2p-67f, 0.0f, 0x1.5625a2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe1deep-93f, 0.0f, 0.0f, 0x1.5fbea2p-67f, 0.0f, 0x1.9fad98p-13f, 0.0f, 0.0f,
     0.0f, 0x1.797ff8p-92f, 0x1.e0f4eep-68f, 0x1.c79c26p-50f, 0x1.d680fap-51f,
     0x1.fd6cd4p-113f, 0x1.94eb36p-55f, 0x1.06036ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9963bep-101f, 0x1.384e2p-7f, 0x1.7f13b8p-14f, 0x1.fa3506p-61f, 0.0f,
     0x1.9ef2acp-108f, 0x1.0a7e74p-113f, 0.0f, 0x1.71b6f2p-83f, 0x1.dcf8f6p-103f,
     0x1.68c334p-54f, 0.0f, 0x1.9834bcp-9f, 0.0f, 0x1.ea9d76p-110f, 0.0f, 0.0f,
     0x1.0d503ap-35f, 0x1.478022p-23f, 0x1.6b2bbcp-66f, 0.0f, 0.0f, 0.0f,
     0x1.90076ep-97f, 0x1.d9db0ap-82f, 0x1.cb15ccp-121f, 0.0f, 0x1.16a46p-122f, 0.0f,
     0x1.e6741ap-48f, 0.0f, 0x1.16f09ep-76f, 0.0f, 0.0f, 0x1.ffe9bcp-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.66f45ep-70f, 0x1.baebeap-56f, 0.0f, 0x1.007a7ep-67f, 0.0f,
     0x1.17712ep-101f, 0.0f, 0x1.98f88ep-109f, 0.0f, 0x1.c4f132p-18f, 0.0f, 0.0f,
     0x1.01c5a2p-97f, 0.0f, 0x1.e20d7ep-67f, 0.0f, 0x1.ec2104p-5f, 0x1.61ca7ap-3f,
     0.0f, 0.0f, 0.0f, 0x1.e123fcp-2f, 0x1.b4d11ap-21f, 0x1.c09ffp-114f,
     0x1.b7a39ep-76f, 0x1.ac4584p-117f, 0x1.bd5408p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8b1f4p-60f, 0x1.8a5aap-32f, 0.0f, 0x1.a3dfaep-85f, 0.0f, 0.0f,
     0x1.16871p-26f, 0.0f, 0x1.8175f8p-39f, 0.0f, 0.0f, 0.0f, 0x1.3475bcp-65f,
     0x1.bfeab4p-23f, 0x1.07ce6ap-14f, 0x1.2e0866p-35f, 0.0f, 0x1.7dbfeep-37f,
     0x1.37f9fcp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd52bcp-26f, 0.0f, 0x1.885334p-8f,
     0x1.f71124p-17f, 0x1.fe0192p-32f, 0x1.174c58p-44f, 0x1.c1531p-21f,
     0x1.2ce86p-72f, 0x1.8e766ep-1f, 0.0f, 0x1.fe38b4p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.89a778p-96f, 0.0f, 0.0f, 0x1.665642p-74f, 0.0f, 0x1.9d6de4p-60f,
     0x1.637f3cp-14f, 0.0f, 0.0f, 0.0f, 0x1.5c4876p-76f, 0x1.1deea8p-109f, 0.0f,
     0x1.28b036p-18f, 0x1.fd6a6p-4f, 0.0f, 0x1.3e2764p-57f, 0.0f, 0.0f, 0.0f,
     0x1.07c31p-71f, 0x1.18f03ap-36f, 0.0f, 0x1.943d6ap-24f, 0.0f, 0x1.01be1p-51f,
     0x1.8b5374p-39f, 0.0f, 0x1.7f585cp-3f, 0.0f, 0.0f, 0.0f, 0x1.d27744p-75f, 0.0f,
     0.0f, 0.0f, 0x1.6c0bcap-86f, 0.0f, 0x1.7ec952p-90f, 0.0f, 0.0f, 0x1.fb3d3ep-53f,
     0x1.60c6a4p-62f, 0x1.fe807p-79f, 0.0f, 0.0f, 0x1.6eab6cp-96f, 0x1.b2cda8p-102f,
     0x1.73dd8p-55f, 0.0f, 0.0f, 0x1.210272p-73f, 0x1.eec988p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f559bap-89f, 0x1.394792p-114f, 0.0f, 0.0f, 0.0f, 0x1.a82592p-97f,
     0x1.aac6bp-112f, 0.0f, 0.0f, 0.0f, 0x1.b36ac6p-83f, 0.0f, 0.0f, 0x1.bff96p-91f,
     0x1.1b1f32p-33f, 0x1.e5e3dep-98f, 0.0f, 0x1.f8df48p-48f, 0.0f, 0.0f,
     0x1.2cdd0cp-125f, 0x1.95b16p-45f, 0.0f, 0.0f, 0x1.81013p-51f, 0.0f, 0.0f,
     0x1.0b6cep-44f, 0.0f, 0x1.f142fcp-86f, 0x1.78d072p-57f, 0x1.674b5ap-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b004ecp-58f, 0x1.4d72c8p-69f, 0x1.286622p-118f,
     0x1.57ed54p-66f, 0x1.26a92ep-41f, 0.0f, 0x1.ace894p-2f, 0x1.5538e2p-21f, 0.0f,
     0x1.6fda6p-30f, 0x1.049982p-48f, 0x1.b4da7cp-30f, 0.0f, 0x1.a20dccp-39f, 0.0f,
     0.0f, 0x1.ed598ap-27f, 0.0f, 0x1.dca9acp-10f, 0x1.8ac95ep-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.879bfp-125f, 0.0f, 0x1.cdc752p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe145p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00025cp-60f,
     0x1.f76ap-43f, 0x1.bcf24p-121f, 0.0f, 0.0f, 0x1.104c34p-29f, 0.0f, 0.0f,
     0x1.438d74p-88f, 0x1.8229b2p-6f, 0x1.c63602p-4f, 0x1.e2d0e4p-121f,
     0x1.9cd26ap-117f, 0x1.2509fap-34f, 0.0f, 0x1.d628bp-56f, 0.0f, 0x1.4418aap-27f,
     0x1.f7adp-31f, 0x1.8d022p-52f, 0x1.c601fcp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.97e9e8p-124f, 0x1.2ea792p-107f, 0x1.30e582p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77832p-72f, 0x1.11963cp-60f, 0x1.310a6cp-7f,
     0x1.3f215cp-123f, 0x1.bf526p-101f, 0.0f, 0x1.9f3efep-107f, 0.0f, 0x1.4edeccp-36f,
     0x1.4b1122p-109f, 0x1.a544cp-119f, 0.0f, 0.0f, 0.0f, 0x1.ba2adep-75f,
     0x1.2a48dcp-120f, 0.0f, 0x1.b96d9p-31f, 0x1.ee07cep-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3f8ap-10f, 0.0f, 0.0f, 0x1.51307cp-78f, 0x1.bd6644p-43f, 0.0f,
     0x1.6bd2b4p-37f, 0x1.daa334p-90f, 0.0f, 0.0f, 0x1.7990a4p-109f, 0.0f,
     0x1.af844ep-114f, 0.0f, 0x1.e191a6p-44f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_floorf8_kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_floorf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_floorf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
