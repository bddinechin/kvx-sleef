/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_remainderf4_kvx.c --function Sleef_remainderf4_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.49acd8p-54f, 0x1.117cd4p-50f, 0x1.67ce58p-25f, 0x1.94a27cp-80f, 0.0f, 0.0f,
     0x1.c89b26p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e24e7ep-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b0cdeap-116f, 0x1.46b7e6p-81f, 0.0f, 0x1.945834p-106f, 0.0f, 0.0f,
     0x1.a381fcp-4f, 0x1.c997a2p-27f, 0x1.92a692p-120f, 0.0f, 0x1.22f506p-84f, 0.0f,
     0x1.3f9cb4p-22f, 0x1.529f1ep-6f, 0x1.9f6284p-29f, 0.0f, 0.0f, 0.0f,
     0x1.a06c62p-108f, 0x1.3e6f64p-61f, 0x1.d0670ap-57f, 0x1.ab3dap-44f, 0.0f,
     0x1.e8509ep-25f, 0x1.9e8dd8p-36f, 0x1.6b0de6p-119f, 0.0f, 0x1.7a6b84p-25f, 0.0f,
     0x1.211294p-120f, 0x1.f17784p-15f, 0x1.19f454p-17f, 0x1.16c934p-30f, 0.0f,
     0x1.b2baf2p-86f, 0x1.fce832p-27f, 0.0f, 0x1.8b3394p-78f, 0.0f, 0.0f, 0.0f,
     0x1.873e6p-118f, 0x1.d253p-80f, 0x1.5c2098p-99f, 0x1.0b3eb2p-106f, 0x1p0f,
     0x1.e9e42p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.887fb8p-30f, 0x1.b76bcap-116f,
     0x1.94be52p-62f, 0.0f, 0.0f, 0x1.bf7dfep-118f, 0x1.28fbf6p-18f, 0x1.cc031ep-51f,
     0.0f, 0x1.60227ep-59f, 0.0f, 0x1.048638p-87f, 0.0f, 0.0f, 0x1.0beee4p-55f, 0.0f,
     0x1.df173ap-86f, 0.0f, 0x1.71dadap-56f, 0x1.fe4fbep-82f, 0.0f, 0.0f, 0.0f,
     0x1.4d6bf6p-18f, 0x1.cbccccp-57f, 0.0f, 0x1.84f5ccp-49f, 0x1.b16ff6p-112f, 0.0f,
     0.0f, 0x1.b2b0c4p-85f, 0.0f, 0x1.a850bep-60f, 0x1.ac4518p-40f, 0x1.aff298p-113f,
     0x1.54932cp-81f, 0x1.5fdb96p-97f, 0.0f, 0.0f, 0x1.7afe86p-102f, 0x1.550912p-104f,
     0.0f, 0x1.98af94p-94f, 0x1.596b1ap-66f, 0.0f, 0.0f, 0.0f, 0x1.03079ep-121f, 0.0f,
     0.0f, 0x1.7f27f8p-62f, 0x1.f478b2p-54f, 0.0f, 0x1.7212p-38f, 0x1.d31d6cp-115f,
     0.0f, 0.0f, 0x1.07872p-20f, 0x1.247c2ep-50f, 0x1.f381b2p-80f, 0.0f,
     0x1.27cd7cp-13f, 0.0f, 0.0f, 0x1.302ab6p-114f, 0.0f, 0x1.c8bfa6p-6f,
     0x1.518ba4p-51f, 0.0f, 0.0f, 0x1.18ee0ep-124f, 0.0f, 0.0f, 0.0f, 0x1.324952p-73f,
     0x1.5b6e24p-9f, 0.0f, 0x1.be177cp-83f, 0x1.15c752p-85f, 0x1.df07cap-54f,
     0x1.305ca2p-32f, 0.0f, 0x1.07b5ecp-69f, 0x1.6b3e96p-12f, 0x1.ab33b2p-60f,
     0x1.6b8234p-100f, 0x1.2aa80ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4dfda2p-31f, 0.0f, 0x1.78eea2p-106f, 0.0f, 0x1.5bd08ep-76f, 0.0f, 0.0f,
     0x1.9c623ap-100f, 0x1.2622dcp-99f, 0x1.8f0d74p-110f, 0.0f, 0x1.bc61c2p-112f,
     0.0f, 0x1.cc10c6p-28f, 0.0f, 0x1.1b9d2ep-42f, 0.0f, 0x1.b62404p-68f,
     0x1.1eb546p-78f, 0.0f, 0.0f, 0.0f, 0x1.ea0b1ap-87f, 0.0f, 0x1.d9effep-75f, 0.0f,
     0.0f, 0x1.fa301p-41f, 0x1.6bdaecp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79954cp-96f, 0x1.f245b4p-67f, 0x1.de7b5cp-9f, 0.0f, 0x1.329978p-113f,
     0x1.1677aap-16f, 0.0f, 0.0f, 0x1.9590bcp-90f, 0x1.849e9cp-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.411316p-16f, 0.0f, 0.0f, 0x1.949726p-38f, 0x1.b3b1fcp-17f,
     0x1.092094p-3f, 0.0f, 0.0f, 0.0f, 0x1.2dc0fap-74f, 0.0f, 0x1.622862p-4f, 0.0f,
     0.0f, 0x1.80a078p-15f, 0.0f, 0x1.b85818p-11f, 0x1.3a35c6p-24f, 0x1.6aed32p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.550b3cp-10f, 0.0f, 0.0f, 0.0f, 0x1.6b0d9ep-75f, 0.0f,
     0.0f, 0x1.69c3cap-81f, 0x1.81717cp-115f, 0x1p0f, 0x1.7783fep-44f,
     0x1.e18d3ep-39f, 0x1.f0a9c6p-124f, 0.0f, 0x1.f8d83p-79f, 0x1.627ad6p-9f, 0.0f,
     0.0f, 0.0f, 0x1.c5f442p-34f, 0x1.b4520ep-73f, 0x1.1dc91p-6f, 0.0f,
     0x1.cd7e86p-117f, 0x1.59b41ap-93f, 0x1.59c6ccp-9f, 0.0f, 0x1.04a472p-122f,
     0x1.2e306cp-10f, 0.0f, 0x1.53f9e6p-76f, 0.0f, 0.0f, 0x1.7f4018p-10f,
     0x1.42e458p-118f, 0.0f, 0x1.74b6cap-44f, 0x1.f84bccp-45f, 0.0f, 0x1.d9e1aep-35f,
     0.0f, 0.0f, 0.0f, 0x1.9aea68p-86f, 0.0f, 0x1.d1d694p-37f, 0.0f, 0.0f,
     0x1.abb254p-75f, 0x1.e913c2p-12f, 0x1.5dfffcp-61f, 0.0f, 0x1.8b74fcp-66f, 0.0f,
     0.0f, 0.0f, 0x1.501872p-65f, 0x1.db704ep-37f, 0.0f, 0.0f, 0x1.6c29bep-102f,
     0x1.2f816cp-66f, 0.0f, 0x1.3d26d6p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.937ff8p-49f, 0x1.a0d14cp-91f, 0x1.b95a7ep-66f, 0x1.426758p-17f, 0.0f,
     0x1.bfcb86p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64aadcp-58f, 0.0f,
     0.0f, 0x1.c81db4p-46f, 0x1.44d19ep-63f, 0.0f, 0x1.b2466ep-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3fef5ep-59f, 0x1.74991cp-43f, 0x1.4f207p-105f, 0.0f, 0.0f, 0.0f,
     0x1.a2a36p-72f, 0.0f, 0.0f, 0x1.4dd258p-34f, 0x1.090e62p-6f, 0.0f, 0x1p0f,
     0x1.4824bep-70f, 0.0f, 0.0f, 0x1.2c3eaep-91f, 0.0f, 0.0f, 0x1.b95f66p-115f,
     0x1.4434ep-74f, 0x1.b8483p-95f, 0x1.23cdacp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.640324p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a181cp-45f, 0x1.ca921p-92f,
     0x1.ce4f52p-98f, 0.0f, 0x1.b4f6a8p-116f, 0.0f, 0x1.abc2b8p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.857c16p-99f, 0x1.613ebp-51f, 0.0f, 0x1.c621cep-114f, 0x1.463ddp-20f,
     0x1.34a352p-91f, 0.0f, 0x1.a7749ap-40f, 0x1.5c1006p-60f, 0x1.44423cp-64f,
     0x1.a91c7ep-59f, 0x1.bd659cp-72f, 0.0f, 0x1.59d3fp-70f, 0x1.9c2b54p-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8838ap-116f, 0x1.a26a3ap-87f, 0x1.8a410cp-65f, 0.0f,
     0x1.d52e66p-55f, 0.0f, 0.0f, 0x1.62ac0cp-48f, 0x1.87447ep-9f, 0x1.b13b1ep-36f,
     0.0f, 0.0f, 0.0f, 0x1.fa75bep-55f, 0x1.c7c21cp-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.786b72p-39f, 0.0f, 0x1.9194b2p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0335c2p-82f,
     0.0f, 0x1.8f74cep-18f, 0x1.87491ap-84f, 0x1.11d17ep-17f, 0.0f, 0x1.8b52c6p-14f,
     0.0f, 0x1.c1c69ap-30f, 0x1.dfe4cep-31f, 0.0f, 0.0f, 0x1.0334aep-116f,
     0x1.36ca14p-79f, 0x1.047f92p-24f, 0x1.64d23ap-76f, 0x1.25283p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.3aa5e8p-77f, 0x1.12f9b8p-10f, 0.0f, 0.0f, 0.0f,
     0x1.d7cb7p-111f, 0x1.5eb0f4p-34f, 0x1.240984p-116f, 0x1.a34656p-5f, 0.0f,
     0x1.77522ep-47f, 0x1.a0794ep-107f, 0.0f, 0x1.8f90aap-41f, 0.0f, 0x1.b518fap-82f,
     0.0f, 0.0f, 0x1.a1961cp-97f, 0x1.f8a924p-12f, 0x1.72d1ep-118f, 0x1.918f3cp-57f,
     0.0f, 0x1.59c1e6p-106f, 0x1.a5547ap-95f, 0x1.ff82a4p-104f, 0x1.b46546p-59f,
     0x1.773752p-23f, 0.0f, 0x1.507b1cp-97f, 0x1.9cafd2p-69f, 0x1.158a4ep-55f, 0.0f,
     0.0f, 0x1.8ce7dep-126f, 0x1.9030fp-69f, 0x1.4d466p-96f, 0x1.c9324ap-125f,
     0x1.82f6bap-40f, 0.0f, 0.0f, 0.0f, 0x1.e2dc1ap-88f, 0.0f, 0x1.360ea4p-54f,
     0x1.619e3p-2f, 0x1.e0987ap-53f, 0.0f, 0.0f, 0x1.11cdaep-114f, 0.0f, 0.0f,
     0x1.8b4e78p-78f, 0x1.11d97p-6f, 0x1.2f481ep-41f, 0x1.9a55bcp-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc288ep-61f, 0x1.a1abdcp-48f, 0.0f, 0.0f,
     0x1.e790ccp-77f, 0x1.f6b5a8p-46f, 0.0f, 0.0f, 0.0f, 0x1.d1d3acp-30f,
     0x1.969d88p-60f, 0x1.e00b52p-103f, 0.0f, 0.0f, 0x1.c74b28p-9f, 0.0f,
     0x1.b7601ap-126f, 0x1.ea7b66p-75f, 0x1.f6225ep-116f, 0.0f, 0.0f,
     0x1.f77122p-115f, 0x1.e31c68p-64f, 0x1.29ef06p-26f, 0x1.1a5b08p-85f, 0.0f,
     0x1.550526p-51f, 0x1.d910fp-42f, 0.0f, 0x1.a4a7d2p-10f, 0x1.098008p-4f, 0.0f,
     0x1.d8283p-20f, 0x1.fcc8fp-96f, 0x1.5902b2p-10f, 0.0f, 0x1.c097fep-25f, 0.0f,
     0.0f, 0.0f, 0x1.309a1cp-89f, 0.0f, 0.0f, 0x1.8b7e22p-32f, 0x1.cc8c7p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c722fcp-90f, 0x1.e8844cp-12f, 0x1.4cab7p-119f,
     0x1.262fa4p-117f, 0x1.27edd2p-64f, 0.0f, 0x1.dd5cap-88f, 0x1.1c8a14p-31f, 0.0f,
     0x1.fc85a4p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b44324p-93f, 0.0f, 0.0f,
     0x1.4f9a58p-88f, 0.0f, 0.0f, 0x1.c7f6a2p-35f, 0x1.045a54p-119f, 0.0f,
     0x1.2a5c08p-88f, 0.0f, 0x1.48c678p-64f, 0x1.63b154p-22f, 0x1.651516p-61f,
     0x1.9453fcp-124f, 0x1.e3e37cp-98f, 0x1.f6cd84p-49f, 0x1.009d84p-67f, 0.0f,
     0x1.67cfb6p-84f, 0.0f, 0x1.860b9ep-20f, 0.0f, 0.0f, 0x1.8defeep-54f,
     0x1.d138f6p-70f, 0.0f, 0.0f, 0.0f, 0x1.3256cp-86f, 0.0f, 0x1.ac68dcp-118f,
     0x1.81aebep-123f, 0.0f, 0x1.5cc9bp-3f, 0x1.34bf6cp-25f, 0x1.552a3p-58f,
     0x1.bcb366p-33f, 0.0f, 0.0f, 0x1.140a3ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d262b4p-67f, 0x1.4143acp-37f, 0.0f, 0.0f, 0.0f, 0x1.efbe26p-61f, 0.0f,
     0x1.eb2692p-46f, 0.0f, 0.0f, 0.0f, 0x1.92d9c2p-17f, 0x1.26ade8p-60f,
     0x1.4b07ap-88f, 0.0f, 0x1.35c844p-6f, 0.0f, 0x1.90423p-24f, 0.0f, 0.0f,
     0x1.2649e2p-107f, 0x1.424768p-7f, 0.0f, 0.0f, 0x1.4b0abap-112f, 0x1.d4f9a2p-63f,
     0x1.6bebcep-61f, 0x1.de38c4p-16f, 0.0f, 0x1.731206p-16f, 0x1.a39cbep-117f, 0.0f,
     0.0f, 0x1.4cc248p-41f, 0.0f, 0.0f, 0.0f, 0x1.d22d86p-31f, 0.0f, 0.0f,
     0x1.4ae47p-13f, 0x1.76b204p-125f, 0x1.9093c4p-120f, 0.0f, 0x1.49ad7cp-24f, 0.0f,
     0x1.f1d63p-63f, 0x1.5dc828p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.954166p-10f, 0.0f,
     0x1.09924p-77f, 0x1.fe7538p-90f, 0x1.8713ecp-16f, 0.0f, 0.0f, 0.0f,
     0x1.cf16eep-5f, 0.0f, 0x1.1e8e84p-17f, 0.0f, 0.0f, 0.0f, 0x1.599e4p-86f,
     0x1.0a547ap-22f, 0.0f, 0.0f, 0x1.069eb6p-112f, 0x1.a475cp-40f, 0.0f,
     0x1.126c16p-116f, 0x1.31fe48p-37f, 0x1.f1f67p-82f, 0x1.ce97b4p-88f, 0.0f,
     0x1.078c04p-17f, 0.0f, 0.0f, 0.0f, 0x1.a81aaep-64f, 0x1.80f13cp-100f,
     0x1.3fdb08p-86f, 0x1.fefe76p-55f, 0x1.214686p-64f, 0x1.9b6328p-91f,
     0x1.cb686p-83f, 0.0f, 0x1.c6ff6ap-6f, 0x1.3f2b28p-117f, 0.0f, 0x1.5ddf18p-42f,
     0.0f, 0x1.06c39ap-29f, 0.0f, 0.0f, 0x1.c1e01p-52f, 0.0f, 0x1.91e434p-53f, 0.0f,
     0x1.aa6976p-103f, 0x1.978afp-5f, 0.0f, 0x1.b24f2ap-74f, 0.0f, 0x1.c73a32p-98f,
     0.0f, 0x1.408982p-79f, 0.0f, 0.0f, 0.0f, 0x1.cd1804p-54f, 0x1.9383fp-76f, 0.0f,
     0.0f, 0x1.6c6d02p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07e75cp-49f, 0.0f,
     0x1.3da76ap-57f, 0x1.dc959ap-68f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.cc7d7ap-48f, 0.0f, 0.0f, 0.0f, 0x1.a2981ep-57f, 0.0f, 0x1.3f0d56p-82f, 0.0f,
     0x1.596e52p-47f, 0x1.c0acbap-94f, 0x1.00566cp-38f, 0x1.e9d018p-53f,
     0x1.c21e0cp-52f, 0.0f, 0x1.2a0b9cp-60f, 0.0f, 0.0f, 0x1.9949acp-17f,
     0x1.c5cbc4p-97f, 0.0f, 0.0f, 0x1.878696p-72f, 0.0f, 0x1.fc17c6p-89f,
     0x1.66c9b8p-14f, 0x1.44d75ep-50f, 0.0f, 0.0f, 0.0f, 0x1.a55316p-78f,
     0x1.2101f8p-16f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.ce734ep-63f, 0x1.415f82p-119f,
     0x1.8e59b6p-32f, 0x1.69375cp-83f, 0x1.ce1ca6p-43f, 0.0f, 0x1.4b0f9cp-47f,
     0x1.b70c0ap-101f, 0.0f, 0x1.fb3e6p-11f, 0x1.3b0f9cp-126f, 0x1.e4a652p-38f, 0.0f,
     0x1.736a4p-62f, 0.0f, 0.0f, 0x1.fcf412p-58f, 0.0f, 0.0f, 0x1.9ba23ep-67f,
     0x1.7a91ccp-49f, 0x1.86ca26p-75f, 0.0f, 0x1.b53266p-83f, 0x1.d13564p-115f, 0.0f,
     0.0f, 0x1.3f4f42p-40f, 0x1.7483c8p-82f, 0x1.aa0e68p-31f, 0x1.bcf14p-115f, 0.0f,
     0.0f, 0.0f, 0x1.274db2p-20f, 0.0f, 0x1.6da3bp-82f, 0.0f, 0x1.b6c3bep-15f,
     0x1.7cfa3ap-98f, 0.0f, 0.0f, 0x1.f3b184p-33f, 0.0f, 0x1.ae171cp-44f,
     0x1.e2b7fcp-69f, 0.0f, 0x1.92c3cap-37f, 0.0f, 0x1.9be4d8p-77f, 0x1.96906ap-79f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b3f48p-10f, 0.0f, 0x1.e59ef4p-59f, 0x1.a3144cp-11f,
     0.0f, 0.0f, 0.0f, 0x1.e2b708p-46f, 0x1.8ec104p-66f, 0.0f, 0.0f, 0x1.ee0cdep-23f,
     0x1.91a028p-58f, 0.0f, 0x1.d7aa7ep-29f, 0x1.40c8a6p-19f, 0x1.d8fb12p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c822fp-113f, 0.0f, 0x1.0f78dap-112f, 0.0f, 0.0f,
     0x1.d0961ap-56f, 0x1.7b2652p-117f, 0.0f, 0.0f, 0.0f, 0x1.464c62p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dc916ep-79f, 0.0f, 0x1.4bc3fp-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be671cp-119f, 0x1.ae3b62p-46f, 0.0f, 0x1.40cdfap-37f, 0.0f, 0.0f,
     0x1.b9bcf6p-32f, 0.0f, 0x1p0f, 0.0f, 0x1.3d7bdcp-28f, 0x1.079222p-19f,
     0x1.982d64p-68f, 0x1.eb4b0ep-118f, 0x1.ac1adp-99f, 0x1.adc4fep-58f, 0.0f,
     0x1.357fbap-98f, 0x1.7e653ep-108f, 0.0f, 0x1.b07dfp-50f, 0x1.6d40fap-31f, 0.0f,
     0.0f, 0x1.76cd72p-60f, 0.0f, 0.0f, 0x1.1d2638p-86f, 0.0f, 0x1.532be2p-105f, 0.0f,
     0.0f, 0.0f, 0x1.26c078p-125f, 0.0f, 0x1.048bdcp-28f, 0.0f, 0.0f, 0x1.5862d6p-76f,
     0.0f, 0x1.1dc6dap-109f, 0x1.d7ffcp-73f, 0x1.9d0b6ap-42f, 0x1.1d631p-62f,
     0x1.c413ap-118f, 0.0f, 0.0f, 0x1.a4649cp-19f, 0.0f, 0x1.95ca58p-62f,
     0x1.c2ecap-48f, 0x1.2e778cp-108f, 0.0f, 0.0f, 0x1.24d9e6p-122f, 0x1.ce4b0cp-47f,
     0x1.4262b4p-102f, 0x1.a37734p-102f, 0.0f, 0.0f, 0x1.56a74cp-19f, 0.0f,
     0x1.e56692p-116f, 0x1.54d022p-108f, 0x1.759b4ep-126f, 0x1.91438p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a7cd68p-122f, 0x1.1c90e2p-68f, 0x1.f881e4p-8f, 0x1.d1cd2p-124f,
     0x1.2b099cp-57f, 0.0f, 0x1.142212p-3f, 0.0f, 0x1.df2066p-14f, 0x1.d5105ap-49f,
     0x1.9f9234p-90f, 0x1.7d3554p-20f, 0.0f, 0x1.cb106ep-83f, 0x1.b2eeeep-65f,
     0x1.46bbfap-48f, 0.0f, 0x1.0127e4p-76f, 0x1.9f3f7ep-100f, 0.0f, 0.0f, 0.0f,
     0x1.2f41ecp-19f, 0x1.3b1698p-84f, 0.0f, 0x1.84e328p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c9343cp-78f, 0.0f, 0x1.dfeedp-106f, 0.0f, 0x1.df8d74p-112f, 0.0f,
     0x1.98ef36p-62f, 0.0f, 0x1.e4d996p-117f, 0.0f, 0x1.6f2c68p-116f, 0.0f, 0.0f,
     0.0f, 0x1.914478p-106f, 0.0f, 0x1.e29354p-72f, 0x1.e3d074p-77f, 0x1.2cf69ap-7f,
     0.0f, 0x1.0f9f58p-53f, 0x1.2349bp-122f, 0x1.e2fca2p-44f, 0x1p0f, 0.0f, 0.0f,
     0x1.e4c13p-125f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.ff6a56p-60f, 0.0f, 0.0f, 0.0f, 0x1.61d524p-123f, 0.0f,
     0x1.a22d46p-54f, 0.0f, 0.0f, 0x1.263a24p-79f, 0x1.05c6e2p-82f, 0x1.d02534p-113f,
     0.0f, 0.0f, 0.0f, 0x1.b9770ap-45f, 0x1.7bb462p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a92dcep-71f, 0x1.a4b51ap-12f, 0.0f, 0x1.73aa44p-100f, 0x1.7d2f4p-83f, 0.0f,
     0x1.a8ea4ap-46f, 0.0f, 0x1.c49a5cp-20f, 0.0f, 0.0f, 0x1.28194cp-8f,
     0x1.7f51b8p-13f, 0.0f, 0x1.9695eep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8645cp-1f,
     0x1.8cb77ap-29f, 0.0f, 0.0f, 0x1.7c082ap-125f, 0x1.ed7bbp-55f, 0x1.9767ep-105f,
     0.0f, 0.0f, 0x1.75b6e2p-22f, 0.0f, 0x1.de7edp-25f, 0x1.3b54b4p-77f,
     0x1.5acbcap-12f, 0x1.e7909ap-121f, 0.0f, 0x1.424bf4p-91f, 0x1.e78466p-90f, 0.0f,
     0.0f, 0x1.7e762ap-89f, 0.0f, 0x1.fe8b0ep-23f, 0.0f, 0.0f, 0x1.a3f3f8p-102f, 0.0f,
     0.0f, 0.0f, 0x1.7baad2p-41f, 0x1.7439c2p-4f, 0.0f, 0x1.6053bap-61f,
     0x1.cd7e2ep-16f, 0.0f, 0x1.5cc7bep-36f, 0.0f, 0.0f, 0x1.759dccp-72f,
     0x1.a44ba8p-13f, 0.0f, 0x1.0b087p-21f, 0.0f, 0.0f, 0x1.29fde8p-31f,
     0x1.e09c12p-53f, 0.0f, 0.0f, 0.0f, 0x1.33d48ep-44f, 0.0f, 0.0f, 0x1.e7e2d6p-98f,
     0x1.6aa95ap-32f, 0.0f, 0.0f, 0x1.3e974ep-7f, 0.0f, 0.0f, 0x1.65cd96p-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e189b2p-42f, 0x1.d2666p-116f, 0.0f, 0.0f,
     0x1.3fd1a4p-94f, 0.0f, 0.0f, 0x1.ae4fbap-78f, 0.0f, 0x1.336af8p-23f, 0.0f, 0.0f,
     0.0f, 0x1.782de4p-54f, 0x1.cdedfep-30f, 0x1.fa5794p-111f, 0.0f, 0.0f,
     0x1.31a6d2p-10f, 0.0f, 0.0f, 0x1.ff9948p-38f, 0x1.204664p-124f, 0.0f,
     0x1.9cabcep-84f, 0x1.681af4p-126f, 0x1.14861cp-125f, 0.0f, 0x1.d2a15p-3f, 0.0f,
     0.0f, 0x1.568454p-96f, 0.0f, 0x1p0f, 0.0f, 0x1.6b1ap-36f, 0x1.4c9b3p-60f, 0.0f,
     0x1.9312a6p-83f, 0.0f, 0x1.bf077cp-63f, 0x1.001bfcp-68f, 0x1.41377p-25f, 0.0f,
     0.0f, 0x1.6c7a8p-20f, 0x1.99160cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bab2ap-35f, 0x1.dd767cp-39f, 0x1.902a8p-71f, 0.0f, 0x1.25d66ap-104f,
     0x1.e9718cp-32f, 0x1.6fece8p-66f, 0x1.1d1be6p-25f, 0.0f, 0x1.e230a8p-22f,
     0x1.289998p-50f, 0.0f, 0x1.40a60ap-95f, 0x1.fc2fb4p-43f, 0.0f, 0.0f,
     0x1.4a8636p-74f, 0.0f, 0.0f, 0.0f, 0x1.26ee44p-60f, 0x1.b7b84cp-27f,
     0x1.b7ee28p-52f, 0.0f, 0.0f, 0x1.e31d0ap-79f, 0.0f, 0.0f, 0x1.10d5a6p-106f, 0.0f,
     0x1.f95758p-10f, 0x1.630862p-106f, 0x1.e4a226p-74f, 0x1.bcb004p-92f, 0.0f, 0.0f,
     0x1.a25ab8p-18f, 0x1.362074p-8f, 0.0f, 0x1.b8901cp-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60300ep-16f, 0.0f, 0.0f, 0.0f, 0x1.d6e2e4p-122f, 0x1.447542p-79f,
     0x1.61a0e6p-86f, 0x1.0b2818p-24f, 0x1.f2c78ap-116f, 0x1.dec20ap-26f, 0.0f,
     0x1.af77p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c1edep-7f, 0.0f, 0x1.34db18p-5f,
     0x1.e374e8p-84f, 0.0f, 0x1.ab40a8p-67f, 0.0f, 0.0f, 0x1.4bd0a2p-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bcfd46p-42f, 0.0f, 0x1.d75966p-12f, 0x1.a1d322p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94761p-41f, 0x1.e5e9c8p-37f,
     0x1.da187p-111f, 0x1.76fe58p-19f, 0.0f, 0.0f, 0x1.1d0172p-40f, 0x1.106eep-53f,
     0x1.1c2b48p-43f, 0x1.70d0f2p-22f, 0x1.ba2f4cp-33f, 0x1.af2ffcp-34f,
     0x1.a93afp-14f, 0x1.20f6f4p-50f, 0x1.eac7b2p-107f, 0.0f, 0.0f, 0x1.817d38p-10f,
     0x1.329458p-87f, 0.0f, 0.0f, 0x1.d3a0e4p-85f, 0.0f, 0.0f, 0.0f, 0x1.113b68p-124f,
     0.0f, 0x1.ac55d4p-40f, 0.0f, 0x1.72f9bep-62f, 0x1.ec39dap-75f, 0x1.7392cep-117f,
     0x1.4543c4p-19f, 0.0f, 0x1.c57c46p-29f, 0x1.e748acp-106f, 0.0f, 0x1.40e336p-108f,
     0.0f, 0.0f, 0x1.4f0e2cp-73f, 0x1.fd7036p-54f, 0.0f, 0x1.568732p-28f,
     0x1.466a28p-108f, 0x1.f20802p-95f, 0.0f, 0x1.9c4502p-114f, 0.0f, 0.0f,
     0x1.a9d738p-21f, 0x1.c04626p-70f, 0x1.f4964ep-92f, 0.0f, 0x1.064004p-30f, 0.0f,
     0.0f, 0.0f, 0x1.22c9b2p-5f, 0x1.5230d8p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bd078ap-28f, 0.0f, 0x1.e6441ap-77f, 0.0f, 0x1.ae431cp-37f, 0x1.c6621p-45f,
     0x1.9a9f42p-21f, 0.0f, 0x1.561c56p-37f, 0.0f, 0x1.68fbp-87f, 0x1.2cab2p-38f,
     0.0f, 0x1.54851ep-35f, 0.0f, 0x1.d214cep-85f, 0x1.4dae38p-112f, 0x1.243144p-105f,
     0.0f, 0x1.93b552p-59f, 0x1.249372p-49f, 0x1.719304p-81f, 0x1.1f38fap-57f,
     0x1.31e5fap-98f, 0x1.e17d18p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1dd5ap-100f,
     0x1.ebcb76p-64f, 0.0f, 0x1.e6337p-13f, 0x1.97f718p-84f, 0x1.43e73p-126f,
     0x1.57b3p-13f, 0x1.234294p-60f, 0.0f, 0.0f, 0.0f, 0x1.324e2ap-61f,
     0x1.96e998p-118f, 0x1.d05a14p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.413acep-65f,
     0x1.974994p-52f, 0.0f, 0.0f, 0x1.a3e3bp-4f, 0.0f, 0.0f, 0x1.7c8f92p-31f,
     0x1.ffc6b4p-80f, 0x1.c7ab5ap-15f, 0x1.428468p-65f, 0x1.634d0cp-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.43cb2ep-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.33c59cp-107f, 0.0f, 0x1.19d866p-5f, 0.0f, 0x1.40b8c4p-63f, 0.0f,
     0x1.7770b6p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.590c82p-32f, 0x1.7953dap-73f,
     0.0f, 0x1.8531dp-17f, 0x1.9d9892p-62f, 0x1.b09cf8p-43f, 0.0f, 0x1.76e39ap-29f,
     0x1.a63718p-3f, 0.0f, 0x1.eafe3cp-93f, 0x1.a67fdcp-116f, 0.0f, 0x1.4357dcp-105f,
     0.0f, 0x1.0c5fcep-121f, 0.0f, 0x1.fa22dap-102f, 0x1.766de2p-45f, 0x1.a58668p-12f,
     0x1.458f28p-81f, 0.0f, 0x1.fe8bb4p-46f, 0x1.71f0d8p-63f, 0.0f, 0.0f,
     0x1.252bccp-60f, 0x1.637d24p-85f, 0x1.da4d14p-81f, 0x1.91db4ep-115f,
     0x1.053ffap-58f, 0.0f, 0x1.c11e0cp-43f, 0.0f, 0x1.e4f906p-17f, 0x1.9c03b8p-48f,
     0.0f, 0x1.c0341p-18f, 0x1.18ae7p-83f, 0x1.cdedd2p-50f, 0x1.6e4f92p-43f, 0.0f,
     0x1.ab775ap-81f, 0x1.9c6cd6p-72f, 0x1.565534p-111f, 0.0f, 0x1.f469cap-16f,
     0x1.f3bac8p-62f, 0.0f, 0.0f, 0.0f, 0x1.98fa02p-112f, 0.0f, 0x1.33a03p-52f,
     0x1.9d91bep-18f, 0.0f, 0x1.17d5a2p-77f, 0x1.068c4cp-4f, 0.0f, 0.0f,
     0x1.b3242cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1752fap-80f,
     0x1.d8b47cp-118f, 0x1.2c884p-82f, 0x1.596e42p-11f, 0.0f, 0.0f, 0x1.7cffdap-11f,
     0.0f, 0x1.5d8098p-31f, 0x1.2569aep-124f, 0x1.1b089cp-47f, 0x1.3a31dap-2f,
     0x1.36644p-95f, 0x1.475c9ap-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e0618p-110f,
     0.0f, 0.0f, 0x1.3beb98p-76f, 0.0f, 0.0f, 0x1.84d0a8p-10f, 0x1.d09992p-46f, 0.0f,
     0.0f, 0x1.023a26p-74f, 0.0f, 0x1.9a9da8p-111f, 0x1.f846dap-15f, 0x1.6d883cp-81f,
     0x1.0c17dap-86f, 0x1.7634aep-78f, 0x1.af2e3ep-71f, 0x1.5fa982p-63f,
     0x1.ad5fa4p-9f, 0x1.b200acp-53f, 0.0f, 0x1.545616p-91f, 0x1.7ca7a6p-20f, 0.0f,
     0x1.02a928p-118f, 0x1.98a7f8p-104f, 0.0f, 0x1.5369aep-24f, 0x1.661a5ap-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6d8e52p-46f, 0.0f, 0.0f, 0x1.c02478p-7f, 0x1.3d7478p-19f,
     0.0f, 0.0f, 0x1.dbd08p-24f, 0x1.787246p-82f, 0x1.c262c4p-38f, 0.0f,
     0x1.01894cp-35f, 0x1.0a327ep-19f, 0x1.0f4b66p-95f, 0.0f, 0x1.506b84p-112f,
     0x1.b236e2p-2f, 0x1.7ae33ap-103f, 0x1.47778cp-61f, 0x1.aba5e8p-26f,
     0x1.e68cfcp-20f, 0x1.d19bbap-21f, 0x1.b928a8p-24f, 0.0f, 0x1.49f3b4p-35f,
     0x1.e5477p-90f, 0x1.aa6cap-26f, 0.0f, 0x1.013808p-16f, 0x1.322ep-119f, 0.0f,
     0.0f, 0.0f, 0x1.625924p-10f, 0.0f, 0.0f, 0x1.fadf2ap-120f, 0x1.9876b2p-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ca742p-43f, 0x1.59413cp-16f, 0x1.be0bap-59f,
     0x1.05af5ap-62f, 0x1.98978ap-17f, 0x1.29eed2p-98f, 0x1.820046p-121f, 0.0f,
     0x1.4e045p-8f, 0.0f, 0x1.e02e9p-63f, 0x1.e26264p-78f, 0x1.fd382p-19f,
     0x1.0df46cp-75f, 0.0f, 0x1.095096p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3bf84p-70f,
     0.0f, 0.0f, 0.0f, 0x1.4e0b44p-76f, 0.0f, 0x1.6be8cep-92f, 0.0f, 0.0f,
     0x1.301316p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3c2f4p-122f,
     0x1.738434p-120f, 0.0f, 0x1.7cdd1p-6f, 0x1.77d374p-69f, 0.0f, 0x1.813ee2p-99f,
     0.0f, 0.0f, 0x1.2ce89ap-89f, 0x1.bf996ap-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.749c2cp-88f, 0.0f, 0.0f, 0x1.fb43a2p-50f, 0.0f, 0x1.2a21b6p-94f,
     0x1.870098p-56f, 0x1.71d806p-66f, 0x1.ad80dap-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5158eap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8627ap-78f, 0.0f, 0x1.58836ap-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.113542p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dd4e78p-50f, 0.0f, 0x1.fcaf66p-48f, 0.0f, 0x1.b2bb78p-65f, 0.0f, 0.0f,
     0x1.d9176cp-108f, 0.0f, 0.0f, 0x1.9f8138p-118f, 0x1.9f53fap-14f, 0x1.38b2fap-72f,
     0x1.838446p-53f, 0.0f, 0x1.629bcp-119f, 0.0f, 0x1.eee8c2p-79f, 0.0f, 0.0f, 0.0f,
     0x1.3d7158p-59f, 0.0f, 0.0f, 0x1.fbfdfap-61f, 0x1.0d4016p-25f, 0.0f,
     0x1.4497bep-80f, 0x1.9bd962p-16f, 0.0f, 0x1.6216e8p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0963b2p-101f, 0.0f, 0.0f, 0x1.cef4dp-91f, 0x1.6c9e42p-113f, 0x1.f5cfd4p-82f,
     0.0f, 0.0f, 0x1.d4ba84p-65f, 0x1.0939ccp-102f, 0.0f, 0.0f, 0x1.09191ap-76f, 0.0f,
     0x1.f47a44p-44f, 0.0f, 0x1.f6e426p-80f, 0x1.e2d31p-82f, 0.0f, 0x1.d20ea4p-95f,
     0x1.c9f826p-68f, 0.0f, 0x1.b1496ep-83f, 0.0f, 0.0f, 0x1.62e38ap-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.12eb0cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f42a7ep-61f,
     0.0f, 0x1.62a3d4p-83f, 0.0f, 0x1.0ffaf2p-38f, 0x1.640832p-56f, 0x1.cc3352p-48f,
     0.0f, 0.0f, 0x1.adfdep-55f, 0x1.f273d2p-107f, 0.0f, 0x1.693e14p-114f, 0.0f,
     0x1.a17948p-122f, 0.0f, 0x1.ca399ap-103f, 0.0f, 0x1.dc483cp-92f, 0.0f,
     0x1.389698p-30f, 0.0f, 0x1.4db596p-125f, 0.0f, 0.0f, 0.0f, 0x1.5a0e1ep-52f, 0.0f,
     0.0f, 0.0f, 0x1.6573b8p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bbe62p-104f,
     0x1.5ddad2p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47c248p-106f, 0.0f,
     0x1.91fbb8p-113f, 0x1.33dacp-50f, 0x1.3c196p-8f, 0x1.137c38p-98f, 0x1.fd014p-62f,
     0.0f, 0x1.3a1a78p-50f, 0x1.786eacp-75f, 0.0f, 0.0f, 0.0f, 0x1.23803cp-124f, 0.0f,
     0x1.e749p-45f, 0x1.6b037ap-59f, 0x1.7476f2p-31f, 0.0f, 0x1.bcc1d2p-36f,
     0x1.f36c66p-74f, 0.0f, 0.0f, 0x1.e17cecp-47f, 0x1.ea71fep-47f, 0.0f, 0.0f,
     0x1.b4af3p-32f, 0.0f, 0x1.5770eep-88f, 0.0f, 0x1.a33128p-99f, 0.0f, 0.0f, 0.0f,
     0x1.40814ep-64f, 0x1.2e54c8p-92f, 0x1.18551ap-30f, 0x1.078ecep-4f,
     0x1.0027b2p-1f, 0x1.de37d6p-6f, 0x1.14fbaap-123f, 0x1.f5637ap-38f,
     0x1.e69898p-52f, 0x1.73c132p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e92c8p-61f,
     0x1.53bd18p-86f, 0.0f, 0x1.9f09d2p-61f, 0x1.8fa4dp-43f, 0.0f, 0.0f, 0.0f,
     0x1.da43e8p-11f, 0.0f, 0x1.9632acp-36f, 0.0f, 0.0f, 0x1.a839cp-126f,
     0x1.f0e036p-105f, 0.0f, 0.0f, 0x1.6a3f06p-71f, 0.0f, 0.0f, 0x1.a4609cp-119f,
     0.0f, 0.0f, 0x1.35bb24p-67f, 0.0f, 0.0f, 0x1.4dbac4p-88f, 0.0f, 0x1.1d003cp-85f,
     0x1.5f222p-53f, 0.0f, 0.0f, 0.0f, 0x1.f515dp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.794e1ep-70f, 0x1.25c2e4p-91f, 0x1.50e466p-20f, 0.0f, 0.0f, 0x1.40cbbp-18f,
     0x1.e53d5ep-76f, 0.0f, 0.0f, 0x1.4fae3ep-97f, 0.0f, 0x1.69a3a2p-76f,
     0x1.430a2p-61f, 0x1.e4a5p-30f, 0.0f, 0x1.a20aa2p-49f, 0x1.ebfd5p-49f, 0.0f,
     0x1.be21b8p-104f, 0.0f, 0x1.18aec2p-109f, 0x1.e7bf28p-9f, 0x1.705f68p-100f, 0.0f,
     0.0f, 0x1.9733d2p-117f, 0x1.e2273ap-90f, 0x1.5275dap-5f, 0x1.942b32p-6f,
     0x1.8c19acp-93f, 0x1.44dfd8p-88f, 0.0f, 0.0f, 0.0f, 0x1.b29baap-22f,
     0x1.088b5ap-15f, 0x1.501a8ep-93f, 0.0f, 0x1.547514p-91f, 0x1.83fbcep-113f, 0.0f,
     0.0f, 0x1.8c2eb4p-120f, 0x1.d3c7bcp-123f, 0.0f, 0.0f, 0x1.fdb37p-21f, 0.0f, 0.0f,
     0x1.d8abf2p-36f, 0x1.a1cb4ap-40f, 0x1.0715b2p-115f, 0x1.2606bep-13f,
     0x1.e7ae5p-99f, 0.0f, 0.0f, 0x1.2166fap-91f, 0.0f, 0.0f, 0x1.25c0f4p-115f, 0.0f,
     0x1.5dc8e2p-55f, 0.0f, 0x1.fccdap-114f, 0x1.9a516ep-118f, 0x1.f9da84p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1a726p-61f, 0x1.e65c36p-74f, 0x1.d455a8p-88f,
     0x1.3b3a98p-56f, 0x1.e25c8ap-64f, 0.0f, 0.0f, 0.0f, 0x1.a3667p-64f, 0.0f,
     0x1.065544p-74f, 0.0f, 0x1.c285ccp-1f, 0x1.1ee2eap-123f, 0x1.6af09p-6f,
     0x1.5e6c7ap-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ee4p-36f, 0.0f, 0.0f,
     0x1.6ac568p-95f, 0x1.5d9eecp-12f, 0.0f, 0x1.f6ce6ep-80f, 0x1.da6cf4p-55f, 0.0f,
     0x1.89116p-117f, 0.0f, 0x1.467922p-98f, 0x1.4342b4p-41f, 0.0f, 0x1.1837c6p-119f,
     0x1.01ebeap-24f, 0.0f, 0x1.b0e12ap-53f, 0.0f, 0x1.ac09ecp-108f, 0x1.95dadep-3f,
     0.0f, 0.0f, 0.0f, 0x1.2d138ap-125f, 0x1.57238ap-19f, 0.0f, 0x1.e05018p-52f, 0.0f,
     0x1.f8200cp-78f, 0x1.25f2bap-8f, 0.0f, 0.0f, 0x1.3c25ep-121f, 0x1.cfdc76p-38f,
     0.0f, 0.0f, 0x1.0ddf7cp-1f, 0.0f, 0x1.03d6ap-16f, 0.0f, 0x1.e9f2b4p-83f,
     0x1.ca99f6p-80f, 0x1.520f5p-123f, 0.0f, 0.0f, 0x1.2abbbap-67f, 0.0f,
     0x1.83cbd6p-40f, 0.0f, 0.0f, 0x1.e5a392p-24f, 0.0f, 0x1.2a80e4p-47f, 0.0f,
     0x1.91e38p-117f, 0.0f, 0.0f, 0x1.436c74p-4f, 0x1.031c68p-43f, 0x1.62bbbcp-87f,
     0x1.7e4052p-24f, 0.0f, 0.0f, 0x1.d7ddecp-30f, 0.0f, 0.0f, 0x1.c9cf96p-31f,
     0x1.23f786p-84f, 0.0f, 0.0f
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
            tmp2 = Sleef_remainderf4_kvx(tmp0, tmp1);
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
    printf("Sleef_remainderf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_remainderf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
