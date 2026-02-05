/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10d1_u10purecfma.c --function \
 *     Sleef_log10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.0652aaa9e1bbep-211, 0.0, 0x1.f40077a4b9c31p-965, 0x1.a8203d72311f1p-317,
     0x1.d0f95896e54d6p-696, 0.0, 0x1.db5215c6c2c0cp-88, 0x1.f3f3aa16c21c3p-114, 0.0,
     0x1.8e7de900ea957p-795, 0x1.c2e8ab853edb4p-315, 0x1.75b9e4136e982p-1002,
     0x1.e7818e5910411p-197, 0x1.c2d880870405cp-457, 0.0, 0x1.d83da7a444462p-63,
     0x1.667873a1b751p-258, 0x1.4c5c90e3b02bdp-859, 0x1.65f0fbe0a0692p-477,
     0x1.f3bbaa2ef6f0bp-328, 0.0, 0x1.10451f0081c5ap-429, 0.0, 0x1.bfbfd57a37406p-550,
     0.0, 0.0, 0x1.e52d6d89c6fffp-589, 0x1.643c846ccff3ep-575, 0x1.f07d2c08bca98p-691,
     0x1.aae4da2339129p-927, 0.0, 0.0, 0x1.6c9bebc510d12p-1009, 0.0,
     0x1.682056a58c16ap-993, 0x1.94fb6e237a8c2p-628, 0.0, 0x1.dc89db383486ep-251,
     0x1.a80a5f301b69bp-478, 0x1.c6b1fdfa672fp-294, 0x1.66a558c9d8d4ap-418,
     0x1.201ccd6d9bacdp-751, 0x1.d646dfdfb3b37p-515, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.54f8ac0de9d0bp-600, 0.0, 0x1.2274d604aa3e7p-919, 0.0, 0.0, 0.0,
     0x1.0340841cf4c63p-844, 0.0, 0x1.d97e786cf6436p-985, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a467f10872aafp-217, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e8b44b2f4cf3p-638, 0.0,
     0.0, 0.0, 0.0, 0x1.96c426993cc6fp-226, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f206f6b61233p-237, 0.0, 0.0, 0x1.1383d8f81c461p-360, 0.0,
     0x1.46cc32e919b6p-439, 0.0, 0.0, 0.0, 0.0, 0x1.7605e9bdec094p-662,
     0x1.221365f6cbecdp-15, 0x1.aab7740b442dap-799, 0x1.8b40a6c06c7f1p-78,
     0x1.1a7716b2a53f2p-177, 0.0, 0.0, 0x1.cc712854d9d84p-645, 0x1.a5ae5afc729d5p-584,
     0.0, 0.0, 0x1.97d2231553bddp-763, 0x1.8ea6f4eb85cbap-446, 0.0, 0.0, 0.0,
     0x1.a32052bf2fdd5p-711, 0x1.ff2fad4ca53adp-774, 0.0, 0.0, 0x1.4e2182cef461dp-14,
     0.0, 0.0, 0.0, 0x1.203a44ccadd9dp-510, 0x1.29123c183aa7ep-25,
     0x1.82fb0c782c20ap-307, 0.0, 0.0, 0x1.fde731680de7fp-593, 0x1.2c8b2b0c22ea8p-829,
     0.0, 0x1.f0a05277436a2p-100, 0.0, 0x1.d70fc7abb2799p-650, 0.0,
     0x1.1fcdff9c933dfp-355, 0x1.7c1c120139c6dp-403, 0.0, 0x1.f24d0d9b392b7p-339,
     0x1.1b58f53ca9a96p-885, 0.0, 0x1.979920e52a4bdp-655, 0.0, 0x1.9ecf9f26d2853p-566,
     0.0, 0x1.167e46621c63bp-164, 0.0, 0x1.cd053a56e3b83p-375, 0.0,
     0x1.7a1733d14c82bp-292, 0x1.df9b8a75b9574p-338, 0.0, 0x1.c5facf60527c5p-107,
     0x1.770778ce7e681p-128, 0x1.197ceb1a5d881p-29, 0.0, 0x1.ec5b5aba1dd83p-549,
     0x1.ee53d61debf16p-499, 0.0, 0x1.d508ab466a1a3p-1010, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6f3c3f9d94d02p-280, 0x1.81da053a810dep-294, 0x1.73fecdea5900dp-238,
     0x1.50d9ad759b4cfp-572, 0x1.986f56b9b2b01p-474, 0x1.da763c804bc19p-297, 0.0, 0.0,
     0x1.fbacac9960b87p-190, 0x1.a57fc10b1f036p-333, 0x1.b86ca00dbcce2p-11, 0.0,
     0x1.fc52e6afa7f31p-730, 0.0, 0.0, 0.0, 0x1.f6d9081853af1p-501, 0.0,
     0x1.e16d05f33d5a2p-585, 0.0, 0.0, 0.0, 0x1.666e38765813p-31, 0.0, 0.0, 0.0,
     0x1.70045ea541fb1p-960, 0x1.009257433e12bp-379, 0.0, 0x1.3b52df0b0545dp-465,
     0x1.079355e6cd4dap-328, 0x1.4c0dd45968846p-644, 0x1.66aa9eefc5922p-722,
     0x1.bf18de46cd23fp-214, 0.0, 0x1.e964028656a1ap-72, 0x1.c7e5f20a742adp-769, 0.0,
     0x1.db511d121beeep-590, 0x1.9900e1916302p-806, 0.0, 0.0, 0.0,
     0x1.13fad555035eep-126, 0x1.9b8d47d057e13p-998, 0.0, 0.0, 0.0,
     0x1.4a4365aff4371p-34, 0x1.d0045871d87a6p-892, 0.0, 0.0, 0x1.0ff9e92ea44dep-62,
     0.0, 0x1.75567ec0b494ap-1001, 0.0, 0x1.20aac43a2d08dp-645, 0.0, 0.0, 0.0,
     0x1.2c65f8ab2ff9fp-98, 0.0, 0x1.d07b8908b931ap-87, 0.0, 0x1.d5962bc83b1e8p-303,
     0x1.5dc0f66ac6efap-308, 0x1.c8fd17e75eb9cp-838, 0.0, 0x1.09ec48e55eb2ap-265,
     0x1.59c0b970b1484p-880, 0.0, 0x1.f2660c2f0716fp-706, 0x1.095cfcf5afc05p-63,
     0x1.adfb0cfee687p-595, 0.0, 0x1.8c99562ae5e16p-949, 0.0, 0x1.48674968e0e63p-632,
     0x1.f6f8d30b278fap-144, 0.0, 0.0, 0x1.f4a3a56478942p-430, 0x1.99f6bc9fb8688p-622,
     0x1.f3764b4152d7ep-493, 0x1.1484e88473fa4p-835, 0.0, 0.0, 0.0,
     0x1.c797be65022c6p-954, 0x1.02a649cfe531fp-557, 0x1.edf7f8b9d5774p-849,
     0x1.3e673379bdf1ap-95, 0x1.d39fbc8bf233bp-534, 0.0, 0x1.9fc1ce175025ep-599,
     0x1.00c765f9dfe45p-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21911c642440ap-673,
     0.0, 0x1.2f825bbacfb0fp-141, 0.0, 0.0, 0.0, 0x1.a42f6d251a9f3p-937,
     0x1.b54e897bffb17p-23, 0x1.91b4882890b49p-485, 0.0, 0x1.7c70e2956d194p-750,
     0x1.e69abcf1cbecfp-556, 0x1.ebe31875ed18fp-998, 0x1.270be8e847c99p-714,
     0x1.e881862118e4dp-972, 0.0, 0x1.4e8af740d68bcp-156, 0x1.bcff9de3abda5p-756, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9787f1871c6dp-581, 0.0,
     0x1.fe3f49b7e485dp-983, 0.0, 0.0, 0x1.d70f245b6e1abp-363, 0x1.df39bc72961a2p-57,
     0x1.7e798722cad94p-29, 0.0, 0x1.f76a8bd8a1a9dp-209, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c810ae1879262p-43, 0.0, 0.0, 0x1.7b9eaea850f4ap-649, 0.0,
     0x1.1cd60be2240c9p-312, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6244933fdf8adp-535, 0x1.5aa72f6856a33p-971, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.28a8a82408bcep-388, 0.0, 0.0, 0.0, 0.0,
     0x1.03b436cfc0ca5p-26, 0.0, 0x1.0ebe89f58d692p-251, 0.0, 0x1.73165629a76dcp-649,
     0.0, 0x1.72675a0222838p-449, 0x1.129b00c88d203p-737, 0x1.4c0c217045a5p-231, 0.0,
     0x1.fa47e007664a9p-699, 0.0, 0.0, 0x1.992ae72c6374fp-34, 0.0,
     0x1.63cf5daa775aep-191, 0.0, 0x1.68518fa0aa156p-552, 0x1.e14f9abf0ecbp-566, 0.0,
     0.0, 0x1.53faea8115b74p-404, 0.0, 0x1.ede19cfb664b7p-751, 0x1.335e64524ee68p-313,
     0x1.7bf35ea1cd695p-102, 0x1.e527b0ecb8a4bp-806, 0.0, 0.0, 0x1.16fbf53054ea6p-957,
     0.0, 0.0, 0x1.8f3d4057d0a9bp-925, 0.0, 0.0, 0.0, 0x1.576f00ace82a6p-50,
     0x1.1fbca9a75f0d1p-625, 0x1.f77202889ce3cp-617, 0.0, 0.0, 0x1.7d2dd6c515d9fp-623,
     0x1.561a95637bfddp-48, 0x1.3d3af389680f4p-841, 0.0, 0x1.2bb62a3d1258dp-467, 0.0,
     0.0, 0x1.e1c17afe1a43cp-630, 0.0, 0.0, 0x1.865fca644a43ep-380, 0.0,
     0x1.f44a89a6833efp-985, 0.0, 0.0, 0x1.99bdd147e29bdp-357, 0x1.52e7d02d916d3p-262,
     0.0, 0.0, 0x1.6f47a441a86dcp-160, 0x1.eb43f4eef1e7fp-909, 0.0,
     0x1.d3c541dd07a6fp-102, 0.0, 0x1.08378f436aa29p-572, 0x1.b41f3cf1c8003p-992,
     0x1.351955941626cp-147, 0x1.5398cd5556af6p-940, 0x1.4b0bf88586748p-787, 0.0, 0.0,
     0x1.dbd88680d4e96p-822, 0x1.47d96f2066485p-528, 0x1.1bf4228267835p-326,
     0x1.1dcea899e4bep-664, 0x1.af466cce77e02p-189, 0x1.0def7ce0e9c13p-940, 0.0, 0.0,
     0x1.fc3689802c27fp-362, 0.0, 0x1.8d01959fb18abp-384, 0.0, 0.0,
     0x1.8de66385f76ccp-808, 0x1.313f68c64fa7bp-270, 0.0, 0.0, 0x1.5c425bd3f2c4p-921,
     0x1.25816ef9d064p-643, 0x1.c898fad7c5e8p-702, 0x1.c7e5d970acecep-460,
     0x1.2e496d75adec2p-787, 0x1.f7ef5213148cp-515, 0x1.9b4a1d6910ca2p-959, 0.0,
     0x1.86882b3172a96p-682, 0x1.071c6fd3d5f03p-78, 0.0, 0x1.b30850bac2cafp-155, 0.0,
     0.0, 0x1.804e9c72c3d5ap-271, 0x1.338304b42da6p-699, 0.0, 0x1.1ec3aa8d1dd3fp-627,
     0x1.231192c60b317p-455, 0.0, 0.0, 0x1.7bf61f9e4b457p-52, 0x1.442b41d9e1a6cp-991,
     0.0, 0x1.ac7fd7c448b2p-495, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8763e8b54a9ap-846, 0.0, 0.0, 0.0, 0x1.fdbdd02aefb6ep-400, 0.0, 0.0,
     0x1.bf4f38b220f6fp-927, 0x1.ca8f14010961ep-379, 0.0, 0.0, 0x1.bdbb3e878aa59p-550,
     0x1.9f8df50302a7p-879, 0x1.ab03451b0e5a3p-84, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6d52851e99ef7p-879, 0x1.32a71b2269ea8p-455, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7539e25905c24p-411, 0x1.4c77b2bbda0dbp-654, 0x1.7b7ada82c1e26p-158,
     0x1.c41d245089fbfp-509, 0.0, 0.0, 0x1.36d61d8a842c1p-404, 0.0, 0.0, 0.0,
     0x1.7c32bb6c66bdep-909, 0.0, 0x1.a65e15df78babp-799, 0.0, 0.0, 0.0, 0.0,
     0x1.2fb98bc3a1fddp-100, 0.0, 0.0, 0x1.c94b1e931094dp-815, 0x1.6d305a62e9c42p-712,
     0.0, 0.0, 0.0, 0.0, 0x1.138d3209c40acp-930, 0.0, 0x1.5013066e980cdp-990,
     0x1.7f8d654189a38p-110, 0x1.1663df266af99p-308, 0x1.3154f92cb0cc4p-959, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6edc0b77acac2p-847, 0.0, 0.0, 0x1.4a638a00c9ff2p-392, 0.0,
     0x1.1610d1139b178p-607, 0.0, 0.0, 0x1.143ababf24182p-770, 0.0,
     0x1.c4973f180c2ap-217, 0x1.2835e7ac19e93p-495, 0x1.787c6342b2cc2p-988,
     0x1.75d90e896da32p-406, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18f8288c733ddp-166,
     0x1.80c963708c8acp-394, 0.0, 0x1.d9afe0877dd11p-82, 0.0, 0.0,
     0x1.4eba45d21046ep-358, 0.0, 0x1.d2c27483e15c4p-675, 0x1.2a6f4030f4138p-587, 0.0,
     0x1.949ec2d898b68p-159, 0.0, 0.0, 0.0, 0x1.8f3c98b08f2f2p-83, 0.0,
     0x1.9ff5f641b8d33p-324, 0x1.46492b7e549a7p-155, 0x1.ac92bc54c216ep-596,
     0x1.b3a082e3c03d8p-490, 0x1.702bcf9416677p-782, 0x1.eff4073acfd54p-170,
     0x1.cc04fd043a19p-788, 0x1.599932e79efd7p-824, 0x1.ff5f7d02670ffp-842,
     0x1.528fc269affc8p-884, 0x1.63965c1e475b1p-31, 0x1.08b0e642f5a2ep-797,
     0x1.8e359614ee252p-436, 0x1.2a55cf8f01166p-163, 0.0, 0x1.3603fd8351101p-58, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e74ae7ca53649p-312, 0x1.17a58325ad622p-684, 0.0, 0.0,
     0x1.8199c8cca8c3ap-92, 0x1.1813bd0939f92p-17, 0.0, 0x1.ab14cbff5ecf7p-964,
     0x1.72d8fbfb7bcb3p-591, 0.0, 0.0, 0x1.46229241f81dbp-535, 0x1.6c22321415cf4p-738,
     0x1.80ae19f61ea33p-327, 0x1.7d97b4f6c8f96p-815, 0.0, 0x1.72f81384a890fp-860,
     0x1.7a77eb092acdp-443, 0x1.3dd7c4a9f2d5bp-126, 0.0, 0x1.b0c1aaac1e0c5p-90, 0.0,
     0x1.c264e525999bbp-327, 0.0, 0.0, 0.0, 0x1.a792c9f49316cp-172,
     0x1.6cafda17c9958p-414, 0.0, 0.0, 0.0, 0x1.9f2f668b36161p-466, 0.0, 0.0, 0.0,
     0x1.fb88d5fa76394p-417, 0x1.8ed755ae66f32p-71, 0.0, 0x1.16330cda15dcfp-964, 0.0,
     0.0, 0.0, 0x1.22f31b1f3fec1p-737, 0x1.48a8f678169dep-74, 0x1.102c3f98993fep-354,
     0.0, 0.0, 0.0, 0x1.3c20d8ea52a65p-950, 0x1.3ff3cc8b6ce12p-853,
     0x1.c6e4d5efe2ee1p-589, 0x1.0e2b93a0063b1p-866, 0x1.480c469785885p-119,
     0x1.e9c1c707e4896p-221, 0.0, 0x1.08239a6a01e71p-826, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.26166ed3372adp-426, 0x1.c0a02b46dac1p-607, 0x1.e1f1cb82dd944p-840, 0.0, 0.0,
     0x1.3dabf2018bbb9p-474, 0.0, 0.0, 0x1.82e71d42210c4p-724, 0.0,
     0x1.d279610ac0fc9p-311, 0x1.1460c11c2a0dfp-1021, 0.0, 0x1.a99e95f8b8f1p-564,
     0x1.eb5689a7a9447p-303, 0x1.6a14116d7c8d1p-906, 0x1.73efc9217ac63p-593, 0.0, 0.0,
     0x1.8d3cbf9b7ec6dp-141, 0.0, 0x1.267cfb52326ddp-921, 0.0, 0.0,
     0x1.ce340447e7c69p-21, 0x1.ef89741aa114p-730, 0.0, 0x1.61647c6384b13p-815,
     0x1.4102e99806d97p-496, 0.0, 0.0, 0.0, 0x1.c272b410428aap-522, 0.0,
     0x1.09519096e6345p-895, 0x1.bc7984004e62ap-696, 0.0, 0.0, 0x1.9a1fac4c78ebap-709,
     0x1.c92ce294b99bbp-1016, 0.0, 0x1.b74868a6425b7p-119, 0x1.4d39a0a9578a3p-430,
     0.0, 0x1.acd560eddf155p-723, 0.0, 0x1.a624963e69291p-674, 0.0, 0.0,
     0x1.be7fa0dccffb2p-776, 0.0, 0x1.b493a270055bcp-368, 0x1.d18ff9b27d8f1p-527,
     0x1.ce287f73ce94cp-515, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3dfd40f543ebp-634,
     0x1.38ce11c645aa9p-64, 0.0, 0x1.2def7f411a1f7p-977, 0x1.09deb85045151p-424, 0.0,
     0.0, 0x1.8b4daf6c3ae49p-863, 0.0, 0.0, 0x1.7d8d4b7f6ac9fp-440, 0.0,
     0x1.d9dcba9e547e6p-290, 0x1.1f39bbd678567p-87, 0.0, 0.0, 0.0,
     0x1.1ffc439069d51p-852, 0.0, 0x1.983721ece08acp-676, 0.0, 0x1.c4ad6df5a71a5p-525,
     0x1.1345e1b43c254p-872, 0.0, 0.0, 0.0, 0x1.503d4c13ae87fp-782, 0.0,
     0x1.a7b8f806cc04bp-956, 0.0, 0.0, 0.0, 0x1.86e78231b08a5p-329, 0.0,
     0x1.06a35af1566e5p-498, 0.0, 0.0, 0.0, 0x1.a3cea0e3c513cp-820,
     0x1.d35b74365bccbp-653, 0x1.3d0fbd401ad08p-497, 0x1.f061fe9671156p-708, 0.0,
     0x1.ba55361fbbdf9p-299, 0x1.df1f2f53c6b75p-714, 0.0, 0.0, 0.0,
     0x1.06de1c3dfa02ep-334, 0x1.2dd75bb1676c5p-974, 0.0, 0.0, 0x1.ff018c461c8c1p-106,
     0.0, 0.0, 0x1.e7352337aa0a6p-186, 0.0, 0.0, 0.0, 0x1.0bbe190bc25d1p-519,
     0x1.a5d653d60ef1ap-602, 0.0, 0x1.817ae004adc89p-573, 0.0, 0x1.0178eb6a2dc86p-735,
     0x1.dc869224dd4a4p-668, 0.0, 0x1.4560a9bea094ap-766, 0.0, 0.0,
     0x1.08e1759798022p-71, 0x1.8e538abb67d65p-232, 0x1.501490d927c97p-284,
     0x1.971baf1b91c33p-921, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29886fa15208ep-844, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae9b7b108c3d2p-998,
     0x1.14ac33d4695abp-342, 0x1.1ed6568235c45p-990, 0.0, 0x1.ca0fa112901bfp-127, 0.0,
     0.0, 0x1.8afefc34b2fcep-347, 0.0, 0.0, 0x1.ec44cd8d8826ep-487, 0.0,
     0x1.cc875e0c6a481p-673, 0.0, 0.0, 0.0, 0x1.894d91db2d4ebp-390, 0.0, 0.0,
     0x1.866419b198998p-32, 0x1.c45c972553f34p-102, 0.0, 0.0, 0.0, 0.0,
     0x1.6d50d4cb514cep-88, 0.0, 0.0, 0x1.c5f7d27d75347p-889, 0.0,
     0x1.a0ae71165bb07p-726, 0.0, 0.0, 0.0, 0x1.29f9509bd6257p-455,
     0x1.18c5069d671a8p-968, 0.0, 0.0, 0x1.8d44b8ab8062bp-447, 0x1.ab0e8a5fef087p-386,
     0.0, 0x1.51099d69acb19p-864, 0x1.e8e12a135b411p-55, 0.0, 0x1.a7f9be588f798p-363,
     0x1.1de4398eaa6d6p-121, 0x1.8941a3b461467p-790, 0x1.d9ac183bdd4d1p-321, 0.0,
     0x1.fdc2d09e51957p-146, 0.0, 0x1.bcfa1b30ec4e9p-562, 0.0, 0.0,
     0x1.1a0bae5dedfbep-197, 0.0, 0x1.80f77eba70511p-399, 0.0, 0x1.78cb9d945e216p-738,
     0.0, 0.0, 0x1.9de1ed3c9911cp-639, 0.0, 0.0, 0x1.6c5b71257db56p-197,
     0x1.75dbd6472df8p-370, 0x1.398a0e74cb006p-967, 0x1.58fe126232b36p-431,
     0x1.d9aa2812f9bddp-363, 0.0, 0.0, 0x1.e7ef5f739af1cp-95, 0.0, 0.0, 0.0, 0.0,
     0x1.074b690d3294fp-523, 0x1.3798f93056a26p-375, 0.0, 0x1.8494079b60c12p-520,
     0x1.5676e817e188dp-100, 0x1.94157439585c5p-851, 0.0, 0.0, 0.0,
     0x1.af388f44ffebep-453, 0.0, 0x1.5b7252f88b615p-19, 0x1.0cca7747b1b1ap-652,
     0x1.ca7f7442b7505p-48, 0x1.17ea63d7a4461p-198, 0x1.b94a6f258ff6cp-376, 0.0,
     0x1.3e777cf06a83dp-905, 0.0, 0.0, 0x1.fb2f870e33ec7p-784, 0.0,
     0x1.29329809ed007p-577, 0x1.a0b2d9610fccep-542, 0.0, 0x1.144351e7e053bp-829, 0.0,
     0.0, 0.0, 0x1.daa13d62e5969p-440, 0.0, 0x1.fe0dd87bd9b28p-685,
     0x1.2ce88011bd2e5p-518, 0.0, 0x1.15b1cf17fbb44p-351, 0x1.6b141741c8759p-789, 0.0,
     0.0, 0x1.676545eb4f0c9p-610, 0x1.644a55fa76a16p-651, 0.0, 0x1.5b20cae09886bp-379,
     0x1.9dfde578e1fb1p-899, 0.0, 0x1.adf436ca2457cp-686, 0x1.8a3a31a9474c6p-562,
     0x1.394bb296301ccp-917, 0.0, 0.0, 0x1.74b140cd8288dp-918, 0x1.a925ddd4d17c2p-945,
     0.0, 0x1.a396ff615c39bp-841, 0.0, 0.0, 0x1.12a6ba7c67bcep-552,
     0x1.59fd407f108f8p-784, 0x1.66d15ef571c22p-899, 0x1.49cd0e5961738p-186, 0.0, 0.0,
     0x1.250b36e6acff7p-562, 0.0, 0.0, 0.0, 0x1.7b12b41f5eb2cp-617, 0.0,
     0x1.ac39c5dacd56ap-996, 0.0, 0x1.c7d693393483cp-989, 0x1.78f534a055927p-355, 0.0,
     0x1.a797d7700d20ep-627, 0.0, 0.0, 0x1.a06ea8cd73cb8p-125, 0.0, 0.0,
     0x1.03a2b362f59ffp-536, 0.0, 0.0, 0x1.14c1373263d44p-892, 0x1.95a73b2bc327bp-376,
     0.0, 0.0, 0.0, 0.0, 0x1.e27eff8ec9ed6p-118, 0x1.8eaca8c7e8024p-692,
     0x1.663f172167945p-581, 0x1.9891deadc9c92p-32, 0x1.7f83b1e6a30a1p-633, 0.0,
     0x1.b6fde414c5607p-768, 0.0, 0.0, 0x1.50211a4b7c5dp-840, 0x1.813eb69fac2c3p-427,
     0.0, 0x1.24960f991b494p-560, 0.0, 0.0, 0x1.294279bc85cebp-397,
     0x1.36c4fa898f90dp-612, 0x1.28d983a162239p-962, 0.0, 0x1.50b594b80090dp-657,
     0x1.929643263f94bp-436, 0x1.4a58d902e216ep-926, 0.0, 0x1.ef03687ee5ab2p-605, 0.0,
     0x1.c64ca70745056p-140, 0.0, 0.0, 0x1.de2637f610639p-194, 0.0, 0.0,
     0x1.1d22967f38356p-684, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.052d3e26ae03ap-966,
     0x1.d7f9d952893b3p-980, 0.0, 0.0, 0.0, 0x1.24307c5ca7163p-673,
     0x1.1730056c87b02p-394, 0x1.b150e27cfd41ep-147, 0.0, 0x1.c82f33abdcfbfp-326
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
            tmp1 = Sleef_log10d1_u10purecfma(tmp0);
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
    printf("Sleef_log10d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
