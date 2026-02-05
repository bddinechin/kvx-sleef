/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd2_u35kvx.c --function Sleef_tanhd2_u35kvx \
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
     0x1.9dc000a6bf34fp-228, 0.0, 0x1.970319925a65ap-277, 0.0, 0.0,
     0x1.5f468d41c59bfp-261, 0.0, 0.0, 0x1.7015748d13562p-53, 0x1.7da158f3f0aep-857,
     0x1.55dc74f4febb7p-490, 0x1.59d6487bea474p-723, 0x1.ff940e24e1542p-128, 0.0,
     0x1.beed99480a2c3p-887, 0x1.eeca74a42b1fap-779, 0.0, 0x1.314c9a44ff4e7p-70,
     0x1.aa9f68670168fp-691, 0x1.dc8cc64e64908p-434, 0x1.b6fbf3a954bb8p-618, 0.0,
     0x1.82b1d3d33b2fap-361, 0.0, 0x1.46c8dbf8f2016p-114, 0x1.d2b67df300f3cp-884, 0.0,
     0.0, 0.0, 0x1.e3bb9a467468bp-640, 0x1.19dde0bbe21edp-868, 0.0,
     0x1.d7c7b87ca04bap-247, 0.0, 0x1.347a2a0b050bcp-403, 0.0, 0.0,
     0x1.fcfe4ddbb2e9fp-723, 0x1.b4ddf17c8f77ap-434, 0.0, 0x1.17df1b293b61fp-612, 0.0,
     0x1.45fd3228d3cbfp-20, 0.0, 0.0, 0x1.3b4162e8f41bbp-110, 0.0, 0.0,
     0x1.5867886dc6841p-904, 0.0, 0.0, 0.0, 0.0, 0x1.2038d653ab203p-324, 0.0, 0.0,
     0.0, 0x1.4a90d7b13957cp-903, 0.0, 0.0, 0x1.6af6b4add9dccp-116,
     0x1.8a6982943137ep-218, 0.0, 0x1.80050365c861cp-19, 0.0, 0x1.b42016d4386e5p-441,
     0x1.88fce80194f6ep-585, 0.0, 0x1.e5e1692bb9082p-193, 0.0, 0x1.f63f8179a3303p-849,
     0x1.28e72de6b552cp-442, 0x1.3e84a2554d3efp-784, 0x1.29aca29557cd7p-750,
     0x1.7135d0be95f94p-623, 0x1.779e8c5261d86p-197, 0x1.1a35add60e376p-386,
     0x1.daa792ad0083ap-577, 0x1.ed1894fa91352p-665, 0x1.b99f7d87fe6a4p-425,
     0x1.71fb47fb70ae8p-395, 0x1.6141ea7c370cbp-560, 0x1.c992a93e21ef4p-505, 0.0,
     0x1.12e237b97bbfp-612, 0x1.5e45042f091c7p-913, 0x1.593c24321a707p-437, 0.0,
     0x1.3396395fb8b88p-824, 0x1.c7cfc82585dd3p-935, 0x1.19fe573e65b88p-452,
     0x1.66f6bc2b4ebd2p-691, 0.0, 0x1.90ff42ebcbc93p-888, 0.0, 0.0, 0.0,
     0x1.76ed8662a55p-587, 0.0, 0x1.14a61159d1066p-939, 0.0, 0x1.e90fee5bc10dep-541,
     0.0, 0x1.2bd5dfb409edfp-444, 0x1.fc1dcd8086914p-45, 0x1.d4862aaa1081fp-210, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9c4b58db6266cp-315, 0x1.1c7215ba790ep-172,
     0x1.a618b938a91abp-732, 0x1.fc721c1e1d07p-972, 0x1.2d6fd116253dap-333,
     0x1.6d46502898ccfp-916, 0.0, 0.0, 0x1.a0db0ce603b25p-272, 0.0,
     0x1.d34a26293b115p-847, 0x1.5ae10096549f1p-389, 0x1.ba86be4c2d947p-513,
     0x1.0a424cffd9cb7p-754, 0x1.bea0f0638d83dp-326, 0.0, 0x1.80c7f95668f98p-297, 0.0,
     0.0, 0.0, 0x1.a66ee082beedbp-169, 0x1.bdeeee611d0bfp-344, 0x1.31cc927d95bf4p-177,
     0.0, 0.0, 0.0, 0.0, 0x1.cb6dbca8933efp-759, 0x1.e2a90ae565619p-415,
     0x1.d4199bce3eb31p-444, 0x1.bea09d20c9078p-282, 0x1.1f56bd0786822p-295, 0.0,
     0x1.986dab8252939p-271, 0.0, 0x1.15038a8536374p-142, 0.0, 0.0, 0.0, 0.0,
     0x1.7e1731c50affbp-737, 0x1.9fc3573ff7441p-337, 0x1.24856b769964ep-357,
     0x1.57d131d6db26p-876, 0x1.550b39d0622c9p-124, 0.0, 0x1.6bf72c69cd853p-156,
     0x1.2975945892c05p-332, 0x1.26c896b1c03bfp-144, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8f942702bf8cp-504, 0x1.641c435ec7f65p-403, 0x1.8765d5497a296p-10, 0.0,
     0x1.708fa69d91addp-49, 0x1.6c7899ea1f28ep-427, 0x1.5c863b8b61f43p-460,
     0x1.f0798af914d88p-951, 0.0, 0x1.f1f99725f7c15p-191, 0x1.8b30a5cedd34bp-381, 0.0,
     0x1.95232c437a69ep-861, 0x1.008fd76384561p-558, 0.0, 0.0, 0.0,
     0x1.cfe1997f72962p-922, 0.0, 0x1.676f3b4788c6ep-479, 0.0, 0.0, 0.0,
     0x1.24d7e8e77cab9p-669, 0x1.767ec34267fe9p-570, 0x1.19c4dfeab32cp-156,
     0x1.da32b18cf226p-690, 0x1.1199d15cbac9cp-171, 0x1.0194e5d056f68p-199, 0.0,
     0x1.b086b7c4be43ap-989, 0x1.b1957b27e8d95p-395, 0x1.bf0d7775e58fcp-300,
     0x1.1c4cedc4473acp-886, 0x1.29c9eac755ffbp-228, 0x1.a8468903bebe1p-887, 0.0, 0.0,
     0.0, 0x1.66f65939469f4p-452, 0.0, 0x1.f3333a6db932bp-389, 0x1.d1e2ec0678d4cp-442,
     0.0, 0x1.e61517e40fce4p-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.572450def587p-695,
     0.0, 0.0, 0x1.41eea25f2699ap-228, 0x1.0c61d039931ebp-184, 0x1.3337c3a26ebf8p-392,
     0x1.d4dcbe66ce46bp-683, 0.0, 0.0, 0x1.26021d8cd1e64p-756, 0x1.70d4b61157f91p-259,
     0x1.d75c7caaae2f2p-311, 0.0, 0x1.f3680e42235f9p-829, 0x1.5eff57e66f13p-328, 0.0,
     0.0, 0x1.7c2fd68ba1552p-717, 0x1.308e893554d73p-472, 0x1.b77c39bf6ad6dp-315, 0.0,
     0x1.5b720dea627c1p-180, 0.0, 0x1.df2c3530ee485p-687, 0x1.895a2250af8e9p-182, 0.0,
     0.0, 0.0, 0.0, 0x1.3aca39aa172d2p-104, 0.0, 0x1.ebf14e557a4cbp-305,
     0x1.08f541bfe508bp-641, 0.0, 0.0, 0x1.dbbe67e97930ep-322, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.971b15b7ee848p-240, 0x1.c3976443f4ebep-102, 0.0, 0x1.df57b4429957fp-145,
     0.0, 0x1.4ec133b2d956cp-487, 0.0, 0x1.ef83e9ec3c42ap-857, 0.0,
     0x1.c39f15af33389p-834, 0.0, 0x1.369dce3409cf9p-287, 0x1.d82fbf235cf9dp-942,
     0x1.9aa3e613823f6p-369, 0.0, 0.0, 0.0, 0.0, 0x1.ca4cfed70e184p-733,
     0x1.09d81bce98d6bp-128, 0.0, 0x1.7a50aa68becafp-609, 0.0, 0.0,
     0x1.2c8494c899482p-583, 0x1.ab3674f7d0dc6p-303, 0.0, 0.0, 0x1.ea80a454e796cp-422,
     0x1.cc608965c9cdfp-528, 0.0, 0.0, 0.0, 0x1.ca5a701b10b3dp-771, 0.0, 0.0,
     0x1.57316c0cad12bp-611, 0.0, 0.0, 0.0, 0.0, 0x1.6425f9e2cc2f9p-796, 0.0, 0.0,
     0x1.2535d31458b47p-645, 0x1.e4b88081402c7p-538, 0.0, 0x1.959b3350e030cp-502,
     0x1.dc49dc3f2f44fp-934, 0x1.4a7d74acf57eap-554, 0x1.9d9da838740f1p-527, 0.0,
     0x1.d65585b6381cbp-271, 0x1.0d1e139acd18p-791, 0x1.5f6ec175ebcfdp-666,
     0x1.e1d81ea000848p-941, 0.0, 0x1.7efeffc619a32p-242, 0.0, 0.0,
     0x1.74aac34c7fa7ep-962, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8711db2275b1dp-722, 0.0,
     0x1.66248780ec69dp-675, 0.0, 0.0, 0x1.05084c9eacea6p-208, 0.0, 0.0,
     0x1.3f6647ca24918p-434, 0x1.a02bb95e052dbp-529, 0x1.9e1559bb6092ap-501,
     0x1.fdd9bd23316a9p-355, 0x1.86144bbaac08fp-515, 0.0, 0x1.af8ca61ace4d5p-310,
     0x1.71d641c6b109dp-732, 0x1.8a4e05d37a81ep-232, 0x1.4493a319ea44bp-727,
     0x1.bdc3ea8d36c1bp-856, 0.0, 0.0, 0x1.25a03b165e598p-839, 0x1.eaaa2431f9715p-808,
     0.0, 0.0, 0x1.f2a3054534abp-715, 0.0, 0x1.0b6f08a1b06f1p-195,
     0x1.5c276dcb2efb9p-907, 0x1.62b9f3874468dp-355, 0.0, 0.0, 0x1.e2f745525ebf1p-998,
     0x1.03f79cc512f68p-202, 0.0, 0x1.e6ce159352105p-615, 0.0,
     0x1.93a58e0f997a3p-1012, 0x1.62c783ea225cdp-461, 0x1.1ea4aa017a0ddp-639,
     0x1.771d84be21de6p-703, 0x1.143721072581cp-992, 0x1.90f3e4908b42ep-497, 0.0,
     0x1.38659f7be1989p-610, 0.0, 0x1.e964e361d6e7ap-858, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1p0, 0.0, 0.0, 0x1.7e5a620b9ca7fp-782, 0.0, 0.0,
     0x1.0edc22bffddd6p-556, 0.0, 0x1.e3dd6b859df56p-866, 0.0, 0x1.1a31079ca6741p-597,
     0.0, 0x1.ddc37333669cfp-653, 0x1.c6db5a44b5d91p-167, 0.0, 0.0, 0.0, 0.0,
     0x1.026d0ba9f17ccp-622, 0.0, 0x1.d868a54bb2d0ep-957, 0.0, 0.0, 0.0,
     0x1.d6b3fc8386065p-241, 0x1.8c168b093d1bp-599, 0.0, 0.0, 0.0,
     0x1.69e1f85065b57p-916, 0x1.cd2b9cc143f98p-378, 0x1.83cc7a48d56b1p-295,
     0x1.baa627245a584p-132, 0.0, 0x1.0d1175b753508p-507, 0x1.97d398976b125p-508,
     0x1.dab4a72ff324ep-363, 0x1.1278b8b7439c7p-939, 0.0, 0x1.f5546542c1eadp-736,
     0x1.fa2d692ca142fp-965, 0.0, 0.0, 0.0, 0x1.af8e58aa305p-159,
     0x1.64a88d6bb9e72p-491, 0.0, 0.0, 0x1.54c45178c1c1dp-580, 0x1.5faa1f179b3aep-564,
     0x1.800a04f8d0f39p-837, 0.0, 0x1.532c9a526b937p-912, 0.0, 0x1.db08422a551bcp-961,
     0.0, 0.0, 0.0, 0x1.7054c1448d152p-22, 0x1.ca26b58d7366ap-750,
     0x1.19ee8602dc00ep-913, 0x1.9abf4972dab8ap-508, 0.0, 0x1.aca16be413df4p-774, 0.0,
     0.0, 0x1.ff57e3865f039p-379, 0.0, 0x1.edd28edfeed62p-242, 0.0,
     0x1.8e0ec8abe8e3dp-424, 0.0, 0.0, 0.0, 0x1.f6e364d6dbc7fp-153, 0.0, 0.0,
     0x1.4943d9526bb72p-420, 0x1.ff7adff4b77b5p-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9a124049133afp-681, 0x1.8dc0bb24554dbp-656, 0.0,
     0x1.a45dfc0a93cep-540, 0x1.db6699dd140a4p-862, 0x1.930b228a2d633p-652,
     0x1.0d1c679731989p-844, 0x1.dee4127866ccep-250, 0x1.dd8821ca3b879p-817, 0.0,
     0x1.ccb7cbcd0b38bp-759, 0x1.bb9fccb318075p-538, 0x1.31311f03d5d86p-764, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2915f17fe7a1p-110,
     0x1.8a921ee6e6265p-317, 0.0, 0.0, 0.0, 0x1.251138aae9175p-548, 0.0, 0.0,
     0x1.a6217d424adep-348, 0.0, 0.0, 0.0, 0x1.e5d8cbe05fdcfp-98, 0.0,
     0x1.d350ff25a5cffp-785, 0.0, 0x1.bb37cc053a69ep-11, 0.0, 0x1.21393e6a84435p-89,
     0x1.d34776b7cad1ap-838, 0x1.153f99f2fe71fp-246, 0.0, 0.0, 0x1.5ddca5a5fcedcp-180,
     0x1.0115fc8646d13p-932, 0x1.5a648cbaeb4ecp-51, 0.0, 0x1.eda36a20e7b01p-89,
     0x1.94fa49c56995p-452, 0.0, 0x1.3ea1d1cede2b7p-440, 0.0, 0x1.76ce9c22aa8ccp-581,
     0x1.cf658ca8ef57dp-620, 0.0, 0x1.8dff8bc01dc04p-368, 0.0, 0x1.dde5a53d45f6ap-660,
     0x1.7e63ac0418ce9p-206, 0.0, 0x1.0f99d7b4619f9p-1005, 0x1.6254468c046cp-316, 0.0,
     0x1.f38c7e667d825p-683, 0.0, 0.0, 0x1.725d5879fd49ep-6, 0.0,
     0x1.507d5071aaa69p-38, 0.0, 0.0, 0x1.51e4df8978f27p-521, 0.0, 0.0, 0.0,
     0x1.7e0be548c0c33p-181, 0x1.18818daa07412p-17, 0x1.e3f9c6a8bb95ap-313, 0.0,
     0x1.0fd716c2753edp-489, 0.0, 0x1.c83a2af325c5dp-974, 0x1.799719ebd26ccp-462,
     0x1.e3e2348a03686p-214, 0x1.2cf283b50ebe8p-441, 0x1.786b50a7dc488p-495,
     0x1.9e5d5af8718bp-905, 0.0, 0.0, 0x1.dab73e5577fc2p-774, 0x1.5c3c747144767p-2,
     0x1.60269cdea4354p-171, 0.0, 0.0, 0x1.941543aec4732p-759, 0.0,
     0x1.5f2065cf6a987p-231, 0x1.f57833208b7a3p-230, 0.0, 0.0, 0x1.338951b0ccfb9p-277,
     0x1.8786ee16017dap-52, 0.0, 0x1.aea7901b6d607p-202, 0.0, 0x1.e4f687b24c1bep-150,
     0x1.d17724825c7e2p-262, 0.0, 0.0, 0.0, 0x1.c783d69652142p-274, 0.0, 0.0,
     0x1.9dc0de9cfed83p-253, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb919b5333c0fp-467, 0.0, 0.0, 0x1.8ffd1891c29c7p-163, 0x1.73e6cda8d89ffp-591,
     0.0, 0x1.ed829526bde83p-309, 0.0, 0.0, 0x1.8a0b2962d76c5p-396,
     0x1.51c93ec4bf915p-832, 0x1.e65ba84db83f6p-268, 0.0, 0x1.c02257fa66a4ap-970,
     0x1.26d1e8fa48d01p-323, 0x1.1b101dfe32069p-796, 0.0, 0.0, 0x1.0ec206b152edp-805,
     0x1.368647e703c26p-669, 0.0, 0x1.f925634cc0888p-675, 0x1.0a0873fe01e2fp-54,
     0x1.ad175f949989dp-616, 0.0, 0x1.b2e874dd21549p-77, 0.0, 0.0,
     0x1.8dba66accd3f9p-888, 0.0, 0x1.283f32158ca4ep-933, 0x1.cd0009bd088c7p-879, 0.0,
     0.0, 0x1.990e594b4a7b4p-857, 0.0, 0.0, 0.0, 0.0, 0x1.f10bdb9a4decfp-592,
     0x1.d68f07d2bd6f8p-393, 0.0, 0.0, 0x1.f63e74aa0c94bp-652, 0x1.96940d88f1c39p-668,
     0x1.40db629679cc6p-336, 0x1.6af7a0c4b2ce6p-91, 0.0, 0.0, 0x1.cc8c045ca5881p-307,
     0x1.ea0a4076465acp-943, 0x1.5dc0f23ce6b1ep-714, 0x1.97ac373802757p-432, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24168eb185b9cp-697, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1d7dc3880047dp-265, 0.0, 0x1.3f197c3ee3ed8p-893, 0.0, 0.0, 0.0, 0.0,
     0x1.22adb30cf3c22p-902, 0x1.eb1f25d01f15cp-753, 0.0, 0x1.51181432b73a8p-689, 0.0,
     0x1.158bf0e900b8ap-420, 0x1.91990e9ece6dbp-139, 0x1.c967ddc3faddbp-913, 0.0, 0.0,
     0.0, 0x1.3fb50448e56ddp-853, 0x1.ddf8d1741e1f4p-216, 0x1.61861436df1ffp-623, 0.0,
     0x1.e2a29b9cd058cp-519, 0.0, 0x1.14912ffb0d727p-235, 0x1.46101fc59aeb7p-492, 0.0,
     0x1.e05923a2a23c6p-277, 0x1.9694cc25d8679p-165, 0.0, 0x1.a9d4d46f4bfbdp-220,
     0x1.f7fb300dca8bap-34, 0x1.7cb8f32769014p-538, 0x1.a93ceebbfd8c4p-476,
     0x1.b4be2c2671939p-74, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6896b41d5f37cp-742,
     0x1.63d0afa07e844p-973, 0.0, 0.0, 0.0, 0x1.4ed335ca4935ap-16, 0.0,
     0x1.59fc4009db249p-828, 0x1.4c90ba57d5652p-300, 0x1.41b3110070fa6p-467,
     0x1.adad8033a9352p-84, 0.0, 0x1.9adeaacf247bfp-338, 0.0, 0.0,
     0x1.fd0d76ba22246p-170, 0.0, 0x1.8fa9bf489387cp-56, 0x1.8c0256e70e058p-36, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1ba91784df717p-308, 0x1.8e37770dd0d89p-488,
     0x1.40c43a8ecfe8bp-293, 0.0, 0.0, 0x1.58155f48e167bp-179, 0.0, 0.0, 0.0,
     0x1.4fa6fe187c3e5p-787, 0x1.dfb358863f0f7p-875, 0.0, 0.0, 0x1.9b3f6c860a51dp-820,
     0x1.778389b9a5f0cp-825, 0.0, 0x1.c038d8f691b41p-279, 0.0, 0x1.551b03488156ep-15,
     0x1.dff557d370946p-978, 0x1p0, 0.0, 0.0, 0x1.d6296bf894d0ap-763, 0.0, 0.0,
     0x1.e0e68f0d37714p-734, 0.0, 0x1.f90c452a80c87p-581, 0.0, 0.0, 0.0,
     0x1.8721e10a4f527p-793, 0x1.100f7fd912602p-483, 0.0, 0x1.2a44a01e9fb34p-340, 0.0,
     0.0, 0x1.108f0171a8113p-679, 0.0, 0.0, 0x1.4eef064e9fcebp-727, 0.0,
     0x1.e2e87fc468382p-124, 0x1.b4d71416891dcp-19, 0x1.780e8515aeecbp-783,
     0x1.7ee107e788a53p-174, 0x1.e53fd90b148f2p-172, 0x1.e1096ff6c21ddp-343,
     0x1.c5fd3ed8011f5p-186, 0.0, 0.0, 0.0, 0x1.a5cb128f2b224p-894,
     0x1.63142c50f6501p-196, 0x1.acd609ad9d3a4p-914, 0x1.ebda27af53eb4p-119,
     0x1.51c6e3aebe49ep-509, 0.0, 0x1.31053ac2eec53p-485, 0.0, 0.0, 0.0, 0.0,
     0x1.1952e7e488657p-169, 0.0, 0x1.4c34cbc5c82eap-379, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5289dfeea84f1p-228, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5741ac4bccbd2p-877, 0.0, 0.0, 0x1.42f6467f71211p-609, 0x1.6a62a9bd5643p-589,
     0x1.b8c2e1382f902p-970, 0x1.d68c7585e08d4p-671, 0.0, 0x1.1967fc15ad6ep-961,
     0x1.7476b55fb74ecp-257, 0.0, 0.0, 0x1.43d09f9693539p-777, 0.0,
     0x1.c168ab8492af5p-342, 0.0, 0.0, 0x1.45ad087777837p-336, 0x1.8fe23564c629p-197,
     0x1.e4ef2be4047f8p-1000, 0x1.2cdc519c2c774p-383, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.44c85c9cf6cafp-683, 0x1.b5a7be0e0432p-82, 0x1.c0bf93c88f9c9p-76,
     0x1.e9571969b1654p-673, 0x1.2aeedb7d56fa7p-282, 0x1.44b731b07a708p-93,
     0x1.84d7f742785b9p-702, 0.0, 0x1.50976174d6435p-154, 0x1.f6ffc81fd49b8p-47, 0.0,
     0.0, 0x1.2e754445da508p-105, 0x1.eb3c2ec6a2e39p-231, 0.0, 0.0, 0.0,
     0x1.6fe67c1a0be85p-494, 0.0, 0x1.c72f679110f1ep-640, 0x1.fd325a0ad4f88p-123,
     0x1.09893dad2227dp-465, 0.0, 0x1.36f5c70689474p-279, 0x1.a4aa24b461b28p-863, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.915beba9cf061p-373, 0.0, 0.0, 0.0, 0.0,
     0x1.9528cdc7d38c4p-941, 0.0, 0x1.6dda7792ac77fp-145, 0.0, 0.0,
     0x1.5c4b1b48e103bp-405, 0x1.98ec9e889f042p-133, 0x1.e9d22f6540701p-421, 0.0,
     0x1.7c89917e6ac2dp-16, 0x1.7d95d232f3414p-683, 0x1.36f1f7af2ba54p-548, 0.0,
     0x1.983e4b94f1a3cp-537, 0.0, 0.0, 0x1.c433f7e995b3dp-507, 0.0,
     0x1.6e55adbaa9f15p-208, 0x1.79f20074ffb44p-921, 0x1.493a40922c739p-6,
     0x1.8bf39be987f04p-254, 0.0, 0.0, 0x1.cf430dbb6dd0cp-202, 0x1.b2ba9fdce978p-545,
     0.0, 0x1.69567da510fcp-530, 0.0, 0x1.03a961a8928eap-607, 0.0, 0.0,
     0x1.31ca8139c8688p-918, 0x1.78f69dfe4fa76p-177, 0.0, 0x1.67f2505c72752p-1000,
     0x1.84320194db87cp-120, 0x1.f5ba17287016fp-701, 0x1.a8e3aa5a5291bp-770,
     0x1.45f7d606a081fp-568, 0.0, 0x1.2a09e330019b3p-924, 0x1.3d3b3bf93ea7p-292,
     0x1.25f726a1fdf24p-403, 0x1.b24ce314694f4p-770, 0.0, 0.0, 0.0, 0.0,
     0x1.65b192f313a07p-286, 0.0, 0x1.b0aa74c7acd01p-166, 0.0, 0x1.79a67eb62c8dap-344,
     0.0, 0.0, 0.0, 0.0, 0x1.13d158b72d4fbp-218, 0.0, 0x1.724f1fb9ba64cp-954, 0.0,
     0.0, 0.0, 0.0, 0x1.1766fa0390763p-476, 0x1.2f0e1f7c8b42dp-324,
     0x1.4768f1ac108d9p-209, 0x1.2d91f84ccd50bp-348, 0.0, 0.0, 0.0,
     0x1.91658e5de4ab1p-701, 0x1.2a492f483052cp-991, 0.0, 0x1.91dc20618603p-987, 0.0,
     0.0, 0x1.c6e24cba81146p-343, 0.0, 0.0, 0x1.ee81ff10df5bap-215, 0.0, 0.0,
     0x1.bc05ec28d58dap-189, 0.0, 0x1.bf55b53892081p-23, 0x1.2ffab34c8aa7p-869,
     0x1.7e2b44d6fa466p-406, 0x1.e726ff677a4b1p-765, 0.0, 0x1.7b1de730518d3p-645, 0.0,
     0x1.29504f18ce8b7p-986, 0x1.5dc3428ed80c8p-247, 0x1.f9e6c8be0bbe9p-733, 0.0,
     0x1.00386d5532842p-61, 0.0, 0.0, 0x1.02ed52dffea82p-165, 0x1.ff6894cd32e2cp-639,
     0.0, 0x1.c3fcd27d3345dp-612, 0.0, 0.0, 0x1.83b1fce3210c2p-80, 0.0,
     0x1.2b3d73277c0a7p-852, 0x1.d98262f6f6b26p-603, 0.0, 0.0, 0x1.aebd60cf2bb74p-230,
     0.0, 0.0, 0x1.7c9ec2d980becp-1018, 0.0, 0.0, 0x1.37bf5fe5dc03fp-686,
     0x1.d60b762f1400ep-914, 0.0, 0x1.f83db73fdb7a2p-951, 0x1.082813042275p-800,
     0x1.81e6bcf1eb157p-999, 0.0, 0.0, 0.0, 0x1.d29ea52dc9fc2p-745,
     0x1.fb0ec13525bc1p-235, 0x1.420915a2b0364p-985, 0x1.c8c126bc244cap-369, 0.0,
     0x1.c2a4d2d521a5ap-393
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
            tmp1 = Sleef_tanhd2_u35kvx(tmp0);
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
    printf("Sleef_tanhd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tanhd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
