/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd2_u35avx2128.c --function \
 *     Sleef_finz_acosd2_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0, 0x1.5f95711613deap-959, 0x1.ec4d85d42df03p-74, 0x1.624d70661fa7ap-2,
     0x1.828008eab0706p-1007, 0.0, 0x1.011d14c0e9aa6p-128, 0x1.657a9c1f3db03p-914,
     0.0, 0.0, 0.0, 0x1.64c8c8ec3169fp-649, 0x1.9834f1b7dcadbp-33, 0.0,
     0x1.1e47b087cf763p-210, 0x1.8f70e0ec8ae9ep-368, 0.0, 0x1.f60c1e712e284p-357, 0.0,
     0x1.b607311f08cc3p-96, 0x1.672833f74661p-484, 0x1.d5ad55f3f651p-638, 0.0, 0.0,
     0x1.a55c74231266ep-518, 0.0, 0.0, 0.0, 0x1.336d7642433abp-59,
     0x1.26e67b33d4584p-761, 0.0, 0x1.55a7fcc65cae9p-181, 0x1.67c0f3c32bd69p-624,
     0x1.ef1f365406d78p-758, 0.0, 0x1.cb2a63ecb81a1p-434, 0.0, 0x1.5862fce6b39c9p-913,
     0x1.30c1f07032294p-512, 0.0, 0x1.1335bcab435f5p-618, 0x1.fa3462983f3fap-822,
     0x1.da6c2fd34c044p-469, 0.0, 0x1.3cc8b59c61afp-280, 0.0, 0x1.71fab1c48b7ap-656,
     0.0, 0.0, 0.0, 0.0, 0x1.7e456a8fd44c8p-118, 0x1.f2f85da065171p-419, 0.0,
     0x1.f0e7cc3d5b109p-535, 0.0, 0x1.64d38e705f277p-682, 0.0, 0.0,
     0x1.38a69cb188845p-531, 0.0, 0.0, 0x1.a6b5827445af8p-127, 0.0, 0.0, 0.0, 0.0,
     0x1.58a9bfbb2b137p-393, 0.0, 0.0, 0.0, 0x1.001e6da40562ap-209,
     0x1.294bcabea508bp-218, 0x1.c590958c65a71p-278, 0.0, 0.0, 0x1.38eeaa62556a9p-58,
     0.0, 0.0, 0.0, 0.0, 0x1.5cd1f9ba23bb8p-544, 0.0, 0x1.16b8b93e83e8p-362, 0.0,
     0x1.33666c8f18fe2p-820, 0.0, 0.0, 0.0, 0x1.3a42d06ba424cp-832,
     0x1.7482588252325p-483, 0.0, 0x1.f7ca9ba552031p-255, 0.0, 0.0,
     0x1.099799b8c5552p-514, 0.0, 0.0, 0x1.45e9ca5ad31d3p-236, 0.0, 0.0,
     0x1.6e16d4ccc3b38p-10, 0.0, 0.0, 0.0, 0.0, 0x1.fa24f8d931f6ep-134,
     0x1.65cf4d518a774p-270, 0.0, 0.0, 0.0, 0x1.b810c303bbb4dp-913,
     0x1.7afdf2fbf16f9p-176, 0.0, 0.0, 0.0, 0.0, 0x1.b2997374d90abp-640,
     0x1.119ce0e765101p-980, 0x1.e03a6da208728p-231, 0x1.f5ab6f762e24p-219,
     0x1.bcf16e922214fp-521, 0x1.ff8776e0fb211p-192, 0x1.1452458d01b05p-551,
     0x1.0b772f2bbea2ap-677, 0x1.0eb34c8c17cfap-106, 0x1.12454f6c0a044p-234,
     0x1.edfe465738fp-885, 0.0, 0x1.9623b1a8b8743p-337, 0.0, 0x1.edbd80bd182d9p-762,
     0x1.44d66bc474c26p-462, 0x1.cff640bb9c6f8p-113, 0x1.f6d13a51f3eebp-741, 0.0,
     0x1.51f2d65b31fd1p-214, 0.0, 0.0, 0x1.9b0192189407ep-668, 0.0,
     0x1.4439b4aaf7683p-770, 0x1.ae5c693d6b53dp-295, 0.0, 0x1.c464021d7ca23p-123,
     0x1.d0bce5d183541p-562, 0x1.5a3c2c579b16bp-85, 0x1.e438323094883p-908, 0.0, 0.0,
     0.0, 0.0, 0x1.2ce40cd89d446p-128, 0.0, 0.0, 0x1.50046db510d0ep-417,
     0x1.1d32e71087a1fp-685, 0x1.6a29cc78502c9p-143, 0x1.52baba503b087p-103,
     0x1.cf74e45bd7a2bp-833, 0x1.0b8258ee4e02ap-655, 0x1.bd0ae6311b24fp-362,
     0x1.2226050390e9p-483, 0.0, 0.0, 0x1.da61034ca0c09p-257, 0x1.fab2d4537a47ep-718,
     0x1.8d137cfc4223bp-410, 0.0, 0x1.875e36346890bp-725, 0.0, 0x1.c7cab6d1e1e13p-297,
     0x1.f886c13624298p-662, 0.0, 0x1.562bc768b3b64p-697, 0x1.a84b2b82a81acp-730,
     0x1.170fdbcaa2321p-524, 0.0, 0x1.ce1989c4e32e6p-912, 0.0, 0.0, 0.0,
     0x1.3252adffe1e3fp-986, 0.0, 0.0, 0.0, 0.0, 0x1.f8bf39cf21a7bp-941,
     0x1.4a091456a8fadp-549, 0x1.3a8c427a9116ep-760, 0.0, 0.0, 0.0,
     0x1.8436265680d04p-402, 0.0, 0.0, 0.0, 0x1.6249f13ae3754p-696, 0.0, 0.0, 0.0,
     0x1.85ed749159ae8p-195, 0x1.5fdc8e95ce51fp-249, 0.0, 0.0, 0x1.66f6e9c14415fp-795,
     0x1.5c18bd8ef8bc8p-206, 0x1.b78922c609d23p-101, 0.0, 0x1.6e74370c4c312p-887,
     0x1.a31ed730fc0a3p-887, 0.0, 0x1.8adde9f7a18bdp-300, 0x1.cef5066ff8012p-589, 0.0,
     0x1.5c7cb93fb848cp-833, 0.0, 0.0, 0.0, 0.0, 0x1.df09815b732fap-284,
     0x1.67827a27f6393p-969, 0x1.747a6583e8598p-790, 0.0, 0x1.4a39e1a950253p-606,
     0x1.7bc424abbabe9p-419, 0.0, 0x1.81aa21068ccap-208, 0x1.4c5b2fb22538ap-83, 0.0,
     0.0, 0x1.3557acf3fc37dp-66, 0x1.c54e712adcb82p-290, 0x1.e7c7e0cede7e9p-926,
     0x1.a8734627617edp-215, 0x1.a1a4bc8c7b316p-850, 0x1.0c162f33ff6b8p-266, 0.0,
     0x1.ab235c0fa17a9p-613, 0.0, 0x1.6c2d24102c21ap-63, 0x1.0467b6e0d1aabp-37,
     0x1.fedb69bc045bbp-492, 0x1.3b632e2bbfc3cp-236, 0.0, 0.0, 0x1.016369ef1970dp-326,
     0.0, 0.0, 0x1.9d7a8bff84e0bp-854, 0x1.0802147843f49p-403, 0x1.8cf2af34fda4ap-593,
     0x1.78005bc6f513ep-841, 0.0, 0.0, 0x1.c609260b2457ap-615, 0.0, 0.0, 0.0, 0.0,
     0x1.5af8ca9b65e1p-382, 0x1.3bf8842462b7ap-998, 0.0, 0x1.9885b2ea1354bp-282, 0.0,
     0.0, 0.0, 0x1.f32ff1796c63p-179, 0.0, 0x1.6f2913f566e14p-870,
     0x1.0da79a17e747bp-413, 0.0, 0.0, 0x1.1b9e9a47a5c44p-613, 0x1.24b7388866422p-630,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51e9a9cbb89efp-283, 0x1.73862561d14b1p-719, 0.0,
     0.0, 0.0, 0x1.9d3cc4eb0aaf6p-78, 0x1.b5d6599e9195bp-265, 0.0, 0.0,
     0x1.6b0d60b58b81p-601, 0x1.e84b41e711b5p-380, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.16c168dbf8ef7p-706, 0x1.341c4d3a1aa3cp-175, 0x1.6cde847bbdf06p-22, 0.0, 0.0,
     0x1.0e5ed1dc24e93p-785, 0x1.1197e52c97bbcp-945, 0.0, 0x1.a64fb2b57f3ccp-236, 0.0,
     0.0, 0x1.d7df4ba125ad3p-513, 0x1.4ab56e23ba014p-777, 0.0, 0x1.2004092e9e3b8p-350,
     0.0, 0x1.434a019e690f9p-707, 0x1.3e9dbcf1a4116p-255, 0.0, 0.0,
     0x1.cb27ff03eb223p-669, 0x1.541c2da600a47p-587, 0.0, 0.0, 0x1.54398e45f1ceep-890,
     0.0, 0x1.958944748d863p-970, 0.0, 0.0, 0x1.0e2777e6134bcp-753, 0.0, 0.0,
     0x1.3f778b9bba7fep-496, 0x1.74eedd847cea9p-878, 0.0, 0x1.0312f6cc5d393p-208,
     0x1.d4aec1d7d37b8p-797, 0x1.55b5ddc92da65p-757, 0x1.dd382cac9be81p-329,
     0x1.94b8ba9d23f7bp-358, 0.0, 0x1.e47d6a282f089p-326, 0x1.c6fa48407128ep-131, 0.0,
     0x1.af1acbf1d5204p-882, 0.0, 0.0, 0.0, 0x1.d203e490b97acp-302,
     0x1.feb4cf9e60d2fp-938, 0.0, 0.0, 0x1.b12f4029e5632p-136, 0.0, 0.0,
     0x1.b813418605253p-417, 0.0, 0x1.70bd9a42aaf1ap-491, 0x1.7c0ec7f42a7a8p-935,
     0x1.172995fd2da79p-745, 0x1.bf88b9417596bp-799, 0x1.63a12cd0e9af9p-972,
     0x1.faffa2e81db6cp-953, 0x1.afd6b4472746p-558, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4248ff578ccecp-665, 0x1.4e3c43634daeap-756, 0x1.a47a335882e99p-937,
     0x1.5bd17d83b7a04p-995, 0.0, 0x1.096aef956ec4fp-79, 0x1.ed5588bb3db6p-38, 0.0,
     0.0, 0.0, 0x1.f5dcea6024132p-393, 0.0, 0.0, 0x1.35603f6cdb48dp-814,
     0x1.98cf681faffc6p-654, 0.0, 0.0, 0x1.0d69e5ce8e385p-373, 0x1.6ac84270260b8p-924,
     0x1.75245933995f1p-705, 0x1.0e34d1b8ccb1dp-475, 0x1.ee39563f8e227p-450,
     0x1.77445ac7b8c35p-321, 0.0, 0.0, 0x1.16fcbff7e12eap-713, 0.0, 0.0,
     0x1.15d3deb30fc37p-508, 0x1.96c6d5aea7fcdp-887, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9180a99a0d69fp-264, 0x1.73a75005ced94p-275,
     0x1.a936c91229b6fp-964, 0.0, 0x1.1603a44313d95p-323, 0.0, 0x1.afd0ac67339c2p-579,
     0.0, 0x1.76a19bd7b4278p-213, 0x1.5ae2f04ce7081p-615, 0.0, 0.0,
     0x1.534d2280b0647p-569, 0x1.5e3b2ecd0a3f7p-616, 0.0, 0x1.2483bce96fc7p-954,
     0x1.0509462835a93p-868, 0x1.fa4e437743b3bp-375, 0.0, 0.0, 0x1.dbd7d6720418cp-713,
     0x1.bfe18084edc0ep-208, 0.0, 0x1.29af105dfa41bp-109, 0.0, 0x1.214ea5acd3bb1p-863,
     0x1.f5e89cac0cd7dp-298, 0x1.a36bc29c29607p-321, 0x1.4f68ed043d8ap-117,
     0x1.82c75f714cdf7p-943, 0x1.a0eda0846009p-644, 0.0, 0x1.abf5ae12b237ap-111, 0.0,
     0x1.c1bd17796d6aep-447, 0x1.3e4d1129eae1fp-7, 0x1.fd0fc873d9a5bp-352, 0.0,
     0x1.dd05a78da2369p-189, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.95688b551b886p-277, 0x1.50b7c278aada5p-798, 0x1.84de0f908f897p-256,
     0x1.29fe1f08b226cp-859, 0x1.e34986f921f17p-877, 0.0, 0x1.739319241a1ebp-140,
     0x1.d9ddd04f2451ap-47, 0x1.61e788950fe27p-347, 0.0, 0.0, 0x1.3463f313d2354p-114,
     0.0, 0.0, 0.0, 0x1.a1dc45185a262p-770, 0.0, 0.0, 0x1.f1ff40644f2afp-239, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7cece8c089684p-733, 0x1.d48e1583bf724p-402,
     0x1.1497f198805d1p-778, 0x1.bc882e5a976a1p-444, 0x1.c57b5d53b134fp-188,
     0x1.102ed03b67813p-705, 0x1.cc9d56ca5ac3p-264, 0.0, 0x1.a2529fc4ec744p-217, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b4f8777470d75p-589, 0.0, 0.0, 0x1.717199b858cadp-753,
     0x1.c0efd0148ae98p-755, 0x1.121fc969aa1f2p-558, 0.0, 0x1.560f6c9ef2441p-977,
     0x1.0f67b89c269f2p-844, 0.0, 0.0, 0.0, 0.0, 0x1.114042bb19d76p-1006, 0.0,
     0x1.1f917d299ea6p-798, 0.0, 0x1.b1076d2a6d8cep-177, 0x1.dcb049cd3d37dp-549,
     0x1.de83d058fdecdp-929, 0.0, 0x1.ad65dd70a93fap-114, 0.0, 0x1.fb1f03aecbfb9p-955,
     0x1.d06bf79c5c796p-243, 0.0, 0x1.b25d7e9fbf0cdp-629, 0.0, 0.0,
     0x1.b52e2c31945f7p-121, 0.0, 0.0, 0x1.07714e934b7e3p-122, 0x1.c8162698698b6p-307,
     0x1.1cedf10625585p-334, 0x1.0b9d1c9e0b39p-959, 0.0, 0.0, 0x1.746940ea56c13p-867,
     0.0, 0.0, 0x1.7c97b78fc80d4p-1003, 0x1.68a6a78b6effap-47, 0x1.cbfd70025a17ap-403,
     0.0, 0x1.e9f9b90b5da72p-852, 0.0, 0x1.c5d351f468bcp-428, 0.0,
     0x1.a978171f2f036p-6, 0.0, 0.0, 0.0, 0x1.eb2c16ddf2fdcp-394, 0.0, 0.0,
     0x1.b5b7b6fbe21e3p-38, 0.0, 0x1.97070f7004a77p-550, 0.0, 0.0,
     0x1.7b0a4e73dc99cp-919, 0x1.838ab75977c26p-41, 0.0, 0x1.3ccdaf57adfe3p-434, 0.0,
     0x1.39e2d1cb69a3cp-783, 0.0, 0.0, 0x1.1f0b0e13dc745p-885, 0.0, 0.0,
     0x1.9a2dde7fd45e9p-299, 0x1.47377f5812049p-445, 0x1.fa451f06255b7p-118,
     0x1.968c86bb0420ap-777, 0.0, 0x1.962ed512de154p-473, 0.0, 0.0,
     0x1.25b4286cd72bdp-143, 0x1.8d08f1ff9a782p-402, 0.0, 0.0, 0.0,
     0x1.1d90b26c1fc98p-144, 0x1.e42108b3c212bp-580, 0x1.e449868907692p-973, 0.0,
     0x1.664d99ef7debcp-997, 0.0, 0.0, 0x1.1f2c19ea9f1c3p-626, 0.0,
     0x1.797a8a1e87e2dp-427, 0.0, 0x1.a91d584cea1a4p-596, 0x1.ceeb545f5a8b6p-799,
     0x1.59dfd2d641d14p-351, 0.0, 0.0, 0x1.b61df0a3e23e3p-284, 0x1.eeda5a57eefe7p-333,
     0x1.035574bf63a47p-441, 0x1.5dd7af8fb9f12p-201, 0x1.cf6a99a95566fp-414,
     0x1.40ce181c57f99p-389, 0.0, 0.0, 0x1.9ba55c765446ep-577, 0x1.74a3a14e88f23p-601,
     0x1.30531cfd67aa9p-154, 0.0, 0.0, 0.0, 0.0, 0x1.b7f3b155ff5e7p-199,
     0x1.09cc6ad2e7e2fp-722, 0.0, 0x1.b5e3d177f75b5p-293, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9580289f12846p-877, 0x1.aa2f2a0bce93dp-242, 0.0, 0.0,
     0x1.c3ecce6b9b447p-294, 0x1.d0595b6182213p-595, 0.0, 0.0, 0x1.6f632e6b3297fp-116,
     0.0, 0.0, 0x1.6a9e6d76acf86p-333, 0x1.b77bfd868d626p-534, 0x1.1c2e17c2c1749p-120,
     0x1.d3229483722fcp-416, 0x1.09a375cc65c4p-590, 0x1.21106253e2e2fp-89,
     0x1.3a882b0b89f43p-26, 0.0, 0x1.c3ee4af6941edp-275, 0.0, 0x1.048fd4be1a652p-150,
     0.0, 0x1.3d864a6d656fcp-64, 0.0, 0x1.2757e4018c578p-801, 0.0,
     0x1.68fe75c56f4dbp-999, 0.0, 0x1.3876209c3514dp-991, 0.0, 0x1.be67cbbacefc3p-302,
     0.0, 0x1.35104529c8c1ap-103, 0.0, 0x1.84156830b332cp-31, 0x1.e2f5ada376035p-58,
     0x1.5b80420aef905p-115, 0x1.4ec6636910f1dp-866, 0.0, 0.0, 0x1.eb5f6c918486ep-350,
     0.0, 0x1.48f01fbbfb515p-657, 0.0, 0.0, 0x1.e8238c8849f46p-595,
     0x1.e96adde09a8ep-477, 0x1.243d5e8821dd1p-348, 0.0, 0.0, 0x1.a1ed0a4a042d9p-396,
     0.0, 0x1.2ae90913db10cp-625, 0.0, 0.0, 0x1.6d2da6555b879p-524, 0.0, 0.0,
     0x1.5d3ef22d34a21p-789, 0.0, 0.0, 0x1.98a0dcf8c2d01p-903, 0x1.c48abdd7c6d5ap-104,
     0x1.68078dc5af8dbp-1014, 0x1.db514fbaaa5ecp-145, 0.0, 0x1.16713a157b3a7p-352,
     0x1.f9bfdad951a84p-598, 0.0, 0x1.ee6dfc2671d28p-505, 0.0, 0.0,
     0x1.0d7efa88c9d45p-482, 0x1.33d46f7b51475p-365, 0x1.fd4b08c3e939fp-722,
     0x1.d73ebb532c635p-381, 0.0, 0x1.7f145daa465e9p-402, 0.0, 0.0, 0.0,
     0x1.7d447a4c2ac7ap-174, 0x1.1a3c44ad3968dp-940, 0x1.6c0abe79d2acap-603,
     0x1.84696daff0f8ep-725, 0x1.8ca1c5ce081f2p-262, 0.0, 0.0, 0x1.ec62f3cba23bbp-933,
     0.0, 0.0, 0.0, 0x1.e946e650d4aefp-255, 0x1.3fbce72aae8bbp-797,
     0x1.e44c53818a3aap-35, 0.0, 0.0, 0.0, 0.0, 0x1.48d138a1cf3c9p-647, 0.0, 0.0,
     0x1.2b25c0a1186bcp-493, 0.0, 0x1.e01187fa28186p-926, 0.0, 0x1.a976902dafcfp-794,
     0x1.ae0fb29433967p-321, 0.0, 0x1.34fd4d851e6e3p-435, 0.0, 0x1.1e5fb4313f65ep-978,
     0x1.3a3fac2e336bbp-354, 0.0, 0x1.699e85ea52e34p-751, 0.0, 0.0,
     0x1.9a3215d45f654p-913, 0.0, 0x1.a4fce5dc83dffp-436, 0x1.795b8056d6773p-980, 0.0,
     0x1.9b95f5f2c9391p-305, 0.0, 0.0, 0x1.648857cb89a3dp-84, 0.0,
     0x1.235b9931b6fc7p-486, 0.0, 0x1.94256b6d61b62p-210, 0.0, 0.0,
     0x1.871512403febp-609, 0.0, 0.0, 0x1.5572e0cd14942p-263, 0x1.6bebe281f095bp-186,
     0.0, 0x1.66c42f43f98a9p-497, 0.0, 0.0, 0.0, 0x1.9928ed2e8d20ep-113, 0.0,
     0x1.40a6c9ce53039p-866, 0.0, 0.0, 0.0, 0x1.c8f618fa7ac25p-223, 0.0, 0.0, 0.0,
     0.0, 0x1.3db12e49fa204p-875, 0x1.f64ceb63b1f2ap-993, 0.0, 0.0,
     0x1.48d0b8f3727f2p-462, 0x1.49f827439ba69p-660, 0x1.c0c818ccddfc3p-263, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6280e5d2ccbc6p-784, 0x1.8213844792625p-686,
     0x1.a6777ae34f5bcp-634, 0.0, 0.0, 0.0, 0x1.9c1211a444472p-42,
     0x1.9929dd2cd21d3p-59, 0.0, 0.0, 0.0, 0.0, 0x1.4649741f18bc8p-248, 0.0, 0.0, 0.0,
     0x1.93909ec218f79p-591, 0.0, 0x1.4be9807afe545p-365, 0.0, 0x1.7272c7235d6fp-134,
     0x1.400ebd5f4963ap-346, 0x1.1ad51ef07de1ep-395, 0x1.767bac8ecc4f9p-225,
     0x1.da645bd6d109bp-80, 0.0, 0.0, 0.0, 0.0, 0x1.15bab4ef31e4ep-118, 0.0,
     0x1.2e8e6ad8762b6p-247, 0x1.326602f9a56bcp-78, 0x1.d9ef5157c50c6p-56,
     0x1.d177975885644p-949, 0.0, 0.0, 0.0, 0x1.92cd07732c5b6p-797, 0.0, 0.0,
     0x1.8c1ad5c06e466p-649, 0x1.e49c931a8dbccp-898, 0.0, 0.0, 0.0,
     0x1.dee9ab70c32fep-740, 0x1.d804087b0ec3dp-206, 0x1.ccd662f3057d6p-340, 0.0,
     0x1.97a185a4e9a99p-458, 0.0, 0x1.7b81463641159p-755, 0x1.774f0c94d3706p-77, 0.0,
     0x1.f3a2f9c1625fbp-947, 0.0, 0.0, 0.0, 0x1.11e29394ace1bp-251, 0.0,
     0x1.09d428b97225dp-479, 0.0, 0x1.bebb8b3f48762p-895, 0.0, 0.0,
     0x1.d78051a1346cap-655, 0x1.79011aa1410a7p-917, 0.0, 0x1.82d0fbf60d3a8p-854,
     0x1.e0680027e0a23p-179, 0.0, 0.0, 0x1.305e4ddcec81dp-153, 0x1.827d4549fd01dp-707,
     0x1.dfd00f1ad996fp-59, 0.0, 0.0, 0.0, 0x1.9e8908ae36368p-610,
     0x1.7aefa5b4b3b53p-482, 0.0, 0x1.b6db1852e6a82p-133, 0.0, 0x1.a23f5310d99c4p-401,
     0x1.46bba2d384adbp-717, 0x1.09e830457cf89p-940, 0.0, 0x1.5339b191d969p-355, 0.0,
     0.0, 0x1.7a2b36932e6e2p-658, 0.0, 0x1.d5b964baa0d52p-610, 0.0,
     0x1.01580ffe316a3p-966, 0x1.e61bac8db7368p-924, 0x1.41ba1904fc7b3p-949, 0.0, 0.0,
     0x1.b218591a9e4eap-939, 0x1.cf095401b9925p-403, 0.0, 0.0, 0.0,
     0x1.e6b483c5ebb16p-68, 0x1.4efdfef987a4fp-827, 0x1.da6e6c7d9f396p-663, 0.0,
     0x1.ee49df09746e2p-308, 0x1.302c9bd0d32b3p-183, 0x1.6d1d38ae8f79cp-6,
     0x1.a6a1965263d3bp-586, 0x1.cc18f171d8f08p-944, 0x1.52a0dbe1ea231p-529, 0.0, 0.0,
     0x1.6ca36181de3e6p-967, 0.0, 0.0, 0x1.d5cec7a9a927cp-1021, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98e80c5bab546p-640, 0.0, 0x1.c2ad6b4776d2dp-783,
     0x1.0b3346e49ed4fp-20, 0.0, 0.0, 0.0, 0x1.a9fa55a3750b5p-487, 0.0, 0.0,
     0x1.052182e31e8cdp-226, 0x1.c62d0bf324d5cp-537, 0.0, 0x1.94f1f85c152efp-272, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c314e1b9bae32p-183, 0x1.296a483ad0b77p-298, 0.0, 0.0,
     0x1.053d881418248p-183, 0x1.c49e44bcc0357p-214, 0.0, 0.0, 0.0,
     0x1.9cc090e56e4d2p-94, 0x1.c6d67b9c42abbp-765, 0.0, 0x1.50a42a3fb1f17p-564,
     0x1.fc6f60b0df959p-636, 0.0, 0x1.d673f4592649ap-969, 0x1.e70f9692eeed1p-791, 0.0,
     0.0, 0x1.beab790075d99p-906, 0.0, 0.0, 0.0, 0x1.12562ebf5fa2p-731, 0.0,
     0x1.96b03615bfcecp-993, 0.0, 0.0, 0x1.3139d213810dp-73, 0x1.434f272fa8bb4p-667,
     0x1.ff0e7a6bb172ep-796, 0.0, 0.0, 0x1.ef2f85a461ab7p-180, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d5e88a4f1fe78p-460, 0.0, 0.0, 0.0, 0x1.8bcd7b0f425fcp-942, 0.0, 0.0,
     0.0, 0.0, 0x1.116914b4b07b6p-590, 0.0, 0.0, 0.0, 0x1.21e05b943322p-225,
     0x1.95c04f92e0303p-425, 0.0, 0.0, 0.0, 0x1.5106ddaf69437p-379, 0.0, 0.0, 0.0,
     0.0, 0x1.261d59a0d649ap-710, 0x1.72d3d108b9e32p-300, 0.0, 0.0, 0.0,
     0x1.1295a39e3b7b8p-691, 0.0, 0x1.975b5bfa5f2d4p-958, 0.0
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
            tmp1 = Sleef_finz_acosd2_u35avx2128(tmp0);
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
    printf("Sleef_finz_acosd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_acosd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
