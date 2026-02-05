/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind2_u35avx2128.c --function Sleef_sind2_u35avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.ca2f9d5d12dd2p-64, 0x1.9a7792609eaap-363, 0x1.9130815b4b60ap-635,
     0x1.62eb06ee00b1ep-1018, 0x1.e39a38313b7d8p-122, 0.0, 0.0,
     0x1.2b71cfe4fc934p-379, 0.0, 0.0, 0x1.1e34d2af9342ep-74, 0x1.d5d4d8bed3888p-664,
     0.0, 0.0, 0x1.52047e7cd08d7p-448, 0x1.bddd19a81775dp-198, 0.0, 0.0,
     0x1.8af7aded9cbbfp-940, 0.0, 0x1.f945936976cdep-608, 0.0, 0x1.10bd7e36c7771p-906,
     0x1.579917f05095fp-817, 0x1.9c8019b0b8d63p-997, 0.0, 0.0, 0.0,
     0x1.9a9a1ec191a6fp-204, 0.0, 0x1.f4084f3b3052fp-886, 0.0, 0x1.44ff92d56944cp-648,
     0x1.98628d29f0a8p-178, 0x1.fe0d9b04845fp-556, 0.0, 0x1.ffdc5062e72a7p-552, 0.0,
     0x1.37cb5b040d487p-400, 0.0, 0.0, 0.0, 0.0, 0x1.2e96699f6aee8p-224, 0.0,
     0x1.78ae5f26ffb83p-251, 0.0, 0x1.4c4506da5bee9p-158, 0.0, 0.0,
     0x1.d1fdfd193b3f6p-540, 0x1.38d922a74d7f3p-354, 0.0, 0x1.87aee41aaad86p-149, 0.0,
     0.0, 0x1.6c3eedafe7419p-489, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.982abb39538adp-33, 0x1.9964614acd60ep-521, 0x1.9c097cc5e4199p-306, 0.0, 0.0,
     0.0, 0x1.b130b30a1d2d2p-610, 0.0, 0x1.dce253d5a5965p-502, 0.0,
     0x1.74414d66e4252p-77, 0.0, 0x1.fad1f8fe6dde6p-364, 0.0, 0.0,
     0x1.a61293eff6316p-916, 0x1.24eab70847892p-220, 0x1.6a50b2eed6449p-37, 0.0, 0.0,
     0.0, 0x1.c4ab55bb2e9c4p-293, 0.0, 0x1.8d8fc8e83eb5ap-806, 0.0, 0.0, 0.0,
     0x1.6f66b26d79e12p-308, 0.0, 0.0, 0.0, 0x1.98d06f64094c6p-798, 0.0,
     0x1.ec7775eedac6bp-900, 0.0, 0.0, 0.0, 0x1.99cb1243d1027p-615,
     0x1.d0f696baa08dfp-954, 0.0, 0x1.f8c38a7eb02fep-692, 0x1.b1e3d5403aaf4p-587, 0.0,
     0.0, 0.0, 0.0, 0x1.0d0597ee11878p-920, 0x1.895c435b0d8d2p-571, 0.0,
     0x1.c86a7a408c45ep-791, 0x1.447f597d3fef7p-2, 0.0, 0.0, 0.0,
     0x1.c14746987a334p-685, 0x1.4fafb34bf5a93p-692, 0x1.d0dd12002855cp-528, 0.0,
     0x1.248c7c848ca6ap-437, 0.0, 0.0, 0.0, 0.0, 0x1.ae6344b82b821p-649, 0.0,
     0x1.b8edf3e2803c5p-398, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8170f8325acdp-647,
     0x1.977f05697e2f2p-900, 0.0, 0x1.f1170feac645cp-764, 0x1.dafc0a7789b34p-256,
     0x1.588777886c952p-502, 0x1.1034f09123216p-672, 0x1.422769e77a773p-328, 0.0,
     0x1.42a52a43dc009p-595, 0.0, 0x1.4081509329874p-934, 0x1.52e47dd3385d9p-372, 0.0,
     0x1.758506f3c87aap-975, 0.0, 0x1.287a66b87f226p-927, 0.0, 0.0, 0.0,
     0x1.0d14f8e72c043p-746, 0x1.7083d47ec2164p-447, 0.0, 0x1.6212eba4108f1p-941, 0.0,
     0.0, 0.0, 0.0, 0x1.6999231b6660bp-919, 0x1.314f9506dd827p-161,
     0x1.f6dc11ba8be27p-608, 0.0, 0.0, 0x1.2b653d5a42433p-971, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.59098628144d6p-150, 0.0, 0x1.f223b5d3d213ep-378, 0.0,
     0x1.0956f214d71dbp-694, 0.0, 0.0, 0x1.06b3ee989fdf1p-462, 0.0, 0.0, 0.0,
     0x1.b3236030690e1p-217, 0x1p0, 0.0, 0.0, 0x1.fb06ac70f5f8ap-128, 0.0, 0.0,
     0x1.298119bc1f0eap-656, 0.0, 0x1.390a34311cc8fp-338, 0x1.22ae6d4d3f1c8p-944,
     0x1.5f514e3379581p-891, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49c5888c4148cp-372, 0.0,
     0.0, 0x1.884f84766fab7p-134, 0.0, 0x1.7553b3fb44fcdp-662, 0.0, 0.0,
     0x1.0abf296dece7bp-273, 0x1.6f6ffa978641cp-958, 0x1.2a7dd5355db73p-603,
     0x1.3cc3cb2bca93cp-75, 0.0, 0.0, 0x1.229f43fe523c5p-76, 0x1.4531ffa4c1b6ap-773,
     0.0, 0.0, 0.0, 0x1.7f0abab006ef4p-425, 0.0, 0x1.d3c8212bc94ecp-648, 0.0,
     0x1.992b084c757f2p-85, 0.0, 0.0, 0.0, 0.0, 0x1.9d90c716db8e5p-182,
     0x1.1a4de57ce11a3p-106, 0x1.461e3e0d0c323p-435, 0x1.800404f7983f3p-933, 0.0,
     0x1.4fdb74cd2010cp-198, 0x1.abdc53b7573e8p-1022, 0x1.ce4a0744f28dbp-825, 0.0,
     0x1.f30d24115c8bep-835, 0x1.c9482ccab24d6p-674, 0x1.508f7b2b132e7p-214, 0.0, 0.0,
     0.0, 0x1.c3f2dd0f0ddddp-757, 0x1.7931a34682102p-399, 0x1.4a6a1e11acd3dp-808,
     0x1.b74b159ac5aefp-96, 0.0, 0.0, 0.0, 0.0, 0x1.a4433a5a4f4b3p-959, 0.0, 0.0, 0.0,
     0x1.aa163d45aab65p-239, 0x1.2258374002af3p-357, 0x1.822ca81bd1159p-797, 0.0, 0.0,
     0.0, 0.0, 0x1.a5bf4ec1c1887p-338, 0.0, 0.0, 0x1.3ded3842a2817p-34, 0.0,
     0x1.b0b756b585473p-26, 0x1.01713e382f837p-633, 0.0, 0x1.ca06d85c20aaep-733,
     0x1.6020e730ba641p-1011, 0.0, 0x1.8269212a12383p-227, 0x1.420647753ed78p-804,
     0.0, 0x1.b334278f9abb8p-453, 0.0, 0x1.facb07fe65ca6p-155, 0.0,
     0x1.9450d93212c46p-159, 0x1.8e456026cd6d8p-937, 0.0, 0x1.d4d8ec7814a4ap-745, 0.0,
     0.0, 0.0, 0x1.3eb61256544fbp-1002, 0x1.52420914fd9e6p-475, 0.0,
     0x1.43284d97b2331p-653, 0.0, 0.0, 0.0, 0x1.740c98d840841p-138, 0.0, 0.0,
     0x1.5385cc78af919p-774, 0x1.72ca4afd062ffp-127, 0.0, 0.0, 0.0,
     0x1.26bca41f1f2a9p-751, 0x1.924b0f39b771cp-463, 0x1.5ae41f7e3d06bp-81,
     0x1.f23423b98bd67p-275, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3589d754d7291p-688,
     0x1.7320e7c96cf61p-240, 0.0, 0.0, 0.0, 0x1.faa9c54fa238p-615, 0.0, 0.0, 0.0,
     0x1.0e600c7822f6bp-598, 0.0, 0x1.9d74b5047f4cp-874, 0x1.2f3a963f577fdp-634, 0.0,
     0x1.faa2a9de10105p-820, 0.0, 0x1.4885dbf2f6ad8p-306, 0x1.40e57ae7f1abbp-45, 0.0,
     0.0, 0.0, 0.0, 0x1.fb0d786023475p-172, 0.0, 0.0, 0x1.fb613e1cbf623p-384, 0.0,
     0x1.cad1d6b57c173p-530, 0.0, 0.0, 0x1.0e879d64ecba9p-656, 0.0, 0.0,
     0x1.a781d3abd062fp-917, 0.0, 0x1.8d8a505122cb6p-64, 0.0, 0x1.8be41d91e7b6cp-1018,
     0x1.a158c03fcfd59p-207, 0.0, 0.0, 0.0, 0.0, 0x1.64a69f1bf0c14p-579, 0.0,
     0x1.6e0123305c97fp-126, 0.0, 0.0, 0x1.379b963c64f32p-918, 0x1.58ffaacc5a258p-139,
     0x1.f129d863ad5e8p-160, 0x1.d7f3db84830dep-917, 0.0, 0x1.abfff030327d9p-1021,
     0x1.848d22f5dc841p-251, 0x1.85d625218a654p-633, 0.0, 0x1.ecfc340b497d7p-784,
     0x1.6e220881f47fp-879, 0x1.7d26287dc3f52p-363, 0.0, 0.0, 0.0,
     0x1.c702474116086p-305, 0x1.8b47ff0a1905fp-694, 0x1.429752ca4b272p-86, 0.0, 0.0,
     0.0, 0.0, 0x1.c60c99e6807edp-447, 0x1.539c49ccaeb21p-74, 0.0, 0.0,
     0x1.1f4fc7cfce5b2p-902, 0x1.8b19909c4982dp-626, 0.0, 0.0, 0.0,
     0x1.2b005bd0af9a6p-705, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6483a61f9d87p-856,
     0x1.47738a0eb66a1p-654, 0.0, 0.0, 0x1.5b859bed2852ep-987, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4b97edf8456b5p-234, 0.0, 0x1.3f633c15191c5p-735, 0.0, 0.0, 0.0, 0.0,
     0x1.7434cad2487d2p-289, 0.0, 0.0, 0x1.d4ad8fc983ecap-85, 0x1.d4f614fb8a748p-806,
     0.0, 0x1.4cac8f79efff8p-532, 0x1.8ea615975181cp-425, 0x1.d1da74114c246p-369,
     0x1.6a5d43e5b7cb2p-692, 0.0, 0.0, 0x1.ce38fddbcae9ap-614, 0.0, 0.0,
     0x1.da036d8202731p-245, 0.0, 0x1.571035943e8f3p-852, 0.0, 0x1.0edc0b1374404p-931,
     0.0, 0.0, 0x1.72d24bcaa0d1ep-647, 0x1.e646c4c69e6dfp-904, 0x1.8f91be22f3771p-204,
     0x1.8083f141ce752p-448, 0x1.0b1a279621514p-308, 0x1.0425cdb40205cp-583,
     0x1.cea7588bbc585p-860, 0.0, 0x1.64c323444155ep-396, 0x1.28455cfc50b86p-396, 0.0,
     0x1.e3dc369eb83c1p-366, 0.0, 0.0, 0.0, 0x1.a8236aa692081p-224, 0.0,
     0x1.a6660c73be2fcp-815, 0x1.0185e9514d88p-404, 0x1.0a7f81d888581p-3,
     0x1.af4c51038e5ebp-419, 0x1.41f3d1726ff8cp-809, 0.0, 0x1.e17180d5146a6p-778, 0.0,
     0.0, 0x1.5bb9abd33df12p-373, 0x1.66102697cc458p-408, 0x1.52feea6a1d365p-795, 0.0,
     0x1.4ae00d874d184p-432, 0x1.c357d6f7c2913p-837, 0x1.45744bf64daap-281, 0.0,
     0x1.c14db6c0efb4cp-441, 0x1.74adc1016d976p-123, 0.0, 0x1.2b08166e2c40ep-116, 0.0,
     0.0, 0x1.50af0af80854ep-629, 0x1.e6e5f21bd2f71p-706, 0.0, 0x1.107f28852c13cp-923,
     0x1.46b537be13a4bp-671, 0.0, 0x1.8eee7f1949962p-343, 0.0, 0.0,
     0x1.df04d06c8809p-661, 0.0, 0.0, 0.0, 0x1.2b160cc8dfeddp-167,
     0x1.7b6dbcc6b10f2p-807, 0x1.b2b2e8291d401p-274, 0x1.e139032ea5859p-507, 0.0,
     0x1.feaa99f76ce36p-675, 0x1.50f80bcbc207bp-549, 0x1.4aa2408aaedc2p-332,
     0x1.d1d9ef0f49728p-87, 0x1.2596fa51e0cffp-617, 0.0, 0x1.07127ea6f9cddp-569, 0.0,
     0.0, 0x1.27269d7d9c929p-126, 0.0, 0x1.a12cfbea1c305p-575, 0.0,
     0x1.de527aaa5be46p-1016, 0x1.105568dd2a4f8p-171, 0.0, 0x1.7228adbd35ba3p-353,
     0x1.d31bae99133ffp-72, 0x1.f06b27ea14df7p-844, 0.0, 0.0, 0.0, 0.0,
     0x1.b48696520c133p-141, 0.0, 0x1.32b4a2f8952adp-783, 0.0, 0.0,
     0x1.d56e68f6dc106p-687, 0x1.41b204f09aeep-4, 0x1.5fd827980df45p-622,
     0x1.b2fe85aa8aee3p-827, 0.0, 0.0, 0.0, 0x1.15aa9fea9eeb1p-723, 0.0, 0.0,
     0x1.ee091f752cd55p-289, 0.0, 0x1.5911eead5c264p-29, 0x1.56ac2d1411d43p-601,
     0x1.72e344998235ap-155, 0.0, 0x1.3cae0cf5b4ff7p-125, 0.0, 0x1.2f3ac1b4c5859p-98,
     0.0, 0.0, 0.0, 0x1.edc66b38aea2ap-333, 0.0, 0x1.9182e5f537dbcp-133,
     0x1.6f2eaf43f8162p-534, 0x1.797cf2e5dc2dp-611, 0.0, 0.0, 0x1.86da9089b87f3p-677,
     0.0, 0x1.00b600636cb43p-411, 0.0, 0x1.21936ef5cef0dp-604, 0x1.84af7c75e46d9p-417,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c033cd18015b6p-299, 0.0,
     0x1.77c43c291c891p-726, 0.0, 0.0, 0x1.e23a3428dbae6p-182,
     0x1.e1d5c65fc7115p-1022, 0x1.325b249d3fe0ap-452, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc10210ca1a8p-780, 0x1.05598b1d5ad0bp-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4b39cf50da136p-781, 0.0, 0x1.9bc71716e4da8p-690, 0x1.a61d2c785a82ep-293, 0.0,
     0x1.2f08d782ccf33p-155, 0.0, 0x1.ca6263d958febp-778, 0.0, 0.0, 0.0, 0.0,
     0x1.455b781bf375cp-826, 0.0, 0.0, 0x1.7b77e6988a653p-803, 0x1.4b4620c33df6cp-875,
     0x1.87d8540f37488p-327, 0.0, 0.0, 0x1.b5ef3a55e08adp-134, 0x1.4dc63253fd0c8p-92,
     0.0, 0.0, 0x1.028d7ec644e1p-432, 0x1.c0c48cdaf315bp-135, 0.0, 0.0, 0.0, 0.0,
     0x1.e955367d0c7d9p-396, 0x1.cd39e3fb33199p-430, 0.0, 0.0, 0.0,
     0x1.3f3f12411a287p-595, 0x1.27802662cb026p-779, 0x1.71eb068af4d36p-705,
     0x1.bdc7c47a581aap-360, 0x1.a8579e16e6e8dp-94, 0x1.344ea0ee71e11p-291,
     0x1.736655bf59ea1p-584, 0x1.f56789aecd13fp-746, 0.0, 0.0, 0x1.ff8cbbaf1c382p-657,
     0x1.35a7247257017p-646, 0x1.b3fd64c68c2e9p-476, 0.0, 0x1.c64fdad2cf442p-665, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7bacff8f479eep-782,
     0x1.ce6b008907979p-259, 0.0, 0.0, 0x1.cbb2c5ffa42c8p-455, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.82412198d0ba8p-227, 0x1.8796106dd125dp-477, 0x1.ff69083bae41ep-539,
     0x1.d87acc2ee0555p-135, 0.0, 0x1.b46408fc3c0cfp-323, 0x1.444fc1b7bbc4dp-521,
     0x1.322addea4d57ap-474, 0.0, 0x1.5f99a84c128c1p-606, 0.0, 0x1.cb8c2ee050d18p-678,
     0x1.d190383ff9d0ap-567, 0.0, 0.0, 0x1.2a92a5f607d56p-883, 0.0,
     0x1.09ac9ee61cea5p-823, 0.0, 0.0, 0.0, 0x1.97ebe4576dd74p-919,
     0x1.9dffbed448af9p-62, 0.0, 0.0, 0.0, 0x1.f0e3f49e4a55ep-973,
     0x1.c5ed38691765ap-435, 0x1.2061951e95742p-92, 0x1.e20936d281c68p-570, 0.0,
     0x1.ae67963d99d2dp-30, 0.0, 0.0, 0.0, 0x1.97acaba09553ep-467, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2db9e7f9b5ae9p-924, 0x1.c6d29e017f23p-996, 0x1.582c8b15b4deap-244,
     0x1.ed640f243ee3bp-629, 0.0, 0x1.55d44139bf5e6p-344, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.13cdbc696540dp-224, 0x1.44cc134235087p-952, 0x1.577507561ea47p-703,
     0x1.b4263dcedcd01p-98, 0.0, 0x1.3fd080c912c6fp-87, 0.0, 0x1.f88877c748038p-907,
     0.0, 0.0, 0x1.661b111f8bf1bp-927, 0.0, 0x1.c7ab84c960709p-297,
     0x1.90675cb8662fdp-183, 0x1.efd72f677fa4fp-989, 0x1.bcedb7ddd041cp-759, 0.0,
     0x1.4038fdb27c70bp-439, 0.0, 0x1.9306a8f96ffc7p-424, 0x1.73928cf889cfap-613, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d464a9c4b076fp-160, 0x1.b54f625a20649p-558,
     0x1.ada1049dbbb17p-581, 0.0, 0.0, 0.0, 0x1.f83f6e42a2c06p-527,
     0x1.d5216d804108bp-686, 0.0, 0x1.c9a04167d805ap-982, 0.0, 0.0,
     0x1.fb0979ae56262p-362, 0x1.d00b3aec1783bp-597, 0.0, 0x1.051eeb5dde481p-812, 0.0,
     0.0, 0x1.798ffd8533ebep-493, 0x1.bca476fa8ca71p-488, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7ce77a86a3de9p-571, 0x1.0964a761f76c7p-409, 0.0, 0.0, 0.0,
     0x1.9fadacd443e28p-947, 0x1.88a760eb03fc4p-592, 0x1.0b1d2e5e901fep-555, 0.0,
     0x1.0d4b8d9c4ec51p-104, 0x1.26612d37f7658p-500, 0.0, 0x1.6a9d2243e1aa7p-502,
     0x1.6dd9b4c27a939p-997, 0x1.c2abad9fc68cp-582, 0.0, 0x1.0bf0f29eab723p-209, 0.0,
     0.0, 0.0, 0x1.02940a5450451p-462, 0x1.4f64bdf3c994fp-385, 0x1.d22f3d04eb475p-768,
     0x1.61b0d23d22f6p-478, 0.0, 0.0, 0x1.c5bbfb9265ea7p-413, 0x1.1fe346d95c5bap-933,
     0.0, 0x1.8ce2f217e3f15p-1006, 0x1.62bc67ef2c0f9p-788, 0x1.3ba6876c0c34ap-1013,
     0x1.9130654daf6b3p-961, 0.0, 0x1.f782eb8252958p-989, 0x1.d3a01e30b5673p-273,
     0x1.02324400de79dp-988, 0x1.c47392c57a5d7p-264, 0.0, 0.0, 0x1.7eb7b91fa4b84p-311,
     0x1.4d6b58b45615p-336, 0x1.6e004859b90e6p-650, 0x1.c44afb29cdfebp-522, 0.0, 0.0,
     0x1.1c64d7003e41dp-730, 0.0, 0x1.467c819ef81acp-447, 0.0, 0.0,
     0x1.6c113627471e2p-439, 0x1.bbcd7c1760809p-353, 0.0, 0x1.d5fe3d13faf9dp-321,
     0x1.2e0ee17219a9cp-722, 0.0, 0.0, 0x1.d5d1dd32fe0bcp-888, 0x1.988b71a86937fp-864,
     0x1.91b9842373d46p-976, 0x1.0e307607fe73bp-857, 0x1.6ab7f93b98367p-165, 0.0, 0.0,
     0x1.eb29bbb266082p-511, 0x1.a7039b7d7575cp-207, 0x1.be45c6c63d114p-722, 0.0,
     0x1.d3b020eb270bbp-196, 0x1.f3e2e8e025cefp-733, 0x1.34020bb1b6ba3p-106, 0.0, 0.0,
     0x1.db44c3e49f93ep-426, 0x1.5f9dc1d73c5d8p-279, 0x1.227df212622b6p-1008, 0.0,
     0.0, 0x1.9daf0ad3b874dp-553, 0x1.3aa87e54c595bp-783, 0x1.0147146c36846p-247, 0.0,
     0.0, 0.0, 0x1.cab0f9edce6ffp-83, 0.0, 0.0, 0.0, 0.0, 0x1.ff05b740d9af7p-661, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13c93ce2f80f2p-718, 0.0,
     0x1.597e08d05492cp-523, 0x1.dc5dde6bdc247p-513, 0x1.7a34a02d054d3p-470, 0.0,
     0x1.c131684f89dbp-965, 0x1.7c8383f381b6p-37, 0x1.560cdb105127bp-20, 0.0, 0.0,
     0.0, 0x1.976c2073653a8p-524, 0.0, 0.0, 0x1.bad305531eb4p-531,
     0x1.5b68c2b3c8411p-712, 0.0, 0x1.54473c59d354ep-593, 0x1.7e05572023786p-427, 0.0,
     0.0, 0x1.cc0f1b899fc4bp-562, 0x1.7449013d4885ap-91, 0.0, 0.0, 0.0,
     0x1.64d0f1ecdf9ap-422, 0x1.2f17069d81807p-237, 0x1.fc748e202bdf8p-172,
     0x1.f67141a8d8649p-452, 0x1.f9fe784a4a31ep-493, 0.0, 0.0, 0.0,
     0x1.7bc3f468a6ed9p-921, 0.0, 0.0, 0x1.6a0ab8272c3a9p-105, 0.0,
     0x1.83a7719261b38p-870, 0.0, 0x1.7f691eaef6314p-983, 0.0, 0.0, 0.0, 0.0,
     0x1.e0e1671908911p-395, 0x1.91c75012a9fcep-660, 0x1.a6acefc25b504p-939,
     0x1.ed6a385927adp-883, 0.0, 0.0, 0x1.2e72141aa42e5p-547, 0x1.fac2faffaeea5p-851,
     0.0, 0.0, 0.0, 0x1.a4e82ec81c47ep-386, 0.0, 0.0, 0.0, 0x1.e7d10287daf22p-992,
     0x1.c4866f819784p-96, 0.0, 0x1.5d9393e6243d7p-367, 0x1.f5eca8450e4d7p-237, 0.0,
     0x1.79f7b1558dbeap-556, 0x1.dade173e40355p-981, 0.0, 0x1.4af94325beb89p-326, 0.0,
     0x1.09b2f4beb98b9p-650, 0.0, 0.0, 0x1.db716e030e7d8p-973, 0x1.c14385736edc9p-933,
     0x1.67447883a51f5p-837, 0x1.03c7953b1f783p-790, 0x1.ef5cf1184a018p-549, 0.0, 0.0,
     0x1.1324fd3d7b798p-790, 0.0, 0.0, 0.0, 0x1.84506e9854aa9p-135, 0.0, 0.0, 0.0,
     0.0, 0x1.3f03535595c42p-694, 0.0, 0x1.5d84a6d593429p-930, 0.0, 0.0, 0.0, 0.0,
     0x1.595ef028623efp-48, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2db11ff43277fp-495,
     0x1.59d6d57561a0cp-716, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5af67d72b6b3dp-727,
     0x1.a97061abca935p-19, 0.0, 0.0, 0x1.498365b2f518ap-972, 0.0,
     0x1.a6c303a13594bp-897, 0x1.a600583694ccfp-164, 0x1.500e3cb632dc2p-231, 0.0,
     0x1.7fd7bd841fedcp-112, 0x1.79709652e1b12p-701, 0x1.818f2fa0cc046p-442, 0.0,
     0x1.94012284d40bap-324, 0x1.7e9c61664e51p-928, 0.0, 0x1.ac408e32c2e17p-823, 0.0,
     0x1.c372a05310ffp-437, 0.0, 0x1.e91136807d286p-622, 0.0, 0x1.ac9ec42056c85p-45,
     0x1.73be707a95367p-574, 0x1.c93e3640249eep-998
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
            tmp1 = Sleef_sind2_u35avx2128(tmp0);
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
    printf("Sleef_sind2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sind2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
