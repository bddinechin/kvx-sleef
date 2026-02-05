/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd1_u35purecfma.c --function Sleef_logd1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.5d42068b95137p-725, 0.0, 0.0, 0x1.3eeef9d58e3aap-304,
     0x1.42184f052173ap-579, 0x1.047f4f3e6a9f5p-220, 0.0, 0x1.b51673e4e3d8bp-739,
     0x1.ad5d454388b28p-979, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.989807868ca6cp-41,
     0x1.2108807490c18p-122, 0.0, 0.0, 0.0, 0x1.f704ae53f9bf4p-918,
     0x1.d851aa66d3e5ap-550, 0.0, 0.0, 0x1.33d29518c8e9dp-593, 0x1.58572d23e227ep-987,
     0.0, 0.0, 0x1.66c7451c77494p-24, 0x1.f2880f94ee3a9p-643, 0.0, 0.0, 0.0,
     0x1.849661538395ep-1009, 0x1.7bfb22777714bp-784, 0.0, 0.0, 0.0,
     0x1.bcc5a66e9f54ap-874, 0x1.da9e3877d0e7ep-771, 0x1.f8c1651313d0ep-542, 0.0,
     0x1.1d760008f9efbp-142, 0.0, 0.0, 0.0, 0.0, 0x1.2412c0d1a8389p-547,
     0x1.ab2cf49fd07dap-99, 0x1.df4a5006cb06cp-640, 0x1.a7e4ec0d8b08cp-590, 0.0, 0.0,
     0.0, 0.0, 0x1.f6c9afd51ea63p-323, 0.0, 0.0, 0.0, 0.0, 0x1.c7b7ae4dfb524p-344,
     0x1.dac9d8df0a023p-439, 0x1.35495cb7cdd48p-127, 0x1.2f39b206027fap-846,
     0x1.eca29b98a95d9p-144, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fb220011a9921p-628,
     0.0, 0x1.7a5d490f55d8fp-251, 0.0, 0x1.0d57fdfa0c1bdp-811, 0x1.ac701ef3925b4p-230,
     0.0, 0.0, 0x1.9354fbe34113dp-974, 0x1.6906b2288599ep-677, 0x1.1f40d9af16c9cp-420,
     0x1.cbcfcfc3dee33p-903, 0x1.9bd5ed562224bp-123, 0.0, 0x1.cfb356d44fe87p-318, 0.0,
     0.0, 0x1.9ebf8466a0b07p-789, 0x1.6e9cc0d8fd5dcp-377, 0.0, 0x1.21a660e51bd22p-987,
     0x1.2187c1d9c2d6ep-566, 0.0, 0x1.5eeb739cb73e3p-441, 0.0, 0.0,
     0x1.96366c6a54f29p-542, 0x1.21ff74fc2c0dap-711, 0.0, 0.0, 0.0,
     0x1.3bc1f12f66376p-603, 0x1.c33c56a075bddp-100, 0.0, 0x1.1404b3d4a9ca8p-103,
     0x1.983d330d95af3p-592, 0.0, 0.0, 0x1.05e0e7bd2c29ap-495, 0.0,
     0x1.988afca98a4f4p-308, 0.0, 0x1.2ad1955854a0fp-12, 0.0, 0.0, 0.0,
     0x1.bb6cfa7877cd5p-357, 0.0, 0.0, 0x1.d7de242cb3a58p-867, 0x1.17d07328ae914p-126,
     0x1.9d64115ff5f8bp-380, 0.0, 0.0, 0x1.1d8caef2b9d58p-593, 0x1.da3831760245fp-331,
     0x1.8520190cf7cf6p-835, 0.0, 0.0, 0x1.c038498080e19p-422, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e8de9f9898656p-801, 0.0, 0.0, 0x1.96bcf43f46a49p-286,
     0x1.66e5c145dbc61p-110, 0x1.5a5eeca837348p-398, 0.0, 0x1.215cc36e8d66cp-900,
     0x1.7f2eb9bebe209p-397, 0.0, 0.0, 0x1.6cb65c16dd9ebp-325, 0x1.384ae21baf1fap-656,
     0x1.eb803dc3f5f5ap-361, 0x1.af88822dc2717p-155, 0x1.41e4287fa4fc9p-1014,
     0x1.5b178e0129efap-777, 0x1.5729c070d09f7p-439, 0x1.884b948b35199p-582,
     0x1.6c0b861063023p-710, 0x1.a2393ed07d216p-171, 0.0, 0.0, 0.0,
     0x1.64a101f97537fp-345, 0x1.3058f2abcb413p-150, 0.0, 0.0, 0x1.69c3e6f63be5ap-316,
     0x1.76009cc9782f7p-243, 0x1.b28bb5b530809p-12, 0x1.7d331c9e95a62p-1021, 0.0,
     0x1.7b79dd9482711p-954, 0x1.08781c03b38f6p-842, 0x1.95b783b539dcep-555,
     0x1.e5dd7511c1207p-161, 0x1.157616fe819bdp-600, 0x1.5d3d044a519c7p-506,
     0x1.3f3bbf95b31c8p-45, 0x1.6230f806e6ebbp-15, 0.0, 0x1.e01f37072b998p-38,
     0x1.4795b1c78d5cp-82, 0x1.3e1b4b7ae4352p-137, 0.0, 0.0, 0.0,
     0x1.3870458018c0cp-905, 0.0, 0.0, 0x1.79a22f8038488p-628, 0.0,
     0x1.8014b974c7a03p-435, 0x1.9c08c385f262ap-327, 0x1.ca33ad73b2973p-21,
     0x1.c00d6144dde28p-538, 0x1.b00b8662e6eeep-363, 0x1.c7d02a96111bdp-460, 0.0, 0.0,
     0x1.b37f1f2c19456p-682, 0x1.cceb64c26d24ep-926, 0.0, 0.0, 0x1.963b779dbb665p-268,
     0.0, 0.0, 0.0, 0x1.63cdf8eb8ee36p-723, 0x1.1b757b1c55e3fp-211,
     0x1.51931c6df468bp-251, 0.0, 0.0, 0x1.2ee83ef5a0cb9p-105, 0x1.e90c890dbe99ap-229,
     0.0, 0x1.79ef07d9e349fp-337, 0x1.2b7b4d321b9e8p-957, 0x1.6d21ab6852492p-278, 0.0,
     0.0, 0.0, 0x1.9bbf9e99e6a99p-598, 0.0, 0x1.39b1cb7e2532dp-745, 0.0,
     0x1.70db055a21b3ep-75, 0.0, 0x1.4eb371b783da4p-529, 0x1.03b8ea12b2762p-628,
     0x1.58d51d44442afp-204, 0.0, 0x1.7507c8e3b0ee6p-181, 0x1.9bfa90e21fed4p-208, 0.0,
     0.0, 0x1.6f7d934ad117bp-459, 0.0, 0.0, 0x1.3f3b24e44db99p-179,
     0x1.19c5e1d8b1593p-927, 0.0, 0.0, 0.0, 0.0, 0x1.5aabb76fc3f22p-978,
     0x1.e8146a163def3p-424, 0.0, 0x1.cd1f89b1c62efp-10, 0x1.1560b43b430d2p-201,
     0x1.919fae884fe6p-500, 0x1.c147eb0dcb37dp-224, 0.0, 0.0, 0x1.847c20eff9fb9p-251,
     0.0, 0.0, 0x1.b76a905daf778p-702, 0x1.19026b2e01fa9p-487, 0x1.10538b1c13944p-392,
     0.0, 0x1.af19a7378ee6bp-922, 0x1.9bd4b1cc6f5c8p-952, 0x1.1dad0619a7f0cp-596,
     0x1.17c6c9b73370fp-907, 0x1.31ffbfd5dc21dp-199, 0x1.f5fcf7cb35a46p-355, 0.0,
     0x1.89720ff560856p-168, 0.0, 0.0, 0.0, 0x1.24d1a89a1dd7p-320,
     0x1.0d777426895bdp-655, 0x1.909ea8463fd3dp-883, 0x1.b2964821eac29p-684, 0.0,
     0x1.a02fe4ee76b6bp-605, 0.0, 0.0, 0x1.2556a87b3feadp-507, 0x1.574e27bbaa1e5p-553,
     0.0, 0x1.3f635956d4261p-254, 0x1.7b9827de88ca5p-196, 0x1.0a27203c16896p-665,
     0x1.2a40fe9ba452p-963, 0x1.900ae57d05e08p-309, 0x1.219c3db678c6p-519, 0.0,
     0x1.8f8cf6a0b8735p-545, 0x1.a344fb80b256ap-506, 0x1.8910cedd37a61p-999,
     0x1.da15e87418173p-370, 0x1.d76b532acb759p-396, 0x1.3e634a257f4cap-664, 0.0,
     0x1.af6165fe6f234p-441, 0.0, 0x1.157f478ffaaeap-64, 0.0, 0x1.cf0a03637a5dcp-65,
     0.0, 0x1.d0fb1406c5e3fp-912, 0x1.6928e329e09fep-711, 0x1.5b951054a3779p-180, 0.0,
     0.0, 0x1.f5254e0f99c9dp-298, 0.0, 0.0, 0x1.73f20601dd589p-330,
     0x1.5dfdb266aec12p-475, 0x1.06efccc149addp-147, 0x1.bab10e4b7d468p-408, 0.0, 0.0,
     0x1.8a69c42d937f9p-983, 0x1.8cc4f20571cc2p-887, 0.0, 0x1.d95efbb1fd74bp-844, 0.0,
     0.0, 0x1.a28de9c29c04p-1018, 0x1.847a43af7c16cp-911, 0x1.94a1adde8491dp-760, 0.0,
     0.0, 0.0, 0x1.66e17f74320bp-510, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6399b8b17160bp-1,
     0x1.49fc217199265p-412, 0.0, 0x1.ff6df2e788f12p-1010, 0x1.58e9ea0c12bacp-502,
     0.0, 0.0, 0x1.d77fe30088955p-172, 0.0, 0.0, 0x1.750c8296026f4p-437, 0.0, 0.0,
     0x1.d1849d4d5eb6p-251, 0.0, 0.0, 0x1.3c3f74d3d74b7p-277, 0x1.60c5b563f85c6p-182,
     0x1.f610289fe58c6p-193, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.844274fba659p-164,
     0x1.75c2f6a2cd17cp-601, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab26237c266b8p-461,
     0x1.308c59196dbcfp-674, 0x1.fe676120ab529p-969, 0x1.eab2de17a327fp-788, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fa5bb05bee1d4p-199, 0.0, 0.0, 0x1.47734f74e60b8p-351, 0.0,
     0.0, 0x1.4c9bbfbdf87c2p-626, 0x1.c970aec543c92p-885, 0x1.c0f9c2dd827dfp-503, 0.0,
     0.0, 0x1.cc953646666dcp-649, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e91477484d629p-519, 0x1.f280f9bf2a743p-1011, 0x1.ff9109b0e3b54p-504,
     0x1.f2fd5690229c1p-430, 0x1.6d94e4047f803p-32, 0.0, 0x1.edfe84b25cbcdp-31, 0.0,
     0x1.636b74d5090cfp-772, 0x1.7ecf57d60b3ecp-214, 0.0, 0.0, 0x1.2232b4c58ae22p-159,
     0x1.7476895d95ebcp-807, 0.0, 0x1.9bc913bd66dfdp-211, 0.0,
     0x1.86aa27cd9d23ep-1010, 0x1.1875c94761414p-592, 0x1.4616c6783374cp-420,
     0x1.8d5410641741dp-57, 0x1.3cab6fe0b0722p-698, 0.0, 0.0, 0x1.02b43ba26353dp-599,
     0x1.8ea67797a7a53p-259, 0x1.c3a0383de3d9dp-923, 0.0, 0x1.94a5a2791556cp-47,
     0x1.d8d020131bef5p-410, 0.0, 0.0, 0x1.6e96019326c27p-585, 0.0, 0.0, 0.0, 0.0,
     0x1.3d08cc67d0f12p-645, 0.0, 0.0, 0.0, 0x1.42852c88601c9p-542, 0.0, 0.0,
     0x1.73ea6727d2191p-109, 0.0, 0.0, 0.0, 0x1.4696882214a6cp-429,
     0x1.5407494134e93p-965, 0x1.0bc66ecfc2b36p-543, 0.0, 0x1.b4f0407ad6462p-257,
     0x1.f158b84f80478p-495, 0x1.685f76d34f09fp-670, 0x1.184dc8dfc137bp-885, 0.0, 0.0,
     0x1.d68d2dcfaf87dp-809, 0x1.92bb063afbe35p-666, 0x1.712cdc5d60a52p-838, 0.0,
     0x1.97ee246e1e2e6p-498, 0x1.1fa0e8801545bp-451, 0x1.ccc616a89915fp-470,
     0x1.3bba97de0332ep-776, 0x1.97f8adbe4e20dp-282, 0.0, 0.0, 0.0, 0.0,
     0x1.4643f5d4e1a3cp-151, 0.0, 0.0, 0x1.875fb1450a841p-1008,
     0x1.7298f68b8ab6bp-517, 0x1.0aa7d4023fce1p-778, 0.0, 0x1.b52731558d558p-300, 0.0,
     0.0, 0.0, 0x1.25b3aa59bb36dp-45, 0x1.f9d91a8b29a16p-516, 0x1.6340d44297a0bp-137,
     0.0, 0.0, 0x1.3a2afeea2e4f5p-101, 0.0, 0x1.9af27b0048c64p-935,
     0x1.7163bc8ee58b1p-177, 0.0, 0x1.aa4e978e9e15ap-313, 0x1.6a9dbf86ca9aap-232, 0.0,
     0x1.578ac0a0cafc3p-425, 0.0, 0.0, 0.0, 0x1.940e98e87fd65p-122, 0.0,
     0x1.2a7d4b4b00634p-294, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f822d0e61dc9p-131,
     0x1.0f103c90ce83ep-840, 0.0, 0.0, 0.0, 0x1.e381d9debd3a3p-808, 0.0,
     0x1.6b3945493527dp-354, 0x1.67dcaeaecf065p-117, 0.0, 0x1.220c3cb02b81p-961,
     0x1.cb656ffc00a0dp-402, 0.0, 0x1.b655142038d22p-277, 0x1.fe01b5cacfdbfp-479,
     0x1.14966c6f793c2p-822, 0x1.552da2029e341p-70, 0.0, 0x1.7308367455abdp-696, 0.0,
     0x1.1aeb416f7874ap-736, 0x1.c46e6694231d9p-285, 0x1.a5d9dd0dc3be1p-124, 0.0,
     0x1.b1aef167e3c37p-809, 0x1.c77e6833de6cfp-361, 0x1.b35a5545da097p-958,
     0x1.8e7371bb7d2bdp-674, 0x1.44b184c2fed02p-693, 0.0, 0.0, 0x1.7dab1d3815c4bp-984,
     0.0, 0.0, 0.0, 0x1.aecc3bd04a1aap-912, 0.0, 0x1.4ebbd8d439f17p-668, 0.0,
     0x1.c7227f27ef899p-917, 0x1.a07b7c8b8271p-577, 0.0, 0x1.dedb30453e01ap-450, 0.0,
     0.0, 0.0, 0.0, 0x1.4b89831f4a179p-224, 0x1.4dfb96db70417p-511,
     0x1.872872ad6b234p-834, 0.0, 0.0, 0x1.ed76609c4dc0dp-532, 0.0,
     0x1.20643b5d93733p-386, 0x1.423636d20cfdcp-682, 0.0, 0.0, 0x1.88fd61e732911p-461,
     0.0, 0.0, 0.0, 0x1.04843101a6423p-135, 0.0, 0.0, 0x1.54b3ece1514e3p-858,
     0x1.2595db89edf95p-331, 0x1.0db9c7a1c03d6p-943, 0.0, 0.0, 0x1.084e1847fb31ap-147,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e771f8f65d469p-962, 0x1.68ae5a64f4fe4p-831,
     0.0, 0.0, 0x1.622c00cdfabb8p-810, 0x1.6ec96595bcbb8p-984, 0.0,
     0x1.0e8c7238c29bap-755, 0x1.765ec15dd4c25p-145, 0x1.5cd95d88fc52dp-792, 0.0,
     0x1.a8aef16851c12p-644, 0x1.df5ca807a3ad7p-701, 0.0, 0x1.72d275d70f79cp-128,
     0x1.21d446198d0b9p-836, 0.0, 0x1.388b4d51e7578p-885, 0x1.ceafa8c120ce8p-889, 0.0,
     0x1.c59bf2359dc1dp-291, 0x1.33a83fa17323ap-904, 0.0, 0x1.3d4d73ce23e89p-762,
     0x1.6e74305c60772p-706, 0x1.16c1bed54c707p-868, 0x1.3d007c32e3a87p-285, 0.0,
     0x1.2eace395b04c5p-815, 0x1.797c6f0fe1985p-984, 0.0, 0x1.245d987f0e981p-751, 0.0,
     0.0, 0x1.73f3136837a82p-694, 0x1.9739e3726604ep-634, 0.0, 0.0, 0.0, 0.0,
     0x1.7c2224c8e35d8p-980, 0.0, 0x1.0e502ebfd8b2cp-856, 0.0, 0.0,
     0x1.55af85c607708p-255, 0.0, 0x1.36bdda6dbd3aap-526, 0x1.c7ada254d4391p-1004,
     0.0, 0x1.7fc661761ea59p-928, 0.0, 0x1.a0920f74ca296p-529, 0.0,
     0x1.fcdcc394eaec7p-399, 0.0, 0x1.ad9333dcfd8fap-240, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14186d47597b2p-694, 0.0, 0x1.ed34a964943dfp-128, 0.0, 0x1.1eb5f4a2dc12ap-891,
     0.0, 0x1.6ed6fc67ae11p-89, 0x1.33199b1d73e85p-581, 0x1.8592ec2fef53dp-89, 0.0,
     0x1.ec23543dccafbp-179, 0.0, 0.0, 0x1.55bfe715fb72fp-946, 0x1.7c9070f33571ap-209,
     0.0, 0x1.6123cc2b5f414p-281, 0.0, 0x1.3beb6ae7c78d4p-248, 0x1.8778bfc6c29cap-729,
     0.0, 0x1.d8ddb82f1120dp-635, 0x1.7cc3110f8fe72p-170, 0x1.f0acf6477501dp-185,
     0x1.5a187eddcb7ccp-443, 0x1.939cce7f2ac39p-708, 0x1.c0ae53604d1fcp-567, 0.0,
     0x1.f77e39e3e94ap-648, 0.0, 0.0, 0.0, 0x1.827211e3d292fp-507, 0.0, 0.0,
     0x1.7c3a2d1620a4ep-264, 0.0, 0x1.af7cf5b9503abp-327, 0x1.0b740f0052cb1p-815,
     0x1.d8f39307768fdp-748, 0.0, 0.0, 0.0, 0x1.1d7cf5a48f80fp-69, 0.0, 0.0,
     0x1.8b1da10f5aebp-161, 0x1.a0cf9700d4cabp-563, 0x1.e38b2359526dfp-242,
     0x1.90b40a1631f86p-993, 0.0, 0x1.274cc3b9dc356p-705, 0.0, 0x1.a400b6130d38ep-888,
     0x1.a09e603e554d8p-876, 0x1.7070141282604p-134, 0.0, 0x1.5ae17929763ffp-534,
     0x1.43cf5c5892ebdp-352, 0x1.a294a9c8c950fp-155, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.631230192b75ap-510, 0x1.0d44021b80bc1p-112, 0x1.b4e4b840c08dbp-52, 0.0,
     0x1.3c8a6a2bc19cep-956, 0x1.34d7e46858041p-13, 0.0, 0.0, 0.0,
     0x1.d42a2473ccdf3p-439, 0.0, 0.0, 0x1.27dce34c31dacp-1019, 0.0,
     0x1.cc70d2002d1adp-275, 0x1.bb2dbea9b15dp-315, 0.0, 0x1.adcd241f81b75p-714, 0.0,
     0x1.384a5cf5697d8p-552, 0x1.047552efb2a2ep-426, 0.0, 0x1.3613999b3572cp-616,
     0x1.7e41a52c6d6d3p-178, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.236ea81811b13p-476, 0x1.ba4fb8772fbe4p-950, 0x1.596dffb50ee72p-780,
     0x1.fc99fcecb6e48p-926, 0x1.725ee406c7e7dp-957, 0x1.a6e9c08988c0cp-244,
     0x1.341116d5fd241p-792, 0.0, 0x1.0f4ccaca23975p-36, 0.0, 0x1.fa1686374c006p-904,
     0.0, 0x1.5aa5f11aa6c13p-987, 0.0, 0x1.3c0a576248862p-58, 0x1.c9642c2824f87p-955,
     0x1.991ef4ff9e847p-252, 0x1.32244c5c4b108p-788, 0.0, 0x1.88a272f04a4f8p-670, 0.0,
     0.0, 0x1.e9fa0618f79b4p-387, 0.0, 0.0, 0x1.7299b5c6b2feep-791,
     0x1.7d214fadca433p-700, 0x1.fc4a5496d3e9dp-467, 0x1.bfab0553d1849p-83,
     0x1.70f8ecaf3eebbp-379, 0x1.2f7b04559edb9p-347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.31085ced7f27ap-289, 0x1.116d12045ed33p-904, 0.0, 0x1.9cdeca0ececdbp-579,
     0x1.783fa5ad3da1cp-118, 0x1.7d1fa9d5556cap-809, 0x1.203be603425d2p-949,
     0x1.40fc26dc26626p-603, 0x1.cf46356fd4c39p-957, 0.0, 0x1.7ce8969367e69p-696, 0.0,
     0x1.64034b66c9f3fp-740, 0.0, 0.0, 0.0, 0.0, 0x1.78919724c783ep-878, 0.0, 0.0,
     0.0, 0x1.71abbe5275f4cp-503, 0x1.533b59217f181p-143, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.76d367dd8b678p-218, 0x1.f8186212fcf5dp-269, 0.0, 0.0, 0x1.9e4db37e0ea9p-434,
     0.0, 0.0, 0.0, 0.0, 0x1.8fea0faab5982p-450, 0x1.76278a51ca234p-91,
     0x1.61c991f134a14p-116, 0x1.aba8974bb12b6p-22, 0.0, 0x1.447e8f90ea06cp-90,
     0x1.440a126f83ca8p-690, 0.0, 0.0, 0.0, 0x1.d38f937d54876p-289, 0.0,
     0x1.85e7153908cb8p-824, 0.0, 0.0, 0x1.e1a872ca75c7bp-479, 0x1.c951b58106402p-742,
     0.0, 0.0, 0.0, 0x1.29afadde27d03p-821, 0x1.78f802974c6b9p-401,
     0x1.ff10e1bf3d533p-452, 0x1.9b5f06a230b1ep-335, 0.0, 0.0, 0x1.83872bc4e7104p-257,
     0.0, 0x1.99a66984f7c2p-105, 0x1.252815e95896p-73, 0x1.31fb81552892ep-238,
     0x1.9a95abc44dda4p-531, 0.0, 0.0, 0.0, 0.0, 0x1.4108a62e9416bp-350, 0.0,
     0x1.43c0da328f62bp-904, 0.0, 0x1.3e1108dad37a7p-176, 0.0, 0.0, 0.0,
     0x1.e942b328e997cp-548, 0x1.ca9a7684fdd12p-632, 0.0, 0x1.1a99d5e0c29cep-613, 0.0,
     0x1.e32edd93a02b6p-226, 0x1.ddcf3b3a5bb3cp-175, 0x1.748c297cb09fcp-519, 0.0,
     0x1.e5bdf8e468b65p-604, 0.0, 0.0, 0x1.1f8278c6dfc0bp-353, 0x1.90254321d31b9p-653,
     0.0, 0x1.d49176d939e0ep-521, 0.0, 0x1.9c49f22676445p-978, 0.0,
     0x1.ac2bed1fab96p-357, 0.0, 0x1.3684230e7b80dp-588, 0.0, 0.0, 0.0,
     0x1.4494756528c4ap-716, 0x1.b48a323f60383p-170, 0x1.89efe19988329p-149, 0.0,
     0x1.2d5c7699ffbf7p-43, 0x1.5b505c5071cb2p-863, 0x1.1eed9472f7244p-372,
     0x1.0c32bbee29dbep-114, 0x1.c141a3e36d924p-503, 0x1.a21b3b5fe0fe2p-938, 0.0, 0.0,
     0.0, 0x1.6fdce3df400b8p-311, 0.0, 0.0, 0.0, 0.0, 0x1.1b546c9879c4bp-725,
     0x1.9daf5d749a117p-780, 0.0, 0x1.4978b86d354fcp-789, 0.0, 0x1.1330c668e320cp-251,
     0x1.4643eaeccd8fcp-40, 0x1.a76fe0ecd6d9ap-604, 0x1.969b0fed9cb4cp-923, 0.0, 0.0,
     0x1.cc3c6da492d43p-496, 0.0, 0x1.5fddbaaf2ef25p-683, 0.0, 0x1.794630bce9f95p-720,
     0.0, 0.0, 0x1.3f49d730702e4p-673, 0x1.76c1633ab42d2p-453, 0.0, 0.0, 0.0, 0.0,
     0x1.e4c4454b33752p-355, 0x1.8afdb41ad3d64p-138, 0.0, 0.0, 0x1.cc5eb0337da53p-797,
     0x1.19b71930f4791p-252, 0x1.be3705c244e35p-955, 0x1.0407e2409d885p-997, 0.0,
     0x1.39d1713aa39a6p-762, 0x1.56660e6c3186ep-977, 0x1.424fcb005d7cdp-640, 0.0,
     0x1.1524ab8cce456p-621, 0x1.1a52648f37c09p-643, 0.0, 0x1.520a13c32f125p-91, 0.0,
     0x1.8b09b1bc8095p-465, 0x1.7354891a8f737p-534, 0x1.9098b72a8e8eep-289,
     0x1.1d0b80939afaap-701, 0x1.082743152b8f9p-185, 0.0, 0.0, 0.0,
     0x1.78d4ed32b01f5p-85, 0x1.e9ad3ad2336b3p-410, 0x1.05d019b1bb89p-168, 0.0,
     0x1.13b0b3d7214c3p-334, 0x1.b79b7268b7a0dp-385, 0.0, 0x1.3f2cd6b08e086p-1015,
     0.0, 0x1.66b62543348f6p-694, 0x1.9040d658cbcb9p-222, 0x1.4659a77aab542p-760, 0.0,
     0x1.e711b910b0ce7p-647, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eabda95fc7cdbp-520,
     0.0, 0.0, 0.0, 0x1.a38b115e3b175p-584, 0x1.6b8de6a693144p-489, 0.0,
     0x1.8258eb5f75e86p-359, 0.0, 0.0, 0.0, 0x1.e8748d084274p-80, 0.0,
     0x1.f1a2f0584da1bp-327, 0x1.93d271ea516ecp-533, 0.0, 0x1.a0ae4d8ca5b92p-196,
     0x1.463bf86c79bf2p-659, 0x1.bd96ceb85f305p-911, 0.0, 0x1.02e1f463ed0b9p-118,
     0x1.fefd953a30175p-69, 0x1.a4847d7f56ba9p-106, 0.0, 0.0, 0x1.2b35916b4001p-646,
     0x1.b45cb9eba03b1p-979, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d69b4552d4fep-261, 0.0
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
            tmp1 = Sleef_logd1_u35purecfma(tmp0);
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
    printf("Sleef_logd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logd1_u35purecfma bench acc %la\n", global_bench_acc);
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
