/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhd1_u10purecfma.c --function \
 *     Sleef_atanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.38843370caf8ap-1019, 0x1.074b91fad80d9p-138, 0.0,
     0x1.2777aaa3a5bep-109, 0x1.c9489e28b2b66p-730, 0.0, 0x1.6bf4e2d0c6738p-171,
     0x1.f1529276b1dd2p-381, 0.0, 0x1.dcfacc7508a1cp-616, 0x1.597a9c60f234dp-205,
     0x1.52c3570323985p-368, 0.0, 0x1.0b9825d807426p-77, 0.0, 0.0, 0.0,
     0x1.eae7aeaa71975p-2, 0.0, 0.0, 0x1.c98cf2c8b3362p-749, 0.0,
     0x1.640666b008503p-437, 0x1.8728d7cb065c8p-643, 0.0, 0x1.e95e0c5dbd774p-5, 0.0,
     0.0, 0.0, 0.0, 0x1.3ac735f1203ccp-732, 0x1.8f961508e01cap-356,
     0x1.2f8b3c7188276p-503, 0.0, 0x1.14a1713b33fdap-769, 0x1.bd185e19b8c52p-615,
     0x1.61f6e7a307414p-721, 0x1.610d01bf15b24p-532, 0x1.abb2855730356p-861, 0.0, 0.0,
     0.0, 0x1.b9575d467f51p-47, 0x1.d0f2f33b3b7dap-995, 0.0, 0.0,
     0x1.2084401cb97bep-630, 0x1.e692fc7628f1dp-517, 0.0, 0x1.82b56ad77c227p-552, 0.0,
     0.0, 0x1.936844872a3a2p-669, 0x1.6ab7f77fe4ee3p-352, 0.0, 0x1.994f91ee2ce6bp-439,
     0x1.3be8988e608ecp-338, 0.0, 0x1.8f9d59681c3a5p-115, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.132a7545b832p-923, 0.0, 0.0, 0x1.2a60295b4a77ep-310, 0.0, 0.0,
     0.0, 0.0, 0x1.e35839689b68ep-227, 0.0, 0.0, 0.0, 0.0, 0x1.0c61c59297c47p-545,
     0x1.b06669cec4946p-35, 0x1.31aadaba37ae6p-910, 0.0, 0.0, 0.0,
     0x1.fb82cd039981p-212, 0.0, 0x1.a9c6f7b7089d4p-589, 0.0, 0x1.7c3a6c369c1d1p-588,
     0x1.1be2ec9528e76p-633, 0.0, 0.0, 0x1.349ff4b572d3dp-795, 0.0,
     0x1.dfe48b6a7a1efp-248, 0.0, 0.0, 0.0, 0.0, 0x1.66ee1a3e2c56dp-65,
     0x1.fae511bfb9797p-885, 0x1.34e0be12e250dp-492, 0x1.68f25673824e1p-311,
     0x1.aa16ecd3da872p-441, 0.0, 0.0, 0.0, 0x1.9f1b2fd75d28dp-88, 0.0, 0.0,
     0x1.5edb152da3232p-403, 0.0, 0.0, 0x1.6c565967db53dp-395, 0.0, 0.0,
     0x1.edfb70f6b08a3p-412, 0x1.9c65146bdeda5p-813, 0.0, 0.0, 0.0,
     0x1.18bd00f944da9p-540, 0.0, 0x1.92d8c254f8ed6p-591, 0x1.62e482abfed3p-437,
     0x1.c45a92b6428edp-824, 0x1.a8dc2903c75fcp-535, 0.0, 0.0, 0x1.bbabc593fa447p-66,
     0x1.3ff1377266dbbp-932, 0x1.69031ee5b2286p-987, 0.0, 0x1.e5bcd0ec8cc09p-389, 0.0,
     0.0, 0x1.8732e52d15aa5p-916, 0.0, 0x1.162f82a01335cp-257, 0.0,
     0x1.e32645ff3e34dp-392, 0.0, 0x1.12595768e62d2p-637, 0x1.007646e08eca2p-901, 0.0,
     0.0, 0x1.46ae059a4759dp-428, 0.0, 0x1.e9950fcb0d6c4p-543, 0x1.1940503252eap-586,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82a2e97ebb0cbp-418,
     0x1.ecba7919c5d84p-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.622c33743102cp-234,
     0x1.758cfdee1ea2ap-169, 0x1.13f51a42d2239p-232, 0.0, 0x1.c8b010ea18f0bp-190,
     0x1.45e42fb0203bep-334, 0.0, 0.0, 0x1.0cc5ea296f0ecp-213, 0.0,
     0x1.df8e5c007be9ep-384, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15675635c0221p-345,
     0x1.c3e45dcc8822dp-790, 0.0, 0x1.7ad081b3fdfddp-394, 0.0, 0x1.6111adda5f5c6p-764,
     0.0, 0.0, 0x1.f5a4d04cb44a6p-458, 0x1.13470ccd5ef46p-833, 0x1.f0a8d5dfe919ap-611,
     0x1.e1189585d0c8dp-547, 0x1.10e6726fbb578p-916, 0.0, 0x1.a01158a459264p-885, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c9552a3457a8p-400, 0x1.a839fba275ca1p-804,
     0x1.440096495548ap-13, 0x1.4ba9e48e73d22p-610, 0.0, 0x1.c9531d0c8fff8p-105,
     0x1.78b654afbc712p-741, 0x1.fbb804f7849bfp-179, 0x1.4f05f301db5e5p-312, 0.0,
     0x1.a39cd2bbdc9cfp-115, 0.0, 0x1.7e13f83c2033ap-64, 0.0, 0x1.f851cb0da1a47p-502,
     0x1.3730f49279b9bp-591, 0.0, 0x1.ece54489e6411p-564, 0.0, 0.0, 0.0,
     0x1.a5a5714d438f1p-374, 0.0, 0x1.24e41d7200d9ap-533, 0.0, 0x1.5780dd9f612p-572,
     0.0, 0.0, 0.0, 0.0, 0x1.a10f6582bd953p-529, 0.0, 0.0, 0x1.b43a297f82377p-752,
     0.0, 0x1.5859a3ff1902bp-155, 0.0, 0.0, 0.0, 0.0, 0x1.b2177d1504181p-929,
     0x1.a1de4207e60ap-220, 0x1.76701cbd4d5e6p-1009, 0.0, 0.0, 0.0, 0.0,
     0x1.60deee671d485p-366, 0x1.3708da1497a1bp-530, 0x1.3363be2592448p-508,
     0x1.5db6f9be0baffp-171, 0.0, 0.0, 0x1.c8830938a5848p-556, 0x1.616960753f843p-963,
     0x1.68f3c8ab7554p-596, 0.0, 0x1.61f89ba6a43b6p-918, 0x1.1929f8e19aa74p-347, 0.0,
     0.0, 0x1.b84abc8a1d0b8p-547, 0.0, 0x1.011aa8d9d2961p-889, 0.0,
     0x1.ebadda79e6cc6p-981, 0.0, 0x1.bd5f8f71435dap-452, 0.0, 0.0,
     0x1.c592e551d9f2ap-693, 0x1.276fd1d1f5cp-428, 0x1.91a2b6610f17bp-632, 0.0,
     0x1.59aecddff790fp-426, 0.0, 0x1.fd4a303fd920fp-753, 0x1.9e30fb50ebf1ep-825, 0.0,
     0x1.1e05ee92a4c0dp-318, 0x1.a038c95da8043p-568, 0.0, 0.0, 0x1.a707adadf7b81p-965,
     0.0, 0x1.686b375e46c79p-162, 0.0, 0x1.943e7ff3bdc35p-615, 0.0, 0.0,
     0x1.b15efff1df715p-727, 0.0, 0.0, 0x1.e53ac5dc6537dp-468, 0.0, 0.0,
     0x1.ec0e9c6a3e00ap-59, 0.0, 0.0, 0x1.e698628375153p-266, 0x1.31398dae9b1p-727,
     0x1.b5011c193f8d5p-386, 0.0, 0.0, 0.0, 0.0, 0x1.0c5ca333dc5f6p-925, 0.0,
     0x1.ddbb7e78af92p-854, 0x1.8f645dcb81bc8p-909, 0.0, 0x1.9e2c469b9daffp-778, 0.0,
     0x1.9a72b0eb39c2cp-22, 0.0, 0.0, 0.0, 0x1.e17a2deda2fdap-129,
     0x1.a5b0a4684cb27p-409, 0x1.5206045d2add2p-830, 0.0, 0.0, 0.0,
     0x1.c5ba6258622e9p-308, 0x1.7f7d4ec0e494p-297, 0.0, 0.0, 0.0,
     0x1.b0cd2c2c68b3p-101, 0.0, 0x1.82d22917ff337p-369, 0x1.0cebf777981cbp-59, 0.0,
     0.0, 0.0, 0.0, 0x1.af989a74d53f6p-866, 0x1.9d25404a35e8p-785, 0.0,
     0x1.2c6c1a610fbd2p-700, 0x1.70db01067787ap-792, 0.0, 0x1.a1b7679a48d09p-30, 0.0,
     0.0, 0.0, 0x1.fbfe93478436bp-105, 0x1.4c4d767b064bp-660, 0x1.1dc9947ff9fe2p-707,
     0x1.91c7d4c63bcc6p-745, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.92dc81bf5ab5cp-200, 0x1.432972c4ab6b8p-997, 0.0, 0x1.6b1445502a0bbp-425,
     0x1.c47b3a4c63a0ap-415, 0.0, 0x1.ee6560024376fp-522, 0.0, 0x1.d5cd71e565359p-386,
     0x1.3fe22e3ca5816p-315, 0.0, 0.0, 0.0, 0.0, 0x1.75db1698c96d3p-620,
     0x1.a5cea8dc646dfp-361, 0x1.16fe5e2167f64p-564, 0.0, 0.0, 0.0, 0.0,
     0x1.296216f315dffp-842, 0x1.b00410003ec9dp-319, 0.0, 0.0, 0x1.3c5c5979348b3p-720,
     0x1.50263f2612026p-16, 0x1.971ab4a92109dp-833, 0x1.b5e1dab8dcecfp-620, 0.0, 0.0,
     0.0, 0x1.64a7ab9813214p-344, 0x1.12c1511f59febp-25, 0x1.6b3888d581d7cp-366, 0.0,
     0x1.08ddf8e0aed2ep-940, 0x1.b15019931959ep-473, 0x1.6baae5fdf39ffp-418, 0.0, 0.0,
     0.0, 0x1.b1d1f67a81895p-984, 0.0, 0x1.4d72ee9e47cffp-196, 0.0,
     0x1.07f5abfd776ddp-740, 0.0, 0x1.04d24b5d41488p-513, 0x1.37a2b00f4b4f9p-612, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.223f97ddfb804p-131, 0.0, 0x1.62acb8efe9d1ap-718, 0.0,
     0x1.8b2f6bfbe7346p-715, 0x1.d5992ce6ed2ap-285, 0x1.d31b9e4935c26p-821, 0.0, 0.0,
     0x1.3078abdb02c39p-315, 0.0, 0x1.0149ceda82767p-999, 0x1.35284a28fa26ep-974, 0.0,
     0.0, 0.0, 0.0, 0x1.9005773ad46eap-1009, 0.0, 0.0, 0.0, 0x1.03b33e71269a8p-902,
     0x1.6f857dbc3493ep-360, 0.0, 0.0, 0.0, 0x1.8802c7bf1191ep-153,
     0x1.cf1985582e94cp-607, 0x1.7fdda61cf9642p-120, 0.0, 0x1.efaa1d492545cp-854, 0.0,
     0.0, 0x1.e2bc29141ada4p-827, 0.0, 0.0, 0x1.6e0af32b7c959p-585,
     0x1.a2081dd034441p-162, 0x1.c1c7c7851ac96p-752, 0x1.4788b780203f7p-2,
     0x1.ffca540fafe22p-838, 0.0, 0.0, 0x1.e0bebe117f6bcp-924, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.72aa2ee2d63f7p-58, 0.0, 0x1.195a3017f5ddp-283,
     0x1.cd8219fcf6a39p-445, 0x1.a9c4e4a062ed8p-252, 0x1.d1cbaee1b9bfap-857,
     0x1.cdee02c2ae31ap-511, 0.0, 0x1.9cce56e15fed8p-218, 0x1.c454ef4f6165fp-946,
     0x1.e261ecfbc4b02p-477, 0.0, 0x1.073d3f4d9a64ap-999, 0.0, 0.0,
     0x1.51fea147ea441p-329, 0.0, 0x1.75a38c4ee2c42p-599, 0x1.cd9e876dc3b69p-188,
     0x1.363125c3427fcp-524, 0x1.0c939363ad3cdp-11, 0x1.9777880c99053p-462,
     0x1.89ad8a2782112p-33, 0.0, 0x1.729d718e7e207p-686, 0x1.eacd9412fda4ep-894,
     0x1.6a1edf7e37baep-17, 0x1.7f1653ba02a1fp-300, 0x1.af930a0897f6ap-696, 0.0, 0.0,
     0x1.95bcf8a97e376p-647, 0x1.29378a5c936eep-5, 0x1.8a8b7f361a4f5p-795, 0.0, 0.0,
     0x1.6f52f407ad70dp-478, 0.0, 0x1.e31a123b39becp-324, 0x1.d5f8011d9b021p-754, 0.0,
     0x1.463be6d5c47dfp-317, 0.0, 0.0, 0.0, 0x1.50f3ddc8de0dap-744, 0.0,
     0x1.96d7495305d65p-958, 0x1.80062ab2fa312p-843, 0.0, 0.0, 0.0,
     0x1.d59de838e343ap-355, 0.0, 0.0, 0x1.62f70a5b1c7f9p-536, 0.0, 0.0, 0.0,
     0x1.adfdb6aed19fep-508, 0.0, 0x1.27ce80795141cp-699, 0x1.e4b2dbbd4a696p-978, 0.0,
     0x1.1ef0701f9d5afp-397, 0x1.c320ff34e3ce1p-640, 0x1.61604d08376bp-685, 0.0,
     0x1.8548b0a9418bcp-538, 0x1.cbaedd3b44ac9p-1009, 0.0, 0.0, 0x1.7ee6c719448d7p-76,
     0x1.cc4a88fdc8f2fp-693, 0.0, 0.0, 0.0, 0x1.7b90ee2b4b93p-392,
     0x1.c8d395dcaa1d5p-575, 0.0, 0.0, 0.0, 0x1.b20b29048fa2cp-588, 0.0,
     0x1.6a4ffb9d80417p-594, 0x1.d12c8d549bedep-142, 0x1.a2f23307b368dp-126, 0.0, 0.0,
     0x1.3ee606c377a8ep-104, 0.0, 0x1.b56775dd8f567p-996, 0.0, 0x1.a0d884620d12bp-211,
     0.0, 0.0, 0.0, 0x1.a3262f3cdbe46p-339, 0.0, 0x1.fe5ac05c0a00ap-797, 0.0, 0.0,
     0x1.8054c5ee9136ap-288, 0.0, 0.0, 0.0, 0x1.0d9f0c3e11564p-369,
     0x1.0e7aabf6769efp-278, 0x1.32c79f2d71bc1p-156, 0x1.85f5595f1a56cp-507,
     0x1.b24126752a51fp-449, 0.0, 0x1.2bf442cb649ccp-805, 0x1.aeeb972c4ef4bp-88,
     0x1.19803c4ab62c8p-440, 0.0, 0x1.2ad1257570132p-834, 0.0, 0.0,
     0x1.95ed16278f357p-362, 0x1.ff50b700b0b74p-123, 0.0, 0x1.16ee417e4ece1p-358,
     0x1.67bd4782000e6p-691, 0.0, 0.0, 0x1.619ae9c3b9e27p-982, 0.0, 0.0,
     0x1.5424675327eabp-732, 0x1.d56e74d1f3322p-957, 0.0, 0.0, 0.0,
     0x1.cebd8b464042p-389, 0.0, 0.0, 0x1.7b6389c87f95ap-1009, 0x1.21cfe32a66f19p-787,
     0.0, 0x1.abf78dd5f3f39p-894, 0x1.809f0f242ffadp-558, 0x1.c1d39cb511c4p-304, 0.0,
     0x1.66ec1d257b616p-591, 0.0, 0.0, 0x1.18a5efe23adbap-503, 0x1.552a65496f2c4p-207,
     0.0, 0.0, 0x1.c9cc77c8b6a02p-460, 0.0, 0x1.a9b974194a847p-73,
     0x1.bca20e76a693ap-520, 0x1.6dbcc15e44e1fp-281, 0.0, 0x1.29ac612f174cep-654,
     0x1.550edbc9659c5p-714, 0x1.992446771241cp-324, 0x1.950c3f8bec0a8p-341,
     0x1.952f485a69523p-985, 0x1.3fe2e5466b20dp-228, 0.0, 0x1.1cf0b94ef8824p-568,
     0x1.14055a6b90467p-671, 0.0, 0.0, 0x1.1817d1418e4e2p-711, 0.0,
     0x1.b5e6431e5c9dep-578, 0.0, 0x1.0c40220c3de77p-366, 0.0, 0.0,
     0x1.1697370d2bec7p-947, 0x1.f3875a8c5b80ap-658, 0x1.ab1bc9c310193p-513,
     0x1.3cc0021c0ad1p-908, 0.0, 0x1.7854a4f195609p-786, 0.0, 0.0, 0.0,
     0x1.e222b0a850c09p-72, 0.0, 0.0, 0x1.93e22cb28668ap-951, 0x1.ed9e4ab5a5eb1p-997,
     0.0, 0.0, 0x1.ba0b7d82e68e6p-42, 0x1.d33fec3d489a2p-384, 0x1.5ed7d719610f9p-956,
     0.0, 0x1.14c97816e8caap-87, 0.0, 0x1.1bffa6f177d2fp-242, 0x1.24151ab038d1p-705,
     0.0, 0.0, 0x1.d8bde3039e691p-111, 0x1.a38e2e7115656p-661, 0x1.13d73110bc931p-846,
     0x1.ba36562a4939cp-409, 0x1.72b3a6eaee9f4p-834, 0x1.af5387cec2cc2p-197, 0.0, 0.0,
     0x1.b4849ed283b59p-359, 0x1.f38a7079dd173p-818, 0.0, 0x1.a37dcf2eadd51p-35, 0.0,
     0.0, 0x1.c623c35530b85p-546, 0x1.e72cd9e30cap-420, 0x1.4c912e6aa9e55p-120,
     0x1.b0e512ba6bae2p-496, 0.0, 0.0, 0x1.aea27f6ddc4fbp-569, 0.0,
     0x1.e67f3ad47b6b3p-697, 0.0, 0x1.8ce9687fa69p-959, 0x1.513f1167df637p-190, 0.0,
     0x1.3e98401d17d8cp-812, 0.0, 0.0, 0x1.74c82f5684deap-252, 0.0,
     0x1.3e325ec941badp-434, 0x1.b7119496dd31ep-937, 0.0, 0x1.d1db9c2f800f5p-145, 0.0,
     0x1.6679f1f695ddp-819, 0x1.8ce37ba4a375p-267, 0x1.764ca0f14a8cfp-100,
     0x1.f9772fc808e17p-757, 0x1.d9d0636204638p-780, 0x1.9bc4fe344c814p-387,
     0x1.fd2e1d490693p-721, 0.0, 0x1.7b4a521ea04adp-477, 0.0, 0.0,
     0x1.b47c3edf08cd4p-5, 0x1.3d586120f78ddp-322, 0.0, 0.0, 0x1.96fe63eb02c1dp-233,
     0x1.90ddc330bfa16p-232, 0.0, 0.0, 0x1.e2299aba72989p-754, 0.0, 0.0,
     0x1.40c5b79cda2c4p-419, 0x1.e7e78f4639b3p-80, 0x1.01be9300dad4bp-959, 0.0, 0.0,
     0.0, 0x1.9cf313f72516ep-889, 0.0, 0.0, 0.0, 0x1.8afbcb4b92709p-926, 0.0,
     0x1.8cece88cfad52p-843, 0x1.c6465b07894dap-8, 0x1.4f8d49d7351fdp-548,
     0x1.39d91ebe30c1fp-893, 0.0, 0.0, 0x1.606efb3336704p-659, 0.0, 0.0, 0.0, 0.0,
     0x1.7894be83c6d9ap-742, 0.0, 0.0, 0x1.ec773ba211a7ap-394, 0x1.6e16882d38f6p-443,
     0x1.9bbcba6aafe6dp-912, 0.0, 0.0, 0.0, 0x1.c9e99c6bd75f2p-493, 0.0, 0.0,
     0x1.b549709a00ba3p-672, 0x1.8b41fcb038901p-700, 0.0, 0x1.6e7ed06a5c174p-185,
     0x1.897ae51ca38f6p-755, 0.0, 0.0, 0x1.8613aef2841f5p-279, 0x1.fdd3e8f70e29fp-513,
     0.0, 0.0, 0x1.e85b74900db45p-731, 0x1.ed1f328bde2d2p-649, 0.0,
     0x1.8ac848897cc1ap-500, 0x1.cf95afa81bed2p-468, 0.0, 0x1.e59da85a04116p-405, 0.0,
     0x1.06739495721bfp-464, 0.0, 0x1.592b7124bf21bp-5, 0.0, 0.0,
     0x1.64ab9f0869f35p-285, 0x1.b6310d2772ce6p-741, 0.0, 0.0, 0.0,
     0x1.a581a974e1859p-521, 0.0, 0x1.ee1c13fd906abp-757, 0.0, 0x1.732c7fe79452p-858,
     0.0, 0.0, 0x1.fa1a84c59a8dep-102, 0.0, 0x1.352d2a6fcdbf4p-561, 0.0, 0.0, 0.0,
     0.0, 0x1.d7a143bd05e96p-506, 0x1.791918c22b928p-93, 0.0, 0x1.1786a54ed077ep-692,
     0x1.79debb4d94484p-679, 0x1.6a4de6208927bp-731, 0.0, 0x1.01f2a84d76931p-286,
     0x1.00329ec660b35p-605, 0x1.700d6e9da06b5p-344, 0x1.da62fc629d064p-190,
     0x1.0c7ef250ea25ep-6, 0x1.ff493d6b50789p-555, 0x1.908582cb85ccep-716,
     0x1.8c746589fbaeep-542, 0x1.aa35803efddcp-881, 0.0, 0.0, 0x1.fcfa283f9b44bp-900,
     0x1.5eac123d08eddp-349, 0.0, 0x1.bdd0d5607e2cap-136, 0.0, 0x1.1c658f01f8576p-485,
     0x1.0e4e69b501e8bp-907, 0.0, 0x1.95d3fdcf8e8dfp-238, 0x1.8baae2768b24dp-68, 0.0,
     0x1.10c17b7604e93p-87, 0x1.0f7a20131d6f2p-388, 0x1.dcd6f14e84ff4p-572, 0.0,
     0x1.4341f1c5971fep-630, 0.0, 0x1.326cab353af8dp-730, 0.0, 0.0, 0.0,
     0x1.524ca3586732bp-301, 0.0, 0.0, 0x1.3cb76ef5ff7acp-795, 0.0, 0.0,
     0x1.4b02d8dfaf91fp-200, 0.0, 0.0, 0x1.c17d6911ebc8p-368, 0.0,
     0x1.0a661ec6465bbp-584, 0x1.64e5d2c125b5dp-48, 0.0, 0.0, 0x1.6376ced6e8905p-752,
     0.0, 0x1.993059dc60044p-794, 0.0, 0x1.18e044ffae80ap-271, 0x1.45b0dc860647fp-383,
     0x1.b8aa0ae1124c7p-419, 0x1.65d1bbf580352p-788, 0x1.739029b7b7261p-923, 0.0,
     0x1.2041a1467b03dp-1002, 0x1.8244e3f6f5096p-595, 0x1.728549c3ca78p-155, 0.0,
     0x1.6fa9185c65646p-782, 0x1.6098d2b8dfd65p-215, 0.0, 0x1.82833a189d3dp-549, 0.0,
     0.0, 0.0, 0x1.fbb94ba3e2889p-194, 0.0, 0x1.4d0414b00baa8p-281, 0.0,
     0x1.2bb6f5ab9b568p-189, 0x1.f8d05853f1278p-954, 0.0, 0.0, 0.0,
     0x1.ffb69d647ec43p-389, 0x1.6a9677c9cb7fap-397, 0.0, 0.0, 0x1.684e623ac8f8dp-724,
     0x1.f67f8813961b4p-920, 0x1.cc8afa574b252p-855, 0x1.58b93bbe33f15p-833,
     0x1.6cb3619e95a96p-4, 0x1.54f7ef0dbf835p-951, 0x1.bb941aea6a6fcp-318,
     0x1.e1adb0f9bdb4fp-19, 0x1.26c70195a7116p-556, 0.0, 0x1.9188ce945e888p-545, 0.0,
     0.0, 0.0, 0.0, 0x1.0f8a842da3e3cp-338, 0x1.aa695d53db02bp-767,
     0x1.9a02db81b69c7p-694, 0.0, 0x1.9c9f0f5f16931p-861, 0x1.5015e5e49e662p-709,
     0x1.b7d4948572edbp-428, 0x1.5d5b2eba58ceep-580, 0x1.7c8d2c0d44cbap-972, 0.0,
     0x1.b203f2efdc3p-643, 0.0, 0.0, 0x1.25f183ffe6ebp-316, 0x1.7744b9e86368ap-801,
     0x1.da45da5ab26dp-550, 0.0, 0x1.aa5fa04da0ab1p-653, 0x1.32715863f8fdap-678, 0.0,
     0.0, 0.0, 0.0, 0x1.adb69d0fb3239p-373, 0x1.5e900b49fb7b2p-796,
     0x1.20f8fb2a9b9f5p-758, 0.0, 0x1.15d0099ef6b9dp-51, 0.0, 0x1.cf491569514a7p-402,
     0.0, 0.0, 0.0, 0x1.788f1b5906266p-448, 0.0, 0.0, 0x1.071f369475fa8p-331, 0.0,
     0x1.7727174c92f17p-370, 0.0, 0.0, 0x1.f4e98e67fcd0ap-106, 0.0, 0.0,
     0x1.0feeef38705f3p-281, 0x1.ec6607fda55c4p-511, 0x1.2ad05879b31b8p-782, 0.0,
     0x1.e383753be0137p-166, 0.0, 0.0, 0x1.45264d71969f5p-70, 0.0,
     0x1.edc76933c211ap-622, 0.0, 0x1.c6b786e3efc1cp-612, 0x1.314bd75fd8fefp-565,
     0x1.578e574f5dfadp-670, 0.0, 0x1.f842944feaea8p-3, 0.0, 0x1.98cc5c46ec2d2p-98,
     0x1.f339c9a4d1a66p-64, 0x1.4042713e7f9d4p-644, 0.0, 0x1.7037515ff4044p-986, 0.0,
     0.0, 0.0, 0.0, 0x1.61623318c8f9p-237, 0.0, 0x1.e0886bf4460d2p-798,
     0x1.90bbeacf808f5p-177, 0.0, 0x1.8b3a94cbe69fep-518, 0x1.af0b338c900a2p-733, 0.0,
     0x1.95093e138fbe9p-703, 0.0, 0.0, 0x1.0d6d4a598bf82p-260, 0x1.c988a16b2868bp-798,
     0.0, 0x1.c1d1ed11b84a9p-513, 0x1.812beefcc3877p-77, 0.0, 0.0, 0.0,
     0x1.f87a3fea9da5dp-331, 0x1.5cebb8dc45368p-422
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
            tmp1 = Sleef_atanhd1_u10purecfma(tmp0);
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
    printf("Sleef_atanhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
