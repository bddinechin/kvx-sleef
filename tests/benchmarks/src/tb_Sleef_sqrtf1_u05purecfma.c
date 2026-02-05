/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf1_u05purecfma.c --function \
 *     Sleef_sqrtf1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e408cp-32f, 0.0f, 0x1.592902p-27f, 0x1.77e1b8p-61f,
     0.0f, 0.0f, 0.0f, 0x1.d3ac72p-82f, 0.0f, 0.0f, 0x1.206974p-99f, 0x1.77602ap-31f,
     0.0f, 0x1.43cb5cp-71f, 0.0f, 0.0f, 0.0f, 0x1.fb054ep-90f, 0x1.d4877p-122f,
     0x1.f76f68p-93f, 0x1.536882p-62f, 0x1.b9dec4p-104f, 0.0f, 0.0f, 0x1.8b7b6ap-1f,
     0.0f, 0x1.bf7dfep-86f, 0x1.1c02d4p-60f, 0x1.d0dfaap-90f, 0x1.e4a886p-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bbe97ep-38f, 0.0f, 0x1.4bd584p-38f, 0x1.82555ep-6f,
     0x1.e59e92p-11f, 0.0f, 0.0f, 0x1.6c94ap-124f, 0x1.fa6ddep-56f, 0x1.68c6a8p-56f,
     0x1.c2f35cp-79f, 0.0f, 0x1.bc0edcp-82f, 0.0f, 0x1.620b1ap-29f, 0x1.74722ep-34f,
     0x1.bfabep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cde6ep-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe323ap-102f, 0x1.3ff654p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bfe2ep-87f, 0.0f, 0x1.2d421ep-29f, 0.0f, 0.0f, 0x1.714802p-25f,
     0x1.04b54cp-6f, 0x1.a5d42p-118f, 0x1.56a864p-115f, 0.0f, 0.0f, 0x1.d1e1cep-64f,
     0.0f, 0x1.68e99ap-38f, 0.0f, 0x1.f08148p-38f, 0.0f, 0.0f, 0x1.99709ap-33f, 0.0f,
     0.0f, 0x1.5b822ep-8f, 0x1.cc6914p-94f, 0x1.1d2016p-107f, 0x1.61a086p-19f,
     0x1.bc2ebap-22f, 0.0f, 0x1.97e11p-31f, 0x1.03979cp-50f, 0x1.74de7ap-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.71979ap-87f, 0.0f, 0x1.33f5cep-88f, 0.0f, 0.0f,
     0x1.bde02cp-10f, 0.0f, 0.0f, 0.0f, 0x1.3b23fep-94f, 0x1.c4d4aep-75f, 0.0f,
     0x1.0c4d3p-12f, 0x1.1075bcp-65f, 0.0f, 0.0f, 0x1.97b422p-125f, 0.0f, 0.0f, 0.0f,
     0x1.37d684p-6f, 0x1.f8710cp-107f, 0x1.86d668p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8166d8p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af3d02p-17f, 0x1.3ba61ap-105f,
     0x1.bd2e56p-126f, 0x1.a8b702p-77f, 0x1.45d186p-107f, 0x1.730a94p-38f, 0.0f,
     0x1.030144p-46f, 0x1.8ed516p-48f, 0x1.849b7cp-32f, 0.0f, 0x1.e47184p-43f, 0.0f,
     0x1.e4ead6p-101f, 0.0f, 0x1.61535p-65f, 0.0f, 0x1.ec082ep-104f, 0.0f, 0.0f, 0.0f,
     0x1.4825e2p-7f, 0.0f, 0x1.b297a2p-55f, 0x1.26f73p-114f, 0x1.88e228p-87f,
     0x1.39d56cp-101f, 0x1.d13b6cp-71f, 0.0f, 0.0f, 0x1.07aae8p-6f, 0.0f,
     0x1.95d49ep-88f, 0x1.5c09d8p-45f, 0.0f, 0x1.b5b90ap-34f, 0x1.95b7f2p-64f,
     0x1.c166c8p-54f, 0x1.758786p-101f, 0x1.15bf22p-31f, 0x1.1c4f6cp-51f, 0.0f, 0.0f,
     0x1.0ca56p-48f, 0.0f, 0.0f, 0x1.618cccp-47f, 0x1.5c29a2p-61f, 0.0f,
     0x1.824a84p-28f, 0x1.a80d6ep-27f, 0x1.7f6e16p-85f, 0.0f, 0.0f, 0.0f,
     0x1.c7effap-20f, 0x1.66e3a4p-16f, 0x1.1c15bcp-11f, 0x1.292708p-100f,
     0x1.c7cd6p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8de4cp-29f, 0.0f,
     0x1.5cd18cp-90f, 0.0f, 0.0f, 0x1.55691cp-71f, 0x1.8642bap-71f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.c54092p-50f, 0x1.10cc62p-33f, 0.0f, 0x1.70b5c8p-30f,
     0x1.320fc2p-125f, 0x1.55622p-4f, 0x1.a4fc7cp-117f, 0x1.e7662cp-49f, 0.0f, 0.0f,
     0x1.7a26ecp-15f, 0.0f, 0.0f, 0.0f, 0x1.42ca94p-10f, 0.0f, 0.0f, 0x1.03fe76p-86f,
     0x1.72d892p-11f, 0x1.19463ep-102f, 0x1.dcf36ep-89f, 0x1.0c85a4p-40f, 0.0f,
     0x1.c6550ep-55f, 0.0f, 0.0f, 0x1.aaadap-116f, 0x1.959afcp-64f, 0x1.e82972p-9f,
     0.0f, 0.0f, 0x1.670896p-76f, 0x1.c23a0ep-108f, 0x1.0803c8p-18f, 0x1.24e6fcp-73f,
     0x1.3c0404p-42f, 0.0f, 0x1.25d83cp-86f, 0.0f, 0.0f, 0x1.0b6c96p-51f,
     0x1.95c89cp-36f, 0.0f, 0x1.b5c5b6p-16f, 0x1.4d1584p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6dda7p-126f, 0.0f, 0x1.18bc9ap-4f, 0x1.b168e8p-77f, 0x1.ed538p-36f,
     0x1.9334d8p-46f, 0.0f, 0x1.9a7f42p-68f, 0x1.7dc37ep-21f, 0.0f, 0x1.860e02p-89f,
     0x1.15d6d4p-8f, 0x1.dff2e6p-97f, 0x1.0b0afep-54f, 0.0f, 0x1.ebd212p-125f,
     0x1.ac63dap-74f, 0x1.b49fbp-47f, 0.0f, 0x1.aca9ep-118f, 0x1.2a151ap-57f,
     0x1.ec00d4p-35f, 0.0f, 0x1.bd2a3ap-9f, 0.0f, 0x1.a2f59ap-104f, 0.0f,
     0x1.33c384p-24f, 0x1.efbd36p-81f, 0x1.4881b4p-38f, 0.0f, 0.0f, 0x1.482146p-10f,
     0.0f, 0.0f, 0.0f, 0x1.521e62p-72f, 0x1.577f3ap-115f, 0x1.859602p-92f,
     0x1.b0f52ap-67f, 0.0f, 0x1.c6b16ap-63f, 0x1.941792p-85f, 0x1.3fcac6p-1f, 0.0f,
     0x1.d6b582p-23f, 0x1.22e1aep-72f, 0x1.587c9ep-112f, 0x1.a6d872p-35f, 0.0f,
     0x1.4a7316p-53f, 0.0f, 0x1.67e6e4p-63f, 0.0f, 0x1.5d09p-64f, 0.0f,
     0x1.d12d9p-75f, 0.0f, 0.0f, 0.0f, 0x1.2b735ep-118f, 0x1.8049ap-97f,
     0x1.0d45e4p-44f, 0.0f, 0x1.bed268p-72f, 0.0f, 0x1.904a32p-71f, 0x1.205fcp-2f,
     0.0f, 0x1.f65054p-54f, 0.0f, 0x1.a84822p-98f, 0.0f, 0x1.818cap-58f, 0.0f,
     0x1.927a72p-45f, 0x1.990724p-97f, 0x1.9f980ap-16f, 0x1.c7f598p-95f,
     0x1.39095ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe4eb4p-13f, 0x1.0c5f3p-79f, 0.0f,
     0.0f, 0x1.bb210cp-114f, 0x1.30e9c2p-67f, 0x1.cce6fp-43f, 0.0f, 0x1.1e6d6ep-62f,
     0.0f, 0.0f, 0x1.b2cc1ep-93f, 0x1.c98feep-62f, 0.0f, 0.0f, 0.0f, 0x1.2af8b4p-9f,
     0.0f, 0x1.d79a86p-55f, 0x1.d16f02p-23f, 0.0f, 0.0f, 0x1.8308fp-110f, 0.0f, 0.0f,
     0x1.270f94p-26f, 0.0f, 0.0f, 0x1.a1e812p-80f, 0x1.9b64d8p-21f, 0.0f,
     0x1.01439ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.128d3ap-23f,
     0x1.e81f9ap-81f, 0x1.983f32p-112f, 0x1.e04fb6p-67f, 0.0f, 0.0f, 0x1.2cd41ap-16f,
     0x1.877c1ep-47f, 0.0f, 0x1.51cbbep-120f, 0x1.2daf4cp-82f, 0x1.1bf378p-115f,
     0x1.9d39e8p-71f, 0x1.ee5e18p-37f, 0.0f, 0x1.770cbcp-58f, 0x1.b6aa2cp-110f,
     0x1.acb622p-114f, 0x1.0a5ecap-74f, 0.0f, 0x1.5c085cp-13f, 0x1.2ed7ecp-49f, 0.0f,
     0x1.096974p-51f, 0x1.ca3542p-94f, 0.0f, 0.0f, 0x1.00f59ap-103f, 0x1.6bb6a8p-109f,
     0.0f, 0x1.b5182ep-54f, 0x1.318762p-116f, 0.0f, 0.0f, 0.0f, 0x1.29fe8ap-53f,
     0x1.9afb18p-105f, 0x1.1a6ccp-24f, 0.0f, 0.0f, 0.0f, 0x1.714e5p-117f, 0.0f,
     0x1.4b84a8p-98f, 0x1.f65daep-17f, 0.0f, 0.0f, 0x1.6e42dap-58f, 0.0f,
     0x1.54013ap-41f, 0x1.bd9b88p-74f, 0x1.3c81ep-114f, 0.0f, 0.0f, 0.0f,
     0x1.729168p-100f, 0.0f, 0.0f, 0x1.6b7aacp-99f, 0x1.4bdbacp-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dd85cp-6f, 0x1.4e4414p-71f, 0.0f, 0x1.8ec894p-108f, 0.0f,
     0.0f, 0.0f, 0x1.d2aaeap-118f, 0x1.570cb6p-41f, 0.0f, 0.0f, 0x1.60778cp-94f,
     0x1.bda97p-50f, 0.0f, 0x1.7e4354p-73f, 0x1.79f2c8p-65f, 0.0f, 0.0f,
     0x1.b78804p-41f, 0x1.7a8b22p-101f, 0.0f, 0x1.21b1e6p-54f, 0x1.e77f8ep-70f, 0.0f,
     0.0f, 0x1.2a93bp-104f, 0x1.fefd9ap-72f, 0x1.a282eep-68f, 0.0f, 0.0f,
     0x1.669d0ap-53f, 0.0f, 0.0f, 0.0f, 0x1.b9f17p-78f, 0x1.63abb6p-22f, 0.0f, 0.0f,
     0.0f, 0x1.fb43b8p-78f, 0x1.1e9dbp-82f, 0x1.a46ebep-77f, 0.0f, 0.0f, 0.0f,
     0x1.a6837p-68f, 0x1.9bf0cp-68f, 0x1.84ac18p-78f, 0.0f, 0x1.669cf8p-40f, 0.0f,
     0x1.897138p-78f, 0.0f, 0.0f, 0x1.3a3d0ap-47f, 0.0f, 0x1.745f18p-1f,
     0x1.497db4p-51f, 0.0f, 0.0f, 0.0f, 0x1.edceccp-47f, 0x1.c85824p-33f,
     0x1.e1ada6p-54f, 0x1.95773cp-87f, 0.0f, 0x1.6b95b6p-93f, 0.0f, 0x1.4808ap-64f,
     0.0f, 0x1.9069aap-10f, 0.0f, 0x1.b4303ap-57f, 0x1.136b9cp-62f, 0.0f,
     0x1.32055p-113f, 0x1.8884ep-94f, 0.0f, 0x1.c04de6p-77f, 0x1.70c696p-122f,
     0x1.0eae9p-61f, 0x1.6db11ap-38f, 0.0f, 0.0f, 0x1.11904ep-100f, 0.0f,
     0x1.947444p-7f, 0x1.a5b86p-39f, 0.0f, 0x1.2abbcap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d12f4p-89f, 0x1.8b4a9ap-52f, 0x1.5333dp-50f, 0.0f, 0x1.e79838p-123f, 0.0f,
     0x1.8d1716p-122f, 0.0f, 0.0f, 0.0f, 0x1.fa42a4p-13f, 0.0f, 0.0f, 0x1.05615ep-15f,
     0x1.d8f4ccp-108f, 0.0f, 0x1.043506p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c6946p-72f, 0.0f, 0x1.0ba0b6p-56f, 0x1.c63886p-107f, 0.0f, 0.0f,
     0x1.a07a12p-84f, 0x1.876cd2p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.883d78p-116f, 0.0f, 0x1.865aa8p-113f, 0.0f, 0x1.2a8cdp-49f, 0.0f,
     0x1.0a44bap-49f, 0x1.1bdcbp-6f, 0x1.303bb8p-105f, 0.0f, 0x1.5dac1p-3f,
     0x1.b7a75cp-102f, 0.0f, 0.0f, 0x1.7f7fb2p-32f, 0.0f, 0x1.be0832p-34f,
     0x1.fb5696p-56f, 0x1.6ef0eep-114f, 0x1.61e748p-15f, 0x1.aff11ep-114f,
     0x1.4d9e4p-34f, 0x1.370e72p-15f, 0x1.00f332p-13f, 0.0f, 0x1.099312p-31f,
     0x1.edfb7ap-117f, 0.0f, 0.0f, 0.0f, 0x1.a2caaap-122f, 0.0f, 0.0f,
     0x1.b9c7cep-45f, 0x1.f1dc8ep-20f, 0.0f, 0.0f, 0.0f, 0x1.87ff88p-24f, 0.0f,
     0x1.902ca6p-68f, 0x1.79f5fep-15f, 0.0f, 0x1.9acf58p-48f, 0.0f, 0.0f,
     0x1.c88734p-62f, 0x1.65e898p-80f, 0x1.7bcff4p-94f, 0x1.4463cap-37f, 0.0f,
     0x1.50b31ep-96f, 0.0f, 0x1.2b9ae2p-67f, 0x1.ffb118p-83f, 0x1.f43ea6p-80f, 0.0f,
     0x1.3e5f72p-22f, 0x1.896a88p-65f, 0x1.0af98ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.1e46e4p-95f, 0x1.6cd1eep-66f, 0x1.3ce3e2p-111f, 0.0f, 0.0f, 0x1.64d624p-35f,
     0x1.cfb736p-1f, 0.0f, 0.0f, 0x1.18423ap-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fd2c8p-7f, 0.0f, 0x1.6cd47cp-38f, 0.0f, 0x1.e2e2fep-9f, 0.0f, 0.0f,
     0x1.a8a8f2p-110f, 0x1.a79418p-53f, 0x1.9bc87ap-90f, 0x1.ac2c92p-40f, 0.0f, 0.0f,
     0.0f, 0x1.e7e0f2p-78f, 0x1.f795e6p-59f, 0.0f, 0x1.90c50cp-96f, 0.0f,
     0x1.1ac528p-88f, 0x1.26de52p-74f, 0.0f, 0x1.7e0fa2p-14f, 0x1.b79dc4p-52f, 0.0f,
     0x1.269d88p-89f, 0x1.4322b8p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8068ap-32f, 0x1.df920ep-123f, 0.0f, 0x1.ddc84cp-102f, 0x1.b31be8p-49f, 0.0f,
     0.0f, 0x1.a5f26ap-35f, 0x1.f9dff8p-65f, 0.0f, 0.0f, 0x1.bdfec4p-104f, 0.0f, 0.0f,
     0.0f, 0x1.3388d4p-13f, 0.0f, 0.0f, 0.0f, 0x1.17b8d8p-110f, 0.0f, 0x1.db2bccp-53f,
     0.0f, 0.0f, 0x1.67d90ap-67f, 0.0f, 0x1.f5a93ap-32f, 0.0f, 0x1.f33f96p-28f,
     0x1.6f1f62p-63f, 0x1.64aa24p-3f, 0x1.afe2a8p-93f, 0.0f, 0.0f, 0x1.b71b4ep-45f,
     0.0f, 0x1.590b02p-18f, 0.0f, 0.0f, 0x1.7f0d14p-78f, 0x1.1b1f6p-120f, 0.0f,
     0x1.bda49cp-98f, 0.0f, 0x1.9731a4p-122f, 0.0f, 0.0f, 0x1.2c221ep-118f,
     0x1.ac3154p-45f, 0x1.882c1ep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.128ff8p-20f, 0.0f,
     0.0f, 0x1.d740e8p-9f, 0x1.aee21p-117f, 0x1.b884eep-102f, 0x1.b2c1b2p-60f,
     0x1.14aae6p-28f, 0.0f, 0x1.f654dep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1af24p-51f,
     0.0f, 0x1.109736p-50f, 0x1.697384p-39f, 0x1.c6fcccp-98f, 0x1.ad9c3ap-106f,
     0x1.9be892p-108f, 0x1.788c74p-120f, 0x1.57b7bp-104f, 0.0f, 0.0f, 0.0f,
     0x1.24991cp-19f, 0x1.f1b7f8p-105f, 0x1.3eef8ap-117f, 0x1.dc096cp-5f, 0.0f,
     0x1.83bbaap-17f, 0.0f, 0x1.ced5a2p-57f, 0x1.9231bp-58f, 0.0f, 0x1.2851dep-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebe29ep-71f, 0x1.69dc1p-7f, 0.0f, 0.0f, 0.0f,
     0x1.8101bap-107f, 0.0f, 0.0f, 0x1.d552b8p-49f, 0x1.78e9fp-35f, 0x1.7a3fb6p-33f,
     0.0f, 0.0f, 0.0f, 0x1.e7085p-25f, 0.0f, 0.0f, 0x1.64fd46p-96f, 0x1.dbd612p-2f,
     0x1.168e56p-4f, 0x1.c7780ap-72f, 0.0f, 0x1.f83ca6p-64f, 0.0f, 0.0f,
     0x1.c9405p-33f, 0.0f, 0.0f, 0x1.e15262p-106f, 0x1.5ecf1p-94f, 0.0f,
     0x1.f44eeep-27f, 0.0f, 0.0f, 0.0f, 0x1.8b434cp-51f, 0.0f, 0x1.b0bc9ap-41f, 0.0f,
     0.0f, 0x1.3e4d04p-125f, 0x1.474818p-115f, 0.0f, 0.0f, 0.0f, 0x1.a0bffap-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c7883ep-72f, 0.0f, 0.0f, 0x1.729f7ap-76f, 0x1.3da6eep-25f,
     0x1.0ae0f8p-40f, 0.0f, 0x1.812fb4p-32f, 0.0f, 0.0f, 0x1.29922p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ffc54p-109f, 0x1.aeebfep-78f, 0.0f, 0.0f, 0.0f,
     0x1.152516p-30f, 0.0f, 0x1.e9d5c6p-121f, 0x1.ac792cp-79f, 0.0f, 0x1.f60122p-77f,
     0.0f, 0.0f, 0.0f, 0x1.ad16acp-10f, 0x1.760a84p-9f, 0.0f, 0.0f, 0x1.a37296p-16f,
     0.0f, 0.0f, 0x1.784186p-126f, 0x1.322fa6p-37f, 0.0f, 0x1.ad675ep-19f, 0.0f,
     0x1.c047a6p-14f, 0.0f, 0x1.e84p-109f, 0.0f, 0x1.d7ad36p-99f, 0x1.cafa7p-19f,
     0.0f, 0x1.61330ep-25f, 0.0f, 0.0f, 0.0f, 0x1.66b148p-47f, 0x1.12abf4p-108f,
     0x1.3dd128p-4f, 0.0f, 0.0f, 0.0f, 0x1.f8b70cp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3be82cp-23f, 0x1.f3e288p-112f, 0.0f, 0x1.1c6872p-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.827258p-107f, 0x1.d71fbep-108f, 0.0f, 0x1.47164p-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3a984p-12f, 0x1.b89a9cp-96f, 0x1.816be4p-2f, 0.0f,
     0x1.e550f2p-44f, 0x1.9ec588p-48f, 0x1.3beb64p-126f, 0x1.c2afa4p-100f,
     0x1.ebb9f4p-102f, 0.0f, 0.0f, 0.0f, 0x1.6213fep-69f, 0x1.2ec622p-76f,
     0x1.159154p-53f, 0x1.f40fa6p-119f, 0x1.89db2ap-33f, 0.0f, 0x1.5de9cap-28f, 0.0f,
     0x1.e413f8p-41f, 0.0f, 0.0f, 0x1.237f3cp-97f, 0.0f, 0.0f, 0.0f, 0x1.a46d74p-87f,
     0.0f, 0x1.418a5p-19f, 0x1.f1dc4cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9a1a8p-60f,
     0.0f, 0x1.117a68p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.589084p-91f,
     0x1.a6b54cp-109f, 0.0f, 0.0f, 0x1.adca86p-29f, 0.0f, 0x1.cd145ap-47f,
     0x1.1183bap-90f, 0x1.c0028cp-50f, 0x1.a54524p-126f, 0.0f, 0x1.62017ep-15f,
     0x1.51e0eep-92f, 0x1.6f3cp-83f, 0.0f, 0x1.01e0bcp-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.03cdd2p-93f, 0x1.3881dcp-54f, 0x1.5f36d8p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cd17cp-52f, 0x1.fda162p-81f, 0x1.4cb06cp-116f, 0x1.6d4002p-44f, 0.0f
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
            tmp1 = Sleef_sqrtf1_u05purecfma(tmp0);
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
    printf("Sleef_sqrtf1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtf1_u05purecfma bench acc %a\n", global_bench_acc);
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
