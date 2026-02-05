/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind2_u10kvx.c --function \
 *     Sleef_finz_asind2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.986df518923dp-875, 0.0, 0.0, 0.0, 0x1.f88c517e25de6p-60, 0.0,
     0x1.dc7cae402e1adp-227, 0x1.2341442f2f836p-553, 0.0, 0x1.9a00ec64ca18p-822, 0.0,
     0.0, 0.0, 0.0, 0x1.27e79c16912e7p-1018, 0.0, 0x1.646f8221d0428p-74, 0.0, 0.0,
     0x1.30bf239dff229p-560, 0x1.0b835fa4b1d44p-981, 0.0, 0.0, 0.0, 0.0,
     0x1.24a6bfd3519eap-890, 0x1.e3f94e02983e4p-230, 0x1.48534aff8315dp-272, 0.0,
     0x1.c0cb3f8329a54p-896, 0.0, 0x1.0aa0d875078f1p-324, 0x1.5806061330d34p-78,
     0x1.76eec35e96fe6p-83, 0x1.fdaffd18f00aep-586, 0.0, 0x1.f59fc41641091p-586,
     0x1.8a6d8b5e35f33p-975, 0x1.c8c89d4d72f39p-234, 0x1.350a770df7117p-729,
     0x1.7ef4680960f11p-124, 0.0, 0.0, 0.0, 0x1.5d4174dcda119p-134, 0.0,
     0x1.157165619c36fp-440, 0.0, 0.0, 0.0, 0.0, 0x1.99c28ff4efd9ep-770, 0.0,
     0x1.43a52b8f33b44p-308, 0.0, 0x1.d2d138443ad05p-604, 0x1.06f260a9521c1p-578,
     0x1.b02035be286d3p-30, 0x1.fb015324c3657p-634, 0x1.7c00ee0bcb602p-476,
     0x1.508148f1cfe59p-577, 0x1.f8d2b7811373p-718, 0x1.228e53771c9e8p-630, 0.0,
     0x1.e80f8972c8314p-74, 0x1.7eff2146810a6p-386, 0.0, 0x1.03a9817bf4176p-17, 0.0,
     0x1.e9d8a2cd08a78p-533, 0x1.9994cff8d6befp-502, 0.0, 0x1.371cf897ffa1ap-831,
     0x1.66448deafad61p-68, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8cfaaa6f63455p-182,
     0x1.aea41da05693fp-807, 0.0, 0.0, 0x1.6513933a3fd55p-61, 0.0,
     0x1.43db3d25337cap-636, 0.0, 0x1.802473edc97a1p-986, 0.0, 0x1.7fbf551a252afp-481,
     0x1.d3a5d76b4ee2cp-578, 0x1.26d472ae1c709p-33, 0x1.d1992097c7505p-412,
     0x1.81df7578f2979p-529, 0x1.72bad129c91f5p-418, 0.0, 0x1.ce1ff9893e06fp-256, 0.0,
     0x1.36fefe6399a87p-276, 0.0, 0x1.2ee4b793990d8p-520, 0x1.260953f789207p-932, 0.0,
     0.0, 0x1.259a70fc6c451p-905, 0.0, 0x1.b72d0ceef4e57p-637, 0x1.e4abe1a67a481p-879,
     0.0, 0x1.8dc0aa7942c41p-616, 0x1.793bba9ceecc6p-812, 0.0, 0x1.a4299b749c69dp-864,
     0x1.42609d6f699fep-617, 0x1.c1de2e3056fb4p-481, 0.0, 0x1.dce91c302f47dp-981, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8bf3afa0a01e6p-139, 0.0, 0x1.f20f03d651f54p-950,
     0x1.42508f445b8a8p-315, 0.0, 0x1.c9fcc191fa078p-104, 0.0, 0.0,
     0x1.65be71d314948p-804, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6e2b7f9f52b8p-73,
     0x1.27329ca4f3725p-1016, 0.0, 0.0, 0x1.2b7ec8275b35cp-988, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bb58406cfb329p-784, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.215f751639f63p-526, 0x1.5099fca6fcb93p-600, 0.0, 0.0, 0x1.ee8d45b442735p-472,
     0.0, 0.0, 0x1.934e7eba59ap-86, 0x1.e3476366ea155p-376, 0.0,
     0x1.fe22e5361a74bp-476, 0.0, 0.0, 0x1.6363caa00e4f1p-144, 0x1.9486200328e23p-335,
     0.0, 0x1.05e33365c7adap-592, 0.0, 0x1.e9a1914bbe8p-463, 0.0, 0.0,
     0x1.c9d9fd4d05aa1p-546, 0.0, 0x1.4d68ff3995058p-317, 0.0, 0.0,
     0x1.ceb47917bedeap-321, 0x1.af43f52c5fbbcp-909, 0.0, 0.0, 0.0, 0.0,
     0x1.697bbb6682a25p-240, 0x1.0254ffe18ad8fp-353, 0.0, 0.0, 0x1.d53780cba5627p-228,
     0.0, 0x1.1430cc5fa8dfap-823, 0x1.726d86ae710d7p-994, 0.0, 0x1.ca8082651a4b5p-921,
     0.0, 0x1.f0addc1a5b337p-813, 0x1.4dcafe954da7ap-703, 0x1.c64808194b178p-788,
     0x1.8c1cf13fe1d82p-1, 0x1.d4ca60948b4f1p-563, 0x1.a0b01c48d7ea2p-443, 0.0,
     0x1.da451127b9cddp-333, 0.0, 0x1.92680cb683711p-569, 0.0, 0x1.1e9c338256aa3p-457,
     0.0, 0.0, 0.0, 0.0, 0x1.54d6b6d86007dp-164, 0.0, 0x1.166afd74f7b3bp-502, 0.0,
     0.0, 0.0, 0x1.910cfa4172c1bp-477, 0.0, 0x1.584c3a6db884ep-897,
     0x1.b706744df8ad1p-123, 0x1.8f549da2dd86cp-415, 0x1.f1674f958fd56p-130,
     0x1.277a14eeebf04p-983, 0.0, 0x1.8c34a35917a26p-919, 0x1.9a6f0230e741dp-566,
     0x1.9d2661da7af4ep-962, 0x1.7cd6f0e61e438p-777, 0x1.3f695c7b20ad4p-284, 0.0, 0.0,
     0.0, 0x1.9b36f2064e38p-933, 0.0, 0.0, 0x1.c07ce7a8b808fp-981,
     0x1.58ceca1b1b294p-360, 0.0, 0.0, 0x1.f828483979bd7p-175, 0.0,
     0x1.b611cc04c2ec1p-888, 0x1.ac8cf0f1e2b2fp-833, 0.0, 0x1.37c1bafb232d4p-665,
     0x1.c9d7cb3fcdba9p-939, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ccd7819eef379p-128,
     0x1.ee93a847893a8p-472, 0x1.6153cfb75effbp-433, 0.0, 0x1.46d605d2ac1aep-501,
     0x1.9d5435e28c592p-746, 0x1.52b1fc281b08cp-968, 0x1.c710c9de20be6p-957,
     0x1.42d84cf5414d1p-912, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08fc0ade382bp-575,
     0x1.9df71b9d0b9b4p-969, 0.0, 0x1.4823160f7ad46p-55, 0x1.1216d7bb5f137p-419, 0.0,
     0.0, 0.0, 0x1.cb59c2511bf26p-52, 0x1.974a2b4920485p-332, 0x1.042ab9afd575ap-822,
     0x1.17949de47cdb3p-304, 0.0, 0x1.362d0adfe3036p-262, 0x1.105d03d30063bp-760, 0.0,
     0x1.ea80d93bda3bcp-460, 0.0, 0x1.eb192cedf2e96p-240, 0x1.fc987e1d585b1p-555, 0.0,
     0x1.338edbffd6fcfp-109, 0x1.56918d0311a33p-977, 0.0, 0.0, 0.0,
     0x1.cd9f340349cadp-484, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b71abfefd81c6p-378,
     0x1.0b0f658b33274p-66, 0.0, 0x1.70d1e9358109cp-93, 0.0, 0.0, 0.0,
     0x1.dd2a66332412bp-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee7171b5609cdp-772, 0.0,
     0.0, 0.0, 0.0, 0x1.e46ee8dabcd16p-859, 0.0, 0.0, 0.0, 0x1.f3d063cc10f41p-718,
     0x1.2a31e1c4d5c1ap-822, 0x1.d1551310627e7p-957, 0.0, 0.0, 0.0, 0.0,
     0x1.165b22c906fb5p-708, 0.0, 0x1.dfc466777a798p-601, 0.0, 0x1.4d99af23221d3p-842,
     0x1.9aa65f09b8b01p-109, 0x1.84c3ff000e1d9p-64, 0.0, 0x1.8ebf4b13dc108p-117, 0.0,
     0.0, 0x1.b80e1fcf2818bp-554, 0x1.ab4bda86eae12p-74, 0x1.bcb0b28900429p-262,
     0x1.f413ef86b6c16p-649, 0x1.a8b6fb70f4f03p-85, 0.0, 0.0, 0x1.9fcfb96b7cc34p-969,
     0.0, 0.0, 0x1.92264e87d761dp-312, 0.0, 0.0, 0.0, 0x1.afe02559e9855p-450, 0.0,
     0x1.be750a84c6cbcp-269, 0x1.f0f1eab9ed93ap-614, 0x1.fd7e25b21e561p-801,
     0x1.f849da19965dbp-705, 0.0, 0x1.e22f1560b571ep-816, 0x1.cdbc877d27d26p-149, 0.0,
     0x1.2411edf64227p-885, 0x1.9dd2a29e053ep-301, 0x1.9fc96dd8f908fp-337,
     0x1.e64aeea6a46a9p-389, 0x1.74092f6b3a8a4p-409, 0.0, 0x1.928a824500aa7p-236, 0.0,
     0.0, 0.0, 0.0, 0x1.6b85066c0dd42p-72, 0x1.f7a68334da489p-5, 0.0, 0.0, 0.0, 0.0,
     0x1.2c19af0a2fac4p-358, 0.0, 0.0, 0.0, 0x1.91ee1b0939536p-31, 0.0, 0.0,
     0x1.b91c8b595f423p-649, 0.0, 0x1.cd4789863cce6p-900, 0x1.45a6d8e0125f6p-200, 0.0,
     0x1.451c5cf11f603p-995, 0x1.3f030afdf7e76p-193, 0x1.3a3e6ffa96454p-945, 0.0, 0.0,
     0x1.eb530781d195ap-996, 0.0, 0.0, 0x1.022128c83ff67p-578, 0x1.e9670c2195a58p-348,
     0.0, 0.0, 0.0, 0.0, 0x1.27e4ec5b901d7p-637, 0.0, 0x1.54ce0282878d3p-266,
     0x1.dac64aaa756bap-601, 0.0, 0x1.c0df5e59256a4p-1012, 0x1.4d6dc753d8de4p-468,
     0x1.311ddefcd9827p-42, 0x1.c02c5eb22cdafp-998, 0.0, 0.0, 0x1.7af55ee71aa44p-449,
     0.0, 0x1.a1a80d85b6a55p-107, 0.0, 0.0, 0.0, 0x1.ab122c65eb981p-668,
     0x1.a265e3678bc2fp-389, 0.0, 0x1.4947b0de9c051p-636, 0.0, 0x1.a112a6277f236p-921,
     0x1.7ff36d87beba2p-463, 0.0, 0x1.63439fc206c03p-1005, 0.0,
     0x1.c7c45303d2c2ap-753, 0.0, 0.0, 0.0, 0x1.83836c7838e92p-10,
     0x1.8f1168ef74d68p-778, 0x1.b844e9d436509p-83, 0.0, 0x1.25722052175a7p-910,
     0x1.97888ed1cd5dap-399, 0x1.b2f13125efaf3p-139, 0.0, 0.0, 0x1.ea3e3c09b2ae5p-4,
     0.0, 0.0, 0.0, 0.0, 0x1.f8628c3f67865p-111, 0.0, 0.0, 0x1.820f5aa1b0c03p-655,
     0x1.220f258e496fap-308, 0.0, 0.0, 0x1.96e1b29ae20e3p-186, 0x1.2f46cc15497ccp-515,
     0x1.c511637861035p-272, 0x1.e4bdbdfc3a38cp-354, 0.0, 0.0, 0.0,
     0x1.4dfc07572e4c6p-444, 0.0, 0x1.a6f36e8a78a0cp-941, 0x1.0d6213811d1bfp-803, 0.0,
     0x1.207aab00bb275p-806, 0.0, 0.0, 0.0, 0x1.bf5ad8632c08dp-313,
     0x1.5e5269a9d76bbp-622, 0.0, 0x1.9a06736ff0abfp-253, 0.0, 0x1.23a6d07a2373bp-926,
     0x1.c798de69bdd7cp-702, 0.0, 0.0, 0x1.e56df6301d3p-998, 0.0,
     0x1.a63aee0e66bddp-412, 0x1.bf5f8bab557b9p-142, 0x1.00ac36176bbfdp-559,
     0x1.1b367d151d2c6p-198, 0x1.93d993587ded6p-873, 0x1.f921623106fccp-1004, 0.0,
     0.0, 0x1.e5e815805467dp-468, 0.0, 0.0, 0.0, 0x1.3dce4d5c84789p-865, 0.0,
     0x1.d9a8a095feb6bp-616, 0x1.3661a51f91872p-839, 0x1.899066a9b3fecp-816,
     0x1.152d43bb478d3p-490, 0x1.0ec36bbdf29bfp-983, 0.0, 0.0, 0.0,
     0x1.a707a0a3c16dbp-378, 0.0, 0x1.a66db03747869p-407, 0x1.1c8f9da915d15p-370,
     0x1.338c5f9f2292ep-125, 0x1.94506dacdb613p-88, 0.0, 0.0, 0.0,
     0x1.4200de81a3f32p-874, 0.0, 0x1.9154fbba48ff5p-532, 0.0, 0x1.3c95581d36043p-846,
     0.0, 0x1.ba1ef9cce18eap-854, 0.0, 0x1.5866273dbd63p-937, 0.0,
     0x1.8b3742768a428p-718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4888eb7055009p-143, 0x1.692d17da554e7p-988, 0x1.a5145b975a3f3p-900, 0.0,
     0x1.d282cdc0ee062p-79, 0.0, 0.0, 0x1.4fa270d4c879bp-515, 0x1.5040d0a6100b8p-881,
     0x1.0f44151465006p-807, 0.0, 0.0, 0x1.bfe2551fd0182p-873, 0.0,
     0x1.cff22b80606fep-840, 0x1.09c44d7d94f53p-708, 0x1.5be206c3babcp-430,
     0x1.ac8a5ac464db2p-448, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f79c9d9a6f6p-313, 0.0,
     0x1.96f3251ea8147p-108, 0x1.2eedf45b4f4f1p-897, 0x1.e322ca224e4e4p-789,
     0x1.2464cb55dd016p-105, 0x1.935a6b169aa9cp-88, 0x1.7b6962590ec66p-898,
     0x1.03dbae44a2e09p-879, 0x1.62ed3849a4e75p-652, 0x1.852d962c3b5adp-878,
     0x1.750ed9c5b278cp-452, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97d0f7f97891ep-492,
     0.0, 0.0, 0.0, 0x1.ab3989f050de2p-297, 0x1.9faec4612579ap-7, 0.0, 0.0, 0.0, 0.0,
     0x1.c38ff2d3e99f3p-242, 0.0, 0x1.78885fbef77b3p-767, 0.0, 0x1.eaa1e8d4b97dbp-697,
     0.0, 0.0, 0.0, 0x1.d25a88a017b6p-824, 0.0, 0x1.5f12a625b9953p-139,
     0x1.41098c519ba4fp-1016, 0.0, 0x1.d8f49ef4e593ep-512, 0.0, 0.0, 0.0,
     0x1.78907c84dfe5cp-539, 0x1.f04a07892d011p-671, 0.0, 0.0, 0.0,
     0x1.34885fb2ab478p-797, 0.0, 0x1.90fa2866ea6a3p-105, 0x1.f50843918f54dp-426, 0.0,
     0.0, 0.0, 0x1.e3bbc2c188d7ep-847, 0x1.631de397af167p-185, 0.0,
     0x1.4c9e6aaa35d1ep-629, 0x1.3039698ea94bbp-535, 0.0, 0.0, 0x1.0bd1eb23ae3ffp-971,
     0.0, 0x1p0, 0.0, 0.0, 0x1.a20bf0a637dbcp-58, 0.0, 0x1.ae4d9e18e5b8ap-779,
     0x1.690b10420becap-551, 0.0, 0x1.40cff516e32f6p-278, 0x1.582482be94008p-177, 0.0,
     0.0, 0x1.7d1a566d9709p-57, 0.0, 0x1.2e5274a3639b8p-741, 0x1.3ba3e54dbbf21p-643,
     0x1.cdc85be20d089p-595, 0.0, 0.0, 0x1.692f8dba3ff83p-912, 0x1.ba8ba1fd7de0ap-294,
     0x1.e314b01377d66p-124, 0.0, 0x1.1a1d4bc5c62bep-563, 0x1.39e0d313cdb69p-966, 0.0,
     0x1.38ed7bf222652p-1013, 0x1.3267b94012d5bp-944, 0x1.6ed9cf6c4b58bp-557, 0.0,
     0x1.c8678a57ca0cep-822, 0x1.301f8adbf35dp-752, 0x1.5b0b2622d287cp-127,
     0x1.234f510d8ddep-416, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10b4c89235bcdp-400,
     0x1.b3583da8567dp-78, 0x1.3ac60f7d88861p-205, 0x1.6167ccc544ab6p-854, 0.0,
     0x1.56bce206ae064p-609, 0.0, 0x1.05ee7f5ec8bdfp-515, 0x1.1fdc1ecc300ccp-169,
     0x1.810fb1627de52p-694, 0.0, 0x1.0f414fde1af4cp-52, 0x1.148ef486bc106p-507, 0.0,
     0x1.b6c2b21efe959p-165, 0.0, 0x1.d5545aed5ff3bp-682, 0x1.85b1f683fc09cp-700,
     0x1.37d37e6553d6ep-777, 0.0, 0.0, 0x1.8b104df5fa2f5p-618, 0.0, 0.0,
     0x1.b109b04268b89p-804, 0x1.9a6296d25ad94p-732, 0.0, 0x1.c725e031b72a7p-47,
     0x1.32c48eb92263dp-280, 0.0, 0.0, 0.0, 0x1.cd2a551f0733ap-309, 0.0,
     0x1.e4735b4f1e38cp-942, 0.0, 0x1.b52e323b0b94fp-377, 0.0, 0x1.717fb89352b85p-335,
     0.0, 0.0, 0x1.1b8ff8ae1913dp-445, 0.0, 0x1.cf12745e1839p-538,
     0x1.11dd50b43ca34p-218, 0x1.2e224d3be151ap-353, 0.0, 0x1.136b7aa0259ecp-868, 0.0,
     0x1.f5c97cd9ee641p-628, 0x1.202b38935e9d5p-456, 0.0, 0x1.ec8d4dc197159p-79, 0.0,
     0x1.2f4113c4bd123p-771, 0x1.60635011d28d1p-688, 0x1.0042f2389cc25p-284,
     0x1.a56abc8abda48p-702, 0.0, 0.0, 0.0, 0x1.1439e5b79f60dp-649,
     0x1.fa7f755127832p-120, 0x1.acfd500651b2fp-729, 0x1.2b6b802842bd9p-718, 0.0, 0.0,
     0x1.71fdbd30e8685p-171, 0x1.10a4be4160162p-864, 0x1.7b6797ce70c3ap-653,
     0x1.46ba9f8acb98bp-452, 0.0, 0x1.ab1398d9c9905p-166, 0x1.44a1046241309p-545, 0.0,
     0.0, 0.0, 0x1.8324dbcae00fdp-376, 0x1.bff97fab28956p-432, 0x1.a45dcf5a5777fp-811,
     0x1.098f672cc8d3cp-622, 0x1.28d817e346112p-827, 0.0, 0.0, 0x1.6092414809abcp-233,
     0x1.689ccabf1306ap-391, 0x1.7a579af1aa31ap-685, 0x1.ac1abac73d993p-494, 0.0,
     0x1.08ca9abd93603p-353, 0x1.b9b8151a81b3ep-568, 0.0, 0x1.dd9b192edc052p-974,
     0x1.32cde49fcd047p-201, 0x1.d7d9fd3fe750fp-509, 0x1.06665150200b2p-655,
     0x1.af1e48542d355p-315, 0.0, 0x1.cd5db29944a7ap-728, 0x1.8ef8d7ec04e25p-394, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97ead9ff4c12dp-909, 0x1.50d108b442a3bp-966, 0.0,
     0x1.2233ef2404bccp-194, 0.0, 0.0, 0.0, 0x1.338d66d6c663ap-661, 0.0,
     0x1.e7b5da790ad08p-175, 0x1.848c8ab8bb19ep-166, 0.0, 0.0, 0.0, 0.0,
     0x1.dc25282db1ccep-218, 0x1.689cc2a23fbd4p-293, 0x1.6399c15b90921p-409,
     0x1.2f4e4019cf8cdp-182, 0x1.c6ba69735ff0ap-873, 0x1.2810c8370ba78p-524, 0.0, 0.0,
     0x1.663cbcac49f71p-627, 0x1.6f36c881d9ad1p-58, 0.0, 0x1.3e93226074c3cp-848, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3de958d4a442cp-476, 0.0, 0.0, 0.0,
     0x1.280311a7d48fap-534, 0x1.80a799aa85fdap-665, 0.0, 0.0, 0x1.e0fc553522b22p-255,
     0x1.670c2c74cedbp-368, 0.0, 0x1.6d21207765a38p-772, 0x1.7927062c2b2b4p-499, 0.0,
     0x1.c34a8a0ced604p-610, 0x1.cdb0cd7aae174p-310, 0.0, 0x1.02a7e97dfc4e8p-601, 0.0,
     0x1.e08f9599682afp-1007, 0.0, 0x1.e91d9875f3f39p-945, 0x1.cb607a8ea9f03p-32,
     0x1.b8d16870d2eeep-324, 0.0, 0.0, 0.0, 0x1.3b31d3c55cc28p-172,
     0x1.cd1f5614ede26p-247, 0.0, 0.0, 0x1.35ad551e4c812p-515, 0.0,
     0x1.124af01ca68abp-258, 0.0, 0x1.9c57a56e3bbadp-720, 0x1.a69c085c515f7p-589,
     0x1.e1e047948614dp-37, 0x1.747076e134426p-256, 0x1.77881cb36746p-107,
     0x1.a49b6ea30e218p-78, 0.0, 0x1.462f33eb2d8e2p-372, 0.0, 0.0,
     0x1.1b56edfd086d8p-476, 0.0, 0x1.35d2f0d861d56p-363, 0.0, 0x1.21c81842180dbp-686,
     0.0, 0.0, 0.0, 0x1.c373d131c3ed6p-2, 0.0, 0.0, 0.0, 0x1.6a08a7c095e0ep-1001, 0.0,
     0x1.9fa89768408fap-797, 0.0, 0.0, 0x1.8b63160a749c2p-760, 0.0,
     0x1.ccf47e8e213a2p-159, 0.0, 0.0, 0x1.11c061286919fp-706, 0.0,
     0x1.6cfec5542429fp-43, 0.0, 0x1.da6213a75f9bfp-880, 0x1.07362eb195b1p-844,
     0x1.b0c302d10bb53p-760, 0.0, 0.0, 0x1.ecedfcaf1494bp-944,
     0x1.e8a453aa5862bp-1009, 0.0, 0x1.273e298132224p-774, 0x1.f5428fe501a5fp-332,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b96e2f4ddaf8p-732, 0.0,
     0x1.12c41e40b8e29p-743, 0x1.36c41e02343a1p-815, 0x1.e78da3fe070b4p-501, 0.0, 0.0,
     0.0, 0.0, 0x1.4c85f7de547a6p-279, 0x1.92dd684fd2265p-339, 0x1.6ccc49956c4f1p-462,
     0x1.b130a93eab18ap-10, 0x1.e555482ec7f13p-633, 0x1.e1590b8770a16p-521, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a4eebdd769b3ep-240, 0x1.54680e3b56e89p-999, 0.0, 0.0, 0.0,
     0x1.835fd84d0bae9p-619, 0.0, 0.0, 0.0, 0x1.56c707131af2p-21,
     0x1.3794b07571704p-321, 0.0, 0x1.aa10fc8f9c473p-680, 0.0, 0x1.b6cf2b3ec002dp-367,
     0x1.8d4b6513149b6p-96, 0.0, 0x1.caf902a35d252p-575, 0.0, 0.0, 0.0, 0.0,
     0x1.cc3991eb1ef29p-279, 0x1.939a2280811dep-737, 0.0, 0.0, 0.0,
     0x1.703f08d7c7d7ep-605, 0x1.4f2513040d10fp-866, 0x1.4a605d607c49bp-432,
     0x1.67e6bfffbae03p-421, 0.0, 0x1.8447cd00965dcp-253, 0x1.0cafb4208bbd8p-578,
     0x1.7942157683618p-752, 0x1.348b3af4ce411p-839, 0.0, 0.0, 0.0, 0.0,
     0x1.c3561f4fce77cp-969, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ad36eb62181p-538, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.30edbe92add95p-886, 0.0, 0.0, 0x1.3824378c706adp-739,
     0x1.d41c68bd5491ap-300, 0x1.7286b02746abcp-832, 0.0, 0.0, 0.0,
     0x1.0bc1b41369b1bp-771, 0x1.cdb0b895db426p-575, 0x1.514788eafe37ap-768,
     0x1.4b471397d4a94p-555, 0.0, 0.0, 0x1.8064c36ebca49p-593, 0x1.29b684359b4a4p-563,
     0.0, 0x1.a164f187f1a39p-500, 0x1.3baf5f50724edp-524, 0.0, 0x1.0db046bc6f312p-647,
     0.0, 0.0, 0.0, 0.0, 0x1.10b246e36904ep-663, 0x1.41c220c7ea971p-207,
     0x1.d088bb00ceabep-76, 0.0, 0.0, 0x1.bdd0a55b8326bp-461, 0.0
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
            tmp1 = Sleef_finz_asind2_u10kvx(tmp0);
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
    printf("Sleef_finz_asind2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_asind2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
