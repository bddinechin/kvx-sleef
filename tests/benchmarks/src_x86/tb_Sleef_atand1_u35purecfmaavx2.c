/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand1_u35purecfma.c --function \
 *     Sleef_atand1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.6b6df3e551c25p-383, 0x1.0a83db9d8cef1p-445, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e705c51e584b4p-164, 0.0, 0x1.4013638f8cfd5p-939, 0.0, 0.0,
     0x1.c1444dce397b5p-112, 0x1.c3ef4b398c361p-239, 0x1.19f39a88c9843p-765, 0.0,
     0x1.9d005e7e5e37p-483, 0x1.4ed053743afbep-916, 0.0, 0.0, 0x1.8b84599549e9p-969,
     0.0, 0x1.5066f5a6a00d1p-352, 0x1.c1259ed1148dp-635, 0x1.3f3b8215906bcp-287, 0.0,
     0.0, 0.0, 0x1.170a32f85c50cp-371, 0x1.7857ee83390cdp-1, 0x1.d3d25ae478cd4p-609,
     0.0, 0.0, 0.0, 0x1.2e889fc3a1594p-197, 0x1.d774867f1e7b7p-870, 0.0,
     0x1.182c492672d09p-714, 0.0, 0x1.36d5c16ddd208p-896, 0.0, 0x1.e2c277723484p-374,
     0.0, 0.0, 0x1.c078e1ea36bb2p-632, 0x1.ee64289f1491cp-203, 0x1.a1c6477968ae3p-248,
     0.0, 0.0, 0.0, 0x1.c3181d3642673p-310, 0.0, 0.0, 0x1.ead487fb328abp-552,
     0x1.62ef332adfb0fp-205, 0x1.f45663d3f877fp-679, 0x1.37c26244f1a2p-718, 0.0, 0.0,
     0x1.4fb5e5281ce0ap-277, 0x1.5278ad15d6ed9p-484, 0x1.4f9d77236289cp-713, 0.0,
     0x1.bc3b7cf5d8713p-194, 0x1.36a52e3a208a8p-332, 0.0, 0x1.e2c6af337710dp-636, 0.0,
     0x1.022eb902f316cp-679, 0.0, 0x1.4ef396c10a0ccp-439, 0x1.7c4fa2c4f1699p-563,
     0x1.58be84ba0eaaap-244, 0x1.e1c70b867084ap-974, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e1a2bb6c88a55p-866, 0.0, 0x1.29f521d7b2659p-98, 0x1.7dc05220c161ep-949,
     0x1.0409aa0278e73p-595, 0x1.1d686dc4dfd46p-908, 0.0, 0x1.8d9f38ab51e7ap-159, 0.0,
     0x1.b1197245f9d4cp-667, 0x1.c297ce7f7dc2cp-500, 0x1.e912babf88bfp-763,
     0x1.d606285a489acp-892, 0x1.cc2f937d9b5fp-239, 0.0, 0.0, 0x1.240448bb11d7p-450,
     0.0, 0x1.6e1bcee22f38dp-291, 0x1.32ac6ff07091fp-342, 0x1.bfacfd2626d3fp-562,
     0x1.ed3758230a1aap-121, 0.0, 0x1.cba5e738c8835p-309, 0x1.e785d26a640edp-820, 0.0,
     0x1.c29cc57f044f4p-593, 0x1.2b433f53dd3dp-441, 0.0, 0x1.0849ba4b5c27fp-332, 0.0,
     0x1.8e1cd4fb91bb6p-948, 0.0, 0.0, 0x1.5d5e4178b1a48p-152, 0.0, 0.0,
     0x1.29763dea822b4p-693, 0x1.bc13475e79c9bp-184, 0x1.09062ba0dbc66p-546,
     0x1.e51ae85d0512fp-1, 0x1.75e419de1c661p-720, 0.0, 0x1.fe50805c1967ep-397,
     0x1.981b98648bfe6p-415, 0.0, 0x1.50f5db7f48e72p-828, 0x1.414723913733bp-981, 0.0,
     0.0, 0x1.e5caa6232c389p-476, 0x1.7394b5334e186p-413, 0.0, 0.0,
     0x1.18cd3cdc18efdp-897, 0x1.0d405e6977a3cp-958, 0x1.ec0eecd965b3p-555,
     0x1.d6dbe98d840c2p-125, 0.0, 0x1.68aef9b6c972ap-277, 0x1.96a33d43f2148p-443,
     0x1.817bd08333f54p-679, 0x1.48f12b23d6414p-346, 0.0, 0x1.5ff6c285084fap-274, 0.0,
     0x1.1500eab86627p-970, 0x1.f4a8b85caa551p-607, 0x1.b4c4b060895cep-492, 0.0, 0.0,
     0x1.8eb1c3ff75f01p-131, 0x1.7988e544e15b9p-883, 0x1.367bf8013357ep-220, 0.0, 0.0,
     0x1.7ae9d3e3541f8p-115, 0x1.f3846ef903246p-186, 0x1.3b4dfe36b0b89p-376, 0.0,
     0x1.d02bb2e6ae332p-434, 0.0, 0.0, 0.0, 0x1.f01f8eceb8d67p-959, 0.0,
     0x1.b98d9daacba5dp-553, 0.0, 0x1.3904c1ef6af29p-636, 0x1.3dfca59194b16p-394,
     0x1.4127ffa3cc2dbp-139, 0.0, 0.0, 0.0, 0.0, 0x1.2b61c6d32a6d5p-208,
     0x1.946b7e63dfbadp-32, 0x1.1d18d1214863fp-37, 0.0, 0x1.e20eefa2a948bp-93,
     0x1.bdd5ebc20902p-502, 0x1.c30a9ad10972dp-727, 0.0, 0.0, 0x1.041c45c47d3dcp-884,
     0x1.c1cd5618e5874p-320, 0x1.5296d1efc94e4p-882, 0.0, 0x1.5e899708cedc3p-303, 0.0,
     0.0, 0.0, 0x1.1c28ff6ece0b7p-393, 0.0, 0x1.e0a11c8e1e73bp-944,
     0x1.cd647d3a12e3p-549, 0.0, 0x1.3557d5223673ep-477, 0x1.19b3b8e3e829ep-449,
     0x1.25db968e59fc5p-1014, 0x1.ee6ae9a7739dfp-693, 0.0, 0x1.28a6bde5bed7ap-595,
     0.0, 0.0, 0.0, 0x1.980727adf241cp-956, 0x1.af5bf635acd6cp-180,
     0x1.b6b0512a45187p-368, 0x1.6eb3c4e3329bbp-572, 0.0, 0x1.9e4430d7f47efp-296,
     0x1.c14f96921602ap-279, 0x1.82336757776a1p-808, 0.0, 0.0, 0x1.277bc53ee2a7bp-140,
     0x1.c0d18a5393c93p-53, 0.0, 0.0, 0.0, 0x1.0b00547f535d5p-261,
     0x1.a4c95bd99041dp-258, 0.0, 0x1.c1e0162b9ef6ep-507, 0x1.8232a222dddd7p-819,
     0x1.e96e04d15bc09p-780, 0x1.6ac8429dd8702p-111, 0.0, 0.0, 0.0, 0.0,
     0x1.775b874655564p-909, 0x1.8cfa0b74d806p-35, 0.0, 0x1.142dd54217a27p-963,
     0x1.549fa88754898p-957, 0x1.d8e406d3f51dap-731, 0.0, 0.0, 0.0,
     0x1.e097f6dee4cccp-333, 0.0, 0x1.4286b6974c94ap-391, 0.0, 0.0, 0.0, 0.0,
     0x1.a5194e652555bp-784, 0.0, 0.0, 0x1.3b544b5abe37dp-3, 0.0,
     0x1.0d3860e6133c1p-629, 0.0, 0x1.241d1f4ac76b3p-638, 0x1.47b7a2080ca35p-462,
     0x1.52cf5e2d93476p-173, 0.0, 0x1.b16a96f563ac8p-796, 0.0, 0.0,
     0x1.415e982dff986p-276, 0x1.6be5e2d6b2706p-25, 0x1.a3148aa5c10adp-22, 0.0,
     0x1.3f4744af7965dp-137, 0x1.52e9272140d2dp-197, 0.0, 0.0, 0x1.4e30359170473p-637,
     0.0, 0x1.f4f2b58d2c9bap-930, 0.0, 0x1.631d651f611abp-546, 0x1.e929e868c6143p-832,
     0x1.875bc0b6db006p-121, 0x1.c5a9b6966d78ap-324, 0.0, 0.0, 0.0,
     0x1.2c25743820baep-460, 0x1.9847adbd5cb65p-27, 0.0, 0.0, 0x1.2834d075fbb3cp-38,
     0x1.ea96df0175336p-155, 0.0, 0.0, 0.0, 0.0, 0x1.490f1835d6963p-613,
     0x1.710fabc395ebfp-491, 0x1.cf0bfa6d488dfp-919, 0x1.111a8a96fbb0fp-238,
     0x1.404c6bd60d1ffp-53, 0.0, 0.0, 0x1.618d3cc853c65p-149, 0.0,
     0x1.f6b39ca7c29aap-280, 0x1.64087c1819b04p-394, 0.0, 0x1.5b2ad9332e062p-40,
     0x1.967a829029cbbp-99, 0.0, 0x1.216413708d411p-421, 0.0, 0x1.01383872c0b5ap-441,
     0.0, 0.0, 0.0, 0x1.58c0538c96a52p-150, 0.0, 0x1.577e62b66c025p-938,
     0x1.eaa4a6b50ab2fp-886, 0x1.580802a9e1961p-393, 0x1.9a97b81488b9p-988,
     0x1.e1661b3543309p-260, 0.0, 0x1.309cb96056741p-431, 0.0, 0.0,
     0x1.14e5fb35b9576p-131, 0.0, 0.0, 0x1.dc28991e2d6cdp-536, 0x1.33b6741fe0bdbp-165,
     0.0, 0x1.d531f51180207p-395, 0x1.819c0ff1025b5p-542, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b9945b8d4b468p-478, 0x1.de01842d1840bp-602, 0x1.6cc21c2f6539p-242, 0.0, 0.0,
     0.0, 0x1.9a5d606df361cp-215, 0.0, 0x1.3738c29c3f2efp-673, 0.0, 0.0,
     0x1.2d9685b474bfp-68, 0x1.3728091af3385p-22, 0.0, 0x1.943185e109e02p-748,
     0x1.5099088317086p-262, 0x1.223148445c695p-146, 0x1.ce526aa0bfbd1p-665, 0.0,
     0x1.91d804e3bcfc6p-832, 0x1.35e8b653eab1p-211, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7756a315822bp-615, 0.0, 0.0, 0.0, 0x1.ddc3982d5314p-862, 0.0,
     0x1.b22e07e7990edp-949, 0x1.d00006ca32bdp-52, 0.0, 0x1.2b0503e161c0cp-38,
     0x1.1a7060d5bf7b1p-217, 0.0, 0x1.747e51674ed3p-310, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.66b04f62e95aap-122, 0.0, 0x1.eb2ab2e0d2616p-446, 0x1.c57ca74c91843p-565,
     0x1.3df9cb63f9336p-609, 0.0, 0.0, 0x1.b83b284cb50b4p-120, 0x1.c2ba76f6c16adp-135,
     0x1.b89d114b99a89p-169, 0x1.b543af2f6e6e5p-221, 0.0, 0.0, 0x1.3b1093c8e087bp-118,
     0.0, 0.0, 0x1.7af404e1193f5p-412, 0.0, 0x1.90f79c77135edp-150,
     0x1.9c2877a7ac77dp-281, 0x1.3f9729899129ep-328, 0x1.57b4b52979001p-828,
     0x1.29b9411eaf02dp-191, 0x1.879f56080d6ap-817, 0.0, 0x1.5230b30a29a2dp-345, 0.0,
     0x1.0ad94e5452c28p-959, 0.0, 0.0, 0.0, 0.0, 0x1.23c99bdec6f3cp-139, 0.0,
     0x1.3a9cd8beb0e43p-871, 0.0, 0.0, 0.0, 0x1.81e3b9fa577fdp-107,
     0x1.44ead0e0daaddp-955, 0x1.e90b827aa6632p-851, 0.0, 0x1.37cc8cfa6b91p-305, 0.0,
     0x1.6ba6d81ce783fp-281, 0.0, 0x1.a0a99a4e30d77p-29, 0.0, 0.0,
     0x1.e62825bbea11ap-531, 0x1.c7c3880241ad3p-708, 0x1.d63ec60ad9867p-1020, 0.0,
     0x1.78e7064d9f8b6p-270, 0.0, 0x1.3354852b478d2p-693, 0x1.c3fab478f73f1p-147, 0.0,
     0.0, 0x1.b0dbb2683bba3p-654, 0x1.14d3c2bb0e9dap-52, 0.0, 0.0,
     0x1.919255973a8dbp-136, 0x1.91a06440dafc5p-923, 0.0, 0x1.464c453101ee7p-228, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a80d0df656339p-593, 0.0, 0x1.cae44287d185cp-361,
     0.0, 0.0, 0x1.04b5802b77bdep-732, 0.0, 0.0, 0.0, 0.0, 0x1.5f9779c347331p-315,
     0.0, 0x1.017aafdd740b5p-759, 0x1.38237f467cc5cp-316, 0x1.94e7e40a03ec1p-780, 0.0,
     0x1.6c5472326536fp-123, 0x1.327eefbd30fd2p-704, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c98ad752aa63p-965, 0x1.9154f3659bd84p-192, 0.0, 0x1.43e37b0c3b605p-505, 0.0,
     0.0, 0.0, 0x1.2a6f59a4e662ap-964, 0.0, 0x1.ab45b50d91ad2p-401,
     0x1.10e1cefd03769p-93, 0.0, 0.0, 0.0, 0x1.0996313a7afadp-530,
     0x1.70234888dc74ap-554, 0x1.95a691c825c61p-422, 0.0, 0x1.6b815c131c182p-121, 0.0,
     0x1.68ea6cb96218bp-53, 0.0, 0.0, 0x1.15cf35d060bep-766, 0.0, 0.0,
     0x1.738cbe60d97c2p-24, 0x1.0094ed467983p-674, 0x1.6526c75bbcb82p-30,
     0x1.90269a4e5059ap-310, 0.0, 0.0, 0x1.286e20121e567p-845, 0.0,
     0x1.93298328ad706p-194, 0.0, 0.0, 0x1.ca1b3c1ceaeeap-960, 0.0, 0.0,
     0x1.325a9e1babc1dp-871, 0x1.38e493aca50d8p-571, 0.0, 0.0, 0.0,
     0x1.d307a07d68c24p-832, 0.0, 0x1.4c06d851302b4p-148, 0.0, 0x1.d0215a1d69a0cp-52,
     0x1.fc31419a5e513p-812, 0.0, 0x1.46e913b5b014fp-270, 0.0, 0x1.f9463947414fep-427,
     0x1.6a00bdbc639c1p-570, 0.0, 0.0, 0x1.4cb683cd7eb11p-726, 0.0, 0.0, 0.0, 0.0,
     0x1.b879e7725b859p-694, 0.0, 0.0, 0x1.385c6a8119e24p-959, 0x1.aee29418150cep-402,
     0x1.a4a88da570f7ap-560, 0x1.b47dfa42428c1p-750, 0.0, 0x1.404d78e2c6eb7p-479, 0.0,
     0x1.b4a838d266304p-981, 0.0, 0x1.36a24786989e9p-201, 0.0, 0x1.3271a77f5eebap-805,
     0x1.344bd97c11cd8p-273, 0x1.5c6f0c644cf08p-625, 0.0, 0x1.4ce79bab33dadp-456, 0.0,
     0x1.c3dc96de4a1dp-729, 0x1.880a02e7ebe7bp-131, 0x1.95bfeb5089d12p-304, 0.0,
     0x1.511ce6463fe09p-57, 0.0, 0.0, 0.0, 0x1.92d25f01a91f7p-141,
     0x1.55446e6c89767p-944, 0.0, 0.0, 0x1.4270ceb6bb052p-424, 0.0,
     0x1.c33bc48e6891bp-146, 0x1.cd528497b6389p-779, 0x1.fc359634da13cp-442, 0.0,
     0x1.7abb12fef0264p-744, 0x1.cceba8ba32a5fp-506, 0.0, 0.0, 0x1.d86a8bcc9d247p-379,
     0x1.b67038d1ac508p-632, 0.0, 0x1.baff0f4953e09p-9, 0x1.8259dcc9db14fp-323,
     0x1.8722922f003fdp-477, 0x1.6d74c1c2d531dp-925, 0x1.418a3a50dc869p-361, 0.0,
     0x1.baa80912a70fcp-278, 0x1.a8da64f39f3adp-432, 0x1.f9e7c963d9aap-365,
     0x1.b6639fc3ab10dp-992, 0.0, 0.0, 0.0, 0.0, 0x1.2840f609ad968p-670,
     0x1.d54556d1cbc84p-874, 0.0, 0x1.ef02491d62c68p-173, 0.0, 0.0,
     0x1.520394cc23d9cp-838, 0x1.177cbee66978ep-72, 0.0, 0x1.5e9605d2080fcp-566, 0.0,
     0.0, 0x1.b80e9f2f95479p-778, 0x1.6679b1fbaae6p-240, 0.0, 0.0,
     0x1.4e9bca4cb3c6ep-219, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c0eddae6d37bp-612, 0.0, 0x1.949ed942fe9e3p-916, 0x1.ce3cf8d31c1fp-337,
     0x1.6519eeb565f4cp-159, 0.0, 0.0, 0x1.84c2a03da2cfcp-863, 0.0, 0.0, 0.0,
     0x1.3877f2813978ap-820, 0.0, 0x1.9e6779873325fp-19, 0x1.66e9b7eb41d5ap-217,
     0x1.b418313547a28p-876, 0.0, 0x1.c3f20c4be9188p-780, 0.0, 0x1.13da81801642bp-876,
     0.0, 0.0, 0.0, 0.0, 0x1.aa994e25899fdp-453, 0x1.e747a355bdeb6p-980, 0.0, 0.0,
     0.0, 0.0, 0x1.08eb3a6755e22p-860, 0x1.f00d5a9897ae7p-629, 0.0, 0.0, 0.0, 0.0,
     0x1.4ac1d3db7102dp-185, 0.0, 0.0, 0x1.1dda45ec631e6p-383, 0.0, 0.0,
     0x1.41378370bda72p-870, 0x1.d2a827fc7ac5dp-80, 0x1.c9fe3f3487003p-482,
     0x1.38af4c2938a47p-718, 0x1.2389dc16abdf4p-713, 0x1.c9a63a673ab8ap-282,
     0x1.6d0ea59b29a93p-915, 0.0, 0.0, 0.0, 0.0, 0x1.0c11e220b95ebp-17,
     0x1.263de2ab4bb5cp-497, 0x1.0b6ab6eb8748ep-690, 0.0, 0x1.4d39f9a663a9ap-901,
     0x1.6b87014192aacp-423, 0x1.0bafee26bbcdcp-890, 0x1.5496ebbc5b71ap-673, 0.0, 0.0,
     0x1.366fb75956e4ap-1022, 0x1.0a7b7f2d0bd06p-477, 0x1.3c078edbd9067p-810, 0.0,
     0x1.84cbbf4c828e1p-450, 0x1.3305b5fae8a3p-157, 0.0, 0.0, 0x1.f605770f5296bp-227,
     0.0, 0x1.4c1ddeea128aep-475, 0.0, 0x1.2f33ae158fd8fp-447, 0.0,
     0x1.e1a33e977f913p-191, 0.0, 0x1.b25f251c7c34bp-726, 0x1.c025a9588d752p-169,
     0x1.fa93f64efaac9p-325, 0x1.b96715d7875cap-414, 0.0, 0x1.fc37831d0dd66p-850,
     0x1.aaaa9b81290d6p-773, 0.0, 0x1.6a9aa315b7fb9p-331, 0x1.2b8de1bb3ba56p-911, 0.0,
     0.0, 0x1.7c4ed5de3c148p-557, 0x1.53753a6550797p-82, 0.0, 0.0, 0.0, 0.0,
     0x1.8ab444f5e7ec5p-365, 0x1.e1eb3b50a3e15p-358, 0.0, 0x1.c9b5cbbbf786bp-359, 0.0,
     0x1.cc8e59c6a90b5p-208, 0.0, 0.0, 0.0, 0x1.9509e518a64d7p-807,
     0x1.6d6462d0afe8p-88, 0x1.e4c52b75f0cadp-561, 0.0, 0x1.d44814f7882d1p-973,
     0x1.2451dffdb0b3cp-75, 0.0, 0.0, 0.0, 0x1.31a367bcebc65p-19,
     0x1.a623bd8ce464dp-10, 0.0, 0x1.1c3fac53eb998p-240, 0.0, 0.0,
     0x1.8312a7fea0595p-957, 0x1.e2af126a5cfccp-18, 0.0, 0.0, 0.0,
     0x1.02bbf949934dbp-754, 0x1.02037369613bbp-495, 0.0, 0.0, 0.0,
     0x1.55ab13354da7dp-262, 0x1.e4a299d4b1d33p-733, 0.0, 0.0, 0x1.f3c4b01adbf8ap-895,
     0.0, 0.0, 0x1.fa212555809f2p-611, 0.0, 0.0, 0x1.b26e9f4198d0dp-1014, 0.0, 0.0,
     0.0, 0.0, 0x1.96855e4715887p-185, 0.0, 0.0, 0x1.d5de9e223c23fp-282, 0.0,
     0x1.1e1c96510eac9p-369, 0x1.e8308bdf2e51dp-597, 0.0, 0.0, 0.0, 0.0,
     0x1.a2b18fc845659p-735, 0.0, 0x1.104a294507195p-346, 0x1.06d441004e6a5p-1018,
     0.0, 0x1.8bd63b1a52257p-1018, 0x1.8133f526bd8f3p-193, 0x1.418bf17499f46p-148,
     0x1.ff024d99a15a8p-266, 0.0, 0x1.0ea617df42ab3p-303, 0.0, 0.0, 0.0,
     0x1.80f7c6edbe531p-566, 0x1.24c1b95e406f8p-541, 0.0, 0x1.313d1c953a83fp-924,
     0x1.af35ac6d6aeb9p-1011, 0.0, 0x1.3648dfcabbbd8p-485, 0x1.2f408d2525077p-1011,
     0.0, 0x1.ff3440ad25ec8p-436, 0.0, 0x1.928e261e38b68p-268, 0x1.44d2e18a45b4fp-324,
     0.0, 0.0, 0.0, 0.0, 0x1.dd3ba982bb1acp-349, 0x1.88cd0abad364cp-626, 0.0, 0.0,
     0x1.848455a8dbc08p-687, 0x1.539c7a87c3feap-939, 0.0, 0x1.840d76d448c92p-645,
     0x1.f57fc2150e645p-470, 0x1.233008aa4c541p-84, 0x1.e0ab85ff55f05p-620,
     0x1.bac5957445f3p-970, 0.0, 0x1.5a095fa03e936p-764, 0.0, 0x1.dabab7ed2043dp-607,
     0.0, 0.0, 0x1.9529d6c7f899bp-707, 0x1.3287805bf64eap-640, 0x1.56f2d499b3ec4p-988,
     0.0, 0.0, 0.0, 0x1.1a96dfc78a63dp-27, 0x1.d24b7ce4318c6p-694,
     0x1.cfc9ce02e0aa3p-27, 0x1.066349f42101p-421, 0x1.78ac36a14d235p-755,
     0x1.8f4b232e1d6c4p-97, 0x1.3c131a9232d64p-264, 0.0, 0.0, 0x1.0b49dcda9dc4bp-20,
     0.0, 0.0, 0x1.f142fc7e8f08bp-346, 0.0, 0.0, 0x1.a3537a2f3c379p-1000,
     0x1.8a2de84475e7ap-739, 0x1.4d4e529b6ca1p-277, 0.0, 0.0, 0.0,
     0x1.fc77d66bd1fddp-1009, 0.0, 0.0, 0x1.9a23441780dafp-769,
     0x1.9cffa7ffc9718p-597, 0.0, 0.0, 0.0, 0.0, 0x1.d1a1e99f340cep-118, 0.0,
     0x1.0fa93848810a8p-392, 0x1.77db87d45b0c3p-422, 0x1.3ddcd50bb383ep-859,
     0x1.2f3283776f38ep-89, 0x1.a91eed565fe8bp-44, 0x1.09d0bd09c7e4ep-510, 0.0, 0.0,
     0x1.24f7a2a640f0cp-648, 0.0, 0x1.4f61ea3c89222p-876, 0.0, 0x1.3482b1ba7e883p-879,
     0x1.23bb64957f6bcp-884, 0.0, 0x1.82f88d327b435p-903, 0.0, 0.0,
     0x1.0809e9d80ec1dp-649, 0.0, 0x1.b3fb7d9d74649p-243, 0x1.21e3189b1602bp-461, 0.0,
     0x1.90109c2d605a8p-714, 0x1.3971ea1d2c4dp-405, 0x1.d62afa8218b0ap-886, 0.0,
     0x1.28465633ecc1ap-726, 0.0, 0x1.d33cc9763565ep-257, 0.0, 0x1.d34f9c9a90cd8p-195,
     0x1.aa30de9c00bfep-112, 0x1.8c0e0d64589c9p-527, 0.0, 0x1.31563adfab2f8p-878, 0.0,
     0.0, 0x1.07a0229653d26p-970, 0.0, 0x1.b107c1e83e90dp-177, 0x1.dcb8db69dd828p-498,
     0.0, 0.0, 0x1.d0c2e42da66aap-553, 0x1.84e03c331ae1ep-91, 0.0,
     0x1.406d032950a6p-346, 0.0, 0.0, 0x1.f6e24f02e8aeap-1007, 0x1.3b2d3af762cdep-858,
     0.0, 0x1.e6e835fa8bdf7p-886, 0x1.1a2b99f1d3342p-666, 0x1.09be22888156dp-548,
     0x1.81c1353c45929p-471, 0x1.a5f156557126ap-170, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5921ac908eca9p-111, 0x1.91d32fbaf00b1p-1006, 0.0, 0.0, 0.0,
     0x1.b45140797771cp-865, 0x1.ad51b1fc26829p-681, 0x1.ce99beee6891p-550, 0.0,
     0x1.a4ae48fc6204dp-795, 0.0, 0.0, 0x1.99768daf23f7ap-778, 0x1.0f39d00efe045p-374,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2751eb2c688a9p-270, 0.0, 0x1.ca11f4bc8789bp-275,
     0.0, 0.0, 0.0, 0x1.606a40ed60607p-888, 0.0, 0x1.9867a8b91e52ap-872, 0.0, 0.0,
     0x1.5ebc5b0342194p-395, 0x1.295cbc271b27ap-522, 0x1.a3408d81a828cp-467,
     0x1.06281c018ccf2p-802, 0.0, 0.0, 0x1.9993a5a568b04p-118, 0.0,
     0x1.104ad1fdc7046p-690, 0x1.8dad6a90ccaa4p-218, 0x1.d80929f13533fp-726, 0.0, 0.0,
     0x1.1a88536e964ffp-495, 0x1.6ed9f625b73f7p-137, 0x1.0e8ca2bb8065ep-737, 0.0,
     0x1.394909959c0cep-716, 0x1.b6153ea460f23p-489, 0x1.2e42108ade35bp-260,
     0x1.ccf5d29ed2826p-317, 0x1.67ae0897706d6p-362, 0x1.f19d6e5804554p-152, 0.0, 0.0,
     0x1.3de0534943abdp-120, 0.0, 0x1.d2dd3908bf96ep-230, 0.0, 0.0,
     0x1.cc2ebea5da5ep-315, 0.0, 0.0, 0x1.ffa1802765f75p-594, 0.0, 0.0
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
            tmp1 = Sleef_atand1_u35purecfma(tmp0);
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
    printf("Sleef_atand1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atand1_u35purecfma bench acc %la\n", global_bench_acc);
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
