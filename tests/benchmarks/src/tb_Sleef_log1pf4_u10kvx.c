/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pf4_u10kvx.c --function Sleef_log1pf4_u10kvx \
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
     0.0f, 0x1.282758p-103f, 0.0f, 0.0f, 0x1.ac2b92p-32f, 0.0f, 0x1.af493cp-40f,
     0.0f, 0x1.2ce378p-39f, 0x1.b0a4eap-56f, 0x1.cf0ddap-83f, 0.0f, 0.0f,
     0x1.4ca8b2p-59f, 0.0f, 0x1.6864bep-82f, 0.0f, 0.0f, 0x1.7b7deap-66f,
     0x1.adabc2p-23f, 0.0f, 0x1.bbc074p-74f, 0x1.5456f4p-125f, 0x1.4621c4p-33f,
     0x1.d30f2ep-125f, 0x1.ee503ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de3be2p-48f,
     0x1.244f18p-89f, 0.0f, 0x1.f44322p-104f, 0.0f, 0.0f, 0x1.68ca2ep-62f,
     0x1.9898ecp-81f, 0.0f, 0x1.ea021ep-81f, 0x1.26298cp-7f, 0x1.637c1ep-28f,
     0x1.dc002ep-11f, 0.0f, 0.0f, 0x1.bd8696p-22f, 0.0f, 0.0f, 0x1.a2db8p-66f, 0.0f,
     0.0f, 0.0f, 0x1.dc73c6p-107f, 0x1.b0a7dp-119f, 0.0f, 0.0f, 0x1.7ffbf2p-31f, 0.0f,
     0.0f, 0x1.f8856ap-126f, 0x1.b1cfa4p-54f, 0x1.1465a2p-28f, 0.0f, 0.0f, 0.0f,
     0x1.a84ae6p-65f, 0.0f, 0.0f, 0x1.45463cp-14f, 0.0f, 0x1.48503p-94f,
     0x1.2e1896p-43f, 0x1.783ae6p-81f, 0x1.d2fd8p-54f, 0x1.b2d93ep-102f, 0.0f, 0.0f,
     0x1.72cbacp-63f, 0x1.694074p-111f, 0x1.6ead8ap-37f, 0x1.742c5ep-113f, 0.0f,
     0x1.4768b6p-50f, 0x1.fa84eep-74f, 0.0f, 0x1.26a77cp-88f, 0x1.3ef53ap-12f, 0.0f,
     0.0f, 0.0f, 0x1.70a698p-68f, 0x1.c599a8p-56f, 0x1.220bdcp-76f, 0x1.94fb42p-17f,
     0x1.e43f38p-14f, 0x1.f645aep-43f, 0x1.f52fb4p-95f, 0.0f, 0.0f, 0x1.db5f2p-64f,
     0.0f, 0.0f, 0.0f, 0x1.dba62cp-64f, 0x1.58caccp-108f, 0x1.43bf1ep-20f, 0.0f,
     0x1.3690ecp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7ad4ep-43f, 0x1.a7df46p-86f,
     0x1.551d78p-54f, 0x1.007de2p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a75b7ap-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c097p-76f, 0x1.d45694p-74f, 0.0f,
     0x1.0cd7cp-10f, 0.0f, 0x1.1f091ep-16f, 0x1.cf4946p-59f, 0.0f, 0.0f, 0.0f,
     0x1.f04416p-121f, 0x1.c352aap-101f, 0x1.d7372p-45f, 0.0f, 0.0f, 0.0f,
     0x1.195658p-55f, 0.0f, 0.0f, 0.0f, 0x1.e2e77ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.30e0d8p-48f, 0x1.eb7d6ap-79f, 0.0f, 0x1.9d5b78p-26f, 0x1.a28558p-22f,
     0x1.287956p-72f, 0.0f, 0.0f, 0.0f, 0x1.6b4f9p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ba76a6p-3f, 0x1.ba0b0cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e78f1ap-34f, 0.0f, 0x1.f7865ap-11f, 0.0f, 0x1.8b25ap-74f, 0x1.cca48ap-104f,
     0.0f, 0x1.c640ep-99f, 0x1.29086cp-104f, 0.0f, 0.0f, 0.0f, 0x1.c0428ap-33f, 0.0f,
     0x1.dead86p-84f, 0x1.a9fe68p-79f, 0.0f, 0x1.e8d21ap-34f, 0.0f, 0x1.38eap-42f,
     0.0f, 0.0f, 0x1.b5cc32p-6f, 0x1.d93674p-113f, 0.0f, 0x1.25cca8p-122f, 0.0f,
     0x1.ba617ap-106f, 0x1.bd369p-22f, 0x1.bc6138p-24f, 0.0f, 0.0f, 0x1.76d116p-93f,
     0.0f, 0x1.5ad852p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f16e62p-50f,
     0x1.c2b5fp-64f, 0x1.b3495p-123f, 0.0f, 0.0f, 0x1.caf77ap-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.68f462p-22f, 0.0f, 0x1.952be2p-116f, 0.0f, 0x1.9af0eap-16f, 0.0f,
     0x1.ef3764p-8f, 0x1.149c92p-7f, 0x1.1e26ccp-36f, 0.0f, 0x1.169f84p-90f, 0.0f,
     0.0f, 0.0f, 0x1.49b7e4p-111f, 0.0f, 0x1.dabbeep-101f, 0.0f, 0.0f,
     0x1.4d4c2ep-24f, 0.0f, 0.0f, 0x1.d143p-18f, 0.0f, 0x1.367b36p-33f,
     0x1.2dc106p-71f, 0x1.f58e58p-116f, 0x1.bb2df2p-112f, 0x1.77673ep-122f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aba3ep-13f, 0.0f, 0x1.17e5e4p-38f, 0x1.39845ap-43f,
     0.0f, 0.0f, 0x1.ff2a6ap-111f, 0x1.29a762p-110f, 0.0f, 0x1.e9e7d8p-124f, 0.0f,
     0.0f, 0x1.6829cep-39f, 0.0f, 0.0f, 0x1.0ea886p-97f, 0.0f, 0x1.be8abcp-70f,
     0x1.bfabc8p-117f, 0.0f, 0.0f, 0x1.dd25cep-83f, 0.0f, 0x1.c14be4p-16f, 0.0f,
     0x1.f7fe16p-84f, 0.0f, 0x1.632dacp-76f, 0x1.ea07e8p-38f, 0x1.91318p-15f,
     0x1.23040ap-125f, 0x1.db6d1p-91f, 0.0f, 0.0f, 0x1.f20182p-116f, 0.0f,
     0x1.949ebep-9f, 0.0f, 0.0f, 0x1.81825ap-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.195042p-125f, 0x1.cdcb46p-40f, 0x1.7f72dcp-112f, 0x1.5a2682p-82f,
     0x1.f1494p-17f, 0.0f, 0x1.f8eb8cp-34f, 0x1.6bda3p-93f, 0.0f, 0x1.15b2dep-77f,
     0x1.b6092ep-4f, 0.0f, 0x1.578736p-105f, 0.0f, 0.0f, 0.0f, 0x1.70ed7ap-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d7e98p-59f, 0x1.00bbb2p-23f, 0.0f, 0.0f,
     0x1.5b31bep-5f, 0x1.9ea122p-122f, 0x1.adc11cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.55b61cp-123f, 0x1.ba3feap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.87a3c6p-54f, 0.0f, 0.0f, 0.0f, 0x1.4fdf02p-16f, 0.0f, 0.0f, 0.0f,
     0x1.1cdb1ep-114f, 0.0f, 0x1.15f692p-62f, 0x1.a2a348p-114f, 0x1.f894cp-90f,
     0x1.1f628cp-73f, 0x1.018feap-34f, 0.0f, 0.0f, 0x1.6ff76cp-16f, 0.0f, 0.0f,
     0x1.ad971cp-88f, 0x1.d4e39p-6f, 0.0f, 0.0f, 0x1.8bc176p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9e4882p-6f, 0.0f, 0.0f, 0x1.c69814p-50f, 0.0f, 0.0f, 0x1.97bb12p-79f,
     0.0f, 0x1.e1f6fap-21f, 0.0f, 0x1.a640b4p-102f, 0x1.1aa72ap-26f, 0x1.05e402p-90f,
     0.0f, 0x1.d7f412p-61f, 0x1.01aeccp-57f, 0.0f, 0.0f, 0x1.c14aap-40f, 0.0f,
     0x1.4949f2p-103f, 0x1.8a0e0ep-117f, 0x1.9f7aap-45f, 0x1.b0560ap-106f, 0.0f, 0.0f,
     0x1.86c5e2p-92f, 0.0f, 0.0f, 0.0f, 0x1.ea4f5ep-91f, 0x1.32cf3ep-45f,
     0x1.e526f2p-110f, 0.0f, 0x1.d01e9p-84f, 0x1.9713a6p-93f, 0x1.6905b4p-113f,
     0x1.ba8534p-97f, 0.0f, 0.0f, 0x1.2860ep-68f, 0x1.cb08dep-83f, 0.0f, 0.0f,
     0x1.c538f8p-112f, 0x1.fe9ef6p-13f, 0x1.a5944cp-5f, 0.0f, 0x1.6544cp-7f, 0.0f,
     0.0f, 0x1.db35ep-32f, 0x1.a40e9ep-10f, 0.0f, 0x1.d0303ep-109f, 0x1.2475ep-105f,
     0x1.94af9ep-126f, 0.0f, 0x1.181bdcp-8f, 0x1.f40992p-9f, 0x1.d87c92p-113f,
     0x1.cc8a2p-68f, 0.0f, 0x1.f23048p-120f, 0.0f, 0.0f, 0.0f, 0x1.b592cap-33f,
     0x1.26e12p-75f, 0.0f, 0.0f, 0.0f, 0x1.89ed84p-115f, 0.0f, 0x1.753ed2p-20f, 0.0f,
     0x1.b0b964p-122f, 0x1.c8681ap-49f, 0x1.71986ap-77f, 0x1.5986b6p-38f, 0.0f, 0.0f,
     0x1.eab5ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.310738p-37f, 0.0f,
     0x1.06a97p-70f, 0x1.2a9526p-73f, 0x1.9680e2p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e03p-71f, 0.0f, 0x1.56c3bap-87f, 0x1.a654bp-17f, 0x1.9b0202p-62f, 0x1p0f,
     0x1.dbc476p-109f, 0x1.931f3p-113f, 0x1.011edp-126f, 0.0f, 0x1.11a2bp-36f,
     0x1.b55852p-39f, 0.0f, 0.0f, 0.0f, 0x1.ccb034p-22f, 0x1.8d058cp-95f,
     0x1.1461d8p-26f, 0.0f, 0x1.fce5cep-69f, 0x1.1493d6p-92f, 0x1.77f844p-34f, 0.0f,
     0x1.bac4ccp-97f, 0x1.ba2a48p-34f, 0x1.54db3ep-64f, 0x1.1610e2p-121f, 0.0f, 0.0f,
     0x1.95379cp-31f, 0x1.c09256p-8f, 0x1.043404p-87f, 0.0f, 0x1.6f86f6p-107f, 0.0f,
     0.0f, 0x1.2d735p-69f, 0x1.a04884p-12f, 0.0f, 0.0f, 0x1.e4b816p-99f, 0.0f,
     0x1.22faecp-70f, 0.0f, 0.0f, 0x1.1bb9c4p-114f, 0.0f, 0x1.72c3ccp-42f,
     0x1.7ae52ap-86f, 0.0f, 0.0f, 0x1.91e784p-82f, 0.0f, 0.0f, 0x1.5feeacp-63f,
     0x1.3a46d2p-63f, 0x1.967b2ep-9f, 0.0f, 0.0f, 0.0f, 0x1.110e5ap-75f, 0.0f, 0.0f,
     0.0f, 0x1.64d282p-56f, 0x1.77eb1cp-58f, 0x1.c55a34p-55f, 0.0f, 0.0f, 0.0f,
     0x1.b2cc28p-55f, 0x1.08e56ap-31f, 0x1.b6701ap-14f, 0.0f, 0.0f, 0x1.32bfdp-15f,
     0x1.be550ep-12f, 0.0f, 0x1.cdd326p-89f, 0.0f, 0x1.122464p-85f, 0.0f,
     0x1.bef6a8p-109f, 0.0f, 0.0f, 0x1.899f3ep-110f, 0x1.098a2cp-34f, 0x1.ec1d68p-91f,
     0x1.749f3ap-123f, 0x1.a71dd6p-24f, 0x1.82384ep-95f, 0.0f, 0x1.8deccap-14f, 0.0f,
     0x1.de6bbep-23f, 0.0f, 0.0f, 0x1.b9a0ap-51f, 0.0f, 0x1.a57c5cp-122f, 0.0f,
     0x1.273c76p-107f, 0.0f, 0x1.610f82p-11f, 0x1.c203bcp-110f, 0x1.6ef99ap-32f,
     0x1.e33a1ep-21f, 0x1.bc5c48p-59f, 0.0f, 0.0f, 0x1.ad91f4p-42f, 0.0f, 0.0f,
     0x1.01f978p-118f, 0.0f, 0.0f, 0.0f, 0x1.9a187cp-70f, 0x1.a45d64p-109f,
     0x1.ee5824p-54f, 0x1.b76bd2p-59f, 0x1p0f, 0.0f, 0.0f, 0x1.8983b2p-77f,
     0x1.c21406p-65f, 0.0f, 0.0f, 0x1.ae1f9ep-107f, 0x1.b1cbc8p-10f, 0.0f,
     0x1.cd073cp-54f, 0x1.19c05cp-117f, 0.0f, 0.0f, 0x1.64bd26p-82f, 0.0f,
     0x1.1ee01p-56f, 0.0f, 0x1.de079p-117f, 0x1.7953c2p-94f, 0.0f, 0.0f, 0.0f,
     0x1.b1f17ap-94f, 0.0f, 0x1.c8188ep-117f, 0x1.a37a9ep-8f, 0.0f, 0x1.9fc622p-66f,
     0x1.5bf8b2p-91f, 0.0f, 0x1.7353b2p-57f, 0.0f, 0.0f, 0x1.25a73ep-81f,
     0x1.71d692p-70f, 0x1.8b7d22p-43f, 0x1.4ee258p-114f, 0x1.536adp-89f,
     0x1.4d8998p-79f, 0x1.e05ad8p-97f, 0x1.e9c9ccp-2f, 0x1.70ec9ep-14f, 0x1p0f,
     0x1.c73058p-68f, 0x1.a9258cp-120f, 0x1.030fe8p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5fcd3cp-39f, 0x1.007344p-35f, 0x1.016626p-35f, 0x1.7dce3ap-119f,
     0x1.dab03ap-108f, 0x1.305d94p-95f, 0x1.8903dep-80f, 0.0f, 0x1.3358e2p-64f, 0.0f,
     0x1.94bdp-106f, 0.0f, 0.0f, 0.0f, 0x1.81fd9ep-101f, 0.0f, 0x1.78ccccp-101f, 0.0f,
     0.0f, 0x1.801976p-71f, 0x1.57e5d6p-60f, 0.0f, 0x1.0c56e2p-66f, 0x1.2065a4p-18f,
     0.0f, 0x1.a4d328p-65f, 0.0f, 0.0f, 0x1.a79a4ap-24f, 0.0f, 0x1.8ad96ep-34f, 0.0f,
     0.0f, 0x1.2e318ep-126f, 0x1.b6d93p-84f, 0.0f, 0x1.e070cep-17f, 0.0f,
     0x1.73ff6ep-8f, 0.0f, 0x1.e83372p-52f, 0x1.376a1cp-38f, 0.0f, 0x1.f44d68p-34f,
     0x1.3d4694p-88f, 0x1.9be2dep-78f, 0.0f, 0.0f, 0x1.48c81ap-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9f028cp-116f, 0.0f, 0x1.fe1e32p-126f, 0x1.5e26bep-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7d3bap-36f, 0.0f, 0.0f, 0.0f, 0x1.af8518p-56f,
     0x1.4425fcp-42f, 0x1.b39234p-33f, 0x1.0f185ep-6f, 0x1.91e926p-1f, 0.0f,
     0x1.0569e6p-10f, 0x1.c21aa8p-32f, 0.0f, 0.0f, 0x1.aee6f8p-73f, 0.0f,
     0x1.695236p-84f, 0x1.df4c2ep-103f, 0x1.62368ep-56f, 0.0f, 0x1.82764cp-53f,
     0x1.b0cb44p-72f, 0x1.1a5fe8p-122f, 0.0f, 0.0f, 0.0f, 0x1.58b02ep-62f,
     0x1.5af678p-25f, 0x1.09fcbcp-86f, 0.0f, 0.0f, 0x1.49122ep-75f, 0.0f, 0.0f,
     0x1.070ec6p-51f, 0.0f, 0.0f, 0x1.229a08p-13f, 0.0f, 0.0f, 0x1.257b0ap-46f,
     0x1.05b53ap-81f, 0.0f, 0.0f, 0x1.0c69e6p-125f, 0x1.46b16p-119f, 0.0f, 0.0f,
     0x1.d27d9ep-110f, 0x1.6997ccp-57f, 0x1.511eb8p-123f, 0x1.42656ap-1f,
     0x1.0cb678p-125f, 0x1.4e34d4p-27f, 0x1.08495p-123f, 0x1.031b04p-44f,
     0x1.8f51bap-24f, 0.0f, 0.0f, 0x1.d75282p-59f, 0.0f, 0x1.03f912p-114f, 0.0f, 0.0f,
     0x1.274cccp-22f, 0x1.3p-20f, 0x1.e93e52p-117f, 0x1.ea3352p-88f, 0x1.50248ep-68f,
     0x1.d3f51p-11f, 0.0f, 0x1.17e7p-89f, 0x1.f7256cp-126f, 0x1.4ae5f4p-73f, 0.0f,
     0.0f, 0.0f, 0x1.d53e56p-27f, 0x1.a9fb9ep-53f, 0x1.8047a6p-21f, 0x1.406accp-102f,
     0x1.a776fp-49f, 0x1.beaf56p-55f, 0x1.ff771p-95f, 0.0f, 0x1.f3b632p-37f, 0.0f,
     0.0f, 0x1.4603e8p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c59b46p-106f, 0x1.9196a8p-47f,
     0x1.e98106p-75f, 0x1.17d0b8p-7f, 0x1.aa98aap-47f, 0x1.883cb2p-52f,
     0x1.f467cep-80f, 0.0f, 0x1.f0e892p-90f, 0x1.e59a52p-62f, 0x1.1e898cp-43f, 0.0f,
     0x1.c8fb3p-92f, 0x1.9e605p-88f, 0.0f, 0.0f, 0x1.43b57cp-26f, 0x1.5a63dap-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.073e9ep-91f, 0.0f, 0.0f, 0x1.079e26p-7f,
     0x1.7641e6p-92f, 0.0f, 0x1.343652p-10f, 0.0f, 0.0f, 0.0f, 0x1.968b9ep-37f,
     0x1.a44e8p-120f, 0.0f, 0x1.35aabep-11f, 0x1.a11ce6p-55f, 0x1.9fcae2p-94f,
     0x1.2b01cap-34f, 0.0f, 0.0f, 0x1.9498bp-100f, 0.0f, 0x1.719b34p-59f,
     0x1.df2fd8p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.866e56p-37f, 0x1.ebe1cp-8f, 0.0f,
     0x1.356724p-39f, 0x1.3b8084p-99f, 0.0f, 0x1.92e48ap-109f, 0x1.24debp-83f,
     0x1.867136p-80f, 0x1.a5fa4ep-107f, 0.0f, 0x1.7e06e6p-13f, 0.0f, 0x1.4a5c72p-106f,
     0x1.634e2p-106f, 0.0f, 0x1.c9d24ep-33f, 0x1.7ad482p-72f, 0x1.5f1f8cp-91f,
     0x1.8498a4p-88f, 0.0f, 0.0f, 0x1.a9f6f6p-69f, 0.0f, 0x1.23c46cp-72f,
     0x1.d6fdf2p-88f, 0.0f, 0x1.5f22ccp-99f, 0x1.840bep-4f, 0.0f, 0x1.94bb84p-67f,
     0x1.96e0a4p-6f, 0.0f, 0x1.d2e62cp-40f, 0x1.fa81dap-84f, 0x1.7fca5cp-30f,
     0x1.66c2dap-33f, 0.0f, 0.0f, 0x1.df4478p-72f, 0.0f, 0.0f, 0x1.51a822p-62f, 0.0f,
     0x1.8479fp-76f, 0x1.10be24p-5f, 0x1.ae5bbap-100f, 0x1.de556ep-49f,
     0x1.2ad034p-1f, 0x1.4bb836p-35f, 0.0f, 0x1p0f, 0.0f, 0x1.3ee28ep-8f, 0.0f, 0.0f,
     0x1.ea80b2p-25f, 0.0f, 0x1.431982p-51f, 0x1.0640b6p-118f, 0x1.3807dp-68f, 0.0f,
     0x1.caa156p-33f, 0x1.92db9cp-48f, 0x1.4b02ecp-100f, 0x1.fbc07p-79f,
     0x1.67e642p-44f, 0x1.b2f3bcp-79f, 0.0f, 0x1.92f008p-14f, 0x1.2a9746p-103f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed8aeep-43f, 0x1.5f39cap-43f,
     0x1.76029cp-59f, 0.0f, 0.0f, 0.0f, 0x1.9a2bc4p-50f, 0x1.1db9f2p-116f,
     0x1.e8959ap-26f, 0x1.16fec4p-77f, 0.0f, 0x1.3eb1dep-92f, 0x1.beee32p-95f,
     0x1.103ed6p-103f, 0.0f, 0x1.f8aa1p-7f, 0.0f, 0.0f, 0x1.b230a4p-126f,
     0x1.2d83a8p-83f, 0x1.37b8a8p-94f, 0.0f, 0x1.adbd92p-110f, 0.0f, 0.0f,
     0x1.8c69e8p-7f, 0.0f, 0.0f, 0.0f, 0x1.d498dp-71f, 0x1.40889ep-58f, 0.0f,
     0x1.fe9c5p-9f, 0.0f, 0x1.f57d9p-123f, 0.0f, 0.0f, 0.0f, 0x1.3b48ep-124f,
     0x1.d7067cp-122f, 0.0f, 0.0f, 0x1.223ce6p-31f, 0.0f, 0x1.73ce4p-14f, 0.0f, 0.0f,
     0x1.2d8f24p-46f, 0x1.bf5fc6p-54f, 0x1.1493fcp-13f, 0x1.2de152p-30f,
     0x1.37ab38p-48f, 0.0f, 0.0f, 0x1.0d4186p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2d9d5p-58f, 0.0f, 0.0f, 0x1.92ac92p-79f
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
            tmp1 = Sleef_log1pf4_u10kvx(tmp0);
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
    printf("Sleef_log1pf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log1pf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
