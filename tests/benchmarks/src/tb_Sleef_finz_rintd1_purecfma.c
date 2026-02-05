/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintd1_purecfma.c --function \
 *     Sleef_finz_rintd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.4f45cd9aa1135p-858, 0.0, 0.0, 0.0, 0x1.62a20f222681fp-898,
     0x1.af8551dca135ep-335, 0x1.db4f18373cb64p-269, 0.0, 0x1.904c6877a3af7p-298,
     0x1.c792ab22b1a3dp-741, 0.0, 0x1.9808eb433574ep-117, 0x1.ee092241caddbp-826, 0.0,
     0x1.15856624ed277p-206, 0x1.2960331212284p-582, 0x1.98c9ea9f89704p-876, 0.0,
     0x1.a56efe05d8754p-276, 0.0, 0.0, 0x1.b3636578291f4p-373, 0x1.28e7d3a0a590dp-696,
     0.0, 0x1.0c6cbc2ca7fdep-934, 0.0, 0.0, 0.0, 0x1.05e733d857dbdp-703,
     0x1.9af1a46833772p-620, 0.0, 0.0, 0x1.c13688d175a3bp-553, 0.0,
     0x1.99dd5f6fe87fap-418, 0x1.81c5b551b8553p-387, 0x1.00e7fb87350d8p-413,
     0x1.dda3ae74a3debp-797, 0.0, 0.0, 0.0, 0x1.30c1aec0b3546p-814,
     0x1.c4c6c9d750afp-230, 0x1.77fbb806f7357p-711, 0.0, 0.0, 0.0,
     0x1.cf5528772b017p-967, 0.0, 0.0, 0.0, 0x1.f9f5d114f1b3fp-1012, 0.0, 0.0, 0.0,
     0.0, 0x1.3660752a95074p-308, 0.0, 0.0, 0.0, 0x1.db79fa2cdc95fp-518,
     0x1.8362d9d31a0fbp-89, 0.0, 0x1.900a84f2036ccp-750, 0x1.031b5fa786d8p-837,
     0x1.b23d97ed2572cp-103, 0.0, 0x1.902a95c1abe16p-149, 0.0, 0.0,
     0x1.1ebda4bc84eap-96, 0.0, 0x1.1b296d7e6836ap-117, 0.0, 0.0,
     0x1.06bd4aba3d35bp-137, 0.0, 0x1.6defb5ad5ae56p-329, 0x1.d73e9fe8494adp-589, 0.0,
     0x1.2b9ff67a442a9p-770, 0.0, 0x1.2add752666271p-445, 0.0, 0x1.51bb52af665cep-717,
     0.0, 0.0, 0.0, 0x1.69eebb0e57686p-484, 0.0, 0.0, 0x1.42f4d50b4ac55p-233,
     0x1.78346c35c4a7bp-962, 0x1.046c44080ca38p-888, 0x1.f032f5cb1be4ap-743, 0.0, 0.0,
     0.0, 0.0, 0x1.9161cb1d93242p-191, 0.0, 0x1.c502a48d484adp-599, 0.0, 0.0, 0.0,
     0x1.7d05e75b79d37p-330, 0x1.881525695dd07p-880, 0x1.baaa0a01d6f5p-827,
     0x1.0f4d323b166afp-4, 0.0, 0.0, 0.0, 0.0, 0x1.a51332b658108p-454, 0.0,
     0x1.79605811e1578p-926, 0x1.08ef99fba2bf5p-973, 0.0, 0.0, 0x1.f31a0d1f30065p-820,
     0x1.5865dd0f5a5e2p-170, 0.0, 0.0, 0x1.d25931d9a857ep-146, 0.0, 0.0, 0.0,
     0x1.5ac96b342c423p-973, 0x1.1a40718476bc9p-284, 0x1.0cccd5572607fp-556, 0.0, 0.0,
     0x1.79056740ab7dbp-960, 0x1.82bfd795d6a81p-700, 0x1.ee7671670b9a8p-394,
     0x1.614f36851fdap-890, 0x1.2ed31e0427b81p-658, 0x1.3e1edfd12e704p-890, 0.0,
     0x1.a1a89ceebfba5p-49, 0.0, 0.0, 0x1.e3e0f49e91fb3p-275, 0.0, 0.0,
     0x1.b59bebe2fe8e8p-214, 0x1.10c3360fb6607p-516, 0x1.16db37060349p-384, 0.0, 0.0,
     0.0, 0.0, 0x1.8a495b985bd1ep-462, 0x1.b1436a8741d3p-471, 0.0, 0.0,
     0x1.8acf7c9a60af9p-838, 0x1.7fe297fa2dae7p-330, 0x1.51a07cdd5488ap-27, 0.0,
     0x1.a2cc991c27511p-378, 0.0, 0x1.b10deb202b4edp-57, 0x1.988099f10c745p-129, 0.0,
     0.0, 0.0, 0x1.cedce80a25217p-84, 0.0, 0x1.9ad0a122ca2d5p-495, 0.0,
     0x1.c6d95dcd948bcp-908, 0.0, 0.0, 0x1.47e5a373a7595p-63, 0x1.2a2798d00df58p-914,
     0.0, 0x1.05f1d74ffc85p-141, 0.0, 0.0, 0.0, 0x1.b17e9c7532e45p-990,
     0x1.2db84cfccc5c6p-759, 0x1.4ad386b96f1a6p-387, 0x1.28c16cf1a572ep-555, 0.0, 0.0,
     0x1.dd55a22ca3374p-994, 0.0, 0x1.8171b22ad6975p-670, 0x1.dd7349a50e026p-119,
     0x1.e47383b9942f9p-474, 0x1.d59b8c55166cp-27, 0x1.5fc77648f8344p-680, 0.0, 0.0,
     0.0, 0x1.1f39850e7bcbdp-942, 0.0, 0x1.72a7834eaa293p-753, 0.0, 0.0,
     0x1.ccd6240bd6ae6p-431, 0.0, 0.0, 0.0, 0x1.43744279ec5dep-590, 0.0,
     0x1.090d1d3899971p-215, 0.0, 0.0, 0.0, 0x1.5a9b83e5ac2c5p-481, 0.0, 0.0, 0.0,
     0x1.5ad723336eccbp-331, 0x1.982cd369ca442p-533, 0.0, 0x1.cbfb32404f139p-613, 0.0,
     0x1.2962b1d249cfep-41, 0.0, 0x1.55e0794a10153p-264, 0x1.8be03881d98f5p-163,
     0x1.3b89a84e21602p-551, 0.0, 0.0, 0x1.27bba94f77a5fp-585, 0x1.82b8a511d9405p-81,
     0.0, 0x1.67f905ef446d2p-704, 0.0, 0x1.0139a7e337c34p-926, 0.0,
     0x1.d18bdd808484cp-548, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87fd5c4a6ba4bp-772,
     0x1.d74bab9e79441p-724, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0527c2a70ebd4p-617, 0x1.d8e56f6c5a66fp-529, 0.0, 0x1.8ff87fa25d1bp-644, 0.0,
     0.0, 0.0, 0.0, 0x1.621c3cc56243fp-180, 0x1.c2d21f7e4ff5dp-876,
     0x1.ed2fcbbfe360cp-757, 0x1.60e9853850afap-509, 0x1.2358200bb2a86p-591,
     0x1.710099c307203p-481, 0x1.f1edf8e2ecbefp-418, 0x1.5b27fa7f30fd4p-950, 0.0, 0.0,
     0x1.bd4c3e54bdad3p-125, 0x1.571c993530f63p-294, 0x1.7c9ec4486f37ep-532,
     0x1.a929d6518a04dp-240, 0.0, 0.0, 0x1.26e4dc6f37d02p-125, 0.0,
     0x1.927092facc8b8p-155, 0.0, 0x1.c412d5bafbb13p-11, 0x1.173140ead6544p-393, 0.0,
     0x1.70e732b7252acp-140, 0.0, 0.0, 0x1.866a61b17f6a6p-476, 0x1.bebcc44f99e91p-170,
     0.0, 0.0, 0x1.c97a89a066971p-458, 0.0, 0x1.d6df8fe84e97fp-398, 0.0, 0.0, 0.0,
     0.0, 0x1.f3a2e92a540bcp-357, 0.0, 0.0, 0x1.d38cbe674eb5ap-592, 0.0,
     0x1.f394fc511ad6cp-900, 0x1.8af4542f5197ep-565, 0x1.0e154e293757bp-628, 0.0, 0.0,
     0.0, 0x1.61e656ee0ffdap-435, 0.0, 0.0, 0.0, 0x1.526837266bb1bp-636, 0.0, 0.0,
     0.0, 0.0, 0x1.92d8a89670dd9p-322, 0x1.cf5259a2b4dd7p-370, 0x1.10fb72fe4537ap-506,
     0x1.e2a803b134705p-297, 0x1.ce26f4c8731a2p-878, 0x1.68a15e0811fap-23, 0.0,
     0x1.476a1dd061bdp-875, 0.0, 0x1.3f61069073a43p-63, 0x1.b5e674e7b8108p-882, 0.0,
     0x1.f2de738c0207cp-484, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b89e9c1546c7p-851,
     0x1.742c0442e067fp-293, 0.0, 0x1.5df0337a549cap-795, 0x1.e20a720ca1592p-722,
     0x1.de77cd17858c9p-334, 0x1.bf9dbcf32e31bp-110, 0x1.6b2bd97892fb3p-352,
     0x1.782322ddaea44p-612, 0x1.34f2529b01ec2p-686, 0x1.de7959861e5d4p-61, 0.0,
     0x1.af984edf01032p-791, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6edc113efe418p-493,
     0x1.4eb8073a96f7ep-122, 0.0, 0.0, 0.0, 0.0, 0x1.9ead2d585410ap-594, 0.0,
     0x1.4650c1b1f0af2p-523, 0x1.0c17ebb9ac241p-864, 0x1.3563ebf64122p-781,
     0x1.c79b221d6b3b2p-693, 0x1.25d0bab5b2ed8p-14, 0.0, 0x1.12aef7075a592p-576, 0.0,
     0x1.2bcbe4fca6958p-201, 0x1.9c9e69e92ccc3p-117, 0x1.cde77ff58a912p-722, 0.0, 0.0,
     0.0, 0.0, 0x1.c74e46f79a939p-846, 0.0, 0x1.756023cf7e24ap-417,
     0x1.bf2e090d7be5ap-237, 0x1.46b046455ed1cp-523, 0.0, 0.0, 0.0,
     0x1.890ba7f541418p-128, 0.0, 0.0, 0.0, 0x1.021545be362b6p-820,
     0x1.9a2492eb00be5p-469, 0x1.92481506f0b86p-901, 0x1.f08f3fdbb4837p-260,
     0x1.c7591a53bf6edp-1015, 0x1.ce25663c26a6cp-634, 0.0, 0x1.e6dc3784bedf7p-449,
     0x1.510738267fecdp-544, 0x1.b5b7cb5248479p-639, 0.0, 0x1.a5bc00b7931f9p-580,
     0x1.4b3eb31157743p-583, 0x1.9a60695b929c9p-477, 0x1.6f351b36c2ecep-939,
     0x1.94d0a3673d9b8p-558, 0x1.f7457225b4212p-526, 0.0, 0.0, 0.0, 0.0,
     0x1.cb621f45d8782p-122, 0.0, 0.0, 0x1.396042b132f3ap-863, 0.0,
     0x1.4827dd8e966e1p-450, 0x1.1a5d36af8f6dcp-595, 0.0, 0.0, 0.0,
     0x1.dc7bd9fd4bf1fp-660, 0x1.53110fbaeace8p-448, 0x1.a298354ef9c85p-229,
     0x1.c1b74958c5b71p-469, 0.0, 0x1.6cc090e75de7bp-852, 0.0, 0.0, 0.0,
     0x1.dbd4c8f728b4ap-563, 0.0, 0.0, 0.0, 0x1.24db48a2997afp-325,
     0x1.1c0ed2925665p-407, 0x1.baf970dcbe1ep-1013, 0x1.8ac3caa4b5e79p-839,
     0x1.fffb1c611e8bep-783, 0x1.6a3bd2b5c206ep-159, 0.0, 0.0, 0x1.3018bdb70997ep-540,
     0x1.1e2ebe9e230f6p-357, 0x1.3359bc0bd0f9fp-444, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.164eb084de1cdp-131, 0.0, 0.0, 0.0, 0x1.38464e0c3995fp-667, 0.0, 0.0,
     0x1.50183cce4fdbap-1017, 0.0, 0x1.d6c2ead2c0388p-293, 0.0, 0.0, 0.0, 0.0,
     0x1.1212e0158f49cp-171, 0x1.85efd3662b39p-745, 0x1.d32d528ea26e4p-110, 0.0, 0.0,
     0x1.8441409af53ecp-1012, 0x1.182ef10ea5fe1p-990, 0x1.bf81b7f88f06bp-964,
     0x1.bc41737023664p-126, 0x1.4a67aec26425p-954, 0.0, 0.0, 0.0,
     0x1.21da9893f552ep-775, 0.0, 0.0, 0x1.27b5ee0961c18p-388, 0x1.74acb3f7bbb8fp-664,
     0.0, 0.0, 0x1.1913d48a99244p-300, 0x1.a882c95a58f3bp-178, 0x1.0129dff5a0134p-801,
     0.0, 0.0, 0x1.2052621189ae2p-899, 0x1.00d2fea323af7p-140, 0x1.c6d57079a3d58p-826,
     0x1.b1ec2b463f179p-801, 0x1.cfd8c5239a06p-601, 0.0, 0.0, 0x1.a2d9c2c00c2ap-384,
     0.0, 0x1.3e7ab5f8439efp-776, 0.0, 0x1.67be5b311acfdp-698, 0.0,
     0x1.9f4bed35e27fep-304, 0.0, 0.0, 0x1.62840ba33f30cp-332, 0.0, 0.0, 0.0,
     0x1.545221e59e719p-593, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab78fdf572a16p-334,
     0x1.ff157286ff707p-999, 0.0, 0.0, 0.0, 0x1.86fc13192b3f3p-243, 0.0, 0.0, 0.0,
     0x1.7cae0139cd266p-561, 0x1.d42f2b697c41p-362, 0x1.9c43197ca11f9p-820,
     0x1.c4b3f8cd8c58cp-540, 0.0, 0x1.fb851d683b1e3p-916, 0x1.982af3514c8b6p-461, 0.0,
     0x1.580f9604df6d7p-689, 0.0, 0x1.17b414c58f4a7p-1000, 0.0,
     0x1.18eb5022beee3p-448, 0x1.91b220a39e4b8p-660, 0x1.9684030ddbde6p-492, 0.0,
     0x1.d4996df953efp-280, 0x1.372601ed3410fp-275, 0x1.8d8e2dcdcb8bfp-571, 0.0, 0.0,
     0x1.defa75593bb26p-900, 0.0, 0x1.7294a95ef00c7p-906, 0.0, 0x1.4e91d6273c4ffp-463,
     0.0, 0.0, 0.0, 0x1.9688d4a67343ep-315, 0x1.891359be5b09p-110, 0.0, 0.0,
     0x1.0345dd3ce2469p-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.813b0fbc1821bp-779, 0.0,
     0.0, 0.0, 0.0, 0x1.a73c5f817f92p-504, 0x1.eb95726b1e5a7p-305, 0.0,
     0x1.74027d6401933p-793, 0.0, 0.0, 0x1.7a687f25b00d5p-313, 0x1.99f4dd5f4d1eap-699,
     0x1.b9c223ea29a2dp-226, 0x1.35b3c78afe73p-927, 0.0, 0x1.f71eb7c571c49p-825, 0.0,
     0x1.d27ba0fe027b6p-404, 0.0, 0x1.b7f95f6f4cd96p-276, 0x1.4a7626e11d5fp-210, 0.0,
     0x1.121d041c4847fp-266, 0x1.46b71e74e412ep-833, 0.0, 0x1.9a3d5b8af18ecp-275, 0.0,
     0x1.6421331f0e7f3p-762, 0x1.e7d3c8520af7ap-311, 0.0, 0x1.3573e959d8b96p-436,
     0x1.bf609eebcbfbp-658, 0.0, 0x1.2b64facf09011p-945, 0x1.6b1a38b236e4cp-457,
     0x1.7a8d57a3e6fcp-796, 0.0, 0.0, 0.0, 0x1.53f5624fcc651p-403, 0.0, 0.0, 0.0,
     0x1.0517f90a1b881p-788, 0x1.60604f7d2871p-760, 0x1.a3e06e30db24p-192, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8fa90c4d056f6p-53, 0x1.7dc3fa969ab74p-895,
     0x1.68387f0866e23p-290, 0.0, 0.0, 0x1.a7c90f5dd6f55p-1011, 0.0,
     0x1.9b615b2593685p-133, 0.0, 0x1.713d7092781afp-1004, 0x1.2e54714142e4dp-781,
     0x1.947d71902a9d6p-937, 0x1.04190d4c3483fp-693, 0x1.e299ca90e711fp-456, 0.0,
     0x1.98eafd10a8fbp-589, 0x1.35466c580e42cp-763, 0.0, 0.0, 0x1.2094939b6905ep-962,
     0.0, 0.0, 0x1.620867e6ad461p-130, 0.0, 0.0, 0x1.34630a9e29ea3p-688,
     0x1.70177c6923269p-264, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3d43470947f71p-146, 0.0,
     0.0, 0x1.20645dc8a7356p-355, 0x1.c28423945b2cp-69, 0.0, 0.0,
     0x1.708ae39fd350cp-348, 0.0, 0x1.ea06212b5f8bp-1013, 0x1.612bbe63c19bp-1012,
     0x1.714e09279daafp-951, 0.0, 0.0, 0x1.f03aae4bdfbb6p-772, 0x1.42fac2755ee5dp-280,
     0x1.fdcaa42b0545bp-480, 0.0, 0.0, 0.0, 0x1.2be186b354b71p-331, 0.0,
     0x1.f786fc50b2b17p-167, 0.0, 0x1.d0e5ee9e4cc02p-719, 0x1.2129b1d25b19fp-484,
     0x1.99e6698989c18p-470, 0x1.7c069d99a5fbbp-96, 0x1.90b75497a5b2ap-620, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47c43c3111ep-487, 0.0, 0x1.f9d9ea492caa6p-862,
     0x1.52c741a16199ep-639, 0x1.6db3316f241d4p-341, 0x1.3602c7e187597p-973, 0.0,
     0x1.5bb2bb3d757cfp-632, 0x1.9966d9d85c154p-905, 0.0, 0x1.87fc8420b488dp-727,
     0x1.a89e63788af9dp-989, 0.0, 0x1.1adf12454d83p-1014, 0.0, 0x1.5d267fe2e3db1p-619,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.618eda3b13316p-813, 0.0, 0x1.48e6b5b3f4d81p-65, 0.0,
     0x1.aed6137ea6c98p-681, 0x1.b9519258b0f02p-877, 0.0, 0x1.0dabf5a9fe3d6p-868, 0.0,
     0x1.cb16b1c4de92p-346, 0.0, 0x1.daab80a77665fp-87, 0.0, 0x1.1122135efde54p-308,
     0.0, 0.0, 0.0, 0.0, 0x1.a7d5e9befd70dp-124, 0.0, 0.0, 0x1.82ae786f4aac4p-290,
     0.0, 0x1.94c1e1e796598p-1018, 0.0, 0.0, 0x1.d607e95fa2168p-407, 0.0,
     0x1.9c3f3e6a4d027p-114, 0x1.0f100de4dff9ap-1005, 0x1.a72a561fae9b7p-390, 0.0,
     0x1.e9def8695ed83p-1019, 0x1.0d61ad23860c8p-967, 0x1.2fa8bb228c4c8p-572, 0.0,
     0x1.56991ca9875acp-707, 0x1.5f774fb3b7b82p-899, 0x1.33f9c6ac5479dp-881, 0.0, 0.0,
     0x1.d61db75eba868p-809, 0.0, 0.0, 0x1.19095f8e44068p-1018, 0.0,
     0x1.ea131ca6622b9p-915, 0.0, 0x1.068f5509114fap-39, 0x1.7b32d4e7637e1p-150,
     0x1.aa57aabf0d992p-480, 0x1.cd50670c16aabp-836, 0.0, 0.0, 0.0, 0.0,
     0x1.937b4f2bc1372p-169, 0x1.009ba17f0b8e7p-874, 0.0, 0.0, 0x1.391a665ffa5c2p-800,
     0.0, 0.0, 0x1.dc877e10b28cdp-804, 0.0, 0.0, 0.0, 0x1.ea9c9792c93d7p-499, 0.0,
     0x1.295078845b0bbp-488, 0.0, 0.0, 0x1.e6ad0352ba884p-56, 0x1.fc172a39f5984p-245,
     0x1.baeb17b47eab9p-937, 0.0, 0x1.8689676cf7365p-840, 0.0, 0.0, 0.0, 0.0,
     0x1.25a6f32d3a5fbp-436, 0x1.3dea562802865p-244, 0.0, 0x1.954cb8693b46fp-139, 0.0,
     0x1.f15eb8a2d3a19p-414, 0.0, 0.0, 0x1.a936e238b2f2ep-987, 0.0,
     0x1.6c23aa79ab704p-373, 0.0, 0.0, 0x1.3e19fc99aad91p-131, 0.0,
     0x1.53c7652cd12bfp-66, 0x1.e4ce7f0f29e53p-799, 0x1.49344f3c4de2p-375,
     0x1.6d6801763e2d8p-268, 0x1.cdf22ec3a0042p-267, 0x1.476788d46fcc4p-766,
     0x1.074fc0f6ed28dp-706, 0.0, 0.0, 0.0, 0.0, 0x1.9e03d9f4a8635p-129,
     0x1.70b2c40d0db9bp-177, 0x1.7203bf9a902a9p-57, 0x1.1c7033e5cadeap-458,
     0x1.d190568a373dp-489, 0x1.65e1321a3b578p-618, 0.0, 0x1.94b92eed734fbp-944,
     0x1.db4a36b06f177p-391, 0x1.5119c582e7133p-657, 0.0, 0x1.0661d9b3cbf7p-990, 0.0,
     0.0, 0x1.c361a8afb1a24p-210, 0.0, 0.0, 0.0, 0x1.8edd97421716dp-954, 0.0, 0.0,
     0.0, 0x1.17c6f229f568dp-932, 0.0, 0.0, 0x1.813ac1102c1cdp-868,
     0x1.8fe7cee8bb794p-217, 0.0, 0.0, 0.0, 0x1.51d5f1db34e5fp-321,
     0x1.08089dbfad92cp-645, 0x1.bb8ccfdaf5695p-336, 0x1.5200a52843e32p-204,
     0x1.def3b250dc66dp-295, 0x1.2a50ade75321ep-686, 0x1.1a8ff7af2068bp-923, 0.0,
     0x1.586618599df5ap-37, 0.0, 0.0, 0x1.9807ca66edf4p-273, 0.0,
     0x1.75802bec197ecp-978, 0x1.8bf2dc33dd2acp-769, 0.0, 0.0, 0x1.2094b205d17c7p-502,
     0x1.bca1da1fe30efp-847, 0x1.fac1c9667db42p-131, 0x1.2f6c4828aa56ep-384,
     0x1.48d95a28ea33p-590, 0x1.9c9623173fecp-647, 0.0, 0x1.a7338fb3ac597p-159, 0.0,
     0x1.28ce7453733abp-264, 0x1.8128506b05361p-247, 0x1.6fb193cc8f664p-514, 0.0, 0.0,
     0x1.faf13fa0c2985p-990, 0x1.eb38584f00709p-451, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e655fb81d3166p-61, 0.0, 0x1.042e1fe127f13p-352,
     0x1.f8b745067d238p-497, 0.0, 0x1.eb60b7e77f6dcp-61, 0x1.147c47ecc7dd6p-904,
     0x1.24566918dafb6p-31, 0x1.80cde6edf6074p-470, 0x1.217fd8b4d58dap-101,
     0x1.b8359cb1cd293p-559, 0x1.b061c373b9fp-145, 0.0, 0.0, 0x1.4fec1b8a190fcp-720,
     0x1.ac8828c10af4p-8, 0.0, 0.0, 0.0, 0x1.efe7783ea5f66p-252,
     0x1.b95922ccae232p-99, 0x1.8ad344a88bb0ep-281, 0x1.17e12a191fd2fp-890, 0.0, 0.0,
     0.0, 0.0, 0x1.9f019a929b86ep-717, 0x1.300ef3031e6e3p-855, 0x1.a941a429aeb7ep-83,
     0.0, 0.0, 0.0, 0.0, 0x1.870151ddd1677p-377, 0.0, 0.0, 0x1.b7a1f6918ce54p-543,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b7b5707265bdp-720, 0.0, 0.0,
     0x1.4afb00ee66a52p-554, 0x1.87ce9cbbc912ap-206, 0x1.a63649e4c6b76p-672, 0.0,
     0x1.d18b41420bca9p-473, 0x1.c2ce63fc00807p-777, 0x1.1c917736146d1p-687,
     0x1.093d9ea41f858p-494, 0x1.ce493b5270de1p-564, 0x1.3dad58bc98821p-465,
     0x1.a4be9bd6fcd93p-48, 0.0, 0x1.6e229a4a3cc0cp-196, 0.0, 0x1.e9eadc242bc95p-595,
     0x1.d79490340c264p-53, 0.0, 0x1.715775c040f8ap-247, 0x1.0f12a6ad34baep-932,
     0x1.c9c39019f169ap-609, 0x1.890144b83cf12p-211, 0x1.53ac2abf67dc7p-779, 0.0, 0.0,
     0.0, 0x1.3e50e75c55d38p-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8fe6a6c99bbdcp-838, 0.0,
     0.0, 0.0, 0.0, 0x1.067349d3f1bb6p-855, 0x1.3de076a7dd73ep-24, 0.0, 0.0,
     0x1.3460828e5cd4fp-904, 0x1.eaec8595bbcffp-411, 0x1.e685146c8e061p-312, 0.0,
     0x1.f8162ffc4fa44p-742, 0x1.245cac83305d7p-645, 0x1.31e2a87a12cafp-256, 0.0, 0.0,
     0.0, 0x1.92c41cab32ca2p-883, 0.0, 0x1.b8a7d5cc02244p-987, 0x1.a9ec84d789dd7p-360,
     0.0, 0x1.aa6bd3f6d3a0ep-481, 0.0, 0x1.2f7f5a91b76e1p-671, 0x1.2dd6f8001352cp-351,
     0.0, 0x1.a1ef86a86c5bdp-587, 0x1.39689d8a1b27ep-27, 0.0, 0x1.fbda668bd0c1p-336,
     0x1.68f3766ba7127p-911, 0.0, 0.0, 0x1.c3bd961c9dcecp-316, 0x1.5c2a9bd7a44eep-987,
     0x1.2ea11b3f7b11p-687, 0.0
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
            tmp1 = Sleef_finz_rintd1_purecfma(tmp0);
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
    printf("Sleef_finz_rintd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_rintd1_purecfma bench acc %la\n", global_bench_acc);
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
