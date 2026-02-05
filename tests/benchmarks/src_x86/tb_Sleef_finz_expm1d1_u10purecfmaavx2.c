/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1d1_u10purecfma.c --function \
 *     Sleef_finz_expm1d1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0x1.c1f832841b0fp-778, 0x1.0de10142c33a9p-856, 0.0,
     0x1.a2a722c2079f6p-770, 0.0, 0x1.c2c350345c768p-664, 0x1.01ea465f45be9p-923,
     0x1.2e3224d5fc668p-910, 0x1.5a375ac30012cp-88, 0x1.b7903e6af76a1p-609,
     0x1.5171857857bd6p-982, 0.0, 0.0, 0x1.f4cdd326243d5p-873, 0.0,
     0x1.9a336c4afa9b5p-88, 0.0, 0x1.5722550627be8p-216, 0x1.98273561ae0dcp-456, 0.0,
     0.0, 0.0, 0.0, 0x1.bfaad6131a612p-65, 0x1.8020678354bfbp-468,
     0x1.1367aecb8dbd2p-627, 0.0, 0.0, 0x1.4543e44d70b96p-371, 0x1.ae39d57062d43p-321,
     0.0, 0x1.8dacaa8077e6fp-134, 0.0, 0x1.53cd9c3d877dfp-547, 0x1.da9ddfbfcf401p-963,
     0x1.48577caf24817p-647, 0x1.73f24e0207ebp-816, 0.0, 0.0, 0x1.55ed40711c2p-887,
     0.0, 0.0, 0x1.aa10723f4d5d2p-703, 0.0, 0x1.38d3aa126e976p-366, 0.0,
     0x1.0e967db3e6d4ep-694, 0x1.5645f090c8388p-738, 0.0, 0.0, 0x1.5057d30cb5054p-476,
     0x1.89b9b4624e75fp-681, 0.0, 0x1.f58ee028c45edp-330, 0.0, 0x1.0fa33818e8cdp-878,
     0x1.23d4e4e9f31c8p-926, 0x1.baa01293d766cp-952, 0x1.836d9415a8f58p-575,
     0x1.184bb53d94835p-787, 0x1.ab7990453a3d5p-548, 0.0, 0.0, 0.0,
     0x1.758376d0b26ecp-965, 0x1.86d1b2f356be4p-737, 0x1.6ad71b69e75d9p-29,
     0x1.36136888a11c8p-832, 0.0, 0.0, 0.0, 0x1.42bee991c314ep-299,
     0x1.5ceb900d10c1fp-261, 0x1.f0340b07b4bdep-131, 0.0, 0x1.f9256d6015698p-611,
     0x1.04c40ade305f8p-495, 0.0, 0.0, 0x1.95994d7ec7bcfp-645, 0x1.6ef25641527d4p-304,
     0x1.76a40711502cbp-46, 0x1.5087be55608d1p-451, 0x1.9a60cd869d3p-78, 0.0,
     0x1.5d05c86882b33p-193, 0x1.5998814c6fb02p-464, 0x1.ff87d94b0da0ep-713, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5933803d2d984p-634, 0.0, 0x1.467593733edbap-249,
     0x1.7e43aa97b6129p-627, 0x1.d64a5b75bb2b3p-959, 0x1.b5d35942d3a5dp-665,
     0x1.ed69476d5b9fap-807, 0.0, 0.0, 0x1.a61a9ee8a72dp-276, 0x1.442e71bc39167p-274,
     0.0, 0.0, 0x1.f37de22678eecp-964, 0x1.9465600d6ca1p-446, 0x1.de1b55c87b343p-859,
     0.0, 0.0, 0x1.22143f826788bp-680, 0.0, 0x1.abe409dcd2505p-657, 0.0, 0.0,
     0x1.b81f542671ec3p-397, 0.0, 0.0, 0.0, 0x1.37bd436168e25p-578, 0.0,
     0x1.ae8d2ad21a7d8p-371, 0x1.970ca8d475d7dp-288, 0.0, 0x1.fb5e036a7f09cp-324,
     0x1.3d45b21c0f2b1p-514, 0.0, 0x1.6c3f76faed6dcp-218, 0.0, 0.0,
     0x1.3aa6a1adf7522p-467, 0x1.0ed1ae41af395p-594, 0x1.95b1a59cd09ep-957,
     0x1.de7d926c9f1a5p-144, 0x1.adb4d058ef2e9p-257, 0.0, 0x1.1f0e80bf63544p-426, 0.0,
     0x1.99b75d9ff5b42p-1016, 0.0, 0x1.2211743ff0937p-132, 0x1.292870a5f40ebp-407,
     0x1.48ed1c7874684p-790, 0x1.0ec64cff586fdp-93, 0x1.de9ec8c6f9e8bp-302, 0.0, 0.0,
     0x1.f499d818fcc3fp-618, 0.0, 0.0, 0.0, 0x1.35323e96b0fd7p-795,
     0x1.d6136e131e6cap-872, 0x1.66e1c14be0952p-982, 0.0, 0.0, 0.0,
     0x1.48eaceedac269p-745, 0x1.e8ff69d38dd42p-319, 0x1.7a84c05de7cfp-87,
     0x1.1fcd59273db58p-610, 0x1.492d199aea737p-168, 0.0, 0x1.ed34e8bfa023fp-886,
     0x1.04133d22d7a16p-45, 0.0, 0x1.22610ed724033p-435, 0.0, 0x1.cdcb3bc89e96bp-650,
     0x1.a560c1e75fcdfp-529, 0x1.b0d7857c74e35p-778, 0x1.f8d98dc80a897p-776, 0.0,
     0x1.b4013990b3b2p-700, 0x1.d3af25ee719f5p-358, 0.0, 0.0, 0.0, 0.0,
     0x1.6f2df7ab369fcp-856, 0.0, 0x1.4322b43ff1e19p-605, 0x1.536c471ef00edp-517,
     0x1.0da8f52ee7309p-851, 0x1.a3c17fe1eb56ap-661, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e1f691934df6fp-951, 0x1.cb23b3114377bp-688, 0.0, 0.0, 0.0,
     0x1.43e8589e3170cp-375, 0.0, 0.0, 0.0, 0x1.31e721cbf0896p-652,
     0x1.ad9e515e98912p-871, 0.0, 0x1.be0640fc32f9p-735, 0.0, 0x1.676dd19ff6662p-897,
     0x1.b67aa069b36e7p-7, 0.0, 0.0, 0x1.beba300f329acp-340, 0x1.91666cdda1f09p-675,
     0.0, 0x1.10be920c335d8p-440, 0x1.081342b9594f7p-856, 0x1.ea2dd8f3affdbp-535, 0.0,
     0x1.d51d66d33d41ap-926, 0x1.d052b916ce281p-539, 0.0, 0.0, 0.0,
     0x1.07a1f77def796p-598, 0.0, 0.0, 0x1.39a84874d20dcp-393, 0x1.d0193aba824c2p-869,
     0.0, 0.0, 0x1.d655130447f66p-92, 0x1.c3407e3055c7ep-687, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2a822a3fd3aa2p-739, 0.0, 0.0, 0x1.2d8867f69d762p-786, 0x1.260c961c30999p-769,
     0.0, 0.0, 0x1.f14132cead122p-234, 0x1.76bf4fe25bfc5p-425, 0.0,
     0x1.daab33132fdd6p-72, 0.0, 0x1.34a62dc72ff36p-958, 0.0, 0x1.c0f1707826759p-625,
     0.0, 0x1.b54e05e82c713p-402, 0.0, 0x1.bb2b499c8c23cp-125,
     0x1.5dd19701cdc47p-1015, 0.0, 0.0, 0.0, 0x1.574528555fc27p-254,
     0x1.1c7d6fba26623p-919, 0x1.07c3f8a708e13p-60, 0.0, 0x1.7748f60562e9dp-589,
     0x1.a221420cb8aacp-31, 0x1.1a534206deb87p-317, 0.0, 0.0, 0x1.d929c1b39de44p-50,
     0.0, 0.0, 0.0, 0x1.956d05da08defp-383, 0.0, 0.0, 0x1.70d4b4797089fp-688, 0.0,
     0.0, 0x1.7fe73bfb3b30dp-617, 0.0, 0.0, 0x1.c4006ec6460afp-114, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.09fe55e8ce2e8p-488, 0.0, 0x1.57b0a815f5262p-348, 0.0,
     0.0, 0.0, 0x1.21312cfa3e244p-396, 0x1.f2ab947cb9794p-32, 0x1.1e7a19aa07f03p-466,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9dae0ee6fc12p-813, 0x1.b464892d1ab19p-20,
     0.0, 0.0, 0.0, 0.0, 0x1.6e34f6274da2p-307, 0.0, 0x1.add20653aeb44p-313,
     0x1.c2478bfa23c0ep-43, 0x1.b67ca65f78f87p-1002, 0x1.44bc0e947702ep-643,
     0x1.90648c6ae7d12p-305, 0x1.fcbf727f2a8e6p-931, 0.0, 0x1.91d1fd7e3cdc9p-738, 0.0,
     0.0, 0x1.773ddfaa79411p-225, 0x1.d28cf0327f084p-818, 0x1.591a8e8123da2p-620, 0.0,
     0x1.43f7498912f5p-695, 0.0, 0.0, 0.0, 0.0, 0x1.0513c83da0311p-77,
     0x1.168a8fadb7203p-170, 0.0, 0x1.0162dbe544f21p-796, 0.0, 0.0,
     0x1.872a0d544fd26p-648, 0x1.68718ca48f3a8p-858, 0.0, 0x1.e4f4fa27f495fp-258, 0.0,
     0.0, 0.0, 0.0, 0x1.04279443b9058p-744, 0x1.f83a4dccd183ap-294, 0.0,
     0x1.2660b1fe6f818p-100, 0.0, 0x1.6c0505125d394p-873, 0x1.e385c9482b424p-841,
     0x1.5964c3676ddc9p-376, 0.0, 0x1.9622e889d3383p-596, 0.0, 0x1.2805c1d1a41a3p-740,
     0.0, 0x1.892ff45752f2ep-701, 0x1.c4f1697dd2cedp-926, 0x1.010d4614f0d29p-179, 0.0,
     0x1.088f809d5d88fp-1007, 0x1.d99490b1fef98p-171, 0.0, 0.0, 0.0,
     0x1.a4043b7dbb0bcp-817, 0x1.0109f31371457p-649, 0x1.a1b136aeaca5cp-960,
     0x1.78950388b00e9p-435, 0.0, 0x1.41bd293380ba2p-560, 0x1.6dd62aa0e36a2p-483,
     0x1.0d90dc845e161p-1018, 0x1.4b103ebb44357p-769, 0.0, 0x1.734840dff8f15p-92,
     0x1.27ab5605deb25p-424, 0.0, 0x1.d8dbf06655cecp-756, 0.0, 0x1.4b8e401a91691p-940,
     0.0, 0x1.16dda8cff1c8ep-175, 0x1.a65a5ecd2c90dp-177, 0x1.1db3ca231f76ep-575, 0.0,
     0.0, 0x1.61e122397897ap-783, 0x1.c2c8b90b868dap-678, 0x1.469cf4f35aea7p-361,
     0x1.02acd195896f9p-930, 0.0, 0x1.84ad083be608dp-708, 0x1.21bd6f5bedb99p-372, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.eb4eb5dc940cep-884, 0.0, 0x1.9366b4e0db9efp-612, 0.0,
     0.0, 0.0, 0.0, 0x1.9fdffa2e444c6p-306, 0x1.f562d65ad0155p-898,
     0x1.02087a4edaad5p-764, 0x1.d9ba03cd25e97p-815, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.56e0a0c7a1a9ep-360, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.531c6763db0edp-977,
     0x1.ea30eaef888eap-694, 0.0, 0.0, 0x1.fe99e33537111p-699,
     0x1.a298cc8f36a2cp-1005, 0x1.9551440c425d1p-768, 0x1.c35600376b7ep-639,
     0x1.4d26aecec0e7fp-388, 0x1.de3a97c601b8ep-988, 0.0, 0x1.8d7d7b16d67bfp-465, 0.0,
     0x1.4c9571f57a8c9p-604, 0.0, 0.0, 0x1.efcc767491144p-453, 0x1.6408edca92eadp-378,
     0x1.f339667244842p-714, 0x1.ad5e37268c3b1p-326, 0x1.ccdcce7b498e3p-427, 0.0, 0.0,
     0.0, 0x1.940695e154148p-60, 0x1.d206d1e916b2cp-537, 0.0, 0x1.e5615af704f8cp-780,
     0.0, 0.0, 0.0, 0.0, 0x1.a820935d66597p-978, 0x1.086529e4af95fp-798, 0.0, 0.0,
     0.0, 0.0, 0x1.d8a036411ff7ap-378, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.647d4d8f50b32p-575, 0x1.df2046f01141ep-496, 0x1.a9966edbf331cp-364, 0.0,
     0x1.88026b4a22f04p-870, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48e473765968fp-723, 0.0,
     0.0, 0.0, 0x1.79734d76c011cp-621, 0.0, 0x1.fcf69bfcd1816p-642, 0.0, 0.0, 0.0,
     0.0, 0x1.8c7c86e7584a4p-573, 0x1.cab6d422f5c9cp-573, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1df68fa8b4cccp-923, 0x1.87257d254b0b3p-423, 0.0, 0x1.79022b5cfa4cep-65,
     0.0, 0.0, 0.0, 0x1.b4689334d8c48p-838, 0.0, 0.0, 0x1.5678722b615bcp-691, 0.0,
     0.0, 0x1.f939c079ac0e2p-396, 0.0, 0x1.a70aad53dca44p-242, 0x1.121922c3ebfc8p-456,
     0.0, 0x1.5698de9a48cfep-100, 0.0, 0x1.6d7ddf28f5f3cp-728, 0.0, 0.0,
     0x1.2870e87bb5e53p-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a7f3ae5427a86p-12, 0.0, 0.0,
     0.0, 0x1.b6b8284a83ca5p-308, 0x1.ba3c5d9295f2ap-657, 0x1.feb01ec4cef55p-681, 0.0,
     0x1.abc3352e58311p-179, 0x1.12880aec06658p-412, 0.0, 0x1.68089397050bbp-598,
     0x1.7ee52d4e24c37p-75, 0x1.b010d999b2c67p-641, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b0bb82a4c8b8p-836, 0x1.4e9c9ce5154a7p-156, 0x1.40842d839def6p-285, 0.0, 0.0,
     0.0, 0x1.c4858553a7388p-514, 0.0, 0x1.04ad4180181c5p-232, 0.0, 0.0, 0.0, 0.0,
     0x1.e423223bf28ddp-904, 0x1.d1f6d3b81bb33p-552, 0.0, 0x1.85d228f564b76p-952,
     0x1.8b07dfb086666p-164, 0x1.51a56539fbc93p-576, 0.0, 0x1.3441c15e1469dp-157,
     0x1.3ffbec3459695p-82, 0x1.a943657f0bbabp-669, 0.0, 0x1.67d8a6ff7603ep-145,
     0x1.de59b3d3e7124p-209, 0x1.e2e4029bc466ap-1007, 0x1.3ab8b71197e5ep-608,
     0x1.a0671c0a5b4c2p-696, 0x1.4229d4b3e36b7p-290, 0x1.8d683bf55187cp-809,
     0x1.d1c19b6519b24p-506, 0.0, 0x1.2e9493554ccfcp-664, 0x1.f85b65ce3bc6cp-312,
     0x1.e52bd9fc30391p-938, 0.0, 0.0, 0.0, 0.0, 0x1.434327648a363p-471,
     0x1.1ad9e86ee3168p-547, 0x1.a88a53ac0a02bp-896, 0.0, 0x1.630c67e19f2d5p-433, 0.0,
     0.0, 0x1.099dc3afd7736p-740, 0.0, 0x1.cabd4e97d0606p-476, 0.0,
     0x1.0fd7640c46dbp-932, 0x1.f025f04e5c6b3p-587, 0x1.a2a78d629cb4dp-343,
     0x1.f73d3b8a5acf1p-55, 0x1.5e9e4f8d391a6p-903, 0.0, 0.0, 0x1.d84f25c34d27p-262,
     0x1.5d04e77c2eba3p-818, 0.0, 0.0, 0.0, 0x1.e10e645f35d55p-511,
     0x1.0fdbdef7597abp-439, 0.0, 0x1.1ed08af4c9e4fp-148, 0.0, 0.0,
     0x1.0dc1a2ab79e65p-722, 0x1.ddd3acf13dbf2p-1018, 0x1.c3efa26a831d4p-962,
     0x1.00eebf350f474p-1000, 0x1.94a30d3908f24p-806, 0.0, 0x1.84b5b0cf8ca97p-386,
     0.0, 0x1.ab8777dfcdb74p-198, 0x1.1602f642cee4p-91, 0.0, 0x1.597be6e0790d9p-186,
     0x1.4edb1b46e4136p-947, 0x1.cb340eca934b1p-74, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.99f64da40a36dp-975, 0.0, 0.0, 0x1.56ed8e7e63db5p-410, 0.0,
     0x1.e4df5ad4acae5p-439, 0x1.1271d3c8d79e4p-989, 0x1.f6e7c7f599efbp-252,
     0x1.3a9d99adefdeep-21, 0x1.f738cbe6776cap-430, 0.0, 0x1.a2d1248a3a782p-943,
     0x1.dd54cd184457fp-32, 0x1.c42ef804c921dp-131, 0x1.a9c65b44b889cp-348, 0.0, 0.0,
     0x1.63a8f84edb90ap-986, 0x1.1f705ea139c3bp-796, 0.0, 0.0, 0x1.aa6ece802425ap-971,
     0.0, 0x1.e33f932b9c0ep-327, 0.0, 0.0, 0.0, 0.0, 0x1.69835601ef17ep-292,
     0x1.9b958e7ce2001p-230, 0.0, 0x1.eaceb2829eb61p-765, 0x1.3563860910cc7p-532,
     0x1.bed0d687d5af3p-865, 0.0, 0.0, 0x1.db12dc6845f4ap-156, 0x1.3ae542615891p-21,
     0x1.9d41ae318a25bp-760, 0x1.cb0da17a7dd2ap-335, 0x1.8aabd3c1e4e9ap-349,
     0x1.2d8e255da9796p-26, 0x1.ebe87ccb9d462p-993, 0x1.e0299656cefd1p-495,
     0x1.db88d2e24bb93p-771, 0.0, 0x1.645248a420cf9p-269, 0.0, 0x1.77c017b79b689p-266,
     0x1.70754379b9065p-556, 0x1.859a3d42c8d48p-641, 0.0, 0.0, 0x1.823ec8d3fd998p-645,
     0x1.d6efd9213fc48p-49, 0.0, 0.0, 0.0, 0.0, 0x1.1920b5701dcacp-943, 0.0,
     0x1.bfc385a296adcp-421, 0x1.29c0d700ddcdbp-48, 0x1.41ada89102f76p-645, 0.0,
     0x1.c7d0388dad8a9p-594, 0x1.dfd8d41efd7a1p-940, 0.0, 0.0, 0x1.53fcfd43877ebp-184,
     0.0, 0x1.c2b70b638bd74p-745, 0.0, 0.0, 0x1.4335c7a2aded9p-31, 0.0,
     0x1.a122758f5188ap-533, 0.0, 0.0, 0x1.546b13a973f3ap-589, 0.0, 0.0,
     0x1.9637a122be9ecp-791, 0.0, 0.0, 0.0, 0.0, 0x1.b11e4737b582bp-900, 0.0,
     0x1.bcc996201a8a8p-712, 0x1.67be99f2e027fp-41, 0x1.8e421b038f553p-13,
     0x1.80523be57d44fp-608, 0x1.c1a32ce70b5d7p-777, 0.0, 0.0, 0.0, 0.0,
     0x1.3ca3472967a75p-939, 0x1.8a5e9b2b9d63p-719, 0.0, 0x1.ffd56816b1d7cp-54,
     0x1.ff03fc952a601p-964, 0x1.db3abeb22266fp-955, 0x1.a475b7800d446p-289, 0.0, 0.0,
     0.0, 0.0, 0x1.ea49721da8b0dp-187, 0x1.441038f8a03bep-206, 0.0,
     0x1.7b8d298756a53p-2, 0x1.abd2850dd7ee4p-57, 0.0, 0x1.876d92cacd00ap-18,
     0x1.d406a9deed5d6p-977, 0.0, 0x1.5461cd260a9cbp-330, 0x1.7d856726a4456p-662,
     0x1.14e0422af8038p-748, 0.0, 0x1.0a21afe632dd3p-809, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.101625655fd02p-222, 0x1.7bf10016d6fbfp-47, 0.0, 0.0, 0.0,
     0x1.ee546d5a0987bp-669, 0x1.87338aae1f269p-129, 0x1.0a62dc88f2814p-917, 0.0,
     0x1.d15d8ad3af7a7p-915, 0.0, 0x1.363f314a31d7dp-14, 0x1.92994e0b6dbp-22,
     0x1.296c0fc19ab51p-569, 0.0, 0x1.99361a58e9ea4p-600, 0.0, 0x1.7e02d9c87141ap-382,
     0x1.e8ebf45d6e849p-548, 0.0, 0x1.1dcd237c27cbap-422, 0.0, 0x1.52a26c6a49cd3p-683,
     0x1.032237972d7eap-299, 0x1.dc292bdfe5a19p-272, 0.0, 0x1.3c512819ba2bap-184,
     0x1.cfba16793c533p-674, 0.0, 0.0, 0x1.45be3292f8553p-801, 0x1.f9c8fc0e8da0ap-428,
     0x1.ccec7ea39376p-329, 0x1.1f88402b84e56p-127, 0x1.92d805db1b16dp-56, 0.0, 0.0,
     0.0, 0x1.bcea00f5b06e1p-1004, 0x1.ac647f3088854p-735, 0x1.7c56a4b0d5497p-570,
     0x1.4ec9888fb688dp-818, 0.0, 0x1.c3cc6e5db502ep-370, 0.0, 0x1.0407498250d4dp-227,
     0.0, 0.0, 0x1.0b2a3516d6d5fp-279, 0x1.b7d1f0fb7cc72p-960, 0x1.97fddbc21ae2bp-890,
     0.0, 0x1.0ce69cc12a9a6p-670, 0x1.e651216ab180ap-913, 0x1.196179efdf6b1p-27,
     0x1.c7b9fad6842bbp-577, 0.0, 0.0, 0.0, 0x1.6691ce76a187ep-106,
     0x1.928b287cea75fp-539, 0.0, 0x1.7f80a9750f9cdp-112, 0x1.9345cd2fbfe26p-719, 0.0,
     0x1.0d757006d3acep-610, 0x1.d9706bb08c54p-12, 0.0, 0x1.46aa5366f444ep-932,
     0x1.c2027a3f8893ap-112, 0.0, 0.0, 0.0, 0x1.101093cde6ed5p-227, 0.0, 0.0,
     0x1.b78c0736bf52bp-731, 0x1.55b83b6b3f24dp-360, 0.0, 0.0, 0.0,
     0x1.c8dc2d91c3358p-199, 0.0, 0.0, 0.0, 0x1.73e93af11666cp-236,
     0x1.87455e3101c04p-973, 0.0, 0x1.688ef44309481p-375, 0.0, 0x1.401d642b17ea8p-248,
     0.0, 0.0, 0x1.1a06847800401p-524, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51441b4c53cd4p-910, 0.0, 0x1.caaa7fc8d2268p-74, 0.0, 0.0,
     0x1.ce6d85b626f3ap-1001, 0.0, 0x1.b2db3a5a190c6p-762, 0.0,
     0x1.218f10bdfa72ep-304, 0.0, 0.0, 0.0, 0x1.53b97c56fc215p-262, 0.0,
     0x1.827f04febe575p-405, 0.0, 0.0, 0.0, 0x1.d9a0b709d5d49p-85, 0.0, 0.0,
     0x1.3ca3026ab0955p-765, 0x1.ed6252961ef9ep-376, 0.0, 0x1.23ba7f046a1e7p-832, 0.0,
     0.0, 0.0, 0x1.78cf22a190063p-566, 0x1.f15e8024f42eep-806, 0.0,
     0x1.70ef30534cdf4p-580, 0.0, 0.0, 0.0, 0x1.1f7b9d6c3ba0cp-79, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e0eb588e28eeap-587, 0x1.bf9f789f8f0a8p-740,
     0.0, 0x1.8c5b43bc5f963p-567, 0.0, 0x1.111f083c70a01p-413, 0.0, 0.0,
     0x1.56780733bc592p-495, 0x1.eb64127672329p-368, 0x1.d7d92e8db0dfap-241,
     0x1.f4f202105571ep-420, 0x1.963b42b968f4cp-40, 0x1.1440b6459106fp-278,
     0x1.bb5006b076cadp-31, 0.0, 0x1.7453e711400e5p-1015, 0x1.00e501e5bc08ep-437,
     0x1.6f993a9cc0a8ep-438, 0x1.7415e73724d42p-189, 0x1.447ca399bcc4fp-640, 0.0,
     0x1.0791bbceeb7b2p-384, 0.0, 0x1.e93cb726505fep-32, 0.0, 0x1.c642bf172b5cep-379,
     0.0, 0.0, 0.0, 0x1.416d4fc7bf936p-376, 0.0, 0.0, 0.0, 0x1.e60b1a68f4bd2p-50,
     0x1.c89d3ec0d1cacp-702, 0.0, 0.0, 0.0, 0x1.7aacc991e0833p-684,
     0x1.ab907aa5c415ep-259, 0x1.b4b20913f8843p-128, 0.0, 0.0, 0.0, 0.0,
     0x1.e95443006873dp-927, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.827adf0469a73p-375, 0.0,
     0x1.184415bafd586p-860, 0.0, 0x1.3689a0ab694e9p-561, 0.0, 0.0, 0.0,
     0x1.baebb167b325ep-166, 0x1.9c5d1b0cda8f7p-676, 0x1.2f4ceb0ef268cp-530,
     0x1.4de375048bbbep-22, 0.0, 0x1.cfc6ba476216dp-658, 0.0, 0.0,
     0x1.11bfe4b2db827p-76, 0x1.7b8ea2be0fcdap-57, 0.0, 0.0, 0x1.ecdeef80dac7fp-33,
     0.0, 0x1.08076f1c84b34p-879, 0x1.361f1fe09a38ap-256, 0x1.3b7fdfc97caf9p-148, 0.0,
     0x1.4a53e67b3ef4dp-96, 0x1.4d7dee5f399dap-628, 0.0, 0.0, 0x1.e309cf272d2aep-442,
     0x1.08b181b99d116p-810, 0.0, 0x1.927e1cfe96d09p-496
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_finz_expm1d1_u10purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_expm1d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expm1d1_u10purecfma bench acc %la\n", global_bench_acc);
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
