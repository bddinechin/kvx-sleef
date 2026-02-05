/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpf1_purecfma.c --function \
 *     Sleef_frfrexpf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.5a9692p-91f, 0.0f, 0.0f, 0.0f, 0x1.3d97bp-60f, 0.0f, 0.0f, 0.0f,
     0x1.5979dp-82f, 0x1.4c13cp-123f, 0.0f, 0.0f, 0.0f, 0x1.ee27a2p-125f, 0.0f,
     0x1.734a5p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ffbe4p-25f, 0x1.7d19dcp-3f,
     0x1.d9c2e2p-54f, 0.0f, 0x1.5656c4p-11f, 0x1.9c09b4p-21f, 0.0f, 0.0f,
     0x1.4aa34ap-97f, 0.0f, 0x1.174e24p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9157a4p-42f, 0x1.d9d74ap-125f, 0.0f, 0x1.726824p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5afa02p-125f, 0.0f, 0x1.e92902p-38f, 0.0f, 0x1.ba40aep-10f,
     0x1.65ae9cp-115f, 0x1.ecc452p-2f, 0.0f, 0.0f, 0x1.5067ep-107f, 0x1.a90666p-23f,
     0.0f, 0x1.625c54p-43f, 0x1.1a855p-121f, 0x1.7341fep-115f, 0.0f, 0x1.fb36e2p-107f,
     0.0f, 0.0f, 0x1.c6b362p-45f, 0x1.5fb3bcp-56f, 0.0f, 0x1.110d7ap-108f, 0.0f,
     0x1.80455ap-96f, 0x1.600714p-102f, 0x1.34edf8p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.163d76p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4077e2p-44f, 0x1.bf9246p-17f,
     0.0f, 0x1.665a1p-63f, 0.0f, 0x1.18a9ep-85f, 0.0f, 0x1.fd857p-35f, 0.0f,
     0x1.53b604p-97f, 0.0f, 0x1.6823cp-81f, 0.0f, 0.0f, 0x1.4e32aap-89f, 0.0f, 0.0f,
     0.0f, 0x1.7d5c02p-70f, 0.0f, 0.0f, 0.0f, 0x1.41b17ep-43f, 0.0f, 0x1.c9a65ep-62f,
     0x1.9ade54p-92f, 0x1.e4f53cp-102f, 0x1.6d9a2ap-49f, 0x1.aad85cp-34f,
     0x1.7a7c9p-39f, 0x1.013ee8p-52f, 0x1.1e5f5ep-93f, 0.0f, 0.0f, 0x1.741ebp-60f,
     0x1.8cc5f2p-118f, 0x1.df0334p-60f, 0x1.3e9ca2p-108f, 0x1.85c16p-34f,
     0x1.092132p-1f, 0x1.ff9558p-94f, 0x1.b0e374p-23f, 0x1.b51f76p-3f,
     0x1.1e6714p-49f, 0x1.34d47ep-119f, 0x1.5384d6p-76f, 0.0f, 0.0f, 0.0f,
     0x1.f8d9e6p-68f, 0x1.79b8b6p-73f, 0.0f, 0.0f, 0.0f, 0x1.ff82cp-37f,
     0x1.5ae03p-58f, 0.0f, 0x1.4591bp-11f, 0x1.b1cd02p-27f, 0.0f, 0.0f, 0.0f,
     0x1.72abc6p-81f, 0x1.937db2p-109f, 0x1.1bb9d6p-35f, 0.0f, 0.0f, 0x1.55c8ep-16f,
     0x1.8acdfep-7f, 0x1.97191cp-30f, 0.0f, 0x1.e7e6fp-14f, 0x1.7bdc64p-77f,
     0x1.2e507cp-93f, 0.0f, 0.0f, 0.0f, 0x1.9531ecp-123f, 0x1.eb4482p-91f, 0.0f, 0.0f,
     0.0f, 0x1.ba2e9p-22f, 0.0f, 0.0f, 0x1.acdd0ap-8f, 0x1.a08becp-86f,
     0x1.ae5534p-51f, 0x1.e24438p-68f, 0x1.e6f2e8p-24f, 0x1.99ec84p-41f,
     0x1.bbe96p-2f, 0x1.4708f2p-119f, 0x1.e112cep-24f, 0.0f, 0x1.838928p-12f, 0.0f,
     0.0f, 0.0f, 0x1.23c818p-17f, 0.0f, 0.0f, 0x1.2dca6p-87f, 0x1.3b4cc8p-19f,
     0x1.99c854p-3f, 0x1.a2bb64p-72f, 0.0f, 0x1.b8df84p-89f, 0.0f, 0x1.c82994p-24f,
     0.0f, 0x1.7f2cc2p-4f, 0.0f, 0x1.968bdp-53f, 0x1.f03984p-38f, 0x1.644048p-21f,
     0.0f, 0.0f, 0x1.e3fa78p-118f, 0x1.fafedcp-117f, 0.0f, 0x1.a1a788p-28f,
     0x1.072acp-61f, 0.0f, 0x1.95ab1cp-16f, 0x1.3fc746p-12f, 0x1.60ce58p-24f,
     0x1.40db4ep-54f, 0.0f, 0.0f, 0x1.1f170ap-35f, 0.0f, 0.0f, 0.0f, 0x1.572e34p-125f,
     0x1.6a8f76p-118f, 0.0f, 0x1.491834p-94f, 0.0f, 0.0f, 0x1.674782p-93f, 0.0f,
     0x1.8f09fp-43f, 0x1.ad1edap-93f, 0x1.7490e4p-62f, 0x1.01966ep-125f,
     0x1.58e08ap-111f, 0x1.2548a4p-109f, 0.0f, 0x1.0a6c36p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c2237cp-39f, 0.0f, 0x1.3bf212p-99f, 0.0f, 0x1.98bd92p-6f, 0.0f, 0.0f,
     0x1.26320cp-65f, 0x1.0a01c4p-39f, 0x1.24c8dep-6f, 0.0f, 0x1.7a398ep-103f,
     0x1.11eaep-11f, 0.0f, 0x1.6ef8fcp-107f, 0.0f, 0.0f, 0x1.52b642p-1f,
     0x1.027386p-84f, 0x1.5e5244p-69f, 0.0f, 0.0f, 0x1.5129p-97f, 0.0f,
     0x1.98bfd2p-53f, 0.0f, 0.0f, 0.0f, 0x1.04b398p-110f, 0x1.82cc86p-117f,
     0x1.28daf8p-75f, 0.0f, 0x1.40ba02p-92f, 0x1.ab84e4p-120f, 0x1.5e945ap-98f, 0.0f,
     0.0f, 0x1.b71a9ap-28f, 0.0f, 0.0f, 0x1.dbdec6p-49f, 0x1.47ba7cp-28f,
     0x1.a12a6ep-49f, 0.0f, 0.0f, 0x1.f22432p-30f, 0x1.e24c46p-44f, 0.0f,
     0x1.37a02cp-72f, 0x1.0c1308p-123f, 0x1.cf112p-51f, 0x1.6e07c6p-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eeed7ep-56f, 0x1.135aap-120f,
     0x1.d806bap-32f, 0x1.f10e1cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66bc86p-76f, 0.0f,
     0.0f, 0.0f, 0x1.69ef4p-18f, 0x1.3ecf4cp-1f, 0.0f, 0x1.3dc4f6p-65f,
     0x1.ac273cp-42f, 0.0f, 0.0f, 0x1.c344f8p-30f, 0.0f, 0.0f, 0.0f, 0x1.fffc12p-125f,
     0.0f, 0.0f, 0x1.73bdb4p-44f, 0.0f, 0x1.57b7d8p-64f, 0.0f, 0x1.6447b6p-84f, 0.0f,
     0.0f, 0x1.da1e2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9b18cp-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c0131ap-26f, 0.0f, 0.0f, 0.0f, 0x1.59ac06p-115f, 0x1.c4d59p-84f,
     0x1.85d9eep-68f, 0x1.d4afdep-31f, 0.0f, 0.0f, 0.0f, 0x1.42e058p-69f,
     0x1.8e11bep-34f, 0x1.1f8b6ep-38f, 0.0f, 0.0f, 0.0f, 0x1.f1b32ep-36f,
     0x1.a19e72p-30f, 0.0f, 0.0f, 0.0f, 0x1.7b16fp-113f, 0.0f, 0x1.d1b796p-40f, 0.0f,
     0x1.d613ccp-24f, 0x1.0e74a8p-63f, 0x1.205168p-52f, 0x1.a6dddap-4f,
     0x1.7215ep-73f, 0x1.557e72p-106f, 0x1.89b7e6p-7f, 0.0f, 0x1.c3e1a4p-92f,
     0x1.e39df4p-27f, 0x1.94469p-48f, 0.0f, 0x1.1552b4p-116f, 0x1.d93774p-125f, 0.0f,
     0x1.7ec1e8p-55f, 0x1.ef2666p-126f, 0.0f, 0x1.34d386p-31f, 0.0f, 0x1.75cbdap-73f,
     0x1.1bad7cp-118f, 0.0f, 0x1.0e270ap-123f, 0x1.483636p-124f, 0x1.def608p-6f, 0.0f,
     0.0f, 0x1.c98b32p-65f, 0.0f, 0x1.dcf4a6p-48f, 0x1.15ec28p-29f, 0x1.3444b2p-37f,
     0.0f, 0.0f, 0x1.527ce8p-48f, 0.0f, 0x1.fc73c6p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d4d62p-35f, 0.0f, 0x1.e252p-93f, 0.0f, 0x1.f6f218p-89f, 0.0f, 0.0f,
     0x1.eac022p-108f, 0x1.75a34p-91f, 0.0f, 0x1.d28dfcp-118f, 0x1.08104ep-16f,
     0x1.901484p-4f, 0x1.550c5p-124f, 0x1.bebc9ap-108f, 0x1.0b338ap-96f,
     0x1.b0ebf2p-30f, 0.0f, 0.0f, 0.0f, 0x1.d01edp-2f, 0.0f, 0x1.dc30ccp-81f, 0.0f,
     0x1.dbeb18p-14f, 0x1.a6e476p-3f, 0.0f, 0x1.17c8f6p-55f, 0.0f, 0x1.f5ba6p-66f,
     0x1.ba33a8p-58f, 0x1.1a97dp-46f, 0x1.0524e8p-113f, 0.0f, 0x1.319bf8p-101f,
     0x1.365702p-72f, 0x1.4f8f28p-18f, 0x1.302b26p-67f, 0x1.ac7884p-54f,
     0x1.c4dbe4p-52f, 0x1.3567acp-105f, 0.0f, 0.0f, 0x1.939d68p-84f, 0x1.f65122p-109f,
     0x1.3fd988p-3f, 0x1.9e50fap-24f, 0x1.14c69ep-125f, 0.0f, 0.0f, 0x1.2acf8ep-117f,
     0.0f, 0x1.485792p-88f, 0.0f, 0x1.cbd694p-35f, 0.0f, 0x1.762f24p-59f,
     0x1.d591a6p-25f, 0x1.719904p-18f, 0x1.fa157cp-105f, 0x1.c41e8ep-75f, 0.0f,
     0x1.a811b2p-73f, 0x1.0312f4p-15f, 0.0f, 0x1.fcda34p-81f, 0.0f, 0x1.109fd2p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0760f6p-36f, 0x1.b49246p-95f, 0.0f,
     0x1.359874p-87f, 0.0f, 0.0f, 0.0f, 0x1.d700ep-53f, 0x1.a546f2p-109f,
     0x1.def1bap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0de7b6p-54f,
     0x1.7d7096p-17f, 0x1.c014aap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0eb22p-32f,
     0x1.cf4862p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.891faap-65f, 0.0f, 0.0f, 0.0f,
     0x1.4d4e24p-52f, 0.0f, 0.0f, 0x1.c54b1ap-113f, 0.0f, 0.0f, 0x1.a5cf56p-11f, 0.0f,
     0x1.72e872p-99f, 0x1.27e31ep-22f, 0x1.cfd97ap-98f, 0x1.80d5c2p-63f, 0.0f, 0.0f,
     0x1.8ff3f2p-56f, 0x1.cc1ep-95f, 0x1.52588cp-58f, 0x1.cd375ap-45f, 0.0f, 0.0f,
     0x1.0f0948p-103f, 0x1.5968ecp-2f, 0x1.987f1ep-96f, 0x1.81783ep-47f,
     0x1.f0ba28p-24f, 0x1.187d62p-62f, 0x1.d3d89ep-31f, 0x1.674d1ep-58f, 0.0f,
     0x1.204e96p-110f, 0.0f, 0.0f, 0x1.fbc114p-23f, 0x1.408b62p-49f, 0.0f,
     0x1.f94adap-125f, 0.0f, 0x1.8c48e8p-45f, 0.0f, 0.0f, 0x1.219c54p-11f,
     0x1.8f30bap-28f, 0.0f, 0x1.b7a4eap-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d38f56p-61f,
     0.0f, 0x1.1d7996p-37f, 0.0f, 0.0f, 0x1.179cdap-46f, 0x1.04b85cp-6f,
     0x1.343e5cp-17f, 0x1.080234p-70f, 0.0f, 0x1.e24bbp-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e848cp-58f, 0.0f, 0x1.97c666p-2f, 0x1.ae42aap-71f, 0.0f, 0.0f, 0.0f,
     0x1.91c24p-71f, 0.0f, 0.0f, 0x1.12d4d4p-73f, 0.0f, 0x1.35008cp-5f,
     0x1.54464ap-46f, 0x1.6a552p-88f, 0x1.dfa2fcp-15f, 0.0f, 0x1.cf10ap-7f,
     0x1.364aecp-48f, 0.0f, 0.0f, 0x1.df0c3ap-5f, 0x1.15c682p-106f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.adb05ep-87f, 0.0f, 0x1.b9546ep-88f, 0.0f, 0x1.ca06a2p-36f, 0.0f,
     0x1.cbccc4p-75f, 0x1.4a36f6p-68f, 0.0f, 0x1.8e7a62p-69f, 0x1.db3b4cp-112f, 0.0f,
     0x1.bdbc86p-62f, 0x1.6e2354p-2f, 0.0f, 0.0f, 0x1.70a5p-110f, 0x1.95c748p-67f,
     0.0f, 0x1.d6e284p-38f, 0x1.1f3372p-106f, 0x1.04c182p-44f, 0x1.ec6c8cp-40f, 0.0f,
     0x1.ec18c2p-119f, 0x1.ca5448p-32f, 0x1.b2d8e8p-98f, 0x1.f4122ap-119f, 0.0f,
     0x1.a6b2f2p-16f, 0x1.44a09ap-14f, 0x1.75170cp-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9b18ap-35f, 0x1.3c389p-47f, 0.0f, 0x1.1ea34cp-87f, 0.0f, 0x1.80dc22p-48f,
     0x1.606976p-54f, 0x1.cdad2p-74f, 0x1.61c24ap-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d5dca4p-41f, 0x1.bdc794p-111f, 0x1.43d884p-112f, 0.0f, 0.0f, 0x1.6fc78cp-26f,
     0.0f, 0x1.1c3588p-106f, 0x1.291196p-55f, 0.0f, 0x1.b00238p-73f, 0.0f, 0.0f,
     0x1.0ea66cp-123f, 0x1.1cfdd8p-23f, 0.0f, 0x1.cfd346p-64f, 0.0f, 0x1.a3951ap-83f,
     0.0f, 0.0f, 0.0f, 0x1.e5e7f4p-30f, 0x1.430ca2p-107f, 0.0f, 0x1.97d2ap-6f, 0.0f,
     0x1.7bbec6p-35f, 0x1.b95db6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4c5aep-59f, 0x1.a97878p-121f, 0x1.393024p-46f, 0.0f, 0.0f, 0x1.3055b6p-109f,
     0x1.c97ffcp-18f, 0x1.6606bp-120f, 0.0f, 0.0f, 0.0f, 0x1.5eb2f2p-120f, 0.0f,
     0x1.ee86ep-71f, 0.0f, 0x1.b1e378p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.088658p-62f,
     0x1.8e66e6p-82f, 0x1.952078p-23f, 0x1.4a7b8ep-46f, 0x1.41f294p-112f,
     0x1.2330bap-66f, 0.0f, 0.0f, 0x1.26d19p-38f, 0x1.933bf4p-99f, 0x1.5de5c8p-53f,
     0.0f, 0.0f, 0.0f, 0x1.4e5a24p-94f, 0.0f, 0x1.c539d8p-40f, 0x1.4f5e78p-39f, 0.0f,
     0.0f, 0x1.54f49ap-112f, 0x1.bb45ccp-122f, 0x1.b51e16p-59f, 0.0f, 0.0f,
     0x1.9554b2p-125f, 0x1.858a44p-55f, 0x1.006cccp-96f, 0.0f, 0x1.448542p-22f,
     0x1.71b5fcp-21f, 0x1.092f1ep-39f, 0.0f, 0x1.972708p-16f, 0x1.c8fca8p-30f,
     0x1.2447cap-76f, 0.0f, 0x1.a2cbf4p-47f, 0.0f, 0x1.3bfadp-49f, 0x1.354836p-36f,
     0x1.b3fcd6p-23f, 0x1.6dc136p-46f, 0x1.184312p-124f, 0x1.22dac6p-39f, 0.0f, 0.0f,
     0.0f, 0x1.a52902p-90f, 0x1.662faep-84f, 0.0f, 0x1.37fc62p-30f, 0.0f,
     0x1.7bea4ep-28f, 0.0f, 0x1.da5c66p-57f, 0.0f, 0x1.c24772p-87f, 0.0f, 0.0f,
     0x1.e21768p-120f, 0x1.fcf89cp-44f, 0x1.4bdb82p-71f, 0.0f, 0.0f, 0x1.8cacb2p-28f,
     0x1.93cf3ap-1f, 0.0f, 0.0f, 0x1.bdbb0cp-56f, 0x1.063adcp-63f, 0x1.00f45ep-15f,
     0x1.8bb626p-6f, 0.0f, 0x1.181488p-84f, 0x1.9ce58cp-35f, 0.0f, 0.0f,
     0x1.59d874p-52f, 0x1.88b1fcp-61f, 0x1.6a5bbp-33f, 0.0f, 0.0f, 0x1.0ad1b2p-76f,
     0.0f, 0x1.6581d2p-79f, 0x1.da3138p-6f, 0.0f, 0x1.edeb5ap-68f, 0x1.46277cp-104f,
     0x1.a2046cp-53f, 0.0f, 0x1.330c6cp-74f, 0x1.3e0022p-36f, 0x1.8047eep-95f,
     0x1.7dfadep-10f, 0x1.b4fa02p-100f, 0.0f, 0.0f, 0x1.bb5ac6p-59f, 0.0f, 0.0f, 0.0f,
     0x1.bb6962p-115f, 0x1.9e09bep-14f, 0x1.686adp-108f, 0.0f, 0x1.1ef1cp-56f,
     0x1.62caaep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f68a98p-55f,
     0x1.a250a4p-27f, 0.0f, 0.0f, 0x1.d0be6ep-119f, 0x1.f2773p-86f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.dfdebep-108f, 0.0f, 0.0f, 0.0f, 0x1.6840a6p-56f, 0.0f, 0.0f,
     0.0f, 0x1.fad6d6p-14f, 0x1.b6a0dcp-52f, 0.0f, 0.0f, 0x1.122744p-98f,
     0x1.02f3fap-124f, 0x1.a2bb76p-113f, 0.0f, 0x1.b95af8p-24f, 0x1.b0671ap-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a878aap-114f, 0.0f, 0x1.8cbee2p-36f, 0x1.d5956ap-61f,
     0.0f, 0x1.9fdd3cp-94f, 0x1.cebc96p-9f, 0.0f, 0x1.832d2ap-102f, 0.0f, 0.0f, 0.0f,
     0x1.da4d0ep-50f, 0.0f, 0.0f, 0x1.bdf3fep-71f, 0.0f, 0.0f, 0x1.85773cp-122f,
     0x1.a0ab42p-68f, 0.0f, 0x1.c4005cp-101f, 0.0f, 0.0f, 0.0f, 0x1.f5883ep-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e1378p-15f, 0x1.9eef5cp-8f, 0.0f,
     0.0f, 0x1.1d803p-1f, 0x1.6a17e4p-105f, 0.0f, 0.0f, 0x1.ec9486p-125f, 0.0f,
     0x1.8a329ap-70f, 0.0f, 0x1.99927ap-67f, 0.0f, 0.0f, 0.0f, 0x1.8c664cp-32f,
     0x1.dc5e44p-15f, 0.0f, 0.0f, 0.0f, 0x1.a7fcdap-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c8736p-99f, 0.0f, 0.0f, 0x1.7d62f6p-104f, 0.0f, 0.0f, 0.0f, 0x1.b4ed8ap-49f,
     0x1.22e678p-76f, 0x1.f5216cp-94f, 0.0f, 0x1.ed19fp-33f, 0x1.7c9dfcp-95f,
     0x1.6b7c0cp-84f, 0.0f, 0x1.913274p-18f, 0x1.ec77dep-89f, 0.0f, 0x1.1ae964p-7f,
     0x1.71c5f2p-26f, 0x1.26a2f4p-3f, 0x1.e297f4p-61f, 0.0f, 0.0f, 0x1.eeec6cp-11f,
     0x1.cb9c4p-20f, 0.0f, 0x1.fff464p-49f, 0.0f, 0.0f, 0.0f, 0x1.c30058p-19f,
     0x1.2757e6p-51f, 0.0f, 0.0f, 0x1.b387c6p-44f, 0x1.66d066p-109f, 0.0f, 0.0f,
     0x1.2e1c2ep-45f, 0x1.fa1d84p-59f, 0x1.12a12cp-104f, 0x1.9eb9e2p-91f,
     0x1.3054f4p-53f, 0.0f, 0x1.06e1a8p-23f, 0.0f, 0x1.61408ep-116f, 0x1.e0ca18p-69f,
     0x1.f88a44p-20f, 0x1.823296p-109f, 0x1.f3b12cp-99f, 0.0f, 0x1.38fa14p-57f, 0.0f,
     0.0f, 0.0f, 0x1.b85a28p-67f, 0x1.acc4c2p-24f, 0x1.19e472p-13f, 0x1.24826ep-73f,
     0x1.4c953cp-121f, 0.0f, 0x1.e74152p-5f, 0.0f, 0.0f, 0x1.350e5p-20f, 0.0f,
     0x1.077138p-39f, 0x1.bcc198p-98f, 0x1.09125ap-93f, 0.0f, 0.0f, 0x1.63f6aap-46f,
     0x1.f10a74p-58f, 0x1.7e92d6p-18f, 0.0f, 0x1.8eee5ap-19f, 0x1.f2443ap-71f, 0.0f
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
            tmp1 = Sleef_frfrexpf1_purecfma(tmp0);
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
    printf("Sleef_frfrexpf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_frfrexpf1_purecfma bench acc %a\n", global_bench_acc);
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
