/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd2_u35avx2128.c --function \
 *     Sleef_finz_sqrtd2_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.9ae3b0d000d61p-966, 0.0, 0x1.9047b7cedf5adp-695, 0x1.48a8f6fb9b957p-538,
     0x1.02803764c4371p-991, 0x1.f5bc03df9beb7p-671, 0.0, 0.0, 0.0,
     0x1.d4713ef52a564p-862, 0x1.a802d3f605612p-351, 0.0, 0.0, 0x1.714f93827cdaap-394,
     0x1.54ba16fb6663fp-645, 0x1.07b00e52e3faep-667, 0x1.e2332a38ad783p-668, 0.0, 0.0,
     0.0, 0x1.adc67520f89c1p-468, 0.0, 0x1.0a1a303f9c967p-46, 0.0,
     0x1.a7674c55287b9p-610, 0.0, 0.0, 0.0, 0x1.f15a4be76c97cp-271, 0.0,
     0x1.32ccfe9f1fd7bp-810, 0x1.e9c2948b85dfp-908, 0.0, 0x1.f98e4e52627d5p-312,
     0x1.b9cc1a12cdc5ap-556, 0.0, 0x1.50f18fdc45219p-270, 0.0, 0x1.16c457710e0f3p-722,
     0.0, 0.0, 0.0, 0.0, 0x1.40245e6bf1a85p-74, 0x1.d4f4e2ca0aec1p-268, 0.0, 0.0,
     0x1.4c9cb1559316cp-160, 0.0, 0x1.e482875b2228dp-273, 0.0, 0x1.836bc8557918cp-374,
     0x1.60b1ec4489a29p-977, 0.0, 0x1.0fca3890c6af8p-325, 0.0, 0x1.1cc66c4db5fe7p-93,
     0.0, 0x1.276a8a064e3cdp-623, 0.0, 0.0, 0.0, 0x1.a326c0d9535f7p-18,
     0x1.29c79b0a80d2bp-640, 0.0, 0.0, 0.0, 0.0, 0x1.f0622e4cb00b9p-259,
     0x1.de2b13b28ddfap-974, 0x1.42660eb6d23eap-648, 0x1.6e5fee5bcce27p-993, 0.0,
     0x1.0bab44e579c9p-632, 0x1.2c91779397dd1p-774, 0x1.29ff2bdd27eb4p-36,
     0x1.8e90a8778b79ep-474, 0x1.6abc6ee049847p-751, 0x1.f34611cbd3921p-391,
     0x1.64e7c7e373ffbp-165, 0.0, 0x1.e52fc995d1be6p-68, 0x1.924350119c3b8p-242, 0.0,
     0.0, 0x1.ee71290198a25p-726, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6da5c5bd72bdp-968,
     0.0, 0.0, 0x1.0de3a525270b3p-35, 0.0, 0.0, 0x1.8e96662b0f577p-550, 0.0, 0.0, 0.0,
     0x1.a7f377c392d4bp-619, 0x1.4714b3243a3cfp-848, 0.0, 0x1.db10edd07b712p-827, 0.0,
     0.0, 0.0, 0.0, 0x1.8f54139143c48p-255, 0x1.0bf4b1a38a67fp-839, 0.0,
     0x1.225108e29716dp-367, 0.0, 0.0, 0.0, 0x1.631cb111d28bp-643,
     0x1.30801202e1dacp-894, 0x1.eed7a21d4c105p-254, 0x1.72e245f83e568p-288,
     0x1.43320611a737dp-470, 0x1.fcef0b0aeb875p-510, 0x1.97314d2a1c493p-858,
     0x1.ed809451540d5p-298, 0x1.080870f04268fp-552, 0x1.b762c8ecf7719p-343,
     0x1.6970416f9e998p-767, 0.0, 0.0, 0x1.5433d31330d22p-44, 0.0,
     0x1.0d6cfba520d29p-812, 0x1.c2debcdc780b2p-366, 0x1.8e3ecd10332a2p-552, 0.0,
     0x1.b0e7da4284b84p-665, 0x1.996a30a120c21p-244, 0.0, 0.0, 0x1.5a33163a64614p-588,
     0x1.8e92dee930146p-740, 0x1.1b0d33bae9f64p-620, 0.0, 0x1.17b5121160e9cp-796, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5810301364843p-340, 0x1.5a8ce3e78bd97p-582,
     0x1.29048b6e7f239p-64, 0x1.956cd63c23753p-225, 0x1.c8580de636f3fp-320, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b21b069f661d9p-109, 0.0, 0.0, 0.0,
     0x1.f1b3e784847a6p-238, 0.0, 0x1.d78b640b6e74fp-843, 0.0, 0.0, 0.0,
     0x1.5bb4c7fdf29ecp-515, 0.0, 0x1.b585af7bb5c8ep-324, 0.0, 0.0,
     0x1.8b4740a0abb41p-701, 0x1.6de5955ee08e2p-347, 0.0, 0.0, 0x1.b33229d3ef0e4p-91,
     0x1.54a981ea378dbp-421, 0.0, 0x1.79c13860919d9p-716, 0.0, 0x1.eecf7a5329142p-300,
     0x1.f5656ef3dcc32p-736, 0x1.0f79f06f59d2p-535, 0x1.35eb181a40c55p-759,
     0x1.87afb0b328fd5p-81, 0x1.6cf291635b3e3p-218, 0x1.f2c2621311005p-1010,
     0x1.5d64ddcfea853p-75, 0.0, 0x1.8da7da12abe98p-541, 0.0, 0x1.cc9af7cefad6ap-812,
     0x1.1623d3d09a745p-122, 0.0, 0.0, 0.0, 0.0, 0x1.72d8b6307a341p-59, 0.0, 0.0, 0.0,
     0.0, 0x1.15e2eab71aa0ep-986, 0x1.c5a82aa1986ccp-660, 0x1.2c7295346594dp-99, 0.0,
     0x1.9ab69769a718bp-831, 0.0, 0x1.777f2a14037fcp-43, 0.0, 0.0,
     0x1.2b0f120682a5ap-368, 0.0, 0x1.bd406ba541091p-258, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6ed0862cf56e3p-843, 0x1.e6e080736a37dp-499, 0.0,
     0x1.1e50cd697aee3p-966, 0x1.e8d8a79cd4959p-635, 0.0, 0.0, 0x1.49a5100bed421p-283,
     0x1.ee7fa1665aeefp-145, 0x1.a8fe870d30ea2p-880, 0.0, 0x1.3ef76556040dep-902, 0.0,
     0x1.e1cb49c381f85p-706, 0x1.2e20c910e200bp-239, 0.0, 0x1.65e4d991a9e5p-437,
     0x1.55c66ea1a15b1p-995, 0.0, 0x1.213989155192ep-301, 0x1.910f34ddc70b8p-707,
     0x1.dcf84b83b1b1p-318, 0x1.f14c56a4b5928p-790, 0x1.8375b48d654fep-815, 0.0, 0.0,
     0.0, 0.0, 0x1.34237db4ca63cp-281, 0x1.a8755bcfb8f02p-708, 0.0,
     0x1.57f212a26feb8p-511, 0x1.4833eb13574c9p-942, 0.0, 0x1.df50b53921967p-450,
     0x1.ecc19770225d6p-110, 0x1.7bdabecd1e69ap-724, 0.0, 0.0, 0x1.da502a42da082p-368,
     0.0, 0x1.272b2c385e64dp-998, 0x1.929391a3aff16p-123, 0.0, 0.0,
     0x1.f5c6730f8db46p-174, 0.0, 0x1.bd87086b2e959p-250, 0x1.85ad291b54e21p-862, 0.0,
     0x1.a3003ab8592ffp-626, 0.0, 0.0, 0.0, 0x1.c2bffb9213ce1p-308, 0.0, 0.0,
     0x1.075596108cde1p-954, 0.0, 0.0, 0x1.3b2885cc20aa6p-348, 0.0,
     0x1.804fc477c0fc9p-384, 0x1.55f16cd2777a7p-647, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.82c3fcc81e67fp-584, 0.0, 0.0, 0.0, 0.0, 0x1.20de1987ce0d4p-904,
     0x1.ca922eaf073aep-977, 0.0, 0x1.7416b97d9762ap-404, 0x1.bfc2888b22e39p-785,
     0x1.4a65e47ff9d33p-634, 0x1.bcfd22eb9c2e2p-386, 0x1.545e42d4f1adfp-530, 0.0, 0.0,
     0x1.ab4dd66a8f6c9p-429, 0x1.bca4791e741c7p-920, 0.0, 0x1.604b264da0d41p-95,
     0x1.32ded2d35ff02p-177, 0.0, 0x1.76accc13bef73p-9, 0.0, 0.0, 0.0,
     0x1.735a1f501da73p-34, 0.0, 0x1.2ed157791ff4dp-412, 0x1.dc5b9ff7c160cp-517, 0.0,
     0x1.5a7bab1fcf921p-867, 0x1.55a4dad42d3e1p-140, 0.0, 0x1.e34905c0adf7bp-937, 0.0,
     0x1.19ac4944df284p-984, 0x1.6b4bd1fd55cedp-819, 0x1.4070216e07aedp-826,
     0x1.b2fe479d261dep-716, 0.0, 0x1.31d3a2dec8442p-382, 0x1.98d82a1f8f72bp-954,
     0x1.488ee893f0dc4p-755, 0x1.a53ad14c04169p-742, 0.0, 0.0, 0x1.378cd5b6d189bp-862,
     0x1.8b968df156b7p-759, 0.0, 0.0, 0.0, 0.0, 0x1.6ca1e909cd2c8p-117,
     0x1.97f488d7b8ea4p-735, 0.0, 0x1.e3098ad17656ap-669, 0.0, 0x1.c4053b69e4392p-995,
     0.0, 0x1.2fea0b8808016p-180, 0x1.d5520be8c521bp-934, 0x1.10f7b930e863ep-257,
     0x1.6d2b5016524f4p-1002, 0x1.3660168019253p-510, 0x1.148d9fb5fcb54p-385,
     0x1.e903713d879d8p-834, 0x1.708c2a38d3ef5p-710, 0x1.8bf7e186ca9d5p-390, 0.0, 0.0,
     0x1.726577ff4df76p-288, 0x1.0d090fd3363bbp-854, 0x1.746a914d296dap-549, 0.0, 0.0,
     0.0, 0x1.7aac0b3aa188cp-340, 0x1.7b020e97cde94p-877, 0x1.e91ecfd856c62p-518, 0.0,
     0.0, 0x1.4b407e2ab2c2ap-567, 0x1.b2598c2bc7a35p-62, 0.0, 0x1.4236e30ebfcefp-723,
     0.0, 0.0, 0x1.65f8677009ca8p-238, 0x1.8e304ebd94fd1p-625, 0x1.dde42d1fd9135p-765,
     0.0, 0x1.a4f224574d29bp-922, 0.0, 0.0, 0.0, 0.0, 0x1.9294adf04016dp-714,
     0x1.f5cf558b4531ep-149, 0.0, 0x1.15027a97456a7p-371, 0.0, 0x1.0c75aab711301p-488,
     0.0, 0.0, 0.0, 0.0, 0x1.085c3a2f02a93p-182, 0x1.dfde1939ff899p-827,
     0x1.9ec47989efac9p-499, 0.0, 0x1.389df4fcdfeb2p-774, 0x1.890d78ddf6a23p-691, 0.0,
     0x1.4686eb99db2dp-677, 0.0, 0.0, 0x1.7bdd3ba480da4p-965, 0.0, 0.0,
     0x1.eda4bc1c89e3dp-482, 0.0, 0.0, 0x1.0a38a46dfec9ap-400, 0x1.8672525561449p-299,
     0x1.de464f1af6b7ap-435, 0x1.00438d353ca55p-3, 0.0, 0.0, 0x1.b730d79d43683p-751,
     0x1.00190bf566e1fp-557, 0.0, 0x1.801b0821089bfp-393, 0x1.52003407e6352p-1014,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.23ffacafd0249p-887, 0x1.1e57c7f516e04p-429,
     0x1.f8d96a033fd6cp-513, 0x1.87cb5bee6932p-903, 0.0, 0.0, 0x1.cad37863278d4p-596,
     0x1.1a4013baa3da4p-726, 0.0, 0.0, 0.0, 0x1.1e14fed539429p-619, 0.0, 0.0, 0.0,
     0.0, 0x1.ac6705851762p-46, 0x1.1fefe794cd7fdp-107, 0.0, 0x1.ab6660ebac7a6p-807,
     0x1.901bbb44d3bbep-954, 0.0, 0x1.6372d3bc9a43bp-275, 0.0, 0x1.91f0f51b450a1p-86,
     0x1.15ce585c78f77p-189, 0x1.7e609609c2473p-84, 0x1.9898053dfad29p-965, 0.0, 0.0,
     0x1.abdcfc17428adp-796, 0.0, 0x1.caf2c3f32d5d5p-984, 0x1.87d39e771c64cp-272, 0.0,
     0x1.7135a53ce45b6p-716, 0x1.03e31f9043198p-263, 0.0, 0.0, 0.0,
     0x1.a526d6c0efd3ep-964, 0x1.7343c7dbd4d9dp-702, 0x1.c4a08ac0b730cp-30,
     0x1.990270e42c188p-436, 0.0, 0x1.9b7bb06c9ec79p-309, 0x1.97c1dc1a05d0ap-566,
     0x1.fd88b929d2a7cp-717, 0.0, 0.0, 0x1.262db4737abbp-808, 0x1.7d65024e4a7d7p-619,
     0x1.3154bfbb779ep-272, 0x1.8fef47e9cb106p-834, 0.0, 0.0, 0.0, 0.0,
     0x1.beef75971c4cp-46, 0.0, 0.0, 0x1.274cce6550684p-447, 0.0,
     0x1.cb2ca1386c64cp-845, 0x1.ae4a2a3ad7af9p-42, 0.0, 0x1.cdc6daf13f2bp-13, 0.0,
     0x1.89980f7127083p-550, 0.0, 0.0, 0.0, 0.0, 0x1.1ff8c7da694c3p-526, 0.0,
     0x1.10108e0ee9e2p-815, 0.0, 0.0, 0.0, 0x1.ba92106386f1cp-220,
     0x1.3a71747250fadp-306, 0x1.0e1c2512f8ea2p-809, 0.0, 0.0, 0x1.6c172c9a9cb44p-372,
     0.0, 0.0, 0x1.38ca1fc280a9dp-381, 0.0, 0x1.952efad3f92c1p-827, 0.0,
     0x1.a45946f2322d1p-532, 0x1.56109e4daa2aep-674, 0.0, 0x1.b959597d388fcp-845, 0.0,
     0x1.a2b44d2f7167bp-223, 0.0, 0.0, 0.0, 0x1.f526a6d05c1e5p-737, 0.0,
     0x1.88dcac3a9ddacp-464, 0x1.8514f20d47465p-790, 0.0, 0.0, 0.0,
     0x1.09576675d3c2bp-604, 0.0, 0x1.08a898982b30ep-635, 0x1.728a3d6ec55abp-508, 0.0,
     0x1.8946d4688146dp-924, 0x1.3ae520aafb181p-640, 0x1.0356dc66ed4bbp-279,
     0x1.d917faece355bp-480, 0.0, 0.0, 0x1.1ddf4f1ae57edp-742, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c75a9e9e83fe1p-308, 0.0, 0x1.1c1b57d6f7943p-602, 0.0, 0.0,
     0x1.cbadad6e8c873p-824, 0x1.d1ebdcfe9bd92p-247, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.48dee24347f3fp-34, 0.0, 0x1.224a90efea173p-316, 0x1.d8ddc95927241p-869,
     0x1.87726cfb415f6p-228, 0.0, 0.0, 0.0, 0x1.8fa284e8e76e1p-546,
     0x1.e8b7c100dbfcfp-350, 0.0, 0.0, 0.0, 0.0, 0x1.2bdf5defa67dp-472,
     0x1.3d4ea92e95ec2p-735, 0.0, 0.0, 0x1.4b99413b2c4e8p-476, 0x1.b8d83f9da3779p-462,
     0.0, 0.0, 0x1.7f1523b43880ap-762, 0x1.25d0016184896p-231, 0x1.e9514ec0bbc91p-831,
     0x1.aba42f0008ed5p-79, 0x1.c015b7d5770ep-51, 0.0, 0x1.ebedd4cfc899fp-191,
     0x1.cbbc32fa6d314p-660, 0x1.15dd2301bd7d9p-675, 0x1.f97034844de7dp-190,
     0x1.5476277e6dbfap-293, 0.0, 0.0, 0x1.8efc6cee045c1p-277, 0x1.0f5c5242072a2p-575,
     0x1.1559cf1cb28a7p-931, 0x1.2d5a4850ed73p-928, 0.0, 0x1.e41a084824512p-180,
     0x1.0ca760edadf01p-902, 0.0, 0x1.7d67c65412138p-531, 0.0, 0x1.19e8d1ee89eafp-194,
     0.0, 0x1.e36edbcd70dc3p-331, 0x1.665a21517eb6dp-901, 0x1.9ed8279d38192p-648,
     0x1.c71e4a00f1206p-357, 0x1.92cb2f0afe684p-229, 0.0, 0.0, 0x1.cf84882cc8964p-93,
     0x1.a766755801a03p-307, 0x1.5522a4bbb4b61p-169, 0.0, 0.0, 0.0,
     0x1.2d85ccfa3e63ap-637, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.228d19ca7110fp-82,
     0x1.75b5942353d51p-829, 0x1.2b7fda4ebacbcp-466, 0.0, 0.0, 0x1.113fa5186d7f4p-955,
     0x1.4a02799e4da1bp-427, 0x1.9d9d464cd761dp-446, 0x1.a07eab1259552p-275,
     0x1.9153eb9153a9ep-887, 0.0, 0.0, 0x1.0d9c220bb58fp-863, 0x1.8210032aa6b08p-426,
     0.0, 0x1.aa6fc66d77c87p-217, 0.0, 0.0, 0x1.15c682f064b49p-107,
     0x1.575f47e917039p-775, 0x1.cb96f6af48b06p-304, 0.0, 0x1.65b91a026bf64p-567, 0.0,
     0x1.13fa33e1aa585p-1004, 0.0, 0.0, 0x1.0149780ddc84ep-911,
     0x1.c8f37975ac571p-950, 0x1.7d8d36d056f7cp-494, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c11c781b2a922p-650, 0x1.a12030cce8126p-174, 0.0, 0.0, 0x1.2558c357484d9p-122,
     0x1.b06cc85cc57dap-577, 0x1.35938904c5766p-260, 0x1.003ecc7f545cap-655,
     0x1.6be9a971c1b6cp-169, 0x1.26f5d50fe73dep-455, 0x1.e1cf8404a0295p-283, 0.0, 0.0,
     0x1.95032bbe9e1b3p-769, 0.0, 0x1.ce1e699bca302p-726, 0x1.39f464b9eccadp-489,
     0x1.034cabce03fa6p-926, 0.0, 0x1.c7cb30db6fc2dp-805, 0x1.8ef46200ac435p-467, 0.0,
     0.0, 0x1.8afee7e39df53p-641, 0.0, 0x1.9aacfeff023d1p-341, 0x1.fce0afec1f898p-15,
     0.0, 0.0, 0x1.3e7283f05df4fp-673, 0.0, 0x1.44224e7ced509p-534,
     0x1.8409765b360fap-124, 0.0, 0x1.cbbfd3f2e97e4p-415, 0x1.fc7cb0fa7d529p-864,
     0x1.2d0616ef11a21p-195, 0.0, 0.0, 0x1.072f4a4058dc2p-996, 0x1.9eb1ffd1e4c3dp-934,
     0x1.89fff89dbb3e3p-181, 0x1.74e0338ba18p-48, 0.0, 0x1.3d5471eff8a5dp-740, 0.0,
     0.0, 0x1.42bd5d5feca5fp-386, 0.0, 0x1.d146357de4c35p-453, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fa306ed401da3p-283, 0.0, 0.0, 0.0, 0.0, 0x1.628ff732cacffp-340,
     0x1.04e8f59cee438p-387, 0.0, 0.0, 0x1.99772aa5d2c71p-685, 0x1.a854e0f956f98p-790,
     0.0, 0.0, 0x1.9fa59e1c02da8p-484, 0.0, 0.0, 0.0, 0.0, 0x1.6d3c17385591ep-25,
     0x1.6a5d2e1a0c5b3p-175, 0.0, 0.0, 0x1.b2ccc0160884p-605, 0.0, 0.0,
     0x1.f2c7897f2e1c6p-827, 0x1.dbf1ebf7f5459p-45, 0x1.93549c25b6225p-561,
     0x1.ff0991d334cffp-37, 0x1.8ff98712067e1p-102, 0.0, 0x1.49d0dfdbffeb8p-759, 0.0,
     0x1.b7a8e557de13ep-479, 0x1.bc6a59e02bf7ep-785, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e80e988674b48p-72, 0x1.3bdde18535f79p-729, 0x1.e0c60ebfc01f8p-716, 0.0, 0.0,
     0x1.773576c8169e2p-445, 0.0, 0x1.11a8658e95296p-1017, 0.0,
     0x1.9d13324942731p-508, 0.0, 0x1.b3d376b37bd1ap-421, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2075e05612cecp-65, 0x1.0a2d2e66c0dfbp-763, 0x1.e253b76b92b39p-214, 0.0, 0.0,
     0x1.8fb4401a9f8c3p-994, 0.0, 0.0, 0.0, 0.0, 0x1.bf21c92b136a6p-449, 0.0,
     0x1.c5da094eefe3p-162, 0.0, 0.0, 0x1.05a36504a45b5p-278, 0x1.9ae28c2a4dcfdp-648,
     0x1.7a8e04265e153p-233, 0.0, 0x1.fb6bacf106e06p-1007, 0x1.222da3e30754fp-190,
     0x1.9e05f3068aea9p-453, 0x1.6627df89b1c4ep-10, 0.0, 0.0, 0x1.8f20283c84f7bp-353,
     0x1.c87cadcbafdb6p-537, 0x1.e239ffdc0abd8p-994, 0x1.99d6e43723fc9p-412, 0.0, 0.0,
     0.0, 0x1.9cc05e3cbb55ap-694, 0.0, 0.0, 0.0, 0x1.949d8a362fee1p-103, 0.0, 0.0,
     0.0, 0x1.7fb95108454c8p-441, 0.0, 0x1.7459a1947ce45p-17, 0x1.c4b85d1aac062p-793,
     0x1.59cca34ccf1dp-581, 0.0, 0x1.7332d9781fa87p-715, 0.0, 0x1.11461461a3ba4p-104,
     0x1.d59f5e40b7cebp-823, 0x1.4fe68b2ba0bd3p-161, 0.0, 0x1.23203dbfc4b7cp-793, 0.0,
     0x1.2420589adf55ep-26, 0x1.c0b53ccedeb98p-485, 0.0, 0.0, 0.0,
     0x1.3b10622d41babp-639, 0.0, 0.0, 0x1.2fad110922a5fp-613, 0x1.72e92fd749d39p-518,
     0.0, 0.0, 0.0, 0x1.fbccc221a65d8p-621, 0x1.34172cc8cb10ap-742,
     0x1.b0e1b3f5117bep-582, 0.0, 0.0, 0.0, 0x1.0bdf700238ebbp-954, 0.0,
     0x1.310a14a5201aep-52, 0x1.1ff7eae6c0037p-88, 0.0, 0x1.3fdf0aec6998p-1003,
     0x1.a00b616cf7dd7p-372, 0.0, 0x1.fef9fa7d0ea7bp-141, 0.0, 0x1.c47c37aa51cedp-617,
     0.0, 0.0, 0.0, 0.0, 0x1.65b76fb976b74p-584, 0.0, 0x1.153c48950084cp-115,
     0x1.fbdfbe8f65147p-285, 0x1.f92a3744b8deep-981, 0.0, 0x1.8d4523baeef64p-105,
     0x1.f0bc4cd0b3091p-407, 0x1.caca7763afc63p-837, 0.0, 0x1.e5ff7f09949edp-731, 0.0,
     0.0, 0x1.512d0871e184fp-929, 0x1.3de621b5aa62ap-514, 0x1.0203a3d4fe761p-367,
     0x1.f0baebc4e3d85p-37, 0.0, 0.0, 0x1.21d272cb06896p-443, 0x1.7bce0b9727171p-834,
     0x1.1fe8667c347c6p-615, 0.0, 0x1.b0880c877a072p-945, 0.0, 0x1.a74c957f211bep-349,
     0x1.233bf62ec551dp-392, 0.0, 0.0, 0x1.e733408e3bc2dp-709, 0.0,
     0x1.709d2222eef31p-132, 0x1.ff35ab7c5c1d4p-530, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8bd4c68a1a1afp-317, 0.0, 0x1.43f7f1809ad2p-237, 0x1.def2f0e5a7568p-607,
     0x1.bf3356fefa083p-296, 0.0, 0.0, 0x1.a3444b8648d4ep-630, 0x1.e4871228c3cafp-248,
     0.0, 0x1.b21c9c7bea6b1p-79, 0x1.04fa7de94ed25p-717, 0.0, 0x1.38053069dcf31p-976,
     0x1.57ac5284e4b8cp-298, 0x1.ef3ba66e7003p-615, 0x1.2eebe18b8ec88p-974,
     0x1.6c8f1d266b82p-864, 0x1.8b955786412bbp-711, 0x1.e6a53c7d91c6cp-603,
     0x1.d62cad8001812p-958, 0x1.bbef2ad62cce5p-1022, 0x1.a94c8f073c967p-138,
     0x1.8e20859fb7f81p-480, 0x1.2a07b800f6703p-585, 0.0, 0x1.2966b940fb041p-26, 0.0,
     0x1.3d59900ed6149p-113, 0x1.931a60d429ccdp-953, 0x1.28c4a221f99a2p-541, 0.0, 0.0,
     0x1.86f14d7d6f0d9p-213, 0x1.ee14b9e2b6baap-242, 0.0, 0x1.e3ab00bcac1d6p-417,
     0x1.424913dcc9c5bp-939, 0x1.251543e4aa6cdp-347, 0x1.aa4e7abdf6222p-577, 0.0,
     0x1.91be656ae2925p-435, 0.0, 0x1.7699a289fc90cp-107, 0.0, 0.0,
     0x1.65b3e75af7ccbp-713, 0.0, 0x1.959a49ec2fec3p-300, 0.0, 0.0, 0.0,
     0x1.9742a7a900e6fp-587, 0x1.c628eef19eb27p-853, 0x1.56a8110084ee1p-583,
     0x1.3c6fa13809a22p-631, 0x1.18282145bdfa7p-488, 0.0, 0.0, 0x1.fa11c308b8d22p-917,
     0x1.0879e613ba72cp-1015, 0.0, 0x1.c5b11be778eb6p-877, 0.0,
     0x1.21554fe92522cp-318, 0x1.6391719a9c174p-321, 0x1.49112103dac06p-515,
     0x1.cca3a4fc38caap-134, 0x1.68efbc99ef11cp-655, 0x1.87baa51c27096p-191, 0.0,
     0x1.7d92fff42bcf3p-304, 0x1.eea3091d485acp-2, 0x1.665b0a9a34b83p-403, 0.0,
     0x1.a2525c3d43848p-977, 0.0, 0x1.c6453ed028117p-251, 0x1.380174ee6084p-314,
     0x1.66742d7769c61p-945, 0x1.17026429b2c7bp-358, 0x1.1dbd3d77ddb4fp-679, 0.0,
     0x1.647e4f85af74p-635, 0.0, 0x1.8d76fefc4710dp-81, 0x1.6a18d3e64e1bp-817, 0.0,
     0x1.a9a9bd6f62243p-913, 0x1.7831fb2e1ea2dp-881, 0x1.ef31b05ce10a2p-511,
     0x1.11753fbb49f46p-108, 0.0
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
            tmp1 = Sleef_finz_sqrtd2_u35avx2128(tmp0);
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
    printf("Sleef_finz_sqrtd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
