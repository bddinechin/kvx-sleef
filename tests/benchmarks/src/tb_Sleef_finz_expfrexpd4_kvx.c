/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expfrexpd4_kvx.c --function \
 *     Sleef_finz_expfrexpd4_kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --vector-size 4 --function-input-vector-size \
 *     4 --precision int32 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int4_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
static const ml_int4_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0x1.820a9789a22b7p-380, 0x1.9a108ba84d55p-286, 0x1.129b7b2793794p-929,
     0x1.0729c3bf029f7p-341, 0.0, 0x1.03dacdd648db9p-803, 0x1.2dadcdba0062fp-333, 0.0,
     0x1.5454cbdd4f397p-408, 0.0, 0.0, 0x1.31999846266a9p-505, 0.0,
     0x1.4cd54c9ad66b5p-522, 0x1.ca3e433a6c744p-715, 0x1.5ba15f6f34ff6p-2,
     0x1.5e4b471bf221ap-302, 0x1.6c452cd4d004fp-739, 0x1.b7273e1a9d341p-567, 0.0, 0.0,
     0x1.cad99401755c8p-986, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b6bcb1809ffd9p-477,
     0x1.7cd330db8b8eap-265, 0.0, 0x1.769362b93dd03p-906, 0x1.90548a0ba20c6p-862,
     0x1.2c689b16bd1a6p-681, 0.0, 0x1.2510b3aff03b3p-33, 0.0, 0x1.e94091fff4edep-279,
     0x1.82f6557964c78p-595, 0x1.d9ef51ff0a0fp-285, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ca78d8abfba3p-920, 0x1.76b5efa95d04p-833, 0.0, 0x1.c121953187ffp-930, 0.0,
     0x1.b543c6bd8147p-744, 0x1.397efad8481dp-495, 0.0, 0x1.55e02de969fe9p-570, 0.0,
     0x1.2efe5f839ca88p-806, 0x1.9e1cd20633ecbp-308, 0.0, 0.0, 0x1.fa62824c76ae5p-336,
     0x1.3491ea42b4a47p-979, 0x1.65a5db4b30799p-387, 0.0, 0.0, 0.0, 0.0,
     0x1.3fbd4389c68a9p-756, 0.0, 0x1.326d5172ad8p-144, 0x1.20601f45f3b98p-245, 0.0,
     0x1.12146f2a731bfp-364, 0.0, 0.0, 0.0, 0.0, 0x1.9d76d357a06abp-292,
     0x1.2067471c957ecp-33, 0.0, 0.0, 0x1.1cb084b989ec2p-834, 0.0, 0.0,
     0x1.4c8507c33be53p-599, 0.0, 0.0, 0x1.599a4325b6204p-200, 0.0,
     0x1.1a69d8c30c3a2p-130, 0x1.edb0a72983aabp-362, 0.0, 0x1.df1541b0784cbp-433,
     0x1.971f4980619d4p-742, 0.0, 0.0, 0x1.b62b449ea441bp-112, 0x1.174909d85dbf8p-217,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4519122308c4p-218, 0x1.819a312160fd5p-702,
     0x1.8ada817e261a7p-966, 0x1.26443ff856a5bp-245, 0.0, 0x1.fd4573c9b0f02p-583,
     0x1.2008a0becdbb4p-198, 0.0, 0.0, 0x1.a6950dfa665bcp-5, 0x1.ebe65528bba3cp-957,
     0x1.6846d310fda06p-476, 0x1.02d67336833d3p-946, 0.0, 0.0, 0x1.5a3a788b62b73p-665,
     0x1.fc7bdb374a12cp-779, 0x1.459a2e843ed1p-138, 0.0, 0.0, 0.0,
     0x1.4ad46199abb9bp-445, 0x1.d065c93d42573p-767, 0.0, 0x1.fb5de4dfb8542p-941,
     0x1.e749bc56ff324p-720, 0x1.c7ab66a35e1bep-225, 0.0, 0x1.ed17479d87eefp-969, 0.0,
     0x1.5aac03455cb2dp-502, 0x1.5b3907941c03p-917, 0.0, 0.0, 0.0, 0.0,
     0x1.53a4cdb792b5dp-652, 0.0, 0.0, 0x1.7d014b01e16a2p-442, 0.0, 0.0,
     0x1.79eb2ed42cd0ep-647, 0.0, 0x1.3e15a1c91f7f7p-630, 0x1.44de33ced6632p-347,
     0x1.ff452357fa3a4p-81, 0x1.866a1f82e39f6p-257, 0x1.20ea215799bd6p-317, 0.0, 0.0,
     0.0, 0.0, 0x1.a941a92b923eep-966, 0x1.c68e348683d9ep-533, 0x1.5424210dbe43ep-939,
     0.0, 0x1.3ff294bc6519cp-884, 0x1.d6411218629a4p-96, 0x1.4083cae4b1883p-517,
     0x1.159dafa29df54p-846, 0x1.56738fde115a9p-692, 0x1.6344af3a3d7e8p-333,
     0x1.6312b4b809d3bp-621, 0.0, 0.0, 0x1.1bd7db1934315p-297, 0.0, 0.0,
     0x1.63cf9cf0d0359p-1003, 0x1.16d1b0408c746p-837, 0x1.1567cb1094dacp-633,
     0x1.fe1f82d0db5acp-416, 0.0, 0.0, 0.0, 0x1.5ed3d2ab0c2a5p-995,
     0x1.5726613f4ff8p-16, 0.0, 0.0, 0.0, 0.0, 0x1.6591a4033e45cp-499,
     0x1.bdd16697d4657p-173, 0x1.b159dc20e413dp-464, 0.0, 0.0, 0x1.6f4860a87e186p-738,
     0x1.794012d67777fp-717, 0.0, 0.0, 0.0, 0x1.af14f8268594dp-213, 0.0,
     0x1.b477a1914a875p-291, 0x1.ee2db4f16502dp-513, 0x1.afb1e2a37afedp-773,
     0x1.12b3f59552912p-451, 0x1.161e290b80776p-682, 0.0, 0.0, 0x1.1cdfb1006dfe5p-774,
     0.0, 0x1.a799e8b9668b7p-595, 0x1.3ea8fac1eadaep-39, 0.0, 0x1.95a557ad91e54p-228,
     0.0, 0.0, 0.0, 0x1.e3015389a0faap-791, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a3bc8b5d8a9b1p-958, 0x1.bd72d0f16ad9cp-900, 0x1.c52d134aef553p-476, 0.0,
     0x1.548eeb8836962p-977, 0x1.93910dd9b873p-968, 0x1.093610bb9d42ep-5, 0.0,
     0x1.c896d6a1d38cap-1, 0.0, 0.0, 0x1.ec3a230d799aep-494, 0.0, 0.0,
     0x1.3cfbea1e12191p-199, 0x1.686d98026f5c5p-542, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.98c116aae9c6dp-510, 0.0, 0x1.7ade8ddcc80e2p-959,
     0x1.ee5fd328e6cbcp-580, 0x1.5e290afd62fb7p-817, 0x1.c2c30b4103deap-141, 0.0, 0.0,
     0x1.dcdae9e294243p-523, 0.0, 0.0, 0.0, 0.0, 0x1.411cecad90e8ap-36,
     0x1.bd2fecbbc146bp-863, 0x1.ca7da574c4966p-411, 0x1.02d05ea079454p-622,
     0x1.575e91c6c7565p-231, 0.0, 0x1.b02e0c4ec34d3p-768, 0x1.7f7d89586f518p-510, 0.0,
     0x1.c59611561066ep-755, 0.0, 0x1.546237a44b642p-250, 0x1.7aa0ccc91d78dp-269,
     0x1.395024911412ep-500, 0.0, 0.0, 0.0, 0x1.b0a456b86ebd4p-204, 0.0, 0.0,
     0x1.7bbd077ca181bp-600, 0x1.77f4a374920a2p-451, 0x1.b39453bab8fc3p-792,
     0x1.3df18d918f7b7p-159, 0x1.569dca36a90eep-682, 0.0, 0x1.87950dca2b03bp-377, 0.0,
     0x1.89fc958ac477dp-929, 0.0, 0x1.58863a613e489p-589, 0x1.1a220c6bae8f1p-523, 0.0,
     0x1.c427081b2da3dp-996, 0.0, 0x1.f543f8e9603d9p-907, 0x1.a70cd98208eeep-83, 0.0,
     0x1.6c0715cd1076ap-746, 0.0, 0.0, 0x1.023c6d0cb82a9p-941, 0.0, 0.0,
     0x1.9dce4ea2292b8p-772, 0.0, 0.0, 0.0, 0x1.ee6813aefeae4p-32,
     0x1.d64e6b06d4b98p-117, 0.0, 0x1.b9f85a98d5b5ep-398, 0x1.f76bfcc5e1e37p-252, 0.0,
     0.0, 0.0, 0x1.2546fbf57a57fp-533, 0.0, 0x1.b2dc8b95aac2ap-405, 0.0, 0.0, 0.0,
     0x1.009e6c23ae1ep-934, 0.0, 0x1.1d92a224f0628p-668, 0x1.bd389a4015c8bp-930, 0.0,
     0x1.489ec535203fp-174, 0x1.04aac293ab75ep-446, 0.0, 0x1.edf1e9d8043c6p-349,
     0x1.7786779dca6f2p-832, 0x1.b4eddf3def8b3p-853, 0.0, 0x1.f69c5e5ec3661p-476,
     0x1.91cc0122875d1p-407, 0.0, 0x1.846930fa51c97p-578, 0.0, 0x1.bf3776efca652p-655,
     0.0, 0.0, 0x1.20c89d40b1f14p-139, 0.0, 0.0, 0.0, 0.0, 0x1.b7a1f13bf3ac7p-660,
     0x1.995404e3ce168p-326, 0x1.0c18f5b28cf0cp-418, 0.0, 0x1.aa0a91ecd3f21p-464,
     0x1.e30a6581a2cd2p-677, 0.0, 0x1.bcd05ff6edd86p-495, 0.0, 0x1.2b5e3eac38b4bp-332,
     0.0, 0x1.bf3ddb6576ef4p-577, 0x1.777d23a174a42p-295, 0x1.c5e478aea47cep-595,
     0x1.20a271a6472d6p-644, 0.0, 0.0, 0x1.4b0f4e27fe86ap-1020, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c4d91608d9e35p-842, 0x1.59e604beca05ap-892,
     0x1.7fefa0ac1cc59p-1017, 0.0, 0.0, 0.0, 0.0, 0x1.1901d8e9be0abp-711,
     0x1.0b91d55002135p-630, 0x1.18b8bf371302fp-318, 0.0, 0.0, 0x1.dd530d7741d74p-714,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.037c664c68a74p-63, 0.0, 0.0, 0.0, 0.0,
     0x1.ecd176cd66fb7p-807, 0x1.52430fbf8825bp-385, 0x1.bab2aa4dea005p-590, 0.0, 0.0,
     0x1.611cf15fa8ef8p-460, 0.0, 0.0, 0x1.5c886d347caa1p-561, 0x1.6e3e62e0f82f9p-136,
     0x1.711db3e6c8607p-322, 0x1.356f0d5edeef6p-340, 0x1.9c1b353af94d6p-15,
     0x1.fe089ef07ef33p-527, 0.0, 0.0, 0x1.c6a4ec5c2a65ep-361, 0x1.f0a768771497ap-601,
     0x1.2e1511c18a4efp-138, 0.0, 0.0, 0.0, 0x1.494363db00667p-573,
     0x1.167e234812906p-464, 0.0, 0.0, 0.0, 0x1.40c5135c8d49cp-829, 0.0,
     0x1.ffd30b6d36cedp-999, 0.0, 0.0, 0.0, 0x1.1fa02c5762606p-321,
     0x1.1df1de4add034p-699, 0.0, 0.0, 0x1.d637d51835412p-760, 0x1.1a9772ef5e777p-570,
     0.0, 0x1.5291577074d14p-648, 0x1.b672973b8d0c5p-903, 0.0, 0x1.d4c68c5b350d2p-12,
     0x1.c501386cffa48p-308, 0x1.c0011a686ce0fp-471, 0x1.b608a6198ec89p-737,
     0x1.675564ad5ccccp-817, 0x1.c8b2fbeb4fba9p-30, 0.0, 0.0, 0x1.9bb71a3b842fep-686,
     0x1.58b9878a66176p-192, 0x1.a53140fc0c01p-227, 0.0, 0x1.07b48f9599f1ep-426, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1cafa1e7d3a1ep-58, 0.0, 0x1.fa2ef3763e1f6p-594, 0.0,
     0.0, 0.0, 0x1.dced03e180336p-902, 0x1.c4fa5d60097a3p-936, 0x1.00a56afa2d97ap-821,
     0.0, 0x1.be6ac717ba73bp-86, 0.0, 0x1.4ea5bc2fd75d6p-755, 0.0,
     0x1.dd84d1084a388p-253, 0x1.0d23c325af7a6p-357, 0x1.c3532f5ab6726p-786, 0.0,
     0x1.d36205688290cp-739, 0.0, 0x1.653bda16be7bdp-255, 0x1.bb32d4452fbe9p-455, 0.0,
     0x1.cff2b38430e3dp-458, 0x1.b1671ac58e64ap-562, 0.0, 0.0, 0.0,
     0x1.20143fe63f48bp-292, 0.0, 0x1.b2ded530289b1p-798, 0.0, 0.0,
     0x1.4b424ad3d7996p-691, 0x1.262188d89380fp-276, 0x1.925e71322275fp-860, 0.0,
     0x1.9a1ad46e08615p-828, 0.0, 0x1.ec3756bd68d18p-355, 0x1.9f78f8f484901p-197,
     0x1.a3449990b2ebdp-52, 0.0, 0.0, 0.0, 0x1.906191dc4db3ap-751,
     0x1.b7d07ffd53657p-834, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28b0bfef606c3p-28,
     0x1.809947b992cadp-695, 0.0, 0.0, 0x1.6d6a7e555830fp-662, 0.0,
     0x1.4aef925beb0b4p-367, 0.0, 0x1.22bb6a3f4c34ep-185, 0x1.8da7b6bff9645p-393, 0.0,
     0x1.9a40b3eda87c7p-489, 0x1.966bede80daf8p-482, 0.0, 0x1.fee58a7f38148p-898,
     0x1.0614418cbbf31p-677, 0.0, 0x1.8afc7cf11b412p-623, 0.0, 0x1.42918ce90a838p-557,
     0.0, 0x1.df2ed3b56751dp-965, 0.0, 0.0, 0.0, 0x1.db23f508c6462p-597, 0.0,
     0x1.ffae188c7af2ap-340, 0x1.c0edc3664b1f1p-221, 0x1.c1c273e77e628p-349, 0.0,
     0x1.7877a706f7e9dp-588, 0.0, 0x1.6feb0e66824d5p-857, 0x1.5a7573ac5eaebp-851, 0.0,
     0.0, 0x1.bc72d1e0a9a27p-109, 0.0, 0x1.3bd13cf83a398p-521, 0.0,
     0x1.7eaa15245c561p-656, 0x1.d27832b46b855p-506, 0x1.fbd55f832443ap-759,
     0x1.f3d59c4ddc3a1p-758, 0.0, 0.0, 0.0, 0x1.f22335889cdf1p-172,
     0x1.360d747a8ac27p-831, 0x1.b287d27fcfabdp-806, 0x1.7f542c6da5ecp-11,
     0x1.e103497926ad3p-536, 0x1.1bf5bcdbdd911p-535, 0.0, 0x1.09d7ef0f4f65bp-57, 0.0,
     0x1.29af2ad74536bp-75, 0.0, 0x1.7f00202603d5fp-373, 0x1.55b578fbf2e63p-753,
     0x1.193c703b8b2c1p-114, 0x1.9d58bafdcdfd9p-305, 0.0, 0.0, 0x1.c09af8aab1a1ep-147,
     0x1.4742556c46e34p-976, 0x1.9c3690dbadda2p-224, 0x1.4bc933e5ec45bp-267,
     0x1.bfa3d7c465b75p-244, 0.0, 0x1.a18072ce9ad87p-258, 0.0, 0.0, 0.0,
     0x1.a771166ad51edp-396, 0.0, 0x1.33a4952a1a644p-73, 0.0, 0x1.1b1a64b0fdad3p-520,
     0.0, 0.0, 0.0, 0x1.e85aba7022ac8p-495, 0.0, 0x1.451845aabf157p-273,
     0x1.c360d61d78482p-348, 0x1.11ca1a1b9624ap-256, 0x1.9c41c063a0fp-660, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6769a8bb33edcp-789, 0.0, 0.0, 0.0,
     0x1.8155b6560b00bp-100, 0x1.839d238fba47cp-293, 0x1.ad16caf087044p-368,
     0x1.8076e21729c89p-212, 0.0, 0x1.50159aa653a07p-120, 0x1.d32daca7961afp-268, 0.0,
     0x1.2113957e48b7fp-63, 0.0, 0.0, 0x1.2ef5214ee7009p-117, 0.0, 0.0, 0.0, 0.0,
     0x1.c6fd239ff6833p-382, 0x1.8ddb263d1eb08p-667, 0.0, 0x1.fe2a3689df81bp-744, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.83e1ae03874fep-503, 0.0, 0x1.f5bc1c96b92c1p-697, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c454228cc2fb4p-687, 0.0, 0.0, 0x1.5a4cbd9d1f501p-641,
     0.0, 0x1.e4baf30b2e8d8p-132, 0.0, 0x1.edca0aabeae5p-288, 0.0,
     0x1.4a508de389023p-778, 0x1.9daf7cac5f372p-504, 0x1.3c93539d0a0f4p-184,
     0x1.cc22b9872758fp-262, 0x1.84e62861576c1p-70, 0.0, 0.0, 0x1.a56b17d6a4a5p-945,
     0x1.93363692efca7p-601, 0.0, 0.0, 0x1.5b58bc6e26d1p-467, 0.0, 0.0,
     0x1.9f602886d3b12p-148, 0x1.570ea6e5716dep-618, 0.0, 0x1.078babe2ed826p-339, 0.0,
     0.0, 0x1.c33e92587bf34p-101, 0x1.444dfa6ac893ep-514, 0.0, 0x1.34e2309af7de2p-232,
     0x1.e986d4d772a7ap-90, 0x1.3715fff1b7503p-956, 0.0, 0.0, 0x1.9b150fdf36192p-515,
     0x1.61ef2f3174195p-986, 0x1.e79f52942eb51p-485, 0.0, 0x1.682c0910edad6p-265,
     0x1.8b91b2d8bc5f2p-187, 0x1.2070d49f4ee71p-536, 0.0, 0x1.2662a0f9fe834p-723, 0.0,
     0x1.96ca54c71971fp-261, 0x1.02891955799p-993, 0.0, 0x1.bb6acd00ea076p-804, 0.0,
     0.0, 0x1.dfb56428d99bfp-689, 0.0, 0x1.4d5abec22c418p-958, 0.0,
     0x1.174e30bb31dacp-274, 0x1.12ce70e0351d5p-898, 0.0, 0.0, 0x1.08ecad25a8ab4p-175,
     0x1.83e00798e98b4p-33, 0.0, 0.0, 0x1.c7b0a6e1523fdp-419, 0x1.5622682b37155p-676,
     0.0, 0x1.fae882b399305p-493, 0.0, 0.0, 0.0, 0x1.0e6d814252f3ap-345, 0.0,
     0x1.502ce031a7a53p-222, 0.0, 0.0, 0x1.05496ac9466e1p-127, 0.0, 0.0,
     0x1.a2883736358c4p-125, 0x1.ff3cfca0f491ep-948, 0x1.f9c01f5d9dfedp-356, 0.0,
     0x1.89ac83a645ce7p-141, 0.0, 0.0, 0.0, 0x1.f667b10234ccfp-426, 0.0, 0.0,
     0x1.9cb83b491cedfp-205, 0x1.41954f26f5c47p-403, 0x1.0d999a7ba839fp-274, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e3edf28adf4ep-1000, 0x1.aeb95e0f1310fp-600,
     0x1.7b8e54d7f750fp-761, 0x1.16915e58e7a2ep-1020, 0.0, 0.0, 0x1.08fd6b8b2848p-644,
     0x1.40b886d5072d3p-1016, 0x1.9869092f929b1p-446, 0x1.ffd461ba9df2fp-455, 0.0,
     0x1.9251120cfe59p-789, 0x1.8fd1dd05eb4bdp-664, 0.0, 0x1.05d14c9a0bb7cp-723,
     0x1.06deb4674cf15p-8, 0.0, 0.0, 0x1.3865b80d23d25p-456, 0x1.08c2f19b5ca8fp-21,
     0.0, 0x1.e7dda64492cbep-66, 0x1.00f72b9e44b21p-862, 0.0, 0x1.5d8c972dafd3cp-567,
     0x1.ee34b1937d098p-384, 0x1.5bdb1c4f8d77dp-990, 0.0, 0.0, 0x1.90f4660c64906p-268,
     0x1.3ac04351c77cp-296, 0x1.086c878fed544p-455, 0x1.399240d49e7b9p-700,
     0x1.c78bcf2124067p-788, 0x1.0e40052d1b43fp-273, 0x1.37d8b0171ce11p-323, 0.0,
     0x1.efce430449319p-1006, 0x1.5931d3d523f56p-778, 0x1.0fc734289937cp-316, 0.0,
     0x1.a09a1498f0bb7p-733, 0.0, 0x1.a0acab1e579bep-243, 0.0, 0x1.4823336cf107ap-56,
     0.0, 0.0, 0x1.fd149d770d371p-859, 0.0, 0.0, 0x1.aead50ab7c365p-486,
     0x1.771c72bf6e2e9p-704, 0.0, 0x1.d278ac0f3f4dap-651, 0.0, 0x1.a2bae45034829p-176,
     0.0, 0x1.e3a46c16957fp-841, 0.0, 0x1.bc70fc8fadf93p-610, 0.0,
     0x1.04f6302190a3ep-257, 0.0, 0.0, 0.0, 0x1.f3a5ab726c71dp-742,
     0x1.4c89ecefc4024p-765, 0.0, 0x1.4398567d8ecb9p-649, 0x1.9b9a89cb1a9dfp-737,
     0x1.8e8acef82b87ep-457, 0.0, 0x1.4d0b65907648ep-756, 0x1.d80d0521a8b71p-865, 0.0,
     0.0, 0x1.de6724d75382dp-348, 0x1.52ab4230b73c1p-568, 0x1.b14b7b5816638p-310, 0.0,
     0x1.90d3d55288113p-481, 0x1.09f161a3f7228p-225, 0.0, 0x1.f3e1bb507d3e8p-925,
     0x1.13d8dd32c7c51p-801, 0.0, 0.0, 0x1.90388d52ae9bap-452, 0x1.ec60304a2a1cp-193,
     0.0, 0x1.9dc3fcaa988f2p-487, 0.0, 0x1.46020f37fe90fp-971, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3019494fb2566p-864, 0.0, 0x1.251834f8b7a84p-517,
     0x1.333ce4c671f3fp-476, 0x1.30fd3d1d9cfc3p-695, 0.0, 0x1.56d9eda4b3719p-429, 0.0,
     0.0, 0.0, 0x1.f57d580a486f9p-384, 0x1.17351ab2be4bp-45, 0.0,
     0x1.c833c0e93552bp-575, 0.0, 0x1.57d40beb6cf31p-570, 0.0, 0x1.b315dc397f89bp-700,
     0x1.1bcabf696f677p-792, 0x1.245740d935ffbp-962, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3e1a6fcdcf7ecp-11, 0x1.a3e81b4c201bap-591, 0.0, 0.0, 0x1.a55c0b50f0e3p-56,
     0x1.7b44409a8341bp-231, 0.0, 0x1.0d860d49ee535p-783, 0.0, 0.0,
     0x1.5d3f8d310db56p-988, 0.0, 0x1.1372dcd6c4621p-355, 0.0, 0x1.93b5cad66bbf8p-617,
     0x1.b767554be4d86p-854, 0.0, 0x1.34f68896e64cp-602, 0.0, 0x1.94a2213a26f49p-507,
     0x1.b9a258c543bf4p-199, 0x1.220f06b660858p-400, 0.0, 0x1.384064b2bd1c2p-206, 0.0,
     0.0, 0x1.2d6655e22fa24p-794, 0.0, 0x1.82dc7e9678cb8p-139, 0x1.5932e5a162bd3p-465,
     0x1.3a7475a2e4a55p-706, 0.0, 0.0, 0x1.4df1e837a0d3ap-125, 0.0, 0.0, 0.0,
     0x1.16ff4416f2b32p-491, 0.0, 0.0, 0.0, 0x1.73fb34d40a2fep-422, 0.0,
     0x1.11a392f283543p-943, 0.0, 0.0, 0x1.bc4a2095c109ap-870, 0x1.e16dd7273c6cep-357,
     0x1.ede0e5d6df176p-764, 0x1.0e645a688546dp-924, 0x1.6c5c4a6917cc4p-568, 0.0,
     0x1.52f8eefe9ae8cp-1009, 0.0, 0.0, 0.0, 0x1.8c85cc420e33p-963,
     0x1.1d9013670d8a7p-393, 0x1.88d930684ece2p-364, 0.0, 0.0, 0.0,
     0x1.d8b126b787ca9p-451, 0x1.94bf08fcea8b7p-366, 0.0, 0.0, 0.0,
     0x1.a2a8f08aab7a6p-996, 0x1.b3abea66fc351p-179, 0x1.4ec56fd673704p-328,
     0x1.135c721fea017p-91, 0.0, 0.0, 0x1.535cd4a8d9cf7p-211, 0x1.421b069402679p-704,
     0.0, 0x1.9902d6440b01ep-699, 0x1.d3d0488208386p-251, 0x1.b59f90b2d77bdp-572,
     0x1.8c172e23e7bd2p-756, 0x1.28ef99481319fp-56, 0x1.006ae2b2422fp-338,
     0x1.f346fed064f98p-957, 0.0, 0.0, 0.0, 0.0, 0x1.d4b1f9895d1e3p-317, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.58819fadcdb7cp-278, 0.0, 0x1.373cff9fd0641p-267, 0.0,
     0x1.ea091d7d9daa9p-945, 0.0, 0.0, 0x1.06e555c85d521p-861, 0.0, 0.0, 0.0,
     0x1.3c61a77d8e5edp-847, 0.0, 0.0, 0.0, 0x1.d9c39830b59a4p-246, 0.0, 0.0,
     0x1.4719281487cep-825, 0.0, 0x1.10aa3fbc04895p-426, 0.0, 0.0, 0.0,
     0x1.82bab7d101f3ep-716, 0x1.b1fee292624dep-707, 0x1.d673ba75781ap-922,
     0x1.cd8e6a92787a2p-238, 0.0, 0x1.e432acca8de5bp-1013, 0.0, 0x1.cac88b482046ap-94,
     0x1.ec9dcb1d9d554p-608, 0.0, 0x1.dbcb3f4a861f8p-922, 0.0, 0.0,
     0x1.4b78d761c80bcp-285, 0.0, 0x1.0831414e6c648p-233, 0.0, 0x1.fa819d6341e23p-406
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int4_t global_bench_acc;
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
        ml_int4_t local_acc;
        int32_t i;
        ml_int4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_int4_t tmp1;
            ml_int4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_expfrexpd4_kvx(tmp0);
            memcpy(((ml_int4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
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
    printf("Sleef_finz_expfrexpd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_expfrexpd4_kvx bench acc [%d, %d, %d, %d]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
