/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d4_u35kvx.c --function Sleef_log2d4_u35kvx \
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
     0.0, 0.0, 0x1.1f3cf7425c10cp-150, 0x1.71b518fb36a52p-610, 0.0, 0.0,
     0x1.30de9256a66f3p-779, 0x1.d7ab5a6c6fabap-109, 0x1.7a53850cc1155p-224,
     0x1.8728d2cf2ae9bp-619, 0x1.36d7e7be13d33p-771, 0x1.f759ab68c00a6p-292,
     0x1.f2f3ba916159p-760, 0.0, 0.0, 0x1.2198535ef5ddcp-1012, 0.0, 0.0, 0.0, 0.0,
     0x1.c526615d91524p-27, 0x1.713872dafac87p-412, 0.0, 0.0, 0x1.575211c435556p-736,
     0x1.2f21711425796p-548, 0.0, 0.0, 0.0, 0x1.b43da39146b53p-682, 0.0,
     0x1.8992eedf2942cp-411, 0.0, 0x1.796b042150e85p-30, 0.0, 0x1.808879d2f1017p-638,
     0x1.0d557494fc653p-236, 0x1.df091ffa73c02p-574, 0x1.6da3fb8781a95p-672, 0.0,
     0x1.cdeaac1faf954p-411, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1c28163c222a4p-437, 0.0, 0.0, 0x1.4d1a56236579bp-488, 0.0,
     0x1.92ba0cc6a05f3p-78, 0x1.df3270c4df0eep-727, 0x1.e3809a80be46fp-648,
     0x1.76b133bf2d64p-759, 0.0, 0.0, 0.0, 0.0, 0x1.9abb3bfe3d494p-824, 0.0, 0.0,
     0x1.1fdf2e2944a14p-668, 0.0, 0x1.889ee14237127p-131, 0x1.3a9ec76a766p-415,
     0x1.69f6034f4bdaap-312, 0.0, 0x1.7caef5bdb3559p-406, 0x1.2d1faedfd7566p-74,
     0x1.6a7cd946dd9fep-497, 0x1.4a903f00b2f07p-429, 0.0, 0.0, 0.0,
     0x1.c551ff55c7c4ap-436, 0x1.6b64f76a3fc1dp-686, 0.0, 0x1.3d66016a851bp-925,
     0x1.c5d4982f0a563p-608, 0.0, 0.0, 0x1.59c62a255590dp-338, 0.0, 0.0, 0.0, 0.0,
     0x1.f9a14a6cf9209p-250, 0x1.a7a653ec5decdp-593, 0.0, 0x1.2b16ee19d1cecp-107, 0.0,
     0x1.3f9e7615d9d49p-263, 0.0, 0x1.2de64a8159ecbp-16, 0x1.53388a201340bp-918,
     0x1.ca7f1a72b9b1dp-586, 0x1.1fe3d81c0c99dp-159, 0x1.67459463bfda2p-791,
     0x1.6f2bafd41cd31p-949, 0.0, 0x1.21cced81618f5p-230, 0.0, 0.0, 0.0,
     0x1.3247e8d5ff7d8p-79, 0.0, 0x1.033de5cd1289dp-373, 0.0, 0.0, 0.0,
     0x1.a15bd74866718p-137, 0x1.991addecb6f7cp-645, 0.0, 0.0, 0x1.cc3f8bec190c9p-292,
     0x1.abf30b02bd6dep-462, 0.0, 0.0, 0x1.47b6e695acdc9p-962, 0.0, 0.0,
     0x1.92c92594ab37bp-388, 0.0, 0x1.43148ca46e1cap-661, 0x1.6dc5f74343bccp-688, 0.0,
     0x1.051fbfcba93b8p-636, 0x1.f4e5aac357951p-994, 0.0, 0x1.b639aa8331691p-680, 0.0,
     0.0, 0x1.f770172b77d06p-627, 0x1.2948d5cfebfa9p-593, 0x1.e983de055c399p-413,
     0x1.a6d7659530e4ap-370, 0.0, 0.0, 0x1.3a7cee49d6128p-302, 0.0,
     0x1.401780d2bb25cp-243, 0.0, 0x1.3233e5ee49772p-499, 0x1.ebb36ee4ee692p-540, 0.0,
     0x1.86534bedf47e2p-403, 0.0, 0x1.c4117361ab767p-721, 0.0, 0x1.71d8157a21ffcp-310,
     0x1.4c0f3cf46d4b8p-825, 0x1.46c2240b7ec45p-76, 0x1.e1f9c607e9f4ep-458,
     0x1.f027827055024p-985, 0x1.e3009383086f9p-845, 0x1.c4f03829a5b87p-958,
     0x1.31448efb2f013p-316, 0.0, 0.0, 0.0, 0x1.cf7bc72ddf5fcp-662,
     0x1.6c85f8905a169p-794, 0x1.10cc29368b636p-478, 0.0, 0.0, 0x1.f55c180835389p-260,
     0x1.bdc2b7d192827p-425, 0.0, 0.0, 0x1.a168b2aef88e1p-830, 0.0, 0.0, 0.0,
     0x1.a40155aa2d6b1p-307, 0x1.6cc2a6588a38ep-1018, 0x1.61e5f1ecaee33p-801, 0.0,
     0.0, 0x1.a45f5abaa1946p-88, 0.0, 0x1.3d50afb719eafp-92, 0.0, 0.0, 0.0,
     0x1.1f22612b6115p-371, 0x1.dd3d087431618p-899, 0x1.f71912f8f83c3p-301,
     0x1.f6a0953d1194fp-180, 0x1.b0860cb4e3d7ep-983, 0x1.397862766159ap-67, 0.0,
     0x1.acd4b12d0f09ep-1018, 0.0, 0x1.28f7b8b734d35p-763, 0.0,
     0x1.f9a83d5c714dap-738, 0x1.0aa6e7bc60a4fp-884, 0x1.a8aff90babd7p-773,
     0x1.8e824bffffde5p-760, 0x1.b932d7cef8213p-598, 0.0, 0x1.109c0b659d7ep-177, 0.0,
     0x1.24b88e882c31ep-743, 0.0, 0x1.e9b763d15406dp-422, 0.0, 0.0,
     0x1.a49286817277ep-765, 0x1.7d2206c703284p-1013, 0x1.4eaa3ee51d7d5p-963, 0.0,
     0.0, 0x1.5e960fef8223dp-452, 0.0, 0x1.e08bbc3e5b0ap-126, 0x1.175d30b7a7bfcp-541,
     0.0, 0x1.3c72322ede5dfp-504, 0.0, 0x1.b848773768af6p-901, 0.0, 0.0, 0.0, 0.0,
     0x1.cd8a5ff7ad902p-367, 0x1.acb1f5166d92ap-888, 0.0, 0x1.521c6c09380f9p-689, 0.0,
     0x1.1df692d34591ep-788, 0x1.71d79fb7e6ce9p-939, 0.0, 0.0, 0x1.c6785e80abcb7p-660,
     0x1.ed0a33f110a5cp-890, 0x1.bed115e076476p-354, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.41717f466e9bfp-17, 0x1.da10542bdf3bbp-436, 0x1.0dc9bce607f1dp-938,
     0x1.f2e83e6abeab2p-255, 0x1.69747870d8634p-572, 0x1.26997be2b68c1p-25,
     0x1.c2825b1fbc819p-186, 0.0, 0x1.4a3fbd80770a9p-98, 0.0, 0x1.79cf004c10929p-87,
     0.0, 0.0, 0x1.030985d81d379p-891, 0.0, 0x1.49359ec180f41p-477, 0.0,
     0x1.805d77b96c909p-925, 0.0, 0x1.27cf704b98eb5p-625, 0.0, 0.0,
     0x1.b60e2c786dc5ap-661, 0x1.7d98c9a2207fbp-992, 0.0, 0.0, 0.0, 0.0,
     0x1.675e1da485055p-20, 0.0, 0x1.c87b8a2c99cd3p-590, 0.0, 0x1.b8878ef1ee5d4p-808,
     0.0, 0.0, 0.0, 0x1.8b7d300143147p-965, 0x1.e3839181cbb18p-216,
     0x1.a51a09d5814c4p-935, 0.0, 0x1.95ef369bf5386p-603, 0.0, 0.0, 0.0,
     0x1.3bd995b929708p-552, 0x1.20e052ead1e32p-242, 0x1.39d80299802a3p-97, 0.0, 0.0,
     0x1.9d6fac94826f9p-793, 0x1.596f34cc8a097p-633, 0.0, 0x1.ee1aba0e68f52p-331, 0.0,
     0.0, 0x1.6edb7ec227c7p-129, 0.0, 0x1.517937f92b984p-910, 0.0, 0.0, 0.0, 0.0,
     0x1.98bea3bbf2c3cp-704, 0x1.5c61abd37dd3cp-1010, 0.0, 0.0, 0.0, 0.0,
     0x1.e6e5ea09efff8p-228, 0.0, 0x1.185b3458beaf6p-891, 0.0, 0x1.1eb5b82c35f4bp-370,
     0x1.6bdf58fd7432ep-988, 0.0, 0x1.997d8a4e5d886p-810, 0.0, 0.0,
     0x1.27639bc7e4ebfp-722, 0.0, 0.0, 0x1.baa17255625d2p-843, 0.0, 0.0, 0.0, 0.0,
     0x1.8d65187f7b0eap-327, 0.0, 0.0, 0x1.cd4f726cbb1fp-261, 0.0,
     0x1.da65823448eddp-472, 0x1.d3f5df07ec69dp-990, 0x1.c1d5b38d70308p-260, 0.0, 0.0,
     0x1.6992320330a86p-770, 0x1.65d3ae02fe23dp-644, 0.0, 0.0, 0.0, 0.0,
     0x1.7314a6a7b7a1ap-646, 0.0, 0.0, 0x1.c696be2b08d26p-390, 0.0,
     0x1.9fcfca52b5ab5p-36, 0.0, 0.0, 0.0, 0.0, 0x1.8771dbabec28cp-889,
     0x1.816a713ebc77bp-895, 0x1.83fa4390aa32ep-868, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.eb2dfb24676dfp-786, 0x1.095cc1f0fca94p-990, 0x1.dc1c47b4de462p-687,
     0x1.59108ec4d8f53p-1, 0x1.329a1f6238351p-82, 0x1.3adfab5876525p-852,
     0x1.a86d7cdd7fc31p-737, 0x1.36bcbe8dcc7dp-946, 0x1.2d25c7d44dc6ep-369,
     0x1.ec692f75a2621p-447, 0x1.27de06afa0e06p-724, 0.0, 0x1.68f1f15a1cd6bp-827,
     0x1.8d051d4926535p-669, 0.0, 0.0, 0x1.497ef424f1a48p-649, 0x1.a1e260b3426b9p-604,
     0.0, 0x1.b82fa898054f2p-402, 0.0, 0.0, 0x1.0935398f7a087p-131,
     0x1.86bc797918c26p-621, 0x1.06bc1a8bcf5a7p-626, 0x1.7aa8fc1f41f68p-273,
     0x1.cb381311d9aa5p-714, 0.0, 0x1.de4a215fc295fp-15, 0.0, 0x1.4fb18de57f832p-908,
     0.0, 0.0, 0.0, 0x1.986aec82eccabp-316, 0.0, 0.0, 0.0, 0x1.04d8ea415f4aap-526,
     0x1.89cc94e5d6eb2p-356, 0.0, 0x1.6e47b38aa36a7p-447, 0x1.b30fe7f2df181p-950,
     0x1.667b3e25f4cdp-983, 0x1.58c21a909cf8p-1, 0.0, 0x1.dab33c1b082c6p-1022,
     0x1.510d115336714p-363, 0x1.ee709df4610f9p-571, 0x1.94ea998cf16e3p-249,
     0x1.a2424e5119f7ap-99, 0.0, 0x1.e33ca77b71aeap-257, 0x1.88b43a5ad1d97p-776,
     0x1.5b1d32505650fp-716, 0x1.bbe0482aaab8ep-351, 0.0, 0.0, 0.0, 0.0,
     0x1.5439fa36390c3p-287, 0x1.8f709025146b7p-734, 0.0, 0x1.2b9823cc3461p-951,
     0x1.0a7ed83f1eae7p-308, 0x1.cf817383a06b6p-241, 0.0, 0.0, 0.0, 0.0,
     0x1.0cddc20f9831cp-75, 0x1.b179872cb012p-165, 0.0, 0x1.8186185483bb5p-294,
     0x1.df3ab61108679p-186, 0.0, 0.0, 0.0, 0x1.d63ff71bcd102p-459, 0.0,
     0x1.e3386b841be69p-902, 0.0, 0.0, 0x1.5b28a0c8aca2ap-553, 0.0, 0.0, 0.0,
     0x1.83fc10ddd80cbp-350, 0x1.74afe463c1499p-630, 0x1.a5002beae1239p-357,
     0x1.b6923fbca246dp-462, 0.0, 0x1.321016f7d41adp-749, 0.0, 0x1.149ebcd35407bp-755,
     0x1.679e58496c749p-991, 0.0, 0.0, 0x1.29d2b07a537ddp-451, 0.0, 0.0,
     0x1.658892ec2646bp-905, 0x1.8fd89378307e6p-33, 0x1.f9bbd562f178ep-209, 0.0,
     0x1.627e9a029b4a2p-534, 0x1.fe9f5ed186cbp-83, 0x1.918282f95692dp-296, 0.0,
     0x1.1eb935bcdd829p-595, 0.0, 0.0, 0.0, 0x1.1e6481d8e9c61p-939,
     0x1.89f89637377d1p-946, 0x1.d54edab22f218p-346, 0x1.8455e69feaec2p-211,
     0x1.42e4e583acdd4p-960, 0x1.b072cf158d1a7p-168, 0x1.bad77f03ba1d7p-750, 0.0, 0.0,
     0x1.094a62e11de17p-359, 0.0, 0.0, 0x1.0c1347419d933p-612, 0.0,
     0x1.6512576241b5ep-539, 0.0, 0.0, 0.0, 0x1.33e8b75e82c1bp-372,
     0x1.f4fe7d5adc56bp-258, 0.0, 0x1.558ae87fc11acp-273, 0x1.3e040d2e9b2c7p-234,
     0x1.22f6aef9dfeafp-670, 0x1.110988db9d9b7p-586, 0.0, 0x1.7e4e0af8c0717p-646,
     0x1.836028c0a94d9p-911, 0.0, 0x1.47d0dfaae7bd3p-743, 0x1.54e1fd8c84515p-96, 0.0,
     0x1.d74f780613147p-506, 0x1.c64d15ef0c18ap-30, 0.0, 0x1.ba404a7f57c8bp-116,
     0x1.f57ba6f6af2cap-623, 0x1.bc3a86cbc246bp-560, 0.0, 0x1.201574703a1fap-510,
     0x1.d380a3fd0dd7ep-272, 0.0, 0x1.1b21114d29027p-177, 0x1.776533eb34174p-586, 0.0,
     0.0, 0.0, 0x1.5376505dd0badp-825, 0x1.407a869f2f6f5p-193, 0x1.a45bfc15f07ep-260,
     0.0, 0.0, 0.0, 0.0, 0x1.6b801f8c0dcd7p-465, 0x1.e04b5adf06dfep-862,
     0x1.527e97088d397p-496, 0.0, 0x1.e1a645a886f76p-122, 0.0, 0x1.7794ed9b0431dp-38,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7ab3b912f85ep-318, 0.0, 0x1.d5fc5389721c8p-556,
     0.0, 0.0, 0x1.0ba866bb26303p-86, 0.0, 0x1.d217ae82ed23bp-409, 0.0,
     0x1.80c1b29155abfp-13, 0x1.170f712b6944fp-567, 0x1.05486d9b063e4p-231,
     0x1.7b8bae9310052p-958, 0.0, 0x1.35b1196767689p-21, 0x1.0cadcd5311bd2p-765,
     0x1.db102ae8f58e4p-414, 0x1.8bf5ca0c862f5p-732, 0.0, 0.0, 0x1.8232c9e90bc46p-373,
     0.0, 0.0, 0.0, 0.0, 0x1.8c7ec00ef6aafp-77, 0.0, 0.0, 0x1.6a18b30d70777p-590, 0.0,
     0.0, 0x1.6a69e3e7059eep-567, 0.0, 0x1.250e8282f46b4p-354, 0.0, 0.0,
     0x1.5ca924e0ca93dp-624, 0x1.8096c8e91ed92p-770, 0.0, 0x1.ff9b55d7921e4p-780,
     0x1.1a73bc934b9f2p-844, 0x1.4195cd455b131p-695, 0.0, 0.0, 0x1.7d051bd0b385bp-172,
     0x1.e07e0ca4761bp-176, 0x1.55fb496061d11p-631, 0.0, 0x1.62b85cb086782p-410,
     0x1.2199ceceb903p-901, 0.0, 0.0, 0x1.cd20c3c51436ep-4, 0x1.20bec0d2b7357p-714,
     0.0, 0.0, 0x1.bf0972df6a768p-348, 0x1.b80a99e89c7p-968, 0.0,
     0x1.20c70abf2d0c2p-688, 0x1.9344997daba8bp-528, 0.0, 0x1.26f223fbd315bp-830,
     0x1.f28025fae1353p-596, 0x1.b95f58e08f1bap-246, 0x1.9be218836b32cp-411, 0.0,
     0x1.021c307dac04cp-556, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a09e5420f0dp-377,
     0.0, 0x1.7116003fcf493p-634, 0x1.e572dfc371485p-826, 0x1.98c85fb1f3236p-77, 0.0,
     0x1.7d7765b10bc2fp-590, 0.0, 0x1.52ae51ee74f62p-165, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5a83743c247efp-803, 0.0, 0x1.b08b01e522f2fp-535, 0x1.18d326f60de08p-434,
     0.0, 0x1.d341946d73c66p-993, 0x1.d7a33fd82f059p-363, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c1c5f8dd3d998p-104, 0.0, 0x1.3f3369a4c8f91p-325, 0.0, 0x1.9c015f7164007p-44,
     0x1.030465d96ed79p-759, 0x1.0d945dc60eceep-903, 0.0, 0x1.5cbde7b383512p-382,
     0x1.cabb31785c1f4p-659, 0x1.2d597e0cdffdbp-1022, 0.0, 0.0,
     0x1.021ea5f5ea90dp-848, 0x1.86bddd75b605ap-866, 0.0, 0.0, 0x1.0459833391df7p-881,
     0x1.2ac997b2bbb5ap-901, 0x1.909362986c573p-676, 0.0, 0.0, 0x1.8b999e3b1974dp-791,
     0x1.64255c18e43cbp-724, 0x1.a98e8a578adcbp-536, 0.0, 0x1.d588d17775e15p-964, 0.0,
     0x1.5532367e1baf8p-104, 0x1.7634960a2f428p-59, 0x1.ad4fcc8feb128p-94, 0.0, 0.0,
     0.0, 0x1.7c355460a7e8ep-998, 0x1.5c758b89b3954p-685, 0x1.b69be8b3f066ap-456,
     0x1.97f96aee620bcp-524, 0.0, 0.0, 0.0, 0x1.48c7e710fd136p-308,
     0x1.27cdb1ed86566p-35, 0x1.7aa86f31b6b6dp-777, 0.0, 0x1.004bc9f3f0a25p-704, 0.0,
     0.0, 0x1.fee9f38e62d37p-36, 0.0, 0x1.2c86fb05b2b3ap-686, 0.0,
     0x1.1c5cc4d6d949cp-113, 0.0, 0x1.243a215704268p-928, 0x1.ec35d96bb1216p-237, 0.0,
     0.0, 0.0, 0.0, 0x1.12a63eea03f01p-161, 0.0, 0.0, 0x1.9a7f773e302e8p-1004,
     0x1.53d09188aff78p-265, 0.0, 0x1.566fcb13d3dd4p-987, 0.0, 0.0,
     0x1.3e3341d5d8c7dp-946, 0.0, 0x1.bd70ea9f9cf36p-987, 0.0, 0.0, 0.0, 0.0,
     0x1.0604af760e5d7p-176, 0.0, 0x1.1aaf0162f7c5bp-346, 0.0, 0.0, 0.0,
     0x1.fbc2d14510024p-397, 0.0, 0x1.a9084e3187338p-576, 0x1.749065b860b25p-17,
     0x1.ce42679480d3bp-285, 0.0, 0x1.dad4bacdc5463p-775, 0x1.25ee524982a9bp-934,
     0x1.a39ea68d8251ep-423, 0.0, 0.0, 0x1.f33d908b55a1bp-299, 0.0,
     0x1.86bd1feeb1c25p-236, 0.0, 0x1.2e2865ac6b7p-645, 0x1.d2d41751be094p-769, 0.0,
     0x1.bb76814e109ecp-671, 0x1.5d83ea3bf7b69p-54, 0.0, 0.0, 0x1.4078bcec87252p-144,
     0.0, 0x1.289155f429fep-548, 0.0, 0x1.2cc2acd653b3bp-799, 0x1.44651f94af9fp-865,
     0.0, 0.0, 0x1.7f71cc0001fccp-192, 0x1.65d99b0feeacap-1013, 0.0, 0.0,
     0x1.d7859b5ff63ffp-990, 0x1.e192834f442b8p-646, 0.0, 0.0, 0x1.ab3cace0cf0f9p-778,
     0x1.845f3a2f25d54p-880, 0x1.fdc58c22396edp-352, 0x1.efd6849c2f466p-785,
     0x1.82738f403cd5p-314, 0x1.0a4e6adf0761ep-452, 0x1.1de57ac4cc2c1p-774, 0.0, 0.0,
     0.0, 0x1.5a948ee8e74a8p-469, 0x1.4aa0449ac6e1fp-974, 0.0, 0x1.bbcfd1eae4285p-560,
     0x1.8e408f8b39232p-59, 0x1.e5f5f3b007b11p-1, 0.0, 0x1.401216f3cfa4ap-543,
     0x1.3cd1a41afa8bep-1016, 0x1.c5f7bf01c0203p-314, 0x1.774f2613613dep-94, 0.0, 0.0,
     0x1.88811a289ea7bp-351, 0.0, 0x1.157ae56746ee9p-385, 0x1.beb0c130e8f98p-59,
     0x1.11cc3161cc753p-107, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f74bfd9c1108p-871, 0.0, 0.0, 0x1.259acb9ee7797p-767, 0.0, 0.0,
     0x1.33ee25bf7414cp-799, 0.0, 0.0, 0x1.31721cd14fc62p-234, 0.0, 0.0,
     0x1.2dd4b819438a3p-302, 0.0, 0.0, 0x1.165c6c5db67e9p-549, 0.0,
     0x1.9af306fed97fp-441, 0x1.0dcb5a8660f9bp-656, 0.0, 0.0, 0x1.479a6cd32b629p-655,
     0.0, 0x1.d52f1e2bb9bb4p-447, 0x1.8bbcbfb3383c8p-603, 0.0, 0x1.3107bc1b27a33p-274,
     0x1.f3cd1f7eaa6e3p-169, 0.0, 0.0, 0x1.54f443379362dp-335, 0x1.49ec97fb03f13p-175,
     0x1.4d0165cbf0689p-583, 0x1.0a9335ae4bb92p-243, 0x1.6269cc8c721cp-164, 0.0, 0.0,
     0.0, 0x1.84e029686e5d7p-21, 0x1.e5e84b0669c78p-459, 0x1.8091b02fefc72p-774, 0.0,
     0x1.bd4938bcdb8a2p-788, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c9745640a9524p-436, 0.0, 0.0, 0.0, 0x1.17d69d5aca9e6p-640,
     0x1.4da0385d7e2adp-677, 0x1.aaddbbe1efa57p-142, 0.0, 0.0, 0.0,
     0x1.00b2a49b96508p-627, 0x1.da39dfd694331p-16, 0x1.41470781996aep-1019,
     0x1.3e1e2c054b59dp-620, 0x1.c867317f3825cp-84, 0x1.b6abc2ff8f85ap-399, 0.0, 0.0,
     0.0, 0x1.eadfd5e87ce7ep-619, 0x1.14de49aa39985p-603, 0.0, 0x1.0c48de9343ce4p-369,
     0.0, 0x1.0cbaa82e68ec6p-723, 0.0, 0x1.6f1ff7984934bp-739, 0.0, 0.0, 0.0, 0.0,
     0x1.df81460395348p-1017, 0x1.76aa758d5eeefp-913, 0x1.8a2deeb106289p-869, 0.0,
     0x1.0afe38360a3b2p-161, 0.0, 0x1.2c21544976da5p-702, 0x1.9c9ea747d580cp-500, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f051000eb1c7p-618, 0.0, 0.0, 0x1.4d9be6dea12a5p-79,
     0x1.bc36ee591f2e1p-807, 0x1.54d9db13eea49p-885, 0.0, 0x1.24cba75d16d96p-138,
     0x1.e67b31d9cfe07p-637, 0x1.4173cfe713f04p-590, 0x1.ae12b841ecf81p-405,
     0x1.b8ab0a80fe38fp-72, 0x1.0c63bf596558ep-610, 0.0, 0.0, 0.0,
     0x1.d1f9351497ddbp-109, 0x1.da353a71dd654p-766, 0x1.7cea5d33c9c03p-243, 0.0,
     0x1.7500ad7270765p-741, 0x1.1b75e5a792b84p-749, 0x1.9d65ab344e78bp-664,
     0x1.256c1b59534b5p-594, 0.0, 0.0, 0x1.f3a6529efc73cp-213, 0.0, 0.0, 0.0,
     0x1.c2fca01d547bfp-104, 0x1.0f0256ef677dcp-405, 0.0, 0.0, 0x1.bfd994b050455p-264,
     0.0, 0x1.01816808dff4dp-303, 0x1.b8a70b430bf3ap-935, 0x1.cd045cdbf5c3p-68, 0.0,
     0.0, 0.0, 0.0, 0x1.e8c2d2022c437p-224, 0.0, 0x1.697c33c69c8abp-483,
     0x1.90439699b7f9bp-765, 0x1.80edda6bd5fa5p-812, 0.0, 0.0, 0x1.6a37b3a5fdb6bp-111,
     0x1.2dd3c6f7cc99dp-811, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f97229579709p-891,
     0x1.24262814c0e43p-698, 0x1.172de07c8c885p-14, 0.0, 0.0, 0.0,
     0x1.e268af1c571aap-891, 0x1.d5e2749f987f3p-622, 0.0, 0x1.77034c7c01258p-763, 0.0,
     0x1.c00d86b2122f7p-502, 0x1.cb03e13d24eb9p-685, 0x1.9de107d5b2e19p-375, 0.0, 0.0,
     0x1.cd03e26312dbfp-932, 0.0, 0x1.defc889b59bebp-660, 0.0, 0x1.890141605a4a4p-337,
     0x1.966167baa8e56p-345, 0.0, 0.0, 0x1.8726ea74e4a6bp-927, 0.0, 0.0, 0.0, 0.0,
     0x1.14cfe6c38ac75p-158, 0x1.15aa539e06212p-754, 0x1.e8b046ef172e1p-560, 0.0,
     0x1.aa9941a5c59ddp-336, 0x1.c75e0ccaa24ecp-105, 0x1.3d73e61a2314p-151, 0.0, 0.0,
     0x1.7a3df67e5188ep-346, 0x1.2ca44bdb764cfp-180
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
            tmp1 = Sleef_log2d4_u35kvx(tmp0);
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
    printf("Sleef_log2d4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log2d4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
