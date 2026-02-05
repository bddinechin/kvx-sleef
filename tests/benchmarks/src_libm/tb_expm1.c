/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_expm1.c --function expm1 --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.5fe34f3735737p-806, 0.0, 0.0, 0.0, 0.0, 0x1.9c9355ede4b02p-206,
     0x1.0a1e4a93e12cbp-687, 0x1.73879272dd99fp-870, 0.0, 0.0, 0.0, 0.0,
     0x1.b09e095ad7accp-643, 0x1.290e9ab3ddfc5p-197, 0x1.9c69b36aa04eap-467, 0.0, 0.0,
     0x1.ac31eb6b3dacdp-328, 0x1.1a6807c54c2dp-929, 0x1.ad3131e7a0ad5p-713,
     0x1.7ecf2964d605ap-781, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85d536585ed3cp-715, 0.0,
     0.0, 0.0, 0x1.f2187605d6637p-809, 0.0, 0x1.b057264cd6aabp-994, 0.0,
     0x1.9e1b205a5bec8p-433, 0.0, 0x1.6b699e6967b98p-836, 0.0, 0x1.56901560ebdd4p-386,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c4d32c7684c15p-577, 0x1.eb9c2623aab53p-485,
     0x1.40708a589ba04p-995, 0.0, 0x1.757a2f960d403p-777, 0.0, 0x1.8020eb7414e67p-770,
     0.0, 0.0, 0x1.789a302b0bb93p-551, 0x1.d5f248f8e245bp-22, 0.0, 0.0,
     0x1.a1402cf3cf8b9p-939, 0.0, 0.0, 0x1.7ffb2da153cfap-42, 0x1.74fd297dab533p-265,
     0x1.a672b17fd4e98p-467, 0x1.49239ce9e2763p-365, 0x1.2af3bd90fc028p-518, 0.0,
     0x1.f90e957584befp-736, 0x1.fc245a688bc9p-606, 0x1.0be94a5f20a47p-536, 0.0,
     0x1.2b001f6f1935dp-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.32ba6d01a7338p-718, 0x1.67a2caebde9ebp-412, 0x1.bc1283acbfb8p-824, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3d219b6e0597bp-851, 0x1.0be9a63e30799p-505,
     0.0, 0x1.6ab94ecb65e07p-866, 0.0, 0x1.766b7d39ae64cp-86, 0x1.7625ce9f1b3a7p-880,
     0.0, 0.0, 0x1.e292c56b5809bp-741, 0x1.754234a6a5f37p-553, 0x1.3b26c11b61177p-771,
     0x1.31faafc18d774p-100, 0.0, 0x1.c657319c0a84dp-716, 0.0, 0x1.78e64c4cca147p-926,
     0.0, 0.0, 0x1.bd483248772b5p-63, 0.0, 0.0, 0.0, 0x1.665e6617aadc8p-586, 0.0,
     0x1.07fc4aac0519ep-395, 0.0, 0.0, 0x1.08b0001ab8cc4p-783, 0x1.cc16b9396ffa8p-791,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1651a4de6dbd1p-123, 0.0, 0x1.099327507ac0cp-808,
     0x1.3da011ce36cb4p-520, 0x1.8ac91024a5f4ep-948, 0x1.b1dc87ddd3a72p-314, 0.0, 0.0,
     0.0, 0x1.2f5ef11ab6176p-727, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.88b19b0282603p-801,
     0.0, 0x1.29939afce5518p-857, 0.0, 0.0, 0.0, 0x1.f88605a68f28ap-636,
     0x1.e95afd22c9bb7p-449, 0.0, 0.0, 0.0, 0x1.44c5c4efec82dp-134, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.efac032858569p-415, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39d8ba1340446p-55,
     0x1.eb3046e0d19dep-476, 0x1.505b74c44add6p-838, 0.0, 0.0, 0.0,
     0x1.2f276f90a07a9p-776, 0.0, 0.0, 0x1.4995436f46e64p-774, 0.0,
     0x1.2d886867055f5p-403, 0.0, 0.0, 0x1.0cf8a13711678p-699, 0x1.a6079d833a6b5p-224,
     0.0, 0x1.8e2be382607a2p-852, 0x1.68653f6c9683fp-250, 0x1.66f0a5958be32p-1020,
     0x1.fbdcb3da0fd28p-526, 0.0, 0.0, 0x1.1770dcfef4974p-1008, 0x1.3f4bfdeab622p-432,
     0x1.708deb057b3c6p-846, 0.0, 0.0, 0x1.651e7b2382eccp-986, 0x1.e7452ee48a457p-760,
     0.0, 0x1.dffcb50412545p-452, 0x1.e00c9de2300e7p-308, 0x1.2cfc746a10073p-300, 0.0,
     0.0, 0.0, 0.0, 0x1.5031643a94a1p-641, 0.0, 0x1.e02d127e2af2dp-742, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ea609d687bcf9p-745, 0.0, 0x1.03731bd035fecp-26,
     0x1.494bfee404369p-32, 0x1.829ad93eb8007p-907, 0.0, 0x1.c5e8115e0f55dp-127, 0.0,
     0.0, 0.0, 0x1.156b89a27183ap-738, 0x1.9578249a5a5bfp-55, 0.0,
     0x1.3305c51d2a9a5p-160, 0.0, 0.0, 0.0, 0x1.2a62cc2eb57efp-664,
     0x1.711d464cafd39p-128, 0x1.6e4198d210f67p-760, 0.0, 0x1.311b5d9eeae5cp-212, 0.0,
     0.0, 0x1.70893aa5a7bfap-73, 0.0, 0.0, 0.0, 0.0, 0x1.c644401a17b18p-73,
     0x1.fd4c6b35a0ef1p-236, 0.0, 0x1.9f017860c99edp-725, 0x1.6ef7ee91c3ab1p-509,
     0x1.102e565f9f653p-49, 0x1.656089be4b5fbp-286, 0x1.2704b1442ed7ep-335,
     0x1.88c5c8ad2fcd4p-946, 0.0, 0x1.edfc968d2e6cbp-666, 0x1.501f1827f4192p-911,
     0x1.04f0c628ad73ap-14, 0.0, 0x1.857ae3af9b7bfp-753, 0x1.8df6216003425p-211, 0.0,
     0.0, 0x1.1f2367437dcefp-280, 0.0, 0.0, 0x1.bca35f4fe92c1p-704, 0.0,
     0x1.96fc2d5e055e9p-795, 0.0, 0.0, 0x1.f21367747be3ap-173, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d6c17eb943a9p-490, 0.0, 0.0, 0.0, 0.0, 0x1.252edfe2e9ba8p-84,
     0x1.75342e4c42953p-53, 0x1.21473bbe8d72dp-560, 0.0, 0x1.c8dd12bc57c9cp-1007, 0.0,
     0.0, 0.0, 0x1.812ecfdbaee5fp-414, 0x1.6ae393b04861bp-444, 0.0,
     0x1.f0c9a5b2053e2p-216, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.445b4f3d2d311p-1001,
     0x1.c754782f0291bp-412, 0.0, 0.0, 0.0, 0x1.5e21d6aa1d361p-938,
     0x1.09b2f8622669dp-721, 0x1.14f11a3ce77a1p-452, 0.0, 0.0, 0x1.24e0dc9d5b06fp-900,
     0.0, 0x1.f23fc346619bdp-806, 0x1.0d1b50ac31a52p-758, 0.0, 0.0, 0.0,
     0x1.9247f0e60b4c7p-7, 0x1.9a927d94bc965p-116, 0x1.ae02f8265bc1ap-189,
     0x1.9fc7890156b25p-785, 0.0, 0.0, 0x1.fa45c2976a252p-35, 0.0, 0.0, 0.0,
     0x1.c0ce9ded30e78p-265, 0.0, 0.0, 0.0, 0x1.ac1d0f30c066bp-291, 0.0,
     0x1.6cff765969b0cp-962, 0x1.57825d6bbde9ap-807, 0.0, 0x1.18faaa9116142p-521,
     0x1.770fac6f96c8fp-423, 0.0, 0x1.68adc4bad1a8cp-109, 0.0, 0.0, 0.0,
     0x1.e190403c5606ep-817, 0x1.66ecfa939cdd2p-76, 0.0, 0x1.690ae84603a2p-40,
     0x1.921c3ea3e3e8bp-379, 0.0, 0x1.24e7a305ad034p-735, 0x1.fcf8c4d194dc1p-689,
     0x1.8ae0198bf49e9p-441, 0.0, 0.0, 0x1.f4a7ad2564d73p-157, 0x1.985af828a8896p-28,
     0x1.070ddb3ab5194p-835, 0x1.263bda4393644p-289, 0x1.c2658e27c6521p-166,
     0x1.8b83a3fb1790dp-752, 0.0, 0x1.fa39693c16dc2p-317, 0x1.ee6362b06fb35p-308, 0.0,
     0x1.ae5087e216866p-922, 0x1.edce911e647dp-971, 0x1.15268f1758d9cp-60, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2a589e774561dp-227, 0.0, 0.0, 0x1.2ecf294d2cae5p-529,
     0x1.514bfc6c76b17p-316, 0x1.3a78974878c0ep-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a712a9f0bfd68p-346, 0x1.8e35967c600d3p-67, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e9fb0b1c0365p-838, 0.0, 0x1.8fdd9ca6f9badp-982, 0.0, 0x1.e3ea50086412ep-597,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1d2a354560f3p-726, 0.0, 0.0, 0.0, 0.0,
     0x1.b241937408e8fp-65, 0x1.e69fc4af908ecp-421, 0.0, 0.0, 0.0,
     0x1.56aa0f46cbd0ap-660, 0x1.1ce763c90259ep-600, 0.0, 0x1.f53ae98ee1f4dp-317, 0.0,
     0.0, 0x1.f6deee4cafb98p-347, 0.0, 0x1.ff43454bc427bp-42, 0.0, 0.0,
     0x1.9f83506820477p-193, 0.0, 0.0, 0x1.10d60e9ed50a4p-599, 0.0,
     0x1.6009e794a33d9p-655, 0.0, 0x1.b5bfa3e5f4a53p-173, 0x1.8b702d645b0bdp-807,
     0x1.89068c440b89p-42, 0x1.fe3e87b45c2f3p-284, 0.0, 0x1.57708827e6a0fp-575,
     0x1.35e2370a4322p-538, 0x1.bdf336f4a4922p-8, 0x1.302f5720f0c8bp-648, 0.0,
     0x1.a248705f9c5c7p-187, 0x1.edc47b68f7624p-499, 0.0, 0.0, 0.0,
     0x1.27ddca7197cf9p-908, 0x1.067c6ef231621p-141, 0x1.0aa3e90d43702p-735,
     0x1.fd736af6cde4cp-337, 0x1.ec9b64c60d435p-203, 0x1.f139fb81dfc83p-611, 0.0,
     0x1.c4b96ce62d041p-455, 0x1.31bdf469b7287p-437, 0.0, 0.0, 0.0,
     0x1.e69a44f41b2d6p-806, 0x1.25010ca8a8e58p-181, 0x1.320625ff77c8ep-510,
     0x1.1b5bb25886ba5p-476, 0x1.761e097971803p-869, 0x1.7f383124e361p-175,
     0x1.0b566520e562dp-393, 0x1.ed642c12b5b51p-237, 0.0, 0x1.bdf947da05039p-624, 0.0,
     0x1.f793ba97ab565p-35, 0x1.eb8dee3223a58p-434, 0x1.0bcd2a08836bap-982, 0.0, 0.0,
     0.0, 0x1.dfd1f73f7c83dp-645, 0x1.2a7c238e0fd07p-862, 0.0, 0.0,
     0x1.7dbcd96eaa8d3p-737, 0x1.994da960fa208p-674, 0.0, 0x1.449ad5ae5ab51p-680,
     0x1.4d0c8b8a08087p-189, 0.0, 0.0, 0x1.0858e7ff42ac3p-962, 0.0, 0.0,
     0x1.bde93fcbd1ed9p-500, 0x1.30b7cc1336b81p-649, 0x1.33f41a5bfcc19p-979,
     0x1.935f06ffb50ccp-1008, 0.0, 0.0, 0.0, 0x1.4b0b372250cadp-566,
     0x1.695f66914c294p-476, 0x1.5a2b7962b40f6p-244, 0.0, 0.0, 0x1.31ab10abbed74p-285,
     0.0, 0.0, 0x1.38eebb7d93a52p-41, 0.0, 0x1.f49e7665e42d7p-457,
     0x1.dabdcfa59a043p-49, 0.0, 0.0, 0.0, 0x1.445c9f0884f1bp-37, 0.0,
     0x1.6ca7f8e7cb2f3p-191, 0x1.e6ddc5a44ac3fp-687, 0.0, 0.0, 0x1.f6cf91e687bbfp-452,
     0x1.0ba4a0ef587a2p-57, 0.0, 0.0, 0x1.a37a36f8364dep-326, 0.0,
     0x1.a32127d845ce9p-793, 0.0, 0x1.c7f8444102ed1p-714, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.80c8ecbcb9c64p-575, 0.0, 0x1.c45d395f19748p-366, 0x1.7726b1a26bd2dp-507,
     0x1.d56f10b59ea32p-836, 0x1.963c00563a201p-303, 0x1.40ab445ddcc1ap-595,
     0x1.ac9257f2b83e9p-222, 0x1.a2e6a6382f4ep-70, 0x1.7d4adf1ed307cp-771,
     0x1.1d9ce85a1bde6p-492, 0.0, 0.0, 0.0, 0.0, 0x1.39d6c61b22a52p-673,
     0x1.2da45163288f6p-231, 0x1.69b2fce0a3921p-634, 0x1.5127ddcfbc25dp-116,
     0x1.8c801f4360219p-501, 0.0, 0.0, 0x1.460bc92e6edb8p-257, 0.0, 0.0, 0.0,
     0x1.0927a3858f22p-1014, 0.0, 0x1.d7c4921346556p-903, 0.0, 0.0, 0.0,
     0x1.e337b20a07537p-77, 0.0, 0.0, 0.0, 0x1.aa3c3866f60e8p-109, 0.0, 0.0, 0.0,
     0x1.9f6e58904b7a6p-308, 0.0, 0.0, 0x1.315dc0f23e7d2p-486, 0x1.4212c01b78d18p-772,
     0.0, 0x1.7032a11a78045p-542, 0.0, 0.0, 0.0, 0.0, 0x1.50a90fa7242eap-103,
     0x1.540d934f6949dp-839, 0x1.4cd2728c99927p-190, 0x1.2c1c264f084cep-280,
     0x1.8fd3a2cb31426p-514, 0.0, 0x1.a4351fd555d67p-201, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.16836c0759b56p-92, 0x1.265449a89adap-358, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f482ac9e30ffdp-922, 0x1.0ce09d829bf49p-617, 0x1.b9eb43c34b408p-139,
     0x1.5e31afaa91378p-767, 0.0, 0.0, 0.0, 0x1.361f85f1d68a5p-58,
     0x1.44cd623eecbfep-333, 0x1.05a8e5a0f2d1fp-430, 0x1.1a6d4a4217bf3p-564, 0.0, 0.0,
     0x1.9dd16d7dc9ef2p-963, 0x1.0b0d08bdebad5p-803, 0x1.fbef50d65af4ap-915, 0.0,
     0x1.c9b90ac1042b9p-380, 0x1.78eca5c0e425dp-865, 0x1.56d7f0ac1247ap-96,
     0x1.c5cd9665757bap-583, 0x1.fb0f997ee7da2p-196, 0x1.ef0697f9d62fbp-329, 0.0,
     0x1.102cdfb6db357p-631, 0.0, 0x1.823bb1239390ap-123, 0x1.d8d89b98ba292p-882, 0.0,
     0x1.eeacd9e2289dcp-848, 0.0, 0.0, 0x1.071088273fe8p-175, 0x1.270886f34ebc6p-674,
     0x1.56ed8c2395931p-150, 0x1.0fbf837e060ecp-268, 0.0, 0x1.79cbb273719b6p-87, 0.0,
     0.0, 0.0, 0x1.a1cfe921d02acp-618, 0x1.1b36f06f1f558p-410, 0x1.61bc4cce2155ap-982,
     0x1.888b024b4cc03p-939, 0x1.f917d16421c94p-939, 0x1.1a088247a1017p-458,
     0x1.fd0465c62ae6cp-358, 0.0, 0x1.9ba32a939f51dp-593, 0x1.081178f273b44p-68,
     0x1.cb2036f026461p-730, 0x1.c2e6562e54ff3p-375, 0x1.4c10b1026b011p-108, 0.0,
     0x1.ca3293d48194cp-185, 0x1.e4156e8ca4f5p-17, 0x1.4c86b7c7f40fep-782,
     0x1.2eddf5e38702ap-603, 0.0, 0.0, 0x1.ebc96dfae2193p-497, 0x1.90e25a2522dd7p-548,
     0x1.e54d139c15ea1p-446, 0.0, 0.0, 0x1.9787f5219bdd8p-60, 0.0, 0.0,
     0x1.8d95586b6987ap-596, 0x1.4b2a1cf8ca1ep-8, 0.0, 0.0, 0.0,
     0x1.3a6d654a90fe9p-616, 0.0, 0x1.7e36289b72533p-934, 0.0, 0.0,
     0x1.ea03cf4f6ad35p-875, 0x1.698632fa0da51p-619, 0.0, 0x1.ad00289682a44p-199, 0.0,
     0x1.497a9cc7dd622p-876, 0x1.3e80f4f0c0a87p-306, 0x1.be686a3a63996p-431, 0.0,
     0x1.041160ed53f12p-774, 0.0, 0.0, 0.0, 0x1.31268f5b7fb2dp-65,
     0x1.a40066af6e9dcp-850, 0.0, 0x1.a95cd8c61390cp-702, 0x1.124faf65e79abp-980, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9bec8d4f43a3dp-820, 0.0,
     0.0, 0x1.a6d60f14c0903p-895, 0x1.1bccccbfc0dafp-549, 0.0, 0.0, 0.0,
     0x1.965c511459231p-316, 0.0, 0x1.a808eaaa6aeacp-681, 0.0, 0.0,
     0x1.e78153ed113dbp-164, 0.0, 0x1.b4cdc78a4778fp-223, 0x1.994db34d1d844p-494, 0.0,
     0x1.22baa5d550ed3p-698, 0.0, 0x1.ef3c0aca6e358p-791, 0.0, 0x1.e2029a66c01ccp-982,
     0x1.b5e415e8412bbp-948, 0.0, 0.0, 0x1.050c0c09b04edp-626, 0x1.e5c7a0721e49cp-68,
     0x1.ba434e0768d9ep-237, 0x1.799d6ecf91ecdp-559, 0x1.f48ce673810d5p-316, 0.0,
     0x1.a4948c7bf5b9ap-250, 0x1.81155e820f524p-206, 0x1.ea6eefb63da4ep-1000, 0.0,
     0.0, 0x1.ded8e3393bcbep-890, 0.0, 0x1.8368518419201p-854, 0x1.e390e608986b5p-272,
     0x1.900504a0ffb8p-542, 0x1.f239291cd21f1p-141, 0.0, 0x1.f4e48f23d5dabp-168,
     0x1.e672fba336f5ep-160, 0x1.bfd6163eb8f46p-295, 0.0, 0x1.bf31e74d99528p-968,
     0x1.182cdc80e396ep-369, 0x1.8736028ed066ap-546, 0x1.b010f32887e93p-69,
     0x1.94d2a1023829cp-631, 0.0, 0.0, 0.0, 0.0, 0x1.77d25ee5c8718p-866, 0.0,
     0x1.6bf22f19a1d2dp-148, 0.0, 0x1.ca9edf556c30cp-863, 0.0, 0x1.494055e484e1ap-583,
     0.0, 0x1.0fc767829bc22p-586, 0x1.e5b9ec29fa7d4p-705, 0.0, 0.0, 0.0,
     0x1.279752ee3483ap-457, 0x1.54c0b957251e2p-91, 0x1.6aff23ce51ebbp-123,
     0x1.cffb2621a37f6p-776, 0x1.15524aca8f307p-214, 0.0, 0.0, 0.0, 0.0,
     0x1.9823eb67118e3p-766, 0x1.67c25c841fe1bp-541, 0x1.a42ffd33b0613p-653,
     0x1.8158813e1267p-393, 0x1.8ef5037f1e92p-874, 0.0, 0.0, 0x1.e1d63087132d9p-660,
     0x1.6354432f1deeep-626, 0.0, 0.0, 0.0, 0.0, 0x1.9b70a98e4769p-227,
     0x1.76f89bc184139p-257, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.024773f0af336p-865, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed10d780989bfp-297, 0x1.207afdd16ecfep-334, 0.0,
     0x1.3d744fb43c021p-490, 0x1.4f7a0c7f61fep-351, 0.0, 0x1.ffe5e10291afcp-904, 0.0,
     0.0, 0x1.4b88c1d4e4382p-95, 0x1.de4f89befba53p-223, 0x1.3edee816ce48p-104,
     0x1.28803030bd26ap-952, 0x1.3cf76f187608ep-310, 0x1.0df60c85f9648p-853, 0.0, 0.0,
     0.0, 0.0, 0x1.3c74a90d5ed6dp-758, 0.0, 0.0, 0.0, 0x1.e21397e23a7ep-268, 0.0, 0.0,
     0x1.ca74c24857d7fp-379, 0x1.9b639a706d0cap-814, 0x1.f1fdb6b3bbebp-742,
     0x1.0f2c013df164bp-310, 0x1.5229680fb5d3ep-847, 0x1.c8ca7e55c8c07p-50,
     0x1.0280b5ef47766p-802, 0x1.8a004acec4b2dp-748, 0.0, 0x1.833e8a80c47f7p-583,
     0x1.3d476dd01f537p-396, 0x1.ac3197c14c14dp-80, 0.0, 0.0, 0x1.fcda42fc486d8p-287,
     0x1.f4aad130689d2p-452, 0.0, 0x1.ddaeb17546b25p-260, 0.0, 0x1.6ce3f31286ad9p-501,
     0x1.3652e9e1a12cfp-711, 0.0, 0x1.1e48857217bbfp-996, 0.0, 0x1.b4947bf2829a8p-237,
     0.0, 0x1.b9a74fecde559p-382, 0x1.6c87187ae9151p-15, 0.0, 0x1.bab8637d46233p-821,
     0.0, 0x1.7241169fc906bp-170, 0x1.00e8de4506cb2p-517, 0x1.19c702e076429p-827, 0.0,
     0.0, 0.0, 0x1.231cedadd8321p-806, 0.0, 0.0, 0.0, 0.0, 0x1.e77eb43b0a358p-357,
     0x1.96b8ad86f3cbp-792, 0x1.29ca6e29c8b95p-428, 0.0, 0.0, 0x1.3327485398576p-987,
     0x1.b64117b5b49a2p-353, 0x1.ecd48092b1f52p-303, 0.0, 0.0, 0x1.72d04bd388838p-784,
     0.0, 0x1.45ada7ddddcdbp-968, 0.0, 0x1.c371c401bc5f1p-455, 0x1.de74bf451ccc7p-16,
     0.0, 0x1.260a4e09dd504p-238, 0.0, 0.0, 0x1.d361b629b9b74p-19, 0.0, 0.0, 0.0,
     0x1.bd0d01e442fcfp-920, 0.0, 0x1.8205ce96b3bf8p-968, 0.0, 0x1.e1d7ab32a7741p-554,
     0.0, 0x1.fc96d9ef18342p-618, 0x1.23a2caaef704cp-813, 0x1.fd4aa80c4bc7bp-601, 0.0,
     0.0, 0.0, 0x1.d2bb864972588p-166, 0x1.5cb13952565bcp-9, 0.0,
     0x1.4e176afdd2ad5p-941, 0.0, 0.0, 0.0, 0x1.ccf969b6c6a5fp-242,
     0x1.78d38fe56294bp-845, 0x1.6c0865077251ep-286, 0x1.fe7bee3644d1ap-432, 0.0, 0.0,
     0.0, 0x1.e1d76965150eap-336, 0x1.856a0ce2d0f2dp-994, 0x1.e96bce3263bb9p-364,
     0x1.321cc7a57dd16p-283, 0x1.7f91a15e69446p-478, 0.0, 0x1.a25e9016fcc0fp-456, 0.0,
     0x1.3d67fcfa0d1c7p-549, 0.0, 0x1.7feb8fcc9d4e6p-376, 0.0, 0.0,
     0x1.952ad157a3facp-92, 0.0, 0x1.72d1d170a3d3bp-150, 0x1.2d1fe2967c21dp-651, 0.0,
     0.0, 0.0, 0.0, 0x1.044657aa72238p-921, 0.0, 0.0, 0x1.274c72dfa1c84p-647,
     0x1.9da82f987869p-902, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56fb69faedeacp-403, 0.0, 0.0,
     0x1.f2863d8c2f1fbp-724, 0x1.ff29d2c69f49fp-394, 0.0, 0.0, 0.0,
     0x1.0862cc695a90dp-948, 0.0, 0x1.c4f56c4552535p-961, 0x1.a9b1f086cab7ep-261, 0.0,
     0.0, 0x1.81206b53b5e24p-110, 0.0, 0.0, 0x1.abc8012f8600dp-537, 0.0,
     0x1.d7f616ca64558p-647, 0.0, 0.0, 0x1.bcdc76872f569p-816, 0x1.34267479f4515p-225,
     0.0, 0x1.feb0d8f92ce44p-676, 0x1.60cf8da480ebcp-812, 0.0, 0x1.cf4c17bbd5129p-955,
     0x1.881b60be6cf4ap-926, 0.0, 0.0, 0.0, 0.0, 0x1.8fce1776dfcbbp-310,
     0x1.0dca685d4f534p-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5035d95081b52p-920, 0.0
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
            tmp1 = expm1(tmp0);
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
    printf("expm1 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("expm1 bench acc %la\n", global_bench_acc);
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
