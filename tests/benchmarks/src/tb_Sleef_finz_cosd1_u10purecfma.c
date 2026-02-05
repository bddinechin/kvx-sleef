/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd1_u10purecfma.c --function \
 *     Sleef_finz_cosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.198ab5706c63p-963, 0x1.e1a32429a0d6ep-407, 0.0,
     0x1.b3e0a6a838abfp-790, 0.0, 0x1.d46a1cf6cff57p-55, 0x1.169c531caa8d4p-845,
     0x1.0646b9e87f829p-359, 0x1.458074631cd93p-663, 0x1.35ca65ec7c93cp-438, 0.0, 0.0,
     0.0, 0x1.b41e1faca0bd1p-719, 0.0, 0x1.426b33ec45d54p-779, 0x1.8ec43aa32fb81p-861,
     0x1.12e391710a975p-631, 0x1.506026a8a52bcp-240, 0x1.e2203a3ac1118p-461,
     0x1.4c1b50ccf4a4cp-844, 0x1.0b296b8586165p-83, 0x1.a4146526f8bfp-146,
     0x1.5ee940386a564p-863, 0x1.4d23683927863p-136, 0.0, 0x1.44fd24f86e856p-456,
     0x1.6b1dbd452db73p-734, 0.0, 0.0, 0.0, 0x1.873afcbb6ddeep-850, 0.0, 0.0,
     0x1.20a86df869ae9p-268, 0.0, 0x1.c2bf95e3e6548p-688, 0.0, 0.0,
     0x1.3e651828195f9p-448, 0.0, 0.0, 0x1.b1337b0621493p-544, 0x1.3cf45b824cf23p-256,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e90ca78237e09p-252, 0x1.a9f364fa660cep-164,
     0x1.e419abaa3c794p-798, 0x1.9c8f32f84f9d5p-460, 0x1.ec65d4a509c58p-568,
     0x1.f1c6348fb29dfp-935, 0x1.aa6a3e5f176c1p-626, 0.0, 0.0, 0.0, 0.0,
     0x1.dc1b7e290f8c2p-948, 0x1.2cf9ebe0417b1p-14, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aeab3214332dcp-186, 0x1.892770bfb49b9p-902, 0.0, 0.0, 0x1.8aaf33c7b4459p-73,
     0.0, 0x1.e0304ded7a404p-771, 0.0, 0.0, 0.0, 0x1.f33b43a6e747bp-179, 0.0, 0.0,
     0.0, 0.0, 0x1.013b430f41c7ap-290, 0.0, 0x1.6d5ce16a06878p-676,
     0x1.45e04203cda77p-710, 0.0, 0x1.f1a4eb538dff4p-918, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b5a81f71c2578p-961, 0x1.f2dec4b046a4p-949, 0.0, 0.0,
     0x1.3e59b6c1694bbp-889, 0x1.c0d2fe9d3798fp-935, 0.0, 0x1.3c8a6727d6812p-713, 0.0,
     0.0, 0.0, 0x1.d9df9536b4182p-686, 0.0, 0x1.a499afdb4a835p-635,
     0x1.3f404285e27fcp-286, 0.0, 0x1.7bb07e0d4dc9p-553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c05e9ee96c1adp-133, 0.0, 0.0, 0x1.3d49c53bcb739p-83, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1161d2944fb3ep-342, 0.0, 0.0, 0.0, 0.0,
     0x1.f7fe0e7bcd543p-586, 0.0, 0.0, 0.0, 0x1.885e35ad248ecp-800, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ea9895472c5fcp-772, 0x1.1914090e1364ap-22,
     0x1.819c55b9f323bp-576, 0.0, 0.0, 0x1.18f3d68b71573p-327, 0.0,
     0x1.51c0ddd0744eep-872, 0x1.2d2f04d3dda49p-177, 0x1.ad8875d560951p-167,
     0x1.8c5b5245cc3e4p-915, 0x1.89fa6ad889b15p-57, 0x1.501c0d8441f11p-293, 0.0,
     0x1.1965bd8807df5p-537, 0.0, 0.0, 0x1.af84066396c3ap-626, 0x1.6d57c25042d66p-325,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fd07dacf3aacp-415, 0x1.61ea9d9ee79c2p-120, 0.0,
     0.0, 0x1.e585824b18f99p-759, 0.0, 0x1.18e778e9d2339p-290, 0x1.a25fc356fb237p-515,
     0.0, 0x1.0e4fcfb303109p-32, 0.0, 0x1.5a53efae7ed1fp-132, 0x1.b157868deaa43p-89,
     0.0, 0.0, 0x1.8a8429501bff9p-156, 0x1.9e1b5ecf06f0fp-563, 0.0,
     0x1.edd8e0ba3e4fcp-994, 0.0, 0.0, 0x1.10d68d7b9367cp-401, 0.0, 0.0,
     0x1.61c38a0c3905bp-168, 0.0, 0x1.e368ddc23b4e1p-795, 0x1.d31f267d303edp-25, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.845c414f3706ep-1006, 0x1.8153b151e025ep-961,
     0x1.d9dc8c3de9496p-893, 0.0, 0.0, 0.0, 0x1.0cf7b7d91f41cp-115,
     0x1.19af6ddbe4b15p-972, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9edd3778e2ca2p-240,
     0x1.88c2418d68ed1p-362, 0.0, 0.0, 0x1.d251b351ced6ep-609, 0x1.3cfccfb79d1fep-337,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d0ece5aa83eep-57, 0x1.26bc1b2d7dbdcp-891,
     0x1.928c9b5a408dap-326, 0x1.114a6c43d4ffdp-978, 0.0, 0x1.f32f97f3c38b1p-639, 0.0,
     0.0, 0x1.88d58eb15f26bp-322, 0.0, 0x1.50149f4febfe7p-259, 0.0, 0.0, 0.0, 0.0,
     0x1.49d4166ffdcedp-1007, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55ba30e6b1b06p-719,
     0x1.71bd5512399b8p-798, 0x1.a2f6f29d4c814p-496, 0.0, 0.0, 0.0,
     0x1.58d4919417ff6p-704, 0.0, 0.0, 0.0, 0x1.968de0e94c4f9p-314, 0.0, 0.0, 0.0,
     0.0, 0x1.ab4eac7f0e416p-79, 0x1.f13f41d264c65p-454, 0.0, 0x1.d683aaa3da9aap-376,
     0.0, 0x1.15b9aaddbdcc9p-185, 0x1.e0f510484ccd3p-40, 0x1.da2dccceb7db3p-366,
     0x1.c762f185d15dap-980, 0.0, 0x1.0104673dbcc04p-555, 0x1.90f53fd81858bp-807,
     0x1.e5e443ed9c297p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a9d054cac1cep-400,
     0x1.6b3a4799bb709p-488, 0x1.2a4bfe68fc83cp-424, 0.0, 0x1.f9011a08f95cbp-697,
     0x1.82c2bf442b2fdp-48, 0.0, 0.0, 0.0, 0.0, 0x1.5eff2a8fb3db9p-979,
     0x1.73475f4c9375ep-912, 0x1.340a29897ce6cp-133, 0.0, 0.0, 0.0,
     0x1.dd6cb069433dep-398, 0x1.0008789c09254p-1006, 0x1.23a1730bb021dp-1020, 0.0,
     0.0, 0x1.7388d67528c29p-887, 0.0, 0x1.188a8643f845ap-120, 0x1.b174db9de5182p-595,
     0.0, 0.0, 0.0, 0x1.4be761cc92ea5p-406, 0x1.8c3430482ac44p-349,
     0x1.7d13fd15c4524p-478, 0.0, 0.0, 0.0, 0x1.91cd34dbf27f4p-132, 0.0,
     0x1.7fcfa7c480e4bp-78, 0x1.35cf8e32f3d9bp-526, 0.0, 0x1.c73cf0df95217p-763,
     0x1.1b8e672895085p-40, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a149d97ce7c33p-886, 0.0,
     0x1.17c1cae420dfap-169, 0.0, 0.0, 0x1.7c78e41202759p-3, 0.0,
     0x1.e54ffe71507d9p-1017, 0x1.8043682c68ecfp-912, 0x1.51d28a14d6d23p-3, 0.0,
     0x1.366f493309b98p-875, 0x1.dffc20b609ef4p-806, 0x1.6447ec79aa237p-857,
     0x1.32a9b276cb704p-573, 0.0, 0.0, 0.0, 0.0, 0x1.a0e878a90aa38p-635, 0.0,
     0x1.71a22b86db7ep-904, 0x1.bf81228b0d32dp-587, 0.0, 0x1.09e12b95df241p-601, 0.0,
     0x1.091ebd0e678dap-254, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f18b04b7088b1p-542, 0.0,
     0.0, 0.0, 0.0, 0x1.95c1e56d2067fp-701, 0x1.44cc6f46b5673p-74, 0.0, 0.0,
     0x1.15b99bef8b22p-96, 0x1.8a37fe16236afp-849, 0x1.a7ebf28fa79f3p-1, 0.0,
     0x1.1ed6f21dbcdcep-217, 0.0, 0x1.63cc08a2830dbp-924, 0.0, 0x1.5a87726ab7f09p-815,
     0x1.b9dbf1c973cdbp-366, 0.0, 0.0, 0x1.42c7f6a350a18p-147, 0.0, 0.0,
     0x1.3bfc666f0b221p-195, 0x1.82bf7f0e76115p-10, 0.0, 0.0, 0.0, 0.0,
     0x1.96fdc9d86faa4p-194, 0.0, 0x1.fa989cc7a58cdp-80, 0x1.d08571f569fddp-609, 0.0,
     0.0, 0x1.c3d2d1955fe44p-582, 0x1.4707660d37125p-579, 0.0, 0x1.e2ce53c81b57bp-644,
     0.0, 0x1.8957d51e5908dp-138, 0x1.e2cc19161c87dp-202, 0.0, 0.0,
     0x1.a234cd0a76d62p-795, 0.0, 0.0, 0.0, 0x1.7132e530dbfbep-339, 0.0, 0.0,
     0x1.9787f3af5970bp-787, 0x1.128099ee3d4ebp-921, 0.0, 0.0, 0.0,
     0x1.6bff2e12d2d05p-913, 0.0, 0x1.4b8ef2df63746p-382, 0.0, 0x1.ec510d3643dfep-684,
     0x1.724795b2037b1p-343, 0.0, 0.0, 0.0, 0x1.6e7b97e68ab9fp-626, 0.0, 0.0,
     0x1.c49942014108cp-579, 0.0, 0.0, 0x1.7370e5bba58f7p-162, 0.0, 0.0, 0.0, 0.0,
     0x1.15447871fac71p-537, 0.0, 0.0, 0x1.b5faf76d0b17bp-258, 0.0,
     0x1.aebe5d7499237p-654, 0x1.9e14699de8b2cp-179, 0x1.9b4c5b5fcc9a9p-817,
     0x1.afd01af6bf219p-32, 0.0, 0x1.b40455a28495p-46, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.af569f3d6b23cp-894, 0x1.ea2cbc82422cp-232, 0.0, 0x1.d9fbcac525edcp-128,
     0x1.d4bfccbbd94f2p-113, 0x1.f8d25941413e8p-389, 0.0, 0.0, 0.0, 0.0,
     0x1.9e0e198f170c6p-983, 0.0, 0x1.6a6e57c261958p-650, 0x1.2a5f19a5dfa5p-54, 0.0,
     0.0, 0x1.5a9a96c663f1ep-964, 0.0, 0.0, 0x1.c5b6ae1cdc8f8p-950, 0.0, 0.0, 0.0,
     0x1.2e356eb5a582dp-941, 0.0, 0x1.01f62987512eep-1002, 0.0, 0.0,
     0x1.51f92fe5dcea8p-95, 0x1.f7c9a54821e9ep-583, 0x1.ddbbd8f079fcdp-60, 0.0, 0.0,
     0x1.f260792c01a5dp-423, 0x1.af2b3b4d2f0aep-1009, 0.0, 0.0,
     0x1.8cee060900097p-381, 0.0, 0x1.9fba51a23d239p-790, 0.0, 0.0, 0.0,
     0x1.561e0bf1f70d5p-1013, 0.0, 0x1.9016f116cf636p-316, 0.0,
     0x1.544742560fd12p-693, 0.0, 0x1.370c701cb29aap-563, 0.0, 0x1.bbe4afb9dfefap-480,
     0x1.73dc462e94acdp-508, 0.0, 0x1.b0f5acbf04418p-925, 0.0, 0x1.d184d30ed802ep-388,
     0.0, 0x1.0d8da3a890331p-448, 0x1.f03a806d1d77p-59, 0.0, 0x1.4e0633cc52fd4p-583,
     0.0, 0x1.21805641c7187p-346, 0.0, 0x1.1d71fd1d566e2p-938, 0x1.1bddacfdd6b2ep-264,
     0x1.15fe4b04348f2p-510, 0x1.0dd39b7913b67p-809, 0.0, 0x1.a917dd0749fbfp-463,
     0x1.8a63785b0d011p-222, 0x1.ee616638f9688p-448, 0.0, 0.0, 0.0, 0.0,
     0x1.4af15c7a13fc2p-429, 0x1.b6a94bcbc8b5cp-45, 0.0, 0x1.420000cdfb90ap-137,
     0x1.d0338bafc97f9p-12, 0x1.ea1a40e51b6d7p-376, 0x1.831b683a4af88p-360, 0.0,
     0x1.6786148a1dfdfp-1000, 0x1.0a503bafd37ffp-318, 0.0, 0x1.7129d63c833f8p-58, 0.0,
     0x1.f06e469a11937p-756, 0.0, 0.0, 0x1.369bc3e7cb9cbp-810, 0.0,
     0x1.63ae8b38b5aa6p-140, 0.0, 0x1.c35d7beac6c33p-868, 0.0, 0x1.e7b5b4cf35447p-731,
     0.0, 0.0, 0x1.16301cc226628p-999, 0.0, 0.0, 0.0, 0x1.643f2afdde5b2p-234,
     0x1.2d9915e1d2c83p-155, 0.0, 0x1.97ae511e95325p-613, 0x1.17878fd35879cp-146, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b557b75fecf5cp-464, 0.0, 0.0, 0.0,
     0x1.1efef46b928fbp-401, 0.0, 0.0, 0.0, 0.0, 0x1.6a8b4f24e2c69p-506, 0.0,
     0x1.f725f4aefbd37p-160, 0x1.701c8bccfd09fp-76, 0x1.53c179dbd013p-484, 0.0,
     0x1.97b39a183fdd6p-901, 0x1.a81ccc36cb061p-156, 0x1.c4dd00530d0d3p-121,
     0x1.b7c484f65f235p-886, 0x1.6b7f989245c25p-898, 0.0, 0x1.b15a359c7d719p-802,
     0x1.d2d8bc8470e52p-38, 0.0, 0x1.d715a8e58b556p-561, 0.0, 0.0, 0.0,
     0x1.6579385ad7905p-45, 0x1.8d34ea8d2b5b5p-843, 0x1.8d3de49afd87bp-769,
     0x1.f5cbff95c1a87p-455, 0.0, 0.0, 0x1.c91c7cdf917e5p-253, 0.0, 0.0,
     0x1.9f10c7e069d83p-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46de065efdee7p-419, 0.0, 0x1.b46c2ff195b51p-877, 0x1.bdd0355865ce2p-141, 0.0,
     0.0, 0x1.e8799d4dde94ep-862, 0.0, 0.0, 0.0, 0.0, 0x1.beb3814e03795p-158,
     0x1.d799510f7d779p-583, 0x1.1fc7c0076c66ep-380, 0.0, 0x1.a56bc65ea8ca8p-968, 0.0,
     0.0, 0x1.4b353530e37b4p-751, 0.0, 0x1.c47abcdb69cf9p-178, 0x1.7deac9ab6bbfp-95,
     0.0, 0x1.d628bc199feap-231, 0.0, 0.0, 0.0, 0.0, 0x1.d9e54c1461bc9p-584,
     0x1.a779a5501efa5p-860, 0x1.922cbd89a701p-793, 0x1.082ab7a5c44d5p-777, 0.0, 0.0,
     0x1.61be81f967f1dp-208, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5823ba794834bp-697,
     0x1.2f3d6ea69dda4p-259, 0.0, 0.0, 0.0, 0.0, 0x1.82cfb6121534p-756, 0.0, 0.0,
     0x1.8f78f99e1ce46p-790, 0x1.c5a16f89b4eb7p-498, 0x1.4a2c82b2a1e67p-625,
     0x1.5aba6124f5c5bp-154, 0.0, 0.0, 0.0, 0x1.bdce122eafddfp-707,
     0x1.b8361ca4ef424p-161, 0.0, 0x1.6365daef96cc9p-431, 0x1.1bb8efa94b411p-293, 0.0,
     0x1.021b8ff20427ep-108, 0x1.d1aee1765046fp-404, 0x1.9215ba7921afap-75,
     0x1.b6879c3f6e6e7p-473, 0x1.479747f1f0e0cp-959, 0.0, 0.0, 0.0,
     0x1.e562d4277ec8fp-120, 0.0, 0.0, 0x1.a86c77eb393e3p-452, 0.0,
     0x1.39a1fbeb55e26p-964, 0.0, 0x1.f6fb33816ef81p-686, 0x1.3d60baf6de9a7p-187,
     0x1.1bbbb065f950cp-366, 0.0, 0x1.39ca211da0e4ep-377, 0.0, 0x1.1ba59acfee5bdp-719,
     0x1.2349584d250f6p-497, 0x1.a6ed14a4701cap-634, 0x1.a0db3dfbdff08p-224, 0.0,
     0x1.98e13f652408dp-481, 0.0, 0.0, 0.0, 0x1.ff18dcbd568d8p-476,
     0x1.7f2655da44923p-131, 0.0, 0x1.46b04d997a61p-492, 0x1.b2806062701edp-275, 0.0,
     0.0, 0.0, 0x1.4d2e03db1071p-945, 0.0, 0x1.0f20a98c600a9p-339, 0.0,
     0x1.7981110b16c64p-893, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36db7b8277fedp-305, 0.0,
     0x1.bc06bd527a291p-614, 0x1.9ff6104aa5624p-456, 0x1.f32b4d78805aap-189, 0.0, 0.0,
     0x1.012fe30becdf2p-674, 0x1.8156be43112c5p-1010, 0.0, 0x1.a8808a7e638c8p-920,
     0.0, 0x1.58b0f55e58cbap-293, 0x1.d36a549d000dbp-998, 0x1.f138e311c7436p-751, 0.0,
     0x1.5d9f7ec7edec4p-757, 0x1.eac28deba624dp-323, 0x1.de2eb101dec15p-49,
     0x1.a117129cc3e88p-517, 0x1.8af01f89105a6p-698, 0.0, 0x1.89bdfdad2b888p-430, 0.0,
     0x1.28d7c3567e8dp-2, 0.0, 0.0, 0.0, 0x1.28d3c5bceb522p-669,
     0x1.e10343c308084p-269, 0x1.6a79663dfd524p-480, 0.0, 0x1.8288b9e2beea9p-141,
     0x1.1fb7e3f06797dp-623, 0x1.84f1de1dfb221p-110, 0x1.21c57ff324856p-37, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4271630262437p-504,
     0x1.2a1069879696bp-534, 0.0, 0x1.3f9659f2fb5eep-354, 0.0, 0x1.09b444acc214bp-761,
     0x1.32608e23500fbp-231, 0x1.592d4841b9b7dp-558, 0.0, 0x1.9e554642ddd88p-113, 0.0,
     0.0, 0x1.e8883909c118ap-750, 0x1.d4ecb7e66cbf1p-764, 0x1.e48f99a2409dbp-490,
     0x1.afb63aea1e8c9p-725, 0x1.244f253b69197p-977, 0.0, 0x1.765803b48f8e5p-697,
     0x1.76a96ce2fd7b7p-528, 0x1.22ccb7cd749aap-915, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9d925bf5011ep-1017, 0.0, 0.0, 0.0, 0x1.776ebebd9cd9p-219, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.29431b6727ec4p-820, 0.0, 0x1.d2c8573205d3ep-127,
     0x1.637e3d17cefa4p-812, 0x1.d8267680ba1dep-410, 0.0, 0.0, 0x1.514ccda2ff43p-275,
     0x1.10e7cda19299dp-722, 0.0, 0x1.db31722b1183ep-297, 0.0, 0x1.b2a0553d8f42p-322,
     0.0, 0x1.1098d4009baedp-739, 0.0, 0.0, 0.0, 0x1.73d6c113d0af2p-410, 0.0,
     0x1.a1e95a2e0dc38p-963, 0.0, 0.0, 0.0, 0x1.47fc53d070d11p-350,
     0x1.adf7dd0e75fddp-971, 0x1.4fc99c9b222ddp-31, 0x1.aa602dfc1f105p-947,
     0x1.72a9ba757084ap-491, 0.0, 0.0, 0.0, 0.0, 0x1.b43e95d278a5bp-991, 0.0, 0.0,
     0x1.766c44c6b3081p-557, 0.0, 0.0, 0x1.80c5b87617112p-748, 0x1.71b62c5a36bc1p-944,
     0.0, 0.0, 0x1.efe43e6b144bap-456, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e2e9f8597e8b8p-573, 0x1.bb49a3fbeaee2p-260, 0x1.ef6ff96499cb1p-76, 0.0,
     0x1.ce9d56cdbe4dap-869, 0x1.07647da2b7ad8p-939, 0.0, 0.0, 0.0,
     0x1.92ca54a221a9dp-822, 0.0, 0x1.8a2e897f3632bp-262, 0.0, 0.0, 0.0,
     0x1.0c1d756375221p-693, 0x1.e09d0c99b101cp-957, 0x1.43d4ee6c75e0dp-763,
     0x1.a458ccd1f830ap-662, 0x1.5a3af6b4237d1p-223, 0.0, 0x1.c95b38c37b80fp-978, 0.0,
     0.0, 0.0, 0.0, 0x1.d27c89e21dd46p-712, 0.0, 0x1.99eb0d226ffe9p-79, 0.0, 0.0,
     0x1.46ac61dd70ff2p-12, 0.0, 0.0, 0.0, 0x1.ff83afdaeca0cp-881, 0.0, 0.0, 0.0, 0.0,
     0x1.4a1389dc590a7p-458, 0.0, 0x1.777dfa195ef3bp-311, 0x1.0a4fd20de2b09p-541, 0.0,
     0x1.8ca19e0d4e53cp-176, 0x1.ae840936c1a5fp-947, 0x1.5f78bf6e2df45p-427,
     0x1.bf1a4d2d37674p-1, 0x1.9f79801b018f6p-1013, 0.0, 0.0, 0.0,
     0x1.3f16b9ac688cep-517, 0x1.9269832a1d569p-371, 0.0, 0.0, 0.0,
     0x1.b3667e48ab158p-712, 0x1.e35b6b9e15845p-298, 0.0, 0x1.4f0d1fed2a682p-733,
     0x1.2a0291dcdc1bdp-719, 0.0, 0x1.8f68cfec3d743p-116, 0.0, 0.0, 0.0,
     0x1.7b92b49ee8b09p-354, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac9f05fdada11p-552, 0x1.b0538ab49d266p-831, 0x1.d71d5cbba2f52p-455,
     0x1.fff907992398dp-174, 0.0, 0x1.0a2811547f694p-433, 0.0, 0x1.240e0b743e975p-63,
     0.0, 0x1.b7081c5dd8eccp-912, 0.0, 0x1.a7ec850736bf1p-841, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.24141438cfeb4p-306, 0.0, 0.0, 0.0, 0.0, 0x1.1d64138e14649p-230, 0.0,
     0.0, 0x1.b82f282dabe0ep-95, 0x1.c9303ae3e8233p-970, 0x1.d5748c22752d4p-643,
     0x1.2e717ec2b9b85p-587, 0x1.30865b6dd3f08p-466, 0.0, 0.0, 0.0,
     0x1.8f109c357611ap-529, 0x1.ff99956f3b029p-458, 0.0, 0.0, 0.0, 0.0,
     0x1.db7eab2a80f79p-376, 0x1.8735566fbd8ccp-467, 0x1.9bd3ba77a9b34p-731,
     0x1.eb088ce68317ap-439, 0x1.548e73c102b5p-741, 0.0, 0.0, 0x1.162238facde2dp-248,
     0x1.f93fe41d78d1ap-311, 0x1.86f84303c2d97p-65, 0x1.23015aa64058ep-859, 0.0,
     0x1.b29b6d812767dp-48, 0.0, 0.0, 0x1.7ba965eee3c9cp-898, 0x1.2c59219f243f6p-35,
     0.0, 0x1.174acd8b94c68p-684, 0.0, 0x1.acde5de25b87ep-537, 0x1.c28d48cc92858p-609,
     0.0, 0x1.b59fc9a2209ffp-269
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_cosd1_u10purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_cosd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
