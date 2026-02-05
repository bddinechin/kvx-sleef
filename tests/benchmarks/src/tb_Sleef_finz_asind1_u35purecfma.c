/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind1_u35purecfma.c --function \
 *     Sleef_finz_asind1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.b5bb86631ebecp-151, 0x1.4e843d30969e2p-328,
     0x1.6ac04ff891ecdp-24, 0.0, 0.0, 0x1.d8df9f9b3f565p-134, 0.0, 0.0,
     0x1.e1b5f1da9f2a7p-811, 0x1.575f7003f1137p-324, 0x1.79e4cb11a4544p-36, 0.0, 0.0,
     0x1.12bcff7b6d95p-904, 0.0, 0.0, 0x1.4a3a6fdb54cadp-921, 0x1.13be1e4f4ea29p-393,
     0x1.a897dab6a2b6p-507, 0x1.ff0a073191836p-404, 0.0, 0x1.143511ae68962p-245, 0.0,
     0.0, 0.0, 0x1.3061e9b48806cp-40, 0.0, 0.0, 0.0, 0.0, 0x1.a90fc961d79f4p-419, 0.0,
     0x1.704ebcae43ba9p-712, 0x1.f7d77298e8524p-363, 0.0, 0x1.2c380ff98bee9p-852, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.301a997fdc636p-966, 0.0, 0.0,
     0x1.23b9d50663ad6p-607, 0x1.7fa1bbf596339p-341, 0.0, 0x1.42d6720e8a1efp-392,
     0x1.f2b2f4f847f44p-961, 0x1.4290df2c6701bp-781, 0.0, 0.0, 0.0,
     0x1.c493a20554bccp-660, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a5ef14d16e25p-984, 0.0,
     0x1.7d8455d521a11p-130, 0.0, 0x1.e25086290b279p-13, 0.0, 0x1.20e61dcc3065fp-228,
     0.0, 0.0, 0x1.1564ecf818894p-671, 0x1.b281ad2633eedp-923, 0x1.24ee3934bbdcap-973,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b05bf2b73f013p-854, 0.0, 0x1.234be4ffaaff2p-318,
     0x1.4b2fc00a03828p-35, 0x1.ea6c50f7bb71ap-1014, 0.0, 0.0, 0x1.69d7136676efp-527,
     0x1.95ea08c45b6fcp-957, 0x1.5fdc2652a2553p-763, 0x1.3a177170fb84ap-832,
     0x1.64dd0d5bb4fb8p-361, 0x1.a42a3445764e6p-662, 0x1.acfbed9a19711p-100,
     0x1.52a4001483043p-446, 0.0, 0.0, 0x1.9a7bcf59a1b2dp-554, 0x1.e71f44d0ad1dfp-102,
     0x1.2e89bed48d9d7p-267, 0x1.4edb62189be38p-491, 0.0, 0.0, 0x1.cadbf2786f769p-294,
     0.0, 0.0, 0.0, 0.0, 0x1.a0f06a7dd44a4p-569, 0x1.d20269e8d075ap-640, 0.0,
     0x1.32ce06476c19cp-886, 0.0, 0.0, 0x1.af34c7e641471p-1011,
     0x1.5fb9d0e0f0eb7p-803, 0.0, 0x1.8f50db3033ccdp-166, 0.0, 0.0,
     0x1.fad0162f2bd8p-813, 0x1.2ecf5c29df2d4p-123, 0.0, 0.0, 0x1.7de295fba17ddp-174,
     0.0, 0x1.c53ea42cd2478p-580, 0.0, 0x1.7245a32ef50bap-178, 0.0, 0.0,
     0x1.b5e5603c1bdabp-675, 0x1.3c12170e552c2p-506, 0x1.6e9420526b746p-584, 0.0,
     0x1.200e15a521fccp-348, 0.0, 0x1.49585dcb5a1e7p-175, 0x1.8e92d61d1b2e7p-792, 0.0,
     0x1.4744659cd8945p-964, 0x1.d669c5e97bf2bp-881, 0x1.500ef58188d9dp-793, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7a4968ad05ec2p-542, 0.0, 0x1.852e61ef1e204p-801, 0.0,
     0x1.6bb90e5d03f24p-722, 0.0, 0x1.a6b7c2d752e4p-666, 0.0, 0.0,
     0x1.f2934c8020a9fp-10, 0.0, 0x1.933fc43f2323fp-492, 0x1.e6247b7686709p-148,
     0x1.60eef33fda945p-211, 0.0, 0x1.b7090dae1fa2bp-591, 0.0, 0x1.769bcd813089p-279,
     0x1.87ce2607a31a8p-3, 0.0, 0x1.61182d820f9bep-701, 0x1.b0ca5e3f850fbp-234, 0.0,
     0x1.aae7db9197f57p-964, 0x1.d79d77ab45db4p-1008, 0x1.1af81a9fac48p-978,
     0x1.f08015ac52cc1p-299, 0x1.3bc431784246ep-951, 0.0, 0x1.71529a4311e5cp-313,
     0x1.3db93e8a69b2ap-806, 0x1.c3d607910e25bp-838, 0.0, 0x1.7f2475dad2adcp-426,
     0x1.48ceb27545a3dp-862, 0.0, 0x1.dbc07ff81ea9cp-810, 0.0, 0x1.575b9e4e17627p-979,
     0x1.0c9d88476ac6ep-55, 0x1.b8488ec64f316p-1021, 0x1.24c7b6bd43534p-537,
     0x1.dbe087bc848a8p-72, 0x1.53f660f7e96f1p-578, 0.0, 0.0, 0x1.ede31d07f3a0ep-38,
     0x1.1e70df65ff85ep-139, 0x1.34273a27853c7p-211, 0.0, 0x1.5a54b78b5204fp-444,
     0x1.a23855f757b73p-614, 0x1.cc1d04b97df09p-956, 0.0, 0x1.54097c5744a17p-825, 0.0,
     0x1.04d3fce1c519p-1017, 0.0, 0.0, 0.0, 0x1.1d30898348ed3p-451, 0.0,
     0x1.32d216d03700bp-195, 0x1.29d0c0fb0b153p-101, 0x1.cec43ae093f48p-665, 0.0, 0.0,
     0x1.03d95f74a993bp-129, 0.0, 0.0, 0x1.bcabd3c4e9173p-955, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.22396fb7b5033p-786, 0.0, 0x1.f0688adba583cp-521, 0.0, 0.0, 0.0, 0.0,
     0x1.fc2b1ae1f844bp-999, 0x1.d3dda7a8d95e2p-827, 0.0, 0.0, 0x1.00336b285bb7cp-700,
     0x1.44a4d3d911731p-687, 0x1.a4444466d752fp-134, 0x1.3356cb0b52d2bp-6, 0.0,
     0x1.50a11e8aee0dap-273, 0x1.e80d80ac26f09p-20, 0x1.31be82d546c91p-578,
     0x1.d66e55b67eccbp-428, 0.0, 0.0, 0x1.599e0f4261795p-5, 0x1.e7406660a0698p-984,
     0x1.25404dff41aadp-3, 0x1.169166e52042ep-412, 0.0, 0.0, 0x1.0646694455a42p-123,
     0.0, 0.0, 0x1.34ca0c3ee1c0cp-217, 0x1.225d61540fa96p-143, 0.0, 0.0,
     0x1.cdd8d90f141b7p-185, 0x1.76b09a5141379p-336, 0x1.a1c2eeaf4bac9p-772,
     0x1.a391053f96c35p-469, 0.0, 0.0, 0.0, 0.0, 0x1.a435b036ff1c7p-824, 0.0,
     0x1.4a0511e4aba29p-994, 0x1.78769c16e90aep-208, 0x1.38b628448bedbp-847,
     0x1.310317727848fp-495, 0.0, 0x1.3f764f838b00fp-870, 0x1.ba577e86ca04fp-279, 0.0,
     0.0, 0.0, 0x1.2d7e79e077452p-539, 0x1.43e8f3d178848p-711, 0x1.43b1554ff08bcp-851,
     0x1.da7bbc5602e9cp-299, 0.0, 0x1.79b0a9cb91375p-645, 0.0, 0.0, 0.0,
     0x1.c549a593f0074p-802, 0.0, 0.0, 0.0, 0x1.41e14d4deaa0bp-72,
     0x1.9094949f15a16p-817, 0x1.9e62a059de6adp-463, 0.0, 0.0, 0.0,
     0x1.8f71adcf6decbp-749, 0x1.9785e4e2fa1fap-262, 0x1.108d31d85d544p-859,
     0x1.5da12bdcf937cp-816, 0.0, 0x1.99899260e5e2ap-580, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ae951c36f1e42p-817, 0.0, 0.0, 0.0, 0.0, 0x1.7d0b62ded7bc8p-110,
     0x1.d06bcc578e352p-672, 0x1.dae78e1c33585p-645, 0.0, 0x1.94dd9dde9d618p-822, 0.0,
     0x1.ed5b51d92e64p-557, 0.0, 0x1.8f326aec32e73p-262, 0.0, 0x1.5bdca2cb16cfcp-299,
     0.0, 0x1.fed8bcb85d29ep-341, 0x1.c85c33963e401p-858, 0x1.f2594d45f1f65p-995, 0.0,
     0.0, 0x1.b276dd22c05bap-661, 0.0, 0x1.3bb8a2a1caacfp-617, 0.0,
     0x1.b5e58f1cbbb61p-950, 0.0, 0.0, 0x1.c5c8647d2a035p-836, 0x1.ad9235550febdp-880,
     0x1.15127b4b0020fp-453, 0x1.8fefdb25ada75p-96, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.55e2514a26dcfp-829, 0.0, 0x1.56d73317df92ep-196, 0x1.f10134c695e58p-51,
     0x1.d374403597654p-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b173312e866a2p-1019,
     0x1.92f8f3b125bb7p-630, 0x1.3ef28faeaa57fp-990, 0x1.9af7ed8dc02d2p-717, 0.0,
     0x1.ca40fe2986c71p-106, 0x1.d0526fd1b90ebp-719, 0x1.43b0375f00012p-358, 0.0, 0.0,
     0x1.6a44964e80f1dp-803, 0.0, 0.0, 0.0, 0.0, 0x1.936d9c0d8ce3p-696, 0.0,
     0x1.5faf9c5f7ed1cp-746, 0x1.9e5dce14d4e7ep-820, 0x1.4fd1fec0095fdp-151,
     0x1.d08fd340a92ffp-141, 0.0, 0x1.9587d24a46fe5p-230, 0.0, 0x1.244a721667d6ap-267,
     0.0, 0x1.585b3cf9c5069p-683, 0x1.9cbdcb41b3e3ep-919, 0.0, 0.0,
     0x1.7e3a735f8a807p-868, 0.0, 0x1.752d7ae98dc0bp-955, 0.0, 0x1.457a7f8c47908p-143,
     0.0, 0x1.ead0681af3412p-663, 0.0, 0.0, 0x1.8515d44736b01p-595,
     0x1.49af37a7f4ab3p-201, 0x1.77c395b9058b3p-457, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.435875ceba3e7p-697, 0x1.26872153c190cp-419, 0.0, 0.0, 0x1.ca44fd724ac08p-187,
     0.0, 0x1.50ffe9a3a2912p-39, 0.0, 0.0, 0x1.72df1c3a65531p-957,
     0x1.5b14bb4732d23p-705, 0x1.2b09f7e5266a4p-1006, 0.0, 0.0, 0.0,
     0x1.87d0bf4c385ecp-427, 0x1.79e5d43d0a975p-189, 0x1.649e2ed88c1aep-700,
     0x1.cb33bb25274fbp-198, 0x1.ffbb87ea6143p-776, 0x1.758da2961c7aap-546, 0.0,
     0x1.f9b2f74abb478p-170, 0x1.19d33c93e86b6p-582, 0x1.cf367a10ef78ep-168,
     0x1.64169971ca6a6p-441, 0.0, 0x1.1cb09d36dd631p-746, 0x1.20494e91ad764p-851,
     0x1.9bec81727ca5fp-733, 0.0, 0.0, 0x1.0b277204caca1p-115, 0x1.212b355381ca7p-295,
     0.0, 0x1.5a9956eb3526ap-716, 0x1.eb29838284461p-418, 0x1.0c61b233c6614p-589,
     0x1.d4afb85e9da32p-225, 0x1.88e99b8da9bbap-451, 0x1.8ab2e4336254p-563,
     0x1.247b2332b8159p-22, 0.0, 0x1.e6b41d38e7c1cp-205, 0x1.6d8698c624f5ap-615,
     0x1.57b99d8260ff2p-164, 0.0, 0x1.fe0366fbd4f1dp-463, 0x1.62e2508742692p-714, 0.0,
     0.0, 0x1.093570829c7b7p-507, 0.0, 0.0, 0x1.c3f6c581a763ap-737,
     0x1.1b37ada953591p-456, 0x1.14bb8701954cep-515, 0x1.8d091cff0e2a8p-640, 0.0,
     0x1.e673bd5075216p-829, 0.0, 0.0, 0.0, 0x1.b6ba83e935dd2p-386, 0.0, 0.0, 0.0,
     0.0, 0x1.e971fa2bfd80cp-482, 0.0, 0.0, 0x1.1bc10241a7b56p-788, 0.0,
     0x1.f9c71bee1dbd7p-397, 0x1.11b643abbe30dp-310, 0.0, 0.0, 0x1.07bfee245dbb1p-435,
     0x1.79927c96f3a77p-346, 0.0, 0x1.e2cefb78d028dp-275, 0.0, 0.0, 0.0, 0.0,
     0x1.0d03841109178p-904, 0x1.11ae58a8b878bp-70, 0x1.7311764b17b53p-830, 0.0, 0.0,
     0x1.d65e183118f8p-103, 0x1.3a6acc074faf4p-876, 0x1.28fff42ae14dp-802, 0.0,
     0x1.a0979ed38b15dp-323, 0x1.80b399d650beap-146, 0.0, 0.0, 0.0,
     0x1.f4d587b60dbafp-497, 0.0, 0.0, 0x1.2780e9165c3cbp-362, 0x1.2c051b974d042p-204,
     0x1.1d8af2ef81ecfp-300, 0.0, 0x1.3d2ce589c2755p-31, 0x1.b946bba9ee7bbp-860,
     0x1.7ec296e54b39ep-95, 0.0, 0.0, 0.0, 0.0, 0x1.46a48951f5e6p-957,
     0x1.dfa40277d524cp-35, 0.0, 0.0, 0x1.0215853f1fa98p-184, 0x1.2b660fb59973fp-16,
     0.0, 0x1.e2357bf0dd645p-677, 0.0, 0.0, 0.0, 0x1.793fb91c92afcp-150, 0.0, 0.0,
     0.0, 0.0, 0x1.76215dea9b2ebp-318, 0.0, 0.0, 0x1.3af25e1788925p-393, 0.0,
     0x1.89a8ddd926996p-220, 0.0, 0x1.7853f3994417p-430, 0x1.c97d816c6e289p-907,
     0x1.d6b93961dd463p-127, 0x1.d13ff4f0d8ee7p-171, 0x1.5d7875d7fee31p-381,
     0x1.c3a308e01c6cdp-282, 0.0, 0.0, 0.0, 0x1.39e779f3cf251p-1010,
     0x1.15300efc1a836p-86, 0x1.d76bbee0004b8p-288, 0x1.605485ae222ddp-791,
     0x1.65de547c97305p-560, 0x1.bb4176731db5dp-849, 0x1.067a24d492af2p-2,
     0x1.823bb619b403cp-249, 0.0, 0x1.f8d2189607c5dp-913, 0x1.49e77d282ada8p-284,
     0x1.5e897569aedb6p-108, 0x1.6e1bb83db67f6p-856, 0.0, 0.0, 0x1.86448b64252a3p-32,
     0.0, 0x1.8116c719bf152p-749, 0.0, 0x1.c35e4e18c2dc5p-361, 0.0,
     0x1.30d0746e3860fp-106, 0.0, 0x1.cce9f3e400bdep-893, 0x1.d0b1b56662927p-327,
     0x1.9fb2fef0d13b5p-833, 0x1.071042669e4bp-34, 0.0, 0x1.849f1a6bfe5a4p-795,
     0x1.14d17365aedf5p-225, 0x1.48a9b503981ap-108, 0.0, 0x1.8c3d17da3064cp-649, 0.0,
     0.0, 0.0, 0x1.e79e78f75451p-494, 0.0, 0x1.05c0f9e301f32p-579, 0.0, 0.0, 0.0,
     0x1.531e3b9b08f83p-426, 0x1.08bcfd2149c74p-394, 0x1.2d623cd19cf5ap-80,
     0x1.468c6fe7dc8c9p-211, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7512c95bc70ep-265,
     0.0, 0.0, 0.0, 0x1.86d8000df2d59p-715, 0x1.f636b7458e235p-1015,
     0x1.49c84df208f89p-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58fb912273c3dp-404,
     0x1.ec5f040d8f1bep-31, 0x1.a6fc0200f5b42p-586, 0x1.6c7c795596992p-485, 0.0, 0.0,
     0x1.24d928560439ap-375, 0x1.4f61f9a0d5eacp-259, 0x1.a9cb39085f1b2p-886, 0.0,
     0x1.0520f804b0c7dp-844, 0x1.3bc84caf9f746p-783, 0.0, 0x1.6a1f31e111bdap-429, 0.0,
     0x1.2f09be8ac2d74p-149, 0.0, 0x1.04225f41499ffp-857, 0.0, 0x1.c1e00a2e3b542p-930,
     0.0, 0x1.a07e9efc66535p-87, 0x1.23d7e012183e5p-441, 0x1.3500a4d3b0295p-60,
     0x1.2f858f7d646a5p-856, 0.0, 0.0, 0x1.8c262a6766821p-999, 0x1.50077190484e5p-934,
     0.0, 0.0, 0.0, 0x1.d2872fd74bfc8p-646, 0x1.d756599752dbp-483, 0.0, 0.0, 0.0,
     0x1.ddca74f3adedcp-832, 0x1.d0f5df7cdb975p-290, 0.0, 0.0, 0x1.2d3b7093d12ddp-259,
     0.0, 0x1.fb6fc8883352dp-867, 0x1.4ebdf044a07bcp-827, 0.0, 0.0,
     0x1.46b3b4023e447p-607, 0.0, 0x1.5c1d02c38c5dp-775, 0x1.55378d3800891p-259, 0.0,
     0x1.eb9592f2847bap-1018, 0.0, 0.0, 0x1.f102385b55456p-694, 0.0,
     0x1.d4d1ff148b096p-474, 0x1.01784d0f20907p-926, 0.0, 0.0, 0.0, 0.0,
     0x1.54617159948c9p-837, 0.0, 0x1.1fbb056a534adp-944, 0x1.fb1771b24ee4cp-993, 0.0,
     0.0, 0x1.620f7614451e8p-763, 0x1.61b6ce1c00f9ep-999, 0.0, 0.0,
     0x1.3d145c83e51b7p-1018, 0x1.bc022efc70aecp-950, 0.0, 0.0, 0.0, 0.0,
     0x1.d177e1d2feed9p-737, 0.0, 0x1.a0870e3b7e96cp-805, 0x1.79979a2c5cb3p-779,
     0x1.9c974b2ca7482p-491, 0x1.db79295ad87eap-592, 0.0, 0x1.3756180a11ee7p-595,
     0x1.d21b441a38d06p-780, 0x1.bd9261460ac17p-571, 0x1.9d5deb8e41c6fp-257,
     0x1.8b5f87b207aa1p-306, 0x1.263c6ab4c5bbdp-749, 0.0, 0x1.f28e4717230dbp-67, 0.0,
     0x1.1bd9014a18eb8p-1002, 0.0, 0x1.2a769dbe541acp-265, 0.0,
     0x1.d52fb211f6703p-223, 0.0, 0.0, 0x1.2a4ab3dbb4976p-559, 0.0, 0.0,
     0x1.7a112a9da4f5fp-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.77ac2096a623dp-333, 0.0, 0.0, 0x1.9a788a368a5p-30, 0.0,
     0x1.8f0cb99dc14d9p-371, 0x1.cecdbaff565fep-14, 0x1.ab1e953fff1cap-561,
     0x1.07fe90e541dcdp-399, 0.0, 0x1.6b289dacfcab2p-149, 0.0, 0x1.47e555eb75218p-19,
     0.0, 0.0, 0.0, 0x1.e1ab7e2dbf58cp-820, 0.0, 0.0, 0x1.a9f75be2da755p-501, 0.0,
     0x1.8acd67d888d04p-770, 0.0, 0x1.903b56d8d673ap-338, 0.0, 0x1.1020ff9c361ddp-890,
     0x1.c3ad9e1be870ap-769, 0.0, 0.0, 0x1.889784e735149p-726, 0x1.97bcef4b3eccdp-529,
     0x1.f68c62060fa1bp-829, 0x1.b9db04cef85d7p-1003, 0.0, 0x1.d0faee4c4d91dp-998,
     0.0, 0.0, 0x1.610e396e65063p-136, 0.0, 0.0, 0x1.c470d48799d3ap-467,
     0x1.9b38738a61ad4p-283, 0x1.479c12929ed6p-841, 0x1.5fcd98f1fe0cep-190, 0.0, 0.0,
     0x1.56ff52e1c085cp-708, 0.0, 0x1.448ea6ae8335p-577, 0x1.10941d8e83b43p-692, 0.0,
     0.0, 0x1.dd7e6bf7e53bdp-558, 0x1.2456b4c302fcfp-611, 0.0, 0.0, 0.0,
     0x1.86f9f4978d28ep-1001, 0x1.1b5763af25a41p-610, 0x1.197d9f27fc85p-499,
     0x1.6fc0176d5f47ep-773, 0x1.4a26bf4e74b93p-146, 0.0, 0.0, 0.0, 0.0,
     0x1.bf8aa9b9aa5f2p-461, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45ba75b6c724ap-980, 0.0, 0x1.b32b75661ba1dp-802, 0.0, 0.0,
     0x1.ce8e771ad59dep-923, 0.0, 0x1.b842f40755a03p-674, 0.0, 0.0,
     0x1.b584e5110f21ep-67, 0x1.5c8dd81fe2937p-118, 0x1.098fa0eef726cp-647,
     0x1.dc2ee877bb9a5p-940, 0.0, 0.0, 0.0, 0x1.0b08ad232f763p-248, 0.0, 0.0,
     0x1.09a21fff22d31p-20, 0.0, 0x1.ab0810fbc1034p-4, 0.0, 0.0, 0.0, 0.0,
     0x1.948e1bb4cd224p-744, 0.0, 0x1.cf1d25bdbcbb8p-935, 0x1.427953b0223aap-666,
     0x1.bc32fbc952286p-265, 0.0, 0x1.067e0a2debc27p-411, 0x1.645ae808fefcfp-220, 0.0,
     0.0, 0.0, 0x1.c202550d26d04p-833, 0.0, 0x1.ce480386a816cp-718, 0.0, 0.0,
     0x1.2ee4a95524247p-53, 0x1.b85a4e8880e1fp-230, 0.0, 0.0, 0x1.3640642bb3c4p-365,
     0x1.82dbe7c626dc6p-607, 0x1.b904a1712231p-273, 0.0, 0x1.8b7a1a367a24p-659, 0.0,
     0x1.65ec48c814419p-838, 0.0, 0x1.e7c3bb16120a5p-557, 0.0, 0.0, 0.0,
     0x1.5e670ae38132cp-421, 0x1.0ecdca6dd5efap-623, 0.0, 0.0, 0.0, 0.0,
     0x1.b329f03657853p-521, 0.0, 0.0, 0x1.187e434ad3b2ap-531, 0x1.ab01acfb26d32p-92,
     0.0, 0.0, 0.0, 0.0, 0x1.d9114bb5bf05ap-378, 0x1.32876af86271bp-371, 0.0, 0.0,
     0x1.baa33a32f2decp-173, 0x1.77e477f2bd90ep-582, 0.0, 0.0, 0x1.dfbe58d43a3adp-915,
     0x1.f586ecaea6c52p-251, 0x1.bc97f4b7eb358p-639, 0x1.02e44e1eaacf9p-406,
     0x1.d1f882b73e957p-491, 0x1.48694fab23ee6p-796, 0x1.7eac52f55c345p-305,
     0x1.f5cd1a7b103fcp-596, 0x1.a6b668193c0aap-866, 0.0, 0.0, 0.0,
     0x1.b9305cc816dfdp-385, 0.0, 0.0, 0x1.27a47887d2643p-908, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.43b7aeed66333p-381, 0x1.5759efd410d44p-36, 0.0, 0x1.056b6dee81638p-113,
     0x1.90fa16b19dec8p-630, 0x1.d397c35e5e8fap-669, 0x1.efc36b2b2975ep-464, 0.0,
     0x1.7f98f864cbeedp-957, 0.0, 0x1.616dc726aecdfp-570, 0.0, 0x1.21e22b430054dp-477,
     0.0, 0x1.4e28bb841530dp-885, 0x1.9085aee60697dp-239, 0x1.dfea8c8f16deap-295,
     0x1.9e4d544b9fa86p-244, 0.0, 0x1.5399cbccb077ep-599, 0x1.d4e94a11cc375p-853, 0.0,
     0.0, 0x1.914f511e035d1p-722, 0x1.8f121ceaa9d7ap-51, 0x1.9348d9434d3d5p-251,
     0x1.22af74b63e77dp-735, 0x1.1e1e3c3bb506p-197, 0x1.e3c95a7f812ep-416,
     0x1.b21a8c86bcdeep-476, 0.0, 0.0, 0x1.2f06712783a7cp-105, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.37fb4f061eda4p-702, 0.0, 0.0, 0.0,
     0x1.004855087c489p-234, 0.0, 0.0, 0x1.0d6daf43d3c05p-75, 0.0, 0.0,
     0x1.8dd345ec726cbp-237, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.660bd37db694fp-830,
     0x1.cba10a9332d78p-314, 0.0, 0.0, 0.0, 0x1.3f151379115fap-883,
     0x1.4d4101d5a7dbbp-910, 0.0, 0.0, 0.0, 0x1.2a9a1a1f238f8p-521,
     0x1.218f5f672e082p-209, 0x1.a86f01894f6c3p-198, 0x1.178049c6bc6c5p-254,
     0x1.1f2a68ed52ba2p-111, 0.0, 0x1.8e2c5a250e81ep-531, 0.0, 0x1.23a4016516219p-835,
     0x1.f0c230f023972p-508, 0.0, 0.0, 0x1.928dd100336ep-499, 0.0, 0.0, 0.0,
     0x1.1b04eb595c899p-968, 0.0, 0x1.98214e728046p-42, 0x1.672983cfdcef9p-544, 0.0,
     0x1.67b67b3b8ec05p-429, 0.0, 0x1.a72e6b6936ff2p-207, 0x1.54820c6a63c14p-305, 0.0,
     0.0, 0x1.0014ca25784e7p-290
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
            tmp1 = Sleef_finz_asind1_u35purecfma(tmp0);
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
    printf("Sleef_finz_asind1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asind1_u35purecfma bench acc %la\n", global_bench_acc);
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
