/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf1_u10purecfma.c --function \
 *     Sleef_asinf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.d3e9fep-36f, 0x1.0ca522p-45f, 0x1.9e8bb6p-10f, 0x1.73f786p-1f, 0.0f,
     0x1.e6a4p-74f, 0.0f, 0.0f, 0.0f, 0x1.dbdfdp-102f, 0x1.85fba6p-82f,
     0x1.f398aep-68f, 0x1.3b6a1cp-59f, 0.0f, 0x1.d46738p-85f, 0x1.866d78p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e2c2ap-126f, 0.0f, 0.0f, 0x1.ad675ep-94f,
     0x1.6914c4p-73f, 0x1.581e5p-39f, 0.0f, 0x1.dab658p-53f, 0.0f, 0x1.83b56ap-45f,
     0.0f, 0.0f, 0x1.5827c8p-78f, 0.0f, 0x1.9105e4p-71f, 0.0f, 0x1.8720b4p-115f,
     0x1.481b9ap-82f, 0.0f, 0x1.471da8p-4f, 0.0f, 0x1.f96784p-29f, 0x1.0ee1d2p-41f,
     0.0f, 0x1.f75274p-107f, 0x1.ceb9fp-32f, 0.0f, 0.0f, 0x1.966676p-28f,
     0x1.f9666cp-100f, 0.0f, 0x1.50a33cp-119f, 0.0f, 0x1.14551ap-119f,
     0x1.1efc9cp-45f, 0.0f, 0.0f, 0x1.e1a22ap-60f, 0.0f, 0x1.d4cc72p-17f, 0.0f, 0.0f,
     0.0f, 0x1.43db82p-40f, 0x1.885828p-97f, 0x1.1f119cp-106f, 0x1.31f522p-37f,
     0x1.a55d86p-104f, 0x1.7f18c2p-19f, 0x1.ebcc5cp-2f, 0x1.fbdc4ap-82f, 0.0f, 0.0f,
     0.0f, 0x1.bf91ap-118f, 0x1.76cdb4p-47f, 0.0f, 0x1.ef7fa4p-71f, 0x1.5c7a2p-28f,
     0x1.a7d4aap-19f, 0.0f, 0x1.1c5bbp-120f, 0x1.2d1438p-1f, 0x1.93c32ep-102f,
     0x1.cb56bap-96f, 0x1.a548f8p-99f, 0x1.4e90fcp-51f, 0x1.055fe6p-104f,
     0x1.f70194p-82f, 0.0f, 0.0f, 0x1.cf5e36p-68f, 0x1.7f7d78p-17f, 0.0f, 0.0f,
     0x1.5062d4p-9f, 0.0f, 0x1.c5a18p-47f, 0x1.4ef16ap-32f, 0x1.2e73f8p-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.86df2ap-120f, 0x1.afd9d6p-72f, 0.0f, 0.0f,
     0x1.bd03d6p-22f, 0x1.d94f1p-92f, 0x1.f7b1b6p-53f, 0x1.6a31b6p-1f,
     0x1.75d908p-15f, 0x1.c9057ap-108f, 0x1.d72f08p-120f, 0.0f, 0.0f, 0x1.414e5ep-57f,
     0x1.a3e652p-103f, 0.0f, 0x1.3d56bcp-110f, 0.0f, 0.0f, 0.0f, 0x1.73a1fcp-121f,
     0.0f, 0x1.8a8be2p-83f, 0.0f, 0.0f, 0x1.601832p-103f, 0.0f, 0x1.60c396p-74f,
     0x1.1ff9a8p-85f, 0.0f, 0x1.2091eap-39f, 0x1.14c36ep-117f, 0.0f, 0x1.57b4cep-75f,
     0x1.cecd46p-51f, 0x1.cdc096p-98f, 0x1.c2274ap-39f, 0x1.23c766p-43f,
     0x1.aae66ap-102f, 0.0f, 0.0f, 0.0f, 0x1.847eb8p-100f, 0.0f, 0x1.d41eb4p-16f,
     0x1.291eaep-86f, 0.0f, 0x1.d45eep-38f, 0.0f, 0x1.410004p-87f, 0.0f, 0.0f,
     0x1.269b26p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.297afap-19f, 0x1.11e3a2p-118f,
     0x1.bfd806p-115f, 0.0f, 0.0f, 0x1.4913d2p-81f, 0x1.2e9f46p-25f, 0.0f,
     0x1.dd707p-29f, 0.0f, 0x1.005caap-63f, 0x1.c6b776p-6f, 0x1.6567acp-68f, 0.0f,
     0x1.26acc8p-100f, 0x1.ed2cf2p-109f, 0x1.c8812ep-114f, 0.0f, 0.0f, 0x1.31ff66p-4f,
     0x1.77f21cp-70f, 0.0f, 0.0f, 0x1.556cfp-41f, 0.0f, 0.0f, 0.0f, 0x1.803aap-41f,
     0.0f, 0x1.c3e996p-46f, 0x1.acab8ep-1f, 0x1.f6cc2cp-109f, 0.0f, 0x1.b32706p-42f,
     0.0f, 0x1.e6edd4p-6f, 0x1.ad3208p-57f, 0.0f, 0x1.2df34p-85f, 0.0f, 0.0f,
     0x1.8ceb8ep-47f, 0x1.a1e62ap-123f, 0.0f, 0x1.923c2ap-22f, 0.0f, 0.0f,
     0x1.c3d588p-22f, 0x1.7732bep-48f, 0.0f, 0x1.70662cp-54f, 0x1.d9a1cp-56f,
     0x1.7aa92ep-90f, 0x1.cdc6dap-67f, 0x1.d26668p-46f, 0x1.1bdf36p-20f, 0.0f, 0.0f,
     0.0f, 0x1.e6294ep-110f, 0.0f, 0x1.19cfb6p-105f, 0.0f, 0x1.87301p-113f, 0.0f,
     0.0f, 0x1.0433a8p-74f, 0.0f, 0x1.7a6104p-46f, 0.0f, 0x1.3b5222p-112f,
     0x1.8aee4ap-59f, 0.0f, 0.0f, 0x1.8db394p-70f, 0x1.a055f8p-109f, 0x1.5a65c6p-123f,
     0.0f, 0x1.d3d4f6p-75f, 0.0f, 0x1.f7349ap-7f, 0x1.163b02p-118f, 0x1.633dd4p-37f,
     0.0f, 0.0f, 0.0f, 0x1.73e54ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48d876p-4f,
     0x1.eec802p-2f, 0x1.e092f4p-72f, 0x1.b26d22p-1f, 0x1.4342f6p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e7c45p-74f, 0x1.4c677ap-66f, 0x1.dc041cp-91f, 0.0f,
     0x1.0c2e3p-118f, 0x1.df9752p-11f, 0x1.cc0104p-66f, 0x1.68ceeap-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cfd34ap-67f, 0x1.1fe1e6p-109f, 0x1.8101d8p-12f, 0x1.3bae3ep-119f,
     0x1.5e90ecp-21f, 0.0f, 0.0f, 0x1.02d2d8p-8f, 0.0f, 0.0f, 0x1.de0604p-115f,
     0x1.383fcap-55f, 0.0f, 0.0f, 0x1.19377cp-54f, 0.0f, 0x1.39804ep-58f, 0.0f, 0.0f,
     0x1.260746p-35f, 0x1.a7d0d6p-24f, 0.0f, 0.0f, 0x1.15a4b8p-125f, 0.0f, 0.0f, 0.0f,
     0x1.b0171p-11f, 0x1.d6e6c4p-110f, 0.0f, 0x1.3e602ep-30f, 0.0f, 0.0f,
     0x1.7cc886p-45f, 0.0f, 0x1.9cc0f6p-62f, 0x1.176826p-59f, 0x1.50b064p-48f,
     0x1.3a64b8p-19f, 0x1.477392p-90f, 0.0f, 0.0f, 0.0f, 0x1.9b6d8ap-42f,
     0x1.34eac4p-33f, 0.0f, 0x1.4f449ap-23f, 0x1.a14114p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f3dc2p-39f, 0x1.a88b9cp-87f, 0x1.e8bf2ap-114f, 0x1.b1f95ep-6f,
     0.0f, 0.0f, 0.0f, 0x1.82dd1p-87f, 0.0f, 0.0f, 0.0f, 0x1.a1bacap-39f,
     0x1.169ac8p-77f, 0x1.23f25p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.119d02p-16f,
     0x1.3ef4eap-53f, 0x1.7c6276p-104f, 0.0f, 0.0f, 0.0f, 0x1.42a616p-16f,
     0x1.f43a28p-15f, 0.0f, 0.0f, 0x1.52585ap-78f, 0x1.cd9ad8p-70f, 0x1.54eccap-26f,
     0.0f, 0.0f, 0x1.69cb02p-121f, 0x1.c2e992p-23f, 0.0f, 0x1.cac0d8p-9f,
     0x1.33352ap-43f, 0x1.3f8822p-72f, 0.0f, 0x1.f16cbep-65f, 0x1.fd616ep-38f,
     0x1.5aa456p-125f, 0.0f, 0x1.d4e0f8p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ddadap-20f, 0x1.d3d48cp-22f, 0x1.26278cp-26f, 0.0f, 0.0f, 0x1.fb8dd6p-19f,
     0x1.e30102p-24f, 0.0f, 0.0f, 0x1.1d5882p-88f, 0.0f, 0.0f, 0x1.a037b6p-94f, 0.0f,
     0x1.af9ef8p-116f, 0x1.b2f5fep-23f, 0.0f, 0x1.b7a888p-6f, 0x1.65f1f6p-15f, 0.0f,
     0.0f, 0.0f, 0x1.5d1576p-69f, 0x1.0f611ep-122f, 0.0f, 0x1.635262p-42f, 0.0f, 0.0f,
     0.0f, 0x1.5f56dp-125f, 0x1.f5695ep-52f, 0.0f, 0x1.a326f8p-121f, 0.0f, 0.0f,
     0x1.d165e2p-93f, 0.0f, 0.0f, 0.0f, 0x1.1675cap-107f, 0x1.724bdep-57f,
     0x1.111242p-45f, 0.0f, 0.0f, 0x1.1186eep-68f, 0x1.78f826p-81f, 0x1.301e94p-125f,
     0x1.c3e75p-55f, 0.0f, 0.0f, 0.0f, 0x1.1574c2p-119f, 0x1.7c394cp-69f, 0.0f, 0.0f,
     0x1.a99846p-98f, 0.0f, 0.0f, 0x1.074ee6p-57f, 0.0f, 0x1.95b8c2p-86f, 0.0f,
     0x1.e6fc5ep-116f, 0x1.28ba1p-35f, 0x1.00ac48p-96f, 0.0f, 0x1.1e78dcp-90f,
     0x1.f23ba4p-70f, 0x1.29208p-87f, 0.0f, 0x1.548b94p-125f, 0x1.aed77ep-20f,
     0x1.3ce158p-69f, 0x1.7fcc36p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.7184c6p-37f, 0.0f, 0.0f, 0x1.d6366p-41f, 0x1.8e543ap-53f, 0x1.dfcb1ap-13f,
     0x1.04990ap-125f, 0x1.d8f48cp-77f, 0x1.b125cap-53f, 0.0f, 0.0f, 0.0f,
     0x1.feab4p-47f, 0x1.7cce2ap-21f, 0x1.97f114p-75f, 0.0f, 0.0f, 0x1.bbb598p-17f,
     0x1.7fd904p-14f, 0x1.afef98p-41f, 0.0f, 0.0f, 0x1.5fc5ep-108f, 0x1.4d46e8p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a0f14p-43f, 0.0f,
     0x1.6342fap-102f, 0x1.7914ecp-47f, 0x1.df6486p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a09ac4p-81f, 0.0f, 0.0f, 0x1.a4ab34p-113f, 0.0f, 0x1.98f936p-121f, 0.0f,
     0.0f, 0x1.bb1b9ap-113f, 0.0f, 0x1.6a40b6p-124f, 0x1.ebaacap-1f, 0.0f, 0.0f,
     0x1.cb315p-81f, 0x1.4380e2p-2f, 0.0f, 0x1.d111cep-61f, 0x1.a2e54cp-57f,
     0x1.28350cp-52f, 0.0f, 0x1.b35392p-92f, 0x1.a52346p-63f, 0x1.ed288ap-35f,
     0x1.12a352p-32f, 0.0f, 0x1.c045a8p-49f, 0x1.a1727ap-106f, 0.0f, 0x1.f90c76p-69f,
     0.0f, 0x1.125e98p-119f, 0x1.02d746p-107f, 0.0f, 0.0f, 0x1.1e8d1p-126f,
     0x1.6607f6p-94f, 0x1.7b00dap-30f, 0.0f, 0.0f, 0.0f, 0x1.c99128p-99f,
     0x1.6e1108p-122f, 0.0f, 0x1.9c0454p-65f, 0x1.e759e8p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a4b86p-122f, 0x1.cae5c8p-126f, 0.0f,
     0.0f, 0x1.55079cp-74f, 0x1.f94a9cp-35f, 0.0f, 0.0f, 0.0f, 0x1.975248p-25f,
     0x1.05bce2p-112f, 0.0f, 0.0f, 0x1.46f8c8p-72f, 0x1.c88a88p-26f, 0.0f,
     0x1.a04b48p-17f, 0x1.85baa8p-70f, 0.0f, 0.0f, 0x1.e07ce8p-88f, 0.0f, 0.0f, 0.0f,
     0x1.9967d8p-62f, 0x1.e96f18p-75f, 0x1.5a68ap-42f, 0.0f, 0x1.ecce2ap-126f,
     0x1.56d416p-24f, 0x1.873066p-108f, 0x1.3960f2p-86f, 0.0f, 0x1.af57b8p-65f, 0.0f,
     0.0f, 0x1.cf5656p-84f, 0.0f, 0x1.0d9ee8p-76f, 0x1.b31b5ep-77f, 0x1.3b4524p-83f,
     0.0f, 0.0f, 0.0f, 0x1.fde8a2p-109f, 0x1.dacda4p-33f, 0x1.103d38p-90f, 0.0f, 0.0f,
     0x1.49b826p-83f, 0.0f, 0.0f, 0x1.753c6ap-94f, 0.0f, 0.0f, 0x1.138c4cp-22f,
     0x1.9ff7e2p-110f, 0.0f, 0.0f, 0x1.555cacp-85f, 0.0f, 0x1.ad870ep-91f, 0.0f,
     0x1.c8f8e6p-42f, 0x1.efdccap-105f, 0x1.dd31ecp-58f, 0x1.e8940ep-86f, 0.0f, 0.0f,
     0x1.035eccp-83f, 0x1.3cf04cp-90f, 0x1.d55eeep-114f, 0.0f, 0.0f, 0x1.5c6dbep-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fad46p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b7a496p-1f, 0x1.3c9a98p-12f, 0x1.d856fap-107f, 0.0f, 0.0f, 0.0f,
     0x1.571622p-104f, 0.0f, 0.0f, 0x1.55a256p-63f, 0x1p0f, 0x1.92b77cp-80f,
     0x1.78f5acp-80f, 0x1.666552p-104f, 0.0f, 0.0f, 0x1.d00702p-57f, 0.0f, 0.0f, 0.0f,
     0x1.8c763cp-56f, 0.0f, 0x1.169d4cp-126f, 0.0f, 0x1.ad797ep-34f, 0.0f,
     0x1.50fcdp-31f, 0.0f, 0x1.af0a12p-69f, 0.0f, 0x1.05de16p-59f, 0x1.4d0dfp-87f,
     0x1.c0ce48p-99f, 0.0f, 0x1.d0fe0cp-113f, 0x1.b9648p-66f, 0x1.89f93cp-74f, 0.0f,
     0.0f, 0.0f, 0x1.ea3962p-6f, 0.0f, 0x1.1e427ap-93f, 0.0f, 0x1.e94b38p-96f,
     0x1.e0f392p-99f, 0x1.206e1p-32f, 0x1.a15f6p-89f, 0x1.76ffd2p-10f, 0.0f,
     0x1.34510ep-70f, 0x1.0242ccp-23f, 0x1.bc833ep-113f, 0.0f, 0x1.3b3404p-98f, 0.0f,
     0x1.42331ap-100f, 0.0f, 0x1.9c51c8p-88f, 0x1.9fe826p-89f, 0.0f, 0x1.406bdep-105f,
     0x1.9d3312p-24f, 0x1.089bbp-17f, 0.0f, 0x1.d27b36p-74f, 0.0f, 0x1.f28aacp-81f,
     0x1.92c85ep-60f, 0x1.1cdc84p-99f, 0x1.37de4ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.123538p-11f, 0x1.8c9b74p-69f, 0.0f, 0x1.3a9fbap-10f, 0x1.2b3674p-88f, 0.0f,
     0x1.34c59cp-67f, 0x1.673542p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac3cecp-55f, 0x1.6a068cp-74f, 0x1.33874cp-12f, 0x1.c2b936p-116f,
     0x1.72fc54p-62f, 0.0f, 0x1.5b3214p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71a468p-31f,
     0.0f, 0x1.6e282ap-35f, 0x1.cd0cc4p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b05c18p-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b50a8p-113f, 0.0f, 0x1.ee4e34p-62f, 0.0f,
     0.0f, 0.0f, 0x1.d01bd4p-15f, 0.0f, 0.0f, 0x1.334b8cp-26f, 0.0f, 0.0f,
     0x1.8cb886p-48f, 0.0f, 0x1.952b12p-45f, 0x1.541862p-48f, 0x1.02faa4p-115f,
     0x1.9e2716p-99f, 0x1.d730c8p-33f, 0.0f, 0x1.ba0ee6p-81f, 0x1.d1743p-57f,
     0x1.a0303ap-99f, 0x1.786d5p-67f, 0x1.dc5342p-4f, 0x1.c2e2a8p-123f, 0.0f,
     0x1.669092p-51f, 0.0f, 0x1.2193dap-108f, 0x1.55a182p-87f, 0x1.fa6b8ep-123f, 0.0f,
     0x1.04507ep-112f, 0.0f, 0x1.4c0ffp-17f, 0.0f, 0x1.431bc4p-20f, 0.0f,
     0x1.d3321ap-77f, 0.0f, 0.0f, 0x1.641f4ep-90f, 0x1.8bc69p-17f, 0x1.9f22f6p-21f,
     0x1.0542b8p-28f, 0x1.86139ap-71f, 0x1.e4b416p-24f, 0x1.aedac2p-103f,
     0x1.0b8466p-46f, 0x1.5f3ab2p-46f, 0x1.83c9b4p-71f, 0x1.f93478p-18f,
     0x1.78f9bcp-37f, 0x1.90ccdap-6f, 0x1.039202p-10f, 0x1.be558ap-8f,
     0x1.97854ap-58f, 0x1.21d214p-13f, 0.0f, 0x1.a8e2f6p-36f, 0.0f, 0x1.2a168cp-119f,
     0.0f, 0x1.c2f90ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f5dc6p-10f, 0x1.a2c258p-25f,
     0x1.2be536p-7f, 0x1.88c278p-79f, 0x1.a31b18p-104f, 0x1.c6eaf8p-85f, 0.0f, 0.0f,
     0x1.1d7a44p-101f, 0x1.e018ecp-29f, 0x1.edaeb8p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c789ccp-111f, 0.0f, 0x1.901fc2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6843fep-1f, 0.0f, 0x1.db8c82p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.29aa38p-53f, 0.0f, 0x1.4ce6dcp-61f, 0.0f, 0x1.5ebfb6p-94f, 0.0f,
     0x1.0b952ep-110f, 0x1.44682ap-26f, 0x1.bcc8dcp-26f, 0x1.47f26ep-83f, 0.0f,
     0x1.15a542p-94f, 0x1.99ccecp-99f, 0x1.e29caap-17f, 0.0f, 0.0f, 0x1.7ab084p-65f,
     0x1.7fa55ap-54f, 0x1.89860ap-66f, 0.0f, 0x1.f2e686p-41f, 0.0f, 0.0f,
     0x1.ee7c96p-61f, 0x1.7d416p-86f, 0x1.706d52p-95f, 0.0f, 0.0f, 0x1.783e5ap-20f,
     0.0f, 0x1.5bf5c8p-92f, 0x1.6322eep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a51384p-30f, 0x1.e8c63p-30f, 0x1.cf4ceep-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1601eep-99f, 0x1.ff1014p-54f, 0.0f, 0.0f, 0.0f, 0x1.56a1a2p-106f, 0.0f,
     0x1.45cc0ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d9146p-100f, 0x1.01ddc6p-105f,
     0x1.c3308cp-78f, 0x1.e5eaa6p-56f, 0.0f, 0x1.f64a2ap-7f, 0x1.5a5572p-30f,
     0x1.932668p-120f, 0.0f, 0.0f, 0x1.5ab966p-79f, 0.0f, 0.0f, 0.0f, 0x1.0d6642p-8f,
     0.0f, 0x1.c5bd8ep-20f, 0x1.0b10c6p-12f, 0x1.f2eadp-36f, 0.0f, 0x1.8dea04p-103f,
     0x1.617028p-22f, 0x1.1af1b6p-94f, 0.0f, 0x1.177cf8p-54f, 0x1.b9b9ep-10f, 0.0f,
     0x1.0385b6p-99f, 0x1.409feap-70f, 0x1.eed1cap-66f, 0x1.a87ddep-76f, 0.0f,
     0x1.9ce9a2p-110f, 0x1.7f4bf6p-51f, 0x1.e5732p-1f, 0.0f, 0x1.c6e6e2p-28f,
     0x1.e4adb4p-63f, 0x1.a5a83p-76f, 0x1.11cbcap-114f, 0.0f, 0x1.f227bp-33f,
     0x1.50ae9ap-46f, 0x1.1a75eep-94f, 0.0f, 0x1.4f966p-5f, 0x1.c3c6e4p-41f,
     0x1.2b1a7ap-56f, 0.0f, 0.0f, 0x1.092c62p-94f, 0.0f, 0x1.13825cp-1f,
     0x1.2b359cp-49f, 0x1.325a28p-32f, 0.0f, 0x1.deb03p-54f, 0x1.3529p-14f,
     0x1.f5e5c8p-59f, 0x1.3d58a8p-71f, 0x1.82967p-69f, 0.0f, 0.0f, 0.0f,
     0x1.1b6a08p-85f, 0.0f, 0.0f, 0.0f, 0x1.93dbc2p-66f, 0x1.9327d4p-72f, 0.0f, 0.0f,
     0x1.10dd7cp-4f, 0.0f, 0.0f, 0x1.98a7dp-11f, 0x1.caba64p-120f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.7c0998p-102f, 0.0f, 0x1.58fdaep-76f, 0x1.8e9526p-56f
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
            tmp1 = Sleef_asinf1_u10purecfma(tmp0);
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
    printf("Sleef_asinf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
