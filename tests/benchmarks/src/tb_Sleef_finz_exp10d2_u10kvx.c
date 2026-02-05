/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d2_u10kvx.c --function \
 *     Sleef_finz_exp10d2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.2e3f20f51704cp-470, 0x1.c9c49c6c9a642p-986, 0.0, 0.0,
     0x1.ec0a6f4ee352ep-267, 0.0, 0.0, 0x1.062a3c3080ab8p-923, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.78f541d6aef19p-528, 0.0, 0.0, 0.0, 0.0, 0x1.63d2c1d073a6bp-839, 0.0,
     0.0, 0.0, 0x1.d19a9b423e113p-797, 0.0, 0.0, 0.0, 0x1.56161c8e5ac8fp-131,
     0x1.71c4887f29349p-498, 0x1.a0dd017f10e11p-559, 0.0, 0.0, 0x1.c3d02248ce773p-324,
     0.0, 0x1.a2fb633a6b123p-377, 0x1.25beee5ce6973p-745, 0x1.67c8501ef9521p-182, 0.0,
     0x1.d0efd9985db9dp-59, 0x1.f77581225c305p-785, 0.0, 0x1.15abe2304de9dp-129,
     0x1.ca2fc55897d92p-657, 0.0, 0x1.8efbc98d7634fp-829, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1bd491c4d9dafp-399, 0.0, 0x1.e8f70d29c01e3p-535, 0x1.78e0c5eeea115p-147, 0.0,
     0x1.deda05f26a456p-969, 0.0, 0x1.76cbc01b97c89p-944, 0.0, 0.0,
     0x1.7000aa8354715p-441, 0x1.f83663fc0e102p-681, 0.0, 0x1.dc2b1b00e70c5p-681, 0.0,
     0x1.ba68bc036bd73p-985, 0.0, 0.0, 0x1.583077f7d0a68p-897, 0.0, 0.0,
     0x1.263b5ce45e23fp-43, 0x1.80a565b73fa66p-515, 0x1.2e4dca359b526p-193,
     0x1.ad08e1b869c11p-302, 0x1.f2a0ebe4ff899p-710, 0x1.73d6c5c303744p-378,
     0x1.b5e16749e54a6p-126, 0.0, 0x1.e00b894518f07p-638, 0x1.9a415b7a99dc4p-860, 0.0,
     0x1.3c37da28b300fp-299, 0.0, 0.0, 0.0, 0x1.ee7a7cf01b449p-156, 0.0,
     0x1.169d1b435e4c7p-601, 0x1.356ef7b30e3ap-865, 0.0, 0.0, 0x1.66d9d0381d4d1p-551,
     0x1.d5b94e3e34311p-741, 0.0, 0x1.b6eafe39ec14dp-209, 0x1.5eb45091e5b19p-965,
     0x1.ad0c22c9146b9p-695, 0.0, 0.0, 0x1.eec3856b5a288p-178, 0x1.ff87b5baaa5a9p-86,
     0.0, 0.0, 0x1.a4aa194becf74p-259, 0x1.f304b24250cadp-460, 0x1.5b88303e9eff8p-978,
     0.0, 0x1.1c24dec0c88dp-203, 0x1.32d0b3cddf8b2p-729, 0x1.be45f745439d1p-65, 0.0,
     0x1.86cb44ea0d74ap-674, 0.0, 0x1.5984a8ea5ab9p-283, 0x1.193ddab1cc493p-711,
     0x1.97b424e97ef7ap-962, 0x1.39bf8c852ededp-279, 0x1.3c5db3c3693a8p-960, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.55c62a94c8c55p-298, 0x1.2dda2748f7852p-90,
     0x1.eeb0ec9d91accp-226, 0.0, 0x1.c599852d6cfc1p-413, 0.0, 0x1.2b8dbb2707b4p-149,
     0.0, 0.0, 0.0, 0.0, 0x1.1fc8129b02526p-436, 0.0, 0.0, 0x1.3038bac03fee6p-189,
     0.0, 0.0, 0x1.219029687a41ep-366, 0x1.56ad466b213cdp-618, 0.0,
     0x1.fa97968ac2f9ep-580, 0x1.bce83787e376bp-382, 0.0, 0x1.43e75ea5427fap-225, 0.0,
     0x1.8ab10beebd4e8p-705, 0.0, 0.0, 0x1.3b5624620abafp-766, 0x1.59a953c93072fp-543,
     0x1.8760ebcf412e5p-76, 0x1.11ef14090ca27p-72, 0x1.b62b35d42138p-735, 0.0,
     0x1.fef0cbed4c631p-628, 0x1.5fd5875753b0ap-514, 0x1.063ba11925766p-849, 0.0,
     0x1.5dbdbe37c60d2p-180, 0x1.06fa60966bba2p-411, 0x1.746513d30fd59p-539,
     0x1.99557b2c16ca9p-666, 0x1.ba16778d716b3p-196, 0.0, 0x1.58794f7605da9p-888, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cd7055c5e50f7p-606, 0.0, 0.0, 0.0,
     0x1.cfadb9df527a3p-537, 0x1.d7019fc1035d3p-211, 0.0, 0x1.67d8a1d315244p-248, 0.0,
     0.0, 0.0, 0.0, 0x1.fa041d274b64dp-426, 0.0, 0x1.d0682cefcba69p-339,
     0x1.2455d23593a91p-183, 0.0, 0.0, 0.0, 0x1.7f78b2e016841p-64,
     0x1.28c65bcf3a44ap-731, 0x1.3573b1e99d1c5p-849, 0.0, 0.0, 0x1.ecc0819eeef8ap-585,
     0x1.6dff0678dd214p-463, 0x1.c5438e3478ea1p-65, 0.0, 0x1.c1b539c01ef51p-420,
     0x1.f91a823d9504ap-19, 0x1.d27c3f9cf6c45p-978, 0x1.4394a93331b44p-490,
     0x1.5acc09fea1d2fp-919, 0x1.6d96b054b3631p-749, 0.0, 0x1.ef4b784f45ecep-948,
     0x1.b27d8e8a1907ap-1018, 0.0, 0x1.57e761313acecp-943, 0x1.4af3b1600e0fbp-981,
     0x1.f710a99b34dafp-578, 0x1.180bec608dd75p-409, 0x1.ad1b06fb203b5p-636, 0.0, 0.0,
     0.0, 0.0, 0x1.d10ff38a2266cp-645, 0.0, 0x1.a4211644b885dp-245, 0.0,
     0x1.07fc7ca9bd728p-88, 0.0, 0.0, 0x1.449e0db6aed98p-538, 0.0,
     0x1.e506ef31a08a1p-906, 0.0, 0x1.ca2bfaa9e2616p-807, 0x1.a86cc1a37c2e9p-39, 0.0,
     0.0, 0.0, 0x1.0f61ecb6a8d9fp-859, 0.0, 0x1.e1bf61b8738c1p-642, 0.0, 0.0, 0.0,
     0.0, 0x1.5aa861d0583ddp-842, 0x1.85f7691745dd7p-517, 0x1.af93ea40f25e5p-791, 0.0,
     0.0, 0x1.9657e756823d6p-55, 0x1.69ba18d9abb59p-16, 0.0, 0.0,
     0x1.d3d81b6bc08fap-788, 0x1.00f4bf882ea64p-701, 0x1.88c5f04be0521p-86,
     0x1.1e4c5c8ba53bbp-151, 0x1.bbdbeca1d3653p-426, 0.0, 0.0, 0x1.52e4e41e9199p-1012,
     0x1.c539368418e35p-797, 0x1.680e20ccfbfdbp-63, 0x1.b124ff28a53b4p-181, 0.0, 0.0,
     0x1.3915bdb57afdbp-108, 0.0, 0.0, 0.0, 0.0, 0x1.0f51e6831b9c1p-306, 0.0, 0.0,
     0x1.e2bb22890f5f6p-14, 0.0, 0x1.a9577b01cff6bp-979, 0.0, 0x1.429b823af05bcp-848,
     0x1.852e67ea62431p-196, 0x1.a94cf371fe94fp-112, 0.0, 0x1.c4903e3dce077p-353,
     0x1.ca66e12e06987p-928, 0x1.3c62960f08eb3p-205, 0x1.ca1c68e7d64a3p-268, 0.0,
     0x1.a7771bd2ae6c4p-324, 0.0, 0.0, 0x1.cada7270692fcp-197, 0x1.143f8efc0a24cp-562,
     0x1.b0c7bd49d4d6fp-125, 0x1.630942a23009ap-457, 0.0, 0x1.bfd651705e98cp-676,
     0x1.a20d9f07268e9p-251, 0.0, 0x1.6c43c14c99e75p-99, 0x1.1e470f1d121fcp-923, 0.0,
     0x1.410799b77e136p-921, 0.0, 0x1.c7b7c0e639dffp-763, 0x1.7efb924ec23f3p-208, 0.0,
     0x1.bfc58eb6e9186p-79, 0x1.a02ef1df4f366p-346, 0x1.57e336a0739f3p-439,
     0x1.e9454458a79e2p-639, 0.0, 0x1.2eebd09c4888bp-350, 0.0, 0x1.90afb85a94accp-478,
     0x1.4505873571b5ep-565, 0.0, 0x1.64e8bfd956d34p-691, 0x1.4fe0d550d5e62p-651, 0.0,
     0x1.517128f7528efp-611, 0.0, 0.0, 0.0, 0x1.581f07c59c3afp-583, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2aabd95c2f448p-790, 0x1.b2a011a3b6dafp-352, 0.0, 0.0,
     0x1.cc8430cbebbc6p-474, 0.0, 0.0, 0x1.701b46fd44931p-862, 0x1.0dbb59378a288p-64,
     0x1.972bb9f01bc3ep-742, 0x1.44f09e82296e8p-708, 0.0, 0.0, 0.0, 0.0,
     0x1.6791bd045f697p-441, 0x1.bcc3f70b6aed3p-369, 0x1.e65baf95256dfp-55, 0.0,
     0x1.ac48fa2b21726p-756, 0.0, 0.0, 0x1.a93498b81ac03p-672, 0.0,
     0x1.e0be9b12a99c8p-933, 0.0, 0x1.a0042c06258b9p-783, 0.0, 0.0, 0.0,
     0x1.39fb182589887p-432, 0x1.fc7c385041ff6p-914, 0.0, 0x1.2fbbbecdfef3cp-422, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0b317d1ae297p-300, 0.0, 0x1.e72a84d31b82p-382,
     0x1.cc3e3b93e233bp-417, 0.0, 0.0, 0x1.40bb427e6637p-284, 0x1.6d4df574b84f1p-783,
     0x1.6e4fe23215434p-807, 0.0, 0x1.a9c58f7c87ddp-996, 0x1.5a1b86a0ce9c1p-529,
     0x1.3c6ffbffc6a36p-847, 0x1.efe472df5fd29p-263, 0.0, 0x1.de197fa431353p-601,
     0x1.ec1ba71a8ec1cp-267, 0.0, 0.0, 0x1.b6561a68b9c3cp-872, 0x1.43b44c99c291cp-790,
     0.0, 0x1.500e4ade52a6ap-347, 0x1.7901b355cd8c2p-392, 0.0, 0x1.8c880ba66c9efp-898,
     0.0, 0x1.628220159c278p-748, 0.0, 0x1.09238cfca0294p-146, 0.0,
     0x1.a6f34f90af44dp-156, 0x1.07fd8a41993a4p-143, 0x1.28392367455a7p-18, 0.0, 0.0,
     0.0, 0x1.112ecd257de9bp-737, 0.0, 0.0, 0.0, 0x1.32f41236698eep-112, 0.0, 0.0,
     0x1.e9691130190f3p-979, 0x1.acea05d7df23dp-637, 0.0, 0.0, 0.0, 0.0,
     0x1.ec8d14b71fcb1p-701, 0x1.d8fd43c6bb06ap-443, 0x1.f807c1dfb3423p-461,
     0x1.010b4a964c94p-155, 0x1.b68557217ad9p-288, 0x1.bd4c0fe04ee53p-926, 0.0,
     0x1.af0c4e0dc76f1p-821, 0x1.378d01a9470d3p-507, 0.0, 0.0, 0x1.8192fb72d10dp-920,
     0x1.4e7cc97ef365fp-526, 0.0, 0.0, 0.0, 0x1.843b7a38202c7p-275, 0.0, 0.0,
     0x1.7f6bef907698ap-99, 0.0, 0x1.1ed236edb04f2p-676, 0.0, 0x1.ab596fc2262f1p-531,
     0.0, 0.0, 0.0, 0.0, 0x1.b730d38627017p-336, 0.0, 0.0, 0.0,
     0x1.ce011ced56e46p-290, 0x1.2f723fb98efa5p-596, 0.0, 0.0, 0.0, 0.0,
     0x1.172475d25ddd3p-480, 0.0, 0x1.eafe14cb4567p-16, 0.0, 0.0, 0.0, 0.0,
     0x1.f92dd50e3456fp-719, 0.0, 0.0, 0.0, 0x1.10bff536ec277p-146, 0.0, 0.0, 0.0,
     0x1.cd959ce481203p-155, 0x1.9ba23be1faa23p-828, 0.0, 0.0, 0.0, 0.0,
     0x1.ca52a4df16337p-416, 0.0, 0.0, 0.0, 0.0, 0x1.2676af0a19cb4p-722,
     0x1.d7d5a214d78b3p-418, 0x1.adc70b1ef6496p-808, 0.0, 0x1.d78fb9594162ep-400, 0.0,
     0.0, 0.0, 0x1.f287b18cf7903p-984, 0.0, 0x1.2791a22c7e844p-684,
     0x1.ef2973bf09f7bp-706, 0x1.b02afafe7d59bp-638, 0x1.486bf497f07bp-65, 0.0, 0.0,
     0x1.f1709f3765ba5p-464, 0.0, 0.0, 0.0, 0x1.fc73a15d86d8ep-907,
     0x1.d530ca7b7bb25p-390, 0x1.98b7d5e4c0328p-884, 0.0, 0x1.a2de40bc85579p-591, 0.0,
     0.0, 0.0, 0x1.a72eb6d1449d8p-389, 0x1.45f7cc2c5863fp-269, 0x1.5ed493c997c91p-227,
     0x1.e1671ef708e88p-813, 0x1.f28ddef2722a5p-531, 0x1.b383f14f30379p-605, 0.0, 0.0,
     0x1.149a81b69f686p-764, 0.0, 0.0, 0x1.43fd520f8e4e6p-513, 0.0,
     0x1.9b1189400c95ep-794, 0x1.fdb8670caabaap-977, 0x1.12e2cafbefe61p-167, 0.0,
     0x1.d551e0a2ca76ap-484, 0x1.1889abca80254p-655, 0x1.324b9f56b4912p-420, 0.0,
     0x1.16f1075eef371p-319, 0.0, 0.0, 0.0, 0.0, 0x1.6cf2e13b562fbp-232, 0.0, 0.0,
     0x1.7365f56cce448p-361, 0x1.935fd412212e7p-538, 0x1.e9e1925947b21p-451,
     0x1.fa1e48ade7258p-826, 0x1.d197b01c8d5c9p-131, 0.0, 0x1.d613eb352101p-722,
     0x1.5870813b42f5fp-828, 0x1.fd6e9d4351dd2p-822, 0x1.5a7ba13053852p-1008, 0.0,
     0.0, 0.0, 0x1.1d4c08e882b29p-129, 0.0, 0x1.7daa4df6032bcp-8,
     0x1.9862f49d94bdbp-532, 0x1.e51560eeba62dp-769, 0x1.374b321fd7d63p-797, 0.0, 0.0,
     0x1.3ee66e9fc1dc6p-871, 0.0, 0x1.8cb75e10393acp-507, 0.0, 0x1.91ed16ebc10dep-470,
     0x1.7d7f7960b83bep-934, 0x1.e3e4d652885fep-68, 0x1.c0d3f38cd7635p-353,
     0x1.db3780169bdcbp-1012, 0x1.9bfe3186f1ec1p-876, 0.0, 0x1.4a6b95dc14437p-913,
     0.0, 0x1.845e21d1282c7p-578, 0x1.e44b571a4ae49p-617, 0.0, 0x1.86b3338b52196p-741,
     0.0, 0x1.80b60fdb5bda1p-163, 0.0, 0.0, 0x1.b52fe77e93a7dp-723,
     0x1.42382641f139fp-556, 0x1.60573e987797ap-608, 0.0, 0x1.b96ec84e8682p-880,
     0x1.8deb92d55c54bp-381, 0x1.15eeb02d28a6ep-578, 0.0, 0x1.a54f694e62e3ap-29, 0.0,
     0x1.d9665ad45531cp-975, 0.0, 0.0, 0.0, 0x1.c2bc688b39209p-755, 0.0,
     0x1.6e4fd3d0b939dp-532, 0.0, 0.0, 0x1.23f88e38fee34p-752, 0x1.54d029f96e486p-81,
     0.0, 0.0, 0.0, 0x1.afed403b08997p-710, 0x1.9345446d7a539p-724,
     0x1.930c661e29072p-556, 0.0, 0.0, 0x1.70e9cbf9456bap-946, 0.0,
     0x1.f4dab7cc88875p-683, 0.0, 0x1.0a7d9ed2243eep-943, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c38c07b7f918p-198, 0.0, 0x1.f548cdb1e8d4bp-339, 0x1.b15a661dfe1b7p-839, 0.0,
     0x1.6422e817a578cp-597, 0.0, 0x1.8459af61e6f7bp-353, 0.0, 0x1.7581a6bb6c1c2p-750,
     0x1.36cbfcf2d70acp-149, 0x1.a29ee4ec2165fp-365, 0x1.b909e0b0290ep-863, 0.0,
     0x1.53c23b1c5d6ecp-203, 0.0, 0x1.901fca10fa366p-695, 0.0, 0.0, 0.0,
     0x1.22a87a4334d59p-108, 0x1.bce57eb123126p-901, 0.0, 0.0, 0x1.2add920144537p-413,
     0.0, 0x1.5b4c290a62626p-492, 0.0, 0x1.1fe4b60ede4b2p-873, 0.0,
     0x1.b76fc93e91edp-423, 0.0, 0x1.f872b1802235dp-1015, 0.0, 0.0, 0.0,
     0x1.6ae3fe4ed7e29p-793, 0.0, 0.0, 0x1.e9f3d9a5d012ap-678, 0x1.36cc5c8043934p-686,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5fb7ec4ae35cdp-900, 0x1.78705718d8695p-94, 0.0,
     0x1.585a48fee561cp-387, 0.0, 0x1.e267b604ce3aap-97, 0x1.6e47914f03bcdp-835, 0.0,
     0.0, 0x1.ef05bd7ecc3bbp-216, 0x1.6605aafabaf74p-947, 0.0, 0.0, 0.0,
     0x1.d656f8790e33fp-988, 0x1.39404360ce6d4p-468, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.dc4b7c7bca5a9p-197, 0x1.34326504157b8p-997, 0x1.d72575a99a0f1p-4,
     0.0, 0.0, 0x1.4b4b04c4000dcp-870, 0x1.6dd28a4fb53a6p-828, 0.0,
     0x1.e2b62c15b0473p-395, 0x1.de80780e824cfp-668, 0.0, 0x1.5a03c4e0c7052p-292,
     0x1.2b469eb03af6ap-509, 0x1.73c20b969d00cp-879, 0.0, 0x1.5b1abb404cd81p-848,
     0x1.d64ce57f0b9a7p-657, 0.0, 0x1.ce422d26b0956p-403, 0x1.f5fdda999d9efp-548,
     0x1.c89267e62a1ep-646, 0.0, 0x1.fb825c1dc196dp-844, 0.0, 0.0,
     0x1.7ebb957115102p-533, 0.0, 0.0, 0x1.8c530cf911dbdp-471, 0.0, 0.0, 0.0,
     0x1.346ede06a973fp-755, 0x1.49bb9ca9be727p-273, 0x1.84fa3a813678p-525, 0.0, 0.0,
     0x1.6b8ca1c6706bep-600, 0.0, 0.0, 0.0, 0x1.3579c4e9201dbp-506,
     0x1.ddeb0b2f6d8d1p-668, 0.0, 0.0, 0x1.ed89eb69a7a85p-910, 0.0, 0.0, 0.0,
     0x1.f83b9c2f4f781p-998, 0x1.0dbac6ebc3a4p-1017, 0.0, 0.0, 0.0,
     0x1.4098ccc09cd46p-11, 0.0, 0x1.d860e4e42c28ep-244, 0x1.b9ee57a1e2d6dp-912, 0.0,
     0.0, 0x1.3e1542e70e6bp-855, 0.0, 0x1.52a23c78b3a32p-140, 0.0,
     0x1.93ed616472194p-659, 0.0, 0.0, 0x1.10beb83b2755p-102, 0x1.be680985b9516p-629,
     0.0, 0.0, 0x1.53904d6fd9762p-351, 0.0, 0x1.aad0fd4a1ca6cp-379,
     0x1.8ba82ab0b02d7p-259, 0.0, 0.0, 0x1.7acfb9178e876p-281, 0.0,
     0x1.e47aa3ee1098fp-612, 0.0, 0.0, 0.0, 0.0, 0x1.47fba18b432f6p-750, 0.0,
     0x1.218e90d70b13cp-876, 0.0, 0.0, 0x1.098481fdde4ecp-605, 0x1.e4b94c0ebdc5fp-615,
     0x1.3ef97419c87cbp-219, 0x1.413fb44b50849p-876, 0x1.f1ffa5ed808c3p-91,
     0x1.25a3a4f9cf2d7p-58, 0.0, 0x1.1c924132524d8p-331, 0.0, 0x1.0f6312453b0c7p-445,
     0x1.2c0ab1a3249edp-990, 0.0, 0x1.6082729056786p-460, 0x1.34376fb6c5262p-577,
     0x1.166e75eebb405p-287, 0.0, 0x1.f68ce03a215a9p-481, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.50584384c71d7p-432, 0x1.94ee36c390129p-405, 0x1.d8b36853c3db4p-510,
     0x1.4e34932c7b0eep-210, 0.0, 0x1.4893698c6337fp-279, 0x1.f7d506be4c829p-235, 0.0,
     0.0, 0.0, 0x1.5330f51aa06cbp-954, 0.0, 0.0, 0.0, 0x1.931fa7ab35477p-805, 0.0,
     0.0, 0x1.4d28f1e44da95p-845, 0x1.998eb9d9a28c4p-639, 0.0, 0x1.ee15d64ee1412p-337,
     0x1.b2e2be9068cc7p-175, 0x1.4327cf8cea64dp-418, 0x1.c36b491c01ad6p-78, 0.0, 0.0,
     0.0, 0x1.4fa645537f053p-896, 0.0, 0x1.44e912dfe3502p-795, 0x1.0edbd2314a0e5p-831,
     0x1.941aaf4a0f9c4p-583, 0.0, 0x1.83f3ba57482fap-146, 0x1.3fe52c28013fdp-841, 0.0,
     0.0, 0x1.e7834e67f1c3dp-659, 0x1.970b94bebe1b3p-756, 0x1.2bba53cceb01p-794, 0.0,
     0x1.966714a9e7488p-721, 0.0, 0x1.eb02c15ea8ca5p-451, 0x1.a0f31830ca0d3p-804, 0.0,
     0x1.74b01a503a5e8p-296, 0.0, 0x1.e893c49d8d89ep-885, 0.0, 0.0,
     0x1.59a1594e10781p-747, 0x1.51aff90ce189cp-622, 0x1.04b71efbf104ap-126, 0.0, 0.0,
     0.0, 0x1.7ad66a5aceafbp-1009, 0x1.5eed110af4adcp-442, 0.0,
     0x1.1392d1dd291afp-412, 0x1.e2ce5aa6804bfp-557, 0.0, 0x1.c1b70ec4dba9p-127,
     0x1.4d0f76aaae9b2p-37, 0.0, 0.0, 0x1.3fe56fb3d48a2p-366, 0x1.51b2b810f336p-975,
     0.0, 0x1.174ae06c94756p-236, 0.0, 0.0, 0x1.c6b33f959719ap-211,
     0x1.1ed1aa6404d91p-635, 0.0, 0x1.0ed357ef8294dp-370, 0x1.cddcbb7f5bd12p-972,
     0x1.b51a68509c9b7p-710, 0.0, 0x1.899316069b0e5p-894, 0.0, 0x1.92e0297b45991p-579,
     0.0, 0.0, 0.0, 0x1.b2e3e2cc11fefp-75, 0.0, 0.0, 0x1.fa1ae51d8d148p-397, 0.0, 0.0,
     0x1.544560c64e5efp-196, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2811bba4f0f6p-66,
     0x1.c228fda778d06p-54, 0x1.f4f8e1a928cbep-730, 0x1.d61bed22e5813p-391, 0.0, 0.0,
     0.0, 0x1.9016949577dcep-11, 0.0, 0.0, 0.0, 0x1.528d14538b014p-395,
     0x1.81a6211b4361p-934, 0.0, 0x1.a391c15b93fbp-480, 0x1.32022a41c0e18p-300,
     0x1.eb368a6d26c6dp-851, 0x1.960d8c7a59289p-145, 0.0, 0x1.222b0d84e2824p-918, 0.0,
     0.0, 0x1.fe3741f57fbf3p-723, 0.0, 0.0, 0x1.243851a067277p-859, 0.0,
     0x1.6783f9989bdffp-405, 0x1.4e1959be6364ap-833, 0x1.5910bf58c4ecfp-208,
     0x1.eed0d722d4123p-219, 0.0, 0x1.5fa34ac6261afp-399, 0x1.0682aa431ddafp-424,
     0x1.b1d5430b5b2ep-196, 0.0, 0x1.922eb8520f627p-817, 0x1.5bdfb8f31b1c9p-751,
     0x1.f4e47645b5a3dp-622, 0.0, 0x1.36704b9b87a6fp-325, 0x1.2405874ea5c77p-86, 0.0,
     0x1.6ef9a31268f9cp-506, 0.0, 0x1.822de8e093fd6p-404, 0x1.ba02760f5af42p-694,
     0x1.2262be127d3fdp-100, 0.0, 0x1.89671146aa121p-8, 0.0, 0.0,
     0x1.5275210bf6a0ap-268, 0x1.f94429a524bfap-913, 0.0, 0.0, 0.0, 0.0,
     0x1.584fd116782f9p-787, 0x1.42647b7ae2612p-611, 0x1.0b44290b483fap-89,
     0x1.ef828f2b829cdp-482, 0.0, 0.0, 0.0, 0.0, 0x1.8877f9f9aabbep-1017,
     0x1.b3b35e4f5d263p-884, 0.0, 0.0, 0x1.88665261dd468p-451, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e4289e3b8d741p-985, 0.0, 0.0, 0.0, 0x1.a4eaa93904f14p-257,
     0x1.4a43d8cffb421p-282, 0.0, 0.0, 0x1.15269591495a9p-250, 0x1.2f0d5e64e317bp-136,
     0x1.c9ecfe0a935fap-782, 0.0, 0.0, 0.0, 0x1.a6c09f0c662bp-411,
     0x1.a1b7011b3dd85p-125, 0.0, 0x1.3a198b0f731fdp-1005, 0.0, 0.0, 0.0, 0.0,
     0x1.a11c431715e92p-713, 0.0, 0x1.f91149c8158bdp-72
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
            tmp1 = Sleef_finz_exp10d2_u10kvx(tmp0);
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
    printf("Sleef_finz_exp10d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp10d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
