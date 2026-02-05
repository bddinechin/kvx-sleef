/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d1_u10purecfma.c --function \
 *     Sleef_finz_log2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.1324b48c39458p-41, 0.0, 0.0, 0x1.dbd4b3a140a7ap-154, 0.0, 0.0,
     0x1.24a916dd5ad27p-432, 0.0, 0x1.e4bcf01eba879p-775, 0.0, 0.0,
     0x1.5335644694ce4p-275, 0x1.bb511265b079dp-190, 0x1.fcef0f50243dbp-870, 0.0, 0.0,
     0x1.36e6460418993p-336, 0.0, 0x1.e4488c0f6113p-795, 0.0, 0x1.9cb206ea3f6d3p-399,
     0x1.f9de503cfdddp-543, 0x1.4a377b9e2a212p-950, 0x1.f761b74092403p-486,
     0x1.84a52de63a158p-717, 0x1.d30da1344c761p-575, 0x1.6c5e4c203ae45p-658, 0.0, 0.0,
     0x1.8f728b9e499e2p-625, 0.0, 0.0, 0x1.f7a971f5963fp-251, 0.0,
     0x1.5a267070950ffp-586, 0x1.7468a25ea5e41p-581, 0x1.b0539f7aa3255p-812, 0.0, 0.0,
     0x1.3ad79bcc0a9a1p-32, 0x1.5d76ee130d802p-47, 0x1.9039307d5a68ap-987,
     0x1.721595e8c0637p-170, 0x1.8dfdf20906607p-449, 0x1.375dd550da94p-634, 0.0, 0.0,
     0x1.2574f6403f46dp-914, 0x1.154f1fb9838e4p-37, 0x1.219b1efbce675p-407,
     0x1.c9ba216b6ec6p-558, 0x1.f5f9402bded0bp-38, 0x1.6bbf7d533dea8p-204, 0.0, 0.0,
     0x1.1c2d0af81cf79p-752, 0.0, 0.0, 0x1.640a1ec518e65p-832, 0x1.d6caa14f0e50bp-653,
     0x1.5c225a4524dcbp-301, 0.0, 0x1.52fcec94cf95bp-809, 0x1.51ebcf622f24ap-496,
     0x1.916cbe80ac8b4p-769, 0x1.8eecbcc317ffap-26, 0.0, 0.0, 0x1.43679723de727p-1016,
     0x1.30be650e68e06p-903, 0.0, 0.0, 0.0, 0x1.2bdcd1fe5e0f2p-899,
     0x1.3316cb9257ac1p-206, 0.0, 0.0, 0x1.94c14e58cbdfdp-882, 0.0,
     0x1.115478591a5a5p-296, 0.0, 0.0, 0x1.60120ddb856cdp-394, 0x1.b1558d55eb8afp-944,
     0.0, 0.0, 0x1.07e4258dd2e99p-492, 0x1.9656b5e25a15bp-509, 0x1.c467908ce57f4p-788,
     0.0, 0.0, 0x1.09da80604f14p-648, 0x1.e4cf9409255d8p-281, 0x1.1f1730cd109aep-366,
     0.0, 0.0, 0.0, 0x1.bd09c8ea2734ap-33, 0x1.2de8f7eb4674p-889, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d36cccbc3d5fcp-970, 0x1.b2b97d7703b17p-277, 0.0, 0x1.ddebef138804cp-774,
     0x1.32f631a69a876p-792, 0.0, 0.0, 0.0, 0.0, 0x1.b0f2ac2b5f0b8p-499, 0.0, 0.0,
     0.0, 0x1.a80a01224ac77p-247, 0.0, 0x1.c8aff1475f8f9p-738,
     0x1.7e56b0178cf7cp-1020, 0x1.3a8743bb02f19p-788, 0.0, 0x1.be41838e77c32p-378,
     0.0, 0x1.b1e215c3950cbp-1011, 0.0, 0.0, 0.0, 0x1.8b88b321a8675p-393,
     0x1.4b35622a77b4bp-74, 0.0, 0.0, 0.0, 0.0, 0x1.e94e5b854281ap-557, 0.0, 0.0,
     0x1.ea361a2964572p-587, 0.0, 0.0, 0x1.a3be24081bc7p-692, 0.0,
     0x1.4e44c08b05b0fp-305, 0x1.cf990fe88e2aep-531, 0x1.9dc5916b668d8p-17, 0.0,
     0x1.75626998918bep-715, 0x1.a564de3d6d836p-135, 0x1.c5d92870f35b2p-497,
     0x1.32d2ab87a202bp-377, 0x1.ef4a5070f4b7bp-665, 0.0, 0x1.998d0e3013e84p-94,
     0x1.a5cacfebae6aap-210, 0.0, 0.0, 0.0, 0.0, 0x1.dcc9c9e6b5a2fp-953, 0.0, 0.0,
     0x1.95b2e334bf603p-726, 0.0, 0.0, 0.0, 0.0, 0x1.0da0fb12e53e5p-891,
     0x1.be8f164a14749p-818, 0x1.0c55758d84451p-175, 0x1.bcb07814ab377p-374,
     0x1.612e1ab600e06p-577, 0.0, 0.0, 0.0, 0.0, 0x1.894daa5df637fp-318, 0.0, 0.0,
     0x1.a9cac94275998p-68, 0x1.7512b4073ce36p-501, 0x1.b0ac0b2b5c76ap-71,
     0x1.616b43ec66c6ep-33, 0x1.77e32e086a305p-356, 0.0, 0x1.be9f81ae31a61p-587, 0.0,
     0.0, 0.0, 0x1.00a80c1a30016p-342, 0x1.899c2066151a6p-1020, 0.0,
     0x1.ff9648a922c37p-370, 0.0, 0x1.e89f9201dc89ep-46, 0x1.968aa808dd0ecp-426, 0.0,
     0.0, 0x1.f5e1cf460bcd6p-984, 0.0, 0x1.3f7c55fedea0bp-390, 0x1.6c8375ec04d6fp-913,
     0.0, 0x1.59e4214355c67p-889, 0.0, 0x1.ecc2a4c9feafap-992, 0.0,
     0x1.235163f3abf43p-139, 0x1.0de46f08fc18cp-181, 0.0, 0x1.fa2e77c47454ep-731,
     0x1.085c12f741497p-393, 0.0, 0x1.be0f27d7b0831p-194, 0.0, 0x1.436df6e2d3313p-467,
     0.0, 0.0, 0x1.6de903fa62638p-905, 0.0, 0x1.7c182072a3f8ap-38, 0.0, 0.0,
     0x1.7eacac4fa078p-675, 0.0, 0.0, 0x1.0b963999273dap-661, 0.0, 0.0, 0.0, 0.0,
     0x1.23bc60ebf4339p-447, 0x1.9f5fa25e5882bp-137, 0.0, 0.0, 0.0, 0.0,
     0x1.eb6f24dfa7ee8p-936, 0x1.f07fd566ff03p-100, 0x1.3c0ee3a95294ap-254, 0.0,
     0x1.0c888775a701cp-874, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eb10399b8a2dap-323, 0.0,
     0.0, 0x1.edd8e4c787edbp-164, 0.0, 0.0, 0x1.198759a3a3a9dp-33, 0.0,
     0x1.ecf04d03c31b1p-826, 0.0, 0x1.0eeace36eee37p-336, 0x1.856b4f8e3032ap-829,
     0x1.e3e8055ba145ap-277, 0x1.eb2f847597e1dp-523, 0x1.31084c6dec5f3p-502, 0.0,
     0x1.9bc458da79025p-620, 0x1.f696aee90dc54p-149, 0.0, 0.0, 0x1.712088532992p-827,
     0x1.e81406ab7e1c7p-271, 0x1.e90b6480a9dcfp-78, 0x1.f3fde8a59364ap-603, 0.0, 0.0,
     0.0, 0x1.0f54db60d0088p-458, 0.0, 0.0, 0.0, 0x1.dae5793c66f29p-928, 0.0, 0.0,
     0.0, 0x1.0cc765d495941p-677, 0.0, 0.0, 0.0, 0.0, 0x1.16e260ac274c1p-832,
     0x1.551a2b14d01afp-472, 0x1.97f5bfcfe6284p-926, 0.0, 0x1.a762dc52b02bfp-694, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a2a8697955fdp-593, 0.0, 0x1.8a1ac64dee2c2p-613,
     0.0, 0x1.cc328666e2b9dp-894, 0.0, 0x1.f151811e2f88ap-514, 0.0, 0.0,
     0x1.934c78f360d98p-449, 0.0, 0x1.be10a691efdc1p-991, 0.0, 0x1.bd5a3a34759aap-329,
     0.0, 0.0, 0x1.622cfe1a50c43p-957, 0x1p0, 0x1.a28d2242afad2p-226,
     0x1.51ba319e5558fp-359, 0.0, 0x1.502f5d4ec489ep-808, 0x1.41cf008efd8c8p-433, 0.0,
     0x1.a09a561fb1d2fp-970, 0x1.77ec23c40ce41p-491, 0.0, 0.0, 0.0, 0.0,
     0x1.390d0ab49e891p-7, 0x1.54444d980e36cp-890, 0x1.2b5dfc6d6690cp-977,
     0x1.f81caa6413552p-719, 0x1.e77886b5a78e5p-740, 0x1.2bb2eac4cc9ffp-659,
     0x1.481883c99cb4cp-716, 0.0, 0x1.2a175edf81f41p-216, 0.0, 0x1.392e380cbb879p-266,
     0.0, 0x1.e05ac38508c39p-306, 0.0, 0x1.1112c6505376bp-552, 0x1.9e520e550d5cdp-722,
     0x1.bbb914bb8f4a7p-170, 0.0, 0.0, 0x1.0251d42a606c4p-540,
     0x1.f7b2b8bd4e699p-1002, 0.0, 0x1.f77409b985ca1p-279, 0x1.a7af4f48e2eb3p-239,
     0.0, 0x1.dfde27d2f885p-810, 0x1.d7430b71aaa8fp-488, 0x1.117030204a233p-980,
     0x1.7ae38e66e07d5p-154, 0.0, 0.0, 0x1.7683d8845fe1p-416, 0.0,
     0x1.857aa2738307dp-944, 0.0, 0x1.d61511a1f94b5p-321, 0x1.fa2e27ec743e7p-693,
     0x1.06804a5071f72p-799, 0.0, 0.0, 0.0, 0.0, 0x1.efbdb87b5f884p-973, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c64ee16500b37p-553, 0x1.a84cbd2f2d3aep-721,
     0x1.21d6747f5a06dp-743, 0.0, 0x1.b669d802daeb4p-670, 0.0, 0.0, 0.0, 0.0,
     0x1.d36e8924dcc36p-719, 0.0, 0x1.fca2d234d0b68p-661, 0x1.609d70ca36d35p-888,
     0x1.d2a62555c7e94p-94, 0.0, 0.0, 0x1.70978beebb53cp-502, 0.0, 0.0,
     0x1.4582b21f88d98p-600, 0.0, 0.0, 0.0, 0x1.3ca011aac9141p-792,
     0x1.032a9c84a0b72p-626, 0x1.652b838a7b0ap-37, 0.0, 0x1.03d773098fbb2p-144, 0.0,
     0.0, 0x1.7bd241b5b454fp-784, 0.0, 0.0, 0.0, 0.0, 0x1.64408bf6de623p-541,
     0x1.cd6b0f5705d4cp-241, 0x1.ecbf3972500cap-1022, 0.0, 0x1.181f5cf339949p-889,
     0.0, 0x1.e8018bafc7b1p-565, 0x1.375d2537b176ap-960, 0.0, 0x1.86cb1cfa449fep-869,
     0.0, 0.0, 0x1.822262dba9913p-583, 0x1.4ee02baea4e8ap-90, 0.0,
     0x1.de9b19275f45ep-220, 0x1.38984bc90eed6p-253, 0.0, 0.0, 0x1.c6e3a71d7bd68p-218,
     0.0, 0.0, 0.0, 0.0, 0x1.aacd07dd3b629p-691, 0.0, 0x1.b17ee6a4d8af4p-238,
     0x1.bac233ed164e8p-382, 0x1.96da8c857e66dp-701, 0x1.a8b24664059cdp-459, 0.0,
     0x1.5dfcd7a456de5p-264, 0x1.6c6ef7df8a901p-749, 0x1.ff40ae90ea356p-996,
     0x1.56ff1b49c7dfbp-977, 0.0, 0x1.7dc376999e3a8p-316, 0x1.1c1c97b7fd52cp-688, 0.0,
     0x1.4efc469ce321ep-899, 0.0, 0.0, 0x1.081ecbaadbe35p-798, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c420251e64c48p-376, 0x1.84806ba57bd91p-571, 0.0,
     0x1.70694e400e44bp-1018, 0x1.614f843fc59acp-1021, 0x1.1bf7bdbfa30a6p-216,
     0x1.6ce81c7c7bc9ep-177, 0.0, 0.0, 0.0, 0.0, 0x1.b3f43d47ed33dp-166,
     0x1.1eacc0c696c02p-855, 0x1.4b329d2c33858p-966, 0.0, 0x1.8510da0ff5205p-246, 0.0,
     0.0, 0.0, 0x1.fa30fae8a4cc8p-238, 0x1.674b0fd998e4ap-654, 0x1.23bfbdbf275bfp-387,
     0x1.44fd6642c548p-405, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1524b8fe2416p-415, 0.0,
     0x1.aedd256b6e01fp-461, 0.0, 0.0, 0.0, 0.0, 0x1.aec2315eb5daep-914,
     0x1.9555fa98d8aa8p-388, 0x1.6963700c96748p-433, 0x1.35df74e06a791p-188,
     0x1.b791f638e3e5bp-384, 0.0, 0x1.69ba09b3ca7bep-114, 0.0, 0x1.323ea2cbeb70cp-403,
     0x1.a4a9e80ab84b9p-779, 0.0, 0.0, 0x1.d240c68aa5731p-883, 0x1.4a07f4b726b71p-307,
     0.0, 0x1.53811f786a623p-476, 0.0, 0x1.ae7b5eaa8ca5bp-852, 0.0, 0.0,
     0x1.cb67f058c5114p-44, 0x1.57330a6f056fbp-949, 0x1.f6e57c0cd5a27p-788,
     0x1.cc47bc2edfcabp-258, 0.0, 0.0, 0.0, 0.0, 0x1.49ed717b10a6cp-736,
     0x1.13b31e6f660a2p-347, 0x1.470bdc1922ca1p-523, 0.0, 0.0, 0.0, 0.0,
     0x1.def245285f2f3p-751, 0x1.b1f131737be89p-992, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3b1ecc8be7ea1p-199, 0.0, 0x1.d2f4bc3ae8192p-602, 0.0, 0.0, 0.0,
     0.0, 0x1.d7249b41af7e4p-881, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8447a0acbc55p-56,
     0x1.a65442f58fc55p-693, 0x1.9baf81b448d0dp-418, 0x1.0c7b21342ea48p-730,
     0x1.e54c23bbbc216p-32, 0.0, 0.0, 0.0, 0.0, 0x1.2ef3b7a16953cp-143,
     0x1.172c4a2a933f6p-493, 0x1.956fcdaa48f5bp-465, 0.0, 0x1.47cb930df3888p-337, 0.0,
     0.0, 0x1.adea7fe6ee0d1p-632, 0.0, 0.0, 0x1.bcfd4656867bbp-215,
     0x1.c33ff235cf129p-622, 0.0, 0x1.e4d0c015c548p-225, 0x1.100a3339b585ep-320,
     0x1.bb46347551382p-738, 0x1.955468ac8df1ap-440, 0x1.e212c58eda3b2p-761,
     0x1.636dd42502896p-166, 0x1.6035a50942534p-330, 0x1.9e1bc588023b5p-11,
     0x1.760863396b0fep-345, 0.0, 0.0, 0x1.b550cbd15b0b7p-369, 0.0, 0.0,
     0x1.82d2c049cf0d5p-644, 0x1.e6261538794aep-148, 0.0, 0.0, 0x1.90b3a2e5e4fa7p-753,
     0x1.bc79d6e73ba39p-232, 0.0, 0.0, 0.0, 0.0, 0x1.6079ae84bf6ebp-341, 0.0,
     0x1.6e38c9a6f214p-745, 0x1.d3d85e561db1ap-179, 0x1.a50428e61759p-499, 0.0,
     0x1.33b2068aaa836p-510, 0x1.8f13d49d00b6fp-315, 0.0, 0.0, 0x1.fb4d40e0f818fp-233,
     0x1.c659f9a3928d5p-448, 0x1.d78efc7fd018fp-598, 0x1.8203537833e47p-191,
     0x1.0e8f0816b8c7bp-607, 0x1.b388c0efc4a93p-620, 0.0, 0.0, 0.0,
     0x1.7a5d226074eb5p-825, 0.0, 0x1.71127a29f5495p-319, 0.0, 0.0,
     0x1.269fed23a75adp-355, 0x1.6e938bb432c5bp-856, 0x1.91d05e37d4a76p-680, 0.0,
     0x1.95e2c1209b8f5p-1010, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47cfe420e13a2p-863, 0.0,
     0.0, 0.0, 0x1.c7a446b7602abp-710, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5ffdcfe251243p-548, 0.0, 0x1.c1fee27f1c27fp-916, 0x1.05c8041b6ba87p-367, 0.0,
     0x1.3fe160789d2a7p-202, 0.0, 0.0, 0x1.963c7f0c706fep-1004,
     0x1.0ec5725395f5ep-588, 0.0, 0x1.7fe409d796598p-104, 0x1.b6feb4c2d403ap-265, 0.0,
     0.0, 0x1.dfbc6eab88eaap-947, 0.0, 0.0, 0x1.74e004c27dbc2p-224, 0.0, 0.0, 0.0,
     0x1.d01ea62accbedp-786, 0.0, 0.0, 0x1.b08d3a9f51a16p-2, 0.0, 0.0,
     0x1.0a1177a954d05p-927, 0x1.a4176effceb68p-751, 0x1.a47cb47f38d9ep-52,
     0x1.69809365f1a6dp-241, 0x1.4e69932898673p-648, 0x1.767d002ac937bp-9, 0.0,
     0x1.d408d932562f4p-592, 0x1.602232a732aabp-518, 0.0, 0x1.0c5cc708bd299p-114,
     0x1.704301dd88899p-598, 0x1.b201605ac1cdbp-578, 0.0, 0.0, 0x1.bf80121747014p-549,
     0.0, 0.0, 0x1.306d54d761781p-936, 0.0, 0.0, 0x1.0fda8dcc90242p-780, 0.0, 0.0,
     0x1.debd90c6e130ep-760, 0x1.d33e956f0bbbfp-633, 0.0, 0.0, 0.0,
     0x1.8d5186b1eed6cp-190, 0.0, 0x1.f95417142c66fp-234, 0x1.8b442bd5f7f4ep-888, 0.0,
     0x1.5d010af2640eep-365, 0.0, 0.0, 0x1.bf77ac71c210fp-420, 0.0, 0.0, 0.0,
     0x1.9bf9f22890c4ep-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4fa4967bdb77p-983, 0.0, 0x1.b195483333b3ap-917, 0x1.099b6a82bcf71p-454,
     0x1.7b09271f87bdbp-328, 0.0, 0.0, 0x1.9a47c952f578dp-446, 0.0,
     0x1.0496effbaf05ep-712, 0.0, 0x1.bc649caffa8cbp-18, 0x1.dfd3196938553p-191, 0.0,
     0.0, 0x1.9c5ed8da0bad7p-526, 0.0, 0.0, 0x1.2d5a7f64ac79fp-123,
     0x1.73501b68ea0a8p-870, 0x1.548df531ce21cp-967, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.786866286864p-32, 0x1.c9b60791e5bb9p-638, 0.0, 0.0,
     0x1.a53a0b0dcd4c2p-237, 0x1.de0d5b62b6f14p-893, 0.0, 0x1.49fa75e0cb14bp-335,
     0x1.f89c9d7d2421p-657, 0.0, 0.0, 0x1.78d9b75b9cc93p-553, 0.0, 0.0,
     0x1.696b1d00f600ep-793, 0x1.f3c177b3b2e81p-195, 0.0, 0x1.d5134d56dd372p-947,
     0x1.f57f2958ed3d4p-746, 0x1.b595f805f0879p-261, 0x1.fec83e742c1d3p-6, 0.0,
     0x1.69f68419ad79bp-613, 0.0, 0x1.d4711e93f1f9fp-725, 0.0, 0.0, 0.0, 0.0,
     0x1.b88c1c5b77c0cp-140, 0.0, 0.0, 0x1.da4e1fb4f8b5ep-705, 0x1.6c097eb58a0bfp-139,
     0.0, 0x1.ef9700bcb713dp-784, 0.0, 0.0, 0x1.fb1686340730fp-232,
     0x1.e871f9419f8d2p-665, 0x1.92cd7a7c64855p-190, 0x1.254cb3a0dc527p-542, 0.0, 0.0,
     0.0, 0x1.ffb093c0195bap-524, 0.0, 0x1.8cd6323dfd6e2p-924, 0.0, 0.0,
     0x1.c4589512e6545p-852, 0x1.e0f34b6df7929p-261, 0x1.2009e8efeb67cp-842, 0.0, 0.0,
     0x1.161791db4c0ccp-66, 0x1.731bf9e31192fp-530, 0.0, 0x1.a2bf09feb6fe7p-60, 0.0,
     0.0, 0.0, 0x1.d933dcfae903dp-669, 0.0, 0.0, 0x1.6bcdd40bf666p-86, 0.0,
     0x1.ec32e6758db44p-548, 0.0, 0.0, 0.0, 0.0, 0x1.dab9b23fa7ad2p-25,
     0x1.ff21a2c9a33e5p-294, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4ece104baeb7p-865, 0.0,
     0.0, 0.0, 0.0, 0x1.c45c1041b9b9dp-92, 0x1.4dc9e3dbefb19p-554, 0.0,
     0x1.e7c32fe94be4ep-839, 0x1.c5edb992cc6bdp-905, 0x1.cf819fbbb31a2p-804, 0.0,
     0x1.51c5a8a070dd2p-844, 0x1.f351439e3f17ep-230, 0x1.834f2b509cdfap-236, 0.0,
     0x1.4e7a2948e58bap-46, 0.0, 0x1.150a5f382cb4p-865, 0.0, 0.0, 0.0,
     0x1.f8c61380ef8cp-373, 0.0, 0x1.b53e24165f795p-969, 0x1.e8e87dd89f1c3p-235, 0.0,
     0x1.cb3f9206f1735p-135, 0.0, 0.0, 0x1.a229a16e21327p-110, 0.0,
     0x1.f5cd6d18f5b24p-586, 0x1.cd955d0c2a9fep-615, 0x1.bd8275f3d7e78p-155,
     0x1.4a663ba86a297p-426, 0.0, 0.0, 0x1.d93318cbe6bb7p-285, 0x1.16fdd2491a6d8p-456,
     0.0, 0x1.58ca4ac92f1ecp-904, 0x1.bc80da0c02a8ap-5, 0.0, 0.0,
     0x1.854877c8315c9p-338, 0.0, 0.0, 0x1.fe6d8a35e1a99p-1015,
     0x1.16006e93e1827p-271, 0x1.8c962991b03b6p-5, 0x1.aa1114aa2f7b3p-126, 0.0, 0.0,
     0x1.54a7cb10591bap-488, 0x1.37c7033ea8e27p-984, 0.0, 0.0, 0.0, 0.0,
     0x1.7b5aea9e35746p-87, 0.0, 0x1.e676777087a3dp-139, 0.0, 0x1.4437db5f17a24p-741,
     0x1.4c80cf2b08aa9p-568, 0x1.55efd346403bdp-185, 0.0, 0.0, 0.0,
     0x1.14a9a3928f7d7p-7, 0.0, 0.0, 0x1.516dff1a43246p-74, 0x1.8c445a04db0d5p-314,
     0.0, 0x1.b2e31dd27ee0bp-98, 0.0, 0x1.fa07cffe8566ap-512, 0.0,
     0x1.e6975cf1fb6a3p-119, 0x1.baf80a85209e8p-137, 0x1.ad38ea5e4937cp-824,
     0x1.fb0af7a895536p-592, 0x1.2b105735dfd43p-465, 0x1.77097e09b7431p-160, 0.0, 0.0,
     0x1.b3188568d73e9p-146, 0.0, 0x1.9e9b609b785e8p-960, 0x1.ee6e86540b89dp-106,
     0x1.7274fd389faadp-433, 0.0, 0.0, 0x1.dc97722be68c7p-373, 0.0,
     0x1.2fb9ae358bf48p-18, 0.0, 0.0, 0.0, 0x1.df7d166dccbd9p-580,
     0x1.93e52ea67a088p-13, 0x1.a4c18de9103f4p-808, 0x1.967c91c8aa529p-761, 0.0,
     0x1.c237e7a792406p-88, 0x1.4908d71c851b5p-149, 0.0, 0x1.b8890acb453adp-75, 0.0,
     0.0, 0x1.978c628e0beb3p-800, 0.0, 0.0, 0x1.8ddd38eabc5cdp-914,
     0x1.52059834ead04p-682, 0.0, 0.0, 0x1.e3e3fd14114eep-144, 0x1.ca44b12a5f56p-423,
     0x1.e302effb9f246p-421, 0x1.80e82bb3ce66fp-754, 0.0, 0x1.922c1f67da555p-663, 0.0,
     0x1.adf05aa7ce7aep-254, 0.0, 0x1.e4b4df568c8dp-735, 0.0, 0.0, 0.0,
     0x1.48b780d1100bbp-777, 0.0, 0x1.db25f1e6e95edp-831, 0x1.128917e6aed3ep-628,
     0x1.7508b6c8bec03p-958, 0.0, 0.0, 0x1.e7d09bed7a637p-11, 0.0,
     0x1.cdfc2fe1849f8p-999, 0.0, 0x1.08dc63650493ap-552, 0.0, 0x1.b4a035510180dp-540,
     0.0, 0.0, 0.0, 0x1.a7d7b3e474d5ap-687, 0x1.893e95e449886p-132,
     0x1.e6ef8f36cebc5p-342, 0x1.4bcb5be28ae51p-421, 0x1.d7502da14cc19p-441, 0.0,
     0x1.46836735a3ea1p-874, 0.0, 0.0, 0.0, 0.0, 0x1.857f174f07dd4p-720,
     0x1.be4d80e99919dp-97, 0x1.a7ed5780908b3p-583, 0x1.684559f6d5ddfp-527,
     0x1.dc8ac7284753dp-614, 0x1.f87590f2c2199p-760, 0.0, 0.0, 0.0,
     0x1.d6ad895b3fd9ep-828
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
            tmp1 = Sleef_finz_log2d1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log2d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2d1_u10purecfma bench acc %la\n", global_bench_acc);
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
