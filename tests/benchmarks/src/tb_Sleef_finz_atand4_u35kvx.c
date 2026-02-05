/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand4_u35kvx.c --function \
 *     Sleef_finz_atand4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.e9935c9ea51b4p-895, 0.0, 0x1.c5a8d9624a7b9p-450, 0.0, 0.0,
     0x1.cc2a0de9c01afp-167, 0x1.6aca5d76044abp-447, 0x1.29d480bc91c1fp-428,
     0x1.f59407c6896d9p-367, 0x1.dbaebf1d463f4p-937, 0x1.48b47b36fd6fbp-381, 0.0, 0.0,
     0x1.efb088c3147d1p-846, 0.0, 0x1.87a0fc5105a2dp-830, 0.0, 0.0,
     0x1.ca50340583666p-863, 0.0, 0x1.5b76a81d6410ep-743, 0.0, 0.0, 0.0, 0.0,
     0x1.b119986f54c26p-630, 0.0, 0x1.dc9d2b0760f7fp-527, 0.0, 0.0,
     0x1.6bb6d3aa1c884p-496, 0.0, 0x1.bac35a961980dp-242, 0x1.0556661a8f536p-813,
     0x1.244cb1484be9bp-134, 0x1.782d677fb1545p-979, 0.0, 0x1.3c66ddbc44246p-179, 0.0,
     0x1.eb382574c7a53p-178, 0.0, 0x1.1762e44fa6098p-148, 0.0, 0x1.1baab61f73b9cp-350,
     0.0, 0.0, 0.0, 0x1.a19be68617341p-539, 0x1.0aaed0f372d6cp-883, 0.0,
     0x1.378e23a8d802dp-24, 0x1.38f3582fadb3fp-984, 0x1.dd6f2fd9c02acp-276, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.99523c3c785cp-372, 0x1.c68e22c074c56p-408, 0.0,
     0x1.21fac4196829bp-355, 0.0, 0x1.3da83226a4f39p-566, 0x1.daee634f4746ep-359, 0.0,
     0x1.fff793d6d207ep-66, 0.0, 0.0, 0.0, 0x1.e8bf2e55e76d9p-833, 0.0,
     0x1.3280b0e61000fp-537, 0x1.cf4c4a14e2ffcp-1019, 0.0, 0.0, 0.0,
     0x1.25c0ed73e459ap-331, 0x1.562355091ce12p-647, 0.0, 0x1.d2d2e90c9595ap-277,
     0x1.fd6eebca4ce18p-626, 0x1.22101e9372772p-510, 0x1.fce43e831ef21p-911, 0.0, 0.0,
     0x1.dc1b6c4546527p-952, 0.0, 0.0, 0x1.083a8a5df8afbp-981, 0.0, 0.0, 0.0,
     0x1.e4ea8f1378296p-236, 0x1.f98d4807c7b71p-566, 0x1.ad67a546d9ab3p-267,
     0x1.25e696c003233p-479, 0x1.2128f11ed7eebp-524, 0.0, 0x1.67fc81afb05afp-794,
     0x1.eaf830e3de7a3p-888, 0.0, 0x1.98f097c3af061p-393, 0.0, 0.0,
     0x1.698ee3e991051p-338, 0.0, 0x1.df5d29228a4c9p-642, 0x1.542c2ebbb5c5fp-517, 0.0,
     0.0, 0.0, 0x1.53b27f9c7003bp-376, 0.0, 0x1.308229f682dbp-18, 0.0,
     0x1.81930657862a4p-453, 0x1.77c47884428ap-543, 0.0, 0x1.147ee2e1c302cp-532, 0.0,
     0.0, 0x1.58059ae79b2ep-752, 0x1.7680d0152e827p-42, 0.0, 0.0, 0.0,
     0x1.ac6a3a1d14df8p-913, 0x1.3c0712b4340a1p-803, 0x1.9b9c65edfbae1p-550,
     0x1.57943b3768e85p-373, 0x1.7283f61eaff0dp-110, 0x1.2baea831212ep-790, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a1a49c61c9cc3p-38, 0x1.2026a7172e9ap-591, 0.0, 0.0,
     0x1.c44ab2958c20cp-133, 0.0, 0x1.8efcd1673a986p-289, 0.0, 0x1.4120b200598d6p-884,
     0.0, 0.0, 0x1.6f140d891b534p-245, 0x1.695c26e9e0ef6p-211, 0x1.b873a43e11358p-523,
     0.0, 0.0, 0.0, 0.0, 0x1.57f3e066f4c09p-515, 0x1.00ca4f698aa47p-589,
     0x1.3e490ac74c192p-975, 0x1.be7387e304772p-694, 0x1.3ac92948d59e1p-535,
     0x1.d1ff9b04b041cp-937, 0x1.553c1ab1819c8p-654, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c2d4dbd2a890ap-930, 0.0, 0.0, 0x1.ffa241f0c9bf1p-784, 0.0, 0.0,
     0x1.11bbf0c290e0dp-794, 0x1.f322297a2b3e9p-877, 0x1.881d5e95e6e15p-170,
     0x1.ed1ab4f6ad93cp-707, 0x1.7815ad62d7c0ap-490, 0x1.178a18f474b02p-533, 0.0, 0.0,
     0x1.df78ef1fccccdp-968, 0x1.3af6d156a10f4p-968, 0x1.5c32f1cbf9597p-665, 0.0,
     0x1.d88f9c0075a55p-337, 0.0, 0.0, 0x1.bdc23717ea3ebp-734, 0x1.fdf9f6d10ce39p-455,
     0x1.c6dc86c277682p-556, 0x1.9b31b6e5999b2p-181, 0x1.754ee88f1bf31p-382,
     0x1.1b66f565034b3p-841, 0x1.b05d8d89aed5fp-569, 0x1.a9f458415af0cp-556,
     0x1.f84e19dfdecbbp-194, 0x1.55b70f744f7a9p-47, 0.0, 0x1.fa0c9465eb918p-309, 0.0,
     0.0, 0x1.c81b53b5aca45p-285, 0.0, 0x1.fa4c15c26f562p-357, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3ce05a104fbd9p-670, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11169f4f7b287p-806,
     0.0, 0x1.8dcba7b3aebbfp-312, 0x1.20d70f220586p-405, 0.0, 0x1.7c9add3981d7ep-498,
     0.0, 0.0, 0.0, 0x1.8bb2a76ebe1f6p-773, 0.0, 0x1.365a6f176762fp-603, 0.0, 0.0,
     0x1.4803a2df4fbbep-308, 0.0, 0.0, 0.0, 0.0, 0x1.422b5a5844d9dp-774,
     0x1.7969f069cbd0cp-111, 0.0, 0.0, 0.0, 0.0, 0x1.1bf1dbafdf9a6p-656, 0.0, 0.0,
     0.0, 0.0, 0x1.af0974a6899f2p-774, 0x1.84ce30f15768ap-740, 0.0, 0.0, 0.0,
     0x1.b66441781f849p-903, 0x1.f17d63161498bp-357, 0.0, 0x1.476c4df6e2151p-1020,
     0.0, 0x1.18377c06c3661p-12, 0.0, 0x1.4515f764ae5d6p-619, 0.0, 0.0, 0.0,
     0x1.860edbb57b4dbp-967, 0x1.7095e8672d51bp-806, 0x1.8cb98e2e6f067p-823,
     0x1.2300fcd839562p-190, 0.0, 0x1.b5b9058b985cfp-716, 0x1.d420eaf1d9f42p-188, 0.0,
     0x1.e8f4f80e8fb26p-379, 0.0, 0.0, 0x1.35eeedf818597p-885, 0.0, 0.0, 0.0,
     0x1.c990c9e52be24p-721, 0x1.8cb6902913a31p-537, 0.0, 0x1.a75e842493dbp-626, 0.0,
     0x1.9aadef323302ep-808, 0.0, 0.0, 0.0, 0.0, 0x1.1b4d51db8e04ep-129, 0.0, 0.0,
     0.0, 0x1.670cf3e028d92p-263, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b297027aa11fp-332,
     0.0, 0x1.858a8e86323dp-869, 0.0, 0x1.74a0774408a63p-835, 0.0, 0.0,
     0x1.755ce1427eafdp-106, 0x1.c610241e09044p-937, 0x1.99b6087e0d363p-943,
     0x1.799b136f7453dp-806, 0.0, 0.0, 0.0, 0.0, 0x1.4b5f8dd3e3f61p-431, 0.0, 0.0,
     0x1.d36adbf7d25b5p-471, 0x1.3ee3f9b0ecb35p-498, 0x1.2f0e869fcaa82p-302, 0.0,
     0x1.2dfc47c0f38d4p-693, 0.0, 0x1.33ab83695f082p-712, 0.0, 0x1.7bbcb6cc731f3p-897,
     0.0, 0.0, 0x1.80ddf219823c1p-828, 0.0, 0.0, 0x1.3e30b4c7591f3p-957,
     0x1.0dbc93a534e04p-838, 0.0, 0x1.ae55300ea4cbfp-121, 0x1.258245ebf471p-816, 0.0,
     0.0, 0.0, 0x1.40dad2ef17ab3p-334, 0x1.45369697ef136p-360, 0.0, 0.0, 0.0,
     0x1.db368c41cc5b4p-741, 0.0, 0x1.35c172fd1cb75p-447, 0.0, 0x1.0c0228b8a57a3p-688,
     0.0, 0x1.efcc51a401bc8p-428, 0x1.7e61f9e5fe0fp-145, 0x1.cce48f24550dap-390, 0.0,
     0x1.9e7c38b6f8fa8p-988, 0x1.a78ab557ffd9bp-901, 0.0, 0.0, 0x1.499ecb0949cb5p-153,
     0x1.f592e6f856cf2p-741, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0x1.c9a4a82654982p-152,
     0x1.60e8fd95309a2p-527, 0.0, 0.0, 0x1.e0d16e9fa3b0ap-59, 0x1.59097cc66b957p-890,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90e0371a7b77cp-550, 0x1.b4c7f142966abp-106,
     0x1.040187845d52cp-894, 0x1.088db0f5f7ed5p-61, 0x1.f9af25b490ac4p-18,
     0x1.21103a2308f81p-477, 0.0, 0x1.f7de77b59c327p-276, 0.0, 0.0,
     0x1.4b3193be56607p-166, 0x1.626d77172218ap-5, 0x1.53356ab769cc4p-703,
     0x1.38019301cacfdp-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77b638474c284p-860,
     0x1.7b04a1e7438a9p-485, 0x1.7d78560996121p-949, 0x1.f1d8c2f010348p-3,
     0x1.cb17675b08e5dp-794, 0.0, 0x1.91dce99a71d07p-630, 0x1.d9ff186bc7dabp-797, 0.0,
     0.0, 0x1.44116ea1f5fb4p-402, 0x1.dc7d6f2bae593p-1011, 0x1.8c8ec5ed20eb8p-872,
     0x1.3e4d23f43d1bfp-72, 0x1.8a6b989eafce1p-649, 0x1.478fc2d9e160ap-961, 0.0, 0.0,
     0.0, 0x1.03bc55ce4da2fp-136, 0.0, 0.0, 0.0, 0x1.c07025e7391d6p-621,
     0x1.6bf54aad077dfp-903, 0.0, 0.0, 0.0, 0x1.1796321d067fdp-135, 0.0,
     0x1.2e8b44b8b8de7p-317, 0x1.d3bfd1123eba3p-109, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bcbe220f39031p-18, 0.0, 0x1.14c21349b987fp-35, 0x1.622fe91b626c7p-851, 0.0,
     0x1.f844eefc12921p-144, 0x1.4bbd0fed9ea7bp-6, 0x1.a62eeb6eeb6efp-266,
     0x1.42213c52d63d2p-831, 0x1.1e95dff5218dbp-389, 0.0, 0x1.ba5b12891244ep-85,
     0x1.accbc332ea194p-612, 0x1.6059c53d64685p-750, 0x1.898fdeb7c579fp-147,
     0x1.98b0296734acp-304, 0.0, 0x1.481545a29c1fap-8, 0.0, 0.0,
     0x1.462e789cd5c5p-696, 0.0, 0x1.096d42c2ef321p-24, 0.0, 0.0, 0.0,
     0x1.5320928d6c5a9p-725, 0.0, 0x1.a1a16559a0f74p-930, 0.0, 0x1.2a584e9b7e3a6p-16,
     0.0, 0x1.bb74ce9f1985ep-847, 0.0, 0x1.9b9c847dd3369p-242, 0x1.dd6fe66f0e846p-496,
     0x1.3ded718b1d0e6p-728, 0x1.aba4b9787a0c9p-641, 0x1.ffc2b8eea8b3ap-717, 0.0,
     0x1.b4bddfc5242bfp-460, 0x1.3bb551e3a8d8fp-530, 0x1.b52e67fd94b58p-379,
     0x1.8c557b3820027p-730, 0x1.525444d910a8bp-465, 0x1.2eb0fa17e2383p-99,
     0x1.9058070c70714p-472, 0.0, 0x1.1e3647f9d478cp-284, 0.0, 0.0,
     0x1.c6cbb5f3b77cap-698, 0x1.bedffa8108692p-238, 0.0, 0.0, 0x1.837afcc1166d6p-695,
     0.0, 0x1.2b6f52291f41ep-870, 0x1.1ee1feb8ff0c9p-463, 0.0, 0x1.093ac433be3b1p-368,
     0x1.b6d290a97d39fp-519, 0x1.f4458d2fb1737p-982, 0.0, 0x1.7f36d5d04d9c7p-77,
     0x1.55dc4db9d5f15p-75, 0.0, 0x1.804ba18e4c241p-890, 0x1.c2ee8dc40b8e8p-174,
     0x1.73de15ef8eac6p-813, 0x1.fcde61b2bca95p-702, 0.0, 0.0, 0.0,
     0x1.2f7262d0cd959p-24, 0.0, 0x1.7a74ae3a219bep-187, 0x1.9d96c92d20177p-302,
     0x1.012d0514da54dp-908, 0x1.8fc56f75b488dp-815, 0x1.32d5ed95220cp-551, 0.0,
     0x1.8a82e75742ce6p-1016, 0x1.8c37b1743ff84p-613, 0.0, 0.0, 0.0,
     0x1.33b31a5d86edep-990, 0.0, 0.0, 0x1.07475c912d46dp-228, 0x1.94fc5259ff5efp-108,
     0.0, 0.0, 0x1.d8ff34bbce3b8p-957, 0x1.4a6baa93c4fb3p-421, 0.0, 0.0,
     0x1.f01a7b7e5b46ep-687, 0x1.a5686b749578bp-889, 0.0, 0x1.58717cf515b6p-351, 0.0,
     0x1.49fb7709147d4p-663, 0x1.eeece2dfb942bp-513, 0.0, 0.0, 0.0,
     0x1.3b59d13451e8dp-402, 0x1.cfde5debac681p-556, 0.0, 0.0, 0x1.85a52b89c0c47p-469,
     0x1.1ed9831385fccp-1, 0.0, 0x1.ba31ebb1a6a3ap-127, 0x1.d89ac75a53563p-282,
     0x1.8cbad8eeecb13p-971, 0x1.02fde05c74189p-203, 0x1.c582d47b2d4fp-926, 0.0, 0.0,
     0.0, 0x1.37abe4f439805p-818, 0x1.bce1c74b620adp-103, 0.0, 0.0, 0.0,
     0x1.5769978b31ec6p-971, 0x1.75eecb8311371p-367, 0x1.f85a724cef48bp-734, 0.0,
     0x1.bf03fa975d414p-430, 0.0, 0x1.cb41c307e7acep-404, 0x1.c031f2b82bf35p-582,
     0x1.d95a1b3875d48p-347, 0x1.eb6e341648f1cp-567, 0.0, 0.0, 0x1.cf14494618daep-150,
     0.0, 0x1.1e67984959339p-68, 0.0, 0.0, 0.0, 0x1.9fc61b0988d33p-1003, 0.0,
     0x1.2e22eda3885eap-399, 0x1.55d173652a5e4p-832, 0x1.ee17a2628cb45p-451, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94ca23ac7b27ap-53, 0x1.757fe5602f64ap-212,
     0x1.b69a531f1c09ap-916, 0.0, 0.0, 0x1.f51024cc9a47bp-543, 0.0,
     0x1.c09d530cf4e43p-835, 0.0, 0x1.7e37c54c7d6edp-351, 0.0, 0x1.49c689f109b52p-182,
     0x1.bed7a5396744ap-661, 0x1.af8079c83ae8cp-873, 0.0, 0x1.5e48ac0ce6ce1p-194,
     0x1.324710c34f52dp-979, 0.0, 0.0, 0x1.e7fe95c17d7b3p-501, 0x1.8cadcf495be6cp-106,
     0.0, 0x1.d5c7464df1822p-379, 0.0, 0x1.f8ede24514687p-752, 0.0,
     0x1.3bc45d564b85ap-862, 0x1.610c2182e2ba5p-899, 0x1.caa4a74b56c5p-771, 0.0, 0.0,
     0x1.17358b335cd1p-298, 0x1.83e7e11d14686p-963, 0.0, 0x1.5a082108dd36dp-604,
     0x1.e1d60e4e8d4efp-227, 0.0, 0.0, 0.0, 0x1.ada40dbd19c4ep-338, 0.0,
     0x1.9d7104fc8cb61p-869, 0x1.287da7f2d196fp-589, 0.0, 0x1.c554922b25511p-5,
     0x1.ff65a8ea00461p-822, 0.0, 0x1.a71f121a53efap-181, 0x1.f9f15539e1da8p-159, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1796f5a1b524ap-236, 0.0, 0x1.6d3d5108ea84p-971,
     0x1.fe3238b1e6eedp-181, 0x1.c7895b2b323ecp-505, 0x1.33c9dc2242acep-743, 0.0, 0.0,
     0.0, 0x1.b3c743ffc279ep-966, 0x1.844a406b3155dp-641, 0.0, 0.0,
     0x1.2db483f28800cp-622, 0.0, 0.0, 0x1.8176855d48e9bp-512, 0x1.27a23472a19a8p-68,
     0x1.a5d13d9c32356p-201, 0.0, 0x1.2965f7a1bc66p-239, 0x1.6a7d07512dadap-252,
     0x1.35eaaae25a2f2p-531, 0.0, 0x1.bd94781488656p-899, 0.0, 0x1.6aa89d12b6bf3p-50,
     0x1.239459c4a9e2bp-441, 0.0, 0x1.891f122896886p-968, 0.0, 0x1.a75feef0a8cacp-981,
     0.0, 0.0, 0x1.b6ba06749ebf2p-818, 0.0, 0.0, 0x1.4406fe3596284p-680,
     0x1.d102d8d55245p-287, 0x1.f626145e20867p-372, 0.0, 0x1.bcd45a8b06a9p-572,
     0x1.7157392aafb9dp-781, 0x1.f4a9f3dce40bap-986, 0.0, 0.0, 0x1.394d092844e5ep-810,
     0.0, 0.0, 0x1.d5e255c4ab98fp-690, 0.0, 0.0, 0.0, 0x1.075e60f360c9ep-279, 0.0,
     0x1.105e1ae2cbab1p-874, 0x1.2f0cc3b94db62p-868, 0x1.b4f90fdb7a08fp-491,
     0x1.4bc94cecfcfdcp-520, 0.0, 0.0, 0.0, 0x1.f373cb2149e37p-269, 0.0,
     0x1.3f46af100b6bdp-927, 0x1.41df9bf7a33f4p-25, 0x1.04f49a9914951p-276, 0.0,
     0x1.850ad239fdf49p-579, 0x1.73fd22a39b969p-75, 0.0, 0.0, 0.0,
     0x1.36ebf7ab57e18p-930, 0x1.7e3e7a0f075aap-95, 0x1.275f4e6afdc3cp-481, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.65fd87f88fd2bp-687, 0x1.4366054f4080cp-125,
     0x1.ecfe98641f87dp-699, 0.0, 0.0, 0.0, 0.0, 0x1.b7fe8ea8997cap-35, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.589e0267a40bap-435, 0.0, 0.0, 0.0, 0.0, 0x1.f721a67282ab4p-634,
     0.0, 0.0, 0.0, 0x1.0c9926ac47f2p-835, 0.0, 0.0, 0x1.e33f790bfd89ep-5, 0.0,
     0x1.deef83562a31cp-743, 0.0, 0x1.aeb086763046p-926, 0.0, 0x1.317b063768109p-189,
     0.0, 0x1.c9f267d463393p-763, 0.0, 0.0, 0x1.b6491ce900258p-236, 0.0, 0.0,
     0x1.745d2107d057cp-759, 0x1.b79e736582dc9p-525, 0x1.14c4f718dea39p-134, 0.0, 0.0,
     0x1.0f4283702cf94p-160, 0.0, 0.0, 0x1.11e275b4e0dp-935, 0.0,
     0x1.f7bbc51577e28p-130, 0x1.3a21139b6165bp-179, 0.0, 0x1.9056eafe266b1p-247,
     0x1.ddb41c7e151bep-349, 0x1.e94fa1a708613p-177, 0x1.9b0384fc550e6p-679, 0.0, 0.0,
     0.0, 0x1.3a9bfffd260eap-354, 0.0, 0.0, 0x1.bd0f283560388p-421, 0.0, 0.0,
     0x1.778aa39460703p-211, 0x1.83426f0354e12p-11, 0x1.2007b48fee791p-194,
     0x1.9dee3edd9389p-576, 0.0, 0x1.53fab525e855dp-743, 0x1.8d31d9b0ab4bfp-527, 0.0,
     0.0, 0.0, 0x1.e592320f39c88p-545, 0x1.3838bbc644676p-875, 0.0,
     0x1.d0e47661e7ac9p-550, 0.0, 0.0, 0x1.2f338ab0207c2p-603, 0.0, 0.0,
     0x1.73814cfaec7c8p-550, 0x1.504e14ba8cc32p-269, 0x1.644d86ff21248p-103, 0.0, 0.0,
     0x1.655b6e4c26e2ap-833, 0.0, 0x1.b4e293be819b5p-123, 0.0, 0.0, 0.0, 0.0,
     0x1.f1a6feee09ef5p-749, 0x1.67f8428f07bdfp-845, 0x1.5dea01010d05bp-905,
     0x1.e9960c1a08683p-500, 0.0, 0.0, 0x1.c016e480425fcp-404, 0.0,
     0x1.eff0851cd6c7bp-535, 0x1.500f842870401p-598, 0.0, 0.0, 0x1.2b46b60c71593p-914,
     0x1.610e5deabce38p-85, 0x1.99157d2ddeb93p-499, 0x1.8673c3e06329dp-838, 0.0,
     0x1.0a062d0b920bfp-148, 0.0, 0.0, 0.0, 0.0, 0x1.a4aa508b89824p-581,
     0x1.54331a7a62c4ap-59, 0x1.83f0f783da14fp-498, 0.0, 0x1.a8f49e6d7290ep-437,
     0x1.7dbce9675d61ap-770, 0x1.221ac1e81802bp-288, 0x1.1caf797bb294ep-878,
     0x1.4ab8313bafc2cp-943, 0x1.b62596b8ec4f5p-627, 0.0, 0x1.df68e8cd131b9p-804, 0.0,
     0x1.41e4cd1506fe6p-385, 0.0, 0.0, 0x1.b1656951ef77ep-786, 0x1.72cba56c309fdp-124,
     0.0, 0x1.418cf613c5bbbp-143, 0.0, 0x1.8ba9b505ba50cp-758, 0x1.dd0c98335d714p-96,
     0.0, 0.0, 0x1.ad0fce48b6d2bp-144, 0.0, 0.0, 0x1.6671e2f965faep-787,
     0x1.c53d2f0e37458p-349, 0.0, 0.0, 0x1.36f6c0ed0c064p-969, 0x1p0,
     0x1.9fe506cd502c5p-183, 0x1.154a3f71d3fabp-492, 0x1.2667db7b33b3fp-224,
     0x1.3d5c26ae9e359p-361, 0x1.724661ab7f968p-873, 0x1.15f0a58620e6dp-760,
     0x1.e23b56d9e1857p-977, 0.0, 0.0, 0.0, 0.0, 0x1.93899d619a54cp-164,
     0x1.4c5c91bd694efp-911, 0x1.5d18a9defd457p-48, 0x1.64d3672dadf4cp-518, 0.0, 0.0,
     0.0, 0x1.b30345a8b13e3p-818, 0x1.ce57a330d4a97p-462, 0.0, 0.0,
     0x1.0735522ab8f0bp-643, 0.0, 0.0, 0.0, 0x1.10eadb026e38dp-490, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2e924d2acec44p-29, 0.0, 0x1.c1a44a4a4bd3dp-207, 0.0,
     0x1.e5b667c72a136p-524, 0.0, 0x1.33e08718818eap-602, 0x1.982dc9ce384c9p-766, 0.0,
     0x1.93303ed8f46f5p-747, 0x1.cf9c3718b2d5bp-508, 0.0, 0.0, 0x1.7de4c523160f7p-378,
     0.0, 0.0, 0.0, 0x1.3e1173234f92p-734, 0x1.7f79ce89c04c2p-384, 0.0, 0.0, 0.0, 0.0,
     0x1.e4634e32e846cp-873, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e8fa90275274p-885, 0.0,
     0.0, 0x1.6932a425bb5ffp-764, 0x1.381a60277bbp-829, 0x1.594109bb22047p-82,
     0x1.2d6ad8127494dp-653, 0x1.63a13a02f9cc3p-944, 0x1.0098f60afbb4fp-511,
     0x1.a6f12843b4f3bp-494, 0x1.5ad14c1263e37p-739, 0.0, 0.0, 0x1.7bd498f364523p-956,
     0x1.c61d09ed9b93ap-31, 0.0, 0.0, 0.0, 0x1.62e1d988cb45fp-580, 0.0, 0.0, 0.0,
     0x1.6579d01ab43cp-543, 0.0, 0.0, 0x1.04dc05b5fef64p-1003, 0x1.f54888620109bp-607,
     0x1.8e797c0d825ccp-407, 0.0, 0x1.d0bb1629a8bcdp-1012, 0x1.ca466af5d86adp-391,
     0.0, 0.0, 0x1.4e439eac9f406p-381, 0x1.9e9c0fd54ef5bp-859, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.10145f1793e2bp-694, 0x1.c39638cfecc12p-490, 0.0, 0.0, 0.0, 0.0,
     0x1.146c82db9cfbep-654, 0.0, 0x1.06860586925f6p-164, 0x1.4c0dbb8f6d1p-467, 0.0,
     0x1.ec617742bde94p-512, 0.0, 0.0, 0x1.8024bf43664b3p-938, 0.0,
     0x1.cf767c4f71d0ap-531, 0.0, 0x1.6d9fa037aee82p-617, 0.0, 0x1.450974a51eaf3p-591
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
            tmp1 = Sleef_finz_atand4_u35kvx(tmp0);
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
    printf("Sleef_finz_atand4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atand4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
