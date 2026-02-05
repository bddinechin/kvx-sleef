/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_tgammaf.c --function tgammaf --headers \
 *     math.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.df9ebep-67f, 0.0f, 0x1.78013ap-97f, 0x1.b2d0a6p-71f, 0.0f,
     0x1.aea8ecp-27f, 0x1.99216ep-112f, 0x1.efef4cp-48f, 0.0f, 0.0f, 0x1.97166ep-3f,
     0x1.1c48f4p-78f, 0.0f, 0x1.2824d8p-19f, 0.0f, 0x1.b95dcep-35f, 0.0f,
     0x1.40702ap-59f, 0x1.9fdae2p-3f, 0x1.109aa8p-60f, 0x1.c38c56p-34f,
     0x1.f15606p-85f, 0.0f, 0.0f, 0.0f, 0x1.60929p-63f, 0x1.b56b58p-11f,
     0x1.30b0cep-27f, 0.0f, 0.0f, 0x1.11b56ap-77f, 0x1.440926p-89f, 0x1.57d22ep-33f,
     0x1.f3ff42p-44f, 0x1.f78e3ap-46f, 0.0f, 0x1.1f3f0ep-93f, 0.0f, 0.0f,
     0x1.0aca2ep-84f, 0x1.6da5d2p-97f, 0.0f, 0x1.51c49ap-70f, 0x1.c71f86p-73f, 0.0f,
     0x1.5ab4b2p-2f, 0.0f, 0x1.baa24ap-57f, 0x1.5cd108p-31f, 0.0f, 0.0f, 0.0f,
     0x1.98af08p-8f, 0x1.170e88p-125f, 0.0f, 0.0f, 0.0f, 0x1.5a8338p-117f, 0.0f, 0.0f,
     0x1.3abc0cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3630ap-87f, 0.0f, 0x1.7a2f36p-46f,
     0x1.896cep-77f, 0x1.f854eap-63f, 0.0f, 0x1.fa966cp-70f, 0x1.74a968p-46f, 0.0f,
     0.0f, 0x1.77dc38p-105f, 0x1.25c43p-116f, 0x1.52b044p-73f, 0.0f, 0x1.c25826p-125f,
     0x1.69b4fap-67f, 0x1.52ca98p-120f, 0.0f, 0.0f, 0x1.fb107ap-17f, 0.0f,
     0x1.b317fap-56f, 0x1.1ac24ep-115f, 0.0f, 0x1.b20a02p-113f, 0.0f, 0x1.86eb22p-88f,
     0x1.d05468p-77f, 0.0f, 0.0f, 0.0f, 0x1.dda06p-80f, 0x1.953368p-78f,
     0x1.e0711cp-111f, 0.0f, 0.0f, 0.0f, 0x1.336e84p-63f, 0x1.6f9746p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.abaf08p-17f, 0.0f, 0.0f, 0x1.5fa074p-77f, 0x1.c8df98p-95f,
     0x1.a6cb66p-119f, 0x1.467c56p-99f, 0.0f, 0.0f, 0x1.797fb2p-74f, 0x1.3ae954p-69f,
     0.0f, 0x1.4ff6cp-13f, 0x1.0ecdeep-46f, 0x1.52d6aep-104f, 0.0f, 0.0f, 0.0f,
     0x1.34c9dap-82f, 0.0f, 0x1.afaba2p-91f, 0x1.f948bep-59f, 0.0f, 0x1.7b1842p-51f,
     0x1.6cc29ap-16f, 0x1.be6d3ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e5b492p-97f, 0.0f, 0x1.e8a656p-77f, 0.0f, 0x1.0d0098p-120f,
     0x1.334ce4p-108f, 0.0f, 0.0f, 0x1.30bcaap-21f, 0x1.3a6308p-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0ea1cp-5f, 0.0f, 0.0f, 0x1.a2d6bap-70f, 0.0f,
     0x1.cfa274p-48f, 0x1.63dcc6p-65f, 0x1.00fab8p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6329f2p-44f, 0x1.1eb7eep-120f, 0.0f, 0.0f, 0.0f, 0x1.0e636cp-34f,
     0x1.bb6016p-124f, 0x1.77c54ep-30f, 0x1.e5742ap-74f, 0x1.a21bdp-94f,
     0x1.b9a5bap-66f, 0x1.ed5d72p-106f, 0x1.a462ap-9f, 0x1.c16336p-57f,
     0x1.c33c24p-28f, 0x1.8d82b8p-100f, 0x1.b5efb4p-117f, 0.0f, 0.0f, 0x1.11cc02p-50f,
     0.0f, 0x1.e55284p-1f, 0.0f, 0.0f, 0x1.efac86p-77f, 0.0f, 0x1.b17bp-42f, 0.0f,
     0x1.2a78dep-63f, 0x1.5da058p-64f, 0.0f, 0x1.f71d8p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.878becp-110f, 0x1.6a6bbcp-11f, 0x1.ecc496p-123f,
     0x1.ad4158p-115f, 0.0f, 0.0f, 0.0f, 0x1.96d0a8p-99f, 0x1.fad2d2p-35f, 0.0f,
     0x1.0bf59ap-94f, 0x1.7d8f6ap-102f, 0x1.feaa34p-83f, 0x1.f53996p-3f,
     0x1.bacee8p-78f, 0x1.0739a4p-124f, 0.0f, 0.0f, 0.0f, 0x1.abb9d8p-59f,
     0x1.98a564p-1f, 0x1.30f1fep-52f, 0.0f, 0x1.29c58ep-63f, 0x1.bbd926p-36f,
     0x1.6eed72p-72f, 0.0f, 0x1.8a56cp-32f, 0x1.6b4ce4p-111f, 0.0f, 0x1.7f234ap-107f,
     0.0f, 0x1.b023a6p-68f, 0.0f, 0x1.bf682cp-68f, 0x1.1bb394p-122f, 0.0f, 0.0f,
     0x1.bd6a48p-101f, 0.0f, 0.0f, 0x1.a3904ep-81f, 0x1.836536p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f2c0fp-88f, 0.0f, 0x1.44fc56p-110f, 0x1.5377b2p-66f,
     0x1.ab468p-76f, 0.0f, 0.0f, 0x1.0c749ap-36f, 0x1.27fa8ep-99f, 0x1.b90c56p-69f,
     0.0f, 0x1.1ba798p-112f, 0x1.4393bcp-82f, 0.0f, 0x1.6649fp-22f, 0.0f, 0.0f,
     0x1.a016f6p-71f, 0.0f, 0.0f, 0x1.a6d2fep-72f, 0x1.84e0fp-71f, 0x1.3b21c2p-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a591f4p-15f, 0.0f, 0.0f, 0.0f,
     0x1.144c14p-108f, 0.0f, 0.0f, 0x1.aa033ap-116f, 0.0f, 0.0f, 0.0f,
     0x1.9bcfe6p-38f, 0x1.274ca8p-53f, 0x1.f27656p-4f, 0x1.ba5752p-103f,
     0x1.3a695ep-34f, 0x1.fb1484p-93f, 0x1.f6ae58p-90f, 0.0f, 0x1.6f45bcp-80f, 0.0f,
     0x1.50923ep-27f, 0x1.97f7dcp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dfa1a4p-99f, 0.0f, 0x1.a50096p-49f, 0.0f, 0.0f, 0.0f, 0x1.bb8f5p-45f,
     0x1.ca47c2p-114f, 0x1.6714a2p-76f, 0.0f, 0x1.28fddep-49f, 0x1.e0311ep-75f, 0.0f,
     0.0f, 0.0f, 0x1.86b73cp-58f, 0x1.28e0d4p-89f, 0.0f, 0x1.84754ap-123f,
     0x1.0ed91ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae1452p-4f, 0x1.5538cap-37f,
     0x1.76da24p-118f, 0.0f, 0.0f, 0.0f, 0x1.9fab5ap-68f, 0.0f, 0.0f, 0x1.909274p-73f,
     0x1.586342p-10f, 0x1.83ef3cp-122f, 0x1.094f28p-125f, 0x1.3beb4ap-109f, 0.0f,
     0x1.b57984p-66f, 0x1.dd688ep-50f, 0.0f, 0.0f, 0x1.a22742p-38f, 0x1.65ddeap-5f,
     0x1.818b66p-35f, 0x1.2aa4b6p-23f, 0x1.21683ep-6f, 0.0f, 0.0f, 0x1.b57f88p-89f,
     0x1.e2d538p-33f, 0x1.30f47p-123f, 0x1.98572cp-63f, 0x1.39cf56p-62f,
     0x1.8d0d62p-24f, 0x1.2997b4p-44f, 0.0f, 0x1.8b01e4p-1f, 0x1.d34ea8p-64f, 0.0f,
     0x1.08df2ap-96f, 0.0f, 0.0f, 0x1.0a4f16p-37f, 0x1.989d6ep-12f, 0x1.60037ap-108f,
     0.0f, 0x1.b376b2p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab445p-43f, 0x1.9f2a32p-98f,
     0.0f, 0x1.01d97p-17f, 0x1.4f1142p-90f, 0.0f, 0.0f, 0x1.1da844p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.924954p-18f, 0x1.ee933p-100f, 0x1.278828p-29f,
     0.0f, 0x1.1428a8p-31f, 0x1.1218dap-49f, 0.0f, 0.0f, 0.0f, 0x1.54a67ap-10f,
     0x1.de5adp-54f, 0.0f, 0x1.337c54p-45f, 0x1.e29a04p-42f, 0x1.b94e5ap-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.614beap-34f, 0.0f, 0.0f,
     0x1.4c206ap-44f, 0.0f, 0x1.634bb6p-47f, 0x1.e69352p-66f, 0.0f, 0.0f,
     0x1.e101d6p-5f, 0.0f, 0x1.802898p-125f, 0.0f, 0.0f, 0x1.521dfp-105f,
     0x1.e81976p-113f, 0x1.f3ebd6p-48f, 0.0f, 0.0f, 0.0f, 0x1.baee44p-87f, 0.0f,
     0x1.65bba4p-32f, 0x1.08a6d8p-40f, 0.0f, 0x1.203d2cp-33f, 0.0f, 0x1.0296a2p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c07fap-105f, 0x1.4a3004p-114f, 0x1.8a9606p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.793a06p-42f, 0.0f, 0x1.3849fep-30f,
     0x1.b8ddaep-26f, 0x1.e7af44p-80f, 0x1.30a94ep-47f, 0x1.92697ap-110f,
     0x1.0692cap-23f, 0x1.7c6aap-71f, 0.0f, 0.0f, 0x1.ba1422p-68f, 0x1.21d21p-35f,
     0.0f, 0x1.95623ap-64f, 0x1.ed692p-7f, 0.0f, 0x1.f7f1fcp-30f, 0.0f,
     0x1.236444p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.517266p-65f,
     0x1.d9b732p-70f, 0x1.92ef3p-103f, 0.0f, 0.0f, 0.0f, 0x1.79d08cp-38f,
     0x1.7d02e8p-17f, 0.0f, 0x1.426b6ep-92f, 0x1.1abd64p-103f, 0x1.44c402p-55f,
     0x1.5f0f56p-86f, 0.0f, 0x1.fb355ap-75f, 0.0f, 0.0f, 0x1.a462f8p-47f,
     0x1.1e4678p-88f, 0x1.4f4044p-117f, 0.0f, 0x1.b30efap-86f, 0x1.66e4d6p-24f,
     0x1.26566ap-116f, 0.0f, 0x1.a2f2dep-99f, 0x1.09d3f2p-19f, 0.0f, 0.0f,
     0x1.2669eap-50f, 0x1.c3a5p-24f, 0x1.29248ep-31f, 0x1.dfca1ep-71f,
     0x1.011b78p-34f, 0x1.691018p-15f, 0.0f, 0x1.a50324p-113f, 0.0f, 0x1.fcecc2p-124f,
     0.0f, 0.0f, 0.0f, 0x1.e11014p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b982b8p-41f, 0x1p0f, 0.0f, 0x1.0832aap-62f, 0.0f, 0.0f, 0x1.044736p-95f,
     0x1.705e2cp-42f, 0.0f, 0.0f, 0.0f, 0x1.241a8p-72f, 0.0f, 0.0f, 0x1.503668p-54f,
     0.0f, 0.0f, 0x1.4217dep-80f, 0x1.710042p-78f, 0.0f, 0.0f, 0x1.f432dep-89f, 0.0f,
     0.0f, 0x1.551f2cp-28f, 0.0f, 0x1.f4fbe2p-12f, 0x1.0214bp-125f, 0.0f,
     0x1.c2768p-19f, 0.0f, 0.0f, 0x1.be2f7cp-8f, 0.0f, 0.0f, 0x1.d668e8p-125f,
     0x1.6cfc84p-79f, 0.0f, 0x1.0a1adep-68f, 0.0f, 0x1.50bd1ap-53f, 0.0f,
     0x1.f5fc52p-87f, 0x1.72dc42p-59f, 0x1.b8a272p-37f, 0x1.0ca19cp-100f, 0.0f, 0.0f,
     0x1.ea568cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3edc82p-57f, 0x1.745804p-119f,
     0x1.a7797ap-67f, 0.0f, 0.0f, 0x1.62fc98p-80f, 0.0f, 0x1.6ec478p-120f, 0.0f, 0.0f,
     0x1.b730f4p-43f, 0.0f, 0x1.02e41cp-33f, 0x1.d3b26p-73f, 0.0f, 0.0f,
     0x1.ffe5c6p-96f, 0.0f, 0x1.4be4f2p-79f, 0.0f, 0x1.93a524p-83f, 0x1.b8ce1ap-113f,
     0.0f, 0x1.f7a4fcp-105f, 0.0f, 0x1.989666p-67f, 0.0f, 0x1.f888d4p-108f, 0.0f,
     0x1.ebf454p-13f, 0x1.b9605p-38f, 0x1.5bf84ap-96f, 0x1.e59da6p-47f,
     0x1.75e99ap-24f, 0x1.9f52dap-15f, 0.0f, 0.0f, 0x1.7f0122p-10f, 0.0f,
     0x1.706c64p-92f, 0.0f, 0x1.e9577p-10f, 0.0f, 0x1.823404p-70f, 0.0f,
     0x1.2f40a8p-65f, 0x1.73086p-86f, 0.0f, 0x1.7f729cp-64f, 0x1.3af9d6p-104f, 0.0f,
     0x1.d50a8ap-3f, 0x1.12c81cp-85f, 0.0f, 0x1.6fb6bp-38f, 0x1.851bc8p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.885e62p-96f, 0x1.328b5cp-107f, 0.0f, 0x1.d5133ap-6f, 0.0f,
     0.0f, 0x1.6c080cp-104f, 0.0f, 0x1.22dd1p-43f, 0.0f, 0x1.ad13dp-99f,
     0x1.4ee44cp-14f, 0.0f, 0.0f, 0.0f, 0x1.7c9692p-53f, 0x1.635f7cp-30f, 0.0f,
     0x1.eb0e3cp-120f, 0x1.24b0c2p-70f, 0x1.c9701p-106f, 0.0f, 0x1.185dbep-97f, 0.0f,
     0x1.42b1fcp-60f, 0.0f, 0.0f, 0x1.b4839p-122f, 0x1.c028eep-116f, 0x1.2c4978p-96f,
     0x1.4895f8p-77f, 0x1.2d0e9ap-111f, 0.0f, 0x1.e6b40ep-25f, 0x1.f0987ep-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f4ff82p-11f, 0x1.21f82ep-92f, 0x1.d6a1c4p-112f, 0.0f,
     0x1.2f69e6p-96f, 0x1.ac9be8p-8f, 0.0f, 0.0f, 0x1.9a6a7cp-99f, 0.0f, 0.0f, 0.0f,
     0x1.5d5a8p-119f, 0.0f, 0.0f, 0x1.aafc6p-13f, 0x1.371b1p-79f, 0x1.a63454p-101f,
     0.0f, 0.0f, 0.0f, 0x1.601b28p-10f, 0x1.0d6188p-57f, 0x1.357dd6p-74f, 0.0f,
     0x1.5ab6dcp-13f, 0.0f, 0x1.a08f1p-49f, 0.0f, 0x1.800276p-69f, 0.0f, 0.0f,
     0x1.f2767cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94fff4p-38f, 0.0f, 0.0f, 0.0f,
     0x1.60485ap-67f, 0.0f, 0.0f, 0x1.74686ep-113f, 0x1.d02d38p-72f, 0.0f,
     0x1.79c90ap-88f, 0.0f, 0x1.4ea312p-71f, 0x1.b2f9ecp-43f, 0.0f, 0x1.d32a42p-116f,
     0x1.f2562p-8f, 0.0f, 0.0f, 0.0f, 0x1.3a4db8p-89f, 0.0f, 0x1.165762p-79f, 0.0f,
     0x1.5f2c9p-40f, 0x1.5ad492p-52f, 0.0f, 0x1.08bbp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d427c8p-50f, 0.0f, 0.0f, 0x1.dc9b16p-2f, 0x1.d6bb74p-19f,
     0x1.aa1962p-117f, 0.0f, 0x1.727c36p-76f, 0x1.a43de6p-28f, 0x1.2675fp-47f, 0.0f,
     0.0f, 0x1.f8e742p-13f, 0x1.9c69bp-19f, 0x1.939bf6p-115f, 0.0f, 0x1.e3d092p-84f,
     0x1.73058p-19f, 0x1.2f1028p-98f, 0x1.46070ep-2f, 0x1.0c49e8p-75f, 0.0f, 0.0f,
     0x1.99b27cp-92f, 0x1.b455a2p-10f, 0.0f, 0.0f, 0.0f, 0x1.6f42cep-46f,
     0x1.a8526ap-74f, 0x1.fabf32p-43f, 0x1.6b6a14p-19f, 0x1.919e8ep-114f,
     0x1.8bd908p-81f, 0x1.685c7cp-29f, 0x1.8c18p-67f, 0.0f, 0x1.2c5efep-29f, 0.0f,
     0x1.b4f012p-71f, 0.0f, 0x1.2d3152p-60f, 0.0f, 0x1.9ff7f2p-21f, 0.0f, 0.0f,
     0x1.126efap-104f, 0x1.b17e28p-100f, 0x1.2c0cdp-74f, 0.0f, 0x1.4d6292p-114f, 0.0f,
     0x1.693e38p-1f, 0x1.716b76p-126f, 0.0f, 0.0f, 0.0f, 0x1.fefe6ap-26f,
     0x1.d2266p-88f, 0.0f, 0.0f, 0.0f, 0x1.77477cp-64f, 0x1.ffac56p-77f, 0.0f,
     0x1.64621cp-121f, 0.0f, 0.0f, 0x1.bd6642p-9f, 0x1.54aefp-56f, 0x1.30df36p-107f,
     0x1.450baap-94f, 0x1.901be6p-8f, 0x1.64620ep-95f, 0.0f, 0x1.ff032ap-62f, 0.0f,
     0x1.882618p-78f, 0x1.89b226p-76f, 0x1.9fc95p-41f, 0.0f, 0x1.4c1b92p-71f,
     0x1.73f0d6p-83f, 0.0f, 0x1.8635dap-79f, 0x1.5ea2a2p-93f, 0x1.c01ca8p-54f,
     0x1.fdbf3ap-51f, 0x1.c50968p-101f, 0x1.bdabfap-75f, 0.0f, 0.0f, 0.0f,
     0x1.205172p-99f, 0x1.a5c4cep-90f, 0x1.ab9f98p-17f, 0x1.6f8e22p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4c5a2p-88f, 0x1.57238p-95f, 0x1.f982bp-78f,
     0x1.88514ap-77f, 0x1.31dfcap-14f, 0x1.817e5ep-120f, 0.0f, 0.0f, 0x1.15b066p-57f,
     0x1.0328d2p-64f, 0.0f, 0x1.8a2178p-70f, 0.0f, 0x1.27414ep-85f, 0x1.040c4cp-6f,
     0x1.d1bac6p-117f, 0x1.c78d94p-8f, 0x1.a0a7f4p-34f, 0.0f, 0.0f, 0.0f,
     0x1.8104ep-74f, 0x1.088704p-20f, 0x1.a7b158p-126f, 0.0f, 0.0f, 0x1.00da14p-34f,
     0x1.5c7baep-38f, 0x1.7e6e9ap-51f, 0.0f, 0x1.b27f32p-96f, 0x1.7fdf7p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ced11ap-33f, 0x1.524fd6p-80f, 0.0f, 0x1.421d14p-111f,
     0x1.a2558ap-33f, 0x1.9f56fcp-55f, 0x1.234afp-95f, 0x1.05c0fap-34f,
     0x1.8724bap-62f, 0x1.3bb9fep-12f, 0.0f, 0x1.e0cdeap-122f, 0.0f, 0x1.08c2cp-44f,
     0.0f, 0.0f, 0x1.e121bep-20f, 0x1.026d44p-108f, 0.0f, 0.0f, 0x1.bee55cp-73f,
     0x1.3ef0a4p-124f, 0x1.8cb9bep-16f, 0.0f, 0x1.270b32p-92f, 0x1.37d25p-122f,
     0x1.cbae1p-100f, 0.0f, 0x1.57391cp-41f, 0.0f, 0.0f, 0x1.b1d226p-125f,
     0x1.ff541p-85f, 0.0f, 0x1.ffea32p-32f, 0x1.8a1ccp-87f, 0x1.d1420cp-53f,
     0x1.f6409ap-32f, 0.0f, 0x1.7dc6p-89f, 0.0f, 0x1.f13e4ep-69f, 0x1.4c2c98p-31f,
     0x1.f6930cp-15f, 0x1.407cf6p-120f, 0.0f, 0x1.f7b542p-93f, 0.0f, 0.0f,
     0x1.ec1b1ep-72f, 0x1.3b5374p-26f, 0.0f, 0x1.0ccd2cp-119f, 0x1.bc2f3p-92f, 0.0f,
     0x1.2b5a2ep-9f, 0.0f, 0x1.f430ecp-81f, 0.0f, 0.0f, 0x1.4b28b4p-1f, 0.0f,
     0x1.308a0ap-24f, 0x1.d2586ep-13f, 0.0f, 0x1.d7e6a4p-113f, 0.0f, 0x1.6bffecp-32f,
     0x1.7365e4p-114f, 0.0f, 0.0f, 0x1.607076p-31f, 0.0f, 0x1.0dc356p-89f,
     0x1.3604a2p-71f, 0.0f, 0.0f, 0x1.315b9p-61f, 0.0f, 0x1.0bbf6cp-79f,
     0x1.e4f808p-93f, 0x1.654fp-5f, 0x1.f2a46cp-101f, 0x1.0636e2p-48f, 0.0f,
     0x1.e678bap-52f, 0.0f, 0.0f, 0x1.75337ep-62f, 0x1.e4657ep-74f, 0.0f
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
            tmp1 = tgammaf(tmp0);
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
    printf("tgammaf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("tgammaf bench acc %a\n", global_bench_acc);
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
