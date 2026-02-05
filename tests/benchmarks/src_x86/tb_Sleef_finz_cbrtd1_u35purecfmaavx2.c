/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd1_u35purecfma.c --function \
 *     Sleef_finz_cbrtd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.bc216f6360556p-849, 0x1.6b94f9b9e5545p-603, 0.0, 0.0, 0.0, 0.0,
     0x1.684f3d7c6f23ap-670, 0x1.0693a153a093fp-967, 0.0, 0.0, 0x1.f3fd27f58c30ap-34,
     0.0, 0.0, 0x1.b6eeaf7d9b5e2p-952, 0.0, 0.0, 0x1.241ada1655fc1p-853,
     0x1.5cc4842685dafp-302, 0.0, 0x1.2d5f3f912160ap-446, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.79ca1e6045074p-155, 0x1.c8cb9e6190f13p-559, 0.0, 0x1.ce9c2df1aa36p-751,
     0.0, 0x1.c68422dcc57a2p-515, 0x1.6228aa127e02cp-247, 0.0, 0.0,
     0x1.5f95d7e489a55p-649, 0.0, 0x1.1cf38541d310dp-791, 0.0, 0x1.33012febb254p-759,
     0.0, 0.0, 0.0, 0x1.909482d056011p-463, 0x1.cdbb6c2da6265p-964,
     0x1.bac4705acd7b6p-985, 0.0, 0x1.c566a2346009dp-719, 0x1.f3eaef4864798p-388, 0.0,
     0x1.af20d0224d905p-349, 0x1.d2a2583e6ce83p-482, 0.0, 0.0, 0x1.81a0c825f8bb4p-779,
     0x1.2b9f886297c5p-768, 0x1.bb79bbb0bc9bbp-701, 0x1.9522c01d81e76p-779, 0.0,
     0x1.219c15aca978ep-792, 0.0, 0x1.4e98997806061p-931, 0.0, 0x1.48a84cddb63e5p-807,
     0x1.e9e3a4c582104p-715, 0x1.db1fb6124b6fdp-856, 0.0, 0.0, 0.0,
     0x1.00e7a7284fcbcp-166, 0x1.d2eda2c65ce9ap-457, 0x1.fe9aa216560bbp-920, 0.0,
     0x1.5d076c1fe5b94p-272, 0.0, 0x1.30904474fb213p-227, 0x1.05392c89633cap-40, 0.0,
     0.0, 0.0, 0.0, 0x1.68c8dfd580dd9p-830, 0x1.04dc8e37c7d59p-488,
     0x1.933fd7c08f074p-215, 0x1.e6aad1f1a8d5cp-488, 0.0, 0.0, 0x1.0d03c3b6259fap-104,
     0x1.b2945ea6721b5p-76, 0.0, 0.0, 0x1.07c00c8cb5117p-162, 0.0,
     0x1.ac843235919a8p-759, 0x1.be740fa8c3f7fp-809, 0x1.d6144eaab518ep-881, 0.0,
     0x1.22417de0876bap-690, 0.0, 0.0, 0x1.f13d3a686d3e9p-777, 0.0, 0.0, 0.0,
     0x1.b7a05b5f25659p-996, 0x1.35be7e836a569p-341, 0x1.7acb1ba29a017p-239,
     0x1.b5494b60ca494p-659, 0x1.8cbeed582d69dp-538, 0x1.a653490e0dcccp-367,
     0x1.e576ccd025e88p-107, 0x1.21d35f9e3a39p-531, 0x1.260dc384842e5p-385, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.50c208d8e5933p-646, 0.0,
     0x1.1156a04858fa9p-230, 0x1.3443fadf45184p-118, 0.0, 0.0, 0x1.b22002c20d61ap-921,
     0.0, 0.0, 0x1.e3e8db7dd53eap-464, 0x1.b6cb76a31d65ap-958, 0x1.0942a9dab7752p-769,
     0x1.dab76acf53735p-608, 0x1.febd524a80f14p-100, 0x1.fbbff7aea1bb6p-659,
     0x1.b47c27d7a61f7p-592, 0x1.34044f61d7c6ap-130, 0.0, 0x1.173a38bf4c98p-79,
     0x1.57e19782739cdp-26, 0x1.a901df672111bp-66, 0.0, 0.0, 0x1.8f517d4a6c8f3p-887,
     0.0, 0x1.a1ec479603fcep-314, 0x1.2fdab3c710dc2p-55, 0.0, 0x1.c3eb195695224p-54,
     0.0, 0.0, 0.0, 0x1.c8e96918cedb2p-1018, 0.0, 0.0, 0x1.2ed0e238fb166p-343, 0.0,
     0x1.2a25a422e3ef9p-778, 0.0, 0.0, 0x1.3a45c9c7351f8p-8, 0.0, 0.0,
     0x1.671a5fe1c80fp-826, 0.0, 0x1.8dd9f962a59c2p-813, 0.0, 0x1.9a6a2bf9248ebp-88,
     0.0, 0x1.81cd9d5ce4f1dp-709, 0x1.0b6707c9cd7b7p-566, 0x1.442bd2bd6ec6dp-948, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f710f17a583bep-40, 0x1.cc3d6e73d2515p-674,
     0x1.ddf065fca0f29p-192, 0.0, 0.0, 0x1.25d8c0a0555e6p-130, 0x1.f6a135f3c1658p-151,
     0x1.79b641b8be406p-677, 0x1.1a3910baa8348p-164, 0x1.a0469d9370fa2p-137, 0.0, 0.0,
     0x1.38a4ceba9d0cp-488, 0.0, 0x1.409b2515c770bp-738, 0.0, 0x1.45782cb542de6p-982,
     0.0, 0.0, 0x1.338f2474e307fp-879, 0.0, 0.0, 0.0, 0.0, 0x1.8353803b6783p-292, 0.0,
     0.0, 0x1.f60b928018ce7p-35, 0x1.108cbe7169249p-388, 0.0, 0.0, 0.0,
     0x1.ee8de7f707efcp-513, 0x1.a92f9d3f86e1dp-239, 0x1.f43b035c5c1c6p-523, 0.0,
     0x1.975650960b22bp-740, 0.0, 0x1.14e4def590061p-277, 0x1.6b44a8615fd2ap-808, 0.0,
     0x1.e071ca942d7ebp-255, 0x1.29a5162ed5e74p-726, 0x1.ad277f064b6cp-627, 0.0,
     0x1.4c730961a0948p-261, 0.0, 0.0, 0x1.196e6d0a7bc51p-379, 0x1.ee8b6763b7a9ep-566,
     0x1.4299a37822cd8p-765, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f19a6d231aa5bp-187,
     0x1.779de0ac1aecep-345, 0x1.1da89efaf3645p-301, 0x1.ff7617e52e301p-380, 0.0,
     0x1.213cc6ca79893p-139, 0.0, 0.0, 0x1.aa86cd9dd60a1p-652, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5164372a69e9dp-981, 0x1.ee727a09f8ed4p-852, 0x1.0763eb338765fp-278,
     0.0, 0.0, 0x1.068da30d7f188p-910, 0.0, 0.0, 0.0, 0x1.f6efd09528d22p-830, 0.0,
     0.0, 0x1.1e445419f7f29p-413, 0x1.8a7281b323215p-297, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.63a81bc47a9c3p-151, 0x1.910b8b606c35ap-26, 0.0, 0x1.9ee78e011cad3p-481,
     0x1.b1b33ba848247p-613, 0.0, 0x1.29f00d1ea5d3ap-746, 0x1.566bcca0e6506p-793, 0.0,
     0.0, 0x1.4f2aeb09193bcp-750, 0x1.77686565dbb02p-601, 0x1.fe0c6649c6d57p-757, 0.0,
     0x1.7255d4c01dc92p-604, 0.0, 0x1.9db91c683482cp-464, 0.0, 0x1.8b859ae38eecdp-56,
     0.0, 0.0, 0x1.d1f4bda9102e2p-607, 0.0, 0.0, 0x1.b9825e555eda9p-688, 0.0, 0.0,
     0.0, 0x1.d19de747f1506p-392, 0.0, 0.0, 0x1.8b46a2307ec4p-351,
     0x1.1f5312db5907ep-687, 0.0, 0.0, 0x1.5808a992072b8p-253, 0.0, 0.0,
     0x1.8117399dbd2ebp-968, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e64198547da37p-304, 0.0,
     0x1.aad90aeb7c332p-784, 0.0, 0x1.833314cd5adc9p-139, 0x1.6ed9df8128394p-406,
     0x1.8fbe74f3164f3p-6, 0.0, 0.0, 0.0, 0x1.cc7e73518e012p-104, 0.0,
     0x1.e4b01d286e6edp-233, 0.0, 0.0, 0.0, 0x1.6ba8d327a010ep-452, 0.0, 0.0, 0.0,
     0x1.edb583b300a7bp-688, 0.0, 0.0, 0x1.e61a431d70443p-379, 0.0,
     0x1.9885597e39d54p-325, 0x1.b77ddb05f597ep-742, 0.0, 0.0, 0x1.f729707bbd628p-78,
     0x1.46964c6aac626p-154, 0.0, 0x1.0e668645f945dp-377, 0x1.d3155d528e3a1p-834, 0.0,
     0x1.4696b47c2966ap-311, 0x1.990a088261b14p-474, 0x1.11547b2526a47p-802, 0.0,
     0x1.f20a24f67066cp-165, 0.0, 0x1.b976c3b6872e9p-154, 0x1.c6c5c6007670bp-70,
     0x1.eeb256f86abdbp-526, 0.0, 0x1.b15ec08c14f1p-904, 0x1.71e01b0124c8fp-100,
     0x1.acb89f892c9a2p-52, 0x1.1c96de3f51c5dp-679, 0.0, 0x1.f9ef0a6645d26p-706, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.431647cbc1dp-781, 0.0, 0.0, 0.0, 0x1.c1fc05d1b6ad5p-153,
     0x1.bac1ad363d404p-526, 0x1.92de570da60dep-279, 0x1.24f6d962517b4p-3,
     0x1.e268bfb1bcdep-849, 0.0, 0.0, 0.0, 0.0, 0x1.eefbcc47e94b9p-832, 0.0,
     0x1.01a6a36d69df3p-425, 0x1.1255205c74224p-118, 0.0, 0x1.b50ae47e5c37ap-767,
     0x1.dcca50d3e5654p-62, 0x1.b5d2876ba860fp-780, 0x1.8dc3eaa7a8727p-305,
     0x1.dcdea1b91643ep-529, 0x1.c83c7c916a81ep-823, 0x1.e933b56cceca5p-278,
     0x1.b15a3afac6069p-617, 0x1.5b96ed1f65dfap-494, 0.0, 0x1.18a0afd6a7536p-372, 0.0,
     0.0, 0.0, 0x1.e77900bc79197p-717, 0x1.c257cf36fd4aap-446, 0x1.06bb444dcc7c2p-384,
     0x1.2ad8a7bc3329p-296, 0x1.c44f4a4a2433ep-575, 0.0, 0x1.bba0d92ba7ce2p-722,
     0x1.867313a50a98cp-785, 0x1.5dcc789b5fa96p-840, 0.0, 0.0, 0.0,
     0x1.6238b5f3883cbp-545, 0x1.08340f1f5cce6p-12, 0.0, 0.0, 0x1.b7019f100c0afp-277,
     0.0, 0.0, 0.0, 0.0, 0x1.cb909c7f8efc5p-1004, 0.0, 0x1.ebc23e35e705fp-144,
     0x1.c8b2d4d205ec6p-973, 0.0, 0x1.1f9dc9bbde967p-663, 0.0, 0x1.0df68e2c9d4e3p-661,
     0.0, 0x1.05d2ba0839146p-386, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.75657c344ae99p-593, 0.0, 0x1.cb03591caa145p-813, 0.0, 0x1.882ae4130033ap-601,
     0x1.623e2abb5e882p-680, 0.0, 0.0, 0.0, 0.0, 0x1.ef5ed2b1454eep-111,
     0x1.0458114345e8dp-167, 0.0, 0x1.871b30f34d896p-598, 0.0, 0x1.aafc98542e6aap-126,
     0x1.c5fe482f923c8p-469, 0x1.7b11ac9385b99p-955, 0x1.7f071f5b103e2p-437, 0.0, 0.0,
     0x1.d1210997de9bfp-325, 0x1.3e142c936115bp-254, 0x1.5bb4bcf57d229p-438,
     0x1.5bab9b0f4d49cp-223, 0.0, 0.0, 0x1.6ce238f6f1c5dp-432, 0x1.c7d18c29b17b1p-37,
     0.0, 0x1.0d4fdb86e6c91p-935, 0x1.b18f1ca770123p-804, 0.0, 0x1.4758b202c1059p-79,
     0x1.286d135825f0dp-112, 0.0, 0x1.e72ab2ec91779p-430, 0.0, 0.0,
     0x1.534ecca0bb73fp-574, 0x1.d507e3386c77bp-322, 0x1.4aeedc817d036p-949, 0.0,
     0x1.b847f8ba3dfc8p-71, 0.0, 0.0, 0.0, 0.0, 0x1.8212ca727ad93p-352,
     0x1.ce7e9f2b70a62p-815, 0x1.acee41abc3d1ap-757, 0x1.97dfa7d4e9525p-905,
     0x1.40b5c4f097a8p-582, 0x1.472a1dd1d6837p-295, 0.0, 0.0, 0x1.997abf970b86fp-32,
     0x1.11f10f5333c72p-33, 0.0, 0.0, 0.0, 0x1.f5307852732b2p-21, 0.0, 0.0,
     0x1.deaee72265221p-741, 0.0, 0x1.0add14c164a05p-656, 0.0, 0.0, 0.0, 0.0,
     0x1.0888e4353e652p-490, 0.0, 0.0, 0.0, 0x1.a007c4ac9f846p-168, 0.0, 0.0,
     0x1.b95dad17c8dd7p-145, 0x1.04ce9a68ace3fp-105, 0x1.e1b78655e3ba1p-1010,
     0x1.0bc3e77612a2dp-836, 0.0, 0.0, 0x1.dcb7b06786651p-144, 0.0, 0.0,
     0x1.8ae3c88de3a79p-481, 0.0, 0x1.1d3aed09d8ab6p-566, 0.0, 0.0,
     0x1.82cafe34c85bap-159, 0x1.c3d38fbf1f0fbp-726, 0.0, 0x1.1cfac50de6eefp-510, 0.0,
     0.0, 0x1.f9ec0f2783241p-289, 0.0, 0.0, 0.0, 0x1.9c6c418a6b685p-194,
     0x1.dbe3870f368d8p-245, 0.0, 0x1.66a76412fb468p-910, 0.0, 0.0, 0.0,
     0x1.84c4adce4a542p-625, 0x1.037f7a8baae04p-440, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb493e443136fp-170, 0x1.4bf2aa0ffb424p-542, 0.0, 0.0, 0x1.a72c138dd9a1fp-568,
     0.0, 0.0, 0x1.bf1be77026d14p-210, 0.0, 0.0, 0x1.6d0e40df6c2d7p-523, 0.0,
     0x1.9123ead174ebap-692, 0.0, 0x1.8609c702880e3p-668, 0.0, 0x1.5eeaf5951b967p-945,
     0.0, 0.0, 0.0, 0x1.4bdf48a552d96p-936, 0.0, 0.0, 0.0, 0.0,
     0x1.b940ab7101675p-425, 0.0, 0.0, 0.0, 0x1.1b31b760c78dcp-496,
     0x1.30180255e1abbp-191, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5d4a3018668c8p-798, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac9687dd6e172p-119,
     0.0, 0x1.9dc39bd6a6e14p-110, 0x1.21fbb80f27ab8p-301, 0.0, 0x1.3f7446a056241p-746,
     0x1.f6e58e1fb0b76p-817, 0x1.fc092e1b0c0aep-478, 0.0, 0.0, 0x1.e9d557cf33d5ap-958,
     0.0, 0.0, 0.0, 0.0, 0x1.2e18fea29c7bfp-302, 0.0, 0.0, 0x1.31837dc865becp-942,
     0x1.76b8741793411p-125, 0.0, 0.0, 0x1.08f79c2b65adcp-656, 0x1.503f9e04c17f8p-323,
     0.0, 0.0, 0.0, 0.0, 0x1.5d667d41067a5p-714, 0x1.14fcf2da35329p-539,
     0x1.75821145b2e29p-775, 0x1.9a130095fef4ep-852, 0x1.df25dcaaff388p-747,
     0x1.57eea184dd88fp-785, 0.0, 0x1.19149440178f1p-641, 0x1.5d6ef3e2e728fp-39, 0.0,
     0.0, 0.0, 0.0, 0x1.e1a32e79aa168p-399, 0x1.e6f2d66520cebp-985,
     0x1.fa17e4e94d219p-1008, 0.0, 0x1.86d67bb9d0a4p-927, 0.0, 0.0,
     0x1.c502cc4df5a49p-393, 0x1.1bb2d34a2b4d4p-277, 0.0, 0x1.8bd86632654c7p-640, 0.0,
     0x1.d04623361d769p-885, 0.0, 0x1.dd4e8e137c3bfp-156, 0x1.94ffa530de157p-522,
     0x1.edfd59778a06dp-705, 0.0, 0x1.84c5f1a740711p-95, 0x1.9c01ef9c8253ep-841, 0.0,
     0.0, 0x1.cd0fb886d7d29p-148, 0.0, 0x1.5fc274ce933cp-538, 0.0,
     0x1.abed23a621496p-920, 0.0, 0.0, 0x1.416f38a56e968p-493, 0.0,
     0x1.2c8df0d8e3a8ap-375, 0x1.207d04d5b3fb9p-937, 0.0, 0.0, 0.0,
     0x1.2b8154a456791p-118, 0x1.58321a403267fp-789, 0x1.1e17acc9abaf6p-866,
     0x1.13cc502ccac73p-957, 0x1.485ffd68a8348p-905, 0.0, 0.0, 0.0, 0.0,
     0x1.bb8b666fae778p-266, 0x1.1e5fccb2b7d39p-537, 0.0, 0x1.b2d0a20162e5p-632,
     0x1.bc6e498326c35p-152, 0.0, 0.0, 0x1.17d1f1bff9204p-301, 0x1.9eeaae1866007p-284,
     0x1.62ffe3efff72cp-51, 0.0, 0x1.38d8278fd3036p-73, 0.0, 0x1.19c2caf1f79fep-351,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ebeaeb22d99e6p-1004,
     0x1.df61a7160d52bp-399, 0x1.48ddfe0353876p-146, 0x1.b7a27fa6cf2a8p-745, 0.0, 0.0,
     0.0, 0.0, 0x1.a6e603382d01cp-579, 0.0, 0x1.6403a50be6526p-788, 0.0,
     0x1.6ca1335b6f147p-882, 0.0, 0x1.7ccef55ece4a4p-608, 0x1.9196e48a76f58p-553, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1aba45e414434p-96, 0x1.531138dd390e4p-588, 0.0, 0.0,
     0x1.3c8ce296aac77p-663, 0x1.0c56865712ba8p-488, 0.0, 0x1.454977c7dea92p-726,
     0x1.fa763a6bfad41p-545, 0.0, 0x1.d7fb1c532aff4p-118, 0x1.2fe4a1e66247cp-373,
     0x1.f9d6378f952cdp-20, 0.0, 0.0, 0x1.1aaaadf1ab4c1p-751, 0x1.89e24f03c4ed3p-540,
     0.0, 0.0, 0x1.169682bc436e2p-312, 0x1.1da49238d7908p-346, 0x1.4ec8a3f375054p-952,
     0.0, 0x1.d36a6e069c81p-235, 0.0, 0x1.04de376560cc1p-967, 0.0, 0.0,
     0x1.f73b12b72da6fp-109, 0.0, 0.0, 0.0, 0.0, 0x1.5648c0b82943fp-482, 0.0,
     0x1.a0fd021e4dd9p-901, 0.0, 0.0, 0x1.77b83b5dbb912p-699, 0.0,
     0x1.c59b4b18ced33p-836, 0.0, 0x1.36cf454010d7p-434, 0x1.e027736540ab5p-821, 0.0,
     0x1.660c3f6cd9a4p-834, 0x1.d0a6c64b8b92ap-585, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ada621a8d193p-805, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d4e8037eed95p-303, 0.0, 0.0, 0.0, 0x1.d2ff415d263d7p-563,
     0x1.88ccace370e6cp-451, 0x1.a870232b9d917p-851, 0x1.9b9570f63b8bbp-446,
     0x1.62e9f2d93f023p-295, 0.0, 0.0, 0x1.eea9b8c489a33p-600, 0x1.d929c12606e72p-380,
     0.0, 0x1.5e8034c296fcep-551, 0.0, 0x1.6e04afc93e06ap-122, 0.0,
     0x1.070ca57a0045cp-884, 0.0, 0.0, 0.0, 0x1.41b30545711ebp-790,
     0x1.cd1bf9ad57099p-58, 0x1.e7af631b4b845p-678, 0x1.e77c0904ec002p-205,
     0x1.8e910e4d9b258p-644, 0x1.179d0872a1817p-597, 0x1.8770ddc10f5d1p-626, 0.0, 0.0,
     0x1.f116021b0511ep-73, 0.0, 0x1.2ef7eaa48fc19p-219, 0.0, 0.0,
     0x1.2473cfcacec3cp-408, 0x1.d73c65bfb90aep-903, 0.0, 0.0, 0x1.c0589dad4f615p-379,
     0x1.48353fd61a30dp-451, 0x1.83ab975fcfa3cp-42, 0.0, 0.0, 0.0,
     0x1.97034fbc8c558p-677, 0x1.f7ea415c1809bp-227, 0x1.e66408ffdbce5p-447,
     0x1.38611719fe536p-595, 0x1.f70326f0af816p-746, 0.0, 0.0, 0x1.fa12fbf28a94p-502,
     0.0, 0.0, 0x1.7c27bb045a508p-903, 0x1.8756aee7998p-1019, 0x1.35dc3f57849fep-100,
     0.0, 0.0, 0x1.aa9a80ea39debp-118, 0.0, 0x1.1f3dc261ebaf2p-330, 0.0, 0.0, 0.0,
     0x1.5e6eab96afb4cp-868, 0.0, 0.0, 0.0, 0x1.68ac5dca447dep-137, 0.0, 0.0, 0.0,
     0x1.eecfe8727d30cp-304, 0x1.694baebb37918p-693, 0x1.b3754f4417e23p-185,
     0x1.d699e767ba2cp-639, 0.0, 0.0, 0.0, 0.0, 0x1.533b92588a3aap-790, 0.0, 0.0,
     0x1.2ac66812e1325p-222, 0.0, 0.0, 0.0, 0x1.95fce41a520d5p-113,
     0x1.a87cd23ef1edfp-788, 0x1.5f8f14fec9f6dp-670, 0x1.ceced6606e7a9p-607, 0.0,
     0x1.6e487a9f99144p-224, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94a77a9070213p-566, 0.0, 0x1.4f828cbc5ccap-377, 0x1.0c2d848dd0695p-543, 0.0,
     0.0, 0x1.938046c8d4849p-753, 0x1.aa92233149e99p-1018, 0x1.eb98bb6d50b73p-485,
     0.0, 0x1.a09743f1a8fddp-545, 0.0, 0x1.e4d7c2372d61p-546, 0x1.9ab29360d1213p-843,
     0x1.6503c3b740946p-354, 0.0, 0x1.91a1334afdb9ep-836, 0x1.c960c9a7002d8p-277, 0.0,
     0.0, 0.0, 0x1.76e0e587c8301p-744, 0.0, 0x1.b4bbdc47b31d4p-796, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.58a0d8fe14c5bp-946, 0x1.4963ad754321cp-716, 0.0, 0.0,
     0x1.3173a8487e6b2p-868, 0x1.db7d6b155d0d1p-475, 0x1.f4e19e99f8c61p-116, 0.0,
     0x1.e4e8386a980b5p-243, 0.0, 0.0, 0.0, 0x1.634aecf8814d9p-236,
     0x1.eedef3bd5b27p-34, 0x1.119d20aca53e5p-1003, 0.0, 0.0, 0.0,
     0x1.a20a7420f0f6ap-452, 0.0, 0.0, 0.0, 0.0, 0x1.ae122cf805dep-911, 0.0,
     0x1.dac0ec7b7f308p-541, 0.0, 0.0, 0.0, 0.0, 0x1.491ecd3bde407p-174, 0.0,
     0x1.c0ffde1257e1ep-2, 0.0, 0x1.0c388924753ebp-35, 0.0, 0x1.01b89549dfec5p-964,
     0.0, 0.0, 0x1.01291a299e56bp-913, 0x1.6abb6bada65bfp-461, 0x1.4f39ecd7edd91p-763,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.265c3ce656c58p-372, 0.0, 0.0, 0.0,
     0x1.a1936508e9313p-408, 0x1.d03b3812731b1p-232, 0x1.aaf087a376a8p-290, 0.0, 0.0,
     0x1.ee34c5a8400b6p-482, 0x1.39569f254597ap-502, 0x1.87cc8f3abfd4ap-742, 0.0, 0.0,
     0x1.6f9d0ff2940ecp-537, 0x1.3281bc531fb4ap-816, 0x1.440e180d31f1ep-863,
     0x1.22146001eaa02p-639, 0.0, 0x1.f4b8639570edcp-866, 0.0, 0.0, 0.0,
     0x1.769334f5631dp-886, 0x1.1d46f7a2e211dp-772, 0x1.6e6617d07aa65p-582, 0.0,
     0x1.fb75c11fd899bp-393, 0x1.3651e06908409p-459
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
            tmp1 = Sleef_finz_cbrtd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_cbrtd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd1_u35purecfma bench acc %la\n", global_bench_acc);
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
