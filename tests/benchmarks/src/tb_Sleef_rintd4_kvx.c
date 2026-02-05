/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintd4_kvx.c --function Sleef_rintd4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.f8eb96b1fb775p-667, 0x1.1c914e15cf38ep-831,
     0x1.92d4f35678849p-972, 0.0, 0x1.c2f0bd642c782p-818, 0x1.9cc476ea134fap-762,
     0x1.cfc947e008bb3p-114, 0x1.7c3aeb921697dp-175, 0.0, 0x1.fc95394364e63p-577, 0.0,
     0x1.cfb8cf3515dc4p-182, 0.0, 0.0, 0.0, 0.0, 0x1.f92ef8b2c9ea1p-989,
     0x1.5e7b237f6eb0ap-251, 0.0, 0.0, 0.0, 0x1.63248837e9042p-183,
     0x1.bfb07ba28715dp-426, 0.0, 0.0, 0x1.dd7f6e84debedp-184, 0x1.7d6c155b9b34bp-142,
     0x1.9d706c83a44ebp-91, 0x1.f53354052accap-868, 0x1.049fcb415166p-230, 0.0, 0.0,
     0x1.910a02ba9fa61p-830, 0x1.eac0f2699d0a1p-216, 0x1.f3087036d76ccp-232, 0.0, 0.0,
     0.0, 0x1.28970f281d4e7p-898, 0x1.5b68672a45058p-16, 0.0, 0.0, 0.0,
     0x1.d1d88ca5a5721p-409, 0.0, 0.0, 0x1.80f1b56f9f4cap-297, 0x1.0444e9fa12212p-334,
     0x1.bc071ee8e093p-645, 0.0, 0.0, 0x1.2a498d9e8f376p-404, 0x1.927452d86fe69p-399,
     0x1.1fe5d9d37835ep-111, 0.0, 0x1.ca624a90dd3bcp-557, 0x1.3e67a2813d231p-870,
     0x1.c984e9e8d5b7p-144, 0.0, 0.0, 0x1.3d17ebf882406p-359, 0x1.3eaa85734607cp-633,
     0.0, 0x1.2b5487be7fc75p-348, 0x1.2e9a307d64447p-495, 0x1.9d90de17f0c87p-219,
     0x1.3f021b9e8b11fp-482, 0.0, 0x1.2a84cf7d95919p-481, 0x1.712536be3c917p-829, 0.0,
     0.0, 0.0, 0.0, 0x1.e0bab9f7167c2p-628, 0.0, 0.0, 0x1.a11aaeeb3349bp-1017,
     0x1.afda5f28ea726p-629, 0x1.9c75b30394d62p-406, 0x1.e25fcf38a7e62p-1, 0.0, 0.0,
     0x1.0ac5a18a8e149p-569, 0x1.57e76799daf07p-321, 0x1.bfdfc95c2ff7ap-966,
     0x1.ffbc5340457a8p-274, 0.0, 0x1.e093794afc6afp-664, 0x1.af596a2d9d1ap-40, 0.0,
     0x1.2e530f3b552d6p-294, 0x1.6392c671667e9p-81, 0.0, 0.0, 0x1.bf2b2f2cb5cffp-51,
     0x1.f40a0d1ed3bf9p-114, 0.0, 0.0, 0x1.e3ead31222d2ep-432, 0.0, 0.0, 0.0, 0.0,
     0x1.1e41b18ff6566p-574, 0.0, 0.0, 0.0, 0.0, 0x1.cde92bc86e61ap-134,
     0x1.2b0bd470c5106p-253, 0x1.8fb829d9ab125p-369, 0x1.1d29bf5cba283p-990, 0.0, 0.0,
     0x1.3bec4ba29952p-586, 0.0, 0x1.585cfb307423fp-162, 0x1.896e33fac0232p-4, 0.0,
     0.0, 0.0, 0x1.0188bf5879a54p-245, 0x1.dad92003371a8p-279, 0x1.e3610804743d4p-477,
     0x1.1fba878fe53c6p-119, 0x1.5a8d2a986fcffp-396, 0x1.86ff73e892a3bp-835, 0.0,
     0x1.19199fbaeb2fap-884, 0.0, 0.0, 0x1.4ffb4c3d2460cp-810, 0x1.ed074eef74b91p-215,
     0x1.5e21839cfb8bcp-849, 0x1.49d8006d833b4p-855, 0.0, 0x1.28c465b7f9848p-571, 0.0,
     0.0, 0.0, 0x1.6048f2f9abec3p-370, 0x1.65aef5298b778p-595, 0.0,
     0x1.19a14af6ce11fp-316, 0x1.49d7e00a909e5p-987, 0x1.17e8a051a4877p-255, 0.0,
     0x1.8e819437966b2p-193, 0x1.a22b8c54ed4ffp-698, 0x1.a1b245081820cp-692,
     0x1.042c11067f1ebp-944, 0.0, 0.0, 0x1.5eea801c5d31p-863, 0x1.bb137449ea939p-191,
     0x1.e1bd494abf143p-374, 0x1.99838e4c290eap-888, 0.0, 0x1.979936be59416p-379, 0.0,
     0x1.64ce0246e6575p-688, 0.0, 0.0, 0x1.0a77480845462p-687, 0.0,
     0x1.190fefc37de31p-26, 0.0, 0x1.55f7a970a82bap-207, 0.0, 0x1.d58eba0433638p-378,
     0.0, 0x1.bc26a981e2669p-757, 0x1.e853f7e13c58bp-276, 0.0, 0.0,
     0x1.e3559cb0aed9bp-591, 0.0, 0x1.57a8518248a04p-686, 0.0, 0x1.13214189bef8ep-639,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11a9789f5b017p-827, 0.0, 0.0,
     0x1.2a07930d8cfabp-332, 0x1.d6ce48913ca83p-120, 0.0, 0.0, 0.0,
     0x1.3003f3fc2368bp-540, 0x1.1a84aa4f104d5p-41, 0.0, 0.0, 0.0,
     0x1.49babf5a2a794p-1010, 0x1.6f128099e5c4ep-291, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b49f40e903e55p-65, 0x1.50b0cafa9c68ep-836, 0x1.a113a6d125a15p-881,
     0x1.7d85b3933e1c7p-1012, 0x1.28683df83a76dp-115, 0x1.c70657f1276cfp-124, 0.0,
     0x1.8af0420bb7ef9p-923, 0x1.9c93fc9efb9edp-503, 0.0, 0x1.c628c16c0d151p-830, 0.0,
     0.0, 0.0, 0.0, 0x1.fc32360eec67ap-231, 0x1.99a566217cd9ap-551,
     0x1.d72ac983db363p-939, 0.0, 0.0, 0x1.b35365877aedep-586, 0x1.24e0cd38af595p-642,
     0.0, 0x1.91a714212c614p-807, 0.0, 0.0, 0x1.4aa94501a8d32p-612,
     0x1.3332700f2213p-672, 0x1.a46e240d39406p-907, 0x1.7403015f3ef55p-695,
     0x1.20f8d922f325p-771, 0x1.203e0356a8584p-338, 0.0, 0x1.b11398c6c874fp-822,
     0x1.a650266baf5a2p-58, 0.0, 0x1.d1efef4cd5fdp-19, 0x1.512bd6b5dac5p-322,
     0x1.8906fab3de793p-1006, 0x1.6336a4d82ad24p-957, 0.0, 0x1.be7e21ac7a626p-245,
     0x1.c77c8573bba3fp-731, 0.0, 0.0, 0.0, 0.0, 0x1.afb847f45cf44p-679, 0.0,
     0x1.d33d4846ce105p-840, 0.0, 0x1.f5b7b256efae1p-723, 0.0, 0.0, 0.0, 0.0,
     0x1.425c0a7d55d54p-772, 0.0, 0x1.5478279a8e756p-558, 0x1.44f90e03eda0bp-636,
     0x1.fd58b72828815p-152, 0.0, 0.0, 0x1.219890b7e6e93p-243, 0x1.85aab4d582547p-75,
     0.0, 0x1.f084954abddd6p-404, 0x1.54bd9c313d5p-809, 0x1.3dcc54dfb8dcep-734, 0.0,
     0.0, 0.0, 0.0, 0x1.58669d1f30adcp-255, 0x1.e3098ac6fa3afp-511, 0.0, 0.0,
     0x1.a06c08f60b619p-141, 0x1.7d3f383e8f65cp-753, 0.0, 0.0, 0x1.d892c5f7dea66p-241,
     0x1.d09a1e38a493dp-52, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f3d155855af1p-24,
     0x1.391d71348fd76p-272, 0.0, 0.0, 0x1.f7d9e0fbfea1dp-183, 0x1.f33dd6bd6df95p-180,
     0.0, 0.0, 0x1.33d301f04d867p-308, 0.0, 0x1.13a25ed908e65p-926, 0.0,
     0x1.1d53b44116e45p-151, 0x1.6261d2a5ce36fp-871, 0.0, 0x1.df2d4913dd673p-62,
     0x1.9a4fde08a0038p-543, 0.0, 0.0, 0.0, 0.0, 0x1.a914e13d65f39p-221,
     0x1.699fa625f5fafp-897, 0x1.ee7a8eaf2c59dp-112, 0x1.8be99549ad11p-293,
     0x1.42fa6d729488bp-74, 0x1.28a3749e18721p-200, 0.0, 0x1.efe1d7101a3ap-321, 0.0,
     0.0, 0x1.ae224d576f965p-888, 0.0, 0x1.2adf40f187229p-313, 0.0,
     0x1.aa0bc0f029c2bp-813, 0.0, 0x1.48deb0ced5dp-130, 0.0, 0x1.e98a839b76665p-47,
     0.0, 0.0, 0x1.4cc8708323229p-768, 0.0, 0x1.214ab51e7657bp-672,
     0x1.50c427909a8p-654, 0x1.50fb41d231141p-911, 0.0, 0x1.6ed9904100187p-166,
     0x1.02f0eebc195cbp-872, 0.0, 0.0, 0x1.0f5e3a489dfp-896, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ae82eed5cb78ep-772, 0x1.d4d68ed2c4936p-338, 0x1.5a690afe4aa89p-453, 0.0, 0.0,
     0.0, 0x1.8a150fc1b04e1p-180, 0x1.9d30dc5fa33cap-607, 0.0, 0.0, 0.0,
     0x1.2e17685fd058p-997, 0x1.4cd1ee51f111fp-49, 0x1.838afb29e1876p-636,
     0x1.a85a6a81d661bp-945, 0.0, 0x1.3bcbff6a3c59fp-719, 0.0, 0x1.a5b1915820afdp-451,
     0.0, 0x1.c48ec7fb61df1p-393, 0x1.c5a88109f3e64p-562, 0.0, 0x1.dcfd6d1392e52p-319,
     0.0, 0.0, 0x1.e7d401a9b8eddp-576, 0.0, 0.0, 0x1.5ec7611c90387p-705,
     0x1.a8ee7a8bde9aap-649, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17301610a644ap-680,
     0x1.4251fef18ad81p-984, 0x1.98ee95684fd21p-936, 0x1.3a6f2c0d5210ap-826, 0.0, 0.0,
     0x1.23ef43e876a2p-687, 0.0, 0x1.239e2e768b281p-651, 0.0, 0x1.b1483c6102499p-842,
     0.0, 0x1.e4d3a169ecf5ap-894, 0x1.4b3eb02ae8c03p-383, 0.0, 0x1.8f887726a837ep-238,
     0.0, 0x1.1d90abaa3e45dp-69, 0x1.a93a7fadf8c6fp-805, 0x1.b02b693cfb715p-899,
     0x1.cc2ae6a88997ep-167, 0x1.8a508ee374f3ep-1009, 0.0, 0.0, 0.0,
     0x1.b65de27e5a61p-988, 0.0, 0x1.36db9419a53a9p-490, 0x1.c09158f249216p-284,
     0x1.148ebbbbd7a95p-248, 0.0, 0x1.5df6590c3cc4cp-309, 0x1.4ece864534082p-366, 0.0,
     0x1.420be904d9885p-813, 0x1.aa2cb4a52b496p-987, 0.0, 0.0, 0.0,
     0x1.e88088d88309dp-493, 0x1.b1807683ef08fp-593, 0.0, 0x1.f8012b6ded53ep-533, 0.0,
     0x1.fc22d587d7a6ep-869, 0x1.9b548971cadc2p-556, 0x1.b249311dfcd15p-962, 0.0, 0.0,
     0x1.a25f4ea2d65ebp-550, 0x1.a017d1ba0fa6fp-924, 0x1.c6ea59f7370c6p-51,
     0x1.cc32acac87af4p-448, 0.0, 0.0, 0x1.6e61a2e0c11f9p-651, 0x1.b6d6ef037d486p-117,
     0x1.9247d6233f6cp-307, 0x1.66a632e3b6f1p-208, 0x1.600be42e38324p-790,
     0x1.561d75ef76abcp-815, 0.0, 0x1.a3c652294b897p-838, 0.0, 0.0,
     0x1.59d38d7f71d3p-365, 0.0, 0x1.89f7c68b2e1adp-285, 0.0, 0.0, 0.0,
     0x1.94b3016203b13p-937, 0x1.709946a5db796p-489, 0x1.3840fbd14634p-893, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a9f4d5f00f066p-68, 0.0, 0.0, 0.0, 0x1.75495f53d49c2p-516, 0.0,
     0x1.c8c7448b8efeep-255, 0.0, 0x1.c317aebdf0b93p-688, 0x1.688a7b770d1f5p-792, 0.0,
     0x1.f1c47933f9a56p-234, 0x1.8b935504d51ccp-324, 0x1.02c5a40907d56p-304, 0.0, 0.0,
     0x1.fd420e5d18185p-612, 0.0, 0x1.3357924859926p-206, 0x1.34bf9578bce11p-839, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d95fed7034ffep-593, 0.0, 0x1.0297a59aaec2dp-435,
     0x1.d551e2bb3a28bp-684, 0.0, 0x1.4b91decd34fe4p-960, 0.0, 0x1.2e87c24bc3a41p-6,
     0.0, 0x1.b954f8471cba4p-904, 0.0, 0x1.530bf6f46e6adp-573, 0.0, 0.0,
     0x1.2eb8257a3a16fp-641, 0x1.13f8def33bec1p-893, 0x1.2eff1d1ada72dp-530, 0.0, 0.0,
     0x1.8568a875273e8p-870, 0x1.9aa7dd5bc0abep-1019, 0x1.a364e5f5c0dfp-554, 0.0,
     0x1.3d0f0b3796ab4p-240, 0.0, 0x1.12b91c264f272p-761, 0x1.698e0ebe9b9aap-184, 0.0,
     0x1.2bc37827e8cc6p-982, 0.0, 0.0, 0x1.96f14bb870c82p-538, 0x1.3ea8a5d83e558p-406,
     0x1.d746939356c73p-276, 0x1.96179ae6fd509p-592, 0x1.6939e42f10bb1p-928, 0.0, 0.0,
     0x1.2f7d259c587fbp-355, 0.0, 0x1.890f9fa2e3f2bp-560, 0x1.7643ced2b8763p-996,
     0x1.7bf039f990249p-996, 0.0, 0.0, 0x1.10181588ed459p-887, 0.0,
     0x1.1fcb71e521231p-738, 0x1.cd66cf32458d7p-838, 0.0, 0x1.fb8a2365fe081p-90, 0.0,
     0.0, 0x1.26b6c79d550bcp-977, 0x1.c60383d73df44p-274, 0.0, 0.0,
     0x1.6a2ef3a243c6ep-156, 0.0, 0x1.e6564a0f57a37p-293, 0x1.37c6ada3a5f5bp-283, 0.0,
     0x1.04142914e462fp-137, 0.0, 0.0, 0x1.314f349c12d69p-595, 0.0, 0.0, 0.0, 0.0,
     0x1.a42375454b4cap-287, 0.0, 0x1.8a55fc66e0a91p-333, 0.0, 0.0,
     0x1.dfa0541314892p-639, 0x1.a9db3033654aap-951, 0.0, 0x1.07b032df1a974p-487, 0.0,
     0.0, 0.0, 0.0, 0x1.c013ebcfe54bbp-428, 0x1.4aa5e7efae3ebp-826,
     0x1.8fdf5dd2ac4d1p-240, 0.0, 0.0, 0x1.d70cb7d45dfcep-508, 0x1.80463356eeab9p-348,
     0.0, 0x1.e31cc31a31505p-983, 0.0, 0x1.11b4af002ce92p-625, 0.0,
     0x1.434b885e48672p-354, 0.0, 0x1.749e9f54a2029p-30, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5f25b3b60caep-836, 0.0, 0x1.3708449dd27a9p-436, 0.0, 0x1.d46d059b5499ap-946,
     0.0, 0.0, 0x1.cc4b51037a003p-273, 0x1.be7472c6a64e6p-161, 0x1.dd9dd90d8be59p-55,
     0x1.884e3e1ba0c85p-550, 0.0, 0x1.1e28acc5b941ep-706, 0.0, 0.0, 0.0, 0.0,
     0x1.a1ecefa40b2cfp-98, 0x1p0, 0x1.33608f4aa02f7p-511, 0x1.15b41db0d5736p-52,
     0x1.9b00a38b6e8a9p-910, 0x1.cf30b85eeadb8p-947, 0.0, 0.0, 0x1.90a6c447c9c6p-453,
     0x1.8e9923ce62864p-38, 0.0, 0x1.e10c3b387c9dfp-493, 0x1.d5dda5e726f3dp-30,
     0x1.c68eeef0cfd75p-170, 0.0, 0.0, 0.0, 0x1.b3d1e102e7ab7p-103,
     0x1.c0ba2624eee1cp-246, 0x1.e4cb74fcd917ap-237, 0x1.a01a73562acf3p-596,
     0x1.02fae2cfd6dep-183, 0.0, 0x1.b4ecaac2caa21p-816, 0x1.86e365385287cp-413,
     0x1.92f8adcfe31fbp-369, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53f67865a14ep-994,
     0x1.cc304420db315p-981, 0x1.6e1e8a214967ep-658, 0x1.5dd2f0751d434p-196,
     0x1.e61001b988b63p-288, 0.0, 0x1.91d405952183cp-513, 0.0, 0.0,
     0x1.30e24f7a62478p-124, 0x1.78e8ea4bab1e6p-103, 0.0, 0.0, 0.0, 0.0,
     0x1.5fa7c5c3a4d3dp-600, 0x1.4ab83eb14c09ap-747, 0.0, 0x1.28de0e0fa0a07p-332,
     0x1.5ed5f18e9aa4cp-780, 0x1.1871ca058eb69p-243, 0x1.eddbf3a45e823p-425, 0.0,
     0x1.2f0c60f5e19cep-75, 0.0, 0x1.c5eddb2c1ce2bp-424, 0.0, 0x1.e1352b8fea925p-582,
     0x1.4b55ca1ee5111p-30, 0x1.7f6055c8cb6a8p-251, 0.0, 0.0, 0.0, 0.0,
     0x1.622e327b4bcc3p-788, 0x1.be7586646a445p-318, 0.0, 0.0, 0.0, 0.0,
     0x1.7ca9d31d09587p-939, 0x1.ec0f20de0ac4ep-693, 0x1.4eca12935a335p-626, 0.0,
     0x1.9eb96680a921bp-247, 0.0, 0x1.5acd58a36de7cp-25, 0x1.c41d3679a1193p-84, 0.0,
     0x1.c782ca2e4aab7p-631, 0x1.2f5624188166ep-947, 0x1.01df8e0dd5967p-126,
     0x1.e3c9dc9ecffe1p-551, 0x1.fdb7cfcb44b08p-529, 0x1.45ba355f67437p-524,
     0x1.7bebbebd5af0dp-501, 0x1.a6785bca19b25p-119, 0.0, 0.0, 0x1.b3b37ce6d296p-996,
     0x1.2b4f115bcc101p-993, 0x1.dd6bc2d82577dp-440, 0.0, 0.0, 0.0, 0.0,
     0x1.ae96b9824f41ap-97, 0x1.832b55054cfaep-86, 0.0, 0.0, 0x1.d49b308e55cd5p-143,
     0.0, 0x1.b78119f193a2fp-249, 0.0, 0.0, 0.0, 0x1.bce80d025f51ep-79,
     0x1.c6836c9d91a6ep-710, 0.0, 0x1.33d2ce8b0e381p-861, 0x1.a495cf5ab93a6p-592, 0.0,
     0x1.266e35c532514p-187, 0.0, 0x1.42589081da66ep-432, 0.0, 0x1.5e55a7fb58afcp-332,
     0x1.41776598b5234p-439, 0x1.1fe45f817fac9p-329, 0.0, 0.0, 0.0, 0.0,
     0x1.9ff7f6e4e3284p-482, 0.0, 0.0, 0.0, 0x1.4845b4cd380ebp-291, 0.0,
     0x1.ddacef7ed1dbep-459, 0.0, 0.0, 0x1.804df5254d97fp-969, 0x1.2017f165570acp-49,
     0.0, 0x1.80337dff82d78p-869, 0x1.ed5c75e503463p-853, 0.0, 0x1.7aaae1ecfe148p-220,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bfa6f29619298p-334, 0x1.720f2664fd784p-973,
     0x1.6752fce82a9acp-375, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1a7293644a8cp-725,
     0x1.fb0979e6528f5p-490, 0x1.fda2a7fd40b09p-470, 0.0, 0x1.f5cb837dd1e1ap-920,
     0x1.a749f7c2ed1cep-555, 0.0, 0x1.72a3eb71e3fecp-373, 0x1.04461c8fbccefp-582, 0.0,
     0x1.c2cb490036762p-118, 0.0, 0.0, 0x1.f8e164ad05b56p-207, 0x1.4c18f92d6faf4p-744,
     0x1.d77dcb8f8a737p-743, 0x1.9032b18370362p-459, 0x1.578f46db88ab1p-222,
     0x1.248544752e3cep-41, 0x1.66a02d5a08567p-417, 0x1.2a5320b87ab0ap-845, 0.0, 0.0,
     0x1.b8caff72840ep-740, 0.0, 0x1.d8d75589d0f58p-92, 0x1.20bb0ece180b6p-35,
     0x1.173df86227502p-466, 0.0, 0.0, 0x1.d71c340b1a78fp-742, 0x1.f0b6d55aefc7bp-166,
     0.0, 0.0, 0.0, 0.0, 0x1.70ae63fb7acf1p-401, 0.0, 0x1.41e7f42bba3dep-150,
     0x1.e51f9368f7d9ep-214, 0.0, 0x1.c498656373c37p-1, 0x1.ef2f36d0b5ab2p-59, 0.0,
     0x1.656dc827caf4fp-986, 0x1.3c596ddb908aep-575, 0x1.84b8dfea09461p-96,
     0x1.f52b3e02665b7p-858, 0.0, 0x1.d92e92b52b8cfp-379, 0.0, 0x1.ef963a28ea87p-768,
     0x1.5267c41557427p-619, 0.0, 0x1.1dd8dce40bdfbp-945, 0x1.0f5de8aaa0902p-165, 0.0,
     0x1.c841a7bc1087ap-381, 0x1.3117272b34b49p-328, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.20b80255577d3p-306, 0.0, 0.0, 0x1.24d65dddb4dbbp-177,
     0x1.123388b5867eep-917, 0x1.bf3798764d755p-883, 0.0, 0.0, 0x1.7a88f52564558p-505,
     0x1.2502919668789p-775, 0.0, 0.0, 0x1.942d19df3a70ap-77, 0x1.333aabbbbadddp-793,
     0.0, 0x1.9664ce406ae17p-809, 0x1.d4ba5402c0371p-892, 0x1.1130e1f4d8fbfp-202, 0.0,
     0.0, 0x1.642d7c37a3687p-349, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab285b3a07389p-81, 0.0,
     0x1.6772adbfc2defp-792, 0x1.9958971d42003p-276, 0x1.92928ec395ffcp-815,
     0x1.7b47808ec2263p-394, 0.0, 0.0, 0.0, 0x1.4f253b0f8e1aap-396, 0.0,
     0x1.3a159780b0d1fp-656, 0x1.9e13c05a1a80bp-972, 0x1.d24d5a213df9bp-538, 0.0, 0.0,
     0.0, 0.0, 0x1.f3fad54c30ab8p-819, 0.0, 0.0, 0x1.ee88daefbc587p-104,
     0x1.ccc05089dbef1p-778, 0.0, 0x1.d9c3d040a56e4p-633, 0x1.ce895aff3a49fp-119,
     0x1.97102db8839dbp-732, 0.0, 0x1.6d34866c176cep-915, 0x1.0c72e5745874cp-58, 0.0,
     0x1.c8988316d3ff9p-484, 0x1.1102f0747da11p-758, 0.0, 0x1.928125acf2ac9p-182,
     0x1.043d5882960d2p-852, 0.0, 0.0, 0.0, 0x1.a68dac26d5b4cp-249, 0.0,
     0x1.2964c8934be56p-459, 0.0, 0x1.237285b3236f6p-134, 0x1.2a42f9cc7f246p-336, 0.0,
     0.0, 0.0, 0.0, 0x1.87a29a3e9aeaap-972, 0x1.7d17b158b7f26p-664, 0.0, 0.0,
     0x1.b4eb9ab014fccp-62, 0x1.6e4a4c9d7ec76p-182, 0x1.4c61bac0506b9p-142, 0.0,
     0x1.7301b14436f05p-697, 0.0, 0.0, 0x1.fec500da0ec15p-157, 0x1.4912f2ad3cf4dp-787,
     0x1.acbcabf9965c7p-320, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d43f7232bdaa4p-89, 0.0,
     0x1.955b5e21ad5e8p-231, 0x1.2e1d43b2a7267p-733, 0x1.57ddc20b7a677p-526,
     0x1.60a9202e9cba6p-357, 0.0, 0.0, 0x1.de369dc5ffa81p-308, 0.0, 0.0,
     0x1.db1ea00ff7009p-723, 0x1.5a2980e5445efp-452, 0x1.5f087cf8d3c64p-706,
     0x1.f418f8d167124p-32, 0x1.79d57a7fb8fdbp-698, 0.0, 0x1.a71dddad3ebe3p-516,
     0x1.1126827b06296p-408, 0.0, 0.0, 0.0, 0.0, 0x1.5788ca82898f7p-589,
     0x1.846ab35c4dd38p-153, 0.0, 0.0, 0.0, 0.0, 0x1.00d866c4581eep-261, 0.0,
     0x1.8890f8c095da4p-237, 0x1.207d5777f4bc2p-899, 0.0, 0x1.d0dd3940f587ap-55, 0.0,
     0x1.d2aeacd18c898p-22, 0x1.bf4eb25036335p-375, 0x1.b898d8a7cc37ep-77, 0.0, 0.0,
     0x1.a7eb13e247002p-395, 0.0, 0.0, 0x1.b3fcabbb4184cp-38, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.767b2be9bc576p-681, 0x1.07e10ce1dc475p-74, 0.0, 0.0,
     0x1.81d1eae8b0418p-132, 0.0, 0x1.b86ce1509c941p-871, 0x1.bf4e4c81640fcp-270,
     0x1.e43840986e447p-18, 0x1.63481c7015cd6p-274, 0x1.c969920ec79c3p-102,
     0x1.5e63637f3ce7bp-514, 0x1.8164fd18aa3c7p-241, 0x1.e42d1e40b267p-752, 0.0, 0.0,
     0.0, 0.0
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
            tmp1 = Sleef_rintd4_kvx(tmp0);
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
    printf("Sleef_rintd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_rintd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
