/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f1_u10purecfma.c --function \
 *     Sleef_exp2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0.0f, 0.0f, 0x1.6b583ap-35f, 0x1.b4e90cp-10f, 0.0f, 0x1.0a5762p-106f,
     0x1.923eep-37f, 0.0f, 0x1.50cec2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb7176p-105f,
     0.0f, 0x1.0f55e2p-20f, 0.0f, 0.0f, 0.0f, 0x1.36eecep-118f, 0.0f, 0.0f,
     0x1.a3a29p-50f, 0.0f, 0.0f, 0x1.a9e658p-97f, 0.0f, 0.0f, 0x1.45c0c6p-68f, 0.0f,
     0x1.da3c5ap-69f, 0.0f, 0x1.334e9ep-41f, 0x1.6b6024p-35f, 0.0f, 0x1.9b02c4p-60f,
     0x1.0aa62p-70f, 0.0f, 0x1.43bd5ap-110f, 0x1.46778ep-17f, 0.0f, 0.0f,
     0x1.4b1d82p-42f, 0x1.10df36p-99f, 0x1.01dbb8p-52f, 0.0f, 0x1.272474p-72f,
     0x1.fede0cp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d78db8p-114f, 0x1.05206ap-39f, 0.0f,
     0x1.11441cp-72f, 0x1.70b0cep-55f, 0x1.24dd56p-52f, 0x1.b36edp-107f, 0.0f,
     0x1.088544p-52f, 0x1.68a97cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e531fep-47f, 0x1.371556p-73f, 0.0f, 0.0f, 0x1.960f78p-126f, 0.0f,
     0x1.16fdc8p-69f, 0.0f, 0x1.6e080cp-4f, 0.0f, 0x1.350afp-35f, 0x1.0e98ecp-41f,
     0x1.174b48p-52f, 0x1.51604ap-50f, 0.0f, 0.0f, 0.0f, 0x1.5c375cp-1f, 0.0f,
     0x1.a4d7fap-58f, 0.0f, 0.0f, 0x1.763786p-114f, 0x1.b7bd4ep-32f, 0x1.9461aep-85f,
     0x1.0cc5f2p-17f, 0.0f, 0.0f, 0.0f, 0x1.2e6994p-79f, 0.0f, 0x1.c898c8p-99f, 0.0f,
     0x1.03aee8p-69f, 0x1.f1531p-23f, 0x1.0826ep-81f, 0x1.122f8cp-15f, 0.0f, 0.0f,
     0x1.5292p-44f, 0.0f, 0x1.fe944cp-40f, 0x1.d702a8p-74f, 0x1.7a8d9p-116f,
     0x1.5496a6p-60f, 0.0f, 0x1.9a6462p-22f, 0.0f, 0.0f, 0.0f, 0x1.a93bccp-41f, 0.0f,
     0x1.e68b02p-96f, 0x1.586b58p-85f, 0.0f, 0x1.7f7286p-95f, 0x1.2bcd08p-49f, 0.0f,
     0x1.d9d244p-90f, 0.0f, 0x1.115dbcp-27f, 0x1.04908ap-70f, 0.0f, 0x1.4e8b88p-39f,
     0x1.ec449ep-83f, 0.0f, 0.0f, 0x1.26035ep-50f, 0.0f, 0x1.9c585p-2f,
     0x1.e6ae98p-81f, 0x1.241becp-112f, 0.0f, 0.0f, 0.0f, 0x1.34d93p-32f, 0.0f, 0.0f,
     0x1.a55804p-70f, 0x1.f88d12p-7f, 0.0f, 0x1.1f4604p-19f, 0.0f, 0x1.202e9p-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a58f8ap-35f, 0x1.d30866p-121f, 0x1.54e37ap-87f,
     0x1.b992c6p-11f, 0.0f, 0.0f, 0.0f, 0x1.d0ceecp-125f, 0.0f, 0.0f, 0.0f,
     0x1.d1ca7ap-32f, 0x1.c58444p-59f, 0x1.ad0af4p-52f, 0x1.62fa54p-15f, 0.0f, 0.0f,
     0x1.497ddcp-28f, 0x1.85481ap-69f, 0.0f, 0.0f, 0x1.a9c4f2p-95f, 0.0f, 0.0f, 0.0f,
     0x1.427872p-82f, 0.0f, 0x1.8b4162p-33f, 0x1.85a67cp-14f, 0x1.c0144ep-118f, 0.0f,
     0x1.6a31a2p-77f, 0x1.173774p-69f, 0x1.9171f6p-78f, 0x1.ce342p-119f, 0.0f,
     0x1.1dad58p-64f, 0x1.6f01d8p-116f, 0.0f, 0.0f, 0x1.b219bcp-30f, 0.0f,
     0x1.eb33a8p-34f, 0.0f, 0x1.a256c8p-91f, 0x1.9bea3ep-26f, 0.0f, 0.0f,
     0x1.4a4c06p-47f, 0.0f, 0.0f, 0.0f, 0x1.fadda4p-110f, 0x1.f88bep-9f, 0.0f,
     0x1.7ae8ecp-49f, 0x1.68d272p-82f, 0x1.8a1c06p-15f, 0.0f, 0x1.64e0fp-79f,
     0x1.a19aep-24f, 0.0f, 0.0f, 0x1.af4126p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.d227p-80f, 0.0f, 0x1.9ea364p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.652858p-76f, 0.0f, 0.0f, 0.0f, 0x1.be7f68p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d55f2p-46f, 0.0f, 0.0f, 0x1.8efa6cp-108f, 0x1.cfaa0ep-88f, 0x1.c168b6p-10f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fefb1ap-3f, 0.0f, 0x1.dc378cp-95f, 0.0f,
     0x1.0619fep-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0faff2p-60f, 0x1.6dfe6ep-108f, 0.0f,
     0x1.bf46b8p-7f, 0x1.79f6f4p-74f, 0.0f, 0.0f, 0.0f, 0x1.d61dep-124f, 0.0f,
     0x1.a60312p-16f, 0x1.869238p-78f, 0x1.23e00ep-72f, 0.0f, 0.0f, 0x1.ae27eap-100f,
     0.0f, 0x1.8b2eaap-89f, 0x1.9d31b6p-78f, 0x1.da8d9ap-25f, 0.0f, 0x1.178b1ap-51f,
     0.0f, 0.0f, 0.0f, 0x1.6893cep-82f, 0x1.282c8p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.48716cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c2fc8p-75f, 0x1.dce9a2p-16f, 0.0f,
     0x1.936fdap-90f, 0.0f, 0x1.6ed7cep-73f, 0x1.d36fa6p-91f, 0x1p0f, 0.0f,
     0x1.d8f59p-70f, 0x1.371df6p-8f, 0.0f, 0x1.b1121ep-105f, 0.0f, 0x1.4021dp-54f,
     0.0f, 0x1.4345d8p-116f, 0x1.d98e1p-30f, 0.0f, 0x1.521a38p-12f, 0x1.daa8bcp-102f,
     0x1.ca8802p-111f, 0x1.fc37b2p-49f, 0.0f, 0.0f, 0x1.48532p-70f, 0x1.ffaad8p-121f,
     0x1.18f61ep-20f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.9243ccp-75f, 0.0f,
     0x1.951668p-24f, 0x1.1aed2ep-3f, 0.0f, 0x1.df8ba2p-21f, 0.0f, 0x1.8b5bfep-4f,
     0x1.e4e8a4p-124f, 0.0f, 0.0f, 0x1.b9748ap-38f, 0x1.4ea562p-48f, 0.0f,
     0x1.3b925ep-38f, 0.0f, 0.0f, 0x1.f958f2p-95f, 0.0f, 0.0f, 0x1.74e33ep-101f,
     0x1.c26898p-94f, 0.0f, 0x1.7ddc1p-82f, 0.0f, 0x1.5d5948p-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3955ecp-2f, 0x1.2c1ba4p-55f, 0.0f, 0x1.b01c7ep-117f, 0x1.18edfap-10f,
     0x1.7680c4p-124f, 0.0f, 0x1.cf5f3ap-83f, 0x1.9f1adap-38f, 0.0f, 0x1.616b82p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f7956p-41f, 0.0f,
     0x1.db581ap-112f, 0.0f, 0x1.3841e6p-7f, 0x1.58b38cp-58f, 0x1.9990d6p-57f,
     0x1.76f89p-14f, 0.0f, 0.0f, 0x1.858d6p-31f, 0x1.9b32aap-94f, 0x1.63279ap-17f,
     0.0f, 0.0f, 0x1.718f3p-27f, 0.0f, 0.0f, 0x1.6f6a52p-51f, 0x1.070542p-11f, 0.0f,
     0.0f, 0x1.ac6784p-44f, 0.0f, 0x1.2d20cep-18f, 0x1.7885f6p-82f, 0x1.eb92a4p-101f,
     0x1.d61078p-66f, 0.0f, 0.0f, 0.0f, 0x1.ce59c6p-36f, 0.0f, 0.0f, 0.0f,
     0x1.6fb14cp-55f, 0x1.7187aep-59f, 0.0f, 0x1.ddffbap-76f, 0x1.c4e958p-97f,
     0x1.152272p-75f, 0x1.58cfcep-2f, 0.0f, 0.0f, 0x1.36e0cp-50f, 0x1.f6d84ap-41f,
     0.0f, 0.0f, 0x1.af6c7p-83f, 0x1.36b2b6p-92f, 0.0f, 0x1.e6c6fap-108f,
     0x1.c2210cp-79f, 0x1.62730ep-70f, 0x1.2b1e1ep-55f, 0x1.e3e8aep-35f,
     0x1.e6e52cp-120f, 0x1.b2dad4p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd7164p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.993bd2p-116f, 0.0f, 0.0f, 0x1.94a82ep-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.201602p-14f, 0.0f, 0.0f, 0x1.de15cap-37f, 0.0f,
     0x1.80b0aep-35f, 0x1.75d42p-47f, 0.0f, 0x1.c3655ep-57f, 0.0f, 0x1.4e551p-80f,
     0x1.1768ep-57f, 0x1.bfcfc4p-19f, 0x1.ab63b4p-93f, 0x1.dedcd8p-45f,
     0x1.5601e4p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7c5e8p-80f, 0x1.9007a8p-60f,
     0x1.8fc80ep-107f, 0.0f, 0x1.0cc03cp-112f, 0x1.8d8accp-15f, 0x1.75efecp-24f,
     0x1.0cec78p-125f, 0.0f, 0.0f, 0x1.a8f58p-8f, 0x1.28068p-18f, 0.0f,
     0x1.c498ccp-77f, 0x1.ad011cp-51f, 0.0f, 0.0f, 0x1.683876p-105f, 0.0f,
     0x1.7ae24ep-77f, 0x1.feb688p-53f, 0x1.5e762ap-82f, 0.0f, 0x1.a1db12p-24f,
     0x1.8fdb4p-92f, 0.0f, 0x1.472c2ep-6f, 0x1.163fdcp-44f, 0.0f, 0x1.9ecb44p-64f,
     0x1.91ba82p-94f, 0.0f, 0.0f, 0x1.f5e12ep-35f, 0.0f, 0x1.12c758p-83f,
     0x1.3896f8p-88f, 0.0f, 0x1.24dc56p-84f, 0x1.a59c3ep-10f, 0x1.81d30ep-114f,
     0x1.cf917cp-36f, 0x1.539a0cp-54f, 0.0f, 0x1.28224cp-24f, 0x1.b88c3cp-63f, 0.0f,
     0.0f, 0x1.ae0594p-55f, 0.0f, 0.0f, 0.0f, 0x1.7a4e8ep-93f, 0.0f, 0x1.338496p-85f,
     0.0f, 0x1.697666p-5f, 0x1.b780fp-74f, 0x1.0149c6p-37f, 0.0f, 0.0f,
     0x1.97f928p-126f, 0x1.436fcp-15f, 0x1.d4cd0ap-13f, 0x1.6e1ea4p-81f,
     0x1.aedac2p-119f, 0.0f, 0x1.896ca8p-71f, 0x1.b9cf8cp-6f, 0x1.e24278p-104f, 0.0f,
     0.0f, 0.0f, 0x1.b5aeecp-95f, 0.0f, 0.0f, 0.0f, 0x1.5cc134p-79f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.2d65aep-2f, 0.0f, 0.0f, 0x1.16afccp-125f, 0x1.44cc1ep-23f,
     0.0f, 0x1.f0552p-28f, 0x1.f23a1cp-109f, 0x1.3a748ep-101f, 0x1.d86ebp-83f,
     0x1.e42e12p-33f, 0x1.8abeeap-56f, 0x1.385696p-47f, 0.0f, 0x1.6714ap-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70fddep-35f, 0x1.13b338p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.643bacp-12f, 0.0f, 0.0f, 0.0f, 0x1.026c9cp-8f, 0x1.8801dcp-80f, 0.0f, 0.0f,
     0x1.f383f4p-89f, 0.0f, 0.0f, 0.0f, 0x1.ab1542p-107f, 0x1.14569p-62f,
     0x1.7e86cap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43c294p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe9d02p-1f, 0.0f, 0x1.fc5dap-18f, 0.0f,
     0x1.cc0ff2p-105f, 0.0f, 0x1.14ac16p-20f, 0.0f, 0.0f, 0x1.f4084p-82f, 0.0f,
     0x1.abf658p-70f, 0x1.4c9e34p-61f, 0.0f, 0.0f, 0.0f, 0x1.455aa6p-82f, 0.0f,
     0x1.a64ddep-46f, 0x1.330902p-63f, 0x1.bf9ccep-66f, 0.0f, 0x1.44b5a6p-18f,
     0x1.e58038p-96f, 0x1.33ec9ap-120f, 0x1.64f95ep-71f, 0.0f, 0.0f, 0x1.f459fcp-41f,
     0x1.8558b8p-84f, 0x1.5b8f2p-44f, 0x1.8087f2p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc7846p-80f, 0.0f, 0.0f, 0.0f, 0x1.b219bcp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1a06d6p-68f, 0.0f, 0x1.ac4568p-28f, 0x1.a31932p-46f,
     0x1.3ed79ap-80f, 0.0f, 0.0f, 0.0f, 0x1.dbc08cp-19f, 0x1.6eb95ep-16f,
     0x1.bdab7ep-77f, 0x1.f8a3fep-9f, 0x1.ca7b76p-2f, 0.0f, 0.0f, 0x1.ff403ep-124f,
     0x1.99852ep-76f, 0x1.deb08ap-72f, 0x1.aef3dcp-5f, 0.0f, 0x1.d3df84p-16f, 0.0f,
     0x1.a1a6bp-92f, 0.0f, 0.0f, 0x1.d88eacp-110f, 0.0f, 0.0f, 0x1.bbb898p-105f, 0.0f,
     0x1.3b5328p-50f, 0x1.6c14e2p-1f, 0x1.b44d3ap-105f, 0.0f, 0x1.6ceac2p-103f, 0.0f,
     0x1.930d5ep-60f, 0.0f, 0.0f, 0x1.a3e274p-69f, 0.0f, 0.0f, 0x1.28c576p-126f, 0.0f,
     0.0f, 0.0f, 0x1.83222cp-54f, 0.0f, 0.0f, 0x1.8a2786p-26f, 0x1.41df3cp-103f, 0.0f,
     0x1.e3a46p-34f, 0x1.cc7f52p-82f, 0x1.6798c2p-28f, 0.0f, 0x1.68678ep-111f,
     0x1.9f892p-117f, 0.0f, 0x1.dd448ep-119f, 0x1.28f8c6p-30f, 0x1.21f324p-41f, 0.0f,
     0x1.694ceap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd8268p-126f,
     0x1.6b2804p-7f, 0.0f, 0x1.172c96p-115f, 0x1.49ad52p-100f, 0.0f, 0x1.e2c42cp-35f,
     0x1.988014p-13f, 0.0f, 0x1.ffafc4p-45f, 0x1.21ef8ap-29f, 0.0f, 0.0f,
     0x1.c296b8p-52f, 0x1.96c47ap-51f, 0.0f, 0.0f, 0x1.b65da2p-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.98035p-48f, 0x1.55488p-102f, 0x1.1164a4p-111f, 0x1.dbb53cp-67f,
     0x1.eff502p-8f, 0.0f, 0x1.343edp-45f, 0.0f, 0x1.a7f0f6p-91f, 0x1.97a382p-125f,
     0x1.9cf4ecp-29f, 0.0f, 0x1.782ecep-99f, 0x1.cfeeecp-109f, 0x1.1fb12p-75f,
     0x1.151ecp-55f, 0x1.5ed496p-96f, 0x1.832eb8p-1f, 0x1.74c0c2p-123f,
     0x1.30c02p-93f, 0x1.3821ccp-113f, 0x1.dc9bc2p-113f, 0.0f, 0x1.1e7d62p-110f, 0.0f,
     0.0f, 0x1.80ca38p-105f, 0.0f, 0x1.4f68dep-8f, 0.0f, 0.0f, 0x1.5ed746p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2432dap-110f, 0.0f, 0.0f, 0.0f,
     0x1.544482p-10f, 0x1.fbf8f6p-94f, 0.0f, 0x1.11d00ep-101f, 0x1.eea324p-53f,
     0x1.cbd75ep-7f, 0.0f, 0x1.f27c98p-64f, 0.0f, 0.0f, 0.0f, 0x1.6f824p-84f, 0.0f,
     0x1.5e919ap-41f, 0.0f, 0x1.b01c5ap-31f, 0x1.dd9ccep-46f, 0x1.bfbdf4p-79f, 0.0f,
     0x1.039cbep-21f, 0.0f, 0.0f, 0.0f, 0x1.b9200cp-74f, 0x1.07184cp-65f, 0.0f,
     0x1.043d28p-116f, 0.0f, 0x1.931f2ap-69f, 0.0f, 0x1.dd3c66p-102f, 0.0f, 0.0f,
     0x1.98b268p-41f, 0.0f, 0.0f, 0.0f, 0x1.5e134ap-51f, 0x1.2b7584p-59f,
     0x1.ed06ecp-63f, 0x1.e6ace8p-100f, 0x1.37415ep-2f, 0.0f, 0x1.944a7ap-92f, 0.0f,
     0x1.bbba78p-32f, 0x1.38bc0cp-20f, 0x1.048322p-64f, 0.0f, 0x1.bc0baap-120f,
     0x1.b3a76cp-19f, 0x1.f09ccap-55f, 0.0f, 0x1.4628acp-19f, 0.0f, 0x1.a66178p-3f,
     0x1.3c74dap-8f, 0.0f, 0x1.2a0592p-7f, 0x1.1e7294p-43f, 0x1.bf8abap-48f,
     0x1.d7f4e6p-7f, 0x1.798a18p-46f, 0x1.0d3d6p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.033206p-4f, 0.0f, 0x1.b0117p-111f, 0.0f, 0.0f, 0.0f, 0x1.bdd58p-125f,
     0x1.8390cep-98f, 0.0f, 0.0f, 0x1.7b8b6cp-123f, 0x1.b332acp-21f, 0.0f,
     0x1.b6b568p-81f, 0x1.d45a2p-124f, 0x1.539974p-102f, 0.0f, 0.0f, 0x1.9f132cp-37f,
     0x1.5dc6bcp-47f, 0x1.00707ap-109f, 0x1.69c34p-46f, 0x1.0e9236p-11f,
     0x1.99ea56p-57f, 0x1.accb1cp-91f, 0.0f, 0x1.4b6c62p-13f, 0x1.886e72p-65f,
     0x1.d6294ap-47f, 0x1.24c33ep-122f, 0x1.b41506p-96f, 0.0f, 0.0f, 0x1.30695ap-66f,
     0x1.8f934p-99f, 0.0f, 0x1.46f7bp-80f, 0.0f, 0x1.487164p-21f, 0.0f,
     0x1.2987c8p-32f, 0.0f, 0x1.39a4dcp-82f, 0x1.e3c304p-71f, 0x1.026acp-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6ee2b2p-104f, 0x1.a202e6p-78f, 0.0f, 0.0f, 0.0f,
     0x1.0aa514p-33f, 0.0f, 0x1.b5baaep-2f, 0x1.dc07f6p-45f, 0.0f, 0.0f,
     0x1.ef5006p-63f, 0x1.f897f6p-115f, 0x1.19948ap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.606b6p-36f, 0x1.8f601ap-83f, 0x1.0e3078p-126f, 0x1.76caacp-77f,
     0x1.29ba3ep-109f, 0.0f, 0x1.969c34p-114f, 0x1.63846cp-105f, 0x1.f3db58p-92f,
     0x1.fde404p-107f, 0x1.8d5b0ap-104f, 0x1.a48116p-75f, 0.0f, 0.0f, 0.0f,
     0x1.28e9a4p-5f, 0x1.6a4c18p-20f, 0x1.bbfbbp-10f, 0.0f, 0x1.88c3cap-62f, 0.0f,
     0x1.bac4b8p-7f, 0x1.1c65fp-34f, 0x1.2aff3ep-45f, 0x1.7ed50ap-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cabc8p-118f, 0x1.f3217ep-97f, 0x1.b19e9ap-92f,
     0.0f, 0.0f, 0x1.4893ep-12f, 0.0f, 0.0f, 0x1.1f176ep-33f, 0x1.764144p-119f,
     0x1.0dd2c4p-53f, 0.0f, 0.0f, 0x1.d36024p-10f, 0x1.d09422p-104f, 0.0f,
     0x1.079d3cp-111f, 0.0f, 0x1.aa22dcp-30f, 0.0f, 0.0f, 0.0f, 0x1.0bc6d4p-91f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_exp2f1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_exp2f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
