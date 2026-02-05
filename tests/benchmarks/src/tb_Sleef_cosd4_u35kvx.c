/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd4_u35kvx.c --function Sleef_cosd4_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.6dae270d07717p-646, 0.0, 0x1.91b4613da0fa3p-865, 0.0,
     0x1.9900da2ab1c16p-944, 0.0, 0.0, 0.0, 0x1.ba3376fb710c8p-80,
     0x1.04d9d1b5da381p-744, 0.0, 0.0, 0.0, 0.0, 0x1.d549987997c22p-909, 0.0, 0.0,
     0.0, 0x1.5d00d8c7b0579p-32, 0.0, 0.0, 0.0, 0.0, 0x1.92566c9df411ep-998, 0.0,
     0x1.37c4a656a2744p-115, 0x1.cc56fd0e6dcd4p-134, 0.0, 0x1.36bad3216979ep-5, 0.0,
     0x1.f034aade8e057p-864, 0x1.a228c144a0a8ep-801, 0x1.7e80a5fbc17afp-965, 0.0, 0.0,
     0x1.d88bff83817cp-886, 0.0, 0x1.0d660aa72cf17p-791, 0x1.33821a92e6b9ap-77, 0.0,
     0.0, 0x1.78fe68fc9ef51p-673, 0.0, 0.0, 0.0, 0x1.53cdfe9e43cap-641, 0.0, 0.0, 0.0,
     0x1.0fad4ae31d876p-259, 0.0, 0x1.dd177cc2077d9p-310, 0x1.ffa1525c82f23p-781, 0.0,
     0x1.d27f4a3eb82fcp-547, 0.0, 0.0, 0x1.7e338faf2372fp-995, 0x1.e4f916a1d38cbp-316,
     0x1.a0ab1eff40ef7p-807, 0.0, 0.0, 0x1.b8beae48e0e76p-265, 0.0,
     0x1.671b2092522bap-495, 0.0, 0x1.fde62eef53644p-692, 0x1.90d278f75fa86p-536, 0.0,
     0.0, 0.0, 0x1.0a97cd56d7cfep-469, 0x1.fc120cd509ea5p-7, 0x1.e46322dfabadap-753,
     0x1.b573a4f2570c3p-320, 0x1.4d0ea94ab3325p-789, 0.0, 0x1.88cfa093723b2p-838, 0.0,
     0.0, 0x1.bed72e203ddf4p-195, 0.0, 0.0, 0x1.ad5121069713dp-188, 0.0,
     0x1.1da378008d759p-437, 0x1.6a8381c21c3abp-85, 0.0, 0.0, 0x1.6cde5c277d15ep-136,
     0.0, 0.0, 0.0, 0x1.adf6f580ff2d8p-216, 0x1.361cb7e486b7fp-221,
     0x1.8ebf1e2a15dfap-889, 0x1.0a64fc598dc44p-68, 0.0, 0.0, 0.0,
     0x1.ca2da8ca6170bp-98, 0.0, 0.0, 0x1.59993f96efa7cp-443, 0x1.4509962e6bea4p-887,
     0.0, 0x1.7490e520425b1p-394, 0x1.d1cf9405eb289p-648, 0.0, 0x1.e8b715edcc62bp-881,
     0.0, 0x1.7cc387bc18e67p-633, 0.0, 0.0, 0.0, 0x1.620a413748f0ap-985, 0.0,
     0x1.777e46dd53075p-425, 0x1.ac99f59367312p-783, 0.0, 0x1.97e27d75ff2p-448,
     0x1.8266d26fd12b8p-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3991c25167f91p-64, 0.0,
     0.0, 0x1.7ae6ed7fad38cp-579, 0.0, 0x1.cc8716cb7f04dp-690, 0x1.f9164021b4dbfp-297,
     0.0, 0x1.8162113c9a935p-744, 0.0, 0x1.92367cb4fade3p-474, 0.0,
     0x1.12484779752d6p-389, 0.0, 0x1.c87bfc84719f4p-188, 0.0, 0x1.9242b652babd5p-648,
     0x1.02742a44c8a3ap-220, 0.0, 0x1.36007848adb41p-685, 0.0, 0x1.93252544b1623p-423,
     0x1.46ba4808ae63dp-608, 0x1.6131c8a853173p-117, 0x1.0f2a56259826ap-967, 0.0,
     0x1.98f9f264b2b9ap-125, 0.0, 0x1.aa1d538d4fd99p-588, 0.0, 0.0, 0.0, 0.0,
     0x1.d545183bc625p-171, 0x1.5c42d13302167p-311, 0x1.7ceabb3176ed8p-401, 0.0,
     0x1.dff22173081f9p-380, 0.0, 0.0, 0x1.0eb8145f28b8ap-352, 0.0,
     0x1.8e7192abf3788p-555, 0x1.ee5af4c1be4f7p-65, 0.0, 0.0, 0.0, 0.0,
     0x1.70d20cfb3d8b9p-841, 0.0, 0.0, 0x1.6c0b321ccd0e1p-732, 0.0,
     0x1.f6cf1a01297d5p-763, 0.0, 0x1.1d9c4aec2510bp-969, 0.0, 0x1.1173de8086bbdp-155,
     0x1.af965142f02b7p-531, 0.0, 0x1.96c579a8e24e1p-527, 0x1.7a25747ab8423p-866,
     0x1.53e6c8f477684p-773, 0.0, 0x1.2fce427aafdffp-318, 0.0, 0.0,
     0x1.0f88ce6601b1bp-730, 0x1.95832dc8302d2p-336, 0.0, 0.0, 0.0,
     0x1.cbeaf694438c8p-277, 0x1.c021f353176a1p-738, 0.0, 0.0, 0.0,
     0x1.3b30ede4a793dp-261, 0.0, 0x1.405ef67a2b842p-569, 0x1.62c9a4b2bca88p-610, 0.0,
     0x1.5c47d151ca274p-899, 0x1.9c0b32cc97a51p-671, 0.0, 0x1.f9c30c94ee8f7p-371,
     0x1.6ce077345269bp-547, 0x1.771cad88c9519p-918, 0x1.0920fa0c09a79p-932,
     0x1.e66d3a10497aap-683, 0.0, 0.0, 0.0, 0.0, 0x1.a5f0eb34362ap-90,
     0x1.ac0de86d4323ep-66, 0x1.79b3575027a4ap-682, 0x1.8763819153e57p-150,
     0x1.108cbe74973b6p-448, 0x1.18cfc437465c2p-621, 0.0, 0.0, 0x1.352f9b7f6bfb2p-397,
     0x1.2d01043178a42p-688, 0x1.6ac1eccf6c5cp-250, 0.0, 0.0, 0.0,
     0x1.04746cc23308dp-429, 0.0, 0x1.8741624710855p-954, 0x1.662faf01794b1p-788,
     0x1.67226e8266ae9p-525, 0x1.2a3897abb00f8p-1022, 0.0, 0x1.dcb8f1a8e76afp-1000,
     0x1.da20482bb80a7p-903, 0x1.f21be24fc7b67p-953, 0x1.4d6b7d47853b3p-259, 0.0, 0.0,
     0.0, 0.0, 0x1.05c05dfe86d93p-547, 0.0, 0x1.707852a825bdbp-660, 0.0, 0.0,
     0x1.2c86d0de06a14p-248, 0.0, 0x1.676b10eccb05bp-94, 0x1.92b5a3557803fp-779, 0.0,
     0.0, 0.0, 0x1.792f6d02e2ed8p-489, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0d366e7a2c5p-999,
     0.0, 0x1.b03b301368a6p-324, 0.0, 0x1.15af47ce8ab53p-875, 0x1.644540c090923p-640,
     0x1.0520324df94d5p-936, 0.0, 0x1.8b5cda79adc94p-412, 0x1.8b586aef2ca02p-871,
     0x1.40bd8a9c5351p-375, 0.0, 0x1.0ec92eeafa517p-445, 0x1.0dbeb253bd288p-336,
     0x1.bff76f4513e8ap-131, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94d4acb58b58cp-146,
     0.0, 0x1.601c0508b6e56p-836, 0.0, 0x1.280a8aaea9896p-219, 0x1.5fb669119f576p-130,
     0x1.f1129eabc9e24p-613, 0x1.c6acb40658294p-23, 0.0, 0x1.bd73ea46c0a9ap-22, 0.0,
     0x1.fa25e5847cbabp-477, 0.0, 0.0, 0.0, 0x1.cf039c01309c4p-516, 0.0, 0.0, 0.0,
     0.0, 0x1.f497e4daf42aep-835, 0.0, 0.0, 0x1.88d07740c4715p-779, 0.0, 0.0,
     0x1.f68d28e9c0b28p-669, 0x1.f90d6ef2eb966p-506, 0.0, 0x1.949a2d51cc37fp-747, 0.0,
     0.0, 0x1.cb087b34e40bbp-636, 0x1.4e42593bcfe32p-182, 0x1.3129d40316f1ep-1013,
     0.0, 0.0, 0.0, 0.0, 0x1.43d9fe3434515p-60, 0.0, 0x1.506aa1894b97cp-59,
     0x1.358d78eb37f23p-239, 0.0, 0.0, 0.0, 0x1.a68baa2f1c4b1p-892,
     0x1.51909404f5f4cp-727, 0x1.2248dd5a5693bp-651, 0x1.83ddafc7c82eep-535, 0.0, 0.0,
     0x1.515981ce11f04p-448, 0x1.47b2c964fbcccp-604, 0x1.18125ab324601p-282,
     0x1.39bdb607074bbp-634, 0.0, 0.0, 0.0, 0x1.f3b6ae392fe98p-545, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5c0e6364960ep-322, 0.0, 0.0, 0x1.af91b3554c108p-180, 0.0,
     0x1.578d86500ab54p-686, 0.0, 0x1.b0784150a053p-933, 0.0, 0x1.3839feb61d3fep-251,
     0x1.362314731b5d5p-166, 0.0, 0.0, 0x1.462bc436003e7p-86, 0x1.b5f6428eeee5cp-637,
     0.0, 0x1.5c6942efcd3ddp-38, 0.0, 0x1.ecf5148eebe41p-609, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88d65e9cab11p-666, 0.0, 0.0, 0x1.c4174057ca453p-464, 0x1.8984c42d5c8c7p-303,
     0.0, 0x1.ff3a96f43af46p-386, 0.0, 0.0, 0.0, 0x1.2bdd0575c4879p-614,
     0x1.9419a0ea5bfedp-237, 0.0, 0x1.16d0f8a8457a9p-960, 0x1.5920a012d75dbp-660, 0.0,
     0x1.ea3c15766f2aap-747, 0.0, 0.0, 0.0, 0x1.111c17dde5f44p-926, 0.0,
     0x1.dca5843f7f779p-101, 0.0, 0x1.74baef60a0fe1p-196, 0x1.1b3bf85d27d1ap-684, 0.0,
     0.0, 0x1.30f7a46b9feb9p-99, 0x1.d3017c90ec15bp-946, 0x1.6b5d57d4b174p-754, 0.0,
     0x1.413ec8704e671p-114, 0.0, 0.0, 0.0, 0.0, 0x1.835e42798b127p-899,
     0x1.f6721d29ddbafp-680, 0.0, 0x1.12bf26ca21e38p-906, 0x1.5402f31310f46p-195,
     0x1.fb708e62b1fc6p-164, 0.0, 0.0, 0.0, 0.0, 0x1.54b8888f38eb9p-870, 0.0,
     0x1.bc5190bf65a31p-895, 0x1.64e57663a1a64p-792, 0x1.1b7e68de92e4fp-766,
     0x1.d5b63a194c17ap-512, 0x1.efee72ea71358p-962, 0.0, 0.0, 0.0, 0.0,
     0x1.0b31ad3635325p-165, 0x1.607e97f46d634p-324, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1beca148dc04p-736, 0x1.df7588cc4adebp-705, 0x1.e1a720bfad9b8p-991, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.02d0e39bf2486p-445, 0x1.ef012d23141abp-480, 0.0, 0.0,
     0.0, 0x1.01040e4e3e6dbp-28, 0.0, 0x1.f354846679aaap-587, 0x1.bb73e7a6e677dp-732,
     0.0, 0.0, 0x1.14a875388aeffp-781, 0x1.bbc46b9b87852p-932,
     0x1.b6f01d89a9c32p-1020, 0.0, 0x1.a5accdc502929p-251, 0x1.2ff0ba452de05p-142,
     0.0, 0x1.4702de38eee3cp-131, 0.0, 0.0, 0.0, 0.0, 0x1.30df4c2e52c45p-116, 0.0,
     0.0, 0.0, 0.0, 0x1.b344f72cf0396p-50, 0.0, 0.0, 0x1.1cff8554f577cp-42, 0.0,
     0x1.b269a9f1b56c9p-754, 0x1.ea7023c1f7963p-995, 0x1.68494204ac9dap-333, 0.0, 0.0,
     0x1.3560ed6ec66f1p-946, 0.0, 0.0, 0.0, 0.0, 0x1.1355bd83cdc88p-478,
     0x1.0ca0f93738f19p-414, 0.0, 0.0, 0.0, 0x1.4f96bee2c87c4p-23, 0.0,
     0x1.dc499a9ebd56ep-261, 0.0, 0.0, 0.0, 0.0, 0x1.252a5438533f9p-38, 0.0, 0.0, 0.0,
     0x1.e8a4fe41a4bb1p-626, 0.0, 0.0, 0.0, 0x1.9fbf04bb6848fp-396, 0.0,
     0x1.54f386a25ddb1p-867, 0x1.cf4c9145eef41p-269, 0.0, 0x1.ec76eabf58df1p-908, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0765f3d3f1d6p-551, 0x1.bb5228f46c438p-715,
     0.0, 0x1.9514bd6119a21p-755, 0.0, 0.0, 0.0, 0x1.40a2af2d5d3e4p-228, 0.0, 0.0,
     0.0, 0x1.648e942f890d1p-299, 0.0, 0x1.accd509fd44dap-848, 0x1.aa3a1f7322e1cp-927,
     0x1.2d93790f713c6p-13, 0.0, 0.0, 0.0, 0x1.ce89f4479b858p-779,
     0x1.bad897418121ep-430, 0.0, 0.0, 0.0, 0.0, 0x1.441e4cfaa84fap-212,
     0x1.937fd8be03633p-578, 0x1.2591f9e27325p-236, 0.0, 0.0, 0x1.62b468e072d1bp-768,
     0x1.69de574eb8707p-359, 0.0, 0x1.592dafb71214dp-794, 0.0, 0x1.c67da2a5faebbp-331,
     0.0, 0.0, 0.0, 0x1.aa06d7e17caf3p-304, 0x1.6aa25c6984a54p-227, 0.0, 0.0,
     0x1.86f1ca853a9fp-380, 0x1.8c00a08b546dp-838, 0x1.70744705a21b1p-207, 0.0,
     0x1.05522b9046c3ap-335, 0.0, 0.0, 0x1.f533f230809d4p-982, 0x1.2e51f81dc6cdp-895,
     0.0, 0.0, 0x1.a1a15799d34b7p-896, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a6be3223a8c5fp-670, 0.0, 0x1.2262770498a98p-30, 0x1.257249fba5935p-631, 0.0,
     0x1.0f99e7673e8c3p-381, 0.0, 0x1.3f284b02cfa89p-332, 0x1.4db9e201984bdp-589, 0.0,
     0.0, 0.0, 0x1.713b3e7bfd35ep-350, 0x1.2a56921afd096p-903, 0.0, 0.0, 0.0,
     0x1.60c83dacf2b32p-432, 0.0, 0.0, 0.0, 0x1.be6458b0e5c7cp-67, 0.0,
     0x1.abf6f222b5584p-534, 0x1.96d2a08560391p-792, 0.0, 0x1.605205ec2f9e6p-642, 0.0,
     0.0, 0x1.a23004442c90bp-959, 0x1.45ad0479e44f9p-21, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.87063a158b47ap-1001, 0.0, 0.0, 0.0, 0x1.6e03ae963d954p-4,
     0x1.98c64fd2bb0c4p-996, 0.0, 0.0, 0.0, 0x1.3d729ababbcaep-752,
     0x1.a31e36edbe3abp-956, 0.0, 0x1.ba6479828c35ap-764, 0x1.b568b48127e62p-561, 0.0,
     0x1.9d950eb1d0508p-50, 0.0, 0.0, 0x1.9dfbcada0ab94p-123, 0.0, 0.0,
     0x1.05f50c03d6227p-575, 0.0, 0.0, 0x1.c8a8987a1a5e9p-918, 0x1.83f0a92b1392fp-852,
     0.0, 0.0, 0.0, 0x1.53ff801d5b51cp-417, 0.0, 0.0, 0.0, 0.0,
     0x1.4af2e459ba59fp-945, 0.0, 0x1.0a5c8c964efe7p-198, 0x1.653326ebf992p-739, 0.0,
     0x1.9bc2bc4c3e9a5p-281, 0x1.94cfe5c84aab5p-964, 0.0, 0x1.8f36ad5eb3f59p-969, 0.0,
     0.0, 0x1.a64f130ac4916p-1007, 0.0, 0.0, 0x1.f118ebd870d7ep-510,
     0x1.8ad05d0ec4a1p-165, 0.0, 0.0, 0x1.2f2559489dbf9p-220, 0.0, 0.0,
     0x1.9403a94ec30a1p-561, 0x1.98332f8e555d9p-446, 0.0, 0.0, 0.0,
     0x1.dbabc912f2b5ep-962, 0.0, 0x1.c32b772fdabep-6, 0.0, 0.0, 0.0, 0.0,
     0x1.89e4d241c1d57p-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.839000c6d5023p-840,
     0x1.7526bc9fa169bp-497, 0x1.2ef68efd8b6b2p-120, 0x1.5f13613f2e426p-912,
     0x1.31b4be51af0c5p-406, 0.0, 0x1.94c283b2a462p-32, 0.0, 0x1.09222ab3972bbp-153,
     0.0, 0x1.9fa16312d21a6p-152, 0x1.f95c2a0c3004ap-800, 0.0, 0.0,
     0x1.d7427e2db123fp-777, 0x1.3b1cd6acea59p-866, 0.0, 0.0, 0x1.800d7c9d7ca6p-13,
     0.0, 0.0, 0x1.42f3776927ffp-62, 0.0, 0x1.b24c0e51f5414p-768, 0.0,
     0x1.b63fef32026bcp-963, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed501dfd767a7p-240, 0x1.d0cba105ccf64p-873, 0x1.e815afcdd6f1bp-845, 0.0,
     0x1.7dab6ed9f9965p-578, 0.0, 0.0, 0.0, 0x1.17218d8a21b56p-145,
     0x1.dbcaaf32daf67p-726, 0.0, 0.0, 0x1.bf3a68a9fba69p-734, 0.0,
     0x1.4ab7c018b1a1bp-770, 0.0, 0.0, 0.0, 0x1.4c684d06d22e6p-101, 0.0, 0.0,
     0x1.21efb01e3bf7ap-518, 0x1.0fed3ad6d7154p-404, 0x1.08fdf95f34551p-650, 0.0,
     0x1.29c4f540d3f58p-672, 0.0, 0.0, 0x1.abdc1a8381599p-299, 0.0, 0.0,
     0x1.86f4ab2206fe9p-105, 0.0, 0.0, 0x1.4a620d4106979p-317, 0.0, 0.0, 0.0, 0.0,
     0x1.af97791a378fap-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.833d82bfbc074p-219, 0.0,
     0x1.7f569738e3874p-940, 0.0, 0.0, 0x1.fd5f0480ecdadp-178, 0.0,
     0x1.f0aeb75291c79p-572, 0x1.e72a18e61e925p-781, 0x1.3a083168530efp-300,
     0x1.593b2e7d3993cp-329, 0x1.3015e20f3d61cp-479, 0.0, 0x1.fe924c0ef9b03p-980, 0.0,
     0.0, 0.0, 0x1.bf376108a18d5p-208, 0.0, 0.0, 0.0, 0.0, 0x1.e1e9b7dbe6a9cp-351,
     0x1.dc5550be6469cp-278, 0x1.ae999a4d562dbp-504, 0x1.ff32c264b0fa7p-15,
     0x1.13bf183101502p-122, 0x1.7b786ab9038cdp-303, 0x1.df5bd00da8294p-213, 0.0, 0.0,
     0.0, 0.0, 0x1.9a93a8e5081dfp-196, 0.0, 0x1.43b267ab0b303p-84,
     0x1.9c543587ff9d9p-29, 0.0, 0x1.d37b0b1a8352cp-100, 0.0, 0.0,
     0x1.5e693d9aca92bp-559, 0.0, 0x1.86d9003f03312p-863, 0x1.3bef01289430ep-119,
     0x1.9b75593ab78cap-123, 0x1.f8fcfdd4375d9p-917, 0.0, 0.0, 0.0, 0.0,
     0x1.04bb7b50b991ap-788, 0.0, 0x1.5c8865757e80ap-781, 0.0, 0x1.e3c275e5a05ecp-977,
     0.0, 0.0, 0x1.d960767fd8f2p-44, 0.0, 0.0, 0.0, 0x1.6f0b48ae7fb23p-730, 0.0, 0.0,
     0.0, 0x1.fd32ca549b443p-406, 0x1.784a194050f0ep-280, 0x1.ca90872c1c7cap-322, 0.0,
     0x1.b4f7794b56582p-38, 0.0, 0x1.2e03366a9b104p-4, 0x1.159cc6abfc6ccp-405, 0.0,
     0.0, 0.0, 0x1.c503b60153fbap-367, 0x1.472d7e5c1fa2cp-200, 0x1.e5e5f4d0a0fa6p-641,
     0.0, 0x1.a8a11f031778ap-326, 0.0, 0x1.e6a5b6980fad8p-40, 0.0,
     0x1.d640341a33595p-373, 0x1.71d0ac8716acp-9, 0.0, 0.0, 0x1.a870f4174ca2ap-261,
     0x1.c893da7d5cd8p-501, 0x1.354bd4066865bp-29, 0x1.dbd58307a7a6fp-909, 0.0,
     0x1.77ff04b223ffap-70, 0x1.5a8646cf52526p-66, 0.0, 0.0, 0x1.07eae9a869babp-371,
     0.0, 0.0, 0x1.e7dd574aff3f3p-548, 0x1.d69df52cc30f7p-665, 0.0, 0.0,
     0x1.bbfaf2329dd32p-515, 0.0, 0x1.3b3e272b151c6p-322, 0x1.97f6a1699b209p-66, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e0df2c0b79aep-31, 0.0, 0.0,
     0x1.44604f15bdf7cp-848, 0x1.c19b9670c42f6p-784, 0.0, 0x1.6da0b28a5581ep-170, 0.0,
     0.0, 0x1.db0932424c88ap-802, 0x1.d4910baf9e50bp-322, 0.0, 0x1.f7d6b414077d7p-78,
     0x1.822030af5adep-147, 0x1.749956c9374fcp-577, 0x1.f91433f8250c5p-210, 0.0, 0.0,
     0x1.171b8c07929ebp-16, 0.0, 0.0, 0x1.2ffacc0624dbcp-544, 0x1.21b710e50171cp-193,
     0.0, 0x1.c20581d2baed5p-55, 0.0, 0x1.53e0adb892453p-129, 0x1.ffefe48829676p-609,
     0.0, 0x1.5766a9187e2bap-399, 0.0, 0x1.ceb67514a5216p-371, 0.0,
     0x1.7deef108ebb59p-298, 0x1.690fdbb652167p-108, 0x1.35b60af5cc126p-945, 0.0, 0.0,
     0x1.0409d2ef15647p-193, 0x1.a91830477a54fp-33, 0.0, 0.0, 0x1.f3072f9ed7efp-135,
     0x1.00bf5f2ec3c28p-3, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.69cbec4feb8dbp-324,
     0x1.06adb91475526p-95, 0.0, 0x1.0e8f7939311bcp-645, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f29ac36ccb0bp-979, 0.0, 0x1.d38c3850598d5p-931, 0.0, 0.0, 0.0,
     0x1.90624971b633ap-402, 0x1.837919ef519a8p-677, 0.0, 0.0, 0x1.dca0322b44659p-447,
     0.0, 0.0, 0x1.e636e34f89b3bp-804, 0.0, 0.0, 0x1.7f5b19319327p-795,
     0x1.f04f506c124a2p-621, 0x1.de51859531bd1p-379, 0x1.60f6353cd755p-560, 0.0, 0.0,
     0.0, 0.0, 0x1.8bac4eba6e566p-361, 0x1.79aadc1c256abp-895, 0.0, 0.0,
     0x1.f3620f23bf5d5p-569, 0.0, 0.0, 0x1.366d7a09beb9ap-260, 0.0, 0.0,
     0x1.e85b4df863c29p-947, 0.0, 0.0, 0.0, 0.0, 0x1.79d4bc6d7a5a6p-726,
     0x1.74ec04e3f1188p-223, 0x1.70c17dd42999dp-175, 0x1.e3f447b3c89c7p-635, 0.0,
     0x1.02a31da396308p-605, 0x1.362d2053b8959p-692
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
            tmp1 = Sleef_cosd4_u35kvx(tmp0);
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
    printf("Sleef_cosd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cosd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
