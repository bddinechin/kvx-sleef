/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpd4_kvx.c --function Sleef_frfrexpd4_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.41daf241b233ap-455, 0.0, 0.0, 0x1.5f025e15b9c88p-328, 0.0,
     0x1.5c08f1f27cacfp-915, 0x1.a4c45e352609bp-368, 0x1.7021c3030403dp-177, 0.0,
     0x1.ab2a788a003aap-722, 0.0, 0x1.8b4bae79cac45p-234, 0.0, 0x1.1d22a74a070dfp-154,
     0x1.18ae159c5b4cfp-705, 0x1.9c6d49d6f479cp-300, 0x1.e5ceaf9a1f6adp-379, 0.0,
     0x1.e368e9cc3c195p-494, 0x1.27b456353bf6dp-822, 0x1.87b6fd5983f15p-925, 0.0,
     0x1.2f24da0d401dcp-470, 0.0, 0.0, 0x1.40f8f5fb0e539p-963, 0.0, 0.0, 0.0, 0.0,
     0x1.e5cdae8f2a08ap-890, 0x1.f11775c0447efp-468, 0x1.ec7ba00335fddp-888,
     0x1.767e1cdb580c6p-730, 0x1.161a2fa8218fcp-378, 0.0, 0x1.5e3adf0e5d3ap-517, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f5af64f9bd2c8p-18, 0.0, 0.0, 0.0, 0x1.3246b64ef6f52p-881,
     0.0, 0.0, 0.0, 0.0, 0x1.c493abf382aefp-948, 0.0, 0x1.95970d9d78b6ep-549,
     0x1.19a389c963bf4p-428, 0.0, 0x1.4da87609eac76p-287, 0x1.3adac6c4eba75p-781, 0.0,
     0x1.65f0cf5eb1423p-551, 0x1.b46b66eaf6f79p-802, 0x1.6894d749ba9c1p-858, 0.0,
     0x1.f5d6991e41f4fp-627, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51055e80656dcp-375, 0x1.f74a1cf196056p-863, 0.0, 0.0, 0.0,
     0x1.8e4fc707c8e67p-227, 0x1.ac65951c520c2p-989, 0x1.5892c870ead9dp-941,
     0x1.0f901e9891fefp-760, 0x1.7fb89cb956738p-776, 0.0, 0x1.7b034123e10fbp-702, 0.0,
     0.0, 0x1.a243fa51efcfbp-833, 0.0, 0.0, 0x1.f237b61ba83fcp-415,
     0x1.d5459ad73da1bp-472, 0x1.eca86633f17abp-203, 0.0, 0.0, 0.0,
     0x1.5a48d94bc05d2p-880, 0x1.9f1e9585917eep-957, 0.0, 0.0, 0x1.21667f1b3a0a8p-608,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de96a5be03fe1p-722, 0x1.9957cdd86d2d1p-231,
     0x1.e8494889f29fcp-563, 0x1.3444dbc6f496cp-28, 0.0, 0x1.14f06dff1ab17p-197,
     0x1.a0a7cc2861c99p-541, 0x1.b5cb4281bbd16p-805, 0x1.213942cee525ep-498,
     0x1.e11b3e4c1250fp-571, 0.0, 0x1.f24e83e37e9dcp-77, 0x1.ab024d4bab4a9p-24, 0.0,
     0x1.a275870492529p-18, 0x1.c7c3797487016p-394, 0.0, 0x1.e1e8deaf5b788p-440,
     0x1.afd181d04746cp-839, 0x1.c0890ff60a114p-89, 0.0, 0x1.c49580441a3cp-788,
     0x1.5aee436c957c6p-175, 0.0, 0x1.f87472799fb5fp-806, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.610217cfd38e4p-20, 0.0, 0.0, 0x1.9eb52ecc8b248p-700,
     0x1.be4bbfdecd1b6p-970, 0x1.0d112d1cb424fp-663, 0x1.1d3d5ea4346a4p-355, 0.0, 0.0,
     0.0, 0x1.c96300b971acfp-90, 0.0, 0x1.c36086bd4bee8p-481, 0x1.e353f42cb9effp-658,
     0x1.905dc26260679p-505, 0.0, 0.0, 0x1.eb2a6f4f7d04p-135, 0x1.07da9cc85e2aep-856,
     0x1.d28bb4f94664fp-855, 0.0, 0x1.9dfb634ddbd92p-402, 0.0, 0.0,
     0x1.25bcc6c73bbccp-1020, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b01eb3df5107p-760,
     0x1.4d46bab5cabecp-805, 0x1.db5826e8c0121p-111, 0x1.9ae03989ee07p-2,
     0x1.57ed19baba64dp-228, 0x1.9fd05534f54e8p-239, 0x1.a360bf4270e8fp-834,
     0x1.c2aa4ecdb7df6p-700, 0.0, 0x1.24c593303de3ap-142, 0.0, 0x1.7a9864dc29cf5p-184,
     0.0, 0.0, 0x1.4882080184d99p-545, 0x1.b8bfabe2db3bcp-695, 0x1.9603e632d2027p-371,
     0x1.442d36a124334p-947, 0x1.b1d47b4c2d0c4p-333, 0.0, 0x1.2f0d2b85ebc66p-804, 0.0,
     0.0, 0x1.7d71d4fa567bdp-476, 0.0, 0.0, 0x1.d9ee71a41ca11p-649,
     0x1.0ade336370ddbp-987, 0x1.e15e128b229f2p-572, 0.0, 0x1.346ee05ef73ebp-885,
     0x1.3d6b350376473p-161, 0.0, 0.0, 0.0, 0x1.fc3162b160f69p-191,
     0x1.cafe76b6bf426p-1018, 0.0, 0.0, 0x1.2527f9a5c1008p-1022, 0.0, 0.0,
     0x1.8f16003c18c64p-770, 0x1.666f3c0b7e58dp-787, 0x1.a72dd90ced691p-930, 0.0,
     0x1.89b6e05eb31b8p-478, 0x1.a4f6676ea5bp-784, 0.0, 0.0, 0.0, 0.0,
     0x1.abff095479484p-893, 0x1.cc11b587f954fp-479, 0x1.00f70173601c6p-340,
     0x1.9c69b0fb70843p-266, 0x1.000bf263adeb5p-147, 0x1.d96fce55ee36fp-546,
     0x1.aa156a062eb6fp-399, 0x1.49360c8b7d4cbp-209, 0x1.4110f2c945783p-1022,
     0x1.a7dca02b7209p-268, 0x1.4bc69ed4c9c58p-259, 0.0, 0x1.2f02f0dca43bdp-684,
     0x1.cb992167b8994p-577, 0x1.4227e87e2af7p-841, 0.0, 0.0, 0x1.149867ef3b441p-728,
     0.0, 0.0, 0x1.98a6195813335p-659, 0x1.728dcde939021p-661, 0.0, 0.0, 0.0,
     0x1.866d7c7b8885dp-1002, 0x1.43a525f2aadeap-124, 0.0, 0x1.d07de74ab09ap-205,
     0x1.b17b5f7551ab1p-525, 0.0, 0x1.acbd92b86bf5dp-945, 0x1.68e947aa9459fp-465, 0.0,
     0x1.0146e5afd437ap-953, 0x1.81a9f4910a02ap-776, 0x1.e628d247b999ap-261, 0.0, 0.0,
     0x1.a155b1bc42p-785, 0x1.6b37c0bf8cfb9p-397, 0x1.1739d9ea14d92p-695,
     0x1.17ecc4721b6a4p-704, 0.0, 0x1.f59ca9d533f9fp-104, 0x1.4b20099cbcc4bp-269,
     0x1.013aa6ce10491p-231, 0x1.0af459ddd5d84p-95, 0.0, 0x1.085ece4f71e99p-625,
     0x1.93188e7ef5cb5p-241, 0x1.a44efab0fbac8p-538, 0.0, 0x1.cd4cc1c3b2632p-644, 0.0,
     0x1.f9cd22ff4d8p-666, 0.0, 0x1.57dd93f04f246p-347, 0x1.da28d3b8c6de9p-776, 0.0,
     0x1.71064744e9749p-759, 0x1.234ee50aec8e8p-512, 0x1.eb8201e61dcc6p-215,
     0x1.4d90adcd13b42p-649, 0x1.a3f7437c227cap-838, 0.0, 0x1.d3bc11c696f6p-599,
     0x1.02ca17b5a3a51p-578, 0x1.73d5a62540116p-330, 0x1.280b3283a8364p-842,
     0x1.9edb745bf1fcap-492, 0x1.50aa548fd0298p-281, 0.0, 0x1.a4dfeff54b47bp-424,
     0x1.892ce66384027p-396, 0x1.a4c0d15c498e8p-1000, 0.0, 0.0,
     0x1.b2aa0e8ef4013p-1000, 0x1.71b7bee19c20fp-371, 0.0, 0x1.48c973ed7a2dap-721,
     0.0, 0x1.2b14eee462309p-988, 0x1.b95ce1869b0acp-1012, 0.0,
     0x1.2e7ea15b0ec9ap-364, 0x1.355ab0bc070f9p-517, 0.0, 0.0, 0x1.98577adb9f4b9p-97,
     0x1.e9ca58768de5cp-487, 0x1.e7ce4fdf5d4a4p-564, 0.0, 0.0, 0.0, 0.0,
     0x1.8c7064d0980a8p-233, 0.0, 0x1.9e6e93c72e734p-539, 0x1.62968997307b1p-93,
     0x1.e62b5078ae374p-627, 0x1.d17f850d26033p-826, 0x1.906048d1536e7p-819, 0.0, 0.0,
     0x1.1c21e548b91c5p-103, 0.0, 0.0, 0x1.68d10ffdb9101p-996, 0.0,
     0x1.0217e94d1abc5p-522, 0.0, 0x1.a4184e2aef7c7p-833, 0.0, 0x1.c23546e70e73ap-110,
     0.0, 0x1.e716b625f1964p-580, 0x1.ea5cf5fc54ee8p-672, 0x1.02bfa249d72e8p-924,
     0x1.74269d5c9c2dp-761, 0x1.d428b99db9ed3p-891, 0.0, 0x1.6e0d3fd594fe4p-658, 0.0,
     0.0, 0.0, 0x1.4f402aa54157dp-1020, 0x1.6e4044d586f15p-723, 0.0, 0.0, 0.0,
     0x1.eff569570e4afp-798, 0x1.13fd7e5e8bdcbp-87, 0x1.79ee3a2ac0532p-224, 0.0, 0.0,
     0x1.85d797850f4bap-437, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fddf431384b71p-334, 0.0, 0.0, 0.0, 0x1.aa9451ff49bffp-170,
     0x1.8518acd2a3229p-90, 0.0, 0.0, 0x1.ec8219cc75d2ep-739, 0.0, 0.0, 0.0, 0.0,
     0x1.8d4a017e1ec1fp-619, 0.0, 0.0, 0.0, 0x1.de6911cf8788p-906,
     0x1.2f358b1b5e37fp-101, 0.0, 0x1.e9b0420d85654p-31, 0x1.ad29cf24f11cfp-57,
     0x1.0101cf955849fp-830, 0x1.a933612d61592p-402, 0x1.976bd864f91cep-788, 0.0,
     0x1.73faae3b1354bp-1020, 0.0, 0x1.2b3dfe6817166p-73, 0x1.6e40de3ac569bp-463,
     0x1.35989b4526cbap-292, 0.0, 0x1.7288826a7c962p-180, 0x1.ddf16d4f787cbp-668, 0.0,
     0x1.71727a58bc2cbp-648, 0x1.167389cbc25a8p-259, 0x1.39e2cb00e2b71p-517, 0.0, 0.0,
     0x1.b453b4ebae466p-596, 0.0, 0x1.c52bb3b349cb2p-251, 0.0, 0x1.39ec850f57786p-205,
     0x1.1308e62b79d48p-98, 0.0, 0x1.d87a92a8d4c18p-205, 0.0, 0x1.fe619ca4ef50ap-916,
     0.0, 0.0, 0x1.41db24aff3078p-16, 0.0, 0x1.fd5d79bf2d448p-469,
     0x1.29846fb92a955p-651, 0x1.0f7c333150062p-700, 0x1.075df117ac377p-220,
     0x1.3390df6720c2p-320, 0x1.d96bd202fa1bdp-363, 0x1.234c4773f4c61p-811,
     0x1.2a7fdb57107fcp-508, 0.0, 0x1.00cd5be05ceccp-323, 0x1.5ad6b19a52f29p-716, 0.0,
     0x1.f20532638e6e1p-868, 0.0, 0x1.8223249bedf02p-102, 0x1.2262237931fbcp-190, 0.0,
     0x1.e9381012b9d3cp-569, 0.0, 0.0, 0x1.3e6fc210ab189p-823, 0x1.296ddd6de5669p-389,
     0.0, 0x1.3a93d99bc4bf4p-227, 0.0, 0.0, 0x1.aa77b0e3fa374p-531, 0.0, 0.0, 0.0,
     0x1.2a83769fde69ap-888, 0x1.6789e7ac2fb25p-523, 0.0, 0.0, 0x1.5b627d0613a97p-372,
     0x1.ad88cdf7c3eb6p-30, 0x1.2d8e061334033p-259, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b69d42f763d02p-669, 0.0, 0.0, 0x1.916bd13d9d591p-787, 0.0,
     0x1.5a8015067f26ep-562, 0x1.99e0c16dbd65dp-37, 0.0, 0x1.f7b7405044acfp-662, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a257d1ed1648fp-549,
     0x1.17fee0c68d406p-108, 0.0, 0x1.daa002205e013p-824, 0.0, 0.0,
     0x1.705739e33441ep-12, 0x1.253fb7e2997dap-965, 0x1.c2d171cd0b888p-311,
     0x1.965b12ae50c62p-632, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba7ec8d4b988ep-623, 0.0, 0.0, 0x1.57560c340d45cp-645, 0x1.191d8db5850ecp-582,
     0x1.1264c34981c1bp-162, 0x1.0a37b4070e4c5p-429, 0.0, 0x1.0889ba6115889p-483,
     0x1.13c6c6cf92f41p-444, 0.0, 0.0, 0x1.c87d3c04ace17p-671, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.23e4b55390bbep-292, 0x1.a84549271bfabp-498, 0.0,
     0x1.d11fb0840a5b8p-44, 0x1.b276a4bccfeccp-498, 0x1.3ce6c5aeb9739p-1019, 0.0,
     0x1.8f9a07cf85ae9p-668, 0x1.e00a9fc085c24p-500, 0x1.f4d78abd7d41ep-597,
     0x1.7400659e0613fp-94, 0.0, 0.0, 0x1.6627a91aa141dp-345, 0.0, 0.0,
     0x1.9b02e059d54e7p-867, 0x1.9e08dd7632482p-1006, 0x1.4dadbf467577dp-989, 0.0,
     0x1.5055031dacaf4p-323, 0x1.48d89ddef9a9bp-988, 0x1.f63e93abad2dap-448,
     0x1.3debd2d1d464p-879, 0x1.f27878a0d1093p-203, 0.0, 0x1.c75a026486243p-353, 0.0,
     0.0, 0x1.ea7317f573616p-149, 0x1.299785aea54e9p-309, 0x1.e3922ad86f1f5p-67, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90ea75a379febp-765, 0x1.c28fa202d8f25p-214, 0.0,
     0.0, 0x1.8629f417d3d86p-915, 0x1.736e0dfce1ef7p-32, 0.0, 0x1.1f1c3a117502fp-577,
     0x1.e1b1d775d0e9cp-107, 0.0, 0x1.0c020cb2d6e3ap-603, 0.0, 0x1.bf6151b6e6472p-151,
     0.0, 0.0, 0x1.c2d59f68b556ep-725, 0x1.bf482b09926a3p-759, 0.0,
     0x1.67c4d794cd93fp-105, 0x1.64144fc90ee38p-247, 0.0, 0x1.85925ae8504c4p-242,
     0x1.ed5fda5ddc782p-94, 0.0, 0x1.3251a98f69751p-13, 0x1.e83c4563a42dcp-140, 0.0,
     0x1.df4f2ccd6f441p-425, 0x1.be463de90fab8p-742, 0.0, 0x1.8eee7e567882bp-591, 0.0,
     0.0, 0.0, 0x1.f2cc81e744e08p-989, 0x1.9116b410575e8p-906, 0x1.d34db28234d75p-209,
     0x1.9c2305bc334afp-506, 0.0, 0x1.05f3a0d9d3334p-395, 0x1.af122d77e881cp-299,
     0x1.d2234f546a744p-123, 0x1.cc7732d4e980bp-68, 0.0, 0x1.0286f39db9d84p-598, 0.0,
     0.0, 0x1.71df9fe73b8a4p-311, 0x1.5a48faff3473cp-200, 0x1.9986e52d0349cp-309, 0.0,
     0.0, 0x1.8640ce7e36089p-783, 0x1.a1738a06ca3f8p-571, 0.0, 0x1.a7feb86a8abbbp-606,
     0.0, 0x1.15509b86c8423p-60, 0.0, 0x1.6d778bb2e0f8ep-467, 0x1.1830095e89ab3p-583,
     0x1.cfa39cc7abfb9p-472, 0x1.2e4c9ec1bc911p-503, 0.0, 0x1.75c6050ecbcb2p-95,
     0x1.a3705aa407efep-36, 0x1.7beed974ed361p-236, 0x1.25446e8049e36p-236, 0.0, 0.0,
     0x1.941b741e57af9p-302, 0.0, 0x1.5c941fc4c0f94p-393, 0x1.45fc14ce6d5ddp-894, 0.0,
     0.0, 0.0, 0x1.e7b617b595d68p-742, 0.0, 0x1.628405554be1fp-580, 0.0, 0.0, 0.0,
     0x1.790cc7ba4de3cp-629, 0x1.25cbef8a02f92p-694, 0.0, 0x1.eade81fea9733p-132,
     0x1.b28bc49f1a002p-901, 0x1.7348768fed0c7p-4, 0x1.1039da5ecb6dcp-691,
     0x1.f5aa68ca62e67p-11, 0x1.237251947dc3p-142, 0.0, 0x1.1fad6541e0fd4p-637, 0.0,
     0.0, 0x1.8a1760099f778p-91, 0.0, 0x1.07a2b4d42044p-103, 0.0,
     0x1.a7eb4b62dda45p-938, 0x1.9d058452c3df5p-865, 0x1.e5893faac4542p-377,
     0x1.b776311a1311fp-681, 0.0, 0.0, 0x1.1e3e628c1d737p-879, 0.0,
     0x1.bb9c7224d05dbp-677, 0x1.76252414d4e08p-866, 0.0, 0.0, 0.0, 0.0,
     0x1.5217efca468b2p-576, 0.0, 0x1.f97cbf91a19f8p-145, 0x1.6691ae0e62da2p-229,
     0x1.a4e5ccd78f09bp-393, 0.0, 0x1.0f35d5552d75dp-829, 0.0, 0x1.711be4d24b202p-445,
     0.0, 0.0, 0.0, 0.0, 0x1.5bfa8d4721c6fp-431, 0x1.0b1891c161fdap-1003,
     0x1.e4caf09b91bcbp-679, 0.0, 0x1.268ff3456c6bdp-767, 0x1.0fd262853832cp-116,
     0x1.1e4b0f5f61503p-477, 0x1.dc1d76e664abcp-182, 0.0, 0x1.0427b27e7c58fp-330,
     0x1.ba0ebeb310e6ep-164, 0.0, 0x1.66299d39a8c6p-495, 0.0, 0.0,
     0x1.c3f9cc09da5a5p-999, 0.0, 0x1.637aa1d8d7b4ap-576, 0.0, 0.0,
     0x1.b737425c16488p-358, 0.0, 0x1.cf99646013772p-308, 0.0, 0x1.ab5f9bbd2bca3p-825,
     0.0, 0.0, 0x1.6a687df3c3ec8p-886, 0x1.c6f4b41e3bd27p-71, 0x1.c154080ec1e5dp-866,
     0.0, 0x1.afab390d4ac8dp-833, 0x1.c29e1d409d10bp-20, 0x1.91782ce603939p-450,
     0x1.136c9b9b61fcep-425, 0.0, 0.0, 0x1.75c20efdc0518p-576, 0x1.227cb35afca78p-245,
     0x1.69170ca946c51p-721, 0x1.a0659af696592p-620, 0x1.35af53292f362p-436, 0.0, 0.0,
     0x1.061b8c72f23e6p-396, 0.0, 0x1.b8c97ad0f6389p-689, 0.0, 0x1.7fb4e86f736b5p-522,
     0.0, 0.0, 0.0, 0x1.41f5018d36224p-411, 0.0, 0x1.aa1e675df52b5p-150, 0.0,
     0x1.ce68394fc4c6bp-131, 0x1.d5456bf62af96p-301, 0.0, 0.0, 0x1.e94ded243cf58p-481,
     0.0, 0x1.6ffc4734b9e04p-918, 0.0, 0.0, 0x1.60b8e2ad55ef9p-744, 0.0,
     0x1.d0c160041b2a1p-934, 0x1.3fbe0d934e981p-653, 0x1.513f6bc0d68e4p-241,
     0x1.af34520d0cb3cp-386, 0x1.263f63d31d0d4p-947, 0.0, 0x1.2a7686740a66bp-362,
     0x1.388cd4cad510cp-866, 0x1.ce30af4c91dadp-560, 0.0, 0.0, 0x1.9943b1dea734cp-597,
     0.0, 0x1.196692ce5ce4ep-826, 0.0, 0.0, 0x1.4453dc01982fp-324, 0.0, 0.0,
     0x1.18e3663adf5aep-886, 0.0, 0.0, 0x1.cdc1713680688p-377, 0.0, 0.0, 0.0,
     0x1.53c75b3da02c7p-524, 0.0, 0x1.8bc50a7f014cep-61, 0.0, 0x1.32db007b71cdep-326,
     0.0, 0.0, 0.0, 0x1.1dd6c1704fb49p-115, 0.0, 0x1.263dbbe54b18ap-542,
     0x1.309d651f23e19p-244, 0.0, 0.0, 0x1.8c87a0644831ap-901, 0.0,
     0x1.f14f31883e20bp-927, 0.0, 0.0, 0x1.4e4e6fb68067dp-335, 0.0, 0.0,
     0x1.57b797f7228d1p-590, 0.0, 0.0, 0x1.056128d476be6p-345, 0x1.46836b0556633p-753,
     0.0, 0x1.3d35597202cedp-968, 0x1.d13ef1093a7aep-948, 0x1.0bb7e0d696cb7p-825,
     0x1.ac61d754fcabap-173, 0x1.919ae271f87a1p-613, 0.0, 0.0, 0x1.f5262722535bbp-207,
     0x1.7b762b3985c98p-49, 0x1.294be0cde6b48p-740, 0x1.d1beeb0f14b55p-893,
     0x1.7194bf8a370afp-64, 0x1.cae89fb9564d5p-880, 0x1.223ef806ec0a4p-745, 0.0,
     0x1.62e36e99c2282p-668, 0x1.85f3bce331762p-669, 0.0, 0.0, 0x1.b36bc891dc94cp-940,
     0.0, 0x1.bf231efc749bep-142, 0.0, 0x1.36bbce665dd73p-647, 0.0,
     0x1.365e750434c7fp-689, 0.0, 0.0, 0x1.769ef7f5dda9p-460, 0x1.7b26da5ed4bdep-703,
     0.0, 0.0, 0.0, 0x1.e3c0b1cd9d551p-644, 0x1.ff2d87ba25166p-969, 0.0,
     0x1.c48ec593ad618p-721, 0x1.957e620cc0b6fp-491, 0x1.98fe2d9b12474p-456,
     0x1.4aa4839d86c17p-311, 0.0, 0x1.182b73d2b519fp-504, 0x1.046eb5d5c843bp-807,
     0x1.7869b4bdedb57p-323, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.def6d4c59b3bep-168, 0.0, 0x1.97ccda47dd133p-627, 0x1.0b0833c2f1bep-539,
     0x1.c08776bef33f1p-130, 0.0, 0.0, 0.0, 0x1.4bce4c8189a54p-353, 0.0, 0.0,
     0x1.3a1951c52f20dp-366, 0x1.d127783db853p-78, 0x1.d05ef6a270242p-241, 0.0,
     0x1.d0d6cdbe7267p-54, 0.0, 0x1.38a8eac484546p-608, 0x1.08786645381b5p-521,
     0x1.41ead022d4723p-11, 0.0, 0x1.e0ed9a7893715p-869, 0.0, 0.0, 0.0,
     0x1.f9659c1828468p-578, 0x1.9c4599136df64p-714, 0.0, 0.0, 0x1.c60c573c9ec8dp-923,
     0.0, 0x1.2e23e16d1ac51p-670, 0.0, 0.0, 0.0, 0.0, 0x1.9c08b77706e03p-156,
     0x1.1630c1798c59ep-549, 0.0, 0x1.17204a32d6efp-19, 0.0, 0.0, 0.0,
     0x1.e499f4fedb5d5p-662, 0.0, 0x1.15122578f8c5fp-822, 0.0, 0x1.6a51e03893537p-475,
     0x1.ff9868b9f910cp-978, 0x1.b46017631d427p-75, 0.0, 0.0, 0x1.55f3b29a21e0ap-694,
     0.0, 0.0, 0.0, 0.0, 0x1.809d3ef14611ep-538, 0x1.7626b55e1f202p-312, 0.0,
     0x1.3a0ab361cd97ep-838, 0.0, 0.0, 0.0, 0x1.53bfc7452bc42p-948, 0.0,
     0x1.47bd8fb032e52p-875, 0x1.89ffb036ee446p-12, 0.0, 0x1.c45f50f84c65ep-602, 0.0,
     0x1.cde78d95e0ffap-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c2a2c686d7b2p-463,
     0x1.8ac9c932449b4p-440, 0.0, 0x1.bdd686cc0c508p-772, 0x1.9d7636e0ef3fbp-150, 0.0,
     0.0, 0x1.72d1ed704cf98p-542, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.704ee222def39p-926,
     0.0, 0x1.21bcb03923fe7p-250, 0.0, 0.0, 0.0, 0x1.a9c5c488732e5p-501, 0.0, 0.0,
     0.0, 0x1.c587476d2cf8cp-58, 0x1.30d262554b66ap-168, 0.0, 0.0,
     0x1.a312b0f4a5e2fp-509, 0x1.bb1ad6baaadbcp-565, 0x1.9ffb63676f7bdp-561, 0.0,
     0x1.c046b2733a0e3p-1006, 0x1.449559de90dc1p-485, 0.0, 0x1.35e71ba64758fp-415,
     0.0, 0.0, 0x1.4aa63e28c7f48p-372, 0.0, 0.0, 0.0, 0x1.a8e61178b9e87p-18,
     0x1.0e2f4488921a9p-602, 0x1.dc3a0e22dffd5p-125, 0x1.5cc2d3a99ab6p-496, 0.0,
     0x1.551b65137c57ap-345, 0x1.61b17a31f98b7p-725, 0.0, 0.0, 0.0, 0.0,
     0x1.16779fc305345p-361, 0x1.b6b61150f684dp-454, 0.0, 0x1.47fd653094845p-110,
     0x1.aca01cfce36d1p-505, 0.0, 0x1.5cb4a371dc3abp-245, 0.0, 0.0,
     0x1.3a6821c7d3b4p-865, 0.0, 0x1.cc357e97ea63p-99, 0.0, 0.0,
     0x1.8c827216876bp-886, 0x1.a88060c0a8376p-270, 0x1.905636dc57fa1p-600, 0.0,
     0x1.d214e59313e08p-906
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
            tmp1 = Sleef_frfrexpd4_kvx(tmp0);
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
    printf("Sleef_frfrexpd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_frfrexpd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
