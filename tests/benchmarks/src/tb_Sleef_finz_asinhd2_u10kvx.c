/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhd2_u10kvx.c --function \
 *     Sleef_finz_asinhd2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.db745d49054aap-892, 0x1.7148ecfaa7803p-659, 0.0, 0x1.eca5c9a294d3cp-923,
     0.0, 0x1.413d4aa02adafp-32, 0x1.5f682926f4c55p-104, 0.0, 0x1.75a64bfed0142p-453,
     0.0, 0.0, 0.0, 0.0, 0x1.0ac210d8915e5p-474, 0.0, 0x1.c1ca74a7eae7dp-322,
     0x1.222e7c1508643p-344, 0.0, 0.0, 0x1.49e0448fde2d8p-906, 0x1.f4404feb87074p-918,
     0.0, 0.0, 0x1.af68abd82159dp-84, 0.0, 0.0, 0.0, 0x1.eb89988210b47p-364,
     0x1.ab13bb5d23e08p-292, 0.0, 0x1.9b872e9af36a6p-432, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f264aa04fd743p-925, 0x1.37e7df008b6dbp-138, 0.0, 0x1.3a9a6965c2c95p-524, 0.0,
     0.0, 0x1.eff749fc76134p-1, 0x1.cf90f9c11f30ap-696, 0.0, 0.0, 0.0,
     0x1.cfc7312456b07p-920, 0.0, 0.0, 0.0, 0x1.b54802546dc22p-992,
     0x1.38b232195cd62p-334, 0.0, 0x1.45aaf3df2c15p-969, 0.0, 0.0, 0.0, 0.0,
     0x1.1fe93480c2164p-87, 0x1.ee06a0a700127p-731, 0.0, 0x1.28ff8d9038517p-676, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.03f5b7826e88cp-11, 0.0, 0x1.872061acf50fp-81, 0.0, 0.0,
     0x1.2fb35178a049cp-811, 0x1.1b835e47586b6p-618, 0x1.14f91ca8481a7p-935, 0.0, 0.0,
     0x1.9539779dc5364p-249, 0x1.4dd1fbb40adf1p-272, 0.0, 0x1.87a95c4b91fdcp-458,
     0x1.b9299c9519964p-504, 0x1.e069b09611972p-1011, 0x1.dd6fb50fe34ddp-229, 0.0,
     0x1.fbee5ea3a11b3p-985, 0.0, 0x1.1d863ed14bc62p-410, 0x1.4669e8e16d0fdp-475,
     0x1.be29ab325a72ap-914, 0.0, 0x1.5bd639156f0dfp-487, 0.0, 0x1.94a79997f2ad2p-730,
     0.0, 0x1.5c3c0b03ea5c6p-137, 0.0, 0.0, 0x1.674741b726a7cp-731,
     0x1.3bd3a6b0d6a99p-679, 0x1.1f2ca6ece139dp-815, 0.0, 0x1.9e9bec1febb65p-792, 0.0,
     0x1.8aeaca17ba1f2p-341, 0x1.cd4b3a2674091p-780, 0x1.d213dfb4ddf55p-97, 0.0, 0.0,
     0.0, 0.0, 0x1.03f9d3210679dp-1006, 0x1.e32da502a4008p-185, 0.0, 0.0,
     0x1.94b3ae5d53a32p-647, 0.0, 0.0, 0.0, 0.0, 0x1.a0fbe7d16cf1ep-70, 0.0, 0.0, 0.0,
     0.0, 0x1.b8889b10fe391p-835, 0.0, 0.0, 0x1.31061b2cdcf16p-524,
     0x1.257b35d941b38p-667, 0x1.40baaefb95dd6p-849, 0.0, 0.0, 0x1.bb8185dc65559p-379,
     0.0, 0x1.699c3c3a23d2bp-817, 0x1.2bc4b4dc439f7p-1005, 0x1.82ef14891d763p-798,
     0.0, 0x1.950f0d61a976p-36, 0.0, 0x1.dd842eff711ep-383, 0x1.37812c28bd6eap-66,
     0x1.22a0d30db7651p-558, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a5d3c99d8d22p-890, 0.0,
     0.0, 0.0, 0x1.6d70bb599ade6p-858, 0.0, 0.0, 0.0, 0x1.51deb1969614ap-612, 0.0,
     0.0, 0x1.f80d24b973207p-1007, 0x1.6252f356f4199p-134, 0x1.14626e9811b42p-55, 0.0,
     0x1.400ebbe4f56eep-395, 0.0, 0.0, 0x1.d547db4450be4p-656, 0.0, 0.0, 0.0, 0.0,
     0x1.c8f0b84a1b7bdp-506, 0.0, 0.0, 0x1.d0e51df22810ap-326, 0x1.be11db4f674b7p-816,
     0x1.9bb4fc14173dp-539, 0x1.0d91824f19e82p-978, 0x1.2e3e996660f2ap-1005,
     0x1.bdcbd64820f1dp-932, 0.0, 0x1.f39f232468b09p-449, 0x1.3e2dd7f479f4dp-807, 0.0,
     0x1.5888c0165655ap-1004, 0.0, 0x1.de7762f0e2afp-140, 0.0, 0x1.e55b9f0286b53p-407,
     0.0, 0.0, 0x1.cadccc406b986p-615, 0.0, 0x1.791165bba3243p-305,
     0x1.b645229ae944fp-839, 0x1.9563e7b0d92b9p-864, 0.0, 0x1.1af24a92d6661p-429,
     0x1.ddc2f17887f4ep-490, 0x1.fe922c9207711p-3, 0x1.30cd87aafa45fp-709,
     0x1.54cc69ad2e2bp-486, 0x1.670ce65b9a987p-425, 0.0, 0.0, 0x1.f0edb87153854p-806,
     0x1.9e7c9ba26fb85p-102, 0x1.c79887bd57a7fp-230, 0.0, 0x1.098f260cdf65fp-692, 0.0,
     0.0, 0x1.df5b616c39053p-766, 0.0, 0.0, 0x1.42e3295075299p-212,
     0x1.04cce894a8518p-101, 0.0, 0.0, 0.0, 0x1.13af227cb2398p-984,
     0x1.6211d6c1dfc44p-108, 0x1.ed6f265ff67ebp-515, 0.0, 0.0, 0x1.394b95d811b6ep-382,
     0x1.6ec9e88b32d7p-919, 0x1.e1e5944d6108p-737, 0.0, 0x1.d4a9d1b8a5825p-234,
     0x1.9bc0aeab93a08p-483, 0x1.7fd07a0ae2536p-64, 0.0, 0.0, 0x1.f98eb84b85595p-584,
     0x1.850c630a54ad7p-894, 0x1.5dcc58d136092p-137, 0.0, 0x1.3dbdb8576e78dp-486, 0.0,
     0x1.ec88a9663e09dp-78, 0.0, 0x1.487312769f068p-57, 0.0, 0x1.9b08445634cefp-26,
     0x1.5de8896c4091fp-177, 0.0, 0.0, 0x1.e59f404f607c3p-251, 0x1.c9f2aa470866bp-978,
     0x1.6534060ee4792p-234, 0x1.d0c0b9278a17ap-705, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5d2b0b24a5c37p-339, 0x1.221e5651045edp-519, 0.0, 0x1.70d661310f11cp-341,
     0x1.c713e368dca69p-353, 0.0, 0x1.b382734ce43d6p-624, 0x1.df75c630db703p-59, 0.0,
     0x1.6b7a286b02eccp-895, 0.0, 0.0, 0.0, 0x1.fc108a119b86bp-152, 0.0,
     0x1.c9edddb20d999p-483, 0x1.82533d00ca3a7p-136, 0x1.7fe95bf3ed05ap-790, 0.0, 0.0,
     0x1.8deb632da8504p-910, 0x1.ac715f48c01dfp-40, 0.0, 0.0, 0x1.105f421e0a643p-971,
     0x1.a7277c8587f5fp-622, 0x1.a81efe79b8d67p-806, 0x1.300ba494b198cp-958, 0.0, 0.0,
     0x1.2e1a19a815302p-196, 0x1.54ee4801a7aap-977, 0.0, 0.0, 0.0,
     0x1.0c85b2b4557e5p-105, 0.0, 0.0, 0x1.fc70124e59d1fp-957, 0.0, 0.0,
     0x1.2711da77cc7b3p-868, 0x1.01ece3771d954p-532, 0.0, 0.0, 0.0,
     0x1.47bd308240b61p-517, 0x1.34687cdfdd66dp-964, 0x1.842a460319fa5p-49,
     0x1.0ed901d073d3ep-380, 0.0, 0x1.1388446a58cdp-28, 0.0, 0x1.866652c5e3651p-326,
     0x1.cea4895737cbep-512, 0x1.a6555aab2cf6fp-847, 0x1.b5622f6af989fp-230, 0.0, 0.0,
     0.0, 0.0, 0x1.fda372db6a63p-192, 0.0, 0.0, 0x1.8d3c75f8972edp-466, 0.0, 0.0, 0.0,
     0x1.014011f6760ebp-867, 0x1.9a6beaf7f95e7p-337, 0.0, 0.0, 0x1.37a48470b6ecep-804,
     0x1.d7492c0dda5fp-506, 0.0, 0x1.f685ba13dade2p-786, 0x1.8d16f970d5fbcp-105,
     0x1.a9916c9c78852p-541, 0x1.868587c0d14e1p-496, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.21f1572dd3815p-635, 0x1.3349b555d33dcp-373, 0x1.472bcc0e2d1aep-526,
     0x1.c1c6708606bc4p-202, 0.0, 0x1.9b6b84cda9d93p-761, 0.0, 0x1.e6723e0405a51p-995,
     0x1.de2ca3af47411p-905, 0.0, 0.0, 0.0, 0x1.b389ba92edab3p-734, 0.0, 0.0,
     0x1.ffffbf7db9274p-791, 0x1.fbd9e6fdae037p-312, 0.0, 0x1.1c0d0b1732201p-164,
     0x1.260344d4da7aap-791, 0x1.9991b21ad0836p-973, 0x1.a544dce4c9a0fp-634,
     0x1.89a26a93d7b75p-526, 0x1.4143f75891d4bp-609, 0x1.e9ea7809a78c2p-830,
     0x1.fd0b269e2bd78p-946, 0.0, 0x1.66330f1540554p-934, 0x1.122af96f41ecfp-863, 0.0,
     0.0, 0x1.247fc6c843979p-236, 0.0, 0.0, 0.0, 0x1.f349c384e5bbbp-570,
     0x1.52b5d2f31991ep-288, 0x1.a25185c984c1fp-758, 0.0, 0x1.921c8f0227fe6p-99,
     0x1.d400ac8efc2bfp-75, 0x1.d62c17d8b5417p-272, 0x1.3195bc9b01ap-65,
     0x1.b1c820c0e2c19p-860, 0x1.6c62445f31048p-642, 0.0, 0x1.ab80080334008p-883, 0.0,
     0.0, 0x1.aa01a96da5c0ep-534, 0x1.39a9fc8e47036p-49, 0x1.468e80a8bb8adp-837,
     0x1.e9e0faaf3f06dp-828, 0.0, 0x1.ca89e086a42f9p-585, 0x1.046f579ee1b0cp-889,
     0x1.f041b8ff92f4fp-666, 0.0, 0.0, 0.0, 0x1.eebb5d6133b9bp-548,
     0x1.93fcdc9a6f24fp-55, 0.0, 0.0, 0x1.7c2270a0e9b69p-967, 0.0, 0.0, 0.0,
     0x1.67f845d91b48dp-486, 0.0, 0x1.55548a7137b5dp-514, 0.0, 0x1.d3da157069fecp-906,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5c1f7713120ep-124, 0.0, 0x1.3524d0bf6141p-298, 0.0,
     0x1.6023e9b05923bp-565, 0x1.4cb4d1fb2166dp-175, 0x1.9ed379c2c5c3bp-349, 0.0,
     0x1.4fa0fd69a4857p-118, 0.0, 0x1.91b58832751c8p-439, 0x1.e27bc99411849p-53,
     0x1.93068c0a130ffp-176, 0.0, 0.0, 0x1.f3c8c30735e36p-380, 0x1.668dca311f566p-791,
     0.0, 0x1.3ff6c9ab88ac1p-254, 0.0, 0x1.9a86f16de8a3fp-528, 0.0, 0.0, 0.0,
     0x1.448475407b786p-341, 0.0, 0x1.d37ac1fc8024ep-361, 0x1.96de791827afp-685,
     0x1.23a0ddf6c2c34p-385, 0.0, 0.0, 0x1.05aa33d3b744ep-164, 0.0,
     0x1.9f952115bb257p-869, 0x1.5507aebeedb67p-173, 0x1.40ac5cb473306p-722,
     0x1.5cd2099bc0d2p-251, 0x1.995a224423baep-640, 0.0, 0.0, 0.0, 0.0,
     0x1.5fc53f96e7c23p-154, 0.0, 0.0, 0x1.7480a73b1e195p-692, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.26ffbe8ef4a4bp-269, 0x1.ce1ff5eacb2ep-486, 0x1.bdbfc7167e0fcp-599, 0.0,
     0x1.778b0f84033edp-300, 0x1.560327e815cbp-712, 0.0, 0x1.584c7d5a7c58dp-549,
     0x1.119bddff89288p-972, 0.0, 0x1.1057b2ebcb08bp-98, 0x1.ec35a3291d116p-863,
     0x1.65733209bd284p-61, 0x1.4fbced87fc6c5p-851, 0.0, 0.0, 0.0,
     0x1.48947c0db40f4p-208, 0x1.e938f58f509d8p-100, 0x1.b0ddb9245f411p-250,
     0x1.22133c5b69228p-721, 0.0, 0x1.aef8a4d2c189ep-30, 0.0, 0x1.d475fe0c16d6p-623,
     0x1.6e584f94b4f6p-322, 0.0, 0x1.97c78dbab5b8fp-400, 0x1.3a6eb8fff6e12p-755, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a752c72c634aep-323, 0x1.d8e33a0169d11p-182,
     0.0, 0x1.e68b8d56c1a78p-360, 0.0, 0.0, 0x1.fd227bfa8933bp-760, 0.0, 0.0,
     0x1.4f253259a56d1p-490, 0x1.5dbbaa0770791p-667, 0x1.d9df36adb37f2p-472,
     0x1.8979a224ccbf4p-890, 0.0, 0.0, 0.0, 0x1.321405bb93e8ep-39, 0.0,
     0x1.10daa60377eb8p-683, 0.0, 0.0, 0x1.8c24812e61f83p-438, 0x1.eb068c1eca51bp-612,
     0.0, 0x1.147690adfad9ep-103, 0x1.6f845f9c9fa07p-959, 0.0, 0.0, 0.0,
     0x1.b5918a48e8847p-481, 0x1.38c22826cf132p-301, 0.0, 0.0, 0x1.6f382844ab2f4p-948,
     0x1.b3cca5d54279ep-435, 0x1.4a0059a2a3d74p-253, 0.0, 0.0, 0.0, 0.0,
     0x1.9e1e852a5619fp-74, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0efae5fd623c3p-576,
     0x1.3859e9f82a11p-93, 0x1.8c8505ca5833ap-614, 0x1.aab670c8d555bp-372,
     0x1.311744c009f56p-233, 0.0, 0.0, 0.0, 0x1.75046a0548ea3p-129,
     0x1.8ac4506085d66p-555, 0.0, 0x1.7a218b7ae520ep-452, 0x1.017732239d5a2p-530,
     0x1.2b92440c2fea8p-860, 0.0, 0x1.20f644dfd93a2p-673, 0x1.d253e4928bd55p-609,
     0x1.651c6f708f742p-379, 0x1.117509fbdbc9ap-802, 0x1.4e1bb07c215b7p-1004,
     0x1.5587bced95864p-740, 0.0, 0x1.46cbaf282b4d9p-508, 0x1.11f80e909f1dep-593,
     0x1.655387513fbf5p-442, 0x1.2863c916d5489p-945, 0x1.d62b3339b71d5p-926, 0.0,
     0x1.acf735de4d9b2p-926, 0.0, 0.0, 0.0, 0x1.0895089cdad5p-398, 0.0, 0.0,
     0x1.872046ce60267p-211, 0x1.731e4dbefa7e5p-645, 0.0, 0x1.871840ffb9ee3p-635, 0.0,
     0x1.9066d0401aa61p-83, 0x1.f85dca2c4adfp-602, 0x1.43b0cf996458bp-670, 0.0, 0.0,
     0.0, 0.0, 0x1.6ed1056c54b15p-969, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.704716e930ae2p-587, 0x1.3aecd4fb0bf16p-823, 0.0, 0.0, 0x1.70bac965fbd32p-870,
     0.0, 0x1.5faf931255163p-80, 0x1.f85b3412ee68fp-746, 0.0, 0x1.69e11c4a0e31cp-596,
     0x1.dd47bf62c3a77p-910, 0.0, 0.0, 0x1.dc71bcf255446p-471, 0.0, 0.0, 0.0,
     0x1.58a5d4eec8decp-813, 0x1.8277f1b1a8f28p-663, 0x1.6a92fd277b4ep-456, 0.0,
     0x1.a2d56b4eacfb3p-804, 0.0, 0x1.a37e752ff8fb2p-542, 0.0, 0.0,
     0x1.52e4ad1cf0edbp-348, 0.0, 0.0, 0.0, 0x1.c2ed9ede170acp-847, 0.0,
     0x1.9227f99dbeb36p-723, 0x1.b8fe1d49bad83p-476, 0.0, 0.0, 0x1.f45689e456608p-886,
     0.0, 0.0, 0.0, 0x1.bc960d99f9674p-784, 0.0, 0.0, 0.0, 0x1.a09b963cb1769p-433,
     0.0, 0.0, 0.0, 0.0, 0x1.74f9c862acfbep-465, 0x1.730d2eaa98dc2p-507, 0.0, 0.0,
     0x1.4370edf4e5ecdp-935, 0x1.6fd05f6183ba4p-584, 0.0, 0x1.263be3790c837p-605,
     0x1.ece6ab5245b25p-603, 0x1.a6e58775ac5cbp-26, 0.0, 0.0, 0x1.bdf9d7f47e4cep-712,
     0x1.91d7bf38008ep-229, 0.0, 0x1.16fc18ac0f029p-526, 0.0, 0.0, 0.0,
     0x1.ef785e9f64c3cp-570, 0.0, 0.0, 0.0, 0x1.73350320adb78p-471, 0.0, 0.0,
     0x1.4432c20617458p-496, 0x1.eb07bcf175bc9p-882, 0x1.de63a99e70907p-322,
     0x1.e5840f0c89f85p-547, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4aec4c70b61dp-764, 0.0,
     0x1.4321ca111c36p-892, 0x1.32f9bfe98c475p-714, 0x1.4f63ff706f3dcp-667, 0.0,
     0x1.ee5b153c549b3p-833, 0x1.26d6333cc690ep-958, 0.0, 0.0, 0.0, 0.0,
     0x1.71099e2ad86d9p-96, 0.0, 0.0, 0x1.5d9c435a7d401p-682, 0.0,
     0x1.0fa56c6c8999p-176, 0x1.805fae9910c02p-908, 0x1.0fc20c2951168p-336,
     0x1.65e2029357b59p-137, 0.0, 0.0, 0x1.cd736747aafeap-280, 0.0,
     0x1.26b8b6c7aed56p-388, 0x1.6abdb3a17f068p-728, 0x1.d53057d4ab273p-70,
     0x1.64e95691f4c7p-636, 0.0, 0.0, 0.0, 0.0, 0x1.dfdcfed8a1e29p-414,
     0x1.8efd93c811917p-206, 0x1.3025330a6c5adp-186, 0.0, 0.0, 0x1.d72a50b30053p-996,
     0x1.743ce2f392d6fp-333, 0x1.386a8d49c8406p-245, 0.0, 0.0, 0x1.b68a3cb8608eep-80,
     0x1.c9e56302be185p-104, 0x1.6bcc280aef9dep-535, 0x1.ab65847ed18b1p-896, 0.0,
     0x1.9a03e5ccb2e2p-580, 0.0, 0x1.78e153916edp-899, 0x1.05f9cbf846196p-864,
     0x1.78e66466d1afp-699, 0x1.999e9dc0b6bc5p-502, 0x1.e70a3ed3559dfp-933,
     0x1.f1cdcc7c2cdc6p-117, 0.0, 0x1.c7ece19a9c08p-763, 0x1.6ddda8201a982p-413, 0.0,
     0.0, 0x1.6ac0f7aef7fep-965, 0.0, 0.0, 0x1.4c3d7eb2a49f7p-927, 0.0,
     0x1.a700ea0350dd3p-142, 0x1.84cd8e1f7e756p-108, 0x1.6bd350853b55dp-774, 0.0,
     0x1.9d63b64345612p-858, 0.0, 0x1.af4cbee1b7e5ep-423, 0.0, 0.0, 0.0,
     0x1.55a0230170b72p-782, 0.0, 0x1.c84a12dbf116ep-283, 0x1.cd9251a691f9ep-1006,
     0x1.ae23101ce47d5p-951, 0x1.fed1439576b65p-420, 0x1.5b2b1cd0beeedp-932,
     0x1.75d2ca40efd87p-217, 0.0, 0.0, 0x1.b6b18dc56f277p-859, 0.0,
     0x1.9db3b2729fecbp-350, 0x1.47226fe6a9fcp-958, 0x1.923b56d1837d1p-273, 0.0,
     0x1.7ca227ce0c23dp-525, 0x1.13f38b9b86549p-136, 0x1.3152b39fc915ep-436,
     0x1.61bc63a0830d7p-514, 0x1.b4eb459b98abbp-927, 0.0, 0x1.39465f97cf6aap-541,
     0x1.c4be26e2896ep-438, 0x1.3e8e7f0ce734dp-602, 0.0, 0x1.9ca1daecd72eap-284, 0.0,
     0x1.a30c02092caa5p-711, 0x1.94249b262197bp-728, 0x1.e762ddb3bcf84p-102, 0.0,
     0x1.b2022665eac9bp-875, 0.0, 0.0, 0x1.5244fb7177103p-168, 0.0,
     0x1.dbc4cb8494d28p-510, 0x1.5758830562c41p-982, 0.0, 0.0, 0x1.eadfade59ed9dp-303,
     0x1.32e82f5e29cf2p-899, 0x1.c9e974c21a884p-854, 0x1.032c06ee65512p-103, 0.0, 0.0,
     0.0, 0x1.23753b1ea4a41p-865, 0.0, 0x1.f212780599169p-48, 0x1.a8869bd539dcap-593,
     0x1.fd6c6916f263cp-707, 0.0, 0x1.ce49220d4bd85p-394, 0.0, 0x1.8285a2402c881p-859,
     0.0, 0x1.a06949f45bcaap-812, 0.0, 0x1.71c64ad4c119p-162, 0x1.941c39b53cc88p-616,
     0x1.0b7a57eeae4a3p-878, 0x1.e533896e6ffdcp-722, 0.0, 0x1.ebdc67bfa2ce1p-609, 0.0,
     0.0, 0x1.6eed2b0af326bp-956, 0.0, 0.0, 0.0, 0x1.51f51ccfbe94fp-881, 0.0,
     0x1.cae9df1deb6d7p-945, 0.0, 0x1.d660b225e7dadp-648, 0.0, 0.0, 0.0, 0.0,
     0x1.d51504c4dc241p-792, 0.0, 0.0, 0x1.102d1ccb3f77p-45, 0x1.98694eb541b69p-681,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62f015fd2e0c7p-1000, 0x1.410a7d393383dp-146, 0.0,
     0x1.bed4edd0854dep-922, 0.0, 0x1.fb0ca745ad399p-1019, 0.0, 0x1.9c679d0d93268p-17,
     0x1.9390078f04e56p-787, 0x1.808a1c09c943bp-638, 0.0, 0x1.e17658de86f67p-1005,
     0.0, 0.0, 0.0, 0x1.ffd3d422bfa17p-866, 0x1.80d653feebbeap-707, 0.0,
     0x1.a2345fffc1411p-866, 0.0, 0x1.24c2e2da63aa8p-405, 0.0, 0x1.2bc278b61c3f4p-628,
     0x1.b956921523cedp-451, 0.0, 0.0, 0.0, 0x1.77a942df1679ep-7, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.49eb9fcd1a926p-434, 0x1.b3af79fdeba56p-594, 0x1.c5a291a07f50bp-48, 0.0,
     0x1.4da31e93a1da8p-1000, 0x1.1cfd14027f537p-933, 0x1.d2ca846b5c2f9p-150,
     0x1.3ec281a7af1b1p-444, 0x1.5be59cbc9e557p-458, 0x1.4c3c5564a6622p-738, 0.0, 0.0,
     0x1.c918aecb28441p-690, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09aebdff6e6e3p-770,
     0x1.ab550b45d0d7dp-287, 0x1.b4e596717afcfp-12, 0.0, 0.0, 0x1.8570c36ee31cep-505,
     0.0, 0x1.2e0a8d8afbc5ap-786, 0x1.6218d5e11edf3p-411, 0x1.3f2039576c549p-682,
     0x1.356cd136df324p-149, 0x1.d0af656e4a915p-230, 0.0, 0.0, 0.0, 0.0,
     0x1.be114bfec1393p-766, 0x1.28f146bf60cf3p-470, 0.0, 0.0, 0x1.c12d21dde1076p-999,
     0.0, 0.0, 0.0, 0.0, 0x1.2d17bd524ae09p-767, 0.0, 0.0, 0x1.e31f7a9349ee6p-886,
     0.0, 0x1.b7043c0b97c14p-534, 0x1.a879cf36c8ff4p-281, 0.0, 0x1.e0d9dd32ebd7cp-152,
     0x1.4dd4fe0c608cap-970, 0.0, 0x1.df75fedd0e4a5p-127, 0.0, 0.0, 0.0, 0.0,
     0x1.b0186f0c2b1a3p-137, 0.0, 0x1.2d4965f42fffap-842, 0.0, 0x1.66f391b9bd71ap-659,
     0.0, 0x1.9f6321ab4ac21p-152, 0.0, 0x1.04bd6047beccdp-773, 0x1.1b20c5a44b049p-875,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41630e51c3061p-497, 0x1.2c0d85165c23p-515,
     0x1.a567f40f686f4p-539, 0.0, 0x1.52c4cf5df8dacp-777, 0.0, 0x1.4d8d35cfdf57p-410,
     0x1.4a79092882038p-66, 0.0, 0x1.3932dc70ec6b6p-99, 0.0, 0x1.af8dbe6e22cfcp-672,
     0.0, 0x1.3b18a2c3b9307p-13, 0.0, 0x1.3d7e1a9e4fd6ep-522, 0x1.dc6281fe2a387p-961,
     0.0, 0.0, 0.0, 0.0, 0x1.34eeac0b2e0c2p-247, 0x1.37b0b908a38f4p-542,
     0x1.d5e568b7fef7dp-457, 0.0, 0.0, 0x1.d655a4fad66e8p-46, 0.0, 0.0, 0.0,
     0x1.b4cc691788b25p-189, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_asinhd2_u10kvx(tmp0);
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
    printf("Sleef_finz_asinhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_asinhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
