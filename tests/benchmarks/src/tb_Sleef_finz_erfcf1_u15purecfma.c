/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcf1_u15purecfma.c --function \
 *     Sleef_finz_erfcf1_u15purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.e11698p-60f, 0.0f, 0.0f, 0x1.484126p-126f, 0.0f, 0x1.59353ep-82f,
     0x1.5fd1d2p-63f, 0x1.b42894p-58f, 0.0f, 0.0f, 0.0f, 0x1.640dap-60f, 0.0f,
     0x1.e4fba2p-16f, 0x1.8ab798p-64f, 0x1.dfad56p-65f, 0.0f, 0x1.102bdap-61f, 0.0f,
     0.0f, 0.0f, 0x1.75f78cp-112f, 0.0f, 0.0f, 0x1.db3b5cp-11f, 0.0f, 0x1.66dff6p-71f,
     0.0f, 0.0f, 0x1p0f, 0x1.d50596p-10f, 0.0f, 0.0f, 0x1.13968p-118f, 0.0f,
     0x1.9f227ap-83f, 0.0f, 0x1.8c0432p-99f, 0.0f, 0x1.32f3fap-59f, 0.0f,
     0x1.30803cp-79f, 0x1.d324fcp-40f, 0x1.681964p-15f, 0.0f, 0x1.d59266p-52f, 0.0f,
     0x1.11b908p-84f, 0.0f, 0x1.995116p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70a282p-105f,
     0x1.45bf94p-6f, 0.0f, 0x1.495ea4p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fbf9cp-73f,
     0x1.cbe6aep-126f, 0.0f, 0x1.a7682p-14f, 0.0f, 0x1.d33688p-83f, 0x1.77bd2cp-18f,
     0x1.ce36ap-121f, 0x1.df45b8p-30f, 0x1.fac1a6p-107f, 0x1.b7cbc8p-49f, 0.0f,
     0x1.f605f2p-58f, 0.0f, 0.0f, 0x1.ab3cbp-122f, 0.0f, 0x1.92fc8ap-113f,
     0x1.06094cp-60f, 0x1.2ead62p-31f, 0x1.43736ap-27f, 0.0f, 0x1.f44ecep-47f, 0.0f,
     0x1.c35d68p-81f, 0x1.98014ep-32f, 0.0f, 0x1.4b247p-4f, 0.0f, 0.0f, 0.0f,
     0x1.fbb1fep-99f, 0x1.47b8c8p-23f, 0.0f, 0.0f, 0x1.207c62p-57f, 0.0f,
     0x1.35cabcp-49f, 0.0f, 0x1.d970d8p-16f, 0.0f, 0.0f, 0x1.434922p-59f, 0.0f,
     0x1.c7916p-14f, 0.0f, 0x1.959638p-40f, 0.0f, 0x1.2e1baap-30f, 0x1p0f, 0.0f, 0.0f,
     0x1.801142p-69f, 0.0f, 0x1.9b674ep-63f, 0.0f, 0x1.ddd0e2p-66f, 0.0f,
     0x1.bfdc8ep-85f, 0.0f, 0x1.d9414ep-40f, 0x1.c0a23cp-50f, 0.0f, 0x1.f94a64p-31f,
     0.0f, 0x1.4875bcp-97f, 0.0f, 0.0f, 0.0f, 0x1.ebc9dep-20f, 0.0f, 0.0f,
     0x1.286912p-14f, 0.0f, 0x1.256a54p-50f, 0.0f, 0.0f, 0.0f, 0x1.1d2c2p-53f,
     0x1.427cacp-104f, 0.0f, 0x1.aaa814p-78f, 0.0f, 0x1.82c426p-115f, 0x1.de325ap-85f,
     0x1.0c11acp-124f, 0x1.037feep-74f, 0x1.588008p-30f, 0x1.cebc66p-33f, 0.0f,
     0x1.c8279p-48f, 0x1.3bb09ep-47f, 0x1.d3aa1ep-102f, 0.0f, 0.0f, 0x1.c7422cp-59f,
     0x1.7003aep-109f, 0x1.131de4p-41f, 0x1.c40d9p-97f, 0.0f, 0x1.28201ap-75f,
     0x1.fcba7ap-23f, 0x1.52f5cap-105f, 0x1.f1a342p-32f, 0.0f, 0x1.fce252p-28f,
     0x1.9f6508p-22f, 0.0f, 0x1p0f, 0.0f, 0x1.f21a4ap-69f, 0.0f, 0x1.b73b56p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.411006p-12f, 0x1.afb88cp-58f, 0.0f, 0.0f,
     0x1.d92a12p-102f, 0.0f, 0x1.4b4ca8p-85f, 0x1.dda33p-10f, 0.0f, 0x1.71584cp-93f,
     0x1.69004ap-26f, 0x1.d68bc2p-59f, 0.0f, 0x1.83381ap-2f, 0.0f, 0x1.6f5bf2p-51f,
     0.0f, 0x1.0e1dcp-7f, 0x1.238dap-113f, 0x1.ed1e48p-19f, 0x1.e7663cp-32f, 0.0f,
     0.0f, 0x1.48578ep-55f, 0.0f, 0x1.299598p-86f, 0.0f, 0x1.29daa8p-41f,
     0x1.4a6e9cp-67f, 0.0f, 0.0f, 0.0f, 0x1.53124ep-26f, 0x1.046e8ap-63f,
     0x1.cd08c4p-10f, 0x1.c5a89p-87f, 0.0f, 0.0f, 0x1.9d2a3p-31f, 0.0f, 0.0f,
     0x1.e4dab6p-33f, 0.0f, 0x1.07f442p-96f, 0x1.1f7e12p-36f, 0.0f, 0x1.4a2e22p-10f,
     0.0f, 0x1.c1a8d8p-121f, 0.0f, 0x1.01df7ap-104f, 0.0f, 0x1.61a0d4p-73f,
     0x1.7dc874p-41f, 0x1.68ac72p-100f, 0.0f, 0.0f, 0.0f, 0x1.507e9ap-103f,
     0x1.6e4556p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e04fep-42f, 0x1.2c2bfcp-81f, 0.0f,
     0.0f, 0x1.a617ap-41f, 0x1.1b5a1cp-81f, 0x1.9d6a4ep-14f, 0x1.7a7edap-33f,
     0x1.7b38acp-38f, 0x1.227742p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf130ap-69f, 0.0f,
     0.0f, 0x1.498ffcp-27f, 0.0f, 0.0f, 0.0f, 0x1.512c9p-49f, 0.0f, 0x1.fabdap-36f,
     0x1.be674cp-71f, 0.0f, 0x1.44e4ccp-37f, 0.0f, 0x1.a91caap-75f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c3d272p-81f, 0x1.40e97ap-30f, 0.0f, 0x1.0710d8p-35f, 0.0f,
     0x1.ee44ccp-37f, 0x1.74b4p-78f, 0.0f, 0x1.331a68p-22f, 0x1.8018dcp-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab7a26p-108f, 0.0f, 0x1.226518p-16f, 0.0f, 0.0f,
     0x1.416402p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a6932p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.67bd2p-114f, 0x1.0d008p-82f, 0x1.7a31d8p-79f, 0x1.8dc8d4p-12f,
     0.0f, 0.0f, 0x1.9312fap-93f, 0x1.772708p-106f, 0.0f, 0x1.9781d6p-84f,
     0x1.e3a612p-108f, 0x1.5b8868p-113f, 0.0f, 0.0f, 0x1.be384cp-27f, 0x1.4fcd08p-41f,
     0.0f, 0.0f, 0.0f, 0x1.8c087ap-56f, 0x1.650ap-119f, 0x1.02fdb4p-19f,
     0x1.9d27a8p-123f, 0x1.a1513p-45f, 0.0f, 0.0f, 0x1.4d4f28p-89f, 0x1.ad6828p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a9742p-8f, 0.0f, 0x1.b0ba9ap-39f,
     0.0f, 0.0f, 0x1.13ea0ep-116f, 0x1.a01c22p-90f, 0x1.25e4a6p-36f, 0x1.7c5596p-76f,
     0.0f, 0.0f, 0x1.5c4ad8p-67f, 0.0f, 0x1.0fac74p-76f, 0.0f, 0x1.19ff42p-120f, 0.0f,
     0x1.a02354p-9f, 0x1.cfaca6p-44f, 0x1.c46be8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.91ee96p-115f, 0.0f, 0x1.edd0d2p-78f, 0x1.67b452p-4f, 0.0f,
     0x1.3114acp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08fe9ap-59f, 0x1.b437c4p-52f,
     0.0f, 0.0f, 0x1.cd806ep-21f, 0x1.1b27fap-45f, 0.0f, 0.0f, 0.0f, 0x1.664112p-88f,
     0x1.812d72p-61f, 0x1.801016p-106f, 0x1.2a7da2p-32f, 0.0f, 0.0f, 0x1.c479ap-120f,
     0x1.311354p-108f, 0.0f, 0.0f, 0x1.901474p-36f, 0.0f, 0x1.cbaae8p-88f,
     0x1.e5e60ep-82f, 0x1.537758p-126f, 0x1.7af3ecp-108f, 0.0f, 0x1.dc530ep-124f,
     0x1.e5e88ap-20f, 0.0f, 0.0f, 0.0f, 0x1.251a38p-34f, 0x1.dcfe84p-26f,
     0x1.49ab04p-113f, 0x1.7cddd2p-69f, 0x1.e01216p-123f, 0x1.a3e8eep-58f, 0.0f, 0.0f,
     0x1.c6b4ap-27f, 0.0f, 0x1.67d7a6p-125f, 0.0f, 0x1.3ed784p-117f, 0.0f, 0.0f, 0.0f,
     0x1.372f66p-77f, 0x1.d98f9cp-1f, 0.0f, 0x1.741232p-5f, 0.0f, 0.0f,
     0x1.4ef382p-5f, 0x1.81ad3cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf4ce8p-118f,
     0x1.ff0deep-16f, 0x1.d7775cp-10f, 0x1.23120ep-90f, 0.0f, 0.0f, 0.0f,
     0x1.a46024p-5f, 0x1.e82056p-13f, 0.0f, 0.0f, 0x1.cbb05p-70f, 0x1.4a28ccp-106f,
     0x1.268c32p-58f, 0.0f, 0.0f, 0.0f, 0x1.4f3c1p-43f, 0x1.ac3ebap-117f, 0.0f,
     0x1.995124p-117f, 0.0f, 0.0f, 0x1.f808d6p-76f, 0x1.b2d8ep-36f, 0x1.c564cep-106f,
     0x1.d16b7p-3f, 0x1.4a6576p-41f, 0x1.33c5bap-49f, 0x1.67ae16p-105f, 0.0f,
     0x1.e9bbeep-97f, 0x1.03568ap-109f, 0.0f, 0.0f, 0x1.7ce134p-70f, 0.0f,
     0x1.d82a22p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.220f1ap-2f, 0.0f, 0x1.b72646p-10f, 0.0f, 0x1.2e8456p-63f,
     0x1.12367ap-9f, 0x1.0a5d0ep-3f, 0.0f, 0x1.bb357cp-16f, 0x1.1f14e2p-100f, 0.0f,
     0.0f, 0x1.f111acp-50f, 0.0f, 0x1.8dc83ep-38f, 0.0f, 0.0f, 0x1.4a644p-121f, 0.0f,
     0x1.9fc88cp-48f, 0x1.2e0cacp-96f, 0x1.18db8cp-29f, 0.0f, 0x1.7e49ap-75f,
     0x1.5ace4p-47f, 0x1.ecc27p-90f, 0x1.d9de8ep-80f, 0x1.950918p-30f,
     0x1.adfcc8p-87f, 0x1.56558p-19f, 0x1.b4954p-114f, 0x1.ff56d6p-2f,
     0x1.6f7784p-57f, 0x1.b4198ep-109f, 0x1.be0eb6p-69f, 0x1.93c532p-38f,
     0x1.ac08a2p-6f, 0x1.89277cp-32f, 0x1.0807dp-19f, 0x1.27b304p-76f,
     0x1.fa00aep-62f, 0.0f, 0.0f, 0.0f, 0x1.c0644ap-60f, 0x1.e3491ep-18f,
     0x1.688a0ap-5f, 0.0f, 0x1.a423p-68f, 0x1.cdc3aap-77f, 0x1.6c44dap-123f,
     0x1.9c04e6p-97f, 0.0f, 0.0f, 0.0f, 0x1.0fb35p-93f, 0x1.4b16e2p-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.346844p-69f, 0x1.cb1dbcp-71f, 0x1.dc29f4p-26f, 0x1.9bfa6ap-56f,
     0x1.fea5a6p-104f, 0x1.dd309ep-75f, 0.0f, 0x1.75780cp-27f, 0x1.c0305cp-48f,
     0x1.7fb84ep-122f, 0.0f, 0x1.0018fp-60f, 0x1.da1612p-27f, 0x1.66d016p-80f,
     0x1.330616p-100f, 0.0f, 0.0f, 0.0f, 0x1.556d7cp-14f, 0.0f, 0x1.931258p-47f, 0.0f,
     0x1.601ef8p-22f, 0.0f, 0.0f, 0.0f, 0x1.da0fdcp-113f, 0.0f, 0x1.0ec646p-9f, 0.0f,
     0.0f, 0x1.c98b3cp-80f, 0.0f, 0.0f, 0x1.de5b14p-88f, 0.0f, 0.0f, 0x1.ec0c82p-16f,
     0x1.a98b64p-13f, 0.0f, 0x1.d66b96p-111f, 0x1.7979ap-90f, 0x1.2c41bap-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.166c28p-117f, 0x1.756fe4p-40f, 0.0f,
     0x1.bc6bd2p-105f, 0.0f, 0x1.002f78p-108f, 0.0f, 0x1.9951f2p-85f, 0.0f, 0.0f,
     0x1.affda8p-91f, 0.0f, 0x1.2cf244p-95f, 0x1.f52c82p-1f, 0.0f, 0.0f,
     0x1.52b0ap-64f, 0x1.d31f36p-69f, 0x1.9d31a2p-72f, 0x1.300108p-48f,
     0x1.99923ep-98f, 0.0f, 0.0f, 0x1.a12f2p-110f, 0.0f, 0x1.bbf00cp-96f,
     0x1.cfb856p-57f, 0x1.43474p-77f, 0x1.afd746p-121f, 0x1.0dff36p-109f,
     0x1.2993c2p-66f, 0x1.ce8a92p-67f, 0.0f, 0x1.eb767cp-103f, 0.0f, 0.0f,
     0x1.295c4p-14f, 0.0f, 0.0f, 0x1.da6c2cp-81f, 0x1.837b7cp-67f, 0x1.294ebcp-94f,
     0.0f, 0x1.2d8c42p-123f, 0.0f, 0.0f, 0x1.f8bfe6p-19f, 0x1.7e7364p-21f, 0.0f,
     0x1.242d68p-50f, 0.0f, 0x1.e0523ep-94f, 0x1.13be16p-27f, 0x1.c971dp-39f, 0.0f,
     0x1.65202p-17f, 0x1.21adap-116f, 0.0f, 0.0f, 0.0f, 0x1.055d18p-67f,
     0x1.e86d52p-89f, 0.0f, 0x1.207d54p-99f, 0.0f, 0.0f, 0.0f, 0x1.44f0dap-108f,
     0x1.83e66ep-77f, 0x1.eba60ap-1f, 0.0f, 0.0f, 0.0f, 0x1.b557b2p-88f,
     0x1.141b46p-15f, 0.0f, 0x1.a20152p-78f, 0x1.56eb5ep-15f, 0.0f, 0x1.634052p-79f,
     0x1.20757ap-35f, 0x1.587048p-117f, 0x1.13ebe6p-60f, 0x1p0f, 0x1.31b01ap-6f, 0.0f,
     0x1.966afep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29ecep-111f, 0x1.8b4e04p-113f,
     0x1.c67b54p-88f, 0.0f, 0x1.b06bcep-2f, 0.0f, 0.0f, 0x1.2e5afcp-111f, 0.0f, 0.0f,
     0x1.f970e8p-104f, 0.0f, 0x1.36bf96p-52f, 0.0f, 0x1.67c83ep-94f, 0.0f,
     0x1.12555cp-67f, 0x1.9717ccp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fc804p-10f, 0.0f,
     0.0f, 0x1.abdefap-50f, 0x1.c56062p-30f, 0.0f, 0x1.c4ac94p-71f, 0.0f,
     0x1.e5e772p-67f, 0x1.e959dap-94f, 0x1.6df62p-67f, 0.0f, 0x1.89365cp-80f,
     0x1.eb8438p-85f, 0x1.c72038p-89f, 0x1.91ed8ep-43f, 0.0f, 0x1.1f888ap-5f, 0.0f,
     0.0f, 0.0f, 0x1.29d4bep-41f, 0x1.6b5ea2p-104f, 0x1.3f382p-91f, 0x1.b20a6p-67f,
     0x1.497a8ep-9f, 0x1.fd8f26p-2f, 0x1.e99e5p-55f, 0x1.3df176p-121f,
     0x1.038148p-83f, 0.0f, 0x1.1255acp-100f, 0.0f, 0x1.b49dbep-43f, 0.0f,
     0x1.9bd984p-120f, 0.0f, 0x1.d326b4p-80f, 0.0f, 0x1p0f, 0x1.aac846p-24f,
     0x1.13cb56p-108f, 0.0f, 0.0f, 0x1.138db6p-65f, 0.0f, 0x1.66d22cp-3f,
     0x1.bcc8aap-116f, 0x1.14d738p-13f, 0.0f, 0.0f, 0x1.221166p-43f, 0.0f, 0.0f,
     0x1.2e9a3cp-96f, 0.0f, 0.0f, 0x1.dd61c4p-51f, 0x1.261438p-96f, 0.0f,
     0x1.f63466p-124f, 0x1.2ec278p-74f, 0x1.31f68cp-95f, 0.0f, 0x1.c0149cp-59f,
     0x1.fa235cp-76f, 0.0f, 0x1.b0de26p-38f, 0x1.5afed6p-71f, 0.0f, 0x1.ae0268p-125f,
     0x1.a313cap-60f, 0x1.7881ecp-26f, 0.0f, 0x1.ce6e4ep-42f, 0.0f, 0.0f,
     0x1.dc64fep-120f, 0.0f, 0.0f, 0.0f, 0x1.24799ep-121f, 0.0f, 0x1.3c728p-121f,
     0x1.61061ep-111f, 0x1.4101d2p-15f, 0x1.032cbap-115f, 0.0f, 0x1.732f0ap-55f,
     0x1.61bd9ap-75f, 0x1.f29424p-66f, 0.0f, 0x1.5c27ecp-8f, 0.0f, 0.0f,
     0x1.09e3a8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ebc2p-4f, 0.0f, 0.0f,
     0x1.e67c52p-67f, 0x1.5ed7dep-73f, 0.0f, 0x1.9d4348p-71f, 0x1.e9a5d2p-89f, 0.0f,
     0x1p0f, 0x1.6c8208p-51f, 0x1.c76ee4p-103f, 0x1.7fd17p-126f, 0x1.ac0826p-30f,
     0x1.cfc1b4p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c76ea2p-35f,
     0x1.bd6062p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.489dbp-9f, 0.0f, 0.0f,
     0x1.db7246p-61f, 0x1.a96ba4p-27f, 0x1.981adcp-120f, 0x1.077a98p-36f,
     0x1.5b5ddep-111f, 0.0f, 0x1.425738p-22f, 0.0f, 0.0f, 0.0f, 0x1.863ea2p-31f, 0.0f,
     0x1.8fb222p-48f, 0.0f, 0x1.4ed354p-97f, 0.0f, 0.0f, 0x1.1af552p-70f,
     0x1.b176c2p-73f, 0.0f, 0.0f, 0.0f, 0x1.170bbcp-28f, 0.0f, 0x1.abb538p-122f,
     0x1.37690ep-119f, 0.0f, 0.0f, 0x1.bd1258p-3f, 0x1.ce61dp-82f, 0.0f,
     0x1.4ceeap-117f, 0x1.6c669ap-3f, 0.0f, 0x1.c5140cp-38f, 0x1.508cfcp-41f,
     0x1.b1d864p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0d48p-58f, 0.0f, 0.0f,
     0x1.0e0afcp-9f, 0x1.6c62p-17f, 0.0f, 0x1.c72c48p-117f, 0x1.b7542ep-52f, 0.0f,
     0x1.d0577cp-113f, 0x1.2a8656p-62f, 0x1.cff384p-112f, 0x1.aefae6p-33f,
     0x1.0f2b6ap-124f, 0x1.cb8f6cp-55f, 0x1.e4974p-8f, 0x1.e79684p-122f,
     0x1.8423bep-83f, 0.0f, 0x1.cc6508p-57f, 0.0f, 0.0f, 0.0f, 0x1.20da44p-49f, 0.0f,
     0.0f, 0x1.4ed1bap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5917ap-7f, 0.0f, 0.0f,
     0x1.b4c424p-119f, 0x1.e679dcp-76f, 0x1.06116ep-52f, 0x1.0897cp-86f,
     0x1.b1cf92p-111f, 0x1.dc1ff4p-113f, 0.0f, 0.0f, 0x1.373a14p-13f, 0x1.fc485p-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b4ecap-122f, 0.0f, 0x1.e69076p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73806p-17f, 0x1.697ce2p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c6a48p-60f, 0x1.f9781ap-65f, 0.0f, 0.0f, 0x1.e4cc2cp-21f,
     0x1.cbf53ep-38f, 0.0f, 0x1.061256p-61f, 0x1.e0dc16p-66f, 0.0f, 0x1.2517eep-36f,
     0.0f, 0.0f, 0x1.28f46ap-2f, 0x1.855176p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2d76ap-34f, 0x1.c5cb94p-14f, 0x1.248736p-52f, 0.0f, 0.0f, 0x1.de6acep-90f,
     0x1.00f4ecp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d50146p-14f, 0x1.1653c4p-1f,
     0x1.2ae662p-86f, 0x1.8b883p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2527d2p-64f, 0.0f,
     0x1.33b7eap-110f, 0x1.0ceeb8p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43b20ep-93f,
     0.0f, 0x1.9352bcp-126f
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
            tmp1 = Sleef_finz_erfcf1_u15purecfma(tmp0);
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
    printf("Sleef_finz_erfcf1_u15purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erfcf1_u15purecfma bench acc %a\n", global_bench_acc);
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
