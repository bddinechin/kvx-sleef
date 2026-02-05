/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhd2_u10kvx.c --function Sleef_asinhd2_u10kvx \
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
     0.0, 0.0, 0x1.884b1321dbe63p-100, 0.0, 0x1.50d4d2e148682p-766, 0.0,
     0x1.6749ff30d93bap-558, 0x1.ffac9d3e9f1d9p-421, 0x1.4a540c486f407p-796, 0.0, 0.0,
     0.0, 0x1.da7cc9b37c6dbp-643, 0x1.2b1c88400d8p-49, 0.0, 0.0,
     0x1.8135cec7b5e85p-117, 0x1.7d354824d7473p-466, 0.0, 0.0, 0x1.9151eebbe2136p-6,
     0.0, 0x1.11f45fa11476cp-318, 0.0, 0x1.f6898a7f024a2p-509, 0.0,
     0x1.00e5cd567760bp-346, 0x1.389755a51afe4p-797, 0x1.d2c977c53580cp-195,
     0x1.f4c5c9eb4e3d2p-13, 0x1.c591fe64b4723p-725, 0.0, 0.0, 0.0, 0.0,
     0x1.00b518138e236p-166, 0x1.f889695ef0523p-773, 0.0, 0.0, 0x1.c935776f11265p-984,
     0x1.6ef7421deae5cp-791, 0x1.84fa0a3c2bb9cp-839, 0x1.00686e4409619p-149, 0.0, 0.0,
     0x1.bf4e5aeb9530ep-612, 0x1.73cb6398bb1aap-660, 0x1.844b0d27f0ffap-503,
     0x1.2d636b021c25dp-965, 0.0, 0.0, 0x1.88bc97e131945p-750, 0.0,
     0x1.96aa9db9e5ef4p-263, 0x1.515b9ff5662a2p-376, 0.0, 0x1.fcc96b2e27947p-312,
     0x1.2181faca8e1edp-1008, 0.0, 0.0, 0x1.3a45550709c19p-159,
     0x1.8b08e254d5521p-481, 0x1.cbcc5d301336ep-547, 0x1.ca5a60a1a09efp-750, 0.0,
     0x1.f877beda93a19p-966, 0x1.e87cd3669b2ccp-628, 0x1.2c48214a3d6eep-527,
     0x1.42c4018161198p-546, 0.0, 0x1.217f060c19f03p-714, 0x1.4f9b7ed93ba64p-515, 0.0,
     0.0, 0x1.8d60a00a0046bp-269, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c898b737e56b5p-358,
     0.0, 0.0, 0.0, 0.0, 0x1.ac7ecc62cb9dbp-1016, 0x1.d3a45a7cf7531p-317, 0.0, 0.0,
     0.0, 0x1.6015e7412ac96p-1003, 0x1.ed25262f6924p-552, 0.0, 0x1.30c20ce04be54p-119,
     0.0, 0x1.0fd6111a3061bp-485, 0x1.396476092a516p-976, 0x1.dfe8c7ca26d5cp-996,
     0x1.c844e3e8bf287p-851, 0x1.9f8f6a44b1bd3p-808, 0x1.21cd7ade326a9p-360,
     0x1.694bad6df7e46p-760, 0.0, 0x1.5cd406f1383ap-491, 0x1.e366a13ee2179p-133,
     0x1.da009a694bb0ap-181, 0x1.e31a987264ad9p-35, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e6433d505c7dp-32, 0.0, 0.0, 0.0, 0x1.678eb98ac6461p-182, 0.0, 0.0,
     0x1.fa77a6d6491acp-1007, 0x1.ed738375893fdp-994, 0x1.63f546c0a5959p-278, 0.0,
     0x1.59a8d356cf5d1p-209, 0x1.2a67617a7085fp-613, 0.0, 0x1.17b9a37d3b305p-524,
     0x1.8e5d60ddc540cp-262, 0x1.e9240381d2fafp-903, 0.0, 0x1.a6d36077912a4p-536, 0.0,
     0.0, 0.0, 0x1.a1378dd6688fap-281, 0x1.be2af3efe8fa6p-576, 0x1.69e761b4a58abp-267,
     0.0, 0.0, 0x1.b1110daaeb64dp-503, 0x1.bbb630405fc1cp-425, 0x1.44eac6bfa3dbap-140,
     0.0, 0.0, 0x1.9da9a58df674bp-904, 0x1.c6f1e2a8444bfp-219, 0x1.1496389376726p-789,
     0.0, 0x1.5522f67e832f2p-596, 0.0, 0.0, 0x1.ddf3134d0388cp-354, 0.0, 0.0, 0.0,
     0.0, 0x1.7fad6728a1092p-626, 0x1.e016a8999dcb3p-394, 0x1.3ae8e92a33e12p-158, 0.0,
     0x1.dccc90a5ff7cdp-994, 0.0, 0.0, 0.0, 0.0, 0x1.1c7e064002b37p-154,
     0x1.b39e387f7c4a7p-225, 0.0, 0x1.ababb37f29e8ap-261, 0x1.fbf3bbf7b2815p-186,
     0x1.0574c1727cbb2p-351, 0.0, 0x1.4d3fb2acca838p-671, 0x1.9d000d41cd682p-760, 0.0,
     0x1.9c79db4c71419p-461, 0x1.c874df9454c5ap-821, 0x1.1a66d78a5e444p-451, 0.0,
     0x1.4b6b024faba93p-545, 0.0, 0.0, 0x1.5f6401cc60adp-87, 0.0, 0.0,
     0x1.b1b7b00b164d6p-106, 0x1.33941d890bd96p-12, 0x1.aa84eea93f739p-250, 0.0, 0.0,
     0.0, 0x1.70116e89cd9b6p-839, 0x1.4d15910dc75c1p-13, 0.0, 0.0,
     0x1.114748d8ec085p-947, 0.0, 0x1.312e410318c9ep-197, 0x1.3c3ec59f94e27p-446, 0.0,
     0x1.15d4b65f153e7p-269, 0.0, 0x1.01364b908672ap-1001, 0x1.3ce9b588b9232p-679,
     0x1.b89d723a7420fp-581, 0.0, 0.0, 0x1.1636267927e41p-709, 0.0, 0.0,
     0x1.483b6a0c47376p-1006, 0x1.f51704a2318efp-625, 0.0, 0x1.053dcff65af7ap-116,
     0.0, 0x1.36d24378efb49p-166, 0.0, 0x1.a15d3055bdf2cp-1020,
     0x1.0dbe5620a4fd8p-966, 0x1.545f9c8d7dbf8p-335, 0x1.84f8b3fafb9e3p-81, 0.0,
     0x1.cf0260e54f58ep-844, 0x1.05f878f4bd0a4p-99, 0x1.18315bbe13ae8p-937,
     0x1.6dd9e7a69fc42p-308, 0.0, 0.0, 0x1.24ecd1d30f298p-623, 0.0, 0.0, 0.0, 0.0,
     0x1.27eb7dc59871bp-148, 0.0, 0x1.7a3c9a14f078dp-627, 0.0, 0.0,
     0x1.d684a161e5781p-220, 0x1.2f35147148872p-62, 0x1.16a39809fb1f6p-119, 0.0,
     0x1.e131a385d8143p-323, 0x1.c22177e2f5be8p-685, 0.0, 0x1.fe2983703709bp-374,
     0x1.07f9d345db41cp-392, 0.0, 0.0, 0x1.25158b223be6cp-241, 0x1.264eefdfe39b2p-182,
     0.0, 0.0, 0.0, 0.0, 0x1.32639de20abcbp-448, 0x1.f3721d33d1348p-271,
     0x1.acbf75056dd81p-67, 0.0, 0.0, 0x1.4960e5e59e3acp-103, 0.0,
     0x1.3289c55b0055ep-1015, 0x1.c4bb38aa2a83cp-836, 0x1.4ce7ed1289c25p-579, 0.0,
     0x1.b6ef5177cabc7p-163, 0x1.9d6ef386afe77p-703, 0x1.35104cacc3696p-870,
     0x1.cf9618503ae75p-784, 0.0, 0x1.97704ecdb16e5p-995, 0x1.27797ea44ea1fp-840, 0.0,
     0x1.d8663c5e7970ap-949, 0x1.0e33e7c4255c9p-64, 0x1.521f282db8f5cp-340, 0.0, 0.0,
     0x1.01be0cc3afcbdp-905, 0x1.234650e5a28cep-591, 0x1.b9b0a774fdc9bp-388,
     0x1.30fce5e3fa335p-568, 0x1.023827b5bc163p-837, 0x1.014bb9800e49ap-842,
     0x1.cd29d0faea8cp-716, 0x1.4c5b4517ac57fp-853, 0x1.84c577ad3d42fp-597, 0.0, 0.0,
     0x1.f4debbd6bb70cp-251, 0.0, 0x1.e9607b95b98f6p-948, 0.0, 0.0,
     0x1.9f8923cd17ebdp-787, 0x1.7a85826fb07ddp-941, 0.0, 0x1.d3e7267a93329p-365, 0.0,
     0.0, 0x1.68afabb5c9ea8p-49, 0.0, 0.0, 0.0, 0x1.fb5dcda52d284p-955, 0.0,
     0x1.4c77eee13b429p-786, 0.0, 0.0, 0x1.bea6c21ed54e5p-32, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ad257a71b90a1p-6, 0x1.b2e520bab031fp-254, 0x1.c5ee528a5d90bp-296,
     0x1.0fe31836ca011p-263, 0.0, 0.0, 0x1.b58457210aa62p-239, 0.0,
     0x1.9993bb1bc0dc2p-384, 0x1.5265651e84af7p-364, 0.0, 0.0, 0x1.2193794642b2fp-718,
     0.0, 0.0, 0x1.cbcbc96be7f6ep-38, 0.0, 0.0, 0x1.c0cac7a6acb74p-983, 0.0, 0.0, 0.0,
     0x1.3b2a092599e98p-261, 0.0, 0.0, 0x1.817d3adabf0f8p-62, 0x1.fb2478b9ad15cp-320,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1162ab857ff6p-248, 0.0,
     0x1.3edcde6394902p-945, 0.0, 0x1.5e4500245313ap-110, 0x1.fc6eebe837677p-477, 0.0,
     0x1.c71990063b8bap-388, 0x1.850a05842129ap-131, 0x1.8f64077d63e99p-553, 0.0, 0.0,
     0.0, 0.0, 0x1.366bb397e4734p-704, 0x1.9a0d9dc99f2aap-931, 0.0,
     0x1.87d5c7a3ddb74p-561, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47745506f1bc7p-830, 0.0,
     0.0, 0.0, 0.0, 0x1.192868774eea3p-587, 0x1.f5e80a7dde6cfp-590,
     0x1.493d3634745bp-1022, 0x1.4c981ff9e56acp-207, 0.0, 0x1.95bdbb7bc05ebp-786, 0.0,
     0.0, 0x1.901133f6644e5p-127, 0x1.4fe5890b5279p-196, 0x1.d9362f4b6f07cp-514, 0.0,
     0x1.11bd612e85d3dp-477, 0x1.59df28400bc96p-957, 0x1.9db111d74bf74p-317,
     0x1.2956819a952eep-355, 0x1.e1752a325daa3p-104, 0x1.701fe913d5ccep-35, 0.0,
     0x1.f5d4584dc329ep-302, 0.0, 0.0, 0x1.a38498c6a600fp-942, 0.0, 0.0, 0.0,
     0x1.d0968342c31dbp-956, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.672b9a15dbe1ap-909,
     0.0, 0x1.38477b769854ep-790, 0x1.56b0d36a461c4p-19, 0x1.bc4f1bbf0c67p-454,
     0x1.f3ac645d71454p-55, 0.0, 0.0, 0x1.9e3bb559a1195p-758, 0x1.131e4ff47ec49p-375,
     0x1.851d15748c4b2p-792, 0x1.be62d734aa98p-195, 0x1.12df1d9249e6p-254,
     0x1.a2e3531c030f8p-890, 0.0, 0.0, 0.0, 0x1.993109b892d9cp-124, 0.0,
     0x1.5fc117a0f0687p-844, 0.0, 0x1.83d53f6bd27fdp-934, 0x1.36a94f360f373p-831,
     0x1.9d84ab5a13643p-443, 0.0, 0.0, 0x1.0345e35318416p-644, 0x1.e714e104e09ep-603,
     0.0, 0x1.cc844ed04867ap-23, 0x1.578ff45d7a7d5p-643, 0.0, 0x1.33169a2839748p-509,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91d06099885ebp-451, 0x1.512f07f8b621ep-258,
     0x1.4f0d62e1c698ep-72, 0.0, 0.0, 0.0, 0x1.0008c29553dd3p-903,
     0x1.57ca7ed43efecp-562, 0.0, 0x1.c59c4bcc1a99dp-62, 0x1.2bab535dae6b2p-845,
     0x1.56ee8d1e7f46bp-402, 0x1.54c4252aa6d76p-873, 0x1.5ae379a71247p-483,
     0x1.99a7def7d5a65p-189, 0.0, 0.0, 0x1.e1d23fab6e398p-305, 0x1.68fc6ca9a2f98p-541,
     0x1.722d9a8c755edp-176, 0.0, 0x1.cb37b587a7dc3p-1003, 0.0,
     0x1.5bc7e6553048bp-119, 0x1.628a37e8261b5p-573, 0.0, 0.0, 0x1.d00f26cb15f82p-52,
     0.0, 0x1.fd674dc40eb52p-188, 0.0, 0x1.4c6cf425cba56p-833,
     0x1.dd2761bd85f91p-1017, 0x1.ec02478390c47p-223, 0x1.af8a25d28f36p-93,
     0x1.1ae53dc3e7fap-755, 0.0, 0.0, 0.0, 0x1.922764da3068ap-688,
     0x1.cec9a5b4b0cc4p-847, 0x1.85c2afd90bb71p-817, 0x1.7e9335a1cbe67p-716,
     0x1.93e0ad913355p-601, 0.0, 0.0, 0x1.af90a6f93baeep-112, 0.0, 0.0, 0.0,
     0x1.75586f47438f8p-597, 0.0, 0x1.1d6e0e1cb0ce4p-704, 0.0, 0.0, 0.0, 0.0,
     0x1.ee14aa7b807afp-52, 0.0, 0.0, 0.0, 0x1p0, 0x1.bb1a93f0fc238p-706, 0.0,
     0x1.76fe0985055afp-734, 0x1.20f0d553a0e43p-647, 0.0, 0.0, 0.0, 0.0,
     0x1.f1e611cb3cd01p-206, 0.0, 0x1.ec6649a928a9fp-82, 0.0, 0.0,
     0x1.3fec0a6a8b97ep-105, 0.0, 0.0, 0.0, 0x1.b1392bb44ba2ep-54, 0.0,
     0x1.57d4f866011c6p-501, 0x1.2a75a8cdca123p-427, 0.0, 0.0, 0x1.fb7f61089d31ap-913,
     0.0, 0.0, 0.0, 0x1.581864bf181c8p-654, 0.0, 0.0, 0.0, 0x1.9c9b47d8f7bc7p-320,
     0x1.78c4b9596a344p-837, 0.0, 0.0, 0.0, 0.0, 0x1.8e2491e1a6badp-446,
     0x1.cf0b7051e9bb2p-49, 0x1.a3332fc705cc3p-691, 0x1.4a2369cc26eb8p-539,
     0x1.04c3ce67723b8p-872, 0.0, 0x1.8e668af33b6bdp-691, 0.0, 0.0, 0.0, 0.0,
     0x1.108e7990ec8a7p-120, 0.0, 0.0, 0.0, 0.0, 0x1.8d7b0b6742cedp-724,
     0x1.cd89258e159d8p-1013, 0x1.5d1dd2b03233bp-436, 0.0, 0x1.713e6bfab0e03p-171,
     0x1.4e6067023f236p-872, 0x1.bec71e03a2077p-629, 0x1.edfdf7ddc640dp-897, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2b3d9cdc003d4p-107, 0.0, 0.0, 0.0, 0x1.6eeaa7bd0598ep-29, 0.0,
     0.0, 0x1.15274f6bf3c67p-731, 0.0, 0.0, 0x1.edbe9415a78bdp-332,
     0x1.cfde90e019607p-508, 0.0, 0.0, 0.0, 0.0, 0x1.99cc54f290713p-274, 0.0,
     0x1.ba93df7822613p-847, 0x1.1e96949715a4cp-360, 0.0, 0.0, 0x1.3a2997d64669dp-317,
     0.0, 0.0, 0x1.cbd8ea0d0b36dp-44, 0.0, 0x1.ec05fa08fe348p-384, 0.0, 0.0,
     0x1.34a104298e37cp-524, 0x1.a75be86c7f486p-972, 0.0, 0.0, 0.0,
     0x1.533f1c5388699p-552, 0x1.03f7f790ebd95p-1020, 0x1.1652e040ce45cp-845,
     0x1.434477de4e617p-217, 0.0, 0.0, 0x1.992f64319c906p-483, 0x1.6f0ba650ae9c2p-735,
     0.0, 0.0, 0.0, 0.0, 0x1.3d641e6bd05e1p-5, 0x1.b8d6816945b3cp-389, 0.0,
     0x1.d241d2cd4de1ep-658, 0.0, 0x1.874c9acc0eb9p-780, 0.0, 0x1.a5f7f62a535e5p-572,
     0x1.a3cc285721fd6p-678, 0.0, 0x1.58c183a8d4b61p-991, 0x1.896ec80358b68p-729,
     0x1.6ca23205795bap-779, 0x1.4c538b27c4a86p-514, 0.0, 0.0, 0x1.17da9c82ce7f3p-898,
     0.0, 0.0, 0.0, 0x1.afbd3f934f57ap-152, 0x1.a711762179831p-679, 0.0,
     0x1.174a35594b4a9p-122, 0x1.927b010f386d8p-170, 0.0, 0x1.36742cf89ee1dp-992, 0.0,
     0x1.eaa1a7bbfa9bap-76, 0x1.dd28a3ce5f277p-383, 0.0, 0.0, 0x1.7f09760d5d15ep-997,
     0x1.2e2147fcd9bep-456, 0x1.60e3fe24dcfb7p-544, 0x1p0, 0x1.a72abd7c352c8p-266,
     0x1.8b37b40018a17p-700, 0.0, 0x1.5ff885c4d7058p-754, 0x1.fd64e7c919027p-593,
     0x1.1f1cd597c6044p-421, 0.0, 0.0, 0.0, 0.0, 0x1.f61e20e44afc5p-130,
     0x1.8ac33051c1031p-412, 0x1.9274a4fe7def1p-26, 0.0, 0x1.80576a906f403p-475, 0.0,
     0x1.ad2e073e4e99ep-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c06c04be5252p-1021,
     0x1.f660080c92a1cp-380, 0.0, 0x1.c08b71062db52p-969, 0.0, 0x1.dd627c8fe70f7p-815,
     0x1.9c3f3cdaf8b1fp-946, 0.0, 0x1.a5ce4726ba83bp-306, 0.0, 0x1.d7193d0c61b41p-400,
     0.0, 0x1.636c9776d5eb9p-14, 0x1.1e7e720b68815p-479, 0x1.bc3af38ddd299p-964,
     0x1.a4cebe1d08521p-690, 0x1.90aba34b7f06bp-820, 0x1.795dfeccf17ep-7, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7886fc802ff98p-547, 0x1.b430a5af544a1p-508,
     0x1.47920ba4a6c5bp-169, 0x1.fdb53991651d5p-711, 0.0, 0.0, 0.0,
     0x1.701efa598af9fp-579, 0.0, 0x1.fd926368d5f03p-977, 0x1.d612f5e17bf17p-942, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a746aa928a6bp-809, 0.0, 0x1.111ba3e1f73a7p-873, 0.0,
     0x1.13b0359c90f75p-949, 0.0, 0x1.9ae9a3b9012aep-982, 0.0, 0.0,
     0x1.cf4a7d1e2c9c7p-32, 0x1.c33ec3021f5ebp-384, 0.0, 0x1.7beb9fde6d966p-714,
     0x1.73b00010c5024p-135, 0x1.c6a0af7619f71p-172, 0x1.59d9e555062c3p-765, 0.0,
     0x1.ec2905c31aaeap-761, 0.0, 0.0, 0x1.23b2f94155d19p-633, 0.0, 0.0, 0.0, 0.0,
     0x1.7a8d90625939cp-847, 0x1.a8414f417692dp-424, 0x1.da13664fbdf3dp-750, 0.0, 0.0,
     0.0, 0.0, 0x1.e25adbe627469p-41, 0.0, 0x1.ff1ce9a772a26p-923, 0.0,
     0x1.8b805279dd98ap-181, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b37e829cdef99p-787, 0.0,
     0x1.42a89123d8625p-641, 0x1.9c853aadf88b2p-680, 0x1.6c2266cc64878p-536, 0.0, 0.0,
     0x1.e863a8fc3a723p-258, 0x1.832d8c227169bp-427, 0x1.7de89db6eebecp-259, 0.0, 0.0,
     0.0, 0x1.f9cbb7fbfc898p-490, 0x1.b3db7f51f305dp-499, 0x1.8022a9e870a8bp-386, 0.0,
     0x1.9bfa0b5adfc1cp-615, 0.0, 0.0, 0.0, 0.0, 0x1.bb06b767bea91p-780,
     0x1.7e4a5d58cce59p-503, 0.0, 0x1.535cda004d13p-473, 0.0, 0x1.d749e0df39d9cp-281,
     0.0, 0x1.882138849627p-92, 0.0, 0.0, 0x1.eb8dc2d355051p-998, 0.0, 0.0,
     0x1.e3435275705dep-667, 0.0, 0.0, 0.0, 0.0, 0x1.f1bde6770d721p-309, 0.0,
     0x1.c293334fa2dcp-529, 0x1.f11c5ee9f3cc3p-1016, 0.0, 0x1.245151c36c78cp-1007,
     0x1.88a2486151f89p-745, 0x1.172418e229f41p-244, 0x1.fa0f36332fc5ap-252,
     0x1.600257e07fe57p-338, 0.0, 0x1.4232bf9b578fcp-772, 0x1.04e7750e9a10dp-241, 0.0,
     0x1.56c1da31447d6p-85, 0.0, 0x1.af528d59efb3p-211, 0.0, 0.0, 0.0, 0.0,
     0x1.8c39a14b8d1f1p-674, 0.0, 0.0, 0x1.4ddc60622e9afp-783, 0x1.ce77d4d4bb6a9p-79,
     0.0, 0.0, 0x1.f474233a3ab1cp-834, 0x1.b26c06f743bb9p-498, 0x1.204b00e93920dp-327,
     0x1.de465baaa4a5dp-4, 0x1.dc4846b9b1d06p-541, 0.0, 0x1.70912f0d12dap-1017, 0.0,
     0x1.f0197f4c556dbp-890, 0.0, 0.0, 0.0, 0.0, 0x1.60be9b0a1b93ap-932, 0.0,
     0x1.fc80a287b0c82p-241, 0.0, 0.0, 0.0, 0x1.ed64ec22e1e6dp-402, 0.0, 0.0,
     0x1.e79141790b8dap-431, 0x1.1613b3b6e6866p-656, 0x1.9acbb5bd3e362p-674, 0.0, 0.0,
     0x1.bba25159e98afp-481, 0x1.af6f8740fd2ccp-899, 0x1.f2ff392887779p-219, 0.0, 0.0,
     0.0, 0x1.f609538ac33fcp-676, 0x1.617cf20131aecp-587, 0.0, 0x1.74247ba0b59afp-876,
     0.0, 0.0, 0x1.2f5e825dcc8a2p-314, 0x1.8dc2fdd895856p-510, 0x1.7e6d55981aa91p-776,
     0x1.0669def59398cp-130, 0.0, 0.0, 0.0, 0x1.a2810cd9d23e3p-230, 0.0, 0.0,
     0x1.9eee157dd3d71p-422, 0.0, 0.0, 0.0, 0x1.07e86e9c55e4dp-529,
     0x1.762c63cf8a2b3p-892, 0.0, 0x1.90a1dc91b574p-956, 0.0, 0.0,
     0x1.dba9dc0381efap-251, 0x1.9efe8daf71d0ap-123, 0x1.b24a6aca745b2p-328, 0.0,
     0x1.61b1babdda63ap-369, 0x1.a657e94f1b473p-765, 0x1.28cdf73ce3405p-501, 0.0, 0.0,
     0.0, 0x1.9cca84e379c32p-923, 0.0, 0x1.01c939abd437bp-577, 0x1.c01b32d689448p-707,
     0.0, 0.0, 0x1.e87a2f9c4c5bbp-161, 0x1.4f5ad6b1ade4dp-210, 0x1.6e77b8412740cp-307,
     0x1.21d90bc8f24e3p-257, 0.0, 0.0, 0x1.0db230a341a72p-141, 0x1.521aa3f7a7977p-404,
     0.0, 0x1.ad10af976a7d6p-646, 0x1.0f5b67f8807a3p-31, 0.0, 0x1.f921f3d21fd7dp-972,
     0x1.070466e684f0ep-896, 0x1.20cb3fc2d3066p-281, 0.0, 0.0, 0x1.c2bcd490a9c6dp-233,
     0x1.350cfba47f6bfp-279, 0x1.2197a512ee719p-150, 0x1.0215f6a15ca2dp-997,
     0x1.f8404419bae2dp-951, 0x1.eb7a858d25d92p-318, 0x1.0381a809391c8p-972, 0.0,
     0x1.868f09f10b605p-513, 0x1.9c51ad7878e2cp-1016, 0x1.3d67c59d96ed6p-646,
     0x1.901126e96d2c6p-579, 0.0, 0x1.56907394a9be2p-604, 0x1.06d71787d1ee3p-400,
     0x1.cfafb9f124cc5p-546, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5cb26148deb1bp-166, 0.0,
     0x1.785a9eed63684p-557, 0x1.1739259d3275ap-958, 0x1.a3a3785540edcp-681,
     0x1.7f1ed18ec715ap-989, 0.0, 0.0, 0x1.29c528a7758aap-919, 0x1.a050de311394p-571,
     0x1.4080e84bddd8bp-820, 0x1.a089bb07b325bp-5, 0.0, 0.0, 0.0,
     0x1.9e9ec1daa3958p-389, 0x1.43132ee33f09fp-279, 0.0, 0.0, 0x1.3d7ab0f2e6e09p-311,
     0.0, 0x1.71ae80ed5297dp-809, 0x1.80ed18e7d71d5p-398, 0x1.1686fe2b6038p-567, 0.0,
     0x1.b756950d54278p-166, 0.0, 0.0, 0.0, 0x1.5881b2dc9cde7p-274,
     0x1.0467764c7e5f8p-113, 0.0, 0.0, 0x1.6a3a765d68744p-809, 0x1.ad4b46e476a68p-913,
     0x1.c63d0ef57b3d1p-940, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ccfc6d299901p-685,
     0.0, 0.0, 0.0, 0.0, 0x1.1e87c143e028cp-814, 0.0, 0.0, 0.0,
     0x1.9ea91109253eep-175, 0.0, 0.0, 0x1.e365ba594efb6p-93
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
            tmp1 = Sleef_asinhd2_u10kvx(tmp0);
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
    printf("Sleef_asinhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_asinhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
