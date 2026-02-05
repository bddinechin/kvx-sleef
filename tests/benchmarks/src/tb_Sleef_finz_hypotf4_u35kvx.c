/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf4_u35kvx.c --function \
 *     Sleef_finz_hypotf4_u35kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
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
     0x1.979372p-62f, 0x1.75da4p-124f, 0.0f, 0x1.6b2ab6p-23f, 0.0f, 0.0f,
     0x1.38f50cp-79f, 0.0f, 0x1.0ed26ap-18f, 0x1.9fefb8p-126f, 0x1.a8cd54p-66f,
     0x1.6f2894p-69f, 0x1.874e64p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38158p-87f, 0x1.bc85d2p-56f, 0.0f, 0.0f, 0x1.d6bc6p-93f, 0x1.e42cdep-18f,
     0.0f, 0x1.076dbap-28f, 0.0f, 0.0f, 0x1.b27ed8p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa16f4p-93f, 0x1.aa1742p-51f, 0x1.ec3924p-19f, 0.0f, 0.0f, 0x1.d6337cp-45f,
     0x1.aa68cep-120f, 0x1.6e8502p-68f, 0.0f, 0.0f, 0.0f, 0x1.f8f45p-73f, 0.0f,
     0x1.d8ff36p-18f, 0.0f, 0x1.c3f7f8p-3f, 0.0f, 0.0f, 0x1.cf711p-42f, 0.0f,
     0x1.c7e724p-26f, 0x1.fae06p-26f, 0x1.87cb96p-9f, 0x1.4e1b52p-35f, 0.0f,
     0x1.05e53ap-58f, 0x1.07054cp-64f, 0.0f, 0x1.2c6184p-34f, 0x1.9f54e6p-21f,
     0x1.d04b48p-99f, 0.0f, 0x1.5e1d08p-31f, 0.0f, 0.0f, 0.0f, 0x1.3d3ab2p-53f, 0.0f,
     0x1.57987ap-79f, 0.0f, 0x1.9ab7bap-50f, 0.0f, 0x1.4cb694p-76f, 0x1.011982p-37f,
     0x1.9a466cp-16f, 0x1.4233cp-73f, 0x1.0427f4p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83ba38p-36f, 0.0f, 0.0f, 0x1.ddab4p-29f, 0.0f, 0x1.c4d9dcp-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eb57b8p-114f, 0.0f, 0.0f, 0.0f, 0x1.5bcf48p-88f, 0x1p0f,
     0x1.c72662p-70f, 0x1.a99d34p-106f, 0x1.182d6cp-3f, 0.0f, 0x1.f592p-1f, 0.0f,
     0.0f, 0x1.40078cp-40f, 0x1.9d1d26p-101f, 0x1.f5fe4cp-95f, 0.0f, 0x1.b43d82p-100f,
     0.0f, 0x1.5201bep-71f, 0x1.ec581cp-104f, 0.0f, 0x1.fe80eap-94f, 0x1.e9718ap-3f,
     0x1.c91bb2p-85f, 0x1.54ddb6p-115f, 0x1.8ec632p-72f, 0x1.51e5fcp-66f, 0.0f,
     0x1.562126p-117f, 0x1.79c016p-82f, 0.0f, 0.0f, 0x1.4f1f7p-62f, 0x1.5a494ep-57f,
     0.0f, 0.0f, 0x1.3395cp-79f, 0x1.23c092p-25f, 0x1.0947bap-3f, 0x1.db857ep-59f,
     0.0f, 0.0f, 0x1.848074p-101f, 0.0f, 0x1.970d56p-12f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.58778ap-40f, 0x1.65548cp-101f, 0.0f, 0x1.166a28p-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.36bf86p-122f, 0.0f, 0x1.aff37cp-123f,
     0x1.3a5ce4p-78f, 0x1.eeffa6p-41f, 0x1p0f, 0x1.6ec5f4p-36f, 0x1.361e48p-73f, 0.0f,
     0.0f, 0.0f, 0x1.fcb834p-67f, 0.0f, 0x1.dba76ep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5908cap-15f, 0.0f, 0.0f, 0.0f, 0x1.afefb6p-120f, 0x1.c472bcp-63f,
     0x1.1838acp-86f, 0x1.3ba99ep-35f, 0x1.7bc356p-69f, 0x1.20489ap-18f, 0.0f, 0.0f,
     0x1.2688bcp-63f, 0.0f, 0.0f, 0.0f, 0x1.fc9e26p-112f, 0x1.7dfdp-101f,
     0x1.79e5acp-13f, 0x1.8d2beep-29f, 0x1.87fd42p-24f, 0.0f, 0x1.c8abcp-34f,
     0x1.7eb73ep-125f, 0x1.db3746p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34a012p-25f, 0.0f, 0x1.1981fap-116f, 0.0f, 0x1.8017c2p-44f, 0.0f, 0.0f,
     0x1.75125cp-94f, 0x1.7724a6p-68f, 0.0f, 0x1.846702p-98f, 0.0f, 0.0f, 0.0f,
     0x1.be98ccp-51f, 0x1.4554f8p-45f, 0x1.4c852ap-6f, 0.0f, 0.0f, 0x1.fd1ebep-108f,
     0x1.0bdca2p-114f, 0x1p0f, 0.0f, 0.0f, 0x1.a16aecp-42f, 0.0f, 0.0f, 0.0f,
     0x1.7d6abp-49f, 0.0f, 0x1.fd551ap-108f, 0x1.aa04d6p-80f, 0.0f, 0x1.84e6cep-104f,
     0x1.7ee9fcp-86f, 0.0f, 0.0f, 0x1.d51132p-48f, 0x1.0bf522p-103f, 0.0f,
     0x1.c79934p-10f, 0.0f, 0.0f, 0x1.08d22cp-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6218bp-59f, 0.0f, 0x1.3047p-86f, 0.0f, 0.0f, 0.0f, 0x1.c4e178p-125f,
     0x1.1809fp-96f, 0.0f, 0.0f, 0x1.9ed884p-4f, 0x1.3052ap-102f, 0.0f,
     0x1.6d8438p-17f, 0x1.b7bfb2p-74f, 0x1.3b1fc4p-11f, 0.0f, 0x1.1ef87ap-103f,
     0x1.4118acp-54f, 0.0f, 0.0f, 0.0f, 0x1.ca055cp-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9619cp-51f, 0x1.dd1558p-70f, 0x1.be5b0ap-36f, 0x1.9d807cp-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.914f8cp-86f, 0x1.74c40cp-8f,
     0x1.112ae4p-113f, 0x1.8119bap-8f, 0x1.af11bcp-68f, 0.0f, 0.0f, 0.0f,
     0x1.d016a6p-17f, 0.0f, 0.0f, 0x1.66c6d8p-68f, 0.0f, 0x1.c93a28p-60f,
     0x1.c8c33p-69f, 0.0f, 0x1.727708p-115f, 0.0f, 0.0f, 0x1.b40d5p-125f, 0.0f, 0.0f,
     0.0f, 0x1.0c71eep-109f, 0x1.3c9a84p-117f, 0x1.0d7522p-4f, 0x1.4b2658p-74f,
     0x1.4f9c04p-79f, 0x1.63ae0ep-39f, 0x1.5a3592p-64f, 0.0f, 0x1.88613ep-6f,
     0x1.a87fdp-63f, 0x1.148138p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dda1b2p-109f,
     0x1.0367a6p-49f, 0x1.1ae1eep-2f, 0x1.3dfe32p-12f, 0x1.3347bp-101f,
     0x1.c8dbb2p-1f, 0x1.4ac2ccp-109f, 0x1.a4c482p-70f, 0.0f, 0x1.b291bp-94f,
     0x1.7d5beep-81f, 0x1.83e904p-114f, 0x1.1d30bep-2f, 0x1.d4c47p-9f, 0.0f, 0.0f,
     0x1.d827d4p-67f, 0x1.44a5bep-52f, 0.0f, 0x1.c9d5dep-36f, 0.0f, 0.0f,
     0x1.3ce768p-61f, 0x1.93fe76p-9f, 0.0f, 0x1.83896ap-104f, 0.0f, 0.0f,
     0x1.c7724cp-52f, 0.0f, 0x1.c4a59p-98f, 0x1.cc605ap-8f, 0.0f, 0.0f,
     0x1.52ba7cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91e44ap-82f, 0.0f, 0.0f,
     0x1.e4d322p-25f, 0.0f, 0x1.b898f8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b26dfp-86f, 0.0f, 0.0f, 0x1.c1ba58p-125f, 0x1.3754dp-113f, 0x1.765ac6p-23f,
     0x1.7b6fap-42f, 0x1.2e0fa8p-70f, 0.0f, 0x1.b580aep-28f, 0x1.eb0206p-64f, 0.0f,
     0.0f, 0x1.d4705ep-83f, 0.0f, 0.0f, 0x1.992042p-110f, 0x1.e401ccp-55f, 0.0f, 0.0f,
     0x1.570c48p-21f, 0.0f, 0.0f, 0.0f, 0x1.bcea58p-63f, 0x1.dd42ccp-87f,
     0x1.1a985ep-6f, 0x1.a2ddd4p-121f, 0x1.b21d98p-14f, 0.0f, 0.0f, 0x1.bf0338p-50f,
     0x1.8d7d5cp-116f, 0x1.09e14p-32f, 0x1.b82e56p-35f, 0.0f, 0x1.a1dd2p-111f, 0.0f,
     0x1.a8f144p-81f, 0.0f, 0.0f, 0.0f, 0x1.7c1338p-21f, 0x1.518d34p-98f,
     0x1.470aeap-66f, 0x1.df314ap-80f, 0.0f, 0.0f, 0x1.0ee4bp-54f, 0x1.00c2bep-69f,
     0x1.1fe2f4p-89f, 0.0f, 0.0f, 0.0f, 0x1.9e3304p-50f, 0x1.e0f268p-1f,
     0x1.7e93d8p-52f, 0x1.332764p-125f, 0.0f, 0x1.1a8638p-11f, 0x1.7893d6p-51f,
     0x1.7ac6fp-19f, 0x1.6e512p-36f, 0.0f, 0.0f, 0.0f, 0x1.263a3cp-115f, 0.0f,
     0x1.bc31cep-48f, 0.0f, 0x1.ad9294p-115f, 0x1.2139ap-89f, 0.0f, 0x1.79e3d4p-87f,
     0x1.66fe6ep-2f, 0.0f, 0.0f, 0x1.0492b8p-83f, 0x1.dc0572p-59f, 0.0f, 0.0f, 0.0f,
     0x1.e08764p-124f, 0.0f, 0x1.43f9e8p-40f, 0x1.c36884p-26f, 0x1.21c78ap-35f,
     0x1.68beacp-102f, 0x1.ed603ep-14f, 0x1.a65a14p-31f, 0x1.a9804ep-30f, 0.0f, 0.0f,
     0x1.fd9b18p-21f, 0.0f, 0.0f, 0.0f, 0x1.b7e0b4p-94f, 0.0f, 0.0f, 0.0f,
     0x1.dc9098p-40f, 0x1.8de876p-97f, 0.0f, 0.0f, 0.0f, 0x1.46af52p-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.926a62p-73f, 0.0f, 0x1.f66a6cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.515992p-123f, 0.0f, 0.0f, 0.0f, 0x1.7d32cep-39f, 0x1.04a386p-38f,
     0x1.67ae5cp-88f, 0x1.5de828p-17f, 0x1.85aap-32f, 0.0f, 0x1.8f7a7ap-83f, 0.0f,
     0x1.8dae24p-46f, 0x1.e59f16p-22f, 0x1.9f0c2ep-89f, 0x1.045ae2p-58f, 0.0f, 0.0f,
     0.0f, 0x1.a2105ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6a4e6p-4f,
     0x1.e741c2p-100f, 0x1.f9b6dcp-20f, 0.0f, 0.0f, 0x1.f9054p-6f, 0.0f, 0.0f,
     0x1.709946p-113f, 0x1.3cc38p-24f, 0.0f, 0.0f, 0x1.2dceb4p-126f, 0x1.30ca0cp-13f,
     0.0f, 0x1.ec3ee6p-99f, 0x1.ac5068p-84f, 0x1.5d7f78p-5f, 0x1.754434p-48f, 0.0f,
     0.0f, 0x1.17581ep-56f, 0x1.060ca2p-35f, 0x1.e77e28p-39f, 0x1.fe969cp-65f,
     0x1.7e29a8p-43f, 0.0f, 0.0f, 0x1.45d94cp-63f, 0.0f, 0.0f, 0x1.eaf52cp-121f,
     0x1.fadf88p-69f, 0x1.28562p-28f, 0x1.9089c4p-91f, 0x1.a61f5ep-1f,
     0x1.5378dp-126f, 0.0f, 0x1.c1a17cp-100f, 0.0f, 0x1.6b817ep-52f, 0x1.1b346p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9c7bcp-125f, 0.0f,
     0x1.225506p-31f, 0x1.97f77cp-58f, 0.0f, 0x1.8ddf1ep-46f, 0.0f, 0.0f,
     0x1.51e0c2p-51f, 0.0f, 0x1.0d84c2p-33f, 0x1.8bd5acp-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.884714p-67f, 0x1.0fa20cp-9f, 0x1.8a8c2cp-51f, 0x1.480408p-23f,
     0x1.ff2eeap-50f, 0x1.c67402p-45f, 0x1.5edb96p-109f, 0x1.4baea2p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.35b5eap-126f, 0x1.02990cp-53f, 0x1.eb24ccp-122f, 0x1.eb9c14p-32f,
     0.0f, 0x1.8a64ap-10f, 0.0f, 0.0f, 0.0f, 0x1.88bdf2p-38f, 0x1.b235f4p-107f,
     0x1.45105cp-70f, 0.0f, 0x1.cae61ap-23f, 0.0f, 0x1.02175ap-43f, 0x1.deecd8p-125f,
     0.0f, 0x1.4cfcf4p-56f, 0x1.5a7faap-100f, 0x1.8fa922p-25f, 0x1.67a642p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.23537ap-79f, 0x1.73e48cp-59f, 0x1.fab616p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.48082p-91f, 0x1.07c3d4p-50f, 0.0f, 0x1.a9ae36p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d9648p-56f, 0.0f, 0.0f, 0.0f, 0x1.cd1e5ep-68f,
     0x1.7d3f0cp-108f, 0.0f, 0.0f, 0x1.800b3ep-71f, 0.0f, 0.0f, 0x1.67fd66p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a0f46p-50f, 0.0f, 0.0f, 0.0f, 0x1.623126p-104f,
     0.0f, 0x1.feac78p-17f, 0.0f, 0.0f, 0x1.a2c058p-121f, 0.0f, 0x1.ae9152p-37f, 0.0f,
     0x1.641ab4p-77f, 0.0f, 0.0f, 0.0f, 0x1.676648p-42f, 0x1.52bbfcp-72f,
     0x1.0c855ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b27472p-13f, 0.0f, 0x1.20a8bp-42f,
     0x1.addaacp-88f, 0x1.fee3ccp-66f, 0x1.7a775ep-98f, 0x1.159ac4p-85f,
     0x1.8b829ap-112f, 0.0f, 0x1.941bf4p-30f, 0x1.754868p-126f, 0x1.a8ed18p-4f, 0.0f,
     0x1.974daap-117f, 0.0f, 0x1.aff4bep-39f, 0x1.861f4cp-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4457cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fecddap-19f,
     0x1.99ff5ap-121f, 0x1.4012e2p-79f, 0.0f, 0x1.f18048p-50f, 0.0f, 0x1.cc36d2p-69f,
     0x1.22209ep-90f, 0.0f, 0.0f, 0.0f, 0x1.e9de22p-29f, 0x1.f6795p-113f, 0.0f,
     0x1.856d94p-41f, 0.0f, 0.0f, 0.0f, 0x1.a047fcp-1f, 0x1.6ce358p-76f,
     0x1.8d0958p-23f, 0.0f, 0x1.1f9724p-2f, 0x1.f7b926p-47f, 0x1.e54cd4p-110f, 0.0f,
     0x1.451d54p-79f, 0.0f, 0x1.46e76ap-31f, 0.0f, 0x1.12a91cp-126f, 0.0f,
     0x1.5f0586p-16f, 0x1.ea55fp-17f, 0.0f, 0x1.155adep-85f, 0x1.f42bf6p-58f, 0.0f,
     0x1.38fa94p-65f, 0x1.68217p-30f, 0.0f, 0.0f, 0x1.203d2cp-101f, 0x1.dcf64ap-57f,
     0.0f, 0.0f, 0x1.e5f922p-39f, 0.0f, 0.0f, 0x1.69ef44p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3d1044p-117f, 0.0f, 0x1.c8f20ap-91f, 0.0f, 0.0f, 0x1.50d9bap-27f, 0.0f,
     0x1.3d8474p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac2f2p-27f, 0x1.0ae6bcp-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8a92ep-82f, 0x1.3b6d1p-85f,
     0x1.a7a3acp-77f, 0x1.f0d0f6p-24f, 0.0f, 0x1.0a0116p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fae3d2p-88f, 0x1.81a8aep-81f, 0x1p0f, 0.0f, 0x1.b2ece2p-101f,
     0x1.a24ce6p-13f, 0x1.4a983cp-80f, 0.0f, 0x1.44a61ap-19f, 0.0f, 0.0f,
     0x1.93028ep-39f, 0.0f, 0.0f, 0x1.7f5d7p-91f, 0.0f, 0x1.1cd56p-25f,
     0x1.6233d8p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b25f02p-45f, 0.0f, 0.0f, 0.0f,
     0x1.8d672cp-10f, 0.0f, 0.0f, 0.0f, 0x1.fb6d82p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a6d72p-82f, 0.0f, 0x1.163ccp-75f, 0.0f, 0.0f, 0.0f, 0x1.dbe406p-65f,
     0x1.e78a4ap-46f, 0x1.3a0ebep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d1358p-40f, 0.0f,
     0x1.b79136p-33f, 0.0f, 0x1.7dbc9p-29f, 0x1.89b3d6p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c1ea4p-55f, 0.0f, 0.0f, 0.0f, 0x1.d6e492p-21f, 0.0f, 0.0f, 0.0f,
     0x1.6325fcp-20f, 0.0f, 0.0f, 0.0f, 0x1.9550cp-108f, 0x1.8f5f44p-37f,
     0x1.6c71dcp-21f, 0.0f, 0.0f, 0x1.f02a78p-115f, 0.0f, 0x1.21a828p-42f, 0.0f,
     0x1.65e92ap-88f, 0.0f, 0.0f, 0x1.27e896p-95f, 0x1.d41b62p-30f, 0.0f,
     0x1.1b0586p-1f, 0.0f, 0x1.1017bcp-93f, 0x1.ddb5f6p-65f, 0x1.e3f372p-63f,
     0x1.c8af44p-117f, 0x1.4729a2p-79f, 0.0f, 0x1.c13864p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dfc074p-99f, 0.0f, 0x1.24647p-83f, 0.0f, 0x1.45ca06p-21f, 0x1p0f,
     0x1.e3a11ap-107f, 0x1.d834a6p-7f, 0x1.302aa8p-89f, 0x1.84722ep-90f, 0.0f,
     0x1.ce5218p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f860f6p-18f, 0.0f, 0x1.e480ccp-9f, 0.0f, 0.0f, 0x1.8319b4p-32f, 0.0f,
     0x1.687bd8p-89f, 0x1.714dcp-2f, 0x1.8422cp-54f, 0.0f, 0x1.0795cap-7f, 0.0f,
     0x1.b390f4p-72f, 0.0f, 0x1.8d75fcp-96f, 0.0f, 0.0f, 0x1.cab88cp-103f,
     0x1.1bf636p-14f, 0.0f, 0.0f, 0x1.ecd1eap-112f, 0x1.a032b6p-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db6b46p-24f, 0x1.2367a6p-84f, 0.0f, 0.0f, 0x1.fc9ffcp-10f,
     0x1.e8fc7ep-2f, 0x1.29438p-36f, 0.0f, 0.0f, 0.0f, 0x1.b04ef6p-76f,
     0x1.19d57ep-105f, 0x1.53d3cep-15f, 0.0f, 0.0f, 0.0f, 0x1.8d49a4p-54f,
     0x1.c6f966p-102f, 0.0f, 0x1.acf6ap-107f, 0x1.7407bep-31f, 0x1.7e1444p-23f, 0.0f,
     0x1.815ad8p-66f, 0x1.3d5022p-3f, 0x1.cddba8p-122f, 0.0f, 0x1.ad20dep-108f,
     0x1.0c6a4ep-83f, 0.0f, 0.0f, 0x1.a5847p-20f, 0x1.5e415cp-18f, 0.0f, 0.0f,
     0x1.fc2e26p-29f, 0x1.c7de3ap-63f, 0.0f, 0.0f, 0x1.54e246p-16f, 0x1.2804e8p-6f,
     0.0f, 0.0f, 0x1.5df0b6p-16f, 0.0f, 0x1.cf04acp-38f, 0.0f, 0x1.25faa4p-21f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.efc7d4p-59f, 0.0f, 0x1.23fd2ap-35f, 0x1.3ee6bap-96f, 0.0f, 0.0f,
     0x1.0bd79cp-107f, 0x1.f070c8p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fac3bcp-110f,
     0.0f, 0x1.278bd4p-16f, 0.0f, 0x1.aafd44p-27f, 0x1.b0c68cp-50f, 0.0f, 0.0f, 0.0f,
     0x1.f3ef84p-124f, 0.0f, 0x1.0246b4p-28f, 0.0f, 0x1.7eae38p-80f, 0x1.7dddd6p-114f,
     0x1.b2ef14p-108f, 0x1.51eba2p-41f, 0x1.8c98c2p-19f, 0x1.956166p-95f, 0.0f,
     0x1.c46198p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ebffp-100f, 0.0f,
     0x1.98785ap-13f, 0.0f, 0x1.70ac8ap-79f, 0x1.95c18ap-91f, 0x1.d8cbecp-111f, 0.0f,
     0x1.98673ap-1f, 0x1.5909eap-10f, 0x1.cc4d3ep-72f, 0x1.f0938ep-78f,
     0x1.e3ee06p-23f, 0x1.904e2ap-28f, 0x1.e64798p-117f, 0.0f, 0x1.7743d4p-92f,
     0x1.0cdc8cp-4f, 0x1.e6fa6ep-23f, 0.0f, 0x1.a7c152p-109f, 0.0f, 0x1.3835c8p-7f,
     0x1.9f0178p-56f, 0.0f, 0x1.abf3fap-113f, 0x1.4b349ap-96f, 0x1.e5015ep-76f, 0.0f,
     0x1.7141d8p-91f, 0.0f, 0x1.0e45aep-69f, 0.0f, 0.0f, 0x1.fdcc8ap-43f,
     0x1.c2ae3ap-30f, 0.0f, 0x1.0dfeb2p-117f, 0.0f, 0x1.a4dee4p-103f, 0.0f, 0.0f,
     0x1.01ab74p-59f, 0x1.0f007ep-57f, 0x1.3c984ep-88f, 0x1.146038p-103f, 0.0f,
     0x1.d95eeap-20f, 0.0f, 0.0f, 0x1.f83018p-86f, 0x1.10b506p-43f, 0x1.5d147cp-56f,
     0.0f, 0x1.af3784p-43f, 0.0f, 0x1.dad95p-24f, 0x1.39b912p-107f, 0.0f,
     0x1.456f38p-76f, 0.0f, 0.0f, 0x1.46ab7ap-110f, 0x1.cd2572p-80f, 0x1.0a3caep-20f,
     0x1.c29d8cp-81f, 0x1.57a3p-89f, 0x1.a05634p-26f, 0x1.a06da2p-124f,
     0x1.569014p-107f, 0x1.c184f4p-52f, 0.0f, 0.0f, 0.0f, 0x1.b9e34ep-31f,
     0x1.722da2p-90f, 0x1.9322cep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33252ap-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f18fcp-6f, 0x1.b7fd9cp-16f, 0x1.01b3fap-82f,
     0x1.75957ap-26f, 0x1.ccf814p-57f, 0.0f, 0.0f, 0x1.b06bcep-63f, 0.0f,
     0x1.2dffe2p-3f, 0.0f, 0.0f, 0.0f, 0x1.852f06p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a0548ep-83f, 0.0f, 0x1.453e34p-66f, 0.0f, 0x1.1587e6p-116f,
     0x1.16817ap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.543c78p-52f, 0.0f,
     0x1.ea8aaep-45f, 0x1.19fb3ep-120f, 0.0f, 0x1.91bba4p-100f, 0x1.8c2da2p-80f,
     0x1.2c3d0ap-87f, 0x1.890da2p-78f, 0.0f, 0.0f, 0x1p0f, 0x1.b4a076p-110f, 0.0f,
     0x1.606724p-81f, 0x1.0b73acp-17f, 0.0f, 0x1.2e31b4p-91f, 0x1.34109ap-99f, 0.0f,
     0.0f, 0x1.078bf6p-106f, 0x1.4743cep-111f, 0.0f, 0x1.1f8e14p-118f, 0x1.e0aacap-8f,
     0.0f, 0x1.bd167ap-102f, 0.0f, 0x1.326ab6p-18f, 0.0f, 0x1.7adf7ep-13f,
     0x1.09fff8p-73f, 0.0f, 0.0f, 0x1.b380dp-84f, 0.0f, 0.0f, 0x1.8c89ap-31f, 0.0f,
     0.0f, 0x1.e6def6p-23f, 0x1.874fbap-40f, 0x1.0c9f5ep-88f, 0x1.e55f4p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9928f6p-18f, 0x1.e2b008p-18f, 0.0f, 0.0f,
     0x1.75325ap-104f, 0x1.425fa8p-104f, 0.0f, 0.0f, 0x1.b1ff2cp-75f, 0.0f,
     0x1.bacef6p-118f, 0x1.68fd74p-49f, 0.0f, 0x1.df2a3p-44f, 0x1.8b58e2p-61f, 0.0f,
     0x1.d82c62p-3f, 0x1.15d78ep-49f, 0x1.ddaa74p-73f, 0x1.db1462p-104f, 0.0f, 0.0f,
     0x1.bff76ap-79f, 0x1.67901ap-95f, 0x1.5aca52p-54f, 0.0f, 0.0f, 0x1.5d904ap-76f,
     0.0f, 0.0f, 0x1.c45e9p-66f, 0x1.672eap-125f, 0.0f, 0.0f, 0.0f, 0x1.a7274p-76f,
     0.0f, 0x1.fc147ep-81f, 0.0f, 0.0f, 0x1.c269aap-124f, 0x1.b2c622p-10f,
     0x1.25da2p-113f, 0x1.2ea82cp-83f, 0.0f, 0x1.25ee86p-47f, 0.0f, 0.0f,
     0x1.2a1822p-77f, 0.0f, 0x1.8eac3ep-62f, 0x1.8fd4d4p-121f, 0.0f, 0.0f, 0.0f,
     0x1.63fcbap-17f, 0x1.cc348ap-124f, 0x1.c60068p-100f, 0.0f, 0.0f, 0x1.24ececp-2f,
     0x1.1a7036p-96f, 0x1.cdab92p-93f, 0x1.7b6d0ep-85f, 0x1.1175dep-10f,
     0x1.0135d6p-98f, 0.0f, 0x1.873e6ep-13f, 0x1.7393acp-63f, 0.0f, 0.0f, 0.0f,
     0x1.5b9d8ep-1f, 0x1.983d38p-37f, 0x1.4ca734p-74f, 0.0f, 0.0f, 0.0f,
     0x1.9fd50ap-13f, 0x1.b608fcp-21f, 0x1.7f3408p-75f, 0.0f, 0x1.d7908p-63f, 0.0f,
     0.0f, 0.0f, 0x1.51eb9ap-72f, 0.0f, 0x1.df7188p-55f, 0.0f, 0.0f, 0x1.0790e8p-9f,
     0x1.42d972p-65f, 0.0f, 0.0f, 0.0f, 0x1.5803p-58f, 0x1.7584eap-57f,
     0x1.325212p-25f, 0x1.395fap-62f, 0.0f, 0x1.5425dp-97f, 0x1p0f, 0x1.b291e4p-121f,
     0x1.c882p-80f, 0.0f, 0.0f, 0x1.133ff6p-47f, 0.0f, 0x1.308c14p-86f,
     0x1.959378p-49f, 0x1.6911bap-69f, 0.0f, 0x1.9e98dep-69f, 0x1.17a59p-78f, 0.0f,
     0.0f, 0.0f, 0x1.51a76ap-106f, 0x1.74053cp-46f, 0.0f, 0x1.6ace0cp-21f,
     0x1.410152p-109f, 0x1.94cc26p-113f, 0.0f, 0.0f, 0.0f, 0x1.01b84cp-88f, 0.0f,
     0.0f, 0x1.152684p-85f, 0x1.50c8c6p-88f, 0.0f, 0.0f, 0x1.ef889p-22f, 0.0f, 0.0f,
     0.0f, 0x1.90586ap-63f, 0.0f, 0x1.2feddap-63f, 0x1.13adc4p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a350d6p-93f, 0x1.dd9528p-9f, 0x1.0365c8p-70f, 0.0f, 0.0f, 0.0f,
     0x1.626bfp-120f, 0x1.77e5dep-37f, 0x1.d73846p-49f, 0.0f, 0.0f, 0.0f,
     0x1.ad2cp-17f, 0.0f, 0x1.52c452p-44f, 0.0f, 0x1.91e0e6p-90f, 0x1.15a5a8p-27f,
     0.0f, 0x1.fc0462p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2712ap-31f, 0x1.051a48p-32f,
     0x1.7e31d6p-47f, 0x1.69765ep-65f, 0.0f, 0.0f, 0x1.7ea3bcp-40f, 0x1.d188b2p-38f,
     0.0f, 0x1.e90e66p-10f, 0.0f, 0x1.c899b4p-32f, 0.0f, 0.0f, 0.0f, 0x1.0aa69cp-16f,
     0x1.777d7p-112f, 0x1.5c6904p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe5f42p-119f,
     0x1.01d3d4p-56f, 0.0f, 0x1.bece24p-94f, 0x1.9acbp-101f, 0.0f, 0x1.ae839ap-69f,
     0x1.36c9a4p-98f, 0.0f, 0.0f, 0.0f, 0x1.f4700ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.47807ep-100f, 0.0f, 0x1.c53e76p-31f, 0x1.b16252p-49f, 0.0f, 0.0f,
     0x1.2b4ba6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba6808p-85f, 0x1.f638bep-56f,
     0x1.6b18p-101f, 0.0f, 0x1.35c32ep-22f, 0x1.37f964p-81f, 0.0f, 0x1.3c59e6p-79f,
     0x1.3aadf8p-116f, 0x1.014c1cp-94f, 0x1.7313f4p-83f, 0x1.d5ce58p-119f,
     0x1.3f8fcep-4f, 0x1.2996b2p-75f, 0.0f, 0.0f, 0x1.ad0992p-54f, 0x1.fdb73ep-115f,
     0.0f, 0.0f, 0x1.d6218cp-52f, 0.0f, 0.0f, 0x1.1b7fdap-89f, 0x1.8bcf2cp-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.89843p-119f, 0.0f, 0x1.b6d6bp-41f, 0.0f, 0.0f, 0.0f,
     0x1.f5ab9ep-20f, 0.0f, 0x1.f7a64ep-30f, 0x1.12cf64p-9f, 0.0f, 0.0f,
     0x1.ec3e0cp-48f, 0.0f, 0x1.ee60aep-81f, 0x1.7d6d5ap-101f, 0.0f, 0x1.5873f4p-42f,
     0x1.9c6242p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b00bap-2f, 0.0f, 0.0f,
     0x1.ad63f8p-122f, 0x1.5c6c7ap-93f, 0.0f, 0x1.a9a79ap-12f, 0x1.6b8716p-38f,
     0x1.03103ep-42f, 0.0f, 0.0f, 0x1.fe3e22p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c27a84p-101f, 0x1.3ab858p-92f, 0x1.85a648p-66f, 0x1.1db1f6p-69f, 0.0f,
     0x1.af0196p-66f, 0x1.f2817ap-59f, 0.0f, 0x1.0ffef2p-56f, 0x1.12bb32p-17f,
     0x1.f76f8p-25f, 0.0f, 0x1.e2a8c8p-19f, 0x1.a730d8p-30f, 0.0f, 0.0f,
     0x1.7d719ep-98f, 0x1.5152e2p-1f, 0x1.145f48p-71f, 0x1.66d498p-73f, 0.0f, 0.0f,
     0x1.005fap-102f, 0x1.a7bab4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27bbc4p-83f, 0.0f,
     0.0f, 0x1.8b4698p-9f, 0x1.8644e2p-76f, 0x1.2b1eap-51f, 0x1.11b0eep-51f, 0.0f,
     0.0f, 0.0f, 0x1.0fb0e8p-65f, 0x1.cc9fdcp-69f, 0.0f, 0.0f, 0x1.0e0daap-39f, 0.0f,
     0x1.a9318p-89f, 0x1.09015p-78f, 0x1.a4cedep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bace1cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8061ep-122f, 0.0f, 0x1.bbcbeap-88f,
     0.0f, 0.0f, 0.0f, 0x1.f8ff82p-41f, 0x1.36e29cp-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54f588p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8917p-112f,
     0x1.ce23f6p-24f, 0.0f, 0x1.3ea318p-123f, 0x1.90681ap-23f, 0x1.bb2ccp-59f, 0.0f,
     0x1.427faap-111f, 0.0f, 0x1.5704aep-83f, 0.0f, 0x1.c46338p-18f, 0x1.416566p-67f,
     0x1.18e78p-54f, 0.0f, 0x1.047c1p-65f, 0x1.ae9p-118f, 0.0f, 0x1.3b9d12p-99f,
     0x1.e234aep-9f, 0.0f, 0.0f, 0x1.1ad6d6p-17f, 0x1.c41948p-12f, 0x1.bec62p-90f,
     0x1.43bab2p-43f, 0x1.f0e6dp-29f, 0.0f, 0x1.75cbecp-118f, 0x1.6b3166p-106f, 0.0f,
     0x1.3bcf7ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba0c6p-80f, 0x1.ee5626p-121f,
     0x1.9f3a32p-23f, 0x1.5cdde6p-126f, 0x1.7a739ap-92f, 0.0f, 0x1.c238p-58f,
     0x1.4eb8f8p-16f, 0x1.da2a36p-42f, 0.0f, 0x1.a87a26p-88f, 0x1.e4b2d6p-38f, 0.0f,
     0.0f, 0x1.271bb2p-124f, 0x1.c18e32p-7f, 0x1.01bb98p-52f, 0.0f, 0.0f,
     0x1.7abbbcp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b78018p-39f, 0x1.e2d17ep-67f,
     0x1.66881ep-115f, 0x1.34b32ep-62f, 0.0f, 0.0f, 0x1.3f5f4ep-48f, 0.0f, 0.0f, 0.0f,
     0x1.f97facp-119f, 0.0f, 0x1.e19f7p-85f, 0.0f, 0.0f, 0x1.6ad0fap-4f,
     0x1.a62858p-81f, 0x1.55c06p-55f, 0.0f, 0.0f, 0x1.0b02aep-108f, 0x1.bccfcap-37f,
     0x1.94e156p-110f, 0x1.20e35p-118f, 0x1.1e8748p-80f, 0x1.55522ap-88f,
     0x1.1d6a44p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af4b58p-46f,
     0.0f, 0.0f, 0.0f, 0x1.7bac88p-27f, 0.0f, 0.0f, 0x1.6c0c76p-122f, 0.0f, 0.0f,
     0x1.64696ap-117f, 0x1.fed33ap-72f, 0x1.27edbcp-17f, 0x1.369ec2p-69f,
     0x1.24cc1cp-124f, 0x1.7c5da2p-90f, 0.0f, 0x1.4272bp-116f, 0x1.d16e38p-102f,
     0x1.80ed7ep-13f, 0.0f, 0.0f, 0x1.837ef4p-90f, 0x1.124818p-75f, 0x1.40201ap-16f,
     0.0f, 0.0f, 0x1.be7952p-22f, 0x1.6b6446p-95f, 0x1.752608p-115f, 0x1.d0defp-37f,
     0x1.b154bcp-99f, 0x1.41b08ep-20f, 0.0f, 0x1.32a4f2p-118f, 0.0f, 0x1.0b4bfcp-31f,
     0.0f, 0.0f, 0x1.ff68c4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b6cbp-7f,
     0x1.c3eaa6p-73f, 0.0f, 0x1.f909bap-102f, 0x1.737724p-2f, 0x1.97148ep-10f, 0.0f,
     0x1.3d1b7p-51f, 0.0f, 0x1.49d058p-6f, 0x1.c0664ap-81f, 0x1.64fa4p-13f, 0.0f,
     0x1.27e68p-18f, 0.0f, 0x1.7c8514p-65f, 0x1.7fbc26p-72f, 0x1.6e56f4p-58f,
     0x1.e14738p-114f, 0.0f, 0x1.a1aa14p-15f, 0x1.3aef6ep-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59d68ep-104f, 0.0f, 0x1.a4ff0ap-123f, 0.0f, 0x1.6173f8p-36f, 0.0f,
     0x1.bce87ep-2f, 0.0f, 0.0f, 0x1.c06d8cp-108f, 0.0f, 0.0f, 0.0f, 0x1.fe62ep-125f,
     0.0f, 0x1.7160b4p-85f, 0x1.9ff1f6p-56f, 0.0f, 0x1.05d52ep-10f, 0x1.6cd5cp-33f,
     0x1.75115ep-43f, 0.0f, 0.0f, 0x1.d95f42p-64f, 0.0f, 0.0f, 0x1.16f6e8p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f830ep-67f, 0.0f, 0x1.1fedcp-125f,
     0.0f, 0x1.c18b44p-74f, 0x1.a2530cp-39f, 0.0f, 0.0f, 0x1.d5a40cp-88f,
     0x1.8538a2p-20f, 0x1.0da7b8p-37f, 0x1.d4879ap-18f, 0x1.64f70ep-60f, 0.0f, 0.0f,
     0x1.ffc28ep-40f, 0.0f, 0.0f, 0x1.9879f6p-111f, 0.0f, 0x1.89cd86p-71f, 0.0f,
     0x1.eefff2p-66f, 0x1.48cbccp-22f, 0.0f, 0x1.529542p-122f, 0x1.b66a1ap-125f,
     0x1.3d415p-87f, 0x1.06637cp-10f, 0.0f, 0.0f, 0x1.9edb18p-107f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0284eep-76f, 0.0f, 0.0f, 0x1.bf6b42p-79f, 0x1.75a756p-17f,
     0x1.4ce8fap-40f, 0x1.730bcap-83f, 0.0f, 0.0f, 0.0f, 0x1.a22d5ep-41f,
     0x1.4f3616p-38f, 0.0f, 0x1.2f9c38p-37f, 0x1.75f1dcp-24f, 0.0f, 0x1.c1a3bap-107f,
     0x1.39addep-114f, 0.0f, 0x1.3e9504p-112f, 0.0f, 0x1.ad3466p-38f, 0x1.dca96ap-71f,
     0.0f, 0.0f, 0x1.4ad268p-59f, 0.0f, 0.0f, 0x1.03d206p-105f, 0x1.1c89d6p-53f, 0.0f,
     0x1.1d1ca2p-58f, 0.0f, 0.0f, 0.0f, 0x1.b21848p-75f, 0x1.f6620ep-62f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9667d6p-98f, 0x1.b1cac6p-100f, 0.0f, 0x1.3be57ep-1f,
     0x1.872622p-79f, 0.0f, 0x1.c63c6p-72f, 0x1.42dc02p-79f, 0x1.023846p-86f, 0.0f,
     0x1.3ef054p-36f, 0x1.19ef2p-111f, 0x1.58e358p-114f, 0.0f, 0x1.119dccp-49f,
     0x1.0958b8p-52f, 0x1.ed16d8p-38f, 0.0f, 0x1.f86106p-125f, 0.0f, 0x1.9d344ep-104f,
     0.0f, 0.0f, 0x1.6d7984p-63f, 0.0f, 0x1.aea20ep-93f, 0.0f, 0.0f, 0.0f,
     0x1.23c58ap-85f, 0.0f, 0.0f, 0x1.048c46p-61f, 0.0f, 0x1.93f504p-1f,
     0x1.110342p-79f, 0.0f, 0x1.ea6914p-17f, 0x1.7e26cep-121f, 0.0f, 0x1.0fd4ep-51f,
     0x1.6c5592p-97f, 0x1.b2b342p-85f, 0x1.73e5c6p-68f, 0x1.5b5ab2p-88f,
     0x1.d710ecp-117f, 0.0f, 0x1.c020e6p-104f, 0.0f, 0x1.b47bc8p-21f, 0x1.b9bec2p-65f,
     0.0f, 0.0f, 0.0f, 0x1.43d934p-97f, 0x1.6d0f92p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba67dcp-37f, 0x1.cb4d72p-26f, 0.0f,
     0x1.68c8cp-75f, 0.0f, 0.0f, 0.0f, 0x1.0c189cp-10f, 0x1.cd8302p-120f,
     0x1.8dfe86p-56f, 0x1.fb7ep-13f, 0x1.3a8762p-33f, 0x1.5a7d22p-9f, 0x1.2addb8p-48f,
     0.0f, 0.0f, 0.0f, 0x1.9a9f16p-50f, 0x1.980838p-40f, 0x1.9d16eep-53f,
     0x1.401966p-41f, 0.0f, 0.0f, 0.0f, 0x1.038b16p-75f, 0.0f, 0x1.dcefe8p-59f, 0.0f,
     0x1.483428p-38f, 0x1.735f04p-112f, 0x1.87e3b2p-118f, 0.0f, 0.0f, 0x1.b71b7cp-17f,
     0x1.f838d2p-30f, 0.0f, 0x1.d86156p-100f, 0.0f, 0x1.cd6dep-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c5de66p-77f, 0.0f, 0.0f, 0x1.988ae8p-66f, 0x1.10aafep-19f, 0.0f,
     0x1.74a1eap-86f, 0x1.f0d4fcp-11f, 0.0f, 0.0f, 0x1.89170ap-36f, 0x1.7ab6fep-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0b3fp-80f, 0x1.274b12p-12f, 0.0f, 0x1.fba80ap-69f,
     0.0f, 0.0f, 0x1.5dad12p-22f, 0.0f, 0.0f, 0x1.492e48p-41f, 0x1.68aec8p-98f,
     0x1.fb38cap-120f, 0.0f, 0.0f, 0.0f, 0x1.d05f22p-50f, 0.0f, 0x1.396c8ep-82f, 0.0f,
     0.0f, 0x1.8bcf76p-125f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_hypotf4_u35kvx(tmp0, tmp1);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_hypotf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_hypotf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
