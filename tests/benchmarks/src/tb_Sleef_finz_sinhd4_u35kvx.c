/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd4_u35kvx.c --function \
 *     Sleef_finz_sinhd4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.3cb804b22f5adp-716, 0.0, 0.0, 0.0, 0x1.4b2cabe1367e7p-907, 0.0,
     0x1.23f3eeda64c8cp-875, 0x1.304b055077595p-41, 0x1.69cb82c2f6397p-758, 0.0, 0.0,
     0.0, 0x1.59445b20f0e81p-970, 0x1.5018d56039e94p-403, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c30736cf397e5p-424, 0x1.f3c0314683fe2p-965, 0.0, 0.0, 0.0,
     0x1.80b01d3688069p-448, 0.0, 0x1.e8a7e0d8f5f17p-49, 0x1.3d990e2dfd102p-457, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.afbdad7ca9f2cp-336, 0.0, 0.0, 0.0, 0x1.b50f272df6095p-49,
     0.0, 0.0, 0x1.444cbbe2e4a11p-807, 0x1.34c39ca4899dep-614, 0.0,
     0x1.f39769d7de074p-743, 0x1.32a6507ae9311p-265, 0.0, 0x1.df415ce32a303p-854, 0.0,
     0.0, 0x1.280f96e52c362p-98, 0x1.bbcd3e4a4b9b9p-398, 0x1.55cb8fdb55ef4p-675,
     0x1.f4443a90a8c09p-468, 0x1.8328c622c7ae6p-88, 0.0, 0x1.8add4f58b9c03p-824,
     0x1.59221372d161dp-499, 0x1.3cf316803fd6ep-384, 0.0, 0x1.b75d3be1361b6p-77,
     0x1.15e754a3d2ffep-691, 0.0, 0x1.35e1e9152c108p-229, 0x1.f7969cd8ab163p-135,
     0x1p0, 0.0, 0x1.93ebd7919d558p-408, 0x1.a2aeef2d920f6p-578,
     0x1.ebffc99a4c6cfp-315, 0.0, 0.0, 0x1.0fd14ab789c93p-819, 0x1.42fc1c0c4c0fbp-31,
     0x1.dd490e0ccf877p-567, 0x1.22c2834a429e3p-123, 0.0, 0.0, 0.0, 0.0,
     0x1.89e6afea7bb59p-501, 0x1.d2ba178df6167p-485, 0.0, 0.0, 0.0,
     0x1.871ac74e1803ep-583, 0.0, 0x1.dabc5da44d6dcp-98, 0.0, 0x1.c11ef6ff813cp-503,
     0x1.2099b896ea9c4p-219, 0.0, 0.0, 0x1.894df47d27717p-2, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7dae5698d4927p-386, 0.0, 0.0, 0x1.327633923d1c6p-47, 0.0,
     0x1.5a87a69a6a377p-567, 0.0, 0x1.6b17a2f495769p-396, 0x1.d9fafa0969cd9p-312,
     0x1.5846df1269f5fp-702, 0x1.37e528b9cd79ep-815, 0x1.5a9cdccd0e2fep-520,
     0x1.06778b4714abp-446, 0.0, 0.0, 0.0, 0x1.929f8821b93e4p-898, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6b44563d0bf9p-519, 0x1.534930a14f5b7p-1000, 0.0, 0x1.1db14e10d4f81p-702,
     0x1.391d83177aca2p-554, 0x1.ca293ccc284c9p-930, 0.0, 0x1.9c747b02aba8bp-620,
     0x1.7405ef79d8ea2p-497, 0x1.78b8a59f32435p-124, 0x1.84e2b23fac382p-236,
     0x1.e539d145bcd96p-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55255ed95e11dp-946,
     0x1.91cabc26fc517p-1000, 0.0, 0.0, 0x1.d94912b72905cp-134,
     0x1.aa534251b44f3p-286, 0x1.26b5b17ba9c18p-731, 0x1.0cf5449c3f235p-834,
     0x1.c6f2bf8d80031p-417, 0.0, 0.0, 0x1.f968b5f575168p-948, 0.0,
     0x1.8c9069d221e92p-268, 0x1.90f0ddae2e435p-552, 0x1.fbd474cda9662p-102,
     0x1.5ba96f501c726p-1014, 0x1.3dcb5c35f9fd3p-312, 0.0, 0.0, 0.0,
     0x1.a1ded1ba48079p-419, 0.0, 0x1.21c4c7c4c8451p-825, 0.0, 0x1.a30cace6a9548p-937,
     0x1.180942b3f71b3p-224, 0.0, 0x1.fc50e9a80802dp-290, 0.0, 0x1.042ae2586955p-338,
     0.0, 0.0, 0.0, 0.0, 0x1.9f36726115debp-56, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4c987008263dfp-721, 0.0, 0x1.429ce6c0db0e1p-808, 0x1.8563bba221c25p-491,
     0.0, 0.0, 0x1.1d3e77dfc36e3p-477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7796e32e252a1p-114, 0x1.373b5170a2abcp-585, 0x1.861282afa039p-475, 0.0, 0.0,
     0x1.9f605ee9b3e7p-867, 0x1.1f82213093a69p-473, 0x1.5d908200ae13dp-867, 0.0, 0.0,
     0.0, 0x1.de5e4c878b13dp-247, 0.0, 0.0, 0x1.bd9799d8e1d37p-346,
     0x1.c9f92a0eabb7cp-128, 0.0, 0.0, 0.0, 0x1.c4fcf7b5399ep-98,
     0x1.0ace87a6cc4a4p-342, 0x1.8b1957bb5debdp-829, 0x1.819276b261525p-89, 0.0, 0.0,
     0x1.1de254c72d3f2p-817, 0x1.86b25ef00b341p-669, 0x1.632b41fd9fe27p-514, 0.0, 0.0,
     0.0, 0x1.c812e62626652p-213, 0.0, 0x1.3bbb1545c8a7fp-288, 0.0, 0.0, 0.0,
     0x1.36f09d0cf107p-275, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c345101c5900dp-253, 0.0, 0.0,
     0x1.783355485913fp-360, 0.0, 0x1.569d28e7b8536p-128, 0.0, 0.0, 0.0,
     0x1.8048db62a90fap-572, 0.0, 0x1.db1b305b1e19p-845, 0.0, 0x1.c92af11a75a0cp-694,
     0x1.5baaed6574395p-668, 0.0, 0.0, 0.0, 0.0, 0x1.df389e393989fp-645, 0.0, 0.0,
     0x1.6049f606e5365p-536, 0x1.a370de1aea296p-184, 0.0, 0.0, 0x1.7a07ea45c63c7p-595,
     0.0, 0x1.e617bca2dbb31p-171, 0.0, 0.0, 0.0, 0x1.d81f8a6a22f97p-94,
     0x1.53f0b67b34c3cp-382, 0.0, 0x1.d8aed5cf5f985p-443, 0.0, 0x1.eb92872d70174p-637,
     0x1.267a43748feb2p-712, 0.0, 0x1.18bec71003441p-749, 0x1.e4b9be2dd7474p-111, 0.0,
     0.0, 0x1.bc82ef4a2da17p-618, 0.0, 0x1.f4d0be705e1bcp-743, 0.0, 0.0,
     0x1.5a6c5b5a65933p-165, 0x1.fbb5c5e925e02p-699, 0.0, 0x1.57c751ff410eep-403, 0.0,
     0x1.b96e40deb29aep-563, 0.0, 0x1.d9dc8808dccf2p-660, 0x1.2a01390cd86p-211, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4bc6eae9a3c75p-530,
     0x1.06e3e87ace4c1p-108, 0.0, 0x1.e1216808c29a5p-828, 0x1.098c7e4217f65p-825,
     0x1.8f8cc36751a2p-649, 0x1.df66c47abfa66p-482, 0.0, 0x1.bd7edfae342b3p-148, 0.0,
     0x1.52fb0fa88cedcp-45, 0.0, 0.0, 0x1.f88ffe0451c1p-177, 0x1.8421b9c600944p-451,
     0x1.5e39b78994ae7p-451, 0x1.4c19effaa980fp-213, 0.0, 0.0, 0x1.85d893ff0f55dp-352,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aceac520110a3p-189, 0.0,
     0x1.fdcdbd965a799p-854, 0x1.6c1ed8096d7c9p-897, 0x1.94b3a25a5565bp-301,
     0x1.853a43f7442c8p-985, 0.0, 0x1.3204fec08d1bap-499, 0.0, 0.0, 0.0, 0.0,
     0x1.88e0f21ee1fe5p-227, 0x1.2172f2e710d7bp-419, 0.0, 0.0, 0x1.e67535edc4dd7p-483,
     0.0, 0x1.2b86225908969p-860, 0x1.a13ee4d75a65bp-876, 0x1.5cfcfd928ece4p-619,
     0x1.a730b2829eec5p-455, 0.0, 0.0, 0.0, 0x1.1bdafd51ae356p-124, 0.0,
     0x1.a1fc809c4b1bp-951, 0.0, 0x1.6498bc07bc44ep-416, 0.0, 0x1.49b27198fa479p-350,
     0x1.618c568bc347fp-71, 0.0, 0x1.a4b219f22fbcep-327, 0x1.4b4493dd9ab13p-793, 0.0,
     0x1.98be978d26b45p-922, 0.0, 0x1.60e9a588d8d68p-358, 0.0, 0x1.2cde1c65e72f5p-648,
     0x1.698b0d43cc103p-311, 0.0, 0.0, 0.0, 0x1.fa521cbfda20dp-623,
     0x1.782917899be0bp-718, 0x1.9797df6b918b7p-935, 0x1.7fcd92431aa0fp-768, 0.0,
     0x1.97c6e5f4cc15dp-854, 0x1.1878a8cf4364cp-79, 0.0, 0.0, 0.0,
     0x1.238b3f77fefeep-70, 0.0, 0.0, 0x1.74a094cb9c766p-307, 0.0,
     0x1.1ecda5b737beep-137, 0.0, 0.0, 0x1.84a2750073176p-599, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.766dc6f6d2587p-781, 0x1.59bd1729bae51p-876, 0.0,
     0x1.8435e8d9c48aap-557, 0x1.b20314288c2ecp-938, 0x1.39cc554cf82dp-696, 0.0,
     0x1.4eaeabb65b999p-964, 0.0, 0x1.29cb1019c86a5p-823, 0.0, 0.0,
     0x1.fa8222cc18e62p-750, 0.0, 0x1.092d13c1af02p-620, 0.0, 0.0,
     0x1.e6b41d7608ee1p-839, 0.0, 0.0, 0x1.68a8933ec860dp-784, 0.0, 0.0, 0.0,
     0x1.7e90caf119eb2p-261, 0x1.a7eca3ca7f2eep-128, 0.0, 0.0, 0x1.0704ce365308bp-651,
     0x1.e64b2af289372p-298, 0.0, 0x1.af1486393501bp-518, 0.0, 0x1.2a9734ad54af3p-717,
     0.0, 0x1.0d8bf36a57cdep-477, 0.0, 0.0, 0x1.fac2ef66b0afap-676,
     0x1.a25d21fc810e4p-499, 0.0, 0.0, 0.0, 0.0, 0x1.b1a981bf82131p-776, 0.0,
     0x1.85b099fc9948ep-327, 0x1.1a107b0cdaeecp-768, 0.0, 0.0, 0.0,
     0x1.0115af7d53605p-116, 0x1.df2c852c47f72p-389, 0x1.1893e7b709302p-540,
     0x1.af223d276704ep-859, 0x1.c723384e7a668p-378, 0x1.08c5621413126p-532,
     0x1.f0ef415ff6ae3p-252, 0.0, 0.0, 0.0, 0.0, 0x1.e4cda206d61d7p-609,
     0x1.69bf30fdd3368p-12, 0.0, 0.0, 0.0, 0.0, 0x1.57dc649bab2aap-224,
     0x1.6771036f6887ep-248, 0.0, 0.0, 0x1.3e566b79e794bp-435, 0.0, 0.0,
     0x1.00c7ac84340bbp-373, 0.0, 0.0, 0.0, 0.0, 0x1.4ad5def5e0d73p-495, 0.0,
     0x1.b6817dd05e1dfp-870, 0.0, 0x1.6b529db901e3bp-740, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.19ed346dc240ep-847, 0.0, 0.0, 0x1.11b1b76244f73p-828,
     0x1.65477384802dbp-179, 0.0, 0x1.229084f605037p-20, 0x1.8c4658320af01p-562, 0.0,
     0x1.7b5a54bab2c87p-741, 0.0, 0x1.bac0ebe70254p-438, 0.0, 0.0,
     0x1.108ea79df4711p-1009, 0x1.1cc687e86036ap-438, 0x1.1302de0341cp-988,
     0x1.a256f02020e91p-150, 0x1.0e2cc1d8e9972p-262, 0.0, 0x1.67ef6ca6581dcp-268,
     0x1.e42f805d6ed29p-39, 0x1.ab8038ab7d4e2p-528, 0.0, 0.0, 0x1.25e692e123efap-725,
     0.0, 0.0, 0x1.e28f40047d1aep-66, 0.0, 0.0, 0x1.a3cef3791d147p-706,
     0x1.a9f73ac18aeedp-369, 0x1.ec73f325e6e92p-68, 0.0, 0x1.e3cf83cd07fd9p-842, 0.0,
     0.0, 0x1.d54b6e54a90f8p-716, 0.0, 0x1.d2e0af816c62fp-1013, 0.0,
     0x1.3cf553a1a1f2dp-453, 0.0, 0x1.967712bccb38cp-975, 0.0, 0.0, 0.0,
     0x1.56e876e237ad4p-261, 0x1.1def1064e923dp-860, 0.0, 0x1.6e676a3b45da3p-983, 0.0,
     0.0, 0.0, 0x1.bb0641efd278cp-573, 0x1.670ad8b7a763dp-657, 0x1.340b1f268ba14p-876,
     0.0, 0.0, 0.0, 0x1.d7edf8040689dp-875, 0.0, 0x1.ba9028d7c1d9ep-758,
     0x1.fd6490fb37a26p-307, 0x1.80e077ccb471cp-942, 0x1.d910fd1525b97p-46, 0.0, 0.0,
     0x1.abb64d4e86224p-96, 0.0, 0x1.45e54af1a59abp-288, 0.0, 0x1.487f2a63537ebp-747,
     0.0, 0x1.fb47924a30b73p-692, 0.0, 0.0, 0.0, 0x1.162433616668bp-855, 0.0,
     0x1.ad7174d4734e8p-766, 0x1.2ae2bd9fa9d5bp-766, 0x1.add0b8f1de5c1p-813,
     0x1.d23d5d173de35p-390, 0x1.2f41073535fap-126, 0x1.4cc0f1f12439ep-610,
     0x1.b452ad44bf3eep-550, 0x1.5aab0c482ea7dp-234, 0x1.ed290ea6f558ap-1011, 0.0,
     0x1.6d7ac0dc76ba9p-286, 0x1.68c38f51bd4bep-608, 0.0, 0.0, 0x1.43d7d39f7d219p-562,
     0.0, 0x1.0334279fca47ap-305, 0x1.a78671411e553p-356, 0x1.8e89d6b796426p-983, 0.0,
     0.0, 0x1.2a4cd974fee44p-734, 0x1.8f960a576eacdp-667, 0x1.7342883606776p-406,
     0x1.df48985c3ca03p-499, 0x1.f44019e0cd31dp-168, 0x1.fcdc244345c8dp-460,
     0x1.f0cc37eb4c3cbp-632, 0x1.4b5939f7a965ep-80, 0.0, 0x1.edcbb20a55cc9p-673, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.74bca5f0ad59ap-749, 0x1.627f9cf22ea53p-390,
     0x1.7bec37497de5bp-880, 0.0, 0.0, 0x1.90b0c289ff09dp-97, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.69d8bb127ea19p-640, 0x1.9f14dbfbe0ddbp-807,
     0x1.1c2b2602ecb75p-293, 0x1.7f8e69002d50bp-588, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35ab1c7d8d74bp-211, 0.0, 0.0, 0.0, 0.0, 0x1.31844a038e9fep-361, 0.0, 0.0,
     0x1p0, 0x1.af2991e46cfc6p-82, 0.0, 0.0, 0.0, 0x1.e550cea5997a6p-353, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.741f026dcb6e3p-910,
     0x1.19574130accbcp-910, 0x1.777904d913e3ap-505, 0x1.987d6456c1df5p-917, 0.0, 0.0,
     0x1.128df3067ca66p-889, 0x1.e15d8671041eep-50, 0.0, 0.0, 0x1.a464513d21004p-442,
     0.0, 0x1.69b326e244246p-433, 0x1.2c0825d41d40dp-666, 0.0, 0.0,
     0x1.72e14635ff551p-768, 0x1.6c78a51855359p-285, 0x1.9ac562e38fa1p-1022,
     0x1.48debac3ea718p-201, 0.0, 0x1.bfefcdacb0ff8p-938, 0.0, 0x1.4750b132d85ffp-493,
     0.0, 0.0, 0.0, 0.0, 0x1.2985504313cc1p-287, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0590ba4dd23aep-82, 0x1.0b157849f4ee7p-231, 0.0, 0x1.4ab6afa1b59b8p-324, 0.0,
     0.0, 0x1.c8910b243a335p-973, 0.0, 0x1.05b6018738e9dp-903, 0x1.a33577bea6c2dp-133,
     0x1.2266d7a2ea78dp-247, 0x1.7c1223215f7c5p-990, 0x1.ed9f52cc534acp-142,
     0x1.ff12386d82f41p-479, 0.0, 0x1.2bd00a9e43108p-488, 0x1.088e2133f77e3p-567, 0.0,
     0x1.9bd9758892c4bp-1022, 0.0, 0.0, 0x1.649b2af4dd97ap-315, 0.0,
     0x1.3aaff47697377p-667, 0.0, 0.0, 0.0, 0x1.7ffa2d26eb1edp-212,
     0x1.b2a851618d894p-927, 0.0, 0x1.d163dddae888bp-152, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e9e2eadf5ff71p-486, 0x1.cef39833f21bbp-118, 0x1.8adcec92d5439p-278,
     0x1.71ad9fc04cafdp-249, 0x1.7ef36354a5c64p-825, 0.0, 0.0, 0.0, 0.0,
     0x1.48211fa95c0c4p-753, 0x1.75b02e9bbfccep-428, 0.0, 0.0, 0x1.5590d613e5dfp-440,
     0.0, 0.0, 0.0, 0x1.449ab8d014beap-374, 0.0, 0x1.a2e499947269ap-937, 0.0,
     0x1.d0c7449d17b43p-503, 0.0, 0x1.330713b4c5cf7p-517, 0x1.00f71edea26d8p-948,
     0x1.8b5f116fbefcep-288, 0.0, 0.0, 0x1.6f2887522cd8ep-665, 0x1.a45af2a96f95p-214,
     0.0, 0x1.3829f25a2bcfdp-748, 0.0, 0x1.2ea9bc0cdf5e2p-323, 0x1.7aa6f37e24b2ap-565,
     0x1.95a012f2555a9p-805, 0.0, 0.0, 0x1.5ab6374734dcdp-736, 0.0,
     0x1.4868f7c06dc77p-752, 0x1.d77f1b8490c5dp-880, 0.0, 0x1.1bbf3670878c2p-1004,
     0.0, 0.0, 0x1.2a4bb1936f62cp-426, 0.0, 0.0, 0.0, 0x1.5d6ed335a35dbp-314,
     0x1.8867777d79aa6p-341, 0x1.96350c4ec117ap-519, 0x1.cb679c438f77dp-181, 0.0, 0.0,
     0.0, 0.0, 0x1.37ffc2e8a9aaap-725, 0x1.3e0a9cd81a366p-884, 0.0,
     0x1.8a0b3b4e680e8p-126, 0.0, 0.0, 0x1.b10a07b065042p-163, 0x1.cd77b41f804bp-817,
     0x1.866a95ef04dd2p-923, 0.0, 0x1.273a8690a561cp-683, 0x1.cc4760661caffp-286, 0.0,
     0.0, 0x1.ef2dcefcc76eap-208, 0.0, 0x1.7aeb506a6b047p-431, 0.0, 0.0,
     0x1.a4bdbb70320e6p-545, 0.0, 0x1.938fa430dbf55p-69, 0.0, 0.0, 0.0,
     0x1.ab41aae105359p-910, 0x1.0664daef8555fp-815, 0x1.daeb0aa2869a3p-930, 0.0,
     0x1.14784a78421e6p-24, 0x1.8494b375b4134p-571, 0.0, 0.0, 0.0,
     0x1.6adf1fb435762p-292, 0x1.77ac1b94dc35cp-751, 0x1.3f8105b79f1c7p-737, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2cd0077e55874p-270, 0x1.f8f26676e7939p-80, 0.0, 0.0,
     0x1.4f64e926a3957p-458, 0x1.ace3e98295d9fp-511, 0x1.f1f3b3c5990fcp-739, 0.0,
     0x1.ef12c3b7c5195p-711, 0.0, 0x1.48ecd70379eb6p-501, 0x1.e1e4ddc8cd818p-444, 0.0,
     0x1.2a00b41749e94p-447, 0x1.8ad7f498c15b5p-816, 0x1.aa9fb6330cc64p-993, 0.0,
     0x1.66151549a7a66p-649, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1cdb8babf78e9p-614, 0x1.f3b6832806748p-721, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7334c974e9f31p-775, 0.0, 0x1.f997d05a4b793p-473, 0.0, 0.0,
     0x1.f4b97a1b4b3aap-460, 0x1.c365b2a922c29p-170, 0x1.f1515e9dc0f8dp-1018, 0.0,
     0x1.b075814313974p-297, 0x1.4663937402e47p-871, 0x1.2f3b6113b0e22p-798,
     0x1.ffd0417114dbap-463, 0.0, 0x1p0, 0x1.412c54278734fp-320, 0.0, 0.0,
     0x1.6faea8f5ef1f5p-627, 0x1.89bea554d1436p-93, 0.0, 0x1.a20032f06fe19p-821, 0.0,
     0.0, 0x1.5f09394b483e6p-234, 0x1.cca613ae03055p-904, 0.0, 0.0, 0.0,
     0x1.9807b49b09e95p-397, 0x1.f84c01721eba7p-235, 0x1.adf8f63f73e6bp-790, 0.0,
     0x1.62499839a662dp-868, 0x1.fa32bfe1c7a19p-976, 0.0, 0.0, 0x1.d5acd83aa14d2p-752,
     0.0, 0.0, 0x1.0f168c24e6a68p-1022, 0.0, 0.0, 0.0, 0x1.28e358535905dp-169,
     0x1.8bb4101b730a2p-18, 0x1.597eaaf22de7ap-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.61531d4d2c78ap-579, 0.0, 0.0, 0.0, 0x1.f1400d882e5f9p-90,
     0x1.eb8ab055f561bp-636, 0.0, 0.0, 0x1.ce720f7aad8ap-61, 0x1.e84bfb3f695d6p-194,
     0x1.b2682ba517759p-738, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.273a462c6bf08p-601, 0.0,
     0x1.01408ef37e8adp-145, 0x1.ca9710bf74224p-765, 0x1.bd40625246a16p-662, 0.0,
     0x1.9a493c138287p-741, 0.0, 0.0, 0x1.78ca0a2be022bp-795, 0.0, 0.0,
     0x1.7a1d9e910c79dp-389, 0.0, 0x1.8fb80b28a317ep-212, 0.0, 0.0,
     0x1.aa952c7fc8dfbp-203, 0x1.f2564ab5565f6p-864, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2a418a998cdc7p-408, 0x1.c76f6d6a83572p-783, 0.0, 0x1.d0cf14ff7f471p-433,
     0x1.a635adda6bbdbp-142, 0.0, 0.0, 0.0, 0x1.0e99ad7aa756bp-282, 0.0, 0.0, 0.0,
     0.0, 0x1.05e2c84bbaf18p-829, 0x1.9b4c567342067p-866, 0.0, 0x1.22104c9d02f98p-585,
     0x1.02fa9c08a71f4p-639, 0.0, 0.0, 0.0, 0x1.868817037a974p-948, 0.0, 0.0,
     0x1.7f435f5b69726p-32, 0x1.a723ce32644fp-259, 0x1.f843892eb4cfp-1016,
     0x1.9bcc88b54d07fp-643, 0.0, 0.0, 0x1.2d6dfd95d5982p-1018, 0x1.188c89856cd1p-254,
     0.0, 0.0, 0x1.45573be6d6209p-594, 0.0, 0x1.82dcfa1657882p-958,
     0x1.19b8aafa3aed2p-83, 0x1.544fff64016b5p-557, 0.0, 0x1.6dff098fdbef4p-433
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
            tmp1 = Sleef_finz_sinhd4_u35kvx(tmp0);
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
    printf("Sleef_finz_sinhd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinhd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
