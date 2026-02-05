/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd1_u10purecfma.c --function \
 *     Sleef_finz_acosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.8f111baa73d5p-212, 0x1.414f51a81a4bap-249, 0x1.b58e8fd790417p-22, 0.0,
     0.0, 0.0, 0x1.79cbe9b92ab3dp-552, 0x1.fd290fe090e5dp-6, 0x1.bd621a089f0ap-119,
     0.0, 0.0, 0x1.aa5aa5f00b968p-882, 0x1.bc23b8bef111bp-173, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dbb252db36476p-927, 0.0, 0.0, 0x1.032fc059855fbp-698,
     0x1.0b9063e726789p-589, 0x1.da57b1f361dd8p-127, 0x1.983720d6a5208p-727,
     0x1.d040d155a8f66p-747, 0x1.70c9bb88191cbp-188, 0.0, 0x1.f30b7b9e70c94p-512,
     0x1.fc1eb736d9df4p-277, 0x1.93f5e581e308cp-151, 0x1.53bb4ae0a10a8p-561,
     0x1.bf074d09adaedp-689, 0x1.12dffe53100b6p-108, 0.0, 0.0, 0.0,
     0x1.a035d397fa7f7p-538, 0x1.efd018d38bc36p-150, 0.0, 0x1.eac363fcb26e2p-547,
     0x1.68c1ef195517ap-446, 0.0, 0x1.f9109a1d34b7p-58, 0.0, 0x1.93f14539e8cb7p-352,
     0x1.fb1b213694ebep-110, 0x1.61666597330a1p-479, 0x1.c7c7bf8875b74p-189,
     0x1.7af99a49766b7p-907, 0x1.177ee8923c17ap-178, 0.0, 0.0, 0.0, 0.0,
     0x1.76617e5efbc5cp-676, 0x1.7afe6e99577c7p-532, 0.0, 0x1.022bf152f357ap-548,
     0x1.c99d4e76bb1dbp-244, 0x1.c72d1b9ce3461p-822, 0.0, 0x1.0d74c6b04e378p-540, 0.0,
     0x1.0758bf553faedp-917, 0.0, 0x1.850384972023fp-492, 0.0, 0x1.71db1826e43d3p-236,
     0.0, 0.0, 0x1.82dc9639b63b7p-23, 0.0, 0x1.15820ca0adba2p-518, 0.0, 0.0,
     0x1.53153574dbb15p-995, 0.0, 0.0, 0x1.e97ff3a9f1ae2p-654, 0.0,
     0x1.e44fb08c98174p-728, 0.0, 0.0, 0x1.280aceee6899dp-910, 0x1.184e6f0b899c6p-353,
     0x1.d44635015e45bp-797, 0x1.c579727ac3ff8p-757, 0x1.87414a78aaed1p-618, 0.0,
     0x1.55dfea5806571p-968, 0.0, 0x1.37a39c7526905p-388, 0x1.ddec651f648c7p-257, 0.0,
     0x1.942d87303d211p-46, 0x1.2bf0e715fe981p-217, 0x1.ba364f1c0e45bp-1016, 0.0, 0.0,
     0x1.fe18108f8fb36p-900, 0x1.dcbd79ffa94acp-287, 0.0, 0x1.1966582e7365dp-590,
     0x1.20a596efa678cp-847, 0x1.394c638b50cc4p-747, 0.0, 0.0,
     0x1.557350a7a8b2fp-1019, 0.0, 0.0, 0x1.f318b48cf6b2cp-345,
     0x1.51e64fd6ccf75p-320, 0.0, 0.0, 0x1.2ccdeaa0a82fbp-1017, 0x1.8847599dd119p-807,
     0x1.54a33e13fad65p-617, 0x1.258582baf0782p-933, 0x1.8efcd7b517701p-781, 0.0,
     0x1.72978598eba4bp-509, 0x1.fe34c15d699eep-30, 0.0, 0x1.1be5682242869p-579,
     0x1.6ff11be27d852p-396, 0.0, 0x1.b47302e0ecc32p-204, 0x1.ca1f24d24513dp-438,
     0x1.57ea96a30e0bdp-266, 0x1.c33ea1b8cc0fdp-249, 0x1.de7be05340bb5p-632, 0.0,
     0x1.ffa072e39a262p-899, 0x1.1a478f7152714p-903, 0.0, 0.0, 0x1.f9c584c61b7e3p-561,
     0x1.841a53e4e7cc7p-640, 0.0, 0.0, 0x1.210aedb9ec8e8p-833, 0.0, 0.0,
     0x1.b189f4071428bp-208, 0.0, 0.0, 0.0, 0.0, 0x1.8c151709ee364p-351,
     0x1.3a602c8ea5be2p-824, 0x1.09234afdf65f6p-975, 0.0, 0x1.9109b559cba81p-694,
     0x1.9dc7c89084589p-827, 0x1.7a90214ed0364p-745, 0x1.2cdcbbcc7c5a6p-771, 0.0, 0.0,
     0x1.0dfc03f32ac54p-286, 0.0, 0.0, 0x1.0202ad1d1c9c7p-600, 0x1.70565cd6787ebp-183,
     0.0, 0x1.4bbf4fd180cd5p-537, 0x1.8e70f038685e9p-165, 0.0, 0.0,
     0x1.f4ed966d0366bp-791, 0x1.bb59631c62316p-455, 0x1.1aa0761a8f3bep-153, 0.0,
     0x1.3c29e322be47p-354, 0x1.db33c99e55728p-785, 0x1.deffc3ee22f6bp-43, 0.0,
     0x1.fcfd93062acep-823, 0x1.d741a9a01a3f4p-420, 0.0, 0x1.750cb07f30821p-127,
     0x1.8167da00d0192p-818, 0x1.ed2407c7c090ap-760, 0.0, 0x1.ad3ac534b7caep-585, 0.0,
     0.0, 0.0, 0.0, 0x1.655bde61dad3p-107, 0x1.f082c9887e842p-371,
     0x1.790b8c6fd83d5p-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.200857f187ab4p-543,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb422b05fef5dp-600, 0x1.84a2648b67d56p-648,
     0x1.0c0bd791d801ap-233, 0.0, 0x1.6984efc6d5f86p-390, 0.0, 0.0, 0.0,
     0x1.a2293fad779e2p-34, 0x1.6031ea47e07dap-743, 0.0, 0.0, 0x1.f541df29c98a3p-8,
     0.0, 0.0, 0x1.104b18a181648p-427, 0x1.19232ee677fc8p-445, 0x1.ba2de31e874fcp-242,
     0x1.bc499cd5d096bp-982, 0x1.7deb740ae507p-130, 0x1.dd9e4a30f9dafp-413, 0.0,
     0x1.ef2f5d14db4b4p-740, 0x1.56b55b4a91ad1p-660, 0.0, 0x1.66a7e734cb39bp-73,
     0x1.7c4ece3e0b7f3p-474, 0x1.9e4a3943f0d24p-63, 0x1.4520fc349e5cp-418, 0.0, 0.0,
     0x1.9670d04ad8da4p-109, 0x1.a6a395775d267p-142, 0x1.e441d1ae6fb77p-733,
     0x1.66e9d1d10e546p-180, 0.0, 0.0, 0.0, 0.0, 0x1.2f285d40fd49cp-932, 0.0,
     0x1.163e0495b16b7p-655, 0x1.c23a987eb45bep-17, 0x1.d8c81628dc6ddp-707,
     0x1.3ae58416265d4p-984, 0x1.3f25c014fa579p-357, 0.0, 0.0, 0x1.3500b975d033dp-105,
     0x1.3bcb48fce41e3p-902, 0x1.e32e44660c3a2p-60, 0.0, 0x1.23eb898005e48p-864, 0.0,
     0x1.cba0ebc5939cbp-66, 0.0, 0.0, 0.0, 0.0, 0x1.44eb204723817p-744,
     0x1.ada3ed3064066p-678, 0x1.57b7735403e2ep-200, 0.0, 0x1.6ebe7fa5ee168p-757,
     0x1.87fbe1b4edd3ep-733, 0x1.84dd611a8807dp-941, 0x1.cf05ced64fb15p-706,
     0x1.223fba837068bp-478, 0x1.4848f1e147fdbp-224, 0x1.c7e4b63cd4683p-845,
     0x1.537ac7b9cc8f1p-791, 0.0, 0x1.b8e5d347428adp-74, 0x1.6cd0d10544c9ep-724, 0.0,
     0x1.095e7c27303bfp-701, 0x1.9ca8a080ca1cdp-640, 0.0, 0.0, 0.0,
     0x1.dd93024a69983p-439, 0x1.bd2e40340b70fp-453, 0x1.650d32fb11ee7p-408,
     0x1.bb77da7c8ea9ap-502, 0x1.ed5e9a179f60fp-322, 0x1.9adbd6d45cec8p-549,
     0x1.2ff958c97f3e1p-366, 0.0, 0.0, 0x1.5a5a70afa27e1p-709, 0x1.40d3088ac463ep-752,
     0x1.fe076745a6799p-549, 0.0, 0.0, 0.0, 0x1.b4f9c4adb1b07p-15,
     0x1.b6b63ded01fb5p-642, 0.0, 0x1.4342d63f283e5p-595, 0.0, 0x1.993fc24fc44cp-541,
     0x1.d742c006bc3dcp-981, 0x1.ca72e06f7f799p-166, 0.0, 0x1.163e17038e4f6p-196, 0.0,
     0.0, 0.0, 0x1.bb9a2215be953p-1021, 0.0, 0x1.0e07451cbb4bap-795,
     0x1.7c2c38bb5edf6p-694, 0x1.85d50885cddb2p-648, 0.0, 0x1.3ac15afcf8623p-210, 0.0,
     0.0, 0x1.408f6c776fa63p-446, 0.0, 0.0, 0.0, 0.0, 0x1.d6edaff17d431p-48, 0.0,
     0x1.ecd40e3e92672p-1003, 0.0, 0.0, 0x1.67da065ec464bp-314,
     0x1.5189b812b8931p-173, 0.0, 0x1.764b851cf005fp-101, 0x1.ec9891973a7a7p-95,
     0x1.3e821321d6295p-825, 0x1.9ec20e26efd9fp-859, 0x1.5454f5f128738p-114,
     0x1.4266deef77fa9p-819, 0.0, 0.0, 0x1.c2b14c4bae999p-637, 0.0, 0.0,
     0x1.277ddff69792cp-583, 0.0, 0x1.85422aca51dcap-20, 0.0, 0x1.c2e033a2b1d28p-732,
     0x1.a479c7724fac8p-476, 0.0, 0.0, 0x1.5f9b24dc97bc9p-685, 0.0, 0.0,
     0x1.2d5494882c887p-647, 0.0, 0.0, 0x1.6a868dc60b184p-666, 0x1.9c2f8e9c89e3dp-98,
     0x1.d08f97e3b65aep-799, 0.0, 0.0, 0x1.8fdd03c05d91dp-79, 0x1.ba1bca6d14d63p-845,
     0x1.fe45909f24da5p-967, 0x1.0fc449b3bd3bfp-792, 0x1.3615c4895606bp-932, 0.0, 0.0,
     0x1.fb590ca50a879p-762, 0.0, 0.0, 0x1.39a70fd947a0fp-42, 0x1.a1ff35bfa164bp-90,
     0x1.390de5ba4ef73p-495, 0x1.a6ecb3c710eecp-271, 0.0, 0x1.48493164f8125p-691, 0.0,
     0x1.fa0acc9ca7c32p-968, 0x1.28b74ca20fdecp-86, 0x1.837aacc326f0bp-631, 0.0,
     0x1.7cdc50c17d575p-773, 0x1.19e80dc60142ap-684, 0x1.96bcd6f1ae17bp-691, 0.0,
     0x1.4282c190b1bbfp-572, 0.0, 0.0, 0x1.8f4d138526416p-207, 0.0, 0.0, 0.0, 0.0,
     0x1.e9ca221b855bcp-831, 0.0, 0.0, 0.0, 0.0, 0x1.c8283df834c67p-530, 0.0, 0.0,
     0x1.d16bb18cf8cc6p-430, 0x1.8e4bbecf6bebbp-446, 0.0, 0.0, 0.0,
     0x1.8f4e16ffe012fp-245, 0x1.df68b0aa18f0ep-1005, 0x1.0d872fe717568p-782, 0.0,
     0x1.2385f3f6fb269p-436, 0x1.6e1787a7fe7a8p-1016, 0x1.78c79c67ac55p-708,
     0x1.8ea55229df6abp-834, 0.0, 0x1.c2b474044f7c3p-970, 0.0, 0x1.2e1afc18ea61ep-741,
     0.0, 0.0, 0x1.5c481648fdb2fp-164, 0.0, 0x1.265eeaaedef23p-176,
     0x1.4677a27f4e8dcp-901, 0x1.f8c589857f90dp-974, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46299199186bap-357, 0.0, 0.0, 0x1.be9556083c0ccp-477, 0x1.1c72a2c69227ap-23,
     0.0, 0.0, 0.0, 0.0, 0x1.50c203a60875fp-795, 0.0, 0x1.94db3196606c3p-637,
     0x1.77e617039449bp-758, 0.0, 0x1.926c4dcc13a36p-872, 0.0, 0x1.e727086f26d2bp-773,
     0.0, 0.0, 0x1.bd4cf763640acp-468, 0.0, 0x1.737588ecaec37p-901, 0.0, 0.0, 0.0,
     0x1.d100b395aa1dfp-279, 0.0, 0.0, 0x1.4b103707fb4fap-493, 0.0, 0.0,
     0x1.cfcb9a055c27cp-437, 0.0, 0x1.e910179617c4fp-590, 0.0, 0x1.88b8efb69071p-15,
     0.0, 0.0, 0x1.2eb2400b8d469p-822, 0x1.c2ec79e9c3e12p-444, 0x1.17c889829c8e1p-597,
     0x1.d9f0c01459224p-564, 0.0, 0x1.ff2b548b0ed36p-743, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.00a4b00ee3a5fp-574, 0x1.11ffe6db85f04p-796, 0.0, 0x1.0db11c593c7ep-802,
     0x1.281504397e65ep-652, 0x1.e9b493e41d4eap-781, 0x1.6edfd428f39c1p-900,
     0x1.f601906ead8a1p-560, 0x1.6f835dd1cdec5p-492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0ff377ef9c38p-92, 0.0, 0x1.5cef0469eb0fcp-192, 0.0,
     0x1.c7f1b14c888afp-428, 0.0, 0x1.db3eee04839e1p-394, 0.0, 0x1.90dec0cf1cfe1p-65,
     0.0, 0x1.277c2908d4268p-762, 0.0, 0.0, 0x1.14bda84dd728bp-919, 0.0,
     0x1.0a7bf32ac6fb4p-700, 0x1.46ea7718d3119p-153, 0x1.f86f30fb628ffp-232,
     0x1.56a18c3d86f6fp-842, 0x1.deeedca143d91p-860, 0.0, 0.0, 0.0,
     0x1.ba244190d8fa2p-690, 0.0, 0.0, 0.0, 0x1.f4aeaa9e1e4dcp-725,
     0x1.33a72fdfcf437p-190, 0x1.73516046e90d1p-565, 0x1.b87b0dd8e289p-764,
     0x1.ddfb90ccaf455p-4, 0.0, 0x1.c55b047559e69p-262, 0.0, 0.0, 0.0,
     0x1.b9b85278283b1p-647, 0x1.83dd88addce33p-600, 0.0, 0.0, 0x1.615ae095ad39bp-364,
     0.0, 0x1.0cdb6deb3f458p-869, 0.0, 0x1.09f5af1ec0012p-265, 0.0, 0.0,
     0x1.f92f6c816de14p-809, 0.0, 0.0, 0x1.08ff035ed455p-261, 0.0, 0.0, 0.0, 0.0,
     0x1.3099849e1a8afp-863, 0x1.985044febe361p-24, 0.0, 0.0, 0.0,
     0x1.6dbee5df1fa37p-812, 0.0, 0x1.6db0190962eedp-156, 0x1.5bb80e42ac6cap-633, 0.0,
     0.0, 0.0, 0x1.83bad351a809cp-951, 0.0, 0.0, 0.0, 0x1.959280b7bf0bcp-618,
     0x1.6a83e784b1ab6p-92, 0x1.2ec97266cbfb2p-438, 0x1.3aa28b9fb7e28p-95, 0.0,
     0x1.1702b5860e3d8p-716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1dbaaf6ec682fp-446, 0x1.6da4d6e53e61bp-449, 0x1.43fefc2cb493ep-32,
     0x1.cfd12cbad9f4dp-541, 0x1.fcaad564335efp-351, 0x1.ac3e97ab20482p-452,
     0x1.f383650a8ed98p-439, 0x1.91e336f213e4bp-132, 0.0, 0.0, 0.0, 0.0,
     0x1.34a5356efe9a6p-104, 0.0, 0x1.c44cc9c7e0769p-36, 0.0, 0x1.04b02295ccb06p-345,
     0x1.b8ee4fc9acfc2p-656, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d56f749be6671p-379,
     0.0, 0.0, 0x1.d6e8faca79d11p-489, 0x1.4fcbf1e9b347ep-680, 0x1.009e0a04cb3f8p-4,
     0.0, 0x1.51c0a543591f2p-833, 0x1.d1c48b0a29d4p-231, 0x1.198be1176d949p-1009, 0.0,
     0.0, 0x1.d661e2a5e65a2p-481, 0x1.c981ef74917d5p-754, 0.0, 0x1.c8ad1092beadcp-55,
     0x1.0363c8d82e251p-165, 0.0, 0.0, 0.0, 0x1.b4c5b315a74b9p-215, 0.0, 0.0, 0.0,
     0x1.10455067bfc39p-593, 0x1.f332134cdba79p-205, 0.0, 0.0,
     0x1.3bbcb3e10e52cp-1007, 0x1.3a720319d6c47p-448, 0x1.925e8a7d09098p-642,
     0x1.c8b2500f8e8d3p-719, 0x1.b34c3bf00713dp-964, 0x1.d965b064194c3p-680,
     0x1.582398b6dd77p-751, 0x1.48cab6379daf8p-273, 0x1.f4488f75e06fdp-14, 0.0, 0.0,
     0x1.cb560b627849fp-962, 0.0, 0x1.f8862f7f6603fp-229, 0x1.e496aacbeb26cp-53,
     0x1.d22ea158950aap-141, 0.0, 0x1.9cd9b25a720ep-316, 0x1.343ebd2a78e69p-967, 0.0,
     0.0, 0.0, 0x1.a8cddcbfaf386p-357, 0x1.bd5c46304f734p-744, 0.0, 0.0,
     0x1.792af4d9a4af9p-901, 0x1.2152cb9a800dp-529, 0.0, 0x1.12525de6a9b38p-870, 0.0,
     0x1.ffb38f40271d8p-141, 0x1.c62b0b653195p-299, 0.0, 0.0, 0x1.274725e34c371p-582,
     0x1.c449ae4cffb5p-802, 0x1.9d06272304927p-155, 0x1.89e9a18d15f47p-717, 0.0, 0.0,
     0x1.1abc77c15f94dp-503, 0.0, 0x1.837880764d193p-651, 0x1.199929b5685d7p-547, 0.0,
     0x1.543c2c617cbfap-954, 0.0, 0.0, 0x1.a8a32bea301d9p-299, 0x1.50c4083d378adp-295,
     0x1.c88499c9bd49p-727, 0x1.696b16eaf3bebp-559, 0.0, 0.0, 0.0,
     0x1.dd244dacbe605p-461, 0.0, 0x1.af5f073cc8b84p-374, 0.0, 0x1.1f76f38fe33b9p-84,
     0x1.86c44d1862ffep-999, 0.0, 0x1.f0bb011e20c7ap-296, 0x1.db82c2d9246f5p-507,
     0x1.e0d9794e8f003p-1008, 0.0, 0.0, 0x1.f0bf91e7cf337p-128, 0x1.a3533729ca2e7p-3,
     0x1.62fea4a54ecc3p-599, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.43b55c321cedcp-597, 0.0, 0.0, 0.0, 0x1.eddd3177dc05cp-660, 0.0, 0.0, 0.0,
     0x1.e7dbb54dbd73dp-10, 0.0, 0.0, 0x1.cc53d1014aaaep-620, 0x1.c5619ba1734fp-56,
     0x1.51961c8118997p-631, 0.0, 0.0, 0.0, 0x1.e2f353ef1941fp-286,
     0x1.d859f0a6449ebp-421, 0x1.d81ed95beed1cp-569, 0.0, 0x1.4602a2545f768p-610,
     0x1.fb915c8223a07p-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15dd5f73ba5f7p-103,
     0.0, 0x1.0e7b3158643d6p-179, 0.0, 0.0, 0x1.38dfafc906a32p-1005,
     0x1.70e455b265075p-831, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34973a9f9566dp-389,
     0.0, 0.0, 0x1.b3f463a85b236p-17, 0.0, 0x1.247a3654a2d58p-224, 0.0,
     0x1.aa8d42eaf9525p-915, 0.0, 0.0, 0x1.622b2a2470951p-440, 0.0, 0.0, 0.0, 0.0,
     0x1.0c37738c952e8p-432, 0.0, 0.0, 0.0, 0x1.73374b53b1d43p-934, 0.0,
     0x1.e1a8e028e9c3cp-886, 0x1.e14445eda5d72p-375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1800c86b80669p-506, 0x1.992cc9bad23d1p-679, 0x1.cbac4e74fac8bp-896,
     0x1.973730b25fb02p-557, 0.0, 0x1.57d16c9d4c4f2p-791, 0.0, 0.0,
     0x1.e56c62d90e5c6p-483, 0.0, 0x1.7118e603eeda6p-577, 0.0, 0x1.e897ddc724cf3p-380,
     0.0, 0x1.46daded432008p-663, 0x1.4e6f31a888281p-107, 0x1.560df313c3cd3p-487, 0.0,
     0.0, 0x1.e5cee64036bdcp-85, 0.0, 0.0, 0x1.bf53d457fa1d9p-867, 0.0, 0.0,
     0x1.d011ef8f0ad5bp-389, 0x1.93dd3e0d4c4dfp-533, 0.0, 0x1.cc5911bede858p-437,
     0x1.3f82fd1421b6cp-335, 0x1.8c549dc1b2ff1p-686, 0x1.d333f9a47df4p-657,
     0x1.8201a10cb5cc5p-152, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0ca6296ee966p-602, 0x1.8dd2000c1e124p-244, 0.0, 0.0, 0x1.cc54a9c93d9abp-532,
     0.0, 0x1.d3df71a75030dp-108, 0.0, 0.0, 0.0, 0.0, 0x1.4e8b11bcd6767p-859, 0.0,
     0.0, 0.0, 0x1.02b924a9dbc19p-834, 0x1.50c03ce0dc668p-102, 0.0,
     0x1.78df9ff5f0266p-47, 0x1.0af042c92de49p-427, 0.0, 0x1.2f27bcee45e3ep-149, 0.0,
     0x1.8f9c3ed06350cp-812, 0x1.d8abd4d6bc74cp-80, 0x1.ec896b91a51dfp-680, 0.0, 0.0,
     0.0, 0x1.629fa7580d56ap-421, 0x1.003a492c44accp-299, 0x1.61450db1ab498p-684, 0.0,
     0x1.89f5628a860b9p-873, 0x1.e8f199914db0ap-361, 0x1.8b7af3628e3bbp-701, 0.0,
     0x1.9a3bcb84a06aep-379, 0x1.c1d45973cdefp-735, 0.0, 0x1.f9f454db13fa5p-6,
     0x1.302ca0767e072p-826, 0x1.9bfcfa6ab6705p-430, 0x1.10ecff4ca8e1bp-584, 0.0,
     0x1.41041c14159eap-664, 0x1.bccb629e8413fp-758, 0x1.817f5bdc3ce21p-972, 0.0, 0.0,
     0.0, 0x1.0cc38e4d1b1d9p-932, 0x1.50ba4af77940cp-683, 0x1.9f1dcdb580ab8p-774, 0.0,
     0x1.c1369cdd53f66p-886, 0x1.ef49207f6c91fp-247, 0x1.c8ccbff6353ddp-156, 0.0, 0.0,
     0.0, 0x1.22b30a4801d11p-31, 0.0, 0.0, 0x1.a0516ecd16324p-944, 0.0, 0.0,
     0x1.9fafa3572205p-791, 0x1.466161add8e15p-140, 0.0, 0.0, 0x1.7221ba5edb76ep-206,
     0x1.dfb1ed1117cf2p-395, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d4f6aedc2782p-386, 0.0,
     0x1.e00972fe59a71p-399, 0x1.69c6b10e81698p-957, 0x1.2d18fe5bb61a8p-222,
     0x1.27b5a3287cb5ap-848, 0x1.2686b8bec139bp-607, 0x1.cc1fd32668ebap-793, 0.0,
     0x1.7ed754a5fd7dfp-611, 0x1.86355ca81ff8fp-975, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c86a6ecdc0493p-186, 0.0, 0x1.13de539869ef1p-17, 0.0, 0x1.31c1805382521p-130,
     0.0, 0.0, 0.0, 0x1.e25d8345d0133p-696, 0x1.7e925c75de96ap-18,
     0x1.c42d87f366362p-29, 0x1.dbf4b58dba5bdp-647, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40a0913c0f571p-838, 0x1.e2453415ee69bp-760, 0.0, 0x1.bf37013948f2ep-413,
     0x1.56bb9525777f6p-339, 0.0, 0x1.e5b3570ff428cp-549, 0x1.545505d3f71a9p-646,
     0x1.19c52edf45252p-737, 0.0, 0x1.eab0d5a566aa4p-681, 0.0, 0x1.b40419cf619ddp-617,
     0.0, 0x1.0c9710ffc5c9ap-104, 0x1.d9e8c81698722p-209, 0x1.6fa1346f75e68p-1015,
     0.0, 0x1.b57d0825207f5p-475, 0.0, 0.0, 0.0, 0x1.ea5edda0b3ef2p-321,
     0x1.90e61330cb3afp-100, 0x1.7f9a1c176013bp-719, 0x1.9481c06c9cf03p-944, 0.0,
     0x1.b5e7a57bab401p-117, 0.0, 0x1.65eab052ddb49p-278, 0.0, 0x1.28872832dd359p-767,
     0.0, 0.0, 0.0, 0.0, 0x1.9bff7cea1b364p-338, 0.0, 0x1.187f161486481p-705, 0.0,
     0.0, 0x1.ead80bff139p-34, 0.0, 0.0, 0.0, 0x1.cc66ce86780b3p-973, 0.0,
     0x1.2d0dd6d8460cdp-338, 0x1.a50eb6a32d5c7p-849, 0.0, 0x1.fabf173d3dce3p-656,
     0x1.0e77715d70daep-155, 0x1.77c098fbd67b8p-719, 0x1.3fe447a9ea709p-410
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
            tmp1 = Sleef_finz_acosd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_acosd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
