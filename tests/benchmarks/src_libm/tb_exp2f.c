/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_exp2f.c --function exp2f --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0x1.3a084p-114f, 0x1.da090cp-63f, 0.0f, 0x1.f3034cp-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.144512p-47f, 0.0f, 0x1.c4deb8p-80f, 0x1.8f7898p-3f, 0x1.ddcdcap-119f, 0.0f,
     0x1.bccb82p-2f, 0.0f, 0.0f, 0.0f, 0x1.4b0c0cp-78f, 0x1.aeb0c6p-77f,
     0x1.026dacp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf7d04p-26f, 0.0f, 0.0f,
     0x1.db21a6p-29f, 0x1.787ac2p-50f, 0.0f, 0x1.0ad344p-39f, 0x1.9f872p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1d53a2p-8f, 0.0f, 0x1.7c36f8p-18f, 0x1.390a5ep-20f,
     0x1.781c6cp-13f, 0x1.b9cf52p-17f, 0x1p0f, 0x1.d9ce14p-78f, 0.0f, 0.0f,
     0x1.ad284cp-121f, 0.0f, 0x1.6caa1ap-124f, 0x1.818d22p-104f, 0.0f,
     0x1.c33aa6p-30f, 0x1.aae546p-102f, 0x1.173f04p-23f, 0x1.1a459ap-48f, 0.0f,
     0x1.1677cap-95f, 0.0f, 0x1.c4f61cp-31f, 0x1.cb96aap-34f, 0x1.fa484p-124f,
     0x1.a03742p-18f, 0.0f, 0.0f, 0.0f, 0x1.cdb08ep-23f, 0.0f, 0x1.160ff4p-80f,
     0x1.e4d924p-123f, 0.0f, 0.0f, 0x1.f79904p-37f, 0x1.d0d9p-17f, 0.0f,
     0x1.0735c4p-26f, 0x1.327462p-105f, 0.0f, 0x1.eae15ep-58f, 0x1.376c8p-25f,
     0x1.e101a2p-112f, 0x1.057f5ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eedd08p-4f, 0x1.88e9ecp-13f, 0.0f, 0.0f, 0.0f, 0x1.85eb6ep-48f, 0.0f, 0.0f,
     0.0f, 0x1.01abecp-23f, 0.0f, 0.0f, 0x1.9e1046p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d4c4cp-38f, 0x1.15b864p-12f, 0.0f, 0.0f, 0x1.f578b8p-89f, 0x1.c71cc8p-38f,
     0x1.6297c6p-116f, 0.0f, 0x1.34f748p-49f, 0.0f, 0x1.2b83fcp-93f, 0.0f, 0.0f,
     0x1.5cde28p-95f, 0x1.e04b1ep-110f, 0x1.4d6244p-14f, 0.0f, 0x1.c012ecp-40f,
     0x1.1f6624p-35f, 0x1.5cf33ep-86f, 0x1.fd8a64p-7f, 0x1.fc6b3ep-99f, 0.0f, 0.0f,
     0.0f, 0x1.9b0818p-86f, 0.0f, 0x1.9528b2p-73f, 0x1.f528b6p-21f, 0.0f,
     0x1.b9aabp-12f, 0.0f, 0x1.c76276p-99f, 0x1.0e269ep-40f, 0.0f, 0x1.19a59ep-46f,
     0.0f, 0x1.db7f7cp-84f, 0x1.a186b8p-124f, 0x1.056a1ap-92f, 0x1.1600b2p-15f,
     0x1.d3bacp-61f, 0.0f, 0.0f, 0x1.cfe714p-45f, 0x1.1bf57ap-1f, 0x1.b91162p-114f,
     0x1.5ec616p-24f, 0.0f, 0x1.3d48dap-34f, 0x1.c09594p-51f, 0.0f, 0x1.d16ffp-35f,
     0x1.6f93d6p-30f, 0x1.d8d166p-83f, 0.0f, 0x1.7709aap-101f, 0.0f, 0x1.548704p-109f,
     0.0f, 0.0f, 0x1.c35112p-2f, 0.0f, 0x1.839f5ap-76f, 0.0f, 0x1.cfedaep-62f, 0.0f,
     0.0f, 0x1.68175ap-83f, 0.0f, 0.0f, 0.0f, 0x1.d794a6p-18f, 0.0f, 0x1.6e8f88p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbd5ecp-86f, 0.0f, 0.0f, 0x1.c97a46p-50f,
     0x1.9aa354p-109f, 0x1.4bb0e4p-64f, 0.0f, 0.0f, 0.0f, 0x1.1608f8p-70f, 0.0f, 0.0f,
     0x1.831b1cp-69f, 0.0f, 0x1.b32e66p-125f, 0x1.17a8b8p-44f, 0.0f, 0x1.782066p-115f,
     0x1.18d696p-38f, 0x1.3a0d22p-63f, 0x1.708fep-71f, 0.0f, 0.0f, 0.0f,
     0x1.0a0046p-41f, 0x1.873c1cp-108f, 0x1.17a21cp-93f, 0.0f, 0.0f, 0x1.3f1198p-64f,
     0x1.b7c1eap-76f, 0x1.d57b32p-81f, 0x1.909222p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7fbf8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dccp-11f, 0x1.e6ad8ap-74f,
     0x1.89b0f4p-41f, 0.0f, 0x1.48bf8ap-104f, 0.0f, 0.0f, 0x1.29519cp-28f,
     0x1.ade8f6p-11f, 0x1.14d49p-58f, 0x1.bc1f36p-94f, 0.0f, 0.0f, 0.0f,
     0x1.ab23fap-52f, 0.0f, 0.0f, 0.0f, 0x1.a0f6c4p-54f, 0.0f, 0x1.ef97b6p-38f,
     0x1.74426ep-88f, 0x1.f6a5f6p-63f, 0x1.ea96f8p-116f, 0x1.2466cep-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d14cap-107f,
     0.0f, 0x1.d0da3ep-44f, 0x1.822db8p-111f, 0x1.275894p-53f, 0.0f, 0.0f,
     0x1.871ffcp-124f, 0.0f, 0x1.67841p-82f, 0.0f, 0.0f, 0x1.610e66p-55f, 0.0f,
     0x1.4df6d4p-28f, 0.0f, 0.0f, 0.0f, 0x1.bd3ffap-100f, 0.0f, 0.0f, 0x1.548fbp-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.af73ccp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da013cp-86f, 0.0f, 0x1.c1b1b8p-90f, 0.0f, 0x1.83333ep-54f, 0x1.2434c4p-77f,
     0.0f, 0.0f, 0.0f, 0x1.961bd4p-54f, 0.0f, 0x1.d9adeep-65f, 0x1.534694p-10f, 0.0f,
     0.0f, 0.0f, 0x1.1cb37cp-83f, 0.0f, 0x1.038792p-93f, 0.0f, 0x1.44d846p-84f,
     0x1.099934p-60f, 0.0f, 0x1.9cac86p-6f, 0x1.a9cf56p-69f, 0.0f, 0.0f,
     0x1.bdc4cap-43f, 0x1.4fd73p-113f, 0x1.90211ap-20f, 0x1.e7ce62p-30f, 0.0f,
     0x1.561ecp-118f, 0x1.b786cap-39f, 0x1.b23f8p-84f, 0x1.f79cdp-80f, 0.0f,
     0x1.74305ep-78f, 0.0f, 0x1.332d8ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d3a82p-54f,
     0x1.515b84p-91f, 0.0f, 0x1.397e04p-52f, 0x1.db2b6cp-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd4118p-85f, 0.0f, 0x1.1fc672p-58f, 0.0f, 0x1.82e6aap-19f, 0.0f,
     0x1.db1876p-69f, 0x1.d7161p-109f, 0x1.dfacfcp-65f, 0.0f, 0.0f, 0x1.deb29cp-66f,
     0.0f, 0.0f, 0x1.cfb062p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.322d74p-123f, 0x1.99425ap-106f, 0x1.885ad4p-30f, 0x1.792918p-55f,
     0x1.e9135cp-4f, 0.0f, 0.0f, 0x1.f8a1c4p-126f, 0x1.0d9ed4p-2f, 0.0f, 0.0f,
     0x1.2a7f26p-124f, 0x1.72a396p-22f, 0.0f, 0x1.0dcp-2f, 0x1.4634dcp-70f,
     0x1.863444p-42f, 0.0f, 0x1.e6a8a8p-109f, 0.0f, 0x1.951be8p-45f, 0.0f,
     0x1.88e22ep-123f, 0x1.299dcp-111f, 0.0f, 0x1.46941p-85f, 0.0f, 0x1.3732dcp-115f,
     0x1.9ff014p-115f, 0.0f, 0x1.889d32p-54f, 0.0f, 0x1.a5b772p-103f, 0.0f,
     0x1.1c9284p-61f, 0x1.01db2ap-51f, 0x1.161efcp-74f, 0.0f, 0x1.171114p-108f, 0.0f,
     0x1.9b97f2p-59f, 0x1.f895d2p-76f, 0.0f, 0.0f, 0x1.6e52aap-96f, 0.0f, 0.0f,
     0x1.022384p-71f, 0x1.37a982p-112f, 0.0f, 0x1.b45f84p-14f, 0.0f, 0.0f,
     0x1.7ac428p-54f, 0x1.f8da3ap-6f, 0x1.5de65ep-59f, 0x1.26506ep-63f, 0.0f, 0.0f,
     0x1.5cffa6p-44f, 0.0f, 0x1.3960aep-110f, 0.0f, 0.0f, 0.0f, 0x1.bd7288p-14f,
     0x1.2107dep-117f, 0x1.0527cp-33f, 0.0f, 0x1.631616p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed77dep-1f, 0.0f, 0x1.24bb08p-80f, 0.0f, 0.0f, 0.0f, 0x1.f2101cp-10f,
     0x1.5f3c86p-72f, 0.0f, 0x1.b380b2p-123f, 0x1.e7786ap-98f, 0x1.d3a8b8p-115f, 0.0f,
     0.0f, 0.0f, 0x1.789136p-21f, 0x1.47eacep-56f, 0x1.7ccbf6p-3f, 0x1.a8f24ep-24f,
     0.0f, 0x1.13872ap-17f, 0x1.cad9d4p-12f, 0.0f, 0x1.179e64p-74f, 0x1.824758p-22f,
     0x1.a435cap-124f, 0x1.fc6ffp-79f, 0.0f, 0x1.746p-69f, 0.0f, 0.0f, 0.0f,
     0x1.a7e8aap-10f, 0.0f, 0.0f, 0x1.5515fep-82f, 0.0f, 0x1.6a088ep-29f, 0.0f, 0.0f,
     0.0f, 0x1.a61852p-116f, 0.0f, 0.0f, 0x1.da1864p-90f, 0x1.399c98p-37f, 0.0f,
     0x1.74512cp-115f, 0x1.b725c2p-55f, 0.0f, 0x1.0804aep-105f, 0.0f, 0.0f, 0.0f,
     0x1.de822ap-55f, 0x1.60e12cp-21f, 0x1.8cbcbcp-21f, 0.0f, 0.0f, 0x1.22979cp-113f,
     0.0f, 0.0f, 0x1.f47c52p-78f, 0.0f, 0.0f, 0.0f, 0x1.a3ea26p-22f, 0x1.6f1edp-83f,
     0x1.8bdd78p-35f, 0x1.09e5bp-117f, 0x1.bc11a4p-66f, 0x1.cf990ep-114f,
     0x1.e6f696p-47f, 0x1.e79a3cp-110f, 0x1.7da5eep-61f, 0.0f, 0.0f, 0x1.3b6ff4p-21f,
     0.0f, 0x1.692c52p-93f, 0.0f, 0x1.6c9d6p-38f, 0x1.7894dap-112f, 0x1.44f47ap-51f,
     0.0f, 0.0f, 0x1.d0b37p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b59ca6p-83f,
     0x1.7815c2p-59f, 0.0f, 0.0f, 0.0f, 0x1.8a732ep-48f, 0x1.29b6d2p-18f, 0.0f, 0.0f,
     0x1.26ad04p-21f, 0x1.ed53b6p-7f, 0x1.5b95a2p-3f, 0.0f, 0x1.506e02p-10f,
     0x1.e02954p-9f, 0.0f, 0x1.02448ap-44f, 0.0f, 0x1.30d12cp-49f, 0x1.c80eeep-70f,
     0x1.4e50c6p-84f, 0x1.1be564p-87f, 0x1.1ac5e2p-58f, 0.0f, 0.0f, 0x1.43c3fap-7f,
     0x1.87efb2p-3f, 0.0f, 0.0f, 0x1.f07b8cp-22f, 0x1.cd6fd6p-60f, 0x1.543ec8p-89f,
     0.0f, 0.0f, 0x1.6064fp-110f, 0.0f, 0x1.145e04p-51f, 0x1.690fa2p-112f, 0.0f, 0.0f,
     0x1.368bfp-32f, 0.0f, 0.0f, 0x1.4054b2p-36f, 0.0f, 0x1.a516c6p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.92f956p-84f, 0.0f, 0.0f, 0x1.bfa326p-10f,
     0x1.986d9ep-84f, 0x1.76a34cp-33f, 0x1.411acp-11f, 0x1.c065b6p-78f, 0.0f,
     0x1.e36e5p-51f, 0.0f, 0x1.804e3ap-100f, 0.0f, 0.0f, 0.0f, 0x1.e92fdap-20f,
     0x1.91c854p-46f, 0.0f, 0x1.87db68p-70f, 0.0f, 0x1.2cc13cp-110f, 0x1.1e9eeep-9f,
     0.0f, 0x1.b4459p-12f, 0.0f, 0.0f, 0x1.38b7ecp-28f, 0x1.2d3c62p-68f, 0.0f,
     0x1.4aa3d8p-105f, 0x1.b86f9cp-123f, 0.0f, 0.0f, 0x1.ab6d3ap-55f, 0.0f,
     0x1.a2508ep-118f, 0x1.1793dp-98f, 0.0f, 0x1.ac1d08p-113f, 0.0f, 0x1.c7bf66p-81f,
     0.0f, 0x1.b6306ep-47f, 0.0f, 0.0f, 0.0f, 0x1.452ab8p-49f, 0.0f, 0.0f,
     0x1.a79cb6p-67f, 0.0f, 0.0f, 0x1.415fdcp-28f, 0.0f, 0.0f, 0.0f, 0x1.10f97cp-64f,
     0x1.320548p-82f, 0x1.854f8p-88f, 0x1.0d528cp-9f, 0x1.49cdc2p-80f, 0.0f, 0.0f,
     0.0f, 0x1.3909cep-63f, 0x1.5da532p-2f, 0.0f, 0x1.0c3656p-43f, 0.0f, 0.0f,
     0x1.3ed5d4p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dc778p-58f, 0x1p0f,
     0x1.867f4p-44f, 0x1.9b1776p-6f, 0.0f, 0x1.fe111cp-24f, 0x1.50137ap-55f,
     0x1.409a5ap-4f, 0x1.f22a94p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57c7ccp-14f, 0.0f,
     0.0f, 0x1.f5f0e8p-23f, 0.0f, 0x1.dfb0a4p-108f, 0.0f, 0x1.dbf7acp-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a4396p-96f, 0x1.5ac9d2p-95f, 0x1.68e6fp-101f, 0x1.bfb0e4p-98f,
     0x1.67b5ccp-47f, 0.0f, 0x1.7373c4p-13f, 0x1.d4cb62p-90f, 0.0f, 0x1.201284p-27f,
     0x1.ba9354p-103f, 0x1.69e0ap-4f, 0x1.0270f8p-101f, 0x1.db36a2p-97f,
     0x1.abe196p-61f, 0x1.641744p-13f, 0.0f, 0x1.a636ecp-72f, 0.0f, 0.0f, 0.0f,
     0x1.9ed1f6p-7f, 0x1.cc2e3ap-85f, 0.0f, 0x1.7d51dcp-81f, 0x1.2504f4p-109f,
     0x1.db819p-79f, 0x1.3f67dap-6f, 0x1.d4555ap-61f, 0.0f, 0.0f, 0.0f,
     0x1.2f7bacp-3f, 0.0f, 0.0f, 0.0f, 0x1.dabd4p-51f, 0x1.428c8cp-40f,
     0x1.cd57dp-12f, 0.0f, 0.0f, 0.0f, 0x1.c569aap-13f, 0x1.b2a652p-31f, 0.0f,
     0x1.e28636p-35f, 0.0f, 0.0f, 0.0f, 0x1.d11926p-46f, 0x1.0ba0cep-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e62e52p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2e9cacp-101f, 0x1.02e29ep-95f, 0.0f, 0.0f, 0x1.c110c6p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1ac798p-98f, 0x1.6d699cp-88f, 0x1.f2533ap-74f, 0x1.67095p-30f,
     0.0f, 0x1.e267c4p-102f, 0x1.4e110cp-110f, 0.0f, 0x1.a466b4p-110f,
     0x1.1c114ap-81f, 0x1.d3342ep-94f, 0.0f, 0.0f, 0x1.d0ca8p-47f, 0x1.3cc358p-125f,
     0x1.1b0958p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5834d6p-23f, 0.0f, 0.0f,
     0x1.6da442p-59f, 0.0f, 0x1.df53ccp-62f, 0.0f, 0.0f, 0x1.451e1ep-24f,
     0x1.f5d46ep-2f, 0x1.c43a1ap-42f, 0x1.e567a4p-111f, 0.0f, 0x1.f8f76ap-36f, 0.0f,
     0x1.b4cbbcp-121f, 0.0f, 0.0f, 0x1.35335ap-95f, 0x1.fda3bcp-104f, 0x1.c86654p-25f,
     0x1.af51e2p-82f, 0.0f, 0.0f, 0x1.0b3636p-50f, 0.0f, 0.0f, 0x1.53f9dep-107f,
     0x1.d6a2cap-118f, 0x1.fec4e2p-115f, 0x1.8d8666p-114f, 0.0f, 0.0f,
     0x1.e30faap-67f, 0.0f, 0x1.d87ea2p-43f, 0.0f, 0x1.cf19f6p-31f, 0x1.f4e87p-80f,
     0.0f, 0x1.acba14p-42f, 0x1.e3a42ep-86f, 0x1.39a7eep-89f, 0.0f, 0x1.8ad9eep-51f,
     0x1.794dacp-85f, 0x1.43e678p-7f, 0x1.33240ep-29f, 0.0f, 0x1.9f96a2p-121f, 0.0f,
     0x1.e9b62ep-102f, 0x1.51de9cp-90f, 0x1.b01272p-125f, 0x1.b546e2p-27f, 0.0f, 0.0f,
     0x1.d694d2p-100f, 0x1.3c1e52p-75f, 0.0f, 0.0f, 0x1.3e138cp-79f, 0.0f,
     0x1.8b9cd6p-60f, 0x1.a0440ep-87f, 0.0f, 0x1.f34d14p-38f, 0.0f, 0x1.25888p-22f,
     0.0f, 0x1.8ac514p-78f, 0x1.84e412p-29f, 0.0f, 0x1.e20a3ep-59f, 0.0f, 0.0f,
     0x1.8d5c96p-100f, 0x1.437da4p-54f, 0x1.cbb382p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5e93e8p-121f, 0.0f, 0x1.fdc672p-54f, 0.0f, 0x1.504aeap-44f, 0x1.2ce0a8p-110f,
     0.0f, 0.0f, 0.0f, 0x1.2b78fcp-67f, 0x1.c38f74p-65f, 0.0f, 0x1.e26f66p-78f,
     0x1.37dacap-16f, 0x1.04212ap-62f, 0.0f, 0x1.2e661cp-39f, 0.0f, 0x1.d64c6ep-17f,
     0.0f, 0x1.34ea7ep-21f, 0x1.21621p-67f, 0.0f, 0.0f, 0x1.cf1152p-105f, 0.0f,
     0x1.c4b49cp-111f, 0x1.effb18p-39f, 0.0f, 0x1.f27812p-11f, 0.0f, 0.0f,
     0x1.0f85ccp-43f, 0x1.ba33acp-111f, 0x1.3e8e76p-2f, 0.0f, 0x1.bd54f2p-93f, 0.0f,
     0x1.44ea62p-22f, 0x1.ff886ep-111f, 0.0f, 0x1.da2a3ap-17f, 0x1.f5702cp-80f, 0.0f,
     0.0f, 0.0f, 0x1.509062p-9f, 0x1.f3bb18p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc476ap-109f, 0x1.f1e01ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ba088p-48f, 0.0f,
     0.0f, 0.0f, 0x1.e925d2p-39f, 0.0f, 0x1.1ed3a2p-41f, 0x1.bdc594p-89f,
     0x1.d68af8p-26f, 0x1.2f1778p-47f, 0x1.c03cep-47f, 0x1.f7d4f6p-106f, 0.0f, 0.0f,
     0x1.bf5e0ep-9f, 0.0f, 0x1.d3b128p-22f, 0.0f, 0.0f, 0x1.a7e58cp-53f,
     0x1.44e31p-111f, 0.0f, 0.0f, 0x1.c2d354p-69f, 0x1.dc621ep-87f, 0x1.b21e0ep-2f,
     0.0f, 0x1.3d9b64p-110f, 0.0f, 0.0f, 0.0f, 0x1.f0d93ap-36f, 0x1.866efep-19f,
     0x1.73f542p-111f, 0.0f, 0x1.f1c50ep-13f, 0.0f, 0x1.0e2928p-72f, 0x1.8d56dcp-64f,
     0.0f, 0.0f, 0x1.a3c3cap-70f, 0x1.4b6014p-108f, 0x1.3dda5ep-14f, 0.0f,
     0x1.78ef4ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.307a6ap-65f, 0.0f,
     0x1.e6d0ccp-62f, 0x1.63dc4ep-92f, 0x1.740266p-47f, 0x1.fb98b2p-115f, 0.0f, 0.0f,
     0x1.bd27ep-70f, 0x1.03eb0ap-73f, 0.0f, 0x1.fa72e6p-3f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4fa7acp-9f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = exp2f(tmp0);
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
    printf("exp2f %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("exp2f bench acc %a\n", global_bench_acc);
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
