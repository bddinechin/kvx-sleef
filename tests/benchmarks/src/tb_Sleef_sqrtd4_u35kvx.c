/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd4_u35kvx.c --function Sleef_sqrtd4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0.0, 0x1.74f5a212a92cp-643, 0.0, 0.0, 0.0, 0x1.95007f587a4f8p-587,
     0x1.5e35c44f02b05p-41, 0x1.e1ace30551b2p-15, 0.0, 0x1.23667e48e2297p-752,
     0x1.3a66af23526c1p-749, 0.0, 0x1.f0aaa32075917p-187, 0.0, 0x1.f976b28730b4fp-556,
     0x1.722e31881da64p-608, 0x1.9e9e476c67f3ep-237, 0x1.6d71de0ab57ep-214, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0d7a9569ea0fap-888, 0x1.8cc7a4d88c765p-247, 0.0,
     0x1.32d6fd20ebc53p-431, 0x1.71138aa84921p-6, 0.0, 0x1.718762530833ap-455,
     0x1.7c6dea240ac05p-454, 0x1.dac16098921e4p-855, 0x1.b9b5e2e5349d3p-550,
     0x1.7a7a8490ea5eep-154, 0x1.e3ea3361f8674p-78, 0x1.c3163293918f1p-426, 0.0,
     0x1.3f3e328e8b6ecp-809, 0x1.b2ab11ce9b458p-4, 0x1.fcc47d8bd81c7p-19,
     0x1.ab60a7b533652p-644, 0.0, 0x1.d469a18bc84cfp-344, 0x1.1e344c6178214p-261,
     0x1.108b55520631cp-185, 0x1.e6e91d52de39fp-239, 0x1.ac4874a8dd745p-376,
     0x1.7ef65c54eb359p-323, 0x1.97a95d59f91ddp-912, 0.0, 0x1.b39364ae7f58ap-901,
     0x1.85336d2bc885bp-159, 0x1.28c154b35edc2p-500, 0x1.18bf167ca8725p-200, 0.0, 0.0,
     0x1.717bbbd392e8p-408, 0.0, 0.0, 0.0, 0x1.7559f81066a3p-865, 0.0,
     0x1.6e24d35c78a9ep-704, 0x1.27442bb3311d2p-825, 0x1.8e36251fc94e8p-258,
     0x1.befc4a5b42be6p-254, 0x1.e6e7a25d414a9p-528, 0.0, 0x1.8fbc908514b1p-793, 0.0,
     0x1.840bb09645134p-94, 0x1.1e8f28d1e14abp-201, 0x1.be08ecbee9718p-610,
     0x1.40d2a77ef8d06p-45, 0x1.350435471f0bcp-383, 0.0, 0x1.b585a89d1e6afp-51,
     0x1.5064c6f17fec5p-470, 0.0, 0x1.2b272a3009a6cp-160, 0x1.8203c03960461p-982, 0.0,
     0x1.6ce44100427bap-597, 0.0, 0x1.9f8177c4ef99p-865, 0.0, 0.0, 0.0, 0.0,
     0x1.1145a2556203cp-606, 0.0, 0x1.6784e35d03149p-79, 0x1.0fec7f3a3f714p-342,
     0x1.ab338494790c7p-4, 0x1.277e8f57154d5p-677, 0.0, 0x1.494fa4474bf94p-587, 0.0,
     0.0, 0x1.b82dd9d7a3e01p-247, 0.0, 0.0, 0x1.0acba808703b8p-957, 0.0, 0.0,
     0x1.2b21d994dbc9bp-855, 0x1.90f869413900cp-186, 0.0, 0x1.3cea887e82ep-92, 0.0,
     0.0, 0.0, 0.0, 0x1.188460c81ced4p-397, 0.0, 0.0, 0.0, 0x1.3f5a78a38a04ap-10,
     0x1.c515058a1efa9p-918, 0x1.8c978195da2fep-542, 0.0, 0x1.28a568635b4c1p-403,
     0x1.3c85dea918a19p-622, 0.0, 0.0, 0x1.d1357653d6a09p-90, 0x1.22c166d573197p-421,
     0x1.7e4cac102ac4fp-313, 0.0, 0x1.47859f6095424p-757, 0.0, 0.0,
     0x1.486ceabdb7211p-962, 0.0, 0.0, 0x1.a1e3d334bd52ap-111, 0x1.feef34c151c04p-543,
     0.0, 0x1.079608cb64f98p-635, 0x1.177698c543dd7p-77, 0x1.45f8292366806p-168,
     0x1.0a844a52a5ac3p-335, 0.0, 0x1.12c9bb1204be1p-300, 0x1.b949b0b5784c4p-347, 0.0,
     0x1.04974eba76f31p-893, 0.0, 0.0, 0x1.2e9cfe4ea71ddp-931, 0.0,
     0x1.21109655bc7dcp-25, 0x1.f014a976f7998p-115, 0x1.a21ff47e54a4fp-16,
     0x1.c501e65c72ee7p-528, 0x1.dd47fc50f163ep-218, 0x1.8f46a5203be4ep-426, 0.0,
     0x1.8870183bab8f4p-976, 0x1.2e59cca85f531p-43, 0.0, 0x1.489c7825c1ceep-1022,
     0x1.cdd786cf3565p-918, 0x1.ebc1474fa5658p-761, 0.0, 0.0, 0.0, 0.0,
     0x1.3aec5627f705cp-859, 0x1.eed9e1fcb01a7p-993, 0.0, 0x1.d707f0ee88873p-643,
     0x1.b102e19afc562p-572, 0.0, 0x1.0bc9a48af63a8p-492, 0.0, 0x1.e2b7eae7a9433p-548,
     0x1.b45ecfee5beeep-98, 0x1.af7734d0726fcp-963, 0x1.6520ddb96fb2fp-278,
     0x1.058908934802ap-533, 0x1.96e8af81d7007p-195, 0x1.eb3ad53c812bfp-697, 0.0,
     0x1.a7b2c27f2b1cp-1018, 0.0, 0.0, 0.0, 0.0, 0x1.994991a611cd9p-407,
     0x1.635ef4f501698p-755, 0.0, 0x1.17e5abbe8009fp-24, 0.0, 0.0,
     0x1.52aba9cc91e1ep-277, 0x1.bd1d31a025dap-858, 0.0, 0.0, 0.0, 0.0,
     0x1.ebcf05c3205ecp-698, 0.0, 0.0, 0.0, 0x1.5520138c76dbep-548,
     0x1.c55efbd365952p-16, 0x1.07bbc859f4d1bp-448, 0.0, 0x1.727708450ca5bp-954,
     0x1.ed45198113a2dp-77, 0.0, 0x1.0449f5822bec2p-821, 0x1.8b02a0aa54ac2p-800,
     0x1.f90d2da8b4958p-593, 0x1.21f0ff3dbeea3p-884, 0x1.c888671baf62ep-727, 0.0,
     0x1.dbec91eb2cc6p-429, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff75fc9a83603p-947, 0.0,
     0x1.a0e707b44075ep-158, 0x1.cf9bbdfe2ee7fp-788, 0.0, 0.0, 0x1.21119d042f285p-875,
     0x1.4e9a38d3981d1p-190, 0.0, 0x1.d621d1688f4d5p-427, 0.0, 0x1.88134e81ec7c2p-618,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5cce5a95eec9p-803, 0x1.bdc3afd8e5482p-150,
     0.0, 0x1.7b76ccd218efep-362, 0x1.e50c3328b0583p-1, 0x1.c6a831458865fp-654, 0.0,
     0.0, 0.0, 0x1.4e260a044594bp-833, 0.0, 0x1.9ba655dfc68a3p-690, 0.0, 0.0, 0.0,
     0x1.e79874ad01e65p-717, 0.0, 0.0, 0x1.e84704b0b4c8cp-12, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac3eaf45424d5p-812, 0.0, 0.0, 0x1.80b02b0157d1ap-580, 0x1.7fc0419fb62afp-358,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.043d36650d46bp-192, 0x1.efbc2978deb38p-114,
     0x1.f8f6f258407b1p-372, 0.0, 0.0, 0x1.24cb8d7caeeccp-453, 0.0, 0.0,
     0x1.c77e25289e85p-202, 0.0, 0.0, 0x1.d7dd1ff38aeb6p-548, 0x1.18595b36cdaabp-817,
     0.0, 0x1.c05f4a024f99ep-59, 0x1.cb6f63a0c8fabp-267, 0.0, 0x1.4b0a21e745ffep-67,
     0x1.59267bb10a9d2p-45, 0.0, 0x1.4ddbd94ca37fbp-874, 0x1.255a674c07a15p-301, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f752760ab8605p-932, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1e51413578d39p-336, 0x1.57e5bf4d382a3p-425, 0.0,
     0x1.6b01d9100885p-666, 0x1.d5f0111d13956p-702, 0.0, 0.0, 0x1.9f037abf39142p-36,
     0.0, 0x1.d283c14b4c655p-986, 0.0, 0.0, 0.0, 0x1.5d536c0dc8decp-954, 0.0,
     0x1.b2e0a463fe8a7p-613, 0.0, 0.0, 0.0, 0x1.c371949858094p-119, 0.0,
     0x1.01acc993a8af5p-816, 0x1.aee6b8cea94dp-492, 0x1.6f7d3620842p-725,
     0x1.2cf626464594dp-24, 0x1.4be47fddd95b2p-63, 0.0, 0x1.b26f6c0b01a8fp-631,
     0x1.97b478a51be6bp-562, 0x1.e318a7692eaeap-759, 0.0, 0x1.f9f89fc4d3fc4p-845,
     0x1.3a7b08359d971p-579, 0.0, 0x1.3140d6fb46659p-38, 0x1.4b015c181fdcep-363,
     0x1.0429af54270cbp-465, 0x1.0e1fc2bb794d2p-972, 0x1.a9b822ef6c577p-641, 0.0,
     0x1.81560bd0908d8p-996, 0.0, 0.0, 0x1.5b2f01b113304p-215, 0x1.5126ffda77a19p-144,
     0x1.d6cdcac020f45p-461, 0.0, 0x1.0248e573e92f3p-597, 0.0, 0.0,
     0x1.203d82300f44fp-323, 0.0, 0.0, 0.0, 0x1.199479510ba39p-187,
     0x1.cda2c603f362ap-157, 0.0, 0.0, 0x1.2b5a0684f8c5dp-2, 0.0, 0.0,
     0x1.e50396a486158p-633, 0x1.d253697369df3p-52, 0.0, 0x1.2fe0f3a761c6cp-131, 0.0,
     0.0, 0x1.0c95daed526c3p-673, 0x1.848b8398977f3p-540, 0.0, 0x1.758b35043208bp-373,
     0.0, 0x1.9686bfd7a92afp-195, 0.0, 0x1.7146964daad9bp-347, 0x1.95b39bef9c122p-535,
     0.0, 0.0, 0x1.ffccf023dd0e8p-489, 0.0, 0x1.b9c82ac0e8b99p-702,
     0x1.fafeac26d6785p-838, 0.0, 0x1.98eeb0e8e5216p-204, 0.0, 0x1.96b5eb304a457p-190,
     0.0, 0x1.28f65bde1cb59p-551, 0.0, 0.0, 0x1.d2e32c1838c96p-741, 0.0, 0.0, 0.0,
     0x1.43ea6209a100cp-430, 0.0, 0x1.166852ddb1174p-439, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fb1467de596d9p-390, 0.0, 0x1.6b75c313ce901p-28, 0.0, 0x1.b6263bffec289p-252,
     0.0, 0.0, 0.0, 0x1.1f72f822fbb09p-1006, 0x1.994e5b2653002p-408, 0.0,
     0x1.eafc05c9fad2ap-240, 0.0, 0x1.305d5b4ab28e4p-723, 0x1.3a1f5a063b5ccp-868, 0.0,
     0x1.0208cea37f398p-1021, 0x1.3b69689ab9b1cp-252, 0x1.341c208f0cc25p-502,
     0x1.18b82bda7e0ep-602, 0x1.9104179d6d19p-783, 0.0, 0x1.1fa3193ae20bap-995,
     0x1.0e6f723516617p-556, 0.0, 0.0, 0x1.c12789da1003fp-144, 0.0,
     0x1.f29ae01d31dd6p-688, 0.0, 0x1.77d4225a217d9p-847, 0.0, 0x1.683caabb4f57fp-148,
     0x1.40a58d23f5252p-719, 0.0, 0x1.6ac82ddab7b8fp-810, 0.0, 0.0, 0.0,
     0x1.7e842c92dff36p-326, 0.0, 0.0, 0x1.90e6cc5d9c682p-243, 0x1.240391efbc64fp-960,
     0x1.f01ce78eef09ap-540, 0.0, 0.0, 0x1.0624986cd8b15p-367, 0x1.3920e48f25edp-538,
     0.0, 0x1.52a5f64ce716cp-219, 0.0, 0x1.97ce36b20292bp-264, 0x1.973c873839f9fp-805,
     0x1.0863a1358bb41p-373, 0.0, 0.0, 0.0, 0x1.7180b83b7890dp-190,
     0x1.41d55a433387ap-823, 0.0, 0x1.64d472e65eb78p-759, 0x1.b0f1449db7f5cp-90,
     0x1.8bcf060cb6461p-860, 0x1.935239849b6adp-252, 0x1.135fd147868edp-892,
     0x1.c9e63e313f7b7p-656, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ac971a541232p-41,
     0x1.9b899453d2113p-704, 0x1.2441365b308eap-734, 0x1.7be74f243ded1p-278, 0.0,
     0x1.7611361112763p-616, 0x1.871d92513e764p-657, 0.0, 0.0, 0x1.03e346e0b9ccap-847,
     0.0, 0x1.42e40f53b87c1p-776, 0.0, 0x1.66b11abaead12p-4, 0.0,
     0x1.8268241c9e557p-145, 0x1.18d6cd2fb0301p-480, 0.0, 0x1.53a3ccffc535dp-562, 0.0,
     0.0, 0.0, 0.0, 0x1.58563081ae04cp-416, 0.0, 0x1.e4a14b8bb9d88p-629,
     0x1.827cfba51b7d6p-298, 0x1.de031487a257fp-436, 0.0, 0.0, 0x1.4ee10647a024p-645,
     0x1.940fc56809989p-680, 0x1.2e1abadd48c8bp-1007, 0x1.e7b0760f32691p-444, 0.0,
     0.0, 0x1.55ebda9741645p-676, 0x1.1255118aa508bp-887, 0.0, 0x1.480c623c7ed5fp-649,
     0x1.d0cd90569b0cap-435, 0.0, 0x1.6906c3a07cfafp-16, 0x1.8a11ee107e5e8p-543, 0.0,
     0x1.98a948349f6f7p-287, 0.0, 0x1.5593ab74c3f23p-660, 0.0, 0x1.74747b5e66854p-765,
     0.0, 0x1.9aaa51562dedap-359, 0.0, 0x1.3b35574807018p-885, 0x1.6fb29e5449e4ap-465,
     0.0, 0x1.daf62782c6619p-216, 0.0, 0.0, 0.0, 0.0, 0x1.e4514bd6f63cp-496,
     0x1.9bc071ea0141ap-798, 0.0, 0.0, 0x1.ba24c78d2ee29p-744, 0x1.3eed42bad06e7p-842,
     0.0, 0.0, 0.0, 0.0, 0x1.47eb8a63de577p-244, 0x1.4c72bcca2344ap-950,
     0x1.aa2ce34d8e21fp-134, 0.0, 0.0, 0x1.c086c25d26965p-643, 0.0,
     0x1.dbfc727c4964bp-926, 0.0, 0.0, 0x1.e78560802229ep-509, 0.0, 0.0,
     0x1.3a93d2f8e865p-400, 0x1.37b8c3db0dfbcp-68, 0x1.2161fcd22b6fdp-581,
     0x1.ea535f1133133p-108, 0.0, 0x1.a819a9e87584p-595, 0.0, 0x1.abc5fc60edca1p-437,
     0.0, 0.0, 0x1.49b4cfbba9ae5p-518, 0.0, 0x1.d21b30b801682p-690,
     0x1.7389ec837b605p-479, 0.0, 0.0, 0.0, 0x1.d36a5f951cc76p-650, 0.0, 0.0, 0.0,
     0x1.dd48ceccc0644p-776, 0x1.5d2901786ace5p-199, 0x1.af7b62335a5ebp-186,
     0x1.9574719aeacefp-375, 0.0, 0.0, 0x1.be87959ed1aedp-681, 0x1.8095cd552382ep-550,
     0x1.b555c55d017cfp-323, 0.0, 0x1.18e87619b9354p-213, 0x1.320575abc7805p-751,
     0x1.e161242086309p-532, 0x1.8a131bae6cd32p-277, 0x1.1b20eb0044b0dp-255,
     0x1.19918cd687a15p-950, 0x1.11356ab88b11cp-715, 0x1.59288b81fb712p-298, 0.0, 0.0,
     0.0, 0x1.2ac0d779e346dp-717, 0.0, 0x1.a50e3e4cef729p-705, 0.0,
     0x1.0a77e331dce4ap-310, 0.0, 0.0, 0.0, 0.0, 0x1.973f17e820f64p-422,
     0x1.ce517081d9a05p-340, 0.0, 0x1.688ef7dc19f11p-579, 0.0, 0x1.09460e992aa78p-690,
     0.0, 0.0, 0x1.19ade237c832cp-917, 0.0, 0x1.23f5b1ab5ecb2p-727, 0.0, 0.0, 0.0,
     0.0, 0x1.e00fb011e055fp-468, 0x1.62a6897366c48p-435, 0.0, 0x1.d3dbd323a1623p-884,
     0x1.3eda3fbcbebb7p-289, 0.0, 0x1.3d5fe67799318p-536, 0x1.59908db3590aap-697,
     0x1.4565e8e795e4ap-624, 0x1.7925ac102a7fdp-999, 0x1.64dfffbd500d4p-91,
     0x1.7a5018a39ae2ep-71, 0x1.520e7550e82d6p-949, 0.0, 0.0, 0x1.7130a84d577ddp-324,
     0x1.40a6c1b0e50f8p-637, 0.0, 0.0, 0.0, 0x1.d7d6a4de05812p-704, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fbf95feea5b9fp-426, 0x1.4e69faf9c7cadp-75, 0x1.f6eebb94f6197p-637,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a6f9d9f862a4bp-894, 0x1.54cd76b18cacfp-741, 0.0,
     0.0, 0x1.ab872f38f1dp-1015, 0.0, 0x1.be131a615dbc6p-391, 0x1.9d3c0d51bd83ap-459,
     0.0, 0x1.005594dabefd1p-65, 0.0, 0x1.54c79c9a2f49cp-719, 0.0, 0.0, 0.0,
     0x1.0a6551bfd8bf3p-808, 0.0, 0x1.3c101937bb526p-542, 0.0, 0x1.5a46775ee4b0fp-356,
     0.0, 0x1.52fc88c5c986ep-315, 0x1.fd9a124071c8fp-135, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1b991b6d47134p-408, 0x1.c4b7aebf6ea58p-100, 0.0,
     0x1.5b53f1a0a42fcp-823, 0.0, 0.0, 0.0, 0.0, 0x1.d647ed1868496p-694, 0.0,
     0x1.f90ae76f0c7e5p-968, 0.0, 0.0, 0x1.0897513ec5803p-327, 0.0,
     0x1.aa12d9c128f6fp-757, 0x1.b762f2a876f05p-709, 0.0, 0x1.055e0326733b5p-619,
     0x1.181d26f328f84p-937, 0.0, 0.0, 0x1.920fbed6799e2p-265, 0.0,
     0x1.0ecbd11c5527fp-680, 0x1.08b1072d4ac36p-853, 0x1.2784319abdb28p-427,
     0x1.372de1227b4d3p-443, 0x1.2247d25e43f98p-894, 0x1.8e25231bd0fcap-601,
     0x1.d73b50463121cp-179, 0x1.7638fea3eae8bp-248, 0.0, 0x1.1b9ab75032141p-540, 0.0,
     0x1.72b7b0411f97bp-302, 0.0, 0.0, 0x1.7c2216799796cp-257, 0.0,
     0x1.1239b7880c591p-905, 0x1.2d54a04e763a7p-164, 0x1.616b56bde863cp-750, 0.0,
     0x1.97b33a2f77c5fp-847, 0x1.73475bd764c27p-253, 0x1.39cab040364dep-551,
     0x1.4ed6a12f09066p-358, 0x1.35146e6e058bcp-556, 0x1.21da582907e7dp-339, 0.0, 0.0,
     0x1.4d2b3129993e6p-172, 0.0, 0x1.716a968040d45p-926, 0.0, 0x1.845cb343abebbp-780,
     0x1.06a466becc013p-492, 0x1.c77e6e8621242p-665, 0x1.9bfa2e29593e8p-937, 0.0,
     0x1.782cbd3aac85dp-302, 0x1.5aa94d6972a46p-494, 0x1.9ed190f11f5aap-537,
     0x1.522232e4097f1p-1006, 0.0, 0x1.2ba1b5ea7ff3ap-175, 0.0,
     0x1.653440ba11486p-585, 0.0, 0x1.4388e94969afep-189, 0.0, 0x1.a812ea5fbbd39p-726,
     0x1.22fcd546ef8c2p-269, 0x1.be3fd0f7bbbaep-431, 0.0, 0.0, 0x1.a39c308c8869ap-579,
     0.0, 0x1.1d296bc212a9ap-156, 0x1.c7a2913b19f4fp-2, 0.0, 0x1.63be7c7ddadf8p-239,
     0x1.1c3e45a8f1708p-156, 0x1.d5f152536c816p-1003, 0x1.ee8a6c7b334d7p-167,
     0x1.dd0d77fa050d7p-204, 0x1.e8d94b6b62d7p-573, 0x1.c974989588e22p-626, 0.0, 0.0,
     0x1.41cf2266b7b2bp-767, 0x1.88413d68440bp-901, 0x1.103e4ac83e76ep-4,
     0x1.82ca6ac7b722cp-612, 0x1.de408477e33ecp-44, 0.0, 0.0, 0x1.fe51d20ca2624p-223,
     0x1.e1e4281116b4ep-986, 0x1.cbbcd3ab98782p-636, 0.0, 0.0, 0x1.ae51a2eee55a4p-600,
     0.0, 0.0, 0.0, 0x1.597b744212f92p-772, 0x1.06a8332f83ca9p-982,
     0x1.e1b3aa063e67ep-742, 0x1.d4703d95ef4b7p-1014, 0x1.67e60156cf1b8p-26,
     0x1.9e1d6fc506e2cp-722, 0x1.bdbda54ebd358p-237, 0x1.329a9700011a6p-260, 0.0,
     0x1.3b3a421ab217ep-473, 0x1.9240b751bbddfp-557, 0.0, 0.0, 0.0,
     0x1.6b2a7f40e9b83p-590, 0.0, 0x1.3999f9ce4748bp-491, 0x1.397ef81145834p-271,
     0x1.cbbb048491942p-847, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e29c22733cf79p-503, 0x1.32029d8685301p-176, 0.0, 0x1.495f391df1962p-846,
     0x1.95f18f02dc5e2p-926, 0x1.985c22a91823fp-961, 0.0, 0x1.c67debf7374fep-624, 0.0,
     0x1.661f26dfeae7bp-349, 0.0, 0x1.54e0ca378d892p-864, 0.0, 0x1.6fd36003f2fd4p-559,
     0.0, 0x1.0b0056ad4379cp-250, 0x1.2a20961197ea1p-165, 0.0, 0.0,
     0x1.794405832f791p-725, 0x1.124545d7d1fd5p-682, 0x1.9c6e25641a709p-117, 0.0, 0.0,
     0.0, 0x1.a0e08f0c02c9ep-551, 0.0, 0.0, 0.0, 0x1.fb1fa91beb838p-218, 0.0, 0.0,
     0x1.d2e1964c03edbp-839, 0.0, 0x1.257f4fd0988d9p-906, 0x1.5f1fe743f41fbp-920, 0.0,
     0x1.11aecd187bd3cp-708, 0.0, 0x1.d450456d58295p-372, 0x1.79bd4b00586e7p-419,
     0x1.2c39cd6a9871ep-365, 0.0, 0x1.a0d06ebcaee22p-558, 0x1.f3c2d6b539bap-965, 0.0,
     0x1.f1f7e116e1d4dp-466, 0.0, 0x1.f3ca8ec9a8d2ep-60, 0.0, 0.0,
     0x1.3d90bedb3cc5fp-412, 0x1.4af05c4a7a255p-218, 0x1.e55a83ee6a2b5p-117,
     0x1.59a5c94913813p-688, 0x1.d625725497747p-462, 0x1.058c40e63b431p-801, 0.0, 0.0,
     0x1.52b45731456ffp-1000, 0x1.5f70f533856d3p-369, 0.0, 0.0, 0.0,
     0x1.09b098cada71bp-437, 0x1.70464fdea0b68p-235, 0.0, 0x1.4d9aa432fa4ccp-107, 0.0,
     0.0, 0x1.f0eff5d1babc2p-278, 0.0, 0.0, 0x1.ea46fa4d670dbp-330, 0.0, 0.0, 0.0,
     0x1.8c8c4afa4e203p-936, 0.0, 0x1.2c657de68ce8ap-819, 0x1.e85e7dd97c881p-621, 0.0,
     0.0, 0x1.f62e2c231709fp-138, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1786dfcd3287ep-506, 0.0, 0.0, 0x1.0c3ce29550917p-592, 0x1.c25451a776857p-458,
     0x1.0b0e9bc30702fp-622, 0.0, 0.0, 0x1.40c0757ff4516p-433, 0.0,
     0x1.d4d8f80ecb345p-791, 0.0, 0x1.1566f5613c7f6p-836, 0x1.47556751d0c07p-464,
     0x1.dfd3ea08a0657p-892, 0x1.4bf71afb04ca2p-218, 0x1.c7daef84c91dcp-1000, 0.0,
     0x1.eb8c86e18078fp-190, 0x1.556ea66b24a44p-528, 0x1.822f1eeb0dd6fp-23, 0.0,
     0x1.daa2f77f84fb8p-737, 0.0, 0x1.526e079bf0788p-230, 0x1.455a38fee813bp-877, 0.0,
     0x1.1cead2ce93eacp-854, 0.0, 0x1.caf93f344034bp-426, 0x1.a7103d52b1a05p-38,
     0x1.d7c1b3df65565p-770, 0x1.9496524bcc5c3p-569, 0x1.9d1124384b1c7p-821,
     0x1.85091f71ae22p-35, 0x1.73eadc5263541p-510, 0x1.dd78f106b998cp-877,
     0x1.4bc23d7b39796p-668, 0.0, 0x1.b634195b8a045p-314, 0x1.30d38f464303ap-460,
     0x1.6b485fe90535ap-413, 0x1.369aea743f694p-421, 0.0, 0.0, 0x1.a23fd64380747p-366,
     0.0, 0x1.9f9c3739d57bcp-225, 0.0, 0.0, 0.0, 0x1.dce168e04e1a1p-624, 0.0, 0.0,
     0x1.d05f827f517e6p-727, 0.0, 0x1.4f9a7bb2320b5p-751, 0x1.ea5d309350fbbp-553, 0.0,
     0x1.002fd66127a68p-927, 0x1.32e05cfdfaaefp-978, 0.0, 0x1.aa547b686423ap-579,
     0x1.483ab4eea5f8cp-466, 0.0, 0.0, 0.0, 0.0, 0x1.c6e42543a57fep-395, 0.0, 0.0,
     0x1.531a91d22ce61p-907
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sqrtd4_u35kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
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
    printf("Sleef_sqrtd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
