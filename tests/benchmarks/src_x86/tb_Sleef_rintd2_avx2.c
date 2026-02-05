/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintd2_avx2128.c --function Sleef_rintd2_avx2128 --headers \
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
     0.0, 0.0, 0.0, 0x1.c50a475b34f5p-974, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.01d2f1e8304a9p-339, 0x1.6a387fe854025p-593, 0x1.1f36adc5f4d54p-26,
     0x1.837f42699711fp-151, 0x1.6ebbf974e1bfcp-471, 0x1.62ae8cbe32ab5p-55,
     0x1.7e7ec5914ee91p-630, 0x1.eb7637b263336p-364, 0x1.a81fb20005ebbp-668,
     0x1.94ae7a24cf93p-995, 0x1.8621591d8a01fp-163, 0x1.e637d6275536ap-5,
     0x1.4408cfe6456bdp-888, 0x1.b243e4df3f0c1p-540, 0.0, 0x1.805a24f430696p-323, 0.0,
     0x1.49bfaaa843cbfp-65, 0x1.c31d010df83d4p-925, 0x1.adeaeb592758fp-222,
     0x1.b28713a257338p-2, 0x1.4d679982dddfbp-607, 0.0, 0.0, 0x1.df82692740e2ep-596,
     0x1.6f7bcbb25f402p-423, 0x1.48742f3c7ef3ap-953, 0x1.c8f4202878b52p-518,
     0x1.3a5f099376b4cp-588, 0.0, 0x1.9d13a5ec9b571p-809, 0.0, 0x1.6d0b41205fc7cp-637,
     0.0, 0x1.75f17204c1472p-693, 0x1.6a81c1fbd2617p-38, 0x1.a94b91ae847c7p-169,
     0x1.65de10f840b1ep-257, 0.0, 0x1.17d370cfa0927p-603, 0x1.4ef65eec97832p-116,
     0x1.f55b908ea620cp-87, 0.0, 0x1.770d247de49f3p-658, 0x1.8f208988ddc98p-217,
     0x1.2cf941923891bp-746, 0.0, 0.0, 0.0, 0x1.bf6720e62b2f3p-544, 0.0,
     0x1.2fb5d7c6fdf95p-820, 0.0, 0x1.f9e3fb7e20106p-951, 0x1.68748c398a64ap-68,
     0x1.771f0465d0799p-485, 0.0, 0x1.430782543308ap-329, 0.0, 0x1.5f2dc37b877fcp-817,
     0.0, 0.0, 0x1.75e82fbe5bdc2p-322, 0.0, 0x1.8f9948e6e0806p-427, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3d54a0eb6c07fp-730, 0x1.bab91112ad6afp-34, 0.0, 0.0, 0.0, 0.0,
     0x1.7116d36d5bc6p-415, 0x1.97a17fe882f25p-992, 0x1.9d7ee835c79b1p-773,
     0x1.a7efa2c81263p-797, 0x1.1c01b4d074325p-882, 0.0, 0x1.2ebe06c1289dep-79, 0.0,
     0x1.ec6a8b5275ddep-984, 0.0, 0x1.02f07c21d9edfp-572, 0x1.a6cadad7589dcp-738,
     0x1.95e9d161fd343p-951, 0.0, 0.0, 0.0, 0.0, 0x1.5e45cd6c1eafdp-625,
     0x1.66a7f07c3e1e3p-315, 0.0, 0.0, 0.0, 0x1.46f813b198ac3p-978, 0.0, 0.0,
     0x1.66d4f23b403b9p-45, 0.0, 0x1.c69aac2452a6ep-531, 0x1.35b4a4c4df88ap-422, 0.0,
     0x1.bd20924f316b7p-102, 0x1.df46a52999406p-38, 0x1.cb1970f6ebf6fp-487,
     0x1.5e2f4291c0145p-896, 0x1.15fc231c2bcbep-882, 0.0, 0x1.895fc3bfaa117p-265, 0.0,
     0.0, 0x1.293403fa65265p-956, 0.0, 0x1.a2aea4edaf99bp-808, 0x1.68026174222cbp-134,
     0x1.ce538d3dcc95ap-788, 0x1.f996657fea1edp-961, 0x1.5595cb49c387ep-197,
     0x1.deddad04dacaap-655, 0x1.8cce05ef45377p-453, 0.0, 0x1.b633d828fe133p-609,
     0x1.cee324415373fp-881, 0.0, 0.0, 0.0, 0x1.fcce1f008f1ffp-103,
     0x1.abde9df1fe137p-735, 0.0, 0x1.e2b2f2216c914p-391, 0x1.28348a098d32ep-444,
     0x1.f551fe9f1d205p-239, 0x1.09eccb814b36cp-891, 0.0, 0.0, 0x1.2f126816e34b1p-503,
     0x1.c25e875de3c49p-574, 0.0, 0x1.a4ff2ab9c5ca8p-788, 0x1.fd012e881f176p-857,
     0x1.a08a598be0bedp-924, 0.0, 0x1.401f39c5b287ap-602, 0x1.292de4bb9af19p-508,
     0x1.a622d87025ae3p-768, 0.0, 0x1.7e93c61764378p-966, 0x1.00f2122459915p-857, 0.0,
     0.0, 0.0, 0x1.c8c248c581113p-63, 0.0, 0.0, 0x1.c6d9ecd5c7e57p-644, 0.0,
     0x1.1e3d33b3cd9b7p-802, 0x1.c16e8190e4e97p-207, 0x1.8dbe304f7aa0fp-272,
     0x1.0b97717e1edf9p-911, 0x1.b90741116463bp-153, 0.0, 0x1.fc1c79bb0adfap-765,
     0x1.ecbd7fb91d914p-19, 0.0, 0x1.f3f171e491679p-833, 0x1.8eec755904cap-430, 0.0,
     0x1.433ef31c71b1fp-334, 0.0, 0x1.85ba5c34fd4cap-143, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94feac4d4c83bp-521, 0x1.478787e6f7447p-763, 0x1.714a070ebd4e3p-558, 0.0, 0.0,
     0x1.a04df1618fe9dp-265, 0x1.ddb4c8c0a2738p-658, 0x1.6252d4cd33ae4p-500, 0.0,
     0x1.43876fd78dc97p-231, 0x1.98a72bc35ba7cp-563, 0x1.5f5ccf107403dp-379,
     0x1.437b580e0e6e9p-866, 0x1.ae8a026094db6p-824, 0x1.e785027bb0616p-430, 0.0,
     0x1.870dd27b3baf6p-679, 0x1.0bfdbf38faabep-703, 0x1.644c8dfd34248p-10, 0.0, 0.0,
     0x1.a7a4bd589a3eep-450, 0.0, 0x1.f0eead16ed72ap-750, 0x1.dda558ee97df7p-344,
     0x1.cd80df3bb37f8p-56, 0x1.1229853db3f09p-6, 0x1.e3c9a3ed95c67p-296, 0.0, 0.0,
     0x1.d491c5138a394p-483, 0.0, 0x1.bbcfd72b790c1p-656, 0x1.33ee86b9d7c6cp-663,
     0x1.3f38970f33596p-342, 0.0, 0x1.c79bd59a5239p-382, 0.0, 0x1.d7411d73d7d98p-82,
     0.0, 0x1.5f45eaa1f57d8p-284, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5dbc6820e0118p-494,
     0.0, 0.0, 0.0, 0x1.7a99658f8d0cfp-758, 0.0, 0.0, 0.0, 0x1.ef3834b8279ebp-194,
     0x1.d4664e4da497ap-444, 0.0, 0x1.6b3d7e6924cdbp-333, 0x1.679f415b617bfp-595, 0.0,
     0x1.f6e7b9a08bf72p-841, 0.0, 0.0, 0x1.4291a0e8b89c2p-209, 0.0,
     0x1.425df3733ba88p-846, 0.0, 0x1.3b7d13e3ff256p-1017, 0.0,
     0x1.680f88943c07fp-565, 0x1.7fdd3104fdab6p-199, 0.0, 0.0, 0.0,
     0x1.9c8bf7476c697p-48, 0.0, 0x1.0f4324d07c9f8p-121, 0.0, 0x1.0cc32f5d5154cp-440,
     0x1.f05bba72d753p-544, 0x1.f4a78b4d09bf5p-191, 0.0, 0x1.d58e8f5c8087ap-275,
     0x1.8c65237b7ea57p-963, 0.0, 0.0, 0.0, 0x1.159e01b9c6511p-510, 0.0,
     0x1.b462f28bb93b4p-450, 0x1.af7b7c0fd8913p-482, 0x1.c17376075cee3p-19, 0.0,
     0x1p0, 0.0, 0.0, 0.0, 0x1.520a386d83b1fp-54, 0x1.97dadb0caddcfp-1000,
     0x1.cf32f0b43ef94p-1013, 0x1.94273d5240fb1p-122, 0x1.d3662e37af4c4p-72, 0.0, 0.0,
     0.0, 0.0, 0x1.4f4fe936fe175p-490, 0x1.42e25810546b3p-717, 0x1.6007c77f9bd0bp-913,
     0x1.9dd06134828b4p-550, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e10dd83d6373p-910, 0.0,
     0.0, 0.0, 0x1.59e88632da5ap-544, 0x1.f178241d9cf36p-11, 0x1.a0163f0efecbap-915,
     0x1.a2a52e9f7f2d7p-73, 0.0, 0x1.481a6e35414a3p-689, 0x1.0a2f33eb79396p-248,
     0x1.22b206f292cc1p-91, 0.0, 0x1.37a3cbfcb7164p-961, 0x1.ffaac5dc9c7cfp-870, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bfbf81e89d974p-249,
     0x1.7218c9524b568p-533, 0x1.5490cb9e1b483p-845, 0x1.5560ddab8be21p-619, 0.0, 0.0,
     0.0, 0.0, 0x1.73de366b91be4p-887, 0x1.7dc4133767492p-425, 0x1.1474240178daap-425,
     0x1.4e27e9115379bp-686, 0.0, 0x1.643ec6fd181e9p-195, 0.0, 0x1.e27d003d32ab8p-121,
     0x1.cafae4de7d12bp-19, 0x1p0, 0x1.0a41e91b8e59bp-582, 0.0, 0.0,
     0x1.9cc70084bf3e4p-547, 0.0, 0x1.cf8181293a6c6p-518, 0.0, 0.0,
     0x1.56861d96f6d7ap-244, 0.0, 0x1.ad517b66cfc45p-411, 0.0, 0x1.d0b0c5d89fa7p-306,
     0.0, 0x1.5ae1f8f1da7b3p-689, 0.0, 0.0, 0x1.51e945015743fp-332,
     0x1.25d300e3f97dfp-336, 0.0, 0x1.b45cf92ea89c9p-987, 0.0, 0.0,
     0x1.53f4fda25c85ap-813, 0x1.7c67ec0b50212p-89, 0x1.714c0ffe3f5c6p-296,
     0x1.312bd1c593d96p-479, 0x1.c6f492f4d5a8bp-914, 0.0, 0x1.77b91dc075c1p-429,
     0x1.b693fb0927308p-777, 0x1.66af04f8dbe62p-11, 0.0, 0x1.b0c0e9c842ffp-302,
     0x1.05ed9584a0121p-324, 0.0, 0x1.34b4d93fda899p-15, 0.0, 0.0,
     0x1.0566cf77c6a7fp-257, 0x1.b290d8a4bae33p-960, 0.0, 0x1.1269ae1a5295bp-656,
     0x1.b59e12c5459a1p-476, 0x1.a10d135da7416p-310, 0.0, 0.0, 0.0, 0.0,
     0x1.adae8052ccb4dp-729, 0x1.dff7a6f417f72p-1013, 0.0, 0x1.cc83e4acf4119p-133,
     0x1.18ce9019d0175p-459, 0x1.2ed71947cf4a3p-108, 0x1.c72dfde84e871p-238, 0.0,
     0x1.0677c3a5ae61ap-908, 0.0, 0.0, 0x1.ea8fe64413765p-291, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.aaf8f3e8948b8p-827, 0x1.7a6e026472602p-248, 0.0, 0.0,
     0x1.5016a264c32fep-902, 0x1.b523f24e858p-969, 0.0, 0.0, 0x1.0e53af1da97dcp-507,
     0.0, 0x1.1d7586c476cebp-450, 0x1.c595bf2b93342p-13, 0.0, 0.0,
     0x1.8558fb7b9b7abp-128, 0x1.c0403d063a13cp-540, 0.0, 0x1.8073de5a7c16p-191,
     0x1.75bc8a4acb5b8p-830, 0x1.cc132d8b9ef29p-582, 0x1.0fdc3a13d284fp-391, 0.0, 0.0,
     0.0, 0.0, 0x1.5721a2990bd1dp-859, 0x1.42c97e8348101p-169, 0x1.36b2ce1246634p-827,
     0x1.3b61ab519ad08p-836, 0x1.40c2c6a993cfap-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.44f22b12856a2p-75, 0x1.4be93f7e7a3c3p-816, 0x1.4608e3cec7a45p-624,
     0x1.2a6844990f718p-48, 0.0, 0x1.fe5f6445c99e6p-113, 0x1.abe94d639e212p-829, 0.0,
     0.0, 0x1.e8fb34fcf5656p-37, 0x1.35b0d196e63fep-679, 0.0, 0x1.e7f219aaadc45p-615,
     0x1.bed953ddda2bfp-18, 0.0, 0x1.bfc0a64ddd39bp-439, 0x1.5e5d96f1ebe13p-883, 0.0,
     0.0, 0.0, 0x1.ecdebdf0358edp-185, 0.0, 0x1.1736e3b9d9ce9p-566, 0.0,
     0x1.64c1744dd4694p-290, 0.0, 0.0, 0x1.be932a29a9216p-306, 0x1.f75c2f4555d3dp-817,
     0.0, 0x1.1d426f5fa240ap-286, 0.0, 0.0, 0.0, 0.0, 0x1.a4c48d047da6ap-376, 0.0,
     0.0, 0x1.d0d9743e3b958p-552, 0.0, 0x1.726705d5d03cap-966, 0.0,
     0x1.0f3afe97ec919p-528, 0x1.e8310554a8885p-690, 0x1.2e1a5d55d4787p-803,
     0x1.c1b24633ffbcdp-885, 0.0, 0.0, 0x1.a8dfe3f293e0ap-66, 0x1.90ba8b226810ap-844,
     0x1.6b11792530594p-232, 0.0, 0x1.40d0c24439879p-824, 0x1.c881dc93dd98p-976,
     0x1.e9ef01ac75ae5p-543, 0x1.5087245c9e7dep-175, 0.0, 0x1.f97ef207cb79fp-476, 0.0,
     0.0, 0.0, 0x1.9b356283f4ee1p-419, 0.0, 0x1.af3fe269d725bp-825, 0.0,
     0x1.cd69dd54c7cebp-286, 0x1.f8ba7460bee2dp-857, 0x1.c94e379514268p-8,
     0x1.0dee7302d4d1dp-1014, 0x1.432d7d5b71b88p-509, 0.0, 0.0,
     0x1.4353136c2c10cp-356, 0x1.86b504f61a1adp-742, 0.0, 0x1.7565f62862c66p-556, 0.0,
     0x1.471e73f149117p-728, 0x1.4be02ba1e37ccp-659, 0.0, 0.0, 0.0,
     0x1.94a78d4983aa9p-481, 0x1.49ad5d68e88c2p-60, 0.0, 0x1.570927aef08cap-741, 0.0,
     0.0, 0x1.5ed06b12c77e8p-984, 0x1.83f41b8ebba58p-116, 0.0, 0.0,
     0x1.1526120f22677p-526, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ad897c611101ep-290,
     0x1.cf06c6d7aeee8p-671, 0.0, 0x1.8255a74ddb94p-181, 0x1.05baed64ed319p-844, 0.0,
     0x1.98dc7f608201fp-896, 0.0, 0.0, 0x1.9e2fae461e472p-694, 0.0,
     0x1.e8e1a858960d5p-343, 0.0, 0x1.9beb53e38c06bp-293, 0.0, 0x1.9d0427475bd87p-466,
     0.0, 0x1.96ee0fb28a249p-12, 0.0, 0.0, 0x1.d863b96e09a7p-1014,
     0x1.0a6545a3df62ap-471, 0x1.4e0d14f1740c7p-95, 0.0, 0.0, 0x1.01ce1127eda23p-246,
     0x1.8b0e8d7a3dbap-151, 0.0, 0.0, 0.0, 0x1.1a759284aa8fp-165,
     0x1.fc5d00cbc7fe5p-601, 0x1.a878a117fa39dp-611, 0x1.688864d35d2c4p-303, 0.0,
     0x1.107fe459a76c2p-460, 0x1.7351e0c1b0f6fp-988, 0x1.48babc8c7f148p-781, 0.0, 0.0,
     0x1.6600a382451e8p-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d89a4a9833b7p-613,
     0x1.15b3faa2a3053p-488, 0x1.f1dbcb6886031p-99, 0.0, 0x1.8ae01ab904ad5p-925,
     0x1.964913d9a918ep-572, 0x1.f03412e0c9b9ep-534, 0x1.86c1547295322p-419,
     0x1.ef603eb9ad797p-531, 0.0, 0x1.283b8f9504d1ep-232, 0x1.28af76b70e38ep-34, 0.0,
     0x1.7622d96cc20ap-110, 0.0, 0x1.c8660be9e056ep-108, 0x1.058a7bcba5f1fp-633, 0.0,
     0.0, 0.0, 0x1.344ba71590f3p-547, 0.0, 0x1.788d0202f1c7bp-271,
     0x1.cfdc4c81cddc4p-51, 0x1.5cde8b540dcdbp-241, 0x1.097f08cf5765bp-367,
     0x1.82964a8897d89p-886, 0.0, 0.0, 0.0, 0x1.1cba339d671bcp-75, 0.0, 0.0,
     0x1.7afb6ac1e9cbep-991, 0x1.74c9ddd1a2801p-645, 0.0, 0x1.2776d01e30c1bp-111, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e06631bcc36cp-330,
     0x1.e597d6e4c8011p-395, 0.0, 0.0, 0x1.8a3a660618a95p-256, 0x1.5728431abb3bep-22,
     0x1.17010b80b5c4p-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.160c25df2c29ap-617, 0.0,
     0x1.0d444a2ab8e9ap-415, 0.0, 0.0, 0x1.11ed2f8adc1c4p-722, 0.0,
     0x1.7414102027fb3p-716, 0x1.98c839ea0da5ap-1019, 0.0, 0.0, 0.0,
     0x1.aa34483ef0d1cp-831, 0.0, 0.0, 0x1.75903337bc7fdp-970, 0x1.694dc571d28b1p-50,
     0x1.21038487cfcf9p-570, 0x1.7732d6778cd96p-839, 0.0, 0.0, 0.0,
     0x1.5b66497d49ccfp-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86793c3fe9338p-183,
     0x1.96f0805646839p-601, 0x1.0d8a1a513daf1p-895, 0x1.2c6661c5b38ccp-83, 0.0, 0.0,
     0.0, 0x1.8a0060f753197p-591, 0x1.aa46b7c7eb1edp-960, 0.0, 0.0,
     0x1.cd1a213dcb46ap-119, 0.0, 0.0, 0x1.f875e2d8ccdf7p-965, 0.0, 0.0, 0.0,
     0x1.0e18c9464bf9p-76, 0.0, 0x1.f160ffcf0a7e2p-769, 0x1.909ebab7e23d9p-199, 0.0,
     0x1.336ddcc84aac8p-477, 0.0, 0x1.ae215d7677e64p-227, 0.0, 0.0,
     0x1.34662dfb8407ap-803, 0.0, 0x1.fad8047ea053p-469, 0.0, 0x1.93c0422256205p-102,
     0x1.46d31379be41p-307, 0.0, 0x1.1c18a3ebb6dd3p-832, 0.0, 0x1.e501631ee7455p-147,
     0x1.e9bb5e19ce46ep-40, 0x1.26e7f09cf5d1p-281, 0x1.d9a9a5e2cb914p-294, 0.0, 0.0,
     0x1.edea469e9a313p-856, 0.0, 0x1.d743b0e0c6fdap-246, 0x1.95a8c88a6b3cep-233,
     0x1.6dec02476efep-696, 0.0, 0.0, 0x1.4c32e05b90315p-988, 0.0, 0.0, 0.0, 0.0,
     0x1.85b500c5a691ap-20, 0x1.0637830c5a232p-314, 0.0, 0.0, 0.0,
     0x1.6be9a07cb78c7p-809, 0.0, 0x1.3e42d2eafd755p-77, 0x1.edbac39674b95p-165,
     0x1.c1708b1b9329fp-1016, 0.0, 0x1.3606da61670dap-301, 0x1.7e37e6d5067c3p-230,
     0x1.b3ce743a3ce83p-910, 0x1.1205e6704a546p-294, 0.0, 0x1.10ba4d7ba8cb9p-920,
     0x1.e979b6b19cd51p-601, 0.0, 0.0, 0.0, 0x1.7efce8fcc64c4p-763, 0.0,
     0x1.6418546abdbf7p-820, 0.0, 0x1.7a74b786ebc51p-326, 0x1.06a24c13b61cep-131,
     0x1.1f5315bbf979ep-274, 0x1.fb10ae6032168p-673, 0x1.30921e8e94912p-1022, 0.0,
     0x1.7c40f50b9ce03p-593, 0x1.d612d0b1170dp-291, 0x1.088fc85008899p-57, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.09120eff0d2efp-28, 0x1.b4fc923e18b8fp-806, 0.0,
     0x1.572a251fe66b7p-862, 0x1.c79c96081fccap-15, 0x1.f61a75b5ae198p-856, 0.0, 0.0,
     0.0, 0x1.91f974f4f8023p-49, 0.0, 0.0, 0x1.d84ffacb283afp-704, 0.0, 0.0,
     0x1.96b0d69ce2d7dp-610, 0x1.d0bafe60306e7p-489, 0x1.faa472d6c62fdp-167, 0.0, 0.0,
     0x1.d337fde9a6e15p-723, 0.0, 0x1.6abc85109f37bp-343, 0x1.d7faefd8dd894p-764,
     0x1.9012a0f72762fp-878, 0x1.7e43e6ab66d87p-388, 0.0, 0x1.bb73e78ec0bb8p-673, 0.0,
     0.0, 0.0, 0x1.5ada8752cf7cfp-496, 0x1.460be8c1886cep-562, 0x1.b98c4ee029a72p-475,
     0x1.d57998e7c1307p-741, 0.0, 0.0, 0x1.b68b1093ebf21p-447, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8ef4a08839874p-922, 0.0, 0x1.61ad4d54d0c06p-310, 0x1.410e89d23e91ap-356,
     0x1.27a45960e8aaep-997, 0x1.d6c2679d46256p-653, 0x1.37bc0abdd801fp-478,
     0x1.6596873d918fep-214, 0.0, 0x1.110b335c81f51p-164, 0.0, 0x1.afc3f80c64844p-963,
     0.0, 0x1.5c2cb674bc06ep-29, 0x1.cb0d6a3ab3956p-697, 0x1.c892720e6ef59p-183,
     0x1.c117f6cafd6a2p-251, 0x1.e4b1c8c4afeeap-93, 0.0, 0x1.7abd399257e1ep-2,
     0x1.883a1e63a1dfdp-879, 0x1.abcd0bb4e8e54p-253, 0x1.bc520afc0e0a6p-278, 0.0, 0.0,
     0x1.c3d1f6f1a13f5p-776, 0x1.979cd36964dd7p-161, 0x1.fa2485b76b79fp-86,
     0x1.1745363936858p-191, 0.0, 0x1.04627a689d8dap-944, 0x1.64d001c0a9d6p-855,
     0x1.9646d748eb2b1p-239, 0x1.5b2ac1a4774f1p-436, 0.0, 0x1.e4f3e99716d3fp-306, 0.0,
     0.0, 0x1.e29bb14095b6ep-965, 0.0, 0x1.2bfeba074e6dbp-103, 0x1.314fb70399a73p-847,
     0.0, 0x1.05dc2ed22b93ap-70, 0x1.8fe95eb4ab9e6p-654, 0x1.e13fca2de2105p-264,
     0x1.120588eaa64d8p-944, 0.0, 0x1.aa5533b6adfd1p-1006, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6f5bed5a3143p-3, 0x1.c5e851cce8149p-291, 0x1.4dccde3c30d33p-333, 0.0,
     0x1.ea9bc1199439bp-686, 0.0, 0.0, 0.0, 0x1.d3be95d19fb76p-182,
     0x1.b6af14cf47b6ap-768, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.03145a1acf5abp-466, 0.0,
     0x1.cc31654e5e6ep-611, 0x1.2644cee983389p-684, 0.0, 0.0, 0.0, 0.0,
     0x1.9d67165ca6cb9p-198, 0.0, 0x1.e8264da8c5095p-843, 0.0, 0.0, 0.0,
     0x1.2b22a6f60935bp-55, 0.0, 0x1.0f5542b23e365p-706, 0.0, 0.0,
     0x1.4ce443f87b745p-516, 0x1.8be5dd3274bafp-872, 0.0, 0.0, 0.0,
     0x1.7967624d40425p-81, 0.0, 0.0, 0x1.4b17e6e32606cp-265, 0x1.236ab75d8f621p-657,
     0x1.39a04a26b7d08p-348, 0.0, 0x1.62807986e0389p-64, 0.0, 0x1.b1b319e4bea39p-474,
     0x1.ec79c1a63261p-254, 0x1.40f1d7ea35949p-109, 0x1.91d0303fd3adep-308, 0.0, 0.0,
     0.0, 0x1.f27976eb83789p-429, 0x1.c6f37a6277f1cp-807, 0.0, 0x1.4431d5db53105p-938,
     0.0, 0x1.4f989d3c69e87p-230, 0x1.7a4a422692bep-292, 0x1.bfd756293387ep-926,
     0x1.f4644fcc74ec3p-776, 0x1.74f0afe51b2p-560, 0.0, 0.0, 0x1.a2fc53f12b432p-881,
     0.0, 0x1.d7ae26c1f5bfbp-823, 0x1.30100e504898dp-419, 0.0, 0x1.2942f641d1cdap-735,
     0x1.5bea422ad837ap-903, 0.0, 0x1.3392486fbc688p-472, 0x1.db6ab3c28b7d7p-309,
     0x1.9285fd68e63cdp-71, 0x1.c321616da9b02p-399, 0.0, 0x1.51ea38c8e0334p-786, 0.0,
     0x1.8e5f31b3c5751p-698, 0x1.cc9ed8e2ccdc5p-279, 0x1.1690557b13bf8p-515, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24f3d4dcf6d06p-539, 0.0, 0.0, 0.0, 0.0,
     0x1.2f67e24f84a2ap-377, 0.0, 0.0, 0x1.d3a7fe308bf72p-97, 0x1.057f7205fb24fp-209,
     0.0, 0.0, 0x1.a407daee10327p-321, 0.0, 0x1.cf331a18c367ap-188,
     0x1.b57f310444f85p-979, 0.0, 0x1.f84dff5741f45p-268, 0.0, 0.0, 0.0, 0.0, 0x1p0,
     0x1.1fe04a136ae01p-201, 0.0, 0.0, 0.0, 0.0, 0x1.87b4a8ae0de34p-757,
     0x1.153c4568c717p-711, 0.0, 0.0, 0.0, 0x1.07978d2871653p-957, 0.0, 0.0, 0.0,
     0x1.c201698ed3c1ap-600
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
            tmp1 = Sleef_rintd2_avx2128(tmp0);
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
    printf("Sleef_rintd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_rintd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
