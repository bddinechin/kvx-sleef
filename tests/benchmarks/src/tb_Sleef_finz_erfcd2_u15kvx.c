/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcd2_u15kvx.c --function \
 *     Sleef_finz_erfcd2_u15kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.6230eff672878p-260, 0.0, 0x1.14b8f0dd1289p-589, 0x1.066240ae0be45p-825,
     0x1.9eb00d8761bf9p-574, 0x1.82888c62d293cp-705, 0.0, 0x1.40dd28f936801p-969,
     0x1.dfbc0eda83865p-549, 0x1.771e5813e2669p-657, 0x1.a86570338aafdp-907,
     0x1.041a12e8d13b7p-763, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aa371e90acbe3p-883,
     0x1.5aed73baac98fp-640, 0x1.f125882495a38p-279, 0x1.c8e799060572fp-770, 0.0, 0.0,
     0x1.bc7bb0ff6768ep-539, 0x1.d8cf7edf3f97dp-612, 0x1.d0ad3d3139ceap-939,
     0x1.0a17668d17285p-492, 0x1.32c29feb1d5ecp-730, 0.0, 0.0, 0.0, 0.0,
     0x1.758cae8844ddcp-365, 0.0, 0.0, 0x1.c1909d2a858cp-970, 0.0, 0.0,
     0x1.2eb08ee479b33p-720, 0x1.cb105efc96b19p-188, 0.0, 0.0, 0x1.b59b33ba66b78p-555,
     0x1.545ec865afd3p-848, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95b83b6746eeap-758, 0.0,
     0x1.10b14cf492ff5p-1012, 0.0, 0.0, 0x1.e36c5936c73f6p-110, 0.0,
     0x1.1635618d7d69ap-589, 0x1.392761f704953p-711, 0x1.e1ec6aea30aabp-374,
     0x1.666579560da89p-70, 0x1.d20ba9c205328p-962, 0.0, 0x1.ac366ffba2034p-106, 0.0,
     0.0, 0x1.763a3191e62f1p-880, 0x1.3a367340c339ep-618, 0.0, 0.0,
     0x1.23f662896b71ep-879, 0.0, 0.0, 0.0, 0x1.49678fadc54e1p-122,
     0x1.2677f8ce5d291p-455, 0x1.a705ae60a844p-962, 0x1.59522f05b1c5fp-234, 0.0,
     0x1.6b7ba83b1f89ep-922, 0.0, 0.0, 0x1.fb51cc813629fp-359, 0x1.a650464aa04ap-123,
     0x1.66391b98be6f2p-440, 0.0, 0x1.e3cbdb049c47ap-827, 0x1.c81fecf4c00b1p-612,
     0x1.53e2edeb8a99fp-550, 0x1.13db9cdafd31p-639, 0.0, 0.0, 0.0,
     0x1.da6d06ea66e37p-17, 0.0, 0x1.52f40952e3bccp-1003, 0.0, 0.0,
     0x1.0f57e798de98p-580, 0.0, 0.0, 0.0, 0x1.b32d43344942cp-174, 0.0, 0.0, 0.0,
     0x1.d6ec7c50119b3p-895, 0x1.57567153fe7eep-285, 0.0, 0.0, 0.0, 0.0,
     0x1.11157faf0d237p-66, 0.0, 0.0, 0x1.738563c9795cap-64, 0x1.6d64594784e33p-1008,
     0x1.3e62b754667c9p-1011, 0.0, 0x1.c8e1673b0a9b4p-892, 0x1.4b6b649723f0dp-408,
     0x1.63b3f3f7fa07cp-386, 0.0, 0x1.19dc2938a2c77p-252, 0x1.c041581273a3dp-45,
     0x1.1b609df671a45p-786, 0.0, 0.0, 0.0, 0x1.65e330e91608fp-208, 0.0,
     0x1.725f327e28e4dp-854, 0.0, 0x1.dbd51fbad85f1p-71, 0x1.2073e6aba0ec8p-255, 0.0,
     0x1.1789f6e597cefp-833, 0.0, 0.0, 0x1.23eb7af98fdd8p-970, 0x1.09d9acf3424e3p-672,
     0x1.03fda44a70b7bp-297, 0x1.c65a86d6763d3p-269, 0.0, 0x1.db9cedc4374d3p-501, 0.0,
     0x1.c7d04fc22324bp-506, 0.0, 0.0, 0x1.b522051ff800fp-855, 0.0,
     0x1.b5da524b09342p-341, 0x1.dcc2a808263ep-555, 0x1.8928509111291p-55, 0.0,
     0x1.9ca8bae516ac5p-410, 0x1.5b337a4283319p-861, 0.0, 0.0, 0x1.fee242453f022p-721,
     0.0, 0x1.97fe0bc741ff1p-266, 0.0, 0x1.0b38d3538226cp-397, 0.0, 0.0, 0.0,
     0x1.14420d6e10a65p-719, 0x1.2ce2b667b4d23p-193, 0x1.0d2a2158dc336p-321, 0.0, 0.0,
     0x1.ba8ea623e100ep-435, 0.0, 0x1.9d7f631bb4cb8p-772, 0.0, 0x1.0005c41209e42p-258,
     0x1.071b73bc77e15p-158, 0x1.9474d125a3de1p-450, 0.0, 0x1.9ebde377dc354p-179, 0.0,
     0x1.40b8809afe19bp-151, 0x1.5dc7bc2636d5ep-109, 0.0, 0x1.485405aabb56dp-449, 0.0,
     0.0, 0x1.16efbf22809a9p-459, 0x1.acdf734c45394p-899, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.174d561ebe256p-786, 0x1.2bfaa9aa518fdp-727, 0.0,
     0x1.f63dde1c89b3fp-595, 0.0, 0.0, 0x1.563ad3b8c225ep-386, 0.0, 0.0,
     0x1.588e3240ab38p-278, 0x1.4e530b0d8484p-814, 0.0, 0.0, 0x1.46058354c9e59p-633,
     0x1.60264e173fd7fp-333, 0x1.0c25c208082d5p-619, 0x1.689f89b21de23p-750, 0.0, 0.0,
     0x1.f99271c5edc46p-751, 0x1.c9af022cf7607p-240, 0x1.37369a1b4963dp-512, 0.0, 0.0,
     0.0, 0.0, 0x1.0a199ead5fa3bp-305, 0.0, 0x1.6e00def5fff71p-147,
     0x1.515f5390c8ce4p-439, 0x1.33cfbf44a0995p-876, 0.0, 0.0, 0x1.f5970acf7e24cp-80,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f33ecd2fd24cp-355, 0.0,
     0x1.0a07c49a53bbap-775, 0.0, 0.0, 0x1.93a79ab2c2ce6p-629, 0x1.f9ee9229dadbcp-369,
     0.0, 0x1.79cce44a92525p-401, 0x1.8776c63fbb53ep-443, 0x1.4eff72dd8180dp-76,
     0x1.cc0b8d939fdf7p-916, 0x1.8c0d61d7d4693p-982, 0x1.cb6f839ce1be4p-545,
     0x1.50e92e04aaca6p-79, 0.0, 0x1.9eaeaf0d43dcfp-575, 0x1.137661657f719p-853,
     0x1.29e477a52c978p-659, 0x1.56480ec471acp-189, 0x1.6edae40ea5475p-165,
     0x1.8ef8e9d862354p-151, 0x1.d984d6a16fe7dp-184, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.162b8fbe96b44p-308, 0.0, 0.0, 0x1.caa54597ca83dp-395, 0x1.f9cc1f7e61c3p-555,
     0.0, 0.0, 0.0, 0.0, 0x1.df93e425c38fp-461, 0x1.287c6665b9532p-127,
     0x1.adacb283a64f5p-205, 0.0, 0.0, 0.0, 0x1.83d9ff217b53cp-152, 0.0, 0.0, 0.0,
     0x1.5db59d1cab02fp-712, 0.0, 0x1.f52b8a708c9e9p-538, 0x1.18c53f3239db9p-277, 0.0,
     0.0, 0.0, 0.0, 0x1.a0f50362f758dp-187, 0x1.d0678a06eb9a5p-332,
     0x1.2692292c4ce21p-485, 0x1.6dcfe4f9d59e4p-254, 0x1.a2a6150fa6bdcp-680, 0.0, 0.0,
     0x1.55371d6519411p-448, 0.0, 0x1.6bdf262dbe605p-967, 0.0, 0x1.528ba818c9cfcp-410,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a608eb27801c5p-649, 0x1.6931d2d42afafp-149,
     0x1.377066e4ddb61p-948, 0x1.107bb7fc4a76ap-427, 0x1.45b538874d42dp-151,
     0x1.b7ed547f06e2fp-567, 0.0, 0.0, 0x1.6d6477e4b0e1bp-401, 0.0,
     0x1.0a5bec2f5c0e3p-188, 0x1.ba63dcde29b48p-723, 0.0, 0.0, 0.0,
     0x1.cb128de290314p-973, 0x1.1a436766aff61p-871, 0x1.6663d856a545ap-177, 0.0, 0.0,
     0x1.e7f99663b6143p-627, 0.0, 0x1.9f03019816e8dp-45, 0.0, 0.0, 0.0,
     0x1.b1f510659a0d9p-67, 0.0, 0.0, 0x1.95dc202e72af3p-142, 0.0, 0.0,
     0x1.732bae2a9966fp-206, 0.0, 0.0, 0.0, 0x1.9e1b5a6fc7213p-795,
     0x1.6149232098157p-568, 0x1.b0ad7c37b8fcdp-939, 0x1.1bc8f81704bfcp-295,
     0x1.a149471e40607p-650, 0x1.5ef2c65ff44bap-56, 0.0, 0x1.a276201385d13p-280, 0.0,
     0.0, 0x1.b91f719d63627p-671, 0x1.201a69dc3f7c7p-978, 0x1.6e3182b7fe816p-685, 0.0,
     0.0, 0x1.733a937d4654p-867, 0x1.6e0adc014e60ap-520, 0x1.d534cfa842c22p-276, 0.0,
     0.0, 0.0, 0x1.d7bf8e53cdf84p-42, 0x1.b12680172e1b3p-409, 0.0,
     0x1.e91dd1b994173p-686, 0x1.e08d8c1dee23ap-336, 0x1.b06e48d24f16ep-225,
     0x1.327c4e25a2963p-63, 0x1.3f60ebf0e88fdp-370, 0x1.0010683092badp-573,
     0x1.3c7fa24c7a088p-141, 0x1.4b526832a2d69p-860, 0x1.5d6e2b5d8d3fep-24, 0.0,
     0x1.fb02c68d08997p-945, 0.0, 0.0, 0x1.85158887c1b75p-816, 0x1.7dbeb1b7002eep-249,
     0.0, 0x1.680683a1880fcp-27, 0.0, 0.0, 0x1.d953bbd6ef4a8p-17, 0.0,
     0x1.0e91eac06a0c9p-676, 0.0, 0.0, 0x1.93f6c8cbc8432p-637, 0x1.c678ae7532ccap-907,
     0.0, 0x1.27d27a2b6364p-770, 0x1.d26b410e74777p-869, 0x1.bc512430d317ap-123, 0.0,
     0.0, 0x1.0b9b4a6cfa993p-912, 0x1.48a276ea8fc88p-844, 0x1.9ba5529af8a3ap-124,
     0x1.dc13e6301ddd1p-776, 0.0, 0.0, 0x1.e8937d35ef1dp-907, 0.0, 0.0, 0.0,
     0x1.d5fa719302e1ep-210, 0x1.77f283fc0b6efp-965, 0x1.1f563f5e80d23p-146,
     0x1.63a8351e13919p-956, 0.0, 0x1.a4f086c78be6ap-442, 0.0, 0x1.cf6946fc85cbcp-870,
     0x1.d7c2600c36404p-718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5abd0a674b1b4p-624,
     0.0, 0.0, 0x1.cccb6de02cf34p-687, 0x1.5f5391d37b48bp-292, 0.0,
     0x1.07218768ebb0fp-436, 0x1.b166909162b1bp-771, 0.0, 0.0, 0.0,
     0x1.536f59e857ba7p-1000, 0x1.f89173f81cc0dp-777, 0.0, 0.0,
     0x1.5a745ae79e645p-182, 0.0, 0.0, 0x1.8bc6b40cf3c8fp-642, 0x1.06f6f38597f2ap-743,
     0.0, 0x1.4fb43a2da1babp-226, 0x1.ff57fcf6c5555p-990, 0x1.a5a40eb09e353p-1006,
     0.0, 0x1.57f839f612dep-375, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b30f075cc85b6p-643, 0.0,
     0x1.3a37356b42794p-199, 0x1.48f84d5baee74p-434, 0x1.1c457a280d808p-120,
     0x1.12ca27f036865p-405, 0.0, 0.0, 0x1.6615b11c1115cp-878, 0.0,
     0x1.0d1c61c8c8432p-448, 0.0, 0x1.97fb0c44f9e6cp-364, 0.0, 0.0,
     0x1.e0f82a111fb65p-830, 0.0, 0x1.3eb73a0875e34p-263, 0x1.e7aa3373644cap-890, 0.0,
     0.0, 0.0, 0x1.d34bce3a5fb63p-98, 0.0, 0x1.41abdb59f59cfp-537,
     0x1.a21401578ae4ap-343, 0.0, 0.0, 0x1.5bf755ba6d6a3p-280, 0.0,
     0x1.380c51c6956b9p-845, 0.0, 0x1.1d56974f91ca7p-955, 0.0, 0.0,
     0x1.85025666edfcp-98, 0.0, 0.0, 0x1.e043ea79980f3p-663, 0x1.1640b1c6c4564p-234,
     0x1.edb058a01a9fcp-455, 0x1.15d914e26a937p-538, 0.0, 0.0, 0.0, 0.0,
     0x1.048d04ebea72cp-674, 0.0, 0.0, 0x1.8af52082ae40bp-957, 0x1.659f2fb98dbabp-255,
     0.0, 0.0, 0x1.4eceb813512b7p-967, 0x1.2785d28475dc5p-494, 0.0,
     0x1.ccb26ca1d123fp-347, 0x1.f3458521315cdp-61, 0.0, 0x1.57a3d1b352eeep-482, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db08d31c53589p-624, 0.0, 0x1.3a0a497d15d5ap-342,
     0x1.805bec08e893dp-199, 0.0, 0.0, 0.0, 0x1.8154d203cc8a2p-593,
     0x1.7f340b9c6cf7dp-299, 0x1.09b34745ebe63p-449, 0x1.f921f0aaceb7cp-740, 0.0, 0.0,
     0.0, 0.0, 0x1.5bbed643cf221p-807, 0x1.bf547d05879f5p-108, 0x1.e57745baaa909p-468,
     0.0, 0x1.8f5e3a7397d98p-1014, 0x1.40b81c9867fedp-254, 0.0,
     0x1.e76566e91b159p-964, 0x1.112c3a7115278p-761, 0x1.c984067cfc8abp-612,
     0x1.d9e2c65b2b878p-61, 0.0, 0x1.995627ff90be1p-612, 0.0, 0.0, 0.0,
     0x1.bbf893f48c3ebp-633, 0.0, 0x1.e338a598f711dp-356, 0.0, 0.0,
     0x1.c1c12dae72ba1p-458, 0x1.2f1827b62969fp-407, 0.0, 0.0, 0x1.f610e6e68b4aap-701,
     0x1.4ae36724d1f5ep-321, 0x1.8076baa7a7fd7p-787, 0.0, 0x1.52f295911fc37p-359, 0.0,
     0x1.41c9a052081b3p-989, 0x1.c1729a08bde2ep-362, 0x1.df64f8745859p-492,
     0x1.8cde251e0103fp-869, 0.0, 0.0, 0x1.a4cb29fc6526dp-728, 0.0, 0.0,
     0x1.bbb26611a0e54p-772, 0x1.91c78d6a4395ep-866, 0.0, 0x1.080caf18b614cp-426,
     0x1.38fbd7cc6058p-789, 0.0, 0.0, 0x1.ec56246610d8cp-376, 0x1.69ebd253cc6d8p-528,
     0.0, 0x1.ff6169cd9f767p-983, 0x1.a9ff2b3e64048p-219, 0.0, 0x1.da1583eb82ec1p-650,
     0x1.83db4c12dd0e5p-623, 0.0, 0.0, 0x1.eddb1b3bc8424p-801, 0x1.feefa2fce54b3p-374,
     0.0, 0x1.ab7dc2c082189p-838, 0.0, 0x1.c88e91edb8dedp-959, 0.0,
     0x1.06bedb7f6c0dap-494, 0x1.402aa0a7cf662p-752, 0x1.4909d0cc30317p-162,
     0x1.e86eac0f9063cp-533, 0.0, 0.0, 0x1.1447925b636ccp-603, 0x1.3141d7232e2e4p-665,
     0x1.137c5f623563ap-880, 0.0, 0.0, 0.0, 0x1.c2d1736d3dc1bp-142,
     0x1.d99bcb6d3eb3p-158, 0.0, 0.0, 0.0, 0x1.ae760171c15a4p-165, 0.0, 0.0, 0.0,
     0x1.dd81fd78c30edp-322, 0.0, 0x1.e845cb51e552fp-885, 0.0, 0x1.35228198954d8p-165,
     0x1.7b311999b6241p-624, 0.0, 0x1.e7506b9790c97p-637, 0.0, 0x1.4a08ab1150f64p-325,
     0x1.dba5c59b89881p-936, 0x1.0af77d9dfdd89p-62, 0.0, 0.0, 0.0,
     0x1.28e6957d9787p-874, 0.0, 0.0, 0x1.eadeac67de1edp-662, 0.0, 0.0,
     0x1.16ba9fffafc79p-108, 0.0, 0x1.938708355c98dp-238, 0x1.2ce950883564ap-975, 0.0,
     0x1.4589ccb9ed1bfp-956, 0x1.11513df6442abp-734, 0x1.a3c2b6ff27bb9p-540, 0.0,
     0x1.264c30682f131p-951, 0.0, 0.0, 0x1.55dfde2b994p-249, 0x1.dc3b309e68867p-787,
     0.0, 0x1.e09d0ecd8daa4p-913, 0x1.ff96b71d2a92bp-462, 0x1.314b1744c08f6p-470, 0.0,
     0x1.3f4f33a66d938p-240, 0.0, 0x1.f28b902ccb576p-745, 0x1.0b55094b0277p-63, 0.0,
     0.0, 0x1.64e541d8c319ep-475, 0.0, 0.0, 0.0, 0x1.12100d826ca9dp-839, 0.0,
     0x1.b36101bf8bbe9p-811, 0x1.51321f0ecb829p-541, 0.0, 0x1.83a1e1b42415ap-279, 0.0,
     0x1.9292a2aee4c29p-934, 0.0, 0.0, 0x1.633c390e9bf51p-169, 0x1.a9490ef40a189p-450,
     0x1.33d8277535707p-573, 0.0, 0.0, 0.0, 0.0, 0x1.6a72f5ab8492ap-83,
     0x1.f88408a76db54p-271, 0x1.97882c38885adp-89, 0.0, 0x1.fdb9bb2cc6647p-641, 0.0,
     0.0, 0x1.941840be81a5ap-865, 0.0, 0.0, 0.0, 0x1.e048bfa61e116p-201,
     0x1.824ec2f11b955p-310, 0.0, 0x1.b5a6b28cc5636p-87, 0x1.8bf9d991982e4p-711,
     0x1.650cc88fcfbe3p-292, 0.0, 0x1.f948fe798581ap-140, 0.0, 0.0,
     0x1.6732daf77ce91p-573, 0x1.02dc887e0cc9ep-442, 0x1.c4cf33a20d608p-204, 0.0,
     0x1.c4025ed171ef7p-543, 0.0, 0x1.3ec4178978a9ep-758, 0x1.b58538543106bp-24, 0.0,
     0x1.6b02324c7f905p-591, 0x1.dec35cc2c6de3p-47, 0.0, 0.0, 0.0,
     0x1.35a6aabcf03adp-449, 0x1.ecab1fc032db2p-157, 0x1.90bf5af0ee625p-841, 0.0, 0.0,
     0.0, 0x1.64c0ba374de27p-286, 0x1.7da9953a77db6p-849, 0.0, 0x1.6d86653cccfe2p-909,
     0.0, 0.0, 0x1.eb2e9041fd276p-856, 0x1.0bde54f636a24p-725, 0x1.4c1304188ed15p-928,
     0.0, 0.0, 0.0, 0x1.3107616a4c021p-477, 0.0, 0.0, 0.0, 0x1.bb15e3752cfbdp-668,
     0x1.7e69ea2630ae3p-224, 0x1.ac127ce813a75p-489, 0x1.a7f38158b8328p-752,
     0x1.476ceb0cb573dp-452, 0.0, 0x1.758dcc2bdd089p-213, 0.0, 0x1.7de7ffc8a89f7p-747,
     0x1.1e4c397fe9f74p-280, 0.0, 0x1.09f8118e6376cp-724, 0.0, 0.0,
     0x1.580716cc2a7dfp-616, 0x1.fa5b384ef3d7ap-654, 0.0, 0.0, 0.0,
     0x1.4da83ef0f353ep-894, 0x1.fac42afc9393dp-387, 0.0, 0.0, 0.0,
     0x1.383624e0362bp-580, 0x1.67adbf778037p-570, 0x1.c5462944efd55p-212,
     0x1.eaba46f537d7ep-828, 0x1.938189bfca618p-440, 0.0, 0x1.18dcbf5cccp-99, 0.0,
     0x1.f430f5c852894p-353, 0x1.6311310e8c02p-873, 0x1.7463081e5fa34p-923,
     0x1.a2c6e9dd0c5c6p-464, 0x1.ee5ed73199949p-273, 0.0, 0.0, 0x1.653ff24dc6897p-534,
     0x1.7722b89993086p-596, 0x1.dcf0e5a6712c7p-544, 0.0, 0.0, 0.0,
     0x1.1ff863c2c5288p-377, 0x1.01836f8d07652p-950, 0.0, 0x1.1903618d1e846p-773,
     0x1.35fc4779fd60ap-707, 0.0, 0.0, 0x1.ffb8ce557b216p-970, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9b479c0b2be41p-750, 0.0, 0x1.f7c9148444bbdp-418, 0x1.46c57706f0a4fp-448,
     0x1.2a522fe1e1145p-340, 0.0, 0x1.2bcf80496402dp-47, 0x1.21530f7bee68ep-533,
     0x1.915c67547c112p-448, 0x1.87498bae26116p-268, 0.0, 0.0, 0.0,
     0x1.58ddb9332ec89p-509, 0.0, 0.0, 0.0, 0.0, 0x1.7c18e18070eb2p-345, 0.0,
     0x1.9ed1b5c3fab5dp-544, 0.0, 0.0, 0x1.df168b47da676p-4, 0.0, 0.0, 0.0,
     0x1.a1a5cecff96efp-142, 0.0, 0.0, 0x1.6871e17504dffp-165, 0.0,
     0x1.651c85be34957p-813, 0.0, 0x1.a2fcd83a3c7ccp-733, 0.0, 0x1.43ecadeb3fec6p-371,
     0x1.8440cbdd0db9ep-12, 0x1.e7adf8a5a44aap-456, 0x1.f0aa7ba09383fp-985,
     0x1.153048869c067p-191, 0.0, 0x1.8a479c27efb28p-292, 0.0, 0.0,
     0x1.1c6f7d856bd08p-438, 0x1.97510210c0951p-154, 0x1.7489918aaaef4p-276,
     0x1.dbad006cbfe3bp-879, 0x1.819a2c569114p-464, 0x1.ea1c4c8c834edp-250,
     0x1.17c474d0c9f68p-1001, 0x1.7aca3d2987becp-814, 0x1.d4f0281f920ecp-160, 0.0,
     0.0, 0x1.1c73ed8b565a1p-482, 0x1.4fd50c0dad56p-410, 0x1.cd5a27b01dacep-636, 0.0,
     0.0, 0.0, 0.0, 0x1.a8c13dd409755p-597, 0.0, 0.0, 0x1.eb30680dc7493p-318,
     0x1.53a9e5d720939p-925, 0.0, 0.0, 0.0, 0x1.6ab2db0ef421ap-187,
     0x1.9083468eecd13p-855, 0.0, 0x1.8c59fde57fb34p-364, 0x1.b5726ed6c4278p-337, 0.0,
     0x1.f67343b7ef9bcp-494, 0.0, 0.0, 0x1.b308290bcc01cp-658, 0.0, 0.0, 0.0, 0.0,
     0x1.89d428255f683p-359, 0x1.9abb6e9da4092p-570, 0x1.42dff22160a01p-80,
     0x1.74cb241131f16p-382, 0.0, 0x1.7318097318148p-656, 0.0, 0x1.92facfbe3a97bp-661,
     0.0, 0.0, 0x1.c157e76cf270ap-903, 0.0, 0x1.0489a2cf4c24cp-137,
     0x1.1280ede6554f6p-834, 0.0, 0x1.745e4c8cfaad8p-215, 0.0, 0.0,
     0x1.4e78094c771f9p-616, 0.0, 0x1.243e497e4532p-805, 0.0, 0x1.7003a4c448872p-690,
     0.0, 0x1.5bb7bc2985b8fp-355, 0.0, 0.0, 0.0, 0x1.6f4a41f4a73ap-508, 0.0,
     0x1.5d0288ec21cbdp-365, 0.0, 0x1.6b98dc3e7b098p-133, 0.0, 0.0,
     0x1.3fad908659b4fp-20, 0.0, 0.0, 0.0, 0x1.43baca5e1fd5p-626,
     0x1.e478a1a99f527p-14, 0.0, 0x1.8e517cd406c83p-459, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c6dfdd2f1d69ap-384, 0x1.bc4832f9801efp-225, 0.0, 0x1.a07ff3b933e85p-698,
     0x1.d2297cc51d03fp-889, 0.0, 0.0, 0.0, 0x1.2ad6350186ff7p-616, 0.0, 0.0,
     0x1.926780dd5908p-865, 0.0, 0.0, 0x1.597951dcac4abp-850, 0x1.6e34601d8ca9ep-77,
     0x1.c2c5950c1f719p-368, 0x1.680920a4b0ba7p-174, 0.0, 0.0, 0x1.dd9837d8518bbp-554,
     0.0, 0x1.ba6bb80a97b7bp-344, 0.0, 0.0, 0x1.987b17f21f79dp-719, 0.0,
     0x1.c897d4c4ef776p-392, 0.0, 0.0, 0.0, 0x1.5248da37d90bep-964,
     0x1.2bbde5c353907p-11, 0.0, 0x1.d1da3d7d531fdp-629, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08adf86b00b3ap-645, 0.0, 0.0, 0x1.2b1081be4eb23p-333, 0x1.0a6e04f4af11p-303,
     0x1.9a830acbe591fp-1003, 0.0, 0.0, 0.0, 0.0, 0x1.5eb87132164fdp-790,
     0x1.443814e846dcdp-940, 0x1.00e2f282bb1dfp-463, 0.0, 0.0, 0x1.75d776bd33c7ep-565,
     0x1.77eae1fb2417p-810, 0x1.c1342458de32fp-172, 0x1.587ecee2e88bbp-7, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_erfcd2_u15kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_erfcd2_u15kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_erfcd2_u15kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
