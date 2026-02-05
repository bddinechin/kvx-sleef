/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fdimf4_avx2128.c --function Sleef_finz_fdimf4_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.6e9726p-43f, 0.0f, 0x1.af0d62p-67f, 0x1.e8e738p-39f, 0.0f, 0.0f,
     0x1.36eff4p-32f, 0.0f, 0.0f, 0.0f, 0x1.a4bf44p-115f, 0x1.85b472p-10f, 0.0f,
     0x1.c25b02p-2f, 0x1.a3219cp-61f, 0x1.d59bb8p-82f, 0x1.0f7d58p-84f, 0.0f,
     0x1.3f2ba4p-123f, 0.0f, 0x1.9e41f6p-41f, 0x1.f8a3bap-116f, 0x1.803f1cp-57f, 0.0f,
     0x1.41a39ap-25f, 0x1.c3d936p-114f, 0x1.b596aep-10f, 0.0f, 0x1.91f0d2p-101f,
     0x1.15ae42p-35f, 0x1.9606fp-69f, 0.0f, 0.0f, 0.0f, 0x1.cae2aap-28f, 0.0f,
     0x1.110682p-79f, 0x1.ab19b8p-31f, 0.0f, 0x1.0a0986p-79f, 0x1.b81ffp-55f, 0.0f,
     0x1.b90e56p-99f, 0x1.6cac76p-85f, 0x1.b43df2p-126f, 0.0f, 0x1.2efdbep-115f, 0.0f,
     0x1.7d367ap-87f, 0.0f, 0x1.373a92p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f0b84p-47f, 0x1.afcccap-49f, 0x1.701664p-85f, 0x1.afbf0cp-116f,
     0x1.871fe4p-35f, 0x1.c8e3dap-59f, 0.0f, 0.0f, 0x1.9b7a86p-52f, 0.0f,
     0x1.ce5b8cp-108f, 0.0f, 0x1.50edf2p-3f, 0x1.212f12p-44f, 0.0f, 0x1.559232p-91f,
     0.0f, 0x1.8804c6p-32f, 0.0f, 0x1.0139ap-113f, 0.0f, 0.0f, 0x1.438efcp-95f, 0.0f,
     0x1.efdf8ap-67f, 0x1.6df558p-38f, 0.0f, 0x1.5cd60ep-77f, 0.0f, 0x1.975ecp-94f,
     0.0f, 0x1.4abe4ap-2f, 0.0f, 0x1p0f, 0x1.617afp-9f, 0.0f, 0x1.03bfbp-36f,
     0x1.bd9e12p-82f, 0.0f, 0x1.0f4154p-43f, 0.0f, 0x1.76d4ap-51f, 0x1.c19714p-18f,
     0x1.4641e6p-11f, 0.0f, 0.0f, 0x1.e33a1p-50f, 0.0f, 0.0f, 0.0f, 0x1.6032ecp-117f,
     0.0f, 0.0f, 0.0f, 0x1.9e97b2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.587212p-25f,
     0x1.f9127ep-21f, 0.0f, 0x1.f8fcbap-94f, 0.0f, 0x1.7c58aap-109f, 0.0f, 0.0f, 0.0f,
     0x1.54aab4p-68f, 0.0f, 0.0f, 0x1.15dcbp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fad3cp-16f, 0.0f, 0x1.9edfcp-61f, 0.0f, 0x1.8a5422p-47f, 0x1.09c7bap-40f,
     0.0f, 0x1.380926p-84f, 0.0f, 0x1.f7b11p-89f, 0.0f, 0x1.e8867ap-39f, 0.0f, 0.0f,
     0.0f, 0x1.3ef42cp-92f, 0x1.d1db36p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.beb4b4p-47f, 0.0f, 0.0f, 0.0f, 0x1.3df948p-107f, 0x1.b583acp-33f, 0.0f,
     0x1.81396ep-124f, 0x1.b562a8p-119f, 0x1.2d931ap-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44e76ap-87f, 0x1.ec4be4p-28f, 0.0f, 0x1.f41f4ap-121f, 0.0f, 0x1.89cf66p-40f,
     0x1.6095fap-78f, 0x1.1a8684p-103f, 0.0f, 0.0f, 0x1.795386p-118f, 0.0f,
     0x1.9dd63p-78f, 0x1.c866acp-106f, 0.0f, 0.0f, 0.0f, 0x1.976cc6p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d966d4p-116f, 0.0f, 0x1.8d2932p-73f, 0x1.7bf3a8p-109f,
     0x1.d97668p-121f, 0.0f, 0x1.c19b14p-119f, 0x1.0c0b54p-54f, 0x1.65447cp-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c13b3cp-64f, 0.0f, 0.0f, 0x1.c47226p-122f, 0x1.92212ap-65f,
     0x1.136aa8p-102f, 0.0f, 0.0f, 0.0f, 0x1.912ed8p-13f, 0.0f, 0.0f, 0x1.cfa9cep-74f,
     0x1.3e042ap-41f, 0.0f, 0.0f, 0x1.3fc7ecp-21f, 0x1.48ea8p-62f, 0.0f,
     0x1.f05304p-22f, 0.0f, 0x1.d81b8ep-89f, 0.0f, 0x1.242bcp-70f, 0x1.adcf88p-42f,
     0.0f, 0x1.689bdcp-86f, 0x1.51eaa4p-2f, 0.0f, 0x1.ee7a58p-10f, 0x1.878edp-2f,
     0.0f, 0x1.385bbcp-3f, 0x1.b67d28p-119f, 0.0f, 0x1.4d2f4p-51f, 0.0f,
     0x1.7768ccp-9f, 0x1.8353c2p-14f, 0.0f, 0x1.5ddaaep-53f, 0.0f, 0x1.58a504p-34f,
     0.0f, 0x1.4e6e54p-97f, 0x1.f9f67ap-59f, 0.0f, 0x1.7db034p-83f, 0x1.50fea8p-75f,
     0x1.6bef68p-4f, 0x1.1c976ap-53f, 0x1.327d3ep-1f, 0x1.72d31p-58f, 0x1.dbf2dep-42f,
     0.0f, 0.0f, 0x1.919ebcp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d04fp-59f,
     0x1.7372d4p-69f, 0x1.37cb5ep-46f, 0x1.c25baep-44f, 0.0f, 0x1.876a82p-84f, 0.0f,
     0.0f, 0x1.92499ap-125f, 0.0f, 0.0f, 0x1.a1d78ap-58f, 0x1.f10f9ep-27f,
     0x1.062d72p-101f, 0x1.1827ecp-75f, 0x1.639a4p-47f, 0.0f, 0.0f, 0.0f,
     0x1.4370f8p-125f, 0x1.192224p-50f, 0x1.9d314p-102f, 0x1p0f, 0.0f,
     0x1.5dac1cp-75f, 0.0f, 0.0f, 0x1.e57ae8p-3f, 0.0f, 0.0f, 0x1.fccb42p-33f,
     0x1.1e962cp-7f, 0.0f, 0.0f, 0x1.fa0cbcp-87f, 0x1.d06cd8p-39f, 0x1.5b245cp-115f,
     0.0f, 0x1.69927cp-25f, 0.0f, 0.0f, 0x1.2bc124p-20f, 0x1.fee3p-121f,
     0x1.1734bp-31f, 0x1.5f9d96p-70f, 0x1.061c24p-15f, 0x1.df554p-26f,
     0x1.4ab86ap-38f, 0.0f, 0.0f, 0x1.54fdc4p-39f, 0x1.d74f24p-7f, 0x1.d856d8p-41f,
     0.0f, 0x1.57f9f8p-38f, 0.0f, 0x1.b19052p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ead6dap-17f, 0.0f, 0x1.08d41cp-11f, 0.0f, 0.0f, 0x1.5f811ep-57f,
     0x1.f694a2p-77f, 0.0f, 0x1.8a899ap-58f, 0x1.79ef58p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.608cbap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c127ep-14f, 0.0f, 0.0f,
     0.0f, 0x1.e806fep-38f, 0x1.2b0ep-108f, 0.0f, 0.0f, 0x1.01b0ap-30f,
     0x1.16d0fcp-109f, 0.0f, 0x1.84900cp-126f, 0x1.ebfa74p-27f, 0.0f, 0.0f,
     0x1.4a99eep-93f, 0.0f, 0.0f, 0x1.b553c2p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.82c2d6p-62f, 0.0f, 0x1.ee2f78p-5f, 0.0f, 0x1.695632p-91f,
     0x1.395cf4p-64f, 0.0f, 0x1.bfdbeap-110f, 0x1.4388f8p-14f, 0.0f, 0.0f, 0.0f,
     0x1.ff8c08p-48f, 0x1.e8f014p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e989fap-41f, 0.0f, 0.0f, 0.0f, 0x1.b2aee4p-22f, 0x1.37c73p-73f, 0.0f, 0.0f,
     0x1.d738fcp-32f, 0.0f, 0x1.ba810cp-44f, 0x1.de33dp-106f, 0x1.9c2c68p-19f,
     0x1.77f02ap-86f, 0.0f, 0x1.81162p-55f, 0.0f, 0.0f, 0x1.865edap-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.845938p-42f, 0x1.e262ecp-54f, 0x1.3da3f6p-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b8816p-69f, 0x1.db8d28p-58f, 0x1.83ae78p-2f, 0x1.06370cp-84f,
     0x1.6b4b28p-116f, 0.0f, 0x1.30d956p-16f, 0x1.79798p-47f, 0.0f, 0x1.ec9a7p-84f,
     0x1.ce314cp-32f, 0.0f, 0.0f, 0x1.e0fdfp-44f, 0x1.a954a2p-64f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.932e7ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22606ep-112f,
     0x1.332b72p-57f, 0x1.c4e174p-11f, 0x1.988586p-72f, 0x1.c8a44cp-38f, 0.0f, 0.0f,
     0x1.9036cap-103f, 0.0f, 0.0f, 0x1.fcb55ep-49f, 0x1.ea0fe6p-93f, 0x1.80cc24p-39f,
     0.0f, 0.0f, 0x1.cc396p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7b64ap-126f,
     0x1.cc5012p-83f, 0x1.0ca5c6p-21f, 0x1.04d024p-122f, 0x1.02197p-32f, 0.0f, 0.0f,
     0.0f, 0x1.9b0a58p-18f, 0.0f, 0.0f, 0.0f, 0x1.dfabbap-37f, 0x1.4cac62p-13f,
     0x1.ecaa88p-55f, 0.0f, 0.0f, 0.0f, 0x1.4984f6p-108f, 0x1.36d52p-68f, 0.0f, 0.0f,
     0x1.4effc6p-39f, 0.0f, 0.0f, 0.0f, 0x1.8775dp-67f, 0x1.6ac8ecp-66f, 0.0f, 0.0f,
     0x1.58d548p-95f, 0.0f, 0x1.63552ep-100f, 0x1.1186c8p-100f, 0x1.380d52p-60f, 0.0f,
     0x1.2c8dd6p-121f, 0.0f, 0x1.ef2d34p-64f, 0.0f, 0x1.3223aap-125f, 0.0f,
     0x1.0537a4p-105f, 0.0f, 0x1.fbdbc4p-56f, 0x1.ff115cp-64f, 0.0f, 0x1.039cp-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af3a2ap-66f, 0x1.bbce76p-81f,
     0x1.a9164ap-43f, 0x1.d4d1fap-15f, 0.0f, 0x1.0d1ab6p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a18806p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abfa2ep-97f, 0x1.127036p-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.65d852p-116f, 0.0f, 0x1.8dcaccp-24f, 0x1.c4b54cp-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b03996p-29f, 0x1.b41db4p-48f, 0x1.a7dd78p-48f, 0.0f,
     0x1.cc8a5ep-93f, 0x1.7344e6p-7f, 0.0f, 0x1.505e44p-47f, 0.0f, 0x1.0bfcc6p-126f,
     0.0f, 0.0f, 0.0f, 0x1.f3aac2p-88f, 0x1.1e650cp-105f, 0x1.47ad1p-12f,
     0x1.03046p-71f, 0.0f, 0x1.d43f9cp-64f, 0x1.414d9p-101f, 0x1.466ff6p-71f,
     0x1.92f176p-36f, 0.0f, 0x1.6a07cap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1f89ep-82f, 0.0f, 0.0f, 0x1.335f0ap-62f, 0x1.524d4ep-48f, 0x1.e67a08p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05b10cp-104f, 0.0f,
     0x1.78d4b4p-37f, 0x1.dc622cp-97f, 0x1.be182ap-25f, 0x1.6230b8p-8f,
     0x1.9a4b26p-69f, 0.0f, 0.0f, 0x1.fe0cc8p-98f, 0.0f, 0x1.c66d8cp-123f, 0.0f,
     0x1.d7babep-29f, 0x1.8bd2dcp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.478cb2p-115f,
     0x1.865812p-109f, 0x1.d76018p-108f, 0x1.69d27p-9f, 0.0f, 0.0f, 0x1.6e884p-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b2e88p-10f, 0.0f, 0.0f, 0x1.8ed58p-107f, 0.0f,
     0x1.caeecap-122f, 0x1.a2b5aap-120f, 0x1.11708ep-86f, 0.0f, 0.0f, 0x1.824724p-36f,
     0.0f, 0x1.5b026ap-55f, 0x1.582932p-64f, 0x1.ec750ep-115f, 0x1.281a1cp-64f, 0.0f,
     0x1.bd3d52p-79f, 0.0f, 0x1.9c0174p-28f, 0.0f, 0x1.13f5d8p-81f, 0x1.8db83cp-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a49eap-4f, 0x1.10a4dep-116f, 0x1.c894eep-110f,
     0.0f, 0x1.cb0e44p-96f, 0x1.f5b722p-35f, 0x1.88893cp-10f, 0.0f, 0x1.e8e618p-18f,
     0x1.1a2db4p-109f, 0x1.157a42p-52f, 0.0f, 0.0f, 0x1.d53af6p-100f,
     0x1.922336p-100f, 0x1.849854p-54f, 0.0f, 0x1.a5b8dap-112f, 0.0f,
     0x1.d053ccp-108f, 0.0f, 0x1.08a6f4p-36f, 0x1.89b086p-18f, 0.0f, 0x1.0366d8p-25f,
     0.0f, 0x1.39f22ep-83f, 0.0f, 0.0f, 0x1.887b7ep-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb644ap-31f, 0.0f, 0.0f, 0x1.2e171ap-90f, 0x1.4373cep-44f, 0x1.d148c4p-101f,
     0.0f, 0x1.61100ap-68f, 0.0f, 0.0f, 0.0f, 0x1.4a0f72p-45f, 0x1.38d098p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd0204p-118f, 0x1.757028p-54f, 0.0f, 0.0f,
     0x1.6a41b4p-37f, 0.0f, 0.0f, 0.0f, 0x1.44bd4ap-124f, 0x1.ef99b6p-92f, 0.0f,
     0x1.8663b8p-125f, 0x1.b5d1d4p-76f, 0.0f, 0x1.cc4b68p-23f, 0.0f, 0x1.a4d1cep-91f,
     0x1.70089p-12f, 0x1.9c2558p-44f, 0.0f, 0x1.bdc8dep-100f, 0.0f, 0x1.a21f3p-126f,
     0x1.15a626p-56f, 0x1.9b94p-22f, 0.0f, 0x1.171a84p-109f, 0.0f, 0.0f,
     0x1.198ef4p-55f, 0x1.6bcc7p-24f, 0.0f, 0x1.2dfe7ep-8f, 0x1.fdadbp-79f,
     0x1.59f02ap-50f, 0.0f, 0x1.89d482p-90f, 0.0f, 0.0f, 0x1.2950eep-46f,
     0x1.f9d5d4p-98f, 0x1.6126ccp-6f, 0x1.30e90ap-32f, 0x1.7f9808p-101f, 0.0f,
     0x1.89190ap-30f, 0x1.aa4a6cp-83f, 0.0f, 0x1.143f9ap-118f, 0.0f, 0.0f,
     0x1.58788cp-100f, 0x1.2561fep-26f, 0x1.71ca14p-77f, 0x1.e433dap-100f, 0.0f,
     0x1.8b393ap-41f, 0.0f, 0.0f, 0x1.edaf8ep-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7416b2p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6cc46p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9a3b4p-35f,
     0x1.cf05f4p-21f, 0.0f, 0.0f, 0x1.8d1cap-26f, 0.0f, 0x1.163994p-39f,
     0x1.7bd772p-93f, 0.0f, 0x1.7322d2p-40f, 0.0f, 0x1.037eecp-39f, 0.0f,
     0x1.5d5124p-104f, 0.0f, 0.0f, 0.0f, 0x1.5d7982p-116f, 0.0f, 0.0f,
     0x1.618bc2p-47f, 0.0f, 0x1.4fad96p-125f, 0.0f, 0.0f, 0x1.060926p-110f,
     0x1.7375cp-27f, 0.0f, 0x1.585964p-71f, 0x1.7182dcp-80f, 0x1.a328bcp-122f, 0.0f,
     0x1.4bc1e6p-51f, 0.0f, 0.0f, 0x1.b06d9cp-98f, 0x1.db15dep-49f, 0.0f, 0.0f, 0.0f,
     0x1.ce9228p-106f, 0.0f, 0.0f, 0.0f, 0x1.1392p-61f, 0x1.8d09d8p-47f, 0.0f,
     0x1.2876e8p-62f, 0.0f, 0x1.9aceeep-34f, 0.0f, 0x1.4e891p-30f, 0.0f, 0.0f,
     0x1.fc2456p-9f, 0x1.6ab44cp-65f, 0.0f, 0.0f, 0x1.b84f6ep-102f, 0x1.d5d674p-102f,
     0.0f, 0x1.cba186p-44f, 0x1.ca2888p-105f, 0.0f, 0x1.d068c4p-89f, 0x1.eb7402p-88f,
     0.0f, 0x1.87594cp-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4badp-96f, 0x1.64f136p-121f,
     0x1.0ffd26p-100f, 0.0f, 0x1.96cf72p-114f, 0x1.1ac4a8p-87f, 0.0f, 0x1.123ffp-4f,
     0x1.74df9ep-22f, 0.0f, 0x1.fdc994p-13f, 0.0f, 0.0f, 0x1.a81416p-110f,
     0x1.4b7668p-113f, 0x1.fc8388p-63f, 0x1.0267d2p-20f, 0x1.8166cap-27f,
     0x1.6a8c58p-91f, 0.0f, 0.0f, 0x1.68d23ap-92f, 0.0f, 0x1.cc795p-119f, 0.0f, 0.0f,
     0.0f, 0x1.da5a04p-65f, 0x1.33d628p-36f, 0x1.12c65cp-75f, 0x1.a4a918p-23f,
     0x1.fc0a34p-112f, 0.0f, 0x1.8c3c1ep-13f, 0.0f, 0x1.7cc5f6p-94f, 0.0f,
     0x1.148464p-7f, 0x1.f77a82p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26a5f8p-94f, 0.0f, 0x1.2d22f4p-88f, 0x1.9b2102p-89f, 0x1.1ece5cp-4f, 0.0f,
     0x1.c256f6p-61f, 0.0f, 0x1.55623p-76f, 0x1.abfe6p-123f, 0.0f, 0x1.171c56p-71f,
     0x1.8373fp-71f, 0x1.3d283ap-98f, 0x1.58b444p-110f, 0x1.ca9462p-74f,
     0x1.70e1bcp-50f, 0.0f, 0x1.d01fdcp-61f, 0x1.1b0976p-13f, 0x1.11a2f2p-94f,
     0x1.0f5ba6p-22f, 0.0f, 0.0f, 0x1.f0ce52p-11f, 0.0f, 0x1.8673c8p-63f, 0.0f, 0.0f,
     0x1.449534p-83f, 0.0f, 0x1.7bd212p-24f, 0.0f, 0.0f, 0x1.e2a024p-101f,
     0x1.22db7p-82f, 0x1.880cfcp-44f, 0x1.ebfca8p-91f, 0x1.878cf6p-115f, 0.0f,
     0x1.b165dp-105f, 0x1.b9ea28p-111f, 0x1.e3a9eep-19f, 0x1.adbafp-33f, 0.0f,
     0x1.cff84ep-61f, 0x1.a5c28p-102f, 0.0f, 0.0f, 0x1.30016p-62f, 0x1.808aa2p-111f,
     0.0f, 0.0f, 0x1.c9a66p-41f, 0.0f, 0x1.85deap-66f, 0.0f, 0.0f, 0x1.aee564p-55f,
     0.0f, 0x1.518d8ap-64f, 0x1.beb7p-115f, 0x1.18e086p-52f, 0x1.db6c4p-8f,
     0x1.0d3eep-43f, 0x1.e12dd2p-19f, 0x1.c458p-119f, 0x1.a8eeb4p-70f,
     0x1.704ee8p-46f, 0x1.4d5bbep-117f, 0.0f, 0x1.e8155cp-22f, 0.0f, 0x1.fd15a6p-94f,
     0x1.198eeap-1f, 0x1.dd70a8p-104f, 0x1.dcd89cp-56f, 0.0f, 0.0f, 0.0f,
     0x1.cae068p-34f, 0x1.b9c82p-59f, 0x1.51989p-13f, 0.0f, 0.0f, 0x1.dfe728p-91f,
     0.0f, 0x1.254588p-87f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.764d6ap-99f, 0.0f, 0.0f, 0.0f, 0x1.ec599ap-124f,
     0x1.54330ep-80f, 0.0f, 0x1.c893ap-111f, 0x1.ba12c4p-7f, 0x1.0f80bcp-30f,
     0x1.ccfda2p-69f, 0x1.2bf1cap-86f, 0.0f, 0x1.231266p-85f, 0.0f, 0x1.95e036p-74f,
     0x1.28316ap-42f, 0.0f, 0.0f, 0x1.d8b1ecp-19f, 0x1.6bd612p-123f, 0.0f, 0.0f,
     0x1.a5d79ap-96f, 0.0f, 0.0f, 0x1.7d0fa2p-109f, 0.0f, 0x1.dd094ap-33f, 0.0f, 0.0f,
     0x1.dcb926p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc80e6p-76f, 0.0f, 0.0f,
     0x1.6aeb72p-116f, 0x1.08184ap-74f, 0.0f, 0.0f, 0.0f, 0x1.805968p-97f,
     0x1.8e0db8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94a614p-102f, 0x1.0e7546p-101f,
     0.0f, 0.0f, 0x1.bf57dp-110f, 0.0f, 0x1.0b22e8p-84f, 0x1.ec3d18p-45f, 0.0f,
     0x1.a8090ap-10f, 0x1.f667c6p-70f, 0x1.fb043cp-62f, 0x1.2e771ap-102f,
     0x1.890774p-52f, 0x1.1b5606p-19f, 0.0f, 0.0f, 0.0f, 0x1.627404p-13f,
     0x1.cb2716p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0b41ep-104f, 0.0f,
     0x1.c63c1ap-112f, 0x1.11f6p-82f, 0.0f, 0x1.7a40cap-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b83574p-52f, 0x1.37f87ap-30f, 0.0f, 0x1.073e36p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4770dap-111f, 0x1.cd45fcp-19f, 0x1.19aa8p-2f, 0.0f, 0x1.ef48bp-115f,
     0x1.fcbc34p-32f, 0x1.54e89ap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69728ep-69f, 0.0f,
     0x1.3af7p-78f, 0x1.180c8cp-6f, 0.0f, 0.0f, 0x1.be9098p-69f, 0x1.5d4378p-9f,
     0x1.c4b66ap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20f716p-117f,
     0x1.91275cp-7f, 0x1.71d636p-70f, 0x1.1acddcp-113f, 0x1.1849f8p-64f,
     0x1.10952p-28f, 0x1.d1c3ap-43f, 0.0f, 0x1.8068b2p-60f, 0x1.47243ap-62f,
     0x1.0a8ff6p-50f, 0.0f, 0.0f, 0.0f, 0x1.40b7bp-1f, 0x1.e1f446p-11f,
     0x1.0498fap-66f, 0.0f, 0x1.dd86ep-42f, 0.0f, 0.0f, 0.0f, 0x1.6b6ffp-46f,
     0x1.cb2a82p-48f, 0x1.a4d4f6p-109f, 0.0f, 0.0f, 0x1.72ad5ep-4f, 0.0f,
     0x1.7fa022p-25f, 0x1.37d34p-55f, 0x1.517b22p-104f, 0.0f, 0.0f, 0x1.7a4cfcp-81f,
     0.0f, 0x1.b54968p-5f, 0x1.db5e78p-112f, 0.0f, 0.0f, 0.0f, 0x1.9c9e06p-103f,
     0x1.282e5cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0981f2p-7f, 0.0f, 0x1.0f365p-100f,
     0.0f, 0.0f, 0x1.be87bcp-103f, 0.0f, 0x1.d6b0aep-103f, 0.0f, 0x1.a8dbcep-32f,
     0x1.e391aep-76f, 0.0f, 0.0f, 0.0f, 0x1.cff63ap-50f, 0.0f, 0x1.e29784p-23f,
     0x1.5057dap-47f, 0.0f, 0.0f, 0x1.9882cep-38f, 0.0f, 0x1.70d9b6p-75f, 0.0f,
     0x1.ff824ap-31f, 0x1.a185dap-38f, 0.0f, 0.0f, 0x1.2ad2dp-38f, 0.0f,
     0x1.2403e6p-80f, 0x1.57697ep-101f, 0x1.9850bcp-91f, 0.0f, 0x1.8d9b2p-14f, 0.0f,
     0x1.9d4afcp-81f, 0.0f, 0x1.26760ep-70f, 0x1.3ac3aep-53f, 0.0f, 0x1.3e6822p-34f,
     0x1.a234fap-78f, 0x1.eb6ac2p-12f, 0x1.c39cfcp-85f, 0x1.7a37a2p-116f, 0.0f,
     0x1.2fee16p-93f, 0.0f, 0x1.d3b34cp-117f, 0x1.11cceap-4f, 0x1.5b1afp-90f, 0.0f,
     0x1.d1f01p-76f, 0x1.af20ap-70f, 0x1.f32bacp-60f, 0x1.6d0fd4p-76f, 0x1.1353f4p-8f,
     0.0f, 0x1.cc55a4p-120f, 0.0f, 0x1.7a17bap-101f, 0x1.2c74bcp-64f, 0.0f,
     0x1.88772ep-43f, 0x1.34b072p-110f, 0x1.69aa72p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7282f4p-69f, 0.0f, 0.0f, 0x1.2d134ep-42f, 0.0f, 0.0f, 0.0f,
     0x1.32e306p-94f, 0.0f, 0x1.f45168p-73f, 0.0f, 0.0f, 0x1.f97468p-41f, 0.0f, 0.0f,
     0.0f, 0x1.9262ccp-105f, 0x1.088814p-39f, 0.0f, 0x1.ff5cc4p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4833b2p-38f, 0x1.e69ae6p-3f, 0.0f, 0.0f, 0x1.951d0cp-83f,
     0x1.074a68p-122f, 0x1.189974p-58f, 0x1.52e72ep-118f, 0.0f, 0x1.51f40cp-92f, 0.0f,
     0.0f, 0x1.a6848p-74f, 0x1.2103acp-41f, 0x1.5a5df2p-13f, 0.0f, 0x1.aa4a8p-53f,
     0x1.26d5ccp-97f, 0x1.15c6d8p-39f, 0x1.1bc062p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cca9c8p-69f, 0x1.7e499p-59f, 0x1.b42e12p-15f, 0x1.d9c32p-109f, 0.0f, 0.0f,
     0.0f, 0x1.506a2ep-48f, 0x1.8ea564p-112f, 0.0f, 0x1.8e9d42p-93f, 0.0f, 0.0f,
     0x1.37c398p-125f, 0.0f, 0.0f, 0x1.7fb962p-101f, 0x1.5daa12p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.62a7fap-57f, 0x1.22c006p-39f, 0x1.8a836ap-26f,
     0x1.9c84f2p-16f, 0.0f, 0x1.a0801cp-69f, 0x1.8a9882p-114f, 0x1.6483ap-40f,
     0x1.8236f8p-8f, 0.0f, 0x1.2e54eep-115f, 0.0f, 0.0f, 0.0f, 0x1.3d39aap-12f, 0.0f,
     0.0f, 0x1.af4a5p-53f, 0.0f, 0x1.619228p-87f, 0.0f, 0.0f, 0.0f, 0x1.31774ep-17f,
     0x1.7a52fcp-76f, 0x1.aabfb6p-105f, 0x1.3f1dc4p-52f, 0x1.f3dccap-101f,
     0x1.30878ap-75f, 0.0f, 0.0f, 0x1.82890ap-87f, 0x1.d4cd3cp-74f, 0.0f, 0.0f,
     0x1.7b5048p-81f, 0.0f, 0x1.ec99f2p-29f, 0x1.1bee62p-14f, 0x1.ef026ep-45f, 0.0f,
     0x1.0725fp-45f, 0x1.049efcp-19f, 0x1.ab18a2p-126f, 0.0f, 0.0f, 0x1.1b3ab8p-114f,
     0x1.d7298p-109f, 0.0f, 0x1.9d50f4p-48f, 0x1.e5b5a4p-5f, 0x1.da8272p-90f, 0.0f,
     0x1.52e80ep-1f, 0.0f, 0.0f, 0x1.462758p-54f, 0x1.36df5cp-85f, 0x1.1bd1b8p-56f,
     0.0f, 0x1.895298p-43f, 0.0f, 0.0f, 0x1.1fe778p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8d356p-36f, 0x1.94fc2cp-46f, 0x1.0f81fcp-33f, 0.0f, 0x1.3e904cp-125f,
     0x1.874d28p-54f, 0.0f, 0.0f, 0x1.d709cep-32f, 0.0f, 0x1.c50f92p-74f, 0.0f,
     0x1.3a4cb4p-20f, 0x1.26c8a2p-15f, 0x1.70c804p-29f, 0.0f, 0.0f, 0.0f,
     0x1.f1c2e8p-99f, 0x1.a7f77p-81f, 0x1.2ec87cp-78f, 0x1.e63b2ap-39f, 0.0f, 0.0f,
     0.0f, 0x1.fbe1ecp-63f, 0x1.9551acp-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08b196p-39f,
     0x1.028e38p-37f, 0x1.ab77fep-11f, 0x1.1af53ep-75f, 0.0f, 0x1.a5950ep-78f, 0.0f,
     0x1.47aa32p-28f, 0x1.610f7ap-66f, 0.0f, 0x1.804a42p-15f, 0x1.310aecp-115f,
     0x1.298ccp-87f, 0x1.ff4bacp-90f, 0.0f, 0x1.ebb93ep-37f, 0x1.5d3502p-16f,
     0x1.30f8cap-61f, 0.0f, 0x1.9c6ea2p-83f, 0x1.9a5f24p-101f, 0x1.70889cp-68f, 0.0f,
     0.0f, 0x1.772e72p-78f, 0.0f, 0x1.2c4f8p-101f, 0.0f, 0x1.ac334cp-18f,
     0x1.49c678p-91f, 0.0f, 0.0f, 0x1.4cd7aap-92f, 0.0f, 0x1.cf694cp-10f,
     0x1.be7cd4p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb316p-77f, 0.0f, 0.0f,
     0x1.ba5b1ap-76f, 0x1.2e6f3cp-32f, 0.0f, 0.0f, 0.0f, 0x1.09ef8p-77f,
     0x1.a32916p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a1e16p-10f, 0.0f, 0x1.d54332p-30f,
     0x1.87c216p-64f, 0.0f, 0.0f, 0.0f, 0x1.e7f0bp-10f, 0x1.279c6cp-12f,
     0x1.134518p-122f, 0.0f, 0x1.c73c1cp-121f, 0.0f, 0.0f, 0x1.53702ep-118f,
     0x1.a40474p-82f, 0x1.56f6eap-107f, 0x1.f02efcp-27f, 0x1.ba0b38p-32f, 0.0f,
     0x1.0dd3eep-50f, 0x1.74192p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b1a3ep-24f,
     0x1.1ef05ep-7f, 0x1.5be8dap-45f, 0x1.34fc18p-83f, 0x1.a74bbep-123f, 0.0f,
     0x1.79bfacp-9f, 0.0f, 0x1.710e44p-52f, 0x1.8ec79ep-72f, 0.0f, 0x1.43c35cp-62f,
     0x1.7bb2b2p-56f, 0x1.417dcp-28f, 0x1.9a5a0ap-61f, 0x1.b7ff92p-51f,
     0x1.2ac548p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4cafcp-106f, 0.0f,
     0x1.9c36eap-104f, 0x1.c95db2p-17f, 0x1.464a8p-111f, 0.0f, 0x1.bdaf48p-51f,
     0x1.806e4p-61f, 0x1.0824p-84f, 0x1.5ab3a8p-49f, 0x1.1097c2p-9f, 0.0f,
     0x1.376584p-32f, 0.0f, 0.0f, 0.0f, 0x1.4f0c2p-10f, 0x1.0bd7d2p-54f, 0.0f,
     0x1.d61788p-123f, 0x1.9c68cep-65f, 0x1.63e34cp-16f, 0.0f, 0.0f, 0x1.e1855cp-42f,
     0x1.37ebfap-50f, 0.0f, 0x1.91c9a2p-12f, 0x1.ba6998p-103f, 0x1.5db52p-108f,
     0x1.3688dp-78f, 0x1.22a2d2p-47f, 0x1.1ee81p-118f, 0.0f, 0x1.f5929ap-25f,
     0x1.1211cep-72f, 0.0f, 0x1.f3aecep-121f, 0.0f, 0x1.dffc9cp-72f, 0x1.bf77fcp-88f,
     0x1.aeebccp-113f, 0.0f, 0.0f, 0x1.fcc0a4p-112f, 0.0f, 0.0f, 0x1.30268cp-78f,
     0x1.79f6fcp-112f, 0.0f, 0.0f, 0x1.e3d1a2p-20f, 0x1.2a7356p-13f, 0.0f, 0.0f,
     0x1.66418cp-14f, 0x1.7d6ed4p-40f, 0.0f, 0.0f, 0x1.f3ecb4p-107f, 0x1.2354c8p-75f,
     0.0f, 0x1.46fe52p-113f, 0.0f, 0.0f, 0x1.2110b8p-47f, 0x1.0ebd02p-15f,
     0x1.b011dp-6f, 0.0f, 0.0f, 0x1.fa515p-8f, 0.0f, 0x1.ea719cp-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9601fp-115f, 0x1.5ce1d8p-48f, 0.0f,
     0x1.643808p-60f, 0.0f, 0x1.61f77cp-2f, 0.0f, 0x1.928908p-37f, 0x1.8ab554p-103f,
     0.0f, 0.0f, 0.0f, 0x1.2c7674p-6f, 0x1.18abd6p-12f, 0.0f, 0x1.747b4cp-106f,
     0x1.7bab64p-11f, 0.0f, 0x1.c6a13ep-62f, 0x1.66b01ap-74f, 0.0f, 0x1.8b45f4p-125f,
     0.0f, 0x1.0db2eap-98f, 0x1.741d42p-24f, 0x1.3ff3ap-49f, 0x1.ab58fap-109f,
     0x1.19f6bep-102f, 0x1.697598p-32f, 0.0f, 0.0f, 0x1.09d48p-31f, 0x1.01985ep-79f,
     0x1.583482p-17f, 0.0f, 0x1.f55fe4p-37f, 0.0f, 0.0f, 0.0f, 0x1.24c2fap-17f,
     0x1.18a5a8p-11f, 0x1.1bc67cp-3f, 0.0f, 0x1.3a2b56p-52f, 0.0f, 0.0f, 0.0f,
     0x1.33c256p-47f, 0x1.635944p-61f, 0x1p0f, 0.0f, 0x1.0a2d44p-91f, 0.0f,
     0x1.542ffap-13f, 0.0f, 0x1.e6ff08p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05a582p-108f, 0.0f, 0.0f, 0x1.826174p-124f, 0x1.7b6aaap-18f,
     0x1.9c0bb6p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bc3f2p-49f, 0.0f, 0.0f,
     0x1.0d0eap-90f, 0.0f, 0x1.d00366p-111f, 0.0f, 0.0f, 0.0f, 0x1.b738bep-37f,
     0x1.277798p-83f, 0.0f, 0.0f, 0x1.b33716p-9f, 0.0f, 0x1.a3af18p-29f, 0.0f,
     0x1.e536eap-118f, 0.0f, 0x1.61b8dap-79f, 0.0f, 0x1.4e8412p-112f, 0.0f, 0.0f,
     0x1.53e522p-51f, 0.0f, 0x1.69ed24p-3f, 0.0f, 0.0f, 0.0f, 0x1.9a2442p-29f, 0.0f,
     0x1.c1c228p-8f, 0x1.638f28p-19f, 0.0f, 0x1.f8a50ap-110f, 0x1.a59106p-38f,
     0x1.3e137cp-46f, 0x1.7a91cp-90f, 0.0f, 0.0f, 0x1.7d4a36p-19f, 0x1.ba51a2p-105f,
     0.0f, 0x1.d0f69ep-114f, 0x1.0d60ccp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04b738p-84f,
     0.0f, 0.0f, 0x1.ce8bdep-4f, 0.0f, 0x1.893c82p-82f, 0.0f, 0.0f, 0x1.b79576p-20f,
     0.0f, 0x1.53c7ap-37f, 0.0f, 0x1.47790ap-40f, 0x1.ea393ap-15f, 0x1.f39fe4p-110f,
     0x1.331302p-64f, 0x1.1fdbe8p-45f, 0x1.d0eb7ep-64f, 0x1.7cbbbep-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b062cp-10f, 0x1.310078p-18f, 0x1.394bc6p-82f, 0.0f,
     0x1.5e6546p-53f, 0x1.81ba1p-90f, 0.0f, 0.0f, 0x1.9eb7bp-84f, 0x1.4c3222p-51f,
     0x1.674fa2p-80f, 0x1.cc83d8p-56f, 0.0f, 0x1.be50dp-50f, 0x1.caf7a6p-115f,
     0x1.947886p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c5b4ap-82f, 0.0f, 0x1.05a092p-32f,
     0x1.535b5ep-100f, 0x1.6e753cp-105f, 0.0f, 0x1.cfedd4p-104f, 0x1p0f,
     0x1.d37928p-111f, 0.0f, 0.0f, 0x1.9a0caep-72f, 0.0f, 0.0f, 0x1.9b10ep-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5e0c9p-103f, 0x1.d135bap-99f, 0.0f, 0x1.d9edd2p-50f,
     0x1.e4d85ap-119f, 0x1.3af04ap-3f, 0x1.29dbfcp-75f, 0x1.45b7f2p-44f, 0.0f, 0.0f,
     0x1.e90f1p-96f, 0.0f, 0.0f, 0x1.c287b8p-76f, 0x1.8abbe4p-106f, 0x1.700afep-16f,
     0.0f, 0.0f, 0x1.54d39cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6660ap-67f, 0x1.953da4p-50f, 0.0f, 0.0f, 0.0f, 0x1.dac6b2p-76f,
     0x1.0c39eep-116f, 0x1.3e35acp-86f, 0x1.46765ap-79f, 0x1.1a9c2cp-117f, 0.0f, 0.0f,
     0x1.66f102p-72f, 0.0f, 0.0f, 0x1.f69382p-91f, 0x1.94c104p-96f, 0x1.0495eap-89f,
     0x1.068936p-26f, 0x1.1b381ep-6f, 0.0f, 0x1.367782p-53f, 0.0f, 0.0f,
     0x1.816408p-23f, 0.0f, 0.0f, 0.0f, 0x1.69bdbap-75f, 0x1p0f, 0x1.de4f38p-118f,
     0.0f, 0x1.667d44p-123f, 0x1.d56026p-96f, 0x1.0089fep-68f, 0x1.5cfcb2p-87f, 0.0f,
     0x1.370694p-126f, 0.0f, 0.0f, 0x1.1e751ap-72f, 0.0f, 0x1.0b2b82p-95f,
     0x1.fee06p-84f, 0.0f, 0.0f, 0x1.b5b476p-39f, 0.0f, 0x1.3d87c8p-56f,
     0x1.346a2p-76f, 0x1.19b4ap-76f, 0x1.4f600ap-13f, 0.0f, 0.0f, 0x1.e0c34p-75f,
     0x1.d75878p-10f, 0.0f, 0.0f, 0x1.ee5826p-32f, 0x1.0cb042p-36f, 0.0f,
     0x1.344f5ap-121f, 0.0f, 0x1.18babep-19f, 0.0f, 0.0f, 0x1.148564p-55f, 0.0f,
     0x1.12ac62p-52f, 0.0f, 0x1.5b364cp-42f, 0.0f, 0.0f, 0x1.ee3002p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f96812p-125f, 0x1.9816a8p-102f, 0x1.09f1dap-75f, 0.0f,
     0x1.6339e4p-27f, 0x1p0f, 0x1.8b463ep-78f, 0x1.00bf3ep-35f, 0x1.f09c02p-91f, 0.0f,
     0x1.4e104ep-90f, 0x1.4b504ep-16f, 0x1.a13606p-43f, 0x1.04e564p-47f, 0.0f, 0.0f,
     0.0f, 0x1.b88b6ep-62f, 0.0f, 0.0f, 0x1.b51faep-125f, 0x1.2c9f0ap-47f, 0.0f, 0.0f,
     0.0f, 0x1.6fddbep-28f, 0x1.a40cc8p-35f, 0.0f, 0x1.0676e2p-24f, 0.0f,
     0x1.a7d76cp-76f, 0.0f, 0x1.f059b8p-44f, 0x1.73602ep-71f, 0.0f, 0x1.a6e034p-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5febdcp-13f, 0x1.83d094p-67f, 0x1.803e6ep-57f, 0.0f,
     0x1.1c8c18p-23f, 0.0f, 0x1p0f, 0x1.16f6eep-29f, 0.0f, 0.0f, 0x1.71659ep-93f,
     0x1.dc6cbep-109f, 0.0f, 0x1.b83fcep-112f, 0.0f, 0.0f, 0x1.dfa83cp-33f,
     0x1.9e3df2p-30f, 0x1.f3e5f4p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a97d16p-94f,
     0x1.bd02cap-102f, 0x1.4bbbe4p-46f, 0x1.bf8d2cp-36f, 0.0f, 0.0f, 0.0f,
     0x1.65ef3ap-110f, 0x1p0f, 0x1.a2ca4p-85f, 0x1.40a136p-41f, 0x1.dd0deap-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.774c8ap-32f, 0.0f, 0x1.070cd8p-86f, 0x1.ce8a32p-96f,
     0x1.4cff8ap-31f, 0.0f, 0.0f, 0x1.e15098p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e3adcp-59f, 0.0f, 0x1.1aec92p-59f, 0x1.8131eep-25f, 0.0f,
     0x1.a403f4p-17f, 0x1.f1a8bap-68f, 0.0f, 0x1.f2b2f8p-122f, 0.0f, 0.0f, 0.0f,
     0x1.610892p-99f, 0.0f, 0x1.52177ap-40f, 0.0f, 0x1.d03e6p-123f, 0.0f,
     0x1.bb97acp-55f, 0x1.5914cap-9f, 0.0f, 0.0f, 0x1.ec5048p-115f, 0x1.5213bap-87f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_fdimf4_avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_fdimf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fdimf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
