/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf1_u10purecfma.c --function \
 *     Sleef_tanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.822742p-34f, 0x1.97cc28p-34f, 0.0f, 0.0f,
     0x1.3b292cp-122f, 0.0f, 0x1.922aacp-90f, 0x1.aef62p-61f, 0x1.14ce76p-55f, 0.0f,
     0x1.cd6d78p-95f, 0.0f, 0.0f, 0x1.ffc02cp-77f, 0.0f, 0x1.8bd96cp-19f, 0.0f,
     0x1.4398ep-123f, 0x1.cf18f4p-30f, 0x1.628bdep-10f, 0x1.6ae642p-42f,
     0x1.67924p-53f, 0.0f, 0x1.340486p-43f, 0x1.f74c6p-44f, 0.0f, 0x1.78a04ep-125f,
     0x1.f554fap-18f, 0.0f, 0.0f, 0.0f, 0x1.e31756p-101f, 0x1.72b67cp-64f,
     0x1.bb2766p-36f, 0.0f, 0x1.2429d2p-95f, 0x1.1beea4p-35f, 0.0f, 0.0f,
     0x1.bd999cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa321cp-73f, 0.0f, 0.0f,
     0x1.8a7bccp-3f, 0x1.153e8cp-25f, 0x1.00159ep-94f, 0x1.a8e9dp-93f, 0.0f,
     0x1.da495ap-32f, 0.0f, 0.0f, 0.0f, 0x1.363362p-82f, 0x1.64076ap-92f, 0.0f, 0.0f,
     0.0f, 0x1.991e3p-79f, 0.0f, 0x1.e3e878p-124f, 0.0f, 0.0f, 0.0f, 0x1.7be9e8p-100f,
     0x1.331cc4p-14f, 0.0f, 0.0f, 0.0f, 0x1.544254p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa5456p-54f, 0x1.6a49d6p-87f, 0.0f, 0x1.3b7e94p-54f, 0x1.6f4aacp-73f,
     0x1.3ab9acp-32f, 0x1.b0aee4p-82f, 0.0f, 0.0f, 0x1.dc0882p-112f, 0x1.b80c14p-125f,
     0.0f, 0x1.221234p-17f, 0x1.488062p-80f, 0x1.95c0ap-114f, 0x1.8d14d2p-58f,
     0x1.0f5baep-79f, 0.0f, 0x1.0f0f1ep-42f, 0x1.cdfaf4p-115f, 0.0f, 0x1.afaddep-57f,
     0.0f, 0.0f, 0.0f, 0x1.831dc6p-125f, 0.0f, 0x1.8987cap-56f, 0x1.262714p-90f,
     0x1.39492cp-65f, 0.0f, 0.0f, 0.0f, 0x1.6f79d6p-122f, 0x1.2fd2bcp-26f,
     0x1.067c64p-117f, 0x1.027586p-98f, 0x1.5d745ap-113f, 0x1.8b78aep-97f, 0.0f,
     0x1.93c56ep-105f, 0.0f, 0.0f, 0x1.f3fdf4p-116f, 0.0f, 0.0f, 0x1.a6d8aep-10f,
     0x1.c3fe62p-83f, 0x1.cc2cecp-44f, 0x1.6061f2p-83f, 0.0f, 0x1.19184ep-24f,
     0x1.e51372p-63f, 0x1.01804ep-21f, 0.0f, 0x1.e041f4p-107f, 0x1.b07284p-116f,
     0x1.7963fcp-7f, 0.0f, 0x1.3b660ep-12f, 0.0f, 0x1.66aa24p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5bf62ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a7f4p-5f,
     0.0f, 0.0f, 0x1.aa5d06p-67f, 0x1.707cf6p-105f, 0.0f, 0.0f, 0.0f, 0x1.bfee4cp-48f,
     0x1.89e35p-59f, 0x1.13284ep-1f, 0x1.d5dde4p-45f, 0x1.9eb8e8p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3ed218p-43f, 0.0f, 0x1.eeba74p-97f, 0.0f, 0x1.396b6ap-17f,
     0x1.0cfe4ep-111f, 0.0f, 0.0f, 0x1.577bdep-121f, 0.0f, 0.0f, 0.0f,
     0x1.a13382p-57f, 0x1.cf313p-42f, 0x1.e4378p-18f, 0.0f, 0x1.b79bc8p-37f,
     0x1.338758p-69f, 0.0f, 0x1.dd32cap-112f, 0.0f, 0.0f, 0x1.aa8a46p-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2b5d3ap-27f, 0x1.f5f58cp-36f, 0x1.ecf714p-63f, 0.0f, 0.0f,
     0x1.facf5ep-115f, 0x1.196744p-26f, 0.0f, 0x1.f2686ep-10f, 0.0f, 0x1.2d095cp-48f,
     0x1.ce9dccp-115f, 0.0f, 0x1.9bd1d6p-40f, 0x1.ff67eep-117f, 0.0f, 0.0f,
     0x1.11ac34p-12f, 0x1.9609fap-70f, 0x1.553b1p-86f, 0x1.5625fap-96f,
     0x1.26752ep-78f, 0x1.ee7286p-34f, 0x1.7644acp-120f, 0.0f, 0.0f, 0x1.570742p-102f,
     0x1.9f0624p-30f, 0.0f, 0.0f, 0x1.93021ap-63f, 0x1.dacf2p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cdef8p-112f, 0.0f,
     0x1.fe9c6cp-97f, 0x1.1c4752p-98f, 0.0f, 0x1.fecbf4p-86f, 0x1.6436dp-35f, 0.0f,
     0x1.028eeep-28f, 0.0f, 0x1.f4f33cp-11f, 0.0f, 0.0f, 0x1.05c4aep-45f,
     0x1.8e9454p-73f, 0.0f, 0.0f, 0x1.6b2c0cp-124f, 0x1.e61068p-10f, 0x1.f7df7ep-14f,
     0x1.3797a2p-105f, 0.0f, 0x1.a2d418p-10f, 0.0f, 0x1.342d56p-116f, 0.0f, 0.0f,
     0x1.653518p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bce5e4p-82f, 0x1.a3913ap-112f, 0x1.5c68dp-26f, 0x1.70a732p-2f, 0.0f,
     0x1.e60076p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.785228p-11f, 0.0f, 0x1.cfc85ap-21f,
     0.0f, 0.0f, 0x1.5ac792p-61f, 0x1.b9829cp-45f, 0x1.1cd0cep-53f, 0x1.7413dep-18f,
     0x1.f5e4eap-1f, 0.0f, 0x1.050546p-31f, 0.0f, 0x1.5a462cp-101f, 0.0f,
     0x1.77dc04p-94f, 0x1.0bd4fp-114f, 0.0f, 0x1.203d88p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e376e2p-59f, 0x1.017966p-124f, 0.0f, 0.0f, 0x1.0e8296p-3f,
     0x1.358d5ep-36f, 0x1.179362p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d392b8p-77f,
     0x1.e8f75p-124f, 0.0f, 0.0f, 0x1.929894p-86f, 0x1.981d7ap-42f, 0x1.e16e9ap-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7529e6p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.56d3f8p-17f, 0x1.13cfbp-115f, 0x1.064484p-8f, 0x1.9c563p-65f,
     0x1.f2abbp-11f, 0.0f, 0x1.b5568cp-115f, 0x1.3adp-32f, 0x1.9a6d66p-32f,
     0x1.008baep-61f, 0.0f, 0x1.5f8d46p-32f, 0.0f, 0.0f, 0x1.59bcap-22f,
     0x1.e4acdp-61f, 0.0f, 0x1.6bcbd8p-119f, 0x1.2d9b9ap-61f, 0x1.ed8fdep-120f, 0.0f,
     0x1.210ff4p-29f, 0.0f, 0x1.97f596p-110f, 0x1.b87546p-105f, 0.0f, 0x1.ca9a82p-51f,
     0x1.ffd04ep-77f, 0x1.c51b1cp-99f, 0x1.a55172p-110f, 0x1.a8697cp-66f,
     0x1.0f18aap-64f, 0.0f, 0.0f, 0.0f, 0x1.35bd06p-35f, 0x1.a0704ap-62f, 0.0f,
     0x1.894384p-19f, 0x1.5f43f2p-58f, 0x1.8e6e36p-113f, 0x1.fd51eep-36f,
     0x1.215cf8p-113f, 0x1.174a74p-117f, 0x1.3317p-22f, 0x1.22fb86p-87f, 0.0f, 0.0f,
     0x1.0c7e32p-99f, 0x1.eeea6p-55f, 0.0f, 0.0f, 0x1.ea9354p-51f, 0.0f, 0.0f,
     0x1.086e92p-117f, 0x1.0a1aa6p-17f, 0.0f, 0x1.e17038p-23f, 0x1.5f82cep-48f,
     0x1.a2b97ep-83f, 0x1.ac40b2p-14f, 0.0f, 0x1.eeec4p-114f, 0x1.fb1fbp-11f, 0.0f,
     0x1.3516dcp-70f, 0x1.0f612ap-92f, 0x1.cd81fap-14f, 0.0f, 0x1.3767bep-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6414p-57f, 0x1.11324ap-21f,
     0x1.89b5c6p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f7308p-107f, 0x1.7e0338p-94f, 0.0f,
     0x1.39d24p-56f, 0x1.81d738p-29f, 0.0f, 0x1.4a93d2p-33f, 0x1.026c4ep-47f,
     0x1.2019acp-89f, 0.0f, 0x1.e9d492p-86f, 0x1.2f869p-102f, 0x1.bdea02p-82f, 0.0f,
     0.0f, 0x1.0b61bcp-65f, 0x1.73bd2p-59f, 0x1.be331cp-66f, 0x1.8952dep-38f,
     0x1.60364ap-4f, 0.0f, 0.0f, 0x1.2a31dap-5f, 0x1.66fbe6p-41f, 0x1.f479ecp-95f,
     0.0f, 0.0f, 0x1.b6289p-117f, 0.0f, 0.0f, 0.0f, 0x1.f8cb6ep-45f, 0x1.2250e8p-19f,
     0x1.5674d2p-20f, 0x1.b1dd44p-14f, 0.0f, 0x1.e3fbb6p-107f, 0.0f, 0x1.b060ap-3f,
     0x1.98da1ap-38f, 0.0f, 0.0f, 0.0f, 0x1.6ee1fp-85f, 0.0f, 0x1.9209aep-12f, 0.0f,
     0x1.2694aep-73f, 0.0f, 0x1.50f7e4p-54f, 0.0f, 0.0f, 0.0f, 0x1.4b194ap-86f, 0.0f,
     0.0f, 0.0f, 0x1.59c688p-28f, 0.0f, 0x1.48a56ap-27f, 0x1.92a1dap-89f, 0.0f,
     0x1.c6919ep-123f, 0.0f, 0x1.d91b02p-7f, 0.0f, 0x1.d8389ap-109f, 0.0f,
     0x1.a50ba2p-28f, 0x1.0476cep-122f, 0x1.e92628p-103f, 0.0f, 0.0f, 0x1.82c66ep-2f,
     0.0f, 0x1.172b74p-90f, 0x1.ad31c2p-11f, 0x1.d8ae5ep-17f, 0x1.aae4fcp-32f, 0.0f,
     0.0f, 0.0f, 0x1.daf358p-94f, 0.0f, 0x1.6e87d6p-69f, 0x1.1169f2p-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2106f6p-81f, 0.0f, 0x1.d4a8f2p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6614b6p-18f, 0x1.233b6p-76f, 0.0f, 0x1.000edcp-90f, 0x1.6ac43p-13f,
     0x1.565876p-74f, 0x1.3eacbep-76f, 0.0f, 0x1.106d8ep-57f, 0x1.6e0df2p-64f, 0.0f,
     0x1.5b39a6p-16f, 0.0f, 0.0f, 0x1.6a25d4p-40f, 0x1.e9b9d2p-94f, 0.0f,
     0x1.cef6ccp-14f, 0.0f, 0x1.f3ed22p-68f, 0x1.791454p-72f, 0.0f, 0x1.b9bad6p-61f,
     0.0f, 0x1.5ac702p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9be3e6p-65f, 0.0f,
     0x1.606204p-118f, 0x1.acfbdep-31f, 0x1.2826p-51f, 0x1.5d16p-86f, 0.0f, 0.0f,
     0x1.c65f0cp-13f, 0.0f, 0x1.2b97e4p-22f, 0.0f, 0x1.a2dc8cp-117f, 0.0f,
     0x1.9b2988p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.267cb8p-49f, 0.0f,
     0.0f, 0x1.c0a93p-111f, 0.0f, 0.0f, 0.0f, 0x1.190bb8p-59f, 0x1.eaae6p-12f,
     0x1.fb65a6p-40f, 0x1.deef88p-101f, 0.0f, 0x1.b91eeep-96f, 0.0f, 0x1.961f34p-97f,
     0x1.21b41p-72f, 0.0f, 0x1.6c8ae6p-39f, 0x1.f1e2b6p-99f, 0x1.c2f6ccp-121f,
     0x1.5cf74ep-8f, 0x1.14bdcap-73f, 0.0f, 0.0f, 0.0f, 0x1.fb32c6p-10f,
     0x1.987862p-92f, 0.0f, 0.0f, 0.0f, 0x1.915b28p-89f, 0.0f, 0.0f, 0.0f,
     0x1.3d3cecp-104f, 0x1.bdb62ep-91f, 0x1.5106f4p-32f, 0x1.c5b088p-15f,
     0x1.73964cp-71f, 0x1.937d34p-32f, 0x1.98292cp-30f, 0x1.167688p-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c20132p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08f9bp-111f,
     0x1.e57d9cp-98f, 0.0f, 0x1.bd434ap-117f, 0.0f, 0x1.64b91ap-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.edc61cp-6f, 0x1.c1ac7cp-110f, 0.0f, 0x1.2ef1fp-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.761a7ep-117f, 0.0f, 0.0f, 0x1.3f5a52p-34f,
     0x1.81710cp-114f, 0.0f, 0.0f, 0x1.6b1458p-107f, 0.0f, 0x1.479bfp-38f,
     0x1.70d3fap-67f, 0.0f, 0x1.65dfb8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd649ep-6f, 0x1.070336p-34f, 0x1.23414ep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1130fap-2f, 0.0f, 0x1.a230bcp-105f, 0x1.4bd594p-66f,
     0x1.40d9e8p-40f, 0x1.588becp-39f, 0.0f, 0x1.2b89d8p-7f, 0x1.60300ep-8f,
     0x1.52f454p-87f, 0x1.40f38ap-95f, 0x1.8bce2cp-96f, 0.0f, 0x1.329696p-11f,
     0x1.b4d762p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f9d4cp-126f, 0.0f,
     0x1.101678p-50f, 0.0f, 0x1.c77c14p-2f, 0x1.5ddcaap-35f, 0x1.a3f34ep-46f,
     0x1.103d74p-82f, 0.0f, 0x1.0861acp-76f, 0.0f, 0.0f, 0.0f, 0x1.c15ae2p-115f, 0.0f,
     0.0f, 0.0f, 0x1.42b48ap-15f, 0.0f, 0.0f, 0.0f, 0x1.704824p-87f, 0.0f,
     0x1.2d9712p-24f, 0.0f, 0.0f, 0.0f, 0x1.996872p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b44eep-115f, 0x1.19556ap-49f, 0x1.c9f792p-31f, 0x1.3e254ep-43f,
     0x1.32ba6ap-69f, 0.0f, 0.0f, 0x1.56af2ep-43f, 0x1.07616ep-103f, 0.0f,
     0x1.d9edb8p-55f, 0x1.9955p-7f, 0.0f, 0.0f, 0x1.8dc53p-16f, 0.0f, 0.0f,
     0x1.176996p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd0cb2p-69f, 0.0f, 0.0f,
     0x1.956acep-8f, 0x1.3e89a8p-71f, 0x1.bd46dep-63f, 0x1.542908p-102f, 0.0f,
     0x1.268eep-40f, 0.0f, 0.0f, 0.0f, 0x1.cae8d4p-50f, 0.0f, 0.0f, 0x1.93da3ap-66f,
     0x1.6db91ep-33f, 0x1.a4bd8ap-19f, 0.0f, 0.0f, 0x1.82a3f6p-33f, 0x1.8a3502p-32f,
     0.0f, 0x1.fae612p-94f, 0x1.51144ap-61f, 0x1.8bcd3cp-53f, 0.0f, 0.0f,
     0x1.b10346p-37f, 0.0f, 0x1.66e05ap-81f, 0x1.e7ebe8p-32f, 0.0f, 0.0f,
     0x1.ed542p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0b062p-21f, 0.0f,
     0x1.140e44p-9f, 0x1.329f24p-9f, 0x1.26a7dcp-6f, 0.0f, 0.0f, 0x1.e4f11ep-26f,
     0x1.3565e4p-24f, 0.0f, 0x1.2f6144p-39f, 0x1.208092p-24f, 0.0f, 0x1.ee7e82p-57f,
     0x1.de9bf8p-78f, 0x1.bca6fp-45f, 0.0f, 0x1.aebe0cp-82f, 0.0f, 0x1.52df64p-126f,
     0x1.e6e53p-72f, 0.0f, 0x1.5aade6p-45f, 0x1.df5de6p-16f, 0.0f, 0x1.a161e4p-120f,
     0.0f, 0x1.a6d23p-121f, 0x1.551692p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3de774p-113f, 0.0f, 0.0f, 0.0f, 0x1.171878p-66f, 0.0f, 0.0f,
     0x1.c0acc2p-67f, 0.0f, 0x1.07f61ep-111f, 0.0f, 0.0f, 0x1.ffee2ep-105f,
     0x1.1323cap-10f, 0x1.a1caeep-92f, 0.0f, 0x1.3566eep-54f, 0.0f, 0x1.a62e46p-11f,
     0x1.a5f6p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48e96p-36f,
     0x1.2bdc34p-53f, 0x1.9bbd86p-24f, 0x1.11e426p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.544356p-33f, 0.0f, 0.0f, 0x1.5338d6p-89f, 0x1.2e4276p-39f, 0.0f,
     0.0f, 0.0f, 0x1.4457a4p-115f, 0x1.d46cdp-74f, 0x1.20e43p-124f, 0.0f,
     0x1.ada23cp-14f, 0.0f, 0x1.6075eap-58f, 0.0f, 0x1.87fcdap-28f, 0x1.e8229p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.280a8ep-98f, 0x1.c2f24p-75f, 0x1.f3bfc8p-86f, 0.0f,
     0x1.f330c8p-48f, 0.0f, 0.0f, 0x1.9a9e9cp-81f, 0x1.43c568p-62f, 0.0f, 0.0f, 0.0f,
     0x1.69b94p-62f, 0.0f, 0x1.1e28d2p-45f, 0.0f, 0x1.3bafcep-39f, 0x1.22a728p-11f,
     0.0f, 0.0f, 0.0f, 0x1.cb69dap-80f, 0x1.bd5daep-117f, 0x1.b6bc5p-46f, 0.0f, 0.0f,
     0x1.4be10ap-81f, 0x1.540b62p-93f, 0.0f, 0.0f, 0x1.3454e4p-121f, 0x1.ec4566p-71f,
     0.0f, 0x1.87a8f2p-49f, 0.0f, 0x1.c3018ap-110f, 0.0f, 0x1.e48fe6p-50f,
     0x1.e5d5d2p-117f, 0x1.54c3d6p-103f, 0.0f, 0x1.7348fcp-18f, 0.0f, 0.0f,
     0x1.04a44cp-86f, 0x1.09acbp-106f, 0.0f, 0x1.fddfd4p-124f, 0x1.d28e3ap-110f,
     0x1.3e8b9ep-101f, 0x1.5f212ep-26f, 0x1.b134d4p-31f, 0x1.68e45ep-60f,
     0x1.50f8ccp-24f, 0.0f, 0.0f, 0x1.1dbe4p-101f, 0.0f, 0x1.205feap-52f, 0.0f,
     0x1.c5db22p-46f, 0x1.4f7198p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.558fc8p-103f,
     0x1.f45e5cp-37f, 0.0f, 0x1.4aeabap-35f, 0x1.f0d10ap-105f, 0.0f, 0x1.4ae6cp-97f,
     0.0f, 0.0f, 0.0f, 0x1.f1970ap-67f, 0x1.96f1b8p-113f, 0x1.ac189ep-17f,
     0x1.f6322ep-100f, 0.0f, 0.0f, 0x1.c6fe36p-73f, 0x1.28ebf4p-93f, 0x1.22a18p-84f,
     0x1.c2ea4ap-75f, 0.0f, 0x1.27582p-61f, 0x1.144874p-9f, 0x1.c7e9d8p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b91288p-94f, 0.0f, 0.0f,
     0x1.871fdp-76f, 0.0f, 0.0f, 0.0f, 0x1.3b3596p-87f, 0x1.85b55ap-78f
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
            tmp1 = Sleef_tanhf1_u10purecfma(tmp0);
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
    printf("Sleef_tanhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
