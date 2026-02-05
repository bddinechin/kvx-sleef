/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd2_u10kvx.c --function Sleef_finz_logd2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0.0, 0.0, 0x1.2b184f4c1998dp-489, 0x1.e676a91323396p-743, 0.0,
     0x1.78e9d8d5373ecp-579, 0x1.ebb85705c5f6ap-524, 0.0, 0x1.4b6bc00eb95bcp-988, 0.0,
     0.0, 0x1.45ddc8a57bf07p-778, 0x1.b96c622112f81p-413, 0x1.d3a9a0b8f86acp-366, 0.0,
     0.0, 0x1.376805866bd8cp-847, 0.0, 0x1.9e12ce1b3190dp-682, 0x1.f0472ccf8e23dp-989,
     0x1.688c962734c4ep-658, 0x1.ffaa12dff3d22p-814, 0.0, 0.0, 0.0,
     0x1.bc54746ed23f9p-571, 0.0, 0x1.9233fb6d63851p-163, 0.0, 0.0,
     0x1.8766612a23bb5p-703, 0x1.90a9267d5306bp-209, 0x1.3e4a46be72825p-980,
     0x1.6fbdaed9eec97p-243, 0.0, 0.0, 0x1.c0ddc73730f4p-148, 0x1.dfeb9c64cad22p-787,
     0.0, 0x1.0e21973a660fp-1013, 0x1.3842a07c493dbp-14, 0x1.68ac13acda05fp-1009, 0.0,
     0x1.910405404e5dfp-808, 0x1.1e2eee0ce610ap-975, 0x1.5ea939d0e410dp-426, 0.0,
     0x1.e7bf1153b4f99p-66, 0x1.fb1403b509a32p-506, 0x1.39990a7021fa5p-848, 0.0,
     0x1.fc618ab7b3f56p-464, 0.0, 0x1.6c706321fb365p-746, 0.0, 0x1.e46569e7520e5p-798,
     0.0, 0x1.ee1debedbe1a4p-256, 0x1.eba84e9c5d066p-295, 0x1.6a6152d5e87d9p-978,
     0x1.931ad233d55b8p-730, 0.0, 0x1.c7e8d6a19eb7fp-152, 0x1.5519bf930f6a6p-100, 0.0,
     0x1.526e6733331p-829, 0.0, 0x1.e271613949d23p-56, 0x1.f28d954c0a04fp-430,
     0x1.7af3feec6bc73p-118, 0x1.60ec45c77f752p-198, 0x1.f13ca9bd8e9bbp-718, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.35a0912ca8b7ep-729, 0x1.92197e984bc0ep-574,
     0x1.61e9ed8e83e32p-295, 0.0, 0x1.6f33500f0c1d3p-32, 0.0, 0x1.a6d20f618c34bp-37,
     0x1.0acdb78bcbcd1p-829, 0.0, 0.0, 0x1.53953b9325e1cp-796, 0.0, 0.0,
     0x1.3fe855695aa9ap-176, 0x1.a942145d58e57p-165, 0.0, 0x1.e9e3c73a64dcbp-321,
     0x1.388940472db78p-310, 0.0, 0x1.a97936624b3b6p-71, 0x1.63eceaaf27135p-610, 0.0,
     0x1.c832862a31f42p-315, 0.0, 0x1.1e53ac1dddf23p-888, 0.0, 0.0,
     0x1.362d254dc23e8p-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e992d364b4dc2p-111,
     0x1.995ee9a74d2bap-111, 0.0, 0.0, 0.0, 0.0, 0x1.a221daf5aa731p-550,
     0x1.1713586b6c534p-660, 0x1.8f6e5ac2c953cp-845, 0.0, 0x1.dffaa8329d51ap-175,
     0x1.edafc3c71945fp-632, 0.0, 0x1.548319ae4f555p-257, 0x1.4c691e0de82b3p-979,
     0x1.7e44b91dff817p-517, 0.0, 0x1.2a6c5d9bb786cp-563, 0x1.cd111b683f2e8p-293, 0.0,
     0.0, 0x1.4dbf87edd203fp-287, 0x1.9905d00966fadp-680, 0x1.a5f2c3b391728p-894,
     0x1.10c9923575d97p-260, 0.0, 0.0, 0.0, 0x1.1930412eaaea8p-345, 0.0, 0.0,
     0x1.1505da32b3b2cp-554, 0.0, 0x1.38cd4101d4929p-731, 0.0, 0.0, 0.0,
     0x1.73586eb64d263p-845, 0.0, 0.0, 0.0, 0x1.c900647a303d1p-312, 0.0,
     0x1.1acf2737c2bbfp-667, 0.0, 0x1.133a57770bbe4p-429, 0x1.aaeba9e5ea21p-295, 0.0,
     0.0, 0.0, 0.0, 0x1.f2ac2c2a8c4efp-581, 0.0, 0x1.431da2bb6ce32p-167,
     0x1.669c8aa205352p-62, 0x1.984126a306d6bp-733, 0.0, 0x1.417d64766bfep-601,
     0x1.957446f0f9bd9p-97, 0.0, 0x1.a0a0c8830050cp-614, 0x1.737b581c0b896p-529, 0.0,
     0.0, 0.0, 0.0, 0x1.e1b248527939dp-981, 0x1.2d3e25f92ea0fp-539,
     0x1.e38213455c18p-146, 0.0, 0x1.1b356cf8383c2p-786, 0x1.46ae597076b18p-568,
     0x1.73fd89b6d3b1dp-50, 0x1.71bfc31abc6f4p-498, 0x1.de1f930e266afp-803,
     0x1.2d8de417c302dp-127, 0.0, 0x1.b5846f19eb662p-871, 0.0, 0.0, 0.0,
     0x1.3c932f06df6dep-42, 0.0, 0x1.a21fde20a6b94p-322, 0x1.c15fb60dc3abap-434,
     0x1.f231f58c2fd0cp-810, 0.0, 0x1.adb852aba71e1p-116, 0x1.62863fd4203dfp-571, 0.0,
     0x1.3e0f072ed59f6p-24, 0x1.c8ecff9c6ed1bp-443, 0.0, 0x1.f1338a552323dp-273, 0.0,
     0x1.e97cdbd21f9dcp-274, 0.0, 0x1.6516bf80efe1cp-833, 0x1.ac6a84c6ea059p-304,
     0x1.909d9881efe15p-791, 0x1.a95aa5829ca51p-933, 0x1.26323337f2b6cp-888, 0.0,
     0x1.0c6809d8f285cp-372, 0.0, 0x1.9a817b4bdce2ap-345, 0.0, 0.0,
     0x1.1114df3e20074p-346, 0x1.603832107dfdp-357, 0x1.ffbaac6418c34p-256, 0.0,
     0x1.5d5ac193593b4p-370, 0.0, 0x1.7e56f8e1945a5p-256, 0x1.84aec79d4f07bp-234, 0.0,
     0x1.cca9e36858aa2p-1001, 0.0, 0x1.e15c1935557d6p-138, 0x1.f4e335bae97d2p-937,
     0.0, 0x1.f980b307266d6p-954, 0x1.8b8dcbcc4de1p-62, 0.0, 0x1.b0bcbf63a0ef5p-147,
     0.0, 0.0, 0.0, 0x1.52845c7529bb3p-808, 0.0, 0x1.186d3af7378a4p-919,
     0x1.04a95413b05eap-339, 0.0, 0.0, 0x1.e6a526225dad5p-712, 0x1.eef0224df85ebp-305,
     0x1.f388d3165779fp-969, 0.0, 0.0, 0x1.d3d77d77a395dp-926, 0x1.dbc0cb675d67cp-286,
     0.0, 0.0, 0x1.d733e9610fed9p-14, 0x1.8e1b182f9e11p-237, 0.0, 0.0, 0.0,
     0x1.44171ccdbb51dp-218, 0x1.10c15cf14f7a2p-932, 0x1.1f229339d023fp-615,
     0x1.4520918f52f01p-453, 0.0, 0.0, 0.0, 0x1.d914253103795p-294,
     0x1.b749fb97fcee9p-5, 0x1.bef7e4d95262ap-849, 0x1.c1811fc1a8779p-648,
     0x1.e2c6b1752072bp-126, 0.0, 0.0, 0x1.8d68301bcad9cp-413, 0x1.ef2ea5f3ee239p-220,
     0.0, 0.0, 0x1.b1064a991fe52p-911, 0x1.2a99a4e5a85bp-589, 0x1.78d43936f1087p-129,
     0x1.f8653bb793847p-808, 0.0, 0x1.89de0dbe2c0fep-570, 0.0, 0x1.a7a44d122886fp-111,
     0x1.0687aac90d064p-1012, 0.0, 0.0, 0x1.e5e8ae90c913fp-856, 0.0, 0.0,
     0x1.ff8579440fbaap-965, 0x1.c7c5125a94ceep-800, 0x1.8b367f12eb9dap-411, 0.0, 0.0,
     0x1.1fe22cb3fd786p-425, 0.0, 0x1.e402ad3433383p-669, 0.0, 0.0,
     0x1.360cd3c903b5ep-664, 0.0, 0.0, 0x1.a841a0bc9323p-4, 0.0, 0.0,
     0x1.cd4f7a0b18ae9p-888, 0x1.457be5ba806b2p-533, 0x1.9e2301d4595a8p-128,
     0x1.e3fbff64b788bp-382, 0x1.a6685d2b706bfp-13, 0x1.ef6bc7e2e096p-479,
     0x1.e64f037bf9b46p-717, 0.0, 0.0, 0.0, 0.0, 0x1.6e1c1c91b64c1p-607,
     0x1.9f4ac2f849936p-613, 0.0, 0x1.6f08462bbe259p-677, 0x1.8060c6d28e1e2p-114, 0.0,
     0.0, 0x1.50519625c0787p-725, 0x1.91d4d8f33bf2bp-1, 0.0, 0.0,
     0x1.792b11a337862p-512, 0.0, 0.0, 0.0, 0x1.525bc4ac7a3f6p-739,
     0x1.f991a5bea4d31p-603, 0x1.01602d85373aep-65, 0.0, 0x1.4461b68c9dd0dp-289,
     0x1.353d80757c654p-624, 0x1.d64e24f216087p-42, 0x1.2fd8c2c628c19p-665,
     0x1.2301ef91a1c16p-300, 0x1.0be1934a21292p-1007, 0x1.66d500d119db2p-148, 0.0,
     0x1.fb98301dfed06p-282, 0x1.e0b8dbfd3cbc3p-774, 0.0, 0x1.b50a9eb2d092bp-350, 0.0,
     0.0, 0x1.f49adcd1aad2cp-988, 0.0, 0x1.a1befb0725613p-941, 0x1.225743925b338p-62,
     0x1.5a9ef0ee5526ap-935, 0x1.1168762d22449p-850, 0x1.9d081ccfb4742p-694,
     0x1.44ea596c82159p-429, 0.0, 0x1.7bb2212bd87c9p-545, 0x1.c450b7853a2d6p-326,
     0x1.f2d5df7678f81p-572, 0.0, 0x1.4b75f8e574717p-533, 0x1.19c74a1217101p-15,
     0x1.526fb0dab47a2p-972, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0x1.423a3a4d5b25ap-630,
     0x1.0e04febf00141p-940, 0x1.1dd2f1f83a826p-96, 0.0, 0.0, 0.0, 0.0,
     0x1.1f26f99963376p-1013, 0x1.e1da120fc6daap-719, 0.0, 0x1.7aa09b539da79p-497,
     0x1.5bbaa0d71f42ap-463, 0.0, 0x1.69aaffb48ebfbp-958, 0.0, 0.0, 0.0,
     0x1.c96f47b9e2c1fp-581, 0.0, 0.0, 0.0, 0.0, 0x1.631fd43bcd168p-983, 0.0, 0.0,
     0x1.482f24ce666bep-520, 0.0, 0.0, 0x1.63cd4e7e62a0ep-804, 0x1.3ecc6c9507352p-36,
     0x1.b7039218a3c0ep-604, 0.0, 0x1.405030462f036p-944, 0.0, 0.0,
     0x1.e3aa6f7b29e0ep-693, 0x1.bbebce0f8f569p-286, 0x1.8c150c75c8c2fp-266, 0.0, 0.0,
     0.0, 0.0, 0x1.6dce4379c08f1p-93, 0x1.23c1e37e58d71p-484, 0.0,
     0x1.6e9358e03e366p-912, 0.0, 0x1.6e7b5204de504p-648, 0x1.0b84b3531e9bdp-460,
     0x1.039e0ab42aed6p-735, 0.0, 0.0, 0x1.01a5d66b5f4e6p-780, 0x1.a8ad69d1b8a07p-79,
     0x1.de70fd6a0751dp-188, 0x1.9a923c4fc81cp-9, 0x1.838c68a70a40dp-436,
     0x1.2e567e490e1ebp-951, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da93ae4724beap-59, 0.0,
     0x1.6f4a6e4964a39p-281, 0.0, 0.0, 0x1.d44cc3964dbbcp-1, 0x1.97f2594a5424p-304,
     0.0, 0.0, 0.0, 0x1.34e8bd794a242p-206, 0.0, 0.0, 0x1.73f1186ca021ap-805,
     0x1.c88c0cbef4b33p-964, 0.0, 0.0, 0.0, 0x1.f1cb903d836cap-706, 0.0,
     0x1.91387820d75a9p-309, 0.0, 0x1.f2b854caa844dp-826, 0.0, 0x1.6c83abed740eep-187,
     0x1.afe40bc63f4dp-539, 0.0, 0x1.6cc0ed14c4681p-743, 0.0, 0.0,
     0x1.915d59645b939p-474, 0x1.bf98e8874d38bp-574, 0.0, 0.0, 0.0,
     0x1.d97ce144e04d9p-211, 0x1.0e336b94d72dep-508, 0x1.2e1b7e9e2fd94p-866, 0.0,
     0x1.b86065da0d538p-912, 0x1.8b6e0643e8a21p-425, 0.0, 0x1.dc6ea81741841p-48, 0.0,
     0x1.6a8bcdd881794p-763, 0.0, 0x1.26a2b54bf6c17p-465, 0x1.64e228addc139p-774, 0.0,
     0x1.0740514183cccp-756, 0.0, 0x1.cb47ef36e9e01p-60, 0x1.67044b7dab072p-694, 0.0,
     0.0, 0x1.c27c6026f5567p-627, 0x1.05e38913647d4p-309, 0.0, 0x1.e245a3b81db1fp-725,
     0x1.129cb7da4052dp-454, 0.0, 0.0, 0x1.a3d65013fb1bap-465, 0x1.5d329eda87e5ep-786,
     0.0, 0x1.e1cce21b3987ap-971, 0x1.8bd2ad3ecb9ccp-118, 0.0, 0x1.2ce71f0ca529ap-132,
     0x1.eb7e3f81a76ap-879, 0x1.552de463cae18p-180, 0x1.a7e505c882626p-425, 0.0, 0.0,
     0.0, 0.0, 0x1.8a5a279350ebbp-228, 0x1.b4f48fefe0ae9p-1013,
     0x1.26e28e1762bd5p-343, 0.0, 0.0, 0x1.d978536232e3cp-801, 0x1.0be49e19e625ep-625,
     0.0, 0x1.ec912674f9b72p-33, 0.0, 0.0, 0.0, 0x1.122a4d0b8e7d5p-867,
     0x1.e8057c59c6913p-75, 0x1.c1e2eb696fe94p-965, 0.0, 0x1.4253f23e0e0cap-239,
     0x1.0c81befdecf53p-588, 0x1.673b2086e5b7ap-706, 0x1.78c7107214449p-285, 0.0,
     0x1.11681556390c4p-63, 0.0, 0x1.2281f27ba94afp-38, 0.0, 0x1.7bab6ffd8082bp-45,
     0x1.1a73e1f196d7bp-594, 0x1.55aa63062bbafp-364, 0.0, 0.0, 0.0, 0.0,
     0x1.cd61882ba418ap-520, 0x1.d8477e301443p-672, 0x1.aaa06bdea1309p-921,
     0x1.dd261234637f1p-1016, 0.0, 0.0, 0x1.18796ce069de9p-809,
     0x1.0323f89ab59f6p-274, 0.0, 0x1.384b8a8567d8ap-292, 0x1.7f295104ee1cfp-159,
     0x1.d989dbda1272ep-419, 0.0, 0x1.113c693f7d0dbp-4, 0.0, 0.0,
     0x1.d31350572b8fbp-481, 0x1.cfb5bbbd7f4f5p-524, 0x1.8b4e4ce596456p-399,
     0x1.807bd9438b894p-511, 0.0, 0x1.0c5797665c22cp-480, 0.0, 0x1.bc636113d06cep-848,
     0.0, 0x1.6d3c3e0054003p-35, 0x1.64f42b86235cfp-98, 0x1.3b3476783cc3cp-760, 0.0,
     0.0, 0x1.f2d0345c18331p-754, 0x1.c459661903e55p-953, 0x1.41aece7648431p-715, 0.0,
     0.0, 0.0, 0x1.8e5ff5861829p-938, 0x1.88d3e89631328p-173, 0x1.b720d7ea87525p-865,
     0x1.c320ccf81bd6cp-305, 0.0, 0.0, 0.0, 0x1.4b1d040bceb7cp-355,
     0x1.1444c24cb5d78p-100, 0.0, 0.0, 0x1.1738d5165f196p-463, 0x1.b56a1f8c3504ap-702,
     0x1.80be2a517346fp-184, 0.0, 0.0, 0x1.eb93a71e0f025p-768, 0.0, 0.0,
     0x1.1586248ec44b3p-954, 0.0, 0.0, 0x1.80f3846129ae9p-490, 0.0, 0.0,
     0x1.de4c95a85eb36p-738, 0.0, 0.0, 0.0, 0x1.1900fc5edb0b3p-513, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.707ed92d2b883p-309, 0x1.a080a4fb97de7p-943,
     0x1.c407efcf6acd4p-257, 0x1.0052861ebe7f5p-438, 0x1.2109f8fccaa85p-682, 0.0,
     0x1.c80f9d36ee3d7p-784, 0x1.602ded4708f72p-991, 0.0, 0.0, 0x1.32b49af8196dfp-316,
     0.0, 0.0, 0.0, 0x1.2a419c4ac3ffdp-848, 0.0, 0x1.8cd8b373b5babp-390, 0.0,
     0x1.ce0da7c97f877p-623, 0.0, 0.0, 0.0, 0x1.00ddf9a3b4147p-670, 0.0,
     0x1.e0a7f94ecaa26p-127, 0x1.6f18f9c74150bp-336, 0x1.90a1a948722bep-870,
     0x1.d06c383824eafp-940, 0x1.b64b9bc7865b6p-533, 0x1.4e0b28ddf8c73p-688,
     0x1.57b0524e5c473p-659, 0x1.911063bef02adp-635, 0.0, 0x1.25459500f6a8ep-673,
     0x1.b930705b4d269p-761, 0x1.0142a8a3681c1p-58, 0.0, 0x1.f91f9c8550599p-1019,
     0x1.01a1a7cecb9dcp-894, 0.0, 0x1.0767c4d831236p-517, 0x1.9b973977b3cbcp-262,
     0x1.e9a5bcd63291fp-926, 0x1.ba0ac2d1ca4c2p-463, 0x1.6271abf0ed76bp-966,
     0x1.5bc9c96aca47fp-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3382c13d3061bp-62,
     0x1.920b53992cb62p-552, 0x1.86d653b1cfe1fp-615, 0x1.8d1d21471164dp-353, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.800376737e68fp-332, 0.0, 0.0,
     0x1.789fd3a721887p-786, 0.0, 0.0, 0.0, 0x1.a8112a3ad776fp-302, 0.0, 0.0, 0.0,
     0.0, 0x1.8c506931e42e4p-465, 0.0, 0.0, 0.0, 0.0, 0x1.04e03e55d8fb4p-528,
     0x1.13c4fb600a571p-720, 0x1.6a703dc57858ep-978, 0.0, 0.0,
     0x1.d1b761c253d75p-1012, 0.0, 0x1.dff2ea7aed903p-689, 0.0,
     0x1.bf51fb8e707fbp-139, 0.0, 0.0, 0x1.d1cfe6102611ap-323, 0.0, 0.0, 0.0,
     0x1.ee593572167c3p-632, 0x1.24125be8b1bffp-960, 0.0, 0x1.0e0ce9dab316cp-1007,
     0x1.9fb6800b4e1e6p-525, 0x1.32b20118e89ddp-172, 0x1.4ad57ebb7ea1fp-219,
     0x1.4143bdcd69567p-768, 0.0, 0.0, 0.0, 0x1.5864477360468p-750, 0.0,
     0x1.99d2908e217bap-899, 0.0, 0.0, 0x1.7e55cdc8f631fp-879, 0x1.46cd373fe02cfp-596,
     0x1.3e5af192a2d25p-596, 0.0, 0.0, 0x1.150797fd77558p-423, 0.0,
     0x1.01734c1e3d432p-356, 0x1.347b881d267c6p-811, 0.0, 0x1.e0311059e22d4p-726, 0.0,
     0x1.1ac475d7da6dep-866, 0.0, 0x1.90c002b9a79aep-573, 0.0, 0x1.9a3ce95a824ebp-598,
     0x1.5a05b22305fcap-882, 0.0, 0x1.066e7cbb3e8p-431, 0x1.9fcaa1e459ea6p-1015, 0.0,
     0.0, 0x1.6fbf1153b2e2bp-507, 0.0, 0x1.b4e2ee9685278p-583, 0x1.587c5f40b5867p-122,
     0x1.a9a217807a6d2p-332, 0x1.5c344e39377b6p-715, 0.0, 0.0, 0.0,
     0x1.2213c8771d25fp-39, 0x1.ad20c8f34e87bp-374, 0x1.6711cd4c61813p-715,
     0x1.596b621aded6bp-856, 0.0, 0.0, 0x1.a574cd7e1a612p-156, 0.0, 0.0,
     0x1.e3dddc5b0a5eap-547, 0.0, 0x1.8bb9595de2a6ep-748, 0.0, 0x1.a7b13b60abe7ap-32,
     0.0, 0.0, 0x1.a871f74e5cf79p-296, 0.0, 0.0, 0.0, 0.0, 0x1.518b0c39d4593p-450,
     0x1.d90ef848c1ef7p-573, 0x1.809e93960d76ep-926, 0x1.5e223d696bcc2p-900, 0.0, 0.0,
     0x1.d0a13d2a13b77p-695, 0.0, 0.0, 0.0, 0x1.9a2e3673e1c55p-719, 0.0, 0.0,
     0x1.4cf1e50fb3dd3p-153, 0.0, 0x1.cacea012d290ap-851, 0x1.72622cb04c8e4p-288,
     0x1.508f63e7c2954p-207, 0.0, 0.0, 0x1.801fc7eed1a4ap-719, 0x1.cdb62efc33a84p-522,
     0.0, 0x1.01fab8b22f0f5p-126, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c932f217a8c4p-839, 0x1.be16e171a10abp-353, 0x1.8f45791ffba1cp-772, 0.0, 0.0,
     0.0, 0x1.c726aa835d07dp-41, 0.0, 0x1.9f078cd6f3384p-956, 0x1.391f74038812ap-56,
     0x1.ec7c98fca30a6p-812, 0x1.3c21cd2d235d6p-270, 0x1.c860fec5075f5p-441,
     0x1.62a47faa9b656p-837, 0.0, 0x1.207cfc711d415p-19, 0x1.806af2e5591bep-825,
     0x1.fa22f859eced4p-466, 0x1.7519ca0665491p-137, 0.0, 0.0, 0.0, 0.0,
     0x1.b1800bbec9c61p-268, 0x1.3ad2f98630c8bp-587, 0.0, 0.0, 0x1.24e824d78452fp-750,
     0x1.030ebec235139p-154, 0.0, 0x1.56d603f0f0db1p-622, 0x1.bb36b95b3297ap-267, 0.0,
     0x1.67c92d6d9f18cp-566, 0x1.ebb8e84af7b89p-999, 0x1.17c73df9edb34p-226, 0.0, 0.0,
     0x1.22a6869fa4fc6p-922, 0x1.1af924f21d1bfp-423, 0x1.e0f0949a20307p-63,
     0x1.fd3a691605ccep-171, 0x1.15b4a5f9731edp-130, 0x1.bc60a0498f87dp-524,
     0x1.e480b4634c8a9p-932, 0.0, 0.0, 0x1.b4b4957d5ad47p-727, 0x1.de9913b102fa6p-783,
     0.0, 0x1.fe672f1325a43p-103, 0x1.1edf98cad2386p-156, 0.0, 0x1.57166ceb57be7p-531,
     0x1.0f3c00d9554b8p-733, 0x1.44d540012c826p-158, 0.0, 0.0, 0x1.e2c1c9ced5944p-508,
     0x1.5decfe28f5443p-159, 0x1.0bf092cbc45cp-481, 0x1.66de70e00fb18p-557, 0.0, 0.0,
     0x1.7a9cef4197411p-448, 0x1.23116961b2ce7p-934, 0x1.206336792bedbp-511,
     0x1.7b8f5aafcb2adp-54, 0x1.572563d5133d9p-262, 0x1.953630ef81293p-431,
     0x1.38c8ba03b23eap-236, 0x1.51bcf39b3515ap-313, 0.0, 0.0, 0x1.caff0d071c89dp-976,
     0.0, 0x1.0c967cde3c70bp-403, 0x1.633319919ba63p-290, 0x1.107cff656b9afp-73,
     0x1.2acf57fca3e48p-954, 0.0, 0x1.685aa111b55b4p-512, 0.0, 0x1.25c4ac409ecc4p-171,
     0x1.4984b6d2f34bbp-53, 0.0, 0.0, 0.0, 0x1.64daa23e1f4d9p-273,
     0x1.83a8e210c6e9ep-923, 0.0, 0x1.2864f4cc30847p-710, 0.0, 0.0,
     0x1.17ed0b904f088p-377, 0.0, 0x1.175c5bafa2297p-854, 0.0, 0x1.e0475b1bcc133p-800,
     0.0, 0.0, 0x1.2eb8f42ce6b23p-140, 0x1.7ee883c29956fp-1021, 0x1.6f7a86d3aa75p-527,
     0.0, 0.0, 0.0, 0x1.d6ae9c44956cep-298, 0x1.8bbcbdab8bd6p-357,
     0x1.e4808dc9737bcp-311, 0.0, 0.0, 0.0, 0x1.e6fede31c1027p-25,
     0x1.108409c68709ap-601, 0.0, 0x1.8a196d1593326p-581, 0.0, 0.0,
     0x1.0e1f1fb49471bp-143, 0x1.9979fa1f55a6dp-590, 0.0, 0.0, 0x1.3df120af6bcdap-348,
     0.0, 0x1.e06b6e45eacd6p-778, 0.0, 0.0, 0.0, 0x1.5f7c46c26a3a3p-310, 0.0,
     0x1.28b6de6fd282fp-40, 0x1.2d56e4f65f2d2p-580, 0.0, 0x1.287ef4e10b1c9p-199, 0.0,
     0x1.87842237e7d77p-661, 0.0, 0.0, 0x1.a591e675d1fffp-700, 0x1.ae214be8dcd6bp-841,
     0x1.ea0504bd00654p-596, 0x1.8137444acb4e9p-64, 0x1.d42e64f039e39p-443, 0.0,
     0x1.b97edb9b6200cp-187, 0x1.43160eae4b88ep-177, 0.0, 0x1.797eb28e68bebp-495,
     0x1.839a5128c45c5p-608, 0.0, 0x1.af1c96630159fp-403, 0.0, 0x1.78c2fca52db3fp-154,
     0.0, 0.0, 0x1.15aae8b9cc7e5p-260, 0x1.e7e689016d5b6p-98, 0x1.89a578825da8p-579,
     0x1.51fef0cc11bedp-1013, 0.0, 0.0, 0x1.be931f6344e8p-562, 0.0, 0.0, 0.0,
     0x1.13153d906957dp-331, 0x1.308ab4de61046p-432, 0x1.f812da895a812p-165,
     0x1.698d65468b073p-360, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc0c8c637ecedp-928, 0.0, 0x1.93c56247b9ebdp-527, 0.0, 0.0,
     0x1.648f75fab66bfp-804, 0.0, 0x1.9cb69f6b259c1p-874, 0x1.1363b91a4f5dap-785
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
            tmp1 = Sleef_finz_logd2_u10kvx(tmp0);
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
    printf("Sleef_finz_logd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_logd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
