/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd2_u10avx2128.c --function \
 *     Sleef_finz_cbrtd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.f295a5f81e4cap-305, 0.0, 0.0, 0.0, 0x1.f6923fe07ad55p-244,
     0x1.0360bd3a7d037p-944, 0.0, 0.0, 0x1.023b1027d70bbp-51, 0x1.9a0350660eb16p-655,
     0x1.81701ce057ca3p-910, 0x1.de3fba83fb938p-969, 0x1.d4a984345eefp-1002, 0.0, 0.0,
     0.0, 0.0, 0x1.c4f3a513dbc52p-523, 0.0, 0.0, 0.0, 0x1.5cda7d8a3bdbfp-296, 0.0,
     0x1.674db3fadce67p-389, 0x1.75471c5eeed42p-1004, 0.0, 0.0, 0.0,
     0x1.ba12125f73b79p-607, 0x1.378d4fad5f624p-232, 0.0, 0.0, 0x1.1a4b7b169d32ep-203,
     0.0, 0x1.431e86b27202dp-625, 0.0, 0x1.89e0b4121e5b3p-774, 0.0,
     0x1.4c8c6083f5a2ep-878, 0x1.4d9bfe930cb82p-385, 0.0, 0.0, 0x1.066f1e7027ddbp-182,
     0.0, 0x1.cff4620cc5316p-415, 0.0, 0.0, 0x1.75538ad70e4bap-819,
     0x1.c2ecf13b74ec2p-270, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88395efd93145p-970, 0x1.242caa071c537p-551, 0.0, 0x1.2dd925f86a555p-361, 0.0,
     0.0, 0.0, 0x1.14709d05eb1bap-410, 0x1.ab1e0e3ed9abap-351, 0.0, 0.0,
     0x1.31a9c13762b03p-375, 0.0, 0.0, 0x1.6ce80e36e30f8p-1, 0x1.64f1ea00513c6p-549,
     0x1.13835583f201ep-334, 0x1.886fa1a1183c6p-668, 0.0, 0x1.ba139e26e6ae1p-232,
     0x1.65be0ce988faap-270, 0x1.26ef1d6a0a344p-869, 0.0, 0.0, 0.0, 0.0,
     0x1.4a34328d288e2p-157, 0.0, 0x1.4c285e2f14e5ap-521, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.416ce642a0217p-746, 0x1.595b1efb2b95dp-594, 0x1.c63eb85302afbp-440, 0.0,
     0x1.5244ab16cbb16p-483, 0x1.ebf9533b97cf6p-745, 0.0, 0.0, 0x1.7012efb9e0ed4p-957,
     0x1.54bb4e4c4c164p-297, 0x1.d53b0b9d10f78p-944, 0x1.95bb08b46d81ep-587,
     0x1.7308f1bfb188bp-122, 0.0, 0.0, 0x1.6e76b8695f6f3p-411, 0.0, 0.0, 0.0,
     0x1.b38c9f1abd088p-884, 0x1.eb9072aac8563p-13, 0.0, 0x1.50fed73e4f145p-453,
     0x1.6ad833378b9bbp-45, 0x1.ec4d3dd58c109p-780, 0.0, 0x1.81ab862f5c17p-779, 0.0,
     0.0, 0.0, 0.0, 0x1.a413c850823b9p-416, 0x1.3439bc11062e8p-677,
     0x1.290812dcb41b3p-968, 0.0, 0.0, 0x1.e3927074ec3ffp-138, 0.0, 0.0,
     0x1.74ea21b54afa6p-489, 0x1.e9846c9642273p-207, 0x1.cbffb3d085694p-205, 0.0, 0.0,
     0x1.69ecdb25beb8p-167, 0.0, 0x1.7b20edb6c8628p-1020, 0x1.f20d90ca01c1dp-774,
     0x1.9e097f1ef301p-985, 0x1.c13838b8db768p-1012, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.465964774f691p-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.385028f4bcf97p-147,
     0.0, 0.0, 0.0, 0x1.4cb319db14652p-522, 0x1.b0c01cbfc7e99p-136, 0.0, 0.0,
     0x1.aed8e829f7d77p-539, 0.0, 0x1.20a9b2d02c262p-435, 0.0, 0x1.1b55d5d832e65p-438,
     0.0, 0x1.60024a52e107dp-210, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.861fcfbae4dd6p-786,
     0.0, 0.0, 0x1.baa80a33433f7p-849, 0.0, 0.0, 0x1.99e32ba1ad19bp-540,
     0x1.3c307dbc5ba77p-690, 0.0, 0x1.bc346ca50de03p-743, 0x1.41cbd9da8c248p-867,
     0x1.1e84bc3ef0629p-495, 0x1.a9121ee4f60c7p-99, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6fe7483af5777p-711, 0.0, 0x1.2a65818f9235p-258, 0.0, 0.0,
     0x1.7a46d03381ddap-394, 0.0, 0x1.bc6003a125b2bp-740, 0x1.95eb2d2305c5cp-161,
     0x1.0fc33f2518666p-155, 0.0, 0x1.c9076656a1991p-438, 0x1.435137d58f002p-100, 0.0,
     0.0, 0.0, 0x1.a3c82a7a68019p-855, 0x1.d10de395e98a4p-164, 0.0, 0.0, 0.0,
     0x1.915967807c696p-643, 0.0, 0x1.7cbb60bd0d3d2p-195, 0.0, 0.0, 0.0,
     0x1.3b6660f353d1fp-534, 0.0, 0x1.848db7e839f98p-473, 0x1.32623f25d21fep-904,
     0x1.3900ffedaf8e3p-874, 0x1.7b3450afbec4cp-220, 0.0, 0.0, 0x1.bddf81dcb51dp-496,
     0.0, 0x1.a36408a8bf881p-687, 0x1.bfded27cb077dp-950, 0x1.456a357aaeaep-832, 0.0,
     0x1.af32566aec415p-505, 0x1.3af045d8e492bp-509, 0.0, 0x1.2a11c47d37222p-722,
     0x1.6f2ef127b4cap-521, 0x1.a91b02d5b56efp-472, 0.0, 0x1.59fa2ba7d4987p-991, 0.0,
     0x1.3d35cb5cb71fdp-25, 0x1.1877fcfbe5599p-281, 0x1.fe743e6d10aaep-86, 0.0, 0.0,
     0x1.c271f91f723dap-782, 0x1.f4a8094e01911p-91, 0x1.80550c0896f06p-236, 0.0,
     0x1.680a6c0a8e4c4p-815, 0x1.5d28774faee43p-953, 0x1.96ff850aad2d8p-344, 0.0, 0.0,
     0.0, 0x1.89f2800a6f3e3p-457, 0.0, 0.0, 0x1.c0bfa0aa44b4ep-773, 0.0, 0.0, 0.0,
     0x1.20046f017ea9cp-174, 0x1.6efa4cf08a3b8p-425, 0.0, 0x1.e723cf9f1f4ebp-651,
     0x1.ac47de3a9569cp-398, 0x1.154d89b08cd88p-786, 0.0, 0x1.825d56991a7c8p-265,
     0x1.42e188d49f202p-670, 0.0, 0.0, 0.0, 0x1.7443b59816f83p-309, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30346152cce04p-185, 0.0, 0.0, 0.0,
     0x1.da6baa090dbedp-886, 0x1.7582698e82e0cp-771, 0.0, 0.0, 0x1.ba89082908a2bp-244,
     0x1.2d2dc3d2aa2c4p-108, 0x1.b41be236982f9p-266, 0x1.dd7c401758af4p-355,
     0x1.81c0dbd8d9f4dp-266, 0.0, 0x1.39cd0cb094605p-1011, 0x1.6953fcf9f6065p-304,
     0.0, 0x1.6968b5ece39eep-539, 0.0, 0.0, 0.0, 0x1.78d05ea1931dcp-924,
     0x1.fe780f5e10796p-767, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.507088d2223bfp-327, 0x1.0fca697882b35p-537, 0.0, 0x1.c3ca89559f72cp-1015,
     0x1.0f530133b4cc8p-360, 0x1.312ceadfa5d38p-532, 0.0, 0.0, 0.0, 0.0,
     0x1.c906248741d58p-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.489b0dd482498p-387, 0.0,
     0x1.fb156ce54466dp-73, 0x1.2253be40d6865p-837, 0x1.36c1601881d33p-245,
     0x1.7b0fa47bee8f9p-273, 0x1.d79dd4f3081adp-548, 0x1.6f92f7e68508bp-757, 0.0, 0.0,
     0x1.305f31592cc47p-16, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a8404dea9888fp-510,
     0x1.35e1fa348c2f6p-574, 0x1.fd11ef788034fp-909, 0x1.0455762ffc56bp-1018,
     0x1.fd4d7fb7758ecp-460, 0x1.1e88a58d3a9cep-250, 0.0, 0.0, 0x1.376327b5da37cp-938,
     0x1.1a8dc34e8d47dp-955, 0x1.f540094d1eb7cp-661, 0x1.957cf121d02a5p-905,
     0x1.438bdf1755e79p-101, 0x1.abd61aaa04007p-710, 0.0, 0x1.892ae13196e5p-559,
     0x1.49c52c87e79e9p-787, 0x1.984966b7be545p-849, 0x1.f99b098d9276dp-477, 0.0,
     0x1.9c05e37dec17fp-987, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea45caf385a93p-178,
     0.0, 0x1.7a1803a5968ep-801, 0.0, 0.0, 0.0, 0x1.c462120cd551fp-120, 0.0,
     0x1.88e1dda213956p-642, 0.0, 0x1.544a4e48d49cep-223, 0x1.4f7bd716fba76p-35, 0.0,
     0.0, 0x1.e102d1fcd1054p-593, 0.0, 0x1.745a4419c0066p-838, 0.0, 0.0, 0.0,
     0x1.ed8653098e5f2p-810, 0x1.218997d033dd2p-572, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4884da7347518p-819, 0.0, 0x1.ec44776316131p-178, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e7a603cbe99c5p-372, 0.0, 0x1.03bc0417825edp-517,
     0x1.0ac5f23d88e33p-213, 0.0, 0.0, 0x1.f58653f54d55dp-691, 0.0,
     0x1.4839c5009bb0cp-882, 0.0, 0.0, 0x1.5e69d0fc3bddep-418, 0.0, 0.0,
     0x1.2f2936a7880eep-675, 0x1.8d980675b7103p-985, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.38eb127e34633p-505, 0x1.0570325c0555dp-313, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c66de9a1378adp-123, 0x1.eefbf9e9f9ad6p-860, 0.0, 0.0,
     0x1.d9373ef0eb22cp-696, 0x1.3e67988156e45p-441, 0.0, 0x1.44589ab93a619p-183, 0.0,
     0.0, 0.0, 0x1.b8430ca2dfcd1p-954, 0x1.5c345d3d5189ep-576, 0x1.516a66e6e68d4p-194,
     0x1.eb4947757db17p-781, 0.0, 0x1.32818083cb97dp-851, 0x1.b11fd50f9c549p-629, 0.0,
     0x1.cfe6d1220372bp-961, 0x1.4a88713d0640fp-389, 0.0, 0.0, 0x1.d89f16d94f55cp-301,
     0.0, 0.0, 0x1.e1bc11d59dd5ap-38, 0x1.306316fb95b67p-21, 0.0,
     0x1.d487acdab6487p-711, 0.0, 0.0, 0x1.74bd4884909b6p-951, 0x1.ac5e25c2757adp-690,
     0x1.befc0bb14c29ep-468, 0x1.6014485787ac6p-801, 0x1.d9fe423d04c3p-903, 0.0, 0.0,
     0.0, 0x1.bc477d39b23b8p-758, 0.0, 0.0, 0x1.22c60be1e87f6p-660, 0.0, 0.0,
     0x1.314a3b2531bc5p-218, 0x1.c8d33a7514fbdp-360, 0x1.85d87bfafb01bp-554,
     0x1.f9f2af9a2d5fp-927, 0.0, 0x1.00e197c93b357p-810, 0x1.adc8fbf9e9de6p-204,
     0x1.fb3efaea04b96p-573, 0.0, 0.0, 0x1.9c6544f659343p-211, 0x1.718ce86ae6c7ap-643,
     0.0, 0x1.801db317d9c65p-737, 0x1.78ffb474de9cdp-613, 0.0, 0.0,
     0x1.42992685c0c31p-349, 0x1.dcdb47df9736ap-739, 0x1.44f973cd95d9ap-411, 0.0,
     0x1.61406446464dcp-805, 0.0, 0.0, 0x1.bfcc866373093p-833, 0.0,
     0x1.87db1af69ff28p-47, 0.0, 0x1.b78d68e4aac25p-1003, 0.0, 0.0,
     0x1.5550419f23879p-197, 0x1.0a94a77335467p-1018, 0.0, 0x1.e8aa14191fa2p-200, 0.0,
     0x1.e6a427f34efbep-604, 0x1.068792597c9efp-604, 0.0, 0.0, 0x1.3f2b73f4602f2p-912,
     0.0, 0.0, 0.0, 0x1.fbd239765b615p-442, 0.0, 0.0, 0.0, 0x1.b174c918eb972p-620,
     0x1.69db8411e66c2p-791, 0.0, 0x1.b67a8975926e6p-683, 0x1.4bd7ef69cf444p-766, 0.0,
     0x1.f89962633860dp-527, 0x1.8968b2ab25fbbp-644, 0.0, 0.0, 0.0, 0.0,
     0x1.7faa5ef6761p-687, 0x1.30df8a842b571p-907, 0x1.8ce11c2fd2ccap-622, 0.0,
     0x1.6cb0a1db2a7cfp-233, 0.0, 0.0, 0x1.171800c0c813fp-836, 0.0,
     0x1.8e6096382ba4ep-289, 0.0, 0x1.6eec2c3ca5099p-947, 0x1.51e1c9d6bfaf7p-407,
     0x1.f5d723f757a63p-1004, 0.0, 0.0, 0x1.1034dcd01988ap-907,
     0x1.7f37ddbcc8cafp-912, 0x1.04060da9c6cf9p-777, 0x1.47deb6bb3cabfp-743,
     0x1.3c7ddf9cd93cap-21, 0.0, 0x1.fee10dbe9d9cep-642, 0x1.d127b2f5eaddap-386, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4159cd48497cp-37, 0x1.78c5447d0522p-236,
     0x1.94660bb26a3b9p-681, 0x1.55fe6188d13dcp-126, 0x1.e0d322d8bd322p-395,
     0x1.773ff021e771bp-844, 0x1.0f98a3dc4686fp-974, 0x1.9b6439cdb8887p-574, 0.0, 0.0,
     0.0, 0.0, 0x1.dd73afc9f86abp-634, 0.0, 0x1.3765a5c68bcb8p-929, 0.0, 0.0,
     0x1.c6ad4f1291a7ep-810, 0.0, 0.0, 0x1.a3797e47bc0adp-682, 0x1.91a0e1a82b93bp-540,
     0.0, 0x1.89fac26f52128p-309, 0.0, 0x1.2bc988aa11543p-522, 0.0, 0.0,
     0x1.2ea4b2f118p-714, 0x1.271b857a119bfp-254, 0x1.3a2009a08fc8cp-48, 0.0, 0.0,
     0x1.5bd90e6c0c471p-973, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eeb3e6ee8bb6cp-205, 0.0,
     0.0, 0.0, 0x1.b4a235123fbe4p-663, 0.0, 0.0, 0x1.96cced5955fbdp-284,
     0x1.0465bb874dbdap-717, 0x1.0604b6938f419p-809, 0.0, 0x1.887f04cb58446p-652,
     0x1.0a56da853b091p-365, 0x1.fdce646843d1dp-146, 0.0, 0x1.f43fd217f45cdp-534,
     0x1.74a37eed97a49p-222, 0.0, 0.0, 0.0, 0.0, 0x1.34f150d2d1314p-279, 0.0, 0.0,
     0x1.5bd92517767ffp-708, 0.0, 0.0, 0.0, 0.0, 0x1.e0b7753d3abdep-459, 0.0, 0.0,
     0.0, 0x1.00eeb8b2ba1e6p-893, 0.0, 0x1.5a82e17c84cdcp-518, 0x1.499a7ee5cf5c7p-341,
     0.0, 0x1.9a373a7c45e2bp-995, 0.0, 0x1.7c4af19b159b3p-118, 0x1.ce415b6a76bfdp-24,
     0x1.fe428dd9df467p-1004, 0x1.4792225e4ceb1p-894, 0.0, 0.0, 0.0, 0.0,
     0x1.69c4e94776241p-289, 0x1.81867467df23dp-1001, 0.0, 0.0,
     0x1.c8388c50f618ap-500, 0.0, 0.0, 0x1.1114f2e3a3d17p-158, 0.0,
     0x1.69be97b12f392p-942, 0.0, 0.0, 0.0, 0x1.b4a8f69126af1p-596, 0.0,
     0x1.2aabcf6fa3807p-47, 0.0, 0x1.6af3dbbb623fbp-159, 0x1.699b671df51bcp-312, 0.0,
     0x1.c94704a4d9bcep-733, 0.0, 0x1.9043d54e9c9d5p-135, 0.0, 0.0,
     0x1.45c023add2d51p-982, 0x1.9ad05661c6c92p-181, 0x1.b41a40e666d38p-832, 0.0, 0.0,
     0x1.54688e6853c93p-218, 0x1.e8cd60c063945p-192, 0.0, 0.0, 0x1.af3185e8cf61cp-243,
     0.0, 0.0, 0x1.a5d2c8a475855p-861, 0.0, 0x1.e549f70f42844p-475, 0.0, 0.0,
     0x1.4c0b0bf56b83bp-300, 0x1.fd949fe8d5c41p-502, 0x1.3ba8f048bc73ap-818,
     0x1.b0854ad3bef3bp-371, 0x1.e7a5411600d87p-160, 0.0, 0.0, 0.0,
     0x1.a28d7c89fbb2ap-171, 0.0, 0.0, 0.0, 0x1.abcc3f9569b77p-489,
     0x1.09d095e2498f7p-825, 0x1.7e4d9be2d9d26p-377, 0.0, 0.0, 0x1.a5563db1cfbd3p-140,
     0x1.b1c2d5640eeb1p-816, 0.0, 0.0, 0x1.19a4fa5eee25ep-47, 0x1.6ab3b80125c81p-756,
     0.0, 0.0, 0x1.db92a011933bfp-772, 0.0, 0.0, 0.0, 0x1.c815761964eacp-324,
     0x1.29d889c14f025p-782, 0x1.2e772e8ea1092p-360, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1217da86d38fcp-167, 0.0, 0.0, 0x1.333593477b24ap-545, 0x1.b9581b2be50a7p-858,
     0.0, 0.0, 0.0, 0x1.c731dc862354dp-871, 0.0, 0x1.7f0e1bccf40d5p-229,
     0x1.0e58c2b2705a5p-78, 0.0, 0.0, 0x1.3a26c667c1893p-24, 0x1.b9c0f38dd76c3p-253,
     0.0, 0.0, 0x1.9fd375a5312d9p-896, 0.0, 0x1.6ab95a065c8a4p-503,
     0x1.1a75dbd826f8bp-278, 0.0, 0x1.0a94a9fc1892dp-619, 0x1.faae10bed6e1ap-530,
     0x1.56f6734c164a9p-858, 0x1.3b62731c3592dp-1020, 0.0, 0x1.19986aacd51f5p-314,
     0x1.b5b83665edc5bp-410, 0x1.e10b1055c030cp-294, 0.0, 0x1.b0bb70a1dbe8ep-636,
     0x1.26b88d54d6fb9p-406, 0.0, 0.0, 0.0, 0x1.36d11bc96144ap-604,
     0x1.59e26fdea0d3ep-748, 0x1.cc575e609342p-722, 0x1.02ee397fd00ecp-976, 0.0, 0.0,
     0x1.2fc0d36d0b685p-464, 0.0, 0.0, 0x1.f66b74c7fb02p-446, 0x1.d0ad24a04e55cp-353,
     0.0, 0x1.635fffc430dbep-849, 0.0, 0.0, 0.0, 0x1.2b07c7b08cfdfp-880, 0.0,
     0x1.3957e6295240ap-302, 0x1.38b17fada5502p-644, 0x1.e64feaf6a16f1p-968,
     0x1.034a5f31e872p-500, 0.0, 0x1.fb7fdf5cb997cp-296, 0.0, 0.0,
     0x1.f0f09bcdce5d9p-858, 0x1.b38450d2d7843p-19, 0.0, 0x1.0c08ebc574942p-440, 0.0,
     0.0, 0x1.67b5aa8516596p-662, 0x1.58aa065ff6c77p-931, 0.0, 0.0,
     0x1.9eef464d8e5cfp-113, 0x1.456f487376953p-553, 0.0, 0.0, 0.0,
     0x1.0dd45cc941c62p-580, 0.0, 0x1.1bac8b9092a7cp-226, 0x1.868d58e063644p-966,
     0x1.45e22535c445fp-18, 0.0, 0x1.c3ef586dc5e7dp-361, 0x1.fa84f3d4daee9p-105,
     0x1.53991a4170f16p-572, 0.0, 0.0, 0x1.294a667ca749ap-889, 0.0, 0.0,
     0x1.af88664db5ceap-598, 0.0, 0x1.5a6dd62b284a1p-485, 0x1.73bd15ab62ccep-589,
     0x1.744ebd423bd24p-265, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6d8ed3e02508cp-669, 0x1.101d76c22aedep-108, 0x1.0ea353e4d5195p-533, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e2889472e88a7p-273, 0x1.ce15f6ba05e6bp-68,
     0x1.87ec27851a4e3p-434, 0x1.9786920949fp-957, 0x1.9778553bcbb6ep-821, 0.0, 0.0,
     0x1.ac998684d4a4p-442, 0x1.04f5ad8e0a979p-52, 0.0, 0.0, 0.0,
     0x1.0e6c24d38a3e8p-342, 0.0, 0.0, 0.0, 0x1.a455a6e8b827bp-169,
     0x1.29412a0465db3p-103, 0x1.803148c352dd4p-334, 0.0, 0.0, 0x1.d3e993ebc7076p-410,
     0x1.8043f339aceb1p-312, 0x1.4f60b9e378464p-27, 0x1.9e97846583909p-537,
     0x1.a96322a586c24p-420, 0.0, 0.0, 0.0, 0.0, 0x1.69f8155d881d1p-425, 0.0, 0.0,
     0x1.2deeebb862fcep-66, 0.0, 0.0, 0.0, 0x1.31ff3f6ba8703p-358,
     0x1.1ac0069244804p-461, 0.0, 0.0, 0.0, 0.0, 0x1.dc1f89f262f4ep-977, 0.0, 0.0,
     0x1.21a2139b2b45ap-146, 0x1.8a42f8942994bp-565, 0x1.7cebd4ae51321p-450,
     0x1.23b848395940ep-957, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.288cddc613527p-524,
     0.0, 0x1.6c0358a507bf4p-838, 0.0, 0x1.9e67ede8a3541p-986, 0x1.c0582e8d0919fp-922,
     0x1.4175319b966ccp-99, 0x1.a19e79f3e3edp-17, 0x1.4e1d8f0c7f133p-188, 0.0, 0.0,
     0.0, 0x1.cdcda232e7f96p-505, 0.0, 0.0, 0x1.e6706449630d1p-260,
     0x1.01e81d7e51836p-831, 0x1.40a8357a7c208p-693, 0.0, 0x1.4afcca808527p-41,
     0x1.aeb8f5bbe12c7p-545, 0x1.ec886c4b386cap-337, 0.0, 0.0, 0.0, 0.0,
     0x1.695c9a4c03194p-778, 0.0, 0.0, 0x1.0a78d3db7f579p-772, 0.0,
     0x1.5db8f4cc1ffbdp-246, 0.0, 0x1.4b997330db822p-919, 0x1.dffe29db65583p-697,
     0x1.48c3d04f5767fp-586, 0.0, 0.0, 0.0, 0.0, 0x1.2e31184431878p-391, 0.0, 0.0,
     0x1.573d5af6a51c3p-123, 0.0, 0x1.4340dc347bbcp-987, 0x1.800282a72a8d9p-130, 0.0,
     0x1.7af1d8b8914fbp-901, 0.0, 0x1.ade89b69ebdd3p-604, 0.0, 0x1.a3721cbedaec2p-70,
     0x1.b2f5eff0ca09ap-219, 0.0, 0x1.698f5fe5f7675p-604, 0x1.ad55fd8308a2bp-435, 0.0,
     0x1.96643d1e4096p-992, 0.0, 0.0, 0.0, 0.0, 0x1.ca257210db98p-434, 0.0, 0.0, 0.0,
     0.0, 0x1.609b6029a4efdp-668, 0x1.a99f7edcb709ep-608, 0.0, 0.0, 0.0, 0.0,
     0x1.a5fa6bbaa2143p-269, 0.0, 0x1.fa1fef8dfdc29p-560, 0x1.86661ccabb279p-84, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81576891a0f78p-498, 0x1.61d49242cc673p-332, 0.0,
     0.0
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
            tmp1 = Sleef_finz_cbrtd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_cbrtd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
