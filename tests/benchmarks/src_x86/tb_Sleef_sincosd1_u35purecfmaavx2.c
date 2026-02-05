/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd1_u35purecfma.c --function \
 *     Sleef_sincosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0x1.501a57d780363p-928, 0.0, 0x1.9c38eb9b2898ap-218, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2ac01828cb73fp-457, 0x1.7cb46dc7d3eefp-275, 0.0,
     0x1.317abbd9912bfp-117, 0.0, 0x1.e4c94ae446183p-420, 0x1.6447ae66454a2p-341,
     0x1.39233b6c6e46dp-222, 0x1.a8ed0fbefe545p-734, 0x1.d0b49291075c4p-652, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3c3f443f2f4ccp-586, 0.0, 0.0, 0.0, 0x1.6784f9e95c0fep-384,
     0.0, 0.0, 0x1.90534c7fe5c7ep-886, 0x1.ce6fdf7e51e28p-569, 0x1.9bbfdd050b20ap-943,
     0x1.6335a5217b5bbp-544, 0.0, 0x1.ed5d353cd5c6bp-278, 0x1.fdd51ff54594ap-486, 0.0,
     0x1.e7face48595e3p-433, 0x1.cc7cfb010aa31p-667, 0x1.cf1457f06c8b8p-284, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8f06bbb8b73dcp-605, 0.0, 0.0, 0x1.48b5a22747fd1p-185, 0.0,
     0x1.74a18ad83167ep-932, 0x1.de24d2d17e965p-251, 0x1.a288b068e49b4p-926,
     0x1.f27c827ea3566p-125, 0.0, 0x1.094dbedcca336p-763, 0.0, 0x1.d6a0ad63bc695p-67,
     0x1.38b2ea80c05ecp-120, 0x1.a9b10bbfa426ep-314, 0x1.d74aa4c733edp-948, 0.0, 0.0,
     0x1.af09ee39c880ep-209, 0.0, 0x1.13dbc936b9849p-129, 0.0, 0x1.a56b95ec3a513p-358,
     0x1.4ecd15d379b9cp-349, 0.0, 0x1.0348fb63ccfe4p-908, 0.0, 0.0, 0.0, 0.0,
     0x1.fe29e9bf73bc2p-211, 0x1.3c77ca98045d7p-810, 0x1.2d93a466e52fcp-227, 0.0,
     0x1.a3723bdf6d291p-423, 0.0, 0.0, 0x1.52e659cb7672p-525, 0.0,
     0x1.ddca8601fa761p-415, 0.0, 0.0, 0x1.0fdd35c7d99fcp-120, 0.0, 0.0,
     0x1.c3e3929193792p-932, 0x1.31cfa53a9841bp-142, 0x1.b7944b064f034p-438, 0.0, 0.0,
     0x1.70b6bc8377ca6p-201, 0x1.0463207b1d554p-12, 0x1.f291011831487p-1019, 0.0,
     0x1.eb82d47b4516ap-139, 0.0, 0.0, 0.0, 0x1.d140d2ec132f2p-201, 0.0,
     0x1.3ce75edf26992p-757, 0x1.dea2e00981f01p-888, 0x1.b617233268fbbp-467, 0.0,
     0x1.19f26ed0c810cp-581, 0x1.db27fe090a79dp-32, 0x1.90f385078436p-848, 0.0, 0.0,
     0x1.57b59e59ed39fp-558, 0x1.fc8024e28202p-715, 0.0, 0.0, 0x1.6fe04d34bf902p-269,
     0x1.7dc5ad01e428ep-487, 0x1.e99de57ffce3bp-965, 0x1.5172cca0032ccp-749,
     0x1.7ee637697edeep-546, 0.0, 0.0, 0x1.93aab19ab3714p-345, 0.0,
     0x1.77e58405037fcp-439, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a68b34cb0652ep-503, 0.0, 0x1.e510b3224d233p-407, 0.0,
     0x1.af6b11991caabp-1015, 0x1.55ccf0ba31097p-668, 0.0, 0x1.049e1c6d3f88cp-937,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c681356ebdeb3p-397, 0.0, 0.0, 0.0,
     0x1.6d6d0492eb9fcp-14, 0.0, 0.0, 0.0, 0x1.8c8d9ea4c057ep-90, 0.0, 0.0,
     0x1.75c4ab0fa1179p-670, 0.0, 0.0, 0x1.3dae62bdacdefp-239, 0x1.15f586013554cp-870,
     0.0, 0.0, 0.0, 0.0, 0x1.2b16e05610364p-705, 0x1.83dffd59de781p-182,
     0x1.b16d8f7e8e16dp-608, 0x1.d80a9706bb8p-648, 0.0, 0x1.55e23500dd698p-696, 0.0,
     0.0, 0.0, 0x1.e344bf907982dp-491, 0x1.22fdf7498b8c5p-709, 0x1.4c817cedf1fb1p-154,
     0.0, 0x1.f61fcd6d373f6p-360, 0x1.9e937634a8a02p-564, 0.0, 0x1.898de905d7446p-686,
     0x1.ee9dbb4646b44p-483, 0.0, 0x1.5602b6576026p-509, 0x1.108bf343b27c1p-573, 0.0,
     0x1.89e2ef5f45313p-397, 0x1.827e9caccf9d5p-9, 0x1.c088156e815edp-501,
     0x1.f44ee85f02f74p-308, 0x1.785bddb5aac29p-231, 0.0, 0.0, 0x1.8f83dff61297bp-530,
     0.0, 0x1.5265316d0e478p-947, 0x1.c5c2919ef9f4p-890, 0x1.4b591c3b0a91dp-311, 0.0,
     0x1.8891e40d92b6p-220, 0.0, 0.0, 0x1.87d3c5d13aea9p-557, 0.0,
     0x1.7ac9781ff2bc6p-551, 0x1.242012d2253b7p-742, 0x1.42cd3b4a29c7cp-303, 0.0,
     0x1.b3979fdb412a4p-394, 0.0, 0x1.2753a32492b4cp-657, 0.0, 0x1.f9cf34ca01ebfp-677,
     0.0, 0.0, 0.0, 0x1.a65e87925887fp-184, 0.0, 0x1.d1d2d3e597fp-879,
     0x1.372c09fe4df9dp-356, 0x1.959c369a30037p-272, 0x1.6081ad933169p-705, 0.0,
     0x1.747e77812c421p-313, 0.0, 0x1.9042634c81b6cp-674, 0.0, 0.0, 0.0, 0.0,
     0x1.78e96de083544p-469, 0x1.889d5936bf18ep-641, 0x1.550bb314a5b51p-467,
     0x1.1c81878d5d3bdp-491, 0.0, 0x1.f35a0b4ea3c37p-818, 0x1.e2f55a68074cp-795, 0.0,
     0.0, 0x1.8a671863b9327p-879, 0.0, 0x1.e5b632ce4251fp-701, 0.0,
     0x1.42ccc094f0143p-752, 0x1.a3b924ea15f7dp-232, 0x1.c9c4273b9095ap-876,
     0x1.65eb29c6b59b8p-642, 0x1.5426971150b8fp-921, 0.0, 0x1.0c7143d76e432p-473,
     0x1.0e950f408c6dap-982, 0x1.080b44365c1a6p-798, 0x1.65e28e47e6d41p-272,
     0x1.06ad4d9c4bbc5p-261, 0.0, 0.0, 0x1.94457a17360adp-980, 0x1.deec5639f0d47p-691,
     0x1.a8d8ec2e706acp-147, 0x1.34d12660ccb18p-30, 0.0, 0x1.ec69eb483209ep-696,
     0x1.452e932a16329p-733, 0x1.9fe3012334b9bp-381, 0.0, 0x1.126dd2d62480cp-49,
     0x1.773864df671dep-905, 0.0, 0x1.de386b69f9bf3p-355, 0x1.6209b59a92cf1p-364,
     0x1.c4100ef27385dp-994, 0x1.5a1e71a105794p-915, 0.0, 0.0, 0.0,
     0x1.7184f5ba02d85p-270, 0x1.12331cd0d6978p-617, 0.0, 0x1.c1416430d0194p-857, 0.0,
     0.0, 0x1.b506189bacd42p-582, 0.0, 0x1.311a077f9045ep-322, 0.0,
     0x1.3c1fd3be2c56fp-291, 0x1.ae709a4533f04p-484, 0.0, 0x1.38cd45085cd1dp-584,
     0x1.66f8c0f147faap-344, 0x1.edead8a752035p-577, 0x1.2bff601a240cp-662,
     0x1.191eacb499237p-209, 0x1.911a689091ae9p-260, 0x1.294d5c15862dp-750, 0.0, 0.0,
     0x1.1879257a8d225p-363, 0x1.688266dbee627p-167, 0x1.e807ce680852fp-380, 0.0,
     0x1.1e5160284e152p-835, 0x1.662885b68fe29p-257, 0x1.d55bc9ff003ebp-416,
     0x1.7747b1ad33c4p-446, 0x1.aa50145e21e42p-108, 0.0, 0.0, 0.0, 0.0,
     0x1.ff265eb38db57p-562, 0.0, 0.0, 0.0, 0x1.aec0d44fad831p-665,
     0x1.119f1cee5e5abp-243, 0x1.16ca8fba38a9dp-406, 0x1.47da29f5225f1p-864,
     0x1.a25116894a31dp-53, 0x1.9e8bdd812c458p-787, 0.0, 0x1.ce1699c0674f5p-756,
     0x1.6ec24237483ddp-689, 0.0, 0.0, 0.0, 0.0, 0x1.7d8a7dc8fc885p-697,
     0x1.6d1fcf1bfa60dp-992, 0x1.1385a2907757ep-961, 0.0, 0.0, 0.0,
     0x1.39d75cb02f11ep-367, 0.0, 0x1.52dd5f4a17b0bp-780, 0.0, 0x1.8e8023e965524p-942,
     0.0, 0x1.9124734642d8bp-608, 0.0, 0x1.a57af2cdd9e75p-774, 0.0, 0.0, 0.0, 0.0,
     0x1.9c6f685e48e9fp-667, 0.0, 0x1.f79e8817b496bp-450, 0x1.b91754d6ebec9p-205,
     0x1.ec8f115b0be21p-1002, 0.0, 0x1.6026dd2cf9083p-987, 0x1.1c56519baa9b8p-813,
     0.0, 0.0, 0x1.8af1d4dbbf18fp-1007, 0x1.860158b603392p-378, 0.0,
     0x1.6c18cd1198dfap-99, 0x1.e5b3efd923db5p-508, 0x1.6b97e209bbe29p-182, 0.0, 0.0,
     0.0, 0x1.90ee2147722b5p-967, 0.0, 0x1.3b2078d1082fdp-478, 0.0,
     0x1.ff95968372d25p-814, 0.0, 0x1.2979eb037547bp-890, 0.0, 0.0, 0.0,
     0x1.5191a1312f54p-240, 0x1.e1c0a932d21efp-47, 0x1.90f154e894229p-821,
     0x1.fc8030916d3d5p-770, 0.0, 0x1.4882ce9466d09p-734, 0x1.eb8750ae4b35dp-1015,
     0.0, 0.0, 0x1.44ca8b5a690b2p-976, 0.0, 0x1.b6d71d8ebf0f7p-600,
     0x1.98c28ef74754dp-746, 0.0, 0.0, 0x1.6bdea5329f8a5p-119, 0x1.eec98c1c00262p-154,
     0.0, 0x1.5c10cd8c1e882p-921, 0.0, 0.0, 0x1.79fec68f4afecp-96,
     0x1.bf38d8dd4f83dp-200, 0.0, 0.0, 0.0, 0.0, 0x1.d43d655d16729p-727,
     0x1.88c62c65454cbp-68, 0.0, 0.0, 0.0, 0x1.079d22b54feaep-539,
     0x1.48f21eca2dd4dp-787, 0x1.43469a337eda2p-90, 0x1.d24ac09656c59p-65, 0.0, 0.0,
     0x1.41f94a6f904f1p-725, 0.0, 0.0, 0.0, 0.0, 0x1.2171e6bc439c6p-460, 0.0, 0.0,
     0x1.1967304d051bap-803, 0x1.52c6550e809bcp-57, 0x1.8c87d75f13a13p-223, 0.0, 0.0,
     0.0, 0x1.d336f6125e994p-600, 0x1.7836eb5abb354p-333, 0.0, 0.0,
     0x1.52a7a86c21d8fp-865, 0.0, 0.0, 0.0, 0.0, 0x1.b0089d01562fap-821,
     0x1.2272d682526dcp-468, 0.0, 0x1.f71ce5d686fe9p-150, 0x1.b813db020dd02p-326,
     0x1.5cb23c3ae901cp-119, 0.0, 0.0, 0.0, 0x1.9952388dd8cefp-989, 0.0,
     0x1.b37a09fea9221p-883, 0.0, 0.0, 0.0, 0x1.d02860b2e8e5ap-278,
     0x1.f97f1034301c7p-956, 0x1.48adc0039aa01p-295, 0x1.ce7a8ddc96a25p-148, 0.0,
     0x1.98aeb6babd0cdp-724, 0.0, 0x1.d8fd49bb3496bp-838, 0x1.1019075962efp-270, 0.0,
     0x1.337689b830df4p-202, 0.0, 0x1.de731e9eb022p-205, 0.0, 0x1.0868f882b217ap-260,
     0x1.024a80ce7e42bp-518, 0x1.b7e1dfed3185bp-295, 0.0, 0.0, 0.0,
     0x1.c94ecd243aed5p-365, 0x1.35edad789637bp-430, 0.0, 0x1.dc3e0d71151c6p-447,
     0x1.33996148d42c9p-526, 0x1.2e5ca74575e63p-203, 0.0, 0.0, 0.0,
     0x1.d505ae113eb05p-453, 0x1.9200c62c0350fp-791, 0x1.3c380d22d606cp-960, 0.0, 0.0,
     0.0, 0x1.a811d15d900b9p-177, 0.0, 0x1.1825058866fe8p-545, 0.0, 0.0,
     0x1.35616b1244556p-271, 0.0, 0.0, 0x1.d6c94b32f0d66p-330, 0.0, 0.0,
     0x1.c8794ece704cdp-969, 0.0, 0x1.abdf3d846fdb6p-499, 0x1.6317226b37386p-283,
     0x1.4cc7b02da973ep-1005, 0x1.c62c0022478fp-146, 0.0, 0.0, 0x1.6ce15f34ea64dp-483,
     0x1.a4d883957e95dp-347, 0.0, 0.0, 0x1.3980ccd317bb9p-639, 0x1.35dcd8a47cd6ap-576,
     0x1.a52dc6d210689p-948, 0x1.0ee50776e2683p-526, 0.0, 0x1.9bb7b81599b16p-993,
     0x1.68c9635ffdf86p-83, 0.0, 0x1.0e29188234a27p-135, 0.0, 0x1.7ec28c2f4967bp-217,
     0x1.cbc8bbbe4976cp-373, 0x1.7911bb0bcc9afp-428, 0.0, 0x1.9184007d5e1c1p-582, 0.0,
     0x1.4442a8be23521p-305, 0x1.cbe47eb9a58dep-485, 0x1.2b291821f7113p-386,
     0x1.406d2f015edfcp-197, 0x1.af0cce8d17e69p-958, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2356e82b8e084p-637, 0x1.60511b17cc49ap-590, 0.0, 0.0, 0.0, 0.0,
     0x1.1e334f776f5bdp-526, 0x1.83dd659b3b2edp-657, 0.0, 0.0, 0x1.3e91369fcee79p-418,
     0.0, 0x1.346e7cf90e6dfp-743, 0.0, 0.0, 0.0, 0.0, 0x1.acbced1a1918ap-397,
     0x1.7bb7b97255634p-99, 0x1.cfef516eb0304p-945, 0.0, 0x1.ba76b2c339167p-438, 0.0,
     0x1.aba63931a5a44p-1002, 0.0, 0.0, 0x1.d21b78d9c9fc3p-175, 0.0, 0.0,
     0x1.4c129af779277p-562, 0x1.42d25ec57a4cap-465, 0.0, 0.0, 0x1.6b33514cf9a8cp-26,
     0x1.09ee07c7d082cp-363, 0.0, 0.0, 0.0, 0x1.b5b127da2d81ep-670,
     0x1.1ae83257b33b2p-577, 0.0, 0x1.a05413d860de7p-116, 0x1.987898dc662cbp-824,
     0x1.a1c5b9ee2568ep-837, 0x1.61cd864f8449fp-738, 0x1.d958d4779e645p-412, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3421baf5c31b2p-312, 0.0, 0.0, 0x1.6747c32af4f19p-85, 0.0,
     0.0, 0x1.b3836b78df4dap-522, 0.0, 0x1.6c8f0ee090e22p-895, 0.0,
     0x1.40371f33275dbp-323, 0x1.2bbd8e8400d3ap-919, 0.0, 0.0, 0x1.158b1a73968a1p-609,
     0x1.9a75fbd880be4p-50, 0x1.548042e3a82d5p-522, 0x1.c311bc97b8a9ap-1014, 0.0, 0.0,
     0.0, 0x1.118685b0345b1p-147, 0x1.61b050a6e4b53p-352, 0.0, 0x1.adf1d9dd0707cp-651,
     0x1.f2010472dd17p-268, 0.0, 0.0, 0x1.f4093ff37d2abp-59, 0x1.4516ac32a3065p-359,
     0x1.229420beac08dp-690, 0.0, 0.0, 0x1.abe6931ad48c3p-424, 0x1.6c1f9ce7a9c38p-418,
     0.0, 0x1.dac18cffb8763p-522, 0.0, 0x1.9594e6412cef1p-326, 0.0,
     0x1.359e15d31c186p-81, 0x1.15aaaf11ab31bp-970, 0.0, 0x1.84100a524246fp-1010,
     0x1.fd904dc4b944ep-465, 0x1.609a97916dbdcp-95, 0.0, 0x1.0f287740b64p-720, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.eeba29d0f7a26p-59, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5dd6669373bc4p-663, 0x1.077d7010b4b9ep-856, 0.0, 0x1.618770c63fb37p-908,
     0x1.2414087153f3bp-1017, 0.0, 0.0, 0x1.c9137f69cb73ap-749,
     0x1.322c306c88b2ep-122, 0.0, 0x1.d851bd76ee213p-803, 0x1.5fac3cc95ad37p-134, 0.0,
     0x1.8c00e945503a3p-492, 0x1.9be1b89819d2ep-594, 0x1.80a53e8662c0cp-70,
     0x1.25c062ca578fp-992, 0.0, 0.0, 0x1.5b4cc35a46445p-86, 0.0, 0.0,
     0x1.75da177521779p-199, 0.0, 0.0, 0x1.8e8cbd46a1fdfp-520, 0x1.b5f481d1a555ep-680,
     0.0, 0x1.6e671f2b0c98bp-384, 0x1.2aa410c0419f7p-509, 0.0, 0x1.e70a2a51573ebp-21,
     0x1.3b4958d791dd6p-70, 0x1.bf0fed0f9ad65p-328, 0.0, 0x1.ec73860a5aadbp-119, 0.0,
     0.0, 0.0, 0.0, 0x1.7023697681776p-711, 0x1.e2edc5bcd2955p-68,
     0x1.95d4463ebaf6bp-216, 0.0, 0.0, 0x1.daed0483785c5p-640, 0x1.1ba994b2e4a4fp-575,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0384f25bea3dcp-256, 0x1.a62ec23c79ca1p-640,
     0x1.7a1420bdb7a7dp-406, 0.0, 0x1.0e3133cf7cep-65, 0.0, 0x1.2956855856937p-609,
     0.0, 0x1.9dc1b58255674p-883, 0x1.861af263748f5p-334, 0x1.03bdbf35cc9b9p-733, 0.0,
     0.0, 0.0, 0x1.8ace31ea707b5p-513, 0x1.0a20bfeb33c1cp-8, 0x1.c565f2698263dp-337,
     0x1.f6c9c5e9cc2bbp-366, 0x1.5cd4144f92a8p-7, 0x1.c26f1aec7d50cp-734, 0.0, 0.0,
     0.0, 0.0, 0x1.2c4edd2649985p-144, 0x1.74deeb93605acp-986, 0x1.a8cf00cd9de43p-809,
     0x1.a59d544fb2b5bp-939, 0x1.f55f82f24675bp-74, 0x1.f254f65e3a7p-81, 0.0,
     0x1.476c8c949586cp-342, 0x1.b392425a78131p-517, 0x1.93a3a282d78afp-910,
     0x1.df1561ee31e1ap-563, 0.0, 0.0, 0x1.ebda8508daaa7p-499, 0.0,
     0x1.094436d3e7779p-857, 0x1.e048d381a1c7dp-20, 0.0, 0.0, 0.0,
     0x1.7b3491dc98bc7p-956, 0.0, 0.0, 0x1.59954eb2296f9p-743, 0x1.7b54b0ec3d2b6p-747,
     0.0, 0.0, 0.0, 0x1.e0df99f092adap-614, 0.0, 0x1.ba7fed8494796p-160, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d7d48a2b21dbp-743, 0.0, 0x1.c1d122a52b35fp-898,
     0.0, 0x1.fc986a2642ae3p-448, 0x1.6868bb779d72fp-881, 0.0, 0x1.bdba3729c8405p-446,
     0x1.aafaaaf1f588bp-8, 0.0, 0x1.d1db407fe4bf5p-557, 0.0, 0.0,
     0x1.f3f967bdc9707p-466, 0x1.7de8c34a77c09p-706, 0x1.89673c6b3ea97p-953, 0.0,
     0x1.3f16d744066d4p-33, 0x1.4134f19e9dadfp-728, 0x1.f757de890982dp-53,
     0x1.9e139071b1029p-816, 0.0, 0.0, 0x1.3e9b844cae863p-21, 0x1.5040524825adp-11,
     0.0, 0x1.a4f08810a8f22p-393, 0x1.a921b6eae0985p-143, 0x1.2b2d8253099bfp-497,
     0x1.633f451ca2507p-566, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f069025787d1bp-284,
     0x1.5853e22508f1p-494, 0x1.8231bf4138f5cp-946, 0.0, 0.0, 0.0,
     0x1.f9cb73243449ap-1013, 0x1.5fd7d63ff9abcp-522, 0x1.0b9c262cf0519p-138,
     0x1.31e1fc36e12dp-70, 0.0, 0x1.bcd6bcfc5ac6ep-76, 0x1.6dc56d53b0099p-1018,
     0x1.ce9b8c7aa1f0dp-450, 0.0, 0.0, 0.0, 0.0, 0x1.638488386741fp-225,
     0x1.c3b2d1b404adcp-621, 0x1.a49358c87a446p-150, 0.0, 0.0, 0.0, 0.0,
     0x1.36b59375fff8dp-596, 0.0, 0.0, 0x1.325fcf981d9d7p-781, 0.0,
     0x1.fcd4ec2ca63fcp-70, 0x1.a164abfdcfd3bp-102, 0.0, 0x1.3db87336fdcbap-353, 0.0,
     0.0, 0x1.f903d35849014p-804, 0.0, 0x1.8b4d3fcd87ec9p-610, 0x1.2bff9b3c0453bp-133,
     0.0, 0.0, 0.0, 0.0, 0x1.d342c992ff881p-183, 0x1.74f07baa203ebp-586, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ef44f80cbaab8p-318, 0x1.a0174c2ad224fp-753, 0.0, 0.0,
     0.0, 0x1.760e6c8a993d9p-121, 0.0, 0.0, 0x1.6ce9a95f766a6p-144,
     0x1.3b487df5f5924p-421, 0x1.9486d35752bb1p-78, 0x1.0fda6a219456p-289,
     0x1.04b596950d085p-642, 0.0, 0.0, 0.0, 0x1.a7723a2d78a2cp-70, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c22429cebc5a5p-185, 0.0, 0x1.7682b90829d7fp-349, 0.0,
     0x1.a0dbf4f576402p-628, 0x1.88a346c0f12c3p-421, 0x1.6ebf8eebfc2f3p-80, 0.0, 0.0,
     0.0, 0x1.49694badc7d65p-435, 0.0, 0.0, 0x1.f3e2a7b99b522p-79, 0.0,
     0x1.a471313eba15bp-834, 0.0, 0.0, 0x1.c638939940448p-10, 0x1.221928c1c33aap-284,
     0x1.401b8fe7c215bp-136, 0.0, 0x1.1f3d3cab41fb6p-311, 0.0, 0.0, 0.0,
     0x1.1d22f4d069f46p-468, 0.0, 0x1.e5860ccdfbd94p-701, 0x1.64bbcf4725a3dp-403, 0.0,
     0.0, 0.0, 0.0, 0x1.3d00ab4ad7485p-854, 0x1.fbd7e01ea76a1p-298,
     0x1.dc12d3afaf5c7p-957, 0x1.1ec26f0f08eaep-187, 0x1.e30b32cd87484p-82,
     0x1.dc7b9b3957b2dp-590, 0x1.8b9e62a289533p-748, 0x1.07f6325be795cp-283,
     0x1.d5a47b9684961p-478, 0.0, 0x1.9d0e70cddacc3p-995, 0x1.67955a712fa4bp-775, 0.0,
     0.0, 0.0, 0.0, 0x1.b78760af5685dp-413, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.03fe39e46c0dep-603, 0.0, 0x1.119fdae64c2ap-756, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db01c059dedaep-45, 0.0, 0.0, 0.0, 0x1.8b609f3d61149p-125,
     0x1.a6ac6dca32aa2p-402, 0.0, 0x1.f1022ee5ebeap-182, 0.0, 0.0,
     0x1.07f960db88717p-847, 0x1.c02f6106071e8p-482, 0x1.b7a8534853b9dp-986,
     0x1.24391f368b343p-281, 0.0, 0.0, 0.0, 0x1.8895b31a633b6p-723,
     0x1.0c8bb4633ca04p-871, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a3055988d00ep-746, 0.0,
     0x1.128301d83d788p-199, 0x1.a551e625d5585p-887, 0x1.876c52b4cf52fp-488, 0.0,
     0x1.20fc2e190f208p-592, 0.0, 0.0, 0.0, 0x1.5b00b8e3492ffp-192, 0.0, 0.0, 0.0,
     0.0, 0x1.e86dc7382c0c7p-16, 0x1.fe6299b9aa17cp-166, 0x1.f82ab05b10408p-467,
     0x1.6c753efd5181cp-842, 0x1.7f9c06b11bff5p-458, 0.0, 0.0, 0x1.ae7415eb84b9fp-167,
     0x1.2a2a6a17b7bc4p-970, 0.0, 0.0, 0x1.b158930ec35dcp-603, 0.0,
     0x1.dc8b076ded386p-668
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincosd1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_sincosd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosd1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
