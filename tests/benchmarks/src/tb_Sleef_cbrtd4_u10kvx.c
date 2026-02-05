/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd4_u10kvx.c --function Sleef_cbrtd4_u10kvx \
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
     0x1.7a1579a17472fp-329, 0.0, 0.0, 0x1.c40360ef40893p-143,
     0x1.1a205bc8670c4p-535, 0x1.b1814cf4acd74p-521, 0.0, 0x1.b8787263bf8c7p-870, 0.0,
     0x1.cbc80a7bdf524p-810, 0x1.1c90740009904p-301, 0.0, 0.0, 0x1.2dde8a4543ccap-518,
     0.0, 0.0, 0.0, 0.0, 0x1.aabd31c35059cp-77, 0x1.e22a8c546cde6p-704, 0.0,
     0x1.504b3abaf25d6p-306, 0.0, 0.0, 0.0, 0x1.d2604d65d3702p-215,
     0x1.423d62cbba1b1p-315, 0x1.4419a858484dcp-157, 0x1.7ac5b748178c4p-199,
     0x1.8532f4ca7002p-624, 0.0, 0.0, 0x1.5a4de2e474ba5p-817, 0x1.703ccb4702843p-709,
     0x1.6a2bfc328fde1p-1006, 0x1.45c0f8127c068p-567, 0.0, 0x1.f3990486f2713p-602,
     0x1.637a53f5766bfp-532, 0x1.0f0e8eb29695dp-137, 0x1.3faa4bdc5bb8fp-410, 0.0,
     0x1.85f30b25f6b5ap-103, 0.0, 0x1.b8dfe41f35e15p-49, 0x1.0703ee60ea5f3p-361, 0.0,
     0x1.0f6dd0d14b197p-174, 0.0, 0x1.117e49a83bc23p-252, 0.0, 0x1.a3493a72db05fp-251,
     0x1.e6c7c4e2c704bp-924, 0x1.dba013188c8cp-278, 0x1.3a6d599925ec8p-906, 0.0, 0.0,
     0x1.dc81df2a8e87ep-13, 0.0, 0.0, 0x1.3e8bfb24fc098p-254, 0x1.3f0018dfabafp-359,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.950d8583fa421p-202, 0.0, 0.0, 0.0,
     0x1.685fe5ad75f4ep-920, 0x1.7598a88ef1d25p-862, 0x1.f8134a568381cp-635, 0.0,
     0x1.58d68b3fea9a6p-122, 0.0, 0x1.29d5f0b4b23aap-799, 0x1.84f901699f222p-596,
     0x1.c797559ad643ap-884, 0.0, 0x1.db81109bccd37p-913, 0x1.a813e6a721fd2p-151, 0.0,
     0x1.365291f4aee7cp-35, 0x1.0324bb7a3e555p-591, 0x1.13cc1ebc86a49p-362,
     0x1.3f11e95253795p-886, 0.0, 0.0, 0.0, 0.0, 0x1.957ebfe1b22f4p-687, 0.0, 0.0,
     0x1.1b53be11a0ba1p-249, 0x1.ce109905fc0eap-347, 0.0, 0.0, 0x1.28c88b906250ap-917,
     0.0, 0.0, 0.0, 0.0, 0x1.3b8bbf40596b2p-659, 0.0, 0x1.f3fb1a029b7fep-615, 0.0,
     0.0, 0.0, 0.0, 0x1.a69d18d653514p-671, 0x1.504285a70ba82p-430,
     0x1.5878521b5f1b2p-165, 0.0, 0x1.60d083ae9b36bp-985, 0.0, 0x1.1f8c72593921dp-68,
     0.0, 0.0, 0x1.f63c3c8d798d6p-270, 0x1.672da6116bfa6p-996, 0x1.41ce0b03f30fcp-894,
     0x1.9b9d897e77534p-453, 0x1.65a3f5d457ad6p-210, 0.0, 0.0, 0.0, 0.0,
     0x1.31038a6f098e6p-957, 0.0, 0x1.7fa070cc4ff28p-504, 0x1.f9031f68be0b2p-620, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.70f784f8895a3p-268, 0.0, 0.0,
     0x1.e024f97422a0ep-289, 0.0, 0.0, 0x1.955fa38ae3a11p-289, 0.0, 0.0,
     0x1.b42a6ecae2918p-830, 0x1.3f57ad234b653p-19, 0.0, 0x1.157a327cfbbebp-293,
     0x1.e4ac28201cdb5p-130, 0.0, 0x1.b77d9c8b84ccbp-930, 0.0, 0.0, 0.0, 0.0,
     0x1.db0d0530f5ceap-632, 0.0, 0x1.7bfbe20e54b19p-243, 0x1.6a326b7f5a1b2p-133,
     0x1.3e1d0b79a29ep-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c6d3a0dbf94bp-886,
     0x1.846112a25f44ap-949, 0.0, 0x1.75a718a4d193fp-311, 0x1.68f13ba2fce15p-161,
     0x1.c0a0ba5a72423p-482, 0.0, 0x1.220cf04441ef7p-17, 0x1.c4c3ba9fa8277p-279,
     0x1.b86c7422273b1p-397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7a81cbaeafc5p-665, 0.0,
     0.0, 0x1.6413de1db4d8fp-422, 0.0, 0.0, 0.0, 0x1.995f4fc20e634p-928,
     0x1.566eecbcf7cf1p-518, 0.0, 0x1.556d5e321b122p-1020, 0.0,
     0x1.1e956ec58a4bdp-163, 0x1.67fa7b421d51ap-225, 0x1.cad408fd5a0d7p-203, 0.0, 0.0,
     0.0, 0x1.02a7cc30e453p-592, 0.0, 0x1.85934370841dcp-232, 0x1.7dc304c18369bp-73,
     0x1.0ce1cbfdf2e8p-359, 0x1.98113ec471f4ap-635, 0.0, 0.0, 0.0,
     0x1.31918683b1fa5p-958, 0.0, 0x1.d34d2668e3746p-387, 0x1.f6d2dd23db28bp-380,
     0x1.b5f97bcff9875p-611, 0x1.ec39457d336f3p-825, 0.0, 0.0, 0.0,
     0x1.e35242eb825b3p-679, 0.0, 0.0, 0.0, 0.0, 0x1.5f1dfd04b9c7ap-495,
     0x1.edb78a6cc58d9p-57, 0.0, 0.0, 0.0, 0x1.ff466f3bb2795p-547,
     0x1.57f8a642ab417p-983, 0x1.6d31588ed3efep-444, 0x1.2fd315b4c081ep-420, 0.0, 0.0,
     0.0, 0x1.db4b9b21aa941p-453, 0.0, 0.0, 0.0, 0x1.0a1467b752965p-359, 0.0,
     0x1.33000b74ffeebp-804, 0x1.f95f382a9533bp-916, 0x1.0b23c79625f8fp-327,
     0x1.ee84514bb6f93p-121, 0x1.65e4a80f645edp-123, 0x1.ee0644786458ep-741, 0.0, 0.0,
     0x1.9af61b3b7bbap-130, 0.0, 0.0, 0.0, 0x1.8f152639dfa5p-767, 0.0,
     0x1.17c6bfa7cee42p-857, 0.0, 0.0, 0.0, 0x1.e7c352c40d6b6p-933,
     0x1.6f195393234d6p-578, 0x1.849ff5196242bp-550, 0x1.70236fea6ff56p-349, 0.0,
     0x1.5998886d5e022p-34, 0.0, 0.0, 0.0, 0x1.3b70b36fcd6b9p-856, 0.0,
     0x1.51d91dd1eb40ep-114, 0.0, 0x1.ca16aeedb242cp-869, 0x1.01543e12b5743p-810, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.66ff3df2da6aap-19, 0x1.110bc31bc41bap-315,
     0x1.c0d023cefb4b9p-453, 0.0, 0.0, 0.0, 0.0, 0x1.e117cd9da65abp-97, 0.0,
     0x1.ddf8078ae65a9p-976, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e3c2fc7dcc812p-182,
     0x1.a8bb565952812p-937, 0x1.3a0a9afd5bfffp-632, 0.0, 0x1.35aa08d21426ap-9, 0.0,
     0x1.bbf1fea0508bp-534, 0x1.414bbf8db25d9p-958, 0.0, 0.0, 0x1.4b91ed7bf3853p-812,
     0x1.79c9177cf23c4p-35, 0.0, 0.0, 0.0, 0.0, 0x1.66e44dd810778p-946,
     0x1.c57b664a92019p-935, 0x1.a54c91dbe6897p-70, 0x1.4a85e9b0db89p-368,
     0x1.ba9e91bae0fc9p-827, 0.0, 0.0, 0.0, 0x1.0fa0ae0b6541p-255, 0.0,
     0x1.7edc64acf5bd8p-566, 0.0, 0.0, 0x1.921609aa5a835p-722, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.683a238d24b85p-787, 0x1.62cb57bc19903p-67,
     0x1.7aec8a40b3257p-846, 0.0, 0x1.69ea52c66b105p-957, 0.0, 0x1.3b25f9b15331ep-794,
     0x1.88b48f632523ap-279, 0.0, 0.0, 0x1.c52df48f2edc2p-354, 0.0,
     0x1.b9e7fe92ea007p-810, 0.0, 0x1.3960c7ff4d596p-329, 0x1.adbc6011ada19p-814, 0.0,
     0x1.5e53c9962c681p-454, 0x1.57406f1fdaf18p-587, 0x1.82c3e708c7ad8p-712,
     0x1.64756aabb971p-432, 0.0, 0.0, 0x1.d26f682cbbbbep-702, 0.0,
     0x1.616fa0b27e078p-6, 0x1.bcf0b20483691p-548, 0x1.f77aa4011ac41p-938,
     0x1.04b35aecd04ecp-464, 0x1.3dc88b3535c8p-351, 0x1.07123c5e84509p-968,
     0x1.26092c5af5fd6p-333, 0x1.d7a03b15bae36p-128, 0x1.7ad14fa670491p-53,
     0x1.40b5317a95adep-269, 0x1.f4ddbf130fca5p-292, 0.0, 0.0, 0x1.ce9d5d6d1c232p-668,
     0x1.53f1df785df63p-957, 0.0, 0.0, 0x1.0792b34f15cdep-647, 0.0, 0.0,
     0x1.24848cb827406p-871, 0.0, 0x1.70e8fcc4087e1p-591, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2816ef1fbc27fp-926, 0x1.21e09b7ea9d8cp-449, 0.0, 0.0,
     0x1.04e5ea028d7eep-894, 0.0, 0.0, 0x1.c8ca19daa01a1p-62, 0.0, 0.0, 0.0,
     0x1.c64032b3bf59ap-65, 0x1.d0cb168e72cc8p-424, 0x1.44f4ec1e3c2b7p-557,
     0x1.4bc34744a8328p-896, 0x1.496200880c785p-416, 0x1.c5a1cc44922f9p-649,
     0x1.9b9a8f5f825dap-259, 0x1.bf100a945786bp-160, 0.0, 0x1.e5cea462bde23p-35, 0.0,
     0x1.575b37b3edfp-513, 0x1.2510d89f38a39p-25, 0.0, 0x1.6c6c99a311676p-718,
     0x1.d6d6112078162p-778, 0x1.8fc5b75466be9p-740, 0.0, 0.0, 0x1.1b444485d8762p-624,
     0x1.7e136b323a298p-323, 0x1.55b79c35229eep-119, 0x1.816ae148622a4p-556,
     0x1.41d916a68a304p-939, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.669f7616e2ab3p-547, 0.0,
     0.0, 0x1.9fb1506d07c06p-330, 0x1.73ed8b03eba4p-1021, 0.0, 0x1.84cf2ffa4f253p-191,
     0x1.bf20e0e67608bp-27, 0.0, 0x1.ed26133f3275ep-112, 0.0, 0.0, 0.0,
     0x1.23535a6845f75p-154, 0.0, 0x1.c74d8bf525e1ep-940, 0x1.c8eaba0a59ce1p-714,
     0x1.2b8eb0fbf9e59p-899, 0x1.a89bea9847de3p-562, 0x1.3bd73d3b24f42p-445,
     0x1.9ac69fe297f11p-976, 0.0, 0.0, 0.0, 0.0, 0x1.42f045f116e05p-217,
     0x1.6f2f4251d253ap-560, 0.0, 0.0, 0x1.3b6f98cdec106p-271, 0.0, 0.0,
     0x1.44f6949621b46p-255, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57e95e81974b3p-708,
     0x1.760a1c0f60ce4p-743, 0x1.3d61e942d2e3fp-11, 0.0, 0x1.8670e22a90c23p-868, 0.0,
     0x1.94c0966076294p-798, 0.0, 0x1.ce58dd6ccbceep-94, 0.0, 0.0,
     0x1.a523c6ad33f32p-197, 0x1.bba1d78aaf8ep-628, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c944d11e79c9p-610, 0.0, 0x1.d87faf0d8a58cp-828, 0x1.3456e97d79f04p-363, 0.0,
     0x1.211b405b41f7ap-832, 0.0, 0.0, 0x1.8d340ebab7effp-8, 0x1.e1b9d394c8d3cp-758,
     0x1.ecef8deaf0e37p-884, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bba8ac5d80368p-398,
     0x1.d67fad3953dbep-260, 0x1.ffedb1cc34097p-466, 0.0, 0x1.70a45ea8c2445p-20,
     0x1.e134fdf323d25p-876, 0x1.765f116b7836ap-451, 0x1.0ae5c446a2d18p-253, 0.0, 0.0,
     0.0, 0x1.9a48516b81411p-30, 0x1.ecd1ffce4fc24p-883, 0x1.d8f1cd4ce374ap-450,
     0x1.9b676dcc8b901p-820, 0x1.43965fea076eep-294, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a155b417bec82p-738, 0.0, 0.0, 0.0, 0.0, 0x1.eb2016fbede59p-583, 0.0, 0.0,
     0x1.6164406aff557p-173, 0x1.8d5d0ed6afd94p-253, 0x1.23db54d7f7193p-381, 0.0,
     0x1.1fd236488f7a6p-692, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d794ff7a9567ep-659,
     0x1.2496f82eebf03p-749, 0.0, 0x1.6d6cda0aaa8ebp-429, 0x1.d804fab076c2dp-224, 0.0,
     0x1.85ce1c749cdafp-922, 0.0, 0.0, 0.0, 0x1.8b817ff5f33b8p-30,
     0x1.21922ff165af9p-770, 0x1.4ae7eb2b95a3cp-240, 0x1.44f951fb332aap-296, 0.0,
     0x1.b76dd0f1b8941p-15, 0.0, 0.0, 0x1.8460ea0a724edp-416, 0.0,
     0x1.8523ef5738d0ep-11, 0.0, 0.0, 0x1.edc8463d56eacp-355, 0x1.b5c4f77f52426p-807,
     0.0, 0.0, 0.0, 0.0, 0x1.95faaa763e46bp-574, 0x1.987e9eb794ca5p-685,
     0x1.1ca9c2d14c9f8p-738, 0x1.9a761bbf8a0cep-908, 0.0, 0.0, 0.0, 0.0,
     0x1.b91ce2c29d0d1p-786, 0x1.36eb214885e8p-518, 0x1.91b7c21e25012p-757, 0.0, 0.0,
     0x1.bc941ea564968p-546, 0x1.375b6933aaa26p-4, 0.0, 0.0, 0x1.f76b54d4797e6p-686,
     0.0, 0x1.0b2c99f1a5b63p-473, 0.0, 0.0, 0.0, 0x1.55feacae17f78p-273,
     0x1.25617ceca7676p-270, 0x1.04344a558bb07p-717, 0x1.c443e2d36c87ap-995,
     0x1.1ec52335fa561p-320, 0.0, 0.0, 0.0, 0.0, 0x1.24d3cf87da14p-387, 0.0, 0.0,
     0x1.93561033b3985p-16, 0.0, 0.0, 0x1.d076c5450f2ecp-696, 0.0, 0.0,
     0x1.14e7a7060aa58p-596, 0.0, 0.0, 0.0, 0x1.615cf99d4840dp-289,
     0x1.0613e8daa4b03p-96, 0.0, 0x1.c6386e1ec7182p-941, 0.0, 0.0,
     0x1.988c5b19d3ed7p-237, 0.0, 0x1.2b88f485542e3p-883, 0.0, 0x1.fabbc78c4e8d1p-294,
     0x1.67d914cfa5dcbp-410, 0.0, 0x1.f390f1ff77addp-776, 0.0, 0.0,
     0x1.9184ad8221ce3p-745, 0x1.0a0c8cc12df9fp-978, 0.0, 0.0,
     0x1.4d062816007c5p-1013, 0x1.397a28094cab9p-924, 0x1.420c9c507794dp-864, 0.0,
     0x1.6879f383dbe83p-679, 0x1.bf427e1e2b92cp-16, 0.0, 0x1.d137a8899088dp-157, 0.0,
     0x1.aa77c46da48ecp-811, 0x1.237f97f5fec0ep-434, 0x1.8fb2ac2283a16p-896,
     0x1.379afa5f01364p-654, 0x1.c0d521748d053p-914, 0.0, 0.0, 0.0, 0.0,
     0x1.c38d5f60f2c76p-954, 0x1.d11bf8092964cp-377, 0x1.c2784f0cf882cp-966,
     0x1.b0c1d1c625e87p-978, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e46421a39d971p-766,
     0.0, 0x1.7b019ba35f7afp-422, 0.0, 0.0, 0x1.390eb72dd1272p-955, 0.0,
     0x1.a8a8d0ed2683ap-996, 0.0, 0.0, 0x1.7de400a661d9p-206, 0x1.7e69154181acap-38,
     0x1.f63e9fc31c2ebp-828, 0x1.0939366e5815cp-613, 0.0, 0x1.5fb607cc0ba04p-286,
     0x1.613cf7ab6dbdp-662, 0.0, 0x1.7911e2ecca1fcp-402, 0x1.41c526515ba56p-863, 0.0,
     0.0, 0.0, 0x1.6c682d19a88a8p-623, 0.0, 0.0, 0.0, 0x1.3bce27cad7096p-124,
     0x1.888998ecf2787p-480, 0x1.6333141820702p-595, 0.0, 0.0, 0.0,
     0x1.80fb6695ca62cp-968, 0.0, 0x1.aee13d1b21f18p-884, 0x1.4ce2fb62d9c7bp-543, 0.0,
     0.0, 0.0, 0x1.97346bad7965fp-452, 0.0, 0.0, 0.0, 0x1.30562f0b61333p-649,
     0x1.39fce290469e6p-120, 0x1.edb8a815c9ac2p-194, 0x1.394365f08e0dcp-348, 0.0, 0.0,
     0.0, 0x1.2e6ebc25d0497p-710, 0x1.68610a7ee58ccp-562, 0x1.3143d56f9828ep-282, 0.0,
     0.0, 0.0, 0x1.75d791d4b1e42p-162, 0x1.75288aea02574p-279, 0.0, 0.0,
     0x1.4be4742bb31d2p-717, 0.0, 0x1.28e7786296b1p-8, 0.0, 0.0, 0.0,
     0x1.b141657ed4d26p-324, 0x1.d12acca32eb05p-589, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f40788b7677bp-751, 0.0, 0x1.32591bda6977dp-481, 0.0, 0.0,
     0x1.60af9712d1315p-509, 0.0, 0x1.f3150e4267b0bp-333, 0x1.8c4bc6da5fafcp-94, 0.0,
     0x1.57e096ace355dp-340, 0x1.9fce426198598p-483, 0x1.7ba787eccd26bp-675, 0.0, 0.0,
     0x1.370df31f3905dp-971, 0.0, 0x1.2614ea255a304p-679, 0x1.adf65262fb7a7p-663, 0.0,
     0.0, 0.0, 0x1.d4ffb8d695594p-582, 0.0, 0.0, 0.0, 0.0, 0x1.a76160b9309cbp-203,
     0.0, 0x1.df00f828eaf69p-370, 0.0, 0x1.095f918adb6e7p-298, 0x1.e63db9d2ef372p-104,
     0.0, 0x1.0157955a8f61ap-411, 0.0, 0x1.2cce8e83f4a98p-366, 0x1.d74a532ea7291p-861,
     0.0, 0x1.1eb94effe0806p-132, 0.0, 0x1.4e0ad56ce77c7p-672, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bb9f47cb2881ep-482, 0x1.25a9eeabcc8c7p-453, 0x1.4df8fea88548ap-616,
     0x1.7e4957abed362p-739, 0.0, 0.0, 0x1.3a5d8a0d6f76dp-548, 0x1.d246ba2f96333p-740,
     0.0, 0.0, 0x1.581c716da7b81p-886, 0.0, 0.0, 0x1.d52fe93ecc5b8p-449,
     0x1.186a411c3e06dp-747, 0x1.24bec4332df6cp-608, 0.0, 0x1.ae5be901593f2p-932,
     0x1.7ccb412042479p-846, 0x1.589c59d314f34p-618, 0.0, 0.0, 0.0,
     0x1.ca3da05201a77p-482, 0.0, 0x1.00d4e3a4fa7ebp-764, 0x1.95bdff20943b5p-584, 0.0,
     0.0, 0.0, 0x1.26f59116da46p-25, 0.0, 0x1.ece610c15909ep-947, 0.0,
     0x1.4f0fb1b75de6dp-121, 0.0, 0x1.4ae2bb386723fp-220, 0x1.901e43aa25439p-735, 0.0,
     0.0, 0.0, 0x1.8a0271cc65689p-283, 0.0, 0x1.e6ac67ab44207p-449,
     0x1.fc340806f6bc1p-677, 0.0, 0.0, 0x1.7d33a62f24d88p-666, 0x1.848c5dfa7bfbap-598,
     0.0, 0.0, 0x1.ba1ce31203ed6p-778, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.83e6e2ef6f49fp-401, 0x1.a5178bd8b1aecp-85, 0x1.9d4212b00dc25p-584, 0.0, 0.0,
     0x1.fe61c89340491p-513, 0x1.2c9f5fb99b6a4p-484, 0x1.f029904e06c15p-418,
     0x1.271c326e0845bp-262, 0.0, 0.0, 0x1.5e50487bb6c32p-434, 0.0,
     0x1.d618803c3dff3p-342, 0.0, 0x1.ddf2209aba439p-92, 0.0, 0x1.dade9e878916cp-713,
     0.0, 0.0, 0x1.b52bf4a59e705p-17, 0x1.2c330c521f5f6p-544, 0x1.1b87c4e1877c9p-991,
     0.0, 0x1.173973225684cp-179, 0.0, 0.0, 0.0, 0x1.0f2431c3ada96p-476,
     0x1.0ea32cdabc0cdp-472, 0x1.8edf88b8b5229p-351, 0.0, 0x1.954c4a837cd51p-94,
     0x1.c4aba1be6048ep-582, 0x1.99e09804adb57p-113, 0x1.3cfba4b965de1p-191,
     0x1.8c485b691a705p-66, 0.0, 0x1.090c777fad67ap-982, 0x1.c70954209a427p-883, 0.0,
     0.0, 0x1.46e4d15f2ccf8p-514, 0.0, 0x1.33aa02000bd2cp-297, 0.0, 0.0,
     0x1.4e3b4620e022fp-149, 0x1.c16c38d4a1919p-83, 0.0, 0x1.9fff26ca253d5p-583,
     0x1.d523e1a1379b3p-148, 0x1.082cd16224761p-926, 0x1.6bd97a1769a25p-285,
     0x1.7e4a426d67fa6p-600, 0x1.294745b87d08bp-531, 0.0, 0.0, 0.0,
     0x1.02f95def84502p-608, 0.0, 0x1.6269ccbdfa0c8p-522, 0.0, 0.0, 0.0,
     0x1.82cbffe30ec2fp-585, 0x1.e7c267ddd92ccp-94, 0.0, 0x1.d61f0a27b18c4p-408,
     0x1.1008633e518dcp-524, 0x1.d725dac1a0ecap-4, 0x1.25fe9af434517p-115,
     0x1.b7d2a288fb516p-459, 0.0, 0x1.98d32bcf40878p-226, 0.0, 0.0, 0.0, 0.0,
     0x1.9c952f1c874c6p-496, 0x1.5654b18774afep-525, 0x1.c8174420026e5p-695, 0.0, 0.0,
     0.0, 0x1.8c54696c9c8dfp-463, 0.0, 0x1.0e027d7bb6403p-911, 0.0,
     0x1.f0ce8533be695p-191, 0x1.ca04492d036b2p-197, 0.0, 0x1.3f63a7fbd51e8p-327, 0.0,
     0.0, 0.0, 0.0, 0x1.8a0c1ab88ab21p-327, 0.0, 0.0, 0x1.f68e8defa733fp-653,
     0x1.bf5ee09177888p-353, 0.0, 0x1.a2ab031d48ab2p-138, 0.0, 0x1.a1e71d4080fcep-711,
     0x1.0d3fafd157232p-295, 0.0, 0x1.858ad6357bbdap-741, 0x1.b8905ab7e02d6p-571, 0.0,
     0x1.53d5c5a7f060bp-660, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f8ca910be23cp-552,
     0x1.ab419e87bc66dp-83, 0x1.d59f70bce40bp-488, 0x1.543da48307829p-933,
     0x1.7adde1e2ac766p-267, 0.0, 0.0, 0x1.bfb7a3c3cbac4p-605, 0.0,
     0x1.afbc88cd0a236p-57, 0.0, 0.0, 0.0, 0.0, 0x1.3e8cf4637ce07p-299, 0.0, 0.0,
     0x1.6a5f5f9e3c882p-681, 0.0, 0x1.2ce3a11bb7a5bp-729, 0.0, 0x1.f908fbf990caap-994,
     0x1.f8c24cba5ed3dp-192, 0.0, 0x1.018e3bf40d8ecp-195, 0x1.c4c634549f45bp-345, 0.0,
     0.0, 0.0, 0x1.9dc18fe0f802cp-1000, 0.0, 0x1.dfc69d1ecf3cbp-1016,
     0x1.295c5afdb3894p-398, 0x1.9219e1c384e08p-676, 0x1.8a1a7b54df911p-387,
     0x1.25ad25163517dp-884, 0.0
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
            tmp1 = Sleef_cbrtd4_u10kvx(tmp0);
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
    printf("Sleef_cbrtd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cbrtd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
