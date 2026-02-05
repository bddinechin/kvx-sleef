/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d1_u10purecfma.c --function \
 *     Sleef_finz_exp2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.a1ad4fdc4d3ffp-252, 0.0, 0.0, 0x1.0fd39d4c3cf27p-812, 0.0, 0.0,
     0x1.133199c3e95e6p-155, 0x1.bcb437d4272cdp-412, 0x1.0f847000da195p-466,
     0x1.9cd8013ce312ap-1012, 0.0, 0x1.f067f680adfeep-16, 0x1.9d69cd6a35d1ep-101,
     0x1.cb8f4bf8cf7fdp-71, 0x1.d433cef89dcdep-117, 0.0, 0x1.b9e886efbad13p-792, 0.0,
     0.0, 0x1.77be49a90694ap-444, 0.0, 0x1.729ef45953545p-596, 0.0,
     0x1.d831386f38401p-925, 0.0, 0.0, 0x1.a795f1785e5a3p-772, 0.0, 0.0,
     0x1.80f1eaabd33cap-21, 0x1.10a118d19072cp-172, 0x1.b815b9f50bd8cp-886, 0.0,
     0x1.9ecdb730117bp-974, 0.0, 0x1.221efe438d5b3p-682, 0.0, 0x1.6819e6bc31121p-841,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7704999196188p-198,
     0x1.74777cc9f3563p-219, 0.0, 0x1.c4e73bcb154p-677, 0x1.290a2d6d67e7cp-34,
     0x1.9e14bb93a41a8p-989, 0x1.635364a4b0348p-397, 0x1.f40b44378af72p-152, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89da6e9990389p-82,
     0x1.332f29989b6b1p-93, 0x1.a4d0f983de802p-778, 0.0, 0x1.f886f3d8521e1p-993,
     0x1.13feec40e9f7dp-579, 0.0, 0x1.4b650f21b6303p-524, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bf826bc6c319ep-599, 0x1.4f5bd3107063cp-126, 0x1.dbf8f1d8fcecbp-515,
     0x1.e31ec6a96c096p-804, 0x1.97095d1404c0ep-738, 0x1.3371f85ee7ef1p-535, 0.0,
     0x1.d0aa13dc9e3efp-306, 0.0, 0x1.110782aa1adfp-148, 0.0, 0x1.96b6a66cf17dbp-792,
     0x1.5cf0fbfdd47dap-915, 0x1.4c02a9f670509p-684, 0.0, 0x1.6c19e561cc414p-605, 0.0,
     0x1.9ea09ab42bb42p-790, 0x1.5f559e060655dp-298, 0x1.2f507028149d6p-76, 0.0, 0.0,
     0.0, 0x1.44749d942a1bbp-8, 0.0, 0x1.9615cb52c82b6p-375, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.559f74bce45edp-534, 0x1.bcb57b06efce5p-609, 0.0, 0x1.382888b29e9fp-71,
     0x1.90362f398c75fp-221, 0.0, 0.0, 0.0, 0x1.d1bed5d5a320ap-868,
     0x1.c144d34b591a4p-865, 0.0, 0.0, 0.0, 0.0, 0x1.53f43633fa7fp-522, 0.0,
     0x1.96ec2a32139fap-126, 0.0, 0.0, 0x1.f4ab675ccf7e1p-430, 0x1.3c5f7a9aa5eb3p-27,
     0.0, 0x1.e323005352a94p-708, 0x1.99cf66d94ca35p-735, 0x1.15f342ca8da68p-995,
     0x1.ebb4db1c2579ep-90, 0.0, 0x1.f7712ae2aa5ffp-383, 0.0, 0x1.09a8ab3c7990dp-966,
     0.0, 0x1.3398ae5ad2fcfp-876, 0x1.eef6f7507f52fp-361, 0.0, 0.0, 0.0, 0.0,
     0x1.d06d1db65a63fp-433, 0.0, 0x1.322d0de2d35ep-517, 0.0, 0x1.954ebfbc6dffbp-810,
     0x1.8fb3807af7879p-285, 0x1.c53e29bded582p-36, 0x1.91fa7e757ec8p-183,
     0x1.f6c1b96aa47a6p-991, 0.0, 0x1.2e7203059b401p-936, 0x1.78443d62e369dp-213,
     0x1.c78367f2d4917p-1021, 0x1.0afdb4c8581acp-351, 0.0, 0.0, 0x1.5da51978aaebp-445,
     0x1.475b26e452266p-951, 0.0, 0.0, 0.0, 0.0, 0x1.8bd065bac1fedp-474,
     0x1.2d538f6c05121p-657, 0x1.5401f1443684ep-247, 0.0, 0.0, 0x1.63351e277cf42p-881,
     0x1.c39141f2ac11dp-97, 0.0, 0x1.4c9d4a8fd010bp-937, 0x1.75aefa8aa59e4p-874,
     0x1.3d6cb87cc084cp-1022, 0x1.24bafa20af43dp-427, 0x1.9d7ff48ce1f24p-813,
     0x1.c612a106af23cp-960, 0.0, 0.0, 0.0, 0x1.7802d62849153p-666, 0.0, 0.0,
     0x1.219f31047acaap-672, 0x1.4fbfd33ab1b2ap-314, 0x1.b938aad5cd55ep-753,
     0x1.636d993f429bcp-949, 0x1.da44bb3467f95p-500, 0.0, 0x1.449773195c136p-921, 0.0,
     0x1.37faeb675b659p-937, 0.0, 0.0, 0x1.e4b3941ff1f4bp-883, 0.0,
     0x1.d4b8f5a63fc55p-21, 0x1.a2863e5d3056p-622, 0x1.5d17a92632bap-898, 0.0, 0.0,
     0.0, 0.0, 0x1.239470615813ap-85, 0.0, 0.0, 0.0, 0x1.76188a85c1cd9p-359,
     0x1.253cc75daa42ap-453, 0x1.994cec1dceab5p-12, 0.0, 0.0, 0.0, 0.0,
     0x1.0d15747498292p-670, 0x1.347f3ce859e8fp-754, 0x1.3380aa793646cp-705, 0.0,
     0x1.8773943a8b551p-65, 0x1.2fe3c02069aedp-774, 0x1.189de83718311p-487,
     0x1.70870f7f011ffp-957, 0x1.23b9a5ecfc123p-505, 0.0, 0x1.72db20b2fd49fp-83,
     0x1.4ed31f909128fp-53, 0x1.1defa26c34b9ap-220, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.75ae5b98776fap-617, 0.0, 0x1.7e69091cedf72p-111, 0.0, 0x1.dbf96abf0312fp-10,
     0.0, 0x1.121e64bd9de89p-166, 0.0, 0x1.b10b2602987e5p-56, 0.0,
     0x1.e9f8c36bdf548p-718, 0.0, 0x1.9e102069a73dfp-632, 0x1.3c168bf0e2022p-771, 0.0,
     0x1.b6c77e47d300ap-531, 0.0, 0.0, 0x1.f1d9dba2bab3ep-598, 0x1.a65d077f027d8p-285,
     0.0, 0.0, 0.0, 0x1.b59745958ea77p-999, 0x1.c2dd9ba755aa2p-386, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d5b7f38ca54ecp-756, 0.0, 0.0, 0.0, 0x1.fcdc10733974bp-669,
     0.0, 0x1.35ce04db5b4f6p-868, 0x1.51a1ff8ab3bfp-554, 0.0, 0x1.4c84ce8da4b84p-750,
     0.0, 0x1.8f4e9fe29145cp-565, 0.0, 0x1.b56d0ae7680ffp-441, 0x1.6d1e0de981e9cp-516,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.319335f04d439p-945, 0.0, 0.0, 0.0, 0.0,
     0x1.0e50c736e2ad2p-449, 0x1.4e78cbc12ba0bp-152, 0.0, 0x1.fe09aea2997f5p-106,
     0x1.5774a31d02362p-957, 0x1.9654ecfa9d7dap-485, 0.0, 0.0, 0.0, 0.0,
     0x1.4bf798fa3e8cdp-225, 0x1.2ed64d173cbe9p-802, 0.0, 0.0, 0.0, 0.0,
     0x1.5d4cf148553b2p-497, 0.0, 0.0, 0x1.31e9dbbf58027p-506, 0.0,
     0x1.c9da0a9de0914p-663, 0x1.8f2a176225d52p-958, 0.0, 0x1.3f4fd0a03d9c7p-539,
     0x1.268ea7790bc2bp-798, 0x1.7999d2bea0dd2p-690, 0x1.6e94f42466679p-295,
     0x1.40dd00726eb8ap-884, 0x1.454e29f343681p-196, 0x1.3d6d3e7a9c3c3p-165, 0.0, 0.0,
     0x1.f21968c4fc63p-383, 0.0, 0x1.3c4a2e4c77959p-213, 0x1.5428008bd2ee4p-483, 0.0,
     0x1.fde0c77ed816ap-920, 0.0, 0x1.964ae367d202bp-786, 0.0, 0x1.2b37537d02113p-240,
     0.0, 0x1.35ac66aef6a06p-313, 0.0, 0.0, 0x1.dbdcf50d14641p-800,
     0x1.aa97c0a0e92ecp-130, 0x1.538b898553a16p-686, 0.0, 0x1.393b8fc0b5ed9p-887,
     0x1.b3a0e6d199574p-459, 0.0, 0x1.d18038636f591p-924, 0.0, 0x1.f34d0410de311p-509,
     0x1.b6c1f1e656b15p-423, 0x1.d460dd1843ad1p-432, 0x1.42e2f9e6d2d86p-171, 0.0, 0.0,
     0.0, 0.0, 0x1.9186a6c88706bp-181, 0x1.0e55680c9a368p-671, 0x1.7854a3634a3f4p-806,
     0x1.aa740558c236p-23, 0.0, 0.0, 0.0, 0.0, 0x1.3a709b2d940ccp-958,
     0x1.eaff91f7bbca3p-440, 0x1.75d49a19e9211p-1019, 0x1.34de2a8c07518p-622, 0.0,
     0x1.b88397b479c4cp-611, 0.0, 0x1.35c4b94c32828p-802, 0.0, 0x1.2d6c23024b621p-484,
     0x1.2af819b21fdbfp-616, 0x1.dbb9871c1b157p-736, 0.0, 0.0, 0.0,
     0x1.741ac193cf946p-1020, 0.0, 0x1.ac319dec93d3cp-395, 0x1.0b7a8373d6756p-3,
     0x1.71bbbab390322p-846, 0.0, 0.0, 0.0, 0x1.f6ebc023ccd3dp-602, 0.0,
     0x1.78594313f1689p-684, 0x1.4f598988f8454p-548, 0x1.c005e495c43a3p-230, 0.0,
     0x1.9c52d9f59cf2ap-217, 0.0, 0x1.03736aee1443ep-77, 0.0, 0x1.0ee1ae7d69b7bp-510,
     0x1.c5f02b8e90598p-31, 0x1.84956d099048fp-505, 0.0, 0x1.24b7c7b55741ep-871,
     0x1.17db3ae62a558p-913, 0.0, 0x1.2c0a6fb49e9a6p-1022, 0.0,
     0x1.68d01b3568f57p-460, 0x1.a03707713ff98p-54, 0.0, 0x1.1541cce53cd18p-2,
     0x1.45fb289a0c5d1p-940, 0x1.84a95a28e8ea5p-347, 0.0, 0.0, 0x1.bc8f489daaa97p-802,
     0x1.7c7e00245fb3ep-427, 0.0, 0.0, 0x1.eb8d9e6aca4bbp-474, 0.0,
     0x1.170978a9cee6bp-359, 0.0, 0x1.294d6c809b403p-622, 0x1.8d871c7b7492p-978,
     0x1.048d9ddae7e4p-842, 0x1.41c61405cc2b2p-141, 0x1.c49a71681ae2dp-178, 0.0, 0.0,
     0.0, 0.0, 0x1.a98edac2ff9e1p-517, 0.0, 0x1.7e7b9bd9f78cdp-376,
     0x1.3ed04ef6f5904p-786, 0x1.d19028b022d1cp-873, 0.0, 0.0, 0.0,
     0x1.3e4c6e5b2a716p-651, 0x1.afcfa15cd7c0fp-145, 0x1.af9205418694cp-807, 0.0, 0.0,
     0x1.fa6c27e3314fap-139, 0.0, 0x1.c2551120ac62bp-283, 0.0, 0x1.81db238a02157p-862,
     0x1.54a6ee508942dp-433, 0x1.4e36812bbfaep-199, 0.0, 0.0, 0.0, 0.0,
     0x1.d03749583504bp-584, 0x1.50873cf7feb6cp-299, 0x1.c7ff2b5ef8568p-739,
     0x1.9ed5dbf59f02dp-668, 0x1.ab30a1705c254p-604, 0.0, 0x1.ab17c2bb740bfp-287,
     0x1.d435008da7e57p-66, 0.0, 0x1.90fce5f9eeecbp-303, 0x1.4ed5ff8d00514p-761, 0.0,
     0.0, 0.0, 0.0, 0x1.f9d8fca569b23p-988, 0x1.244e5abb6ee34p-259,
     0x1.950b47a22a71p-145, 0.0, 0.0, 0.0, 0x1.6f18bd932cd57p-38,
     0x1.199d284b5205p-954, 0x1.3a829da85816ep-388, 0.0, 0x1.f0423774d555ap-304,
     0x1.509d04be2d341p-953, 0x1.4cf164e60db17p-827, 0x1.66e08a04b63d3p-166,
     0x1.b5d316f29eea1p-399, 0.0, 0x1.d2ed38259b1cdp-31, 0x1.28f6b1e8f605ep-839,
     0x1.46186e3c683fep-145, 0x1.e75ed763f7138p-582, 0.0, 0x1.e0da983cf9de7p-14,
     0x1.97ec947cf1916p-15, 0x1.384ab4d18aba6p-848, 0x1.35e1c0da77692p-897,
     0x1.cb93752652a38p-172, 0.0, 0x1.44c5181943973p-77, 0.0, 0.0, 0.0,
     0x1.972a7004a7d1cp-753, 0.0, 0.0, 0.0, 0.0, 0x1.94c46708ccd53p-320, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c52750bbad164p-476, 0.0, 0.0, 0.0,
     0x1.6e0dba0aa8807p-296, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8ffc425d9fcc6p-752, 0.0,
     0x1.b30e4938c2047p-456, 0.0, 0.0, 0x1.7be45d619006cp-560, 0.0, 0.0, 0.0,
     0x1.4917450f018ccp-211, 0x1.67b38b944a625p-391, 0x1.040b18e05a29fp-375,
     0x1.c09dcb2f92debp-657, 0.0, 0x1.4ce384d9ac71ap-588, 0x1.ec7046b18b917p-298, 0.0,
     0.0, 0.0, 0x1.b35e3a0802abfp-499, 0x1.ab08c695a542fp-524, 0x1.cacfcb36cd259p-277,
     0.0, 0.0, 0.0, 0x1.9fe5dc82d461p-251, 0x1.1e62e9811838bp-581,
     0x1.5738d33f66c53p-63, 0.0, 0.0, 0.0, 0x1.fafae1b7eb3edp-481, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.98f422e445acdp-313, 0.0, 0x1.0b72abbd3a098p-851, 0.0,
     0x1.d5f6ab6448042p-407, 0.0, 0x1.b7fffe8c26891p-410, 0x1.fc94d403764a2p-578,
     0x1.ae6ed5edcc7bfp-334, 0x1.d16310b3239c1p-83, 0.0, 0.0, 0x1.5e88430c90774p-37,
     0.0, 0x1.39645ee393e2ap-422, 0x1.114a729a9c704p-871, 0x1.63aa2e559187bp-11, 0.0,
     0x1.26f6660b15303p-258, 0x1.3e61513da6cbp-362, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.575b60e0a1c57p-850, 0x1.881ee74d576c8p-61, 0x1.8f0c2a524b6a2p-613, 0.0,
     0x1.1243b5801e266p-557, 0x1.9b9a7cd46a2d8p-748, 0x1.d9aed99bbbdacp-660, 0.0,
     0x1.167ed2fdd2792p-174, 0.0, 0x1.59a8b70d52663p-660, 0x1.0aa66e4cca5e9p-666, 0.0,
     0.0, 0x1.8cc3295a9729dp-499, 0.0, 0.0, 0.0, 0.0, 0x1.aff8c9a2ece2ep-141, 0.0,
     0x1.0afdfb19e8e53p-149, 0.0, 0.0, 0x1.fc167db462e78p-873, 0x1.8496ccccf6fdp-551,
     0x1.da3197e855dd4p-529, 0.0, 0x1.78c95bb83e5f3p-153, 0.0, 0.0,
     0x1.1a0b4ad12d52p-618, 0.0, 0.0, 0x1.4950aa6950e2p-269, 0.0,
     0x1.2fe1db1b69d9ep-219, 0x1.351ce75870f3dp-837, 0.0, 0x1.2c6f4521aedf1p-386,
     0x1.24ffb85b98f1bp-924, 0x1.f9f754869dc4ep-850, 0.0, 0x1.0b28bf6948f4bp-626, 0.0,
     0.0, 0.0, 0x1.9cc6dc9dbc93ep-100, 0x1.41cbaf57314d1p-840, 0.0, 0.0,
     0x1.4d1efc4b1573dp-763, 0x1.528df683c8b12p-371, 0.0, 0x1.00b23ce8e9a6fp-110,
     0x1.4f422225c20e8p-621, 0.0, 0x1.47821e24b4c8ep-850, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0e8665c9503p-632, 0x1.9913d15ac9edp-842, 0x1.685f3263b7d49p-705,
     0x1.2f9673ccd659ep-119, 0x1.1b3409bf63bb2p-912, 0x1.a844dc5f098dfp-198, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.755eaf78cc50fp-596, 0.0, 0.0, 0.0, 0x1.2cda09b1e2f7fp-162,
     0.0, 0x1.6c1d9c7caca2ap-750, 0.0, 0x1.8aa831c159e5dp-770, 0x1.6483648ff097dp-768,
     0x1.1dfa86593142p-605, 0x1.c97ee7a0db13ep-317, 0.0, 0.0, 0x1.beeec082d5b0cp-897,
     0x1.2e28944784329p-312, 0.0, 0.0, 0.0, 0x1.380de3991795p-663, 0.0,
     0x1.930ee1b0a3814p-146, 0x1.6bc1eba64a5c8p-956, 0x1.f878f3eac8ebbp-181, 0.0,
     0x1.16e9a2bbc4b4fp-127, 0.0, 0x1.1a89cb8c1d974p-633, 0x1.0752f5ec17ae7p-879, 0.0,
     0x1.28d8fe996a714p-249, 0.0, 0x1.c9920487d3f7p-835, 0x1.8a00769a6ae54p-210,
     0x1.fcfa7ca3a85f9p-183, 0.0, 0.0, 0x1.78d89abd1f4ddp-478, 0.0,
     0x1.1452a432fa612p-145, 0.0, 0x1.773914fac261bp-228, 0x1.1bdc103150d84p-44, 0.0,
     0.0, 0.0, 0x1.4f701a4af3017p-337, 0x1.4093970bc2ad5p-391, 0.0,
     0x1.75d1c64efc2eep-140, 0x1.2519ea223b78cp-129, 0.0, 0x1.54079a3250994p-765, 0.0,
     0.0, 0x1.aba4d2dae3c99p-601, 0x1.e49c06bd66977p-500, 0.0, 0x1.83d2da007c98ep-36,
     0x1.7211b3709f32dp-923, 0.0, 0.0, 0.0, 0.0, 0x1.0dba277301bb9p-958, 0.0,
     0x1.06959321355bep-602, 0.0, 0.0, 0x1.c9d12659210d1p-701, 0.0, 0.0, 0.0,
     0x1.9edbb7dad897ap-976, 0x1.efab83f244091p-806, 0x1.4485fbfffcb08p-582,
     0x1.0c1bb51c4f1ebp-187, 0.0, 0.0, 0x1.ac7888fcd5c2ap-60, 0.0, 0.0,
     0x1.40331911d35abp-855, 0.0, 0.0, 0x1.ef2cac043a369p-575, 0x1.7cc1e8db35e7bp-45,
     0x1.c0d826f197b56p-370, 0.0, 0.0, 0.0, 0.0, 0x1.afefb7912710ep-748, 0.0,
     0x1.e075abf7516ecp-961, 0x1.239aa61a14373p-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a9485a898ddep-807, 0.0, 0x1.cd26a1d1bf772p-333, 0.0, 0.0,
     0x1.d6a741f746351p-564, 0.0, 0x1.f0fa318cddd07p-539, 0.0, 0x1.9c52bd5ec018ep-918,
     0x1.6955176b52f0ep-931, 0.0, 0x1.b6b5583f5f4fap-57, 0.0, 0x1.dfa65bd78c8f1p-577,
     0.0, 0.0, 0.0, 0.0, 0x1.ecce12581115cp-843, 0.0, 0.0, 0x1.691bb4402835p-996, 0.0,
     0x1.f91858d8a87c2p-446, 0x1.19fa19c18e5bep-285, 0x1.abd9b260faa7bp-326, 0.0, 0.0,
     0x1.a3fa8b3063c8fp-139, 0.0, 0.0, 0x1.2da54e1d24adap-452, 0x1.1f56b1848f86p-160,
     0.0, 0x1.bac5917e0797bp-944, 0x1.0859c7486a8f2p-793, 0.0, 0x1.bda1786ee642cp-709,
     0.0, 0.0, 0.0, 0.0, 0x1.87082f7839271p-198, 0.0, 0.0, 0.0, 0.0,
     0x1.f2c5bbce4426ap-258, 0.0, 0x1.d485851c4050ep-281, 0.0, 0x1.fb7da5a4f1ee5p-795,
     0.0, 0x1.e9972b7f96cc1p-38, 0.0, 0x1.722399d6a2947p-258, 0x1.39c4a407b0fdfp-717,
     0.0, 0.0, 0x1.a60358b794bep-321, 0x1.1503b1ecacdb7p-620, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.67fbd9c298dfap-958, 0x1.667dbfe740cffp-591, 0x1.7c7feb88ceefep-6,
     0x1.9a66c106b63c5p-71, 0.0, 0x1.a0c558f212019p-128, 0x1.bbaae9f78b6aap-222,
     0x1.54604b0393ef8p-756, 0x1.3b5d888ad182bp-129, 0.0, 0.0, 0.0, 0.0,
     0x1.699d47a02ca2bp-81, 0.0, 0.0, 0.0, 0.0, 0x1.a65dbb4ab4c8ep-418,
     0x1.de58bb5227f7cp-317, 0x1.2c52f86571b92p-9, 0.0, 0x1.c65bc9da8069ap-894, 0.0,
     0.0, 0x1.6bdbe00a220fep-724, 0x1.4cbac3b97c771p-778, 0.0, 0x1.1f6d9d09be72bp-453,
     0.0, 0.0, 0.0, 0.0, 0x1.1cb8c92d94d9dp-810, 0x1.7802b58020b76p-592, 0.0,
     0x1.207e57f76acf3p-654, 0.0, 0.0, 0x1.0308c2ec15176p-926, 0x1.d79cae93ec19fp-158,
     0x1.c71c47e86a71cp-501, 0.0, 0x1.d088ca1bac5fbp-145, 0x1.aad23ad31f39ep-519,
     0x1.f39dc3a53c42bp-674, 0.0, 0.0, 0x1.add3c2b0ad4dcp-123, 0x1.f70037558c18ep-321,
     0.0, 0x1.32770b6746697p-1003, 0.0, 0.0, 0.0, 0.0, 0x1.af4dc68f22b2dp-606,
     0x1.d90662067bdd8p-273, 0.0, 0x1.13408424c3bffp-549, 0.0, 0x1.e729be951c17ep-318,
     0.0, 0x1.11ae290f168fdp-685, 0x1.3dae689631567p-30, 0x1.ef018bc8defdap-664,
     0x1.e75814ea020a2p-674, 0x1.a685051397c12p-165, 0x1.f6a03557646f6p-23,
     0x1.1f22394fd7584p-679, 0.0, 0.0, 0x1.160606ee8602ep-227, 0x1.1d4c3120fba53p-86,
     0.0, 0x1.8c72fc5c16e9cp-675, 0x1.74a38e8a80ceep-653, 0x1.ff55953b48328p-569, 0.0,
     0.0, 0x1.1bbee80d45211p-334, 0x1.22096a1a94532p-944, 0.0,
     0x1.d8837eaab725ep-1009, 0.0, 0.0, 0x1.fcdf584063c74p-268, 0x1.2d55392d33a3fp-12,
     0.0, 0.0, 0x1.c472e32b77f59p-378, 0.0, 0x1.fb23717c3387dp-821,
     0x1.d947de6b69faep-792, 0.0, 0.0, 0x1.e8de9bc81665p-560, 0.0,
     0x1.f97a6fff3501dp-462, 0.0, 0x1.37e68725a7a99p-431, 0x1.ae2bc3c4d982fp-42,
     0x1.53a73d55a5ee5p-439, 0x1.51b3b29f48e6p-531, 0x1.b875faa3102bep-444, 0.0, 0.0,
     0.0, 0x1.a0bc760120e6ap-529, 0x1.5865a0f7117bfp-942, 0x1.b2b489e096115p-877, 0.0,
     0.0, 0.0, 0x1.c7abe56ad38c4p-378, 0x1.1ad09bd19262p-990, 0x1.ab2d8bab1353ep-395,
     0.0, 0x1.4e716a0e9ebacp-931, 0x1.828a827aa3781p-391, 0x1.0d8e15cd6cd61p-644, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.121a94b54546ep-620, 0.0, 0x1.7622a449e609ap-716,
     0x1.43dec1d9471cap-623, 0x1.0ee6c405b17bcp-519, 0.0, 0.0, 0.0,
     0x1.75e8f8cfe5cfep-883, 0.0, 0x1.e847bc5d53ad5p-608, 0.0, 0x1.523cbb9b0d416p-212,
     0x1.536d09d216a31p-142, 0x1.3256ee8cce0e9p-235, 0.0, 0x1.9b8b380f21798p-742, 0.0,
     0.0, 0x1.e3b04e5df4653p-943, 0x1.8bdacedcdd515p-831, 0.0, 0x1.202caa59e9f39p-723,
     0.0, 0x1.682c4790c81ddp-908, 0.0, 0.0, 0.0, 0x1.b012d6def90d8p-401,
     0x1.82bd80bef60e3p-822, 0.0, 0.0, 0x1.935c756708a5bp-592, 0.0,
     0x1.a1caf8ec0c19ap-544, 0.0, 0.0, 0x1.435636440d0e6p-491, 0x1.2cbdb49fd221ep-634,
     0x1.8cff9a4973ac7p-337, 0x1.03a26187afb8ep-26, 0x1.5a4adfba8d576p-201
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0;
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
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_exp2d1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
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
    printf("Sleef_finz_exp2d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp2d1_u10purecfma bench acc %la\n", global_bench_acc);
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
