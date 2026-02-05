/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd4_u10kvx.c --function Sleef_coshd4_u10kvx \
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
     0.0, 0x1.deaf51e2b7d61p-598, 0.0, 0.0, 0.0, 0x1.71214cd4e835ap-627, 0.0, 0.0,
     0x1.06741b32e8b4cp-529, 0.0, 0.0, 0.0, 0x1.48de4ba8159f1p-40,
     0x1.1735b2aaa9516p-65, 0.0, 0x1.e165635086b26p-331, 0.0, 0x1.dc9f33b7326bep-641,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c205b4e79bf0bp-598, 0.0, 0x1.1bfae5d320f38p-159,
     0.0, 0x1.b87b6f8f98721p-189, 0.0, 0x1.64f0c7db0a7ap-736, 0.0, 0.0,
     0x1.72cef4d691bc3p-114, 0x1.334d076e86944p-287, 0.0, 0x1.9efb0d9046047p-40, 0.0,
     0.0, 0.0, 0.0, 0x1.e2b2c910fe471p-142, 0.0, 0.0, 0.0, 0.0,
     0x1.a6ecf77597c6bp-416, 0x1.9bf8eed60d98dp-614, 0x1.11c0adfac6717p-231, 0.0, 0.0,
     0x1.2c7b97a1e17d3p-930, 0.0, 0x1.0498740baf208p-545, 0x1.e0747130f15c6p-915, 0.0,
     0.0, 0x1.4b493be7ffc91p-594, 0x1.9cd8f8d51919dp-189, 0.0, 0x1.92b5d45725831p-918,
     0x1.e12ae477b8515p-327, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95b1b0a72d89p-265, 0.0,
     0x1.958145a22b04bp-252, 0x1.8f2196032a34cp-926, 0.0, 0x1.9672bb29578cdp-982,
     0x1.f5cf12ad2bc52p-252, 0.0, 0.0, 0.0, 0.0, 0x1.f36fa7e54b77cp-609,
     0x1.bf87689c67eebp-950, 0x1.a48aa66dad59cp-936, 0.0, 0x1.5d1dccfcc52e5p-400,
     0x1.9653fb57000f6p-987, 0x1.add578d2e66p-339, 0x1.e39f17dd8c15fp-399,
     0x1.7d6c6d894c44ep-252, 0x1.813772ea7c305p-60, 0.0, 0x1.f48a047137368p-708, 0.0,
     0x1.daf7cad274b03p-443, 0x1.50d5cff6ba3b9p-244, 0.0, 0x1.bd3d4675381e3p-210, 0.0,
     0.0, 0.0, 0x1.1daa9df8cf64ep-92, 0x1.8bca7f5b11316p-603, 0x1.db326e37b0e8fp-800,
     0x1.7f8105d7e2b02p-82, 0x1.a1ab04f44198ap-1006, 0x1.bd6dbd79b8888p-55,
     0x1.3ab7dd9dbdf8cp-327, 0.0, 0.0, 0.0, 0x1.8f981da3765bdp-56, 0.0,
     0x1.c253aab264e59p-890, 0x1.496ba7e698a71p-617, 0x1.ef3d3c5701e6p-70, 0.0,
     0x1.fed5e409f7549p-798, 0.0, 0.0, 0.0, 0x1.d400129bc1787p-920, 0.0,
     0x1.8e55bb453133p-574, 0x1.88971df8c572bp-736, 0.0, 0x1.7ec90739d338ap-388,
     0x1.e23e9cbceb4f9p-840, 0x1.8d9516586f845p-95, 0.0, 0x1.1315d90d8608fp-29,
     0x1.446d3dfc2f976p-580, 0.0, 0.0, 0.0, 0x1.bce47ce816176p-718,
     0x1.75be7e2c9759cp-387, 0.0, 0.0, 0x1.0e79d362d714dp-982, 0x1.088763e7aba7ep-91,
     0x1.355b80e0b30afp-686, 0.0, 0x1.489c5dca44819p-956, 0.0, 0x1.4ce0342df70a3p-55,
     0x1.28e22be785c6p-937, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.333532415b707p-411,
     0x1.1013b448e6db5p-126, 0x1.3be68e0744ea5p-204, 0.0, 0x1.8bb0132125e25p-14,
     0x1.8dc0f87ddef3bp-845, 0.0, 0x1.e61823fc5267cp-378, 0.0, 0.0, 0.0, 0.0,
     0x1.2ed10d2b3acb3p-672, 0x1.2b5ccf4fbf94dp-186, 0x1.e61f42a71bdcbp-680, 0.0, 0.0,
     0x1.57b4a397a1937p-681, 0x1.3b7c78e7141d4p-918, 0x1.524b3a8a0bee1p-585,
     0x1.9985edeabae03p-1004, 0.0, 0.0, 0.0, 0x1.9bf2c2fa421fap-317,
     0x1.cedeff55b2e0ep-555, 0.0, 0.0, 0.0, 0x1.e4d52a468a70fp-18,
     0x1.77f79f12391d2p-128, 0x1.63ae65bf9c4dap-6, 0x1.660fedda24c3ep-802,
     0x1.68a7b2223652cp-598, 0x1.f5f1b9651250ap-182, 0.0, 0.0, 0.0,
     0x1.7c01f4ec0fa7p-516, 0x1.7740f0d102a8fp-316, 0x1.d3aa684705fe5p-597,
     0x1.43b9f2cbca4d1p-202, 0.0, 0.0, 0.0, 0.0, 0x1.9ea2563b0cf29p-643,
     0x1.c322cff010ef4p-317, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f55da5584d2cp-7,
     0x1.b2f6c42c7644p-698, 0.0, 0.0, 0.0, 0x1.4476b87cfe631p-872,
     0x1.f0d3696620ea8p-220, 0x1.576c73098b097p-56, 0x1.398db9d1897d6p-220,
     0x1.27fbcf46fc6f8p-570, 0x1.b8a26ac811487p-155, 0x1.c12a4b26c7e97p-444, 0.0, 0.0,
     0.0, 0.0, 0x1.6cf490c9b3b49p-742, 0x1.0169bbad8c7d9p-919, 0.0,
     0x1.00053ae174673p-939, 0x1.d8cc62e452f4ap-101, 0x1.153b1c09e5b91p-823,
     0x1.f3598f59e7d63p-559, 0.0, 0x1.04b6897e3b8fdp-831, 0x1.488220686daf2p-1015,
     0x1.5823cef61a6e6p-922, 0x1.8b6404600cf99p-161, 0.0, 0.0, 0x1.dbf821a8fef44p-801,
     0.0, 0x1.a884a8d0bd3aap-494, 0.0, 0.0, 0.0, 0x1.5795566d5f9aep-369,
     0x1.39bd4252cd28ap-987, 0.0, 0.0, 0.0, 0.0, 0x1.a9f7ca6437457p-912,
     0x1.c98ecf2d5d5bfp-260, 0.0, 0.0, 0.0, 0x1.20acaa8c2d4c7p-83, 0.0,
     0x1.16f835949119ep-346, 0x1.1c14760dfbd6ap-750, 0.0, 0.0, 0.0,
     0x1.76ea7c5cd17fp-159, 0.0, 0.0, 0.0, 0x1.4b4cb8747dd4cp-496,
     0x1.e8060e30aabaap-171, 0.0, 0x1.677264a76ebd5p-566, 0.0, 0x1.057686dbe04adp-637,
     0.0, 0x1.efec4385b4339p-532, 0x1.1812ca6791e8fp-338, 0.0, 0x1.878052374faap-930,
     0.0, 0.0, 0x1.28ec85b747e77p-492, 0.0, 0x1.589a3dd3f16b8p-327,
     0x1.da389586c3616p-413, 0.0, 0.0, 0x1.2167a5fa5409ep-451, 0.0,
     0x1.0ef3d2fccf274p-521, 0x1.e1ad5b3a20dc5p-852, 0.0, 0x1.30d42787b3301p-590,
     0x1.87d8bf54fb02bp-916, 0x1.aac671bf23e07p-694, 0x1.3206bec979c7dp-189, 0.0, 0.0,
     0.0, 0.0, 0x1.9278322252f09p-472, 0x1.f1e4caff04ec6p-50, 0.0, 0.0, 0.0,
     0x1.5918ea7435b5dp-196, 0x1.d468f1b2efdc6p-762, 0.0, 0x1.0c37fafc1ec1dp-442,
     0x1.7e3af61c38801p-576, 0.0, 0x1.db0dcbd87c556p-648, 0.0, 0.0, 0.0,
     0x1.973c22e740753p-108, 0x1.35bf30f5746c6p-738, 0x1.104b722eb7e0dp-633,
     0x1.a8ef60a1b8496p-748, 0x1.b2ebafe68c23ap-95, 0x1.771f5ba13918fp-573, 0.0,
     0x1.53f6807f9998ep-743, 0.0, 0.0, 0.0, 0x1.d506c44e77c8cp-555,
     0x1.aad63e58571a2p-682, 0.0, 0.0, 0x1.373901b85b418p-460, 0.0,
     0x1.cc04e0c87f14bp-761, 0.0, 0.0, 0x1.ca6f2b7a45923p-144, 0x1.67f0f4d58f7bdp-964,
     0x1.04d0c8acaa8d5p-116, 0.0, 0.0, 0x1.e380563385df2p-280, 0x1.0112e23742a3ep-607,
     0.0, 0x1.db432d19ab859p-445, 0.0, 0x1.211241bcd7ffep-335, 0x1.9b5862644b8d6p-462,
     0x1.a88cca0c5721cp-798, 0x1.178f2274f58bdp-785, 0x1.56ab38e45417dp-905, 0.0,
     0x1.cb1fadf112632p-754, 0.0, 0x1.8af50a6a01303p-916, 0.0, 0.0,
     0x1.2e9b435d3d4e2p-255, 0.0, 0x1.22e00aae592a7p-270, 0x1.40c09d7cd0187p-521,
     0x1.fd7c2e57fe5b3p-331, 0x1.21de7dff1a7afp-949, 0x1.2f66af092a128p-539,
     0x1.f02aba59c0508p-746, 0.0, 0x1.99507e6cd96ffp-885, 0.0, 0.0, 0.0,
     0x1.d3e40fbcec9f9p-726, 0.0, 0x1.eed598b1c3952p-169, 0x1.8294882736693p-983,
     0x1.dd57be5f30c65p-658, 0x1.2ac64b71e6247p-602, 0x1.d28df9c2f3c5ap-954,
     0x1.842fa0857aee3p-876, 0x1.2f56e8901f1e1p-563, 0.0, 0x1.5b41b31a3f524p-905, 0.0,
     0.0, 0.0, 0x1.4514181479781p-154, 0.0, 0.0, 0.0, 0x1.4e7fe2ac1c3c9p-17,
     0x1.11e37c147e6d4p-933, 0.0, 0.0, 0.0, 0.0, 0x1.ed5b3e3ca98b8p-687,
     0x1.37477e046344ep-255, 0.0, 0.0, 0.0, 0x1.4b4b4f21584fep-966, 0.0, 0.0,
     0x1.53fd4674e3bcp-150, 0x1.189cc3a9017cdp-212, 0x1.6e51318bd84a5p-714,
     0x1.2efdea1e789a2p-721, 0x1.420c03418fafcp-248, 0.0, 0x1.425f21494592cp-95,
     0x1.96023f84d24ffp-967, 0x1.10c53edf38025p-321, 0x1.3d88947b9696ap-55,
     0x1.d5aa72d7c7983p-546, 0.0, 0x1.4d63aebc1411dp-259, 0x1.411dfbe61e405p-369, 0.0,
     0.0, 0x1.836576fe624fap-778, 0.0, 0.0, 0x1.03d29f2cfdcedp-860, 0.0, 0.0,
     0x1.3604d1173b95bp-303, 0.0, 0x1.be9299168afccp-110, 0x1.b3de12f127ec7p-529, 0.0,
     0.0, 0.0, 0x1.99d717e2edc98p-684, 0.0, 0x1.7ba3e6be90745p-246,
     0x1.f5cbd55a35246p-513, 0.0, 0.0, 0.0, 0x1.87d1b1531cbb3p-864, 0.0, 0.0, 0.0,
     0.0, 0x1.e9e733268c077p-220, 0.0, 0x1.4f93190957a2bp-254, 0x1.47f0e7fa3dcd9p-748,
     0x1.cd2588188bb28p-11, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e671c6a6213b7p-587, 0.0,
     0x1.a67592a377b81p-186, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1e542b28200dp-81, 0.0,
     0.0, 0x1.15efaafe669edp-829, 0x1.7040840b6cf09p-127, 0.0, 0x1.b1c3b6e0e7a63p-788,
     0.0, 0x1.329c6abb846c5p-503, 0.0, 0x1.7940a409421ebp-221, 0.0, 0.0,
     0x1.730d35c07f9fcp-546, 0x1.c61f77f088c5bp-859, 0x1.013483a268908p-757, 0.0, 0.0,
     0.0, 0x1.f1ece3c69d11p-131, 0x1.50b8a859caa65p-736, 0.0, 0.0, 0.0, 0.0,
     0x1.8f992b4e74f75p-477, 0x1.c9681a4078256p-983, 0.0, 0.0, 0.0,
     0x1.028c36e248247p-725, 0x1.bfc3302447432p-823, 0x1.0024b94423d36p-465,
     0x1.c8dd1376a7c44p-540, 0x1.e8c4a87960847p-925, 0.0, 0x1.20ed34e2e4a63p-701, 0.0,
     0.0, 0.0, 0x1.7ba34c8605fbbp-834, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1a5be2f98b704p-482, 0x1.9bb2dc2fa4babp-184, 0x1.d851570de8a5ep-756, 0.0, 0.0,
     0.0, 0.0, 0x1.59b82e6c2c29fp-47, 0.0, 0.0, 0.0, 0x1.86aeadd5c3191p-154, 0.0, 0.0,
     0.0, 0x1.c279c63372ee5p-950, 0x1.da6dc3b3eaceap-82, 0x1.4bf6be89a9d17p-978,
     0x1.19cd36dc9ef95p-980, 0x1.edd5e1447c00ep-42, 0x1.8b66be5021be6p-474,
     0x1.4e434d887b3c3p-218, 0.0, 0.0, 0x1.e8ffb82a9aabbp-426, 0x1.c5232d4ddb1c5p-48,
     0x1.4b372cc289a2ap-490, 0.0, 0x1.b5b149c826a5cp-478, 0x1.b64125537cf6bp-507,
     0x1.4a64d4d785ca9p-873, 0x1.04c10e5144b8cp-194, 0x1.11e61238cbd31p-676,
     0x1.168340f69b139p-694, 0x1.b92d0bcf3f596p-507, 0x1.dd7f0933a6977p-464, 0.0, 0.0,
     0.0, 0x1.6dbac398d0956p-169, 0x1.3b7f36eafd88dp-931, 0.0, 0x1.c62ea8dcfa98dp-17,
     0x1.9792d824efd9fp-85, 0x1.0157f82514888p-600, 0x1.5838192fee806p-503,
     0x1.95109011db8d8p-646, 0x1.eb1c3ba94707ap-787, 0x1.6840522c495e8p-167, 0.0,
     0x1.b7d7551a79abp-229, 0x1.03b76a6b8b64dp-379, 0x1.1ece828319817p-722, 0.0, 0.0,
     0.0, 0x1.d6a4544179b75p-321, 0.0, 0x1.c1ab391d775b1p-423, 0x1.2c77b58668745p-970,
     0.0, 0.0, 0x1.286e18ade80e9p-329, 0x1.12fb3f94434c1p-382, 0x1.8c6d15ba3370ap-380,
     0.0, 0x1.bb3af9afb8519p-343, 0.0, 0.0, 0.0, 0x1.642da9af453e2p-255,
     0x1.fbe274b93574ep-784, 0.0, 0x1.ac6240264449cp-186, 0.0, 0x1.4fa00172261cbp-82,
     0x1.0f6204bd914a4p-613, 0.0, 0x1.5c27698b07685p-195, 0.0, 0x1.7951f433c92a3p-220,
     0.0, 0.0, 0x1.2e3c98c9537c2p-206, 0x1.a197015880135p-336, 0x1.c7b03c533dfaep-665,
     0.0, 0x1.6a2834a1076a3p-843, 0x1.8d0654d9c5a3fp-896, 0.0, 0x1.7ccd5b0b34e1cp-950,
     0.0, 0x1.d1e208214693bp-192, 0.0, 0.0, 0x1.bd93264ebb177p-151,
     0x1.66acbfb4cd4ebp-35, 0x1.ac0b3a72d210ap-774, 0x1.4cd9931ac8609p-383,
     0x1.004d06635b555p-641, 0x1.650e655929ba7p-175, 0x1.4f10ed33cfd0fp-275, 0.0,
     0x1.9dc35741ba59bp-623, 0x1.96460110b3f3fp-796, 0.0, 0.0, 0x1.d3954e02df1f2p-863,
     0x1.ccac184052431p-560, 0.0, 0.0, 0.0, 0x1.873aac99a6f66p-93, 0.0,
     0x1.fcb527a91a1fp-87, 0.0, 0x1.9196b9c671b34p-577, 0x1.b1ef2c01d95d4p-803, 0.0,
     0.0, 0.0, 0.0, 0x1.87bd4967d7ad4p-935, 0x1.350825fe26e57p-265, 0.0, 0.0, 0.0,
     0x1.6fbcc1cd43bddp-170, 0x1.9d93ed30cbab9p-292, 0.0, 0.0, 0x1.c5a8d75508795p-613,
     0.0, 0x1.77088d64e7632p-420, 0x1.537cc25f99c2p-882, 0.0, 0.0, 0.0,
     0x1.c91ef39e12f54p-987, 0.0, 0.0, 0.0, 0x1.f874a6afe4517p-745, 0.0, 0.0, 0.0,
     0x1.7534f11caa8cbp-163, 0x1.5836290ed1458p-603, 0x1.c9733358a4ed4p-743,
     0x1.bb259abbf362fp-775, 0.0, 0.0, 0.0, 0x1.77f8d8259ec67p-443,
     0x1.29719afc5d747p-216, 0.0, 0x1.51d741b837a8dp-206, 0.0, 0.0,
     0x1.191c96e978febp-984, 0.0, 0x1.741fd663b39d3p-570, 0.0, 0.0, 0.0, 0.0,
     0x1.56e0a39122ff6p-701, 0x1.6624bb3f7b80ep-194, 0x1.3d1c647e120eap-576, 0.0,
     0x1.152041a2229a9p-548, 0x1.2b87b53a6b672p-878, 0.0, 0x1.031031264a23ep-353,
     0x1.cdf85a8631cd1p-239, 0.0, 0.0, 0x1.d924fe212ffe4p-998, 0.0,
     0x1.ada86d9dcd23ep-865, 0.0, 0.0, 0.0, 0x1.4231468ecdb89p-704, 0.0, 0.0, 0.0,
     0.0, 0x1.c8ee6bb2a1dbcp-53, 0.0, 0.0, 0.0, 0x1.618f7a163a9bap-589, 0.0, 0.0, 0.0,
     0x1.afff0795058ecp-94, 0x1.08e1e656bb0d8p-595, 0x1.b499b56bed913p-7,
     0x1.c5ce020b1408ep-464, 0.0, 0x1.ce8437d7642d8p-488, 0x1.758446ed3a015p-418,
     0x1.4c7b89e60c8dp-515, 0.0, 0x1.f7f85b09ff5e6p-17, 0.0, 0.0,
     0x1.6e79ed3262341p-373, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29fcf1d596865p-115, 0.0,
     0x1.04e78de3b9ef1p-599, 0.0, 0x1.6cdff5252f5ecp-476, 0.0, 0.0, 0.0,
     0x1.3e4a78796829ap-412, 0x1.c0b2f3ec1b20fp-1011, 0.0, 0x1.5ec37a06c3cdbp-763,
     0.0, 0x1.6d429bcb4f992p-91, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a5c1b4369420bp-7,
     0x1.81d8fb75bba4bp-74, 0x1.ba78fabeb58d7p-918, 0.0, 0.0, 0x1.021f0ce82a7dp-36,
     0.0, 0x1.2e4050aa145e4p-294, 0.0, 0x1.a19356505394ep-729, 0.0,
     0x1.880058e584866p-546, 0.0, 0x1.6f08b789e151ep-230, 0x1.af44965799d09p-231,
     0x1.72d788248c0aap-75, 0x1.c3283389e14d6p-448, 0.0, 0.0, 0.0,
     0x1.e08c13371a71bp-890, 0.0, 0.0, 0.0, 0x1.1ae5e553cf872p-593,
     0x1.08c40d8c65541p-227, 0x1.cabdb9d991ca9p-719, 0x1.b48fceaa262f3p-538,
     0x1.2dd18e05d4c2dp-859, 0x1.3d7aa1e0ed75fp-611, 0x1.5339f3441a2a1p-434, 0.0, 0.0,
     0x1.d84dfa820e11dp-156, 0.0, 0x1.d3e4ddbb1a96fp-378, 0.0, 0x1.51014d81909b8p-617,
     0.0, 0x1.89cdc11068468p-112, 0.0, 0x1.bf80518b27f44p-460, 0.0,
     0x1.b388e71b7e072p-805, 0x1.04f549ae61e2ap-219, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ceade20b64a37p-163, 0x1.fa824d7ad6babp-355, 0.0, 0x1.a2b04bbb874fcp-447,
     0x1.2851bea5b2497p-686, 0.0, 0.0, 0x1.7ec0b263d6bcfp-200, 0.0,
     0x1.63fa33f6634aap-451, 0x1.192f22091a06p-575, 0x1.9637fcee56589p-345, 0.0, 0.0,
     0x1.4d85eb0afdfcdp-677, 0x1.47927bb8752e7p-815, 0x1.996d106f1d30cp-504,
     0x1.faeefa62adac1p-31, 0.0, 0.0, 0.0, 0x1.c2da10f1ed125p-416, 0.0,
     0x1.3b38642101e57p-752, 0x1.c4e3f191da572p-400, 0x1.eb7c2713df0dfp-480,
     0x1.1eb6414971f0cp-108, 0x1.d2dfa5cf69f95p-49, 0.0, 0x1.55617ffe17454p-293, 0.0,
     0.0, 0.0, 0.0, 0x1.0683844774125p-992, 0.0, 0.0, 0x1.f965e898cbba5p-575,
     0x1.818835a24114ap-835, 0x1.924c48d19d99p-320, 0.0, 0x1.bba5fea3a2d1ep-412,
     0x1.fcda424c77137p-751, 0x1.ec134ec5192b1p-680, 0x1.c1c74a05c6f1cp-386,
     0x1.27b82b1431f89p-523, 0.0, 0x1.cad6db2e0bbcdp-229, 0x1.4d83d5bfcf5bfp-340, 0.0,
     0.0, 0x1.d3845f60f8ed8p-684, 0x1.94ac10f4f4897p-167, 0x1.9c01fbe933fb5p-70, 0.0,
     0.0, 0x1.d3a98d85ec8a4p-1021, 0x1.2c6284eb0b4b8p-588, 0x1.c01a498a9868ap-62, 0.0,
     0x1.aaf2fc6e14754p-648, 0.0, 0x1.1b57a210b9734p-324, 0x1.2283c0a35822fp-580, 0.0,
     0x1.8cb5ac731ae64p-830, 0.0, 0.0, 0x1.597384188db9bp-513, 0.0,
     0x1.2753253c89708p-51, 0.0, 0.0, 0x1.90a2a3bd02b97p-987, 0.0, 0.0, 0.0, 0.0,
     0x1.2489c0c63cea1p-759, 0x1.bf3d0064a2c4bp-978, 0x1.68f48415beb98p-673,
     0x1.28ed434d3e8a6p-428, 0x1.8d2f7e7abf1e8p-1003, 0x1.e1a31252ec321p-145, 0.0,
     0.0, 0x1.c665819907587p-446, 0x1.0107c55016629p-658, 0x1.018357833e336p-412, 0.0,
     0x1.47c77440ea9f5p-47, 0x1.9c05f763e5a2ap-582, 0.0, 0x1.8aa14f4d709ecp-898,
     0x1.16d3728b055d7p-962, 0.0, 0x1.5786006db785ap-950, 0.0, 0.0,
     0x1.a35ea35e1f06bp-394, 0.0, 0x1.4c766bb09a63dp-472, 0.0, 0x1.da7d0edce7731p-230,
     0.0, 0.0, 0.0, 0x1.09927d81a56edp-42, 0x1.b028344c6d59bp-82,
     0x1.f1683a02f576dp-467, 0x1.616d376c46463p-325, 0x1.427835196b4e7p-781,
     0x1.70c7b91182701p-670, 0x1.17d98acfb62d7p-606, 0x1.3cf11446f359ep-695, 0.0,
     0x1.93a5f35ccb50cp-813, 0x1.625d3ac47a923p-894, 0x1.013c67fa5c5a9p-774, 0.0, 0.0,
     0x1.5d06f4840459bp-522, 0.0, 0.0, 0.0, 0x1.9464ae50ff437p-534,
     0x1.37b52ec661e15p-1014, 0.0, 0x1.a3b56f707fb73p-673, 0.0,
     0x1.47298f1969c16p-131, 0x1.0719ff302f67ep-145, 0x1.f37a575dc35c6p-764,
     0x1.2eb3d349961eep-71, 0x1.43da68c63bff4p-54, 0x1.ef216fe12f15ap-895, 0.0, 0.0,
     0.0, 0x1.c1dee652754fdp-378, 0.0, 0x1.a0bf3f1de691fp-832, 0x1.8b8f1d090e50fp-64,
     0.0, 0x1.0b77419cd268ep-21, 0.0, 0x1.124f0fdbe7ac6p-735, 0.0, 0.0,
     0x1.7fad58c12e838p-232, 0.0, 0x1.221ce30e26825p-59, 0x1.07c221b36531cp-618,
     0x1.67968cac3a9d8p-47, 0.0, 0x1.08b365ab64d48p-709, 0x1.f871a6dc7469fp-751, 0.0,
     0x1.37ed2666f87bbp-303, 0x1.ab28a65f2deacp-437, 0x1.7d2c5aec0105fp-167,
     0x1.b421730b4ac88p-580, 0.0, 0.0, 0.0, 0.0, 0x1.ded09e1a52363p-270,
     0x1.5222dc06fb9a9p-245, 0.0, 0x1.a49b92037cbf3p-331, 0x1.3902739b9d897p-171,
     0x1.666623d5f19f5p-868, 0.0, 0x1.dd3355ac79c76p-591, 0x1.b75c284fd4a5p-764, 0.0,
     0x1.8fab269082f6dp-62, 0.0, 0.0, 0x1.f6afd086c4a72p-282, 0x1.703b239f9e281p-964,
     0.0, 0x1.09ea69a557b82p-17, 0x1.cc8576f3c25b6p-247, 0x1.722a31317beb7p-789, 0.0,
     0.0, 0.0, 0x1.4136aa8c6502cp-492, 0.0, 0x1.2401a5e91d7e7p-214, 0.0,
     0x1.9e3381c0aeb5cp-973, 0x1.477a383a0a0cp-522, 0x1.3f150615b865ep-876, 0.0, 0.0,
     0x1.d408f7f10753ep-328, 0.0, 0x1.fdfdee786b39ep-59, 0.0, 0.0, 0.0, 0.0,
     0x1.eb219a639f08fp-568, 0x1.d88928420bfap-691, 0.0, 0.0, 0.0,
     0x1.01b7876c48488p-151, 0x1.0d1c721d6f0a2p-702, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d4abf63a3f6fap-923, 0x1.8421befa806fap-954, 0.0, 0x1.773f186ca82ddp-914,
     0x1.e41d44521c106p-200
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
            tmp1 = Sleef_coshd4_u10kvx(tmp0);
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
    printf("Sleef_coshd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_coshd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
