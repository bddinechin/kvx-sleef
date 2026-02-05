/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd2_u10kvx.c --function Sleef_logd2_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.eb70d4db0c9d1p-742, 0x1.d5dbfbc2f811fp-855, 0.0, 0.0,
     0x1.ee966c81d7f44p-632, 0.0, 0.0, 0.0, 0.0, 0x1.f3f3520d2570fp-842, 0.0, 0.0,
     0x1.436b19c9bb34fp-385, 0.0, 0x1.89c7520d350fep-309, 0.0, 0x1.d683b259e4574p-320,
     0.0, 0x1.c6983e04b6e1dp-95, 0.0, 0.0, 0x1.04a5a0f93156ap-686, 0.0, 0.0,
     0x1.6dbcc17725d6bp-168, 0x1.3febc336de13bp-846, 0x1.7079c5dbff68ep-524,
     0x1.dfa26102dd77ap-327, 0.0, 0.0, 0x1.7d7f57206749cp-954, 0.0,
     0x1.0d3d73c483062p-245, 0.0, 0.0, 0.0, 0x1.ada2e149ed847p-214,
     0x1.670d0a551c9f9p-106, 0x1.5f772ffb7f541p-754, 0.0, 0.0, 0.0,
     0x1.f5f01a815e5efp-468, 0x1.e797a578007c8p-1003, 0x1.629ea3f78cf35p-38,
     0x1.6dfe77de5181cp-73, 0x1.9559202612ee1p-154, 0x1.5c1c179f75702p-515, 0.0,
     0x1.7a121c6a466bp-397, 0x1.ba9fa7c1412afp-238, 0x1.bd481abfe9e1bp-971, 0.0, 0.0,
     0.0, 0.0, 0x1.bce8f6a691637p-109, 0.0, 0x1.dcd37d30ead56p-854,
     0x1.6db9dfef954d9p-891, 0x1.8232d8ac8de8ep-258, 0.0, 0x1.c4ea3bf0bf247p-668, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9483d76938f47p-618, 0.0, 0.0,
     0x1.17d35768b79f8p-306, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5ac1d5ea9f566p-397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7bd350304b38cp-259,
     0.0, 0.0, 0.0, 0x1.4ad552583dffbp-688, 0.0, 0.0, 0.0, 0x1.9b2dd565f71ap-366,
     0x1.5e3fc8b8e5654p-821, 0.0, 0.0, 0.0, 0x1.0151d1cdcf88ap-464, 0.0, 0.0,
     0x1.9649d03d0fd55p-956, 0x1.d9ec9c5fcaddfp-622, 0.0, 0x1.ac207ee51733p-309,
     0x1.bbcf96df07313p-522, 0.0, 0.0, 0.0, 0.0, 0x1.0008809938c7dp-956, 0.0,
     0x1.caba09d725262p-703, 0.0, 0.0, 0x1.54d3a38215b7ap-15, 0x1.ca985a93e888ep-8,
     0x1.d3f1b8cfdb925p-515, 0.0, 0.0, 0x1.69d0a1b9b6984p-318, 0x1.dd4c4cb94bd53p-525,
     0.0, 0.0, 0x1.9826339bfed0cp-473, 0x1.a6cda92ca95fbp-126, 0x1.b194192e7930dp-764,
     0x1.a328476688cedp-710, 0.0, 0x1.1497a6abcabbep-243, 0.0, 0x1.9e835d3d28cf7p-72,
     0.0, 0.0, 0x1.13c9cc5d63809p-841, 0x1.09884ea88003dp-311, 0x1.3df6783eaa2fbp-458,
     0.0, 0x1.218370f2fbdfbp-182, 0.0, 0x1.fa97797805543p-149, 0x1.c2f7e48768262p-954,
     0x1.3f1a30d19533ap-469, 0x1.f22d5257d961ap-305, 0x1.45b956384a106p-246,
     0x1.bb554078d99c7p-551, 0.0, 0.0, 0x1.a7b740485eb67p-312, 0x1.f4b438c93cba3p-605,
     0.0, 0x1.e1fcdcb926aadp-229, 0.0, 0.0, 0.0, 0.0, 0x1.6576c8a7dda22p-847,
     0x1.836e9e85c3a92p-51, 0x1.a90d8cd59c038p-143, 0.0, 0.0, 0x1.acc8bb8698a25p-174,
     0x1.d1d3ef02a1b2cp-707, 0x1.1bbccfe151125p-142, 0x1.0c0f68d4b6acbp-772, 0.0, 0.0,
     0x1.b072fa0acd7ddp-898, 0x1.10c04830f6274p-871, 0x1.5b1a66c650e33p-784,
     0x1.35eb6580c7237p-909, 0.0, 0x1.4d606d9116eeep-62, 0x1.83359b0c2e6f2p-1016, 0.0,
     0x1.bedf806e583fdp-4, 0x1.895e45e88afd5p-322, 0x1.e4b4095c7a47ap-478,
     0x1.2f1c49b1d103bp-432, 0x1.e0d8fc7984019p-610, 0x1.1b3cc4892ea71p-497,
     0x1.cf7a456fdaecdp-787, 0.0, 0.0, 0.0, 0x1.56291d6b2c4d9p-818, 0.0, 0.0, 0.0,
     0x1.1f773737ecaafp-681, 0x1.8f7f57b437eep-662, 0x1.b4029a33545ep-624,
     0x1.0eba12ab15616p-31, 0.0, 0x1.70a8b6f1a537dp-204, 0.0, 0.0, 0.0, 0.0,
     0x1.5ef5a8758a2b8p-682, 0.0, 0x1.e2f0e0a194e7fp-549, 0.0, 0.0,
     0x1.d02f54cea6af2p-739, 0x1.c6c5e5f77e1e1p-435, 0.0, 0x1.1078114f113cep-234, 0.0,
     0x1.78214ad45c3bbp-459, 0.0, 0x1.984ddc0f5d69ap-690, 0.0, 0x1.acd3fdfcaffadp-253,
     0x1.51dc29f88d706p-938, 0x1.64c8cf83e2eb5p-348, 0.0, 0.0, 0x1.302ae08178274p-350,
     0.0, 0x1.8aa8012b1be8p-329, 0x1.dc584fbdce75ep-918, 0x1.cae8eb0fcd0a4p-330, 0.0,
     0.0, 0.0, 0x1.c7e18f93db1bdp-793, 0.0, 0.0, 0.0, 0.0, 0x1.64f01fc9d25dcp-287,
     0x1.d73b1c423e569p-638, 0.0, 0x1.3ebc1e755d735p-513, 0.0, 0.0,
     0x1.3b5f5d6df663bp-381, 0.0, 0x1.ae50eb7ae9d48p-608, 0.0, 0x1.f61a559525cf3p-128,
     0.0, 0.0, 0.0, 0x1.ef2aeeaff26d6p-522, 0x1.73fceaefe69d1p-520, 0.0, 0.0,
     0x1.ddb3332de62bdp-683, 0x1.7eddfc4f318f8p-1006, 0x1.d2c7e4f122665p-753,
     0x1.6fad7b88c032ap-563, 0x1.6a6ea2af409d2p-501, 0x1.9a1d10466017cp-635, 0.0, 0.0,
     0x1.5d9689578b254p-489, 0.0, 0x1.f6bcb4c264f7dp-11, 0.0, 0.0,
     0x1.4547dcac9272bp-850, 0.0, 0.0, 0.0, 0x1.db0eb55a7a101p-961, 0.0,
     0x1.bbbd8adfa6dd1p-709, 0.0, 0x1.cc4ea02ea3a78p-351, 0x1.895ba6a1bb0c6p-536,
     0x1.deb968f9d1273p-957, 0x1.82f36b1068813p-255, 0.0, 0.0, 0x1.4bc96245d3ca2p-490,
     0x1.1c82c508cc9cap-460, 0x1.78ac94049b579p-486, 0x1.0bf252701448ap-284,
     0x1.47b0be157a0e1p-853, 0x1.2048033190252p-64, 0.0, 0.0, 0.0,
     0x1.9b3d4e3588824p-449, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.543fbb5abe8cdp-841, 0.0, 0x1.ecf8c18aa7e22p-53, 0.0, 0.0,
     0x1.d6d04d9095ec1p-854, 0x1.03dee40a4c15bp-495, 0x1.d30f7bcdd86ccp-235,
     0x1.e5e0d714202bcp-771, 0x1.d39d063adf427p-862, 0x1.bac38ccd344b3p-602, 0.0, 0.0,
     0x1.5dece69538dbap-341, 0x1.b5613a79e3caap-264, 0.0, 0x1.604994ed6640ap-405, 0.0,
     0.0, 0.0, 0x1.425fbba58d5a3p-592, 0.0, 0.0, 0.0, 0x1.1a460ca3c26a5p-942, 0.0,
     0x1.6935d8ccf0919p-63, 0x1.3daf09282d16bp-224, 0x1.6f19be38e36f7p-544,
     0x1.09f29ea928caep-404, 0x1.d3218dd68bcaep-988, 0.0, 0x1.40664122deae7p-820,
     0x1.b8b549fba96e8p-728, 0.0, 0.0, 0x1.ec5ae39bbf1ddp-344, 0x1.3ad022b669442p-11,
     0x1.42e87b34d303cp-829, 0.0, 0.0, 0.0, 0x1.b2360375fe914p-488, 0.0,
     0x1.ae2ea50eaea24p-514, 0.0, 0.0, 0x1.e5857c5837ce7p-23, 0x1.86845f71f90fdp-436,
     0x1.8d0929b83730fp-560, 0x1.be57834637eafp-869, 0.0, 0x1.8d171c1f6b42bp-890, 0.0,
     0.0, 0.0, 0.0, 0x1.b65987a05c8edp-982, 0x1.dfb877ee05fdcp-707, 0.0, 0.0,
     0x1.6c3dd9fc59491p-23, 0.0, 0x1.e4aa250b64037p-670, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2ca4ff640cf73p-749, 0.0, 0.0, 0x1.ea057643ed036p-784, 0x1.9ff881042548bp-648,
     0x1.b0ba444e797d9p-293, 0x1.427d29849c505p-246, 0x1.c3dd1a3e07ecbp-521, 0.0, 0.0,
     0.0, 0.0, 0x1.91200c5b4e9f2p-202, 0x1.0c12258f1faaep-987, 0.0,
     0x1.8eabb8a148799p-392, 0x1.fcda8432a8c2bp-47, 0x1.7f8a7766bb61p-693, 0.0,
     0x1.b1b0b7b828988p-130, 0x1.035f46e63be4ap-362, 0x1.4ee31e5fa0be6p-168, 0.0,
     0x1.7935a7bf01d2cp-245, 0.0, 0x1.59c1c3f61482dp-380, 0x1.6a503ef28d458p-238,
     0x1.df1353f98bc1cp-316, 0.0, 0.0, 0x1.7ec87bae352e1p-954, 0x1.3ffcf8e38ab3ep-836,
     0x1.9ae64a0dd530dp-172, 0x1.0ad7755bbbe1ap-231, 0.0, 0x1.7d8c7a186fcffp-897, 0.0,
     0x1.b686e0e28bd45p-512, 0x1.7186613933e4ap-253, 0x1.7fc88c1c0fe15p-351, 0.0,
     0x1.11baedc260484p-317, 0x1.0117311a22cd3p-320, 0.0, 0.0, 0x1.ad09375d8c8c1p-62,
     0.0, 0.0, 0x1.12b8011ed08adp-940, 0x1.c0b094e1c4fc9p-495, 0x1.f6e282da4d4cbp-664,
     0x1.12b1934d8886p-69, 0x1.4da20eca6a144p-610, 0.0, 0.0, 0.0,
     0x1.9d9769a24e9a6p-223, 0x1.5a59adb33e2bap-809, 0x1.022788d7ddd4cp-595, 0.0, 0.0,
     0x1.db850c2f63bbp-698, 0x1.142ffd5dfca28p-685, 0x1.60839399b88fp-201, 0.0,
     0x1.2557cb8007afp-777, 0.0, 0x1.11a821961a6bdp-384, 0x1.0d9d9320e3293p-293,
     0x1.2105ed3a2f4cep-89, 0x1.d57cc8cf40f78p-356, 0.0, 0x1.718bd3eef6c1ep-766, 0.0,
     0.0, 0x1.913c25ca381b9p-721, 0x1.331cf9291ba5p-268, 0.0, 0.0,
     0x1.2a9d08bc1145bp-686, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9bd3128d39983p-666,
     0x1.197c3fa99ad53p-268, 0x1.24a62af701628p-82, 0.0, 0x1.786a2b1ba0154p-779,
     0x1.5d6a3d614f60cp-489, 0x1.c36777f5ddcc2p-808, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8a9d6d075e3ap-170, 0.0, 0x1.969dda3b8978cp-535, 0.0, 0.0, 0.0, 0.0,
     0x1.6540cddb696e2p-183, 0x1.7c8247e9927eap-533, 0.0, 0.0, 0.0,
     0x1.27dfa4f8fbc22p-505, 0x1.c1fdeadf1f60bp-405, 0.0, 0x1.c358acbd259fcp-354, 0.0,
     0x1.98fe467c6a821p-371, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f0ef6d76b1b16p-221, 0.0, 0.0, 0x1.b10888b927e67p-722, 0x1.6d311e16f9aa6p-598,
     0.0, 0x1.15666f17bbe5dp-130, 0x1.499519bb22a3fp-52, 0.0, 0x1.f39fbfdb1db09p-70,
     0.0, 0.0, 0x1.3fa66518f2a55p-74, 0.0, 0.0, 0x1.53d7d6b4975a4p-616,
     0x1.90a743f991798p-282, 0.0, 0.0, 0x1.a716343481db7p-379, 0.0, 0.0,
     0x1.70aae88736ed1p-138, 0x1.af5af6729f7b7p-155, 0x1.18ec915a9336cp-923,
     0x1.e02de30da6fbap-854, 0.0, 0.0, 0.0, 0.0, 0x1.7b7e196b316b4p-71,
     0x1.e7a72a00bc72fp-950, 0.0, 0x1.60fbf83acda66p-14, 0x1.46ecaf0e75212p-697, 0.0,
     0x1.a8c20b08766ap-624, 0.0, 0x1.f905e7b67b027p-352, 0.0, 0x1.f60420c1430dp-19,
     0.0, 0x1.379c01eb482b4p-291, 0x1.4e9cb06080d73p-124, 0x1.79eabe065db98p-602,
     0x1.d9ad1d1b655f2p-816, 0.0, 0x1.60aae168e907dp-640, 0.0, 0x1.70c355fcb6939p-861,
     0.0, 0.0, 0x1.3dcef49b5024p-377, 0.0, 0.0, 0.0, 0x1.df6a986bf553fp-642,
     0x1.f766ece77a02ap-115, 0x1.44294d0f53829p-288, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.250e70f0769ebp-336, 0x1.dd3b27eb6c175p-155, 0x1.eddc154f4a6fbp-874,
     0x1.2439fd2ccedep-221, 0.0, 0x1.b1c6a22355b99p-456, 0x1.edd38205ab9f4p-64,
     0x1.b55ade20ba6f3p-401, 0x1.bdfa9795ed158p-11, 0x1.d1f95b082b685p-238,
     0x1.f7590377591fep-268, 0.0, 0x1.f591444c82967p-228, 0x1.f6a5d2595e1bcp-318, 0.0,
     0x1.13f62ee8c7df2p-712, 0.0, 0.0, 0.0, 0x1.edc7da1d9666ep-227,
     0x1.726f5b65da5d4p-184, 0x1.15b68ffe562dbp-766, 0.0, 0x1.bede57b82637p-387,
     0x1.470e77a764832p-886, 0x1.6c7ee6200017ap-714, 0.0, 0.0, 0.0,
     0x1.dd2942e9290bbp-449, 0x1.dba4d5dce001ap-200, 0.0, 0x1.abfafde91c87cp-24,
     0x1.55ceaae8415aap-1017, 0.0, 0x1.7e2127a494f8p-161, 0x1.b1ea76addcc7fp-405,
     0x1.2ebdb60088b3fp-155, 0x1.819f635b8bb79p-422, 0.0, 0.0, 0x1.87ba4b1ce9887p-539,
     0x1.1a4da0bbb4e59p-378, 0.0, 0.0, 0x1.3590998dca551p-58, 0.0,
     0x1.408ee5e2e1bafp-948, 0x1.e5688aad3f9e1p-824, 0.0, 0x1.00be2b5ed020dp-200,
     0x1.802e7e276e557p-986, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7683ff078652p-27, 0.0,
     0x1.80c413d48a3e3p-214, 0x1.c38fea757f49fp-803, 0x1.d731bd471b827p-559, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.90e68699a1eccp-311, 0.0, 0.0, 0.0, 0.0,
     0x1.ab0b2b388f7eep-452, 0x1.3f9580e9b5b3dp-747, 0.0, 0x1.15930d6f748a9p-336,
     0x1.fff7e4774e02bp-469, 0x1.d376cef78f91ep-936, 0x1.e0bd9ec61f573p-611, 0.0,
     0x1.8121c84965edep-266, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba589091af055p-562, 0.0,
     0.0, 0x1.3f3919b1d5e9bp-939, 0x1.b7832222666fap-521, 0x1.8dfeee1f11eebp-903, 0.0,
     0.0, 0.0, 0.0, 0x1.7722c231ca951p-527, 0.0, 0.0, 0x1.44c8bdb05e215p-667,
     0x1.708fa21c4d051p-389, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f10595e0795cp-855,
     0.0, 0.0, 0.0, 0x1.50d7c0dd965f1p-432, 0.0, 0.0, 0x1.660a13a43fad6p-182, 0.0,
     0x1.b87b50984c34cp-560, 0x1.16585f3c91633p-496, 0.0, 0.0, 0x1.32d5296f8cd3bp-55,
     0x1.2fc8a29bfe207p-58, 0x1.8fc09d7281d1cp-584, 0x1.c0eb7d3005732p-143,
     0x1.291f44de34e79p-349, 0x1.ae531baeeb738p-321, 0x1.0cacd88da1586p-983, 0.0,
     0x1.b8ad6d9c4510fp-285, 0x1.89cd0dd70b08p-647, 0x1.f8d8bd5fbeec5p-637, 0.0,
     0x1.607386164db37p-143, 0.0, 0x1.b67912480ececp-54, 0.0, 0.0, 0.0,
     0x1.090e6ec542723p-303, 0.0, 0.0, 0.0, 0.0, 0x1.ef6ba63e4e0c4p-153,
     0x1.b3b70ab9bd93ep-515, 0.0, 0.0, 0.0, 0.0, 0x1.b01addb4da7c4p-314, 0.0,
     0x1.373ea22e10d87p-246, 0x1.be3156cb9bce2p-29, 0x1.8eafe3ad73c0fp-810, 0.0,
     0x1.85c8d43107dc5p-791, 0x1.8db362992190ep-839, 0x1.9ffc057d1f0c2p-99, 0.0, 0.0,
     0x1.c3c7b530116e1p-144, 0.0, 0.0, 0.0, 0.0, 0x1.0b56f44065adap-936,
     0x1.f2e180657dd32p-224, 0.0, 0.0, 0.0, 0x1.6563df003a367p-376, 0.0,
     0x1.e75c1b5f02ae1p-267, 0x1.7641e479620e7p-897, 0x1.76b7f12c4fff5p-125,
     0x1.3287a1c588cc8p-396, 0x1.8a0bc8c38d09bp-384, 0.0, 0x1.077b97f4a59d4p-945, 0.0,
     0x1.cdb328e64d8d9p-554, 0x1.477fce6b812ddp-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c80f6ba9231cdp-129, 0x1.2fce8f667a177p-364, 0.0, 0.0, 0x1.ae2908023d2f8p-174,
     0x1.cd5b0aae6eeb8p-738, 0x1.29371e46b38adp-344, 0.0, 0x1.3a8893094080fp-971, 0.0,
     0.0, 0x1.ca377add73f04p-13, 0x1.093323118e80bp-424, 0x1.c1338950fb601p-863,
     0x1.0170d18c0288p-584, 0x1.aad83e722a7dp-532, 0.0, 0x1.874cc16992f3ap-320, 0.0,
     0.0, 0x1.c961738112938p-297, 0.0, 0x1.a87d3be8d78bfp-355, 0x1.e41a3afbdc32p-310,
     0.0, 0x1.cbee679f86136p-729, 0x1.236fcbe11d4fep-759, 0.0, 0x1.e7a6e30e88559p-5,
     0x1.9e45c3e346917p-475, 0x1.2bf1106bc2d31p-838, 0x1.4d192363a3853p-312, 0.0,
     0x1.97715a424b4a2p-612, 0x1.bc4ebe0020ce7p-60, 0x1.dbb8752489034p-554,
     0x1.6db3c6ca55fa3p-689, 0.0, 0x1.11ae35adf35fdp-925, 0x1.a13eb0a02f09dp-383, 0.0,
     0.0, 0x1.8819213264c85p-717, 0x1.4b6d6e1badfb1p-948, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6952b64c7ca08p-100, 0x1.58881b786cf56p-306,
     0x1.4287ef8f6887ap-740, 0x1.1f8206e57ad15p-53, 0.0, 0.0, 0x1.57341e4c377ap-818,
     0x1.ec6e2c670a15cp-119, 0x1.fee55c75a7316p-883, 0x1.f9893e55fed0dp-90,
     0x1.3c483312801c3p-296, 0x1.216b9d66b01e1p-879, 0x1.2833c0e09920bp-696,
     0x1.11341e18fa022p-990, 0.0, 0x1.a47c067df8a4cp-721, 0.0, 0x1.35edc030546edp-949,
     0.0, 0x1.d72d565d36552p-221, 0.0, 0.0, 0.0, 0.0, 0x1.68731292311p-699, 0.0,
     0x1.ae81eaf9a61f1p-727, 0.0, 0.0, 0x1.5821baf6c2a8cp-120, 0x1.3c442636f2965p-959,
     0x1.d725948495db1p-301, 0.0, 0x1.cded1255b4fa5p-526, 0x1.617d788503f3dp-554,
     0x1.8ebf223bbd54fp-225, 0.0, 0x1.d188fb16282b2p-1007, 0.0,
     0x1.b9f8b20b7f113p-558, 0x1.75eaf9dc8c2bep-137, 0x1.78d8a670d91f1p-549, 0.0, 0.0,
     0x1.ba89bd05cee01p-946, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80c08549ad019p-1,
     0x1.96b6de5a4f9aap-897, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.857f6bfdcdcc5p-959,
     0x1.221479f8ec5b3p-186, 0.0, 0x1.63ba6347df7adp-240, 0x1.54673b3af4f67p-347,
     0x1.7e08077fcf44ep-375, 0x1.153647c98f549p-900, 0x1.587c3c549c0e6p-818,
     0x1.c82ad7e4b0586p-587, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a60e227a1ef3ep-339, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.67aecc3235e63p-648,
     0x1.d5cd8bd3e1cd5p-9, 0x1.96bd1bac45554p-83, 0x1.0dfd612de2eb5p-17, 0.0,
     0x1.e0dd27352a2b9p-725, 0x1.2cf3073edf7cfp-848, 0.0, 0x1.aa62ba7c13226p-536, 0.0,
     0.0, 0.0, 0x1.a359888b19fb3p-410, 0.0, 0.0, 0.0, 0x1.1ceb6e91b72ep-755,
     0x1.276b68919f531p-581, 0x1.04457307b4428p-888, 0.0, 0x1.6cd370c1e848ep-536, 0.0,
     0x1.94c0e567a7d3ep-247, 0x1.e6f4382280812p-12, 0x1.8db778929dcc2p-453,
     0x1.0c319a6ec2036p-515, 0.0, 0.0, 0x1.9f281a74f9f2cp-15, 0.0,
     0x1.ad910e7580c0dp-647, 0x1.f26be250f926bp-832, 0.0, 0x1.5ef4763ab7d3dp-646,
     0x1.0ef95ff5479abp-262, 0.0, 0x1.e5b5c4d6e86f2p-525, 0.0, 0x1.c210c84b8ed47p-464,
     0.0, 0x1.9aac4401c72b2p-164, 0.0, 0x1.76299ae5e92a9p-737, 0.0, 0.0, 0.0, 0x1p0,
     0.0, 0x1.27877a3fe3865p-151, 0x1.1e0958e9341fdp-50, 0.0, 0.0,
     0x1.c46a06c22da9bp-75, 0.0, 0x1.245dd2e3f567ep-787, 0x1.b71f571fd1c37p-500, 0.0,
     0x1.d25260ee1a307p-723, 0.0, 0.0, 0.0, 0x1.64837a63323a6p-11,
     0x1.e3f22f8b49bd3p-650, 0x1.b5abd4bc2d16ap-961, 0.0, 0.0, 0.0,
     0x1.8e668873520c2p-10, 0.0, 0.0, 0x1.8dfb971fd3b8ep-572, 0.0,
     0x1.913f03aa9851dp-873, 0x1.d192a82a971adp-238, 0x1.792bffc4dc793p-371, 0.0, 0.0,
     0x1.f0231bdf3dc21p-432, 0.0, 0x1.0b30ad65b0953p-30, 0x1.431f77de89081p-72,
     0x1.aa32532fb94a8p-120, 0.0, 0.0, 0x1.6d77a311cdd69p-711, 0.0, 0.0, 0.0,
     0x1.9c11af1e29b31p-742, 0x1.d130dbdeedb45p-567, 0.0, 0x1.d1551fad60b2p-118, 0.0,
     0.0, 0.0, 0.0, 0x1.2934b18495bf6p-203, 0.0, 0x1.f6d065cf2203bp-220, 0.0, 0.0,
     0.0, 0x1.be5c88985c5fap-220, 0x1.cca4a5b928fb1p-807, 0x1.1afac048ea5b9p-696,
     0x1.81e769b27452p-365, 0.0, 0x1.85bbe97a0aa86p-499, 0x1.c169127bf40f5p-181, 0.0,
     0x1.1de76544a0881p-150, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.00404cc646014p-853, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_logd2_u10kvx(tmp0);
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
    printf("Sleef_logd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_logd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
