/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintf1_purecfma.c --function \
 *     Sleef_finz_rintf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ff8624p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e97e72p-81f, 0x1.8ffc9ap-109f,
     0.0f, 0x1.4b1d26p-54f, 0x1.34d6b4p-32f, 0x1.3e2bap-69f, 0x1.5710e2p-83f,
     0x1.fc04f4p-33f, 0.0f, 0x1.f04bd8p-111f, 0.0f, 0.0f, 0x1.bb3e18p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.51a2fp-44f, 0.0f, 0x1.fd1c54p-86f, 0.0f, 0x1.b1759cp-111f, 0.0f,
     0.0f, 0x1.d9ea5p-60f, 0x1.b43ea2p-41f, 0x1.7b643cp-34f, 0.0f, 0.0f,
     0x1.3e3d96p-33f, 0.0f, 0x1.7e3e72p-21f, 0x1.057518p-13f, 0.0f, 0x1.450e44p-66f,
     0x1.9ef0e6p-48f, 0.0f, 0x1.b783a4p-24f, 0x1.e6a6p-20f, 0x1.230a4cp-21f, 0.0f,
     0.0f, 0x1.2363cp-97f, 0x1.4a0cb2p-13f, 0.0f, 0x1.603702p-28f, 0.0f, 0.0f, 0.0f,
     0x1.205fdap-11f, 0x1.659228p-103f, 0x1.3156cap-102f, 0x1.511ef4p-7f, 0.0f,
     0x1.78fa5ep-95f, 0.0f, 0x1.1b6acap-7f, 0x1.0fb88cp-121f, 0.0f, 0x1.0cfbccp-67f,
     0x1.0ecee2p-94f, 0.0f, 0x1.e5987ap-6f, 0x1.6f4706p-38f, 0.0f, 0.0f, 0.0f,
     0x1.5888f8p-61f, 0x1.3d231ep-73f, 0x1.e38d8p-37f, 0.0f, 0x1.fa891ap-8f, 0.0f,
     0x1.7be1cep-62f, 0x1.0e4204p-115f, 0x1.cc8202p-15f, 0x1.62e606p-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7298aep-119f, 0x1.fde82ap-31f, 0x1.88ce46p-12f, 0x1.77a27ep-117f,
     0x1.00ad5ap-99f, 0.0f, 0x1.8bc4c4p-42f, 0x1.0c8892p-110f, 0x1.f6129p-6f, 0.0f,
     0x1.9f06a4p-80f, 0x1.29c582p-34f, 0.0f, 0x1.d4c06p-9f, 0x1.b9948cp-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f50de8p-84f, 0.0f, 0.0f, 0x1.58be28p-67f, 0x1.a6e416p-78f,
     0x1.c6443p-118f, 0x1.8077dp-89f, 0.0f, 0x1.e14cf8p-14f, 0.0f, 0x1.44027cp-81f,
     0x1.553b4p-84f, 0.0f, 0.0f, 0.0f, 0x1.491574p-114f, 0x1.ea9fd8p-89f,
     0x1.efb1e8p-23f, 0x1.90a5p-14f, 0x1.be5b5ap-3f, 0.0f, 0.0f, 0x1.abf15p-84f,
     0x1.cd059p-63f, 0x1.9e06d6p-123f, 0x1.f7e9a8p-54f, 0x1.4bdcc6p-111f,
     0x1.019d26p-86f, 0x1.89a7a6p-58f, 0x1.311538p-120f, 0.0f, 0.0f, 0x1.8c613cp-41f,
     0.0f, 0x1.9aed5p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78db0cp-24f,
     0.0f, 0x1.219ba8p-116f, 0x1.f195eap-39f, 0.0f, 0x1.e36f8p-66f, 0.0f,
     0x1.e27eb8p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9edc8p-86f, 0x1.272e1ep-95f, 0.0f,
     0x1.3cb19cp-115f, 0.0f, 0.0f, 0x1.3dc642p-44f, 0x1.72d7bcp-5f, 0.0f,
     0x1.e5930ap-56f, 0.0f, 0x1.3bb9ap-49f, 0x1.8d882ep-65f, 0x1.99222p-115f, 0.0f,
     0x1.c979fcp-34f, 0x1.c16ea4p-14f, 0.0f, 0.0f, 0x1.4afe82p-59f, 0x1.b1efd2p-74f,
     0x1.1316bcp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e2482p-38f, 0x1.42a164p-88f,
     0.0f, 0x1.69595ap-29f, 0x1.e3cc38p-22f, 0.0f, 0.0f, 0x1.d84adp-105f,
     0x1.f88d4p-23f, 0x1.9e38e8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99595p-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.003a46p-10f, 0.0f, 0x1.cbb612p-83f, 0.0f,
     0x1.67a718p-1f, 0.0f, 0x1.d3f796p-72f, 0.0f, 0x1.2ccc1ap-56f, 0.0f, 0.0f, 0.0f,
     0x1.938cc4p-24f, 0x1.4ee24ap-1f, 0x1.af857ap-65f, 0x1.00abb8p-109f, 0.0f, 0.0f,
     0x1.7d1e7ap-106f, 0.0f, 0x1.d10a5p-116f, 0.0f, 0x1.5495dep-59f, 0x1.0b73dap-8f,
     0.0f, 0x1.e3a8dep-29f, 0x1.1cd96ap-41f, 0.0f, 0.0f, 0.0f, 0x1.04b378p-89f,
     0x1p0f, 0.0f, 0.0f, 0x1.1b0ddcp-23f, 0x1.4e8b8ap-16f, 0x1.811f5ep-91f, 0.0f,
     0.0f, 0x1.e26116p-112f, 0x1.0d3a18p-119f, 0x1.c80f6cp-67f, 0.0f, 0.0f, 0.0f,
     0x1.3e519cp-101f, 0x1.2870aep-63f, 0.0f, 0x1.2607acp-27f, 0x1.1c0c9ep-28f, 0.0f,
     0.0f, 0.0f, 0x1.dd07c2p-126f, 0.0f, 0x1.eeff5ep-62f, 0x1.59e494p-52f, 0.0f,
     0x1.114266p-92f, 0x1.fc6246p-10f, 0.0f, 0.0f, 0x1.75dc96p-60f, 0.0f,
     0x1.fb6e8ep-89f, 0.0f, 0.0f, 0x1.a54192p-110f, 0.0f, 0x1.5b38ecp-85f, 0.0f,
     0x1.a2c78cp-109f, 0.0f, 0.0f, 0x1.3b5ccap-92f, 0.0f, 0x1.ba8896p-41f,
     0x1.bac902p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edd61cp-66f, 0.0f, 0.0f,
     0x1.38f4fp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f28404p-48f, 0.0f, 0x1.64e996p-106f,
     0x1.077602p-73f, 0.0f, 0x1.718f08p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab6014p-120f, 0x1.1544p-49f, 0.0f, 0.0f, 0x1.7840ccp-85f, 0x1.013d2ep-41f,
     0.0f, 0x1.83b13ap-75f, 0x1.0510bcp-103f, 0.0f, 0x1.3e1bbp-111f, 0.0f,
     0x1.f45004p-46f, 0.0f, 0.0f, 0.0f, 0x1.b069f4p-38f, 0.0f, 0x1.4c1b78p-13f, 0.0f,
     0x1.94d5dp-44f, 0.0f, 0x1.26b29cp-31f, 0.0f, 0x1.e097bcp-35f, 0x1.6fdf76p-23f,
     0x1.edb69ep-80f, 0x1.54be4cp-54f, 0.0f, 0.0f, 0.0f, 0x1.80f704p-126f,
     0x1.c92594p-21f, 0.0f, 0x1.43791ap-64f, 0.0f, 0x1.8e917cp-61f, 0.0f,
     0x1.4d294p-60f, 0.0f, 0.0f, 0x1.d8e3f6p-33f, 0x1.8df862p-1f, 0x1.77ecccp-83f,
     0x1.b1a0e2p-56f, 0x1.7f26bp-24f, 0x1.cf1eb2p-78f, 0x1.734d0ep-43f,
     0x1.96474ep-124f, 0x1.993b1ap-38f, 0x1.a3d4aap-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.141984p-99f, 0x1.eb9a56p-81f, 0.0f, 0x1.6cade2p-87f, 0x1.8c416ap-66f, 0.0f,
     0.0f, 0.0f, 0x1.2e2cb2p-8f, 0.0f, 0x1.382984p-95f, 0x1.e6d3e6p-48f, 0.0f, 0.0f,
     0x1.308c1ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70349p-47f, 0.0f,
     0x1.1ce978p-68f, 0.0f, 0x1.ca242p-113f, 0.0f, 0x1.4fda6p-10f, 0.0f,
     0x1.b87abap-75f, 0x1.2cea44p-56f, 0.0f, 0x1.a50696p-82f, 0x1.a38d9ep-32f,
     0x1.7df7d2p-47f, 0.0f, 0.0f, 0x1.989b1ep-49f, 0.0f, 0x1.c196eap-114f, 0.0f,
     0x1.07b2a6p-15f, 0x1.53e402p-77f, 0x1.c4c8acp-46f, 0x1.0cfe5ap-61f,
     0x1.01e5a8p-3f, 0x1.6286cep-9f, 0x1.8dc4aap-18f, 0x1.b470e4p-34f,
     0x1.56ad86p-70f, 0x1.47a35ep-21f, 0x1.689956p-57f, 0x1.833dbep-120f,
     0x1.20655p-84f, 0.0f, 0x1.bd1d58p-82f, 0x1.e0966cp-85f, 0.0f, 0.0f,
     0x1.64142ep-125f, 0x1.4f8f26p-118f, 0.0f, 0x1.776748p-85f, 0x1.1005bap-32f,
     0x1.cde198p-126f, 0.0f, 0.0f, 0.0f, 0x1.78584ap-114f, 0x1.4b1a9p-48f,
     0x1.3d4182p-125f, 0x1.c9efa2p-113f, 0x1.d5ac62p-38f, 0x1.18781ap-9f,
     0x1.7e2ae6p-101f, 0.0f, 0.0f, 0x1.276164p-56f, 0x1.52042ep-112f, 0.0f, 0.0f,
     0x1.c4333ep-42f, 0x1.510e6cp-81f, 0.0f, 0.0f, 0x1.0d0104p-62f, 0.0f, 0.0f, 0.0f,
     0x1.ccb56ep-61f, 0.0f, 0x1.2d6ee8p-96f, 0.0f, 0x1.dabca4p-2f, 0.0f,
     0x1.38c7d4p-64f, 0x1.8f0ac6p-4f, 0x1.c28324p-91f, 0.0f, 0x1.fcce4p-33f,
     0x1.eee48ap-67f, 0x1.f04d5p-10f, 0x1.6f3138p-103f, 0.0f, 0x1.6a3f8ap-72f,
     0x1.f0c316p-13f, 0x1.1762cp-78f, 0x1.5f48ep-15f, 0x1.353fe2p-103f,
     0x1.d6b5e4p-71f, 0x1.8057fcp-88f, 0x1.c65bdap-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d7d22p-107f, 0.0f, 0.0f, 0.0f, 0x1.64477ep-52f, 0x1.92b572p-30f,
     0x1.86f53cp-86f, 0x1.577d4p-87f, 0x1.9091c8p-42f, 0.0f, 0.0f, 0.0f,
     0x1.36b8b2p-36f, 0x1.3061b6p-97f, 0x1.f5c498p-66f, 0x1.466f4p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9c09fap-56f, 0x1.032b08p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0f4e4p-82f, 0x1.b4e806p-54f, 0x1.34b232p-84f, 0x1.dc7adp-126f,
     0x1.434546p-46f, 0x1.75ade2p-96f, 0.0f, 0x1.afd928p-37f, 0.0f, 0x1.9ff8a4p-17f,
     0.0f, 0x1.998234p-14f, 0x1.afee54p-89f, 0x1.2b2e54p-74f, 0.0f, 0.0f, 0.0f,
     0x1.c40a04p-108f, 0.0f, 0x1.dcb6bp-9f, 0.0f, 0x1.072b32p-70f, 0x1.8f52cep-73f,
     0.0f, 0.0f, 0x1.126f5ap-112f, 0.0f, 0x1.2118f4p-2f, 0x1.4e377ap-78f,
     0x1.645d5ep-24f, 0x1.0a7afp-73f, 0.0f, 0x1.3d941p-79f, 0.0f, 0x1.4409e6p-49f,
     0.0f, 0.0f, 0x1.894522p-88f, 0x1.78c6c4p-82f, 0.0f, 0x1.9abe52p-28f,
     0x1.f0bc66p-123f, 0x1.bb7de8p-1f, 0x1.93d9aep-4f, 0.0f, 0.0f, 0x1.bfdb08p-22f,
     0x1.9e2cccp-82f, 0x1.cc309ap-17f, 0x1.300298p-26f, 0.0f, 0.0f, 0.0f,
     0x1.3ae28ep-66f, 0x1.d35df6p-74f, 0.0f, 0x1.d4a162p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cec2cp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe02e6p-13f, 0x1.dfaeecp-81f, 0.0f,
     0x1.b1debcp-47f, 0x1.12eae2p-39f, 0x1.54a772p-57f, 0x1.0784acp-60f, 0.0f,
     0x1.3f6286p-72f, 0.0f, 0x1.66c44p-71f, 0x1.fc685ap-96f, 0.0f, 0x1.1752c4p-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.feafdcp-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb69dp-108f, 0.0f, 0.0f, 0x1.a5e7d4p-37f, 0.0f, 0.0f, 0x1.29298cp-86f, 0.0f,
     0.0f, 0.0f, 0x1.f8464cp-116f, 0.0f, 0.0f, 0x1.4d052ap-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.586308p-107f, 0x1.1ee9cep-78f, 0x1.df2022p-46f, 0x1.b570d8p-62f, 0.0f, 0.0f,
     0x1.54fe58p-103f, 0x1.277a8cp-68f, 0x1.b8ba3ep-42f, 0.0f, 0x1.667d5ep-67f,
     0x1.2b12d6p-74f, 0x1.05a334p-85f, 0x1.7e96ecp-91f, 0x1.52a7bcp-112f,
     0x1.c18ab4p-66f, 0.0f, 0x1.7bad42p-96f, 0x1.294b2p-87f, 0x1.380b02p-51f,
     0x1.ee7bp-72f, 0x1.748324p-62f, 0.0f, 0x1.4fb41ep-92f, 0x1.b07f5ep-26f,
     0x1.686b58p-119f, 0.0f, 0x1.3b7188p-4f, 0x1.469d2ep-13f, 0x1.5f4092p-63f,
     0x1.f5370ep-52f, 0x1.3d1b0cp-81f, 0x1.a7b416p-107f, 0x1.e83878p-80f,
     0x1.18ebe2p-29f, 0x1.ee9a74p-39f, 0x1.2b3294p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b99dep-114f, 0x1.feb9f2p-8f, 0.0f, 0x1.0db8acp-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6afcfp-107f, 0x1.6f33d8p-16f, 0x1.301488p-103f, 0x1.5a50e2p-21f, 0.0f, 0.0f,
     0x1.abb392p-114f, 0x1p0f, 0.0f, 0x1.156314p-74f, 0x1.88dc8ep-41f, 0.0f,
     0x1.32791cp-2f, 0.0f, 0.0f, 0x1.1aee8cp-28f, 0x1.b8930ep-92f, 0.0f,
     0x1.c220eep-49f, 0.0f, 0.0f, 0.0f, 0x1.b1a206p-106f, 0.0f, 0.0f, 0.0f,
     0x1.35031cp-46f, 0x1.d0d71ap-19f, 0.0f, 0x1.9cd65ap-40f, 0x1.590a14p-106f,
     0x1.e890d2p-60f, 0x1.494e18p-61f, 0.0f, 0x1.35743p-38f, 0.0f, 0x1.f9cdfp-54f,
     0x1.de3714p-1f, 0.0f, 0.0f, 0x1.8dc2dcp-104f, 0x1.316376p-27f, 0x1.49facp-122f,
     0.0f, 0x1.52c096p-2f, 0x1.d9dc7cp-51f, 0.0f, 0x1.4794e2p-31f, 0.0f,
     0x1.812a0ep-44f, 0.0f, 0x1.d21f2cp-44f, 0x1.dc9ffep-61f, 0.0f, 0x1.75737p-9f,
     0x1.b2d326p-82f, 0.0f, 0x1.51122ep-41f, 0x1.561b48p-21f, 0.0f, 0x1.0eb888p-6f,
     0.0f, 0x1.3b6884p-100f, 0x1.512dfcp-94f, 0x1.83a8aap-9f, 0x1.b6c4dcp-72f, 0.0f,
     0x1.023072p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.902cf4p-88f, 0.0f,
     0x1.a01b4ap-29f, 0x1.91e39ep-91f, 0.0f, 0x1.b1af42p-116f, 0x1.b1fb56p-10f, 0.0f,
     0x1.86c36ep-49f, 0.0f, 0.0f, 0.0f, 0x1.11d4eep-6f, 0.0f, 0x1.dae866p-64f,
     0x1.3ee102p-86f, 0x1.87a49ep-100f, 0x1.356c4ep-71f, 0x1.393968p-124f, 0.0f, 0.0f,
     0x1.e421dp-15f, 0x1.95b192p-88f, 0.0f, 0x1.a57fdp-35f, 0x1.4787c6p-105f, 0.0f,
     0x1.7e6202p-11f, 0x1.df4566p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1b992p-74f, 0x1.4496fap-48f, 0.0f, 0x1.d5422p-37f, 0.0f, 0.0f,
     0x1.c57a12p-20f, 0x1.3f81d8p-104f, 0x1.a235fp-68f, 0.0f, 0x1.bd277ap-84f, 0.0f,
     0x1.bce88ap-122f, 0.0f, 0x1.ba1f2cp-67f, 0.0f, 0x1.75964ap-12f, 0.0f,
     0x1.36387ap-75f, 0x1.5b6238p-109f, 0.0f, 0x1.7d3cdep-119f, 0.0f, 0x1.d472bap-57f,
     0x1.41b2p-93f, 0x1.dec0e6p-114f, 0x1.82bd52p-15f, 0.0f, 0x1.8513f6p-57f, 0.0f,
     0x1.58ae8ap-69f, 0x1.07b398p-56f, 0.0f, 0.0f, 0x1.beb958p-24f, 0x1.3b5e42p-89f,
     0.0f, 0x1.4bc54ep-64f, 0x1.5adc7ep-69f, 0x1.938538p-20f, 0x1.ddb2eep-69f, 0.0f,
     0x1.b0cdfep-4f, 0x1.b23a2cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02aedcp-12f, 0.0f,
     0x1.fd070ep-116f, 0x1.9de0cep-87f, 0x1.f066ep-33f, 0x1.bb0ca6p-125f,
     0x1.9bb704p-40f, 0.0f, 0x1.36460ap-94f, 0x1.7a5706p-26f, 0x1.6c766p-20f,
     0x1.ce6246p-24f, 0.0f, 0x1.81d4aep-79f, 0.0f, 0.0f, 0.0f, 0x1.db7c22p-42f, 0.0f,
     0.0f, 0x1.765d16p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ceafp-22f, 0.0f,
     0x1.7380ecp-13f, 0x1.6392d8p-49f, 0.0f, 0x1.a911eap-105f, 0.0f, 0x1.d142f4p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9a974p-55f, 0x1.7ee44ap-103f, 0x1.6081b8p-112f,
     0x1.6c0906p-84f, 0.0f, 0.0f, 0.0f, 0x1.54533ap-67f, 0.0f, 0x1.d5a904p-22f,
     0x1.eb11eap-15f, 0x1.1af6e8p-113f, 0.0f, 0.0f, 0.0f, 0x1.b07774p-109f, 0.0f,
     0.0f, 0.0f, 0x1.0a6eb2p-4f, 0.0f, 0x1.48a488p-115f, 0x1.956a62p-18f, 0.0f,
     0x1.c364dap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f902fap-118f, 0x1.3fc738p-12f,
     0x1.e6dff2p-45f, 0x1.378088p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c646cp-104f,
     0x1.d6bbb4p-115f, 0.0f, 0x1.dc0034p-83f, 0x1.7444b8p-105f, 0x1.d9ffeap-124f,
     0x1.0244eep-106f, 0x1.f59692p-86f, 0x1.56e5a8p-65f, 0.0f, 0x1.20b912p-122f,
     0x1.28aff8p-6f, 0.0f, 0x1.3ae78cp-36f, 0x1.164222p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.442b58p-67f, 0x1.d845dcp-8f, 0.0f, 0x1.dd3cep-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.03dc36p-55f, 0x1.beb308p-50f, 0x1.5f76b8p-62f, 0x1.42a58ap-104f,
     0x1.5fda7ep-16f, 0x1.0246bp-24f, 0x1.0729e4p-9f, 0.0f, 0.0f, 0x1.cece4ep-120f,
     0.0f, 0x1.e3aa6ep-71f, 0x1p0f, 0x1.fd0eb2p-30f, 0x1.2bada4p-76f, 0x1.f2ed14p-45f,
     0x1.9f7fbep-68f, 0.0f, 0.0f, 0.0f, 0x1.f6febep-94f, 0.0f, 0x1.9c703ap-31f,
     0x1.8b9b46p-51f, 0x1.9186acp-69f, 0x1.62d804p-112f, 0x1.c9c2cap-79f,
     0x1.5109f2p-69f, 0.0f, 0x1.0619e8p-61f, 0.0f, 0.0f, 0x1.17461cp-108f, 0.0f, 0.0f,
     0x1.17a1eap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e6f5ap-120f, 0x1.3f857cp-125f,
     0.0f, 0x1.6da56cp-18f, 0x1.83da96p-68f, 0x1.3cf4dcp-81f, 0x1.613812p-30f, 0.0f,
     0.0f, 0x1.f75dbcp-27f, 0.0f, 0x1.5fd346p-112f, 0.0f, 0.0f, 0x1.5cab94p-39f,
     0x1.69dc62p-112f, 0.0f, 0x1.2e2922p-65f, 0x1.85f7fcp-103f, 0.0f, 0x1.b8b7ecp-42f,
     0x1.793f8p-38f, 0.0f, 0.0f, 0x1.956e08p-16f, 0x1.6d4ad6p-122f, 0x1.b654cp-125f,
     0x1.c0258cp-110f, 0.0f, 0.0f, 0x1.e43724p-18f, 0x1.72456cp-18f, 0x1.9dcc42p-94f,
     0.0f
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
            tmp1 = Sleef_finz_rintf1_purecfma(tmp0);
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
    printf("Sleef_finz_rintf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_rintf1_purecfma bench acc %a\n", global_bench_acc);
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
