/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf4_u35kvx.c --function \
 *     Sleef_finz_atanf4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.450af2p-31f, 0x1.bb7df8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ca8642p-108f, 0x1.31e21ap-84f, 0.0f, 0.0f, 0.0f, 0x1.d3998p-124f,
     0x1.5633cep-3f, 0x1.e455dcp-29f, 0.0f, 0.0f, 0x1.599672p-1f, 0.0f,
     0x1.19424cp-10f, 0x1.7a5ffcp-26f, 0.0f, 0x1.1c6fdcp-74f, 0.0f, 0x1.3f3f2p-73f,
     0.0f, 0.0f, 0.0f, 0x1.71ae4ep-66f, 0.0f, 0.0f, 0x1.ee2c0ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.ced29cp-99f, 0x1.3cb3ep-54f, 0x1.eee3c4p-63f, 0x1.4e1ecap-19f, 0.0f,
     0x1.8a27ap-1f, 0.0f, 0.0f, 0x1.d6c1cap-124f, 0.0f, 0x1.620df4p-5f,
     0x1.7de8dcp-92f, 0x1.d6a26p-114f, 0.0f, 0x1.9670c4p-97f, 0x1.6517eap-7f, 0.0f,
     0.0f, 0x1.bdaa9ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe2e36p-23f, 0.0f,
     0x1.3c1956p-8f, 0.0f, 0.0f, 0.0f, 0x1.5066bep-94f, 0.0f, 0x1.c395cp-14f, 0.0f,
     0x1.0d6cc2p-109f, 0.0f, 0x1.23b5e4p-10f, 0.0f, 0x1.c17764p-119f, 0.0f,
     0x1.42ed7ap-48f, 0.0f, 0.0f, 0x1.08ab66p-107f, 0x1.96fb34p-123f, 0.0f,
     0x1.423784p-29f, 0x1.fbbbc8p-7f, 0.0f, 0x1.4a8afep-125f, 0x1.d2101cp-55f,
     0x1.c838bp-47f, 0x1.6ac0e2p-36f, 0x1.65efaep-52f, 0.0f, 0.0f, 0x1.a2edaep-82f,
     0.0f, 0.0f, 0x1.841102p-121f, 0.0f, 0x1.19f818p-69f, 0.0f, 0.0f, 0x1.b96d3p-95f,
     0x1.488066p-22f, 0x1.35fc94p-9f, 0.0f, 0x1.7f666ep-45f, 0.0f, 0.0f,
     0x1.8fa7c4p-39f, 0.0f, 0x1.5c020cp-105f, 0x1.fae802p-45f, 0.0f, 0.0f,
     0x1.4a2b62p-18f, 0x1.a1a8p-11f, 0.0f, 0.0f, 0x1.a523a4p-66f, 0x1.629df2p-122f,
     0.0f, 0.0f, 0.0f, 0x1.55fcaap-64f, 0x1.b8be26p-104f, 0x1.ed2714p-85f, 0.0f,
     0x1.750bd6p-103f, 0x1.5926d2p-111f, 0.0f, 0x1.d85cd2p-82f, 0.0f, 0x1.53d908p-32f,
     0x1.0f873cp-1f, 0x1.16d704p-77f, 0x1.502c7p-102f, 0.0f, 0x1.aaf736p-61f,
     0x1.09fee8p-98f, 0x1.cb5aep-47f, 0x1.7c2446p-107f, 0x1.268a58p-97f,
     0x1.0bc92cp-26f, 0x1.cba414p-67f, 0x1.3e8f86p-9f, 0.0f, 0.0f, 0x1.697fb2p-18f,
     0x1.ccd53ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ca61ap-123f,
     0x1.85aaf2p-116f, 0.0f, 0x1.62668p-55f, 0x1.4cde1ap-124f, 0x1.db11fcp-91f, 0.0f,
     0x1.34de06p-12f, 0.0f, 0x1.13c98ap-17f, 0.0f, 0.0f, 0x1.89da0ep-26f, 0.0f,
     0x1.0c282cp-88f, 0x1.09f294p-59f, 0.0f, 0.0f, 0x1.7dd4c2p-81f, 0x1.587106p-68f,
     0x1.27fdecp-90f, 0x1.3250dp-114f, 0x1.c35996p-21f, 0.0f, 0x1.c453d8p-98f, 0.0f,
     0x1.a318f4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2b23ep-75f, 0x1.8dd7c8p-19f,
     0x1.ea746ep-56f, 0x1.fa148cp-72f, 0x1.49b4a2p-46f, 0.0f, 0.0f, 0x1.069e7ep-46f,
     0x1.0f174p-123f, 0.0f, 0x1.f9de82p-44f, 0x1.85032ap-111f, 0.0f, 0x1.a07a58p-14f,
     0x1.a2cccap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2c236p-21f, 0.0f,
     0x1.c19a96p-110f, 0x1.ff025p-89f, 0.0f, 0.0f, 0x1.6ef44cp-10f, 0x1.85f6fcp-36f,
     0.0f, 0x1.84f67cp-41f, 0.0f, 0x1.39ef8cp-86f, 0x1.228276p-10f, 0x1.137878p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47e572p-67f, 0x1.df8fa6p-34f, 0.0f,
     0x1.78748cp-117f, 0.0f, 0x1.b23592p-4f, 0.0f, 0x1.7518bep-5f, 0x1.4a6a44p-69f,
     0.0f, 0x1.2ebd5ap-75f, 0x1.b72812p-90f, 0x1.ebf66p-112f, 0.0f, 0.0f,
     0x1.5f3bb2p-104f, 0.0f, 0x1.ba2d6ep-82f, 0.0f, 0.0f, 0x1.b03f28p-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.70842ep-61f, 0.0f, 0x1.2b727ap-39f, 0x1.a8e64ap-41f,
     0.0f, 0x1.33c78ep-117f, 0x1.9168f8p-68f, 0.0f, 0.0f, 0x1.469f7ap-65f,
     0x1.06cfb4p-31f, 0x1.17b84ap-103f, 0.0f, 0.0f, 0x1.568b4p-37f, 0.0f, 0.0f,
     0x1.b52d9ep-117f, 0x1.6c22eep-13f, 0.0f, 0.0f, 0.0f, 0x1.d2ab94p-68f, 0.0f, 0.0f,
     0x1.cd5546p-74f, 0x1.be809p-25f, 0x1.55a04ap-55f, 0x1.8f67ap-107f,
     0x1.2f98f8p-77f, 0.0f, 0x1.f1263ep-72f, 0x1.035852p-115f, 0x1.7408fap-66f, 0.0f,
     0x1.07dcfap-120f, 0x1.f252f8p-21f, 0.0f, 0x1.61bc7cp-88f, 0.0f, 0x1.b95272p-126f,
     0.0f, 0.0f, 0x1.75a976p-119f, 0.0f, 0x1.43c29ep-96f, 0x1.fed9ecp-96f, 0.0f, 0.0f,
     0x1.0481e8p-25f, 0.0f, 0.0f, 0x1.d7b06ap-65f, 0.0f, 0.0f, 0.0f, 0x1.60b38p-8f,
     0.0f, 0x1.1fb066p-50f, 0.0f, 0.0f, 0x1.220d78p-82f, 0x1.b4e3d4p-46f, 0.0f, 0.0f,
     0x1.44792p-22f, 0x1.4778fp-8f, 0.0f, 0.0f, 0x1.a7f7p-62f, 0.0f, 0.0f,
     0x1.6906dp-24f, 0.0f, 0.0f, 0.0f, 0x1.461fd6p-117f, 0x1.da1dfp-36f,
     0x1.8d3506p-1f, 0.0f, 0.0f, 0x1.98feb8p-11f, 0x1.f8c5e6p-110f, 0.0f,
     0x1.de357ap-123f, 0x1.b187d4p-94f, 0x1.609f84p-87f, 0x1.1c4252p-117f, 0.0f, 0.0f,
     0.0f, 0x1.37e2d2p-53f, 0x1.ed6878p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38c6c2p-53f, 0x1.f998bp-102f, 0.0f, 0x1.ce2618p-95f, 0.0f, 0.0f, 0.0f,
     0x1.acadcep-25f, 0.0f, 0x1.c8adbep-28f, 0.0f, 0.0f, 0x1.398dfcp-7f, 0.0f,
     0x1.1c5798p-52f, 0.0f, 0x1.2a514ap-6f, 0x1.ba9464p-46f, 0x1.26f44ap-26f,
     0x1.2ff5d8p-87f, 0x1.6aa8b4p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce5fa4p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.708626p-77f, 0x1.49811ap-25f, 0.0f, 0.0f,
     0x1.487184p-6f, 0x1.9bacdep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e1ec32p-46f, 0.0f, 0.0f, 0x1.747886p-12f, 0x1.dd5c9ap-109f,
     0x1.286c7cp-112f, 0x1.6b7edcp-107f, 0x1.a286cep-2f, 0.0f, 0.0f, 0x1.f460dap-80f,
     0x1.60658ep-120f, 0x1.a0f716p-35f, 0x1.7e413cp-69f, 0x1.e97ae2p-3f,
     0x1.2f9602p-13f, 0x1.f9b7fap-33f, 0x1.af1eccp-17f, 0.0f, 0.0f, 0x1.214f68p-21f,
     0x1.3ae0bcp-13f, 0x1.ef9302p-10f, 0x1.ab30fp-81f, 0.0f, 0.0f, 0x1.cb7346p-87f,
     0x1.33899ap-69f, 0x1.477c6ep-112f, 0.0f, 0x1.6eb52cp-82f, 0.0f, 0x1.ca2f28p-122f,
     0.0f, 0x1.f47812p-114f, 0x1.5d76ecp-69f, 0x1.fa97c4p-15f, 0.0f, 0.0f, 0.0f,
     0x1.785404p-76f, 0.0f, 0.0f, 0.0f, 0x1.ae969p-57f, 0x1.84204p-108f, 0.0f, 0.0f,
     0.0f, 0x1.302e2cp-38f, 0x1.c4e0ep-119f, 0x1.5b507p-75f, 0.0f, 0x1.8d604cp-50f,
     0.0f, 0x1.fc283ep-116f, 0.0f, 0.0f, 0x1.d876bep-122f, 0x1.86ce76p-79f,
     0x1.cbedcap-60f, 0x1.5f322ap-122f, 0.0f, 0.0f, 0x1.0e6782p-16f, 0.0f,
     0x1.f01214p-53f, 0.0f, 0.0f, 0x1.c448f2p-33f, 0x1.cab2a4p-96f, 0.0f,
     0x1.81a7d6p-91f, 0.0f, 0.0f, 0x1.b36584p-26f, 0.0f, 0.0f, 0x1.155e94p-90f,
     0x1.e4ef94p-121f, 0x1.9893f6p-16f, 0x1.1221f4p-59f, 0x1.f2566p-72f, 0.0f, 0.0f,
     0x1.e0a39ep-85f, 0x1.c72006p-17f, 0.0f, 0.0f, 0.0f, 0x1.84615ep-95f,
     0x1.03f79ap-55f, 0x1.6d9d6p-49f, 0.0f, 0x1.40dffp-75f, 0.0f, 0x1.de59c4p-37f,
     0x1.be1e94p-37f, 0.0f, 0x1.ba6edep-32f, 0x1.0e51f6p-27f, 0.0f, 0x1.d1f23p-16f,
     0x1.4e5b7ap-34f, 0.0f, 0x1.f0c75ap-124f, 0.0f, 0.0f, 0x1.481044p-100f, 0.0f,
     0.0f, 0.0f, 0x1.8f4e74p-123f, 0.0f, 0x1.7c846p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c10ab2p-102f, 0x1.560fcap-126f, 0.0f, 0x1.5cacd8p-64f, 0x1.6e5fc8p-119f,
     0x1.831104p-101f, 0.0f, 0.0f, 0.0f, 0x1.157502p-116f, 0.0f, 0x1.5bf878p-47f,
     0x1.1f5c5ap-125f, 0x1.d96e9cp-8f, 0x1.c21f34p-33f, 0x1.78bb5p-72f, 0.0f,
     0x1.1259a6p-9f, 0.0f, 0.0f, 0x1.41549cp-33f, 0.0f, 0x1.67557ap-120f, 0.0f, 0.0f,
     0x1.88eeb4p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51f7ecp-65f, 0.0f,
     0.0f, 0x1.817b9ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c340ep-111f, 0x1.cc625cp-50f,
     0.0f, 0.0f, 0.0f, 0x1.c48b9ep-89f, 0.0f, 0x1.ffc422p-68f, 0.0f, 0x1.9e5532p-56f,
     0x1.1dbe9cp-53f, 0x1.02b036p-42f, 0x1.07475cp-11f, 0.0f, 0x1.281c32p-99f,
     0x1.e4951cp-122f, 0x1.b54322p-109f, 0x1.1b24b8p-82f, 0x1.0c3f6p-116f,
     0x1.52d7bcp-46f, 0.0f, 0.0f, 0x1.a827f6p-46f, 0.0f, 0x1.9b8c6ap-82f,
     0x1.db3434p-16f, 0x1.5a7bbep-4f, 0x1.03aa4ap-3f, 0.0f, 0.0f, 0x1.c79d28p-23f,
     0.0f, 0.0f, 0x1.9409b8p-41f, 0x1.da583p-87f, 0x1.d811b8p-48f, 0.0f,
     0x1.5ce8e6p-47f, 0x1.83e48p-84f, 0.0f, 0.0f, 0x1.b2edc6p-16f, 0x1.6102c8p-111f,
     0x1.1c225ap-16f, 0.0f, 0x1.81f8d2p-21f, 0.0f, 0x1.65e324p-8f, 0.0f, 0.0f,
     0x1.216bb6p-85f, 0x1.af3b96p-48f, 0x1.09c144p-30f, 0.0f, 0x1.50a366p-23f,
     0x1.2cdb2p-35f, 0x1.43506p-93f, 0.0f, 0.0f, 0x1.79293ep-13f, 0.0f,
     0x1.bc089ep-60f, 0x1.25fcc4p-89f, 0x1.a2d8aep-32f, 0x1.0ae138p-64f, 0.0f,
     0x1.52d3cp-14f, 0x1.4ef454p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d2ca2p-7f,
     0.0f, 0.0f, 0x1.b45c04p-36f, 0x1.18dfa4p-18f, 0x1.e43436p-97f, 0.0f,
     0x1.b33694p-75f, 0.0f, 0x1.51182cp-22f, 0x1.c02ed6p-61f, 0.0f, 0x1.eb5cf4p-62f,
     0.0f, 0.0f, 0x1.4fa8dcp-14f, 0.0f, 0x1.d72d82p-93f, 0.0f, 0x1.d79e0ap-45f, 0.0f,
     0.0f, 0x1.6ca8a6p-45f, 0x1.ec7f56p-92f, 0.0f, 0x1.4eb2bcp-67f, 0.0f, 0.0f,
     0x1.2dc11p-40f, 0x1.96d96p-119f, 0x1.6ccaaap-19f, 0x1.f6f516p-11f,
     0x1.8c75c2p-20f, 0x1.6ea0c2p-103f, 0.0f, 0x1.e95436p-44f, 0.0f, 0.0f,
     0x1.46b16ap-116f, 0x1.d0f664p-42f, 0x1.8330ccp-108f, 0.0f, 0.0f, 0x1.186edap-20f,
     0.0f, 0x1.df67d2p-28f, 0x1.31c202p-106f, 0.0f, 0.0f, 0x1.e067bp-63f,
     0x1.2f51aep-126f, 0.0f, 0.0f, 0x1.fce3a4p-47f, 0.0f, 0x1.cc7e88p-103f,
     0x1.3a80d4p-100f, 0x1.0045d8p-45f, 0.0f, 0.0f, 0.0f, 0x1.0f8cfcp-94f,
     0x1.8a286ap-107f, 0.0f, 0x1.18c3p-10f, 0.0f, 0x1.63c63ap-41f, 0.0f, 0.0f,
     0x1.eb6276p-25f, 0x1.7a1fd2p-50f, 0.0f, 0.0f, 0x1.31b6a8p-16f, 0x1.51a896p-112f,
     0.0f, 0x1.5989b4p-92f, 0x1.053046p-60f, 0x1.f96d4ap-44f, 0x1.62b81p-35f, 0.0f,
     0x1.ad487ap-29f, 0.0f, 0x1.6ac5dcp-34f, 0x1.5f0dcap-122f, 0.0f, 0.0f,
     0x1.70008ep-122f, 0.0f, 0x1.91fb2ap-104f, 0.0f, 0x1.1cba7cp-10f, 0.0f,
     0x1.473642p-30f, 0.0f, 0.0f, 0x1.4cd626p-36f, 0.0f, 0.0f, 0x1.57a496p-80f, 0.0f,
     0.0f, 0.0f, 0x1.1d2924p-48f, 0.0f, 0x1.24bdeap-107f, 0.0f, 0.0f, 0x1.8f9194p-69f,
     0x1.c357c4p-3f, 0.0f, 0.0f, 0x1.7ed34ap-88f, 0.0f, 0x1.d53c26p-39f, 0.0f,
     0x1.ce6484p-117f, 0x1.45be3p-96f, 0.0f, 0.0f, 0x1.59c64ep-39f, 0x1.1d224ep-108f,
     0.0f, 0x1.74998ap-26f, 0x1.f37978p-103f, 0.0f, 0x1.c38e6ep-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a55c62p-70f, 0x1.43403ep-71f, 0.0f, 0x1.41e642p-59f, 0.0f,
     0x1.ed0e4ap-112f, 0.0f, 0.0f, 0x1.62daa6p-89f, 0x1.481d0ap-23f, 0x1.6d42f8p-11f,
     0x1.3f1e4cp-70f, 0x1.1771d6p-81f, 0.0f, 0.0f, 0.0f, 0x1.533afap-108f,
     0x1.5e720ep-100f, 0.0f, 0.0f, 0x1.c09bp-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4715a8p-65f, 0.0f, 0x1.370262p-57f, 0.0f, 0x1.c9658cp-101f, 0x1.ff6ae2p-99f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.2c745ep-88f, 0.0f, 0.0f, 0.0f, 0x1.8773bap-29f,
     0x1.3fad2cp-102f, 0x1.9b79bcp-29f, 0.0f, 0x1.cda7f2p-4f, 0.0f, 0.0f, 0.0f,
     0x1.ac5e4ep-114f, 0x1.58ad4ap-19f, 0x1.a3791cp-44f, 0x1.ced4e4p-85f, 0.0f, 0.0f,
     0.0f, 0x1.81d35ep-25f, 0.0f, 0x1.9116f6p-99f, 0.0f, 0.0f, 0.0f, 0x1.b61468p-67f,
     0.0f, 0x1.ac3816p-43f, 0.0f, 0.0f, 0.0f, 0x1.7c93f8p-77f, 0.0f, 0x1.34f38ap-74f,
     0.0f, 0x1.620c2p-26f, 0.0f, 0.0f, 0x1.664beap-103f, 0.0f, 0x1.019bfp-32f,
     0x1.825da8p-48f, 0x1.6fbd9cp-118f, 0x1.530518p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a8244p-30f, 0x1.35136p-60f, 0.0f, 0.0f, 0x1.09c3dep-46f,
     0x1.579d5cp-97f, 0.0f, 0x1.2a5dccp-115f, 0.0f, 0x1.d5b17ap-104f,
     0x1.d30f42p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bafb62p-49f, 0.0f, 0x1.a72cp-117f,
     0x1.ddcefap-45f, 0.0f, 0.0f, 0.0f, 0x1.350fd8p-94f, 0x1.d7b288p-90f,
     0x1.9d6b1ep-66f, 0.0f, 0x1.e2dd88p-69f, 0.0f, 0.0f, 0x1.9e62bep-44f, 0.0f, 0.0f,
     0x1.e7c40ap-5f, 0.0f, 0x1.553e28p-55f, 0.0f, 0x1.3eb0b2p-70f, 0x1.4f64acp-73f,
     0x1.1153cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a3ebcp-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bdbe6p-53f, 0x1.484694p-101f, 0.0f, 0x1.eda3bap-123f, 0.0f, 0x1.738fap-55f,
     0.0f, 0x1.4e58fep-76f, 0x1.79c376p-94f, 0x1.d1bebp-50f, 0.0f, 0x1.7a49cep-60f,
     0.0f, 0x1.da4b9cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b26268p-50f,
     0.0f, 0.0f, 0x1.674964p-46f, 0.0f, 0x1.92dbd8p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.859304p-94f, 0x1.fc0246p-114f, 0.0f, 0.0f, 0.0f, 0x1.92c7dp-20f,
     0x1.c9cac6p-56f, 0x1.8488a4p-23f, 0x1.dd07d6p-46f, 0.0f, 0.0f, 0x1.d40eccp-90f,
     0.0f, 0x1.f7222cp-24f, 0x1.d9a4ccp-22f, 0x1.1682f8p-30f, 0x1.00002cp-20f,
     0x1.10f5cap-96f, 0x1.2b93bcp-14f, 0.0f, 0.0f, 0.0f, 0x1.f9edc4p-3f,
     0x1.56983cp-101f, 0x1.0fddf4p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a5b1ep-23f, 0.0f,
     0.0f, 0x1.957b38p-117f, 0.0f, 0x1.414e1cp-30f, 0x1.26852p-117f, 0.0f, 0.0f,
     0x1.de287ep-20f, 0.0f, 0x1.f2ea4ep-75f, 0x1.a973e2p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa97b4p-4f, 0x1.59f236p-124f, 0x1.1baf0ep-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0b45cap-68f, 0.0f, 0.0f, 0x1.c3d2d2p-118f, 0.0f, 0x1.872dcap-96f,
     0x1.3c09e2p-10f, 0.0f, 0x1.406d5cp-103f, 0.0f, 0.0f, 0x1.2ef48p-50f,
     0x1.2b773ap-112f, 0.0f, 0x1.24735ep-113f, 0.0f, 0x1.b579bp-80f, 0.0f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_atanf4_u35kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_atanf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atanf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
