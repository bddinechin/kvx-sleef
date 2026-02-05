/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pd4_u10kvx.c --function \
 *     Sleef_finz_log1pd4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.f5f07aefc500fp-963, 0x1.e851b98152cf3p-103, 0x1.d0ce9d90a71aep-791, 0.0,
     0x1.e1188e4db68efp-497, 0.0, 0x1.9484584815f45p-211, 0x1.34fa53a563f81p-640,
     0x1.578498e5064a6p-475, 0x1.7e534c5bb4ee4p-451, 0x1.baa7bf731c76dp-535, 0.0, 0.0,
     0x1.d5424f616e759p-182, 0x1.0992b4a6c04a3p-53, 0x1.de267aef72f57p-8,
     0x1.df4a1d0bea8cp-132, 0x1.55fbdedb5c4cp-993, 0x1.3222df2b9c618p-148,
     0x1.4e6a1bb462a42p-535, 0x1.62b6112dc3ab7p-998, 0.0, 0x1.73559d48ae85dp-640,
     0x1.aa3062b11dc8ap-652, 0.0, 0x1.6d05cec89b293p-579, 0x1.2d0ec6fc20ed7p-732,
     0x1.d60dd9263ab95p-237, 0x1.4e531430cd3edp-701, 0.0, 0.0, 0x1.c7bb099e4e0b9p-603,
     0x1.99fb1a7531f3p-657, 0x1.ce0521526227cp-359, 0.0, 0.0, 0.0, 0.0,
     0x1.cb26120530cbbp-766, 0x1.b4a8e4c157f59p-11, 0.0, 0x1.2770a3497e1f7p-880, 0.0,
     0x1.ec0084effc02ap-36, 0x1.5129adfa1c01fp-723, 0.0, 0.0, 0.0,
     0x1.ca74a8e1c8e8bp-100, 0x1.9a23f0d7c4994p-887, 0x1.8fbe9fcd6192cp-537, 0.0,
     0x1.9f380819a1679p-169, 0x1.9930a5d9f4df6p-449, 0x1.d3212f7589cb5p-232,
     0x1.d92e9fcc8e5c6p-317, 0.0, 0.0, 0.0, 0.0, 0x1.f18186ff57a5ap-642, 0.0,
     0x1.1fc3a705813a3p-764, 0.0, 0.0, 0.0, 0.0, 0x1.db4f496d84c0ap-335,
     0x1.b205ee0a927f2p-163, 0.0, 0.0, 0.0, 0x1.911e0ca10b21cp-979, 0.0,
     0x1.77ecb63e75e2ap-991, 0x1.4798aff0224cap-64, 0.0, 0x1.83637a6e60ac7p-947, 0.0,
     0.0, 0.0, 0x1.50159a9b14632p-752, 0x1.4feafbb233c66p-528, 0.0,
     0x1.1b2ecf0eba5ep-88, 0x1.53ccd366c2e6p-28, 0x1.1a2d2376b9dc1p-338, 0.0,
     0x1.9f36cca429622p-662, 0x1.9de36d2234a9dp-360, 0.0, 0.0, 0.0, 0.0,
     0x1.4d66d6888274dp-142, 0.0, 0x1.ee8ed25739a6ap-661, 0x1.a389a064e0058p-688,
     0x1.35227419a1e6fp-253, 0x1.79fb040e288c4p-839, 0.0, 0x1.c24d23835d64p-430, 0.0,
     0.0, 0x1.ec3788462d47p-494, 0x1.7aa26e783ef5ep-214, 0.0, 0.0, 0.0,
     0x1.74801d6f3badcp-572, 0x1.258da52d824ap-661, 0x1.fe821c7b50e3p-109,
     0x1.df56781502c19p-479, 0.0, 0x1.bfa31fb65922dp-71, 0x1.abe2cff741f16p-938, 0.0,
     0.0, 0.0, 0x1.84998b594127p-278, 0x1.03b3182d53bb5p-512, 0.0, 0.0, 0.0, 0.0,
     0x1.3b819c9644e09p-792, 0.0, 0.0, 0x1.0343ab86b1104p-467, 0.0,
     0x1.71fd274ed7ecep-390, 0x1.a47af6592e183p-878, 0.0, 0.0, 0.0,
     0x1.ff85161b4106fp-841, 0x1.24d4d9c95f92cp-513, 0.0, 0.0, 0.0,
     0x1.1bd5365a3b16ep-438, 0.0, 0.0, 0.0, 0.0, 0x1.999406b72828cp-710, 0.0, 0.0,
     0x1.78bcf477eb9fp-101, 0x1.cdcf898687ba1p-878, 0.0, 0x1.b19531458862ep-959,
     0x1.9e65080c0963p-415, 0x1.21f47b41c6d2ep-364, 0x1.72726fa439fa1p-42, 0.0,
     0x1.418ebd67bc768p-306, 0x1.952a5eb8b15cfp-628, 0.0, 0x1.1557c2bd3f52ap-946,
     0x1.26ab488083742p-424, 0.0, 0x1.b9579525e6c34p-436, 0.0, 0x1.2dd803b8441ddp-490,
     0x1.fb4caa3ecf6f3p-233, 0x1.1ff606b7994afp-237, 0x1.0289ba9966cccp-755, 0.0,
     0x1.8b2151c8a9f3bp-97, 0x1.7941bc326dc0ep-324, 0x1.b65d0e48cede4p-423, 0.0,
     0x1.cb1ddb229193ap-560, 0x1.429386cf42bdcp-616, 0.0, 0x1.7762148ed613bp-258, 0.0,
     0x1.01900b01bcebep-944, 0.0, 0x1.623e877a13ab8p-595, 0x1.fab28fa1bbcc1p-6, 0.0,
     0x1.b5e2065e51652p-230, 0.0, 0.0, 0x1.bd20f08e0b834p-822, 0x1.2f12d54bef446p-847,
     0x1.4e58edd96ddf7p-159, 0x1.0535e809923a3p-227, 0.0, 0.0, 0x1.fb87df302e316p-462,
     0x1.6a44d4ceb77b9p-556, 0x1.230cf6855ef9ap-74, 0.0, 0x1.c04f3bdb7aecdp-350, 0.0,
     0.0, 0.0, 0x1.23947ff9f7775p-419, 0.0, 0.0, 0x1.21a7e428741acp-87,
     0x1.a6c746b019604p-713, 0.0, 0x1.964c147b50e7fp-258, 0.0, 0x1.1b08ff988dc67p-376,
     0.0, 0x1.5d17b9c35a41dp-74, 0x1.604efc555ecb5p-406, 0x1.b8cdc735bd3d6p-195,
     0x1.16bedb1d90b9bp-632, 0x1.b6e797d322547p-676, 0.0, 0x1.48daa1ecc9fa5p-244, 0.0,
     0x1.4e96ad258d6e1p-837, 0.0, 0x1.ccab37c360977p-499, 0.0, 0x1.9653cb92e4daap-676,
     0.0, 0x1.db90e5c062537p-919, 0.0, 0.0, 0x1.c4c3b5302c07ap-637,
     0x1.9aed57dc4bef7p-725, 0.0, 0x1.3c5b349351ed5p-646, 0x1.42daaf4197b01p-242,
     0x1.f7915340ab93fp-531, 0.0, 0x1.8e026a794d6dfp-794, 0x1.4d71a9e9b3893p-573, 0.0,
     0.0, 0x1.fc02fe1d018b6p-805, 0.0, 0.0, 0.0, 0.0, 0x1.ef4b76b25010fp-882,
     0x1.773b4826a928ep-446, 0.0, 0.0, 0.0, 0x1.e7834e935a5f8p-53, 0.0, 0.0, 0.0,
     0x1.838e356c2e001p-843, 0.0, 0x1.709c74c4ef4f7p-180, 0.0, 0x1.254a8c852fe02p-691,
     0x1.6d11aa873ca61p-962, 0x1.e1f9cb0a6cbdbp-412, 0x1.4588a93fe957ep-386,
     0x1.f8062201a812cp-35, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8633d3a5e4e7p-466, 0.0,
     0x1.889a9fe4dea4dp-873, 0.0, 0.0, 0x1.9930e1203ac3ap-832, 0x1.9c98188aed124p-834,
     0x1.d700001ae68bcp-261, 0.0, 0x1.23c9f5dc59fedp-3, 0.0, 0x1.ca1c0253653f4p-873,
     0.0, 0x1.8071eeee9172bp-570, 0.0, 0.0, 0.0, 0.0, 0x1.bc2f2045684dcp-341,
     0x1.21b138577b145p-871, 0.0, 0x1.ee0fc52833752p-781, 0.0, 0.0,
     0x1.4a0a6d0f1929dp-185, 0x1.6edbd0bda7ef6p-221, 0x1.967290e65729dp-437, 0.0, 0.0,
     0x1.fe1ced514e254p-481, 0x1.f47a4499c4021p-541, 0x1.5973843e234f2p-429,
     0x1.cd0a54706c559p-131, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a14e4b70f38dp-223,
     0x1.96bce23a43311p-233, 0x1.f39e0c9570e04p-899, 0x1.7dac8a0bb0a51p-1,
     0x1.6af9b9c69bf3p-355, 0x1.a66d38ba9b564p-837, 0x1.36cf463d718f3p-804,
     0x1.942a3d1905177p-166, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4156eadcb5034p-497,
     0x1.5865f4b5bd9f7p-533, 0x1.ebf3ea20f55fp-297, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db6131e2b496bp-274, 0.0, 0.0, 0x1.1d39f81ccd8a5p-687, 0.0,
     0x1.635e54aa8978bp-402, 0.0, 0x1.d9a918d17c9d7p-1011, 0x1.68bdac2ad6b27p-957,
     0x1.b05e0ddb5eb6bp-353, 0.0, 0x1.f629700690f04p-700, 0.0, 0x1.630d5b90f6d59p-961,
     0x1.459096a281cd3p-193, 0.0, 0x1.8fd590fe4f485p-971, 0.0, 0.0,
     0x1.2e4103468f371p-858, 0.0, 0x1.d39a1fb21915ep-7, 0.0, 0x1.c2a0f77f3b2b6p-51,
     0.0, 0.0, 0x1.0235f0125d6bp-998, 0.0, 0x1.cd1fc76bd699ap-656, 0.0, 0.0,
     0x1.a41a26b43341ep-934, 0.0, 0x1.23c60e0cecb5dp-774, 0.0, 0.0,
     0x1.99d84d98394f5p-567, 0x1.624c92ee5dabfp-880, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d3d0d3701b5a7p-641, 0.0, 0x1.e055fb7ccb3aap-736, 0x1.df883c18e8b8bp-694, 0.0,
     0x1.6898eaf7f2c03p-891, 0x1.05dd2d52cb84cp-15, 0x1.b58fb444f1ad5p-199,
     0x1.73cc7b9a34bc5p-66, 0x1.06ef4a17083b8p-790, 0x1.ed585dd3b032ep-669,
     0x1.5c3b835620be8p-294, 0x1.d153fd552a381p-997, 0.0, 0x1.2fecc15e3ac2ep-884, 0.0,
     0.0, 0x1.447997f41e393p-406, 0x1.bcbf44655342cp-89, 0x1.4e5aa9824abe6p-824, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9b33a44df17d2p-858, 0x1.3d8791b9e5a71p-386,
     0x1.5782f027830a4p-711, 0x1.ad153786fd63p-195, 0.0, 0x1.da165a52db42cp-135, 0.0,
     0.0, 0x1.f6ff1d51d7b3fp-109, 0x1.e4a050bb0efdp-457, 0x1.f1a020d57204fp-1018, 0.0,
     0.0, 0.0, 0x1.0ccd09d4f2f22p-819, 0.0, 0.0, 0.0, 0x1.aeedfb1df8cfbp-537, 0.0,
     0x1.5c920e2423885p-764, 0.0, 0x1.570049ffef0ep-4, 0x1.86943c83d67abp-901, 0.0,
     0x1.6b80cb0dc1668p-870, 0x1.b1a1c0306ade6p-338, 0.0, 0.0, 0x1.2c6ff7f7b6e9p-731,
     0.0, 0.0, 0x1.3587b4a891332p-908, 0.0, 0x1.8e3c74730117dp-44,
     0x1.211bce15ce81ep-105, 0x1.b13720a53311cp-735, 0x1.44ea256812683p-723,
     0x1.e1f23e1d24c74p-808, 0x1.08d4d13f13a4fp-564, 0x1.2024dc513086dp-168,
     0x1.9b066f5e881d8p-291, 0.0, 0x1.ac66cad340bccp-202, 0.0, 0.0, 0.0, 0.0,
     0x1.a5db1b5e2ea11p-720, 0x1.46c22a45bcfbcp-259, 0.0, 0x1.98a3bfbfc439cp-508,
     0x1.222d7a1ff30d4p-952, 0.0, 0x1.60a8d50307aeep-115, 0.0, 0.0, 0.0,
     0x1.1db828ff277a3p-1017, 0x1.fd2abf73a3d61p-109, 0.0, 0x1.c59116c02e48fp-719,
     0.0, 0x1.9244b1b8cada3p-107, 0x1.1ad62ddd877afp-325, 0.0, 0x1.680b95980cfe8p-705,
     0x1.d33c6ed7278fdp-319, 0.0, 0x1.5eac0ab318dcfp-410, 0x1.6ca2bc04883e8p-303, 0.0,
     0x1.1540445e3d83dp-569, 0.0, 0.0, 0x1.b431ea346d963p-944, 0x1.6d4a98bddd064p-106,
     0.0, 0x1.a8895eb9b0ac8p-739, 0.0, 0x1.3c5f5740a6419p-556, 0.0,
     0x1.b3fe98c979ce3p-685, 0.0, 0.0, 0x1.b9ddc75e5f5fdp-883, 0.0, 0.0, 0.0, 0.0,
     0x1.741617ef0cd34p-881, 0.0, 0x1.d72f6605316fp-293, 0x1.6614d8ea22302p-299,
     0x1.0252f4509aafcp-21, 0.0, 0.0, 0x1.d1a85fc40d7efp-851, 0x1.4464d01d04774p-1020,
     0.0, 0x1.71da65167ba85p-898, 0.0, 0.0, 0x1.7ec26e7545beap-747, 0.0,
     0x1.c3d2eadfc1efbp-1006, 0.0, 0x1.eea8319a8c237p-792, 0x1.c56bab03bb15fp-627,
     0.0, 0x1.8dc8426afc418p-827, 0x1.dd02cf40ae6d4p-419, 0.0, 0.0, 0.0,
     0x1.40589126e0e2bp-602, 0.0, 0x1.e811651f8f823p-36, 0.0, 0x1.94bb1d96c5ea4p-106,
     0x1.139aa1847f433p-724, 0x1.b1c698335e83fp-664, 0x1.4dd417e3a5dc4p-108,
     0x1.fc79942ad56ddp-140, 0.0, 0.0, 0x1.a2f08ab0cf32fp-915, 0.0, 0.0,
     0x1.352d07acc2701p-260, 0x1.d2b66a534eb6p-662, 0.0, 0.0, 0.0,
     0x1.1ff1b13897694p-902, 0x1.00d48365d6761p-16, 0.0, 0.0, 0x1.d649f4dfd8cb4p-575,
     0.0, 0x1.881c437b816d1p-26, 0x1.631ca55dee386p-432, 0.0, 0x1.a0b10eabee32fp-578,
     0.0, 0x1.554d7d32c71a2p-969, 0x1.c41968cb101ap-47, 0x1.4d240bb3927d8p-898, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8b86d348a8367p-454, 0x1.5746abaf7872fp-253, 0.0,
     0x1.6c4e8d15d79adp-32, 0.0, 0.0, 0x1.134f83a974789p-673, 0.0,
     0x1.fe9f1f107e815p-228, 0x1.722c4e97b5b19p-999, 0.0, 0.0, 0x1.a940f3122ea4bp-35,
     0x1.d6ae4cb89f0bfp-1014, 0x1.edf833786e659p-62, 0.0, 0.0, 0x1.9dbea38438ca9p-915,
     0x1.d0924fc5ff0dep-113, 0x1.e8a6799a46219p-567, 0x1.d93d9ec1383b5p-117,
     0x1.611e9a4395d32p-197, 0x1.8f5592830a161p-28, 0x1.2e5fbb27fac19p-467,
     0x1.547a748ab6b62p-467, 0x1.60e9fc9cd5083p-586, 0.0, 0.0, 0.0,
     0x1.c2976f3e68475p-827, 0x1.25f6dbd6841c4p-237, 0.0, 0x1.caba9c52bdabap-623, 0.0,
     0x1.59b9c8015ae05p-621, 0x1.91bfb4d6be0a7p-190, 0x1.1c0f72a577bfbp-726,
     0x1.f157c0616b18fp-874, 0.0, 0x1.cc6ddad859c14p-233, 0.0, 0.0, 0.0,
     0x1.7bc5535d78f0fp-135, 0x1.98522b278ace7p-146, 0.0, 0x1.765ba69c913c4p-175, 0.0,
     0x1.991f1d8aaec69p-236, 0x1.d50f1b6f7e962p-10, 0x1.4815873c6d089p-40, 0.0, 0.0,
     0x1.4850e307764fep-615, 0x1.444d2a5382382p-252, 0.0, 0.0, 0x1.ea7184228ba8ap-576,
     0x1.24f3394d938dbp-73, 0x1.a27b42a40cdc3p-133, 0.0, 0.0, 0.0,
     0x1.b8c0c8a2f3669p-809, 0x1.6002a3acf4a91p-376, 0x1.938a167bcd288p-309, 0.0,
     0x1.6a1b5a43c999ap-458, 0.0, 0x1.5b3fd371ba15ep-689, 0.0, 0.0, 0.0,
     0x1.a7d81077d7cd3p-785, 0x1.395d6ca09c67p-909, 0.0, 0.0, 0.0,
     0x1.d28964c8d2075p-816, 0.0, 0x1.8975c806c7ef3p-523, 0.0, 0.0,
     0x1.041a43e4b2af5p-76, 0.0, 0.0, 0.0, 0x1.bf5deb97ac1cdp-541,
     0x1.63abe0b240629p-267, 0x1.3d07800c356dfp-783, 0x1.d07ee44f8dc3p-866, 0.0,
     0x1.584c2c43989d3p-563, 0x1.9581c84bd1f1cp-59, 0x1.0d8db8d3a07c9p-945,
     0x1.766b16826bf0dp-861, 0.0, 0.0, 0x1.a6f15646618e5p-32, 0x1.3d6993306ac0bp-482,
     0.0, 0.0, 0.0, 0x1.2d716ddbab9d3p-464, 0.0, 0x1.74af900f58d28p-678,
     0x1.28614261e2682p-620, 0.0, 0x1.8de3d23e0ff6fp-231, 0.0, 0.0, 0.0,
     0x1.d5acad1c79f8bp-71, 0x1.1b74b44e15793p-358, 0.0, 0x1.c129ad1c2b699p-99, 0.0,
     0.0, 0x1.ae818e47d6234p-31, 0.0, 0.0, 0.0, 0x1.0f31d7d789f8ap-681, 0.0, 0.0, 0.0,
     0x1.ffb3c5fec12f4p-681, 0x1.4a0a47d9ae936p-875, 0x1.b1d2a9d66cc7p-622,
     0x1.e4e167a5690d6p-833, 0x1.abd804af8852cp-992, 0.0, 0x1.b1d3350f46c7p-404, 0.0,
     0x1.aeafbdd1e2213p-920, 0x1.b0b43b0f5b9a4p-290, 0x1.b6db9b079945p-464,
     0x1.abd4235a7e0ccp-102, 0.0, 0.0, 0.0, 0x1.9a66b9563219dp-907,
     0x1.7b773d68c378ap-909, 0x1.a430d7bf04f78p-974, 0x1.47cd9114e8005p-35,
     0x1.e1a71253bc177p-777, 0x1.bb388217c0cbfp-695, 0x1.9dda5a65327a4p-397, 0.0,
     0x1.c31d21a4f92d3p-18, 0.0, 0.0, 0x1.0f35690f78ed1p-938, 0.0,
     0x1.8662a9a4e7f7ep-20, 0x1.cf893a8caec59p-669, 0.0, 0x1.ab325175e0bbep-299,
     0x1.f9657ecc68873p-347, 0x1.f59b5ff8e3f2ap-727, 0.0, 0.0, 0x1.cc942a9867196p-860,
     0x1.980ff9a2539b5p-408, 0x1.6e94241d342f7p-51, 0x1.91e4c545c14dbp-976,
     0x1.58220ad896667p-307, 0x1.c6167e4dcb75ap-965, 0x1.336db363dbd1bp-116,
     0x1.7de67f9a0529fp-783, 0x1.a1517ee4b195p-776, 0.0, 0x1.c65625fbe53c1p-70,
     0x1.ff4d2cf790be6p-379, 0x1.8f04fcb8164bp-746, 0x1.74640c050255ep-245, 0.0,
     0x1.bc06d5a9afd65p-927, 0x1.dbb59635b5aaep-800, 0.0, 0.0, 0.0, 0.0,
     0x1.86d34d2c7fb7ep-903, 0x1.ba90bf4d1a4fep-170, 0x1.7cc8284782aaap-839, 0.0,
     0x1.f3ee14bf037c8p-440, 0.0, 0x1.64149f2f7a619p-682, 0.0, 0x1.bc1089d82a2c8p-39,
     0x1.6ee7fe5eaa536p-556, 0.0, 0.0, 0x1.cf0e2ef9630d7p-163, 0x1.0b77fe5dc6b22p-144,
     0.0, 0x1.dcd212708d5c8p-763, 0.0, 0.0, 0.0, 0x1.be31f23a33ccbp-323, 0.0, 0.0,
     0x1.75291222cdf49p-990, 0x1.6c031d3858af3p-342, 0.0, 0.0, 0.0, 0.0,
     0x1.1bece3292eea5p-484, 0.0, 0x1.a30c3ddec6cd7p-222, 0.0, 0.0,
     0x1.2d757ec00d7f5p-191, 0x1.4e7cf9771e3f6p-751, 0.0, 0x1.a6695f6bb44aap-391, 0.0,
     0x1.afe5a8e0b2e5p-100, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ef5e33c4cfdd9p-831,
     0x1.d334a33ba0e9cp-963, 0x1.bcf25b02a03cap-217, 0x1.632e15c51b18p-366, 0.0,
     0x1.8a4607b174c1ep-588, 0x1.90ef4a60b829cp-1011, 0x1.6556f92ca46bfp-423, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d299efd88a7cp-927, 0x1.5d15903fa72b5p-620,
     0x1.1d926332d4148p-1021, 0.0, 0x1.5975912321231p-438, 0.0,
     0x1.af7553a03f33ap-711, 0.0, 0x1.bc2629a81c5b9p-368, 0x1.bd175efc82c07p-676,
     0x1.4e84c0e65e8ffp-216, 0.0, 0x1.53e88e0938811p-921, 0x1.db032f6e76bf4p-431, 0.0,
     0.0, 0.0, 0x1.1f38efadbb12fp-645, 0.0, 0x1.d60ebf33da19ep-765,
     0x1.6ab84b481c91ep-995, 0x1.533898403c37bp-817, 0x1.0a25df5f1c07cp-523,
     0x1.6ba151a68104dp-269, 0.0, 0x1.36fc6d5829e4dp-129, 0x1.bcce9f2693033p-288,
     0x1.5c73735b8cd6cp-20, 0x1.20b575845f773p-314, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fe587433b7312p-14, 0x1.d59fa3920bd8p-472, 0.0, 0x1.1ebd2c5a2225p-609,
     0x1.64d6afe20e6f1p-168, 0.0, 0x1.a838a5009d8d6p-595, 0x1.17abd665aec66p-429, 0.0,
     0x1.f67a02ac20038p-18, 0x1.19efe2b215d01p-946, 0.0, 0.0, 0x1.f063edc8eea6dp-986,
     0.0, 0.0, 0x1.9e04078d3df0fp-966, 0x1.86b5b6d0a41f8p-429, 0.0, 0.0,
     0x1.ff8dad0850be2p-36, 0x1.c4e32d0058bc1p-529, 0.0, 0x1.5b44d5a9634b9p-935, 0.0,
     0x1.49d51cf1a1c7fp-176, 0.0, 0x1.1c4aecb7a5589p-576, 0.0, 0.0,
     0x1.4face5f44ee47p-315, 0.0, 0.0, 0x1.41067f6f1d8bp-564, 0x1.096aa9b1ef89p-64,
     0x1.27377b59542e9p-1014, 0x1.3774970352721p-411, 0x1.ab7975700fb69p-11, 0.0,
     0x1.9cd25044b0649p-1011, 0.0, 0x1.4c7b1d2fc7824p-824, 0x1.c150a4ccdfa43p-60,
     0x1.bf4f56591f089p-888, 0x1.9b4c56f3f5116p-276, 0x1.89073336b1be7p-878,
     0x1.443252955867p-835, 0x1.e163a2435a0f3p-906, 0x1.a43a04904e50cp-241,
     0x1.4bfff009b4957p-204, 0x1.79b7d4ab1ebe5p-796, 0.0, 0.0, 0.0,
     0x1.024259ee75139p-5, 0x1.1af75d6dc123ap-860, 0x1.8eef4a9654608p-720,
     0x1.ad559578ac53dp-654, 0x1.7d2938c8f87e9p-370, 0x1.66e57fc2dcf91p-734,
     0x1.d235d26f426ffp-799, 0x1.16229824e8306p-122, 0.0, 0.0, 0.0,
     0x1.2748cce1f8f49p-768, 0.0, 0x1.02a0a9d79442bp-306, 0x1.1764e7ffc6424p-1011,
     0x1.ee5d4215f6a89p-462, 0.0, 0x1.448290200201ep-819, 0.0, 0.0,
     0x1.7389fa3b01c73p-592, 0x1.ac934423f741ap-391, 0.0, 0.0, 0x1.f04b5d12cb92bp-661,
     0.0, 0.0, 0x1.51eda5474eccbp-51, 0x1.49590f4368536p-563, 0.0,
     0x1.f6d84a6e3d234p-1020, 0.0, 0.0, 0x1.6c1c7cb888bb2p-677, 0.0, 0.0, 0.0,
     0x1.e340e488f5416p-872, 0x1.781ec30306e92p-235, 0.0, 0x1.753c75826ba53p-158, 0.0,
     0x1.68783f450743ep-184, 0.0, 0x1.653dbc4a1793cp-103, 0x1.b30bb13574242p-652,
     0x1.3abd2b5e62961p-243, 0x1.99b27b71b82ap-565, 0.0, 0.0, 0x1.44df1a9502abbp-124,
     0.0, 0x1.717bd08087b94p-891, 0x1.a86a4d92c6eafp-270, 0x1.52a573364af9p-166,
     0x1.1ab2bf4828c8p-449, 0x1.659f657f2f05p-917, 0.0, 0.0, 0x1.15a8539344496p-908,
     0.0, 0.0, 0x1.603ae86cd2fe5p-483, 0x1.e5981bb57c724p-264, 0x1.aa6ded69900bep-280,
     0.0, 0x1.7043d3b6edb32p-546, 0.0, 0.0, 0x1.44ba81b1a877ep-611, 0.0, 0.0,
     0x1.c933a7343487cp-233, 0x1.52f5b2761e922p-905, 0.0, 0x1.c9afdf55ff3b8p-348,
     0x1.46a9175f0738fp-650, 0.0, 0x1.2865c277d18acp-919, 0.0, 0x1.b47cb812a99e7p-662,
     0x1.9da2389c2ef47p-770, 0x1.fed0815ac9da3p-183, 0x1.836c20ae045c6p-252, 0.0,
     0x1.dfeee190eb3ddp-200, 0.0, 0.0, 0.0, 0.0, 0x1.4be7f4d3253afp-172,
     0x1.30d6150e93025p-56, 0x1.19b6814f5ea66p-435, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c60d00dc5b063p-936, 0.0, 0.0, 0.0, 0x1.d98158e233d64p-306,
     0x1.4e17ca0ff9c59p-835, 0x1.59efcf81a4e8ap-2, 0.0, 0x1.b67781d7697c9p-86,
     0x1.aadda25f57eccp-986, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0594ad90a81dfp-870,
     0x1.3e6cd32bd91c8p-272, 0.0, 0.0, 0x1.f3756cd209faep-604, 0.0,
     0x1.fca147f68a5ccp-810, 0.0, 0x1.597d8935bd1d5p-636, 0x1.b2501993c9019p-541,
     0x1.14bf4d3a12c6ep-699
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
            tmp1 = Sleef_finz_log1pd4_u10kvx(tmp0);
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
    printf("Sleef_finz_log1pd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log1pd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
