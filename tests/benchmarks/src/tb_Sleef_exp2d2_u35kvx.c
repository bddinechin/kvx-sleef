/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d2_u35kvx.c --function Sleef_exp2d2_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.8168e70ab5b3bp-714, 0x1.a465812907c2ep-796, 0x1.5503d91a84d63p-833,
     0.0, 0x1.e13953a068eecp-109, 0.0, 0x1.1dd195f221acep-107, 0.0,
     0x1.fee726476b881p-397, 0.0, 0x1.1dfe224872372p-1005, 0x1.2b774625e4524p-726,
     0.0, 0.0, 0x1.293499dd125f7p-324, 0x1.942d9a7066f17p-740, 0.0, 0.0,
     0x1.6a39a6793ba2ep-349, 0.0, 0.0, 0.0, 0x1.5b7906ac61075p-326, 0.0,
     0x1.ae89b66b5643fp-648, 0x1.e79f46e23f71ep-799, 0x1.2fa1c9e8d2f16p-992, 0.0,
     0x1.c87bbe8df819cp-780, 0.0, 0x1.ea8e61581ac13p-621, 0.0, 0.0, 0.0,
     0x1.3760cbcf5060dp-922, 0.0, 0x1.75cb093983431p-261, 0x1.2d02459a32cc6p-473, 0.0,
     0x1.234c502e5b877p-427, 0x1.c125fd792d171p-466, 0x1.44b3a238450eep-832,
     0x1.0667d942ebbf8p-74, 0x1.06a1025dbce9bp-170, 0.0, 0.0, 0x1.a8d7f276db73bp-53,
     0x1.a6f39febb5f53p-541, 0x1.7fe7aaefe4784p-190, 0x1.d978a7747275p-650, 0.0,
     0x1.9327b1951576dp-384, 0.0, 0x1.e52a016f658f4p-74, 0x1.166b10c61d6d5p-578, 0.0,
     0x1.54ce34aedcd01p-237, 0x1.506a0907c7a26p-642, 0.0, 0x1.ef8ef5733f3d9p-906,
     0x1.3bf109c146e24p-887, 0x1.7bbbc3e1feb21p-635, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94c1113e6c414p-667, 0.0, 0.0, 0.0, 0.0, 0x1.b9e4ee5256f7bp-392,
     0x1.38633af48a039p-916, 0.0, 0.0, 0.0, 0x1.c6489e56a795cp-535,
     0x1.86a080cb3fac3p-98, 0x1.9f54f6417d7d7p-844, 0.0, 0x1.b9e06286e74fep-137,
     0x1.8fa289650fc43p-475, 0x1.d4362f162d0bp-59, 0.0, 0.0, 0.0,
     0x1.616e21ad31c01p-429, 0.0, 0.0, 0.0, 0x1.b72afa3c262a7p-47, 0.0, 0.0,
     0x1.8f0f59baa47bfp-333, 0.0, 0.0, 0x1.26cb2626bcb2bp-524, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.868e7a0cdc03fp-414, 0x1.d6342bf072db9p-401, 0.0, 0.0, 0.0, 0.0,
     0x1.10e8dad3f71e9p-279, 0.0, 0.0, 0x1.0cd5a5d58215ap-773, 0x1.80b4c76b37faap-984,
     0.0, 0.0, 0.0, 0x1.e28572a73abd5p-382, 0.0, 0x1.5a8656f06844ap-432,
     0x1.87b660f9b2be8p-472, 0x1.5cf5b23016c52p-33, 0x1.598ddd34f7d1cp-858, 0.0,
     0x1.b482fff4040cbp-368, 0.0, 0.0, 0x1.02e057585e605p-476, 0x1.6ea5d5498f819p-697,
     0.0, 0x1.cd55d632ec0ecp-538, 0.0, 0x1.bb62531972205p-26, 0x1.d964c435f82a9p-867,
     0.0, 0.0, 0x1.7de62a46f606bp-279, 0.0, 0x1.684b5ff4dea0ep-315,
     0x1.4c1573445d939p-14, 0x1.bb955740e804bp-511, 0x1.02c8bf71a91bdp-700,
     0x1.4583c1f565b06p-730, 0x1.0d6dddb08e9a1p-729, 0.0, 0.0, 0.0,
     0x1.8b1d25964a19p-224, 0.0, 0x1.cf85d220f2a32p-217, 0x1.4d24820783866p-1015,
     0x1.f4d0270c668aep-562, 0x1.45c3c3812b2c4p-8, 0.0, 0x1.212716c4b58adp-581, 0.0,
     0.0, 0x1.b63a29f8f496ap-122, 0x1.50c1f64401065p-588, 0x1.214e8f2129bb4p-670, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44c6cd8c96438p-480, 0.0, 0x1.334df5f1dfa1bp-313,
     0x1.a5f2c448033d5p-638, 0x1.7545bbcdb70d6p-405, 0x1.539427137e408p-381, 0.0,
     0x1.50628ad4ed835p-322, 0.0, 0x1.0b6252818c83p-716, 0.0, 0x1.4a7aeeba8bedp-671,
     0x1.81d25166d48ccp-490, 0x1.0b59b994820d9p-305, 0x1.3dad252591a72p-334,
     0x1.33c27badb0457p-1021, 0x1.b139ce673e75fp-679, 0x1.0c4938a037a02p-438,
     0x1.5575862eff535p-214, 0.0, 0x1.a5c290029f41ep-704, 0.0, 0x1.d6ea3032b251dp-76,
     0.0, 0x1.21b39755b443bp-315, 0.0, 0x1.d08215bde0a99p-679, 0x1.1e30dc80d0405p-538,
     0x1.b15af700e4a37p-400, 0.0, 0.0, 0.0, 0.0, 0x1.395d5b9395785p-106, 0.0,
     0x1.f8e9fc9cd81afp-730, 0x1.a27039ec36aa5p-94, 0.0, 0x1.aba513c144c68p-348,
     0x1.2d6c1951aafc1p-612, 0.0, 0.0, 0x1.87da65a4acb62p-887, 0.0, 0.0,
     0x1.926e9bbdbbf81p-882, 0x1.3048c21e88e5cp-598, 0x1.3ca491fb139abp-307, 0.0,
     0x1.d7ac6809d06ddp-549, 0.0, 0x1.9a5f89d34b14cp-968, 0x1.fc8bf809fd8dfp-300, 0.0,
     0x1.96383442ffa83p-485, 0.0, 0.0, 0.0, 0x1.96bf8891fd811p-376,
     0x1.006bec0fc9af4p-87, 0x1.19fe9a6b6ed3ep-182, 0x1.fef54cd56ebd3p-696,
     0x1.93ccd94bed7d2p-275, 0.0, 0x1.7049adf318106p-168, 0x1.1ca2f66c82f7ep-552,
     0x1.5181f1b1570ffp-656, 0.0, 0.0, 0.0, 0x1.88bd873877e45p-365, 0.0,
     0x1.d0fedbfc283f7p-978, 0x1.f9a01bcaa2261p-932, 0x1.00e8916933a23p-360,
     0x1.dccef6d772333p-225, 0x1.88e0af7e9b335p-853, 0.0, 0x1.bea2d7acffbf4p-400,
     0x1.d33d5316c9834p-174, 0.0, 0.0, 0.0, 0x1.febdbcdb211cfp-750, 0.0, 0.0, 0.0,
     0x1.9e52c2752860bp-760, 0x1.e89fdad98bb1p-157, 0x1.4dae34fb1fcaep-317,
     0x1.bc0c96b08ff7ep-48, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc7e9b2ca3cd7p-154,
     0x1.0efb065078426p-306, 0.0, 0.0, 0x1.7d8b65acd7cffp-383, 0.0, 0.0,
     0x1.4346870a74d13p-218, 0x1.0ed02a505b143p-369, 0x1.aa0078f1072c9p-650,
     0x1.1f872a9d84c99p-535, 0x1.fe4a622a66a7fp-70, 0x1.a481003c6241fp-749,
     0x1.6daf07ecea22ap-217, 0.0, 0.0, 0.0, 0.0, 0x1.97a93998e0b76p-974,
     0x1.9814d116a8586p-131, 0.0, 0x1.deb21e7e8baafp-126, 0x1.c87e813e6658bp-284, 0.0,
     0x1.a82cf00fe9507p-152, 0x1.179504b8e68e5p-336, 0.0, 0x1.0d3fc0b57984bp-493,
     0x1.9a58d1a43fcaap-69, 0x1.4d273d86eb904p-872, 0x1.96218cc9cd975p-247,
     0x1.3513fa1d2fc0ep-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c082ab51bebp-761, 0.0,
     0x1.59dd5204be6cdp-452, 0.0, 0x1.055e737c66539p-334, 0x1.56f4e299adad3p-914,
     0x1.58554506a9ad3p-257, 0x1.19dc1aef2b86bp-359, 0x1.a3e2315c8f412p-403, 0.0,
     0x1.1067b8306a521p-436, 0x1.860e312f76119p-407, 0x1.f197303718402p-971,
     0x1.a75179becbce8p-277, 0x1.853d8c0d43835p-331, 0x1.7b160ac1b8b28p-1002,
     0x1.d79a9c5d90b92p-426, 0.0, 0.0, 0.0, 0x1.01a8ba5e27745p-7, 0.0, 0.0, 0.0,
     0x1.dbe4234a37754p-763, 0.0, 0x1.b4d6b76d41d17p-606, 0.0, 0x1.cf80dca6bcdbep-238,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85ce9c816299bp-968, 0.0, 0x1.9ae01fe45056p-405, 0.0,
     0x1.29c86b998ce29p-635, 0.0, 0.0, 0.0, 0x1.95e0a1ab1879fp-198, 0.0, 0.0, 0.0,
     0.0, 0x1.c5030fe179c3dp-810, 0x1.48b6cff826146p-238, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0b67490789064p-412, 0.0, 0x1.1e785c76175fcp-580, 0x1.0a61586683774p-800,
     0x1.c78185797574fp-874, 0x1.f69cef3e5ccc6p-195, 0.0, 0.0, 0.0,
     0x1.839aade47e65bp-121, 0.0, 0.0, 0x1.d3a1dfce21debp-1022,
     0x1.cf8852fec8b5dp-855, 0.0, 0.0, 0.0, 0x1.fe554e567264ep-831,
     0x1.03a940864e20bp-504, 0x1.26580b0dc65f4p-888, 0.0, 0.0, 0x1.4654f8531ba71p-268,
     0x1.dd0004bd785ccp-224, 0x1.3b0d87ee17c6ep-799, 0x1.34f1bedca3a0cp-755,
     0x1.19be8cc4c8b56p-975, 0x1.e1d1136a1bea5p-119, 0x1.4fca085402acbp-148, 0.0,
     0x1.55c63ed005ae7p-398, 0.0, 0x1.1e31848144a7p-222, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.541b8cf821952p-278, 0.0, 0x1.a70a1ed8798dap-569,
     0x1.fb8a1a5a9f893p-700, 0.0, 0x1.e3718302b3767p-5, 0.0, 0.0, 0.0, 0.0,
     0x1.aefdce73fa638p-979, 0.0, 0.0, 0x1.e8d42f4d419bcp-576, 0x1.f907907752bp-119,
     0.0, 0.0, 0x1.691076fde36dp-437, 0.0, 0.0, 0x1.645c05c1fd341p-750,
     0x1.7112dddcda4eep-810, 0x1.29a38e127d71p-934, 0.0, 0x1.e681059a667e6p-858,
     0x1.40274518b7f6cp-395, 0.0, 0x1.bcb9f2b464bfdp-649, 0x1.ae259a444b75fp-255, 0.0,
     0.0, 0x1.e5bfc17713399p-670, 0x1.125008d3f6445p-474, 0x1.7409172826171p-447, 0.0,
     0x1.725f8e5bf944cp-321, 0x1.4d996988e0208p-696, 0x1.91dc4c112875fp-208, 0.0, 0.0,
     0x1.064a387b3fd6p-216, 0.0, 0x1.196d2da10f59ep-974, 0x1.eee25e5950d3fp-762, 0.0,
     0.0, 0.0, 0x1.9fceece1c2c4fp-358, 0.0, 0x1.9137a41b41982p-500,
     0x1.cc62f58840b69p-406, 0x1.96674dc8030b5p-781, 0x1.7300afa277371p-795,
     0x1.4fb41dc357da2p-957, 0x1.eb529bee4b487p-192, 0.0, 0.0, 0x1.a8dc44a495295p-389,
     0x1.f2408325183a3p-795, 0x1.8345570cca8f1p-98, 0.0, 0x1.c35636b03bb1ap-805, 0.0,
     0x1.cc520b959d917p-85, 0.0, 0x1.3885a93a80fdp-775, 0.0, 0.0,
     0x1.71578ae29a15dp-179, 0x1.c4300f242a8e9p-743, 0.0, 0.0, 0x1.ba44a281f2a63p-527,
     0x1.224c9754a721ep-75, 0x1.ca2e0914d86b9p-354, 0x1.774e285e57714p-354,
     0x1.d87a45818654p-720, 0.0, 0x1.491103f32156bp-266, 0x1.1fcc1d79bdba9p-201, 0.0,
     0x1.c91684eb1f218p-108, 0.0, 0.0, 0.0, 0.0, 0x1.dcbbfa8e142ep-192, 0.0, 0.0, 0.0,
     0x1.bb16c457a142fp-731, 0x1.1e4550e782bd6p-807, 0.0, 0.0, 0x1.3be4b590b52a1p-33,
     0x1.ac1171121a30bp-171, 0x1.74befa753562ap-70, 0x1.aaa87c81307a5p-257,
     0x1.cd2ba8329c0f4p-94, 0x1.cab2c9389f7d9p-482, 0x1.879e0377aa33ap-739, 0.0, 0.0,
     0x1.2075fd1fcc2dfp-296, 0.0, 0.0, 0x1.7b5358851794bp-117, 0.0,
     0x1.47a108313872dp-62, 0x1.fc2ebcac00575p-478, 0x1.21fbabce0037ep-329, 0.0,
     0x1.e2d1280e61bbcp-279, 0.0, 0x1.633122d5b26ddp-959, 0.0, 0.0, 0.0,
     0x1.c92c6cff9f52ep-811, 0.0, 0x1.c0d201685e599p-682, 0.0, 0x1.649e53e07ce2fp-571,
     0x1.8231f663a2ee5p-854, 0.0, 0x1.5834e38e0c934p-832, 0x1.45c87bc6a3e95p-763, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7aaad0788952ap-346, 0x1.7e9dc156f6185p-652, 0.0,
     0.0, 0x1.50071637a0d48p-899, 0.0, 0.0, 0x1.9d684884028cfp-5, 0.0,
     0x1.05ad9856a540fp-785, 0.0, 0x1.abcb3830b4cb2p-510, 0.0, 0x1.7390d9241a66dp-227,
     0x1.b099b0e4ad1f7p-816, 0x1.a8917632d7b0cp-795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.35e4ac7ccebc4p-68, 0.0, 0.0, 0.0, 0x1.42261103fe1afp-397, 0.0, 0.0,
     0x1.74df4990fc5d7p-402, 0.0, 0.0, 0x1.071e25f2e26e3p-356, 0.0,
     0x1.483e30b94687p-267, 0x1.55a3498773f34p-214, 0.0, 0.0, 0x1.7a0a81514ceacp-869,
     0.0, 0.0, 0x1.ab919d3131b57p-174, 0x1.06ea32e8106cdp-559, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bcb4b3be1f9b5p-609, 0x1.878a80fbd0845p-758, 0.0, 0.0,
     0x1.f0cfe211a9c69p-576, 0x1.99adbb19fee2bp-565, 0.0, 0.0, 0x1.fc3af45795d73p-285,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2fdcb2d7e3f4bp-866, 0x1.31dc6f66b3fdcp-634,
     0.0, 0x1.12d9c2641539dp-73, 0x1.fd20ab9992d35p-517, 0.0, 0x1.b0d00b8c03053p-151,
     0.0, 0x1.fd095af8841f9p-880, 0.0, 0.0, 0x1.f1878cf9881e3p-907,
     0x1.a9c2ab1fc5fcfp-321, 0.0, 0.0, 0x1.9598450e03bcap-499, 0x1.d1e02d3e45144p-541,
     0x1.8bd854d795e17p-679, 0.0, 0.0, 0.0, 0.0, 0x1.2f7bd07d0be01p-322,
     0x1.8648d37061f67p-576, 0.0, 0x1.fe4b392a41eb3p-856, 0.0, 0.0,
     0x1.b6a8d6223c391p-413, 0.0, 0x1.69939bf86af67p-218, 0x1.f7b09661269b3p-879,
     0x1.e874c62580e25p-996, 0.0, 0x1.7fa500df8527ap-38, 0x1.fa2dbed4510d6p-688,
     0x1.31fec61eb77a8p-181, 0x1.7ea50890eea32p-214, 0.0, 0x1.d58787b287086p-448,
     0x1.2e00adbbf9e0dp-594, 0.0, 0.0, 0x1.a6298c16413b9p-58, 0x1.d669602697759p-75,
     0.0, 0.0, 0.0, 0x1.7beba5d8dd26ap-603, 0.0, 0x1.9fde4eef049d7p-590,
     0x1.219bb65fc3403p-55, 0x1.a40ee8e95c0c7p-720, 0x1.666021e1143d2p-283,
     0x1.58e9785548031p-515, 0x1.7900c12029802p-398, 0x1.529781cc807b9p-647,
     0x1.a44eb2da5da57p-149, 0x1.56653d561b063p-15, 0x1.b5f14dfd120f8p-402,
     0x1.374430a60f241p-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b840d7424c235p-532, 0x1.543419c6ae975p-732, 0x1.a7e61cd9e471dp-404,
     0x1.56603b6b67ec4p-478, 0x1.e897280465609p-786, 0.0, 0x1.b64f086f295acp-819, 0.0,
     0x1.a1407e251d36cp-4, 0.0, 0.0, 0.0, 0.0, 0x1.457a6d9fc47ebp-879, 0.0,
     0x1.42d077365dc4cp-304, 0x1.b705c1f77a39ep-616, 0.0, 0.0, 0.0,
     0x1.6e0d4cb160f46p-387, 0x1.ee2a2d311be5fp-698, 0.0, 0x1.de5d94537ac3fp-611, 0.0,
     0.0, 0x1.d205263348ffbp-81, 0.0, 0.0, 0.0, 0.0, 0x1.5dcc97c33f759p-235, 0.0,
     0x1.9d6d99671e19cp-452, 0.0, 0.0, 0.0, 0x1.03124a03eef13p-770, 0.0, 0.0,
     0x1.6e659cd46b49dp-370, 0x1.a9ec215431adep-336, 0.0, 0x1.eaf3952d4b987p-171, 0.0,
     0x1.9d8a2b692fd2ap-769, 0x1.1d3e284687139p-505, 0x1.f988064acec5fp-843, 0.0,
     0x1.f6693e0d0da9p-952, 0x1.0dea6b6fd60a4p-677, 0x1.373866ab1d82cp-878,
     0x1.1df1d55332022p-792, 0.0, 0x1.d58c2eda97f1ep-86, 0x1.849c61af31e6bp-394,
     0x1.03842150d7cfbp-937, 0.0, 0.0, 0.0, 0x1.e77a295167c3dp-78,
     0x1.ff164222b1ed6p-946, 0.0, 0x1.5ec2998923fd1p-772, 0.0, 0.0,
     0x1.41e4ebaf06f23p-734, 0x1.471bbea9d7b68p-667, 0.0, 0x1.4c98af8f4327bp-369,
     0x1.ad094b6a79694p-1020, 0.0, 0.0, 0.0, 0x1.759a077b91376p-200, 0.0, 0.0, 0.0,
     0.0, 0x1.cf7f1f9691ed4p-676, 0x1.cbb49fcda7e83p-109, 0x1.f863f11dce7b7p-335, 0.0,
     0x1.4090d98d58622p-85, 0x1.e296b9c921b9bp-633, 0x1.95b0b99c67dccp-719,
     0x1.264375e77d63cp-741, 0x1.46325af7c157dp-745, 0.0, 0x1.daa20d9a8b6dfp-232, 0.0,
     0x1.8a19ca055d98ep-709, 0.0, 0.0, 0x1.f18d9826c0d7bp-336, 0.0,
     0x1.bf5646d700001p-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.783386c0c60b6p-764,
     0x1.fc88eec2b3a5dp-402, 0x1.fac56c1ddebc7p-97, 0.0, 0.0, 0.0, 0.0,
     0x1.e9c7f7b7c13dfp-50, 0.0, 0.0, 0x1.3011eb855435fp-846, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f57aace6c4a24p-388, 0x1.17276ce140966p-492, 0.0, 0.0,
     0.0, 0x1.c91cd32ed3356p-629, 0x1.e69fd946362fcp-696, 0x1.232df0c3036b8p-667,
     0x1.54db5d6176c8fp-965, 0.0, 0x1.fc693f5eb53b6p-16, 0x1.45f2fbe5dc15ep-955,
     0x1.221c86b430e24p-69, 0.0, 0x1.cdc26b0f4d9cep-466, 0x1.6a0837839ff1fp-736,
     0x1.2c59f664d6496p-190, 0x1.0e3a4bc87e5c5p-487, 0x1.86a506976c4aap-55, 0.0,
     0x1.829df99aad2adp-152, 0x1.3da04e5e2e8c9p-914, 0x1.766890cca55f4p-297,
     0x1.8fa004d1ffd6p-226, 0.0, 0x1.ff665bfb48ce8p-277, 0.0, 0.0, 0.0,
     0x1.bc71148192fdep-121, 0.0, 0x1.62d4baf23fc89p-359, 0.0, 0.0,
     0x1.5057057c5d154p-1018, 0x1.a4d0ad961cce8p-791, 0.0, 0.0, 0x1.d305f3524049p-734,
     0x1.a569fbe8536bbp-468, 0x1.16bae2f201f65p-570, 0.0, 0.0, 0x1.69d7dc450e224p-722,
     0.0, 0x1.718033ad979fdp-413, 0x1.f67015e1033cbp-545, 0x1.f3e5d2b3edf33p-753,
     0x1.2302e538d6321p-125, 0x1.08d9889e0d4dep-339, 0.0, 0.0, 0x1.b736eec91e6ffp-453,
     0.0, 0x1.75bc3ce8ff383p-520, 0.0, 0.0, 0x1.30ebe58aa4c91p-1,
     0x1.a5ab149a7da09p-645, 0x1.64615e57c8611p-971, 0.0, 0.0, 0.0,
     0x1.904683156d40fp-816, 0.0, 0x1.8a88ab0ef5b39p-589, 0.0, 0x1.8c1e952fcc80cp-134,
     0.0, 0.0, 0.0, 0x1.16f0c223a0a73p-426, 0.0, 0.0, 0x1.0a4cb3dfa0d87p-25,
     0x1.a90c65b7ad9d8p-38, 0.0, 0x1.44ce13b158362p-787, 0x1.c76408a3b92f4p-573, 0.0,
     0.0, 0.0, 0.0, 0x1.023034ccda07ep-354, 0.0, 0x1.e66fb743964ap-980, 0.0, 0.0,
     0x1.95a2a5ed4dc18p-675, 0.0, 0x1.73f76dbec061bp-181, 0x1.ef561b6934fa6p-64,
     0x1.7d0536c9d9652p-1010, 0.0, 0.0, 0.0, 0.0, 0x1.b00b4af85d46cp-731,
     0x1.f658528fa7d51p-340, 0.0, 0x1.d4c753eb9fcf9p-149, 0.0, 0x1.f91a7f74a7882p-976,
     0.0, 0.0, 0x1.ccaff13d95066p-979, 0.0, 0x1.e1d742f7b1b35p-844, 0.0, 0.0,
     0x1.cb62d542ca783p-49, 0.0, 0.0, 0.0, 0x1.39323050da18p-881,
     0x1.c061f83829c7dp-573, 0.0, 0x1.01d462f2bb20bp-300, 0.0, 0x1.282afdad2871dp-837,
     0x1.75096dc36bebep-560, 0x1.96433625e529dp-536, 0x1.0097f0e23fc0fp-479, 0.0,
     0x1.8c4409ea46837p-584, 0.0, 0.0, 0x1.0f595d5214d98p-924, 0x1.bf6499d54367dp-200,
     0x1.00824d4276437p-733, 0x1.f411a000b926dp-1002, 0.0, 0x1.f81df72c6ea17p-599,
     0.0, 0x1.545f42aff23b1p-241, 0.0, 0x1.1493ae3290cd9p-859, 0.0, 0.0, 0.0, 0.0,
     0x1.74c9777f537dp-427, 0x1.f7f6c78ec586dp-853, 0x1.b4fc260f7613p-890, 0.0,
     0x1.dcf6eeecb279ap-792, 0x1.b5b98454a4f5p-348, 0.0, 0x1.88ae311fc1527p-786, 0.0,
     0x1.154cbaeacc74ep-878, 0.0, 0x1.c224685232be9p-938, 0.0, 0.0,
     0x1.63f5ee06c8b56p-226, 0.0, 0.0, 0.0, 0x1.eda461a96a0bfp-664, 0.0, 0.0, 0.0,
     0x1.9cacb9942dd8bp-432, 0x1.4e2fb6229847dp-678, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.02b414fd2e21ap-70, 0.0, 0.0, 0.0, 0.0, 0x1.69bfe3fce100fp-749,
     0x1.6eef6c5518791p-347, 0.0, 0.0, 0.0, 0.0, 0x1.37ea886cd28f8p-880,
     0x1.9ed946a845108p-976, 0.0, 0.0, 0x1.e37508cf8b0ecp-169, 0.0,
     0x1.b3d28942722ccp-349, 0x1.2544ef09fa5cap-591, 0x1.12e086613efbp-357, 0.0, 0.0,
     0x1.6ae4c68b63a37p-397, 0x1.c66d79a3ab643p-508, 0.0, 0x1.a6c7d2866b262p-892, 0.0,
     0x1.644fc28f85479p-255, 0x1.eca475bb76842p-706, 0.0, 0.0, 0x1.02f669e6bdb02p-204,
     0x1.d4a445a53410bp-655, 0x1.bb318034a5ce4p-157, 0x1.501c8977e2093p-292,
     0x1.c2a86750433ap-742, 0.0, 0.0, 0.0, 0x1.3535abc15d1cdp-435,
     0x1.8897b1274046p-348, 0x1.9a956a857c3dep-635
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
            tmp1 = Sleef_exp2d2_u35kvx(tmp0);
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
    printf("Sleef_exp2d2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp2d2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
