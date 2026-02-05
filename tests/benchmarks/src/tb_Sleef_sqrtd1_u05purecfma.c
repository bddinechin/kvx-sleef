/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd1_u05purecfma.c --function \
 *     Sleef_sqrtd1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ebdeb3be5ceeap-384, 0.0, 0.0, 0x1.8ab7cdcbfd5a2p-775,
     0x1.80f4cbe149816p-536, 0.0, 0.0, 0x1.eb3c07ce16337p-4, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.31aa4cdae277ap-830, 0x1.9eb953d928be8p-634, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f31c7eb158efap-518, 0x1.0027926749ca6p-938, 0x1.36915fb506fedp-37,
     0x1.2a3998d28cc64p-589, 0x1.0c474fef5abc3p-776, 0x1.0611e5b8a9013p-132,
     0x1.0cdbf5d6b245ep-122, 0x1.3d96a9fedf0dep-582, 0x1.8f4297273da9dp-250, 0.0, 0.0,
     0x1.2d616935a9205p-475, 0x1.e06a8538be6e9p-349, 0x1.8251b47a1eab7p-820,
     0x1.e0cf5e7038b2dp-840, 0x1.53facec975a49p-816, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5f094b9f2fd21p-246, 0.0, 0x1.3bd511d6e9adap-838, 0x1.46c5ea772e84p-661, 0.0,
     0x1.cb5f27a6040d2p-271, 0x1.b1c209c4ae08dp-262, 0.0, 0x1.8573418c2e7d4p-864,
     0x1.86fb10a207315p-247, 0x1.ff58e19c7159bp-390, 0x1.342c23518526bp-693, 0.0,
     0x1.402fa4a3cdd7ap-862, 0.0, 0.0, 0x1.0ebfd0fffe7b6p-221, 0.0,
     0x1.52022e344b4p-928, 0x1.32c086bcddfep-224, 0.0, 0.0, 0x1.a8aa08357c075p-448,
     0x1.85e73cdde266ap-308, 0.0, 0x1.cd3925c7c88a2p-375, 0x1.eb58c12447ae4p-285,
     0x1.60f2e6a6f50cdp-559, 0.0, 0x1.261c4b0d0d378p-583, 0x1.d0e2910438e9bp-582, 0.0,
     0x1.db09a43936cap-811, 0x1.3e0ffedc81b2fp-67, 0.0, 0.0, 0x1.b29dc2dd2e7eap-449,
     0x1.cf76effc7a7bap-540, 0.0, 0x1.fd4fa2eb59ac5p-835, 0x1.acd1a5ce4b2ffp-357, 0.0,
     0x1.559f784c5c3d7p-947, 0x1.4df2bbe65545ep-86, 0x1.f120d2b1124dap-574, 0.0, 0.0,
     0.0, 0x1.44916261d0987p-634, 0x1.c86718f8f55adp-1009, 0.0,
     0x1.3f0a652290af1p-833, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a050f8685efe1p-380,
     0.0, 0.0, 0x1.983d1f13ed96dp-923, 0.0, 0x1.9b6f2e2ed96ffp-520,
     0x1.9e40aa5f9fed8p-550, 0x1.3d7de89acbf7ap-926, 0x1.73901e26be58ep-733, 0.0,
     0x1.e9a9b4415ef58p-222, 0x1.a0a9d538ed3dep-573, 0.0, 0x1.beef99de87194p-770,
     0x1.570c9fda53337p-383, 0x1.c31c80d89e83dp-939, 0.0, 0.0, 0.0,
     0x1.931e3149cbcdap-776, 0.0, 0x1.2adf25c0ba625p-542, 0x1.c660a7b79a236p-685, 0.0,
     0.0, 0.0, 0x1.531ce7e71cf16p-744, 0.0, 0x1.63b76038848d7p-1022, 0.0,
     0x1.ce5ca17a2403fp-566, 0x1.66b3ac8b43c84p-846, 0x1.8c81e5e1ff6c5p-890,
     0x1.ea3faf0fb0ca9p-20, 0x1.df1221264c09bp-792, 0x1.a2961589c0845p-427, 0.0,
     0x1.8311fcbec740ep-771, 0.0, 0.0, 0.0, 0x1.5a3f115d78147p-437,
     0x1.8b9a379271bb8p-829, 0x1.af909ad72a3edp-889, 0.0, 0x1.bc069cc44ac4ap-169, 0.0,
     0.0, 0x1.da306e4708092p-975, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b28ff5bae6bf4p-232,
     0x1.620f201bbb711p-448, 0.0, 0.0, 0x1.8146ebb5e1266p-200, 0.0,
     0x1.51bd5bcf0a807p-972, 0.0, 0x1.b0bdb13a36a33p-166, 0.0, 0x1.5202ac0c4b91bp-527,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df7287316e18dp-399, 0.0,
     0x1.30917939253a2p-567, 0.0, 0.0, 0x1.68da294ba7121p-602, 0.0, 0.0, 0.0, 0.0,
     0x1.2c79d4dfc0ab1p-640, 0.0, 0.0, 0x1.76f71fb716b11p-636, 0x1.871d27984bc8fp-6,
     0x1.2d3a085be1efep-393, 0x1.3be3dc4eba7fbp-664, 0x1.454537b5ef67ep-111, 0.0, 0.0,
     0x1.0ee90b8bec80fp-210, 0x1.5b964d0d828d6p-279, 0.0, 0.0, 0x1.6f9e75a1115d3p-921,
     0.0, 0.0, 0.0, 0x1.6a286d0acb32bp-626, 0x1.bef96a8525644p-50, 0.0,
     0x1.0f02cca0744abp-302, 0.0, 0x1.bf5cfb22ffacp-456, 0.0, 0x1.16961d7c28802p-179,
     0x1.8f33411d9ddfdp-563, 0.0, 0.0, 0x1.836fe1a6df49p-393, 0x1.e887e261db209p-61,
     0.0, 0.0, 0.0, 0.0, 0x1.506728368a7a6p-1021, 0.0, 0.0, 0x1.af0367e748b9dp-510,
     0.0, 0.0, 0x1.46d50d602a799p-319, 0x1.97887774f4679p-663, 0.0,
     0x1.5e80e7c264825p-805, 0x1.40ef405618c6ap-925, 0.0, 0.0, 0x1.7a5f10fc787e6p-958,
     0x1.ec72e083574a3p-1013, 0x1.7dde1f859cefdp-36, 0x1.9c15dfb975cdcp-981, 0.0,
     0x1.27b9ba5d35227p-900, 0x1.4448c3499f556p-326, 0x1.d7357c715280dp-781,
     0x1.05aeefef1feeap-327, 0x1.e27f498697118p-959, 0x1.e5be60e1da521p-875,
     0x1.fb1869e8e1f4cp-693, 0x1.ed8e92cacccd8p-446, 0.0, 0x1.64d1a084e8c0cp-87, 0.0,
     0x1.1e4ce0cda6cbcp-976, 0x1.aac25ca309f62p-501, 0x1.5377d36b3b57cp-989,
     0x1.9876ce00f39bp-783, 0x1.6d74c2c138d58p-1016, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5f057d8aee12bp-261, 0x1.ac7740feb9258p-966, 0x1.a4b4e39b27c1p-74,
     0x1.e35e3fbce187bp-29, 0x1.8574d2b70ddddp-806, 0.0, 0x1.718903042c8dfp-118, 0.0,
     0.0, 0.0, 0x1.e1a7c87472ccp-628, 0x1.d74a123556793p-416, 0x1.af06aa51cc41fp-314,
     0.0, 0.0, 0x1.1f6adf88cd4bdp-534, 0x1.ad2620d801933p-159, 0x1.215ff708fcbdap-330,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f96b6e7722a3bp-834, 0.0, 0x1.2a009b8217867p-695,
     0.0, 0.0, 0.0, 0x1.f645523e36decp-705, 0x1.8666f758b6d0bp-168,
     0x1.4429c3e446e9p-603, 0x1.c533b32baf86p-263, 0.0, 0x1.4edb46e0672d7p-869,
     0x1.018a96a7c52b5p-47, 0.0, 0.0, 0.0, 0.0, 0x1.94400cd9915a9p-109, 0.0,
     0x1.19c59d2d870b8p-988, 0.0, 0x1.e7275b96fbf3dp-297, 0x1.249a927a1005p-567, 0.0,
     0x1.18fda940a6bc9p-144, 0x1.e8424b2feaa97p-588, 0.0, 0.0, 0.0,
     0x1.96cba6a28396p-970, 0x1.9c74b9b247a6fp-865, 0.0, 0x1.a989ab7d07fe9p-519,
     0x1.02a85844c8ba7p-662, 0x1.f152b494e27f6p-555, 0x1.d1dcf89fb6dafp-398, 0.0,
     0x1.9b30ecb08c0d3p-439, 0x1.ec1eea25ff2fp-545, 0.0, 0x1.3f58962ae2e16p-173, 0.0,
     0x1.ab8cdc7046dcfp-519, 0x1.3456d99f3b394p-485, 0.0, 0.0, 0.0,
     0x1.f32d05e32abacp-304, 0.0, 0x1.471ea14f53e4p-589, 0x1.9a496d4f4fc73p-352, 0.0,
     0.0, 0.0, 0x1.2bca05eef428p-49, 0.0, 0x1.42a6e5059c092p-458,
     0x1.135c3b125396ep-1001, 0x1.f728f43496ce6p-280, 0.0, 0x1.011d92d74f481p-170,
     0.0, 0.0, 0x1.dd970e62dbe4cp-319, 0.0, 0x1.1fee383e1702cp-201,
     0x1.38507937bb4d7p-272, 0x1.20b003dd91c9p-140, 0x1.d7c316b59e34ap-12,
     0x1.3f6a3c62e49bep-678, 0.0, 0.0, 0.0, 0x1.7166d34acb844p-90,
     0x1.e1562aa6be5b8p-642, 0.0, 0x1.c2941f96272ap-78, 0x1.f22d041dcb535p-990, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5bac1ea7669d6p-841, 0.0, 0.0, 0.0,
     0x1.119489a2e060ep-911, 0x1.c4195b14ebab5p-644, 0.0, 0.0, 0.0,
     0x1.ea51837cd6c5dp-230, 0.0, 0.0, 0.0, 0.0, 0x1.5b558a28d2f3ap-554, 0.0,
     0x1.46f18299266b5p-305, 0x1.f87ea6b48cb91p-1010, 0.0, 0x1.4a0290a3e940ep-969,
     0.0, 0x1.21b725f226709p-18, 0x1.870ddc54adddap-274, 0x1.fbb099a51e237p-914,
     0x1.662daed161d23p-291, 0.0, 0x1.25ba119f01fbcp-48, 0x1.98d26c018e5dp-269, 0.0,
     0.0, 0.0, 0x1.04c57a7fef682p-246, 0.0, 0.0, 0x1.23d5719ff3fbep-266,
     0x1.80ed8ee3a2d02p-688, 0.0, 0x1.8b73cda8a3a2ap-192, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d995985382bf7p-204, 0x1.a23c6641a3e69p-177, 0.0, 0.0, 0.0,
     0x1.77cae73bd9ad4p-250, 0x1.2302e1d320d3dp-127, 0.0, 0.0, 0x1.69d8b726e1a9ep-163,
     0.0, 0.0, 0x1.4a12af16d9bf8p-888, 0x1.9d54383be0024p-942, 0.0,
     0x1.1cdcaf9eec1e6p-34, 0x1.59da17537732fp-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cc9cd50c31278p-991, 0.0, 0x1.7a163208a81bep-553, 0x1.75c3167eafbb4p-136,
     0x1.3139d279992c3p-564, 0.0, 0.0, 0x1.21973154c551fp-646, 0.0,
     0x1.2c2417c4de626p-546, 0x1.33cf98dcc70ccp-632, 0.0, 0.0, 0x1.12860f0b573bdp-58,
     0x1.f1cf2c391584dp-223, 0x1.244a6a059b474p-463, 0.0, 0.0, 0x1.7c57756dea478p-293,
     0x1.9d5d40db42ec9p-359, 0x1.02cd987a64274p-656, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9d73dd204df91p-374, 0.0, 0x1.4795764bcdea6p-438, 0.0, 0.0,
     0x1.951fff62c4dcep-533, 0x1.b661d5ff347fcp-756, 0x1.f3ba31650e376p-740,
     0x1.abd41ea9e031ap-180, 0.0, 0.0, 0.0, 0x1.e133989d475ep-712,
     0x1.45f6aef654a09p-882, 0.0, 0x1.9860752d01fa2p-378, 0x1.19a7df10ef45cp-534, 0.0,
     0.0, 0x1.d80fca683e0edp-742, 0.0, 0.0, 0x1.b45940e429112p-482, 0.0, 0.0, 0.0,
     0x1.1334738b1cee6p-194, 0x1.6581f1b3c1813p-426, 0.0, 0.0, 0x1.935753e254638p-258,
     0.0, 0.0, 0x1.80579dc314953p-861, 0.0, 0x1.bea1d592c55f2p-356, 0.0,
     0x1.9b044fc3e6aa1p-887, 0x1.c7ddbffc99dfep-152, 0.0, 0.0, 0.0,
     0x1.eb08ce36f5abap-466, 0.0, 0x1.29d0d1f27431fp-987, 0.0, 0x1.673f935c09dbep-28,
     0.0, 0x1.eaa77d4dca28p-707, 0x1.8826023b9e5aap-500, 0.0, 0.0,
     0x1.ed4ffcdd912cfp-362, 0x1.0753cccaa4ab6p-654, 0x1.8e147022d3871p-766,
     0x1.debc252207699p-714, 0x1.5fe8e1fcfe042p-854, 0.0, 0.0, 0.0, 0.0,
     0x1.745442f1bc35cp-197, 0x1.2e153cf2466eap-208, 0.0, 0x1.3479821117877p-413, 0.0,
     0x1.34a5bf5df3ecp-363, 0x1.f5b883e89030fp-719, 0x1.ff0fb01107eb4p-557,
     0x1.3a2a68c95b528p-615, 0x1.de9a720c103a8p-653, 0x1.7af2c280b3cap-115, 0.0, 0.0,
     0x1.b1dcf95fd9ac6p-936, 0x1.a3e06f21895f5p-542, 0.0, 0.0, 0x1.4928229359cbp-1015,
     0x1.e1fef42b18739p-815, 0x1.abdb5d3ca0a13p-91, 0x1.1878e03375512p-335,
     0x1.c3d64f0d296e5p-138, 0x1.2350d3fbfaaf1p-68, 0.0, 0.0, 0x1.47cb9e1131365p-792,
     0.0, 0x1.e1cc8eaeb3fa5p-438, 0.0, 0x1.7c7afff6e8ecp-572, 0.0, 0.0, 0.0, 0.0,
     0x1.eb2a7c19f799ap-160, 0x1.792ed37e960d8p-680, 0.0, 0x1.34a04e212fa03p-331, 0.0,
     0.0, 0.0, 0x1.59d0ad1d9c2b4p-923, 0x1.f331be9958e6bp-834, 0.0,
     0x1.a1eba67deba31p-341, 0.0, 0.0, 0x1.69377f806c8acp-826, 0.0,
     0x1.977cb41f5aca2p-470, 0x1.13922a48e63eep-556, 0.0, 0x1.62e49e929ee48p-822,
     0x1.b7eef57636ec5p-165, 0.0, 0x1.ca0b835dc7601p-670, 0x1.9de02b41b78e6p-215,
     0x1.07e1ec3d58424p-481, 0x1.e0e3f342614fbp-606, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bd0ab24c164a1p-547, 0.0, 0x1.a690f3b01c587p-679,
     0x1.4ed9b2a89d10bp-494, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99ebe23ff42bfp-86, 0.0,
     0x1.6f89e30e78323p-687, 0x1.9cee31d43b5cap-913, 0.0, 0x1.4a62c32f3bdb1p-486,
     0x1.82a2f50885654p-459, 0x1.0c47c2da882e9p-182, 0x1.1730d63ab5edap-883,
     0x1.f02d6c7723a95p-182, 0x1.86d020f2d915dp-26, 0.0, 0x1.cedbcaa48a50cp-428,
     0x1.af266f564bacfp-946, 0.0, 0x1.062c91b958cf8p-405, 0x1.adc3d115db779p-1015,
     0x1.ba50f8b47cd06p-55, 0.0, 0x1.f759a3075b045p-411, 0x1.5e4b8cc9778a6p-665, 0.0,
     0.0, 0x1.5b7711e122504p-427, 0x1.864907711d80fp-526, 0.0, 0.0, 0.0,
     0x1.3998612eb2122p-105, 0x1.665a4cfc72bc8p-259, 0.0, 0x1.db0cdedf3f145p-705,
     0x1.b9feaae55c695p-362, 0.0, 0.0, 0.0, 0.0, 0x1.283bb0137bffap-47, 0.0, 0.0,
     0x1.d27fa94584baap-707, 0.0, 0.0, 0x1.c19d592ca0fc7p-997, 0.0,
     0x1.9f12fa1d3b326p-607, 0x1.f3e0f482620b9p-99, 0.0, 0x1.adf43a90107b5p-765,
     0x1.bdfc8c0f9ef9bp-256, 0.0, 0x1.63da75305ebbap-135, 0.0, 0.0,
     0x1.2ec7468fbe60fp-138, 0.0, 0.0, 0x1.78988f31b88f9p-395, 0x1.ac9579afe17c6p-867,
     0.0, 0.0, 0x1.7b1627647c9d3p-880, 0.0, 0.0, 0x1.478b224ef415fp-210,
     0x1.6695303e3d548p-35, 0x1.870d1f08103b7p-910, 0.0, 0.0, 0x1.0ba6c139585ebp-13,
     0.0, 0x1.66b79b0a3cc91p-290, 0x1.a348c9fda7575p-443, 0x1.aa471650373c6p-691, 0.0,
     0.0, 0x1.7a5c51a8b5ea9p-636, 0.0, 0.0, 0x1.26612e1e714p-534, 0.0,
     0x1.367d26c4f1745p-721, 0.0, 0.0, 0x1.2b6259ed3209dp-704, 0x1.88ecaadc5602bp-571,
     0x1.317ce1724b268p-221, 0x1.ef492763abaa9p-71, 0.0, 0.0, 0.0,
     0x1.b38fed56b2c0cp-279, 0x1.ab9e902364838p-638, 0x1.1c214a057d7e9p-566, 0.0, 0.0,
     0x1.e54da9dbc80d8p-388, 0x1.ecd2b5cf2b3d1p-131, 0x1.c9747e8aa0c2dp-38,
     0x1.53d592ef9749bp-678, 0.0, 0.0, 0x1.dc1a827a3e23ap-205, 0x1.49e696c89be08p-320,
     0x1.b21f79658513p-263, 0.0, 0x1.bf02b365c1f7fp-8, 0.0, 0x1.693c120e16b3bp-534,
     0.0, 0x1.5865a58b04dffp-219, 0.0, 0x1.c4da1582b1bd5p-41, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9ba270ffb59cfp-809, 0x1.b892dc2bd2693p-151, 0x1.db33cde21f985p-542, 0.0,
     0.0, 0x1.669e19ada77afp-322, 0x1.5ffe312cd57e4p-42, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e8b5147efb65ap-67, 0x1.00a9571227d19p-314, 0.0, 0.0, 0x1.9f260b1070a37p-63,
     0x1.2f6a7a38c12f4p-11, 0.0, 0.0, 0.0, 0x1.f5bb0f0666669p-895,
     0x1.63562cbe0bd78p-66, 0.0, 0x1.d0d8c1453ea2bp-983, 0x1.76f6980de7b7ep-692,
     0x1.17c97b144cc38p-761, 0x1.bce8bc5942b71p-229, 0.0, 0.0, 0x1.d746b0cb430adp-371,
     0x1.928c76b3a396cp-864, 0x1.4b1b3ef62b6f5p-823, 0x1.c60df1ca6134fp-662,
     0x1.560212d63db5fp-276, 0.0, 0x1.803c1c7a122e6p-500, 0x1.beb2fd4a3ec56p-588, 0.0,
     0x1.b03c428a23d08p-366, 0x1.2056a8c2c24ffp-363, 0.0, 0.0, 0x1.246f279f0b17p-118,
     0.0, 0.0, 0x1.f903c5e719e12p-236, 0.0, 0.0, 0x1.d219854cfc6dp-549,
     0x1.e4df2063ba4b4p-692, 0.0, 0.0, 0.0, 0.0, 0x1.80918875d63eap-163,
     0x1.48f74349d56e8p-434, 0x1.74bb649e9ea5cp-282, 0x1.65cdb5e2f5852p-549, 0.0,
     0x1.d548795156272p-644, 0.0, 0x1.38fea94676831p-68, 0x1.3746b76da07cdp-581,
     0x1.436bc5d8363dep-983, 0.0, 0.0, 0x1.8cc34f75988c9p-680, 0x1.271628017f49fp-359,
     0x1.2619d8e153091p-735, 0.0, 0x1.e8f01a974b08ep-990, 0x1.f5e5524be9e85p-981, 0.0,
     0x1.3f871ae930938p-701, 0x1.bf8358db4ee69p-649, 0.0, 0.0, 0x1.b1168fa654749p-83,
     0x1.82fe4a601e035p-206, 0.0, 0.0, 0x1.34ff54541cd19p-503, 0.0, 0.0,
     0x1.9db14be84aaf7p-973, 0x1.4a4f3cd847059p-445, 0x1.46ec97afbdc77p-454,
     0x1.294149ee29d31p-10, 0x1.64bdad404d1d5p-156, 0.0, 0.0, 0x1.09be2da331618p-998,
     0.0, 0x1.3dedf37298aep-896, 0.0, 0.0, 0x1.0c1c2098a2ed3p-124, 0.0, 0.0, 0.0,
     0x1.caea3437b2a27p-645, 0.0, 0x1.01e571907040ep-375, 0.0, 0.0,
     0x1.7c9d7cc8d13ddp-311, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d988c35fe561bp-918,
     0x1.5f63d04fa7d4p-47, 0x1.0002d6e0396c1p-724, 0x1.6e0dede90b80bp-255,
     0x1.e81e5779ff128p-765, 0.0, 0x1.6e2cd7f0df06cp-431, 0x1.d041482dad21ap-337, 0.0,
     0x1.417478bcf1e02p-309, 0x1.004e607474253p-448, 0.0, 0x1.419bb457538f7p-330, 0.0,
     0.0, 0.0, 0x1.08e2d664b4f95p-952, 0.0, 0x1.5c6a6c4ff644bp-161,
     0x1.c15945573d61ep-1022, 0x1.2340b19851b39p-518, 0x1.681ae77651b1ep-112,
     0x1.95a47eddeb40cp-757, 0.0, 0x1.fa8fde0215bc1p-383, 0x1.240df61448f23p-422, 0.0,
     0x1.ecc7bf548ca5ep-883, 0x1.e61d406a06cefp-198, 0.0, 0x1.0b0afbfd4da68p-214,
     0x1.d9f6e7b2e5b76p-492, 0.0, 0.0, 0.0, 0.0, 0x1.949ce85ee82f4p-616, 0.0,
     0x1.362ea56e3951fp-489, 0x1.93fefad1968ccp-722, 0x1.c33458dea4c33p-459, 0.0, 0.0,
     0.0, 0x1.343f5b06c65dcp-640, 0.0, 0.0, 0.0, 0x1.9423087201d45p-58, 0.0, 0.0,
     0x1.666ef7bc9da27p-385, 0.0, 0x1.de406a32e9faap-991, 0.0, 0.0, 0.0,
     0x1.1f953519e04bdp-103, 0x1.a767205bd3b27p-437, 0.0, 0x1.32aaee40cac6dp-317,
     0x1.c1545b4b0b2ep-817, 0.0, 0.0, 0x1.1a24f24d49fa6p-465, 0x1.2d23a1d21e73p-599,
     0.0, 0x1.34ebc29b0af8p-586, 0x1.00162b6a53a6ep-306, 0.0, 0.0,
     0x1.63f63d4eedfc4p-34, 0x1.ba35c1d4db485p-492, 0x1.f23f08b1a2938p-370, 0.0, 0.0,
     0.0, 0.0, 0x1.6eaa2ad591147p-380, 0.0, 0.0, 0.0, 0x1.aaf6cec1e45b3p-809, 0.0,
     0.0, 0x1.50937e820cad1p-855, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d1112204b39ccp-1018, 0.0, 0.0, 0x1.fbdccc21d469cp-192, 0.0, 0.0,
     0x1.a57410d6df9bfp-564, 0.0, 0.0, 0x1.96f53e2658dap-346, 0x1.e412946de50d2p-738,
     0.0, 0.0, 0.0, 0.0, 0x1.2a9ee9ca834e4p-274, 0x1.2918caa46b708p-804,
     0x1.5cb8635f666f8p-392, 0x1.0c4ca4cc599fp-820, 0.0, 0.0, 0x1.3ec6df33a2a2fp-521,
     0x1.44fabf3c2ee2cp-358, 0.0, 0.0, 0x1.e8a0bb09c9fd6p-726, 0.0,
     0x1.86f2e36362638p-714, 0x1.be85ac89cc2dbp-60, 0x1.85dfd6c3eaf59p-640, 0.0,
     0x1.223ed60f4a67p-950, 0x1.98a7c2ced8ebfp-92, 0.0, 0.0, 0x1.156b7382b90dap-582,
     0x1.63373fd816accp-619, 0x1.7860592555bdap-759, 0.0, 0x1.1477a26af134ep-180,
     0x1.e85d2ee46451p-242, 0.0, 0x1.fb13a19e48e1fp-201, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7f231f1916e08p-988, 0.0, 0x1.3da8996a7d8bep-671, 0x1.63242c5c1db28p-540,
     0x1.f985d544d6e51p-791, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f29084f46e941p-310,
     0x1.3d414f01d303p-603, 0x1.7d991c10f492ep-270, 0x1.8d04eb5cdba8dp-570,
     0x1.68f24fcb16fe9p-465, 0.0, 0.0, 0.0, 0.0, 0x1.54a3806bbe52p-498, 0.0, 0.0,
     0x1.b8b89166917b2p-607, 0.0, 0.0, 0x1.cf9517bca0f61p-767, 0x1.d68263c18746cp-329,
     0x1.984395de45428p-445, 0.0, 0x1.367d3aa67b8acp-767, 0x1.deb33c5ce2a46p-687, 0.0,
     0.0, 0.0
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
            tmp1 = Sleef_sqrtd1_u05purecfma(tmp0);
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
    printf("Sleef_sqrtd1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtd1_u05purecfma bench acc %la\n", global_bench_acc);
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
