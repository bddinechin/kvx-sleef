/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d4_u10kvx.c --function Sleef_exp10d4_u10kvx \
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
     0x1.d3e44bec19027p-682, 0.0, 0x1.19c419eb81c85p-485, 0.0,
     0x1.4d087365668fbp-773, 0.0, 0x1.d7994ab7c7218p-441, 0.0, 0.0,
     0x1.095a408f2c797p-170, 0x1.54fb789ab8bdfp-741, 0.0, 0x1.74c72495cc0a5p-814,
     0x1.53f032c990569p-498, 0x1.273101beca3fbp-766, 0x1.95da49a3dce1ap-247, 0.0, 0.0,
     0.0, 0x1.7235eb4330dacp-712, 0x1.0ebc6ff61f32ep-758, 0.0, 0x1.19ecf9152abfp-195,
     0x1.17db293fc620fp-126, 0x1.b37aacc3fff8p-506, 0x1.fd4e68e8d92ffp-393,
     0x1.3f832962e323bp-345, 0x1.cb965c2f2b01ep-219, 0.0, 0x1.5875dabd0c64ep-248, 0.0,
     0x1.01417bbf5a723p-280, 0.0, 0x1.5375bb7f2eeadp-552, 0x1.129912582a79fp-349, 0.0,
     0x1.03b71c274fbacp-730, 0.0, 0x1.08c6f79709e28p-659, 0.0, 0.0, 0.0,
     0x1.b5606bea5281ep-787, 0.0, 0x1.681f07165b8ddp-478, 0x1.7558a76860d63p-252, 0.0,
     0.0, 0x1.a11425b58ea85p-507, 0x1.8abb448232a2ep-777, 0x1.a0ff1f572aca8p-339,
     0x1.c0503976af40fp-545, 0x1.ff2dcec129638p-165, 0.0, 0x1.3474ee26b4a91p-50,
     0x1.623afe1ca273p-105, 0x1.1f810f6f86176p-197, 0.0, 0x1.69f33f113264bp-86, 0.0,
     0x1.59a25e7aa97c8p-682, 0.0, 0.0, 0x1.a4919d2f61857p-578, 0x1.b98412c2b9b6p-91,
     0x1.d2573970b48a7p-735, 0.0, 0x1.dafbb806d0f88p-241, 0.0, 0.0,
     0x1.43558d91686d5p-226, 0x1.3a0b2459db914p-954, 0.0, 0x1.c15d9799fcb41p-24, 0.0,
     0x1.ed2eee5abbb51p-398, 0x1.6dd79797140bfp-79, 0.0, 0x1.913462123a0cp-6, 0.0,
     0x1.26305c4e3871cp-430, 0.0, 0.0, 0.0, 0x1.9fa464e3bf5cap-485,
     0x1.530f29c2e5e7p-323, 0.0, 0x1.a04a2ee0f1ea2p-272, 0x1.fb7bd7ae69635p-558,
     0x1.4cd22b9b7e0afp-82, 0.0, 0.0, 0x1.1a799de0271d3p-763, 0.0, 0.0,
     0x1.d397ff0628538p-793, 0x1.f4e35cc04c648p-821, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.368dc8f654962p-992, 0.0, 0x1.349c1bc65c018p-608, 0x1.fb50fc4c8be01p-119, 0.0,
     0x1.9d5c98a53c0b4p-85, 0x1.1b0a1e7e12109p-791, 0x1.58ea1a69c9fcbp-521,
     0x1.175a97d677f18p-124, 0.0, 0x1.292b270bfa9fp-569, 0.0, 0.0,
     0x1.5fcedf6d93074p-691, 0x1.9d6f72371075ap-647, 0x1.3c8d1388a5585p-566,
     0x1.4337b41629bp-438, 0x1.e4844ca1ce012p-29, 0.0, 0x1.4934c1f2b469ap-655,
     0x1.7f48e5f921306p-615, 0.0, 0x1.9afb9026675e9p-948, 0x1.ea877ad48a4d5p-600,
     0x1.8afa128d117b6p-788, 0x1.69e26b727c022p-678, 0.0, 0.0, 0.0,
     0x1.fbf912e19792cp-416, 0.0, 0x1.6d2277b3f74d4p-55, 0.0, 0x1.0be1fb4055605p-790,
     0.0, 0x1.689db5990c4ccp-18, 0x1.8553e20f3c99bp-72, 0x1.f4b4bff853ccbp-988,
     0x1.0dda772b46925p-721, 0x1.c9aeebcd67655p-994, 0x1.7fbe9f85b3241p-464, 0.0, 0.0,
     0.0, 0.0, 0x1.a5d76b9e4e46bp-291, 0x1.429065f73b29cp-976, 0x1.a799ee6529bbfp-623,
     0.0, 0x1.7343137fc34d8p-953, 0.0, 0.0, 0x1.30e1ffda36405p-206,
     0x1.50708f8cb5ae5p-459, 0.0, 0x1.a3adf16dc2936p-981, 0x1.d5cd686ff7b1cp-816, 0.0,
     0.0, 0x1.d1ae5cbb733b8p-17, 0x1.43a9c9cdb71bbp-181, 0x1.0889d37957071p-578,
     0x1.0847ec742118dp-978, 0.0, 0x1.5763f42cecadfp-763, 0.0, 0.0,
     0x1.99ba2bb6b6b8dp-637, 0x1.a2bcd4c4bc2ebp-673, 0.0, 0x1.89ee1583ee1cbp-606, 0.0,
     0.0, 0x1.accb376006f8ep-870, 0x1.378c535434cebp-585, 0.0, 0.0, 0.0, 0.0,
     0x1.93457e8f1399dp-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d98a7ab51483p-251, 0x1.1d8810ebf7b05p-610, 0x1.e7f62d5222b51p-972,
     0x1.895e38304f508p-992, 0.0, 0x1.36ce45d6fddd8p-391, 0x1.744d407ea9dbap-458, 0.0,
     0x1.956da3cfb6e3p-877, 0x1.e52f885426993p-20, 0.0, 0.0, 0.0, 0.0,
     0x1.31dbdfa39876ap-498, 0x1.6517bc13cb787p-678, 0x1.f1e6a77d4aa4ep-922,
     0x1.1f129cc68a891p-12, 0x1.be5806bb7fd1ep-810, 0x1.06bfe6b669f5dp-165,
     0x1.5593701d64719p-175, 0x1.744bbd475fffbp-209, 0x1.24b6635ea0aep-602,
     0x1.ff37a8fedf864p-632, 0x1.0b4da9beef62bp-393, 0x1.b90ba186baf06p-897, 0.0, 0.0,
     0.0, 0x1.e7ca789e6f61cp-836, 0.0, 0x1.0805aecb1cdd8p-917, 0x1.281931cfdd09ep-506,
     0x1.42d4cbfa38df5p-895, 0.0, 0x1.58aea23a1a881p-1020, 0.0, 0.0,
     0x1.17bdc5913653ap-478, 0.0, 0x1.f6c92a97531b7p-167, 0x1.28730c322f412p-183, 0.0,
     0x1.e61eb82f63a68p-273, 0x1.dc1d95fa467d5p-477, 0x1.bf6f612c9da19p-424,
     0x1.312990768ba7fp-742, 0x1.43a820db167fp-841, 0x1.0690e644b1331p-829,
     0x1.bfa441c01078bp-774, 0.0, 0x1.4e8ad49c828ap-431, 0.0, 0x1.000fd10e28621p-429,
     0x1.8cebfc17cb986p-401, 0.0, 0.0, 0.0, 0x1.913ef32ccd4cfp-30, 0.0, 0.0, 0.0, 0.0,
     0x1.ad051d8974753p-452, 0.0, 0.0, 0.0, 0.0, 0x1.b53cfb51499bbp-377,
     0x1.a3b88e26f5c9p-299, 0x1.82f85b75fde81p-549, 0.0, 0.0, 0.0,
     0x1.698aa3c165459p-994, 0x1.b20641ac4c356p-864, 0.0, 0.0, 0.0,
     0x1.a4a1f3cb207bp-566, 0x1.80763f2333f36p-711, 0x1.2458a4672c2dap-788, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.586edec6381abp-356, 0.0, 0x1.439c81db7c16ep-736, 0.0, 0.0,
     0x1.7a9a04a2426f6p-109, 0.0, 0x1.dbde2bd931304p-148, 0x1.7693fcf0bc76cp-374,
     0x1.4870d6054f9d7p-632, 0x1.d256ebdd075cbp-368, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d16e560e5a5e6p-77, 0.0, 0x1.135cbc1b1b191p-421, 0.0, 0x1.c2ff751c095c4p-270,
     0x1.e66c6e341b06bp-580, 0.0, 0x1.b98901c271742p-111, 0x1.88f9f843e12a5p-413,
     0x1.9c5520a7367ebp-36, 0.0, 0.0, 0.0, 0x1.9193c9f4db05ap-781, 0.0,
     0x1.533b9b89960c2p-308, 0x1.191eeadf69c76p-715, 0.0, 0x1.fb7c7d555aa19p-78, 0.0,
     0.0, 0.0, 0x1.7b38d018a3ba1p-506, 0x1.260f850113ea7p-675, 0x1.05614ff60464p-894,
     0.0, 0x1.7f97bd71cd84ap-189, 0.0, 0.0, 0x1.29e5a3f4290f9p-680, 0.0, 0.0,
     0x1.3ce9f70fbe8f2p-154, 0.0, 0.0, 0x1.1cfdd8a74013bp-67, 0.0,
     0x1.fa400b82e4bc4p-165, 0x1.3fcd23a5589c1p-842, 0x1.10cf13768ef4p-747, 0.0,
     0x1.57079bdaab8fbp-607, 0.0, 0.0, 0.0, 0x1.c00a7267e1e01p-566,
     0x1.24414db909af4p-236, 0x1.66aae121e96b4p-674, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c1846cbb6391p-893, 0x1.021c63310d701p-79, 0.0, 0x1.f8828a9574e72p-502, 0.0,
     0.0, 0x1.0131d155838d6p-577, 0.0, 0.0, 0x1.50522a646c453p-385,
     0x1.4c8c17d169c7p-350, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.20bb98ed95fb9p-578,
     0x1.ab4abdd0f05e4p-197, 0x1.d3b7f30eafcb4p-511, 0x1.3c8aadb1bbfd6p-741,
     0x1.0c604c1c908bbp-48, 0x1.f2fbf42534674p-400, 0x1.fc740c865803ep-396, 0.0,
     0x1.371487609d4a8p-107, 0.0, 0x1.2f3ca95811c6fp-640, 0x1.b4939ffe7e5cfp-646, 0.0,
     0.0, 0.0, 0x1.a72b631d0867ap-755, 0x1.45636c052f23cp-819, 0.0, 0.0,
     0x1.8a0dbf1041833p-343, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0700eba1901dcp-745,
     0x1.2f2a468a2aca4p-811, 0.0, 0.0, 0.0, 0.0, 0x1.4a717aeae1d29p-130,
     0x1.0b0756cc397fdp-14, 0.0, 0.0, 0.0, 0.0, 0x1.e7250c25747bap-307,
     0x1.8c1fb9899c2d7p-295, 0x1.75212f95947fap-295, 0x1.7ba0e7ab4bfa2p-429,
     0x1.939949909d32bp-541, 0x1.153b0d358f3dap-942, 0x1.ce50df2daf687p-554,
     0x1.5c34c466c98d1p-252, 0.0, 0x1.cc4ef208cb274p-987, 0.0, 0x1.09021f7f2432ep-220,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f07c23b4c11ffp-190, 0x1.f6c5fdd4120ap-820,
     0x1.c5c815d5dc2d8p-695, 0x1.0287d9b721fa2p-991, 0x1.d57bf09519ccp-395, 0.0,
     0x1.810536d775a63p-223, 0x1.a5fecb17cc24cp-727, 0x1.e9f58c65e7a29p-925,
     0x1.b6c86b0323eaep-503, 0x1.33760a184dbdfp-798, 0x1.b0df0a36b14a9p-833,
     0x1.4f79495906b95p-963, 0x1.9d6bb6356ed9dp-23, 0x1.4a1c29e4026p-108,
     0x1.cdb4da8a5e2a2p-864, 0x1.302d5daa87ff7p-848, 0.0, 0.0, 0x1.0c7a9cd18755fp-264,
     0x1.d5700801ece73p-881, 0x1.b8c80ac45f35bp-194, 0.0, 0.0, 0x1.0ec48842a6107p-485,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be9196be9b28bp-770, 0.0,
     0x1.86c20e7539697p-758, 0x1.c3d4c9369dd78p-563, 0.0, 0.0, 0x1.9994026a43a9fp-832,
     0.0, 0x1.456e8fe224dffp-926, 0.0, 0.0, 0.0, 0.0, 0x1.d2e1fc051c09cp-502, 0.0,
     0.0, 0x1.ab38641d610a8p-959, 0x1.53b81c02b68b6p-298, 0x1.172c73072f23dp-747, 0.0,
     0.0, 0x1.99452f9785f44p-758, 0x1.5ac3d8fd713eap-78, 0x1.4e7e16be51673p-188,
     0x1.1f4e371c61de6p-417, 0x1.0e334d2bbc101p-895, 0.0, 0x1.6e33c82936369p-896, 0.0,
     0.0, 0.0, 0.0, 0x1.2ab1c3f21f2dbp-702, 0.0, 0x1.63ccb98250932p-73, 0.0, 0.0,
     0x1.dfd2f86aea7f6p-655, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b803e54e2db7p-175,
     0x1.b2d7116978918p-633, 0x1.87c5ffb379e6fp-360, 0x1.f9875334d461ap-112, 0.0,
     0x1.ff99cae6df473p-332, 0x1.2f0b48d8632f8p-123, 0.0, 0x1.19725e251daf8p-532,
     0x1.9e585eda10e27p-626, 0x1.32adaddef2f83p-62, 0x1.fb8c9ccf89a48p-227, 0.0,
     0x1.d1e5e924e8cd6p-505, 0x1.42991d44d3485p-926, 0x1.4954166c3a7e4p-203,
     0x1.e0de2afa2f31bp-750, 0.0, 0.0, 0x1.c326adfeb971ep-715, 0x1.6b0885264a135p-268,
     0.0, 0.0, 0.0, 0x1.217fa201bc686p-820, 0x1.f9901deb4fe46p-608,
     0x1.c2e40b30de019p-1012, 0.0, 0x1.35d3f9e2bfc5p-463, 0x1.d989ed03910bcp-838,
     0x1.07283775054f9p-758, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0d0afe39b65c2p-892, 0.0, 0.0, 0.0, 0x1.f9cc55a9e42c8p-541,
     0x1.60a570abc76cap-158, 0.0, 0x1.f2c71096b64ffp-993, 0x1.12f72493fc038p-128, 0.0,
     0x1.1a23e23d36a28p-305, 0.0, 0x1.457a2e3fe94c1p-402, 0x1.e1a246212fe1ap-21, 0.0,
     0.0, 0x1.526b358c13645p-432, 0.0, 0x1.b693b2297cebbp-961, 0.0,
     0x1.4147874e590a2p-130, 0x1.776fd131f734ep-336, 0.0, 0.0, 0x1.5807cccdd7adcp-129,
     0.0, 0x1.ec61edb23ccadp-702, 0.0, 0x1.6cd9cfa044d61p-358, 0x1.74d74160069f9p-526,
     0.0, 0x1.7b098ab7c4a03p-211, 0x1.2459d3adc1d52p-608, 0x1.0726db425693p-48, 0.0,
     0.0, 0x1.b9da55aaeaa3dp-661, 0x1.76a43128bab45p-707, 0x1.9dceb118834fp-980, 0.0,
     0x1.e85c21eaaa3a5p-401, 0.0, 0.0, 0.0, 0x1.2bd9f0f8f193ep-615, 0.0, 0.0,
     0x1.fe0813d1130bfp-141, 0x1.408ced0c4c2bp-961, 0x1.0c0b82c74632ap-655,
     0x1.0df3b81e28391p-337, 0x1.7e8c67539e3c7p-329, 0x1.70bf317346b92p-193, 0.0,
     0x1.412a052a85649p-639, 0.0, 0x1.1424c142a89f3p-209, 0.0, 0x1.45ed2cda68d2ep-515,
     0x1.052770b2acb33p-470, 0x1.7e28ffbf574ecp-404, 0x1.9a7ec04a9521p-582,
     0x1.b63009b0b1eeap-969, 0x1.89977c09cfc07p-934, 0.0, 0x1.f7e139adb5666p-226, 0.0,
     0.0, 0.0, 0.0, 0x1.6526c12ffde91p-21, 0x1.7e32ef3e7fbe8p-279, 0.0, 0.0,
     0x1.862825f1443d4p-607, 0x1.77946c60e611ep-872, 0.0, 0x1.26ef9474a59efp-122, 0.0,
     0.0, 0.0, 0x1.62af0e1bf2798p-632, 0x1.5974a2179dbe8p-538, 0x1.05a7698c83ab5p-942,
     0.0, 0.0, 0x1.55c99a9b886d9p-174, 0x1.a5cd9f140bf1p-116, 0x1.1d032cc31e7e9p-261,
     0x1.c61735c3316f4p-856, 0x1.a599cdf96fa72p-993, 0.0, 0.0, 0.0, 0.0,
     0x1.40615a0c83279p-194, 0.0, 0x1.259c1d0c9ebdp-374, 0x1.12fe424f26b07p-1000,
     0x1.f730b7933245ap-582, 0x1.194b44c3bbd43p-88, 0.0, 0.0, 0x1.c4bd2af2ef641p-620,
     0.0, 0x1.45a7cd46fea36p-871, 0.0, 0x1.641278c2c8ed4p-356, 0.0, 0.0,
     0x1.973f805e856f4p-356, 0.0, 0x1.119e946c87ad3p-443, 0x1.15d021d88fa84p-287,
     0x1.5072c7b79af8fp-613, 0.0, 0.0, 0.0, 0.0, 0x1.4b2fb3bdb36f1p-864, 0.0,
     0x1.0aa554de7a369p-702, 0x1.8e773fabf6f98p-383, 0x1.db7668451a031p-968,
     0x1.bc61b6335ec6fp-837, 0x1.9a9449a30215ap-456, 0x1.6d2a7882c5078p-23,
     0x1.c7508627207edp-427, 0x1.a174b7fc90dcep-940, 0.0, 0.0, 0x1.bf2a2669d5aa7p-584,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.23494912c5ce3p-878, 0.0,
     0x1.2c6898a0ca7f4p-327, 0x1.ac2da00071c4p-851, 0x1.a0001b619e619p-737,
     0x1.1e3bf7aa66afcp-200, 0.0, 0.0, 0x1.50cf0f9d25bb1p-818, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0bd70d0fb026bp-72, 0.0, 0.0, 0x1.34b55e1c6077p-724, 0.0, 0.0,
     0x1.6ab683e252144p-247, 0x1.df7c553577f32p-694, 0.0, 0x1.2db72a49bff08p-409, 0.0,
     0x1.562b5543f718fp-88, 0x1.93b18477ddfbbp-913, 0x1.496c297dde9bep-316,
     0x1.ec8c203added9p-720, 0.0, 0.0, 0x1.246526ddad49fp-351, 0.0,
     0x1.a79b5ef417cfp-46, 0x1.a24440291bf9ep-38, 0.0, 0x1.dfc9744799b96p-1000,
     0x1.f03e4d8a500afp-247, 0.0, 0.0, 0.0, 0x1.00e2a13e473c3p-406,
     0x1.c405b346d2044p-361, 0.0, 0.0, 0x1.ce7953b3de69p-319, 0.0, 0.0, 0.0,
     0x1.d4ce1172d05aep-836, 0x1.86bf9c3e71f18p-48, 0.0, 0x1.bc5f9e1009247p-900, 0.0,
     0x1.f32dec71be0cap-606, 0.0, 0x1.d780d70b4551dp-550, 0.0, 0x1.ec034e2b233fp-947,
     0x1.7e66a54909445p-984, 0.0, 0.0, 0.0, 0x1.57afd2a4bbf8p-523,
     0x1.8b3b84b82a363p-778, 0x1.0a9c1af32cea8p-835, 0x1.93f14fb7288afp-246,
     0x1.5188091ed8619p-694, 0.0, 0.0, 0.0, 0x1.ad03e86a071ddp-320, 0.0,
     0x1.dac62773eef5dp-934, 0x1.136a3f06a17ebp-702, 0x1.f5ec180709dd1p-956, 0.0, 0.0,
     0x1.3ced694a771aep-726, 0.0, 0.0, 0x1.fa9cd32ec55b3p-806, 0.0, 0.0,
     0x1.f9318e5a09e6dp-172, 0x1.f5aaed40388a1p-19, 0.0, 0x1.a51ffe8b0a1dep-362,
     0x1.8333a9fb72591p-379, 0.0, 0.0, 0x1.45ea477c5056ap-252, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c203c6ca58979p-84, 0.0, 0x1.5173ab321a4a8p-920, 0.0, 0.0, 0.0, 0.0,
     0x1.d4a73736755dap-892, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b29c43b6247p-206,
     0x1.0fed64b6175aap-62, 0.0, 0x1.b55e5a384a8e3p-957, 0x1.76cc59f28771bp-902, 0.0,
     0x1.53fa4d0867bb3p-502, 0x1.062d3a8724d8p-717, 0x1.88d2a71847e1fp-292,
     0x1.792ec336fece5p-934, 0x1.fbd6f4fc156e7p-276, 0.0, 0x1.bacd271b53c81p-994, 0.0,
     0.0, 0x1.57136f5843db8p-443, 0.0, 0x1.f4f676e251756p-968, 0.0, 0.0, 0.0, 0.0,
     0x1.2b30e2978b0bap-129, 0x1.c6fefc6e46e2ep-507, 0.0, 0x1.9e12e4f7b42b7p-703, 0.0,
     0.0, 0x1.2b8943379da6ap-105, 0.0, 0x1.d96a78fbffdccp-59, 0.0,
     0x1.e945b9985bdbbp-724, 0x1.50e3620bc1bd7p-662, 0x1.7c622c20720eep-568, 0.0,
     0x1.9b885858a9a27p-147, 0.0, 0x1.bb3ea0bcde8fep-781, 0x1.b7ed22f8eb1dp-551, 0.0,
     0.0, 0x1.2ac66f8e1f888p-406, 0x1.268f99a2778aap-597, 0x1.0e463b6e0cb14p-4, 0.0,
     0x1.8edf900767101p-68, 0.0, 0x1.e7dd9e0b72841p-913, 0.0, 0.0,
     0x1.ad41fbcfebf54p-87, 0x1.6487df80c8342p-619, 0.0, 0.0, 0x1.fb01ce6a13d8ep-387,
     0x1.8ac62ca0f9fbp-191, 0.0, 0.0, 0x1.a9e8f5e5c0c1ep-39, 0.0,
     0x1.f5d347931dabfp-981, 0.0, 0.0, 0.0, 0x1.802a89bf482adp-522,
     0x1.bd037f3b84343p-296, 0.0, 0x1.19826d0b263b9p-753, 0.0, 0.0,
     0x1.902a8b22192a4p-695, 0.0, 0x1.7261bd4aa9f8cp-958, 0.0, 0.0, 0.0,
     0x1.5197b19fed76dp-352, 0x1.57c2ed432babap-777, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.42f3009ae0f33p-641, 0x1.8fa3df66996fdp-157, 0.0, 0x1.ffac1929d35d5p-665, 0.0,
     0.0, 0.0, 0x1.8a0d62f0a8e18p-110, 0x1.4ceb2d09463d6p-287, 0.0,
     0x1.ac5993588e4fcp-611, 0x1.87df771e07a7dp-243, 0.0, 0x1.99bf0d8400f1ap-234,
     0x1.6aff2606401f6p-163, 0.0, 0x1.06165e6a3974dp-899, 0x1.ba82a5b8ae678p-489, 0.0,
     0.0, 0x1.ec648ffd2029dp-398, 0x1.252f9c9fc5e06p-583, 0.0, 0x1.83cc9465936f5p-959,
     0x1.2a2ffc07070c8p-395, 0x1.787af446315f9p-465, 0x1.d1796c70f4aaep-954, 0.0, 0.0,
     0.0, 0.0, 0x1.dbac56d2d64ddp-380, 0.0, 0.0, 0.0, 0x1.033fb1968b836p-346, 0.0,
     0x1.38b25008a1571p-111, 0x1.fc6498a3588dep-796, 0x1.7d56375d0d0b5p-980,
     0x1.53de4ce9da016p-543, 0x1.36f6728d9ef9dp-601, 0.0, 0.0, 0.0,
     0x1.5e58963e6df1fp-332, 0.0, 0x1.ee43afbd9a7f5p-362, 0.0, 0.0, 0.0,
     0x1.daea26927e33p-41, 0x1.e6a0e075f1ef4p-827, 0x1.37c6c02a47f48p-143, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c40c52e5853ap-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c87760be139d7p-814, 0x1.374f26e9767f5p-476, 0.0, 0.0, 0x1.b70a24bd80a24p-815,
     0x1.3ee1dcecb5b9ep-178, 0.0, 0.0, 0x1.69f8d11f89ec7p-70, 0x1.e44d8a3fcfc67p-837,
     0.0, 0.0, 0.0, 0.0, 0x1.e92f705459b1bp-101, 0.0, 0.0, 0.0,
     0x1.cfeca08bdb62dp-849, 0x1.465cd0769843ap-486, 0.0, 0.0, 0.0,
     0x1.43f43db9cd56ap-169, 0x1.d14291131d61p-266, 0.0, 0.0, 0.0,
     0x1.006626c6591e1p-994, 0.0, 0.0, 0x1.c93dd8f27d3d5p-883, 0x1.dfbee210b18f3p-508,
     0x1.8ab0d51f5986bp-883, 0.0, 0.0, 0x1.fcd22488c89fp-979, 0.0, 0.0,
     0x1.64faadbfeb7f7p-315, 0.0, 0.0, 0x1.0cf5cf12a063bp-115, 0.0,
     0x1.461b427d61083p-711, 0x1.127c3db0f7c9dp-305, 0x1.6fb9de927a67dp-941, 0.0,
     0x1.e828178574dfp-558, 0.0, 0.0, 0x1.99933fcb1674fp-1013, 0.0,
     0x1.ff63d3fa9ce06p-415, 0x1.45f122e3efd0cp-282, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cc68c69c3edb3p-329, 0x1.e273907edbfecp-104, 0.0, 0x1.137c8e31cd9d7p-810,
     0x1.1fc3876a1c178p-220, 0.0, 0x1.16e6d4f2ae61dp-222, 0.0, 0x1.22ed3c301d64cp-644
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
            tmp1 = Sleef_exp10d4_u10kvx(tmp0);
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
    printf("Sleef_exp10d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp10d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
