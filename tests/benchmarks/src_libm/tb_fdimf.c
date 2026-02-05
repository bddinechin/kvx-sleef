/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_fdimf.c --function fdimf --arity 2 --headers \
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
     0.0f, 0x1.2d7d82p-123f, 0x1.4dc2a4p-23f, 0.0f, 0x1.7763b6p-34f, 0.0f, 0.0f,
     0x1.5eb4cep-67f, 0.0f, 0x1.5202c6p-29f, 0x1.7e1fc6p-123f, 0x1.0e6398p-21f,
     0x1.96c91ep-11f, 0.0f, 0x1.91287p-110f, 0x1.739e06p-53f, 0.0f, 0.0f,
     0x1.b51bccp-32f, 0x1.4a0648p-23f, 0x1.af05f6p-7f, 0.0f, 0x1.6041ecp-1f, 0.0f,
     0.0f, 0x1.cf0ac8p-27f, 0x1.0760d8p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b5d758p-73f, 0.0f, 0x1.910958p-22f, 0x1.58c832p-16f, 0x1.3f7ff8p-126f,
     0x1.6e359cp-23f, 0x1.1354aap-72f, 0.0f, 0x1.e27bbap-97f, 0.0f, 0x1.be96bp-76f,
     0x1.3e2e3cp-115f, 0.0f, 0.0f, 0x1.759894p-73f, 0x1.bf17d2p-30f, 0.0f,
     0x1.6a74bap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.167e5cp-95f, 0.0f,
     0x1.67825ap-100f, 0x1.9a878ep-32f, 0x1.fc9ffap-110f, 0x1.e216f8p-55f, 0.0f,
     0x1.6542a6p-48f, 0x1.d16de4p-79f, 0x1.fb5adep-92f, 0.0f, 0.0f, 0x1.510c38p-48f,
     0x1.22860cp-43f, 0.0f, 0x1.175b68p-105f, 0.0f, 0x1.ef391p-16f, 0x1.9ec2dp-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2222eep-114f, 0x1.a26c3p-28f, 0x1.27e8fcp-118f, 0.0f,
     0x1.150fb6p-46f, 0x1.9485eap-110f, 0.0f, 0x1.4f15bp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a1f52cp-104f, 0x1.b66f14p-95f, 0x1.f29648p-85f, 0.0f, 0.0f,
     0.0f, 0x1.b9b45p-21f, 0.0f, 0x1p0f, 0.0f, 0x1.8c7788p-20f, 0x1.1b0b46p-58f,
     0x1.2d92f8p-66f, 0x1.13a96ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.797f04p-100f,
     0x1.4ec3d2p-40f, 0.0f, 0x1.eb2f4p-105f, 0.0f, 0x1.97d25ep-84f, 0x1.3bf6e4p-63f,
     0x1.8b975cp-37f, 0x1.e89816p-39f, 0.0f, 0x1.1079fp-34f, 0x1.2eb65p-71f, 0.0f,
     0x1.8ea0fp-94f, 0.0f, 0x1.1abad2p-23f, 0x1.705a9p-75f, 0x1.a313d4p-22f,
     0x1.eefe62p-30f, 0.0f, 0.0f, 0x1.66c868p-28f, 0.0f, 0x1.bc0feap-8f, 0.0f, 0.0f,
     0.0f, 0x1.b070dap-108f, 0.0f, 0x1.0f0a3cp-104f, 0x1.3fed7cp-84f, 0.0f, 0.0f,
     0x1.1ddafap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.125838p-113f, 0x1.996d7ep-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e5c6ep-91f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.23ab9p-9f,
     0.0f, 0x1.34c58p-10f, 0x1.30927ep-122f, 0.0f, 0x1.22ca3ep-32f, 0.0f,
     0x1.024322p-69f, 0x1.736922p-119f, 0x1.320b6ap-95f, 0x1.8b78d4p-25f,
     0x1.e31392p-59f, 0.0f, 0.0f, 0.0f, 0x1.aed81p-58f, 0x1.f9edf4p-67f, 0.0f,
     0x1.deb2p-65f, 0.0f, 0.0f, 0x1.ff4eb8p-42f, 0x1.3950c4p-122f, 0.0f,
     0x1.ba41dp-81f, 0x1.462ceep-28f, 0x1.300542p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80424cp-12f, 0.0f, 0x1.8cec28p-61f, 0.0f, 0.0f, 0x1.69ed9p-99f,
     0x1.fedb48p-42f, 0x1.ca9cf6p-10f, 0x1.aae82ep-91f, 0x1.539f58p-14f, 0.0f, 0.0f,
     0.0f, 0x1.0e3bacp-69f, 0x1.faabcep-7f, 0.0f, 0.0f, 0.0f, 0x1.ed621cp-81f,
     0x1.081d88p-81f, 0x1.cb0a5cp-91f, 0.0f, 0x1.61caf8p-75f, 0x1.0582b6p-59f,
     0x1.40597ap-79f, 0.0f, 0x1.689cbcp-108f, 0x1p0f, 0x1.92341ap-3f, 0x1.987124p-66f,
     0x1.5826f4p-17f, 0x1.a795c4p-105f, 0.0f, 0.0f, 0x1.ec850ap-24f, 0.0f, 0.0f,
     0x1.805ab2p-18f, 0x1.91c01ep-23f, 0.0f, 0.0f, 0x1.f32a1ap-122f, 0.0f,
     0x1.4bab0ap-36f, 0x1.233d94p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.767012p-101f,
     0x1.abd60ep-88f, 0x1.bcef0ep-126f, 0x1.e39c5p-17f, 0.0f, 0.0f, 0x1.deca9ap-27f,
     0.0f, 0.0f, 0x1.e3ad8ap-64f, 0x1.ebc91ep-107f, 0x1.58f9e8p-97f, 0.0f, 0.0f, 0.0f,
     0x1.0bb4bp-51f, 0x1.dfb918p-34f, 0x1.8d9f9ep-10f, 0x1.74878p-33f, 0.0f, 0.0f,
     0.0f, 0x1.75e782p-67f, 0.0f, 0.0f, 0.0f, 0x1.fd7032p-80f, 0x1.84c3d4p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fecf3cp-69f, 0.0f, 0x1.826094p-105f,
     0x1.a11bd6p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cb74ap-38f, 0.0f, 0.0f,
     0x1.c5ed8ep-114f, 0.0f, 0.0f, 0x1.30e086p-122f, 0.0f, 0x1.264e72p-64f,
     0x1.993582p-84f, 0.0f, 0x1.fca7aep-87f, 0x1.523a2ap-71f, 0.0f, 0.0f,
     0x1.d6e34p-7f, 0.0f, 0.0f, 0.0f, 0x1.7878c8p-99f, 0x1.c83c7ap-101f, 0.0f, 0.0f,
     0x1.d7b836p-121f, 0.0f, 0x1.cc4358p-101f, 0x1.526366p-35f, 0x1.bb4f38p-57f, 0.0f,
     0x1.7348d4p-44f, 0.0f, 0x1.5efa3cp-110f, 0x1.429422p-21f, 0.0f, 0x1.18a344p-6f,
     0x1.db5436p-88f, 0.0f, 0x1.ecd1dap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a2a64p-87f, 0x1.33da9p-91f, 0.0f, 0.0f, 0x1.cdc48ap-19f,
     0x1.ea75bcp-9f, 0.0f, 0.0f, 0.0f, 0x1.5d079ap-83f, 0.0f, 0x1.fb2bd8p-26f, 0.0f,
     0.0f, 0.0f, 0x1.4a98fcp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86047p-122f, 0.0f, 0.0f,
     0.0f, 0x1.cb535ep-38f, 0x1.37c9acp-33f, 0.0f, 0x1.3eb22cp-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.802b9ep-107f, 0.0f, 0x1.ca53fp-60f, 0x1.b504fp-58f, 0.0f,
     0x1.0a7d4ap-90f, 0.0f, 0x1.d79d18p-8f, 0.0f, 0.0f, 0x1.3344dap-45f,
     0x1.17ef14p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d112ep-83f, 0x1.8cd2aap-32f,
     0.0f, 0.0f, 0x1.e2a4fcp-107f, 0x1.aa2888p-94f, 0.0f, 0x1.7274dcp-34f,
     0x1.6f8f56p-18f, 0.0f, 0x1.d3f56p-90f, 0.0f, 0.0f, 0.0f, 0x1.ad1826p-31f, 0.0f,
     0x1.d268dcp-103f, 0x1.b5276p-73f, 0.0f, 0.0f, 0.0f, 0x1.e774aap-49f, 0.0f, 0.0f,
     0x1.ab68d2p-109f, 0.0f, 0.0f, 0x1.0c4006p-18f, 0.0f, 0x1.5dc8fcp-83f,
     0x1.90767cp-94f, 0x1.7fe696p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0182d8p-99f, 0.0f,
     0x1.0ba514p-70f, 0x1.1a67e2p-35f, 0x1.7a6cfap-61f, 0.0f, 0.0f, 0x1.a788aep-118f,
     0x1.7d59d4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.707ba8p-74f, 0x1.4fcc86p-51f, 0.0f,
     0x1.68a872p-16f, 0x1.25835cp-41f, 0.0f, 0.0f, 0x1.dabbb8p-21f, 0x1.d38442p-75f,
     0x1.ef69ap-113f, 0.0f, 0.0f, 0x1.71c0e2p-112f, 0x1.a8ed76p-81f, 0x1.8a26ep-21f,
     0x1.98727ep-79f, 0.0f, 0.0f, 0x1.935064p-45f, 0.0f, 0.0f, 0x1.2489a8p-8f,
     0x1.38a6dcp-107f, 0x1.3cf334p-23f, 0.0f, 0.0f, 0.0f, 0x1.c92996p-57f, 0.0f,
     0x1.9db33p-46f, 0x1.997edap-75f, 0.0f, 0.0f, 0.0f, 0x1.626214p-121f,
     0x1.6c2784p-22f, 0.0f, 0x1.bd6ba2p-78f, 0.0f, 0.0f, 0x1.2f5d48p-61f,
     0x1.91cc3cp-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16db16p-19f, 0.0f, 0.0f, 0.0f,
     0x1.63acaep-53f, 0x1.e0275cp-40f, 0.0f, 0x1.ae4d4cp-72f, 0.0f, 0x1.8cf7eap-35f,
     0.0f, 0x1.72b28p-85f, 0.0f, 0x1.48ac8ep-50f, 0.0f, 0.0f, 0x1.af9c48p-45f, 0.0f,
     0x1.8f726cp-121f, 0x1.0c728p-24f, 0.0f, 0x1.d0540ep-83f, 0.0f, 0.0f, 0.0f,
     0x1.a452d4p-91f, 0x1.be7274p-80f, 0.0f, 0.0f, 0x1.c05456p-99f, 0.0f,
     0x1.505e9ap-86f, 0x1.f0862ap-97f, 0x1.e2309ap-102f, 0x1.096f36p-1f, 0.0f,
     0x1.99f866p-66f, 0.0f, 0.0f, 0.0f, 0x1.4971e8p-9f, 0.0f, 0.0f, 0.0f,
     0x1.bb13b8p-50f, 0.0f, 0.0f, 0x1.8514c6p-72f, 0.0f, 0x1.66d75cp-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b1f47p-118f, 0x1p0f, 0x1.cadb6cp-93f, 0x1.812f6ep-117f,
     0.0f, 0x1.4bf266p-58f, 0.0f, 0x1p0f, 0x1.abde64p-114f, 0.0f, 0.0f,
     0x1.597cbcp-7f, 0.0f, 0x1.c49d9p-49f, 0.0f, 0.0f, 0x1.fe175p-73f,
     0x1.3c5fcep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39f728p-92f,
     0x1.499dfep-45f, 0x1.c3c3cep-76f, 0.0f, 0.0f, 0x1.78a81p-73f, 0.0f,
     0x1.5e0b34p-12f, 0x1.76f778p-28f, 0x1.d3340ap-77f, 0.0f, 0x1.70845cp-103f, 0.0f,
     0.0f, 0x1.13ba1p-111f, 0.0f, 0.0f, 0.0f, 0x1.48648cp-125f, 0.0f,
     0x1.b700a4p-126f, 0x1.08a13ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be20dp-56f,
     0x1.0bb786p-40f, 0.0f, 0.0f, 0x1.415648p-112f, 0x1.b2878ap-60f, 0.0f, 0.0f,
     0x1.8a092cp-44f, 0x1.26f6c2p-122f, 0.0f, 0.0f, 0x1.5dc86ep-88f, 0x1.687e1ep-49f,
     0.0f, 0x1.34a3f4p-38f, 0.0f, 0x1.078e38p-4f, 0x1.d475b8p-28f, 0x1.73d0a4p-93f,
     0x1.ae487p-9f, 0x1.98685ap-94f, 0x1.806912p-47f, 0.0f, 0x1.4a0a9ap-99f, 0.0f,
     0.0f, 0.0f, 0x1.801f7ep-66f, 0.0f, 0x1.5edf38p-88f, 0x1.228e68p-121f,
     0x1.ef4e62p-3f, 0.0f, 0x1.7c0556p-62f, 0x1.d3c944p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e2a652p-32f, 0.0f, 0x1.adf27p-24f, 0x1.ed3d8ep-75f,
     0x1.a1cd78p-66f, 0x1.cfc3dap-67f, 0x1.256134p-51f, 0.0f, 0.0f, 0x1.39d534p-104f,
     0.0f, 0.0f, 0.0f, 0x1.d64fe4p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e95972p-109f, 0.0f, 0x1.de1d74p-60f, 0.0f, 0.0f, 0x1.821d74p-56f, 0.0f, 0.0f,
     0x1.9aa7c2p-23f, 0x1.82aaaep-17f, 0.0f, 0x1.79261ap-44f, 0x1.e1219ap-65f, 0.0f,
     0x1.a4994ap-20f, 0x1.5d31cap-52f, 0x1.5f169ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.ba5ca4p-111f, 0x1.7870b8p-14f, 0x1.b114f8p-91f, 0.0f, 0x1.3b4dd2p-36f,
     0x1.0311f8p-125f, 0.0f, 0x1.05e2aep-67f, 0.0f, 0x1.503d32p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44e1bcp-106f, 0x1.af285p-9f, 0x1.c1a5dcp-96f, 0.0f, 0.0f,
     0x1.789efep-111f, 0x1.43f0eap-84f, 0.0f, 0.0f, 0x1.dd672cp-14f, 0.0f,
     0x1.1f80e6p-95f, 0x1.5bb51p-22f, 0.0f, 0x1.35e374p-84f, 0.0f, 0x1.d1a468p-94f,
     0x1.fdadeap-95f, 0.0f, 0x1.a470bcp-119f, 0.0f, 0.0f, 0x1.16249cp-98f,
     0x1.8564acp-24f, 0.0f, 0.0f, 0.0f, 0x1.8a1732p-86f, 0x1.8427ccp-24f, 0.0f,
     0x1.b67f26p-111f, 0x1.8b6508p-38f, 0x1.a71336p-37f, 0.0f, 0.0f, 0x1.5d63ecp-71f,
     0.0f, 0.0f, 0x1.a93f5ep-57f, 0x1.adcc6cp-99f, 0.0f, 0x1.7ba2a2p-74f, 0.0f,
     0x1.859e2cp-103f, 0.0f, 0x1.b296fep-66f, 0.0f, 0.0f, 0x1.51782p-40f,
     0x1.fefea6p-109f, 0x1.972c12p-121f, 0x1.fe7edcp-4f, 0x1.381b2p-65f,
     0x1.74f37ep-113f, 0x1.8143b4p-12f, 0.0f, 0.0f, 0x1.86c06p-13f, 0x1.1edbbp-4f,
     0.0f, 0x1.e64682p-56f, 0x1.a9284cp-17f, 0.0f, 0.0f, 0.0f, 0x1.0892bp-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.955a26p-74f, 0.0f, 0.0f, 0x1.45e962p-17f, 0x1.d647d8p-6f,
     0x1.ecfb84p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80ffbap-61f, 0x1.135f3p-71f,
     0x1.579c9ep-87f, 0.0f, 0x1.bf855ap-104f, 0x1.495314p-58f, 0x1.8e9f6ep-101f, 0.0f,
     0x1.3e8ccep-10f, 0.0f, 0x1.f099f8p-97f, 0.0f, 0x1.b8185cp-73f, 0.0f, 0.0f,
     0x1.0db44ep-113f, 0.0f, 0x1.341582p-7f, 0x1.9d2bap-85f, 0.0f, 0x1.a6b11ap-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ede28p-57f, 0.0f, 0x1.efb43cp-100f, 0.0f,
     0x1.ea48dap-107f, 0x1.e13f7ap-70f, 0.0f, 0x1.c10774p-34f, 0x1.99c644p-34f,
     0x1.281ffap-117f, 0.0f, 0x1.c6153cp-124f, 0.0f, 0x1.e53a32p-91f, 0.0f,
     0x1.a90e86p-2f, 0.0f, 0x1.64e3acp-35f, 0.0f, 0x1.d21ca2p-51f, 0.0f, 0.0f,
     0x1.9bec14p-27f, 0.0f, 0.0f, 0x1.ff0e24p-40f, 0.0f, 0x1.ab4774p-55f, 0.0f,
     0x1.a40f14p-47f, 0.0f, 0x1.1dfb08p-87f, 0.0f, 0x1.599a4ap-82f, 0x1.0954a8p-101f,
     0.0f, 0.0f, 0x1.8fb1bap-40f, 0x1.df8b4ep-63f, 0.0f, 0x1.f68cb6p-92f,
     0x1.be0ebap-61f, 0x1.e38b5cp-35f, 0x1.dbb0f8p-88f, 0.0f, 0.0f, 0x1.394756p-56f,
     0x1.e7286ap-115f, 0.0f, 0x1.9f0362p-89f, 0.0f, 0x1.c79b08p-2f, 0x1.6ce374p-79f,
     0.0f, 0x1.c6d516p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7de2ap-16f, 0.0f, 0.0f,
     0x1.834abap-71f, 0.0f, 0x1.32aec4p-35f, 0.0f, 0x1.5d1db6p-84f, 0.0f,
     0x1.020166p-83f, 0.0f, 0.0f, 0.0f, 0x1.db2554p-37f, 0x1.15fa82p-64f, 0.0f, 0.0f,
     0x1.3af892p-121f, 0x1.5c5eccp-61f, 0x1.f6bbdcp-15f, 0x1.0a57eep-118f, 0.0f, 0.0f,
     0x1.f8d2bcp-50f, 0x1.c2a418p-90f, 0.0f, 0x1.f2402ap-34f, 0.0f, 0x1.065fa2p-50f,
     0x1.5709c2p-17f, 0.0f, 0.0f, 0.0f, 0x1.ba20b8p-124f, 0x1.a0ebcap-73f,
     0x1.df4368p-59f, 0x1.2e223ep-82f, 0x1.a49132p-77f, 0x1.116bf6p-122f,
     0x1.a59fd2p-119f, 0x1.954bbp-114f, 0.0f, 0x1.8afa84p-11f, 0.0f, 0.0f,
     0x1.696f9ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d0accp-125f, 0.0f,
     0x1.23d96ep-76f, 0.0f, 0x1.28a3ep-94f, 0.0f, 0.0f, 0.0f, 0x1.868804p-21f,
     0x1.7a9d8cp-36f, 0x1.e86d6ep-9f, 0x1.89f88ap-119f, 0.0f, 0x1.e837aep-21f, 0.0f,
     0x1.a8004ep-55f, 0x1.da50acp-3f, 0.0f, 0x1.6e54b2p-80f, 0x1.287f86p-92f, 0.0f,
     0.0f, 0x1.3e75fap-53f, 0x1.957dp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8762a2p-34f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.422b08p-80f, 0.0f, 0x1.10b8cp-43f, 0.0f, 0.0f,
     0x1.193602p-84f, 0.0f, 0.0f, 0x1.a53878p-12f, 0.0f, 0.0f, 0x1p0f,
     0x1.3ec2a8p-22f, 0x1.d8cafp-102f, 0.0f, 0x1.ff90bap-104f, 0.0f, 0x1.83c99ep-23f,
     0x1.4bbe92p-54f, 0x1.ec3ad4p-123f, 0x1.7183d4p-53f, 0x1.b0a5bp-33f, 0.0f,
     0x1.681de4p-64f, 0.0f, 0x1.800e76p-20f, 0.0f, 0x1.af30e8p-76f, 0x1.2b20cap-19f,
     0.0f, 0.0f, 0x1.7b7eep-79f, 0.0f, 0.0f, 0x1.9c959cp-97f, 0x1.e2b93cp-99f,
     0x1.d496c6p-24f, 0x1.a040c4p-35f, 0x1.11df0ap-95f, 0x1.7cd6e2p-29f, 0.0f,
     0x1.f5d89p-7f, 0.0f, 0x1.13501p-116f, 0x1.dc3dd8p-41f, 0x1.4222acp-8f,
     0x1.5e90d6p-29f, 0.0f, 0x1.365cc4p-62f, 0x1.64e658p-111f, 0x1.b4e38cp-35f, 0.0f,
     0.0f, 0x1.fef91ap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f23b98p-63f, 0x1.fe722cp-90f,
     0x1.a91c74p-114f, 0.0f, 0x1.cfa9f8p-52f, 0x1.53aeb2p-91f, 0x1.93a79p-41f, 0.0f,
     0.0f, 0x1.159782p-95f, 0.0f, 0x1.c4ac7ep-95f, 0x1.8a5756p-76f, 0.0f,
     0x1.b0570ep-59f, 0x1.d18fd6p-121f, 0.0f, 0x1.35894ap-30f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.fc82ep-53f, 0x1.d87278p-6f, 0x1.03ba4ep-1f, 0x1.550572p-5f, 0.0f,
     0x1.490ceep-6f, 0x1.9e8dfcp-79f, 0x1.6eb138p-50f, 0.0f, 0x1.998aeep-85f, 0.0f,
     0.0f, 0.0f, 0x1.9533dap-55f, 0x1.93282cp-73f, 0.0f, 0.0f, 0.0f, 0x1.8d411ap-82f,
     0.0f, 0.0f, 0x1.2d78a6p-1f, 0.0f, 0.0f, 0.0f, 0x1.eca0f8p-3f, 0.0f,
     0x1.0d369ap-32f, 0.0f, 0x1.d9ba28p-25f, 0x1.23b97p-59f, 0x1.869c1cp-91f, 0.0f,
     0x1.c293a6p-103f, 0x1p0f, 0.0f, 0x1.0c2c7ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8228b4p-40f, 0.0f, 0x1.0cadb2p-27f,
     0x1.c0213ap-28f, 0x1.3a3ba2p-115f, 0.0f, 0x1.a43bf2p-14f, 0.0f, 0x1.df5946p-88f,
     0x1.60876ap-64f, 0.0f, 0x1.564fd4p-31f, 0.0f, 0x1.5f4702p-29f, 0.0f, 0.0f,
     0x1.958a16p-56f, 0.0f, 0.0f, 0.0f, 0x1.eeebe4p-80f, 0.0f, 0x1.a14f16p-116f,
     0x1.1e20a4p-69f, 0x1.685a3cp-120f, 0x1.040072p-65f, 0.0f, 0.0f, 0x1.9bff74p-51f,
     0.0f, 0.0f, 0x1.2bd726p-39f, 0x1.17740ap-126f, 0.0f, 0x1.74fe5ep-86f, 0.0f,
     0x1.6c9932p-66f, 0x1.cbfc1cp-94f, 0.0f, 0x1.2c844p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.be862p-45f, 0.0f, 0x1.562b04p-76f, 0.0f, 0.0f, 0x1.b3e232p-106f,
     0x1.7cfcaap-87f, 0.0f, 0x1.c4dcd8p-91f, 0.0f, 0.0f, 0.0f, 0x1.10041ep-36f, 0.0f,
     0x1.2c5d28p-44f, 0.0f, 0.0f, 0x1.0a62cp-3f, 0x1.b6abb6p-80f, 0x1.98d092p-63f,
     0x1.116c16p-40f, 0.0f, 0.0f, 0x1.0c59d8p-71f, 0x1.83c4d4p-116f, 0x1.304b62p-87f,
     0.0f, 0.0f, 0x1.afcb34p-81f, 0x1.272586p-2f, 0x1.691048p-31f, 0x1.0ab22ap-8f,
     0x1.3e644cp-90f, 0.0f, 0x1.5d2458p-11f, 0x1.72fc2p-46f, 0x1.02f224p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d6358p-29f, 0x1.1f2d68p-11f, 0.0f, 0.0f,
     0x1.52761p-117f, 0x1.0bafa8p-95f, 0x1.0f27aep-67f, 0.0f, 0.0f, 0.0f,
     0x1.cf639ap-3f, 0.0f, 0.0f, 0x1.7b983ep-53f, 0x1.48c0d2p-83f, 0x1.5aadf4p-44f,
     0.0f, 0.0f, 0x1.c8598p-113f, 0x1.7d6abap-53f, 0x1.d24414p-76f, 0.0f,
     0x1.4c11ap-42f, 0.0f, 0.0f, 0x1.f6fb4ap-36f, 0.0f, 0x1.d73614p-17f, 0.0f, 0.0f,
     0.0f, 0x1.796458p-102f, 0x1.119442p-79f, 0x1.2f961cp-14f, 0x1.f934bep-82f,
     0x1.4a0b02p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34218ap-29f, 0x1.2d3838p-7f,
     0.0f, 0.0f, 0.0f, 0x1.f1d89ep-59f, 0.0f, 0x1.208c9cp-102f, 0x1.de4d82p-122f,
     0x1.a866c2p-57f, 0x1.272406p-70f, 0.0f, 0.0f, 0x1.8ecb04p-101f, 0x1.25bc6ap-32f,
     0x1.328d4ap-13f, 0x1.8bbd28p-106f, 0x1.9810aep-86f, 0.0f, 0.0f, 0.0f,
     0x1.cd5962p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a5d45p-13f, 0.0f, 0.0f, 0.0f, 0x1.00e9b2p-32f, 0.0f, 0.0f,
     0x1.3dee62p-63f, 0x1.c8408p-125f, 0x1.e01b46p-83f, 0x1.c89f86p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4a553ap-76f, 0.0f, 0x1.eeb21cp-55f, 0.0f, 0.0f,
     0x1.a016d6p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.1b693ep-20f,
     0x1.6d5768p-80f, 0.0f, 0.0f, 0x1.f247cep-17f, 0x1.79337cp-34f, 0x1.5c6f02p-54f,
     0.0f, 0.0f, 0x1.2bcb32p-106f, 0.0f, 0x1.054546p-59f, 0.0f, 0x1.ae5826p-79f, 0.0f,
     0x1.895d3p-64f, 0.0f, 0.0f, 0.0f, 0x1.2a029p-13f, 0.0f, 0x1.87ffd6p-42f,
     0x1.c16afap-97f, 0x1.fd9a1p-77f, 0x1.8b6236p-15f, 0x1.f7a3ep-118f,
     0x1.3aa8aap-117f, 0.0f, 0x1.5ab3ecp-79f, 0.0f, 0x1.55f2c6p-35f, 0x1.501718p-15f,
     0x1.e34854p-107f, 0.0f, 0x1.220f08p-69f, 0x1.bfca72p-58f, 0x1.0396cep-11f, 0.0f,
     0.0f, 0x1.59dd0ep-108f, 0.0f, 0x1.9b59cep-44f, 0x1.c45dd6p-67f, 0x1.c97ap-36f,
     0.0f, 0x1.f5d59p-20f, 0.0f, 0x1.5cc294p-43f, 0.0f, 0x1.9fe276p-11f,
     0x1.1bc546p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efd094p-63f, 0x1.b1c526p-52f,
     0x1.42f86p-2f, 0x1.e419c2p-124f, 0.0f, 0x1.01e258p-51f, 0.0f, 0.0f, 0.0f,
     0x1.9b6982p-113f, 0.0f, 0.0f, 0.0f, 0x1.07fe84p-72f, 0.0f, 0x1.9266b6p-45f, 0.0f,
     0x1.6e2048p-16f, 0.0f, 0.0f, 0x1.1a6314p-32f, 0.0f, 0x1.32676cp-11f,
     0x1.b9e334p-119f, 0x1.cd7176p-3f, 0x1.c98a72p-39f, 0x1.066138p-76f, 0.0f, 0.0f,
     0x1.d5c916p-103f, 0.0f, 0.0f, 0.0f, 0x1.a3bf98p-45f, 0.0f, 0x1.6c1526p-102f,
     0.0f, 0.0f, 0x1.825e32p-99f, 0x1.68a278p-6f, 0x1.864ba6p-82f, 0.0f, 0.0f, 0.0f,
     0x1.e5cf94p-3f, 0.0f, 0x1.32ab92p-65f, 0x1.407cd4p-101f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85df64p-54f, 0.0f, 0x1.6b779cp-39f, 0x1.c23684p-64f, 0.0f,
     0x1.ffcd9p-44f, 0x1.56333ep-20f, 0.0f, 0x1.a100c4p-17f, 0.0f, 0x1.3d4ee2p-2f,
     0.0f, 0x1.86f438p-92f, 0.0f, 0x1.2c4c0ep-117f, 0.0f, 0x1.676862p-45f, 0.0f,
     0x1.60c2acp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f316cp-29f, 0x1.8da848p-72f,
     0x1.7cfcd6p-69f, 0.0f, 0x1.d07112p-66f, 0.0f, 0.0f, 0.0f, 0x1.91148ap-53f,
     0x1.2c8bb4p-66f, 0x1.fad1e6p-1f, 0x1.43526ap-87f, 0x1.6a8acep-116f,
     0x1.9ab3bap-101f, 0.0f, 0x1.927596p-6f, 0.0f, 0.0f, 0.0f, 0x1.ab69aap-10f,
     0x1.8359dp-73f, 0.0f, 0x1.39cad6p-66f, 0.0f, 0.0f, 0.0f, 0x1.d88786p-11f, 0.0f,
     0.0f, 0x1.4d75c8p-101f, 0x1.b36058p-99f, 0.0f, 0x1.28d418p-107f, 0.0f, 0.0f,
     0.0f, 0x1.2e37c8p-12f, 0x1.c40e3cp-125f, 0.0f, 0.0f, 0.0f, 0x1.628716p-45f, 0.0f,
     0x1.eb96dp-36f, 0.0f, 0x1.81a112p-34f, 0.0f, 0x1.93cd62p-36f, 0x1.7e5048p-5f,
     0.0f, 0x1.b5c22ep-67f, 0x1.e1a9f2p-11f, 0x1.b1bbf2p-104f, 0x1.bd936p-53f, 0.0f,
     0x1.5106f6p-87f, 0x1.b39a76p-14f, 0x1.69ed42p-32f, 0x1.67160ap-80f,
     0x1.8ef188p-50f, 0x1.85bc6cp-15f, 0.0f, 0x1.59855p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b1246p-30f, 0x1.cf7a78p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98e6ep-36f,
     0.0f, 0x1.e3120ap-47f, 0.0f, 0x1.ee971cp-11f, 0x1.54c19p-126f, 0x1.f56d4ap-124f,
     0x1.1d5a8p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9efe4p-93f, 0.0f,
     0x1.457816p-85f, 0.0f, 0x1.2fa4fp-89f, 0x1.c7f84ep-68f, 0.0f, 0x1.410568p-112f,
     0x1.a532b6p-77f, 0x1.bf7c08p-14f, 0.0f, 0x1.29eebap-81f, 0x1.5a3072p-61f,
     0x1.ebcea6p-75f, 0.0f, 0x1.4e3594p-39f, 0x1.da5696p-14f, 0x1.dd92d4p-104f, 0.0f,
     0x1.27015ap-23f, 0.0f, 0x1.178208p-83f, 0.0f, 0.0f, 0x1.24f3eap-5f,
     0x1.e7ec58p-3f, 0x1.fb1218p-20f, 0.0f, 0x1.6a0e92p-105f, 0x1.87bcecp-121f,
     0x1.b513e2p-64f, 0.0f, 0x1.d08bdp-117f, 0x1.edb76ap-110f, 0.0f, 0x1.1a7e12p-47f,
     0.0f, 0x1.32629cp-67f, 0x1.cd134ep-9f, 0.0f, 0.0f, 0x1.f5106ep-91f,
     0x1.6113e8p-25f, 0.0f, 0x1.febc6ap-10f, 0.0f, 0.0f, 0x1.081a22p-102f,
     0x1.e27a8p-32f, 0x1.afaa0ep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b62c4p-116f,
     0x1.2c2fa2p-23f, 0.0f, 0.0f, 0x1.ea06ecp-93f, 0.0f, 0x1.bcd046p-76f, 0.0f, 0.0f,
     0x1.e8ecfap-54f, 0x1.7b312cp-100f, 0x1.51ba2cp-55f, 0.0f, 0x1.c38b0cp-9f,
     0x1.33cab2p-77f, 0x1.e8265ap-82f, 0x1.5e1d04p-114f, 0.0f, 0x1.3586aap-71f,
     0x1.c1e63ap-29f, 0.0f, 0.0f, 0x1.749624p-9f, 0x1.89002ap-30f, 0.0f,
     0x1.b17756p-103f, 0x1.c2e5f4p-57f, 0.0f, 0x1.7cee96p-5f, 0.0f, 0.0f, 0.0f,
     0x1.019bcep-41f, 0.0f, 0.0f, 0x1.569796p-120f, 0x1.9c924p-48f, 0.0f, 0.0f,
     0x1.d43674p-57f, 0.0f, 0x1.eceaeep-85f, 0.0f, 0x1.1426ap-31f, 0x1.796268p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aeddd6p-17f, 0.0f, 0.0f, 0x1.be0ebp-56f,
     0x1.8c9a0cp-89f, 0.0f, 0.0f, 0x1.f754fap-16f, 0x1.413e16p-120f, 0.0f, 0.0f,
     0x1.cfa494p-98f, 0x1.980c72p-91f, 0.0f, 0x1.f5f476p-69f, 0.0f, 0x1.1e24b4p-72f,
     0.0f, 0.0f, 0x1.30198ep-53f, 0x1.76f68cp-68f, 0.0f, 0x1.a758a4p-66f,
     0x1.91faccp-116f, 0x1.f33a2ep-84f, 0.0f, 0x1.6bd98ap-55f, 0x1.2dcfa8p-69f, 0.0f,
     0.0f, 0x1.f8df28p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.871a0ap-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb6c9cp-22f, 0x1.660dp-16f, 0.0f,
     0x1.aeafeap-45f, 0.0f, 0.0f, 0x1.be9b9cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8f1212p-85f, 0x1.10c2dep-87f, 0.0f, 0x1.1e4d5cp-61f,
     0x1.0043bep-80f, 0.0f, 0x1.a784acp-3f, 0.0f, 0x1.3aec22p-24f, 0.0f,
     0x1.c73146p-73f, 0.0f, 0x1.9fb44p-86f, 0.0f, 0.0f, 0x1.015b6ap-17f, 0.0f, 0.0f,
     0x1.4b2fe2p-26f, 0x1.c35dd6p-41f, 0.0f, 0x1.e6f23ep-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9ae84p-85f, 0.0f,
     0x1.053ff6p-82f, 0x1.2dc5fep-76f, 0x1.53bcb2p-47f, 0x1.e60cd6p-56f,
     0x1.c3be68p-22f, 0x1.71c7f6p-76f, 0.0f, 0x1.6c9a2p-19f, 0x1.93bb26p-80f,
     0x1.882aa4p-38f, 0x1.0c40c2p-27f, 0x1.70029ap-37f, 0x1.7d2d26p-6f, 0.0f,
     0x1.1e78cap-98f, 0.0f, 0x1.6c814cp-112f, 0x1.e78646p-49f, 0x1.0b0696p-104f,
     0x1.4cf5ap-32f, 0.0f, 0x1.d78ac2p-122f, 0x1.6eb596p-98f, 0x1.ed027ap-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.783d68p-45f, 0x1.f59694p-73f, 0.0f, 0x1.5a7a4cp-123f,
     0.0f, 0x1.89800ap-10f, 0x1.39c52ep-63f, 0.0f, 0x1.974858p-19f, 0x1.6b68c6p-102f,
     0x1.33d524p-7f, 0.0f, 0.0f, 0x1.46df6p-119f, 0.0f, 0x1.918f3ep-14f,
     0x1.0cf1eep-33f, 0x1.dc0c56p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3b2f28p-81f, 0x1.7cf402p-46f, 0.0f, 0x1.639bbap-123f, 0.0f,
     0x1.933004p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.960c84p-11f, 0x1.68a496p-40f, 0.0f,
     0.0f, 0.0f, 0x1.338ac4p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb69b4p-115f, 0.0f,
     0x1.c4eaf6p-32f, 0x1.8e25c8p-36f, 0x1.3abf0ep-7f, 0x1.1151eep-90f,
     0x1.8710bcp-117f, 0x1.4c4192p-49f, 0x1.891b76p-79f, 0x1.4c442ep-103f,
     0x1.76de0ep-31f, 0x1.e6b1aap-104f, 0x1.ef1de2p-79f, 0x1.4179fep-29f,
     0x1.af1ce6p-35f, 0.0f, 0x1.615ea4p-45f, 0x1.7378b2p-101f, 0x1.15205p-15f,
     0x1.e4de16p-63f, 0x1.0a81aap-8f, 0x1.ed58d2p-109f, 0x1.e3a0d4p-56f,
     0x1.2890f8p-20f, 0x1.07ddb8p-8f, 0x1.1244fep-3f, 0.0f, 0x1.5eb1aep-122f, 0.0f,
     0x1.3d73b4p-42f, 0x1.cfcc92p-96f, 0x1.a90fecp-125f, 0.0f, 0x1.d3072cp-95f,
     0x1.f6315ep-41f, 0x1.a16ab2p-13f, 0.0f, 0.0f, 0.0f, 0x1.d1eb52p-13f,
     0x1.980bfep-6f, 0x1.736e34p-6f, 0x1.b6fa88p-116f, 0x1.e40e6ep-84f,
     0x1.dbc8b2p-115f, 0.0f, 0x1.3152d8p-1f, 0.0f, 0x1.fbdd3ep-60f, 0x1.a8e11p-55f,
     0x1.0adc9cp-92f, 0.0f, 0x1.c8547cp-38f, 0.0f, 0x1.442d08p-79f, 0x1.7bc674p-78f,
     0x1.95e0bp-115f, 0x1.66d6aap-57f, 0x1.78825p-17f, 0x1.aa3192p-116f, 0.0f,
     0x1.ee2bc4p-109f, 0.0f, 0x1.adf634p-30f, 0x1.7faf12p-61f, 0.0f, 0.0f,
     0x1.7d9078p-64f, 0.0f, 0x1.beb8acp-8f, 0.0f, 0x1.9081eep-100f, 0x1.58d152p-8f,
     0x1.71350cp-86f, 0.0f, 0.0f, 0x1.55e8fp-37f, 0x1.a17734p-106f, 0x1.71685ap-47f,
     0.0f, 0x1.ad00e2p-49f, 0.0f, 0.0f, 0x1.ca1eaep-58f, 0x1.3349aep-110f, 0.0f,
     0x1.1288c4p-8f, 0.0f, 0x1.0ead98p-17f, 0.0f, 0x1.f826dap-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.041a6ep-126f, 0x1.5c5822p-28f, 0x1.8aac9cp-93f, 0.0f,
     0x1.5ad9e4p-58f, 0x1.0ba49ep-6f, 0.0f, 0x1.01bea6p-94f, 0x1.759152p-87f, 0.0f,
     0.0f, 0.0f, 0x1.8468bap-101f, 0.0f, 0.0f, 0.0f, 0x1.c60ffap-49f, 0.0f,
     0x1.95e78cp-24f, 0.0f, 0x1.4c0b32p-61f, 0x1.71203ap-75f, 0x1.7d63c6p-62f,
     0x1.48eb8ap-116f, 0.0f, 0.0f, 0x1.10142p-106f, 0x1.8c8edcp-52f, 0x1.7bda12p-78f,
     0.0f, 0.0f, 0.0f, 0x1.e32576p-99f, 0x1.09c3fcp-69f, 0.0f, 0.0f, 0x1.0e1e9cp-94f,
     0.0f, 0.0f, 0x1.ce451ap-76f, 0x1.f15704p-9f, 0x1.50a40cp-106f, 0x1.0ad32cp-61f,
     0x1.f8af7ap-67f, 0x1.2e5a6ap-45f, 0x1.4a60c6p-74f, 0.0f, 0x1.b2e4f6p-23f,
     0x1.80fb9ep-120f, 0.0f, 0.0f, 0x1.2977d4p-104f, 0.0f, 0.0f, 0.0f,
     0x1.3e73b6p-92f, 0x1.3069p-70f, 0.0f, 0.0f, 0x1.1984cep-34f, 0x1.680e36p-18f,
     0.0f, 0x1.35a80ep-18f, 0x1.987b6ep-117f, 0x1.1f85c6p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aea924p-75f, 0x1.87971p-28f, 0.0f, 0.0f, 0x1.fe80aep-34f, 0.0f,
     0x1.3ee3b6p-11f, 0x1.7f2806p-106f, 0x1.b95d2p-4f, 0x1.4251aep-41f, 0.0f, 0.0f,
     0x1.fd2ec2p-123f, 0.0f, 0x1.7a73ep-86f, 0.0f, 0.0f, 0x1.da392p-116f, 0.0f, 0.0f,
     0.0f, 0x1.d46d8cp-19f, 0.0f, 0x1.ddfecp-3f, 0.0f, 0x1.1530c6p-50f, 0.0f, 0.0f,
     0x1.c7adccp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08c7bep-60f, 0x1.8c527ep-101f,
     0x1.b28f2cp-42f, 0.0f, 0x1.a56b5cp-58f, 0.0f, 0x1.e4488ap-108f, 0.0f, 0.0f,
     0x1.b9b95p-56f, 0.0f, 0.0f, 0x1.a66c8cp-13f, 0x1.87745ep-48f, 0x1.cd393ep-115f,
     0.0f, 0.0f, 0.0f, 0x1.46827p-104f, 0.0f, 0x1.dc795cp-28f, 0.0f, 0x1.89323ep-19f,
     0x1.81a0a8p-113f, 0.0f, 0.0f, 0x1.694c14p-54f, 0x1.b5a916p-94f, 0.0f,
     0x1.a54df8p-3f, 0x1.bf8b9p-60f, 0x1.2402d2p-14f, 0.0f, 0.0f, 0x1.eaffe6p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b67f6ep-110f, 0x1.05fep-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ea6092p-24f, 0x1.2d5fb4p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.569e4cp-22f,
     0x1.392078p-9f, 0.0f, 0.0f, 0x1.45d468p-83f, 0x1.29b912p-47f, 0x1.40da68p-10f,
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
            tmp2 = fdimf(tmp0, tmp1);
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
    printf("fdimf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("fdimf bench acc %a\n", global_bench_acc);
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
