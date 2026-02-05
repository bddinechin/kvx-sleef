/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpid4_u05kvx.c --function Sleef_sinpid4_u05kvx \
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
     0x1.900d9c5653952p-974, 0.0, 0x1.59cd2b7b39e1p-869, 0x1.825b129e1a04p-768,
     0x1.354607611fa9p-591, 0.0, 0x1.504b218ad4fdfp-1009, 0.0, 0.0, 0.0, 0.0,
     0x1.d14f321f98cacp-1015, 0x1.c3ee108e13d42p-467, 0x1.d745f6347ec56p-484, 0.0,
     0.0, 0x1.c133b2ffee655p-351, 0.0, 0.0, 0x1.0e97086024716p-168, 0.0, 0.0, 0.0,
     0x1.d190d3111a231p-560, 0x1.079a0726ac5bdp-752, 0.0, 0x1.7502078cae7adp-19, 0.0,
     0x1.76e157a2ff99p-360, 0x1.63277fe57bfbbp-853, 0.0, 0x1.6c569fd753e3dp-686,
     0x1.c4530d03436fbp-441, 0x1.9313a54837289p-223, 0x1.cf2bd9743094dp-851,
     0x1.f2ac148c1932dp-365, 0x1.d75c5d9a5e19bp-511, 0.0, 0.0, 0.0, 0.0,
     0x1.bb88b0a0a05d3p-971, 0.0, 0.0, 0.0, 0x1.ade8091faaf9bp-817,
     0x1.2d52474c94a4ep-889, 0x1.10504e908e1c5p-916, 0.0, 0x1.d55bfc5154fd5p-564,
     0x1.4e2baac4bee77p-17, 0.0, 0.0, 0.0, 0x1.f9f39082abb21p-70,
     0x1.30d05ceb0d13ep-487, 0x1.2debcb7c1f9afp-955, 0x1.8ae382b78e586p-535, 0.0, 0.0,
     0x1.73b9f952ad418p-93, 0.0, 0x1.cb270caba0a3ap-499, 0x1.1917955fc1835p-396, 0.0,
     0.0, 0x1.b5cfab73e53ep-173, 0x1.0d4c3d0132562p-508, 0.0, 0.0,
     0x1.7f08d7dd90bc9p-681, 0.0, 0x1.82a6f56ca7761p-508, 0x1.af5215a511c8ap-351, 0.0,
     0.0, 0x1.2c38f78876ed8p-457, 0.0, 0x1.df5a09726abdep-337, 0.0, 0.0, 0.0,
     0x1.9325fb4e1b4b7p-781, 0.0, 0x1.4ab54e1e9e3ebp-352, 0x1.976d103537399p-873,
     0x1.1cd23ddb8426cp-493, 0.0, 0x1.a5a039ccf1faap-614, 0.0, 0x1.d386d3abf962fp-132,
     0x1.9d9346bfd4caep-657, 0.0, 0x1.920fd143232b3p-934, 0x1.66f1570c0801ap-540, 0.0,
     0.0, 0x1.6c3c3ba649f07p-56, 0x1.eecc1a9bd1538p-388, 0.0, 0x1.d3ae95d5a7ab4p-646,
     0x1.30abc44b424bcp-336, 0x1.81747c89ea493p-232, 0x1.5110bad1fe012p-958, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2ed7ea46870f5p-806, 0x1.9bd822d306cd3p-834, 0.0,
     0x1.2ba6c04e5a387p-625, 0.0, 0x1.d8315d732ce88p-183, 0x1.4f72ba674944fp-702, 0.0,
     0.0, 0.0, 0x1.953962ec35102p-24, 0.0, 0x1.96c9ce45f2196p-643,
     0x1.2e9cc24e091dp-991, 0x1.93717ba1c9219p-838, 0.0, 0.0, 0.0,
     0x1.2e0f58ef0e653p-443, 0x1.bfe0e4d431b9p-692, 0.0, 0.0, 0.0,
     0x1.471e82f0a9feap-458, 0x1.880003fcb4449p-438, 0x1.e05ad929eda65p-529,
     0x1.e75f7ef36efccp-737, 0.0, 0x1.8850b579895f3p-52, 0x1.f36c0736697eap-581,
     0x1.ae549a87ef7b6p-217, 0.0, 0x1.cb55659406185p-128, 0x1.ea94f2762e6dcp-624, 0.0,
     0x1.755c917a6d567p-92, 0.0, 0x1.0a8c47f6f16afp-689, 0x1.6c32cc9f001b6p-269, 0.0,
     0x1.12adea83162c3p-345, 0.0, 0.0, 0x1.b27c24d317b37p-1011,
     0x1.355c53ed21558p-918, 0x1.4119026a50ac1p-946, 0.0, 0.0, 0.0, 0.0,
     0x1.ce81768ae7066p-684, 0x1.c465abb827719p-907, 0.0, 0.0, 0x1.39db863d73bf9p-374,
     0.0, 0x1.86f8a8705e22dp-475, 0x1.671955791762dp-526, 0x1.4818e37ae416fp-309, 0.0,
     0x1.f6706fc35fc7ep-234, 0x1.20ca15054d3e5p-260, 0x1.d62b74b584bf8p-505, 0.0, 0.0,
     0x1.dd9eec79aa702p-686, 0x1.413bf222b34c7p-126, 0.0, 0x1.5a65cf3526ec2p-869,
     0x1.cc7fa9f7d304ep-767, 0x1.d05e950890fc5p-431, 0x1.564e6e23aa353p-262,
     0x1.5986c187c8d12p-701, 0x1.b3876f119e1dfp-126, 0x1.a70eaa479737bp-791, 0.0, 0.0,
     0.0, 0.0, 0x1.34496ea11ca7fp-590, 0x1.79baec473eba5p-144, 0.0,
     0x1.9964fb05a4317p-948, 0.0, 0.0, 0x1.004725be1fef7p-234, 0.0,
     0x1.f881e12e18066p-292, 0.0, 0.0, 0x1.ee956cbd851bcp-558, 0.0,
     0x1.98fd54dba6fbcp-292, 0x1.314001cbe29afp-462, 0.0, 0.0, 0x1.b80b07b622bcp-920,
     0.0, 0.0, 0x1.b3bc0c56fc13bp-367, 0x1.ed54c1b4106a7p-547, 0x1.4957edd609f3ep-275,
     0x1.4d5d50789b22ap-414, 0x1.a1d3457024eaap-370, 0x1.265283e6f7d0ep-470, 0.0, 0.0,
     0x1.8f090349c2c8bp-264, 0.0, 0.0, 0x1.f4bcf0837227ep-543, 0.0, 0.0,
     0x1.1e5e136979c83p-81, 0x1.b884aeb2127a1p-572, 0x1.de10ca0a95f66p-643,
     0x1.4ace1c577d1a6p-820, 0.0, 0.0, 0.0, 0.0, 0x1.fd9a314fc7ebap-502, 0.0,
     0x1.f9f7c8016079p-656, 0x1.9f9bce191ea4fp-84, 0.0, 0x1.529eb76c6fdb9p-1019, 0.0,
     0.0, 0x1.258a73a436ec8p-1011, 0x1.4ca43de2787efp-622, 0x1.ae5bb06447debp-843,
     0x1.4a668ba635285p-246, 0x1.4266053acc3b2p-141, 0x1.a33c3e252a03dp-176,
     0x1.a02ae2470a565p-941, 0x1.f31773addb699p-522, 0.0, 0x1.e972b2709d63cp-955, 0.0,
     0x1.010f7f9976478p-713, 0x1.99ae24e7aa727p-915, 0.0, 0x1.7776ec43ca7fcp-727, 0.0,
     0x1.a445215c4a54dp-212, 0.0, 0x1.f0a3194bb76f4p-160, 0x1.44bcb34b35771p-557, 0.0,
     0x1.98507381dc393p-105, 0.0, 0.0, 0.0, 0.0, 0x1.bb31da2a97f8bp-599, 0.0,
     0x1.f1c5514c0c6a4p-349, 0x1.5599dc7ba009ap-316, 0.0, 0.0, 0.0,
     0x1.33cb78e07bed4p-1000, 0x1.5e2701c47dcp-310, 0.0, 0.0, 0.0, 0.0,
     0x1.cdffcb9fdbc3bp-110, 0.0, 0.0, 0x1.347b46dc5556ep-655, 0.0, 0.0, 0.0,
     0x1.237bb3df98357p-54, 0x1.1bf98913a7765p-715, 0.0, 0.0, 0x1.795dc2312a23ap-473,
     0.0, 0x1.a5ccd11386ff2p-172, 0x1.1451f1b67f8dbp-607, 0.0, 0x1.25bdcd02b9aa7p-267,
     0x1.da685c20fde1fp-497, 0x1.abe8f48651d4cp-31, 0.0, 0.0, 0x1.f8c1fccd3dc0bp-672,
     0x1.5df98c8b85a8cp-42, 0x1.ff73a6ab0264ep-718, 0.0, 0.0, 0.0,
     0x1.7b7c24359f6a7p-648, 0.0, 0x1.55890008da23ep-169, 0.0, 0.0, 0.0, 0.0,
     0x1.d8d8f3b7e71b5p-900, 0x1.51eb83eef49fcp-857, 0.0, 0x1.5d6c1db26c904p-287, 0.0,
     0x1.7c7d56b4888e5p-336, 0x1.79555788fe056p-298, 0.0, 0x1.15b3f0433e403p-374, 0.0,
     0.0, 0.0, 0x1.12ec69ec2e11dp-288, 0x1.5fe81b198863ep-470, 0.0, 0.0,
     0x1.adcb5b0385a2cp-824, 0x1.0c7113c7a005ep-205, 0.0, 0.0, 0.0, 0.0,
     0x1.d0ce6171560e8p-835, 0.0, 0x1.cf910197d0322p-566, 0x1.f18ebfeffaffbp-631, 0.0,
     0.0, 0x1.bf9a3e31e4fp-396, 0.0, 0x1.8904db99a38f1p-103, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6d8bf67f6655p-44, 0x1.42a5671af1c67p-299, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.68b325d3f98b9p-242, 0.0, 0.0, 0x1.618362a5b9f76p-416, 0x1.d9c4c9142d14fp-171,
     0x1.db5c4555e38fp-839, 0x1.2066f5afe9a54p-62, 0x1.f31ee5d508ecbp-674, 0.0,
     0x1.6cec2a2385cb2p-425, 0x1.4fb6beebd2958p-608, 0.0, 0x1.e5d071d8e0ea7p-876, 0.0,
     0x1.d2d3cd2feb639p-476, 0x1.fe4bf60f29826p-830, 0x1.8ac2bd8da77c9p-105, 0.0, 0.0,
     0.0, 0x1.cd3b2364c90a9p-700, 0x1.c168317ec2b4ap-968, 0x1.7c417d00393dap-486,
     0x1.fccbe88040c82p-648, 0x1.40c9c5c29b2fap-351, 0.0, 0.0, 0x1.2a613aacf108ap-276,
     0.0, 0x1.7c168304d30a1p-205, 0.0, 0x1.3881cecbfb86fp-604, 0.0, 0.0,
     0x1.01b317396ae17p-208, 0x1.4fc46c79fd3efp-463, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.17cd33d0c2937p-619, 0x1.81b07e301207bp-451, 0.0, 0x1.0d26ca87f7e1cp-683, 0.0,
     0.0, 0.0, 0x1.170058d8e9261p-1010, 0x1.99a9e1ad07886p-126, 0.0,
     0x1.843e00057b1b8p-655, 0.0, 0.0, 0x1.cae203351ea01p-590, 0.0, 0.0,
     0x1.cd19862c1b723p-418, 0.0, 0x1.b94e840372697p-970, 0x1.804db1c299915p-147,
     0x1.26c09b9c3c609p-842, 0x1.d1201bb3d232cp-421, 0x1.adca0f2aae05p-79, 0.0, 0.0,
     0.0, 0x1.ddccd43aa032p-604, 0.0, 0.0, 0x1.dabe8b43d2f72p-375,
     0x1.9ac37c114726bp-741, 0.0, 0x1.f633474820b2cp-601, 0.0, 0x1.da3601016531bp-925,
     0.0, 0x1.b464d0ca17d2ap-747, 0.0, 0.0, 0.0, 0.0, 0x1.da86dbb58eec4p-23,
     0x1.966a0ee644532p-371, 0.0, 0x1.659575fc1108fp-498, 0.0, 0x1.b68399313b304p-80,
     0x1.02de7ff1a017fp-593, 0x1.3c06eb07278c6p-398, 0x1.ab882ca2c6e51p-316,
     0x1.e05e1a9c5bb64p-611, 0x1.b63187eb1571bp-612, 0x1.13c659373de78p-397, 0.0,
     0x1.af5e6675b8c35p-876, 0x1.7bb6fa6727b5dp-128, 0.0, 0.0, 0x1.25c4ff40718e5p-169,
     0x1.c60d9e05d8cc8p-942, 0x1.9bee75b3d66d5p-159, 0x1.b9d30fd74e04ap-90,
     0x1.15db0c7fedfc8p-805, 0.0, 0.0, 0.0, 0x1.6a3e591dbafbbp-338,
     0x1.d1f4e6385cc5cp-544, 0x1.2766fcbafa23fp-475, 0.0, 0.0, 0x1.1f3fc0ab653a5p-896,
     0.0, 0x1.4cc434ce5e74fp-617, 0.0, 0.0, 0.0, 0x1.493ed0dd0754cp-301, 0.0, 0.0,
     0x1.6ec8da38b010bp-573, 0.0, 0.0, 0x1.2ef8758b1fc1ep-549, 0x1.d0780048b8cf3p-595,
     0.0, 0.0, 0.0, 0x1.b11e1d8e2d3adp-752, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.55e12ba0b0217p-669, 0x1.5250f37bd8efep-242, 0.0, 0x1.b8c2fbb02d49fp-613,
     0x1.f037460f72a1ep-218, 0.0, 0.0, 0x1.34cf12ef59db4p-683, 0x1.21384f0caa14dp-988,
     0.0, 0.0, 0.0, 0x1.32b1ee2d596a5p-875, 0.0, 0x1.d14c54cfed854p-293, 0.0,
     0x1.7dab1d679782ep-919, 0x1.23b668db2dd37p-54, 0x1.076d702871239p-295, 0.0,
     0x1.ea266a6e2dd94p-355, 0.0, 0x1.c5684bab161a5p-215, 0.0, 0.0, 0.0, 0.0,
     0x1.4c8f4d461cc68p-955, 0.0, 0.0, 0x1.710c2a5b2c904p-156, 0.0,
     0x1.0d06bde7cb2b5p-305, 0.0, 0x1.2d9f52cd150c7p-875, 0x1.55b9f17e7d4cbp-285,
     0x1.bea1a6de5c6b1p-659, 0.0, 0x1.269ab9e34da9ep-477, 0x1.cf22a5aef5b91p-740, 0.0,
     0.0, 0x1.761f0db83a4c7p-743, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9f1764ce68d1p-748,
     0x1.8606922eb0d04p-326, 0x1.c606b25f0e252p-188, 0x1.7f4f93cf5675cp-918,
     0x1.cbc7a9ab11908p-72, 0.0, 0x1.09157a994405ap-79, 0x1.7541f432c60cap-918,
     0x1.7d602e2a61e65p-546, 0x1.387d2581fd4e9p-85, 0.0, 0x1.d0d4fcb12dfd1p-1014, 0.0,
     0x1.f98e6fb535554p-779, 0x1.756bec5cb3753p-524, 0x1.17b0e40de749cp-266,
     0x1.e38051a81da7fp-94, 0x1.1542b4d93fa9p-432, 0.0, 0.0, 0.0, 0.0,
     0x1.9eb7d9db02975p-294, 0x1.281106d3f550ep-1010, 0x1.94892fad88b3fp-568,
     0x1.a79731824ccecp-948, 0.0, 0.0, 0x1.a473b38e33d92p-875, 0x1.c9e376695f5c3p-949,
     0.0, 0.0, 0.0, 0.0, 0x1.ee6e58888c001p-851, 0.0, 0.0, 0.0,
     0x1.b7c6902785c6ep-473, 0.0, 0x1.f084f2e23e1c6p-653, 0.0, 0x1.022ca28e2b69ep-29,
     0.0, 0.0, 0x1.ae78804c47d5p-280, 0.0, 0.0, 0.0, 0.0, 0x1.815755607db75p-178, 0.0,
     0x1.a2ce00cf14fc6p-623, 0x1.d4e880d904c9dp-793, 0.0, 0x1.a4d6aff9f0f7dp-259,
     0x1.7046b16495ba7p-660, 0x1.4368878d68ec8p-459, 0x1.2d77985b1478cp-137,
     0x1.3f6c52f21cb27p-837, 0x1.ced11daf6937ep-1018, 0.0, 0x1.9cf82e0e6bb2cp-749,
     0.0, 0x1.636d8c9e7722fp-295, 0x1.b3cc5ee89d77bp-58, 0.0, 0.0,
     0x1.e9330d1aa84f8p-872, 0x1.ac24dfb45e0ecp-702, 0x1.f0241a24878bp-81, 0.0, 0.0,
     0.0, 0.0, 0x1.1a3ec89d9f60cp-184, 0.0, 0x1.df2805e8563b8p-81, 0.0, 0.0,
     0x1.bb287cf89db4ep-888, 0x1.726f1d97bbd37p-558, 0.0, 0.0, 0.0,
     0x1.c90b85f2afcccp-680, 0.0, 0x1.18cd50f18b697p-367, 0x1.0c04d4a83e868p-606, 0.0,
     0x1.978981051b649p-311, 0.0, 0x1.1487dbaa97c3fp-488, 0.0, 0x1.1fc7827870a82p-554,
     0x1.28114df8ca4b8p-715, 0x1.71c8e2fc54ea6p-854, 0x1.478ef5736e83bp-829,
     0x1.2c3d573715974p-729, 0.0, 0x1.08e1fb0dab13cp-332, 0.0, 0.0,
     0x1.bc817410fd7d1p-748, 0x1.4a89880f5d0ap-508, 0x1.fefd5684b29f7p-225,
     0x1.293ea5ad05099p-497, 0x1.1c35bd01890b9p-55, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.728ecd83383fp-191, 0x1.783aae803d688p-647, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f0f6b3bf42476p-898, 0x1.fb1a74116ea3cp-520, 0x1.c6290d1899749p-553, 0.0, 0.0,
     0x1.7e9f3882e02e7p-76, 0.0, 0.0, 0x1.f0691f2185192p-498, 0.0,
     0x1.eabea7d8d5b3fp-101, 0x1.28a38fee15ef5p-722, 0.0, 0x1.25b17d1062b31p-659,
     0x1.2ff605becbf49p-61, 0.0, 0.0, 0x1.c1d9ad4a7b5e3p-566, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.378c28c63b7f4p-603, 0.0, 0x1.e3c03b6e2e76cp-624, 0.0, 0x1.980d042834a95p-3,
     0x1.429a8cdc6fb5ap-298, 0.0, 0.0, 0x1.6869895b73b6bp-687, 0.0,
     0x1.ca62549add991p-112, 0.0, 0x1.a470fc2a0562bp-53, 0x1.9d11b83db41aap-918,
     0x1.b67df6842e56bp-68, 0x1.38b9a48f418e9p-679, 0.0, 0.0, 0x1.ef67ef31f8e91p-512,
     0.0, 0.0, 0.0, 0x1.991a31d6c090cp-7, 0x1.35973ba65b797p-968,
     0x1.22b754fe7df17p-105, 0x1.bfb389550a5ap-865, 0.0, 0.0, 0x1.6b71f2379dc74p-808,
     0x1.21db68a301ad8p-630, 0.0, 0x1.97ad40ff6edcep-1014, 0x1.0e4c729ac52b4p-536,
     0.0, 0x1.b302a18b3d881p-272, 0x1.ed86b3c0dc679p-71, 0x1.1fc3d4599264p-351, 0.0,
     0x1.8d1de62539cacp-648, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.36b2f6ba3a394p-635, 0x1.8d74daaa36471p-631, 0.0, 0x1.4cf778f00399p-161,
     0x1.351fde7e3bffp-451, 0.0, 0x1.c780e119684fdp-53, 0x1.21ab7a1695481p-496, 0.0,
     0x1.7b7d895047df8p-678, 0x1.7c57ee8ab2178p-693, 0x1.63e210a6a48cp-537, 0.0,
     0x1.56b98b85e5e23p-659, 0x1.bf1c1edcb5f6dp-769, 0.0, 0.0, 0.0,
     0x1.ca9301716acap-700, 0x1.7a0e561458a7ap-467, 0.0, 0x1.2f01f330f9133p-689,
     0x1.30a9670ba7561p-564, 0x1.342a7b4d9b96bp-844, 0.0, 0.0, 0x1.57a81fb8435b1p-588,
     0x1.b6eeb3d643041p-792, 0.0, 0.0, 0x1.9e0bdada19721p-461, 0x1.7b2fa1e792dc5p-475,
     0.0, 0.0, 0x1.eee43d76a9d76p-577, 0x1.997ef2473a731p-106, 0x1.efca7f490e911p-434,
     0.0, 0.0, 0x1.3dcb668274a56p-309, 0x1.aa5b7aba41478p-830, 0x1.f563284368373p-801,
     0.0, 0.0, 0.0, 0x1.5cbdb1c138176p-567, 0.0, 0.0, 0x1.073d809d850a7p-778,
     0x1.278f17b21e96p-822, 0x1.2f557a1e82069p-1019, 0.0, 0x1.2735459f5df47p-359, 0.0,
     0.0, 0x1.eb5e96985a1bfp-254, 0.0, 0.0, 0x1.1bbf6a743f9acp-112,
     0x1.87b50c1526b36p-471, 0x1.62cfb5e14c2b3p-386, 0.0, 0x1.3eb6166c7c097p-142, 0.0,
     0x1.23df936685213p-686, 0x1.60270ecc4e3c2p-280, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.71e37701e0ef1p-80, 0.0, 0x1.75d405773cd88p-355, 0x1.13a2a6f36b366p-913, 0.0,
     0x1.cccbd7c4dad18p-60, 0.0, 0.0, 0x1.67c9c97ef209ap-294, 0.0,
     0x1.5cd99a7959369p-205, 0.0, 0x1.de85c3d41f48dp-158, 0x1.bd5b59de717f4p-505,
     0x1.2a20360cbb73p-305, 0.0, 0x1.f631080d21016p-525, 0.0, 0x1.2e1aa302aa5b5p-103,
     0.0, 0x1.13f64a0ee6b61p-930, 0.0, 0.0, 0x1.f9bd5b593123ep-834,
     0x1.14fbbead37593p-882, 0x1.230ca069b5c07p-42, 0.0, 0x1.77c83f0418466p-691, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2610d438049fp-69, 0.0, 0x1.3e7452eb7f3abp-634, 0.0,
     0.0, 0x1.7a899e5ac0713p-762, 0x1.cd9a756423396p-656, 0x1.307c6e8b447c4p-256, 0.0,
     0.0, 0x1.cd88cb358d167p-8, 0.0, 0.0, 0.0, 0x1.911c9bf366e48p-22,
     0x1.e54cba2b05268p-634, 0.0, 0x1.fe93ff9bdfe27p-693, 0x1.1b387e0067c84p-636, 0.0,
     0.0, 0.0, 0x1.ee75c73adde5dp-976, 0x1.d5fef5e0fe3d3p-389, 0.0,
     0x1.7d464a2a71c17p-866, 0.0, 0.0, 0x1.9ecbc8146f73p-495, 0x1.d25e6b964a168p-350,
     0x1.4ab2d65e138c8p-268, 0.0, 0.0, 0x1.f09f9e4536cd6p-982, 0x1.119ba4c2606bfp-140,
     0.0, 0.0, 0.0, 0x1.c4fe0dfe18d7ep-77, 0x1.5bf187a678015p-469, 0.0, 0.0,
     0x1.6b9df934664a5p-864, 0x1.50730b9cdafd5p-807, 0.0, 0.0, 0.0,
     0x1.dc3b2387186dbp-65, 0.0, 0.0, 0x1.7c6676776a8cap-358, 0.0, 0.0,
     0x1.d18af371bf69fp-9, 0x1.626910cba6298p-156, 0.0, 0.0, 0x1.07af44bf808d4p-562,
     0.0, 0x1.f031efa0338fp-910, 0x1.dfbab9786cd8ap-589, 0x1.0130b315a302fp-973, 0.0,
     0x1.3c0900bcfebc2p-710, 0.0, 0x1.4857c4a4ff46ap-398, 0x1.eb927717dbe61p-298,
     0x1.070a94cc8565bp-512, 0x1.6e29086e71d3bp-505, 0x1.3985389d7ea52p-687,
     0x1.dc2fb12a694a5p-411, 0x1.8c5d812186014p-577, 0x1.e378af1200473p-333, 0.0, 0.0,
     0.0, 0x1.e5c99cd3c4d86p-321, 0x1.4f738e6d158ebp-229, 0.0, 0x1.5acd3c29304p-559,
     0x1.20cbb4ce83dep-433, 0x1.82400ffc226fcp-922, 0.0, 0x1.a46344ff1685fp-555,
     0x1.2dec8f14fb1f4p-136, 0x1.9d7aad4e8061ep-771, 0x1.f365265ea77f7p-178, 0.0,
     0x1.4eb4a6c5de8cep-485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca3e52cb51514p-238,
     0.0, 0x1.21793ae54ebefp-258, 0.0, 0.0, 0.0, 0x1.c5ac29d5b0ce3p-509,
     0x1.c90376acc8984p-873, 0.0, 0.0, 0x1.ac73904f6945fp-1005, 0.0, 0.0,
     0x1.f3be7b543f45bp-407, 0.0, 0x1.d4a3d54bf42fdp-125, 0.0, 0x1.bbb3f0ab48aeep-859,
     0.0, 0.0, 0.0, 0.0, 0x1.9f70b3b830d46p-265, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b57c2337799b4p-607, 0x1.45f226d8625b6p-35, 0.0, 0.0,
     0x1.a5db129a1d49dp-872, 0.0, 0.0, 0.0, 0x1.e4552a71d85cbp-120, 0.0, 0.0, 0.0,
     0.0, 0x1.1003621b341f8p-768, 0.0, 0x1.374423957b14bp-326, 0.0, 0.0,
     0x1.2efa8b3563411p-171, 0.0, 0.0, 0x1.5f60b6313dea1p-164, 0.0,
     0x1.ccc77cc3db9bep-361, 0.0, 0x1.ae46851dac6d7p-593, 0.0, 0.0,
     0x1.9262fae76da68p-731, 0x1.7caeac489e15dp-281, 0x1.f02ee7456131dp-184, 0.0,
     0x1.1bbb13953ae2cp-413, 0.0, 0x1.218b76e5c886dp-695, 0.0, 0.0, 0.0,
     0x1.f0356b518edb9p-517, 0.0, 0x1.cef1b30292c9ep-46, 0x1.6e3679b35dc34p-720,
     0x1.bb44e209d4ad1p-304, 0.0, 0x1.fbf4168757da3p-702, 0x1.354d79c90a432p-287
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
            tmp1 = Sleef_sinpid4_u05kvx(tmp0);
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
    printf("Sleef_sinpid4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinpid4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
