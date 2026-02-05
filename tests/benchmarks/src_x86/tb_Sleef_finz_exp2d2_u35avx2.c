/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d2_u35avx2128.c --function \
 *     Sleef_finz_exp2d2_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.123a9d9d2071p-495, 0.0, 0.0, 0.0, 0x1.c5fac737bd194p-739,
     0x1.478cfd1d609c8p-955, 0.0, 0.0, 0x1.5157dbfa3222ep-509, 0.0,
     0x1.7154e3bbde2fdp-23, 0x1.bad386eab85edp-431, 0x1.009394a6d682p-546, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a96302bd63d49p-249, 0.0,
     0.0, 0x1.271c481c7d76fp-384, 0.0, 0x1.781d78892842cp-5, 0.0,
     0x1.6386b55244d2p-155, 0x1.09484f2694516p-112, 0x1.51e5154fc86cbp-962, 0.0, 0.0,
     0x1.3bcb1926f0092p-409, 0.0, 0x1.991199c19d671p-401, 0x1.8d8eeace0a211p-921, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0b412099d9698p-664, 0x1.f8859dff65636p-115,
     0x1.eefe995898ee8p-725, 0.0, 0x1.ad20687e65526p-341, 0.0, 0.0, 0.0,
     0x1.8ef91904e3312p-306, 0.0, 0.0, 0.0, 0.0, 0x1.3dc138aec765cp-184,
     0x1.56a3e08614e6cp-435, 0.0, 0.0, 0x1.172c14161cee6p-792, 0x1.10e69c59311b5p-12,
     0.0, 0x1.9d5756ab17656p-3, 0x1.2d5e0befcbda5p-868, 0.0, 0.0,
     0x1.5c58233ad5fa7p-332, 0.0, 0.0, 0.0, 0x1.d8ded10c76201p-91, 0.0, 0.0, 0.0,
     0x1.8f7795d6f80f7p-697, 0.0, 0x1.70043435e2845p-651, 0x1.cee140d17062ep-659,
     0x1.bfdb0033f6a46p-440, 0.0, 0x1.8ce1faa18f7f2p-18, 0x1.0630fd9c58c56p-979, 0.0,
     0x1.242a3d626c07ap-433, 0.0, 0.0, 0x1.3e0020629c3e8p-63, 0.0,
     0x1.557fb2affbb3ep-548, 0x1.33dcd65625305p-567, 0.0, 0.0, 0x1.fec3882f59cc9p-870,
     0.0, 0.0, 0x1.1e598b62313fcp-888, 0x1.7b0061851bb78p-964, 0x1.fd62bfbabd2cfp-372,
     0.0, 0.0, 0x1.3b802aef9f559p-622, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b161b7f7a0c9p-501, 0x1.2696501086db4p-37, 0x1.9593f6f9bd5fcp-713,
     0x1.b650cf504e79ep-830, 0x1.7bbe8c5bad89ap-165, 0x1.e9074c7f7f5edp-822, 0.0, 0.0,
     0.0, 0.0, 0x1.ea6d6c79637cap-346, 0x1.31abcf364cd34p-1006,
     0x1.716bcba15f48dp-204, 0x1.20125cca0e078p-833, 0x1.fcdcfc14963bap-804,
     0x1.44ea626b20f28p-847, 0.0, 0.0, 0.0, 0x1.d36c05a287e37p-950,
     0x1.b78c0250d22c3p-895, 0x1.c3eac56894d4bp-301, 0.0, 0x1.93ce42b5ace65p-380,
     0x1.57922db45ecc8p-75, 0.0, 0.0, 0x1.05895dd67045ep-627, 0.0,
     0x1.bfebccfe4bb93p-537, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.79a67f8aa565dp-373,
     0x1.b861b606fef73p-985, 0x1.179d89bed50d4p-274, 0.0, 0x1.a0cc5533fc46ap-587, 0.0,
     0.0, 0.0, 0x1.a8cf4f4d7657ap-584, 0.0, 0.0, 0x1.150f30a1eb347p-767,
     0x1.922083c732d1p-759, 0x1.e589e2f814f67p-359, 0x1.dbdca15cfb387p-105, 0.0,
     0x1.305f834783a93p-760, 0.0, 0.0, 0.0, 0x1.6b45ebd4a066ap-835,
     0x1.54bb13ad63f55p-872, 0.0, 0x1.d13fe5cf7e871p-16, 0.0, 0x1.92b9fc9616a4ap-124,
     0.0, 0.0, 0.0, 0x1.07da2b84070c2p-366, 0x1.f0e8050b6505bp-127,
     0x1.06d1da17cd511p-569, 0x1.efc2770a98baep-212, 0x1.9713a2381801bp-157, 0.0, 0.0,
     0x1.6a4885228067dp-636, 0x1.2dbb75f0cbd5fp-439, 0x1.6d52f79f7a933p-290, 0.0,
     0x1.02154bfed19d4p-770, 0.0, 0.0, 0x1.c188a160ff701p-785, 0.0, 0.0, 0.0,
     0x1.4183795788c95p-199, 0x1.94f923727e383p-856, 0x1.edf79ca135b9p-154, 0.0, 0.0,
     0.0, 0x1.c3e4f168302e9p-467, 0x1.868c3403db06ap-269, 0.0, 0x1.2f14df5e8d473p-575,
     0.0, 0.0, 0x1.33094569b0f04p-451, 0.0, 0x1.40a6b1bb85abbp-744,
     0x1.1cf4bcf17b7c2p-332, 0x1.42dde83735cf8p-115, 0.0, 0x1.28c4ee44814adp-863,
     0x1.d16a828189027p-594, 0.0, 0.0, 0x1.34654277654eep-156, 0.0,
     0x1.f6191f8f0422bp-356, 0x1.21d1d487dbeap-512, 0.0, 0x1.006b8b3fe0dep-130,
     0x1.ef62b42d0cf01p-98, 0.0, 0.0, 0.0, 0x1.30bfc425ffa5bp-91,
     0x1.68dca7745b5f4p-474, 0x1.d51984fcece5ap-322, 0x1.7cfea9fb81bbp-151, 0.0,
     0x1.75a3d9774d756p-906, 0.0, 0.0, 0x1.bebcfb980d084p-770, 0x1.38965c68ed022p-673,
     0.0, 0.0, 0x1.ad3fe43acb80cp-222, 0.0, 0.0, 0x1.0d5163e4b0688p-147,
     0x1.41718818f7559p-902, 0.0, 0x1.231bd77c48f53p-659, 0x1.c3f834904a882p-273,
     0x1.f02fe3714c3a3p-887, 0x1.61b5ec56f8294p-361, 0.0, 0x1.1d791c45a1d05p-26, 0.0,
     0x1.ef01e8f3d445cp-300, 0x1.3fd29b6bb4de2p-782, 0x1.ceae0f86c9281p-875,
     0x1.bb36fc86d777dp-371, 0x1.e803ad9cb1e56p-572, 0.0, 0x1.bcccd68e2e45ap-813,
     0x1.e98bb8c320793p-339, 0x1.df52c96c6fcdfp-164, 0x1.c8a2b28b3d1f9p-514,
     0x1.5b4c65fad71afp-562, 0x1.b58088ebc263cp-570, 0x1.da5bcb3db8caap-379, 0.0, 0.0,
     0.0, 0x1.18df38dff6c5ap-31, 0x1.67caa174230c7p-285, 0.0, 0x1.af1a767e83d79p-151,
     0x1.3b6892ca4f974p-541, 0x1.a6ed03561794cp-388, 0.0, 0x1.0142bd0a10308p-879, 0.0,
     0x1.cc551add0b50dp-43, 0x1.8924a9b54b692p-944, 0x1.529d10cf919b2p-184, 0.0, 0.0,
     0.0, 0x1.f7ed97f485b3ep-39, 0.0, 0x1.703132f26026fp-203, 0.0,
     0x1.c00f2b14a1d3ep-511, 0x1.6bc5f9ad8a7e6p-430, 0x1.16d224391be52p-650,
     0x1.40d0713cee1ep-656, 0.0, 0.0, 0.0, 0x1.c41c715363a63p-950,
     0x1.4b0801e68045dp-931, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.379441f28c718p-1011,
     0x1.1fd94c90d1b4cp-980, 0.0, 0.0, 0.0, 0x1.193a4177a31fp-1005,
     0x1.51c6af32eb11fp-137, 0x1.4ad813dc2214fp-998, 0.0, 0x1.704efb061cfcep-53, 0.0,
     0x1.f719796397cd1p-31, 0.0, 0x1.59369f83b398p-976, 0.0, 0x1.abaa5f303409fp-20,
     0x1.73c0a01d9919cp-756, 0x1.e3b2f66c8a944p-316, 0x1.28c2dc0e0539p-50, 0.0,
     0x1.838ebf864f1cdp-80, 0x1.b222a48ea3af6p-255, 0x1.46a7cd0079b4ep-657,
     0x1.4a82c7ac6d50ap-340, 0x1.7a1bb4b509445p-592, 0x1.f64eb5f9a0286p-406,
     0x1.743a921cc220bp-797, 0.0, 0x1.32950083f27adp-430, 0.0, 0x1.884ced48d613bp-704,
     0.0, 0x1.93ea58021acc6p-496, 0.0, 0x1.759ed74df2e44p-810, 0.0, 0.0,
     0x1.e53be6f7ff23cp-458, 0.0, 0.0, 0.0, 0.0, 0x1.33a4bfc0babbdp-773,
     0x1.87e1a0fec343p-469, 0.0, 0.0, 0x1.6154bbf3fb8b8p-198, 0.0, 0.0,
     0x1.fe8176c9e527bp-847, 0.0, 0.0, 0.0, 0x1.2a26f443ae736p-377,
     0x1.89c68e28c852p-985, 0x1.70352bf5ba4b8p-577, 0.0, 0x1.f70d7bd04d5bcp-875,
     0x1.6a34d50496365p-889, 0x1.d004e14b2c88dp-436, 0.0, 0x1.bf99e144d9698p-479, 0.0,
     0.0, 0.0, 0x1.7a9c4cabb4f75p-581, 0x1.151f0ed75e724p-603, 0.0,
     0x1.0a0f9df08370bp-374, 0x1.9d47ed5a1811ap-456, 0.0, 0x1.e0304797001bfp-618,
     0x1.031cc2b509549p-829, 0x1.158876bfe45e3p-229, 0x1.a4027ea8bfe9cp-907,
     0x1.d72178ee7a2edp-134, 0.0, 0x1.98c14bda75176p-29, 0x1.1d4988b2439d8p-937,
     0x1.24e1f82461332p-610, 0.0, 0x1.7b1cb413c20a7p-459, 0.0, 0.0,
     0x1.658770c388406p-896, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b381e6e3370bp-908,
     0x1.48a11a517af42p-498, 0x1.102e132e8f6e9p-424, 0.0, 0.0, 0x1.72f3bab637dc8p-660,
     0.0, 0x1.c2c983df1925ap-328, 0.0, 0.0, 0x1.a022af91c2a6dp-995, 0.0,
     0x1.af470cd99ba5p-939, 0x1.d04a79bdfd7f7p-782, 0.0, 0x1.8b6b67617783dp-375,
     0x1.c09d677c45f92p-314, 0x1.342977247e283p-908, 0.0, 0x1.97fde00fa2d79p-402,
     0x1.980904ddffb4p-798, 0.0, 0.0, 0.0, 0x1.c746aff18eecp-702, 0.0, 0.0,
     0x1.88663f06c7088p-560, 0x1.2951b319846c9p-954, 0.0, 0x1.03f8020c42548p-645, 0.0,
     0x1.8e88ed611f266p-844, 0x1.d4a290889041p-535, 0x1.3c61db7e5e301p-223,
     0x1.8efbe7001da9dp-433, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d54e781be98bp-806,
     0x1.047970585efap-560, 0.0, 0.0, 0x1.1461aa416f39cp-206, 0.0,
     0x1.6eab93633faep-751, 0x1.0c3a94c9aafbfp-383, 0.0, 0.0, 0x1.f8e80809e0f1cp-646,
     0x1.2531b824d1524p-298, 0x1.b0a07c071718bp-295, 0x1.aefb7c5b8e1cdp-400,
     0x1.2a1de91e32692p-960, 0.0, 0x1.c570a0fe3b5fap-967, 0.0, 0x1.afc22cde14fc2p-768,
     0x1.13b83af5684a3p-590, 0x1.1f864ffb9bce3p-819, 0x1.66065cf5f840fp-829,
     0x1.bce7bdb3da8d2p-273, 0x1.a8fa1cb21cb63p-171, 0.0, 0x1.1edba260e1b5ep-85,
     0x1.bb52bec676f8ap-780, 0x1.cbdef8289eb43p-633, 0.0, 0x1.3760978c99cf5p-733,
     0x1.f533602cdd35ep-482, 0.0, 0.0, 0.0, 0.0, 0x1.674bb55883c98p-169, 0.0, 0.0,
     0x1.40f2ecd4da9a2p-959, 0x1.cc7d33c12a92cp-343, 0.0, 0.0, 0x1.f77f623f81f7ap-152,
     0.0, 0.0, 0x1.2c070b352acacp-746, 0x1.94fbc46af6187p-689, 0x1.7e88939e76653p-916,
     0.0, 0.0, 0.0, 0x1.24389e0567a0bp-167, 0x1.eb0d94b03ab11p-970, 0.0,
     0x1.03cf9f11cd5f4p-695, 0.0, 0.0, 0x1.1f88974d3a9d7p-635, 0x1.92f63e0325faep-697,
     0x1.2419cc403aedep-400, 0x1.751ac9c9a4b72p-685, 0x1.1b3a0455e425bp-828,
     0x1.27d415c0df935p-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26bfeea752381p-908, 0.0,
     0x1.2d1fad6fad7bbp-686, 0.0, 0x1.a97f81d35c7e2p-89, 0x1.8a441c196d42ep-301,
     0x1.d788f3edcdfb3p-790, 0.0, 0x1.670d3b878fep-994, 0x1.982347ff0a581p-519,
     0x1.b30caf61cbbdfp-220, 0.0, 0x1.0bc15c4874ffep-909, 0x1.100dc82b8f6ecp-1022,
     0.0, 0x1.7e2207f8bb144p-574, 0x1.d1f7ad95b61a4p-870, 0x1.831b57093b49bp-328,
     0x1.810ea4d67fc57p-1007, 0.0, 0x1.f55b68a865eecp-658, 0x1.2f423bd6dbefap-535,
     0.0, 0x1.474fed669bfbdp-630, 0x1.d7254cae89e8ep-422, 0x1.5c6370fb7f7c9p-135, 0.0,
     0.0, 0x1.7cd944bd2581ap-774, 0.0, 0x1.149fc9a3faa38p-257,
     0x1.ff29cc0b7c90bp-1010, 0x1.0f5b82d321633p-981, 0.0, 0x1.e4f065cd831cep-71,
     0x1.9ec5a1e5583d7p-349, 0x1.42beeba5fdb36p-468, 0.0, 0x1.8a1de5c1a0f28p-492,
     0x1.8e52168fa96e4p-730, 0.0, 0.0, 0.0, 0x1.1bff12ad91346p-329,
     0x1.d1268c1ce18bp-1016, 0x1.a55c32e3fe80dp-264, 0x1.12f01e25bfc0ep-776, 0.0, 0.0,
     0.0, 0x1.d74e0e8d5f959p-266, 0.0, 0.0, 0.0, 0.0, 0x1.f66f973eecff7p-606, 0.0,
     0x1.a5441198edebap-438, 0.0, 0x1.f75517f13738p-330, 0.0, 0x1.f60b404c60a2fp-402,
     0.0, 0.0, 0x1.ef09bf7be3c23p-551, 0x1.ead6d2feae28p-451, 0.0,
     0x1.06ea501bc7409p-314, 0.0, 0.0, 0.0, 0.0, 0x1.c0a954b7230a4p-353, 0.0, 0.0,
     0x1.2bfe6f7e3cde4p-668, 0x1.ef39a2f17adbbp-87, 0.0, 0.0, 0x1.1f99d5937c4d4p-562,
     0.0, 0.0, 0x1.e6ddf6544fc44p-894, 0.0, 0x1.31ca6b6f058aep-784, 0.0, 0.0,
     0x1.80eb90a5e8d0dp-732, 0.0, 0x1.25cf9b2d0bd37p-1005, 0.0,
     0x1.0ab97945151cfp-400, 0x1.6eb5153f3dccfp-305, 0.0, 0x1.933b8189150b5p-685,
     0x1.78adeefb92284p-2, 0.0, 0x1.61a9265f448aep-758, 0x1.746c9ef886b2p-873, 0.0,
     0.0, 0.0, 0x1.5e3a90f59e789p-757, 0.0, 0.0, 0x1.569414ba11b99p-376,
     0x1.1b9659c8bb47fp-439, 0.0, 0x1.9900507eddda9p-665, 0x1.0496dbbecb904p-1011,
     0x1.ab4de91127ce4p-244, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a4dc8bd29fbdp-979,
     0x1.d6bacf7533c79p-136, 0.0, 0.0, 0.0, 0.0, 0x1.8e1d0bc60e176p-1022,
     0x1.d894ecc5fb5bp-954, 0x1.060b01acef8cap-358, 0x1.df9479cfeecccp-472,
     0x1.d03740370ccafp-883, 0x1.16948980659dbp-809, 0x1.7024ff99ff126p-830, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4867c08c2bf43p-1, 0x1.e973ab448eb98p-83,
     0x1.4f0c74435b8e2p-914, 0.0, 0x1.2f2699f2335b7p-556, 0x1.a26fbd68fe85ep-66, 0.0,
     0x1.63623289d2c78p-871, 0.0, 0x1.760aefe620618p-570, 0.0, 0x1.15e80986fa49ep-611,
     0.0, 0.0, 0.0, 0x1.eda9683571818p-31, 0.0, 0.0, 0x1.16e8658cd2f79p-665,
     0x1.3a0c440ddc307p-1013, 0x1.171706d4bad87p-660, 0x1.c682c1e37f779p-965, 0.0,
     0.0, 0x1.f4894f027c9e1p-615, 0.0, 0.0, 0x1.56542c7899733p-939,
     0x1.6daa0e9a14518p-624, 0.0, 0x1.6361255e1f2dbp-938, 0x1.647b829158983p-716,
     0x1.0128bbdc72558p-429, 0x1.6fe346e5756e5p-879, 0x1.81f0e549b3e5fp-723,
     0x1.f6796875bf362p-707, 0.0, 0.0, 0x1.ff8ef2901ddadp-947, 0x1.f6a6fef4be1f6p-435,
     0x1.4028f713bc019p-358, 0x1.73e0cb1cd6422p-640, 0.0, 0x1.3f3cd971673ccp-33, 0.0,
     0.0, 0x1.7c3f577641f28p-644, 0.0, 0.0, 0x1.c746a8852f577p-942, 0.0,
     0x1.4b60237b7e177p-243, 0x1.f2d397e1a556dp-341, 0x1.1b812f0d05c9ep-196,
     0x1.ad4e385ded9efp-124, 0x1.8008d9fbb2807p-370, 0x1.80c4bde3d0807p-235,
     0x1.8f642f6d0e104p-287, 0.0, 0.0, 0x1.37286a5c7d813p-518, 0x1.322a4bc6ebadbp-172,
     0.0, 0x1.fa49ca887298dp-374, 0x1.ec64e810a023ep-877, 0x1.b19b069b4f13dp-659, 0.0,
     0x1.00fc421def5dcp-838, 0x1.02ca3562265c1p-397, 0.0, 0x1.bb982cf9b8bbep-236, 0.0,
     0.0, 0.0, 0x1.dcf36d5f20c06p-192, 0x1.157dd9a0c1c51p-918, 0x1.4cddf50414367p-570,
     0.0, 0.0, 0.0, 0.0, 0x1.eb34cb1780abfp-1, 0.0, 0x1.c4729240105cbp-20,
     0x1.a12a9ae965e32p-960, 0x1.d4537019779ffp-312, 0x1.92fe95ce1b9b9p-712,
     0x1.74869ee3bd311p-844, 0.0, 0.0, 0x1.bdf9575f50744p-505, 0x1.f47e69a614566p-152,
     0.0, 0x1.9c5b4a300963dp-361, 0x1.ce6535442d419p-288, 0.0, 0x1.e034db4d7086fp-677,
     0x1.b93c3c85eb8d9p-439, 0x1.fb517a39eafebp-691, 0x1.ae09f5419903ap-513,
     0x1.6e8c8ed7a6c1dp-222, 0.0, 0x1.f132d46a92a2ep-474, 0x1.5db6eccc52795p-489,
     0x1.386d9b1bafa94p-728, 0x1.95a84bd0890cp-608, 0x1.fb8ecd4aa33d1p-726, 0.0,
     0x1.5e197e455d2a8p-496, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.784edc7bb4e75p-509, 0.0,
     0.0, 0x1.83ef98ddbb40ap-4, 0x1.76767d25c78eap-464, 0.0, 0.0,
     0x1.42f5410fd5e74p-339, 0x1.55fccff740cf7p-235, 0.0, 0.0, 0x1.b3a951429d6e2p-343,
     0x1.ce2ece922d11ep-271, 0.0, 0x1.225eb59bfda8bp-659, 0x1.8935b0036e625p-820, 0.0,
     0.0, 0x1.127560b920baep-418, 0x1.b2b0b57d04ad8p-848, 0.0, 0.0,
     0x1.a5cafbd69a557p-644, 0x1.8e6b64f673942p-615, 0x1.d07fdeeeb243p-681, 0.0, 0.0,
     0x1.6de3c7fdc7636p-793, 0x1.3b4365ad4d483p-226, 0.0, 0.0, 0.0,
     0x1.a316a85a90719p-750, 0x1.44217955385cdp-449, 0x1.f078499aa0119p-47,
     0x1.15875ed925533p-11, 0.0, 0.0, 0x1.3447e03dc0c5ep-1009, 0x1.3a0565f986b8cp-354,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ad777048361dcp-484, 0.0, 0x1.c5897970914fp-82,
     0x1.771879eb7793cp-59, 0.0, 0x1.106940126da13p-877, 0.0, 0.0, 0.0,
     0x1.7e43f83b0074dp-795, 0x1.bdad9c47f78a4p-127, 0x1.0ef9568b08036p-745,
     0x1.34794bac8c45cp-989, 0.0, 0.0, 0x1.e27c32f09c6a7p-560, 0x1.c97d086adc65p-786,
     0.0, 0.0, 0x1.9765bde4649d1p-130, 0.0, 0.0, 0x1.c0a2616c53322p-986,
     0x1.4bc24b5efbfecp-801, 0.0, 0x1.e1b0a8a36925ep-261, 0x1.930ee1ce67ebbp-366, 0.0,
     0.0, 0.0, 0.0, 0x1.7b84ca7329464p-133, 0x1.1057d7c7b9ff9p-6,
     0x1.57ebf07714069p-202, 0.0, 0.0, 0.0, 0x1.9a77084e4b294p-110,
     0x1.52c012531a00bp-392, 0x1.1cfc222740dd5p-329, 0.0, 0.0, 0.0,
     0x1.0896e57412325p-55, 0.0, 0.0, 0x1.720942418da19p-329, 0.0, 0.0,
     0x1.3cc1f7905743dp-718, 0.0, 0.0, 0.0, 0x1.858d36b06aa61p-614,
     0x1.2124a5537586p-374, 0x1.30b3f4dd6babep-582, 0x1.c272b94ac979p-458, 0.0, 0.0,
     0x1.f732a4286cd5fp-240, 0x1.9bb9447b63d43p-409, 0x1.c41ce7b7f71d8p-1012, 0.0,
     0x1.9405e28656ef6p-580, 0.0, 0x1.ab0e8f88b6362p-993, 0x1.bc040c21645fp-581,
     0x1.0bb0a5222cd9ap-431, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.fa15e292ca297p-441, 0.0, 0x1.d62536148924ap-90, 0.0, 0.0, 0.0, 0.0,
     0x1.e7ebb68f801b3p-742, 0x1.e27d717234392p-251, 0x1.af27aff0d008p-371, 0.0,
     0x1.32e2e43bbc90cp-708, 0x1.a2853663db95dp-909, 0x1.eec834dddf25dp-939,
     0x1.7895758b799e4p-783, 0x1.1be9eb99a3b9bp-1, 0.0, 0x1.9a4debb5ba943p-206,
     0x1.b5e224494f04ep-615, 0x1.6967cc5aff06ap-580, 0.0, 0.0, 0x1.0840eb3151a97p-700,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b501b48d625cp-496, 0x1.a816fb0bc93bdp-53,
     0x1.640ed453fae8dp-976, 0.0, 0.0, 0x1.d6832d009b0cdp-82, 0x1.ec29694167b0ap-697,
     0x1.0a488a47139f3p-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df9e6dd269376p-676, 0.0,
     0x1.5050f215f1085p-743, 0.0, 0x1.de6ca1d008b8bp-946, 0.0, 0x1.93377db8bcadcp-603,
     0.0, 0x1.c28a3920be6f3p-53, 0x1.6e40e68ee606ep-810, 0.0, 0x1.88ab411b6cf78p-554,
     0x1.d026ee1d7bccbp-798, 0x1.48633ed155ee7p-977, 0x1.cee847284756fp-364, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bdc5096f0f45cp-663, 0.0, 0x1.e63fdd8a47bccp-43,
     0x1.5f42e60a359b3p-149, 0x1.8e3d06bf9da3dp-909, 0.0, 0.0,
     0x1.1b0b5fb448852p-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48a899951298fp-325, 0.0,
     0x1.1449a878b692bp-115, 0x1.b175277ae98aep-468, 0x1.a40871aed1906p-301, 0.0,
     0x1.bf63e641794bfp-92, 0.0, 0.0, 0.0, 0.0, 0x1.684945f3223fcp-999,
     0x1.e047b69005ae7p-691, 0.0, 0.0, 0.0, 0x1.658fdb026efeap-841,
     0x1.35ced2b2f39p-153, 0x1.af6d2a0caa9a9p-749, 0x1.398b4616e86dbp-730,
     0x1.c10b4476521b3p-746, 0.0, 0x1.ca4af5ef356fap-332, 0x1.a5fabe2a085fp-509, 0.0,
     0.0, 0.0, 0x1.48e540a07bea2p-86, 0.0, 0.0, 0x1.170b975b3d27dp-77, 0.0, 0.0,
     0x1.fa842b38fa1dp-836, 0.0, 0.0, 0x1.6a1eafcd961bap-1011, 0.0, 0.0,
     0x1.dbb11ae1423f8p-946, 0.0, 0.0, 0x1.9728f84b74b61p-657, 0.0,
     0x1.f45543cd55a4cp-521, 0x1.183b89955b089p-323, 0.0, 0x1.e000af679d438p-120,
     0x1.f6edb07473d88p-962, 0.0, 0x1.13c665526c1eep-573, 0x1.9146e6780ee6ep-10,
     0x1.87497147f9244p-746, 0x1.ee93393f986edp-963, 0.0, 0.0
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
            tmp1 = Sleef_finz_exp2d2_u35avx2128(tmp0);
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
    printf("Sleef_finz_exp2d2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp2d2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
