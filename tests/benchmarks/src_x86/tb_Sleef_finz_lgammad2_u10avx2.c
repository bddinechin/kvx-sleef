/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammad2_u10avx2128.c --function \
 *     Sleef_finz_lgammad2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.61cc2ad5b807dp-525, 0x1.f05e1c520e998p-855, 0.0, 0x1.a9749d622e436p-529,
     0.0, 0.0, 0.0, 0.0, 0x1.09b9cd59a0123p-736, 0x1.5a0b4048ffc0cp-713,
     0x1.299557fda0a62p-592, 0.0, 0.0, 0x1.11eaff19ffa4fp-322, 0x1.244574960ebf4p-499,
     0x1.b92d62cbfdcb1p-238, 0x1.df6ca10ada673p-142, 0x1.688b88aa12664p-322, 0.0, 0.0,
     0x1.f703f74cc03a2p-399, 0x1.c08ad4ddcc38ep-329, 0.0, 0.0,
     0x1.573ade915c02bp-1006, 0x1.ef71d54467a0fp-779, 0x1.43dec7b17c02ap-95,
     0x1.ffc4876afbb52p-768, 0.0, 0x1.f4b75a81e4586p-422, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5e82fa475ea43p-766, 0.0, 0.0, 0.0, 0.0, 0x1.298fa2c5ecd1p-59, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6f4e6f11bee7ap-704, 0x1.662458a752392p-1014,
     0x1.78759721e79a8p-426, 0.0, 0x1.598bdea895fbfp-509, 0.0, 0x1.ca51f5e16228bp-298,
     0.0, 0x1.813d6f26c6a0ep-133, 0x1.b7a50db08d0ep-238, 0.0, 0.0, 0.0,
     0x1.e8178f2d7aa5cp-475, 0.0, 0.0, 0x1.6223948cfbba9p-117, 0.0, 0.0, 0.0,
     0x1.e3aca3da24a3p-833, 0x1.1bdbba48f493p-96, 0.0, 0.0, 0.0,
     0x1.ed0bfa572b1aap-340, 0.0, 0x1.5a422dae5ec7dp-432, 0.0, 0x1.a36134407df8dp-203,
     0x1.267d0a8a781bep-590, 0x1.41c95d22475d9p-780, 0.0, 0.0, 0x1.0c4e1b4a693p-5,
     0x1.bf286be2bab92p-464, 0x1.16cb2c80bbd1ap-720, 0.0, 0x1.78a4cd8c19795p-300,
     0x1.4dce61419ef58p-877, 0x1.0366936af3458p-338, 0.0, 0.0, 0x1.8b3e683a91a52p-956,
     0.0, 0.0, 0.0, 0x1.2c313fc4184c1p-652, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.41df9518e9c0ep-103, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c050c4e44cc4ep-1008, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.063d651511a18p-437, 0x1.f167dd4ec7c5dp-144,
     0x1.ff6f01b96fc1fp-482, 0x1.6b3008d42bd85p-627, 0x1.3201b9425bf68p-231, 0.0,
     0x1.f4be24432cc2dp-549, 0x1.e29708519df3ep-840, 0.0, 0.0, 0x1.96dc0576ab66cp-234,
     0.0, 0x1.5e4461e4f846ep-192, 0x1.46411e025b945p-25, 0x1.595c65e7ccdbbp-205,
     0x1.57b068e83d2d4p-330, 0x1.c28970d17707ap-612, 0x1.9e08f3daea2c6p-752, 0.0,
     0x1.ccd6776605c06p-280, 0.0, 0.0, 0x1.ff1b0fbf854dep-1017, 0.0,
     0x1.21e54b6cf6c74p-339, 0.0, 0.0, 0x1.d7c3ecf2efda4p-630, 0.0, 0.0, 0.0, 0.0,
     0x1.17b44eb8d92a7p-652, 0.0, 0x1.c16c5de586dc4p-59, 0x1.5bc503070b8d1p-722, 0.0,
     0.0, 0x1.b8cc56cbb5756p-187, 0x1.499673dad1efcp-589, 0x1.935012eb746b3p-489, 0.0,
     0x1.7a25205f8eec9p-202, 0.0, 0x1.ebfdb74b73c35p-107, 0.0, 0x1.802b5032808e9p-537,
     0.0, 0x1.73262878ba835p-629, 0.0, 0x1.41161221c6becp-313, 0.0,
     0x1.b9367072212d6p-453, 0x1.91605200813b4p-1010, 0x1.fd0d52f557dedp-70, 0.0,
     0x1.ac465111d191ap-434, 0x1.c290c71f656f3p-484, 0x1.8616f8b41528ep-85, 0.0,
     0x1.4167cd0922195p-651, 0.0, 0x1.7efcd078e627ep-161, 0x1.bb133f9638e8ap-819, 0.0,
     0x1.718dde2b07182p-605, 0.0, 0x1.bb3880ec7c652p-250, 0x1.6917002ba156bp-709,
     0x1.12877adbd09cfp-341, 0.0, 0x1.8d80de29744e5p-82, 0.0, 0.0, 0.0, 0.0,
     0x1.325e78db24773p-600, 0x1.d02739dcdc4b3p-887, 0x1.c91613c352529p-259, 0.0, 0.0,
     0x1.127d3605be8e7p-706, 0.0, 0x1.fa4276e4bd05cp-26, 0.0, 0.0, 0.0, 0.0,
     0x1.468c9e5a01fadp-488, 0x1.acbccbb039b9p-880, 0x1.ff93b45e4bfa2p-301, 0.0,
     0x1.e73229a63191p-983, 0.0, 0x1.606d32e3f35d4p-864, 0x1.ca393b8e376c5p-990, 0.0,
     0.0, 0.0, 0x1.b251f1eba18edp-330, 0x1.7c260f6cd7341p-322, 0.0,
     0x1.6e7b7f177fc21p-115, 0.0, 0.0, 0x1.1ddd5bac6bfa1p-215, 0.0, 0.0,
     0x1.e1630645838b4p-213, 0x1.65097fbd40921p-189, 0x1.d6cd288a86bb2p-108, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6093c96a32721p-590, 0.0,
     0x1.a3d1c022c67ebp-237, 0.0, 0.0, 0x1.00edbfeb478eep-633, 0x1.9fd48d595f718p-29,
     0.0, 0.0, 0.0, 0x1.ef816afb807e1p-653, 0x1.e0633d18cb0c6p-694,
     0x1.2038f01005d5ep-546, 0.0, 0.0, 0x1.cad8c82ecf4e6p-406, 0x1.92423f1dcf90ap-86,
     0.0, 0.0, 0x1.ec56a3bca6f8ep-23, 0x1.53ae7cfde1071p-530, 0.0, 0.0,
     0x1.451e7fd6599d4p-296, 0.0, 0x1.749a49aaed6d9p-712, 0x1.bf10887c4d0bcp-905,
     0x1.3eeaa60346448p-671, 0.0, 0x1.c3cf2d1913a87p-178, 0.0, 0.0, 0.0, 0.0,
     0x1.efdab16b305cbp-671, 0.0, 0x1.0f95480bc08e8p-822, 0x1.610d743198336p-486, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f152c3afdb6a5p-416, 0x1.4306ee3dfac9fp-840,
     0x1.8f47c8fd5ef51p-932, 0.0, 0.0, 0x1.5a9e704032f84p-36, 0x1.8a5da6e172df8p-992,
     0.0, 0x1.62a4c5b3de4ffp-673, 0.0, 0x1.11c6fbdff3261p-67, 0x1.1803ba880af9fp-359,
     0x1.668488c9375eep-692, 0.0, 0x1.d93b519daf018p-532, 0x1.34fa710d9e0cep-9, 0.0,
     0x1.547e81f972c9ap-911, 0.0, 0x1.27654d56f85c2p-523, 0x1.4ec05c7f40ff5p-956, 0.0,
     0.0, 0.0, 0x1.2dbd7b379142fp-331, 0.0, 0.0, 0x1.2e6e8189531b9p-697,
     0x1.dc3442479d944p-508, 0x1.b9d296247c3dap-609, 0.0, 0.0, 0x1.b422a33136fcp-186,
     0x1.f08856243daap-286, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a742d5e56b0d5p-928,
     0x1.f683d3f5e56fdp-168, 0x1.c58a845d83c1cp-903, 0.0, 0x1.84d93493c07b7p-605,
     0x1.e0eaa3a87cb2fp-167, 0.0, 0.0, 0x1.8cb19990927e3p-120, 0x1.e05d4b0a56449p-416,
     0.0, 0x1.5fe5abe77236ap-129, 0.0, 0x1.d789023309376p-296, 0x1.278a2ff94e80ep-329,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19d6e01eb23a1p-491, 0x1.6de86bef5651cp-693,
     0x1.8eea30da4efa5p-453, 0.0, 0.0, 0.0, 0x1.0121e0c4cc489p-205, 0.0, 0.0, 0.0,
     0x1.3bb638785ba57p-209, 0x1.98b79f77f296ap-981, 0x1.9a50c7cb82c5ep-596,
     0x1.bb1cdf55c7781p-163, 0x1.4f8120a468d3fp-90, 0.0, 0.0, 0x1.695ff524a9c89p-812,
     0x1.a712b5ea4ce0fp-218, 0.0, 0x1.bb192d488c20dp-661, 0x1.bf1a94448e6b9p-874, 0.0,
     0x1.19fa8611dd129p-348, 0.0, 0x1.e85253d34b68ep-166, 0x1.467f38ea8a17dp-227,
     0x1.6a942a01300a6p-155, 0.0, 0.0, 0.0, 0x1.3243e3433adeep-302,
     0x1.92687ffdef1b6p-161, 0.0, 0x1.e604b3857a77ap-122, 0.0, 0x1.a255508c71f87p-313,
     0x1.73ccd91f5b30ap-666, 0.0, 0x1.e5ebc16d3b613p-681, 0x1.e2dadd561719dp-188, 0.0,
     0x1.96dea95e8f5p-700, 0x1.f7b629d1bcf24p-660, 0x1.72b1c9727442cp-747, 0.0, 0.0,
     0.0, 0x1.9b87c224c19f2p-445, 0x1.2a35be5d25ebap-583, 0.0, 0x1.bd39b7fdd055ep-773,
     0x1.ddf5373129b3ap-21, 0.0, 0.0, 0x1.2d6aa0af1cb79p-79, 0x1.a4dfae0eb2bbcp-921,
     0.0, 0x1.3948dea3c966cp-415, 0x1.31b07d890569p-130, 0.0, 0x1.50f908d08e351p-257,
     0x1.8b2d2c9745963p-291, 0.0, 0x1.4ae0c27b87a28p-162, 0x1.681eebd37d328p-486,
     0x1.d5f901dc31887p-617, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7668522a1326p-882, 0.0,
     0x1.c0f9f60207a95p-705, 0x1.3cc745f2662bfp-117, 0.0, 0x1.5b7350d03a805p-118, 0.0,
     0x1.7e3e96402bbdep-762, 0x1.ccb569b858a72p-762, 0.0, 0x1.1dec67e009493p-333,
     0x1.bffc3f98fab18p-456, 0.0, 0.0, 0.0, 0x1.efa748f380f49p-382, 0.0,
     0x1.19e77f461868ep-420, 0.0, 0x1.7ddc91e86a677p-286, 0x1.4bbed8a78f51cp-269, 0.0,
     0.0, 0x1.e592c0684766ep-58, 0x1.73dc585894621p-347, 0x1.3ff4f8895f71ep-880,
     0x1.ae20cf70decep-143, 0.0, 0x1.a90b8de19bee9p-599, 0.0, 0.0, 0.0,
     0x1.d904d5a8d6c15p-104, 0.0, 0.0, 0.0, 0.0, 0x1.5e88be9b26176p-646,
     0x1.e85e685116055p-855, 0x1.e6ea88bbda85bp-691, 0x1.a3b479781a5dfp-101,
     0x1.901e8a0f5693ep-854, 0x1.4195d172d5f8p-742, 0x1.02f1c8e424378p-629,
     0x1.c6e1d01801e25p-53, 0x1.6b125c003ed8cp-266, 0.0, 0.0, 0x1.59cf54b6c4c71p-257,
     0.0, 0.0, 0.0, 0x1.88971dac9499ap-622, 0.0, 0x1.1bb9569e74ebcp-969, 0.0,
     0x1.b660afe20723fp-521, 0.0, 0x1.4f6ccb68d9dd2p-473, 0x1.bda9e4371b31fp-914, 0.0,
     0x1.17c88c63fd64ap-621, 0.0, 0x1.39e2192c2d851p-518, 0.0, 0x1.e3d21262cc4f7p-655,
     0x1.224e3fd7bf92bp-955, 0x1.561669691323dp-860, 0x1.210b3c8d92d21p-146, 0.0, 0.0,
     0.0, 0x1.5ae46d132e56fp-123, 0.0, 0.0, 0x1.0b3df4a1a91ccp-939,
     0x1.99654dad65447p-195, 0.0, 0x1.2330eeb790c7fp-250, 0.0,
     0x1.33dc2f6acd8c8p-1002, 0x1.9404300e4594dp-234, 0x1.7c258944cc6eep-921,
     0x1.56e89074c65a1p-469, 0.0, 0.0, 0.0, 0x1.bc0c218c91a28p-906,
     0x1.4b9bd080b14d2p-363, 0x1.63111688bb371p-648, 0x1.215288e68ec0cp-36, 0.0,
     0x1.87da4a2bafa4bp-446, 0x1.06d845f27eb2bp-537, 0.0, 0.0, 0x1.5babb67e091dcp-821,
     0.0, 0.0, 0x1.ad5be9cf9985dp-202, 0.0, 0x1.0a765513ff882p-417,
     0x1.1e21d6dda9781p-602, 0.0, 0x1.9d560eb68fb89p-157, 0x1.36baa2723472bp-813,
     0x1.5e45808c140fap-1010, 0x1.62939a942d87cp-235, 0x1.b03ca70cdb3d5p-597,
     0x1.884868735c04fp-685, 0x1.b13eff6fe3f5ep-8, 0x1.1bbf28bc2069dp-510,
     0x1.5bbadcad8199bp-88, 0.0, 0x1.59a01770f313ap-789, 0x1.f171d72ab942ep-409, 0.0,
     0x1.ddb143e74e273p-248, 0.0, 0x1.b3aa221e67259p-449, 0x1.92802cec6b37cp-944,
     0x1.6c6f6c6a74dafp-800, 0x1.58b524b00f2a9p-549, 0.0, 0.0, 0x1.650b8dab90c0dp-506,
     0x1.6a011bdb98a37p-50, 0x1.5572faa83ff5ep-509, 0.0, 0x1.018236382048ep-212, 0.0,
     0x1.f41d9b337d177p-939, 0.0, 0.0, 0.0, 0x1.eafb4f11bc984p-360, 0.0,
     0x1.0f8f6c3973793p-97, 0x1.1058a8a03e18ep-528, 0x1.8211e74758a6dp-86, 0.0,
     0x1.cd76d7e21f29cp-797, 0.0, 0x1.293c219604cd5p-113, 0x1.54884b070604cp-871, 0.0,
     0x1.4a8bd59b5d693p-444, 0.0, 0x1.ed8012c291ef8p-157, 0.0, 0.0, 0.0, 0.0,
     0x1.2c1d16c368746p-454, 0.0, 0x1.3bc91783d9bc7p-215, 0x1.a01d8bba1a26bp-212,
     0x1.a105864576158p-645, 0x1.f237bbe87c493p-306, 0.0, 0.0, 0x1.ec54440d14b5dp-716,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2c8ecfdea52cp-655,
     0x1.c412e871f5aa2p-57, 0x1.d152b7cdbaa02p-70, 0.0, 0.0, 0x1.cb1e16f94dde1p-540,
     0.0, 0x1.49cacb92698c6p-989, 0x1.2144b8b13f1bap-696, 0x1.2c7689237b3b5p-52,
     0x1.0c7364043e1afp-919, 0.0, 0.0, 0.0, 0x1.e47d5813e5ab5p-72,
     0x1.751e490e08f4ap-999, 0x1.49a097fd9fef2p-360, 0.0, 0.0, 0x1.89befcb13e529p-992,
     0x1.e467ff3843fd5p-774, 0.0, 0x1.39e3a93693ce1p-146, 0x1.131519bdd89f5p-465,
     0x1.4f63a2f30df9bp-100, 0.0, 0x1.566a976f444a5p-68, 0.0, 0.0, 0.0,
     0x1.2041fb17b9d65p-907, 0.0, 0.0, 0x1.c1e29be8ce781p-325, 0.0, 0.0, 0.0, 0.0,
     0x1.336ababb1ac5fp-877, 0.0, 0x1.5aa21a780e163p-1010, 0x1.4612bc04cc8fcp-293,
     0.0, 0x1.5f137cec56ed8p-894, 0x1.3016c2a28e7ecp-561, 0.0, 0x1.2aaccca25a61dp-506,
     0.0, 0.0, 0x1.de909886ab947p-23, 0x1.aa8fcdc7a700fp-582, 0.0, 0.0,
     0x1.ce52033a5ce2ap-604, 0.0, 0.0, 0.0, 0x1.cdff707468ad3p-825, 0.0, 0.0, 0.0,
     0x1.c314d91947319p-413, 0x1.6478612df1e84p-518, 0.0, 0.0, 0.0,
     0x1.9540594ac0527p-1008, 0.0, 0x1.beb291e7f88cbp-642, 0.0, 0x1.3dd216da89f41p-68,
     0x1.33e5636128bdbp-12, 0x1.3d27df5df7375p-466, 0.0, 0.0, 0x1.fdeaeed7e0bdp-895,
     0x1.4da67c4ffe28ap-909, 0x1.556df489c2e89p-742, 0x1.da49d6b6716dp-235,
     0x1.0ccdef3fafe7ep-372, 0.0, 0.0, 0.0, 0.0, 0x1.34c323e84213cp-175, 0.0, 0.0,
     0x1.dd0af2d486297p-782, 0x1.41fb01f0790e5p-866, 0x1.2d12a4f9a965cp-36,
     0x1.9ae9452e16ba2p-166, 0x1.30ea90651386ep-520, 0x1.dd40995cf5331p-965,
     0x1.116bbe2d84f9fp-280, 0x1.066d2fcb17abfp-715, 0x1.c38c55e4419c9p-198,
     0x1.1f1473da1778ep-642, 0.0, 0x1.0a4ff9be45672p-425, 0x1.fed0ce883ed86p-483,
     0x1.12ffb4425b695p-361, 0.0, 0x1.3c6158d710c2p-837, 0.0, 0x1.eb7ee2c1519e2p-130,
     0.0, 0x1.527b0e3b1e63bp-897, 0x1.c2ea3225fc8acp-766, 0x1.e1401d2a8de71p-758, 0.0,
     0.0, 0x1.5352379ee28c7p-508, 0x1.c792592be1e33p-315, 0.0, 0.0, 0.0,
     0x1.2ee37ef831759p-453, 0.0, 0.0, 0x1.aa6f74e055cc4p-66, 0.0, 0.0, 0.0, 0.0,
     0x1.9c802b9be0bf8p-58, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd354f00cc525p-10,
     0x1.98af0852cb5cp-783, 0x1.cfbd3c1bdef0fp-120, 0x1.78c10759c1d4cp-5,
     0x1.3ec319951fa14p-107, 0x1.2ecc8582d6854p-659, 0.0, 0.0, 0x1.df6ec4765c426p-901,
     0x1.c1d0bfe0a44e4p-548, 0.0, 0x1.16c13008097f2p-991, 0.0, 0x1.c81b25f10b6cap-675,
     0.0, 0x1.459515181ee6p-501, 0.0, 0.0, 0x1.3df9ed4faea2dp-129, 0.0, 0.0,
     0x1.7889b62313cb2p-359, 0x1.f22a37995e4b3p-893, 0.0, 0x1.ecfd2284ee834p-442,
     0x1.1dfafca81548p-449, 0x1.ac02b7a3a35b4p-908, 0.0, 0x1.7a0ae6215587p-390,
     0x1.d0c94e44334dcp-1006, 0x1.d776946268751p-898, 0.0, 0x1.0d101105536dbp-407,
     0.0, 0.0, 0.0, 0x1.096d81b936c0ap-450, 0.0, 0.0, 0x1.f29f104faaf93p-976,
     0x1.6e2a17f1a7136p-577, 0x1.5ee9398432fe2p-486, 0x1.aadcfeae3d149p-974,
     0x1.bd3e30741f976p-590, 0.0, 0.0, 0x1.a96ffc8bfedd6p-345,
     0x1.8e834c0252c8ep-1014, 0.0, 0x1.f3bf0354d1f3bp-49, 0x1.43738a901d18ap-10, 0.0,
     0.0, 0x1.113bf155e18a2p-1005, 0x1.626d9123f84e6p-623, 0x1.5611832a9813dp-5,
     0x1.ccf5b495874c1p-459, 0x1.15c770a56b9cbp-660, 0x1.2405cf763d045p-394,
     0x1.55d1caf71f993p-484, 0.0, 0x1.68469ea4d3948p-967, 0x1.32f5f4ce16ef3p-33, 0.0,
     0x1.d114159ecb838p-780, 0x1.64df81770f901p-972, 0x1.aa7c0103a3e2ep-359,
     0x1.1b28a9b577f47p-409, 0.0, 0x1.ca21468133201p-974, 0x1.c0e8324781b1ep-308,
     0x1.893d2358ae27p-898, 0.0, 0.0, 0.0, 0.0, 0x1.25e187faf0421p-623,
     0x1.267488226f84dp-128, 0.0, 0x1.d487331c02604p-480, 0.0, 0.0,
     0x1.54a20a4e6a258p-542, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4738ef5fa81dbp-998, 0x1.8de562865edacp-91, 0.0, 0x1.69a3c367fbc73p-741,
     0x1.2ab3a493ea6afp-214, 0x1.427e4bdd1adbp-299, 0.0, 0.0, 0x1.efe6e8ee3f48fp-372,
     0x1.53740e5ef23d6p-298, 0.0, 0x1.98fac1e8779d3p-987, 0x1.c6311d6cf6abep-1002,
     0x1.071e94ab20aa4p-24, 0.0, 0x1.76f86879ca64dp-140, 0.0, 0x1.c866fc609b75ap-645,
     0x1.57b4e76b36914p-384, 0x1.3588e62c6bf49p-805, 0.0, 0x1.33f6909969ad2p-350, 0.0,
     0x1.71113abe7c724p-6, 0x1.d0546c049d641p-110, 0x1.d94b0e19b18b6p-1022, 0.0,
     0x1.6b904d7f9835p-660, 0.0, 0.0, 0.0, 0.0, 0x1.8d0cd188d5824p-494, 0.0, 0.0,
     0x1.1db5b7530e16p-760, 0x1.4743eb6a47bbp-636, 0x1.edc017daa0795p-273,
     0x1.b743b1cf56bc7p-847, 0.0, 0.0, 0x1.ba285958f7ebp-411, 0x1.fc06728677839p-703,
     0.0, 0x1.4cff379524a77p-83, 0.0, 0.0, 0x1.defbbdae8e648p-749, 0.0, 0.0, 0.0,
     0x1.b8a38bff6440bp-844, 0.0, 0.0, 0.0, 0.0, 0x1.68a5dcd8e15c2p-648, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.01ef1b33c5b8bp-809, 0.0, 0.0, 0x1.550804e44d791p-541, 0.0,
     0x1.05a8b7ad5077cp-605, 0x1.7bdb7e2023e6p-384, 0x1.fe0ab7d39f3bdp-169, 0.0, 0.0,
     0x1.c5814ac41dd6dp-381, 0x1.8fe46ec283bd4p-976, 0.0, 0.0, 0x1.9f39fbd84fa85p-150,
     0x1.50eed1e558d9ep-997, 0.0, 0x1.c4d17e8253ecap-156, 0x1.a2033a6b4a32cp-708, 0.0,
     0x1.dee805c91397bp-69, 0x1.cf04f93c376d2p-595, 0.0, 0x1.bb12179bbd808p-907, 0.0,
     0x1.58f2d2ff8c39cp-621, 0x1.848de58de618cp-5, 0.0, 0.0, 0.0,
     0x1.a1e333085bf3bp-947, 0x1.04a6eaa4f9e4bp-78, 0.0, 0x1.0a616f116824ep-382,
     0x1.c36f5226b0a9bp-524, 0x1.81161f44c45adp-37, 0x1.3799e0a3cce4p-228,
     0x1.f85d86b4d08afp-578, 0x1.edd20b000524bp-955, 0x1.c07cc0209a5e9p-320,
     0x1.3047c8a42cd3fp-611, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.23c00d5414a8dp-809,
     0.0, 0x1.0c7c95370fc03p-389, 0x1.33c543cdacdbfp-714, 0.0, 0x1.851d9ac98ea01p-427,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.601998da1ec94p-819,
     0x1.9317d215e3ce3p-213, 0.0, 0x1.25e2cbdd83ffep-726, 0x1.2d28ee33e9342p-234,
     0x1.daee7945d96d7p-929, 0.0, 0.0, 0x1.4ba9423df8adcp-842, 0x1.dd22471e70f7bp-657,
     0x1.7a7841c39cceep-946, 0.0, 0x1.8b20303320f83p-187, 0.0, 0.0, 0.0, 0.0,
     0x1.b485d1df8c019p-79, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e8e882e1506dp-168, 0.0, 0x1.9642ba311c677p-46, 0x1.efc577c875463p-653, 0.0,
     0.0, 0.0, 0x1.281b2964d2c39p-339, 0x1.e2d81a8d2adc9p-368, 0.0,
     0x1.af2ab72aee7a6p-315, 0x1.c94ca0e36db73p-77, 0.0, 0x1.b38e0145e6249p-529,
     0x1.b613673cfd045p-495, 0x1.f37d0db5fcc0ap-748, 0.0, 0x1.297dc302f49dp-326,
     0x1.8d1623a2d728cp-812, 0.0, 0.0, 0.0, 0x1.5323a9c9c4a06p-212,
     0x1.a5cf709a7e8bep-670, 0x1.0fc0d5817a06cp-243, 0x1.2d31dc0e8a793p-572,
     0x1.46ec6a1726c96p-307, 0.0, 0x1.c5de0644802f3p-111, 0x1.deacfc5ac765fp-641, 0.0,
     0.0, 0x1.99e20c474abf5p-922, 0.0, 0x1.31936d61e986bp-1005, 0.0, 0.0,
     0x1.69aa0fca1de31p-314, 0x1.896704415fa48p-465, 0x1.b239ffa62cce2p-730, 0.0, 0.0,
     0.0, 0x1.647378f66e38ep-574, 0.0, 0.0, 0.0, 0x1.2b8e9c409ec6ap-278,
     0x1.d117844f821d4p-973, 0.0, 0.0, 0.0, 0x1.d94d6f62403acp-314, 0.0,
     0x1.f2fdf79345f1cp-968, 0.0, 0.0
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
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp1 = Sleef_finz_lgammad2_u10avx2128(tmp0);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_lgammad2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_lgammad2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
