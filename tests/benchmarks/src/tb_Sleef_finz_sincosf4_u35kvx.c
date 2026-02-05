/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf4_u35kvx.c --function \
 *     Sleef_finz_sincosf4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target kv3
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
     0x1.593078p-41f, 0x1.9ddfa2p-97f, 0x1.eaf922p-63f, 0x1.964798p-70f,
     0x1.67f45ep-102f, 0x1.41245ep-97f, 0x1.884c28p-102f, 0x1.150ac4p-88f, 0.0f, 0.0f,
     0x1.7433e4p-94f, 0.0f, 0x1.f80854p-15f, 0x1.6e2086p-43f, 0x1.581086p-99f,
     0x1.15ea7ep-38f, 0.0f, 0.0f, 0x1.209276p-119f, 0.0f, 0.0f, 0x1.6ee616p-27f, 0.0f,
     0.0f, 0x1.97d0dp-68f, 0.0f, 0x1.57f9b4p-76f, 0x1.0ae90cp-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f9fb74p-98f, 0x1.7de978p-2f, 0x1.72111p-45f, 0x1.a9c354p-115f, 0.0f,
     0.0f, 0.0f, 0x1.a76b8p-60f, 0x1.b24c62p-84f, 0x1.a3dbe4p-87f, 0.0f,
     0x1.261324p-51f, 0x1.c8ae2p-92f, 0.0f, 0x1.0eeebap-63f, 0x1.ec11d8p-3f, 0.0f,
     0.0f, 0x1.a50c4cp-50f, 0.0f, 0x1.8bf4dap-68f, 0.0f, 0x1.c74448p-62f,
     0x1.49ae82p-29f, 0.0f, 0x1.fe6e9cp-40f, 0x1.d3e34ep-50f, 0x1.17ee78p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c146dcp-106f, 0x1.257c86p-28f, 0x1.98fd1p-56f, 0.0f, 0.0f,
     0x1.adcec8p-69f, 0.0f, 0x1.b5b18cp-100f, 0x1p0f, 0.0f, 0.0f, 0x1.016e5cp-110f,
     0x1.6b1b1ep-45f, 0x1.5886f6p-16f, 0x1.5c8c58p-105f, 0x1.1b25c2p-107f,
     0x1.d65dcap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70672cp-118f, 0.0f,
     0x1.e4142ep-106f, 0.0f, 0.0f, 0.0f, 0x1.6b88aep-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.919afp-9f, 0.0f, 0x1.ef99d6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.320b5cp-36f, 0.0f, 0x1.1b2268p-3f, 0.0f, 0x1.e07498p-26f, 0.0f,
     0x1.89d79cp-106f, 0x1.223c8p-45f, 0x1.a5a494p-50f, 0.0f, 0.0f, 0x1.da4158p-96f,
     0.0f, 0x1.94ec28p-35f, 0x1.d558eep-103f, 0.0f, 0.0f, 0x1.5554a4p-46f, 0.0f,
     0x1.0e00cep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86fbp-114f, 0.0f,
     0x1.26371p-82f, 0x1.cce84p-104f, 0.0f, 0x1.da4328p-66f, 0x1.d67eaep-34f,
     0x1.f0096ep-21f, 0.0f, 0.0f, 0x1.0cf3f8p-4f, 0.0f, 0.0f, 0x1.84c35ep-1f,
     0x1.76bb2ep-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1694cap-78f, 0x1.8006dp-114f, 0.0f,
     0x1.c7d7cap-49f, 0.0f, 0.0f, 0x1.35e9d2p-21f, 0x1.3d7806p-4f, 0.0f, 0.0f, 0.0f,
     0x1.4ab5e2p-41f, 0x1.9cf314p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8cd12p-40f,
     0.0f, 0x1.dd51e6p-81f, 0x1.35c212p-90f, 0.0f, 0x1.171p-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5548aap-49f, 0x1.6d4496p-99f, 0x1.f0bed8p-17f,
     0x1.a85e9ep-36f, 0x1.4cab26p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9daaf4p-109f,
     0x1p0f, 0x1.b08a4ep-104f, 0x1.673c4cp-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.080394p-11f, 0x1.9761ccp-93f, 0.0f, 0x1.61d3c6p-124f, 0.0f, 0x1.e7f15cp-55f,
     0.0f, 0x1.c34c24p-126f, 0.0f, 0x1.fb3de2p-52f, 0x1.a30a48p-70f, 0.0f, 0.0f, 0.0f,
     0x1.627a84p-43f, 0x1.bae8fep-117f, 0x1.7579dcp-61f, 0x1.9fa58ep-118f,
     0x1.0f955ap-40f, 0x1.f00e38p-107f, 0x1.de0cd8p-72f, 0.0f, 0x1.a7c97p-19f, 0.0f,
     0x1.04ea3ap-106f, 0x1.7e4b3p-1f, 0x1.f5f01ep-36f, 0.0f, 0x1.7bde2ap-99f, 0.0f,
     0x1.833718p-56f, 0.0f, 0.0f, 0x1.3d2936p-83f, 0x1.9a8a5ap-30f, 0x1.079e72p-78f,
     0.0f, 0.0f, 0x1.2b2d8ep-107f, 0x1.45a63ep-92f, 0.0f, 0.0f, 0x1.1a8d98p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.318b16p-13f, 0.0f, 0x1.5dc1cep-14f, 0x1.14e2ccp-61f,
     0x1.254a16p-61f, 0x1.bf4d9ap-79f, 0.0f, 0.0f, 0x1.8f76c4p-120f, 0.0f, 0.0f,
     0x1.e254c2p-26f, 0x1.c7cd54p-21f, 0x1.aed8c8p-74f, 0x1.5d97fp-82f, 0.0f,
     0x1.a36adcp-68f, 0.0f, 0x1.e6d98cp-11f, 0.0f, 0.0f, 0x1.1a8b84p-34f,
     0x1.716ebp-47f, 0x1.0b290ap-89f, 0.0f, 0x1.43340ep-104f, 0.0f, 0.0f, 0.0f,
     0x1.88bdaap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85e976p-79f, 0.0f, 0.0f, 0.0f,
     0x1.448c24p-22f, 0.0f, 0x1.d8de14p-36f, 0.0f, 0.0f, 0x1.4d218cp-43f,
     0x1.587b7p-58f, 0x1.d94ce2p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8e8acp-102f, 0.0f,
     0x1.b065aep-68f, 0x1.eab2dap-23f, 0.0f, 0.0f, 0.0f, 0x1.026a6cp-115f, 0.0f, 0.0f,
     0x1.47c37ep-104f, 0x1.4ba5cap-39f, 0.0f, 0.0f, 0.0f, 0x1.3084c6p-28f,
     0x1.a9d176p-62f, 0x1.135b0ap-7f, 0.0f, 0.0f, 0x1.b1fc1p-61f, 0x1.b67936p-120f,
     0.0f, 0x1.489f7ap-39f, 0.0f, 0.0f, 0x1.232dp-126f, 0.0f, 0.0f, 0x1.d49d6p-11f,
     0.0f, 0x1.ff4f72p-67f, 0.0f, 0.0f, 0x1.909a0cp-49f, 0.0f, 0x1.e8a788p-26f,
     0x1.540336p-2f, 0x1.562bf8p-89f, 0.0f, 0x1.196448p-49f, 0.0f, 0x1.395ca8p-27f,
     0x1.68733p-104f, 0x1.55d96cp-88f, 0x1.79fa54p-64f, 0.0f, 0x1.85f0bcp-10f, 0.0f,
     0.0f, 0x1.f7c90ap-16f, 0x1.0d4a8cp-79f, 0.0f, 0x1.e7c65cp-6f, 0.0f, 0.0f, 0.0f,
     0x1.e52d06p-112f, 0x1.db5918p-78f, 0x1.8fbba6p-27f, 0x1.b1ae5ep-93f,
     0x1.cca7d2p-43f, 0x1.516e8p-75f, 0.0f, 0.0f, 0.0f, 0x1.beb666p-21f,
     0x1.8a4d5cp-106f, 0.0f, 0x1.bf0a9ep-63f, 0.0f, 0x1.b2e43ep-114f, 0x1.36f88p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.7f7e44p-75f, 0x1.5da7bcp-38f,
     0x1.d9fe52p-108f, 0x1.900496p-42f, 0x1.66b998p-97f, 0.0f, 0x1.4a8a54p-34f, 0.0f,
     0x1.bb0264p-5f, 0.0f, 0x1.5315c2p-41f, 0x1.d2c3ccp-113f, 0.0f, 0x1.657008p-92f,
     0x1.a15d84p-48f, 0x1.631792p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f6be0ep-79f, 0x1.3718cap-117f, 0.0f, 0x1.affeeap-21f, 0x1.2e790ep-64f,
     0.0f, 0x1.7e04ep-45f, 0x1.1340a2p-37f, 0x1.ba9c5cp-113f, 0x1p0f, 0x1.64275ap-68f,
     0x1.c50468p-37f, 0x1.143dfap-15f, 0x1.535f46p-53f, 0.0f, 0x1.c39eeep-69f,
     0x1.2bce82p-86f, 0x1.a184b8p-81f, 0.0f, 0.0f, 0x1.0e584p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.af612ap-79f, 0.0f, 0.0f, 0x1.5140a2p-21f, 0x1.79b288p-112f,
     0x1.705efp-83f, 0x1.25cecp-84f, 0x1.5406cep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0f74ap-24f, 0x1.dc05c2p-80f, 0x1.a6f272p-37f, 0.0f, 0x1.a8b402p-81f, 0.0f,
     0.0f, 0.0f, 0x1.0cf18ep-43f, 0.0f, 0x1.7c8c0ap-115f, 0x1.fb4ec6p-50f,
     0x1.93c742p-89f, 0.0f, 0x1.0e4326p-118f, 0.0f, 0.0f, 0x1.482f8p-35f,
     0x1.31f7bep-83f, 0x1.aa56dep-86f, 0.0f, 0x1.4e7b08p-50f, 0x1.952592p-114f,
     0x1.70328p-68f, 0x1.62d562p-40f, 0x1.b2e8a4p-116f, 0.0f, 0x1.7ce01ep-123f,
     0x1.2dd6bep-77f, 0.0f, 0.0f, 0.0f, 0x1.9bcdeap-76f, 0x1.77802ap-78f, 0.0f, 0.0f,
     0.0f, 0x1.0325e2p-97f, 0.0f, 0x1.7192fp-68f, 0x1.afaf34p-20f, 0x1.ec589ap-51f,
     0x1.20586p-108f, 0x1.274668p-75f, 0.0f, 0x1.0e77fap-94f, 0x1.622aa4p-92f, 0.0f,
     0.0f, 0.0f, 0x1.ae666p-119f, 0x1.d6193ep-40f, 0x1.ad27e8p-76f, 0.0f,
     0x1.ca0af6p-32f, 0.0f, 0.0f, 0x1.57a28ep-28f, 0.0f, 0x1.bcf096p-31f, 0.0f, 0.0f,
     0.0f, 0x1.a1d3c4p-111f, 0x1.e60b0ep-45f, 0.0f, 0.0f, 0x1.33ff02p-62f,
     0x1.42a1bp-1f, 0.0f, 0x1.15646ep-126f, 0.0f, 0.0f, 0.0f, 0x1.b48232p-110f, 0.0f,
     0x1.a45828p-72f, 0x1.e8aef2p-79f, 0.0f, 0.0f, 0x1.c50fd6p-25f, 0x1.eedea4p-50f,
     0x1.a47056p-39f, 0x1.9c26bcp-121f, 0.0f, 0.0f, 0x1.491eb6p-109f, 0.0f,
     0x1.2a00b6p-3f, 0x1.c12ceap-11f, 0.0f, 0x1.0111f2p-84f, 0x1.16692ap-54f,
     0x1.87c652p-37f, 0.0f, 0x1.dbb4d4p-83f, 0.0f, 0.0f, 0.0f, 0x1.d857dcp-15f,
     0x1.2f9e4ep-86f, 0x1.6ede8ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.283fd4p-111f,
     0x1.1317bp-68f, 0x1.b0eb24p-111f, 0x1.e51af6p-41f, 0.0f, 0.0f, 0.0f,
     0x1.7f04e8p-20f, 0.0f, 0.0f, 0.0f, 0x1.75de8ep-12f, 0.0f, 0x1.1e728cp-48f, 0.0f,
     0x1.509c1ap-93f, 0x1.8a1474p-5f, 0x1.2cf726p-112f, 0x1.67e19p-96f, 0.0f, 0.0f,
     0.0f, 0x1.91351ap-25f, 0.0f, 0x1.65737cp-28f, 0.0f, 0x1.bef252p-112f, 0.0f,
     0x1.a51dcp-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdc61p-31f,
     0x1.b97b7p-76f, 0x1.2202dp-12f, 0x1.ea187cp-63f, 0x1.bfcd8cp-53f,
     0x1.5da2bp-111f, 0.0f, 0.0f, 0x1.a3d56p-95f, 0x1.6fd756p-7f, 0x1.5b692p-72f,
     0x1.e05fccp-10f, 0.0f, 0.0f, 0x1.f79d0cp-113f, 0.0f, 0.0f, 0.0f, 0x1.488874p-79f,
     0.0f, 0.0f, 0x1.5de002p-8f, 0.0f, 0.0f, 0x1.d479d2p-58f, 0.0f, 0x1.a60de6p-41f,
     0.0f, 0.0f, 0.0f, 0x1.205ea8p-25f, 0x1.9c4062p-57f, 0.0f, 0x1.dee256p-16f,
     0x1.3252d4p-27f, 0x1.426e12p-57f, 0x1.adffeep-37f, 0.0f, 0x1.39fadp-40f, 0.0f,
     0x1.1a1cf8p-74f, 0x1.ef710ap-14f, 0x1.860cdcp-86f, 0.0f, 0.0f, 0.0f,
     0x1.69366ap-43f, 0x1.cea80ap-119f, 0.0f, 0x1.d535b4p-13f, 0x1.6b1eap-117f,
     0x1.acd29ep-69f, 0x1.e97692p-97f, 0.0f, 0.0f, 0x1.c11a24p-62f, 0.0f, 0.0f, 0.0f,
     0x1.3cb734p-41f, 0x1.131e86p-41f, 0x1.6e08b8p-18f, 0x1.453a18p-28f,
     0x1.a1f334p-82f, 0x1.7b3e0cp-12f, 0x1.093adcp-25f, 0x1.07a0cap-7f,
     0x1.bda6f8p-50f, 0.0f, 0.0f, 0x1.7b93b6p-73f, 0.0f, 0x1.6ea8ecp-89f,
     0x1.cb3f18p-34f, 0.0f, 0.0f, 0.0f, 0x1.e7eacep-123f, 0.0f, 0.0f, 0x1.72fab2p-89f,
     0.0f, 0.0f, 0x1.5270e4p-32f, 0x1.fa338ep-88f, 0x1.1f9f9cp-43f, 0x1p0f,
     0x1.c721e6p-68f, 0.0f, 0x1.5c6e4p-112f, 0x1.efac9ap-12f, 0x1.def06cp-63f, 0.0f,
     0.0f, 0.0f, 0x1.5cdbdcp-119f, 0x1.07132cp-18f, 0.0f, 0x1.bd75bap-24f, 0.0f, 0.0f,
     0x1.77542ep-3f, 0.0f, 0.0f, 0.0f, 0x1.a13afep-53f, 0x1.2ee7bp-84f, 0.0f,
     0x1.283528p-125f, 0.0f, 0x1.a0c466p-57f, 0.0f, 0x1.eebeb4p-116f, 0.0f,
     0x1.b8e3dcp-86f, 0x1.26ab3p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6eb5ecp-95f, 0.0f, 0x1.2ee3fp-78f, 0x1.f7da18p-2f, 0.0f, 0x1.f912cep-84f,
     0x1.bbce5ep-84f, 0x1.9ffa34p-114f, 0x1.cf90dcp-83f, 0x1.74d898p-79f, 0.0f, 0.0f,
     0x1.d8868cp-3f, 0.0f, 0.0f, 0x1.e47164p-112f, 0x1.c8dc3p-57f, 0x1.293d42p-120f,
     0x1.b7d05ap-5f, 0.0f, 0x1.9e8fecp-13f, 0x1.13de22p-110f, 0.0f, 0x1.c389a2p-119f,
     0x1.90297ap-16f, 0.0f, 0.0f, 0x1.720298p-59f, 0x1.bfa03ep-81f, 0x1.48a47ap-37f,
     0x1.5f2232p-22f, 0.0f, 0x1.0edaa8p-57f, 0.0f, 0x1.cf808p-74f, 0.0f, 0.0f, 0.0f,
     0x1.aa03dcp-9f, 0x1.d7f638p-101f, 0x1.04dfeep-14f, 0x1.083f22p-26f, 0.0f,
     0x1.e5f9e6p-63f, 0x1.f50778p-81f, 0x1.742e34p-112f, 0x1.dd58f8p-33f,
     0x1.bf3f18p-42f, 0x1.f40b1ep-91f, 0x1.31f614p-21f, 0x1.947fcp-44f,
     0x1.e95b7ep-12f, 0x1.d3329ap-42f, 0x1.3a6cb6p-17f, 0x1.8a457p-33f, 0.0f, 0.0f,
     0.0f, 0x1.0eedfp-67f, 0.0f, 0.0f, 0.0f, 0x1.09e84cp-67f, 0x1.82cac2p-60f, 0.0f,
     0x1.f8f0ep-51f, 0.0f, 0x1.682f64p-44f, 0x1.a9dd72p-80f, 0x1.f9e392p-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.305a2cp-54f, 0x1.b9378ep-19f, 0.0f, 0.0f, 0.0f,
     0x1.cde628p-104f, 0.0f, 0x1.2c5eeep-10f, 0x1.673e42p-94f, 0.0f, 0.0f,
     0x1.82861ap-6f, 0x1.78be2ap-39f, 0x1.bab4p-12f, 0.0f, 0.0f, 0.0f,
     0x1.256062p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a29dep-70f, 0x1.a2e48ep-15f,
     0x1.9178c4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d92e3cp-54f, 0.0f, 0.0f,
     0x1.0c87bep-53f, 0x1.78ec4ep-60f, 0x1.c471a2p-11f, 0.0f, 0x1.6d5c4cp-108f, 0.0f,
     0x1.65abaap-74f, 0.0f, 0x1.55798ep-62f, 0x1.91ff46p-48f, 0x1.43542ap-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d33658p-7f, 0.0f, 0.0f, 0.0f,
     0x1.0cf8p-63f, 0.0f, 0x1.aa66b6p-107f, 0.0f, 0.0f, 0.0f, 0x1.a39912p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e61c5ep-19f, 0x1.17eb5p-51f, 0x1.87791cp-75f,
     0x1.3a4be2p-51f, 0.0f, 0x1.3f6202p-47f, 0x1.3464d4p-72f, 0.0f, 0x1.00dd98p-118f,
     0x1.80db7ap-61f, 0.0f, 0x1.6e5eeep-110f, 0x1.e43336p-116f, 0x1.8f290cp-77f,
     0x1.cc6c46p-110f, 0x1.7746bep-125f, 0.0f, 0x1.64e484p-13f, 0x1.916c2p-106f,
     0x1.9c117ep-66f, 0.0f, 0x1.5b495cp-108f, 0.0f, 0x1.8e1182p-103f, 0.0f,
     0x1.4c0f6cp-35f, 0.0f, 0.0f, 0.0f, 0x1.d8ebccp-48f, 0.0f, 0.0f, 0x1.d53cfep-86f,
     0.0f, 0x1.4ad4e6p-43f, 0.0f, 0.0f, 0x1.f533bep-103f, 0.0f, 0x1.95338p-75f,
     0x1.35968ap-80f, 0.0f, 0x1.142042p-75f, 0x1.41c78cp-73f, 0x1.fe44cep-38f, 0.0f,
     0.0f, 0x1.f00b7p-30f, 0.0f, 0.0f, 0x1.79ccb8p-69f, 0x1.03b11cp-30f,
     0x1.59df6ap-67f, 0x1.548846p-13f, 0.0f, 0x1.1a5dfep-118f, 0.0f, 0x1.c4059p-77f,
     0.0f, 0x1.317d88p-55f, 0x1.df9e04p-13f, 0.0f, 0.0f, 0x1.dc695cp-21f,
     0x1.6fbbe6p-83f, 0x1.51071ep-28f, 0x1.7d5d76p-18f, 0x1.0ef10cp-52f,
     0x1.25930ep-105f, 0x1.ae5b4cp-38f, 0x1.a911ap-57f, 0x1.1b92cep-121f, 0.0f,
     0x1.43b572p-99f, 0.0f, 0x1.d55f5ep-37f, 0.0f, 0.0f, 0.0f, 0x1.5cf54cp-18f,
     0x1.814794p-11f, 0x1.b36ba2p-124f, 0x1.98f0c8p-106f, 0x1.faef92p-78f,
     0x1.493de6p-32f, 0x1.492434p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c77ea8p-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.881cb6p-120f, 0x1.0c1ef8p-87f,
     0x1.83189p-117f, 0x1.4a61f8p-65f, 0x1.94b0dap-65f, 0x1.46a8fp-21f,
     0x1.c6032ep-126f, 0x1.c0828ep-10f, 0.0f, 0x1.d647dcp-90f, 0x1.fb9c6ep-50f,
     0x1.915106p-58f, 0x1p0f, 0x1.2d2ea6p-9f, 0.0f, 0x1.ce001ap-23f, 0x1.8037d4p-86f,
     0.0f, 0x1.308f3ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d896b2p-77f, 0.0f,
     0x1.c6486p-10f, 0x1.821e2cp-105f, 0.0f, 0x1.3d6322p-8f, 0.0f, 0.0f,
     0x1.986b8ep-30f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.f670fp-116f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0ac966p-50f, 0x1.d03394p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c26f5p-79f,
     0.0f, 0.0f, 0x1.214118p-100f, 0.0f, 0x1.69cc32p-93f, 0x1.355412p-91f,
     0x1.fce69cp-47f, 0.0f, 0x1.d43a28p-72f, 0x1.7fe072p-37f, 0x1.f00242p-71f, 0.0f,
     0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sincosf4_u35kvx(tmp0);
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
    printf("Sleef_finz_sincosf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincosf4_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
