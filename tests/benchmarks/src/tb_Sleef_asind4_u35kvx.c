/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind4_u35kvx.c --function Sleef_asind4_u35kvx \
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
     0x1.319ef356aa1eep-945, 0.0, 0x1.5b00c60e4946fp-616, 0.0, 0.0, 0.0, 0.0,
     0x1.8a7d3ac02c43p-84, 0.0, 0.0, 0x1.7f53cc9899b05p-760, 0.0,
     0x1.76575b5b97162p-859, 0x1.65daa9f8fb029p-1013, 0x1.c70b5134fff3cp-977, 0.0,
     0x1.e7026b28bf501p-324, 0.0, 0x1.f5617d24b87bdp-498, 0.0, 0.0,
     0x1.674a1580a970ap-322, 0.0, 0.0, 0x1.3b4365fffa695p-947, 0.0,
     0x1.e9347970cc921p-920, 0.0, 0.0, 0.0, 0.0, 0x1.400ba59b67705p-908, 0.0,
     0x1.a37dac34ef512p-248, 0x1.fa11c51ce3da9p-810, 0x1.7cedf33e8eaddp-572, 0.0, 0.0,
     0.0, 0x1.4cc5f676b7f75p-428, 0x1.ecd3a20c794afp-963, 0.0, 0x1.e5573ecb29a5fp-909,
     0x1.d0f8494f309cdp-630, 0.0, 0.0, 0x1.2f739ef85cf7ap-726, 0x1.db8e307351ebp-778,
     0.0, 0x1.a9d99f728d2cp-1009, 0x1.34e685015557ep-787, 0x1.f7495c92d838p-572, 0.0,
     0x1.29324fc9052bcp-435, 0.0, 0.0, 0.0, 0x1.fc6b9b5ec0706p-133,
     0x1.41f9a526e80bp-705, 0x1.f83e81603b62ap-980, 0.0, 0.0, 0x1.ac2a326dd2323p-621,
     0x1.e3dbddd9b52f7p-419, 0x1.eca27a84467fbp-873, 0.0, 0.0, 0.0,
     0x1.6538c30c49cbdp-310, 0x1.a437d73a053c8p-483, 0x1.f1aacc19ed82bp-171,
     0x1.5e2bf473f106bp-27, 0.0, 0.0, 0x1.8e520826e3ee2p-278, 0x1.f7a1afda3b331p-84,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f9c83a4cd4e8p-628, 0x1.36ce35e2630d1p-407,
     0.0, 0x1.3dd17def29f51p-111, 0x1.c1803a563ca8cp-716, 0x1.8baa775bb740fp-983,
     0x1.a79d554d3dc89p-681, 0x1.25d55ff29c992p-372, 0x1.b7478fb68d7fcp-72,
     0x1.285847030ed59p-432, 0.0, 0x1.bf45c6161ded7p-789, 0.0, 0.0,
     0x1.e0a98c4f1060ap-964, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b80ec19856bfap-766, 0.0,
     0.0, 0.0, 0x1.5968666213e5ep-767, 0x1.ab32ce745a923p-204, 0.0, 0.0,
     0x1.b607159d53f19p-221, 0.0, 0.0, 0.0, 0x1.a8bc77eda3525p-527,
     0x1.c702606ac1085p-744, 0.0, 0x1.e87980ec66fffp-945, 0.0, 0.0, 0.0,
     0x1.8d6d512d81cb5p-782, 0.0, 0x1.8fd79fe638cd1p-455, 0.0, 0x1.5441ae87bdfeep-348,
     0x1.a8227391e689p-101, 0.0, 0.0, 0x1.238df08ed9093p-237, 0x1.154fca8d7742ap-81,
     0.0, 0x1.cc4615ac332eep-91, 0.0, 0x1.5539a00bfdf6p-815, 0.0, 0.0,
     0x1.68af03ff5e69bp-180, 0x1.f269bed430b55p-720, 0.0, 0x1.ff31456fa091ap-171, 0.0,
     0.0, 0.0, 0.0, 0x1.0b9bdb66513edp-543, 0.0, 0.0, 0.0, 0x1.8fa7754d40f99p-103,
     0x1.6004cd3f07773p-645, 0x1.c0d640d35af63p-679, 0.0, 0.0, 0x1.bef172c14465fp-768,
     0x1.bd095736942ccp-536, 0x1.c84954fe4ac2ep-344, 0x1.e690e88ad66b6p-300,
     0x1.46c7bf748d08cp-572, 0.0, 0x1.4ed8177977c77p-500, 0x1.2a166c774eb17p-214,
     0x1.99a5cb7af20c6p-279, 0x1.2bbf608f30ac8p-979, 0.0, 0.0, 0x1.632f3bbb5e5d7p-900,
     0.0, 0x1.fa43b291bb996p-553, 0x1.fa0cd1ce6c893p-733, 0x1.e9c4b76c47b9p-286, 0.0,
     0.0, 0x1.6686ea6f96795p-286, 0x1.f77272a6d5761p-786, 0.0, 0x1.aa4710eb3175bp-42,
     0.0, 0.0, 0x1.6c57bb8e8672bp-269, 0x1.537187ef8ede6p-538, 0.0,
     0x1.a2b59e2b73953p-73, 0x1.b2250114aec57p-189, 0x1.f510873d3fb8bp-644,
     0x1.2bd5a55f1afe8p-755, 0x1.d775d2c0857f6p-87, 0x1.5419f93e408a6p-802,
     0x1.84d3acf7a12d7p-230, 0x1.6a4f16b780403p-746, 0x1.0e8af9f75a91ep-323, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ea4c307dd9c1dp-918, 0.0, 0.0, 0.0, 0.0,
     0x1.23f1a3eef99a1p-706, 0.0, 0x1.1a7c1d7692f7bp-949, 0x1.832a2edcb78e2p-539,
     0x1.6889b3cf9bdd6p-1020, 0x1.96b47673ce2a4p-474, 0.0, 0.0, 0.0,
     0x1.311e58996f0f8p-360, 0x1.4af08ae399a53p-827, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.80969a7927a2ep-766, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f45c350b443p-803,
     0x1.0e44128fd1512p-476, 0.0, 0x1.39591d5caaf68p-785, 0x1.e63cab69b092p-919,
     0x1.d0e32307afa1dp-920, 0x1.1feb3ba770d08p-374, 0x1.43e4ba92b15dap-623, 0.0,
     0x1.12fdc0ea6a27ap-283, 0.0, 0.0, 0.0, 0.0, 0x1.3c783fe0fc564p-886,
     0x1.a032e3033aa4fp-784, 0.0, 0.0, 0x1.4c6c488c9b2dap-354, 0x1.f5ebcd79d631dp-617,
     0.0, 0x1.b25b001d64ff2p-369, 0.0, 0.0, 0x1.b125d429c58bcp-336,
     0x1.0b43f578ea1f8p-129, 0.0, 0.0, 0x1.362e30f8b0e72p-169, 0.0, 0.0, 0.0, 0.0,
     0x1.319f8a284dc1fp-404, 0x1.6831905135c9ap-957, 0x1.8153940ec704p-27,
     0x1.8738c222aec12p-348, 0.0, 0.0, 0.0, 0x1.7c1532ead84bep-847, 0.0, 0.0,
     0x1.91fba00707a3ap-748, 0x1.c618f4c783876p-399, 0.0, 0x1.b3df51c75932ap-760,
     0x1.51504092a03efp-13, 0x1.eed7ce9034c22p-690, 0.0, 0.0, 0x1.8a0f38138fc1p-896,
     0x1.aa24242426659p-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff124f90a5493p-1013,
     0x1.756334c22b525p-808, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c5da16be65bf1p-61, 0.0,
     0x1.0ee8af6cfb41ap-713, 0.0, 0x1.e9e9c8a1d48ep-121, 0x1.74d357ba9213cp-134, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aaf4c7b93f26dp-741, 0x1.f96b2ae713fb2p-229,
     0x1.ee7aa704eb273p-47, 0.0, 0x1.53125ecd4de7cp-871, 0.0, 0.0,
     0x1.559363e1bcabep-570, 0.0, 0x1.b5ff0be059b53p-374, 0x1.b108e812eb7e9p-236, 0.0,
     0.0, 0.0, 0x1.4cc9e5777cfdp-560, 0.0, 0x1.5d5fbf5d84de4p-969,
     0x1.f1be61933820dp-663, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.367b25dac557ap-756,
     0x1.ee9ccc901661ap-893, 0x1.159fb1b201702p-810, 0.0, 0x1.18b54df9911e1p-236, 0.0,
     0x1.ba7c7936b2d51p-928, 0x1.492cf96346261p-419, 0x1.0066dab1bad56p-679,
     0x1.cab254376688fp-875, 0.0, 0.0, 0.0, 0.0, 0x1.8216abd9acf44p-939, 0.0,
     0x1.bd9012011d0c7p-910, 0.0, 0x1.d73f3d45e3a9dp-613, 0x1.af8d4ba87b696p-557, 0.0,
     0x1.93838eff0caa4p-394, 0.0, 0x1.88c7c0613de39p-969, 0x1.9368c32d760ecp-29, 0.0,
     0x1.841f34673a2b7p-472, 0.0, 0.0, 0x1.0c9f8bb4eec8ep-645, 0.0,
     0x1.8b5a068790171p-984, 0.0, 0.0, 0.0, 0x1.11e05e1a36c6ep-923,
     0x1.d6838cce5b974p-565, 0x1.eefabcbd65128p-68, 0x1.dcee6e185bdd7p-570,
     0x1.72c656a085eap-73, 0.0, 0.0, 0x1.647dafb8bfabdp-608, 0.0, 0.0,
     0x1.0b5c92845d7c1p-269, 0.0, 0x1.6f811703f9c4ap-498, 0x1.02bc0b96db803p-575,
     0x1.7c1734b5fe0efp-5, 0x1.b7ee5bccb948cp-58, 0x1.264a18159a47p-674, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3d373be26cb5p-665, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8eec20e534f83p-692, 0x1.3ea0680236699p-297, 0.0, 0x1.9aeb9d978c86bp-867, 0.0,
     0.0, 0x1.eee8a6d00d0a3p-938, 0x1.b5f704e57201dp-586, 0.0, 0.0,
     0x1.1c105bae6cf27p-279, 0.0, 0x1.8036ae6df143bp-548, 0x1.546a82587d36ap-87,
     0x1.a9caa1d203c23p-928, 0x1.78d69b89b0903p-928, 0x1.1a6fb69d934eep-221, 0.0, 0.0,
     0x1.3ba354ef8b0cap-588, 0x1.c84466976cc38p-1015, 0x1.a404fd61d2945p-996,
     0x1.2f2cfeb0e23fdp-831, 0x1.5603f4234e18fp-252, 0x1.2ee7a52083137p-1020,
     0x1.e532e5ac206f1p-498, 0.0, 0x1.af462ac8120c2p-379, 0x1.49401dffc3976p-808, 0.0,
     0x1.6e2a3ba56296cp-760, 0x1.eb9a841464c19p-558, 0x1.d6fed4a2e2964p-827, 0.0, 0.0,
     0.0, 0x1.5e350d5ed6aap-856, 0x1.130ecc1cfb2b7p-784, 0x1.b9b41561d8e47p-42,
     0x1.054309ddce1dap-752, 0.0, 0x1.0becf5a4c1491p-281, 0.0, 0.0,
     0x1.30cb68ba04012p-490, 0x1.a8ad30c8412d3p-210, 0x1.2d55a376ec66ap-672, 0.0, 0.0,
     0x1.b228ae89acbcfp-961, 0x1.2c6190b7abd75p-1000, 0.0, 0.0, 0.0,
     0x1.33c20e0cb4f89p-884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.615a34bbc065p-437, 0x1.b2d9fa2e526e8p-672, 0.0, 0.0, 0.0,
     0x1.c232a0800191bp-651, 0x1.cc7312f561d8dp-595, 0.0, 0.0, 0x1.2835d5cb28f2ep-397,
     0x1.d87bbec09f0eap-409, 0x1.0f4f643521a72p-398, 0x1.b506b3caa6c27p-727, 0.0,
     0x1.6dd56de2dd836p-388, 0.0, 0x1.0d2451eca53e3p-262, 0x1.9cc50253fd257p-741,
     0x1.907c031f48376p-282, 0x1.87caeafa62199p-998, 0x1.538975cda73bp-959,
     0x1.014ec81ece30ap-881, 0x1.65ceb4bf9dc4cp-273, 0x1.eb0c1e56ad8ep-321, 0.0,
     0x1.89ab519c030f1p-177, 0x1.79d3bfb0d59a1p-891, 0.0, 0.0, 0.0,
     0x1.785ddd8f6fbdap-292, 0.0, 0x1.b353bc345d5bep-731, 0x1.f72b9f3ee35dap-615,
     0x1.7310547f87bedp-684, 0x1p0, 0x1.154315cc4d115p-353, 0x1.1c0344e041d8ep-688,
     0x1.8daa31c3bdc2p-101, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61c2e26e765afp-527,
     0x1.d3421a20c4e54p-575, 0x1.1a175d0891849p-727, 0x1.4e7926bd18e8bp-415, 0.0, 0.0,
     0x1.201df1af232edp-958, 0.0, 0.0, 0x1.4872f193a2af3p-955, 0.0,
     0x1.28a04cea7ecd1p-625, 0x1.1e2b9b6e5b3e4p-864, 0.0, 0x1.ed984f80fa82fp-954, 0.0,
     0x1.ca29f9e4a0e77p-950, 0.0, 0.0, 0.0, 0x1.b2849456f359dp-384, 0.0,
     0x1.6811bc2b44699p-405, 0x1.412222b27a666p-138, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5e5d0cb1a615p-747, 0x1.a7e62d0a3c04ep-582, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6ca16b2db5f0bp-68, 0x1.0224834b2227bp-891, 0x1.b247c5800aaadp-358,
     0x1.4e93327ccc918p-788, 0x1.336959cd55af7p-633, 0x1.05dccffc90efcp-668, 0.0,
     0x1.45a00b3734252p-117, 0.0, 0x1.52f842a0a5dabp-600, 0.0, 0.0, 0.0,
     0x1.a3665ff0ecf8bp-361, 0x1.1e7d593445198p-422, 0x1.adc830a725952p-704, 0.0,
     0x1.2e23e66b33d4ap-11, 0x1.847fdcdedc119p-430, 0x1.9bc4717687acbp-417, 0.0, 0.0,
     0x1.66ab0052e0194p-907, 0x1.5528ab86f6ce2p-957, 0.0, 0x1.459ee9d339901p-700,
     0x1.8bddc7112c7d3p-926, 0.0, 0x1.d746c20e17942p-50, 0x1.b2f69c9b95b4bp-132, 0.0,
     0x1.1dae90526566p-747, 0.0, 0.0, 0x1.035d3ac39f429p-377, 0x1.9913c2f41e10cp-715,
     0.0, 0.0, 0.0, 0x1.7c6d700e7874ap-964, 0x1.7cba0cd181515p-266, 0.0,
     0x1.9eb7cd632f21p-648, 0x1.df66cda6c7e2p-245, 0.0, 0x1.59add6bfb7b9cp-730,
     0x1.5e3388bc640a1p-136, 0.0, 0x1.6003cce9baf5dp-443, 0x1.e4b4aca6b2119p-381, 0.0,
     0.0, 0x1.e3115ddd7ad3p-749, 0x1.564131c74e833p-560, 0.0, 0x1.ddebb9bef6bf6p-468,
     0.0, 0.0, 0.0, 0x1.080dff0589547p-69, 0.0, 0x1.3fcad0eb4b727p-254,
     0x1.e4903b13f8fc9p-384, 0.0, 0x1.5f351afecf881p-294, 0.0, 0x1.292eaedcfe594p-149,
     0.0, 0.0, 0x1.f95d5ad45ab5ep-574, 0x1.666484bb6cc65p-688, 0x1.31d06b2540f94p-617,
     0.0, 0x1.a97b5d2f7c2d9p-205, 0x1.4767e584cf11ap-214, 0x1.9759ce8994651p-622,
     0x1.4d5a61cb8eb8dp-459, 0.0, 0.0, 0.0, 0.0, 0x1.178b272f77a16p-392, 0.0, 0.0,
     0.0, 0.0, 0x1.4fbb6e8b16f44p-253, 0.0, 0.0, 0.0, 0x1.487cfa889e169p-931, 0.0,
     0.0, 0x1.dfa171ddf7653p-247, 0x1.cd41e33c9f75ep-351, 0.0, 0x1.66659d6455ef7p-240,
     0x1.3f6e910e48bc4p-488, 0.0, 0x1.05faaa2991722p-508, 0.0, 0.0,
     0x1.e8da069fcfa82p-389, 0.0, 0.0, 0x1.b1ad778abeed8p-906, 0.0,
     0x1.0f42e8e29b5bep-101, 0.0, 0.0, 0x1.d48cb083286d8p-95, 0x1.854dfd31693aap-593,
     0x1.408e142e5d22ap-13, 0.0, 0.0, 0.0, 0x1.1ac64e1cb2bc8p-580, 0.0,
     0x1.7e0ac9e4872b6p-251, 0.0, 0x1.70521a506aaeap-670, 0x1.e91844511b935p-60,
     0x1.28fdce8e666a1p-276, 0.0, 0x1.83b0d4a63b641p-63, 0x1.72213b2363e9p-769,
     0x1.0cf2b0466effcp-783, 0.0, 0x1.824b1d7b16889p-69, 0x1.e6c4908b4b0c3p-274,
     0x1.fe6e391c484ccp-16, 0x1.e0524b4bef6dap-689, 0.0, 0x1.fed3ebb1a2c7fp-533,
     0x1.de675c70f2434p-720, 0x1.ed2b698e0f0f7p-229, 0.0, 0x1.fbed15e0fb94dp-796, 0.0,
     0x1.d5e40d8cfd0a2p-821, 0x1.94d946de59886p-667, 0.0, 0.0, 0.0,
     0x1.73db2dbac6f85p-557, 0x1.07c662d1c9548p-343, 0x1.10948821a9dabp-111,
     0x1.c5f46af7a8455p-412, 0x1.cc59245db8bap-317, 0x1.08bbbdf0d884bp-46, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.766cdb09a204bp-900, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59ea67a833468p-453, 0x1.eb90c402d5471p-890,
     0x1.7770a98392fc4p-616, 0.0, 0.0, 0x1.862076e80f8dfp-688, 0.0,
     0x1.270b40196173ap-148, 0.0, 0x1.bcba9cd57aedep-389, 0x1.8f025b7ae13fp-446, 0.0,
     0x1.aff1cc22ba5f3p-143, 0x1.2797d86b03b89p-2, 0.0, 0x1.17eb03f21f176p-543,
     0x1.7c59dba9c847cp-757, 0x1.a755cd308cacap-241, 0x1.04a08f5a3c86p-901, 0.0,
     0x1.a086458a7a8b1p-458, 0x1.bd809373f5866p-865, 0.0, 0x1.9ca99f567589cp-965,
     0x1.ad34832f38efbp-648, 0.0, 0x1.952b1c703ab7bp-355, 0.0, 0.0,
     0x1.c207248f9c399p-762, 0.0, 0x1.3b00a5022bdcdp-951, 0x1.bd692b832571dp-802,
     0x1.7e5f3fb8c957fp-130, 0x1.977577ed2591bp-485, 0.0, 0x1.3edfc8650144ep-617,
     0x1.17db4d1f42e0bp-1000, 0x1.e6320ea6e26c7p-424, 0x1.4049cb1d6a03cp-918, 0.0,
     0x1.f5fcec85f991ap-425, 0.0, 0.0, 0x1.99d4912e59c58p-85, 0x1.f609487199557p-1012,
     0x1.67d54644e0c24p-507, 0x1.44621ca030a68p-462, 0x1.1f498b959a09p-795, 0.0,
     0x1.18f4eb69a08c8p-607, 0.0, 0.0, 0x1.e3c340392dc56p-123, 0.0,
     0x1.808f7c9310534p-264, 0.0, 0.0, 0.0, 0x1.a6f8363f45007p-252, 0.0,
     0x1.b4894ec6317dcp-720, 0.0, 0x1.f83dcb3fb7a6cp-64, 0x1.26f9e778c912dp-703, 0.0,
     0x1.a4b56bcc346e9p-345, 0x1.2d9dac6ac838ap-343, 0.0, 0x1.e2a4a555bac2p-738, 0.0,
     0.0, 0x1.86ad2839e97f1p-493, 0.0, 0x1.b436459f892b1p-301, 0.0, 0.0, 0.0,
     0x1.d9bf21b8a8325p-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c4f43317a868p-708,
     0x1.a29e17f0ebac1p-696, 0x1.e25f720347d21p-670, 0.0, 0x1.c9b13ca73774dp-16, 0.0,
     0x1.fcfd862ad33aep-706, 0.0, 0.0, 0x1.34d39208e72ebp-539, 0.0, 0.0, 0.0,
     0x1.f5952ce638d78p-438, 0.0, 0x1.ddde921d1096bp-948, 0x1.656ad4ca35408p-766,
     0x1.5e4c078f7c6e6p-38, 0x1.e4171eefb6265p-406, 0x1.decacb9f43c75p-346, 0.0,
     0x1.98da31782a97ep-126, 0.0, 0x1.c7d2577575cb9p-141, 0.0, 0.0,
     0x1.27f65a200edadp-936, 0.0, 0x1.31a5a835f912ep-466, 0x1.147bd7bcfa63cp-116, 0.0,
     0x1.bd866bb09da58p-612, 0x1.921315d49a559p-394, 0.0, 0.0, 0x1.7029ded026d66p-361,
     0.0, 0.0, 0.0, 0x1.51f6cd5712c35p-742, 0.0, 0x1.e5a04de37cc1p-76,
     0x1.6ff25668a0ef6p-293, 0x1.1d74d30db6f66p-156, 0.0, 0x1.da0ee8f8e4f7ep-570,
     0x1.ea9c7c6e53a75p-799, 0.0, 0x1.42b05ee32e6a3p-281, 0.0, 0.0, 0.0,
     0x1.92c0735576ae3p-970, 0.0, 0x1.1646651726063p-541, 0.0, 0x1.caaaecbd2f037p-619,
     0x1.1cac9da0cfa71p-522, 0x1.891f0f3bda2c1p-662, 0.0, 0x1.6ece9fc60ba1ap-271, 0.0,
     0.0, 0.0, 0.0, 0x1.0453884123835p-438, 0x1.fe0529192797bp-600, 0.0, 0.0,
     0x1.700f672729f28p-618, 0x1.d30dfcdb0de11p-151, 0x1.ab0e832020344p-707,
     0x1.8af376bc2e8cep-966, 0.0, 0.0, 0.0, 0x1.ab1e9d007d37ap-393, 0.0, 0.0, 0.0,
     0x1.a2db72ac063f7p-718, 0x1.4eb7a47798453p-384, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.349b56ecaee93p-114, 0.0, 0x1.a350ff9c64739p-44, 0.0, 0x1.c58ad8e24c068p-973,
     0x1.2d7602b72f6fp-82, 0x1.19124ca80c4b4p-1006, 0.0, 0.0, 0.0,
     0x1.22894ad57e11ep-486, 0x1.6c69f805fe40cp-340, 0x1.5f4c9c8a90874p-890,
     0x1.e73270e3cfaf8p-225, 0x1.c193c26ec6274p-899, 0x1.cc33f44632e9ap-1002, 0.0,
     0x1.8d3702f964eap-942, 0x1.c218bb4fc4feap-902, 0x1.14e9e880608b3p-973, 0.0, 0.0,
     0.0, 0.0, 0x1.a510e8d0f37e2p-116, 0x1.0ffed342efe15p-445, 0x1.41fde1d70fad1p-854,
     0x1.5757cceddacfbp-976, 0x1.1fd23d18fbbc4p-645, 0x1.9437567a5706ep-629, 0.0, 0.0,
     0x1.0173055259dd4p-199, 0.0, 0.0, 0x1.4d1036fbc0524p-860, 0.0, 0.0,
     0x1.e5027feecb8b2p-963, 0.0, 0x1.b7ea232a0b0c3p-63, 0.0, 0x1.b2981d2fc5933p-177,
     0.0, 0x1.0cb31daf8a11cp-737, 0x1.a9563aac35535p-363, 0.0, 0.0,
     0x1.0cb3121f5a808p-424, 0x1.0355cd88a671p-367, 0x1.dd10d64fafed1p-482, 0.0,
     0x1.93e04c70ae4c1p-998, 0.0, 0.0, 0x1.7ef4956c4de36p-64, 0x1.424cc09577085p-539,
     0.0, 0.0, 0.0, 0x1.d2e334439190cp-473, 0x1.0a526b07a4886p-866,
     0x1.1e55725058f7bp-567, 0x1.8214e758a4e8bp-404, 0x1.06e6ea7bdd8c1p-8,
     0x1.b939c140676fap-730, 0x1.a276f0176a4e1p-561, 0.0, 0x1.d7e9ec188b25fp-451,
     0x1.4bf5a5ca223dep-708, 0.0, 0x1.88bf4bf42a143p-506, 0x1.b77d9282a52b8p-966, 0.0,
     0.0, 0.0, 0x1.ce24e2dfceccp-1014, 0x1.600d213dafbe9p-644, 0.0,
     0x1.b44ae8401b6a2p-55, 0.0, 0.0, 0x1.1e2139e57055ap-253, 0x1.0397835143adp-439,
     0.0, 0x1.3316d0360ab22p-491, 0x1.7b24af1392e5ap-807, 0.0, 0x1.e4b4413c01ea5p-899,
     0.0, 0x1.6b5e81138b5a2p-553, 0x1.65ac920ee6bebp-1002, 0.0,
     0x1.c54cd27188f79p-754, 0.0, 0x1.83858afa992f9p-884, 0.0, 0.0,
     0x1.f416e2f7af482p-256, 0x1.4f9b738caf309p-912, 0x1.4946f68f84d64p-835, 0.0,
     0x1.4c92fb2b6af38p-957, 0.0, 0x1.f86cddc01a86p-604, 0x1.5cd2f6b40df1cp-639,
     0x1.c0c4b4434cfd6p-79, 0x1.649f767fe4be8p-1017, 0.0, 0.0, 0.0,
     0x1.c516b860d1e73p-624, 0x1.f9ad8609fa93bp-166, 0.0, 0x1.6e5fe67a6df21p-920,
     0x1.e89c39ec7b0e9p-693, 0x1.86bea5a3f080ep-323, 0x1.209a5cb529ef3p-985, 0.0, 0.0,
     0.0, 0x1.ea93f011eefdbp-96, 0.0, 0x1.94dfbd822f73dp-527
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
            tmp1 = Sleef_asind4_u35kvx(tmp0);
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
    printf("Sleef_asind4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asind4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
