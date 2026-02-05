/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf1_purecfma.c --function \
 *     Sleef_finz_sqrtf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.5b03ecp-78f, 0.0f, 0.0f, 0x1.94f742p-100f, 0.0f, 0x1.250c5p-33f,
     0.0f, 0.0f, 0x1.540ddap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9eab2p-60f,
     0x1.37269ep-29f, 0.0f, 0.0f, 0x1.d3bfd2p-1f, 0x1.bc4d64p-64f, 0x1.229332p-23f,
     0.0f, 0.0f, 0x1p0f, 0x1.85ba38p-74f, 0.0f, 0x1.ed08d8p-116f, 0x1.70241p-43f,
     0x1.4ce25cp-59f, 0x1.307196p-100f, 0.0f, 0.0f, 0x1.ab09eap-119f, 0x1.be06b2p-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.502d16p-39f, 0x1.3cd0cep-27f, 0.0f, 0.0f,
     0x1.1c621ap-63f, 0.0f, 0.0f, 0x1.65ebcap-66f, 0.0f, 0.0f, 0x1.f7e8d6p-114f,
     0x1.f9976ap-108f, 0x1.1868d6p-87f, 0.0f, 0x1.ff19e8p-4f, 0.0f, 0x1.5e3b78p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5bb6ep-48f, 0.0f, 0x1.314d7cp-52f, 0.0f, 0.0f,
     0x1.e2add4p-12f, 0x1.1ac16cp-24f, 0.0f, 0.0f, 0.0f, 0x1.fc7becp-17f,
     0x1.fa3e46p-123f, 0.0f, 0x1.327dacp-4f, 0x1.22ca8cp-45f, 0x1.42e35ep-33f,
     0x1.c2e824p-92f, 0.0f, 0x1.fcd05ap-90f, 0.0f, 0x1.62163cp-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cec34ap-9f, 0x1.ec2914p-8f, 0x1.246ec2p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06ef6ep-123f, 0.0f, 0.0f, 0.0f, 0x1.d74162p-92f, 0x1p0f, 0x1.690e1cp-112f,
     0x1.286596p-111f, 0x1.804df2p-53f, 0x1.e20388p-14f, 0.0f, 0x1.75d4a4p-104f, 0.0f,
     0x1.b6badp-125f, 0x1.1b8848p-64f, 0x1.972f0ap-119f, 0x1.a34144p-1f,
     0x1.386eb8p-73f, 0x1.f3b81p-106f, 0.0f, 0x1.addc92p-77f, 0.0f, 0.0f,
     0x1.c8fdb6p-65f, 0.0f, 0.0f, 0x1.eaebf2p-61f, 0x1.1f0d7ap-87f, 0x1.d56f22p-7f,
     0.0f, 0x1.5e2828p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a0304p-77f, 0x1.daa0ep-24f,
     0.0f, 0x1.8a0fecp-84f, 0x1.848b38p-19f, 0x1.18d082p-99f, 0.0f, 0x1.a4d73ep-113f,
     0x1.489edp-47f, 0.0f, 0x1.bec15ap-92f, 0x1.15d9dcp-118f, 0x1.f71656p-117f, 0.0f,
     0.0f, 0x1.944ccep-109f, 0x1.29390ep-110f, 0x1.d39f4p-37f, 0.0f, 0.0f,
     0x1.d836cep-96f, 0.0f, 0.0f, 0.0f, 0x1.21997p-73f, 0.0f, 0.0f, 0.0f,
     0x1.4cde68p-104f, 0x1.c8c3c8p-46f, 0.0f, 0.0f, 0x1.82a6b4p-94f, 0x1.53c5e4p-113f,
     0.0f, 0x1.4ebd78p-36f, 0x1.00c608p-56f, 0.0f, 0.0f, 0x1.db0954p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.11a26ap-8f, 0x1.0b637p-78f, 0.0f, 0.0f, 0.0f, 0x1.120584p-87f,
     0x1.cf37eap-34f, 0.0f, 0x1.06498p-120f, 0x1.ce4b28p-124f, 0.0f, 0x1.a2aa78p-78f,
     0x1.a0b8ap-115f, 0x1.b26bb6p-109f, 0.0f, 0.0f, 0x1.a4c8d2p-37f, 0x1.af32fp-99f,
     0.0f, 0.0f, 0.0f, 0x1.b1cafap-99f, 0.0f, 0.0f, 0x1.c29052p-47f, 0x1.2eb79ap-31f,
     0x1.f7e95ep-32f, 0.0f, 0.0f, 0x1.bf0b74p-4f, 0.0f, 0x1.51fee8p-49f,
     0x1.0081eap-32f, 0x1.86ed54p-80f, 0.0f, 0x1.041f0cp-5f, 0.0f, 0.0f, 0.0f,
     0x1.3d116cp-33f, 0x1.1ebcc2p-121f, 0.0f, 0x1.2399ecp-61f, 0x1.accc1ap-3f,
     0x1.3a01d8p-50f, 0.0f, 0x1.0cae4ap-65f, 0x1.ddb602p-67f, 0.0f, 0x1.8a9554p-86f,
     0.0f, 0x1.2d4786p-40f, 0x1.01c5aep-70f, 0.0f, 0.0f, 0x1.59dd06p-111f, 0x1p0f,
     0.0f, 0x1.964c86p-122f, 0x1.0fab28p-115f, 0x1.1f07d4p-2f, 0.0f, 0.0f, 0.0f,
     0x1.910384p-53f, 0x1.3dfa06p-100f, 0x1.4d9f2ep-35f, 0x1.616e2cp-120f,
     0x1.c8a3aap-99f, 0x1.c12eb4p-16f, 0x1.8ee292p-96f, 0.0f, 0x1.2756d8p-4f, 0.0f,
     0.0f, 0.0f, 0x1.428036p-63f, 0x1.dfa17cp-17f, 0x1.1b301ep-113f, 0.0f,
     0x1.454586p-65f, 0.0f, 0.0f, 0.0f, 0x1.138f1p-102f, 0.0f, 0x1.89f7bap-53f, 0.0f,
     0.0f, 0x1.993074p-93f, 0.0f, 0.0f, 0x1.fbfa9ep-98f, 0x1.36853ap-90f, 0.0f,
     0x1.e4c95p-85f, 0.0f, 0.0f, 0x1.38310cp-71f, 0x1.6a06fp-16f, 0x1.58437p-50f,
     0.0f, 0x1.27ed78p-110f, 0x1.8e79c6p-49f, 0.0f, 0.0f, 0x1.10c26ap-17f,
     0x1.37a464p-6f, 0.0f, 0x1.7a8c22p-96f, 0x1.b238aap-119f, 0x1.dfbb54p-21f,
     0x1.0382fp-116f, 0x1.b365b4p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7438bep-116f,
     0x1.71cc4ap-111f, 0x1.c96384p-98f, 0x1.82e77ap-15f, 0x1.411358p-111f,
     0x1.d6425p-115f, 0x1.298e7cp-125f, 0.0f, 0x1.3b8884p-7f, 0x1.dd5e6cp-112f,
     0x1.031ab8p-50f, 0x1.80ee3ap-84f, 0x1.108736p-52f, 0x1.91d216p-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c938cap-94f, 0.0f, 0.0f, 0.0f, 0x1.bade1ap-63f, 0.0f,
     0x1.b18542p-70f, 0.0f, 0.0f, 0.0f, 0x1.d6155cp-113f, 0.0f, 0.0f,
     0x1.e4afb6p-126f, 0x1.7167fp-53f, 0x1.28dea4p-44f, 0x1.44c158p-125f,
     0x1.64293ap-6f, 0.0f, 0x1.275a34p-102f, 0.0f, 0x1.a4448p-64f, 0x1.4caba2p-51f,
     0x1.684a3ap-49f, 0x1.730cd8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f9b06p-13f,
     0.0f, 0x1.cd47ecp-36f, 0.0f, 0x1.f7e41ep-51f, 0.0f, 0.0f, 0.0f, 0x1.c2738ep-20f,
     0.0f, 0x1.c9022ap-36f, 0.0f, 0x1.ad4f48p-54f, 0.0f, 0x1.84fb72p-112f,
     0x1.185612p-97f, 0.0f, 0x1.577c7p-38f, 0.0f, 0.0f, 0x1.8de8b2p-110f, 0.0f, 0.0f,
     0x1.7053cp-62f, 0x1.8a431p-34f, 0x1.7be896p-126f, 0.0f, 0.0f, 0x1.d5e1f6p-99f,
     0x1.b3eeaap-111f, 0x1.7f8f2ep-82f, 0x1.653468p-111f, 0x1.36926cp-31f, 0.0f,
     0x1.bea3dcp-16f, 0x1.fcc058p-54f, 0x1.fa5cc4p-123f, 0x1.119d1p-85f, 0.0f, 0.0f,
     0x1.e0bf1cp-86f, 0x1.23e2dp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.795008p-124f, 0x1.5bd9cp-71f, 0x1.715c5ep-5f, 0x1.5007b6p-110f, 0.0f,
     0x1.1a3e36p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40b862p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f2b2f4p-91f, 0x1.fc090ep-83f, 0x1.772434p-68f, 0x1.54da3ep-73f,
     0x1.503b6p-66f, 0.0f, 0x1.cc73cp-59f, 0x1.517a12p-111f, 0.0f, 0x1.c968f2p-46f,
     0.0f, 0.0f, 0x1.3bdfb6p-9f, 0.0f, 0.0f, 0x1.b8ffdp-28f, 0x1.0de42p-117f, 0.0f,
     0x1.f00d84p-34f, 0.0f, 0x1.4701f6p-11f, 0x1.507c9ap-118f, 0x1.b7991p-28f,
     0x1.728c4ep-33f, 0x1.d5bc22p-108f, 0x1.c86cacp-20f, 0x1.95224ap-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b9eaap-66f, 0.0f, 0x1.804bf4p-2f, 0.0f,
     0x1.f1883p-58f, 0.0f, 0.0f, 0x1.a669f2p-73f, 0x1.a9131p-76f, 0.0f,
     0x1.6c0d04p-42f, 0.0f, 0x1.b74782p-32f, 0.0f, 0x1.f1fe7cp-80f, 0x1.906p-109f,
     0.0f, 0.0f, 0.0f, 0x1.6f2468p-18f, 0.0f, 0x1.3b0c46p-80f, 0x1.47457cp-31f, 0.0f,
     0x1.a300d8p-108f, 0x1.5a1ebap-17f, 0.0f, 0x1.99177cp-22f, 0.0f, 0.0f,
     0x1.bcd2bp-16f, 0.0f, 0.0f, 0x1.27748p-29f, 0x1.a75b34p-16f, 0.0f, 0.0f, 0.0f,
     0x1.5d49dep-66f, 0x1.7dd98ep-9f, 0.0f, 0x1.fe93c8p-52f, 0.0f, 0x1.7f09a4p-45f,
     0.0f, 0.0f, 0x1.3b1baap-113f, 0x1.2d338ap-11f, 0x1.4ee824p-119f, 0x1.959fc4p-80f,
     0x1.910ddp-62f, 0.0f, 0x1.d8399ap-93f, 0.0f, 0x1.bf7bfep-29f, 0.0f, 0.0f,
     0x1.4bfc32p-55f, 0.0f, 0.0f, 0.0f, 0x1.dee79cp-67f, 0.0f, 0x1.c723c2p-11f, 0.0f,
     0x1.1e01cep-90f, 0x1.5af96ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.621f2ep-11f, 0.0f,
     0.0f, 0.0f, 0x1.5d5304p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3daeap-105f,
     0.0f, 0x1.6078aep-84f, 0x1.2f723cp-60f, 0x1.8d5f54p-39f, 0.0f, 0x1.4d7a6cp-12f,
     0x1.fea1p-51f, 0x1.eeacf6p-110f, 0x1.4d760ep-86f, 0.0f, 0x1.eb84dep-69f, 0.0f,
     0x1.2f4a56p-7f, 0.0f, 0.0f, 0x1.f30f6ep-40f, 0.0f, 0x1.7bcb72p-13f, 0.0f,
     0x1.0682fcp-86f, 0x1.c24404p-19f, 0x1.63b7fcp-9f, 0.0f, 0.0f, 0.0f,
     0x1.d3fa02p-95f, 0.0f, 0x1.88b61cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.32367ep-90f, 0.0f, 0x1.e752a2p-49f, 0.0f, 0x1.7e304ep-126f,
     0x1.99921ap-91f, 0x1.ad9bc8p-40f, 0.0f, 0x1.0737b8p-33f, 0x1.254f7ep-36f,
     0x1.281988p-102f, 0.0f, 0x1.fb61d8p-46f, 0.0f, 0x1.8015bap-75f, 0.0f,
     0x1.89dd26p-4f, 0x1.5f942ep-9f, 0x1.9fc174p-95f, 0x1.a26332p-48f, 0.0f, 0.0f,
     0x1.afd0e2p-73f, 0x1.cbcb6ep-96f, 0x1.c11758p-12f, 0x1.b87cfap-29f,
     0x1.1adbf8p-53f, 0x1.653e68p-29f, 0x1.9cd86p-14f, 0x1.9a2072p-29f,
     0x1.2733f8p-38f, 0x1.d5bacap-69f, 0.0f, 0x1.42ef0ap-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.96f4fep-107f, 0.0f, 0x1.48db1p-13f, 0x1.656134p-86f, 0x1.42143cp-28f,
     0x1.91b798p-105f, 0x1.87e41p-23f, 0x1.2dd9b8p-50f, 0.0f, 0.0f, 0x1.7a2694p-86f,
     0x1.6b84bp-56f, 0x1.5007b4p-83f, 0x1.5d57e8p-45f, 0.0f, 0x1.33550ap-78f,
     0x1.ae1f2p-114f, 0.0f, 0x1.060136p-110f, 0x1.e97192p-47f, 0x1.bf47e2p-77f,
     0x1.10bbe8p-101f, 0.0f, 0x1.8eff36p-83f, 0.0f, 0.0f, 0x1.a0b9e8p-86f,
     0x1.0eecbcp-75f, 0x1.5ce8bp-91f, 0x1.ea5acp-65f, 0x1.4241cp-15f, 0x1.77e35ep-7f,
     0.0f, 0x1.778484p-13f, 0.0f, 0.0f, 0.0f, 0x1.a66c9p-76f, 0.0f, 0x1.08d5dap-111f,
     0.0f, 0x1.fabeb4p-117f, 0.0f, 0.0f, 0x1.fce3f2p-90f, 0.0f, 0x1.83f604p-18f, 0.0f,
     0x1.a8cde6p-69f, 0x1.d20b6ep-105f, 0.0f, 0.0f, 0.0f, 0x1.2c9e64p-64f,
     0x1.044a12p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70e0eap-113f,
     0x1.7423a8p-103f, 0.0f, 0x1.22306cp-53f, 0x1.c2f128p-112f, 0x1.916b5ap-83f, 0.0f,
     0x1.008e14p-48f, 0x1.c14bc6p-74f, 0x1.b4a606p-65f, 0x1.b10914p-119f,
     0x1.e94bacp-68f, 0.0f, 0x1.56efd4p-115f, 0x1.6e262p-99f, 0x1.0a718cp-27f,
     0x1.d343dap-91f, 0.0f, 0x1.730004p-70f, 0x1.9e26ep-19f, 0.0f, 0.0f, 0.0f,
     0x1.d741c2p-5f, 0x1.51b038p-19f, 0x1.c079fcp-41f, 0.0f, 0x1.67314p-124f,
     0x1.98170ep-3f, 0x1.1a460cp-45f, 0x1.15003cp-108f, 0.0f, 0x1.e6e6acp-34f,
     0x1.d28ddcp-47f, 0x1.637cd6p-2f, 0.0f, 0.0f, 0.0f, 0x1.0b3f84p-102f, 0.0f, 0.0f,
     0x1.4347acp-88f, 0.0f, 0.0f, 0x1.aef396p-22f, 0x1.2bd7b4p-84f, 0.0f,
     0x1.300abcp-29f, 0.0f, 0.0f, 0x1.76a9bcp-64f, 0x1.ace7b2p-48f, 0.0f, 0.0f,
     0x1.6afd18p-14f, 0.0f, 0.0f, 0x1.4be94ep-25f, 0x1.9317dap-85f, 0x1.524b1ap-25f,
     0x1.223af4p-110f, 0.0f, 0.0f, 0x1.13bf0ep-56f, 0x1.808bb6p-91f, 0.0f,
     0x1.7c1d2ep-65f, 0x1.77be82p-25f, 0x1.060fa4p-37f, 0x1.6dcf88p-16f,
     0x1.b0955cp-62f, 0x1.ca7972p-38f, 0.0f, 0.0f, 0.0f, 0x1.089ebp-48f,
     0x1.8f61ccp-35f, 0.0f, 0x1.8b4c3p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.088b62p-55f,
     0x1.92c332p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.802cb2p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f9bf5ap-45f, 0x1.932662p-119f, 0x1.d44386p-99f, 0x1.8f8e2cp-11f,
     0x1.e239c2p-121f, 0x1.7b2798p-32f, 0x1.92f502p-43f, 0x1.0c89a2p-112f,
     0x1.2e5ecap-49f, 0.0f, 0x1.6be32ep-17f, 0x1.c4a8bp-105f, 0.0f, 0x1.a54dbep-116f,
     0x1.074a6p-42f, 0x1.31d3d2p-85f, 0.0f, 0x1.12971p-59f, 0x1.fab0ecp-76f, 0.0f,
     0x1.535eeap-22f, 0x1.c02736p-64f, 0x1.e2cb7ep-60f, 0x1.3cb1aap-79f, 0.0f,
     0x1.57c404p-93f, 0x1.38ca12p-66f, 0x1.ee417ep-103f, 0x1.57fa4p-75f,
     0x1.d0c8a2p-8f, 0.0f, 0.0f, 0x1.811d5ap-16f, 0x1.269504p-4f, 0.0f, 0.0f,
     0x1.75458cp-73f, 0.0f, 0.0f, 0x1.ddb30ap-77f, 0x1.b7fe9cp-12f, 0.0f, 0.0f,
     0x1.9a74e4p-80f, 0x1.393f94p-91f, 0.0f, 0.0f, 0.0f, 0x1.2d20d2p-123f,
     0x1.82dbb8p-28f, 0x1.d166c4p-9f, 0x1.5e8ffp-52f, 0x1.803f12p-30f, 0.0f,
     0x1.c42664p-19f, 0x1.cf7528p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8554ap-26f, 0.0f,
     0.0f, 0x1.df0f96p-116f, 0x1.844cdp-71f, 0.0f, 0x1.2456bep-8f, 0.0f,
     0x1.0bb936p-60f, 0.0f, 0x1.acd09ep-68f, 0x1.b595ccp-5f, 0x1.24fee2p-78f, 0.0f,
     0.0f, 0.0f, 0x1.0b128ep-78f, 0.0f, 0x1.721942p-122f, 0x1.f52486p-67f,
     0x1.fa301cp-62f, 0x1p0f, 0x1.78f69ap-42f, 0x1.074696p-42f, 0x1.4d7064p-109f,
     0.0f, 0x1.acae7cp-55f, 0x1.ccee4ap-56f, 0.0f, 0x1.65bfcep-27f, 0.0f, 0.0f, 0.0f,
     0x1.ecdfc4p-106f, 0.0f, 0x1.88c3eap-68f, 0.0f, 0x1.9bf9c4p-49f, 0.0f,
     0x1.76d832p-7f, 0x1.de3d72p-43f, 0.0f, 0.0f, 0x1.c870b4p-71f, 0x1.6be468p-7f,
     0.0f, 0.0f, 0.0f, 0x1.a57c2cp-84f, 0.0f, 0.0f, 0x1.c9ce9ap-89f, 0.0f,
     0x1.a2160cp-109f, 0.0f, 0.0f, 0x1.07a4c2p-81f, 0.0f, 0x1.95a754p-28f, 0.0f,
     0x1.397ec2p-107f, 0.0f, 0x1.f26042p-97f, 0x1.244068p-8f, 0x1.ceb354p-105f,
     0x1.81b3a4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd92d6p-24f, 0.0f, 0.0f,
     0x1.4779dep-78f, 0x1.a7bee8p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cf86cp-23f, 0x1.27be46p-69f, 0.0f, 0x1.52baecp-43f, 0x1.c31f84p-32f,
     0x1.49e512p-72f, 0x1.b96664p-79f, 0.0f, 0.0f, 0x1.02c4cap-24f, 0x1.5b42a4p-29f,
     0.0f, 0x1.a7c778p-112f, 0x1.0d0e2ep-108f, 0.0f, 0x1.57dee4p-92f, 0x1.8bab1cp-30f,
     0x1.984b78p-54f, 0x1.c787dep-20f, 0x1.2c0e26p-118f, 0x1.d187c4p-108f,
     0x1.60c8e4p-81f, 0.0f, 0.0f, 0.0f, 0x1.69e50ap-42f, 0x1.f81ebcp-39f, 0.0f,
     0x1.122c3cp-120f, 0.0f, 0.0f, 0x1.63578ap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e994dcp-20f, 0.0f, 0.0f, 0x1.ea2718p-107f, 0x1.1e091ep-110f, 0.0f, 0.0f,
     0x1.4e43ep-83f, 0x1.254cd4p-5f, 0x1.d65bd6p-100f, 0.0f, 0.0f, 0x1.901b9p-47f,
     0x1.81f232p-70f, 0.0f, 0x1.46266ap-32f, 0.0f, 0.0f, 0x1.b21a5cp-32f,
     0x1.845e94p-57f, 0x1.97544cp-14f, 0x1.8d929cp-18f, 0.0f, 0x1.6369f4p-95f, 0.0f,
     0.0f, 0x1.708c4cp-90f, 0x1.1c36cp-86f, 0x1.3ae69p-71f, 0x1.077356p-106f, 0.0f,
     0x1.2b2d1cp-15f, 0x1.3f8012p-73f, 0x1.251ce6p-22f, 0.0f, 0x1.3e37dep-48f,
     0x1.75c642p-38f, 0x1.8b667ap-65f, 0.0f, 0x1.c8bfbcp-48f, 0x1.644efep-114f, 0.0f,
     0x1.9c9abep-40f, 0x1.0b1e1ap-81f, 0x1.c7bfb4p-22f, 0.0f, 0x1.75e984p-109f,
     0x1.0b8964p-51f, 0.0f, 0x1.c090a4p-28f, 0.0f, 0x1.f99208p-5f, 0.0f,
     0x1.51b63p-15f, 0.0f, 0x1.e2e75ap-97f, 0x1.3352d8p-35f, 0.0f, 0x1.213378p-16f,
     0x1.59298cp-99f, 0x1.7250e8p-24f, 0.0f, 0.0f, 0x1.714764p-15f, 0.0f,
     0x1.1c664ep-117f, 0.0f, 0.0f, 0x1.e1c0fcp-96f, 0x1.7de264p-33f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf1_purecfma(tmp0);
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
    printf("Sleef_finz_sqrtf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf1_purecfma bench acc %a\n", global_bench_acc);
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
