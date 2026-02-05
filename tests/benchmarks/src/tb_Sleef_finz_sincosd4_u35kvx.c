/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd4_u35kvx.c --function \
 *     Sleef_finz_sincosd4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.910cde2d06c8ep-905, 0.0, 0.0, 0x1.89287caeeded6p-214, 0.0, 0.0, 0.0,
     0x1.edd66301bf6a7p-88, 0.0, 0x1.6ce5f8dec291cp-639, 0x1.e2beae56bb67fp-38, 0.0,
     0.0, 0x1.d331fc10306f7p-136, 0x1.a303f453de317p-104, 0x1.b5149ba865de1p-500,
     0x1.82f0f27ee8d2p-759, 0x1.70aae940367eap-912, 0x1.12cbcee071919p-869, 0.0, 0.0,
     0x1.0b9acc0c32462p-350, 0.0, 0x1.6fd271b898cd8p-595, 0.0, 0.0, 0.0, 0.0,
     0x1.8e36a7ea419f3p-566, 0.0, 0x1.d4cbe1233cf4cp-779, 0x1.4ecfc66561p-762,
     0x1.3a756829e8b36p-184, 0x1.7c7d582a28f26p-112, 0.0, 0.0, 0x1.cd21ec3ce6dcp-867,
     0x1.2a52c4b110d4dp-785, 0.0, 0.0, 0.0, 0x1.0bc191bb90f73p-266, 0.0,
     0x1.bb0e05aa3b53fp-826, 0x1.b2dbd83eee98cp-117, 0x1.0c6cac7718107p-337, 0.0,
     0x1.c8d242de04b57p-598, 0x1.435750dd030bdp-6, 0.0, 0x1.a22145b1ec2fcp-877, 0.0,
     0x1.13e8504e2d58bp-1011, 0.0, 0.0, 0.0, 0x1.8079ae2142dbdp-631,
     0x1.93ee2f3ae41eep-622, 0x1.5a4dbe74d6e53p-148, 0x1.617a7fa4cde37p-881, 0.0, 0.0,
     0.0, 0x1.c8586d8444fa8p-269, 0.0, 0.0, 0.0, 0x1.b9a041637ba86p-107, 0.0, 0.0,
     0x1.236151f67b08ap-354, 0.0, 0.0, 0.0, 0x1.f77a586c7cd6p-374, 0.0, 0.0,
     0x1.68b200900b546p-870, 0x1.efff368a50c48p-130, 0.0, 0x1.ebed4493dcfbdp-924, 0.0,
     0.0, 0x1.f65dd2e25af9ep-283, 0.0, 0.0, 0x1.031e2546d4bcfp-674,
     0x1.9903d1382e801p-132, 0x1.3b4e450d337acp-314, 0.0, 0x1.8dee8e7f62bd2p-301, 0.0,
     0x1.8e59edbbdc698p-778, 0x1.a7f5aa4b800edp-439, 0.0, 0x1.d4e13898634edp-536,
     0x1.2c8899cd082f9p-569, 0.0, 0.0, 0x1.5c7b030eddd13p-995, 0.0, 0.0, 0.0,
     0x1.3023b203682d5p-594, 0x1.4d5e7cbc5d88ap-993, 0x1.8a2224476a2bep-429,
     0x1.dc55981b8654bp-280, 0x1.71c75d40f4f95p-662, 0.0, 0x1.1f85f0d8fc086p-733,
     0x1.210a3f379b603p-941, 0x1.f7c3d479c5ec7p-962, 0.0, 0.0, 0.0,
     0x1.d766677c0976ap-287, 0x1.eacbf91701886p-61, 0.0, 0x1.295e5f97a2378p-301, 0.0,
     0x1.fce797cf6847ep-810, 0x1.9d10ec288565dp-610, 0.0, 0x1.86949a0adb29bp-709, 0.0,
     0x1.8667fad436311p-321, 0x1.b7232c1286ae5p-189, 0.0, 0x1.77adc4c930baep-927,
     0x1.b7a57f6d3c3d5p-848, 0x1.9b0257680cd5p-866, 0x1.39fee17a759d8p-558,
     0x1.5d99a48d9121ap-54, 0x1.4b8970344b7dep-643, 0x1.ef76efd717b8fp-411,
     0x1.5be584f360a97p-155, 0x1.f9acc1ef3575cp-972, 0.0, 0x1.4d771ec1d1e0bp-191, 0.0,
     0x1.c9effffa71a8dp-266, 0.0, 0x1.17099d1875fa8p-851, 0.0, 0x1.844af70098f02p-568,
     0x1.4f3ab576dc9d5p-66, 0.0, 0x1.26e4945a2b97fp-462, 0x1.cf669ced89de8p-948,
     0x1.39d754f4be348p-123, 0x1.c7ef67827999fp-211, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.37c0e4895bf5p-260, 0x1.50638b8bfd5fdp-3, 0x1.d49e05c9882e9p-460,
     0x1.0f825effd0983p-504, 0.0, 0.0, 0x1.ed3162fc09614p-424,
     0x1.8ca846f166f49p-1021, 0x1.729b93e57c133p-663, 0.0, 0.0,
     0x1.d8e5d28a6e971p-501, 0.0, 0.0, 0.0, 0x1.fa97465bf0aebp-817, 0.0, 0.0, 0.0,
     0x1.24db554247906p-901, 0x1.31b52c17fe5afp-801, 0.0, 0x1.dece50d02659ep-602,
     0x1.f36f1ee3e94fep-393, 0.0, 0.0, 0.0, 0x1.f3a1226fb6adp-354,
     0x1.17d967b301cb1p-940, 0x1.1a91ae62cceb4p-935, 0.0, 0.0, 0x1.1da7b419f01e2p-359,
     0x1.b2743725fe8fcp-1004, 0x1.c2044f326424cp-499, 0x1.e1c97081cb378p-490,
     0x1.c09d32458390cp-815, 0x1.77cb664b5c4e8p-161, 0.0, 0.0, 0.0, 0.0,
     0x1.06bdd10e9d66ap-756, 0.0, 0x1.8b3fd354260f7p-370, 0x1.d78ab391b6a1dp-268, 0.0,
     0x1.516c7edd4b42p-634, 0.0, 0x1.ba9613fcb76edp-273, 0x1.9ec16eb550f69p-712,
     0x1.0bac74f48746dp-755, 0.0, 0.0, 0x1.fcf975cf37161p-289, 0.0, 0.0,
     0x1.08d4424c3234dp-513, 0.0, 0.0, 0x1.bcddd661ea791p-292, 0.0, 0.0, 0.0,
     0x1.d14d3d67fcee7p-705, 0x1.18862c65c0c4fp-875, 0x1.b6db8af9de3e1p-525,
     0x1.b440a7ab684bdp-1009, 0x1.4f37430dc6ff8p-614, 0.0, 0.0,
     0x1.ec87a2d2a6a8bp-914, 0x1.44e9bffc2413fp-241, 0.0, 0x1.2357f2a3b4a25p-472,
     0x1.b0897c5e75e2fp-421, 0x1.6fb6156a4ef1ep-661, 0x1.6e5c53f1cf011p-225, 0.0,
     0x1.9b8e4af8192b8p-840, 0x1.57133c220b4c7p-621, 0x1.4ea2aee98b29dp-358,
     0x1.f98883b6df95ep-474, 0x1.39234525a743bp-125, 0x1.9addcebb3b23fp-1008,
     0x1.196f86cd4923bp-190, 0x1.72f54f3e118b4p-717, 0.0, 0.0, 0.0,
     0x1.c639be0bcd519p-363, 0x1.1632da08c54bap-593, 0x1.6b57a5af29dcep-312, 0.0,
     0x1.48dc6d3de8829p-133, 0.0, 0.0, 0x1.a25f55d1ff233p-275, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dd218fe342cffp-1016, 0x1.2714febbd8c33p-192, 0x1.c31eb884da428p-192,
     0x1.4c9d3198feb13p-805, 0.0, 0x1.61ce74d416847p-601, 0x1.3d8d0f0bbab18p-272,
     0x1.2cf3becff7b45p-898, 0.0, 0x1.408a7d6e17f16p-321, 0.0, 0x1.71f5c5d74ba08p-823,
     0.0, 0x1.f6a95ea7276a6p-480, 0x1.603be3cab9ee1p-203, 0x1.b9b42f735b289p-96,
     0x1.e63b7e8ad753cp-574, 0x1.9fddbe5ad2f7cp-569, 0x1.e3022c508d43cp-494,
     0x1.1f48a7cdc12d1p-757, 0.0, 0x1.b8a3773ee36a4p-740, 0x1.e8b56351a60cbp-660, 0.0,
     0x1.cf57f7f07e8a7p-238, 0.0, 0x1.7480618a8a17dp-399, 0.0, 0.0, 0.0,
     0x1.5e6c2e79dac7ap-470, 0.0, 0x1.8cc9885b41e67p-737, 0.0, 0x1.7d5e71c4229c8p-103,
     0x1.7a058752e0cp-1017, 0x1.b4e4a44491477p-270, 0x1.cc229381b5ba5p-579,
     0x1.dafb7bb856b93p-99, 0x1.efeb23d94ec05p-446, 0.0, 0x1.e87b42cbd226ap-80,
     0x1.49f0bb0bccd55p-1015, 0.0, 0x1.223a36b010fbep-253, 0.0, 0.0,
     0x1.5c16ddded7f4p-602, 0x1.c633b055c8831p-691, 0.0, 0x1.96c540dc036b8p-582,
     0x1.8acd08c5a30bap-687, 0x1.386b6e5a929e7p-424, 0x1.6390a712b890dp-625,
     0x1.4b601f371afe6p-939, 0.0, 0.0, 0x1.1a7bb58ff31edp-584, 0x1.edeb109c53869p-216,
     0x1.ddd1502a89992p-785, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7e6c353093fp-13,
     0.0, 0x1.c0be2c4accffcp-438, 0.0, 0.0, 0.0, 0x1.1eb23d2befd73p-510,
     0x1.995bfaae4d993p-12, 0.0, 0x1.902f8d1a846eap-472, 0.0, 0x1.585a70aab07p-773,
     0x1.6d3d94b5a9116p-691, 0x1.ebb03b784c68fp-237, 0.0, 0.0, 0.0,
     0x1.b3d32e81dbdd8p-837, 0.0, 0x1.d8d6c4faca134p-193, 0x1.c3ae00d423645p-206, 0.0,
     0x1.a66d4524cff7bp-956, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bd63e1a8253c2p-295, 0.0, 0.0, 0.0, 0x1.2ab209b71c9e3p-156,
     0x1.044be0a2b1f2fp-386, 0.0, 0.0, 0x1.8c37cd9e8c875p-441, 0x1.2185aa411f259p-509,
     0x1.ff6c110cac661p-1022, 0x1.cd8a7cea846eep-291, 0x1.69e4cf619da1ap-410, 0.0,
     0x1.34d196c59d785p-677, 0.0, 0.0, 0x1.97de224a80409p-983, 0x1.8c827cda4ebbbp-450,
     0x1.4eb1831a41c9ep-513, 0.0, 0.0, 0.0, 0.0, 0x1.8456fd1372b9bp-401, 0.0,
     0x1.d6fa35504b7eep-643, 0.0, 0x1.cf4ffe0e5d458p-737, 0x1.3b7a8ee65e6d6p-711, 0.0,
     0x1.a4d8de5724a2ap-343, 0.0, 0.0, 0x1.0540c1636b9afp-267, 0x1.c054afa5b3867p-210,
     0x1.131600cab343dp-647, 0.0, 0x1.537c8b758fd05p-884, 0.0, 0x1.8797cfdb4bb13p-527,
     0.0, 0.0, 0x1.2b8259f0f322ep-848, 0x1.6d9a261e97affp-1011, 0.0,
     0x1.7fb330cbeaf67p-251, 0x1.566eb8abbfed4p-215, 0x1.e296850e70977p-834, 0.0,
     0x1.3c478eb66541dp-663, 0.0, 0.0, 0.0, 0x1.5859cdcb9bb07p-292, 0.0, 0.0, 0.0,
     0.0, 0x1.461e3db4394f3p-723, 0x1.fda0401a00ebap-759, 0.0, 0.0,
     0x1.17f8a908a53b1p-610, 0.0, 0x1.97f073b2c8b46p-137, 0x1.53ee525de4e8ap-537,
     0x1.204f5bd37d571p-666, 0x1.75392f4e3bc37p-279, 0.0, 0x1.83faf699317ccp-228, 0.0,
     0x1.30692c5947d52p-682, 0x1.9d03229f8b478p-1010, 0x1.7587c17316a51p-743,
     0x1.b80344cc22fbbp-817, 0.0, 0x1.fded59902d055p-385, 0.0, 0x1.792aa2a830c4ap-468,
     0x1.448f9b4065f5p-506, 0.0, 0.0, 0x1.ee04a12c15bebp-665, 0x1.315b7fd7d1c85p-852,
     0.0, 0x1.6b605e16ede07p-470, 0.0, 0.0, 0x1.0a27a138f051dp-902,
     0x1.f7bb8f0dbeb4ep-358, 0.0, 0.0, 0.0, 0.0, 0x1.ecb73136a74bdp-221,
     0x1.14bfd87f58e9cp-305, 0.0, 0x1.9aad8686ce8a4p-700, 0.0, 0x1.77a3959e15da2p-972,
     0.0, 0x1.80fb96dc61bf5p-182, 0.0, 0x1.8da6b15fad504p-289, 0x1.74ac99b1afaf4p-607,
     0x1.ede8e097663e4p-672, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f90dd21197bb2p-75,
     0x1.d423cce53fca3p-521, 0x1.f32154a0c3c2p-93, 0x1.9be457e6700f7p-482, 0.0, 0.0,
     0.0, 0x1.2ab5bb4c7f9c4p-107, 0x1.ef338b9eb8bf5p-341, 0.0, 0.0,
     0x1.01df2d568095ap-895, 0.0, 0x1.821f5cf2b860cp-789, 0x1.bcb13f2c76b4cp-366,
     0x1.cf0232bc13f96p-738, 0.0, 0.0, 0x1.c4dfc0debc889p-403, 0x1.a652ba0c9a913p-93,
     0x1.55b77ffd4609p-931, 0.0, 0.0, 0.0, 0x1.0f0d632b96cc9p-349,
     0x1.40628843d190bp-20, 0x1.cc257a20cc23ap-863, 0.0, 0.0, 0x1.ee9aa3a3e8cb8p-343,
     0x1.19e8983908baap-459, 0.0, 0.0, 0.0, 0.0, 0x1.e674e92c00baep-612, 0.0, 0.0,
     0x1.7d8233a8208fp-72, 0.0, 0x1.115a0b438b9dfp-784, 0x1.2db80d95eb8d6p-731, 0.0,
     0x1.c847a7a28b9afp-137, 0.0, 0x1.7f10609de734bp-248, 0.0, 0x1.c7005a03fbf2bp-743,
     0x1.527835fef9989p-106, 0.0, 0.0, 0x1.992826ee19781p-811, 0.0, 0.0, 0.0,
     0x1.745809de5e5e4p-552, 0x1.0855d4cc9743ep-286, 0x1.bf6e7e61002a6p-531, 0.0,
     0x1.28a598b3d01a7p-210, 0x1.65dbc6574641p-416, 0x1.3d7e71b56fff9p-226,
     0x1.0479acffd618cp-498, 0x1.fe440d37b1e84p-655, 0x1.8c1a09fd5f0a1p-560,
     0x1.cbd820742bbbbp-598, 0.0, 0x1.895486cf49e8dp-187, 0x1.6f592f7cc89f3p-816,
     0x1.036f4f83a267cp-545, 0.0, 0.0, 0.0, 0.0, 0x1.44ccca11cbc2p-224,
     0x1.0db99d1583bebp-872, 0.0, 0.0, 0x1.0f3b8c5cdce8ep-958, 0x1.cc9855b1cc605p-195,
     0.0, 0x1.8a4c4e989ac81p-514, 0x1.5e1fd2249a93ep-114, 0x1.57d5f4ef299b6p-406,
     0x1.108bee576d1f7p-1017, 0x1.b3823e185d5e9p-56, 0x1.f498be70fcb58p-962, 0.0,
     0x1.83859a5cac866p-35, 0x1.bd5029b7effd5p-149, 0x1.7366fc9b65d13p-584, 0.0, 0.0,
     0x1.cfd7bb6a8248ap-480, 0x1.1b599d6f6679cp-573, 0x1.cd37446dd354p-502, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4b37693dad54ap-675, 0x1.80b84f7bbcdddp-652, 0.0,
     0x1.83589700c119bp-600, 0.0, 0x1.4359dbfe1f4ddp-420, 0.0, 0x1.853e5fa508ac8p-817,
     0x1.dbc867bb76877p-862, 0.0, 0.0, 0x1.35a945bcfc599p-253, 0x1.67e6e680711e5p-567,
     0x1.03d6638b10b4p-948, 0x1.d7ba5d81e54fdp-770, 0.0, 0x1.f3975d9ef067cp-216,
     0x1.8742668b8fbf7p-581, 0x1.f436ee2fc025p-827, 0x1.b59599e5a4f49p-645,
     0x1.064393e4a14a8p-668, 0x1.629a8f54dfa5p-472, 0.0, 0.0, 0.0, 0.0,
     0x1.1adf4b38552ccp-445, 0x1.7ed9b41338a5ep-488, 0.0, 0x1.dadab41bcaba4p-463, 0.0,
     0.0, 0.0, 0x1.417343aacecb3p-82, 0x1.164a96ef0d534p-687, 0x1.20737de5cf891p-328,
     0x1.158c87c45503bp-164, 0.0, 0x1.a1d75450c4f1cp-343, 0x1.ef8235d8389bcp-652, 0.0,
     0.0, 0x1.b339ace971aap-780, 0.0, 0x1.38bb2beb4bb68p-948, 0.0, 0.0,
     0x1.d9b689a225e9cp-426, 0.0, 0.0, 0x1.0bc0b2c3674bp-108, 0.0, 0.0, 0.0,
     0x1.4e4eef2018a62p-386, 0x1.6dcd132c6847p-209, 0x1.10d8de35b032p-716, 0.0, 0.0,
     0.0, 0x1.f2a3e1fa0f383p-66, 0x1.5741a490280dp-374, 0.0, 0x1.79475f9e64938p-1012,
     0.0, 0.0, 0x1.c3b23448512d9p-669, 0.0, 0x1.6411bd1ada28bp-19, 0.0, 0.0, 0.0,
     0x1.3f0c72d172208p-361, 0x1.7ac93a960cde2p-110, 0.0, 0.0, 0x1.87459c16c4c46p-823,
     0x1.369e46d5c2ba1p-183, 0.0, 0.0, 0x1.7f174a639259p-346, 0x1.2c4220946eff4p-528,
     0.0, 0x1.ce6925d2bc95p-232, 0.0, 0x1.29a6ecb9fecfep-1014, 0.0,
     0x1.b50ce04e0b96fp-4, 0x1.326ace87a5cacp-105, 0.0, 0.0, 0x1.179d3dce65102p-405,
     0.0, 0x1.14e8fe36a407ap-604, 0x1.d3264994860cdp-723, 0x1.f5baf4b605bf1p-812,
     0x1.ccd10e84161d7p-720, 0x1.eb2d47418f1b2p-484, 0x1.d8470a1f48649p-583, 0.0,
     0x1.d084126defe63p-258, 0.0, 0x1.e9d9997329986p-1012, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.04e39e237de43p-615, 0.0, 0x1.6559a4a4f3fbbp-230, 0x1.0b749d3db6482p-332, 0.0,
     0x1.ff5dce5f067cbp-761, 0.0, 0.0, 0x1.5e80e1512ab36p-470, 0x1.6711aafff20a4p-666,
     0x1.b602f3678737cp-734, 0x1.8224dee3f8ea5p-292, 0.0, 0.0, 0.0,
     0x1.5a50a4bdbf209p-145, 0.0, 0.0, 0x1.b87cf804dd76ap-247, 0x1.1250df927be34p-314,
     0.0, 0x1.b2b2f3a03628ep-521, 0.0, 0x1.dd94ed62ef208p-843, 0.0, 0.0, 0.0, 0.0,
     0x1.d2d722bd499a8p-673, 0.0, 0.0, 0x1.cfecc8ed3ec0ap-447, 0.0,
     0x1.ae7b2cb19f664p-67, 0.0, 0x1.320bd4b82ec4dp-157, 0.0, 0x1.8ccad77aaa3ap-101,
     0x1.bd36fc1a4ec2dp-919, 0.0, 0x1.30eb0a9ea00c3p-796, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.04f382b3ab867p-895, 0.0, 0.0, 0x1.c82918eaa9775p-333, 0.0,
     0x1.7ac04226db33cp-848, 0x1.d35f4094d64a1p-160, 0.0, 0.0, 0.0,
     0x1.02a4c955aac05p-12, 0.0, 0x1.e8c6d87c33452p-60, 0.0, 0x1.d708011defef9p-790,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.daebdd2a2babap-29, 0.0, 0x1.fc42c1994c7fbp-599,
     0.0, 0x1.b42415b43e22ep-1006, 0.0, 0x1.acaef87ea0febp-894, 0.0,
     0x1.7a9cd8111bbfbp-864, 0.0, 0x1.30aa857cfa216p-840, 0x1.2aa33ef7545a3p-16,
     0x1.7c60f350734b4p-499, 0.0, 0x1.6dc12f73c0632p-283, 0.0, 0.0,
     0x1.7aae2548e9eafp-957, 0x1.18355c8eabb9p-86, 0.0, 0.0, 0.0,
     0x1.8e2299f2091ccp-431, 0x1.f01fe33623525p-639, 0.0, 0.0, 0x1.3c4cc2cceb189p-849,
     0.0, 0.0, 0x1.7dbf3d3040732p-283, 0x1.906c288ce3ba6p-169, 0.0, 0.0,
     0x1.59974c3b84c43p-68, 0x1.22642b90c4461p-901, 0.0, 0x1.a543c5fd01586p-575, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d0ce5e2c29133p-793, 0.0, 0.0, 0.0, 0.0,
     0x1.185b3085c3e27p-710, 0.0, 0.0, 0x1.33f5f686e887fp-837, 0.0,
     0x1.d3c33d827ee9ap-155, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5b1d22bc715f4p-885, 0.0, 0.0, 0x1.36c69337b4bfcp-548, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2b83e347d1471p-544, 0.0, 0x1.f5ddf8b10da54p-957, 0.0,
     0x1.80ec8b8b75615p-45, 0.0, 0x1.4dacaa716d574p-845, 0x1.e37b88189fea8p-467, 0.0,
     0x1.b533982847358p-748, 0x1.f834e707bb389p-214, 0.0, 0.0, 0x1.d7d2b301dfe6fp-353,
     0.0, 0x1.17a6e0bf130d8p-129, 0x1.ca3b9eb8bc03dp-856, 0.0, 0.0, 0.0,
     0x1.8756444a56bedp-186, 0.0, 0.0, 0.0, 0x1.dfabba69103d2p-547,
     0x1.7aa250689e973p-239, 0x1.e05d35fc6835fp-687, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b0c1bdbbcfb5fp-1015, 0x1.3d80b0e63989dp-151, 0x1.86823fa5eb7bep-417, 0.0,
     0x1.1521d09d34f9cp-707, 0x1.4953995b2d25fp-541, 0x1.cd98035b13f22p-340, 0.0, 0.0,
     0.0, 0x1.37bd1f38b67e5p-547, 0.0, 0.0, 0.0, 0x1.bf061f1d6d8bp-198,
     0x1.26b12ba2ac769p-474, 0x1.d53e0eed7f788p-713, 0.0, 0.0, 0.0, 0.0,
     0x1.b3432d2c7203cp-781, 0x1.25e10a565f94bp-120, 0.0, 0.0, 0.0,
     0x1.fe37d16a2a90cp-93, 0x1.2bdbe43987496p-296, 0.0, 0x1.12548ebc04f8bp-882,
     0x1.9e28f5784dba6p-987, 0.0, 0x1.2159152b5e493p-873, 0.0, 0x1.00bf0c269971ep-895,
     0.0, 0x1.bb8889e3967e9p-185, 0.0, 0x1.aa6092e16a54dp-819, 0.0, 0.0,
     0x1.2b915891e89ffp-821, 0.0, 0x1.fac432dcefb53p-665, 0x1.bf4ece4170ebap-707, 0.0,
     0.0, 0x1.46b65b3d2be3p-961, 0x1.d308c092cdc34p-835, 0.0, 0x1.3392c5ba51f3ap-766,
     0x1.ddd16c3925071p-46, 0.0, 0x1.8a2a30f3d00fdp-805, 0.0, 0x1.277de40109247p-716,
     0.0, 0.0, 0x1.f33716d8d02ccp-888, 0.0, 0.0, 0.0, 0x1.0fbe6eb0e0fc1p-34, 0.0, 0.0,
     0x1.7c046e1750da5p-996, 0.0, 0x1.9a321b917ac92p-406, 0x1.e60d28eeeeb27p-568, 0.0,
     0x1.01413df9f6447p-231, 0.0, 0x1.5b018bd4f3e3p-939, 0x1.f5837f1056e53p-126,
     0x1.b704a9bac7028p-405, 0.0, 0x1.9fc13273f51ddp-285, 0x1.f70bcb98fefd1p-272,
     0x1.3ef085b4da4fcp-388, 0.0, 0x1.17da787c1b34cp-276, 0x1.c1ecb69688c7dp-554,
     0x1.a0b38eeeb6d9fp-540, 0x1.e9b3d8b01815p-435, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac08b0e59133bp-870, 0.0, 0.0, 0.0, 0x1.b7cb5a64d6d62p-954,
     0x1.200d690dcd2bep-699, 0x1.76df7571906cdp-724, 0x1.991418589aef7p-554,
     0x1.ae6da824f6027p-274, 0x1.13a0e6eb24046p-2, 0x1.0ddb881d6ebfap-359, 0.0,
     0x1.c15774faf52efp-237, 0x1.f9b2770c765fdp-696, 0.0, 0.0, 0x1.ee8686f87e763p-739,
     0.0, 0.0, 0x1.2526e0c3956fep-249, 0.0, 0.0, 0.0, 0x1.300a2ce88eaf4p-404,
     0x1.0de38fd15e75p-194, 0x1.4ec32d597aff9p-264, 0.0, 0x1.8c1e09ea4079ap-394,
     0x1.e83557b1f4c18p-372, 0x1.7a520cd7f1149p-180, 0.0, 0x1.940e08a9d451cp-632, 0.0,
     0.0, 0x1.14a6fa731cf78p-601, 0x1.f4be670b43afep-676, 0.0, 0.0, 0.0,
     0x1.95a6cd7c8058p-581, 0.0, 0x1.9501c7d0f6c63p-1017, 0.0, 0.0,
     0x1.3ba0d8a07ccbbp-95, 0.0, 0x1.e6d6459c9efa3p-451, 0x1.ec0c380806c8ap-460,
     0x1.dbd2f8f54e546p-368, 0x1.b6eb6061951e3p-308, 0x1.78747926a7bbfp-882, 0.0, 0.0,
     0.0, 0.0, 0x1.3a14923f31ddfp-276, 0x1.df287a6121b48p-360, 0.0, 0.0,
     0x1.7bcf6a3c42a1bp-997, 0x1.2275cea3a66bcp-586, 0x1.bdd86b3ab20cbp-603,
     0x1.ff137b569e413p-285, 0.0, 0x1.59f6f2d749e3fp-986
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincosd4_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincosd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincosd4_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
