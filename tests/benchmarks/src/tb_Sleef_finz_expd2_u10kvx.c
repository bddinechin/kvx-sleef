/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expd2_u10kvx.c --function Sleef_finz_expd2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.119f10ab815efp-922, 0.0, 0.0, 0x1.4cd52ef465e25p-190, 0.0,
     0x1.92e2d05c3c754p-231, 0x1.d448c52fec63fp-866, 0x1.4dc412b6c2df7p-653, 0.0, 0.0,
     0x1.916587fea15dap-910, 0.0, 0.0, 0.0, 0x1.6a32a24bc4ffcp-273, 0.0, 0.0,
     0x1.c7af7cbf2c57bp-168, 0x1.44396e18aa723p-213, 0.0, 0.0, 0.0,
     0x1.c9f409942f371p-99, 0x1.27f579abc1b2ep-588, 0x1.cd9f31e798d9bp-318,
     0x1.752cf01fe7026p-380, 0x1.87be2df975172p-278, 0.0, 0x1.1e3c23861cd66p-694,
     0x1.0c45352b2d542p-236, 0.0, 0.0, 0.0, 0.0, 0x1.541f388534ccbp-982,
     0x1.1e8b425b0069p-758, 0x1.2cc2ed5c78be7p-110, 0x1.1dab4f335928dp-428,
     0x1.0459b1f4889dcp-851, 0x1.9d2a68e02c18cp-441, 0.0, 0x1.c916633112536p-589,
     0x1.b55ec46662478p-613, 0.0, 0x1.c9ad6c77a313cp-124, 0.0, 0.0, 0.0, 0.0,
     0x1.193a5ddf4dc18p-667, 0x1.45eca48822e6ep-770, 0.0, 0.0, 0.0,
     0x1.3c69eb1f3527dp-1021, 0.0, 0.0, 0.0, 0x1.43383ed195c24p-996, 0.0, 0.0,
     0x1.7270b99da57bbp-832, 0.0, 0x1.b6426d0326701p-207, 0x1.8cfc814fa3653p-681,
     0x1.fffe6ca7f519fp-224, 0.0, 0x1.09d3ddebe209bp-169, 0.0, 0x1.1369e917b1df9p-151,
     0.0, 0x1.41b2b55b38471p-865, 0.0, 0x1.8c8d547084798p-321, 0.0,
     0x1.c0e45cf43e3efp-350, 0x1.5e4bdd1c3585bp-572, 0x1.a7d7f8b2f04e6p-997, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f2734f77e08cap-310, 0x1.790fa1a575d2dp-646, 0.0,
     0x1.6624f616015c5p-735, 0.0, 0.0, 0x1.f2d0c97fe4d3p-813, 0x1.fe7f3da15e021p-921,
     0x1.2dcc2261b430bp-160, 0x1.606a482ccb13fp-143, 0x1.8db6cb78a5cc8p-675,
     0x1.a27078f259cep-196, 0.0, 0.0, 0x1.d1dc7a60e0de6p-670, 0x1.0a1c11a6be53cp-279,
     0x1.f60140349145p-552, 0.0, 0.0, 0.0, 0x1.2406fcbce2134p-264,
     0x1.dc5ef2c05f9fep-579, 0.0, 0x1.24c15467d8c1ep-598, 0.0, 0.0,
     0x1.7e6379422b24ep-702, 0x1.61cb38a58266ap-159, 0.0, 0.0, 0x1.71c8edbff8c4ep-820,
     0x1.4a2d7a34ed0b5p-887, 0x1.2836186414d48p-515, 0.0, 0.0, 0x1.bd06036a9f08p-908,
     0.0, 0x1.cb165d722a1b3p-113, 0x1.b0c20a5afd477p-48, 0.0, 0.0,
     0x1.b0f5db1296bdcp-338, 0x1.987c9fa5aa062p-236, 0x1.3a1a26fe803d4p-718,
     0x1.61195cb78192fp-413, 0.0, 0x1.297bdd2f3a75p-942, 0x1.a588eb471f902p-590,
     0x1.77fd072e3b5d7p-890, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9407bace9a5p-620, 0.0,
     0x1.6999f9db5487dp-216, 0x1.3c04d8acfad84p-810, 0x1.a33ecfc0b8863p-733,
     0x1.06741fd34e0b1p-958, 0x1.c58f471957887p-624, 0.0, 0x1.89da92f3fbebep-50, 0.0,
     0x1.a278162bc5eacp-929, 0.0, 0x1.e70b1a193987cp-285, 0x1.7c00c5c6f743dp-330,
     0x1.7c0f7d5293cffp-1016, 0.0, 0x1.0f750bd9f50a7p-277, 0.0,
     0x1.d2e8931ae7a32p-769, 0x1.a44c5423a946fp-54, 0x1.00ab744ade0c4p-520, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0ba5530a621b4p-372, 0x1.6866948fb43d5p-298, 0.0,
     0x1.603ee99370075p-683, 0x1.acd9a241dd76p-619, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.33ca36301fb0fp-423, 0.0, 0x1.d97877a63f3dap-87, 0.0, 0x1.ebce7e045a162p-834,
     0x1.f26744f74b833p-566, 0x1.af2ba18cb49b6p-292, 0x1.2c644365f62ffp-334, 0.0,
     0x1.4c0bb038ad5a3p-768, 0.0, 0x1.0cac8ee9cca27p-365, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.63b858b301acfp-82, 0.0, 0x1.bca2a6d33058fp-789, 0x1.1857de59e6356p-982, 0.0,
     0.0, 0x1.64433a2cce584p-485, 0.0, 0x1.7b4c3fa622443p-977, 0x1.d7d81bcc5648dp-131,
     0x1.99fa6ddaeab45p-192, 0x1.e5ec0c4fb4d49p-385, 0.0, 0.0, 0x1.3f76815a70eefp-816,
     0x1.96c7627f2ef5dp-127, 0x1.1788267919a4ap-263, 0.0, 0x1.445d7da327272p-222,
     0x1.55440b5b9d0fp-678, 0x1.cec155d38ed8dp-150, 0.0, 0.0, 0.0,
     0x1.26a3f125c354cp-446, 0.0, 0.0, 0.0, 0x1.38e5a63871998p-65, 0.0,
     0x1.289e29bfb393p-193, 0.0, 0x1.d22db76570748p-747, 0x1.dbc163d5d3386p-975,
     0x1.c7f5e7405eae6p-440, 0x1.df47954e402ccp-400, 0x1.6ab1235901342p-888,
     0x1.6d4dfe487fd81p-350, 0x1.20f790a4901b2p-637, 0x1.4f9a8b100ddbep-88, 0.0, 0.0,
     0x1.1d6de7cce0ef7p-148, 0x1.beaeb368d8ba9p-286, 0x1.ee872d2b0df19p-793, 0.0, 0.0,
     0x1.a97051eda4e63p-368, 0.0, 0x1.1359365522d41p-506, 0x1.888c3b3caa0f1p-380, 0.0,
     0.0, 0.0, 0x1.5ecdad6e4be29p-23, 0x1.24b6f837c3048p-248, 0.0,
     0x1.463dec5fadf76p-894, 0x1.7c4676198a294p-342, 0.0, 0x1.0bda765abbb88p-148, 0.0,
     0x1.4783c4647441cp-328, 0x1.f78b94004f016p-566, 0x1.427ebe9aed364p-190, 0.0,
     0x1.efd62254b2544p-817, 0x1.6b02a1e165df8p-684, 0x1.d9d506bb919f2p-812,
     0x1.c8c9496a9ba5dp-317, 0x1.9e3aec971cdeap-517, 0.0, 0.0, 0x1.536819d539743p-903,
     0x1.c4f0a35bed777p-608, 0.0, 0x1.c09508b59ca8dp-668, 0x1.61d23b98f94cbp-515,
     0x1.f8a8e918c40d9p-2, 0x1.d02e2a87b3587p-733, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c613220837406p-143, 0x1.88fe62c2fbdc2p-882, 0.0, 0x1.e84d09df41b98p-994, 0.0,
     0x1.0b117510ca905p-668, 0x1.e380a64c2534cp-819, 0x1.8f566ee2fd9d5p-932, 0.0,
     0x1.8f40c26ebdb14p-660, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6be8cd110757ap-462,
     0x1.d083756cc0cb9p-550, 0.0, 0x1.845982ac08b2dp-570, 0.0, 0x1.4b9e6febecdabp-828,
     0x1.a1bc9d49ce064p-120, 0x1.dd41302339e04p-270, 0.0, 0x1.e3dab8e2e241dp-600,
     0x1.51eb87f35ee8ep-144, 0.0, 0.0, 0x1.e9517176ce607p-119, 0x1.586f1c5599649p-584,
     0x1.d50841b23e0a6p-663, 0x1.fab88f93895dbp-348, 0x1.0bad2189d5a53p-810,
     0x1.87b90c37410ebp-130, 0x1.0fce8c9378de4p-87, 0x1.48dc0b612d1f3p-57,
     0x1.ed78f262d231ep-249, 0x1.4e08f7025ff7ep-370, 0x1.b7c2ce430f0d8p-190, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c432312990441p-897, 0x1.14927c2e4d3f5p-658, 0.0, 0.0,
     0x1.51f2c3e9c2a42p-57, 0.0, 0x1.504396f71eb96p-539, 0x1.f54fbdfcc9ef1p-455,
     0x1.45692f1b20b33p-7, 0x1.1cb386826da26p-497, 0x1.9ecdb5cb4b8b4p-480,
     0x1.2aac47dc561a2p-474, 0x1.cfc68d4520b46p-566, 0x1.b1bedff1c03a3p-471,
     0x1.711ad83d08b9ap-120, 0x1.4e3629d650236p-76, 0x1.a9b82a9fc106bp-515, 0.0,
     0x1.1c8ca0caf0a21p-399, 0x1.59f0cfe2b1bacp-216, 0.0, 0.0, 0x1.22c5fcd439p-700,
     0x1.e54947e68dc1cp-37, 0.0, 0x1.6f4f095e9f815p-593, 0x1.188825b5b8a48p-695,
     0x1.afa65da1d8178p-662, 0.0, 0.0, 0.0, 0x1.50bd609c342bbp-618, 0.0, 0.0, 0.0,
     0.0, 0x1.d570a7f7c0ddcp-649, 0x1.3517e53f0945ap-445, 0x1.a52804a2764eep-434,
     0x1.09e547b24b325p-617, 0x1.8661135f2d4dep-436, 0.0, 0x1.7d519efa33939p-600,
     0x1.e2104d100ddb7p-750, 0x1.7f68e3fb74059p-385, 0.0, 0x1.815ae3b144008p-719, 0.0,
     0.0, 0.0, 0x1.0f6b58cfc1f24p-792, 0x1.14eefe611e19p-1006, 0.0,
     0x1.a55887de1a438p-610, 0.0, 0.0, 0x1.09391e5aa7577p-205, 0.0, 0.0,
     0x1.d01854385a017p-268, 0.0, 0x1.41aad2a2ce5c5p-946, 0.0, 0.0, 0.0,
     0x1.077e5f7297922p-1013, 0x1.c456496b301f7p-852, 0x1.f4877685ee738p-209, 0.0,
     0.0, 0.0, 0x1.70673b96bbfc3p-436, 0.0, 0.0, 0x1.4eea6d4a9a2f7p-234, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.eab751b114556p-609, 0x1.29c50d08dae08p-555,
     0x1.c81beea79b007p-687, 0.0, 0x1.be01f4d304204p-537, 0.0, 0.0, 0.0, 0.0,
     0x1.2c95c6611edcfp-625, 0.0, 0x1.e55fd91d096c8p-834, 0x1.10e8c7bf2d2e6p-251, 0.0,
     0x1.cce1fc3bf04b9p-227, 0x1.ed9a384b1972cp-670, 0x1.c321610603dccp-365,
     0x1.e874b80a4d091p-250, 0.0, 0.0, 0x1.a8273855affb8p-372, 0.0,
     0x1.ec904c5c20a9bp-31, 0x1.9c2232ab91936p-698, 0x1.8f43babb5d638p-575,
     0x1.3074c3debfc5p-459, 0x1.f1425460c4db9p-317, 0.0, 0.0, 0x1.627019ff97751p-712,
     0x1.6922444ac00cep-120, 0.0, 0.0, 0x1.c9ff6af259395p-349, 0.0,
     0x1.2f72bd9f16741p-1016, 0x1.939fe6c90658p-971, 0.0, 0x1.f0aea1b83de5p-704, 0.0,
     0x1.7c7703ca9055ep-924, 0.0, 0.0, 0x1.999a31311eabcp-912, 0x1.ec364e4f9bb6dp-155,
     0.0, 0.0, 0x1.bfb7b048b13dap-888, 0.0, 0.0, 0.0, 0.0, 0x1.ceaf04d0a99a9p-1017,
     0x1.4cb7f908a240fp-134, 0.0, 0.0, 0x1.51d720e44db6p-119, 0.0, 0.0, 0.0,
     0x1.027d9435e43a2p-254, 0x1.7ad82a42491fdp-692, 0.0, 0x1.a1cf17d3a8028p-557, 0.0,
     0.0, 0x1.2b47c4e4c35bp-845, 0.0, 0.0, 0x1.fe30469f349c4p-216,
     0x1.698e3abacc9d7p-145, 0x1.8703b1cf108e6p-777, 0x1.5fdab55b4e54ap-695,
     0x1.4b1a46d7b8067p-840, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e3b896910594p-781, 0.0, 0x1.495fe41aa45f6p-749, 0.0, 0.0,
     0x1.d11b48fe5955p-859, 0.0, 0x1.3b3e920e48f36p-404, 0.0, 0x1.efb15f85aeea5p-369,
     0.0, 0x1.e0bd3bc13ac5p-954, 0x1.f426c3bbd98e2p-586, 0.0, 0x1.737318b45ad39p-774,
     0x1.7a61af95ada6p-466, 0.0, 0x1.1cc784735d7c3p-833, 0.0, 0.0,
     0x1.07d9b1d2f741p-506, 0.0, 0x1.508ebb233ab5cp-70, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.78a2ae9a6cfb2p-663, 0x1.ac7a92cdddf1dp-468, 0x1.a117b03b9b4dp-209,
     0x1.de46dc9eafd05p-320, 0.0, 0.0, 0x1.43cabee03d0ep-962, 0.0, 0.0,
     0x1.4dea7987ee35bp-621, 0x1.ed872335f1f67p-427, 0.0, 0x1.ae2064489960ep-104,
     0x1.f5d1d786415a7p-507, 0.0, 0x1.ca4548f561c0ep-692, 0x1.ddd61ec40ca98p-633,
     0x1.5c1e0be046edep-67, 0.0, 0.0, 0.0, 0x1.1656cb20f2492p-271,
     0x1.d664491172501p-876, 0.0, 0x1.1692052f31f97p-48, 0x1.a9c3f6af4adf2p-984,
     0x1.f0b400f94744fp-468, 0.0, 0x1.736ecadd41e85p-721, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70282165ac2e4p-129, 0x1.bfa0aa5beaab7p-844, 0x1.c9ef2a01613c1p-309, 0.0, 0.0,
     0x1.d29dcbdb53cc4p-61, 0x1.ef1cb2580c0c4p-47, 0.0, 0.0, 0x1.4ba0ae4043327p-603,
     0.0, 0.0, 0x1.a1662c5970acbp-95, 0x1.ac5af25b3ad96p-379, 0x1.fb71b237ea99bp-963,
     0.0, 0.0, 0x1.36e154c6b192ap-913, 0x1.4f45e549f0c1ap-918, 0.0,
     0x1.c310c5f0606abp-167, 0.0, 0x1.3d7686bd7e112p-106, 0x1.23d0ec00f5218p-112, 0.0,
     0.0, 0x1.8f99ff37c64d2p-546, 0x1.62ae69ce132d5p-346, 0x1.dca47db52b4a5p-488,
     0x1.695b895430ff6p-879, 0x1.7b94028404563p-48, 0x1.95176e425ec0ap-528, 0.0,
     0x1.68ec9403ee4bep-895, 0.0, 0.0, 0x1.80d1ff1db6584p-886, 0.0, 0.0, 0.0,
     0x1.dc1a7aa76d265p-241, 0.0, 0.0, 0.0, 0x1.73f8887f6089ap-301,
     0x1.8cda11d92971bp-107, 0x1.fbc812e10d3edp-251, 0x1.cad24f4a5b5bcp-191,
     0x1.9f2882c7bc30dp-784, 0.0, 0.0, 0.0, 0x1.e5a5785b627d6p-413, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.69076869c5499p-667, 0.0, 0x1.1c2d567d4d378p-957, 0.0, 0.0, 0.0,
     0x1.1c0b3bc72a08ap-658, 0x1.6204df76f1e1fp-110, 0x1.3781085fd1fd2p-591,
     0x1.ce0f55b054bfep-330, 0.0, 0x1.2b48257c0941dp-883, 0x1.8756c6c98770cp-83, 0.0,
     0.0, 0.0, 0x1.95876272ca949p-4, 0x1.7b16aa85b9a5p-702, 0x1.0e756207a713p-210,
     0.0, 0x1.f15aa3eb257a1p-472, 0.0, 0.0, 0.0, 0x1.61d14557ed9d6p-152, 0.0,
     0x1.4fe76f0294eddp-252, 0.0, 0x1.69d56e755bfc4p-639, 0.0, 0x1.cfd933ae3374ep-182,
     0x1.ad7eb082b27f9p-837, 0.0, 0.0, 0.0, 0x1.488d9aa3a9242p-686, 0.0, 0.0,
     0x1.9ac6a5904eb89p-960, 0x1.73e7881cf57afp-158, 0x1.a267061d81193p-647, 0.0, 0.0,
     0.0, 0x1.e8b5940330b5fp-758, 0.0, 0x1.26db9f52e38f4p-124, 0x1.69121f374390bp-410,
     0x1.b88f7519ea80dp-326, 0x1.5c79c5708b5bdp-925, 0.0, 0.0, 0.0,
     0x1.d8b00b766fb9dp-222, 0.0, 0.0, 0.0, 0x1.6a2aec5a90625p-66,
     0x1.dd18519502dfep-849, 0x1.eaed6719cca06p-382, 0x1.3d625ad8e26fcp-993,
     0x1.0927382013469p-391, 0x1.b88254fbd7533p-393, 0.0, 0x1.6b69b9ab2c631p-818,
     0x1.b7203f47b746bp-649, 0x1.bfa7ceef1cda9p-940, 0.0, 0x1.e476f950c7a4dp-489,
     0x1.00134dad5bf45p-375, 0.0, 0.0, 0x1.30ec8787e9bdep-265, 0x1.77eebc1321e62p-886,
     0.0, 0x1.747c8d5bba1a6p-440, 0.0, 0x1.ec492244fd7a8p-207, 0.0,
     0x1.65f391c23a0e5p-694, 0.0, 0x1.e079e879c8329p-957, 0.0, 0x1.ab04093805d92p-510,
     0x1.21d871a3858d1p-556, 0x1.d46dbe7bc8b1bp-280, 0.0, 0x1.0b4a42dc4be35p-84, 0.0,
     0x1.94ae7ebfb1dep-160, 0.0, 0.0, 0.0, 0x1.f6af076868d2p-1018,
     0x1.8792339a4f46ep-832, 0.0, 0.0, 0.0, 0x1.36fee49e1cf22p-107, 0.0, 0.0, 0.0,
     0x1.b137d904f7f46p-883, 0.0, 0.0, 0.0, 0x1.4b38c4d099b8fp-15,
     0x1.f0a5cde30a40ap-473, 0x1.dae115c21247bp-234, 0x1.ae064b99bc405p-602,
     0x1.4deb1d5e9c9dbp-567, 0.0, 0x1.ef8c3cd7dd7dap-295, 0.0, 0.0,
     0x1.7533c07aee3c5p-809, 0.0, 0x1.42918cc15292ep-318, 0x1.6016f43c4aad6p-669, 0.0,
     0.0, 0.0, 0x1.afd0b140fe036p-599, 0.0, 0x1.abfed7e84d2d5p-187,
     0x1.599b46091082p-6, 0.0, 0.0, 0.0, 0x1.17dbf20432ac4p-960,
     0x1.1e439a7aa3393p-734, 0.0, 0x1.888cd9419483dp-749, 0x1.589b00dd212a1p-186, 0.0,
     0x1.b817e4a377ccfp-437, 0x1.1f3259e621cf3p-728, 0x1.b4c60fd68c374p-315,
     0x1.d8aa936b75367p-959, 0.0, 0x1.5da7a633a2129p-32, 0.0, 0x1.7b1e0e885b116p-86,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4640339ff8489p-669, 0.0, 0.0, 0.0,
     0x1.93eec017eb21ap-874, 0x1.55b6a78ce6491p-738, 0.0, 0.0, 0x1.e2cada7d69df5p-563,
     0x1.0f690bab64fd4p-71, 0x1.21d85acd51d35p-909, 0x1.50f0e1f9684ecp-582,
     0x1.0ac2ed3b23687p-354, 0x1.f14c182e6a99bp-768, 0.0, 0x1.ee68dafbd6372p-749, 0.0,
     0x1.61205ceb51cb5p-406, 0.0, 0.0, 0.0, 0.0, 0x1.c34657c6dc809p-637,
     0x1.2f28a078b1d8ep-105, 0x1.5fdbc65545cc8p-319, 0x1.3fffe87dd9e5ep-809, 0.0, 0.0,
     0.0, 0x1.b9d9c1501c9dcp-716, 0.0, 0x1.a9265ee578d2fp-929, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.00608e7e8c21bp-756, 0x1.bd61d69835296p-649, 0.0, 0.0,
     0x1.46a1f2ecf0ac6p-913, 0.0, 0x1.6b873f6b80285p-143, 0.0, 0.0,
     0x1.9065dacb55d02p-259, 0x1.0c7ffb07e4dbep-993, 0x1.6b34b35c48d2ap-390, 0.0,
     0x1.1799477c45b96p-837, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.629b69e5ca0e9p-244, 0x1.e9c6cb01ae41p-338, 0.0, 0.0, 0.0,
     0x1.194d839b8b455p-866, 0.0, 0x1.868392a1da2b5p-844, 0.0, 0x1.ed84f56d0f23ap-665,
     0.0, 0.0, 0.0, 0.0, 0x1.ffc25706dac24p-787, 0x1.32932abfeb0cdp-1016, 0.0,
     0x1.93f6bbbe08c4ep-263, 0.0, 0.0, 0.0, 0x1.907d5a95f3285p-416,
     0x1.5a61e21b2136fp-276, 0x1.0ca484c255c68p-203, 0x1.60a98371674dbp-918,
     0x1.116e9e54b47dfp-627, 0.0, 0x1.12967c05e6ddbp-863, 0.0, 0x1.22f76cbeef457p-292,
     0x1.7749b9abd4151p-1, 0x1.b5e640790e8c9p-854, 0x1.e8254edac15b4p-263,
     0x1.a612c0d109f3ap-1003, 0.0, 0x1.f33ff62b36fd4p-794, 0x1.9291741482f8p-160, 0.0,
     0x1.792ec1345f752p-634, 0x1.74de4802d96bbp-1018, 0x1.ebbb46ed2d9abp-559, 0.0,
     0.0, 0.0, 0x1.769833cfe3c03p-316, 0.0, 0.0, 0x1.40d60fecea26bp-73,
     0x1.60374ae2bf50cp-315, 0x1.188ea0dff1c95p-470, 0x1.3dd0043fdebd4p-26,
     0x1.69845862ee575p-26, 0.0, 0x1.847e3dc9bff4bp-696, 0.0, 0x1.e027449fd8d51p-389,
     0x1.0448d95cd39adp-475, 0.0, 0.0, 0.0, 0x1.1a49418a47775p-925, 0.0,
     0x1.02ec60517d7acp-325, 0.0, 0.0, 0x1.73c545a4e279bp-108, 0.0,
     0x1.bc2daad090c28p-961, 0.0, 0x1.f6066a7afe544p-95, 0x1.935f1ebc8a1eep-469,
     0x1.c693eb5e7aa86p-911, 0x1.b04ab0dbd4f16p-397, 0x1.d28f5a0a4c003p-24,
     0x1.5db949569580fp-986, 0x1.e483fa36da622p-725, 0x1.047aa385408adp-282,
     0x1.503eb8b716a39p-260, 0.0, 0.0, 0x1.9c6207f0cee4bp-368, 0.0, 0.0, 0.0,
     0x1.9932192cfb39ap-355, 0.0, 0x1.fd0f57c69cf3ep-464, 0.0, 0x1.9aeec3a9db0c5p-613,
     0.0, 0.0, 0.0, 0x1.267319324f73p-298, 0.0, 0.0, 0.0, 0x1.2d6d95c713928p-317,
     0x1.4cc80b45db385p-191, 0.0, 0.0, 0x1.4e17935e7322p-843, 0x1.7d7ac79d6c20bp-221,
     0.0, 0x1.84d240f9f4089p-906, 0.0, 0x1.d397c7ef64577p-172, 0.0,
     0x1.dd6d982d58be4p-1012, 0.0, 0.0, 0.0, 0x1.133de22db8605p-396,
     0x1.f3d6c80025ddap-957, 0.0, 0.0, 0.0, 0.0, 0x1.c1e850c31e643p-73, 0.0,
     0x1.e0ff23d49d415p-247, 0x1.64a955f39be4fp-659, 0x1.d6b26b75680ep-796, 0.0,
     0x1.514f144e10653p-662, 0x1.a57df5afb1c33p-25, 0x1.cf52c439f9511p-87,
     0x1.bd14c36ff2f73p-513, 0.0, 0x1.ef86b6154d116p-688, 0.0, 0.0,
     0x1.e6abe4e5b0e2cp-238, 0x1.93b669c129de1p-110, 0x1.fca6bae65dca2p-2, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6b1b772cb221cp-220, 0.0, 0x1.4bb45cb0b60cap-545,
     0x1.a127868a81d33p-649, 0.0, 0x1.27714da466e79p-331, 0x1.905e66c163504p-709,
     0x1.546a90acbcff3p-36, 0.0, 0.0, 0x1.2394b75264ce1p-743, 0x1.33e396d84ac75p-152,
     0.0, 0x1.316fbb7cc7cb3p-706, 0x1.175260811ddf5p-219, 0x1.1c70ef6179084p-12,
     0x1.0993eba29147dp-1004, 0x1.3c403687fb2e2p-1014, 0x1.31eb52faa35ccp-949, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.82d202d1deff2p-827, 0x1.5eb90770bebf7p-929,
     0x1.4112dc24d06aep-285, 0.0, 0x1.236669b0fae01p-707, 0.0, 0x1.f081134de36d7p-771,
     0x1.8260a98eb9d0cp-977, 0.0, 0x1.124552cfb0f5dp-363, 0.0, 0.0, 0.0,
     0x1.7ac65f11768abp-186, 0.0, 0x1.0c0ec564ddf4p-729, 0x1.19dc6d1def8fp-672,
     0x1.0d7fe48e8066fp-66, 0.0, 0x1.dc78ab3f56446p-993, 0x1.fb29131f00582p-54, 0.0,
     0x1.370254b4428ecp-1010, 0x1.0abb97f400744p-453, 0x1.423b8f3c31ab7p-620, 0.0,
     0x1.e4c13cfd2bdedp-39, 0.0, 0.0
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
            tmp1 = Sleef_finz_expd2_u10kvx(tmp0);
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
    printf("Sleef_finz_expd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_expd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
