/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand2_u35kvx.c --function Sleef_atand2_u35kvx \
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
     0.0, 0.0, 0.0, 0x1.c1d7f02cf97d1p-852, 0x1.4b456f58e1ccfp-833, 0.0,
     0x1.41acd770234a2p-756, 0x1.58fef0e58ad23p-337, 0.0, 0.0, 0.0, 0.0,
     0x1.54b7aaa9cd4e8p-738, 0.0, 0.0, 0.0, 0x1.157babd7c1ef2p-1008, 0.0, 0.0, 0.0,
     0.0, 0x1.9be6397d7a6b6p-316, 0x1.b765de7cf670bp-886, 0.0, 0x1.df52f3cc4cfafp-371,
     0x1.1557790fd2cep-42, 0.0, 0.0, 0.0, 0x1.f387d34eaf01cp-987, 0.0,
     0x1.430a8b47499a3p-556, 0.0, 0x1.0c4b068615e65p-117, 0x1.d47ad955edf7ap-246, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3e740c5188989p-655, 0x1.73c447308372ap-494, 0.0,
     0.0, 0.0, 0.0, 0x1.266c3e8e95f16p-305, 0x1.bf3acfce1f3edp-69, 0.0,
     0x1.a19bcf3b03f5p-902, 0.0, 0x1.e8bb54a935c7ep-857, 0.0, 0x1.3c812e618dc8bp-48,
     0.0, 0x1.ad9af3aa55c11p-168, 0x1.c2d55002a7ab1p-480, 0.0, 0.0,
     0x1.76e808e7cdf69p-666, 0.0, 0x1.9dbf2959568bep-849, 0x1.a86230b77234fp-766, 0.0,
     0.0, 0x1.7c4582a9e7616p-62, 0x1.68101d5c8c9d5p-323, 0x1.c3966930a363ep-331,
     0x1.5ad0f2b592cf9p-365, 0.0, 0x1.12b38ec8b5638p-310, 0x1.8b059dcaef154p-280,
     0x1.39f8bbad09fc4p-869, 0x1.265efb14d0f5dp-193, 0.0, 0.0, 0.0, 0.0,
     0x1.47b5ec1bab975p-883, 0.0, 0x1.6855358ad0072p-243, 0.0, 0x1.35dbfdedc28fp-45,
     0.0, 0x1.97f37f9ecff4ap-49, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b8550601c3de1p-869,
     0x1.0e90aa389cc6ap-1007, 0.0, 0x1.156932411c2e3p-111, 0.0, 0.0,
     0x1.95196c272d90cp-794, 0x1.95959946cf435p-848, 0.0, 0.0, 0x1.63f3f601d9b84p-899,
     0x1.2b26eea42db8bp-422, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.037838f8ed80ap-908, 0.0,
     0.0, 0.0, 0x1.f4132b2d380b6p-413, 0x1.cc736b32a5d13p-139, 0.0,
     0x1.0ff8cb0257b0ap-558, 0x1.67369f236129bp-689, 0x1.db0cd217cac59p-621, 0.0,
     0x1.4d1eae1856ef8p-900, 0x1.cf730f591e3a5p-1020, 0.0, 0.0,
     0x1.337a449c6a489p-261, 0.0, 0.0, 0x1.60fdd1d61bb59p-901, 0.0, 0.0,
     0x1.2cc091200d887p-430, 0x1.a2a9c5bc67debp-537, 0.0, 0.0, 0.0, 0.0,
     0x1.f518cea3ac239p-459, 0x1.1f2bef5485bb4p-351, 0x1.50fb72a8336aap-491, 0.0,
     0x1.f582f1a07e2c1p-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2dde241620cefp-294,
     0.0, 0x1.e11667ee76634p-197, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dec1b6e654a54p-100, 0.0, 0.0, 0.0, 0.0, 0x1.eb355eec22043p-703,
     0x1.39217c36e88eap-685, 0x1.dd6700e26a063p-645, 0.0, 0.0, 0.0, 0.0,
     0x1.0b490dc54f231p-436, 0.0, 0x1.4e90a39ec3d28p-892, 0x1.cea6e175b599ap-623, 0.0,
     0.0, 0.0, 0.0, 0x1.48b73f980b96dp-160, 0.0, 0.0, 0x1.f153a18eef1p-541,
     0x1.882fa2b340a4dp-101, 0x1.cbfd49b652cadp-667, 0.0, 0.0, 0.0,
     0x1.f85c9361ce50ap-416, 0x1.c288924558dbp-152, 0.0, 0.0, 0x1.3b28894f0ea91p-894,
     0x1.ab70b0b7a0eep-868, 0x1.0fe551971e608p-345, 0.0, 0x1.95ecae41d5e6cp-356,
     0x1.db972282b3e39p-482, 0.0, 0.0, 0x1.6f76cfcd85516p-611, 0x1.42ba5be820cfcp-435,
     0.0, 0x1.4c8398cbb53d7p-319, 0.0, 0x1.1577373e4e0aap-744, 0x1.2e8b7887bb99p-224,
     0.0, 0x1.8b675aafc3f3p-950, 0.0, 0x1.5c6bc4fee1804p-723, 0x1.49e9903916709p-403,
     0.0, 0x1.ac6801de81f3fp-446, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d96a9d7ac4dap-328,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3994f1309b82fp-352, 0.0, 0x1.53f087ea7021dp-691,
     0x1.66496dbd1cd71p-990, 0x1.882c19bef1cbap-613, 0x1.6092fdd9b4423p-415, 0.0,
     0x1.3faa9ffecdaefp-903, 0x1.c346151791bd5p-485, 0x1.547e6a2550c52p-243,
     0x1.8b72da2b709b4p-225, 0x1.9bbcb608ff5dep-875, 0.0, 0x1.e456cd5fe935dp-127, 0.0,
     0x1.eaee8089746edp-350, 0x1.b98df09ee1f67p-752, 0.0, 0.0, 0x1.7e3ecca49ce51p-80,
     0x1.bab8a9c3e35d1p-958, 0.0, 0.0, 0.0, 0.0, 0x1.daf23557c5e67p-817,
     0x1.ee69700d02defp-885, 0x1.3de6656b19bc2p-284, 0x1.e5fcb076b201p-718,
     0x1.634f1aaa152c6p-9, 0.0, 0.0, 0x1.e8e30bea3c1ebp-1009, 0x1.bca28444759cbp-185,
     0x1.9d8148c5effdp-483, 0x1.33128681575f3p-667, 0.0, 0x1.d122ba32b299bp-29,
     0x1.066b779b010c2p-220, 0.0, 0.0, 0x1.2b38a0b74ce9ep-335, 0x1.aa1e4fc57597p-280,
     0.0, 0x1.d5b42a41205f1p-410, 0.0, 0x1.41d0168259d9bp-734, 0.0, 0.0,
     0x1.510289c0ec8e4p-600, 0.0, 0x1.500a8211ee3d8p-762, 0x1.9a7c71934af32p-472, 0.0,
     0x1.f1c1019ef61eap-1005, 0x1.3da1ec23d250dp-284, 0.0, 0x1.ee644897e9b6cp-37,
     0x1.de1a6692afaep-520, 0.0, 0x1.a1ef4ab681fb6p-595, 0.0, 0.0,
     0x1.ee7f0be3347d1p-481, 0.0, 0x1.e808d72e19eb1p-855, 0x1.bf8bbf13338b4p-671, 0.0,
     0x1.aa6c3bfd8245bp-269, 0.0, 0x1.25ee87a365f7dp-622, 0x1.fe8975b8f4828p-619, 0.0,
     0.0, 0x1.33e9e9746fbe5p-117, 0.0, 0.0, 0.0, 0x1.297144fee36d2p-763,
     0x1.557c9c3c17d21p-803, 0x1.3b1100825f31ep-739, 0x1.9ca742fe07f23p-967,
     0x1.9252093c1bcp-818, 0x1.d6daa1634cbd7p-282, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8d5d0c680dbbp-554, 0.0, 0.0, 0x1.37a521c223cc3p-642, 0.0,
     0x1.223188d93a84cp-604, 0x1.0ff92710a1788p-546, 0.0, 0.0, 0.0,
     0x1.ab534c300d21fp-671, 0x1.77c95641c1449p-513, 0x1.10a28fb9a72eep-671, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.79670c71c0f0dp-804, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f1cd3b1da92ap-558, 0x1.acf2e7fc0d4e2p-375, 0.0, 0.0, 0.0,
     0x1.82bc72370687cp-86, 0x1.8fbc9d77740a1p-658, 0x1.4087794e31005p-539, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2a6665d8544c4p-463, 0.0, 0x1.aa27e73c1b7ffp-852, 0.0,
     0x1.bbf445d5fdcccp-957, 0x1.15f1681ff851ep-190, 0.0, 0x1.342f9fa5eda75p-292, 0.0,
     0.0, 0.0, 0.0, 0x1.58568f772fcfep-557, 0x1.555dcc5d40faap-320, 0.0, 0.0, 0.0,
     0.0, 0x1.f8595a34dbfc8p-230, 0.0, 0x1.4b000b5d28454p-252, 0.0,
     0x1.025b19217291bp-915, 0x1.daac2f6068f95p-734, 0.0, 0.0, 0.0, 0.0,
     0x1.0cf389e0f4c75p-858, 0x1.521400d32680ap-316, 0x1.f6046189b65d8p-213,
     0x1.9b19444ce3fadp-387, 0x1.9639515ec9f27p-900, 0.0, 0.0, 0.0,
     0x1.29f790c2fa0adp-1000, 0x1.f39960de18649p-360, 0.0, 0x1.468e443ccd20ep-455,
     0.0, 0.0, 0x1.06cabe6e593d5p-240, 0x1.f728c6f5ce53ap-670, 0.0,
     0x1.1d809e8bcc59ep-44, 0.0, 0.0, 0x1.ec2d932e78011p-219, 0.0, 0.0,
     0x1.ed4d1d09233fbp-819, 0x1.ad841f0df0a12p-886, 0.0, 0x1.608ce9677f691p-432, 0.0,
     0.0, 0x1.de121dc63d482p-326, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c975c499c06dp-1017,
     0x1.982574653cac3p-518, 0.0, 0x1.2e350da27a055p-848, 0x1.a65b8ced452c7p-104, 0.0,
     0x1.025869ba794e8p-183, 0x1.7bca4733eddeep-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0f5306163046fp-34, 0.0, 0.0, 0.0, 0x1.f83eae1442a0ap-995, 0.0,
     0x1.93a2e9f7967d6p-345, 0.0, 0.0, 0.0, 0.0, 0x1.e97def86c52dap-542, 0.0,
     0x1.e6918404fdd3dp-132, 0.0, 0x1.50c0537b937edp-445, 0x1.5479966e24845p-437,
     0x1.0e56d5d4ec266p-733, 0x1.bf496bac116p-107, 0x1.55b0ca8a01ca7p-472, 0.0, 0.0,
     0.0, 0.0, 0x1.05a85f492cf13p-496, 0.0, 0x1.3f929213259dep-460,
     0x1.a5ec893e5cbdep-81, 0.0, 0.0, 0x1.ccd62ef747272p-268, 0x1.e45f3ab8f2527p-979,
     0.0, 0.0, 0x1.635c2aa0b0d16p-797, 0x1.f53216746f162p-518, 0x1.35990ef351f3p-474,
     0x1.f8e75997c27adp-891, 0.0, 0.0, 0x1.425194e513623p-289, 0x1.2d8a959a259a5p-986,
     0x1.e9e9f194dfadep-551, 0x1.0fda2cc08c3f8p-71, 0x1.aadfde78128d4p-743, 0.0,
     0x1.8cd1e675fff0ap-486, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74d47965d803dp-212, 0.0, 0x1.b36655b3ba509p-396, 0x1.9e9072782ea76p-647, 0.0,
     0x1.6edb118824706p-558, 0.0, 0x1.1b7399b13cda7p-789, 0x1.58ed950487365p-361,
     0x1.760521ebc410ap-1008, 0x1.7e52445289e05p-884, 0.0, 0x1.b9b1d057d0544p-358,
     0.0, 0.0, 0x1.1435baa988c3ep-181, 0.0, 0x1.f589c37deefbp-237,
     0x1.dfda337d66e28p-650, 0x1.d493297e2bb38p-773, 0x1.d466cec97e11dp-707, 0.0,
     0x1.14080cdc04677p-823, 0x1.b23f5dca62f5p-529, 0.0, 0x1.3c8a8d6c1d491p-374, 0.0,
     0x1.3ef28065b1e1cp-5, 0x1.fae413ab1c5aep-387, 0x1.e6280d77d79cep-542,
     0x1.c0a7bd21dc212p-822, 0x1.91a8ae405dde9p-715, 0.0, 0.0, 0x1.e8e0c017f1f6p-330,
     0x1.748ba6090e7c6p-175, 0.0, 0.0, 0x1.4d9b649cab95ep-368, 0x1.45a40b17fd1adp-215,
     0.0, 0.0, 0x1.cd71f2a954cbbp-263, 0x1.0e2864cf0297ap-260, 0x1.4ec6bb6c8672fp-664,
     0.0, 0.0, 0x1.e0d2453ede218p-728, 0x1.37fce1e9225bap-303, 0.0,
     0x1.17f17f8c1cd0fp-890, 0x1.f977ea0e22a6fp-556, 0x1.b9981f9df436cp-895,
     0x1.65e9698786672p-18, 0x1.59c4ffa13e099p-671, 0.0, 0x1.d584b78541aaep-936, 0.0,
     0.0, 0.0, 0x1.2808a69219d99p-568, 0x1.93990fb4e36a2p-627, 0x1.5ab4ac821e971p-494,
     0x1.5eb579a62825ap-518, 0.0, 0x1.24137c3e9b96ep-163, 0.0, 0.0,
     0x1.a5395848851cbp-862, 0x1.fd34f65ca0e42p-354, 0x1.5b7599a5b0b91p-407,
     0x1.6eeef8312a81cp-459, 0.0, 0x1.4d94dc76b7fc3p-20, 0x1.58e6e9dce9367p-69, 0.0,
     0x1.e0b8e56baca33p-5, 0.0, 0x1.a78b7c327d552p-303, 0x1.865ccf28af67ap-590,
     0x1.c6eed9e4ec22bp-920, 0.0, 0x1.1f3aecdf0cd46p-788, 0.0, 0x1.ea5cb0c07c9f5p-246,
     0x1.826c3d0a089a5p-832, 0x1.ae4f6d9c08b66p-984, 0x1.ae50f511e5453p-266, 0.0, 0.0,
     0x1.2da424f34f0a8p-325, 0x1.92b089f96e71p-188, 0.0, 0.0, 0x1.db1e5450272fp-950,
     0.0, 0.0, 0x1.0b266adc137ebp-837, 0x1.d15c5c5a99f57p-116, 0x1.5ee6b07d25601p-107,
     0x1.a0fde40d6fd83p-569, 0.0, 0.0, 0.0, 0.0, 0x1.a274cf23be3a7p-650, 0.0, 0.0,
     0.0, 0.0, 0x1.ebed4120511c8p-285, 0.0, 0.0, 0.0, 0x1.169a674b2cd12p-603, 0.0,
     0.0, 0.0, 0.0, 0x1.dc49eb7694b2p-345, 0.0, 0.0, 0x1.e940793a84018p-622,
     0x1.db4f5e155f29bp-805, 0.0, 0.0, 0x1.379ef08f8a64fp-97, 0.0, 0.0,
     0x1.306617e2e7043p-1000, 0.0, 0.0, 0.0, 0x1.ca5a3500cf0a9p-691, 0.0, 0.0, 0.0,
     0x1.686407bf2111ep-127, 0x1.8e618c83049bap-471, 0.0, 0x1.72285d910c903p-917, 0.0,
     0x1.5234464a4ba0fp-600, 0x1.c5cbb671bcb4bp-403, 0x1.73b48f7ac5d4cp-592,
     0x1.c41bedd6d45b8p-312, 0x1.1f2fdf5234702p-304, 0x1.79a7ab6b9ed5cp-327, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c9fd4e398a03bp-449, 0x1.9a0482a73984dp-717, 0.0,
     0x1.59e8d648b14a5p-188, 0.0, 0.0, 0x1.201ade2ece557p-274, 0x1.a56d6228f323cp-106,
     0x1.8738b32ec79a4p-552, 0.0, 0.0, 0.0, 0x1.d8b8ff94ec4d3p-483, 0.0, 0.0, 0.0,
     0x1.767861653859bp-765, 0x1.e87c3fa1c701p-91, 0x1.6afbd23ff0998p-850,
     0x1.6600c4b865155p-402, 0.0, 0x1.d392d7c58ca48p-115, 0.0, 0.0, 0.0,
     0x1.23698d332e4bap-221, 0.0, 0x1.c765cfb69a6cep-966, 0x1.19a69a70b1cf9p-1008,
     0.0, 0x1.307eabbf9fd97p-597, 0x1.d6b604d7f0744p-592, 0.0, 0.0, 0.0, 0.0,
     0x1.33ceb0c35ad5cp-353, 0x1.5bfc1ae7afa2p-377, 0x1.df2d1f496e1bdp-26, 0.0,
     0x1.a165326a58952p-983, 0.0, 0.0, 0x1.2126afd9f35a2p-974, 0.0, 0.0, 0.0, 0.0,
     0x1.0116a3513e2bdp-61, 0.0, 0.0, 0.0, 0x1.3d707098ecb36p-228, 0.0,
     0x1.077ffe9498975p-1017, 0.0, 0.0, 0.0, 0x1.fee3cc34195fap-56,
     0x1.6e696b1042ebcp-479, 0x1.9e4b7fb9f1d8bp-453, 0.0, 0.0, 0.0, 0.0,
     0x1.d695c842eed64p-946, 0x1.0430582783f61p-642, 0.0, 0.0, 0.0,
     0x1.6cbee9995e3b5p-837, 0x1.eacaf963df572p-847, 0.0, 0.0, 0.0, 0.0,
     0x1.5ebc4c55b0fa8p-80, 0x1.160ad5d0fe40bp-628, 0.0, 0x1.dce005582ba53p-338,
     0x1.8eff6950418f3p-674, 0x1.c7b698d58f6c7p-556, 0x1.7e527edc29d27p-110,
     0x1.b663e1cc5e50cp-639, 0x1.94ef381cbbd4dp-150, 0.0, 0x1.49a3423656b0bp-813,
     0x1.5c157111d036ap-410, 0.0, 0.0, 0x1.4168aba68a7ddp-963, 0x1.82440c78b10b9p-157,
     0x1.368d5d9d047e4p-98, 0.0, 0.0, 0x1.7d1dca62a791p-891, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5f2002ff4413dp-914, 0.0, 0.0, 0.0, 0x1.45d8aff445b6dp-602, 0.0, 0.0,
     0x1.44a7f5470eecep-120, 0x1.63f20efd35351p-639, 0x1.268c45dc62615p-120, 0.0, 0.0,
     0.0, 0x1.94bd40a2a9f1fp-939, 0.0, 0.0, 0.0, 0x1.64c3d1058bf72p-778,
     0x1.aa67572b56a28p-734, 0x1.0d0f6077e90eep-728, 0x1.c1abcc9d8dadep-981, 0.0,
     0x1.befcc10524866p-657, 0x1.d74e3afbf2674p-292, 0.0, 0x1.07f36ac823cb1p-670, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5578124f4eb6ap-845, 0.0, 0x1.49e4895f957dcp-191, 0.0,
     0x1.82073cef425fep-521, 0.0, 0x1.bf38041b1b86fp-124, 0x1.14978d03ecb5dp-86,
     0x1.9645e4735490cp-118, 0.0, 0x1.a033ba828f8f1p-289, 0x1.f642a3f6573aep-853,
     0x1.538a721e88be3p-281, 0.0, 0x1.d384f3c1c5cfdp-289, 0x1.ddacdff35a4d8p-852, 0.0,
     0.0, 0x1.0e69fc51a3f7bp-742, 0.0, 0.0, 0x1.8a376d6a96e5fp-596, 0.0,
     0x1.f2377980f6f4cp-791, 0x1.7cf0a4f50a80ap-248, 0.0, 0x1.434d2a5d4a5b2p-478, 0.0,
     0x1.6d71cc0904d53p-422, 0.0, 0.0, 0.0, 0x1.c867f2e233695p-520, 0.0, 0.0,
     0x1.c81a6125c1702p-158, 0x1.c26bb8cc26607p-802, 0.0, 0x1.0c82a816cd042p-499,
     0x1.da613b938e84dp-619, 0x1.b9f6d4057d486p-1003, 0.0, 0x1.ff1a694591d62p-183,
     0.0, 0.0, 0x1.57dbbf931d616p-259, 0.0, 0.0, 0.0, 0.0, 0x1.6f978dd0c62d4p-39, 0.0,
     0.0, 0.0, 0.0, 0x1.0c6daebcb9c5bp-725, 0.0, 0x1.41d324adbdb6fp-863,
     0x1.87a3e0606d2c2p-312, 0x1.4a075c021cf3p-96, 0x1.65b0c549be85p-483,
     0x1.fca9456c64873p-190, 0.0, 0x1.b46b9f20ed0c9p-381, 0.0,
     0x1.bfa342a429aa1p-1021, 0.0, 0.0, 0.0, 0.0, 0x1.d534db752aaeap-530,
     0x1.300b6e1db9158p-588, 0x1.a112fddd481a8p-445, 0.0, 0x1.1e848410ca8f6p-758,
     0x1.75916f6fcd5a9p-515, 0.0, 0x1.7a6fccd5d0beap-44, 0x1.da16d44910981p-205,
     0x1.a74ca255185c2p-972, 0x1.7f1510eb01abbp-843, 0x1.8344e6117edc6p-908, 0.0,
     0x1.10cc37861f51p-536, 0.0, 0x1.8424cbad2d66dp-256, 0.0, 0.0,
     0x1.afc4bfe9afb5dp-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a5ee480cdfc9p-196, 0.0,
     0x1.60c4e5359ec3fp-582, 0x1.2ae46c4753fbep-727, 0.0, 0.0, 0.0, 0.0,
     0x1.b579144a701dap-857, 0.0, 0.0, 0.0, 0x1.e303f6262969dp-454, 0.0, 0.0,
     0x1.15fd9b7bc3483p-879, 0x1.e9a44219145d5p-185, 0x1.15707a69732e6p-431,
     0x1.401fd08f07afcp-77, 0x1.6797aba5312ddp-1019, 0x1.346a0c333e0c6p-830, 0.0,
     0x1.a717833a5b039p-316, 0.0, 0x1.390dd2a22dd2ep-485, 0x1.b268448e3cb22p-357,
     0x1.85d95f0ba7d3fp-931, 0.0, 0x1.2cab600c2723bp-929, 0.0, 0x1.f5afb96786fdp-205,
     0x1.b0a2d99591476p-758, 0.0, 0.0, 0.0, 0x1.e090b586de25ap-875,
     0x1.c20abbe96af9ap-744, 0.0, 0x1.77afe3378cd6bp-272, 0x1.eff404c6f98cap-766, 0.0,
     0x1.ea8fbe96e1401p-317, 0.0, 0.0, 0x1.8873dd49dd78dp-929, 0x1.cba3b9352ac9cp-149,
     0.0, 0.0, 0x1.5dfe05627abccp-710, 0.0, 0x1.a44858b51f132p-767,
     0x1.add27320385c3p-345, 0.0, 0x1.6ba1ffd481596p-73, 0.0, 0.0, 0.0, 0.0,
     0x1.66fcb7c89e6d7p-1008, 0x1.67a6d53d4f54ap-527, 0x1.9ef340fe0f789p-267, 0.0,
     0x1.82e1c9a9473a7p-102, 0x1.b9888b02f2e0fp-258, 0x1.783a717cadf36p-691, 0.0,
     0x1.d3d6a503915dap-978, 0.0, 0.0, 0x1.30806b146f49cp-109, 0x1.6fb411f932105p-81,
     0x1.7bfa728ee75ep-168, 0.0, 0x1.6700035b2fed8p-376, 0.0, 0x1.7b234f601b65dp-34,
     0x1.2579e828e015fp-915, 0.0, 0.0, 0.0, 0x1.7403cfc9df6c7p-121,
     0x1.883868311884ap-779, 0.0, 0x1.86e1089f56163p-843, 0x1.63e0373566785p-136,
     0x1.68efce5447962p-335, 0x1.f164927863b0cp-40, 0.0, 0.0, 0x1.5d504f48007dbp-30,
     0.0, 0.0, 0x1.b8156c364a183p-844, 0.0, 0.0, 0.0, 0x1.75d4e767f1bap-873, 0.0, 0.0,
     0x1.d5082e169eb92p-557, 0x1.176df41f10d2ap-726, 0.0, 0x1.5b4670c8f97a9p-606,
     0x1.16a0ea6401ecap-436, 0x1.3bfbb90e6570cp-611, 0x1.1f6f8f309f739p-579,
     0x1.1cc4617da629ep-29, 0x1.4c36c2861d0fep-550, 0x1.498cd56c2b644p-370, 0.0,
     0x1.c738505a91751p-48, 0.0, 0x1.5aa9e63e77e56p-573, 0.0, 0x1.fb70694019f61p-697,
     0x1.4b597f5e7bc65p-269, 0.0, 0x1.36951aac0918fp-788, 0x1.a10321edf297dp-989, 0.0,
     0.0, 0x1.46ab9e07ff978p-718, 0.0, 0x1.be6ebdc2d9ce1p-957, 0x1.e2c8c2134e545p-179,
     0x1.b0db666390fcap-915, 0.0, 0x1.680920a2cafe1p-521, 0x1.5b0ec9b6bd74ap-973,
     0x1.ad22f7c44e27fp-251, 0x1.4ceea413b9ddbp-670, 0x1.96107cc40c959p-925, 0.0,
     0x1.1f9dc59f5e102p-1013, 0.0
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
            tmp1 = Sleef_atand2_u35kvx(tmp0);
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
    printf("Sleef_atand2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_atand2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
