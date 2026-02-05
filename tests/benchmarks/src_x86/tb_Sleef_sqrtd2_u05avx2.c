/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd2_u05avx2128.c --function Sleef_sqrtd2_u05avx2128 \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f301841bc5fb1p-444, 0x1.7bfc10a52de35p-519,
     0x1.a1cfcaa6391dp-939, 0.0, 0.0, 0.0, 0.0, 0x1.4fc81bad5887cp-267,
     0x1.a53a576cda63p-308, 0.0, 0.0, 0x1.64eeb1c5607c9p-396, 0.0, 0.0,
     0x1.21cf32371a51ep-506, 0.0, 0x1.683827514ce08p-838, 0x1.374bb4d5ea353p-328, 0.0,
     0.0, 0.0, 0x1.a5f971852546fp-510, 0x1.efb3f88bce399p-438, 0x1.da479fea08003p-298,
     0x1.7d5f83c8cb519p-883, 0.0, 0x1.1d70c5cef47c9p-450, 0.0, 0x1.25807ef4d206dp-536,
     0.0, 0.0, 0x1.1c463e88d5c8ep-471, 0.0, 0x1.a6ab03cb882eap-607, 0.0,
     0x1.a7a852b7eb49p-327, 0x1.0091b9a3abf42p-632, 0.0, 0x1.5885a614030f7p-747,
     0x1.647adfddce30fp-313, 0x1.54f4b0c87e2f9p-868, 0x1.e40f1975c32ffp-901,
     0x1.3cff459b74025p-422, 0x1.afde4715be20dp-469, 0x1.770ece57627ap-373,
     0x1.daac1dfd3e7c9p-32, 0.0, 0x1.b3bc765fd9ac2p-241, 0.0, 0x1.cd329d3ef262p-846,
     0x1.d3d5dd0ef7e16p-840, 0.0, 0x1.e6404d9bbddeap-239, 0.0, 0.0, 0.0, 0.0,
     0x1.f9e70f13d11c4p-220, 0.0, 0x1.5d9b6ffbe0d66p-46, 0x1.70f41b9e9ec42p-761, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d51d8e2c0901ap-586, 0x1.a59d83159d4ffp-930, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.df858b4eabf48p-165, 0x1.b4e3fc175a415p-660, 0.0,
     0x1.6098d12f77196p-459, 0.0, 0x1.59c4cb07bafc4p-910, 0.0, 0x1.b887132bfc40bp-103,
     0.0, 0.0, 0.0, 0x1.d6ccab856958cp-910, 0.0, 0.0, 0x1.3a75ed9481093p-909, 0.0,
     0x1.131e38559261fp-911, 0x1.c847c82e2f893p-804, 0.0, 0x1.49ee79eb22646p-405, 0.0,
     0.0, 0x1.0558c1c3107ecp-906, 0x1.1f8a83d2a5273p-26, 0x1.e74838d2df494p-42, 0.0,
     0.0, 0x1.4d9c077e9c5p-612, 0x1.e7723ffc15c27p-486, 0.0, 0x1.8d8a745e80955p-602,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48a125448732fp-969, 0.0, 0x1.75caad4ddf881p-769,
     0x1.51c254b8f7b5ap-126, 0.0, 0.0, 0.0, 0x1.3f9161030a4c5p-580, 0.0, 0.0,
     0x1.9d318f226cbbap-222, 0x1.2144d4ab0c8cdp-579, 0x1.6b13993fff205p-42, 0.0, 0.0,
     0x1.32f77783a9fbfp-561, 0x1.888ad5b7cb89ap-548, 0x1.82bb0d9568f4ap-541, 0.0, 0.0,
     0.0, 0x1p0, 0.0, 0x1.2756bb6e64bbfp-62, 0x1.d54429a2519c5p-393,
     0x1.59b9d6d1b8747p-583, 0x1.f2971f804dcf7p-985, 0.0, 0x1.84f3b70d0ebd1p-849,
     0x1.57f8a5bf284a7p-176, 0x1.c96f5a545de54p-648, 0.0, 0.0, 0.0,
     0x1.fa73ed591fb4cp-370, 0x1.510821532bca7p-927, 0x1.9165be99efc52p-841, 0.0,
     0x1.2ddf0c76a9c83p-554, 0.0, 0.0, 0.0, 0.0, 0x1.40b11e06bea92p-785,
     0x1.82e344edaa629p-409, 0x1.cc8b732638bbfp-795, 0.0, 0x1.a6a9eb82fa1d1p-208,
     0x1.f5b5e8602ebfbp-118, 0x1.8470025d28bf6p-654, 0x1.430c598f91414p-702, 0.0, 0.0,
     0.0, 0x1.5a46f3e949efap-873, 0x1.d6eb2f01b344ap-664, 0.0, 0x1.ec329262c23b3p-793,
     0.0, 0x1.4e524916fa551p-723, 0.0, 0x1.808926bf57572p-751, 0.0, 0.0, 0.0, 0.0,
     0x1.85e7262932329p-424, 0x1.db73f583609f4p-233, 0.0, 0x1.530bde9938edap-496,
     0x1.5557b8ba4c628p-660, 0x1.474acb8576122p-898, 0x1.e02e1909894f5p-83,
     0x1.fd7408ea84c3dp-159, 0.0, 0.0, 0.0, 0.0, 0x1.4a54c12b692eap-633,
     0x1.907857e24a566p-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.46ab2d1ab4658p-479, 0.0,
     0x1.21f951cb73838p-577, 0.0, 0.0, 0.0, 0x1.59b35d73e198p-887, 0.0, 0.0,
     0x1.85839d0836ebp-771, 0.0, 0.0, 0x1.53d8240df05f3p-267, 0.0, 0.0, 0.0,
     0x1.c84293b280764p-274, 0.0, 0.0, 0.0, 0x1.84ff9a571591cp-607, 0.0,
     0x1.d487386a509c5p-4, 0x1.ab295ae15d32dp-145, 0.0, 0.0, 0x1.a055b8d043f78p-567,
     0x1.138545836e508p-272, 0x1.cd2684ce85385p-702, 0.0, 0.0, 0x1.149f74b137263p-288,
     0.0, 0x1.cc628e00c3cd5p-812, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b943b6cc0c74p-589,
     0.0, 0x1.326f7d9271803p-971, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45aa55bf5845cp-275, 0x1.e265970cb0f54p-391, 0.0, 0.0, 0.0,
     0x1.795181c4108dp-209, 0x1.a2019fc04e26ep-993, 0x1.91077d7a6696fp-511, 0.0,
     0x1.084f92ce2936ap-505, 0.0, 0.0, 0.0, 0.0, 0x1.5d60b1c68b7b7p-874, 0.0,
     0x1.eb09d465a677dp-587, 0.0, 0x1.5597f8bee3dc6p-105, 0.0, 0x1.a2e880a4d7264p-394,
     0.0, 0x1.917c6cdc07f18p-514, 0.0, 0x1.64d7f8f741a94p-640, 0x1.3afdef2b8e1ap-168,
     0.0, 0x1.ed8ff30a2d33p-715, 0.0, 0x1.a57f779d35333p-230, 0x1.63b23cb9e719ap-1016,
     0.0, 0x1.f65106e65d34dp-356, 0.0, 0x1.6919ba8dd7648p-842, 0x1.f35bafc312b68p-251,
     0.0, 0.0, 0.0, 0x1.a858515c91849p-817, 0x1.68ba2e4cf9d35p-195, 0.0, 0.0,
     0x1.f1e952b842aa4p-391, 0x1.ac6fb9e6806ebp-704, 0x1.217451dfb011p-207,
     0x1.bbbd7b08dcdafp-942, 0x1.6009d969c5ed7p-264, 0x1.2902965bfab21p-291, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.acc8bf494b1dap-996, 0x1.88d008abeff04p-942,
     0x1.7286f18fc61f2p-839, 0.0, 0x1.52423e2503874p-730, 0.0, 0.0,
     0x1.2d41c1acb9fb8p-855, 0.0, 0.0, 0x1.b82b42ccefc4cp-401, 0x1.041da7e355776p-997,
     0.0, 0.0, 0x1.a8ff35c3bdd14p-341, 0.0, 0x1.6c5012db81fd2p-29, 0.0,
     0x1.c747ec0d527c8p-158, 0x1.9f3f22bf80dd5p-639, 0x1.5da399d31f326p-299,
     0x1.d2bc7607b9d9fp-433, 0x1.3eb1a7316b191p-352, 0.0, 0x1.e90bcbe11f4ecp-182,
     0x1.0be37aa4fbaf6p-325, 0x1.bb832e6bff888p-548, 0x1.c427ebbc60492p-1008,
     0x1.597e07f38974dp-878, 0x1.a14925d2cd54cp-421, 0x1.6b59b39dbdfe7p-96, 0.0,
     0x1.7657e1f7c6aaep-157, 0x1.0f6dd7fcbd094p-5, 0.0, 0x1.be53cef905585p-656,
     0x1.c46f302130658p-22, 0x1.6befbc596fe82p-612, 0x1.ff242dd9b4e41p-838, 0.0,
     0x1.d1f77b606eed1p-461, 0x1.015a3fa8588cdp-900, 0.0, 0.0, 0.0,
     0x1.7270fc0f365d5p-78, 0x1.e2e2aad26f3c8p-742, 0x1.86a4c998fe3f3p-565,
     0x1.a148cda507c93p-364, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.184e122ef9ff9p-818, 0.0,
     0.0, 0.0, 0.0, 0x1.ce803ed1db40ep-773, 0x1.e7d472fef1ddap-258, 0.0,
     0x1.95ff9d82511bp-373, 0x1.8dfea68cc758p-895, 0x1.314dd0ec31dadp-366, 0.0, 0.0,
     0.0, 0.0, 0x1.5ad76f82cd221p-49, 0x1.04cb7004e45p-838, 0.0, 0.0,
     0x1.9c0a9e9cc55f9p-784, 0.0, 0x1.93dfdab6fc9cfp-983, 0x1.b307c5f57435cp-567,
     0x1.85a97e14c6fbfp-1000, 0.0, 0.0, 0x1.dcee688b609cap-660,
     0x1.14c1adfb73affp-730, 0.0, 0.0, 0x1.4e4b148d742b7p-480, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c3cf68d1bcf1p-421, 0.0, 0x1.44e572cfc5a3cp-835,
     0.0, 0.0, 0.0, 0x1.7b9ca63994cd1p-241, 0x1.756fdfbe1f4f5p-332, 0.0,
     0x1.b1fc998be42efp-438, 0.0, 0x1.0f6649112da75p-623, 0x1.8e93587facb6fp-66,
     0x1.9439af602d901p-638, 0x1.19d7fbb5ce42ap-379, 0x1.0b46b2c19bc92p-585,
     0x1.62de976ddd6bep-450, 0x1.b963c3b30897ep-176, 0.0, 0x1.2037d91c1a3acp-602,
     0x1.c32ac4eebea8p-199, 0.0, 0.0, 0.0, 0x1.393d85adac7c9p-96,
     0x1.7999109185e17p-911, 0x1.3952a8be9133p-480, 0.0, 0.0, 0x1.fb4bb9496d458p-604,
     0x1.d0f379eccf8eap-107, 0x1.ad9808a15e39fp-135, 0x1.c08e148394156p-539, 0.0,
     0x1.d2477af455066p-52, 0x1.56f47ec32c0fp-663, 0x1.12f9d62ad9b28p-582, 0.0,
     0x1.dea4bc10395edp-872, 0.0, 0x1.c176ae772ea2fp-71, 0.0, 0x1.659e032479dfep-139,
     0x1.00dd158efdbcbp-869, 0x1.09041fa549ffep-691, 0x1.1fafa130d231ap-330,
     0x1.c5c708f2d2fbap-36, 0x1.fe79301f9e04fp-134, 0x1.20dc8fd9e3b1dp-68, 0.0, 0.0,
     0.0, 0x1.0fa8497305e46p-355, 0.0, 0x1.15404263b2d6fp-415, 0x1.3cf7e90e01dc6p-519,
     0x1.4a484351afb6fp-866, 0.0, 0x1.b450396e42ebdp-17, 0x1.417a47a4669bdp-666, 0.0,
     0x1.56a11eec1d93dp-195, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.480a18a8fc144p-824, 0.0,
     0x1.061afb1247b93p-163, 0.0, 0x1.9ad6dff76994dp-907, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5c9a67e502b17p-715, 0x1.3690db5fd91c1p-218, 0x1.28b35b2bf5471p-232,
     0x1.97a33cda6250dp-866, 0.0, 0.0, 0x1.15c20ecd7b20fp-961, 0.0, 0.0, 0.0,
     0x1.1998279de2d13p-342, 0.0, 0x1.0e0b649b1a567p-495, 0.0, 0.0, 0.0,
     0x1.da04b1b8bd11p-79, 0x1.f749ffd563e3ap-141, 0x1.010607ab5c9ecp-77, 0.0,
     0x1.22c7e8a47a53cp-548, 0x1.9a60ab2e7f4a7p-849, 0.0, 0x1.1809f025e0bf1p-176, 0.0,
     0x1.7d4ffe0c7248cp-380, 0.0, 0.0, 0x1.89e3bdaa7e7fap-149, 0x1.dde9768122a78p-960,
     0x1.95cfe47696f56p-896, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6aac31cd93f5fp-316,
     0x1.8cd681f46965ep-586, 0.0, 0x1.ce79ca157d272p-784, 0x1.c33b0920bf798p-658, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c332c59345596p-445, 0.0, 0.0,
     0x1.e47862ae7c64fp-380, 0.0, 0x1.9962d805773c9p-415, 0x1.f4a34cdbbceb4p-470,
     0x1.b667573e92311p-256, 0x1.d7b96a24d0d08p-901, 0.0, 0.0, 0.0,
     0x1.19914877d451ap-704, 0.0, 0x1.b4f3d5eebe1a1p-414, 0x1.2d4b888fb9827p-576,
     0x1.cb61d0db36f8bp-816, 0x1.76270f4a7ea71p-814, 0.0, 0.0, 0.0,
     0x1.9531f9dbfde93p-511, 0.0, 0x1.76fc002d49901p-697, 0x1.3ed5eebc88316p-953, 0.0,
     0x1.be4c8fa6a5f19p-652, 0x1.c4df6160df0ap-105, 0.0, 0x1.ccadc3e405da3p-966,
     0x1.a9a384474143ap-970, 0x1.5d4c862afe9f2p-66, 0.0, 0.0, 0.0, 0.0,
     0x1.df9b0376736bfp-611, 0x1.7ff99e068eb32p-193, 0.0, 0x1.46494e15b6e57p-649, 0.0,
     0.0, 0.0, 0.0, 0x1.00a8abd94fccep-320, 0.0, 0.0, 0.0, 0.0,
     0x1.cda4b2d9a0fc7p-471, 0x1.843a3a62c340bp-223, 0.0, 0.0, 0.0, 0.0,
     0x1.fafa795c5b3d1p-4, 0.0, 0.0, 0.0, 0x1.c7970f1892c6dp-853, 0.0,
     0x1.6e4fa6dd1c5fcp-332, 0.0, 0x1.eb491d6d7bb89p-672, 0.0, 0x1.af261b10faf04p-226,
     0.0, 0x1.3e9876b33403ap-463, 0.0, 0.0, 0x1.e8ada26dd8a1dp-868,
     0x1.d27d1347a282ap-888, 0x1.4e61f0d12b37fp-970, 0x1.b8adeea857737p-468,
     0x1.cdc85267d4399p-396, 0.0, 0x1.3c91104eac4ffp-597, 0.0, 0x1.cb7639ee9dae3p-952,
     0x1.f142825a69de2p-804, 0.0, 0x1.25d92cd49f448p-828, 0x1.d9d02dec4e51p-286,
     0x1.ebac2c1c4cb86p-414, 0.0, 0x1.d806660788d0bp-674, 0x1.eafedee1c970bp-216, 0.0,
     0.0, 0x1.a84035c87c6cap-170, 0.0, 0x1.43145ade0e71bp-666,
     0x1.9b30beecd25fcp-1012, 0.0, 0.0, 0.0, 0.0, 0x1.62f5f1e14ad03p-377, 0.0, 0.0,
     0.0, 0.0, 0x1.c92c5801e72d9p-338, 0.0, 0.0, 0x1.80580e1d05a72p-926,
     0x1.224f24bed19bbp-767, 0.0, 0.0, 0.0, 0x1.958d578000269p-189, 0.0, 0.0,
     0x1.ab2a7de9d4809p-750, 0x1.2d8dd09f20b64p-119, 0x1.92daaeee5317ap-572, 0.0,
     0x1.53fc56e1342c5p-371, 0.0, 0x1.00f026fd7a62ap-701, 0.0, 0x1.7849ffa6ebf8p-723,
     0.0, 0.0, 0x1.ea1532e455154p-6, 0x1.cecd9aa031c5p-632, 0.0, 0.0,
     0x1.3d8d0620e0364p-630, 0x1.6c49cd0677579p-833, 0x1.675d02584dc95p-474,
     0x1.064cdba054962p-749, 0.0, 0x1.65ed7d41228fap-501, 0x1.5a0eb150f877fp-211, 0.0,
     0.0, 0x1.ad964170d9066p-913, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1967a530cf7b4p-11,
     0x1.eab1587a5b198p-721, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c5a032f11ab69p-746, 0.0, 0x1.f60f8b9dfe597p-286, 0.0, 0x1.165cc38e4f1c4p-561,
     0x1.d2a968127213dp-742, 0.0, 0x1.4f9c873c59527p-287, 0.0, 0.0,
     0x1.2b9156e31ad8cp-378, 0.0, 0.0, 0x1.31e6a0b1bd5a2p-158, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8d525dd97ad61p-259, 0x1.2b761ad21cdc5p-515, 0.0, 0.0,
     0x1.09ab86ee04bc3p-423, 0.0, 0x1.d34e77e42b84bp-584, 0x1.b211290fa9d9ep-802,
     0x1.20d64ab3b7eb5p-33, 0.0, 0.0, 0.0, 0x1.7347a214b3b06p-602, 0.0, 0.0,
     0x1.d315fa3afff14p-597, 0x1.1d08ded82c6e6p-862, 0x1.fb486cdfadb38p-546,
     0x1.9bd274ab4af5p-706, 0.0, 0.0, 0.0, 0x1.6b416061a2a1cp-231,
     0x1.1fe7aa5ab36b5p-591, 0.0, 0.0, 0x1.37b9b9b1a330dp-837, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.259d48df2b62cp-328, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.401b6a5fcf87p-450, 0.0,
     0x1.bd4365b3e13bfp-981, 0x1.9e6fba690177ap-218, 0x1.a4ec7650f31f7p-111, 0.0, 0.0,
     0.0, 0x1.ede0f4049afecp-194, 0.0, 0.0, 0x1.abe5cf45a6591p-258,
     0x1.54e146cec7cbap-136, 0x1.66136777b04bbp-516, 0.0, 0x1.d033e05043ddfp-347, 0.0,
     0x1.fa13e3ef54958p-573, 0.0, 0x1.bef1e3094d6d3p-983, 0x1.f3a61bc0b8162p-384, 0.0,
     0x1.85cc67e809613p-474, 0x1.0506fadeece58p-325, 0x1.a2a219e94d8e3p-313,
     0x1.e444f3169ca6fp-226, 0x1.992aa71420dc5p-591, 0.0, 0x1.e782be241f8eap-38, 0.0,
     0x1.8edbb817d6d74p-801, 0x1.5dff087ca0cd5p-618, 0.0, 0.0, 0x1.3086753bb10dfp-618,
     0.0, 0.0, 0x1.3ff5191f35f46p-408, 0x1.430eccdee68b4p-743, 0x1.cb3b71e7040a5p-681,
     0.0, 0.0, 0.0, 0x1.f4aec984af2fp-504, 0x1.6a89f525b9561p-161,
     0x1.0c04c6ed5b151p-670, 0x1.fc2b25f23b496p-1, 0x1.f306aacd658bfp-105, 0.0,
     0x1.bfb71031a7804p-17, 0x1.3f5f41c87d55dp-852, 0x1.58fd686b5a77ep-314,
     0x1.d50064b8c507dp-882, 0x1.06a9ec240e74ap-146, 0.0, 0.0, 0.0,
     0x1.8927d23df46bcp-360, 0x1.d8490b5968dd5p-799, 0.0, 0.0, 0x1.1074cdc65c71ep-615,
     0x1.ac73c8a077cdbp-156, 0x1.601d3248a6d3dp-886, 0.0, 0.0, 0x1.b324991e2b3a3p-758,
     0x1.857bd8fe685e2p-403, 0.0, 0x1.f939e57d17e0ep-22, 0.0, 0x1.18903d21c64abp-857,
     0.0, 0x1.bfde4a0cfbb94p-208, 0x1.721c54daf471cp-416, 0x1.b4b7fae116d96p-408,
     0x1.1e68a4ec2674cp-764, 0.0, 0x1.75ebc4ee1a32ep-531, 0.0, 0.0,
     0x1.0063133425401p-11, 0x1.3aff0cdb738b1p-736, 0x1.cfa3179d161c8p-285,
     0x1.0f10b6e18a1bcp-121, 0x1.526b7f536e5ccp-72, 0.0, 0.0, 0x1.51b434f16dc35p-366,
     0.0, 0x1.b4922dceaaf71p-736, 0x1.fd4a0f43fa686p-239, 0.0, 0x1p0,
     0x1.4571a04404018p-980, 0.0, 0.0, 0.0, 0.0, 0x1.f4dd8bfaca75p-910,
     0x1.0ee7148d5c4dep-650, 0.0, 0.0, 0.0, 0x1.2518642c487fdp-655,
     0x1.7dd8d43ed796p-92, 0.0, 0.0, 0x1.c1430da02cf99p-444, 0.0,
     0x1.89398bd477892p-1015, 0x1.8278c4ada5013p-492, 0x1.0577f0113f189p-898,
     0x1.63b75a033d144p-645, 0.0, 0x1.5640a3c97c5b3p-759, 0x1.fb68ffcdf625cp-418, 0.0,
     0x1.92727b71feeb4p-864, 0.0, 0x1.f1f52dd677074p-121, 0.0, 0x1.d6e00f2c0f7d9p-475,
     0x1.d9fa559e3053ap-174, 0.0, 0.0, 0.0, 0x1.79fe1b6ec58d1p-234, 0.0, 0.0,
     0x1.a54c1f5f2bef6p-462, 0x1.963c5f2edf157p-200, 0x1.ea72e35e8425ep-57,
     0x1.a8ba871691402p-853, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf1afef472a32p-157,
     0.0, 0x1.800f940517ebfp-1008, 0.0, 0x1.4e9803c2c7c15p-175, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f278edd078aa6p-36, 0x1.d7a8f92787a06p-478, 0.0, 0.0,
     0x1.d1ca18b8cbae8p-463, 0x1.6ba032c82f503p-955, 0x1.05cf17a72f104p-95,
     0x1.e307ffcc8b8fep-49, 0x1.685c880d0bf99p-880, 0x1.a445b0b69aecp-256,
     0x1.d5684913311b6p-996, 0x1.486671d817e96p-258, 0.0, 0.0, 0x1.c66c47b90b9bdp-730,
     0.0, 0x1.4ad3fca7580a5p-675, 0.0, 0.0, 0.0, 0x1.c9221c32ccddfp-371, 0.0, 0.0,
     0x1.0794275b5e499p-925, 0.0, 0x1.85a64ff0ee94cp-318, 0.0, 0x1.db75c54fb0a0dp-428,
     0x1.f4de9fcff1315p-896, 0x1.625d692b56181p-93, 0x1.611d5cfa75ed2p-292,
     0x1.3caa74dd0b295p-240, 0.0, 0x1.cc43b2ed87fdcp-921, 0.0, 0x1.37a4df99142cep-766,
     0.0, 0x1.a48ad9bd7d5c8p-396, 0.0, 0.0, 0x1.e7a396c44b241p-935, 0.0, 0.0,
     0x1.dd3531852ee07p-147, 0x1.cb34e3534ba77p-358, 0.0, 0.0, 0.0, 0.0,
     0x1.695ba9540e986p-884, 0x1.f3e52057c8b2p-532, 0.0, 0x1.1bb17c40a6046p-791, 0.0,
     0x1.1e428ecb68fa3p-684, 0x1.f13b92ae284a1p-108, 0.0, 0.0, 0.0, 0.0,
     0x1.8dc90a7b07fa8p-208, 0.0, 0.0, 0x1.281791cb49e03p-165, 0x1.e41a11430a2fp-599,
     0.0, 0x1.08b15e0c7da8ep-722, 0.0, 0.0, 0.0, 0.0, 0x1.9ec495666f45ap-844, 0.0,
     0.0, 0.0, 0x1.0081e7c7df718p-86, 0x1.9b7301014e8efp-433, 0x1.44373bbb6aa82p-686,
     0.0, 0x1.247ab50223dbcp-49, 0x1.aeda2834d6fb1p-966, 0.0, 0.0, 0.0,
     0x1.f9a4fb2520776p-717, 0x1.202782a049627p-483, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e7a2a3ff486b8p-232, 0.0, 0.0, 0x1.978e75830d9afp-21, 0.0,
     0x1.d54d3883957cbp-52, 0x1.aefd74184d8e1p-169, 0.0, 0.0, 0x1.00de3e1f8560ap-316,
     0.0, 0x1.265b6d0b32e8ep-921, 0x1.de08c73db0c4ep-11, 0x1.35475a79ffbep-236,
     0x1.82cf63b6feb6bp-446, 0x1.af7f5138efe66p-381, 0x1.a27de15367e24p-466, 0.0,
     0x1.1e939dd52b11ap-358, 0x1.de741bed5adb5p-590, 0.0, 0x1.4d5d34d84d50cp-942,
     0x1.7f95120ccf708p-576, 0.0, 0.0, 0.0, 0x1.3217aba089612p-575,
     0x1.ab43806d70734p-438
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
            tmp1 = Sleef_sqrtd2_u05avx2128(tmp0);
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
    printf("Sleef_sqrtd2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sqrtd2_u05avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
