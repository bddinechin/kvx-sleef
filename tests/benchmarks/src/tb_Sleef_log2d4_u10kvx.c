/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d4_u10kvx.c --function Sleef_log2d4_u10kvx \
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
     0.0, 0x1.cf2a610cb547dp-433, 0.0, 0x1.b9f229b39ebbep-841, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c18452c0a7e37p-479, 0x1.3f37deac87308p-623, 0x1.f139b2cc55bf2p-294,
     0x1.7a4277f40fe29p-494, 0.0, 0.0, 0.0, 0.0, 0x1.f8793c43ef7a6p-678,
     0x1.992d746515285p-195, 0.0, 0.0, 0x1.0cda8507aacadp-670, 0.0, 0.0, 0.0,
     0x1.e1ec8f03bcd0cp-217, 0x1.09e6732fddd4cp-108, 0.0, 0x1.cff0b21fcead4p-945,
     0x1.863b8dfb98826p-674, 0x1.da74c5e420e55p-162, 0.0, 0x1.779b4f307be6dp-376,
     0x1.21fc539e91917p-410, 0.0, 0.0, 0x1.2f226e3ccb888p-156, 0x1.45e8ae3f05382p-21,
     0x1.61e5cf770a79dp-535, 0x1.3b6d49847da3fp-1012, 0x1.348d78704de3bp-84,
     0x1.e236d02be4ab3p-912, 0x1.f8adf4ee22057p-885, 0.0, 0x1.886f533b62e48p-701,
     0x1.23f49c8649d3fp-902, 0x1.c1cd3ca07e0afp-793, 0x1.971d21ca01d65p-522, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.878bacfc556afp-230, 0.0, 0.0, 0x1.37cd66ed28155p-47,
     0x1.eb186a4a1f63ap-176, 0x1.d4ecdca926a85p-890, 0x1.52f58a2a65a5cp-348,
     0x1.174469a1b8cb1p-35, 0.0, 0.0, 0.0, 0x1.58306900e2626p-871, 0.0, 0.0, 0.0, 0.0,
     0x1.37e1c2efdf5c5p-598, 0.0, 0.0, 0x1.da3e3b575adefp-740, 0x1.1f56e9529650fp-971,
     0.0, 0x1.c8cc1d6a42ca7p-637, 0.0, 0x1.004b4e5c437b5p-637, 0.0, 0.0,
     0x1.b6e6b7c2272e4p-594, 0.0, 0x1.3402389c32ed6p-142, 0x1.88e6b11c0e747p-609,
     0x1.c24f3d8eb5209p-302, 0x1.38bca23623f2bp-750, 0.0, 0x1.21c6aa73b386ep-724,
     0x1.d2f658529ab32p-114, 0x1.63e8d4ee64f3p-422, 0.0, 0.0, 0.0,
     0x1.54d215f798494p-455, 0.0, 0x1.9f8d4b11946c2p-424, 0x1.3b112a87af63fp-203,
     0x1.f498d7f5b1643p-423, 0x1.65f48e1accd1cp-991, 0x1.241f4b7391e3bp-42, 0.0, 0.0,
     0.0, 0.0, 0x1.715e037459c3ep-901, 0.0, 0.0, 0x1.b22b9c2c5ee8ep-818,
     0x1.9265c4ddd4d78p-969, 0.0, 0x1.61afce6b3eba7p-148, 0.0, 0x1.872a828443a32p-716,
     0x1.c9ff638814bf8p-463, 0.0, 0x1.506387a878921p-323, 0.0, 0.0, 0.0,
     0x1.dc31feaeb4cc2p-290, 0.0, 0.0, 0.0, 0x1.c90985182546cp-67,
     0x1.ae7edab4d662dp-398, 0x1.bc66f82d333e5p-143, 0.0, 0x1.66ed4e07caa35p-811,
     0x1.68edd2453852ep-446, 0x1.0d14deb0b1e9cp-838, 0.0, 0x1.3b92e1fd09965p-802,
     0x1.bbe07ac5c8015p-209, 0x1.6515af79749a3p-985, 0.0, 0.0, 0.0,
     0x1.7998af4b13e43p-559, 0x1.89d4c584c0788p-133, 0x1.fbba69e981d1ep-679,
     0x1.1071407fbee75p-188, 0.0, 0x1.859a7b2c322e1p-403, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2fa91a599d11p-646, 0.0, 0.0, 0.0, 0x1.6be88c0196af3p-49, 0.0, 0.0,
     0x1.ff3260203b211p-362, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.649aa943e5ac5p-677,
     0x1.d2e817f016e19p-365, 0.0, 0x1.52b54f58af344p-493, 0.0, 0.0, 0.0, 0.0,
     0x1.5c94dc40c9771p-381, 0x1.107469f02c1a4p-681, 0x1.9d748e189c40ep-130, 0.0,
     0x1.2cb90495e3f5dp-661, 0x1.1dcd57fe1392fp-932, 0x1.71f438975c6ddp-899, 0.0, 0.0,
     0x1.9af2809ac1f3p-234, 0.0, 0x1.48cfd78fd86c9p-341, 0.0, 0x1.e00e6c6212933p-23,
     0x1.b1ff640f9872fp-661, 0x1.dff2cd7cf5355p-416, 0.0, 0x1.c06bb1979c9afp-479, 0.0,
     0.0, 0x1.c9e80eaebf1f5p-876, 0.0, 0.0, 0x1.c11e677df3781p-359,
     0x1.68a3db50b7518p-684, 0x1.e685a1f84bd68p-551, 0.0, 0.0, 0.0,
     0x1.5f4f7064d6f81p-338, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a82f91613aa6cp-265, 0x1.1581bdb88bfd3p-541, 0x1.30ac7ef2a2f9p-347,
     0x1.0dcb0e6388917p-519, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3316c4833541fp-697, 0.0,
     0.0, 0x1.bab3cfe48f0c8p-849, 0.0, 0.0, 0x1.8ff64a356f105p-323, 0.0,
     0x1.27fb24ac70d12p-880, 0.0, 0x1.19335ed8daa7dp-31, 0x1.15f018de11241p-640, 0.0,
     0x1p0, 0x1.cef1465b8b9bfp-590, 0x1.50c05cae58589p-497, 0.0,
     0x1.9dcb77d6de7bdp-593, 0x1.2c78fcaf5787p-738, 0x1.92ae93e702ef9p-758, 0.0,
     0x1.2ccf1ae04af5bp-610, 0.0, 0.0, 0x1.fccc69b7d0179p-96, 0x1.f9ad7bb49b648p-214,
     0x1.1b3cfb85ec113p-554, 0.0, 0.0, 0.0, 0x1.326e19929ba73p-570,
     0x1.2ca5785955e1p-121, 0x1.0b3904b374c47p-222, 0x1.87f64c81e0801p-579,
     0x1.04dcb883ca8a7p-104, 0.0, 0.0, 0.0, 0.0, 0x1.c406ffcf6224cp-250, 0.0, 0.0,
     0x1.9a935070d5bb5p-706, 0x1.f984357f096f7p-886, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5f04c91fe82dep-969, 0.0, 0x1.ee6321d1dba3dp-791, 0.0, 0.0,
     0x1.854e5c6efd3ep-863, 0x1.dd504538413a9p-679, 0.0, 0.0, 0x1.825863ba691f9p-950,
     0.0, 0.0, 0x1.a936214ec3497p-509, 0x1.7f106dcedbfe3p-385, 0x1.927bfa70446e8p-633,
     0x1.4a4547045eed6p-416, 0x1.854df3902df4cp-600, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.04acba182801fp-107, 0.0, 0x1.c641e482b3ee7p-826, 0x1.96a38e9a8e159p-978,
     0.0, 0.0, 0x1.9b3a4daf3cac2p-243, 0x1.dc23ec66ab611p-652, 0x1.ff642150fbb68p-323,
     0x1.2641ba2d931bep-356, 0.0, 0x1.6d655b8fdb3afp-1008, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fabdb132e71dcp-35, 0x1.02e85fd0fb6d2p-664, 0.0, 0.0, 0.0,
     0x1.fa70a914c5c69p-293, 0.0, 0x1.2414722130d16p-366, 0.0, 0x1.382823c19753fp-643,
     0.0, 0.0, 0.0, 0x1.f16615bd16d58p-685, 0x1.f1dec14207fa6p-1005,
     0x1.87ac74828c99fp-740, 0.0, 0.0, 0x1.516a8ebcb3f12p-647, 0x1.6b81f4d8d1fbdp-941,
     0x1.326d9f730d6c2p-529, 0x1.cd707f27d692ep-706, 0.0, 0x1.15935168876b8p-672, 0.0,
     0x1.4d09cfb480cf2p-273, 0x1.1dbac92a5b901p-157, 0.0, 0.0, 0.0, 0.0,
     0x1.10a36386bc822p-371, 0.0, 0x1.b757010612299p-729, 0x1.ebe113037d83p-300,
     0x1.d88d1f077b426p-685, 0x1.b12f48f16e315p-427, 0x1.fe77e9d91e18bp-897,
     0x1.a419b553a301cp-709, 0.0, 0x1.e7db887f59e84p-457, 0x1.3b10c68d119dp-564, 0.0,
     0x1.26f5b7d499e08p-657, 0x1.665075b900926p-797, 0.0, 0x1.b11ad530612abp-143,
     0x1.51f4656d18bbep-975, 0.0, 0x1.d0ba675b71a36p-51, 0x1.23a039fbe5e6ap-349,
     0x1.b781d96ee4415p-226, 0x1.615dc4fe3c18fp-408, 0.0, 0.0, 0.0,
     0x1.703f3757a8958p-331, 0.0, 0x1.c17a592d84145p-90, 0x1.289a7e7fe2b76p-874, 0.0,
     0.0, 0x1.d7f54b2989632p-917, 0x1.37bd63c7c9cd8p-426, 0x1.faf566f287a8cp-875, 0.0,
     0.0, 0x1.34291ff565bd3p-445, 0.0, 0.0, 0.0, 0x1.4792944da2e3bp-212,
     0x1.054ebcc91e0dbp-168, 0x1.5dd1d866d3a6fp-801, 0x1.d394814a38b7p-418,
     0x1.8825af1ae62fdp-531, 0x1.f6544c9180604p-328, 0.0, 0.0, 0.0,
     0x1.fd23b3f9812fp-664, 0.0, 0x1.298686746dc3fp-779, 0.0, 0.0,
     0x1.2cdfd6f85f003p-152, 0.0, 0x1.085463ba6bc7dp-189, 0x1.03d7bc6fa327fp-11, 0.0,
     0x1.9445f7bb584bfp-281, 0x1.a28ec4e6dcc38p-985, 0.0, 0.0, 0x1.4d3fdba2054b3p-682,
     0.0, 0x1.3b855291ed35bp-980, 0x1.bce1fb7f38a8p-325, 0.0, 0x1.3ff8342e659ecp-273,
     0x1.ea1241d85bf89p-7, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70cfe56ec1e36p-962, 0.0, 0x1.6fe0e4bf51e71p-575, 0.0, 0x1.229050b8a0367p-536,
     0x1.470b7c10c92f5p-124, 0.0, 0.0, 0x1.c718cee325cb4p-512, 0.0,
     0x1.a7f55f0e222d4p-781, 0x1.75f1a92892bf6p-180, 0x1.4333f46e4c72ep-894, 0.0,
     0x1.6269151b380f1p-151, 0.0, 0.0, 0x1.3323f784742e7p-23, 0.0,
     0x1.399bb5614854cp-407, 0x1.2d09c93c7351ap-4, 0.0, 0.0, 0x1.14ad80a383003p-441,
     0.0, 0x1.0738a1348672ap-442, 0x1.35c947b5211ebp-509, 0.0, 0x1.e1c9ee4f80cccp-307,
     0.0, 0x1.bef949ea2bdebp-770, 0.0, 0.0, 0.0, 0.0, 0x1.b848653aa8768p-823, 0.0,
     0.0, 0x1.3a78d06b0eedp-715, 0x1.32cb6a2317c9cp-238, 0x1.e89a8395254cep-701,
     0x1.8fd4d4a1373fp-611, 0x1.f8897dc053463p-550, 0x1.836290f1c6a5ap-362,
     0x1.45d2738b7a568p-662, 0.0, 0x1.6bc17afb42e54p-100, 0.0, 0x1.d303c853e32fep-615,
     0.0, 0.0, 0.0, 0.0, 0x1.6d251565611cdp-673, 0.0, 0.0, 0x1.08450e10fc533p-351,
     0.0, 0x1.a4af8873d1a86p-497, 0x1.294d7248d0a46p-144, 0x1.6c7ba4a982e16p-622,
     0x1.87898fb1c511dp-370, 0x1.4997bf5c283f9p-29, 0x1.8203c7ea3d67ap-26, 0.0, 0.0,
     0x1.af2573a7d6136p-67, 0.0, 0.0, 0x1.5a0c34bb13762p-418, 0x1.8c2f555ff782fp-826,
     0.0, 0.0, 0x1.b3333bf6bfa63p-970, 0.0, 0.0, 0x1.017cf0d10f1bcp-161,
     0x1.daa28bb36f19ap-70, 0x1.dab3a80cca25dp-778, 0.0, 0.0, 0.0,
     0x1.03eccb03dadb2p-257, 0.0, 0.0, 0x1.db3e9ab0b332ep-313, 0.0,
     0x1.b645fb3d06effp-485, 0x1.d8e569eabe091p-239, 0.0, 0x1.530d833e92bf3p-568,
     0x1.2a74ed1dc08c1p-792, 0.0, 0.0, 0x1.79dfd52f34ea8p-750, 0.0,
     0x1.ca24a7a48733fp-257, 0.0, 0x1.27326d15032bfp-963, 0x1.7f40dc621e45ap-936, 0.0,
     0.0, 0x1.9b140d451188p-605, 0x1.9aa917fa301dbp-871, 0.0, 0.0, 0.0, 0.0,
     0x1.86411f9fb3726p-839, 0.0, 0.0, 0x1.24d70a2e8b58ep-652, 0x1.fb66b756a3507p-660,
     0.0, 0.0, 0.0, 0x1.08427dba3d17dp-591, 0x1.20ab4f9765063p-839,
     0x1.0c1d6bb8be24bp-620, 0x1.21d6968184d62p-627, 0x1.830f11a4f6e53p-306,
     0x1.d16f114b58dbp-668, 0.0, 0x1.6cf2e3ed8dd41p-977, 0x1.bd3ff998ba61dp-697,
     0x1.16796000c46cep-59, 0.0, 0.0, 0x1.760f8c7b982cbp-807, 0.0, 0.0,
     0x1.61c4ac05a6c89p-875, 0x1.887ef84717b7ap-208, 0.0, 0.0, 0x1.f1b36cbf28db5p-416,
     0.0, 0.0, 0.0, 0.0, 0x1.08c5a05d4d076p-371, 0.0, 0x1.436f5481932b3p-646,
     0x1.dac85349c59f9p-331, 0.0, 0x1.80cfc2b6506p-128, 0.0, 0x1.d6e62a629fcb1p-921,
     0.0, 0.0, 0x1.be8942aeedce8p-254, 0.0, 0x1.16e74bf9f071dp-531, 0.0,
     0x1.ebe0dc8ba21c7p-762, 0x1.316a8f4acb678p-667, 0.0, 0x1.d2b1f1f669da3p-660, 0.0,
     0.0, 0x1.a994241b83a52p-602, 0.0, 0x1.1b6680ed7ce3dp-800, 0.0,
     0x1.152efef7443a7p-1013, 0x1.ad627753e64c3p-245, 0x1.592e1a1f3d6edp-242, 0.0,
     0x1.d81b5a53dd3f9p-660, 0.0, 0.0, 0.0, 0x1.3092f1e1e8a73p-414,
     0x1.7db5aa9ce06c3p-789, 0x1.f4c9a9d3c4accp-142, 0x1.3cff4de993488p-578, 0.0,
     0x1.cd54da5bde129p-357, 0.0, 0.0, 0x1.923753b5f83edp-909, 0x1.3d156491323b7p-996,
     0x1.16b7dcba353f7p-197, 0x1.aee5c1b744ae5p-965, 0.0, 0x1.c99eb3c0b901cp-268,
     0x1.90aebd57ce088p-267, 0x1.0521e00f6fb16p-847, 0.0, 0x1.19554eeb7f2f7p-1018,
     0x1.19add61442a5cp-575, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a94eab43b8ca4p-282, 0.0, 0x1.2f191d2538ce2p-529, 0.0, 0.0, 0.0,
     0x1.2b1627d50f05dp-669, 0.0, 0x1.98647b57d07eap-802, 0x1.76116c5743459p-889, 0.0,
     0x1.355a2a5ea3c3dp-798, 0.0, 0x1.b3b0071b4b339p-724, 0x1.ae7b372956d61p-121, 0.0,
     0x1.f237f8bd0b96cp-1020, 0x1.a1ade9e08501fp-443, 0x1.7b4588e5e622fp-723,
     0x1.9690c090382b4p-203, 0x1.40c39df8e9176p-100, 0.0, 0x1.a7539f84845abp-62, 0.0,
     0.0, 0x1.b9b7b4a818a52p-414, 0x1.460ce7b22a535p-535, 0x1.a9d034030aea5p-731, 0.0,
     0x1.f704610c1b485p-1005, 0x1.9338ed6e11621p-310, 0x1.37bfbb2f72d35p-611,
     0x1.d39e815fd3e7ap-984, 0x1.47c943ee18ee4p-804, 0x1.baa6af90157a9p-26,
     0x1.ef3764558ffe3p-45, 0x1.c15aab3f0766dp-444, 0x1.d4f6a85dfdcdap-922,
     0x1.aa2de322925ccp-650, 0.0, 0x1.b1b5e1f2785c4p-237, 0x1.10ce0becce788p-882,
     0x1.cead945b7b339p-409, 0x1.6cf0aec990c8ep-423, 0.0, 0.0, 0.0, 0.0,
     0x1.8b0b97e2df9fdp-560, 0.0, 0.0, 0.0, 0x1.560b3029518b6p-65, 0.0, 0.0, 0.0, 0.0,
     0x1.ea9575b7f49cbp-313, 0x1.032ffee8032dfp-438, 0.0, 0.0, 0x1.0cae482ea3c09p-546,
     0.0, 0x1.c96ac56ef372ap-7, 0x1.d779c5748d13ep-23, 0.0, 0x1.94d38e3839d57p-957,
     0x1.f573db4bf613cp-633, 0x1.f97566d8cfb23p-875, 0.0, 0.0, 0x1.7568bfcc7a5c8p-23,
     0x1.3bd060ff15707p-1000, 0x1.e2f2c3a7884d3p-854, 0x1.8e163732cb051p-643,
     0x1.339988dab6ba3p-456, 0.0, 0x1.b5a178ffd6b2ep-544, 0x1.7faa196059bd2p-594,
     0x1.575711452a8f2p-737, 0x1.79e1f4d6d561ep-668, 0.0, 0.0, 0.0,
     0x1.833a90d25c377p-1003, 0.0, 0x1.35296dfb0502cp-252, 0.0,
     0x1.7969c203ee071p-484, 0x1.f039ec624a87dp-901, 0.0, 0.0, 0x1.3cadcf285a35ap-839,
     0.0, 0.0, 0x1.6a835493c43a5p-307, 0.0, 0x1.5e48039a7a0c7p-700, 0.0,
     0x1.3bb0e233c92dap-277, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4872adc52a6b1p-676, 0.0,
     0x1.4af16e946074fp-481, 0x1.8f4759ea44632p-236, 0.0, 0.0, 0x1.d2ce18d3cb6c2p-341,
     0.0, 0.0, 0.0, 0.0, 0x1.3bd23f2634557p-118, 0x1.0e6497d400d29p-752,
     0x1.8ed8a5d7984c1p-160, 0.0, 0x1.4c4d6949faecp-150, 0x1.0926bd9b11337p-277,
     0x1.4fe741d6046d4p-558, 0x1.11f09d770f1d8p-953, 0x1.d1e7044f12ffdp-379, 0.0,
     0x1.9c1c2297401a8p-186, 0x1.9606fc045899p-315, 0x1.724bb61e0ab77p-321, 0.0,
     0x1.7639b65c5ca93p-331, 0x1.45e5727ef131ep-757, 0.0, 0x1.fbce14f5e5798p-974, 0.0,
     0.0, 0.0, 0x1.7733886230a34p-72, 0x1.8d3b452833101p-722, 0x1.fd0702d27287ap-774,
     0.0, 0.0, 0x1.5b341c927d1e6p-882, 0.0, 0.0, 0x1.ba8a784cb7697p-128, 0.0,
     0x1.81fe7d2713b8bp-928, 0x1.282363224a4a1p-619, 0.0, 0x1.269f9490ef185p-412, 0.0,
     0x1.ad00dbde06bfep-483, 0x1.1d33283461994p-308, 0x1.6f3792cde3b3p-518,
     0x1.9f66709e03cb8p-166, 0x1.738adb4f66eb8p-883, 0x1.a27f6cef461afp-534, 0.0, 0.0,
     0x1.1b80af9217d8cp-792, 0.0, 0.0, 0x1.398e130b4269cp-790, 0x1.32559a59678ccp-133,
     0.0, 0x1.46c27185515eep-606, 0x1.204771ebd7c5fp-706, 0.0, 0.0,
     0x1.04ec12cf467f2p-621, 0.0, 0.0, 0x1.2243d4abd773fp-660, 0x1.c6bce80b1bce8p-995,
     0.0, 0.0, 0.0, 0x1.42eb36f7d3041p-485, 0.0, 0x1.4c97d0dd986f3p-685, 0.0, 0.0,
     0.0, 0x1.92591e0ef9a1bp-658, 0x1.18a594319129fp-886, 0x1.a6654ba7b9648p-991, 0.0,
     0x1.c93841c84de26p-89, 0.0, 0x1.ac2e8c54d6cfep-30, 0x1.e4e4faf09b6p-909, 0.0,
     0.0, 0.0, 0.0, 0x1.ee853972e8618p-294, 0x1.33a354c16d5p-393, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.926d5069fc1c5p-401, 0x1.4c47f6217def9p-774, 0.0, 0.0,
     0x1.6510be480bdefp-261, 0x1.8940193ff48dap-691, 0.0, 0.0, 0x1.fbfb176b3a479p-346,
     0.0, 0x1.344b1fcf0e57bp-899, 0.0, 0x1.171361df09f92p-872, 0.0, 0.0, 0.0, 0.0,
     0x1.5a9f1d85d064ep-1022, 0x1.94e1c54452c27p-686, 0x1.684b981583dcap-669, 0.0,
     0x1.e842badd0a11fp-311, 0.0, 0.0, 0x1.94c071bdcedcap-330, 0.0,
     0x1.1041059420ca5p-914, 0x1.385761f5ee717p-356, 0x1.a0677008239e1p-453,
     0x1.1278068f9607cp-440, 0.0, 0x1.907189739da2bp-900, 0.0, 0x1.a96023641894cp-595,
     0.0, 0x1.4a76791ec34aap-950, 0x1.87af73a114abap-835, 0.0, 0.0, 0.0,
     0x1.332f7eff466eep-384, 0x1.652b4ec0c281ep-836, 0x1.e07e5caf120bp-388,
     0x1.f1ac3087f13e7p-698, 0x1.8e1424723b126p-991, 0.0, 0.0, 0x1.1540bbb35fc78p-45,
     0.0, 0.0, 0x1.c8a5457aaa903p-161, 0x1.654f489de4dbfp-72, 0.0, 0.0,
     0x1.f79859ccec7ffp-473, 0x1.937a8d40dec67p-586, 0x1.ae9cf44de353dp-975,
     0x1.5e3c5c9a2bddcp-623, 0x1.bd9da2557726ap-833, 0.0, 0x1.8f6b4a7d6c414p-453, 0.0,
     0.0, 0x1.92b545b28d446p-339, 0x1.f36cfbca0198bp-79, 0.0, 0.0, 0.0,
     0x1.43c97d948e414p-79, 0.0, 0.0, 0x1.8f13d886ddb8ap-102, 0.0,
     0x1.05befded0b948p-5, 0x1.be9dd1a650e42p-45, 0.0, 0.0, 0x1.8d18c898bd1aep-457,
     0x1.81de4cfbfe416p-940, 0x1.f9bd848242p-442, 0x1.a3934e3b51681p-225, 0.0,
     0x1.d5adc265dbfbep-989, 0x1.5c4da796f307bp-909, 0.0, 0x1.e09869f0f78b5p-716, 0.0,
     0x1.9e38eedb94519p-653, 0.0, 0x1.fe5f430426159p-340, 0x1.002c0c0d644afp-620,
     0x1.14911bd09da13p-188, 0x1.93c143a55cc53p-431, 0x1.464d0477a95a1p-1015, 0.0,
     0x1.e26deea1f15f8p-153, 0.0, 0.0, 0.0, 0x1.e2533c11529a1p-962, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1bfc6b4a55ec6p-106, 0.0, 0.0, 0.0, 0.0, 0x1.9878a6d8f557fp-108,
     0x1.9952eada88dcep-980, 0x1.8b8c671e9b993p-103, 0x1.92115584a70d8p-85,
     0x1.f8e55f8d7277cp-734, 0.0, 0.0, 0x1.e5ee372736cfdp-728, 0x1.623325cc75b67p-493,
     0.0, 0.0, 0.0, 0x1.00abf2d50455ep-1000, 0x1.767d0dda37f76p-785,
     0x1.dca24e12eea87p-656, 0x1.2c6326d3e407dp-354, 0x1.25a516c133fe9p-979, 0.0,
     0x1.e2385541f78c7p-468, 0.0, 0x1.97e48cb6f318ep-17, 0x1.73f1d7389e115p-260,
     0x1.6c6bc62bcf437p-419, 0x1.aac5cfb01fa49p-229, 0x1.1dff01ddf014dp-68, 0.0, 0.0,
     0x1.ae3ef3b1603b8p-313, 0.0, 0x1.ae760e290a89fp-37, 0.0, 0.0,
     0x1.e4a4d8cec7cf4p-563, 0x1.1ba119a65e881p-196, 0x1.c7aa94d4eea59p-87, 0.0,
     0x1.9492166c363dfp-455, 0x1.f6e24fad1fe6fp-99, 0x1.3eb53c89ce58p-359,
     0x1.52f984fd5ffe8p-638, 0.0, 0.0, 0x1.4ee217d5cef89p-271, 0x1.138b73d3fcfbep-722,
     0.0, 0x1.63afb02e0be0fp-255, 0x1.29be026cfd5abp-820, 0.0, 0.0, 0.0,
     0x1.0e5d96844405p-170, 0.0, 0x1.a1fcb61f7697ap-806, 0x1.56eb91344b004p-291,
     0x1.706133cd438bcp-2, 0x1.6dc5fac231e18p-573, 0.0, 0.0, 0.0,
     0x1.05dcc6f894226p-406, 0x1.149b4ec4b95f5p-944, 0.0, 0x1.48aa99acdc84p-964,
     0x1.7a4551f9060c4p-605, 0.0, 0x1.0271be2fa72a3p-424, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e33c3a8825217p-747
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
            tmp1 = Sleef_log2d4_u10kvx(tmp0);
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
    printf("Sleef_log2d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log2d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
