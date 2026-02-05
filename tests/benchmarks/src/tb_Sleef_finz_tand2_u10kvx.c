/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand2_u10kvx.c --function Sleef_finz_tand2_u10kvx \
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
     0.0, 0x1.1909aa199898bp-208, 0.0, 0.0, 0.0, 0x1.5ed05916a47fbp-978,
     0x1.d622afeb99634p-937, 0.0, 0.0, 0x1.3f73c04e52233p-37, 0x1.43272bd887dd5p-126,
     0.0, 0.0, 0x1.3df9ec01ad18fp-952, 0x1.051919c515f5ap-997, 0x1.09beb7192a372p-416,
     0x1.386fd9c91a2acp-881, 0x1.6d5f7a8a35a41p-869, 0x1.a56a4e668741p-9, 0.0,
     0x1.eef43cba129f7p-1021, 0x1.5703357e69f8dp-291, 0.0, 0.0,
     0x1.0a6f4d198b777p-842, 0x1.4c2c277a1456bp-679, 0.0, 0x1.888ea19c198b8p-222,
     0x1.14ab502c0c982p-770, 0.0, 0.0, 0.0, 0x1.ea914439ff054p-225,
     0x1.ca76bde53b05cp-230, 0.0, 0x1.f5370f89bd68fp-373, 0x1.3bee100ed8383p-180,
     0x1.dc4b3e4c24fcp-465, 0x1.d17730488d526p-969, 0x1.fb9b5e148e7a4p-689, 0.0,
     0x1.dbdd3c472b684p-535, 0x1.f19cb32e2dca8p-389, 0.0, 0x1.cf209a93b442ap-808, 0.0,
     0x1.b6dbda9e9e055p-839, 0x1.a4a2a965917fep-702, 0.0, 0x1.b6ce209a2f7d2p-141, 0.0,
     0x1.2492d9ffea08bp-529, 0.0, 0.0, 0x1.c2e07d989ad38p-339, 0x1.ff15be9ecc0f3p-388,
     0.0, 0.0, 0x1.a3398b8500e1fp-180, 0x1.4f45a2d891ce4p-470, 0x1.e38f0a3f05338p-427,
     0.0, 0.0, 0.0, 0x1.9ca9f38ffeaa8p-949, 0.0, 0.0, 0x1.2e9346ed26a19p-702,
     0x1.fadb7b20460b3p-936, 0.0, 0x1.2b0d786c11d37p-979, 0.0, 0x1.9f815ec246da9p-995,
     0.0, 0.0, 0x1.d592d1470fceep-407, 0x1.f0b889d4a95e2p-806, 0x1.06acfb643fa2p-913,
     0x1.5072aea62bd3dp-810, 0.0, 0.0, 0x1.0a1e5ee8bffc1p-887, 0.0,
     0x1.e0927697f9752p-347, 0x1.e25c1f0323009p-970, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a9c1737a5e47fp-669, 0x1.b772fd0657061p-688, 0x1.4c3c430b7190ep-883,
     0x1.e5283adcb6c21p-486, 0.0, 0x1.7749051a208bp-65, 0.0, 0.0,
     0x1.6c9cd200663afp-783, 0.0, 0.0, 0x1.00545c55fd69p-331, 0.0, 0.0, 0.0,
     0x1.b8bf9e3d354ffp-323, 0.0, 0x1.78c3b6bf14e04p-228, 0x1.2ac5ff41ca609p-619, 0.0,
     0.0, 0x1.1d8aa2fb1628cp-604, 0x1.4d57d14e494f4p-454, 0x1.f6e0bd918e7c6p-1019,
     0x1.ae714e0920a7bp-454, 0x1.6115dbf405ecap-626, 0x1.e24edd057c5b9p-554,
     0x1.6081679b69ff6p-234, 0x1.b834d77901401p-174, 0x1.50303a1b596b7p-982, 0.0,
     0x1.8f95a87ff8b3dp-471, 0x1.73ceba7d83d3p-747, 0.0, 0.0, 0x1.ab028c1427a73p-331,
     0x1.335d9968491a2p-473, 0.0, 0.0, 0x1.76d125f95807ep-551, 0x1.513f4648c0dbdp-373,
     0x1.71262b47f2636p-668, 0x1.0fea16c3b4e4cp-1012, 0x1.121ebdc89e7cfp-665,
     0x1.481c55abc8cecp-464, 0x1.e808f7f3354dbp-590, 0x1.ffca3fffe22cbp-30, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8a01cda41bee9p-523, 0.0, 0.0, 0x1.3b64dd85c039cp-1008,
     0.0, 0.0, 0.0, 0x1.53d441fffb2d4p-36, 0x1.2136dea918ba5p-286,
     0x1.80c346b805bb1p-635, 0.0, 0x1.e84ba55e7f8b2p-102, 0.0, 0.0, 0.0, 0.0,
     0x1.6d9b0e7cc088bp-609, 0x1.6877bab0620f7p-111, 0.0, 0.0, 0.0, 0.0,
     0x1.017d72de75eaep-346, 0x1.5e3535f6f112dp-202, 0.0, 0.0, 0x1.fbf3684c098e2p-772,
     0.0, 0.0, 0x1.a4934992069f9p-861, 0x1.e1fd75a4dd174p-160, 0.0, 0.0, 0.0, 0.0,
     0x1.70a481c4df9b9p-153, 0x1.10cf77a72dfd6p-862, 0x1.327274f2f244ap-986,
     0x1.a1a55e28a2b5bp-327, 0x1.ac9b9caf71ba7p-803, 0.0, 0.0, 0.0,
     0x1.defba964ba8e7p-1000, 0.0, 0x1.a5cd04389ba0ep-542, 0x1.bf24e0501cb2ep-927,
     0x1.6bc8ee374cf53p-338, 0x1.ce94f88b11bddp-358, 0x1.8b5ec68fcd34ap-534,
     0x1.3421dc47c76dap-190, 0x1.981b8ab94a6ap-961, 0x1.399cd363d6437p-770, 0.0, 0.0,
     0x1.2ff34b3bd5b56p-371, 0.0, 0.0, 0x1.d68f93a3514bdp-534, 0.0, 0.0,
     0x1.3a888e467c407p-247, 0.0, 0.0, 0x1.fbb10590b2365p-458, 0.0, 0.0,
     0x1.197111d8e0399p-232, 0.0, 0x1.8f8754016efbbp-445, 0.0, 0x1.ef4bfddd152f7p-48,
     0x1.898eb5d38262cp-176, 0.0, 0.0, 0x1.4e8d569d45236p-687, 0.0,
     0x1.5fcf56a7022dep-329, 0.0, 0x1.0ad63659c1e91p-911, 0.0, 0x1.fee86a7443fafp-872,
     0x1.fc07e574795afp-96, 0.0, 0.0, 0x1.8e65794204d45p-896, 0x1.de60c4abc7ea7p-551,
     0.0, 0.0, 0.0, 0x1.65245397b9629p-284, 0x1.6aac21155f476p-616, 0.0, 0.0, 0.0,
     0.0, 0x1.234b54ada88d2p-13, 0.0, 0x1.40e658d16cd36p-420, 0x1.5f91c874ce317p-887,
     0.0, 0x1.06274e05c1159p-210, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1faea35836343p-623, 0x1.4b856c5a1abb2p-975, 0.0, 0x1.682777ff31ffep-539, 0.0,
     0.0, 0.0, 0.0, 0x1.bc70c28479812p-739, 0.0, 0x1.44cb293d72945p-760, 0.0,
     0x1.fcff890fb6b6cp-666, 0x1.a443d72142959p-53, 0.0, 0.0, 0.0, 0.0,
     0x1.d882d25598236p-797, 0x1.772a8ab1b5871p-543, 0.0, 0x1.fc3c147b7f454p-674,
     0x1.66e78372ad1d6p-371, 0.0, 0.0, 0x1.291ba9c071b46p-698, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fa18c10312312p-938, 0.0, 0x1.ba5a82ed6e25cp-773, 0.0,
     0x1.fe96322555f9cp-965, 0x1.e2ec2e42362d4p-842, 0x1.a94c7a8a56e6bp-241, 0.0,
     0x1.d9c201d3127a7p-436, 0x1.93f6c2e2980eap-994, 0.0, 0.0, 0x1.cee06409d48dp-763,
     0x1.6ee67ef1a14bcp-542, 0.0, 0.0, 0.0, 0.0, 0x1.5a22c3caaccf2p-519,
     0x1.d17b229bb106cp-137, 0.0, 0.0, 0x1.94b8aecdbd64ap-826, 0x1.9de6f3ddd3b9ap-803,
     0.0, 0.0, 0.0, 0x1.5d22adfa13cafp-905, 0x1.53638d2149b3ep-126,
     0x1.78d73f6cc45b5p-119, 0.0, 0x1.9cf91c945ba4dp-713, 0.0, 0.0,
     0x1.b15a2628202f6p-926, 0.0, 0x1.05d38a8810c2ep-768, 0x1.bac4ab6f3d999p-242, 0.0,
     0.0, 0x1.918218958c941p-557, 0.0, 0x1.96b8868417f82p-734, 0x1.ec983f806e5abp-928,
     0.0, 0x1.da0ec3b1f902cp-932, 0.0, 0x1.853f339963d49p-306, 0x1.30bf83449b968p-698,
     0.0, 0x1.67fde11c47d65p-559, 0.0, 0x1.8b5fb8656108dp-870,
     0x1.2191b6801976cp-1014, 0x1.df8dd28757124p-359, 0.0, 0x1.e93dfea12dc6fp-822,
     0.0, 0.0, 0.0, 0x1.f182adfb4a0b6p-871, 0x1.c804589ada1dbp-863, 0.0, 0.0,
     0x1.026213e9a541fp-357, 0x1.c29f69f2c84d4p-601, 0x1.f562b07338d2dp-177, 0.0, 0.0,
     0x1.50369f4d1a861p-984, 0x1.7ccc2ab9542ffp-876, 0x1.be0ad09315c67p-246, 0.0,
     0x1.2528e1606f3e2p-679, 0.0, 0x1.104a07568a294p-488, 0.0, 0x1.fa78c4c63ab36p-260,
     0.0, 0.0, 0x1.1703e3cbff6d7p-879, 0x1.1653aa8b1ababp-478, 0x1.1ac6e5089798p-547,
     0.0, 0x1.d589bb9cc82abp-991, 0x1.cf9490fece301p-430, 0x1.da9bbdfe6202ap-800, 0.0,
     0x1.73dd699bb81ep-824, 0x1.0b1605efb566ap-366, 0x1.7359bcee4fd8fp-296, 0.0,
     0x1.23db42e79a408p-681, 0x1.fcba60cfed667p-730, 0.0, 0.0, 0x1.c6f44e9c4d922p-566,
     0x1.96c33e72b335ep-153, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6707a81bfe72bp-506,
     0x1.9a5a6fdb712a9p-692, 0.0, 0x1.441439ca53556p-109, 0x1.918e210c35908p-610,
     0x1.364b38d11eb2dp-980, 0x1.302c73dc59da6p-849, 0.0, 0x1.2e3e0fe6cad04p-626,
     0x1.b72d2520c0d76p-92, 0x1.c5a3dc5e31d44p-17, 0x1.ca5c88d4521aap-743, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.326d00561333fp-104, 0x1.95059d377eec8p-636,
     0x1.26d5487b21285p-809, 0x1.5f280ab1b7d6dp-347, 0x1.b2c0b6053193ap-854,
     0x1.c09e9fc6b1d71p-393, 0x1.8e6562109ee3ap-308, 0x1.d1ab349722141p-601, 0.0, 0.0,
     0.0, 0x1.a0149f35d882ep-724, 0x1.02cb5c27d6ab9p-367, 0x1.da747e1c22afbp-181,
     0x1.48cfcd030231p-248, 0.0, 0.0, 0.0, 0x1.ea448ef15c9ebp-391,
     0x1.ac6e6874d444cp-407, 0.0, 0x1.13a165741da6ep-211, 0x1.dd46e7a7f14f1p-546,
     0x1.86963df7da105p-296, 0.0, 0.0, 0x1.d53f053cec735p-714, 0x1.8435372591048p-217,
     0.0, 0.0, 0.0, 0x1.5ca03d921096dp-345, 0.0, 0x1.405816a80c33ap-743,
     0x1.ea7a5f20e21eap-818, 0.0, 0x1.ed5942d87a263p-920, 0.0, 0x1.31c23d6cd6a05p-618,
     0.0, 0.0, 0x1.316564add7405p-178, 0.0, 0x1.9c09994c2ebe7p-519,
     0x1.fc610b9d71d08p-271, 0x1.405e31ba8d57bp-190, 0.0, 0.0, 0.0, 0.0,
     0x1.6ca49c5905cf2p-657, 0.0, 0x1.0e7b4d60569d3p-563, 0x1.fe9936f358bd5p-647,
     0x1.00343c22e11bcp-307, 0x1.f8fb738072fa9p-614, 0x1.3b82c2a231c74p-848,
     0x1.421b5f99d16dcp-86, 0x1.500d5da0ee88ep-985, 0x1.7a8092a73db64p-524,
     0x1.07ca30ebfd889p-1009, 0x1.638bb8f435f99p-319, 0.0, 0.0,
     0x1.f5fdd6f331944p-899, 0x1.ea2f02124f666p-258, 0.0, 0x1.b6275bc3b6afbp-681,
     0x1.a400fd6c939f3p-610, 0x1.91fe1a6eea71cp-185, 0x1.828eb661414fap-375, 0.0, 0.0,
     0x1.904d2f4bdab17p-166, 0.0, 0x1.64bad231e4371p-963, 0x1.6f632b8e94b0fp-644,
     0x1.ae225ae4edaep-13, 0x1.cd710871e1ea6p-685, 0x1.be0c02a38a62cp-728,
     0x1.afb6f2e0fe129p-852, 0.0, 0x1.a902416b3151ep-1014, 0x1.548da1e85f92ap-151,
     0x1.a45d09e7a9881p-535, 0.0, 0.0, 0x1.4dbe3c1ece019p-768, 0x1.f31ebc8dd2d44p-751,
     0x1.cea6d129a6c9ap-597, 0x1.8d0ff370f9864p-680, 0.0, 0.0, 0x1.a0728ef2b0c1ep-170,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f0a58eab733fbp-416, 0.0, 0x1.01ea54da7ee74p-290,
     0x1.5399918c6af1dp-100, 0.0, 0x1.0160f442f0ad8p-769, 0x1.3d02bb992b804p-549, 0.0,
     0x1.eea363e65c4b7p-687, 0x1.4a77d53a708acp-276, 0.0, 0.0, 0x1.292247bd7096fp-342,
     0x1.3ab5f2bc780f4p-508, 0x1.def31688b50b5p-915, 0x1.315566763e8c6p-523, 0.0, 0.0,
     0x1.3a071d4191aa9p-598, 0.0, 0x1.1912c6e590bc1p-881, 0.0,
     0x1.00fd4efea16afp-1010, 0.0, 0x1.8e51cd188967bp-366, 0x1.baa59a1bf8fecp-935,
     0x1.956a5b4228dep-487, 0.0, 0x1.56a0a4631d52dp-205, 0x1.61e892cc7fc13p-406,
     0x1.c50582a0ee818p-732, 0x1.e34f937729133p-371, 0x1.0f914db0757d6p-237,
     0x1.b8b16feac82b3p-261, 0.0, 0.0, 0x1.4fa3742550226p-621, 0x1.a821c0b68826p-858,
     0x1.d2c6ccd3c9617p-242, 0.0, 0x1.450192bf4a7ep-528, 0.0, 0x1.6660cd9b1ad76p-476,
     0.0, 0.0, 0.0, 0.0, 0x1.af3f13644ec54p-477, 0x1.cf60e1c84c723p-777, 0.0, 0.0,
     0.0, 0x1.a06e140e058e3p-325, 0x1.473c5df0f79dcp-863, 0.0, 0x1.36776a4791071p-937,
     0x1.bbf57d5a64373p-591, 0x1.632a87eff9b1ep-647, 0.0, 0x1.fbfaa723c8b36p-563,
     0x1.58638fdca00f1p-837, 0x1.ddfe46e1b164p-925, 0x1.14ae6935e9079p-871,
     0x1.f5b53aba88b9fp-962, 0.0, 0x1.e8592142cf969p-720, 0.0, 0x1.6690bbe760b99p-575,
     0.0, 0.0, 0.0, 0x1.2c00b433a1786p-666, 0.0, 0x1.b03b60a43dbe3p-724,
     0x1.76e94f68cf041p-264, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c1e62f0b746p-244,
     0x1.52e93c1463847p-626, 0.0, 0.0, 0.0, 0x1.e5f282abb1b32p-226, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b568806f58c95p-872, 0x1.35a298973b8c6p-863,
     0x1.56a9f931fb46bp-501, 0.0, 0.0, 0x1.ddd9d67d6b44fp-231, 0x1.307e6b9247832p-174,
     0x1.4993def78abadp-357, 0.0, 0.0, 0x1.6a7cb797f2a2ap-778, 0.0,
     0x1.c922a7d99721cp-939, 0x1.ac1b197348487p-597, 0x1.222f32c1eca38p-114,
     0x1.ef5d16039fe14p-371, 0x1.a296ce6a86a34p-669, 0.0, 0x1.e694a4aa85666p-407,
     0x1.11b935569ca09p-791, 0x1.fc83ecb2458b7p-745, 0x1.4419547ac72a9p-632, 0.0,
     0x1.afbd6b2461061p-164, 0.0, 0.0, 0x1.72c913a1901cdp-110, 0.0, 0.0, 0.0,
     0x1.84335327a15a4p-944, 0x1.372ccaf7754f6p-252, 0x1.0a26fae96644dp-376, 0.0, 0.0,
     0x1.d6ad0414a81e7p-406, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0df9c889fbe3ep-444, 0.0, 0x1.4303a4cb6e843p-237, 0x1.ed8f5e7bf2016p-444,
     0x1.ed80814827c74p-353, 0.0, 0.0, 0x1.e9f641dc246a5p-436, 0x1.ecd980df7ceep-6,
     0x1.e7e97fa417cb5p-116, 0x1.dfca998a6f4c5p-160, 0x1.75d4b862991b3p-343, 0.0,
     0x1.43a65b5c5cf7cp-667, 0.0, 0.0, 0x1.5dd645cb35116p-856, 0.0,
     0x1.475f9b7c062d3p-759, 0x1.03de9a3f20133p-136, 0x1.2635ee159c5aep-289, 0.0,
     0x1.4abcec8fa34dp-413, 0.0, 0.0, 0x1.7f02296f2e7b5p-793, 0x1.28b32432b4ef8p-547,
     0x1.eb53715796721p-376, 0x1.3b72ba269c0a5p-784, 0.0, 0x1.5ae2f1ed1f697p-697, 0.0,
     0x1.837c026e50a71p-614, 0x1.00a8d495ee4c5p-722, 0x1.50edf61bc3888p-113, 0.0,
     0x1.c91e8e79631d1p-257, 0.0, 0.0, 0.0, 0x1.46084d24bb7fap-418, 0.0, 0.0, 0.0,
     0.0, 0x1.21b9dfa9fa0d1p-218, 0x1.41b612eaf6ed2p-809, 0.0, 0.0, 0.0,
     0x1.097de4983a891p-41, 0.0, 0.0, 0x1.df0fc2c6d73d1p-866, 0x1.35fdd29e0ac9p-655,
     0x1.3c171ff28751cp-356, 0.0, 0x1.2c973cb77c12p-935, 0x1.6902b8cdbf3d7p-337,
     0x1.46be9dbafb7a8p-372, 0.0, 0x1.42ebc4692dc4dp-377, 0.0, 0.0,
     0x1.01990fe1df4c5p-892, 0x1.db9a914371646p-153, 0.0, 0.0, 0x1.7663adf3ad18dp-370,
     0.0, 0x1.fb4808b087a4cp-394, 0x1.3cc212cbd1d14p-33, 0.0, 0.0,
     0x1.7c91e9dc4ab3bp-503, 0x1.0fcedd0cd0ac4p-489, 0.0, 0x1.18d59042ab99fp-816,
     0x1.d8504a6303c01p-505, 0x1.d0c625d247c24p-44, 0.0, 0x1.d2f2bf25a915dp-308,
     0x1.f5f24b989c634p-76, 0.0, 0.0, 0x1.4f4e16cb9d521p-387, 0x1.7859693ed24bap-511,
     0x1.d3778ec75790cp-703, 0.0, 0.0, 0x1.a3c9dfaeb296cp-15, 0.0, 0.0,
     0x1.71fbf83ab7a9p-466, 0x1.e9d5ba5c2210ap-928, 0x1.98384cdb82b3ap-88, 0.0, 0.0,
     0.0, 0.0, 0x1.ab7cbf4ce4a78p-196, 0.0, 0.0, 0.0, 0x1.2b9b194259741p-246, 0.0,
     0x1.97adb707e77a1p-30, 0x1.31705628ba03bp-25, 0x1.92571386d856p-7, 0.0, 0.0,
     0x1.612f9a5371db3p-313, 0.0, 0.0, 0x1.62f4265272839p-316, 0x1.e67021173c448p-678,
     0.0, 0x1.6b5e6aec4c79p-579, 0.0, 0x1.2160e5a016e24p-529, 0x1.53ec8cd8e8cc4p-758,
     0x1.e16822559e95fp-26, 0.0, 0x1.c8b8c3121c015p-993, 0.0, 0.0,
     0x1.688d1b11781fap-251, 0.0, 0x1.8c127e0b90d13p-640, 0.0, 0.0,
     0x1.0ee9aba748dd8p-819, 0x1.026af820b8a8cp-181, 0.0, 0.0, 0.0,
     0x1.1b950133a964ap-537, 0x1.cf6477dc6d5ebp-836, 0.0, 0.0, 0x1.3823f588f1161p-677,
     0.0, 0x1.ef28db47c047ep-485, 0x1.679c95eea86dep-551, 0.0, 0x1.917b9f280086cp-759,
     0.0, 0x1.c09e8353c180fp-24, 0.0, 0x1.c61ddc38350eep-985, 0.0, 0.0,
     0x1.17844ba20b346p-909, 0x1.f4f37b29e51e2p-582, 0.0, 0.0, 0.0,
     0x1.318c4978a969ep-164, 0x1.bc5e1c4e3b1f8p-572, 0.0, 0.0, 0x1.af8c89afc93c4p-474,
     0.0, 0x1.4c8d86115e605p-820, 0.0, 0x1.a7003acfdb6b9p-469, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e5e3247c9d801p-24, 0x1.62292161629b7p-479, 0x1.acf64c9398816p-404, 0.0,
     0x1.a2de7bdef1c3bp-830, 0x1.889cf9fee30cfp-785, 0x1.2fd9765a13accp-547, 0.0,
     0x1.ab59c146dfd14p-424, 0x1.a1f0c8e2d2a7ep-520, 0.0, 0.0, 0x1.78202d5f66d98p-534,
     0.0, 0x1.4adf6d051a8c8p-641, 0x1.cd2633b343829p-229, 0x1.5aa9fef163857p-690, 0.0,
     0x1.93d189abc4e75p-493, 0.0, 0.0, 0x1.033f9993aad27p-555, 0x1.fa9d9b9fe526cp-482,
     0x1.a9a0b6b6c3142p-917, 0.0, 0x1.466a26240eb53p-437, 0x1.d8331345a15e7p-972,
     0x1.e18ba4577ee05p-673, 0.0, 0x1.bd020742fce35p-800, 0.0, 0x1.4079ee4940b8fp-585,
     0x1.a2c21ea6b92a1p-684, 0.0, 0x1.82b20270b3177p-153, 0x1.bf3bb1c7bad0ep-449, 0.0,
     0x1.f9c68ca9dce9ap-520, 0x1.5209d6d3571e4p-512, 0.0, 0.0, 0.0, 0.0,
     0x1.4efe819d2a363p-339, 0x1.17081ea9a13dep-595, 0x1.acfe1bbb63ee3p-697, 0.0,
     0x1.635b7389baa52p-529, 0.0, 0x1.351d7b992eecp-496, 0.0, 0x1.1c704ccac3008p-920,
     0.0, 0x1.b3c769a76f465p-700, 0.0, 0.0, 0.0, 0x1.b4d069957e2c5p-785,
     0x1.c6226c3e6d3f5p-966, 0x1.036041f827be2p-831, 0x1.6d97201ab967ep-738,
     0x1.cf6dd96326e0bp-880, 0.0, 0.0, 0x1.8a5cc09000bb7p-447, 0.0, 0.0, 0.0,
     0x1.b48c15535a533p-240, 0x1.951e72580c477p-128, 0.0, 0x1.c5c73a2fbb218p-83, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.092e5581e48adp-657,
     0x1.b0a43aed5b4d8p-484, 0.0, 0x1.9fd06b7a73aaap-934, 0.0, 0.0,
     0x1.2690244299b07p-760, 0x1.6525f220c1e26p-764, 0.0, 0x1.ed3ceeb05a37fp-491,
     0x1.c9193fa3df6edp-1001, 0x1.75058050302e7p-745, 0.0, 0x1.0423f4c11fa64p-355,
     0x1.05cc5c529ee9bp-601, 0.0, 0x1.6da58923bd9b6p-957, 0.0, 0.0,
     0x1.050b9c586e0a2p-149, 0.0, 0x1.04880e181c716p-377, 0x1.6bf1300a1f7f7p-377, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.95f9de6313787p-647, 0.0, 0.0, 0x1.236040a90b507p-397,
     0x1.c79e66960c874p-979, 0x1.fac7d7c1772f4p-57, 0x1.ff12b94f0068cp-583, 0.0, 0.0,
     0.0, 0x1.d7839b7ec5acap-649, 0.0, 0x1.1ad4c85cc562cp-824, 0x1.64e979d8ec26bp-336,
     0x1.8daf1cd5063cfp-1007, 0.0, 0x1.49b9a1136f22dp-353, 0.0,
     0x1.f2ee46b8fef98p-697, 0x1.ae7f718c54e6fp-572, 0.0, 0.0, 0x1.36d8940519f95p-339,
     0.0, 0x1.b260d58c452ep-482, 0.0, 0x1.8444d85b7f73dp-51, 0.0, 0.0,
     0x1.215d10df29d56p-498, 0x1.9b0145cc71ce3p-329, 0.0, 0x1.8969fd9c7760cp-344, 0.0,
     0x1.84d06d36020d6p-608, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89450a307769fp-1009,
     0x1.2d87c0d3a459bp-743, 0x1.a5312fd36d827p-780, 0.0, 0x1.11f38afa1c8bp-627,
     0x1.02454f6d73cd5p-426, 0x1.a18054123f72ap-181, 0.0, 0x1.3d08ceebec777p-658, 0.0,
     0x1.55c400a83ff4ep-519, 0x1.b685774400946p-549, 0x1.8c51dfb9d5957p-840,
     0x1.4cdbc5e655a65p-372, 0.0, 0x1.bab48e64c5c0ap-216, 0x1.bb9312e138936p-995, 0.0,
     0.0, 0.0, 0x1.b85390ceb36dap-328, 0x1.98706876ab159p-2, 0.0, 0.0,
     0x1.1637cfaa3549p-387, 0.0, 0x1.88108562121c1p-904, 0.0, 0.0, 0.0,
     0x1.8d74d38e1ccbfp-879, 0x1.7afffc827821p-21, 0.0, 0.0, 0x1.a8a817f86708fp-21,
     0x1.1a97a7e92973ep-508, 0x1.c4c66cb89d47cp-297, 0.0, 0.0, 0x1.011531e9cc745p-406,
     0.0, 0x1.9d8e59995adf7p-734, 0.0, 0.0, 0x1.ae723bf132835p-601, 0.0
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
            tmp1 = Sleef_finz_tand2_u10kvx(tmp0);
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
    printf("Sleef_finz_tand2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tand2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
