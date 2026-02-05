/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind4_u10kvx.c --function Sleef_finz_sind4_u10kvx \
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
     0.0, 0x1.27cce1bf6d229p-351, 0.0, 0x1.43efab6229a04p-887, 0.0,
     0x1.614343dd4d918p-544, 0x1.7aec2fe0e42ddp-473, 0x1.163ec128563a3p-597,
     0x1.e482700e0f8f8p-65, 0x1.8ca0371af8fecp-901, 0x1.02bb79dac412ep-991,
     0x1.37b0bb226e8eap-118, 0x1.31bff0ef10b1fp-178, 0.0, 0x1.293c5e84b24e4p-691,
     0x1.d1236cde187cap-592, 0.0, 0.0, 0x1.fd091f5d7a973p-411, 0.0,
     0x1.cbde63ed2c6a6p-9, 0.0, 0.0, 0x1.bea64f807c05fp-783, 0x1.432f3471ed0d9p-538,
     0x1.a65c8f80ecefcp-211, 0.0, 0x1.46c4b9d093229p-663, 0x1.3f699f03f93a4p-993, 0.0,
     0.0, 0.0, 0.0, 0x1.24842857652d4p-229, 0.0, 0.0, 0.0, 0.0,
     0x1.662b5b49808fdp-1007, 0x1.f29487e4eeee6p-711, 0x1.db1c5d38204p-206, 0.0, 0.0,
     0.0, 0x1.766388dc0b7efp-761, 0x1.7061112760ba6p-882, 0x1.f31dac0757adcp-454,
     0x1.ab6545afd9a58p-720, 0.0, 0.0, 0x1.5596077eacf25p-435, 0.0,
     0x1.a662c96f2e395p-873, 0.0, 0x1.13b1b763297dbp-593, 0x1.abefbec559ee3p-861,
     0x1.42c4d5b938fcdp-888, 0x1.1f57badc931c3p-776, 0x1.d74dc7fe1542bp-444,
     0x1.521e3130a8f6dp-778, 0x1.8c61fc538d78bp-208, 0x1.ef70bd613e9e7p-94,
     0x1.7a57d6287fdf7p-566, 0x1.b4a51bb50db48p-503, 0.0, 0.0, 0x1.79b8e25872a98p-750,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1d34eff6509bp-752, 0x1.43355321d7ce9p-408, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5f6f96ca4ae43p-289, 0.0, 0.0, 0x1.9850126f70a6ap-473,
     0x1.6741b6cd1e989p-788, 0.0, 0.0, 0x1.2aa28a922aae3p-101, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.eff81abd468e7p-191, 0x1.d380c7bff3549p-490, 0.0,
     0x1.2efbbddfe06fbp-242, 0x1.8283dd5625fecp-138, 0x1.2b50b0d3a1878p-257, 0.0,
     0x1.376416d95efa6p-896, 0x1.84032cb95118bp-577, 0.0, 0.0, 0x1.f1734932a6df1p-646,
     0.0, 0x1.1aa5ddb5d789dp-137, 0x1.47074a722da39p-568, 0x1p0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4ad1d6b405239p-306, 0x1.3b41c46771959p-368, 0.0,
     0x1.1fe9aafaf15cfp-389, 0x1.be180380f1ec2p-857, 0x1.0773ed690d123p-2,
     0x1.99cca328e59bfp-196, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b293501b58395p-362, 0.0,
     0.0, 0.0, 0x1.e65586aab9853p-482, 0.0, 0.0, 0x1.e02d077317305p-559,
     0x1.4cc521eef0f36p-595, 0.0, 0x1.15d09edaffb6ep-610, 0x1.5e217dda84962p-1020,
     0.0, 0.0, 0x1.625e0e835706cp-283, 0x1.69da422781ca6p-454, 0.0,
     0x1.11d8de04182abp-505, 0.0, 0.0, 0x1.1c6bac1089fd3p-237, 0x1.996f480f35c1dp-241,
     0x1.e20c6f71d56fcp-948, 0x1.689e9a9f5f744p-278, 0.0, 0.0, 0x1.795819dbc4938p-695,
     0.0, 0x1.320ff0c145651p-98, 0x1.1d6e82129755ap-914, 0x1.42d6f00722782p-430, 0.0,
     0.0, 0x1.a2e294ada07a3p-628, 0.0, 0.0, 0.0, 0.0, 0x1.29d64046c9338p-330, 0.0,
     0.0, 0.0, 0.0, 0x1.53b043addb6bdp-219, 0x1.b40fbf49bb513p-608, 0.0, 0.0,
     0x1.98a3adef8369cp-13, 0x1.3f27bed461e3ap-573, 0x1.fcc3f0b20d3cfp-717, 0.0, 0.0,
     0x1.15ecf94aa546cp-553, 0.0, 0x1.3931e75d24f3p-1005, 0.0, 0x1.e89521b085216p-456,
     0.0, 0.0, 0x1.fa547af99766cp-998, 0.0, 0x1.32516a3319d2ap-257,
     0x1.521a7216f64f5p-668, 0x1.c40623fca9468p-622, 0.0, 0.0, 0.0,
     0x1.8519aa237204fp-278, 0.0, 0.0, 0x1.04d59a1248a64p-819, 0x1.ee4e982db73bbp-734,
     0x1.d514ea9a424bap-522, 0.0, 0.0, 0.0, 0x1.17f5e5ef373e1p-153, 0.0, 0.0,
     0x1.f189e89ac552bp-68, 0.0, 0.0, 0x1.e6f4545c6cd49p-1008, 0.0,
     0x1.3f2016be1e462p-304, 0x1.8cd2943fdf491p-817, 0x1.4f572c09b414p-929,
     0x1.57c00909ad727p-1009, 0.0, 0.0, 0.0, 0x1.ac025efb66055p-213,
     0x1.3b54a67070ca5p-188, 0x1.d65e8938cda48p-193, 0x1.5f18b11372524p-235, 0.0, 0.0,
     0x1.61cff4997d023p-376, 0x1.0e8f1b021bfb7p-390, 0x1.8a62f64d1e78fp-862, 0.0, 0.0,
     0x1.e445f79c7d553p-128, 0.0, 0x1.b7f65ec22fce8p-38, 0x1.9cc4793477736p-508,
     0x1.4c5a1f1bb007dp-691, 0.0, 0.0, 0x1.dd8c4da7463a1p-674, 0.0, 0.0, 0.0,
     0x1.bd30e8864ee37p-319, 0x1.9842fb40d68d5p-956, 0.0, 0x1.1275053ba961fp-10, 0.0,
     0x1.8d4b89f70b704p-413, 0.0, 0.0, 0.0, 0x1.3c4c9abaa477cp-551,
     0x1.81a7300e50949p-19, 0x1.93fff78ff929fp-1011, 0x1.003786788af84p-796, 0.0, 0.0,
     0.0, 0x1.744d93e920251p-367, 0.0, 0x1.86385bfcbd615p-926, 0x1.da94600929c78p-67,
     0x1.4fa037d9dedaap-410, 0.0, 0.0, 0x1.31c3bdbe39ad9p-259, 0.0,
     0x1.c8054c8a32dffp-823, 0x1.7d54d7d33bdd1p-960, 0.0, 0x1.400a1206cc976p-439, 0.0,
     0.0, 0x1.fd849950884c6p-384, 0.0, 0x1.ef079548e0615p-748, 0x1.54a076193a39cp-775,
     0x1.0eacef94a1524p-99, 0x1.5a593cf177b26p-212, 0.0, 0x1.330a5316073bfp-399,
     0x1.4e8e6e12fa3d8p-767, 0.0, 0.0, 0.0, 0x1.981221c9f4eecp-33, 0.0,
     0x1.20dca856ec5aap-889, 0x1.51480733d91b7p-301, 0.0, 0.0, 0.0, 0.0,
     0x1.45a1d1b39a476p-455, 0.0, 0.0, 0.0, 0x1.8de941af1da53p-692,
     0x1.c9b68220c52cbp-772, 0x1.d7c7eb814f17bp-371, 0.0, 0x1.96e900095baa3p-538,
     0x1.b17e60035fb44p-552, 0x1.33efd995b6981p-487, 0.0, 0.0, 0x1.96e4f5458f5cap-632,
     0.0, 0.0, 0x1.8e11ddca136efp-119, 0.0, 0x1.8759ae240704dp-385, 0.0, 0.0, 0.0,
     0x1.26e1ea53c7479p-838, 0.0, 0x1.1199920622c3ep-424, 0x1.525f3eb0f6675p-179, 0.0,
     0x1.5d0471f269e09p-773, 0x1.5f8f0e37d39dfp-355, 0x1.e344ed164d7d9p-736,
     0x1.521fb8452669ap-732, 0x1.153debc3c6324p-733, 0x1.53e178dc7021ap-363, 0.0,
     0x1.fba5361c51eddp-128, 0.0, 0.0, 0x1.418c0c5052f8dp-1003, 0.0,
     0x1.f5778332750c7p-371, 0x1.2543c82be7bc4p-988, 0x1.ac7f49cc4eefp-350,
     0x1.0f2c82e1b1e41p-273, 0x1.48a6e2c3c6abdp-552, 0x1.ab1341e7c5623p-347,
     0x1.61d8d88cba58p-263, 0.0, 0x1.cc497f81cc912p-317, 0x1.09858b09d126ap-266,
     0x1.2f151fd1cb555p-497, 0x1.c7c785c8a60d2p-603, 0x1.786a5a73a19d8p-126, 0.0,
     0x1.49452fa688789p-242, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3309f79c6af66p-627, 0.0,
     0x1.5bb04bbc23647p-156, 0x1.9881ab2a92e34p-56, 0.0, 0x1.ca835a9a3b4dbp-183, 0.0,
     0.0, 0.0, 0x1.a8ff7784240ecp-563, 0.0, 0.0, 0x1.52fe33065c82bp-567,
     0x1.f9fde4d0fb622p-202, 0x1.f339aa3cc66cp-816, 0x1.28db5d003ebp-170, 0.0,
     0x1.68b01c7784c3bp-753, 0.0, 0x1.9b2012bafc107p-306, 0.0, 0.0,
     0x1.2d08782a1b2f3p-699, 0x1.1797902bddf56p-903, 0x1.d861547314b13p-93, 0.0,
     0x1.d3f7104b70f28p-844, 0x1.081228677dd6ap-507, 0.0, 0x1.0af969056d597p-506,
     0x1.e9d0f1904f2d8p-326, 0x1.487c1621805dep-441, 0.0, 0x1.f1dcae0d177b2p-81,
     0x1.c41ff44e96378p-33, 0x1.8b31f500fdd6p-475, 0.0, 0.0, 0x1.793ea605a540ep-880,
     0x1.70de24fa66ab6p-718, 0x1.14cb91d18de2ap-793, 0x1.7a9517c6f39a1p-716,
     0x1.a2952f8f6e962p-863, 0.0, 0.0, 0.0, 0x1.4b89ea2d828f7p-267,
     0x1.3af37e4600057p-372, 0x1.a8d8e3645bdf7p-656, 0x1.38a1c3b6039dap-1020, 0.0,
     0x1.a5f2da1f6b503p-627, 0x1.b339979c8d253p-207, 0x1.e0015ae99b161p-151, 0.0,
     0x1.1145fea35c51fp-931, 0.0, 0.0, 0.0, 0x1.dbaea8661d469p-153,
     0x1.cb974e5c4e1b2p-570, 0x1.933f03be0b225p-506, 0x1.15fbdc0fda2dep-334,
     0x1.7b75efc2c18f6p-945, 0.0, 0.0, 0x1.64094721c0533p-625, 0.0,
     0x1.1f293678123bbp-485, 0x1.c57b605976b1cp-1001, 0x1.c11cd3834430cp-472,
     0x1.f506396037d9dp-267, 0x1.f3b4577853d85p-780, 0x1.96c95c03536abp-215,
     0x1.333d316d9d5ap-22, 0x1.806e9df132989p-505, 0.0, 0x1.bbe217a9c198fp-589,
     0x1.012ccae68ddbcp-11, 0x1.f664c42a49c5dp-837, 0.0, 0.0, 0.0,
     0x1.11e39c75ade1ep-96, 0.0, 0.0, 0x1.45c93bcf16003p-851, 0x1.dad7627719fcap-53,
     0x1.2856546e03573p-139, 0x1.b21090a3c03bp-599, 0.0, 0.0, 0.0,
     0x1.3b36eee2940e4p-693, 0x1.68b4d7a308094p-912, 0x1.0f13e7e0a362p-191,
     0x1.0020936ee3334p-618, 0x1.f00724adb9bfcp-49, 0.0, 0.0, 0x1.02fb96bf9e922p-200,
     0x1.c2f968ea48cdp-718, 0x1.1c8629aabd0ebp-609, 0x1.3b5bf089481cep-16, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b5f1d97ffafc5p-509, 0x1.3ce0aba59a2c5p-147, 0.0,
     0x1.66e26e699a717p-52, 0.0, 0.0, 0.0, 0x1.66c23cc8a99a3p-744, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c2a66d7985e47p-814, 0.0, 0x1.ea23b5c03cdfp-917, 0.0,
     0x1.be5d8c724dc1ap-805, 0.0, 0.0, 0.0, 0x1.5e969fa5c236bp-311,
     0x1.36ed89075107fp-7, 0x1.095300ec724b2p-112, 0.0, 0x1.06bf6bd0a648ap-735, 0.0,
     0x1.6675e5d9fc237p-260, 0.0, 0.0, 0.0, 0.0, 0x1.b2558bb9750e1p-388,
     0x1.d9117b38739a2p-804, 0x1.00316302619aep-722, 0.0, 0.0, 0.0,
     0x1.9e61fb60b765fp-791, 0x1.b1f758b1e720cp-166, 0x1.34b358d2fa3e5p-227, 0.0,
     0x1.641c89ff317f8p-667, 0.0, 0x1.1a8b4da3df164p-883, 0.0, 0x1.2af05ba1c202cp-688,
     0x1.9d990abfb3e08p-32, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d30971f725abap-998,
     0x1.39ba055925936p-723, 0.0, 0.0, 0x1.23fba1d9efa39p-919, 0x1.c0b5e92a49588p-914,
     0x1.2e3b4e554d651p-878, 0.0, 0.0, 0x1.63dc58155bb46p-486, 0x1.f4b01645686abp-900,
     0x1.853dd1cc6c771p-600, 0x1.433847ad17aeep-777, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1d4c1aa1bb66ap-669, 0x1.42e6500bdc611p-1002, 0x1.8e209f6c69a26p-1018,
     0x1.fc76a624fac21p-729, 0.0, 0x1.3ed86bb9ea85ep-101, 0.0, 0.0,
     0x1.50d5e7179225ap-810, 0x1.62101c2f18d63p-483, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.df79b6d5540cep-140, 0.0, 0x1.4364ab8f21dfp-616, 0.0,
     0x1.b0c06e7f91bcp-467, 0x1.426b2b6da9bd9p-161, 0.0, 0.0, 0x1.76872f5c2a7b6p-706,
     0.0, 0x1.88ff53bbd2063p-685, 0x1.7e64f9e13e40ep-506, 0.0, 0.0,
     0x1.134bfd6ababb5p-589, 0x1.8b8bef60b4c03p-266, 0.0, 0x1.aac84500b6f9dp-688,
     0x1.1a73a292faf05p-302, 0.0, 0.0, 0.0, 0x1.8dd01b5e4b9d7p-599, 0.0, 0.0,
     0x1.2c0dd09cea80ep-692, 0x1.815fa6ee35b41p-870, 0.0, 0x1.be7bde75ee447p-682, 0.0,
     0x1.99bae7f9f6034p-125, 0.0, 0x1.6a97738a64e32p-262, 0.0, 0.0,
     0x1.7b1bea77e75b1p-941, 0x1.6ceaec2ce29fp-544, 0x1.d201e7d6bcb6bp-902,
     0x1.f22318ad929c1p-90, 0.0, 0x1.38416e1ff3ac9p-297, 0.0, 0x1.b02a1c81ef641p-402,
     0x1.3566091987e05p-87, 0.0, 0x1.e99eff980e91ep-126, 0.0, 0.0,
     0x1.0acb1e44c168ap-685, 0.0, 0x1.f7e100c697e11p-660, 0x1.eebb39a0c19eep-937,
     0x1.12d74343b30cdp-801, 0x1.b1955ada044bdp-628, 0.0, 0x1.97011e1d3c69p-13, 0.0,
     0.0, 0x1.32056799e42ep-675, 0x1.f550586e35ad4p-738, 0x1.5ca25170f005p-765, 0.0,
     0x1.a6e39c4c3e26p-466, 0.0, 0x1.4b08877c0a82ap-1010, 0.0, 0.0,
     0x1.93ba3d9bdede8p-995, 0x1.d50db90c0601fp-669, 0.0, 0.0, 0.0,
     0x1.1fa7ee9ddddb8p-85, 0x1.0bf2983273f9dp-489, 0x1.b72fb1388438dp-727, 0.0,
     0x1.edd62fb7b21p-258, 0.0, 0.0, 0x1.8b54fd433c7a8p-804, 0x1.3f547ba14df68p-633,
     0.0, 0x1.5cb75da5982e5p-548, 0x1.2ebc58c24d731p-917, 0x1.799d1047eee12p-946,
     0x1.5e1c3ad6214d4p-813, 0x1.fa2ba783f8cbcp-110, 0.0, 0x1.3d31ed66b539cp-353, 0.0,
     0x1.cc1de0bd8e3a9p-22, 0.0, 0x1.56673a020e3f1p-526, 0.0, 0.0, 0.0, 0.0,
     0x1.a0c10a80e5844p-16, 0x1.985b9797143cap-920, 0x1.234a728aa2d54p-518, 0.0,
     0x1.beb670b085b6cp-925, 0.0, 0x1.9f60b26ce38ep-53, 0x1.81e4c884e614fp-686,
     0x1.086ab34b9dc0ap-363, 0x1.aedde7bf6216fp-239, 0x1.87a522d6be302p-568,
     0x1.a20caf147d6d4p-586, 0x1.62d50db8fa2a4p-711, 0.0, 0.0, 0x1.1cdb0135fc963p-437,
     0x1.9ee42a55390d6p-45, 0x1.6332f7306436fp-465, 0x1.69d7b2faedb39p-537,
     0x1.13c8e775c475p-454, 0x1.11732fdcf5f2dp-663, 0x1.1c651bc88c342p-313,
     0x1.e25c0944e1febp-493, 0.0, 0.0, 0x1.4473a162f71dap-692, 0.0,
     0x1.24bf4661ee834p-113, 0.0, 0.0, 0x1.0836d8e63b2ddp-591, 0x1.f7e47623ceba4p-112,
     0.0, 0x1.5dbcf67e6463ap-138, 0.0, 0x1.85d038324caccp-425, 0.0,
     0x1.65e2b7c846455p-24, 0.0, 0x1.0ca84509a5e88p-833, 0x1.82c5b99601682p-567,
     0x1.9c2c099e55183p-760, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c3ef9d9dcbd32p-480,
     0x1.86a18b3e11387p-771, 0x1.1bec8381797e8p-375, 0x1.e818061bedaefp-598, 0.0,
     0x1.d63abf9e12d7p-467, 0.0, 0x1.a0be889822c72p-996, 0x1.fc27b222b3614p-951, 0.0,
     0x1.5faba9e46e7bap-317, 0x1.e5dbb625ce5dfp-326, 0x1.ddd59c62d80cbp-689, 0.0, 0.0,
     0x1.5c0c71edcaac1p-119, 0.0, 0x1.abb695f3f189p-560, 0x1.645cfc311b5fbp-814, 0.0,
     0x1.795eb477b56b3p-411, 0.0, 0x1.78374d570d73cp-783, 0x1.342afd835071dp-886,
     0x1.1c929c9eb887dp-331, 0x1.fcc681a27d61p-563, 0x1.5581037ab8ee8p-264,
     0x1.682b89565d695p-985, 0.0, 0x1.5e059982fcf09p-724, 0.0, 0.0,
     0x1.f3b3e884c3a6dp-551, 0.0, 0.0, 0x1.402fce7f79139p-331, 0x1.a6b3381ae77f3p-747,
     0x1.b9b2b390fa344p-122, 0x1.03b660e2393acp-13, 0x1.11f75390a354fp-985, 0.0,
     0x1.60b3b2d590076p-245, 0.0, 0x1.5d0aa8432d52fp-771, 0.0, 0x1.07f757f0fbe2fp-206,
     0x1.a40d988dd15c9p-640, 0x1.4d4d6eb41ded5p-757, 0x1.15a8c21689109p-219,
     0x1.e56f48eda3c12p-1022, 0.0, 0.0, 0x1.b265ee397602cp-223,
     0x1.5e8a52ffb11b6p-485, 0.0, 0x1.484f5ba3cd7b5p-879, 0x1.080297ac2e712p-906, 0.0,
     0x1.a103eff22884ap-985, 0.0, 0.0, 0.0, 0x1.cdee4cfd4d516p-2,
     0x1.f85a770e31daap-483, 0.0, 0x1.12e306b78609cp-495, 0.0, 0x1.1da83baaacc8bp-841,
     0.0, 0.0, 0x1.99cabed55e8c1p-742, 0.0, 0.0, 0.0, 0x1.aa7f5c01e6e56p-126,
     0x1.0dc081b99a8efp-656, 0.0, 0.0, 0x1.a89c197c00ebdp-814, 0.0, 0.0,
     0x1.986ba60de7ee1p-334, 0.0, 0x1.2cede6d25cc12p-303, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5fe0658685399p-300, 0x1.44dc04bc2d0dep-611, 0.0, 0.0, 0.0,
     0.0, 0x1.d6bf16183abdp-541, 0x1.cfb72b14c5476p-109, 0x1.08b4518bae6f3p-1014,
     0x1.77410825518e4p-9, 0.0, 0x1.f3381916e678cp-441, 0.0, 0x1.80a2f26c5c1aap-790,
     0x1.a689da10b65c2p-146, 0.0, 0.0, 0.0, 0x1.ecb4b85a184ccp-354, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.887c9ab250fdbp-854, 0x1.11e13fbb00be9p-369, 0x1.a58b78179624ap-102,
     0.0, 0x1.77367e8fef9b9p-812, 0.0, 0x1.7d3332dfb1c51p-433, 0x1.64ccb10278f52p-138,
     0.0, 0.0, 0x1.d386d27d92a02p-869, 0.0, 0x1.752f14d9c8a12p-695, 0.0,
     0x1.6b1dae1e5dd37p-194, 0x1.c929873e65cccp-369, 0x1.320d791acc288p-882,
     0x1.06428875ff992p-40, 0x1.3404746e73af5p-275, 0x1.d3e9fe646f68fp-542,
     0x1.5331b2b1d5b31p-613, 0.0, 0.0, 0.0, 0.0, 0x1.7a25318602999p-691, 0.0,
     0x1.88174c5f29793p-381, 0.0, 0x1.bd0bae513dc62p-720, 0x1.2d8f03df29701p-734, 0.0,
     0x1.464ab30a86078p-100, 0.0, 0x1.3deb3944acec6p-833, 0.0, 0x1.e2d7d2f33e593p-623,
     0.0, 0x1.2400214f0a901p-800, 0.0, 0.0, 0.0, 0.0, 0x1.f757f85f0398ap-148, 0.0,
     0x1.e4005f069f287p-938, 0x1.0a66ca2bf9dccp-870, 0x1.2c4da6a9959cep-169,
     0x1.0f36881f11901p-736, 0.0, 0.0, 0.0, 0.0, 0x1.d5cab837f286dp-43,
     0x1.b000bbe44e3f2p-266, 0.0, 0x1.a28d5dfba161ap-704, 0x1.ac4833e138a6ap-117,
     0x1.a8d2465aebdacp-930, 0.0, 0.0, 0x1.ad7c6e19d6094p-356, 0.0,
     0x1.a1cdc672ffc8ep-337, 0.0, 0x1.979231051dffdp-855, 0x1.ce699949fdb26p-1003,
     0.0, 0.0, 0.0, 0.0, 0x1.54ff0355c5bafp-518, 0.0, 0.0, 0x1.c602e9f61343cp-369,
     0.0, 0x1.14d2ae6e83ffp-599, 0.0, 0.0, 0.0, 0x1.23b5ef1c1c253p-278,
     0x1.9d7c111e1712fp-151, 0.0, 0.0, 0x1.d675d970260bbp-318, 0x1.49dd4641f067ap-744,
     0.0, 0.0, 0.0, 0.0, 0x1.7289c3333aa19p-762, 0x1.1c66909393eecp-170,
     0x1.7a94d96eb807cp-190, 0x1.5db1342468076p-513, 0.0, 0x1.8ea0085f52d02p-866,
     0x1.582951dd753b3p-246, 0x1.a63b64123bffap-964, 0x1.4577bea973cep-167,
     0x1.3fc2c7d2b54a4p-151, 0x1.d71703e3ee691p-411, 0.0, 0x1.a1291305134d7p-762, 0.0,
     0x1.b22eba2f10284p-137, 0x1.01d4ed2104793p-201, 0x1.64684d61b2992p-628,
     0x1.7a92dd2d9cd6ap-358, 0x1.416faab8e84b8p-427, 0.0, 0x1.d50e029fe08a2p-975, 0.0,
     0x1.8f6808425fe05p-415, 0.0, 0x1.9766eeded6202p-172, 0x1.bc034d5534d2dp-468, 0.0,
     0.0, 0x1.6284cb632f622p-588, 0x1.b22aac42f6b74p-207, 0.0, 0x1.baa57dd14489ep-259,
     0.0, 0.0, 0x1.b4682fa9ba3abp-288, 0.0, 0x1.2d88255e97499p-580, 0.0,
     0x1.8a3ae6bf5524bp-589, 0.0, 0.0, 0x1.a2a365c3b6026p-503, 0x1.2ef4e8a59e20cp-895,
     0.0, 0x1.2a15c8a1423dep-198, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b3f6c7771917p-50,
     0.0, 0x1.820331db374fcp-675, 0.0, 0.0, 0x1.39a6f830ed5dep-870, 0.0,
     0x1.18d86ce95de0cp-22, 0.0, 0x1.32a3789f5ae79p-500, 0x1.b83224f343b85p-654,
     0x1.364cce91b9452p-801, 0.0, 0.0, 0x1.6c894d8004c79p-382, 0x1.396cb3fd4ce39p-181,
     0x1.4149b9cf08999p-576, 0.0, 0.0, 0x1.c5dda536d59ddp-549, 0x1.f45f40809a85ep-262,
     0x1.ee79b27a6167ep-508, 0.0, 0.0, 0.0, 0x1.8eceaf76a7ddep-257, 0.0,
     0x1.4b642031135cdp-572, 0x1.0712e925c0ae7p-620, 0.0, 0.0, 0x1.739de61bb73fdp-849,
     0x1.4cf3c84bef195p-836, 0.0, 0.0, 0x1.830deeee5334fp-355, 0x1.5219bc658a9f8p-811,
     0x1.4f398bee9f08cp-465, 0x1.a384e5ce0bbbp-848, 0x1.df37b957ceb0bp-453,
     0x1.cf382ce6dffe8p-511, 0x1.a7c3693c35876p-1022, 0x1.98cbfeb9f86c9p-675,
     0x1.57d1427f03984p-205, 0x1.2f83d877d9d7fp-420, 0x1.d3220ae3cf2d2p-3, 0.0, 0.0
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
            tmp1 = Sleef_finz_sind4_u10kvx(tmp0);
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
    printf("Sleef_finz_sind4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sind4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
