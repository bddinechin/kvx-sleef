/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd1_u05purecfma.c --function \
 *     Sleef_finz_sqrtd1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.8d5a24fb0b132p-226, 0x1.3bbfc76a4ce79p-848, 0x1.effbd6b613bc6p-531, 0.0,
     0x1.8221ebfb3f029p-572, 0x1.95f637c092e21p-56, 0.0, 0x1.0d82f51ba19e6p-1009, 0.0,
     0x1.322ed3e23010ep-320, 0x1.b25cccb3219afp-749, 0.0, 0x1.c2676b40d9c9fp-736,
     0x1.89f509225a3d6p-742, 0.0, 0x1.3f29304f23d53p-629, 0x1.a074705ffa43ap-13,
     0x1.91e02d8bd9685p-474, 0x1.d8cf81d17027ep-221, 0.0, 0.0, 0x1.0b0255ccf53c6p-102,
     0.0, 0x1.11ce3b1043d9p-264, 0.0, 0x1.5e8dd9971cf42p-663, 0x1.726f044d2732bp-938,
     0x1.01d5ce3367126p-606, 0x1.0ec17d7bb4103p-302, 0.0, 0x1.39ab55c186b6p-141, 0.0,
     0x1.4aa20a502b747p-887, 0.0, 0.0, 0x1.2c461b9e7f262p-172, 0.0, 0.0,
     0x1.351a5a3cff72bp-817, 0x1.4d1697a78d0ffp-534, 0.0, 0x1.fe4eb35f7af76p-741, 0.0,
     0x1.a390a34fa0135p-491, 0x1.9e34a64ea7743p-839, 0x1.c3fae523b2cb1p-33, 0.0, 0.0,
     0.0, 0x1.ab30dcb0a9f1fp-474, 0.0, 0x1.7cc9d065185e3p-223, 0x1.17453c6623fe9p-925,
     0.0, 0.0, 0x1.c9d12afa29ba3p-866, 0.0, 0x1.5c6c4156cd532p-918,
     0x1.e5ba1c2919fe3p-496, 0.0, 0x1.89cc420a86abbp-940, 0.0, 0x1.1d3feee36df82p-252,
     0x1.27bd6fb621478p-161, 0x1.48105a31d09aap-548, 0.0, 0.0, 0x1.4c30df8db8cap-256,
     0.0, 0x1.e94edaf077eeep-563, 0.0, 0.0, 0x1.2baba69a73933p-551, 0.0, 0.0,
     0x1.0a627abce519p-809, 0.0, 0x1.15232a1edeef6p-941, 0.0, 0.0,
     0x1.24fef74b5eb76p-584, 0.0, 0x1.5ea2d2a93d57ep-821, 0.0, 0x1.ee89094cb76ebp-503,
     0.0, 0.0, 0.0, 0x1.f0a9683ef600dp-695, 0x1p0, 0.0, 0.0, 0.0,
     0x1.ca8a822cbe6f7p-986, 0x1.87f616e0cedfp-202, 0x1.1ee13b847113p-233,
     0x1.4d04bf78a5584p-510, 0.0, 0x1.29c654cf80d9cp-990, 0x1.d6a63dcb34585p-403,
     0x1.4d2bba7ed893bp-640, 0.0, 0.0, 0x1.408767205756ap-687, 0.0, 0.0, 0.0,
     0x1.0bf97ee3e2823p-577, 0x1.e651a8ebd50b6p-52, 0x1.97bcdabedd844p-790,
     0x1.1e3910fc1fac1p-93, 0x1.1a4c90982fdp-117, 0.0, 0x1.5cead705c436dp-560,
     0x1.71736ee4fe3ccp-201, 0.0, 0x1.4c8dd89cde3a2p-590, 0x1.9da85739fd1p-124, 0.0,
     0.0, 0.0, 0x1.d668500987c14p-489, 0x1.ab8dfc2dea6f3p-129, 0.0,
     0x1.2efc1a7f1fb0ap-844, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.967c7e4e517e3p-967, 0.0, 0.0, 0.0, 0.0, 0x1.b5a7072b94793p-100, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.57dcdc4a7304fp-575, 0x1.b466b11e3fe0cp-637,
     0x1.fa31210e8cda4p-310, 0.0, 0x1.baf9090c75d6dp-539, 0.0, 0.0,
     0x1.b1fddffa655c7p-56, 0x1.1bff107bbad26p-133, 0x1.2cfde49c1ba26p-1015,
     0x1.71b594f9184bbp-905, 0x1.83a38b62ade1fp-1022, 0x1.9ced118437c07p-688,
     0x1.2f2c044915709p-876, 0x1.4820bc132c1aep-662, 0.0, 0x1.b13fad07436b9p-413, 0.0,
     0x1.5a0c0e4236e69p-517, 0x1.7c65c8b0dfc06p-308, 0x1.5a5b9ab025da6p-216, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.934b460c9456bp-733, 0.0, 0.0, 0.0, 0.0,
     0x1.39ee9a86a61e8p-574, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15af169ade3fbp-160,
     0x1.6d33aef6658d8p-820, 0.0, 0.0, 0.0, 0x1.41387c3ad6fe3p-611,
     0x1.4ff7a7bfd131bp-920, 0.0, 0x1.0dd5b19474371p-451, 0x1.e7662d9eb3d02p-380,
     0x1.e71b495c7da8ap-1000, 0.0, 0.0, 0x1.86d259910f37ep-307, 0.0, 0.0,
     0x1.a0d3df0c5d0e4p-589, 0.0, 0x1.0000bdc224673p-208, 0x1.6ac28144b1d4dp-608,
     0x1.c31f25d6a79e8p-308, 0x1.c47606da522cp-440, 0.0, 0x1.4064c3661a64ap-688, 0.0,
     0x1.699d8b723ae28p-1006, 0.0, 0x1.22f5d58be2482p-208, 0x1.e0b87991ef3ddp-983,
     0x1.ab11752b5ec5dp-152, 0x1.899bbfbeba494p-168, 0x1.499bc0975b7a8p-153,
     0x1.65e14b41f7a95p-167, 0.0, 0x1.9d11c3027ef64p-425, 0x1.cdf81e2665494p-963, 0.0,
     0x1.53028ee454058p-773, 0x1.630ae7accf7e1p-807, 0x1.41c0846f14df1p-776,
     0x1.71ac68987f76ep-909, 0x1.2934b63b49a5bp-671, 0.0, 0.0, 0x1.66fc333289ec9p-615,
     0x1.41285f16fb84cp-742, 0.0, 0.0, 0x1.5649ae274b158p-432, 0x1.4d059c6e8a4fp-941,
     0x1.f7d9ce89f850fp-618, 0.0, 0x1.23404b3b7b81ep-747, 0.0, 0x1.fbf76ee164446p-841,
     0x1.c3b3d1140c575p-317, 0x1.b5dfadfce1ecbp-812, 0x1.537f801716435p-1009,
     0x1.24f2fa06fb4fep-202, 0.0, 0x1.412a98208a065p-637, 0.0, 0x1.85a3c91fb8ba4p-512,
     0.0, 0x1.56b6697af5a5bp-719, 0x1.a60eb8b2a6ef5p-654, 0x1.d874dd1cfab58p-226, 0.0,
     0.0, 0.0, 0.0, 0x1.c6fe68f9141fp-38, 0.0, 0x1.4b54b9d039aefp-234, 0.0, 0.0,
     0x1.657096cd72241p-93, 0.0, 0.0, 0.0, 0x1.474dc2c216cap-218,
     0x1.418cdea0015a7p-440, 0.0, 0x1.e0e11c1f9628ep-248, 0x1.6ac2d340662e9p-789,
     0x1.c08703f121e76p-993, 0.0, 0x1.eb9759edbfbdfp-125, 0x1.a63aeea1f938bp-820, 0.0,
     0.0, 0.0, 0.0, 0x1.5dc6a1470220cp-181, 0x1.b1229255e3522p-718,
     0x1.7d65e8ef634cp-250, 0x1.1f7203f99dde6p-500, 0x1.b41118848c24ep-736,
     0x1.9715a9535e035p-48, 0.0, 0.0, 0.0, 0x1.76588ff9197c6p-204,
     0x1.2c966d8ee31b3p-282, 0.0, 0x1.2682e5cd56d74p-628, 0x1.ee9fce727c62p-10,
     0x1.0cf1afbd70d24p-748, 0x1.95e43ff29cd9dp-376, 0.0, 0.0, 0x1.b954f2a441d12p-739,
     0.0, 0x1.afbee6b8c3367p-71, 0x1.113369ce0678bp-788, 0.0, 0x1.65ba38024923dp-608,
     0x1.150cc013e7f2fp-597, 0.0, 0x1.b40a467219561p-602, 0.0, 0x1.b9baa335de648p-474,
     0.0, 0x1.d265719867713p-40, 0.0, 0x1.2ddfca06ad743p-658, 0x1.92af5ed958766p-684,
     0.0, 0x1.495cf6378948ep-665, 0x1.75dd24352cc73p-987, 0.0, 0.0, 0.0, 0.0,
     0x1.422c968ead8d2p-521, 0.0, 0.0, 0x1.381d4e6134e5bp-128, 0x1.c27cc65433a4fp-447,
     0x1.3001c292c5798p-128, 0x1.ec50bb9503bcp-675, 0.0, 0.0, 0x1.5766c8e53c071p-350,
     0x1.fdf2292a05934p-368, 0.0, 0x1.4b3202e1d0ea3p-515, 0.0, 0x1.f76d18b99ab7ep-455,
     0.0, 0.0, 0.0, 0.0, 0x1.01c1dc41af7b4p-860, 0.0, 0.0, 0.0,
     0x1.59fc261eb3d9fp-291, 0x1.ca880525fe1b7p-888, 0.0, 0x1.b30bb25683906p-672, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.88b18b8d4cc42p-440, 0.0, 0x1.d3f1f58721055p-354, 0.0,
     0x1.40f275a76e08ap-103, 0x1.ed0dd8a6ebb88p-832, 0.0, 0.0, 0x1.6d51fb4fdb0b8p-769,
     0x1.69ac79016c16fp-723, 0x1.1de11926cbb3fp-244, 0x1.a3a5a626528b1p-342, 0.0, 0.0,
     0x1.b887e605eed1ep-946, 0.0, 0x1.a129328fe7b5cp-212, 0x1.086c9933eeae3p-669,
     0x1.3c2cc77235b37p-46, 0.0, 0x1.f8bdf58308446p-881, 0.0, 0.0,
     0x1.c5557d0db08d3p-867, 0x1.1c7874649d6cep-742, 0x1.4f6c4b81f1ec3p-670,
     0x1.86ff8cabf2c13p-416, 0.0, 0.0, 0.0, 0x1.9ced711152161p-475, 0.0,
     0x1.a69170451e166p-970, 0x1.cc762ca13a2cp-820, 0x1.e86df4f6402b4p-823, 0.0,
     0x1.6dec354164eecp-1002, 0x1.646161f8c42a2p-774, 0x1.b1a993eeb927p-4,
     0x1.54a0dc1736da5p-303, 0x1.33e687a5b40e7p-349, 0.0, 0.0, 0x1.9533dfd73221dp-419,
     0.0, 0x1.a5be9b7babd8bp-793, 0.0, 0x1.613d82c1bb55fp-941, 0x1.b27a679ac6e59p-217,
     0x1.38da3ea566c36p-16, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.778c091d36bbbp-473, 0.0,
     0x1.d4fd5a9980b0dp-314, 0x1.2d94033483af4p-658, 0x1.0c06e0ba986e1p-257,
     0x1.c27ea48ca4f8dp-407, 0.0, 0x1.48ef25efad4b3p-938, 0x1.711acf3761d03p-1019,
     0x1.6a21eaaf6d0adp-250, 0x1.d0d346db3e068p-964, 0.0, 0.0, 0x1.58b9ea863f38dp-908,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0167dee8c17cdp-723, 0.0, 0.0,
     0x1.32e55f67bffdcp-614, 0.0, 0.0, 0.0, 0.0, 0x1.07ccc05e4e39p-130,
     0x1.c0f255cbc5bcep-432, 0x1.cc167018f629cp-409, 0x1.7bda68c86a757p-70, 0.0,
     0x1.f9b60ec81f7f7p-884, 0x1.6bc60b3c20af7p-699, 0.0, 0x1.2bf596fbafdf9p-389,
     0x1.fc3e098c0d765p-867, 0x1.01002ad05fb28p-115, 0.0, 0.0, 0x1.d5ce4ca495f7ep-75,
     0.0, 0x1.0fd97c7fed2a1p-198, 0x1.cc25e83224701p-693, 0x1.983103e21eb13p-624,
     0x1.b1d9747bfbe49p-332, 0x1.357f30acb88b2p-540, 0x1.8878f31be238p-923,
     0x1.41f015709a897p-709, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72e09376b292ap-942, 0x1.ea3d3494cd663p-670, 0x1.33ba0a652dae8p-282,
     0x1.490007cc0ffebp-764, 0.0, 0x1.cd68fef690d03p-407, 0.0, 0x1.10a21be65a4dep-103,
     0.0, 0.0, 0.0, 0.0, 0x1.db61d1863b38cp-620, 0x1.a427f0cc5ea11p-674, 0.0, 0.0,
     0.0, 0x1.addd388b2cfc8p-36, 0.0, 0x1.6796b6bef5484p-813, 0.0,
     0x1.3e36a3d771c28p-208, 0.0, 0x1.9685d41a3103dp-158, 0x1.5602fa91b38abp-510, 0.0,
     0x1.02e0ec7e37177p-537, 0x1.2ae70033eb45ap-781, 0.0, 0.0, 0x1.da05d13c16fa6p-551,
     0x1.7dedb413fbe0ep-918, 0.0, 0x1.9a67789c2415dp-669, 0.0, 0x1.6c88cd216e4a9p-965,
     0x1.49ec1ddfa5b6ep-736, 0x1.68fceb6fd3823p-555, 0.0, 0.0, 0.0,
     0x1.6d6de2653861ap-746, 0.0, 0x1.9cf6696c726a8p-686, 0.0, 0.0, 0.0,
     0x1.d8ccbdc830077p-823, 0.0, 0.0, 0x1.07dd851dd3ef5p-130, 0.0,
     0x1.6b7771a80e07dp-985, 0x1.bfa9e51d00a14p-621, 0.0, 0.0, 0.0,
     0x1.6a1bc30b41a99p-561, 0.0, 0x1.ba48cd436e331p-991, 0.0, 0.0,
     0x1.b28be949bddfcp-403, 0.0, 0x1.b21178cecc88fp-21, 0.0, 0.0, 0.0,
     0x1.c14d597a7a118p-433, 0x1.b690d1f4542ebp-235, 0.0, 0x1.7f1b7a35bf257p-786, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9df202163d2dep-224, 0.0, 0.0,
     0x1.927c1b0942817p-212, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fbae81924feebp-40, 0x1.a904850cdc8cbp-441, 0x1.97fe4c673288bp-545, 0.0,
     0x1.6b60ab438aa7fp-22, 0.0, 0.0, 0.0, 0x1.adeb5b572bad2p-633,
     0x1.3240975547d21p-442, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b4a36b2b52a7p-419, 0x1.3e3265aba92f3p-609, 0.0, 0.0, 0x1.399f2f6c52f54p-235,
     0x1.01307b07b601bp-593, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d91b6cea0162cp-332, 0x1.3d6823aa284b3p-496, 0x1.ae736c3fb2ae8p-883, 0.0,
     0x1.b3fd640108881p-104, 0x1.3fc992a287dbbp-164, 0x1.7a0133de1d2f2p-144,
     0x1.afe2cee9845b9p-361, 0x1.ebb4b7adca7cp-728, 0.0, 0x1.23a59967d521cp-946,
     0x1.633c0799c4529p-378, 0x1.8a95f50ee61e9p-198, 0x1.675e4c51260e8p-154, 0.0,
     0x1.a390887e61737p-764, 0x1.a65d890ef2ee1p-676, 0.0, 0x1.b653c9a3f347cp-494,
     0x1.a105751669b19p-464, 0.0, 0x1.d3a0264e931fbp-609, 0.0, 0x1.bbb13d1a7ec7ap-191,
     0.0, 0.0, 0x1.200355860fc6dp-654, 0x1.62b22b8f615cp-198, 0x1.0c214e201165dp-381,
     0x1.bf8d217274f6p-502, 0.0, 0.0, 0x1.7b0b9a41dce7fp-595, 0.0, 0.0,
     0x1.54783ea28b3ap-629, 0.0, 0x1.2901965418db6p-894, 0.0, 0.0, 0.0, 0.0,
     0x1.591a8e34842cbp-63, 0.0, 0.0, 0.0, 0x1.c987a6d789954p-76,
     0x1.38d233b055cc7p-517, 0.0, 0x1.c67a06131fa28p-916, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.572fd28bf8f0bp-377, 0.0, 0x1.084c8a32a68b7p-117, 0x1.5aa284a4dc4a3p-720, 0.0,
     0x1.dbd2c18f69a87p-350, 0.0, 0.0, 0.0, 0.0, 0x1.b1f3fa03f884ap-912, 0.0,
     0x1.98f2f26ac5684p-493, 0x1.67c882f17d57fp-979, 0x1.a198d5986b911p-422,
     0x1.8d8a1dfedccfcp-527, 0.0, 0x1.1b32aa9d3a5dcp-980, 0x1.b28abc7b12948p-715, 0.0,
     0x1.b8940c2148f89p-171, 0.0, 0.0, 0x1.2dd47c7bc0e2dp-803, 0.0,
     0x1.642daec337188p-451, 0x1.9114afab69721p-8, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ce89822b70fbp-903, 0.0, 0x1.2e00e3fd5fb09p-202, 0.0, 0.0,
     0x1.eece35d62b019p-790, 0x1.a03bab62970dbp-725, 0x1.37e2192b9f3cfp-406, 0.0,
     0x1.e022540ce9482p-802, 0.0, 0.0, 0x1.e8567eb2af372p-199, 0.0,
     0x1.e14c8ced8c1b8p-9, 0.0, 0x1.538c628941dep-614, 0x1.0d23e2096790ep-110,
     0x1.4ae87aa4aa1f2p-894, 0x1.870d380947becp-124, 0.0, 0x1.8108cb330338bp-303,
     0x1.ddb2adaed6a8p-852, 0.0, 0x1.5906b1218d811p-245, 0.0, 0.0,
     0x1.a239f19e01e02p-212, 0x1.da6c08c58168ep-66, 0x1.8c6e68580f3p-733, 0.0, 0.0,
     0x1.db0ff19e6cefcp-978, 0x1.bfb90d374654cp-504, 0.0, 0x1.863bf7341b873p-998,
     0x1.51cdcd4dea8b4p-388, 0.0, 0x1.190bddba036bep-158, 0x1.fa05f6c1e7171p-517, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10721bee545a6p-827, 0x1.331bb594154ddp-108,
     0x1.baed353bcdd33p-491, 0x1.1846245e4afcfp-663, 0x1.ae414bf12258fp-749, 0.0,
     0x1.6cc92a28eac2cp-941, 0x1.a1b508e03a5a6p-713, 0.0, 0x1.49b130d5c443ep-622, 0.0,
     0.0, 0.0, 0.0, 0x1.2de3a9ddb6603p-196, 0.0, 0.0, 0x1.7215406f07f36p-134,
     0x1.08a3b280d1f96p-824, 0.0, 0x1.352a272b8aaaep-1006, 0.0,
     0x1.4a19650b6130ep-660, 0x1.06c2b9f4255abp-719, 0x1.44ccf10e3fcf6p-67,
     0x1.acf5c1352e638p-890, 0.0, 0.0, 0.0, 0.0, 0x1.2c1e275aa1df6p-168, 0.0,
     0x1.cae480ab9b54bp-930, 0x1.7a6c2b44ebfbbp-278, 0x1.2d9eaec03f35cp-325, 0.0, 0.0,
     0x1.7393941df8b0ep-741, 0x1.f9acc6170c295p-881, 0.0, 0.0, 0x1.03b0347fa1942p-928,
     0.0, 0.0, 0.0, 0.0, 0x1.b02a0d951de22p-764, 0x1.799632cc17758p-1010,
     0x1.b338618f80548p-63, 0x1.ca21231b331adp-105, 0x1.7235ceb4d6034p-29, 0.0,
     0x1.30a1aa685ff7fp-402, 0.0, 0x1.909d7a3eca1cp-757, 0x1.83cc2b9f19dbep-272, 0.0,
     0.0, 0.0, 0x1.de817bdb12b09p-866, 0.0, 0.0, 0.0, 0x1.0cd89d645e637p-544,
     0x1.c1c20f81ac5abp-18, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2da2d61337a08p-719, 0.0, 0.0,
     0x1.80e9fcadf5e58p-415, 0.0, 0.0, 0.0, 0x1.9c8d99e5e7912p-362, 0.0,
     0x1.d7b760cd604abp-9, 0x1.071b8f783d10cp-1005, 0x1.8c25b88e8df1dp-71,
     0x1.bb0fccadb7dc1p-652, 0x1.b1e0bfbdab4fbp-895, 0x1.f4604bfa8db58p-301,
     0x1.413fe7d2fc438p-652, 0x1.d7942d3706c29p-991, 0x1.44f4d0496dbf6p-412,
     0x1.272c9290a4eaap-223, 0.0, 0x1.a629b8d2d1c27p-134, 0x1.6bd604a4c871p-910, 0.0,
     0x1.7d8fb4e5bc6a8p-1007, 0.0, 0x1.ca7506af2624dp-116, 0.0, 0x1.260258f228146p-12,
     0.0, 0.0, 0.0, 0x1.ccd826ef9f06fp-921, 0.0, 0.0, 0.0, 0x1.17daa0d241a28p-910,
     0x1.28974778e19d3p-800, 0.0, 0x1.38327fd8705b8p-94, 0.0, 0x1.eca6ccd616adp-160,
     0x1.8f38dace4cac4p-722, 0x1.9a02fe59df5ecp-43, 0.0, 0x1.be0248386db33p-390, 0.0,
     0.0, 0.0, 0x1.01028e976445cp-72, 0.0, 0.0, 0.0, 0x1.c47096a31e153p-1010,
     0x1.6a1c6467e7733p-582, 0.0, 0x1.a772e85f49831p-959, 0x1.a2b90adf8dfp-342, 0.0,
     0.0, 0x1.635625d908535p-184, 0x1.14f8b4c9aeb85p-247, 0x1.ddd39dbc6877bp-43,
     0x1.2006c2e3f3deap-348, 0x1.b371a798b70fdp-154, 0x1.26513ae45c032p-109, 0.0,
     0x1.b04dfcaea9486p-101, 0x1.fc8e54d4c4ep-624, 0.0, 0x1.eb772a4d78efdp-998,
     0x1.81aad911a7e3bp-529, 0x1.3b07a3cde593p-169, 0x1.2f78d54664662p-985,
     0x1.b5392bcc39fa1p-263, 0x1.28a0be7035441p-476, 0.0, 0.0, 0x1.a7fcf03f81c2dp-621,
     0x1.bb01087cb057ep-831, 0.0, 0x1.b99c6a012e8aep-196, 0x1.b8a5ea686aae4p-405,
     0x1.bba3f104fd2b6p-110, 0x1.b46ce14d1248ep-959, 0x1.e0ac270097e4dp-925,
     0x1.1352b7c984b65p-234, 0x1.bdbb7398672ccp-748, 0x1.57cd8c7c41ecbp-230,
     0x1.74ca45dde6f4cp-516, 0x1.1050fe9f84812p-733, 0.0, 0x1.7887a4014f981p-218, 0.0,
     0.0, 0x1.15db8a53d8be9p-673, 0x1.b459555fa5343p-344, 0.0, 0.0, 0.0, 0.0,
     0x1.e12234a756fd4p-506, 0.0, 0.0, 0.0, 0.0, 0x1.3e7e5a33dc674p-740, 0.0, 0.0,
     0.0, 0x1.321539e24091fp-491, 0x1.67e51f7d06b61p-192, 0x1.e5c2868234622p-849,
     0x1.6dd6e825e1a76p-522, 0x1.bcaf5f3c5c03ep-526, 0x1.42c441797ff2ep-986, 0.0,
     0x1.91d194022a999p-934, 0x1.cb8968198c7a8p-610, 0.0, 0.0, 0x1.318a47aba5454p-221,
     0x1.d4479d04deb4p-159, 0x1.4967caed03a11p-566, 0.0, 0.0, 0x1.4f96fba6a9393p-807,
     0.0, 0x1.539b42ebc47e6p-741, 0x1.866363ff8233cp-853, 0x1.efd6717e129bp-738,
     0x1.c86f8ef6e9a44p-254, 0x1.8c3d2c75363c7p-476, 0x1.54a2d709ad532p-364,
     0x1.0081c6aafb14cp-298, 0.0, 0.0, 0.0, 0.0, 0x1.4e058b29cacf8p-72,
     0x1.89d0082d623a9p-594, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a11a814d3b3cp-118,
     0x1.8965c861e554cp-227, 0x1.7710d1fc273bdp-292, 0.0, 0x1.c3515bc0c5037p-782,
     0x1.ecc653668fd7cp-237, 0.0, 0x1.d329b5b55bb35p-883, 0.0, 0.0, 0.0,
     0x1.718d05f8c1321p-537, 0.0, 0.0, 0x1.eb0927fbd46bdp-781, 0.0, 0.0, 0.0,
     0x1.134ec7f308716p-669, 0x1.14a189ca5457bp-680, 0x1.bd2fb05f06f1bp-405,
     0x1.b260081e17cefp-664, 0.0, 0.0, 0x1.7f07972c757fbp-166, 0.0,
     0x1.39fa29b45bfaap-217, 0.0, 0x1.10937750f518ep-565, 0x1.cc396cd3c5f4p-346,
     0x1.bcdd74339b6a6p-56, 0x1.7955197cbf2d2p-902, 0.0, 0.0, 0.0,
     0x1.ae973324fb6bep-44, 0x1.c91d3acb4c8a4p-506, 0.0, 0.0, 0.0,
     0x1.d0ff55510830dp-181, 0x1.a1e9a8f12ded1p-59, 0.0, 0.0, 0x1.74a653843e572p-848,
     0.0, 0x1.b60fd1c3735c2p-982, 0x1.820264a160f74p-564, 0.0, 0x1.24636a16dbec8p-472,
     0x1.e05b24a71bbc2p-834, 0.0, 0.0, 0.0, 0.0, 0x1.6284fefd3112fp-613, 0.0, 0.0,
     0.0, 0x1.c09e582056d96p-304, 0x1.33e475fb86e55p-940, 0.0, 0.0,
     0x1.96e5cbc2b2274p-209, 0.0, 0.0, 0.0
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_finz_sqrtd1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sqrtd1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd1_u05purecfma bench acc %la\n", global_bench_acc);
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
