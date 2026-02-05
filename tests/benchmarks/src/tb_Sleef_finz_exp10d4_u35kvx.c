/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d4_u35kvx.c --function \
 *     Sleef_finz_exp10d4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.8c7a8d6f97b17p-721, 0.0, 0.0, 0x1.0f99f8c1e5c5fp-731,
     0x1.2853e5cdbcc29p-339, 0x1.1589006d289e8p-974, 0.0, 0.0, 0x1.aef518756d401p-649,
     0x1.b44079033fde4p-134, 0.0, 0.0, 0.0, 0x1.5a79163dd8224p-647,
     0x1.3e1b70d58dd22p-3, 0x1.0fbe4e1d1f4a2p-237, 0x1.bd3b10cc56dcp-1005, 0.0, 0.0,
     0.0, 0x1.63d8e0a25474ep-851, 0.0, 0x1.a8c00c1900313p-168, 0.0,
     0x1.260f6424f5806p-816, 0x1.06cd6d02f9ef3p-966, 0x1.b4f8c0c5d92dap-652,
     0x1.d080195d5b05dp-881, 0x1.41c9897237207p-759, 0.0, 0.0, 0.0,
     0x1.8bfd40432895fp-50, 0.0, 0x1.2639ae080348bp-288, 0x1.3f29b1d3af9d6p-998,
     0x1.c6efed9d74517p-902, 0.0, 0x1.554940fccb3f9p-474, 0x1.04e07d453119fp-1002,
     0.0, 0x1.69f1feee9c829p-213, 0.0, 0.0, 0.0, 0x1.6e11eb16afee5p-321,
     0x1.077f7f4a558f7p-694, 0.0, 0.0, 0x1.3a794b35ad06dp-817, 0.0,
     0x1.c4bde2d6d95cdp-106, 0.0, 0.0, 0.0, 0x1.29886a2f1706fp-617,
     0x1.aee3891d04444p-534, 0x1.ec8c72f5e5438p-28, 0x1.a640ba61d088fp-187,
     0x1.c56204ce260abp-896, 0.0, 0.0, 0x1.6a9eec6c4f40ep-542, 0.0, 0.0,
     0x1.179030e65b61fp-741, 0x1.bc85358f7e4dbp-121, 0.0, 0.0, 0.0, 0.0,
     0x1.fa8316321342bp-466, 0.0, 0x1.9756fce3f477ep-906, 0x1.a468807f721dep-92,
     0x1.ad9995deea465p-885, 0x1.e2281308e44a8p-896, 0.0, 0.0, 0x1.7e593d238c291p-421,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c200f2c67f343p-746, 0x1.47c6e9eb35cd4p-441, 0.0,
     0.0, 0x1.c3ef08802fe3dp-1000, 0.0, 0x1.664b81934d4ddp-824, 0.0,
     0x1.b531cfef30f55p-146, 0x1.de744c9299db1p-821, 0.0, 0.0, 0x1.6eedc5ac6eb5dp-36,
     0.0, 0.0, 0x1.1e203eb25d784p-207, 0.0, 0x1.e2b5f7baa7537p-393,
     0x1.cdfd93987f92cp-221, 0x1.1494d2526d7c4p-774, 0x1.ccf19c84f91fap-52,
     0x1.586207f0d0224p-452, 0.0, 0x1.1aff4bf80506fp-527, 0.0, 0.0, 0.0, 0.0,
     0x1.6cf7482a4f817p-670, 0.0, 0.0, 0.0, 0x1.843e1a8819c0bp-441,
     0x1.c0c5d0bac9aeap-889, 0.0, 0x1.c7b247fd616e9p-165, 0x1.59b93e5a724bep-463, 0.0,
     0.0, 0x1.1b2b42203d059p-439, 0x1.e334ab2b1b56cp-395, 0.0, 0x1.f02aff817e299p-291,
     0x1.5c437a097dd67p-1007, 0x1.b583cb2b96c46p-295, 0x1.07e75f5ddb6bbp-750, 0.0,
     0x1.007d5c4cce705p-607, 0x1.12921eb95ea6fp-368, 0x1.343de2a1bfa7bp-300, 0.0, 0.0,
     0.0, 0.0, 0x1.78d87971c83bap-937, 0.0, 0x1.8431b94ba4b87p-34,
     0x1.2d5ebe53f1fdfp-88, 0.0, 0x1.1e8646d526cdfp-249, 0.0, 0.0, 0.0, 0.0,
     0x1.28511a89c831cp-576, 0.0, 0.0, 0x1.7a25c053b5305p-303, 0.0,
     0x1.ccd125595721cp-455, 0x1.915c82f7528ddp-307, 0.0, 0x1.e88d69cab481cp-852, 0.0,
     0x1.2d633761e438ep-750, 0x1.34e142485bb58p-782, 0.0, 0x1.9c068b6f45ecbp-475, 0.0,
     0x1.dd4c25d69f0f9p-260, 0.0, 0.0, 0.0, 0.0, 0x1.d7c99d4334828p-514,
     0x1.6680e78f7f837p-68, 0.0, 0.0, 0.0, 0x1.ba9b1c13e8213p-795,
     0x1.a531f8c3e331ep-311, 0.0, 0x1.d6f8106d13f42p-35, 0.0, 0x1.5a81a5207dc26p-81,
     0x1.1fb15da5af39ap-742, 0.0, 0x1.fd3325516b21ap-486, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0f7eba10c6698p-546, 0x1.dcddfb6853d48p-432, 0.0, 0.0,
     0x1.7ed7a9e19063p-52, 0.0, 0.0, 0x1.4ed24fa4e11c2p-321, 0x1.923bc5c277342p-93,
     0x1.dc6202075fdbbp-768, 0x1.4f2ad7a7251edp-372, 0x1.bfc014d2639d8p-836,
     0x1.150b124f153fcp-435, 0.0, 0.0, 0.0, 0x1.140b5df27efeep-374, 0.0,
     0x1.c720ea5d3d477p-473, 0.0, 0.0, 0x1.e9d19bef724cbp-359, 0x1.bffe9fef8df51p-407,
     0x1.314818d60d646p-929, 0x1.6e81d109fef1fp-1015, 0x1.d0c4e964be4bdp-799, 0.0,
     0x1.c8741ce262affp-513, 0.0, 0x1.dde9780c6288bp-798, 0x1.61a71c1cd0c4cp-445, 0.0,
     0x1.0531b44d3c19dp-537, 0x1.e28d80ce45fdfp-423, 0x1.5ae76ed9ca3dcp-900,
     0x1.de24f6a1526b2p-608, 0.0, 0x1.efc9b71d873f4p-575, 0x1.8c714f39ef87bp-760, 0.0,
     0.0, 0x1.1e098c2ef0094p-518, 0x1.65cf2aeeb42f4p-73, 0x1.3d4dc79da2efp-147,
     0x1.eb5ed890c33f9p-299, 0.0, 0x1.3977b2875835ap-690, 0x1.ae57369deeabap-494,
     0x1.a7bade5a18ad7p-784, 0.0, 0.0, 0x1.5391ea9d61b5cp-822, 0x1.002a1e01eaf8ep-481,
     0x1.b07edb98566dfp-115, 0.0, 0x1.acf17ff45745cp-767, 0.0, 0x1.d75b388fa6179p-423,
     0.0, 0.0, 0x1.cbda0a984518dp-792, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f33b69e63461p-826, 0x1.0d5a4cace99d3p-218, 0.0, 0x1.64e7ef9ddd18ap-604, 0.0,
     0x1.b8224b9ddce05p-1022, 0.0, 0x1.27749656a6588p-324, 0.0, 0.0, 0.0, 0.0,
     0x1.2586660383f07p-505, 0.0, 0x1.49fb0d4176fd3p-664, 0x1.cfe7e52129a65p-396, 0.0,
     0x1.0e97c6239bdbdp-748, 0x1.eba9ea2fe2ac5p-177, 0x1.825b51a7bc2fdp-598, 0.0, 0.0,
     0x1.598555d906b59p-255, 0x1.72f263d505bd2p-54, 0x1.e93c6b7893ab5p-672,
     0x1.4879695fe952dp-718, 0x1.85edb1a693bf5p-171, 0.0, 0x1.2327d8903ed8bp-844,
     0x1.e80fa4a327043p-93, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ecac173de044p-586, 0.0, 0.0,
     0x1.ee7e0526b3337p-85, 0x1.f27bd96af443ap-836, 0x1.4cd4842e250a9p-372,
     0x1.50e779962e473p-801, 0x1.dae4c6a16ba49p-231, 0x1.143537d6b669dp-502, 0.0, 0.0,
     0x1.d68593724cb11p-451, 0x1.e5c84fd0ffdb7p-243, 0x1.527a0c809b309p-883,
     0x1.7bbdc1d0ed4eep-261, 0x1.e37b812784bacp-616, 0x1.0b3a3d75372a5p-71,
     0x1.1c19ec722f35fp-113, 0.0, 0x1.d943cd72a53a7p-469, 0x1.42890201d9c6ep-264, 0.0,
     0.0, 0x1.fc97c510029dbp-794, 0x1.9e2404bb6023bp-931, 0.0, 0.0, 0.0,
     0x1.d59b10da0015bp-973, 0x1.fa5f10d837829p-23, 0x1.e4574fd72f063p-982,
     0x1.24bf69fd8f3c8p-789, 0x1.89c8d319957d8p-787, 0.0, 0.0, 0.0,
     0x1.1fcc44227ba79p-750, 0.0, 0x1.681505de376b6p-1015, 0x1.aeb4345948c59p-838,
     0.0, 0x1.0b290cd6fc1efp-113, 0.0, 0x1.dd945177f57cbp-131, 0.0, 0.0, 0.0, 0.0,
     0x1.561c3288c31fp-321, 0.0, 0x1.2ffd8a39dfef5p-677, 0x1.af08bbee004afp-62, 0.0,
     0x1.be6e3256bf4ecp-918, 0x1.f791f64f38f84p-1018, 0x1.c856cbadb8338p-158,
     0x1.6705b2ca33cacp-487, 0x1.ea492bff13417p-133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a903e78e76c98p-1, 0x1.50f0282665151p-415, 0.0, 0x1.f89d75df93e05p-389,
     0x1.368807d3667ap-279, 0x1.abfce68b39a2cp-324, 0x1.300ed3467a233p-309,
     0x1.77bcdc575292p-642, 0x1.c0126320a183fp-536, 0.0, 0.0, 0x1.17dbcef917071p-313,
     0x1.73c2ee371233p-916, 0.0, 0x1.464ff901648bep-20, 0x1.e40b8fd9d64adp-334,
     0x1.a2734d024de2ep-878, 0x1.c076520aa5188p-898, 0x1.0235cd0d503a3p-639,
     0x1.299fbdbd5eb7bp-20, 0.0, 0x1.a34bc10971a8ep-152, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b43b0906e9f86p-202, 0x1.1c6aba72a38a9p-805, 0.0, 0x1.c40bcfb065c0ep-228,
     0.0, 0x1.0c36badea04fap-84, 0x1.95f0cc2d108p-809, 0.0, 0.0,
     0x1.77fdf8c114564p-312, 0.0, 0x1.7835a83f5d78ap-734, 0x1.119a37a1d901cp-427,
     0x1.558689c2ce68ap-171, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9217581e741c4p-323,
     0x1.51d427015a64ep-60, 0.0, 0x1.3c39bce0cf966p-754, 0.0, 0.0, 0.0, 0.0,
     0x1.945f6f6d64e96p-712, 0.0, 0x1.c088621792a13p-729, 0.0, 0x1.b90897fedf386p-302,
     0.0, 0x1.d1b79a006bc1ep-509, 0x1.9f8c14376fc38p-832, 0x1.ee713278f496fp-1007,
     0x1.659cbc55748f2p-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9ff1b47b2a13p-475, 0.0,
     0x1.092a7b2623b6bp-820, 0x1.881da4a6fbc76p-602, 0x1.426112077f5afp-853,
     0x1.c58a6157c06c8p-1000, 0.0, 0x1.30abe66fa39bdp-1007, 0x1.8107c714a769bp-710,
     0.0, 0.0, 0x1.009d494714f24p-295, 0x1.2e31024467259p-619, 0.0, 0.0,
     0x1.6aa26a73ae28fp-134, 0x1.ee49825a17281p-529, 0x1.139fa832450cap-612,
     0x1.92865c1333d0fp-609, 0.0, 0x1.ac63e327526adp-289, 0.0, 0.0,
     0x1.41b3505f06b98p-483, 0.0, 0.0, 0.0, 0x1.af92983d4453cp-839, 0.0,
     0x1.0d55b7d649e66p-713, 0.0, 0.0, 0x1.6b53078df7821p-698, 0.0,
     0x1.78f6ad6754addp-628, 0.0, 0.0, 0x1.77093f7df8a29p-742, 0.0,
     0x1.3ed3bb9c2fc1cp-454, 0.0, 0x1.ba9e8e43d580cp-662, 0x1.d8165ac3748e6p-9,
     0x1.95c4881cab8c5p-768, 0x1.7c80f2ad58913p-16, 0.0, 0x1.03187bb3bdd03p-693,
     0x1.d6515e0e38afep-926, 0x1.2822a63c42bb9p-549, 0.0, 0x1.e91e6c3a47e05p-500,
     0x1.3d78cc72ba0cap-14, 0x1.2922782957916p-754, 0.0, 0x1.b2f1ba56995b2p-634,
     0x1.0d876be5bb021p-947, 0x1.a27ed331b4492p-654, 0x1.7d43c0a7236bp-360, 0.0, 0.0,
     0.0, 0x1.a1b6ba2c779f5p-541, 0.0, 0x1.8b4b17e3f5e8ap-304, 0.0,
     0x1.b001c86dafb37p-573, 0.0, 0.0, 0x1.1e59cf1f176b9p-908, 0.0, 0.0, 0.0, 0.0,
     0x1.a376eeda9a4fp-588, 0.0, 0.0, 0.0, 0.0, 0x1.1a47da422ad55p-142,
     0x1.29ee5833012dap-170, 0.0, 0.0, 0.0, 0x1.0e6f5ec444c24p-976, 0.0,
     0x1.ec9faba407aeap-905, 0x1.f2b9639df14c1p-278, 0x1.d3c83f0fcf257p-434,
     0x1.f2ba178b12082p-393, 0.0, 0.0, 0x1.d8a87cef7fdbap-595, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e0ce2b836097fp-449, 0.0, 0.0, 0.0, 0x1.85833691bf99ap-636,
     0x1.8111cfcb5c1efp-264, 0x1.6ec291f4c1073p-521, 0x1.24b6fe8b470d5p-612,
     0x1.77f64865f54a1p-10, 0x1.deee30253fd8ep-91, 0.0, 0.0, 0.0,
     0x1.07a95565a34c6p-869, 0.0, 0.0, 0x1.e6ac8e09a4461p-522, 0x1.81522dd083b2cp-198,
     0x1.f05d95447a64p-874, 0x1.324005572c531p-466, 0x1.03581c61ca25ap-799,
     0x1.c42d194b723adp-192, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.087e64a3110fep-317, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.686f00db082abp-693,
     0x1.89cad5039ed85p-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ab0f9f5c9f6fp-8,
     0.0, 0x1.42b105e8232d4p-699, 0x1.2eebdc7ae5872p-489, 0.0, 0x1.27a37a7499737p-972,
     0x1.f6bc33a4b8a47p-896, 0.0, 0x1.a8b2e39c6696dp-371, 0x1.1d60d54eaba96p-628,
     0x1.e519083e6953p-735, 0.0, 0.0, 0x1.ef35bb1404155p-325, 0.0, 0.0,
     0x1.6ce08129f16dbp-871, 0.0, 0x1.435a154df41c9p-790, 0x1.7aee82b213f8bp-25,
     0x1.c51b69248639dp-282, 0.0, 0x1.ee2b0f30dbbb6p-660, 0.0, 0.0,
     0x1.bcc98a0e6de24p-936, 0x1.5945da04e5653p-880, 0.0, 0.0, 0x1.8cda869940c69p-127,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.244ba0750b099p-412, 0.0, 0x1.6d0a58035aa01p-536,
     0.0, 0.0, 0x1.73634d788e3c8p-255, 0.0, 0.0, 0x1.2934b1c07c1dbp-998,
     0x1.97e59edd754cbp-544, 0.0, 0.0, 0x1.b03535c3c3ccep-553, 0x1.74f92adcf7656p-638,
     0.0, 0x1.1c51ed510469fp-268, 0.0, 0.0, 0.0, 0x1.4d70c0f9055b4p-155, 0.0,
     0x1.75a27ad3b7e2p-346, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee5a8c3c05466p-245, 0.0, 0.0,
     0x1.febfd889aee99p-688, 0x1.d599f3a03261fp-382, 0x1.7fb26c7d4ca29p-217, 0.0, 0.0,
     0x1.24d3ad187fd03p-830, 0x1.d35f85960cddap-783, 0.0, 0x1.5e0b6da646474p-603, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca14fafb7315ep-275, 0.0,
     0x1.0d9e96a2e41b4p-942, 0.0, 0.0, 0.0, 0x1.0c15e3232e2edp-469,
     0x1.cc833a10329c4p-112, 0.0, 0x1.fe479339dcb8cp-1010, 0x1.ab730fc293706p-451,
     0x1.689c4dda1530bp-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.780b82846589ep-820, 0.0,
     0x1.40b8a69ea8175p-50, 0.0, 0x1.efade804c5ae6p-403, 0.0, 0x1.9b050c4c81451p-708,
     0x1.8481a732c705dp-264, 0x1.0da2584ad3688p-473, 0.0, 0.0, 0x1.59050652c30edp-443,
     0.0, 0.0, 0x1.5e534748fe97fp-477, 0x1.aa664589f84e5p-625, 0x1.7c8a1d5d0a641p-228,
     0.0, 0x1.60124d09d7587p-762, 0x1.8710d9fae35f5p-646, 0.0, 0x1.d3a137b3dd797p-875,
     0.0, 0.0, 0.0, 0x1.56cca87477cf5p-730, 0x1.2579b68c59a17p-701,
     0x1.67e61e6858308p-200, 0.0, 0x1.92654edf8e88bp-777, 0.0, 0x1.39410a4a6cadep-821,
     0x1.e9831258e08abp-749, 0.0, 0.0, 0.0, 0.0, 0x1.e8512c9ce92e8p-387, 0.0,
     0x1.8fd9b4a6f96b7p-535, 0.0, 0x1.7816f81e41269p-613, 0.0, 0x1.b468af293781bp-580,
     0x1.44fac63fd8b45p-87, 0x1.7cd2b954b5404p-422, 0.0, 0x1.08347935a5941p-73, 0.0,
     0x1.179459dd25b83p-507, 0x1.283d6f3f332f9p-433, 0x1.e81d4adeff4bfp-94,
     0x1.89224fa8370bcp-269, 0.0, 0x1.5c4ce2cc5d42cp-370, 0x1.2c152605413d7p-680,
     0x1.32593545ad04cp-993, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5f4a2c9e05831p-444,
     0x1.b6edccc0cfb0ep-288, 0.0, 0x1.0f36b9d3fa474p-252, 0x1.11d6f29bad755p-785, 0.0,
     0.0, 0.0, 0x1.7df9ed31b8df7p-493, 0x1.e2b3c9af0c1ffp-46, 0x1.6ea165c999767p-62,
     0.0, 0x1.22bd7f57af21cp-125, 0.0, 0.0, 0.0, 0.0, 0x1.a2129206a52a6p-90, 0.0,
     0x1.d63a2e2c33c1ap-525, 0.0, 0x1.a39980709c9bcp-277, 0x1.98e3a82f0a9f2p-274,
     0x1.0bfc6d9e85b75p-36, 0.0, 0x1.732fa50145865p-803, 0x1.078ca0441e6c4p-542,
     0x1.91ca37958c85cp-807, 0x1.38f20597c05c8p-121, 0.0, 0.0, 0x1.cc00898cc1c2dp-599,
     0x1.98d52301f2f1fp-421, 0.0, 0x1.ed726d045ff21p-20, 0x1.d970f1463a244p-140,
     0x1.5f2465de1cb1cp-510, 0x1.0329b93401a4bp-810, 0.0, 0x1.fb8b0b5d63d05p-344,
     0x1.4467428dafefdp-197, 0.0, 0.0, 0.0, 0x1.e6a6a486dcd38p-457,
     0x1.53d794969a8f1p-147, 0.0, 0.0, 0.0, 0x1.716258d1e5ce1p-227, 0.0, 0.0,
     0x1.2170938ba408ep-1009, 0.0, 0.0, 0x1.e28cdba5a44fdp-1022,
     0x1.1857ff5cb838dp-831, 0.0, 0x1.3ab6302193489p-876, 0.0, 0x1.018778302efb8p-848,
     0.0, 0.0, 0x1.5fd170fb17d72p-169, 0.0, 0x1.1ff18173c2d4fp-967, 0.0, 0.0, 0.0,
     0x1.f9e88d20e5bcp-462, 0.0, 0x1.8168963d1c496p-888, 0.0, 0.0, 0.0,
     0x1.0d3d7e6985976p-594, 0.0, 0x1.144ac0bea7658p-131, 0x1.f3b12439d7a85p-116,
     0x1.e10f4c8e828ccp-584, 0.0, 0.0, 0.0, 0x1.6335edb02f17p-225, 0.0,
     0x1.58379feb10037p-938, 0.0, 0x1.0a7915e9dca85p-229, 0.0, 0.0, 0.0,
     0x1.b81c1686d9e6ap-388, 0x1.734e7a85b9338p-606, 0x1.ab2cf7f71ff27p-527,
     0x1.9f7df2d05adb4p-508, 0x1.cdeab475e581dp-380, 0x1.eeaa7cc278fefp-267, 0.0,
     0x1.d8269264ed7f8p-1007, 0x1.645f7d5bfaef9p-471, 0x1.26f00516cf5f5p-397,
     0x1.c17240d277fd7p-103, 0.0, 0x1.eba25a551cc7cp-987, 0.0, 0.0, 0.0,
     0x1.8e8e02e790434p-61, 0x1.17e32eb00b115p-521, 0x1.d17db8c840307p-835, 0.0, 0.0,
     0.0, 0x1.8db0214afd242p-503, 0.0, 0.0, 0x1.4a1155a9fb9f9p-380,
     0x1.3072e0f027d2bp-853, 0x1.702e47d1c68fap-38, 0x1.ed694d0cce194p-758,
     0x1.0caf5f6a85d8bp-811, 0.0, 0.0, 0.0, 0.0, 0x1.6c18053cbe12p-329, 0.0, 0.0, 0.0,
     0.0, 0x1.596dddcd02202p-301, 0.0, 0x1.276dc28aedba2p-134, 0.0, 0.0, 0.0,
     0x1.20f052750d164p-631, 0.0, 0x1.a1b370f469c0ep-634, 0x1.aaf82d4c193c3p-907,
     0x1.7115c2d87269cp-604, 0x1.423aaeb8788c8p-755, 0.0, 0x1.7e433c5fe9fdbp-884, 0.0,
     0.0, 0x1.c42fe2223558ap-166, 0x1.b0d4ede8b5d43p-740, 0.0, 0.0,
     0x1.67dd472380087p-714, 0.0, 0.0, 0.0, 0.0, 0x1.520ddbe596788p-651, 0.0,
     0x1.fed1c2d5d3cd9p-821, 0x1.1b8dbf25c3fb1p-521, 0x1.803d1abb93c45p-612,
     0x1.c72a7360def01p-610, 0.0, 0x1.8189f32a7bfd5p-218, 0x1.99b436652007ep-772,
     0x1.16501be8b8823p-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5895fdfb413dfp-997,
     0x1.2c9f1bcb20bb6p-268, 0x1.5d75c2d21b77fp-264, 0.0, 0x1.cb65ec77d17d5p-745,
     0x1.17112e32f769ep-670, 0.0, 0.0, 0.0, 0.0, 0x1.02e1d40c05636p-390,
     0x1.4fc2166e63aa2p-174, 0x1.54cc49979bc47p-80, 0.0, 0.0, 0x1.6800db000707p-656,
     0.0, 0x1.4795dfba782ffp-920, 0x1.34f489f6b40cdp-354, 0.0, 0.0,
     0x1.a0c01735b9adfp-400, 0x1.5193de57685f2p-403, 0x1.a35c05859b48p-103,
     0x1.4a4b3fb4eb549p-10, 0x1.445353ae42d3fp-410, 0x1.43744acf7b7c1p-173,
     0x1.2846edc9659acp-237, 0.0, 0.0, 0.0, 0x1.3cb9c54f1bf18p-572,
     0x1.0140b95c27e73p-265, 0.0, 0x1.670523ae44a16p-1000, 0.0, 0.0,
     0x1.79514380ca5afp-105, 0.0, 0x1.24addfe635ea2p-314, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c2a28eff96b4p-198, 0.0, 0x1.de1f46319d65ap-596, 0x1.7bcb65990196cp-747,
     0x1.8dbecdb932f1fp-584, 0x1.c52e8d5b22c6ap-933, 0x1.0faa484624c01p-899, 0.0, 0.0,
     0x1.81af03f683361p-713, 0x1.9adf7416a2683p-185, 0.0, 0x1.b451733d1c577p-75, 0.0,
     0.0, 0.0, 0x1.cda9584857e55p-904, 0.0, 0.0, 0.0, 0x1.f69e671cec9aap-610, 0.0,
     0.0, 0.0, 0.0, 0x1.ab6904f53449dp-486, 0.0, 0.0, 0x1.13cc0b4506c06p-589,
     0x1.1e393b7941b85p-839, 0x1.5f22caa7330e1p-403, 0x1.6448207e35b39p-323,
     0x1.0772f58e0b50ep-765, 0x1.cc4157e80096dp-68, 0.0, 0x1.57d668f74a35fp-21, 0.0,
     0.0, 0x1.4ea305d05a025p-726, 0x1.530e8926c19f9p-697, 0.0, 0.0, 0.0,
     0x1.ba5aca8f2d30ep-836, 0.0, 0x1.fa2c532abd63fp-489, 0x1.6e38ee13ecb8p-416, 0.0,
     0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_exp10d4_u35kvx(tmp0);
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
    printf("Sleef_finz_exp10d4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp10d4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
