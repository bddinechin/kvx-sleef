/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf1_purecfma.c --function \
 *     Sleef_finz_sqrtf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.1034bp-87f, 0.0f, 0.0f, 0.0f, 0x1.148e1cp-39f, 0.0f, 0.0f, 0.0f,
     0x1.76e97p-76f, 0.0f, 0.0f, 0.0f, 0x1.846a56p-88f, 0x1.cfedfap-9f,
     0x1.d9f464p-111f, 0.0f, 0x1.71a782p-103f, 0.0f, 0.0f, 0x1.d4f614p-83f, 0.0f,
     0.0f, 0.0f, 0x1.297734p-42f, 0x1.dd4652p-120f, 0x1.6606bcp-125f, 0x1.a70f84p-48f,
     0x1.de5a4cp-36f, 0.0f, 0x1.117518p-36f, 0x1.62e41ep-24f, 0.0f, 0x1.4035d8p-91f,
     0.0f, 0x1.057dp-37f, 0.0f, 0.0f, 0x1.1c769cp-98f, 0.0f, 0x1.e762aap-114f,
     0x1.0cac56p-29f, 0x1.97b3fap-123f, 0x1.6a5ba2p-42f, 0.0f, 0.0f, 0x1.e863b8p-74f,
     0x1.2a9458p-36f, 0.0f, 0x1.7b8338p-120f, 0x1.4c7824p-42f, 0x1.32037cp-26f,
     0x1.0c990ap-110f, 0.0f, 0x1.0d1996p-58f, 0.0f, 0.0f, 0x1.0d6924p-57f, 0.0f, 0.0f,
     0x1.6c48c4p-2f, 0x1.611832p-99f, 0.0f, 0.0f, 0x1.58331ap-43f, 0.0f,
     0x1.ee0beep-8f, 0x1.60cbccp-41f, 0x1.2401cap-7f, 0.0f, 0x1.4599ap-16f,
     0x1.7e8afcp-68f, 0.0f, 0x1.bd142cp-89f, 0x1.85a85ap-46f, 0x1.0c8f2ep-54f,
     0x1.f2ffcep-92f, 0x1.8bb2p-26f, 0.0f, 0x1.ecb888p-31f, 0x1.da3b9ap-68f, 0.0f,
     0.0f, 0.0f, 0x1.c50132p-42f, 0x1.216b6p-86f, 0x1.8f1ca2p-33f, 0x1.8f85a6p-85f,
     0.0f, 0.0f, 0.0f, 0x1.5fc5f4p-117f, 0.0f, 0x1.6c20ep-69f, 0x1.f823fap-32f,
     0x1.787beep-126f, 0.0f, 0x1.2dfa48p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16d038p-66f, 0.0f, 0.0f, 0.0f, 0x1.3391c8p-21f, 0x1.aafddep-92f,
     0x1.5ddfb6p-33f, 0.0f, 0.0f, 0x1.c5fb5ep-5f, 0x1.188e46p-119f, 0x1.0675b8p-75f,
     0.0f, 0.0f, 0x1.3d526ep-14f, 0.0f, 0.0f, 0.0f, 0x1.888d6cp-56f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.08376ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60a93p-31f,
     0x1.29fa1cp-18f, 0x1.c1b344p-58f, 0x1.e7305ap-8f, 0x1.73212p-111f,
     0x1.e82aap-84f, 0x1.bf5ae8p-67f, 0x1.fe3a9cp-97f, 0x1.7e1fc6p-77f, 0.0f,
     0x1.2c4f6ep-97f, 0x1.95ab9cp-112f, 0.0f, 0x1.35ea3p-78f, 0.0f, 0x1.36310cp-65f,
     0x1.d6fdfep-98f, 0.0f, 0x1.236d76p-3f, 0.0f, 0x1.3bdee6p-38f, 0x1.d1aa3ep-99f,
     0x1.5ac172p-79f, 0.0f, 0x1.25e4bp-50f, 0.0f, 0.0f, 0x1.3be678p-123f, 0.0f, 0.0f,
     0x1.83f032p-83f, 0.0f, 0.0f, 0x1.2c7acap-112f, 0x1.828c78p-63f, 0.0f,
     0x1.8df94ap-67f, 0x1.8c586ap-48f, 0x1.245b36p-17f, 0x1.176cf8p-75f,
     0x1.8ccbfap-111f, 0.0f, 0x1.1886dap-67f, 0x1.6e937cp-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e75e2p-91f, 0x1.ed785ep-63f, 0.0f, 0x1.443b74p-27f, 0x1.14bc28p-76f, 0.0f,
     0.0f, 0x1.f58dbap-89f, 0x1.c72fb6p-48f, 0.0f, 0.0f, 0x1.8557dep-12f,
     0x1.1a8d5p-78f, 0.0f, 0x1.0e9cbp-87f, 0.0f, 0x1.9313a8p-121f, 0x1.dfa2fcp-112f,
     0.0f, 0.0f, 0x1.5d3a04p-18f, 0x1.b26222p-74f, 0x1.649aecp-125f, 0.0f,
     0x1.5c4a4p-126f, 0.0f, 0.0f, 0x1.4143a6p-18f, 0.0f, 0.0f, 0x1.d7f64p-5f, 0.0f,
     0x1.f0d936p-116f, 0x1.c1675ap-4f, 0x1.a08f68p-8f, 0.0f, 0x1.07665p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.58f6eap-19f, 0x1.4f9e0ap-78f, 0.0f, 0x1.b1ebccp-92f, 0.0f,
     0x1.cbf916p-58f, 0.0f, 0x1.1c91f2p-23f, 0.0f, 0x1.270122p-42f, 0.0f, 0.0f,
     0x1.92a224p-66f, 0.0f, 0.0f, 0x1.84c026p-51f, 0.0f, 0x1.e160acp-47f, 0.0f, 0.0f,
     0x1.6017bap-59f, 0.0f, 0.0f, 0x1.df8406p-122f, 0x1.df212ep-84f, 0.0f, 0.0f, 0.0f,
     0x1.48ed6p-69f, 0.0f, 0.0f, 0x1.64409p-17f, 0x1.481b74p-22f, 0.0f, 0.0f, 0.0f,
     0x1.2850a8p-51f, 0.0f, 0x1.aec318p-72f, 0x1.aaa832p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fda94p-82f, 0.0f, 0.0f, 0x1.fde39cp-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bcd22p-81f, 0x1.0730c8p-16f, 0x1.4304aep-39f, 0x1.3938eap-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95d784p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.159b4p-22f, 0.0f, 0.0f, 0.0f, 0x1.ffcabp-93f, 0x1.3ede4ep-46f,
     0x1.35aefp-17f, 0.0f, 0.0f, 0x1.74d724p-19f, 0.0f, 0x1.13f31p-19f,
     0x1.0cfe0ep-41f, 0x1.db6028p-10f, 0x1.43c4b6p-55f, 0x1.cc4ba8p-95f,
     0x1.220b0ap-57f, 0.0f, 0.0f, 0x1.657f62p-112f, 0x1.a1016ap-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.36b7cep-57f, 0x1.aad918p-81f, 0.0f, 0x1.1aa596p-33f, 0x1.aabaacp-121f,
     0x1.979d9ep-45f, 0x1.0dacbep-9f, 0x1.1063bep-12f, 0x1.d2309ap-19f,
     0x1.39e35ep-24f, 0x1.e3b048p-85f, 0x1.b31c9ap-95f, 0.0f, 0.0f, 0.0f,
     0x1.16281cp-86f, 0x1.731a8ap-108f, 0x1.c2854ap-112f, 0x1.3dc134p-51f, 0.0f,
     0x1.fd307ep-8f, 0x1.3fd114p-71f, 0x1.e7d2b8p-82f, 0.0f, 0x1.86454ap-1f, 0.0f,
     0x1.275752p-33f, 0x1.1f4b7ep-31f, 0x1.670b54p-27f, 0.0f, 0.0f, 0x1.f8180ap-125f,
     0.0f, 0x1.6cfe7ap-105f, 0x1.fea64ep-104f, 0.0f, 0x1.0930e4p-94f, 0x1.81d58cp-19f,
     0.0f, 0x1p0f, 0x1.88302ap-69f, 0x1.d1a316p-3f, 0x1.46c592p-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e606bap-49f, 0x1.d65b84p-90f, 0.0f,
     0x1.cbe7bcp-73f, 0x1.8b9d4ap-35f, 0.0f, 0.0f, 0x1.8f1292p-85f, 0.0f,
     0x1.254318p-106f, 0.0f, 0.0f, 0x1.d96b22p-22f, 0x1.5f22d2p-47f, 0x1.ff494ep-126f,
     0x1.3bc188p-125f, 0.0f, 0x1.94f1fep-111f, 0x1.c92de2p-7f, 0x1.5b689cp-40f, 0.0f,
     0.0f, 0x1.49e246p-83f, 0.0f, 0x1.bd7546p-18f, 0x1.e815e6p-86f, 0x1.e5e6d8p-29f,
     0x1.5423d6p-57f, 0.0f, 0.0f, 0x1.453a94p-42f, 0.0f, 0.0f, 0.0f, 0x1.fbe12ep-12f,
     0.0f, 0.0f, 0.0f, 0x1.b116bp-18f, 0.0f, 0x1.bd2b48p-95f, 0x1.ecb942p-19f,
     0x1.5182f2p-64f, 0x1.8780a8p-49f, 0.0f, 0x1.ad82b2p-56f, 0x1.dc3986p-63f,
     0x1.d459c4p-54f, 0.0f, 0.0f, 0.0f, 0x1.6bbf54p-22f, 0.0f, 0x1.45ccap-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ab5a6p-57f, 0x1.afd7ecp-110f,
     0x1.367c82p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71c482p-126f, 0x1.994e5cp-125f,
     0x1.2e3deep-13f, 0.0f, 0x1.05372ep-106f, 0x1.568ba8p-98f, 0x1.1869c2p-18f,
     0x1.3670bcp-19f, 0x1.9bfab2p-84f, 0.0f, 0.0f, 0x1.3b162ap-45f, 0x1.2dfdf6p-115f,
     0x1.c10612p-12f, 0.0f, 0.0f, 0x1.1a398ep-113f, 0x1.1022c4p-81f, 0x1.f39f9cp-60f,
     0x1.4db3b2p-118f, 0x1.b3b998p-123f, 0x1.2a7cacp-33f, 0.0f, 0x1.874f58p-5f, 0.0f,
     0x1.87dbp-26f, 0.0f, 0.0f, 0x1.8940eep-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b1c498p-54f, 0x1.f41e2ap-79f, 0.0f, 0.0f, 0x1.f925bep-125f, 0x1.4cd5dcp-71f,
     0x1.226896p-78f, 0.0f, 0.0f, 0x1.628c8cp-44f, 0x1.4d2564p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.16820ap-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3f0d6p-52f, 0.0f,
     0.0f, 0.0f, 0x1.efa898p-9f, 0.0f, 0.0f, 0x1.a21d38p-43f, 0.0f, 0.0f,
     0x1.1aa8b8p-80f, 0.0f, 0.0f, 0x1.79342cp-13f, 0.0f, 0x1.f2a15cp-23f, 0.0f, 0.0f,
     0x1.590d44p-23f, 0.0f, 0.0f, 0.0f, 0x1.4c668ep-85f, 0x1p0f, 0.0f,
     0x1.992748p-59f, 0x1.f990bp-14f, 0x1.38a2bcp-48f, 0x1.adb862p-84f, 0.0f,
     0x1.414c5ap-108f, 0.0f, 0x1.39569cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6a3bc8p-78f, 0x1.dce74ep-22f, 0x1.6b146cp-88f, 0x1.1f18fep-51f,
     0x1.9ccb5p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b604dep-77f, 0x1.a167c4p-19f,
     0.0f, 0x1.7ba78cp-98f, 0x1.e5da52p-82f, 0x1.5b0786p-57f, 0x1.00e182p-39f, 0.0f,
     0.0f, 0.0f, 0x1.11e2e8p-120f, 0.0f, 0x1.439232p-9f, 0x1.81885ap-88f,
     0x1.0709dp-76f, 0x1.16eb04p-22f, 0x1.a6cc96p-39f, 0.0f, 0x1.6adb8p-115f,
     0x1.37aaf8p-90f, 0x1.e41792p-95f, 0.0f, 0x1.a4faccp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6e2d4p-99f, 0x1.a2deeap-29f, 0.0f, 0.0f, 0x1.7d17bcp-91f, 0.0f, 0.0f,
     0x1.770e72p-110f, 0x1.0ad58cp-29f, 0.0f, 0.0f, 0x1.76697ap-126f, 0x1.2feedap-17f,
     0.0f, 0x1.780ab4p-3f, 0.0f, 0.0f, 0.0f, 0x1.cfd508p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e49fecp-97f, 0.0f, 0x1.e12cb6p-15f, 0x1.31049cp-125f, 0x1.2ebba4p-69f,
     0x1.a7033p-69f, 0x1.97b2fap-119f, 0x1.9579dep-94f, 0x1.4284b2p-5f,
     0x1.4dc25ep-5f, 0.0f, 0x1.9fc668p-90f, 0x1.1940aep-87f, 0.0f, 0.0f, 0.0f,
     0x1.4eded4p-96f, 0x1.82eef4p-37f, 0x1.534c96p-111f, 0.0f, 0.0f, 0x1.745094p-78f,
     0x1.e20bf8p-23f, 0.0f, 0.0f, 0x1.6bb2dcp-38f, 0x1.3b0d8ap-59f, 0x1.163e5ap-107f,
     0.0f, 0.0f, 0.0f, 0x1.ae259p-42f, 0x1.381bc4p-123f, 0x1.67e06p-5f, 0.0f, 0.0f,
     0x1.bb73c4p-29f, 0.0f, 0.0f, 0x1.f2c85ap-106f, 0.0f, 0x1.c9cac6p-117f, 0.0f,
     0.0f, 0.0f, 0x1.7ccf84p-68f, 0.0f, 0x1.10650ap-55f, 0x1.3242fcp-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c9b218p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9a38cp-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b5fd72p-102f, 0.0f, 0x1.893484p-107f, 0x1.eb0a96p-56f,
     0x1.ec466p-74f, 0x1.4cdec6p-99f, 0x1.279a0cp-46f, 0.0f, 0x1.3096eap-49f,
     0x1.073dc6p-126f, 0x1.c2638ap-90f, 0x1.bb0426p-59f, 0x1.a87158p-53f,
     0x1.bacdbp-64f, 0x1.c11ea8p-95f, 0.0f, 0x1.9819ecp-103f, 0.0f, 0x1.ce8286p-28f,
     0x1.1aae64p-112f, 0x1.459ad2p-32f, 0.0f, 0x1.fecfdap-78f, 0x1.99474ep-36f,
     0x1.e7b59ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a97454p-121f, 0.0f,
     0x1.c20e18p-89f, 0.0f, 0x1.bf2d0cp-89f, 0.0f, 0x1.83c4c4p-97f, 0.0f, 0.0f,
     0x1.66c32ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e64754p-122f, 0.0f, 0x1.069e6cp-68f,
     0.0f, 0.0f, 0x1.9e6d14p-50f, 0x1.832b7ap-18f, 0.0f, 0x1.7af586p-20f, 0.0f, 0.0f,
     0.0f, 0x1.782afcp-87f, 0.0f, 0x1.caca64p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b491dap-15f, 0x1.0b9d96p-54f, 0x1.caac2ep-71f, 0x1.517e48p-22f, 0.0f, 0.0f,
     0.0f, 0x1.62621p-108f, 0.0f, 0.0f, 0.0f, 0x1.c16d58p-58f, 0.0f, 0.0f,
     0x1.97d5ccp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9275a2p-121f, 0x1.a0341ep-104f,
     0x1.6bf8bep-124f, 0x1.f999aap-3f, 0.0f, 0x1.2b6c8cp-12f, 0.0f, 0.0f,
     0x1.284272p-6f, 0.0f, 0.0f, 0.0f, 0x1.f2ae8ap-93f, 0x1.d625aep-74f, 0.0f, 0.0f,
     0x1.de4c36p-18f, 0x1.ac069ep-43f, 0x1.9c2c9ep-19f, 0x1.07eee2p-22f, 0.0f,
     0x1.8b9718p-12f, 0.0f, 0.0f, 0.0f, 0x1.fe788ap-68f, 0x1.559fcp-88f,
     0x1.f719fp-83f, 0.0f, 0.0f, 0x1.4974fep-54f, 0x1.451bacp-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.67c4dap-50f, 0.0f, 0x1.b7126ap-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2757dcp-66f, 0x1.9f6f78p-34f, 0x1.a3844ap-67f, 0x1.464bd8p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3ae82p-38f, 0x1.c6e562p-36f, 0.0f, 0x1.9c30a4p-29f,
     0x1.63dfc2p-96f, 0x1.1e397ep-8f, 0x1.e70cc2p-59f, 0x1.c7c188p-22f, 0.0f,
     0x1.f22fbep-120f, 0x1.f63902p-8f, 0.0f, 0x1.0ecd66p-18f, 0x1.6afb86p-65f, 0.0f,
     0x1.9d5f0ap-57f, 0.0f, 0x1.e7b104p-65f, 0x1.31e6aep-46f, 0x1.d2201ep-108f, 0.0f,
     0.0f, 0.0f, 0x1.7e07e8p-49f, 0x1.e2743p-58f, 0.0f, 0.0f, 0x1.f483a8p-99f,
     0x1.e68658p-71f, 0.0f, 0x1.fcb8dcp-45f, 0.0f, 0.0f, 0x1.c533a2p-57f,
     0x1.4d490ap-32f, 0.0f, 0.0f, 0x1.ed13dcp-121f, 0.0f, 0x1.c2da28p-38f,
     0x1.92ff26p-96f, 0x1.82f5fep-47f, 0x1.3850bep-67f, 0.0f, 0x1.466614p-33f, 0.0f,
     0x1.d9d918p-71f, 0x1.fbae1p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44194p-18f,
     0.0f, 0.0f, 0x1.dbbf0ap-36f, 0.0f, 0x1.eae742p-73f, 0.0f, 0x1.d556fep-111f, 0.0f,
     0x1.460c4p-96f, 0x1.738acap-40f, 0.0f, 0x1.24487ap-57f, 0x1.9c31ecp-16f,
     0x1.337824p-99f, 0x1.094c72p-17f, 0x1.89d0fap-121f, 0x1.cf12b8p-48f, 0.0f,
     0x1.8d16p-25f, 0x1.dc57e8p-8f, 0x1.e0afb8p-37f, 0.0f, 0x1.bdb078p-120f,
     0x1.efe15p-42f, 0x1.52961ep-28f, 0x1.c9bf9ep-58f, 0.0f, 0.0f, 0.0f,
     0x1.c62618p-12f, 0x1.efad72p-49f, 0x1.4630d4p-121f, 0.0f, 0.0f, 0x1.8c5fcp-67f,
     0x1.218e6cp-101f, 0.0f, 0.0f, 0x1.4c9ce2p-110f, 0.0f, 0x1.193f9p-103f, 0.0f,
     0.0f, 0.0f, 0x1.757902p-63f, 0x1.d7359ap-2f, 0x1.4450fp-70f, 0x1.7378fp-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cbb86p-87f, 0.0f, 0.0f, 0x1.cdd238p-67f, 0x1.c2de5ep-94f,
     0x1.383358p-90f, 0.0f, 0x1.7e5338p-124f, 0.0f, 0.0f, 0.0f, 0x1.4da1c8p-47f,
     0x1.ff04bcp-77f, 0x1.d8e94ep-119f, 0x1.28350cp-47f, 0.0f, 0.0f, 0x1.cfa6e2p-19f,
     0x1.cc5676p-10f, 0x1.69791ap-36f, 0x1.2e472cp-82f, 0x1.d8faccp-1f,
     0x1.068dc8p-43f, 0x1.29ee6p-32f, 0.0f, 0x1.8184f4p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a09b6p-67f, 0.0f, 0.0f, 0x1.e33f1p-82f, 0.0f,
     0x1.7ec15ap-31f, 0x1.d2da46p-74f, 0.0f, 0.0f, 0x1.fcceeap-3f, 0x1.b60dc8p-103f,
     0x1.3867e4p-23f, 0.0f, 0.0f, 0.0f, 0x1.7ccf0cp-19f, 0x1.96e93ap-41f,
     0x1.190cb4p-80f, 0.0f, 0x1.583262p-15f, 0.0f, 0x1.89717ap-25f, 0.0f, 0.0f,
     0x1.0cbdc6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44aa84p-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1b3402p-35f, 0x1.ae36e4p-92f, 0x1.7a088cp-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.373e16p-25f, 0x1.a92554p-57f, 0x1.b016ap-125f, 0.0f,
     0x1.93e5a4p-115f, 0x1.451198p-105f, 0x1p0f, 0x1.6b7c16p-51f, 0x1.8a591cp-50f,
     0.0f, 0x1.70e73ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.670a3p-44f, 0.0f, 0.0f,
     0x1.95ba62p-96f, 0.0f, 0x1.13388cp-113f, 0x1.b30488p-58f, 0x1.cec758p-52f, 0.0f,
     0x1.dd8b76p-118f, 0x1.2ace4cp-102f, 0.0f, 0.0f, 0x1.440816p-33f, 0x1.05e154p-97f,
     0x1.171224p-20f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf1_purecfma(tmp0);
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
    printf("Sleef_finz_sqrtf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf1_purecfma bench acc %a\n", global_bench_acc);
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
