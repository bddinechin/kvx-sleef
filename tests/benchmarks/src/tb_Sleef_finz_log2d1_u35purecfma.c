/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d1_u35purecfma.c --function \
 *     Sleef_finz_log2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.3733a8b02759p-833, 0.0, 0.0, 0.0, 0.0, 0x1.1c9d02187f108p-638, 0.0,
     0x1.91f791d7c7952p-694, 0x1.d8cc0cc765924p-514, 0x1.8a8f5d472357dp-403, 0.0,
     0x1.3c11bf7b504f4p-497, 0x1.d8779f434ccc4p-1013, 0x1.baba825f8d2c3p-174, 0.0,
     0.0, 0x1.2bd3448afb4c9p-757, 0x1.81ef2584d5dcdp-795, 0x1.84160e240424dp-531, 0.0,
     0x1.a34b553c81e39p-819, 0.0, 0x1.9e84a7af3b92bp-30, 0.0, 0.0,
     0x1.cd2ffef26e858p-409, 0x1.77dbb9bd1e35p-302, 0.0, 0x1.53e3ab4b4fa38p-248, 0.0,
     0.0, 0x1.77076a3d249c2p-474, 0x1.4c52457126f7ep-388, 0x1.099fa623f5ca3p-983,
     0x1.3353f458b80ccp-20, 0.0, 0.0, 0x1.7fd0eb9b5e744p-995, 0.0, 0.0,
     0x1.8ed72edad4bcep-989, 0x1.ab6513d285fbcp-801, 0x1.905823068e067p-252, 0.0, 0.0,
     0x1.23af4ed784506p-197, 0.0, 0x1.15ad942335b86p-465, 0x1.a6f424080a269p-147, 0.0,
     0.0, 0.0, 0.0, 0x1.93bda9902f8e2p-530, 0.0, 0x1.f0640f602703fp-613,
     0x1.8c6fb0c5c0e1p-707, 0.0, 0.0, 0x1.44055d129e341p-662, 0x1.ff5ea08f42fd6p-247,
     0x1.55a3c89db76b2p-578, 0x1.a8206bee65699p-589, 0x1.7d16dc4754409p-741,
     0x1.3082166f3dbabp-850, 0x1.ea29b7bf14becp-135, 0.0, 0x1.e9423b1abf0ccp-487,
     0x1.c7aa8e59f94eap-343, 0x1.f4e8572ee2efdp-353, 0.0, 0x1.33813ff260b6bp-710,
     0x1.65282e97edbacp-1000, 0.0, 0.0, 0x1.1763201ed5ba1p-665,
     0x1.004c759df0c4dp-299, 0x1.0343050d4c6f7p-10, 0.0, 0x1.2c255c64e7336p-330,
     0x1.7f02bff51fbffp-920, 0.0, 0x1.e33155734f948p-865, 0x1.8d5ca2db76a88p-696,
     0x1.7bd4637686a82p-565, 0.0, 0x1.1134aad49e0b8p-452, 0x1.ac035898b130dp-194, 0.0,
     0x1.7271fab5e800ap-104, 0x1.7436c17ddc896p-397, 0x1.d624b3da3897ap-882,
     0x1.2a1d527368bacp-862, 0x1.75753e422aa96p-273, 0.0, 0x1.cfe55fa71d7e2p-549,
     0x1.a5c927dabeb5bp-589, 0x1.f1f63bb37799ep-337, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9758e30632161p-543, 0x1.34b8689a80001p-351, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.92fc5b9918736p-660, 0x1.38e9df27d2f64p-639,
     0x1.d28af8525ed7ap-390, 0x1.97f4d78fbdec7p-57, 0x1.820fa9b33f584p-598, 0.0,
     0x1.8c218bdfb1d57p-420, 0.0, 0x1.eac7597461a2bp-165, 0.0, 0.0, 0.0, 0.0,
     0x1.d7881112442b6p-46, 0x1.125400ef8723fp-774, 0x1.5a0bcdea0e1e4p-827,
     0x1.45a344ea38e8ap-883, 0x1.3efe676c6931ap-503, 0x1.e7c65f91f1094p-658, 0.0,
     0x1.2557106ef1841p-227, 0x1.dbdec3bdbcffp-642, 0x1.b9472a36bc225p-868,
     0x1.87a39f850782dp-2, 0.0, 0.0, 0x1.88183f6f414d1p-374, 0.0,
     0x1.6078d28a2ae15p-565, 0.0, 0x1.a1f9c539b406p-777, 0.0, 0.0,
     0x1.04783d8af44c1p-828, 0x1.fc06c6b57b319p-423, 0x1.d587bb05271d7p-89,
     0x1.f644c23d5214ep-443, 0x1.bd4f364b334b9p-116, 0x1.3653254b11207p-1013, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f9273c394927p-747, 0x1.9c775b3e94b18p-315,
     0x1.eecf13544e9e3p-642, 0x1.89935b80f2c52p-753, 0.0, 0x1.dccfeb1f48e29p-101,
     0x1.eb86ae18779ep-955, 0.0, 0x1.9d6f7f7b86cfap-835, 0x1.9e71517a543d9p-503, 0.0,
     0x1.e494356c58241p-901, 0.0, 0x1.5ead218d1607cp-246, 0x1.d624b9206e876p-236, 0.0,
     0.0, 0.0, 0x1.c16880c510f37p-752, 0.0, 0x1.282d61872ea02p-310,
     0x1.7457009cba74bp-571, 0x1.f652b87660614p-892, 0x1.e49b6171c63e9p-837,
     0x1.111eef9c35315p-496, 0x1.6ee3d146acc4dp-984, 0x1.6e23b985c4e52p-701, 0.0, 0.0,
     0x1.f72e923276dd9p-842, 0x1.8a47d82ec45fcp-629, 0x1.075a97c1faf28p-303,
     0x1.096d8a3f6cccap-372, 0.0, 0x1.149f1507f2618p-803, 0.0, 0.0, 0.0, 0.0,
     0x1.84f53e66c1a4p-78, 0x1.7a4d672972ed4p-496, 0x1.38ef1edca5cf6p-677, 0.0, 0.0,
     0x1.e32892e921b3fp-404, 0x1.6a51f08c0d299p-405, 0x1.b59524b8d1501p-1020,
     0x1.3cb1633457257p-982, 0x1.e7d779ac7a2f2p-446, 0x1.19759f550c63ep-340, 0.0,
     0x1.bf71dca3eee4fp-820, 0.0, 0x1.367dccfbce42ep-495, 0.0, 0x1.f1fce9f109e4p-669,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca5d1cc716e2fp-734, 0x1.5a0a4cfc36851p-464, 0.0,
     0x1.793d0bc041d03p-756, 0x1.1129350eb2412p-589, 0x1.8e8423a423609p-341, 0.0,
     0x1.711a46f98e2bfp-869, 0.0, 0x1.276b94d1dc789p-317, 0x1.47666cf3368d8p-963, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c81ca21c9d436p-405, 0.0, 0.0,
     0x1.9c0759ee09cadp-746, 0.0, 0.0, 0x1.3d97dba16890fp-915, 0.0, 0.0,
     0x1.8c8f1d5658ffep-58, 0x1.c2bb70d601792p-852, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1cee7513c35b3p-439, 0x1.ca33c2171c5ddp-488, 0.0, 0x1.44ced341cd0bfp-183, 0.0,
     0.0, 0x1.ccdaea0e9633p-236, 0x1.00d3a2c7a082p-717, 0.0, 0x1.f5c66fc9f1a9ep-892,
     0x1.672f946a3cfcp-925, 0x1.7010701253779p-862, 0.0, 0.0, 0.0,
     0x1.fe9333dafe638p-363, 0x1.9f1e4063225a3p-129, 0.0, 0.0, 0x1.5a39204cee2aap-314,
     0x1.7154dec2d981ep-566, 0x1.2187033e6ea08p-439, 0x1.ed201daef5bap-644,
     0x1.f51152dfc0aaep-623, 0x1.d2223f7295ddp-609, 0.0, 0x1.dfe178a28856ep-211, 0.0,
     0x1.b11a5975539eap-433, 0x1.4cc44c6d5ce38p-776, 0x1.ae923aa3edc9cp-115, 0.0, 0.0,
     0.0, 0x1.74351e867e41cp-821, 0.0, 0x1.79f253829f542p-759, 0x1.e5d7186e8415p-110,
     0.0, 0.0, 0x1.0875b97ce65d3p-682, 0x1.359fd489edf7p-946, 0x1.aac8c91684009p-955,
     0x1.65ffee30da131p-272, 0.0, 0.0, 0x1.9c83e5f09b4efp-828, 0.0, 0.0, 0.0,
     0x1.cc9fd0d57e427p-329, 0.0, 0.0, 0.0, 0.0, 0x1.8f0668d0812ap-222, 0.0, 0.0,
     0x1.c7e8726f23f0cp-421, 0.0, 0x1.98b4bd1a0eb4bp-320, 0x1.2aa45d56bac15p-177, 0.0,
     0x1.d406b420dd212p-443, 0x1.08259f4d6b58dp-513, 0.0, 0.0, 0x1.84a6e856b7a72p-302,
     0.0, 0x1.f63210643111p-735, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a2e1ba49b4bbp-174,
     0x1.b7e9de2482002p-245, 0.0, 0x1.da8801c8655acp-644, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c371e2f23bf7fp-61, 0x1.c6476b8d9fef9p-579, 0x1.b286de51c2efbp-104, 0.0,
     0.0, 0x1.b6bd065815bf7p-425, 0.0, 0.0, 0.0, 0.0, 0x1.8e09b1c61279dp-970, 0.0,
     0.0, 0.0, 0x1.b5fd28677f974p-18, 0x1.31b4ca0b8c2b4p-1003, 0.0,
     0x1.04db29c33235dp-691, 0x1.edaa246c2d567p-760, 0.0, 0.0, 0x1.668a0c1c59fefp-526,
     0x1.4ccb9441dd1c8p-1001, 0x1.4ed7d926b0af7p-270, 0.0, 0.0, 0.0, 0.0,
     0x1.7291dd6898972p-585, 0x1.66e1fc5a23229p-12, 0.0, 0x1.becd0420d572cp-129,
     0x1.43b3cda8c9b91p-742, 0x1.9e597a616edf4p-372, 0x1.68aebb02c06b6p-107, 0.0, 0.0,
     0x1.eb370a3118292p-593, 0x1.8b2b03ab73f8cp-122, 0.0, 0x1.fc3b9ec9df052p-907,
     0x1.3a90703df147dp-224, 0.0, 0.0, 0x1.1697dfe294a0dp-402, 0.0,
     0x1.2b8e07b97d307p-316, 0.0, 0x1.ef3a1ec320b52p-650, 0.0, 0.0, 0.0,
     0x1.b71cfd0e10a1p-686, 0x1.29d947dbf1285p-1015, 0x1.6f6efe23f5c0dp-200,
     0x1.891c6831e21f8p-683, 0.0, 0.0, 0x1.8206c7b0519e6p-1020, 0.0,
     0x1.e019252c244abp-315, 0.0, 0x1.1b345db986382p-147, 0x1.c3db521459c86p-881, 0.0,
     0x1.24829374076d9p-910, 0x1.fe5b0854426a6p-633, 0x1.67b0ba1810665p-66, 0.0,
     0x1.6ffc707b226aap-949, 0x1.d5e83867e61bp-147, 0.0, 0x1.132a04598aff9p-635,
     0x1.b901334591d4fp-831, 0.0, 0.0, 0x1.8637976912d54p-450, 0.0, 0.0,
     0x1.64f763d2cd348p-443, 0.0, 0.0, 0x1.8d455b8cf965ap-477, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c3469e78c78f8p-366, 0.0, 0.0, 0.0, 0x1.5dea92a1e13d7p-162,
     0x1.4b155cfb261afp-363, 0.0, 0x1.2d6d6d6ff75f8p-68, 0.0, 0.0,
     0x1.b01c667dc3984p-928, 0x1.4d3effdbb7a7bp-70, 0.0, 0x1.0663c7320ef9ep-1017, 0.0,
     0x1.ff6894b2b8ca8p-528, 0.0, 0x1.38772fe6946dfp-362, 0.0, 0.0, 0.0,
     0x1.cc6489cc36a52p-165, 0.0, 0x1.5b8e7f5648766p-276, 0x1.720d95b1dac84p-844, 0.0,
     0x1.12a14f1fa3a8bp-685, 0x1.f0d4836821f2dp-180, 0x1.602d4d602730bp-417,
     0x1.03f85a739f39fp-562, 0x1.eaeb8ad2c106ep-853, 0x1.b858fc3c54755p-682, 0.0,
     0x1.e1f47bdfecafep-79, 0x1.3b528cdf8de8p-3, 0.0, 0.0, 0.0, 0.0,
     0x1.41f4948575c69p-568, 0x1.f2b8cc5b5e1bap-210, 0x1.ae905ac66422ap-227,
     0x1.083eccca476bbp-355, 0x1.43de2d281773fp-550, 0.0, 0.0, 0x1.b7608584634dcp-389,
     0.0, 0x1.463cc20166edbp-848, 0x1.5c1c94055c918p-841, 0.0, 0x1.ba00c40ad9ed8p-426,
     0.0, 0.0, 0x1.4ce647f5c45f1p-952, 0.0, 0x1.bbcbe6f60787dp-488, 0.0,
     0x1.1b535855a12cfp-987, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9a085f8ba6aap-328,
     0.0, 0.0, 0x1.5ab1b2904688fp-932, 0.0, 0x1.19f61e793a643p-411,
     0x1.c82f4035e2bb6p-462, 0.0, 0.0, 0x1.b9f055a9b9b1fp-636, 0.0, 0.0,
     0x1.1be27f66974a4p-118, 0.0, 0.0, 0x1.9018735723376p-823, 0.0,
     0x1.33968f5d3cb8ep-1017, 0x1.7f9e26c00281bp-863, 0x1.4c945db32714cp-859,
     0x1.1ea7983e91593p-639, 0x1.319199ca76a3p-684, 0x1.7497de6b35cacp-621,
     0x1.4fcd5c2305e01p-936, 0.0, 0.0, 0.0, 0x1.f7afda280556fp-137, 0.0, 0.0,
     0x1.8da6155f8831cp-606, 0.0, 0x1.781a72562141ep-739, 0x1.12e67c24a1869p-881,
     0x1.763dec186ae1dp-489, 0x1.508c52b5bb059p-694, 0.0, 0x1.4638cc2e4d08ap-325, 0.0,
     0x1.7de6b55e29225p-1016, 0.0, 0x1.f401a6b8b4d19p-150, 0x1.ed249af5f9919p-16, 0.0,
     0.0, 0x1.e2d6e62f53197p-624, 0.0, 0.0, 0x1.004107950ce4ep-587, 0.0, 0.0, 0.0,
     0x1.d2890d28d7ad6p-739, 0.0, 0.0, 0x1.5f1fb8232a3c9p-597, 0x1.690c2c522691p-147,
     0.0, 0.0, 0x1.5a8ac2898e776p-451, 0x1.a7cea4ddca66ep-559, 0.0,
     0x1.df93ea75db765p-192, 0x1.d3248e8c1b0abp-596, 0.0, 0.0, 0.0,
     0x1.937790f598619p-398, 0x1.08497a80c7c3ep-423, 0x1.88806347e38f9p-988, 0.0, 0.0,
     0.0, 0x1.210027d559edap-68, 0x1.9a08202ebdff7p-407, 0.0, 0.0,
     0x1.2ddb37f350d3dp-53, 0x1.a2b8be40c315ep-375, 0x1.1773494a3ed6p-958,
     0x1.f04280ef30791p-182, 0x1.1be74dc06f0ebp-189, 0x1.8cf4675d40955p-553,
     0x1.980f522e5867fp-840, 0.0, 0x1.c600cb1e009d7p-902, 0.0, 0x1.7f12ee66394d8p-294,
     0x1.46a00b932d307p-537, 0.0, 0x1.87c5518dec88ep-68, 0x1.a341982b27bb8p-629,
     0x1.4d77ab2e4ac12p-323, 0.0, 0x1.b3a12771cc293p-626, 0x1.572dd4aacef71p-629,
     0x1.4f973fd1dc1e3p-982, 0x1.70a1866005ba2p-587, 0.0, 0x1.ceca0f6c1b9acp-50,
     0x1.c31c38254756dp-289, 0x1.1cc9827baa58ap-409, 0.0, 0x1.138a211322e15p-398, 0.0,
     0x1.ba0a61e3e2ad2p-662, 0x1.555fccf6c7444p-560, 0.0, 0.0, 0.0, 0.0,
     0x1.f1f246e47a4aap-727, 0x1.1340a0ca60a8fp-907, 0.0, 0.0, 0x1.c16c125e52138p-704,
     0x1.a69beadadf639p-333, 0.0, 0.0, 0x1.8493dfb7cc937p-187, 0.0, 0.0,
     0x1.4b2a7edd31b72p-636, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e3c857679738dp-642,
     0.0, 0.0, 0.0, 0.0, 0x1.cf4cc49ae040ap-103, 0.0, 0.0, 0.0, 0.0,
     0x1.9535fc988f207p-83, 0x1.6cfdc0ebfc96bp-548, 0.0, 0.0, 0x1.dfbc430b66491p-788,
     0x1.9c6152644285ep-837, 0.0, 0x1.797b494db72ecp-858, 0.0, 0x1.79c6821d55b6ep-576,
     0x1.73e907e2633a1p-490, 0.0, 0x1.7af4c311f7ad8p-219, 0.0, 0.0,
     0x1.c9f7be4d20b32p-587, 0x1.8b98759e019cp-260, 0.0, 0.0, 0x1.66d8f4c168cd5p-194,
     0x1.5c9a98a3dbd6ap-177, 0.0, 0x1.549e8d9d2b8b2p-981, 0.0, 0x1.68010f70c127bp-56,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4029464bebcbp-9, 0.0, 0x1.0013e4688f327p-679,
     0x1.3d4c9ce9f958fp-744, 0x1.5f838ffafec7dp-941, 0.0, 0x1.cb582f3983bbp-25, 0.0,
     0x1.c8efc90aeac1cp-841, 0x1.95a028dc03533p-249, 0.0, 0x1.d693c89d3bb7ap-123, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d8400f59c6f5p-519,
     0x1.7534d708dcd1fp-656, 0.0, 0.0, 0x1.f7923bec37f01p-552, 0.0, 0.0,
     0x1.04030c32a71afp-542, 0x1.935605009257fp-530, 0.0, 0.0, 0.0, 0.0,
     0x1.7d9f30dd0824bp-111, 0.0, 0.0, 0x1.081f981c8c016p-279, 0.0, 0.0,
     0x1.00b2aa61f9bd1p-927, 0x1.ff05a16fedeefp-882, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4cce8fa529f9bp-489, 0.0, 0.0, 0.0, 0x1.459ea1ffc76fep-433, 0.0,
     0x1.0457463587246p-513, 0.0, 0.0, 0.0, 0x1.9cd7ed646cb3cp-989,
     0x1.d2c81de1078cep-66, 0.0, 0.0, 0.0, 0x1.bbe6a5d783ddep-823,
     0x1.0b7d0e68780f6p-650, 0x1.f4a730023428ep-756, 0x1.8439223bf8ec9p-66, 0.0, 0.0,
     0.0, 0.0, 0x1.6388a6ecb2804p-945, 0.0, 0.0, 0.0, 0x1.5ed3b790f42adp-417,
     0x1.dba9efec77fe3p-511, 0.0, 0x1.7b1543a4de9b1p-261, 0.0, 0x1.8a7f7ce32eb2ep-404,
     0x1.79164798ba404p-336, 0x1.e376b381f421dp-882, 0x1.8a028b606f0ebp-851,
     0x1.b7485d9b6e562p-684, 0x1.6515332d5b464p-250, 0x1.1472768610639p-247, 0.0, 0.0,
     0.0, 0.0, 0x1.b730723535fa9p-1001, 0x1.8770c129b23dbp-574, 0.0,
     0x1.12e2b7b7a40efp-39, 0.0, 0x1.3da9becf2a739p-14, 0x1.6911833f1951ep-492,
     0x1.ecf1f8f7dce12p-684, 0.0, 0.0, 0.0, 0x1.680a92eb6dbaap-256, 0.0,
     0x1.93aa58b956513p-182, 0.0, 0x1.f7efff0b215f6p-766, 0.0, 0.0,
     0x1.327058b26659dp-990, 0x1.df61809a8cddbp-659, 0x1.8a1f41c7b9fc2p-782, 0.0,
     0x1.b8a632a0b08a1p-304, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ad538efb4ea52p-220,
     0x1.55a5af66e552p-652, 0x1.77b425ff3518ep-62, 0x1.95f2a4767df5ep-660, 0.0,
     0x1.a1f71ab3ffefbp-371, 0x1.13e5f65e4449ap-248, 0x1.df1878cf41eefp-1009, 0.0,
     0.0, 0x1.2203be395568dp-410, 0x1.338e3d417b004p-161, 0.0, 0x1.359216e2c3f66p-54,
     0x1.9f5d2c86ae4b3p-1021, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.606ff217d302ap-674,
     0x1.693987b5ebabdp-699, 0x1.5df84817838a7p-672, 0x1.bae3a086c0053p-351, 0.0,
     0x1.dc4c32b68284cp-608, 0.0, 0.0, 0.0, 0.0, 0x1.004fcd1a84b29p-351, 0.0, 0.0,
     0x1.5fd3c185721d1p-154, 0x1.1dd312427108ep-1, 0.0, 0x1.a8789c6dea011p-1011,
     0x1.6ff7f26f07b18p-646, 0x1.5751592034f5ap-347, 0x1.dfa5fb10e78e1p-700,
     0x1.21785080e9e9cp-805, 0.0, 0.0, 0x1.a98d2df18c46ap-914, 0.0, 0.0,
     0x1.df07136937493p-22, 0.0, 0x1.affb94b38fb8p-299, 0x1.5526ee2044f97p-405,
     0x1.6d6c135762a21p-804, 0x1.bbe2d962a501bp-927, 0x1.a71f2cf19ba55p-21,
     0x1.32e946595603dp-374, 0x1.b88d9a046ce2bp-457, 0x1.123292f803fe1p-577,
     0x1.6ef0c07e068a5p-667, 0x1.a2b6b53d6d36fp-939, 0.0, 0x1.40e398a6efe4bp-407, 0.0,
     0x1.05b8bb0c7df96p-447, 0.0, 0x1.8e35a647f4b0cp-32, 0x1.aa9d3ebf9bb8fp-645, 0.0,
     0.0, 0x1.4dc06d775a23bp-52, 0x1.f53607c3ce7acp-784, 0x1.b3e14d572717ap-926, 0.0,
     0.0, 0.0, 0x1.2df9fb71678ecp-902, 0x1.039f7a4111921p-258, 0x1.c421762450bebp-870,
     0x1.9c203ef64533ep-648, 0x1.08f25398f8072p-465, 0x1.5d16112a5c0f9p-440,
     0x1.037dd3e303f42p-136, 0x1.4f2ede165e434p-394, 0x1.c9f5b2d36373fp-292,
     0x1.149ca1ad23003p-931, 0x1.ff9bda5d34019p-458, 0x1.8a9cf0bd538b6p-265,
     0x1.450a0ccd47ff2p-502, 0x1.77d7352d62cb3p-59, 0.0, 0x1.8815b476738f4p-184,
     0x1.d68d42c88c0bcp-7, 0x1.2642de671d2ebp-105, 0.0, 0.0, 0.0,
     0x1.330dab2714c1dp-125, 0x1.b46aec9a945ddp-70, 0x1.2e198fe4e9c3dp-285, 0.0, 0.0,
     0x1.c6e5024ef7f5fp-102, 0.0, 0x1.43935e37ed442p-690, 0x1.519cfb064b77p-21,
     0x1.22a87575f8247p-245, 0.0, 0.0, 0x1.d04cb0f49174ep-225, 0.0, 0.0, 0.0,
     0x1.865e54c0c6e81p-620, 0x1.d22417e674462p-991, 0.0, 0.0, 0x1.670d0839613b2p-999,
     0x1.88d2c7afd2901p-743, 0.0, 0.0, 0x1.d1e2468602a9fp-564, 0x1.0b6063a06b777p-230,
     0x1.aea0e70f9a312p-123, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0a0213b9cf311p-938, 0x1.930e7f6f405b1p-153, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.316545c8d75fp-322, 0.0, 0x1.360040620b417p-116, 0x1.ac8f84e8216e4p-310,
     0x1.de617b3893363p-675, 0.0, 0x1.cf62060748ae3p-528, 0.0, 0x1.88e4a287a80c9p-754,
     0x1.344c9d49b647dp-710, 0.0, 0.0, 0.0, 0x1.6dbbe30e8fed1p-734, 0.0,
     0x1.85d743a175c51p-632, 0x1.6efbc82be217ap-628, 0.0, 0.0, 0.0,
     0x1.4359aef6f2c0fp-97, 0.0, 0x1.189e87ed8be66p-199, 0x1.9dda4bfc2eae1p-787, 0.0,
     0.0, 0.0, 0x1.bae04fe17781fp-280, 0x1.84fc0bd57e36bp-293, 0.0, 0.0, 0.0, 0.0,
     0x1.0a94511b722a5p-768, 0x1.1867cd4c68197p-680, 0.0, 0.0, 0.0, 0.0,
     0x1.59d6fb5759113p-651, 0.0, 0.0, 0x1.25869b6bc8be4p-678, 0x1.b9ac00959cb4ap-811,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.01b3d52e9a1e4p-930, 0.0, 0x1.8aa9fb0a0e4bap-269,
     0x1.681f8cdbaec02p-10, 0x1.ca380a5d1bd16p-787, 0.0, 0x1.dc94ed15078dcp-978, 0.0,
     0.0, 0x1.1be3f97bd7045p-15, 0.0, 0x1.40aa76cc94b43p-204, 0.0, 0.0,
     0x1.8f419a65febep-868, 0.0, 0x1.81e2d15ae2824p-260, 0.0, 0x1.e80029b0d3a92p-30,
     0x1.979dd982b4435p-639, 0x1.fcfd473133f89p-103, 0.0, 0.0, 0x1.782371af5e5efp-879,
     0x1.f730c2fd2fafp-831, 0x1.c4a40dffdc87p-490, 0x1.a65dca1eeab72p-984, 0.0, 0.0,
     0x1.8861ae95f6a6ep-520, 0.0
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
            tmp1 = Sleef_finz_log2d1_u35purecfma(tmp0);
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
    printf("Sleef_finz_log2d1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2d1_u35purecfma bench acc %la\n", global_bench_acc);
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
