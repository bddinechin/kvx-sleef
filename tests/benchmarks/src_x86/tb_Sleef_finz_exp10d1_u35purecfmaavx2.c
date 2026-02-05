/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d1_u35purecfma.c --function \
 *     Sleef_finz_exp10d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.94a411268321ep-80, 0x1.c530f12d5d25ap-810, 0x1.26b86633de1p-605,
     0x1.57675aa97ed09p-708, 0x1.56ae1eb05dfbbp-919, 0x1.df4072d5c715bp-293,
     0x1.b2a9f2ddefca3p-345, 0.0, 0.0, 0.0, 0x1.cf2db64e84903p-767,
     0x1.f6a6042997361p-390, 0.0, 0x1.69c1195de59a7p-907, 0.0, 0.0,
     0x1.f5479d84a8b7dp-140, 0.0, 0.0, 0.0, 0.0, 0x1.39089ed698eedp-566,
     0x1.00b9ad7aba0fdp-501, 0.0, 0.0, 0x1.ddbf7b5d4661fp-578, 0x1.99854462028d1p-572,
     0.0, 0x1.0898e650382f2p-150, 0.0, 0.0, 0.0, 0x1.1ff749b18e228p-821,
     0x1.2bee36e6a13cfp-644, 0.0, 0x1.266bb7d5761fbp-982, 0.0, 0.0,
     0x1.2bdf09842f13bp-82, 0.0, 0x1.4aa11ffd55afcp-439, 0x1.14bc4bf8d1085p-564,
     0x1.cbf9924f3cb59p-483, 0x1.bd9f7ebe50801p-630, 0.0, 0x1.a48a416159bb6p-762, 0.0,
     0x1.7b651bfb70d82p-495, 0x1.2431b39e3394fp-272, 0.0, 0.0, 0x1.276aa2323adecp-671,
     0.0, 0x1.d95430007d81cp-570, 0.0, 0.0, 0x1.60e4121fd8dd1p-380,
     0x1.8f7a485273f96p-920, 0x1.cdf1c3aaffb7bp-954, 0x1.2a2c5875fc29ap-249,
     0x1.35819c4905712p-459, 0.0, 0.0, 0x1.a6b4388c05f46p-723, 0.0, 0.0, 0.0,
     0x1.31739e91a4926p-318, 0x1.8be1b0a6c3b07p-419, 0x1.ffe300d39483bp-959, 0.0,
     0x1.8e08734998555p-740, 0.0, 0.0, 0.0, 0x1.c758f8f66b50ep-388,
     0x1.311b385261d16p-921, 0x1.ad595f3fdf546p-942, 0.0, 0x1.f4876395389b2p-904,
     0x1.c205d0e38e412p-340, 0x1.f7abc74870ef9p-873, 0.0, 0.0, 0.0,
     0x1.d30c3330e02e5p-620, 0x1.829f9e6acfaa7p-917, 0.0, 0x1.d5a139551fde3p-72,
     0x1.a98d78d7c9808p-262, 0x1.e63bb33918e16p-77, 0.0, 0.0, 0x1.80e8a0d6edc14p-868,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f039b6493449fp-62, 0.0, 0x1.bfd0afc08e54bp-750, 0.0,
     0.0, 0.0, 0x1.a651df560eef3p-627, 0x1.04cc00787aea2p-1018, 0x1.29d0753dd2b2p-698,
     0x1.ac4e322c163d4p-31, 0x1.f20fc63ce149ep-746, 0.0, 0.0, 0x1.8bf3024ecd5d9p-933,
     0.0, 0x1.8c99ce2491e62p-760, 0x1.704662fa9dc21p-683, 0.0, 0.0, 0.0,
     0x1.35e70554583dfp-946, 0x1.8cb041904b10dp-703, 0x1.79cc3b8aa96dep-639, 0.0, 0.0,
     0.0, 0x1.b128d05e3862ep-483, 0.0, 0.0, 0x1.13c58593152c7p-417,
     0x1.67e1c6cc7b9a2p-350, 0.0, 0.0, 0.0, 0x1.f22e621acbc2ep-274, 0.0, 0.0, 0.0,
     0x1.ac96baa138bd8p-793, 0x1.dfdc97c2d63f2p-779, 0x1.1ba5d6b92fba7p-1019, 0.0,
     0.0, 0x1.57b6d0fe861eap-518, 0.0, 0.0, 0.0, 0x1.105ac9cad505bp-1016, 0.0,
     0x1.6f2e2bb283dc3p-850, 0x1.903e430d5f012p-854, 0x1.dd0fdcc3487a9p-248,
     0x1.a90576575e5f4p-4, 0.0, 0.0, 0.0, 0.0, 0x1.8fd0ec1e41bc8p-905, 0.0, 0.0, 0.0,
     0.0, 0x1.d47f44b3f1c8ep-696, 0.0, 0.0, 0x1.5acc02f3cb2bbp-1006, 0.0,
     0x1.e8e60ce355abp-826, 0.0, 0.0, 0.0, 0x1.34bc88cccceap-323,
     0x1.7f5b888976a45p-795, 0x1.6788423cb5c0dp-706, 0x1.f232c6736f75fp-577, 0.0, 0.0,
     0x1.ab1f248694f5cp-728, 0x1.a4ac1e5fed871p-401, 0x1.1147db02c83dcp-537,
     0x1.8048a84af094dp-662, 0.0, 0.0, 0.0, 0x1.38bbb35597252p-552, 0.0,
     0x1.23f18b4110ccbp-482, 0x1.0dcbfc3b98f28p-133, 0.0, 0.0, 0x1.a6f8962c21bdbp-403,
     0.0, 0.0, 0.0, 0.0, 0x1.c5c57e5e4928fp-5, 0.0, 0x1.f470b5df0370ep-207,
     0x1.3ffa831772de3p-94, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cab5b1c639b96p-163,
     0x1.9c221b68c932ap-482, 0x1.fa24998ed336fp-728, 0.0, 0x1.0e51b5fd4aa18p-336,
     0x1.252e8ebb547c3p-867, 0x1.eba8ca8c5024bp-515, 0x1.096a6d9a810fap-689,
     0x1.d44b5a0f3734ep-548, 0.0, 0x1.72751f5fd4012p-725, 0x1.eb42db839903cp-10, 0.0,
     0x1.96a818285f1edp-699, 0.0, 0.0, 0x1.2b228fce6da3dp-205, 0.0,
     0x1.27cfa3e65fcd4p-552, 0.0, 0x1.341475d8cceddp-247, 0.0, 0x1.f5320a9488b32p-726,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a5eee8025a13p-796,
     0x1.a26365ba92681p-378, 0.0, 0.0, 0x1.8fdb9eea366a2p-912, 0.0,
     0x1.d86e65b3d8edbp-533, 0x1.3858f5b6b4656p-194, 0x1.7c62b7066faaep-610, 0.0, 0.0,
     0x1.07bbcfbb928fap-750, 0x1.f15e8bf20a818p-807, 0.0, 0.0, 0.0,
     0x1.6bf4fc185742p-854, 0.0, 0.0, 0.0, 0x1.2054c8a88fcb8p-460, 0.0,
     0x1.6c43ef4d2b569p-399, 0.0, 0x1.6ea74b27076bep-949, 0.0, 0.0,
     0x1.ac9b6bd1b4db4p-742, 0.0, 0.0, 0x1.6342801d4d76ep-633, 0x1.defc2fe6b5e55p-727,
     0.0, 0.0, 0x1.6bb55db23bea7p-933, 0x1.32d29a7e5e971p-732, 0x1.0dc2f231f6bfbp-514,
     0x1.7d14f51f2df97p-76, 0x1.55b3902527821p-536, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fac75f8a67b6cp-922, 0x1.b2433a1516e8ep-95, 0x1.8e1bd6645dd7dp-192, 0.0, 0.0,
     0.0, 0x1.7fecad90543e6p-517, 0.0, 0.0, 0.0, 0x1.d680c5301dd01p-453,
     0x1.c94c540194162p-659, 0.0, 0x1.8c86acefb067ap-146, 0.0, 0x1.ca753afc9555dp-862,
     0.0, 0x1.4416739fbe5cap-628, 0.0, 0x1.b46e3103c80bfp-792, 0.0, 0.0,
     0x1.bbfb428118201p-84, 0x1.4c75a87f1dc45p-974, 0.0, 0x1.93a2bbabc1737p-929, 0.0,
     0x1.519e01ef0a164p-1000, 0x1.8c4d12233c245p-345, 0x1.1523a754ce7dcp-372, 0.0,
     0.0, 0.0, 0x1.19a22821595aap-129, 0x1.7999430e388f5p-22, 0.0, 0.0, 0.0,
     0x1.de6a2a1d9a274p-389, 0x1.9e09f64add9dp-356, 0.0, 0x1.b05422fb92658p-125, 0.0,
     0.0, 0x1.8ae04ff36e777p-882, 0.0, 0x1.8dd211b47eb31p-958, 0.0, 0.0,
     0x1.c81ea1479dd65p-912, 0x1.856c0a0f0073fp-1011, 0.0, 0x1.e602cdbd63ebep-606,
     0x1.60f90e35ac38cp-641, 0.0, 0.0, 0x1.a53346640d33cp-812, 0.0,
     0x1.f5a264708efb8p-564, 0.0, 0.0, 0.0, 0.0, 0x1.8859f75a23c8fp-784,
     0x1.5e7257406bb05p-5, 0x1.451a1ede97e03p-628, 0x1.728642105992dp-442,
     0x1.271a1c1e322eep-805, 0.0, 0x1.8140481430607p-721, 0x1.ce2f1fb783c7p-845, 0.0,
     0x1.ee27460625ce4p-417, 0x1.09cdb5e9ab9aep-744, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.68c3c39417402p-674, 0.0, 0.0, 0.0, 0x1.d7d6f390db98dp-908,
     0x1.bbbc334604174p-653, 0.0, 0x1.3e69d886a030fp-726, 0x1.2f33f849c6a11p-699, 0.0,
     0.0, 0.0, 0.0, 0x1.5a56abdac75e6p-487, 0x1.a102d09fecc9ap-117, 0.0, 0.0,
     0x1.66a658550d46fp-2, 0.0, 0x1.89c019605569p-850, 0x1.82c37118cfab2p-330,
     0x1.f9f491e9972e4p-438, 0x1.eeecad7382b41p-39, 0.0, 0.0, 0.0,
     0x1.b621845b3158fp-428, 0.0, 0.0, 0x1.9ddf67b4374c9p-806, 0.0, 0.0,
     0x1.e9335c76f084ap-1018, 0.0, 0.0, 0.0, 0.0, 0x1.ec147b45fa8ebp-608, 0.0,
     0x1.aa397ed1396d9p-386, 0.0, 0.0, 0.0, 0x1.e4a2352d66519p-640, 0.0, 0.0,
     0x1.0325564002791p-40, 0x1.166f3f53d67efp-681, 0.0, 0x1.ecaad914a5f7cp-758, 0.0,
     0.0, 0x1.e3f91a169128ep-428, 0.0, 0x1.be6f4f24c0e77p-983, 0.0, 0.0,
     0x1.4a53e9bad60bbp-635, 0.0, 0x1.83c8394cd0455p-485, 0.0, 0x1.2e5bd2df8cd7cp-403,
     0.0, 0x1.936a599838733p-80, 0.0, 0x1.d849781a274f8p-886, 0x1.dfd301bc360ccp-504,
     0x1.bb10d3ab61b2p-5, 0x1.2f2365cee6d1bp-35, 0x1.1391966fce657p-691, 0.0,
     0x1.2bee1bffd857cp-129, 0.0, 0.0, 0x1.50475b4b92b12p-418, 0x1.c0d4c2c822acep-555,
     0.0, 0.0, 0x1.fd98272201c04p-368, 0.0, 0.0, 0x1.ce88fbc7327f4p-985,
     0x1.0ab1f5d58f276p-326, 0.0, 0.0, 0.0, 0x1.a381e8d9a125dp-93, 0.0,
     0x1.a2aa530ef7cbbp-1013, 0.0, 0.0, 0x1.738fd01ada42cp-725, 0x1.4658925e9b00bp-24,
     0.0, 0x1.19008910e378ap-328, 0x1.20b93606a8385p-10, 0.0, 0.0,
     0x1.663bd2a4ee461p-198, 0.0, 0x1.caab27ea51168p-879, 0.0, 0x1.ab76c03b6e3eep-693,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac92471f6f401p-141, 0.0, 0x1.ffaeb55912ab9p-779,
     0.0, 0x1.29a48368c0a2fp-55, 0x1.f450862d6f7bfp-110, 0.0, 0x1.0f9205b451658p-1014,
     0.0, 0.0, 0x1.b1b908c8d4cb6p-294, 0.0, 0.0, 0x1.712c0f2d1e79ap-368,
     0x1.f206c6782712p-1001, 0x1.c3fb2c4c6a0e6p-158, 0.0, 0x1.163225bab8fa7p-900, 0.0,
     0x1.4bede94792184p-578, 0x1.d3a9a44bb730fp-457, 0x1.e629aee088578p-777, 0.0,
     0x1.3329201894e1ep-24, 0.0, 0x1.f7438b7cd2fc9p-962, 0x1.a169111407652p-69, 0.0,
     0.0, 0.0, 0.0, 0x1.b77ec0ced27cfp-11, 0.0, 0x1.9a23117018a01p-739,
     0x1.16cb7cd311572p-151, 0.0, 0.0, 0x1.1f499c97e0a4ep-13, 0x1.7fd8b7a4e398p-893,
     0x1.08ea3f5b6b2dap-335, 0x1.345b3bbbbcbdp-288, 0x1.b5ba759a92e81p-893,
     0x1.128ad5ffead7ap-530, 0.0, 0.0, 0.0, 0.0, 0x1.a8c7ec10f9214p-334,
     0x1.f36cc7c4d82dep-736, 0.0, 0x1.2f131a9703d59p-145, 0x1.a74aae286fcb4p-385, 0.0,
     0.0, 0.0, 0.0, 0x1.ebdc3ae985b25p-231, 0.0, 0.0, 0x1.c2c5f90bde65fp-534, 0.0,
     0x1.680d3c431858fp-385, 0.0, 0.0, 0.0, 0.0, 0x1.43fe7dfe2fa63p-119, 0.0, 0.0,
     0x1.202c1f13c6791p-149, 0x1.264dfa231ba52p-671, 0x1.e0774c06c98abp-700,
     0x1.565d6135c496ap-481, 0.0, 0x1.08817b6d7dfd2p-27, 0.0, 0.0, 0.0,
     0x1.b4eb8f63089bbp-330, 0x1.6cb5668509a1dp-534, 0x1.09c5c387b9753p-395, 0.0, 0.0,
     0x1.f6c213bc7debfp-377, 0.0, 0x1.a66c923d6c4d7p-933, 0.0, 0x1.53fa43d3f4063p-105,
     0x1.e96f16103b292p-822, 0.0, 0.0, 0x1.cff1b0809c3a5p-282, 0x1.633242c51a7ffp-273,
     0.0, 0x1.3df9c15e59eb1p-36, 0x1.64e103a342145p-887, 0.0, 0x1.34907241415b1p-946,
     0x1.daf449774d6dep-875, 0x1.cc4148066726ap-337, 0x1.b768d04725114p-1018, 0.0,
     0x1.fceffa362d7a1p-422, 0x1.caa3e0567bb28p-197, 0x1.49005d9e4bad1p-839,
     0x1.4f3481239ecdep-621, 0.0, 0.0, 0x1.2e47ad6b091cdp-403, 0x1.f17e8153a003ap-637,
     0.0, 0.0, 0x1.92329a818f1cfp-26, 0.0, 0.0, 0x1.85408282d4e42p-764, 0.0, 0.0,
     0x1.08aa16e6a8109p-263, 0.0, 0x1.08ccf5201299p-128, 0x1.275a8d449b4f4p-612, 0.0,
     0.0, 0x1.b68361533012p-489, 0.0, 0x1.1490993b507e6p-302, 0x1.6a4156581e166p-272,
     0.0, 0x1.ea99e12e743cdp-722, 0.0, 0x1.1b9507fd5eda9p-698, 0x1.cd31e34799eebp-48,
     0.0, 0.0, 0x1.18b0246b89c6fp-496, 0x1.9cebe10b2959ap-636, 0x1.ad5065a16ff77p-591,
     0.0, 0.0, 0.0, 0x1.1fabaa0999ff3p-361, 0.0, 0x1.14835b67bd614p-292, 0.0, 0.0,
     0.0, 0x1.d8d7e5a424959p-493, 0.0, 0.0, 0x1.4f878418ad3aep-262, 0.0,
     0x1.1dd7eaf1e3a4ep-730, 0.0, 0x1.e434963c85f76p-676, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ea79b7b4f7262p-632, 0.0, 0x1.5406fd4186c97p-382, 0x1.23498465d138ep-195,
     0x1.df212a363333p-644, 0.0, 0x1.ed66bc081beffp-219, 0.0, 0x1.f445eb8a511b1p-762,
     0x1.b71614815704ap-508, 0x1.9c8949f94df39p-514, 0.0, 0.0, 0x1.b32b3a9b1ad22p-23,
     0.0, 0x1.ded62de0d8203p-508, 0.0, 0.0, 0.0, 0x1.a324a1deb2c55p-649, 0.0,
     0x1.ad0ff5dd603f1p-841, 0x1.552f13dfb050cp-855, 0.0, 0.0, 0x1.12eff499fae3cp-524,
     0x1.ed0c04bb5fbap-958, 0.0, 0x1.4456d40bcb96ap-387, 0x1.cdc7774043a9fp-21, 0.0,
     0x1.3af29e230901fp-636, 0x1.b147d844e2f22p-173, 0x1.67632f4ee4eaep-169,
     0x1.13d387dad61edp-802, 0x1.b651608ebeeb2p-486, 0.0, 0.0, 0.0,
     0x1.422d9ce895c55p-842, 0x1.a806517f7326ap-545, 0x1.cc92d6fef6e47p-84, 0.0,
     0x1.0f3f9f618e863p-248, 0x1.279f418e5682p-45, 0.0, 0.0, 0x1.d9dac8a35f55fp-622,
     0.0, 0.0, 0x1.28088fe644257p-499, 0x1.5405c74ec7aecp-776, 0.0, 0.0,
     0x1.593272b007253p-904, 0.0, 0x1.7e5858a974994p-4, 0.0, 0.0, 0.0,
     0x1.b1db139c4740ap-985, 0.0, 0.0, 0x1.70bfbb740ec25p-289, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0d42a9520a1d6p-624, 0.0, 0x1.395109df2b42ap-832, 0x1.a21697a184254p-866,
     0.0, 0x1.bc0c829ebf3e2p-586, 0.0, 0.0, 0x1.2878a5b57991fp-924, 0.0, 0.0,
     0x1.effb61caa6365p-354, 0x1.ff045bfad814ap-157, 0x1.c0ed9df3ead98p-71, 0.0, 0.0,
     0x1.e4d0e9afe5894p-180, 0.0, 0x1.ff7b1e46e68e6p-938, 0x1.9d2d8d1968fe5p-371, 0.0,
     0.0, 0x1.d0afb471b3593p-992, 0x1.05796d9f7cdabp-175, 0.0, 0.0,
     0x1.27ea4883baa18p-28, 0x1.00d1fdb13b1acp-180, 0x1.d855c9dd345e2p-498, 0.0, 0.0,
     0.0, 0x1.4d141f765e761p-444, 0.0, 0.0, 0.0, 0.0, 0x1.a156e54d7adb1p-751, 0.0,
     0.0, 0x1.14c59f9ef375ep-497, 0.0, 0x1.fa0faf1418b19p-798, 0x1.79d1960ecff9ep-898,
     0x1.69bd8be2e84fbp-532, 0x1.bd639a065fe2p-800, 0x1.c5f0855ea1d81p-399, 0.0,
     0x1.f2add349bf0abp-666, 0x1.92bdc07d33449p-312, 0.0, 0x1.6a880c5386217p-442, 0.0,
     0x1.e44adaaa8c624p-87, 0.0, 0x1.5228a638ee043p-579, 0.0, 0.0, 0.0, 0.0,
     0x1.44559a62f32aep-590, 0x1.788e2db1d095bp-654, 0.0, 0x1.fdef13b82883ep-24,
     0x1.9ca4a7a495092p-564, 0.0, 0x1.67b0be51ade44p-72, 0x1.dddd78253d71dp-600,
     0x1.42a5c059a9926p-549, 0.0, 0.0, 0.0, 0x1.ed602432f2552p-816,
     0x1.e07bb96c1854dp-737, 0x1.63b53f182c62ap-82, 0.0, 0x1.7f1e2d3c3c4e8p-283, 0.0,
     0x1.94459fd7d2898p-751, 0x1.f7cae8de91ad2p-298, 0x1.8a12f958373c9p-371, 0.0, 0.0,
     0x1.ad272fcfd731dp-406, 0.0, 0x1.efa1d7c6caa06p-211, 0.0, 0.0, 0.0,
     0x1.9433123a3f90ap-963, 0x1.54facf3b6724cp-853, 0x1.ff087886e0a43p-121, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.41b311f77df6cp-932, 0x1.7e6f0ed8430a5p-828, 0.0,
     0x1.dbf1fa5dda42bp-380, 0x1.be96a6ea227eep-6, 0x1.471292095f316p-8, 0.0,
     0x1.6dc2798fe6981p-419, 0.0, 0.0, 0x1.5a058560e8598p-485, 0x1.ddd5da7d62e6ap-550,
     0.0, 0.0, 0x1.547624df95218p-360, 0x1.8f287f89bd5b5p-529, 0x1.04438e90cccbdp-360,
     0x1.5a1e3b26c4cbep-854, 0.0, 0x1.9be85cc2daf8ap-314, 0x1.fc258ec89cea9p-794, 0.0,
     0x1.70e5e522b7fbp-613, 0.0, 0x1.aa7452455b4ebp-723, 0.0, 0x1.b01b9d4216aa3p-526,
     0.0, 0.0, 0.0, 0x1.501ed6bd16c5dp-206, 0x1.6d7315b5d4ea9p-150,
     0x1.f2670fff87f9bp-528, 0.0, 0x1.593c766de8bc5p-1018, 0.0,
     0x1.ca2ca36ce9c2cp-997, 0x1.b06c695e686d2p-589, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bbe71098817cbp-26, 0.0, 0x1.f49d6b81073acp-865, 0x1.65f15535ed327p-756,
     0x1.c1f1a6d96e876p-917, 0x1.e5929732f641ep-918, 0x1.2beab678e7282p-129, 0.0,
     0x1.644fc3919af45p-472, 0x1.e438d8d9d9048p-949, 0x1.10d5d41ef3b0cp-642,
     0x1.caa005c69f368p-620, 0x1.dfdd79cbb1e88p-207, 0.0, 0x1.39d89971fad44p-83,
     0x1.9dbcbc39bac62p-940, 0x1.c2da2d041a46p-93, 0x1.61ab06cf1e70fp-770,
     0x1.1e69a23745809p-568, 0.0, 0.0, 0.0, 0x1.e7e506d3c80a4p-207, 0.0, 0.0,
     0x1.05f92bcd4003bp-750, 0x1.f7e40bdfc4756p-974, 0x1.76f7522f0b574p-607, 0.0, 0.0,
     0.0, 0x1.a2e146dc91f7bp-828, 0x1.247df3e921e5ep-221, 0x1.0535b58da2b13p-773,
     0x1.7eb4dbd9e3a9dp-965, 0x1.dfb33d079391ap-298, 0x1.a7aa9a5a216a8p-240,
     0x1.0c04ad5c7ace1p-748, 0.0, 0x1.4bf73fb59b6c6p-192, 0x1.d655c673a3c4ap-860, 0.0,
     0.0, 0.0, 0x1.64fc510866ce3p-108, 0x1.86a5ae5e19397p-69, 0.0,
     0x1.29a2ce728a9e6p-433, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10c06b8a6f4bp-8, 0.0,
     0x1.8cef393173045p-395, 0x1.284a514addb3fp-853, 0x1.519cdf62bee11p-650, 0.0,
     0x1.d324089402d67p-430, 0.0, 0x1.5f6014ae9ffa4p-644, 0x1.68b77ea8284ep-58,
     0x1.e896a3e511feap-351, 0x1.d970048db5dbdp-37, 0x1.87e5bd7f8b6bep-1000, 0.0,
     0x1.e6d3739484f3ep-116, 0x1.c6ba5865214a8p-300, 0x1.462822325e54ap-863, 0.0,
     0x1.31d4ed63c362dp-150, 0x1.3e5f17782d9a9p-936, 0.0, 0x1.fd38333259e67p-361, 0.0,
     0x1.262254e0f9e78p-896, 0.0, 0.0, 0.0, 0x1.1310637f1f9b1p-643, 0.0,
     0x1.00960db0a7ff7p-594, 0.0, 0.0, 0x1.c1140f827da06p-377, 0.0,
     0x1.481d3758865d7p-277, 0x1.a490966cbe844p-498, 0x1.0faa5485d3ab6p-393,
     0x1.ce9fbca25b13ep-505, 0x1.9cecdb7a76bc4p-511, 0x1.586092eece195p-138,
     0x1.7eca0b0d87047p-70, 0x1.1f0707dcb8dbdp-477, 0.0, 0x1.1f15700f1339ep-780, 0.0,
     0.0, 0.0, 0x1.07c99fe7f007bp-92, 0.0, 0x1.b4f62968f4843p-797,
     0x1.f20099ceea517p-88, 0x1.a52cf6ae9c2d5p-567, 0.0, 0.0, 0x1.453ba8069f057p-190,
     0.0, 0x1.635b87a623476p-102, 0x1.6ac33797891e9p-422, 0.0, 0.0,
     0x1.b85e1c785a8b5p-328, 0.0, 0.0, 0x1.2403a7c6d6619p-985, 0.0,
     0x1.acf83899ba847p-864, 0.0, 0x1.52df9bb7af146p-286, 0.0, 0.0, 0.0, 0.0,
     0x1.c560b84410e22p-908, 0.0, 0x1.4a52250da0bp-548, 0x1.1ed0433fb456bp-584, 0.0,
     0.0, 0.0, 0.0, 0x1.ad86e1463542fp-917, 0x1.e779980fae694p-66,
     0x1.f2709d65b06aep-751, 0x1.ec0ae5cdd3478p-723, 0x1.3bce2b5acf1c4p-18, 0.0,
     0x1.57be19b82a1fap-834, 0.0, 0.0, 0.0, 0x1.771115ba34312p-203,
     0x1.27ea951ecd4e4p-549, 0.0, 0.0, 0x1.72d9ffcb588aap-657, 0.0,
     0x1.46e74c5c4a7c1p-216, 0.0, 0.0, 0.0, 0x1.2c87c201669ap-823,
     0x1.29da58db3cf62p-15, 0x1.d9ada18578833p-286, 0.0, 0x1.80d32cce8d7afp-506, 0.0,
     0.0, 0.0, 0.0, 0x1.181bc8da86edfp-237
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
            tmp1 = Sleef_finz_exp10d1_u35purecfma(tmp0);
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
    printf("Sleef_finz_exp10d1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10d1_u35purecfma bench acc %la\n", global_bench_acc);
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
