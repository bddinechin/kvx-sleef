/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf1_u35purecfma.c --function \
 *     Sleef_finz_coshf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.72c05p-20f, 0.0f, 0x1.b06058p-90f, 0x1.c56c0cp-53f, 0x1.80ba2cp-102f, 0.0f,
     0x1.3d9b74p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b303cap-23f, 0x1.d5972ep-92f, 0.0f,
     0x1.9d9c22p-2f, 0x1.02c9fp-76f, 0x1.0355eap-28f, 0.0f, 0.0f, 0.0f,
     0x1.e5a2b6p-9f, 0x1.8246e8p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6932ep-6f, 0.0f, 0.0f, 0x1.6f719p-97f,
     0x1.fbb12cp-66f, 0x1.fad7ap-39f, 0x1.7d4918p-102f, 0.0f, 0.0f, 0x1.94700ap-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2bce2p-124f, 0.0f, 0x1.b970acp-121f, 0x1.8172ep-91f,
     0x1.8fc434p-101f, 0x1.5f7cc2p-98f, 0.0f, 0x1.52e524p-119f, 0.0f, 0x1.a3b758p-80f,
     0x1.0a42fep-73f, 0x1.dcb8e4p-68f, 0x1.98c46cp-76f, 0x1.0cdd68p-70f,
     0x1.b9545ap-57f, 0x1.03db4ap-86f, 0x1.3e67ap-73f, 0x1.79ca36p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9c093cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2de52p-73f, 0x1.c9a94cp-57f, 0x1.5614a6p-29f, 0.0f, 0x1.284804p-126f,
     0x1.19154ep-118f, 0.0f, 0.0f, 0x1.483ce2p-118f, 0.0f, 0x1.79da46p-75f, 0.0f,
     0x1.54b5c2p-32f, 0x1.b5d0bcp-36f, 0.0f, 0x1.511b88p-61f, 0x1.f874d8p-88f,
     0x1.fd3d2cp-110f, 0.0f, 0.0f, 0x1.1fae5cp-40f, 0.0f, 0x1.077f2cp-109f,
     0x1.2ce112p-103f, 0.0f, 0x1.00c20cp-6f, 0.0f, 0.0f, 0.0f, 0x1.f2b692p-77f, 0.0f,
     0.0f, 0x1.328454p-7f, 0x1.a2b82ap-57f, 0.0f, 0.0f, 0.0f, 0x1.703c0ap-80f, 0.0f,
     0.0f, 0x1.4d2cap-35f, 0.0f, 0.0f, 0.0f, 0x1.3ba8b2p-15f, 0x1.dd1848p-67f, 0.0f,
     0x1.c98f3cp-37f, 0.0f, 0x1.8d0d4ap-53f, 0.0f, 0x1.c840fep-24f, 0.0f, 0.0f, 0.0f,
     0x1.f0e5f2p-40f, 0.0f, 0x1.b70a66p-78f, 0x1.428efap-108f, 0x1.b6e2d8p-12f, 0.0f,
     0.0f, 0.0f, 0x1.1b7b2p-79f, 0x1.faa3cp-42f, 0.0f, 0.0f, 0x1.71b83ep-84f,
     0x1.fb0694p-12f, 0x1.883d66p-119f, 0x1.6397fp-119f, 0x1.9974c4p-19f, 0.0f, 0.0f,
     0.0f, 0x1.6ba4a4p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1126e4p-105f, 0.0f, 0.0f,
     0x1.a0a584p-70f, 0.0f, 0x1.2cd7cep-78f, 0.0f, 0.0f, 0.0f, 0x1.d7e5a4p-16f,
     0x1.08ecd4p-59f, 0x1.aef7d2p-56f, 0.0f, 0x1.0a960ap-4f, 0.0f, 0.0f,
     0x1.819486p-82f, 0x1.5cfda2p-91f, 0.0f, 0.0f, 0x1.232edcp-81f, 0x1.36fe8ep-20f,
     0x1.f07cbap-112f, 0x1.21f272p-20f, 0x1.3b6b3ep-124f, 0.0f, 0.0f, 0x1.e4ac5ap-61f,
     0x1.b44c16p-52f, 0x1.4138d2p-45f, 0.0f, 0x1.d36d7cp-67f, 0x1.80a014p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4b335ap-58f, 0.0f, 0x1.3c9e82p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c3a86p-97f, 0.0f, 0.0f, 0x1.949962p-70f, 0.0f, 0x1.2a92ccp-21f,
     0x1.c8a598p-17f, 0.0f, 0.0f, 0x1.51c582p-53f, 0.0f, 0x1.232ceap-48f,
     0x1.73949cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68c8bep-106f, 0.0f, 0.0f,
     0x1.599f76p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42d952p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.606042p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c954p-79f, 0.0f,
     0x1.b0546cp-117f, 0.0f, 0x1.700866p-70f, 0.0f, 0x1.5873fep-91f, 0.0f,
     0x1.a0a17ep-56f, 0x1.967bb2p-72f, 0.0f, 0.0f, 0.0f, 0x1.7daf7ap-62f,
     0x1.ba4228p-84f, 0.0f, 0.0f, 0x1.139b96p-83f, 0.0f, 0.0f, 0.0f, 0x1.ab1f36p-27f,
     0x1.09a6acp-75f, 0x1.593d9ep-14f, 0.0f, 0.0f, 0x1.bb1b96p-42f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9e17e8p-123f, 0.0f, 0x1.7ba48ap-105f, 0x1.b3a24cp-64f, 0x1.520c9p-15f,
     0.0f, 0x1.9e5a4cp-83f, 0x1.a32a04p-71f, 0x1.fa9b5p-112f, 0.0f, 0x1.92b1fp-101f,
     0.0f, 0.0f, 0x1.c834e4p-7f, 0x1.eb9b1ep-53f, 0.0f, 0x1.b40bc8p-5f, 0.0f,
     0x1.16b91ap-103f, 0.0f, 0x1.21f07cp-23f, 0x1.b9703cp-126f, 0x1.79110cp-93f,
     0x1.837b1ep-112f, 0.0f, 0.0f, 0x1.76d76cp-59f, 0.0f, 0x1.851f8ep-15f, 0.0f,
     0x1.454ddcp-30f, 0x1.12e42ap-53f, 0.0f, 0x1.ec17c8p-77f, 0x1.8ae8dap-57f, 0.0f,
     0x1.39dd34p-44f, 0x1.74ea6p-76f, 0.0f, 0x1.818484p-28f, 0x1.b704c2p-34f, 0.0f,
     0.0f, 0x1.486fdcp-88f, 0.0f, 0x1.9c83ep-25f, 0.0f, 0x1.142a76p-20f,
     0x1.5c18b8p-33f, 0x1.84a0fep-95f, 0.0f, 0x1.df24b8p-80f, 0x1.94963cp-24f, 0.0f,
     0x1.3b4dcep-61f, 0.0f, 0x1.8c406cp-31f, 0.0f, 0x1.39411ap-59f, 0x1.d48d42p-53f,
     0x1.2790c2p-80f, 0.0f, 0.0f, 0x1.5059dap-58f, 0x1.5aa93cp-91f, 0.0f,
     0x1.fa79a6p-44f, 0x1.6348fp-34f, 0.0f, 0x1.5cc976p-44f, 0.0f, 0x1.67e6bcp-23f,
     0.0f, 0x1.7f7fc8p-113f, 0.0f, 0x1.df7d36p-88f, 0x1.9225bep-47f, 0x1.3428c6p-51f,
     0x1.c44adp-96f, 0x1.b3f646p-17f, 0x1.a7905cp-96f, 0.0f, 0x1.791cdp-45f, 0.0f,
     0.0f, 0x1.5cc8b8p-47f, 0x1.87d304p-62f, 0x1.df0af4p-7f, 0x1.b17c7ap-8f,
     0x1.712194p-94f, 0.0f, 0x1.8fe0f2p-125f, 0.0f, 0.0f, 0x1.d596c4p-13f, 0.0f,
     0x1.a7855p-107f, 0x1.caba06p-109f, 0.0f, 0x1.ac1e6ep-7f, 0x1.88934ap-58f, 0.0f,
     0x1.0230d8p-56f, 0x1.1351dcp-50f, 0x1.b300e4p-18f, 0x1.b4fa8p-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e70e6p-105f, 0.0f, 0x1.67248cp-74f, 0x1.810bdap-84f, 0.0f,
     0.0f, 0x1.1601ep-107f, 0.0f, 0.0f, 0.0f, 0x1.7197eap-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.16b658p-91f, 0.0f, 0x1.039854p-107f, 0x1.a9838p-19f, 0.0f, 0.0f, 0.0f,
     0x1.be3d52p-34f, 0x1.c3b0c4p-64f, 0x1.2e62d6p-88f, 0x1.05d5bcp-109f, 0.0f,
     0x1.df920ep-75f, 0x1.671276p-61f, 0x1.277bacp-108f, 0.0f, 0.0f, 0x1.11d378p-84f,
     0x1.e3048ep-109f, 0.0f, 0x1.227002p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79cda4p-1f,
     0.0f, 0.0f, 0x1.61d202p-71f, 0x1.80d6c6p-2f, 0.0f, 0x1.46a9eap-92f, 0.0f, 0.0f,
     0.0f, 0x1.cd37d8p-91f, 0.0f, 0.0f, 0x1.b47e0ep-12f, 0x1.2d5428p-119f, 0.0f,
     0x1.51c442p-27f, 0x1.456d38p-17f, 0x1.31b76ap-58f, 0.0f, 0.0f, 0x1.397eaap-15f,
     0x1.d9f078p-87f, 0x1.a2e196p-65f, 0x1.21dec4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.52cb9p-112f, 0.0f, 0.0f, 0x1.2042c6p-47f, 0.0f, 0x1.3fc73ep-91f,
     0x1.213bd4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8831ap-106f, 0x1.b34b8cp-87f,
     0.0f, 0x1.858612p-44f, 0x1.8fd226p-6f, 0.0f, 0x1.cd8f52p-14f, 0.0f,
     0x1.20181cp-45f, 0x1.3c5dcap-87f, 0x1.ffab44p-28f, 0x1.ec6a6ep-9f,
     0x1.c6516cp-80f, 0.0f, 0x1.6e2fp-90f, 0x1.977688p-123f, 0.0f, 0.0f, 0.0f,
     0x1.13082cp-16f, 0x1.37a48ep-38f, 0.0f, 0.0f, 0x1.deb8e8p-88f, 0x1p0f, 0.0f,
     0x1.ade3ecp-43f, 0x1.59490ap-68f, 0.0f, 0x1.3e28dcp-72f, 0x1.627c1ap-111f,
     0x1.60c728p-103f, 0x1.2d89bap-95f, 0x1.7da65ap-43f, 0x1.e4dec4p-81f, 0.0f,
     0x1.4d53f2p-13f, 0.0f, 0x1.a0b6bcp-8f, 0.0f, 0x1.333182p-71f, 0x1.54432p-121f,
     0x1.aa5e32p-34f, 0.0f, 0.0f, 0x1.2ec05p-24f, 0x1.ef102ep-24f, 0.0f, 0.0f,
     0x1.32aceep-61f, 0.0f, 0x1.24c25ap-21f, 0x1.717054p-45f, 0.0f, 0.0f, 0.0f,
     0x1.4b61e2p-104f, 0.0f, 0.0f, 0.0f, 0x1.512826p-95f, 0.0f, 0x1.c5c196p-77f,
     0x1.a684d6p-44f, 0.0f, 0x1.572e74p-41f, 0x1.9f4656p-114f, 0.0f, 0x1.ea0c7p-36f,
     0.0f, 0x1.c6052cp-76f, 0x1.8228fp-83f, 0.0f, 0.0f, 0.0f, 0x1.9f745p-110f,
     0x1.7ff854p-59f, 0x1.d625c6p-35f, 0.0f, 0x1.2e3d12p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32de5ep-122f, 0x1.17fae8p-33f, 0.0f, 0x1.089d48p-114f, 0x1.e845eep-105f,
     0x1.e02b44p-122f, 0.0f, 0x1.2c24aep-31f, 0.0f, 0x1.d39e3ap-89f, 0.0f,
     0x1.660d32p-42f, 0.0f, 0x1.d10ef8p-28f, 0x1.8f46eap-37f, 0.0f, 0x1.520c3ep-88f,
     0.0f, 0.0f, 0x1.901b84p-3f, 0.0f, 0x1.ca6722p-82f, 0x1.444266p-46f, 0.0f,
     0x1.49abecp-24f, 0x1.a28864p-1f, 0x1.86c432p-86f, 0x1.842446p-58f,
     0x1.f55edp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86930cp-91f, 0.0f,
     0x1.9f0f4ap-45f, 0.0f, 0.0f, 0x1.947e12p-77f, 0x1.7d19fep-98f, 0x1p0f, 0.0f,
     0x1.51050cp-43f, 0.0f, 0.0f, 0.0f, 0x1.ee5864p-46f, 0x1.069106p-59f, 0.0f,
     0x1.7792ecp-48f, 0.0f, 0.0f, 0.0f, 0x1.2b0d6ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c3162p-24f, 0x1.87f9b2p-13f, 0.0f, 0x1.a8cc08p-37f, 0x1.81eebcp-118f,
     0x1p0f, 0.0f, 0x1.0fdffap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4541p-89f, 0.0f,
     0x1.823e5cp-14f, 0.0f, 0x1.19f334p-72f, 0.0f, 0.0f, 0x1.8db708p-70f, 0.0f, 0.0f,
     0.0f, 0x1.dffc44p-7f, 0.0f, 0x1.1bb96ep-126f, 0.0f, 0.0f, 0.0f, 0x1.3b7db8p-60f,
     0x1.10355p-59f, 0x1.02af24p-73f, 0.0f, 0x1.7fb35cp-114f, 0x1.d0c68ap-10f,
     0x1.8a63bp-62f, 0.0f, 0x1.f13d66p-20f, 0.0f, 0x1.07b7e8p-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cbb2fap-109f, 0.0f, 0x1.8a01cp-19f, 0x1.8cfe48p-68f, 0.0f, 0.0f,
     0x1.d1ef6cp-39f, 0.0f, 0x1.c0f6ep-63f, 0.0f, 0.0f, 0x1.7e9448p-7f,
     0x1.077572p-14f, 0.0f, 0x1.c97dcep-82f, 0x1.343b78p-72f, 0x1.90f73p-39f, 0.0f,
     0x1.a8d27p-72f, 0x1.843374p-15f, 0x1.6883e4p-114f, 0.0f, 0x1.f3cafp-103f,
     0x1.6e600ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d1e3ap-34f, 0.0f, 0.0f,
     0x1.120cb6p-1f, 0x1.07df42p-117f, 0x1.4c5a7p-10f, 0x1.b85d8cp-13f, 0.0f,
     0x1.aba31cp-97f, 0x1.c6f89ap-40f, 0x1.ee82aap-97f, 0x1.5afc36p-106f,
     0x1.7385bp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1246ep-55f, 0x1.310d56p-101f,
     0x1.44d0fap-18f, 0x1.f1b132p-9f, 0x1.102218p-4f, 0x1.be74ecp-111f, 0.0f,
     0x1.d75144p-24f, 0.0f, 0x1.7c638ap-7f, 0.0f, 0x1.ac2136p-49f, 0.0f,
     0x1.9ddf34p-77f, 0x1.b120dep-35f, 0x1.757408p-4f, 0.0f, 0x1.2aeed8p-63f,
     0x1.5bb308p-44f, 0x1.8016cp-85f, 0.0f, 0x1.703008p-58f, 0x1.0b129cp-106f,
     0x1.f44c82p-109f, 0.0f, 0.0f, 0x1.13c56ap-70f, 0x1.dd7552p-51f, 0x1.902b9cp-34f,
     0x1.e8407cp-67f, 0x1.06fd68p-21f, 0x1.55fe86p-61f, 0.0f, 0x1.502ab2p-103f, 0.0f,
     0x1.c2cb9cp-123f, 0x1.a16b18p-105f, 0.0f, 0x1.fe0398p-122f, 0x1.ced4d8p-106f,
     0x1.d1bffap-100f, 0x1.fa7d78p-16f, 0x1.5b4726p-69f, 0x1.e1cc3cp-35f,
     0x1.7da748p-30f, 0.0f, 0x1.2a92acp-68f, 0x1.b5b71p-32f, 0.0f, 0.0f,
     0x1.bf3b2ep-45f, 0.0f, 0.0f, 0x1.86aae6p-106f, 0x1.b3a494p-82f, 0x1.a0f844p-13f,
     0x1.23c7b2p-43f, 0x1.e15a1p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67ea4p-61f, 0x1.054718p-40f, 0.0f, 0x1.f35efep-64f, 0x1.ffec56p-83f,
     0x1.fb6a54p-68f, 0x1.4558ep-121f, 0.0f, 0.0f, 0x1.35ba88p-99f, 0.0f, 0.0f,
     0x1.4ed9b4p-24f, 0.0f, 0.0f, 0x1.505c0ap-55f, 0.0f, 0.0f, 0x1.0c09cep-11f,
     0x1.c3426ep-67f, 0x1.b265dep-4f, 0.0f, 0.0f, 0x1.9428cap-83f, 0.0f,
     0x1.681988p-3f, 0.0f, 0x1.149b42p-15f, 0x1.56bfdep-36f, 0.0f, 0x1.5e098ep-66f,
     0x1.c1ee3ep-117f, 0.0f, 0.0f, 0.0f, 0x1.e098e6p-74f, 0.0f, 0x1.b3c682p-45f, 0.0f,
     0x1.e6b166p-38f, 0.0f, 0.0f, 0x1.9e7d96p-69f, 0x1.4164aep-18f, 0.0f,
     0x1.ff452cp-121f, 0x1.83ad1ep-49f, 0x1.515478p-122f, 0.0f, 0x1.08b4e4p-19f, 0.0f,
     0.0f, 0x1.cf0d6ap-56f, 0x1.1e167ap-12f, 0.0f, 0.0f, 0x1.e4d678p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8945ecp-54f, 0.0f, 0x1.a2364p-46f, 0x1.d00ea4p-50f,
     0x1.9bd154p-111f, 0x1.c7cf92p-122f, 0x1.b03048p-125f, 0x1.228032p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f967p-65f, 0x1.2ed39p-8f, 0.0f, 0x1.2c5c96p-47f, 0.0f, 0.0f, 0.0f,
     0x1.a5ad36p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab515cp-51f, 0.0f,
     0x1.fc3b54p-31f, 0x1.d62f8p-89f, 0.0f, 0.0f, 0x1.c6b93ap-71f, 0.0f,
     0x1.b00402p-100f, 0x1.8217c6p-71f, 0.0f, 0x1.5f22c4p-36f, 0x1.056a9p-73f,
     0x1.feda84p-125f, 0.0f, 0.0f, 0x1.08314cp-80f, 0x1.ee4fb4p-22f, 0x1.3f756cp-38f,
     0.0f, 0x1.7fef98p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3def9ep-7f,
     0x1.96c26cp-7f, 0.0f, 0x1.6a988cp-86f, 0x1.2f36bap-68f, 0x1.77a2e4p-9f,
     0x1.857f74p-56f, 0x1.d71372p-104f, 0.0f, 0.0f, 0x1.255f5p-81f, 0x1.0e73d6p-26f,
     0x1.2d983p-101f, 0.0f, 0x1.81c0fp-68f, 0.0f, 0x1.f2c1c8p-34f, 0.0f,
     0x1.fd8494p-105f, 0x1.fc79d6p-26f, 0.0f, 0.0f, 0x1.45884ep-60f, 0x1.f1758ap-10f,
     0.0f, 0x1.2c9b74p-12f, 0x1.0c4bdp-91f, 0x1.b41f58p-110f, 0x1.157b7cp-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f80282p-69f, 0x1.cb8c14p-1f, 0x1.bbe7a4p-11f,
     0x1.d85b2ep-28f, 0x1.2f1e64p-57f, 0.0f, 0x1.ca6568p-16f, 0x1.32f5b4p-113f,
     0x1.9291f4p-3f, 0x1.8adca2p-115f, 0x1.843a4ap-31f, 0x1.71416cp-124f,
     0x1.c608cp-6f, 0x1.e3230ep-2f, 0x1.c0aa5ap-72f, 0.0f, 0x1.12d228p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.655318p-116f, 0.0f, 0x1.920d6cp-112f, 0.0f, 0.0f,
     0x1.e9dd3ap-104f, 0x1.ebedbep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75ff68p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52ee22p-86f, 0.0f,
     0x1.e80204p-106f, 0x1.ff89c6p-114f, 0.0f, 0x1.50d82ep-124f, 0x1.a519bp-96f,
     0x1.c9ebeep-93f, 0.0f, 0x1.a5367p-29f, 0x1.60edc4p-8f, 0x1.2a3c12p-116f,
     0x1.4fdc9ap-113f, 0.0f, 0.0f, 0x1.ef44ecp-66f, 0x1.13774cp-71f, 0x1.ca321ep-124f,
     0x1.af5798p-65f, 0.0f, 0.0f, 0x1.ab8fd6p-13f, 0x1.595c4cp-3f, 0x1.b33ae2p-80f,
     0x1.306164p-82f, 0x1.58678p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c6322p-49f, 0.0f, 0x1.6f60ap-61f, 0.0f, 0.0f, 0x1.7a5a3p-10f, 0.0f, 0.0f,
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
            tmp1 = Sleef_finz_coshf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_coshf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshf1_u35purecfma bench acc %a\n", global_bench_acc);
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
