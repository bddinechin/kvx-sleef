/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd4_u35kvx.c --function Sleef_coshd4_u35kvx \
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
     0x1.9a04937b0edd4p-856, 0x1.cdf2920b6542bp-42, 0x1.441edae3ffb7ap-78,
     0x1.58a26861e7e7cp-958, 0.0, 0x1.0f4ce9d61b667p-407, 0.0, 0.0, 0.0,
     0x1.96cc4d1536ccep-548, 0.0, 0x1.986235de6459ep-890, 0.0, 0.0, 0.0,
     0x1.6729faa419ccp-620, 0.0, 0.0, 0.0, 0x1.9b40990887f96p-74,
     0x1.2dfe23c1e802dp-179, 0.0, 0.0, 0x1.9193761bfcfa6p-314, 0x1.7731d67adbf46p-672,
     0x1.554c8f2324a2fp-175, 0x1.489861e5f198fp-784, 0.0, 0.0, 0.0,
     0x1.ac4cb59ed16b4p-85, 0x1.352ed5283b48ep-671, 0x1.928aec9dbbd5cp-87,
     0x1.a735919afca86p-18, 0x1.5f39abafac7b3p-320, 0x1.ac0b618e1544bp-302, 0.0,
     0x1.7208110b53081p-82, 0.0, 0x1.eb6ab93ef2d91p-846, 0.0, 0x1.1c8cd03b23465p-605,
     0x1.0a10d1d6c17f1p-741, 0.0, 0.0, 0.0, 0.0, 0x1.85798a59fabc2p-415,
     0x1.4a683b6e66d87p-708, 0x1.88abe2a697701p-623, 0.0, 0.0, 0x1.4c8154ce6555bp-37,
     0x1.81e49b61b9002p-806, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d70777f1ab61p-495, 0.0,
     0.0, 0.0, 0x1.74c6f3b99af3ap-434, 0.0, 0.0, 0.0, 0x1.b02cfbd18b8abp-437,
     0x1.8ec1a69817cb5p-585, 0x1.be022804e80cfp-172, 0x1.4bb93b582810ep-1008, 0.0,
     0x1.b227e598a7079p-303, 0x1.2cbcccd3cf146p-715, 0x1.80c1384c544f9p-640,
     0x1.8f2337a18e56ap-756, 0x1.44dfd5b864fbap-718, 0x1.10c505672dc61p-18, 0.0,
     0x1.ada04b6e3b7cdp-168, 0x1.5eda24c28c6ddp-999, 0x1.0de99efa69a2bp-828, 0.0, 0.0,
     0.0, 0x1.c58f949268e61p-578, 0x1.2e0b947c0428p-230, 0x1.437d6b80c75b1p-11,
     0x1.63eb0ba0a0041p-210, 0.0, 0.0, 0.0, 0.0, 0x1.7e548d018ca99p-217, 0.0,
     0x1.1d27bb7d9e3d8p-391, 0.0, 0.0, 0x1.837ce48650653p-569, 0.0,
     0x1.773783b53db9dp-407, 0.0, 0x1.4c1941d8dd5d6p-684, 0x1.2d55ee15f83abp-873, 0.0,
     0x1.431a18df66ed2p-174, 0x1.62feb760311b3p-535, 0x1.1ac4266eb2f52p-437,
     0x1.cc3bc2b9631d9p-188, 0x1.46076f906e1b2p-780, 0x1.a67ac8931ea41p-130,
     0x1.684fa364ef44fp-534, 0.0, 0.0, 0x1.11387d65c3cc7p-653, 0x1.aa412c66cf9d7p-670,
     0x1.0e6ca3ea68b1fp-882, 0x1.bbc9585026178p-477, 0.0, 0x1.b888fef5e741cp-260, 0.0,
     0.0, 0x1.0ed5a252361f1p-49, 0x1.f1a5018aa705bp-65, 0.0, 0.0, 0.0, 0.0,
     0x1.1295f7c071c4p-53, 0x1.cf2f0eceea124p-990, 0x1.f6226c7e2c57bp-807,
     0x1.64844d1273d88p-378, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3843921ae4b4p-386,
     0x1.8092357b5889cp-31, 0x1.a67e2ed7aa834p-475, 0x1.2605072b55933p-442,
     0x1.7ddc26f09a422p-243, 0x1.776689bbf69cap-548, 0x1.967af6c075f56p-316,
     0x1.742344cfcda73p-884, 0x1.38cdbf2919b31p-393, 0x1.fde80531f8c01p-6,
     0x1.bb893cb40050bp-229, 0x1.72b21d68f5c11p-327, 0x1.42d2b699a260dp-575,
     0x1.d3e6544417171p-831, 0.0, 0.0, 0.0, 0x1.d8d666d52f374p-946, 0.0, 0.0,
     0x1.c49860b006754p-448, 0.0, 0x1.16f1164e77e09p-677, 0x1.41dca306f5686p-922,
     0x1.09d3c08c6817dp-800, 0x1.4b60df0345152p-355, 0x1.f45052a07cd4fp-841,
     0x1.8567b041d7acap-818, 0x1.d936bde723cf9p-873, 0.0, 0.0, 0.0,
     0x1.8b685cf567a1fp-467, 0.0, 0x1.64a99c3d5f37ep-334, 0.0, 0.0,
     0x1.d6c6c8d23c12cp-130, 0.0, 0x1.a041b071188e5p-70, 0x1.31cc020b5e7c5p-959,
     0x1.918da3472e67ap-706, 0.0, 0.0, 0x1.dc4982e9231bap-565, 0.0,
     0x1.258ca8cd7dd26p-698, 0x1.13d7411f037dcp-893, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.553d6b199ebdfp-343, 0x1.35be6c624a653p-476, 0x1.568de6cb69609p-576,
     0x1.50a7a9de2370fp-946, 0.0, 0x1.2d75fa4ed395ep-917, 0.0, 0.0,
     0x1.6d3f363d7c044p-252, 0x1.b7ee15d088977p-556, 0.0, 0x1.20abbe147afe8p-198,
     0x1.5aac5a389c5b5p-792, 0x1.7b9cd2c02810bp-671, 0x1.b2690414314c9p-64, 0.0, 0.0,
     0x1.a78c92c48c995p-592, 0x1.48b9467c06142p-961, 0.0, 0.0, 0.0, 0.0,
     0x1.4a11845a5fb8dp-520, 0.0, 0x1.65b06a4df052ap-668, 0.0, 0.0, 0.0, 0.0,
     0x1.c118f026803c7p-992, 0x1.ce2ffbaaa59e9p-987, 0x1.e1b1020ff5e82p-909, 0.0,
     0x1.f9633c90b2d8p-97, 0x1.e4d6b71acd8d2p-433, 0x1.330afb88fb4edp-122,
     0x1.2e41e42e9d073p-249, 0x1.d3b549c4093cap-982, 0.0, 0.0, 0x1.a00e8a266de86p-139,
     0.0, 0x1.5a95572cbecdp-786, 0.0, 0x1.1706b76f65439p-486, 0.0, 0.0,
     0x1.1001e04043bf9p-724, 0x1.6d3f286626b25p-382, 0.0, 0x1.c61873419e93bp-364, 0.0,
     0.0, 0x1.59f74edd32729p-315, 0.0, 0x1.0ce2c157406fdp-397, 0x1.24f766330a8a8p-831,
     0x1.27c31014ba2c7p-909, 0.0, 0.0, 0x1.4a218037b3991p-484, 0.0, 0.0,
     0x1.ba5a4ef9a5769p-839, 0.0, 0x1.e13659877b04cp-940, 0x1.ea1037620f2fp-938, 0.0,
     0x1.d5e36893aba3bp-244, 0x1.cdc844684cad5p-29, 0.0, 0x1.caaa85a70a23ep-654, 0.0,
     0x1.4f1cc66c0c04ap-184, 0.0, 0.0, 0x1.471f528e9e59ap-133, 0x1.63159e44ff68bp-847,
     0.0, 0.0, 0.0, 0.0, 0x1.bab291cb818p-598, 0x1.d052373163c3bp-274, 0.0,
     0x1.47f9b83440784p-576, 0.0, 0x1.42d62aad340f6p-616, 0.0, 0.0,
     0x1.80fc93370d983p-450, 0x1.da06a1637a47fp-477, 0x1.50869f84de5f8p-381, 0.0, 0.0,
     0.0, 0x1.09f872fba05e6p-236, 0.0, 0x1.e8d598f00cd98p-729, 0x1.d98193dd1dcf6p-9,
     0.0, 0x1.d2381e63b6212p-111, 0x1.1dc5be094c7ep-31, 0x1.b5558300a59f2p-415,
     0x1.951d48bff622bp-698, 0.0, 0.0, 0.0, 0x1.f07e9ef9d512fp-974, 0.0, 0.0,
     0x1.64144a82ef193p-4, 0x1.641a1389e8eeep-428, 0x1.d1ccbb01c3f2ap-248,
     0x1.2daefc0485c01p-50, 0x1.897d2d44eee8cp-201, 0.0, 0x1.1bda0c04a3643p-274, 0.0,
     0x1.b2e63224c03fdp-300, 0.0, 0.0, 0.0, 0.0, 0x1.d356b99dc3b11p-784, 0.0, 0.0,
     0x1.fbf9810b730ep-169, 0x1.f0ab6abb1bcefp-241, 0.0, 0x1.c6f4fc0fbeb61p-24, 0.0,
     0.0, 0.0, 0.0, 0x1.968e22935372dp-595, 0x1.f1061f4b407b1p-929,
     0x1.564d959624ea2p-700, 0x1.2e36e37f8af6cp-852, 0.0, 0.0, 0x1.5011d5f2646d1p-764,
     0x1.ea89f973a4bafp-461, 0.0, 0.0, 0.0, 0x1.e13a789cd9747p-264,
     0x1.e4688636e532bp-221, 0.0, 0.0, 0x1.67935dde0a11p-739, 0.0, 0.0,
     0x1.cf738bb0d2b79p-516, 0x1.2c4c23364fc7p-573, 0x1.11e12bd325294p-503,
     0x1.760f6a3c0117dp-280, 0x1.59c813a7f229ap-78, 0x1.9c5d353023d12p-599, 0.0,
     0x1.e66a3f557b50cp-886, 0x1.0905e998436f1p-557, 0.0, 0x1.db9f2d5f989ep-281, 0.0,
     0.0, 0x1.86923e55254b3p-628, 0x1.4b6bae5a0a757p-988, 0x1.730c0e2d30177p-670,
     0x1.886dc66c4470cp-669, 0.0, 0.0, 0x1.23787a4e91708p-812, 0x1.acf3673b59cb3p-707,
     0.0, 0x1.02c47a63f72fep-794, 0x1.c82c406102022p-370, 0.0, 0x1.1f0f2b33ecd86p-706,
     0.0, 0.0, 0.0, 0.0, 0x1.7129a59170856p-206, 0.0, 0.0, 0.0,
     0x1.9b42c31d6ae11p-555, 0.0, 0x1.901ea69123d85p-19, 0.0, 0x1.6d980665d1573p-613,
     0x1.b8c5b3e84846ep-842, 0x1.3f82a6f624f85p-137, 0x1.980abd0c42b3ap-570, 0.0, 0.0,
     0.0, 0x1.2cac5fb2a125bp-806, 0.0, 0.0, 0.0, 0.0, 0x1.687f36be22eaep-183,
     0x1.3a5752fe45be1p-321, 0x1.3f82c33c5cac3p-158, 0x1.e903575c1335fp-602,
     0x1.d8b2dfb8b27d4p-959, 0x1.221423169048dp-929, 0x1.fec8e80b9668cp-729,
     0x1.251c6a80314e5p-417, 0x1.5d17083342c8cp-815, 0x1.82698bc7f49e8p-948, 0.0,
     0x1.d4466366b68c2p-685, 0x1.67354a1fd8fb3p-648, 0.0, 0x1.af5bd2fe10a2fp-210,
     0x1.7a36d169203f2p-201, 0.0, 0x1.32ce84681d0a6p-940, 0.0, 0.0,
     0x1.374dd79b60e5bp-227, 0x1.c8d151bde93fbp-314, 0.0, 0x1.d1794fe579801p-893, 0.0,
     0.0, 0x1.a9ab4cc91cdb3p-437, 0.0, 0x1.e880c54386487p-153, 0.0, 0.0, 0.0,
     0x1.9a1d965d9684p-213, 0x1.9421c267c58eep-998, 0x1.718d672220196p-599, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2b17291eb61e6p-272, 0x1.917d8b926c9f3p-10, 0.0, 0.0,
     0x1.91892b0befcd8p-332, 0.0, 0x1.3e893a9ee87p-255, 0.0, 0x1.e59abaf09c34ep-221,
     0.0, 0x1.ee4424634f806p-712, 0.0, 0x1.aad90e2bca19p-67, 0x1.a29ede2e5b608p-463,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ffc441d835545p-279,
     0x1.94f9308ad20fdp-348, 0x1.ad519f6f99fd6p-64, 0x1.3723a4a47443ap-809,
     0x1.73b9f4ea27321p-780, 0x1.70f9ff5f3c1dcp-358, 0.0, 0x1.6a65128d15777p-782,
     0x1.f42e623b5cb4cp-122, 0x1.1dcf8b4bbde7bp-819, 0.0, 0.0, 0.0,
     0x1.b24a93ee167bbp-583, 0.0, 0.0, 0x1.dd34fbca99f77p-798, 0x1.92fa1857255c4p-674,
     0x1.169f5783f5595p-196, 0x1.f2767ef7b319ep-376, 0.0, 0.0, 0.0,
     0x1.68bc1a3bc25e1p-344, 0x1.b265f56c8ecd2p-600, 0.0, 0x1.98297c7ee4f1fp-610,
     0x1.0479156dfa6d9p-928, 0x1.29126e1f8a3d9p-841, 0x1.faab0beaaaa76p-240, 0.0,
     0x1.3fdb3e56d50f8p-880, 0x1.662603a5e355ep-187, 0.0, 0x1.fa324a576f778p-816, 0.0,
     0x1.6ec79c9a9f4d5p-248, 0x1.9fd2fc6d46445p-935, 0.0, 0.0, 0.0,
     0x1.58f8aef2b0029p-115, 0.0, 0.0, 0x1.5912da0e23dfdp-307, 0x1.05b47f04126f3p-989,
     0x1.37ef7e7fea088p-841, 0x1.0cef1348ece7ap-876, 0x1.22486404a45fp-821, 0.0, 0.0,
     0x1.8a77fe4515b5dp-953, 0.0, 0x1.2d3a17b69eb05p-102, 0x1.9e39528229827p-284,
     0x1.06cfd16b1a96ep-838, 0x1.3975789c7a7c6p-124, 0.0, 0.0, 0.0,
     0x1.91a6dfd2a350fp-755, 0.0, 0.0, 0x1.42404542ce9a4p-777, 0x1.13554b18d7611p-874,
     0x1.a2f2c76c6c8ffp-773, 0.0, 0.0, 0.0, 0.0, 0x1.1b63716d7dcc5p-917, 0.0,
     0x1.4e5825b2529e9p-299, 0.0, 0x1.70c22857c6c7fp-395, 0x1.465b83d342d18p-402,
     0x1.199aa34da921cp-511, 0x1.91d24afaa26f5p-249, 0x1.185010e36d848p-304,
     0x1.fc62cb6d6781ep-704, 0.0, 0x1.9a25922c38f19p-890, 0x1.83159d06fb0bbp-142, 0.0,
     0.0, 0x1.92aa99b2dfc85p-182, 0.0, 0x1.8f326406082dep-423, 0.0,
     0x1.7e49c724bc555p-492, 0x1.345b550f7bf94p-12, 0x1.ded5f572c82d1p-431, 0.0, 0.0,
     0x1.fb814c9ffd3dcp-209, 0x1.424c71ebf9b04p-605, 0x1.85fb814a968adp-778,
     0x1.ddf7fc9ba6feap-434, 0x1.d7319e0a64449p-43, 0.0, 0x1.7a96fa75e2a3bp-604, 0.0,
     0x1.09a7b38a77dbdp-308, 0.0, 0.0, 0x1.96ffde0349372p-892, 0x1.dbddaaf406dabp-61,
     0x1.4b5e353f4c38ep-312, 0x1.d544530af9239p-809, 0x1.6254104277614p-890, 0.0, 0.0,
     0x1.f9f38303417a6p-686, 0.0, 0x1.8d3dcf3b0015dp-836, 0x1.20f02bde354f6p-101, 0.0,
     0x1.150c1781e5f1ep-1020, 0x1.d004cfe11eabbp-9, 0.0, 0.0, 0.0,
     0x1.b47a9d6e2f96bp-689, 0x1.e5de37e48c00dp-20, 0x1.8890982299383p-691, 0.0,
     0x1.4b5a931f41d4dp-2, 0.0, 0x1.fe9d23f21afd9p-249, 0x1.36da4d29a9afep-428,
     0x1.4b6909728791ep-474, 0.0, 0x1.f545dac06d5cfp-495, 0x1.b878be3333dddp-963, 0.0,
     0.0, 0x1.1f2143ba5452ep-408, 0x1.e7c28b3e3dcb2p-102, 0.0, 0.0,
     0x1.5edbead23dff8p-565, 0.0, 0.0, 0.0, 0.0, 0x1.ce37224ba4efp-984,
     0x1.db8937817f7acp-18, 0x1.2e94ddab2ba03p-296, 0x1.ecc92cb751015p-710, 0.0, 0.0,
     0.0, 0x1.8c8af1c44aa06p-641, 0.0, 0x1.f917f76116bacp-967, 0.0,
     0x1.740ebb216a94ap-231, 0.0, 0x1.524b03f04b68p-4, 0.0, 0.0, 0.0, 0.0,
     0x1.6d28aaec41af2p-113, 0.0, 0.0, 0x1.545afb9ed0d75p-374, 0x1.e3e2f427aaf6dp-252,
     0.0, 0.0, 0.0, 0x1.f3b2a63039652p-450, 0.0, 0.0, 0.0, 0.0,
     0x1.a0721969efb9fp-252, 0x1.7d3be172069ep-471, 0x1.bc8c13052c726p-749, 0.0, 0.0,
     0.0, 0x1.4a7da26285a16p-481, 0x1.e3dd626714fbp-27, 0x1.fe86b0965da93p-419, 0.0,
     0x1.4d04b2e085adfp-504, 0x1.597160e721d18p-922, 0x1.538c832b794b4p-762,
     0x1.ec5cc0d9369c7p-206, 0x1.5f234eb72c4ffp-107, 0x1.2aab51506d9cap-131,
     0x1.b4aeb0c9e2a7dp-760, 0x1.70544e0fdab53p-483, 0.0, 0.0, 0.0,
     0x1.b1da04cdbbdeep-762, 0x1.3437aef13fdcdp-112, 0x1.b90ee3709fed7p-636, 0.0, 0.0,
     0.0, 0x1.730555d04ed2fp-506, 0x1.e8d2ba3ccadd9p-794, 0.0, 0x1.9e2ceff7c6eeap-791,
     0x1.412bee8673027p-673, 0x1.0cde61282c64ap-465, 0x1.63ef40c1f39e9p-933, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8e085cca96911p-582, 0x1.9045739829e7p-749,
     0x1.72cb7fe021461p-158, 0x1.a64e3b3b76ea8p-129, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.50e63cc1bff1cp-856, 0x1.05b3321663e6fp-826, 0.0, 0.0, 0.0,
     0x1.e7cf47b62ab17p-177, 0.0, 0x1.5e0b6649c6d7fp-874, 0x1.e7b333c370f4bp-930, 0.0,
     0x1.c0903ecb06a46p-543, 0x1.0c47997898d5bp-618, 0.0, 0x1.6213ef9077677p-903, 0.0,
     0x1.b75e5027c4865p-91, 0.0, 0x1.d09ea1788138p-539, 0x1.7495bb0a9027dp-203,
     0x1.670d32cefe96p-747, 0x1.af0a164e1c581p-211, 0.0, 0.0, 0.0, 0.0,
     0x1.5b8137be99375p-839, 0x1.062be0c9efdf1p-139, 0.0, 0x1.16263cedbc08dp-896, 0.0,
     0x1.b2785e9bf05b9p-16, 0x1.52d0dc728942ep-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1d76415185d57p-300, 0.0, 0x1.58ee45cec75a7p-416, 0.0, 0x1.ac33316a90f5cp-93,
     0x1.e55b5b7f30245p-276, 0x1.8f9cec01aca23p-927, 0x1.07d21e86bc1cbp-397,
     0x1.45ad09b42591ap-437, 0x1.1acb9c0135a9bp-498, 0.0, 0x1.8d9fc8a41e16fp-796, 0.0,
     0.0, 0x1.c0d37112ca4edp-856, 0.0, 0x1.f8a01d04eaad7p-800, 0x1.531ef7200f392p-594,
     0x1.ec973dfc5793ep-849, 0.0, 0x1.2189a330a7f07p-713, 0.0, 0.0,
     0x1.2b6d20b8a4842p-200, 0x1.e17f18a772ac2p-285, 0x1.e04b176d20394p-766, 0.0, 0.0,
     0x1.87ef281def5cap-269, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a24fbcdf890dep-202, 0.0,
     0x1.8cce5f05ccf6p-474, 0x1.9e05784431174p-272, 0.0, 0x1.2a36ea04cb21cp-343,
     0x1.285e09a07497bp-127, 0x1.3b55d00d3950ep-579, 0x1.9420a35c4e3f4p-543,
     0x1.64e6b70247f44p-761, 0.0, 0x1.3700ee386bb23p-341, 0.0, 0x1.a9702a90a5f73p-792,
     0.0, 0x1.ff943acf4338bp-961, 0.0, 0x1.f4c30818b2a3p-752, 0.0,
     0x1.6236bed65d311p-298, 0.0, 0x1.9f8bba58105adp-846, 0.0, 0.0,
     0x1.ed3adce702752p-829, 0.0, 0.0, 0x1.398c9a0b26c92p-308, 0.0, 0.0, 0.0,
     0x1.7c740a7372c98p-222, 0.0, 0x1.912cc4d7784a2p-591, 0x1.7ddef14d8299fp-622,
     0x1.8e76ac4ed6ad1p-860, 0.0, 0.0, 0.0, 0x1.ec8de8ad1663fp-511, 0.0,
     0x1.dadf1446232dep-201, 0.0, 0.0, 0x1.e0bdd48d9af41p-1014, 0.0,
     0x1.accf8ea35378p-744, 0x1.9484b0af5950fp-99, 0.0, 0.0, 0.0,
     0x1.cae92a00c584cp-120, 0x1.f45ce35f24d68p-60, 0x1.5a5d6ef6f1a58p-345, 0.0,
     0x1.54a874ba523bdp-609, 0.0, 0x1.ec82ae31aaff8p-277, 0x1.6d1b0c30efc57p-771, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d67a939a2a77p-385, 0.0, 0.0, 0.0,
     0x1.8d8261a375c35p-104, 0.0, 0x1.4260141a6d5c3p-926, 0.0, 0x1.a6514c7209b62p-118,
     0x1.62a31238203c3p-250, 0x1.df093c34111f8p-122, 0x1.99279a2d00b01p-636,
     0x1.9fcdef2ebb99fp-753, 0x1.11a08bf4b8d0cp-960, 0.0, 0x1.944b3f3f10ac8p-52,
     0x1.a92b8c95ecdap-44, 0x1.db5dfcb7671d5p-453, 0.0, 0x1.df1d96521e5b2p-939,
     0x1.78ba9388e1d58p-178, 0x1.070f9d0cc1c4ap-870, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.431892b9f7a8ap-835, 0x1.5be4e8c663dedp-930,
     0x1.90c64f8baf0bep-825, 0x1.e83c2cfca253ap-338, 0.0, 0x1.2cfacb2031f4ap-720,
     0x1.2c62e1f8e8448p-29, 0.0, 0x1.375912cd7ddbap-149, 0x1.c770de89f90e4p-478,
     0x1.50b37b6c6bf7ap-820, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba91e03a3b87cp-118, 0x1p0, 0x1.fdecfd463cfb3p-27, 0.0,
     0x1.02f006d798b98p-220, 0.0, 0x1.3713507c29ae8p-237, 0x1.d3cb1cec31ae9p-659, 0.0,
     0.0, 0.0, 0x1.7160f89909dap-638, 0x1.bd53d5b2ddf01p-402, 0.0, 0.0, 0.0,
     0x1.f365d9d06805p-634, 0x1.13bc620e99c87p-867, 0.0, 0x1.51815e9acb39ep-653, 0.0,
     0x1.c8dbd53adcafep-90, 0.0, 0.0, 0x1.2d4a7f59dcd5ep-667, 0x1.256351d617a27p-377,
     0x1.d33f8052869a2p-920, 0x1.74a5cf5f83d0dp-745, 0x1.954f82d408cafp-209,
     0x1.654597e2d3011p-933, 0x1.71ed780082072p-133, 0.0, 0x1.03033b3c6157p-133,
     0x1.05df2fd417774p-136, 0.0, 0x1.619fe8ee55d5ep-742, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf6199ca11138p-240, 0x1.4ef2fe212f09ep-187, 0.0, 0x1.99bcdac9cc5a5p-17, 0.0,
     0x1.615fdf45693e7p-909, 0.0, 0.0, 0x1.af6447900cc85p-858, 0x1.352c0ab4d1ed9p-879,
     0.0, 0x1.b694a848e54d6p-402, 0.0, 0x1.c23fb86cfd999p-246, 0.0, 0.0,
     0x1.5b3950cfab93dp-155, 0x1.179a5e9f7e60fp-796, 0.0, 0x1.073833df5aadbp-10, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d6adc11f8fc9p-713, 0.0,
     0x1.8f854af0be2cap-466, 0x1.364d76b70dec4p-738, 0.0, 0.0,
     0x1.5468ddf625db1p-1012, 0x1.c88d211b9d552p-106, 0x1.2b43e59430424p-139, 0.0,
     0x1p0, 0.0, 0.0, 0.0, 0x1.280875df5dcadp-220, 0x1.25b4e053c1617p-117, 0.0,
     0x1.5bda3fa46cdbcp-1006, 0.0, 0.0, 0x1.eb74d6ff23876p-142, 0.0,
     0x1.240cd8cc02fd7p-326, 0.0, 0.0, 0.0, 0x1.9b9986e43892bp-874,
     0x1.f13f3660a605ep-603, 0.0, 0.0, 0x1.c7bf0132fc627p-102, 0x1.a21aa62c3456p-472,
     0x1.913310e67ad2p-442, 0.0, 0x1.3f2fe36596a5bp-833, 0x1.405e3e7b95debp-995, 0.0,
     0x1.7123f5740c782p-8, 0.0, 0.0, 0.0, 0x1.3f4df4c2ad5a8p-300, 0.0,
     0x1.f6262d34aeb84p-579, 0.0, 0.0, 0.0, 0x1.132aa13f6dedfp-278,
     0x1.ae1161e932b53p-232, 0.0, 0x1.f577076235f3ep-34, 0x1.4ad8db3e1bd5fp-622, 0.0,
     0x1.4b8c67767b89bp-922, 0x1.e871889a53fc2p-148, 0.0, 0.0, 0.0,
     0x1.9e927e216f79bp-203, 0.0, 0.0, 0x1.4a041d2df6e37p-578, 0x1.fa3988798be17p-143,
     0.0, 0x1.307b806edc0c1p-681, 0x1.4ceb70429c586p-993, 0.0
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
            tmp1 = Sleef_coshd4_u35kvx(tmp0);
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
    printf("Sleef_coshd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_coshd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
