/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f1_u35purecfma.c --function \
 *     Sleef_exp10f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.412dfep-8f, 0x1.ddd5a6p-95f, 0x1.722d32p-14f, 0x1.00f92ep-27f,
     0x1.84cefep-2f, 0x1.2fcc36p-50f, 0x1.eae51p-10f, 0.0f, 0.0f, 0.0f,
     0x1.ed748p-116f, 0x1.b3e7acp-70f, 0.0f, 0.0f, 0.0f, 0x1.f141c2p-60f, 0.0f, 0.0f,
     0.0f, 0x1.399c1cp-92f, 0x1.d0f088p-16f, 0.0f, 0.0f, 0.0f, 0x1.739efap-103f, 0.0f,
     0x1.f5b362p-65f, 0.0f, 0.0f, 0x1.cd81e8p-47f, 0.0f, 0x1.13eb5p-6f,
     0x1.478898p-84f, 0.0f, 0.0f, 0x1.ba3514p-89f, 0x1.bef656p-87f, 0.0f, 0.0f,
     0x1.3a74bp-71f, 0.0f, 0x1.197cf6p-4f, 0x1.d701f6p-114f, 0x1.f33f92p-99f, 0.0f,
     0x1.de7006p-112f, 0x1.755cbp-18f, 0.0f, 0.0f, 0.0f, 0x1.2e34dep-93f, 0.0f, 0.0f,
     0x1.e871eep-107f, 0x1.f6c696p-68f, 0.0f, 0.0f, 0x1.068358p-79f, 0x1.21c6fap-37f,
     0.0f, 0.0f, 0.0f, 0x1.69cdaap-26f, 0.0f, 0x1.9208acp-70f, 0.0f, 0.0f,
     0x1.14556cp-65f, 0x1.23cf7ap-18f, 0.0f, 0x1.1e0f6ap-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e5994p-94f, 0x1.d2be34p-47f, 0x1.c560dcp-112f, 0.0f,
     0x1.d31fp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a93878p-104f,
     0x1.c3d73p-88f, 0x1.3ddeecp-112f, 0.0f, 0x1.9d33ep-65f, 0.0f, 0x1.4ed502p-92f,
     0.0f, 0x1.013228p-107f, 0x1.8843d2p-111f, 0x1.4f6a64p-4f, 0x1.be7b4p-25f,
     0x1.8426dep-94f, 0x1.d79476p-80f, 0.0f, 0x1.b0315ep-81f, 0x1.986a84p-112f,
     0x1.567a5ep-73f, 0x1.201664p-78f, 0x1.441492p-58f, 0x1.e29122p-80f, 0.0f,
     0x1.afce82p-124f, 0.0f, 0.0f, 0x1.d00b3p-35f, 0.0f, 0.0f, 0x1.35d2ccp-29f,
     0x1.f411b4p-30f, 0x1.f70698p-82f, 0.0f, 0x1.2309ap-117f, 0x1.146c22p-52f, 0.0f,
     0x1.99c4b4p-96f, 0x1.28ff62p-33f, 0x1.5b6fd2p-4f, 0x1.6f4c1ep-53f,
     0x1.6f095p-81f, 0x1.1496e4p-7f, 0x1.57fc88p-52f, 0x1.7ced8cp-79f, 0.0f,
     0x1.007f02p-95f, 0x1.7eda58p-98f, 0x1.29b47p-18f, 0x1.1a988ep-91f,
     0x1.27f32p-102f, 0x1.3272b6p-94f, 0.0f, 0x1.3eee0ap-92f, 0.0f, 0x1.b03ae8p-50f,
     0.0f, 0x1.f52a16p-43f, 0.0f, 0.0f, 0x1.79afd8p-44f, 0.0f, 0.0f, 0x1.de6a06p-58f,
     0.0f, 0x1.c23324p-115f, 0.0f, 0x1.e55c26p-19f, 0.0f, 0x1.28651ep-77f,
     0x1.a4509ep-85f, 0.0f, 0x1.bbb7a8p-71f, 0.0f, 0.0f, 0x1.97e2bap-38f,
     0x1.843a14p-33f, 0.0f, 0.0f, 0x1.000f74p-106f, 0.0f, 0.0f, 0x1.11b8eap-57f, 0.0f,
     0.0f, 0x1.530542p-22f, 0x1.1ed7c8p-78f, 0x1.c2a296p-68f, 0x1.419164p-50f, 0.0f,
     0x1.b477ecp-73f, 0x1.ba2888p-80f, 0x1.dc50fp-20f, 0x1.cbd28ap-23f,
     0x1.95b966p-76f, 0x1.68a5cp-95f, 0.0f, 0x1.bb72a8p-14f, 0x1.b3212ep-21f, 0.0f,
     0x1.4605eap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10efb2p-109f, 0.0f,
     0x1.d1ccb2p-25f, 0x1.ffe28cp-122f, 0.0f, 0.0f, 0x1.7014c4p-126f, 0.0f,
     0x1.ff53f4p-37f, 0x1.ded4a2p-19f, 0x1.7d5668p-116f, 0x1.61edfap-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b37aeap-106f, 0x1.031e02p-69f, 0x1.490a9cp-109f, 0x1.da96e2p-44f,
     0x1.a1099cp-80f, 0.0f, 0.0f, 0x1.b71f3ap-24f, 0.0f, 0x1.49d928p-40f,
     0x1.d2b1eap-78f, 0x1.02678ap-47f, 0.0f, 0x1.1cdd22p-54f, 0x1.34aec8p-15f,
     0x1.1a8be8p-103f, 0.0f, 0.0f, 0x1.551bcp-27f, 0.0f, 0.0f, 0x1.54fb7cp-38f, 0.0f,
     0x1.75ec8ep-56f, 0.0f, 0x1.eee2a8p-24f, 0x1.28a7d8p-38f, 0x1.94874cp-2f,
     0x1.f72a62p-23f, 0.0f, 0x1.82be0cp-88f, 0.0f, 0.0f, 0x1.93430ap-35f, 0.0f,
     0x1.5f0258p-17f, 0x1.688ba8p-94f, 0x1.abbf1p-18f, 0.0f, 0.0f, 0x1.24e666p-42f,
     0.0f, 0x1.48d7cap-64f, 0.0f, 0.0f, 0x1.509dc8p-103f, 0x1.2f57p-120f,
     0x1.448ea2p-41f, 0x1.4ebfc4p-119f, 0x1.8c822ap-114f, 0.0f, 0.0f, 0x1.67727cp-75f,
     0.0f, 0x1.5017e6p-124f, 0x1.fd1192p-84f, 0.0f, 0x1.f4622ep-75f, 0.0f,
     0x1.e79b42p-12f, 0x1.48fcp-17f, 0x1.93b4ecp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ced484p-95f, 0x1.da4a1ap-3f, 0.0f, 0.0f, 0.0f,
     0x1.ed5a5p-16f, 0x1.397ebep-22f, 0x1.2344ap-44f, 0.0f, 0x1.bd45f2p-40f, 0.0f,
     0x1.c12546p-118f, 0.0f, 0x1.b745d4p-124f, 0x1.294e7p-2f, 0x1.d205b8p-5f,
     0x1.160f3p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.660af6p-26f, 0.0f, 0.0f, 0.0f,
     0x1.1c293ap-60f, 0.0f, 0x1.d31bf6p-73f, 0.0f, 0x1.59d404p-120f, 0x1.56edf6p-114f,
     0x1.1d6acap-54f, 0x1.463fccp-58f, 0x1.60d2aap-43f, 0.0f, 0x1.e1064p-89f,
     0x1.3f7b4ep-51f, 0x1.122516p-10f, 0.0f, 0.0f, 0.0f, 0x1.78a9e6p-69f, 0.0f,
     0x1.b115e8p-3f, 0x1.1249c2p-26f, 0x1.b2e74p-118f, 0x1.a8edc8p-15f,
     0x1.c5e666p-38f, 0x1.8a746cp-71f, 0.0f, 0.0f, 0.0f, 0x1.7f72f2p-2f,
     0x1.895b6ap-94f, 0.0f, 0.0f, 0.0f, 0x1.799094p-30f, 0.0f, 0.0f, 0.0f,
     0x1.20099ep-20f, 0x1.4f221cp-58f, 0.0f, 0x1.40ec44p-56f, 0.0f, 0.0f,
     0x1.accafap-78f, 0.0f, 0x1.c13c48p-35f, 0.0f, 0x1.0f601ap-55f, 0.0f, 0.0f, 0.0f,
     0x1.eb295cp-83f, 0x1.f1736p-39f, 0.0f, 0x1.6e4eap-86f, 0x1.a0fb86p-88f, 0.0f,
     0.0f, 0x1.5ee818p-62f, 0.0f, 0x1.682a1ap-29f, 0x1.106e82p-6f, 0x1p0f,
     0x1.96277ap-2f, 0x1.95d218p-85f, 0x1.28ab3cp-11f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.21b354p-93f, 0.0f, 0x1.f7009ep-68f, 0x1.07a206p-94f, 0.0f, 0.0f,
     0x1.8c2aep-92f, 0.0f, 0x1.e56e4ap-73f, 0.0f, 0x1.634bbcp-75f, 0x1.46ba86p-49f,
     0.0f, 0.0f, 0x1.ab4822p-51f, 0.0f, 0x1.d45fbap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e857fap-47f, 0x1.6b3f5p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.180e24p-7f,
     0x1.59613cp-48f, 0x1.1bf20ep-29f, 0.0f, 0x1.5abd6p-72f, 0x1.09abcep-15f,
     0x1.1d1576p-104f, 0.0f, 0x1.614194p-53f, 0x1.98c79ap-116f, 0x1.e1dd68p-39f,
     0x1p0f, 0x1.73f1f8p-57f, 0.0f, 0.0f, 0x1.f2f202p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13d42ap-29f, 0x1.0663acp-34f, 0.0f, 0.0f, 0x1.11c3d8p-105f, 0.0f, 0.0f,
     0x1.9dab54p-115f, 0x1.823bd2p-98f, 0x1.f2cb6ap-86f, 0x1.71a348p-89f, 0.0f, 0.0f,
     0x1.0fc3a6p-76f, 0.0f, 0x1.512be4p-53f, 0x1.fc349cp-95f, 0.0f, 0x1.7438e6p-100f,
     0x1.38ef8ap-72f, 0.0f, 0x1.d630e2p-94f, 0x1.bb616ep-44f, 0.0f, 0.0f,
     0x1.3744b2p-3f, 0x1.348298p-17f, 0x1.b7fbe6p-69f, 0.0f, 0.0f, 0.0f,
     0x1.328b66p-14f, 0x1.3d586ep-35f, 0x1.db7454p-65f, 0x1.42c49ep-37f,
     0x1.3ed534p-99f, 0.0f, 0x1.46ad7ep-63f, 0.0f, 0x1.15b5a4p-110f, 0.0f, 0.0f,
     0x1.dfbbacp-95f, 0x1.57d27p-71f, 0x1.a69b14p-40f, 0x1.e70ca4p-24f, 0.0f,
     0x1.f8739ep-76f, 0x1.0ffd38p-39f, 0x1.5d2c58p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ee654p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5db38p-99f, 0.0f,
     0.0f, 0x1.71cff8p-118f, 0.0f, 0.0f, 0x1.efd65ap-114f, 0.0f, 0.0f, 0x1.9ffc4ep-5f,
     0.0f, 0x1.2f4f16p-108f, 0x1.666514p-51f, 0x1.a03324p-44f, 0.0f, 0x1.bd40dp-33f,
     0x1.bc27e6p-113f, 0.0f, 0x1.6461d6p-87f, 0.0f, 0x1.81d33ap-52f, 0x1.401eb8p-34f,
     0.0f, 0.0f, 0x1.9e1f1p-71f, 0x1.7304c8p-96f, 0x1.db5fe6p-89f, 0x1.d74216p-114f,
     0.0f, 0.0f, 0x1.8893b8p-123f, 0x1.b0495p-94f, 0.0f, 0.0f, 0x1.d8035ap-63f,
     0x1.a41476p-35f, 0x1.6cec68p-87f, 0.0f, 0.0f, 0x1.3ee7dap-5f, 0x1.363a7p-6f,
     0x1.463622p-89f, 0x1.69d926p-18f, 0.0f, 0x1.4e0258p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c1206p-81f, 0x1.27769ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a52b9cp-72f,
     0x1.ccc04cp-126f, 0.0f, 0x1.399d86p-58f, 0x1.180874p-66f, 0.0f, 0x1.ac8dep-116f,
     0x1.0651eep-27f, 0.0f, 0x1.ea8296p-66f, 0x1.163c78p-4f, 0x1.a1672ap-21f, 0.0f,
     0x1.733a94p-72f, 0x1.06c636p-59f, 0x1.a218e2p-57f, 0x1.bef6fap-13f, 0.0f,
     0x1.09921cp-119f, 0.0f, 0.0f, 0x1.3f5ad2p-8f, 0x1p0f, 0.0f, 0x1.060d94p-114f,
     0x1.dcf434p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d30c5p-108f, 0x1.be6ebep-111f,
     0.0f, 0.0f, 0x1.dc144ep-19f, 0x1.92769p-40f, 0.0f, 0x1.9389ap-99f, 0.0f,
     0x1.84deeep-102f, 0.0f, 0x1.7ce27p-105f, 0.0f, 0x1.ae0e4p-126f, 0x1.21e0fcp-30f,
     0.0f, 0x1.d6c994p-77f, 0x1.d9f62p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed7966p-126f,
     0x1.622492p-69f, 0x1.7b4c16p-18f, 0.0f, 0.0f, 0.0f, 0x1.3dd868p-103f, 0.0f, 0.0f,
     0.0f, 0x1.397f68p-60f, 0x1.306acp-13f, 0x1.c95bdap-63f, 0x1.63dab6p-27f,
     0x1.22c504p-17f, 0x1.03e6dep-47f, 0.0f, 0.0f, 0x1.44069p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.83e0d6p-85f, 0x1.ceab7p-33f, 0x1.5a5beap-16f, 0.0f, 0.0f,
     0x1.5fe3dcp-61f, 0.0f, 0.0f, 0x1.7e8748p-121f, 0.0f, 0.0f, 0x1.0cf2bep-46f, 0.0f,
     0.0f, 0x1.41ef88p-35f, 0x1.5b5896p-43f, 0.0f, 0.0f, 0.0f, 0x1.9e6a74p-27f,
     0x1.c608ap-43f, 0x1.6e5f7ep-59f, 0.0f, 0x1.6500c8p-43f, 0.0f, 0x1.aae29cp-72f,
     0.0f, 0.0f, 0x1.4a4044p-77f, 0x1.04995ap-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.878462p-73f, 0x1.af2b64p-67f, 0x1.a9e154p-113f, 0x1.91fcbep-75f,
     0x1.bb7d16p-117f, 0.0f, 0x1.af19acp-104f, 0x1.d6d57cp-121f, 0x1.6e944p-11f, 0.0f,
     0.0f, 0x1.5d160cp-37f, 0x1.2ab76ep-23f, 0.0f, 0.0f, 0x1.94bd48p-57f,
     0x1.2ede68p-36f, 0x1.67c63ap-45f, 0.0f, 0.0f, 0x1.4f208ap-111f, 0x1.f175e8p-31f,
     0x1.21e15ep-97f, 0x1.29840cp-112f, 0.0f, 0x1.9cc84ep-90f, 0.0f, 0.0f,
     0x1.d79c02p-35f, 0x1.603578p-79f, 0x1.d8db2p-5f, 0x1.5f2edap-96f, 0.0f,
     0x1.eb5162p-102f, 0x1.f8391p-102f, 0.0f, 0x1.2b9fcp-77f, 0.0f, 0.0f,
     0x1.46d34cp-83f, 0.0f, 0.0f, 0x1.afb18ep-36f, 0.0f, 0.0f, 0x1.34e3a4p-30f, 0.0f,
     0.0f, 0x1.f0c64cp-23f, 0.0f, 0.0f, 0x1.5b1e9ap-67f, 0x1.cf7838p-8f,
     0x1.79c926p-98f, 0.0f, 0.0f, 0.0f, 0x1.3dda5ap-113f, 0.0f, 0.0f, 0.0f,
     0x1.01e822p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9650e2p-72f, 0x1.6da962p-111f,
     0.0f, 0x1.9fcad6p-20f, 0x1.e4b9cep-48f, 0.0f, 0x1.ee0d14p-22f, 0.0f,
     0x1.91f2bep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bd02cp-75f, 0.0f,
     0.0f, 0.0f, 0x1.011036p-16f, 0x1.d33762p-124f, 0.0f, 0.0f, 0x1.d2fed6p-43f, 0.0f,
     0x1.d35454p-47f, 0.0f, 0.0f, 0x1.b406b6p-6f, 0x1.0bd0f2p-24f, 0.0f,
     0x1.c76f38p-36f, 0x1.cbe1dcp-71f, 0.0f, 0x1.bc4454p-46f, 0.0f, 0.0f,
     0x1.dd8a06p-52f, 0.0f, 0.0f, 0.0f, 0x1.c82a12p-95f, 0x1.32cba2p-48f, 0.0f, 0.0f,
     0x1.9800d6p-1f, 0x1.625836p-100f, 0.0f, 0x1.ffd322p-108f, 0x1.55a62cp-72f, 0.0f,
     0.0f, 0x1.13f798p-118f, 0.0f, 0.0f, 0.0f, 0x1.b9b736p-70f, 0x1.bc071ep-3f,
     0x1.2ffc16p-1f, 0.0f, 0.0f, 0x1.b420f2p-1f, 0x1.173984p-41f, 0x1.959f7cp-125f,
     0x1.d1cbe4p-118f, 0x1.1f585p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1508c4p-38f,
     0x1.8e4748p-123f, 0.0f, 0.0f, 0x1.d8dadcp-96f, 0.0f, 0.0f, 0x1.592b96p-83f,
     0x1.110b9ap-36f, 0.0f, 0.0f, 0x1.69aff2p-11f, 0.0f, 0x1.2c59a2p-69f, 0.0f, 0.0f,
     0.0f, 0x1.d5e2dap-87f, 0x1.1eaef8p-2f, 0x1.12d818p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9462c8p-103f, 0x1.718e3ap-11f, 0.0f, 0x1.63d38cp-61f, 0x1.fd0ccap-30f, 0.0f,
     0x1.f3a97ap-116f, 0.0f, 0.0f, 0x1.2ba1fcp-94f, 0x1.eece5cp-31f, 0x1.087cacp-81f,
     0.0f, 0.0f, 0.0f, 0x1.a08d8ap-36f, 0.0f, 0x1.56ea6cp-12f, 0x1.a45262p-109f,
     0x1.52955p-30f, 0.0f, 0x1.3592d2p-81f, 0.0f, 0.0f, 0.0f, 0x1.cf64fcp-110f, 0.0f,
     0x1.c66c7cp-93f, 0.0f, 0.0f, 0x1.5da3b6p-47f, 0x1.9ebf94p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44fb2ap-126f, 0.0f, 0x1.adaac4p-97f,
     0.0f, 0.0f, 0x1.6c2576p-4f, 0x1.016706p-118f, 0x1.c7dfbcp-39f, 0.0f,
     0x1.aa24fcp-100f, 0.0f, 0x1.18a1bap-53f, 0x1.0cfdcep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae083ep-109f, 0x1.adfcep-68f, 0.0f, 0.0f, 0.0f, 0x1.7cec26p-21f, 0.0f,
     0x1.4ec934p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.035b1p-44f, 0.0f,
     0x1.6cec58p-26f, 0.0f, 0x1.e18d7p-79f, 0.0f, 0x1.83b618p-93f, 0.0f,
     0x1.de48fcp-74f, 0x1.b03542p-19f, 0x1.7059ep-45f, 0.0f, 0.0f, 0x1.e69942p-7f,
     0x1.a1b252p-30f, 0.0f, 0x1.f22cf8p-64f, 0x1.10ab9p-31f, 0x1.87b02p-120f,
     0x1.fc34f8p-6f, 0x1.62e01p-38f, 0x1.24072ap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f645ap-4f, 0.0f, 0.0f, 0x1.889f16p-119f, 0x1.503484p-65f, 0x1.d66ccap-83f,
     0.0f, 0.0f, 0x1.4d6e82p-29f, 0x1.59522cp-48f, 0.0f, 0.0f, 0x1.b8d1b2p-106f,
     0x1.16af46p-70f, 0.0f, 0.0f, 0x1.63ba76p-119f, 0x1.668772p-105f, 0.0f, 0.0f,
     0x1.789b7cp-43f, 0.0f, 0.0f, 0x1.b9ab0ep-39f, 0x1.e9560ap-108f, 0.0f, 0.0f, 0.0f,
     0x1.e60c52p-67f, 0x1.a6439ap-86f, 0x1.fa5654p-107f, 0x1.3ab9aep-1f,
     0x1.83aee4p-72f, 0x1.a58286p-114f, 0x1.f006ccp-65f, 0.0f, 0x1.308d4ep-96f, 0.0f,
     0x1.dac2b8p-84f, 0x1.d65d9ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bce23ap-120f, 0.0f, 0x1.d0588cp-4f, 0x1.36aep-73f, 0x1.bb19c8p-102f,
     0x1.d896d6p-56f, 0.0f, 0x1.744fc2p-61f, 0.0f, 0x1.ff4822p-30f, 0x1.b585e2p-9f,
     0.0f, 0.0f, 0.0f, 0x1.1d9efep-100f, 0.0f, 0x1.7046a8p-115f, 0x1.9cd404p-17f,
     0x1.65bedcp-35f, 0.0f, 0.0f, 0.0f, 0x1.2c07dep-79f, 0.0f, 0x1.b27c66p-28f,
     0x1.794406p-5f, 0x1.d15d3cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1db412p-33f, 0.0f, 0x1.d8da7ep-63f, 0.0f,
     0x1.98b202p-103f, 0.0f, 0x1.5948f8p-113f, 0x1.40766cp-34f
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
            tmp1 = Sleef_exp10f1_u35purecfma(tmp0);
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
    printf("Sleef_exp10f1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10f1_u35purecfma bench acc %a\n", global_bench_acc);
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
