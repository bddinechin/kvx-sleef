/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf1_u10purecfma.c --function \
 *     Sleef_sinhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.f67afp-112f, 0x1.db772p-113f, 0x1.a29714p-123f, 0x1.26b3b8p-21f, 0.0f,
     0.0f, 0x1.23173ap-20f, 0x1.fef148p-81f, 0.0f, 0.0f, 0x1.c29c4ep-77f,
     0x1.ece3b6p-24f, 0.0f, 0.0f, 0x1.3a05ep-71f, 0.0f, 0.0f, 0x1.c84d3ap-105f, 0.0f,
     0x1.4bdfb2p-5f, 0x1.194238p-32f, 0x1.36c196p-23f, 0.0f, 0.0f, 0x1.3b3d0ep-39f,
     0x1.b0921cp-78f, 0x1.13ba08p-107f, 0x1.09489cp-122f, 0x1.dc96f2p-71f,
     0x1.ae2f0ep-72f, 0x1.601782p-17f, 0x1.c5006ep-97f, 0x1.d6bfeap-51f,
     0x1.c673ap-4f, 0x1.ce4abap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0baa66p-35f,
     0x1.e3721ep-89f, 0x1.04adb8p-34f, 0.0f, 0x1.14a412p-98f, 0.0f, 0x1.0bba3p-12f,
     0x1.1dff06p-14f, 0x1.4709dep-83f, 0.0f, 0.0f, 0x1.98fc68p-114f, 0.0f, 0.0f, 0.0f,
     0x1.dd64bcp-56f, 0.0f, 0x1.5cd5a8p-59f, 0.0f, 0.0f, 0x1.96c9dap-51f,
     0x1.3a675ep-48f, 0x1.5ceabp-59f, 0x1.4f7324p-109f, 0x1.78e208p-101f, 0.0f, 0.0f,
     0.0f, 0x1.69951ap-10f, 0.0f, 0x1.c0cfd8p-51f, 0x1.2eb504p-9f, 0.0f,
     0x1.5d301ap-39f, 0.0f, 0x1.b116dep-56f, 0x1.3c816ap-43f, 0x1.7ea1ecp-100f, 0.0f,
     0.0f, 0x1.fac724p-126f, 0x1.034e22p-9f, 0x1.ad268cp-43f, 0x1.7df85p-121f,
     0x1.dbd4cep-2f, 0.0f, 0x1.7cf986p-1f, 0x1.ffb686p-36f, 0.0f, 0x1.5990b2p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79b28ap-74f, 0.0f, 0.0f, 0.0f,
     0x1.5fd58cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39b432p-40f, 0x1.b1403ep-4f,
     0x1.e1fd08p-98f, 0.0f, 0.0f, 0x1.24b8eep-69f, 0x1.5f3b94p-106f, 0.0f, 0.0f, 0.0f,
     0x1.648d7ap-5f, 0x1.4b6512p-43f, 0.0f, 0.0f, 0.0f, 0x1.1faacp-76f, 0.0f,
     0x1.50e198p-77f, 0.0f, 0x1.3e70fp-69f, 0.0f, 0x1.2974b2p-82f, 0x1.80a4f2p-87f,
     0x1.007ccap-47f, 0.0f, 0.0f, 0.0f, 0x1.3b9c56p-74f, 0x1.46dda6p-53f, 0.0f, 0.0f,
     0.0f, 0x1.0b3604p-109f, 0.0f, 0x1.9303dap-93f, 0x1.cf0838p-48f, 0.0f,
     0x1.f61cc2p-56f, 0.0f, 0.0f, 0x1.47c656p-40f, 0.0f, 0.0f, 0.0f, 0x1.165fcp-80f,
     0x1.cbf01ap-4f, 0x1.9a47dep-120f, 0.0f, 0.0f, 0.0f, 0x1.d44442p-31f,
     0x1.1095f8p-41f, 0x1.c8d7bep-124f, 0.0f, 0.0f, 0.0f, 0x1.6d001ap-73f,
     0x1.6a8b2p-19f, 0.0f, 0.0f, 0.0f, 0x1.cbe7a4p-13f, 0x1.b6c21p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a4c0a2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c73dc8p-63f,
     0x1.3f1bfcp-64f, 0.0f, 0x1.f0668ep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df97eap-51f, 0.0f, 0x1.255f6cp-113f, 0x1.7614d6p-5f, 0.0f, 0x1.f3bfb8p-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2774p-60f, 0.0f, 0x1.8890a2p-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8be8fcp-116f, 0x1.df287ap-109f, 0x1.c16272p-70f, 0x1.f07df4p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c479aap-45f, 0.0f, 0x1.295db6p-76f, 0.0f,
     0x1.433918p-22f, 0x1.97c066p-38f, 0.0f, 0x1.dad672p-84f, 0.0f, 0x1.e3b2fp-77f,
     0.0f, 0x1.479dbep-36f, 0x1.7bf6f6p-101f, 0x1.9f6286p-41f, 0x1.7ae016p-24f,
     0x1.b45992p-20f, 0x1.78e716p-119f, 0x1.334fe4p-119f, 0x1.eab888p-91f, 0.0f,
     0x1.20cd0cp-7f, 0.0f, 0x1.030d86p-106f, 0.0f, 0.0f, 0.0f, 0x1.f7e802p-59f,
     0x1.5ad806p-36f, 0.0f, 0.0f, 0x1.c912f2p-16f, 0.0f, 0x1p0f, 0.0f,
     0x1.daabb8p-77f, 0x1.e0f92cp-63f, 0x1.d3fad4p-60f, 0x1.a86226p-17f,
     0x1.ad7a1ap-36f, 0.0f, 0.0f, 0.0f, 0x1.4e83d2p-50f, 0.0f, 0x1.b07f8cp-50f, 0.0f,
     0x1.d3ef62p-121f, 0.0f, 0.0f, 0x1.e7e97ep-18f, 0x1.5fab3p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c7d8ecp-6f, 0.0f, 0x1.14549p-58f, 0x1.300d18p-30f, 0.0f, 0.0f,
     0x1.6b209cp-120f, 0x1.4fb70ep-29f, 0.0f, 0x1.6eb3a6p-98f, 0x1.d91402p-9f,
     0x1.acbf42p-92f, 0.0f, 0x1.d0d97cp-74f, 0.0f, 0x1.b13e7ap-23f, 0.0f, 0.0f,
     0x1.b3861ep-96f, 0x1.a9ab14p-126f, 0x1.18a138p-74f, 0.0f, 0x1.fc0f86p-13f, 0.0f,
     0x1.7721ap-68f, 0.0f, 0.0f, 0x1.d99444p-32f, 0x1.33512ap-73f, 0x1.3e38dap-76f,
     0x1.e2e612p-25f, 0.0f, 0.0f, 0x1.9a98ecp-113f, 0.0f, 0x1.c20efp-61f, 0.0f,
     0x1.dae41cp-67f, 0x1.840b9ap-35f, 0x1.f5b70ap-59f, 0.0f, 0x1.182f6cp-3f,
     0x1.8f03fp-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a75acp-74f, 0x1.a786fap-80f,
     0x1.48ba76p-65f, 0.0f, 0.0f, 0x1.d4945ep-80f, 0x1.a5093ep-99f, 0x1.0a428ep-106f,
     0x1.73e6d4p-8f, 0x1.27da86p-51f, 0x1.72ccacp-64f, 0x1.7a4aeap-51f, 0.0f, 0.0f,
     0x1.98912p-122f, 0x1.57545cp-75f, 0x1.30565ep-110f, 0.0f, 0x1.f66ba6p-60f, 0.0f,
     0x1.c61bc4p-55f, 0.0f, 0.0f, 0x1.cc79p-9f, 0x1.3cf2fp-95f, 0.0f, 0.0f,
     0x1.1749cap-30f, 0.0f, 0x1.9002d4p-5f, 0.0f, 0x1.1ca012p-58f, 0x1.24a914p-63f,
     0.0f, 0x1.485d7cp-89f, 0x1.ed2c94p-91f, 0.0f, 0x1.d7f4f6p-83f, 0.0f,
     0x1.4a412ep-11f, 0x1.81b0fap-44f, 0x1.3fd9a8p-19f, 0.0f, 0x1.6849ap-65f,
     0x1.9f5a18p-65f, 0x1.3a42cap-118f, 0x1.d123cep-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.931fep-90f, 0x1.e0a1d6p-102f, 0.0f, 0.0f,
     0x1.fa751cp-35f, 0.0f, 0x1.59bb4cp-44f, 0.0f, 0.0f, 0x1.45534cp-24f, 0.0f, 0.0f,
     0.0f, 0x1.82408ap-47f, 0.0f, 0.0f, 0x1.15cdb6p-60f, 0x1.0d1bf4p-36f,
     0x1.c7e4e8p-58f, 0.0f, 0.0f, 0x1.36e73ap-38f, 0x1.f09fbcp-4f, 0x1.45736p-15f,
     0.0f, 0.0f, 0x1.7dba2cp-52f, 0.0f, 0x1.a2b976p-87f, 0x1.d0e26cp-64f,
     0x1.25ded8p-57f, 0.0f, 0x1.d1135ap-109f, 0x1.71a0ap-43f, 0.0f, 0.0f,
     0x1.5a7426p-49f, 0x1.77d6cap-119f, 0x1.7dc5ep-18f, 0x1.6bee9cp-102f,
     0x1.eed72ep-42f, 0.0f, 0x1.b7de7p-45f, 0.0f, 0.0f, 0.0f, 0x1.3609ap-96f,
     0x1.d448c6p-10f, 0.0f, 0x1.f941c2p-56f, 0.0f, 0x1.c8a8b4p-74f, 0x1.73f1dcp-37f,
     0x1.80203ep-125f, 0x1.47b1b4p-8f, 0x1.014ff4p-87f, 0x1.247c6p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a411fap-74f, 0.0f, 0x1.810aa8p-70f, 0.0f, 0x1.503c4cp-123f,
     0.0f, 0.0f, 0.0f, 0x1.69dae8p-117f, 0x1.b1f92cp-79f, 0.0f, 0.0f, 0x1.27782p-62f,
     0.0f, 0x1.e70566p-85f, 0.0f, 0x1.cdbcb4p-42f, 0x1.5a7c6cp-50f, 0.0f,
     0x1.2e2feap-18f, 0x1.906c16p-86f, 0.0f, 0x1.d16b16p-59f, 0x1.1a829ep-3f,
     0x1.72752ep-118f, 0x1.3c1caep-51f, 0x1.b443d6p-26f, 0.0f, 0x1.735feep-78f,
     0x1.ec0404p-67f, 0.0f, 0.0f, 0x1.a981eap-2f, 0x1.94574cp-40f, 0.0f,
     0x1.20eb1ap-30f, 0x1.91f54ap-5f, 0x1.5feaaap-105f, 0x1.d4d382p-68f,
     0x1.a7405ep-69f, 0.0f, 0.0f, 0x1.ad67a4p-118f, 0.0f, 0.0f, 0x1.fcb9bap-60f,
     0x1.48112cp-121f, 0.0f, 0.0f, 0.0f, 0x1.762126p-39f, 0x1.9bfd9cp-82f,
     0x1.deec72p-119f, 0x1.32a0a8p-122f, 0x1.f92c3ap-69f, 0x1.152204p-100f,
     0x1.306de2p-69f, 0.0f, 0x1.b5c852p-36f, 0.0f, 0x1.ef135cp-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f414b4p-123f, 0.0f, 0.0f, 0.0f, 0x1.188a16p-118f, 0.0f,
     0.0f, 0x1.839a22p-52f, 0x1.12032ap-113f, 0.0f, 0x1.339556p-122f, 0.0f,
     0x1.e87fdp-119f, 0.0f, 0.0f, 0.0f, 0x1.6e2a26p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3ff1cp-34f, 0x1.3be1fep-111f, 0x1.3a831cp-13f, 0x1.019042p-118f,
     0x1.788eeap-2f, 0.0f, 0x1.9b574p-78f, 0.0f, 0x1.54b446p-97f, 0.0f, 0.0f, 0.0f,
     0x1.c4cde6p-36f, 0.0f, 0.0f, 0x1.d951d6p-54f, 0x1.6281bep-111f, 0x1.756234p-63f,
     0x1.6a49a8p-5f, 0.0f, 0.0f, 0.0f, 0x1.63b476p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e3cccp-9f, 0x1.73ec02p-19f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.0f9f64p-113f,
     0.0f, 0.0f, 0x1.96d514p-108f, 0x1.9dd1a2p-68f, 0.0f, 0.0f, 0.0f, 0x1.fa00dcp-85f,
     0x1.363388p-82f, 0x1.04b854p-5f, 0.0f, 0x1.211a98p-57f, 0x1.d11b5p-125f, 0.0f,
     0.0f, 0x1.ff284ep-117f, 0.0f, 0.0f, 0.0f, 0x1.09e07p-32f, 0x1.f12a98p-123f,
     0x1.212476p-77f, 0x1.7e4e8p-67f, 0x1.1e9c96p-115f, 0x1.d669eap-48f,
     0x1.40dfc4p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.833bep-18f, 0x1.8b5f66p-117f,
     0x1.bacabap-43f, 0x1.a7372ap-95f, 0x1.679fc8p-70f, 0x1.dc46bp-42f,
     0x1.36fe14p-122f, 0.0f, 0.0f, 0.0f, 0x1.3a93b2p-35f, 0x1.ecfcep-23f, 0.0f,
     0x1.4605cep-23f, 0.0f, 0x1.833b9cp-18f, 0x1.136814p-58f, 0x1.9b71a8p-65f,
     0x1.165cacp-111f, 0.0f, 0.0f, 0x1.7543b6p-78f, 0x1.594092p-121f, 0x1.1c793ap-25f,
     0x1.7f6a92p-88f, 0.0f, 0x1.3236aep-35f, 0x1.87cd74p-93f, 0x1.1a18e8p-32f, 0.0f,
     0x1.63344ap-64f, 0.0f, 0x1.3141eap-1f, 0x1.b150aap-2f, 0.0f, 0x1.86d8dp-108f,
     0.0f, 0.0f, 0.0f, 0x1.7c4dd4p-41f, 0x1.9dee3ep-110f, 0x1.8d1f16p-5f, 0.0f,
     0x1.bf1ebcp-41f, 0x1.e931cep-1f, 0.0f, 0.0f, 0.0f, 0x1.a1c266p-40f,
     0x1.4c280ap-32f, 0.0f, 0x1.069268p-96f, 0.0f, 0x1.ae201ap-4f, 0x1.ae2496p-115f,
     0x1.66ead6p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1586d8p-111f, 0x1.22f0c6p-24f,
     0x1.ccd438p-12f, 0x1.a1aa5cp-10f, 0x1.690826p-126f, 0.0f, 0.0f, 0.0f,
     0x1.a6c6fp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98ec46p-98f, 0x1.501cacp-69f, 0.0f,
     0.0f, 0x1.064964p-14f, 0.0f, 0x1.0dceb8p-14f, 0x1.d497fp-47f, 0.0f,
     0x1.eb6576p-87f, 0x1.b9318cp-24f, 0x1.768772p-39f, 0.0f, 0x1.a3f5f8p-40f, 0.0f,
     0x1.5a2414p-6f, 0x1.d96896p-95f, 0x1.8d9a8cp-34f, 0x1.a97124p-16f, 0.0f,
     0x1.66f71p-123f, 0x1.d451b8p-35f, 0x1.2df676p-107f, 0x1.98705ap-117f,
     0x1.ba8b14p-64f, 0x1.c2a7ep-4f, 0x1.0563dep-99f, 0x1.483698p-14f,
     0x1.29d94ep-91f, 0.0f, 0x1.330a62p-92f, 0.0f, 0x1.d75dd4p-2f, 0x1.8fdf0ap-51f,
     0x1.99dddep-32f, 0x1.1bf52cp-119f, 0x1.7098bcp-61f, 0.0f, 0.0f, 0x1.aa6a7ep-40f,
     0x1.53093p-2f, 0x1.df7952p-89f, 0.0f, 0x1.712048p-46f, 0.0f, 0.0f, 0.0f,
     0x1.5d4fdap-89f, 0x1.c753cap-24f, 0x1.d8c536p-5f, 0.0f, 0x1.80d9c8p-23f,
     0x1.e1c072p-95f, 0.0f, 0x1.188e0cp-114f, 0.0f, 0.0f, 0.0f, 0x1.c98d32p-14f, 0.0f,
     0.0f, 0x1.5a4454p-107f, 0.0f, 0x1.53735p-57f, 0.0f, 0x1.6fe112p-45f,
     0x1.f96aep-56f, 0x1.53dc5cp-43f, 0.0f, 0x1.c4341p-73f, 0x1.d37b0cp-73f,
     0x1.3f3c76p-114f, 0.0f, 0x1.e405b6p-33f, 0x1.1cd03ep-49f, 0x1.0056eep-114f,
     0x1.c0cbaap-69f, 0.0f, 0.0f, 0x1.6d46e6p-20f, 0.0f, 0x1.a2d34p-15f, 0.0f,
     0x1.ecce1p-27f, 0.0f, 0x1.b0032cp-89f, 0x1.153374p-23f, 0.0f, 0x1.6d6d96p-59f,
     0.0f, 0.0f, 0x1.8d8c4ap-76f, 0x1.9d0306p-27f, 0.0f, 0x1.8a1caep-115f, 0.0f,
     0x1.9e3c2p-73f, 0x1.0df20cp-32f, 0x1.270dap-122f, 0x1.75cda4p-94f, 0.0f,
     0x1.29f1fep-33f, 0x1.c615fp-85f, 0x1.0c2542p-32f, 0x1.cdd7dcp-14f, 0.0f, 0.0f,
     0.0f, 0x1.dfbc52p-122f, 0x1.30bc04p-57f, 0x1.e7488cp-18f, 0x1.3f247ap-66f,
     0x1.d907fap-71f, 0x1.a4f9ecp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0e55p-109f, 0x1.2034d8p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cd928p-98f,
     0.0f, 0x1.ba972ep-96f, 0x1.600abp-92f, 0.0f, 0x1.5c743cp-116f, 0x1.b2eedep-68f,
     0x1.7814c6p-116f, 0.0f, 0x1.4abedap-68f, 0.0f, 0.0f, 0.0f, 0x1.bbee42p-94f, 0.0f,
     0x1.c91becp-76f, 0x1.993938p-13f, 0.0f, 0.0f, 0x1.fb4d0ap-19f, 0x1.de96d6p-67f,
     0.0f, 0.0f, 0x1.e4fc84p-59f, 0x1.f2780ap-19f, 0.0f, 0x1.ea3e98p-114f, 0.0f,
     0x1.6530a2p-70f, 0x1.0259b8p-79f, 0x1.bed18cp-115f, 0.0f, 0x1.91d99ep-63f,
     0x1.30f9bcp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20249p-99f, 0x1.58e4dap-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2296f8p-99f, 0x1.aebd84p-43f, 0.0f,
     0x1.63ef5ap-96f, 0.0f, 0.0f, 0x1.e2af8ep-105f, 0x1.805af4p-57f, 0x1.05c94cp-79f,
     0.0f, 0x1.c6bdc6p-9f, 0x1.e5ffep-45f, 0.0f, 0x1.fe1224p-79f, 0x1.02f1eep-83f,
     0.0f, 0.0f, 0.0f, 0x1.057a4cp-44f, 0.0f, 0x1.57f788p-15f, 0x1.f7cf54p-6f, 0.0f,
     0.0f, 0x1.f9a236p-51f, 0x1.995758p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.d733f6p-116f, 0.0f, 0x1.8a464ep-54f, 0x1.4a8302p-41f, 0.0f, 0x1.a2cb82p-111f,
     0.0f, 0x1.76fceap-23f, 0.0f, 0x1.92c026p-20f, 0x1.1854acp-38f, 0.0f,
     0x1.efc0d8p-77f, 0x1.47d7e8p-15f, 0x1.a61a0ap-32f, 0.0f, 0.0f, 0.0f,
     0x1.51778p-53f, 0.0f, 0x1.8e03ccp-113f, 0.0f, 0x1.2d5a2ap-89f, 0x1.502854p-105f,
     0x1.d39f14p-44f, 0x1.fb8d6cp-47f, 0x1.5bd744p-16f, 0.0f, 0.0f, 0x1.930d48p-22f,
     0.0f, 0x1.37731ap-1f, 0x1.f768dp-97f, 0.0f, 0x1.2febdep-25f, 0x1.2cffcap-84f,
     0x1.7e8354p-94f, 0x1.55da2ep-3f, 0x1.9bd054p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.741848p-109f, 0x1p0f, 0.0f, 0x1.bcd2bep-50f, 0.0f, 0.0f, 0x1.7338e4p-83f,
     0x1.b87292p-16f, 0.0f, 0x1.508d74p-121f, 0x1.94e36p-6f, 0x1.90cc7ep-29f, 0.0f,
     0x1.5612f8p-101f, 0.0f, 0x1.0b6e6ap-5f, 0x1.cb3338p-116f, 0.0f, 0.0f, 0.0f,
     0x1.643042p-106f, 0.0f, 0x1.2ad864p-8f, 0x1.8cc72p-103f, 0x1.119008p-77f,
     0x1.e12bdep-6f, 0.0f, 0.0f, 0.0f, 0x1.e4bd8cp-18f, 0.0f, 0x1.0e767cp-79f,
     0x1.fe2cbap-57f, 0.0f, 0x1.db144ep-67f, 0x1.e85fe4p-67f, 0x1.1660e6p-32f,
     0x1.9b63b8p-90f, 0.0f, 0x1.1374dp-103f, 0.0f, 0.0f, 0x1.dd0dfep-42f,
     0x1.0abf1ep-21f, 0.0f, 0.0f, 0x1.996ca2p-124f, 0x1.6100cep-72f, 0x1.1a13f2p-56f,
     0.0f, 0.0f, 0.0f, 0x1.71b794p-105f, 0x1.78a766p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2fa02ep-87f, 0.0f, 0.0f, 0x1.55589ap-80f, 0x1.cf36dp-8f,
     0x1.d44174p-19f, 0x1.d62c22p-68f, 0.0f, 0x1.3f49bap-13f, 0.0f, 0x1.4d4d58p-12f,
     0x1.48e32ep-33f, 0.0f, 0x1.ab485cp-99f, 0.0f, 0x1.6cd858p-105f, 0.0f, 0.0f,
     0x1.d2a3a6p-107f, 0x1.bdebcep-19f, 0x1.d198b2p-109f, 0.0f, 0x1.9ddcacp-87f, 0.0f,
     0x1.6d261p-71f, 0x1.7d74aep-103f, 0x1.acc6ap-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69a032p-33f
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
            tmp1 = Sleef_sinhf1_u10purecfma(tmp0);
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
    printf("Sleef_sinhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
