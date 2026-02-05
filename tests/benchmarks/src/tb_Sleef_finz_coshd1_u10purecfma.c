/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd1_u10purecfma.c --function \
 *     Sleef_finz_coshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.955df288c37cbp-959, 0x1.76d829aed55bap-288, 0x1.e1fb9d381dcc8p-766,
     0x1.3c61633a43d1fp-268, 0x1.23610ca293017p-203, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1bb7593a7afcp-458, 0x1.2c47e52b761dp-230, 0x1.ec91d0483260dp-619,
     0x1.89c90e48300dcp-746, 0.0, 0x1.dddcd609941cep-205, 0.0, 0x1.822245f0bbebdp-599,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93f8eed7fe71ep-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.05d968f32dc29p-263, 0x1.75232ef01b917p-351, 0.0, 0.0, 0x1.1892905c2f8cep-135,
     0.0, 0.0, 0x1.85b6fb99f1b99p-186, 0.0, 0x1.1a4ec6008313p-638,
     0x1.62405e37e69a5p-63, 0x1.25d7ef31fb826p-206, 0x1.c6f4af7afc19p-243, 0.0,
     0x1.b9989c346dc09p-917, 0x1.f643a1f6bf7ccp-621, 0.0, 0.0, 0.0, 0.0,
     0x1.076eb609a8f59p-981, 0x1.686330b7da9edp-206, 0x1.bd6cb8faebf93p-995,
     0x1.6d15428aec1f3p-185, 0.0, 0.0, 0.0, 0x1.74924712aaa33p-442,
     0x1.a9fc775f0e3c5p-361, 0.0, 0x1.ab27da3cd3f49p-564, 0x1.571859b322dfp-73,
     0x1.14b517fbf4915p-864, 0.0, 0.0, 0x1.027309b771f08p-860, 0x1.edf324e5e399cp-752,
     0.0, 0.0, 0.0, 0.0, 0x1.554dfd4a316ccp-24, 0.0, 0x1.e1e6dc9a0c058p-825, 0.0, 0.0,
     0x1.1d0d5b6e90af9p-111, 0.0, 0x1.a8dbdf1601292p-840, 0x1.80ec1f267f007p-348, 0.0,
     0x1.1ada25fc2083cp-858, 0.0, 0x1.d21602f6f9912p-587, 0x1.060ab69f7a78dp-436, 0.0,
     0.0, 0.0, 0x1.84d19d66519d5p-184, 0x1.b2a7b2088d05ep-760, 0x1.87555b59e91b7p-904,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e80a3fe59994ap-536, 0x1.2dd81bfe1e68fp-529,
     0x1.8ea38c22c781cp-811, 0.0, 0x1.37ac6c9fbbc96p-507, 0x1.6b0f285db7dccp-843,
     0x1.983d3e37c71edp-856, 0.0, 0x1.b964fe7ee1933p-338, 0x1.e625c64af71bcp-177, 0.0,
     0x1.0bc6f7d82abacp-555, 0x1.802b9b1598aadp-18, 0.0, 0.0, 0x1.da263c2237bd1p-720,
     0x1.a85e854048268p-326, 0x1.283955724aeb9p-262, 0.0, 0x1.33ac401ad5af2p-434, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d7deaa5f89e7ap-596, 0.0, 0x1.0e1683ad60882p-7, 0.0, 0.0,
     0x1.686a09cd4579bp-950, 0.0, 0x1.156fbd7895245p-38, 0.0, 0x1.b7a0cec3d41d2p-304,
     0x1.c9393a0e93dd8p-735, 0x1.97086dbf2bac2p-251, 0x1.7152e9f0fa324p-659,
     0x1.9fe5ab4b3992bp-649, 0x1.52d19a48f3386p-473, 0.0, 0.0, 0x1.517458a24e944p-746,
     0x1.ef9c3aee54ec5p-1017, 0x1.06263deccb7eap-433, 0x1.8fc97e2776851p-742,
     0x1.65b4994aec616p-810, 0.0, 0.0, 0x1.49858145f420fp-441, 0x1.227270179b67p-951,
     0x1.3d917d9b0933ap-549, 0.0, 0x1.2ff382aff062cp-701, 0x1.33970adbb7789p-41,
     0x1.487262135992ap-935, 0x1.2f9846397d23bp-34, 0.0, 0.0, 0x1.b0e9d8394c0bep-673,
     0.0, 0x1.ac9f6cbbf5bcep-168, 0.0, 0x1.e35a9358108c5p-699, 0.0, 0.0,
     0x1.a34a04b08b41cp-131, 0.0, 0.0, 0x1.cb41e52ccd8d8p-515, 0.0,
     0x1.64acd37e9c8ccp-725, 0x1.cc2bb94721293p-430, 0x1.61d880eb379d6p-278,
     0x1.de4ef8cdd4f62p-50, 0.0, 0x1.7464512daae32p-71, 0.0, 0x1.0e1f2c2710bc6p-382,
     0.0, 0.0, 0x1.2740fcdac4428p-663, 0x1.95b300e6597bp-769, 0.0,
     0x1.88b021cca2458p-930, 0x1.4f490d2522ccbp-223, 0x1.f8cd6ab426fb9p-620,
     0x1.6f0d4b8082a26p-44, 0x1.4e8949a6bbe9dp-77, 0.0, 0.0, 0.0,
     0x1.dab9670a39ac1p-540, 0x1.1e921b9fda8bcp-335, 0x1.7f62e67796382p-738, 0.0, 0.0,
     0x1.ee06b136d31c3p-566, 0x1.84af85ff5645p-363, 0.0, 0x1.76935853929eap-520,
     0x1.bf0716325f6c1p-242, 0.0, 0x1.cdf5a39d8b22ep-532, 0.0, 0.0, 0.0, 0.0,
     0x1.649afad0473fp-123, 0x1.79a50ccf6b381p-7, 0x1.04c63b519f807p-425, 0.0,
     0x1.342977f495ad6p-321, 0.0, 0x1.d6a82910d32ccp-5, 0.0, 0x1.c19336ed526ccp-279,
     0.0, 0.0, 0x1.ab1054245103p-401, 0x1.59cdd975d2d22p-145, 0x1.0bfb7b3ce2989p-516,
     0.0, 0.0, 0x1.daae553c5914cp-256, 0.0, 0x1.5876319036648p-190,
     0x1.bcce6eebe57cp-376, 0.0, 0.0, 0x1.26ad8bed3030bp-835, 0x1.1ffb560c279c1p-474,
     0.0, 0x1.1990d85a20165p-847, 0x1.b07f299f9a20cp-476, 0.0, 0.0, 0.0,
     0x1.e3a9745b2f6fdp-548, 0x1.fe2b59b76c6bdp-829, 0.0, 0x1.07f8cfab0662cp-727,
     0x1.6aed6dd6cf59ep-291, 0.0, 0.0, 0.0, 0.0, 0x1.f7731557237d9p-497, 0.0, 0.0,
     0.0, 0.0, 0x1.37ef6496ba48ep-730, 0.0, 0x1.7b1556027774fp-316, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.aa7fb2a5ba947p-436, 0x1.f70a516f3285dp-553,
     0x1.23ac6a411d2efp-1003, 0.0, 0x1.924c636d9c1a7p-326, 0x1.9b90b41fd8a77p-982,
     0x1.ff755c39ad4dp-547, 0x1.889460375d2a7p-635, 0x1.1354433e05745p-874, 0.0,
     0x1.cd40626ce5e9ap-816, 0.0, 0.0, 0x1.bcb8f9021a8bcp-438, 0x1.b02ce60485867p-939,
     0.0, 0x1.561e488eacd16p-296, 0.0, 0x1.20c57e025e19ep-738, 0.0, 0.0, 0.0, 0.0,
     0x1.a0e556fb66824p-424, 0x1.c443c4b789391p-93, 0x1.ec5dee54a7e7dp-519,
     0x1.daeae64f94e28p-563, 0.0, 0x1.9ecb92d8914ap-223, 0.0, 0x1.41fbe382f091bp-214,
     0.0, 0x1.72c9c266d7286p-252, 0x1.aff0a80c2eccp-369, 0x1.49661ca68ccf4p-727,
     0x1.6ab060fd5ac7dp-387, 0.0, 0.0, 0x1.f4654028f3972p-499, 0.0, 0.0,
     0x1.38ae6d07df87bp-698, 0.0, 0x1.0fa649ad8f825p-457, 0.0, 0.0,
     0x1.5f5d7b7adbfeep-226, 0x1.da63fd416250dp-957, 0.0, 0x1.92b40d01a2f75p-860,
     0x1.d0de59aacb29dp-320, 0x1.8310ca29a2655p-400, 0.0, 0x1.db1fe0f083917p-304, 0.0,
     0.0, 0x1.51ff335b2bf06p-138, 0x1.0e12057f715d9p-530, 0.0, 0.0,
     0x1.8d17a75346024p-290, 0.0, 0x1.4795706e39aadp-741, 0x1.01112d7615226p-465, 0.0,
     0x1.f988388cc35a7p-512, 0x1.a11cd8cb53236p-354, 0x1.23e095e9608cep-538, 0.0,
     0x1.9f327285c51ap-477, 0.0, 0x1.a986aff10606p-642, 0.0, 0x1.56d5ae9721921p-990,
     0.0, 0x1.8c4ac4e3ebf42p-701, 0x1.b646c6fd38c06p-753, 0.0, 0x1.5011a6c95a505p-948,
     0.0, 0x1.ed918d3854faap-948, 0x1.a8f750225ef4cp-141, 0.0, 0.0, 0.0, 0.0,
     0x1.0f7bcbdf885e9p-799, 0.0, 0x1.5a2d824784ce9p-35, 0x1.c5b0ad461487ep-777,
     0x1.2ba6bebb56062p-791, 0x1.c68cf802a8e05p-816, 0.0, 0x1.2b5b377506c33p-459, 0.0,
     0.0, 0.0, 0x1.f7edf4f19bc5cp-247, 0x1.6e49851079b85p-347, 0.0,
     0x1.d2bcac4aacc3fp-246, 0.0, 0x1.49fa817ca1152p-597, 0x1.80e6c7ff7b648p-133, 0.0,
     0.0, 0x1.a4b69ab93d182p-64, 0x1.9bd5e6a97bf9p-584, 0.0, 0x1.b51611ae37439p-970,
     0x1.4413b4627ef57p-790, 0x1.bfd3d51163efbp-338, 0x1.8ce1c7ee3638bp-102,
     0x1.d8c1b678ec919p-165, 0.0, 0x1.301c6245479dbp-377, 0.0, 0x1.0c7712f1488f3p-455,
     0x1.b83e907b80bddp-913, 0x1.0b1c329c367f3p-147, 0x1.e3c560d6da7cp-499, 0.0,
     0x1.e5f6212eee5fdp-535, 0.0, 0x1.9d45e92f14b62p-614, 0x1.b3a3d7266e047p-837, 0.0,
     0.0, 0x1.ce3ea35dffcdcp-730, 0.0, 0x1.d8132d8eb7fdp-245, 0.0,
     0x1.27bfa1bb9e2edp-190, 0x1.ffbe4866b9d01p-705, 0x1.7fee9c534db8p-298,
     0x1.a71c09adff15p-214, 0x1.bce26724d58e7p-586, 0x1.cd69809d0adf2p-44,
     0x1.3606eb04a18dap-647, 0.0, 0x1.0363a4a68b18fp-1017, 0x1.2bc0d13367d6dp-37, 0.0,
     0x1.4e93c1c5add0ep-882, 0x1.94ce064ec9228p-446, 0x1.2f3ea7eb6df07p-509,
     0x1.78a56d44996dp-818, 0.0, 0.0, 0.0, 0x1.25f10bfd3dc2cp-411, 0.0, 0.0,
     0x1.eb8b98493bb7ep-481, 0x1.0bf19246b8cf9p-319, 0.0, 0.0, 0x1.39b96ddb4bbbcp-455,
     0x1.4477e64cb2f75p-612, 0.0, 0x1.32632e6664876p-916, 0.0, 0.0,
     0x1.8d9e80f0562c2p-974, 0.0, 0.0, 0x1.5c8684ca63515p-382, 0x1.8dfbb8d1e81edp-597,
     0.0, 0.0, 0.0, 0x1.1c38e9d58282p-649, 0.0, 0x1.0310cef8b098bp-573, 0.0, 0.0, 0.0,
     0x1.607536d7af3bdp-976, 0x1.f28f59cfed204p-705, 0.0, 0x1.813fd43322fcp-110,
     0x1.d97301e1117dep-364, 0x1.ce6f1f5cba92ap-32, 0x1.7300c52f7228ep-403,
     0x1.28d01505be17ap-586, 0.0, 0x1.61d961cd3a72dp-161, 0.0, 0.0, 0.0,
     0x1.3e71901c9410fp-816, 0x1.1df5d1fa55648p-843, 0x1.0d9066ee3a9d8p-382, 0.0,
     0x1.4021f76e2c1cap-234, 0.0, 0.0, 0x1.0a40b103e00b1p-87, 0.0, 0.0, 0.0,
     0x1.191c0cdec0f34p-217, 0.0, 0.0, 0.0, 0x1.e99da1852046ep-910,
     0x1.df919177489dfp-527, 0x1.bb0f36d3180ep-214, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c91cbf2804ae8p-536, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d194c63cfcce7p-410, 0.0,
     0x1.bba139d4e570cp-388, 0x1.edf4b47c1b546p-308, 0.0, 0.0, 0.0,
     0x1.7af14efe49843p-13, 0x1.d20ac9b2f6485p-907, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a95ef9ec74ca6p-495, 0.0, 0.0, 0x1.2500a4a3e6665p-164, 0.0,
     0x1.25c5afb2649cdp-505, 0x1.21d2f6c2ddf17p-52, 0x1.e206ccd67a8dp-130,
     0x1.86aa0aacae50ep-869, 0.0, 0x1.bdfb2ab334c08p-751, 0.0, 0x1.366e9a02d7025p-583,
     0x1.37f8ed3463bccp-530, 0.0, 0.0, 0.0, 0.0, 0x1.ec3275438f03dp-370,
     0x1.2001f4d840daap-616, 0.0, 0x1.1604d25f7ddfap-691, 0x1.d8030bb72c005p-840,
     0x1.b20a37a89bb69p-761, 0.0, 0.0, 0x1.d56e224af929bp-804, 0x1.12e9cfcfe3b88p-669,
     0.0, 0.0, 0x1.35df915dd5f58p-677, 0.0, 0.0, 0.0, 0x1.a0801bb42ea9cp-25,
     0x1.2b9e8897d88fap-786, 0x1.3c19330a1e71dp-332, 0.0, 0x1.82bca95f18d99p-373, 0.0,
     0x1.ae4c53a18fbeap-1019, 0.0, 0.0, 0.0, 0x1.f17c7721f280ep-596, 0.0, 0.0, 0.0,
     0x1.b3a6e6078ba38p-328, 0x1.49386f19d7846p-418, 0x1.25acbad40566bp-309,
     0x1.8ff81526efbddp-399, 0x1.0f6a2fb1d6593p-1002, 0x1.8223b8b892f7ap-718, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.613d0cee35644p-876, 0.0, 0.0, 0.0, 0.0,
     0x1.a604072ae5dd4p-430, 0.0, 0x1.7e6341bb1a47ep-317, 0x1.ade0b519c4293p-962, 0.0,
     0x1.df5d6886488c7p-569, 0.0, 0.0, 0x1.ced35a798c9d9p-238, 0.0, 0.0, 0.0,
     0x1.a4f353ce677b5p-245, 0.0, 0x1.c4a841ae1166p-190, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.344527c7627c1p-494, 0.0, 0x1.73dda81257d16p-321, 0.0, 0x1.2918c76e0f99dp-471,
     0.0, 0.0, 0x1.5574e7b5ee101p-685, 0x1.2a7d63a7b4f0bp-940, 0.0,
     0x1.98d90b814170ap-963, 0x1.3573ab844cfc4p-389, 0x1.bec8f3ce8bb46p-990,
     0x1.2ef25e67b1256p-287, 0x1.7a24d105be0f1p-966, 0x1.14080c54591abp-968, 0.0,
     0x1.0ef53eb3c136p-498, 0.0, 0.0, 0.0, 0.0, 0x1.9f409b683d8b5p-904, 0.0,
     0x1.a815975e3e658p-763, 0.0, 0.0, 0x1.53f3f55950315p-726,
     0x1.8f2fc6d946969p-1017, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ae9279b4f088cp-733, 0.0, 0.0, 0.0, 0.0, 0x1.0428086269d8bp-946,
     0x1.330f209a62c7p-758, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2812a5950e90dp-386, 0.0, 0x1.186926c067f0ap-184, 0.0,
     0x1.947717a64da64p-1010, 0x1.cccf0b7ddd7b7p-23, 0x1.577dfb827d0aap-688,
     0x1.61a29d7c40e2bp-533, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e9038ac78b57p-155, 0.0, 0.0, 0x1.c94cdd1d36e2ep-195, 0x1.65615e161c2a8p-534,
     0.0, 0.0, 0x1.04fe5700d86ccp-684, 0.0, 0.0, 0.0, 0x1.fd3b5f73e94d3p-290,
     0x1.22f032af04788p-217, 0.0, 0.0, 0x1.7b713528f597ap-447, 0x1.0433301bf7271p-615,
     0x1.ac729379b7e23p-258, 0x1.f88e85543941dp-213, 0x1.7564d4c38e732p-306, 0.0, 0.0,
     0x1.e89f8ecd28a42p-951, 0x1.1ac5b3ce360c3p-918, 0x1.206c08fccaa3p-25, 0.0, 0.0,
     0.0, 0.0, 0x1.30cc2991917eap-25, 0.0, 0x1.6aa7fce7792e4p-589, 0.0,
     0x1.0cf493e66d8fcp-270, 0.0, 0.0, 0.0, 0x1.4b7c8aa9d0486p-132, 0.0, 0.0,
     0x1.d6732b9e5ca52p-834, 0.0, 0.0, 0.0, 0.0, 0x1.61f0a74fe4932p-248, 0.0, 0.0,
     0x1.97118c67ad8ccp-831, 0.0, 0.0, 0.0, 0.0, 0x1.211cd6ba9e6cdp-452,
     0x1.e6b8bddbbb093p-151, 0x1.4bf2a978e04f6p-23, 0.0, 0x1.3b325ec1791f2p-850,
     0x1.aa4dbd7a6380fp-45, 0x1.810b7568c79c5p-848, 0x1.da73f1d83c792p-734,
     0x1.c2f97de378744p-109, 0.0, 0x1.f7d25b458db1p-132, 0.0, 0.0, 0.0,
     0x1.1a67374862c45p-796, 0x1.a32014504e806p-546, 0.0, 0x1.b5e4b12535c1bp-768, 0.0,
     0x1.79a70152ad26dp-166, 0x1.a714338389d89p-833, 0x1.b43538fd3c436p-311,
     0x1.acb4ace9a3e77p-919, 0x1.4a131d5bf0c36p-461, 0x1.5f45f8a1a5ad3p-673,
     0x1.ab75205d93cd6p-896, 0x1.3ddc45ec0aad6p-184, 0x1.c8dffd1767874p-360,
     0x1.5461136498db7p-493, 0.0, 0.0, 0.0, 0x1.ef66dfbdf9d64p-178, 0.0,
     0x1.039e6bb50b52bp-448, 0x1.329e8e91d886ap-439, 0x1.024940f9cce32p-242, 0.0,
     0x1.7a9e7d590683cp-552, 0x1.6d87ce73772b2p-863, 0x1.741805f0df39p-645, 0.0, 0.0,
     0x1.4cdf10042769ap-260, 0.0, 0.0, 0.0, 0x1.4034b4eaa1134p-359,
     0x1.ad2302f5e5ae8p-647, 0.0, 0.0, 0.0, 0.0, 0x1.7e2c3b71a249ap-170, 0.0,
     0x1.d5727c76c0885p-119, 0.0, 0x1.cd3d4542cf562p-177, 0.0, 0x1.7d233be47e668p-412,
     0.0, 0.0, 0.0, 0.0, 0x1.2608b3aa5b20cp-879, 0.0, 0x1.124977241debdp-591, 0.0,
     0x1.e0018954c2bf9p-919, 0.0, 0x1.02b82b700732fp-67, 0x1.34bdab82da528p-686, 0.0,
     0x1.4244d8c5c7c67p-39, 0.0, 0x1.ccaeacd0665fbp-952, 0.0, 0.0,
     0x1.d7298a59899b7p-270, 0x1.8786bcc3433e9p-124, 0.0, 0x1.a8cd8b2427b43p-62,
     0x1.927df36103897p-698, 0x1.b8a581eb5c5d1p-276, 0.0, 0.0, 0.0,
     0x1.719ed5cbaa2a8p-706, 0.0, 0.0, 0.0, 0.0, 0x1.a958f0c01d83p-370,
     0x1.c683ce89c2101p-267, 0.0, 0x1.b6aa0dc801f07p-211, 0.0, 0x1.5672119e4a704p-771,
     0.0, 0x1.39c361f3e51d4p-493, 0x1.3d4df6937472bp-215, 0.0, 0.0,
     0x1.c59be49f5abddp-692, 0.0, 0x1.d5cf35934606ep-956, 0x1.0f7515f8fa5a2p-488,
     0x1.85d9cdf9d4c21p-469, 0.0, 0.0, 0x1.1509af429474cp-808, 0.0, 0.0,
     0x1.01553539a558bp-612, 0.0, 0.0, 0x1.8e1b046b1e053p-805, 0x1.e615b5cd3a183p-703,
     0.0, 0.0, 0x1.eab31fe71e754p-10, 0x1.4a989e45cd174p-514, 0x1.2a49698ddeabep-642,
     0.0, 0x1.508a805fd149ap-366, 0x1.b80482b028c0dp-313, 0x1.3d16fea722ba8p-79, 0.0,
     0.0, 0.0, 0.0, 0x1.ba291823d5114p-266, 0.0, 0.0, 0.0, 0.0, 0x1.c6c0eae38c65p-796,
     0.0, 0.0, 0.0, 0x1.834092ec49494p-43, 0.0, 0.0, 0x1.267d849b5ed28p-627,
     0x1.893265bbce709p-391, 0x1.acd6b050cd3fdp-939, 0.0, 0x1.96b94cea7dc19p-788, 0.0,
     0.0, 0.0, 0x1.30fdd78008b42p-679, 0.0, 0.0, 0.0, 0x1.02c93b6f1d43p-177,
     0x1.1d77cf867d114p-674, 0.0, 0x1.763c5dde5da62p-945, 0.0, 0x1.83b78dfa7936ep-907,
     0x1.40ca694efdcc1p-637, 0x1.706851e58dab2p-66, 0x1.35396df3f9cebp-44, 0.0, 0.0,
     0x1.34f4e859b9bd4p-530, 0x1.c69f4f46f47ddp-85, 0.0, 0x1.09c6ede075916p-105, 0.0,
     0.0, 0x1.f22ae19c089bfp-653, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf9ba6cece43ap-116, 0x1.65c24f0b27377p-443, 0.0, 0.0, 0.0, 0.0,
     0x1.62dd8c379e94bp-276, 0.0, 0.0, 0x1.e14f107229334p-884, 0x1.3a9540e243896p-434,
     0.0, 0x1.168b184721f29p-243, 0.0, 0x1.042a154d0cab2p-476, 0x1.20c4e20be3653p-227,
     0x1.afb452e25858ap-698, 0.0, 0.0, 0x1.19df80e44c4a4p-888, 0x1.8d3a9209253fbp-765,
     0.0, 0x1.3c749c663ac12p-274, 0x1.1da3efba853ffp-316, 0.0, 0x1.74ea9a0f108bap-127,
     0.0, 0x1.020f84eb03b31p-184, 0.0, 0x1.29bbd8fb0417bp-831, 0.0, 0.0, 0.0,
     0x1.a2ddbef53d5d1p-959, 0x1.5d0d1e67ca5a9p-710, 0x1.284bbca66dd5bp-353,
     0x1.7b3e1b4ab7dfbp-549, 0x1.de76d5b9eb423p-794, 0x1.861e81a88d39dp-792,
     0x1.475ab7c701a23p-317, 0x1.895746a5255fap-830, 0x1.0d9ff04dca741p-443, 0.0,
     0x1.2bb2bd6049a34p-100, 0x1.44ea0063ebdcp-949, 0.0, 0.0, 0.0,
     0x1.d168d5c70c6aep-425, 0x1.c89c7098dab27p-690, 0x1.ec107fad2a40fp-641, 0.0, 0.0,
     0x1.932c0f01368e3p-32, 0x1.bdc48dc75c976p-574, 0.0, 0.0, 0.0, 0.0,
     0x1.c36bc1881a2c2p-588, 0.0, 0x1.1eefa432fc4bap-143, 0.0, 0x1.44f380c29943cp-448,
     0x1.7f91f3808e86dp-948, 0.0, 0.0, 0x1.d98a0dd80fc22p-152, 0x1.f05d784878e5fp-857,
     0x1.7f5f65d288d94p-817, 0.0, 0x1.7d5908a16c5d1p-861, 0x1.6a5f8813d4f88p-666, 0.0,
     0x1.55f9c963dac44p-334, 0x1.c34881e93c585p-702, 0x1.31a2297a9f522p-851,
     0x1.74080232140bdp-626, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82f89429439fap-430,
     0x1.8044ae09e76d8p-866, 0.0, 0x1.3e1531e4e5a47p-572, 0x1.a3b2ad7a5724ap-562, 0.0,
     0.0, 0x1.ac75515a20d5fp-231, 0x1.4978ee4329f0ap-1001, 0x1.51c47363f9fbap-362,
     0x1.e894fa98cf943p-123, 0.0, 0x1.9b08eca9d4e6fp-420, 0x1.8ac353c45cf5fp-341, 0.0,
     0x1.88ed0069b94ddp-910, 0.0, 0x1.b7e9299520a42p-502, 0.0, 0x1.b29286426300cp-794,
     0x1.5b94044242adfp-979, 0.0, 0x1.ab1700290d0bdp-375, 0x1.ff43e35a3e024p-58,
     0x1.5e483d448c1a5p-341, 0x1.0b93285a4b9fep-297, 0.0, 0.0, 0x1.dbd3c7de71d87p-307,
     0x1.ae09db1d0f43bp-326, 0.0, 0x1.1701218a4b06bp-420, 0.0, 0.0,
     0x1.cfcac6e6cfd59p-346, 0.0, 0x1.d9eb95c4c750fp-492, 0x1.ff4a627d16c08p-875,
     0x1.d93181869378ap-324, 0.0, 0.0
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
            tmp1 = Sleef_finz_coshd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_coshd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
