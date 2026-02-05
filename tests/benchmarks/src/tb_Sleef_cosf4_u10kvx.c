/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf4_u10kvx.c --function Sleef_cosf4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.dbf21ep-80f, 0.0f, 0.0f, 0x1.c8f7d6p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b4ba8p-49f, 0.0f, 0.0f, 0x1.bc1b0ap-15f, 0x1.7a06b4p-67f, 0.0f,
     0x1.b5f8f4p-14f, 0x1.ec776p-124f, 0.0f, 0.0f, 0.0f, 0x1.33a3dcp-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.29cbbp-6f, 0.0f, 0x1.c4efaep-5f, 0.0f,
     0x1.66687cp-105f, 0.0f, 0.0f, 0.0f, 0x1.21c58cp-51f, 0x1.7936d8p-17f,
     0x1.aa45fp-44f, 0.0f, 0x1.05c0e8p-110f, 0x1.dd7b42p-55f, 0.0f, 0.0f,
     0x1.90b5ccp-54f, 0x1.54670ap-67f, 0.0f, 0x1.569eb6p-122f, 0.0f, 0x1.a65cd4p-38f,
     0.0f, 0x1.9cc2a4p-44f, 0.0f, 0.0f, 0x1.0f6becp-43f, 0x1p0f, 0x1.71041cp-5f, 0.0f,
     0x1.0702aap-102f, 0.0f, 0x1.de3ccap-125f, 0x1.f4f5cep-109f, 0.0f, 0.0f,
     0x1.aef95ap-126f, 0x1.95e84cp-12f, 0x1.def8fep-54f, 0.0f, 0x1.eebf34p-106f, 0.0f,
     0.0f, 0.0f, 0x1.52be3ep-73f, 0x1.8ce0cep-63f, 0.0f, 0.0f, 0.0f, 0x1.e2399ap-122f,
     0x1.9b6616p-41f, 0.0f, 0.0f, 0x1.154eb2p-93f, 0.0f, 0x1.545de8p-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d81d42p-99f, 0.0f, 0.0f, 0.0f, 0x1.47d062p-41f,
     0x1.b76824p-20f, 0x1.245cfap-125f, 0x1.3e821p-86f, 0.0f, 0x1.8692a4p-44f,
     0x1.904f66p-24f, 0.0f, 0.0f, 0x1.b0e192p-6f, 0.0f, 0x1.8d5e38p-9f, 0.0f,
     0x1.096f2ep-112f, 0.0f, 0x1.8eeaeep-109f, 0x1.9e3baep-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c9ad06p-105f, 0x1.bad2e4p-25f, 0x1.a1e1e8p-63f, 0x1.9688cap-28f,
     0x1.49eb26p-66f, 0.0f, 0.0f, 0x1.683c64p-16f, 0.0f, 0.0f, 0x1.44a038p-75f,
     0x1.f2cf86p-55f, 0.0f, 0.0f, 0.0f, 0x1.659adep-118f, 0x1.210a4p-55f, 0.0f,
     0x1.1d4accp-61f, 0.0f, 0.0f, 0x1.97a0d8p-48f, 0.0f, 0x1.2e4b82p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.54e392p-71f, 0x1.cd0714p-87f, 0x1.dbb6e8p-66f,
     0x1.ece174p-113f, 0x1.530ca4p-60f, 0.0f, 0x1.4fc7b2p-94f, 0.0f, 0.0f, 0.0f,
     0x1.05c2eep-107f, 0x1.f7ab1p-3f, 0x1.556e32p-9f, 0.0f, 0x1.07d3f6p-46f,
     0x1.14b234p-8f, 0x1.46b4ccp-111f, 0.0f, 0.0f, 0x1.1006cap-79f, 0.0f,
     0x1.a85098p-87f, 0.0f, 0x1.4974c6p-25f, 0x1.fa67a6p-36f, 0.0f, 0x1.9126f4p-63f,
     0x1.10d688p-66f, 0.0f, 0x1.2bb9d8p-83f, 0x1.cc01e4p-5f, 0.0f, 0x1.f06466p-30f,
     0x1.abb6b2p-27f, 0.0f, 0x1.af6d18p-124f, 0x1.3b729p-65f, 0x1.4c4a56p-25f,
     0x1.e9204cp-88f, 0x1.37b96ep-63f, 0x1.6152acp-69f, 0x1.02c44ep-79f,
     0x1.6961e8p-53f, 0.0f, 0x1.e3164ep-24f, 0x1.961d84p-36f, 0.0f, 0.0f,
     0x1.9ceef2p-112f, 0x1.2eae54p-93f, 0x1.cb6e9cp-39f, 0x1.ffb7ccp-111f,
     0x1.58b15p-37f, 0x1.8b1c82p-33f, 0x1.03ac94p-53f, 0x1.409c3cp-89f,
     0x1.5ecfd4p-89f, 0.0f, 0.0f, 0x1.a2cc8ep-115f, 0.0f, 0.0f, 0x1.297192p-63f,
     0x1.4da21cp-64f, 0x1.8d03d8p-99f, 0x1.2d00d4p-31f, 0x1.2771d6p-59f, 0.0f,
     0x1.cae874p-125f, 0x1.644d9ap-13f, 0x1.07dd94p-15f, 0.0f, 0x1.64834ep-69f,
     0x1.c2d216p-39f, 0x1.b7c074p-78f, 0.0f, 0x1.d7184cp-56f, 0x1p0f, 0x1.b51b26p-67f,
     0.0f, 0x1.50caaep-67f, 0.0f, 0x1.c55014p-75f, 0x1.08b14ep-86f, 0.0f,
     0x1.8fe26ep-61f, 0.0f, 0.0f, 0x1.bb1424p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.551de8p-95f, 0.0f, 0x1.f4822ep-36f, 0.0f, 0.0f, 0.0f, 0x1.ec113cp-26f,
     0x1.6a4acp-61f, 0x1.6d1658p-78f, 0x1.8ff818p-64f, 0.0f, 0x1.bb04cap-111f, 0.0f,
     0x1.d4bc96p-123f, 0x1.c09276p-80f, 0.0f, 0x1.6739ecp-20f, 0x1.bca44cp-75f, 0.0f,
     0x1.e06e62p-111f, 0x1.87f2bcp-27f, 0x1.adaed8p-105f, 0x1.04c536p-18f,
     0x1.219e4ep-43f, 0x1.2617e8p-121f, 0x1.0a7cfep-56f, 0.0f, 0x1.83d714p-113f, 0.0f,
     0.0f, 0.0f, 0x1.6179e8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b7d4ap-34f, 0.0f,
     0.0f, 0x1.ed02c6p-89f, 0x1.1dee86p-22f, 0x1.304954p-114f, 0x1.1103eep-70f,
     0x1.b112p-80f, 0x1.bb6082p-74f, 0x1.b10e6ep-110f, 0.0f, 0x1.1fa694p-117f,
     0x1.d8b086p-73f, 0x1.c65da6p-116f, 0.0f, 0x1.15e3d4p-94f, 0.0f, 0.0f,
     0x1.feb2ap-114f, 0.0f, 0.0f, 0x1.4ad55cp-22f, 0x1.c3f8b2p-93f, 0x1.26fa9ap-25f,
     0.0f, 0x1.2787b8p-120f, 0.0f, 0.0f, 0x1.e6bc1p-44f, 0x1.7d8262p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8386aap-17f, 0.0f, 0x1.44719cp-56f, 0x1.b8fdp-84f,
     0x1.11382ep-30f, 0x1.ffc37p-62f, 0.0f, 0x1.58c3b2p-53f, 0x1.369496p-74f, 0.0f,
     0.0f, 0x1.572c2ap-80f, 0x1.f6e3c8p-105f, 0.0f, 0x1.38c496p-109f, 0.0f,
     0x1.710258p-121f, 0.0f, 0x1.307aa2p-83f, 0.0f, 0x1.b8b518p-118f,
     0x1.83283ap-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cd716p-20f, 0.0f, 0.0f, 0.0f,
     0x1.1049bep-94f, 0x1.241454p-21f, 0.0f, 0x1.62efcp-57f, 0x1p0f, 0x1.4c7364p-79f,
     0.0f, 0.0f, 0.0f, 0x1.ef114ap-5f, 0.0f, 0.0f, 0x1.c7062cp-21f, 0.0f,
     0x1.a775f6p-57f, 0.0f, 0.0f, 0x1.ef5fe6p-33f, 0x1.08e728p-101f, 0.0f, 0.0f,
     0x1.6a8572p-108f, 0x1.c86e0ep-96f, 0x1.e2081p-31f, 0.0f, 0x1.98ae5cp-83f, 0.0f,
     0.0f, 0.0f, 0x1.8fbdd6p-67f, 0.0f, 0.0f, 0x1.8e210ep-117f, 0.0f, 0.0f, 0.0f,
     0x1.c01f28p-126f, 0x1.3b155ap-51f, 0x1.58586cp-85f, 0x1.a04512p-96f, 0.0f,
     0x1.b1af48p-91f, 0.0f, 0x1.b3f51ep-122f, 0x1.18a464p-54f, 0.0f, 0x1.c69e1cp-81f,
     0x1.f60bd8p-93f, 0x1.f9dc4ap-60f, 0x1.dcf816p-60f, 0x1.c25e14p-18f, 0.0f,
     0x1.5eae58p-71f, 0x1.a9a152p-19f, 0.0f, 0x1.be409cp-41f, 0.0f, 0x1.2d1618p-53f,
     0x1.cf639p-96f, 0x1.6af39p-93f, 0x1.2e71b4p-28f, 0x1.9d6f28p-10f, 0.0f,
     0x1.d1d9bp-91f, 0.0f, 0x1.663edp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0416p-11f,
     0x1.aaa6e6p-62f, 0.0f, 0x1.3b2132p-27f, 0x1.5356c4p-71f, 0x1.0eeec8p-111f, 0.0f,
     0x1.55ebaep-21f, 0.0f, 0x1.7bb8dep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.533208p-11f, 0x1.2b2f56p-22f, 0x1.c73edep-56f, 0.0f, 0.0f, 0.0f,
     0x1.2bedf2p-108f, 0.0f, 0.0f, 0.0f, 0x1.e20a9cp-83f, 0.0f, 0x1.f68dep-23f, 0.0f,
     0.0f, 0x1.7dc612p-91f, 0.0f, 0x1.b3446p-72f, 0.0f, 0.0f, 0.0f, 0x1.1248cap-96f,
     0.0f, 0x1.3c8c74p-52f, 0x1p0f, 0x1.37720ap-103f, 0.0f, 0.0f, 0x1.2c561ep-66f,
     0x1.c0e6e8p-1f, 0.0f, 0.0f, 0x1.bab9b8p-27f, 0x1.5cd91p-13f, 0x1.8b67d4p-85f,
     0.0f, 0x1.75cbc8p-103f, 0x1.0cd5ap-57f, 0x1.79ec54p-7f, 0x1.419866p-2f,
     0x1.23a074p-107f, 0.0f, 0x1.1e34cp-110f, 0x1.18ecc2p-15f, 0.0f, 0x1.56f5fap-53f,
     0.0f, 0x1.41ee4cp-114f, 0.0f, 0.0f, 0.0f, 0x1.916ea6p-3f, 0.0f, 0x1.7be334p-32f,
     0.0f, 0.0f, 0.0f, 0x1.692754p-49f, 0x1.43d268p-35f, 0.0f, 0.0f, 0x1.73e132p-111f,
     0x1.4f9782p-42f, 0.0f, 0.0f, 0x1.aca266p-4f, 0.0f, 0.0f, 0x1.8873c2p-60f, 0.0f,
     0.0f, 0x1.07845ep-95f, 0x1.05d876p-36f, 0.0f, 0x1.d1846p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.866a56p-104f, 0.0f, 0x1.fd3c08p-102f, 0x1.6f4ac8p-123f, 0.0f,
     0x1.ac542ap-1f, 0x1.baf8e2p-112f, 0x1.0d5a3ep-57f, 0.0f, 0x1.291e04p-66f,
     0x1.c7435cp-52f, 0.0f, 0x1.7ef13ap-23f, 0x1.5888ep-95f, 0x1.b860cap-11f,
     0x1.94c624p-87f, 0.0f, 0.0f, 0.0f, 0x1.b9de66p-19f, 0.0f, 0x1.a94234p-63f, 0.0f,
     0.0f, 0x1.a26be4p-113f, 0.0f, 0x1.21fed8p-23f, 0x1.6eba76p-12f, 0.0f,
     0x1.098278p-72f, 0x1.6e949cp-86f, 0.0f, 0x1.906892p-2f, 0x1.3414p-38f,
     0x1.4f40acp-58f, 0x1.d996dp-10f, 0.0f, 0x1.38a878p-18f, 0.0f, 0x1.a94c82p-122f,
     0.0f, 0x1.20d15cp-96f, 0.0f, 0x1.f1e184p-121f, 0.0f, 0x1.1a1986p-85f,
     0x1.5b9a7ap-122f, 0.0f, 0x1.e4b4d8p-91f, 0.0f, 0x1.4ce8bep-118f, 0.0f,
     0x1.614fbcp-12f, 0.0f, 0x1.f6dc1p-29f, 0x1.ef3904p-120f, 0x1.abc8b6p-108f,
     0x1.fc0104p-123f, 0x1.f3b63p-1f, 0x1.821cc4p-120f, 0x1.9c21dcp-50f,
     0x1.acb8c6p-120f, 0x1.34fb86p-124f, 0.0f, 0.0f, 0x1.b64a08p-82f, 0.0f, 0.0f,
     0.0f, 0x1.ee90d8p-2f, 0x1.a9886p-32f, 0.0f, 0x1.6e41eep-88f, 0x1.56331cp-107f,
     0.0f, 0x1.ace6cp-36f, 0x1.5af672p-57f, 0x1.f9672cp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.797534p-107f, 0x1.f7b57ep-65f, 0x1.603ba8p-95f, 0.0f, 0.0f, 0x1.b55f56p-57f,
     0x1.8d250ap-76f, 0.0f, 0x1.6fe55cp-126f, 0.0f, 0x1.c255d6p-74f, 0x1.70bdfap-19f,
     0x1.4577d6p-69f, 0.0f, 0.0f, 0.0f, 0x1.8e3ee2p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a26d78p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1p0f,
     0x1.d86876p-104f, 0x1.460444p-97f, 0x1.f0a93ap-17f, 0x1.d9ee28p-13f, 0.0f, 0.0f,
     0.0f, 0x1.b0482p-7f, 0x1.5172f2p-111f, 0x1.c446fap-72f, 0x1.c89b7ap-40f,
     0x1.516f9cp-3f, 0.0f, 0x1.576656p-84f, 0x1.9a19dp-85f, 0.0f, 0x1.213308p-21f,
     0.0f, 0x1.58c7aap-73f, 0.0f, 0.0f, 0.0f, 0x1.6b1b72p-69f, 0.0f, 0x1.0a39acp-13f,
     0x1.1e884ap-8f, 0x1.e3914cp-77f, 0x1.03dad8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa495ep-24f, 0.0f, 0x1.605b4cp-98f, 0.0f, 0.0f, 0.0f, 0x1.f84812p-36f,
     0x1.472714p-13f, 0x1p0f, 0.0f, 0x1.bd04e6p-54f, 0.0f, 0x1.e0e446p-105f,
     0x1.3c0e8ap-87f, 0x1.f08862p-114f, 0.0f, 0.0f, 0x1.1e1af4p-11f, 0x1.360f84p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a49c1p-50f, 0x1.aa9fdap-51f, 0.0f, 0.0f, 0.0f,
     0x1.95abbcp-30f, 0x1.9e9a84p-90f, 0x1.d7df3ep-108f, 0.0f, 0.0f, 0x1.0234e8p-122f,
     0x1.8dce2ep-126f, 0x1.197f8ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ee4d4p-88f, 0.0f, 0.0f, 0.0f, 0x1.21d192p-47f, 0x1.cab852p-29f, 0.0f, 0.0f,
     0x1.7781e4p-50f, 0.0f, 0.0f, 0.0f, 0x1.eac3e4p-28f, 0.0f, 0.0f, 0.0f,
     0x1.d3df9p-27f, 0.0f, 0x1.421d8ep-10f, 0x1.c69354p-44f, 0x1.1e460ap-55f, 0.0f,
     0x1.923646p-104f, 0.0f, 0.0f, 0x1.d73afp-72f, 0x1.33ccccp-62f, 0.0f,
     0x1.37c08ep-122f, 0x1.a4519ap-40f, 0x1p0f, 0.0f, 0x1.0fd1b8p-27f,
     0x1.d01c3cp-105f, 0x1.198276p-106f, 0.0f, 0x1.302ac8p-99f, 0x1.28ad92p-111f,
     0.0f, 0x1.907424p-74f, 0x1.e8a60cp-70f, 0x1.6ef6fcp-83f, 0.0f, 0x1.2e76a2p-49f,
     0.0f, 0.0f, 0.0f, 0x1.ad2636p-57f, 0.0f, 0x1p0f, 0x1.7b8c82p-44f, 0.0f, 0.0f,
     0.0f, 0x1.132ffcp-97f, 0.0f, 0x1.05d84ap-80f, 0x1.0c9f52p-41f, 0.0f, 0.0f,
     0x1.7ffddp-31f, 0x1.72b80cp-74f, 0.0f, 0x1.667a48p-39f, 0x1.255994p-11f,
     0x1.114c16p-14f, 0.0f, 0x1.87ad38p-54f, 0x1.0f3d52p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.019b6ap-2f, 0x1.f55ba2p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.213afp-70f,
     0x1.87a6f6p-66f, 0.0f, 0x1.cce0cep-49f, 0.0f, 0x1.ac5846p-19f, 0.0f, 0.0f, 0.0f,
     0x1.9c7ae4p-56f, 0.0f, 0x1.e55af8p-120f, 0.0f, 0.0f, 0x1.19f136p-72f,
     0x1.971714p-77f, 0x1.1f7e5ep-124f, 0x1.aa4712p-126f, 0.0f, 0.0f, 0x1.1db596p-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.71b54ep-85f, 0x1.bd8838p-64f, 0x1.85f178p-57f, 0.0f,
     0.0f, 0.0f, 0x1.90c974p-46f, 0.0f, 0.0f, 0x1.dff3cp-10f, 0x1.ede0a8p-28f, 0.0f,
     0x1.e8a63ep-45f, 0x1.946b7p-34f, 0x1.6ff402p-60f, 0x1.ef33p-72f, 0x1.1e221p-120f,
     0x1.ac8012p-76f, 0x1.f70d58p-32f, 0x1.835baap-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63b5ap-9f, 0x1.39df6p-18f, 0x1.31f956p-31f, 0.0f, 0x1.0d004ap-34f,
     0x1.709f9p-53f, 0x1.346f5p-108f, 0x1.da710ap-31f, 0x1.c4e4d8p-62f, 0.0f,
     0x1.e73ed4p-12f, 0x1.19a9dep-5f, 0x1.42ab0ep-82f, 0x1.d0d9e6p-30f, 0.0f,
     0x1.c069ccp-118f, 0x1.8a2378p-116f, 0.0f, 0x1.37f264p-101f, 0x1.9e972ap-90f,
     0.0f, 0.0f, 0x1.22188p-88f, 0x1.d838b4p-66f, 0.0f, 0x1.558b9p-60f,
     0x1.dbc556p-46f, 0.0f, 0.0f, 0x1.6fd9cap-48f, 0x1.f0be8ep-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc24bep-72f, 0x1.312182p-109f, 0x1.83d468p-80f, 0.0f, 0.0f,
     0x1.24c9bp-84f, 0x1.84b01ep-54f, 0x1.0f698p-63f, 0.0f, 0x1.dd13f8p-34f,
     0x1.55022ap-48f, 0.0f, 0x1.56597p-13f, 0x1.e00554p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.683e06p-93f, 0x1.f7f6f4p-105f, 0x1.c1d5f4p-47f, 0x1.b664acp-112f,
     0x1.d399dap-122f, 0.0f, 0x1.7cb322p-120f, 0.0f, 0x1.2f1ba8p-64f, 0.0f,
     0x1.e5a9f4p-61f, 0x1.25989p-105f, 0.0f, 0.0f, 0x1.faecb4p-84f, 0.0f, 0.0f,
     0x1.bd39ap-36f, 0x1.64693cp-67f, 0.0f, 0.0f, 0.0f, 0x1.74061ep-88f, 0.0f,
     0x1.65e5cp-119f, 0x1.8d3fd4p-28f, 0.0f, 0x1.bfa9fap-80f, 0x1.79d638p-33f, 0.0f,
     0.0f, 0x1.5d5298p-109f, 0x1.d15ecep-108f, 0.0f, 0x1.e8c44p-96f, 0.0f,
     0x1.4b7bd4p-75f, 0.0f, 0.0f, 0.0f, 0x1.62b96ep-41f, 0x1.2ba072p-17f, 0.0f,
     0x1.db1a4ap-115f, 0.0f, 0.0f, 0x1.e33a94p-13f, 0x1.b0ca7p-68f, 0x1.9a07cp-65f,
     0.0f, 0.0f, 0x1.726a0cp-48f, 0.0f, 0.0f, 0x1.55dbe6p-103f, 0.0f, 0x1.9ce3ep-65f,
     0x1.771acp-41f, 0.0f, 0x1.d3bd1ep-64f, 0x1.aa16cap-86f, 0.0f, 0x1.e3fbd2p-16f,
     0x1.1d473p-107f, 0.0f, 0x1.12172p-78f, 0x1.ee739ap-36f, 0.0f, 0x1.dacd48p-109f,
     0x1.361fccp-42f, 0.0f, 0x1.72fefcp-14f, 0.0f, 0x1.57de2ap-2f, 0.0f, 0.0f,
     0x1.8f4fcap-48f, 0.0f, 0x1.55b91ap-19f, 0.0f, 0.0f, 0.0f, 0x1.639302p-15f, 0.0f,
     0x1.a863e2p-101f, 0x1.40ce0ap-15f, 0.0f, 0.0f, 0x1.262786p-28f, 0x1.6ad9d4p-77f,
     0.0f, 0x1.c4e024p-42f, 0.0f, 0.0f, 0x1.eff434p-41f, 0.0f, 0x1.af951cp-22f,
     0x1.b13caap-36f, 0x1.299866p-79f, 0.0f, 0.0f, 0x1.b462b2p-52f, 0x1.85fc86p-70f,
     0x1.50a922p-47f, 0x1.e33182p-115f, 0x1.7c71fp-8f, 0x1.ba787p-5f, 0x1.263022p-41f,
     0.0f, 0.0f, 0x1.87beeap-121f, 0x1.4dfdecp-70f, 0.0f, 0x1.e54c9ep-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.231afep-91f, 0x1.b9adbp-79f, 0.0f, 0x1.78a74ap-14f,
     0x1.5ddbe2p-25f, 0.0f, 0x1.c62282p-32f, 0.0f, 0.0f, 0x1.277f08p-16f
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
            tmp1 = Sleef_cosf4_u10kvx(tmp0);
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
    printf("Sleef_cosf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cosf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
