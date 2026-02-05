/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_nextafterf1_purecfma.c --function \
 *     Sleef_finz_nextafterf1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
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
     0.0f, 0x1.5fbcfcp-62f, 0x1.2c0694p-116f, 0x1p0f, 0.0f, 0x1.0e0252p-68f,
     0x1.75d028p-46f, 0.0f, 0x1.800decp-48f, 0.0f, 0.0f, 0.0f, 0x1.2e812p-41f, 0.0f,
     0.0f, 0.0f, 0x1.cbd202p-56f, 0.0f, 0x1.0a93a6p-7f, 0.0f, 0x1.27d326p-91f, 0.0f,
     0x1.e21b6cp-84f, 0.0f, 0.0f, 0.0f, 0x1.a693c6p-101f, 0x1.8513a8p-71f, 0.0f,
     0x1.6ff8ep-82f, 0.0f, 0x1.b32e3p-112f, 0.0f, 0x1.83cb68p-15f, 0x1.b988bep-4f,
     0x1.bb797p-104f, 0x1.80f21ep-60f, 0x1.f8a32ap-125f, 0.0f, 0x1.6acb0cp-57f, 0.0f,
     0x1.543b6p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eda7ap-109f, 0.0f, 0.0f,
     0x1.b6d7a4p-30f, 0x1.9e01d8p-17f, 0.0f, 0x1.a6fe04p-24f, 0x1.71beccp-21f,
     0x1.3e3f8ap-84f, 0.0f, 0.0f, 0x1.8772b2p-21f, 0x1.a1c468p-76f, 0.0f,
     0x1.2c7a4p-65f, 0x1.032ad6p-119f, 0.0f, 0.0f, 0x1.2ed06cp-5f, 0x1.d9887ep-44f,
     0.0f, 0.0f, 0x1.786f16p-79f, 0x1.39ca2p-11f, 0x1.9c7512p-58f, 0x1.ed18a6p-66f,
     0x1.e6e9e4p-67f, 0x1p0f, 0.0f, 0x1.8edaf6p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f589p-48f, 0x1.cbb6cp-124f, 0x1.07b0bp-37f, 0x1.360dp-30f, 0x1.047864p-87f,
     0x1.d30372p-107f, 0.0f, 0x1.559186p-27f, 0x1.6ddc16p-123f, 0x1.6ebafap-108f,
     0x1.1466fap-101f, 0.0f, 0.0f, 0x1.adf4fp-53f, 0x1.e69f6ep-30f, 0.0f,
     0x1.ed8eecp-50f, 0.0f, 0x1.7b1476p-13f, 0.0f, 0x1.8660a8p-55f, 0x1.8d66f8p-33f,
     0.0f, 0x1.bea87ap-45f, 0.0f, 0.0f, 0x1.b519c6p-91f, 0x1.32029ap-53f, 0.0f,
     0x1.a3fd16p-27f, 0.0f, 0.0f, 0.0f, 0x1.f89bc8p-1f, 0x1.4c0494p-51f,
     0x1.0c58ep-90f, 0x1.17c46ap-50f, 0.0f, 0x1.3203ecp-80f, 0.0f, 0.0f,
     0x1.dcab4p-72f, 0x1.a8ea1p-69f, 0x1.7ac62p-77f, 0x1.e55ba4p-25f, 0x1.1cc048p-85f,
     0x1.0d8bdap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b9c36p-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bac184p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6673dp-45f,
     0x1.fc277ep-110f, 0x1.a14b0ap-93f, 0.0f, 0x1.03a4a8p-9f, 0.0f, 0x1.6bb34cp-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b4d78p-6f, 0x1.15e6cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.965708p-1f, 0.0f, 0.0f, 0x1.539216p-45f, 0x1.fcf0c2p-94f, 0x1.1a2ddap-23f,
     0x1.857f8ap-11f, 0.0f, 0.0f, 0x1.1016eep-102f, 0.0f, 0.0f, 0.0f, 0x1.0e981p-88f,
     0.0f, 0.0f, 0x1.3c7984p-39f, 0x1.9dd77p-75f, 0.0f, 0x1.f29a04p-112f,
     0x1.59dfc6p-116f, 0.0f, 0x1.3bc02ap-58f, 0.0f, 0.0f, 0x1.53ca9ap-68f, 0.0f, 0.0f,
     0x1.c87c6ep-49f, 0x1.d2a75p-79f, 0.0f, 0x1.b93146p-33f, 0x1.cd34fep-11f,
     0x1.a643cep-26f, 0.0f, 0x1.67a40ep-56f, 0x1.ba285ap-27f, 0.0f, 0x1.4c7bap-84f,
     0.0f, 0.0f, 0x1.bf0634p-47f, 0x1.38adecp-81f, 0.0f, 0.0f, 0x1.8ec22ep-100f, 0.0f,
     0x1.e319ep-20f, 0.0f, 0x1.eaf0a2p-71f, 0.0f, 0x1.44fb5ap-115f, 0x1.5e9a5ep-49f,
     0x1.825bc4p-26f, 0.0f, 0x1.55f40ep-51f, 0x1.04318ap-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5455c8p-24f, 0x1.8949e6p-48f, 0.0f, 0x1.5cfd98p-109f, 0.0f, 0.0f,
     0x1.ba1258p-15f, 0.0f, 0.0f, 0x1.9a7d76p-76f, 0x1.7a961ap-59f, 0.0f, 0.0f,
     0x1.8e4e5cp-12f, 0.0f, 0x1.c518bap-64f, 0.0f, 0.0f, 0x1.6df40cp-25f,
     0x1.79ee0ap-3f, 0x1.74ad06p-82f, 0x1.fcc5bp-74f, 0x1.d6a39p-99f, 0.0f,
     0x1.0bee9ap-49f, 0.0f, 0x1.754f92p-5f, 0.0f, 0.0f, 0x1.8ba5eap-33f,
     0x1.4101cp-29f, 0x1.a62bb4p-11f, 0x1.99d30ep-6f, 0.0f, 0x1.ff1d3p-74f,
     0x1.5e3fbap-121f, 0.0f, 0.0f, 0.0f, 0x1.34a81p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26a71cp-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db175ap-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bc8f4p-47f, 0x1.aed4cep-71f, 0.0f, 0x1p0f,
     0x1.2b3996p-2f, 0x1.add46cp-89f, 0.0f, 0x1.8f77ep-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.61dcd6p-18f, 0x1.982e12p-51f, 0x1.cde88p-98f, 0x1.acd3ap-112f,
     0x1.9cab9ap-28f, 0.0f, 0x1.2e09bap-67f, 0x1.bae476p-64f, 0x1.a2f73ap-106f,
     0x1.4de7c4p-78f, 0x1.5c28aep-126f, 0.0f, 0x1.6d1f34p-64f, 0.0f, 0.0f,
     0x1.3360ap-83f, 0.0f, 0x1.6e3ff4p-53f, 0x1.0b9f5p-38f, 0.0f, 0x1.26b50ep-25f,
     0.0f, 0.0f, 0x1.7bbf78p-109f, 0x1.a58e4cp-34f, 0x1.48a8ecp-48f, 0.0f, 0.0f,
     0x1.7293fcp-78f, 0.0f, 0x1.ca2d48p-114f, 0.0f, 0.0f, 0.0f, 0x1.c7b80cp-82f,
     0x1.4dbfc4p-106f, 0x1.05efdep-73f, 0.0f, 0.0f, 0x1.42e79ep-38f, 0x1.5d730ep-52f,
     0.0f, 0x1.5f670ep-15f, 0.0f, 0x1.4d2feap-83f, 0.0f, 0x1.38837ep-89f, 0.0f, 0.0f,
     0.0f, 0x1.e8bf22p-82f, 0x1.1366f6p-4f, 0x1.c97728p-92f, 0x1.3798c6p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b7dd3cp-6f, 0x1.221a1ep-48f, 0x1.29c7d2p-104f,
     0x1.dcfaccp-26f, 0x1.1ed148p-15f, 0.0f, 0x1.5b62c8p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e0c28ep-43f, 0.0f, 0.0f, 0x1.e0db6p-45f, 0.0f, 0x1.1af0acp-10f,
     0x1.67ed6cp-69f, 0x1.2e66b4p-43f, 0.0f, 0x1.1d0c64p-40f, 0x1.3bab2ep-3f, 0.0f,
     0x1.65b04ap-41f, 0x1.a510b4p-85f, 0x1.c79ceap-66f, 0x1.7f6e08p-28f, 0.0f,
     0x1.325fp-26f, 0x1.239d1cp-106f, 0.0f, 0.0f, 0x1.5ccf98p-88f, 0x1.b36338p-114f,
     0.0f, 0.0f, 0x1.091cbap-80f, 0.0f, 0x1.5b0beap-35f, 0.0f, 0.0f, 0x1.fcc974p-63f,
     0x1.2f232ep-105f, 0.0f, 0x1.31697cp-23f, 0.0f, 0.0f, 0.0f, 0x1.32615ap-42f,
     0x1.cf683ep-74f, 0.0f, 0x1.3f589ap-78f, 0x1.31d8bp-61f, 0x1.cbd9a8p-58f, 0.0f,
     0.0f, 0x1.dda8eep-43f, 0x1.c9e638p-78f, 0x1.b73bep-67f, 0x1.f060b4p-37f,
     0x1.74d2fap-67f, 0x1.5b1c3cp-117f, 0.0f, 0.0f, 0x1.1b48eap-7f, 0x1.feaa24p-29f,
     0.0f, 0x1.41d0b2p-64f, 0.0f, 0x1.e47e76p-87f, 0.0f, 0.0f, 0.0f, 0x1.8d0168p-32f,
     0.0f, 0x1.dbfceep-17f, 0x1.431f7cp-81f, 0.0f, 0x1.fc17b8p-97f, 0.0f, 0.0f, 0.0f,
     0x1.ed7172p-52f, 0.0f, 0x1.88ff78p-10f, 0.0f, 0.0f, 0x1.9f93dcp-48f, 0.0f, 0.0f,
     0x1.ff2cc2p-100f, 0x1.ede86ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97ddc4p-43f,
     0x1.d8ebd2p-82f, 0.0f, 0.0f, 0.0f, 0x1.2b70dp-96f, 0x1.7d98ccp-73f,
     0x1.b82c2ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9b99cp-31f, 0.0f, 0.0f,
     0x1.1be322p-34f, 0.0f, 0.0f, 0x1.7989a2p-85f, 0.0f, 0x1.1fc304p-90f, 0.0f, 0.0f,
     0x1.bbae74p-5f, 0x1.7fbc4ep-87f, 0.0f, 0.0f, 0x1.905ac6p-32f, 0x1.848706p-92f,
     0x1.d5227ep-72f, 0x1.6d78a4p-5f, 0x1.67f3f4p-101f, 0.0f, 0x1.717f46p-42f, 0.0f,
     0x1.9fae24p-52f, 0x1.071c44p-43f, 0.0f, 0x1.1d9d8ep-68f, 0x1.d802b8p-63f, 0.0f,
     0x1.ebd4fp-118f, 0.0f, 0x1.4560e6p-78f, 0x1.3810fcp-18f, 0x1.cc2192p-59f, 0.0f,
     0.0f, 0x1.4bae72p-44f, 0.0f, 0x1.45d8ccp-111f, 0.0f, 0x1.7e2c68p-118f,
     0x1.1bfadep-53f, 0x1.c025a2p-84f, 0.0f, 0x1.c2712cp-37f, 0x1.eb917ep-121f,
     0x1.a9c6f6p-18f, 0x1.d2ad5ap-75f, 0.0f, 0x1.b89312p-27f, 0.0f, 0.0f,
     0x1.5182f2p-68f, 0x1.6f3db6p-79f, 0x1.1ade46p-38f, 0x1.844af6p-3f, 0.0f,
     0x1.0dede4p-63f, 0.0f, 0.0f, 0x1p0f, 0x1.a14aaep-118f, 0x1.c81a0ep-4f, 0.0f,
     0x1.5dca0ap-40f, 0x1.ac9eacp-43f, 0x1.2f9d34p-115f, 0.0f, 0x1.f1fa26p-56f,
     0x1.4c051cp-1f, 0.0f, 0.0f, 0.0f, 0x1.37f6eap-49f, 0.0f, 0.0f, 0.0f,
     0x1.4b24c8p-40f, 0x1.0d0d2ep-70f, 0x1.545dccp-10f, 0.0f, 0.0f, 0x1.fde95ep-111f,
     0.0f, 0x1.46ae58p-95f, 0.0f, 0x1.57984cp-50f, 0.0f, 0.0f, 0x1.d7a9ccp-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d0ef1cp-66f, 0.0f, 0x1.c1a38ep-36f, 0.0f, 0x1.20ac98p-78f,
     0x1.b7dae6p-99f, 0.0f, 0.0f, 0.0f, 0x1.782c56p-115f, 0.0f, 0x1.b8d4bp-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.995b32p-37f, 0x1.7c85f4p-12f, 0.0f, 0.0f, 0x1.6e1906p-68f,
     0.0f, 0x1.938e2ap-6f, 0.0f, 0.0f, 0.0f, 0x1.49e8dap-60f, 0.0f, 0.0f,
     0x1.d7b658p-11f, 0x1.c926cap-117f, 0.0f, 0.0f, 0.0f, 0x1.e02b4ep-45f, 0.0f,
     0x1.7e8f76p-19f, 0x1.6c3c38p-63f, 0.0f, 0.0f, 0x1.4cb9e2p-35f, 0x1.24e5f4p-83f,
     0.0f, 0.0f, 0x1.6ea4dp-13f, 0x1.ba23bap-13f, 0.0f, 0x1.7749dp-48f,
     0x1.f67f84p-85f, 0x1.cd1714p-74f, 0.0f, 0x1.752496p-34f, 0x1.67ee4cp-49f,
     0x1.9afa34p-115f, 0.0f, 0.0f, 0.0f, 0x1.92c292p-49f, 0x1.b48852p-9f,
     0x1.66eef6p-51f, 0x1.641654p-84f, 0.0f, 0x1.7221ecp-74f, 0x1.81175cp-18f, 0.0f,
     0.0f, 0x1.00ef38p-25f, 0.0f, 0.0f, 0.0f, 0x1.c59ce6p-25f, 0.0f, 0.0f,
     0x1.2a28f6p-93f, 0x1.d59ac8p-82f, 0.0f, 0x1.11238ep-126f, 0x1.6458f8p-9f,
     0x1.1302a8p-13f, 0.0f, 0x1.82a04ep-119f, 0x1.e4ebfap-52f, 0x1.235d2ep-53f,
     0x1.7cd954p-49f, 0x1.c01c1ep-39f, 0.0f, 0x1.6b70d2p-5f, 0x1.f6e3dap-60f,
     0x1.de8b12p-9f, 0.0f, 0x1.d52cf8p-56f, 0.0f, 0x1.0a597p-92f, 0x1.169d54p-13f,
     0x1.1314e6p-63f, 0.0f, 0.0f, 0x1.0e2b8p-37f, 0.0f, 0.0f, 0.0f, 0x1.cf42a4p-94f,
     0x1p0f, 0.0f, 0.0f, 0x1.6761fp-122f, 0x1.82009ep-115f, 0.0f, 0x1.2fdc9ap-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b90e6p-119f, 0x1.790464p-83f, 0x1.0aedf4p-80f,
     0x1.9e3986p-43f, 0.0f, 0.0f, 0x1.3bb0a4p-43f, 0.0f, 0.0f, 0.0f, 0x1.8ed14ap-50f,
     0x1.db2f56p-64f, 0x1.e5348p-97f, 0x1.9512e2p-18f, 0.0f, 0.0f, 0x1.808db6p-13f,
     0x1.48e5p-13f, 0.0f, 0.0f, 0x1.5dec24p-78f, 0x1.e7e58cp-20f, 0.0f,
     0x1.fcc77ep-91f, 0.0f, 0x1.4135fap-98f, 0x1.ee471cp-8f, 0x1.e52b94p-5f,
     0x1.f28cb6p-6f, 0x1.f9c2f2p-110f, 0x1.77e71ep-87f, 0.0f, 0x1.37ab78p-90f,
     0x1.1f1824p-16f, 0.0f, 0.0f, 0x1.257f26p-54f, 0x1.c65108p-41f, 0x1.5ca5dap-12f,
     0.0f, 0.0f, 0x1.a6688cp-51f, 0x1.0fcceap-39f, 0x1.4f7792p-108f, 0.0f,
     0x1.5505eep-54f, 0.0f, 0.0f, 0.0f, 0x1.7c042cp-74f, 0.0f, 0x1.537a98p-86f,
     0x1.1c4682p-64f, 0.0f, 0.0f, 0x1.474acap-13f, 0.0f, 0x1.489342p-113f,
     0x1.2c326cp-20f, 0.0f, 0.0f, 0.0f, 0x1.b6aa24p-119f, 0x1.1e97b4p-93f,
     0x1.ee013cp-4f, 0.0f, 0x1.12a498p-62f, 0.0f, 0.0f, 0x1.9dce86p-33f, 0.0f,
     0x1.1953dcp-67f, 0.0f, 0.0f, 0.0f, 0x1.ab0bbep-67f, 0x1.5ca0bcp-100f,
     0x1.a401d8p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a0b86p-50f, 0.0f,
     0x1.1e4f14p-58f, 0.0f, 0x1.c5019p-117f, 0x1.1fa3acp-112f, 0.0f, 0x1.6d94cep-120f,
     0x1.a1a6ecp-12f, 0x1.1c7678p-88f, 0.0f, 0x1.b73b12p-7f, 0x1.6000bep-31f,
     0x1.21942cp-125f, 0x1.5c6c0ap-85f, 0x1.b9381ap-43f, 0.0f, 0x1.56be9ep-98f, 0.0f,
     0x1.a4c80cp-52f, 0x1.0b40dcp-28f, 0.0f, 0.0f, 0x1.ca30b8p-36f, 0x1.b31e58p-26f,
     0.0f, 0.0f, 0x1.5912aep-66f, 0x1.e11a3p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e3df8p-33f, 0.0f, 0x1.f186c6p-67f, 0x1.6a681p-102f, 0x1.6e91dep-87f,
     0x1.bd7bd2p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec409p-6f, 0x1.2643bcp-97f,
     0x1.fac18ap-69f, 0x1.27c662p-88f, 0x1.8ff2b8p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.38aa2ap-98f, 0.0f, 0.0f, 0.0f, 0x1.0c063p-17f, 0.0f, 0x1.71606ep-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cdb54p-98f, 0x1.ced42p-11f, 0.0f,
     0x1.93da16p-86f, 0.0f, 0x1.65b80ep-9f, 0.0f, 0x1.8f644p-46f, 0x1.6622aep-36f,
     0.0f, 0x1.63cb54p-112f, 0.0f, 0x1.202eaep-5f, 0.0f, 0x1.59161p-15f, 0.0f, 0.0f,
     0x1.6a97a6p-98f, 0.0f, 0x1.7d4526p-29f, 0x1.bfbbe4p-59f, 0x1.28ac26p-20f,
     0x1.503f4p-84f, 0x1.61fbbap-41f, 0.0f, 0x1.d72834p-43f, 0.0f, 0.0f, 0.0f,
     0x1.78de8ap-58f, 0x1.8b0c76p-65f, 0.0f, 0.0f, 0x1.f36762p-6f, 0x1.137ebcp-62f,
     0.0f, 0.0f, 0.0f, 0x1.e3679ep-81f, 0x1.16f3f4p-84f, 0.0f, 0x1.86f038p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dac774p-15f, 0x1.bd096p-51f, 0x1.866062p-20f,
     0.0f, 0x1.6ef31ap-23f, 0x1.e9b81cp-114f, 0x1.04960ep-27f, 0x1.c6ec7cp-83f, 0.0f,
     0.0f, 0.0f, 0x1.ee22bap-99f, 0.0f, 0x1.9f634ep-24f, 0x1.a8d0f8p-52f,
     0x1.0478b2p-38f, 0.0f, 0x1.24ba56p-78f, 0.0f, 0.0f, 0x1.ad5d38p-30f, 0.0f,
     0x1.38d628p-1f, 0x1.0a3e42p-103f, 0x1.a78cd4p-72f, 0.0f, 0x1.423b9cp-46f,
     0x1.d57c7p-117f, 0.0f, 0x1.01f82p-14f, 0.0f, 0x1.2c04eep-4f, 0x1.8acda4p-96f,
     0.0f, 0.0f, 0x1.283d1ep-103f, 0.0f, 0.0f, 0x1.f386f8p-68f, 0x1.7f49f6p-88f,
     0x1.33572p-6f, 0.0f, 0x1.dbc126p-10f, 0.0f, 0x1.ebe4fep-103f, 0.0f,
     0x1.49015cp-49f, 0.0f, 0.0f, 0x1.afd78cp-77f, 0x1.9e036cp-82f, 0.0f, 0.0f,
     0x1.3bd594p-9f, 0.0f, 0.0f, 0x1.f13c86p-11f, 0x1.578658p-88f, 0x1.9d7582p-15f,
     0x1.65c72ap-17f, 0x1.fd6788p-71f, 0x1.3d9ef8p-21f, 0x1.21ad9cp-15f,
     0x1.f02948p-29f, 0.0f, 0x1.ac077p-88f, 0.0f, 0x1.453808p-53f, 0.0f, 0.0f, 0.0f,
     0x1.b099cap-5f, 0.0f, 0.0f, 0x1.9a3eeep-37f, 0.0f, 0x1.c6a22p-74f,
     0x1.270686p-53f, 0x1.76a5acp-28f, 0.0f, 0x1.a5bd4ep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d384p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72bfcp-60f,
     0x1.3f620ap-67f, 0x1.1238c8p-49f, 0.0f, 0.0f, 0.0f, 0x1.2bf32ap-8f, 0.0f, 0.0f,
     0.0f, 0x1.e1d1bp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd094ap-21f, 0x1.caae8p-34f,
     0.0f, 0x1.c77062p-112f, 0.0f, 0.0f, 0x1.d088f4p-53f, 0.0f, 0x1.1125b4p-30f,
     0x1.6399c8p-115f, 0.0f, 0x1.dd6b5cp-71f, 0.0f, 0x1.468492p-73f, 0x1.88d23p-44f,
     0.0f, 0.0f, 0.0f, 0x1.1707e2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.8bb5e2p-86f, 0x1.f73598p-88f, 0x1.b97662p-49f, 0x1.0bfde2p-16f,
     0x1.d656c6p-102f, 0x1.a19f7cp-80f, 0x1.e36964p-13f, 0.0f, 0.0f, 0x1.9e05d4p-19f,
     0.0f, 0.0f, 0.0f, 0x1.eb3c92p-67f, 0.0f, 0x1.ddc396p-46f, 0.0f, 0x1.2e3ca6p-86f,
     0.0f, 0.0f, 0x1.cf4c6ep-68f, 0.0f, 0.0f, 0x1.5d2b18p-20f, 0.0f, 0x1.9873eep-95f,
     0.0f, 0.0f, 0.0f, 0x1.d9bc12p-97f, 0.0f, 0x1.6f0a28p-92f, 0.0f, 0x1.6ba828p-105f,
     0.0f, 0x1.ee0d3ap-91f, 0.0f, 0x1.0cb1bp-68f, 0.0f, 0x1.65900cp-60f,
     0x1.bd4bdap-25f, 0x1.1bd718p-9f, 0.0f, 0.0f, 0x1.4269d4p-31f, 0x1.8ae7c6p-49f,
     0x1.97039p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b28e8p-27f, 0x1.d72792p-99f,
     0.0f, 0x1.acae6p-32f, 0x1.ac12f8p-3f, 0x1.bb3bb4p-100f, 0.0f, 0.0f,
     0x1.59d5d2p-36f, 0.0f, 0.0f, 0.0f, 0x1.2388c4p-117f, 0.0f, 0.0f,
     0x1.f18ca4p-108f, 0x1.870bc2p-17f, 0x1.64cee4p-113f, 0.0f, 0x1.af20d2p-31f, 0.0f,
     0x1.d67f34p-26f, 0x1.e43886p-65f, 0x1.dbc6c6p-37f, 0.0f, 0x1.84bd12p-7f, 0.0f,
     0x1.70b586p-61f, 0x1.c1677cp-41f, 0x1.d004fcp-77f, 0x1.1c0b4p-58f,
     0x1.de506ap-36f, 0.0f, 0x1.d3fbbap-73f, 0.0f, 0.0f, 0x1.395094p-13f,
     0x1.af5234p-78f, 0.0f, 0x1.beb876p-85f, 0x1.088962p-46f, 0x1.a31fe2p-69f, 0.0f,
     0.0f, 0x1.3d4f02p-32f, 0.0f, 0x1.846f9cp-100f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.77fec2p-25f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.a410b8p-19f, 0x1.d8cf9cp-38f,
     0.0f, 0.0f, 0x1.f12b2ap-92f, 0x1.93ad16p-89f, 0x1.5d09f4p-94f, 0.0f,
     0x1.ac5db4p-13f, 0.0f, 0x1.5afd28p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c71e8p-73f, 0x1.80c38cp-37f, 0.0f, 0x1.b862e4p-37f,
     0x1.6b6ab6p-42f, 0.0f, 0.0f, 0x1.015c78p-99f, 0.0f, 0x1.2dd8e8p-78f,
     0x1.1f181cp-46f, 0.0f, 0.0f, 0x1.6c54b6p-119f, 0x1.f3734cp-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.112996p-93f, 0.0f, 0.0f, 0x1.61aa1ap-27f, 0x1.980e9ap-32f,
     0x1.4dbb38p-24f, 0x1.bf9196p-104f, 0.0f, 0.0f, 0x1.e33936p-79f, 0.0f, 0.0f,
     0x1.88322ap-84f, 0x1.504cdp-44f, 0.0f, 0x1.ab551p-35f, 0.0f, 0.0f,
     0x1.99b9fap-38f, 0x1.55a3c8p-18f, 0x1.d0c1f4p-122f, 0.0f, 0x1.a8735ep-44f, 0.0f,
     0x1.420e6ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cc1fep-68f, 0x1.167a2ap-55f,
     0.0f, 0x1.c9dc06p-6f, 0.0f, 0x1.8827aep-104f, 0.0f, 0x1.cc0588p-122f,
     0x1.a2582ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4866a6p-2f, 0x1.be1f5ep-66f,
     0x1.f054aep-76f, 0x1.9659fcp-79f, 0x1.a692dcp-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30ae0cp-35f, 0x1.a01822p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efd14ep-64f,
     0x1.5bba38p-58f, 0.0f, 0.0f, 0.0f, 0x1.5ae83ap-86f, 0x1.6d9118p-80f,
     0x1.27ca1cp-55f, 0x1.10737p-104f, 0x1.1065e4p-60f, 0x1.a2cb72p-39f,
     0x1.92ebcap-106f, 0x1.d17938p-1f, 0x1.ff03ccp-71f, 0x1.dfdd92p-55f,
     0x1.9832b6p-70f, 0x1.123db4p-80f, 0.0f, 0.0f, 0x1.70d92p-62f, 0x1.b463c2p-27f,
     0x1.d4430ep-52f, 0.0f, 0.0f, 0.0f, 0x1.e8b128p-101f, 0.0f, 0x1.8f6d9ep-14f,
     0x1.c3692ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16c58cp-117f, 0.0f,
     0x1.6e94aep-98f, 0x1.8d0c26p-108f, 0x1.c05d44p-40f, 0x1.2ecdd6p-2f, 0.0f, 0.0f,
     0.0f, 0x1.22bc62p-38f, 0.0f, 0x1.8988cap-43f, 0x1.c03a1cp-98f, 0.0f,
     0x1.46d848p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9057aap-44f, 0.0f,
     0x1.d69ce2p-8f, 0x1.131f2ep-3f, 0.0f, 0x1.75e43p-114f, 0x1.25be7p-61f, 0.0f,
     0.0f, 0.0f, 0x1.09d864p-43f, 0x1.50e98p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.828fecp-56f, 0x1.339848p-85f, 0.0f, 0.0f, 0x1.a7328ap-28f, 0.0f, 0x1p0f,
     0.0f, 0x1.0ad6bp-31f, 0x1.efefdp-126f, 0.0f, 0x1.2c48fcp-2f, 0x1.8af25cp-4f,
     0.0f, 0.0f, 0x1.9b80cap-19f, 0x1.c70b94p-33f, 0.0f, 0x1.d45e96p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.72bd02p-55f, 0x1.5bb032p-74f, 0x1.2490a2p-70f, 0.0f,
     0x1.a10b6ap-58f, 0x1.f525a4p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ad328p-77f,
     0.0f, 0x1.8d1598p-88f, 0x1.50ba9ap-63f, 0.0f, 0x1.183e34p-18f, 0x1.81b4bap-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b703fep-33f, 0x1.192c72p-83f, 0x1.adeaeap-1f,
     0x1.ce86f6p-77f, 0x1.e1983ap-52f, 0.0f, 0.0f, 0.0f, 0x1.a6b21cp-42f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8f9c84p-104f, 0x1.c1b03ap-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.466578p-122f, 0.0f, 0x1.62c75ap-16f, 0.0f, 0x1.4e0d84p-65f, 0.0f, 0.0f,
     0x1.8b1f46p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e050ep-86f, 0x1.2801e4p-86f,
     0x1.ff2092p-64f, 0x1.1adde2p-46f, 0.0f, 0.0f, 0x1.4ba516p-55f, 0.0f,
     0x1.b054b6p-77f, 0x1.2bf322p-17f, 0x1.f4feeap-27f, 0x1.84730cp-7f,
     0x1.2f2982p-31f, 0x1.bd17c6p-69f, 0x1.0960eep-122f, 0x1.40470ep-87f, 0.0f,
     0x1.9afdep-33f, 0x1.4ea694p-125f, 0x1.8c122ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b02f9ap-92f, 0.0f, 0x1.bd6c9ap-25f, 0.0f, 0x1.87aa08p-38f,
     0.0f, 0x1.984178p-82f, 0.0f, 0.0f, 0x1.08e60ep-122f, 0x1.77e426p-76f, 0.0f, 0.0f,
     0x1.ce1ae6p-29f, 0.0f, 0.0f, 0x1.7300aap-39f, 0.0f, 0.0f, 0x1.d07e96p-37f,
     0x1.52493cp-61f, 0.0f, 0x1.3d5cb8p-96f, 0x1.dca11cp-106f, 0.0f, 0x1.b59e1p-41f,
     0.0f, 0x1.673d82p-74f, 0x1.b1c0fp-77f, 0x1.38a87ap-88f, 0x1.e73906p-58f,
     0x1.7c9828p-51f, 0.0f, 0.0f, 0x1.545028p-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.98866p-121f, 0x1.795f3cp-16f, 0.0f, 0x1.1607f8p-117f, 0x1.231168p-69f,
     0x1.9a47c6p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.374942p-46f, 0x1.08a0fep-7f,
     0x1.a5a5c2p-125f, 0x1.579828p-47f, 0x1.716686p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ddae0ep-76f, 0x1.a4665ep-74f, 0.0f, 0.0f, 0.0f, 0x1.b7ebfp-12f,
     0x1.72f13cp-20f, 0.0f, 0.0f, 0x1.8700fap-43f, 0x1.0b1124p-37f, 0.0f, 0.0f,
     0x1.750072p-97f, 0.0f, 0.0f, 0.0f, 0x1.3ef9cap-121f, 0.0f, 0x1.87f368p-3f,
     0x1.c4f098p-9f, 0.0f, 0x1.ea5144p-57f, 0x1.2b1654p-114f, 0.0f, 0x1.d0c4e8p-82f,
     0.0f, 0x1p0f, 0.0f, 0x1.ef87fep-113f, 0x1.5b370ep-119f, 0.0f, 0x1.a9c40cp-67f,
     0.0f, 0.0f, 0x1.260bdap-59f, 0x1.65a8dcp-96f, 0.0f, 0x1.92ea2p-97f,
     0x1.1eea8ep-85f, 0.0f, 0x1.b8a262p-99f, 0.0f, 0x1.c9f316p-85f, 0x1.176c5ep-40f,
     0x1.489458p-41f, 0x1.5a2132p-63f, 0.0f, 0x1.10187ep-24f, 0x1.956334p-100f, 0.0f,
     0.0f, 0.0f, 0x1.0750d4p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af261ep-6f,
     0x1.18c5f8p-9f, 0x1.c48568p-91f, 0x1.da60f2p-75f, 0.0f, 0x1.37575ap-35f,
     0x1.cd51d2p-65f, 0x1.7d2408p-84f, 0x1.310c2p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f83ca4p-25f, 0.0f, 0.0f, 0x1.f6d232p-72f, 0x1.f69654p-101f, 0x1.7fdfe8p-61f,
     0x1.97afcp-3f, 0x1.e8158cp-121f, 0.0f, 0.0f, 0x1.3b8e2cp-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.75b0c2p-43f, 0x1.2b86f2p-110f, 0x1.a1048cp-112f, 0x1.1f569ep-126f,
     0.0f, 0x1.f6f462p-47f, 0x1.e6520cp-85f, 0x1.3b6bb2p-114f, 0x1.b1cef4p-27f, 0.0f,
     0.0f, 0x1.3bc888p-10f, 0.0f, 0.0f, 0x1.7e973ep-36f, 0.0f, 0x1.2caae2p-75f, 0.0f,
     0.0f, 0x1.a3b95cp-71f, 0x1.d0a91p-35f, 0.0f, 0.0f, 0.0f, 0x1.e2ed54p-118f, 0.0f,
     0x1.d2934cp-101f, 0.0f, 0x1.4215eap-48f, 0.0f, 0.0f, 0x1.b850eap-107f, 0.0f,
     0x1.1d409ap-11f, 0x1.bfc1f4p-54f, 0x1.28d756p-103f, 0x1.25c314p-20f, 0.0f, 0.0f,
     0x1.34c22p-99f, 0.0f, 0x1.43108ap-76f, 0x1.c68e8cp-31f, 0x1.35631p-10f,
     0x1.ca9dd6p-94f, 0.0f, 0.0f, 0.0f, 0x1.f4eedep-105f, 0x1.681fbp-118f,
     0x1.25d60ep-77f, 0x1.b02c5ep-76f, 0.0f, 0.0f, 0.0f, 0x1.ad951ap-67f, 0.0f,
     0x1.52ec72p-21f, 0x1.fdbc64p-100f, 0x1.d2d314p-60f, 0x1.a4319ap-94f,
     0x1.50ca96p-86f, 0x1.698ff2p-104f, 0.0f, 0.0f, 0.0f, 0x1.bc2064p-35f, 0.0f,
     0x1.5092fp-69f, 0.0f, 0.0f, 0.0f, 0x1.b976cap-81f, 0x1.a189acp-27f,
     0x1.2912dcp-23f, 0.0f, 0x1p0f, 0.0f, 0x1.7c2d7ap-90f, 0x1.d43652p-3f,
     0x1.c63a2p-91f, 0.0f, 0x1.33a91cp-108f, 0.0f, 0x1.57db1p-86f, 0.0f,
     0x1.ebb58ep-24f, 0x1.21b9aep-95f, 0.0f, 0x1.dec5f8p-8f, 0.0f, 0x1.a64b9cp-50f,
     0x1.b4160ep-90f, 0.0f, 0.0f, 0x1.827f3p-113f, 0.0f, 0x1.05f694p-52f,
     0x1.98063cp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.442f2ap-46f, 0x1.7bcaap-74f, 0.0f,
     0x1.ced6cp-39f, 0.0f, 0.0f, 0x1.9e8ef4p-66f, 0.0f, 0x1.1eb816p-43f, 0.0f,
     0x1.215bdcp-59f, 0.0f, 0.0f, 0.0f, 0x1.019222p-102f, 0x1.8954d4p-60f,
     0x1.a88ff8p-87f, 0.0f, 0x1.19deecp-116f, 0x1.da802ep-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49643ep-9f, 0x1.69209cp-121f, 0.0f, 0.0f, 0x1.7f3bfp-84f, 0.0f, 0.0f, 0.0f,
     0x1.27f35ep-58f, 0.0f, 0.0f, 0x1.7419aap-95f, 0.0f, 0x1.bf9946p-18f,
     0x1.b96ab8p-56f, 0x1.5efb22p-117f, 0x1.9e9d02p-20f, 0x1.24df88p-35f,
     0x1.1dd8cp-47f, 0.0f, 0x1.4f2fecp-108f, 0x1.2b6fp-77f, 0x1.08433ap-109f, 0.0f,
     0x1.c09e06p-7f, 0x1.90af48p-99f, 0.0f, 0.0f, 0.0f, 0x1.8162fep-8f,
     0x1.dfb4aap-31f, 0.0f, 0.0f, 0x1.ec082cp-32f, 0.0f, 0.0f, 0x1.a1c412p-76f,
     0x1.628cfp-45f, 0.0f, 0.0f, 0.0f, 0x1.a772dap-49f, 0.0f, 0.0f, 0x1.3ac0dcp-59f,
     0.0f, 0.0f, 0x1.9e4d46p-112f, 0.0f, 0.0f, 0.0f, 0x1.89c9d2p-50f, 0x1.0ee6ccp-28f,
     0.0f, 0x1.95223ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff5ddap-51f, 0x1.7bd9p-10f,
     0.0f, 0x1.2e4e56p-13f, 0x1.c1167ap-79f, 0x1.c80da6p-74f, 0x1.cb4146p-23f,
     0x1.fce8fep-38f, 0x1.a153acp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.274b52p-73f,
     0.0f, 0.0f, 0x1.eee146p-28f, 0.0f, 0x1.44f06cp-114f, 0x1.f79666p-22f,
     0x1.9ae446p-31f, 0x1.7fd1dcp-121f, 0x1.42649ep-42f, 0.0f, 0.0f, 0x1.abd6e4p-2f,
     0.0f, 0.0f, 0x1.4618acp-116f, 0x1.4349e4p-52f, 0x1.b3b4dp-19f, 0.0f,
     0x1.a8484p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ebf2p-13f, 0x1.5000c8p-114f,
     0x1.653b74p-9f, 0x1.334f92p-113f, 0.0f, 0x1.e34d06p-7f, 0.0f, 0.0f,
     0x1.82e88p-113f, 0x1.588e56p-81f, 0.0f, 0.0f, 0x1.165d2ep-112f, 0x1.68f0bep-114f,
     0.0f, 0.0f, 0x1.b06decp-37f, 0x1.55b3dp-69f, 0x1.b73ffp-61f, 0.0f,
     0x1.9c002cp-99f, 0x1.48e4f6p-103f, 0.0f, 0x1.62a19p-104f, 0x1.03303ep-16f, 0.0f,
     0.0f, 0x1.b84324p-41f, 0x1.2c562ap-62f, 0x1.18ac7ep-84f, 0x1.441ee4p-75f,
     0x1.fe5eaep-109f, 0.0f, 0.0f, 0x1.691762p-43f, 0.0f, 0.0f, 0x1.fa0582p-56f, 0.0f,
     0.0f, 0x1.3bd4c6p-72f, 0x1.32d9fcp-70f, 0x1.734e6p-117f, 0.0f, 0.0f,
     0x1.a46668p-102f, 0x1.065e4cp-76f, 0x1.1ccdf2p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3a4c2p-26f, 0x1.50fb18p-21f, 0x1.9b52e8p-66f, 0x1.f68898p-21f,
     0x1.0f110cp-116f, 0.0f, 0.0f, 0.0f, 0x1.b7b0c4p-24f, 0.0f, 0.0f,
     0x1.9706f8p-109f, 0.0f, 0.0f, 0x1.12d8dp-63f, 0.0f, 0x1.6ac264p-118f,
     0x1.cf603p-55f, 0.0f, 0x1.2ca7cp-12f, 0x1.c43256p-111f, 0x1.0cd32ap-32f,
     0x1.a72d64p-9f, 0.0f, 0.0f, 0x1.46d04p-45f, 0.0f, 0x1.f0f2ap-97f,
     0x1.599f4ep-20f, 0x1.ac184p-59f, 0x1.f55bcp-70f, 0x1.3afcfap-8f, 0.0f, 0.0f,
     0x1.ff849ap-46f, 0.0f, 0x1.5c8d9ep-25f, 0x1.a0a5b8p-24f, 0.0f, 0x1.da17f8p-31f,
     0x1.67a4d8p-69f, 0x1.b65386p-54f, 0x1.a170e8p-118f, 0x1.7c04c8p-24f,
     0x1.ebd7fap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0fbf92p-78f, 0x1.d0c56p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.13a736p-8f, 0x1.4d1bd4p-71f, 0x1.f38132p-56f, 0.0f,
     0x1.7e9e1ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8457dep-118f,
     0x1.74aa1ep-108f, 0.0f, 0x1.5a2fc2p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b18fbcp-37f, 0x1.be63bcp-81f, 0.0f, 0.0f, 0.0f, 0x1.f0d1c6p-70f, 0.0f, 0.0f,
     0x1.639bbcp-108f, 0x1.6ff222p-34f, 0x1.611c72p-52f, 0x1.32360cp-82f,
     0x1.309de2p-13f, 0.0f, 0x1.1353d8p-3f, 0x1.1d53e4p-33f, 0x1.21d268p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a726ep-14f, 0x1.40cadap-108f,
     0x1.00a94ap-97f, 0x1.c2f7c6p-22f, 0.0f, 0x1.ea4618p-100f, 0.0f, 0.0f,
     0x1.03481ep-38f, 0.0f, 0x1.18198p-106f, 0.0f, 0.0f, 0x1.009a3p-67f,
     0x1.d20b8cp-55f, 0.0f, 0x1.54816p-24f, 0.0f, 0x1.e7119ap-26f, 0x1.666a44p-96f,
     0x1.58e6d2p-11f, 0.0f, 0x1.61812p-52f, 0x1.2e30aep-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6586eep-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.868adep-76f, 0.0f, 0.0f, 0.0f,
     0x1.ce7316p-98f, 0x1.747814p-10f, 0.0f, 0.0f, 0.0f, 0x1.aed984p-5f, 0.0f,
     0x1.10f42ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcca88p-63f, 0.0f, 0.0f, 0.0f,
     0x1.02c0c2p-45f, 0x1.29d7aep-24f, 0.0f, 0.0f, 0.0f, 0x1.4ec62ap-85f,
     0x1.e4cfc2p-52f, 0x1.ea73c8p-119f, 0x1.b1f522p-102f, 0.0f, 0.0f, 0x1.3f31a4p-18f,
     0.0f, 0x1.1fefeep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f649ecp-32f, 0x1.908ec2p-116f,
     0.0f, 0x1.a11a44p-47f, 0x1.afe86cp-119f, 0x1.3df73ap-39f, 0.0f, 0.0f,
     0x1.8da284p-114f, 0x1.e0b366p-6f, 0.0f, 0.0f, 0x1.4924eap-102f, 0x1.aa6cbep-54f,
     0x1.508b7ap-31f, 0.0f, 0x1.aeb87ap-81f, 0.0f, 0.0f, 0x1.9ec1bcp-76f,
     0x1.5fc2d8p-79f, 0.0f, 0x1.1a3362p-8f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_nextafterf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_nextafterf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_nextafterf1_purecfma bench acc %a\n", global_bench_acc);
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
