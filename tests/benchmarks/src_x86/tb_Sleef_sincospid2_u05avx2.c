/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid2_u05avx2128.c --function Sleef_sincospid2_u05avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.f1c057d5a114bp-819, 0.0, 0.0, 0x1.28b314efc9f9bp-380,
     0x1.bb245c14ef901p-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c829376eb508p-907, 0.0,
     0x1.13b1b0f97792ap-868, 0x1.eca4940685eb8p-767, 0.0, 0x1.8a49fee487637p-151,
     0x1.eb0041d1737dfp-282, 0.0, 0.0, 0.0, 0.0, 0x1.889442ae3757dp-924, 0.0,
     0x1.0dadd82a47347p-642, 0x1.465d3a9130c35p-368, 0.0, 0x1.85f4d643a638p-190, 0.0,
     0x1.ba64095a877c3p-83, 0x1.e30c05d8e74a9p-634, 0.0, 0x1.539e50e0f57dp-556,
     0x1.7259549b5f0aep-131, 0x1.eb122deff7a8fp-1012, 0x1.72d192e882f67p-533, 0.0,
     0.0, 0.0, 0x1.c861bdb76bb5fp-820, 0x1.199b216208d2fp-795, 0.0, 0.0,
     0x1.1def29b6efa47p-651, 0x1.1884331426d33p-185, 0x1.98ac0ae264185p-549, 0.0,
     0x1.70b2e6b0bdaacp-223, 0x1.c99e91dbb8c47p-378, 0x1.5adf9fc48ad67p-859,
     0x1.6414af52351dp-477, 0x1.618c2546b0dbbp-828, 0x1.5f56e76563d4cp-426,
     0x1.14ee8826ec245p-367, 0x1.f866561658d2p-948, 0x1.1a0b2c07618ffp-198, 0.0,
     0x1.f332dd6108bd2p-305, 0.0, 0.0, 0x1.fa8ff70e6b648p-339, 0x1.14e7daba842fap-501,
     0.0, 0.0, 0.0, 0.0, 0x1.02d2f8356edb8p-739, 0.0, 0.0, 0x1.718a367c77eb9p-298,
     0x1.5973bafcf29b8p-566, 0.0, 0x1.be5fb8b3c9cb2p-46, 0x1.95f8dd142ae05p-50, 0.0,
     0.0, 0x1.1b413edb84f36p-370, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d54289c1efd6p-949,
     0.0, 0.0, 0.0, 0x1.350c92c08bb3dp-447, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8dd73e8d0ddfep-442, 0x1.306f3c47082acp-21, 0.0, 0x1.4333ee9201b9dp-1006,
     0x1.7143c3c885147p-645, 0.0, 0.0, 0x1.2c81f551ea347p-733, 0x1.1abd3f8e44c9p-103,
     0.0, 0.0, 0x1.19ffddf6f3963p-170, 0.0, 0x1.b04eb2a9fa915p-104,
     0x1.9a928a89adbfep-850, 0x1.c1ee815a81533p-793, 0x1.9a0d311f4f002p-872,
     0x1.f8bb377563986p-24, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7a407e7905fbp-612, 0x1.91c4de294cc37p-863, 0x1.8b7203532ade8p-146,
     0x1.e696b4cee8dc5p-86, 0.0, 0x1.d8dfb20c8d799p-795, 0.0, 0x1.d518225d10965p-267,
     0.0, 0x1.707d48448f63cp-439, 0.0, 0.0, 0.0, 0x1.0feb1a3c2ef8ap-931,
     0x1.844995fab28eap-208, 0x1.dfd41f329d845p-395, 0.0, 0.0, 0.0,
     0x1.cbce4f92afde3p-825, 0.0, 0x1.1f6220895e2a9p-7, 0x1.8b603016153abp-327,
     0x1.cc4cd878a59acp-333, 0x1.091e50d240daep-37, 0.0, 0x1.6bda27a7a38a3p-998,
     0x1.bcf032772c2b8p-55, 0.0, 0x1.85ec142d4e884p-863, 0.0, 0.0,
     0x1.b0b3290541e7dp-382, 0.0, 0x1.cbde9f705fea5p-143, 0x1.2d91aa50c7ae5p-224,
     0x1.baf28192e01cap-551, 0.0, 0.0, 0.0, 0x1.77f46fcabad5bp-230, 0.0, 0.0, 0.0,
     0.0, 0x1.5e544721ec2d1p-673, 0x1.2d5cc8b9b8859p-533, 0.0, 0x1.39445efbca7dp-133,
     0x1.97c5e9522e061p-471, 0.0, 0x1.eab5df7226f09p-719, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.49ce82e8c64ddp-536, 0x1.4fda7347b0ae3p-449, 0x1.a609e71c47a5cp-510, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.905a72207b442p-300, 0x1.78aa2c090dc69p-1010, 0.0, 0.0,
     0.0, 0x1.841299b8eb3cap-251, 0.0, 0x1.733edc784382p-808, 0.0,
     0x1.1af9c8c7b937p-143, 0x1.86400192f99b7p-596, 0.0, 0x1.53df3ede42e14p-662,
     0x1.ee243c7352489p-26, 0.0, 0x1.8462d58f47d03p-729, 0x1.5831419929eb5p-916,
     0x1.1309f3b2f0ed1p-331, 0x1.f84c711614af3p-283, 0.0, 0x1.201ed8dda566cp-992, 0.0,
     0x1.ed5b467c538d7p-708, 0.0, 0x1.5f5b8b014e50dp-767, 0.0, 0.0, 0.0,
     0x1.977869201d51ap-92, 0.0, 0x1.70c0bc9b29359p-128, 0x1.17b3afb293b4fp-843, 0.0,
     0x1.0c89ebb83829p-967, 0x1.9f33f84aab03ep-980, 0x1.78076ffda5f95p-920, 0.0,
     0x1.32851bed9b4f6p-489, 0.0, 0.0, 0x1.6e1aa54723c9cp-781, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d1e8fac5b8609p-211, 0.0, 0.0, 0x1.19f2d9a42a85ap-178,
     0x1.efe3bb32c09c4p-441, 0.0, 0.0, 0x1.9a082c1f232bdp-560, 0x1.0ad9584d226abp-569,
     0.0, 0x1.06603a1c63182p-181, 0.0, 0x1.2101379dc0b2p-204, 0x1.4d4d31c28b767p-410,
     0x1.ab9bd684cf5dp-207, 0.0, 0x1.6b98409e266b8p-74, 0x1.6b230d11e583bp-89,
     0x1.3e235fddf1d95p-1009, 0x1.aa60ad885ac4cp-751, 0.0, 0x1.353cee0c5c85fp-542,
     0.0, 0x1.738e305fa91b4p-547, 0.0, 0.0, 0.0, 0x1.5ca07638c4a24p-439,
     0x1.13f10657755aap-585, 0x1.1f6f4c94d45a9p-436, 0x1.c2eb1b74e41c9p-886,
     0x1.1e562c557a4c5p-277, 0x1.86d6d56258665p-373, 0.0, 0x1.c2f792215f3e6p-99,
     0x1.a6120204a998cp-234, 0.0, 0x1.44d608806e402p-59, 0.0, 0x1.47c40dfd34b0ep-1002,
     0.0, 0x1.022ce04795b02p-597, 0.0, 0x1.5631aeeb51fb6p-486, 0.0, 0.0, 0.0,
     0x1.7a34bbc631aa9p-28, 0x1.f6e02879ac258p-759, 0x1.b9f2bcf357c06p-773, 0.0,
     0x1.5af886bfbfd3cp-549, 0.0, 0.0, 0x1.c20754dfe2781p-725, 0.0, 0.0,
     0x1.fb7bb0729d04ep-149, 0x1.635d4bb7e4be9p-552, 0x1.3b4e5482c5921p-304, 0.0, 0.0,
     0.0, 0x1.daa8601b463e4p-238, 0x1.6512c5824926bp-813, 0.0, 0.0,
     0x1.401985c0c7914p-1011, 0.0, 0x1.3877877a608bcp-260, 0.0, 0.0, 0.0,
     0x1.7d5d51104ad38p-677, 0.0, 0.0, 0.0, 0x1.cfb550297c7f4p-462,
     0x1.4dfb0f3e66d35p-203, 0.0, 0x1.ff5d28695bdd4p-242, 0x1.e9735a810323ap-780,
     0x1.2174480a686cbp-204, 0.0, 0x1.106036b4dc0b9p-688, 0x1.c122f91b5908bp-858, 0.0,
     0.0, 0.0, 0.0, 0x1.ec288dda6706ep-257, 0.0, 0x1.4cb9ae8a8b14p-533, 0.0, 0.0,
     0x1.231cabba2df52p-395, 0.0, 0x1.036d5c67b2a93p-326, 0.0, 0.0, 0.0,
     0x1.ac59766940c86p-735, 0.0, 0x1.7332064923f14p-786, 0x1.c434883fe71f1p-454,
     0x1.3ea7588c45932p-861, 0x1.c8c35c552abe3p-1010, 0x1.38b040342c028p-841, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b80f2faf64f82p-757, 0.0, 0.0, 0.0, 0x1.88bcc64ac6233p-28,
     0.0, 0x1.7dea9678bd922p-375, 0.0, 0x1.316f8a793c5fep-261, 0.0,
     0x1.7f2d60fb286b1p-451, 0.0, 0x1.8c616f02c3427p-293, 0x1.8b9547b81c8dp-349,
     0x1.076a310c798c5p-361, 0x1.ccb4914bb21c5p-270, 0.0, 0x1.a5e627876d338p-756, 0.0,
     0x1.2a9b0dd88a02fp-785, 0.0, 0x1.787115538b349p-13, 0.0, 0.0, 0.0,
     0x1.05b7d6f4b25c5p-187, 0.0, 0x1.52b68374b8935p-266, 0.0, 0.0,
     0x1.2169ab3d1aa3dp-895, 0.0, 0.0, 0x1.c41173a1daf89p-416, 0x1.67ec82bf50195p-709,
     0.0, 0x1.2cb7b9ef385a2p-63, 0.0, 0.0, 0.0, 0.0, 0x1.9eda650a60ddap-724,
     0x1.1f5093504a726p-231, 0.0, 0.0, 0x1.edffd7e74930cp-551, 0x1.eb67ce7994362p-449,
     0x1.9d9f64df8f9a7p-734, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d49d6cebf19p-102, 0.0,
     0x1.909b44b4191b3p-858, 0x1.d06bb203f5148p-393, 0x1.1085c472fbfe2p-834,
     0x1.e4c0f30df6b91p-911, 0x1.9deac3257ceb9p-556, 0.0, 0x1.bdbb0f55e6671p-810,
     0x1.011f0d1b88bb7p-176, 0x1.ca081f2f7e1abp-325, 0.0, 0x1.93ef6923d200cp-86, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bc3f2a152d5e1p-784, 0.0, 0x1.22ab4c0d31b3cp-282, 0.0,
     0.0, 0x1.524f058c30174p-188, 0.0, 0x1.f2ca11b5f5c86p-1017,
     0x1.5c8fe210aa462p-666, 0x1.0d5c8e6420596p-125, 0x1.3d0f5e9984bf3p-598, 0.0,
     0x1.5c1bd0bcbbcadp-188, 0x1.21d79186fb2e6p-649, 0x1.d8c74d6102c15p-807, 0.0, 0.0,
     0x1.d0f2728da5a4p-590, 0x1.ccdb41a276da2p-802, 0.0, 0.0, 0x1.704de6dee54c1p-600,
     0x1.2967c5e9a4b96p-458, 0x1.1567e36cfc777p-98, 0x1.8db01b1b67376p-293, 0.0,
     0x1.63b99c34efddbp-778, 0.0, 0x1.66ae3b0f32435p-599, 0x1.3f4da012056e1p-642,
     0x1.3760452a31ec9p-730, 0.0, 0x1.2bc05cb658e11p-917, 0x1.8c47d68d94467p-642,
     0x1.00651adc633cdp-890, 0.0, 0.0, 0.0, 0x1.b6a6ef3a17fe8p-594,
     0x1.556d54593b015p-518, 0.0, 0.0, 0.0, 0x1.b4691f27d9384p-760, 0.0,
     0x1.de9d513899212p-694, 0.0, 0.0, 0x1.1f71e52d2007ap-824, 0.0, 0.0, 0.0, 0.0,
     0x1.475369f2e6771p-98, 0x1.4ee636247897p-555, 0x1.281a9c85fd3c2p-590,
     0x1.5541bf769d65ep-768, 0.0, 0.0, 0.0, 0x1.461e76ce4715ap-958,
     0x1.fa7f92e187e8ap-479, 0x1.26e45ed7b7decp-368, 0.0, 0.0, 0.0,
     0x1.d5303b22cf3fp-588, 0x1.bdce29a2b8fbp-90, 0.0, 0.0, 0.0, 0.0,
     0x1.661b8c88f7bc9p-672, 0.0, 0.0, 0x1.063c6c7fd95c3p-176, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5e77d5c0bb83ep-283, 0x1.bb5469144964ep-159, 0.0, 0.0,
     0x1.fde28a506e8e5p-303, 0x1.1687743b1367bp-725, 0x1.166e8cb387ebbp-413,
     0x1.2779644dccaep-333, 0.0, 0.0, 0.0, 0x1.f0140724cdce1p-376, 0.0, 0.0, 0.0,
     0x1.12dd44cbe180bp-875, 0.0, 0.0, 0x1.0d372ae17b85p-797, 0.0, 0.0,
     0x1.320dca2591d6fp-588, 0.0, 0.0, 0x1.17e41394d6621p-307, 0.0, 0.0, 0.0,
     0x1.f3f59b26c0a08p-273, 0.0, 0x1.a82739cfeb476p-918, 0.0, 0.0, 0.0,
     0x1.8616168710006p-772, 0x1.f8426f3134392p-458, 0.0, 0.0, 0x1.cbb3f793a17eep-497,
     0.0, 0x1.04d8b803e4e35p-230, 0.0, 0.0, 0x1.22e464b33f2f4p-120, 0.0,
     0x1.38a8a88a5040ep-615, 0.0, 0.0, 0x1.3f4afdaf844bcp-145, 0.0, 0.0,
     0x1.210e9ebc5f212p-105, 0x1.949706c444395p-438, 0x1.0ce764401ab3bp-531, 0.0,
     0x1.1dc2ace8879d1p-319, 0.0, 0.0, 0x1.90883c1ebb86bp-485, 0.0,
     0x1.b2a41cc11acacp-719, 0x1.62fd32222d448p-313, 0.0, 0x1.c5b8f79076f8dp-156, 0.0,
     0x1.88a3c24a22338p-146, 0x1.52c8a1b35ba9fp-195, 0x1.ae27a71a14287p-340,
     0x1.09cbffcab8421p-211, 0x1.a3a642d8e325ap-307, 0.0, 0.0, 0x1.1b4079c3b4385p-101,
     0.0, 0.0, 0x1.ffe7ca48aafeap-209, 0x1.b258524ed97cdp-472, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a2d94dbe53219p-762, 0.0, 0x1.35f3b483670f8p-365,
     0x1.14d9974431ed8p-986, 0.0, 0x1.938ab4a9deca2p-656, 0x1.141fd4058ce09p-910,
     0x1.bab9773f6c445p-215, 0.0, 0x1.ff58110bd9154p-690, 0x1.20ac77062cddcp-437, 0.0,
     0x1.fcb88c02bbbadp-808, 0x1.81df94e6a0864p-189, 0.0, 0.0, 0x1.2b07b29e307cbp-311,
     0x1.819baef79153cp-507, 0x1.6ed9e55e7a119p-754, 0.0, 0x1.a23a4065b8eb2p-126,
     0x1.4954bc3d92f4p-739, 0.0, 0x1.09c6c8cf2da55p-617, 0.0, 0x1.1d58806a8e96fp-582,
     0.0, 0x1.cbd6ac535a2aep-936, 0x1.e5c7226945df5p-621, 0.0, 0x1.e08914a76b56bp-598,
     0.0, 0x1.8f3b15af2f06p-330, 0x1.2d3345adac7fbp-238, 0x1.c4b83f84da114p-839, 0.0,
     0.0, 0.0, 0x1.938db9a48f77ap-317, 0.0, 0.0, 0.0, 0x1.a581af21d837ap-741,
     0x1.153c6407efbbdp-656, 0x1.00ee784422122p-659, 0x1.0f9965d2ec936p-600,
     0x1.d7b2943fc8cddp-865, 0x1.dc3ba3b09cdefp-51, 0.0, 0.0, 0x1.b89c02d4b89d7p-1016,
     0x1.f9c7b7b80b479p-837, 0x1.054b783c43d92p-181, 0x1.627fd890ea23dp-796, 0.0, 0.0,
     0x1.adc596f9c0493p-81, 0.0, 0.0, 0x1.897b24c0de2f4p-888, 0.0,
     0x1.aacb14cdd698ap-603, 0.0, 0.0, 0x1.c1b38070fd912p-386, 0x1.c09fb341be279p-603,
     0x1.c2e9613d05df6p-45, 0.0, 0.0, 0.0, 0.0, 0x1.c40f328f2c2bap-539,
     0x1.9e41a43b526c6p-907, 0.0, 0x1.616755510ef81p-774, 0.0, 0x1.a82a4cee9d75ap-247,
     0.0, 0.0, 0.0, 0x1.6760f383e2718p-133, 0.0, 0.0, 0x1.50deafd71ec99p-801, 0.0,
     0x1.23f2edc4f297bp-902, 0.0, 0x1.09cc4b36f9f28p-502, 0x1.addb3d6b83583p-342,
     0x1.e99a90ef2f1fdp-219, 0.0, 0x1.0d978122067eep-576, 0x1.e022d6ebba0bdp-473, 0.0,
     0.0, 0x1.4ea043ffa8a85p-399, 0x1.56bb29cc84717p-19, 0x1.27a5857cd28f3p-396, 0.0,
     0x1.7b5c77a2bb51ep-641, 0.0, 0.0, 0.0, 0x1.5bded7c353bd4p-208, 0.0,
     0x1.f8c2e3744bc72p-549, 0x1.4748db14083ccp-172, 0.0, 0x1.b571b9c8e5559p-540, 0.0,
     0x1.6150ea3786397p-819, 0x1.0dddc6148027bp-259, 0.0, 0x1.68edc76d8061p-995,
     0x1.1ab1444241883p-493, 0.0, 0.0, 0x1.3a90ea26fb48cp-672, 0x1.9b646c0241afap-743,
     0x1.23e035b0710d5p-310, 0x1.193d9576bcf16p-642, 0x1.ff2a69c5a8044p-43,
     0x1.046697526daa8p-57, 0.0, 0x1.edb4bdaf238c5p-10, 0.0, 0x1.1e4e4d8f5f8c2p-912,
     0x1.fb9e7663de84dp-257, 0.0, 0.0, 0x1.16a00a961b49bp-901, 0x1.e24cc0dc1801dp-617,
     0x1.79a2851d4c45p-64, 0x1.9b072a5e928f2p-97, 0x1.6a589729f0f97p-279, 0.0, 0.0,
     0.0, 0x1.1be8a40f1b341p-681, 0.0, 0.0, 0x1.061779c8c3664p-739, 0.0, 0.0,
     0x1.b8cde65c86e3bp-889, 0x1.0e706dbc93203p-304, 0.0, 0.0, 0x1.9e62ced63cc9dp-534,
     0.0, 0x1.8898451a9f3ebp-248, 0x1.8e157dd7fcb4p-776, 0x1.160b133343893p-132,
     0x1.d7ad6abeb2698p-141, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82166c5ca3bd2p-937,
     0x1.e210426af5d6dp-878, 0.0, 0.0, 0x1.0d59757074e9ep-12, 0.0, 0.0, 0.0,
     0x1.48e2b80ae141bp-348, 0.0, 0x1.e6e4237dd9ecep-305, 0.0,
     0x1.da2ec52ce9421p-1012, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da039fd9368c8p-299,
     0x1.fdd511dc5c904p-927, 0x1.4cb003de1f7bfp-918, 0.0, 0x1.805a85a3a309bp-452,
     0x1.f0e96e9fd77c2p-536, 0.0, 0x1.c48e02dfda946p-156, 0.0, 0.0,
     0x1.68b89996f91ccp-43, 0x1.2f78956d7a998p-386, 0x1.19d1f143d90fbp-905, 0.0, 0.0,
     0x1.e32d733a8ee63p-587, 0x1.ae489a582101fp-590, 0.0, 0.0, 0.0,
     0x1.bb3765a49917ep-389, 0.0, 0.0, 0.0, 0x1.2b9d383cf50c2p-416, 0.0,
     0x1.5c691b36c50c2p-60, 0.0, 0x1.d8a998fa4307ap-187, 0.0, 0.0,
     0x1.e09e496da1649p-132, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62197383270cap-761,
     0x1.1612b08c5c36ep-932, 0.0, 0.0, 0.0, 0x1.f6949198b5dd4p-901, 0.0, 0.0, 0.0,
     0x1.87b9502b02e09p-529, 0.0, 0.0, 0.0, 0x1.43d37fdd4a16dp-617,
     0x1.b1509c7053163p-413, 0.0, 0x1.26d9cf55bb165p-559, 0.0, 0.0, 0.0,
     0x1.03144bc11cb3ep-652, 0.0, 0x1.3cc1bed6af962p-236, 0x1.6ac1918d82eddp-329,
     0x1.3d75e90cdd9a3p-960, 0x1.8b375a8a85dddp-692, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7b72b0055119cp-478, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ece16627dd29cp-996,
     0.0, 0x1.46cb95995c977p-886, 0.0, 0x1.b3565a7ff0d64p-534, 0x1.fc5a4205a663p-172,
     0.0, 0x1.e883f73ad1ea9p-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4d7f00ca3054fp-279, 0.0, 0.0, 0.0, 0.0, 0x1.f11b702e5d712p-395, 0.0, 0.0,
     0x1.b199c77241fffp-629, 0.0, 0x1.8a21964be6b15p-263, 0.0, 0x1.8d757113f9ad1p-40,
     0x1.b43a074a9edd2p-39, 0x1.df49f0e9bc4a9p-58, 0.0, 0x1.34f596a1dc75fp-822,
     0x1.f34d403d4567dp-335, 0x1.7f27230d69ed3p-610, 0x1.554ceba5e495ep-1016,
     0x1.bd68ec4bf29a9p-572, 0x1.316e25f28aa33p-145, 0x1.7821ed18a484p-119,
     0x1.ad9945ae3cf3cp-949, 0.0, 0.0, 0x1.35e8d6823b6b8p-37, 0x1.b1bc3f69a506p-287,
     0.0, 0.0, 0.0, 0x1.8622e65785f18p-968, 0.0, 0x1.501ee71185133p-587,
     0x1.c052ce0f23139p-412, 0.0, 0.0, 0.0, 0x1.0cd79c5d4529fp-777, 0.0,
     0x1.2a587b94e71d3p-358, 0x1.10ee50f692b02p-3, 0x1.9ce0c5948e4c7p-862,
     0x1.59fbf4c18d77cp-581, 0.0, 0.0, 0x1.e7a90127880b2p-999,
     0x1.fdcd8da0fde6ep-1002, 0x1.ca954e678200bp-44, 0.0, 0.0, 0.0,
     0x1.6681e4699d4eap-294, 0x1.1b3cbb298988dp-854, 0x1.56557ccb3305p-516, 0.0,
     0x1.58ba46b771d53p-991, 0x1.103e599e59fd2p-168, 0x1.455355d6f2dfdp-269, 0.0,
     0x1.5b689c3887b1dp-120, 0.0, 0.0, 0x1.e497714028f1dp-187, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3cc6354887b25p-771, 0x1.bb1e98646f9a4p-668, 0.0, 0x1.304ab2d943aecp-776,
     0.0, 0x1.4d81a8cf3cac4p-305, 0.0, 0.0, 0.0, 0x1.ac37d8f96bdcp-248,
     0x1.73e2dc816c039p-954, 0.0, 0.0, 0.0, 0.0, 0x1.66c405ae30e8dp-284, 0.0, 0.0,
     0.0, 0x1.ac377f4fe20b6p-314, 0.0, 0x1.f2bed0b3e4633p-249, 0x1.e330b307eed92p-946,
     0x1.53d4c0c15fa14p-788, 0x1.0c0b09b52ec0ep-524, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c57f03cda46ap-607, 0x1.f1f5ace8b0693p-374, 0.0, 0x1.3d32e3897f173p-350,
     0x1.c2a429e9a23c7p-20, 0x1.f13cf8ff92a5cp-718, 0x1.1e14f3a884f7fp-257,
     0x1.2cd39d15a106dp-560, 0.0, 0x1.af3d68441862fp-977, 0.0, 0x1.5fc2b4006b1b5p-802,
     0x1.bdf185e444009p-205, 0x1.4a7a44fb38768p-711, 0x1.2f854d0813d3fp-533, 0.0,
     0x1.3e2c3d113343dp-491, 0x1.63fd0048f3d38p-239, 0x1.701465c2a6808p-754,
     0x1.08bb05aaf3ea7p-410, 0.0, 0.0, 0.0, 0x1.b46f8cb2cc847p-323,
     0x1.dea3d8e189acfp-851, 0x1.90e8e4e6edb8cp-850, 0x1.bf1e7392b228ep-403, 0.0,
     0x1.09c53b593650cp-768, 0.0, 0.0, 0.0, 0.0, 0x1.89d54cd5f1f08p-142, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5589fb1b48ff7p-804, 0x1.d9e0459e532e2p-682, 0.0, 0.0, 0.0,
     0x1.4624e534a345ap-719, 0x1.43e6675068329p-282, 0x1.a2a2bbf94207dp-519,
     0x1.ac84929249d63p-691, 0.0, 0x1.a8a98f468044ap-303, 0x1.84c3f1ad3b2e3p-105
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
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
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospid2_u05avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincospid2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincospid2_u05avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
