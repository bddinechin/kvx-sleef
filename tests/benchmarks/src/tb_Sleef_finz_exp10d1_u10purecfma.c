/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d1_u10purecfma.c --function \
 *     Sleef_finz_exp10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.5d63c19648b12p-248, 0.0, 0x1.0ddc4e64b14a7p-811,
     0x1.7fa9ab10c5062p-445, 0.0, 0x1.1221c2106e38ap-462, 0x1.9dc194fa95693p-151,
     0x1.d89aef0267a88p-916, 0x1.4c7fe249a3cfap-26, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.642b335293a9dp-421, 0.0, 0x1.7e7e993e79a5bp-650,
     0x1.d6e2a5fd6fc2p-797, 0.0, 0x1.2b24165a1abb6p-523, 0.0, 0x1.0377b8fd9fb1cp-908,
     0.0, 0x1.5508186c4e28bp-673, 0x1.b507b248f6638p-680, 0x1.a90bf55efb4f3p-849, 0.0,
     0.0, 0.0, 0x1.c36009af1ec88p-669, 0.0, 0.0, 0.0, 0.0, 0x1.aaecab5d14b58p-56,
     0x1.98c436cd5faddp-999, 0x1.769b2bd24b09bp-293, 0x1.e69256a48b0ebp-564,
     0x1.749100a1f679cp-918, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b0249e858d6e9p-224, 0x1.2f57aeb7c02e8p-904, 0.0, 0.0, 0x1.ba77aae742961p-875,
     0x1.2a60dc9be06e9p-887, 0x1.50f678e7d2786p-66, 0.0, 0x1.d3e6ccb331bfp-191, 0.0,
     0x1.f740d32fd9128p-317, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d484af7d64c85p-742,
     0x1.b408dfc53a177p-860, 0x1.aa81c17b739edp-252, 0.0, 0x1.bdb89eda79e03p-634, 0.0,
     0.0, 0x1.5fd4b3064c97p-1009, 0x1.99235b59850f3p-292, 0.0, 0x1.a7f47ac70a4c1p-9,
     0.0, 0x1.bc7e6d600019bp-613, 0x1.6e33a4b72f0d4p-283, 0.0, 0.0,
     0x1.a46397ec5a7f8p-717, 0.0, 0.0, 0.0, 0x1.baa3710c0cdb8p-692, 0.0, 0.0, 0.0,
     0x1.dd4577067fb43p-993, 0.0, 0.0, 0x1.1af69f5a44d18p-168, 0.0, 0.0, 0.0,
     0x1.8bf386dc80edcp-19, 0x1.0ed7b662ac439p-947, 0x1.7c605c76ba2fcp-341,
     0x1.ebd0b62ee8f78p-101, 0x1.7bb1d480a8ed4p-430, 0x1.5d6b9a043991fp-1019,
     0x1.70f9ade4823fap-391, 0x1.e9f43d7c59c88p-859, 0x1.4298d1293bc07p-501,
     0x1.185fe38f4d0a4p-23, 0x1.109f496b5b6c7p-387, 0x1.8287871af325bp-780, 0.0,
     0x1.0f5c7b3774b8dp-640, 0.0, 0x1.6ce34f57ee84ap-792, 0x1.5127d4e97ccdfp-322, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a87a73b9a07cdp-445, 0x1.45b3418077cabp-865, 0.0,
     0x1.0e940a98c4956p-56, 0x1.24173972c6e81p-118, 0.0, 0x1.c85851311a2c8p-397,
     0x1.e278a5dac7813p-66, 0x1.34950f60798fdp-474, 0x1.5f9a3145e4bdfp-20, 0.0,
     0x1.4fba34f9be408p-566, 0x1.92d40568abf71p-982, 0.0, 0.0, 0.0,
     0x1.b9773365f90c7p-178, 0x1.6dd7ed4ab0218p-851, 0.0, 0x1.be2764becd20fp-430,
     0x1.a3c002ddeddf9p-275, 0x1.0803d8de19967p-474, 0x1.76b946ad8d43fp-538, 0.0, 0.0,
     0x1.16e8b739dd237p-106, 0x1.89f1113bef7d5p-937, 0x1.cc73e0aec7ed2p-53,
     0x1.f489abd2dfaa8p-861, 0.0, 0.0, 0x1.7a1accc30d7a9p-802, 0.0,
     0x1.78b5bbdd1acafp-946, 0.0, 0.0, 0.0, 0x1.5794f384528cdp-178, 0.0,
     0x1.741951eea3fddp-571, 0x1.7043d094b816fp-910, 0x1.bbe8d7a032c21p-454,
     0x1.91a107b1ae735p-165, 0.0, 0x1.e6cf4cc04aef8p-672, 0x1.5b0a12ac9a914p-260,
     0x1.011dd312f0cc3p-326, 0.0, 0x1.8f39eb3333264p-370, 0.0, 0.0, 0.0,
     0x1.c482ba7d3fec3p-28, 0x1.890010a7cdf8ap-271, 0x1.ef11ef7bd1146p-446, 0.0,
     0x1.0d4df6f5d8a4cp-538, 0.0, 0x1.341b2690ebf5dp-684, 0x1.37608a5a41bbfp-699,
     0x1.b4235b1142384p-375, 0.0, 0.0, 0.0, 0x1.1a6bf4fb80e5dp-810, 0.0, 0.0,
     0x1.3dfe62d5270e7p-949, 0x1.3110bd6479b6bp-152, 0x1.265f30bdb80a5p-769,
     0x1.27df60e39f1f7p-128, 0.0, 0x1.f3fc570cacd32p-279, 0.0, 0x1.15e2a68cf0698p-594,
     0x1.326b246168a87p-489, 0.0, 0.0, 0x1.2e741123a7b4ep-788, 0x1.89f24b2491591p-743,
     0.0, 0x1.b1e4e8c85cfdep-68, 0x1.0b956b80b661ep-562, 0x1.6e2a26ff6d5f6p-521,
     0x1.a6aa2a91c3fbfp-440, 0x1.d5ab453c4c8dfp-792, 0x1.f4b68cf138701p-643, 0.0,
     0x1.df82b5f596311p-423, 0.0, 0x1.387cb7c30d52bp-58, 0x1.ddfa6dcb09c7cp-622,
     0x1.4d3b20cf86183p-611, 0.0, 0x1.f6b504593d8cep-134, 0.0, 0x1.1cadf494de7e3p-808,
     0x1.203277d6552f9p-172, 0x1.5342047e27eddp-205, 0x1.1d1d653101f88p-846,
     0x1.50e9cfff1a3ccp-262, 0x1.f3125fbf02a0fp-99, 0.0, 0x1.ae787d2f8440ap-262,
     0x1.3ea3cc4c1d311p-509, 0x1.03e4a8df7dbc7p-698, 0x1.449e9a438b0acp-1006, 0.0,
     0.0, 0x1.e2f5554e65b49p-498, 0.0, 0x1.c0f0704ebe625p-160, 0.0, 0.0, 0.0,
     0x1.e6b4fab5edd71p-219, 0.0, 0x1.da0de9786ee48p-956, 0x1.68adc848de6c4p-635,
     0x1.8893e114a4499p-12, 0.0, 0.0, 0x1.c1ef2df54a82bp-174, 0.0,
     0x1.1834d0e03879ep-886, 0.0, 0x1.c7ebbc2a6a3bcp-461, 0.0, 0x1.c94c76fc9a21ap-863,
     0.0, 0.0, 0.0, 0.0, 0x1.cc4eb90177a4dp-657, 0.0, 0x1.72badc4ee823fp-711,
     0x1.ae888e600025p-947, 0.0, 0.0, 0.0, 0x1.d9f731ebb8521p-917,
     0x1.1c2b379351c14p-117, 0x1.59c8764f98b65p-964, 0.0, 0x1.fef6fce3dd8dcp-912, 0.0,
     0.0, 0x1.ba3fc132cdb6dp-501, 0x1.95781c76fab5dp-514, 0x1.55e26de824252p-22, 0.0,
     0.0, 0.0, 0x1.3c2f283dfa008p-172, 0x1.e45055dcc3765p-71, 0x1.80d254207bf78p-225,
     0.0, 0.0, 0.0, 0.0, 0x1.1b513acc1c01ap-538, 0.0, 0.0, 0x1.f0278961b1683p-198,
     0x1.05c5058e06b18p-855, 0.0, 0x1.b3f9633c02d21p-369, 0.0, 0.0, 0.0, 0.0,
     0x1.ee860422312f7p-695, 0.0, 0.0, 0x1.23ac0028a27bfp-534, 0x1.6aace44021806p-947,
     0x1.695fd23b26f6dp-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.567c90d2bd4c3p-880, 0x1.db06bbf6f94b8p-192, 0x1.972de394f62e6p-65,
     0x1.1138b0a56c5c3p-696, 0.0, 0x1.d81db14f401bdp-343, 0x1.e35da46b34f4cp-985, 0.0,
     0x1.15466584418f4p-845, 0x1.7a3666aaac1c7p-35, 0.0, 0x1.3f06761b9810ap-930,
     0x1.6c702de7baf37p-794, 0.0, 0x1.8248a3b075927p-849, 0.0, 0.0,
     0x1.b9c7650e0834fp-776, 0.0, 0.0, 0x1.0cfda91f12a6bp-612, 0.0, 0.0, 0.0, 0.0,
     0x1.4fa9954ea4552p-942, 0.0, 0x1.c6e57da9d2da8p-56, 0.0, 0x1.48f4aa34ddedfp-629,
     0x1.679a67a2e8e7bp-334, 0x1.ae91c276e1b28p-982, 0x1.1d618de672356p-187,
     0x1.d8fece7dbc7c4p-447, 0.0, 0x1.57fc312309a69p-704, 0x1.4a30ca0c4d624p-712, 0.0,
     0x1.c2631f7b0dd08p-962, 0.0, 0x1.e0ea533052f6bp-665, 0x1.56df54146d302p-82,
     0x1.9226a58b7247cp-686, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74103de5f083cp-527,
     0x1.88b7778fa585ap-945, 0.0, 0x1.efbc0ed922e76p-115, 0.0, 0.0,
     0x1.f08ace519736bp-512, 0x1.2d4617577868p-697, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c997848e2e0f1p-600, 0.0, 0x1.cfb64ed2d6e82p-680, 0x1.8f9a1ffb14591p-945,
     0x1.086a97e170642p-770, 0.0, 0.0, 0.0, 0.0, 0x1.f7eef3d5bb616p-357, 0.0, 0.0,
     0.0, 0x1.0a7474f5d855fp-427, 0x1.603e32ea19ad5p-611, 0x1.df6a54b48c10ep-315, 0.0,
     0x1.9db2eb2e5ea51p-790, 0.0, 0.0, 0.0, 0.0, 0x1.279b6010d1c8bp-48,
     0x1.38b30f37b2cbcp-382, 0.0, 0x1.43f2e5e93562ep-18, 0x1.8791064cd3d27p-29, 0.0,
     0x1.d49e5b078459fp-99, 0x1.75c1aa7fcb567p-378, 0x1.356412451226fp-457,
     0x1.e94ce4a317fd5p-812, 0.0, 0x1.358078af364c2p-253, 0.0, 0x1.26078f5440b6cp-266,
     0x1.0d6f6d25accbdp-696, 0x1.c7ab3dcf1de9ep-204, 0.0, 0.0, 0.0, 0.0,
     0x1.d4d55d316759cp-217, 0.0, 0.0, 0.0, 0.0, 0x1.5750415c1a69bp-225, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0e2dfa6dc7533p-1014, 0.0, 0x1.755254bccbbb1p-722, 0.0, 0.0,
     0x1.099520ee65c71p-431, 0.0, 0.0, 0.0, 0x1.7807860926caap-675, 0.0,
     0x1.afe64cf4ac89bp-783, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39af11684c7dbp-434,
     0x1.77360d96de747p-818, 0.0, 0.0, 0x1.b9b3d1781f406p-551, 0x1.2336cb6298db5p-609,
     0.0, 0x1.0b8a47484f519p-109, 0.0, 0x1.080adba95a0aep-901, 0x1.c9bfb7c648635p-194,
     0x1.53d47b16b7488p-711, 0.0, 0.0, 0x1.01a0c2751bac6p-354, 0x1.6422b2cb7e9f3p-597,
     0.0, 0.0, 0.0, 0x1.9c5c4d5af3642p-475, 0x1.e6e5dcc9fd93dp-14,
     0x1.52c76d92f4364p-303, 0.0, 0x1.cf40ecfa978fep-418, 0.0, 0x1.1cc8a8f3245bep-902,
     0.0, 0x1.6abf1bacd02ccp-961, 0.0, 0.0, 0x1.b7d77023080bdp-518,
     0x1.798875159ddc1p-449, 0x1.733aeffae2198p-633, 0x1.3776489970352p-815, 0.0,
     0x1.852fed2ab42edp-343, 0.0, 0x1.259f70b53d4e2p-538, 0.0, 0.0, 0.0,
     0x1.0a208d9765c6dp-9, 0.0, 0x1.decc803e8333bp-831, 0.0, 0x1.9892ba71844f9p-753,
     0x1.14a326d5ab6abp-699, 0.0, 0.0, 0x1.9f9a42b23e466p-871, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.397bb2fd5d26fp-980, 0x1.543423a7b302fp-665, 0x1.fefb5d423ae44p-143, 0.0,
     0x1.c9a92cdb33c18p-172, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a6364bef913cp-552,
     0x1.beb2f89d7470fp-572, 0x1.9963c0c6d2332p-104, 0.0, 0.0, 0x1.ee96daaec9c2cp-564,
     0x1.0e279427a169ep-767, 0.0, 0.0, 0.0, 0.0, 0x1.d6cbbcbba70b5p-842,
     0x1.901f976bf0f01p-222, 0.0, 0.0, 0x1.699d41294e48p-448, 0x1.bb35c828ef789p-628,
     0x1.152531f3b51c3p-236, 0.0, 0x1.79a2dacfcfe5bp-764, 0.0, 0x1.0088789d2d4a4p-58,
     0x1.029545d884b06p-380, 0.0, 0x1.9a515f565575p-451, 0.0, 0x1.d64592c48a8ap-831,
     0.0, 0.0, 0x1.846024cce85a2p-586, 0.0, 0.0, 0x1.635f545fa0e47p-906, 0.0, 0.0,
     0x1.f5cc40eb2f029p-294, 0.0, 0x1.06e8fe11e3651p-560, 0.0, 0x1.a8c833b70b1f9p-649,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9517137585d82p-275, 0x1.aafec9d7a41a2p-941,
     0x1.5ae58b27cedacp-572, 0.0, 0.0, 0x1.b176ed49ed996p-477, 0.0, 0.0,
     0x1.16891f4439e1fp-714, 0.0, 0.0, 0x1.becc36cad3172p-235, 0x1.39f641df0e19ap-17,
     0x1.f51f08606b42cp-443, 0x1.ed1d69cc4b447p-597, 0x1.7d34f06f13649p-858, 0.0,
     0x1.1c0236ad2391ep-758, 0x1.2be8b43b310ep-427, 0x1.39e8c1e3e330ap-718, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c1eddb7c015fp-197, 0x1.7628c6cb2a465p-568, 0.0, 0.0,
     0x1.75eb66dccf6a4p-438, 0.0, 0x1.be22a8a5afd39p-581, 0x1.d99a357c8aa39p-990,
     0x1.59dd8f4eaced8p-52, 0x1.62a843c661bap-558, 0.0, 0x1.c27dabf635576p-43,
     0x1.7d122c4f70cd9p-641, 0x1.288161858f948p-73, 0.0, 0x1.a021cb2a58c0ap-271,
     0x1.bc44899758e7ap-653, 0x1.9b90572d4307ep-616, 0x1.a31d097a7d4eep-131,
     0x1.f3f9dcaa5b2c1p-659, 0x1.5bc9db12f72b1p-560, 0.0, 0x1.1a1a2d1ac494ap-333,
     0x1.c11d39d0c98d8p-209, 0.0, 0x1.6257d68cd0a56p-742, 0.0, 0x1.1d05cbffba043p-745,
     0x1.197093d61fa3ep-510, 0x1.ab2e50e64504p-666, 0x1.1c608c996c17cp-217, 0.0,
     0x1.9f250eb9944eep-651, 0x1.afdf3279635edp-847, 0x1.216548541adf2p-300,
     0x1.c39edfb8dc314p-265, 0.0, 0.0, 0.0, 0x1.01854d5abeffdp-670,
     0x1.a915ad8fba5fdp-381, 0.0, 0x1.59547bbe8088dp-248, 0.0, 0.0,
     0x1.673911149083p-731, 0.0, 0x1.b8cb01b3ffc03p-100, 0.0, 0x1.3900ef72bcb79p-406,
     0x1.11f0c0f79008fp-963, 0x1.72ba8dd4d8549p-284, 0x1.258b01e4913dap-812, 0.0, 0.0,
     0x1.8151c27da1808p-416, 0.0, 0.0, 0x1.32fddc9e47e15p-27, 0.0, 0.0, 0.0,
     0x1.096a873945fd3p-201, 0.0, 0x1.1c0d4d681242dp-998, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8b898f79161a5p-521, 0.0, 0x1.97db890245cd5p-726, 0.0, 0.0,
     0x1.a6a1359a1b3b9p-390, 0x1.2b0e6a0159ebbp-285, 0x1.41ca7fb649b9bp-79, 0.0,
     0x1.c1c66c50472adp-431, 0x1.dd83056f87a4fp-354, 0.0, 0.0, 0.0,
     0x1.6ddf5fb4ad332p-613, 0.0, 0.0, 0.0, 0.0, 0x1.d9a060a46722ep-543, 0.0, 0.0,
     0.0, 0x1.728c7f05e6d5fp-970, 0.0, 0x1.960a92a3c9becp-377, 0x1.bb853ce9b5aecp-419,
     0x1.40d544adc3b18p-373, 0x1.5297caced7a35p-725, 0.0, 0.0, 0.0,
     0x1.77c8a4a526fd2p-684, 0x1.aacc01bfca1ffp-342, 0.0, 0.0, 0x1.7624ff5c32d61p-183,
     0x1.8a295309ca826p-583, 0.0, 0.0, 0.0, 0x1.bc250288639b8p-540, 0.0,
     0x1.4e886bf9a5b37p-805, 0.0, 0.0, 0x1.bd4f25e1ac24bp-141, 0x1.6e1aef41f4b55p-191,
     0x1.e1e1158c636cfp-574, 0x1.d333b522b406dp-779, 0.0, 0.0, 0.0,
     0x1.27820657815fcp-116, 0x1.7c1d15ff845f8p-71, 0.0, 0x1.64688ce86ea48p-1014,
     0x1.280ed95c51032p-141, 0x1.19b0ed83ee5d7p-406, 0x1.d6d05ead5ea23p-891, 0.0, 0.0,
     0.0, 0.0, 0x1.ccf7b1b5c4e49p-1016, 0x1.29c74a1ab30a2p-730,
     0x1.48b7c423fec07p-995, 0.0, 0.0, 0x1.e9abea9563837p-924, 0x1.f3617216832cdp-327,
     0x1.501aca5cfaaa6p-436, 0.0, 0.0, 0x1.fd582161d2d1p-819, 0.0,
     0x1.18f57b3f82488p-885, 0.0, 0.0, 0.0, 0x1.30238382c602dp-172,
     0x1.4e19ef0eea7e7p-312, 0x1.619eaf65b1894p-430, 0x1.fe3132e32d656p-416, 0.0, 0.0,
     0x1.e85548112eec8p-414, 0x1.29462412ff4dcp-664, 0x1.e17be9e89014fp-56, 0.0,
     0x1.411babb7a4fa4p-802, 0.0, 0.0, 0x1.ebaaa83d15d69p-959, 0x1.0e37b904f0da3p-835,
     0.0, 0.0, 0x1.2424fe5caa74bp-838, 0.0, 0x1.bc69266d81937p-251, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.13d5fd49dd798p-192, 0.0, 0x1.f10873dd982ecp-722, 0.0,
     0x1.d90d616a6780dp-220, 0x1.c3cb987ec74b2p-823, 0.0, 0x1.f7ba0abc01402p-317,
     0x1.b846518e0c888p-350, 0x1.5422481bd9163p-479, 0x1.aee2853df009cp-13, 0.0,
     0x1.4844391ab7f78p-462, 0x1.4d7b0d2cb19efp-386, 0x1.073ca6859e6bdp-99,
     0x1.e58811c671ec9p-819, 0.0, 0.0, 0.0, 0.0, 0x1.2bf96d9535697p-875, 0.0,
     0x1.90be5fb60465fp-162, 0.0, 0x1.39a742f29d16ep-830, 0x1.9c9d4a071f59dp-710, 0.0,
     0.0, 0.0, 0.0, 0x1.30ba5cd2d004cp-482, 0.0, 0x1.5a2cfb3eb257bp-657, 0.0,
     0x1.7e54982e0d061p-184, 0x1.25d80009fd7cep-404, 0x1.85296217d23e3p-315, 0.0, 0.0,
     0x1.1b1560d0a6405p-7, 0.0, 0x1.2647a903d0136p-635, 0.0, 0x1.4d0cb8b3e99e6p-691,
     0x1.716b2e7ef1d5p-1, 0.0, 0x1.7807b0977f1bbp-329, 0.0, 0.0,
     0x1.389dc26577b76p-614, 0x1.9b0c11ce14646p-338, 0x1.fbe769a6f21c8p-304,
     0x1.a99c1e0ce8428p-723, 0.0, 0x1.9912a290886eep-509, 0x1.e2a3e360785dep-978, 0.0,
     0.0, 0.0, 0x1.60915d1ee6316p-769, 0.0, 0.0, 0x1.d159431dc1511p-268,
     0x1.438c83dc4e9b9p-906, 0.0, 0x1.37d4d2c8d6c91p-240, 0.0, 0x1.2c93d71b7ff9ap-866,
     0x1.b680021150709p-956, 0.0, 0.0, 0x1.047d4f09c504fp-273, 0.0, 0.0,
     0x1.9a64dc2797268p-92, 0.0, 0.0, 0x1.e93c57cfd9846p-325, 0x1.5ff9178848a27p-359,
     0x1.bcc44fd4e76a1p-655, 0.0, 0x1.57b11ea844374p-1004, 0.0,
     0x1.50a0c85f6660dp-256, 0x1.edee5d1aa8913p-972, 0x1.77fea0bf72be3p-695, 0.0,
     0x1.1450d4590cb49p-922, 0x1.f5762ae507e1ap-348, 0.0, 0x1.169310af768p-711,
     0x1.79798bae4692ep-491, 0x1.6af7da8641e1ep-725, 0.0, 0.0, 0.0,
     0x1.e5ce803043593p-606, 0x1.a1e0ec1a919p-117, 0x1.a54995a4de459p-279, 0.0, 0.0,
     0x1.b7d031a8d43cp-856, 0.0, 0.0, 0x1.0da07c3c6ea84p-868, 0.0, 0.0,
     0x1.561ae95fc9697p-768, 0x1.a9e1c6bc95841p-57, 0.0, 0x1.eed101ff73082p-733,
     0x1.0a54b5a1334bep-993, 0x1.18f48b7332c53p-834, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08d1153f5cbcdp-262, 0.0, 0.0, 0x1.6cc06d8eefe94p-904, 0.0,
     0x1.ba8f6042ead23p-885, 0.0, 0x1.9fdd4e04e4f13p-819, 0.0, 0x1.2aa8fe843682cp-380,
     0.0, 0x1.54c0d756e5c34p-743, 0.0, 0x1.120cf0f2452dfp-215, 0x1.1c6933f1f5c0dp-474,
     0x1.0e7fa4be52625p-449, 0.0, 0.0, 0x1.b7de1dab07b0bp-1019,
     0x1.a9d42b75e8483p-254, 0.0, 0x1.2bb0178239047p-907, 0x1.d0474b5e61f02p-942,
     0x1.685ab9d2d8224p-342, 0x1.cce1f718b5509p-596, 0.0, 0.0, 0x1.43e330b8c016dp-657,
     0.0, 0x1.3bd06f885cb39p-944, 0x1.705bd6986c8eap-888, 0x1.7be1c80797643p-466, 0.0,
     0x1.e9eaecca1d8b9p-214, 0.0, 0.0, 0.0, 0x1.952242c28d85ep-618, 0.0, 0.0, 0.0,
     0.0, 0x1.84173da46c289p-225, 0.0, 0x1.37f6f7ec74931p-942, 0.0,
     0x1.a263b7b54977dp-170, 0.0, 0x1.dbe99d6597637p-860, 0x1.3217f11d95aaap-258, 0.0,
     0.0, 0.0, 0x1.bf43c1bf4ccd9p-350, 0.0, 0.0, 0.0, 0x1.62afa930f720fp-527, 0.0,
     0x1.41c5393902253p-541, 0x1.ddafecd205cd1p-11, 0.0, 0.0, 0x1.02ee3b28911b7p-432,
     0x1.45759f8b38e13p-213, 0x1.1da0a7ebfd9dp-732, 0.0, 0x1.41ca819756b4bp-441, 0.0,
     0x1.ace98822d5ee2p-942, 0x1.6eb75c3fdd4dep-635, 0.0, 0.0, 0.0, 0.0,
     0x1.3f366a1353b43p-772, 0.0, 0.0, 0x1.f0e1262e16f89p-566, 0.0,
     0x1.73a24a352db1p-759, 0x1.b6962355332c9p-951, 0x1.428844dc70a3dp-1004,
     0x1.4952eb5fd48fp-554, 0x1.fb6ff904f12d6p-229, 0.0, 0.0, 0x1.9836c9e64134fp-62,
     0x1.9d03aa87a221ap-284, 0.0, 0.0, 0x1.e348783319dcep-665, 0x1.29f7e22289e9fp-320,
     0x1.b2ed556b7b858p-683, 0x1.d1645ef6830f7p-196, 0.0, 0.0, 0x1.45138d61104b3p-186,
     0x1.8db4a1876e781p-866, 0.0, 0x1.a36c31a2e4cf8p-972, 0.0, 0.0,
     0x1.2fe967685cf84p-3, 0x1.d470c9055b622p-52, 0x1.63b4c229399f6p-93, 0.0,
     0x1.73f113c834999p-656, 0.0, 0.0, 0.0, 0x1.92caa4e70a55fp-201, 0.0,
     0x1.529427c3885f4p-805, 0x1.52b0d906d2e7bp-829, 0x1.ae2955d544b72p-997,
     0x1.77f846510c2b5p-669, 0x1.a8fb932a5525ep-784, 0x1.ab070201f07fap-655,
     0x1.b41a7951f7b11p-883, 0x1.6f5dac5d77f48p-246, 0.0, 0.0, 0x1.ab7023b5cffd9p-644,
     0x1.70b08a845322fp-371, 0x1.b9667b12d02ccp-723
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
            tmp1 = Sleef_finz_exp10d1_u10purecfma(tmp0);
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
    printf("Sleef_finz_exp10d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
