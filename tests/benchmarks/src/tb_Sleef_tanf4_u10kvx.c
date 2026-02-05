/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf4_u10kvx.c --function Sleef_tanf4_u10kvx --headers \
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
     0x1.9cf5e8p-114f, 0x1.cb1cd2p-117f, 0x1.fe1128p-126f, 0.0f, 0x1.3384acp-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c2c74p-101f, 0x1.a37886p-85f, 0.0f, 0x1.5a70e6p-54f,
     0.0f, 0.0f, 0x1.beac6cp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10c65ap-39f,
     0x1.893db4p-115f, 0x1.e934b8p-110f, 0x1.146ccp-36f, 0x1.f515dp-49f,
     0x1.0efe12p-14f, 0x1.b9abc6p-46f, 0.0f, 0x1.aa3a64p-101f, 0x1.48c034p-96f,
     0x1.6ceccp-48f, 0.0f, 0.0f, 0.0f, 0x1.a29d4cp-97f, 0.0f, 0.0f, 0x1.f09eaap-51f,
     0.0f, 0.0f, 0x1.969dccp-31f, 0x1.cd0a5p-33f, 0x1.cde6acp-90f, 0.0f,
     0x1.26060ap-2f, 0.0f, 0x1.6ab2b6p-63f, 0x1.f38252p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.088638p-79f, 0.0f, 0x1.df606ep-122f, 0x1.4d26bcp-18f, 0.0f, 0.0f,
     0x1.5cbbbcp-59f, 0x1.345b82p-68f, 0.0f, 0x1.cc1edap-111f, 0.0f, 0.0f, 0.0f,
     0x1.2b3412p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08a0bp-73f, 0.0f,
     0x1.add3e4p-29f, 0x1.06134p-79f, 0.0f, 0.0f, 0.0f, 0x1.ec4dep-109f, 0.0f, 0.0f,
     0x1.40c7fcp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c54e4p-91f, 0x1.417d86p-45f, 0.0f,
     0x1.719c5p-93f, 0x1.40779cp-84f, 0.0f, 0x1.42b7cap-10f, 0.0f, 0x1.bf1e0ep-96f,
     0.0f, 0x1.f09b86p-126f, 0x1.3a3d1ap-47f, 0x1.6a740ap-121f, 0.0f, 0.0f,
     0x1.625ab8p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c4076p-51f, 0.0f, 0.0f, 0.0f,
     0x1.ea20fcp-17f, 0.0f, 0x1.8e4d64p-27f, 0x1.a8c0f8p-84f, 0.0f, 0.0f, 0.0f,
     0x1.dd772ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f05e8p-10f, 0x1.23f12ap-106f, 0.0f,
     0.0f, 0x1.70d382p-118f, 0x1.c846d2p-2f, 0.0f, 0.0f, 0x1.9bee54p-53f, 0.0f, 0.0f,
     0x1.048d7ep-115f, 0x1.f26188p-30f, 0.0f, 0x1.7aee52p-51f, 0x1.462a1ep-48f,
     0x1.092912p-89f, 0x1.f86706p-92f, 0x1.b45aecp-7f, 0x1.84e8aep-34f,
     0x1.884408p-81f, 0.0f, 0x1.8efb6ap-52f, 0.0f, 0x1.cb6348p-92f, 0x1.f5d2e8p-74f,
     0.0f, 0.0f, 0.0f, 0x1.0fff18p-117f, 0x1.382728p-5f, 0x1p0f, 0x1.de3016p-120f,
     0.0f, 0x1.4eb74p-70f, 0x1.c573b4p-96f, 0x1.e3232p-33f, 0.0f, 0.0f, 0.0f,
     0x1.a17d2ep-49f, 0x1.30e24p-78f, 0x1.5636c6p-78f, 0x1.134706p-82f, 0.0f,
     0x1.23c2f4p-107f, 0x1.1356bap-42f, 0x1.3f9042p-5f, 0.0f, 0.0f, 0x1.da2ab6p-76f,
     0x1.5bb8e2p-18f, 0x1.1cfee2p-27f, 0x1.28773ep-45f, 0x1.9cbc6ep-7f,
     0x1.95993p-69f, 0x1.d81c1p-97f, 0x1.7aee82p-67f, 0.0f, 0x1.07b62cp-47f, 0.0f,
     0.0f, 0x1.ca6212p-106f, 0.0f, 0.0f, 0.0f, 0x1.fc3f74p-68f, 0x1.9a7338p-5f, 0.0f,
     0x1.63aca8p-73f, 0.0f, 0x1.d4b10ap-43f, 0x1.5c253ap-80f, 0.0f, 0.0f,
     0x1.8663ecp-50f, 0x1.203332p-33f, 0x1.fa4962p-22f, 0.0f, 0.0f, 0x1.b875e6p-7f,
     0.0f, 0x1.99c872p-93f, 0.0f, 0x1.695904p-8f, 0x1.de688ap-62f, 0x1.827388p-97f,
     0.0f, 0.0f, 0.0f, 0x1.4472f6p-89f, 0x1.f905dcp-118f, 0x1.41dc94p-94f, 0.0f,
     0x1.3abcf4p-102f, 0x1.717adap-66f, 0x1.b348cep-9f, 0.0f, 0x1.97739p-13f,
     0x1.1af42cp-120f, 0.0f, 0x1.cc1dcp-123f, 0x1.5d6292p-71f, 0x1.e93cc4p-82f, 0.0f,
     0x1.dea746p-91f, 0x1.3c39fep-4f, 0.0f, 0.0f, 0x1.89241ep-118f, 0.0f,
     0x1.d37382p-80f, 0x1.030e6ap-35f, 0.0f, 0x1.46e7c2p-105f, 0.0f, 0.0f,
     0x1.d5ce2cp-125f, 0.0f, 0x1.9ed6dp-122f, 0x1.ac285p-17f, 0x1.a73a6ep-8f, 0.0f,
     0x1.79d52p-81f, 0x1.eee934p-54f, 0x1.99fbd8p-38f, 0x1.7b9adp-84f, 0x1.9707c2p-8f,
     0x1.94d1cap-4f, 0x1.791b6ep-63f, 0x1.e6d53ap-104f, 0.0f, 0x1.e7b4a4p-22f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f35dap-81f, 0.0f, 0.0f, 0x1.8b5da4p-33f, 0x1.6ed816p-30f,
     0x1.250a96p-23f, 0.0f, 0x1.5a622ep-79f, 0x1.c91f76p-4f, 0.0f, 0.0f,
     0x1.99e9a8p-12f, 0x1.44c72p-10f, 0.0f, 0x1.53b27ap-111f, 0x1.d5378ap-76f, 0.0f,
     0.0f, 0x1.e8dd9ep-102f, 0.0f, 0x1.0613d6p-99f, 0.0f, 0.0f, 0.0f, 0x1.c3141p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.06a3ecp-10f, 0x1.f6267cp-126f, 0.0f, 0x1.fd11a4p-52f,
     0x1.b75ff2p-61f, 0.0f, 0x1.5c827cp-7f, 0.0f, 0x1.59b5d4p-31f, 0x1.aafc9ep-53f,
     0x1.277deap-88f, 0.0f, 0x1.217fdap-90f, 0x1.7ac656p-42f, 0x1.3c09f2p-71f,
     0x1.250ad8p-56f, 0.0f, 0x1.96071cp-8f, 0x1.95a2fap-88f, 0x1.89447ap-73f,
     0x1.2d41aap-80f, 0x1.fc348ap-96f, 0.0f, 0x1.abecb6p-77f, 0x1.4a044ep-124f,
     0x1.a70484p-92f, 0x1.b310d4p-103f, 0.0f, 0.0f, 0.0f, 0x1.1370fp-35f,
     0x1.eb8c68p-45f, 0x1.536e46p-98f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40c4bp-74f,
     0x1.c2b4fcp-122f, 0x1.b672bap-42f, 0x1.416372p-82f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.033feap-69f, 0x1.64c19p-37f, 0x1.32892ap-64f, 0.0f,
     0x1.13b206p-42f, 0x1.520a7cp-105f, 0.0f, 0.0f, 0x1.e9435p-31f, 0.0f,
     0x1.5e1562p-80f, 0.0f, 0x1.53a29ep-38f, 0.0f, 0.0f, 0.0f, 0x1.756b98p-115f,
     0x1.a7456ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.995974p-54f, 0.0f, 0x1.2f348p-28f,
     0.0f, 0x1.274a66p-104f, 0.0f, 0x1.cad99ap-11f, 0x1.05c4aep-80f, 0x1.b97856p-18f,
     0.0f, 0.0f, 0.0f, 0x1.e0cb44p-125f, 0.0f, 0x1.476da8p-72f, 0.0f, 0x1.41bf98p-15f,
     0x1.5d3ff4p-9f, 0.0f, 0x1.01ebfap-69f, 0.0f, 0x1.c84518p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a6768p-2f, 0.0f, 0x1.a53c08p-6f, 0x1.2c6378p-33f, 0x1.1a5e38p-37f,
     0x1.45d18ep-87f, 0.0f, 0x1.c430b4p-104f, 0x1.03c9dep-64f, 0.0f, 0.0f,
     0x1.8b5464p-121f, 0.0f, 0x1.0aaad4p-61f, 0.0f, 0.0f, 0x1.561158p-60f, 0.0f,
     0x1.1befbap-14f, 0x1.70bafap-44f, 0.0f, 0x1.3da928p-99f, 0x1.c8c3a6p-54f,
     0x1.e06968p-57f, 0x1.9415c8p-59f, 0.0f, 0x1.490ceep-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d53f2ap-25f, 0x1.1bf1dep-29f, 0x1.98fd62p-58f, 0x1.e8c202p-102f, 0.0f, 0.0f,
     0.0f, 0x1.c2db26p-76f, 0.0f, 0.0f, 0x1.10ec12p-75f, 0.0f, 0x1.6e4c8p-25f,
     0x1.654a5cp-75f, 0.0f, 0.0f, 0x1.492fcep-16f, 0.0f, 0x1.8d084cp-82f, 0.0f,
     0x1.fa9eaap-20f, 0x1.5ecd5ep-45f, 0.0f, 0x1.6a54fp-42f, 0x1.9da2f2p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9013fap-70f, 0.0f, 0x1.516d48p-64f, 0.0f, 0.0f, 0.0f,
     0x1.a1d0bp-58f, 0.0f, 0.0f, 0.0f, 0x1.b986e8p-79f, 0x1.7b9a2ep-18f, 0.0f,
     0x1.88241cp-1f, 0x1.1cecap-114f, 0x1.aa922ap-66f, 0.0f, 0.0f, 0x1.73ce84p-95f,
     0x1.c1bad8p-9f, 0x1.ba9fc4p-6f, 0x1.3af7b8p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ce47b8p-47f, 0.0f, 0.0f, 0x1.05ae52p-33f, 0x1.8cf95p-107f, 0.0f, 0.0f,
     0x1.55fe82p-101f, 0x1.912272p-70f, 0.0f, 0.0f, 0.0f, 0x1.ec3214p-48f, 0.0f,
     0x1.31563cp-6f, 0x1.52a97p-114f, 0x1.35ee7ap-74f, 0x1.77762ep-15f,
     0x1.2eb12cp-87f, 0x1.ecd87p-13f, 0x1.6fa16p-39f, 0.0f, 0x1.cefa5ap-83f, 0.0f,
     0.0f, 0x1.53d0bep-112f, 0.0f, 0.0f, 0x1.88fb0cp-15f, 0.0f, 0x1.12af76p-24f,
     0x1.5e3c1ep-102f, 0.0f, 0x1.0c56cep-38f, 0x1.f5a422p-9f, 0x1.0e28ecp-112f,
     0x1.177a5ap-60f, 0.0f, 0x1.f2a514p-8f, 0.0f, 0x1.7eed9ap-55f, 0x1.4af0f2p-91f,
     0x1.2b0ceep-36f, 0x1.5bc47ap-52f, 0.0f, 0.0f, 0x1.40c98ap-82f, 0.0f,
     0x1.eb7278p-28f, 0x1.f83846p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.479184p-112f,
     0.0f, 0x1.266856p-103f, 0x1.44ce24p-72f, 0.0f, 0.0f, 0x1.99023ap-17f, 0.0f,
     0x1.667aaep-115f, 0.0f, 0.0f, 0.0f, 0x1.052b32p-72f, 0.0f, 0.0f, 0x1.743bb2p-99f,
     0.0f, 0x1.48aabep-20f, 0.0f, 0x1.72042cp-122f, 0x1.e6526p-20f, 0x1.d41538p-21f,
     0.0f, 0.0f, 0x1.ced298p-23f, 0x1.a5b2e8p-2f, 0x1.f99062p-49f, 0x1.df3546p-93f,
     0x1.73b644p-119f, 0.0f, 0.0f, 0x1.be59eap-16f, 0x1.17d5d6p-66f, 0.0f, 0.0f,
     0x1.557942p-115f, 0x1.d1a6b8p-40f, 0.0f, 0.0f, 0x1.f8a234p-16f, 0.0f,
     0x1.09ab5cp-53f, 0x1.1f7b2ep-37f, 0.0f, 0x1.936644p-6f, 0x1.9f60ecp-123f, 0.0f,
     0.0f, 0x1.b5a954p-85f, 0.0f, 0x1.15e122p-47f, 0.0f, 0x1.8afaa2p-51f, 0.0f,
     0x1.6c2a1p-4f, 0.0f, 0x1.3f947ep-105f, 0x1.66a9d2p-35f, 0.0f, 0x1.797cc6p-38f,
     0x1.efbe2cp-46f, 0x1.1d64e6p-29f, 0.0f, 0x1.45bd44p-96f, 0x1.52535ep-100f, 0.0f,
     0.0f, 0x1.b127a6p-114f, 0x1.892b6p-29f, 0x1.53670ap-18f, 0x1.d96b7p-122f, 0.0f,
     0x1.8a65a8p-111f, 0x1.f7e93cp-36f, 0.0f, 0x1.5c08cep-7f, 0x1.5271dcp-85f, 0.0f,
     0x1.338f42p-24f, 0.0f, 0.0f, 0x1.c3c652p-25f, 0x1.f70b44p-5f, 0.0f, 0.0f, 0.0f,
     0x1.5e2e3cp-111f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.ed7258p-104f, 0.0f,
     0x1.53c634p-45f, 0x1.2dc25cp-112f, 0x1.864276p-17f, 0.0f, 0.0f, 0x1.06e63ep-20f,
     0.0f, 0x1.62df98p-67f, 0.0f, 0x1.1bb2d6p-56f, 0x1.ff12fp-113f, 0x1.d19bep-97f,
     0.0f, 0x1.48fb14p-31f, 0.0f, 0x1.ccf2a6p-34f, 0x1.8cea4ap-1f, 0.0f, 0.0f,
     0x1.1cf672p-26f, 0.0f, 0x1.d7946cp-19f, 0x1.7a2844p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ef526p-20f, 0x1.989b2cp-55f, 0.0f, 0x1.6ca9ap-125f,
     0x1.0f65cep-37f, 0x1.a68be8p-13f, 0.0f, 0.0f, 0.0f, 0x1.74a292p-78f,
     0x1.4124dcp-77f, 0x1.9e22e6p-119f, 0x1.f71ca4p-15f, 0.0f, 0x1.77410ep-43f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.bd3024p-63f, 0.0f, 0x1.e7427p-75f, 0x1.37a0d2p-54f,
     0x1.028d86p-100f, 0x1.8c5648p-66f, 0x1.144fd8p-2f, 0x1.6e285ep-78f,
     0x1.e9501ap-45f, 0x1.152d34p-1f, 0x1.c7208ap-88f, 0x1.e97602p-48f, 0.0f,
     0x1.4d5638p-121f, 0x1.fe782ep-15f, 0x1.444d14p-123f, 0.0f, 0x1.d791fep-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b79296p-75f, 0.0f, 0x1.6d07bcp-120f, 0x1.cdec94p-29f,
     0x1.458464p-48f, 0.0f, 0x1.8e1e0cp-69f, 0.0f, 0x1.3d12fcp-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.380cdap-26f, 0.0f, 0x1p0f, 0.0f, 0x1.46704cp-33f, 0.0f, 0.0f,
     0x1.6a9aeep-16f, 0.0f, 0.0f, 0x1.508144p-61f, 0.0f, 0x1.128e34p-64f,
     0x1.8c567p-101f, 0.0f, 0x1.d8e686p-107f, 0x1.bacb32p-62f, 0.0f, 0.0f,
     0x1.d6766p-107f, 0x1.232e08p-109f, 0.0f, 0x1.6496d8p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9e12cep-115f, 0.0f, 0x1.4a99e6p-118f, 0x1.88e926p-80f,
     0.0f, 0x1.2f06e6p-85f, 0x1.591eb4p-68f, 0.0f, 0x1.1d41dep-15f, 0.0f,
     0x1.972688p-36f, 0x1.c2e4dcp-58f, 0.0f, 0.0f, 0x1.7b781ap-62f, 0x1.c65934p-20f,
     0x1.53ded6p-53f, 0.0f, 0.0f, 0x1.39efe8p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59cedp-60f, 0.0f, 0x1.ffa388p-15f, 0.0f, 0x1.bb96a6p-37f, 0.0f,
     0x1.de1dbep-79f, 0x1.477a1ap-43f, 0x1.f49434p-89f, 0.0f, 0.0f, 0x1.940486p-110f,
     0.0f, 0x1.cc0acp-123f, 0x1.fbbb2ap-93f, 0.0f, 0x1.37dc4p-72f, 0x1.764126p-24f,
     0.0f, 0x1.bbcc2ep-35f, 0x1.7ce6fp-27f, 0x1.89ef38p-100f, 0.0f, 0.0f,
     0x1.a75774p-118f, 0.0f, 0x1.f18dccp-61f, 0x1.a08368p-35f, 0x1.e43624p-84f,
     0x1.9579e2p-87f, 0x1.e81732p-66f, 0x1.a69ep-15f, 0.0f, 0.0f, 0x1.d0ef38p-121f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5507ep-92f, 0x1.853f26p-96f, 0x1.f27334p-85f, 0.0f, 0x1.80c1d4p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c2a74p-85f, 0x1.dd2fc4p-83f, 0x1.0612b4p-59f,
     0x1.ca6486p-91f, 0x1.c4a51p-50f, 0x1.3e369cp-100f, 0.0f, 0.0f, 0.0f,
     0x1.3644b8p-122f, 0.0f, 0.0f, 0x1.c87348p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c76dp-9f, 0.0f, 0.0f, 0x1.e442d6p-26f, 0x1.e6e2d6p-37f, 0x1.1f32dap-114f,
     0x1.73debep-97f, 0.0f, 0x1.8195dcp-92f, 0x1.3ba42ep-69f, 0x1.04ded8p-83f,
     0x1.9ada82p-21f, 0x1.8bddf2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28e706p-69f,
     0x1.94bb9ap-23f, 0.0f, 0x1.98ff68p-90f, 0x1.86fdc8p-52f, 0x1.a14a64p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d09fc2p-122f, 0.0f, 0.0f, 0.0f,
     0x1.f5c3ap-28f, 0x1.d5c3ccp-48f, 0x1.489cecp-53f, 0x1.02fea4p-69f, 0.0f, 0.0f,
     0x1.d9b706p-114f, 0x1.b9573cp-113f, 0.0f, 0.0f, 0.0f, 0x1.b6adb4p-32f,
     0x1.77df1cp-101f, 0x1.eddeccp-39f, 0x1.0f6b92p-74f, 0x1.a6aae6p-54f, 0.0f,
     0x1.a10bb2p-3f, 0.0f, 0x1.9892f2p-68f, 0x1.fb338cp-117f, 0x1.256dbp-51f, 0.0f,
     0x1.9c893ap-45f, 0x1.e08b4ep-125f, 0.0f, 0.0f, 0x1.f198e8p-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.049008p-6f, 0x1.11d31cp-116f, 0x1.162a2p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.477ba6p-60f, 0.0f, 0x1.9a820cp-15f, 0x1.eb840ep-36f, 0.0f,
     0x1.4522d8p-28f, 0x1p0f, 0.0f, 0.0f, 0x1.30067ep-26f, 0.0f, 0.0f,
     0x1.e3caecp-36f, 0.0f, 0x1.038eap-11f, 0.0f, 0x1.1ecfe4p-102f, 0x1.c55dp-119f,
     0.0f, 0x1.05af82p-85f, 0x1.581efap-81f, 0x1.0032a6p-119f, 0x1.ff37eep-101f,
     0x1.2e33a2p-49f, 0.0f, 0x1.46e87p-24f, 0x1.1cc8f8p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a34fa6p-48f, 0x1.b4e5d4p-126f, 0.0f, 0x1.193e76p-95f, 0x1.7ac3a2p-94f,
     0x1.59ce84p-39f, 0x1.cf9f9cp-42f, 0.0f, 0.0f, 0.0f, 0x1.9735bep-52f, 0.0f,
     0x1.ab3b72p-121f, 0x1.9f9bf6p-110f, 0x1p0f, 0.0f, 0x1.aac59p-106f,
     0x1.5d0888p-17f, 0x1.6458bap-77f, 0.0f, 0x1.caa848p-65f, 0.0f, 0x1.e015a4p-113f,
     0.0f, 0.0f, 0x1.7841e6p-87f, 0.0f, 0x1.8d90ep-32f, 0x1.69eb96p-10f, 0.0f, 0.0f,
     0x1.1540e8p-64f, 0.0f, 0.0f, 0x1.c30ac8p-66f, 0x1.64fe18p-126f, 0.0f,
     0x1.8b03e8p-58f, 0.0f, 0x1.d14dd6p-48f, 0x1.e3796cp-25f, 0.0f, 0.0f, 0.0f,
     0x1.6ae056p-19f, 0.0f, 0x1.39e864p-86f, 0x1.75209cp-85f, 0.0f, 0x1.d2a338p-104f,
     0.0f, 0.0f, 0.0f, 0x1.6f9d02p-21f, 0x1.d626aep-41f, 0x1.f0f94ap-92f,
     0x1.5bfc6ep-94f, 0.0f, 0.0f, 0.0f, 0x1.a5570ep-1f, 0.0f, 0x1.993fb4p-1f,
     0x1.fd1c36p-37f, 0x1.e497e8p-83f
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
            tmp1 = Sleef_tanf4_u10kvx(tmp0);
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
    printf("Sleef_tanf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
