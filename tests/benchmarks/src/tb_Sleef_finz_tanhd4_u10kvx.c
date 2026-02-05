/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd4_u10kvx.c --function \
 *     Sleef_finz_tanhd4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0x1.453941f98b4d7p-723, 0x1.dbd6e44ffad17p-771, 0x1.fb26a010cb943p-791,
     0.0, 0.0, 0x1.3cb3e3b35f9eap-494, 0.0, 0x1.3e2cf168cc5aep-672, 0.0, 0.0,
     0x1.37110e8ee6ca3p-257, 0.0, 0x1.7ed43a71064d3p-470, 0x1.61f3ef395632p-916,
     0x1.21bc77f264024p-120, 0x1.053b1da1a758fp-506, 0.0, 0.0, 0.0, 0.0,
     0x1.32e3990c3ebafp-200, 0.0, 0x1.675ebadcb8805p-598, 0.0, 0x1.c258d1ccfe9e5p-737,
     0.0, 0.0, 0x1.ea812982dfb5ap-857, 0.0, 0.0, 0.0, 0x1.7ffe2030332abp-712,
     0x1.f8875748e23dfp-521, 0x1.dff6736f54a45p-341, 0.0, 0.0, 0.0,
     0x1.369dddb2bdd8fp-680, 0.0, 0x1.d95af66f6f2c5p-539, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6beade82e93b4p-861, 0x1.8718cb604749bp-416, 0.0, 0.0, 0.0, 0.0,
     0x1.777a0b2faa286p-525, 0.0, 0x1.fa8da7cc9e217p-8, 0.0, 0x1.b3d697eb05d12p-376,
     0x1.d6b6ede095544p-705, 0x1.9dfc985b2105dp-711, 0.0, 0.0, 0x1.eca4770be9a4cp-198,
     0x1.b17619bf68973p-104, 0x1.92f59ab82199fp-367, 0x1.6dcef30794421p-903, 0.0, 0.0,
     0.0, 0x1.b665b3ca1ef2bp-408, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57170aa81e41p-559,
     0x1.55c34aa9ee00ep-336, 0x1.e98118f383356p-551, 0x1.4dfc09b36fd71p-484,
     0x1.8dbe64ed2a70cp-549, 0x1.9035b61090d2fp-130, 0x1.b6b7e874b5cc4p-430,
     0x1.147099643e853p-312, 0.0, 0x1.50a1043d3d48dp-626, 0x1.64706a969e824p-177,
     0x1.b7091a2ab3eccp-458, 0x1.eebca65d6e83ep-702, 0.0, 0x1.1beb4a4f9ecf3p-780,
     0x1.1bae8b06f0c2bp-385, 0.0, 0x1.4d112391d2bbdp-583, 0.0, 0x1.3e7826d8c2af4p-514,
     0.0, 0x1.893368f6af97cp-449, 0.0, 0.0, 0.0, 0.0, 0x1.a82e0a36b9905p-523, 0.0,
     0.0, 0.0, 0.0, 0x1.f7271d454fc32p-422, 0x1.f4fbf562e6e09p-318, 0.0,
     0x1.ff49c8e862f98p-609, 0.0, 0.0, 0.0, 0x1.06834ac10143bp-732, 0.0,
     0x1.5126ba9dd7e8dp-174, 0.0, 0x1.39c17e93384e1p-778, 0x1.ebaa6dc285b8dp-358, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d8b41f24fa31p-631, 0.0, 0.0, 0.0,
     0x1.7d57d4a73f80dp-463, 0.0, 0.0, 0.0, 0x1.ad6db34ca607p-384,
     0x1.e0edd33177802p-20, 0x1.92a8e21277007p-318, 0.0, 0.0, 0.0,
     0x1.0e641a704752p-560, 0.0, 0.0, 0.0, 0x1.c4fc9813efc62p-773,
     0x1.5e09183ff1813p-918, 0.0, 0x1.b0689eba3636dp-795, 0x1.6bac6acf0f661p-327,
     0x1.a72cd32c18708p-1001, 0x1.3bd7e4ab77bc5p-807, 0.0, 0x1.7caccc5d82d37p-22, 0.0,
     0x1.0bb81d7650a9dp-808, 0.0, 0.0, 0.0, 0x1.26f4074661a3ap-889,
     0x1.f45623efc5f35p-622, 0.0, 0.0, 0.0, 0x1.27ba67d641a81p-762,
     0x1.e39bdf0024fd8p-835, 0x1.7e3b0902f67cbp-185, 0.0, 0x1.7f2f0217e816fp-667,
     0x1.f6c5c61f096dfp-331, 0x1.45d4f0e831223p-546, 0x1.34196bc3d0c5ap-145, 0.0,
     0x1.8c4b257c1461dp-912, 0x1.d07ee5b655b2fp-1016, 0x1.09af445518497p-925, 0.0,
     0x1.30393882326f7p-587, 0.0, 0x1.1fbd68e6c3748p-1016, 0.0,
     0x1.d8a08c5922affp-127, 0.0, 0.0, 0x1.c60831ae29a82p-307, 0.0,
     0x1.bf99ffebc4589p-384, 0.0, 0x1.a679d1c6040e3p-192, 0x1.d16b815474bc9p-1019,
     0.0, 0x1.3123fa3825e2ep-459, 0.0, 0x1.e5f0979c76317p-621, 0x1.7f750738a7652p-889,
     0x1.fbfcd44ba436ep-112, 0.0, 0.0, 0x1.584a2ffdb8a83p-290, 0.0,
     0x1.44cd5bf4473a3p-729, 0.0, 0x1.453fb2da322c7p-22, 0.0, 0x1.a8c3700539308p-870,
     0.0, 0x1.2e04e1d33fd95p-51, 0.0, 0x1.dd6bf05e4fecfp-250, 0x1.db647a2a9acc4p-479,
     0.0, 0x1.8f239133eac97p-521, 0.0, 0x1.b4670e4f440b5p-896, 0.0,
     0x1.6fd4d04546b47p-449, 0.0, 0x1.3342197504e9ap-482, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.13ac837cc6de8p-953, 0.0, 0x1.aa1d9c7407fb4p-338, 0.0, 0.0, 0.0,
     0x1.1a7eba0da6dfap-789, 0x1.2817b2fa668f6p-377, 0x1.63bde90984afp-60, 0.0, 0.0,
     0.0, 0.0, 0x1.de29d0dfca8f2p-709, 0.0, 0x1.de0be1902f151p-244,
     0x1.344950a402a8cp-462, 0x1.6d9a94c5190fp-245, 0x1.d337f45be408fp-584,
     0x1.58145f3b30cc6p-465, 0x1.4d0492b893ad7p-650, 0x1.74011a4c71faap-320, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dc1ad4d86469dp-491, 0x1.a0e495607aa78p-689,
     0x1.b9b436c7a4ecp-257, 0.0, 0x1.2776f82355acap-182, 0x1.98134265b66d4p-898, 0.0,
     0x1.b4dbf75f67969p-169, 0.0, 0x1.02208054703d6p-269, 0.0, 0.0,
     0x1.92a9bb9305181p-480, 0.0, 0x1.956458c0d051bp-175, 0.0, 0x1.eb56efc07d4a7p-334,
     0.0, 0.0, 0x1.02b7ef6498fcep-210, 0x1.ac5b803dc905dp-702, 0.0,
     0x1.2e7886b8a9b8p-700, 0.0, 0.0, 0.0, 0.0, 0x1.0ca8dc3115b97p-613, 0.0, 0.0, 0.0,
     0x1.f530d0f34cdadp-886, 0x1.51768dd4fe799p-518, 0x1.d3b03a33f582bp-641, 0.0, 0.0,
     0x1.b2db8ef1a06ccp-397, 0x1.db341405a26eep-136, 0x1.6e1516c10d78p-200,
     0x1.50957aef231d4p-868, 0.0, 0.0, 0x1.53c569c22e262p-533, 0x1.e3226220e966dp-986,
     0.0, 0.0, 0.0, 0x1.3b54027c3ea1fp-789, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.00a8e2c87d535p-358, 0.0, 0x1.5c2c9beb9299cp-160, 0.0, 0x1.51d824d4ff2a3p-685,
     0.0, 0x1.d0ba0d74750afp-634, 0.0, 0x1.5454e874e205ep-119, 0x1.13b7cd95850c7p-661,
     0.0, 0.0, 0.0, 0x1.8793ad76683abp-874, 0.0, 0x1.0c86365d024e4p-489, 0.0, 0.0,
     0x1.bfc3bd0ab98ccp-959, 0x1.c5a10737ed573p-938, 0x1.77b20df18b7d7p-863,
     0x1.7ac0437292c18p-1008, 0x1.cb4c1e117c061p-173, 0.0, 0x1.8943d24861d88p-191,
     0x1.e9674ba081b19p-976, 0x1.b36324de4f75p-61, 0.0, 0.0, 0.0,
     0x1.c72c086d7ff63p-383, 0.0, 0.0, 0x1.8f4e5a1554343p-318, 0.0,
     0x1.508ea10ee6378p-11, 0.0, 0x1.0ecd6dd535574p-507, 0.0, 0x1.e9859eb21088ap-1003,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d5d288ec5dd5fp-391, 0x1.fe0c20547f735p-55,
     0.0, 0x1.48ad0ed83cdbp-491, 0.0, 0x1.3a893b39c50a8p-742, 0x1.55a0322454096p-404,
     0.0, 0x1.cdc61e650d14ap-106, 0x1.81bad643e9887p-682, 0x1.53b650a30e12cp-235, 0.0,
     0x1.34642409a23c6p-869, 0x1.8054cfd6c082bp-917, 0x1.fbe296ac206adp-84, 0.0, 0.0,
     0x1.d113f681f35cp-719, 0.0, 0x1.b39eea0dc5191p-126, 0.0, 0x1.7f35224df527p-973,
     0.0, 0.0, 0x1.0f52efe8697fap-221, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.281bf4c427accp-1014, 0x1.abd7db63c805fp-141, 0x1.ebadf1c4cacf6p-966, 0.0,
     0x1.eb467cc0ea9acp-565, 0x1.8da3276687119p-302, 0x1.e24a43816f45cp-789,
     0x1.f112b55b812fap-347, 0x1.53a235f717c7cp-162, 0x1.08052c6199dbfp-645, 0.0, 0.0,
     0x1.bbea0c57ca237p-1005, 0x1.d7e38c7c64be2p-382, 0.0, 0x1.aea14a5c15949p-777,
     0x1.2527174c373d1p-485, 0x1.899c94670bf2bp-137, 0x1.6a31ce85f150fp-593,
     0x1.3bfa7e5693f88p-526, 0x1.635c3c1f5e426p-856, 0x1.6d171c18cc415p-477, 0.0,
     0x1.acea4c5104d3bp-489, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c5da7bfe4d7bp-166, 0.0,
     0x1.dc6c54e378c5bp-21, 0.0, 0.0, 0x1.1d04358047d55p-896, 0x1.81b21d464eac2p-403,
     0x1.5e66f95d6602dp-79, 0.0, 0.0, 0x1.772aacd9ba2bdp-1011, 0x1.26c34856e37d9p-45,
     0x1.cbf60f1dc8667p-653, 0.0, 0x1.dd3ad381bbef5p-32, 0x1.2ff6dc082e706p-857, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.023907cedb2c4p-592, 0.0, 0x1.e776584824472p-124,
     0x1.42961b01648fap-749, 0.0, 0x1.4324713a93f68p-84, 0.0, 0.0,
     0x1.d555368184c72p-868, 0x1.36f49be2da27ep-738, 0.0, 0x1.fb55d1ef15f57p-324,
     0x1.6205179040b5ep-269, 0x1.388abd9754b28p-904, 0.0, 0.0, 0x1.e0f7ef74cd2f3p-407,
     0x1.a75047da20d9ap-489, 0.0, 0x1.fa56dabe8aa04p-738, 0x1.b3eed5a333621p-516,
     0x1.ac29cfd7c3d64p-249, 0x1.a30163afad6a1p-782, 0.0, 0x1.d25518b77f1dcp-1010,
     0.0, 0.0, 0x1.95172eb733774p-384, 0x1.31d9e042c4ad4p-100, 0.0, 0.0,
     0x1.d5aae13b4635ep-21, 0x1.ae9a4e6484dd9p-518, 0.0, 0.0, 0.0,
     0x1.c96b9a039c70cp-206, 0x1.48aeddcbb575cp-566, 0.0, 0x1.a6bc5d6de00f1p-500, 0.0,
     0x1.5f3eb90c67d8cp-657, 0.0, 0x1.7856b145c49fcp-166, 0x1.db93fd9526c51p-101,
     0x1.bf0fe7e6ca16ep-512, 0x1.b330a5b0d442p-164, 0x1.4ae3a97d1b409p-788, 0.0, 0.0,
     0.0, 0.0, 0x1.746b87565b58p-645, 0x1.7e96123af0d19p-645, 0x1.5ec4d41025cd3p-744,
     0x1.20b45b5754364p-260, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aa5d69a2b1fbdp-998,
     0.0, 0.0, 0.0, 0x1.702627176768p-19, 0x1.a1bba78c1eb28p-527, 0.0, 0.0,
     0x1.f353d1f56d699p-752, 0x1.be27be385eadp-670, 0.0, 0.0, 0x1.16b8d047c97fp-463,
     0.0, 0x1.3db4b0e28560dp-507, 0.0, 0.0, 0x1.b5cf4391ab0d8p-321,
     0x1.3c89250cf38b6p-948, 0x1.b45a89ef4fcbp-220, 0.0, 0x1.43e8fddd177f8p-255,
     0x1.54c0704b85c13p-124, 0x1.0cddab35216c6p-810, 0x1.d42aa8f3c7c03p-665,
     0x1.284f5d3c5c078p-828, 0.0, 0.0, 0.0, 0x1.5df2dcc1b0d9fp-649, 0.0, 0.0,
     0x1.a8600b88dde02p-640, 0.0, 0x1.deea8f33eb312p-661, 0.0, 0x1.d4bae9a97c148p-559,
     0x1.a52584e244872p-924, 0.0, 0x1.0a87aab340f3dp-252, 0.0, 0x1.bb80b7bb46377p-48,
     0.0, 0.0, 0x1.b54258a2632dp-890, 0.0, 0.0, 0x1.9457daf2e2996p-647,
     0x1.434774c9b471dp-147, 0x1.06d91879d4724p-499, 0x1.fcbe518a1d585p-341, 0.0,
     0x1.b4d0f169d437dp-154, 0.0, 0x1.53c72007f5818p-743, 0.0, 0x1.6ba1fd8e1d75cp-26,
     0.0, 0x1.8b2e5652fc0a5p-734, 0.0, 0x1.612bdb0cb0699p-883, 0x1.2d3e23d640eb2p-598,
     0.0, 0x1.2b7e6714fa715p-21, 0.0, 0x1.c58dd92196d6ap-932, 0x1.aba319d5a1e55p-913,
     0x1.c27fcc438cc8bp-708, 0.0, 0x1.dbe2b5a8929abp-253, 0x1.d3c2616652f58p-178, 0.0,
     0.0, 0x1.9e0d939abb0b8p-603, 0.0, 0.0, 0x1.569d7d776bbd8p-544, 0.0, 0.0, 0.0,
     0x1.69ac7c44a51b4p-202, 0.0, 0.0, 0.0, 0x1.ee5c6a59ca387p-920, 0.0, 0.0, 0.0,
     0.0, 0x1.35efee6ee7ec5p-932, 0x1.4940eccb6d171p-990, 0.0, 0x1.78a58c0c71c64p-281,
     0x1.5ed6700b0587fp-153, 0x1.0efecda15a8a1p-491, 0.0, 0.0, 0x1.398654dd81b15p-603,
     0.0, 0x1.e67949b173f38p-28, 0x1.833f0c62908bfp-677, 0.0, 0x1.203e22b80db04p-565,
     0.0, 0.0, 0x1.3d7db9593299p-763, 0.0, 0.0, 0x1.cbdc82ef8ee13p-989, 0.0,
     0x1.f9fd75060eae8p-630, 0x1.cbd429800dc04p-837, 0x1.9a6726328df92p-63,
     0x1.5c96bcc15e5eep-532, 0x1.4d9749ce6a9fdp-271, 0.0, 0x1.faa679347bf15p-915, 0.0,
     0.0, 0x1.ae17b72a14d04p-758, 0x1.ad1966d6b1b5bp-950, 0x1.9878ae4ada491p-913,
     0x1.5b927bc024b1fp-398, 0x1.6feb3fc5fa51ap-487, 0.0, 0.0, 0x1.2e14ec476429dp-801,
     0x1.c3a74e98e7a2p-321, 0x1.949a5a73bf937p-538, 0.0, 0x1.27a834d34ffd8p-410,
     0x1.c9b9fc426ac21p-701, 0x1.86b81de09d659p-474, 0x1.86f40f80ebb94p-800, 0.0,
     0x1.7243942c81a61p-191, 0x1.49df6763b1966p-826, 0x1.af2f7ff8c5f1ap-476, 0.0,
     0x1.8c714cee1483p-669, 0x1.5cb64fab4aca5p-622, 0x1.7bd7fa03cf748p-156,
     0x1.9e46e3dce3e7p-747, 0x1.7a4c4ab012709p-264, 0x1.dfb0436468f09p-113, 0.0,
     0x1.9b00a531fa538p-181, 0x1.0387e8f858b81p-676, 0.0, 0.0, 0.0, 0.0,
     0x1.1e592f1dccdeap-66, 0.0, 0.0, 0x1.18f14c13d3de6p-576, 0x1.66ee5356edfebp-502,
     0.0, 0.0, 0.0, 0.0, 0x1.f3dc12c858487p-566, 0x1.0bdb457769b34p-906, 0.0, 0.0,
     0.0, 0x1.d54f382a1fcd3p-845, 0.0, 0x1.31e084fe51ce2p-231, 0x1.ee3baeea1cec4p-42,
     0x1.8cbf71a3b17f4p-17, 0.0, 0x1.e93c0c41e41e7p-415, 0x1.cdb77e80a0c1dp-823,
     0x1.6e0c6691fc381p-254, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab42faa148ae2p-456,
     0x1.8c92cdcd8de22p-441, 0x1.e4ef7cc362216p-480, 0x1.c3bf000b2b923p-69,
     0x1.4cc610478d3bap-421, 0.0, 0x1.941626a0c527dp-892, 0x1.07cc02dceba5ap-104,
     0x1.6b8643906c3c7p-630, 0x1.5958457884042p-197, 0x1.a755ee2c65567p-821,
     0x1.b92edc120e1c4p-941, 0x1.fcdd63618f8c7p-475, 0.0, 0x1.9ad03d75b6304p-824,
     0x1.ca70b932962e5p-846, 0x1.dd3174a75c08ap-375, 0.0, 0.0, 0.0,
     0x1.4fd28ab177c6p-130, 0x1.06e319ea7f59dp-949, 0x1.39c5d41b0bebep-301, 0.0, 0.0,
     0.0, 0x1.71a67f72aa0fbp-464, 0x1.a9c7fc8cdc055p-989, 0x1.131ade47407d4p-880, 0.0,
     0.0, 0x1.9a9dfa41dffb8p-1016, 0.0, 0x1.f48b82f7a6fa7p-694,
     0x1.9a1f1bf6e071ep-1016, 0.0, 0x1.a5dc983632f85p-436, 0x1.6a686bc2b82a9p-85,
     0x1.a39e6c553252p-731, 0.0, 0.0, 0.0, 0x1.9e25b2ea2136p-630,
     0x1.848488dec1174p-956, 0.0, 0.0, 0x1.1d2ae017dbf89p-266, 0x1.9f39b7548f4dbp-635,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a28780349a9fp-754, 0x1.8e3d13dd636d1p-842,
     0x1.356d29aeeb105p-852, 0.0, 0x1.d8963805750d3p-932, 0x1.026735eb5de4bp-528,
     0x1.610ff44637623p-758, 0x1.0202d7e139ffbp-368, 0.0, 0.0, 0x1.9633f404f8fe8p-586,
     0x1.252f60118e431p-912, 0x1.b996069770fc3p-102, 0x1.a2824eb94492cp-887,
     0x1.533185eadb114p-400, 0x1.a47a9eb477c68p-85, 0x1.3a1099dcf317p-383,
     0x1.d6ef41bf1a963p-353, 0.0, 0x1.175b8a9418deap-486, 0x1.4cdbee28b58dap-968, 0.0,
     0x1.f08a9e8e2b27cp-596, 0x1.6ef862c2948fep-7, 0x1.f01bacab60864p-739,
     0x1.851f349e968c3p-693, 0x1.b57d7a01e6868p-1019, 0.0, 0.0, 0x1.a9778bb1b1e5p-620,
     0.0, 0.0, 0.0, 0x1.3eee85bd03922p-835, 0.0, 0.0, 0x1.eef610ae1f64p-241, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b8b3752fe5ff1p-337, 0x1.dc7c29650eac8p-370,
     0x1.93d0dc4bed56ep-68, 0x1.3e67fbc359c5ep-923, 0x1.e5dea6e444809p-32, 0.0,
     0x1.917c115ea76b6p-772, 0.0, 0.0, 0.0, 0x1.f8538646ae86p-192, 0.0, 0.0,
     0x1.99b5746f73cfcp-721, 0x1.aa18919734cfcp-264, 0x1.51e7cdf95765ep-868, 0.0, 0.0,
     0x1.cbda5008bc391p-118, 0x1.439e61b482e9ep-78, 0.0, 0x1.00e765b67b9e1p-749, 0.0,
     0x1.ea565ca256702p-351, 0.0, 0x1.cce3e25fcb8ffp-682, 0x1.76f6e27706e4dp-942, 0.0,
     0x1.0179c6161b6a4p-79, 0x1.0d0bdffb8e37ap-607, 0x1.55f0162d56595p-553, 0.0,
     0x1.78b558c402c07p-631, 0.0, 0x1.76744ab92404dp-315, 0x1.4a3248ef03ff7p-524,
     0x1.91ea672b415d5p-684, 0.0, 0.0, 0x1.4d6346d01d045p-825, 0.0,
     0x1.259b97ada862ep-601, 0.0, 0.0, 0.0, 0.0, 0x1.f764737964146p-952,
     0x1.42493ec4d2cf9p-298, 0x1.2ca89aa1f1c9cp-939, 0x1.71a4c48ff428dp-108, 0.0, 0.0,
     0.0, 0.0, 0x1.558dba202de43p-712, 0x1.0855f78fc8b08p-486, 0.0, 0.0, 0.0, 0.0,
     0x1.75b887be953b2p-785, 0x1.1619ede09377ep-949, 0x1.7f8f6135958c5p-146, 0.0, 0.0,
     0x1.b76ac69b42cc4p-676, 0x1.5fb26abf615f5p-3, 0x1.a17de03e93d01p-523, 0.0,
     0x1.cabdeb43f6f05p-629, 0.0, 0x1.793aeeac1a09cp-766, 0.0, 0x1.ea7a24eb4875p-177,
     0.0, 0.0, 0.0, 0x1.f88f849d0211fp-938, 0.0, 0.0, 0.0, 0.0,
     0x1.ba5ae604d0963p-757, 0.0, 0x1.e25725e374269p-992, 0.0, 0.0, 0.0,
     0x1.45a4f0121230dp-366, 0x1.2244dba2bf86dp-109, 0x1.5a2308e6d60aap-944, 0.0, 0.0,
     0x1.7e80e44714afp-210, 0x1.2df979f5df6afp-534, 0.0, 0.0, 0x1.dc2fe8356972ap-599,
     0x1.dead3a2e94e77p-712, 0x1.8579aede2c205p-71, 0.0, 0x1.622f91cbc3e21p-707,
     0x1.876faf5889f26p-929, 0x1.fd566ba68eb95p-733, 0.0, 0x1.44a8117bf9e15p-802,
     0x1.3c1bf9edfefa9p-145, 0.0, 0x1.890abb310cc32p-839, 0x1.1761daa07ef0ep-760, 0.0,
     0.0, 0.0, 0x1.22b7840c53366p-174, 0.0, 0x1.88f8d1476b106p-739,
     0x1.25f50c3b8727ep-182, 0.0, 0x1.f8c2ec884156p-638, 0.0, 0.0,
     0x1.276b1871f229fp-417, 0.0, 0x1.6af198be7e9b5p-582, 0x1.698aa3906d172p-374,
     0x1.3f1b6a30cad12p-969, 0x1.2fa57ee7d377ap-561, 0.0, 0.0, 0.0,
     0x1.5545322d787b4p-874, 0x1.3dc00b5f9c55p-359, 0.0, 0x1.83fbc171404d8p-742,
     0x1.b820b8b9d93b3p-381, 0x1.733c7f7d87d53p-593, 0x1.847e3d600cb8fp-390,
     0x1.a9b7c1c7ff9cep-664, 0.0, 0.0, 0x1.196177ee59116p-396, 0.0,
     0x1.84f272cf19b15p-166, 0.0, 0x1.b9b4b6685f058p-937, 0x1.8890d1579ffd6p-754,
     0x1.a09a9c587dc2p-876, 0.0, 0x1.c1401b818916p-607, 0x1.022252c2e7717p-753,
     0x1.0bdeed041e166p-789, 0.0, 0.0, 0x1.8e008bf4927c4p-758, 0x1.46a5f6ea5e146p-269,
     0.0, 0x1.b152d675a8a59p-262, 0.0, 0x1.f86dc3a8f1bb5p-138, 0.0,
     0x1.0449b18f90916p-104, 0x1.eae8e6ff4db41p-1021, 0x1.18e2dcf32db62p-728, 0.0,
     0.0, 0.0, 0.0, 0x1.b7f0a99706078p-959, 0.0, 0x1.a2b3bc50d8874p-790, 0.0,
     0x1.403ccc8c38f57p-563, 0.0, 0x1.280061af91a07p-761, 0x1.c26e05ddda21bp-738, 0.0,
     0x1.47f270a38306ep-415, 0.0, 0.0, 0.0, 0x1.8576810647d68p-950,
     0x1.4e40ea1a5b02fp-368, 0x1.7f91258c5b6fbp-549, 0.0, 0x1.a1a90fac4ebeep-990, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81f3a3dc62a12p-600, 0.0, 0x1.d38e674d0440ep-754,
     0x1.69c7317016fb5p-1007, 0.0, 0.0, 0x1.7e9ca6296cb9cp-240, 0.0, 0.0,
     0x1.00b2f92e11709p-797, 0x1.1a405770b5e6p-548, 0.0, 0x1.ea63112afefaep-1009, 0.0,
     0x1.3986ea5d463aap-737, 0x1.62d837273ceafp-896, 0x1.581752458d37dp-920,
     0x1.f0f3637804451p-600, 0x1.cb7e5bec0dddbp-202, 0x1.bb8c603ba6fa1p-129,
     0x1.cc2f351bed44cp-262, 0.0, 0x1.1212661dcc74fp-517, 0x1.04a992967dd08p-1016,
     0x1.b374f5733258p-487, 0x1.2db2455179d99p-32, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.537641167c543p-85, 0.0, 0x1.8f6e3c441c786p-470, 0.0, 0x1.4dc28ab059af9p-599,
     0.0, 0x1.50271e780e072p-867, 0.0, 0x1.c0cd4b1e0b837p-819, 0x1.c4baaf1d3cc5dp-896,
     0.0, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_tanhd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_tanhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
