/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd1_u10purecfma.c --function Sleef_logd1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.28e81e136e745p-345, 0x1.7c7c2ca174fa8p-472, 0.0, 0.0,
     0x1.fbc33d868c582p-944, 0.0, 0.0, 0x1.f682bf74bd99dp-693, 0.0,
     0x1.af763b92c7d63p-912, 0.0, 0.0, 0.0, 0.0, 0x1.268bac93b22dcp-176, 0.0,
     0x1.0e12addd0b819p-253, 0x1.2120c69a72f06p-510, 0x1.947070b9bb559p-145,
     0x1.322d7cba4b8e3p-873, 0.0, 0.0, 0.0, 0x1.387a7314b1eap-738, 0.0, 0.0,
     0x1.f61985c50cd4ap-245, 0.0, 0.0, 0x1.58d799e680086p-219, 0x1.93c27882aed53p-33,
     0.0, 0.0, 0x1.738cf8e6b595ep-185, 0.0, 0x1.7881d8466b8fp-703, 0.0,
     0x1.07f9e07d09401p-120, 0.0, 0.0, 0.0, 0.0, 0x1.e60753ce0fb95p-223,
     0x1.e158d84d2642bp-731, 0x1.6e39387ec9649p-445, 0x1.9b3948a8b3208p-687,
     0x1.a42867786bf5ep-131, 0.0, 0.0, 0x1.f3c0461cf39f4p-142, 0x1.6ac30c76a8ee4p-114,
     0.0, 0.0, 0.0, 0.0, 0x1.1176f6c921371p-442, 0.0, 0.0, 0.0, 0x1.48659abf36efp-779,
     0x1.18cd8afb294bfp-857, 0.0, 0x1.991a0bc9d9779p-507, 0.0, 0x1.35732445ff52ep-699,
     0x1.17750b536de21p-151, 0x1.718d54e2bf778p-455, 0.0, 0x1.667bcf335ab77p-1008,
     0x1.636cad725a1f8p-856, 0.0, 0.0, 0x1.7a733926fb22cp-692, 0.0, 0.0,
     0x1.4a388334d15d1p-629, 0.0, 0.0, 0x1.598540f80a38cp-890, 0x1.fee30222e62eap-933,
     0.0, 0x1.0e477ddf89f79p-828, 0x1.0864bbbd523b7p-615, 0x1.9a875fe272fdcp-16, 0.0,
     0.0, 0x1.7324296614f6cp-728, 0x1.bd85e7fb632c1p-866, 0x1.d735657eca286p-756,
     0x1.ab4f8ff35f9c8p-646, 0x1.a4278e9a8a0eep-328, 0.0, 0x1.3b2c6ed387a4ap-472,
     0x1.661f489c97ce5p-272, 0x1.29dd1d7fa2105p-981, 0x1.0b5f12390b70cp-605, 0.0,
     0x1.320af8d3e9db5p-708, 0x1.386a2b0cb4918p-570, 0.0, 0x1.9d43cdf6cb79p-16,
     0x1.109dd2ff88e99p-956, 0x1.f1f2eb46a8e32p-330, 0x1.6e795f6fbc7cep-702, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3824cebd829a4p-588, 0.0, 0.0, 0x1.c1a97016e4d7ap-112,
     0x1.527c96ab0354bp-442, 0.0, 0x1.f36ac752fddd8p-740, 0.0, 0.0,
     0x1.e1e9670a6f80dp-728, 0x1.86c2ba58cab8bp-487, 0.0, 0.0, 0x1.c16cd5aa7bf9cp-614,
     0x1.2661a3a084f74p-794, 0.0, 0x1.26f5c0fe9c72bp-186, 0x1.80e7f941f717bp-866, 0.0,
     0.0, 0.0, 0x1.f5fcadc777f0cp-780, 0.0, 0x1.6db13f18004d8p-787,
     0x1.c60fc93af2ceap-147, 0.0, 0.0, 0.0, 0.0, 0x1.3feecffd105d4p-969, 0.0, 0.0,
     0.0, 0x1.11fa97421fecbp-419, 0x1.7d8b17dc1c529p-453, 0x1.2db64453437bfp-497, 0.0,
     0.0, 0.0, 0x1.e782bf045125bp-394, 0x1.56f2b2e9f10f8p-542, 0x1.1565a6cb608ep-290,
     0x1.09da206f0f366p-703, 0x1.9ed902fb54659p-233, 0x1.2b899aae34311p-615,
     0x1.d3d07e63a2e18p-382, 0.0, 0.0, 0x1.2c3d4a6485fa1p-508, 0x1.d087cc4a546a5p-209,
     0.0, 0x1.c30133c29ba79p-510, 0.0, 0.0, 0.0, 0x1.8c96fb2e0071bp-214, 0.0,
     0x1.470af868ba72ep-327, 0x1.9aeb65f863d67p-433, 0.0, 0x1.b641280bfab5ep-784, 0.0,
     0.0, 0x1.0f679962c2643p-838, 0x1.42342f85777dep-813, 0x1.c3265d8dd0568p-920, 0.0,
     0x1.a9e8a395904a8p-338, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3d8be0ca1f42cp-65, 0.0,
     0.0, 0.0, 0x1.8df6f095bb719p-222, 0.0, 0x1.ba5510e0f6639p-502,
     0x1.0d8916cf07903p-791, 0.0, 0x1.74f9fc4a64adap-779, 0x1.3e8d509ed4f92p-17,
     0x1.69f7e107bc935p-28, 0.0, 0x1.e506e36de1d8dp-361, 0x1.482931afe181ep-419,
     0x1.a227562f82356p-146, 0.0, 0x1.f4ec5239ea801p-813, 0x1.b5fd5ea67156cp-411,
     0x1.1c096a9154c5cp-789, 0.0, 0x1.dfb503e2c4ddep-706, 0x1.a5a5400648756p-169,
     0x1.8ba791b6d46e9p-626, 0x1.8ac8b04da909ep-759, 0x1.516213cf48d86p-418,
     0x1.016a28cf8fc06p-136, 0x1.4305302ad6261p-531, 0x1.73e26e7dba6aap-172,
     0x1.b519a20b4cb77p-842, 0x1.4fc7b139915f2p-863, 0.0, 0.0, 0x1.29debae01b51ap-978,
     0x1.d4d5417b17176p-857, 0.0, 0.0, 0x1.30b3e66bcf32dp-120, 0x1.80e2e8488e55dp-630,
     0x1.183846dad40d5p-482, 0.0, 0.0, 0.0, 0x1.6d53e914783b3p-892, 0.0, 0.0,
     0x1.bf31f67bdc551p-845, 0x1.b8a9ee1781a09p-655, 0.0, 0.0, 0x1.1a2453a5f886ep-12,
     0.0, 0x1.685538301fd18p-608, 0.0, 0x1.3e00c27cbef88p-701, 0.0,
     0x1.f0e9d61e3c808p-331, 0x1.f352537959b25p-931, 0x1.79720f5ff373dp-236, 0.0,
     0x1.b0efb65b04cb9p-132, 0.0, 0x1.d32eaaad1feap-716, 0.0, 0x1.504b99abaf7dep-619,
     0.0, 0.0, 0x1.458059e986117p-56, 0x1.e8aec4e19884fp-838, 0.0, 0.0,
     0x1.0faf341ba8743p-435, 0.0, 0x1.52fab1f2e2744p-962, 0x1.cdb9e5976893cp-80,
     0x1.4b324f91cd04bp-893, 0x1.ca80ffd5b3e2dp-87, 0x1.4a374c4055c56p-733,
     0x1.e8a631a86d0f6p-385, 0x1.034cba91032cbp-477, 0x1.189a904e2fcbbp-312, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.60492c62df5b3p-565, 0x1.215c0b124d865p-934,
     0x1.50413ef1f7f6dp-624, 0x1.7c8043b18f248p-531, 0.0, 0.0,
     0x1.8e13f6fb00e8ap-1013, 0x1.d992790543855p-190, 0.0, 0x1.c05a348534b6bp-748,
     0x1.c2712a6677ea6p-1016, 0x1.68d5c4116cbcp-87, 0x1.88f6962cc646ep-1005, 0.0, 0.0,
     0x1.4fcc3132401ebp-554, 0x1.8b7b69e2f516ep-609, 0.0, 0x1.77d4eedd398b7p-877,
     0x1.52111bc142833p-756, 0.0, 0x1.81d1fdcb86437p-906, 0.0, 0x1.f08d827c41a39p-541,
     0x1.0c66be44daf26p-78, 0.0, 0x1.ffc4193b8bb6ap-435, 0x1.0f82f1a6da02cp-845, 0.0,
     0x1.0516c4c04a81dp-181, 0.0, 0x1.1cdd8d7ccd6f2p-688, 0x1.2f9da4ac61a72p-273,
     0x1.57c09829be63p-1017, 0.0, 0.0, 0x1.d8cdce0e8ad38p-781, 0x1.903365d997e75p-328,
     0.0, 0.0, 0x1.c55f67e20e0ffp-877, 0x1.dbb24a9ad584cp-166, 0.0,
     0x1.997814f240858p-454, 0.0, 0x1.3e5e19ad21aap-210, 0x1.202aa1cb6ce09p-569,
     0x1.2ad8e9d8816cbp-725, 0.0, 0x1.482a58c3a2341p-755, 0x1.d97a2ae1a6f28p-833,
     0x1.7edfb8b22374p-596, 0.0, 0x1.4daf39b255c17p-1014, 0x1.2d6592b523ee8p-809,
     0x1.e053f8e7ef214p-865, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b5c294e8e67a7p-210, 0x1.7525d34797643p-136, 0.0, 0x1.bff0ed92bc951p-339, 0.0,
     0x1.4884e727ea6d5p-242, 0x1.f0a5e19ffb8e8p-973, 0.0, 0.0, 0x1.6b063166998eep-455,
     0x1.683cf96f5e178p-1017, 0x1.038bfb9a85f21p-258, 0x1.ca01ed91efebp-504,
     0x1.e9002f9b7773p-88, 0x1.615d72d259de6p-825, 0.0, 0.0, 0.0,
     0x1.1ab7b993cd4fdp-26, 0x1.5d4e7ab11671dp-993, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c2ac3ada5ec5p-247, 0.0, 0.0, 0.0, 0x1.4b675ea3ad7ep-604,
     0x1.e97b03af977bap-210, 0.0, 0x1.a2da9a867656ep-414, 0x1.ce9a4d1367027p-149,
     0x1.2942677dda2adp-835, 0x1.fba4e16e08afp-432, 0.0, 0.0, 0.0,
     0x1.18bea4fe51e55p-875, 0.0, 0x1.ffafda3e833f9p-207, 0x1.167d152bb9c09p-1, 0.0,
     0x1.e08d831297b16p-952, 0.0, 0.0, 0x1.de858120c59d7p-311, 0x1.1985808a23334p-136,
     0.0, 0.0, 0.0, 0.0, 0x1.8bd36b57e0239p-67, 0.0, 0x1.78903590de086p-460, 0.0,
     0x1.e33872942b741p-366, 0.0, 0x1.87a93556e4d83p-826, 0x1.a88daed789864p-174, 0.0,
     0x1.a969abc4d4975p-967, 0x1.29e544737056cp-1009, 0x1.393c5aeca1d8bp-233, 0.0,
     0.0, 0x1.a5931cbe19a24p-421, 0x1.e866c4d353db7p-223, 0x1.b660cb8cf07f4p-96, 0.0,
     0.0, 0.0, 0x1.9b67350a7f2a8p-935, 0x1.3c5728cccce73p-9, 0.0,
     0x1.4d7243e48bd5ep-518, 0.0, 0.0, 0.0, 0.0, 0x1.62328146894c7p-222,
     0x1.ad51c6618ed19p-285, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e666fe2641bbcp-326, 0.0,
     0x1.c29399380ea02p-336, 0.0, 0.0, 0.0, 0x1.6dc2d9831f00ap-268, 0.0, 0.0, 0.0,
     0.0, 0x1.c56b848ff70a3p-896, 0x1.7741d0e845c6p-1012, 0.0, 0.0,
     0x1.3c64f561afb52p-267, 0x1.e28b5ecfe05dp-705, 0x1.895ef72d263e8p-867, 0.0, 0.0,
     0x1.402b1bb7da9ecp-83, 0.0, 0x1.15af8adf786d6p-350, 0.0, 0x1.24b17304e7c19p-725,
     0.0, 0x1.e12e4427860fcp-154, 0x1.e04121d847d6bp-703, 0.0, 0x1.ac8f6164f1812p-183,
     0x1.7a4ce330456dfp-83, 0.0, 0x1.c84d7b38fbb1p-917, 0.0, 0.0, 0.0,
     0x1.c4462caf3d7eap-894, 0.0, 0x1.5e98f08bbc34ap-444, 0.0, 0.0,
     0x1.ab512e4e4d07p-759, 0.0, 0.0, 0.0, 0.0, 0x1.dc0eeba9b72fcp-254, 0.0,
     0x1.ed28fd5bb62c8p-84, 0x1.0d79409ad400cp-312, 0x1.8c8bf01a80dabp-163,
     0x1.78c2893571057p-861, 0x1.3ef95396be887p-419, 0x1.31838c8896e7ep-8,
     0x1.12dccbf6a5c63p-419, 0x1.83b3f4478b733p-1, 0.0, 0.0, 0.0,
     0x1.6eb02502af3d1p-164, 0.0, 0x1.72257dd82bcecp-122, 0x1.eb999dda60c5ep-61,
     0x1.7c8932b100db2p-553, 0.0, 0x1.53f5f0a72ddaep-1019, 0.0,
     0x1.b844ae70a147dp-819, 0.0, 0.0, 0x1.2647f59047357p-309, 0.0, 0.0, 0.0,
     0x1.8f2487beececdp-87, 0x1.8cd211b0f915cp-198, 0.0, 0x1.cee95ce13a2f9p-311, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59664961c0007p-899, 0.0,
     0x1.2c9a5eff7a085p-411, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a50febdf67f28p-631, 0.0, 0.0, 0x1.599f41e5be4ap-776, 0x1.383c943d1b273p-426,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.314ef6fcc9ef9p-59, 0.0, 0.0,
     0x1.40d14281cc21dp-161, 0.0, 0.0, 0x1.e38d9db25e98ep-949, 0x1.91f028fa582p-592,
     0x1.6a83c17953638p-633, 0x1.e430e294ae045p-808, 0x1.fffc939ea1b28p-583,
     0x1.265ab764ca112p-169, 0.0, 0.0, 0.0, 0x1.8cd4f21cffb6ep-878,
     0x1.221caac9b66dfp-491, 0x1.cb07ac1a3be25p-367, 0x1.9075ddcb781d3p-621, 0.0, 0.0,
     0x1.4111fc56acfcap-276, 0x1.6e4dcc040731ap-85, 0.0, 0x1.12a114f95019bp-5,
     0x1.11a448e2f6a77p-70, 0x1.4ff6024a2ebd4p-283, 0.0, 0x1.6746677cb33cep-320, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b513d1c537a8dp-641, 0.0, 0x1.dc6413e8211a6p-715,
     0x1.1731d186bc59dp-283, 0x1.f527dd1ed1ac5p-829, 0x1.13e4b03a36643p-976, 0.0,
     0x1.debf7df5d6a24p-124, 0x1.ebfee02abb3d2p-753, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9728d4aabd69p-883, 0.0, 0.0, 0x1.a272751842b53p-91, 0x1.55a8bc8589099p-154,
     0.0, 0x1.d4cdd8ae41621p-978, 0.0, 0.0, 0.0, 0.0, 0x1.851720a0bbc51p-869, 0.0,
     0.0, 0x1.e3e3a4ac14bf5p-546, 0.0, 0.0, 0x1.3a5e1ff439b4ap-640,
     0x1.fa09464fac567p-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d311e19549ffdp-158,
     0x1.e8b6afcbd27ebp-802, 0.0, 0x1.5b81fb7b3e154p-17, 0x1.5397c9120e534p-805, 0.0,
     0x1.9e5db560827cbp-52, 0x1.e06aafe6ad1c2p-934, 0.0, 0x1.a185baf722dfep-646, 0.0,
     0.0, 0.0, 0x1.5dd79cfb254bep-966, 0.0, 0x1.209170cf53903p-258,
     0x1.bd2f20d7aa226p-1016, 0x1.400114ea0e73p-873, 0.0, 0x1.0824fc447417ep-953,
     0x1.f3952a3afbccep-752, 0.0, 0.0, 0.0, 0x1.ec4e9aa2c69bbp-615,
     0x1.44f8799f8c5cp-629, 0.0, 0.0, 0.0, 0x1.723fc618367bcp-381, 0.0, 0.0,
     0x1.11e34a97ebe12p-984, 0x1.b4b8d1505e6cdp-759, 0.0, 0x1.8786a2f3660e2p-983,
     0x1.447780e991178p-990, 0x1.a16d465f0a707p-458, 0x1.4d2127f7bf6bbp-165,
     0x1.b4d606af34b4dp-427, 0x1.7a3f19848808fp-613, 0.0, 0x1.28ed49bfd1035p-903, 0.0,
     0.0, 0x1.204d1d72cc5cbp-596, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4a785143e51fp-694,
     0.0, 0x1.12dd11c54688ap-650, 0x1.60fd7c0d42e9fp-652, 0x1.7891e2908c297p-709, 0.0,
     0x1.3b1b982e506a8p-86, 0x1.d2ca110061851p-502, 0.0, 0x1.7a8b556ba072bp-283,
     0x1.b8707b381bc7bp-568, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85e36eb2e5e3dp-607,
     0x1.c2f717a13566dp-920, 0.0, 0x1.3a8dcc28cb6afp-91, 0.0, 0x1.bc7710b49ce3fp-398,
     0.0, 0x1.68affbb1ec4f4p-788, 0.0, 0.0, 0x1.23a22f28a23b4p-565, 0.0,
     0x1.2cc7782004f45p-677, 0.0, 0x1.842588ed9d64ap-388, 0.0, 0x1.873e453e42de4p-551,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8bc005aeb4577p-657,
     0x1.009256c67039bp-142, 0x1.99a15f1af80b2p-496, 0x1.2afe03d422a43p-753,
     0x1.3291aa84b08a4p-950, 0x1.db59d57dffef3p-789, 0.0, 0.0, 0x1.f5e9333571882p-942,
     0.0, 0x1.197f44f7f777ep-65, 0x1.d6db2798a7891p-285, 0.0, 0x1.069e5bd90de3bp-41,
     0x1.dd45d4c3c8dfep-234, 0.0, 0.0, 0.0, 0x1.f1003399ab70dp-542, 0.0, 0.0, 0.0,
     0.0, 0x1.866222ef21c36p-868, 0.0, 0x1.bce02ccdd3bdp-365, 0.0,
     0x1.a2ee4d7a1ebcdp-528, 0x1.6da384b7562d3p-842, 0.0, 0x1.6b8f6226397cep-987, 0.0,
     0.0, 0x1.7282ac75d098bp-143, 0.0, 0.0, 0.0, 0x1.95dce611a022ap-868, 0.0, 0.0,
     0x1.5cc29ff14b3d2p-509, 0.0, 0x1.94eef6193ffb6p-154, 0.0, 0.0,
     0x1.6f56de425428fp-579, 0x1.8a0d363264684p-514, 0.0, 0x1.6985f27c620f2p-575, 0.0,
     0.0, 0x1.4e04ee9d206ddp-265, 0x1.c1bb1eb2f050dp-750, 0x1.dacf603f63325p-618, 0.0,
     0.0, 0x1.76fe2745d9c5p-519, 0.0, 0x1.62e982acbe2bap-910, 0x1.31a072e086959p-974,
     0.0, 0x1.4513cb4089f13p-930, 0.0, 0x1.e625118e32bbp-286, 0x1.4ca450d909a1bp-378,
     0x1.aeaf434602c71p-807, 0x1.4d58116073a6dp-708, 0.0, 0.0, 0.0, 0.0,
     0x1.b3bda40ce7f5ep-323, 0x1.23b7589facb3ep-448, 0x1.d56fc04075dc7p-539,
     0x1.c2d328770c427p-131, 0.0, 0.0, 0.0, 0x1.8df7229b00c27p-920, 0.0,
     0x1.96c06e94b02bbp-466, 0.0, 0x1.cdf90c94882f5p-476, 0x1.21e8eaa68ce0bp-928, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.38381bca58d5ap-603, 0x1.8dce08a9d1688p-972, 0.0, 0.0,
     0x1.139e8175f9a56p-178, 0x1.13861e06778e9p-600, 0x1.b08dbffe495f6p-306,
     0x1.6e4e4a75552cbp-382, 0x1.134b71f26d92p-329, 0x1.993650fc81cd3p-544, 0.0,
     0x1.ff0394ea1c1e5p-26, 0x1.29a91ac6c494bp-935, 0.0, 0x1.3494e1d61cedcp-1003, 0.0,
     0x1.55ee60e361717p-107, 0x1.79723c6c47ccdp-194, 0x1.aaff9e8872e1cp-500,
     0x1.9439fde51cdcbp-116, 0.0, 0x1.227ca26560356p-370, 0x1.db480c927beaep-115, 0.0,
     0x1.88bc154d0c0fp-383, 0.0, 0x1.c24b1b5566077p-208, 0.0, 0.0,
     0x1.121914628db11p-843, 0x1.8b6477653b06p-58, 0.0, 0.0, 0x1.68823f13f8e73p-626,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.486f693d48964p-492, 0x1.6fc1d7086ce9dp-254,
     0.0, 0x1.a339ec721193fp-270, 0.0, 0x1.567cfbf798de8p-171, 0.0,
     0x1.609c567ba37d4p-123, 0x1.5990b0ca155d5p-237, 0.0, 0x1.16bc940b48683p-760, 0.0,
     0.0, 0.0, 0.0, 0x1.183f2ac340858p-152, 0x1.a903b4fdb4453p-113, 0.0,
     0x1.c3689b68d0a77p-565, 0.0, 0.0, 0.0, 0x1.34243f82212d7p-781, 0.0,
     0x1.98c4c822a71b8p-764, 0x1.db9fbd751e993p-998, 0x1.696b110d47e8ap-384,
     0x1.f8cc6eb6799b2p-879, 0x1.01889e3e74cecp-830, 0x1.f9c4362c8f57ap-156,
     0x1.1f1e18ac81379p-255, 0x1.4b589771bc8ddp-736, 0x1.3c4c13f690005p-844, 0.0,
     0x1.7c839ef345021p-50, 0x1.03ddaf7a6823fp-490, 0.0, 0.0, 0.0,
     0x1.61c8d8afe62cbp-991, 0.0, 0.0, 0.0, 0x1.f72eeebefaecep-193,
     0x1.2a44776ba0f7p-253, 0.0, 0.0, 0x1.ecbe5f8c4fb36p-253, 0x1.5cbf267025985p-872,
     0x1.d33803f769632p-205, 0x1.a5de8c1f2e47ep-336, 0.0, 0x1.589903a6ac3d7p-662, 0.0,
     0.0, 0.0, 0x1.da2d3c654d7c9p-147, 0.0, 0x1.18e9492374fbfp-834,
     0x1.328d3c6419e42p-303, 0x1.45b5a0834bcf5p-203, 0x1.ea910c673eabbp-286, 0.0,
     0x1.865a6710a14d5p-953, 0.0, 0.0, 0x1.8c82bc507f98p-817, 0x1.ba09d9d229dddp-976,
     0.0, 0x1.012291b00590bp-725, 0.0, 0.0, 0x1.7383a01c11516p-86, 0.0,
     0x1.4316f60257f59p-294, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98318f4dfb891p-331, 0.0,
     0x1.111bf93c9e719p-797, 0x1p0, 0.0, 0.0, 0x1.1c416c710facep-13, 0.0, 0.0,
     0x1.b9b0707540de3p-563, 0.0, 0.0, 0x1.49e46ea159cbdp-985, 0x1.02f3c50cb9bf5p-355,
     0.0, 0x1.4ef028b9a8acfp-36, 0x1.e3f6ea11495d7p-263, 0.0, 0x1.b2f1b4ca0382dp-757,
     0.0, 0x1.40e06ea21e1dap-204, 0x1.30be6c2e5cfc1p-20, 0x1.4a0dbc19be97cp-687,
     0x1.ee7875076e85fp-372, 0.0, 0x1.900416ad9018ep-71, 0x1.c35df3d149891p-617, 0.0,
     0.0, 0.0, 0x1.520dd05beeae6p-131, 0x1.809ae455e904p-893, 0x1.6ccd58ffe33ap-668,
     0.0, 0.0, 0.0, 0x1.2e01c1bc220cdp-844, 0x1.68de588d545p-276,
     0x1.f218a5606cd9p-197, 0.0, 0x1.b7bdab1697391p-741, 0x1.fb9d97060f077p-703, 0.0,
     0.0, 0.0, 0.0, 0x1.2c1c0b72e43p-778, 0x1.de560b477553p-903,
     0x1.eebf49a9fa91ap-116, 0x1.4e3eb11394325p-130, 0x1.684afa40e88f2p-584,
     0x1.61bee0281428bp-524, 0.0, 0x1.ac73b973edf46p-550, 0x1.579bdc05a6af2p-862,
     0x1.fb9f8dfca4d18p-671, 0.0, 0.0, 0.0, 0.0, 0x1.911289cb945c1p-965, 0.0,
     0x1.6bd514eb898bep-629, 0.0, 0.0, 0x1.396a8dfd1ffe8p-400, 0.0, 0.0, 0.0,
     0x1.28069182b97b2p-440, 0x1.22f895882b8a6p-724, 0x1.382ace14f2cbbp-722,
     0x1.995ea9ac80e1bp-848, 0.0, 0.0, 0x1.1fd5fede3c875p-719, 0.0,
     0x1.a412f95aea1e8p-350, 0.0, 0x1.28e93edf624d5p-982, 0x1.5525e2e3c8e7p-789, 0.0,
     0x1.6d44f0b873df2p-914, 0x1.19c47930e2c21p-33, 0.0, 0x1.b91b403c2c89ep-534,
     0x1.de2e6c5b40f4fp-193, 0.0, 0.0, 0.0, 0x1.99964bf722be2p-887,
     0x1.394599fb51d81p-870, 0.0
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
            tmp1 = Sleef_logd1_u10purecfma(tmp0);
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
    printf("Sleef_logd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logd1_u10purecfma bench acc %la\n", global_bench_acc);
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
