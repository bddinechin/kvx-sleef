/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif1_u35purecfma.c --function \
 *     Sleef_finz_sincospif1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.2231c2p-6f, 0x1.aba00cp-71f, 0.0f, 0x1.4ac9f4p-111f, 0x1.ff5858p-104f,
     0.0f, 0.0f, 0x1.4e8abp-58f, 0.0f, 0x1.bb038p-55f, 0.0f, 0x1.fa0164p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8506dp-125f, 0.0f, 0x1.ba5022p-64f, 0x1.359bb8p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.790f54p-95f, 0.0f, 0x1.cf0006p-94f, 0.0f, 0x1.aac302p-109f,
     0.0f, 0.0f, 0.0f, 0x1.4fe452p-62f, 0x1.803804p-25f, 0.0f, 0x1.1f9354p-23f,
     0x1.b8b4b8p-57f, 0x1.7454cep-70f, 0.0f, 0.0f, 0.0f, 0x1.3bc8a8p-73f,
     0x1.388214p-30f, 0.0f, 0.0f, 0.0f, 0x1.4fea76p-83f, 0.0f, 0x1.af5d22p-11f,
     0x1.a0be1cp-53f, 0x1.8b1098p-76f, 0.0f, 0x1.e685d4p-1f, 0x1.facf7ep-23f,
     0x1.9ce42cp-66f, 0.0f, 0x1.e170dp-50f, 0.0f, 0.0f, 0x1.5ae2c8p-112f, 0.0f,
     0x1.9e8af6p-25f, 0.0f, 0x1.503d4ap-65f, 0.0f, 0.0f, 0.0f, 0x1.bc3fdap-37f, 0.0f,
     0.0f, 0.0f, 0x1.ca636cp-66f, 0x1.bacc0cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52a93ap-117f, 0x1.c1c964p-21f, 0.0f, 0.0f, 0x1.a84586p-22f, 0.0f,
     0x1.afd08p-93f, 0.0f, 0.0f, 0x1.f2756cp-78f, 0x1.deadeap-114f, 0x1.1e977ap-35f,
     0x1.134664p-6f, 0x1.6a325cp-107f, 0.0f, 0x1.e38586p-79f, 0.0f, 0x1.a108c2p-87f,
     0.0f, 0x1.3b864cp-27f, 0x1.f3aa28p-40f, 0.0f, 0x1.a3d802p-111f, 0x1.3243aep-50f,
     0x1.97bfa2p-41f, 0.0f, 0x1.85ed7ap-2f, 0.0f, 0.0f, 0x1.d59022p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.472cb4p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a048a4p-83f, 0.0f,
     0.0f, 0x1.593d34p-32f, 0.0f, 0x1.7aaa32p-7f, 0x1.d6e9fap-10f, 0.0f, 0.0f,
     0x1.b30c98p-67f, 0x1.b38c6ap-99f, 0x1.e8d96p-88f, 0x1.81e59ap-82f,
     0x1.41df68p-31f, 0x1.6f9718p-90f, 0x1.865f8ep-99f, 0x1.50218ap-21f,
     0x1.37f738p-43f, 0x1.92ab9ap-44f, 0.0f, 0x1.acdcd8p-58f, 0x1.38c13p-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.006a0ap-7f,
     0x1.8df636p-122f, 0.0f, 0x1.673986p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f7f6p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62da4ap-112f, 0.0f, 0x1.2aa76ep-42f,
     0x1.f280dap-3f, 0x1.1153bap-48f, 0x1.3d9a3ep-5f, 0.0f, 0x1.5b9bbap-120f, 0.0f,
     0.0f, 0.0f, 0x1.83d5cp-22f, 0.0f, 0x1.3e0bp-114f, 0x1.2c4ce2p-39f,
     0x1.9dbc38p-7f, 0.0f, 0x1.4c6eeep-90f, 0.0f, 0x1.dc48ap-64f, 0x1.96e61p-80f,
     0.0f, 0x1.b29cdp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89fc62p-96f, 0.0f,
     0x1.325426p-19f, 0.0f, 0.0f, 0x1.0c4646p-62f, 0x1.872beep-36f, 0.0f,
     0x1.ebdf9p-124f, 0x1.ef6482p-36f, 0x1.6bbf84p-118f, 0x1.33135ap-81f, 0.0f,
     0x1.d0054ep-60f, 0x1.939ccap-68f, 0x1.c5c9a6p-2f, 0.0f, 0x1p0f, 0x1.38e7cp-44f,
     0.0f, 0x1.cb967p-62f, 0x1.bb382ap-105f, 0x1.da3b6ep-24f, 0x1.105b5ap-22f,
     0x1.d88f78p-66f, 0x1.3afe52p-118f, 0.0f, 0x1.2c4db2p-111f, 0.0f, 0.0f,
     0x1.1ef52ap-10f, 0.0f, 0x1.ee048ep-56f, 0.0f, 0.0f, 0.0f, 0x1.fa5d02p-77f, 0.0f,
     0.0f, 0.0f, 0x1.e4aefep-31f, 0.0f, 0.0f, 0x1.0f2ff4p-49f, 0.0f, 0.0f,
     0x1.f77068p-14f, 0x1.c5d178p-51f, 0x1.395c16p-26f, 0.0f, 0.0f, 0.0f,
     0x1.8e9506p-88f, 0x1.52b118p-22f, 0.0f, 0.0f, 0x1.6bf03p-2f, 0x1.52a71p-106f,
     0.0f, 0x1.1694e4p-98f, 0.0f, 0.0f, 0.0f, 0x1.07dcd6p-36f, 0.0f, 0.0f,
     0x1.426c3cp-14f, 0.0f, 0x1.a89f3ap-111f, 0x1.1f12ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.9f5186p-10f, 0.0f, 0.0f, 0x1.325bbcp-27f, 0.0f, 0x1.0c7eecp-91f,
     0x1.8dfc9cp-74f, 0x1.19f62ep-84f, 0.0f, 0x1.8e4624p-100f, 0.0f, 0x1.ab48cap-7f,
     0x1.6c1a24p-39f, 0.0f, 0x1.58c714p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d6b9p-78f,
     0x1.2b3d5ep-79f, 0.0f, 0x1.84d6a6p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe77e2p-97f, 0.0f, 0x1p0f, 0.0f, 0x1.7b59d4p-123f, 0x1.b62f92p-53f,
     0x1.e14f28p-48f, 0x1.35eda8p-1f, 0x1.b3bdd2p-75f, 0x1.419a74p-124f,
     0x1.09d594p-96f, 0x1.7faa3p-38f, 0x1.9d5da4p-81f, 0x1.d773cap-87f, 0.0f,
     0x1.7bf2c4p-121f, 0.0f, 0x1.5ae5dep-25f, 0.0f, 0.0f, 0x1.d694bep-22f, 0.0f,
     0x1.9e6088p-122f, 0x1.f9c7bp-111f, 0.0f, 0x1.db7acap-14f, 0x1.989dccp-78f,
     0x1.379a4cp-85f, 0x1.ef5cfep-77f, 0.0f, 0.0f, 0x1.c4d72p-113f, 0.0f, 0.0f, 0.0f,
     0x1.6e50c8p-47f, 0.0f, 0x1.206126p-69f, 0x1.4c3ddp-23f, 0x1.6e3a08p-48f, 0.0f,
     0.0f, 0.0f, 0x1.66ff5p-110f, 0x1.109d64p-21f, 0x1.04ad7cp-121f, 0x1.5eb6acp-37f,
     0x1.220886p-72f, 0x1.ef54bcp-80f, 0x1.1d0ccep-101f, 0x1.a9f85ep-3f,
     0x1.bbdd3ap-23f, 0x1.ed0d76p-124f, 0x1.d63ecap-34f, 0x1.2ba14p-2f, 0.0f,
     0x1.37af7p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.407298p-80f, 0x1.4a637cp-27f,
     0x1.191962p-45f, 0.0f, 0x1.90bf8p-18f, 0x1.ef98aep-32f, 0x1.d8c87ep-66f, 0.0f,
     0x1.a1a30ap-58f, 0.0f, 0x1.5ad59ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2ee04p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.716a4ap-8f, 0.0f,
     0x1.cd53dep-65f, 0x1.df6edcp-82f, 0x1.a0df24p-33f, 0x1.a8c412p-126f,
     0x1.3553eep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31b7e6p-40f, 0x1.2415cep-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b53f8ap-76f, 0x1.9b9ebap-94f, 0x1.32a8a4p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9149b2p-23f, 0.0f, 0x1.813c54p-83f,
     0x1.88727cp-20f, 0x1.980daep-43f, 0x1.b355bap-83f, 0x1.f3baecp-18f, 0.0f,
     0x1.8dead4p-33f, 0x1.8645eep-27f, 0x1.356694p-44f, 0.0f, 0.0f, 0x1.fa7a54p-25f,
     0x1.83a02cp-98f, 0.0f, 0.0f, 0x1.79020ep-75f, 0.0f, 0.0f, 0x1.8aea28p-99f,
     0x1.28db5ap-72f, 0x1.452712p-25f, 0x1.ed0fbep-121f, 0x1.15a016p-36f,
     0x1.7d3f02p-54f, 0.0f, 0.0f, 0x1.ff08dp-91f, 0x1.a0a21cp-82f, 0x1.5bc07cp-81f,
     0.0f, 0x1.bcb9p-77f, 0.0f, 0x1.7b6778p-40f, 0x1.de8e56p-22f, 0.0f,
     0x1.3e4ec6p-104f, 0.0f, 0x1.13a304p-38f, 0x1.0498cap-76f, 0x1.7cc5e2p-64f,
     0x1.69805cp-79f, 0x1.fc10ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce2fa2p-61f, 0.0f,
     0x1.1f94fap-23f, 0x1.c856dep-56f, 0x1.542a34p-111f, 0x1.368d04p-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8552cp-42f, 0x1.3db1f6p-78f, 0x1.88917cp-125f, 0.0f,
     0.0f, 0x1.2b751ap-102f, 0.0f, 0x1.e289ecp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7f54c4p-5f, 0x1.c0a6c8p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4def5p-122f, 0x1.7f4322p-24f, 0x1.f49b76p-73f, 0.0f, 0.0f, 0.0f,
     0x1.340bd4p-113f, 0.0f, 0x1.8713b6p-44f, 0.0f, 0x1.4086a4p-116f, 0x1.1f3aeap-12f,
     0x1.6b6bfcp-88f, 0x1.142fep-10f, 0.0f, 0x1.9dbe14p-80f, 0.0f, 0.0f, 0.0f,
     0x1.11b5dp-72f, 0x1.162984p-5f, 0x1.47fc3ap-10f, 0x1.8fe88ap-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.23d5d8p-37f, 0.0f, 0x1.8005b4p-1f, 0.0f, 0x1.9c31bp-61f, 0.0f,
     0.0f, 0x1.078ec4p-62f, 0.0f, 0.0f, 0x1.74b93cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.916a3ap-17f, 0x1.0e9c4p-5f, 0x1.69288ap-112f, 0x1.61a63p-3f, 0.0f,
     0.0f, 0.0f, 0x1.033536p-79f, 0.0f, 0.0f, 0x1.e08122p-61f, 0.0f, 0x1.d19e96p-90f,
     0x1.a99a2cp-90f, 0.0f, 0.0f, 0.0f, 0x1.ce8b0cp-29f, 0.0f, 0x1.1b11d8p-79f, 0.0f,
     0x1.075c5cp-7f, 0x1.e88038p-52f, 0.0f, 0.0f, 0.0f, 0x1.6a2042p-7f, 0.0f, 0.0f,
     0.0f, 0x1.506262p-94f, 0x1.0ad90cp-31f, 0.0f, 0.0f, 0x1.fde09ep-60f, 0.0f, 0.0f,
     0.0f, 0x1.b70b6p-64f, 0x1.aec744p-107f, 0x1.30d57ep-62f, 0x1.6636b2p-120f,
     0x1.e57c38p-123f, 0.0f, 0x1.9e3fa2p-105f, 0.0f, 0.0f, 0.0f, 0x1.6f519cp-3f,
     0x1.61edcap-80f, 0.0f, 0.0f, 0.0f, 0x1.de759cp-75f, 0x1.23e884p-40f,
     0x1.6936dcp-113f, 0x1.8baf96p-121f, 0x1.c8c33p-112f, 0.0f, 0.0f, 0.0f,
     0x1.040c32p-35f, 0.0f, 0.0f, 0.0f, 0x1.72c152p-27f, 0x1.77b8eep-10f,
     0x1.3f8962p-111f, 0x1.411816p-70f, 0.0f, 0x1.10a9c8p-84f, 0.0f, 0.0f,
     0x1.52415p-123f, 0.0f, 0.0f, 0x1.fc73p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e2372p-45f, 0x1.78d614p-60f, 0.0f, 0.0f, 0x1.1d554cp-73f, 0x1.d27002p-91f,
     0.0f, 0.0f, 0x1.7febf8p-75f, 0.0f, 0x1.c98b9ap-46f, 0.0f, 0x1.6520cep-87f, 0.0f,
     0x1.d0d16p-48f, 0x1.281ff6p-34f, 0x1.4700aep-3f, 0.0f, 0x1.2ded14p-86f, 0.0f,
     0.0f, 0x1.6af934p-11f, 0x1.8da85p-88f, 0.0f, 0.0f, 0x1.824ccp-119f, 0.0f,
     0x1.0d3454p-9f, 0x1.037feep-53f, 0x1.b50206p-61f, 0.0f, 0x1.3dc87ep-36f,
     0x1.ecf632p-27f, 0x1.08aed4p-11f, 0x1.2c917cp-95f, 0x1.bc3ecep-100f,
     0x1.453612p-99f, 0x1.54686ep-105f, 0.0f, 0x1.7540e6p-77f, 0x1.03098ap-43f,
     0x1.116a9ep-100f, 0x1.ed7fa8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b6e7ep-113f,
     0.0f, 0x1.7bb2e8p-32f, 0.0f, 0x1.352978p-9f, 0x1.d828b6p-120f, 0x1.119eb8p-68f,
     0x1.725958p-10f, 0.0f, 0.0f, 0x1.d6ad3cp-54f, 0.0f, 0x1.1b68fap-13f,
     0x1.12544ap-92f, 0x1.36768ep-36f, 0.0f, 0.0f, 0x1.3c43ep-2f, 0.0f,
     0x1.9ab36p-78f, 0.0f, 0x1.152dc8p-27f, 0x1.e4a422p-67f, 0.0f, 0x1.0d23b2p-17f,
     0.0f, 0.0f, 0x1.f4a0bcp-109f, 0x1.e2d3f4p-21f, 0.0f, 0.0f, 0x1.c2c256p-18f, 0.0f,
     0x1.70c878p-48f, 0x1.2eb5d2p-108f, 0x1.85f31ep-29f, 0x1.59f882p-71f, 0.0f,
     0x1.e11bfcp-51f, 0x1.dap-67f, 0.0f, 0x1.2a3e06p-89f, 0.0f, 0.0f, 0x1.b198aep-60f,
     0x1.090324p-41f, 0.0f, 0.0f, 0x1.418ce8p-48f, 0x1.528f74p-60f, 0.0f,
     0x1.3532e8p-106f, 0x1.7abfp-64f, 0x1.fe284p-67f, 0x1.77d22ep-109f, 0.0f,
     0x1.119148p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.808dc4p-86f, 0x1.d9656ep-71f,
     0x1.7e292p-101f, 0x1.d88ffcp-125f, 0.0f, 0.0f, 0x1.10e108p-38f, 0.0f, 0.0f,
     0x1.29eed6p-41f, 0x1.fed792p-90f, 0x1.2f71bep-20f, 0.0f, 0x1.e2e106p-68f, 0.0f,
     0x1.2d33e4p-37f, 0x1.fcdd34p-63f, 0.0f, 0.0f, 0x1.44dc5cp-73f, 0x1.a3d0fp-48f,
     0x1.04587p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2003ap-72f, 0.0f, 0.0f,
     0x1.1f19dep-96f, 0.0f, 0.0f, 0x1.20eb0ep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1908ap-94f, 0.0f, 0.0f, 0x1.f6040ep-114f, 0.0f, 0x1.1b3ed6p-34f, 0.0f, 0.0f,
     0.0f, 0x1.9a185cp-103f, 0x1.8c147cp-72f, 0x1.04ca52p-85f, 0.0f, 0x1.c5ebd4p-94f,
     0x1.9bc0a2p-36f, 0x1.f2eap-117f, 0.0f, 0x1.41e312p-13f, 0x1.628fap-22f, 0.0f,
     0.0f, 0.0f, 0x1.60536ap-114f, 0.0f, 0.0f, 0x1.6007f4p-49f, 0x1.ff1d4cp-55f,
     0x1.05183p-31f, 0x1.b0f108p-39f, 0.0f, 0x1.9b460ep-73f, 0x1.214e7cp-24f, 0.0f,
     0x1.13cfaap-52f, 0.0f, 0x1.412d6cp-10f, 0x1.029ee6p-68f, 0x1.ed36cap-102f, 0.0f,
     0x1.489918p-116f, 0x1.e2a544p-88f, 0.0f, 0.0f, 0x1.e5cdd4p-19f, 0x1.e6a33ap-58f,
     0x1.7b7a58p-71f, 0.0f, 0.0f, 0x1.ca81e6p-121f, 0.0f, 0.0f, 0x1.f5b37p-80f, 0.0f,
     0x1.32912ep-39f, 0x1.495f52p-96f, 0x1.a698ecp-37f, 0x1.e80a32p-47f,
     0x1.4aba64p-114f, 0.0f, 0x1.39448ep-91f, 0x1.98df4p-2f, 0.0f, 0.0f,
     0x1.11581ep-74f, 0x1.24d34p-35f, 0.0f, 0.0f, 0.0f, 0x1.e9c3bap-93f, 0.0f,
     0x1.2170c8p-103f, 0.0f, 0x1.bd7fcap-56f, 0x1.dfa22ap-67f, 0.0f, 0.0f, 0.0f,
     0x1.73187p-93f, 0.0f, 0.0f, 0x1.3f0308p-21f, 0x1.1adeeep-59f, 0x1.f8253cp-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd8ab2p-110f, 0.0f, 0x1.1c8b46p-20f,
     0x1.6ad40ap-103f, 0x1.1fbb96p-114f, 0.0f, 0.0f, 0x1.dfd794p-18f, 0x1.71cedcp-18f,
     0.0f, 0x1.93486p-73f, 0x1.71936p-91f, 0.0f, 0x1.b2c49ap-81f, 0x1.12f9ccp-30f,
     0x1.7a9c2ap-17f, 0x1.d0855p-109f, 0.0f, 0x1.d4655cp-30f, 0.0f, 0x1.1e913ap-93f,
     0.0f, 0x1.f92a6p-1f, 0.0f, 0x1.5be6e8p-51f, 0.0f, 0x1.c386dp-34f, 0.0f, 0.0f,
     0x1.3bae2p-75f, 0x1.cdc85p-13f, 0.0f, 0x1.47b43ap-101f, 0x1.13f82cp-71f,
     0x1.6e493cp-84f, 0x1.40f30cp-60f, 0.0f, 0x1.1ebbe8p-55f, 0.0f, 0x1.f668bp-28f,
     0.0f, 0x1.70d3fp-47f, 0.0f, 0x1.e9686p-8f, 0x1.812948p-36f, 0x1.a9ba5ap-83f,
     0.0f, 0.0f, 0x1.3d144ep-34f, 0.0f, 0x1.7c5fcep-38f, 0x1.a3b582p-8f,
     0x1.e748c4p-119f, 0.0f, 0x1.c9bf38p-3f, 0x1.d75d14p-57f, 0x1.3e747ep-65f, 0.0f,
     0x1.fa9598p-117f, 0x1.975794p-42f, 0x1.2a6aeep-21f, 0x1.bedca2p-123f,
     0x1.79ecdcp-72f, 0.0f, 0x1.36157p-13f, 0.0f, 0.0f, 0.0f, 0x1.97053ap-118f,
     0x1.957ba6p-82f, 0x1.a18d1ep-74f, 0x1.754fa4p-54f, 0x1.f238cep-49f, 0.0f,
     0x1.e7ae2ap-64f, 0.0f, 0.0f, 0x1.fa7266p-42f, 0x1.515deap-84f, 0.0f,
     0x1.841858p-56f, 0.0f, 0.0f, 0.0f, 0x1.517882p-97f, 0x1.9f0d5p-19f,
     0x1.b0f3a4p-12f, 0.0f, 0x1.a215f2p-107f, 0.0f, 0x1.0ae724p-9f, 0.0f, 0.0f,
     0x1.a38b84p-16f, 0.0f, 0.0f, 0x1.7e5fbap-27f, 0x1.60648cp-43f, 0x1.6197b4p-28f,
     0x1.16e5aap-106f, 0.0f, 0x1.d294eap-104f, 0x1.01e4e2p-47f, 0.0f, 0x1.e3c5fp-102f,
     0.0f, 0.0f, 0.0f, 0x1.e8c8acp-35f, 0x1.0f819p-29f, 0x1.c91fe6p-113f, 0.0f, 0.0f,
     0.0f, 0x1.c5b2c6p-98f, 0x1.b9b334p-68f, 0.0f, 0.0f, 0x1.4191aep-19f,
     0x1.8b840ep-117f, 0x1.a5e692p-109f, 0.0f, 0x1.8fdbfep-7f, 0.0f, 0x1.b7ad32p-76f,
     0x1.5b1c5cp-124f, 0.0f, 0.0f, 0.0f, 0x1.3afd26p-8f, 0.0f, 0x1.615542p-51f, 0.0f,
     0x1.523d4ep-65f, 0x1.f7cf68p-24f, 0.0f, 0.0f, 0x1.b8cf34p-69f, 0.0f,
     0x1.92d0d8p-82f, 0.0f, 0x1.78a49ap-75f, 0.0f, 0x1.eda12ap-29f, 0x1.fdbca6p-38f,
     0.0f, 0.0f, 0.0f, 0x1.9e10a2p-64f, 0x1.3c41fp-67f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincospif1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sincospif1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospif1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
