/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d4_u35kvx.c --function \
 *     Sleef_finz_log2d4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.a4179bc3e30dcp-252, 0.0, 0x1.b3686efb04312p-993, 0.0, 0.0,
     0x1.b2d725ffc2a65p-50, 0x1.c82a5028556dap-149, 0x1.58c0f5bb522a7p-470, 0.0, 0.0,
     0x1.39efcb31fe7dp-380, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7442033200d04p-860, 0.0, 0.0,
     0.0, 0x1.6ff1e85938a3ap-275, 0.0, 0x1.d547142ec2337p-556, 0x1.9165a31740ebdp-588,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52e1d5b004eb4p-851, 0x1.eea6945c653f9p-963, 0.0,
     0.0, 0x1.20e491daffe02p-649, 0x1.f6c209de6d3fdp-491, 0.0, 0x1.4c4f6918d52b5p-329,
     0x1.49bb5dd44f1acp-302, 0.0, 0x1.e611996446fedp-418, 0.0, 0.0,
     0x1.e7eeba67e3049p-821, 0x1.02200a8676c2bp-1013, 0.0, 0x1.b32a7952ef52bp-537,
     0x1.0b95ac481eeep-882, 0.0, 0x1.b7c08c2a53cd6p-585, 0.0, 0x1.67641441c7509p-432,
     0.0, 0.0, 0x1.b7625e8a0335cp-11, 0.0, 0.0, 0.0, 0x1.8813c9e3e33bcp-618,
     0x1.6253367f8866p-311, 0x1.f6aa8e5346431p-823, 0x1.7e1beb30aeb6p-244,
     0x1.7f2413e9e0c4ap-482, 0x1.3762122e00b71p-233, 0.0, 0x1.3bda02631ff0ep-925, 0.0,
     0.0, 0.0, 0x1.f751fc1f8be0fp-494, 0x1.d6bf2638efb13p-600, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.247cf8286d5fcp-239, 0.0, 0.0, 0.0, 0x1.4dfa263334471p-159,
     0x1.601bc6e79a5c6p-874, 0.0, 0x1.2f0f2920f953dp-572, 0x1.16e2b9ba7cfb2p-965,
     0x1.7e81e5151416bp-959, 0.0, 0x1.0a4bf5bafbf19p-249, 0.0, 0x1.e6fa797a034d6p-601,
     0x1.68713f9ce33f8p-384, 0x1.fe836809ec204p-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7f30c5cc683cp-220, 0x1.166d81a3ee699p-443,
     0.0, 0x1.4318287fd0fb4p-95, 0x1.daf398680e99ap-978, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8c87750c7e85p-928, 0x1.548017b21a274p-892, 0.0, 0x1.21d6b83c8b89dp-276,
     0x1.a42742b3714ep-837, 0x1.6eb840486620ep-158, 0x1.995b732dd089fp-951,
     0x1.62d658a5cc11p-753, 0x1.3c1ae2dbcf948p-121, 0.0, 0x1.8adb3e5cf23e3p-159, 0.0,
     0x1.5580dd5fe865dp-478, 0.0, 0.0, 0.0, 0.0, 0x1.296a19be7d6ep-318,
     0x1.c5cb80beb8692p-861, 0.0, 0.0, 0x1.1f9257dc5902p-591, 0x1.0a4b3e274d1dep-305,
     0.0, 0x1.967e0f3f72cf9p-941, 0x1.4cf0f47d5a3adp-172, 0x1.9fd1766491b37p-873, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.029a1edb51ac9p-794, 0x1.febb37653cf46p-206, 0.0, 0.0,
     0x1.89d0ef7eb173p-737, 0x1.5eca5d5c8d1d2p-837, 0.0, 0x1.87200caf19ca4p-765, 0.0,
     0.0, 0.0, 0.0, 0x1.63445e328a369p-729, 0.0, 0.0, 0x1.622a24686506fp-352,
     0x1.de78345d3bce2p-570, 0.0, 0x1.8087c63723e8ap-294, 0x1.1d34c867557ddp-269,
     0x1p0, 0.0, 0x1.f007f70f38888p-936, 0x1.81076bdec5776p-668,
     0x1.d4d6b653ea54ep-104, 0x1.7eeb1e8e610b6p-957, 0x1.1816aa8293099p-184,
     0x1.3b6073b87a4dfp-475, 0.0, 0x1.2f6c6ece9a4f7p-118, 0x1.1b38ab1b353cp-129,
     0x1.f34b77fc55f72p-437, 0x1.aa457ef0df6adp-512, 0.0, 0.0, 0.0,
     0x1.c74c401eb18d6p-332, 0x1.06732f2e3f50cp-915, 0.0, 0.0, 0x1.e17735415282cp-284,
     0.0, 0x1.a9845184b6ee4p-518, 0x1.25e05703f6eap-714, 0.0, 0.0,
     0x1.755724b087243p-423, 0.0, 0.0, 0x1.e3627a67a22d9p-710, 0.0,
     0x1.b5bbab7daa46cp-113, 0.0, 0x1.99a7c1056b283p-695, 0.0, 0.0,
     0x1.8d2b0eec700ep-729, 0.0, 0.0, 0.0, 0x1.85e4e10029ffep-361, 0.0, 0.0, 0.0,
     0x1.4150ba58ce727p-737, 0x1.249e48226878bp-87, 0.0, 0x1.c29ccda8ca1d2p-382,
     0x1.a247030755bap-551, 0x1.3635f8acb68cap-452, 0.0, 0x1.340a4ebd20782p-521, 0.0,
     0x1.8050625ffb60cp-897, 0x1.3bba2f603c96cp-434, 0x1.517c0c2362b35p-414, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b72771fcb56cfp-419, 0x1.5ed56a2e591cp-575,
     0x1.ca5beca965d7ep-666, 0x1.18b873ab55a1dp-852, 0x1.a7276aaea104ep-829, 0.0, 0.0,
     0.0, 0.0, 0x1.21a7391405576p-62, 0x1.a8f5228e45355p-503, 0.0,
     0x1.dd0b8144e01dap-648, 0.0, 0.0, 0x1.77a25c12fa9e3p-265, 0.0,
     0x1.3638af8720f76p-254, 0.0, 0.0, 0x1.e848a5a90bccbp-853, 0.0,
     0x1.b245e8633f3ffp-974, 0.0, 0.0, 0x1.6e177091c5b15p-771, 0.0,
     0x1.c1f3c837cedbbp-19, 0x1.3b4666afdf801p-980, 0.0, 0x1.819d7e69dec51p-765,
     0x1.3b3be51c8484bp-327, 0x1.397c5e44a3b6fp-938, 0.0, 0.0, 0.0,
     0x1.c0b9f350d022p-271, 0x1.1686428bf8e1ep-774, 0x1.c57ea79a9dee8p-880, 0.0,
     0x1.01a9ce35759a8p-261, 0x1.57508d07830aep-2, 0.0, 0x1.26327ce2f9163p-534, 0.0,
     0.0, 0x1.3bc761a157e1fp-970, 0.0, 0x1.537eaad43891p-574, 0x1.f711ab362c2d8p-987,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7faa0870e28bp-786,
     0x1.412c3b64545b2p-362, 0.0, 0x1.639f98656a347p-272, 0x1.03ea801c2cc1p-802, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99735b7f23659p-147, 0.0, 0x1.b992d8f0ec9edp-549,
     0.0, 0x1.d5fb4c13e0a18p-5, 0x1.ee59232893ed2p-855, 0.0, 0.0,
     0x1.9209a33fb6b75p-736, 0x1.2d68178a60967p-809, 0.0, 0.0, 0x1.ed1e9d1cac3bdp-153,
     0x1.71423a348abbep-402, 0.0, 0x1.32ed36f35916cp-143, 0.0, 0.0,
     0x1.e9573b32f469bp-1009, 0.0, 0.0, 0x1.4e8fca097005dp-610,
     0x1.0373412d85714p-667, 0x1.f038da506deb8p-245, 0x1.20a022ca61adcp-23, 0.0,
     0x1.c5028593114fep-313, 0.0, 0.0, 0.0, 0.0, 0x1.16d70ee4cb888p-26,
     0x1.560e080c2f3bdp-40, 0.0, 0.0, 0x1.eb4e9e4afc2a5p-527, 0.0, 0.0, 0.0, 0.0,
     0x1.99cc280859d23p-453, 0x1.367d3173f0fa9p-291, 0x1.467735e915b5ap-822,
     0x1.e6b1f8ddbafd8p-781, 0x1.ed328b7b9bf2ap-465, 0.0, 0x1.f75954f56ad24p-595,
     0x1.28581f7d1899p-122, 0.0, 0.0, 0x1.a5826ebb30d01p-354, 0.0,
     0x1.74770691eef51p-219, 0x1.a5bd3a95c69d6p-247, 0x1.0269556626af9p-548,
     0x1.38b67c14d9d0fp-792, 0.0, 0.0, 0x1.a0abe54ae68f2p-347, 0x1.b1da5c43ee771p-470,
     0.0, 0x1.f898660858412p-821, 0.0, 0.0, 0.0, 0x1.a31031023527ep-587,
     0x1.d534601aa6169p-737, 0x1.da1318803d801p-43, 0x1.30d8e4c6723ebp-800,
     0x1.6abcc9402e32p-925, 0x1.8ab526b0c342ap-356, 0x1.9bad1e06016a7p-389,
     0x1.2994460ddf65ap-157, 0x1.416e789f3109p-563, 0x1.369b9bd1d02bfp-908, 0.0,
     0x1.38b45b0240f35p-857, 0x1.d399aabfe107bp-922, 0x1.5aba84f392477p-579,
     0x1.c82aea8236dacp-500, 0x1.2332593cec1ffp-826, 0x1.9f10f1ba6082ap-111, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6b5322018c4d5p-936, 0.0, 0x1.0b61cd063d91bp-487, 0.0,
     0.0, 0x1.3751fc54a03a5p-876, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4da1e3e02509ap-641, 0x1.a8f7384bdf1a1p-107, 0.0, 0.0, 0.0, 0.0,
     0x1.b94d36f4537a1p-55, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5fee7a83cc667p-127,
     0x1.e221038a6cd3ap-590, 0x1.531cb8111370fp-857, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc9d7e3366c2bp-392, 0.0, 0x1.2d9b1e5c10155p-635, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0ea7de5bd4a9dp-257, 0.0, 0.0, 0.0, 0.0,
     0x1.a109e205d2862p-936, 0.0, 0.0, 0x1.2d383252821f8p-477, 0.0,
     0x1.dacf5b67356c2p-686, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.946e35cdafe0bp-863, 0.0, 0.0, 0x1.069a9f86ff403p-484, 0x1.ba6bd83205c0cp-309,
     0.0, 0x1.775f91448525bp-503, 0.0, 0.0, 0x1.0faec21a0ecd4p-619,
     0x1.4a192bfb8146cp-842, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3645036020553p-859,
     0x1.b7afe1ab87c14p-102, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e891ea451cab3p-615,
     0x1.a1337bd81f166p-656, 0.0, 0x1.c480289f7369ep-55, 0.0, 0.0,
     0x1.af5cc765a7eccp-373, 0x1.231a0d8fc067ap-155, 0.0, 0x1.1a6a824958778p-380,
     0x1.36400b4d1ccfbp-1006, 0x1.f93731e87f837p-364, 0x1.ee359fa7b1298p-941, 0.0,
     0x1.a25076f38ccbbp-105, 0.0, 0.0, 0.0, 0x1.9c61d7d5eadb4p-631, 0.0, 0.0,
     0x1.5172d88e22defp-416, 0.0, 0.0, 0.0, 0x1.b6f5a4ab6bfafp-526, 0.0, 0.0, 0.0,
     0x1.cce14487ac131p-298, 0x1.a72da020b61ebp-977, 0.0, 0x1.45ad93ebc7de5p-575, 0.0,
     0.0, 0x1.456a920a56a4cp-361, 0x1.f5f29ce9ddea8p-1005, 0x1.7992fa9561939p-333,
     0.0, 0x1.ad913da77a3c6p-80, 0x1.27726f30f8b18p-125, 0x1.e6464496f1a78p-227,
     0x1.8d09fe779fa44p-1009, 0x1.70af34252e181p-950, 0.0, 0.0, 0.0,
     0x1.fe803d413104cp-107, 0.0, 0x1.7b257aa0a17cp-600, 0.0, 0.0, 0.0,
     0x1.342594787bc4dp-361, 0x1.de4ef9ddf91p-258, 0x1.3a21524af6c94p-800, 0.0,
     0x1.38b3d695c01e7p-563, 0.0, 0.0, 0.0, 0x1.15958df9cb39fp-627,
     0x1.b8ef5ada1f5e6p-7, 0.0, 0.0, 0x1.d175e59178fb2p-879, 0.0, 0.0,
     0x1.dc268efa6cb63p-854, 0x1.96b583b682364p-650, 0.0, 0x1.2e60812b98374p-784,
     0x1.68182d8a2b9c7p-17, 0x1.48c5a35f73c9p-1009, 0x1.3092b541a9274p-530,
     0x1.7a9323ab6edbcp-517, 0.0, 0.0, 0.0, 0x1.ac4426463631p-115, 0.0,
     0x1.81e4436a8938ap-571, 0x1.c1e0ce1af1458p-105, 0.0, 0.0, 0x1.d069536eeb68bp-411,
     0x1.a31f3ffd58fap-389, 0.0, 0.0, 0x1.d87ba7bf1c75bp-214, 0x1.f89992aaafbeap-81,
     0x1.9159eafe5119ep-487, 0.0, 0x1.6f5db02daa4d9p-347, 0x1.1d8d1e209445fp-338,
     0x1.d0f3521445d83p-202, 0.0, 0.0, 0.0, 0x1.57315b975d1eep-9,
     0x1.3bef16aaadacfp-342, 0.0, 0x1.6f7bc77e7c52p-1014, 0x1.06eb26d414cd8p-400, 0.0,
     0x1.762a50051a98cp-361, 0.0, 0x1.1702379d8fe72p-247, 0x1.52f501fbb8054p-214,
     0x1.feee2fcb466d9p-164, 0x1.530636f277764p-238, 0.0, 0.0, 0x1.59438193d4e6bp-142,
     0.0, 0.0, 0.0, 0x1.4db99f3a47d99p-752, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.29df4fa09717ep-198, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77f745f87e0eep-341,
     0x1.5faf78787defp-769, 0x1.f7fed008a2795p-139, 0.0, 0x1.eee9441218f2ep-630,
     0x1.b7fc8d67f2d74p-928, 0x1.360ed802093fap-68, 0.0, 0x1.8cb05b0fbbaa5p-423, 0.0,
     0.0, 0.0, 0x1.02a1efc03c649p-1013, 0.0, 0x1.c899dfa8ca4c6p-397,
     0x1.4cf8e92d3ed76p-284, 0.0, 0x1.56232d3eeb10dp-953, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3fa91f8c7a85bp-323, 0x1.20d345dfbfa3p-38,
     0x1.53f4c3b2bc4e4p-256, 0.0, 0x1.70f8e70107021p-545, 0x1.476f2b4255b7cp-546, 0.0,
     0.0, 0x1.637d98d101517p-15, 0.0, 0.0, 0x1.ca3c6ba245709p-366,
     0x1.c165b90f9de68p-716, 0.0, 0x1.4a1fd40f2a56p-46, 0.0, 0.0,
     0x1.d4a92c0bc173ep-519, 0x1.590c5a28b966bp-404, 0x1.483c95538af53p-915,
     0x1.479975ca99573p-581, 0x1.ff8fb1544d3e1p-586, 0.0, 0.0, 0x1.dc6fbe8e99a3ap-311,
     0x1.60cf5e7999f8bp-282, 0x1.c0ccc7b646301p-696, 0.0, 0.0, 0.0,
     0x1.4543a886f4327p-840, 0x1.2f2351797eb19p-197, 0x1.4478891ca8edfp-240,
     0x1.50ba3fcbca897p-686, 0.0, 0.0, 0x1.9e39d27e5b5acp-396, 0x1.2450f835dc309p-783,
     0x1.6d1f4b783dab7p-1002, 0.0, 0x1.ca581a1f8a72p-569, 0.0, 0.0, 0.0, 0.0,
     0x1.88e1b76342ddbp-540, 0x1.e348fa280bbc3p-567, 0.0, 0x1.07406073f6e7ep-717, 0.0,
     0.0, 0.0, 0x1.2b2a9d1f02a31p-114, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.235748e8cfbddp-922, 0x1.f4566118bd4e8p-256, 0.0, 0x1.92e5210ef241cp-495, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8b6d6e8426a02p-432, 0.0, 0.0, 0.0,
     0x1.2fb0f12c8b813p-379, 0.0, 0x1.35d247557e69bp-1002, 0.0,
     0x1.9dd717d7cfbaep-216, 0.0, 0x1.ae42cbc32ff1ap-781, 0x1.75f8013a55c72p-269, 0.0,
     0x1.8ddbb6589eb61p-548, 0.0, 0.0, 0.0, 0.0, 0x1.8e658ca584f85p-770, 0.0, 0.0,
     0x1.e641008800e95p-275, 0.0, 0.0, 0.0, 0.0, 0x1.4c671f2ef0eddp-907,
     0x1.3398d67626da6p-759, 0x1.291f4c644d90dp-817, 0.0, 0x1.a5b05daa7f52dp-899, 0.0,
     0.0, 0x1.fa2acc6cf9bccp-521, 0.0, 0.0, 0.0, 0x1.290c91b0cbcfcp-944,
     0x1.c8c608e33f44ap-839, 0.0, 0.0, 0x1.816cef08d3ab4p-450, 0x1.6b5cdfd5e0ecp-144,
     0x1.3b4ce609e68e5p-132, 0.0, 0x1.94f22e0dca7e2p-516, 0x1.3cbedf0b9d9ap-52,
     0x1.ef2f1a55dc522p-271, 0.0, 0x1.779ff21eda9ebp-406, 0x1.b8f6ab46ef484p-117, 0.0,
     0.0, 0x1.af1de736ab23bp-585, 0x1.b641af1e25846p-799, 0x1.cb8263901c03ep-785,
     0x1.c8589083149c4p-29, 0x1.9712578bf6a6fp-324, 0x1.31d44bf954041p-717, 0.0, 0.0,
     0x1.c938960ede8d4p-112, 0x1.a9a105aedf706p-910, 0x1.31268945c04c4p-942, 0.0, 0.0,
     0x1.1d0039db2418ap-902, 0x1.494e025df518p-929, 0.0, 0.0, 0x1.acde88a6106eep-674,
     0.0, 0x1.518457f419c3ep-36, 0x1.25695ac6d2dbap-348, 0x1.074d0c2e24d96p-383, 0.0,
     0.0, 0.0, 0.0, 0x1.fc736d6abb09ep-458, 0x1.9a81ac48f38bep-356,
     0x1.4c8fed329b89bp-555, 0.0, 0.0, 0.0, 0x1.1bbb5b2c44a9p-819, 0.0,
     0x1.85cd7e6fa3e22p-443, 0x1.dc55abe3e1dap-668, 0x1.73666b0437495p-608, 0.0, 0.0,
     0.0, 0x1.2860ddcfaa044p-344, 0.0, 0.0, 0.0, 0x1.0b1f9314f9adcp-484,
     0x1.6050fd12ec1b4p-395, 0x1.04c00c38e6f44p-719, 0.0, 0.0, 0x1.e1447a55301afp-87,
     0.0, 0.0, 0x1.cfbfe36ddf855p-195, 0.0, 0x1.251c52ba30b98p-300, 0.0, 0.0, 0.0,
     0.0, 0x1.469377bb2b0d2p-312, 0x1.2761a8647dca3p-756, 0.0, 0.0,
     0x1.33f1bcaafe07dp-258, 0.0, 0x1.b7828245e93dfp-732, 0.0, 0x1.4a4aad34fc12ap-626,
     0.0, 0.0, 0.0, 0x1.ae3a4642bc32dp-601, 0x1.331ce421eac54p-762, 0.0, 0.0, 0.0,
     0.0, 0x1.78ef39829cdb2p-119, 0.0, 0.0, 0x1.6900c2c2a4e18p-216, 0.0, 0.0, 0.0,
     0x1.59689b9bc47a7p-674, 0x1.7b5f24541c09cp-963, 0x1.3418819e77d12p-934, 0.0,
     0x1.9912155824d14p-635, 0.0, 0x1.3485cd46d45cep-112, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e406c5cd71e85p-826, 0x1.4d355df769487p-172, 0.0, 0.0, 0.0,
     0x1.96ed9c0678079p-454, 0.0, 0x1.efd235323c736p-382, 0x1.856569db3e496p-374, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b07361237c73bp-255, 0x1.007b20089acdbp-1005, 0.0,
     0.0, 0x1.b3e9ee38558a4p-186, 0x1.84458a116f7c6p-81, 0x1.ed62192b3b5b7p-218,
     0x1.57be7fe147eedp-830, 0x1.0d58ddb084a97p-607, 0x1.bacc4942801a4p-995,
     0x1.9d72ff328653p-325, 0x1.ec5c842847132p-507, 0.0, 0x1.54c005e681194p-798, 0.0,
     0x1.e9c7a6f93adbfp-745, 0.0, 0x1.d82b7a34b90abp-250, 0.0, 0x1.de29ef1e37867p-689,
     0.0, 0x1.1beb1c51a2e1dp-290, 0x1.4ded615674dfbp-995, 0x1.a052aab75f3ecp-647,
     0x1.e5382fac0e431p-69, 0.0, 0x1.20020356446b7p-794, 0x1.7aaa8715efb11p-485, 0.0,
     0x1.3c0d849e38147p-492, 0x1.e8ec70413d629p-813, 0x1.884c4f6049c01p-176,
     0x1.3b6d045a3eb57p-1005, 0x1.21cee1e12cab6p-328, 0.0, 0x1.ff939ab7952f4p-91, 0.0,
     0x1.e05dd7baff967p-358, 0x1.c11293fb71d41p-1013, 0x1.7faca5009025fp-909,
     0x1.4de20fa63e529p-623, 0.0, 0x1.bac3d6c8be548p-352, 0x1.eb26df5da82ffp-882, 0.0,
     0.0, 0.0, 0x1.8a21e89e5ab59p-299, 0.0, 0.0, 0x1.8918a638e7796p-1012,
     0x1.0539c8df082bbp-627, 0x1.bdf486bb9b6aep-371, 0.0, 0x1.5cc42a0b5e88ap-894, 0.0,
     0.0, 0x1.c2e6c7f0a8218p-678, 0.0, 0x1.72ead6d9d4276p-973, 0x1.e7367b3a845a4p-775,
     0.0, 0x1.ee3675279ad96p-844, 0x1.d61ffbe55c32dp-528, 0x1.86b2b660e9752p-23, 0.0,
     0x1.ca99da4183949p-140, 0x1.4584ed5d63151p-1007, 0x1.160c65c27b0dep-981, 0.0,
     0x1.34b37b2e88719p-1021, 0.0, 0x1.8909514b034c1p-930, 0x1.8d497376a467p-206,
     0x1.7c02d57bfd135p-202, 0.0, 0x1.2b967bb0e1cc3p-310, 0x1.0172b21d9ec08p-3, 0.0,
     0.0, 0.0, 0x1.91d0baa983266p-387, 0x1.89b8f8fccc019p-977, 0.0,
     0x1.2100e0cd25382p-182, 0.0, 0x1.6e8f61e6bda7bp-858, 0.0, 0x1.533ef2152737ep-99,
     0x1.56351da7b1fdfp-947, 0x1.42d7664f49afdp-95, 0.0, 0.0, 0x1.f249a3a9fd21ep-954,
     0.0, 0x1.d5f9ebdaace14p-949, 0.0, 0x1.df485d729c1f6p-693, 0.0, 0.0,
     0x1.06fcecff2e955p-79, 0x1.25c5f9c4be693p-406, 0.0, 0x1.fa293ad0bbfbdp-98,
     0x1.89ff3ed348a82p-944, 0x1.5ed17219dc367p-363, 0.0, 0.0, 0x1.460e59fa5f13ap-554,
     0.0, 0x1.27f16f5df3c44p-442, 0x1.fe88cf09434fcp-658, 0x1.9403d5b084efep-453, 0.0,
     0x1.762f6d576c3bfp-214, 0.0, 0x1.7ee86ffe7657p-504, 0x1.14eff2587424p-751, 0.0,
     0.0, 0x1.343b74625bfc2p-823, 0x1.3015745d137ecp-817, 0.0, 0x1.4583edac29664p-365,
     0.0, 0.0, 0.0, 0.0, 0x1.46731bc9fc277p-17, 0.0, 0x1.d7e0021b3c161p-121,
     0x1.4eee7a5993d3bp-667, 0.0, 0x1.aeb9b54c7fb26p-31, 0x1.92359201de3a7p-485,
     0x1.c740f6daa36e2p-845, 0.0, 0.0
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
            tmp1 = Sleef_finz_log2d4_u35kvx(tmp0);
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
    printf("Sleef_finz_log2d4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log2d4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
