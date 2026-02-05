/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d2_u35avx2128.c --function Sleef_exp2d2_u35avx2128 \
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
     0.0, 0x1.0df3cdd818177p-968, 0.0, 0.0, 0x1.03edf974ae4ecp-39,
     0x1.f9915735047dp-122, 0.0, 0x1.01ed2b01eaab9p-748, 0.0, 0x1.25a0fcf98ab7fp-420,
     0.0, 0x1.a155f19f04533p-258, 0x1.f9a0a81ee637ap-980, 0x1.077ae5744056ap-337,
     0x1.2caf030908deep-407, 0.0, 0.0, 0x1.09f15faaf06b2p-180, 0.0, 0.0,
     0x1.f8f9a7857eb8bp-276, 0.0, 0.0, 0x1.81a6d48b193ep-892, 0.0,
     0x1.d990bfebae6ebp-362, 0x1.f061a6a26060ep-254, 0x1.5873578c1dcf3p-44, 0.0, 0.0,
     0x1.3d1f193e946dep-1021, 0.0, 0x1.dd7d248ed78dcp-288, 0x1.0c030114b2ca7p-268,
     0.0, 0x1.20b85cc5033e4p-733, 0x1.3ef4ca39a3ab9p-777, 0x1.6b6a00789583ap-599,
     0x1.6fcac4204e88fp-586, 0x1.4f1d03df3ebdbp-6, 0.0, 0.0, 0x1.ba67768743053p-293,
     0.0, 0x1.43f8cc38b1c52p-649, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.983b80914b27ep-819,
     0.0, 0x1.62383d833b5dcp-981, 0x1.1033aabf8a2e1p-673, 0.0, 0x1.e43d364ad34b3p-829,
     0.0, 0x1.b24cc4cf46824p-602, 0x1.bba3e959e7479p-800, 0x1.5212611365e68p-354, 0.0,
     0x1.0cddd0ff64c63p-590, 0x1.662d9ee86935cp-388, 0x1.9ea7ba4e5fe1p-989, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.88e4aca3b6f06p-366, 0.0, 0.0, 0.0, 0x1.0c38bc199abeap-688,
     0x1.e1eb42282369ap-317, 0x1.e93e9dcb267c5p-699, 0x1.81b86fa2f8188p-790, 0.0,
     0x1.4edba05b1c426p-845, 0.0, 0.0, 0.0, 0x1.2fb64b75857b1p-773, 0.0,
     0x1.4b6109e5404c8p-511, 0x1.cdd95e3f7de0cp-437, 0x1.01b21813034f4p-463,
     0x1.64e433d337ce9p-394, 0.0, 0x1.f5844a1ca8f93p-31, 0.0, 0x1.76bf16a224c89p-821,
     0.0, 0.0, 0x1.42d11913125b6p-975, 0x1.238308fa658bep-59, 0.0, 0.0,
     0x1.02664d96caeddp-508, 0x1.1ce9278ec8beap-928, 0x1.e8977ba28c2ecp-120, 0.0, 0.0,
     0.0, 0x1.741413776889ep-476, 0.0, 0x1.f521e0e980438p-296, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2c0c4a88749cfp-697, 0x1.2513e7bcf3a2bp-493, 0.0,
     0x1.ff0a23a0f13c6p-222, 0x1.d0958716e6dc1p-762, 0x1.d5f24c1787847p-214, 0.0, 0.0,
     0x1.3d2002357f886p-615, 0.0, 0x1.99599d1c6988cp-407, 0x1.2cbe3f2c847adp-218,
     0x1.dacd8c41cd833p-888, 0.0, 0.0, 0.0, 0x1.58e9e7b05c06p-523, 0.0,
     0x1.1f7162767dec7p-775, 0x1.6a07f66b9a44cp-810, 0x1.863b0d0d41378p-9,
     0x1.a3d532f04f71fp-162, 0x1.c6a074c74bffap-809, 0x1.5d5a04ea89e7fp-935, 0.0, 0.0,
     0x1.0641a5cbd6f2bp-383, 0x1.569cdbd70733dp-960, 0x1.ad39016fbfb76p-72,
     0x1.59e611968933p-461, 0x1.981c188b7c33dp-595, 0x1.bff8320c7677ap-304,
     0x1.9bbd672ae16d1p-100, 0.0, 0.0, 0.0, 0x1.26b222a629dc3p-102, 0.0,
     0x1.e6c97b6ed8ba9p-382, 0x1.655190385cdbdp-201, 0.0, 0x1.af1597f589cc5p-240,
     0x1.da171a8458232p-525, 0.0, 0.0, 0x1.f343daac2d751p-517, 0.0, 0.0, 0.0,
     0x1.93ef29d6864efp-356, 0.0, 0.0, 0.0, 0x1.1c406240b4d3p-54,
     0x1.0f19ded1256e1p-27, 0x1.1d0f6582a849ep-146, 0.0, 0x1.01d6e22d54b4ap-914,
     0x1.91df280a71ae7p-12, 0x1.fadb33f4c29a6p-597, 0x1.8d12144030457p-157,
     0x1.f3587f91fdceep-905, 0.0, 0x1.40ee74ffb5769p-785, 0.0, 0x1.01685f5d59ab3p-848,
     0.0, 0.0, 0.0, 0.0, 0x1.415c2efddbd8ep-28, 0.0, 0x1.c1d8e7974e3a9p-647,
     0x1.7114ff0bb4f36p-256, 0.0, 0.0, 0x1.b169935201672p-479, 0x1.5680d8faf230ap-382,
     0.0, 0.0, 0.0, 0x1.1c490be6f772bp-863, 0x1.3cb41750fcd55p-785, 0.0, 0.0,
     0x1.cbe10a17b762dp-796, 0.0, 0x1.80342d820f2ep-829, 0x1.cfacb0ebdb344p-897,
     0x1.0023540b7b56p-435, 0.0, 0.0, 0x1.ad6e9c0a3116fp-632, 0.0, 0.0,
     0x1.f1aa3abfb0deep-105, 0x1.acd6466f10b3ap-766, 0.0, 0.0, 0.0, 0.0,
     0x1.236efd5872e9dp-38, 0x1.54f627b7f6d53p-180, 0.0, 0.0, 0x1.8b6fa8962f387p-813,
     0x1.02d36f1b1312ep-499, 0x1.98522cf32524p-934, 0x1.3f938b2cf45f7p-663, 0.0,
     0x1.8b6e26ea2898cp-302, 0x1.54544ac1d155cp-664, 0x1.1a50757d7569p-523, 0.0, 0.0,
     0x1.1a47031abc2f3p-145, 0.0, 0.0, 0.0, 0x1.f098b6f58701ap-370, 0.0,
     0x1.06bb16fa7ec8cp-591, 0x1.3af30ab80ba3fp-494, 0x1.c5abbf1b36b42p-63,
     0x1.252cec1fd6546p-537, 0.0, 0x1.d9198794fbf36p-432, 0x1.11da922233f02p-257, 0.0,
     0.0, 0.0, 0x1.07cdaeb67a1ep-618, 0.0, 0x1.ca4fb823cbb56p-509,
     0x1.ca1a6543d2c32p-290, 0x1.b5b4b79326ef6p-47, 0.0, 0.0, 0x1.15b4922816de6p-308,
     0x1.d2c4380476662p-529, 0x1.f44e21bbd7abap-868, 0x1.025426ca4c385p-945, 0.0, 0.0,
     0.0, 0x1.9da4358b2a51ap-510, 0x1.5a1bf2e65cb09p-3, 0.0, 0x1.92c60ee5e2d5dp-120,
     0.0, 0.0, 0.0, 0x1.032a742bcd537p-861, 0.0, 0.0, 0x1.f2fb69bb54746p-480,
     0x1.ddd6f99ef0de6p-940, 0.0, 0.0, 0.0, 0x1.dc0ecc2c0c43fp-832,
     0x1.d0ff9cc8497b7p-321, 0x1.7b788ee215867p-253, 0x1.360752b674effp-402, 0.0,
     0x1.904cc029def3dp-387, 0x1.c13e07272d679p-912, 0.0, 0x1.906b0410402dfp-156, 0.0,
     0x1.23cea4ce1feacp-193, 0.0, 0.0, 0x1.837cf1b3197adp-542, 0.0,
     0x1.59841b8607c85p-515, 0.0, 0.0, 0.0, 0.0, 0x1.aaf4f1bf220a6p-300,
     0x1.0b13299610d38p-84, 0x1.6a777745e16e4p-814, 0x1.c0bfcf83623dbp-335, 0.0, 0.0,
     0x1.4cd30da355e9ep-866, 0.0, 0.0, 0x1.e4574c0296fa7p-886, 0.0,
     0x1.33ec39ba83403p-515, 0.0, 0x1.4b472f52204bcp-2, 0x1.98031a014969fp-165, 0.0,
     0x1.999d5cdbe1ef7p-196, 0x1.7fcdfbfdf7333p-947, 0.0, 0.0, 0x1.85aac809b3105p-559,
     0x1.90d3ef9d9a13p-154, 0.0, 0.0, 0x1.e53f6281f1p-72, 0x1.6ae50321c3bd8p-597,
     0x1.a7dcbf758ef3dp-735, 0.0, 0x1.14e1c694ef2b6p-840, 0x1.a550a5c8a053ap-209,
     0x1.f72de85466443p-3, 0.0, 0x1.1821a24ca5144p-564, 0.0, 0x1.b6918bb4e60e7p-399,
     0.0, 0.0, 0x1.a3a18ab1366ccp-477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f60730862b566p-536, 0.0, 0x1.a7321988a6d33p-419, 0.0, 0.0, 0.0,
     0x1.e6fe81ab4f4c4p-540, 0x1.231f7fead9717p-309, 0.0, 0x1.d980a90d262c2p-968, 0.0,
     0x1.f1118c8c9215fp-566, 0.0, 0.0, 0x1.7abe8eee1d01dp-560, 0x1.7a7fbe0f27c6p-520,
     0x1.5779d49aca2a5p-542, 0x1.9a31f33739724p-515, 0.0, 0x1.25e9c15cf69adp-832,
     0x1.e21fd9e7f5947p-781, 0x1.1a34c7194d2cap-930, 0x1.c755164709b27p-186,
     0x1.de7c5f665e5c7p-518, 0x1.24c7f95420c5fp-405, 0x1.41aeb48abd6fep-917, 0.0, 0.0,
     0x1.9f031932d688bp-498, 0x1.1d52aa62b050ap-603, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2ad1079748b47p-459, 0.0, 0.0, 0x1.3ae231df3699bp-33, 0x1.af04ff873e106p-396,
     0x1.2bc1082707e4ap-8, 0.0, 0.0, 0.0, 0.0, 0x1.599e24c186775p-373,
     0x1.4ad9d60d1e6ecp-770, 0x1.0d472ccbc6255p-270, 0.0, 0x1.506a2312afe57p-493, 0.0,
     0x1.10fe7a0bd2986p-893, 0.0, 0.0, 0.0, 0.0, 0x1.aa3db6180a108p-436,
     0x1.b7772acd5fa75p-413, 0.0, 0x1.7bcdc96c24693p-631, 0.0, 0.0,
     0x1.84ed467a74795p-733, 0x1.9f61bf1c6af55p-77, 0.0, 0.0, 0x1.057e8bce60409p-95,
     0.0, 0x1.73470e2dd70cep-389, 0x1.a5a66dea06c56p-870, 0.0, 0.0,
     0x1.485553662beb6p-86, 0x1.6d6a6fb6cec69p-888, 0x1.81520cb99f2a8p-690, 0.0,
     0x1.784b91532e5b4p-1022, 0x1.67b9b94d33a82p-834, 0.0, 0.0, 0x1.244b74b7021eap-75,
     0x1.299f090261a48p-25, 0.0, 0x1.58a631d5e8086p-985, 0x1.4d3f45c6447d7p-521,
     0x1.effc96682bcebp-573, 0.0, 0x1.9fae764fbd2aep-448, 0x1.865847b9df1ffp-728, 0.0,
     0.0, 0x1.69c8357ade7a4p-101, 0.0, 0.0, 0x1.7ca26ee368ed3p-191,
     0x1.8db8f1d12388p-1010, 0x1.8f59ac9b2af34p-936, 0.0, 0x1.608e69054feedp-73,
     0x1.623001909971bp-829, 0x1.e51c94b841672p-789, 0.0, 0x1.3c77ad9c4379ap-300, 0.0,
     0.0, 0x1.cea7828ecf3c6p-640, 0.0, 0.0, 0.0, 0x1.0df170e5e6242p-343,
     0x1.c425f54c54cf1p-651, 0x1.a1c24230e96e4p-604, 0x1.c53723385dacbp-767, 0.0, 0.0,
     0.0, 0.0, 0x1.36f44f13ba677p-542, 0x1.81729ce3b0f4dp-406, 0x1.52e093c98ae19p-688,
     0x1.c1b867635738ep-329, 0.0, 0.0, 0.0, 0.0, 0x1.4ca7da04e9f54p-702,
     0x1.e577510a757d5p-173, 0.0, 0x1.8eb17feab4cb7p-205, 0x1.e5a4718f30f77p-195, 0.0,
     0x1.96e9b9253d753p-816, 0x1.c127683d4f09bp-7, 0.0, 0x1.c4680fb88d3fp-888, 0.0,
     0x1.28de786be1894p-188, 0x1.7b19b39ed75fcp-105, 0.0, 0x1.dd514d5140661p-859,
     0x1.63684c532d957p-861, 0.0, 0x1.e6daa77b51a09p-106, 0x1.4e4b9e9b9f10ap-812, 0.0,
     0x1.1df1a7eb61545p-976, 0.0, 0.0, 0x1.f0f011f7e8abp-525, 0x1.90bc3f1acd93dp-538,
     0x1.5920b377a5684p-703, 0x1.8825867604de4p-162, 0x1.d0946546d681p-508, 0.0,
     0x1.f5b6cb59a66e1p-595, 0.0, 0x1.54599a38a0464p-608, 0.0, 0.0,
     0x1.ff8a36457a01ep-917, 0.0, 0.0, 0x1.1784dd0bfe5e3p-994, 0.0,
     0x1.dfee3107fc38dp-9, 0x1.a8beea7a226d1p-3, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4b62f8b8a9f3dp-247, 0.0, 0x1.b9d1c2ec84736p-991, 0x1.6223ca3ea7aa1p-623, 0.0,
     0.0, 0x1.11b3f0f38c789p-213, 0.0, 0.0, 0.0, 0x1.e02a7ed577253p-984,
     0x1.ad920c6b0a1d7p-166, 0x1.d4fdcf08cdea4p-300, 0x1.f28423e85ddd3p-668, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.322e96e3896f2p-490, 0.0, 0x1.6ae3a9c510ee8p-575, 0.0,
     0.0, 0x1.ba548bd19e7bbp-972, 0.0, 0.0, 0x1.8ed51fa3598b6p-839, 0.0,
     0x1.43219a0d212b5p-690, 0x1.c2655a6070ec6p-659, 0x1.1a5fac3dd0bc5p-37,
     0x1.9877f4127cafbp-368, 0.0, 0x1.2fbdccc1b1c8dp-130, 0x1.cdeb6e4f5a3c8p-387, 0.0,
     0.0, 0.0, 0.0, 0x1.166073c3e2a93p-914, 0.0, 0x1.ac4c5cc8a8644p-660, 0.0,
     0x1.2d6f6c156f4d6p-778, 0x1.11c73a4344d15p-869, 0x1.d4453857d8a19p-774,
     0x1.0c695218eebd3p-36, 0.0, 0x1.67aa0e42ac8dbp-993, 0x1.8ef2b41b8a636p-572, 0.0,
     0.0, 0.0, 0.0, 0x1.8bb487e59e4cfp-366, 0.0, 0.0, 0.0, 0.0,
     0x1.2105ae0fcfb9cp-1009, 0.0, 0x1.d90818a09f904p-603, 0.0, 0.0,
     0x1.e620fda1b2266p-212, 0x1.f9ae8b8c77a52p-721, 0.0, 0.0, 0x1.f616572b79b83p-793,
     0x1.40c74232c186p-741, 0x1.76fbfcec3a0d6p-49, 0.0, 0.0, 0.0,
     0x1.f4f1ba98f0707p-1009, 0x1.2d68111093bf1p-4, 0x1.9e3ca9beb20ebp-325,
     0x1.ee5e4c589c36bp-41, 0x1.5ddee07577a46p-1010, 0x1.ab5683f3c9af3p-468,
     0x1.eb240b97e6fddp-613, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c284d42fbd49p-47,
     0x1.484b4b4745f2dp-856, 0x1.290767be55096p-750, 0x1.ec14facadef7ep-841, 0.0,
     0x1.e381174818a92p-137, 0.0, 0x1.7873d9d75a1b5p-484, 0.0,
     0x1.c8b44b1a84d1dp-1007, 0.0, 0x1.3be79e54ca28cp-955, 0x1.b22b38a1ee53fp-83,
     0x1.52d40d73cf262p-916, 0x1.5a173dc4d90a5p-88, 0.0, 0.0, 0.0, 0.0,
     0x1.d277001ba968fp-282, 0.0, 0.0, 0x1.c3b3bdc7ed6e7p-667, 0.0, 0.0, 0.0, 0.0,
     0x1.34980a7e28269p-473, 0.0, 0.0, 0x1.aa6d1ecd167edp-202, 0x1.2b620149b5d29p-931,
     0x1.4a63157668df7p-452, 0.0, 0.0, 0.0, 0x1.061b57da0607cp-683,
     0x1.625036f9a51b8p-890, 0x1.a4cb30d2cd9d6p-338, 0.0, 0.0, 0x1.f87882c061c9bp-893,
     0x1.5d236f8cb36dcp-455, 0.0, 0.0, 0.0, 0x1.4450a008341b3p-822, 0.0, 0.0,
     0x1.0ae12f970635cp-292, 0.0, 0.0, 0x1.8e69295e483ecp-505, 0.0,
     0x1.56b5a123dfd8bp-100, 0.0, 0.0, 0x1.ac64a4afe6b8p-860, 0.0, 0.0,
     0x1.ecb32ddba629ap-135, 0x1.2853684abf6f6p-503, 0x1.4159539240d26p-165, 0.0,
     0x1.24d476f14ac8cp-777, 0x1.38ef4fc0de1a2p-819, 0x1.1db5edb93eb67p-900, 0.0, 0.0,
     0x1.520bf56bd87e3p-816, 0x1.1bcfb49c45ecap-681, 0.0, 0x1.5c11695f0f4afp-743,
     0x1.8931d6e3175dfp-32, 0.0, 0x1.83b3efe58a31ep-619, 0.0, 0.0,
     0x1.f6664aae0060cp-924, 0.0, 0x1.0f124348f0a83p-942, 0x1.8a360ad8065fdp-624, 0.0,
     0.0, 0.0, 0x1.01b0e67f8fd5ep-946, 0x1.e29c8d20a045ep-877, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.285c291b92cb9p-903, 0x1.8767958f9c777p-77, 0.0, 0.0, 0.0, 0.0,
     0x1.143881fd0ee18p-521, 0.0, 0.0, 0.0, 0x1.b33f3cb568ebdp-289,
     0x1.98f6711d2c0b8p-747, 0.0, 0.0, 0.0, 0.0, 0x1.062f5d75bf69p-460,
     0x1.84a0018ea8c25p-1015, 0.0, 0x1.448bb47b7bc92p-930, 0x1.924764f5190edp-152,
     0x1.6f07f9ad14a58p-193, 0x1.406bdaa273fap-986, 0.0, 0.0, 0.0, 0.0,
     0x1.f7e44865357f9p-718, 0x1.4115bc82fcfdcp-379, 0x1.add12d9c5677cp-279, 0.0, 0.0,
     0x1.1dfb21a9f338bp-996, 0.0, 0x1.794d642ddc464p-177, 0x1.a72c94ea79ca7p-956,
     0x1.0f801250c9176p-17, 0.0, 0.0, 0.0, 0.0, 0x1.1cb071c09916fp-486,
     0x1.1610370fff865p-565, 0x1.4738339ec07cbp-75, 0.0, 0.0, 0.0,
     0x1.027ee8308282ep-681, 0.0, 0.0, 0x1.c470552e61c58p-270, 0x1.48b66c053af63p-588,
     0.0, 0.0, 0x1.815d2a278f1dap-988, 0.0, 0.0, 0x1.7453fa7c15007p-759,
     0x1.edb139a4337b2p-384, 0.0, 0.0, 0x1.18df79adeae32p-392, 0.0, 0.0, 0.0,
     0x1.f33ba26b716fap-675, 0x1.b6e66d779ce6cp-934, 0x1.4ce2b31fb75a7p-261, 0.0, 0.0,
     0x1.81cf2075c0bbcp-560, 0x1.b9bf23a779e6cp-97, 0x1.0bb5b5800d273p-974,
     0x1.7d834d56697d1p-176, 0x1.3eeef32bf09a4p-896, 0.0, 0.0, 0.0,
     0x1.5e3da4e803d16p-744, 0x1.af1551c397a8fp-687, 0x1.64b13cb691039p-756,
     0x1.6c1f36cd9e5cep-195, 0.0, 0x1.2cdd570aa1c8dp-454, 0.0, 0x1.fc5adf7929fafp-132,
     0x1.206f140b6d07bp-617, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.382d514b09e95p-887, 0.0,
     0.0, 0.0, 0x1.5f7dded9de4e7p-692, 0.0, 0.0, 0x1.2ca1bedd3a991p-546, 0.0,
     0x1.2594bd7474886p-239, 0x1.3a9cda7986934p-370, 0x1.181c1161ddb82p-835,
     0x1.345384501dbe8p-886, 0x1.534f04fee8988p-571, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.54d6c195920eap-711, 0.0, 0x1.9549590e0c2d3p-288, 0.0, 0x1.035a8a5f1f618p-327,
     0.0, 0x1.0c490b5fa5d25p-903, 0x1.7ecd07c2d1241p-533, 0.0, 0x1.2e783cb9677ccp-452,
     0x1.c3864cb85ef84p-111, 0.0, 0x1.ff93052e59f22p-958, 0x1.5b406d5612657p-318,
     0x1.7b4745381763cp-187, 0.0, 0x1.a9d15dca5e094p-921, 0.0, 0x1.a6538ff76bd31p-621,
     0x1.64932ffe75eap-140, 0x1.f9fdcad66c3dcp-879, 0.0, 0.0, 0x1.537113916bd35p-571,
     0.0, 0.0, 0x1.b0d882fd91ae8p-249, 0x1.195e435b0471bp-857,
     0x1.8a0760d5ebb9bp-1018, 0x1.a6086f2d745fep-826, 0.0, 0.0,
     0x1.1af09311a5129p-249, 0.0, 0x1.285af31ca096bp-204, 0x1.af98ad4b565c9p-14, 0.0,
     0x1.d79a626d7e372p-167, 0.0, 0.0, 0.0, 0.0, 0x1.3628e3ed20666p-177, 0.0, 0.0,
     0x1.47af3156e00aap-745, 0x1.aa7e9e3e699e4p-116, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c859f9bbd8d66p-975, 0x1.fca43f58a9d94p-761, 0.0, 0.0, 0.0,
     0x1.355fb6245426ap-679, 0x1.97e1bac5d40dep-515, 0.0, 0x1.2541c83026884p-548, 0.0,
     0x1.99b92f7c7cc9ep-435, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.918f69e79c3e7p-246, 0.0,
     0.0, 0x1.1c5c68cd31418p-426, 0.0, 0x1.063606d205d2bp-589, 0x1.5cb035b1b2407p-882,
     0x1.e4d9b5220ee1ep-321, 0x1.c0000fefedf37p-990, 0.0, 0.0, 0.0, 0.0,
     0x1.bd037e9cccca5p-46, 0.0, 0.0, 0x1.b5722c449f9b3p-942, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6886907ae04d2p-729, 0x1.813f8a1d16f2ep-167, 0.0, 0x1.2f93864507dc4p-1011,
     0x1.ba33a4db7b723p-557, 0x1.7eab522160fa8p-13, 0x1.a088d0c500902p-648, 0.0,
     0x1.789eefa59ad51p-497, 0x1.0af222ae1219ep-196, 0.0, 0.0, 0.0,
     0x1.8912e516d64e7p-576, 0x1.e01d5454ce002p-292, 0.0, 0x1.65a5d08475e81p-374, 0.0,
     0x1.f687d0a0ff673p-928, 0.0, 0.0, 0x1.e06541c5dd597p-317, 0x1.95a63478a0c52p-765,
     0x1.cbeb3171d07bfp-254, 0x1.58be7cf53af3cp-61, 0.0, 0x1.be5bc8505bc27p-311, 0.0,
     0.0, 0.0, 0x1.f784980449025p-458, 0x1.372567ca982b2p-451, 0.0,
     0x1.f5571ed3ef29ap-628, 0x1.de5a75147b8c5p-283, 0x1.ab43044b843fdp-115, 0.0, 0.0,
     0.0, 0.0, 0x1.198d413440c18p-890, 0x1.e59e0ca5ba36fp-173, 0.0,
     0x1.7cd9133dbdd0ap-573, 0.0, 0.0, 0x1.38a849c141644p-472, 0x1.acc91e70e24e4p-98,
     0x1.d2bcde190746bp-787, 0.0, 0.0, 0.0, 0.0, 0x1.8124401e6bf94p-371,
     0x1.d6af550551f25p-8, 0.0, 0x1.432f764fbec7fp-555, 0.0, 0x1.f0197082e3221p-492,
     0x1.3ecfc23baaea8p-659, 0x1.26350be47cfb2p-171, 0x1.98c971e15b21ep-497,
     0x1.e1970f476a735p-1003, 0.0, 0.0, 0.0, 0x1.938ba509171a7p-526,
     0x1.fb87f38ee0dc7p-573, 0x1.a0cb44522b417p-761, 0x1.edd87e8e17032p-491, 0.0,
     0x1.f86718fb8c885p-739, 0.0, 0.0, 0.0, 0x1.4ce33528108e1p-718, 0.0, 0.0, 0.0,
     0.0, 0x1.25f557c308073p-509, 0x1.13314e914e391p-879, 0.0, 0x1.59dfc01f2a921p-318,
     0x1.bee0dafa88e5bp-138, 0.0, 0.0, 0.0, 0x1.934800d1a1209p-936, 0.0,
     0x1.1049e525e611dp-771, 0.0, 0.0, 0.0, 0x1.e5cf88ceffb79p-227, 0.0, 0.0,
     0x1.a133a34965ca2p-903, 0x1.7a936a3ddd90cp-468, 0x1.876ca9622ecb1p-4,
     0x1.c6386ce909344p-585, 0x1.c95e2d221148ap-701, 0x1.becf5d5d021c6p-705, 0.0, 0.0,
     0x1.f275ca7e41796p-805, 0.0, 0x1.410218782383p-837, 0.0
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
            tmp1 = Sleef_exp2d2_u35avx2128(tmp0);
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
    printf("Sleef_exp2d2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp2d2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
