/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd2_u35avx2128.c --function Sleef_acosd2_u35avx2128 \
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
     0x1.298d30c807b5dp-60, 0.0, 0x1.1456e5a3fbcc3p-932, 0x1.9999acc30744dp-321,
     0x1.2cf9578344832p-370, 0.0, 0.0, 0.0, 0x1.46ca7e755605p-198,
     0x1.165ede7188895p-938, 0x1.a7efdb608d082p-927, 0.0, 0x1.895ea8aac560ep-319, 0.0,
     0x1.fcf51e90be056p-725, 0.0, 0x1.f87e02ac0a3d3p-967, 0.0, 0.0,
     0x1.f2124fc0866a7p-763, 0.0, 0x1.5d5ffe179e3p-298, 0.0, 0.0,
     0x1.26960ff991b3fp-444, 0.0, 0.0, 0x1.9d18f56b30113p-52, 0.0,
     0x1.f4e8bcb410d1bp-763, 0x1.6d939e197a47p-476, 0.0, 0x1.7b5f446000adp-901,
     0x1.487b750e943bdp-544, 0.0, 0x1.d56ad8b62e637p-371, 0.0, 0.0, 0.0,
     0x1.e7963b8bad1f3p-921, 0.0, 0x1.4183d61ba901fp-666, 0.0, 0.0,
     0x1.a693217eabc46p-146, 0x1.15b1ec22ef69dp-880, 0.0, 0x1.7260fdae338fdp-740, 0.0,
     0x1.197e18a376651p-83, 0x1.46a35a5c30f8fp-762, 0.0, 0x1.f973711751bbcp-638, 0.0,
     0.0, 0.0, 0.0, 0x1.b5a70769102fcp-298, 0.0, 0x1.d9dfea3dc9a8cp-904,
     0x1.e6604e5baeda2p-775, 0x1.c43e9ac9772b2p-368, 0x1.44c212f564cc8p-815, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.77cf442e4f064p-842, 0x1.98c90141e4ba8p-672,
     0x1.7572e462063cbp-198, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.abc2a6f61cf49p-273, 0.0,
     0.0, 0.0, 0x1.b6d116b0a414ap-230, 0x1.3afa2309026a6p-647, 0.0,
     0x1.3fa58d9d370ccp-645, 0.0, 0.0, 0.0, 0x1.ca5f81a9d9c99p-966,
     0x1.ccf7f65b94971p-448, 0x1.6146d2cb3d2dfp-587, 0.0, 0x1.0b9e39e61461ap-216,
     0x1.00ce6aada04b3p-279, 0x1.2e06add44f551p-346, 0x1.894db3fa425e6p-34,
     0x1.a47f3068b435bp-62, 0.0, 0x1.68a7399ee6928p-246, 0x1.7a8087cd867f4p-800,
     0x1.82c531140e667p-866, 0x1.764fd8055ae84p-446, 0.0, 0.0, 0x1.28555b7c18816p-868,
     0.0, 0.0, 0.0, 0x1.11b52452186d7p-485, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8359d3547befp-661, 0x1.31ac3f7d0887bp-762, 0x1.6d57278ad7182p-896, 0.0,
     0x1.88c3339f06c35p-162, 0.0, 0.0, 0x1.8829e3cfd99b4p-121, 0x1.c98cfe3d9ec54p-695,
     0x1.36912f5dd3616p-863, 0.0, 0x1.91b0f402b7733p-895, 0.0, 0x1.8ceeaf14f38e9p-122,
     0.0, 0.0, 0x1.c3e87fb4722e5p-390, 0x1.d2debbd456a3cp-342, 0.0, 0.0,
     0x1.cef6204712337p-696, 0x1.3775f37321919p-960, 0.0, 0x1.ac956ac52a29dp-463, 0.0,
     0x1.c7bb056feb0dcp-877, 0.0, 0.0, 0x1.f1292a6032594p-881, 0.0, 0.0, 0.0,
     0x1.9e61561c6311dp-593, 0x1.b61edc46985cep-847, 0x1.43775ff5b2a7ap-580, 0.0,
     0x1.02be87de5d637p-916, 0x1.93e234ecc89b6p-417, 0.0, 0x1.31dda666fb7c3p-693, 0.0,
     0x1.59fc3c36aa4b6p-339, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ef6c01f5957cp-881, 0.0, 0x1.56f1b6f34560fp-496, 0.0, 0x1.74d1326104fc8p-148,
     0x1.cceb4cf1e6017p-289, 0.0, 0.0, 0x1.5ddc5e35ad349p-910, 0.0, 0.0, 0.0, 0.0,
     0x1.7313677581b31p-114, 0x1.2a98b8defc7b8p-58, 0x1.f30323904e043p-749, 0.0, 0.0,
     0.0, 0x1.76d7674b7a46fp-363, 0.0, 0x1.5b29d584f70f2p-672, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.122a46cdc1f81p-402, 0x1.6e9896f362b48p-583, 0.0, 0.0, 0.0,
     0x1.e60db999461fp-66, 0.0, 0.0, 0.0, 0.0, 0x1.c3673bd6b9149p-210, 0.0,
     0x1.a8e458ee70caap-413, 0x1.547db88566233p-512, 0.0, 0.0, 0x1.4061539e5269cp-469,
     0x1.a09db9932f3a6p-452, 0.0, 0x1.7caab87cd631p-756, 0x1.02454138a9da1p-417, 0.0,
     0x1.00d8a15e2f68fp-895, 0x1.bc5fa7d2b7a6cp-1015, 0.0, 0x1.7ad45cf9da584p-639,
     0.0, 0x1.d08794ac63a2ep-103, 0x1.45700611fe594p-507, 0.0, 0.0, 0.0, 0.0,
     0x1.d274a379b8065p-561, 0.0, 0x1.df1208c5787a9p-475, 0.0, 0.0, 0.0, 0.0,
     0x1.2f8963992bf45p-453, 0.0, 0.0, 0.0, 0.0, 0x1.2195af0d86a8fp-274,
     0x1.26c9988511c15p-563, 0x1.781b1f681e8dbp-931, 0x1.379e871139741p-307, 0.0,
     0x1.e092465c59185p-353, 0x1.0ab02e2d2962bp-762, 0x1.7bd0fc9bec174p-92,
     0x1.ee244d84d481dp-259, 0x1.7e46b2b6dd355p-425, 0x1.504a9c2775fc7p-973, 0.0, 0.0,
     0.0, 0x1.8e44c7c882f37p-623, 0x1.d3e72323d1cc4p-265, 0.0, 0x1.e32cb14cbebaep-104,
     0.0, 0x1.192e55f17bb96p-840, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5064251c7b2a9p-483,
     0.0, 0.0, 0.0, 0x1.039f23caeefe2p-936, 0x1.2e3ca9aa65f4cp-351,
     0x1.fc1a0de4f9e9ep-941, 0.0, 0.0, 0.0, 0.0, 0x1.b42c9dedd4f82p-346,
     0x1.c96752a2c811dp-353, 0x1.e57a260703601p-466, 0.0, 0.0, 0x1.5d8ee6f68c089p-391,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.554d780085d73p-488, 0.0,
     0x1.fb06c4b462dfep-523, 0x1.ba5e8f97e09a6p-840, 0x1.ad56392121758p-414, 0.0,
     0x1.9cb2bc9b46ccap-903, 0.0, 0x1.1faee73b79aa8p-8, 0x1.627237e55f5dep-688,
     0x1.5a853c6f6f72fp-24, 0x1.79c4f516637cap-247, 0x1.09d891a3084c8p-278,
     0x1.c7f95f9033ce3p-806, 0x1.ab7afb4c2561ap-164, 0x1.cd8cb01c58cf4p-255, 0.0, 0.0,
     0.0, 0x1.99e2252b0256ap-40, 0.0, 0x1.d96041e498ecfp-242, 0x1.394b89ceed001p-355,
     0x1.7b46ee0255427p-107, 0x1.a1d21d22f8301p-792, 0.0, 0x1.d60fa2c309e1ep-983, 0.0,
     0.0, 0.0, 0x1.178f2e13f9ep-75, 0x1.10f6c1fab8b06p-353, 0x1.5ceb8f54d85a5p-763,
     0x1.021153bca019cp-472, 0x1.b9115af524f15p-378, 0.0, 0x1.584a4291d5a78p-997, 0.0,
     0.0, 0x1.07a121a5ec195p-305, 0x1.1616caa394879p-17, 0x1.e6c3ca58cbdf2p-142, 0.0,
     0x1.a460963ebd678p-581, 0.0, 0.0, 0.0, 0x1.8efd78311fdadp-711,
     0x1.1edcbccf4e7b2p-360, 0x1.1cf4bfe3502a6p-294, 0.0, 0.0, 0.0, 0.0,
     0x1.8c6ca6552f532p-121, 0x1.28bd23c0d2437p-308, 0x1.74437a1e9f735p-992,
     0x1.6973a6235557bp-54, 0.0, 0.0, 0.0, 0.0, 0x1.a54d8de034332p-600,
     0x1.473dc83c5b3a9p-990, 0x1.1e6f9a8b1fc8ap-478, 0.0, 0x1.bfa6f614d6ccfp-448,
     0x1.6ffa674f7b77p-352, 0x1.3f30eaa4b75bp-256, 0.0, 0.0, 0.0, 0.0,
     0x1.e0146e7b23f82p-754, 0x1.c989fc5f96647p-1009, 0x1.708457a407776p-160,
     0x1.cb5aae8309eeep-104, 0x1.c13f8a6e149c9p-940, 0x1.c543d65cfea0bp-818, 0.0,
     0x1.03e24805c3d9ap-266, 0.0, 0.0, 0x1.26a4cb26b5d2p-79, 0.0, 0.0,
     0x1.bc001afc71a1dp-873, 0x1.98295c01a48ap-767, 0.0, 0.0, 0x1.2ec882bdf13fcp-42,
     0.0, 0.0, 0x1.515f5d500d821p-697, 0.0, 0x1.f666054450ff4p-206,
     0x1.6aba33251b771p-751, 0.0, 0.0, 0x1.059d1f3fed2ddp-253, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f2830f448e74ap-769, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c3fd0af1fbe9bp-463, 0x1.e1b4722008f6ep-436, 0.0, 0x1.ea221905248e6p-948, 0.0,
     0.0, 0x1.597f0f5f1e84cp-356, 0.0, 0x1.c7410965e2a58p-636, 0x1.3d274bd079f64p-775,
     0.0, 0.0, 0x1.5d3df9b28b792p-343, 0.0, 0.0, 0x1.1ded0b53c9cb7p-227, 0.0, 0.0,
     0.0, 0.0, 0x1.65ebe9bb8e3a8p-744, 0.0, 0.0, 0x1.8f0d7e092cfa3p-803,
     0x1.53f889ab07061p-433, 0.0, 0x1.9de48cb0fae2p-950, 0x1.36e324a19f50dp-549, 0.0,
     0.0, 0.0, 0.0, 0x1.d6637be82057bp-276, 0.0, 0.0, 0x1.f19a2e5e1cdb9p-1017,
     0x1.091d7ddbb2a09p-114, 0.0, 0x1.46a1e365554c1p-799, 0.0, 0x1.36a413b677f57p-525,
     0.0, 0.0, 0.0, 0x1.fd724fc037e02p-343, 0.0, 0x1.d96e72578cf93p-271,
     0x1.fc7236e4eef0bp-92, 0x1.8e6d9b0c5ee33p-9, 0x1.c3ef692510ac7p-154, 0.0,
     0x1.524d5c67bd7e8p-1015, 0x1.5481d22629c25p-903, 0x1.ba7bdf6f79066p-718,
     0x1.b6e9ffe53540bp-30, 0.0, 0.0, 0x1.82c942e41e493p-362, 0x1.ba256fa8cebd2p-534,
     0x1.e83bb6db30723p-18, 0x1.5e6c364ca11c3p-873, 0x1.e83f5b8c6ac6p-79, 0.0,
     0x1.51b02a0d5d20cp-40, 0x1.25962a3ed6dc4p-226, 0.0, 0.0, 0x1.0600f4c8945f1p-688,
     0x1.056f8635ee06fp-310, 0x1.70efbaca18389p-268, 0.0, 0x1.1fc8301c55f78p-743, 0.0,
     0.0, 0x1.9a0699ea64affp-907, 0x1.0e17412d1f5ddp-726, 0x1.fda2057d60be8p-113, 0.0,
     0x1.eb168bd299a83p-341, 0.0, 0x1.422121eef600dp-690, 0.0, 0.0, 0.0,
     0x1.043ee7b8312ddp-623, 0.0, 0.0, 0x1.7db09dca76c5cp-795, 0.0, 0.0,
     0x1.9367d5a9af6adp-386, 0.0, 0x1.15c3327bc489fp-263, 0x1.21a23d64a93efp-617, 0.0,
     0x1.589c145577972p-32, 0x1.965bf4b823c81p-213, 0x1.60fce5dfbaf36p-381, 0.0, 0.0,
     0x1.dd9a682f148dp-617, 0x1.ce167fc03555ap-515, 0x1.5ecb1dce0b093p-292,
     0x1.bfa99cc00b7edp-820, 0x1.5008081abf2d2p-1015, 0x1.d2bcd62d9d6d2p-1005,
     0x1.ff8738df4a032p-675, 0.0, 0x1.4a2e66ca25cacp-948, 0x1.a327dad1bf27ap-997,
     0x1.064988bfe292dp-793, 0.0, 0x1.f3d546ee9387fp-680, 0.0, 0x1.c6125eca9581ap-571,
     0.0, 0x1.ef458593e7484p-722, 0.0, 0x1.d21762e6c3c7fp-955, 0x1.5d13b3cf13cccp-737,
     0.0, 0x1.56c2ce94327fp-280, 0.0, 0.0, 0x1.1bfd8746cfa23p-654,
     0x1.151f17ca525abp-972, 0x1.0e3803b83a0f9p-407, 0.0, 0x1.be86b2470dfb1p-362,
     0x1.4e8340a9e013ap-728, 0x1.219ed59580f31p-455, 0.0, 0x1.e8bc2681ed83ap-26, 0.0,
     0.0, 0x1.211d430d29904p-162, 0x1.136762de688adp-218, 0x1.e8abbb7824f7ep-926,
     0x1.f9205da42e5d3p-383, 0.0, 0x1.75e6406fcaffp-749, 0x1.658ce91625c56p-402, 0.0,
     0x1.acbe3566da2c7p-380, 0.0, 0.0, 0x1.78f54c5218cfp-891, 0x1.855317bd1c0cap-715,
     0x1.75121c11998c1p-219, 0.0, 0x1p0, 0.0, 0.0, 0x1.4d402f847a0ccp-707, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.872bcc6b0d502p-487, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8aba3a71c291p-278, 0x1.4a51d0153acd7p-92, 0x1.59b4dca4a520dp-431,
     0x1.e55e48506b267p-801, 0.0, 0x1.f859479d968d2p-526, 0.0, 0.0,
     0x1.e4604e69959d7p-500, 0x1.13d5d023a2624p-712, 0.0, 0x1.0c7efd13c6c6cp-711, 0.0,
     0x1.1b7dc852188c6p-222, 0.0, 0.0, 0x1.3975b5e6c8c2ap-923, 0.0, 0.0,
     0x1.8e14f5095fda9p-234, 0.0, 0x1.00708041da73p-703, 0x1.ea34c1bc00a2cp-817,
     0x1.c69978ae032b3p-311, 0x1.6b51984a7a9cfp-709, 0x1.827d103450495p-134, 0.0, 0.0,
     0.0, 0x1.6f033195fc834p-924, 0.0, 0.0, 0x1.086b009557a73p-809,
     0x1.cff55acdca6dbp-642, 0x1.5333682cc6d35p-612, 0.0, 0x1.2e88c3e35f7ddp-651,
     0x1.e7acf06131118p-41, 0x1.ef0f45f093fccp-691, 0x1.7ccf1da6826a3p-877, 0.0,
     0x1.04e186179a3dp-491, 0.0, 0x1.e0ad10a6c0614p-842, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5ea0bed45c21p-702, 0x1.6750d8f03085cp-284, 0.0, 0.0, 0.0,
     0x1.c084b6b78afb3p-342, 0.0, 0.0, 0x1.eccea98aabafdp-105, 0.0,
     0x1.db8faf348caa5p-52, 0x1.00a1681b8f317p-526, 0x1.f78650b079402p-678,
     0x1.4a34e9f124c73p-441, 0.0, 0x1.f688706cb019ap-542, 0.0, 0x1.89955b92448bap-992,
     0.0, 0.0, 0x1.3f456a3cf9cadp-788, 0.0, 0x1.a93dc31599f33p-852, 0.0,
     0x1.22efdc1d6a976p-522, 0.0, 0x1.53521604f46a6p-148, 0.0, 0x1.5753d27d2127p-527,
     0x1.d1b52689f81bap-26, 0.0, 0x1.5d4910d9a22bcp-8, 0.0, 0x1.4eceafc70a2c8p-610,
     0.0, 0.0, 0x1.2ecd9ba94a7e3p-449, 0.0, 0.0, 0.0, 0x1.ee81269925567p-241,
     0x1.288db5157fb3dp-581, 0x1.896a31cc460cfp-496, 0x1.1e5181fd06b5p-905, 0.0, 0.0,
     0.0, 0x1.f2667647ba7dp-821, 0.0, 0x1.489e93fc0fe08p-605, 0x1.90d10c2028b58p-770,
     0x1.9b8a46d4bb781p-56, 0.0, 0x1.43c5b9c17ee9ep-116, 0.0, 0x1.4fda97f2f4a99p-369,
     0.0, 0.0, 0.0, 0x1.454c4b37978e3p-424, 0x1.d6234cdfb3b9p-168,
     0x1.52d7bcab05f11p-595, 0.0, 0x1.4a21ca92bbeabp-512, 0x1.68f43e9fb5dcbp-437, 0.0,
     0.0, 0x1.f14ae17b1d36cp-83, 0x1.c4944f7cc0ep-55, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79ab22eaa464p-751, 0x1.66e8095be7c8dp-254, 0.0, 0x1.a2332dff41858p-554, 0.0,
     0.0, 0x1.e90ad8d212d35p-551, 0.0, 0x1.b06c40a3c567dp-622, 0x1.3988e44002536p-359,
     0.0, 0.0, 0x1.4c69ee9bfb587p-718, 0.0, 0x1.e9ef28e440de8p-762,
     0x1.ed22bd977b00bp-1009, 0x1.75171c3fb65cp-815, 0x1.3f8aa645451d1p-430,
     0x1.daf0319be65d3p-38, 0.0, 0x1.27ec6a165549dp-335, 0.0, 0.0,
     0x1.eef49a2160d7cp-45, 0x1.64ffb7a845c91p-886, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd16c63b2663p-426, 0x1.03773f45d4d3p-467, 0.0, 0x1.b15d9ba72d102p-502, 0.0,
     0.0, 0.0, 0x1.2c104732e99c9p-825, 0x1.6a2b99449f472p-213, 0x1.9c5343cab9d8p-137,
     0x1.782d8aca10715p-696, 0.0, 0.0, 0.0, 0x1.0bab3b512c147p-948,
     0x1.6af42fd72370ep-310, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9169532b9078p-121, 0x1.5b14e75d462bdp-463, 0x1.8846987fb876cp-1011,
     0x1.bd960d61b5eb6p-255, 0.0, 0x1.a76f1bbd674cfp-853, 0.0, 0.0,
     0x1.e8685e7ec67dap-460, 0.0, 0x1.b39d0a556ae47p-646, 0.0, 0x1.04cb8663e31b3p-899,
     0.0, 0.0, 0x1.4c29bcbea2414p-569, 0x1.8263456f55d1cp-525, 0x1.0ad57cc367b6ap-155,
     0.0, 0x1.c1d21b5e34211p-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7752e9812ac35p-664, 0x1.7dd8a8db904aap-808, 0x1.c8dbf303766e1p-35, 0.0,
     0x1.1c1e83b32eda6p-991, 0x1.8e9235fae4665p-798, 0.0, 0.0, 0x1.c7ace583f5743p-520,
     0.0, 0x1.c7bf928548ed6p-224, 0x1.88a59803e9e3ap-252, 0x1.2ddbac4008658p-970, 0.0,
     0x1.0f059da168c8bp-530, 0x1.029537d76c66fp-955, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.55e03d5d00144p-339, 0x1.c93d8921c8d19p-577, 0.0, 0.0, 0x1.387b015bc7b3p-522,
     0.0, 0x1.cf89a5b5021bbp-681, 0x1.3022c2c23ef9bp-184, 0x1.ed031710a07c2p-439,
     0x1.fa9c89af3c864p-576, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d3074bac76abp-545,
     0x1.b0ad6546ac9c3p-491, 0.0, 0x1.d00b1b082553ap-789, 0x1.79c79b457ff9bp-50, 0.0,
     0.0, 0x1.a6a3a9fcbad17p-921, 0.0, 0x1.828e312c1bffap-11, 0x1.2fca4a26ec6bap-48,
     0.0, 0x1.656f1a0c968fbp-363, 0.0, 0x1.1a1193370b379p-663, 0.0, 0.0, 0.0,
     0x1.e053d51f9fe73p-617, 0x1.a4a3ca6801d6p-294, 0x1.afc9e19826e7dp-497,
     0x1.9880565cf6eecp-987, 0.0, 0.0, 0x1.f8cf5a6d3f52dp-315, 0.0, 0.0,
     0x1.868b469bd0266p-287, 0x1.cd896b5835b66p-773, 0.0, 0.0, 0x1.85316b8bdf571p-84,
     0.0, 0.0, 0x1.e2f0475b1ce7dp-56, 0x1.1680414d63f47p-435, 0.0,
     0x1.4e72af547f44fp-570, 0x1.2b01c6ad543edp-431, 0.0, 0.0,
     0x1.ea11c01a731b7p-1009, 0x1.75b28e9b5fa42p-910, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e6fc27a07595p-371, 0.0, 0.0, 0x1.b13dfe3173b3fp-190, 0x1.a34cf1ff213dep-165,
     0.0, 0.0, 0x1.955f4a4a8c008p-351, 0x1.6509058775d67p-933, 0x1.6dfd638df4dcep-813,
     0.0, 0.0, 0x1.a45c85be9f76bp-218, 0x1.52f8826019ee1p-29, 0x1.098a231b5686cp-74,
     0x1.ff4154037b4cdp-820, 0x1.da8c83af5e019p-402, 0x1.41c0ab244513p-694,
     0x1.5387eb5386e15p-923, 0x1.5ccef344ef0d1p-812, 0.0, 0.0, 0x1.ee3ef2f9e217p-1005,
     0.0, 0x1.8c1ecb3a400b4p-485, 0.0, 0.0, 0x1.c553b203997b8p-405, 0.0,
     0x1.854b71eb44848p-521, 0x1.1b134a5de5537p-57, 0.0, 0x1.974a7a2335005p-156, 0.0,
     0.0, 0.0, 0x1.9208f32aea14dp-467, 0.0, 0.0, 0x1.88b8012a0bc8dp-322, 0.0, 0.0,
     0.0, 0.0, 0x1.f03fb516ef298p-59, 0x1.e46b59e72537bp-976, 0x1.481ec7e240818p-749,
     0.0, 0x1.0bb4e1a56c725p-142, 0x1.ec8cded2ddc9ap-285, 0.0, 0x1.04a1dc09afca2p-297,
     0x1.e2dc4e6f2e7c8p-980, 0x1.86227883e2cabp-767, 0x1.ddd81c8775633p-769, 0.0,
     0x1.cfc1ddb23983bp-335, 0x1.945c7893fe11ap-617, 0.0, 0.0, 0.0, 0.0,
     0x1.af8a241493825p-914, 0x1.4a34054132758p-422, 0.0, 0x1.ec65fcbb7ab9ep-928, 0.0,
     0.0, 0x1.d9c4a3f5b3ae5p-300, 0x1.fced4430cf20bp-154, 0x1.5834322854d2ep-145,
     0x1.b8ede5ec00827p-800, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.204aa3805259ap-389, 0.0, 0x1.3d7583d40a962p-469, 0.0, 0x1.f14169d73431dp-641,
     0.0, 0.0, 0x1.519d9536a67cbp-416, 0.0, 0x1.e506efad7f125p-620, 0.0, 0.0,
     0x1.4088602c4bf43p-933, 0.0, 0.0, 0x1.96994fe98e6e8p-500, 0x1.10b6b3c77ada1p-984,
     0x1.30aa1e613da88p-786, 0x1.c8cc98cc39ce3p-296, 0x1.fd8d39b278751p-362,
     0x1.e7a176d7a214fp-809, 0x1.521d8b3f62399p-330, 0x1.de823632287e3p-290, 0.0, 0.0,
     0.0, 0x1.b9ba2eb87e45fp-672, 0.0, 0x1.65de0c2f45016p-16, 0x1.045151c4faa6fp-586,
     0.0, 0x1.04c0ebc6efa9bp-645, 0.0, 0.0, 0.0, 0x1.6d8814c1a1623p-504,
     0x1.71cb1bc05fc34p-106, 0.0, 0x1.5482e4e911c0dp-537, 0.0, 0.0, 0.0,
     0x1.bd9a999e9f299p-507, 0x1.d2c41265569d2p-919, 0.0, 0.0, 0x1.023211b99d27fp-21,
     0.0, 0x1.b5e463a605c1p-979, 0x1.b1272ec92070dp-783, 0.0, 0x1.a682119b821c3p-831,
     0x1.934882e58258ap-465, 0x1.54024f9afab17p-752, 0x1.749a1da387288p-36, 0.0, 0.0,
     0.0, 0x1.c47e4e2a89e5p-136, 0x1.50f7b8988b4ecp-489, 0x1.4ecf50771b379p-826,
     0x1.050fccd5e8022p-957, 0.0, 0x1.456c79db96492p-758, 0x1.5bd57983e38a3p-960, 0.0,
     0.0, 0x1.ed59003b748b1p-383
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
            tmp1 = Sleef_acosd2_u35avx2128(tmp0);
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
    printf("Sleef_acosd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_acosd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
