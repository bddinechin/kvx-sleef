/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf1_u35purecfma.c --function Sleef_sinf1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.ce5214p-76f, 0x1.70186ap-85f, 0.0f, 0x1.95dc5ep-18f, 0x1.a1627ap-1f,
     0x1.a51d8cp-32f, 0x1.bd9bd8p-124f, 0x1.b17cecp-81f, 0x1.e9d53p-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4e0a22p-83f, 0x1.8c12aap-105f, 0.0f, 0x1.af6f88p-123f,
     0.0f, 0x1.a1af8cp-66f, 0.0f, 0x1.c0902cp-117f, 0x1.12c948p-62f, 0.0f,
     0x1.8297a2p-65f, 0.0f, 0x1.dbaa8ap-86f, 0.0f, 0.0f, 0x1.0b729ap-46f,
     0x1.2565b2p-43f, 0x1.ea5c96p-65f, 0.0f, 0x1.db1e8ep-38f, 0.0f, 0x1.55f21cp-77f,
     0x1.d1129cp-92f, 0x1.b556b2p-4f, 0.0f, 0x1.d06174p-37f, 0x1.bf24c4p-97f, 0.0f,
     0x1.e7b614p-28f, 0x1.766d1p-87f, 0x1.96504ep-99f, 0.0f, 0.0f, 0.0f,
     0x1.d61d88p-39f, 0.0f, 0.0f, 0x1.2680bp-5f, 0.0f, 0x1.389c1ep-89f,
     0x1.a658fp-32f, 0.0f, 0x1.8a99ep-100f, 0.0f, 0x1.7be256p-41f, 0.0f,
     0x1.198a5ep-117f, 0x1.c7c2a6p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0dabcp-97f, 0.0f,
     0.0f, 0.0f, 0x1.878d5cp-68f, 0x1.a23e7ap-103f, 0.0f, 0x1.2eebccp-93f,
     0x1.152e08p-46f, 0x1.e0bccep-11f, 0.0f, 0.0f, 0x1.fdfee2p-107f, 0x1.642c3ep-25f,
     0x1.20a462p-12f, 0x1.13befep-69f, 0.0f, 0.0f, 0x1.f997a6p-26f, 0x1.fb642p-69f,
     0x1.4e68aep-82f, 0x1.707bf4p-53f, 0x1.5bb66p-88f, 0x1.793c08p-18f, 0.0f, 0.0f,
     0.0f, 0x1.89c468p-119f, 0.0f, 0x1.bb8252p-66f, 0.0f, 0.0f, 0x1.7535e6p-52f, 0.0f,
     0.0f, 0x1.bcd9bp-7f, 0.0f, 0x1.1d627ep-46f, 0.0f, 0.0f, 0x1.a67d3p-45f,
     0x1.86aef8p-85f, 0x1.e3f8fep-115f, 0x1.b4ea04p-108f, 0.0f, 0.0f, 0x1.e59466p-56f,
     0.0f, 0.0f, 0x1.edd688p-30f, 0x1.2f50acp-47f, 0x1.253b7ap-73f, 0x1.bf5814p-7f,
     0x1.a49b9ap-98f, 0.0f, 0.0f, 0x1.5b60f2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e8a874p-110f, 0x1.077aaep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d59bd6p-108f, 0.0f, 0x1.09f06ep-15f, 0.0f, 0x1.9b9312p-124f, 0x1.39b6cep-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5d3f2p-5f, 0.0f, 0.0f, 0x1.39c82cp-17f, 0.0f, 0.0f,
     0.0f, 0x1.6af89cp-94f, 0.0f, 0x1.0a8fecp-37f, 0.0f, 0x1.3a4d08p-11f,
     0x1.35593ap-102f, 0.0f, 0.0f, 0x1.6728fp-120f, 0x1.cf09acp-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2ade36p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29556ap-40f, 0.0f, 0.0f, 0.0f,
     0x1.512576p-71f, 0.0f, 0.0f, 0x1.44eb5p-57f, 0x1.fff604p-90f, 0.0f,
     0x1.05b49p-122f, 0x1.3ca184p-25f, 0.0f, 0x1.77be66p-78f, 0x1.36cd98p-45f,
     0x1.74cb06p-50f, 0x1.9f435ap-120f, 0.0f, 0x1.7375dp-25f, 0.0f, 0x1.497afep-24f,
     0.0f, 0.0f, 0.0f, 0x1.14814p-3f, 0x1.05da94p-126f, 0x1.790d8cp-73f, 0.0f,
     0x1.dec6b8p-17f, 0x1.2a9076p-102f, 0x1.370cp-58f, 0.0f, 0.0f, 0x1.4beb8cp-77f,
     0x1.6f6722p-97f, 0x1.9ce9b4p-48f, 0.0f, 0x1.dce8f6p-29f, 0x1.a473dp-72f, 0.0f,
     0x1.afea1ep-31f, 0x1.2c8f5cp-36f, 0x1.866bc8p-10f, 0.0f, 0x1.63167cp-32f, 0.0f,
     0x1.d29072p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d64fa6p-117f, 0.0f, 0.0f,
     0x1.e801a4p-122f, 0x1.84c634p-36f, 0x1.36d04p-87f, 0x1.c07ffap-1f,
     0x1.e402a4p-109f, 0.0f, 0x1.971812p-37f, 0x1.70bae2p-6f, 0.0f, 0.0f,
     0x1.270338p-106f, 0x1.23ce5cp-78f, 0.0f, 0x1.13a5dap-47f, 0x1.866ccap-60f, 0.0f,
     0x1.2efc3p-59f, 0x1.aea8c8p-33f, 0.0f, 0x1.ee93eep-97f, 0.0f, 0x1.7ee2a2p-40f,
     0.0f, 0.0f, 0x1.ea6ab8p-4f, 0x1.d8494ap-99f, 0x1.3b748ap-103f, 0.0f,
     0x1.7b786ap-115f, 0x1.6e028cp-95f, 0x1.cc319cp-46f, 0x1.6084ep-9f, 0.0f,
     0x1.1d8c4ap-107f, 0x1.64202p-75f, 0.0f, 0x1.2321ccp-7f, 0x1.54ed4cp-37f,
     0x1.4d0c88p-4f, 0x1.bf3034p-110f, 0x1.56df54p-89f, 0.0f, 0x1.47418cp-79f, 0.0f,
     0.0f, 0.0f, 0x1.38ab98p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c695e2p-97f, 0.0f, 0.0f, 0x1.575448p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d26688p-79f, 0.0f, 0.0f, 0.0f, 0x1.feb4f8p-80f, 0.0f, 0.0f,
     0x1.dd9588p-121f, 0.0f, 0x1.1e5c66p-82f, 0x1.6e97dcp-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df0336p-53f, 0.0f, 0.0f, 0x1.311dc4p-33f, 0.0f, 0x1.7b63c6p-12f,
     0x1.518494p-82f, 0x1.ee70f4p-110f, 0.0f, 0.0f, 0x1.2d075p-48f, 0.0f,
     0x1.ada354p-54f, 0.0f, 0.0f, 0x1.cd2c26p-109f, 0x1.444bc8p-98f, 0x1.0e4c02p-112f,
     0.0f, 0.0f, 0x1.0ccba4p-73f, 0x1.41ff94p-31f, 0x1.6bc06p-89f, 0.0f,
     0x1.3d5a06p-6f, 0.0f, 0x1.3f633ep-86f, 0.0f, 0x1.0fece2p-69f, 0.0f, 0.0f, 0.0f,
     0x1.fca0dcp-37f, 0.0f, 0.0f, 0x1.c040dap-44f, 0x1.0f8ecep-76f, 0.0f,
     0x1.894accp-47f, 0x1.324becp-16f, 0x1.79b80ep-16f, 0x1.186b12p-22f, 0.0f, 0.0f,
     0x1.82a3f4p-21f, 0.0f, 0.0f, 0x1.e91a76p-13f, 0.0f, 0x1.847324p-71f, 0.0f,
     0x1p0f, 0x1.7e306ap-3f, 0.0f, 0x1.1c89dcp-40f, 0x1.2d6aecp-79f, 0x1.01b29ap-114f,
     0x1.fb4454p-67f, 0x1.387bbap-16f, 0x1.d24166p-89f, 0x1.3db02ep-19f,
     0x1.5c0c8ap-13f, 0.0f, 0x1.59d82ap-44f, 0x1.91f3a8p-69f, 0x1.9f980ap-73f,
     0x1.d7b3a2p-92f, 0.0f, 0.0f, 0x1.63e98cp-81f, 0x1.ae3374p-38f, 0.0f, 0.0f,
     0x1.ed6f4ap-87f, 0x1.c03d06p-125f, 0.0f, 0.0f, 0x1.dc1164p-40f, 0x1.a6632p-24f,
     0.0f, 0.0f, 0x1.8deee8p-7f, 0.0f, 0.0f, 0x1.3079bep-75f, 0.0f, 0x1.0818cap-97f,
     0.0f, 0x1.f59508p-86f, 0x1.ffe552p-55f, 0.0f, 0.0f, 0.0f, 0x1.2a70e8p-109f,
     0x1.9d4b4ap-45f, 0x1.04033cp-69f, 0x1.75c326p-65f, 0.0f, 0.0f, 0.0f,
     0x1.6a2bbcp-31f, 0x1.3f4672p-17f, 0x1.e963f8p-31f, 0x1.f6ce7ep-31f, 0.0f, 0.0f,
     0.0f, 0x1.83359cp-69f, 0x1.408c6cp-85f, 0.0f, 0.0f, 0x1.cc52bp-73f,
     0x1.9e4ed8p-103f, 0x1.54d8eap-60f, 0.0f, 0.0f, 0.0f, 0x1.322a46p-96f, 0.0f,
     0x1.b6ac18p-108f, 0x1.63a5c6p-52f, 0.0f, 0.0f, 0x1.ad581p-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7a00a2p-61f, 0x1.99d66cp-55f, 0.0f, 0x1.3b0ccp-25f, 0.0f,
     0x1.38d0c2p-119f, 0x1.9d4eb2p-67f, 0.0f, 0x1.f2224p-59f, 0x1.1bbf6ap-60f,
     0x1.a53d52p-84f, 0x1.929d64p-45f, 0x1.c9cbe2p-36f, 0x1.31bd22p-13f,
     0x1.1df314p-117f, 0.0f, 0.0f, 0.0f, 0x1.ffb792p-125f, 0x1.256a16p-83f,
     0x1.53df86p-84f, 0x1.0e368ap-63f, 0x1.dd71c4p-120f, 0x1.274454p-124f,
     0x1.18b8c6p-64f, 0x1.3931ap-45f, 0x1.c5bcp-98f, 0x1.4da73p-81f, 0.0f, 0.0f,
     0x1.096506p-99f, 0.0f, 0.0f, 0x1.cb47dp-25f, 0x1.a83b8ep-14f, 0.0f,
     0x1.1a225p-31f, 0x1.1cc9c6p-31f, 0x1.867a32p-44f, 0.0f, 0x1.65afbcp-100f,
     0x1.2414a2p-122f, 0x1.1ddc92p-14f, 0.0f, 0x1.7bb6a2p-46f, 0x1.3997a6p-67f,
     0x1.7fe85ap-54f, 0x1.f838c6p-50f, 0.0f, 0x1.1c217p-14f, 0.0f, 0.0f, 0.0f,
     0x1.c2ea74p-73f, 0.0f, 0x1.074604p-48f, 0.0f, 0x1.c3f14ap-68f, 0.0f,
     0x1.c50548p-55f, 0x1.60f3ap-109f, 0.0f, 0x1.ce8004p-123f, 0.0f, 0.0f, 0.0f,
     0x1.1848b6p-69f, 0.0f, 0.0f, 0x1.315fdcp-89f, 0.0f, 0x1.0f4394p-40f, 0.0f, 0.0f,
     0x1.9ecab4p-42f, 0x1.50e746p-34f, 0.0f, 0x1.8f268p-10f, 0.0f, 0x1.3f1f66p-103f,
     0x1.63d142p-62f, 0x1.3cace6p-16f, 0x1.46ed32p-13f, 0.0f, 0x1.7a4c16p-93f, 0.0f,
     0.0f, 0.0f, 0x1.13abb8p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab83ap-24f,
     0x1.4918fp-101f, 0x1.692bc4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dae3c6p-108f,
     0x1.4b0fb4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7f32p-80f,
     0x1.7cd256p-74f, 0x1.ffee08p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67edeep-105f, 0.0f, 0.0f, 0x1.e02488p-38f, 0x1.f0ce3p-84f, 0x1.73cb1ap-84f,
     0.0f, 0.0f, 0x1.95a72p-103f, 0x1.f7146p-109f, 0x1.863ec4p-38f, 0x1.44aa86p-95f,
     0x1.175c52p-54f, 0x1.ac0beep-35f, 0x1.6f0e9cp-14f, 0.0f, 0.0f, 0.0f,
     0x1.8c3ebp-68f, 0x1.6f1884p-19f, 0x1.9c8d38p-98f, 0.0f, 0x1.e74372p-1f, 0.0f,
     0.0f, 0x1.e4b3cep-115f, 0.0f, 0x1.4455c8p-45f, 0.0f, 0x1.4556d4p-84f, 0.0f,
     0x1.4165fcp-83f, 0.0f, 0x1.9fab46p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0e6d6p-94f, 0x1.97ba38p-103f, 0x1.09d388p-69f, 0.0f, 0.0f, 0x1.aa1c9cp-122f,
     0.0f, 0x1.7382dep-103f, 0.0f, 0x1.573686p-123f, 0x1.7435f6p-44f, 0.0f,
     0x1.edd622p-22f, 0.0f, 0x1.c7ca38p-90f, 0x1.6c6f8p-73f, 0x1.c9de8ep-80f, 0.0f,
     0.0f, 0.0f, 0x1.832254p-32f, 0x1.c340b8p-98f, 0.0f, 0x1.73ea76p-75f,
     0x1.adf664p-44f, 0x1.f929cep-66f, 0.0f, 0x1.cda216p-42f, 0.0f, 0x1.736916p-70f,
     0x1.afdfcep-1f, 0x1.13f072p-86f, 0x1.59fa96p-76f, 0.0f, 0.0f, 0x1.1f8564p-119f,
     0.0f, 0.0f, 0x1.6362ecp-104f, 0x1.f647dap-74f, 0.0f, 0.0f, 0.0f, 0x1.c7d84ep-44f,
     0x1.3956cp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d18fbap-51f, 0.0f, 0.0f,
     0x1.d0d0e8p-60f, 0x1.4e72cep-82f, 0x1.1bbf38p-58f, 0.0f, 0.0f, 0.0f,
     0x1.c98f36p-12f, 0x1.3373fcp-112f, 0x1.605b2cp-93f, 0.0f, 0.0f, 0x1.15e2dep-94f,
     0x1.43952cp-67f, 0.0f, 0.0f, 0x1.34033p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37f91ap-115f, 0.0f, 0x1.8e76d8p-106f, 0x1.ab5f88p-15f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c337ep-63f, 0.0f, 0x1.d0155p-39f, 0x1.3d32c4p-4f,
     0x1.7e9f0ap-84f, 0x1.25f9f6p-51f, 0x1.9d97a6p-22f, 0x1.0b7d14p-31f,
     0x1.ca157p-64f, 0.0f, 0x1.7fa29ep-52f, 0x1.c334a2p-2f, 0x1.8efadp-59f,
     0x1.229d9ap-39f, 0x1.6beb4p-86f, 0.0f, 0x1.84be4p-64f, 0.0f, 0.0f,
     0x1.20084ap-4f, 0x1.b04418p-54f, 0.0f, 0.0f, 0x1.4a0c4ep-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21205ap-106f, 0x1.c525ecp-123f, 0.0f,
     0x1.af70aap-14f, 0.0f, 0x1.4ba8ccp-24f, 0x1.e9fa7ap-53f, 0x1.107c2cp-11f,
     0x1.9c998cp-50f, 0.0f, 0.0f, 0x1.d3d186p-7f, 0x1.5323fcp-18f, 0x1.8a073ep-71f,
     0.0f, 0x1.0d37e8p-15f, 0.0f, 0.0f, 0.0f, 0x1.0c9e56p-16f, 0x1.e98d3cp-74f,
     0x1.d8956cp-34f, 0x1.d1253cp-35f, 0.0f, 0x1.4ee7ecp-68f, 0x1.22ef4ap-51f, 0.0f,
     0x1.91b048p-59f, 0x1.15e306p-43f, 0x1.ae778ep-77f, 0x1.0e538ap-6f,
     0x1.f96918p-49f, 0.0f, 0.0f, 0x1.189cf8p-115f, 0x1.678b92p-27f, 0x1.9672b4p-65f,
     0x1.674cc6p-47f, 0x1.5e9bdp-93f, 0x1.6cfb0cp-67f, 0x1.a8011cp-52f,
     0x1.cb01bp-117f, 0.0f, 0x1.fe1ce2p-104f, 0x1.1b029ap-9f, 0x1.dd2fb4p-108f,
     0x1.b82708p-65f, 0.0f, 0x1.be4ec8p-106f, 0x1.c5ba74p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b4c9ap-113f, 0x1.2e3ccep-64f,
     0x1.47b9bap-121f, 0x1.2bbc1cp-12f, 0.0f, 0x1.7a57b6p-69f, 0.0f, 0x1.84d0fap-12f,
     0x1.9a6b38p-57f, 0.0f, 0x1.ddde8p-65f, 0x1.b34d76p-81f, 0.0f, 0.0f,
     0x1.304f0ap-69f, 0.0f, 0x1.b6bd14p-92f, 0.0f, 0.0f, 0x1.dcdf7ep-121f,
     0x1.6356d6p-9f, 0.0f, 0x1.abebc6p-14f, 0.0f, 0x1.9605fep-106f, 0.0f, 0.0f, 0.0f,
     0x1.2de4c4p-72f, 0x1.70ec9ap-72f, 0x1.f70252p-113f, 0.0f, 0x1.062544p-60f, 0.0f,
     0.0f, 0x1.393e48p-103f, 0x1.5a75f8p-88f, 0.0f, 0x1.a515bcp-105f, 0.0f, 0.0f,
     0.0f, 0x1.d2bcfap-6f, 0x1.8363d6p-47f, 0.0f, 0.0f, 0x1.2cd00ap-56f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.c2146ep-124f, 0x1.bf4eap-7f, 0.0f, 0x1.aa5cc8p-60f,
     0x1.d2c0fap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b36ep-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.46062ap-77f, 0.0f, 0.0f, 0x1.cef0b4p-97f,
     0x1.72040ep-5f, 0.0f, 0.0f, 0x1.b54dp-101f, 0x1.f63376p-116f, 0.0f, 0.0f, 0.0f,
     0x1.ad6b22p-62f, 0x1.fdf008p-36f, 0x1.bef528p-46f, 0x1.a24532p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e93e78p-109f, 0x1.5624f6p-57f, 0x1.d831fap-2f, 0x1.ffb61ap-4f,
     0.0f, 0x1.a7acf4p-18f, 0x1.8260bp-69f, 0.0f, 0x1.f024acp-11f, 0x1.731882p-48f,
     0.0f, 0x1.36adaap-110f, 0x1.ee4746p-116f, 0.0f, 0x1.22144cp-82f, 0.0f, 0.0f,
     0x1.0f70ecp-7f, 0.0f, 0x1.af8792p-104f, 0x1.f1463p-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79a898p-126f, 0x1.4ba818p-45f, 0x1.00ae3p-23f, 0.0f, 0.0f, 0x1.df083ap-87f,
     0.0f, 0.0f, 0x1.271396p-63f, 0x1.746ffp-97f, 0.0f, 0x1.893074p-58f, 0.0f,
     0x1.0f1b2cp-63f, 0.0f, 0.0f, 0x1.4bb6fp-115f, 0.0f, 0.0f, 0x1.360d5cp-24f, 0.0f,
     0x1.a8e7d2p-44f, 0.0f, 0.0f, 0x1.f95272p-4f, 0x1.89a9fp-118f, 0x1.c9375ap-84f,
     0x1.d397e4p-12f, 0.0f, 0.0f, 0.0f, 0x1.a80b2ep-102f, 0.0f, 0.0f, 0x1.cc4516p-82f,
     0x1.e12c7p-111f, 0x1.cc2e64p-12f, 0x1.1ceb6ep-13f, 0.0f, 0x1.03c356p-65f,
     0x1.2771cep-27f, 0.0f, 0x1.87e428p-28f, 0x1.b5081p-56f, 0x1.761a48p-84f, 0.0f,
     0x1.5aa4bp-117f, 0.0f, 0.0f, 0.0f, 0x1.dcadcap-23f, 0x1.f2e776p-68f, 0.0f,
     0x1.cafe2ap-126f, 0.0f, 0x1.20bdb6p-97f, 0x1.cde23ap-40f, 0.0f, 0x1.69868ap-86f,
     0x1.833ffp-79f, 0.0f, 0x1.733c1ap-25f, 0.0f, 0x1.0644p-12f, 0.0f, 0.0f,
     0x1.a9f43ep-64f, 0x1.8e1372p-13f, 0.0f, 0x1.6746fp-109f, 0.0f, 0.0f,
     0x1.0a07aep-98f, 0.0f, 0x1.d10bcep-75f, 0.0f, 0x1.f1cb6ep-58f, 0.0f, 0.0f,
     0x1.2b5338p-64f, 0.0f, 0.0f, 0.0f, 0x1.7068f4p-98f, 0x1.84ee12p-86f, 0.0f,
     0x1.1dc082p-58f, 0x1.e32d8ap-46f, 0.0f, 0.0f, 0x1.b50636p-51f, 0x1.95a5f8p-29f,
     0x1.b29c32p-111f, 0x1.094658p-10f, 0.0f, 0x1.9233b2p-42f, 0.0f, 0x1.4b83d4p-32f,
     0.0f, 0x1.09555ap-121f, 0x1.77d732p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baff5cp-2f,
     0x1.3126cap-99f, 0.0f, 0.0f, 0.0f, 0x1.b103fap-6f, 0x1.90b3eap-64f
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
            tmp1 = Sleef_sinf1_u35purecfma(tmp0);
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
    printf("Sleef_sinf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinf1_u35purecfma bench acc %a\n", global_bench_acc);
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
