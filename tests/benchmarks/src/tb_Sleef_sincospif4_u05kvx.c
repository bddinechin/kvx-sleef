/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif4_u05kvx.c --function Sleef_sincospif4_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x4_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x4_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.084258p-16f, 0x1p0f, 0x1.a57dfep-28f, 0.0f, 0.0f, 0.0f, 0x1.984a6ep-25f,
     0.0f, 0x1.fbb8e8p-2f, 0.0f, 0x1.d5a42ap-26f, 0.0f, 0.0f, 0x1.3af476p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.88f364p-94f, 0.0f, 0x1.fab1aep-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.309422p-11f, 0.0f, 0x1.7a28a2p-80f, 0.0f, 0x1.f7b30ap-55f,
     0.0f, 0x1.394742p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa8a0cp-94f, 0.0f,
     0x1.7a473p-101f, 0x1.982048p-79f, 0x1.5d1ffp-65f, 0x1.6cc99cp-114f,
     0x1.cecd66p-118f, 0x1.1922eap-111f, 0x1.421adap-16f, 0.0f, 0x1.6a5214p-108f,
     0x1.471224p-82f, 0.0f, 0x1.51c71p-74f, 0x1.5cc33cp-78f, 0.0f, 0.0f,
     0x1.21febcp-86f, 0.0f, 0x1.8b72f2p-95f, 0.0f, 0.0f, 0.0f, 0x1.8e10f6p-107f, 0.0f,
     0x1.3ebe08p-78f, 0.0f, 0x1.87c5f2p-64f, 0x1.c5b8bcp-124f, 0x1.74bdc6p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.58e608p-53f, 0x1.55f14cp-95f, 0x1.725234p-78f, 0.0f,
     0x1.7012ap-54f, 0.0f, 0x1.7e0756p-47f, 0x1.d3485cp-38f, 0x1.130116p-31f,
     0x1.fe4bbcp-111f, 0x1.b8ec48p-27f, 0.0f, 0x1.679994p-40f, 0x1.b48d78p-69f, 0.0f,
     0.0f, 0.0f, 0x1.76f3bcp-71f, 0x1.9b6a66p-25f, 0.0f, 0.0f, 0x1.52d798p-48f,
     0x1.faf03ep-49f, 0x1.f071e4p-122f, 0.0f, 0.0f, 0x1.163e1ap-111f,
     0x1.d3e0dcp-109f, 0x1.8aa742p-100f, 0x1.7924eap-117f, 0.0f, 0.0f,
     0x1.26a038p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0532ep-105f, 0x1.8f51ccp-29f,
     0x1.b12d1p-75f, 0x1.ea6442p-91f, 0x1.283e28p-87f, 0.0f, 0x1.55b266p-80f, 0.0f,
     0x1.2c377cp-19f, 0.0f, 0x1.93d3e6p-96f, 0.0f, 0.0f, 0.0f, 0x1.da8cbcp-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab6db8p-92f, 0x1.964012p-17f, 0x1.a45738p-49f,
     0x1.0bdaf8p-60f, 0.0f, 0.0f, 0x1.64caecp-1f, 0.0f, 0.0f, 0x1.21e888p-4f,
     0x1.59dd9p-124f, 0x1.91a468p-65f, 0x1.d3aa94p-46f, 0.0f, 0x1.bb6426p-114f,
     0x1.db2edp-65f, 0.0f, 0x1.5d6eecp-44f, 0x1.f73b62p-105f, 0x1.8085eap-7f,
     0x1.e4632ep-120f, 0x1.fc5812p-31f, 0x1.81fe56p-48f, 0.0f, 0.0f, 0.0f,
     0x1.58783ap-50f, 0x1.48b822p-28f, 0.0f, 0x1.0b8866p-72f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.83f24cp-53f, 0x1.df633ep-106f, 0.0f, 0x1.3f0528p-30f,
     0x1.11fc12p-88f, 0x1.9cc454p-8f, 0x1.723e24p-86f, 0.0f, 0x1.de0f54p-41f, 0.0f,
     0.0f, 0.0f, 0x1.4bd836p-108f, 0.0f, 0.0f, 0x1.132216p-19f, 0.0f,
     0x1.a7b832p-124f, 0.0f, 0x1.d365c6p-90f, 0x1.7ef184p-124f, 0.0f, 0.0f,
     0x1.722192p-51f, 0x1.63a55ep-12f, 0.0f, 0x1.79f82p-50f, 0.0f, 0x1.e1698ap-23f,
     0x1.2df26p-106f, 0x1.70ebccp-61f, 0.0f, 0x1.28e5e6p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c543c2p-108f, 0.0f, 0x1.3e09dcp-104f, 0x1.c36428p-124f, 0.0f, 0x1.f6cbfcp-4f,
     0x1.fb0b0ep-8f, 0.0f, 0x1.442fp-46f, 0.0f, 0x1.215a4ap-111f, 0x1.3d208ap-112f,
     0x1.fb8d42p-1f, 0x1.0b1de4p-123f, 0x1.d7b506p-123f, 0.0f, 0.0f, 0.0f,
     0x1.faafacp-98f, 0x1.3182ap-104f, 0.0f, 0x1.faebe4p-9f, 0.0f, 0.0f, 0.0f,
     0x1.f655bep-7f, 0x1.a1f2f2p-39f, 0x1.082c92p-16f, 0.0f, 0.0f, 0x1.b52f88p-44f,
     0.0f, 0.0f, 0.0f, 0x1.fe473cp-47f, 0x1.d9effcp-39f, 0x1.262cdcp-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9939cp-88f, 0x1.aff5e4p-30f, 0x1.f3601p-109f,
     0x1.5bcae6p-18f, 0.0f, 0.0f, 0x1.5e152p-109f, 0x1.80c53cp-10f, 0.0f,
     0x1.05ec3p-115f, 0.0f, 0x1.05f77p-123f, 0x1.36e01ap-36f, 0x1.170052p-112f,
     0x1.f3fc0cp-13f, 0.0f, 0.0f, 0x1.391c8ap-48f, 0x1.533b38p-32f, 0x1.ff73e6p-119f,
     0.0f, 0x1.c20c4cp-29f, 0x1.d0feaep-4f, 0x1.cdf7a8p-69f, 0x1.27d4aep-116f, 0.0f,
     0x1.e68a92p-51f, 0x1.40e74ep-43f, 0x1.be5a0cp-35f, 0x1.7c7166p-21f,
     0x1.bb4964p-2f, 0x1.839bdap-94f, 0x1.43fccap-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9be56p-101f, 0.0f, 0x1.5e2dep-118f, 0.0f, 0x1.cecdc2p-8f, 0.0f, 0.0f,
     0x1.07eea4p-30f, 0.0f, 0.0f, 0.0f, 0x1.2a1d48p-9f, 0x1.47ce24p-73f, 0.0f,
     0x1.8ffb1ep-93f, 0x1.9954b2p-113f, 0.0f, 0x1.64a2c6p-88f, 0.0f, 0.0f, 0.0f,
     0x1.3cc5d8p-88f, 0.0f, 0.0f, 0x1.69a5cap-43f, 0.0f, 0.0f, 0x1.356392p-39f,
     0x1.ff0366p-68f, 0.0f, 0x1.32707ep-97f, 0x1.63b3d6p-91f, 0x1.df12dep-124f, 0.0f,
     0.0f, 0x1.e57cc8p-73f, 0.0f, 0x1.fa9cc2p-14f, 0.0f, 0x1.89a056p-13f, 0.0f, 0.0f,
     0.0f, 0x1.fe7e8p-22f, 0.0f, 0x1.29394ap-14f, 0.0f, 0.0f, 0x1.6b531cp-26f,
     0x1.a82f88p-73f, 0x1.0382d6p-5f, 0x1.8c1b4p-109f, 0x1.fac07ap-41f,
     0x1.8cd24p-94f, 0.0f, 0x1.eb7ee2p-107f, 0.0f, 0x1.8029ecp-22f, 0x1.a5fca6p-111f,
     0x1.c91a0ap-95f, 0.0f, 0x1.85116ep-48f, 0x1.a22cccp-74f, 0x1.542d2p-93f, 0.0f,
     0.0f, 0x1.5bd01cp-75f, 0x1.b1df18p-120f, 0.0f, 0.0f, 0x1.d3729ap-45f, 0.0f, 0.0f,
     0x1.87d1p-14f, 0x1.624fecp-75f, 0.0f, 0.0f, 0.0f, 0x1.72f966p-110f,
     0x1.00c01ep-87f, 0.0f, 0.0f, 0x1.57a942p-25f, 0x1.55d59cp-45f, 0x1.9385f4p-34f,
     0x1.5f1362p-21f, 0.0f, 0x1.2b479cp-80f, 0.0f, 0.0f, 0x1.0fbe7cp-11f,
     0x1.8a8fe2p-81f, 0x1.200c84p-63f, 0x1.ab59bcp-33f, 0.0f, 0x1.f4fbd8p-31f,
     0x1.07ab38p-38f, 0x1.e62da2p-42f, 0x1.2a4e92p-5f, 0x1.7953eap-44f, 0.0f, 0.0f,
     0x1.74ae96p-39f, 0.0f, 0x1.0576d4p-32f, 0.0f, 0.0f, 0x1.c3653ap-43f, 0.0f, 0.0f,
     0.0f, 0x1.90deeep-46f, 0.0f, 0.0f, 0x1.3034c2p-103f, 0x1.4f96a6p-107f, 0.0f,
     0.0f, 0.0f, 0x1.7d9406p-17f, 0x1.82126ep-114f, 0.0f, 0x1.3a9afap-108f, 0.0f,
     0x1.c69002p-98f, 0x1.c3dbfcp-73f, 0x1.f52b2cp-86f, 0.0f, 0.0f, 0x1.9958d8p-55f,
     0x1.bc4fcap-67f, 0x1.0f6fd6p-51f, 0x1.66a9d2p-30f, 0x1.2b96c6p-72f, 0.0f, 0.0f,
     0x1.34a266p-19f, 0x1.3b2a9p-53f, 0x1.60c99p-23f, 0x1.f627f6p-10f, 0.0f, 0.0f,
     0x1.118c6cp-41f, 0x1.6f43d6p-109f, 0.0f, 0.0f, 0.0f, 0x1.3c1ebap-64f,
     0x1.502c92p-94f, 0x1.1b5a2cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3088fcp-42f,
     0x1.5764dcp-43f, 0.0f, 0.0f, 0x1.c92d56p-89f, 0.0f, 0.0f, 0x1.db4ca8p-121f, 0.0f,
     0.0f, 0.0f, 0x1.1cf176p-93f, 0.0f, 0x1.3e6f9cp-110f, 0x1.4a87b8p-95f,
     0x1.fa4b2p-81f, 0x1.e4daf4p-123f, 0x1p0f, 0.0f, 0x1.515252p-95f, 0.0f,
     0x1.38631ep-32f, 0.0f, 0.0f, 0x1.7deff6p-104f, 0.0f, 0.0f, 0x1.c29d5p-57f, 0.0f,
     0.0f, 0x1.6846e4p-26f, 0.0f, 0x1.04aa86p-122f, 0x1.a53808p-36f, 0x1.2d3d2ap-23f,
     0x1.0e19cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63e614p-26f,
     0x1.6137bp-19f, 0.0f, 0x1.aec368p-100f, 0x1.a314dep-23f, 0.0f, 0x1.95ae52p-27f,
     0.0f, 0x1.162a34p-111f, 0x1.10944cp-76f, 0x1.72646ap-31f, 0.0f, 0x1.2a6b08p-74f,
     0.0f, 0x1.bbcd5p-120f, 0x1.d32348p-8f, 0x1.f68c4p-27f, 0.0f, 0.0f, 0.0f,
     0x1.2beb56p-91f, 0x1.108f0ep-65f, 0.0f, 0.0f, 0x1.4c1554p-72f, 0x1.925616p-23f,
     0.0f, 0x1.43c968p-22f, 0x1.1d6b78p-93f, 0x1.c91a8ep-125f, 0.0f, 0x1.b3c3e4p-10f,
     0.0f, 0x1.60aafap-52f, 0x1.78f0f4p-6f, 0x1.ba1696p-116f, 0x1.e9b772p-40f,
     0x1.4af366p-44f, 0.0f, 0.0f, 0.0f, 0x1.73e0a4p-103f, 0.0f, 0.0f, 0x1.278e6p-104f,
     0x1.033c4ap-78f, 0x1.d58142p-49f, 0.0f, 0x1.16f316p-95f, 0.0f, 0x1.2eeeb6p-18f,
     0x1.c8dde8p-2f, 0x1.9903b6p-86f, 0.0f, 0.0f, 0.0f, 0x1.71ac64p-65f,
     0x1.98b3e8p-43f, 0.0f, 0x1.e97a9ap-93f, 0.0f, 0x1.303db6p-107f, 0x1.04acbap-99f,
     0.0f, 0.0f, 0x1.a22feap-37f, 0.0f, 0.0f, 0.0f, 0x1.f0dd1ep-11f, 0x1.03903ap-94f,
     0.0f, 0.0f, 0x1.d74c1ap-38f, 0x1.f04fd4p-64f, 0.0f, 0x1.aeb664p-96f,
     0x1.394c5ap-3f, 0x1.d672f8p-27f, 0.0f, 0.0f, 0x1.969828p-71f, 0.0f,
     0x1.7b4906p-38f, 0.0f, 0.0f, 0.0f, 0x1.c90954p-63f, 0x1.4a9d5cp-68f, 0.0f,
     0x1.2228c2p-54f, 0x1.80558cp-89f, 0x1.299c7p-116f, 0.0f, 0x1.4f4e1p-100f,
     0x1.563b7ap-42f, 0x1.c82b9cp-70f, 0x1.84a3ep-38f, 0x1.8fe7d8p-122f, 0.0f,
     0x1.766da2p-30f, 0x1.3217fcp-10f, 0x1.d043e8p-45f, 0.0f, 0x1.5179c4p-18f,
     0x1.d317c2p-2f, 0.0f, 0.0f, 0x1.d16b56p-69f, 0x1.6b74e2p-74f, 0.0f, 0.0f,
     0x1.4a8592p-121f, 0x1.ac8b26p-47f, 0.0f, 0.0f, 0x1.709a06p-61f, 0.0f,
     0x1.7e082cp-17f, 0.0f, 0x1.800a8p-20f, 0x1.d867e6p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17e87cp-52f, 0.0f, 0x1.5764a6p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f0a74p-13f,
     0x1.307084p-91f, 0x1.f24ef6p-6f, 0x1.ac2bc6p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b038ap-76f, 0x1.655ce6p-30f, 0x1.73475ep-57f, 0.0f, 0.0f, 0x1.9f3f1p-123f,
     0.0f, 0.0f, 0x1.35ddc8p-23f, 0.0f, 0x1.d362eap-29f, 0.0f, 0x1.a1eabep-28f,
     0x1.c4e796p-15f, 0.0f, 0x1.815d06p-39f, 0x1.49f19ep-1f, 0x1.883ee8p-92f,
     0x1.9f5318p-92f, 0x1.f8a478p-49f, 0.0f, 0.0f, 0x1.735a5ap-89f, 0.0f,
     0x1.f303b8p-85f, 0x1.03c3ap-28f, 0x1.f76688p-74f, 0x1.3b0418p-77f, 0.0f, 0.0f,
     0x1.8603d4p-75f, 0x1.97cb02p-120f, 0x1p0f, 0.0f, 0x1.fe7144p-51f,
     0x1.018304p-115f, 0.0f, 0x1.35681ep-38f, 0.0f, 0.0f, 0x1.ca7ed8p-77f, 0.0f,
     0x1.18fe66p-29f, 0x1.eaa284p-67f, 0x1.36a92ap-79f, 0x1.f4cdecp-31f, 0.0f,
     0x1.1cb1d2p-118f, 0.0f, 0x1.06117p-107f, 0.0f, 0x1.6f4e1cp-88f, 0.0f,
     0x1.5f3326p-111f, 0x1.996b22p-25f, 0.0f, 0x1.2acaaap-50f, 0x1.0b8c4ep-12f, 0.0f,
     0.0f, 0.0f, 0x1.101b12p-51f, 0.0f, 0.0f, 0.0f, 0x1.1c861p-13f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d81c48p-1f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.788686p-29f, 0x1.5b5aaep-11f, 0x1.71ef66p-55f, 0x1.7c2d42p-84f,
     0x1.fbde6ep-27f, 0.0f, 0x1.8a3d58p-41f, 0x1.1224d6p-6f, 0.0f, 0.0f, 0.0f,
     0x1.27d31ap-24f, 0x1.c6aebep-3f, 0.0f, 0.0f, 0x1.b26004p-66f, 0.0f,
     0x1.96cfc2p-72f, 0x1.971faep-62f, 0x1.6e4522p-106f, 0x1.9504fcp-7f, 0.0f,
     0x1.b54a6cp-84f, 0x1.cd38a2p-1f, 0x1.193796p-116f, 0.0f, 0x1.e0283ep-55f,
     0x1.4a7594p-89f, 0.0f, 0x1.ddc9eap-29f, 0x1.24798p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3fecep-120f, 0x1.c8aa92p-34f, 0x1.77db62p-18f, 0x1.4d67b4p-106f, 0.0f, 0.0f,
     0x1.7ad20cp-4f, 0x1.286b2p-13f, 0x1.e0455cp-85f, 0.0f, 0x1.c518f4p-102f, 0.0f,
     0.0f, 0x1.2ba032p-1f, 0x1.cdca74p-20f, 0.0f, 0.0f, 0x1.76e014p-40f, 0.0f,
     0x1.f419d2p-27f, 0.0f, 0x1.9795d8p-3f, 0x1.8630d4p-61f, 0.0f, 0x1.7527ap-81f,
     0x1.30491p-100f, 0.0f, 0x1.ccbfeap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c296cep-14f, 0.0f, 0.0f, 0x1.9f56p-51f, 0.0f, 0x1.3d01d8p-97f, 0.0f,
     0x1.0ed152p-74f, 0x1.ca0f76p-23f, 0x1.4e46fep-123f, 0.0f, 0.0f, 0.0f,
     0x1.137ee8p-57f, 0.0f, 0x1.01daa8p-116f, 0x1.8a7898p-42f, 0x1.36c5f4p-85f,
     0x1.01177ap-46f, 0.0f, 0x1.b09246p-94f, 0.0f, 0x1.20da5p-51f, 0.0f,
     0x1.c544e2p-81f, 0x1.b49364p-69f, 0x1.d64082p-37f, 0.0f, 0x1.0d439ap-9f,
     0x1.c8b0a6p-111f, 0.0f, 0.0f, 0x1.5c159p-53f, 0.0f, 0x1.f28324p-50f, 0.0f,
     0x1.30889ap-46f, 0x1.c33516p-52f, 0.0f, 0x1.0d370cp-117f, 0x1.33f77ap-94f,
     0x1.bd8794p-75f, 0.0f, 0x1.6db818p-7f, 0x1.6789f2p-8f, 0x1.2aaf92p-100f,
     0x1.f498e2p-118f, 0.0f, 0x1.16615ep-5f, 0.0f, 0.0f, 0.0f, 0x1.9d602p-74f,
     0x1.0ed74p-110f, 0x1.693d0ep-91f, 0.0f, 0.0f, 0x1.ddb69ep-58f, 0x1.609528p-34f,
     0x1.b6ea12p-34f, 0x1.d60f18p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ac04p-59f,
     0x1.ddd19ep-100f, 0.0f, 0x1.1d10f6p-51f, 0x1.680ab4p-44f, 0x1.d8d71cp-104f, 0.0f,
     0x1.f4215cp-113f, 0.0f, 0x1.ff85dep-36f, 0x1.89542ap-64f, 0.0f, 0.0f,
     0x1.3d957ep-123f, 0.0f, 0x1.4341d4p-78f, 0x1.babf68p-101f, 0x1.db3628p-36f,
     0x1.8edc88p-48f, 0.0f, 0.0f, 0x1.eed8acp-100f, 0x1.34e2bcp-59f, 0x1.a746f6p-97f,
     0x1.b8d16ep-25f, 0x1.887026p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.336d6ap-30f, 0.0f,
     0x1.5bbecp-79f, 0x1.5d5b54p-12f, 0.0f, 0.0f, 0x1.d8a76cp-12f, 0x1.e25e7ep-46f,
     0x1.c3325p-101f, 0.0f, 0x1.71a722p-40f, 0x1.587bb4p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9ee72p-103f, 0x1.8164eep-86f, 0.0f, 0.0f, 0.0f, 0x1.71ff8p-34f,
     0x1.d3c266p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2ba4cp-25f, 0x1.adf8f6p-60f, 0.0f,
     0.0f, 0.0f, 0x1.604e3ap-19f, 0.0f, 0x1.ee4406p-98f, 0x1.ec3408p-47f,
     0x1.42c87ep-21f, 0.0f, 0.0f, 0x1.17bccep-118f, 0x1.580636p-91f, 0x1.f2ef84p-36f,
     0x1.0c916p-72f, 0x1.d5603ap-20f, 0x1.163a1ap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5259dcp-75f, 0x1.f7240ep-16f, 0.0f, 0x1.a8e57p-92f,
     0x1.63602ep-102f, 0x1.5dafe8p-113f, 0.0f, 0x1.8eb8b4p-58f, 0.0f,
     0x1.94ba34p-103f, 0.0f, 0x1.21514cp-44f, 0x1.a1d76cp-51f, 0x1.bd415cp-104f, 0.0f,
     0x1.71a96ep-59f, 0x1.955a04p-50f, 0.0f, 0x1.bb379cp-53f, 0x1.d8ce3cp-40f,
     0x1.ee6c4p-59f, 0x1.9aeb38p-92f, 0.0f, 0x1.7a836ep-4f, 0x1.590512p-98f, 0.0f,
     0.0f, 0x1.780b48p-68f, 0x1.5499b2p-100f, 0x1.6ff384p-117f, 0x1.9026d4p-65f, 0.0f,
     0.0f, 0x1.7575ap-56f, 0.0f, 0x1.4e5c3ep-74f, 0.0f, 0.0f, 0.0f, 0x1.f08f54p-92f,
     0x1.67b6aep-61f, 0.0f, 0.0f, 0.0f, 0x1.5c1692p-28f, 0.0f, 0.0f, 0.0f,
     0x1.b3aacap-93f, 0.0f, 0.0f, 0.0f, 0x1.36547ep-20f, 0x1.f2a316p-12f,
     0x1.52ee96p-83f, 0x1.871b7cp-115f, 0x1.75ea46p-62f, 0.0f, 0x1.e2bc14p-9f, 0.0f,
     0.0f, 0x1.0a2378p-80f, 0x1.201c4ep-73f, 0.0f, 0.0f, 0x1.687faap-68f, 0.0f,
     0x1.276e3cp-27f, 0x1.7b69bcp-95f, 0.0f, 0x1.f4f3c2p-63f, 0x1.e8b272p-73f, 0.0f,
     0x1.ea7256p-110f, 0.0f, 0.0f, 0x1.8843d8p-53f, 0.0f, 0x1.9952b4p-36f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b5578ap-75f, 0.0f, 0.0f, 0x1.368a5p-122f, 0x1.4c057ap-83f,
     0x1.809d7cp-107f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x4_t_2 global_bench_acc;
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
        Sleef_float32x4_t_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef_float32x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef_float32x4_t_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef_float32x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospif4_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincospif4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincospif4_u05kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
