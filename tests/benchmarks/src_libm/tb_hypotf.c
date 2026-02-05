/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_hypotf.c --function hypotf --arity 2 --headers \
 *     math.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
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
     0x1.22449ap-21f, 0x1.edd3acp-65f, 0.0f, 0.0f, 0x1.b7ce46p-36f, 0.0f, 0.0f,
     0x1.4ae908p-35f, 0x1.2f9844p-115f, 0x1.a4dc7ep-85f, 0x1.26fbc4p-117f,
     0x1.ba9aeap-81f, 0x1.6357c4p-80f, 0x1.211a84p-24f, 0.0f, 0.0f, 0.0f,
     0x1.2ec5fep-5f, 0.0f, 0.0f, 0x1.45b784p-2f, 0x1.ec0ecep-106f, 0.0f,
     0x1.44145ep-111f, 0.0f, 0.0f, 0x1.0cb24cp-58f, 0.0f, 0x1.3619a2p-80f,
     0x1.a4d454p-120f, 0.0f, 0.0f, 0.0f, 0x1.eae624p-124f, 0x1.e04326p-80f,
     0x1.ba674p-14f, 0x1.659c56p-86f, 0x1.2d0f9ap-79f, 0.0f, 0x1.038a2ep-64f, 0.0f,
     0x1.1262d2p-24f, 0.0f, 0.0f, 0x1.3b5966p-7f, 0.0f, 0x1.cf882ep-24f, 0.0f, 0.0f,
     0.0f, 0x1.2d2022p-49f, 0.0f, 0x1.07046cp-120f, 0.0f, 0x1.0690d4p-94f,
     0x1.4a3912p-98f, 0x1.60e08cp-73f, 0.0f, 0.0f, 0x1.e2fc4p-77f, 0.0f,
     0x1.e9852ap-95f, 0.0f, 0x1.45c382p-71f, 0x1.f67c02p-51f, 0x1.500d44p-108f, 0.0f,
     0x1.47331ap-109f, 0.0f, 0x1.1c342ap-118f, 0x1.9a5418p-39f, 0x1.675b46p-105f,
     0x1.6e04d4p-123f, 0.0f, 0x1.334e8cp-116f, 0.0f, 0x1.f8a992p-25f, 0x1.7ed83cp-95f,
     0.0f, 0.0f, 0x1.9e58fp-88f, 0.0f, 0.0f, 0x1.652008p-29f, 0x1.93db16p-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f947e4p-89f, 0.0f, 0.0f, 0x1.98ff38p-93f,
     0x1.0d5af6p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.435a1cp-92f, 0x1.af405cp-31f,
     0x1.3f18fep-95f, 0.0f, 0x1.e5d3f4p-23f, 0x1.486834p-122f, 0x1.a3765cp-113f,
     0x1.845326p-54f, 0x1.8d2c4ep-94f, 0.0f, 0.0f, 0x1.5a5ff8p-118f, 0x1.f1b0f4p-51f,
     0.0f, 0.0f, 0.0f, 0x1.1785c2p-79f, 0x1.b1f7f8p-61f, 0.0f, 0x1.3498e8p-90f,
     0x1.f0e876p-32f, 0.0f, 0x1.27a3dep-56f, 0x1.584ceep-13f, 0x1.d53a8p-22f, 0.0f,
     0.0f, 0.0f, 0x1.2f9d6ap-117f, 0x1.5e5f36p-114f, 0.0f, 0.0f, 0.0f,
     0x1.bce25ap-97f, 0x1.f7c1fcp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cc802p-44f,
     0.0f, 0x1.aab65ap-107f, 0x1.45c6a6p-18f, 0.0f, 0x1.dacf8p-11f, 0x1p0f,
     0x1.d6d5e2p-39f, 0x1.0fde46p-9f, 0x1.890764p-55f, 0x1.8a0322p-100f,
     0x1.acfa5cp-66f, 0.0f, 0x1.66e11cp-112f, 0.0f, 0x1.55617ep-120f, 0x1.8b8b3ep-37f,
     0x1.1eaa06p-48f, 0x1.3e8044p-116f, 0.0f, 0x1.0c7b12p-86f, 0x1.6524dp-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b8760cp-15f, 0.0f, 0.0f, 0x1.085664p-35f, 0.0f, 0.0f, 0.0f,
     0x1.ce776ep-126f, 0.0f, 0.0f, 0x1.08ac58p-80f, 0.0f, 0x1.4a20b6p-53f,
     0x1.ca3428p-39f, 0x1.f6d066p-98f, 0x1.8e5ecp-2f, 0x1.694514p-4f, 0x1.28e6fp-66f,
     0.0f, 0x1.317cdep-75f, 0.0f, 0x1.fc35a4p-50f, 0x1.b1ba34p-101f, 0.0f, 0.0f,
     0x1.7ada48p-108f, 0.0f, 0.0f, 0x1.05231ap-10f, 0x1.00576ep-95f, 0x1.f315fcp-61f,
     0x1.229648p-34f, 0.0f, 0x1.636264p-79f, 0x1.741384p-20f, 0.0f, 0.0f,
     0x1.6fdabp-125f, 0.0f, 0.0f, 0x1.7e247p-95f, 0x1.6b0528p-86f, 0x1.607d3ap-63f,
     0x1.06ad28p-67f, 0x1.c476bep-63f, 0.0f, 0x1.1d8d46p-10f, 0.0f, 0.0f,
     0x1.785824p-56f, 0.0f, 0.0f, 0x1.1a9056p-92f, 0x1.d5e10ap-102f, 0x1.74ca82p-49f,
     0.0f, 0x1.047c9ap-92f, 0.0f, 0x1.420084p-54f, 0.0f, 0x1.63431cp-118f, 0.0f,
     0x1.1939acp-79f, 0.0f, 0x1.8a0434p-62f, 0x1.504b74p-22f, 0x1.8a0beep-18f,
     0x1.081992p-36f, 0.0f, 0x1.327beap-23f, 0x1.addbe8p-79f, 0.0f, 0x1.3b1b34p-75f,
     0x1.fd74bp-120f, 0.0f, 0.0f, 0x1.d9f44p-15f, 0x1p0f, 0.0f, 0x1.5c235cp-61f,
     0x1.eb9f1ap-84f, 0x1.54992p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ce0c4p-88f, 0.0f,
     0x1.8754bcp-90f, 0x1.a930bap-110f, 0x1.0c5526p-26f, 0x1.3f1dc6p-109f, 0.0f,
     0x1.3395e6p-65f, 0.0f, 0x1.8ac2bcp-86f, 0.0f, 0x1.207844p-37f, 0x1.660684p-122f,
     0x1.ce0deap-46f, 0x1.385bb2p-103f, 0x1.b519acp-33f, 0x1.cfd006p-79f,
     0x1.f3732ap-83f, 0x1.dea8fep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c89716p-103f,
     0x1.7aceccp-80f, 0x1.76564cp-54f, 0.0f, 0x1.c53ddp-22f, 0x1.2b1772p-69f,
     0x1.1b3bfep-110f, 0x1.be2c2p-103f, 0.0f, 0x1.54935ap-125f, 0x1.723ad4p-117f,
     0.0f, 0.0f, 0x1.21bacap-89f, 0x1.42f564p-73f, 0.0f, 0x1.f1cc6p-55f, 0.0f,
     0x1.20b3f4p-88f, 0x1.c8a9c2p-119f, 0.0f, 0.0f, 0x1.51d256p-66f, 0x1.13485p-36f,
     0x1.bab974p-108f, 0x1.d0bc2p-7f, 0.0f, 0x1.b53886p-38f, 0.0f, 0.0f,
     0x1.581e28p-107f, 0.0f, 0x1.1b1fd2p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f39cfcp-83f,
     0x1.89fba6p-113f, 0x1.935ed2p-61f, 0x1.0e25ap-63f, 0.0f, 0x1.000aap-80f,
     0x1.3f4198p-15f, 0.0f, 0x1.d29266p-91f, 0x1.29769cp-125f, 0x1.ace86ap-11f, 0.0f,
     0x1.1d11a2p-6f, 0x1.76865cp-45f, 0x1.a33526p-5f, 0.0f, 0x1.dedf5p-4f,
     0x1.6e02a8p-54f, 0x1.916566p-98f, 0x1p0f, 0x1.5d982ap-70f, 0.0f, 0x1.fcbb34p-36f,
     0.0f, 0x1.1b96d6p-13f, 0x1.e4b18cp-35f, 0.0f, 0.0f, 0x1.22a45ap-56f, 0.0f, 0.0f,
     0x1.bd2aa8p-113f, 0x1.d2e304p-79f, 0.0f, 0x1.a5fa4p-2f, 0.0f, 0.0f,
     0x1.35ae38p-107f, 0x1.c9d68ep-36f, 0x1.c2a7d2p-121f, 0.0f, 0x1.120428p-94f, 0.0f,
     0x1.6daf4cp-44f, 0x1.5358b8p-116f, 0.0f, 0x1.e1a6d8p-11f, 0.0f, 0x1.815b4cp-30f,
     0x1.2798c2p-22f, 0x1.00a89p-82f, 0x1.69aa04p-116f, 0x1.f13024p-103f, 0.0f, 0.0f,
     0x1.d4794p-9f, 0x1.a909fep-99f, 0.0f, 0.0f, 0x1.1947dep-22f, 0.0f,
     0x1.f48b7ep-32f, 0.0f, 0x1.b0ce34p-17f, 0.0f, 0x1.ae7cb6p-96f, 0x1.1e2ee8p-20f,
     0x1.7d0d1cp-113f, 0x1.d8a3acp-45f, 0x1.bbbf0cp-76f, 0.0f, 0.0f, 0x1.c96818p-15f,
     0.0f, 0.0f, 0x1.054d54p-101f, 0x1.dca03p-93f, 0x1.db688ap-23f, 0x1.809a7cp-120f,
     0x1.a7d2b4p-86f, 0x1.f7dd96p-50f, 0x1.e35108p-87f, 0x1.9ca9b6p-78f,
     0x1.f47ff8p-42f, 0x1.524a1ap-76f, 0x1.f871eep-123f, 0.0f, 0.0f, 0.0f,
     0x1.a10ac8p-33f, 0x1.3d0436p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2f672p-16f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.088952p-12f, 0x1.13d6eap-121f, 0.0f,
     0.0f, 0x1.dce1b4p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f83c4p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.80be9p-73f, 0x1.4530bep-4f, 0.0f, 0x1.cfd15ap-34f, 0.0f,
     0x1.3e29eap-116f, 0.0f, 0.0f, 0x1.922446p-44f, 0.0f, 0.0f, 0x1.c4e24p-78f, 0.0f,
     0x1.8b2402p-31f, 0.0f, 0.0f, 0x1.ee8012p-24f, 0x1.dbaef8p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d1ff1ap-97f, 0.0f, 0x1.8c358ap-121f, 0x1.a82fdep-126f,
     0.0f, 0x1.a2dfd8p-113f, 0x1.33e6b4p-12f, 0x1.098136p-112f, 0x1.ab560ep-23f, 0.0f,
     0x1.68651cp-115f, 0x1.c0abe6p-25f, 0.0f, 0.0f, 0x1.41b4c4p-11f, 0x1.c9f47cp-49f,
     0x1.2c26a2p-89f, 0x1.e65a46p-84f, 0x1.fa13e4p-20f, 0.0f, 0x1.00a81ap-99f, 0.0f,
     0.0f, 0.0f, 0x1.de263ap-73f, 0x1.8b5416p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.335518p-57f, 0x1.163caep-104f, 0x1.a8d574p-62f, 0x1.539f72p-25f,
     0x1.30da0ap-101f, 0.0f, 0x1.a8fb04p-61f, 0x1.4191bp-66f, 0.0f, 0.0f,
     0x1.8220ap-30f, 0x1.f21704p-50f, 0.0f, 0.0f, 0x1.ba7ee8p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.758f28p-82f, 0x1.776bd6p-84f, 0x1.2f8502p-39f, 0.0f, 0x1.6f5fd2p-41f,
     0x1.40d0e6p-65f, 0x1.c04f1cp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65c0fap-76f,
     0x1.8daab6p-97f, 0.0f, 0x1.9551fp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3aa19p-34f, 0.0f, 0.0f, 0x1.4e1edep-26f, 0x1.0c6742p-69f, 0x1.b6260ep-96f,
     0x1.17395cp-55f, 0x1.d23bcp-50f, 0x1.60221p-60f, 0x1.f97906p-62f,
     0x1.7b78d6p-74f, 0x1.9d8c16p-126f, 0.0f, 0.0f, 0x1.79eb9cp-38f, 0.0f, 0.0f,
     0x1.02946ap-102f, 0.0f, 0x1.7fa5fcp-63f, 0.0f, 0x1.65e762p-100f, 0x1.c48e54p-62f,
     0.0f, 0x1.e8dfc4p-95f, 0x1.c3f58cp-121f, 0x1.17baaap-66f, 0.0f, 0.0f,
     0x1.64bbfap-2f, 0x1.0284c4p-120f, 0.0f, 0x1.0a7ee4p-115f, 0x1.121316p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67015cp-76f, 0x1.b4d5fp-3f, 0x1.17aa38p-71f,
     0x1.f68fccp-47f, 0.0f, 0.0f, 0x1.c307ep-122f, 0.0f, 0x1.ce2aeap-95f,
     0x1.611d9cp-81f, 0x1.3dc05cp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f24a9ep-73f,
     0x1.c28abp-100f, 0.0f, 0x1.f05f1cp-45f, 0x1.ddd04ap-76f, 0.0f, 0x1.b4cd9ep-105f,
     0.0f, 0x1.873bc2p-23f, 0.0f, 0.0f, 0x1.e3ec76p-87f, 0.0f, 0x1.f0c31ap-88f, 0.0f,
     0x1.eadf28p-99f, 0.0f, 0x1.d311d8p-123f, 0x1.a56eb4p-102f, 0.0f, 0.0f, 0.0f,
     0x1.e74924p-99f, 0x1.d307bcp-110f, 0x1.b99996p-58f, 0.0f, 0.0f, 0x1.1682fep-113f,
     0x1.2bd0d2p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0677acp-77f, 0.0f,
     0x1.41d76ap-106f, 0.0f, 0.0f, 0.0f, 0x1.1cfeaep-58f, 0.0f, 0.0f, 0.0f,
     0x1.8ec81ep-112f, 0x1.cca358p-94f, 0x1.1665bep-5f, 0.0f, 0.0f, 0x1.a42c96p-55f,
     0x1.589d52p-118f, 0.0f, 0x1.3c3ac4p-76f, 0.0f, 0.0f, 0.0f, 0x1.8cd626p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.385026p-111f, 0x1.e0b60cp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.816dbep-4f, 0x1.0c56d8p-59f, 0x1.cce976p-71f, 0.0f, 0.0f,
     0x1.2971c4p-17f, 0.0f, 0x1.46d7a4p-4f, 0.0f, 0x1.c8ceacp-20f, 0x1.7c93fcp-95f,
     0.0f, 0x1.d9f7eep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.183168p-75f, 0.0f,
     0x1.e46c6ap-100f, 0.0f, 0x1.734426p-27f, 0.0f, 0x1.57ba5p-71f, 0.0f,
     0x1.84505ap-116f, 0.0f, 0x1.4a8bc4p-58f, 0.0f, 0.0f, 0x1.b60e2p-40f, 0.0f, 0.0f,
     0.0f, 0x1.5deb6ep-87f, 0.0f, 0.0f, 0.0f, 0x1.7f2f4ap-23f, 0x1.afcc0cp-97f,
     0x1.88e13ap-7f, 0.0f, 0x1.8a3538p-29f, 0.0f, 0.0f, 0x1.4bee88p-85f, 0.0f,
     0x1.5f1372p-93f, 0.0f, 0x1.fd470ep-114f, 0.0f, 0x1.2414e2p-85f, 0x1.9c6072p-95f,
     0x1.2f9e2ep-96f, 0x1.3ef0ap-71f, 0.0f, 0.0f, 0.0f, 0x1.418e3ap-109f, 0.0f, 0.0f,
     0x1.db112ap-37f, 0.0f, 0.0f, 0.0f, 0x1.209968p-5f, 0.0f, 0x1.b0c57ep-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1af1bp-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.097554p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b19086p-85f, 0x1.d12116p-104f,
     0.0f, 0.0f, 0x1.7ba45ep-17f, 0x1.1b9b6cp-79f, 0x1.f05626p-112f, 0x1.38e2dcp-16f,
     0.0f, 0x1.32780cp-117f, 0x1.31f4c6p-89f, 0x1.5ab818p-115f, 0.0f, 0x1.dbd5fcp-60f,
     0x1.6b90ap-52f, 0.0f, 0x1.2d8ddp-14f, 0x1.da7112p-39f, 0.0f, 0x1.147eecp-60f,
     0.0f, 0.0f, 0x1.a7d834p-124f, 0.0f, 0x1.df54f2p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b972ap-112f, 0x1.7bf9bcp-32f, 0.0f, 0x1.c4d1c6p-25f,
     0.0f, 0x1.f0d8bcp-34f, 0.0f, 0x1.a7ded4p-94f, 0.0f, 0x1.774bf8p-34f, 0.0f,
     0x1.ac3b48p-94f, 0.0f, 0x1.9b8d3ap-52f, 0x1.bac0b4p-18f, 0.0f, 0x1.155388p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c36fb2p-13f, 0x1.0e3e36p-55f, 0x1.fb7712p-125f, 0.0f, 0x1.640a4p-37f,
     0x1.a8178cp-15f, 0x1.961d2cp-74f, 0x1.180612p-42f, 0x1.6626c6p-32f,
     0x1.169fdp-57f, 0x1.8b4366p-68f, 0.0f, 0.0f, 0.0f, 0x1.3ba854p-22f, 0.0f,
     0x1.31c614p-86f, 0x1.f1c924p-118f, 0.0f, 0x1.b06afp-121f, 0x1.30e024p-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.11424cp-66f, 0x1.677eap-93f, 0x1.891242p-20f,
     0x1.70ca44p-82f, 0.0f, 0.0f, 0x1.f54d64p-37f, 0.0f, 0.0f, 0x1.83ea0ep-67f, 0.0f,
     0.0f, 0.0f, 0x1.85cb54p-47f, 0x1.373f22p-19f, 0x1.8336fap-22f, 0x1.82017cp-73f,
     0x1.23275ep-54f, 0.0f, 0.0f, 0x1.fb860ep-26f, 0x1.82b632p-123f, 0x1.9829ep-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7bbfap-6f, 0.0f, 0.0f, 0x1.495a9ep-87f, 0.0f,
     0x1.c86d8cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.deefd8p-66f, 0.0f, 0x1.5850a4p-29f,
     0x1.4285a2p-97f, 0.0f, 0.0f, 0x1.a6dc9ep-64f, 0x1.bccbe6p-26f, 0.0f, 0.0f,
     0x1.2bc882p-44f, 0x1.105f96p-104f, 0x1.d44cdp-112f, 0.0f, 0.0f, 0x1.98a372p-74f,
     0.0f, 0x1.de4fd2p-69f, 0.0f, 0.0f, 0x1.df976ep-51f, 0.0f, 0x1p0f,
     0x1.75f56ep-50f, 0.0f, 0x1.201152p-14f, 0x1.637d3ap-2f, 0.0f, 0x1.b25516p-11f,
     0x1.f21c8ep-38f, 0x1.958dfp-65f, 0.0f, 0x1.6ad86ep-36f, 0.0f, 0x1.c00a24p-51f,
     0x1.7c8f68p-32f, 0x1.6c8d3cp-121f, 0.0f, 0.0f, 0x1.3b4ed8p-34f, 0x1.48fb3ap-78f,
     0.0f, 0x1.af8c84p-80f, 0.0f, 0x1.a5766ep-47f, 0x1.b37244p-74f, 0x1.21c48ep-78f,
     0x1.4f5f56p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2dc156p-82f, 0.0f, 0.0f,
     0x1.95fef2p-33f, 0.0f, 0x1.701cep-18f, 0x1.8302ap-120f, 0.0f, 0x1.ee6dap-16f,
     0.0f, 0x1.6da99ep-116f, 0.0f, 0x1.a627bp-97f, 0x1.9805e4p-14f, 0.0f, 0.0f,
     0x1.5b1bc2p-85f, 0x1.fab11cp-99f, 0x1.e8d624p-109f, 0.0f, 0.0f, 0x1.aad3ap-80f,
     0x1.5b96a8p-16f, 0x1.bda9dp-88f, 0.0f, 0.0f, 0x1.4e48d6p-115f, 0.0f,
     0x1.1e6518p-29f, 0.0f, 0.0f, 0x1.98c09cp-75f, 0x1.bf30e8p-43f, 0x1.06e7c8p-53f,
     0x1.5a239cp-31f, 0x1.af5bfap-26f, 0x1.740144p-7f, 0x1.ce9e96p-124f, 0.0f, 0.0f,
     0x1.dbc31p-48f, 0.0f, 0x1.f457ep-26f, 0.0f, 0.0f, 0.0f, 0x1.5fb98cp-83f, 0.0f,
     0x1.64835ep-96f, 0.0f, 0.0f, 0x1.1159dep-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73d2b8p-64f, 0x1.f4fdfcp-93f, 0x1.e0cc86p-31f, 0.0f, 0.0f, 0.0f,
     0x1.c3da5ap-91f, 0.0f, 0x1.e8b4acp-78f, 0.0f, 0.0f, 0x1.bed968p-75f,
     0x1.36b0bep-100f, 0x1.7bc7b8p-15f, 0x1.e97004p-24f, 0x1.6e9384p-42f,
     0x1.fab7acp-97f, 0x1.a7e50ap-93f, 0x1.7d1396p-72f, 0.0f, 0.0f, 0x1.592b6ap-121f,
     0.0f, 0x1.1f80cep-11f, 0.0f, 0x1p0f, 0.0f, 0x1.ec9c44p-113f, 0.0f,
     0x1.d8c916p-59f, 0.0f, 0.0f, 0x1.99dbbp-19f, 0x1.172ec2p-124f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.a1fea2p-1f, 0.0f, 0x1.9c0b36p-108f, 0.0f, 0x1.7d536ap-101f, 0.0f,
     0.0f, 0.0f, 0x1.22806ap-73f, 0.0f, 0x1.376acap-117f, 0x1.34110ap-104f,
     0x1.167cc2p-120f, 0x1.a90782p-24f, 0x1.de508p-23f, 0x1.3ff1bap-106f,
     0x1.811722p-99f, 0x1.56fe08p-126f, 0.0f, 0.0f, 0x1.a1b28ep-47f, 0.0f,
     0x1.aadffp-124f, 0.0f, 0x1.af664ap-30f, 0x1.f8c2cp-107f, 0.0f, 0.0f,
     0x1.40dd8ap-36f, 0x1.a8afe2p-124f, 0.0f, 0x1.ba6d72p-25f, 0.0f, 0.0f,
     0x1.9ebf3ep-4f, 0x1.37d33cp-66f, 0x1.8d4fb4p-69f, 0.0f, 0x1.c268cp-38f, 0.0f,
     0.0f, 0x1.c1d222p-103f, 0x1.b59d02p-20f, 0x1.282e28p-79f, 0.0f, 0x1.05d0b8p-92f,
     0.0f, 0x1.9e6e98p-33f, 0x1.a921aap-72f, 0.0f, 0.0f, 0x1.c2e3a8p-62f,
     0x1.f4d9b4p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb3872p-113f, 0.0f, 0x1.18b038p-68f,
     0.0f, 0x1.11dea4p-10f, 0.0f, 0x1.10f35p-96f, 0.0f, 0x1.366f76p-38f,
     0x1.1d5eecp-37f, 0x1.a4192p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e359ap-30f,
     0x1.9c43bcp-74f, 0.0f, 0x1.df779cp-121f, 0.0f, 0.0f, 0x1.f41684p-31f, 0.0f,
     0x1.66ddbp-41f, 0.0f, 0.0f, 0x1.ba2274p-59f, 0.0f, 0x1.26d9cap-121f,
     0x1.d7f96p-111f, 0x1.bf8a1p-90f, 0.0f, 0.0f, 0.0f, 0x1.8e75e2p-115f,
     0x1.8c378ap-119f, 0.0f, 0.0f, 0.0f, 0x1.070acp-71f, 0.0f, 0x1.e2416p-44f, 0.0f,
     0.0f, 0x1.4e457ep-12f, 0.0f, 0x1.e86a14p-120f, 0x1.ba0772p-98f, 0.0f, 0.0f,
     0x1.842f0ap-52f, 0.0f, 0.0f, 0.0f, 0x1.89cc9cp-28f, 0.0f, 0x1.60757ap-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1bd83ap-6f, 0.0f, 0.0f, 0.0f, 0x1.778f62p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.968778p-112f, 0.0f, 0x1.a5cfb6p-119f, 0.0f, 0.0f, 0.0f,
     0x1.94ba52p-121f, 0.0f, 0.0f, 0x1.abe932p-51f, 0.0f, 0.0f, 0x1.ff2cfep-66f, 0.0f,
     0x1.9a9f98p-55f, 0x1.0bc48p-91f, 0x1.7ca95cp-32f, 0x1.f28f78p-66f,
     0x1.09671cp-5f, 0.0f, 0x1.20cf6ep-96f, 0x1.1c698ep-67f, 0.0f, 0.0f,
     0x1.4ce1aep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f2cf6p-66f, 0x1.2b2edap-39f, 0.0f,
     0x1.f67152p-16f, 0x1.d45f8ep-79f, 0.0f, 0.0f, 0x1.89dbbap-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d822ep-99f, 0.0f, 0x1.df609ep-99f, 0.0f, 0.0f,
     0x1.27f826p-73f, 0x1.b73ep-96f, 0.0f, 0.0f, 0x1.fa6f72p-9f, 0.0f,
     0x1.5b7e9ap-120f, 0.0f, 0x1.8cdba6p-85f, 0.0f, 0.0f, 0.0f, 0x1.4e952p-5f, 0.0f,
     0x1.41720ep-23f, 0x1.732e94p-111f, 0x1.3633a8p-103f, 0x1.f4450ep-49f,
     0x1.cea99ap-57f, 0x1.e25708p-82f, 0x1.3a4ebep-53f, 0x1.7924ecp-19f, 0.0f, 0.0f,
     0.0f, 0x1.74b7f6p-94f, 0x1.6b0cap-77f, 0.0f, 0.0f, 0x1.6fcb06p-59f,
     0x1.c51f94p-96f, 0x1.7d7d84p-1f, 0.0f, 0.0f, 0x1.0e439ap-70f, 0.0f,
     0x1.ac526cp-90f, 0x1.cfc89ep-68f, 0x1.91c9fap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.70d12p-99f, 0.0f, 0x1.387cb6p-106f, 0x1.2a3756p-79f, 0.0f, 0x1.450448p-76f,
     0.0f, 0.0f, 0.0f, 0x1.6c50e6p-68f, 0x1.8f5438p-17f, 0x1.73c472p-72f, 0.0f,
     0x1.9b8718p-124f, 0x1.c95c4p-46f, 0x1.535888p-86f, 0x1.3fa85p-33f, 0.0f,
     0x1.16ff84p-9f, 0.0f, 0.0f, 0.0f, 0x1.028f08p-41f, 0.0f, 0x1.ba904p-67f,
     0x1.63bec6p-118f, 0.0f, 0.0f, 0.0f, 0x1.ae9d92p-40f, 0x1.5a3f6p-94f,
     0x1.add09p-111f, 0.0f, 0x1.3ff90cp-48f, 0.0f, 0.0f, 0x1.067fb6p-94f,
     0x1.9a2da2p-75f, 0x1.7069aep-106f, 0.0f, 0x1.a1d3c2p-74f, 0x1.c5468p-21f,
     0x1.5803c4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a16b14p-83f, 0.0f, 0x1.62e424p-34f,
     0x1.5b851ep-92f, 0.0f, 0.0f, 0x1.c2cfdcp-16f, 0x1.0aa11p-99f, 0x1.40ce3ap-92f,
     0.0f, 0x1.1b2206p-105f, 0.0f, 0x1.6d0a14p-54f, 0.0f, 0.0f, 0.0f,
     0x1.4aab86p-108f, 0x1.1f502ep-109f, 0x1.727542p-90f, 0.0f, 0.0f, 0x1.64bc58p-34f,
     0.0f, 0x1.f0bfcap-98f, 0.0f, 0.0f, 0x1.a2526ep-77f, 0x1.c93286p-45f, 0.0f, 0.0f,
     0x1.d412a4p-21f, 0.0f, 0x1.ac1696p-58f, 0.0f, 0x1.f1acp-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.31f572p-65f, 0x1.9ddc94p-8f, 0.0f, 0.0f, 0.0f, 0x1.e64712p-78f,
     0x1.4d7b0cp-33f, 0x1.a3d606p-91f, 0x1.b95428p-16f, 0.0f, 0x1.27b4a4p-81f, 0.0f,
     0x1.9fd6ep-3f, 0.0f, 0x1.6fb14cp-34f, 0x1.e0ba42p-11f, 0.0f, 0x1.091264p-122f,
     0.0f, 0x1.96b8f6p-13f, 0x1.ccbf6p-114f, 0.0f, 0x1.95ffeep-114f, 0.0f, 0.0f, 0.0f,
     0x1.d5fce8p-124f, 0.0f, 0x1.b99532p-86f, 0x1.9e93e6p-15f, 0.0f, 0x1.0d046ap-19f,
     0x1.14eda2p-30f, 0x1.9aacaep-116f, 0.0f, 0x1.c6fbfap-65f, 0.0f, 0.0f, 0.0f,
     0x1.1ad7b8p-97f, 0x1.000074p-92f, 0x1.35d0a2p-102f, 0.0f, 0x1.6ada08p-12f, 0.0f,
     0x1.d9021ep-44f, 0x1.89eec4p-21f, 0.0f, 0.0f, 0x1.373302p-125f, 0x1.17ce2ap-122f,
     0x1.206ec8p-22f, 0.0f, 0x1.a230b2p-63f, 0x1.f1726p-43f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8aae2ep-9f, 0.0f, 0x1.e9f5acp-4f, 0.0f, 0x1.0101fp-100f,
     0x1.04e57ap-44f, 0.0f, 0.0f, 0.0f, 0x1.eb5756p-111f, 0x1.d4f902p-107f, 0.0f,
     0x1.eb8b3p-14f, 0.0f, 0x1.c92edap-92f, 0x1.64a104p-80f, 0x1.b0379ap-45f,
     0x1.277b62p-11f, 0.0f, 0x1.8553b4p-75f, 0.0f, 0.0f, 0x1.3bcb0ep-8f,
     0x1.2665d6p-13f, 0x1.5b3c8p-78f, 0x1.5cf662p-106f, 0x1.1d2238p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.10a50ep-61f, 0.0f, 0.0f, 0x1.9c3a14p-7f, 0x1.ebe72ap-13f, 0.0f,
     0x1p0f, 0x1.db602ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.124c6p-100f, 0.0f,
     0x1.ed5cbap-105f, 0x1.552958p-91f, 0x1.098d5ep-92f, 0.0f, 0x1.dd3ebep-83f,
     0x1.6a5c4ap-96f, 0.0f, 0.0f, 0.0f, 0x1.df417ep-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94d66ep-9f, 0.0f, 0.0f, 0x1.f6782p-2f, 0.0f, 0x1.0479fp-112f, 0x1.4442p-84f,
     0x1.a0b31ep-37f, 0.0f, 0x1.61bb52p-68f, 0x1.ff2d1ap-73f, 0.0f, 0x1.a88e56p-39f,
     0.0f, 0x1.baee5p-54f, 0.0f, 0x1.99bb26p-77f, 0x1.58478ap-45f, 0.0f, 0.0f, 0.0f,
     0x1.829886p-39f, 0.0f, 0x1.4cbd44p-38f, 0x1.d0c45ap-108f, 0x1.122aaep-107f, 0.0f,
     0x1.033368p-56f, 0.0f, 0x1.fe9a3p-56f, 0.0f, 0x1.3f30cep-7f, 0.0f, 0.0f,
     0x1.0e33bp-82f, 0.0f, 0x1.447c36p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd2f0ap-22f,
     0.0f, 0x1.20fa94p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b32acep-46f, 0.0f,
     0x1.e83c42p-97f, 0x1.7f7722p-95f, 0x1.5ec868p-74f, 0.0f, 0x1.69514ep-55f, 0.0f,
     0x1.ad5c3ap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8ffe8p-80f, 0x1.df4d92p-40f,
     0x1.bc817ap-9f, 0.0f, 0x1p0f, 0.0f, 0x1.e690eap-107f, 0x1.d98668p-38f,
     0x1.1010f8p-76f, 0x1.7b067p-38f, 0x1.59f1cep-64f, 0.0f, 0x1.092b1ap-80f,
     0x1.f6c2acp-14f, 0x1.dbdaep-72f, 0.0f, 0x1.c66d08p-74f, 0x1.ef8dcap-32f, 0.0f,
     0x1.8f15b4p-125f, 0x1.f2fe6cp-89f, 0x1.dce12ep-58f, 0.0f, 0x1.65df38p-9f,
     0x1.04ea84p-61f, 0x1.1df4fap-71f, 0.0f, 0x1.4c14e8p-76f, 0.0f, 0.0f,
     0x1.cfb106p-113f, 0x1.9b6de8p-76f, 0.0f, 0x1.cb4686p-1f, 0.0f, 0.0f,
     0x1.3553cep-77f, 0.0f, 0x1.dd1a56p-105f, 0.0f, 0x1.fa052ep-95f, 0.0f,
     0x1.9714fp-38f, 0x1.80e3f4p-61f, 0x1.abe634p-23f, 0.0f, 0.0f, 0x1.b35984p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9afba6p-18f, 0x1.97ab7ep-19f, 0.0f, 0.0f,
     0.0f, 0x1.9079fap-38f, 0.0f, 0.0f, 0x1.f3d44cp-89f, 0.0f, 0x1.12d37ep-85f, 0.0f,
     0x1.cae33p-83f, 0x1.d7be46p-111f, 0x1.d13ef2p-27f, 0x1.4e6fap-30f,
     0x1.5b20d4p-56f, 0.0f, 0x1.680236p-90f, 0.0f, 0x1.0d1eaep-45f, 0x1.da1438p-26f,
     0.0f, 0x1.051a5ep-83f, 0.0f, 0x1.9e5052p-15f, 0x1.c897acp-102f, 0.0f,
     0x1.2833bep-56f, 0.0f, 0x1.5d7e02p-2f, 0x1.54eca2p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a706bcp-33f, 0.0f, 0.0f, 0.0f, 0x1.3e039ap-102f, 0x1.f900f2p-78f,
     0x1.3fd5b4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cb9fap-98f, 0x1.02294p-36f,
     0x1.b414b4p-85f, 0x1.6aeff2p-87f, 0x1.4c3ef4p-31f, 0.0f, 0x1.4cd018p-18f, 0.0f,
     0.0f, 0.0f, 0x1.1f28ccp-10f, 0x1.3628eep-34f, 0.0f, 0x1.b7e97ap-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1bc532p-90f, 0.0f, 0.0f, 0x1.d14086p-117f, 0.0f,
     0x1.cfe774p-117f, 0x1.2a1c2ep-90f, 0.0f, 0x1.99ae34p-82f, 0.0f, 0x1.4b061p-67f,
     0x1.3290fp-79f, 0x1.f032b4p-125f, 0.0f, 0.0f, 0x1.da7e5ep-47f, 0.0f,
     0x1.7c1ee4p-9f, 0.0f, 0x1.891512p-114f, 0x1.08325cp-95f, 0x1.af760ep-58f,
     0x1.a3ab28p-92f, 0x1.6e5236p-68f, 0.0f, 0.0f, 0x1.b0a0d6p-26f, 0.0f,
     0x1.fb8682p-113f, 0x1.ff66eap-33f, 0x1.fada04p-76f, 0.0f, 0x1.f331e2p-16f, 0.0f,
     0x1.b3795ap-31f, 0.0f, 0x1.34917ep-11f, 0x1.830b6p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4ff8bep-110f, 0.0f, 0x1.429bcap-115f, 0.0f, 0x1.060e84p-52f, 0x1.e0addp-68f,
     0x1.7c09aap-126f, 0x1.fd4278p-67f, 0x1.ea5812p-57f, 0x1.a0a17ap-36f, 0.0f,
     0x1.96265cp-31f, 0x1.32a80ap-108f, 0.0f, 0x1.c6be3cp-73f, 0x1.d71556p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72c0b6p-43f, 0x1.e1b912p-94f, 0.0f,
     0x1.4cde36p-92f, 0.0f, 0.0f, 0x1.d1f6e4p-16f, 0x1.845372p-9f, 0x1.723c24p-86f,
     0x1.df8ecap-69f, 0x1.77dacap-70f, 0.0f, 0.0f, 0x1.34e5e4p-106f, 0.0f,
     0x1.f5e2eap-74f, 0x1.d65cfcp-121f, 0.0f, 0x1.10c954p-111f, 0.0f, 0x1.692898p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.218ad4p-123f, 0.0f, 0x1.3bb8bap-35f, 0x1.472462p-27f,
     0.0f, 0x1.4eeb6cp-62f, 0.0f, 0.0f, 0x1.36c1ecp-96f, 0x1.a62fc2p-101f, 0.0f,
     0x1.5d0264p-5f, 0.0f, 0.0f, 0.0f, 0x1.b0f852p-117f, 0.0f, 0.0f, 0x1.396daep-44f,
     0x1.db08a8p-106f, 0x1.d3ba5p-18f, 0x1.d4a7aap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72f572p-64f, 0.0f, 0x1.83af74p-10f, 0.0f, 0.0f, 0x1.5cbcdcp-89f, 0.0f,
     0x1.fe7eaap-114f, 0x1.2fb14cp-44f, 0x1.57bd98p-67f, 0x1.2927d6p-46f,
     0x1.14f91p-121f, 0x1.313dc6p-103f, 0x1.8d4044p-74f, 0.0f, 0x1.280bd2p-101f, 0.0f,
     0.0f, 0x1.a8b08ap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.993e94p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d2e0ecp-8f, 0.0f, 0x1.85093p-114f, 0x1.488de8p-56f, 0.0f,
     0.0f, 0x1.ad85bep-81f, 0.0f, 0x1.a8f7fap-61f, 0.0f, 0.0f, 0.0f, 0x1.5c08c6p-8f,
     0x1.4be24ep-29f, 0.0f, 0x1.8b664ep-97f, 0x1.65a0e8p-25f, 0.0f, 0x1.e2315ep-20f,
     0x1.48de0cp-1f, 0x1.b1115ap-91f, 0.0f, 0.0f, 0x1.d31524p-109f, 0.0f, 0.0f, 0.0f,
     0x1.332ce2p-76f, 0.0f, 0.0f, 0x1.53cb56p-64f, 0.0f, 0x1.2c02dp-26f,
     0x1.279b1p-121f, 0x1.e1a502p-36f, 0.0f, 0.0f, 0x1.b2de3cp-94f, 0.0f, 0.0f,
     0x1.b41decp-71f, 0x1.4d2b24p-102f, 0.0f, 0x1.85cbbcp-87f, 0.0f, 0.0f,
     0x1.9a0e88p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa73e2p-39f, 0x1.d964a4p-12f,
     0x1.c1a3fep-30f, 0x1.95a456p-121f, 0x1.d230e8p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.367c32p-110f, 0.0f, 0.0f, 0x1.e254cp-47f, 0.0f, 0x1.8934eep-11f, 0.0f,
     0x1.f4a98p-117f, 0.0f, 0x1.847088p-101f, 0.0f, 0.0f, 0.0f, 0x1.e11b8ep-16f, 0.0f,
     0.0f, 0.0f, 0x1.ac34fap-34f, 0x1.c55c6cp-52f, 0x1.b1a4ecp-41f, 0x1.ae67fp-32f,
     0x1.28a9ep-20f, 0.0f, 0.0f, 0x1.4c038p-6f, 0.0f, 0x1.d93dfep-62f, 0.0f, 0.0f,
     0x1.b2caaep-89f, 0.0f, 0.0f, 0x1.4db898p-113f, 0x1.c9cbe8p-103f, 0.0f,
     0x1.5c049p-19f, 0x1.1bdc64p-119f, 0.0f, 0x1.8fb2cep-55f, 0.0f, 0.0f, 0.0f,
     0x1.07709ep-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08fa44p-36f,
     0.0f, 0.0f, 0x1.b5a688p-126f, 0x1.eccf7ep-67f, 0.0f, 0x1.da2cd4p-102f, 0.0f,
     0x1.2f2d9ep-61f, 0x1.87911ap-76f, 0.0f, 0x1.ecd692p-16f, 0x1.fa379ap-93f,
     0x1.662842p-6f, 0.0f, 0x1.248042p-67f, 0x1.a6801ap-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88b316p-123f, 0x1.cfc67ap-108f, 0x1.56d8d4p-51f, 0x1.21e5ccp-25f, 0.0f, 0.0f,
     0.0f, 0x1.da960ap-78f, 0.0f, 0.0f, 0x1.e45378p-88f, 0x1.1b76f8p-57f, 0.0f,
     0x1.e4d95cp-32f, 0.0f, 0.0f, 0x1.45553ap-13f, 0x1.ba4194p-73f, 0x1.ed580cp-37f,
     0x1.adf702p-92f, 0x1.5ff13ap-117f, 0x1.12f8c6p-73f, 0x1.7b531ap-34f, 0.0f, 0.0f,
     0x1.8f5e1cp-69f, 0x1.8ef44ap-77f, 0.0f, 0x1.4006fep-107f, 0.0f, 0.0f,
     0x1.5b9b8cp-48f, 0.0f, 0x1.b872b2p-87f, 0.0f, 0.0f, 0.0f, 0x1.54839ap-72f,
     0x1.4c687cp-65f, 0.0f, 0x1.c54c12p-52f, 0.0f, 0.0f, 0x1.bd3ab2p-28f, 0.0f,
     0x1.df1744p-99f, 0.0f, 0x1.77829p-90f, 0x1.31cd34p-103f, 0x1.03b018p-5f, 0.0f,
     0.0f, 0x1.7ca686p-66f, 0.0f, 0.0f, 0x1.658692p-98f, 0.0f, 0x1.659ee4p-95f,
     0x1.b8617p-37f, 0x1.951d78p-126f, 0x1.2ebfc2p-88f, 0x1.2e336p-73f,
     0x1.03b346p-126f, 0x1.869268p-46f, 0x1.78851p-45f, 0x1.7a9d28p-49f,
     0x1.73194cp-68f, 0.0f, 0.0f, 0.0f, 0x1.9c7c46p-104f, 0x1.213d5p-86f, 0.0f, 0.0f,
     0x1.6de2e4p-2f, 0.0f, 0x1.6eff7ap-32f, 0.0f, 0.0f, 0x1.245c6ep-104f,
     0x1.63fa7cp-95f, 0.0f, 0.0f, 0.0f, 0x1.13768p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a06b4ap-77f, 0x1.018fdep-67f, 0.0f, 0x1.35420ap-71f, 0x1.f236ecp-56f,
     0x1.148578p-9f, 0.0f, 0.0f, 0.0f, 0x1.cd76bep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.905732p-112f, 0.0f, 0x1.3a98a2p-31f, 0.0f
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
            tmp2 = hypotf(tmp0, tmp1);
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
    printf("hypotf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("hypotf bench acc %a\n", global_bench_acc);
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
