/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind2_u10kvx.c --function Sleef_finz_sind2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
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


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.a1737c82fd358p-263, 0x1.a790b3989eda3p-560, 0.0, 0x1.c1827c105e176p-708,
     0x1.e83b0e890ccdbp-49, 0.0, 0x1.cdb8776d5f11p-221, 0x1.d76230ccdc2fdp-688, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56410c8325decp-324,
     0x1.b2e70c82541e8p-652, 0x1.0a4941b6bf03fp-602, 0.0, 0x1.0bc3c81251b3p-874,
     0x1.fae054d94e5a4p-38, 0.0, 0x1.c158adebc9ca6p-851, 0x1.0635c0558858cp-129,
     0x1.0d4b7c29d5f13p-289, 0x1.6f1e0838ef9e9p-425, 0.0, 0.0, 0x1.c1a0bee82707bp-420,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fcb433b900f85p-309, 0.0,
     0x1.e523813fd43a3p-276, 0x1.dad37fe49533cp-290, 0.0, 0.0, 0.0,
     0x1.56ef339a3a73fp-965, 0x1.419d5f0cae217p-124, 0x1.7a3af5d8a90a7p-683, 0.0, 0.0,
     0.0, 0x1.e2fa716c76b1cp-29, 0.0, 0x1.d0399b1d9b81ap-642, 0x1.14ec49110a1a7p-714,
     0x1.6bd44160a4bfap-703, 0.0, 0x1.8701923d823aap-85, 0.0, 0x1.428ba5823c603p-994,
     0.0, 0.0, 0x1.dda8452592dbep-698, 0x1.f1125db3f81cp-42, 0.0, 0.0, 0.0,
     0x1.3e5e6496cc5a3p-65, 0x1.4e8cf88609ddp-792, 0.0, 0x1.6f42a0ab13275p-518,
     0x1.d4b7b8eab0359p-383, 0.0, 0x1.91f2804f201cep-1011, 0x1.6fa96e508fd84p-646,
     0x1.253f4863a219p-759, 0.0, 0.0, 0x1.33c0ac38261c9p-483, 0.0, 0.0,
     0x1.981b5139bac77p-719, 0.0, 0x1.bd540a63bc1bbp-59, 0x1.d5163b4ecc98dp-968,
     0x1.735f786bb8ce9p-612, 0.0, 0x1.e3216e11aeb41p-833, 0.0, 0.0,
     0x1.c71e9e4a9abd5p-916, 0.0, 0x1.9ed8e7e8937d1p-484, 0.0, 0.0, 0.0,
     0x1.206b8359b084bp-780, 0x1.e8a8eefbed11ap-257, 0.0, 0.0, 0x1.b0d67a26277b8p-853,
     0x1.66911a1966949p-332, 0x1.c10e3f50ecab5p-592, 0.0, 0x1.6b92c986dea7ap-978, 0.0,
     0x1.fe53c4f0f02e6p-189, 0.0, 0x1.d4eaf52e8acp-675, 0x1.2789eaac2d2d6p-392,
     0x1.c220e798e68afp-244, 0x1p0, 0x1.c7413949197c8p-876, 0.0,
     0x1.f5e458221367dp-358, 0.0, 0.0, 0x1.dd9750c5955d9p-952, 0.0, 0.0,
     0x1.0f8553914a935p-676, 0x1.c9d206f7d947p-23, 0.0, 0.0, 0x1.acc98d09d853cp-263,
     0x1.1052a01a332adp-383, 0.0, 0.0, 0x1.6f78e12a6ba21p-915, 0.0, 0.0, 0.0,
     0x1.38b221c62937ap-373, 0.0, 0x1.7ea9663d0e314p-946, 0.0, 0x1.dea1ebd233e78p-769,
     0.0, 0x1.34e1956f965f5p-34, 0x1.01d8fd8a204ffp-236, 0.0, 0.0,
     0x1.c0297abfdbcc5p-667, 0.0, 0.0, 0.0, 0x1.c74a4696b49dcp-172, 0.0, 0.0,
     0x1.a6d99551465e7p-334, 0.0, 0.0, 0x1.e65cf9296894p-518, 0.0,
     0x1.36fcca276e9fdp-233, 0x1.a91b001df6371p-773, 0.0, 0.0, 0x1.a80624371f906p-664,
     0x1.c3f976bd1714fp-300, 0x1.1e461108f30bap-554, 0x1.c5c66c184d63fp-624,
     0x1.30458d5746846p-432, 0x1.f605bed53ff59p-950, 0x1.9fb4f79a2a2afp-475,
     0x1.f451221a0ca97p-806, 0.0, 0x1.75ef500498f96p-720, 0.0, 0x1.c21af4643fbffp-443,
     0x1.c755622be2f17p-170, 0x1.52ed0c0f99297p-579, 0.0, 0x1.d1e3364175153p-832,
     0x1.48db285c82decp-360, 0x1.8bdcab98c4b8p-118, 0.0, 0.0, 0x1.ff358624bae1fp-255,
     0.0, 0.0, 0x1.f90aac96de254p-99, 0x1.2720de5396c23p-131, 0.0,
     0x1.aabecf3c638a4p-135, 0x1.f4426d7c587a2p-20, 0x1.e37c5224ce138p-631, 0.0,
     0x1.1b0866cb30c12p-191, 0.0, 0.0, 0.0, 0.0, 0x1.ca42310c0514bp-878,
     0x1.73494424b5d2ap-420, 0.0, 0x1.bdfd25536335p-612, 0.0, 0x1.c268ea34dc9a3p-452,
     0x1.96d1cda8b4736p-528, 0.0, 0x1.ee72359f5a194p-628, 0.0, 0.0,
     0x1.303982e915002p-461, 0.0, 0x1.3d227b4588d77p-653, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.157ee12053a13p-41, 0x1.c233fed72d797p-514, 0.0, 0x1.556c37e98f7ep-570,
     0x1.1981a9cb6a5c8p-536, 0.0, 0x1.a9ee5530e976cp-304, 0.0, 0.0,
     0x1.0dc49dd99baf1p-979, 0.0, 0x1.2dc1fb017097cp-468, 0.0, 0.0, 0.0,
     0x1.9a1b99f6163a4p-935, 0x1.db0a6cf448d4bp-523, 0x1.5972641f25a9ep-384, 0.0,
     0x1.58af6348fef95p-56, 0.0, 0.0, 0.0, 0x1.c48c728d0d022p-582,
     0x1.8469d108de4d7p-2, 0.0, 0.0, 0x1.877e5e049aa42p-124, 0.0, 0.0,
     0x1.4d0d2de7f4799p-324, 0x1.c18d13ba95074p-69, 0x1.9dbdb21216563p-1012,
     0x1.7698bec22628dp-944, 0x1.2316bd8cba01ap-51, 0.0, 0x1.315411de04d94p-857, 0.0,
     0x1.1082d731cafc1p-609, 0x1.f98002f81057cp-124, 0.0, 0.0, 0.0,
     0x1.e1c4058c2e62dp-396, 0.0, 0x1.4a21314a09001p-829, 0x1.1335343abc077p-445, 0.0,
     0x1.b531891fceea8p-532, 0.0, 0x1.47352bcf4ab1dp-316, 0.0, 0x1.624c141721dc2p-249,
     0x1.ac6bfe112ed32p-501, 0x1.e300a9121cc67p-439, 0x1.62692aacb2a8cp-742,
     0x1.c860f889290b2p-873, 0x1.f350f824f2493p-577, 0.0, 0x1.df9819d450d3fp-5,
     0x1.85b7ef9a78104p-360, 0x1.d6664549e88e4p-117, 0x1.6ab514bc4800dp-487,
     0x1.65e1abc9bd5f5p-750, 0x1.0a2372b6a264ep-560, 0.0, 0.0, 0.0, 0.0,
     0x1.1a21951440d4cp-522, 0.0, 0.0, 0x1.cc290f7b4ed0cp-768, 0x1.dbc355866f1c7p-455,
     0x1.b90c6c3c1707ep-941, 0.0, 0.0, 0.0, 0.0, 0x1.183685147cf4fp-713,
     0x1.3bbdd5e2ab0dbp-180, 0.0, 0x1.c3d00f19c8ec5p-192, 0.0, 0x1.2f7ec10dc5082p-579,
     0x1.4b5ddad21534fp-874, 0x1.6ea2cb3325f7cp-183, 0.0, 0.0, 0x1.5d105d46abb75p-646,
     0x1.83585b61a0c3dp-413, 0.0, 0x1.7d89d1a319e6dp-377, 0.0, 0.0,
     0x1.19b2adce73d9ap-667, 0x1.cd8eed31f80cdp-409, 0x1.e9e621e7dfb12p-488,
     0x1.021be7ddd1f7bp-934, 0.0, 0x1.26fefac8c1f63p-845, 0.0, 0x1.a3992dd47bf67p-76,
     0x1.b4f8d3e3a8815p-659, 0x1.dec8f937da3a4p-210, 0x1.99b9eb45da22ep-505,
     0x1.4270aaf50c87dp-893, 0x1.de3671f7c6004p-157, 0x1.af7b6874ed266p-285, 0.0,
     0x1.c2fde8428392ep-50, 0x1.46c6efe01e58ep-906, 0x1.f3132862c4b26p-639,
     0x1.9e87042f17becp-952, 0.0, 0x1.48bfb4d252e54p-826, 0x1.95e6068eccfc4p-318, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9987df238a051p-30, 0x1.9666a58885997p-656, 0.0, 0.0,
     0.0, 0.0, 0x1.b1e509a874586p-33, 0.0, 0.0, 0.0, 0x1.6f33134190e14p-210, 0.0,
     0x1.2437f03bb2a4fp-18, 0x1.3d56608ef0acfp-678, 0.0, 0x1.f57ccfa832dbfp-392,
     0x1.3751e297081a3p-180, 0x1.cbd6611406p-555, 0x1.bab0ff25b2442p-931,
     0x1.680fb616046f6p-207, 0x1.6cdb53b9297cap-246, 0.0, 0x1.6c64c58386485p-350,
     0x1.10f3f247edfap-664, 0.0, 0.0, 0x1.0acb9f6c72abep-484, 0.0,
     0x1.30fca559f399ap-421, 0x1.061398b8216f8p-970, 0.0, 0.0, 0x1.385514696965ep-809,
     0.0, 0x1.7f303d45dea9ap-811, 0.0, 0.0, 0.0, 0x1.fe780a47d737bp-1009, 0.0,
     0x1.68f592d3fdc28p-223, 0x1.cbb1349fd9329p-494, 0.0, 0x1.bd134ddef2a82p-829, 0.0,
     0x1.779fb3d712e0ep-613, 0x1.479c89501cbbp-512, 0x1.8c4bb66d2cd71p-745, 0.0, 0.0,
     0x1.ce61077226aa8p-928, 0.0, 0x1.43289d414ed58p-128, 0.0, 0.0,
     0x1.6acc2ce6d1b29p-981, 0x1.6409ba253a175p-866, 0.0, 0.0, 0.0,
     0x1.78f1dad56249dp-774, 0.0, 0.0, 0x1.8baa91389bb3fp-534, 0.0, 0.0,
     0x1.a08e168c5f9d8p-147, 0.0, 0.0, 0x1.37ed72dbfc711p-931, 0x1.9b499b31396f6p-724,
     0x1.97cc2a4436a73p-1008, 0x1.d6b4e9dcb8672p-521, 0x1.6bd2586fa1604p-353, 0.0,
     0x1.ca89ea93c515dp-576, 0.0, 0x1.d6ac1f0f152e6p-988, 0x1.d295c6b4ff793p-53, 0.0,
     0x1.9e6080f3f255ap-148, 0x1.e1027219119c1p-72, 0.0, 0.0, 0x1.e9816614ea4ffp-730,
     0.0, 0x1.d8d3f66460811p-911, 0x1.b89afa536e4d8p-338, 0x1.48fdfc49a6dccp-246,
     0x1.d0385aa47b209p-339, 0.0, 0x1.cb17d777a8cdbp-269, 0.0, 0.0, 0.0,
     0x1.4d072aaf4accp-204, 0.0, 0.0, 0x1.fa1746f3cb94fp-677, 0x1.f8f83f70756a3p-278,
     0x1.c3d8df5accd78p-951, 0x1.ea51048c9732ep-557, 0x1.458860ff84cbbp-897,
     0x1.bb61c1f261e61p-263, 0.0, 0x1.de502909bc16cp-1016, 0.0,
     0x1.d215ff1fa152fp-139, 0x1.0d2543bd0104ep-486, 0x1.722785fb6404dp-382, 0.0,
     0x1.1597e4269b6eap-382, 0.0, 0.0, 0.0, 0.0, 0x1.972dbafae3522p-11,
     0x1.7ebbcb76195bap-705, 0.0, 0x1.abecd08ef734fp-654, 0.0, 0x1.7e478feacc4b9p-116,
     0x1.d8d2ee249734bp-945, 0.0, 0x1.3413cfab165e5p-820, 0.0, 0x1.e7efcd6cbabb3p-653,
     0x1.5aabf755bcea3p-981, 0x1.7d4677336d916p-780, 0.0, 0x1.e845d2c43f095p-731,
     0x1.811a0603a8d84p-815, 0x1.7187c01944093p-675, 0.0, 0x1.b5008cfc89c67p-121,
     0x1.f0e71192211ccp-851, 0.0, 0.0, 0.0, 0x1.fd09016bf24bfp-496, 0.0,
     0x1.ea5c109781bf8p-402, 0x1.93985784473f8p-360, 0x1.829936fba1ee8p-610, 0.0, 0.0,
     0.0, 0x1.1aee426d4a6b5p-134, 0x1.2e1d5d3e670a8p-915, 0x1.d37a571f3d6f6p-322,
     0x1.1d5102b698078p-993, 0.0, 0x1.543fff21f7135p-655, 0.0, 0x1.0349dacd06916p-948,
     0.0, 0x1.6a2435015d8b9p-113, 0x1.14e254e434817p-991, 0x1.df7b0c6658429p-178,
     0x1.199cf6f46a241p-364, 0x1.70903d19ff684p-255, 0.0, 0.0, 0x1.aab38d460e36fp-198,
     0.0, 0.0, 0x1.1133b3b801efdp-282, 0x1.54dc62ab4ab69p-100, 0x1.2a6df6a1d8762p-381,
     0x1.c60d6218f558fp-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6315be9c71af4p-614,
     0.0, 0.0, 0.0, 0x1.72f15eaafd9p-287, 0x1.0982db2707217p-468, 0.0, 0.0, 0.0,
     0x1.c51327fd8741ap-273, 0x1.150e5977593e7p-631, 0x1.e1524c6a46256p-184, 0.0,
     0x1.ee553cb2d217bp-281, 0.0, 0.0, 0x1.adebfbb7dcbc7p-775, 0.0, 0.0, 0.0,
     0x1.3992905dfc6fep-684, 0.0, 0x1.59d39c06bac86p-419, 0x1.cac000b1c9585p-935,
     0x1.9376cee2eb54ap-8, 0x1.d67897198ededp-494, 0.0, 0.0, 0x1.0106fcfa484b2p-261,
     0x1.a327ecf3bb9a5p-723, 0x1.dc56f5e5a251bp-865, 0.0, 0x1.365eb1bec34eap-123,
     0x1.1936ce3e18817p-424, 0.0, 0x1.92066187a3cafp-7, 0.0, 0.0,
     0x1.22376afc5e399p-168, 0x1.698dd944b007dp-777, 0.0, 0.0, 0.0,
     0x1.a324910b624bap-117, 0.0, 0x1.64737588c0837p-614, 0x1.ee348d9c87e77p-764, 0.0,
     0x1.51b35f2228dd2p-453, 0.0, 0x1.99faf4f680cbep-257, 0x1.7f9c20bb2272dp-254,
     0x1.8750c9cdb7ffbp-762, 0x1.8252654b0a501p-981, 0.0, 0.0, 0x1.1c137d317434bp-609,
     0x1.4866d0b8c9be7p-148, 0.0, 0x1.df7e561d05a14p-564, 0x1.af0f8e49bcf82p-669, 0.0,
     0.0, 0.0, 0x1.88edd8e04e642p-518, 0.0, 0x1.04b1ff6b4b3fdp-762, 0.0,
     0x1.a6b67b516641ep-938, 0.0, 0x1.c33cf4bab2dc8p-863, 0x1.01aaf3fc7c7a4p-601,
     0x1.b712cb829ee25p-737, 0.0, 0.0, 0x1.904bfd669cccep-907, 0x1.c26858b7303b2p-866,
     0.0, 0x1.c438d93a9c7dfp-824, 0.0, 0x1.9ff333a6e5099p-831, 0.0,
     0x1.9f5453e060fd3p-658, 0x1.06b33b36efb18p-518, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7807a03f4c94bp-89, 0x1.edcd62e53f7d7p-386, 0x1.69fe331b93486p-849,
     0x1.83f66ca7b2b5p-162, 0x1.0edf728ce2856p-689, 0.0, 0x1.d021888f5cdbp-612, 0.0,
     0x1.8c6c3d3c89fb7p-577, 0x1.51f1c4d6b8fd7p-942, 0x1.1cba80a04cd57p-843, 0.0,
     0x1.05ab60ba42dcbp-667, 0.0, 0x1p0, 0x1.4d0d331a32d5bp-973, 0.0,
     0x1.9b0e5aea1e0bfp-833, 0x1.078e8fafec612p-113, 0x1.155ec95f56a0cp-710,
     0x1.1ffb8cac6f7e1p-133, 0x1.a0a56c7525292p-263, 0x1.731fb0ef28258p-161,
     0x1.e368995ca7064p-117, 0.0, 0x1.8fa528d3cf8b2p-713, 0.0, 0.0,
     0x1.1bb0aef67bc52p-851, 0x1.1507387e9b0edp-819, 0.0, 0x1.10f4357a31d63p-921,
     0x1.ac51f00bebd5ep-702, 0.0, 0.0, 0x1.ea3990de8f40ep-158, 0x1.7ce6a0d6769e6p-111,
     0x1.3ae19ce127159p-206, 0.0, 0x1.a20c06a5db095p-503, 0.0, 0.0,
     0x1.8a43d1e053e6ep-772, 0.0, 0x1.a6a07aba9e85ap-698, 0x1.d4fb0f22e767bp-367, 0.0,
     0.0, 0x1.42c60d70c4bebp-799, 0.0, 0.0, 0x1.441a564ac1bcep-785, 0.0,
     0x1.3a68d3fe1fd44p-882, 0.0, 0.0, 0.0, 0x1.e0f0b4c59b219p-875,
     0x1.1d78275bd2ec1p-763, 0x1.16edf0c4cf53ep-765, 0.0, 0x1.b11bde67fdd5ep-101,
     0x1.304abc2bd7d6ep-842, 0x1.5ae5211c8f258p-344, 0.0, 0.0, 0.0,
     0x1.db7227fc69a7dp-887, 0.0, 0.0, 0.0, 0x1.e37dd3ffc394ap-554, 0.0,
     0x1.b011b78a9bb6ep-235, 0.0, 0x1.c24a7de20aa41p-1001, 0.0,
     0x1.bcf2bff44d779p-848, 0.0, 0x1.0e9f844c5ca6ep-121, 0x1.d69d4ccb75094p-272,
     0x1.4673fb76ceb43p-945, 0x1.5fbce94419c22p-677, 0.0, 0.0, 0.0,
     0x1.71c09fc1ede81p-601, 0.0, 0.0, 0.0, 0.0, 0x1.080e3a905a1c9p-151, 0.0, 0.0,
     0.0, 0x1.c9d9bf618be4dp-801, 0x1.fa0a961baaa94p-669, 0x1.ef3dae7f89af2p-1,
     0x1.bbdef7a7db505p-221, 0x1.6e2bfb57459dcp-124, 0x1.390dddc9325a3p-327,
     0x1.80ccd005100e8p-572, 0x1.1160f78851b12p-583, 0.0, 0.0, 0.0,
     0x1.7f5fcf8ff1697p-329, 0.0, 0x1.6742b6d8be24ep-188, 0x1.fe61b54d8f506p-774, 0.0,
     0x1.5548243a7fb92p-91, 0x1.b8cd96a0084d5p-640, 0.0, 0.0, 0.0, 0.0,
     0x1.36fb13810aaf5p-397, 0x1.95f22e4795522p-908, 0x1.78b9616466be2p-963, 0.0, 0.0,
     0x1.44f14dfc5f565p-34, 0.0, 0.0, 0x1.cfe989619104ep-35, 0x1.116d41d92508ap-336,
     0x1.16dd185e68be7p-168, 0.0, 0.0, 0x1.982ab22482041p-533, 0x1.126916d614a81p-534,
     0x1.1dcffe7dbc127p-2, 0x1.a1a0c31c2a22dp-142, 0x1.d8c9b80df6984p-782,
     0x1.288273bca087fp-598, 0.0, 0x1.8454cfdd77d36p-639, 0.0, 0.0, 0.0, 0.0,
     0x1.d5b49b5d5afe3p-308, 0.0, 0.0, 0.0, 0x1.33f6974a852c1p-473,
     0x1.089e7c0d97121p-80, 0x1.37397cb589386p-235, 0x1.0946ee582cacdp-262, 0.0, 0.0,
     0x1.03b17123c6db9p-325, 0.0, 0.0, 0.0, 0x1.3a9a41b756f72p-404,
     0x1.02cb548a47178p-52, 0x1.243649574d1abp-42, 0x1.5fb69c121016dp-636, 0.0, 0.0,
     0x1.60082b5601a4dp-707, 0.0, 0x1.c985e0998a226p-393, 0x1.efe40a0e5ccb4p-420, 0.0,
     0.0, 0.0, 0x1.b6c162ca48e2dp-837, 0.0, 0x1.b722d22928956p-757,
     0x1.9ce0911e80cb6p-679, 0x1.12432694be5bbp-1008, 0.0, 0.0,
     0x1.522d6a5b80afep-987, 0x1.dac1b3b32ef51p-861, 0x1.9f395b65b13e2p-557, 0.0, 0.0,
     0.0, 0.0, 0x1.b9a1201214a4cp-63, 0.0, 0x1.e5a3b24bdff08p-556, 0.0,
     0x1.8f0fc19573d3fp-208, 0.0, 0x1.76f60c4734814p-467, 0x1.532c7493adf48p-865, 0.0,
     0.0, 0.0, 0x1.f7d973609262dp-364, 0x1.966a68e66a9eep-111, 0x1.a9fbf0eb18b21p-181,
     0.0, 0x1.e1e95ee994083p-39, 0x1.2fa90df55ea6ap-93, 0.0, 0x1.138e6a9167619p-322,
     0.0, 0.0, 0.0, 0x1.8d247bc481d9p-291, 0.0, 0x1.a80314d11a999p-307,
     0x1.f6e205d222cap-258, 0x1.022696aea960cp-347, 0x1.0ee2c81b4d395p-741,
     0x1.8e6e6a1b269b6p-827, 0x1.bedabe621f4eap-254, 0x1.474b03507e103p-1006, 0.0,
     0x1.670f3402628d3p-497, 0.0, 0.0, 0x1.5d5bcd69f5d95p-1012, 0.0,
     0x1.e481726a83f04p-469, 0x1.7947b8d62e7d3p-870, 0x1.26f78b79e67dbp-799, 0.0,
     0x1.ad2828634537fp-889, 0x1.1448d0eff28b5p-543, 0x1.efb1fe329d565p-813, 0.0,
     0x1.b399f00cd3a7dp-812, 0x1.ec3f4dcbab70fp-592, 0.0, 0.0, 0x1.d6b0a49d8a682p-927,
     0.0, 0x1.fbf1dbbb56f95p-85, 0x1.5ccab123ba46cp-935, 0x1.d3afb26688211p-189,
     0x1.48c7a6265faa4p-920, 0.0, 0.0, 0x1.587c379c6e5f1p-818,
     0x1.de7641a27b3d6p-1020, 0x1.7ededfeb60e88p-776, 0.0, 0x1.b0411fe600a5p-329, 0.0,
     0x1.0a35ea41da563p-458, 0x1.dcb720af6a838p-664, 0x1.501e9176154b9p-255,
     0x1.4dd309e5acf42p-1016, 0x1.09ef0f4a36a5bp-889, 0x1.1ceb714c14008p-963, 0.0,
     0x1.e63f9c0e533c9p-303, 0x1.f172bf2a37a65p-669, 0x1.efd6620fc01eep-646, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97867554d595p-993, 0.0, 0.0, 0x1.27408996932dfp-954,
     0x1.03fdba9546359p-639, 0.0, 0.0, 0x1.2d6ba9c4edfccp-261, 0.0, 0.0, 0.0,
     0x1.cc49d7404c7b9p-162, 0x1.9f8d05c2e7a09p-392, 0.0, 0.0, 0.0,
     0x1.f2eb94681a577p-420, 0.0, 0x1.4554162e4e34p-930, 0x1.148fd39f20d4cp-117,
     0x1.70d4dea67874cp-539, 0.0, 0.0, 0x1.8eb35fbd23637p-216, 0.0,
     0x1.88ec453ffc6d7p-133, 0.0, 0.0, 0x1.f99521bb62f7ap-320, 0.0, 0.0, 0.0, 0.0,
     0x1.21e0b326eb5bdp-547, 0.0, 0x1.f10fbb7167615p-285, 0x1.528a8cf3a79b7p-970,
     0x1.2aa1abb0e2d1cp-331, 0x1.cb287732e88f9p-2, 0x1.cf3dfd185e6b2p-691,
     0x1.a216c89e78272p-276, 0x1.77126c80a8f6dp-281, 0.0, 0x1.3a6513bef4b4fp-891, 0.0,
     0.0, 0x1.05b71db9e72f6p-38, 0x1.3ca977f783c9bp-106, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.080f4e7f2840dp-757, 0x1.3a7e558f077e6p-611, 0x1.9330efb3c23c3p-691, 0.0,
     0x1.c4ab90992c945p-656, 0.0, 0.0, 0x1.97520199a0039p-934, 0.0,
     0x1.7258e858e76fap-478, 0x1.9671a6ce1bca3p-82, 0.0, 0.0, 0x1.80acdb66b88bdp-835,
     0x1.b5d7feba85de4p-562, 0.0, 0x1.fb3bf0f1b1819p-789, 0.0, 0.0,
     0x1.761f1e31e467ep-529, 0.0, 0x1.02721da1963e5p-697, 0x1.ff034f75631fep-748, 0.0,
     0x1.651411119d8cdp-736, 0.0, 0.0, 0x1.6fe2ac981f07ep-564, 0x1.1ddab8679b7ep-461,
     0.0, 0.0, 0.0, 0x1.6271e222772ebp-224, 0.0, 0.0, 0x1.569c89d521e0ap-878, 0.0,
     0.0, 0x1.24683a43c5ddcp-292, 0.0, 0.0, 0x1.5d8dee30ee3c5p-286, 0.0, 0.0,
     0x1.45dba11f70b35p-642, 0.0, 0.0, 0x1.ecb12454252f4p-481, 0x1.4d8c819a2a4fbp-349,
     0x1.5ffea39b386adp-112, 0x1.1c15d24ac8df4p-1005, 0x1.fe314ae8a208dp-952, 0.0,
     0.0, 0x1.c487f658df80dp-677, 0.0, 0x1.1ebd060b9ed9ap-40, 0.0,
     0x1.d7a0704474489p-237, 0.0, 0x1.188a7e2b0385cp-233, 0.0, 0x1.321b7c73455f7p-915,
     0x1.c570fccc26fd9p-258, 0x1.74111325d3f9dp-92, 0.0, 0x1.0207be1e7ddb8p-101, 0.0,
     0x1.896a4178a7003p-207, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24557c35aea31p-178, 0.0,
     0x1.55868bb799ddap-585, 0.0, 0.0, 0x1.c2d48c5a45ba4p-337, 0x1.eb168e673ab4bp-291,
     0x1.5cbe638c2fb8ap-542, 0x1.808cb774cd57fp-187, 0.0, 0x1.109ed899035ebp-48, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_sind2_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sind2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sind2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
