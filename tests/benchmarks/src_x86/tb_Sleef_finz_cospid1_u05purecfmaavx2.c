/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospid1_u05purecfma.c --function \
 *     Sleef_finz_cospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.bf751a619530bp-602, 0.0, 0x1.bbdd65e324352p-940, 0x1.77f163de498e7p-821,
     0.0, 0.0, 0x1.58077d8bee9f7p-892, 0x1.1919bcaf886a2p-775, 0.0,
     0x1.e26bb059e2116p-231, 0.0, 0.0, 0x1.41349a9d06b6dp-198, 0.0, 0.0, 0.0,
     0x1.2ec08ae1bb07bp-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b95b79c1db45p-128,
     0x1.4e1d44645d909p-367, 0.0, 0.0, 0.0, 0.0, 0x1.0570fd67e9ac3p-208, 0.0,
     0x1.95c7e9a3bff75p-75, 0x1.df06bf9b45c82p-242, 0.0, 0x1.fef354ba8e68ap-371, 0.0,
     0x1.090d6e12d68d5p-100, 0x1.439479b7db4a9p-52, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5cfd3ee674516p-710, 0.0, 0.0, 0.0, 0x1.6b17a42f93844p-23, 0.0,
     0x1.e49514abce891p-325, 0x1.c3f8585ad9b3p-322, 0.0, 0.0, 0x1.52982e0269fap-63,
     0.0, 0x1.8e0110e5865fdp-111, 0x1.74f6ab8f6a3d9p-176, 0.0, 0.0,
     0x1.46cbdf140e636p-14, 0.0, 0.0, 0x1.ae82a8848ed8bp-494, 0.0,
     0x1.4417236172cbp-746, 0.0, 0x1.932ef44517364p-601, 0.0, 0x1.da5865ddd5ff7p-553,
     0.0, 0x1.b06550e35bf8p-1007, 0x1.3590b0b48113fp-833, 0.0, 0x1.69e2b3c635b43p-744,
     0.0, 0.0, 0x1.f8eae721a62c7p-666, 0.0, 0.0, 0.0, 0.0, 0x1.3ebfa239b22a6p-790,
     0.0, 0x1.49b7281b13ee8p-356, 0.0, 0x1.a4ec457fe7e0bp-557, 0x1.cd269fc96ae7dp-87,
     0x1.7bde63044fdf2p-530, 0.0, 0.0, 0x1.c11f3066c067p-655, 0x1.40a18a49ab436p-5,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd08a24d30549p-545, 0.0, 0x1.dd6cce83b99bcp-85, 0.0,
     0x1.939168ca54f34p-351, 0x1.288c7a2fb7554p-906, 0.0, 0.0, 0.0,
     0x1.de474b3223f09p-257, 0x1.8baa44733bbb7p-752, 0.0, 0x1.1f1e196e88caep-947, 0.0,
     0.0, 0x1.b40d84d701fc6p-95, 0.0, 0.0, 0x1.9c84799049486p-147, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1e5a6974e7e1p-350, 0.0,
     0x1.2e5d4c8588fd8p-270, 0.0, 0.0, 0.0, 0x1.2e54984b8369ap-448,
     0x1.05541e5652df8p-779, 0x1.5449fe06ab494p-572, 0.0, 0x1.ffe2f1de677f8p-959, 0.0,
     0.0, 0x1.2f285e4253441p-445, 0x1.d6ce85bf05b66p-82, 0x1.a07b073f360cap-460, 0.0,
     0.0, 0.0, 0x1.cc75f4ac27fb3p-519, 0.0, 0x1.699b1d19c69c4p-712,
     0x1.bb75aa2c5fb01p-178, 0.0, 0.0, 0x1.9dbce09029cc3p-668, 0x1.88bab1c1fac61p-473,
     0.0, 0x1.995e0c49c3f65p-629, 0.0, 0x1.95cc5fa16af31p-454, 0x1.94573a8058c3p-422,
     0.0, 0x1.e1c1f4f9ea52p-743, 0x1.3db31331e2cf4p-920, 0.0, 0.0,
     0x1.4d34094fdd41ep-520, 0.0, 0.0, 0x1.004efc551726cp-271, 0.0,
     0x1.0c7c10fdc34ap-744, 0.0, 0x1.ee21b2b5e6e35p-51, 0x1.c23f39199d523p-315,
     0x1.2f4490bdfa03cp-73, 0x1.f50960da72708p-430, 0x1.bd04fcbf0b3f1p-14, 0.0,
     0x1.26b00b985858fp-444, 0.0, 0.0, 0.0, 0x1.0195efb90f55p-799, 0.0,
     0x1.43e6ff02a484ep-532, 0.0, 0x1.53ed03927afddp-43, 0x1.4e5f2f3993d66p-648,
     0x1.7819a46d0c6eap-927, 0x1.c08e0b89e72b2p-518, 0x1.45b1213fa0a0ep-507,
     0x1.acce4c900ec63p-112, 0.0, 0x1.1df028eb3dcf6p-215, 0x1.f2865c06100b2p-832,
     0x1.7483bc0030de6p-934, 0.0, 0x1.2897f7869ed8fp-697, 0x1.371438ae73f33p-381,
     0x1.237679baa13c5p-115, 0x1.37d68b9549f83p-125, 0x1.0f4348d797b86p-113,
     0x1.de0faf673314bp-424, 0x1.d81fc2394c74p-121, 0x1.d03658c9d68cdp-259,
     0x1.b7b54cb7a44d1p-526, 0.0, 0x1.104315704f527p-288, 0.0, 0.0,
     0x1.37971708a7311p-143, 0x1.92e9535705c09p-103, 0.0, 0x1.f5f74459bee2dp-323,
     0x1.1ac4cfb1e9b31p-314, 0x1.1143e15614429p-109, 0.0, 0x1.b0d1c4cdaa799p-92,
     0x1.d05629dc75a94p-638, 0x1.840ceab4a88c6p-697, 0x1.844959567d76ep-736, 0.0,
     0x1.bbb8a935a06d2p-833, 0.0, 0x1.415796f5054f7p-859, 0x1.30adf5d0216e2p-98, 0.0,
     0x1.faf470b31940ap-532, 0x1.8c8fba5ff6d8bp-464, 0.0, 0.0, 0.0,
     0x1.f0249edcfb2b5p-900, 0x1.4118cf10fe06bp-265, 0x1.93719e63c40e3p-938, 0.0,
     0x1.b2da7f510d993p-344, 0x1.309c9c33d330ap-216, 0.0, 0x1.4dc1a097aae74p-636,
     0x1.1a8618dfe5827p-615, 0x1.26d17d5c28b95p-951, 0.0, 0.0, 0.0,
     0x1.cc1ba72860904p-815, 0x1.46d763e092fb3p-936, 0.0, 0.0, 0x1.0bffcec682368p-820,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9a5d30918785p-397, 0.0, 0.0,
     0x1.b378dee45ea4fp-681, 0x1.95f37adf255b7p-335, 0.0, 0x1.23a4c56900088p-898,
     0x1.b50f087dc136cp-351, 0x1.928916f04996bp-989, 0x1.950d8360cfcdfp-640, 0.0,
     0x1.0a6b1deab0076p-12, 0.0, 0.0, 0.0, 0.0, 0x1.9b6180599a4c9p-647,
     0x1.cb04a12005573p-670, 0x1.931c9658c9019p-147, 0.0, 0x1.9fb796dacc294p-476,
     0x1.9432c158bd881p-128, 0x1.660875b3ce98bp-31, 0x1.2b4511276bc11p-275,
     0x1.7aee4f24b1692p-561, 0.0, 0.0, 0x1.3a5bb07a3c95bp-836, 0.0,
     0x1.522c829c09167p-127, 0x1.ec7d1130a2e8bp-713, 0x1.d08adcf7f8baep-836, 0.0, 0.0,
     0.0, 0x1.6f8fc48cbc7ffp-232, 0x1.7060d3cc73934p-268, 0x1.ed418b06d4e89p-553, 0.0,
     0x1.7cccf0fcdec94p-164, 0.0, 0x1.7505a18b44baap-980, 0.0, 0x1.a417844a4297fp-351,
     0x1.92e012d5e159fp-470, 0.0, 0x1.ba74c2cbdf2b9p-321, 0x1.b0c70e529d5adp-877, 0.0,
     0.0, 0.0, 0.0, 0x1.a9c5ae625a4e2p-604, 0x1.bebcc8626f13p-349, 0.0,
     0x1.9693d05c4a376p-314, 0x1.a9dfcf04d65c4p-554, 0.0, 0x1.a753ff71912cap-440, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3c9559a3c8f5p-700, 0x1.9f1f704724fe8p-494,
     0x1.d630ed481f474p-809, 0x1.d7a83ec748802p-174, 0x1.da3ec1b83f749p-547,
     0x1.fadac66feebdp-3, 0.0, 0x1.225f86711975dp-646, 0x1.38533025caf0ep-1008, 0.0,
     0x1.8f042595e6d0ep-124, 0x1.1fd380ba77e3bp-815, 0x1.b472742568b27p-419, 0.0,
     0x1.ea8626873de2fp-686, 0.0, 0.0, 0.0, 0x1.7d777173daecep-89,
     0x1.f11682b93c9c7p-651, 0.0, 0x1.15fa542d2d0b2p-532, 0x1.0f82a7443abb3p-113,
     0x1.0381a6353d3ddp-366, 0x1.de2280057a016p-585, 0x1.f0f88b6e956c1p-792, 0.0,
     0x1.885847b66d664p-745, 0.0, 0x1.42713d53cd8c3p-605, 0x1.14af1896dcb13p-426, 0.0,
     0.0, 0x1.9a7479dcbf193p-733, 0x1.fc8f9548028f3p-917, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.160ec2aba8e5cp-581, 0.0, 0x1.d006b0f70c6dcp-911, 0x1.da3a261fc95dap-230, 0.0,
     0x1.2c58d4c599488p-1020, 0.0, 0x1.28a75fedabd52p-220, 0x1.e953ed1b8e9dfp-991,
     0.0, 0.0, 0.0, 0x1.ee7627f88b753p-900, 0.0, 0.0, 0x1.abb98d3526d96p-490, 0.0,
     0x1.7f6c92d1c7befp-588, 0x1.eb1337308b527p-878, 0x1.96169bd53c549p-46, 0.0, 0.0,
     0.0, 0x1.5d99220d31113p-827, 0x1.be8a5b8b4388bp-975, 0.0, 0.0,
     0x1.02e35f667b8f2p-738, 0.0, 0.0, 0x1.01401fc510f39p-425, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.81b3ba87c8c66p-928, 0.0, 0x1.ac8f1ebd06fd4p-715,
     0x1.1ad8ae5447c6cp-793, 0.0, 0x1.aeb9c652797cfp-897, 0x1.e34e193e79093p-486, 0.0,
     0x1.d6b0e2454fc91p-178, 0x1.f117fb518a32bp-349, 0.0, 0x1.d27ae1a147599p-843, 0.0,
     0.0, 0x1.97a36e7990705p-825, 0x1.052ab777eed2p-704, 0.0, 0.0, 0.0,
     0x1.5a72a6ce0888cp-16, 0x1.03ee41f2f19f5p-359, 0x1.0fdf2a3a4f45ep-747,
     0x1.a6443894fddccp-932, 0x1.a9193d0167729p-475, 0x1.2ca06f6fa5571p-303, 0.0,
     0x1.1a934d8e20944p-215, 0x1.413033caa68f6p-848, 0.0, 0x1.145f5a86c39f1p-903, 0.0,
     0x1.f2b1e11896cb2p-76, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10e796700ff7p-534, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8395baf1bef24p-430, 0.0, 0x1.18864b36cd931p-508,
     0x1.9e5da2edec855p-332, 0.0, 0x1.87c0650b7964p-494, 0.0, 0.0,
     0x1.f06e155cd3bd9p-635, 0x1.5fa81980e8353p-113, 0x1.95b60b8fb6ee2p-240, 0.0,
     0x1.02dc3537b7f0fp-442, 0x1.30d11c1e0886dp-166, 0x1.ae73ca7bd780dp-1005,
     0x1.cd467c6caed38p-47, 0x1.dc1bfe0f23728p-721, 0x1.5320dc57abebfp-977, 0.0,
     0x1.1a03b4bb26edep-544, 0.0, 0x1.fa95f2ebb7569p-852, 0x1.25487e48d9e06p-986,
     0x1.031e25528ff63p-953, 0x1.a41351617c97p-684, 0x1.ec6160835e21dp-522,
     0x1.50bcfd69b1f99p-951, 0x1.c8fb6c9ab8553p-176, 0x1.b20f0613f6447p-905,
     0x1.7ec93c795aed9p-615, 0.0, 0.0, 0x1.068790db8bf4ep-128, 0.0, 0.0,
     0x1.183b6ca29e018p-765, 0x1.3915155d667ddp-1020, 0x1.bc33a9c492eacp-437,
     0x1.8398a1b6889fap-338, 0x1.8c5a400a1c192p-245, 0.0, 0x1.f16ff2c81b90fp-324, 0.0,
     0.0, 0.0, 0x1.4a96be8b54378p-35, 0x1.7b8e18accf6b3p-892, 0.0, 0.0, 0.0, 0.0,
     0x1.7fe904a3097d2p-118, 0x1.0e65fd75e7057p-545, 0.0, 0.0, 0x1.36d99da91e94dp-5,
     0.0, 0.0, 0x1.a1f460affd891p-998, 0x1.0001016c33ad8p-556, 0x1.f803e04543188p-754,
     0.0, 0x1.57008bf470011p-133, 0x1.3a492467af6acp-796, 0.0, 0x1.d4d097eecd05ep-790,
     0x1.649998bd237cdp-994, 0x1.bf9229acf41e7p-642, 0.0, 0.0, 0.0,
     0x1.5c1b136573f09p-460, 0x1.8b96b56d787d1p-246, 0x1.ec056c14ec194p-986, 0.0,
     0x1.7453bafa0fceap-216, 0x1.7c1702b9acdcp-360, 0.0, 0.0, 0.0, 0.0,
     0x1.2e94798b1f17ap-42, 0.0, 0x1.b8ee04314901bp-149, 0x1.4cfa15a544ca9p-122,
     0x1.ec288ec720fa5p-852, 0.0, 0.0, 0x1.0579ad2da58d5p-990, 0x1.f0449d29ac1f5p-11,
     0.0, 0.0, 0.0, 0x1.c0f7d771393bbp-201, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf5527024a58p-143, 0x1.f9dc9db1c95f5p-12, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ee374498344cp-264, 0x1.9b3cd4921cf8cp-551, 0.0, 0.0, 0.0,
     0x1.1035da178162fp-726, 0.0, 0.0, 0.0, 0x1.12643b252be6cp-930,
     0x1.43b43e0e4e20bp-395, 0.0, 0x1.ab6b3a4f4c354p-653, 0.0, 0x1.e4bf266d7dfb4p-665,
     0.0, 0.0, 0x1.2f9fb9f72efd9p-208, 0x1.ae3bd9bea44aep-161, 0x1.259d77707be09p-101,
     0x1.c3e6becbef541p-429, 0x1.792355505011dp-546, 0x1.0c759947f7dd8p-835, 0.0, 0.0,
     0.0, 0x1.6adb395141c3cp-760, 0x1.fe292757f7614p-678, 0x1.360ccdca42a06p-902, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dc733d173311ep-807, 0x1.578660c1cab3cp-768,
     0x1.edb16edcfb988p-371, 0.0, 0.0, 0.0, 0.0, 0x1.0e3551a8f00dcp-761,
     0x1.d165062da9476p-400, 0x1.db6be760b455p-664, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8db80f73b046ap-616, 0x1.037b233135198p-595, 0.0, 0.0, 0x1.13f77e4bfed04p-236,
     0.0, 0x1.639951d722524p-137, 0.0, 0.0, 0.0, 0x1.eb915f35d7bdcp-64, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.acecec2ac675dp-938, 0x1.ee4bcf0791fabp-659, 0.0,
     0x1.b830c65727897p-391, 0x1.13c6cdad70ecfp-939, 0x1.7864e47334121p-894, 0.0, 0.0,
     0x1.9a4c00a321884p-4, 0.0, 0x1.bec45c7fe7b0dp-113, 0x1.d94b9c87c86e3p-734,
     0x1.34d4052ae52b4p-622, 0.0, 0x1.d6475630ad892p-437, 0x1.e5e3a9e031b17p-177,
     0x1.12974a1ba126ap-38, 0.0, 0.0, 0x1.646e982124b09p-954, 0.0, 0.0,
     0x1.664ef34b61da4p-720, 0x1.919b52fc63fccp-149, 0.0, 0.0, 0x1.e962e0a4de2e6p-33,
     0.0, 0.0, 0.0, 0x1.a2fa6b22f7aa8p-887, 0.0, 0x1.0cd642e226555p-540, 0.0, 0.0,
     0.0, 0x1.40878ab28604p-675, 0x1.1780e786999aep-457, 0.0, 0.0, 0.0,
     0x1.c7b253721831cp-869, 0x1.23b9bc864537p-728, 0x1.774d6f262f1bp-1011, 0.0, 0.0,
     0x1.f8b2f4bb8bf7cp-849, 0x1.d841545099c37p-348, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b825832bc99ebp-914, 0.0, 0x1.2dd2a72a8ef42p-458, 0.0, 0x1.01bd465765806p-721,
     0x1.639f5a0c299e7p-665, 0.0, 0.0, 0.0, 0x1.bb94fdce3b76ap-620, 0.0,
     0x1.5ac027f2ca1dcp-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ece0f0e2ee94dp-377, 0.0, 0x1.6466266e7877fp-328, 0.0, 0x1.7842d41f9ae8ap-969,
     0x1.15d42616bd6e5p-419, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bea6382932d0bp-935,
     0x1.53ac3fd0eb5dcp-504, 0.0, 0x1.cda981449f975p-337, 0x1.31ff4421ef507p-81, 0.0,
     0x1.9f5586010be42p-1009, 0.0, 0.0, 0x1.3df1909781074p-690, 0.0,
     0x1.3a1a33a70492p-384, 0x1.db666606e5526p-749, 0.0, 0.0, 0x1.dbff70d8b7bap-299,
     0x1.2c5bddd6d87e7p-79, 0x1.b3aea731b14ep-829, 0x1.6cd1d4ea3aa8dp-196,
     0x1.f52aab48a14e9p-976, 0.0, 0.0, 0x1.e76ef6a05fabap-745, 0.0, 0.0, 0.0,
     0x1.9ee8368dc921bp-394, 0.0, 0x1.db4869afd9aep-572, 0.0, 0x1.2ed7efd9abd39p-82,
     0x1.e7cded6f2fc79p-629, 0x1.49e9a6df5f0e7p-122, 0.0, 0.0, 0.0, 0.0,
     0x1.36c790e17a7f4p-691, 0.0, 0.0, 0x1.9ebd7031cf533p-47, 0x1.7581c5e515ab6p-961,
     0x1.5983c27091b2ep-507, 0x1.7ea422863dc97p-765, 0x1.89a36c485ff31p-54, 0.0,
     0x1.bc10b898e3921p-474, 0x1.0045c88189fa9p-688, 0x1.3c5e50f380dcbp-132,
     0x1.8e151ada99034p-454, 0.0, 0.0, 0x1.7c7d2cfea25d9p-560, 0.0, 0.0, 0.0, 0.0,
     0x1.46be2e17bb71ap-524, 0x1.98bf7f5360b9bp-986, 0.0, 0x1.5530636cea98p-103,
     0x1p0, 0x1.92bec2929a737p-526, 0x1.7d0567cf878p-840, 0.0, 0x1.0a60a65eca8dfp-180,
     0x1.5eab2b40058ap-665, 0x1.491ad8086eab3p-269, 0x1.478d2b757136ap-221, 0.0, 0.0,
     0.0, 0x1.7b06e9861bf78p-140, 0.0, 0.0, 0x1.0ad3a23ff5002p-499, 0.0,
     0x1.2d7261fb763fp-602, 0.0, 0x1.2bf7872226faap-203, 0.0, 0.0,
     0x1.17c83c5ad96c6p-58, 0.0, 0x1.23b441fed8c97p-1013, 0x1.1cf5d3ae356b5p-395,
     0x1.d31ab07261855p-635, 0.0, 0x1.394e4abeffef3p-1009, 0.0,
     0x1.f03235e7a0da5p-832, 0x1.da3704185c286p-544, 0.0, 0.0, 0.0,
     0x1.1b40e11e738fdp-983, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fef5e892af236p-834, 0x1.5a37d33f0a8c9p-742, 0.0, 0.0, 0x1.0680b68ab1466p-388,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10b27e9cbf15dp-579, 0x1.c864233cecd85p-612,
     0x1.98f2b8c2ad8ddp-46, 0x1.9537900f695bcp-364, 0x1.360f001b3d69fp-454, 0.0,
     0x1.36b3caaf29e43p-784, 0.0, 0x1.fb3c5d7e1b586p-183, 0x1.092ff7c2877f6p-881,
     0x1.341ec0c0502a6p-680, 0x1.3e9c3cf0c0db6p-900, 0x1.95014bfdd1307p-841, 0.0,
     0x1.50e7f0801a13ep-831, 0.0, 0x1.d9cad4c096289p-178, 0.0, 0x1.7082349adb3eap-216,
     0.0, 0x1.9bad8936d0a81p-257, 0.0, 0x1.9fe3c705ef697p-748, 0x1.e98a65b70bdf6p-307,
     0x1.defdf31bacbcbp-502, 0x1.7e09be580375bp-521, 0.0, 0x1.8d91e4e6b530ep-278, 0.0,
     0.0, 0.0, 0x1.ce23948d74881p-567, 0.0, 0x1.e2964cb9baf1bp-635, 0.0,
     0x1.97cb8077c2521p-725, 0x1.78004609ea574p-1018, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.466775f9011edp-562, 0.0, 0.0, 0x1.e9b345e998966p-374, 0.0, 0.0, 0.0,
     0x1.8af8e9583544cp-88, 0x1.8f0ebd7842576p-484, 0x1.696ef274d96b7p-602, 0.0, 0.0,
     0.0, 0.0, 0x1.25f082aaa451cp-800, 0x1.542d27e408868p-87, 0.0, 0.0,
     0x1.e90168ecffcb5p-155, 0x1.1e0ea2d8424ddp-265, 0x1.e9d8fbafcab11p-99,
     0x1.ee2904b473d65p-689, 0.0, 0.0, 0x1.60394923d2f9fp-324, 0x1.6686ae0860869p-524,
     0x1.d94af2e5b2805p-320, 0.0, 0.0, 0.0, 0.0, 0x1.0b831351b8594p-910,
     0x1.82b88f8a53143p-514, 0.0, 0.0, 0x1.c82a4766d2941p-841, 0x1.bd0b8100ffef6p-800,
     0x1.5306a78ccbb18p-592, 0.0, 0.0, 0.0, 0.0, 0x1.fd0fba173edaap-970,
     0x1.9adab2ce7fdbep-737, 0.0, 0.0, 0.0, 0.0, 0x1.0c764da823bafp-274,
     0x1.766463f72a845p-970, 0.0, 0x1.5708f642139dep-917, 0x1.ceedf99458039p-617,
     0x1.c3f1a245ba894p-795, 0.0, 0x1.1e85a0320e469p-8, 0.0, 0x1.5bde1d7595326p-342,
     0x1.20e5ba5fbbf2bp-88, 0x1.14386b9e5524ep-239, 0x1.2d32be06ed7e9p-819,
     0x1.03fb2ce082805p-283, 0x1.c533645e6afb5p-398, 0.0, 0x1.6f87a2fdf7f39p-359, 0.0,
     0x1.81f2eac440bb6p-804, 0.0, 0x1.592d944cbf411p-467, 0x1.1d5acfafbb973p-470, 0.0,
     0x1.bcfda6bcdec05p-749, 0.0, 0x1.a16704831ae31p-587, 0x1.aeea668916b3ap-722,
     0x1.b3b006cb5d88dp-243, 0.0, 0x1.381454b75886fp-368, 0.0, 0.0,
     0x1.57b6b949d954fp-336, 0.0, 0x1.464e1f7d33838p-605, 0.0, 0x1.052689f1031c4p-283,
     0.0, 0x1.89e962dfc27cp-470, 0x1.d2af40011aad8p-670, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3dbd50bf7a53fp-110, 0x1.9549260b0e48ep-835, 0x1.4c1f8f8d6b703p-911, 0.0,
     0x1.a16af86007d5ep-447, 0.0, 0x1.f91d4c114fca7p-303, 0x1.956d2304f5c93p-504, 0.0,
     0.0, 0x1.fd307a757a23cp-904, 0x1.598aca761de49p-731, 0.0, 0.0,
     0x1.6b9c6bdfbdca5p-232, 0.0, 0.0, 0.0, 0x1.85856e726251p-633,
     0x1.49c59dd77d43cp-140, 0.0, 0x1.792aff23094a6p-663, 0x1.d39bce9483979p-603, 0.0,
     0x1.ad9398d9fe4fp-343, 0x1.309a31ed4b02ep-721, 0.0, 0.0, 0x1.504f49fb94d16p-259,
     0x1.adfc952d33b3fp-685, 0x1.29f2c6cfd40abp-555, 0.0, 0x1.6de45f463a9adp-53,
     0x1.afc2e7f52d728p-301, 0.0, 0x1.9802870208212p-856, 0x1.1aeeb177344a3p-516, 0.0,
     0.0, 0x1.ea804c21ee4a1p-667, 0.0, 0x1.c3239a4c7d471p-568, 0.0,
     0x1.8696488766585p-392, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e067703990cfdp-855, 0.0
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
            tmp1 = Sleef_finz_cospid1_u05purecfma(tmp0);
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
    printf("Sleef_finz_cospid1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cospid1_u05purecfma bench acc %la\n", global_bench_acc);
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
