/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpd2_avx2128.c --function Sleef_frfrexpd2_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0.0, 0.0, 0.0, 0x1.c9e656a4b2d7ep-874, 0.0, 0x1.3a82a1d68a2aap-150,
     0x1.c22a7162623a3p-358, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cbdfb65ca93e8p-1013, 0x1.4a98473eca54ep-917, 0x1.30016affe3435p-419,
     0x1.389c47167937bp-487, 0x1.fbf6f290d55d1p-556, 0x1.2b8d80f725442p-25,
     0x1.f4775f6618302p-553, 0x1.badb304f5ee01p-837, 0.0, 0.0, 0x1.d520c4ecc3c06p-474,
     0x1.ae4bb3c2476f4p-346, 0x1.b59d965c19a13p-963, 0.0, 0.0, 0x1.e83f2b5bf3f6ap-749,
     0x1.537cbba11279cp-503, 0x1.13256efc87d3dp-24, 0.0, 0x1.f701417c084b8p-273,
     0x1.caa9215ede6fap-481, 0.0, 0.0, 0.0, 0x1.70b1697789f26p-627, 0.0,
     0x1.a958e52a5bd2dp-899, 0.0, 0.0, 0.0, 0x1.1147f46530b4fp-586,
     0x1.60b1c834e1533p-291, 0x1.29b6e5e7e5664p-192, 0.0, 0.0, 0x1.63928851f7f63p-973,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.739c5ff4ea25p-165, 0x1.70dfdc0c4fcdp-465,
     0.0, 0.0, 0.0, 0.0, 0x1.2103f1146c3cfp-471, 0.0, 0x1.96d0faeb8a014p-688,
     0x1.646032da0c047p-810, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd5d06cce3467p-551,
     0x1.f7413c3503778p-1000, 0x1.2b0d4ae45fc69p-580, 0x1.180bd43998bc9p-302, 0.0,
     0x1.32d05b480b9b7p-339, 0x1.b180352a93955p-393, 0.0, 0x1.cb2b9fc1c74d1p-841, 0.0,
     0x1.fabffdaeb631dp-146, 0.0, 0x1.ca4bf7492dd81p-697, 0x1.1c3add21e5e09p-457, 0.0,
     0.0, 0.0, 0.0, 0x1.346b27522cf37p-221, 0x1.fdad5ffa22d84p-101, 0.0,
     0x1.bae9ad053fe27p-575, 0x1.9275d166e9d2dp-939, 0.0, 0x1.183eb13ed36a6p-647, 0.0,
     0x1.ed885410b7444p-278, 0.0, 0.0, 0x1.b3609443d0ff3p-925, 0x1.e0b91d99e0755p-908,
     0.0, 0.0, 0x1.073ee9e148634p-617, 0.0, 0.0, 0x1.8c9117dfd7952p-188,
     0x1.5fa51c2d3236cp-289, 0.0, 0x1.a05b1e8be45e3p-663, 0.0, 0x1.014a9838e8e47p-856,
     0.0, 0.0, 0.0, 0x1.2851f6b1118b3p-583, 0x1.f1dd19a2f1d79p-774,
     0x1.c16d5c9a3cccbp-128, 0.0, 0.0, 0.0, 0x1.9c7ca4d74a8a7p-209, 0.0,
     0x1.16e7801e5fa07p-660, 0.0, 0.0, 0.0, 0x1.33631fb47b9aap-823, 0.0,
     0x1.d741d1bfbc1f3p-308, 0.0, 0.0, 0x1.383d0c5caa724p-744, 0x1.56c3ff2f68793p-195,
     0x1.4c1c5c71b1989p-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e229908a00954p-968, 0.0, 0x1.890ac08362aedp-114, 0.0, 0x1.f8cd50c3a61e2p-621,
     0x1.78f603772d079p-859, 0x1.b462dc65013f7p-173, 0x1.260ad81fa275dp-797,
     0x1.eaf6a50236d11p-658, 0x1.fdc1cbdaff094p-374, 0x1.5fb9cca668f22p-561,
     0x1.34d814c41cfbap-982, 0x1.cd546ea0e1c04p-430, 0.0, 0.0, 0x1.94bc4452bd62ep-880,
     0x1.fd40683c624e6p-992, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9f47466cb3287p-951, 0.0, 0.0, 0.0, 0.0, 0x1.d9eac26ef16ffp-63,
     0x1.b1b7abe07bbacp-401, 0x1.dbf6afa6d369dp-394, 0.0, 0x1.01a6864470929p-840, 0.0,
     0.0, 0x1.cf022443fc66bp-818, 0x1.a85f3adf71defp-193, 0x1.dbb133522b89cp-816,
     0x1.03554913d0786p-540, 0.0, 0x1.cea1e73a1874fp-376, 0.0, 0.0, 0.0,
     0x1.9e7c409853d7bp-831, 0x1.c9733147b7c9p-330, 0x1.c684ee17a7b79p-259,
     0x1.c9bd06a28246cp-555, 0.0, 0.0, 0x1.435198ea9f41bp-679, 0.0, 0.0, 0.0, 0.0,
     0x1.f9e540a16dffdp-80, 0.0, 0.0, 0x1.30ad7e44920cfp-153, 0.0,
     0x1.19f8198ba0865p-435, 0x1.ceee4e28401a2p-892, 0x1.b36922981cf5p-766,
     0x1.ac4931f9ba1d1p-777, 0x1.049ce519293dap-784, 0x1.35e952209519p-323,
     0x1.ead3f15f1579cp-125, 0x1.60cf138eeeda9p-696, 0x1.3b164e103b765p-274, 0.0,
     0x1.a5a992c4bf122p-350, 0.0, 0.0, 0x1.8b34d4739123cp-370, 0.0,
     0x1.4c1fb8db980d6p-81, 0x1.681131d2c718p-193, 0.0, 0x1.7c79042106184p-971,
     0x1.bfc6b6a0345adp-541, 0x1.0b9f7d58874fcp-940, 0.0, 0.0, 0x1.10cd4f64885b7p-752,
     0x1.d2be8897863p-191, 0.0, 0.0, 0.0, 0x1.52e3d31a422a1p-468, 0.0, 0.0,
     0x1.737ce9fa6cd2ap-124, 0x1.b2012e5c90b9bp-329, 0.0, 0x1.1ce8137a33419p-885,
     0x1.d472e41a8e71ep-108, 0.0, 0.0, 0.0, 0x1.278738710cc75p-388, 0.0, 0.0,
     0x1.2f10c9f2cc02ap-481, 0.0, 0x1.0dba001b62446p-191, 0.0, 0x1.c57295dbf1825p-113,
     0x1.98ec643bc90b8p-94, 0x1.295ee63348f3p-797, 0x1.656657647bccbp-847,
     0x1.ed914c5ec9affp-458, 0x1.0d80b38bbfcc5p-232, 0.0, 0.0, 0x1.83ac13b997ab4p-867,
     0x1.e223c2600aa59p-488, 0x1.42bec6a9986d5p-170, 0.0, 0x1.b6731b66935c9p-808,
     0x1.a0c043655a145p-48, 0x1.1b2dab0a73269p-824, 0.0, 0.0, 0x1.3ebf58642e866p-936,
     0.0, 0x1.ad32410c9a27ep-231, 0x1.6a214d92f76bbp-203, 0x1.2f8f83ed02a97p-397,
     0x1.216df2f74bec3p-590, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19da25b263796p-916, 0.0,
     0x1.88074a27dc789p-154, 0x1.d19595156a3d5p-856, 0x1.0a95454e3ac1p-886,
     0x1.135f5f817faafp-949, 0x1.50926e5c4efd9p-290, 0x1.1bd58642dd6d5p-497,
     0x1.d749f952d5394p-956, 0x1.55faef195f79ap-6, 0.0, 0x1.b8dd20b70e0ep-390, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c16689d13a1afp-498, 0.0, 0.0, 0.0,
     0x1.aa99a3c8f67a4p-795, 0x1.9e2260787371p-833, 0x1.08265efa692f6p-552, 0.0,
     0x1.0f7dc8ca73302p-137, 0x1.3a9cfa8b13864p-671, 0.0, 0x1.c59ec011bea61p-46,
     0x1.468366d1b5947p-577, 0x1.e3e8fa9ea1b85p-272, 0x1.55ffb0b7d3824p-572, 0.0, 0.0,
     0x1.a41bbf2f6442dp-941, 0.0, 0.0, 0x1.f385d1e4cea2dp-43, 0.0,
     0x1.8ad8be5f08dd4p-604, 0x1.2cc8487e60de1p-242, 0x1.842333acabd8cp-137,
     0x1.0a932e1e1fc45p-601, 0x1.bef18966e0a4p-674, 0.0, 0.0, 0.0,
     0x1.d4c7b98f5ecabp-324, 0.0, 0.0, 0x1.2a1708db4916dp-669, 0.0,
     0x1.08f03e61ad44cp-188, 0x1.14628ffa087a5p-270, 0x1.6f9d7f3bec1d7p-192, 0.0, 0.0,
     0x1.60c3350d1afe6p-62, 0.0, 0.0, 0.0, 0x1.c7068904690dcp-24,
     0x1.08a7206209865p-287, 0.0, 0x1.10bd3b8cd0c9bp-290, 0.0, 0x1.eb70c680d5f52p-271,
     0.0, 0.0, 0x1.9e71ea70b5534p-967, 0x1.a8796c1cc97b7p-720, 0x1.7e2604a743239p-793,
     0.0, 0x1.1d54201c393f7p-1018, 0.0, 0.0, 0x1.10cea92183985p-232, 0.0, 0.0,
     0x1.c95fe3de7ff91p-133, 0.0, 0x1.0a9bbdf0338eap-537, 0x1.81ad7538e1733p-256,
     0x1.3f3340bc887ebp-990, 0x1.05f96eac05126p-320, 0.0, 0.0, 0.0, 0.0,
     0x1.f583c58b5b1cbp-912, 0.0, 0x1.b737a83d0f3d7p-251, 0x1.cbdc5f471510ep-83, 0.0,
     0x1.d9722677da08bp-808, 0x1.fb73a787b31a9p-100, 0.0, 0x1.f1e461e5a2885p-674,
     0x1.8fb5b4132ce99p-740, 0.0, 0x1.6aee26ac566fep-625, 0.0, 0x1.a032f7a6faf41p-152,
     0.0, 0.0, 0x1.4d5f2893a3512p-191, 0x1.b8467903082c9p-321, 0.0, 0.0,
     0x1.dac00425b3ba2p-745, 0x1.a4f6a8bc05d74p-970, 0.0, 0x1.25c78fe071fcbp-252, 0.0,
     0x1.9be43ee651d5cp-993, 0.0, 0.0, 0.0, 0x1.8571e24ed6dadp-804,
     0x1.2bc59d80d3083p-494, 0x1.0825e19d05bb9p-761, 0x1.f85a66129248p-15,
     0x1.21cd026a8bb02p-799, 0x1.4882953314567p-437, 0.0, 0x1.701015edf0183p-1019,
     0x1.a008aee2c464fp-462, 0.0, 0x1.9cae8a6a21657p-616, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1440e47b277ep-819, 0.0, 0.0, 0x1.cd90914a19356p-947,
     0x1.98e8086580fa2p-534, 0.0, 0x1.8dc04b0a26cbdp-234, 0x1.640c327da7d56p-232, 0.0,
     0.0, 0.0, 0x1.45b8853199262p-574, 0x1.f1ef3008b20e1p-955, 0.0, 0.0,
     0x1.87315f2fcbb4fp-241, 0.0, 0x1.6da7190fcde23p-220, 0x1.d5e5acb61bcb5p-727,
     0x1.f4c31af7e54b7p-439, 0.0, 0x1.c8a7f4201e578p-179, 0.0, 0x1.a9b4b97011f3dp-877,
     0.0, 0x1.a88a748330db8p-528, 0x1.17adfdd62d9a5p-232, 0x1.f386b6980f7ebp-329, 0.0,
     0x1.e3342009f9bdap-816, 0.0, 0x1.2c46811c3bc2fp-762, 0x1.f9bc1fcde7f2ep-221, 0.0,
     0x1.246c65a72a8efp-919, 0.0, 0.0, 0x1.19315cd16bc6bp-954, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.83c398246ba5bp-573, 0x1.b9133e4c5a223p-361, 0.0, 0x1.05dc90e85a132p-558,
     0x1.7b3c24e1989fcp-282, 0x1.3271182049ddap-585, 0.0, 0.0, 0x1.3d137b802488ep-118,
     0.0, 0x1.8d15e2aa585f8p-782, 0x1.aca7441ab2553p-576, 0x1.c497392a1f21fp-978, 0.0,
     0x1.6e0494db09c86p-508, 0x1.ed564b8580abep-769, 0.0, 0x1.d2498a3aed0e6p-146,
     0x1.15ed0561f975fp-921, 0x1.b8c232fbf45e7p-743, 0x1.68291a900c2fcp-657,
     0x1.5f313706efd92p-636, 0.0, 0.0, 0.0, 0x1.acccb439f80e7p-352, 0.0,
     0x1.0274294751613p-545, 0.0, 0x1.a69d88bf28b87p-551, 0.0, 0x1.02e707a321ce2p-120,
     0x1.d8435c8ce4f23p-556, 0.0, 0.0, 0.0, 0x1.5ad396eee81d9p-317,
     0x1.98c4738bdfd1bp-60, 0x1.6a5d344596475p-726, 0x1.49d81f91865ffp-388,
     0x1.f17a5a08148f8p-248, 0.0, 0.0, 0x1.2077787456667p-1013, 0.0, 0.0,
     0x1.d2185f58e6a16p-1022, 0x1.6067d831e7029p-978, 0.0, 0.0, 0.0, 0.0,
     0x1.a6abc63e78589p-678, 0.0, 0x1.9c87a4d881ed5p-436, 0x1.002351bf6447bp-1002,
     0.0, 0x1.a8694b3d3acefp-706, 0x1.580dc8815032ep-429, 0x1.3b5516bacab58p-914,
     0x1.a4aa86884ff9dp-438, 0x1.9bc2e279072ffp-563, 0x1.55b5b287203e4p-642, 0.0, 0.0,
     0x1.d2efadad776f8p-34, 0.0, 0x1.a724c568c84d8p-630, 0x1.4fe60bc5a7adfp-429, 0.0,
     0x1.4ce53cd187893p-877, 0x1.b80e1713226cap-810, 0x1.0434283d771a9p-243, 0.0, 0.0,
     0.0, 0x1.a63a5061d0537p-511, 0x1.01336c1ae17d7p-574, 0x1.3e62289b34555p-458, 0.0,
     0x1.edd74857249adp-653, 0x1.e79ee6606ae66p-711, 0.0, 0x1.a246538905487p-114, 0.0,
     0x1.08f38399f8674p-887, 0.0, 0.0, 0.0, 0.0, 0x1.e4046b4370cf8p-395,
     0x1.5bf5d8028f95ep-111, 0x1.9f2f84e2e25c4p-418, 0x1.a534e28123d4bp-754, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.de5479195dccfp-195, 0x1.ee54f8d7df986p-204, 0.0,
     0x1.fbaa975da369bp-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.37725163ef8ap-348, 0.0, 0x1.1a16f61086d8p-521, 0x1.0a2a249db3943p-698,
     0x1.c5ed810163ad1p-696, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1a8f2385a478cp-433, 0.0, 0.0, 0.0, 0x1.c9c66381479f1p-538, 0.0, 0.0,
     0x1.98330ddb1b7f9p-980, 0.0, 0x1.10b7aeeba7d85p-829, 0.0, 0.0, 0.0,
     0x1.178c976dc8d2p-875, 0.0, 0x1.1f9e5daa3e4bdp-90, 0x1.5f60bf60a7028p-447, 0.0,
     0.0, 0x1.af4a279e36297p-882, 0.0, 0x1.cd14b1b9e438p-639, 0.0,
     0x1.13f9f753e87a9p-841, 0x1.5e41347e7c92ep-819, 0.0, 0.0, 0x1.d4154cf18d769p-144,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f73480be95a5bp-415, 0.0, 0.0, 0.0,
     0x1.470f697ca4ed1p-42, 0x1.9a75385835272p-996, 0x1.5dd733647427fp-654,
     0x1.eb5c8a7fa929ep-687, 0x1.c3127dd01fc16p-461, 0.0, 0x1.ecf8ab5f15b91p-496, 0.0,
     0.0, 0.0, 0x1.f29999127b3a9p-752, 0.0, 0.0, 0.0, 0x1.44aa7e030fdc4p-50, 0.0, 0.0,
     0.0, 0x1.2514e4de7bf71p-54, 0.0, 0x1.8327e58194632p-151, 0.0, 0.0, 0.0,
     0x1.493ba29ba4427p-300, 0.0, 0.0, 0x1.dc3304df133fep-139, 0x1.3486c7e54561dp-317,
     0x1.baf615ec23925p-192, 0x1.b0af2b0769595p-501, 0x1.07b4395185754p-140, 0.0,
     0x1.cbf2dab39ac7ap-283, 0.0, 0x1.c13ee06941de2p-430, 0.0, 0x1.97f1c9dea3b5cp-89,
     0.0, 0x1.336b48e2c893p-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b15092c2da7d4p-227, 0x1.3debcea8ce66ap-498, 0.0, 0x1.6f0a3dd69a3c7p-729,
     0x1.41769983def0dp-772, 0.0, 0.0, 0x1.f0452911862f5p-629, 0x1.655db8017e7fap-117,
     0x1.acf63bac6f167p-923, 0.0, 0x1.bb3f840697051p-442, 0.0, 0x1.4d825e5045d7cp-500,
     0x1.04defc908d7bp-524, 0x1.dfcc58eade265p-7, 0.0, 0.0, 0.0, 0.0,
     0x1.01e67cc067942p-107, 0.0, 0.0, 0.0, 0x1.aea6fe9dd4bd9p-772,
     0x1.591d67a2e0704p-209, 0.0, 0x1.7f67e1b720ec9p-945, 0.0, 0.0, 0.0,
     0x1.44dc442453e41p-90, 0x1.75e87014f66e5p-26, 0.0, 0.0, 0x1.9aaf9c93704aep-140,
     0x1.c978531f733ddp-231, 0x1.c03a70e923e16p-744, 0.0, 0x1.44181d957728p-762, 0.0,
     0x1.f7d721c96c77ap-39, 0x1.f3f3c6932c205p-699, 0.0, 0x1.450eeb8d7fac4p-753, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.81ba1322f13bp-304, 0.0, 0.0, 0x1.66697f538fa14p-504, 0.0,
     0x1.5b8b90a62c2f1p-868, 0.0, 0x1.fd217ee7c8f5p-568, 0.0, 0.0, 0.0,
     0x1.69a8e5a3db31ap-308, 0.0, 0x1.d37b24d3fb502p-292, 0.0, 0x1.c658e758b2555p-24,
     0x1.a33c49d95a5d7p-185, 0x1.e3975099985ccp-671, 0x1.25fce1cad6402p-765,
     0x1.e1bc232052c8bp-347, 0.0, 0.0, 0x1.b0aca6633ef87p-982, 0.0,
     0x1.47b89247be667p-828, 0x1.aa88b25632b2ap-869, 0x1.7908e6b7964e5p-208,
     0x1.b157ef2690916p-421, 0x1.c7ecd16d2c2cep-861, 0.0, 0x1.fe6756ce7c2e8p-762, 0.0,
     0x1.855d090b3ab47p-763, 0.0, 0.0, 0x1.7cd3fac3ea4c3p-963, 0.0, 0.0,
     0x1.45e296c5143dcp-235, 0x1.9e54466dfc3b5p-824, 0x1.856659b5e8166p-349, 0.0, 0.0,
     0x1.b471d0f6d604bp-738, 0.0, 0x1.f9f99cdef9bbbp-901, 0.0, 0.0, 0.0,
     0x1.d12965dca125cp-878, 0x1.82d85bb224e06p-434, 0x1.abdaa683f0cf1p-581,
     0x1.ac2136d1871abp-201, 0x1.8e42ea3a497b4p-723, 0.0, 0.0, 0.0,
     0x1.bb907b384ef7ap-761, 0.0, 0.0, 0.0, 0.0, 0x1.eb6edd7ebe81bp-839,
     0x1.76e1fc72073cfp-561, 0.0, 0x1.c67f281762d82p-289, 0x1.065ce75e45689p-917, 0.0,
     0.0, 0.0, 0.0, 0x1.a1949e56c200ap-170, 0x1.b00d9bd16e3c3p-981, 0.0,
     0x1.169891cc1a936p-722, 0x1.99727ea772826p-583, 0x1.6056cd487cd4p-985, 0.0,
     0x1.f57e386e4d7d8p-341, 0.0, 0x1.49bd993c8d806p-249, 0x1.6bedd934cb54ap-916,
     0x1.b2462f25f24b7p-685, 0.0, 0.0, 0x1.87e0f76436c9cp-745, 0x1.c7f489e5f2d4ap-768,
     0x1.0eb3795c219b7p-332, 0.0, 0x1.27ab6ddc9f2efp-382, 0x1.b78b0c86358c8p-850, 0.0,
     0.0, 0.0, 0x1.4a08ca4330893p-971, 0.0, 0x1.27101d9154affp-403, 0.0,
     0x1.deca87292e6d5p-271, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7e128636bc44p-909,
     0x1.4d5bac5d13e04p-191, 0.0, 0.0, 0.0, 0.0, 0x1.e1924fcf2a37ap-538,
     0x1.4bfca7da21821p-780, 0.0, 0x1.3cd1f669373d4p-614, 0.0, 0.0,
     0x1.188cd1e4be541p-830, 0x1.2cc97555a625fp-278, 0x1.5c6a1dab96688p-592, 0.0, 0.0,
     0x1.4173fc8a9a98ep-781, 0.0, 0x1.e8c719aa20a86p-670, 0x1.85d02402687a4p-102, 0.0,
     0.0, 0.0, 0.0, 0x1.6f52a6e2caa7fp-468, 0x1.d706971a24022p-702, 0.0, 0.0,
     0x1.98e9f41dddbddp-305, 0.0, 0.0, 0x1.c28856eb39c27p-306, 0x1.577144b297fa3p-153,
     0.0, 0x1.6b9f017fdcd24p-999, 0.0, 0x1.8f06f4497e16cp-169, 0.0,
     0x1.b0d7835cfc72ap-135, 0x1.96d422effc2f4p-993, 0.0, 0.0, 0x1.0750bdb70da81p-976,
     0.0, 0x1.0c657caddf371p-1009, 0.0, 0.0, 0x1.096e45babe29fp-612,
     0x1.77a4894cfe075p-616, 0.0, 0.0, 0.0, 0x1.6439dfeb9ad6dp-199,
     0x1.b48ca5c2ec4a6p-599, 0.0, 0x1.a7eb4c0b1e0e1p-407, 0x1.904cfac0d51b2p-423, 0.0,
     0.0, 0x1.a1982bbb3f621p-456, 0x1.e93bbecc56729p-99, 0.0, 0.0, 0.0,
     0x1.fbe5ccdfd54c8p-433, 0x1.321584958e31p-396, 0x1.cc5cbab483e8fp-432, 0.0,
     0x1.54c3c13480d28p-587, 0x1.5b3e0935c4e67p-290, 0x1.932d2643ce2e5p-312,
     0x1.c82fb6f925623p-973, 0.0, 0.0, 0x1.89d8ddecf426cp-544, 0x1.89888799d82cbp-32,
     0.0, 0x1.b8292dc97441ep-104, 0x1.0e1fb832d976p-79, 0.0, 0x1.15096a4de5d21p-473,
     0x1.eaf42480f0d08p-732, 0.0, 0.0, 0x1.4d68c9a1b29e5p-512, 0x1.8ccdce55ccce9p-927,
     0x1.6fc599b245042p-767, 0.0, 0.0, 0.0, 0x1.d07bac8d87d1fp-410, 0.0,
     0x1.ff216fa06f33ap-942, 0x1.7ca19bfd70edap-936, 0.0, 0x1.80676ff73c51dp-496, 0.0,
     0x1.bd0e64f2349d6p-248, 0.0, 0x1.3fd67c34050d2p-733, 0.0, 0x1.1772d317b4235p-259,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0499121f639afp-683, 0.0, 0x1.86509d2f2b0dbp-474,
     0x1.99ba54c5c78cbp-1000, 0.0, 0.0, 0.0, 0.0, 0x1.2dc3600e9b9f1p-704,
     0x1.74b5538390668p-27, 0x1.3c16eca57d16ep-835, 0x1.be0afb93ec4cbp-48, 0.0,
     0x1.5845e192037d1p-36, 0.0, 0.0, 0.0, 0x1.10a2f9837bc49p-1000, 0.0, 0.0,
     0x1.14081c2a0b3d1p-815, 0.0, 0x1.2c909cdc2141cp-535, 0.0, 0.0,
     0x1.7f240f4de1ed8p-440, 0x1.b98625fd52a14p-388, 0x1.0646cfd687866p-102, 0.0,
     0x1.f57e22308067ap-1015, 0x1.d55a243724b74p-574, 0.0, 0x1.b95b1b67ec81p-828, 0.0,
     0x1.6d550517463e7p-891, 0x1.86a0f92343037p-447, 0.0, 0.0, 0x1.eb6dbaf263609p-322,
     0x1.8c0ebbce9d204p-725, 0x1.436f44958bb5bp-300, 0.0, 0x1.4db3cbbac119ep-431,
     0x1.862bf558c6f3cp-938, 0.0, 0x1.31db1bc987a97p-939, 0.0, 0.0,
     0x1.740ca29629eddp-973, 0x1.0231d96b96d96p-265, 0x1.ef941beb99a3cp-385,
     0x1.e4cba711f9961p-200, 0.0, 0x1.1b99882175c48p-352, 0.0, 0x1.b356b046b30f4p-277,
     0x1.0db1bbe194bfp-512, 0x1.e02cb1934a295p-217, 0.0, 0x1.e1133797bfc22p-523, 0.0,
     0.0, 0.0, 0x1.f950aed47528bp-266, 0x1.b25ff01d09128p-371, 0.0
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
            tmp1 = Sleef_frfrexpd2_avx2128(tmp0);
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
    printf("Sleef_frfrexpd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_frfrexpd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
