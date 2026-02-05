/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd2_u10kvx.c --function Sleef_tanhd2_u10kvx \
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
     0x1.fb451fe48bae8p-834, 0x1.3b03ce2e89163p-710, 0x1.162ca6185e01fp-970,
     0x1.55db2cab15f06p-205, 0.0, 0x1.9526349326b5p-818, 0.0, 0x1.92503e447a4e5p-338,
     0x1.8ae54f55b3376p-778, 0.0, 0x1.c0d4143bfd818p-252, 0x1.ebcd2e82930adp-940,
     0x1.717295857519ap-55, 0.0, 0.0, 0x1.9f70f8607596fp-76, 0x1.60c0c24bbbc43p-392,
     0.0, 0x1.aa6d13a636f4p-913, 0x1.7c4c454713c55p-748, 0x1.1b568ac8401bap-930,
     0x1.315d8d1298cafp-1020, 0x1.e3f341ca01339p-267, 0.0, 0.0,
     0x1.8e2f472c48d77p-289, 0.0, 0.0, 0x1.e4aefec9a68a6p-599, 0x1.72e5fc3b145c3p-580,
     0.0, 0x1.a98d30e98cab8p-224, 0x1.6d28ae2d41d9cp-907, 0.0, 0x1.48dc741f21818p-480,
     0.0, 0x1.4d2b7d4c87717p-673, 0x1.75fc08bb1542fp-330, 0x1.5d15a3ddccec7p-777,
     0x1.278fe1fd22d72p-815, 0.0, 0x1.0c7de0b9d34e7p-342, 0.0, 0.0, 0.0, 0.0,
     0x1.6f3fa4079b506p-246, 0.0, 0.0, 0x1.2712cac6565ep-599, 0.0,
     0x1.4c6d3ddd7c5b1p-224, 0x1.194897f9252adp-339, 0x1.9d90bd93d682ep-692,
     0x1.b4f9a622db0aap-23, 0.0, 0x1.480bf4c53fc71p-408, 0x1.4f09fe290800bp-1018,
     0x1.fa70b0289c36bp-79, 0.0, 0x1.5d4981e4700a9p-362, 0.0, 0x1.4e5f85af88b8ap-55,
     0x1.bf86f01d285cp-434, 0x1.ded7546723a05p-212, 0x1.cd59effb60969p-796,
     0x1.34ef878307a6fp-73, 0x1.cdd65cea1f328p-367, 0x1.7e95ff70fa804p-828, 0.0,
     0x1.353c21a3b2814p-149, 0x1.7c6462f2ac3c6p-44, 0.0, 0.0, 0x1.0af04f206398fp-788,
     0.0, 0.0, 0.0, 0x1.b58812334306cp-700, 0.0, 0.0, 0.0, 0.0,
     0x1.10c5f575c7902p-731, 0x1.7bb3233d7d217p-375, 0x1.7c0e7506ccabdp-233, 0.0, 0.0,
     0.0, 0x1.cc273037555b5p-52, 0.0, 0.0, 0x1.85e8a3b30ecbp-883, 0.0,
     0x1.8ee1bc3efb0fcp-425, 0x1.d6b7eaa199f42p-258, 0.0, 0x1.da2a7a99dabc3p-307,
     0x1.bddd2249112adp-247, 0x1.7a6b18a2be003p-491, 0.0, 0x1.bd5abdc4b10ecp-976, 0.0,
     0.0, 0.0, 0.0, 0x1.af0c42088ce9ep-793, 0.0, 0x1.2dfb3259f85a8p-350, 0.0, 0.0,
     0.0, 0x1.054d7694da994p-701, 0.0, 0x1.4233fbcbb3b32p-970, 0x1.c029cd87aa59ep-663,
     0x1.7fecf8c53d441p-38, 0x1.0960f6e5103dfp-726, 0x1.3b8e3c36aa937p-816,
     0x1.19ef99260cfccp-624, 0x1.e076a1f6f4f06p-646, 0x1.7a8a130c4d91cp-101,
     0x1.4bb76b659a666p-702, 0x1.0246440da406dp-542, 0.0, 0.0, 0x1.2e7cf94cbf06dp-856,
     0x1.fe5785480efe5p-1005, 0x1.0f4222ca54608p-268, 0.0, 0x1.cbefeb9d54016p-123,
     0.0, 0.0, 0x1.3dec9e95f1c8p-419, 0.0, 0.0, 0.0, 0.0, 0x1.7994972894ee5p-147, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1a3c375184876p-523, 0x1.2dfd1b7cfb9eep-786,
     0x1.9d699f978e3a7p-736, 0x1.d4d482539b454p-312, 0x1.f6798b5b93b83p-152, 0.0,
     0x1.9f8c166b7c566p-799, 0x1.65aeb99bbbd06p-296, 0x1.25aa02b686adbp-354,
     0x1.b27623a96b3cap-716, 0x1.bdd00fec5abd6p-724, 0.0, 0x1.b83fcd21aaaf5p-536,
     0x1.c89e036585345p-622, 0x1.569b775980057p-925, 0.0, 0x1.d3430501c5f62p-107, 0.0,
     0.0, 0.0, 0x1.826acc4880385p-400, 0x1.2a2df3a2c30f2p-55, 0.0, 0.0, 0.0,
     0x1.07833d1a38281p-289, 0x1.d25be1b21e5bdp-511, 0x1.5f96705f64998p-790,
     0x1.7672a45bcca83p-112, 0x1.799c7450fb793p-204, 0.0, 0x1.d4e9ff62f4292p-974,
     0x1.656f6a4aa9a31p-881, 0x1.6ae2682011f1p-771, 0.0, 0x1.d337da6b57f1p-797, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.09a681c0b7c7p-111, 0x1.d873c08a97c25p-16, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b030554f2984ap-256, 0x1.64091f6335f44p-126, 0.0,
     0x1.82eca7861bd27p-507, 0x1.3356f4d6d22dbp-262, 0.0, 0x1.978f97928cccfp-690,
     0x1.316b6aa98f7bcp-430, 0.0, 0x1.8922d6ec758bdp-939, 0.0, 0.0, 0.0, 0.0,
     0x1.e4e4facae0aeap-387, 0x1.08e53060e3c7ap-698, 0.0, 0x1.d48050cb567e6p-131, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a725b4078a242p-625, 0x1.5f254f4d2943ap-866, 0.0,
     0.0, 0.0, 0x1.bdcd48b2d7d2p-284, 0.0, 0.0, 0x1.b6b22b286d616p-132, 0.0, 0.0, 0.0,
     0.0, 0x1.3394b1acaa641p-353, 0x1.ad2075c7aa8cfp-435, 0x1.77383101f9917p-787,
     0x1.956d8eff203efp-500, 0x1.b760d0a7a56b2p-1020, 0.0, 0.0,
     0x1.6ec7d19a566cdp-147, 0.0, 0.0, 0x1.96efdf65a2b94p-622, 0.0, 0.0,
     0x1.164c4215de097p-384, 0x1.0b05b6146a4cbp-556, 0x1.2c3eabbb8ca4dp-93,
     0x1.9a7db1126ed36p-883, 0.0, 0x1.a7cb3b63de336p-712, 0.0, 0x1.09f3df7a780cdp-48,
     0.0, 0x1.e705aa4002c9p-916, 0x1.6040d23629961p-25, 0x1.f489c8d6352c1p-854,
     0x1.08acc6c547591p-398, 0x1.306a2ce13e78fp-196, 0.0, 0.0, 0x1.781e1a3371ac5p-605,
     0x1.6a147dc4a5abcp-271, 0.0, 0.0, 0.0, 0x1.dbf26da731fbap-779,
     0x1.a2f6ca35f7c57p-648, 0.0, 0x1.5189aa331ebccp-558, 0.0, 0x1.578da6937cecep-879,
     0x1.4a4fe85184643p-757, 0.0, 0.0, 0.0, 0x1.79b2c7131733cp-80,
     0x1.c7081fa4179f8p-83, 0x1.e56e4dc102323p-259, 0x1.4f8b31a2e3281p-316, 0.0,
     0x1.97518f6d31285p-370, 0x1.6bd612fad8152p-35, 0x1.d1339d9a05645p-553,
     0x1.67c59157734dp-929, 0.0, 0x1.8ed23f8d56ccdp-401, 0.0, 0x1.09998b2a4b0f1p-701,
     0x1.4692bdff5a102p-337, 0x1.7a9a24e9aa392p-157, 0.0, 0x1.d57f396780a7fp-965, 0.0,
     0.0, 0x1.232d8bbdcd04p-237, 0x1.0b52db165802ep-90, 0x1.67192fd526411p-691, 0.0,
     0.0, 0.0, 0x1.41dc32838bba3p-386, 0.0, 0.0, 0.0, 0x1.7336a85b1601p-594,
     0x1.2d1697c827bf8p-543, 0x1.8fe28d82ea75dp-399, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9ca7d2154a655p-10, 0x1.317e7e4ce632ap-302, 0x1.796b190250358p-680, 0.0,
     0x1.70065da0c6edap-860, 0.0, 0.0, 0.0, 0.0, 0x1.5ece3c83f4985p-252, 0.0,
     0x1.285feb6975a33p-1003, 0x1.92ad6027c1bbp-906, 0.0, 0x1.4cafe3d5bc726p-935,
     0x1.d1b6ac1f928c8p-645, 0x1.4777845a4cf82p-689, 0.0, 0x1.b4140faa25c3ap-617, 0.0,
     0x1.e59b1bed2833ep-166, 0x1.69add545250b1p-346, 0x1.e7e22977144dep-107, 0.0, 0.0,
     0x1.254d319b25452p-232, 0.0, 0.0, 0x1.eebb9d6721a3p-120, 0.0,
     0x1.963ad2806a884p-219, 0.0, 0.0, 0x1.54af6605fad47p-206, 0x1.10e94431c5001p-186,
     0.0, 0x1.79c99b13575bap-676, 0x1.d0f501b41138bp-81, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98bf6349159efp-578, 0x1.71402e3c047a7p-172, 0x1.7967487558838p-201,
     0x1.11a4f3bd522bbp-459, 0x1.f8f83588f5256p-140, 0.0, 0.0, 0x1.e2ed07ee987f6p-514,
     0x1.1dc4c9c29a4a2p-612, 0.0, 0.0, 0x1.9e26c779e1315p-58, 0x1.f340096985f3cp-1017,
     0x1.4ec3206ab278ep-546, 0x1.f706ab8ec6aap-289, 0x1.dd27926e0f28fp-752,
     0x1.d56ba3b5b621ap-978, 0.0, 0.0, 0x1.83632d3cd4c72p-4, 0x1.9397e84a2ec18p-733,
     0.0, 0x1.0671469503dd6p-787, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e83f3ebbc3809p-171, 0.0, 0x1.69ac53b67d8a7p-106, 0.0, 0.0,
     0x1.c0aeb1666ae3cp-411, 0x1.e267c38d6b486p-374, 0.0, 0x1.af5863db664c8p-587,
     0x1.de1f93a4f42b2p-245, 0.0, 0.0, 0.0, 0.0, 0x1.ed9c940fc428bp-998, 0.0, 0.0,
     0.0, 0.0, 0x1.711b845510378p-885, 0x1.db259714a594ep-250, 0x1.1db5a01d6704cp-121,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da16bb6ce67f9p-213, 0.0,
     0x1.c22475b9c7078p-526, 0.0, 0x1.704aedfed034p-406, 0x1.46e1bb03343c4p-497,
     0x1.92caf64f2c492p-980, 0x1.b192ecd3d657bp-485, 0.0, 0.0, 0.0, 0.0,
     0x1.881771eb6625p-213, 0.0, 0x1.68e0de47c1be6p-121, 0.0, 0.0,
     0x1.4a8326186005fp-112, 0.0, 0x1.aa87deba9d0e6p-883, 0.0, 0.0,
     0x1.ed2b59f41823ap-934, 0x1.cb75fd7454132p-494, 0.0, 0x1.79dc50c4f33bdp-997, 0.0,
     0.0, 0x1.4752bc0eaedd7p-1007, 0.0, 0x1.adfe4fae8c24ap-102, 0.0, 0.0,
     0x1.154e20ca741aap-891, 0x1.e927dc1e1cd78p-383, 0.0, 0.0, 0x1.b8d9b80bbf1a8p-148,
     0x1.152a5cdf32fcp-215, 0x1.a148aa9a7220bp-222, 0x1.b9fa2771bfb09p-785,
     0x1.ba1e612ab4786p-402, 0x1.cf1f4bb1a3568p-16, 0x1.12e514eae4fadp-478, 0.0,
     0x1.75bb1de5fdeb4p-39, 0x1.0b686cd8383b3p-315, 0.0, 0x1.f342d4fa2414bp-971,
     0x1.df3e8d5283c67p-499, 0.0, 0x1.7799920084c81p-360, 0x1.373c3796aa812p-684, 0.0,
     0x1.3309f4e13907ep-488, 0x1.6c7e9ddf3a73fp-600, 0x1.37669418ca0bfp-564, 0.0, 0.0,
     0.0, 0.0, 0x1.8b3a7a86975ddp-805, 0x1.ad6d155e153e1p-241, 0.0,
     0x1.1c60db0735b6cp-973, 0x1.6851b34be53c3p-724, 0.0, 0x1.7e1c2ce1bb409p-259, 0.0,
     0.0, 0x1.5d44e1ce3e837p-393, 0x1.29d00d12b4d57p-120, 0x1.9982f7f77acbp-724,
     0x1.0193b27fe042fp-988, 0.0, 0x1.fef360971271p-909, 0.0, 0x1.482e6c581bd7ep-927,
     0x1.bdb842904848ep-135, 0x1.d420ad031939ep-839, 0x1.571e525615baap-303, 0.0, 0.0,
     0x1.62f73bbcf15b3p-338, 0.0, 0.0, 0.0, 0.0, 0x1.d68b2103a701ep-804,
     0x1.b2c96d19e741ap-192, 0x1.35eef1e08eef2p-578, 0x1.d4009f35545c5p-87,
     0x1.dacb3ee44efcfp-1016, 0x1.9af16c940f679p-676, 0.0, 0.0, 0.0,
     0x1.6c02bb8d67a6fp-880, 0.0, 0.0, 0.0, 0x1.c709250055cc5p-113,
     0x1.eff61cfb434e8p-635, 0x1.8cbeb1d0c6fc8p-59, 0x1.352517cb42696p-680, 0.0, 0.0,
     0x1.7f3be15af77fp-82, 0x1.9fdcad3e90424p-112, 0.0, 0.0, 0x1.d3e98b6d4182fp-640,
     0.0, 0.0, 0x1.c826596f35ef3p-811, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.19eaffd894391p-185, 0.0, 0.0, 0x1.3e1b34578f233p-678, 0.0, 0.0,
     0x1.f2540b1f5ec16p-321, 0x1.f42bf599cc7b2p-763, 0x1.b373dab5fd6b7p-236, 0.0, 0.0,
     0.0, 0x1.aaebede1a64a3p-950, 0x1.6bce8038733ep-566, 0x1.79ec057f6bb7ep-63, 0.0,
     0x1.7c6cae9533ce7p-862, 0x1.31bd2f403e67bp-513, 0x1.8d70eb1ea27aap-125,
     0x1.965563609aa44p-14, 0x1.b2241019ff9dap-608, 0.0, 0x1.3ef7552fa694ep-383,
     0x1.f30dad88bc1c2p-426, 0.0, 0.0, 0x1.94c9c95841a8fp-48, 0x1.8b6dbca9ed3ecp-447,
     0x1.20e966e77765cp-17, 0.0, 0x1.7cc4d9a05d9bbp-519, 0.0, 0x1.f3e21bcc9de0ep-952,
     0.0, 0.0, 0x1.1aceb6dc2cf85p-436, 0.0, 0.0, 0x1.54d7f1c0eb5b4p-799, 0.0, 0.0,
     0x1.d8d41d2552f1cp-865, 0.0, 0x1.2bc95f220bbe5p-346, 0x1.0d62e74a7c9b5p-751, 0.0,
     0x1.529569c05259ep-757, 0.0, 0x1.ceb0bcbedeeebp-489, 0x1.30dcb036de1c1p-159, 0.0,
     0x1.186bbcc826631p-646, 0.0, 0.0, 0x1.5934b0645b131p-617, 0.0, 0.0, 0.0, 0.0,
     0x1.624ff56bb55f7p-614, 0x1.3d7ac6e0f956p-272, 0x1.74f254d2e0da9p-953, 0.0,
     0x1.f1623e3cb3ae3p-746, 0x1.76eded1fbefa7p-391, 0.0, 0x1.9bc00fc4a23fcp-126, 0.0,
     0x1.3f6c413dd8045p-845, 0.0, 0x1.e9014f2c2cc49p-809, 0x1.5dfd8205ed625p-273,
     0x1.1350bf2f5f61cp-227, 0.0, 0.0, 0.0, 0x1.1f46ebf47e047p-870, 0.0, 0.0,
     0x1.5aa22dbfa11b2p-659, 0.0, 0.0, 0.0, 0.0, 0x1.d93880ac7167cp-970, 0.0,
     0x1.d7314a6d3c2dbp-741, 0.0, 0.0, 0.0, 0x1.3eb3078a60319p-458, 0.0,
     0x1.2e38d22769302p-420, 0x1.79b89cc4a7577p-902, 0x1.fca86bae04485p-18,
     0x1.2edb50ad352d5p-126, 0.0, 0.0, 0.0, 0x1.9acb7dc53470bp-298,
     0x1.0f3a9a95232fp-33, 0.0, 0.0, 0.0, 0x1.31f9db81ed40ap-436, 0.0,
     0x1.9ae2f4df8fddbp-860, 0x1.0a14a1f7aa947p-351, 0.0, 0x1.55e2dfb47a45p-338, 0.0,
     0x1.1d08ec7c0441p-844, 0x1.39cea04aa1bfcp-432, 0x1.8a2c8105bc25fp-383, 0.0,
     0x1.a5d72ee48764bp-560, 0x1.8ace21f1b9907p-170, 0x1.1e9fbd87688f3p-840,
     0x1.0dafe5b1f259fp-890, 0x1.162445da6f38cp-922, 0x1.139ff8b5cd1d3p-816,
     0x1.27b0ff535ffcbp-142, 0x1.69638a976e44bp-994, 0x1.ceb9ca8433657p-799,
     0x1.f081acfb7216bp-645, 0.0, 0x1.01738a75ae6f5p-170, 0.0, 0x1.7712f44461bb1p-717,
     0x1.f2731a704d2f5p-936, 0x1.a2987a602c9e5p-815, 0.0, 0x1.61af83dc211f9p-821,
     0x1.9c39ba2841adbp-351, 0.0, 0.0, 0x1.d9eaeb15a6aefp-441, 0.0, 0.0, 0.0,
     0x1.c14b0d8d422cbp-413, 0x1.67174b29ef6c1p-78, 0x1.0ebfa7c36167p-812,
     0x1.d3e707f557c55p-226, 0x1.742f73be54b4ap-721, 0.0, 0x1.24d762f32539ep-801,
     0x1.355994a09bb7p-127, 0.0, 0.0, 0.0, 0x1.0779aad0874d2p-949,
     0x1.11f7d24399812p-496, 0.0, 0x1.1dba2df1b6c9p-956, 0x1.e6fe43ce5cd2p-158,
     0x1.36234993c1e45p-285, 0.0, 0.0, 0x1.1ae7a5f17c403p-415, 0x1.d7ba01255876bp-517,
     0.0, 0x1.d9f3e1a52ff37p-895, 0.0, 0x1.597468cf3ba26p-869, 0x1.b2fbf0b37a036p-610,
     0.0, 0x1.b3215992f92f3p-174, 0.0, 0.0, 0x1.1dc66b89f75bdp-183,
     0x1.a6fbd6b2693fp-697, 0.0, 0.0, 0.0, 0.0, 0x1.3b392a6398fadp-84,
     0x1.2fbe01707a116p-676, 0x1.f033b561f95d9p-91, 0.0, 0x1.064059de5cd99p-956,
     0x1.9bb507eb3751p-912, 0.0, 0.0, 0.0, 0.0, 0x1.d61dd969d8e9p-971,
     0x1.f505f7582d5f2p-998, 0.0, 0.0, 0.0, 0x1.0490627d411d3p-862,
     0x1.d4c4a03a025fp-171, 0.0, 0x1.379ab382812d5p-67, 0.0, 0x1.ee81802e6150bp-67,
     0x1.be238164e873ep-714, 0x1.f82b1998a26aap-58, 0.0, 0.0, 0x1.10c1b7f9b85fap-998,
     0x1.1b8c5a31bb58p-297, 0.0, 0x1.6532cdd6a26f8p-707, 0x1.d3ee6959086f2p-912, 0.0,
     0x1.96cb23aff20c2p-935, 0x1.cd5bf0341d973p-46, 0.0, 0.0, 0.0, 0.0,
     0x1.f049df235a8b6p-336, 0.0, 0.0, 0x1.8977edf5033b2p-19, 0x1.5a2a911005399p-612,
     0x1.924ea277bad4ep-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c023ae7e23ed4p-304,
     0x1.66f31919091c5p-217, 0x1.349821c3923c4p-805, 0.0, 0.0, 0x1.bb41076431313p-662,
     0.0, 0.0, 0x1.3fe3de0fbe444p-789, 0.0, 0.0, 0x1.bf4c93bbe279p-772,
     0x1.6f378c8b4392dp-204, 0x1.e9ba2f01a8c3fp-570, 0x1.fdf6df03e8ca5p-689,
     0x1.0623a48c4ab59p-493, 0.0, 0x1.9878f3321107p-830, 0x1.9f31732185c76p-23, 0.0,
     0x1.b151dd6db40b2p-961, 0x1.87e0ff9337779p-695, 0.0, 0x1.77e00df929b99p-408,
     0x1.85f1cf284d3cbp-562, 0.0, 0.0, 0.0, 0x1.ee639224705ep-508,
     0x1.6e27bfeb46281p-366, 0.0, 0x1.711714ce26069p-298, 0.0, 0.0,
     0x1.411eb3c366b5cp-670, 0.0, 0x1.341a6e8e27a6ep-830, 0.0, 0x1.10fa6b3a2e9eep-614,
     0x1.96bde158d5e8ep-300, 0.0, 0x1.1f7bde2c60686p-373, 0x1.4c7c5f431006ep-3,
     0x1.130e98d319ecbp-18, 0.0, 0.0, 0.0, 0x1.46f793adbc59fp-77,
     0x1.f9daf0ac67c76p-563, 0.0, 0x1.1ce0aa67fbcap-566, 0.0, 0.0,
     0x1.df8111495e1ccp-863, 0x1.66d8ae66618fp-856, 0x1.752dac1176a12p-797, 0.0, 0.0,
     0.0, 0x1.0d7157b497f84p-147, 0.0, 0.0, 0x1.3c2d5eff39d3fp-568, 0.0, 0.0, 0.0,
     0x1.2b47b2d0c513dp-625, 0.0, 0x1.94e3736196a49p-255, 0x1.15643d2a1061dp-708, 0.0,
     0x1.15d79251617dfp-780, 0x1.7e5d47468c5bp-518, 0x1.f4e16ca58b0a4p-459, 0.0,
     0x1.34fc2735308a3p-186, 0.0, 0x1.5af45cfa833d2p-707, 0x1.b28f54be3f38bp-128,
     0x1.b9182c846de0cp-652, 0x1.8114f765c328ap-94, 0.0, 0x1.2ccfa65e409d6p-3,
     0x1.23233a4318d4ep-142, 0.0, 0.0, 0x1.7ec8b2b0db555p-807, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e16ff02cf5a3cp-931, 0x1.4a739279d4041p-690, 0.0, 0.0, 0.0, 0.0,
     0x1.fe08b648c25b3p-32, 0x1.dfd3126b038acp-532, 0x1.de86a22b44901p-68,
     0x1.42f005a91c28bp-409, 0.0, 0x1.509e6dfd7fb7p-548, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.55496b02a8718p-764, 0.0, 0.0, 0x1.046facd0a3327p-289, 0.0,
     0x1.2bbb240d8f46cp-651, 0x1.ad6f85ec55654p-836, 0.0, 0x1.a6ad3937c16afp-352, 0.0,
     0x1.85a66f11d8cf3p-143, 0.0, 0x1.7ab45321898fdp-823, 0x1.5bab71d3c94ap-305, 0.0,
     0.0, 0.0, 0x1.df32153a68aa1p-720, 0.0, 0.0, 0x1.de1890ab32445p-505, 0.0,
     0x1.8214ccadcec09p-918, 0.0, 0x1.683e055621bd2p-114, 0.0, 0x1.79e6bee43a0dbp-159,
     0x1.9edd5802e052ap-953, 0x1.4610bde4e9ae5p-965, 0x1.55fa62781c24dp-661, 0.0,
     0x1.26f4a4abcf75fp-412, 0.0, 0x1.a2204e280eedcp-271, 0x1.b6bdca42ada33p-268,
     0x1.a0b6c8a5ec22ap-306, 0x1.37b855182e4fp-1015, 0.0, 0.0, 0.0,
     0x1.ef8052f8e0ecdp-526, 0x1.3ea3e22bf172fp-730, 0.0, 0.0, 0.0,
     0x1.410f81e86686p-841, 0x1.daf3bcfe76bd3p-833, 0.0, 0x1.813a69f80097ep-367, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a2f99c677061p-994, 0.0,
     0x1.03a2260e7ed4ep-480, 0.0, 0x1.261033da77ac7p-345, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0829fa90c9039p-966, 0.0, 0x1.9ee1161a83b58p-335, 0x1.b28fe4c514c57p-850,
     0x1.29e43cda5227dp-897, 0x1.b42931fba46d9p-334, 0.0, 0.0, 0x1.e8022ee52d573p-890,
     0x1.c50e389dd4b73p-674, 0.0, 0.0, 0.0, 0x1.dc9221a63b8ebp-91,
     0x1.5280f09bf60b7p-1013, 0x1.5055491f6256dp-645, 0x1.468fa14a0da78p-282,
     0x1.cba3696667f72p-81, 0.0, 0x1.5017e01ce6c4ep-117, 0.0, 0x1.4539891ccd072p-152,
     0.0, 0x1.e3e23fabaf69p-454, 0.0, 0x1.0b144f09bb68dp-676, 0x1.10a791eeb4c94p-133,
     0x1.fa032c3fdaff3p-580, 0x1.7891687ac908p-327, 0x1.c1dc44616df62p-748,
     0x1.450f1f140f0cap-978, 0x1.3809c9bb02f28p-179, 0.0, 0x1.95480289dd3c7p-1000,
     0x1.e8e8aebb95161p-470, 0x1.a1b0d45545752p-241, 0.0, 0x1.0507bfad765bcp-870,
     0x1.dd10bb9e81d36p-351, 0x1.22034287b6fc6p-769, 0.0, 0.0, 0.0,
     0x1.d9fb05b480b6p-803, 0x1.0178639a85508p-115, 0x1.8a413e264a47p-443,
     0x1.882accc5c431fp-623, 0.0, 0.0, 0x1.303fd942dda22p-468, 0.0, 0.0,
     0x1.78c2ed03864bcp-73, 0.0, 0x1.82d4824465058p-26, 0.0, 0.0, 0.0,
     0x1.3670c470fa696p-856, 0.0, 0x1.8b34af662c59dp-978, 0x1.bf215895a7842p-846, 0.0
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
            tmp1 = Sleef_tanhd2_u10kvx(tmp0);
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
    printf("Sleef_tanhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tanhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
