/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfd2_u10avx2128.c --function Sleef_erfd2_u10avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0, 0.0, 0x1.22f916d570fdbp-308, 0x1.745c7a16287cfp-54, 0x1.3a75976304dadp-923,
     0x1.34f515eca5cabp-729, 0x1.bc85c14da107dp-55, 0x1.aa4ecdd5915dep-652,
     0x1.7c1de75a895abp-472, 0.0, 0x1.e34c7b831e6edp-919, 0x1.2fcd451e3f404p-197,
     0x1.8be87e3c458d4p-833, 0x1.04deb56ad79d8p-1009, 0x1.7dcb9b5ce16aep-662,
     0x1.9d5f73e18e709p-866, 0.0, 0x1.83e9ae3b71699p-827, 0.0, 0x1.219376691732ep-450,
     0.0, 0x1.f5e997695ad21p-80, 0.0, 0x1.8f71e39ed4cebp-837, 0x1.fbb5ed0bee7e1p-605,
     0x1.2cb84d846ee6ap-1002, 0.0, 0x1.1b241417f5d46p-251, 0x1.f2bcc04269f3ep-486,
     0.0, 0x1.4d4379ae1f55bp-324, 0x1.57bd81994c04dp-12, 0.0, 0x1.a8e86342a0d68p-701,
     0.0, 0x1.e6183630621cep-936, 0.0, 0x1.37b8e9fe91d3fp-892, 0.0,
     0x1.76e75ef29593ep-624, 0x1.332ce55ab4f47p-169, 0x1.453b81b6a6df7p-790,
     0x1.3c62cda27a779p-244, 0x1.a011f17273958p-618, 0x1.cbd597f86b42ep-793,
     0x1.51bf017915a91p-654, 0.0, 0.0, 0x1.0c327eb753153p-215, 0.0, 0.0, 0.0,
     0x1.51d7a4981ea6fp-909, 0.0, 0.0, 0x1.0f6a39aeff9c5p-637, 0x1.da5d430ddaaf5p-104,
     0x1.16575b77a6217p-198, 0x1.0eddef69e8a75p-8, 0.0, 0x1.4a0a976a0875bp-885,
     0x1.8b710e6feb284p-901, 0x1.6f21defb44dep-520, 0.0, 0x1.0683d422186edp-655,
     0x1.be60284070d92p-52, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d8650715472ap-983,
     0x1.c29d3db81b3f8p-150, 0.0, 0x1.ec7f601e39b57p-816, 0x1.4eb510edff781p-696,
     0x1.a4dd4b0e4e4bdp-714, 0x1.3a7de4e4211bep-316, 0x1.8cd1be722caddp-511,
     0x1.5c687252e23fap-416, 0.0, 0.0, 0x1.8adbe737aead9p-819, 0x1.71024c0ca4a0dp-460,
     0.0, 0.0, 0.0, 0x1.05b93069836bap-433, 0x1.d36026dbc1e52p-192, 0.0,
     0x1.15a022af4d8dap-159, 0x1.87ad9a0e66aa8p-12, 0x1.5376236bf429ep-688, 0.0, 0.0,
     0.0, 0x1.30b846f506098p-1021, 0x1.5e0104934b007p-730, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.aeb08618a4488p-585, 0.0, 0.0, 0.0, 0.0, 0x1.ec0c0ab7817ffp-639,
     0.0, 0.0, 0x1.f8d31c42281dfp-770, 0.0, 0x1.a0719105e6b2dp-610, 0.0,
     0x1.3605a508c875cp-696, 0x1.2775c39f56dd8p-827, 0.0, 0x1.7f0521cf189f3p-286, 0.0,
     0x1.46ac0283aa36bp-196, 0.0, 0x1.c5921e821c674p-270, 0.0, 0x1.d6c0c22221b08p-177,
     0.0, 0x1.c407430ef3f82p-97, 0.0, 0x1.c4a06780fa351p-473, 0x1.2abe0af9e6dd2p-343,
     0.0, 0.0, 0.0, 0x1.0cca1684b8a6fp-980, 0.0, 0x1.895d277e19522p-410,
     0x1.36ce9cd304025p-262, 0x1.09c7f5bc5848fp-169, 0.0, 0x1.b846ea145ba97p-906, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3c8ba177e71bcp-890, 0x1.36ea296364022p-204, 0.0, 0.0,
     0.0, 0x1.ca9707408e0a2p-377, 0.0, 0x1.f0d9aa8a9b4edp-886, 0.0,
     0x1.b1b7b7d297f3bp-889, 0x1.7d5ff0fcc2b82p-782, 0.0, 0.0, 0.0, 0.0,
     0x1.4c3699aec3639p-282, 0x1.13f4d02b56514p-793, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e0d0b5c6c4ecbp-143, 0.0, 0x1.60105a5174ff7p-821, 0.0, 0x1.1eb9d50265e13p-654,
     0x1.614052973523bp-992, 0x1.731a89ba30117p-253, 0x1.dfed17af6e761p-401,
     0x1.b4b09bd9aa49p-786, 0.0, 0.0, 0x1.9811051ae6a71p-63, 0.0,
     0x1.2939ae160efaap-496, 0x1.875457bd4b41dp-71, 0.0, 0x1.b6e373263f292p-557, 0.0,
     0.0, 0x1.787360485da4bp-910, 0x1.f2482dcff4f6fp-4, 0x1.6d2d982e9c4a9p-706,
     0x1.766037c8c3cccp-459, 0.0, 0.0, 0x1.5792f27b5a44ep-48, 0.0,
     0x1.748ca2c575247p-313, 0x1.2caa9f71a9f2ap-449, 0x1.8c5d822e16588p-763, 0.0,
     0x1.2dbb3e6b0a621p-570, 0x1.d73ab4b8aa695p-926, 0x1.9aeccd7f2e09ep-48,
     0x1.db1caf20a94abp-303, 0x1.273d474b8ee19p-259, 0.0, 0.0, 0x1.d38c8240d852p-519,
     0.0, 0.0, 0x1.52344fa0d23dep-941, 0x1.5591e4c5bc09dp-727, 0x1.3ec603565b551p-631,
     0x1.11ce905a6637fp-901, 0.0, 0x1.44f46e6d1ba09p-889, 0x1.8155e4b99f5d5p-863,
     0x1.64a259489c2cap-595, 0.0, 0.0, 0x1.59206af6fefedp-488, 0x1.5f1148e92fcd6p-378,
     0x1.eed09d8c15687p-728, 0x1.66566fa16b1dfp-134, 0.0, 0x1.4f3bb128f9c12p-507, 0.0,
     0.0, 0.0, 0x1.f36c61d74f5fbp-743, 0x1.4a7bf0362d4ccp-192, 0x1.2a207c82cae77p-980,
     0x1.9df493119c989p-560, 0.0, 0x1.4b0b6a93d8517p-888, 0x1.8c94c7c4e4bf3p-493,
     0x1.f6a6a75b13975p-833, 0.0, 0x1.5c0cbb9cd2394p-834, 0x1.e61ef9077d85cp-119, 0.0,
     0.0, 0x1.272e4296f3668p-326, 0x1.ac24a037af519p-571, 0x1.4ee0d3686569ap-484, 0.0,
     0x1.9e5572257bac8p-559, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.201890c1b5f4fp-425, 0.0,
     0x1.4edb0279fba6p-86, 0x1.5395da422f514p-580, 0x1.c2b600fe51a19p-730,
     0x1.891874f52c0fbp-894, 0.0, 0x1.556e933e24928p-584, 0x1.5ea7b6bc745f2p-99, 0.0,
     0.0, 0.0, 0.0, 0x1.3c97fe8f31cd7p-562, 0x1.5403172647549p-760,
     0x1.7dc9308c80d3cp-209, 0.0, 0x1.48f5a7cfc5117p-621, 0.0, 0x1.de14acaa4b14fp-512,
     0x1.634d8c690db76p-831, 0x1.ad710078a32a2p-143, 0.0, 0.0, 0x1.72790ad3192fp-45,
     0x1.dde1e2ce9d22ep-459, 0x1.17619d4225f8fp-14, 0.0, 0.0, 0.0,
     0x1.897757e8d6f15p-535, 0.0, 0x1.d1e0efe75498ap-37, 0.0, 0.0,
     0x1.984b9d4688ae6p-302, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f84d9893c9a8p-498, 0.0,
     0x1.c49fd3d5a3461p-225, 0.0, 0x1.20153c808a4ffp-437, 0x1.96286dd5fa7b4p-627, 0.0,
     0.0, 0.0, 0x1.1a85654989a6ep-395, 0.0, 0x1.a401610d93ad2p-588,
     0x1.0e25bd3112389p-159, 0.0, 0.0, 0.0, 0x1.e40219822fcd2p-804, 0.0,
     0x1.7893969c62c3cp-451, 0.0, 0x1.84f2cffd9f17bp-4, 0x1.f98ed4b5c9c42p-82, 0.0,
     0x1.282464b3a4925p-562, 0.0, 0x1.18b9e997e4e56p-420, 0x1.7eeaeb60bcfdep-261, 0.0,
     0x1.9cb7b6dcd40e3p-1003, 0x1.133e0ab28a519p-99, 0x1.51e1d05d07239p-552,
     0x1.73b2789444fep-212, 0.0, 0.0, 0.0, 0.0, 0x1.f501d6016b226p-498, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.14ba9635eb4c2p-313, 0x1.ae64f5b0ee4abp-402, 0x1.039069c07d836p-926,
     0.0, 0.0, 0.0, 0x1.ef4c456003afap-487, 0x1.64b134799d7ebp-688, 0.0, 0.0,
     0x1.309875d2214f3p-107, 0x1.49932c97e85afp-254, 0.0, 0.0, 0x1.7c5812a207f0cp-159,
     0x1.77b2ea39d0dc6p-105, 0.0, 0.0, 0x1.85a122c64dc22p-92, 0x1.48dc4fd8bf2a3p-1012,
     0x1.fa47ed1167b2p-663, 0x1.b99e9ce055a15p-320, 0x1.e27932eaf4205p-547,
     0x1.f328c21c0d547p-723, 0.0, 0x1.d6a073a1816a3p-551, 0x1.95b0e9e7ed94ep-493, 0.0,
     0x1.735eb1644ec65p-158, 0.0, 0x1.299ecfff37808p-893, 0.0, 0.0,
     0x1.fed9c3d3f5e1bp-246, 0.0, 0x1.5766e93c11702p-177, 0x1.f254a86460346p-770,
     0x1.aba4c810f0a3ap-743, 0.0, 0x1.b2358af9110edp-919, 0x1.e03bb84bf0576p-476,
     0x1.d9a9254299d01p-1007, 0x1.2b7be79a777dcp-311, 0x1.6c8c0f0bd002dp-412,
     0x1.89b032be7b8e1p-285, 0x1.e27240ca67f78p-83, 0x1.3c215e86a911dp-139, 0.0, 0.0,
     0x1.0fc2de6fea61ep-50, 0x1.6266d23ad1518p-498, 0.0, 0x1.01bb9123dca72p-607,
     0x1.06426b50aca95p-484, 0.0, 0.0, 0x1.062b66f34a962p-892, 0x1.dc4e571731b6fp-293,
     0x1.cbebc31eeeb36p-9, 0x1.3b3709da03801p-411, 0.0, 0.0, 0.0,
     0x1.336abb6550424p-823, 0x1.469fa2039edb9p-299, 0x1.13576bbcc0f12p-169, 0.0, 0.0,
     0.0, 0x1.b282ddee88eacp-683, 0.0, 0.0, 0.0, 0x1.65ed08949c6c7p-813, 0.0,
     0x1.1c14782ea3a88p-598, 0.0, 0x1.bf6fa99572976p-305, 0.0, 0x1.980154e2588d1p-965,
     0x1.e5dd90958f7e3p-630, 0x1.74a679db851e2p-379, 0.0, 0.0, 0x1.530701358e4c9p-997,
     0.0, 0x1.b9e851cd11f5bp-39, 0.0, 0.0, 0x1.4a9a6934838a2p-17, 0.0,
     0x1.4898ac8a1ea36p-330, 0x1.91598f59b9f7ep-1002, 0.0, 0x1.88ac20345784dp-858,
     0.0, 0.0, 0x1.7bf0e3fee4a26p-266, 0.0, 0.0, 0.0, 0x1.68509df6e5c46p-482, 0.0,
     0.0, 0x1.844f78db3188fp-330, 0x1.38579fd563245p-988, 0x1.4fab877b77ffp-137, 0.0,
     0x1.47a551b69fa86p-186, 0.0, 0x1.9eda7c5167107p-733, 0.0, 0x1.b0f87d9373585p-771,
     0x1.58540c991e8dap-492, 0.0, 0.0, 0.0, 0.0, 0x1.f5ae60939560dp-1003, 0.0,
     0x1.e2c8a4ae4ae3ep-17, 0x1.df36c46a153d2p-952, 0x1.362225954478ep-55,
     0x1.adb6b7adb9fbbp-898, 0.0, 0.0, 0.0, 0.0, 0x1.da9d926674953p-475, 0.0,
     0x1.e042342907468p-624, 0.0, 0.0, 0.0, 0x1.a59c103b7e6f1p-590, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8ca4d62a31c55p-645, 0x1.a227cd1df4241p-123,
     0x1.0b5a42e5b4cc5p-229, 0x1.26d776243f6a3p-597, 0x1.b3feb3c0febfep-733, 0.0,
     0x1.ef6f872af5be8p-339, 0x1.5e92cd2006f5bp-257, 0x1.8b8f0796b5a15p-105, 0.0, 0.0,
     0x1.a3d1519822b87p-373, 0x1.86c258d980d8cp-550, 0x1.c6ddc46e9c0dp-16,
     0x1.fac6802cecfb1p-822, 0.0, 0x1.e89971cbbe3b8p-495, 0.0, 0.0,
     0x1.eab3195d77b84p-74, 0x1.db0aa5875ecbp-706, 0x1.d67753a1669c2p-704, 0.0,
     0x1.c2e998dfef29fp-250, 0x1.997e4351018ebp-189, 0x1.1dd1b83187c9p-167,
     0x1.0ece3d68d4091p-289, 0.0, 0.0, 0x1.75ca3c2fb98b2p-496, 0x1.641bb39d8d308p-297,
     0x1.1a53fbad5952ep-390, 0.0, 0.0, 0x1.a52a15d2b07b9p-865, 0.0, 0.0,
     0x1.4e8198a668407p-435, 0x1.171b384fc97b8p-374, 0.0, 0x1.2b3c30d6d9c69p-147,
     0x1.1d2c4df693e21p-39, 0x1.69a07ddd55e45p-33, 0.0, 0.0, 0.0, 0.0,
     0x1.8657c5dbf2278p-387, 0.0, 0x1.c60010c32ba2dp-781, 0.0, 0x1.fb7bd081d547bp-881,
     0x1.2910ce6b06ab1p-800, 0.0, 0x1.513f621074963p-570, 0.0, 0x1.3baa2b71f74ddp-831,
     0.0, 0x1.b017abfdb7848p-958, 0x1.2e0bc87d47b83p-267, 0.0, 0.0,
     0x1.9fc4ad7e16524p-68, 0.0, 0x1.cf77bb3e244b4p-359, 0.0, 0.0, 0.0,
     0x1.20bd4cdc96ee5p-511, 0.0, 0.0, 0x1.419ff4c99e918p-896, 0x1.c21256c537bd4p-902,
     0.0, 0.0, 0.0, 0.0, 0x1.22fa4cf37de7ap-746, 0.0, 0x1.ae5faa7ef3e88p-855,
     0x1.bc6cd4d865c57p-5, 0x1.05ef088648f78p-765, 0x1.5531567e7c0e9p-859, 0.0,
     0x1.af20f7b3f4ac6p-584, 0.0, 0x1.f34fa0d29225ep-272, 0.0, 0.0, 0.0,
     0x1.b9b3d5fb1ba9cp-504, 0x1.9884d3621c89fp-145, 0.0, 0.0, 0x1.dbfc51c470c8bp-694,
     0x1.1f34aceaac3cap-918, 0x1.90f0e7fef4667p-138, 0x1.210b3360d0249p-765, 0.0, 0.0,
     0.0, 0x1.5464f4c78cb84p-581, 0.0, 0.0, 0.0, 0x1.70601f70086c7p-224,
     0x1.a1315735dd4c7p-153, 0x1.a475a5f0fa4e1p-384, 0.0, 0.0, 0x1.fc9e86aabb707p-867,
     0x1.e32659bb3b84bp-940, 0.0, 0x1.2171a5eab2868p-920, 0.0, 0x1.1674b2c28c3cdp-518,
     0.0, 0.0, 0.0, 0x1.80cedefea23c5p-895, 0x1.c60b3df55795bp-748, 0.0,
     0x1.548403f746654p-370, 0x1.9df001e6df25dp-190, 0x1.322214f22d8c6p-493, 0.0,
     0x1.b403875faeccap-760, 0x1.ad64d02a3111p-421, 0x1.19bd69a9e2f15p-993, 0.0, 0.0,
     0x1.cff5f8ccf0fe6p-836, 0x1.bd7ee3b2725c3p-935, 0x1.62503ab922d17p-124,
     0x1.26b81c8186afbp-977, 0.0, 0x1.8c1c7d1ded2e2p-781, 0x1.677922c82b2eap-891, 0.0,
     0.0, 0x1.1f7affcb37919p-66, 0.0, 0.0, 0x1.55f0d1dc43cccp-777,
     0x1.2ad2a3c832c9fp-669, 0.0, 0x1.95ee210adebp-650, 0.0, 0.0,
     0x1.faf0ef30765cap-698, 0.0, 0x1.58677bc5fbf2ep-637, 0x1.8c0b72c8258b3p-301,
     0x1.77f0652f48688p-862, 0.0, 0x1.a72bf6896ab4fp-825, 0.0, 0x1.f0e7c84895901p-901,
     0x1.445efce8d6a4bp-1013, 0x1.3e311ab43ed74p-530, 0.0, 0x1.c77f24fee9803p-906,
     0.0, 0.0, 0.0, 0.0, 0x1.39769816e58bfp-168, 0x1.6dc32f508c1b9p-524, 0.0,
     0x1.87e2cf408d988p-408, 0x1.2425db9ebe8f9p-875, 0x1.52d21fde56507p-78,
     0x1.d45318f9c15bfp-210, 0.0, 0.0, 0x1.d0dc45b8f3d02p-968, 0.0, 0.0,
     0x1.6a4047588a95bp-332, 0x1.a4a9cfd4bbfb3p-495, 0.0, 0x1.eb8c2505dd2acp-480,
     0x1.5490d6ebeeaaap-476, 0x1.f1c670f52cb11p-247, 0x1.72166db608b3ap-821, 0.0, 0.0,
     0.0, 0x1.4cd27c3567c5fp-808, 0.0, 0x1.17ab39cba2dfp-44, 0x1.d43248e119df6p-669,
     0x1.ae51b4aabffd5p-232, 0x1.ece71a02143adp-999, 0.0, 0.0, 0.0, 0.0,
     0x1.b368212c80f57p-148, 0x1.8109fcc5d91edp-50, 0.0, 0.0, 0x1.cf403837d3ce5p-213,
     0x1.bcc54486f271cp-786, 0x1.bdcc9a7bd2c7ep-912, 0.0, 0.0, 0x1.1108e1b0f5b64p-534,
     0.0, 0x1.72e10b67988fcp-121, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a48f2f7b6e82bp-5,
     0.0, 0x1.91ed7a698bf19p-52, 0x1.083741a4d8d66p-857, 0x1.0b2b7576d9f75p-460, 0.0,
     0.0, 0x1.df70e02a20a09p-256, 0x1.c06e4faaf767ap-593, 0x1.d4268097a3c0ep-580,
     0x1.04f4669b62d74p-442, 0x1.282f4e23bfe0bp-844, 0x1.47d4422fc060dp-55,
     0x1.8c1060409d2f9p-902, 0x1.3ba3fba15b2a4p-626, 0x1.9c6575567f7e5p-1000,
     0x1.4e890285c4d97p-798, 0x1.eb18fb855a9e1p-598, 0x1.da9a0f01f2cefp-635,
     0x1.8a973192b8251p-274, 0.0, 0x1.aafeadef4ded5p-197, 0x1.c214b0ab43419p-304,
     0x1.bf860b0a25f51p-665, 0x1.7aedfb5581877p-264, 0x1.eb1f8fe966852p-263, 0.0,
     0x1.b5d175b88f855p-978, 0.0, 0x1.30a33e82e087fp-693, 0x1.b22eb0ce41fd9p-469,
     0x1.af9adbb9f0ebfp-588, 0.0, 0x1.e4675e9663222p-524, 0.0, 0x1.17898f879318ap-449,
     0.0, 0x1.e9318e656a7a5p-144, 0.0, 0.0, 0x1.2fced987bc4d9p-800, 0.0, 0.0, 0.0,
     0x1.7d6fd4d46069fp-785, 0x1.81ef20449c668p-273, 0.0, 0x1.c8c4f98ca48p-747, 0.0,
     0x1.6aabdeb2fe864p-567, 0x1.f3b303c01d8b7p-401, 0.0, 0.0, 0.0,
     0x1.2c706601f81e5p-639, 0x1.4e71d3a0999fbp-267, 0.0, 0x1.449644487a0b7p-583,
     0x1.7e96c7645d461p-412, 0.0, 0x1.9520500e32907p-186, 0x1.657f8aff85afbp-814, 0.0,
     0.0, 0x1.52c233fa86afap-733, 0x1.3bc9832a6d60bp-499, 0.0, 0.0,
     0x1.8f44afed06adap-564, 0.0, 0.0, 0x1.9b0715af50e9bp-396, 0x1.a03708713db11p-825,
     0.0, 0x1.4b1c3e8b077b8p-210, 0x1.a4f8df7e5f54fp-88, 0x1.b22d041c353f9p-924, 0.0,
     0.0, 0x1.0e2ffd2fb6e08p-595, 0x1.b9134a1052734p-38, 0x1.8ae3f1f094a8bp-565,
     0x1.3274075d52b6cp-394, 0x1.e3b41ebf27386p-563, 0.0, 0x1.020e94bd245afp-234, 0.0,
     0.0, 0.0, 0.0, 0x1.ce6767ce3cd6ep-572, 0x1.11385145c0b71p-131, 0.0, 0.0,
     0x1.8969354fc76ebp-283, 0.0, 0x1.23ba25554098cp-819, 0.0, 0.0, 0.0,
     0x1.71a41f823e9fp-158, 0x1.4c48df9ad9488p-58, 0x1.d492e42c84ce4p-167, 0.0,
     0x1.e5297a5cafab8p-789, 0x1.585bb6709f57ep-393, 0.0, 0.0, 0x1.8d24d1aa325f4p-462,
     0x1.3e348201800ecp-100, 0.0, 0x1.782127a33c592p-858, 0.0, 0.0, 0.0,
     0x1.9796f7ce271d8p-626, 0.0, 0x1.3e1a71ba3b3d1p-934, 0.0, 0.0,
     0x1.2f043bae8ba0fp-110, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.373e5d8c4301cp-363, 0.0, 0x1.41cbdc2f6e7a2p-967, 0x1.4cae1a4e454p-21,
     0x1.274b8cc2743ebp-702, 0x1.2319345a11384p-562, 0x1.ce23b6495b7e5p-743, 0.0, 0.0,
     0x1.81ca187d86da6p-505, 0x1.4921c025a227dp-74, 0.0, 0.0, 0x1.b3552b863f204p-756,
     0.0, 0x1.def297f3cf89p-93, 0x1.bf9e0cf87e287p-494, 0.0, 0.0,
     0x1.62ae9489e9c68p-313, 0.0, 0x1.cd66d3f66e5b6p-861, 0x1.c5ad0ef7f25bdp-184,
     0x1.8c7752535e702p-277, 0.0, 0.0, 0.0, 0x1.e68d0098a3bbep-8,
     0x1.243c52ec2685fp-591, 0x1.c4c43255a6f8fp-418, 0x1.a67f62e1d94fp-658, 0.0,
     0x1.1651ef0ff95fbp-60, 0.0, 0.0, 0.0, 0.0, 0x1.4ef1823f6c078p-338, 0.0,
     0x1.e1b797d6aaadcp-695, 0x1.022864958c487p-142, 0.0, 0.0, 0.0,
     0x1.865823e580904p-909, 0.0, 0x1.c46038dc486b7p-609, 0x1.cc9bd4fc1dd46p-755,
     0x1.fa8f737400f79p-44, 0x1.5c22197fcf43ap-258, 0x1.8aedce80b16bap-941,
     0x1.385a1b2c1d37ep-383, 0.0, 0x1.28b59301ca333p-584, 0.0, 0x1.5f17a1c1ae081p-457,
     0x1.0591dd876e81dp-420, 0.0, 0.0, 0x1.a2ccb4901a89dp-903, 0.0, 0.0,
     0x1.c3d470eb24722p-843, 0x1.c034ebe079b9fp-514, 0x1.e17cbf53518bfp-848,
     0x1.6af6e327587fep-808, 0x1.5470270d88a1fp-180, 0.0, 0x1.347a8f54610abp-744, 0.0,
     0x1.d53cc4d195adp-879, 0x1.6a815d6815ba7p-207, 0.0, 0.0, 0x1.f59ffe71fed07p-865,
     0x1.647a2211958c4p-665, 0.0, 0x1.f2e8b339b83ecp-656, 0x1.e4f3de98581c5p-166,
     0x1.4805fb09f1b35p-753, 0.0, 0.0, 0x1.b478d03fe8d14p-644, 0.0,
     0x1.5eb05e9ecd67dp-387, 0x1.0cbeb32ccdc91p-610, 0.0, 0x1.f98c025069677p-163,
     0x1.1ed7b9140b111p-136, 0x1.7acd1a7a049c5p-282, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7b3227d7be19fp-594, 0.0, 0.0, 0x1.26e30390ec441p-952, 0x1.2f38e00708b6ap-357,
     0x1.9ed224cc6fe3ep-174, 0x1.45dcbbcb5884ap-338, 0.0, 0.0, 0x1.2c37c80039af7p-524,
     0.0, 0x1.c92dfa9ecb585p-282, 0x1.cfbd86975019bp-1014, 0x1.ef9d1aad9e39bp-822,
     0x1.a70895568d9a3p-826, 0.0, 0x1.d340fb970ba95p-238, 0x1.d34b0e3159e5bp-988, 0.0,
     0x1.6f9acd4f4f50ep-756, 0x1.245a37463a3f1p-941, 0.0, 0x1.9b70de2b6ed27p-555, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e423e5596cdc8p-389, 0.0, 0x1.bd39b132eb012p-129,
     0.0, 0x1.3fba9cbab019p-267, 0x1.f07c30d87d318p-351, 0.0, 0.0,
     0x1.99937f4edf519p-336, 0.0, 0x1.9ef6e7105c2ddp-676, 0.0, 0x1.00a76b859af9dp-480,
     0.0, 0.0, 0x1.23540428940e7p-770, 0x1.dee1eea54a4c4p-144, 0x1.615b10484c494p-259,
     0.0, 0x1.9b73b057ab436p-294, 0.0, 0.0, 0x1.0c5797b3ee8f8p-461,
     0x1.05447c8b025dap-278, 0x1.e165f7a2cfd0ep-687, 0x1.ee4daffb9b447p-637, 0.0, 0.0,
     0x1.5bb7c74e2442dp-127, 0x1.0ca600a747c4dp-488, 0.0, 0x1.7b986878da9a5p-72,
     0x1.f7cbf8610e244p-769, 0.0, 0.0, 0x1.820a2a1135d33p-891, 0.0,
     0x1.b15c211a155b3p-76, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.999a37247220cp-128, 0.0, 0x1.d01f91f4dbe8ep-122, 0x1.83d3e111fe296p-970,
     0x1.ed7a396bb7d4cp-945, 0x1.816986c960a3dp-574, 0x1.0719a54cd4982p-427, 0.0,
     0x1.45ecb80b3632cp-748, 0x1.37bffd670b36ep-952, 0.0
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
            tmp1 = Sleef_erfd2_u10avx2128(tmp0);
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
    printf("Sleef_erfd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_erfd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
