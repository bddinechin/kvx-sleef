/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf4_u35avx2128.c --function \
 *     Sleef_finz_hypotf4_u35avx2128 --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.f1d8ecp-88f, 0.0f, 0x1.fe1334p-68f, 0.0f, 0x1.ae8e84p-25f,
     0x1.3b12a8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77a418p-90f, 0.0f, 0x1.56f1b8p-124f,
     0.0f, 0x1.0547b8p-37f, 0.0f, 0.0f, 0x1.62e712p-65f, 0.0f, 0.0f, 0x1.e531d8p-22f,
     0x1.7623ep-106f, 0x1.802e1cp-32f, 0x1.09a198p-14f, 0.0f, 0x1.b0e96p-59f,
     0x1.f16fc4p-9f, 0x1.d38928p-119f, 0x1.6b337p-31f, 0.0f, 0.0f, 0x1.f14634p-99f,
     0.0f, 0x1.2b03c8p-81f, 0x1p0f, 0x1.2b09ep-28f, 0x1.4afbcp-46f, 0.0f, 0.0f, 0.0f,
     0x1.87369ep-104f, 0.0f, 0.0f, 0x1.7bce5cp-36f, 0x1.c7d0f2p-84f, 0.0f,
     0x1.0b380ep-51f, 0.0f, 0x1.456636p-126f, 0x1.9d4a58p-62f, 0x1.372078p-45f, 0.0f,
     0x1.f1f006p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e9f42p-20f, 0.0f, 0.0f,
     0x1.e42bf8p-72f, 0x1.ba386ap-109f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.005bc4p-23f,
     0x1.e7d9f6p-23f, 0x1.a8181ep-113f, 0x1.ba4878p-4f, 0x1.3c5568p-111f, 0.0f,
     0x1.c2f47p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c0798p-32f,
     0x1.75752p-9f, 0x1.7aca96p-39f, 0.0f, 0.0f, 0x1.9d2334p-79f, 0.0f,
     0x1.6ef72ap-79f, 0x1p0f, 0x1.7c17p-94f, 0.0f, 0.0f, 0x1.ab5ecap-16f,
     0x1.93f73ap-117f, 0x1.e399aap-74f, 0x1.a43774p-121f, 0.0f, 0.0f, 0x1.acb8e4p-98f,
     0x1.49b04p-113f, 0.0f, 0x1.668f9ep-1f, 0.0f, 0x1.b5e6eep-63f, 0x1.5a9586p-84f,
     0.0f, 0x1.8fbdeep-1f, 0.0f, 0x1.55e634p-110f, 0x1.7f7fccp-115f, 0.0f,
     0x1.561c6cp-11f, 0.0f, 0x1.5427eap-74f, 0.0f, 0.0f, 0.0f, 0x1.d01b86p-118f, 0.0f,
     0x1.173f78p-125f, 0.0f, 0.0f, 0x1.1bc448p-123f, 0.0f, 0.0f, 0x1.44d5bcp-91f,
     0x1.d6d85cp-9f, 0.0f, 0.0f, 0x1.c9c548p-17f, 0x1.cb3288p-118f, 0.0f,
     0x1.880bc4p-39f, 0.0f, 0.0f, 0x1.7525b8p-3f, 0.0f, 0.0f, 0x1.9fba22p-60f,
     0x1.3af9cap-121f, 0x1.f2e744p-116f, 0.0f, 0x1.2f0372p-12f, 0x1.f97b62p-93f,
     0x1.78f0e6p-78f, 0x1.bd2fd6p-7f, 0x1.c3d1fep-42f, 0x1.ed301ep-95f, 0.0f,
     0x1.786ffep-68f, 0x1.3a082p-43f, 0.0f, 0.0f, 0x1.f40ff6p-119f, 0.0f,
     0x1.6d073ap-75f, 0.0f, 0.0f, 0x1.030768p-21f, 0x1.9007e2p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8c8e64p-81f, 0x1.0aa568p-14f, 0x1.b38646p-105f, 0x1.92b56ep-74f,
     0x1.6604ecp-40f, 0x1.92dacp-11f, 0.0f, 0x1.2a2be2p-29f, 0x1.ddfbe2p-91f,
     0x1.444504p-122f, 0x1.33058ap-73f, 0x1.4f3616p-102f, 0x1.254fe8p-20f, 0.0f, 0.0f,
     0x1.06bd24p-119f, 0.0f, 0x1.c8870ap-109f, 0.0f, 0.0f, 0x1.fa5b8ap-2f,
     0x1.4b8fd4p-25f, 0x1.2aef04p-106f, 0.0f, 0x1.71c958p-126f, 0x1.6437ep-59f, 0.0f,
     0x1.78d184p-29f, 0.0f, 0.0f, 0x1.606b62p-123f, 0x1.e41636p-59f, 0.0f,
     0x1.2b1196p-30f, 0x1.d2cb84p-28f, 0x1.3e3ee6p-23f, 0x1.ef6ab4p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.83276ap-101f, 0.0f, 0x1.65a0b8p-53f, 0x1.269b5p-123f, 0.0f,
     0x1.bec51ep-92f, 0x1.39ae84p-67f, 0.0f, 0.0f, 0x1.7a6d78p-6f, 0.0f,
     0x1.4037cp-102f, 0x1.c0f164p-33f, 0x1.c041dep-59f, 0.0f, 0x1.ca927p-81f, 0.0f,
     0x1.c3ca1cp-43f, 0x1.642dfap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ede438p-122f, 0x1.f77598p-21f, 0.0f, 0.0f, 0.0f, 0x1.591802p-102f,
     0x1.1d91fcp-98f, 0.0f, 0x1.572eb4p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05f1d8p-57f,
     0x1.ac03e8p-44f, 0x1.c7aed6p-7f, 0x1.4014e8p-40f, 0x1.fe5c3p-88f, 0.0f,
     0x1.70abe6p-64f, 0x1.2fcda8p-119f, 0x1.183ae6p-90f, 0x1.66aa4ep-8f, 0.0f, 0.0f,
     0.0f, 0x1.8dc428p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e53e02p-99f, 0.0f, 0.0f,
     0.0f, 0x1.13fe86p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e03f6p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.275db4p-29f, 0.0f, 0x1.c09b56p-2f, 0x1.0c7314p-114f, 0.0f,
     0x1.29cc9ap-50f, 0.0f, 0x1.69c052p-59f, 0x1.e9704ap-67f, 0x1.bd5ea2p-62f,
     0x1.6b1f3cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f257d4p-94f, 0.0f, 0x1.305fd4p-111f,
     0.0f, 0.0f, 0x1.a2c24ap-113f, 0x1.ed9d0ep-102f, 0.0f, 0.0f, 0x1.7eb2b4p-81f,
     0x1.81d8f4p-122f, 0.0f, 0.0f, 0x1.94baap-100f, 0.0f, 0x1.099a64p-13f,
     0x1.7fab02p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cda69ap-11f, 0x1.0b9bc6p-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.903ffep-21f, 0x1.5f33b8p-75f, 0x1.0a686cp-45f,
     0x1.a1ca26p-67f, 0x1.9132dp-64f, 0x1.6bbd8p-64f, 0x1.eef806p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.26768ep-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c000f6p-113f, 0x1.afc1a2p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c263b6p-31f,
     0.0f, 0.0f, 0x1.33b9dap-76f, 0.0f, 0x1.198d38p-39f, 0x1.fd120ap-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a799bcp-93f, 0x1.19011ep-90f, 0.0f, 0x1.019154p-46f, 0.0f,
     0x1.d390a6p-52f, 0x1.014ceap-25f, 0.0f, 0.0f, 0x1.df8b1cp-4f, 0x1.7a5cbep-114f,
     0x1.3fa178p-62f, 0x1.7a8056p-63f, 0x1.55e458p-41f, 0x1.6a9e3p-95f,
     0x1.dc0748p-10f, 0x1.882f34p-108f, 0.0f, 0x1.9cc9ecp-32f, 0.0f, 0.0f,
     0x1.ef109ap-103f, 0.0f, 0.0f, 0x1.cd0b0ep-17f, 0.0f, 0x1.0d0362p-92f, 0.0f,
     0x1.ffdcc6p-89f, 0x1.a47248p-65f, 0x1.3ce242p-1f, 0x1.5b64f4p-43f,
     0x1.f6f224p-30f, 0.0f, 0x1.7f476ap-57f, 0.0f, 0x1.1b4276p-64f, 0.0f,
     0x1.6c776ap-43f, 0.0f, 0.0f, 0x1.f1948p-114f, 0x1.883848p-66f, 0x1.83d168p-26f,
     0.0f, 0.0f, 0x1.23ad2cp-24f, 0x1.8e7feep-4f, 0x1.131edep-95f, 0.0f,
     0x1.920c62p-9f, 0.0f, 0x1.53523ap-70f, 0.0f, 0x1.7e84cp-20f, 0x1.1a94cep-63f,
     0.0f, 0x1.e03ed2p-27f, 0.0f, 0x1.d96344p-26f, 0x1.28bbbep-79f, 0x1.3b06fap-65f,
     0.0f, 0x1.7b5a2cp-92f, 0x1.6aeaf2p-31f, 0.0f, 0x1.8b5ab2p-63f, 0.0f,
     0x1.a968b6p-110f, 0.0f, 0.0f, 0x1.9dc6a4p-125f, 0.0f, 0x1.2e6ee8p-30f,
     0x1.3216fcp-91f, 0.0f, 0x1.d589p-95f, 0x1.d9c9b2p-57f, 0.0f, 0x1.880736p-92f,
     0x1.34784ap-24f, 0x1.ac0b74p-94f, 0x1.e952cp-96f, 0.0f, 0.0f, 0x1.40a68ap-48f,
     0x1.500b26p-94f, 0x1.66f556p-102f, 0.0f, 0x1.b8609p-124f, 0.0f, 0x1.80bac6p-102f,
     0x1.3e10b8p-16f, 0x1.00606p-71f, 0.0f, 0x1.fb5926p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3ee5cp-20f, 0.0f, 0x1.3657c8p-82f, 0x1.b432dcp-32f, 0x1.dd06b2p-91f,
     0x1.42f73ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7740b8p-10f, 0x1.d690f2p-4f,
     0x1.26986ap-122f, 0x1.9a693cp-98f, 0.0f, 0.0f, 0x1.73f0eep-101f,
     0x1.0acce2p-116f, 0x1.ee9a02p-67f, 0x1.55d30ap-65f, 0.0f, 0x1.f33106p-46f,
     0x1.a28efp-111f, 0x1.de0084p-114f, 0x1.9b6e14p-13f, 0.0f, 0x1.670a9ap-5f, 0.0f,
     0x1.865baep-57f, 0x1.cdf352p-19f, 0.0f, 0x1.72ea6ep-44f, 0x1.b2749ap-68f,
     0x1.44cba2p-50f, 0x1.2897dep-41f, 0x1.1dc37ep-112f, 0.0f, 0.0f, 0x1.dceb56p-7f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c01cbep-15f,
     0x1.27cca2p-50f, 0.0f, 0x1.8483fcp-76f, 0.0f, 0x1.83d3f4p-85f, 0.0f,
     0x1.97199cp-64f, 0.0f, 0x1.5fcb42p-6f, 0.0f, 0.0f, 0.0f, 0x1.0a5c6ep-120f, 0.0f,
     0.0f, 0.0f, 0x1.6ee4d4p-73f, 0x1.dec7a8p-24f, 0x1.cfadecp-81f, 0x1.496baep-57f,
     0x1.c63dacp-65f, 0.0f, 0x1.edbc1cp-98f, 0.0f, 0x1.dd1578p-17f, 0x1.94d5d8p-121f,
     0x1.8075d6p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9439f4p-93f, 0x1.e3d33cp-40f,
     0x1.2612d2p-6f, 0x1.723816p-63f, 0x1.fb27bcp-1f, 0x1.43dbbp-62f, 0x1.10157ep-23f,
     0.0f, 0.0f, 0x1.7e3e24p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7720aep-30f, 0.0f,
     0x1.2984ap-27f, 0x1.4c7b3ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5603b8p-92f,
     0.0f, 0x1.f49e3ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05d262p-50f, 0x1.f83feap-17f,
     0x1.bcc154p-69f, 0.0f, 0x1.18fdd8p-100f, 0.0f, 0x1.802d58p-69f, 0.0f,
     0x1.77441ap-79f, 0x1.dc49eap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.f0e9fcp-68f, 0x1.b753a2p-6f, 0.0f, 0.0f, 0x1.bd66ecp-18f, 0x1.fb2fe4p-64f,
     0.0f, 0.0f, 0x1.e484fp-7f, 0.0f, 0.0f, 0x1.949ba4p-65f, 0x1.42d58ap-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.74d58cp-71f, 0.0f, 0x1.cca79p-67f, 0x1.04e1c4p-47f,
     0x1.63bc3ap-71f, 0.0f, 0x1.144f76p-7f, 0x1.6e7c94p-18f, 0x1p0f, 0x1.904dfp-109f,
     0.0f, 0x1.fd5812p-103f, 0.0f, 0.0f, 0x1.d4ebd8p-23f, 0x1.faafeap-101f,
     0x1.00b9p-29f, 0x1.eb2cf2p-78f, 0x1.641826p-54f, 0x1.587c66p-15f,
     0x1.4ed342p-104f, 0.0f, 0x1.bab93p-66f, 0.0f, 0x1.c449bap-77f, 0x1.db8024p-10f,
     0.0f, 0x1.b5c2f8p-76f, 0.0f, 0.0f, 0.0f, 0x1.106004p-64f, 0.0f, 0x1.b1872cp-28f,
     0x1.8b449ap-117f, 0.0f, 0.0f, 0.0f, 0x1.72650ap-53f, 0.0f, 0.0f, 0.0f,
     0x1.9d90f8p-89f, 0.0f, 0x1.51530ap-62f, 0x1.c3d21ep-17f, 0.0f, 0x1.506e66p-121f,
     0.0f, 0x1.e3faa2p-8f, 0x1.db868p-72f, 0x1.af916cp-58f, 0.0f, 0x1.1a38fep-70f,
     0x1.b441e6p-122f, 0.0f, 0x1.b1d9f4p-102f, 0x1.7482a6p-91f, 0x1.7a189ep-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.68749cp-84f, 0.0f, 0.0f, 0x1.b18bbp-30f,
     0x1.fb0124p-34f, 0x1.b5052cp-48f, 0x1.7da9e2p-75f, 0.0f, 0.0f, 0x1.3fdeaep-102f,
     0x1.06c98ap-29f, 0x1.7a218ap-69f, 0.0f, 0.0f, 0x1.a5ca16p-87f, 0x1.6c4264p-20f,
     0x1.153688p-121f, 0.0f, 0x1.acf05ap-94f, 0x1.10e758p-64f, 0x1.ecfa42p-99f, 0.0f,
     0x1.76781ep-113f, 0x1.2b07f2p-21f, 0x1.470558p-77f, 0.0f, 0x1.7b71b6p-45f,
     0x1.2ee99ap-112f, 0x1.35af82p-124f, 0.0f, 0.0f, 0x1.eb87d8p-35f, 0x1.23bedp-44f,
     0x1.27142ep-57f, 0x1.874fe4p-106f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.f859f6p-27f,
     0x1.61cf4p-100f, 0.0f, 0.0f, 0x1.dec69ap-20f, 0.0f, 0.0f, 0x1.7b4838p-1f,
     0x1.db3792p-40f, 0x1.ee0c5ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ce3e8p-121f,
     0x1.20aa82p-62f, 0x1.bed61cp-101f, 0.0f, 0x1.f98794p-77f, 0x1.67fcf4p-94f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e15c62p-35f, 0x1.3c4e42p-27f,
     0x1.98196ep-51f, 0.0f, 0x1.2b1a42p-40f, 0x1.fb003p-81f, 0.0f, 0x1.1d1ab2p-65f,
     0x1.28825ap-76f, 0.0f, 0.0f, 0x1.2817c8p-123f, 0x1.e7792ep-52f, 0x1.b95eap-42f,
     0x1.353aep-111f, 0x1.7a3b04p-91f, 0x1p0f, 0x1.887f8cp-96f, 0.0f, 0x1.f80ecep-2f,
     0x1.b775aap-56f, 0.0f, 0.0f, 0x1.2462fp-44f, 0x1.eb5646p-4f, 0.0f,
     0x1.10fbd6p-53f, 0.0f, 0.0f, 0x1.1f22eap-112f, 0x1.92a61p-100f, 0x1.ddaa68p-16f,
     0.0f, 0.0f, 0x1.3c24dp-26f, 0.0f, 0.0f, 0x1.05720ep-87f, 0x1.93076p-42f,
     0x1.aa9bf6p-62f, 0.0f, 0.0f, 0x1.34075cp-51f, 0x1.8b36e6p-56f, 0.0f,
     0x1.afd0fp-98f, 0.0f, 0x1.33f94ep-107f, 0x1.68d81ap-89f, 0x1.f7510ap-46f,
     0x1.3cfa6ep-47f, 0.0f, 0x1.79a88cp-81f, 0x1.3f1d8ep-91f, 0x1.e1ca8cp-53f,
     0x1.b353bap-38f, 0.0f, 0.0f, 0.0f, 0x1.845d76p-87f, 0.0f, 0.0f, 0x1.aefd02p-67f,
     0x1.a8dcb6p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26f67ap-63f, 0x1.2c10ecp-5f,
     0x1.459fbcp-27f, 0.0f, 0x1.67d9p-30f, 0.0f, 0.0f, 0x1.e4a3a4p-14f,
     0x1.5e9e1ap-65f, 0.0f, 0x1.e0b0e4p-59f, 0.0f, 0x1.2b9abep-102f, 0x1.7f3b6p-61f,
     0x1.105446p-45f, 0.0f, 0x1.750e2cp-49f, 0.0f, 0x1.187e22p-73f, 0.0f, 0.0f,
     0x1.f4a2bap-5f, 0.0f, 0x1.1493b4p-65f, 0.0f, 0.0f, 0x1.65a99cp-4f,
     0x1.de1dacp-46f, 0.0f, 0x1.9f938ap-115f, 0.0f, 0x1.042c44p-59f, 0x1.4dc204p-108f,
     0x1.6232dcp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.955062p-24f, 0.0f, 0.0f,
     0x1.9a3a3ep-115f, 0x1.31bfc6p-113f, 0.0f, 0x1.2a7706p-8f, 0.0f, 0x1.9a106ap-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8db442p-102f, 0.0f, 0.0f, 0x1.56df26p-18f,
     0x1.82da06p-65f, 0x1.22736ap-106f, 0.0f, 0x1.ce1c7cp-116f, 0.0f, 0x1.70c67cp-53f,
     0x1.a62bd4p-14f, 0x1.13aa7ap-91f, 0x1.9b005p-23f, 0x1.88409ap-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3ada2p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c94dp-1f, 0.0f, 0.0f,
     0.0f, 0x1.c6b728p-87f, 0.0f, 0x1.28b1b2p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b08c1cp-126f, 0x1.173b14p-95f, 0x1.5a442p-50f, 0x1.5fd7e2p-90f,
     0x1.bfc832p-18f, 0x1.24855cp-97f, 0x1.826974p-36f, 0x1.f41744p-105f,
     0x1.0a51bep-40f, 0x1.c0140ap-67f, 0x1.f4257ep-35f, 0x1.aa8bdep-13f, 0.0f, 0.0f,
     0.0f, 0x1.3129cep-120f, 0x1.f56fep-125f, 0.0f, 0.0f, 0x1.823154p-55f,
     0x1.118e5ep-25f, 0.0f, 0x1.1e3cd2p-124f, 0x1.d2fc94p-110f, 0x1.f4ad3ep-64f,
     0x1.14edaep-117f, 0x1.9846aep-104f, 0x1.c5c7d8p-61f, 0.0f, 0x1.a68a7p-115f,
     0x1.e6c478p-37f, 0.0f, 0.0f, 0x1.917baap-91f, 0x1.4cf71ap-8f, 0.0f,
     0x1.022786p-35f, 0x1.1582a4p-90f, 0x1.0dbb8ap-10f, 0x1.59bc72p-47f, 0.0f,
     0x1.762c6ap-122f, 0x1.535c6p-121f, 0x1.f9803p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f31ecp-113f, 0x1.940d76p-35f, 0x1.94706ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.22bb3p-106f, 0.0f, 0.0f, 0.0f, 0x1.5d7ebap-71f, 0x1.383402p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef4aeap-27f, 0x1.e77b48p-77f, 0x1.067dc2p-50f, 0x1.c30734p-65f,
     0.0f, 0x1.450ad8p-106f, 0.0f, 0x1.9b06c8p-81f, 0.0f, 0.0f, 0x1.1ab2bep-18f, 0.0f,
     0x1.868d48p-47f, 0x1.6fae5p-48f, 0x1.7dfc58p-33f, 0.0f, 0x1.67d898p-95f,
     0x1.219e84p-91f, 0.0f, 0x1.121f04p-95f, 0.0f, 0.0f, 0x1.d1e202p-67f, 0.0f,
     0x1.94bc06p-117f, 0.0f, 0x1.098964p-8f, 0x1.ad8d26p-33f, 0x1.69614p-17f,
     0x1.b21e9ap-1f, 0x1.832d62p-46f, 0x1.af88c4p-45f, 0x1.ab82cap-105f,
     0x1.040528p-90f, 0x1.15844p-79f, 0x1.ae73f4p-87f, 0x1.ad3c44p-31f, 0.0f,
     0x1.d011eap-25f, 0x1.85f86ap-112f, 0.0f, 0x1.f9a7b2p-51f, 0x1.094b38p-112f, 0.0f,
     0x1.2fd21cp-98f, 0x1.055c88p-55f, 0x1.d8b744p-35f, 0x1.9c54eap-61f, 0.0f, 0.0f,
     0x1.116cd2p-61f, 0.0f, 0.0f, 0.0f, 0x1.00bb08p-90f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f70114p-24f, 0.0f, 0.0f,
     0x1.040ba4p-121f, 0x1.0ad934p-117f, 0.0f, 0x1.4065dap-106f, 0.0f,
     0x1.be9c78p-87f, 0.0f, 0x1.24af3ap-93f, 0x1.a13264p-84f, 0.0f, 0x1.1318d6p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4f7cp-63f, 0x1.249c26p-44f, 0x1.c9d4cap-102f,
     0x1.844bp-100f, 0x1.e48dfap-105f, 0.0f, 0.0f, 0x1.a44714p-59f, 0.0f, 0.0f,
     0x1.5077fcp-4f, 0x1.044b18p-48f, 0x1.12aceep-121f, 0x1.83d84p-14f, 0.0f, 0.0f,
     0x1.302b92p-25f, 0.0f, 0.0f, 0x1.d491ep-86f, 0x1.8badf6p-11f, 0x1.73c9ccp-73f,
     0.0f, 0.0f, 0x1.a1af5ap-20f, 0x1.b7c7acp-48f, 0.0f, 0.0f, 0.0f, 0x1.b003aep-17f,
     0x1.4259bep-21f, 0x1.be07bcp-116f, 0x1.207786p-18f, 0.0f, 0.0f, 0x1.45fc88p-16f,
     0.0f, 0.0f, 0.0f, 0x1.71047cp-24f, 0.0f, 0.0f, 0.0f, 0x1.d2262cp-97f,
     0x1.faddp-12f, 0.0f, 0.0f, 0x1.fb7b16p-10f, 0.0f, 0.0f, 0x1.f1fba8p-43f,
     0x1.76ea8ap-81f, 0x1.d6aadep-112f, 0.0f, 0x1.3bd1c8p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7cc89ep-16f, 0.0f, 0x1.a700dcp-20f, 0.0f, 0.0f, 0x1.8b1f3ap-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bfc9dep-55f, 0x1.d885p-96f, 0.0f, 0x1.457c5cp-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.59689ep-80f, 0x1.ef3ddcp-99f, 0.0f, 0.0f, 0x1.7cb7p-43f,
     0x1.995182p-23f, 0x1.d09ebp-89f, 0x1.952a88p-82f, 0.0f, 0x1.bc3878p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.045cfap-31f, 0x1.5db10cp-105f, 0.0f, 0.0f, 0x1.b1ac2ap-93f,
     0.0f, 0.0f, 0x1.f6fa22p-119f, 0.0f, 0.0f, 0x1.783392p-34f, 0x1.fa189ap-51f,
     0x1.f98906p-17f, 0.0f, 0.0f, 0x1.e8989p-26f, 0.0f, 0x1.422978p-114f,
     0x1.268b7cp-71f, 0.0f, 0x1.b7e60ap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.806972p-106f,
     0.0f, 0.0f, 0.0f, 0x1.3d0056p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fffe2p-23f,
     0x1.bdfd28p-4f, 0x1.f7880ap-103f, 0.0f, 0.0f, 0.0f, 0x1.c9157ep-114f,
     0x1.42dc56p-17f, 0x1.81c572p-21f, 0x1.642b28p-64f, 0.0f, 0x1.7c3cdap-107f, 0.0f,
     0.0f, 0x1.8f9502p-125f, 0x1.7adc54p-99f, 0x1.e4de72p-14f, 0.0f, 0x1.a5d82cp-70f,
     0.0f, 0.0f, 0.0f, 0x1.d88d48p-29f, 0x1.5c6074p-59f, 0x1.4a35d6p-71f,
     0x1.e0a3bp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44a274p-55f, 0x1.c3c83ap-60f,
     0x1.62fa9ap-38f, 0x1.fb2406p-32f, 0.0f, 0.0f, 0x1.dc24cap-95f, 0x1.41a1cep-76f,
     0x1.f29f7ep-125f, 0x1.92fe86p-51f, 0.0f, 0x1.0fd564p-1f, 0x1.54fbfcp-6f, 0.0f,
     0x1.1ce98cp-97f, 0.0f, 0x1.770c4ap-121f, 0.0f, 0x1.332a88p-31f, 0x1.be343ap-58f,
     0x1.80ba72p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a92a8p-12f,
     0x1.10f42p-99f, 0x1.7214d2p-42f, 0.0f, 0.0f, 0.0f, 0x1.59529cp-23f,
     0x1.a86682p-84f, 0x1.22d43ep-10f, 0x1.3fcf4cp-47f, 0x1.8e543ap-66f, 0.0f,
     0x1.515aacp-118f, 0.0f, 0x1.098a2cp-91f, 0x1.0762e2p-89f, 0.0f, 0.0f, 0.0f,
     0x1.c713ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ddcecp-36f, 0.0f, 0.0f, 0.0f,
     0x1.68cb9cp-60f, 0x1.6eb4a4p-73f, 0x1.422ddcp-88f, 0x1.83c4cap-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8f267ap-69f, 0x1.2c31ep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0053c2p-55f, 0x1.7cb622p-55f, 0.0f, 0.0f, 0x1.c63d3cp-110f, 0x1.f17d72p-68f,
     0x1.6ad8e2p-92f, 0x1.ba468p-120f, 0x1.1fcb3ap-50f, 0.0f, 0x1.8969eep-20f, 0.0f,
     0.0f, 0.0f, 0x1.9504ecp-120f, 0.0f, 0.0f, 0.0f, 0x1.404942p-1f, 0.0f,
     0x1.e4a7fp-32f, 0x1.ec0022p-16f, 0.0f, 0.0f, 0x1.8336dp-124f, 0x1.b9c1c6p-48f,
     0.0f, 0.0f, 0.0f, 0x1.995bcep-103f, 0.0f, 0.0f, 0.0f, 0x1.880cb2p-23f, 0.0f,
     0.0f, 0x1.d2f324p-37f, 0x1.da74dap-31f, 0.0f, 0x1.9fc7d2p-76f, 0x1.eec552p-29f,
     0x1.c099eap-4f, 0x1.0cc4d4p-101f, 0x1.5f67a6p-53f, 0x1.bafeeep-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b6427ap-49f, 0.0f, 0.0f, 0.0f, 0x1.3adca6p-1f, 0.0f,
     0x1.4fcbdcp-4f, 0.0f, 0.0f, 0x1.837286p-62f, 0x1.239daap-88f, 0.0f, 0.0f,
     0x1.04eff2p-13f, 0x1.1d5cp-99f, 0.0f, 0x1.f8f0bap-96f, 0x1.c16576p-92f, 0.0f,
     0x1.bbec52p-92f, 0.0f, 0.0f, 0x1.d379eep-113f, 0.0f, 0x1.c6a14ep-96f,
     0x1.2dca8p-65f, 0.0f, 0.0f, 0x1.9410c4p-11f, 0.0f, 0x1.d04db2p-86f, 0.0f,
     0x1.c37a56p-114f, 0x1.0bb4fcp-114f, 0.0f, 0.0f, 0x1.91c5b6p-84f, 0.0f, 0.0f,
     0x1.d47faep-88f, 0.0f, 0.0f, 0x1.e2a8e4p-20f, 0x1.20026cp-86f, 0.0f, 0.0f, 0.0f,
     0x1.abb1fap-116f, 0x1.830c18p-79f, 0x1.6d029ep-80f, 0x1.cfe444p-65f,
     0x1.115b5cp-74f, 0x1.1b8862p-57f, 0.0f, 0x1.984932p-56f, 0.0f, 0x1.b4fb5cp-6f,
     0x1.4d868ep-108f, 0x1.f2ecd2p-3f, 0x1.740168p-126f, 0.0f, 0x1.d1fc4p-21f, 0.0f,
     0x1.74ff48p-9f, 0x1.e776dap-93f, 0x1.1edd14p-28f, 0x1.3cfad2p-96f,
     0x1.f783b6p-82f, 0.0f, 0.0f, 0x1.058804p-65f, 0x1.7d6422p-32f, 0.0f, 0.0f, 0.0f,
     0x1.68fb0cp-46f, 0x1.06be82p-31f, 0.0f, 0x1.8296d6p-95f, 0.0f, 0x1.9796p-35f,
     0.0f, 0.0f, 0x1.4f7be6p-62f, 0.0f, 0x1.498b98p-117f, 0x1.7ca984p-38f, 0.0f,
     0x1.3431e4p-105f, 0.0f, 0.0f, 0x1.7005d2p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.02c52p-84f, 0.0f, 0x1.35b84p-61f, 0x1.f5c7aap-106f, 0.0f,
     0x1.7f0c2p-18f, 0.0f, 0.0f, 0x1.8932e6p-101f, 0.0f, 0.0f, 0.0f, 0x1.e8c20cp-58f,
     0.0f, 0x1.40162ap-61f, 0x1.1df5fcp-17f, 0.0f, 0x1.8c5eb2p-51f, 0.0f,
     0x1.19f6c8p-29f, 0.0f, 0.0f, 0x1.9d57cap-42f, 0.0f, 0x1.e8ca08p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.07934ap-32f, 0.0f, 0x1.992454p-87f, 0x1.119e3cp-123f,
     0x1.b78c8ap-56f, 0x1.324d3ep-69f, 0.0f, 0x1.fd794ap-9f, 0x1.0eb44cp-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3f9f46p-83f, 0.0f, 0x1.0e84ap-118f, 0.0f, 0.0f, 0.0f,
     0x1.2b7d32p-56f, 0.0f, 0x1.a0c5f2p-116f, 0.0f, 0.0f, 0x1.1cde78p-45f, 0.0f,
     0x1.cc6c22p-31f, 0x1.8e1ddap-79f, 0.0f, 0x1.632ae8p-107f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0d6062p-5f, 0.0f, 0.0f, 0x1.fe145ep-109f, 0.0f, 0.0f,
     0x1.18c8aap-39f, 0.0f, 0.0f, 0.0f, 0x1.e0f724p-28f, 0x1.1261a6p-52f,
     0x1.0dc2fep-47f, 0x1.76b16cp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.567082p-118f, 0.0f, 0x1.35e18ep-124f, 0x1.f108e2p-103f, 0.0f,
     0x1.1c627ep-25f, 0.0f, 0.0f, 0.0f, 0x1.b0b18cp-20f, 0.0f, 0x1.14a118p-54f,
     0x1.4dfb94p-5f, 0x1.e05c52p-37f, 0.0f, 0.0f, 0x1.7cb0b4p-7f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5a7beap-58f, 0.0f, 0.0f, 0.0f, 0x1.344362p-58f, 0x1.99deb8p-60f, 0.0f,
     0.0f, 0x1.ed5838p-45f, 0.0f, 0.0f, 0x1.e8ce34p-68f, 0.0f, 0.0f, 0.0f,
     0x1.5c42dap-1f, 0.0f, 0x1.8834a6p-68f, 0x1.8ccbaep-79f, 0.0f, 0.0f, 0.0f,
     0x1.f8a3dep-76f, 0.0f, 0x1.4bd47ap-39f, 0.0f, 0x1.23ec2ep-80f, 0x1.b17a5p-124f,
     0x1.9288fcp-115f, 0x1.59c6f8p-92f, 0.0f, 0.0f, 0x1.297b16p-111f, 0x1.0ec93ap-82f,
     0.0f, 0.0f, 0x1.d5cbcep-2f, 0x1.e99336p-6f, 0x1.07adeep-89f, 0.0f,
     0x1.15168cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a31156p-9f, 0x1.25b36p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c20e8p-13f, 0x1.0f8f82p-2f, 0.0f, 0.0f,
     0x1.8d00a4p-89f, 0.0f, 0.0f, 0x1.040ad4p-126f, 0x1.75c506p-36f, 0x1.58334ep-125f,
     0x1.fd92a6p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb852cp-105f, 0.0f, 0.0f,
     0x1.c48424p-116f, 0.0f, 0x1.687794p-119f, 0x1.c199f8p-75f, 0x1.918e36p-106f,
     0x1.ff376cp-53f, 0.0f, 0.0f, 0x1.55235ep-81f, 0.0f, 0x1.55c902p-65f,
     0x1.5fa714p-112f, 0.0f, 0x1.9cd388p-28f, 0x1.759a6ep-71f, 0x1.15841cp-26f,
     0x1.27941cp-78f, 0.0f, 0x1.b9fbfp-35f, 0.0f, 0.0f, 0x1.dc99c8p-49f,
     0x1.73de0ep-43f, 0x1.fcfb42p-107f, 0.0f, 0.0f, 0.0f, 0x1.567cfp-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c72f2p-2f, 0x1.9cff7ap-19f,
     0x1.8c3c94p-36f, 0x1.30d4a6p-104f, 0x1.90bff4p-94f, 0x1.dd7feap-38f,
     0x1.c4498ap-94f, 0x1.6306aep-95f, 0x1.0231a8p-58f, 0.0f, 0.0f, 0.0f,
     0x1.83547ep-103f, 0x1.e5f4d4p-48f, 0.0f, 0.0f, 0x1.f9b97ap-53f, 0x1.35b2fap-47f,
     0x1.657b38p-105f, 0x1.6310dcp-83f, 0.0f, 0x1.68c742p-125f, 0x1.d1045p-57f, 0.0f,
     0x1.83dd96p-70f, 0x1.4a9db2p-70f, 0x1.b1906ap-80f, 0.0f, 0x1.4cb8a4p-13f, 0.0f,
     0x1.badb62p-57f, 0x1.802826p-39f, 0x1.ae19b6p-35f, 0x1.6562aap-19f, 0.0f,
     0x1.274134p-69f, 0x1.f83378p-78f, 0.0f, 0x1.8a76ecp-2f, 0.0f, 0.0f, 0.0f,
     0x1.6dc9f4p-50f, 0x1.c3c51p-108f, 0.0f, 0x1.667b78p-77f, 0x1.659c86p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3841cp-10f, 0.0f, 0.0f, 0x1.90cca2p-107f, 0.0f,
     0x1.01cf62p-105f, 0.0f, 0.0f, 0.0f, 0x1.02ebfcp-112f, 0.0f, 0x1.c57e98p-7f,
     0x1.c79b8cp-36f, 0x1.d032ep-25f, 0x1.b398cp-77f, 0x1.ea6b16p-31f, 0.0f,
     0x1.d578acp-82f, 0.0f, 0x1.e8c85ap-17f, 0.0f, 0.0f, 0x1.e849f4p-26f, 0.0f,
     0x1.229982p-57f, 0x1.7f3e78p-36f, 0x1.cc6aep-121f, 0.0f, 0x1.e1d668p-12f, 0.0f,
     0.0f, 0.0f, 0x1.4cedap-61f, 0x1.efb35p-51f, 0x1.143898p-16f, 0x1.14a7a8p-114f,
     0x1.f27306p-38f, 0.0f, 0x1.621fd2p-11f, 0x1.e8ba3p-22f, 0.0f, 0x1.ee4cfp-40f,
     0x1.39423cp-11f, 0x1.c6f488p-95f, 0x1.190b5ep-54f, 0x1.b31694p-33f,
     0x1.61dd4p-119f, 0.0f, 0.0f, 0.0f, 0x1.82035p-70f, 0x1.4d2778p-23f, 0.0f,
     0x1.551cap-38f, 0x1.60c156p-88f, 0x1.553cecp-75f, 0.0f, 0.0f, 0x1.73a8ep-27f,
     0.0f, 0.0f, 0.0f, 0x1.0cfd42p-35f, 0x1.2c102ap-94f, 0.0f, 0x1.84ad48p-26f,
     0x1.5fcbf8p-13f, 0x1.7060d4p-3f, 0.0f, 0.0f, 0x1.8153c8p-30f, 0.0f,
     0x1.bb816ap-125f, 0.0f, 0x1.963b8ap-16f, 0.0f, 0.0f, 0.0f, 0x1.82baaep-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.573a28p-98f, 0.0f, 0x1.57edfep-17f,
     0x1.9d0f42p-92f, 0.0f, 0x1.02ea8ep-82f, 0.0f, 0x1.d95bf2p-75f, 0.0f,
     0x1.7fef94p-88f, 0x1.aa911ep-21f, 0.0f, 0.0f, 0x1.79308ap-22f, 0x1.9bcae2p-109f,
     0.0f, 0x1.637766p-97f, 0.0f, 0x1.3ad492p-43f, 0x1.f3b218p-52f, 0x1.926018p-93f,
     0.0f, 0x1.af0bcap-102f, 0.0f, 0.0f, 0x1.5e877p-102f, 0.0f, 0x1.4ab21cp-35f,
     0x1.f2597cp-20f, 0.0f, 0x1.c0f63ep-96f, 0.0f, 0.0f, 0x1.76be0cp-63f,
     0x1.e7949ep-123f, 0.0f, 0.0f, 0.0f, 0x1.edd59ep-91f, 0.0f, 0x1.dfc7ap-72f, 0.0f,
     0x1.729306p-38f, 0x1.504ffp-106f, 0.0f, 0.0f, 0x1.2c51b8p-9f, 0.0f,
     0x1.36d35p-99f, 0x1.b42f32p-55f, 0x1.30052ap-56f, 0x1.46a3ecp-126f,
     0x1.a60bdcp-31f, 0x1.14f78ep-73f, 0.0f, 0.0f, 0x1.895fd6p-63f, 0x1.6fb3d2p-100f,
     0x1.215276p-78f, 0x1.3d66eap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86c814p-96f,
     0x1.1d2fc8p-109f, 0.0f, 0.0f, 0x1.4f0bd4p-91f, 0.0f, 0x1.ecff88p-52f, 0.0f, 0.0f,
     0x1.c3a23ep-101f, 0x1.34e2f4p-87f, 0x1.c02006p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.6b1a3ap-1f, 0.0f, 0x1.74c5fcp-26f, 0x1.830428p-102f, 0x1.7811acp-8f,
     0.0f, 0x1.1df916p-16f, 0x1.ec02f4p-118f, 0x1.44a9aap-100f, 0x1.6d54fap-24f, 0.0f,
     0.0f, 0.0f, 0x1.733608p-22f, 0x1.53cd66p-16f, 0x1.ec2b8p-113f, 0x1.a3d1aap-54f,
     0.0f, 0x1.bc454p-103f, 0x1.bf0048p-61f, 0x1.13e8f2p-76f, 0.0f, 0.0f,
     0x1.61c78ep-47f, 0x1.0b9b82p-116f, 0x1.ab9178p-15f, 0.0f, 0x1.740d3cp-99f, 0.0f,
     0x1.f9a918p-105f, 0x1.e5e618p-94f, 0.0f, 0.0f, 0x1.32b3aep-4f, 0x1.3d46dep-124f,
     0x1.9db6aap-88f, 0.0f, 0.0f, 0x1.722bdep-68f, 0x1.4cc1a2p-71f, 0.0f,
     0x1.c2ad64p-50f, 0x1.805eb8p-104f, 0x1.fe392ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.559f58p-106f, 0.0f, 0.0f, 0.0f, 0x1.d981fap-4f, 0.0f, 0.0f, 0x1.50a668p-95f,
     0.0f, 0x1.51478ap-72f, 0x1.6d2a0cp-90f, 0x1.d864d2p-107f, 0.0f, 0.0f,
     0x1.403162p-90f, 0.0f, 0.0f, 0x1.46d6b4p-36f, 0x1.a64f8p-112f, 0x1.adfd24p-113f,
     0.0f, 0x1.0618a8p-90f, 0x1.7f8114p-13f, 0x1.0eb958p-110f, 0.0f, 0.0f,
     0x1.4aeb1ep-3f, 0.0f, 0.0f, 0x1.e1b5f6p-74f, 0.0f, 0x1.2661c6p-75f,
     0x1.6409b8p-64f, 0.0f, 0x1.ad284cp-21f, 0x1.09932p-21f, 0x1.df0ca6p-125f,
     0x1.e19beap-109f, 0x1.6519dap-14f, 0.0f, 0x1.27a5fap-85f, 0x1.c5bde6p-102f,
     0x1.18c68cp-73f, 0.0f, 0x1.f99956p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23978p-77f,
     0x1.727c1ap-99f, 0.0f, 0.0f, 0x1.eef84ep-95f, 0.0f, 0x1.5209dep-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4e6b18p-103f, 0.0f, 0x1.c8483ep-77f, 0.0f, 0x1.d90016p-118f,
     0x1.a79c4ep-59f, 0x1.c57dccp-110f, 0x1.96b158p-90f, 0.0f, 0.0f, 0.0f,
     0x1.d2d00cp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b36a3p-107f, 0x1.d4a7d6p-124f,
     0.0f, 0.0f, 0.0f, 0x1.656974p-36f, 0.0f, 0x1.27899ap-67f, 0x1.864ed4p-56f,
     0x1.cff4a8p-12f, 0.0f, 0x1.f574cp-1f, 0.0f, 0x1.a638eap-7f, 0.0f, 0.0f,
     0x1.2a4ff6p-46f, 0.0f, 0.0f, 0.0f, 0x1.db4e3ap-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b1f6cp-29f, 0x1.aff4f6p-34f, 0x1.370938p-116f, 0x1.df4598p-79f, 0.0f,
     0.0f, 0x1.3ff6cp-17f, 0x1.055386p-77f, 0x1.015d1ep-106f, 0.0f, 0.0f,
     0x1.36ad72p-54f, 0.0f, 0x1.f744dp-7f, 0x1.cd406p-20f, 0x1.d6cfa6p-104f,
     0x1.d2186ap-12f, 0x1.97b99p-27f, 0x1.a8b014p-12f, 0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_hypotf4_u35avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_hypotf4_u35avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_hypotf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
