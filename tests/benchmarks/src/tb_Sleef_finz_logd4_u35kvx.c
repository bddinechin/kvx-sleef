/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd4_u35kvx.c --function Sleef_finz_logd4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.5ad7fc01521b7p-527, 0.0, 0x1.76e892dd8b2f5p-354, 0.0, 0.0,
     0x1.0760c43d10c79p-458, 0.0, 0x1.9070f9ce62847p-207, 0x1.a14c2bf863069p-203, 0.0,
     0.0, 0x1.f4f16960b394dp-268, 0.0, 0x1.7537f98460895p-387, 0.0,
     0x1.db32adc57dc53p-98, 0x1.8ac3504b0f43bp-90, 0x1.5a3e8b92bada6p-310,
     0x1.d5dcdd991796p-767, 0.0, 0.0, 0x1.077b50e535589p-401, 0.0, 0.0,
     0x1.781975f073329p-309, 0.0, 0x1.3c2b29d821d55p-59, 0x1.e62447384c27ap-267,
     0x1.d10b01d97527ap-1005, 0x1.b9f8543c52ae1p-34, 0x1.61001e6063e9bp-72, 0.0,
     0x1.b917e059b062ap-755, 0.0, 0.0, 0.0, 0.0, 0x1.eed6858d454ffp-990,
     0x1.386d3f2e6b9dep-580, 0.0, 0x1.d5e6bbad90816p-236, 0x1.8865c9d862b8dp-574, 0.0,
     0x1.cc911a930e665p-64, 0x1.e70c85f2a156bp-800, 0x1.e8b30bbdd2482p-247,
     0x1.f751a724d7d89p-263, 0.0, 0.0, 0x1.03abb3801e681p-576, 0x1.c343a4d27cfacp-418,
     0.0, 0.0, 0x1.e6c71f24e299fp-691, 0x1.77eaba987fb9cp-62, 0.0,
     0x1.a3d0970947027p-399, 0x1.9454ff75d95fap-324, 0x1.acf506b12f84dp-360, 0.0,
     0x1.3a45fddf73389p-854, 0.0, 0x1.89f4637136f8ap-395, 0.0, 0x1.75620e944aed5p-881,
     0.0, 0x1.7f251ed9fbab4p-527, 0.0, 0.0, 0x1.6a5857c0706dap-542, 0.0,
     0x1.92b50544f4ab4p-208, 0.0, 0.0, 0.0, 0.0, 0x1.9ef49a7ab871p-622,
     0x1.f365e0ffdbae1p-733, 0x1.df30e1e19a7cep-682, 0x1.718ff3166e647p-548,
     0x1.863d104f978abp-501, 0.0, 0x1.940e29f65140cp-583, 0x1.4ff84b6d6d549p-484, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e1ef63fe1b4d4p-112, 0.0, 0.0, 0.0,
     0x1.2c2c81271e8d5p-126, 0.0, 0x1.8565a96d2316fp-247, 0x1.e51d0483b9f8fp-254,
     0x1.d2d2714dcaf72p-580, 0x1.8c7c69899316p-381, 0x1.f80d715be80a2p-750,
     0x1.8ee6d1d7e0628p-95, 0x1.ef5436ff1db96p-398, 0x1.a1b6ed6ec75a2p-200,
     0x1.609da3095ca9ap-197, 0.0, 0.0, 0x1.4177f17dc92fdp-292, 0x1.896636a24b89p-742,
     0.0, 0x1.fa8ac26fdcb65p-337, 0x1.4e23e9417cf0fp-380, 0.0, 0x1.a204d0e2f6642p-534,
     0x1.8beb0ecc623f7p-477, 0.0, 0x1.2a72d0639ae58p-584, 0x1.8e01d9a9ff963p-133,
     0x1.494739b5e6abfp-441, 0.0, 0x1.a612027e202a1p-359, 0x1.ebeeefcae2817p-427,
     0x1.829ed53d04ea8p-142, 0.0, 0x1.b5fc338eac52ep-466, 0.0, 0.0, 0.0,
     0x1.d6f8e754267dap-68, 0.0, 0.0, 0.0, 0.0, 0x1.aeb36aac0afd7p-537, 0.0,
     0x1.7445df83bb0e9p-617, 0x1.e85d3ade13a11p-457, 0.0, 0.0, 0.0,
     0x1.c0a562e20671dp-741, 0x1.a3b541f795a68p-862, 0x1.bdee9c4918c5fp-803,
     0x1.1175f650f66c2p-482, 0.0, 0.0, 0.0, 0x1.98f96e71c2161p-631, 0.0,
     0x1.cb8c27e8021fep-575, 0.0, 0.0, 0.0, 0.0, 0x1.1972cdc2f2c49p-625,
     0x1.ce7d8fb51975cp-192, 0.0, 0.0, 0.0, 0x1.8bea1d3bf9787p-642, 0.0,
     0x1.d2f9b10151449p-703, 0x1.3b23e57cb3a36p-829, 0x1.cf748f99cb827p-863, 0.0, 0.0,
     0x1.d4a4547e20f0fp-795, 0x1.796eb65374c48p-963, 0.0, 0.0, 0x1.f750d3ae348e2p-819,
     0x1.303ae10a41293p-615, 0.0, 0.0, 0.0, 0x1.dc2c388ded01bp-444, 0.0,
     0x1.21b1fb741405dp-530, 0x1.e42c6efa66992p-295, 0.0, 0x1.3e6114a58eedap-50,
     0x1.377fa48cf7324p-759, 0x1.47120556ba8fbp-365, 0x1.a69f4e162291fp-248, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.49270eb68df06p-798, 0x1.a8cc2909b2434p-675, 0.0,
     0x1.4a0336afa0e38p-205, 0x1.d3208714209dp-124, 0x1.187c86aac5bcap-865, 0.0, 0.0,
     0x1.d1aeb5d648bc3p-396, 0x1.cdc8868aa21f9p-670, 0.0, 0.0, 0.0,
     0x1.ba428623a0099p-273, 0x1.73b2e71fe265bp-780, 0.0, 0x1.30e296d409ddbp-247,
     0x1.fe83e76e66044p-94, 0x1.fcfb79d12e831p-940, 0x1.1a0ce21d9da96p-152,
     0x1.8d740e280be73p-324, 0.0, 0.0, 0.0, 0x1.0ae2317576696p-83, 0.0, 0.0, 0.0,
     0x1.9f630e750a1b9p-922, 0x1.c66087216f4e5p-319, 0.0, 0.0, 0x1.fbf2e6e941fc8p-59,
     0x1.fa825521cfe32p-136, 0.0, 0.0, 0.0, 0x1.bedbbf799d4p-188,
     0x1.e35c55b7f961p-106, 0.0, 0.0, 0.0, 0x1.5df50bce988ecp-514, 0.0,
     0x1.09fb63a6e2e56p-376, 0x1.176d42b027717p-1001, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ea17466b434cp-486, 0x1.b728e68e7dca7p-361, 0.0, 0.0, 0.0, 0.0,
     0x1.51bb949f6d333p-741, 0.0, 0x1.3b6146852ff8dp-215, 0x1.1f9c1e100778ep-977, 0.0,
     0x1.d0678b76d7705p-662, 0x1.4dee58edebf9fp-156, 0x1.421757bd20976p-1011,
     0x1.0e8da49561adp-259, 0.0, 0x1.c8dafc5c85e27p-737, 0.0, 0x1.b53d9c3d8e528p-689,
     0.0, 0.0, 0x1.281d06381a886p-406, 0x1.d47cf62868b7fp-343, 0.0, 0.0, 0.0, 0.0,
     0x1.b0b59b5c837bbp-1019, 0.0, 0x1.8aa12869d0642p-821, 0x1.59e6501641cdp-727,
     0x1.310d34c56e9eap-673, 0x1.f5f67a97d008fp-430, 0x1.9ec6ec16b3927p-562,
     0x1.1bf9138cfdb3ap-664, 0.0, 0x1.59e150c418af9p-31, 0x1.12bf500846732p-505, 0.0,
     0x1.74c72a6231b25p-106, 0.0, 0x1.2d3ab4187c238p-430, 0x1.d2b718fd2b128p-660,
     0x1.98bb9f404dbfap-725, 0.0, 0.0, 0.0, 0x1.51edc5700f158p-444,
     0x1.bb4c498500de3p-746, 0x1.44d24b324fb67p-543, 0.0, 0.0, 0.0,
     0x1.7c2344f22a725p-577, 0x1.77bb4100c45a2p-32, 0x1.0ba632194292p-728,
     0x1.96116d13db9eap-189, 0.0, 0x1.d4cb2503bb96fp-727, 0.0, 0.0, 0.0,
     0x1.0267656e96ac6p-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b27800b80d0aep-76,
     0x1.c4b32051bf8fp-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.810f37a8e0516p-413,
     0.0, 0.0, 0x1.40082ca63ef0dp-921, 0.0, 0.0, 0.0, 0x1.1c93eb5c876b7p-888, 0.0,
     0x1.980e67f5cd206p-742, 0.0, 0.0, 0x1.bdc41e816160bp-625, 0x1.b2826b7a8b781p-726,
     0x1.85131cd1ba42bp-962, 0x1.291178dfee881p-378, 0x1.cb5e2699f15e7p-629, 0.0,
     0x1.994af8c760a2fp-846, 0x1.83e67a7c91853p-851, 0x1.b03e2ba3cebe3p-810, 0.0,
     0x1.bf568bb031538p-950, 0x1.c520db5fb6e34p-644, 0x1.015db9bc4d481p-981,
     0x1.84830a1b88c21p-338, 0.0, 0.0, 0x1.78fe8867b4eadp-164, 0.0, 0.0, 0.0, 0.0,
     0x1.ecf76c00cbf17p-336, 0x1.53f97b98d94cfp-1012, 0x1.6b0a68775c76p-542,
     0x1.bae3fab745971p-701, 0.0, 0x1.3b6c8a3b140c8p-258, 0.0, 0x1.000d2503238c7p-789,
     0x1.048696de79accp-767, 0.0, 0.0, 0.0, 0x1.169c35353a73fp-999,
     0x1.e6e8149e76e3ap-536, 0x1.cd84dfea0a6f9p-424, 0x1.3afd3622a5fap-382, 0.0, 0.0,
     0.0, 0x1.4fb54ba3def98p-765, 0x1.944a2b73eddeap-347, 0.0, 0.0, 0.0,
     0x1.eb773ce459b28p-496, 0.0, 0.0, 0x1.b7c14a9e18ec9p-334, 0.0,
     0x1.036824b9ee701p-486, 0.0, 0.0, 0.0, 0x1.9c2f34419366ap-2,
     0x1.2530ab7b9e6c1p-859, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14672f3dad0e3p-907,
     0x1.fcf525b8d19ccp-90, 0x1.d8cb8f58db681p-831, 0x1.0dd7a1f45a0edp-720,
     0x1.2426ffe0eea75p-836, 0x1.b4c981d19c26cp-4, 0.0, 0.0, 0.0, 0.0,
     0x1.bf77435ee9adbp-33, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb8eac331ae8cp-371, 0x1.b827309a79631p-92, 0.0, 0x1.976426c645565p-644,
     0x1.ee3280ea4178ap-1011, 0x1.6b9139e98d557p-105, 0.0, 0.0, 0x1.3aad115a19ebp-194,
     0x1.1e83ce8a71da4p-649, 0x1.46a0a2bf1c5c3p-961, 0x1.0aafd1b915b2fp-895, 0.0, 0.0,
     0.0, 0x1.31b3a24a1dd86p-588, 0x1.b131e12427d8cp-797, 0x1.d6bbe4ce36d39p-605, 0.0,
     0x1.88eeb83dd845ap-139, 0x1.bc966810a944cp-392, 0x1.0791bebbf7653p-834,
     0x1.0caa545dad54ap-172, 0.0, 0x1.098ba4a11847dp-44, 0.0, 0.0,
     0x1.fded0ad209ae1p-506, 0.0, 0x1.27f8d309a8bdbp-383, 0.0, 0.0, 0.0,
     0x1.3e49c752f7cfap-286, 0.0, 0x1.b688ef30aed0ap-73, 0.0, 0x1.4ce0fa6636b1cp-13,
     0x1.c23edad54435ep-601, 0x1.18cbfe701b71bp-145, 0.0, 0.0, 0x1.52f359dc7cdacp-691,
     0x1.5da10733ec6b1p-53, 0x1.8020304d6737ep-906, 0x1.b76f43d8399e3p-784, 0.0,
     0x1.8a5e1e6e4a8d7p-710, 0.0, 0.0, 0.0, 0.0, 0x1.bf3cd03deb0b8p-139, 0.0,
     0x1.33f956f1ffafp-81, 0.0, 0x1.3ea7056e7f2dep-13, 0x1.63532ac3a42f3p-900,
     0x1.6deb8e6fdfacap-1, 0.0, 0x1.50dc7cd4e58cap-50, 0x1.e1de42b24c57p-953,
     0x1.4f7974f64a962p-113, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.963b24a0f2abfp-654, 0x1.62601858e4378p-316, 0.0, 0.0, 0x1.673d7166956d8p-468,
     0.0, 0x1.0808075cc0bedp-437, 0x1.c31142fe99d86p-652, 0.0, 0.0,
     0x1.83225d9349489p-8, 0x1.c9add6afad21dp-957, 0.0, 0x1.c8f973881fbd9p-544,
     0x1.2ebcb3549db09p-260, 0.0, 0.0, 0.0, 0.0, 0x1.5060009d65055p-496,
     0x1.5f313c04f8ccfp-410, 0.0, 0.0, 0.0, 0.0, 0x1.f2d03f81fca8ap-56,
     0x1.af080309b3e3ap-431, 0.0, 0.0, 0.0, 0.0, 0x1.64632fa2ea433p-641, 0.0, 0.0,
     0x1.7968db961965fp-514, 0.0, 0.0, 0.0, 0x1.8c315804c3418p-640, 0.0, 0.0, 0.0,
     0.0, 0x1.7eacec89445e3p-165, 0.0, 0.0, 0x1.6bcc6bef7314ap-395, 0.0, 0.0, 0.0,
     0x1.653998a5f1f6ap-121, 0.0, 0x1.0ca095bda12b6p-558, 0.0, 0x1.c7fc3d8d2e2eap-32,
     0x1.43cff7e504a3ep-120, 0x1.aa5406401b522p-264, 0x1.0e093431840c3p-801, 0.0, 0.0,
     0x1.2baaa8786a498p-468, 0.0, 0x1.f70d8cc93e5d5p-1009, 0.0,
     0x1.795648cdb1f13p-373, 0.0, 0x1.a3e701e780808p-958, 0.0, 0.0,
     0x1.4c58664bfe905p-461, 0x1.015260372cca6p-413, 0.0, 0x1.c50d53cb50803p-518,
     0x1.b6b8e5cbd1bf7p-172, 0x1.38cf3a5172376p-363, 0.0, 0.0, 0x1.810984a857da1p-642,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ffdb2b80ef24p-975, 0.0, 0.0, 0.0,
     0x1.a46b162ab5aa2p-485, 0x1.1bdc120b10079p-94, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c16592bca473p-156, 0.0, 0.0, 0.0, 0x1.eaf7a49bab228p-159, 0.0,
     0x1.37e214fb8cdcbp-668, 0.0, 0x1.0d751b6d61a5cp-184, 0x1.b2ab513f01879p-675,
     0x1.dc5c7fe5e7c8bp-870, 0x1.a1a518d38e4a7p-779, 0x1.14965091ab42ap-406, 0.0, 0.0,
     0x1.71cf4352aa435p-522, 0x1.6636958df3e02p-916, 0.0, 0x1.45d7bb8217e42p-831, 0.0,
     0x1.4117c67eb0faep-781, 0x1.ad4d51607321p-480, 0x1.1e95518269c5ep-428,
     0x1.43a0e3d3167b1p-186, 0x1.e751a34911a0ap-84, 0.0, 0x1.54bf2483a64c6p-569,
     0x1.b2f57b16f9e69p-679, 0.0, 0x1.e04ec9296e12ep-988, 0x1.f98fb0f3d5dd5p-925,
     0x1.127bb429ee588p-487, 0.0, 0.0, 0.0, 0x1.983cb5e904753p-77, 0.0, 0.0,
     0x1.0c8805c3eeb06p-564, 0x1.b5dafee507ddbp-14, 0x1.3a5ca734234ecp-882,
     0x1.c808c96c880d4p-85, 0.0, 0x1.438e78db84fd3p-520, 0.0, 0.0,
     0x1.eedf9e5bd4d6bp-243, 0x1.f7a7ccbebc807p-993, 0.0, 0x1.58c71fa60f7e8p-615,
     0x1.0c34b75288e2fp-741, 0x1.34469bea4041dp-315, 0x1.ad289a408338ap-843, 0.0, 0.0,
     0.0, 0x1.0603ea7e4a5a2p-819, 0x1.3aff4afc4b27ep-338, 0.0, 0.0,
     0x1.65a553fc7675fp-523, 0x1.7cd43cf400fbep-122, 0x1.56f304ef7db15p-731,
     0x1.cd2b8b9d2f301p-418, 0.0, 0x1.f13ce02f2437fp-385, 0.0, 0.0, 0.0,
     0x1.4b02e8910ec31p-631, 0.0, 0.0, 0.0, 0x1.740f3eb21956ep-325, 0.0, 0.0, 0.0,
     0.0, 0x1.3f3c886127d51p-572, 0.0, 0x1.a92246c4db118p-96, 0.0,
     0x1.132c633338c35p-397, 0x1.0a0c4d5015f6bp-365, 0x1p0, 0x1.d459c10b836b6p-577,
     0x1.72c0d6ce9b97cp-496, 0.0, 0.0, 0.0, 0x1.7d3e2ad4757bap-68,
     0x1.a1da5afd5203dp-1008, 0.0, 0.0, 0.0, 0x1.003a4be480772p-969,
     0x1.c141d60ac882p-212, 0x1.fb3f9d03b0cd6p-1022, 0.0, 0.0, 0.0,
     0x1.6c8c0a42c7819p-368, 0x1.0334137354ef3p-930, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.75a8f2e83b88dp-532, 0.0, 0.0, 0x1.f8ba0e026fd81p-725, 0.0, 0.0,
     0x1.9d3d1d352b131p-813, 0x1.f822294c272f6p-609, 0x1.4486f2e67a97ep-799, 0.0, 0.0,
     0.0, 0x1.2810efadbcd6cp-354, 0x1.7eadeabfed488p-495, 0x1.392620f73913fp-369, 0.0,
     0.0, 0.0, 0x1.5d7055f47fb8cp-214, 0x1.518a0fd615ccp-163, 0x1.2723e65c49d4fp-471,
     0x1.ef8387925cff2p-373, 0x1.da749fe227829p-384, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a05695a10ff5fp-263, 0.0, 0.0, 0.0, 0x1.471188ae2ac71p-21,
     0x1.ea298b138d97bp-693, 0.0, 0.0, 0x1.77925fcb5676bp-263, 0.0,
     0x1.02a9a011ec8c9p-292, 0.0, 0.0, 0x1.8a8e563b43121p-613, 0x1.4e329f53f56ddp-190,
     0.0, 0.0, 0.0, 0x1.6d55b258d8ffcp-273, 0x1.3522c81cf74aap-676, 0.0, 0.0, 0.0,
     0.0, 0x1.84ea245f0f43fp-796, 0x1.f7bf4c75c8518p-280, 0x1.ada22258fe7afp-908, 0.0,
     0.0, 0x1.a3ad001795eebp-526, 0.0, 0x1.2a8ff2e768534p-330, 0.0,
     0x1.bd8aabced2a9cp-778, 0x1.6d3d2af4a1074p-911, 0x1.6d6012fb7445cp-131,
     0x1.afb74dd693a25p-898, 0.0, 0x1.6a5737cb0a143p-211, 0x1.7f366c2e7779ap-541, 0.0,
     0x1.70cc88633297fp-890, 0x1.82db89e561e3ep-144, 0.0, 0.0, 0.0,
     0x1.4d9fd7ef1b7fp-719, 0.0, 0x1.c90c93f3832e5p-424, 0x1.f6361ff8654a5p-750,
     0x1.ab7912b4a12b5p-796, 0.0, 0x1.7eb079949b194p-980, 0x1.ec325807d1cedp-438, 0.0,
     0x1.d0559b9bc81a6p-836, 0.0, 0.0, 0.0, 0x1.fab038a9447bap-298, 0.0,
     0x1.c5a470d7eb562p-646, 0x1.9cf5efa8527e2p-441, 0.0, 0.0, 0x1.a5246e3bd7dfep-81,
     0x1.80c6b5b319687p-752, 0.0, 0.0, 0.0, 0x1.e05fdc0ab4308p-380, 0.0, 0.0,
     0x1.0cd6a66385893p-583, 0.0, 0.0, 0x1.d5083d3351d9ap-945, 0x1.a59b9591bb57fp-138,
     0.0, 0x1.0d2016dbddab2p-854, 0.0, 0.0, 0.0, 0x1.1fd5cb3a6c3d5p-683,
     0x1.9b754d160b988p-280, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.47afb08a6e63ep-938, 0.0, 0x1.85c360d5a980ep-674, 0.0, 0x1.5c63f0a53ea5p-701,
     0.0, 0.0, 0x1.558342ff8614p-338, 0x1.843fa193037e4p-175, 0.0,
     0x1.430a285b796ep-974, 0.0, 0x1.9cf845aa79236p-560, 0.0, 0.0,
     0x1.d37598975fd63p-766, 0x1.5833d17b1fd49p-247, 0.0, 0.0, 0.0, 0.0,
     0x1.ca78e43fc799ep-242, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.380f8de821284p-76,
     0x1.a69c2262b0c07p-241, 0x1.41b7facb89f34p-670, 0.0, 0x1.088c08f783506p-398,
     0x1.30c9c9f76d9eap-215, 0.0, 0.0, 0.0, 0x1.40157bba484e3p-780,
     0x1.90b941b008027p-210, 0.0, 0.0, 0x1.30b0dab27266ep-860, 0.0,
     0x1.6f9c26b027cadp-366, 0.0, 0.0, 0x1.c989857f42cc5p-724, 0.0, 0.0,
     0x1.19eef7f7603abp-245, 0x1.98dc77edb2a32p-342, 0.0, 0.0, 0x1.2863900c5cee7p-288,
     0.0, 0.0, 0x1.db3dbedae0edfp-341, 0.0, 0x1.dd3863dc2e103p-806, 0.0, 0.0,
     0x1.0b29419487fd6p-694, 0.0, 0.0, 0.0, 0x1.6a4bec2eec86p-669, 0.0, 0.0,
     0x1.9d303524d98bp-79, 0x1.4d2c534943d86p-395, 0.0, 0x1.b856cd5d83869p-991, 0.0,
     0.0, 0.0, 0.0, 0x1.f8b8acd9c3664p-422, 0x1.60570bc9f7b77p-659,
     0x1.5ec2949704359p-853, 0x1.b7b1ede2183efp-170, 0.0, 0x1.288c97f568cbap-50,
     0x1.7004dd87cc884p-142, 0.0, 0x1.ef966475dcdc7p-238, 0x1.ec9b7e28cd9d4p-478,
     0x1.8863acf132973p-616, 0.0, 0.0, 0x1.a5e98d804d217p-704, 0.0, 0.0,
     0x1.fccceb11a4eb6p-183, 0.0, 0.0, 0x1.947a0be406b64p-626, 0x1.a8c066749ff9ap-382,
     0.0, 0.0, 0.0, 0.0, 0x1.bf87fa317b51dp-83, 0.0, 0x1.50f2c73a41de8p-214, 0.0,
     0x1.3709eef785454p-107, 0x1.c5c6b9cf28f05p-877, 0x1.9f5c5f6827bccp-18, 0.0,
     0x1.a8444838f8294p-298, 0.0, 0.0, 0.0, 0.0, 0x1.ee93f129ec41cp-345,
     0x1.3c29f6d436063p-869, 0.0, 0x1.56de51993aaadp-847, 0x1.a185a33912b9ep-380,
     0x1.4cc9ee2939cf9p-671, 0x1.15fa42669b3a5p-1016, 0x1.8ead0186679d8p-127, 0.0,
     0x1.6cd9003b68f76p-65, 0x1.829b93d50765ep-900, 0x1.9d5451d9d76b4p-187,
     0x1.bd08238fe40d7p-308, 0.0, 0.0, 0.0, 0x1.9846670b588a8p-491, 0.0,
     0x1.294eab3657f5p-144, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63c1091c8080cp-689,
     0x1.87e03d0d9e4a6p-446, 0.0, 0.0, 0x1.d37b5fa50da7bp-322, 0x1.82ef34695e8f7p-264,
     0.0, 0x1.e846dfde7aa3fp-628, 0.0, 0x1.3536acacabc48p-953, 0.0,
     0x1.0473f5889feecp-606, 0.0, 0.0, 0.0, 0.0, 0x1.2a79ad258911ep-381,
     0x1.ae727678fc59p-752, 0x1.1782a894901bfp-450, 0x1.b9d32a9c4f23cp-437, 0.0, 0.0,
     0x1.833196a507ad4p-435, 0.0, 0.0, 0x1.6f0ddd6257e2dp-178, 0.0,
     0x1.701cd748f65fap-724, 0x1.4ad027d9ce4d2p-415, 0.0, 0.0, 0x1.d1b824d06d237p-419,
     0x1.39e62280d385ap-934, 0x1.fcf3427c5c40cp-483, 0x1.3abc8b8c5b0a4p-671,
     0x1.b58f45648c1c1p-615, 0x1.8c063e77f76bdp-1014, 0.0, 0x1.5b7fd63412d4ep-376,
     0.0, 0.0, 0x1.cbe1ab603ed4p-846, 0x1.0464a4d75014cp-200, 0x1.6a502f19cc796p-809,
     0x1.1292a3af1a5edp-179, 0x1.69e96bfc30d06p-708, 0.0, 0.0, 0.0,
     0x1.0c98f8650a4dbp-591, 0.0, 0.0, 0x1.592d7167a7bc7p-407, 0.0,
     0x1.e48692237c5cdp-515, 0x1.ede676a9e0eb3p-162, 0.0, 0x1.f31bd1520c7bdp-225,
     0x1.a41c8395c8ef3p-583
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
            tmp1 = Sleef_finz_logd4_u35kvx(tmp0);
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
    printf("Sleef_finz_logd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_logd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
