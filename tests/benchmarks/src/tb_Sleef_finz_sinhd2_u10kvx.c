/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd2_u10kvx.c --function \
 *     Sleef_finz_sinhd2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0.0, 0x1.f02931a42ba2bp-119, 0.0, 0x1.ab94f8a3f1bcap-458, 0.0, 0.0,
     0x1.527ba96d22fdcp-949, 0x1.944bd406c6824p-357, 0x1.c6f715c440941p-533,
     0x1.675fa68cd9243p-126, 0x1.6d797ec5b0936p-17, 0.0, 0x1.9080a4cb112f7p-57, 0.0,
     0.0, 0x1.ec1d849acdb17p-281, 0x1.e6f605d27853fp-489, 0x1.0bdff109eb57p-757,
     0x1.61277bdf1ba6bp-734, 0.0, 0.0, 0x1.a9af15ffb8f06p-783, 0.0, 0.0,
     0x1.d8ef329d783eap-142, 0x1.27142ce9fece1p-104, 0.0, 0x1.8fe12f35de3b1p-903,
     0x1.dda1779c38e65p-432, 0x1.f0331d184046ap-172, 0.0, 0.0,
     0x1.03e9cbf6c760fp-1010, 0x1.8c23db50c1dcbp-541, 0x1.aefab5d4b6f32p-634, 0.0,
     0x1.79963f91e162fp-238, 0.0, 0.0, 0x1.274b33e071094p-345, 0x1.8f2f799e780c8p-201,
     0.0, 0.0, 0x1.7985e3b93ea2ap-740, 0x1.83a7783dbfe32p-947, 0x1.fdf60ca5a0536p-132,
     0x1.98083356940e2p-499, 0.0, 0.0, 0x1.ef619422d6778p-818, 0.0,
     0x1.80eb382c2bf72p-545, 0.0, 0.0, 0.0, 0.0, 0x1.382ad7edd37eep-133,
     0x1.3c779a6a9e6fap-220, 0.0, 0x1.8c0c02946b223p-403, 0x1.6bec1db1b5c76p-984, 0.0,
     0.0, 0.0, 0x1.00f51ec48a708p-700, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a64634b99302p-267, 0x1.444b9f4f240c9p-243, 0x1.aae91c7203fd5p-383,
     0x1.501fa211d9fefp-81, 0.0, 0x1.eafc7dbc82fa9p-399, 0x1.44bd5a13f73a1p-891,
     0x1.d57a9d0fc3cc6p-464, 0x1.c2eb18a61597fp-669, 0.0, 0.0, 0x1.b941cda202359p-322,
     0x1.a9ff12a5bd8fep-366, 0.0, 0x1.9ae653d99447p-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2209e3b181fdbp-717, 0.0, 0.0, 0.0, 0x1.426f45563b69bp-469,
     0x1.9facdb02d1bfbp-168, 0.0, 0.0, 0x1.9f1f86b5459cbp-275, 0.0,
     0x1.d648353a792bfp-590, 0.0, 0.0, 0.0, 0x1.bf24d78a26e6cp-843,
     0x1.763de5a760a64p-995, 0x1.869f3d9c1f01ap-885, 0x1.9841c446c56adp-541,
     0x1.1c6ab8c6c348ap-403, 0x1.f27cb394a009ap-623, 0x1.c139eab4d918fp-1003,
     0x1.ca6153b4787e1p-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db6d9eb730923p-482,
     0x1.3fca459a470ffp-561, 0.0, 0.0, 0.0, 0x1.0281c9c434ff9p-347,
     0x1.4992f666a1482p-421, 0x1.0b2d754729d8ap-996, 0.0, 0x1.dc612932fa571p-767,
     0x1.d3f183c86c70bp-369, 0x1.cbc07e909dc48p-459, 0.0, 0.0, 0x1.0a4559e5ceaf6p-260,
     0x1.b2b8368c9ce97p-863, 0.0, 0.0, 0x1.2865c5dd66535p-281, 0x1.c6231919827eep-382,
     0.0, 0x1.77cadfcb85336p-671, 0.0, 0x1.55ff9e53953d1p-112, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.348e0262ed9d1p-519, 0x1.c1c0479f43359p-78, 0.0,
     0x1.d4690180b5bbdp-334, 0x1.64dd57c5a33e1p-177, 0.0, 0x1.fc257166b07cp-511, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9dd696bc19b2fp-505, 0x1.92ff4c3a2c333p-578,
     0x1.2fba5ace0965ap-574, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b45bbaf51682p-645, 0x1.cdf7d0f03a547p-711, 0.0,
     0x1.cc2b14d91238bp-942, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.684daedf4d1acp-564,
     0x1.bb733e7ebd4dbp-381, 0.0, 0x1.5324e7ebbef31p-360, 0x1.116be7eff72ep-258, 0.0,
     0x1.2e74159ef2e48p-16, 0.0, 0x1.ce9898e8011c6p-634, 0x1.f7eac1562ee26p-975, 0.0,
     0x1.10133c7d11e34p-78, 0.0, 0x1.5125b7f577e4ep-385, 0.0, 0.0,
     0x1.4b106445a819fp-438, 0.0, 0.0, 0x1.06de030459f36p-750, 0.0,
     0x1.cd357ad2cf4acp-508, 0.0, 0x1.61088ae3133f6p-784, 0.0, 0.0,
     0x1.e0ff280fa2766p-136, 0x1.1aa666e95aad6p-520, 0x1.77422f6c91f5p-591, 0.0, 0.0,
     0x1.b0c5c5f7931d3p-811, 0x1.e47dc625995d8p-140, 0x1.39a73236b615cp-906, 0.0, 0.0,
     0x1.96a39b0fb64cbp-621, 0.0, 0.0, 0x1.71708f2469269p-530, 0x1.de5a8e6c04cecp-985,
     0x1.373f547e1447bp-504, 0.0, 0.0, 0.0, 0x1.d554608425316p-777, 0.0,
     0x1.1a14f44b53ce9p-919, 0x1.cf8bff85f6c32p-672, 0.0, 0x1.3e93a0d5e373bp-645,
     0x1.bf2997bc46ed6p-743, 0x1.18200e043369cp-535, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5444d7acc21ebp-386, 0.0, 0.0, 0.0, 0x1.a34236db6cdddp-1018,
     0x1.500e4ddab57dep-589, 0x1.d38be6e46a2cep-1011, 0.0, 0.0,
     0x1.a11638d382c66p-687, 0x1.637f6cfb8ff65p-777, 0x1.efe11205b9412p-12, 0.0, 0.0,
     0x1.25b310373e92p-197, 0.0, 0.0, 0x1.494434abfb60ap-853, 0x1.8daf2dac782d2p-663,
     0.0, 0x1.0ae704ad0d3b4p-599, 0x1.954d3e661b93ap-378, 0x1.c41a0ac3aae6p-441,
     0x1.28a58f336ea3cp-624, 0x1.455b2b7ac1e31p-811, 0.0, 0x1.cd718dabd42fbp-361, 0.0,
     0.0, 0.0, 0x1.d979f27d4488cp-986, 0.0, 0x1.4eec12e16a6c6p-166,
     0x1.549daf3a5c0b2p-417, 0.0, 0x1.39c3ea51f21b3p-751, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.62ce68c9d30ccp-839, 0x1.a6702c9ef94d7p-85, 0.0, 0.0, 0.0, 0.0,
     0x1.7136ce72ff6d4p-241, 0x1.023a74bcd2934p-826, 0x1.6aec8417478b2p-1017, 0.0,
     0.0, 0x1.d8b25cef3022fp-1014, 0x1.d48a930a2ccc9p-70, 0x1.8e0e42bb00872p-738, 0.0,
     0x1.f82778cbc5c1bp-367, 0x1.e1a4f2bbdea4fp-803, 0.0, 0x1.6da219754af03p-725,
     0x1.78a8122cb353cp-84, 0.0, 0.0, 0x1.58dc5253bb246p-97, 0.0, 0.0,
     0x1.86d2145d93179p-604, 0.0, 0x1.5f80c3f5ba22ep-147, 0.0, 0.0,
     0x1.afa136fae6a67p-519, 0x1.70061db3bc1b5p-558, 0.0, 0x1.29c7828f84ca7p-877, 0.0,
     0.0, 0x1.de2be02b51dfcp-175, 0.0, 0x1.f18ac0f25a628p-526, 0x1.b02ec4df8004fp-452,
     0x1.ed0f4d5f2a63p-382, 0.0, 0x1.39c316a08d58dp-399, 0.0, 0x1.0b95bf33753bfp-78,
     0x1.9bd0c0576a4cep-229, 0.0, 0.0, 0x1.c3ceb872585a5p-105, 0x1.44cfd7b8b03fp-674,
     0x1.e7d3afa684fcfp-557, 0.0, 0.0, 0.0, 0.0, 0x1.8c452e863d85ep-422,
     0x1.c2089bd7a459ap-53, 0x1.8cae3118b5ab6p-43, 0.0, 0.0, 0x1.75615bda5765ap-715,
     0.0, 0x1.edd2a2332a41p-114, 0x1.056e918a998b9p-971, 0x1.213ec75b65a3ap-299, 0.0,
     0x1.60bb357acfa3bp-163, 0x1.7b8abbc697314p-959, 0x1.69ae58b2344adp-182, 0.0, 0.0,
     0x1.843c05da94c8ap-346, 0x1.440a5fffeecbep-444, 0.0, 0.0, 0x1.bafcfd9097a6ep-666,
     0.0, 0x1.5a9814c4fac4dp-335, 0.0, 0.0, 0x1.f15fbe89572c8p-718,
     0x1.f97a0739e3b66p-74, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9950c2b82b8d6p-281,
     0x1.d208c5a56fcafp-302, 0x1.ac7b3ba945df1p-300, 0.0, 0x1.8f0c9b315883fp-759,
     0x1.4456def2ac6d6p-567, 0x1.a2937bd72caefp-189, 0.0, 0x1.2b1e715ca3a04p-501,
     0x1.c1a384c5c11bcp-51, 0.0, 0x1.edefd241fc0ecp-956, 0x1.2ba850104d668p-716,
     0x1.51a41ec6a1b51p-490, 0.0, 0.0, 0x1.915b397ac879fp-399, 0x1.317a19a22bc89p-313,
     0.0, 0x1.d6d09fc2a8376p-794, 0.0, 0.0, 0.0, 0.0, 0x1.273780f160869p-389,
     0x1.f7e3d8ee44588p-967, 0.0, 0x1.e4362b784d559p-616, 0.0, 0.0, 0.0,
     0x1.769a7e36795efp-328, 0.0, 0.0, 0x1.eabc7c9596c76p-808, 0.0,
     0x1.3e9a49178b131p-532, 0.0, 0.0, 0.0, 0x1.40dcb969c504ap-500, 0.0,
     0x1.9f09667791237p-780, 0x1.a891fa493bca4p-796, 0x1.0776c14c89795p-737, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.80c30bc5e5baap-752, 0x1.c97558c2409f1p-456, 0.0,
     0x1.9ec5750d9afe8p-431, 0.0, 0x1.a2e1b6f9cb9b9p-277, 0x1.eeb9939df0457p-354,
     0x1.bf6e05b2090ccp-285, 0.0, 0.0, 0.0, 0.0, 0x1.73aa21931a02bp-586,
     0x1.eccfa97d4f93dp-591, 0x1.a3e7cc2d3a3b3p-273, 0x1.598b95cbf5896p-978,
     0x1.984016dc7cfe5p-169, 0.0, 0x1.334a09044fe91p-304, 0.0, 0x1.8dad1e6bebdfap-996,
     0.0, 0.0, 0x1.2fc0a8278a8e8p-75, 0.0, 0x1.b8f1488c5a622p-444,
     0x1.bb6d140d44c55p-4, 0.0, 0x1.cc00e13b3f022p-293, 0x1.cd23e450ba192p-98, 0.0,
     0x1.be21381391976p-652, 0.0, 0.0, 0x1.15a2700649c66p-73, 0x1.af93aa436d2e8p-521,
     0.0, 0.0, 0x1.800cb112428a5p-18, 0x1.3961634ba36c6p-880, 0x1.53440d78c1d19p-962,
     0x1.ad31e0215c7b3p-596, 0.0, 0x1.9271b1482bfc1p-698, 0.0, 0.0,
     0x1.77e04280a1247p-949, 0.0, 0.0, 0x1.5787c52202936p-765, 0.0, 0.0,
     0x1.972a19b19a271p-943, 0x1.812daecd978bdp-1009, 0x1.59701ab412f85p-151, 0.0,
     0x1.8b5dce687a1dep-345, 0.0, 0x1.0937bc85c6b94p-466, 0x1.9478d93b1e964p-622,
     0x1.dc0fc592a1313p-331, 0x1.d7b7e92dc57a7p-676, 0x1.86c0a3fbd0e0ap-778, 0.0,
     0x1.7009c672c2731p-586, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.740eff6ccbd8dp-588,
     0x1.16815b5072c04p-926, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.764bc0a431c4dp-510,
     0.0, 0x1.f65317e7b7fd3p-616, 0.0, 0.0, 0x1.a8927bdbd480ep-175,
     0x1.bd1c6fc4df649p-603, 0.0, 0.0, 0x1.1ffd86c9107cap-760, 0.0,
     0x1.8f14d91790854p-842, 0.0, 0x1.8ea2302106ecfp-240, 0x1.37fbbf0eb4dd3p-479,
     0x1.a7dd7b6137fdep-321, 0.0, 0x1.3bba6b2f10536p-917, 0x1.294372a0872e8p-357,
     0x1.14edfe1fc8bf7p-771, 0.0, 0.0, 0x1.71be1e4ea3478p-706, 0.0, 0.0,
     0x1.00debb97be8bep-796, 0.0, 0x1.b90ec2dce8f6p-481, 0.0, 0x1.8ba591d5be8f9p-618,
     0x1.096453f790ap-901, 0.0, 0x1.9a741f1f29842p-227, 0x1.c08fce0461d3bp-49,
     0x1.a2f76874e8c86p-978, 0x1.2ae8be00596f7p-587, 0.0, 0x1.f4497dde3c52cp-585,
     0x1.9f0e6714187c5p-784, 0.0, 0x1.86cb77984a788p-256, 0x1.e0d072aef6b06p-651, 0.0,
     0.0, 0.0, 0x1.c6a0930dbb52dp-26, 0.0, 0.0, 0.0, 0x1.8255f766a9136p-759, 0.0, 0.0,
     0x1.37ad292d4ba59p-873, 0.0, 0.0, 0x1.6275e30a58643p-931, 0.0,
     0x1.7c57708bb8007p-185, 0.0, 0x1.100b2cbafa45ep-684, 0x1.9abe189591986p-967, 0.0,
     0x1.1fa84eed78fb8p-672, 0x1.bb3159f8a3a02p-271, 0.0, 0x1.f12bacb5b5647p-649,
     0x1.2905b1499055ap-646, 0x1.c1ddd763d5beep-640, 0x1.2a93e832cf215p-801,
     0x1.0165b11ad30f2p-175, 0x1.7a795284e3e49p-485, 0.0, 0.0, 0x1.ec6ac0d2432ep-220,
     0x1.beb805cc60a81p-239, 0x1.e3a217b66c69dp-357, 0x1.2fdb92591c4ddp-993,
     0x1.85932eafa4feep-789, 0.0, 0x1.03e8d6090c8cap-677, 0x1.5b415782f4d7ep-544,
     0x1.f56ee562d0f87p-849, 0x1.e19634f2f28c4p-885, 0x1.b349221e7b70fp-220,
     0x1.517e003e5a2b1p-1010, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93cd90bcd443ep-610,
     0.0, 0.0, 0x1.e1a9b804e6edfp-214, 0x1.22b52ce45f0f3p-539, 0.0,
     0x1.2eccd37edda8cp-916, 0x1.66b41dbe9f70ap-207, 0x1.c2c0298082013p-240, 0.0, 0.0,
     0x1.cbd988a78f772p-645, 0.0, 0x1.7497ad37b586ep-746, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c57d97ca114d3p-517, 0.0, 0.0, 0x1.90cae752831d2p-105, 0.0,
     0x1.5ab227e31a222p-777, 0x1.e55ad55c991a5p-511, 0.0, 0.0, 0.0,
     0x1.7dbab7c5b0418p-905, 0x1.3ded0ef137a16p-897, 0x1.a351550ad9695p-296,
     0x1.00875a8d7dae5p-717, 0x1.46e58072cf1fep-99, 0.0, 0.0, 0.0,
     0x1.f840c23cb2be4p-858, 0.0, 0x1.3b9a9701a736cp-873, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.07bfa6f560472p-335, 0.0, 0x1.1fcff2d4b388bp-264, 0.0, 0.0, 0.0,
     0x1.bafde5e08fd8bp-526, 0.0, 0x1.ef9bfb8f203edp-784, 0x1.47dc5c44ee496p-749,
     0x1.81c63e0b111a8p-439, 0.0, 0.0, 0.0, 0x1.5b9424765cd16p-1012,
     0x1.f8f933d744313p-345, 0.0, 0x1.e79a2872c7644p-105, 0.0, 0.0, 0.0, 0.0,
     0x1.07f7575a62adep-877, 0.0, 0x1.db1d6c717df6ap-631, 0x1.14da30759465cp-464, 0.0,
     0.0, 0x1.ca86cc13861a3p-1008, 0.0, 0.0, 0x1.9c0a090661ecdp-375, 0.0,
     0x1.bab15f1b663cap-338, 0x1.b5571a2289d78p-907, 0.0, 0x1.c50b6cf236c6ap-270,
     0x1.638c7c69b0688p-683, 0x1.24fa0c704e96bp-285, 0x1.ed82174195564p-469,
     0x1.58252a6797892p-843, 0x1.d27e829fd68e3p-195, 0x1.bef63b5517b95p-654,
     0x1.d3116eaa9e5afp-168, 0x1.74702d92817b1p-830, 0.0, 0x1.d43cb96ba680cp-772,
     0x1.dd6d8a936e1f7p-161, 0x1.4ae72247ca42ap-63, 0x1.cb0b3db2d2607p-784,
     0x1.92a81a4b77067p-695, 0x1.115b23ee1aa01p-256, 0x1.9dffd019757fcp-199,
     0x1.d36239284ffe9p-554, 0.0, 0.0, 0x1.7c0f3a6573dddp-473, 0x1.55eaa33946be4p-837,
     0.0, 0.0, 0x1.a2d0476d00839p-893, 0.0, 0.0, 0.0, 0x1.84957b6225c9dp-678, 0.0,
     0x1.be58dd3f9f699p-105, 0x1.3f519f45cdd42p-132, 0.0, 0.0, 0x1.3f1a2dd61dbcdp-123,
     0.0, 0x1.67990334785d5p-709, 0.0, 0x1.35ca845bc39ccp-252, 0.0,
     0x1.db3bf28e0235dp-204, 0.0, 0x1.2fdb0313799b7p-770, 0.0, 0.0, 0.0,
     0x1.a4023416eb921p-870, 0.0, 0x1.0aceaa0f36e9ep-588, 0x1.82cff6f2e0d14p-546,
     0x1.69c40f8d8588ep-592, 0.0, 0.0, 0.0, 0x1.c89d3637929b9p-530,
     0x1.bd466741bad12p-725, 0x1.c9a61095b2a52p-95, 0.0, 0.0, 0x1.22ea034dddbbep-473,
     0.0, 0x1.9baad7beacf28p-410, 0x1.3a041bc060b33p-333, 0.0, 0x1.b5cc364c649ep-441,
     0.0, 0x1.4df11daf8df7cp-673, 0x1.601c244ca4567p-337, 0x1.7e6b603762958p-31,
     0x1.8abd1ab533279p-522, 0.0, 0x1.4262daf9bf347p-539, 0x1.45c78bc3a6326p-943,
     0x1.1ca18c8f2bf28p-527, 0x1.1a6c2aba153ep-113, 0.0, 0.0, 0x1.4bacd6e0fdb1bp-409,
     0x1.a885c39babb1ep-380, 0x1.fa25a94b26a78p-781, 0x1.0b8c9417761fcp-705, 0.0, 0.0,
     0x1.760a401969c25p-434, 0.0, 0.0, 0.0, 0.0, 0x1.46129f1d7f978p-705, 0.0, 0.0,
     0.0, 0x1.86b52e5e0a905p-328, 0.0, 0x1.bb016fe92142p-636, 0x1.979a7713d70b7p-863,
     0.0, 0x1.267d0c9b6153ap-592, 0.0, 0.0, 0x1.29c16e4fa4f6dp-600, 0.0,
     0x1.9f33ccd87be76p-764, 0x1.06301e5ca4cbap-1021, 0x1.40b29c34c8243p-890, 0.0,
     0x1.bea93536589adp-29, 0.0, 0.0, 0x1.f45a57be2c2e4p-555, 0x1.434ff65c96b11p-208,
     0x1.4e761f8902c4dp-945, 0x1.d87b5a8b4c9b8p-554, 0x1.bd4d8c3d564e8p-201,
     0x1.bc5bba260d763p-958, 0x1.ab22da033d30cp-58, 0.0, 0x1.6272dc5ddfe79p-546, 0.0,
     0.0, 0x1.ed7229743a5d6p-229, 0.0, 0.0, 0x1.20353f3ba7d65p-82,
     0x1.eed87618236ebp-43, 0x1.56f6d2a98b033p-142, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2bb642c573419p-97, 0x1.5c23c02e2f54bp-627, 0x1.a5d9df3fc37c4p-965, 0.0, 0.0,
     0.0, 0.0, 0x1.2e39012ba6013p-570, 0x1.2dc314c7fe9e4p-35, 0.0, 0.0,
     0x1.1232ad84b8117p-370, 0.0, 0x1.327193dbf1971p-949, 0.0, 0x1.8656f35d4e37ap-595,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d5f6cf24d1bd9p-288, 0.0, 0.0,
     0x1.943127e44708dp-200, 0.0, 0x1.4ff660d85e39fp-624, 0x1.3aa1a732dc103p-115, 0.0,
     0x1.a3539836028b7p-508, 0x1.258a3bdf2a585p-966, 0.0, 0.0, 0.0,
     0x1.53e3ad3965786p-814, 0.0, 0.0, 0.0, 0.0, 0x1.a883e4cd7c70cp-929,
     0x1.2da0f6472741ap-243, 0.0, 0.0, 0.0, 0x1.c5e6e8e59d732p-337, 0.0,
     0x1.6b29c064e8dacp-759, 0x1.422099cae4902p-340, 0.0, 0.0, 0x1.26e8859234082p-946,
     0x1.91fcbb51f79efp-117, 0x1.361b8e0fdbc05p-481, 0x1.d95fcfa64c876p-148,
     0x1.b021669e09772p-902, 0.0, 0.0, 0x1.00901008e4b8p-66, 0.0,
     0x1.4ac9c2d9aaeefp-925, 0x1.8e7629bab21c6p-523, 0.0, 0.0, 0x1.188537098f6a6p-866,
     0x1.3b9a22434ee9dp-27, 0x1.8fe38c515583bp-917, 0x1.ad4da665075bap-901,
     0x1.9306749edd0bcp-552, 0x1.877045d75cbe1p-998, 0.0, 0.0, 0.0,
     0x1.73513128276fap-958, 0x1.07e699acf1d7ap-510, 0.0, 0x1.d5bea2cebbd4ep-1019,
     0x1.96736cf5d3777p-212, 0x1.0f189458bc812p-997, 0.0, 0.0, 0x1.ecd3a48792ab2p-693,
     0x1.91bd5ee6957cp-385, 0x1.7cbc96831af7ep-175, 0x1.535b12d75fb13p-948, 0.0,
     0x1.1a980bd97792ep-13, 0x1.1f338022abf41p-794, 0x1.61f4f6d1948e9p-376,
     0x1.dc83cb2c69c14p-775, 0x1.626aeee7b0945p-276, 0x1.639e3c7cf3e18p-952, 0.0,
     0x1.84bdfe93ec7e3p-927, 0.0, 0x1.96f17898bc9eap-1002, 0x1.fbb3f814b0823p-927,
     0x1.e14dd2165ab24p-837, 0.0, 0x1.b19c691acbb63p-98, 0x1.f630ca3219474p-666, 0.0,
     0x1.d2406016669e8p-712, 0.0, 0.0, 0x1.1e8c0272e599cp-439, 0x1.d565dc5e19cc9p-887,
     0.0, 0x1.a7e61e893c7f2p-512, 0x1.6b6ecccf5f94p-531, 0.0, 0.0, 0.0,
     0x1.dbbfe6577d327p-608, 0x1.5f7148eea62c8p-642, 0.0, 0x1.963c4cca6d497p-199, 0.0,
     0.0, 0x1.66529a7a31e94p-56, 0.0, 0x1.744c8fdc270bdp-402, 0.0,
     0x1.0f9db55630e43p-630, 0x1.87b17b5d90d5p-265, 0x1.c87454ee171c1p-176,
     0x1.80857b7c40538p-981, 0.0, 0.0, 0x1.1710d8c2f58c2p-433, 0x1.e868fd65b9fbbp-200,
     0.0, 0x1.8c31525185926p-756, 0.0, 0.0, 0x1.5ff36ff5346a6p-929, 0.0,
     0x1.f2d71d9ccf065p-33, 0x1.141395613f236p-687, 0x1.0820d931b3d73p-296, 0.0,
     0x1.3564f94fa9ffcp-601, 0.0, 0.0, 0.0, 0x1.c88467ebccdefp-343,
     0x1.261e7184c405ap-836, 0x1.54dd09dbb2682p-624, 0.0, 0x1.1f59607a53313p-899,
     0x1.7a5004d0bb3c2p-661, 0.0, 0.0, 0x1.125dbbdc5af11p-244, 0x1.42d2ca2eca4bcp-516,
     0x1.44679be9629fp-391, 0.0, 0x1.c553b5849950ep-15, 0.0, 0x1.4d51225024945p-785,
     0x1.80c20de63d7c9p-730, 0.0, 0.0, 0.0, 0x1.68b75fabde9a6p-215,
     0x1.1904c40eafe67p-938, 0x1.3e57496aada62p-758, 0x1.2dfd0b12def18p-519,
     0x1.87f883d7682c4p-921, 0x1.d0b73fccfb941p-728, 0x1.76c0a8c2a965bp-528, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.caab185000a54p-121, 0.0, 0.0,
     0x1.f9491cc3d7e34p-277, 0.0
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
            tmp1 = Sleef_finz_sinhd2_u10kvx(tmp0);
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
    printf("Sleef_finz_sinhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sinhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
