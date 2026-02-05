/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind2_u35avx2128.c --function \
 *     Sleef_finz_asind2_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.316c5578cc01fp-779, 0x1.3a0819138d883p-552, 0x1.e2f4b69fb7f7ap-952,
     0x1.5236a806daf6dp-167, 0x1.4213b477d4c1dp-453, 0x1.0d3b7380604afp-819,
     0x1.92fab79b55b19p-438, 0x1.97aea81dd7918p-674, 0x1.eeeeb57678773p-476,
     0x1.a1e606f1baf1bp-404, 0x1.537e77fe88076p-890, 0.0, 0.0, 0x1.241aafc1ad362p-20,
     0.0, 0x1.1542075a2e72ep-248, 0x1.b27fb910dbeaap-505, 0x1.93bf562b54b9bp-1011,
     0x1.4badf3a9b81f2p-414, 0.0, 0.0, 0.0, 0.0, 0x1.a2aeca4ef20aap-986, 0.0,
     0x1.f31967278db1dp-777, 0x1.101f1a632bf7ap-794, 0x1.ae2423d568994p-249, 0.0,
     0x1.565eb554d4f92p-976, 0x1.f189f610229b9p-319, 0.0, 0.0, 0.0, 0.0,
     0x1.e1d88c0f35371p-676, 0x1.de9057e475074p-279, 0x1.9f834d8f32c6bp-72, 0.0, 0.0,
     0x1.d3e184d4f8edp-751, 0x1.92b753013079fp-454, 0x1.0886f425cab94p-111, 0.0,
     0x1.1cb005a40c109p-1012, 0x1.a056ea9befe54p-769, 0x1.7b014476d49f7p-112, 0.0,
     0x1.4cb8914427bbcp-166, 0.0, 0x1.08c0997f8202ap-766, 0.0, 0x1.ebf495425cfa4p-274,
     0x1.10e23c1d5e1fdp-754, 0x1.2f4a4227d4ca5p-114, 0.0, 0.0, 0x1.05d8f560f66dep-820,
     0x1.8388e86e31815p-720, 0.0, 0x1.61b888b44f9c7p-66, 0.0, 0.0, 0.0, 0.0,
     0x1.bb37415770877p-856, 0x1.84b3c2fe955aep-1002, 0.0, 0.0,
     0x1.aa714448c9dd5p-380, 0.0, 0.0, 0.0, 0x1.da3df1c0017bdp-228,
     0x1.df3f15468e21dp-191, 0x1.fb872e6ae31f6p-433, 0.0, 0.0, 0x1.e7950c23f5c16p-444,
     0.0, 0x1.b51bad6f94aacp-413, 0x1.55f548c04d40ap-886, 0x1.6ed7b08c0b675p-441,
     0x1.ee11f1069c0bep-336, 0x1.05f8f12627682p-401, 0.0, 0x1.daf8d39af1495p-546,
     0x1.c11ca555331d2p-444, 0x1.70dbc41f3ef16p-1022, 0x1.b8cf7437127a2p-471, 0.0,
     0x1.ff33d69953b24p-153, 0.0, 0x1.ea929cf3ef2dfp-782, 0x1.88b2d71c224adp-245, 0.0,
     0.0, 0.0, 0.0, 0x1.5d398d7870c5dp-873, 0x1.fac1311fd6bbdp-783,
     0x1.7057f83d59f11p-248, 0x1.15aba4f396d1p-737, 0x1.fd966bd9a186fp-615,
     0x1.9c48bd4e2eeedp-298, 0.0, 0x1.4336887f866a8p-540, 0.0, 0x1.b5a46639717dap-938,
     0x1.1312258d810e6p-558, 0x1.12f42729187a3p-212, 0.0, 0.0, 0x1.fea2d99fb6bd1p-348,
     0.0, 0.0, 0x1.2e84b5672d257p-10, 0x1.02aadbce86797p-725, 0x1.9742a9f417b1ep-81,
     0.0, 0.0, 0x1.6b74ea076dd17p-553, 0.0, 0.0, 0x1.3177c0cf9c319p-283,
     0x1.2d77dcb02a938p-218, 0x1.6ce8692539f7cp-325, 0.0, 0x1.99c4e14384d45p-28,
     0x1.e2b0d37bf88b6p-655, 0x1.43f89c0b56ff1p-309, 0x1.4a6495e0c476ep-952,
     0x1.02049ce0a0ee8p-383, 0.0, 0x1.757edbf3fa98p-301, 0x1.a9a6f96933ed4p-475,
     0x1.091a5816b4889p-880, 0.0, 0x1.1bb9416b33ab9p-882, 0x1.c2e6ad2e69c7dp-383,
     0x1.d8c8b3bdb7c7fp-938, 0.0, 0x1.b8721cd8e22a4p-946, 0.0, 0x1.b77b3afc081ap-663,
     0x1.f431c4eabf9efp-991, 0.0, 0.0, 0x1.990aa54d03271p-971, 0x1.e88856d825072p-879,
     0x1.3e2acce2f7f75p-999, 0.0, 0x1.a21fa941a306dp-742, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.883edbe9b4e32p-407, 0x1.6331efa93efc6p-261, 0.0, 0.0, 0.0,
     0x1.ab75578442787p-554, 0x1.999433a81f678p-150, 0x1.688733ef5fecfp-892,
     0x1.b2cdf2159322dp-164, 0.0, 0.0, 0x1.885b1b1b6a261p-648, 0.0, 0.0, 0.0,
     0x1.77a79212ffa81p-189, 0x1.2947afa4b8eadp-1007, 0.0, 0x1.18901e3118e05p-47, 0.0,
     0.0, 0.0, 0.0, 0x1.fc4553219557fp-758, 0x1.d1e7ed77404e3p-977,
     0x1.fb2ab9f7caa3ap-114, 0x1.773a04aa6bad4p-642, 0x1.ad414bf404c43p-92, 0.0,
     0x1.5c68bd870000ep-921, 0x1.19052da885a37p-194, 0x1.7031f8384078cp-303, 0.0, 0.0,
     0.0, 0x1.29c11d7562d33p-268, 0.0, 0x1.f9872d8c664acp-772, 0.0, 0.0,
     0x1.508dad9ed29bbp-842, 0.0, 0x1.8c0eb715ccb2cp-797, 0x1.54d55f135cd52p-737, 0.0,
     0.0, 0x1.51d5021851a9ep-980, 0.0, 0.0, 0.0, 0.0, 0x1.9f91006c0cfe5p-109, 0.0,
     0x1.92f3606ecaf1dp-430, 0x1.bfab2e52ead49p-42, 0x1.ee6bf0df48384p-1005, 0.0,
     0x1.e192456077782p-1007, 0.0, 0.0, 0x1.8e6d93c3a86cep-381,
     0x1.5f65d37b523ddp-902, 0x1.a35e64efd7c6ap-193, 0x1.130a9a6e25784p-538,
     0x1.467e8503b070ep-652, 0.0, 0x1.de4dfeb0c47e6p-887, 0.0, 0.0,
     0x1.e27d0baf94694p-968, 0.0, 0.0, 0x1.c80aff2cd3f37p-672, 0x1.06b4113c75178p-970,
     0x1.da9bec7547198p-653, 0.0, 0.0, 0.0, 0x1.d2d30d934d085p-556, 0.0,
     0x1.5918207eb0bb5p-680, 0.0, 0x1.454ba981d900cp-921, 0x1.fd7b6194c3a0dp-68, 0.0,
     0.0, 0.0, 0x1.21c2f8f2c681ap-266, 0.0, 0x1.28a17539b51efp-55, 0.0,
     0x1.d19da4c9f4bfp-230, 0.0, 0x1.b1d80b18a5a9ap-429, 0.0, 0.0,
     0x1.c2a35dd73df83p-1001, 0.0, 0.0, 0x1.f6dcc777c8a91p-755,
     0x1.41d17cb8d4865p-497, 0.0, 0x1.73ab3a1ece80dp-254, 0.0, 0x1.a028fcbe1a866p-279,
     0.0, 0x1.dbfd26538771ep-202, 0.0, 0.0, 0.0, 0x1.9109d09bd727cp-809, 0.0, 0.0,
     0.0, 0x1.4033b5929dcfbp-171, 0x1.17c23e415743dp-476, 0.0, 0.0, 0.0,
     0x1.33b7815da770dp-108, 0.0, 0.0, 0.0, 0x1.1d1129624b519p-456,
     0x1.1a1494469a489p-26, 0.0, 0.0, 0x1.a8a9a37f1bb05p-72, 0.0, 0.0,
     0x1.0f47d227880e6p-289, 0x1.ff9872d9fc53fp-449, 0x1.4e345ca41b9a7p-969, 0.0, 0.0,
     0.0, 0.0, 0x1.eea4f96fd3418p-557, 0.0, 0x1.5122428d48128p-149,
     0x1.043df0be95d1ap-244, 0.0, 0x1.92eee30d71926p-521, 0x1.660772d30943ap-602, 0.0,
     0x1.e26bb579f7637p-474, 0.0, 0.0, 0x1.4b07e8096238fp-916, 0x1.f4dcbba22ea8cp-64,
     0.0, 0.0, 0x1.6cb089d03c43fp-359, 0.0, 0x1.d742cbbce2c44p-618,
     0x1.06f30d7ec3c1bp-32, 0.0, 0x1.0db94173c2e8p-543, 0.0, 0.0, 0.0,
     0x1.1edac3ef9530ap-585, 0x1.e109ce5d58edp-194, 0.0, 0x1.61ffe68eda05fp-210, 0.0,
     0x1.9cc9dbc62b994p-675, 0x1.dbd7abc1f35e8p-816, 0.0, 0x1.d751c3dc4d075p-845,
     0x1.4c82522ca8fa7p-934, 0.0, 0x1.c136ed823191bp-949, 0.0, 0x1.9dd4a494173adp-426,
     0x1.4b146e97ae20dp-115, 0x1.c7d5ae69db4abp-330, 0x1.0e301954499a1p-175, 0.0,
     0x1.699861bf49ff5p-150, 0.0, 0.0, 0.0, 0.0, 0x1.577fe48f92466p-632, 0.0, 0.0,
     0.0, 0x1.3407875703867p-744, 0.0, 0x1.f58288032bc18p-100, 0x1.41b3ac0e909ecp-570,
     0.0, 0.0, 0.0, 0.0, 0x1.1ed1d4f629e49p-517, 0.0, 0.0, 0x1.6a2d5fd320852p-354,
     0.0, 0.0, 0.0, 0.0, 0x1.54b99f345b7b3p-605, 0x1.a7758b9e62707p-585, 0.0, 0.0,
     0x1.ead968b34c7dep-658, 0.0, 0x1.0f3731a42d232p-23, 0x1.3815410b2b0d9p-423,
     0x1.8de5b3f9eadccp-501, 0x1.3fe8571d9fc6fp-153, 0.0, 0.0, 0x1.07c19e1a39191p-418,
     0x1.404ac3ee3826dp-702, 0x1.d9fafcb335b14p-697, 0x1.8c2c4b7470e36p-202,
     0x1.fca203135e28bp-39, 0.0, 0.0, 0x1.535e9c8530a1dp-126, 0x1.786deb5678ff2p-566,
     0x1.30b5c854ede82p-337, 0.0, 0x1.a15dfe38ab7d6p-703, 0.0, 0x1.07a2f578f286ep-266,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02c0b1e9e1dd1p-855, 0x1.4ae48ca838569p-143, 0.0,
     0x1.f97146777f99ap-284, 0x1.68ebf5d3e5f17p-518, 0x1.ef0311800d2bdp-943, 0.0,
     0x1.84bb9284e93cdp-836, 0.0, 0x1.0b41baa8657d3p-730, 0x1.2b799b5f2ecc7p-984,
     0x1.ead6d7daeb788p-296, 0x1.2d35d38f539c1p-325, 0.0, 0.0, 0x1.7c69ee85a8de3p-211,
     0.0, 0.0, 0.0, 0.0, 0x1.52a79278d899p-20, 0x1.19efb4f7f06abp-524, 0.0, 0.0,
     0x1.2f2700632a411p-481, 0.0, 0.0, 0x1.e93e5ae76b6a2p-578, 0x1.2eb4634bc10d6p-257,
     0x1.49c925dfdba42p-615, 0.0, 0.0, 0.0, 0.0, 0x1.0ecd01656b334p-941,
     0x1.c3118f19c525fp-199, 0x1.bd29b395299b9p-869, 0.0, 0x1.5d530f9564758p-232,
     0x1.8b7872fe7916bp-546, 0x1.3f472dc0d2bc7p-75, 0.0, 0.0, 0.0,
     0x1.ebc222f44d979p-709, 0.0, 0x1.eff9b479773e1p-466, 0x1.e3080810fa923p-340, 0.0,
     0x1.bc52024d128a8p-853, 0x1.8f4186d24bbe5p-337, 0.0, 0.0, 0.0,
     0x1.c7365b377ae13p-325, 0.0, 0.0, 0.0, 0.0, 0x1.3ac3685332533p-472, 0.0,
     0x1.dbb141d161555p-668, 0.0, 0.0, 0x1.f89cceb7dbbd2p-919, 0.0,
     0x1.bf310b41d812cp-905, 0x1.22f62b5d5ebddp-805, 0x1.b27176568961bp-143, 0.0,
     0x1.a949164bbd012p-593, 0.0, 0.0, 0.0, 0x1.d1f6eaf25ff9cp-893,
     0x1.2e68849a68d7bp-565, 0x1.4e7e43f01ead7p-276, 0x1.b662c15018aebp-850,
     0x1.499ddbbb7c0a3p-201, 0x1.3678fd37f60dfp-654, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e10823aa6ff2cp-899, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.42dbb2708a236p-194, 0x1p0, 0.0, 0x1.c652586efcbf9p-619,
     0x1.c08c3d570fdd1p-216, 0.0, 0x1.e5d2a02fa7a56p-1003, 0x1.2b9ebd2ce4e96p-165,
     0x1.262c4f8cf38ebp-492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a23a3f6f3bac4p-89, 0.0,
     0x1.0aafca5e43371p-332, 0x1.e760d9b5abc66p-489, 0.0, 0x1.175b8172f587ap-265,
     0x1.191f9edd77219p-673, 0.0, 0x1.2ad419e57d7b3p-555, 0x1.f2888a97b8222p-379,
     0x1.be4c747e21ab6p-122, 0.0, 0x1.24974241e824cp-641, 0x1.9d89e3fa44ecdp-726, 0.0,
     0x1.149331561431dp-600, 0.0, 0x1.4e2bb69ca47cbp-444, 0x1.f88da58450a58p-623,
     0x1.5dd03c09b8015p-180, 0x1.cd509706f9769p-987, 0.0, 0.0, 0.0, 0.0,
     0x1.fa432daf22bbfp-468, 0x1.595e6a73380e8p-410, 0x1.852d51df63be4p-378,
     0x1.ab035d5b3839fp-320, 0.0, 0.0, 0x1.690878dbec147p-675, 0x1.d926717f401b7p-341,
     0.0, 0x1.ea1c045206c4dp-795, 0x1.0a43966e2a63p-307, 0.0, 0x1.e77f1c75a6bc1p-594,
     0.0, 0.0, 0.0, 0.0, 0x1.cdc0621287616p-876, 0x1.bf937d1447a82p-427, 0.0,
     0x1.72a4c35aa6a36p-45, 0.0, 0x1.3789c2ca153fap-793, 0x1.40ec1d34d7068p-171, 0.0,
     0x1.241a2a3eeadd1p-887, 0.0, 0x1.296804cd0091ap-650, 0.0, 0x1.066244266db8p-401,
     0.0, 0x1.46cc9b6d6ba7p-753, 0x1.cd76e10fb6534p-327, 0x1.c181faf91eafdp-698,
     0x1.e438798579ad9p-450, 0x1.285a5aa047f72p-248, 0.0, 0x1.826be189bd815p-732, 0.0,
     0x1.ed72116aafab1p-684, 0x1.7f9304d53d473p-82, 0x1.22366cf5d975cp-14, 0.0, 0.0,
     0.0, 0.0, 0x1.529e3680c2c05p-783, 0.0, 0x1.2eea63751ff3bp-461,
     0x1.5ce7809448477p-354, 0.0, 0.0, 0.0, 0x1.2e3b6f71f57f4p-720,
     0x1.d5b05efa5ffa7p-324, 0x1.5939b0f192d3cp-927, 0.0, 0x1.577f1225edee9p-129, 0.0,
     0x1.46bd3f75eb02ap-262, 0x1.0a756a6e77f78p-333, 0.0, 0x1.55854a00c75bcp-768, 0.0,
     0.0, 0x1.63a6652761d3ep-363, 0.0, 0x1.96c1ef47234d3p-429, 0x1.09b60d87aaeacp-531,
     0x1.e9f48500866dep-230, 0x1.75fa7fb440045p-416, 0x1.af032629b088ep-134, 0.0, 0.0,
     0.0, 0x1.21f0916f728cfp-55, 0x1.5f1333e5cb27cp-887, 0.0, 0x1.b3ba5c849f082p-228,
     0.0, 0.0, 0x1.7923ccd56af8fp-844, 0x1.176d64960b091p-480, 0.0,
     0x1.6a089f3c8cee2p-406, 0x1.27372f382a99ep-731, 0x1.80c3e3cd83777p-80,
     0x1.41511948defd6p-531, 0.0, 0x1.039e90e339c58p-87, 0.0, 0x1.b558fbe0728ddp-584,
     0.0, 0.0, 0x1.4f09a4ef3fc2bp-796, 0.0, 0.0, 0x1.9faf02963c425p-709,
     0x1.b950a72628b5p-307, 0x1.5a891cfef7bf8p-513, 0x1.d1f43674ec926p-806,
     0x1.69df11a9b04f8p-504, 0.0, 0x1.bca73590151f6p-580, 0.0, 0.0, 0.0,
     0x1.9f61ab47badf9p-486, 0.0, 0.0, 0x1.4bcee2cf1fabcp-734, 0x1.1e582e17c9aecp-213,
     0.0, 0.0, 0.0, 0x1.67d04e097cee9p-828, 0.0, 0x1.5d530721a55d3p-372, 0.0,
     0x1.5226908d16d39p-53, 0.0, 0.0, 0x1.31878be69474bp-480, 0.0,
     0x1.7e3986f9db2cap-993, 0x1.f948f50fe3901p-529, 0.0, 0.0, 0x1.88bc73f6785afp-167,
     0x1.739cecc1d0391p-596, 0.0, 0x1.80373d6cd46d1p-506, 0x1.cd3970fb1075ep-119,
     0x1.0f6d5fd5d84f6p-409, 0x1.a992f09066c06p-795, 0x1.d0c588f98cae6p-25,
     0x1.2a42101c24ad3p-443, 0x1.83f0563b237d4p-385, 0x1.de4f64795b6efp-545, 0.0, 0.0,
     0x1.5a4236bc05067p-425, 0x1.3b1e72bc58cddp-968, 0x1.8ae1ac907d58ep-1016, 0.0,
     0x1.3889a9598dfe2p-301, 0x1.85f07decd3e78p-791, 0.0, 0x1.246639dfc1ee3p-38,
     0x1.fc89aa7b1a01p-235, 0.0, 0.0, 0.0, 0.0, 0x1.f3e9a8dd398ddp-848,
     0x1.aefbd73dccafp-102, 0x1.7083789371c69p-947, 0.0, 0.0, 0x1.2b08fafa8d6a4p-230,
     0.0, 0x1.2d023febbf03ep-108, 0.0, 0x1.e02dbac2eff17p-929, 0x1.9a7c157720341p-169,
     0x1.70c70af9e122p-257, 0x1.d728cc1b247b8p-1007, 0.0, 0.0, 0x1.eed226a84ca84p-176,
     0x1.f4ac04e0db378p-847, 0x1.238723114de7ep-900, 0x1.416295df1032fp-786, 0.0,
     0x1.4b7bd9108020cp-94, 0x1.3e0eb0098e84ep-1006, 0.0, 0.0, 0.0, 0.0,
     0x1.26ca3d1a30e4ap-116, 0x1.1abf1b669a39fp-608, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46380c32cc471p-198, 0.0, 0x1.d7999942ecb45p-976, 0x1.74e9aaa4f9e1dp-693, 0.0,
     0.0, 0.0, 0x1.2287530671646p-679, 0.0, 0x1.e95bc29e88febp-632, 0.0,
     0x1.4028860326161p-1003, 0.0, 0x1.6173f1f11ba53p-693, 0x1.a36bdcfd102b8p-996,
     0.0, 0.0, 0x1.5d694e7bed34dp-928, 0x1.392c5f17b2638p-63, 0.0,
     0x1.22230f4e8542ep-175, 0.0, 0.0, 0.0, 0x1.4c0b2655e9615p-694,
     0x1.ca09c4a21a52ep-75, 0.0, 0.0, 0x1.97efbe12901b2p-889, 0x1.740a8bf6ecb8ap-894,
     0x1.0675ff22d6173p-179, 0.0, 0x1.c75b96a05e1f2p-182, 0x1.51831be31a357p-340,
     0x1.312a76aa3c069p-571, 0x1.1109564ff3ee5p-794, 0x1.2307c7c9f54bbp-60,
     0x1.ac80c090a6006p-88, 0x1.98ebabde510c9p-1002, 0.0, 0.0, 0x1.217ecc9d4658ap-954,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7117072fa73ap-544, 0.0, 0.0,
     0x1.a463b9337f2fap-955, 0x1.a698c7a976a45p-392, 0x1.cf6d7b18af5abp-465,
     0x1.4a0d94201908ap-280, 0x1.8113ecadd343ap-70, 0.0, 0x1.ebbf69644ce38p-229, 0.0,
     0.0, 0x1.a5a4dc8a61b64p-984, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.535c1477f2438p-922, 0x1.b5dbf207b82c5p-218, 0x1.4958c80e54baep-42,
     0x1.1f3330c7cd988p-717, 0x1.41a480aedeb73p-698, 0x1.e376bf24ad5cfp-426,
     0x1.8dda47e6d130dp-406, 0.0, 0.0, 0.0, 0.0, 0x1.cb3939bf981a4p-443, 0.0,
     0x1.08f85e912352ap-710, 0x1.496ed8d6e366p-6, 0x1.022fb367c8b65p-862, 0.0, 0.0,
     0x1.bbfab1e2b9044p-16, 0.0, 0.0, 0x1.6cabf7938b0b8p-530, 0.0, 0.0, 0.0,
     0x1.8c25a7a949c17p-195, 0.0, 0.0, 0.0, 0x1.08c0f4a092b32p-258,
     0x1.d25c6b2e4e1fbp-663, 0.0, 0.0, 0x1.79c0ab90b8b0dp-574, 0.0,
     0x1.5526b16d9acddp-998, 0x1.4d5bf19478c7ep-103, 0x1.07697249e6414p-88, 0.0, 0.0,
     0.0, 0.0, 0x1.3f6925eb5a693p-846, 0x1.9c0a06c851a0dp-396, 0x1.cfe6cecdc2cd7p-45,
     0x1.3d7598b8073b3p-981, 0.0, 0.0, 0.0, 0.0, 0x1.f5ffd54ee2055p-395,
     0x1.db1b7996cac52p-243, 0.0, 0x1.2664b16a0ec02p-182, 0.0, 0.0, 0.0,
     0x1.9dafe2223723ap-581, 0.0, 0.0, 0x1.dcc6d3ff0074p-681, 0x1.43d4a6c3e8cc9p-546,
     0x1.a03c09a9b1938p-855, 0.0, 0.0, 0.0, 0.0, 0x1.f0518b1f31da9p-773, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8761b2d661bccp-612, 0x1.aa9c21581cc1cp-971, 0.0,
     0x1.e02e0dc86e572p-48, 0x1.687f6b78b69aep-313, 0.0, 0x1.4c55af104f2aap-709, 0.0,
     0.0, 0.0, 0x1.7eccac17ce9ap-977, 0.0, 0x1.b2da535926c0ap-468,
     0x1.0bd9c604b995ep-667, 0.0, 0x1.4ab3133b58946p-997, 0.0, 0x1.d9a09fe6184bap-970,
     0.0, 0x1.d24b7543479b1p-195, 0x1.27ed32db34a41p-797, 0x1.a0a1c4ad96db7p-87,
     0x1.bfcc996eda3dep-670, 0.0, 0x1.5c06899e2dd64p-814, 0.0, 0.0, 0.0,
     0x1.80277df075f4ap-228, 0.0, 0x1.624f84a85a779p-709, 0.0, 0x1.1eac6d24b25eep-998,
     0.0, 0x1.25dd86598fd32p-370, 0x1.69058398e422ap-285, 0x1.67a88d6069b41p-22, 0.0,
     0x1.1c88bc5dec2a8p-521, 0x1.6160346132bfap-899, 0.0, 0x1.c06289dde1a3fp-414,
     0x1.9fbc456fb9c05p-100, 0x1.ffd4e00f1ce7dp-127, 0x1.64d7c9f608347p-958,
     0x1.fc44c4c559069p-837, 0x1.62174e5e5a98bp-89, 0x1.807c0041c9776p-238,
     0x1.e7372caa4f541p-974, 0x1.705db90053d17p-191, 0x1.90d34befbf0d8p-936, 0.0,
     0x1.2109c0a237d0ep-614, 0.0, 0x1.cb0e4db56e8c6p-225, 0x1.f3483b0ebc827p-883, 0.0,
     0.0, 0.0, 0.0, 0x1.257b3d101ce86p-147, 0.0, 0x1.c33cbdebe404ep-934,
     0x1.6ee2b7ac56d8dp-654, 0x1.c250bab3a235fp-328, 0x1.b70fe61dd8dfbp-402,
     0x1.4f638a701724dp-384, 0x1.54c5b2cbc6404p-86, 0.0, 0.0, 0x1.24ef6db64470ep-724,
     0.0, 0.0, 0x1.0a8a63187862fp-168, 0x1.7a576807e11dbp-317, 0x1.19f19e564702ep-253,
     0.0, 0.0, 0x1.3f985f7da0964p-884, 0x1.d48f555550953p-147, 0x1.83defca1de52fp-434,
     0x1.c94676733684dp-401, 0x1.677457f571417p-406, 0.0, 0x1.6bb63b35ae903p-452, 0.0,
     0x1.54147c553bc7bp-449, 0x1.43ba4e40e2f98p-734, 0x1.e2b59b06a21e8p-666, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7d9a1a8f52342p-385, 0x1.6d33531d3c6f4p-964, 0.0, 0.0,
     0x1.9c2edbb57197ap-290, 0x1.889630a10f3f6p-550, 0.0, 0x1.56faa9261eaecp-219,
     0x1.b310938c2686ep-886, 0x1.cdd836187ae76p-473, 0x1.e0c5cd62da6eap-483,
     0x1.a7a11556c3032p-475, 0x1.fb02d1c310bddp-633, 0.0, 0x1.405db0e9c80ffp-792,
     0x1.2157a93de0048p-582, 0x1.d9d6169c7fe7ap-187, 0.0, 0.0, 0x1.9c3edf14b17aap-841,
     0x1.bd71dd2e18aabp-340, 0.0, 0.0, 0x1.19d70cd55b695p-667, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d893e96b87edap-208, 0.0, 0.0, 0x1.ab42e21b4f13bp-506,
     0x1.12098b160ee13p-593, 0.0, 0.0, 0x1.c110021fc572ap-152, 0.0, 0.0, 0.0,
     0x1.8e8f1d072eb78p-328, 0x1.ba16dbe831c52p-623, 0x1.9b25c9955f16cp-606, 0.0,
     0x1.0a4b0d6a8a906p-912, 0.0, 0x1.3158c8f56b615p-429
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
            tmp1 = Sleef_finz_asind2_u35avx2128(tmp0);
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
    printf("Sleef_finz_asind2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_asind2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
