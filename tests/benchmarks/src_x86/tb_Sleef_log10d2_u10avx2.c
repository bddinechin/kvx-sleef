/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10d2_u10avx2128.c --function Sleef_log10d2_u10avx2128 \
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
     0x1.edddab75c24f4p-241, 0.0, 0x1.3e4391ac6f6e6p-50, 0x1.cb461e7000579p-737, 0.0,
     0.0, 0x1.398f1df77d243p-420, 0x1.612f7dc5947cdp-544, 0.0, 0.0, 0.0,
     0x1.00b950155ff62p-402, 0x1.d1ac42d270455p-508, 0x1.b5d6904bfe09p-507,
     0x1.5cf593a3650eap-936, 0x1.2c8a04b3608aap-643, 0.0, 0.0, 0x1.160d9af78460ap-333,
     0.0, 0x1.5d40c7dd807a9p-131, 0x1.2790730cbdd49p-725, 0.0, 0.0,
     0x1.6fc92105e0a01p-864, 0x1.255df52872d13p-971, 0.0, 0.0, 0x1.c35c06044f7fcp-890,
     0x1.900d38a9e3effp-197, 0x1.ad5732042b29p-516, 0.0, 0x1.0d746e813b003p-16, 0.0,
     0x1.ac2b569a0b33fp-627, 0x1.57567b85a47c5p-756, 0.0, 0.0, 0.0, 0.0,
     0x1.5e4fa383de527p-179, 0x1.0488457e0ba41p-425, 0x1.f843dcb737b31p-119, 0.0,
     0x1.33787c8bf0dc9p-618, 0.0, 0x1.c8c2232434b1bp-901, 0.0, 0.0, 0.0,
     0x1.19f05078365a5p-352, 0.0, 0.0, 0x1.825a1221692ffp-126, 0.0, 0.0,
     0x1.90d6220c677dcp-668, 0x1.a1df09f1f4767p-493, 0.0, 0x1.25488e902f47cp-471, 0.0,
     0.0, 0x1.996a24b37a36ap-279, 0.0, 0x1.25b36d92de02p-541, 0x1.0ad4a9fae7a6dp-324,
     0x1.90afb16d918c7p-295, 0x1.0f8b832ad6dcap-230, 0x1.9c799715f7b5bp-978, 0.0, 0.0,
     0x1.4c69632ca33b6p-115, 0.0, 0x1.974f443614c5fp-955, 0x1.6171da1622d13p-297,
     0x1.1ca1f20fe445ap-640, 0x1.34518d35737fep-838, 0x1.376f06e6a69abp-966, 0.0, 0.0,
     0x1.801da8693436dp-950, 0.0, 0.0, 0x1.dd3e25275dffap-512, 0.0,
     0x1.2c9b93de55a02p-701, 0x1.8e3251d77c585p-321, 0x1.75871f99c05bdp-252,
     0x1.14eb2afa7641ep-247, 0x1.95f835a44cc9dp-40, 0x1.e2d47ecc68991p-1012, 0.0, 0.0,
     0.0, 0.0, 0x1.f9d77320568aep-682, 0.0, 0x1.18dded01492cdp-335, 0.0, 0.0,
     0x1.d78fbb39183dp-168, 0x1.5534a97345437p-764, 0x1.23cf62150cc45p-115,
     0x1.2ef443861e879p-704, 0.0, 0x1.45183dfd6da29p-310, 0.0, 0.0,
     0x1.415f2c9973ac4p-664, 0.0, 0.0, 0.0, 0x1.0f60fa1b778bep-307, 0.0,
     0x1.4a437e35aff24p-920, 0x1.61e4ebbb14f23p-202, 0.0, 0x1.32eaba515803ep-635,
     0x1.e25040e51d988p-513, 0.0, 0.0, 0.0, 0x1.fd8496d1febd1p-390,
     0x1.0809716ae9e78p-760, 0x1.e1abf7daa80d9p-38, 0x1.caca89006982fp-645, 0.0, 0.0,
     0x1.41661768ae3d5p-248, 0.0, 0x1.e3f9b487b6d32p-752, 0x1.660feb89f73abp-177,
     0x1.c1878126bb887p-579, 0.0, 0x1.8796d323aca9dp-648, 0x1.3c6a3bcab5571p-99, 0.0,
     0x1.46cf08ccd1ac3p-826, 0x1.a886e26359175p-480, 0x1.5bf39f004ddcfp-1020,
     0x1.a21785699e612p-956, 0.0, 0.0, 0x1.6bd180e8496dap-667, 0x1.e59ba0a8c1008p-720,
     0.0, 0x1.b9dc4b6303ea2p-457, 0x1.ac8c5be5e19ccp-819, 0x1.c635ca95400e2p-553,
     0x1.8a946e9d60d5bp-596, 0x1.c299157559fc8p-944, 0x1.f9fcb40169523p-744,
     0x1.41bc160cd7ef1p-1004, 0x1.7b165d4ab54f2p-767, 0x1.f5d3ae4f1d02p-454, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d79dc4c3fccabp-613, 0x1.1e1b37974ac3ep-223, 0.0,
     0x1.822ad03dbd6dbp-325, 0x1.6be8c60a77d4p-785, 0.0, 0x1.5b3c0c18d45aap-438,
     0x1.453a6c1b1ba4p-475, 0x1.48897eeac0964p-376, 0x1.01ff785d24378p-225,
     0x1.c7b1728bfea7fp-229, 0.0, 0.0, 0.0, 0x1.c539322c43581p-476, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f83542cf9d631p-230, 0.0, 0x1.d22a1cbf85f59p-780,
     0x1.66c1f47d62bc1p-475, 0.0, 0.0, 0x1.1c41ecb81f2c3p-423, 0x1.2b8a0b128bc24p-458,
     0x1.fe52829dbde92p-195, 0x1.0009a436f7fa9p-104, 0x1.8db6dbb750d5bp-284,
     0x1.7223bb246420dp-696, 0x1.322fd307706fap-810, 0.0, 0x1.24bb86e04ad11p-661,
     0x1.89a7650df350fp-572, 0x1.2b3dbf5ae3b6dp-870, 0.0, 0x1.5cd61a6838133p-556,
     0x1.d2ee01572584p-419, 0.0, 0.0, 0x1.4d1e45851ccafp-383, 0.0,
     0x1.4d0d2486cdd93p-866, 0x1.968f85f01cb3bp-90, 0.0, 0.0, 0x1.b1e8cb594f65p-499,
     0.0, 0x1.1c936929b6348p-397, 0.0, 0.0, 0.0, 0x1.0b88a4b382d3dp-424,
     0x1.2177c9bc9c586p-789, 0.0, 0x1.2ac1c80369371p-285, 0x1.01de6bc64519cp-706,
     0x1.8b1e7d54ef3ep-6, 0.0, 0.0, 0x1.f08f394a7f8f5p-129, 0.0,
     0x1.ee06398fffd2cp-67, 0x1.d3bb7ba4c5499p-824, 0x1.30fcbf2cc8a04p-438, 0.0, 0.0,
     0.0, 0x1.056b3fa6aa6c1p-240, 0.0, 0.0, 0.0, 0x1.cdfa60e3303bep-600,
     0x1.72a682fe54253p-719, 0x1.bf1ac94221decp-39, 0.0, 0x1.4902a7d174ba7p-653, 0.0,
     0x1.7b91c61aae661p-200, 0.0, 0.0, 0x1.a270c2eb11326p-14, 0x1.9730b124f14cfp-377,
     0.0, 0x1.262ba9f9ce597p-634, 0x1.8606613ddc763p-327, 0.0, 0x1.5dece66096c4bp-869,
     0.0, 0.0, 0x1.097029e9b8d3ep-219, 0.0, 0x1.6f6d27d916bb6p-675,
     0x1.30769e10594eap-49, 0x1.78a26a59eaa38p-658, 0x1.312b13d887143p-127, 0.0,
     0x1.0d549ae4930fp-253, 0x1.e80192478bdd2p-380, 0x1.1c7df3a98e72ep-615,
     0x1.213a924bd23f1p-287, 0.0, 0.0, 0x1.6ef70f60bcaacp-835, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3e067c66e76bfp-338, 0x1.3f2970aa7e5bap-634, 0x1.584798ea14131p-405,
     0.0, 0x1.b9adbc31ae58cp-35, 0.0, 0.0, 0x1.149ee94eb5a2fp-795, 0.0, 0.0, 0.0, 0.0,
     0x1.b9e16f23cfb51p-825, 0x1.5e24a197bd928p-215, 0x1.7888dca1d103bp-875, 0.0, 0.0,
     0.0, 0x1.df1de5b7d5fa5p-58, 0.0, 0.0, 0x1.02aa343fcb59p-792,
     0x1.6b54cce575f2fp-521, 0x1.ce1b63d1f0599p-564, 0.0, 0x1.79576a161ee3fp-856, 0.0,
     0.0, 0x1.8fd2e87f887b5p-991, 0x1.275a8abc35556p-261, 0x1.155d18f3875f2p-510, 0.0,
     0x1.34d771964ecb1p-232, 0x1.ef790020e7507p-520, 0.0, 0x1.02b2e671df413p-36, 0.0,
     0x1.8017b46caff5p-818, 0x1.688a9396274p-466, 0x1.52629c4c39c82p-329, 0.0,
     0x1.4d52107ada292p-905, 0x1.877380215f4f4p-126, 0x1.1b4af1c070748p-623, 0.0, 0.0,
     0.0, 0x1.5f4a7da91f1d6p-499, 0.0, 0x1.ccc8f0f4ba8cp-812, 0.0,
     0x1.0f99e925dc273p-385, 0.0, 0x1.3bb99da551c6bp-993, 0x1.b9a5f24039554p-894,
     0x1.8217efddcd8ebp-601, 0.0, 0x1.41931c8501794p-641, 0x1.8455901e88d6ap-533,
     0x1.66fa58912a02dp-933, 0x1.8adc233798191p-833, 0.0, 0.0, 0x1.f8f67eccca173p-810,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8511899270dcbp-942, 0.0,
     0x1.81421064e0804p-911, 0x1.cdcf15ef14b21p-787, 0x1.74e99fc67b71dp-256, 0.0, 0.0,
     0.0, 0x1.ae203a7aaab44p-279, 0x1.5d070590a216dp-768, 0x1.0c65e3c12f29dp-85, 0.0,
     0.0, 0.0, 0x1.361f283fb0c6bp-709, 0x1.b14f4a8b7561ap-465, 0.0, 0.0, 0.0,
     0x1.7b7abca78b145p-142, 0x1.7695be3acca92p-232, 0x1.a45d1d6a1d993p-354,
     0x1.c9ef4e41d6768p-827, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.84668ff0b3febp-486,
     0x1.054c8317a08afp-410, 0x1.07b7e38ef8dfap-642, 0x1.a1e24110620d4p-640,
     0x1.78d42df1e23edp-176, 0x1.f9e881a13dff4p-346, 0x1.db2c4b43aaeeap-27,
     0x1.eeb0a897043bap-81, 0.0, 0x1.01a50acf9f862p-732, 0.0, 0.0,
     0x1.b407021b0e763p-247, 0x1.916abddbed924p-54, 0.0, 0x1.0fcd7c74d39f8p-452,
     0x1.3558e809c0e49p-564, 0x1.6ffee760d157fp-545, 0x1.d6a4a963c0a72p-59,
     0x1.8a6211556a0fcp-782, 0.0, 0.0, 0x1.7caf82cca9b15p-789, 0.0, 0.0,
     0x1.f2e7dd3774b0dp-619, 0.0, 0.0, 0.0, 0.0, 0x1.49f63b1e14271p-1021,
     0x1.3d6119c024232p-902, 0x1.5f089847b29b2p-466, 0x1.5c6f4aa81397bp-539,
     0x1.85f0cf00e9d48p-552, 0.0, 0x1.dd0f16f0b9547p-279, 0x1.5ebc153c7e153p-32, 0.0,
     0x1.337aaf7b9c0cp-582, 0.0, 0x1.d162843be20dbp-416, 0.0, 0.0, 0.0,
     0x1.d2e737cc08184p-190, 0x1.423993c19f71ap-309, 0.0, 0x1.f28717d10085p-356,
     0x1.b7a3bf6096462p-995, 0x1.a21fee32b519ap-804, 0x1.ba47af6d11a92p-826, 0.0, 0.0,
     0x1.8f1af3e50d35cp-677, 0x1.3190f87f3fff9p-807, 0.0, 0x1.de07647dbc634p-244, 0.0,
     0x1.7f958746603a9p-612, 0x1.166db1c68d847p-483, 0.0, 0x1.02299af986ef4p-17,
     0x1.ebac379474e45p-1001, 0.0, 0.0, 0.0, 0x1.0f76a112fa6b8p-229,
     0x1.cb5983377fef1p-691, 0x1.e1e8b9d9a14b3p-255, 0.0, 0x1.ef65b411313ddp-238, 0.0,
     0x1.055f788cf249bp-914, 0x1.97e7555b979fap-36, 0.0, 0x1.62f5f7fa89608p-824,
     0x1.3e1138074cedp-828, 0x1.8033408cb678ap-992, 0x1.192a451fdfd1bp-536,
     0x1.ed6eab971abcbp-919, 0x1.2c72cfef5e14dp-422, 0.0, 0.0, 0.0,
     0x1.1089d53c335d4p-420, 0x1.3816ab4b40239p-842, 0x1.9030a6a1a34fcp-100, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1c87ab6433522p-602, 0.0, 0x1.72a9ba7033463p-208,
     0x1.cc329e74b4047p-184, 0.0, 0x1.0483ab8f3f4bep-403, 0x1.c795bf1e92f9cp-639,
     0x1.2eb4f3191372p-461, 0x1.288694c14393cp-32, 0x1.6eae42dd08e53p-800,
     0x1.9328d595ac5f9p-232, 0.0, 0.0, 0x1.aabe0c5dbcc38p-455, 0.0,
     0x1.34f8f00aca4f4p-47, 0.0, 0.0, 0.0, 0x1.5deb915be5511p-567, 0.0, 0.0,
     0x1.baac1ec1e9e2p-695, 0x1.3274044d8443fp-613, 0.0, 0.0, 0.0,
     0x1.82457b2eca1eap-946, 0.0, 0x1.8701946f8e5f5p-697, 0.0, 0x1.9c9bf0b1c353ap-586,
     0x1.2bd116fccef6p-910, 0x1.94df8e551aab6p-388, 0x1.890b218598d7cp-290, 0.0,
     0x1.cdd305bb589p-266, 0x1.9a92eeea12901p-165, 0.0, 0x1.0322785a6cd03p-783,
     0x1.02d602cc33d06p-466, 0.0, 0x1.319b24f2d0c77p-615, 0.0, 0x1.c7d3fe5cbde8cp-401,
     0.0, 0.0, 0x1.11b8d92af0a1ap-436, 0x1.0aa0b6bf4740cp-100, 0.0, 0.0, 0.0,
     0x1.b0774843e7455p-814, 0x1.8cb264face33p-672, 0.0, 0x1.400b1bec4f98cp-231,
     0x1.fb75d5a61199ap-431, 0.0, 0.0, 0x1.1d37ad089a79p-135, 0.0,
     0x1.828f4a65d39d7p-809, 0x1.b7e534701c65cp-942, 0x1.fa92a5de729a5p-481, 0.0,
     0x1.347f778c3a184p-1022, 0x1.cd92dc28e9953p-911, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.26c6838248442p-536, 0x1.936008562f1a1p-115, 0x1.2bb838c3d7837p-442,
     0x1.9a0f64b0f76afp-187, 0.0, 0.0, 0.0, 0.0, 0x1.d7f99994bd4e7p-15,
     0x1.7b61719c7ad72p-451, 0x1.8bbfa9a701f8ap-524, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6edb6e7894739p-890, 0.0, 0.0, 0.0, 0x1.0d664a2cad9cp-783,
     0x1.d607e122b846ap-313, 0.0, 0.0, 0.0, 0.0, 0x1.ec00c80a3caf7p-721,
     0x1.73d3d6c7b3843p-1010, 0x1.0f91d269bf02cp-845, 0.0, 0.0, 0.0, 0.0,
     0x1.e22b8a72673bbp-122, 0x1.ad5b003b898b7p-844, 0.0, 0x1.e509aca4a680ep-417, 0.0,
     0x1.fa6bf7441839p-1008, 0.0, 0x1.7f0998bfac65fp-404, 0x1.df9b610841a7p-221,
     0x1.fad0a66d2fea5p-644, 0.0, 0.0, 0x1.f3c288132a434p-909, 0.0,
     0x1.aeae62b03c5fep-609, 0x1.d218b05a31738p-996, 0.0, 0x1.a808ac4fe0ba6p-614, 0.0,
     0x1.85b76a238d709p-203, 0.0, 0x1.3d022ec8bccdfp-872, 0.0, 0x1.a0fb620d4cb79p-50,
     0x1.597e26ee8a12ap-361, 0.0, 0x1.6ff566058c93ep-634, 0x1.02aefae094f9p-961,
     0x1.5788bba3e6f0cp-984, 0x1.d35c41ad0408dp-971, 0.0, 0x1.816a19c3a2897p-983,
     0x1.6a77ee768239ap-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bd05dc922105p-782, 0x1.a60d5c47a311p-96, 0.0, 0x1.a7e7d0b3c3c93p-271, 0.0,
     0x1.eae539eb121dbp-977, 0.0, 0x1.f94c92c0a0daep-593, 0x1.f8862e9e8f987p-443,
     0x1.a7f7d56fb936fp-951, 0x1.595c0d2b5bf6ep-557, 0.0, 0.0, 0x1.c58e8ff4a1a8cp-942,
     0x1.cc77cd0d441abp-983, 0x1.60734f4f83268p-881, 0x1.256d23ee92d46p-869,
     0x1.915ccb1aa9d4bp-431, 0.0, 0.0, 0x1.c6a0a9dfb04ebp-483, 0x1.e7b0a3e86a3e1p-411,
     0x1.a8cc65ac76819p-956, 0x1.a5f0c4e8407fcp-1010, 0x1.7bf92ab978014p-891,
     0x1.4a509909c06acp-930, 0.0, 0x1.3de9482cac158p-308, 0.0, 0x1.0c9f984de6707p-354,
     0x1.19ecc38695a71p-650, 0.0, 0x1.562c9c0c0efa8p-704, 0x1.349f7dfdfcc98p-576, 0.0,
     0.0, 0x1.8e6d9dabd60b4p-758, 0.0, 0x1.96e5bea2c6fcp-812, 0x1.73280b4b569fp-994,
     0.0, 0.0, 0.0, 0.0, 0x1.0ceb05ab605bp-943, 0x1.c91c593d08898p-13,
     0x1.0d6d2dcc1fb86p-769, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33ac654b00fcdp-84, 0.0,
     0x1.e0be648daeb36p-268, 0.0, 0x1.f5f80a03c1314p-111, 0x1.9d6ed5223a656p-414,
     0x1.87e1168501edap-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8743f7e8eeec8p-751, 0.0, 0x1.764606144d847p-536, 0.0, 0.0,
     0x1.2b9a6f4ee9058p-838, 0x1.7e6f90c4ee96ep-885, 0.0, 0x1.4495728f28535p-195,
     0x1.122f84749f1a9p-711, 0.0, 0.0, 0x1.cba87902205ebp-661, 0.0, 0.0,
     0x1.285feba294478p-910, 0x1.40d2a8d467472p-646, 0x1.94ced4dcf3c02p-699,
     0x1.244b66ab36898p-435, 0.0, 0x1.3a01ede3f36ddp-30, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a6f52b10364efp-125, 0x1.3ee33d374c144p-863, 0.0, 0.0, 0.0, 0.0,
     0x1.a82535414d17ep-802, 0x1.7ddfc55cff4bbp-130, 0x1.2f157c8edd86fp-886, 0.0, 0.0,
     0.0, 0.0, 0x1.411dc293fd4bp-36, 0x1.c570baf1017fbp-520, 0.0,
     0x1.1f55670cc2a93p-619, 0x1.4f6c0c4825206p-870, 0.0, 0.0, 0.0,
     0x1.1dc05fe5d99b4p-836, 0x1.273881df36dp-925, 0.0, 0.0, 0x1.2e696037bfd45p-933,
     0x1.26e1282387364p-408, 0.0, 0x1.f86e661fb5542p-156, 0.0, 0x1.36d2b48f9aa72p-716,
     0x1.7d834a79bdbdp-941, 0.0, 0.0, 0x1.f16e37e674eb9p-170, 0.0, 0.0,
     0x1.cde2eb9ff2b0ap-845, 0.0, 0x1.bf706c2820e61p-334, 0x1.4f8e98440104p-753, 0.0,
     0x1.70408631c003dp-245, 0x1.bbd611af3db53p-134, 0x1.466d00acd791dp-717, 0.0,
     0x1.d4fb5a145375bp-282, 0x1.2caed2ee15a0bp-248, 0.0, 0x1.d346293559da3p-845,
     0x1.5d751c19e926ap-453, 0.0, 0x1.845ca958103eep-814, 0x1.be0975e8f9af3p-3,
     0x1.17a102f8eb089p-368, 0.0, 0.0, 0.0, 0x1.e7a7cd85e6a82p-885, 0.0,
     0x1.f530d221ac08fp-978, 0.0, 0.0, 0.0, 0x1.7f4c31a137ddbp-462,
     0x1.52687a3f4381fp-568, 0x1.6901155aaae6bp-517, 0x1.17316f42ca8a6p-136,
     0x1.d89e422d9e1d8p-814, 0x1.25066640f7bbdp-298, 0x1.f4504c0eb22bep-480,
     0x1.f8b9e73a6d8fap-844, 0x1.d3f8a4b71e49cp-901, 0x1.53331e4c6ef2fp-852, 0.0, 0.0,
     0x1.b73d672745882p-4, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5b40419ee829p-3,
     0x1.0e9869dd56e08p-771, 0x1.9363c11769edep-482, 0x1.b1613620a4f58p-313,
     0x1.5ed8ca0455de6p-561, 0.0, 0x1.0e0286e0cdc27p-186, 0.0, 0x1.5c59a4d433b29p-56,
     0x1.850d2fe93f2ffp-534, 0.0, 0x1.7f014a2460b97p-365, 0.0, 0x1.20ccb5cf0991ep-977,
     0.0, 0x1.3bb6b3cd92dd5p-858, 0.0, 0.0, 0x1.eb9d044558506p-234, 0.0, 0.0, 0.0,
     0x1.841d7ceb40f7bp-45, 0x1.e0383cd221936p-657, 0.0, 0.0, 0.0, 0.0,
     0x1.8fe3dbd270417p-401, 0.0, 0.0, 0.0, 0x1.9153bb449c2b5p-544,
     0x1.a814e251be6c6p-895, 0x1.68374995b66f1p-855, 0x1.1c924b0d0d178p-627,
     0x1.e870d9f23b49cp-386, 0x1.45052831290c6p-398, 0.0, 0.0, 0x1.ff88f4860eed1p-425,
     0.0, 0x1.e8c207e5466e8p-624, 0x1.e2c7bccda9da9p-993, 0.0, 0x1.df23994d7ceffp-839,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e64479f239d9p-980, 0.0, 0x1.5b9ec9b84e57dp-850,
     0.0, 0.0, 0x1.2f23b73c88881p-558, 0x1.1d60e71c5e6eap-470, 0.0, 0.0, 0.0,
     0x1.3302e885e7016p-814, 0.0, 0.0, 0.0, 0x1.b6168b3347c4p-795,
     0x1.c16cfd22d91dap-88, 0.0, 0.0, 0x1.1f08065922deap-352, 0x1.68dca389209f1p-856,
     0x1.139e9cb7f6f01p-589, 0x1.0321acb9f3dcep-317, 0x1.54e5b9191450ep-246,
     0x1.164dfbd66f18ap-849, 0x1.7da558bea998ap-971, 0x1.560c7b3d079eep-357,
     0x1.a03c3419d115bp-104, 0x1.1a043ca43d5eep-437, 0.0, 0x1.bb6abd20a6f2fp-485,
     0x1.c9ff9e426b528p-794, 0x1.32b1f760f7147p-692, 0x1.0e197be3ea96cp-822,
     0x1.1b15420993f2fp-101, 0x1.9be2ec489c695p-640, 0x1.41127bae3eca8p-948, 0.0, 0.0,
     0x1.3c443b58ee22dp-37, 0.0, 0.0, 0.0, 0x1.be8a3c7ca7daep-702, 0.0,
     0x1.723bec37bc0a7p-289, 0x1.8fd2c92d32fd8p-717, 0x1.9a054f2286e3p-464,
     0x1.b841fc6dcf896p-50, 0x1.ed6221ea27aabp-393, 0.0, 0.0, 0x1.42d7e5e678e77p-542,
     0x1.e801bfd66b665p-67, 0.0, 0x1.b724082d128eep-596, 0x1.4bdee3c77abc9p-371, 0.0,
     0x1.afc742208abdep-962, 0.0, 0.0, 0x1.0c3bf1f145cd8p-85, 0x1.859a669790875p-723,
     0.0, 0x1.0e4db2ff8ed1cp-436, 0x1.6cf5e7682469dp-991, 0.0, 0.0, 0.0, 0.0,
     0x1.c41d3d4b15d75p-19, 0.0, 0.0, 0x1.bbeb8d4240e1dp-726, 0x1.7cb7814dc95b8p-760,
     0.0, 0.0, 0x1.ceabd1440d8f6p-716, 0x1.62a1c3fa60f58p-807, 0x1.9d90ecc138c21p-514,
     0.0, 0x1.e6bbae7f2ba86p-874, 0x1.3de8031f35ad9p-517, 0x1.8c9bc65bd57d3p-431, 0.0,
     0.0, 0x1.82d7727d4599ep-707, 0x1.315655f87f415p-431, 0x1.99edde924c7b6p-987, 0.0,
     0.0, 0x1.3228d10ed8bbp-949, 0x1.d858a300ea9e2p-53, 0.0, 0x1.600b21c2a410bp-1003,
     0x1.4329cc29f9badp-602, 0.0, 0.0, 0.0, 0x1.84ca95bb28c86p-633,
     0x1.9a4e472afdc2fp-462, 0x1.0e54181e94af4p-134, 0.0, 0.0, 0x1.5d5a3820fe70cp-148,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bcdb19ee7e709p-187, 0.0, 0x1.185b40bea8bf2p-757,
     0x1.30013ce49e57ep-353, 0x1.2ea848b1c0838p-723, 0x1.403d639a7282p-954, 0.0, 0.0,
     0x1.cdd9defafa6e1p-150, 0.0, 0x1.a21729d82704ap-337, 0x1.87b64585d714bp-101, 0.0,
     0x1.687177d0ce404p-105, 0x1.92806a71fbf0dp-965, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65145837aa0c1p-1010, 0.0, 0x1.d4bf648c0e584p-125, 0x1.b8eaa1cbb908cp-408,
     0.0, 0x1.b5cca99cacfc5p-417, 0x1.c5a2d482a17p-58, 0x1.76b2facf38ad1p-180, 0.0,
     0.0, 0x1.67e37a4a6ac7dp-293, 0.0, 0x1.20ac19ca82619p-281, 0.0, 0.0,
     0x1.6a812937bbbfbp-114, 0.0, 0.0, 0x1.39779b76bb0fep-960, 0.0,
     0x1.02c2ac45611e9p-536, 0x1.0b96a02fdf4dep-247, 0x1.0186bd08078f4p-149,
     0x1.e6b8d1db9515fp-641, 0x1.ccd287037f333p-712, 0x1.35860fa1282bcp-894,
     0x1.5a92fb4e0ae95p-263, 0.0, 0.0, 0x1.91a15378c4514p-503
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
            tmp1 = Sleef_log10d2_u10avx2128(tmp0);
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
    printf("Sleef_log10d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log10d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
