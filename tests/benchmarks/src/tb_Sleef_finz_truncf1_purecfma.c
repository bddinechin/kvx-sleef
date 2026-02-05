/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncf1_purecfma.c --function \
 *     Sleef_finz_truncf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a9154p-99f, 0.0f, 0x1.a40d54p-89f,
     0x1.6c60fp-125f, 0x1.29ee4ap-24f, 0x1.402cdcp-106f, 0.0f, 0.0f, 0x1.039722p-57f,
     0.0f, 0x1.a5dffp-73f, 0.0f, 0.0f, 0x1.cbff6p-28f, 0x1.737ed2p-85f, 0.0f, 0.0f,
     0.0f, 0x1.b0a886p-70f, 0x1.005cbcp-52f, 0.0f, 0.0f, 0.0f, 0x1.048cep-105f, 0.0f,
     0.0f, 0.0f, 0x1.ccde48p-91f, 0.0f, 0.0f, 0x1.dc7d5cp-11f, 0x1.635172p-90f, 0.0f,
     0.0f, 0.0f, 0x1.b82d56p-71f, 0.0f, 0x1.2cc774p-23f, 0x1.7085d2p-85f,
     0x1.40910ap-46f, 0x1.8cda7cp-73f, 0x1.14e856p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.063ca6p-60f, 0.0f, 0x1.e66f96p-39f, 0x1.566ff4p-52f, 0.0f,
     0x1.de3be2p-74f, 0.0f, 0x1.1219e6p-39f, 0x1.820bdep-52f, 0x1.4b3eecp-97f, 0.0f,
     0x1.482caap-83f, 0.0f, 0x1.277ea8p-47f, 0x1.27d03p-25f, 0x1.3ecf1p-34f, 0.0f,
     0x1.efca16p-79f, 0.0f, 0x1.067816p-9f, 0.0f, 0.0f, 0x1.80bd1cp-56f, 0.0f,
     0x1.9d7e26p-103f, 0.0f, 0x1.8c57dep-9f, 0.0f, 0.0f, 0x1.39af72p-86f,
     0x1.464478p-29f, 0x1.199926p-14f, 0x1.f75812p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.740e6p-123f, 0.0f, 0.0f, 0.0f, 0x1.ce19dap-11f, 0x1.6bf26ap-61f, 0.0f,
     0x1.0d30c4p-6f, 0x1.43da2ep-12f, 0x1.cd4e22p-75f, 0x1.62487ap-32f,
     0x1.f83e48p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61aa9cp-117f, 0x1.001b32p-63f, 0.0f,
     0x1.9216a4p-88f, 0.0f, 0x1.7faedap-109f, 0.0f, 0.0f, 0.0f, 0x1.cb8a12p-119f,
     0.0f, 0.0f, 0.0f, 0x1.c22738p-37f, 0x1.c1793cp-7f, 0x1.7f24fap-94f,
     0x1.b548ccp-46f, 0x1.c8b85p-96f, 0x1.5c987cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.afd55p-101f, 0x1.6b823cp-1f, 0.0f, 0.0f, 0.0f, 0x1.7812aap-24f,
     0x1.f07aaep-88f, 0.0f, 0x1.60aa08p-68f, 0.0f, 0x1.9de71ep-122f, 0x1.40818ep-60f,
     0.0f, 0x1.957b32p-54f, 0.0f, 0x1.c8a1bcp-4f, 0.0f, 0.0f, 0x1.894e92p-72f,
     0x1.ed5672p-6f, 0x1.6959d8p-64f, 0x1.9fc43ap-115f, 0.0f, 0x1.8cf816p-6f,
     0x1.b0cd1cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b7d0cp-20f, 0.0f, 0x1.82877ap-22f,
     0x1.65fc0ap-34f, 0.0f, 0x1.f3226ep-32f, 0.0f, 0.0f, 0.0f, 0x1.c3bbf8p-108f,
     0x1.6f7d5p-113f, 0x1.66de7cp-105f, 0.0f, 0.0f, 0x1.79c47p-3f, 0x1.416d66p-7f,
     0x1.49c08cp-80f, 0.0f, 0.0f, 0x1.bdf106p-9f, 0.0f, 0x1.731feep-32f,
     0x1.84eb28p-91f, 0.0f, 0x1.91654cp-65f, 0x1.d23566p-12f, 0.0f, 0x1.56bb3cp-35f,
     0x1.527388p-59f, 0x1.5daeccp-100f, 0x1.8560aep-7f, 0x1.9d4ea8p-16f,
     0x1.2479c4p-125f, 0.0f, 0x1.81b2b8p-88f, 0x1.4e3f84p-23f, 0.0f, 0x1.ca0ec8p-97f,
     0x1.834aap-96f, 0x1.b12814p-71f, 0x1.ead55ap-119f, 0x1.6bf604p-99f, 0.0f,
     0x1.bc7e42p-84f, 0x1.436632p-44f, 0x1.87931cp-72f, 0x1.5766d2p-101f,
     0x1.736638p-107f, 0.0f, 0.0f, 0x1.d665d6p-82f, 0.0f, 0.0f, 0.0f, 0x1.14047ap-78f,
     0.0f, 0.0f, 0x1.908784p-114f, 0x1.7d07d8p-116f, 0x1.e4f1c2p-68f, 0x1.d89832p-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.733e4ap-107f, 0x1.1796d8p-29f, 0.0f, 0.0f,
     0x1.0356ap-95f, 0x1.1310cp-97f, 0x1.86ac5p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb32c8p-5f, 0x1.357582p-12f, 0.0f, 0.0f, 0x1.492834p-108f, 0x1.f3a11ep-32f,
     0x1.faa4eep-82f, 0.0f, 0x1.7c3c4ep-25f, 0x1.777b52p-85f, 0x1.7ab542p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3c96c6p-33f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.e3b7f8p-118f,
     0.0f, 0.0f, 0.0f, 0x1.fa05b4p-45f, 0.0f, 0x1.a5f33cp-53f, 0x1.313e04p-109f,
     0x1.197dc2p-125f, 0.0f, 0x1.534622p-20f, 0x1.58bdfap-61f, 0x1.eeb992p-70f,
     0x1.2dd446p-49f, 0x1.e12592p-18f, 0.0f, 0x1.aee6e8p-89f, 0x1.90608p-63f,
     0x1.46d622p-20f, 0x1.c0ca7ep-67f, 0x1p0f, 0.0f, 0x1.f00f46p-5f, 0.0f,
     0x1.2c303ap-67f, 0x1.f70c26p-65f, 0x1.b91ba8p-123f, 0.0f, 0x1.4026e8p-37f, 0.0f,
     0.0f, 0x1.27dfaap-33f, 0.0f, 0.0f, 0.0f, 0x1.a50c18p-119f, 0.0f, 0x1.0628dp-27f,
     0x1.3707b2p-107f, 0.0f, 0x1.7acabep-45f, 0.0f, 0x1.d97cd4p-107f,
     0x1.6638dcp-103f, 0x1.207966p-53f, 0x1.e0a576p-100f, 0.0f, 0.0f, 0.0f,
     0x1.a01efap-64f, 0x1.b3a338p-101f, 0x1.8349aap-71f, 0.0f, 0.0f, 0x1.cd9762p-47f,
     0.0f, 0x1.9c72ap-34f, 0x1.48d4d4p-76f, 0.0f, 0.0f, 0x1.d79e9ap-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6c66f6p-20f, 0x1.2cfac6p-86f, 0.0f, 0x1.7bde82p-73f, 0.0f,
     0x1.c84e9ap-67f, 0x1.7caeecp-12f, 0x1.96611cp-46f, 0.0f, 0x1.977bf6p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.461286p-126f, 0x1.734e9p-1f, 0x1.398bdep-95f,
     0.0f, 0.0f, 0.0f, 0x1.c88f14p-121f, 0x1.54512cp-9f, 0.0f, 0x1.414c82p-118f, 0.0f,
     0x1.ccfd38p-126f, 0.0f, 0.0f, 0x1p0f, 0x1.b7723ep-126f, 0.0f, 0.0f,
     0x1.5fb606p-80f, 0x1.ade14ap-67f, 0.0f, 0x1.f3c672p-47f, 0.0f, 0.0f, 0.0f,
     0x1.8b3408p-108f, 0.0f, 0x1.dda31p-29f, 0.0f, 0x1.e3695ep-45f, 0x1.e53202p-6f,
     0x1.7e5d9p-110f, 0x1.a536fap-108f, 0x1.5fd55cp-112f, 0.0f, 0x1.9a888ep-55f, 0.0f,
     0x1.961b7ap-72f, 0x1.7f95f2p-41f, 0.0f, 0.0f, 0x1.75e462p-110f, 0x1.1408bp-51f,
     0.0f, 0x1.db286cp-84f, 0x1.1cd9f2p-107f, 0x1.bba024p-106f, 0x1p0f,
     0x1.5862c6p-42f, 0.0f, 0x1.832ccp-32f, 0.0f, 0.0f, 0x1.69ddacp-109f,
     0x1.8fb742p-49f, 0x1.2854acp-118f, 0.0f, 0x1.cd9202p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.224248p-22f, 0.0f, 0x1.8bc376p-52f, 0x1.b4c954p-108f, 0x1.86f4e6p-11f,
     0x1.94b1dcp-21f, 0x1.d74554p-50f, 0.0f, 0x1.5de58p-110f, 0x1.100a4ap-8f,
     0x1.1bf7e6p-6f, 0x1.981af2p-4f, 0x1.8877eep-74f, 0x1.10692ap-92f,
     0x1.f321d8p-49f, 0x1.70336ep-44f, 0x1.13b67ap-20f, 0.0f, 0x1.f659cep-92f,
     0x1.135ed2p-49f, 0.0f, 0.0f, 0x1.936cdap-74f, 0.0f, 0x1.31338p-62f,
     0x1.571daep-69f, 0.0f, 0x1.990168p-89f, 0.0f, 0x1.f709bcp-87f, 0x1.300de2p-88f,
     0.0f, 0x1.3bf9e6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d724a2p-1f, 0.0f, 0x1.af0f6cp-43f, 0x1.17e28cp-87f, 0.0f, 0.0f,
     0x1.ab82cp-89f, 0x1.964ffcp-78f, 0x1.6681dcp-30f, 0x1.7a217p-27f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.1b959ap-51f, 0.0f, 0.0f, 0.0f, 0x1.3257a4p-107f,
     0x1.9296f4p-44f, 0.0f, 0x1.8acde6p-94f, 0.0f, 0.0f, 0.0f, 0x1.1b9ad2p-105f,
     0x1.e4b976p-20f, 0.0f, 0.0f, 0.0f, 0x1.ec9ed8p-69f, 0x1.1b91c6p-8f,
     0x1.2b1236p-41f, 0x1.ca00cp-41f, 0.0f, 0x1.392804p-91f, 0.0f, 0.0f,
     0x1.b623e4p-7f, 0x1.e47172p-26f, 0x1.f75c96p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbd7dap-112f, 0.0f, 0x1.fd8486p-16f, 0.0f, 0x1.009c62p-109f, 0x1.6f9c98p-86f,
     0.0f, 0x1.9945ccp-36f, 0.0f, 0.0f, 0.0f, 0x1.6011b6p-6f, 0.0f, 0.0f, 0.0f,
     0x1.cea344p-34f, 0x1.2b4e82p-88f, 0.0f, 0x1.b75942p-117f, 0.0f, 0.0f,
     0x1.e0f636p-33f, 0x1.c4a4e8p-52f, 0x1.f3f28ep-57f, 0x1.fbcf6cp-9f, 0.0f, 0.0f,
     0.0f, 0x1.555f38p-33f, 0x1.dbbabep-108f, 0x1.a3455p-59f, 0x1.c00e9ap-72f, 0.0f,
     0x1.aa7534p-35f, 0.0f, 0.0f, 0x1.b1c076p-89f, 0x1.c51e9ap-31f, 0.0f, 0.0f,
     0x1.158afp-27f, 0.0f, 0.0f, 0.0f, 0x1.c43cc4p-57f, 0x1.3ef3b6p-80f,
     0x1.137f2ap-1f, 0.0f, 0.0f, 0x1.45e1dap-26f, 0.0f, 0x1.d2f8fep-39f,
     0x1.7f3cf8p-50f, 0.0f, 0x1.148196p-87f, 0.0f, 0x1.843cd2p-75f, 0.0f,
     0x1.91d2dp-93f, 0x1.9edf8ap-110f, 0x1.ff9838p-88f, 0x1.d4eaf2p-11f, 0.0f,
     0x1.1879a8p-16f, 0x1.92cb28p-101f, 0.0f, 0.0f, 0.0f, 0x1.0dfdfap-93f,
     0x1.e62628p-17f, 0x1.3cf074p-19f, 0x1.d77018p-98f, 0x1.88c2f2p-11f, 0.0f, 0.0f,
     0.0f, 0x1.2037c4p-126f, 0.0f, 0x1.9b0256p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.617e2cp-4f, 0x1.6ca51cp-66f, 0.0f, 0x1.7f443p-74f, 0x1.644d36p-124f,
     0x1.120c54p-83f, 0x1.f78418p-12f, 0x1.10ce18p-124f, 0.0f, 0x1.2437fcp-16f,
     0x1.df3a1ep-113f, 0x1.e0be4cp-107f, 0x1.1410d8p-4f, 0.0f, 0x1.76f688p-68f, 0.0f,
     0.0f, 0.0f, 0x1.c1688ap-2f, 0x1.b77854p-83f, 0x1.ceb60cp-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.14576ep-46f, 0.0f, 0x1.ba5c1ep-68f, 0x1.f3f11ep-37f, 0.0f, 0.0f,
     0x1.4a2892p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e87b64p-100f,
     0x1.fc23f6p-14f, 0x1.d07274p-118f, 0x1.83ca44p-89f, 0x1.915d1ap-84f,
     0x1.f4074p-79f, 0x1.1fab42p-115f, 0x1.eeddfap-9f, 0.0f, 0x1.22d3a6p-40f, 0.0f,
     0.0f, 0x1.ba9abap-4f, 0x1.eb4084p-14f, 0x1.96d69ep-100f, 0x1.eb5ad6p-119f,
     0x1.afba56p-119f, 0.0f, 0.0f, 0x1.03860cp-126f, 0x1.10fd4ep-55f,
     0x1.4ee7d4p-109f, 0.0f, 0.0f, 0x1.ac1ddep-4f, 0x1.d4143ep-53f, 0x1.af0d7ap-10f,
     0.0f, 0x1.fb8184p-62f, 0x1.fad98p-116f, 0.0f, 0x1.50bcfap-35f, 0.0f,
     0x1.82d7eap-47f, 0x1.e60668p-96f, 0.0f, 0.0f, 0x1.b27f62p-124f, 0x1.cc6b2ep-62f,
     0x1.fb20dap-41f, 0.0f, 0x1.48da68p-108f, 0.0f, 0x1.9efb02p-102f, 0x1.1de5fep-25f,
     0.0f, 0x1.f8fad4p-101f, 0x1.f122ecp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.564518p-18f, 0x1.15c258p-115f, 0x1.21fad2p-79f, 0.0f, 0x1.720f46p-51f,
     0x1.265cf4p-10f, 0.0f, 0.0f, 0x1.2ee24ap-2f, 0.0f, 0x1.7cf31ap-37f,
     0x1.7e8d4p-102f, 0.0f, 0x1.029ac4p-125f, 0.0f, 0.0f, 0.0f, 0x1.e50aaep-36f,
     0x1.8e1d46p-95f, 0x1.508f46p-57f, 0x1.ac0884p-42f, 0x1.3ef5c6p-48f,
     0x1.b361fp-68f, 0x1.30a21p-41f, 0.0f, 0x1.f22d9cp-124f, 0x1.baec8ap-76f,
     0x1.6da782p-42f, 0x1.97c3aap-82f, 0x1.db6f58p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.28483ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5cb4p-116f,
     0.0f, 0x1.7b013cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78ae3ep-85f,
     0x1.82026p-42f, 0x1.29f1bep-88f, 0.0f, 0x1.665a8p-42f, 0x1.51aa48p-64f, 0.0f,
     0x1.b7c486p-125f, 0.0f, 0.0f, 0x1.e38728p-15f, 0.0f, 0x1.2cafccp-10f,
     0x1.5380aap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b9ebp-126f, 0x1.de313cp-112f,
     0.0f, 0.0f, 0.0f, 0x1.cd6b9ep-80f, 0x1.71ab88p-13f, 0.0f, 0x1.d3377cp-23f, 0.0f,
     0x1.396382p-37f, 0.0f, 0x1.c8b494p-96f, 0.0f, 0x1.a5ba9ep-70f, 0x1.a2442cp-52f,
     0x1.e84c1cp-50f, 0x1.58dff2p-88f, 0x1.1ff28ap-81f, 0x1.016cfp-118f,
     0x1.6dfd8cp-66f, 0.0f, 0.0f, 0.0f, 0x1.5b8514p-107f, 0.0f, 0x1.a8b1dcp-15f,
     0x1.a2321ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20b4f8p-78f, 0x1.0396dep-56f,
     0x1.2da1dcp-106f, 0x1.a4389ap-12f, 0x1.bf0d3ep-88f, 0x1.cff9c4p-48f, 0.0f,
     0x1.930516p-49f, 0x1.d60fdep-10f, 0x1.f75122p-87f, 0x1.f31d1ep-110f,
     0x1.128008p-82f, 0x1.9fda78p-66f, 0x1.469afap-50f, 0x1.f5ffd6p-115f,
     0x1.83951cp-71f, 0x1.9b425p-115f, 0.0f, 0x1.d77e4ap-81f, 0x1.bac69cp-23f,
     0x1.34dd9ap-20f, 0.0f, 0.0f, 0x1.089d6cp-39f, 0x1.fba5fcp-61f, 0x1.a962f8p-20f,
     0x1.9a2a7cp-91f, 0.0f, 0x1.3d71p-47f, 0.0f, 0.0f, 0.0f, 0x1.890c3cp-88f,
     0x1.20758cp-13f, 0x1.6c2bcep-91f, 0x1.c193bap-43f, 0.0f, 0x1.80766cp-109f, 0.0f,
     0x1.e50888p-27f, 0x1.82507p-11f, 0x1.97442cp-7f, 0.0f, 0.0f, 0.0f,
     0x1.dadadap-21f, 0.0f, 0x1.a5a2d2p-33f, 0x1.1dedc6p-65f, 0.0f, 0.0f,
     0x1.61b05cp-111f, 0x1.13075ep-76f, 0.0f, 0x1.bf98d4p-11f, 0x1p0f,
     0x1.8cd538p-73f, 0.0f, 0x1.030028p-8f, 0.0f, 0.0f, 0.0f, 0x1.25e68ap-100f,
     0x1.4175f2p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.328f84p-123f, 0.0f,
     0x1.710024p-29f, 0.0f, 0.0f, 0.0f, 0x1.2bf046p-101f, 0.0f, 0x1.995fap-90f, 0.0f,
     0x1.46823ep-67f, 0x1.b976dap-63f, 0.0f, 0.0f, 0.0f, 0x1.b01298p-50f, 0.0f,
     0x1.76749cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48291cp-71f, 0.0f, 0x1.abc3eap-3f,
     0x1.0a135ep-115f, 0x1.7b3734p-86f, 0x1.1901e6p-90f, 0.0f, 0x1.a12904p-100f, 0.0f,
     0x1.b37c14p-107f, 0.0f, 0x1.56e46ep-47f, 0.0f, 0.0f, 0x1.b96cdap-59f,
     0x1.1c945cp-54f, 0x1.0ca69ep-96f, 0x1.92f5b4p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cec01ep-39f, 0x1.c112b6p-71f, 0.0f, 0x1.4153f4p-63f, 0.0f, 0x1.0e5c2ap-58f,
     0x1.7617eap-92f, 0x1.3c3228p-27f, 0.0f, 0.0f, 0x1.17bf52p-41f, 0x1.e995b2p-55f,
     0x1.87d47cp-20f, 0.0f, 0x1.6e3ec6p-39f, 0.0f, 0.0f, 0x1.2de2b8p-60f,
     0x1.1e261p-123f, 0.0f, 0x1.26ab8ap-94f, 0x1.90d3a6p-70f, 0x1.54b3c6p-93f, 0.0f,
     0x1.20d85p-25f, 0.0f, 0.0f, 0x1.953d4p-123f, 0x1.cb6656p-75f, 0.0f, 0.0f,
     0x1.a3a6bep-17f, 0x1.596644p-43f, 0x1.70729cp-50f, 0.0f, 0x1.d931bep-19f,
     0x1.b7f3dp-57f, 0.0f, 0x1.1edbccp-102f, 0.0f, 0.0f, 0.0f, 0x1.6bf68p-60f,
     0x1.3bef3p-104f, 0x1.88948cp-56f, 0x1.902d88p-38f, 0x1.ecf446p-109f, 0.0f,
     0x1.9dd2dep-105f, 0.0f, 0.0f, 0x1.0f151p-36f, 0.0f, 0.0f, 0.0f, 0x1.dd9ae2p-75f,
     0.0f, 0.0f, 0.0f, 0x1.6bd304p-18f, 0.0f, 0.0f, 0.0f, 0x1.5369cp-70f, 0.0f, 0.0f,
     0x1.f5b7p-44f, 0x1.62014p-84f, 0x1.e2ae36p-7f, 0x1.58bd98p-110f, 0x1.ec1298p-58f,
     0.0f, 0x1.72d6ep-126f, 0x1.996e92p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.416372p-104f, 0x1.aef51cp-6f, 0.0f, 0x1.938bfep-7f, 0x1.a60502p-19f,
     0x1.825c1ep-95f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c231dep-15f, 0x1.e800dp-75f,
     0x1.291c94p-126f, 0.0f, 0x1.3a934cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc8dc2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.915dd2p-82f, 0.0f, 0x1.0edc2cp-113f,
     0x1.f32d94p-107f, 0x1.08a606p-71f, 0x1.8ab9fap-67f, 0.0f, 0x1.60969ep-118f, 0.0f,
     0.0f, 0x1.0ebc12p-55f, 0.0f
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
            tmp1 = Sleef_finz_truncf1_purecfma(tmp0);
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
    printf("Sleef_finz_truncf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_truncf1_purecfma bench acc %a\n", global_bench_acc);
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
