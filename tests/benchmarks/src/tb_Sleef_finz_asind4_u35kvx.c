/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind4_u35kvx.c --function \
 *     Sleef_finz_asind4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.8877020396416p-948, 0x1.1b1e2645ac882p-184, 0x1.4bcdc97e413d3p-801,
     0.0, 0x1.5e52023e7247p-240, 0.0, 0x1.ee9440e6c5193p-476, 0.0, 0.0,
     0x1.d9ca7a735a6e2p-144, 0.0, 0x1.7afc4603bbe47p-1008, 0x1.d09b7d502d5fep-354,
     0x1.6c95781b30accp-765, 0x1.fdb6b006bac45p-292, 0.0, 0x1.14d47fabf2b2ep-235, 0.0,
     0x1.bd2f06a0bcb5dp-91, 0.0, 0x1.58a5b1b243d09p-674, 0x1.4097d90b2154ap-433,
     0x1.aaf6b940d590bp-58, 0x1.bd488eaebb5a8p-291, 0.0, 0x1.d711e9ba2283cp-802, 0.0,
     0x1.a8496db8298c3p-199, 0x1.01a63e5c5c847p-300, 0x1.54d5eebcc7de1p-366,
     0x1.34b824c232377p-91, 0.0, 0x1.8507a846ef3ep-782, 0.0, 0.0, 0.0,
     0x1.f3c88212e8145p-438, 0.0, 0x1.7ba225ceb4da2p-804, 0.0, 0x1.44bb9674d8786p-995,
     0.0, 0.0, 0x1.8d3e18e931e44p-763, 0x1.26cf23b52f71ep-109, 0x1.788d445e1489bp-584,
     0.0, 0.0, 0.0, 0.0, 0x1.8aceecff3f41ap-467, 0x1.c339251a21686p-190,
     0x1.88cffb093904cp-720, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f460f84c40093p-965, 0.0,
     0.0, 0.0, 0.0, 0x1.23a04e180c5c4p-94, 0x1.e74b3919373b4p-212, 0.0,
     0x1.58fdb0b6eb78ap-610, 0x1.9181cc43f122fp-297, 0.0, 0.0, 0x1.28e9a2b8eb4fp-867,
     0.0, 0x1.d0828a2b7c9c3p-533, 0x1.14b1e9af179d8p-112, 0.0, 0.0, 0.0,
     0x1.688581f2db604p-189, 0.0, 0x1.d4fa563a931edp-541, 0x1.75f6375ec00fbp-387, 0.0,
     0.0, 0.0, 0x1.4c0ab3e586ec8p-289, 0x1.4d6a884268015p-470, 0x1.66b14549c78dp-742,
     0.0, 0.0, 0.0, 0x1.3ca8648cd7609p-746, 0.0, 0.0, 0.0, 0x1.9dc162f26cc2bp-761,
     0x1.2b6c477bed535p-934, 0x1.31bbffe2e899p-511, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.173f790c7671ep-522, 0x1.5e1d1785f18a9p-396, 0x1.84dd06fe3bd63p-941, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1936dc1d1c55p-762, 0x1.7d88a5db1ec1ep-515, 0.0,
     0.0, 0.0, 0x1.6da3f4d9cf11cp-846, 0x1.e33deeadb5bfdp-28, 0.0,
     0x1.44b5d5de6dc4fp-708, 0x1.3772fb5f13c3bp-86, 0x1.efddf7d4042fbp-381,
     0x1.380c487ca9c8ep-940, 0x1.9db8feb7ecfdp-727, 0.0, 0x1.4f046a773802ep-151, 0.0,
     0.0, 0.0, 0x1.f4d525a20bf55p-846, 0x1.5f267bd432f06p-95, 0x1.e913bd1ace00fp-566,
     0.0, 0x1.40c0399ad539p-340, 0x1.964d832333d6ap-295, 0.0, 0.0,
     0x1.02a6a0baf02efp-994, 0x1.c377e559d73bdp-417, 0.0, 0.0, 0.0, 0.0,
     0x1.16f7ab50a0da9p-705, 0.0, 0x1.3e1a97116c84cp-337, 0.0, 0x1.22e6c2ac9fa54p-687,
     0x1.10e084808077ap-969, 0x1.bc8a9652c6eebp-34, 0.0, 0x1.7e70649062cdap-187,
     0x1.8d6806482ff6fp-179, 0.0, 0x1.8eff1ff5aeba1p-814, 0x1.1deedf02ab743p-57, 0.0,
     0.0, 0x1.2133d6b5b42e2p-503, 0.0, 0.0, 0x1.8332616d96c89p-683, 0.0, 0.0, 0.0,
     0x1.21b1579143062p-591, 0.0, 0x1.19f10d0215934p-333, 0.0, 0x1.71fff11ac0fcep-953,
     0.0, 0.0, 0x1.26b9d2c42affcp-356, 0.0, 0x1.23b0288c55378p-706,
     0x1.86ff4cf79f676p-324, 0.0, 0.0, 0x1.cd3c4f6681283p-116, 0.0, 0.0, 0.0, 0.0,
     0x1.f0fb1b86fceffp-651, 0.0, 0.0, 0.0, 0x1.5bf261f877e72p-68, 0.0,
     0x1.7fd1580886903p-848, 0.0, 0.0, 0x1.1dc64bcc23dc4p-952, 0x1.1b570a1a94964p-162,
     0.0, 0x1.f861f0797cd73p-653, 0x1.79c6b7f3a5e24p-277, 0.0, 0x1.ea624aa1d3db2p-763,
     0.0, 0.0, 0.0, 0x1.828865ff7d868p-383, 0x1.bb9cbe5145553p-721, 0.0,
     0x1.4a5ba8f7722f5p-949, 0x1.e397cbb56c4dep-922, 0x1.921b5b548093ep-923,
     0x1.6ea8198cf477ap-331, 0.0, 0.0, 0.0, 0x1.021c46c599229p-924, 0.0,
     0x1.6778699b44c04p-816, 0.0, 0x1.24fd7a9a27f35p-309, 0x1.d58911b2f12e1p-669, 0.0,
     0x1.6eccdc0d1817bp-281, 0x1.9ff4edb621e24p-621, 0x1.cfc5ca5327201p-68,
     0x1.d072b04b415e6p-732, 0x1.728f58e0bbf4p-112, 0x1.34d75e26c6023p-290,
     0x1.01e1897ada59fp-610, 0x1.cbfbc8062ca54p-11, 0x1.f9ef57da63af3p-994,
     0x1.e73dcff65a6d5p-584, 0.0, 0.0, 0.0, 0x1.2a2d9ce119ba3p-1001,
     0x1.7e231e6ead23ap-202, 0.0, 0x1.ad4e56fc7c2cbp-679, 0.0, 0x1.a934c663796cap-583,
     0x1.7510d61e1b538p-243, 0.0, 0x1.ef16be547522dp-997, 0x1.8cd67d3c06372p-615,
     0x1.4dbc4ec049661p-503, 0x1.161985c2ffe6cp-217, 0x1.b6c148df7842bp-609,
     0x1.aee97d8d7038p-584, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a6cf113e0189p-11,
     0x1.c43da56415deep-177, 0.0, 0.0, 0x1.c32c5b900b4d5p-416, 0.0,
     0x1.9d6ec78959fecp-29, 0x1.e0232a432848dp-942, 0x1.be0aa8f2d9bbfp-244, 0.0, 0.0,
     0.0, 0x1.28dc4ad127a99p-674, 0.0, 0.0, 0.0, 0x1.d947732eff281p-297,
     0x1.4ae12d7969746p-763, 0.0, 0x1.9db817101486p-638, 0x1.822c0c12706d8p-709,
     0x1.7575273db346cp-391, 0x1.2ed7d3e553dcap-116, 0.0, 0.0, 0x1.c6df475a07206p-862,
     0x1.37c87e704ed75p-249, 0.0, 0x1.1034426926e8cp-60, 0.0, 0.0, 0.0, 0.0,
     0x1.2b89d4aa1961p-960, 0x1.03217edf94601p-508, 0x1.dcfa7bfbc98c7p-237, 0.0,
     0x1.fc297c4d32efdp-742, 0.0, 0.0, 0.0, 0.0, 0x1.2296f96c932f4p-551, 0.0,
     0x1.614438940cd04p-1010, 0.0, 0.0, 0x1.2d425f58e1b48p-540, 0.0, 0.0,
     0x1.110395246ab29p-964, 0.0, 0.0, 0x1.262c90ecf844ep-151, 0.0, 0.0, 0.0,
     0x1.fb8c6d58d4994p-447, 0.0, 0.0, 0.0, 0x1.d64efe50b1e11p-286,
     0x1.960640007b983p-462, 0x1.cae62d40736p-25, 0x1.d9cc01a32551p-247, 0.0, 0.0,
     0x1.a2fc5b06f7a85p-225, 0x1.86eb0a111adffp-22, 0.0, 0x1.f848407dd37f8p-848, 0.0,
     0x1.30b36df2bb6b2p-930, 0.0, 0x1.aa0fdfe8c7442p-860, 0.0, 0x1.d9a0cc8d42e6bp-377,
     0.0, 0x1.2e2649eef6f45p-621, 0x1.9c77a93ce4c8fp-888, 0x1.5156dfbb0c2d2p-406, 0.0,
     0.0, 0.0, 0x1.7da917c77aa6cp-236, 0.0, 0x1.842d6d7f16daap-92, 0.0,
     0x1.09fee510f77afp-981, 0.0, 0.0, 0.0, 0x1.6f71619bc2fdfp-26, 0.0,
     0x1.477ccee8ffeedp-224, 0x1.b940524cc2877p-140, 0.0, 0x1.7e7dd38bde926p-550, 0.0,
     0x1.4de829e43ef3bp-997, 0.0, 0x1.5d22ac817fe72p-518, 0x1.877a4b0db2b08p-259, 0.0,
     0x1.9a01f955dad56p-76, 0.0, 0.0, 0x1.75ca837d06c68p-489, 0.0, 0.0,
     0x1.d3379c25ec2d3p-977, 0x1.e4a594090ddacp-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.438f00b14b03cp-163, 0.0, 0.0,
     0x1.d9bfd1aa89bf8p-341, 0.0, 0.0, 0.0, 0x1.87cecc2499cc1p-756, 0.0, 0.0, 0.0,
     0x1.03267920e6beap-901, 0.0, 0.0, 0x1.519e95008d35dp-406, 0.0,
     0x1.9fd5ed310691ep-745, 0.0, 0.0, 0x1.789f3a7834aa4p-25, 0.0, 0.0, 0.0, 0.0,
     0x1.5a42ed31fb27bp-750, 0x1.85b15595830b4p-992, 0.0, 0.0, 0x1.d4bfbf3e0464p-155,
     0x1.c7aa4cddb201bp-854, 0x1.9c9f55a956551p-848, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46403203e12b6p-178, 0.0, 0.0, 0x1.f524f4ed1395fp-672, 0.0, 0.0, 0.0, 0.0,
     0x1.bc046a850293ep-968, 0.0, 0x1.119d664db4569p-520, 0x1.679886ee1bf1ap-986,
     0x1.ff33113cdf834p-971, 0.0, 0.0, 0x1.e4b5e3d957c49p-122, 0x1.8e14e4852d8aep-930,
     0x1.d59dcc9ee1f8bp-927, 0.0, 0.0, 0.0, 0.0, 0x1.3872a7173ff58p-146, 0.0, 0.0,
     0.0, 0.0, 0x1.180a3feea2f74p-581, 0x1.a796753f4f25bp-232, 0.0, 0.0,
     0x1.77edf11d8de8bp-506, 0.0, 0x1.0bbe2728fadaep-912, 0x1.002bf378cd61p-1015, 0.0,
     0.0, 0.0, 0x1.b62a8b7a626e6p-747, 0x1.f9fed210703c8p-426, 0.0, 0.0, 0.0,
     0x1.7ee7d75fd94b2p-903, 0.0, 0x1.49eb256b333f3p-1001, 0.0, 0.0,
     0x1.78b70303db574p-895, 0x1.6b6a33081ea79p-375, 0x1.b9144981511dp-165, 0.0,
     0x1.bbdbad86f4f7p-910, 0.0, 0x1.9942bc0f9b7b2p-40, 0.0, 0x1.66a731798c93p-899,
     0.0, 0x1.fcb6d20323256p-468, 0.0, 0x1.d9b104732c6dp-458, 0.0,
     0x1.d121dee324746p-737, 0x1.6ff8de54aed94p-790, 0.0, 0x1.c8663b7bad0fap-546, 0.0,
     0.0, 0x1.f8ead741212b3p-639, 0x1.c6ba86466a87ap-815, 0.0, 0x1.92f9d2a3b828cp-355,
     0.0, 0x1.840657efd6bep-612, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b0a71158929a8p-734, 0x1.4393007fd034dp-925, 0.0, 0.0, 0.0,
     0x1.c3f34e377b413p-822, 0.0, 0.0, 0x1.e8cb087f59ba8p-421, 0x1.b90542ac6ba53p-907,
     0x1.935a14a7110f5p-79, 0.0, 0.0, 0x1.f7a2cf431c8f2p-133, 0.0,
     0x1.46c1c90e6427bp-704, 0.0, 0x1.9e2a6a129e3a9p-190, 0x1.713bc1e8e80bap-162,
     0x1.34fe3f450ddf7p-549, 0.0, 0x1.41144bbe97218p-201, 0x1.d98a56afd6912p-878,
     0x1.00fddc9d1e43bp-528, 0x1.c48c28e665ce1p-755, 0.0, 0x1.88b31a434bb2dp-447,
     0x1.89afda6243ab3p-976, 0.0, 0.0, 0.0, 0x1.d92dd0107eadbp-574, 0.0, 0.0, 0.0,
     0.0, 0x1.8fc0743ce8945p-252, 0x1.f19e2d2961301p-810, 0.0, 0.0,
     0x1.cf498e2a74108p-813, 0x1.f3d6b89193559p-229, 0.0, 0x1.494b04ab5962p-713, 0.0,
     0x1.fba16d99e79d2p-438, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f3a1d12a0c6fp-750, 0.0,
     0.0, 0x1.7dc174a951b9bp-460, 0x1.9282e6769bf17p-525, 0.0, 0x1.b2a9c50d95501p-229,
     0.0, 0x1.21740aaae450ep-627, 0.0, 0x1.bcdc15dd90b2ap-402, 0x1.b1a3541052146p-14,
     0x1.7337e38cab373p-166, 0x1.375a0de20ed6ep-717, 0x1.8e47cad2e9162p-543,
     0x1.b6673c4e1e4e2p-463, 0.0, 0x1.8154954588048p-61, 0.0, 0x1.83f1da4d1196ap-748,
     0.0, 0.0, 0.0, 0x1.b0e0064539401p-393, 0.0, 0x1.2eee56fe98c47p-468, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.592ba447a3295p-618, 0.0, 0x1.0d4370f3c5ac5p-142,
     0.0, 0.0, 0x1.87c251b61313bp-980, 0x1.722cbe3e060b2p-118, 0.0, 0.0,
     0x1.9244bec4abb7p-276, 0x1.b5a9f1d288973p-665, 0x1.8caf044fc76a1p-655, 0.0,
     0x1.e08e23715d592p-325, 0x1.0090a4c24818cp-776, 0x1.8f2ba5cf83137p-389, 0.0, 0.0,
     0x1.1a6ade9750dc1p-713, 0x1.0b2ebe885e3fcp-915, 0x1.c345d43dde1a3p-838,
     0x1.6ec7ea70283cep-185, 0x1.a6c2d00114e83p-998, 0x1.0b45aa626426ep-941,
     0x1.9d3620e74b3adp-825, 0.0, 0.0, 0.0, 0.0, 0x1.528dff75a1ba6p-438, 0.0, 0.0,
     0.0, 0.0, 0x1.c3650aa01c787p-353, 0.0, 0.0, 0x1.c83a47868a9dbp-764,
     0x1.d3398fd252d25p-724, 0x1.3be51f2088748p-899, 0.0, 0.0, 0.0,
     0x1.d7ecdbc9dad71p-393, 0x1.504d027d74434p-630, 0x1.0553622f55632p-1001,
     0x1.74cef3c2fdd93p-551, 0.0, 0x1.e54c3d1200b53p-710, 0x1.c224149ebf6cfp-727,
     0x1.9bff2e6a24987p-914, 0.0, 0x1.f079126843c1ap-472, 0.0, 0x1.447949b4f0afbp-224,
     0x1.a6072c0851ea2p-563, 0.0, 0.0, 0x1.3cfc52db074c3p-362, 0.0,
     0x1.362e0a6b34725p-604, 0x1.c8a5933982a09p-982, 0.0, 0.0, 0x1.28f4dabe7aaa9p-435,
     0.0, 0x1.87391261d41p-853, 0x1.28063ea0348ffp-864, 0x1.80a55ec0e0b7ap-696, 0.0,
     0.0, 0x1.f60f2c05bca3bp-340, 0x1.60228289cbbe2p-849, 0x1.07a20f9b1efa3p-664,
     0x1.0aec1830f09a6p-623, 0.0, 0x1.0bc757d23a4ffp-605, 0.0, 0x1.d03ca8a37c3d1p-267,
     0.0, 0.0, 0x1.1e3c56164cfc3p-146, 0x1.840907dbe6ee4p-367, 0.0,
     0x1.8c1637f816e12p-432, 0x1.7814dae8cf699p-479, 0.0, 0x1.4918001ec08e5p-612, 0.0,
     0.0, 0x1.957f1d6b2b566p-775, 0x1.7f4676c0566e5p-619, 0.0, 0x1.23129b1813275p-859,
     0x1.9d001e16a95e2p-587, 0x1.8b445dde6b0ddp-895, 0.0, 0.0, 0.0,
     0x1.9347e1a00dd7p-600, 0.0, 0.0, 0x1.c4477f2ca6162p-80, 0.0, 0.0, 0.0, 0.0,
     0x1.644797cd3f5fep-452, 0x1.d5dabcd17da7dp-41, 0x1.7629d61f074eap-949, 0.0, 0.0,
     0x1.4c2ae71378b13p-55, 0.0, 0x1.788b68cc79e36p-448, 0x1.6a8ed0fb478e8p-5,
     0x1.98aca0b4ff55p-660, 0x1.537c71163dad3p-962, 0.0, 0x1.b9a97964eb41ep-54, 0.0,
     0.0, 0x1.9ccd93159f882p-76, 0x1.6b1ed44df3a85p-503, 0x1.cf03fc633dbe9p-647,
     0x1.20b4ff5139687p-988, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43d5694ab4a09p-1012,
     0x1.248e77a959688p-38, 0.0, 0x1.0290a719d09a1p-290, 0.0, 0x1.641c636688bf1p-1008,
     0x1.2cc7bc79e7d42p-483, 0.0, 0.0, 0.0, 0.0, 0x1.77dcdc48d1641p-971, 0.0, 0.0,
     0.0, 0x1.2582c4b3250bbp-167, 0x1.224d0baa921p-715, 0.0, 0x1.c74f58866b8bdp-298,
     0x1.97f1f682d39e1p-714, 0x1.c0eb55273f906p-954, 0x1.7aa04a520d5c9p-891,
     0x1.1449057811ba8p-1004, 0.0, 0.0, 0.0, 0x1.3fe98d8678575p-260, 0.0,
     0x1.f3443dca6718dp-214, 0.0, 0.0, 0x1.e92fc2e0d425cp-672, 0x1.07d5f4234fbfap-790,
     0.0, 0.0, 0x1.00060571c5046p-79, 0x1.0df459822f936p-506, 0.0,
     0x1.f55ae4b652c1ap-872, 0.0, 0.0, 0x1.2d79d5cba47cdp-811, 0.0, 0.0,
     0x1.39bf541e991f9p-222, 0x1.e04047e6c662dp-399, 0x1.4d46293a7d447p-842,
     0x1.7f3ad3505dfcfp-697, 0x1.e758f54dbce95p-644, 0.0, 0.0, 0.0, 0.0,
     0x1.e5bacde9ea54bp-765, 0x1.3df49b1c5641ep-154, 0x1.d9c76a813a885p-408, 0.0, 0.0,
     0x1.ac1c1f8adb5e5p-46, 0x1.4a7c72d06fb0ep-631, 0.0, 0x1.f2996bcb366a2p-116,
     0x1.5f6a59925d33dp-995, 0x1.7d657a27690d1p-120, 0.0, 0x1.d8240660bdc04p-148,
     0x1.c1396078fbe93p-796, 0.0, 0x1.d2a95de78eb63p-632, 0x1.d80ef3c51de51p-25, 0.0,
     0.0, 0.0, 0.0, 0x1.82d1b93c03af4p-511, 0x1.bdfcccabb512ep-68, 0.0, 0.0,
     0x1.b820062fdfc93p-164, 0.0, 0x1.7ba5515e49dd1p-215, 0x1.c950cf51bae68p-136, 0.0,
     0.0, 0x1.495bcd32222e9p-27, 0.0, 0.0, 0x1.d3949aacdceb1p-506, 0.0, 0.0, 0.0, 0.0,
     0x1.c9a93ae00a871p-181, 0.0, 0.0, 0x1.bf487452c86fp-574, 0x1.d1b61a8a830e2p-783,
     0.0, 0x1.4c31ba1dc2161p-465, 0x1.f898db9c55a7dp-268, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4ad0dd5c77cb3p-35, 0x1.74d4261108a18p-1014, 0.0,
     0x1.79a0e3235489bp-800, 0x1.237ce47976f15p-54, 0x1.2d50ccd31418ep-715,
     0x1.58c458636cbe9p-54, 0.0, 0x1.1161493dc51a5p-607, 0x1.73a70d6016e2cp-41, 0.0,
     0.0, 0.0, 0.0, 0x1.9ee16e599fc4dp-934, 0x1.aee0994fccf19p-440, 0.0,
     0x1.4efbc8ef97653p-468, 0x1.320a5b88de92cp-490, 0.0, 0x1.22530212cad61p-819, 0.0,
     0x1.d4e8d0f44b9d3p-324, 0x1.d924f092abc8bp-1011, 0.0, 0x1.796479cab5032p-853,
     0x1.fa61e7cc2ff76p-83, 0x1.f5171e0176fbap-642, 0.0, 0.0, 0.0,
     0x1.05b12cdfe6ad9p-908, 0.0, 0x1.ad78120ff57c6p-405, 0.0, 0.0, 0.0,
     0x1.6e740e349a054p-371, 0.0, 0x1.e173e19e219c6p-157, 0x1.78020db8f65abp-915,
     0x1.b19c4d54cf154p-413, 0.0, 0.0, 0x1.86e1764d717cp-308, 0x1.891eb0f5d2e73p-447,
     0x1.246a97df5147fp-72, 0x1.3532889ae62f5p-761, 0x1.86c36d6dd2b96p-869, 0.0,
     0x1.b6d0430e73662p-94, 0x1.556f7f1e1b4c4p-232, 0.0, 0.0, 0x1.af915f3d3f7d5p-100,
     0.0, 0x1.31269eea0ff24p-673, 0x1.cd19e2d893f4bp-845, 0.0, 0x1.d8ff800f194b8p-422,
     0x1.d23e0b527349fp-504, 0.0, 0x1.a32a4bff4cc08p-521, 0.0, 0x1.b54c52bdf792dp-335,
     0.0, 0.0, 0.0, 0x1.42ee89b05f6dep-565, 0x1.7827f072f3d86p-716,
     0x1.a04911ea17219p-684, 0x1.b2205cb3282c9p-986, 0x1.5cd7d271fa31fp-137, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b7b50f5c22e27p-692, 0.0, 0.0, 0x1.6fc0836845f3p-211, 0.0, 0.0,
     0.0, 0.0, 0x1.3e7ca75134dd9p-705, 0x1.e2d6d96e688f6p-814, 0.0, 0.0,
     0x1.e37a7be97b5d4p-624, 0.0, 0.0, 0x1.3434b2c7e40cdp-770, 0x1.0c237510a29bp-575,
     0x1.408165c6c665bp-55, 0.0, 0x1.cee7d4e7146fbp-886, 0.0, 0.0,
     0x1.9f64f6338ae87p-611, 0.0, 0x1.4075198be08dbp-166, 0.0, 0x1.3acd018b6c1e5p-794,
     0.0, 0x1.6ff275dea1d4bp-1007, 0.0, 0x1.e508921cdc0bfp-948,
     0x1.962924af71e88p-702, 0x1.94a857914b8ep-233, 0.0, 0.0, 0x1.46816324cb482p-824,
     0.0, 0.0, 0.0, 0x1.fea7324f30f85p-358, 0x1.59f68963818bp-208, 0.0,
     0x1.4a9e40f402452p-931, 0x1.7b00c76e75ecfp-834, 0x1.625cef299b7f9p-206,
     0x1.0985ee767033bp-361, 0x1.91b0902f11a52p-646, 0.0, 0x1.e786d4d66549ep-637, 0.0,
     0x1.f140faba26f6ep-915, 0x1.987abad3c2875p-376, 0.0, 0x1.7cbefe22379c7p-142, 0.0,
     0x1.9815452239be2p-428, 0x1.2621b46d67448p-443, 0x1.000a68af90ba8p-1004,
     0x1.66e1485070581p-733, 0x1.58f17d10e19a6p-341, 0.0, 0x1.495e2e38ce996p-336, 0.0,
     0x1.331b076dd5eafp-696, 0x1.ac68612b926e2p-211, 0.0, 0x1.214b7621c6248p-828, 0.0,
     0x1.d78beac50bb95p-600, 0.0, 0.0, 0.0, 0x1.d36365e11ddfap-60,
     0x1.a4b4460ce95f2p-770, 0.0, 0x1.d4a2f360d6ef7p-258, 0.0, 0x1.cc79595a48e36p-678,
     0.0, 0.0, 0x1.5402ba67a0309p-760, 0.0, 0.0, 0x1.e0fa0085648fbp-261,
     0x1.b5efd46e2eeffp-200, 0x1.43cee1c10f8e2p-875, 0.0, 0.0, 0x1.337676094a41p-413,
     0.0, 0x1.a39db5e851a26p-482, 0x1.a2dc0993adf38p-879, 0x1.63c3431154e97p-466, 0.0,
     0.0, 0.0, 0.0, 0x1.f73b55ca1991fp-238, 0x1.80f3b340e87cdp-872,
     0x1.ff980916db1bdp-440, 0x1.2a4130c6f02ffp-678, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_asind4_u35kvx(tmp0);
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
    printf("Sleef_finz_asind4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asind4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
