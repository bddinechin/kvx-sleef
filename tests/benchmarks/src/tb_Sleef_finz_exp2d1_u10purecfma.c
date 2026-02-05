/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d1_u10purecfma.c --function \
 *     Sleef_finz_exp2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.267725d1220cep-1006, 0x1.e7e6d3d0bd916p-406, 0x1.6ea8c39dc9ec5p-727,
     0x1.fa2f5614d2fe5p-323, 0.0, 0.0, 0x1.967dd65c07f07p-290, 0.0, 0.0, 0.0,
     0x1.217ff7715324p-856, 0.0, 0.0, 0x1.1387d5a62964ep-148, 0.0,
     0x1.cb54b0bb3ad16p-791, 0.0, 0x1.6cbefd168f62ep-329, 0x1.ccb1cb2a29a38p-838,
     0x1.3b8d16797be0dp-285, 0.0, 0.0, 0x1.6533ee3e72646p-916, 0.0,
     0x1.af1d8aca275b2p-925, 0x1.e2f70667ad5a6p-426, 0.0, 0.0, 0x1.246fe19705e23p-421,
     0.0, 0x1.cb29f0fc7f3bcp-336, 0.0, 0x1.76398e870c114p-660, 0x1.a966b9bcca465p-843,
     0.0, 0.0, 0x1.00a5264defa48p-656, 0x1.385a4a4685228p-90, 0x1.d740be8de712fp-992,
     0x1.424142e6d85p-269, 0.0, 0x1.52f3cc1cc0f11p-331, 0x1.b6403ee735341p-963, 0.0,
     0.0, 0.0, 0.0, 0x1.9d473b36de976p-52, 0.0, 0.0, 0.0, 0.0, 0x1.5040afaa4c2e8p-519,
     0.0, 0.0, 0.0, 0x1.1ba6cb8bc6fb1p-391, 0x1.6282afa57b3a4p-920, 0.0, 0.0,
     0x1.5407cf2a7071ap-158, 0x1.2b773c9696279p-968, 0x1.6d7e2ee8e7943p-963,
     0x1.fbf1a5f0b164dp-274, 0.0, 0x1.509eda64dcc74p-461, 0x1.e56b41b767cbdp-392, 0.0,
     0.0, 0.0, 0x1.9f4e733d93508p-46, 0.0, 0.0, 0x1.3b21b343aa4f1p-562,
     0x1.1549b3c237608p-774, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ffab78c79a4d1p-856, 0.0,
     0x1.7cba3dfe814a9p-427, 0x1.03993cffa3b0cp-291, 0x1.6a924c9c21f77p-511, 0.0,
     0x1.a9a7f9810e292p-392, 0.0, 0x1.abaf956ed3138p-530, 0.0, 0x1.8a4631952cd61p-696,
     0x1.997f33a8e1b86p-283, 0x1.0cc38720d3841p-1007, 0x1.177e201865716p-577, 0.0,
     0.0, 0.0, 0x1.0d3849022fbe6p-83, 0.0, 0x1.821251ee884ffp-302,
     0x1.a10bf4027e518p-859, 0x1.1c016f5995826p-988, 0.0, 0x1.3d9cf5a4c85f1p-822, 0.0,
     0x1.375902939732p-768, 0.0, 0.0, 0x1.96a64c1132adap-368, 0.0,
     0x1.751d4382c5022p-300, 0x1.8a4d37c3a3516p-979, 0.0, 0.0, 0.0,
     0x1.760af6ee33d96p-329, 0.0, 0.0, 0.0, 0x1.18ddb185d20a5p-846,
     0x1.6f517705d8c89p-446, 0.0, 0.0, 0.0, 0x1.ef5c9edd57b65p-271, 0.0,
     0x1.ba70151bcd36cp-976, 0x1.0c1f046b909a1p-639, 0.0, 0x1.097097f978206p-718, 0.0,
     0.0, 0x1.ca0f3d8da5c09p-174, 0.0, 0.0, 0x1.ea74b790cda13p-755, 0.0, 0.0,
     0x1.8ae0f0c6d95c6p-528, 0.0, 0x1.e7cdd2e420eddp-380, 0x1.e525b242007bap-402,
     0x1.f8e82250bb564p-359, 0x1.9fae4aa5918c7p-655, 0.0, 0.0,
     0x1.2e242e822fdddp-1016, 0.0, 0.0, 0.0, 0x1.afe0436640c3ap-558, 0.0, 0.0,
     0x1.3af23da9e4548p-1007, 0.0, 0x1.78e9cdf35a2eap-959, 0.0,
     0x1.7ac664552ffabp-452, 0.0, 0.0, 0.0, 0.0, 0x1.45dc9f573ce99p-546,
     0x1.b5237b910e4a8p-472, 0x1.9a34a77013a65p-50, 0x1.eca867a99119cp-768, 0.0,
     0x1.f7dfb6424539ap-665, 0.0, 0x1.ae84d5aba1985p-188, 0.0, 0.0, 0.0,
     0x1.cf30dc1ae623fp-507, 0.0, 0.0, 0x1.2d3c46040ad6cp-1000, 0.0, 0.0,
     0x1.aa271b2cfee89p-86, 0.0, 0x1.9ac15ce46c8e3p-611, 0.0, 0x1.63b4807edc03cp-66,
     0x1.6571f7662c801p-485, 0x1.0e91922a23f1p-432, 0.0, 0.0, 0x1.0277ff326011bp-728,
     0.0, 0.0, 0.0, 0x1.26a132bb6b864p-212, 0x1.2a24254ee5969p-521, 0.0, 0.0, 0.0,
     0.0, 0x1.f3dfa5f6a91ddp-910, 0.0, 0.0, 0x1.29c3f82b446fbp-361,
     0x1.11ae26d18e1d4p-193, 0.0, 0.0, 0.0, 0x1.4c9af653b3ec8p-166, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.79e587165aeeap-777, 0.0, 0.0, 0.0, 0x1.4dafe367cdbd8p-9, 0.0,
     0x1.2debebb3bee44p-67, 0.0, 0x1.8385e92aa317dp-259, 0.0, 0.0, 0.0,
     0x1.0252a667a6446p-744, 0x1.5bd1b053569b9p-940, 0x1.243770edcfa14p-614, 0.0, 0.0,
     0.0, 0.0, 0x1.2ae5896b8cd71p-324, 0x1.e3bf817bd1099p-560, 0x1.0a267cd6e969ap-103,
     0x1.3fb90a13834cfp-178, 0x1.4d66ee44d0a69p-96, 0.0, 0.0, 0x1.e8a43d0fd5bd1p-451,
     0x1.170bf8fe02cd3p-799, 0.0, 0.0, 0.0, 0x1.8026f63330f3ep-288, 0.0,
     0x1.459a704d0e39bp-273, 0x1.9c4cf4bf95072p-931, 0x1.447941ffca728p-654, 0.0,
     0x1.ab1be64678a0bp-553, 0x1.3c30c825a7079p-916, 0x1.e4e97f54fb808p-976, 0.0, 0.0,
     0x1.62e72add61edcp-609, 0.0, 0.0, 0x1.211d7d1c606a4p-558, 0.0, 0.0,
     0x1.4ac9e3a098bb9p-693, 0.0, 0x1.58ad9390743b5p-380, 0.0, 0x1.39cdaf19e594dp-564,
     0.0, 0x1.125b09d3ea737p-786, 0x1.e5aec494e8db4p-158, 0.0, 0.0,
     0x1.244637a1ca4aap-436, 0.0, 0x1.d6ca43f226574p-955, 0.0, 0.0, 0.0,
     0x1.2abc146d7747fp-727, 0x1.c92657bb742bep-1009, 0.0, 0x1.e07065e3b40bap-556,
     0x1.75faf3aab36ffp-288, 0x1.fac6ff1071f2p-344, 0.0, 0x1.c56ab26c8dd42p-49,
     0x1.25a36177d9eacp-940, 0.0, 0x1.9228247c2067ep-583, 0x1.36edaa59e3c31p-488,
     0x1.517a61022395ep-843, 0.0, 0.0, 0.0, 0x1.82f80f88428d5p-121,
     0x1.8e5cf3e0c7ad5p-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.649f6c544100bp-523, 0x1.eec61bef708p-158, 0.0, 0x1.3b2de31572b88p-36,
     0x1.8b1f442656023p-379, 0.0, 0x1.712f759158cc6p-993, 0.0, 0x1.e09560fa082d7p-293,
     0x1.45ede18fb934ep-715, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.231d47638cd4cp-833,
     0x1.a53e651d17605p-679, 0x1.bed09f0adb6e6p-90, 0x1.46aeba45cf7e4p-999,
     0x1.99a00a6d83bc9p-54, 0.0, 0.0, 0x1.177b731ec6963p-420, 0.0, 0.0,
     0x1.6ddfaf864d161p-889, 0x1.c6e530be39e0fp-689, 0x1.7aad8744583ap-809,
     0x1.162761c38fdd6p-640, 0.0, 0x1.67ff7b108d2fep-831, 0x1.88648a9fa0e26p-166,
     0x1.133733f2b509cp-689, 0.0, 0.0, 0.0, 0x1.601f9b4eb28e7p-580,
     0x1.f705a69d53b2p-279, 0x1.c2068cddc76fbp-173, 0x1.7a9578186d6efp-164, 0.0, 0.0,
     0x1.1da0347bc4c42p-73, 0.0, 0x1.69640d000048cp-167, 0x1.7dd30a6331667p-711, 0.0,
     0.0, 0.0, 0x1.bc664b7bda158p-329, 0x1.ae68436edfd31p-75, 0x1.01602607814c9p-309,
     0x1.6b601cdf2d3d4p-277, 0.0, 0x1.428bdeca3fee7p-56, 0x1.b8eb111ac8124p-574,
     0x1.d46c73c5a712ep-606, 0x1.fc98105f1df37p-752, 0x1.da844db417f9ap-377, 0.0, 0.0,
     0x1.537b23c323babp-258, 0x1.70b628e07fab7p-558, 0.0, 0.0, 0x1.b1c87005818c8p-917,
     0.0, 0x1.57df6facee3ecp-31, 0.0, 0.0, 0.0, 0.0, 0x1.e4ea96b3290f9p-942, 0.0,
     0x1.a594c1a6c159p-316, 0.0, 0x1.dab35a6b580f4p-141, 0.0, 0x1.1d8c87cea4f0ap-18,
     0.0, 0x1.b2774a487454ap-727, 0.0, 0.0, 0x1.20a96d883e4a9p-768, 0.0, 0.0,
     0x1.5bcacf380c714p-925, 0.0, 0.0, 0x1.d4f24e99c3d49p-1016,
     0x1.5fec529832d59p-724, 0.0, 0x1.57e4baf5fab25p-313, 0x1.9ffaf8971f8p-434, 0.0,
     0x1.f89106198e2d9p-856, 0x1.70fe4f15a55d9p-1015, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e75393575192ap-982, 0.0, 0.0, 0x1.bd57db9248124p-119, 0.0,
     0x1.d2a8d3e5c038p-999, 0.0, 0.0, 0x1.72fcb01ea462dp-681, 0.0, 0.0, 0.0,
     0x1.d0997d3e1c5c7p-514, 0.0, 0x1.aee7f6deaa124p-232, 0x1.c6d67c16057b6p-109,
     0x1.e4c0153d87ee4p-446, 0x1.39da8040b8076p-705, 0x1.9f5f8a653035cp-225,
     0x1.807fdd8286442p-971, 0x1.cdba4683e646bp-374, 0.0, 0.0, 0x1.e34a786c3079ap-504,
     0x1.702194608b498p-956, 0.0, 0x1.0cd0be8600c65p-447, 0.0, 0.0, 0.0, 0.0,
     0x1.b85a32c8fdd65p-699, 0.0, 0.0, 0x1.633f7533f119fp-587, 0.0,
     0x1.579ccdd40993ap-473, 0x1.4e80d49472be3p-985, 0.0, 0x1.e53f78863aa9ep-806,
     0x1.3f42d11b0a182p-871, 0x1.9e788a3c0e098p-613, 0.0, 0x1.c72d69e2c89dep-879, 0.0,
     0x1.cd79652e83a15p-841, 0x1.3c8bb09c3a06fp-38, 0.0, 0x1.281008f1dc82p-568,
     0x1.7c5f61d6f96e1p-393, 0x1.54a53153aaf8dp-457, 0.0, 0.0, 0x1.c245147b84143p-721,
     0x1.e50a9bde3d45bp-591, 0.0, 0.0, 0x1.d27a6bdba939bp-630, 0.0,
     0x1.1631bf7bd257p-378, 0.0, 0x1.89b29927ec07cp-490, 0x1.94f0c339cd64bp-300,
     0x1.2583b26e9b901p-815, 0x1.9dcde6a7bbaaap-723, 0.0, 0x1.87ab2f8bde27dp-237, 0.0,
     0x1.8710f9cef47fp-301, 0.0, 0x1.17a96fb0bd324p-390, 0.0, 0x1.ed455db8c3ae5p-504,
     0x1.e90e54efe3edp-460, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c619153cde9cbp-743, 0.0,
     0x1.89b39d8109d8ep-813, 0.0, 0x1.4ea674e66f4c9p-760, 0.0, 0.0, 0.0,
     0x1.ad8e8839c0845p-849, 0x1.5ba7ec470ccbfp-1014, 0x1.cef509074abc7p-50,
     0x1.bb19108c202dcp-63, 0x1.35e591666e588p-350, 0x1.96d5be00b2128p-835,
     0x1.2c804e5a02d11p-990, 0x1.01947d4ae36c3p-600, 0x1.1871f84e396e6p-238, 0.0, 0.0,
     0x1.e3d615618ba7dp-63, 0.0, 0x1.d4215de199c22p-183, 0x1.2682b62861d9cp-21,
     0x1.58140d5794f0ep-558, 0x1.a229758bb84bcp-669, 0x1.7d46045ff30dfp-173,
     0x1.5f4e8a8a767b4p-680, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b8c733fe5201p-346, 0.0,
     0x1.1154de909427ep-271, 0.0, 0.0, 0.0, 0x1.295990b241b4p-722,
     0x1.3606434ee8c32p-351, 0x1.6940484d9a676p-698, 0x1.5806f8077e90cp-857,
     0x1.5b503185512bcp-736, 0.0, 0x1.c819e43b2939dp-10, 0.0, 0x1.8dd23713a5697p-905,
     0.0, 0.0, 0x1.ccc30decf399dp-373, 0.0, 0x1.40e3c5dde2799p-383,
     0x1.607abe91bd37dp-586, 0.0, 0.0, 0.0, 0x1.7f3745010c82fp-262, 0.0, 0.0, 0.0,
     0x1.9bb0bc4a0d1cap-899, 0x1.c7d476ddbdddbp-945, 0x1.0c0d732b36b43p-891, 0.0,
     0x1.50301048ab0f5p-566, 0x1.3a0de982a1ffp-736, 0.0, 0.0, 0.0, 0.0,
     0x1.c40a99cb5ff08p-549, 0x1.61345cb9177e4p-338, 0x1.3ff32ed99f6e7p-151, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cfaac6a7a97e7p-330, 0x1.fdc33bb062f7cp-327, 0.0, 0.0,
     0x1.2fd6e0e2377p-787, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15a2ed75e3c6fp-445, 0.0,
     0x1.549e5c6deb612p-321, 0x1.86621ba87a1c8p-32, 0.0, 0x1.db029be346baep-1021,
     0x1.64a707ec0ea9bp-52, 0.0, 0.0, 0x1.2a7c510d92503p-442, 0x1.60515291146e3p-979,
     0x1.5e10c0916bdd7p-205, 0.0, 0x1.70fdc5635f011p-70, 0x1.8ac923564d075p-804, 0.0,
     0.0, 0x1.7c12a4d2610cep-682, 0x1.cc5f303ea9906p-958, 0.0, 0.0, 0.0,
     0x1.95acdb07e542ep-520, 0x1.d108acb975d22p-535, 0x1.cc897f65244fcp-627, 0.0,
     0x1.f6fc2bc4d7572p-202, 0.0, 0x1.d9c497bdda883p-61, 0.0, 0x1.abf1d7c98b4adp-495,
     0x1.a26703154e156p-132, 0.0, 0x1.31bd41320719fp-532, 0.0, 0x1.1f9ddaa0c303dp-407,
     0x1.6b8f6aeb5b89dp-832, 0.0, 0x1.da7c3e331fbf6p-243, 0.0, 0x1.10be8bdbc369ap-819,
     0x1.9365995ab4a3ap-904, 0x1.1b07527b6dfe1p-798, 0.0, 0x1.7f0f26083e37dp-961, 0.0,
     0.0, 0.0, 0x1.223049975ebb9p-539, 0.0, 0.0, 0x1.be2d22e999823p-26,
     0x1.b498c780023e5p-911, 0.0, 0x1.89d14234ab34ep-717, 0x1.f7516319157e3p-419,
     0x1.48d3a7c5e3223p-965, 0x1.e12d18cc834b5p-826, 0x1.39f8e1a3a59ep-700,
     0x1.4875e00a1ec7ep-865, 0x1.4eefdf26c8df1p-515, 0x1.86ede1c9fdc84p-894, 0.0,
     0x1.36309e544ea7cp-37, 0x1.ca57bba1d001ep-720, 0.0, 0x1.08736519b4b75p-529, 0.0,
     0.0, 0.0, 0x1.447747db4f9e9p-601, 0x1.ccf59ca82757fp-948, 0x1.64855e189e52bp-482,
     0.0, 0x1.1c8f45eca5174p-153, 0x1.e08aa5b829d13p-739, 0x1.f0fc62a717e95p-249,
     0x1.19d9c50b0c5bap-711, 0.0, 0x1.a9bde86cdacaep-183, 0.0, 0x1.54bd351a4a9e4p-290,
     0.0, 0x1.56b37e1e8e6dp-837, 0.0, 0x1.ff567a1eeaf9bp-402, 0.0, 0.0,
     0x1.3f9a98a54e703p-873, 0x1.7fbc786f95b96p-282, 0x1.dabda84168521p-401, 0.0, 0.0,
     0.0, 0.0, 0x1.93393f281004cp-276, 0x1.8be5303aa8dcdp-978, 0x1.08a949564271ap-369,
     0x1.e2be7ffdba015p-928, 0.0, 0x1.d1935b3291142p-633, 0.0, 0x1.1e49df7efbc27p-907,
     0x1.6a9425367bd6p-610, 0x1.9a85233a8a75ap-90, 0.0, 0.0, 0x1.36bcc69de977bp-176,
     0x1.a61f7b6456f51p-578, 0x1.999232d815d1ap-427, 0x1.0af56fd553567p-554,
     0x1.146fad6d32066p-621, 0.0, 0.0, 0.0, 0x1.82eb97219b53p-463, 0.0,
     0x1.1c555b7be27b4p-300, 0.0, 0x1.ea1b03d156b0ep-488, 0.0, 0.0,
     0x1.959af2679f60bp-907, 0.0, 0x1.fcc547357ddb8p-995, 0.0, 0x1.1ab0645e3397cp-55,
     0x1.dea4ad5968457p-955, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1cb607ff7d7b2p-458,
     0x1.6c50392d1d8aep-312, 0.0, 0x1.29c9393b354a1p-14, 0.0, 0.0, 0.0, 0.0,
     0x1.df27cb8d3a171p-153, 0.0, 0.0, 0.0, 0x1.506fbf4d30008p-69, 0.0,
     0x1.c506694424a65p-969, 0.0, 0.0, 0x1.1f1f0e68b9174p-833, 0.0,
     0x1.4643d7864252fp-934, 0x1.22610e884de76p-235, 0x1.bc005f48992a1p-709, 0.0, 0.0,
     0x1.181bdd71bdd3ap-711, 0.0, 0x1.14ac076ecc168p-922, 0.0, 0x1.34e2a097ba73p-554,
     0x1.6b4fdede872bbp-546, 0.0, 0x1.40b0f054a2b3dp-576, 0.0, 0x1.c6f2e71f07dd6p-817,
     0.0, 0x1.bac42f3de3fp-466, 0x1.aa5adc8799f24p-579, 0.0, 0x1.31afcf2f636b6p-739,
     0x1.a36b340e47cfcp-801, 0.0, 0.0, 0x1.055ab328bc9bep-186,
     0x1.a0050ba9232b8p-1005, 0.0, 0x1.7d63e9c51e45bp-921, 0.0,
     0x1.82870c349ad7ap-466, 0x1.0f24c237d181bp-428, 0x1.854e7ee981e17p-508,
     0x1.6e9671f95aecbp-159, 0.0, 0.0, 0.0, 0x1.22b1f7f336906p-948,
     0x1.75446ec026f09p-214, 0x1.d3e348c08a3c5p-130, 0.0, 0.0,
     0x1.446ce2722c0b4p-1008, 0.0, 0x1.d70eef8f0759fp-205, 0.0, 0.0, 0.0,
     0x1.1769f653ccc38p-462, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.767cb487bd6d4p-984, 0.0, 0x1.9c14277d021e9p-746, 0.0, 0x1.611b22fcbc22cp-493,
     0x1.a56cb57930d1fp-266, 0x1.fc3383453bd51p-651, 0.0, 0x1.3cbb1f2ac38f4p-185, 0.0,
     0.0, 0.0, 0x1.8b2ab553ac9fdp-542, 0.0, 0x1.be4708050da59p-532,
     0x1.186159a6d2e2ap-297, 0x1.ef69cdbc075f3p-953, 0x1.631ea8f4377b7p-587, 0.0, 0.0,
     0.0, 0.0, 0x1.75e40d68f405fp-941, 0x1.29c13f2509d34p-977, 0x1.00239cec9503cp-118,
     0x1.222d3d851089dp-362, 0x1.d101399d2c90ep-404, 0x1.bfe9847c8ab44p-225,
     0x1.5765ee0929fb7p-85, 0.0, 0x1.3c4c60945ce62p-550, 0.0, 0x1.46545c533be6ep-203,
     0x1.98f3230a16ff7p-101, 0.0, 0.0, 0.0, 0.0, 0x1.3306532c6733fp-370,
     0x1.34bd73a36974fp-575, 0.0, 0.0, 0.0, 0x1.a8b3a6bd477c8p-448, 0.0, 0.0,
     0x1.8822ccff6721bp-782, 0.0, 0x1.1439acb0166e7p-969, 0.0, 0.0, 0.0, 0.0,
     0x1.e4d66af52ebap-91, 0.0, 0.0, 0.0, 0.0, 0x1.45ad72041d88ap-500, 0.0,
     0x1.9e0403ed3112fp-661, 0x1.e02afea3c64f1p-705, 0.0, 0x1.06cac43de18c8p-264,
     0x1.5e41434624ba2p-133, 0x1.0f110d5a5ff23p-321, 0.0, 0x1.6f94e602a0df9p-794, 0.0,
     0.0, 0.0, 0.0, 0x1.3ce302b5f74bcp-366, 0x1.e14fc4e321467p-830,
     0x1.73ea69025be3ap-912, 0x1.083dc91c2dcf3p-718, 0x1.580bd0cd794fap-134,
     0x1.a3ca2f0959f68p-292, 0.0, 0.0, 0.0, 0.0, 0x1.31dca59d3c1e7p-978,
     0x1.de2bd3141052fp-788, 0.0, 0x1.d6386a4be115cp-542, 0x1.e3772ed932f93p-86,
     0x1.9157fed9f01p-1002, 0x1.73a8f3691dfa5p-849, 0x1.485eb856f8415p-972, 0.0,
     0x1.9664ca4cc4f5cp-606, 0x1.0045e7ed9457ap-615, 0.0, 0x1.5dd10cf2e47cbp-214, 0.0,
     0x1.4bbc9c1e44959p-936, 0.0, 0.0, 0x1.eee69e877ecd5p-490, 0.0, 0.0,
     0x1.427002f10f8d5p-65, 0x1.d8a363f7e8da9p-410, 0.0, 0x1.9bee147ea425fp-15, 0.0,
     0.0, 0.0, 0.0, 0x1.777d395d9ee24p-1018, 0.0, 0x1.d94599b41d7b8p-752, 0.0, 0.0,
     0.0, 0x1.35c841764e205p-754, 0x1.4515381903695p-228, 0.0, 0x1.f118f37721c54p-449,
     0x1.0a4ecae116339p-69, 0.0, 0x1.757a9ad90dad4p-557, 0x1.7d5c591d81407p-72,
     0x1.25f778c94c296p-146, 0x1.0e8e692e32226p-715, 0.0, 0x1.7851096f71a6bp-321,
     0x1.3304f081c4e1fp-430, 0.0, 0x1.96d2e1678e897p-453, 0x1.0b7c4c9df54d6p-204, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b45143a6c4691p-523, 0x1.42d70ef382a2bp-448, 0.0,
     0x1.5b45587ab4bcdp-981, 0x1.c0690281464f3p-393, 0x1.fdf030a95a34ap-159, 0.0,
     0x1.85e410f87bf55p-227, 0.0, 0x1.d1bb8520dc767p-790, 0x1.ed02bd9219249p-900,
     0x1.aad1b85c3d369p-8, 0.0, 0x1.826f66c6bbc3ep-348, 0x1.7042502a884a8p-993, 0.0,
     0.0, 0x1.13fa0defa6a6p-457, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a4d9f1ffac82p-115, 0.0,
     0x1.d699d9fa2e49ep-265, 0.0, 0x1.fc1ebb8a185bdp-599, 0.0, 0.0, 0.0,
     0x1.8c514e6f76872p-742, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4dd00bfe7c237p-765, 0.0,
     0x1.89bc16082decbp-39, 0.0, 0x1.bf0511d64a15bp-931, 0.0, 0x1.33079fd3e5a3ep-803,
     0.0, 0x1.901d43ff9c86ep-515, 0x1.a5eea2dd69282p-721, 0x1.d8902102f001ap-724, 0.0,
     0.0, 0x1.e4d0f66fb1b5dp-612, 0.0, 0.0, 0.0, 0.0, 0x1.39a92915a96a8p-35, 0.0,
     0x1.f91b0f683a548p-696, 0x1.f4e8cf3a70cc5p-585, 0x1.8f9bf58d04062p-239, 0.0,
     0x1.5514eca71247cp-969, 0.0, 0.0, 0.0, 0.0, 0x1.7df7eb9f2b4p-685, 0.0,
     0x1.ad6fa7c24d95ep-461, 0.0, 0.0, 0.0, 0.0, 0x1.01e9d7ad6d32bp-695,
     0x1.1a6267a51736ep-957, 0x1.4aedc468d7bd3p-131, 0.0, 0.0, 0x1.8afa367375fc4p-472,
     0x1.04962d2e96f61p-306, 0x1.34ab70503ea1bp-731, 0x1.47052c68f28f9p-645, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_exp2d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
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
