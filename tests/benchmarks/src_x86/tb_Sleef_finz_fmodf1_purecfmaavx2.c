/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmodf1_purecfma.c --function \
 *     Sleef_finz_fmodf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0x1.d06dcap-105f, 0x1.fc66bcp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.45cbe4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cd97p-92f, 0x1.eb4f02p-56f,
     0x1.5abaacp-41f, 0.0f, 0.0f, 0.0f, 0x1.d9b56p-87f, 0x1.324884p-12f,
     0x1.16cf5cp-114f, 0x1.fa9f78p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b65542p-25f, 0.0f,
     0x1.e6dcp-76f, 0x1.3876e6p-58f, 0x1.1cf4dcp-89f, 0.0f, 0x1.52ccecp-53f,
     0x1.2d39d4p-120f, 0x1.14271ap-83f, 0.0f, 0x1.f37936p-46f, 0.0f, 0.0f,
     0x1.a5ab58p-83f, 0.0f, 0x1.d5903ap-97f, 0x1.f7cf06p-35f, 0x1.b0999cp-35f,
     0x1.c9da72p-61f, 0x1.61286p-75f, 0x1.e49502p-93f, 0x1.c26e6p-87f, 0.0f,
     0x1.7801eap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.568d6ap-120f, 0x1.633754p-15f, 0.0f,
     0.0f, 0.0f, 0x1.b13902p-50f, 0x1.c7d53cp-92f, 0.0f, 0x1.33e5e2p-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9af4b6p-109f, 0x1.b01b3ap-121f, 0x1.41072ap-58f,
     0x1.cad79cp-63f, 0x1.45531ep-79f, 0.0f, 0.0f, 0x1.0147eep-46f, 0.0f,
     0x1.a6c63cp-49f, 0.0f, 0.0f, 0x1.b21434p-94f, 0x1.016006p-113f, 0.0f,
     0x1.cf964ep-67f, 0.0f, 0.0f, 0x1.26d262p-62f, 0x1.ac9698p-33f, 0.0f,
     0x1.6fed1cp-66f, 0.0f, 0.0f, 0.0f, 0x1.5589acp-91f, 0x1.bae2d2p-91f,
     0x1.a0a052p-9f, 0x1.ee9b7ap-113f, 0x1.fe8faap-57f, 0.0f, 0.0f, 0x1.05042cp-117f,
     0.0f, 0.0f, 0x1.89778p-108f, 0x1.2c5ccap-47f, 0x1.21a842p-101f, 0.0f, 0.0f,
     0x1.30662ep-26f, 0x1.b20008p-26f, 0.0f, 0x1.37c23p-96f, 0.0f, 0x1.886b5p-4f,
     0x1.a0726cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f014d8p-6f, 0.0f, 0.0f,
     0x1.de574p-46f, 0.0f, 0.0f, 0.0f, 0x1.50cdacp-107f, 0x1.ccfa9ap-67f,
     0x1.f7afa4p-26f, 0x1.e8770ap-59f, 0x1.7c240ap-126f, 0.0f, 0.0f, 0x1.a727e6p-64f,
     0.0f, 0x1.dced4ap-76f, 0.0f, 0.0f, 0x1.737d32p-92f, 0.0f, 0.0f, 0x1.b3803p-97f,
     0.0f, 0x1.2f3f84p-89f, 0x1.f1b094p-97f, 0x1.daaf0ep-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c350eep-5f, 0.0f, 0.0f, 0.0f, 0x1.62faa6p-68f, 0x1.fedd66p-19f, 0.0f,
     0x1.7d7ee8p-48f, 0.0f, 0x1.b3f236p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1cd4ap-3f,
     0.0f, 0.0f, 0x1.586334p-1f, 0.0f, 0x1.1361a8p-99f, 0.0f, 0x1.bca9d8p-67f, 0.0f,
     0x1.35fa2p-27f, 0x1.30410ep-9f, 0x1.1bcd84p-87f, 0.0f, 0.0f, 0x1.71af4ep-111f,
     0x1.6f5acap-15f, 0x1.473a4ap-47f, 0.0f, 0x1.5a748ep-107f, 0x1.a13c2ep-78f, 0.0f,
     0.0f, 0x1.342a26p-73f, 0.0f, 0.0f, 0.0f, 0x1.1d189p-70f, 0x1.09ac9ap-14f,
     0x1.80f45p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e759b2p-52f, 0x1.d3dea8p-57f,
     0.0f, 0.0f, 0.0f, 0x1.b5df44p-9f, 0x1.6d72d8p-1f, 0x1.7de20ep-36f, 0.0f,
     0x1.65308ep-53f, 0x1.e795d4p-82f, 0.0f, 0x1.60fcbep-94f, 0.0f, 0x1.bcf70cp-93f,
     0x1.b497eep-14f, 0x1.ce00a4p-57f, 0.0f, 0.0f, 0x1.a4f4fep-7f, 0x1.be1592p-59f,
     0.0f, 0x1.edcef2p-9f, 0.0f, 0.0f, 0.0f, 0x1.87f982p-110f, 0x1.0c19d4p-41f, 0.0f,
     0.0f, 0x1.a2898p-47f, 0x1.f718f4p-23f, 0x1.d14e9ep-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc6b7ep-66f, 0.0f, 0x1.137ab2p-41f, 0.0f, 0.0f, 0x1.dc5532p-110f,
     0x1p0f, 0.0f, 0x1.2af3f4p-125f, 0x1.a3d13p-96f, 0x1.3bffcap-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.de2aa6p-53f, 0x1.ec5f0ap-108f, 0x1.a38dfp-66f, 0x1.7b4238p-88f,
     0.0f, 0.0f, 0.0f, 0x1.9273a8p-24f, 0x1p0f, 0.0f, 0x1.f06f8ap-116f,
     0x1.2a5d64p-64f, 0x1.170576p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.638072p-86f, 0.0f,
     0x1.78efaap-119f, 0x1.c8cf7ap-58f, 0.0f, 0x1.2fdfc4p-120f, 0.0f,
     0x1.6f1356p-119f, 0x1.4f7b3p-98f, 0.0f, 0.0f, 0x1.4edf54p-35f, 0.0f, 0.0f,
     0x1.ef3bfep-33f, 0.0f, 0.0f, 0x1.45080ap-57f, 0.0f, 0.0f, 0x1.65da7p-3f,
     0x1.502d2ap-101f, 0x1.ad3ad4p-124f, 0x1.4d7a96p-100f, 0.0f, 0x1.2ee20ep-112f,
     0x1.f2c34cp-48f, 0.0f, 0x1.5fcb7ap-2f, 0x1.e52f7cp-123f, 0.0f, 0.0f,
     0x1.f6d1d4p-93f, 0.0f, 0.0f, 0x1.e094d8p-124f, 0x1.2eea52p-24f, 0.0f,
     0x1.db9776p-12f, 0x1.2fa31ep-67f, 0.0f, 0x1.8d9a5cp-25f, 0.0f, 0.0f,
     0x1.74306cp-5f, 0x1.43e64cp-11f, 0.0f, 0.0f, 0x1.8b1204p-85f, 0.0f,
     0x1.77919p-5f, 0x1.7e3dcep-103f, 0.0f, 0x1.b43102p-85f, 0.0f, 0.0f,
     0x1.fe018ep-114f, 0x1.859a06p-8f, 0x1.222d42p-77f, 0.0f, 0x1.615c78p-62f,
     0x1.97ce1p-23f, 0.0f, 0x1.d13a8ep-116f, 0x1.cad81ap-44f, 0.0f, 0x1.e565ccp-126f,
     0x1.6464e4p-17f, 0.0f, 0.0f, 0.0f, 0x1.7e4344p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c638p-89f, 0.0f, 0x1.94f01ap-85f, 0.0f, 0.0f, 0x1.57d73ep-86f, 0.0f,
     0x1.b35b48p-94f, 0.0f, 0x1.c67596p-126f, 0x1.078efp-86f, 0x1.22f8bep-62f,
     0x1.8e8adep-115f, 0x1.537cc6p-18f, 0x1.024a8p-56f, 0.0f, 0x1.ab650cp-60f, 0.0f,
     0x1.5bda0ap-42f, 0x1.d43e6p-105f, 0.0f, 0x1.a3f2b2p-3f, 0x1.c42b98p-93f,
     0x1.033ceap-84f, 0.0f, 0x1.5113p-59f, 0.0f, 0x1.2ade54p-14f, 0.0f, 0.0f,
     0x1.6d86bcp-14f, 0x1.197c3ep-109f, 0.0f, 0x1.9daf6ep-5f, 0.0f, 0.0f, 0.0f,
     0x1.08a62ap-50f, 0.0f, 0.0f, 0.0f, 0x1.303746p-103f, 0x1.9f15e6p-10f,
     0x1.865e48p-125f, 0.0f, 0x1.6b0dcap-73f, 0.0f, 0x1.674072p-121f, 0x1.017a3ap-96f,
     0.0f, 0x1.95f0fap-52f, 0x1.8be974p-69f, 0.0f, 0x1.2e263p-118f, 0x1.d6c56cp-4f,
     0.0f, 0x1.f84514p-57f, 0x1.1384ap-92f, 0x1.63ffd4p-113f, 0x1.1ab1e2p-113f, 0.0f,
     0x1.e4fb2ep-110f, 0x1.2cac7p-70f, 0.0f, 0x1.72a9b6p-45f, 0.0f, 0x1.379d6cp-123f,
     0x1.6dc5b2p-104f, 0x1.ce3628p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23e9cp-22f,
     0x1.33db98p-86f, 0x1.3764acp-95f, 0x1.88e388p-117f, 0x1.ec4d2p-8f,
     0x1.4da71cp-118f, 0.0f, 0.0f, 0.0f, 0x1.f329dap-101f, 0.0f, 0x1.c56bc8p-31f,
     0x1.a7993p-114f, 0x1.95ac02p-101f, 0.0f, 0x1.77c808p-55f, 0x1.8bce62p-17f,
     0x1.08b2bcp-73f, 0x1.04832p-105f, 0.0f, 0.0f, 0x1.6b284p-27f, 0.0f,
     0x1.a6631ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e27f2p-106f,
     0x1.de5488p-51f, 0.0f, 0.0f, 0x1.bb86b6p-29f, 0.0f, 0x1.191d1cp-68f,
     0x1.2aa9b6p-89f, 0x1.8f4acep-1f, 0x1.bcc79cp-104f, 0x1.1c045cp-102f, 0.0f,
     0x1.958632p-49f, 0x1.0dc61p-90f, 0x1.f74126p-47f, 0.0f, 0.0f, 0x1.727498p-87f,
     0.0f, 0.0f, 0.0f, 0x1.969b4ep-104f, 0.0f, 0x1.25bc1ap-118f, 0x1.c122eep-80f,
     0.0f, 0.0f, 0.0f, 0x1.850b56p-118f, 0.0f, 0x1.2a8caep-44f, 0.0f, 0.0f, 0.0f,
     0x1.4ebd12p-74f, 0.0f, 0x1.87a6ecp-126f, 0x1.aaf2e2p-23f, 0x1.d50278p-96f, 0.0f,
     0.0f, 0x1.af1698p-87f, 0.0f, 0x1.7f263ap-27f, 0.0f, 0x1.c6fd58p-48f, 0.0f, 0.0f,
     0.0f, 0x1.4357c2p-2f, 0x1.be9e6ep-25f, 0.0f, 0x1.ba60a4p-85f, 0x1.fcee76p-57f,
     0x1.718fdp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.232f78p-3f, 0.0f, 0.0f,
     0x1.2a650ap-28f, 0.0f, 0.0f, 0x1.1b7438p-21f, 0.0f, 0x1.58e36ap-49f,
     0x1.6b9adep-25f, 0x1.322c6cp-37f, 0.0f, 0x1.c19506p-62f, 0x1.badff4p-107f, 0.0f,
     0.0f, 0x1.2b48e2p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86973p-110f, 0.0f, 0.0f,
     0x1.9b3b32p-61f, 0.0f, 0.0f, 0x1.7fecb4p-65f, 0.0f, 0.0f, 0x1.b6c186p-72f,
     0x1.1771c6p-23f, 0.0f, 0.0f, 0x1.e747f8p-89f, 0.0f, 0.0f, 0x1.6e4868p-62f, 0.0f,
     0.0f, 0x1.096602p-41f, 0.0f, 0x1.7f01b6p-103f, 0.0f, 0.0f, 0x1.d6f126p-3f, 0.0f,
     0x1.d286p-43f, 0x1.eb0e18p-10f, 0x1.4cce4cp-68f, 0.0f, 0.0f, 0x1.58a848p-19f,
     0.0f, 0.0f, 0x1.37b01ap-65f, 0x1.71f9cep-12f, 0x1.31812cp-58f, 0x1.655d96p-77f,
     0.0f, 0.0f, 0x1.9239cp-16f, 0x1.ea513ap-99f, 0.0f, 0.0f, 0x1.99cffcp-72f,
     0x1.be7702p-85f, 0.0f, 0x1.2884f2p-106f, 0x1.715758p-89f, 0.0f, 0x1.01dbeep-96f,
     0x1.6f2c1p-41f, 0x1.121facp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0c3f8p-92f,
     0x1.2fe46p-68f, 0x1.20646p-37f, 0x1.92e0cep-124f, 0x1.744992p-7f,
     0x1.4d38fap-25f, 0.0f, 0.0f, 0.0f, 0x1.1603bcp-80f, 0.0f, 0x1.45941p-106f, 0.0f,
     0.0f, 0x1.81225cp-97f, 0.0f, 0x1.05bb8cp-46f, 0.0f, 0.0f, 0x1.e4608p-32f, 0.0f,
     0x1.beb278p-78f, 0.0f, 0.0f, 0x1.bb96c8p-105f, 0.0f, 0.0f, 0x1.f0ce78p-123f,
     0x1.80f2d6p-83f, 0x1.8640c4p-34f, 0x1.aca50ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.3c71acp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.effc6ep-100f,
     0x1.0befdap-43f, 0.0f, 0.0f, 0x1.0ce75cp-68f, 0.0f, 0.0f, 0x1.ab778ep-126f, 0.0f,
     0.0f, 0x1.adbd14p-19f, 0.0f, 0x1.ff33c2p-88f, 0x1.000566p-99f, 0.0f,
     0x1.f09e54p-101f, 0.0f, 0x1.7f9724p-24f, 0.0f, 0x1.0cc03p-45f, 0.0f,
     0x1.637954p-24f, 0.0f, 0.0f, 0x1.916ad2p-105f, 0x1.e87a82p-70f, 0.0f, 0.0f, 0.0f,
     0x1.f3eef6p-110f, 0.0f, 0x1.28f6c4p-67f, 0x1.f9d896p-2f, 0.0f, 0.0f,
     0x1.470a9cp-13f, 0.0f, 0.0f, 0.0f, 0x1.77d0e8p-90f, 0.0f, 0x1.017a8ep-71f, 0.0f,
     0x1.42d2acp-102f, 0x1.457c48p-98f, 0x1.22c872p-118f, 0x1.7cdbp-55f,
     0x1.87af1ap-82f, 0.0f, 0x1.36eacp-64f, 0x1.a9e7a6p-76f, 0.0f, 0x1.ced23p-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b894ep-32f, 0x1.042c96p-99f, 0x1.15d28cp-40f, 0.0f,
     0.0f, 0.0f, 0x1.028e62p-36f, 0.0f, 0.0f, 0x1.a5a4cp-115f, 0x1.fb452ep-20f, 0.0f,
     0.0f, 0.0f, 0x1.6554acp-78f, 0.0f, 0.0f, 0.0f, 0x1.33ebc6p-16f, 0x1.0577c8p-72f,
     0x1.73b358p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f6b4p-23f, 0x1p0f,
     0x1.a03582p-103f, 0.0f, 0x1.44c64cp-71f, 0.0f, 0x1.e2e72ep-83f, 0x1.41f7bcp-96f,
     0x1.326bc4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f1894p-74f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.67819ep-125f, 0x1.8d0e4ap-90f, 0.0f, 0x1.ecdc5ep-123f, 0.0f,
     0x1.e7da72p-78f, 0x1.b2ed6cp-65f, 0.0f, 0x1.0c6856p-109f, 0x1.1d5c8ap-63f, 0.0f,
     0x1.5079dp-30f, 0x1.f7b59ep-113f, 0x1.00cd84p-27f, 0.0f, 0.0f, 0x1.bb1884p-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.58d282p-10f, 0.0f, 0x1.62d50ep-107f, 0.0f,
     0x1.cc641ap-11f, 0x1.1221bap-2f, 0x1.2a7d44p-85f, 0x1.2e08e6p-88f,
     0x1.49eddep-8f, 0x1.13aeacp-21f, 0.0f, 0.0f, 0x1.5514d4p-35f, 0x1.3d4beep-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d927ap-44f, 0x1.9ba2a6p-65f, 0x1.46fc66p-8f, 0.0f,
     0.0f, 0.0f, 0x1.923ba2p-104f, 0.0f, 0.0f, 0x1.cc0058p-67f, 0x1.5c12b2p-76f,
     0x1.faa578p-69f, 0.0f, 0x1.e3f0fp-30f, 0x1.be0292p-19f, 0x1.3322e8p-98f, 0.0f,
     0x1.8f40b6p-40f, 0.0f, 0x1.283b48p-83f, 0.0f, 0.0f, 0x1.f76b86p-115f, 0.0f, 0.0f,
     0x1.756446p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60db28p-52f, 0.0f, 0.0f, 0.0f,
     0x1.922e4ep-24f, 0.0f, 0.0f, 0x1.1ca2b8p-83f, 0.0f, 0x1.9ffc9cp-32f, 0.0f, 0.0f,
     0x1.868ed2p-67f, 0.0f, 0.0f, 0x1.14318p-126f, 0.0f, 0.0f, 0.0f, 0x1.802808p-24f,
     0.0f, 0x1.7f616ap-55f, 0x1.1cecd8p-58f, 0x1p0f, 0x1.2aa59ep-56f, 0x1.01808p-76f,
     0.0f, 0x1.a8ca0ap-95f, 0.0f, 0x1.5ba16ap-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8d652p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44323ap-102f, 0x1.926d2cp-83f, 0.0f,
     0.0f, 0x1.2f471p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c9f88p-108f, 0.0f,
     0x1.e94aa2p-103f, 0x1.ce6bb6p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a57c8p-100f, 0.0f,
     0x1.7468fp-45f, 0.0f, 0x1.956c92p-21f, 0.0f, 0x1.86a26p-11f, 0x1.0a642cp-34f,
     0x1.cf5c8cp-40f, 0x1.afbb9cp-47f, 0x1.3138c8p-5f, 0.0f, 0.0f, 0.0f,
     0x1.3a2cfcp-45f, 0.0f, 0x1.fd507ap-8f, 0x1.0bb014p-44f, 0x1.e8c566p-24f, 0.0f,
     0.0f, 0x1.b4f052p-3f, 0.0f, 0x1.3d575p-65f, 0.0f, 0x1.497f86p-39f,
     0x1.4efefap-102f, 0x1.b0e8cap-91f, 0x1.0b538cp-46f, 0.0f, 0x1.e5f57ap-19f, 0.0f,
     0.0f, 0.0f, 0x1.76a124p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9aa0ep-68f, 0.0f, 0x1.8de4cep-49f, 0x1.2a2176p-52f, 0.0f, 0.0f,
     0x1.739ca4p-88f, 0.0f, 0.0f, 0.0f, 0x1.38e07ep-79f, 0x1.6b79b4p-18f,
     0x1.6a5204p-116f, 0.0f, 0x1.9bd6bap-67f, 0x1.a76e72p-87f, 0.0f, 0.0f,
     0x1.596ddep-32f, 0x1.1f587p-72f, 0x1.a8a196p-32f, 0x1.7ba1acp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6ea796p-68f, 0.0f, 0x1.7884c2p-110f, 0.0f, 0x1.15c20ep-25f,
     0x1.dd8874p-61f, 0.0f, 0x1.a31402p-41f, 0x1.2a1e6ap-64f, 0x1.626fe6p-18f, 0.0f,
     0x1.573bb6p-25f, 0.0f, 0x1.dec512p-73f, 0x1.24a6bcp-17f, 0.0f, 0.0f,
     0x1.2e1688p-86f, 0x1.2fe49p-71f, 0.0f, 0.0f, 0x1.6dd2f2p-117f, 0.0f, 0.0f, 0.0f,
     0x1.8c7432p-74f, 0x1.8ac478p-125f, 0.0f, 0.0f, 0.0f, 0x1.513f42p-71f, 0.0f,
     0x1.e535d8p-14f, 0x1.8563f4p-98f, 0x1.734992p-100f, 0x1.0d67e6p-74f,
     0x1.45c17p-45f, 0x1.e0dce6p-84f, 0x1.077008p-42f, 0x1.441acap-43f,
     0x1.46828cp-99f, 0x1.c2eee4p-126f, 0x1.00d732p-1f, 0.0f, 0x1.6780e2p-52f,
     0x1.f5428p-116f, 0.0f, 0x1.5b2802p-68f, 0x1.d05006p-53f, 0x1.9d0eb2p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a4b4b2p-111f, 0.0f, 0.0f, 0x1.adc886p-101f, 0.0f, 0.0f,
     0x1.fc71b4p-120f, 0x1.893342p-125f, 0x1.448e88p-4f, 0x1.269974p-8f, 0.0f, 0.0f,
     0x1.cd3dcap-46f, 0.0f, 0.0f, 0x1.ad17aap-86f, 0x1.a525p-45f, 0x1.e5f61cp-81f,
     0x1.a49dep-13f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.390db8p-43f, 0.0f, 0x1.54658cp-29f, 0.0f, 0x1.6841f8p-98f, 0.0f, 0.0f,
     0x1.50397ep-55f, 0.0f, 0.0f, 0x1.a9659ep-29f, 0x1.3e3b84p-43f, 0.0f, 0x1p0f,
     0x1.e9b54ep-123f, 0.0f, 0.0f, 0x1.41ececp-103f, 0.0f, 0x1.b240bp-106f, 0.0f,
     0x1.0bd0eep-71f, 0x1.0bf302p-114f, 0.0f, 0x1.4097b4p-81f, 0.0f, 0x1.21f794p-55f,
     0x1.449694p-77f, 0x1.3473f4p-72f, 0x1.3bacbap-37f, 0.0f, 0x1.c014fcp-58f, 0.0f,
     0x1.e2232ep-20f, 0x1.d4cc9ap-125f, 0x1.04ee0ep-88f, 0x1.cbf316p-26f,
     0x1.fceb0ep-87f, 0.0f, 0.0f, 0.0f, 0x1.4f2f22p-13f, 0x1.e35c3ap-91f,
     0x1.9c9f82p-37f, 0.0f, 0x1.bf5a62p-72f, 0.0f, 0x1.b604ecp-53f, 0.0f, 0.0f,
     0x1.a0aabep-90f, 0.0f, 0x1.97aabep-106f, 0.0f, 0.0f, 0.0f, 0x1.5aca32p-21f, 0.0f,
     0.0f, 0x1.e93d86p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.181c72p-72f,
     0.0f, 0x1.0d0928p-93f, 0x1.fbad06p-102f, 0.0f, 0.0f, 0x1.ce45aep-7f,
     0x1.845d58p-120f, 0.0f, 0.0f, 0.0f, 0x1.f974d6p-98f, 0x1.57192ap-28f, 0.0f,
     0x1.ae11cp-92f, 0x1p0f, 0x1.51a1cap-58f, 0.0f, 0.0f, 0x1.4e1428p-29f, 0.0f, 0.0f,
     0.0f, 0x1.de1ba2p-77f, 0x1.d8e504p-29f, 0.0f, 0.0f, 0x1.58fd2ap-56f,
     0x1.69c25cp-24f, 0x1.d6906ep-51f, 0.0f, 0x1.9ad4c2p-126f, 0.0f, 0x1.9a9b22p-107f,
     0x1.929e2cp-122f, 0.0f, 0x1.977c38p-122f, 0x1.ee6dd6p-99f, 0.0f, 0.0f, 0.0f,
     0x1.683aa4p-88f, 0x1.abf7e2p-118f, 0x1.cae49p-111f, 0x1.959992p-108f,
     0x1.37d702p-98f, 0x1.da8f4p-123f, 0x1.f90c58p-49f, 0x1.d2d466p-85f, 0.0f,
     0x1.b3974ep-113f, 0.0f, 0.0f, 0x1.0a15bap-53f, 0.0f, 0x1.7a7bp-15f,
     0x1.dec5d2p-70f, 0x1.74cb32p-34f, 0x1.f1cfb6p-70f, 0.0f, 0.0f, 0x1.5bffaap-91f,
     0x1.c9b8ep-41f, 0.0f, 0.0f, 0x1.73efa8p-57f, 0x1.23e31cp-11f, 0x1.5b897ep-103f,
     0x1.313c26p-14f, 0x1.daef1ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cafd62p-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a006ep-28f, 0.0f,
     0x1.fe7cdcp-64f, 0x1.74f0dcp-26f, 0x1.9c775ap-58f, 0x1.d565f6p-25f,
     0x1.e5e76ap-7f, 0x1.584524p-90f, 0x1.5786acp-81f, 0x1.25c81p-101f, 0.0f,
     0x1.a9194ap-19f, 0x1.024aaep-18f, 0.0f, 0x1.57c94ep-67f, 0.0f, 0.0f,
     0x1.49ec52p-66f, 0.0f, 0.0f, 0.0f, 0x1.5f4b6cp-79f, 0.0f, 0.0f, 0.0f,
     0x1.711c6p-19f, 0.0f, 0.0f, 0x1.804caap-114f, 0x1.1254f2p-50f, 0x1.55349cp-108f,
     0x1.eb7fdap-13f, 0x1.143fd4p-14f, 0x1.fccc06p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3b7fep-32f, 0.0f, 0x1.a9e17ep-49f, 0.0f, 0x1.89391ap-55f, 0x1.389278p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b079a4p-43f, 0x1.d8965ap-29f,
     0.0f, 0.0f, 0x1.3addfcp-103f, 0x1.3962dcp-50f, 0.0f, 0.0f, 0.0f, 0x1.bc81bp-51f,
     0x1.ed9ce2p-1f, 0.0f, 0x1.1dac6ep-30f, 0.0f, 0.0f, 0x1.7c0326p-80f, 0.0f, 0.0f,
     0.0f, 0x1.2787dep-7f, 0.0f, 0x1.102a36p-90f, 0.0f, 0.0f, 0.0f, 0x1.739f2cp-108f,
     0x1.669b44p-64f, 0.0f, 0.0f, 0x1.abe2acp-56f, 0.0f, 0x1.9c1afep-121f, 0.0f, 0.0f,
     0x1.e7551cp-47f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.663052p-94f, 0.0f, 0x1.d91b04p-113f, 0.0f, 0.0f, 0x1.ff6428p-54f,
     0x1.28562ep-105f, 0x1.5eb048p-23f, 0x1.303414p-99f, 0x1.6e8e84p-88f, 0.0f, 0.0f,
     0x1.555fbcp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaad02p-1f, 0x1.2f8e4ep-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2c3c9ep-96f, 0x1.904cd4p-120f, 0x1.9d7364p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.352242p-97f, 0x1.aa77d6p-4f, 0.0f, 0.0f, 0.0f, 0x1.62f82cp-1f,
     0.0f, 0.0f, 0.0f, 0x1.8ae82ep-44f, 0x1.28b6bep-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d932ap-96f, 0x1.a0cb54p-47f, 0x1.8a541p-71f, 0.0f, 0.0f, 0x1.ea5572p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e2facp-31f, 0.0f, 0.0f, 0.0f, 0x1.bfce24p-35f, 0.0f,
     0x1.219756p-79f, 0x1.f37b06p-31f, 0.0f, 0x1.dbf5eep-102f, 0.0f, 0x1.56a188p-6f,
     0x1.d2c7cp-36f, 0.0f, 0.0f, 0x1.eb4734p-97f, 0x1.52e834p-52f, 0.0f, 0.0f,
     0x1.217e54p-31f, 0x1.6d3b7ap-4f, 0.0f, 0x1.e08456p-18f, 0.0f, 0x1.710c36p-42f,
     0.0f, 0x1.1a7256p-13f, 0.0f, 0.0f, 0x1.75d36p-19f, 0x1.a3ae22p-45f,
     0x1.17381ep-26f, 0x1.63d774p-5f, 0.0f, 0.0f, 0x1.7ea076p-23f, 0.0f,
     0x1.108a4p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c339d8p-112f, 0x1.5986d8p-124f,
     0x1.d3446p-113f, 0x1.f1a5bep-39f, 0x1.cd8556p-25f, 0x1.bf19cp-93f,
     0x1.8e4dcp-96f, 0x1.54b444p-15f, 0x1.9dff44p-88f, 0.0f, 0x1.c1d16ep-124f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c54812p-78f,
     0x1.2e43c2p-36f, 0.0f, 0.0f, 0x1.5c7296p-6f, 0.0f, 0x1.f42a68p-5f, 0.0f,
     0x1.7b6856p-87f, 0.0f, 0x1.0495eep-96f, 0.0f, 0.0f, 0x1.487b34p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfd188p-118f, 0x1.f4401cp-8f,
     0x1.45b982p-43f, 0x1.05f14ep-45f, 0.0f, 0x1.b011aep-114f, 0x1.2c13a4p-31f, 0.0f,
     0x1.9d484ep-95f, 0x1.94469ep-74f, 0x1.eec3f8p-74f, 0.0f, 0.0f, 0.0f,
     0x1.be5b2ap-47f, 0x1.bcd4b6p-58f, 0.0f, 0.0f, 0.0f, 0x1.20eebcp-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.759222p-33f, 0.0f, 0x1.0f7faap-110f, 0x1.3f0774p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc235cp-104f, 0x1.04997cp-95f,
     0x1.260756p-123f, 0x1.904e94p-103f, 0.0f, 0x1.3f8b8ap-20f, 0.0f, 0.0f, 0.0f,
     0x1.87fbe8p-20f, 0.0f, 0.0f, 0.0f, 0x1.9692e4p-57f, 0x1.087a5cp-117f,
     0x1.86f118p-113f, 0.0f, 0x1.6be7d2p-70f, 0.0f, 0x1.78f5cep-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4f2012p-105f, 0.0f, 0x1.1cedcap-109f, 0.0f, 0x1.0ce97ep-43f,
     0x1.a17676p-115f, 0.0f, 0.0f, 0.0f, 0x1.ff5d88p-111f, 0x1.dd08a2p-10f, 0.0f,
     0.0f, 0.0f, 0x1.45b95p-71f, 0.0f, 0x1.37f0d8p-74f, 0.0f, 0.0f, 0x1.a39c3p-56f,
     0.0f, 0.0f, 0x1.6c54a8p-108f, 0.0f, 0.0f, 0x1.81ac94p-26f, 0x1.6ee9ep-12f,
     0x1.06e4ecp-71f, 0.0f, 0x1.ff69acp-1f, 0x1.0b2d04p-87f, 0x1.490548p-98f, 0.0f,
     0.0f, 0x1.466b18p-122f, 0x1.5b0192p-87f, 0.0f, 0x1.ed4f3cp-18f, 0x1.38b002p-35f,
     0.0f, 0.0f, 0.0f, 0x1.982528p-19f, 0.0f, 0x1.e3f0a8p-99f, 0x1.b9ea2ep-123f, 0.0f,
     0.0f, 0.0f, 0x1.3627e2p-37f, 0x1.6bf5e6p-45f, 0x1.771e8ap-43f, 0x1.479a0cp-85f,
     0.0f, 0x1.e558f6p-69f, 0x1.be4e3cp-119f, 0x1.0de3fap-107f, 0.0f, 0.0f, 0.0f,
     0x1.827342p-82f, 0.0f, 0.0f, 0.0f, 0x1.3ba9a4p-24f, 0x1.e9733cp-21f, 0.0f,
     0x1.93cc18p-73f, 0x1.4556a8p-53f, 0x1.a1609ep-89f, 0.0f, 0x1.24a4fp-91f, 0.0f,
     0x1.267378p-54f, 0x1.200014p-87f, 0x1.c413c2p-105f, 0x1.e5a246p-62f,
     0x1.c53024p-13f, 0x1.896c5ep-42f, 0.0f, 0x1.8aada6p-21f, 0x1.a272bcp-34f, 0.0f,
     0.0f, 0x1.df066p-46f, 0x1.bc0c08p-55f, 0x1.b3edfap-72f, 0.0f, 0.0f, 0.0f,
     0x1.1cc342p-89f, 0.0f, 0x1.f52bdp-89f, 0.0f, 0.0f, 0x1.2d1932p-103f, 0.0f, 0.0f,
     0x1.93d36cp-38f, 0.0f, 0x1.230d98p-35f, 0x1.383c34p-77f, 0x1.1dd858p-48f,
     0x1.322a3ep-102f, 0.0f, 0x1.ef21eap-88f, 0x1.fb9a64p-97f, 0.0f, 0x1.737db4p-116f,
     0x1.fae854p-6f, 0x1.5ba11ep-75f, 0x1.ac64acp-111f, 0x1.d304eep-49f, 0.0f,
     0x1.d623bap-7f, 0x1.d45ef2p-16f, 0x1.b17d62p-53f, 0x1.8ee4dcp-43f,
     0x1.1ceb6ap-89f, 0x1.b9ed9cp-107f, 0.0f, 0x1.1906bp-102f, 0x1.a85152p-63f,
     0x1.57b95ep-71f, 0x1.31c404p-79f, 0x1.0c58fcp-103f, 0x1.dc5e5ap-70f,
     0x1.3274ecp-76f, 0x1.6e6942p-48f, 0x1.7ed576p-77f, 0.0f, 0x1.92f2fcp-35f, 0.0f,
     0x1.71eb7p-81f, 0x1.030b52p-28f, 0x1.91aebcp-66f, 0x1.58b626p-34f,
     0x1.ab79dep-9f, 0.0f, 0x1.5e4112p-7f, 0.0f, 0.0f, 0x1.dc51eap-58f, 0.0f, 0.0f,
     0x1.7c0d62p-34f, 0x1.994608p-37f, 0.0f, 0x1.9c2018p-6f, 0.0f, 0x1.065302p-42f,
     0.0f, 0.0f, 0.0f, 0x1.c47e74p-3f, 0.0f, 0.0f, 0.0f, 0x1.d28c1ap-112f, 0.0f,
     0x1.b3dbep-123f, 0x1.766c1ap-75f, 0x1.3a7c24p-27f, 0.0f, 0x1.e8e7bp-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3dad2p-48f, 0x1.c0d44cp-11f,
     0.0f, 0x1.d2336p-30f, 0.0f, 0.0f, 0x1.68696p-91f, 0x1.eb7788p-105f,
     0x1.6c972ep-32f, 0x1.823488p-14f, 0x1.f95dfp-50f, 0.0f, 0x1.4ca1aep-64f,
     0x1.5c98d2p-60f, 0.0f, 0.0f, 0x1.2fae2ep-112f, 0.0f, 0.0f, 0x1.e6781ap-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9f68a2p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5fec58p-27f, 0.0f, 0.0f, 0x1.e4c654p-11f, 0.0f, 0x1.4677f4p-126f,
     0x1.a5cb1cp-113f, 0x1.80c19cp-36f, 0.0f, 0x1.6f3a02p-45f, 0.0f, 0.0f,
     0x1.1dcbd6p-91f, 0x1.f874bcp-64f, 0.0f, 0.0f, 0x1.e5ca5p-99f, 0x1.e8c492p-27f,
     0x1.c5d4f4p-80f, 0x1.2e83cep-125f, 0.0f, 0x1.80631p-76f, 0.0f, 0x1.a17c52p-69f,
     0x1.f3e74p-94f, 0.0f, 0x1.b3e29ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04c172p-19f,
     0x1.7d7ffap-95f, 0x1.b94d5ep-120f, 0x1.847152p-25f, 0.0f, 0.0f, 0.0f,
     0x1.7a812p-106f, 0x1.7b5446p-32f, 0.0f, 0x1.8dcc3p-38f, 0x1.1b3c62p-110f,
     0x1.f4a122p-115f, 0x1.df3ac6p-42f, 0x1.0a236cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.9dde4cp-103f, 0x1.f53728p-29f, 0x1.a98e5cp-36f, 0x1.45a5d6p-126f,
     0x1.2174dp-78f, 0.0f, 0x1.cdeb26p-8f, 0.0f, 0.0f, 0x1.3df99p-125f,
     0x1.f3c5b6p-42f, 0x1.daf6fp-70f, 0x1.ea7b8cp-76f, 0x1.990914p-5f, 0.0f, 0.0f,
     0.0f, 0x1.1a771ap-25f, 0x1.04a8ccp-79f, 0x1.ec2c78p-106f, 0.0f, 0.0f,
     0x1.75233p-13f, 0.0f, 0.0f, 0x1.449956p-82f, 0x1.f8abb2p-100f, 0.0f,
     0x1.c68a9ap-106f, 0x1.0e856cp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.641c8ap-45f, 0.0f,
     0x1.e4aa38p-114f, 0x1.113a76p-49f, 0.0f, 0x1.6b9f7p-62f, 0x1.802304p-14f,
     0x1.7513dp-50f, 0.0f, 0x1.0c2a3p-80f, 0x1.8260aep-55f, 0x1.6e2d38p-2f,
     0x1.1cfcf4p-81f, 0x1.a32f6cp-6f, 0x1.2fd294p-120f, 0.0f, 0x1.8e5a7p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.52ebep-58f, 0x1.077dbp-39f, 0x1.ba039ep-92f, 0.0f,
     0.0f, 0x1.7e7ae6p-37f, 0x1.8e1552p-21f, 0.0f, 0x1.92565p-112f, 0.0f,
     0x1.0fd5p-49f, 0.0f, 0.0f, 0x1.9a4b5ap-11f, 0x1.8c4b02p-27f, 0x1.51b85cp-77f,
     0x1.0dd04ap-98f, 0.0f, 0x1.5e9228p-108f, 0.0f, 0x1.a9dfb4p-105f, 0x1.d6d2aap-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.163676p-125f, 0x1.3f6f5cp-100f, 0.0f,
     0x1.b570e8p-125f, 0.0f, 0.0f, 0x1.c74c98p-13f, 0.0f, 0x1.d0d95ep-32f, 0.0f, 0.0f,
     0x1.12bad6p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fdc86p-9f, 0x1.fc0e38p-8f, 0.0f,
     0.0f, 0x1.0056c6p-83f, 0x1.2b5266p-121f, 0.0f, 0.0f, 0.0f, 0x1.6191d6p-21f, 0.0f,
     0x1.bfc738p-117f, 0x1.19bc4cp-8f, 0.0f, 0x1.7de5ap-79f, 0.0f, 0.0f,
     0x1.b68d44p-121f, 0x1.d204c2p-90f, 0.0f, 0.0f, 0x1.459e58p-21f, 0x1.92fedep-114f,
     0x1.80361ap-124f, 0x1.e126a2p-24f, 0x1.a25d4cp-116f, 0.0f, 0.0f, 0x1.31a25p-87f,
     0.0f, 0.0f, 0x1.ef918ap-1f, 0x1.f61c1p-88f, 0x1.d34d4ap-22f, 0.0f,
     0x1.b0077ep-60f, 0.0f, 0x1.febb12p-110f, 0x1.062fbp-95f, 0x1.60381p-126f, 0.0f,
     0x1.e4c0b2p-24f, 0x1.708a38p-34f, 0x1.045f94p-93f, 0x1.7d0a44p-22f,
     0x1.7dd056p-21f, 0.0f, 0x1.63a3d6p-39f, 0x1.6d08ep-99f, 0x1.eb1122p-88f,
     0x1.719fe6p-116f, 0x1.c3100ep-55f, 0x1.4f9d64p-75f, 0.0f, 0.0f, 0.0f,
     0x1.6f998ap-98f, 0x1.9a1be2p-50f, 0.0f, 0.0f, 0x1.615a2ep-33f, 0.0f,
     0x1.186176p-115f, 0.0f, 0x1.179588p-93f, 0x1.de1342p-74f, 0.0f, 0x1.6e8f18p-26f,
     0x1.fd8c4ap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27a8c2p-107f, 0x1.145f22p-45f,
     0x1.119c4p-40f, 0x1.0838c2p-12f, 0x1.e12feep-48f, 0.0f, 0x1.5faac2p-54f,
     0x1.38736ap-24f, 0.0f, 0.0f, 0.0f, 0x1.718a4ep-51f, 0x1.da4696p-32f,
     0x1.2c61cap-90f, 0.0f, 0.0f, 0x1.283f52p-88f, 0.0f, 0.0f, 0.0f, 0x1.53c7f4p-5f,
     0x1.b22f2p-93f, 0.0f, 0x1.046a3ep-45f, 0x1.2f0c48p-88f, 0.0f, 0x1.bc1e12p-114f,
     0.0f, 0x1.1e6062p-44f, 0.0f, 0.0f, 0x1.8d1ad8p-118f, 0.0f, 0x1.66a966p-80f,
     0x1.1d7522p-4f, 0.0f, 0x1p0f, 0x1.1f51bp-119f, 0.0f, 0x1.b7fdf4p-71f,
     0x1.a3b21p-7f, 0.0f, 0.0f, 0x1.664386p-64f, 0x1.ca7956p-49f, 0x1.5f42f8p-106f,
     0.0f, 0.0f, 0x1.1de31p-83f, 0x1.65e348p-34f, 0x1.7a7772p-53f, 0x1.794cd6p-95f,
     0x1.0af6ccp-25f, 0x1.1245a2p-98f, 0x1.2cae6p-125f, 0x1.b3c26ep-95f,
     0x1.0db496p-3f, 0x1.1ad87cp-10f, 0.0f, 0x1.4a3a4cp-70f, 0.0f, 0x1.93dcdep-90f,
     0.0f, 0x1.83b656p-77f, 0x1.9eb79ep-16f, 0.0f, 0.0f, 0x1.33b02p-103f, 0.0f, 0.0f,
     0x1.49e97cp-122f, 0.0f, 0x1.6b8984p-116f, 0.0f, 0.0f, 0x1.a8206p-89f,
     0x1.82fb4ap-73f, 0x1.4a306ep-107f, 0.0f, 0x1.c48998p-123f, 0x1.e1767ap-53f, 0.0f,
     0.0f, 0x1.ec8e3ep-4f, 0.0f, 0x1.4b5eecp-104f, 0x1.151d48p-25f, 0.0f,
     0x1.ff7ad8p-65f, 0.0f, 0x1.4e78d2p-41f, 0x1.e3db8p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.78aa6cp-98f, 0x1.d2197p-52f, 0x1.d11b4ap-123f, 0.0f, 0.0f, 0x1.4b9cccp-66f,
     0x1.9d25aep-46f, 0.0f, 0x1.9bd6e2p-32f, 0.0f, 0x1.ab3b76p-69f, 0.0f,
     0x1.0f443ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06089ep-31f,
     0x1.5d93c4p-9f, 0x1.de3e06p-46f, 0x1.28b60cp-89f, 0.0f, 0.0f, 0x1.3c7f76p-115f,
     0x1.5f0692p-117f, 0.0f, 0x1.018ef4p-66f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_fmodf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_fmodf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fmodf1_purecfma bench acc %a\n", global_bench_acc);
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
