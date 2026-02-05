/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd4_u35kvx.c --function \
 *     Sleef_finz_coshd4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.ac23ecd1efc5p-532, 0x1.1080e29d8b457p-691, 0.0,
     0x1.e1592c16960bep-649, 0x1.920961100cf79p-671, 0x1.832ec7086dd2dp-976,
     0x1.9101b86edca52p-672, 0x1.fc6dd3a9a8e6p-138, 0.0, 0x1.57ff09869cbbp-981, 0.0,
     0x1.bf733784347e8p-458, 0x1.0b2599d49b40cp-30, 0.0, 0.0, 0.0,
     0x1.52434bdf4960ap-134, 0.0, 0x1.62901b7a7f8b4p-363, 0x1.271ad087dd8ebp-479,
     0x1.7cd27a7aed08cp-943, 0.0, 0x1.76e20c8b1100bp-391, 0.0, 0.0,
     0x1.9079a470b2c4bp-592, 0x1.88f7a57aed653p-810, 0.0, 0.0, 0x1.1462644570b69p-704,
     0x1.4a9ac9f4fa621p-696, 0x1.8f7b2dc0352a7p-38, 0x1.5fd2677e4f845p-228, 0.0,
     0x1.024cc1bb15ff7p-501, 0x1.b743549bf2afep-53, 0x1.6d8ef840da452p-242, 0.0,
     0x1.bdd2ed06c18eep-270, 0x1.13767c242884p-994, 0.0, 0.0, 0x1.b31363e0739e9p-940,
     0x1.62d942b0e1f96p-921, 0.0, 0.0, 0.0, 0x1.83581f30d92fp-789,
     0x1.1b5c894f4c64dp-273, 0x1.833ca617612b1p-296, 0.0, 0x1.3113fb7ef398p-242, 0.0,
     0.0, 0x1.75610199a2b8dp-656, 0.0, 0x1.3d72448441765p-133, 0x1.0306510f56d22p-536,
     0.0, 0.0, 0.0, 0x1.43b5d92f2e23cp-844, 0x1.90f69b7f81003p-657,
     0x1.3e230aacb7f0ep-938, 0x1.3e84134a19f4fp-953, 0x1.4efd7c6b2e6a9p-580, 0.0,
     0x1.ea4872bd30942p-441, 0.0, 0.0, 0x1.5a6e816957633p-275, 0x1.b94ac453f5624p-840,
     0x1p0, 0x1.d560c42fc2963p-807, 0.0, 0x1.a707d112ad716p-843, 0.0, 0.0, 0.0,
     0x1.07f002ef96876p-292, 0.0, 0.0, 0.0, 0.0, 0x1.42b29dea0c55dp-303,
     0x1.42545fecef8e8p-839, 0.0, 0.0, 0x1.56249c8905539p-209, 0.0,
     0x1.6768fceb9370ap-76, 0.0, 0.0, 0x1.756e77c34a5f2p-575, 0.0,
     0x1.5c05f0fefed95p-221, 0.0, 0x1.74c0fce609b6cp-238, 0x1.1f3bcaa834dfap-286,
     0x1.a46f6adfd4fep-296, 0.0, 0x1.5bfdfbe84883p-964, 0.0, 0x1.075549c7931dfp-782,
     0.0, 0.0, 0.0, 0.0, 0x1.df7f26af48d4cp-997, 0.0, 0.0, 0.0, 0x1.abcc7df5c13dp-663,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.840de93abf262p-273,
     0x1.a2f04843bd99ep-806, 0x1.a5d8273c9166p-641, 0x1.528a496828f09p-177, 0.0,
     0x1.308700dfadd51p-211, 0x1.9700207992542p-184, 0.0, 0.0,
     0x1.f5253cff30cbcp-1020, 0x1.6d66561449bd2p-744, 0.0, 0.0,
     0x1.316e8c035f546p-824, 0x1.d1ca8971012a1p-763, 0x1.45d07b1c3df49p-792, 0.0, 0.0,
     0.0, 0x1.a0c44879a68b8p-37, 0.0, 0x1.cfb7f9e36aa08p-780, 0x1.83048916037edp-971,
     0x1.19f89f66f1272p-797, 0x1.ea51f06ec1586p-170, 0x1.341780c082acbp-203,
     0x1.9c87ed59d0b0fp-513, 0.0, 0.0, 0.0, 0.0, 0x1.1aa86b080ddd2p-568, 0.0, 0.0,
     0x1.0173675276a77p-990, 0.0, 0x1.d52da30e631p-229, 0x1.cdeba42789cb1p-53, 0.0,
     0.0, 0x1.e10ab17f61461p-705, 0x1.7f2348248ff7cp-695, 0x1.a8114c54c1b12p-426,
     0x1.895b013a7f80dp-14, 0x1.9760d34e5355dp-723, 0x1.dcf5605bd6aebp-142, 0.0,
     0x1.a3c0d4a8cd8dcp-936, 0.0, 0.0, 0.0, 0x1.d2bbb49d9c301p-798,
     0x1.ed3b38305a1d6p-1022, 0.0, 0.0, 0.0, 0x1.92c10f877d86ep-545, 0.0,
     0x1.31d23fb2659ddp-56, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d87166e3dc84ep-465,
     0x1.e6b85487bee8p-134, 0.0, 0x1.e8b6477cde38fp-968, 0.0, 0.0,
     0x1.e3496632c10fep-330, 0x1.f1c8432a71536p-179, 0x1.71b9326ea2846p-173,
     0x1.a204c6594206ep-809, 0x1.244a871454888p-423, 0x1.264143e611bep-794,
     0x1.68366b06dfd28p-881, 0.0, 0x1.0dff5b0b4512ap-218, 0x1.a54e3d396afc3p-20,
     0x1.f09ab2c9c5927p-819, 0x1.d8b60bab80026p-290, 0x1.6d048cc629554p-532,
     0x1.2b290c1ad5296p-380, 0x1.b50e053f3ac22p-690, 0x1.b58d02f39cfcfp-602, 0.0,
     0x1.759e152493ee9p-50, 0x1.543ba08bd6e45p-17, 0x1.0422195d78f18p-515, 0.0, 0.0,
     0.0, 0x1.ff573c7888649p-690, 0x1.1ed525cb4b8c3p-330, 0x1.f6de252677b2cp-671, 0.0,
     0.0, 0x1.7e4edee2dea6bp-725, 0.0, 0.0, 0.0, 0x1.4b62dbfab044ap-626, 0.0,
     0x1.c85f7d4e18313p-528, 0x1.9cefc596f418bp-799, 0x1.214afb7d1ad8bp-891,
     0x1.722994be973abp-1022, 0x1.a1deac5df5e06p-456, 0.0, 0.0, 0x1.29626e632bdf5p-70,
     0x1.4a66cda7a7ab3p-209, 0x1.26138e752d5ep-187, 0x1.65bbd66aae761p-929, 0.0, 0.0,
     0.0, 0.0, 0x1.b53e85c115179p-1012, 0.0, 0x1.8b23ba925bb0cp-586, 0.0,
     0x1.db51deff88cf8p-501, 0.0, 0x1.d6453fc2fee0fp-269, 0x1.af491a141dc61p-683, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.148ee43ab419fp-35, 0x1.5d3bd3c1f7516p-944,
     0.0, 0.0, 0x1.b6b088abfc4b6p-661, 0.0, 0.0, 0.0, 0x1.dae1e2ba9a174p-353, 0.0,
     0.0, 0x1.b0134c88b9e78p-938, 0.0, 0.0, 0x1.dab9f53c95fb2p-504,
     0x1.e4f8c718a7f8p-597, 0x1.ede32b8c44e95p-64, 0x1.0af36093cddfep-827,
     0x1.5a0df518149d2p-940, 0.0, 0.0, 0x1.cfc0d19f0c9e5p-44, 0.0, 0.0, 0.0,
     0x1.2f927b60801ebp-57, 0.0, 0x1.20c6bad8562f3p-535, 0.0, 0x1.1a06363f99ff4p-709,
     0x1.8126c4da2cb39p-674, 0.0, 0x1.2d7da12c4957p-1019, 0.0, 0x1.e3ad8fb16caf9p-215,
     0.0, 0.0, 0x1.58fae2687de71p-736, 0.0, 0x1.026d853fe4d41p-651, 0.0, 0.0,
     0x1.28e7c364d7301p-691, 0.0, 0.0, 0x1.311e46df53p-110, 0x1.f72907e451ab1p-31,
     0x1.858d30be2207ep-726, 0x1.a4ede83aaa6efp-554, 0.0, 0.0, 0x1.da95c471b0df3p-865,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5c34b3ea7046p-528, 0.0,
     0x1.c4238305d8d1dp-394, 0x1.1ec8f3c38db9ep-726, 0.0, 0x1.fab313716d3bcp-67,
     0x1.dc80b55566bbfp-895, 0x1.df16b43f2f017p-473, 0.0, 0x1.ca61f3f97ce5p-112,
     0x1.b5098560c1d74p-500, 0x1.9d154dfdacaf9p-194, 0.0, 0.0, 0x1.57302a5431d96p-814,
     0x1.b23c4b3e9b627p-6, 0.0, 0x1.7e7fe1a1bc0a9p-830, 0.0, 0x1.d90ac55ef1956p-798,
     0.0, 0.0, 0x1.40e30be707803p-534, 0x1.eb32c7c4327d8p-1006,
     0x1.f6328b65d9f23p-513, 0.0, 0.0, 0x1.8e825f9d62fa7p-237, 0x1.a5e933fa4410cp-18,
     0.0, 0x1.3f8ecd622f5a8p-266, 0x1.62b7b6f12b8e6p-782, 0x1.a4625ed002ee7p-62,
     0x1.8aea45467095bp-191, 0.0, 0x1.f4a1bfdd5d6c1p-401, 0x1.34d2ce085fbcap-289, 0.0,
     0.0, 0.0, 0.0, 0x1.519d5cf431dc4p-552, 0x1.00077e201a6a8p-279, 0.0,
     0x1.cb123befca2fdp-757, 0.0, 0x1.865983fb2ce87p-208, 0x1.8bb560adb7f49p-141,
     0x1.0c2392c84916cp-285, 0x1.c10ffbfc752b4p-8, 0.0, 0x1.6c05ade6b9b31p-955, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d2064fbafc4d4p-631, 0x1.655ee5ea3b117p-664,
     0x1.cde6fa7259461p-353, 0x1.a0163811df8a4p-538, 0.0, 0.0, 0.0,
     0x1.aba17f2009236p-697, 0x1.435918e059868p-823, 0x1.45903a6e375a6p-575, 0.0, 0.0,
     0x1.58786fe674c9bp-206, 0.0, 0.0, 0.0, 0x1.d905029f2cb06p-495,
     0x1.dd4f18547b002p-441, 0.0, 0.0, 0.0, 0x1.8b2bce206db7cp-552, 0.0,
     0x1.329058889f52fp-696, 0x1.124349e4f2cdfp-713, 0x1.e061bc1c641f9p-327,
     0x1.5d824d3afcf85p-739, 0x1.6ac95cfd7a30cp-275, 0x1.0b085cefd07e1p-52,
     0x1.accf6ff191facp-604, 0.0, 0.0, 0.0, 0x1.3cddac14a34f1p-866, 0.0,
     0x1.ccee87c9702a7p-131, 0.0, 0x1.e19cd1ac8a992p-552, 0x1.e449f3dcd2c0ap-80,
     0x1.c980db78019d4p-919, 0.0, 0.0, 0x1.1d31de09af20cp-760, 0.0, 0.0, 0.0,
     0x1.075f491173b9cp-989, 0.0, 0x1.35aaeb4452ae5p-741, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.51aa2a5abaf45p-202, 0x1.232b8e0147c46p-102, 0.0, 0x1.2de3000d44d85p-39,
     0x1.42d55731e3283p-232, 0.0, 0.0, 0x1.ec031ab0fd931p-196, 0x1.8e81ed32ceca5p-290,
     0x1.a309529fa9459p-835, 0x1.e356a8038798dp-564, 0x1.372a1d4bf0a2p-66,
     0x1.ab2526ec4eed9p-571, 0.0, 0.0, 0.0, 0.0, 0x1.afc7820bd37cap-644, 0.0, 0.0,
     0.0, 0x1.483c9be1885c2p-727, 0.0, 0x1.a09875335780cp-277, 0.0,
     0x1.db0169b849465p-415, 0.0, 0x1.7969264bea357p-259, 0x1.dabbbf4f27a33p-152,
     0x1.0ff8c240f6e15p-698, 0x1.8a5f738544d75p-63, 0.0, 0.0, 0.0, 0.0,
     0x1.7b5b387b1d69bp-807, 0.0, 0x1.b9a64a61c6b19p-310, 0x1.008a7bcc78dbfp-805, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.10739a7ae2e56p-592, 0x1.285a35a6601b4p-424, 0.0,
     0x1.b69d020f772c7p-400, 0x1.75c42e9ae17dep-404, 0x1.9fe079afda4e1p-873, 0.0, 0.0,
     0.0, 0x1.6ea1067e56972p-475, 0.0, 0x1.2bcf31dce7812p-478, 0x1.29a1f4978b7c1p-194,
     0.0, 0x1.97d4e486ebb65p-257, 0x1.0bc5bf435413dp-979, 0x1.1f2247f638adbp-990,
     0x1.7d76aee9c422ap-609, 0x1.5a0c1f94ad565p-56, 0x1.b6da4998d06d1p-712, 0.0, 0.0,
     0.0, 0x1.85f64fae0800dp-750, 0.0, 0x1.0a178a1330bfcp-735, 0x1.606f9be34d892p-642,
     0x1.e53021e2f09dp-506, 0.0, 0x1.016344c3f5953p-688, 0x1.1bacb10969c2ep-171, 0.0,
     0x1.2d31e5a3cceeep-917, 0.0, 0x1.bd5190b8bd65dp-610, 0x1.d2d74f5ab6adbp-1001,
     0.0, 0.0, 0x1.bf438d6f9509bp-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c3b5e7b127aacp-706, 0.0, 0.0, 0x1.69d3b9470fcebp-949,
     0x1.813707621ac8ap-1008, 0.0, 0x1.eb4c667bcd8ccp-325, 0.0,
     0x1.c3aed66e5f34bp-307, 0.0, 0x1.01718f0f29e32p-412, 0.0, 0x1.3849389b228f6p-944,
     0.0, 0.0, 0.0, 0x1.1f72c760f6896p-228, 0x1.db08b1414b59p-642, 0.0,
     0x1.e8fc1b01111dp-55, 0.0, 0x1.61c09ba75202p-989, 0.0, 0.0,
     0x1.e1994c330d93dp-362, 0x1.12060dbf494ap-103, 0.0, 0.0, 0x1.cee17905dbf5p-406,
     0x1.3f8f165d2b4bfp-919, 0.0, 0x1.0c68729ae8556p-32, 0x1.673214cd68912p-432, 0.0,
     0.0, 0x1.3367e76d9b2dfp-867, 0x1.38cf3e6353123p-712, 0x1.33e9d69dc54cp-954,
     0x1.c81e19b43e1c3p-18, 0x1.a8cdbbc235be2p-154, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c238dd700268p-424, 0x1.f259b5d7dccbfp-829, 0.0, 0.0, 0.0, 0.0,
     0x1.faae229fd5738p-979, 0.0, 0.0, 0x1.234db5f5f09efp-12, 0.0,
     0x1.a637b657af1b1p-775, 0x1.51da07ace57eep-355, 0.0, 0.0, 0x1.c6da1e65606b7p-143,
     0x1.30bcd67b4f3fap-865, 0x1.3fe86ed72b727p-135, 0.0, 0x1.303da18fd9279p-261,
     0x1.ea4b22f72828bp-931, 0.0, 0x1.69bc842c730bbp-671, 0.0, 0.0, 0.0,
     0x1.833225b542c62p-426, 0.0, 0x1.95793637514bap-846, 0.0, 0x1.bf2d1ca0045a4p-426,
     0x1.c02d554f74ba9p-697, 0x1.29b15d92f0842p-1010, 0x1.cfdc05b058844p-327,
     0x1.60db3432a6218p-736, 0.0, 0x1.9c3e6d3d634e5p-746, 0x1.533a94f92032bp-27,
     0x1.8f0a94ccc719cp-1003, 0.0, 0x1.e7d48aead3b7dp-257, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b3b05b52d7d7p-627, 0.0, 0.0, 0x1.30353998a6b71p-843,
     0x1.e7e6ad97e8b72p-342, 0x1.8c1fab26a05edp-123, 0.0, 0.0, 0.0,
     0x1.aefc918742635p-797, 0.0, 0.0, 0.0, 0x1.2d8300f9bdc42p-386,
     0x1.efb080e0452a7p-572, 0x1.ba3a2fce8d074p-891, 0.0, 0.0, 0x1.d0341f4a9fbfp-989,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b7ea2e36d6fbp-591, 0.0, 0.0,
     0x1.b821a76313662p-149, 0.0, 0.0, 0x1.001b13d59da1bp-316, 0x1.7cbbef780af13p-237,
     0x1.36cac33fd1d6fp-934, 0.0, 0x1.3b34df9b07cc3p-199, 0x1.b3785f41d0486p-731, 0.0,
     0.0, 0x1.a722261c345e6p-851, 0x1.faf07b5a01d98p-521, 0x1.d581dc91e414dp-195,
     0x1.87eb8313256a6p-599, 0.0, 0x1.32fe6279a3e7bp-273, 0.0, 0x1.62ed56f7aa2cfp-305,
     0.0, 0x1.d98d30fc80a5p-1003, 0.0, 0x1.27f28e97e6c44p-262, 0x1.9e0963069e8f2p-769,
     0.0, 0.0, 0.0, 0x1.dc8b0956f24dp-211, 0.0, 0x1.536d6b8f92e7dp-855,
     0x1.7cf1285f0d436p-506, 0.0, 0x1.70e598efc45fcp-902, 0x1.57fa33dd00f95p-828,
     0x1.ffe752dbadb86p-142, 0x1.0d822c90c9833p-731, 0.0, 0x1.72886faf188e4p-994,
     0x1.5584a2327d04p-457, 0.0, 0x1.9e46e6fe11676p-406, 0.0, 0x1.1598627c24b91p-373,
     0.0, 0.0, 0x1.c5d15e6621f47p-152, 0.0, 0x1.a9b73486dc772p-711, 0.0, 0.0,
     0x1.8859a2a02abd9p-479, 0x1.44db722b37ba2p-299, 0x1.e4b4a1ad1351ap-17, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f69567aeb8133p-832, 0x1.a2c78c48e53eep-148,
     0x1.79bba3341be3p-142, 0.0, 0x1.eda10866da619p-773, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e84b03359d019p-728, 0x1.854f083446487p-551, 0x1.13f6c7fd0316ep-625, 0.0, 0.0,
     0x1.b69e56aac6p-148, 0.0, 0.0, 0.0, 0x1.cdd361360d545p-998, 0.0, 0.0, 0.0,
     0x1.eb028ba69872cp-1012, 0.0, 0x1.1fcb92af88cfp-958, 0.0, 0x1.f4fe67d0460cp-191,
     0.0, 0x1.f941e7fdc3376p-425, 0.0, 0x1.e2c0db74bef1dp-764, 0x1.35eddbbd01878p-741,
     0x1.aa6c76089404ep-457, 0.0, 0x1.10c1ca3dced8p-747, 0.0, 0.0, 0.0,
     0x1.5f1d161606d5fp-431, 0x1.3c562f7c964c2p-675, 0.0, 0.0, 0x1.901b6c103d4bep-251,
     0.0, 0.0, 0x1.9dd6142508519p-393, 0.0, 0.0, 0x1.153439cf9db7cp-334, 0.0, 0.0,
     0x1.05702f352116cp-284, 0.0, 0x1.4ae38f2fc2adap-786, 0.0,
     0x1.09c4e9b3424bbp-1010, 0x1.42ae5e0e06fd8p-797, 0x1.99ec63491f243p-941,
     0x1.2808f7605b11ap-221, 0x1.b091f78fae4dep-110, 0.0, 0.0, 0.0,
     0x1.5a214a4849a06p-801, 0x1.668eddf00e6bap-377, 0.0, 0x1.c39b485b483b1p-407, 0.0,
     0x1.d0cc5c528b639p-107, 0.0, 0x1.c739001b4fc23p-300, 0x1.363a53b9ba03p-382,
     0x1.c07fc2b748edfp-340, 0x1.271bfa10764ccp-1017, 0x1.b82e5a76561a3p-972, 0.0,
     0.0, 0x1.b2ecb2d4b6fb8p-373, 0x1.fbc12d7803424p-171, 0x1.7cc6f22e3984ap-768, 0.0,
     0.0, 0x1.f3ea3c234a4bbp-683, 0x1.bda75060d321ap-631, 0x1.e4b87b6ac7bf1p-865,
     0x1.2d61493eaae45p-148, 0x1.068c0ae9da401p-529, 0x1.a56dd3dbe0873p-390,
     0x1.f65a918046305p-664, 0x1.37176d3fb9da4p-575, 0x1.dca964b9eddc8p-814, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f1a061b1f4fd1p-14, 0x1.91d13486378p-236,
     0x1.e9d1a31142a1cp-778, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7866e8ab68e8p-815,
     0x1.a140cf2e35211p-958, 0.0, 0x1.3a056a6ca4505p-433, 0.0, 0.0,
     0x1.6c604103dda16p-356, 0x1.bf5a53bcbfc6ap-538, 0x1.a74088edb92dp-807, 0.0,
     0x1.02259a71752ccp-670, 0x1.c1654ba5675dep-249, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e292ad9f6fcdp-404, 0.0, 0x1.7b9b1baf9ed21p-750, 0.0, 0.0, 0.0, 0.0,
     0x1.ad3e00d805b8dp-617, 0x1.9c9c28680f317p-306, 0x1.4eace513e1a31p-244, 0.0,
     0x1.070cf29c12af7p-310, 0.0, 0x1.de04a250a87fcp-546, 0.0, 0x1.f570dd3aac46ap-460,
     0x1.8c4642f868cacp-301, 0x1.b18131644227dp-1019, 0.0, 0.0,
     0x1.c17aeeede1b21p-423, 0x1.d2832d8aec5fp-31, 0.0, 0.0, 0x1.05a89511c4babp-566,
     0.0, 0.0, 0x1.18a0004c6bb57p-184, 0x1.60ca6165d358ap-412, 0.0, 0.0,
     0x1.77a132a58fdeep-66, 0x1.3715001044a13p-946, 0.0, 0x1.e36c04a39b55cp-132,
     0x1.93e63ccdfe6e4p-249, 0.0, 0.0, 0x1.d7ce420f8bfc3p-255, 0x1.7de950bc900ddp-656,
     0.0, 0x1.2bf0cd37db9abp-906, 0x1.711c84178f46dp-820, 0x1.b6475263535eap-923,
     0x1.adb3bd73999d6p-410, 0x1.9f49e2b95802cp-253, 0x1.2de0d90ffd36bp-965, 0.0,
     0x1.49e5d4331ff66p-69, 0x1.8fdb311ef4ff3p-840, 0x1.db9009654c681p-162,
     0x1.c1d50e6c99a6bp-106, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4da470e507efp-380, 0.0,
     0x1.3681671b85c87p-423, 0x1.25196ed7bdb7dp-941, 0.0, 0x1.d1785f129df3bp-794,
     0x1.8b37846d8ebe6p-340, 0.0, 0x1.e38dbb986427ap-556, 0.0, 0.0,
     0x1.ec697d064df52p-627, 0x1.38d2ed962c6e3p-872, 0x1.ed493af2f976fp-536, 0.0, 0.0,
     0x1.bc02dc4f2391ap-942, 0x1.8f3c20867af3cp-936, 0x1.7b52d0c1cdae6p-339, 0.0,
     0x1.cc3891de846f7p-487, 0x1.5260855c9f611p-138, 0.0, 0x1.42328ff004617p-26, 0.0,
     0x1.ea623307f17ecp-706, 0.0, 0.0, 0x1.792de3a3676f7p-898, 0.0,
     0x1.cd2b09f8c66fep-58, 0x1.3022d71a34033p-128, 0x1.7e26b738dfdacp-859,
     0x1.082ba2bd9fa28p-120, 0x1.c7a7d3a8c7b8p-586, 0x1.98173c10320fp-871, 0.0, 0.0,
     0.0, 0x1.54f88e071465fp-515, 0.0, 0x1.5e092ef20d825p-735, 0.0,
     0x1.06369a4c00749p-972, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8bf7bc6efff77p-63,
     0x1.363542284f98p-732, 0.0, 0x1.dbdeb084916cp-134, 0.0, 0x1.b1b9ead19ccbcp-84,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10055cf0baeccp-477,
     0x1.d2f73bcced3dbp-758, 0x1.a5585c29ef273p-769, 0x1.37fad3a0ca79ap-3,
     0x1.a6bebf8ba8f03p-483, 0x1.57dbd7669ed2fp-643, 0x1.e6ca3428c4f8ep-440,
     0x1.11eb3212ca0b8p-875, 0.0, 0x1.decd6a76bf451p-208, 0.0, 0x1.9795d1e878dc2p-413,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7b3c2d897771p-779, 0.0,
     0x1.6840ec21b0d0fp-783, 0x1.98aa31d64e69dp-902, 0.0, 0.0, 0x1.d14c97130fd79p-569,
     0.0, 0x1.4e039e0bdb628p-141, 0x1.9e777874ae74ep-822, 0x1.bb5939cbb2385p-454, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58050bd1818e7p-726, 0.0, 0.0,
     0x1.f05b584484629p-523, 0x1.a07bc64eefa0ap-453, 0x1.6ab4fb2a9a10ap-421,
     0x1.8aca949d14dc4p-777, 0x1.020d26238a101p-75, 0x1.c92aa79c93d12p-981, 0.0,
     0x1.55789f8ebf1eep-598, 0x1.128b57df4b9cap-864, 0.0, 0.0, 0.0,
     0x1.06e2145a8fe04p-436, 0.0, 0.0, 0x1.61a44b1610df6p-272, 0x1.5fe369cf1d966p-860,
     0.0, 0.0, 0x1.1176ac9d62e89p-472, 0x1.51c43cc56bacfp-274, 0x1.fc6f90dc07df6p-154,
     0x1.5e5a6811f555bp-896, 0.0
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
            tmp1 = Sleef_finz_coshd4_u35kvx(tmp0);
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
    printf("Sleef_finz_coshd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_coshd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
