/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd2_u10avx2128.c --function Sleef_finz_logd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.59016a21b2d8ap-774, 0x1.1051524b60225p-82, 0x1.979d9cc519fa2p-699, 0.0,
     0x1.d91d05e5ce259p-655, 0x1.50f56bb644d3ep-302, 0x1.8c8c92b7cd8dcp-1009,
     0x1.981003968742bp-674, 0.0, 0.0, 0.0, 0x1.a7157e25b149ep-690, 0.0,
     0x1.f553647f66a6cp-546, 0.0, 0x1.a793695b8d81cp-955, 0.0, 0x1.f1966a551f1c2p-453,
     0.0, 0x1.ab04345c724c3p-202, 0x1.8224fd227bc91p-541, 0x1.d19cdfe43c008p-469,
     0x1.c4296c06e3956p-936, 0x1.21a0c32a25f5ap-391, 0.0, 0x1.fef5e822b424fp-552, 0.0,
     0.0, 0x1.3524716ed2965p-974, 0.0, 0.0, 0x1.ca351735972bcp-211,
     0x1.e93a01c3ad21dp-59, 0.0, 0x1.2f3b3dca177edp-110, 0x1.a0edee7f96bf4p-787,
     0x1.ebda7c592cdccp-902, 0.0, 0.0, 0x1.0361151c7f86cp-170, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2d8af25d3cbbap-307, 0.0, 0x1.7ff349e3dcffdp-535, 0.0, 0.0,
     0.0, 0x1.9e973c3ed5ce2p-371, 0x1.bc3c0c69fd7c7p-1017, 0.0,
     0x1.dadaaf287d4c1p-316, 0.0, 0.0, 0.0, 0x1.b76ce053561dcp-549,
     0x1.b154b63b97ddcp-516, 0.0, 0.0, 0.0, 0.0, 0x1.778b5608c2353p-371, 0.0, 0.0,
     0.0, 0.0, 0x1.c39d39c89a5f2p-246, 0.0, 0x1.aa15fb372c53dp-556, 0.0,
     0x1.28589712329dp-145, 0x1.b2aee7c364a3dp-295, 0.0, 0.0, 0x1.91dd329307a28p-498,
     0x1.4c03ce51670a2p-606, 0x1.5286bc7083abbp-869, 0.0, 0.0, 0x1.b50016d185b13p-294,
     0x1.4e787cffccceep-352, 0x1.07bfdebf920f9p-157, 0.0, 0.0, 0x1.d0efa5a5bcc14p-584,
     0.0, 0x1.801fd6d49e6dp-570, 0.0, 0x1.791730fef6f7bp-310, 0.0,
     0x1.2c385446a2265p-274, 0.0, 0x1.3dd9bc78da6fcp-151, 0x1.c180abfc665ccp-366, 0.0,
     0x1.05fb82503fd9p-987, 0.0, 0x1.f7e266bc52167p-458, 0x1.e3c83a9140ddcp-70, 0.0,
     0.0, 0.0, 0x1.3b8bce0f766a2p-107, 0x1.0eeaf4c0f1528p-804, 0x1.c05d0118989e8p-302,
     0x1.78465f1581e02p-911, 0x1.8d2cbc619b9bp-381, 0.0, 0x1.1ad1e5303b587p-661, 0.0,
     0x1.a8307ad407cbep-157, 0x1.dff5f18c4901ep-217, 0.0, 0.0, 0.0,
     0x1.2db580f9b545dp-518, 0x1.af3b5edf15bf1p-29, 0.0, 0x1.9451fb90888f5p-823, 0.0,
     0x1.254b69a0be6e9p-77, 0x1.75c6647cba148p-129, 0.0, 0x1.f664c396fa2a1p-603,
     0x1.cbfa2ba51d95p-899, 0x1.857d534e8b781p-608, 0x1.ca95f868c0008p-69, 0.0,
     0x1.af4b8970be80ep-104, 0.0, 0.0, 0x1.48bcbb18f5b3dp-274, 0.0, 0.0,
     0x1.370b92f231dc2p-705, 0x1.301ad014f73c3p-354, 0.0, 0.0, 0x1.f824f95f6f0cap-990,
     0x1.0fca737aaef34p-750, 0.0, 0.0, 0.0, 0x1.60808f594b6f5p-732, 0.0,
     0x1.b104f90fdf956p-889, 0.0, 0x1.3995ba98fbda6p-944, 0.0, 0.0, 0.0,
     0x1.7b26f145a5ddfp-805, 0.0, 0x1.13760b019b1e9p-12, 0x1.490dab3ccf064p-918, 0.0,
     0x1.40d3d710794cbp-359, 0.0, 0x1.f53a69487f9a8p-419, 0.0,
     0x1.a30965da2cb65p-1012, 0x1.1b9c63e59353cp-750, 0.0, 0.0, 0.0,
     0x1.8f70bbf29d2c6p-178, 0x1.dbb9d80babdefp-113, 0x1.f1e9b7f06217ap-293, 0.0,
     0x1.b9c81535ae9ccp-824, 0x1.1669d42e61dfbp-75, 0x1.88a64b20f8972p-575,
     0x1.9cd25c1777051p-542, 0.0, 0x1.0f6cbbf5311aep-844, 0x1.4bff52e3ab504p-304,
     0x1.36a1420ed657bp-740, 0.0, 0.0, 0x1.f3a9c21d480f1p-364, 0x1.2a76dc2d2b666p-618,
     0x1.19b091df3fd5ap-708, 0x1.16a717947d04bp-689, 0x1.dd2e2463dbf65p-87,
     0x1.fc83cff565245p-275, 0.0, 0x1.c48043a4ae8b6p-885, 0.0, 0x1.c163ca23c3cb6p-389,
     0x1.b883daa2dcfccp-589, 0.0, 0x1.f5ba2efc452cp-691, 0.0, 0x1.08368e84a52e9p-636,
     0.0, 0x1.3218e0f05e262p-741, 0x1.3aa29b2f8d60bp-187, 0.0, 0x1.4c7dc961ce03dp-48,
     0x1.9005501cd083ep-849, 0.0, 0.0, 0x1.79b449e8983eap-150, 0x1.c86e7b07dd866p-819,
     0.0, 0x1.18bb506f0ddeap-131, 0.0, 0x1.9df567d47806p-652, 0.0, 0.0,
     0x1.445646781d483p-206, 0x1.0530d6b82deedp-336, 0.0, 0x1.7a8f027b083aap-466, 0.0,
     0x1.e23bdfb86b0a5p-783, 0.0, 0x1.7cc2aa5d4ffc4p-633, 0x1.a15a9548b4aefp-68, 0.0,
     0.0, 0.0, 0x1.92bc1bb198988p-199, 0.0, 0x1.04c349db2f034p-895, 0.0,
     0x1.7611192723a44p-189, 0.0, 0x1.11a33bc63bf87p-30, 0.0, 0.0,
     0x1.087dd41d924f7p-921, 0x1.0f395d17f13f9p-429, 0x1.b4c3b6c25cda4p-922,
     0x1.3bc9f2f487d3bp-993, 0.0, 0x1.d52acc34c9839p-378, 0x1.47a327e2bf77fp-195,
     0x1.5adf35e9d8adap-849, 0.0, 0x1.be9903db9876bp-11, 0.0, 0x1.c4b883ef7f716p-495,
     0x1.d722038b7465ap-64, 0x1.2d9f17fca33a5p-486, 0.0, 0.0, 0.0,
     0x1.a404ad9a29cffp-24, 0.0, 0.0, 0x1.c9b7511a5da5dp-951, 0.0, 0.0,
     0x1.6dc687e3858dap-347, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31bb51ef171acp-509,
     0x1.dcceec670607fp-983, 0.0, 0.0, 0.0, 0x1.3cee1ba160ff8p-577, 0.0,
     0x1.09f04b77941fcp-954, 0x1.111d0b67b9683p-3, 0.0, 0x1.f189383f6be1ap-607,
     0x1.aef42b53562f6p-26, 0x1.7d1737004c52p-370, 0x1.70d3619a4c12ep-136,
     0x1.1fc25d7bed709p-72, 0.0, 0.0, 0x1.d9a99ef0cb96dp-390, 0.0,
     0x1.27ff4923c65d8p-45, 0.0, 0x1.cacb419a2601cp-715, 0.0, 0.0, 0.0,
     0x1.40fbaf91ee65ap-844, 0.0, 0.0, 0.0, 0x1.90e82149cb877p-393,
     0x1.edc4aaf016185p-13, 0.0, 0x1.5a16437f8bd48p-475, 0x1.f0a18d51b7a2cp-912,
     0x1.1c45428c4bcbep-856, 0x1.c4cc00c3ae289p-614, 0.0, 0.0, 0x1.89ae0051c53e3p-132,
     0x1.c8d05a2f8dfc8p-33, 0.0, 0x1.dbddb2ffe1b8cp-551, 0.0, 0x1.5ee983d132bb5p-27,
     0.0, 0x1.31da61752bdp-797, 0x1.be932f461a3d2p-214, 0.0, 0x1.27255dba71cf5p-977,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9568d1dfeefep-890, 0.0,
     0x1.630ff12983632p-478, 0.0, 0.0, 0x1.dcbc2e60de468p-600, 0.0,
     0x1.b43c580f04567p-899, 0x1.5007f86c9ec2ep-252, 0x1.9b87db8168cbp-707,
     0x1.b7b6ff2f4fd7cp-887, 0x1.c784eca94a135p-384, 0.0, 0.0, 0.0,
     0x1.4506de3974d4cp-758, 0.0, 0.0, 0.0, 0x1.a1e9993c2be9bp-276, 0.0,
     0x1.6041cd8bdd009p-318, 0x1.35bcd3957defdp-247, 0.0, 0.0, 0x1.c2985deeea87p-674,
     0x1.2c3a445a080adp-628, 0x1.db12aa2cceb8p-563, 0x1.5ff83862d11ap-821,
     0x1.b2ed56a39b37cp-795, 0x1.ad902f03a19ebp-262, 0x1.8f643a6e2f9cdp-320, 0.0, 0.0,
     0x1.908dee01af115p-363, 0.0, 0.0, 0x1.4899a5aa791d8p-825, 0.0, 0.0, 0.0, 0.0,
     0x1.e8dbd8834053ep-875, 0x1.70f85ce3027bdp-450, 0.0, 0.0, 0x1.636d76a008c47p-335,
     0x1.b918c92a8acd3p-862, 0x1.e658d04ad3ab6p-107, 0.0, 0x1.99bcfe199a1e5p-424,
     0x1.5c95e64b9de91p-862, 0.0, 0x1.6884a4f70273bp-122, 0x1.10365fb7d7bfdp-741,
     0x1.b86a7e1cdc33p-733, 0x1.b21e31d18c32cp-104, 0.0, 0.0, 0x1.b2b709057c64ap-219,
     0x1.3d69d4911174fp-233, 0x1.2217d59a78b5ep-357, 0x1.fc9e3c923d0ffp-143, 0.0, 0.0,
     0x1.b00117ec71ff2p-680, 0.0, 0.0, 0x1.8ead23230de99p-282, 0.0,
     0x1.78cf325eada1ap-871, 0x1.9dae64e318dd5p-134, 0x1.d1caa027f39f4p-772,
     0x1.65d62d8e87c2fp-816, 0x1.2bdbf83737095p-438, 0x1.69cfe2c7e2969p-36,
     0x1.d30b65ed82227p-654, 0.0, 0.0, 0x1.f05bb720abc8dp-825, 0.0,
     0x1.23b8ce40e6139p-4, 0.0, 0x1.3dd1b75fb32b5p-323, 0x1.4cf2c51f3f8c9p-752,
     0x1.268876082207fp-923, 0.0, 0x1.8098191e351efp-850, 0x1.4f83fe6728465p-156, 0.0,
     0.0, 0x1.41f7cb358118cp-787, 0x1.cd7592ed03197p-664, 0x1.59f48e46c276cp-171,
     0x1.db3b06caad32fp-187, 0.0, 0.0, 0x1.a31bb0b26418fp-990, 0x1.b4af31953e7f2p-459,
     0.0, 0.0, 0.0, 0.0, 0x1.144056cb382a2p-193, 0.0, 0.0, 0x1.d24c9f63b78cep-640,
     0.0, 0x1.3bb4f1e6c836fp-991, 0x1.60a19b5dbfea7p-137, 0x1.b1582f7fe504cp-751,
     0x1.0236a65f6a739p-514, 0.0, 0.0, 0.0, 0.0, 0x1.dca0f375e6096p-3, 0.0, 0.0,
     0x1.168ae01155a5fp-142, 0x1.4ac97ef9dfdebp-359, 0x1.ca7b3f1b916bcp-165, 0.0,
     0x1.d75f208fc019dp-247, 0.0, 0x1.2116d1f7c1fc4p-284, 0x1.05d965a35f8d7p-101, 0.0,
     0x1.9ea6831515004p-358, 0x1.aa17976881153p-554, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.71e282a09a61fp-21, 0x1.4d6e5f6b6dbb8p-71, 0x1.a9bb8773bddcfp-568,
     0x1.02fbd48b99a47p-944, 0x1.84addcc9415d7p-284, 0.0, 0.0, 0x1.ef11822997de5p-611,
     0.0, 0.0, 0x1.eb0f3252770b1p-938, 0x1.6eabe40275187p-688, 0.0,
     0x1.a07f609a4982p-667, 0.0, 0.0, 0x1.1ce6734f4248dp-756, 0x1.55e5f50b4087p-6,
     0.0, 0x1.34e2e5e5428ffp-195, 0.0, 0.0, 0x1.bd0cf0268ca2fp-879,
     0x1.e05300922e22ap-920, 0x1.d154ba4a4e921p-529, 0x1.c72cc823aaec3p-244, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ae88024627db2p-746, 0x1.324c75fe00563p-64, 0.0,
     0x1.bcb205d0b4811p-747, 0x1.4a3190dc1dc72p-983, 0x1.32255659d49bap-102, 0.0,
     0x1.01894a8d2a1d5p-135, 0x1.c8dbfd6309ba6p-329, 0x1.b05865b140caap-441, 0.0,
     0x1.97e819a77d695p-686, 0.0, 0.0, 0.0, 0x1.fbe7bb0b46d64p-978,
     0x1.26e89e6acf66ap-748, 0.0, 0x1.bf93cfa803d27p-546, 0.0, 0.0, 0.0, 0.0,
     0x1.497c2cc4faefbp-380, 0.0, 0x1p0, 0.0, 0.0, 0x1.9886b3afa8e1ep-485, 0.0,
     0x1.48f1165cc92c6p-791, 0.0, 0.0, 0.0, 0x1.46daaa400bc38p-417, 0.0,
     0x1.d4520dcdf5ba4p-226, 0x1.29fe9886ddb41p-18, 0x1.2aa7ecd900bf4p-800,
     0x1.60d4a9fa81232p-943, 0.0, 0.0, 0x1.468e9c529f6dp-238, 0.0,
     0x1.0804828a9ce4p-588, 0.0, 0.0, 0.0, 0x1.4d5e0b4fbcea9p-722,
     0x1.a1828fde62ce5p-786, 0.0, 0x1.54af7f3dd03cap-403, 0x1.a60eb739e73c5p-544, 0.0,
     0x1.a6602281c6d92p-693, 0.0, 0.0, 0x1.edfd303aabb44p-364, 0x1.614b7a2d709bep-679,
     0x1.af8e17c30e2b1p-555, 0.0, 0.0, 0.0, 0x1.f9fc667d38ac6p-438,
     0x1.9a90fda9af8c5p-311, 0x1.d9c25e1b7dbdp-840, 0.0, 0x1.6b3578c30909cp-111,
     0x1.ddb13cee6d3f8p-483, 0.0, 0.0, 0.0, 0.0, 0x1.2bafc2d417a81p-667, 0.0,
     0x1.78cf6d05f643cp-174, 0x1.978b8ec8e1ec3p-197, 0x1.0e850e7a587ecp-103, 0.0, 0.0,
     0.0, 0x1.9d89a1e53c497p-573, 0.0, 0.0, 0x1.e5131381bb9ccp-34,
     0x1.3d98a0fcfecbdp-597, 0x1.204d396643da4p-764, 0x1.a9f361485f719p-958, 0.0, 0.0,
     0x1.017cf0791d03p-781, 0.0, 0.0, 0x1.89c2dc567ae56p-922, 0.0, 0.0,
     0x1.bcb56093ea9cep-1002, 0.0, 0.0, 0.0, 0.0, 0x1.5d4dd42cbadabp-591, 0.0, 0.0,
     0.0, 0x1.fb2388a05b4e7p-514, 0x1.22bee3575f99p-396, 0x1.fc07d21a5f322p-729, 0.0,
     0.0, 0.0, 0.0, 0x1.9cc4528ef124p-197, 0.0, 0x1.e3cb7122f26e1p-797,
     0x1.c5b90c65ec7b8p-739, 0x1.8ccba7725b7cfp-960, 0x1.7a8f7680692e8p-767,
     0x1.63ee2aae9dcc8p-339, 0x1.eae4e2745121bp-574, 0.0, 0.0,
     0x1.bb4d33811a64ep-1020, 0.0, 0.0, 0x1.5057f97f8802fp-598, 0.0,
     0x1.b9877b605d4b6p-673, 0x1.f9878caabeb58p-565, 0x1.934e49f08ab9fp-310,
     0x1.21c3ff4976bd7p-704, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d265f73c6055p-331, 0.0,
     0x1.85b96baa23b6fp-956, 0x1.eb3b3a94baba6p-756, 0x1.a8931f6b808b8p-658,
     0x1.877db117ff429p-301, 0.0, 0.0, 0x1.0e7fcbc1b4e22p-729, 0x1.198dc4314442cp-660,
     0x1.119a0c1f8f973p-506, 0x1.fdd0530d3071ap-688, 0x1.7a426127bd1c1p-506, 0.0, 0.0,
     0x1.73b48e749930fp-1002, 0x1.23ec922f7267fp-865, 0x1.b141833c3cb2p-411,
     0x1.6ca631cc38d02p-179, 0.0, 0.0, 0.0, 0.0, 0x1.ebfcecbc23675p-129, 0.0, 0.0,
     0x1.1125a2ac9e689p-147, 0.0, 0x1.59a9d461502b8p-977, 0x1.47c15936f64e5p-726, 0.0,
     0.0, 0.0, 0x1.54da8951c8126p-74, 0x1.ca170ba9d23ccp-960, 0x1.e1790b149ae23p-351,
     0x1.21c43be064cb1p-65, 0x1.1d2e865f751cdp-190, 0.0, 0x1.a84c0f554ac58p-400,
     0x1.8e0464304419ap-776, 0x1.715bef2c1fcb4p-272, 0x1.13e0d2c66349dp-607, 0.0, 0.0,
     0x1.9e8df67b570b9p-605, 0.0, 0x1.9786d1776cc07p-956, 0.0, 0x1.ccabaf4f14e9ap-918,
     0.0, 0x1.95e1d0ae33159p-784, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc645c3ff2113p-796,
     0.0, 0x1.4c03b8a6caa8dp-168, 0.0, 0.0, 0.0, 0x1.d1a420e7b7f5fp-18,
     0x1.b78a123e68d6cp-434, 0x1.737bc0ac44de3p-65, 0x1.0ef0b55484481p-492,
     0x1.676dd1b082bf7p-386, 0x1.99f5e1f840365p-1012, 0x1.ed0ed84d2e2ap-192,
     0x1.1acdf2c716d8fp-206, 0x1.47cec4c402b8ep-758, 0x1.a096a88959a17p-118, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ae661cafefcp-196, 0x1.24259c388f437p-304,
     0x1.d93de54b844dbp-754, 0x1.d6678f694c52bp-262, 0x1.13b0466ddbb38p-775,
     0x1.cde796230303p-171, 0x1.fe311dd59155fp-602, 0x1.ea5f13e950232p-891, 0.0,
     0x1.0c92db0e2b32dp-748, 0.0, 0x1.f5810cee36e7bp-853, 0x1.7a8e5819fb17ep-378, 0.0,
     0x1.b3254e1098c51p-292, 0.0, 0.0, 0x1.d90b05e272a39p-851, 0.0,
     0x1.a3f9c93f51675p-33, 0x1.fa104db751ad1p-778, 0.0, 0x1.2a24605f1daefp-609, 0.0,
     0.0, 0x1.f5a8d6d9020a7p-436, 0x1.11abd06c87796p-882, 0x1.f7e3f9cdcdaaap-109,
     0x1.8e642cedc4cc9p-498, 0x1.b696a103d91c2p-409, 0x1.d6615fa2200cap-1017,
     0x1.fb00ebcb17855p-314, 0x1.89fd3a5d24bccp-517, 0.0, 0.0, 0x1.1b009a4a2768cp-620,
     0.0, 0.0, 0x1.d86fed32307e2p-755, 0.0, 0.0, 0x1.47e11a926643ep-999,
     0x1.1b01792299c45p-626, 0x1.d804187a332c6p-937, 0.0, 0.0, 0x1.dc80a1ccae3b6p-551,
     0x1.01d9847f174e4p-818, 0x1.4b434ffb6c6b7p-844, 0.0, 0x1.6295d9b4c26p-486, 0.0,
     0.0, 0x1.0d144c23a4b92p-681, 0x1.f9d37812702f3p-920, 0x1.c803f177a644p-770,
     0x1.14caee6db3885p-74, 0x1.885545cf6851cp-169, 0x1.a340f59d80b59p-302,
     0x1.547b2bcfdc21p-240, 0x1.157b403c0a761p-586, 0x1.b59a84a0626fdp-312, 0.0, 0.0,
     0x1.24a7b6bec3d26p-726, 0x1.c54c612234f4ap-933, 0x1.1e4938f877941p-107, 0.0, 0.0,
     0x1.21f8a619c9b47p-10, 0x1.36c759a9cc0c9p-274, 0x1.bc6d36e63ec84p-318, 0.0,
     0x1.0d16959092e66p-696, 0x1.985e65d58c595p-1019, 0.0, 0x1.554bfb059730ap-106,
     0x1.12419853a93b7p-206, 0.0, 0.0, 0.0, 0x1.070c7b3cf6161p-479,
     0x1.c6609275189fbp-570, 0.0, 0x1.48217ef75d18fp-271, 0x1.8343f0cd0ff78p-954, 0.0,
     0.0, 0x1.bd0aeec4412bep-568, 0x1.28a2db76ff2d5p-225, 0.0, 0.0, 0.0,
     0x1.4075789e4b276p-509, 0.0, 0x1.0d348c42f2549p-990, 0x1.5df5dc875c302p-512,
     0x1.b1fd181890a17p-44, 0x1.4560d51b7bb1fp-367, 0x1.2b8140ea12823p-370,
     0x1.4fe3ab8c0716ap-385, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.96784cfda29c1p-932, 0.0,
     0x1.2b62586186cf4p-852, 0x1.4af33be6ee2bep-713, 0x1.b17bf5aa62ac6p-953,
     0x1.6557ac93058a9p-908, 0.0, 0.0, 0.0, 0x1.5f441e1060ddbp-299, 0.0,
     0x1.aa7f87fe90fe5p-664, 0x1.465d753e31e2dp-274, 0.0, 0x1.03fcdc4907344p-778,
     0x1.4e130f3b35c78p-1016, 0.0, 0.0, 0.0, 0.0, 0x1.72f43a590dbafp-971, 0.0, 0.0,
     0x1.72befb98279cdp-290, 0x1.5ada7b2c24cd4p-946, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.53b1d9f20b95ep-306, 0x1.82a588f1d0854p-507, 0.0,
     0x1.542d8289baf22p-278, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ba4dda2e6d2bp-349,
     0x1.60e68b8695587p-289, 0.0, 0x1.db9268f700fa6p-153, 0x1.c9387da0617cdp-737, 0.0,
     0.0, 0.0, 0.0, 0x1.7fbe11cf5f14p-861, 0x1.a7ab7fd11c376p-412, 0.0, 0.0,
     0x1.55de9f314a456p-551, 0.0, 0x1.ed73a298a669ap-1009, 0x1.6bcf785db67efp-255,
     0.0, 0.0, 0x1.36eedd3cdf03p-103, 0x1.d347646ef3b26p-350, 0.0,
     0x1.7cf2261ec8de2p-554, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3cde9a8c6605p-826, 0.0,
     0x1.b9fd33c40c57p-31, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e3264c947a99p-914,
     0.0, 0x1.667303409a566p-929, 0.0, 0.0, 0x1.30acc736789b1p-815, 0.0,
     0x1.b8241940798e9p-693, 0.0, 0.0, 0.0, 0.0, 0x1.84f70c5463a94p-644,
     0x1.a58797003e4c4p-450, 0.0, 0.0, 0x1.25038ef9f9d0ep-196, 0x1.b2d0288ee67cap-304,
     0x1.89eabd78175dp-916, 0x1.36c5150e34c7p-833, 0.0, 0.0, 0.0,
     0x1.dc591ca08f3efp-1002, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53720e56b2607p-8, 0.0, 0.0,
     0x1.75de5c5adfc99p-90, 0x1.c9d259d025f96p-369, 0.0, 0x1.fffc67a87ef49p-172, 0.0,
     0x1.0883f164e2c76p-111, 0.0, 0x1.ed91300f608e6p-780, 0.0, 0x1.a44c39e77ccd6p-357,
     0.0, 0.0, 0x1.af5420f59552bp-272, 0x1.1a30a24f08bcbp-354, 0.0,
     0x1.5b9c1f4c942fcp-200, 0x1.b4b51d707e5a2p-523, 0x1.f65091b195815p-756, 0.0, 0.0,
     0x1.078db2c3262dfp-653, 0.0, 0x1.5178614556252p-143, 0x1.bf54dace877f7p-49, 0.0,
     0.0, 0.0, 0.0, 0x1.4338b06092b77p-752, 0.0, 0.0, 0x1.13754332fe5a2p-393, 0.0,
     0x1.a41bd077c0765p-754, 0.0, 0.0, 0x1.b79b10432fd32p-561, 0x1.2049c45ad193cp-689,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a2978d9fd0a85p-597,
     0.0, 0.0, 0x1.99208de3fa918p-30, 0x1.e8924e791a9b8p-25, 0.0,
     0x1.7b81ca5852ce4p-308, 0x1.3d78cdd913866p-58, 0.0, 0.0, 0x1.70b2cd78a1ddep-200,
     0.0, 0x1.c0c219924c08ep-2, 0x1.c004ef0e5c41p-927, 0.0, 0x1.ff3346cfbf87fp-160,
     0x1.639411b7e05cbp-596, 0x1.6ca14a92337fbp-547, 0.0, 0.0, 0x1.7f957a7a2494fp-236,
     0x1.0755713b42f6cp-312, 0x1.a12165f09efafp-403, 0.0, 0.0, 0.0,
     0x1.99de7201d4d3bp-690, 0x1.0e5953df78d1cp-748
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
            tmp1 = Sleef_finz_logd2_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_logd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_logd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
