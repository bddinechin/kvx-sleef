/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_powf4_u10avx2128.c --function Sleef_powf4_u10avx2128 --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.6e65c6p-14f, 0x1.696392p-122f, 0.0f, 0.0f, 0x1.e50feap-22f, 0x1.4b0f66p-31f,
     0.0f, 0.0f, 0.0f, 0x1.55aee8p-83f, 0x1.e595b6p-97f, 0x1.2eaf8cp-105f,
     0x1.ac80dep-79f, 0.0f, 0.0f, 0x1.0c2126p-74f, 0x1.e9857p-27f, 0.0f,
     0x1.1bf6ap-68f, 0x1p0f, 0.0f, 0x1.28c6a6p-22f, 0.0f, 0x1.cd2decp-46f,
     0x1.39e542p-111f, 0.0f, 0.0f, 0.0f, 0x1.305b96p-96f, 0x1.12c85cp-28f, 0.0f, 0.0f,
     0.0f, 0x1.60646p-54f, 0x1.3a2582p-36f, 0.0f, 0.0f, 0x1.37c86ep-106f, 0.0f,
     0x1.f18fdap-3f, 0.0f, 0x1.888f56p-71f, 0.0f, 0.0f, 0.0f, 0x1.f1d81ap-9f, 0.0f,
     0.0f, 0x1.db4066p-48f, 0x1.83bf6cp-35f, 0x1.e50d84p-56f, 0x1.90a738p-108f,
     0x1.8d885ep-91f, 0x1.25debcp-35f, 0.0f, 0x1.c4de04p-65f, 0x1.b1f25ap-58f,
     0x1.ac5408p-111f, 0.0f, 0x1.a57a96p-47f, 0x1.350f2p-84f, 0x1.b5e194p-108f,
     0x1.ce514ep-35f, 0x1.ceb216p-94f, 0x1.c32528p-16f, 0x1.7d6564p-36f,
     0x1.7544ap-56f, 0x1.d4255cp-115f, 0.0f, 0.0f, 0x1.eccc92p-18f, 0x1.b68064p-87f,
     0.0f, 0.0f, 0x1.217708p-39f, 0x1.7a39c6p-115f, 0x1.ec286p-86f, 0x1.054686p-26f,
     0.0f, 0x1.b53c18p-18f, 0x1.64296p-2f, 0.0f, 0x1.302e34p-81f, 0x1.9a7acp-61f,
     0x1.baa502p-110f, 0.0f, 0.0f, 0x1.139dap-85f, 0.0f, 0x1.426e16p-63f,
     0x1.713f6cp-58f, 0x1.2535b2p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdf18ep-49f, 0x1.088184p-110f, 0x1.e99e68p-45f, 0x1.9a77ap-1f,
     0x1.712ff2p-93f, 0x1.508138p-99f, 0x1.7c551ap-12f, 0.0f, 0x1.59ab2p-103f,
     0x1.555062p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24a012p-6f, 0.0f, 0x1.c41c92p-65f,
     0x1.4033e2p-32f, 0x1.a1bb3p-83f, 0.0f, 0.0f, 0x1.94ec8ap-76f, 0.0f,
     0x1.6b75ccp-45f, 0x1.2d7a8p-97f, 0x1.b52708p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6eeeep-96f, 0.0f, 0x1.96518ep-99f, 0.0f, 0.0f, 0x1.8fb2f2p-65f,
     0x1.fe2d92p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.319152p-75f, 0x1.d89408p-5f, 0.0f,
     0.0f, 0.0f, 0x1.cdeac4p-84f, 0.0f, 0x1.73c202p-114f, 0x1.2fb136p-121f, 0.0f,
     0x1.98bfb8p-124f, 0.0f, 0x1.873ffp-4f, 0.0f, 0.0f, 0x1.79155cp-75f, 0.0f,
     0x1.5b46acp-106f, 0.0f, 0.0f, 0x1.fa3a2p-14f, 0.0f, 0x1.17f46ep-40f,
     0x1.736c2p-117f, 0.0f, 0x1.6cd514p-11f, 0.0f, 0.0f, 0x1.913ff4p-28f,
     0x1.a2fc14p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.21600ep-33f,
     0x1.402bccp-16f, 0x1.92bfc2p-51f, 0.0f, 0x1.1a16fep-64f, 0.0f, 0.0f,
     0x1.dbf158p-118f, 0.0f, 0x1.1b90ccp-31f, 0x1.4060ep-67f, 0x1.647d9p-105f,
     0x1.9b40d8p-27f, 0x1.292af8p-60f, 0x1.3df114p-88f, 0x1.ffdf9ep-28f, 0.0f,
     0x1.65b246p-8f, 0.0f, 0x1.13ebbep-102f, 0.0f, 0x1.89329ap-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.910ed8p-58f, 0.0f, 0.0f, 0.0f, 0x1.b1c868p-43f, 0.0f, 0x1.eb2238p-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5af8b8p-50f, 0.0f, 0.0f, 0x1.702bcep-78f,
     0x1.1b8f66p-118f, 0x1.9c3662p-16f, 0x1.6e0074p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.10ddcp-56f, 0x1.529d6cp-28f, 0.0f, 0.0f, 0.0f, 0x1.eecba8p-38f,
     0x1.6032e4p-66f, 0x1.d9fad8p-100f, 0x1.b7da3p-92f, 0x1.6aba3cp-124f, 0.0f,
     0x1.af6b84p-25f, 0.0f, 0x1.0fc97p-74f, 0x1.1a8154p-9f, 0x1.6ecb6ep-62f, 0.0f,
     0x1.01dd86p-101f, 0.0f, 0x1.62fb04p-22f, 0x1.a3776ap-75f, 0x1.82e71p-111f, 0.0f,
     0x1.d7c1c2p-126f, 0x1.760dd6p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab9d1p-30f,
     0x1.f858c6p-125f, 0.0f, 0x1.c846bp-86f, 0.0f, 0.0f, 0x1.2ce08cp-94f, 0.0f,
     0x1.72a152p-97f, 0x1.cae9c8p-85f, 0.0f, 0.0f, 0x1.283fbep-76f, 0.0f, 0.0f, 0.0f,
     0x1.7ab21p-54f, 0.0f, 0x1.126bb2p-37f, 0x1.969dp-24f, 0.0f, 0x1.f399b4p-12f,
     0x1.d4993ep-29f, 0.0f, 0x1.10eb2ep-54f, 0.0f, 0x1.e320d8p-92f, 0x1.78d95ap-54f,
     0.0f, 0.0f, 0x1.de0b16p-71f, 0.0f, 0.0f, 0.0f, 0x1.46f704p-104f, 0.0f, 0.0f,
     0.0f, 0x1.eb9d2p-85f, 0.0f, 0x1.1e992ap-28f, 0.0f, 0x1.527a2cp-111f, 0.0f, 0.0f,
     0x1.449e94p-60f, 0.0f, 0x1.e46dcep-124f, 0x1.3ab458p-98f, 0x1.238a0ep-37f, 0.0f,
     0.0f, 0.0f, 0x1.fa8f22p-37f, 0.0f, 0.0f, 0x1.2d55c2p-107f, 0.0f, 0.0f,
     0x1.dd4688p-23f, 0x1.9d9974p-70f, 0.0f, 0x1.d7662p-78f, 0x1.81b602p-53f,
     0x1.7f90ap-22f, 0x1.486c1cp-75f, 0x1.93cb2cp-32f, 0x1.c7b4cep-24f, 0.0f, 0.0f,
     0x1.4fb048p-22f, 0x1.a5da02p-119f, 0.0f, 0x1.b20b7ap-119f, 0x1.5bb33p-93f, 0.0f,
     0x1.090bacp-69f, 0.0f, 0.0f, 0x1.062edap-96f, 0.0f, 0x1.935a6ap-64f,
     0x1.647928p-116f, 0.0f, 0.0f, 0x1.af24b4p-65f, 0x1.ae9316p-24f, 0.0f,
     0x1.1cc618p-54f, 0.0f, 0.0f, 0x1.8931a8p-71f, 0x1.ec144ap-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d28e1cp-45f, 0.0f, 0x1.53ef9ep-112f, 0x1.809c18p-64f,
     0x1.d419eep-33f, 0.0f, 0x1.f043cap-78f, 0.0f, 0.0f, 0x1.72a782p-64f, 0.0f, 0.0f,
     0.0f, 0x1.2b272p-114f, 0.0f, 0.0f, 0.0f, 0x1.fda6b2p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04c496p-65f, 0x1.63e6fap-111f, 0.0f, 0.0f, 0x1.46728cp-91f, 0x1.88b50cp-107f,
     0x1.589c3ep-76f, 0.0f, 0x1.0e0d06p-40f, 0x1.d5e57cp-2f, 0x1.99f992p-36f,
     0x1.b45452p-64f, 0x1.e968e8p-10f, 0.0f, 0.0f, 0.0f, 0x1.76f2a8p-114f,
     0x1.b218ecp-59f, 0x1.5938fp-83f, 0x1.5025d6p-9f, 0x1.8474b4p-112f, 0.0f,
     0x1.fde0b4p-75f, 0x1.dff0dp-116f, 0x1.b6828cp-38f, 0.0f, 0x1.93f19p-31f, 0.0f,
     0x1.0f435p-120f, 0.0f, 0x1.29a5b6p-46f, 0x1.6633ap-126f, 0.0f, 0.0f,
     0x1.90a0e4p-98f, 0.0f, 0x1.4e0148p-68f, 0x1.7bd33p-51f, 0.0f, 0.0f,
     0x1.db31f2p-107f, 0.0f, 0x1.c5dd12p-124f, 0.0f, 0x1.573d4ep-109f,
     0x1.5de49ap-53f, 0.0f, 0.0f, 0x1.1c49cep-68f, 0.0f, 0x1.7f0912p-42f,
     0x1.148128p-100f, 0x1.8780fcp-43f, 0x1.de0526p-29f, 0.0f, 0x1.741afap-100f, 0.0f,
     0x1.8e69c8p-45f, 0x1.c0adb6p-52f, 0x1.0230f4p-6f, 0.0f, 0.0f, 0x1.76bb4cp-86f,
     0x1.06fb84p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de812ap-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4bb27cp-98f, 0x1.7e4e24p-17f, 0x1.2ca48ap-17f,
     0x1.415d48p-77f, 0x1.786d2cp-74f, 0.0f, 0.0f, 0.0f, 0x1.d70dacp-97f,
     0x1.93db28p-7f, 0.0f, 0.0f, 0x1.11eceep-59f, 0.0f, 0.0f, 0x1.540dc8p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.ac64fap-125f, 0x1.7589d2p-119f,
     0x1.ebdc02p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fdeb26p-53f, 0x1.fb03a2p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2aa36p-80f,
     0x1.a6fcfp-2f, 0x1.0822bp-19f, 0x1.c0aa22p-17f, 0.0f, 0x1.e0993ap-81f, 0.0f,
     0x1.ab7816p-122f, 0.0f, 0x1.0fea14p-36f, 0x1.6a5246p-45f, 0x1.3fab72p-79f,
     0x1.493424p-21f, 0.0f, 0.0f, 0x1.5f9522p-90f, 0.0f, 0x1.2621acp-78f,
     0x1.97f76cp-88f, 0.0f, 0x1.2905b8p-28f, 0.0f, 0x1.454f58p-99f, 0x1p0f,
     0x1.68ed5ap-34f, 0.0f, 0x1.a3404cp-55f, 0.0f, 0.0f, 0x1.49f764p-123f,
     0x1.9170dcp-36f, 0x1.3d0ad8p-77f, 0.0f, 0x1.71a1eep-71f, 0.0f, 0x1.079b52p-122f,
     0x1.9b4fa4p-29f, 0x1.d1745cp-81f, 0x1.d7bd98p-107f, 0x1.8368a4p-117f,
     0x1.516eep-23f, 0x1.67d87ap-111f, 0.0f, 0.0f, 0x1.e0393p-106f, 0.0f,
     0x1.18b144p-82f, 0.0f, 0x1.7fae8p-63f, 0x1.ab5156p-31f, 0.0f, 0x1.2b0d84p-75f,
     0x1.4ccff2p-11f, 0x1.196e94p-31f, 0x1.15b9c6p-109f, 0x1.c93a4cp-37f,
     0x1.059186p-105f, 0.0f, 0x1.9bb93ep-24f, 0.0f, 0x1.0453f4p-27f, 0x1.c4fb18p-28f,
     0x1.c08b2ap-36f, 0x1.137d6ap-108f, 0.0f, 0x1.6c2352p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.416c4cp-71f, 0.0f, 0.0f, 0x1.be71a6p-30f, 0x1.6ee2cap-118f, 0.0f, 0.0f,
     0.0f, 0x1.b2f452p-5f, 0.0f, 0.0f, 0x1.78f0c4p-12f, 0.0f, 0x1.e8ea4p-51f,
     0x1.cbf94p-85f, 0x1.252da6p-60f, 0x1.486306p-73f, 0.0f, 0x1.8a7064p-8f,
     0x1.52aacap-46f, 0.0f, 0x1.559df4p-69f, 0.0f, 0.0f, 0x1.f5de6cp-110f, 0.0f,
     0x1.e021fap-24f, 0.0f, 0.0f, 0x1.bd531p-106f, 0x1.ba38dap-111f, 0x1.c1e0d2p-114f,
     0x1.bdd41p-52f, 0.0f, 0x1.5f21f4p-45f, 0x1.8b3bc8p-95f, 0.0f, 0x1.15879cp-92f,
     0.0f, 0x1.678682p-125f, 0x1.11333p-40f, 0.0f, 0.0f, 0x1.cbf15cp-96f,
     0x1.fc0ccep-10f, 0x1.5fc194p-9f, 0x1.4d1c72p-122f, 0x1.54eb0cp-90f, 0.0f,
     0x1.f3e1ep-78f, 0x1.61907cp-27f, 0x1.ed9f5p-10f, 0x1.2c6b86p-31f, 0.0f, 0.0f,
     0x1.a11d7cp-20f, 0.0f, 0x1p0f, 0.0f, 0x1.07365cp-97f, 0x1.fe8c6p-10f,
     0x1.22bf9cp-49f, 0x1.46844ap-116f, 0x1.710c8cp-72f, 0.0f, 0.0f, 0x1.d31f6ep-74f,
     0x1.34af08p-80f, 0.0f, 0.0f, 0x1.be5ae8p-78f, 0.0f, 0x1.d43236p-111f,
     0x1.714ab2p-35f, 0x1.fe015ap-99f, 0.0f, 0.0f, 0x1.89dddcp-45f, 0.0f, 0.0f, 0.0f,
     0x1.ff0b88p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b2182p-1f, 0x1.5bd27ep-115f,
     0.0f, 0x1.6ac41cp-63f, 0.0f, 0x1.70bd06p-32f, 0.0f, 0x1.471358p-26f, 0.0f, 0.0f,
     0x1.6c6e38p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ffd37ep-67f, 0x1.44530cp-106f,
     0x1.6b9418p-42f, 0x1.776ddep-111f, 0x1.bb2cdcp-121f, 0x1.a4dde8p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b964ep-31f, 0x1.6c3118p-84f, 0x1.230256p-84f, 0x1.815006p-123f,
     0x1.9d6f78p-76f, 0x1.4f784ep-53f, 0.0f, 0.0f, 0.0f, 0x1.0b5682p-52f, 0.0f,
     0x1.ee74b4p-93f, 0.0f, 0.0f, 0.0f, 0x1.95fb02p-98f, 0.0f, 0.0f, 0x1.efb122p-41f,
     0x1.e9d9a4p-123f, 0x1.97d13p-101f, 0x1.3525a4p-28f, 0x1.87b1d2p-39f, 0.0f,
     0x1.65e952p-84f, 0x1.d182dep-104f, 0.0f, 0x1.500d8ep-86f, 0x1.5a75fep-22f, 0.0f,
     0.0f, 0x1.144502p-5f, 0x1.0ca5p-101f, 0x1.0893bap-104f, 0x1.b72622p-47f, 0.0f,
     0x1.996206p-72f, 0x1.a0ce6cp-83f, 0x1.71d38cp-114f, 0x1.248886p-46f, 0.0f, 0.0f,
     0.0f, 0x1.805618p-63f, 0x1.e37ecap-80f, 0.0f, 0x1.e7e76p-48f, 0x1.43e3d6p-70f,
     0.0f, 0x1.61f96cp-69f, 0x1.6c75e2p-82f, 0.0f, 0x1.6d1ccp-33f, 0.0f, 0.0f,
     0x1.78dc6p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b49842p-12f, 0x1.35e98ap-60f,
     0x1.804644p-24f, 0.0f, 0x1.1c47fcp-125f, 0.0f, 0x1.ba57eep-105f, 0x1.aa31e2p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.52df9ep-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb387ap-101f, 0.0f, 0x1.590842p-15f, 0.0f, 0.0f, 0x1.37dd66p-23f,
     0x1.ee1312p-14f, 0.0f, 0x1.6671e6p-71f, 0.0f, 0x1.15a35p-11f, 0x1.64e9bcp-12f,
     0.0f, 0x1.4cf062p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24066ep-71f, 0x1.3d23b4p-88f, 0x1.42279ep-10f, 0.0f, 0.0f, 0x1.34923ep-98f,
     0x1.e709acp-56f, 0x1.a7bbaap-57f, 0x1.d762f8p-66f, 0x1.346242p-96f,
     0x1.fce7acp-125f, 0.0f, 0.0f, 0.0f, 0x1.9f376ap-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d42fdp-48f, 0.0f, 0x1.64604ep-57f, 0.0f, 0x1.8b43b6p-102f, 0.0f,
     0x1.ccd3a2p-44f, 0x1.6ffc74p-93f, 0x1.50463cp-49f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b5dfcp-27f, 0.0f, 0.0f, 0x1.2f6ceap-114f, 0.0f, 0x1.15b8cp-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8bdcp-58f, 0.0f, 0x1.42a488p-19f, 0x1.c9ebcp-124f,
     0.0f, 0x1.66977p-22f, 0.0f, 0.0f, 0x1.df90b2p-108f, 0.0f, 0.0f, 0x1.7bd2d8p-18f,
     0.0f, 0x1.33b0cap-57f, 0.0f, 0x1.9d271ep-122f, 0x1.bed4b6p-63f, 0.0f, 0.0f,
     0x1.64e7d2p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd1c82p-112f, 0x1.7fee04p-69f, 0.0f,
     0x1.5711dap-9f, 0.0f, 0x1.b8f12cp-67f, 0.0f, 0.0f, 0x1.c7bad6p-101f,
     0x1.f3254cp-103f, 0.0f, 0.0f, 0x1.4d776ep-41f, 0.0f, 0.0f, 0x1.416804p-17f,
     0x1.2e3362p-57f, 0.0f, 0x1.9458ccp-67f, 0x1.97ccbp-73f, 0.0f, 0.0f,
     0x1.6f8e9ap-93f, 0x1.adb59ap-37f, 0x1.f54cp-125f, 0x1.4990e8p-36f, 0.0f, 0.0f,
     0.0f, 0x1.657c7ap-6f, 0x1.3bc38p-56f, 0.0f, 0x1.f86b0cp-24f, 0x1.2e35bcp-6f,
     0.0f, 0.0f, 0x1.028acp-92f, 0.0f, 0x1.131b26p-109f, 0x1.b93aaap-68f, 0.0f, 0.0f,
     0x1.2236eap-115f, 0.0f, 0.0f, 0x1.1cb83p-40f, 0.0f, 0x1.818818p-93f, 0.0f,
     0x1.97987p-124f, 0.0f, 0x1.9cd582p-91f, 0x1.47aa62p-24f, 0x1.d28f46p-51f, 0.0f,
     0x1.43a8acp-91f, 0x1.b1af2ap-109f, 0x1.9c275p-60f, 0x1.8a02dap-35f,
     0x1.73c6eep-64f, 0x1.8772cp-8f, 0.0f, 0.0f, 0.0f, 0x1.9c79f6p-90f,
     0x1.cc23eep-60f, 0x1.83701p-45f, 0x1.74272p-92f, 0.0f, 0.0f, 0x1.250c64p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e05c5ap-85f, 0.0f, 0x1.d07fa4p-48f, 0.0f,
     0x1.e6c016p-89f, 0x1.d10b0ap-69f, 0x1.be5582p-9f, 0x1.6ef4cep-73f,
     0x1.e9422cp-82f, 0.0f, 0x1.df50c2p-111f, 0.0f, 0x1.961908p-70f, 0x1.8ee26ap-71f,
     0.0f, 0x1.13a838p-45f, 0.0f, 0x1.6b8c14p-116f, 0.0f, 0.0f, 0x1.1ebe86p-92f,
     0x1.c2497cp-53f, 0x1.76328cp-106f, 0x1.4d5fa8p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58c6eep-29f, 0x1.6fe7bp-42f, 0.0f, 0.0f, 0.0f, 0x1.7b4416p-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c93c7ap-79f, 0x1.afdc58p-26f, 0x1p0f, 0x1.f5c342p-60f,
     0.0f, 0.0f, 0.0f, 0x1.65907ap-120f, 0x1.878344p-57f, 0x1.6f4184p-65f,
     0x1.3fd4a4p-112f, 0.0f, 0.0f, 0.0f, 0x1.57b72ap-88f, 0x1.89ec2p-5f, 0.0f,
     0x1.1b75f8p-107f, 0x1.37cb2ap-72f, 0x1.932b38p-59f, 0.0f, 0.0f, 0x1.1c9d8ep-69f,
     0x1.7cfa12p-12f, 0.0f, 0x1.2b639p-42f, 0.0f, 0x1.192e8p-48f, 0x1.86019cp-98f,
     0.0f, 0x1.dbd8bcp-42f, 0x1.b2a782p-28f, 0.0f, 0.0f, 0.0f, 0x1.f92dcep-116f,
     0x1.c2cf3p-69f, 0x1.9a0b2ep-117f, 0.0f, 0x1.bfdc6cp-124f, 0x1.15d238p-110f,
     0x1.4360d6p-100f, 0.0f, 0.0f, 0.0f, 0x1.905406p-99f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.92735cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a6afap-28f, 0.0f,
     0x1.2a567cp-39f, 0x1.3bbbbep-48f, 0.0f, 0x1.1da166p-92f, 0x1.e253cap-8f,
     0x1.465c7p-46f, 0.0f, 0x1.9996ap-76f, 0.0f, 0.0f, 0.0f, 0x1.0d3f72p-92f, 0.0f,
     0x1.6fc2eep-98f, 0.0f, 0.0f, 0x1.332e5ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.908702p-35f, 0x1.9c43eap-75f, 0x1.d1d5b4p-88f, 0x1.223b22p-98f,
     0x1.89efa4p-97f, 0.0f, 0x1.815e16p-100f, 0.0f, 0.0f, 0.0f, 0x1.6ce55cp-30f,
     0x1.91034cp-70f, 0.0f, 0x1.c57734p-49f, 0.0f, 0x1.0e609p-85f, 0x1.2e2138p-101f,
     0x1.c45e5ep-119f, 0.0f, 0.0f, 0x1.83312ep-111f, 0x1.80e9ap-52f, 0x1.55e9fep-125f,
     0.0f, 0.0f, 0.0f, 0x1.657e8ep-53f, 0.0f, 0x1.907bf4p-72f, 0x1.8a94f6p-89f,
     0x1.0f5a58p-97f, 0.0f, 0x1.fd3262p-92f, 0.0f, 0x1.d8e718p-26f, 0x1.b9fc18p-40f,
     0x1.dfbccp-113f, 0.0f, 0.0f, 0.0f, 0x1.a7bedap-57f, 0.0f, 0x1.a41e5p-81f, 0.0f,
     0.0f, 0x1.929eaap-109f, 0.0f, 0.0f, 0x1.7f54ep-106f, 0x1.b84978p-97f,
     0x1.163a5ep-7f, 0x1.87735ap-107f, 0.0f, 0x1.23c04ap-113f, 0x1p0f,
     0x1.e8921ap-35f, 0x1.111deap-47f, 0.0f, 0x1.a66846p-52f, 0x1.2b7384p-27f,
     0x1.10b1eep-59f, 0.0f, 0.0f, 0.0f, 0x1.6cb438p-115f, 0.0f, 0.0f, 0x1.2b506p-110f,
     0.0f, 0.0f, 0.0f, 0x1.52d60cp-82f, 0.0f, 0x1.ac6e0cp-74f, 0.0f, 0.0f, 0.0f,
     0x1.26799p-54f, 0.0f, 0x1.53c118p-71f, 0x1.a2f9fap-97f, 0x1.9975bap-98f,
     0x1.eba532p-32f, 0.0f, 0x1.e4143ap-114f, 0x1.3579ep-114f, 0x1.99c64ap-36f,
     0x1.87c324p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee9dbep-90f, 0.0f, 0x1.91c9eap-23f,
     0.0f, 0x1.1739fep-39f, 0x1.6928bep-88f, 0x1.46da8p-92f, 0x1.713f6ap-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0462ap-69f, 0.0f, 0.0f, 0x1.aa66ep-115f,
     0x1.da6d5cp-15f, 0x1.1ce45cp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e555p-6f,
     0x1.73fc7ep-13f, 0x1.ee2552p-11f, 0x1.8416aep-32f, 0.0f, 0.0f, 0x1.95c3b6p-81f,
     0x1.9a773p-121f, 0.0f, 0.0f, 0x1.d7c5aap-11f, 0.0f, 0x1.67231cp-101f, 0.0f, 0.0f,
     0x1.2753e4p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b2a7ep-101f, 0.0f, 0x1.df7ap-47f,
     0x1.3d3eb2p-13f, 0x1.c450ccp-79f, 0.0f, 0.0f, 0x1.ce2b08p-27f, 0x1.49e36p-67f,
     0.0f, 0.0f, 0.0f, 0x1.b7e184p-89f, 0.0f, 0x1.19459cp-86f, 0.0f, 0x1.5b64b6p-101f,
     0x1.aa0284p-118f, 0.0f, 0.0f, 0.0f, 0x1.5a97acp-82f, 0x1.ebb6a6p-50f,
     0x1.d3164p-98f, 0x1.0ede4ep-120f, 0x1.c3c834p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20c5e8p-44f, 0.0f, 0.0f, 0.0f, 0x1.58f304p-65f, 0.0f, 0x1.2f526ep-37f, 0.0f,
     0x1.6ab70ap-112f, 0x1.792608p-52f, 0x1.5e502ep-4f, 0.0f, 0x1.d602d8p-90f, 0.0f,
     0x1.37c5c8p-14f, 0x1.de52p-54f, 0x1.a23214p-33f, 0x1.66e68p-67f, 0x1.8ecb8p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f5754p-75f, 0.0f, 0x1.5bf65ep-4f, 0x1.c7c3dep-1f,
     0x1.5236eep-9f, 0.0f, 0.0f, 0x1.9fceb2p-37f, 0.0f, 0.0f, 0x1.e5e05cp-34f,
     0x1.c35db8p-72f, 0x1p0f, 0.0f, 0x1.a086dcp-21f, 0.0f, 0x1.ec5e4cp-57f, 0.0f,
     0x1.60decp-120f, 0.0f, 0x1.bb3d68p-2f, 0x1.3f75d4p-22f, 0.0f, 0.0f,
     0x1.65999ep-20f, 0.0f, 0x1.43291ep-70f, 0x1.d79f56p-108f, 0x1.54866p-122f, 0.0f,
     0x1.ee62c2p-104f, 0.0f, 0x1.223b6ep-4f, 0.0f, 0x1.e013eap-89f, 0x1.49a36cp-54f,
     0x1.b3724ap-83f, 0.0f, 0x1.d39636p-45f, 0.0f, 0x1.54f692p-34f, 0x1.4c443p-24f,
     0.0f, 0x1.6f04a2p-3f, 0.0f, 0x1.ad2872p-105f, 0.0f, 0x1.1df21cp-66f,
     0x1.a7b0b4p-78f, 0x1.4c2dp-123f, 0.0f, 0x1.13daf4p-92f, 0.0f, 0x1.429f6p-48f,
     0x1.d0975cp-53f, 0.0f, 0.0f, 0.0f, 0x1.d0babap-60f, 0x1.0f349ep-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bbb68p-68f, 0x1.04c8b2p-88f, 0.0f, 0.0f,
     0x1.887632p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.134598p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.40060ap-35f, 0.0f, 0x1.77e678p-124f, 0.0f, 0.0f, 0x1.2c5bcep-91f,
     0x1.d2ea9ep-63f, 0.0f, 0x1.cb7cap-34f, 0x1.4c8f12p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f41792p-125f, 0.0f, 0x1.f466b8p-13f, 0x1.cb0eep-114f, 0x1.650628p-55f,
     0x1.a83dcap-31f, 0.0f, 0.0f, 0x1.6e80b2p-47f, 0x1.3820bcp-42f, 0.0f,
     0x1.9f6702p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cd4fep-44f, 0.0f,
     0x1.75f41ap-47f, 0x1.ac5a8ep-99f, 0.0f, 0x1.fa17a6p-8f, 0.0f, 0x1.961e5cp-36f,
     0.0f, 0.0f, 0x1.21706ep-74f, 0x1.3bd0dap-84f, 0.0f, 0.0f, 0x1.0beda6p-62f, 0.0f,
     0.0f, 0x1.1d1ea2p-31f, 0.0f, 0.0f, 0x1.2f5974p-112f, 0x1.a97264p-112f,
     0x1.171bcep-100f, 0.0f, 0x1.dc9374p-19f, 0.0f, 0.0f, 0x1.127eecp-19f, 0.0f,
     0x1.14f226p-63f, 0x1.0567c6p-94f, 0.0f, 0x1.006776p-62f, 0x1.fab82cp-23f,
     0x1.60ef6p-26f, 0x1.25b504p-22f, 0x1.6242c8p-60f, 0x1.c0cbbep-13f, 0.0f, 0.0f,
     0.0f, 0x1.c39d1ep-94f, 0.0f, 0x1.66e99ep-38f, 0.0f, 0x1.311f88p-82f,
     0x1.6cc6bp-8f, 0x1.db9c8cp-74f, 0.0f, 0x1.ec1c0ep-72f, 0x1.9963aap-57f, 0.0f,
     0x1.211f72p-32f, 0x1.d7a5f6p-25f, 0x1.522bf2p-40f, 0.0f, 0.0f, 0x1.068222p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d500cp-88f, 0.0f, 0x1.7d4616p-99f,
     0x1.fc34b8p-4f, 0.0f, 0.0f, 0.0f, 0x1.896602p-61f, 0.0f, 0.0f, 0x1.592fc8p-61f,
     0.0f, 0x1.8f0492p-67f, 0.0f, 0.0f, 0x1.82abfcp-1f, 0x1.ed8106p-9f, 0.0f,
     0x1.9f2fbap-95f, 0x1.046f2p-25f, 0x1.7c3eeep-88f, 0x1.309b86p-116f,
     0x1.b4ebfap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7d3b6p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b6212p-15f, 0.0f, 0.0f, 0x1.84645p-115f, 0.0f, 0.0f, 0x1.b66e26p-120f,
     0.0f, 0.0f, 0x1.abd22ap-8f, 0x1.120564p-69f, 0x1.62bad4p-86f, 0x1.5a4bb8p-69f,
     0x1.70afeep-1f, 0.0f, 0x1.1ee20ep-44f, 0.0f, 0x1.1ece7ep-26f, 0x1.e15f7cp-14f,
     0x1.e4ba84p-72f, 0.0f, 0x1.3032fep-40f, 0x1.81620ep-60f, 0.0f, 0x1.564472p-72f,
     0x1.2757a2p-108f, 0.0f, 0.0f, 0.0f, 0x1.85190ep-19f, 0.0f, 0.0f,
     0x1.f3fffap-109f, 0x1.9c68dp-85f, 0.0f, 0x1.c87eaap-103f, 0.0f, 0x1.04fdf2p-3f,
     0x1.7c83b6p-24f, 0x1.2ed324p-74f, 0x1.9c5142p-49f, 0.0f, 0x1.693878p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f02bcp-20f, 0.0f, 0x1.1db126p-33f, 0x1.91631ep-83f,
     0.0f, 0x1.9074p-84f, 0x1.80de18p-93f, 0.0f, 0x1.eea076p-44f, 0x1.44293ep-16f,
     0.0f, 0.0f, 0x1.eb2d8ep-110f, 0.0f, 0.0f, 0x1.ebff64p-76f, 0x1.bbf126p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eef032p-25f, 0x1.020e24p-66f, 0x1.e99892p-116f,
     0x1.8cf95p-33f, 0x1.1cbf4ep-53f, 0x1.a01652p-11f, 0x1.c380f4p-34f, 0.0f,
     0x1.a7656ep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10794ep-2f, 0.0f,
     0x1.bc1dfcp-117f, 0x1.6a036ep-116f, 0x1.d99ceap-18f, 0x1.50eb2p-57f,
     0x1.a11174p-84f, 0x1.8125ecp-29f, 0.0f, 0x1.42525ep-38f, 0x1.2d8eb8p-67f,
     0x1.606276p-99f, 0.0f, 0.0f, 0x1.61045ep-34f, 0.0f, 0x1.990398p-50f,
     0x1.d19572p-27f, 0x1.26a93ap-75f, 0x1.02adc4p-55f, 0x1.a1c04p-51f, 0.0f, 0.0f,
     0.0f, 0x1.67bfd8p-8f, 0.0f, 0x1.65fcb4p-27f, 0x1.4499e8p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.783406p-38f, 0x1.722058p-109f, 0x1.469332p-75f, 0.0f,
     0x1.ffd35p-67f, 0.0f, 0x1.91b51ep-3f, 0.0f, 0x1.2c46e4p-99f, 0x1.38ab2p-19f,
     0.0f, 0x1.018878p-65f, 0.0f, 0.0f, 0.0f, 0x1.307b36p-6f, 0.0f, 0x1.19507ep-42f,
     0.0f, 0x1.2a631ap-76f, 0.0f, 0x1.8bb14ap-7f, 0x1.0a4742p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.32b0bep-25f, 0x1.d5d17cp-7f, 0.0f, 0x1.8bb762p-19f,
     0.0f, 0x1.ed49fp-120f, 0.0f, 0x1.f022dp-110f, 0.0f, 0.0f, 0x1.526072p-78f, 0.0f,
     0x1.d0088ap-53f, 0.0f, 0x1.05a642p-62f, 0.0f, 0.0f, 0x1.b803e4p-109f, 0.0f,
     0x1.318ef2p-126f, 0.0f, 0x1.c2ede6p-56f, 0x1.fcb3b2p-109f, 0x1.7c7f66p-54f,
     0x1.4c820cp-21f, 0x1.186d5cp-102f, 0x1.9991ccp-87f, 0x1.d16ad2p-41f, 0.0f,
     0x1.f7670ap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33273cp-45f, 0.0f,
     0.0f, 0x1.ecfdp-56f, 0x1.c75b16p-20f, 0x1.8a81ep-111f, 0.0f, 0.0f, 0.0f,
     0x1.bfd948p-13f, 0.0f, 0.0f, 0.0f, 0x1.7103f6p-32f, 0x1.6f3092p-51f, 0.0f,
     0x1.06afb8p-50f, 0.0f, 0x1.243306p-35f, 0x1.272132p-115f, 0.0f, 0.0f, 0.0f,
     0x1.e2c202p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40d52ep-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cfacp-1f, 0.0f, 0.0f, 0x1.bf2beap-125f, 0.0f,
     0x1.ceaaeap-50f, 0x1.b6fdf8p-22f, 0x1.41d4c8p-18f, 0x1.ed3f76p-17f, 0.0f, 0.0f,
     0x1.72c306p-39f, 0x1.e845f8p-6f, 0.0f, 0.0f, 0.0f, 0x1.cddca4p-83f,
     0x1.f7f9aep-104f, 0.0f, 0x1.2f038cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c6c14p-77f, 0x1.fa588ap-110f, 0.0f, 0x1.73d3aep-18f, 0x1.2e9eaap-81f, 0.0f,
     0x1.8659e2p-75f, 0x1.7a6526p-112f, 0x1.0f7ce4p-80f, 0.0f, 0.0f, 0x1.d26be2p-68f,
     0.0f, 0.0f, 0.0f, 0x1.abececp-8f, 0.0f, 0x1.e95494p-73f, 0x1.9422fep-44f,
     0x1.dcc65cp-83f, 0x1.6fb5e4p-107f, 0x1.aeafb2p-53f, 0.0f, 0.0f, 0.0f,
     0x1.0a56aap-71f, 0.0f, 0x1.832048p-24f, 0.0f, 0.0f, 0x1.926d24p-108f, 0.0f,
     0x1.6512e8p-126f, 0x1.7c43b4p-13f, 0x1.1639f2p-105f, 0x1.c74fb6p-64f,
     0x1.6efaa2p-10f, 0.0f, 0x1.444642p-8f, 0x1.7cd6c8p-88f, 0x1.e74072p-85f,
     0x1.50b0aep-32f, 0.0f, 0x1.bd6f3ap-123f, 0.0f, 0x1.ff83cp-39f, 0x1.cb4a6cp-25f,
     0x1.0bfbccp-83f, 0x1.58518p-124f, 0.0f, 0.0f, 0x1.9c66e4p-8f, 0.0f,
     0x1.14c524p-99f, 0x1.f1a97ep-30f, 0x1.3ebe7ep-87f, 0x1.10f168p-3f, 0.0f,
     0x1.306fd2p-125f, 0x1.a9c37p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.872d44p-31f,
     0x1.c5ce2p-31f, 0.0f, 0.0f, 0x1.c9d324p-98f, 0.0f, 0x1.18623ap-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.38d43p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df8c56p-92f,
     0x1.11478ap-83f, 0x1.057164p-4f, 0.0f, 0x1.55b51p-34f, 0.0f, 0x1.9c4624p-84f,
     0x1.30e48ep-100f, 0x1.e6ff32p-69f, 0x1.ef78aap-15f, 0x1.ed495p-33f, 0.0f, 0.0f,
     0x1.cf73cep-10f, 0x1.5672eep-96f, 0.0f, 0.0f, 0x1.663fe8p-4f, 0.0f, 0.0f,
     0x1.d7d4b4p-92f, 0.0f, 0x1.bbd85cp-81f, 0.0f, 0.0f, 0.0f, 0x1.0ba426p-8f, 0.0f,
     0x1.88ac06p-118f, 0x1.ee0136p-63f, 0x1.39d97cp-60f, 0x1.1273f4p-69f, 0.0f,
     0x1.a0f0a4p-37f, 0x1.ed4bd2p-99f, 0x1.c71d74p-125f, 0x1.85b6f8p-51f, 0.0f, 0.0f,
     0.0f, 0x1.636a36p-58f, 0.0f, 0x1.82d148p-14f, 0x1.a0201cp-52f, 0.0f,
     0x1.d96cfp-14f, 0x1.72b796p-117f, 0.0f, 0x1.a0f7dep-81f, 0.0f, 0.0f,
     0x1.97d626p-64f, 0.0f, 0.0f, 0x1.793c3ap-25f, 0x1.5ad2bap-65f, 0x1.abed9ep-126f,
     0.0f, 0.0f, 0x1.0db5f8p-15f, 0.0f, 0.0f, 0x1.54732cp-53f, 0.0f, 0x1.772ca2p-119f,
     0.0f, 0x1.c8ffbp-16f, 0x1.dd7b7p-87f, 0x1.9dcd74p-31f, 0x1.6b6be2p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0c2fep-48f, 0x1.80b8f4p-53f, 0x1.140f6ep-58f,
     0x1.a13a76p-76f, 0.0f, 0.0f, 0x1.c2a95ep-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fb5804p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00c0dep-3f, 0.0f, 0.0f,
     0.0f, 0x1.b05e5p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.830722p-97f, 0.0f,
     0x1.4990fp-102f, 0.0f, 0.0f, 0x1.c76e28p-57f, 0.0f, 0.0f, 0x1.e370a4p-66f, 0.0f,
     0x1.339b96p-24f, 0.0f, 0.0f, 0.0f, 0x1.297ce4p-25f, 0x1.05fb24p-83f,
     0x1.cf0034p-6f, 0x1.c87204p-106f, 0.0f, 0x1.1ee3d4p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e89baep-93f, 0x1.f08f1p-115f, 0.0f, 0.0f, 0x1.97a592p-75f, 0.0f,
     0x1.8c32bp-60f, 0.0f, 0x1.1e0d84p-110f, 0.0f, 0x1.9e2a3ep-92f, 0x1.63b7ap-103f,
     0x1.5d21a8p-75f, 0.0f, 0x1.45bf6ap-101f, 0x1.8c2c94p-15f, 0x1.f893dp-26f, 0.0f,
     0.0f, 0x1.bf097cp-85f, 0.0f, 0x1.9f972ep-81f, 0.0f, 0x1.6c9ed2p-97f, 0.0f,
     0x1.6bf466p-76f, 0.0f, 0.0f, 0.0f, 0x1.7039fp-119f, 0x1.1c3eb8p-13f,
     0x1.ccfb4cp-41f, 0x1.2a6bfap-7f, 0x1.454ca4p-83f, 0x1.fd40ccp-49f,
     0x1.68d3c8p-63f, 0x1.b02244p-15f, 0.0f, 0x1.2b4874p-88f, 0.0f, 0.0f,
     0x1.579398p-56f, 0.0f, 0x1.2c517cp-47f, 0.0f, 0x1.28b566p-109f, 0x1.5eb5bap-99f,
     0.0f, 0.0f, 0x1.83ee1ap-98f, 0.0f, 0.0f, 0.0f, 0x1.e44f7ep-90f, 0.0f,
     0x1.6ecd56p-99f, 0x1.2464bp-79f, 0.0f, 0.0f, 0.0f, 0x1.5a0f1p-27f,
     0x1.fc3c34p-49f, 0.0f, 0x1.0211b4p-24f, 0.0f, 0x1.996ap-113f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.adeb16p-114f, 0x1.5129ep-17f, 0x1.1853fap-50f,
     0.0f, 0.0f, 0x1.7f9d82p-37f, 0.0f, 0x1.137012p-99f, 0x1.794e4cp-69f, 0.0f,
     0x1.e84b7p-6f, 0x1.b76da4p-52f, 0x1.992698p-46f, 0x1.3ba796p-30f, 0.0f,
     0x1.12e08ap-106f, 0x1.1f2678p-63f, 0x1.2edc96p-35f, 0.0f, 0x1.1c9afap-36f, 0.0f,
     0x1.3fd4c6p-104f, 0x1.d432dap-70f, 0.0f, 0.0f, 0.0f, 0x1.e41dd6p-3f,
     0x1.5c7732p-106f, 0x1.cf2a3cp-17f, 0.0f, 0.0f, 0.0f, 0x1.bbc88ep-122f,
     0x1.006a06p-73f, 0x1.2db6a2p-73f, 0x1.520e4p-64f, 0x1.7e2beep-96f,
     0x1.3ba5dcp-25f, 0x1p0f, 0.0f, 0.0f
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
            tmp2 = Sleef_powf4_u10avx2128(tmp0, tmp1);
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
    printf("Sleef_powf4_u10avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_powf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
