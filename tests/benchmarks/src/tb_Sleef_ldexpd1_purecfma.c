/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ldexpd1_purecfma.c --function Sleef_ldexpd1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary64,int32 --precision double --bench --no-embedded-bin --target \
 *     kv3
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
     0.0, 0.0, 0x1.aa5aeb7d3d5e6p-379, 0x1.8324e2f5c57f9p-1000,
     0x1.8687720f17997p-289, 0.0, 0.0, 0x1.566151ea9bae2p-95, 0x1.43fc70b8c5e02p-233,
     0x1.f368e9909cfaep-632, 0x1.4de23cbf6f3edp-170, 0x1.d7d5d9b3f2833p-604, 0.0, 0.0,
     0x1.d8e69692d042fp-990, 0x1.bd111734ad79p-70, 0x1.bcacce5ff9714p-440, 0.0, 0.0,
     0.0, 0x1.270fca9097998p-542, 0.0, 0x1.064cc0b850cf4p-856, 0.0,
     0x1.cbf9861bc9606p-739, 0.0, 0.0, 0x1.9091336b6301fp-1, 0.0, 0.0,
     0x1.41019a115807fp-992, 0x1.89b290e50a303p-209, 0x1.e48177f18c701p-97, 0.0, 0.0,
     0x1.a898f8fc15d76p-429, 0x1.cefab08edeeeap-281, 0x1.31946ee6a578bp-776, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.30fd68dab3192p-829, 0.0, 0.0, 0.0, 0x1.0c4b4d4250e67p-627,
     0.0, 0x1.35672d58861bp-940, 0.0, 0x1.5d737707856a4p-286, 0x1.65f00c773f634p-749,
     0.0, 0.0, 0x1.a8be7dc079fbbp-229, 0x1.8428a1941e4eep-414, 0.0,
     0x1.49c5e9f8b6411p-244, 0x1.ddbeef716ac78p-62, 0.0, 0x1.dfe106e7427b6p-714,
     0x1.a08b50dd94583p-215, 0.0, 0.0, 0x1.1f877618a28b2p-30, 0.0,
     0x1.c9e0f04a490fp-339, 0.0, 0.0, 0.0, 0.0, 0x1.0adc13ae11743p-143, 0.0,
     0x1.638c19b032f4bp-317, 0.0, 0.0, 0.0, 0x1.09cf5d6e309ep-249, 0.0,
     0x1.7f8b04fa99d1ep-872, 0x1.4a99510e0d658p-66, 0.0, 0.0, 0x1.c21e4a895f5ebp-444,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9533da6955888p-653, 0.0, 0x1.324ce36d56d04p-600,
     0x1.2976217c89893p-379, 0x1.0ae8e45afee74p-311, 0.0, 0x1.9e7b5610c7ep-182,
     0x1.5e807cb90b59dp-741, 0x1.07c0b939f9d2bp-178, 0x1.562405820d079p-451,
     0x1.d5745423408d7p-241, 0x1.9e2ad1027d259p-843, 0x1.6cc206e9143dep-231,
     0x1.a71eecb990746p-11, 0x1.149bcc4b482e6p-258, 0.0, 0.0, 0x1.47e82a8d43c2fp-439,
     0.0, 0x1.58fd59c32e1ebp-928, 0.0, 0.0, 0x1.321dc1c7f53c7p-301, 0.0, 0.0, 0.0,
     0x1.6800e3b21f614p-654, 0x1.a9c153af50effp-978, 0x1.8127794a7cd77p-239, 0.0, 0.0,
     0x1.2a7dac724e15cp-580, 0x1.6aaceb552b2e4p-535, 0.0, 0x1.20bac18d3589dp-498, 0.0,
     0.0, 0x1.97ed78dfedcfp-172, 0.0, 0x1.ca9d11ef5a3c4p-968, 0x1.dd0911799181cp-201,
     0.0, 0x1.fd498e4fa38c1p-306, 0.0, 0x1.8c76a8a65b516p-544, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5387c5d5c9845p-761, 0.0, 0.0, 0x1.cd4c9ebe92b82p-862, 0.0,
     0x1.256f28ae4190ep-191, 0.0, 0x1.9cb0b1038b645p-903, 0x1.8a3280f13ddep-330, 0.0,
     0.0, 0.0, 0.0, 0x1.8d19e0be7c9b6p-325, 0x1.a450032348a6dp-950, 0.0, 0.0,
     0x1.4d7318dfe4fap-241, 0x1.22bc18521ec92p-759, 0x1.c30c6c348bb07p-959, 0.0,
     0x1.22a148378bea3p-238, 0x1.6c41270762f01p-84, 0x1.2dee67c7d0694p-246, 0.0, 0.0,
     0x1.7cc039390f9c4p-218, 0x1.07a0d88289b0fp-592, 0.0, 0x1.1468c3a10df1dp-876,
     0x1.36a613b7a882dp-528, 0.0, 0.0, 0x1.5aa0a72bb4e68p-217, 0.0, 0.0, 0.0,
     0x1.853a61522058ep-85, 0x1.276f3d4d062c8p-610, 0.0, 0.0, 0x1.2ab8cef3cbd4cp-294,
     0x1.48a3ca17ba8e3p-775, 0x1.4ddfda15d5192p-214, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0400866488c38p-734, 0x1.a610eee4c985fp-869,
     0x1.732c2f18f80dap-700, 0.0, 0.0, 0x1.82136a5905d51p-284, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f4e4107851716p-350, 0.0, 0.0, 0x1.8a168370c45a2p-776,
     0x1.50d88eaf73029p-812, 0x1.1615d1ba205f2p-822, 0.0, 0.0, 0.0,
     0x1.5eac12820279cp-446, 0x1.9157109fa65d6p-314, 0x1.e0c544d68554dp-898, 0.0,
     0x1.fd192dad243e6p-435, 0x1.50aa45d23da68p-1017, 0.0, 0x1.6c7c8a9ccb35ep-990,
     0.0, 0.0, 0.0, 0x1.c7584e92eaf54p-956, 0x1.9a1ae128d7588p-530, 0.0,
     0x1.ef7ccf0b9e874p-303, 0.0, 0.0, 0x1.4ad0949d2085cp-480, 0x1.834c02120fcf4p-755,
     0x1.f9faa47f5b54ap-948, 0x1.83fe72371ceecp-993, 0.0, 0.0, 0.0,
     0x1.7f186e48d4764p-827, 0x1.2b01141f49b7p-670, 0x1.db5e7cb847b0ap-438,
     0x1.892701c49efdbp-939, 0.0, 0.0, 0x1.87125f00ba65dp-666, 0.0,
     0x1.b22f139caa5f9p-195, 0x1.ae519a2e0a4cp-736, 0x1.df62ce670676p-18, 0.0,
     0x1.3f5951fdbbf7p-441, 0.0, 0x1.d1d4a85ace635p-518, 0.0, 0.0,
     0x1.b0e9a6c08e102p-487, 0x1.fc349a52eadd9p-245, 0.0, 0.0, 0x1.55b0a31ff0f62p-490,
     0x1.68c4eec374beep-85, 0x1.e83adb971808dp-297, 0x1.521d65948cef7p-132,
     0x1.5e922921445d8p-809, 0x1.a09957f37a3f4p-767, 0.0, 0x1.e2f5e8798c21bp-641,
     0x1.7c80257cba3e5p-627, 0.0, 0x1.45f420c88eee1p-218, 0x1.33347fb14c3aap-889,
     0x1.c12380919f71dp-87, 0x1.fb4326b932d59p-469, 0x1.42302996fd59ep-85, 0.0,
     0x1.e4ce3e5c30d8fp-682, 0x1.f8ffdaf387d03p-213, 0x1.765dbb2bdb06bp-38,
     0x1.ff25a9a934806p-311, 0x1.d9800f71e2932p-489, 0x1.36394948b5141p-337, 0.0,
     0x1.d2b93c12c6534p-37, 0.0, 0x1.d14f2ceef84dcp-951, 0x1.4e45920ed6a03p-956, 0.0,
     0x1.ab7e033973891p-552, 0.0, 0.0, 0.0, 0x1.baf8a8719b3f4p-929,
     0x1.cda6158ff6abfp-188, 0.0, 0.0, 0.0, 0.0, 0x1.e28f966e38e8p-957, 0.0, 0.0, 0.0,
     0x1.d8f3cc36759fdp-428, 0.0, 0.0, 0.0, 0.0, 0x1.cefcdd18cbd7ap-992, 0.0, 0.0,
     0x1.d96221b304ebap-17, 0x1.ca81e0d0d5fbbp-167, 0.0, 0.0, 0.0, 0.0,
     0x1.76ba8fa7ba03cp-30, 0x1.bc22ce8bd296ep-130, 0x1.ffaf5e17dd5efp-573,
     0x1.ffe3c006016c6p-29, 0x1.e81d38883a9fap-260, 0x1.6f899f0e750c6p-493, 0.0,
     0x1.72504a76966dcp-441, 0x1.58408747c5517p-618, 0x1.c077e838324dcp-509,
     0x1.b991faf41f562p-576, 0x1.0e1cc5854c263p-526, 0.0, 0.0, 0.0, 0.0,
     0x1.43acf0517d3cbp-392, 0.0, 0x1.411c418e5618ep-103, 0.0, 0.0, 0.0, 0.0,
     0x1.db3d074064b05p-620, 0.0, 0x1.b29f6feb4bdc4p-118, 0x1.708268cea23a3p-840, 0.0,
     0x1.204fbbd1c16ccp-831, 0x1.a56cfa823b3a5p-272, 0x1.84ffb893df228p-996, 0.0, 0.0,
     0.0, 0x1.8b75e0b9ac64ep-112, 0.0, 0x1.2328255f4c3c1p-843, 0x1.a94e7af8b1e5cp-445,
     0x1.c4b76382b93f1p-161, 0x1.7749aef100e45p-756, 0.0, 0x1.b4c9561442cf4p-286,
     0x1.0b53c0d424c1ep-674, 0x1.4c2f07849a84cp-706, 0.0, 0x1.d364dd8a863adp-286,
     0x1.7cae5417dc5d3p-653, 0.0, 0.0, 0.0, 0.0, 0x1.cd8c7b2a531cbp-521,
     0x1.602b9cf463654p-975, 0x1.c5ea1bd9ba324p-588, 0.0, 0x1.4ac5037744681p-84,
     0x1.da4f834b6063fp-329, 0.0, 0.0, 0x1.163bd130b6324p-163, 0.0,
     0x1.cece6acf8276bp-14, 0x1.2da7d3942c9f7p-828, 0x1.7a39379438927p-696,
     0x1.01712244f981cp-161, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc6b40e4b0b2fp-353,
     0.0, 0.0, 0.0, 0.0, 0x1.fda821f4e666fp-387, 0.0, 0x1.100cd101dc9b9p-383, 0.0,
     0x1.7e8d8b24fdcap-900, 0.0, 0x1.c20ed3acd3b99p-997, 0.0, 0x1.1a4718e8b20f8p-236,
     0x1.def4b3b1a404ep-429, 0x1.cc591119ed85bp-214, 0.0, 0.0, 0.0,
     0x1.76f520b89d573p-639, 0x1.c37fe5e017416p-490, 0x1.d87a8199155e4p-683, 0.0, 0.0,
     0x1.db8f63b464fbbp-567, 0x1.ebda1446dbc03p-878, 0x1.862896fbf98f1p-258,
     0x1.ab2d06a7a55f7p-128, 0x1.e78d1f05b60ecp-375, 0.0, 0.0, 0x1.2cc137e27bc4ep-637,
     0x1.56172a4669c13p-365, 0x1.42b2ff105bdf8p-894, 0x1.8c3e10e0fb37cp-985, 0.0, 0.0,
     0x1.8025b0c95ca3cp-229, 0x1.ea80167b7efc5p-866, 0.0, 0.0, 0x1.8604a6a2d8ea6p-258,
     0x1.690c535f5db8cp-390, 0x1.5b07982d71707p-233, 0.0, 0x1.1d78493ca6322p-465,
     0x1.a5bb03992efc5p-763, 0x1.cf9d01a3a6d44p-9, 0.0, 0x1.14eb6f9f9ac6ap-935,
     0x1.48d401eccba59p-131, 0.0, 0.0, 0.0, 0x1.a17d810b75129p-597, 0.0, 0.0, 0.0,
     0x1.6ae3518c45f4ap-754, 0x1.3bee9393e2f6p-959, 0x1.bee1c8e8faa6p-948,
     0x1.03cf7dc9c0f6bp-450, 0x1.2885139d9f9d7p-158, 0x1.fc4846b262ffcp-846, 0.0,
     0x1.fb3f5008e1ef2p-138, 0.0, 0.0, 0x1.bc1f32ff8ef2cp-741, 0.0,
     0x1.0c6e445d4a74ep-743, 0.0, 0x1.8eef18daaba05p-48, 0x1.7545eb6051a11p-587, 0.0,
     0.0, 0.0, 0x1.fd8fb519af8dbp-231, 0x1.e4da50cabebbdp-459, 0x1.5b3bda12b87cp-988,
     0x1.791b3616f8b4cp-609, 0.0, 0.0, 0.0, 0x1.3a18947bc738dp-519, 0.0, 0.0, 0.0,
     0x1.fa56c6880170fp-262, 0x1.94543293b05d3p-744, 0x1.0831f87f68c2dp-17, 0.0,
     0x1.c37c42b29330cp-982, 0x1.41eaf27f28a1ap-265, 0.0, 0.0, 0x1.b36b6e366cfbdp-339,
     0.0, 0.0, 0x1.47097931e31a4p-693, 0x1.3228ccb2e56a2p-348, 0x1.44c24625bddaep-200,
     0x1.be9fbe777b029p-937, 0x1.126c1689e231ap-878, 0.0, 0x1.8d991be7dab4fp-765,
     0x1.c9ae08e8622abp-464, 0x1.e8354ef11e355p-140, 0x1.0111c9fbe593dp-964,
     0x1.93b053032afdcp-414, 0x1.955305e01287dp-945, 0.0, 0x1.cb25f32d2cbc6p-139, 0.0,
     0.0, 0x1.316f89b4acf18p-54, 0.0, 0x1.43d735f7e5dd7p-544, 0x1.30b494adc0a97p-2,
     0.0, 0.0, 0x1.c5b3ae57418a6p-226, 0x1.d37552cca4fdcp-726, 0x1.63a34a3e85ae3p-876,
     0x1.1a016f48f5bd1p-471, 0.0, 0.0, 0x1.4e23001f7c80ap-403, 0x1.4e449c5f10cffp-838,
     0x1.9516f8fde4ca3p-871, 0.0, 0.0, 0x1.f073fff3116ebp-352, 0x1.0486de6dd1bfap-143,
     0.0, 0.0, 0x1.6715d47e037cbp-356, 0.0, 0.0, 0.0, 0x1.e620d0cf110c7p-473, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.882655550c241p-740, 0.0,
     0x1.56ec803910969p-484, 0x1.4344945909994p-80, 0.0, 0.0, 0.0,
     0x1.a5537b9a1ed46p-13, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d16e7fe23dfe9p-789, 0.0,
     0.0, 0x1.97b838f21f7cp-915, 0x1.c9fc68458c1a6p-192, 0.0, 0.0,
     0x1.c31963993e723p-487, 0.0, 0.0, 0x1.1821c8ac0eb78p-970, 0.0,
     0x1.1171b52145581p-835, 0x1.0f10c8524d3ebp-441, 0x1.18d01502d6c26p-968,
     0x1.00b691077a892p-869, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18899479d846cp-7,
     0x1.cd7c3c0872804p-513, 0.0, 0x1.e046d9c49f0e5p-797, 0.0, 0x1.988c1e76d5eccp-342,
     0x1.2a54eb520c62fp-76, 0x1.d1a111e0c5374p-511, 0.0, 0x1.0ae1e796f75afp-85, 0.0,
     0.0, 0x1.0547fd78ac7b2p-584, 0.0, 0.0, 0.0, 0.0, 0x1.f4d0c9d7a9fc7p-516, 0.0,
     0x1.513b50ae35bffp-494, 0x1.bce51dded7874p-925, 0x1.7f148541aa76dp-137, 0.0,
     0x1.3efda1e49af34p-169, 0x1.f31cc4ee41a9bp-709, 0x1.6f62b09d302cfp-41, 0.0, 0.0,
     0.0, 0x1.d73c1c0f89b24p-834, 0x1.8709aec741247p-666, 0.0, 0.0, 0.0,
     0x1.be0c01155ca6dp-760, 0.0, 0x1.43ceec65aae9ap-485, 0.0, 0.0,
     0x1.568bdbd17f8bp-396, 0.0, 0x1.de0ff7e120e09p-670, 0.0, 0x1.d21074a2246abp-277,
     0x1.e475bcd84138fp-322, 0x1.30dc3d65b7ca7p-571, 0x1.53763d1b17aap-171, 0.0,
     0x1.18931b60f9f5dp-59, 0.0, 0x1.4c9c51ed3259dp-435, 0.0, 0x1.7e5cbb2874bd1p-847,
     0.0, 0.0, 0x1.f651247f960adp-452, 0x1.1a5899f781e03p-985, 0x1.e2a09bf0fa916p-662,
     0x1.73967ec34570dp-343, 0x1.43cc8b2a5b10dp-307, 0x1.02fc10c0068a4p-325,
     0x1.75c94fd7245dep-285, 0.0, 0.0, 0.0, 0x1.7a21a7f24d3c9p-557,
     0x1.be78e5273b1c9p-174, 0x1.a1610ce620126p-951, 0x1.d0be376e76d29p-954,
     0x1.19b21d1ef0281p-934, 0.0, 0.0, 0x1.da763ba41d9d4p-124, 0.0, 0.0,
     0x1.0071fbb6b980ep-334, 0x1.90d38b7e88efep-363, 0x1.c8ba0775d75f4p-247, 0.0,
     0x1.fd2a77958a301p-600, 0x1.9fccf437305e3p-590, 0x1.8b8f69582adc5p-547,
     0x1.81741d3ee50dbp-792, 0.0, 0.0, 0.0, 0x1.bb2528ba8c885p-189,
     0x1.ddfc80c4da9c3p-954, 0x1.f17164d3d4561p-544, 0x1.2fd34b4fd221fp-251, 0.0,
     0x1.5ed90ec34d90ap-939, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df5c4629fecbbp-12, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a5f9184924d36p-921,
     0x1.0bef2124ceb42p-827, 0x1.0e52240dcfcccp-915, 0x1.d8c7597b46f6dp-401, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.db96dd0c919d4p-208, 0x1.c473bf96f1689p-856,
     0x1.056ace11efee8p-388, 0.0, 0.0, 0.0, 0x1.6fe97844ed264p-992,
     0x1.3067f7d4a25cfp-711, 0x1.0c00b206dcbeep-659, 0x1.e89420fe74cebp-123,
     0x1.bbbaf361efe3cp-733, 0x1.dd64e97ae9f45p-867, 0.0, 0.0, 0.0,
     0x1.5012be7b5fd78p-639, 0.0, 0.0, 0x1.1487aa9bdd2b7p-825, 0.0,
     0x1.e3d28a26e89adp-384, 0.0, 0x1.76404b4c9dc8dp-75, 0.0, 0.0,
     0x1.4d132ca9ae8bdp-922, 0x1.24692846e8e3ep-826, 0x1.aea1ef510e538p-987,
     0x1.18cfcbf6d7617p-188, 0x1.7ec422ee46e82p-180, 0x1.8430b2266d02ap-547, 0.0,
     0x1.0e040d7e1bab4p-91, 0.0, 0x1.a5e4dcbed1cbfp-993, 0.0, 0.0,
     0x1.ccf751ef54f4dp-19, 0.0, 0.0, 0.0, 0x1.0a601d5aaba36p-989, 0.0, 0.0,
     0x1.3b7b97c458d6fp-838, 0x1.e4954d0d501bp-381, 0x1.05d4b2e8e9ffap-513, 0.0, 0.0,
     0x1.63d30861a510ap-973, 0x1.2ba3a9430bde6p-131, 0x1.bf6a777bc19cep-168,
     0x1.8a99e47d4669fp-654, 0.0, 0x1.cde8972834e4p-536, 0x1.9f0cb564a29e4p-263, 0.0,
     0x1.23a38075cb963p-55, 0x1.936d9917869ep-341, 0x1.7e22a60a1e986p-307, 0.0, 0.0,
     0x1.03a70c3f016e2p-812, 0x1.0decb54a8cec2p-435, 0x1.c18d8f99c8106p-754, 0.0, 0.0,
     0x1.3dc8127a92434p-796, 0.0, 0x1.e4b525e068495p-827, 0.0, 0x1.8de5d6598e747p-478,
     0x1.52bd97fb6f20cp-961, 0x1.fc0468e6a94a5p-397, 0.0, 0x1.53a63b4732381p-121, 0.0,
     0x1.7f9d3ded297d3p-1021, 0x1.48175d863d62p-393, 0x1.e0d1b1d0717a5p-757, 0.0,
     0x1.fb6ce994acb96p-540, 0x1.109331373840ap-275, 0x1.662b514aa5ea4p-93,
     0x1.334a3d3a73356p-131, 0.0, 0.0, 0.0, 0x1.1469abd037856p-552,
     0x1.8b5e2215b5b2cp-631, 0.0, 0x1.70d30ed5fabd8p-672, 0x1.7ea60e9a43932p-516, 0.0,
     0x1.bf9988b3955a9p-748, 0x1.85716b6d91b43p-245, 0x1.5382fd649e90cp-1018, 0.0,
     0x1.1fb8b6d9793bbp-683, 0.0, 0.0, 0x1.bf007c5b9dd7ep-835, 0x1.34f01179671f4p-131,
     0x1.80132cd7b1b52p-852, 0x1.fe47782f40ff3p-17, 0x1.44d896d0a5ffap-747,
     0x1.88ba18043b349p-270, 0x1.510e1be60cde9p-64, 0.0, 0.0, 0.0, 0.0,
     0x1.47138782fc241p-224, 0.0, 0x1.486b8d9b4b117p-660, 0.0, 0.0,
     0x1.fcbea7d3894bbp-811, 0.0, 0.0, 0.0, 0x1.246b0d9243ca1p-761,
     0x1.6139075ab8e4p-991, 0.0, 0x1.f85a87caf5427p-929, 0.0, 0.0, 0.0,
     0x1.dadab7ab66918p-670, 0.0, 0x1.9ae25894e4dd5p-642, 0.0, 0x1.2e12a17f6aa9fp-716,
     0x1.0f0c81e643ab2p-352, 0.0, 0.0, 0x1.64865d08caeefp-660, 0.0,
     0x1.c3eaec35e2beap-69, 0x1.b0a9e05106017p-190, 0x1.5482b6ff20d8cp-625,
     0x1.b666f68d6e06ep-320, 0.0, 0.0, 0.0, 0.0, 0x1.4cf61107a0422p-941,
     0x1.49bafad65e515p-112, 0x1.b3b6ba70cc8b6p-113, 0x1.2353334df80b1p-158,
     0x1.34f31296e2527p-410, 0x1.357fe947d8934p-814, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2bb4cfb494ec9p-372, 0x1.f5c4ab1e8ad42p-438, 0.0, 0x1.5073f42d27bbbp-547,
     0x1.b82094e3fe606p-61, 0x1.57f829fbbfe71p-291, 0.0, 0x1.b6736d19a968fp-822,
     0x1.56f1cabe5e54p-1019, 0x1.1b492cfc45187p-740, 0.0, 0.0, 0x1.41f69a6d073bcp-295,
     0x1.db25592d6ad9ap-881, 0x1.12dad1319b20cp-278, 0x1.2f1c46c5d2741p-1019,
     0x1.b4adab67419eap-8, 0.0, 0x1.56468f84ed4cap-116, 0.0, 0x1.8e7b3930573c7p-694,
     0x1.d2db2ac1d08c2p-84, 0.0, 0.0, 0x1.d8bf19499caeap-209, 0.0, 0.0, 0.0,
     0x1.d80cb808aec74p-577, 0x1.88e0dcb0b9bbdp-223, 0.0, 0x1.f0a0eb2fee8fap-5, 0.0,
     0.0, 0.0, 0x1.9e93cf731ce4dp-701, 0x1.66d78f79a8cf8p-1017,
     0x1.de89347027f56p-806, 0x1.6a5dcff040364p-450, 0.0, 0.0, 0x1.6a0493b3fb8bep-652,
     0.0, 0.0, 0x1.00d09bd1bf12bp-84, 0x1.ec0f4ee14e90cp-950, 0.0, 0.0, 0.0, 0.0,
     0x1.3e349047547a9p-414, 0x1.7e37f2086b347p-648, 0.0, 0.0, 0.0, 0.0,
     0x1.cc66c933737ddp-857, 0.0, 0x1.af4a674510c6ep-292, 0x1.dd981dd88c62dp-185,
     0x1.1e424f2572befp-227, 0x1.142e6bbcd0711p-76, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a44b35f5c19d4p-540, 0.0, 0.0, 0.0, 0x1.3dee6ba38192ep-501, 0.0, 0.0, 0.0,
     0x1.de84909c9ccc5p-138, 0.0, 0x1.e385c548ec96bp-338, 0.0, 0.0,
     0x1.1e0d5d011348cp-840, 0x1.0a6204178a769p-920, 0.0, 0x1.de973573d9561p-876, 0.0,
     0.0, 0x1.60dc93eb06203p-1017, 0.0, 0x1.c0eb36ceb34e3p-788,
     0x1.0093f7158d409p-624, 0.0, 0.0, 0.0, 0x1.9ed3048c82fbep-987, 0.0,
     0x1.1b41722429a7dp-591, 0.0, 0x1.0abe769fc4a14p-378, 0x1.cae330aaf3583p-684, 0.0,
     0.0, 0x1.bcd604e294b1p-553, 0x1.27fd0f907359fp-402, 0x1.5b71ecbfa9a3dp-240, 0.0,
     0x1.465d04ca4e951p-938, 0x1.df30a3d4e0c6ep-321, 0x1.68b963bc7da58p-991,
     0x1.c236813ba808cp-215, 0x1.11d8366d46541p-472, 0x1.cef9b97925fbp-621,
     0x1.bef18a6a14996p-863, 0.0, 0x1.337f498293499p-990, 0x1.04397231fb6c7p-268,
     0x1.5da5a4cf42a43p-253, 0.0, 0x1.20f9c06ef276cp-880, 0x1.d73878a022efap-714, 0.0,
     0x1.b23a6e7363394p-928, 0.0, 0x1.715c206b9198dp-251, 0x1.fc2d3fc44acadp-149, 0.0,
     0x1.11f7268b27d91p-517, 0.0, 0x1.82828c3e4dd31p-507, 0x1.a692c57d603f4p-778, 0.0,
     0x1.3bcd13f45f253p-353, 0x1.d9945d62a1001p-552, 0x1.05c83536557b3p-323,
     0x1.5bc03a796c3dfp-253, 0.0, 0.0, 0x1.735da184bbe51p-902, 0.0, 0.0,
     0x1.3fb2696589308p-833, 0x1.edb50fe353e92p-574, 0x1.b88c6ea8e33b9p-940, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5706cfbb3db4ep-59, 0.0, 0x1.dbf5bc5dbe995p-921,
     0x1.9c98ae3139a0ap-630, 0x1.b4a85fd033892p-818, 0x1.9229a1669f946p-381,
     0x1.a58d39a2ccc86p-725, 0x1.7ffe4d2c9ff88p-801, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1001]  = {
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1)
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
            int32_t tmp1;
            double tmp2;
            double tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_ldexpd1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_ldexpd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ldexpd1_purecfma bench acc %la\n", global_bench_acc);
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
