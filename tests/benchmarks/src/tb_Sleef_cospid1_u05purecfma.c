/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospid1_u05purecfma.c --function \
 *     Sleef_cospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.a9e784c29c12cp-956, 0x1.3b1f271736027p-352, 0.0, 0x1.1c49e71578366p-1017,
     0.0, 0x1.c31f39011198ep-1002, 0x1.f782354488471p-273, 0x1.b18a180ac379p-854,
     0x1.7ec5767eaf418p-610, 0.0, 0x1.7aa46a53026b3p-189, 0.0, 0x1.dc4865b2b9963p-169,
     0.0, 0.0, 0x1.750b08bb2bb7dp-910, 0.0, 0.0, 0.0, 0x1.5ba8b756782fbp-879,
     0x1.cf26afcf5dfcdp-194, 0x1.951c6ad2a3252p-267, 0x1.2158fd0c4dec1p-341,
     0x1.04431739849c2p-720, 0x1.81be0022b6e17p-734, 0.0, 0x1.4b96de66659f9p-610,
     0x1.86a257b983921p-757, 0.0, 0x1.1dbcd374bc4dcp-398, 0.0, 0.0,
     0x1.2f2d78e335e77p-214, 0.0, 0.0, 0x1.80ba4da9cd4f8p-22, 0.0, 0.0, 0.0, 0.0,
     0x1.25b41caa3a7eep-1013, 0x1.5fee8228f0913p-686, 0x1.f77850f807985p-409, 0.0,
     0.0, 0x1.641ff769c5942p-848, 0.0, 0x1.866f669e02426p-791, 0.0,
     0x1.6258c4ad86cd7p-75, 0x1.e747c345f073p-575, 0.0, 0x1.27224dac44ff1p-583, 0.0,
     0x1.68a8f2dc8cdd5p-212, 0x1.d6af044485945p-678, 0.0, 0x1.140f3c4028578p-858, 0.0,
     0.0, 0x1.10d7f13208ab3p-633, 0x1.aeb61da947465p-865, 0.0, 0x1.e75450aac00dcp-128,
     0x1.a4fc6ce9752aep-520, 0x1.9c92e76f7b3aep-700, 0.0, 0.0, 0x1.72554c000dbd1p-565,
     0x1.8c25f905b2057p-858, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c4166223fdap-348,
     0x1.eb2d82dac808fp-329, 0x1.e60d5ad042338p-947, 0x1.a57fe556008c7p-695, 0.0,
     0x1.75788af1032a7p-765, 0x1.2e813861aba98p-7, 0x1.85378250940a9p-3,
     0x1.8ac5fea015edap-729, 0x1.ed14ccc620ca3p-11, 0.0, 0x1.a0b916e701647p-829,
     0x1.fd5abb40a93e9p-1014, 0.0, 0x1.93967d69df051p-918, 0x1.b499b204cc209p-957,
     0.0, 0x1.6ebc6474adfep-362, 0x1.08449457ff858p-981, 0.0, 0.0, 0.0,
     0x1.851e2506ca66ap-419, 0x1.59c474f5d006p-749, 0.0, 0x1.6aaa025bd89c6p-946, 0.0,
     0.0, 0.0, 0x1.9adf336bb5509p-889, 0x1.46a20e7a90bf7p-426, 0.0,
     0x1.4ea95c50ef2f5p-603, 0x1.26760fbba4d01p-170, 0.0, 0.0, 0.0, 0.0,
     0x1.875f6bc317bccp-802, 0x1.77f9b8b31db0cp-548, 0x1.ca74b7121dfe1p-900, 0.0,
     0x1.e230166ddc5f1p-899, 0x1.28e635714bc88p-120, 0x1.19582b039cf33p-383,
     0x1.8da4db13c5d6bp-239, 0.0, 0x1.0d06523349a9ap-604, 0x1.e4212de109b54p-296,
     0x1.cc2906e6731eap-408, 0.0, 0.0, 0.0, 0x1.72ac5db595791p-388, 0.0,
     0x1.92f960b38f337p-452, 0.0, 0x1.63c74a673d549p-293, 0x1.c8372e1dc9535p-206,
     0x1.26cebf0a4bfaep-246, 0x1.e67ac6dba628dp-473, 0.0, 0.0, 0x1.a5b9547b18afep-20,
     0.0, 0.0, 0.0, 0x1.0f785ab3d23f2p-575, 0.0, 0.0, 0.0, 0x1.9ddd55cd4d1a6p-767,
     0x1.63d026d9a35d9p-198, 0x1.ecb2406923421p-945, 0x1.9fe87c32ca5a8p-949,
     0x1.c40c15341c8e3p-698, 0x1.ea25d38c09ec8p-748, 0.0, 0x1.ca938085ac101p-275, 0.0,
     0.0, 0.0, 0x1.96ffea69d6764p-147, 0.0, 0.0, 0x1.69e455a937aa5p-853,
     0x1.e0bf2c4f7eacp-603, 0x1.71b453c00de7ap-825, 0.0, 0x1.8c56fda0e6008p-1002,
     0x1.44bc9382b0935p-542, 0x1.feee6b7b9e859p-562, 0x1.34cf8292e29f5p-462, 0.0,
     0x1.d173ecac01b4fp-947, 0x1.c10985a877402p-725, 0x1.571d124cbee23p-154,
     0x1.70f1c70851283p-366, 0.0, 0.0, 0.0, 0x1.cb86f6cc06a87p-190,
     0x1.7ddd7d4ee5de1p-800, 0.0, 0.0, 0x1.e3be6e31a6aafp-510, 0x1.d3f59e400343cp-489,
     0.0, 0.0, 0.0, 0x1.94a6e03409f0dp-323, 0x1.977bd9d8dbcd5p-1014,
     0x1.98c141b542abap-876, 0x1.372c87e4e8cbbp-405, 0x1.53b858f56a9c9p-37,
     0x1.a3d225315b338p-864, 0x1.132e2971b8402p-265, 0.0, 0x1.327e0119a476ap-836,
     0x1.dbf00e17de5e4p-817, 0.0, 0x1.a13423b364d36p-527, 0x1.2941a6655435dp-784,
     0x1.e748dc59b39b1p-840, 0.0, 0.0, 0x1.4475900d45495p-907, 0x1.66012a6110effp-987,
     0.0, 0.0, 0x1.fa33bd17b9a0ap-654, 0x1.51172b7855156p-623, 0.0, 0.0, 0.0,
     0x1.b13e2edb586afp-1006, 0.0, 0x1.108bda5dafd5bp-930, 0.0, 0.0,
     0x1.7bb24d05f63dbp-676, 0x1.bb616ce575ccfp-745, 0.0, 0.0, 0x1.b8972661771dep-586,
     0x1.5bf1b0041220fp-942, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db9fe85dd79cap-679, 0.0,
     0x1.1978ed9e29368p-364, 0.0, 0.0, 0.0, 0x1.6e363d13384fep-969, 0.0, 0.0, 0.0,
     0x1.50af04e8786edp-268, 0.0, 0x1.91e2439d5bf37p-699, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3a53a591b5f42p-358, 0x1.088f8d87d6ec8p-86, 0.0, 0.0, 0.0,
     0x1.ec98a3362b094p-613, 0x1.f9c1c6af597d5p-68, 0x1.4f85ff95a1d06p-153,
     0x1.056297578f6e9p-329, 0.0, 0.0, 0.0, 0.0, 0x1.b587eed5a0a64p-563, 0.0, 0.0,
     0x1.6d7c374466318p-596, 0.0, 0x1.41ecc51002266p-560, 0x1.f33aaa0ff443fp-392, 0.0,
     0x1.69a723348ae4bp-393, 0x1.8411c3440503bp-224, 0.0, 0x1.4b6689dd9254bp-222, 0.0,
     0x1.4d9ba92db4304p-607, 0.0, 0.0, 0.0, 0x1.a025758231cabp-622,
     0x1.e77236749f15bp-401, 0x1.0c7d75a5e0772p-368, 0x1.5b9709ece7d7ep-1015,
     0x1.e18f42555272dp-703, 0x1.1b15941b1ba5ep-137, 0x1.6217d7baf1274p-493,
     0x1.42b5ba9148db5p-41, 0.0, 0.0, 0x1.4da49820d39cap-435, 0x1.3787010684cf4p-1004,
     0x1.d665e6337d7d6p-314, 0x1.ccc627d927605p-714, 0.0, 0.0, 0x1.4e6bbf0e5a4bfp-56,
     0x1.aa24a9bdc2596p-95, 0x1.51ac09f4046f4p-221, 0.0, 0x1.09d4b3dff7b21p-484, 0.0,
     0.0, 0.0, 0x1.30ffabdf99d59p-55, 0x1.fad9d26eeb12p-988, 0.0,
     0x1.9040bc40adfe5p-783, 0.0, 0x1.b61d107078b3fp-682, 0.0, 0.0, 0.0, 0.0,
     0x1.5c96e42c6e1fap-405, 0x1.bc4aa44f590e7p-69, 0x1.a3b89f0704c4p-910, 0.0,
     0x1.683a1e027383fp-838, 0x1.4babc4a189f4fp-870, 0x1.fc23a766ee2e2p-553,
     0x1.21769e69ebb35p-534, 0.0, 0x1.8d28bb7f3a8e5p-806, 0x1.58851e579d46fp-699,
     0x1.35e44be242804p-219, 0x1.bd373fcae1a0ep-660, 0.0, 0x1.e820a27ead469p-301,
     0x1.ffb22dbbe4b8fp-287, 0.0, 0x1.51f3aa4aaa434p-176, 0.0, 0x1.d806c10a7fd58p-532,
     0.0, 0.0, 0x1.292837c90f5b7p-253, 0x1.f75c3961e90a5p-379, 0x1.9104f364ba011p-988,
     0x1.413f928bd2f0dp-412, 0.0, 0x1.baefd5297c7a1p-941, 0.0, 0x1.c1a450741d85p-6,
     0x1.e3042a277a749p-317, 0x1.c39fb46a490c6p-656, 0x1.3962b511e148cp-312, 0.0, 0.0,
     0x1.0ee94c2add0a1p-944, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7d44982abb6fp-333, 0.0,
     0x1.b47ff084d56a1p-7, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60ed34f115281p-696, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3c95be07d7139p-354, 0.0, 0x1.7746f36ce0b2fp-919,
     0.0, 0.0, 0x1.6b133d78ca0b2p-916, 0.0, 0x1.308dba1e5827ep-436, 0.0, 0.0, 0.0,
     0x1.b34df486a446ep-766, 0.0, 0x1.d8213356aa79bp-874, 0.0, 0.0,
     0x1.d032f98dab139p-216, 0.0, 0.0, 0x1.d6d476cff2cfap-818, 0x1.4c1d2835803f5p-612,
     0.0, 0x1.ff20e92740d1dp-778, 0x1.a79f837d296afp-561, 0x1.81a77a9b96e79p-640,
     0x1.aec346fc8f528p-840, 0x1.285128f2ff4f7p-296, 0.0, 0.0, 0.0,
     0x1.3a5ffa094839fp-370, 0x1.c5499f4f24e4cp-677, 0x1.c644dd955e614p-238,
     0x1.1011948a7fcf3p-414, 0.0, 0x1.96b2cfe5a43dp-450, 0.0, 0.0,
     0x1.347e1354491b4p-734, 0.0, 0.0, 0x1.709f31b9f0e7cp-269, 0x1.dadd57fbaf212p-238,
     0.0, 0.0, 0x1.bcc552408329ap-815, 0.0, 0.0, 0x1.ce92315d1c911p-766, 0.0,
     0x1.132f975c6f229p-411, 0x1.17576d09278a4p-27, 0.0, 0x1.d0df1668a26c8p-456, 0.0,
     0x1.631cc3f212492p-281, 0x1.3ec590fef5859p-622, 0.0, 0x1.f34af8d1ae01ap-836, 0.0,
     0x1.728f30b80afd1p-45, 0x1.892036ecd0543p-119, 0x1.7e5cf01448f56p-725,
     0x1.29c402362de96p-497, 0.0, 0x1.4759a3adb2896p-541, 0x1.61a0b9b633d0fp-202,
     0x1.ef5f8b62af035p-407, 0.0, 0.0, 0.0, 0x1.2c36f9d632b5cp-785, 0.0,
     0x1.8552701d6eedap-993, 0.0, 0.0, 0.0, 0x1.d630c53611d0ep-174,
     0x1.1ae45ba0c72efp-648, 0x1.eff450813e174p-360, 0.0, 0x1.fabc8a475489p-572, 0.0,
     0x1.4a75609fa31f7p-240, 0x1.f22820d205158p-471, 0x1.73e5d49df9b5fp-413, 0.0, 0.0,
     0x1.d1068e2727b7dp-547, 0.0, 0.0, 0x1.bf14db84f1d1dp-547, 0.0,
     0x1.567bbc278507bp-797, 0x1.74cfb96f1419p-704, 0x1.5e591ba8fb0afp-15,
     0x1.142b9c21e4b31p-332, 0.0, 0x1.69109b49c95acp-543, 0x1.23e1d14edb89p-534, 0.0,
     0x1.1a16436dee663p-625, 0x1.a553660e5247dp-522, 0.0, 0.0, 0x1.8f4dbe318c00cp-214,
     0x1.9acb5f16c5ff6p-251, 0x1.c1c7185294a79p-353, 0.0, 0.0, 0.0, 0.0,
     0x1.ba071079ee1efp-156, 0x1.1cde0e353b775p-771, 0x1.024ee8bb7c5bbp-46, 0.0,
     0x1.7eee9ac1635cp-869, 0.0, 0x1.4c955d397636cp-476, 0.0, 0x1.2e1161511f62p-377,
     0x1.3de29b67a471p-549, 0x1.b168ec6ea9616p-140, 0.0, 0.0, 0x1.89fd47d4747c1p-462,
     0.0, 0x1.c5ab70dfeb024p-610, 0.0, 0x1.424368a662511p-801, 0.0,
     0x1.52a75dadfa8f4p-23, 0x1.4199d9e5dc1afp-730, 0x1.c1af245ccdf02p-8,
     0x1.2ca910fd772e7p-892, 0x1.7f9eefb145554p-897, 0x1.df346db4ea5adp-776,
     0x1.aab982098054bp-429, 0.0, 0.0, 0x1.66c6e7a7c54a9p-541, 0.0, 0.0,
     0x1.0eff60a378046p-240, 0.0, 0.0, 0.0, 0.0, 0x1.79ccb289f1d31p-514,
     0x1.fa3cea797c026p-631, 0.0, 0x1.c21358b16c864p-868, 0.0, 0x1.f60cc70496197p-837,
     0.0, 0.0, 0.0, 0.0, 0x1.927da9a145bf6p-797, 0.0, 0.0, 0x1.52314e7e6b996p-213,
     0x1.05727b9ff1464p-1011, 0x1.b7395dc6e40a7p-99, 0.0, 0x1.e1416ae0bde6ap-414,
     0x1.9b0207280b124p-973, 0.0, 0x1.5051456a0e74ep-6, 0.0, 0.0,
     0x1.b7a199b044327p-91, 0.0, 0.0, 0.0, 0x1.a4b36a24bc75bp-198, 0.0,
     0x1.27bb48546ed78p-763, 0x1.17d9f589cae8cp-942, 0x1.a932ab5bb6fa6p-197,
     0x1.7667f19d4adep-859, 0.0, 0x1.43b3924163a7p-24, 0.0, 0x1.34bc436cbccadp-428,
     0x1.00e572c0a8786p-311, 0x1.7053a476155dp-13, 0.0, 0.0, 0x1.680b0b9fb59e4p-128,
     0x1.26bfe36c858d1p-346, 0.0, 0.0, 0x1.6c3190cc9c4f5p-11, 0.0, 0.0, 0.0, 0.0,
     0x1.463ba30efb4c2p-1006, 0.0, 0x1.1156b0f9a719p-588, 0.0, 0.0, 0.0,
     0x1.09df1c3a5bb07p-232, 0.0, 0.0, 0.0, 0.0, 0x1.2d9d0c25f9fdep-534,
     0x1.5f39ca63310acp-694, 0x1.b46cb5b108b6bp-867, 0.0, 0x1.a76bf19731182p-872, 0.0,
     0.0, 0.0, 0x1.39a7db1ef6fa6p-533, 0.0, 0x1.dfdb9319b3054p-948,
     0x1.496474862372bp-873, 0x1.4f54552427ae3p-455, 0.0, 0x1.9630aa3bb7d9ep-838,
     0x1.060ce981ae49ap-175, 0.0, 0.0, 0.0, 0x1.892d7f7192979p-55,
     0x1.f5234b5237acdp-186, 0x1.a1c060032bb83p-300, 0.0, 0x1.e9015751591bcp-512,
     0x1.a92835abcc47p-353, 0x1.dcf95c5724a07p-768, 0.0, 0x1.d6ea90f7756c1p-648,
     0x1.7098964f66e42p-417, 0x1.21aae39af052p-565, 0x1.c178011199f4dp-850,
     0x1.f9063690b32f9p-75, 0.0, 0.0, 0x1.7674aa26b31b6p-234, 0x1.b91478aae7978p-914,
     0x1.1b6673471c54p-880, 0.0, 0x1.c0e037d5f9b8ap-243, 0x1.86d8d53bb489dp-566, 0.0,
     0.0, 0.0, 0x1.2a8d9ed9825e3p-81, 0x1.b974d7640ab2ep-119, 0.0, 0.0, 0.0, 0.0,
     0x1.24438648da74ap-938, 0x1.d66b67ed04d61p-674, 0x1.9e29820cd471dp-660, 0.0,
     0x1.5fef045c0b8edp-19, 0.0, 0x1.90d0016e2acbdp-452, 0.0, 0.0, 0.0, 0.0,
     0x1.e30c9a2c3ab13p-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39d13805583bap-834,
     0.0, 0.0, 0.0, 0x1.85694b0faa088p-484, 0x1.439977b4be2bfp-899,
     0x1.b4154226392eap-202, 0.0, 0.0, 0.0, 0x1.206497fe785cap-520, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9231310e1c3b1p-901, 0.0, 0x1.7eaef4aeb25dap-525,
     0x1.76aa70af112cdp-461, 0x1.f3f526eab5e05p-446, 0.0, 0x1.76ca390e135edp-294, 0.0,
     0.0, 0.0, 0.0, 0x1.7f4582179fa59p-993, 0x1.8d545a7efdd64p-268, 0.0,
     0x1.30ee6cf1adb87p-588, 0.0, 0x1.c3068d26cedd6p-995, 0x1.d992a1ffcf6d7p-74, 0.0,
     0x1.b9d5465ebe42ep-141, 0x1.d1844667b3a1dp-57, 0.0, 0.0, 0x1.bb8467b45a51dp-746,
     0x1.20e9a864e297ep-149, 0.0, 0.0, 0x1.d51b0f7fcdafap-931, 0.0, 0.0, 0.0,
     0x1.5e14912e67878p-748, 0x1.8e3507e06fa26p-741, 0.0, 0.0, 0x1.9b2f47d80b481p-151,
     0x1.eb9e3cf0291dfp-42, 0.0, 0.0, 0x1.503b99b47e8d8p-972, 0.0,
     0x1.4b0e511e88865p-467, 0.0, 0x1.330e1483d48ebp-29, 0x1.edab481b75697p-191, 0.0,
     0x1.3ec956f355cfep-541, 0x1.7311998704bfbp-309, 0.0, 0.0, 0x1.6680c6f13657fp-760,
     0.0, 0x1.4e6d549afcfc6p-253, 0.0, 0x1.833830f389c2bp-432, 0x1.7932dac574cdp-161,
     0.0, 0.0, 0x1.3b9aa5b2bfe83p-108, 0x1.0d96637646491p-383, 0.0, 0.0, 0.0, 0.0,
     0x1.1d9c3cb0a5bebp-11, 0x1.991a21d07cd12p-788, 0x1.e3b4c8ab9c5bfp-192, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ef2ac4c68e1f5p-644, 0x1.3843ea5734375p-328,
     0x1.1bbb35f3a4cc5p-892, 0.0, 0x1.e6930f2a5941fp-112, 0.0, 0x1.cdb192fdab6e9p-399,
     0x1.c6a77864cff3fp-711, 0.0, 0x1.69aa58ef57f6p-268, 0.0, 0.0,
     0x1.2644efba0695dp-892, 0.0, 0.0, 0x1.1aa329175b03cp-691, 0x1.d92365c22026ap-816,
     0.0, 0x1.4735735e80d74p-471, 0x1.7a1f148c87ecbp-733, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d8bd23aeee8edp-44, 0x1.fdfe18eaa7dap-678, 0x1.ca30e800240d4p-1008, 0.0,
     0x1.c79a545982bdap-63, 0x1.3bab2ae32bf9dp-872, 0.0, 0.0, 0.0,
     0x1.170d9c65a61efp-869, 0x1.8a49e3992ae7fp-365, 0x1.302a525b8625ep-357, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.80f4dd62c5897p-958, 0x1.f7fce43481c43p-279,
     0x1.9ad06a2b5c9d3p-892, 0.0, 0.0, 0x1.fcfbf8dd1f797p-720, 0.0, 0.0,
     0x1.1d9419328fb81p-414, 0.0, 0.0, 0x1.502d2ca72fbbap-579, 0.0,
     0x1.daec402ac8501p-141, 0.0, 0.0, 0x1.50eb971a6f3cp-589, 0x1.c8c566c8ba60cp-187,
     0x1.62d3f95977134p-793, 0x1.69d8513fdccdfp-788, 0.0, 0.0, 0.0,
     0x1.60e0b75a56bdfp-924, 0x1.25d2ab8cf9807p-245, 0.0, 0x1.1e964f9f0983bp-482,
     0x1.c38bc193257aap-132, 0x1.6d03ed60d1456p-840, 0.0, 0.0, 0x1.152efdeaf31d4p-154,
     0.0, 0x1.faf3debf6a0bp-271, 0x1.c6a37905f84c8p-385, 0x1.fd499f234a58ep-503,
     0x1.b1d42d1e5544bp-1013, 0.0, 0x1.4869c6e0fa4f6p-320, 0.0, 0.0,
     0x1.ceb2514250c03p-370, 0.0, 0x1.1ce3055a9d8f2p-973, 0x1.5739c520f4633p-622, 0.0,
     0x1.90c6efdfe72b3p-162, 0.0, 0x1.3145ec6c8d6e4p-895, 0.0, 0.0, 0.0, 0.0,
     0x1.6dc0df3e07bf9p-1003, 0.0, 0.0, 0x1.5ada8ec791ebfp-54, 0x1.46c54fb016533p-78,
     0x1.c2625242a55afp-389, 0.0, 0x1.89363e85f1aafp-580, 0x1.879b254c6d2cp-497,
     0x1.198670b36ecacp-149, 0x1.895170f880ee9p-426, 0x1.46fe27ac798c9p-861,
     0x1.872bce05844c2p-994, 0x1.4cbd94f1d2fcdp-568, 0x1.a9ad4d72ce713p-879,
     0x1.937590858444fp-917, 0x1.18c6c73bc2328p-575, 0.0, 0x1.5c800f5d45b6cp-673, 0.0,
     0.0, 0.0, 0x1.82f7331048d2ep-302, 0x1.25c8d1726770ep-861, 0.0, 0.0,
     0x1.fa7f41c4ced19p-854, 0.0, 0.0, 0.0, 0x1.734f6a8b81cf8p-76, 0.0, 0.0, 0.0,
     0x1.410279642a3e5p-705, 0.0, 0x1.08e483ca4799p-153, 0.0, 0x1.b93f19dd12e27p-212,
     0.0, 0x1.d24efb19834a9p-304, 0.0, 0x1.9eec6f071a4f5p-319, 0.0,
     0x1.20b7091c805dbp-484, 0x1.5ecf728a01b6fp-815, 0x1.7ef30af951e99p-834,
     0x1.f847abe554abep-11, 0.0, 0x1.e2f744c8ad2b3p-798, 0x1.609b2411e6aap-5,
     0x1.40213d343351ep-778, 0.0, 0x1.587b6e0f0c3a5p-501, 0x1.80ed489c92ae2p-447, 0.0,
     0x1.cadd4971ab09bp-657, 0x1.63f44460ebe6ap-623, 0.0, 0x1.0b540ac8ab10dp-395, 0.0,
     0x1.5222430452de8p-832, 0x1.d9f5de64689a6p-429, 0x1.e24ed03eb7c82p-711,
     0x1.90d0d7e555a2bp-520, 0x1.4459b22452365p-286, 0x1.ad81ec455bfccp-799,
     0x1.7a2987f534a93p-195, 0x1.1d4eddb487661p-932, 0.0, 0.0, 0x1.c558dc7fc20f3p-726,
     0x1.6af988ba9f026p-635, 0x1.cea1511341177p-967, 0x1.3f0a2f170b47p-429, 0.0,
     0x1.22573ea7e99bbp-498, 0.0, 0.0, 0x1.c8a0b08297364p-194, 0.0, 0.0,
     0x1.8dfc247cd8322p-246, 0x1.17231c1e452dap-667, 0x1.e7529e2962d4bp-896, 0.0,
     0x1.5f0929f8ca3c4p-332, 0.0, 0x1.abbb1614cb18cp-975, 0.0, 0.0,
     0x1.009cff7a22e5dp-447, 0.0, 0x1.a5ec40f69b5a6p-290, 0x1.45d0340ad98abp-784, 0.0,
     0x1.a43f50011f0b8p-82, 0x1.96c9799996ec9p-383, 0.0, 0.0, 0x1.12049692b95a8p-246,
     0.0, 0x1.3d7fd3a237659p-270, 0.0, 0x1.ada6f09ff0a2ep-708, 0x1.2549bfbbded51p-79,
     0x1.fe820fa3b7296p-519, 0x1.769b3a77a4b9p-756, 0x1.27e04aa4b903dp-891, 0.0,
     0x1.ff42515351738p-752, 0x1.606a51140bb7cp-462, 0.0, 0x1.7ad5473fe7096p-496, 0.0,
     0x1.32f3547a2ae95p-22, 0x1.f177d160188d2p-213, 0.0, 0x1.2959dedaee818p-925, 0.0,
     0.0, 0x1.67161148f13a8p-282, 0.0, 0x1.010ffff59a4b6p-67, 0.0,
     0x1.8effb9ce88566p-710, 0.0, 0x1.67c0a2b65da17p-969, 0.0, 0x1.301c6c7313a2dp-247,
     0x1.0834a38356577p-632, 0x1.a609f49dca771p-579, 0x1.050bde980db13p-558, 0.0, 0.0,
     0x1.638b92abb61c7p-817, 0.0, 0x1.a94435ca7a341p-195, 0x1.ba54d2d379p-177, 0.0,
     0.0, 0x1.574b4619b5b68p-269, 0.0, 0.0, 0x1.6d60d9a53cc0dp-983,
     0x1.23d34bc15d86fp-577, 0x1.bf18fbf095cc9p-889, 0x1.aa41e5b2bd18ap-356,
     0x1.e0a16768d8d6ap-218, 0.0, 0.0, 0x1.c969ca2c1d4p-56, 0.0, 0x1.999f9f5808101p-6,
     0x1.1eecfb76e0138p-85, 0x1.6ce90a950cf23p-751, 0x1.9c32872b69fa2p-293,
     0x1.df30c88840eb4p-229, 0x1.4611d9bcdab07p-744, 0.0, 0.0, 0x1.386a5954fb203p-363,
     0.0, 0x1.ff903358b398dp-35, 0.0, 0x1.743ee61ba96d7p-30, 0.0, 0.0, 0.0,
     0x1.1d0d6e0adb2f2p-514, 0.0, 0x1.a61fee55a5266p-170
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
            tmp1 = Sleef_cospid1_u05purecfma(tmp0);
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
    printf("Sleef_cospid1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cospid1_u05purecfma bench acc %la\n", global_bench_acc);
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
