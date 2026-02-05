/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshd1_u10purecfma.c --function \
 *     Sleef_finz_acoshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.3a7ed06419bb4p-838, 0.0, 0.0, 0x1.05a9ced5198aep-593, 0x1.680ae2e3e089ep-38,
     0.0, 0.0, 0.0, 0x1.077abe33c9a49p-11, 0.0, 0x1.102f8de8c193ap-900,
     0x1.0ce628749cef3p-800, 0.0, 0x1.480653cb85762p-812, 0x1.a5a77c1edf54cp-303, 0.0,
     0.0, 0.0, 0x1.5ba016f988fdp-210, 0x1.3875abfa00458p-894, 0x1.d655042ef68a6p-887,
     0.0, 0.0, 0.0, 0x1.8d65475950f11p-596, 0.0, 0x1.b49101e676429p-834, 0.0, 0.0,
     0.0, 0.0, 0x1.d2c4a58c2d4e9p-71, 0x1.c9c76ac9f001bp-272, 0x1.9542624c7c1bep-562,
     0x1.81ad89f93e14dp-214, 0.0, 0.0, 0.0, 0.0, 0x1.5b0ca7d762608p-403,
     0x1.6b39c7dfdcb16p-41, 0.0, 0x1.188ef47b24ce4p-171, 0.0, 0.0,
     0x1.0fa8fc57c056fp-398, 0.0, 0x1.e9180f7d0d65cp-499, 0x1.afb22399cc96cp-319,
     0x1.074872cba5493p-330, 0.0, 0x1.41c7678f6e059p-89, 0.0, 0.0,
     0x1.b47266a19580dp-448, 0x1.23c66ba50f861p-655, 0.0, 0.0, 0.0,
     0x1.7de0675ceb928p-860, 0x1.203c1b8322cf1p-842, 0x1.ca23bf06baf7ap-957, 0.0,
     0x1.a14cff90fd258p-456, 0x1.26d81c872b447p-168, 0.0, 0.0, 0.0, 0.0,
     0x1.41710521a392dp-984, 0.0, 0.0, 0x1.cfb67f453d5fbp-917, 0.0, 0.0,
     0x1.ab638e42b97f2p-726, 0.0, 0.0, 0.0, 0x1.9a37bfb1cb88ap-946, 0.0,
     0x1.0e4d25862680ep-386, 0.0, 0.0, 0.0, 0x1.21e4cc8000822p-48,
     0x1.3022f5288a724p-599, 0x1.acdbf82b12c83p-73, 0x1.98609f7e5081dp-308,
     0x1.f62d24ef5975p-553, 0.0, 0x1.21d5e0ec78f86p-448, 0x1.d0f803b3b1f08p-459,
     0x1.6fe5bb14193b9p-132, 0x1.63fa250cde4dep-445, 0x1.4470653837236p-252,
     0x1.5acc9551e2694p-121, 0x1.01197add8e502p-125, 0x1.8321866807bdap-728, 0.0,
     0x1.c4c717404fb09p-772, 0.0, 0x1.7dc353d03643dp-151, 0.0, 0.0, 0.0,
     0x1.cebcf64982b7cp-992, 0.0, 0x1.c75948edaa06dp-531, 0.0, 0x1.4f4c2aa041228p-599,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.468c7872bf895p-973, 0.0, 0x1.646adb9de9b39p-139,
     0.0, 0.0, 0.0, 0x1.6d7d14f7e1a7ap-52, 0.0, 0.0, 0x1.647cd1e5e1a91p-309,
     0x1.5406c5f76e869p-360, 0.0, 0x1.7f24ffb35e8ffp-877, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9c76f578fddb8p-614, 0.0, 0x1.f0c65bce92338p-44,
     0x1.8311cb1a9b724p-661, 0.0, 0.0, 0x1.c2bf2edea3d95p-101, 0.0,
     0x1.018d4e9c9441dp-960, 0.0, 0.0, 0.0, 0x1.2e19e082dd6e7p-923,
     0x1.3c05a3240cb6dp-926, 0x1.13620b0bf9acep-780, 0x1.01a8b4f053481p-613,
     0x1.1b1bad58e1e44p-906, 0x1.81119fc4b64a2p-798, 0x1.7292363d302ffp-584, 0.0, 0.0,
     0x1.ee2534c929ec4p-124, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed6bf88669425p-224,
     0x1.efba3cfe57084p-541, 0.0, 0.0, 0x1.9ce41ee12c6c3p-770, 0.0,
     0x1.057b592968a6dp-341, 0.0, 0x1.207f95eb28656p-14, 0.0, 0x1.3c21be1a291c5p-286,
     0x1.98a1cbd22fb09p-118, 0.0, 0x1.0edf44817c595p-551, 0.0, 0x1.f91b8cbf0d921p-340,
     0.0, 0x1.f802ce4698f65p-911, 0.0, 0x1.ff716df9e21f6p-122, 0x1.edf5325c2b5cp-861,
     0.0, 0.0, 0.0, 0.0, 0x1.9341ddd4dd93ep-436, 0.0, 0.0, 0x1.08fdb27ac231cp-906,
     0x1.eafd343634e34p-765, 0.0, 0x1.fea6adb625514p-46, 0.0, 0x1.61a1415ac0327p-743,
     0.0, 0x1.6d40f5a90c4a4p-259, 0.0, 0x1.598d1152dca38p-57, 0.0,
     0x1.6fdb12ce186ccp-940, 0x1.59210ebd6cc85p-940, 0x1.de3fb71c53b4cp-192,
     0x1.e471399dec0dcp-383, 0.0, 0.0, 0x1.10358e36b9acdp-662, 0x1.b79fa27fe87f3p-828,
     0.0, 0.0, 0.0, 0x1.1d19c63acd7c3p-747, 0x1.361cdc9026a01p-268, 0.0,
     0x1.3448fec8c133dp-458, 0.0, 0.0, 0.0, 0.0, 0x1.82bc438ccd1d9p-340,
     0x1.c9d88d618de04p-332, 0.0, 0x1.a760dbfc15a9p-225, 0x1.0c45fc1a1fb5ap-205, 0.0,
     0x1.8d861ba8026c2p-225, 0.0, 0x1.6b794e0137405p-685, 0.0, 0x1.f600ebd5675ecp-784,
     0.0, 0x1.37143c21359adp-853, 0x1.553b48240586dp-19, 0x1.d5d9e67714019p-481, 0.0,
     0x1.18ea3c9e71a45p-215, 0x1.d06137e0190ffp-808, 0x1.a2de6e762af73p-428, 0.0,
     0x1.2cb5d5bdefbb7p-29, 0.0, 0x1.2f6405656d0abp-755, 0x1.7abe7866ff859p-575,
     0x1.ac519e66e359ap-65, 0.0, 0x1.efad3f4b6ece7p-1001, 0.0, 0x1.61d10893ace8cp-996,
     0.0, 0.0, 0.0, 0x1.6f6722f3aa0fcp-1015, 0x1.3ed03618e9b12p-500,
     0x1.8a4ad5baad281p-172, 0.0, 0x1.706a103254afp-659, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6d70633dad74dp-874, 0x1.9cf89756e7a6dp-605, 0.0, 0.0, 0.0,
     0x1.69a204e2b8334p-647, 0.0, 0x1.0aa3e26b67d51p-955, 0.0, 0.0,
     0x1.245eb652b407ap-883, 0.0, 0x1.46e4c3688cda4p-448, 0.0, 0.0,
     0x1.65eda2599ee0dp-740, 0.0, 0.0, 0x1.3deb8683654f4p-132, 0x1.fc52b30e0648ap-129,
     0.0, 0x1.c91e9a94f5b43p-1016, 0x1.df5ebd7ffdf4ap-69, 0x1.e396812401244p-960,
     0x1.1b9457f105dc5p-344, 0x1.f6853d124b8b3p-658, 0x1.f63c304249dcdp-43,
     0x1.1fa576536cac8p-519, 0.0, 0x1.7316d13e35026p-626, 0x1.c584a1ad508c5p-133,
     0x1.42f9af12056e8p-130, 0.0, 0.0, 0.0, 0x1.0752a79a7a892p-809,
     0x1.197188d1c0369p-144, 0x1.f127f9be05c21p-668, 0x1.a9beeac84ed56p-266, 0.0, 0.0,
     0x1.26cc23a94ff73p-864, 0x1.c4204e851a5fap-941, 0.0, 0x1.fd65df866136ep-871,
     0x1.06bbbf2733754p-282, 0x1.15cd86e67e7f9p-597, 0x1.298ce8f891179p-77, 0.0,
     0x1.8395bc669ea09p-507, 0.0, 0x1.288d8349dd87cp-27, 0.0, 0x1.fa3765864734dp-367,
     0.0, 0.0, 0x1.bb04ba210edbbp-592, 0x1.641ef722e853cp-988, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.45a85a5233414p-515, 0.0, 0.0, 0.0, 0x1.76bfcd520526ap-649,
     0x1.f4a906fb0b267p-925, 0.0, 0x1.def4d1e738fcap-955, 0x1.de615b32f72cep-387,
     0x1.a768fa82bc242p-833, 0.0, 0.0, 0x1.72b9348d47a6fp-256, 0x1.5fe76f8efe6bcp-103,
     0x1.b785e323e9801p-870, 0x1.2a70d14bd4f74p-269, 0x1.b4fd6c7c839a4p-432,
     0x1.4ab0a4ef08f44p-725, 0x1.2f28c87604a25p-3, 0.0, 0.0, 0.0,
     0x1.60b62743fd824p-565, 0.0, 0x1.c9e92cc7d06eap-186, 0.0, 0x1.f571ae5dddc7bp-394,
     0x1.fe1699eb3d16ap-566, 0x1.33e75d1d202d4p-508, 0x1.424cda17b8782p-795, 0.0,
     0x1.ae2ff2896481bp-661, 0.0, 0x1.a6169b22c8396p-40, 0.0, 0.0, 0.0, 0.0,
     0x1.0b067424a13b1p-133, 0.0, 0.0, 0x1.1f98d32040d96p-811, 0.0,
     0x1.27423a2987f7p-151, 0x1.62f07bac5a4c8p-374, 0.0, 0x1.b01e0954eb843p-577, 0.0,
     0x1.49cd3e96861c4p-55, 0x1.72b39734c1962p-300, 0.0, 0.0, 0.0,
     0x1.049faadbdb504p-687, 0x1.f4f3f061629c2p-112, 0.0, 0.0, 0x1.ae36cd0d9a179p-134,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c5f9a46f9b2b7p-425, 0x1.ee3618419cfc9p-557,
     0x1.881ec1174ab99p-734, 0x1.634c05a8451adp-791, 0.0, 0.0, 0x1.913e4426e8e03p-110,
     0.0, 0x1.0342201897acep-143, 0.0, 0.0, 0x1.9475055faf274p-399,
     0x1.bff5274958ba7p-459, 0x1.2c5d4442c8156p-628, 0x1.2c01af6450c41p-89,
     0x1.72c2367545208p-677, 0.0, 0x1.35895db93ccaep-939, 0x1.0c4b412eabae9p-605,
     0x1.de99d94db18d7p-483, 0.0, 0x1.e23cbb484a0b4p-491, 0x1.729b29af68651p-652, 0.0,
     0.0, 0.0, 0.0, 0x1.8640768762497p-295, 0x1.73a94aa4440c2p-337, 0.0,
     0x1.3698bcdad857ap-899, 0x1.0b2cfa934cb58p-565, 0x1.25e4a9a38b3a8p-329, 0x1p0,
     0.0, 0.0, 0.0, 0.0, 0x1.70c23841d365dp-459, 0x1.f5ec4584fcd68p-672,
     0x1.8c744a06f7c16p-613, 0x1.2f860ea330b03p-559, 0x1.6e437fa7167a8p-141, 0.0,
     0x1.aa31212f7a4d8p-785, 0.0, 0.0, 0.0, 0.0, 0x1.3229dc995addcp-640,
     0x1.bf141dcc35ccdp-306, 0.0, 0.0, 0.0, 0x1.4a62d25ccdbep-488, 0.0, 0.0, 0.0,
     0x1.b1b08cc4ec47ep-491, 0.0, 0x1.878a689df4f7ap-659, 0.0, 0.0, 0.0, 0.0,
     0x1.1567bad9e8138p-887, 0x1.636eb99eb40b8p-124, 0x1.426918512f103p-894, 0.0, 0.0,
     0x1.f824dc8effb53p-1, 0.0, 0.0, 0.0, 0.0, 0x1.41b90056628c8p-639,
     0x1.8436c5de006e1p-482, 0x1.7929d566928d8p-143, 0x1.7c83c4141c9e5p-682,
     0x1.83d0dc1f1a7bdp-81, 0x1.bdcc9ae9ed2e9p-514, 0.0, 0.0, 0.0,
     0x1.e4f8a624e38a2p-980, 0.0, 0x1.9f7a5a8f91777p-16, 0.0, 0x1.a7c51b0bb7f03p-395,
     0.0, 0.0, 0x1.dd3835de3913ap-226, 0x1.37fe01aabc471p-500, 0x1.ad7a1edb4e5a8p-161,
     0.0, 0x1.b549d957b8a71p-361, 0.0, 0.0, 0.0, 0x1.ddd1c1f8d16f4p-329,
     0x1.2d99992bcbd2fp-981, 0.0, 0x1.78e91ebcf11a8p-91, 0x1.a510f37fb4065p-643,
     0x1.dcbedf404180fp-588, 0.0, 0x1.d86060089ebeap-54, 0x1.4c552a1b87cd1p-626,
     0x1.2e253c638ded6p-644, 0x1.c81371d268a65p-96, 0.0, 0.0, 0.0, 0.0,
     0x1.141eb057c6a1bp-128, 0.0, 0x1.2bf42caf70473p-757, 0.0, 0.0, 0.0,
     0x1.fb1f286523001p-415, 0.0, 0.0, 0.0, 0x1.4cb74416d3ca9p-572,
     0x1.62d591a4bc073p-206, 0x1.6eb7f7c0cd397p-125, 0.0, 0x1.8a5ec1cfb8ffdp-375,
     0x1.c42b09097163bp-700, 0x1.6627652718a87p-532, 0.0, 0x1.b548e851a0b72p-144, 0.0,
     0.0, 0.0, 0x1.62b8ec64c695bp-440, 0.0, 0.0, 0.0, 0x1.7f0e8096cced1p-686, 0.0,
     0.0, 0.0, 0x1.c3f34e1a79a66p-757, 0x1.fd200a0ac03e9p-556, 0.0,
     0x1.6312358a2841cp-647, 0.0, 0x1.c16fb40f80ccep-139, 0x1.b3251994e131dp-182, 0.0,
     0x1.26de5d0e86ebap-329, 0.0, 0x1.0ac1a4a2941d5p-244, 0x1.238a09284349cp-311, 0.0,
     0x1.a586922844f05p-641, 0x1.21469875270a1p-75, 0.0, 0x1.bee91671f052dp-909, 0.0,
     0x1.eefc47e6dc411p-2, 0.0, 0x1.0474ec2b98a6p-697, 0x1.6f74d78a24bf1p-249, 0.0,
     0.0, 0x1.16c48c6f49dadp-252, 0.0, 0.0, 0x1.41d5c2549f508p-17, 0.0, 0.0,
     0x1.21ae912acef5ap-664, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3dc330624b15fp-834, 0.0,
     0x1.2237548464401p-930, 0x1.b63e2386ce2f8p-787, 0x1.fc5d31fa33c38p-608,
     0x1.d7398ccf677abp-863, 0x1.9ff12acf0819ap-825, 0x1.4cf75b03c1033p-265, 0.0, 0.0,
     0.0, 0x1.55efb44fcfea8p-267, 0x1.6444e13fe7f53p-354, 0x1.2870715dad29ep-339, 0.0,
     0x1.c37817bccb8f7p-616, 0.0, 0.0, 0x1.a8ff5691519a9p-461, 0.0, 0.0,
     0x1.d2c094bdc5d47p-220, 0.0, 0x1.083e521441a4ap-115, 0.0, 0.0,
     0x1.455142bc2a20ap-456, 0x1.3906d7cae140fp-825, 0.0, 0.0, 0.0,
     0x1.eb1c81e377173p-566, 0x1.5a450be0724e4p-867, 0x1.692db9bc8b36cp-757, 0.0, 0.0,
     0.0, 0.0, 0x1.b70217477311dp-356, 0.0, 0x1.92beacbc4b899p-25,
     0x1.cb48cdc22b05cp-421, 0.0, 0.0, 0.0, 0x1.5ccefd1c32a6ep-893, 0.0,
     0x1.736eab2dee146p-328, 0.0, 0x1.34baeb03b8293p-264, 0.0, 0x1.1ae4ed7efad45p-365,
     0.0, 0.0, 0.0, 0.0, 0x1.2b72961139f62p-1007, 0x1.7afc2e046b0d9p-11, 0.0, 0.0,
     0.0, 0.0, 0x1.8e39720d8fbd1p-490, 0x1.8608120da6c71p-856, 0.0, 0.0,
     0x1.f0ae53099321cp-882, 0x1.d0863a62e33b2p-177, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7dde0f91295c7p-613, 0x1.049bdb9c9ce9ep-79, 0x1.da98618b1c2aap-912,
     0.0, 0x1.3d15353ee5c65p-1006, 0.0, 0x1.a2587c616e8c3p-47, 0x1.251db9f5584f1p-733,
     0.0, 0.0, 0.0, 0x1.afc1799dec14cp-327, 0x1.6a33bac8763f7p-61,
     0x1.00368b998d377p-522, 0.0, 0x1.b4b7395212d5fp-433, 0.0, 0x1.5ba453999f59dp-956,
     0.0, 0x1.e8399eda04aecp-885, 0x1.60be331d3eb0cp-162, 0x1.a5195b7f12f77p-851, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e278a46cd4d26p-124, 0.0, 0x1.dfb618b41892cp-183,
     0x1.9f69672ed124cp-955, 0.0, 0.0, 0.0, 0x1.65115dcd57ae2p-779, 0.0,
     0x1.d13e70af032bap-522, 0x1.fb12ba48086c4p-787, 0.0, 0x1.3070586683e62p-139,
     0x1.4811c79a66022p-898, 0.0, 0x1.4d6b635b489dep-821, 0x1.4cac55bc47a65p-444,
     0x1.c1a3456117adbp-313, 0.0, 0x1.e6516f284e5bbp-61, 0.0, 0x1.9b3f4e314649dp-956,
     0x1.1ab71538cf26cp-350, 0x1.2b05432a6a5c8p-387, 0.0, 0.0, 0x1.e8be9d246cc25p-216,
     0x1.0cd4ce50fb671p-380, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b2f72a4da9ad5p-1012, 0x1.9a5400f21212ep-701, 0x1.5b0b05974d1bcp-801,
     0x1.406083fea98d4p-482, 0.0, 0.0, 0x1.02d36b788df89p-825, 0x1.0d60fa1a75badp-177,
     0x1.c40a482239dap-195, 0x1.a909e7860988cp-509, 0x1.07d913daaefd5p-574,
     0x1.15c4d5290ed4ap-859, 0.0, 0.0, 0x1.0843d70e81772p-1003,
     0x1.08443be22c419p-415, 0x1.413b12590f103p-35, 0.0, 0.0, 0.0, 0.0,
     0x1.25d366db69183p-214, 0x1.39816a98d2efap-721, 0x1.73302c1305acfp-247,
     0x1.2f55034801b92p-557, 0x1.216fb19c2dc4cp-463, 0.0, 0.0, 0x1.a36a0f0adb547p-36,
     0x1.729f76c6a858ap-674, 0x1.885bb7e656049p-950, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bcbe4dd4ca6a4p-471, 0.0, 0.0, 0.0, 0x1.2a0966cb9d04ep-186, 0.0,
     0x1.d4f018cfbbe25p-340, 0.0, 0x1.4b077e5741259p-243, 0.0, 0x1.c3d6199b6f2ccp-770,
     0.0, 0x1.e9dbb8584190bp-599, 0.0, 0.0, 0.0, 0.0, 0x1.2dea8457469f7p-156, 0.0,
     0.0, 0x1.7eeef1e7216a8p-230, 0x1.ae41f9b5c706bp-752, 0.0, 0x1.85add99ebfd5ep-136,
     0x1.8dbba318304c2p-303, 0x1.f169185c22fcbp-348, 0x1.f37764e598f7cp-840, 0.0, 0.0,
     0x1.c645a87f3941cp-692, 0x1.1f59c795ff566p-267, 0x1.626d1d9ceaddp-459,
     0x1.8c0d6354c5775p-779, 0x1.0ca60281cb43fp-802, 0x1.91bddb7fcf139p-853,
     0x1.3347306b65de5p-773, 0.0, 0x1.23ed95a68c77dp-27, 0.0, 0x1.855d33c6082dep-822,
     0.0, 0x1.4a325dee8fe8bp-931, 0.0, 0x1.a8f914c972767p-506, 0x1.5f87ef2d2e6fbp-501,
     0.0, 0x1.7db0cdccb9a4bp-495, 0x1.4dea661c24539p-501, 0x1.dc4abb0bffbdap-311,
     0x1.297e5d19f5b43p-434, 0x1.dc908bb3f03e5p-667, 0x1.2a1f38b1a6fd4p-797,
     0x1.5780e4e2e0973p-758, 0.0, 0x1.fefeb80d37297p-18, 0x1.22e2a7aa1a389p-319,
     0x1.698e85463cc65p-580, 0.0, 0x1.c7f84e5cdb8f6p-640, 0.0, 0x1.c1a3ecc13e03bp-624,
     0.0, 0.0, 0x1.3612c97bc73e5p-287, 0.0, 0x1.48c95f5ffb9dp-162,
     0x1.46cc67b6d575ep-451, 0x1.bbab228bfa438p-210, 0x1.a74444f0e7e61p-671,
     0x1.75dd9227f5006p-792, 0.0, 0.0, 0.0, 0.0, 0x1.25935c0fabdffp-861,
     0x1.e9c8c97efb053p-859, 0.0, 0.0, 0x1.e7536e2bec2p-879, 0x1.d75459da588aap-617,
     0.0, 0x1.97b7cd8615f74p-333, 0.0, 0x1.4261b59a6826dp-540, 0x1.26b2352084e46p-406,
     0x1.bae97616b4fe1p-827, 0x1.7b158d216ba54p-187, 0.0, 0.0, 0x1.baa76deb723fdp-729,
     0x1.2afe8b9e2fa8fp-137, 0.0, 0x1.2e14d5a2e6f2ap-669, 0.0, 0x1.28200f027d021p-104,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc1ba1d0aea95p-586, 0x1.01b683a4ffcd1p-250,
     0.0, 0.0, 0.0, 0x1.9ba247c030b04p-930, 0x1.5db47526acb52p-137,
     0x1.65173d991152bp-153, 0x1.0944159d14212p-682, 0.0, 0.0, 0x1.6ae17b4cea25bp-832,
     0.0, 0.0, 0x1.bb1a0078465c2p-912, 0x1.8c66a3d508ad8p-340, 0x1.e819278f4a186p-112,
     0.0, 0x1.0ea5e3947f90fp-637, 0x1.b5a9446cb164ap-289, 0x1.d63b33c46b7fcp-890, 0.0,
     0x1.9eb193fa3b44p-250, 0.0, 0x1.9a8cf52ff2d5cp-683, 0x1.da5e7d071653ap-617, 0.0,
     0.0, 0.0, 0x1.076b8353bd85p-721, 0x1.ad97ac5b75ae9p-121, 0.0, 0.0, 0.0,
     0x1.30dd3c664206dp-799, 0x1.77d4f24f86398p-463, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7a7364bc04e6fp-891, 0x1.64b590749bb63p-478, 0.0, 0x1.7bad8d6755166p-967, 0.0,
     0.0, 0.0, 0x1.24e7eff0dcd86p-25, 0x1.79e01caa2d518p-64, 0.0,
     0x1.5ad618c67f696p-834, 0x1.16228088421d3p-389, 0.0, 0.0, 0x1.1069ca232f9dp-572,
     0.0, 0.0, 0x1.106f505cb4db4p-787, 0x1.5a3956f094691p-140, 0x1.70bc513059197p-215,
     0.0, 0x1.4cc22adedea0fp-295, 0.0, 0x1.9623acb42328fp-847, 0.0, 0.0,
     0x1.3673dee38584cp-668, 0x1.179bd400ff74p-221, 0.0, 0.0, 0x1.5d9a4c2f095e4p-389,
     0.0, 0x1.68f79446b60fep-873, 0.0, 0.0, 0.0, 0.0, 0x1.a52ac9edeff5fp-304,
     0x1.454e7b2556edep-221, 0x1.beff8b09fb2ccp-563, 0.0, 0.0, 0.0,
     0x1.d979c3b73305bp-838, 0x1.a1d7f4ec307c3p-1015, 0x1.fde02250f69bdp-128,
     0x1.03273efddcd6dp-651, 0x1.e8d62abb542a4p-267, 0.0, 0.0, 0.0, 0.0,
     0x1.741168b62e3f5p-245, 0.0, 0.0, 0.0, 0x1.35735301b28bp-809,
     0x1.12139fadd37bep-925, 0.0, 0x1.637edff446497p-546, 0.0, 0.0,
     0x1.21373c617f9dbp-201, 0x1.26ce7a826b19p-548, 0.0, 0.0, 0x1.a0f963535b9a4p-699,
     0x1.420dbea337f0dp-245, 0.0, 0.0, 0x1.83b6c83d9542dp-513, 0.0,
     0x1.74b2221907ee1p-104, 0x1.1441607362ba7p-502, 0.0, 0.0, 0.0,
     0x1.c671e2f049843p-667, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7abad1706634ep-192, 0.0,
     0x1.ad2498a7b0b0ep-249, 0x1.5e611b510b6cep-210, 0.0, 0.0, 0.0,
     0x1.57fcde5a0b0f7p-149, 0x1.b39122e5bd0b7p-196, 0.0, 0x1.c3771784c5729p-279,
     0x1.98dda80e983efp-513, 0.0, 0x1.4bc14b9b0a0d4p-367, 0x1.2f04b9a785e77p-797,
     0x1.1d9988f441303p-815, 0x1.59153bd7686f1p-978, 0x1.df8b32d578f17p-206,
     0x1.f42a703ae03d9p-420, 0.0, 0x1.cca49dae559p-963, 0.0, 0x1.e354fa33708a8p-486,
     0.0, 0.0, 0x1.5a565cab3889cp-206
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
            tmp1 = Sleef_finz_acoshd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_acoshd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acoshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
