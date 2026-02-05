/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd2_u05avx2128.c --function \
 *     Sleef_finz_sqrtd2_u05avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.9d14cfe790e85p-342, 0x1.faa266cf5b185p-778, 0.0, 0x1.9e6adf7c8ab16p-91,
     0.0, 0x1.dee46d9684427p-61, 0x1.ecd90be39ab28p-302, 0.0, 0x1.e0e9c3e3a9da5p-720,
     0.0, 0x1.13a89696388bfp-767, 0x1.5d91207da6281p-168, 0x1.ac177d3e8cc85p-596, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.20483f3450b05p-997, 0x1.74892954442f9p-681, 0.0, 0.0,
     0x1.1a3fa5f4179f3p-941, 0.0, 0.0, 0.0, 0x1.f860b079c4e7cp-338, 0.0,
     0x1.fc4be5f553f6ep-681, 0x1.4b58363f63dd6p-183, 0x1.40f1eeeced569p-161,
     0x1.9c6a7bcb042b4p-213, 0x1.ef5642e108531p-262, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c57439dff8f35p-5, 0.0, 0x1.9e7ed7c2f447ep-573, 0.0, 0x1.ce41f64bfdf9ap-832,
     0x1.ef8cee9ebba27p-675, 0x1.39c5fb712de15p-575, 0x1.e0d6d1236b85bp-792, 0.0, 0.0,
     0.0, 0x1.b8bb306600fap-547, 0x1.371da119bceb4p-81, 0.0, 0x1.53b4e6f7d1c5fp-234,
     0x1.ceac5b6d8cef1p-463, 0x1.4ce4595f8781fp-51, 0x1.aabf77116d7ep-937, 0.0, 0.0,
     0.0, 0x1.9549f3dad0ee9p-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.80d22059942e7p-312, 0x1.38644f90ce7a5p-915, 0x1.9560d94be4195p-232, 0.0, 0.0,
     0.0, 0x1.17181bc8107c7p-180, 0.0, 0.0, 0.0, 0x1.a2e564f9c39adp-840, 0.0, 0.0,
     0x1.8cc717e88b332p-479, 0x1.92d41512cfc9p-149, 0x1.238899b1b98bep-312,
     0x1.3675638f1550ap-806, 0x1.06e075e9f8efcp-316, 0.0, 0.0, 0.0,
     0x1.5d991d625dfbdp-167, 0.0, 0.0, 0.0, 0x1.70b9405f553c9p-405,
     0x1.b117eda1c7f2fp-617, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.22c25cc5c81a7p-259, 0.0,
     0x1.102fa9e371d8ap-404, 0.0, 0.0, 0x1.11d8be38debf7p-118, 0.0,
     0x1.bd9f40b39f3f1p-804, 0.0, 0.0, 0x1.882aec7c4a78cp-759, 0.0, 0.0,
     0x1.3e0b0707ad1c5p-7, 0.0, 0x1.899eeb0e1b846p-1010, 0.0, 0.0, 0.0,
     0x1.483b59e8df004p-428, 0.0, 0x1.e2fcdac9492bap-103, 0.0, 0.0,
     0x1.c18b4551a5f58p-969, 0x1.0dc69c6194671p-364, 0x1.ebe63499c90b1p-399,
     0x1.3c5c744bf92f2p-241, 0x1.5b85bc98efec8p-159, 0.0, 0.0, 0x1.c24f14772c9d9p-627,
     0.0, 0.0, 0x1.91f33999e794bp-264, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6fbd873d5e096p-932, 0.0, 0x1.3fe8bf3c0806ep-349, 0x1.9210b81a99e19p-853, 0.0,
     0.0, 0x1.1c27f50d81d03p-685, 0.0, 0x1.461c648f36c3bp-781, 0.0, 0.0, 0.0,
     0x1.4181b912ea958p-198, 0x1.c60dda9296e5fp-406, 0.0, 0x1.d30e5c997366cp-518,
     0x1.ecb3dc23277fdp-406, 0.0, 0x1.3254bbecfeaeap-69, 0.0, 0x1.c0432a4f16587p-244,
     0x1.4c07fb0756132p-41, 0x1.86e18e02598a4p-238, 0x1.0eacbf03e1eecp-761,
     0x1.1d173f9edca8ep-116, 0.0, 0x1.ab6e7a9c81aabp-377, 0x1.cbbcf6f34b715p-208, 0.0,
     0x1.f55e76e1f86a2p-133, 0.0, 0x1.6024aefb4d3a8p-290, 0.0, 0x1.d6146f021a352p-176,
     0x1.71ee9e5269e2cp-531, 0.0, 0.0, 0x1.236d7fa984746p-779, 0.0, 0.0, 0.0,
     0x1.67dc84945e56bp-282, 0.0, 0x1.fb419b542eae2p-673, 0.0, 0x1.471a630b24b32p-131,
     0x1.8dab14894faaap-436, 0.0, 0.0, 0x1.d4167cb59f919p-732, 0.0, 0.0, 0.0,
     0x1.60a7192cb9df4p-972, 0x1.301c5774a075ep-317, 0x1.89273e2d32aaap-720, 0.0, 0.0,
     0.0, 0x1.923f09a1b9a62p-206, 0.0, 0x1.439efd5958a1fp-823, 0x1.795f3a491f14ap-725,
     0x1.9f7225cb89b1ep-180, 0.0, 0.0, 0x1.d3e664e7cbcbfp-323, 0.0,
     0x1.8352c4ccfd27cp-524, 0.0, 0.0, 0.0, 0.0, 0x1.7807f1dfefa26p-632, 0.0,
     0x1.187e291533e22p-208, 0x1.79aa730aaf77ap-579, 0x1.a450102fae894p-269, 0.0,
     0x1.1ac9b4b31c6bdp-668, 0x1.82b6bdae68efep-335, 0.0, 0x1.0d6c6bd0fa22cp-608, 0.0,
     0.0, 0x1.4d62f09b011a1p-205, 0x1.8ae9556d6d062p-464, 0x1.9968ad180f8dep-165,
     0x1.f919858069bb1p-962, 0x1.361f4f9766a51p-2, 0x1.e3793184ab479p-671, 0.0,
     0x1.49224c24f6084p-759, 0x1.6c99dc2a5e35bp-544, 0x1.3f0e7a70083f6p-745, 0.0, 0.0,
     0.0, 0x1.bc7603e2e1aa3p-282, 0x1.c3c47064733c5p-741, 0.0, 0.0, 0.0,
     0x1.5e908d89569fdp-55, 0.0, 0.0, 0x1.3c8adff710893p-844, 0x1.8543db3a7983cp-551,
     0x1.a375631544f9fp-498, 0x1.bb4e3ad9f7d6cp-676, 0x1.e941f20d09d73p-1009, 0.0,
     0.0, 0x1.4c9e6ed231b6fp-548, 0x1.46774d6b03296p-593, 0.0, 0x1.02b8be7050f7ep-765,
     0.0, 0x1.82767dfcb1d08p-774, 0.0, 0.0, 0.0, 0x1.48566f1aa63aep-776,
     0x1.4446f4f5788fep-118, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0x1.3435de21e04ap-312,
     0x1.9bec7aa72fd57p-894, 0.0, 0.0, 0x1.1db1906042362p-632, 0.0, 0.0, 0.0,
     0x1.2eecf55604568p-526, 0.0, 0.0, 0x1.7d6ea273bff9bp-997, 0.0,
     0x1.3f0990bce9bd4p-833, 0.0, 0.0, 0.0, 0x1.7199902674508p-21, 0.0,
     0x1.55b4f278bff2p-190, 0x1.72c90a447c6b5p-405, 0x1.53a039c3a1f78p-617,
     0x1.fd0e5e0589fcep-215, 0x1.7cd66a15c7f09p-485, 0x1.2a3e116337d69p-590,
     0x1.0f3fa9ca11456p-165, 0.0, 0.0, 0x1.71d49a2fc9905p-848, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.effc825395146p-50, 0x1.3303caf571157p-50, 0.0, 0x1.1cad400d8a964p-153,
     0x1.a3515b2aedca8p-38, 0x1.d0baebdf47d28p-538, 0x1.bbaf38f440ea5p-172,
     0x1.93900f6629644p-719, 0.0, 0.0, 0.0, 0.0, 0x1.5eea265346579p-999,
     0x1.d359304177fffp-238, 0.0, 0x1.257f7820a54d8p-551, 0x1.b3fcf3374dfa9p-1, 0.0,
     0x1.0578ef5b2ae37p-625, 0x1.019e6ccd8c96p-432, 0x1.7802d273d7412p-852, 0.0, 0.0,
     0.0, 0x1.149c0b921b0abp-445, 0.0, 0x1.e7dc0a40d7503p-490, 0.0, 0.0, 0.0, 0.0,
     0x1.bb48656a05c9ap-835, 0.0, 0.0, 0.0, 0x1.fc71167dec9bcp-723, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6fea3e8d52cbcp-194, 0x1.d6188273178f1p-971, 0.0, 0.0,
     0x1.0eae5ce6c0861p-540, 0x1.320d2fee2c001p-568, 0x1.45c86ff20b262p-784,
     0x1.5cf8eb58aa52cp-977, 0x1.63ab02d72fa7fp-264, 0.0, 0x1.2dd675ae6b6e3p-1015,
     0x1.e1b78d7ba16d9p-527, 0x1.ed33f661c955bp-1012, 0.0, 0x1.8adf1bda95092p-669,
     0.0, 0.0, 0x1.c35c4a8a721acp-771, 0.0, 0x1.0d422a5542b5cp-93, 0.0,
     0x1.6cc544bf05214p-409, 0x1.d70b583f6ad1cp-186, 0x1.0235dbdebd94fp-937, 0.0, 0.0,
     0x1.070d59411bb9bp-480, 0.0, 0.0, 0x1.c4460e4f5776fp-117, 0x1.89955f568601ep-816,
     0x1.2915edf5c366cp-489, 0.0, 0.0, 0x1.ef301545f2497p-682, 0x1.bdc59a0774e21p-804,
     0x1.352ceab34f57p-654, 0x1.f0b2b476e217dp-799, 0.0, 0x1.68fd536f164dp-949, 0.0,
     0.0, 0x1.84b531d6235f5p-665, 0x1.a96d4e98aa121p-475, 0.0, 0.0, 0.0, 0.0,
     0x1.3bb6e1e15d84fp-446, 0.0, 0x1.07c8844e60cb3p-844, 0x1.918b056051fep-670, 0.0,
     0.0, 0.0, 0x1.7f97e1b9102bcp-922, 0.0, 0.0, 0x1.8392a97b0821p-52, 0.0,
     0x1.9b855cd33b423p-84, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1bc15021a832p-749,
     0x1.9468fea0b5ea6p-827, 0x1.79c4d8998707ep-918, 0x1.0bf047c62e9abp-169, 0.0, 0.0,
     0x1.466a6696b566bp-337, 0.0, 0x1.422f248008742p-232, 0.0, 0x1.6d29a6b701c34p-492,
     0x1.153ebfc3df6eap-341, 0.0, 0x1.7e75bd62c51e2p-1013, 0.0, 0x1.f822be2f89aap-325,
     0x1.81c8ca0788823p-122, 0.0, 0.0, 0.0, 0x1.44db469123914p-357, 0.0,
     0x1.391e95d3716ffp-86, 0.0, 0.0, 0x1.5dc984cca16c1p-983, 0.0, 0.0, 0.0, 0.0,
     0x1.a02186d539783p-662, 0.0, 0.0, 0x1.a4507768b6e23p-709, 0x1.3b1cf8029b5fcp-995,
     0x1.5d12b36b8ea67p-588, 0x1.7db3be6a88a52p-332, 0.0, 0.0, 0.0,
     0x1.5b3d483e0bef3p-171, 0.0, 0.0, 0x1.bbb6d324a02a3p-988, 0.0, 0.0,
     0x1.9911b6b8055d9p-64, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd3c6684f334dp-863,
     0x1.39279294cdcb3p-773, 0x1.3a258c9689356p-7, 0.0, 0x1.8c360b2673313p-339,
     0x1.491ccbec3bc34p-272, 0.0, 0x1.7988f167f060bp-262, 0.0, 0.0, 0.0,
     0x1.396d25071d5a7p-312, 0x1.8a13b737806cbp-324, 0.0, 0.0, 0x1.58af6f98f82cap-317,
     0x1.f64f06797a91dp-37, 0.0, 0.0, 0x1.0bbef03c7ea5fp-701, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f75f39015bc7cp-127, 0x1.74e723bdb1cap-355, 0.0, 0x1.d7fc689f3ec69p-449,
     0x1.160dedf84abfbp-52, 0.0, 0.0, 0.0, 0x1.40c2de8c95a02p-919, 0.0, 0.0, 0.0,
     0x1.87c674a28103fp-657, 0x1.43519de339a89p-71, 0x1.fc0dacd65d404p-359,
     0x1.06c6e98af695cp-366, 0x1.d034777f0ef3p-933, 0x1.87424caec7f27p-51, 0.0, 0.0,
     0.0, 0x1.d8dba1766d336p-222, 0.0, 0x1.45b3036840e62p-269, 0x1.31b7df20f274ap-50,
     0.0, 0.0, 0x1.4d2f65c46bcb8p-14, 0x1.8de4682e64f93p-794, 0x1.2217cc36995bbp-818,
     0x1.48aa473765f3ep-382, 0x1.79a884751652dp-290, 0x1.30b2eff6bdc54p-663, 0.0, 0.0,
     0.0, 0.0, 0x1.4bfb9c16c07b2p-88, 0x1.2c56bf0b929bp-697, 0x1.ff3204bfce849p-99,
     0x1.2bc5b15bdb413p-834, 0.0, 0.0, 0.0, 0x1.8259be6b12382p-581,
     0x1.923a756c1aef5p-649, 0.0, 0.0, 0x1.6f0cb30ef203fp-751, 0.0,
     0x1.4430a51144475p-437, 0x1.e10c06e539154p-269, 0.0, 0x1.9d74d1b62c295p-155,
     0x1.6b26f986dae81p-252, 0x1.8341b1207c0f4p-141, 0x1.b9c5941de244bp-109,
     0x1.04b3e2f2a2493p-208, 0.0, 0.0, 0x1.d9a06b1d9dd29p-541, 0.0, 0.0,
     0x1.07b05f7cf7427p-879, 0.0, 0x1.475daeabdf9cap-205, 0x1.50063ceb0b239p-708,
     0x1.aa4ceefc840e8p-110, 0x1.29d4de6eebc8ep-940, 0x1.6c582d581b3dfp-1004, 0.0,
     0x1.23fa9c1b72db2p-438, 0.0, 0x1.bbd880ec3ee7cp-953, 0.0, 0x1.bf6253a949307p-390,
     0.0, 0.0, 0x1.738726e9ffec9p-840, 0.0, 0.0, 0x1.216dd4c89b4f1p-967,
     0x1.84fe1e32a067bp-483, 0x1.dd041cb9d02c5p-866, 0.0, 0x1.0a97d3e8cd5e6p-657,
     0x1.316bb3698051dp-3, 0.0, 0.0, 0x1.6e2a03591fa02p-973, 0x1.49a421af2e1a1p-754,
     0.0, 0x1.72f861db8267ep-9, 0.0, 0.0, 0x1.f71c3cb75b214p-205,
     0x1.c1032d9a4a5b5p-434, 0x1.e2d93a657ed4dp-184, 0x1.b67b4191a150bp-167,
     0x1.176eb8dc0fb3cp-817, 0.0, 0.0, 0x1.360c2fd9bb3ep-541, 0.0, 0.0,
     0x1.7bc4bb611c675p-746, 0x1.b7d5779b94716p-192, 0.0, 0x1.30eb4ed87f93cp-932,
     0x1.7d2b77015c56ep-152, 0.0, 0x1.e6d4222f6c526p-405, 0.0, 0x1.c7fddc1e124f4p-31,
     0x1.93f97df6df69ap-877, 0x1.d7407776d8126p-750, 0.0, 0x1.a7620d27f1106p-397,
     0x1.e035b992800e6p-719, 0x1.2e4c231fe75fbp-62, 0x1.cc7b96a642e3ap-869,
     0x1.8c1562a8b02fdp-199, 0.0, 0.0, 0x1.16d7152660082p-812, 0x1.463c3e63fa751p-330,
     0x1.0d9dc8e9ec91bp-292, 0x1.842420862a05dp-283, 0.0, 0x1.7bac33899c396p-350,
     0x1.216caaa80b4efp-882, 0x1.8ef5afd356903p-331, 0x1.34703ddff12d4p-986,
     0x1.5a5e103d0fc7dp-379, 0x1.2edbe67d8c34p-38, 0x1.17d7c15e4ff38p-658, 0.0,
     0x1.b3d0471b2eb1ep-748, 0x1.f12176ce89f37p-108, 0x1.c950e4772173cp-103,
     0x1.2a09a2e227e61p-358, 0.0, 0.0, 0x1.0479cdc969395p-337, 0.0, 0.0,
     0x1.39bd542cd6456p-1008, 0x1.a82e990c65d43p-740, 0.0, 0.0, 0x1.daeadb72644p-345,
     0.0, 0.0, 0x1.811706df7e05p-507, 0.0, 0x1.2917c4578a20cp-285,
     0x1.ce996036c54c7p-770, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.622ac1afde0fp-581,
     0.0, 0.0, 0x1.e7bfdc533e809p-900, 0x1.7748ba996bce8p-920, 0.0, 0.0, 0.0, 0.0,
     0x1.f1358da9beecap-693, 0.0, 0x1.06c1174aadaa5p-488, 0x1.d1c15ccffa4eap-393, 0.0,
     0x1.5c262becde8e4p-120, 0x1.fe71c774a57fap-484, 0.0, 0x1.f3584c502c437p-91, 0.0,
     0x1.a30b22dbfe5bfp-673, 0x1.9e28c9d241d7bp-816, 0x1.26753c8a8f795p-925,
     0x1.cec5e6544f37p-539, 0.0, 0x1.d579a13b55cf8p-637, 0x1.2daf7b445ab13p-212, 0.0,
     0x1.f4b4e5e43d3cp-10, 0.0, 0x1.bdee5eac9a98p-656, 0x1.aed7aa3538479p-350,
     0x1.02c3e516c0eb5p-885, 0.0, 0.0, 0.0, 0.0, 0x1.26b7ee75575adp-294, 0.0, 0.0,
     0.0, 0x1.2da97cd5c12aep-817, 0x1.3269a4f0621c1p-456, 0.0, 0x1.b79ffc983153ep-919,
     0x1.94ced79d9d02ep-144, 0.0, 0x1.60ca79fb48afcp-894, 0.0, 0x1.941e57a5ab42bp-932,
     0.0, 0x1.dc2f755ae2d0fp-747, 0.0, 0x1.a66cdf7bb36cep-469, 0.0,
     0x1.783e4a7b88d27p-207, 0x1.8edc9150be087p-473, 0x1.45cb72647dbfp-6,
     0x1.df630d80aedefp-868, 0x1.c14a134fac9bp-849, 0x1.5651a757eb463p-704,
     0x1.1733f595ff587p-767, 0x1.b181b559e5106p-955, 0x1.053ac6742cf4dp-179,
     0x1.b5cc79e85f289p-398, 0.0, 0.0, 0.0, 0.0, 0x1.427eb2c18134ep-88, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.758d63a8804afp-175, 0x1.74cb5eef0e706p-535, 0x1.9dff07f226e46p-303,
     0.0, 0x1.2c523d88e09d5p-86, 0x1.9910ea9e1d8b2p-816, 0x1.034b75e8bb24ap-952,
     0x1.1063d987ab37ep-487, 0.0, 0x1.46f171f829b1fp-652, 0x1.e8ec2ab67bad7p-911,
     0x1.8cd1fab5b0edfp-640, 0.0, 0.0, 0x1.0448eb292ec35p-484, 0x1.1180cfc63f629p-820,
     0.0, 0x1.c26f8618d5efbp-264, 0.0, 0x1.1b1fc3575d572p-309, 0.0,
     0x1.acc1fe0a1db18p-952, 0.0, 0x1.5ea897489fda6p-1018, 0x1.61eaf5f7375f8p-299,
     0.0, 0.0, 0x1.5b0c7815b1f0ep-292, 0.0, 0.0, 0x1.0ff8a2cf48aafp-423, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fcb68052d02bbp-941, 0x1.0667db29618a1p-995,
     0x1.ce19a543059a9p-617, 0.0, 0x1.523d6d5eb99cdp-703, 0.0, 0x1.23ff68aed55f4p-199,
     0x1.8a45dc332d809p-128, 0x1.d347ebbd8b8c7p-880, 0.0, 0x1.1774f9a0d17cbp-715,
     0x1.54711c31526cp-322, 0.0, 0.0, 0.0, 0x1.b24aefcf83aa9p-565, 0.0, 0.0, 0.0,
     0x1.ac3ddd0f5545p-701, 0.0, 0.0, 0x1.5a84163b66b78p-583, 0x1.0813f3bd53053p-746,
     0x1.a607c98da2023p-62, 0.0, 0.0, 0.0, 0.0, 0x1.137e57867b712p-831, 0.0, 0.0, 0.0,
     0x1.cc55f697c4c4ap-842, 0x1.23919a929ad84p-159, 0.0, 0.0, 0.0,
     0x1.32d46ffaf9f43p-244, 0x1.97b0abf797f6fp-962, 0x1.0ae5a5e1c0b65p-198,
     0x1.5938436d0f4e7p-703, 0x1.b5f6587a1d759p-782, 0x1.4cfa0400422f5p-684,
     0x1.ccea72d339982p-718, 0x1.de498a3f3cecdp-87, 0x1.5b53136482cafp-243,
     0x1.eeb39fe6f7d3fp-998, 0x1.bd55130562eeap-726, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3303fe2f1bcb8p-168, 0x1.bc244c4f89a32p-813, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4265d4ef4acdp-479, 0x1.2f2eab2633a9ep-88, 0.0, 0.0, 0x1.d8e6ad25045a9p-600,
     0x1.cb012999cd795p-958, 0.0, 0x1.dcada4a7774b2p-218, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5f5b15efd933fp-867, 0.0, 0x1.419aca08d822ep-289, 0x1.56add50598b39p-601,
     0x1.cd9a933147616p-879, 0x1.7290221654d93p-26, 0.0, 0x1.8a7eda6664d32p-308, 0.0,
     0x1.ae8f653a2ddbp-608, 0x1.88e889276c303p-25, 0.0, 0.0, 0x1.79cbd83d3d4b1p-143,
     0.0, 0.0, 0.0, 0x1.cb1e12e04eb16p-196, 0x1.66f7f776cf6e9p-661, 0.0, 0.0,
     0x1.c98575993cfe5p-771, 0.0, 0.0, 0x1.a3aff2c1f35f9p-154, 0x1.f998fdbfae1fcp-258,
     0x1.64d1d3c177187p-337, 0.0, 0x1.170cc2d2b4d46p-34, 0.0, 0x1.26cd90481fe4dp-692,
     0.0, 0.0, 0.0, 0x1.45ee8fd812559p-864, 0.0, 0.0, 0x1.e1bea8696057cp-972, 0.0,
     0x1.5f0bf1101c5eap-1012, 0.0, 0.0, 0x1.08fafecc59c95p-221, 0.0,
     0x1.2005ab05aa53fp-915, 0x1.21592638f5d58p-394, 0.0, 0x1.0ccd43249526dp-497,
     0x1.80de0b30be0b1p-631, 0x1.0cd076735b5ep-920, 0x1.4daa103ae8389p-219,
     0x1.6693ef0954972p-215, 0.0, 0x1.0937c6ca4a041p-221, 0.0, 0.0,
     0x1.ae3983db79d0bp-214, 0.0, 0.0, 0.0, 0x1.6d3074d9dd547p-524,
     0x1.a87645a1b7732p-279, 0.0, 0.0, 0.0, 0x1.3c8541b3eddf5p-532,
     0x1.1e0fdcfbbf9c9p-37, 0x1.d4dd3ec2167e8p-350, 0x1.5de68fb739833p-41,
     0x1.7364ec4633fc9p-396, 0.0, 0.0, 0x1.4be39a31762d5p-725, 0.0,
     0x1.a207afccc3158p-849, 0x1.fdde0e5ef459dp-4, 0x1.86cc9d76860e7p-132,
     0x1.e65d2de5c092p-919, 0.0, 0.0, 0x1.a06428e9dccd8p-166, 0.0, 0.0, 0.0,
     0x1.b5209d70dd7a5p-657, 0x1.c4904a3a44a7fp-139, 0.0, 0.0, 0.0,
     0x1.f86e7bc84106ep-687, 0x1.c58cec080aa54p-25, 0.0, 0x1.ce45d74377b09p-804, 0.0,
     0.0, 0.0, 0x1.b101cb05b010fp-997, 0x1.5f8427b91ce87p-538, 0.0, 0.0,
     0x1.e562986a6640bp-306, 0x1.cb09cb755cf13p-434, 0x1.78cbdf4b9bf86p-288,
     0x1.fe67793fe4e9cp-275, 0.0, 0x1.8a0b3b74cc4b1p-430, 0x1.2367ed13727abp-554,
     0x1.cc80b5343e3d5p-500, 0x1.857182f981d1ap-91, 0.0, 0.0, 0x1.97c7c21c807bdp-280,
     0.0, 0x1.3629c1302e6d3p-764, 0.0, 0x1.331c6c20e8bd1p-3, 0.0, 0.0, 0.0, 0.0,
     0x1.381a5eaf601e8p-956, 0x1.be10a0ac3769fp-645, 0x1.3e06e75c55113p-327, 0.0, 0.0,
     0x1.e46a2e54c0b38p-635, 0x1.eeef7a0aeb8aap-751, 0x1.ee234592d8431p-451,
     0x1.5082ecba677e9p-203, 0.0, 0x1.02c4653ddf2cbp-928, 0.0, 0x1.d1c35495848fbp-900,
     0x1.c43622974453fp-502, 0x1.15962be8814d8p-960, 0x1.2d1e8fa9b8e48p-549, 0.0, 0.0,
     0x1.2931c5a5e31d7p-462, 0x1.22780aaf26724p-446, 0.0, 0x1.5dedb48a7e922p-212, 0.0,
     0.0, 0.0, 0x1.2880432de4b2ep-97, 0.0, 0x1.819d0046cd59ep-382,
     0x1.6aab1724caf86p-287, 0x1.550f3f7dd4be3p-998, 0.0, 0.0, 0x1.bacecf47dee4bp-144,
     0x1.fae4356bed3e9p-282, 0x1.497c69ec078d6p-403, 0.0, 0x1.f8cf4085e099ap-144,
     0x1.8c84c2547c327p-523, 0x1.c07bbb3680fdap-314, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_sqrtd2_u05avx2128(tmp0);
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
    printf("Sleef_finz_sqrtd2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd2_u05avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
