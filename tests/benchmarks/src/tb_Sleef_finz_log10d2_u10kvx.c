/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10d2_u10kvx.c --function \
 *     Sleef_finz_log10d2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.65dddae3fc54ep-25, 0.0, 0x1.5a40e5aa1a0a4p-19, 0x1.710c51d5835afp-251,
     0x1.d7bb9e3d470a4p-957, 0.0, 0x1.7c3c145029a27p-913, 0.0, 0.0,
     0x1.4f621d2b8ac0fp-579, 0.0, 0x1.38c9a65e761dp-505, 0.0, 0x1.fd70f0d382b9fp-111,
     0.0, 0x1.7ab8606ca76e4p-49, 0x1.1a53c0294823ep-883, 0x1.afc33f7900a67p-120,
     0x1.ac935d7b29c03p-965, 0.0, 0x1.26a4e6337b22dp-707, 0x1.1b1e1eca31b76p-804,
     0x1.7a333be292744p-656, 0x1.9b511bc9f4ff8p-745, 0x1.08a70a1f20e94p-109, 0.0,
     0x1.f070d33cc4c45p-174, 0x1.6519d4ba8926fp-569, 0x1.edbc12c1c5c3fp-8,
     0x1.b84a8c1078b7fp-636, 0.0, 0.0, 0x1.9d7ca566203eep-401, 0x1.2e6ec016e541p-579,
     0.0, 0.0, 0.0, 0x1.7df0c68fe32ccp-496, 0x1.35f262c8b3234p-201,
     0x1.6adfc23d30d77p-28, 0x1.6daab317d8ae4p-714, 0x1.e8a5d8ca59e09p-683, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8f259c3ef48f1p-271, 0.0, 0x1.e7fd41bf62d06p-52,
     0x1.2a03e9b1bc4cep-847, 0x1.34d1a25d2758p-107, 0x1.a85a59576af35p-452,
     0x1.ce78bc801bfcdp-421, 0.0, 0.0, 0x1.5112facd88f62p-666,
     0x1.3ae3b7580adb8p-1006, 0x1.65e0a16bfbd9cp-367, 0.0, 0.0, 0x1.2d477e5233fdbp-30,
     0.0, 0x1.cb07a460e6c43p-287, 0.0, 0x1.c4be0d1553d1bp-443, 0x1.3b29ec88fe5bap-257,
     0x1.884d69c0529a5p-479, 0x1.a60ba191b6d98p-313, 0x1.6ae264f68f056p-276,
     0x1.7509e3e19ed11p-961, 0.0, 0.0, 0.0, 0.0, 0x1.be1594a5f523cp-421, 0.0,
     0x1.0ecbf8c21334bp-614, 0.0, 0.0, 0.0, 0x1.99103753acc61p-167, 0.0,
     0x1.4a03a72a85043p-805, 0x1.35b17241bd6d4p-385, 0x1.7347d2328ddd3p-365,
     0x1.0e812c4b79bbap-479, 0x1.fccc373a7664p-924, 0.0, 0.0, 0x1.f78d5c675a4a4p-1021,
     0x1.bb128c06736fbp-958, 0.0, 0x1.bcb8aaf29e1e5p-561, 0.0, 0.0,
     0x1.b8e23f5f12d46p-334, 0.0, 0x1.e76b48d07422bp-62, 0x1.e809c1cde8ab5p-127, 0.0,
     0.0, 0x1.f713f2f09eccp-671, 0x1.3677916fc9ad2p-936, 0.0, 0.0, 0.0,
     0x1.5f6cb7ddae0c9p-1009, 0x1.735f77882c5abp-781, 0x1.ca64c5904561cp-474, 0.0,
     0x1.46bee38c3b982p-972, 0.0, 0x1.67e106f7369abp-90, 0.0, 0.0,
     0x1.836268c89c8aap-877, 0.0, 0x1.c57bb43ea5843p-677, 0.0, 0.0, 0.0, 0.0,
     0x1.358a1747df662p-305, 0x1.f89cc822a7b3cp-91, 0.0, 0.0, 0.0, 0.0,
     0x1.c021b3656121dp-862, 0x1.487fb06855ef1p-471, 0x1.edfbbe63298cbp-467, 0.0, 0.0,
     0x1.155cf0a19b2cdp-458, 0.0, 0.0, 0x1.142453c2a89f6p-849, 0.0, 0.0,
     0x1.64bfa53621c16p-396, 0x1.89464b7159cdep-682, 0x1.efd9b5b764bc6p-754, 0.0,
     0x1.4d98982408144p-969, 0.0, 0.0, 0.0, 0x1.24de45c724845p-982,
     0x1.3d673665f2958p-371, 0.0, 0x1.4ac22326006e5p-296, 0.0, 0x1.9cd5e5542881ep-130,
     0x1.90b0809980f1dp-448, 0x1.ebd6b8bcd0abap-97, 0x1.d802edcb01dbdp-341,
     0x1.3b717935b23e4p-895, 0.0, 0.0, 0.0, 0x1.260af27ee2a5p-151, 0.0,
     0x1.fe2b3017312b3p-295, 0x1.e368d0e7409a4p-174, 0x1p0, 0.0,
     0x1.c7b0f50acd78cp-98, 0.0, 0.0, 0.0, 0x1.0907ff8abe5bcp-174, 0.0,
     0x1.a766f45426a63p-177, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9d9bfef495c18p-287, 0.0, 0.0, 0x1.5fd980b18a36dp-802, 0x1.29b14ed16f966p-378,
     0.0, 0x1.fe1c850865453p-699, 0.0, 0.0, 0.0, 0x1.955b56bab1572p-886, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0e4cc773bbb09p-843, 0x1.d4dd54f06ae51p-307,
     0x1.913e864b7471fp-750, 0.0, 0.0, 0.0, 0x1.531fe1b30d24ap-652,
     0x1.0b265cd18ee2p-519, 0x1.441ea1073bb68p-760, 0.0, 0.0, 0.0,
     0x1.47848fccff2dbp-636, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b4b6d49bb6fdp-471,
     0x1.f55b51d04cc9bp-152, 0.0, 0x1.71d1a7fa4dc56p-917, 0x1.d21584f9b1ce1p-95, 0.0,
     0x1.f10028b4c025ep-359, 0x1.a52474f2fe63fp-448, 0x1.e20d5091f1a5ap-548, 0.0, 0.0,
     0x1.0d75eb41f17dap-777, 0x1.820057f99fbcbp-402, 0.0, 0x1.8ea67de828beap-441, 0.0,
     0.0, 0x1.8f6e7adc6d92bp-623, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.116650c9513bp-502,
     0x1.e6cabf124c732p-848, 0.0, 0.0, 0x1.20aa37752a405p-747, 0.0, 0.0,
     0x1.4800e5346b20ep-380, 0.0, 0x1.b81b5eea064e7p-534, 0x1.b3f4de9ffec92p-1007,
     0x1.bf4eaabd16597p-164, 0.0, 0x1.71d42584ee618p-899, 0x1.4dd8c0ab1e516p-107, 0.0,
     0x1.c7434985ecb49p-467, 0x1.40fdf57e4a2d3p-411, 0.0, 0x1.e02180fdebc75p-89,
     0x1.b793794c87b39p-89, 0.0, 0x1.d6cb92cbfb284p-712, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9a7a60e144b1bp-872, 0.0, 0x1.bd70d407f3935p-755, 0x1.43a6ae821cca9p-1010,
     0x1.ff00e095e0db7p-404, 0.0, 0.0, 0x1.ea10a7dca1641p-368, 0.0, 0.0,
     0x1.b9c8fbd025811p-258, 0x1.50714e562fb7p-686, 0.0, 0.0, 0x1.149765e3ccbe1p-30,
     0.0, 0x1.958ff56565f62p-115, 0x1.a5ef6362eee5cp-95, 0.0, 0x1.af4d6253b9ba3p-560,
     0x1.00385f555bfbap-244, 0.0, 0.0, 0.0, 0.0, 0x1.5a4600feb5b9fp-206,
     0x1.a2b18eda8d4c7p-180, 0x1.b9615d38393e3p-904, 0.0, 0.0, 0x1.65cd4c6ae0c6bp-491,
     0.0, 0x1.1d1fc16ad75d8p-600, 0x1.b3fc1f41a4481p-920, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fd309b595ecbap-12, 0.0, 0x1.5ea507b38b0bdp-683,
     0x1.59cca24bce036p-227, 0.0, 0.0, 0.0, 0x1.3ac266f79de29p-516,
     0x1.5e0f6468bdc68p-622, 0x1.863c17ac5e4b9p-163, 0x1.3e60860fa3cbdp-980, 0.0,
     0x1.0f2cc208f621fp-783, 0.0, 0x1.acbac8dc368bfp-736, 0.0, 0x1.a98df636a41e5p-774,
     0.0, 0.0, 0.0, 0x1.f8c2c09d47e38p-913, 0x1.09ba13d200c68p-268, 0.0, 0.0, 0.0,
     0.0, 0x1.1760f9589857ep-230, 0x1.e3c39a0f8839ap-106, 0.0, 0.0,
     0x1.bfd8a37783254p-707, 0.0, 0.0, 0x1.00a925e612456p-535, 0x1.1820478c2272p-403,
     0x1.d828fb4212771p-572, 0.0, 0x1.6d4a87bd5c49ap-826, 0x1.dbd2ebc6bf21ep-845, 0.0,
     0.0, 0x1.8616db24431c1p-1001, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e020bf1bcec0fp-1005,
     0.0, 0.0, 0.0, 0x1.2584d1c124ab2p-955, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.37671653b1f3dp-322, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a2e085ac74319p-285, 0.0,
     0.0, 0.0, 0x1.44e665854d236p-1015, 0.0, 0.0, 0.0, 0x1.ee024fa01640dp-524, 0.0,
     0x1.f2540e2710769p-902, 0.0, 0.0, 0.0, 0.0, 0x1.d98d8782a3724p-123,
     0x1.a3895a0c096dcp-432, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bedc323628979p-662, 0.0,
     0x1.47b26abc1e713p-929, 0x1.5607311e94cf9p-996, 0x1.78b5cb09aa0dap-781,
     0x1.6a3db2641bc9fp-724, 0x1.426d3480c1788p-699, 0.0, 0x1.86537594df6cdp-773,
     0x1.d104c5a370da1p-728, 0.0, 0.0, 0.0, 0x1.142b3a147db05p-319,
     0x1.574926205826ap-872, 0x1.9c162d57654bfp-566, 0.0, 0.0, 0x1.4b5308385499ep-224,
     0.0, 0x1.ba47133da11c8p-881, 0x1.3d8b0f5811f4ep-359, 0x1.a323a3c6c0f29p-179,
     0x1.25c8e4dbf179cp-830, 0x1.bdd4f1fe92338p-955, 0.0, 0x1.e635ce2404f99p-77, 0.0,
     0x1.eb1e14eb1021ep-634, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4148098666dfbp-195, 0x1.45230aaa5f415p-191, 0x1.216e8da8333cp-817,
     0x1.a05da65645a52p-452, 0x1.8ed49dae3ff88p-237, 0x1.c03f415172e76p-316,
     0x1.123512a1c896dp-970, 0.0, 0x1.55b71b2415379p-629, 0.0, 0.0,
     0x1.2ed17fd037d85p-958, 0x1.3ca37e291c5bp-661, 0.0, 0x1.b817209925913p-522, 0.0,
     0x1.3bee0ef25ee6p-621, 0x1.0a5f037f8428ep-281, 0.0, 0.0, 0x1.c73e263233ab4p-333,
     0x1.1fc8ab5b11f7dp-316, 0x1.d38907883172bp-260, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e44dd518e7bacp-794, 0x1.c9778d0c9d89ep-736, 0x1.ead9eb6533c1fp-160,
     0x1.c347fbe67614ep-296, 0.0, 0x1.94effed947e7cp-378, 0x1.66e597ff0206ep-727, 0.0,
     0x1.6053e3c8c262dp-68, 0.0, 0x1.306be34a59235p-341, 0.0, 0x1.c5a1aa2db67ecp-194,
     0x1.b751a258f5a82p-449, 0.0, 0.0, 0x1.243515639f066p-67, 0x1.0e9ec183e5366p-529,
     0.0, 0x1.2cad7a1411274p-753, 0.0, 0x1.54d82791a82f6p-734, 0x1.1f1639860fcefp-176,
     0.0, 0.0, 0.0, 0x1.65b03f4cd8f17p-423, 0x1.9dd6f72ce208ap-492,
     0x1.074bea272ce2fp-423, 0.0, 0.0, 0.0, 0.0, 0x1.eccf71698b375p-724, 0.0, 0.0,
     0x1.3842595e6459ap-616, 0.0, 0.0, 0.0, 0x1.903b7d16636f6p-989, 0.0,
     0x1.8dbbffc989ff4p-880, 0x1.2e63d1762c113p-883, 0.0, 0.0, 0x1.fa2dbbd8fd1f5p-288,
     0.0, 0x1.f20dcb79c61c9p-938, 0x1.cfcef37d149ep-1013, 0x1.0612ebd25ddaep-243,
     0x1.09a6c182a4a35p-351, 0.0, 0x1.5ebbe924fd939p-1000, 0x1.9357c7f05fb1fp-348,
     0x1.2b90485ff7087p-508, 0x1.f78ddd205412p-131, 0.0, 0x1.0f8e178407dbfp-462, 0.0,
     0.0, 0x1.b17a3a51b5c9dp-262, 0x1.514e5a96267a5p-237, 0.0, 0x1.41f9f16be30f4p-807,
     0x1.6623f09ced9a1p-835, 0.0, 0.0, 0x1.e0b68702333ccp-211, 0.0,
     0x1.53561db5c58afp-819, 0x1.88e2f80eea99cp-446, 0.0, 0x1.5087a653b285ap-14,
     0x1.c1dd0fc6fd52fp-132, 0.0, 0x1.eb8c9499f8b8ep-66, 0.0, 0x1.d92aecd2736b9p-104,
     0.0, 0x1.b8a797c4e473p-668, 0x1.22ede23dc93cp-477, 0x1.a2c20e5b24a19p-887,
     0x1.e5a2f91308a2bp-670, 0.0, 0x1.e045cba9ca0c6p-287, 0x1.d58d43f48633p-960, 0.0,
     0.0, 0x1.fc38150360808p-292, 0x1.49f4a6091ef1dp-874, 0.0, 0x1.3cada4b167258p-208,
     0x1.0c2e087d2bd43p-243, 0.0, 0.0, 0.0, 0.0, 0x1.b0ebc43b2d271p-658,
     0x1.98451f20392f9p-11, 0x1.cd49ddf6aad4dp-138, 0.0, 0.0, 0x1.8e7fad9b1a8b7p-138,
     0.0, 0x1.9658af2261b5ap-970, 0x1.7984d7c524eb5p-231, 0x1.b005a8955fb74p-65,
     0x1.a031456d46018p-645, 0x1.eb50c9f5ea1ccp-1012, 0x1.eb16387512749p-808,
     0x1.96cd096e97d7fp-219, 0x1.f2da94c9bff02p-309, 0.0, 0.0, 0x1.a782dab08d291p-150,
     0x1.ea1f57a149034p-361, 0x1.6b0a5c737093dp-584, 0x1.e7801b9c3581dp-270,
     0x1.d1b631a814281p-787, 0.0, 0x1.7da23cea958b4p-734, 0x1.f3a9b28e72d49p-48,
     0x1.c800270582daep-612, 0x1.ab6aa734ceebp-533, 0x1.9337bb16c5a47p-745, 0.0, 0.0,
     0x1.67df0a333e2d6p-763, 0x1.b3c643b360817p-788, 0x1.1abe784226fe1p-509,
     0x1.2392cec7e69c8p-909, 0x1.b24d851c5c097p-772, 0x1.1c70339adfc19p-185, 0.0, 0.0,
     0x1.2d049099bf17p-943, 0.0, 0.0, 0.0, 0x1.a9c35e36492ebp-517, 0.0, 0.0,
     0x1.c4a67aa595399p-391, 0.0, 0x1.29ad5b47cd266p-117, 0.0, 0.0,
     0x1.01ce62d9b764p-882, 0x1.913b707ad32bfp-56, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.77930a07a33d8p-217, 0x1.b0b8ec69dbbc8p-770, 0x1.57e9d4620c569p-616,
     0x1.00e2621ac19e6p-753, 0x1.b147792e493p-798, 0.0, 0x1.2239f40a08c5ep-826,
     0x1.9c792bfec2dep-437, 0x1.28034c1740365p-124, 0x1.2e2fce04fa046p-152,
     0x1.91e73e62653ap-935, 0.0, 0.0, 0x1.44e884a15f31fp-338, 0x1.24ecdd26d9b85p-585,
     0x1.f20ba80463782p-38, 0.0, 0.0, 0.0, 0.0, 0x1.86c87efa9361dp-981,
     0x1.f9a5276938f0cp-170, 0x1.1b77d099b75dep-273, 0x1.658b3e2c900a6p-1008, 0.0,
     0.0, 0x1.d27f3151fb068p-110, 0.0, 0.0, 0x1.d8bf90c9dcd5ap-160,
     0x1.b466c19854f8bp-2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78d2cb3ff36f5p-350,
     0x1.b74027ebfb0b7p-288, 0.0, 0x1.4853309e3b66ap-80, 0.0, 0x1.916e078e40538p-567,
     0.0, 0.0, 0.0, 0x1.b0d7786fb9b05p-261, 0.0, 0.0, 0.0, 0.0, 0x1.30e22c75dd5p-783,
     0x1.d725cd2bbcbddp-472, 0x1.fd6b234a5628p-515, 0x1.bc4c48fa68546p-767,
     0x1.395504b28ca37p-907, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17c6e4a516883p-383,
     0x1.b47c4e8b05057p-78, 0.0, 0x1.1e9d1e58972b4p-345, 0.0, 0x1.198b8030fc2c5p-165,
     0.0, 0x1.e167b6c7d7cf1p-249, 0.0, 0x1.318af5a688557p-775, 0.0, 0.0,
     0x1.c04ae24a924cep-314, 0.0, 0x1.c6e562fda690ap-932, 0x1.5b5237039d8b4p-663,
     0x1.c3071e67107e6p-958, 0x1.c98eed9d8ac8p-775, 0x1.637012a272b47p-589, 0.0,
     0x1.e231cb1e2d072p-296, 0x1.f6c49fd910055p-191, 0x1.289b250c4dd32p-466, 0.0,
     0x1.c7bd818fdfe56p-229, 0.0, 0x1.2b4a19d2666e4p-127, 0x1.78d5bd22c268fp-524,
     0x1.0c8e4b782efbep-430, 0.0, 0x1.8b9197efa6ce2p-383, 0x1.51e0948bed09ep-897,
     0x1.2461c8037b5ep-845, 0x1.cbe3d4b8bdf4p-952, 0.0, 0.0, 0.0,
     0x1.db84d7efb4f9cp-457, 0.0, 0x1.69ac2755418dbp-81, 0x1.f35b7f42af62fp-488, 0.0,
     0x1.207bf938970fep-606, 0.0, 0.0, 0.0, 0x1.baed5151c7f93p-563,
     0x1.22a68056fcc5ep-415, 0.0, 0.0, 0x1.b8b97e5343245p-954, 0x1.04daf4899b1f7p-778,
     0x1.f7961aea92f09p-713, 0x1.95fef505fb398p-588, 0x1.e050490a3c957p-746,
     0x1.653bb24007349p-146, 0.0, 0x1.e0796731092d7p-864, 0x1.ac7be478ff9d7p-704, 0.0,
     0.0, 0x1.ce22a7cf0b89fp-386, 0x1.dfe348121c475p-303, 0.0, 0x1.1e60c5ff40fd1p-445,
     0x1.1facb9145c7dap-271, 0.0, 0x1.f42f3c5d822b4p-507, 0x1.56d841c89075bp-439, 0.0,
     0.0, 0x1.945f031f817a6p-172, 0x1.a39700bb5ec84p-354, 0x1.bb88794337c7dp-220, 0.0,
     0x1.f7e26c12e76dp-92, 0x1.86a8214f2508fp-81, 0x1.00756b25c5f4dp-798,
     0x1.06fb64a525f21p-171, 0x1.9e6dec5dd59eep-122, 0.0, 0x1.44b60a4178e9fp-492, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ecccdb85a28cp-757, 0x1.a320bbfeee3e3p-738, 0.0, 0.0,
     0x1.db81911ca4b79p-64, 0x1.e6bd1af198dcbp-846, 0.0, 0.0, 0x1.a0df0d588272ap-28,
     0x1.27c80d37ed53cp-508, 0.0, 0x1.4a4e834818c99p-69, 0x1.8dfde405f12bap-1008, 0.0,
     0x1.1b15a911bce96p-678, 0x1.b7a243d0d3f94p-571, 0x1.c0f3710369433p-858,
     0x1.a9af41a007963p-920, 0.0, 0x1.acf0f8b95711ap-649, 0x1.aec4367097c2cp-262, 0.0,
     0.0, 0x1.40208d798f81ep-624, 0x1.086499a0fc16dp-377, 0x1.373f842630ed8p-295,
     0x1.abbb7a81bb9cap-383, 0x1.6494d73439e5p-942, 0x1.9ab06185f76f9p-491, 0.0,
     0x1.0769a03410c2ap-111, 0.0, 0x1.53e334287705dp-929, 0.0, 0x1.bcf641d0dc44bp-257,
     0x1.24c964f766373p-79, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94614c0cfd7b9p-334,
     0x1.03d657b7d72b2p-381, 0x1.cdd0a01dcc75cp-735, 0x1.56dc42e9f4d12p-712,
     0x1.8796996c81616p-820, 0x1.151f5e80b7b66p-646, 0x1.72955ee84d503p-954,
     0x1.f6f1cffab4c32p-1020, 0x1.90989b6fc65c8p-443, 0x1.1c97641fbac07p-150, 0.0,
     0x1.00097149c13fep-387, 0x1.d02c4ce15cfd7p-75, 0x1.091345e7374abp-290, 0.0, 0.0,
     0.0, 0.0, 0x1.c7f69122cde85p-512, 0x1.13522c0204273p-194, 0.0,
     0x1.0f07b8d6e232cp-407, 0x1.4fb4d31db042p-126, 0.0, 0x1.f3df642a4c6f5p-834,
     0x1.2057fdee86208p-795, 0.0, 0x1.c05bcad9eca65p-592, 0x1.e80188ebab98ep-211,
     0x1.c83bd956b2561p-136, 0x1.0b92aed57d16p-433, 0.0, 0.0, 0.0,
     0x1.a8f8c6181ac72p-579, 0x1.f2d2445a3f153p-952, 0x1.ab212ad28a417p-823,
     0x1.faf50323f1b83p-890, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.351c9ac5ca509p-1011, 0x1.011db4da89dc6p-926, 0x1.b48ca88baeaafp-415, 0.0,
     0x1.3d483e28a048bp-790, 0x1.4bed5c0e6bd4dp-747, 0x1.9ec64daec0973p-956,
     0x1.b51b49d8bcbep-925, 0x1.d4b00833f5009p-288, 0.0, 0.0, 0.0, 0.0,
     0x1.297853436651p-834, 0x1.884b42edc734dp-332, 0x1.1f12e42ac659bp-104,
     0x1.6a1d7a2aa7c44p-673, 0.0, 0.0, 0.0, 0x1.074b4e5d91117p-769, 0.0, 0.0,
     0x1.1e4193b70b09bp-775, 0.0, 0.0, 0x1.b6f1e685aa6d9p-623, 0x1.a449be6f39c65p-991,
     0.0, 0x1.7f47d35e478dep-237, 0.0, 0x1.3dcb76b22b648p-761, 0.0,
     0x1.3337ac41fcb86p-995, 0x1.0b29ba43008b8p-98, 0x1.4c5f05e0a3c66p-172,
     0x1.d91c3b420bc36p-876, 0x1.0f1d0775cb342p-206, 0x1.cd94931c74e2ap-965, 0.0,
     0x1.9b41c3f4f7cc8p-915, 0x1.83b3713fc118p-174, 0x1.781aacc8ef01fp-915, 0.0, 0.0,
     0x1.85d406ffc8bc4p-47, 0.0, 0x1.75828c10ad183p-861, 0.0, 0x1.560142b676f52p-733,
     0.0, 0x1.0521a42415b17p-13, 0.0, 0.0, 0.0, 0x1.da007a069f36ap-614, 0.0, 0.0,
     0x1.ec79f2f0ad481p-6, 0x1.3ed7a06f9e962p-387, 0.0, 0.0, 0.0,
     0x1.0f681196ea69ep-66, 0x1.29782a3c9e24ep-3, 0.0, 0.0, 0x1.f9d1f5a6ac6ddp-113,
     0x1.f6c891ee801e8p-768, 0.0, 0x1.80793a940a948p-665, 0.0, 0.0, 0.0, 0.0,
     0x1.844c8ba73f47ep-102, 0x1.86a1196e2187cp-639, 0.0, 0x1.777e293746869p-605,
     0x1.1e00935500ba2p-704, 0x1.b98e0190d30bfp-392, 0x1.97808a06900f2p-273, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e4d56c980d352p-1007, 0.0, 0.0, 0x1.ae3e1a46a0c5bp-683,
     0x1.c4f9e26783d66p-861, 0x1.2795994628b56p-579, 0.0, 0x1.6bfa11efeff8dp-1009,
     0x1.8913cbf12a204p-21, 0x1.b334318b3e38dp-136, 0.0, 0x1.5bae9b1b95566p-251, 0.0,
     0x1.ac74073a3eb57p-1016, 0.0, 0x1.bec161a000d47p-187, 0.0, 0.0,
     0x1.98cce4afb758ep-891, 0.0, 0x1.5c282d512dce3p-550, 0x1.01a8de3d83c8ep-222, 0.0,
     0x1.c96d9159b140dp-144, 0x1.d4053717cbae3p-618, 0.0, 0.0, 0x1.38560e5fd389p-152,
     0.0, 0.0, 0x1.4b338d8c58445p-152, 0.0, 0.0, 0.0, 0x1.851cf53dfe196p-233, 0.0,
     0x1.4afb63cf944bp-897, 0x1.509bd8581e89cp-817, 0.0, 0.0, 0x1.36b5114082057p-845,
     0.0, 0.0, 0.0, 0x1.0d8eaa308a5ffp-913, 0.0, 0.0, 0x1.5b3e41045ae21p-910,
     0x1.3369399dfb10dp-180, 0.0, 0.0, 0x1.922007a5171cdp-867, 0.0, 0.0,
     0x1.29a66816934ffp-46, 0x1.7ba6a93029614p-255, 0x1.8080a759fc96ap-643,
     0x1.dc520914d2497p-646
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_log10d2_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_log10d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log10d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
