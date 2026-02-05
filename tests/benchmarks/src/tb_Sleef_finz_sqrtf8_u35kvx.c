/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf8_u35kvx.c --function \
 *     Sleef_finz_sqrtf8_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
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
     0x1.95b5dap-47f, 0.0f, 0.0f, 0.0f, 0x1.16ab06p-75f, 0.0f, 0.0f, 0x1.b24c2cp-10f,
     0.0f, 0.0f, 0x1.85d82cp-39f, 0.0f, 0x1.f268dap-93f, 0x1.88c1b4p-85f, 0.0f,
     0x1.4469cap-101f, 0x1.2c687p-37f, 0.0f, 0x1.e5e924p-5f, 0x1.fa5a84p-94f,
     0x1.6968e6p-126f, 0x1.c99186p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.776148p-109f,
     0.0f, 0.0f, 0x1.403bf8p-101f, 0x1.2bd9a2p-126f, 0.0f, 0x1.0f0b1ep-106f,
     0x1.43dc82p-23f, 0x1.198e7cp-58f, 0.0f, 0x1.721632p-73f, 0.0f, 0.0f,
     0x1.009a2ep-123f, 0x1.33e66p-106f, 0x1.9f7f68p-24f, 0x1.4a8044p-38f, 0.0f, 0.0f,
     0.0f, 0x1.cd54c4p-16f, 0x1.3c3b7ep-65f, 0x1.143e4cp-70f, 0x1.e4619ap-44f, 0.0f,
     0x1.32519ep-17f, 0.0f, 0.0f, 0.0f, 0x1.28bc42p-54f, 0.0f, 0x1.d9afe2p-16f, 0.0f,
     0x1.14fb42p-120f, 0x1.7245dep-118f, 0x1.42f536p-114f, 0.0f, 0.0f,
     0x1.bf26dap-105f, 0.0f, 0.0f, 0x1.9e89b6p-92f, 0x1.12102cp-96f, 0.0f,
     0x1.f57532p-74f, 0x1.da0234p-9f, 0.0f, 0x1.2700b2p-24f, 0x1.cf05aep-114f,
     0x1.9dddacp-4f, 0x1.0c7c7cp-71f, 0x1.9e61dp-3f, 0.0f, 0.0f, 0x1.5cc722p-82f,
     0x1.1afaf4p-98f, 0.0f, 0x1.975d7cp-63f, 0.0f, 0x1.01ce1p-9f, 0x1.f3c564p-1f,
     0x1.18cddcp-14f, 0.0f, 0x1.3118dap-9f, 0.0f, 0x1.d33eb2p-19f, 0.0f, 0.0f,
     0x1.5ea8fap-16f, 0.0f, 0.0f, 0x1.d6740ep-99f, 0.0f, 0x1.b112e6p-16f,
     0x1.4bea82p-111f, 0x1.185028p-6f, 0.0f, 0x1.97b8b4p-39f, 0x1.58e4fep-40f, 0.0f,
     0.0f, 0x1.1768cap-46f, 0.0f, 0x1.7ec0d8p-22f, 0.0f, 0x1.85e924p-110f,
     0x1.3c6e38p-6f, 0x1.060ac2p-126f, 0x1.ecec1ep-32f, 0x1.4ef176p-83f,
     0x1.162c14p-61f, 0x1.3aec7cp-64f, 0x1.26397cp-65f, 0x1.39e2e2p-110f, 0.0f,
     0x1.4aa722p-106f, 0x1.8ae92ep-113f, 0x1.8b33bap-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.002a16p-95f, 0.0f, 0x1.9ef71cp-76f, 0.0f, 0.0f, 0x1.f7ff92p-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.c820aap-62f, 0x1.037b26p-116f,
     0x1.9eb284p-112f, 0x1.e7e97ap-70f, 0x1.61db12p-56f, 0x1.8d79dcp-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1d1e12p-125f, 0.0f, 0x1.4215a8p-104f, 0.0f,
     0x1.483df4p-61f, 0.0f, 0x1.885e66p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.658396p-50f, 0.0f, 0.0f, 0x1.858066p-70f, 0.0f, 0x1.b92f06p-34f, 0.0f, 0.0f,
     0x1.e2a738p-3f, 0.0f, 0x1.456da8p-49f, 0x1.2b448p-115f, 0x1.900056p-110f, 0.0f,
     0x1.a6eb42p-53f, 0x1.3b8d82p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66feacp-35f,
     0x1.b964c2p-121f, 0x1.ea977ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90dc16p-11f, 0x1.13d1dep-103f, 0x1.bb64ecp-115f, 0.0f, 0.0f, 0x1.bbe84cp-50f,
     0x1.df3976p-15f, 0x1.de89e2p-9f, 0.0f, 0.0f, 0x1.5c654ep-98f, 0.0f,
     0x1.b30218p-64f, 0x1.c8f4cp-4f, 0x1.637e1cp-83f, 0x1.19a3fp-33f, 0.0f, 0.0f,
     0x1.b26b5ap-50f, 0.0f, 0x1.b161ecp-61f, 0.0f, 0x1.4d72fp-57f, 0x1.3e4db2p-78f,
     0.0f, 0x1.b91f44p-105f, 0x1.fc7212p-125f, 0.0f, 0x1.9636fap-13f, 0x1.2d32b8p-54f,
     0.0f, 0x1.7dfa8ep-110f, 0x1.5d724ap-75f, 0x1.fdc382p-44f, 0.0f, 0.0f,
     0x1.b577dep-116f, 0x1.bbe5a6p-26f, 0.0f, 0.0f, 0.0f, 0x1.2868a4p-123f, 0.0f,
     0x1.5d562ap-40f, 0x1.cd842p-98f, 0x1.c2fb54p-7f, 0x1.d442e6p-113f,
     0x1.bf081p-60f, 0x1.ebef52p-36f, 0x1.17c374p-97f, 0x1.3c973cp-76f,
     0x1.4366fp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23ec98p-59f, 0.0f, 0x1.fc8ff8p-87f,
     0.0f, 0x1.faceap-34f, 0x1.af3288p-35f, 0.0f, 0x1.d3089ap-115f, 0x1.ed33f8p-23f,
     0x1.eb3d6ep-62f, 0x1p0f, 0x1.ed9da4p-21f, 0x1.12de34p-69f, 0.0f, 0.0f,
     0x1.8b0276p-32f, 0x1.915e4ep-104f, 0x1.b76ca2p-59f, 0x1.850114p-19f,
     0x1.6b1d9cp-48f, 0.0f, 0.0f, 0.0f, 0x1.53a92ep-64f, 0.0f, 0x1.3f01cap-74f, 0.0f,
     0.0f, 0x1.735366p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.928a72p-26f,
     0x1.e8c948p-69f, 0x1.eed1c8p-26f, 0x1.eb1824p-109f, 0x1.b66e48p-115f, 0.0f, 0.0f,
     0x1.157fbp-43f, 0x1.802616p-28f, 0x1.cc82fap-20f, 0x1.dc99d8p-59f,
     0x1.8ccf0ep-99f, 0.0f, 0x1.2db15ap-118f, 0.0f, 0.0f, 0x1.ae2c0ap-115f,
     0x1.eb6326p-101f, 0x1.e63ebep-66f, 0x1.81669ap-125f, 0.0f, 0x1.385ca8p-54f, 0.0f,
     0x1.64d432p-64f, 0x1.41a796p-27f, 0.0f, 0x1.e3c544p-101f, 0.0f, 0x1.8e92fcp-73f,
     0.0f, 0x1.6dde96p-41f, 0.0f, 0.0f, 0.0f, 0x1.f84d96p-109f, 0.0f, 0.0f,
     0x1.cbcaap-7f, 0x1.908344p-113f, 0.0f, 0x1.0762aap-29f, 0x1.10e426p-35f,
     0x1.9c39d4p-25f, 0x1.106638p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6a758p-72f, 0x1.8cfb9ep-8f, 0x1.f3d0acp-119f, 0.0f, 0.0f, 0x1.edc7aap-22f,
     0x1.be236cp-108f, 0x1.dfd67cp-54f, 0.0f, 0.0f, 0x1.8fd332p-86f, 0.0f,
     0x1.07806ap-37f, 0.0f, 0x1.7c533ap-103f, 0x1.d5fd54p-54f, 0.0f, 0.0f,
     0x1.175932p-112f, 0.0f, 0x1.f97d26p-47f, 0.0f, 0x1.156f6p-58f, 0.0f, 0.0f, 0.0f,
     0x1.e2b234p-65f, 0x1.b4636ap-6f, 0x1.9b6d92p-40f, 0x1.3801b6p-126f, 0.0f, 0.0f,
     0x1.ab8c44p-91f, 0x1.d281d6p-72f, 0.0f, 0.0f, 0x1.21f19ap-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6b7ec4p-27f, 0.0f, 0.0f, 0x1.18ee4p-99f, 0.0f, 0.0f, 0x1.ecd30ep-114f,
     0x1.0b8f3ap-10f, 0.0f, 0x1.b05712p-62f, 0x1.483a7p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.95e286p-72f, 0.0f, 0x1.286684p-92f, 0x1.d677cp-96f, 0.0f,
     0x1.1db484p-119f, 0x1.8ba1b8p-23f, 0.0f, 0.0f, 0.0f, 0x1.bcda56p-17f, 0.0f, 0.0f,
     0x1.9c2b24p-73f, 0.0f, 0x1.e7c0d4p-77f, 0.0f, 0.0f, 0x1.5d68f8p-77f, 0.0f, 0.0f,
     0x1.bd9a22p-53f, 0.0f, 0.0f, 0x1.22b09ap-36f, 0x1.c668a4p-63f, 0.0f,
     0x1.49aa1ap-64f, 0x1.9d6472p-12f, 0x1.046408p-59f, 0x1.92c5f4p-19f, 0.0f,
     0x1.bad85p-28f, 0.0f, 0.0f, 0x1.2ea808p-122f, 0.0f, 0x1.8c9672p-84f, 0.0f,
     0x1.154974p-35f, 0.0f, 0x1.a2e2acp-25f, 0x1.967202p-98f, 0.0f, 0.0f,
     0x1.f96346p-12f, 0.0f, 0x1.1b54c8p-26f, 0.0f, 0x1.7e5cfap-17f, 0.0f, 0.0f,
     0x1.3583cap-25f, 0x1.9faefep-111f, 0x1.060cb2p-93f, 0.0f, 0.0f, 0x1.bcd924p-53f,
     0x1.84104ap-31f, 0x1.4defdcp-29f, 0.0f, 0x1.40ba82p-99f, 0.0f, 0x1.322388p-22f,
     0.0f, 0x1.c2d40ap-102f, 0.0f, 0.0f, 0x1.a4503cp-11f, 0x1.6881fcp-31f,
     0x1.3b27a4p-34f, 0x1.3d9516p-39f, 0.0f, 0x1.661baep-123f, 0.0f, 0.0f, 0.0f,
     0x1.2e8878p-90f, 0x1.db8b82p-64f, 0.0f, 0x1.b499f4p-89f, 0.0f, 0x1.aa384ap-26f,
     0.0f, 0x1.7393b2p-79f, 0.0f, 0x1.c84e12p-124f, 0x1.ef251p-119f, 0.0f, 0.0f,
     0x1.d2dc08p-29f, 0x1.2005acp-40f, 0.0f, 0.0f, 0.0f, 0x1.6057a6p-54f, 0.0f, 0.0f,
     0.0f, 0x1.4f3ddep-47f, 0x1.32ef36p-3f, 0.0f, 0.0f, 0x1.882c96p-116f, 0.0f,
     0x1.6c6322p-21f, 0.0f, 0.0f, 0x1.bbfd28p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd27ccp-42f, 0.0f, 0x1.95afccp-12f, 0.0f, 0.0f, 0.0f, 0x1.c46864p-53f,
     0x1.816392p-97f, 0.0f, 0.0f, 0x1.c4bbdap-75f, 0x1.872aaap-43f, 0.0f, 0.0f,
     0x1.84bb58p-65f, 0.0f, 0x1.787f3ap-61f, 0x1.4ecf1p-25f, 0.0f, 0.0f, 0.0f,
     0x1.9fad74p-44f, 0.0f, 0x1.d0ee1p-38f, 0x1.66b566p-118f, 0.0f, 0.0f,
     0x1.30a1cp-83f, 0x1.477cacp-8f, 0.0f, 0x1.4d05c6p-9f, 0x1.1371e2p-90f,
     0x1.19fddap-60f, 0x1.b4bbfep-106f, 0.0f, 0x1.7edbdcp-39f, 0.0f, 0.0f,
     0x1.3861fp-92f, 0.0f, 0x1.9323f4p-69f, 0x1.9ba254p-104f, 0x1.b3926ep-8f,
     0x1.7d0e92p-15f, 0x1.bb717p-59f, 0.0f, 0x1.0e2db4p-110f, 0x1.536138p-80f,
     0x1.f570dcp-121f, 0x1.b31f58p-64f, 0x1.f8e26p-115f, 0x1.69cf2ap-117f,
     0x1.1ddf62p-97f, 0.0f, 0x1.7b0d9ep-71f, 0.0f, 0x1.9298bcp-39f, 0x1.9e8216p-28f,
     0.0f, 0x1.90286cp-119f, 0.0f, 0x1.9aebd2p-101f, 0.0f, 0.0f, 0x1.1d2388p-27f,
     0.0f, 0x1.0f776cp-20f, 0.0f, 0.0f, 0x1.04234ap-53f, 0.0f, 0x1.9242b6p-40f,
     0x1.7b794cp-26f, 0.0f, 0x1.9b25ecp-83f, 0x1.48066p-108f, 0.0f, 0x1.3684e6p-25f,
     0x1.0538f2p-63f, 0x1.58e5fcp-37f, 0x1.94ac92p-92f, 0.0f, 0x1.73f832p-111f,
     0x1.946056p-54f, 0x1.d6e0dep-76f, 0.0f, 0.0f, 0.0f, 0x1.47d0e2p-117f,
     0x1.4f33d2p-31f, 0x1.373052p-43f, 0x1.76a26ep-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f64b7p-66f, 0x1.dc6a4p-117f, 0x1.94ac3ap-80f, 0.0f, 0x1.65ec9cp-93f,
     0x1.3b8e72p-117f, 0x1.829f34p-48f, 0x1.a80eb8p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3fddc2p-74f, 0.0f, 0x1.0ac722p-110f, 0x1.eb10e6p-109f, 0x1.a8e564p-28f,
     0x1.ff852cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ce60ep-58f, 0x1.1abb58p-74f,
     0x1.edff1ap-3f, 0.0f, 0x1.744648p-117f, 0.0f, 0x1.8323ap-82f, 0x1.4695acp-14f,
     0x1.a47cdap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b09cecp-110f, 0.0f,
     0x1.8787c6p-107f, 0x1.4b2e76p-32f, 0x1.549288p-100f, 0.0f, 0.0f,
     0x1.cdc886p-114f, 0x1.479e2p-29f, 0.0f, 0x1.79961ap-83f, 0x1.b041acp-26f, 0.0f,
     0x1.b34aecp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.9fb37p-8f, 0.0f, 0.0f, 0.0f,
     0x1.fd236ep-93f, 0.0f, 0x1.44108ap-73f, 0x1.4c989ep-100f, 0x1.ad5f4ep-34f, 0.0f,
     0.0f, 0x1.f52d84p-28f, 0.0f, 0x1.671834p-3f, 0.0f, 0x1.e5a40ap-68f, 0.0f, 0.0f,
     0x1.d25d82p-59f, 0x1.47f342p-92f, 0x1.9d5412p-74f, 0x1.77a0bp-52f,
     0x1.3d6532p-31f, 0.0f, 0x1.38ae36p-73f, 0x1.783a32p-23f, 0x1.d8f132p-59f,
     0x1.2e405cp-92f, 0.0f, 0x1.b3641ep-116f, 0x1.55bff2p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43e1dp-2f, 0.0f, 0x1.c6ed06p-84f, 0.0f, 0.0f, 0.0f, 0x1.d86e02p-64f, 0.0f,
     0x1.f8489cp-29f, 0.0f, 0.0f, 0.0f, 0x1.63e5b2p-9f, 0x1.8f0946p-11f, 0.0f, 0.0f,
     0.0f, 0x1.74ad28p-111f, 0.0f, 0x1.416aacp-12f, 0x1.b6348cp-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a78b6p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c2adap-85f, 0.0f, 0x1.fd046p-126f, 0.0f, 0.0f, 0.0f, 0x1.38df2ap-31f,
     0x1.a92accp-33f, 0x1.3db08cp-85f, 0x1.84c1aep-113f, 0.0f, 0.0f, 0x1.a8c22ap-66f,
     0.0f, 0x1.eb6cc4p-4f, 0x1.a4a532p-65f, 0x1.d77d0cp-5f, 0x1.78acacp-63f, 0x1p0f,
     0.0f, 0x1.a05bc8p-54f, 0.0f, 0x1.09f214p-44f, 0x1.24e11p-120f, 0.0f,
     0x1.d6bc0cp-62f, 0.0f, 0.0f, 0.0f, 0x1.82b172p-34f, 0x1.5bed84p-14f, 0.0f,
     0x1.ec32c2p-100f, 0x1.920ea8p-101f, 0.0f, 0x1.009088p-31f, 0x1.7d2f9ap-92f,
     0x1.718344p-32f, 0x1.c97f56p-9f, 0x1.76d52cp-103f, 0x1.2565a4p-23f,
     0x1.44a23p-118f, 0.0f, 0.0f, 0x1.b9bd52p-51f, 0.0f, 0x1.57f682p-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aa7b6p-87f, 0.0f, 0x1.8984a2p-59f, 0.0f, 0x1.4b65b2p-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3e0fep-2f,
     0x1.c816f2p-115f, 0x1.fbc732p-34f, 0.0f, 0x1.ce43b4p-72f, 0.0f, 0x1.41cb98p-94f,
     0.0f, 0x1.89daf8p-84f, 0.0f, 0x1.169126p-28f, 0x1.61f17ep-110f, 0x1.e38156p-111f,
     0.0f, 0.0f, 0.0f, 0x1.a8da64p-15f, 0x1.2f0ec4p-67f, 0.0f, 0.0f, 0.0f,
     0x1.9431c2p-1f, 0x1.c3e1d2p-109f, 0x1.91c212p-19f, 0x1.f7cbe2p-123f,
     0x1.6dc6ecp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58b94p-124f, 0x1.5660aep-114f,
     0.0f, 0.0f, 0x1.59d986p-14f, 0.0f, 0x1.facb9ep-65f, 0.0f, 0x1.2a4f4ap-77f, 0.0f,
     0.0f, 0x1.f11482p-11f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.923744p-51f, 0.0f,
     0x1.b61e94p-56f, 0.0f, 0.0f, 0.0f, 0x1.95f00ep-51f, 0x1.639394p-2f,
     0x1.cfc58cp-87f, 0x1.60385ep-87f, 0x1.664348p-52f, 0x1.975a22p-87f,
     0x1.53cb08p-37f, 0.0f, 0x1.57521p-90f, 0.0f, 0x1.d1e4ecp-58f, 0.0f, 0.0f,
     0x1.e33e8p-103f, 0x1.0860a4p-46f, 0.0f, 0x1.3e6d9ap-6f, 0x1.8cf074p-120f, 0.0f,
     0.0f, 0x1.973376p-44f, 0x1.9d739cp-56f, 0.0f, 0x1.e941d8p-62f, 0.0f,
     0x1.2dc9cp-115f, 0.0f, 0x1.4daeacp-80f, 0x1.320aa4p-8f, 0x1.1bd098p-65f,
     0x1.a317c8p-98f, 0x1.12adf6p-106f, 0x1.58b98cp-73f, 0.0f, 0x1.db7258p-23f,
     0x1.cf7548p-49f, 0x1.630522p-103f, 0x1.fcb8e4p-6f, 0x1.40ad7ap-122f, 0.0f,
     0x1.eb7f78p-83f, 0x1.732f2p-30f, 0.0f, 0.0f, 0.0f, 0x1.891ef4p-114f, 0.0f,
     0x1.427ac2p-25f, 0.0f, 0.0f, 0x1.99e8e8p-37f, 0.0f, 0x1.0e5cbap-88f,
     0x1.db865cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b465ap-13f, 0x1.c8745ap-36f,
     0.0f, 0.0f, 0x1.18ccc8p-84f, 0x1.803d9ap-55f, 0.0f, 0x1.0d29c8p-124f, 0.0f,
     0x1.8f0f4cp-71f, 0.0f, 0.0f, 0x1.35fe8ap-115f, 0x1.129d16p-37f, 0x1.b5c8bep-40f,
     0.0f, 0x1.a09128p-64f, 0.0f, 0x1.68600cp-123f, 0.0f, 0x1.cdaf58p-75f,
     0x1.4b488ep-34f, 0x1.41352ep-32f, 0.0f, 0.0f, 0x1.b824a2p-107f, 0.0f, 0.0f,
     0x1.8480b8p-37f, 0.0f, 0.0f, 0.0f, 0x1.9056ep-89f, 0x1.f2fdc2p-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2d5726p-56f, 0x1.a6fbfp-102f, 0x1.045948p-106f,
     0x1.fa5feap-119f, 0.0f, 0.0f, 0x1.f8953ap-123f, 0x1.66c118p-16f, 0x1.7250b4p-4f,
     0x1.e906bep-45f, 0.0f, 0x1.71fb34p-7f, 0x1.cfd922p-73f, 0x1.1a5f4ap-43f, 0.0f,
     0x1.168fe8p-70f, 0.0f, 0x1.3724aap-53f, 0x1.b3aa78p-57f, 0x1.cd01eep-7f,
     0x1.3a1c2p-89f, 0x1.2e1d0cp-115f, 0.0f, 0x1.0ffa44p-83f, 0.0f, 0x1.9673b6p-60f,
     0x1.34c9d8p-59f, 0x1.93f466p-28f, 0.0f, 0x1.42379cp-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aff9a2p-63f, 0x1.bc982ap-52f, 0.0f, 0x1.54eaecp-8f, 0x1.8dbf7p-33f,
     0x1.0ec976p-100f, 0.0f, 0.0f, 0x1.617ffcp-84f, 0.0f, 0.0f, 0x1.7dfeaap-58f, 0.0f,
     0.0f, 0x1.a47bfap-54f, 0x1.c2e1e2p-34f, 0x1.5d37b6p-115f, 0x1.257a24p-115f,
     0x1.a05338p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc8bfep-98f,
     0x1.e3c892p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06ee04p-32f, 0x1.54fa28p-91f,
     0x1.6d9fc8p-126f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf8_u35kvx(tmp0);
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
    printf("Sleef_finz_sqrtf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
