/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10f1_u10purecfma.c --function \
 *     Sleef_log10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.c80196p-25f, 0x1.7a3392p-63f, 0.0f, 0.0f, 0x1.e3d24p-9f, 0.0f,
     0x1.fe423ap-91f, 0.0f, 0x1.4e816ap-117f, 0x1.1d456p-125f, 0.0f, 0x1.61535ep-72f,
     0.0f, 0.0f, 0x1.8b1eb4p-50f, 0x1.3ed0dcp-65f, 0x1.a69c86p-126f, 0x1.ca5c7p-14f,
     0.0f, 0.0f, 0x1.b38a2cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82a36p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2eb28p-25f, 0.0f, 0.0f, 0x1.ed37aap-24f, 0.0f,
     0x1.9f51f4p-66f, 0x1.38971ep-100f, 0.0f, 0.0f, 0x1.8e8066p-123f, 0x1.b6c814p-45f,
     0x1.354974p-98f, 0.0f, 0x1.42752p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dedc0ap-54f, 0x1.17c922p-29f, 0x1.90eb6ep-17f, 0.0f, 0x1.f27a54p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4be5p-114f, 0x1.664142p-11f, 0.0f,
     0x1.6f126cp-80f, 0.0f, 0.0f, 0.0f, 0x1.6360f8p-6f, 0.0f, 0.0f, 0x1.9890cap-15f,
     0.0f, 0x1.46780ap-26f, 0.0f, 0.0f, 0.0f, 0x1.e645c8p-81f, 0.0f, 0x1.d02c04p-37f,
     0.0f, 0.0f, 0x1.195dbp-11f, 0x1.21fbcp-50f, 0x1.c2bb8ap-94f, 0.0f,
     0x1.af459ap-49f, 0x1.5e3fbcp-40f, 0.0f, 0.0f, 0x1.5e2426p-78f, 0x1.2f5606p-109f,
     0.0f, 0.0f, 0x1.fbed2ap-16f, 0.0f, 0x1.264b12p-37f, 0x1p0f, 0.0f,
     0x1.7a765ap-98f, 0x1.3d91d2p-83f, 0.0f, 0x1.8dcab4p-121f, 0x1.7a7cbap-26f, 0.0f,
     0x1.ac028ap-126f, 0.0f, 0.0f, 0x1.24ce34p-46f, 0x1.681a36p-77f, 0x1.73b7c6p-72f,
     0.0f, 0x1.80affp-81f, 0x1.a912b4p-71f, 0.0f, 0x1.b43118p-60f, 0x1.4e94eap-125f,
     0x1.a1f60ap-91f, 0x1.b7f512p-57f, 0.0f, 0.0f, 0x1.e06096p-96f, 0.0f,
     0x1.e3db9ap-40f, 0.0f, 0.0f, 0.0f, 0x1.eb174p-20f, 0x1.87d172p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e117ccp-72f, 0.0f, 0x1.aa70f2p-94f, 0.0f, 0x1.94b6e6p-2f,
     0x1.347d6cp-68f, 0x1.98c7bcp-48f, 0x1.9b16e4p-14f, 0x1.b92a2ep-120f,
     0x1.83ccc8p-60f, 0.0f, 0x1.ebbf02p-70f, 0x1.64338ap-28f, 0.0f, 0x1.7b1008p-119f,
     0.0f, 0.0f, 0.0f, 0x1.80fb8ap-18f, 0.0f, 0x1.9be71cp-115f, 0x1.7d5a08p-120f,
     0.0f, 0.0f, 0.0f, 0x1.996db8p-120f, 0x1.977898p-15f, 0x1.acf966p-69f,
     0x1.6a98bep-116f, 0x1.8781a2p-73f, 0x1.041b0ep-106f, 0.0f, 0x1.853c8ep-78f, 0.0f,
     0.0f, 0x1.a568f8p-78f, 0x1.ccb4f6p-71f, 0x1.545e7cp-48f, 0x1.940272p-38f,
     0x1.c6760ep-105f, 0x1.bf33f4p-107f, 0x1.067e5ap-104f, 0.0f, 0x1.87d02p-51f, 0.0f,
     0x1.c564cp-91f, 0x1.de3448p-27f, 0.0f, 0x1.998abep-102f, 0x1.31e53cp-85f, 0.0f,
     0.0f, 0x1.331e1ep-77f, 0x1.a5f6cp-40f, 0x1.346d4ap-121f, 0.0f, 0x1.9744bep-87f,
     0x1.932374p-51f, 0x1.320828p-103f, 0x1.b1cce2p-124f, 0.0f, 0.0f, 0x1.4e9e86p-93f,
     0x1.9c7b2cp-57f, 0.0f, 0.0f, 0.0f, 0x1.ff360cp-39f, 0x1.2cbdecp-112f, 0.0f, 0.0f,
     0x1.1ae574p-34f, 0x1.288c9ap-14f, 0.0f, 0x1.daf852p-42f, 0.0f, 0x1.2b3282p-99f,
     0.0f, 0x1.814f0cp-76f, 0.0f, 0x1.e4d41p-87f, 0x1.36340ep-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5cf5p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae6166p-117f, 0x1.99a5a8p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6d4422p-4f, 0.0f, 0x1.a8976p-8f, 0x1.9f04a8p-34f, 0.0f, 0.0f,
     0x1.ea65c8p-21f, 0x1.7df608p-11f, 0x1.a9e542p-23f, 0x1.12ac76p-109f, 0.0f, 0.0f,
     0.0f, 0x1.d61bc2p-16f, 0.0f, 0x1.38c35ep-4f, 0.0f, 0x1.48739p-49f, 0.0f,
     0x1.82c9bap-69f, 0x1.2c6f32p-71f, 0.0f, 0x1.e06658p-47f, 0x1.57a6e6p-96f, 0x1p0f,
     0x1.718a12p-110f, 0x1.fb42f6p-22f, 0x1.5b9ddap-72f, 0.0f, 0x1.d695a4p-108f,
     0x1.1f813p-104f, 0.0f, 0x1.c99592p-74f, 0.0f, 0x1.5ddf72p-10f, 0x1.2b437cp-27f,
     0x1.489898p-73f, 0x1.be7776p-97f, 0x1.6a4dfp-10f, 0x1.3f698cp-11f, 0.0f, 0.0f,
     0x1.4117aep-25f, 0.0f, 0x1.74f75ep-87f, 0.0f, 0x1.73420cp-34f, 0x1.d79348p-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.797dacp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c42cep-42f,
     0.0f, 0x1.b9a994p-107f, 0x1.99aad2p-109f, 0.0f, 0.0f, 0.0f, 0x1.3c5d92p-91f,
     0x1.9d2486p-34f, 0x1.feaf3ap-101f, 0x1.3cb528p-57f, 0.0f, 0x1.81e6eap-114f,
     0x1.c9c134p-116f, 0x1.ae019p-63f, 0x1.bef9bp-49f, 0.0f, 0x1.831a5ep-6f,
     0x1.bc96dcp-85f, 0x1.4705b6p-124f, 0x1.e2a964p-103f, 0x1.f6da6cp-27f, 0.0f,
     0x1.624c7cp-63f, 0.0f, 0x1.42b7dp-1f, 0x1.801114p-5f, 0.0f, 0.0f, 0x1.382766p-2f,
     0.0f, 0x1.6ea9c4p-87f, 0.0f, 0x1.de0ddap-93f, 0x1.940bf4p-6f, 0.0f, 0.0f, 0.0f,
     0x1.3afe0cp-28f, 0x1.434ddap-55f, 0.0f, 0x1.8c62a2p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1fedaap-56f, 0x1.f8459ap-50f, 0.0f, 0x1.5d3196p-13f, 0x1.652d7p-40f,
     0.0f, 0x1.0a83bep-75f, 0.0f, 0.0f, 0.0f, 0x1.04663ap-107f, 0.0f, 0.0f, 0.0f,
     0x1.e3289p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3530f2p-72f, 0x1.8aa7bp-58f,
     0.0f, 0x1.c2bf38p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52e2c6p-20f, 0x1.128834p-11f,
     0x1.2200ecp-84f, 0.0f, 0x1.f82bbap-49f, 0.0f, 0x1.0d1e2ep-2f, 0x1.e43df4p-90f,
     0x1.02bf98p-106f, 0x1.133f12p-68f, 0.0f, 0x1.63ce8ap-67f, 0x1.de30b4p-87f,
     0x1.c317a4p-18f, 0x1.db55bcp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22c5fcp-82f, 0.0f, 0x1.be5c6cp-121f, 0.0f, 0.0f, 0x1.4fbefp-36f,
     0x1.091034p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97d558p-32f, 0.0f, 0.0f,
     0x1.347026p-102f, 0x1.8fe372p-3f, 0x1.a912acp-97f, 0.0f, 0.0f, 0x1.73a588p-52f,
     0.0f, 0x1.a4168p-103f, 0.0f, 0.0f, 0.0f, 0x1.c9d014p-99f, 0x1.01badap-54f,
     0x1.af2bacp-71f, 0x1.38ba42p-72f, 0.0f, 0.0f, 0x1.50e018p-36f, 0.0f, 0.0f, 0.0f,
     0x1.62588p-13f, 0x1.139a3ap-112f, 0x1.fd27c2p-34f, 0x1.b63e28p-35f, 0.0f,
     0x1.c35ecap-38f, 0.0f, 0x1.4cf9dcp-78f, 0.0f, 0.0f, 0x1.9fc236p-41f,
     0x1.3680a8p-125f, 0x1.6c2e9ap-34f, 0x1.a5583ep-85f, 0.0f, 0x1.86f5eap-112f,
     0x1.7f19dp-119f, 0x1.97be98p-25f, 0.0f, 0.0f, 0x1.1808a4p-7f, 0x1.59e0c2p-21f,
     0x1.6a867cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef563p-12f,
     0x1.a22488p-101f, 0.0f, 0x1.9e177p-28f, 0x1.16d3f6p-46f, 0x1.d584ap-66f, 0.0f,
     0x1.43a68p-97f, 0x1.640816p-3f, 0x1.b7febcp-29f, 0.0f, 0x1.d3176ap-110f,
     0x1.3e29dcp-102f, 0.0f, 0x1.f772eep-57f, 0x1.ba32c4p-40f, 0x1.a70c6p-96f, 0.0f,
     0x1.92c35cp-63f, 0.0f, 0.0f, 0.0f, 0x1.40b266p-5f, 0x1.43369ap-119f, 0.0f,
     0x1.4be26p-72f, 0x1.b0b042p-103f, 0.0f, 0.0f, 0.0f, 0x1.503436p-60f, 0.0f,
     0x1.c8407p-22f, 0x1.7cfe98p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbdad8p-81f,
     0x1.cdb6f6p-110f, 0x1.cde49ep-10f, 0x1.27fc32p-34f, 0.0f, 0.0f, 0x1.2f8b66p-12f,
     0.0f, 0.0f, 0.0f, 0x1.224224p-53f, 0.0f, 0x1.7c221p-122f, 0x1.28cde4p-42f,
     0x1.5b1d36p-28f, 0x1.d0387ep-126f, 0x1.3bedc4p-84f, 0x1.ec18cp-113f,
     0x1.31defep-26f, 0.0f, 0.0f, 0.0f, 0x1.9eec76p-60f, 0x1.e3075p-43f, 0.0f, 0.0f,
     0x1.d461f2p-10f, 0x1.f395fep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.097eeep-36f, 0.0f,
     0x1.ca3dc4p-41f, 0x1.d6002p-38f, 0.0f, 0x1.ca1b0cp-48f, 0.0f, 0x1.bf3202p-44f,
     0.0f, 0x1.4c1f54p-37f, 0x1.d83f64p-73f, 0x1.7cc9f4p-66f, 0.0f, 0.0f,
     0x1.b05d52p-90f, 0x1.c8366cp-102f, 0x1.49f52p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.18bc8ap-61f, 0x1.76a9e8p-34f, 0x1.a12b18p-47f, 0.0f, 0x1.c2edaep-20f,
     0.0f, 0x1.98daecp-106f, 0x1.6e62a8p-19f, 0.0f, 0.0f, 0x1.408726p-56f,
     0x1.4740d8p-84f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.4dba46p-41f, 0.0f, 0.0f,
     0.0f, 0x1.30c95p-54f, 0x1.691ad8p-113f, 0x1.792f2ep-28f, 0.0f, 0.0f,
     0x1.5171a2p-99f, 0x1.601df4p-31f, 0.0f, 0x1.0832b2p-29f, 0.0f, 0x1.8f4772p-54f,
     0x1.eeb6ep-47f, 0.0f, 0.0f, 0x1.c06p-5f, 0x1.7c8644p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5efe5cp-82f, 0x1.2abe0cp-53f, 0x1.a9d276p-87f, 0.0f, 0.0f,
     0.0f, 0x1.c8fb4p-19f, 0x1.e7ee98p-42f, 0.0f, 0.0f, 0.0f, 0x1.9010cep-90f, 0.0f,
     0x1.d24986p-5f, 0.0f, 0x1.5d3148p-71f, 0x1.18e0e8p-26f, 0x1.205126p-60f,
     0x1.386488p-10f, 0x1.7b132p-103f, 0x1.fde61cp-54f, 0x1.1ef414p-108f,
     0x1.ca074ep-40f, 0x1.8b618p-102f, 0.0f, 0.0f, 0x1.40ccp-44f, 0.0f,
     0x1.8aafeap-114f, 0.0f, 0.0f, 0x1.2d9286p-118f, 0.0f, 0x1.4ad4bap-126f, 0.0f,
     0x1.0baaf4p-39f, 0.0f, 0.0f, 0x1.9f597p-82f, 0.0f, 0x1.20fd5ep-111f,
     0x1.80e34ap-106f, 0.0f, 0.0f, 0x1.98e5a6p-8f, 0x1.9b497p-83f, 0x1.b8c472p-89f,
     0x1.4bd4ccp-90f, 0x1.40b664p-89f, 0.0f, 0x1.7909dep-12f, 0.0f, 0x1.674a9p-97f,
     0x1.118706p-66f, 0.0f, 0x1.e5922cp-58f, 0x1.b328f6p-97f, 0.0f, 0.0f,
     0x1.daac26p-119f, 0.0f, 0.0f, 0x1.f3a95ep-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d49e2p-69f, 0.0f, 0.0f, 0x1.f1a9cap-18f, 0.0f, 0.0f, 0x1.b4f152p-90f, 0.0f,
     0x1.3474f4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc418ap-102f, 0.0f, 0.0f,
     0x1.8cc7bcp-48f, 0x1.c0631cp-69f, 0.0f, 0x1.266f3cp-46f, 0x1.f07c5p-7f,
     0x1.a1a722p-30f, 0x1.a4e30cp-53f, 0x1.44d718p-87f, 0.0f, 0.0f, 0.0f,
     0x1.c27132p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcb366p-39f, 0.0f,
     0x1.8eddfcp-21f, 0.0f, 0.0f, 0x1.253386p-82f, 0x1.37699ap-124f, 0x1.193c62p-48f,
     0.0f, 0.0f, 0x1.bbfc06p-123f, 0x1.966f6p-114f, 0.0f, 0x1.a11466p-78f,
     0x1.d4e594p-80f, 0x1.486b2p-105f, 0.0f, 0.0f, 0.0f, 0x1.7de5dap-105f,
     0x1.26bfaap-72f, 0.0f, 0x1.449d9ap-80f, 0x1.7b0934p-21f, 0.0f, 0.0f, 0.0f,
     0x1.7bd49cp-13f, 0x1.503d26p-15f, 0.0f, 0.0f, 0.0f, 0x1.8a7044p-82f, 0.0f,
     0x1.273f38p-89f, 0x1.1be52ap-116f, 0.0f, 0x1.1be71ep-35f, 0x1.f160eep-20f, 0.0f,
     0.0f, 0x1.0197bap-88f, 0x1.ef4968p-75f, 0x1.3eae04p-77f, 0.0f, 0x1.72cb88p-37f,
     0x1.ece1e6p-52f, 0.0f, 0x1.ecebdcp-72f, 0x1.2128a2p-64f, 0x1.3b0476p-125f, 0.0f,
     0x1.b83d3cp-126f, 0.0f, 0x1.4854e8p-71f, 0x1.3c90fap-63f, 0x1.c608dep-44f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fc7aep-63f, 0x1.69a726p-97f, 0.0f, 0x1.7ebae8p-26f,
     0.0f, 0.0f, 0.0f, 0x1.844c5ep-46f, 0x1.492736p-110f, 0.0f, 0.0f, 0.0f,
     0x1.705e1ap-7f, 0x1.fcb31p-4f, 0x1.d97f88p-114f, 0.0f, 0x1.7f76a8p-8f,
     0x1.fe055ep-87f, 0x1.6333cep-23f, 0.0f, 0.0f, 0.0f, 0x1.621132p-34f, 0.0f, 0.0f,
     0x1.53b1p-90f, 0x1.03987p-89f, 0x1.a13744p-103f, 0.0f, 0.0f, 0x1.e0c9dcp-123f,
     0x1.2d376ep-58f, 0x1.5e81a4p-60f, 0x1.df72dep-97f, 0.0f, 0x1.17d182p-32f,
     0x1.2d6336p-52f, 0x1.c611f4p-4f, 0.0f, 0x1.03147ep-22f, 0x1.38834cp-15f, 0.0f,
     0x1.723b2cp-39f, 0.0f, 0x1.a502bcp-52f, 0.0f, 0x1.3c8fb4p-16f, 0x1.c16cbap-32f,
     0x1.65ac88p-57f, 0.0f, 0.0f, 0x1.662824p-7f, 0x1.090b3ep-16f, 0x1.ab1242p-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.45533ep-100f, 0.0f, 0.0f, 0.0f, 0x1.6e2dc8p-5f,
     0x1.16718ap-10f, 0x1.d15d8cp-57f, 0x1.7d3a3p-36f, 0.0f, 0.0f, 0.0f,
     0x1.6ab13ap-22f, 0x1.41a24ep-15f, 0.0f, 0x1.bcf788p-62f, 0.0f, 0x1.3526cap-7f,
     0.0f, 0x1.649264p-94f, 0.0f, 0x1.9f3ce2p-120f, 0.0f, 0x1.11e8fap-82f,
     0x1.95f06p-53f, 0x1.0a86d4p-23f, 0x1.7f44c4p-12f, 0.0f, 0.0f, 0.0f,
     0x1.494962p-86f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.686976p-106f, 0.0f,
     0x1.fa8abap-93f, 0x1.4f20e4p-113f, 0x1.219d78p-94f, 0.0f, 0x1.8ca53ep-22f,
     0x1.ff1504p-11f, 0x1.cefc72p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7da6c2p-118f,
     0x1.4a8f3ep-89f, 0x1.f3c29cp-84f, 0x1.a7d924p-15f, 0.0f, 0.0f, 0x1.270be8p-29f,
     0.0f, 0x1.87e318p-120f, 0.0f, 0x1.4a9744p-88f, 0x1.4b19bep-39f, 0.0f,
     0x1.3e20fp-91f, 0x1.fbaf68p-82f, 0.0f, 0x1.f15314p-90f, 0x1.70c42ep-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.34fddp-34f, 0.0f, 0x1.1a00b6p-11f, 0.0f, 0.0f, 0.0f,
     0x1.5ed2c6p-112f, 0x1.6b1bfp-34f, 0.0f, 0.0f, 0x1.95edeep-16f, 0x1.0cee66p-76f,
     0x1.156f34p-95f, 0.0f, 0x1.642098p-105f, 0x1.6bc936p-30f, 0x1.c2794ap-41f, 0.0f,
     0x1.56b2e6p-55f, 0x1.318cecp-77f, 0x1.3eafbp-90f, 0.0f, 0x1.7fddf4p-115f,
     0x1.cfa66cp-78f, 0x1.9d4c7ep-117f, 0.0f, 0x1.9bea9cp-70f, 0.0f, 0x1.94823p-6f,
     0.0f, 0x1.a74718p-112f, 0x1.0043ep-92f, 0.0f, 0x1.d5385cp-45f, 0x1.a384bcp-71f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a63506p-10f, 0.0f, 0.0f, 0x1.d68db4p-34f,
     0x1.075672p-53f, 0x1.cc0ee8p-62f, 0x1.fff45cp-106f, 0.0f, 0.0f, 0.0f,
     0x1.6b07aep-100f, 0.0f, 0x1.d0332ep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fbfcap-94f,
     0x1.e90e38p-28f, 0.0f, 0x1.4086ep-21f, 0.0f, 0x1.7cdffep-42f, 0.0f,
     0x1.65fd5p-51f, 0.0f, 0.0f, 0x1.f73c08p-92f, 0x1.b99a9ep-108f, 0.0f,
     0x1.a4e434p-103f, 0x1.469a4ap-104f, 0.0f, 0x1.5ee0e6p-46f, 0x1.48f0bep-63f,
     0x1.9e4472p-11f, 0.0f, 0.0f, 0.0f, 0x1.bc32bep-57f, 0x1.bc984ep-91f,
     0x1.3aa7ep-74f, 0.0f, 0.0f, 0.0f, 0x1.1e9c9ep-84f, 0x1.7b00bep-69f, 0.0f,
     0x1.5b28f6p-93f, 0.0f, 0.0f, 0x1.8d7f2ap-28f, 0x1.04c85ap-101f, 0.0f, 0.0f,
     0x1.b08f1p-45f, 0.0f, 0.0f, 0.0f, 0x1.2748b8p-118f, 0.0f, 0x1.c44ef6p-109f,
     0x1.4e3618p-21f, 0.0f, 0x1.3439d2p-88f, 0x1.b7324cp-12f, 0.0f, 0x1.d2a3a4p-107f
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
            tmp1 = Sleef_log10f1_u10purecfma(tmp0);
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
    printf("Sleef_log10f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
