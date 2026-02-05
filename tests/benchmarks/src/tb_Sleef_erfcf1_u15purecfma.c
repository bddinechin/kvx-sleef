/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcf1_u15purecfma.c --function \
 *     Sleef_erfcf1_u15purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.fae574p-109f, 0.0f, 0x1.76426ap-91f, 0.0f, 0.0f, 0x1.33d054p-107f,
     0x1p0f, 0x1.4d2f52p-99f, 0.0f, 0x1.d5f0a2p-100f, 0.0f, 0.0f, 0x1.85a794p-77f,
     0.0f, 0.0f, 0.0f, 0x1.d3b944p-74f, 0x1.9d32b2p-54f, 0x1.39ff2p-53f,
     0x1.f06e1cp-72f, 0x1.a147bcp-94f, 0x1.d35e42p-43f, 0x1.fdacf8p-101f,
     0x1.72737ap-12f, 0x1.61c258p-9f, 0x1.ad4bc8p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93a8c6p-96f, 0.0f, 0.0f, 0x1.94ef9p-81f, 0x1.0c5e88p-60f, 0.0f, 0.0f,
     0x1.95ebf6p-108f, 0.0f, 0x1.6b05cp-31f, 0.0f, 0x1.3f0e64p-102f, 0.0f, 0.0f,
     0x1.d47108p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b28ep-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03b6f8p-126f, 0.0f, 0x1.cf9b88p-74f, 0x1.9960bcp-97f, 0x1.52734ap-118f,
     0x1.e95918p-28f, 0x1.9d6b4p-89f, 0.0f, 0x1.74f17cp-2f, 0x1.535d4ap-39f,
     0x1.c2bb76p-5f, 0x1.263358p-15f, 0.0f, 0x1.a42e4p-41f, 0x1.813b0cp-65f,
     0x1.a26b72p-116f, 0x1.ae4274p-8f, 0x1.09b6ep-44f, 0.0f, 0x1.55774ap-87f, 0.0f,
     0.0f, 0x1.48a93p-63f, 0.0f, 0.0f, 0.0f, 0x1.1c4678p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3ccf4p-33f, 0x1.8c513ap-43f, 0.0f, 0x1.da9c66p-26f, 0x1.065d32p-54f,
     0.0f, 0.0f, 0x1.b5e2f6p-125f, 0.0f, 0.0f, 0x1.2f965ep-92f, 0x1.09b3dap-79f, 0.0f,
     0.0f, 0.0f, 0x1.9b2096p-98f, 0.0f, 0x1.8caf7p-79f, 0.0f, 0.0f, 0.0f,
     0x1.90754ap-88f, 0.0f, 0.0f, 0.0f, 0x1.04cf62p-81f, 0.0f, 0.0f, 0.0f,
     0x1.2f552ep-57f, 0.0f, 0x1.39d504p-15f, 0x1.7b8956p-19f, 0.0f, 0x1.15eba4p-27f,
     0.0f, 0x1.e9660ep-42f, 0x1.2f1fd2p-24f, 0.0f, 0x1.9f86a6p-70f, 0x1.603f1ep-20f,
     0.0f, 0.0f, 0.0f, 0x1.383cc8p-88f, 0.0f, 0.0f, 0x1.c6f55cp-39f, 0x1.dd2714p-48f,
     0x1.fce8bp-115f, 0.0f, 0.0f, 0x1.747224p-54f, 0x1.76490ep-118f, 0.0f,
     0x1.3c2ebap-23f, 0x1p0f, 0x1.39e70ap-44f, 0x1.cd1ff8p-18f, 0.0f, 0.0f,
     0x1.3e7bcap-81f, 0.0f, 0x1.2a7478p-107f, 0.0f, 0.0f, 0.0f, 0x1.a3729ap-106f,
     0.0f, 0x1.ae96dcp-31f, 0x1.7267d2p-31f, 0.0f, 0x1.201c02p-4f, 0.0f, 0.0f,
     0x1.60edcap-118f, 0x1.28e81p-111f, 0x1.a8c2fp-29f, 0x1.d85e2p-62f,
     0x1.dc8728p-47f, 0x1.fe659ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb4adep-65f,
     0x1.d11a88p-13f, 0x1.5291d2p-97f, 0x1.f1fac8p-4f, 0x1.f1ee4ep-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.65132cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b41484p-94f,
     0x1.ca3f86p-80f, 0.0f, 0x1.8d7eccp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0e4aep-99f, 0x1.1aaf2p-109f, 0.0f, 0x1.cb4a1ap-88f, 0.0f, 0.0f, 0.0f,
     0x1.c5d0cep-95f, 0x1.2bed56p-95f, 0x1.f76df6p-11f, 0.0f, 0.0f, 0x1.e6fc48p-39f,
     0x1.b50b24p-44f, 0.0f, 0x1.71f04cp-68f, 0.0f, 0x1.3e16b8p-44f, 0x1.36d89ep-3f,
     0x1.96ffep-23f, 0x1.9b32ep-44f, 0x1.37788ap-16f, 0.0f, 0.0f, 0x1.982eap-56f,
     0x1.a4e608p-41f, 0x1.e94c9p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37998cp-89f,
     0.0f, 0x1.17c86cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7ff26p-40f, 0x1.1a9688p-74f,
     0x1.9729d4p-7f, 0.0f, 0.0f, 0x1.e25828p-92f, 0.0f, 0.0f, 0x1.29429cp-12f, 0.0f,
     0x1.79de5ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c7308p-88f, 0.0f, 0x1.ab2236p-87f,
     0x1.1fccaep-42f, 0.0f, 0x1.421fdp-67f, 0x1.7910eap-80f, 0.0f, 0x1.60d41p-46f,
     0.0f, 0x1.fdbab4p-52f, 0.0f, 0.0f, 0x1.5717e2p-126f, 0.0f, 0x1.f24cb6p-105f,
     0x1.b743e2p-91f, 0x1.7188b8p-87f, 0x1.0912fcp-82f, 0.0f, 0x1.154be2p-53f,
     0x1.39c734p-122f, 0.0f, 0.0f, 0x1.d47c74p-80f, 0.0f, 0.0f, 0x1.69788cp-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdd374p-23f, 0.0f, 0.0f, 0.0f, 0x1.0895ap-109f,
     0.0f, 0.0f, 0.0f, 0x1.0f7aaap-20f, 0.0f, 0x1.c1339ap-124f, 0.0f, 0.0f, 0.0f,
     0x1.c314c2p-42f, 0.0f, 0.0f, 0.0f, 0x1.fab4c8p-114f, 0.0f, 0.0f, 0x1.f04882p-31f,
     0x1.178592p-1f, 0.0f, 0.0f, 0x1.069322p-82f, 0x1.875ac2p-91f, 0x1.ce0e1cp-43f,
     0.0f, 0x1.6ce3f8p-122f, 0x1.5ab9a4p-1f, 0.0f, 0x1.c530fap-91f, 0x1.b513p-36f,
     0.0f, 0x1.5cd982p-29f, 0x1.ebc1f2p-84f, 0x1.da27dap-112f, 0x1.801786p-98f,
     0x1.e919f4p-4f, 0x1.dbb7f8p-59f, 0.0f, 0x1.89d486p-99f, 0x1.80a88cp-20f,
     0x1.0b62a6p-16f, 0x1.80d3e6p-77f, 0x1.29b69p-25f, 0x1.c4a122p-21f,
     0x1.7861c4p-91f, 0x1.c1d604p-16f, 0x1.a6975ap-95f, 0x1.2831aap-23f,
     0x1.548b72p-123f, 0x1.0ad284p-41f, 0.0f, 0.0f, 0.0f, 0x1.1cf15cp-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.95ae56p-100f, 0.0f, 0x1.1a9392p-14f, 0x1.25e8aep-103f,
     0x1.fe1ec2p-96f, 0x1.3884bp-15f, 0.0f, 0.0f, 0.0f, 0x1.60ca44p-64f, 0.0f, 0.0f,
     0x1.0926e4p-106f, 0.0f, 0.0f, 0x1.3f4322p-59f, 0x1.487654p-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.91080ap-96f, 0.0f, 0x1.b1e048p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.521664p-23f, 0x1.206d4p-123f, 0.0f, 0x1.ea151ep-75f, 0.0f, 0x1.7b8202p-91f,
     0.0f, 0.0f, 0x1.87c338p-60f, 0x1.3a42c4p-59f, 0.0f, 0x1.8c089ep-19f,
     0x1.d3411ep-121f, 0x1.5192bp-22f, 0x1.b321ep-78f, 0x1.f10ea6p-73f,
     0x1.ce5d3cp-107f, 0.0f, 0.0f, 0x1.1a4bb8p-110f, 0.0f, 0.0f, 0x1.22802ep-9f, 0.0f,
     0x1.76d1b2p-87f, 0x1.ca9274p-17f, 0x1.19f26ep-83f, 0.0f, 0x1.cc3e3ep-27f,
     0x1.d16ed4p-7f, 0x1.0d952ap-47f, 0.0f, 0x1.4c6af2p-59f, 0x1.934134p-101f, 0.0f,
     0x1.744ee2p-85f, 0.0f, 0.0f, 0.0f, 0x1.4f59cap-18f, 0x1.0b5548p-112f, 0.0f,
     0x1.62a0a8p-112f, 0.0f, 0x1.a40c54p-90f, 0x1.ff07a6p-75f, 0.0f, 0x1.132178p-12f,
     0.0f, 0x1.8da35ap-61f, 0.0f, 0x1.4f3acep-44f, 0x1.a30942p-69f, 0x1.09e4eep-97f,
     0.0f, 0.0f, 0x1.2312ecp-68f, 0x1.76c91p-83f, 0.0f, 0x1.637918p-115f, 0.0f,
     0x1.094746p-103f, 0.0f, 0.0f, 0x1.3fef16p-126f, 0x1.96b336p-102f, 0.0f,
     0x1.0668fcp-9f, 0.0f, 0.0f, 0.0f, 0x1.eb3f7ep-18f, 0x1.bf0f1cp-77f,
     0x1.a456a8p-18f, 0.0f, 0.0f, 0.0f, 0x1.d2e4d4p-103f, 0.0f, 0.0f, 0.0f,
     0x1.5f509ap-22f, 0.0f, 0x1.e51a82p-10f, 0x1.bd25fep-33f, 0x1.5d53e2p-52f,
     0x1.1b124ep-49f, 0x1.bbcf02p-64f, 0x1.83d93ep-88f, 0x1.49384p-122f,
     0x1.ee5c4ap-19f, 0x1.3d26dap-69f, 0x1.a8bc8p-75f, 0.0f, 0x1.506fp-39f, 0.0f,
     0.0f, 0x1.4fefd8p-8f, 0x1.78ec44p-103f, 0.0f, 0x1.1c0a0ap-85f, 0x1.664098p-14f,
     0.0f, 0.0f, 0x1.16752ep-108f, 0x1.82634ep-82f, 0x1.caf794p-63f, 0x1.fbdb58p-6f,
     0x1.9d3ce6p-93f, 0x1.994f78p-66f, 0x1.e8323ap-48f, 0x1.d7bb9ep-117f, 0.0f,
     0x1.f48232p-58f, 0.0f, 0x1.3aa66p-32f, 0.0f, 0x1.0ba63ep-7f, 0x1.ad835ap-11f,
     0x1.9b334p-66f, 0.0f, 0.0f, 0.0f, 0x1.adee78p-27f, 0x1.7c481ep-115f,
     0x1.826dc8p-66f, 0x1.aa2c5p-58f, 0x1.8a5954p-55f, 0.0f, 0.0f, 0x1.37d00cp-80f,
     0.0f, 0.0f, 0x1.7147eap-79f, 0.0f, 0.0f, 0x1.783dbep-125f, 0.0f,
     0x1.612e7ep-123f, 0x1.423eccp-91f, 0.0f, 0x1.14459ap-4f, 0.0f, 0.0f, 0.0f,
     0x1.d4881ap-69f, 0x1.b03dd6p-59f, 0x1.126008p-15f, 0.0f, 0x1.f300cap-27f, 0.0f,
     0.0f, 0.0f, 0x1.822a34p-126f, 0.0f, 0.0f, 0.0f, 0x1.fee11cp-49f, 0x1.93b1eep-18f,
     0x1.17264ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fead42p-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1535bp-32f, 0x1.78e962p-100f, 0.0f, 0x1.1bac7cp-106f, 0.0f, 0.0f,
     0x1.3f90a6p-12f, 0x1.205244p-23f, 0x1.5b4a2ep-3f, 0.0f, 0.0f, 0x1.a06824p-46f,
     0x1.f754fp-72f, 0.0f, 0x1.030644p-6f, 0x1.a1b03cp-108f, 0x1.aff0fcp-114f,
     0x1.51b18ep-3f, 0.0f, 0.0f, 0.0f, 0x1.bf6788p-105f, 0.0f, 0x1.be85bap-7f, 0.0f,
     0.0f, 0.0f, 0x1.ef44d8p-125f, 0x1.6d6d62p-15f, 0.0f, 0.0f, 0.0f, 0x1.1785d8p-58f,
     0x1.e13fccp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5737b8p-32f,
     0x1.2fc088p-26f, 0x1.e7f6dep-71f, 0x1.c460ep-45f, 0x1.565b3ep-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6602ep-69f, 0x1.4ae134p-121f, 0.0f, 0.0f,
     0x1.53a0b2p-122f, 0x1.6790fp-41f, 0.0f, 0x1.0ef592p-41f, 0x1.d47378p-115f, 0.0f,
     0x1.d22dc8p-21f, 0x1.582f3ap-75f, 0.0f, 0x1.63ae56p-36f, 0x1.93fd4ap-61f,
     0x1.630e78p-68f, 0x1.f301aap-14f, 0.0f, 0x1.3b8036p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e00bcep-115f, 0x1.183f34p-110f, 0.0f, 0.0f, 0x1.21469cp-31f, 0.0f,
     0.0f, 0x1.6aefcep-10f, 0x1.b812f8p-25f, 0.0f, 0x1.a49c06p-14f, 0x1.b8645cp-82f,
     0x1.99d124p-79f, 0x1.40292p-93f, 0.0f, 0x1p0f, 0.0f, 0x1.a9c618p-74f, 0.0f, 0.0f,
     0x1.dad472p-3f, 0.0f, 0x1.91b256p-103f, 0x1.aa1e5ap-111f, 0x1.c82c34p-49f, 0.0f,
     0x1.cae3f6p-99f, 0x1.960626p-58f, 0x1.844622p-7f, 0.0f, 0.0f, 0.0f,
     0x1.cdf16ap-60f, 0x1.080764p-126f, 0x1.71efd4p-92f, 0x1.79b87cp-51f,
     0x1.c0021p-31f, 0.0f, 0x1.bb0582p-53f, 0.0f, 0x1.6581d2p-51f, 0.0f,
     0x1.7a77fcp-54f, 0x1.df0728p-115f, 0x1.05f5fep-55f, 0x1.2732a6p-110f,
     0x1.2b6446p-102f, 0x1.f3865ep-32f, 0x1.a251ccp-67f, 0x1.74fe38p-123f,
     0x1.ed2c78p-51f, 0x1.824ffp-108f, 0x1.695142p-120f, 0x1.f0b43cp-38f,
     0x1.2f6c62p-9f, 0x1.d2455p-24f, 0x1.1932b2p-73f, 0x1.848138p-76f, 0.0f, 0.0f,
     0x1.452b6ap-53f, 0.0f, 0x1.8288c2p-15f, 0x1.805e8ap-49f, 0x1.b7bdd4p-24f, 0.0f,
     0x1.5ef9a4p-52f, 0x1.df11aap-36f, 0x1.85fbb4p-53f, 0.0f, 0.0f, 0.0f,
     0x1.8a19d6p-1f, 0.0f, 0.0f, 0x1p0f, 0x1.adf184p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b863ap-5f, 0.0f, 0x1.2385c6p-65f, 0x1.ec069cp-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4b387p-17f, 0.0f, 0.0f, 0x1.3ebc4ep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a5168p-33f, 0.0f, 0x1.9da67ep-35f, 0x1.d14abep-11f, 0.0f,
     0x1.d67fbcp-95f, 0x1.24696p-113f, 0.0f, 0x1.410a68p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26a4fcp-45f, 0x1.464fp-7f, 0x1.fea856p-86f, 0x1.15a5ecp-44f, 0x1.c1781p-110f,
     0x1.465bc8p-30f, 0x1.d4a6cap-70f, 0.0f, 0.0f, 0.0f, 0x1.f7d22ep-62f,
     0x1.baee42p-120f, 0.0f, 0x1.8d5c3p-19f, 0x1.68a6acp-30f, 0x1.11ff92p-21f, 0.0f,
     0x1.08e5dcp-88f, 0.0f, 0.0f, 0.0f, 0x1.f4257p-111f, 0x1.7f273cp-81f, 0.0f,
     0x1.b60f3ap-78f, 0x1.069874p-25f, 0x1.71f524p-63f, 0.0f, 0x1.2262d8p-112f,
     0x1.84db1ep-21f, 0.0f, 0.0f, 0x1.8721c2p-101f, 0x1.b669c8p-105f,
     0x1.e34b9cp-114f, 0.0f, 0x1.aa7806p-6f, 0x1.9a6d86p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71116p-19f, 0x1.63bc2ep-9f, 0.0f,
     0x1.7526bp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb50aap-77f, 0.0f,
     0x1.f949eep-103f, 0.0f, 0.0f, 0x1.c9879ep-43f, 0.0f, 0.0f, 0.0f, 0x1.3a41f8p-17f,
     0.0f, 0.0f, 0x1.ca3ff4p-52f, 0x1.e09f76p-89f, 0x1.972fd2p-61f, 0x1.25f52cp-19f,
     0x1.8becf4p-82f, 0x1.1b79d2p-104f, 0.0f, 0x1.749ddap-121f, 0x1.348946p-9f, 0.0f,
     0x1.b57db2p-114f, 0.0f, 0x1.2a3b4p-65f, 0.0f, 0x1.66eda2p-114f, 0x1.ace3a6p-55f,
     0.0f, 0x1.61d0fap-113f, 0.0f, 0.0f, 0x1.70cbfap-64f, 0.0f, 0x1.6719f2p-126f,
     0.0f, 0x1.c6f454p-29f, 0.0f, 0x1.d459bep-122f, 0x1.f013e8p-17f, 0.0f,
     0x1.78b1aep-3f, 0.0f, 0.0f, 0x1.ef5a64p-38f, 0.0f, 0x1p0f, 0x1.ccaab4p-52f,
     0x1.188796p-23f, 0.0f, 0.0f, 0.0f, 0x1.c11148p-38f, 0.0f, 0.0f, 0.0f,
     0x1.7ce6bep-13f, 0x1.bea8acp-16f, 0.0f, 0x1.4f4884p-55f, 0x1.a291bcp-58f, 0.0f,
     0.0f, 0x1.cb52b2p-2f, 0.0f, 0x1.94f536p-115f, 0x1.74b1dcp-7f, 0x1.fc37f8p-123f,
     0.0f, 0.0f, 0.0f, 0x1.0ff566p-91f, 0x1.9d9662p-47f, 0x1.e0f1bcp-124f, 0.0f,
     0x1.13d8cap-50f, 0.0f, 0.0f, 0x1.7b5d1p-40f, 0x1.66e87ep-59f, 0x1.6bdec2p-37f,
     0x1.32b494p-28f, 0x1.440acep-92f, 0x1.4a1278p-13f, 0x1.2b4036p-11f,
     0x1.bfc63p-12f, 0.0f, 0x1.6ae75ep-38f, 0x1.0d86a8p-53f, 0x1.40c526p-64f,
     0x1.454eacp-76f, 0.0f, 0x1.e782d2p-45f, 0x1.9c484ap-36f, 0.0f, 0x1.ef9c2ap-13f,
     0x1.2bd1fep-44f, 0x1.35e6f6p-8f, 0x1.e0dcf2p-113f, 0.0f, 0.0f, 0x1.a2c958p-50f,
     0x1.53e188p-102f, 0.0f, 0x1.8c60d6p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73a41ep-115f, 0.0f, 0x1.5b0e6ap-28f, 0x1.081e7ap-112f, 0.0f, 0.0f, 0.0f,
     0x1.9b85e8p-58f, 0x1.42a21ap-57f, 0.0f, 0x1.d3cab8p-70f, 0.0f, 0x1.d59e98p-83f,
     0x1.619ec8p-15f, 0x1.8eeac6p-77f, 0x1.fde258p-29f, 0.0f, 0x1.eb9758p-115f, 0.0f,
     0x1.8d0e78p-26f, 0x1.17a42cp-73f, 0.0f, 0x1.af8bd2p-110f, 0.0f, 0.0f, 0.0f,
     0x1.5737f2p-44f, 0.0f, 0.0f, 0x1.0caba2p-16f, 0.0f, 0x1.507c5cp-20f,
     0x1.361cd4p-83f, 0.0f, 0.0f, 0x1.99f1cap-93f, 0x1.4a991p-90f, 0x1.58922ep-10f,
     0x1.5e9636p-74f, 0x1.5eb212p-37f, 0x1.191116p-63f, 0.0f, 0x1.78fbcp-61f,
     0x1.d9bbb2p-88f, 0.0f, 0x1.8861d6p-27f, 0.0f, 0.0f, 0x1.e9b9c2p-10f,
     0x1.3b3038p-99f, 0x1.e7321cp-97f, 0x1.2316fcp-105f, 0x1.0eab2ep-57f,
     0x1.f4e608p-19f, 0x1.b8a1d6p-31f, 0x1.811108p-80f, 0.0f, 0x1.25009ap-36f, 0.0f,
     0x1.03bbe4p-11f, 0x1.cb2a66p-25f, 0x1.fa0accp-63f, 0x1.b15aacp-30f,
     0x1.b56bcep-40f, 0x1.ecaa3ep-78f, 0.0f, 0.0f, 0x1.004be4p-99f, 0.0f,
     0x1.bafa2cp-22f, 0.0f, 0x1.481588p-88f, 0.0f, 0.0f, 0.0f, 0x1.c68deep-73f,
     0x1.cb72cp-22f, 0.0f, 0.0f, 0x1.cbd30cp-34f, 0x1.9ce8d8p-22f, 0x1.37216cp-74f,
     0.0f, 0x1.bb5252p-60f, 0.0f, 0x1.dffab4p-67f, 0x1.93ae2ep-97f, 0.0f,
     0x1.704202p-21f, 0.0f, 0.0f, 0.0f, 0x1.148044p-57f, 0.0f, 0.0f, 0x1.b5098p-74f,
     0.0f, 0x1.505e22p-48f, 0.0f, 0.0f, 0.0f, 0x1.27538ep-28f
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
            tmp1 = Sleef_erfcf1_u15purecfma(tmp0);
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
    printf("Sleef_erfcf1_u15purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erfcf1_u15purecfma bench acc %a\n", global_bench_acc);
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
