/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf4_u10kvx.c --function Sleef_tanhf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.d4f66ap-124f, 0x1.d43908p-64f, 0x1.053664p-6f, 0.0f, 0x1.2a28e2p-98f, 0.0f,
     0.0f, 0x1.f78e96p-28f, 0.0f, 0.0f, 0x1.376a66p-21f, 0x1.48ea3cp-111f, 0.0f,
     0x1.fcf178p-106f, 0x1.1c1248p-47f, 0.0f, 0x1.91dcc8p-122f, 0x1.8c78b2p-48f, 0.0f,
     0x1.5679b2p-19f, 0x1.2390c2p-89f, 0.0f, 0x1.c7403ap-120f, 0x1.4d6e12p-2f,
     0x1.5586fep-122f, 0x1.d01e48p-25f, 0.0f, 0x1.1630b6p-54f, 0.0f, 0.0f, 0.0f,
     0x1.3c3b8cp-125f, 0.0f, 0x1.041996p-111f, 0.0f, 0x1.2da00cp-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1e3808p-87f, 0.0f, 0.0f, 0x1.f25ed6p-116f, 0.0f,
     0x1.0c1684p-105f, 0x1.e997f2p-105f, 0.0f, 0.0f, 0x1.fd35eep-86f, 0.0f,
     0x1.08642ep-88f, 0x1.de6e54p-75f, 0.0f, 0x1.dd43acp-44f, 0x1.b53544p-126f,
     0x1.685158p-70f, 0.0f, 0.0f, 0x1.7bf668p-26f, 0x1.c8f0bp-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d40e76p-66f, 0x1.2d34fp-6f, 0x1.c81546p-31f, 0.0f,
     0x1.087426p-21f, 0x1.38c264p-77f, 0x1.7e563ap-59f, 0x1.b48fdcp-113f,
     0x1.d2314ep-104f, 0.0f, 0x1.93fe7ap-29f, 0x1.78c19cp-105f, 0.0f, 0.0f,
     0x1.58746ap-119f, 0.0f, 0.0f, 0.0f, 0x1.1583cap-4f, 0.0f, 0.0f, 0.0f,
     0x1.e32d5cp-46f, 0x1.db3a36p-117f, 0.0f, 0.0f, 0.0f, 0x1.db2facp-2f, 0.0f, 0.0f,
     0x1.03c692p-109f, 0x1.889b68p-48f, 0x1.6188eep-100f, 0.0f, 0.0f, 0x1.ccb952p-12f,
     0x1.eef5fp-66f, 0.0f, 0x1.f656bcp-47f, 0.0f, 0x1.a8de3p-103f, 0.0f, 0.0f,
     0x1.2409bep-41f, 0x1.45f5cep-117f, 0.0f, 0x1.f416e6p-115f, 0.0f, 0x1.383c32p-6f,
     0x1.764d72p-35f, 0x1.fdbe56p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32e7cep-80f, 0.0f,
     0.0f, 0x1.4e8a32p-58f, 0.0f, 0.0f, 0x1.b6d7bap-96f, 0x1.cc32acp-89f, 0.0f,
     0x1.98855ep-94f, 0.0f, 0.0f, 0x1.9c9c3cp-111f, 0.0f, 0x1.85788ep-56f, 0.0f,
     0x1.ee57b4p-104f, 0.0f, 0x1.a4df1ep-7f, 0x1.0824fap-126f, 0.0f, 0x1.3df1cap-34f,
     0.0f, 0x1.38bb58p-21f, 0.0f, 0x1.0f6634p-12f, 0.0f, 0x1.c1c232p-8f,
     0x1.3a8238p-97f, 0x1.bf8b34p-39f, 0.0f, 0.0f, 0.0f, 0x1.0705bcp-18f,
     0x1.c787dep-20f, 0x1.94894ep-56f, 0.0f, 0.0f, 0x1.490508p-52f, 0.0f,
     0x1.ab1bbcp-76f, 0x1.7d3d9ap-54f, 0x1.40645ep-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.429d16p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80c9dcp-47f,
     0x1.08f2a2p-8f, 0x1.ef2856p-66f, 0.0f, 0.0f, 0.0f, 0x1.cc3384p-40f, 0.0f, 0.0f,
     0x1.e6b5ccp-90f, 0x1.e404cap-14f, 0.0f, 0.0f, 0x1.f2f2cap-11f, 0.0f, 0.0f,
     0x1.31f38ep-115f, 0.0f, 0x1.047cc6p-114f, 0.0f, 0.0f, 0x1.0d88f8p-9f,
     0x1.e39a3ap-34f, 0x1.77194ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee9404p-111f,
     0x1.5f6092p-106f, 0x1.140cf8p-108f, 0.0f, 0.0f, 0.0f, 0x1.003496p-4f, 0.0f, 0.0f,
     0x1.e652bcp-85f, 0.0f, 0x1.096d9cp-61f, 0x1.3eb754p-39f, 0x1.fb7132p-118f, 0.0f,
     0x1.f832cap-51f, 0x1.edbb8ap-73f, 0x1.7a795ep-7f, 0.0f, 0.0f, 0x1.b4c884p-108f,
     0x1.3bc602p-82f, 0.0f, 0x1.f3c9cap-57f, 0x1.ed9986p-27f, 0.0f, 0x1.587d3ap-71f,
     0.0f, 0x1.e12812p-108f, 0x1.e1dc44p-98f, 0.0f, 0x1.c4fbp-46f, 0x1.31f076p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.106e88p-110f, 0.0f,
     0x1.5f8b22p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a46604p-118f,
     0x1.3348c8p-61f, 0.0f, 0x1.a84fa2p-114f, 0.0f, 0.0f, 0.0f, 0x1.c181acp-18f,
     0x1.4f19b8p-87f, 0x1.584272p-77f, 0x1.6fe60ep-45f, 0.0f, 0x1.3fc3ccp-74f,
     0x1.f7b0dap-123f, 0x1.aea166p-77f, 0.0f, 0.0f, 0x1.66bc44p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5c6f9ep-7f, 0.0f, 0.0f, 0x1.4e3b2p-44f, 0x1.94d808p-123f, 0.0f,
     0x1.bebb7ep-55f, 0x1.76ed36p-81f, 0.0f, 0x1.1ca034p-56f, 0x1.4f5122p-46f,
     0x1.db6322p-47f, 0x1.be814cp-54f, 0.0f, 0x1.a1ffa4p-25f, 0x1.25b15p-89f,
     0x1.5e863cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c9898p-15f, 0.0f, 0x1.79e7e4p-92f,
     0.0f, 0.0f, 0.0f, 0x1.60c2eep-2f, 0x1.83a858p-109f, 0.0f, 0.0f, 0.0f,
     0x1.cba122p-13f, 0x1.fa3fa6p-71f, 0.0f, 0.0f, 0x1.a55dc6p-115f, 0x1.0370b6p-86f,
     0.0f, 0x1.8f3844p-112f, 0.0f, 0x1.f0f506p-122f, 0.0f, 0x1.067e6p-5f, 0.0f,
     0x1.c02a5ap-86f, 0.0f, 0.0f, 0x1.09cbb2p-41f, 0.0f, 0.0f, 0x1.47e3a2p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df08a4p-30f, 0x1.e2fb1cp-109f, 0.0f, 0x1.b31ef4p-71f, 0.0f,
     0x1.e8f4eap-49f, 0x1.c06902p-9f, 0x1.726b8ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f7d2fcp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.999886p-110f, 0.0f,
     0x1.45675p-77f, 0x1.358088p-17f, 0x1.85e2e2p-40f, 0x1.c5d9d2p-39f,
     0x1.3ca75p-71f, 0.0f, 0.0f, 0x1.fa264cp-54f, 0x1.2794f2p-2f, 0x1.3c7578p-79f,
     0.0f, 0.0f, 0x1.5aeea4p-105f, 0.0f, 0.0f, 0.0f, 0x1.a8f09p-30f, 0.0f,
     0x1.ea2b28p-54f, 0.0f, 0.0f, 0x1.c7e6ccp-47f, 0x1.d7e698p-121f, 0.0f,
     0x1.280c78p-7f, 0x1.50d2b2p-119f, 0.0f, 0.0f, 0x1.0d5f4ap-47f, 0x1.0a1da8p-80f,
     0.0f, 0x1.76c6ccp-120f, 0.0f, 0x1.cbc84p-49f, 0.0f, 0x1.577508p-125f,
     0x1.566558p-5f, 0.0f, 0x1.0db666p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fac90ep-1f,
     0.0f, 0.0f, 0x1.c522fap-115f, 0x1.ed9dfap-11f, 0x1.84368p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2881ccp-16f, 0x1.81ca76p-110f, 0x1.e15c6ep-16f, 0x1.45114ap-78f, 0.0f,
     0x1.bf14bap-119f, 0x1.9803eap-53f, 0x1.5c2f66p-21f, 0.0f, 0x1.a5b5e4p-70f,
     0x1.d1468ep-123f, 0.0f, 0.0f, 0x1.811a78p-61f, 0.0f, 0.0f, 0.0f, 0x1.16e7fap-93f,
     0x1.44dcccp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6def2p-92f, 0x1.a8596ep-125f, 0.0f,
     0x1.6d525ap-25f, 0x1.da2dcap-120f, 0.0f, 0x1.7fb7f6p-48f, 0x1.c6cbfep-66f, 0.0f,
     0.0f, 0.0f, 0x1.c0b37cp-52f, 0.0f, 0x1.9381e6p-104f, 0.0f, 0.0f, 0.0f,
     0x1.11c9eep-120f, 0.0f, 0.0f, 0.0f, 0x1.a0358ap-51f, 0.0f, 0x1.c7c89cp-37f,
     0x1.70cdfap-54f, 0.0f, 0.0f, 0x1.d7f9cep-60f, 0x1.770028p-94f, 0.0f, 0.0f, 0.0f,
     0x1.6bec86p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39a0d2p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.754a42p-106f, 0x1.1ec93ep-103f, 0.0f, 0x1.90fdd8p-34f, 0.0f,
     0x1.296346p-18f, 0x1.219e7p-16f, 0x1.503daep-55f, 0.0f, 0.0f, 0x1.6786b6p-98f,
     0x1.c5cd92p-82f, 0x1.feff22p-7f, 0x1.e886cep-121f, 0x1.53a03ap-102f,
     0x1.4de416p-96f, 0.0f, 0x1.40a0cp-73f, 0x1.537516p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.32ebf2p-39f, 0.0f, 0x1.a0eb18p-83f, 0.0f, 0x1.89f5cap-21f, 0x1.dc8534p-85f,
     0.0f, 0x1.7863eap-100f, 0.0f, 0x1.83aa04p-62f, 0x1.883d8p-39f, 0.0f, 0.0f,
     0x1.a6fa4ep-69f, 0x1.ebf384p-103f, 0.0f, 0.0f, 0x1.c59134p-123f, 0.0f, 0.0f,
     0x1.6cf926p-31f, 0.0f, 0.0f, 0x1.380118p-50f, 0.0f, 0.0f, 0.0f, 0x1.8b2ba4p-108f,
     0x1.438088p-85f, 0x1.fb9a9ep-11f, 0x1.9d89a8p-29f, 0x1.a16a5cp-98f,
     0x1.84dc1p-112f, 0.0f, 0x1.6b7148p-115f, 0x1.3b1f46p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6aa60ep-77f, 0x1.7f959ep-93f, 0x1.3dcfb4p-72f, 0.0f, 0x1.eac756p-21f, 0.0f,
     0x1.7b686cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6b274p-7f, 0x1.23fbaep-108f,
     0x1.c73602p-59f, 0.0f, 0.0f, 0x1.586896p-29f, 0.0f, 0x1.4247dap-45f, 0.0f,
     0x1.8164a4p-18f, 0.0f, 0x1.ac1dd2p-52f, 0.0f, 0.0f, 0.0f, 0x1.585056p-62f,
     0x1.ef17d8p-44f, 0x1.86ec62p-32f, 0x1.d8ea56p-66f, 0x1.ab9808p-99f, 0.0f, 0.0f,
     0x1.e11464p-105f, 0.0f, 0x1.deb6f2p-42f, 0.0f, 0x1.874bbp-9f, 0.0f, 0.0f,
     0x1.730c3p-94f, 0x1.f3defep-7f, 0.0f, 0x1.95c774p-38f, 0.0f, 0.0f,
     0x1.b767dcp-86f, 0x1.665c1cp-103f, 0x1.bd055p-85f, 0x1.a4d6fp-117f, 0.0f, 0.0f,
     0x1.1df888p-4f, 0x1.f2994ap-31f, 0x1.42fbb4p-5f, 0x1.6f6feap-39f,
     0x1.613d98p-66f, 0.0f, 0.0f, 0.0f, 0x1.c582ap-90f, 0x1.6fb998p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5652ep-111f, 0.0f, 0.0f,
     0x1.e64bep-126f, 0.0f, 0.0f, 0x1.ca7152p-49f, 0x1.d7c8c2p-50f, 0x1.10672ap-6f,
     0.0f, 0x1.738418p-48f, 0x1.ffd914p-81f, 0x1.a504dap-115f, 0.0f, 0.0f,
     0x1.4fde9ep-112f, 0.0f, 0.0f, 0.0f, 0x1.e06798p-96f, 0.0f, 0.0f, 0.0f,
     0x1.739f2ap-56f, 0.0f, 0x1.14b44cp-106f, 0.0f, 0x1.b4bca8p-123f, 0x1.7376c4p-33f,
     0.0f, 0x1.be470cp-59f, 0.0f, 0x1.b1d41ep-113f, 0.0f, 0x1.230d86p-79f,
     0x1.6a7dfap-88f, 0.0f, 0.0f, 0x1.7ae5dep-5f, 0x1.585148p-100f, 0x1.c245ap-35f,
     0.0f, 0.0f, 0.0f, 0x1.4b3d78p-36f, 0x1.0a1eacp-44f, 0.0f, 0x1.5ef29p-105f,
     0x1.0d3e26p-73f, 0x1.18925cp-34f, 0x1.a8c54ep-35f, 0x1.c31a48p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5b8518p-42f, 0x1.c6892cp-79f, 0x1.418bf6p-48f, 0.0f, 0.0f, 0.0f,
     0x1.acb2bap-123f, 0x1.da323ap-8f, 0.0f, 0x1.238272p-23f, 0x1.35b11ep-41f,
     0x1.c865e6p-27f, 0.0f, 0x1.9893e8p-44f, 0.0f, 0x1.c3609ep-58f, 0.0f, 0.0f,
     0x1.48576ep-107f, 0.0f, 0.0f, 0x1.35b5dep-109f, 0.0f, 0.0f, 0.0f,
     0x1.1ba684p-120f, 0.0f, 0.0f, 0x1.8126fcp-11f, 0x1.ff92bap-99f, 0.0f,
     0x1.f482dap-90f, 0x1.c74d82p-37f, 0.0f, 0x1.276028p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.deac1p-94f, 0x1.85229ap-64f, 0.0f, 0.0f, 0.0f, 0x1.0e8fp-24f, 0.0f,
     0.0f, 0x1.ba6c7cp-59f, 0.0f, 0x1.4bca1ap-84f, 0.0f, 0x1.6927bep-9f,
     0x1.a9ceccp-118f, 0x1.1e55fp-117f, 0x1.bd9562p-30f, 0.0f, 0.0f, 0.0f,
     0x1.86f794p-12f, 0x1.908268p-67f, 0x1.476deep-55f, 0.0f, 0x1.02424ep-73f,
     0x1.80e822p-30f, 0x1.2dc6ecp-85f, 0.0f, 0.0f, 0x1.7f2346p-53f, 0x1.2437e8p-80f,
     0x1.63b978p-76f, 0x1.840c04p-122f, 0x1.4353b6p-25f, 0x1.e19d1cp-91f, 0.0f, 0.0f,
     0.0f, 0x1.fab466p-96f, 0x1.68dc66p-123f, 0x1.361b7cp-61f, 0.0f, 0x1.d5be68p-21f,
     0.0f, 0.0f, 0x1.bf7ea4p-48f, 0x1.00bd7ap-32f, 0.0f, 0x1.aaaf28p-98f, 0.0f,
     0x1.715e64p-25f, 0.0f, 0.0f, 0x1.ea7acap-97f, 0x1.163056p-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a967ap-34f, 0.0f, 0x1.1da10ap-118f, 0x1.461208p-112f, 0.0f,
     0x1.3a3ee8p-100f, 0.0f, 0x1.d3b5a6p-98f, 0x1.98b0dcp-39f, 0.0f, 0x1.e648d8p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87f11cp-41f, 0x1.08efcep-18f, 0x1.c890aap-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1b2078p-86f, 0x1.51074cp-14f, 0.0f, 0.0f, 0x1.0ec922p-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.deb91ap-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.594526p-112f, 0x1.ebadd6p-24f, 0x1.34ec18p-101f, 0x1.b0051ep-85f,
     0x1.7c7d4ap-53f, 0.0f, 0.0f, 0x1.bd65b8p-85f, 0.0f, 0.0f, 0x1.3f955cp-97f, 0.0f,
     0.0f, 0.0f, 0x1.896accp-48f, 0x1.f7f9a4p-24f, 0.0f, 0x1.a9d268p-76f,
     0x1.cbbdbep-123f, 0x1.897592p-8f, 0x1.82dap-29f, 0x1.0509cap-122f, 0.0f,
     0x1.032432p-119f, 0.0f, 0x1.4741c4p-99f, 0x1.020d42p-50f, 0.0f, 0x1.96833p-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d97dep-50f, 0.0f, 0.0f, 0.0f, 0x1.e213b2p-91f,
     0.0f, 0x1.dfa574p-28f, 0.0f, 0x1.ee8222p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f8c54p-103f, 0x1.6beap-11f,
     0x1.fdeafap-111f, 0.0f, 0.0f, 0x1.b736dcp-1f, 0x1.870dd2p-111f, 0.0f,
     0x1.c02b26p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2adb26p-84f, 0.0f, 0x1.f8e84cp-90f,
     0x1.42dc68p-108f, 0.0f, 0x1.6837b2p-4f, 0x1.6326a2p-50f, 0.0f, 0x1.3badd2p-113f,
     0x1.5b8d54p-105f, 0x1.0b535cp-114f, 0.0f, 0.0f, 0x1.ce9cb6p-86f, 0.0f, 0.0f,
     0x1.d21a9p-22f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.c50d7ep-119f, 0.0f,
     0x1.0771cap-55f, 0x1.bfddfp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24885ep-60f,
     0x1.ecaf78p-64f, 0.0f, 0.0f, 0x1.3cfeccp-101f, 0.0f, 0x1.6b835p-82f,
     0x1.b760e6p-123f, 0x1.6e55dcp-82f, 0.0f, 0.0f, 0.0f, 0x1.04bfp-21f, 0.0f, 0.0f,
     0x1.99215ap-109f, 0x1.74ec58p-90f, 0x1.c392c4p-4f, 0.0f, 0.0f, 0x1.98067ep-37f,
     0x1.8c68cp-35f, 0.0f, 0x1.fa099ap-73f, 0.0f, 0x1.cc895ep-51f, 0x1.4ecb2ap-109f,
     0.0f, 0x1.dc7ddp-56f, 0.0f, 0.0f, 0x1.32727ap-109f, 0x1.bf491p-55f,
     0x1.2152fep-102f, 0x1.4e75b4p-7f, 0x1.47cef8p-53f, 0.0f, 0.0f, 0x1.ac7c6p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.17cd98p-25f, 0.0f, 0.0f, 0x1.91551ap-3f,
     0x1.0a20cp-34f, 0x1.d986cap-40f, 0x1.e488c8p-76f, 0.0f, 0.0f, 0.0f,
     0x1.d70652p-57f, 0.0f, 0x1.7819e6p-50f, 0.0f, 0.0f, 0.0f, 0x1.a8e554p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.519886p-63f, 0x1.d91ec6p-21f, 0.0f, 0.0f,
     0x1.7d2ee2p-81f, 0.0f, 0.0f, 0x1.9e6d9p-8f, 0x1.04e27ap-57f, 0x1.abd91ap-123f,
     0.0f, 0.0f, 0x1.390c52p-45f, 0.0f, 0.0f, 0x1.97b668p-62f, 0.0f, 0x1.32d152p-104f,
     0.0f, 0.0f, 0x1.97469cp-100f, 0.0f, 0.0f, 0x1.f43c78p-33f, 0.0f, 0x1.cfb69ap-91f,
     0.0f, 0.0f, 0x1.1eed46p-75f, 0x1.260dc4p-57f, 0x1.4fbce6p-37f, 0.0f,
     0x1.a04a1ap-8f, 0x1.47acaep-43f, 0.0f, 0x1.89d85p-31f, 0x1.de5166p-80f,
     0x1.c7322ap-87f, 0x1.5c28d4p-111f, 0.0f, 0.0f, 0.0f, 0x1.ee6bdep-15f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_tanhf4_u10kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_tanhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
