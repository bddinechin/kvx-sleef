/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcd1_u15purecfma.c --function \
 *     Sleef_finz_erfcd1_u15purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.292f89983e2c3p-507, 0x1.8d3436c0c36d1p-255, 0.0, 0.0,
     0x1.70d22fa1dd5a5p-681, 0x1.ee0e66955ff28p-167, 0x1.c63e5cab16a88p-175, 0.0, 0.0,
     0.0, 0x1.108ef9bf91d39p-338, 0x1.6d7e6f6510095p-849, 0x1.7fbb0ea66beb4p-813, 0.0,
     0x1.7d93fbcb506b8p-457, 0x1.2a3a9e30b340bp-642, 0.0, 0.0, 0x1.4cd34f2822d3ap-911,
     0x1.76ef8dfdde8d9p-102, 0.0, 0x1.51e9999aabf8dp-577, 0.0, 0.0,
     0x1.4c7ba9223ae74p-134, 0.0, 0x1.c2103cd9fdeccp-722, 0x1.14a00d07bd2d4p-813,
     0x1.09cdecaf04f63p-624, 0x1.4a67dfa19dab4p-152, 0.0, 0x1.df87f594d312bp-636, 0.0,
     0x1.6def5be12913ap-634, 0.0, 0.0, 0x1.085c8175678f4p-776, 0.0, 0.0,
     0x1.468ed944c8f04p-980, 0x1.bfba3a2110277p-613, 0.0, 0x1.34b593f146808p-630, 0.0,
     0.0, 0x1.600fd63cebf15p-877, 0.0, 0.0, 0x1.fc7d296e0f64bp-296, 0.0, 0.0,
     0x1.e954c640ffaf1p-97, 0x1.12dcf3c18fce2p-400, 0.0, 0x1.efaf5b0db89d5p-416,
     0x1.9517dd56f3aa5p-680, 0x1.6a1aa0cbc8d3ap-472, 0.0, 0.0, 0.0,
     0x1.4834897e7a6b4p-589, 0.0, 0x1.b1b98def4e6aap-727, 0.0, 0x1.25a5215ddc756p-609,
     0x1.33e833f78988ap-121, 0.0, 0.0, 0.0, 0x1.8c66f8f7bcd02p-138,
     0x1.191ee1794c48fp-689, 0.0, 0x1.521b86699ffbdp-283, 0.0, 0.0, 0.0,
     0x1.cd5735d392e78p-438, 0.0, 0x1.3c579d4a0988p-34, 0.0, 0.0,
     0x1.f719dca82e829p-190, 0.0, 0.0, 0.0, 0.0, 0x1.c922892353914p-954, 0.0, 0.0,
     0x1.1fc2444289978p-18, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ef9b329293d4fp-731, 0.0,
     0x1.ffef89c40ea2fp-133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b50d11797423ep-332,
     0.0, 0.0, 0x1.f453676cabbe8p-900, 0x1.c3f57d9b2af6bp-730, 0x1.a9825c09e8002p-27,
     0.0, 0.0, 0.0, 0x1.059355cb73163p-182, 0x1.60ae5faf310cp-486, 0.0,
     0x1.470ccc7f6b0bcp-875, 0x1.2f87e73dc4487p-560, 0.0, 0.0, 0x1.c06eba34acebbp-687,
     0x1.812a0a00a3c49p-301, 0x1.478466d48a29dp-489, 0x1.76744a7017567p-145,
     0x1.44305b163cc31p-49, 0x1.293316261dde8p-270, 0.0, 0x1.2264edeae19ccp-346, 0.0,
     0x1.877c073f34ffp-235, 0.0, 0.0, 0x1.6255037da70dap-737, 0.0,
     0x1.0127cad5f6f19p-643, 0x1.df184bc6ac375p-344, 0.0, 0.0, 0x1.dd93a33e2d2fdp-619,
     0x1.46c4387191f2ep-144, 0.0, 0.0, 0x1.a2d1665d6a796p-239, 0x1.64c29eed78e73p-790,
     0.0, 0.0, 0x1.cbbe4291a9a23p-421, 0x1.a06e993fa2016p-710, 0x1.a39c8d1ffce6ap-616,
     0.0, 0x1.b845ed956b6abp-327, 0.0, 0.0, 0x1.ce86b0bdbf94ep-106, 0.0,
     0x1.06d494c33cd37p-439, 0.0, 0.0, 0.0, 0.0, 0x1.ff651709bfdf1p-993, 0.0,
     0x1.7d42739086046p-634, 0.0, 0x1.54d3fa352067dp-880, 0x1.13fbd8853b3fbp-457, 0.0,
     0x1.0ff1c2b5218fbp-234, 0.0, 0x1.9b41c57b5770cp-199, 0x1.bc337d168abc7p-782, 0.0,
     0x1.d887244057d5dp-36, 0x1.aa35a9662ede6p-996, 0.0, 0x1.f85033ac1bb3ap-366, 0.0,
     0x1.f12be72461cd9p-657, 0.0, 0x1.21e82cce40353p-243, 0.0, 0x1.26d91945a9c22p-814,
     0.0, 0.0, 0x1.cfff9c4fb33a4p-605, 0.0, 0.0, 0x1.e2bb1e8bae65cp-1,
     0x1.9a281318bbe64p-916, 0x1.3b32cb6da70abp-449, 0.0, 0.0, 0.0,
     0x1.7e318ea3eaba8p-36, 0.0, 0.0, 0x1.4558100f81f6fp-821, 0.0, 0.0,
     0x1.6956b6aaf024ap-384, 0.0, 0.0, 0x1.c54adfcc15dc8p-12, 0.0, 0.0,
     0x1.32e4a60aa0af3p-28, 0.0, 0x1.ef1caf47c686cp-178, 0.0, 0.0, 0.0, 0.0,
     0x1.7c3f8640d63eap-474, 0.0, 0x1.df90f280c9221p-618, 0.0, 0.0, 0.0,
     0x1.e02d4372a7958p-738, 0x1.4d193074830a3p-154, 0.0, 0x1.06552198601cp-968, 0.0,
     0.0, 0x1.1ad194807d3dfp-110, 0x1.30f5bbde91defp-777, 0x1.a3b2d25eba151p-147,
     0x1.5038cc6ac23c7p-518, 0x1.587fe6a37de5cp-868, 0x1.20521bfdf0986p-571,
     0x1.5c1d953db7191p-693, 0x1.f7d83a9ded629p-668, 0.0, 0.0, 0x1.cb7a2bb81f7ebp-670,
     0.0, 0.0, 0.0, 0x1.787b9fa554e99p-658, 0x1.8c720fe1ec403p-69, 0.0,
     0x1.2c48c22d4e7f4p-693, 0x1.88131977385c1p-821, 0x1.247c57578966ap-331,
     0x1.dcb5bb17de6a4p-1, 0x1.69ecbf60d6cadp-315, 0x1.849f8264b15fap-574, 0.0,
     0x1.bf5b7d7c0a64dp-76, 0.0, 0.0, 0.0, 0.0, 0x1.ee0f3cde1a4d2p-988, 0.0,
     0x1.09ea0963ce36fp-627, 0.0, 0x1.b6bfd10b8d91fp-62, 0.0, 0.0, 0.0,
     0x1.4aac37296dc28p-93, 0.0, 0x1.e124f97a38f1bp-383, 0.0, 0.0,
     0x1.413376ddc5e08p-970, 0.0, 0x1.af0e74ffcffd3p-742, 0x1.2508f4916d54fp-251,
     0x1.98b611175d677p-182, 0x1.4c423aba93p-816, 0.0, 0.0, 0x1.383deaf4645cbp-344,
     0x1.6402a5de9fd7bp-280, 0.0, 0.0, 0x1.c8e62cbe2e142p-968, 0x1.5e2cda8a8892fp-225,
     0x1.1cf74aa65a6d8p-284, 0x1.59f70ef85907cp-1021, 0.0, 0.0,
     0x1.47605b72f6f48p-918, 0x1.c031b00d29874p-317, 0x1.1a87a4628fbacp-883, 0.0, 0.0,
     0x1.c890d2ab937p-223, 0.0, 0x1.136b25c118ee7p-62, 0.0, 0x1.4c162f9c04b0cp-795,
     0.0, 0x1.8dec9a34e1e17p-831, 0x1.ff9b62161f1b7p-183, 0.0, 0.0, 0.0,
     0x1.3256e478c6d2ep-548, 0.0, 0x1.05efd6987301ep-169, 0x1.4068954192019p-910, 0.0,
     0x1.f386fd437bc6bp-120, 0x1.f9789b7cb7b39p-500, 0.0, 0x1.da526df9b3f6ap-169,
     0x1.52a73f03c01adp-592, 0.0, 0x1.75ff068550037p-837, 0x1.cb2905f908181p-591, 0.0,
     0.0, 0.0, 0x1.ba9afb208a85p-668, 0.0, 0.0, 0.0, 0x1.a4d53f15b044p-603, 0.0,
     0x1.a236df86e8ffep-586, 0x1.a778c39202549p-328, 0.0, 0.0, 0.0,
     0x1.8350e1c6f8f58p-911, 0x1.fe92440b8eb8ap-29, 0x1.f5beb5e0cc564p-743, 0.0, 0.0,
     0x1.ba4d2736e7669p-10, 0x1.cd5c93383232p-926, 0.0, 0.0, 0x1.19e1d8a45f7fcp-585,
     0.0, 0.0, 0x1.e7dc26bc35ce7p-228, 0.0, 0.0, 0x1.5efc13d2e2769p-577,
     0x1.49dd2a75c7ebep-282, 0.0, 0.0, 0.0, 0.0, 0x1.3fcaee6ed48d4p-40, 0.0,
     0x1.e7307fc87450bp-489, 0x1.d344559c1048bp-178, 0x1.9ce3c3da71cbap-741, 0.0,
     0x1.e4f09f37bb54ep-262, 0x1.56d4ec1f7cb8ep-12, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.780182d69111ep-672, 0.0, 0.0, 0x1.31ad5276ae9bep-865, 0x1.2a7b0b0dab56bp-350,
     0x1.0d7f7bb83a881p-996, 0x1.7675ad4ab749fp-64, 0.0, 0x1.9d3b85185f46fp-52, 0.0,
     0x1.d1f3fdc77e138p-356, 0x1.66195c21d14c3p-1003, 0x1.e932c1312646cp-54, 0.0, 0.0,
     0x1.88dda610e9c44p-671, 0x1.feb1524e18908p-832, 0x1.cb48e2f99d757p-906,
     0x1.d5ffdaf3f719ep-934, 0.0, 0.0, 0x1.f3ccdbc90951ep-74, 0x1.4d8d3b22f2985p-847,
     0x1.9fefede50285bp-458, 0x1.05472398beeaap-349, 0.0, 0.0, 0.0, 0.0,
     0x1.19d6aed6eebddp-927, 0.0, 0x1.75e16d0838728p-736, 0x1.57b8307c13f03p-905, 0.0,
     0x1.e8d09b326e9ffp-461, 0.0, 0x1.cfca15aca0518p-467, 0x1.e4dc28feb1aacp-44,
     0x1.2057e05e97203p-266, 0.0, 0.0, 0x1.d4418064c936cp-795, 0x1.d4f246baf0e84p-294,
     0x1.7c005cc433cap-637, 0.0, 0x1.526a7c7760ee2p-20, 0.0, 0x1.c24d99649a593p-259,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7368a95bc7fd8p-929, 0x1.1a89e646fa815p-73,
     0.0, 0.0, 0.0, 0x1.fff8216f79746p-325, 0x1.ec2f007442e94p-931,
     0x1.425029a009ae7p-200, 0x1.c3f8a1c619858p-877, 0x1.7e1b91e540969p-78,
     0x1.835dd4eda7a78p-738, 0.0, 0.0, 0x1.c0aa99d22f115p-935, 0.0,
     0x1.5529dbff25d88p-829, 0x1.392d21744f109p-808, 0.0, 0x1.5f53357d5b0e7p-53, 0.0,
     0x1.227a12fa899f6p-1017, 0.0, 0x1.1072c4ec568a6p-166, 0x1.8a19ce44da7dep-723,
     0.0, 0x1.dfe0a271e4e07p-1020, 0x1.fcd90f839c752p-846, 0.0, 0.0, 0.0, 0.0,
     0x1.66df719c0a7fp-564, 0x1.5c70e6cfb2d94p-917, 0.0, 0.0, 0.0,
     0x1.430ff3aa05fb8p-236, 0.0, 0.0, 0.0, 0x1.5fbddc31147f9p-197, 0.0,
     0x1.5fc96bd1376cdp-592, 0x1.fef6abee3874cp-787, 0.0, 0x1.16ce7bf1bc87cp-382, 0.0,
     0.0, 0x1.8e33cba083cabp-118, 0x1.1fae5cd1a0341p-324, 0x1.01cf43f0727ecp-659,
     0x1.408a541b8dc6ep-864, 0x1.64c07c7a5527ep-164, 0.0, 0.0, 0x1.4c5ab183d49bfp-382,
     0.0, 0x1.918314d8b2b5fp-608, 0x1.6bdb709b97504p-206, 0x1.bd44614b138bap-169,
     0x1.9f36b47763a91p-65, 0x1.d251941ec4b95p-1021, 0x1.ee5cad66b5345p-64,
     0x1.5c0dee6678917p-859, 0x1.eec78273557b9p-416, 0.0, 0x1.616a64e1bacbfp-458, 0.0,
     0.0, 0.0, 0x1.a8321d58ec2e9p-695, 0.0, 0.0, 0.0, 0x1.ab4bd849edb83p-337,
     0x1.78f4bb45f0b91p-360, 0x1.a3332cbc1ba89p-934, 0.0, 0x1.f5c55a0fd5f2bp-927, 0.0,
     0x1.c9e9c4ea77be4p-1003, 0x1.6553f8d96ee4dp-196, 0x1.24d4af5806f8dp-971,
     0x1.158163faeff8ap-459, 0x1.973233d8604c7p-675, 0x1.d5d01b3064c6bp-683,
     0x1.17cee5e9f0621p-522, 0.0, 0x1.c5733dc87e2fap-635, 0x1.8432df51cd877p-47, 0.0,
     0x1.cca98bb23f9d6p-432, 0.0, 0.0, 0.0, 0.0, 0x1.1cef39bd7613p-889,
     0x1.654929cb54399p-949, 0.0, 0x1.682da065031eep-127, 0x1.945c2873e9aadp-854,
     0x1.6aa707f51a22ap-939, 0.0, 0x1.0f0599ed65f97p-730, 0x1.41149204405b7p-781,
     0x1.e6a3e989e7b1ap-1015, 0.0, 0.0, 0x1.f35663df1c45bp-787,
     0x1.5e88c8de4a4e7p-368, 0.0, 0.0, 0x1.a4b42c4a015e3p-390, 0x1.8e761771506a6p-627,
     0.0, 0x1.9b4e5a4d486ccp-814, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3713792ed161p-428,
     0x1.c940303498d45p-552, 0x1.b58c85cd5728dp-300, 0.0, 0x1.c54a652fddc07p-619,
     0x1.d85b55922ffb8p-681, 0x1.9c4a4d5256e73p-358, 0.0, 0x1.8f83e51e4c5cep-475, 0.0,
     0x1.c07e0c78eaceep-364, 0x1.88258cb1638aap-977, 0.0, 0.0, 0x1.6995eb507906bp-368,
     0x1.37381a5b324a4p-912, 0.0, 0.0, 0x1.59cd2744a6132p-20, 0x1.362db2c9e9a69p-482,
     0x1.5ae76ec560eb3p-185, 0x1.c684ce02e490cp-536, 0x1.6e9bc86c9091ep-989, 0.0,
     0x1.493317589aac8p-777, 0x1.cec94c99c991dp-178, 0.0, 0.0, 0.0, 0.0,
     0x1.b4730afca573bp-54, 0x1.c8b6ffe13de3bp-788, 0.0, 0.0, 0.0, 0.0,
     0x1.9c3a445417c49p-104, 0x1.ce51d8e151dc3p-864, 0.0, 0.0, 0.0,
     0x1.8837c62f1d9f1p-563, 0x1.f37463aea67e4p-523, 0.0, 0x1.53ecbd76d4386p-56, 0.0,
     0.0, 0x1.86e1d4f273852p-39, 0.0, 0x1.21943a62b05e9p-69, 0.0,
     0x1.942a114ed7b39p-825, 0x1.6de4287ea129p-345, 0.0, 0.0, 0x1.a1bcfae1d0ba9p-743,
     0.0, 0x1.78bc76c8de2f8p-695, 0.0, 0x1.80bc56411b297p-494, 0.0,
     0x1.398d6a0556a36p-921, 0x1.d4b327dbd14e3p-4, 0x1.0b9c69d9304fep-531, 0.0,
     0x1.594e5d1ef3438p-27, 0x1.5d8d843175978p-711, 0.0, 0.0, 0x1.192d03c9e911dp-666,
     0.0, 0.0, 0.0, 0x1.fb7dd56ebbdbap-411, 0x1.a7e081c0087bbp-595, 0.0,
     0x1.c6b3e85875a16p-817, 0.0, 0.0, 0x1.c9483d9cf8d7fp-880, 0x1.353b4028217f8p-354,
     0x1.ab85de855a1d6p-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb64d6b275e53p-96,
     0x1.dd5c5247c8d0cp-670, 0.0, 0x1.1699532731db6p-630, 0.0, 0.0,
     0x1.aba98ba1f9b26p-284, 0x1.539c06f201711p-93, 0x1.3aba9e209d0e6p-1014,
     0x1.be03a9be67cf1p-878, 0.0, 0.0, 0.0, 0x1.017d2bf1b3582p-442,
     0x1.7d5a1ff41c97bp-715, 0x1.fdb5f7fec405bp-973, 0x1.ad746a8670dadp-683,
     0x1.4fe7eb5cc78e8p-44, 0x1.8af2d49098072p-546, 0x1.ad26be4582d23p-937,
     0x1.1b503550ed31dp-842, 0.0, 0.0, 0.0, 0x1.f32d3f98807a1p-388,
     0x1.a63e33d9248a5p-77, 0.0, 0x1.c514098bc201dp-443, 0x1.f76090929d994p-172,
     0x1.4a31d36d53f52p-713, 0x1.23218eba5703ep-1014, 0x1.23bd970d9e1c4p-32,
     0x1.7ff9e80a1e3b7p-178, 0.0, 0.0, 0.0, 0x1.29647c0becf56p-627, 0.0, 0.0,
     0x1.e15e0a3c55399p-235, 0x1.530931853e8e8p-883, 0.0, 0x1.3a1782a715332p-336, 0.0,
     0.0, 0x1.b56d96cd1333fp-884, 0.0, 0.0, 0.0, 0x1.568693b2ccb4ap-293, 0.0,
     0x1.952913d9bf658p-504, 0.0, 0x1.b8b96bee4d1dp-951, 0.0, 0x1.947708d934517p-626,
     0.0, 0x1.bc73eaa38b3dap-589, 0x1.61a1c2a9c67a7p-821, 0.0, 0x1.ce6826c93f526p-59,
     0x1.b4aeb0843b4dp-126, 0x1.32b7e4b817836p-645, 0.0, 0x1.a16fc66c4879dp-770,
     0x1.d82b641271f02p-315, 0x1.cf55570e0b951p-454, 0.0, 0.0, 0.0, 0.0,
     0x1.3babe7fcaf319p-735, 0.0, 0.0, 0.0, 0x1.867e8466e0509p-338,
     0x1.46d2471796b82p-110, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.261841cab6322p-297, 0.0, 0.0, 0x1.a4187e6047b1ap-159, 0.0,
     0x1.6de57a72330e1p-1, 0.0, 0.0, 0x1.3a269abfc7e0fp-657, 0x1.3f3735dfb24bdp-584,
     0x1.0d11c3147725dp-941, 0.0, 0x1.5677c4417b0acp-234, 0x1.cd93b0114f966p-639, 0.0,
     0x1.b8af321cf8559p-371, 0x1.7f62d473bc0f7p-320, 0.0, 0.0, 0.0,
     0x1.bab176404be19p-627, 0x1.2c858766509acp-213, 0.0, 0.0, 0.0,
     0x1.3f296d7432ff6p-644, 0.0, 0.0, 0x1.e7eab1d2998dcp-978, 0x1.2a269aa027985p-610,
     0.0, 0x1.7ccaf1d2fdd09p-236, 0x1.98a36b8b536ddp-161, 0.0, 0x1.8ecbce03039a7p-117,
     0x1.d653a6f79fc6fp-187, 0x1.affa35062ba7bp-302, 0.0, 0.0, 0.0,
     0x1.19f563c51d3c6p-600, 0.0, 0.0, 0.0, 0x1.32a49848f49b8p-10, 0.0,
     0x1.d4c9309957bf8p-568, 0.0, 0.0, 0x1.4fc11033ba60cp-778, 0x1.fea024aaf175ap-454,
     0.0, 0x1.781315ea244fp-301, 0.0, 0x1.5f139d44d4edap-259, 0.0, 0.0, 0.0, 0.0,
     0x1.eeffadf763ffdp-379, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ffbfe144183eep-116, 0.0,
     0x1.2c928009110ap-59, 0.0, 0x1.01f99c34ec2a5p-741, 0.0, 0x1.3fc7ebfb387cep-9,
     0x1.b5268b659e224p-301, 0.0, 0.0, 0x1.d0d3ee3117302p-968, 0x1.dfad8580dbbbp-436,
     0x1.16485906dd4eap-163, 0x1.8e0cc98b9d8aap-938, 0.0, 0.0, 0.0,
     0x1.8d914f3684b72p-311, 0x1.6b29ed7d76e67p-648, 0.0, 0.0, 0x1.2a274e83ff244p-701,
     0x1.eef8b344ee133p-472, 0.0, 0.0, 0.0, 0x1.a2b6399c21e4dp-844, 0.0,
     0x1.f834667c55208p-182, 0x1.3a094bbd6bcbdp-806, 0x1.ed1488605c6p-319, 0.0,
     0x1.62b600e0b012fp-272, 0.0, 0x1.c83787c77471cp-355, 0.0, 0.0,
     0x1.8a383e3a3feafp-330, 0.0, 0x1.fb934198fde7p-779, 0.0, 0.0, 0.0,
     0x1.854d4dd66fd99p-709, 0.0, 0.0, 0x1.8627f04dabd09p-914, 0.0,
     0x1.6097744f4802ap-509, 0x1.dccb42c945a68p-251, 0.0, 0x1.3fd70cefdcd1cp-641, 0.0,
     0x1.f2d97e0aafc94p-583, 0x1.e776607c4f7e3p-478, 0.0, 0x1.7e0095beeb672p-604,
     0x1.e3a3d08f21e3p-939, 0.0, 0.0, 0.0, 0.0, 0x1.479bfadd1503fp-506,
     0x1.f4feead30bc19p-466, 0x1.e964f7fbc88ccp-581, 0x1.9edb8bf02079fp-860, 0.0,
     0x1.72f9a6d6a9753p-554, 0x1.de2e02325d7c8p-260, 0.0, 0.0, 0x1.05f20dedab1c8p-460,
     0.0, 0x1.03503d91c3adbp-328, 0.0, 0.0, 0x1.8e69ccd16ed97p-972,
     0x1.0037e3513da04p-663, 0x1.ae09554bab81ap-578, 0x1.aa5dc93eb53c7p-203, 0.0,
     0x1.0429270850a7cp-566, 0.0, 0.0, 0.0, 0.0, 0x1.4e05750507f9p-395, 0.0, 0.0,
     0x1.b4d9ade1d6c1cp-958, 0x1.7c33cb81768dfp-996, 0x1.6c009fb6ce913p-885,
     0x1.20b863798afb3p-900, 0.0, 0x1.3b6a8dbeb1d34p-1003, 0.0, 0.0, 0.0,
     0x1.92469b4a6d747p-213, 0.0, 0.0, 0x1.7a017723f4921p-428, 0x1.8f93c4d2822b3p-245,
     0x1.71514d157aa5p-869, 0x1.6329dd9ebb907p-863, 0x1.6332d5b58b2ffp-481, 0.0, 0.0,
     0.0, 0x1.8ef035288ebbdp-118, 0.0, 0x1.e3f708c0d5414p-857, 0.0, 0.0,
     0x1.4cae4e5490406p-917, 0.0, 0x1.ca736478276edp-764, 0.0, 0x1.476f0f4bc06d6p-968,
     0x1.a4f418d4bce14p-623, 0x1.cf40196999328p-995, 0x1.5079bf2cad93p-710,
     0x1.750f84af526efp-978, 0x1.487a89fdca5ep-494, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49a38006bed54p-944, 0x1.3d84fbbd18879p-935, 0.0, 0x1.d2f185ce03df5p-442, 0.0,
     0.0, 0x1.f88b7ab669ef2p-647, 0x1.ce9f2cf7a816p-579, 0x1.b896172afdc5bp-727, 0.0,
     0.0, 0x1.a1a3b3c43945p-225, 0x1.f8baa72d9de03p-9, 0.0, 0.0, 0.0, 0.0,
     0x1.fafca6bc07e4fp-418, 0.0, 0.0, 0x1.a3bea2b9cf8afp-550, 0.0,
     0x1.1bd5e990a47e6p-763, 0x1.cfe3e7c9a04bep-461, 0.0, 0.0, 0x1.c522ff08dc07ap-526,
     0.0, 0.0, 0x1.38ae8fd44ae4ap-474, 0x1.e959a1a3d32ep-133, 0x1.aafadcf49ec5bp-959,
     0.0, 0x1.69c329aa6932bp-31, 0.0, 0.0, 0.0, 0x1.4880178ddf66p-280, 0.0, 0.0,
     0x1.952e6b496e7d7p-568, 0.0, 0x1.3e43646e538fdp-676, 0x1.8eb351990d596p-471, 0.0,
     0x1.041523dceb52dp-816, 0x1.f3b858a37dc22p-30, 0x1.efea6a1ffd547p-852, 0.0,
     0x1.3c46187c93912p-1004, 0x1.b3fe0c29d474p-193, 0.0, 0x1.7d713e176252ap-298, 0.0,
     0.0, 0x1.c6461043d17b6p-871, 0x1.7fa0a36781ecep-958, 0x1.1bdf491a67051p-172, 0.0,
     0x1.2945c17e52b6ep-1006, 0x1.5b1ddb08d29ep-896, 0x1.ffe6fa7c96085p-714,
     0x1.a7b131f761486p-1004, 0.0, 0.0, 0x1.475b5a74e319p-833, 0.0, 0.0,
     0x1.f56cc45e05143p-1012, 0x1.603d08e15c47p-962, 0x1.c1477d1999d5ep-788, 0.0, 0.0,
     0x1.195439ace310fp-65, 0x1.653282363313bp-266, 0x1.8b316f4350cfdp-171,
     0x1.4d0434a999baep-1000, 0.0, 0x1.2383244747528p-585, 0x1.8b7e39e836583p-778,
     0.0, 0.0, 0x1.0044563dae39bp-48, 0.0, 0x1.93eea109606f2p-360, 0.0,
     0x1.60562bfc7fc41p-354, 0x1.738f652038cdcp-475, 0.0, 0x1.828e2f77d8b69p-849, 0.0,
     0x1.5914f8bd69213p-368, 0x1.958ae919e2261p-704, 0.0, 0x1.2f79f38aa6b58p-377, 0.0
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
            tmp1 = Sleef_finz_erfcd1_u15purecfma(tmp0);
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
    printf("Sleef_finz_erfcd1_u15purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erfcd1_u15purecfma bench acc %la\n", global_bench_acc);
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
