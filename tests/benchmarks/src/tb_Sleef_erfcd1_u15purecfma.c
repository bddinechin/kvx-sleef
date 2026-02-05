/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcd1_u15purecfma.c --function \
 *     Sleef_erfcd1_u15purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.89c0d241e125ep-319, 0.0, 0x1.133decdb95f98p-258, 0x1.8bbff665638bdp-296,
     0x1.e6e3c19ded58fp-809, 0.0, 0x1.e7ecd78f28284p-255, 0.0, 0x1.780a215305b45p-973,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd667bab9d601p-853, 0x1.e07781437100fp-731,
     0x1.20ed44531f884p-988, 0.0, 0.0, 0.0, 0.0, 0x1.4f5f9fc112e38p-441,
     0x1.2ea1c9be4b126p-648, 0.0, 0x1.ff9f8c758065p-373, 0.0, 0x1.ebbb46aaed6ap-725,
     0.0, 0x1.59d5189d0b5cdp-541, 0x1.0e0610eb0a723p-236, 0.0, 0x1.e4d8b528173dcp-762,
     0.0, 0x1.733e182ed2bbep-460, 0.0, 0x1.1e31bae199bdfp-897, 0.0, 0.0, 0.0,
     0x1.d629d8b1d4177p-363, 0.0, 0.0, 0x1.f6b7edf5d6cb2p-60, 0.0,
     0x1.ea2b0fced6378p-220, 0x1.891fec6fdc2e3p-943, 0.0, 0.0, 0.0,
     0x1.9cff6a63b0243p-718, 0x1.ae2a429f5f33cp-826, 0x1.8eee8c67a9d6ap-108, 0.0,
     0x1.34dc7ea9b2271p-115, 0.0, 0x1.a0eace264eb9p-875, 0.0, 0.0, 0.0,
     0x1.b184a6d83bfb6p-670, 0.0, 0x1.ca5c3ce05628cp-529, 0.0, 0.0,
     0x1.22bc5f40b3d6ap-483, 0.0, 0x1.6a1924cdb79d4p-32, 0x1.f49fac03ff0b8p-797, 0.0,
     0.0, 0x1.edbd42662a7ffp-476, 0.0, 0.0, 0x1.c45f85dfcdba6p-488,
     0x1.cc1ecb76727fp-328, 0.0, 0x1.4a41b9b75cd72p-391, 0.0, 0x1.0c671367e3bbbp-273,
     0.0, 0x1.b574d59603f26p-1017, 0.0, 0.0, 0x1.bc31b70e4f79ap-553,
     0x1.05899e547fff3p-28, 0.0, 0.0, 0x1.d497f81cf17e6p-6, 0x1.d54f396b1ef1ep-112,
     0.0, 0.0, 0x1.61db9529b9b74p-448, 0.0, 0x1.b4b1a8c889fc9p-770,
     0x1.a47fc0b273e53p-256, 0x1.ccda11fd410abp-888, 0.0, 0.0, 0.0, 0.0,
     0x1.977db2141ac9ap-658, 0.0, 0x1.0b738f4b6a51ap-105, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.aa9a99566e698p-155, 0x1.9b8d2dcbd7e95p-828, 0.0, 0.0,
     0x1.f514335ebac33p-300, 0x1.f52448192c886p-818, 0x1.95aec93436e0bp-374, 0.0, 0.0,
     0.0, 0x1.ec97f2ac576dp-851, 0x1.1a3dcb37755f9p-5, 0.0, 0.0,
     0x1.5cfb088834aeep-79, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ad9026241062dp-628,
     0x1.85ee4aa358018p-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6ea188d60e83p-144, 0x1.a725d5840fcaep-667, 0.0, 0x1.2ac04789cc847p-8,
     0x1.44ed10d8be202p-645, 0x1.f75ed35f5737dp-861, 0.0, 0.0, 0.0,
     0x1.dbb11dd6dcd46p-17, 0x1.d054872ee07c6p-165, 0x1.4e2e3db60eec8p-962,
     0x1.4225c82a8d9f5p-788, 0x1.87a4045bba367p-754, 0.0, 0x1.e1432e939c174p-587, 0.0,
     0x1.35ea906f47414p-48, 0.0, 0.0, 0.0, 0x1.2d810ae63b172p-180, 0.0,
     0x1.2c84d10a26ed3p-927, 0.0, 0x1.2cf6917583cd8p-585, 0x1.ac3d75e3c2322p-44,
     0x1.bca2d23ae82adp-769, 0.0, 0x1.3d08af5f5f835p-66, 0.0, 0.0,
     0x1.1a0f971c4a644p-790, 0.0, 0x1.24513fc90e735p-246, 0.0, 0x1.a74dc642d4da4p-74,
     0x1.0259dbbd12921p-918, 0.0, 0.0, 0x1.a4b63baf3b84ap-340, 0.0, 0.0, 0.0, 0.0,
     0x1.9efcaa1d86d45p-840, 0x1.be9cb3a9a418p-501, 0x1.e57cf30680f79p-851,
     0x1.687475423b667p-127, 0.0, 0.0, 0x1.2f72ee8feea59p-751, 0x1.921a1c5cf244ep-659,
     0.0, 0x1.2c60f30eb8f04p-37, 0x1.c54685f4c1e0bp-25, 0x1.c3df114fe0a8ap-752, 0.0,
     0x1.7d51e6b892d3p-333, 0x1.45282e6d3cf5bp-329, 0x1.6e3b8530abdc1p-604,
     0x1.9820c9779a869p-327, 0x1.d5e505a45d4a8p-176, 0x1.d7378185e4e86p-766,
     0x1.463dafe109943p-966, 0x1.848f44475c4b6p-591, 0x1.6c7b112c069cdp-125,
     0x1.f0d6fc4ff2243p-550, 0.0, 0.0, 0x1.9b87e07e6bfabp-127, 0x1.3e441da364a56p-769,
     0x1.2789589fe921fp-779, 0x1.b3804f586b462p-945, 0.0, 0x1.03dd657e15a3ep-665,
     0x1.6fb227c3018d4p-706, 0x1.2215736a78508p-529, 0x1.b1bc4f6aa3634p-817,
     0x1.e78059bf01d6dp-516, 0x1.a0f748e7bc8dcp-833, 0.0, 0x1.0019ec189874fp-317, 0.0,
     0x1.162a90066911ep-976, 0.0, 0.0, 0.0, 0x1.2303a9e4f8cbp-190, 0.0, 0.0, 0.0,
     0x1.9031554a02008p-983, 0x1.45ed9579ea49bp-281, 0x1.7bb75913c0073p-36, 0.0,
     0x1.47492e3d2253dp-95, 0x1.bc23bfe4f6993p-614, 0.0, 0.0, 0x1.f928f69d6eebcp-330,
     0x1.90b21b19ec8p-781, 0.0, 0.0, 0x1.a5d96b1e73a1p-893, 0x1.ab7bb743b361dp-1019,
     0x1.ac39467b938f8p-775, 0x1.fdd3ac67d17ecp-544, 0.0, 0x1.0eccd9b1573c1p-665, 0.0,
     0.0, 0.0, 0x1.71768ce230dc4p-332, 0x1.f320b3fa03331p-663, 0x1.6e7c2f99d9fb1p-689,
     0x1.9ad426a3ad75bp-330, 0x1.1e9f1845e8e3ep-89, 0x1.5b8a3caacedb8p-417, 0.0, 0.0,
     0.0, 0x1.90b546aebea1bp-983, 0x1.c13dd7096b8d6p-672, 0x1.f0de917ed3cc2p-950,
     0x1.3f9ba83767e82p-1007, 0x1.0992bfc3e941fp-706, 0x1.7a9d254e1d705p-450, 0.0,
     0x1.77b22b8614556p-256, 0.0, 0.0, 0x1.89c6ffb780b9fp-394, 0.0, 0.0,
     0x1.d35a66779a635p-222, 0.0, 0.0, 0x1.5c898eaf5dd0fp-39, 0x1.c03f7c6b918dp-949,
     0.0, 0x1.f018c7d6c8192p-1020, 0.0, 0.0, 0x1.3919c50826e2ep-492,
     0x1.be3620c03298ap-701, 0x1.1912729242345p-730, 0x1.d79c8ee4deb6cp-708, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.260f5602a9987p-687, 0.0, 0x1.bc4d708c5d40dp-174, 0.0, 0.0,
     0x1.c1695b514f60bp-717, 0.0, 0.0, 0.0, 0.0, 0x1.658a89034366p-76, 0.0, 0.0,
     0x1.41a5e7f63b8b9p-696, 0.0, 0.0, 0x1.8466549ab6d94p-430, 0.0,
     0x1.04c4890e19f48p-522, 0x1.09f109fcc718fp-268, 0x1.9d6b9bef34594p-925,
     0x1.12a326364c32p-229, 0x1.a6e8303d502bcp-373, 0x1.3afe666d4cf79p-310, 0.0,
     0x1.d3733e9b80cdep-924, 0.0, 0.0, 0.0, 0x1.a761ac59f1342p-912,
     0x1.5401a72e8f197p-9, 0.0, 0.0, 0x1.9f791a3b8e5cdp-245, 0.0, 0.0,
     0x1.d66557e134962p-708, 0x1.242bf342618cbp-837, 0.0, 0x1.f24f2e1b9bf7bp-1008,
     0.0, 0x1.40b27446af153p-250, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2fe0cfc2c14c9p-96, 0.0, 0.0, 0x1.29eb7aa0cbd27p-548, 0.0,
     0x1.e3caceeb3b52ap-536, 0x1.18279c1be08f9p-793, 0x1.1a1a2892172d3p-709,
     0x1.9a7650ef0d145p-843, 0.0, 0x1.75fcb136e1511p-652, 0x1.52c46745592ebp-804,
     0x1.4d1613dde908fp-695, 0x1.e8e2d09107dc2p-75, 0.0, 0x1.92c9bba14870cp-632, 0.0,
     0.0, 0.0, 0x1.114dd8d0eecc5p-163, 0.0, 0x1.b15fad1e06338p-210,
     0x1.ec3230767615bp-841, 0x1.7284cffe15a35p-443, 0.0, 0.0, 0x1.f369a0c968ce8p-709,
     0.0, 0x1.f4531e9f9856dp-808, 0.0, 0.0, 0.0, 0.0, 0x1.43e024633c3eep-673, 0.0,
     0x1.5aabb20bc1673p-667, 0x1.996e5de41b7b9p-534, 0.0, 0x1.f226f2dafd75bp-781,
     0x1.163313630a76bp-760, 0x1.077dcca8942bp-596, 0.0, 0x1.2b4dd04d74615p-687,
     0x1.12e029070783dp-927, 0x1.c05c36cdd9138p-874, 0x1.f66c63ec16867p-666, 0.0, 0.0,
     0x1.61822446a74eep-935, 0.0, 0x1.66e9de0b60381p-896, 0.0, 0.0, 0.0,
     0x1.e79babea45088p-856, 0.0, 0.0, 0x1.001048c263e5cp-578, 0x1.ecca39bd21522p-688,
     0.0, 0x1.8e6815dca4b15p-671, 0x1.b2198b752d3a7p-43, 0.0, 0x1.4587204809178p-745,
     0x1.c29e29e236398p-323, 0x1.1ef9f67909166p-911, 0.0, 0.0, 0.0,
     0x1.9305b04ac21eap-151, 0.0, 0.0, 0.0, 0x1.29178f331061cp-707,
     0x1.3d15d02aac12fp-137, 0x1.10e9104d3a49cp-393, 0x1.3bdc9a40c1ae7p-262, 0.0, 0.0,
     0x1.ead5b83967fcep-713, 0x1.ab3acd881f10ap-346, 0.0, 0x1.297503a4d2495p-526, 0.0,
     0.0, 0x1.766e0430f3c8cp-172, 0x1.d1a9fa8544e39p-122, 0x1.018d6db054315p-647,
     0x1.22c50cdac5cc9p-615, 0.0, 0.0, 0.0, 0x1.e2a1bd71e11a5p-348, 0.0,
     0x1.3bd04f4497b8dp-94, 0.0, 0.0, 0x1.064d3cb850f21p-997, 0x1.e367eb3730c71p-219,
     0.0, 0x1.c32d6b7da874p-912, 0x1.995fae5ea4ffcp-355, 0x1.af8bbb602ad79p-196,
     0x1.f76c81551f0a1p-740, 0x1.018dae9a35a0dp-694, 0.0, 0.0, 0x1.5ad3e02fb18f7p-269,
     0x1.b44ecb4bc2467p-210, 0.0, 0x1.6b076d9311ab1p-799, 0x1.e50763cc6812cp-828, 0.0,
     0.0, 0x1.744da62fa060cp-128, 0.0, 0.0, 0.0, 0.0, 0x1.1e0b91a347d1fp-893,
     0x1.d34731c0b282fp-317, 0x1.c734a70fc40dp-368, 0.0, 0.0, 0x1.17b81ba9156c9p-529,
     0x1.5b835397fd94dp-923, 0.0, 0x1.0771edd2e5226p-202, 0x1.30a0ce9abf066p-815, 0.0,
     0.0, 0x1.9621c3047a99bp-707, 0x1.6e30153d6db13p-449, 0.0, 0x1.56a74185c09c8p-787,
     0.0, 0x1.6dd72a59b72d7p-32, 0.0, 0.0, 0.0, 0x1.50d9f05fa07a7p-700,
     0x1.13385d34f1a39p-376, 0x1.5722b135c9f0ep-699, 0.0, 0x1.c78cf3eff7f1ep-352,
     0x1.2dbd42e5c8741p-245, 0x1.023bf97851f35p-611, 0.0, 0.0, 0x1.236399a03354cp-68,
     0.0, 0x1.a21cbbce299b9p-551, 0.0, 0.0, 0x1.f5d6684bee09dp-409, 0.0, 0.0, 0.0,
     0x1.b3dfa9b9938f5p-330, 0x1.153a9cbcf8ae6p-526, 0x1.5b2ad14c41617p-354, 0.0,
     0x1.b20d13821a7d3p-143, 0.0, 0x1.98fa4d33e3cf9p-415, 0.0, 0x1.038f4d971b925p-562,
     0.0, 0.0, 0.0, 0x1.36d2a7110dbc5p-275, 0.0, 0.0, 0x1.a89221ed8aebfp-248,
     0x1.91d353349e97fp-422, 0x1.e80fc8cccecd3p-375, 0x1.23e2590075fecp-140,
     0x1.d97370a662a23p-30, 0x1.4262aa3f0f294p-933, 0x1.e5f5cd7ef44a3p-635, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c2c168f3b83dp-319, 0.0, 0.0, 0.0,
     0x1.11bd76f3cd2b4p-938, 0.0, 0.0, 0x1.80374e56acd6ep-749, 0x1.4359216fe36b1p-822,
     0x1.9be1e8378a184p-943, 0x1.c10674b07902ep-589, 0x1.4cf217ae1778ap-571,
     0x1.500ce6444b249p-1, 0.0, 0.0, 0.0, 0.0, 0x1.84c8dd203d505p-16,
     0x1.a3bc3d1eea171p-672, 0.0, 0x1.61e34e58c3787p-344, 0x1.ef86529c71ff5p-281, 0.0,
     0.0, 0x1.7fdff5eb0b09bp-720, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9346a188d4289p-573, 0.0, 0.0, 0x1.aa4805d75f9b3p-936, 0.0,
     0x1.124346fc973e5p-688, 0.0, 0.0, 0.0, 0x1.a56c48b48046ap-152, 0.0,
     0x1.f37645ff06943p-211, 0x1.a8326c8eb6cc5p-298, 0x1.6cc2e3ef762bep-38,
     0x1.0f6771d23a922p-153, 0.0, 0.0, 0x1.b9ad99d8f3ba2p-232, 0.0, 0.0,
     0x1.ab9ae242e4d98p-76, 0x1.446b012cc5ce6p-917, 0.0, 0x1.d48c78fc7bbc3p-53, 0.0,
     0x1.1331e2e9b5d4fp-122, 0.0, 0x1.5382b3bd4b4d7p-842, 0.0, 0x1.86c4e86fb26f7p-314,
     0x1.327747b916dedp-927, 0.0, 0x1.307ca5fc4eecap-1008, 0x1.9761679482228p-723,
     0.0, 0x1.110b0796342c7p-710, 0x1.698727d55acd5p-663, 0x1.efe904cc065ddp-968, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.748ad4d507c2p-533, 0.0, 0.0, 0.0, 0x1.c536950bc472ep-558,
     0x1.dc757d2faecddp-606, 0.0, 0x1.715615b681ba4p-205, 0x1.8a6e5dd518693p-288, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.251778d24187cp-266, 0x1.01788d9288e08p-235,
     0x1.4bcbfa56b4fa6p-344, 0.0, 0x1.90177fc27a3fp-118, 0.0, 0x1.7b0d23359a1fap-233,
     0x1.e85a3585b016cp-590, 0.0, 0.0, 0x1.b85cb1c1e238ap-492, 0.0,
     0x1.f5ba4df77399bp-568, 0.0, 0.0, 0x1.1f4adb0ddbbd7p-631, 0x1.da691f052d653p-703,
     0x1.e84e23f4d53a8p-526, 0x1.240f28aae6fa8p-746, 0x1.189affd1b7dc5p-844, 0.0, 0.0,
     0.0, 0x1.8005b088b8a54p-924, 0x1.0c0b3a8d5c13p-13, 0x1.b3beb5add1fe7p-860,
     0x1.97c451a1e6dedp-374, 0x1.abeb0633ff376p-610, 0.0, 0x1.2f4a25d3b2115p-237, 0.0,
     0.0, 0x1.0fb3f9da3d269p-503, 0x1.a3296b39dfa1fp-419, 0x1.91c31fd93a138p-1015,
     0.0, 0x1.d7ba6d3c92abfp-154, 0x1.bb41fc7faa9b5p-587, 0x1.2ed6a0668d021p-721, 0.0,
     0.0, 0.0, 0x1.9616c8f630dd3p-415, 0x1.6f3e4c665706cp-690, 0.0, 0.0, 0.0,
     0x1.85702d76a1a5ap-273, 0x1.80b33b8c933d1p-695, 0x1.4b0b16d4edecbp-251, 0.0,
     0x1.e05c561db7374p-698, 0.0, 0x1.2647554a0b788p-44, 0.0, 0x1.1dc3ac57398ecp-379,
     0x1.a708d2832455fp-366, 0x1.e21b6f788483cp-892, 0.0, 0x1.d41442a76015fp-714, 0.0,
     0x1.29308ae2fa6d8p-511, 0x1.f68129c7d6802p-198, 0.0, 0x1.1ac7e0b62c1aep-784, 0.0,
     0.0, 0x1.6b91aca38a2a7p-920, 0x1.0777593c653ebp-193, 0.0, 0x1.f9f4888407137p-40,
     0.0, 0x1.2689cdacac869p-228, 0.0, 0x1.b8024c65c903dp-733, 0x1.b3c919676d72ap-782,
     0x1.0bd19441d347ap-773, 0x1.a6db9ca7d0bf1p-603, 0x1.14dbd8d29d947p-997,
     0x1.8f66bb78762bp-699, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5bb4812bbc374p-937,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1146c5e1382c3p-49, 0x1.2f24b8cf3e56bp-92, 0.0, 0.0,
     0x1.eb0aae7f62edap-471, 0.0, 0.0, 0x1.ec127721ed733p-171, 0.0,
     0x1.8050e56052ed9p-710, 0.0, 0.0, 0x1.31886af9db0c1p-34, 0x1.a1c86baf9430bp-451,
     0x1.2cd55ed9863efp-273, 0.0, 0.0, 0x1.e33ba04b304d6p-326, 0x1.b8125d8804cecp-981,
     0.0, 0x1.a50d5161b1a3p-926, 0.0, 0.0, 0x1.4623fed340df2p-961,
     0x1.ecbf902bac57fp-885, 0.0, 0x1.64e90b291bf02p-92, 0x1.dfc33e433a9a3p-452,
     0x1.74fd71e61d252p-182, 0.0, 0x1.5095b1c0c538bp-677, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6d4087a1aa2f2p-713, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c864dc4158cc8p-975,
     0x1.d4c7c3c22245p-230, 0x1.a4a21cc4e4a12p-114, 0x1.b44cf882eafffp-691,
     0x1.155db9e143ca7p-476, 0.0, 0.0, 0.0, 0x1.8db6670174bb5p-351, 0.0,
     0x1.efdf0474cc28cp-320, 0.0, 0x1.8746cf3c5d60dp-437, 0x1.ab47492ddefbep-981, 0.0,
     0.0, 0x1.287e2040e86c1p-1014, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75cd7409f20dap-87,
     0x1.4c74bdecd326ep-273, 0.0, 0.0, 0x1.3328f709bc86cp-663, 0x1.9f3e1f2232e8ep-141,
     0.0, 0x1.6a12fe37c3ed8p-219, 0.0, 0x1.2d52816f26f2p-368, 0x1.4a832362ff2fcp-711,
     0.0, 0x1.71e8060d39412p-43, 0.0, 0x1.76c5e6055b418p-844, 0x1.4ad34a24c4e97p-7,
     0.0, 0x1.699fa9f562d3fp-769, 0.0, 0.0, 0.0, 0.0, 0x1.d210f47379162p-786, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68c46ca28207ap-341, 0.0,
     0x1.95b746c65a9aap-392, 0x1.9d3da742df29dp-608, 0.0, 0x1.73d6155933f98p-834,
     0x1.da1808da77b2cp-159, 0.0, 0x1.a4df38b6c98a7p-88, 0.0, 0x1.1842d896e33ep-220,
     0x1.fe06456b1eff3p-604, 0.0, 0x1.b775c22364b9p-775, 0x1.89b7d3b15b15ep-136, 0.0,
     0.0, 0x1.f8973a9e4762fp-44, 0.0, 0x1.bdd8c91041908p-59, 0x1.38b5ecfa6f578p-377,
     0.0, 0x1.5afa90f6cca04p-104, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98378a2fca419p-140,
     0.0, 0x1.6d20d4f40b4dap-131, 0.0, 0x1.ba7db0421b095p-154, 0.0, 0.0,
     0x1.b5a64d9fc842bp-966, 0.0, 0x1.3a07f5ed0e933p-525, 0x1.263681b27818cp-261, 0.0,
     0x1.83a1ec5a4dc8ap-76, 0.0, 0x1.96f56a5cd02fap-622, 0x1.8e725b6c4ccd7p-460,
     0x1.9652f1a8db1dap-153, 0.0, 0.0, 0x1.87c022a3a3e8bp-415, 0.0,
     0x1.840641f346b2ep-860, 0.0, 0.0, 0x1.81e884a6c8244p-945, 0.0, 0.0, 0.0, 0.0,
     0x1.8211314eaf743p-266, 0.0, 0x1.00c2b6f4671fdp-713, 0.0, 0.0,
     0x1.ba1e82ca670eap-482, 0x1.bf43be8fe8f7p-116, 0x1.6b52c74e5330ap-364,
     0x1.ec260c5e31c5ap-434, 0x1.5d1d457c6ff0dp-123, 0x1.dccbf8ac6b1cfp-758,
     0x1.02491b26b6ac8p-108, 0x1.e95ec1ebd2d4dp-170, 0.0, 0.0, 0.0, 0.0,
     0x1.567fef2ae9078p-756, 0x1.2ab4080104139p-344, 0x1.a7b81185d5a4ep-550, 0.0, 0.0,
     0x1.d8c2a588d3dccp-293, 0.0, 0x1.2d3ccda6dfe7cp-549, 0.0, 0x1.33993da97d1ffp-665,
     0.0, 0.0, 0x1.d44df01aa6c16p-133, 0x1.9d03047001de5p-595, 0x1.8d0886c6b3acdp-401,
     0x1.4b947fe269b6fp-390, 0x1.d6382733417dap-877, 0.0, 0.0, 0.0, 0.0,
     0x1.3503685528ea5p-916, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f0970eaceafap-146, 0.0,
     0x1.dec3813f86528p-423, 0.0, 0x1.5da4cd2c16f12p-603, 0x1.dfeb4f645f5e9p-235,
     0x1.e29155b3ad685p-345, 0.0, 0.0, 0.0, 0x1.1097bf894c324p-750,
     0x1.64fe582bdb67fp-96, 0x1.5bc6e547cf395p-608, 0.0, 0x1.ba029f2e42d9bp-385, 0.0,
     0x1.725555332f3cep-887, 0x1.706dbebde8656p-906, 0x1.f0bdb668def04p-455, 0.0, 0.0,
     0.0, 0x1.06fa04fdaee34p-933, 0.0, 0.0, 0x1.73968ecf98d8ap-270,
     0x1.f127b40e04455p-867, 0.0, 0.0, 0.0, 0x1.2d764e1487387p-129,
     0x1.e7c5440f01fd2p-927, 0.0, 0x1.13b488ec1fe18p-530, 0x1.227881b8dd1e5p-941,
     0x1.9a0103794e431p-691, 0.0, 0.0, 0x1.794fa687c1efbp-249, 0x1.17150ce13667dp-613,
     0x1.dbb6c0dcc2a6cp-973, 0.0, 0.0, 0.0, 0x1.1ebd4e60ed63bp-545,
     0x1.5029ebe89f3fcp-515, 0.0, 0.0, 0.0, 0.0, 0x1.a9c107769ad17p-257, 0.0,
     0x1.d6dc2947651f9p-530, 0x1.46ac5ffb13758p-447, 0.0, 0.0,
     0x1.97baa1049386dp-1000, 0x1.c72100e2fea93p-11, 0.0, 0x1.7ae0a7e329bcdp-361,
     0x1.ae4eab163a2cap-169, 0.0, 0x1.c6e1ee184db79p-83, 0x1.b536405131716p-305, 0.0,
     0.0, 0x1.c28da2f0181bp-374, 0x1.7dc5a6b9c6f7ep-915, 0.0, 0x1.8d118563f52adp-375,
     0.0, 0x1.f5c3c546b379bp-915, 0.0, 0x1.56de09a345068p-622, 0.0,
     0x1.02b3482b28145p-678, 0x1.94335f123aa1ep-312, 0.0, 0x1.5fdfe8a6243d9p-1000,
     0x1.9f15230e361f8p-803, 0x1.7eda796e32cp-995, 0.0, 0x1.af8c4c129718bp-747,
     0x1.6b91024080f15p-677, 0.0, 0.0, 0.0, 0.0, 0x1.8d70d67ad9847p-666,
     0x1.9058d91e59984p-953, 0x1.4f4af2c804873p-788, 0x1.a1a81b4e8e6aep-310, 0.0
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
            tmp1 = Sleef_erfcd1_u15purecfma(tmp0);
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
    printf("Sleef_erfcd1_u15purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erfcd1_u15purecfma bench acc %la\n", global_bench_acc);
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
