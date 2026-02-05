/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d2_u10kvx.c --function \
 *     Sleef_finz_exp2d2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.81419e53de7afp-340, 0.0, 0x1.2a244941b7593p-617, 0x1.0100f0d18eb4bp-675,
     0x1.7a3e91ab08d51p-934, 0.0, 0.0, 0x1.fbfbb6ed80d66p-603, 0x1.b39715208f967p-337,
     0x1.650fabfe1fa44p-786, 0.0, 0x1.e65ad305d4f19p-957, 0.0, 0x1.300f0d9558c87p-668,
     0.0, 0x1.086172712f06bp-955, 0x1.9dbb52d998053p-665, 0.0, 0.0, 0.0,
     0x1.3fafcbb56ae03p-495, 0x1.b7fd5333eb726p-96, 0.0, 0.0, 0x1.589455b11e973p-849,
     0x1.da687d6d6134fp-864, 0.0, 0.0, 0.0, 0.0, 0x1.1ceea20f8175cp-164, 0.0,
     0x1.459f23e57e1ecp-104, 0.0, 0x1.4928651368dc2p-397, 0.0, 0.0,
     0x1.15a0e57181551p-629, 0.0, 0.0, 0.0, 0x1.1077c24dcd197p-689, 0.0,
     0x1.f706a03773cp-628, 0x1.a389c230ac3bcp-394, 0x1.1fe7cb1bc688bp-255, 0.0, 0.0,
     0x1.6b5b9a11f4295p-353, 0x1.34a68c117eae6p-413, 0x1.0b3a385111ee2p-328,
     0x1.79b64a1bd204ap-145, 0x1.ada82784d1551p-184, 0.0, 0x1.cfbd75a26c56dp-371,
     0x1.ed6db5707c002p-268, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8bf034ae98e9ep-908,
     0.0, 0.0, 0x1.20a879c9a8d55p-471, 0.0, 0.0, 0x1.185b03f64e7b4p-827, 0.0,
     0x1.348b4d389a884p-355, 0x1.ec0b79392c69ap-566, 0x1.8033ba98741d1p-393, 0.0,
     0x1.96a635e83646p-945, 0.0, 0x1.30206b052a3e7p-29, 0x1.fbb63fd990b79p-659,
     0x1.6af39af449972p-77, 0x1.bdc9387b54dc8p-374, 0x1.ba0b7ebf2f7b2p-349,
     0x1.4f3231ef42b13p-988, 0x1.08fa40c65e58dp-890, 0x1.7b03013508d73p-214,
     0x1.2407fbad0982bp-835, 0.0, 0x1.2d939700a471dp-790, 0.0, 0x1.006bdae10d4a7p-480,
     0.0, 0x1.6c20d90f83d71p-96, 0x1.ab2e3d82d8b7cp-801, 0.0, 0.0,
     0x1.3cab900d927a1p-230, 0x1.ac93134f170e4p-678, 0x1.42c1b08ba96c4p-542,
     0x1.beb87988ad1ddp-71, 0x1.3fe69b6c68af9p-851, 0x1.4f875ff403816p-268, 0.0, 0.0,
     0.0, 0x1.83e19b6e5a575p-578, 0.0, 0x1.ffb731c7a10cdp-586, 0.0,
     0x1.964db5a50e8cap-413, 0.0, 0x1.2a47d8887e2cap-52, 0x1.829adee9ead94p-683, 0.0,
     0x1.65fe567f97a8bp-402, 0x1.d90776194b68bp-258, 0x1.3760d90433d8cp-925, 0.0, 0.0,
     0x1.280bfddb3db3ap-484, 0x1.fe077a023a50ap-767, 0.0, 0x1.792cfd4626d27p-267,
     0x1.fa3d911577cdbp-974, 0x1.2dcfa3410c636p-128, 0.0, 0x1.9e82a3d22ab51p-248,
     0x1.e6482f3622825p-55, 0.0, 0.0, 0x1.a7313c8caff35p-434, 0x1.3821a55170a69p-542,
     0.0, 0x1.fc9b080da0761p-947, 0x1.2f8d127371e9cp-867, 0.0, 0.0,
     0x1.d08d7e66cf59bp-1021, 0x1.e760f2cc34853p-204, 0.0, 0x1.5d3e4b8727217p-447,
     0x1.d5cc28d71d2f2p-1, 0x1.23214f051b424p-907, 0x1.d202c6d9a06d8p-472,
     0x1.3cf44d1ff321ep-999, 0.0, 0.0, 0.0, 0.0, 0x1.809af068a591bp-206,
     0x1.c57f9e3a9c3ep-734, 0.0, 0x1.63dcd7566cffcp-954, 0.0, 0.0, 0.0, 0.0,
     0x1.66cbadce4e98cp-216, 0.0, 0.0, 0x1.2af30d470fe05p-420, 0x1.2ba099dac6a07p-919,
     0x1.43e883dafa4bcp-945, 0x1.d57c847d01922p-698, 0x1.588de264fa333p-271, 0.0, 0.0,
     0x1.e42e89125e826p-1005, 0x1.72183f4e89f5ap-747, 0x1.882e5a4247e4p-949,
     0x1.b21d08880d449p-905, 0x1.6e46bdee41264p-305, 0x1.ff4914a2559bp-1007, 0.0,
     0x1.83df4a167d22ep-56, 0.0, 0x1.44a338d4c7e1dp-760, 0x1.9605a507d591dp-893,
     0x1.39081a6021e87p-76, 0.0, 0x1.c0849de2e6366p-148, 0.0, 0.0,
     0x1.e32cadec9067bp-296, 0x1.dd024fc97af14p-512, 0x1.21196d219e8e1p-388, 0.0, 0.0,
     0x1.86544ad0ad055p-253, 0x1.a51fa9a799c63p-798, 0x1.d6f62922cbfcdp-11,
     0x1.7fb2adb1eb6p-173, 0x1.b170a416c9aebp-525, 0.0, 0x1.6ccc59f5b25f6p-838,
     0x1.9feaf69704d1p-955, 0x1.e695dd4cca417p-590, 0x1.156913b8fb761p-754,
     0x1.bd8509fae62e9p-72, 0.0, 0.0, 0x1.d7e88463295dp-668, 0x1.9399a35388a1p-444,
     0.0, 0.0, 0x1.2c69cee3141e6p-826, 0x1.cbb0d750a323bp-262, 0.0,
     0x1.35c68e71acce4p-48, 0x1.07e4ca31639c8p-531, 0.0, 0.0, 0x1.9290bc7ad2cbdp-762,
     0.0, 0.0, 0.0, 0.0, 0x1.f784c0cf4486bp-993, 0x1.709536a11f0e9p-753,
     0x1.ee5b4a7472ad7p-144, 0x1.d09e1d379ca51p-117, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.07485afb812p-18, 0x1.92b71fa91a5b6p-491, 0.0, 0.0, 0x1.613eae9d2c40ap-961,
     0.0, 0x1.accf8ca3de6dap-289, 0x1.fd148c4037694p-628, 0.0, 0.0,
     0x1.a24ac21d86436p-3, 0x1.13b6a64628f99p-604, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f331dcb67f56p-523, 0x1.ed6b1100427ep-603, 0.0, 0.0, 0.0,
     0x1.ccd91aca40b33p-799, 0.0, 0.0, 0x1.2d361c68e57efp-895, 0.0,
     0x1.90d95a0e11678p-608, 0x1.ca4c32733c5f1p-38, 0x1.a997efdc9e76ep-869, 0.0, 0.0,
     0x1.af8559aaff527p-144, 0x1.7768c278d0a3cp-353, 0.0, 0.0, 0.0,
     0x1.bc53d1ec51b56p-677, 0.0, 0.0, 0.0, 0x1.0b59964091ffbp-534, 0.0,
     0x1.850d7e5c173d9p-860, 0.0, 0x1.40a93ab6d3ed9p-169, 0.0, 0x1.6f77479aee64p-265,
     0.0, 0x1.7ee66fab91b7ep-281, 0.0, 0x1.8219f22f9e21dp-72, 0.0, 0.0,
     0x1.1d4c5c15d4095p-896, 0x1.5f716bbd4f811p-777, 0.0, 0.0, 0.0,
     0x1.dd4f8dd4512a2p-753, 0.0, 0x1.530536da2e583p-237, 0x1.9d53c950b6353p-485,
     0x1.d67dad39cc511p-575, 0.0, 0.0, 0x1.e5b171e102cb3p-788, 0x1.61b5e5eba09f9p-228,
     0.0, 0x1.4265de82f9159p-69, 0x1.36b9feac70c2p-772, 0.0, 0x1.13f96d1406459p-458,
     0x1.fd59b5a0f07fep-554, 0x1.9f7fc6da568c8p-20, 0.0, 0.0, 0x1.27c0b3a500199p-338,
     0.0, 0x1.62741979a2a98p-246, 0.0, 0x1.0fd1644e4d5p-468, 0x1.f5594e9f00207p-644,
     0x1.2faf1a7027244p-969, 0x1.45dbfa4aa2083p-123, 0x1.3edae3da22226p-509, 0.0, 0.0,
     0.0, 0x1.e899aa5ffc853p-325, 0.0, 0x1.2e16bf03f02d1p-131, 0x1.78993f170f68ep-318,
     0.0, 0x1.ed218d12fb14bp-13, 0.0, 0x1.3ade1e2213f5cp-546, 0.0,
     0x1.01baa83e4ecb4p-636, 0x1.2cadfc0680105p-564, 0x1.d66bf17a9809bp-83, 0.0, 0.0,
     0x1.72a9da46f5823p-687, 0.0, 0x1.9ee7a9810cc9fp-339, 0x1.d42e5aa4898ap-304,
     0x1.ff02dd9c48db4p-59, 0.0, 0.0, 0x1.57f542efaf4b8p-239, 0x1.c8bae98b2bf5cp-490,
     0x1.de560708d0d0fp-264, 0.0, 0x1.9958286273256p-750, 0x1.bbfdfbdb4c0a9p-648,
     0x1.224ca4b7612ep-1014, 0x1.15c97df6abafbp-621, 0x1.a70c6f7d0c13dp-363, 0.0, 0.0,
     0.0, 0x1.2cb21066d253ep-898, 0.0, 0.0, 0x1.7afac1352274ap-477, 0.0,
     0x1.8e852da220c62p-1, 0.0, 0.0, 0.0, 0x1.a2c80fb9463afp-477, 0.0,
     0x1.bed4d4195669ap-847, 0x1.607532ce7193cp-635, 0x1.4dddaec7db876p-721,
     0x1.3df7196fe4cf6p-246, 0.0, 0.0, 0x1.87358eed1b026p-716, 0x1.604ba19deb6dbp-120,
     0x1.54e0a3f3d65f5p-929, 0x1.7e33668795162p-227, 0x1.b6ab849bc3e0ap-423,
     0x1.4f9bc855b6666p-887, 0x1.de89f8f694248p-542, 0.0, 0.0, 0x1.a41785b21febfp-736,
     0x1.cd628775e2f31p-103, 0x1.ccdc105603f06p-551, 0x1.b6e7e0ea3a8afp-733,
     0x1.2ea6e180711bbp-311, 0x1.aa391549f742bp-501, 0.0, 0x1.9e25c8f36fb3cp-518, 0.0,
     0.0, 0x1.13eb31eb807eap-114, 0.0, 0x1.4eeb39e737cbep-384, 0.0,
     0x1.10d1b499ad75fp-498, 0x1.579529eba9f15p-679, 0.0, 0x1.2b14788b81903p-120, 0.0,
     0x1.9805238dc52dap-756, 0.0, 0.0, 0.0, 0x1.2ced824d6c539p-507,
     0x1.f5fb24524df0cp-448, 0.0, 0.0, 0x1.4df594572e229p-403, 0.0,
     0x1.44955b748b261p-467, 0.0, 0.0, 0x1.0399a1ce1b799p-924, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bb24ffa6b5723p-946, 0x1.f092356749358p-801, 0.0,
     0x1.71423455d08adp-668, 0.0, 0.0, 0x1.f8de3129ab823p-261, 0x1.71637617bece9p-849,
     0.0, 0x1.d4240e440f6e1p-412, 0x1.daffe4b0d093fp-480, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aa3345140fea9p-331, 0x1.392d9fd6e37cbp-1010, 0x1.f75156149f246p-406, 0.0,
     0.0, 0x1.98cdef78d9ca7p-724, 0x1.0c0223bc01225p-580, 0x1.eb80b86a5a563p-852, 0.0,
     0x1.c26077d7ebd0dp-614, 0x1.dc3bfd8591336p-459, 0.0, 0x1.1ac4b7e709098p-546,
     0x1.fe65c2d4ed18ep-869, 0.0, 0x1.0619edbdd5943p-634, 0.0, 0.0,
     0x1.042582a9ce4bep-20, 0.0, 0x1.e55b383598907p-173, 0.0, 0x1.202f2bacb1d4ap-707,
     0.0, 0x1.1f07b02ad6f35p-53, 0.0, 0.0, 0.0, 0x1.a7ca7ddb27513p-710, 0.0,
     0x1.28e1c486ab44ap-207, 0.0, 0x1.530c12577f327p-465, 0x1.2c93fc23f1283p-484,
     0x1.e9b3fe5f27e2ep-37, 0x1.bbc5b53ae4e2p-507, 0.0, 0x1p0, 0x1.51947525607b5p-344,
     0.0, 0.0, 0x1.d40999c35998cp-122, 0.0, 0.0, 0.0, 0x1.fbd10fdee2d36p-737,
     0x1.87d66439b1f39p-228, 0.0, 0.0, 0x1.b9ac20c17bcbap-830, 0.0,
     0x1.a7bb8f45a5a6bp-343, 0.0, 0x1.ed6a18ac8b6c1p-384, 0x1.c48ab611718f2p-908, 0.0,
     0.0, 0.0, 0x1.eb049d8bf17cdp-755, 0x1.50aa963b3c5e5p-481, 0.0,
     0x1.e9dc3351b9d39p-848, 0x1.c37ec6652570ep-166, 0x1.02f33b3bf6366p-546, 0.0,
     0x1.84e6cfaa10b04p-647, 0.0, 0.0, 0.0, 0.0, 0x1.66e0143b73259p-525, 0.0,
     0x1.d5db38602e605p-144, 0x1.b36abe78ef28fp-448, 0x1.71258cf245b47p-393, 0.0, 0.0,
     0.0, 0.0, 0x1.ba3beb47deda2p-288, 0.0, 0.0, 0.0, 0x1.d1c452fbe1a74p-732, 0.0,
     0.0, 0x1.f0d41c774e287p-315, 0.0, 0.0, 0.0, 0x1.693aa02bd8184p-279,
     0x1.e2e5dfcb2788fp-127, 0x1.7abb51d9f6a5ep-45, 0x1.fbf2ac82262c7p-176,
     0x1.f56398d17cfedp-421, 0.0, 0.0, 0x1.9c66a7d3aebf3p-670, 0.0, 0.0, 0.0,
     0x1.0761d30d69c02p-515, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5dcf39f0d7c0cp-479, 0x1.3d35d2b716badp-202, 0x1.22b6b7a8a4f35p-550,
     0x1.da49a67646cacp-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb69fa176cd27p-338, 0x1.65a6d37375578p-806, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b62f45f6cfa83p-820, 0x1.87423022c1c9p-631, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c6bb787c61df6p-232, 0.0, 0x1.243379c33bbcp-316, 0x1.b2a9e6559c1e8p-757,
     0.0, 0x1.fb0daf680de78p-828, 0.0, 0.0, 0.0, 0x1.0ed7cbaac0dc3p-243, 0.0, 0.0,
     0.0, 0x1.6539e8366536ep-741, 0.0, 0.0, 0.0, 0x1.277cf8e5be203p-630, 0.0,
     0x1.012e6c3c6efdcp-103, 0.0, 0.0, 0x1.9bd2b0ec0fddap-203, 0.0, 0.0, 0.0,
     0x1.3cafc695ca1f1p-209, 0x1.7a5fffdf895b3p-435, 0.0, 0x1.5ac5b5bb4db3bp-78, 0.0,
     0x1.450339c35c377p-404, 0x1.93869eaa41e06p-566, 0x1.e21b441fa8523p-898, 0.0, 0.0,
     0.0, 0.0, 0x1.ab746e9207468p-562, 0.0, 0.0, 0.0, 0x1.1df26fdb83cp-503, 0.0,
     0x1.d55680599d96fp-996, 0.0, 0x1.09e08a64cb16ep-721, 0x1.dd677c88eccdp-544,
     0x1.80c3a98148549p-310, 0x1.e35023b36b8cp-565, 0.0, 0x1.3bc42da3f0dcfp-296,
     0x1.541dde7de95e6p-409, 0x1.e53f01b5a1092p-576, 0x1.169ea1ba27ec6p-204, 0.0,
     0x1.324010444ae81p-995, 0.0, 0x1.feb97cf417e8ap-265, 0.0, 0.0,
     0x1.06047dc2995d2p-517, 0.0, 0x1.4e69be8cbc10fp-575, 0x1.0a777c7b99a98p-433, 0.0,
     0x1.691c292709e52p-321, 0.0, 0.0, 0.0, 0.0, 0x1.d7721083cb62ap-820, 0.0,
     0x1.eb55c4098044cp-882, 0.0, 0.0, 0x1.f51ff168474dcp-224, 0.0, 0.0,
     0x1.0e95cf482d908p-880, 0x1.8b0b16b517e3fp-821, 0x1.1adff15e3f828p-658, 0.0, 0.0,
     0.0, 0.0, 0x1.08e314e20c714p-655, 0x1.553c64cf4e84dp-202, 0x1.d3e352590b387p-686,
     0.0, 0x1.d5a1ab946ae8p-673, 0x1.7557486bc11d6p-103, 0.0, 0.0,
     0x1.5a539f75803f4p-448, 0x1.d6fa531ed188ap-12, 0.0, 0.0, 0.0, 0.0,
     0x1.7c374305aa0f4p-827, 0x1.3101bbcec5a6cp-999, 0.0, 0x1.a19e9e5c146dbp-685, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.159ab6bf4947ap-735, 0x1.f6bd5c9143268p-488,
     0.0, 0.0, 0.0, 0x1.5f299775677b4p-217, 0.0, 0x1.58678e8307b25p-527,
     0x1.a71741a2e3218p-295, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70aca51235e91p-277, 0x1.9662a9e59c67dp-468, 0.0, 0.0, 0.0,
     0x1.36787ac55b9ddp-711, 0.0, 0.0, 0.0, 0x1.dcccd45c24ffdp-838,
     0x1.86d2c101be3f2p-708, 0.0, 0.0, 0x1.dfaf87c0199c2p-406, 0.0, 0.0, 0.0,
     0x1.88b4f077622c7p-940, 0.0, 0.0, 0x1.04f7ea91310fcp-1012, 0.0, 0.0,
     0x1.4ab4ace45c158p-156, 0x1.edb2842d50eb8p-696, 0x1.ddb0ab97328d4p-99,
     0x1.800f426286a05p-886, 0.0, 0x1.f545c075bd4dep-822, 0.0, 0x1.260cce299c93fp-847,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3416b4733f51bp-972, 0.0,
     0x1.e0523997b6021p-1000, 0x1.2583997f34cbcp-612, 0x1.805a197b16d6cp-48,
     0x1.40fd9fb3743e6p-787, 0.0, 0x1.2336e3698e341p-857, 0.0, 0.0,
     0x1.877b6379783e9p-259, 0x1.8f8dc70d9fcd9p-426, 0x1.59fa7794171fp-230,
     0x1.b62b2d3f984dep-704, 0.0, 0.0, 0x1.4e5351571e27ap-858, 0.0, 0.0,
     0x1.31879a4f81f8ap-422, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3597d1ec001dfp-461, 0x1.e7f1cb4ea9c24p-877, 0x1.49ad11063c37dp-1015,
     0x1.80965006e9d5cp-532, 0.0, 0.0, 0.0, 0.0, 0x1.5321b3c5717d4p-537,
     0x1.c78061ad1a275p-529, 0.0, 0.0, 0x1.6640689820207p-991, 0x1.ef354c5f16908p-167,
     0x1.06671c3f2c925p-284, 0.0, 0x1.6c5767d736881p-279, 0x1.b2c217871ec67p-442,
     0x1.82a4f4a74d802p-895, 0.0, 0.0, 0.0, 0x1.2a717f62e56bbp-685,
     0x1.ed98b0b71c6cbp-251, 0x1.8cc1a61317c69p-881, 0x1.1a7b4abadda21p-851, 0.0, 0.0,
     0x1.d8dcbd8175f58p-42, 0x1.7d1e70e181b63p-267, 0x1.47fdb25060c1ep-112,
     0x1.b7db87ab62633p-963, 0x1.c88b9983a0887p-816, 0x1.b61c55acabbffp-945, 0.0,
     0x1.0ef09733ecda2p-909, 0.0, 0x1.9b86f15f38513p-943, 0x1.85589f0cc118bp-157,
     0x1.0181be42f4257p-899, 0x1.90bfb958d794bp-743, 0x1.5f06c6cd4c008p-834, 0.0, 0.0,
     0x1.35fef175c6f22p-860, 0x1.574a2570fee88p-597, 0x1.67bf21c2da34ap-109, 0.0, 0.0,
     0.0, 0.0, 0x1.70fc7bc24e702p-22, 0.0, 0.0, 0.0, 0x1.990cb3ef20c58p-272, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9c837bf7f40f3p-931, 0x1.d96f1fc34800cp-953, 0.0,
     0x1.9bd9253ffbe6ep-46, 0x1.7f295b7a91694p-296, 0x1.0ec88b3639454p-587,
     0x1.7467878bb8f5ap-296, 0x1.985e7a2fe5d6fp-125, 0.0, 0x1.4331cd62012ecp-633,
     0x1.cf43a50eab4a3p-572, 0x1.14eb1280d960fp-876, 0.0, 0x1.003e45c648181p-1010,
     0x1.2f45cf9592adp-729, 0x1.28cacf75a9c9bp-201, 0.0, 0x1.d18e6f365244fp-82,
     0x1.58029e1bc9b1p-612, 0.0, 0.0, 0.0, 0x1.f27b36f58f429p-277,
     0x1.b95110d39b33ap-620, 0.0, 0.0, 0.0, 0x1.bc2ed423b6426p-260, 0.0,
     0x1.a720892b4dd27p-802, 0.0, 0.0, 0.0, 0x1.af0a0e74c7ad6p-430,
     0x1.9e582fb0c6042p-830, 0.0, 0.0, 0x1.d5a2dd68b00a6p-849, 0x1.d2df0eb3bc6ecp-227,
     0x1.2a1095b4f4493p-615, 0x1.fe4a4b2d82339p-440, 0x1.7e136fae5824fp-924,
     0x1.c1a104ec3afb5p-64, 0x1.485be58315c4ep-622, 0x1.caa5e3339a97p-923, 0.0, 0.0,
     0x1.0aa657330e3dfp-620, 0x1.3be82e11cc83dp-944, 0x1.8de1b64ebec2fp-638, 0.0,
     0x1.035e7e76e0b09p-747, 0.0, 0.0, 0.0, 0x1.8967634db16c3p-336,
     0x1.6899a8f000212p-520, 0.0, 0x1.06a23e4b3eeefp-971, 0x1.8de3dcfe4b477p-598,
     0x1.0aa2209dafa0ap-306, 0x1.220eceedfae58p-776, 0x1.89e1e46495dc6p-832,
     0x1.281b480371e0ap-87, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3e3412e994acap-92,
     0x1.5e29f6400e283p-690, 0.0, 0x1.9fed2e1f1789cp-568, 0.0, 0x1.23368a9fc313dp-351,
     0.0, 0.0, 0x1.013e8121643cbp-696, 0x1.c44f5804fad34p-824, 0x1.626f02516e3f5p-63,
     0.0, 0.0, 0x1.56d62f57c7b51p-63, 0.0, 0.0, 0.0, 0x1.acf8941313bbfp-691,
     0x1.6442e51af4007p-640, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86637c626027ep-491, 0.0,
     0x1.b06d4ebc64f2bp-871, 0x1.990708007f33ap-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a6075206265acp-135, 0x1.b086e203722cep-167, 0x1.ccf94cfcf192cp-94,
     0x1.3e03f40d99f0cp-256, 0.0, 0.0, 0.0, 0x1.c5e6c6a77089bp-302, 0.0,
     0x1.c254fa1a2064ap-727, 0x1.00e0d32addf66p-683, 0.0, 0.0, 0.0,
     0x1.54bde3041755ep-139, 0.0, 0x1.31a5ecab5607ap-196, 0x1.45674dc2fe8e4p-782, 0.0,
     0.0, 0x1.32083c1214f6dp-562, 0.0, 0.0, 0x1.bdd2e13982f64p-68,
     0x1.92a4eaf22bc49p-367, 0x1.421025696f1f1p-4, 0x1.89ae8de153865p-785, 0.0, 0.0,
     0x1.335b13cb33f05p-784, 0.0, 0x1.5ce7fd51afd96p-539, 0x1.99706f2ec54d5p-282,
     0x1.c5365ed12ebdp-94, 0x1.6b94e79678352p-340, 0.0, 0.0, 0x1.17053bb6ebf8fp-774,
     0.0, 0x1.b0abbf6320ba8p-133, 0x1.d091ce4964273p-226, 0x1.e9ddecaaca0d6p-343, 0.0,
     0x1.c7aaeb752e9b7p-371, 0x1.9a7c38a3de5c6p-182, 0.0, 0.0, 0.0,
     0x1.8ce400bedcbf8p-679, 0x1.1315a865fb48ep-680, 0.0, 0.0, 0x1.1926ec1b5983ap-326,
     0x1.66b93128b73f7p-632, 0x1.ba2df83714ba5p-908, 0.0, 0.0, 0.0, 0.0,
     0x1.409e6ff1158efp-216, 0.0, 0x1.ed13886536ca2p-98, 0.0, 0.0,
     0x1.d968819b2ec0ap-898, 0x1.23416dccd984ap-160, 0.0, 0x1.f8e0ff39ba369p-554,
     0x1.d89ca6e70da3ap-636, 0x1.b4123f02b92bap-512, 0x1.4ff4ce1550bfp-845, 0.0,
     0x1.9900a09050cffp-282, 0x1.38a3a7fbf42bbp-514, 0.0, 0.0
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
            tmp1 = Sleef_finz_exp2d2_u10kvx(tmp0);
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
    printf("Sleef_finz_exp2d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp2d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
