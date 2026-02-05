/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid1_u35purecfma.c --function \
 *     Sleef_sincospid1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.09759fee510f2p-495, 0.0, 0x1.230f0ad3a86e2p-562,
     0x1.4849ceeb371a8p-763, 0.0, 0.0, 0x1.512ecec6b6647p-441, 0x1.7ade196ae40cep-344,
     0x1.bad107e503b76p-158, 0.0, 0x1.180d1f8bdc143p-503, 0.0, 0x1.d95bf319350ddp-646,
     0x1.695819e5cbda8p-359, 0.0, 0x1.2ef0c17e617b3p-934, 0.0, 0.0,
     0x1.72cfd6f655e6ap-975, 0.0, 0x1.09f270f386db1p-692, 0x1.c1819e9dab328p-175, 0.0,
     0x1.825fd0a1d6809p-257, 0.0, 0.0, 0x1.e0f05b4897ad9p-597, 0.0,
     0x1.e6ae63c5350bfp-384, 0.0, 0.0, 0x1.5b0a717db266p-7, 0.0,
     0x1.b306fb0e71f87p-423, 0x1.2999204c2082cp-234, 0x1.b4a056023afc9p-551, 0.0,
     0x1.5fae3f9beed6bp-930, 0x1.16f4f79a5f334p-58, 0.0, 0.0, 0x1.c09d272113638p-869,
     0x1.bb910e003fbep-207, 0x1.450798ea9345fp-245, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.95b2cdd714a04p-311, 0x1.96309986246cbp-700, 0x1.f3062db29ea5p-159,
     0x1.d600205d0b115p-734, 0.0, 0x1.c3854616de1b4p-813, 0.0, 0x1.70b9057ac6afdp-347,
     0x1.e2c4c5912d0bep-342, 0x1.907b415d3a7f1p-35, 0x1.1e0f1b49bcae7p-863,
     0x1.21145d1f1eafdp-518, 0.0, 0x1.2f9da7ea1bcecp-280, 0x1.eca0e73622df4p-437,
     0x1.14bc846c93447p-828, 0x1.ad9bfb35d09cap-938, 0x1.e0d8fef775431p-777,
     0x1.a84796c960468p-181, 0x1.7d1e19b96dd05p-911, 0.0, 0.0, 0x1.2ad530c2f609dp-224,
     0x1.9569c1715cf02p-871, 0x1.9219e62e5abcfp-117, 0x1.17da986272da5p-153, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.01c893e70f5ebp-155, 0.0, 0.0, 0.0, 0x1.46060ebe75cd1p-48, 0.0,
     0x1.2362f280aa09dp-109, 0.0, 0x1.070706bbdd97bp-393, 0x1.56bf718b1ae78p-804,
     0x1.6e8974dba1eecp-869, 0x1.5f6dd779c4201p-586, 0.0, 0x1.8b0e299de9895p-580,
     0x1.ba65459e00485p-324, 0.0, 0x1.176e3f144e392p-158, 0.0, 0x1.82c03f5d0dc2p-804,
     0x1.8ef7904eac628p-445, 0x1.4d0a6d57b9639p-422, 0.0, 0.0, 0x1.0c59c29189c01p-610,
     0x1.9440ec72f65f4p-525, 0x1.0e74e2d09b8bfp-1019, 0x1.fa0a27c7c35e9p-423, 0.0,
     0.0, 0.0, 0.0, 0x1.f8cb7452e1441p-253, 0x1.92d3c4a1e4a8cp-213, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.083cf28c6ea21p-164, 0x1.ed58b2d31b7a6p-635, 0.0,
     0x1.d41a7f3379cbdp-512, 0x1.d00fa8d16c306p-581, 0.0, 0x1.437e3cda92dbbp-385, 0.0,
     0.0, 0x1.da9745642c286p-615, 0x1.91f2fb4c7c52bp-198, 0x1.c3f47d3fb1051p-987, 0.0,
     0x1.b47e85a4fa2bp-943, 0.0, 0.0, 0x1.db5457ac70998p-797, 0.0,
     0x1.ec04b045b0e6ep-181, 0x1.5565c4ce7518fp-896, 0.0, 0.0, 0.0, 0.0,
     0x1.7ac2ef609677cp-242, 0x1.47aae2f727357p-534, 0.0, 0.0, 0x1.a468cfeea2a31p-821,
     0.0, 0.0, 0x1.a69bfff45f5b8p-399, 0.0, 0x1.f6f0ef7b5a9f7p-58, 0.0,
     0x1.b9a7b3c45a09p-294, 0.0, 0x1.19653813c2a78p-271, 0.0, 0x1.bd14bc28475b7p-270,
     0x1.298833f74aaa5p-237, 0x1.38866be8346eap-927, 0x1.f721ec612ea64p-946,
     0x1.d24c459b44997p-545, 0.0, 0x1.8e2c5b0f47352p-413, 0x1.988e046a58975p-286, 0.0,
     0x1.627a7914b2825p-503, 0x1.160d84485c9ccp-870, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6941d018a724bp-208, 0x1.481c6ca8874d6p-801, 0.0, 0x1.399601c7d6c94p-123, 0.0,
     0x1.6e9ffc5899548p-816, 0x1.ee933d629559cp-722, 0.0, 0.0, 0x1.83c308e918932p-671,
     0.0, 0x1.15b7cd7acc746p-64, 0x1.19d19479e4584p-866, 0.0, 0x1.a4c9d3425dd8fp-306,
     0.0, 0.0, 0.0, 0x1.3d555ba5fd1edp-963, 0.0, 0x1.0c25355e9e9b1p-538, 0.0, 0.0,
     0.0, 0x1.b683420a452d5p-94, 0x1.ef24e7d0eb331p-246, 0.0, 0.0,
     0x1.f1bcf4bfddcf4p-293, 0.0, 0.0, 0.0, 0x1.b5b843dd0cc9bp-365, 0.0, 0.0, 0.0,
     0x1.92a16637660bcp-208, 0x1.51269b0aa098bp-80, 0.0, 0x1.c8c852ae6e06ap-525,
     0x1.010ff5538055fp-582, 0.0, 0x1.045f0691db4b1p-131, 0x1.44a50ed54a5c4p-481, 0.0,
     0.0, 0x1.e254a097c4169p-440, 0.0, 0.0, 0x1.0dc1bf3107d28p-741,
     0x1.05688615f10fcp-661, 0.0, 0x1.9180c53b2d692p-113, 0x1.7cf31978e6819p-636, 0.0,
     0.0, 0x1.8b1c543db7a24p-488, 0.0, 0x1.bf2d02f5d12c3p-865, 0.0, 0.0, 0.0,
     0x1.2b0f7fc0f78adp-137, 0x1.f39a9eaa1bae4p-170, 0.0, 0.0, 0.0,
     0x1.56721fe7c1784p-219, 0x1.f4bd6abafc65dp-392, 0x1.39c1cf589b667p-110,
     0x1.3917585898ba1p-122, 0.0, 0x1.1aaccf5a0d008p-307, 0.0, 0.0,
     0x1.9018616cd7ec1p-544, 0.0, 0x1.9e4edc8cfded4p-996, 0x1.2af05799801d8p-727,
     0x1.a2b5cda22c61fp-883, 0x1.c4ec90a574cdcp-845, 0.0, 0x1.8385d3fef947ep-914, 0.0,
     0x1.1379dcc630f17p-170, 0.0, 0.0, 0.0, 0x1.0a42630346b3bp-294,
     0x1.5fba145d19e51p-569, 0x1.dfebbbd744f21p-429, 0.0, 0.0, 0x1.4d04c23c11d43p-457,
     0x1.22dd1348b793ep-242, 0x1.fc96e18bea23bp-215, 0.0, 0.0, 0.0,
     0x1.b003b8ab34c4p-431, 0x1.478eb13f79f5cp-5, 0x1.0638f680059edp-746, 0.0, 0.0,
     0x1.c2d9d8e553fcdp-158, 0.0, 0x1.0c719bd1486a4p-72, 0.0, 0x1.6690312e5e1a4p-506,
     0.0, 0x1.0c4f946cad05dp-130, 0x1.f5f45e2c10715p-148, 0x1.fa7dcac25b532p-214,
     0x1.164a6e14651fp-209, 0.0, 0.0, 0.0, 0.0, 0x1.b25cec7c90254p-44,
     0x1.95a4373521921p-884, 0x1.039f901c38737p-362, 0.0, 0x1.28ec34c1b0351p-1011,
     0.0, 0x1.7611acae703ffp-838, 0.0, 0.0, 0x1.3bfb24657ef7ap-82, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.02264e2e37421p-413, 0x1.59705b0e77eb1p-237, 0.0,
     0x1.e044f304b07c2p-437, 0.0, 0x1.42f41d7b8166fp-635, 0x1.95e2b21f27ab9p-499,
     0x1.b04779b507dbdp-293, 0x1.f690a78545e7ep-828, 0x1.73d272df68cdbp-69, 0.0,
     0x1.041d424145b57p-183, 0x1.c192692165e22p-689, 0x1.1dac0eb9bb726p-585, 0.0,
     0x1.f7b02ed88791p-365, 0.0, 0.0, 0.0, 0.0, 0x1.0c8cd9658acccp-445,
     0x1.6739456988c32p-145, 0.0, 0x1.f91e15d7a9323p-2, 0x1.79ad2377cb88fp-440,
     0x1.115e18ddfe243p-246, 0x1.f7da580719c51p-781, 0x1.5578af27d6bcap-503,
     0x1.2d72bd7d74f8ep-586, 0.0, 0x1.8ea3ecc69a604p-853, 0x1.e523826e14084p-294, 0.0,
     0.0, 0x1.629582f72ff6ap-864, 0x1.232015013e07ep-264, 0.0, 0.0, 0.0,
     0x1.ad0872fa5937dp-267, 0x1.18b085a13c554p-805, 0x1.2e55bd28fa21p-963, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3367df0bd6c81p-145, 0.0, 0x1.a2860b96c65f7p-484,
     0x1.6f45e71a21358p-81, 0x1.525678329ca49p-203, 0x1.92aebf8b4a6bdp-838, 0.0, 0.0,
     0.0, 0.0, 0x1.b98b0fa8b0397p-470, 0.0, 0x1.4dc6316014fdep-859,
     0x1.4e28226c311f8p-970, 0.0, 0.0, 0x1.229b964269426p-711, 0x1.0229271eefc14p-143,
     0x1.df796ef054d44p-369, 0x1.67ebb5473e637p-319, 0x1.0f66ec939193dp-514, 0.0,
     0x1.b9f1082e1ae22p-861, 0x1.a857793ad50d8p-854, 0x1.e4b3a036884aap-776, 0.0, 0.0,
     0x1.64262a219b3ap-507, 0x1.fe6727c0201f4p-930, 0.0, 0x1.e2b73191133c3p-70,
     0x1.fe5ceaa61bf2cp-765, 0x1.3ff5aeeda5bp-794, 0.0, 0x1.583138709f274p-912,
     0x1.685bcc95cbb5ap-9, 0x1.7c997de9f491bp-955, 0.0, 0.0, 0.0, 0.0,
     0x1.ae3d42d7e9deep-882, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d475a572384bp-399,
     0.0, 0x1.5c86425bcc775p-201, 0x1.153700a9cabep-673, 0.0, 0x1.78b7a64e25798p-711,
     0.0, 0.0, 0.0, 0.0, 0x1.d3761bb27cdfcp-671, 0.0, 0.0, 0x1.91e0f4974a5d2p-410,
     0.0, 0x1.e9e96befd4014p-211, 0.0, 0.0, 0x1.9dd550e283011p-210, 0.0, 0.0,
     0x1.01a79fb1e298ap-254, 0.0, 0.0, 0x1.594af5b5f59ddp-298, 0x1.4423cf3de65ap-751,
     0.0, 0x1.f42ecaf2c220bp-442, 0x1.175f8a18f297ap-352, 0x1.83aefa8ade1e6p-781,
     0x1.e944790459a1p-397, 0.0, 0.0, 0x1.15d66366cb776p-109, 0x1.ddbe96f69b927p-412,
     0x1.956bd4baf86a6p-491, 0x1.2b44a26a15b3fp-63, 0.0, 0.0, 0.0, 0.0,
     0x1.2d0946ce84c88p-909, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.38c5a7dee2fa8p-449,
     0x1.ce7276ad3807cp-500, 0x1.6a857f6921aep-916, 0.0, 0x1.7a45a362f6157p-13,
     0x1.ef77eba9882p-620, 0.0, 0x1.9e77c9d1869a7p-452, 0.0, 0.0, 0.0,
     0x1.f6ad9d865cf39p-358, 0.0, 0x1.343fde80a1e8dp-548, 0x1.1a8d709c73539p-455,
     0x1.d369b0f485599p-541, 0x1.30ce751633735p-479, 0.0, 0x1.bf98804b9f083p-401,
     0x1.c5c3a0001b05fp-118, 0.0, 0.0, 0.0, 0x1.a74c328d9362p-419,
     0x1.692e2ac937561p-126, 0x1.8a13ce9525a9cp-481, 0x1.e11ef3e38c02cp-581, 0.0, 0.0,
     0.0, 0x1.db19dd16da31ap-804, 0x1.d7299c55b8579p-102, 0.0, 0.0,
     0x1.7ff205c264cbap-336, 0.0, 0.0, 0.0, 0.0, 0x1.d2bc1e67644c3p-570,
     0x1.722fc9340febbp-357, 0x1.3f80b4b1f41fbp-205, 0.0, 0.0, 0.0, 0.0,
     0x1.411523c4e3693p-210, 0x1.db5c977aa68a3p-417, 0.0, 0x1.70829896d653bp-726,
     0x1.f9b56cd9eb4acp-628, 0x1.c19adb4cd0699p-440, 0.0, 0.0, 0x1.6f3ddebf684a2p-248,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d5ca9f1b6eac1p-90, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cc71d39e14421p-342, 0.0, 0x1.d67347f680d14p-867, 0.0,
     0x1.9cb4cdc65f3bap-241, 0x1.b01cee30d2754p-328, 0.0, 0x1.580d1da0138c8p-476, 0.0,
     0x1.b0162756dfbe1p-991, 0.0, 0.0, 0.0, 0x1.03eef8a98fc54p-912, 0.0, 0.0, 0.0,
     0x1.26f447d6d8f74p-368, 0.0, 0x1.e8c42f2d0b16ep-274, 0x1.0d762aece8d13p-286, 0.0,
     0.0, 0x1.98bb6f365428ep-708, 0.0, 0.0, 0x1.43388af15b8fdp-540, 0.0,
     0x1.8abce0f93fbb7p-1018, 0.0, 0.0, 0x1.9f93c09b9b122p-757,
     0x1.787cd8f467c68p-645, 0x1.d1315a1534032p-417, 0x1.f2774e8d77ab8p-1022, 0.0,
     0.0, 0x1.cf1dfebc1cffap-489, 0.0, 0.0, 0x1.e79e3ed8acb2dp-717, 0.0,
     0x1.68c110bb30ba3p-98, 0.0, 0x1.e380ef624c341p-981, 0x1.544ad324d8abep-104, 0.0,
     0.0, 0.0, 0x1.a8ef0fabbd53cp-726, 0x1.c9cacdc101566p-724, 0x1.bbdbb75ab7eabp-681,
     0x1.bcf6f85343105p-77, 0.0, 0.0, 0.0, 0x1.447b4ac9d307cp-477,
     0x1.9d236b8fa11e7p-545, 0x1.6c73cbcd5f97dp-319, 0.0, 0x1.da795d4bf4285p-302, 0.0,
     0.0, 0.0, 0.0, 0x1.643ed9931aac2p-589, 0.0, 0.0, 0.0, 0x1.a80f5801df7d3p-183,
     0x1.0f7d72fd5d0aap-319, 0.0, 0.0, 0x1.3373a27820354p-982, 0x1.71f01f9bb8fbdp-909,
     0.0, 0x1.d996ee3ff35c8p-216, 0x1.48fc0af11982fp-1013, 0.0, 0.0,
     0x1.2283de29bb6e8p-101, 0.0, 0.0, 0x1.1130f48183281p-92, 0x1.293a12c26158cp-94,
     0.0, 0.0, 0.0, 0x1.d4d7a39d09a0ap-926, 0x1.4239ccd356a6ep-829,
     0x1.c1d5ab6bdf321p-769, 0.0, 0.0, 0x1.7e3888cb7ce93p-495, 0.0,
     0x1.6fcdfb7f76ca1p-79, 0x1.278ce8422f7cap-691, 0x1.eb5c188d30985p-550, 0.0, 0.0,
     0x1.0b945f637fa21p-178, 0.0, 0.0, 0x1.65ab77cfe1a49p-284, 0.0, 0.0,
     0x1.fe177d0668b3ep-1018, 0.0, 0x1.b247e5d8d5cfbp-307, 0.0,
     0x1.6bc727dc8bd67p-799, 0.0, 0x1.b0d683c25da52p-204, 0x1.fa53dfc46ca33p-520, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9ce2317b3f7bp-107, 0.0, 0x1.a8455942feac9p-299,
     0x1.3bd13903039c7p-465, 0x1.a56019f0b3048p-41, 0.0, 0.0, 0.0, 0.0,
     0x1.46041660be561p-848, 0x1.f1afed2fa7c36p-550, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.795da60652a93p-659, 0.0, 0x1.2207b42315c0dp-845, 0.0, 0.0, 0.0, 0.0,
     0x1.a6b885253a503p-920, 0x1.137b49bc4021ep-469, 0x1.16ac5ea0c9fb8p-286, 0.0, 0.0,
     0x1.6f17e5d156ae3p-59, 0.0, 0x1.3d1e3b68fb334p-203, 0.0, 0x1.d92ff736e57d2p-687,
     0.0, 0.0, 0.0, 0x1.9ed83a14e26edp-226, 0x1.75645915c8f03p-616,
     0x1.0b76d62776798p-345, 0.0, 0.0, 0.0, 0x1.d4eb52856d6f4p-820,
     0x1.a08d98f84479dp-847, 0x1.41837836de97ep-157, 0x1.b1654e8462928p-618, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db8542df2f275p-949, 0.0, 0x1.4fadcd3045083p-677,
     0x1.a2eecf81ab6efp-767, 0x1.8507212263eb2p-167, 0x1.36c77fd8c0281p-291,
     0x1.1ab73adbde4a1p-589, 0.0, 0.0, 0x1.1ebc24d7096cep-660, 0.0,
     0x1.f1981d1501abbp-75, 0x1.27a888002a45ep-631, 0x1.f906fc6793f67p-794, 0.0, 0.0,
     0x1.8f0706bd887f4p-727, 0x1.ce5d137d51882p-3, 0.0, 0x1.0dbf423bdb456p-545,
     0x1.633c5b37cadb8p-672, 0.0, 0x1.0472d1e4bb08ep-23, 0x1.0d191a2441b3ap-429,
     0x1.8212a92e13341p-300, 0x1.53a4985c02c3ep-260, 0.0, 0x1.4e6cb3b3f0c36p-61, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9a89ce420eb97p-190, 0.0, 0.0, 0.0, 0x1.84399fd0d634ap-58,
     0x1.e063015b79c6dp-663, 0x1.750313367737ap-933, 0x1.f684afb55a568p-692,
     0x1.dada3290afac6p-121, 0.0, 0.0, 0x1.2ce553387bf6fp-153, 0.0,
     0x1.2764d9d8171cp-385, 0x1.f8bcc4d83ba68p-120, 0x1.7c7178db1b0ddp-615,
     0x1.b5ae2b8319f46p-840, 0.0, 0x1.57a071256cda7p-545, 0x1.db223eeda0efp-92, 0.0,
     0.0, 0x1.026751b8a2d9bp-332, 0x1.45650d1a95f67p-436, 0x1.a892438f44e8ep-239,
     0x1.daf97c38c8ed3p-625, 0x1.2cbedc22d601ep-471, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70cde4391523bp-402, 0.0, 0x1.a16f29a14cf0ap-1016, 0.0,
     0x1.19ddff1303c0fp-820, 0x1.d84cba23669b3p-662, 0x1.aecb25176b481p-416, 0.0,
     0x1.49651b5d8e15fp-66, 0.0, 0x1.f21dc27010785p-97, 0x1.46683ab270a1p-588,
     0x1.b1628fc9b7cfbp-869, 0x1.7ef062d404f1bp-159, 0.0, 0x1.c3fa0ec2bcd53p-127,
     0x1.06c62467c541ep-1001, 0.0, 0.0, 0x1.1195d1adc508p-547, 0x1.188b707ac29c5p-574,
     0.0, 0x1.649742c39f018p-311, 0x1.205f48b8758f2p-784, 0x1.7b3f39c7328f6p-757, 0.0,
     0.0, 0x1.e8678d03eed89p-318, 0x1.5a11d7e124028p-462, 0x1.e6f403475659bp-604,
     0x1.8f9c5601ea3f4p-869, 0x1.d6aca8b19bf1dp-128, 0.0, 0x1.97c7c6ce2b8d3p-456, 0.0,
     0.0, 0.0, 0x1.c78786f191afp-999, 0.0, 0x1.504d5f9f15285p-266, 0.0,
     0x1.07c3b30012707p-581, 0.0, 0x1.e9121097b773fp-314, 0x1.51e0fa1effccbp-129, 0.0,
     0x1.51458cd85d0fp-568, 0x1.e5f38e64bca23p-371, 0.0, 0x1.e0acedc5acba1p-155,
     0x1.161200b2c89bcp-928, 0.0, 0.0, 0x1.cfa6d73192557p-534, 0x1.6497fd704f4eep-412,
     0x1.3ee4abd8dd70bp-976, 0x1.eb20d93f8e93bp-765, 0.0, 0x1.8f3591cc5dfbcp-798,
     0x1.982e28c7d7cdep-367, 0.0, 0x1.d8050fd39872dp-924, 0x1.4d1f3c4e31054p-88,
     0x1.54cf00a050e4dp-370, 0.0, 0x1.381e49db11c7ep-670, 0.0, 0.0,
     0x1.6dec4abf0859cp-533, 0x1.c11941bafe983p-988, 0x1.4210ff49ca828p-622,
     0x1.5751fe6e1dea8p-979, 0.0, 0x1.2c75939591e3dp-291, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.359fffceb6318p-781, 0x1.d7d3b6ea73feep-887, 0.0, 0.0, 0.0,
     0x1.3a5f1a7546f4bp-572, 0.0, 0x1.aeee2e13f91a3p-1004, 0x1.93df6d6cd3192p-60, 0.0,
     0x1.6d7ee049e6d4dp-864, 0.0, 0x1.08658f3153d99p-390, 0x1.546e97414b082p-810,
     0x1.c32344d5ba863p-520, 0.0, 0x1.3891b11c2b1acp-11, 0.0, 0.0,
     0x1.c680fc3deaa38p-797, 0.0, 0x1.269c68aa7bedcp-326, 0x1.100776ca98cd2p-121,
     0x1.0cd67d47ae23ep-861, 0x1.b0c2ee0bd38d7p-326, 0x1.b5123b316beddp-741,
     0x1.458a6cbf4613p-127, 0.0, 0.0, 0x1.912f3908a9d67p-309, 0.0, 0.0,
     0x1.d05421b61eda9p-891, 0.0, 0x1.88161e9cddb99p-355, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c79717db82e1ep-399, 0.0, 0x1.bdb8eeb6b5df4p-637, 0.0, 0.0,
     0x1.8caab7c7718b6p-918, 0x1.4e709053c26ecp-571, 0.0, 0.0, 0x1.8a339f63690a2p-892,
     0.0, 0x1.2be14d4a611aap-140, 0x1.fcd8e434944cdp-491, 0x1.bc4ee72cb420ep-883,
     0x1.af8f5fdc0eec2p-730, 0x1.4ca83ca6e68b4p-339, 0x1.b7ac516140253p-359,
     0x1.501d0d6970345p-632, 0x1.cbab061bcb855p-288, 0x1.31943a379ad96p-449, 0.0,
     0x1.2cc588bc1da4cp-180, 0x1.b345122f1d9bap-659, 0.0, 0.0, 0.0, 0.0,
     0x1.2f7e8931a6ae5p-546, 0x1.b66fbc3d237f4p-413, 0x1.2084654f14c73p-494,
     0x1.139048950c39dp-962, 0x1.7d4d06bcccc1fp-858, 0x1.d93d8d0918c3ep-919,
     0x1.412355ada925bp-477, 0.0, 0.0, 0.0, 0x1.ae04deb5eae0bp-56, 0.0,
     0x1.a5b731c92284bp-459, 0x1.43a4705c71b36p-32, 0x1.f187c79ce92ebp-518, 0.0, 0.0,
     0x1.ee349ede0c773p-314, 0x1.9ccb30d429c3cp-827, 0x1.2785c377a8776p-320,
     0x1.5757d83a9d004p-464, 0.0, 0x1.cc9a6d11a1cc1p-285, 0x1.45bfbef9b8d88p-471, 0.0,
     0.0, 0x1.3da7dc69fb3aep-561, 0.0, 0x1.329bcde8f378bp-611, 0x1.ab798b952a3f8p-725,
     0.0, 0.0, 0x1.03de17e8c5933p-582, 0.0, 0.0, 0x1.f3becc7aef3f7p-998, 0.0,
     0x1.763eeea80972dp-357, 0.0, 0x1.21d5812424d03p-804, 0.0, 0x1.44fafd05dff5fp-438,
     0x1.c64f28e380c62p-654, 0.0, 0x1.3f5f332117bcap-63, 0x1.8705197250c79p-77, 0.0,
     0x1.1458c3c621a2bp-1017, 0.0, 0.0, 0x1.dfc929512ca08p-869, 0.0,
     0x1.17ec6210982d5p-184, 0.0, 0.0, 0x1.47cac1291bde8p-637, 0.0, 0.0,
     0x1.a9a631fb534c9p-433, 0x1.4731b3055e3c5p-1001, 0x1.fb7a3b5a3575dp-418,
     0x1.46936a8589f8dp-637, 0x1.2873b674f224cp-949, 0.0, 0x1.0c9e958fd7c6ep-1002,
     0.0, 0.0, 0x1.8c80744766711p-422, 0.0, 0.0, 0.0, 0.0, 0x1.bd8702f1b7828p-484,
     0.0, 0x1.fb38b746da586p-767, 0x1.1a3eb4e091285p-888, 0.0, 0x1.435f306fda9b8p-125,
     0x1.91d28d88c0b29p-264, 0.0, 0x1.402140d416285p-196, 0.0, 0.0,
     0x1.bd15a0d76c1b7p-782, 0.0, 0x1.9ef23b3768c8p-168, 0.0, 0x1.5c2bbaa6b1be6p-966,
     0x1.07d9b11b13a5p-6, 0x1.3c165567fece3p-27, 0.0, 0.0, 0x1.e9c1f704060a2p-605,
     0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincospid1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincospid1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospid1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
