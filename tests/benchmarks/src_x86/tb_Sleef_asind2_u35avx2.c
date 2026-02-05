/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind2_u35avx2128.c --function Sleef_asind2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.765461b36b627p-143, 0x1.a29889d05a05dp-170, 0x1.a91c767e242ap-781, 0.0, 0.0,
     0.0, 0.0, 0x1.37be4789536dcp-792, 0.0, 0x1.6ae7461f72da8p-32,
     0x1.170970d64ef1cp-978, 0x1.393c2202a138cp-878, 0x1.d9d00d4426f2cp-37,
     0x1.1c209259a76b8p-726, 0x1.74ffdb45f01e6p-427, 0x1.250d35e8a412ap-10, 0.0,
     0x1.8066d06fdd3cp-21, 0x1.8dc0e8b1bf249p-346, 0.0, 0x1.3802e4b9edb7ap-444, 0.0,
     0.0, 0.0, 0x1.e5871d301b048p-137, 0x1.f108d299a67b3p-680, 0.0, 0.0,
     0x1.4b6c3625341a2p-409, 0x1.683f34b844c7ep-887, 0.0, 0.0, 0.0,
     0x1.4eae9fd39d72dp-962, 0x1.d0aa08de893cp-332, 0x1.ae0ac2a69c24ep-760, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ee9f9d8a8519cp-648, 0x1.1adba310cdd25p-403, 0.0, 0.0, 0.0,
     0x1.3279f562dbfdcp-180, 0.0, 0.0, 0.0, 0x1.dee5a76412c6cp-982, 0.0, 0.0,
     0x1.a7a3588f4e2b8p-518, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c18e9191199p-1014, 0x1.b428c2017b36p-553, 0x1.d400183560fcp-922, 0.0,
     0x1.435f26ca25b4ep-56, 0x1.9c902f8653da2p-333, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f656a381e3c73p-854, 0x1.86fd3dbfdc74bp-973, 0x1.427028c876287p-621,
     0x1.60201e2f7b502p-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.78a5e5b7128f4p-404, 0x1.283cb58009992p-813, 0x1.cbfc53fedc856p-163,
     0x1.2becf18342734p-257, 0x1.39ba318a01b96p-235, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb5600e79ba17p-318, 0x1.f1feedf2888b4p-42, 0x1.54c1d271a16abp-276,
     0x1.aa947c0ad2779p-819, 0.0, 0x1.0175adf61a897p-41, 0x1.23ab30a313304p-197, 0.0,
     0x1.e0b40f532893p-1, 0x1.d21092104fde3p-847, 0x1.09756ebb81697p-891, 0.0,
     0x1.e3cf7d20bfb42p-334, 0x1.7b9b21aa7ae16p-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.50e81e3cf3d41p-414, 0.0, 0x1.487093828bd9p-504, 0x1.71dd20c0313aep-129, 0.0,
     0.0, 0x1.22c008226b96ep-903, 0x1.d719ae386d65bp-1018, 0.0, 0.0,
     0x1.e376bc54ccfc3p-647, 0.0, 0.0, 0x1.298290cb75068p-186, 0x1.e5f09dea32dd9p-641,
     0x1.c57124f3210ffp-897, 0.0, 0x1.a09e1a1b8f6e4p-254, 0.0, 0x1.0ccd78382888dp-499,
     0x1.e140f515ec24fp-1020, 0.0, 0x1.8e59a1bc0e1d7p-438, 0.0, 0.0,
     0x1.0984fda7b3d4p-405, 0x1.e0a20111954e5p-237, 0x1.190f5ccb202dp-986,
     0x1.45bbbd0c446b9p-475, 0x1.e6d151112a4a1p-837, 0x1.f8a592d784481p-366,
     0x1.d806a336f2e22p-414, 0x1.484ee2c4ea0dap-53, 0.0, 0x1.8f88947d2117dp-528, 0.0,
     0.0, 0x1.68d0f72fb53f6p-432, 0x1.99245cfc32c51p-913, 0.0, 0.0,
     0x1.09796ae2a7437p-116, 0x1.e88f87653a44ep-159, 0x1.c7e18d41b59fap-1006,
     0x1.dfa95c03aa9e2p-342, 0x1.8161ad63b2b42p-839, 0.0, 0x1.69c1567d93e78p-624, 0.0,
     0.0, 0x1.4e061e7cc05e5p-188, 0x1.e09218ecc4c6dp-493, 0.0, 0x1.045bb370b4ed4p-984,
     0x1.52a51e76f8f57p-842, 0x1.4924ea662cd29p-458, 0x1.8d408c5a7a96ep-400,
     0x1.06ca1160e932ep-567, 0.0, 0x1.0c00eb5eede03p-258, 0x1.df88c39ea2be6p-808, 0.0,
     0x1.79fbbbd9e3cb5p-26, 0.0, 0.0, 0.0, 0x1.979cf4d3dca8fp-743, 0.0,
     0x1.550c036f82b2ap-523, 0x1.dd79284e14452p-138, 0x1.556a20d58731ap-711,
     0x1.52f52c749ac15p-690, 0.0, 0.0, 0.0, 0x1.a19a12780021ap-169,
     0x1.9c9550bfd4b15p-327, 0.0, 0x1.ed7b4836fcb1ap-827, 0x1.e54a96d9d38dfp-420,
     0x1.cfe62578cc87bp-77, 0x1.525fd32cdaf6ap-30, 0x1.7e40095e3492ap-121,
     0x1.ef08d706fbe38p-346, 0x1.3c70328675b93p-320, 0.0, 0x1.54e258b4a21f4p-956, 0.0,
     0x1.954b6d1ddac4fp-695, 0x1.cc74f0d9460bdp-467, 0.0, 0.0, 0x1.f7e377e58a32fp-12,
     0x1.8a44b3c7b2168p-726, 0x1.df7c97603c346p-857, 0x1.440f99bdfccbp-384, 0.0, 0.0,
     0x1.8f52e2d6b2d2bp-636, 0.0, 0.0, 0x1.f7714946838f8p-713, 0x1.3210a052a2988p-607,
     0x1.980f0b8b2500dp-929, 0x1.bba44e9e89b44p-586, 0x1.5e570369406fap-497, 0.0, 0.0,
     0.0, 0.0, 0x1.2a88cb5f17875p-22, 0x1.d969d0f37efcp-944, 0.0, 0.0,
     0x1.76939f32196b7p-651, 0.0, 0.0, 0.0, 0.0, 0x1.edc421e09259ap-387, 0.0, 0.0,
     0x1.34086663317cdp-808, 0.0, 0.0, 0x1.0841752443132p-102, 0x1p0, 0.0, 0.0,
     0x1.28d9e77e8c6e1p-315, 0.0, 0x1.b4e14b23c5bcbp-370, 0x1.b1aec4dd8b2fcp-9,
     0x1.33a4186556e79p-492, 0x1.626ea93b14ebap-64, 0x1.3f9935ff22e56p-188,
     0x1.cacef5e6d959p-934, 0x1.5c8cce6222cb4p-702, 0.0, 0.0, 0x1.5c0118b7226eap-201,
     0.0, 0x1.57580b0f9a7cap-211, 0.0, 0.0, 0x1.6cdb33b650c8dp-709,
     0x1.ec5287d59f85p-433, 0x1.b0a0d5af1ecbfp-72, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aaa9b9b43bb51p-108, 0x1.b474c2f58d25dp-368, 0.0, 0.0, 0x1p0, 0.0,
     0x1.d6b2762d50c0ep-104, 0x1.8b255c76a4b15p-275, 0x1.802b6334971f1p-385,
     0x1.654f60ef78b97p-7, 0.0, 0.0, 0x1.d1b816a877dddp-958, 0.0,
     0x1.3c0f6d5b8cecfp-717, 0x1.ddf84c1866b4bp-839, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b4e1f3c9dcd45p-214, 0x1.fea88288b2ff2p-265, 0.0, 0.0, 0.0,
     0x1.b497dc7a36903p-527, 0.0, 0x1.7dc854ac63fe8p-160, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0520a45ace5a2p-105, 0.0, 0.0, 0x1.1118815ddeb77p-896, 0.0,
     0x1.225b9a27cd014p-24, 0x1.6cb9baa1fa88ep-730, 0x1.0f3c7e8da7933p-824, 0.0, 0.0,
     0.0, 0.0, 0x1.b7301f1523aa6p-528, 0x1.402ec75293c88p-489, 0.0,
     0x1.7327fe9738e2p-450, 0.0, 0x1.71063771769bdp-756, 0x1.ea7096f43e06p-481, 0.0,
     0x1.baff0670d50efp-592, 0.0, 0x1.b9d0b745a14d4p-723, 0.0, 0.0,
     0x1.e64dda35ccf65p-179, 0x1.e16a281e462d4p-807, 0x1.1f9a3158efa4fp-373, 0.0,
     0x1.eda9502c0c0bp-653, 0.0, 0x1.361268dddb0cp-504, 0.0, 0.0, 0.0, 0.0,
     0x1.b6afc21b9fe04p-875, 0x1.a25d7acb1026cp-1003, 0.0, 0.0, 0.0,
     0x1.943b0d6137c26p-542, 0.0, 0.0, 0x1.226959ebe9b4dp-46, 0.0,
     0x1.8bdaa3d062f76p-655, 0x1.bc76e3606cc54p-959, 0.0, 0.0, 0x1.0192afe888a09p-602,
     0x1.eca81c2058accp-520, 0.0, 0.0, 0.0, 0x1.4ba5e0d03f072p-331,
     0x1.d7dfb551ea249p-575, 0x1.eaf258621965ep-276, 0x1.7b4def30ee0f8p-492, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6caacecec5422p-768, 0x1.6b6b6257af104p-844,
     0x1.d49d75a65e67ep-325, 0.0, 0.0, 0.0, 0x1.cba19e6384476p-869,
     0x1.2e76d75ae04dcp-449, 0.0, 0x1.769d341fa40aap-76, 0.0, 0.0,
     0x1.22334418dfceep-933, 0.0, 0x1.e56ed6641edf6p-968, 0x1.29911b773ff59p-812,
     0x1.a70446722d88fp-71, 0x1.5f0961b0dfa8dp-519, 0.0, 0x1.f322b23c40c16p-32, 0.0,
     0.0, 0x1.dd17c3583704fp-464, 0.0, 0.0, 0x1.8420e26be72d7p-792, 0.0,
     0x1.93b6168ad4ef7p-491, 0.0, 0.0, 0x1.f71bbeb002555p-325, 0.0, 0.0, 0.0, 0.0,
     0x1.7c494e10813d3p-652, 0.0, 0.0, 0x1.b0a9303031be1p-728, 0.0,
     0x1.6ea5416191607p-873, 0.0, 0x1.25cb701543876p-859, 0.0, 0.0,
     0x1.68d17a66d0687p-291, 0.0, 0x1.eb071ac745d5p-616, 0x1.ab4b7c99663c1p-597,
     0x1.16105dedda1fap-740, 0.0, 0x1.cb9d9afa290a7p-794, 0.0, 0.0,
     0x1.a2f6e84d97493p-500, 0x1.85b5658b7ea27p-502, 0x1.2149c35f869ccp-1, 0.0, 0.0,
     0.0, 0.0, 0x1.a1d48389975p-995, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a4c1a6f414507p-959,
     0.0, 0.0, 0.0, 0x1.32d4bd55826e8p-441, 0x1.bcc7623dc8e9cp-496,
     0x1.e38aa026878b7p-443, 0.0, 0x1.53beeee1010b8p-642, 0.0, 0.0,
     0x1.3c839cd627f35p-280, 0x1.7944b1adbe513p-482, 0.0, 0x1.927b4024e09bfp-242, 0.0,
     0x1.4f130bb7a75e7p-438, 0.0, 0x1.586f3853dac99p-168, 0.0, 0.0, 0.0,
     0x1.2505778a7e129p-80, 0.0, 0.0, 0.0, 0x1.ede5e9bc1656fp-175, 0.0,
     0x1.a1861cffbfa7ep-240, 0.0, 0x1.7131d25ce2fa1p-52, 0x1.cb40a9b077e6fp-953, 0.0,
     0x1.0a6b4999aefebp-1017, 0x1.1a75b173576d5p-660, 0x1.1c4836305c3c3p-53,
     0x1.c4ef68341b325p-594, 0x1.e00b4ef1bf265p-503, 0x1.64a938685ef5ep-238,
     0x1.ec07273d18a75p-255, 0.0, 0.0, 0x1.ef745772fd268p-220, 0x1.213fcb1f1898fp-694,
     0x1.ecead9db14f8bp-782, 0.0, 0x1.eb48fe0b59d1fp-419, 0.0, 0x1.8fa5b8d344846p-633,
     0x1.1be2c4a6ccaa4p-439, 0.0, 0x1.3c93705641d8ap-3, 0.0, 0x1.9297e4296baacp-40,
     0x1.13ca22fbddbap-519, 0x1.7b7a6b68917b9p-47, 0.0, 0.0, 0.0,
     0x1.7fa28d3c6c698p-138, 0x1.f13c978bdddd3p-434, 0.0, 0.0, 0.0,
     0x1.a91eed6b1b5d5p-426, 0.0, 0x1.4fb7c18715b59p-914, 0x1.ccd16196402a3p-112, 0.0,
     0.0, 0.0, 0x1.e0551b314f0a7p-722, 0x1.57b2c63843fcfp-303, 0x1.cb9fbd023a1b7p-581,
     0x1.13c674bb10b06p-587, 0.0, 0x1.b9511b1ed8789p-871, 0x1.b0d64e8614385p-460, 0.0,
     0x1.b85836f06332bp-863, 0.0, 0.0, 0.0, 0x1.db9e89c4ae381p-749, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a4c37f7a1c42p-290, 0.0, 0.0, 0x1.11cf87f01039fp-755,
     0x1.af287eaa2cb7fp-675, 0.0, 0.0, 0x1.aaa548d9b9857p-1007, 0x1.6dd16dbb00e7p-190,
     0.0, 0.0, 0.0, 0.0, 0x1.203ca208037b7p-250, 0.0, 0x1.705bdaba2daf6p-709,
     0x1.f9266962e85a3p-75, 0.0, 0.0, 0x1.597f44c954acbp-484, 0x1.aa89e0c7afc78p-903,
     0x1.a7c7b6b0544eap-152, 0.0, 0x1.9a611d24f3fe5p-829, 0.0, 0x1.dd9cdc56476aep-724,
     0x1.15845ac310a33p-496, 0.0, 0x1.cacbcfbe240b3p-466, 0x1.0297e608e56c4p-861,
     0x1.0cceeb87157b5p-992, 0.0, 0x1.a31571c39ab1dp-334, 0x1.a33fb11a10ed5p-764,
     0x1.1f80d21f18e86p-694, 0.0, 0.0, 0x1.52f196bb19dadp-77, 0.0, 0.0,
     0x1.2294f1a32635bp-831, 0x1.e73211ea43e9cp-923, 0x1.4f58e81d72198p-665,
     0x1.161471f3c80dbp-580, 0.0, 0x1.f7baf77d69942p-441, 0x1.8054b0accd7abp-41,
     0x1.5852c3706575p-798, 0x1.c1b9af59bc8d5p-896, 0x1.70c0cc3cda908p-703,
     0x1.45efc54f993cap-763, 0.0, 0.0, 0.0, 0.0, 0x1.8e4301a6ccdd5p-981,
     0x1.116c0ef5925fep-813, 0x1.c483c0c0c3df7p-808, 0x1.35bcf05fb1cfap-737, 0.0,
     0x1.ab2c99452acf2p-186, 0x1.1ab27a20269c2p-78, 0x1.06f91b25b035ap-597, 0.0,
     0x1.881b67d281081p-643, 0.0, 0.0, 0.0, 0.0, 0x1.3f423216b2901p-112, 0.0,
     0x1.8e165e2640fa8p-766, 0x1.9e828722cd67cp-270, 0x1.f476a19ec1d62p-157, 0.0, 0.0,
     0.0, 0x1.e61feda9815c4p-760, 0.0, 0x1.dec250491ae16p-249, 0.0,
     0x1.c1e1d6e8e2e85p-253, 0.0, 0x1.51e4104b3fa13p-145, 0x1.458051d56fd24p-326, 0.0,
     0x1.55cc9ae90c4ddp-94, 0.0, 0.0, 0.0, 0.0, 0x1.989925cb47c9p-1000, 0.0,
     0x1.370ea5661157bp-514, 0x1.a4ce43c7b122ep-593, 0x1.2a423cfeac76p-906,
     0x1.9686cf17b0cc8p-867, 0x1.15b3a60fdbe3p-980, 0x1.7336ba3057946p-950,
     0x1.7c444c677d89fp-60, 0x1.c896fa817aef1p-431, 0x1.3006201953523p-814,
     0x1.e32c04a9cc3cfp-746, 0x1.e3308b19ea82dp-77, 0x1.6e6ebb8c9f8ep-621, 0.0,
     0x1.a530032685f89p-564, 0x1.30fb3d3f17108p-585, 0x1.aa8ee91565a8fp-688, 0.0,
     0x1.3202532906822p-155, 0x1.3d7b0a8d976cap-889, 0.0, 0.0, 0x1.a477bffdbdb16p-393,
     0x1.0ba310f89c06fp-690, 0x1.746e985328849p-428, 0x1.ee1675d409fbcp-905, 0.0,
     0x1.08ed0a82e28e7p-221, 0x1.a00673632e31ap-931, 0x1.6f02810eb7eap-996, 0.0,
     0x1.0b114b113a91dp-229, 0.0, 0.0, 0.0, 0.0, 0x1.3cdcac1490279p-279, 0.0, 0.0,
     0x1.dba5e61331b2dp-167, 0x1.30a0af09af777p-862, 0.0, 0x1.76bb55a81852dp-812, 0.0,
     0.0, 0.0, 0x1.672817fc9bdc3p-706, 0.0, 0x1.7ebc35be07807p-382,
     0x1.79fe8377e770cp-629, 0.0, 0x1.c2004832e9e17p-446, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.580730e86669fp-357, 0x1.f92d5fcaeeccfp-356, 0x1.7aaff1bb39d6p-392,
     0.0, 0.0, 0.0, 0.0, 0x1.e966be93d4eb2p-528, 0x1.9ff053a4b2ebap-622,
     0x1.1dff0e8356a7p-350, 0x1.3117a413202dcp-83, 0.0, 0.0, 0x1.d9974980ca55p-454,
     0x1.c21601e8030dp-135, 0.0, 0.0, 0x1.60b74cbb49534p-159, 0.0, 0.0,
     0x1.6241b5d400d79p-495, 0x1.e4ecadb74e9cfp-446, 0x1.f11c7a70a3e77p-445,
     0x1.e96fc827abaeep-242, 0x1.b95f97212f347p-967, 0.0, 0x1.6478f8cfd0e71p-765, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1e348f8642829p-924, 0x1.1757117a2801cp-493,
     0x1.b49cd6dd77ff6p-450, 0x1.24f9a56cb4f88p-434, 0.0, 0.0, 0.0,
     0x1.1750d33d1ff6p-940, 0x1.a559987ae511fp-532, 0.0, 0x1.c9a41342717b9p-494,
     0x1.137b95dcf268ap-258, 0x1.8bbc1bf4e616p-637, 0x1.672be60e1b485p-878, 0.0,
     0x1.a2a4db8e18db8p-341, 0x1.4fdcbd24962b5p-933, 0.0, 0.0, 0x1.68d2dab53b7b7p-236,
     0x1.4c2ec4215b157p-620, 0x1.b136bf91eaf96p-330, 0.0, 0x1.a360dcf6df041p-269,
     0x1.d5263e3d43ae7p-937, 0x1.0e80300879f82p-916, 0.0, 0x1.dc4ea8c7bda1ep-963,
     0x1.66ce9aabee7fap-852, 0.0, 0x1.1353276c0c58ep-11, 0x1.22cc38e01bc49p-193,
     0x1.d54fb3043cf91p-257, 0x1.99562c488dee2p-889, 0x1.fef48b586e787p-137,
     0x1.c06aa19cb36d7p-35, 0.0, 0.0, 0.0, 0.0, 0x1.d598311a55ebp-88,
     0x1.e0e95fddde095p-177, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c853c5460c0f4p-43, 0.0,
     0.0, 0x1.50b8d8d158339p-672, 0x1.fa6bee23191edp-668, 0.0, 0.0, 0.0,
     0x1.cf8f38373deb3p-38, 0.0, 0x1.11f65c091014p-667, 0x1.aa9150180e35dp-624, 0.0,
     0.0, 0x1.3c7d2278e9f97p-902, 0.0, 0x1.265a2521d0ab8p-518, 0.0, 0.0,
     0x1.75638f88f492cp-816, 0.0, 0x1.e94afff0ac4b8p-324, 0x1.5277112b02032p-509,
     0x1.3fa0e904424aep-241, 0.0, 0.0, 0x1.4dde71d00920ap-22, 0.0, 0.0,
     0x1.b4a300edcb3b1p-478, 0.0, 0x1.507f6fb575aa4p-97, 0x1.789408ab5cd35p-905, 0.0,
     0x1.e946529769a4fp-621, 0.0, 0.0, 0x1.f1fefc8a1f255p-337, 0.0,
     0x1.cb1657f3e5f7p-705, 0x1.1be7ffb588d58p-374, 0.0, 0.0, 0.0, 0.0,
     0x1.98170042f01cp-227, 0x1.c44349ea92188p-663, 0x1.d70494543ce2ep-465,
     0x1.e5559115f28fdp-84, 0x1.cbcbdd7fdc2c7p-552, 0.0, 0.0, 0.0,
     0x1.0b1acc1b0aba9p-884, 0.0, 0.0, 0x1.9b6b17c2d842bp-122, 0.0,
     0x1.17deb4aede3e4p-521, 0.0, 0x1.29be8b39b69d5p-959, 0.0, 0x1.9735abc32f85fp-384,
     0x1.b608e6d30d96p-480, 0.0, 0.0, 0.0, 0x1.3a9a61eb985dfp-419, 0.0, 0.0,
     0x1.d19bcea8bbc23p-55, 0x1.616b85f171469p-517, 0.0, 0x1.699783e0d73fp-152,
     0x1.cd47e2190b299p-915, 0.0, 0x1.3e1650b194d28p-760, 0x1.e2d16f6e928bfp-448, 0.0,
     0x1.06e470fcbce4ap-715, 0.0, 0x1.79da1a03d9fb2p-720, 0x1.31e02db5c4ff4p-49, 0.0,
     0.0, 0.0, 0x1.246ced03b7187p-594, 0x1.5512f8cb059e8p-279, 0.0,
     0x1.d1e169cdbb921p-157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99972c7243741p-227,
     0.0, 0x1.2ea17c5080775p-14, 0x1.d577df0a68599p-799, 0.0, 0.0,
     0x1.e6d40af65fb5fp-839, 0x1.e8e8448bda653p-598, 0.0, 0.0, 0.0,
     0x1.1a110fa384e4cp-54, 0x1.7dae290b5e9d3p-767, 0.0, 0x1.e11bc43c96994p-141, 0.0,
     0.0, 0.0, 0x1.d5e259e76d98ep-622, 0x1.7bf8f26b61711p-381, 0x1.3a22c46ff06a1p-875,
     0x1.c3d96483618afp-129, 0x1.6dea51408ff3dp-2, 0x1.4280fe7add1a5p-805,
     0x1.3b2c92f2a4dcbp-817, 0.0, 0x1.f7af0955bbcddp-16, 0x1.076d0e2ec6e1fp-43,
     0x1.e6c939b3e3afcp-36, 0x1.926efba7aaed8p-767, 0.0, 0x1.265428ea1a6d3p-514, 0.0,
     0.0, 0.0, 0.0, 0x1.cca0560601154p-5, 0.0, 0.0, 0.0, 0.0, 0x1.b808cc7bd172ep-611,
     0x1.24832e9f68733p-469, 0.0, 0x1.2acf596e1149dp-252, 0x1.74167c654737ep-772, 0.0,
     0x1.5cfb27b8d008ep-384, 0x1.858fafd401a24p-84, 0.0, 0x1.b0fcaa4c655fdp-508,
     0x1.4dc075e51c7bp-561, 0x1.4d6458870cb34p-861, 0.0, 0x1.0019620549482p-40,
     0x1.675ac59835a71p-139, 0.0, 0.0, 0x1.3b3208499b295p-40, 0x1.2498a6b9e83dfp-77,
     0x1.b65a94327df16p-1005, 0.0, 0.0, 0x1.969e108a2e49fp-1009,
     0x1.cd163cccc82fep-108, 0x1.6b68e4179fa75p-429, 0.0, 0.0, 0x1.abf6b7774471cp-891,
     0x1.d6fddca1c4686p-961, 0x1.67b814f62d4e8p-511, 0x1.973e2e4368348p-430,
     0x1.343021479be9dp-439, 0.0, 0.0, 0.0, 0.0, 0x1.e9115d858ba72p-364,
     0x1.f010dcf572b1bp-1007, 0.0, 0x1.df886e0ab8c1fp-292, 0x1.07dedf5f11411p-133,
     0x1.ce9195717fc6p-660, 0.0, 0.0, 0x1.35cf5a3568a98p-861, 0x1.05c2e05b0fa2ap-945,
     0.0, 0.0, 0x1.39b5347d651fp-503, 0.0, 0x1.e824249efb345p-924, 0.0, 0.0,
     0x1.705f839998c78p-638, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.16cf51aa6122ep-318,
     0x1.5cfb1a9864951p-692, 0.0, 0x1.102084935b6cbp-587, 0x1.fff90e82652e7p-410,
     0x1.9221f7f387e09p-290, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2328f1c770e7ep-602, 0.0, 0x1.de28a3c55839fp-392, 0x1.a4efdbd21e6fap-731, 0.0,
     0.0, 0x1.305a11e076f67p-520, 0x1.1ea4333742668p-728, 0x1.c378d5368ea12p-108,
     0x1.13b53357fdec4p-490, 0.0, 0.0, 0.0, 0.0, 0x1.48e2d61a569bdp-205,
     0x1.a3d657a8e58fap-770, 0.0, 0x1.1028cb6fa92b7p-797, 0x1.05649053c7b9bp-343, 0.0,
     0x1.b3549a727f4e5p-967, 0x1.bfdf0ad74bb42p-363, 0.0, 0.0, 0.0, 0.0,
     0x1.082ea9413cd8bp-685, 0x1.d5f92e74cf7c2p-234, 0.0, 0x1.35c336e2de308p-808,
     0x1.b00b8c929378ep-192, 0x1.08790eef48c4dp-992, 0x1.ab510de9095eap-473, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_asind2_u35avx2128(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_asind2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_asind2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
