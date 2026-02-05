/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsd1_purecfma.c --function Sleef_fabsd1_purecfma \
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
     0x1.4a388717f1235p-279, 0x1.5630c793476edp-362, 0.0, 0.0, 0.0,
     0x1.6de0c770b9276p-162, 0.0, 0x1.6fe9588ed02cdp-268, 0x1.0894e1dbcfc56p-110, 0.0,
     0.0, 0x1.6f46ab2a10bb7p-508, 0x1.a29e63ac8f8b7p-782, 0x1.541a64a5cb0fbp-760,
     0x1.a794cebae0aaap-850, 0x1.fcc5213dee29dp-780, 0x1.63fee13f37912p-188,
     0x1.371349e7a66cp-721, 0x1.59e86b93accfep-378, 0.0, 0x1.a92198157dac7p-605,
     0x1.24904c99d733ep-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f39c620a3d73p-897,
     0x1.3bd56fcbdb88cp-542, 0.0, 0x1.af2aba1b7b16bp-416, 0.0, 0.0,
     0x1.f46560781cad3p-307, 0.0, 0x1.c6749382fa8bep-371, 0x1.596c6dc8a9e26p-94, 0.0,
     0x1.9a17a8b441fdep-971, 0.0, 0.0, 0x1.5bae319b7fe5dp-829, 0.0,
     0x1.562f3c3b5bc05p-629, 0x1.a0bf8bdc43432p-380, 0x1.9c1ef26216de4p-961, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5db054ade1aaep-777, 0.0, 0x1.fdb063bb24a9bp-647,
     0x1.8713b0b116cb4p-672, 0.0, 0x1.1f2f6e4f17c19p-313, 0x1.46d98629db263p-851,
     0x1.f99a0b2388729p-794, 0x1.3f6fcc13f1943p-684, 0.0, 0.0, 0.0, 0.0,
     0x1.6ea2def2c1aecp-980, 0x1.73df89168225cp-211, 0x1.dae0c3a590981p-550, 0.0,
     0x1.848fda86eff93p-474, 0x1.de8d8a3d35918p-453, 0.0, 0.0, 0.0, 0.0,
     0x1.21910b46a0264p-719, 0x1.2ddfc279f389ap-1013, 0.0, 0.0, 0x1.2d7f5c916173p-388,
     0.0, 0.0, 0.0, 0x1.280dd292d6e1dp-448, 0x1.e5e232e84f16fp-972,
     0x1.2fdd4fea59a43p-240, 0x1.4fbd3f81f8b39p-856, 0x1.ee5833e3a7ed5p-496,
     0x1.f15088c214a17p-681, 0x1.8fd9393271cf3p-907, 0x1.51f03986a4b1ap-68,
     0x1.6e1747ac7e0fbp-595, 0.0, 0.0, 0x1.9d335cd7eb06dp-909, 0.0,
     0x1.48ec54a7dbdb5p-173, 0.0, 0.0, 0.0, 0.0, 0x1.b2194fce9970ap-826, 0.0,
     0x1.f6a9763ed1ba6p-211, 0.0, 0x1.12b9cf5969234p-422, 0x1.ac006ba73dabep-640, 0.0,
     0.0, 0.0, 0x1.c905007f09dc1p-183, 0.0, 0x1.0058b6a5490ecp-770,
     0x1.6cc2072fb6761p-545, 0.0, 0x1.4f13851b56113p-916, 0.0, 0x1.28623d3f6d967p-150,
     0.0, 0.0, 0x1.30ec20c1bf043p-646, 0x1.a7f8b23905e51p-951, 0x1.686101b7b4234p-800,
     0x1.4789c92aad646p-666, 0x1.bdc2da19f6aeap-97, 0.0, 0x1.943ff17416a18p-609, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fa0b90cf7c7aap-177, 0x1.da9b7a233737ap-1007,
     0x1.d39f8adff43b6p-232, 0.0, 0x1.e5b49780afd68p-599, 0x1.43590b14550fap-718,
     0x1.e5b60d05923c7p-739, 0.0, 0x1.7940a6c272934p-231, 0.0, 0x1.2a64f66dd07c4p-632,
     0.0, 0.0, 0.0, 0.0, 0x1.fa39bd9c8df67p-472, 0.0, 0.0, 0.0,
     0x1.a4e5caa6757cbp-164, 0x1.c9bc544ebb766p-945, 0x1.0dac8aad6b7bcp-592, 0.0,
     0x1.18fdd54939288p-1008, 0x1.76d493573b2b6p-539, 0.0, 0x1.38482e99221cfp-499,
     0x1.ea661dd4f7b19p-906, 0x1.af35b08021353p-977, 0x1.fa270e7df7942p-821,
     0x1.95116ddc736a4p-333, 0x1.f52fedfaf3c86p-260, 0x1.b98d086161591p-633,
     0x1.92ad05e38097p-78, 0.0, 0.0, 0x1.37a435ef9698fp-140, 0x1.0186e3831fa7ep-62,
     0x1.46571f3e1bf88p-898, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4cc321a6f66f4p-477, 0.0,
     0x1.749a643f100f9p-739, 0x1.7f4916f7dedc4p-886, 0.0, 0x1.b995878f8aa39p-606,
     0x1.a25bab706d579p-518, 0.0, 0x1.3d7b8120c62a5p-467, 0.0, 0x1.4cd6e8f0072bep-677,
     0x1.581542dc3e09cp-152, 0.0, 0.0, 0x1.bf0949538a8aap-447, 0.0, 0.0, 0.0, 0.0,
     0x1.ea450517d52dcp-957, 0.0, 0x1.4873257f7515ap-913, 0.0, 0.0, 0.0, 0.0,
     0x1.0bf34143b768cp-421, 0.0, 0x1.d6a53d3163725p-657, 0.0, 0x1.d63d7d0a74874p-737,
     0x1.fe9eb84a432adp-870, 0.0, 0.0, 0.0, 0x1.2ece9debb81bbp-328,
     0x1.c8ad30decb931p-980, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6cd133f0224c6p-872, 0.0,
     0x1.96244b27ca1c1p-778, 0x1.435d159327d51p-453, 0.0, 0.0, 0.0,
     0x1.93ee1f42db6a7p-16, 0x1.319eb073a59fcp-169, 0.0, 0x1.91b5600f3828dp-660,
     0x1.37deb3c19fdd1p-72, 0.0, 0.0, 0x1.911590d6fef99p-269, 0.0,
     0x1.11a1dc358cff9p-230, 0.0, 0.0, 0.0, 0x1.c33e29a4b8c77p-613,
     0x1.0caa4f4fb5159p-652, 0.0, 0.0, 0x1.e35fd324e8bd5p-881, 0x1.a04a91b24d40ap-631,
     0x1.017299e18fcb5p-143, 0.0, 0x1.381d63b1877d3p-232, 0.0, 0x1.23aa9e4157e0cp-194,
     0x1.9f4276d9cf53cp-285, 0.0, 0x1.9509c728ed375p-765, 0.0, 0x1.407e08c13ddb2p-344,
     0x1.b7c844e27237ep-635, 0.0, 0.0, 0x1.60b5388277d82p-93, 0x1.c6529a27ed905p-203,
     0x1.4e5551df86da7p-105, 0x1.aa893a09beefbp-715, 0.0, 0x1.75958dab58024p-534,
     0x1.d91902e3665b6p-599, 0x1.5381d79f2b0f9p-958, 0x1.8601028491727p-988,
     0x1.5a5997f48ed91p-1007, 0.0, 0x1.6b35aac7a2a1p-87, 0.0, 0x1.ec540baabc48bp-206,
     0.0, 0x1.45924b7a83942p-450, 0x1.b3c52ac3ad636p-416, 0x1.9ff871eced9e1p-526,
     0x1.d9512d2a840d4p-947, 0.0, 0x1.7c987a8e79dddp-781, 0.0, 0.0,
     0x1.621b5aa26d967p-129, 0x1.fa4fbb7c3a95bp-313, 0.0, 0.0, 0.0,
     0x1.159c1397f7ff6p-939, 0x1.75c34e2779f2p-662, 0.0, 0.0, 0.0,
     0x1.87161881e0623p-349, 0.0, 0x1.74a7abcb6a696p-714, 0.0, 0x1.f49d594e4472bp-824,
     0.0, 0.0, 0.0, 0x1.5c6c4ea7f5ff8p-745, 0.0, 0x1.86cfaf325c8c2p-375,
     0x1.dc320b6f3ea0bp-927, 0x1.dcc9d503f0263p-629, 0x1.25f2140a3738ep-641,
     0x1.82d0bc8550f2p-516, 0.0, 0.0, 0.0, 0x1.d28b8212bb96bp-815, 0.0, 0.0, 0.0,
     0x1.fbb2daa245163p-165, 0x1.dafc5b0f212d4p-214, 0x1.ef5743d2fcd01p-764, 0.0,
     0x1.8e2834b037ab5p-158, 0.0, 0x1.c984ea7ebdba3p-699, 0x1.3fd140c80108fp-165, 0.0,
     0.0, 0x1.e42cc2073ac7bp-95, 0.0, 0x1.1f90f8bb572dap-346, 0.0, 0.0,
     0x1.17d20b718e0edp-26, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b429e49e916ap-753, 0.0,
     0x1.2dfdcd5f2126p-505, 0x1.adf433bfb49dap-148, 0x1.755e771c48842p-334, 0.0, 0.0,
     0x1.3d0333d3e0fd4p-1020, 0.0, 0.0, 0.0, 0.0, 0x1.def6bc1db15fp-719,
     0x1.8ffc71ad5809dp-424, 0x1.8f2097ca721d3p-63, 0.0, 0.0, 0.0,
     0x1.4bde1b687a5dfp-570, 0x1.9942054ad0c1dp-599, 0.0, 0x1.98f842bc694cp-303,
     0x1.16369473300f8p-664, 0x1.babc4d7295e4ep-708, 0x1.1b69407e1fdd8p-644, 0.0, 0.0,
     0.0, 0x1.389887626be3bp-395, 0.0, 0.0, 0x1.985701d1b7f45p-917, 0.0,
     0x1.c4c6f6b62f2d6p-866, 0.0, 0x1.f5da1493ae6f2p-597, 0x1.aed7e94ef8cap-71, 0.0,
     0.0, 0.0, 0x1.6ee08e7f198d8p-927, 0.0, 0.0, 0.0, 0.0, 0x1.fd949bfbe79a1p-881,
     0.0, 0.0, 0.0, 0.0, 0x1.0c42a29d85b0cp-298, 0.0, 0x1.786c5e55179d3p-313, 0.0,
     0x1.9ac3f31ecff92p-244, 0.0, 0x1.2e83a20cfac27p-584, 0x1.3e03b7869cd98p-823,
     0x1.340046b631577p-520, 0x1.bceffa41a7141p-980, 0.0, 0x1.36d0e324187eap-940, 0.0,
     0.0, 0x1p0, 0x1.809d9ce80f7cp-984, 0x1.84abbb48d67fcp-505, 0.0,
     0x1.dcfb760544cb4p-634, 0x1.d3ea8800e927ep-249, 0.0, 0.0, 0x1.46beb67dc2f9fp-903,
     0.0, 0.0, 0.0, 0.0, 0x1.d30d3e894d17dp-299, 0x1.5a46d4485784p-264,
     0x1.6c73785eebf12p-736, 0.0, 0x1.95b53728c390ap-1009, 0.0,
     0x1.dfcc75d5946aap-316, 0x1.1fa6b91d28f23p-495, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1d2eb1c8dc81p-773, 0.0, 0.0, 0x1.d5b5658b27389p-217, 0.0,
     0x1.7883d4443e1ffp-351, 0.0, 0x1.b168f25bdd0cap-58, 0x1.7df6e7eeb87dfp-474, 0.0,
     0.0, 0x1.d4673a5db713ep-51, 0.0, 0x1.95eabef02760fp-439, 0.0, 0.0, 0.0, 0.0,
     0x1.73d321f9979acp-468, 0x1.945ef4efaba4ep-921, 0x1.2c320054b1c4p-137, 0.0,
     0x1.ba9f0360efbc4p-518, 0x1.d2e74e5886202p-8, 0x1.d4c1980f8d206p-756, 0.0, 0.0,
     0x1.c21260da5dc98p-598, 0x1.dcd1487ce67f7p-158, 0.0, 0.0, 0x1.88912b3e5913dp-216,
     0x1.b0ea8ec3df5e6p-595, 0x1.061852207b9ap-97, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.421aca85ff7abp-32, 0.0, 0x1.e1e37b7ec1cb6p-519, 0x1.52d2122ef0b8cp-15,
     0.0, 0x1.68fbf47070ad5p-751, 0x1.d90b3702e96b8p-867, 0x1.eff5143098d19p-30, 0.0,
     0x1.fc74100807d0dp-914, 0x1.011bd69932436p-818, 0x1.fd10c293b83a2p-210,
     0x1.b5df17a11907bp-646, 0.0, 0x1.3817f8cf4804cp-609, 0x1.43108ac557682p-639, 0.0,
     0x1.8bf5020b0b5a2p-846, 0x1.1ba03dc8cbdb4p-535, 0x1.be75fc87a2805p-155,
     0x1.7db70510f02bbp-86, 0x1.e052a20080b92p-952, 0.0, 0.0, 0.0, 0.0,
     0x1.c624f7f8ff913p-324, 0x1.904b299250b5dp-427, 0.0, 0x1.9e9f281b9ec49p-306, 0.0,
     0.0, 0x1.cf9678ea8605p-30, 0x1.dd24afcd7f677p-306, 0x1.3178185f0bc7p-121,
     0x1.682e2ed9ddb1cp-979, 0x1.ed6418b63cc0ap-23, 0.0, 0x1.8bc65df684376p-979, 0.0,
     0x1.e31a756a8ba86p-698, 0x1.6d8bcb013b244p-516, 0x1.1069f89e0b698p-204,
     0x1.13c8715ae156dp-37, 0.0, 0.0, 0.0, 0.0, 0x1.910602e83f05p-601, 0.0, 0.0, 0.0,
     0x1.8bc6e54bb1278p-944, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9ac9ab9a4c0ep-836,
     0x1.0ca2ebc538405p-678, 0.0, 0x1.ecd549a4493e8p-722, 0x1.985331946121dp-836, 0.0,
     0.0, 0x1.9f12f6134298p-259, 0x1.329deb3ce4564p-281, 0x1.2d4d94b63856cp-198, 0.0,
     0.0, 0x1.fca01b40c1014p-67, 0x1.15e736b98547cp-190, 0x1.253a5897daac8p-230, 0.0,
     0x1.9f38dc1c4f493p-830, 0x1.00551ecfd0369p-88, 0x1.b74aff44e7fa4p-450, 0.0,
     0x1.ff883af83de0bp-299, 0.0, 0x1.02be59c667361p-618, 0x1.d0c35806f4582p-712, 0.0,
     0.0, 0x1.591a3f5dd788ep-387, 0x1.7b13e0797f4e2p-155, 0x1.d79ee7dee702dp-493,
     0x1.e4fabb468235cp-261, 0x1.d6fee552165ep-711, 0x1.e3fce3959b48bp-1000, 0.0,
     0x1.ba4e415e55615p-777, 0x1.67e5fcee135b8p-596, 0x1.135ab74f25d99p-176, 0.0,
     0x1.a792e54890245p-249, 0.0, 0x1.7dbab2d1deb3cp-40, 0x1.ac22258f562f7p-164,
     0x1.96302b3dbda61p-582, 0x1.22fc3845238d3p-790, 0.0, 0.0, 0x1.1284df358ca88p-503,
     0.0, 0.0, 0.0, 0.0, 0x1.061cc1a62c1ddp-275, 0x1.25189b0c932fdp-207, 0.0,
     0x1.c55a81049d5c2p-898, 0.0, 0x1.13c3d039e4e3fp-42, 0x1.333387a06307cp-854,
     0x1.92ee85fa0af66p-448, 0.0, 0.0, 0x1.66b3d7524f70ep-669, 0.0,
     0x1.60ff6873a7acp-564, 0x1.7a7c3bfcf7bf1p-204, 0.0, 0.0, 0x1.fc1d811c61f55p-95,
     0.0, 0.0, 0.0, 0x1.80baa73bf1367p-173, 0x1.78640fd2cf54ep-262, 0.0,
     0x1.2c7e0223026a9p-688, 0x1.b0ebb03f0e112p-867, 0x1.a2860679310c4p-402,
     0x1.02385d3d7bd8ep-657, 0x1.825cdaa3cd81ap-800, 0.0, 0.0, 0.0, 0.0,
     0x1.a53671c73927cp-577, 0.0, 0.0, 0.0, 0x1.24f3d7561bbc8p-228, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3ce590d2ecd8dp-1009, 0.0, 0.0, 0x1.90501c5c5fd23p-700, 0.0,
     0x1.915d6265aac46p-1007, 0x1.416e3e9921ed5p-16, 0.0, 0x1.ec5663c7ac3dbp-450,
     0x1.9c1e132b5edccp-456, 0.0, 0x1.999247f72484ep-1000, 0.0, 0.0, 0.0,
     0x1.83069939f8fb6p-211, 0.0, 0.0, 0.0, 0.0, 0x1.420783a3c3687p-136,
     0x1.e06c61c2406b2p-50, 0x1.0fcf67e1b584fp-447, 0x1.1965a9858c9eap-581,
     0x1.488a34a293038p-399, 0.0, 0.0, 0.0, 0x1.359f16e8f802ap-182, 0.0, 0.0, 0.0,
     0.0, 0x1.54ca96ba40601p-110, 0.0, 0.0, 0x1.16e306e4ded77p-886,
     0x1.acd8c31cc63f1p-109, 0x1.e9321a8474d07p-394, 0.0, 0x1.8b0450ffbccfep-535, 0.0,
     0.0, 0.0, 0x1.bf8835c35671fp-906, 0.0, 0.0, 0.0, 0x1.15fae9d5fbb46p-202,
     0x1.3517c1b52df62p-972, 0x1.e4a4eb6bca4b4p-454, 0.0, 0.0, 0.0,
     0x1.7564c5dc9c159p-1007, 0x1.2d135ffd57488p-714, 0.0, 0x1.1eb0cec8a3d61p-299,
     0x1.2c8ef3b349db7p-235, 0.0, 0.0, 0x1.703e9ae23f539p-472, 0x1.13dd5a00d71c4p-280,
     0.0, 0.0, 0x1.3fd2bbeceb9a6p-602, 0.0, 0.0, 0.0, 0x1.1b94de814600dp-981,
     0x1.02f384db42d85p-301, 0.0, 0x1.3ed11bac6e762p-557, 0.0, 0.0,
     0x1.e10daaccfe21fp-390, 0.0, 0x1.eb1f024ce244fp-63, 0.0, 0x1.3691ac84a2ebp-547,
     0.0, 0.0, 0x1.e50e35080e62cp-614, 0.0, 0x1.a53f0bd4052e5p-87, 0.0, 0.0,
     0x1.243196fa81de9p-900, 0x1.e06dfbdf40176p-612, 0.0, 0.0, 0x1.2ca656c30923ap-392,
     0x1.f5c36b179667ep-291, 0.0, 0.0, 0x1.7a6e8d0280a1p-918, 0.0, 0.0, 0.0,
     0x1.c7a533a9c0113p-1011, 0.0, 0x1.0d5d5ae9709c2p-106, 0x1.1eecba3fbc698p-824,
     0.0, 0x1.be3aa7aa2cee3p-476, 0.0, 0x1.3aec7ebb2ec7bp-252, 0.0, 0.0,
     0x1.0287cd6162019p-931, 0.0, 0x1.a4384a9c20501p-965, 0x1.f2195e81d6a5dp-1006,
     0x1.eb41e76f52147p-857, 0x1.f41da5e290606p-655, 0.0, 0.0, 0x1.5af0c4dca44d8p-382,
     0x1.c05917b8e214ap-277, 0x1.c096ef9fdf63dp-360, 0.0, 0x1.4b02db81f22p-865,
     0x1.fcfc82c9f8b9dp-329, 0x1.cd0fcf5a3e435p-156, 0.0, 0.0, 0.0, 0.0,
     0x1.ca8f2336ec707p-817, 0x1.f3cf8a1a03c45p-733, 0x1.a0c96ac1aa87cp-391, 0.0,
     0x1.5183031a2517fp-927, 0.0, 0x1.0cccdf8d93232p-28, 0x1.07aecacc54e93p-638, 0.0,
     0.0, 0.0, 0.0, 0x1.578ee5497dc0cp-181, 0.0, 0.0, 0.0, 0x1.c0e6eb69d1876p-888,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c46ba7832e48cp-1010, 0.0,
     0x1.46d1561f59048p-210, 0.0, 0.0, 0.0, 0.0, 0x1.b140ba28d004ap-400, 0.0, 0.0,
     0x1.a7fd13a94c659p-66, 0x1.7b5e32fe5b30ep-926, 0.0, 0x1.5452b55f0b6c6p-323,
     0x1.ea35432151e3p-405, 0.0, 0x1.fb9114cbfba1fp-925, 0x1.5c26a63024f06p-316,
     0x1.8ac6b72962e94p-867, 0x1.c064bf3e39fa5p-270, 0.0, 0.0, 0x1.10d8405e5c62ep-19,
     0.0, 0x1.b6ed31a364dcbp-473, 0x1.576240aa19bcap-826, 0.0, 0x1.daea990f91305p-876,
     0x1.6849963d94de9p-568, 0x1.5d1a77bc8621ap-388, 0x1.a531219cd6f82p-380, 0.0,
     0x1.5a264a0af647cp-332, 0.0, 0x1.7b47a8e261a1bp-528, 0.0, 0.0,
     0x1.8cc7e3c8d7a43p-887, 0x1.8536eb0d13b0ep-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a192d5253fda9p-500, 0x1.ff1e8af3318e8p-802, 0.0, 0x1.55283c5efbd04p-254,
     0x1.a0d688c595e6fp-614, 0.0, 0.0, 0.0, 0.0, 0x1.ad73433b0a05fp-1013,
     0x1.7c175171ab98p-411, 0x1.2b9abfa452772p-613, 0.0, 0.0, 0.0,
     0x1.34da3e5496bdfp-811, 0.0, 0.0, 0.0, 0x1.44e3585142c8ap-834,
     0x1.9851167c482e1p-976, 0.0, 0.0, 0x1.0ac0b175a590dp-621, 0x1.85311ad34556ap-309,
     0x1.78c9331cbdb5bp-838, 0x1.a9bb8b6276cffp-816, 0x1.400812a5479e6p-728,
     0x1.751eba258398p-750, 0x1.b5732eae25d3fp-427, 0.0, 0.0, 0x1.21b4ee89832f6p-836,
     0.0, 0.0, 0.0, 0x1.0b136260fe17fp-928, 0.0, 0.0, 0x1.593489453d0c2p-74, 0.0, 0.0,
     0.0, 0.0, 0x1.b06b6d8b8d63cp-538, 0x1.d388e310d5038p-70, 0.0, 0.0, 0.0,
     0x1.d2fbd27d98e43p-808, 0x1.b67cb9381e7fap-567, 0x1.334c97eeeba6dp-480, 0.0, 0.0,
     0x1.9e7a7f4fa0d0cp-897, 0x1.edc44102f7431p-447, 0x1.dff6869a9e38dp-402, 0.0,
     0x1.15ddf967fdd11p-891, 0x1.63b378b993c48p-569, 0x1.a026bd8eae087p-196, 0.0,
     0x1.ac7b83fcbfcfep-476, 0.0, 0.0, 0x1.effc574d2b82cp-751, 0.0, 0.0,
     0x1.6c3d1aed97cb8p-242, 0x1.81ec15d488ec2p-899, 0x1.8f67fd39bcdc1p-550, 0.0,
     0x1.06d6d9297a2bap-736, 0.0, 0.0, 0x1.61a8ab0a6d34p-157, 0x1.4ab74eb78b821p-99,
     0.0, 0.0, 0x1.4f06365c32399p-807, 0.0, 0.0, 0x1.64b9317f01bbdp-33, 0.0, 0.0, 0.0,
     0x1.4ae53fe4e37dap-924, 0.0, 0.0, 0.0, 0.0, 0x1.a55ab61e55afcp-266,
     0x1.045a15ce2c05cp-328, 0x1.f01339329c369p-189, 0.0, 0.0, 0x1.f9511abda4f2bp-900,
     0.0, 0x1.1b7aea4bbaa5ap-327, 0x1.4b28f4940db31p-667, 0x1.19710d3c606e8p-410, 0.0,
     0x1.832499b3c1adbp-118, 0x1.d2e7673ada75p-191, 0x1.16ce0384621cap-863, 0.0, 0.0,
     0x1.dadc6814538bep-632, 0x1.a8e20af62592fp-117, 0.0, 0.0, 0x1.12bcd554a1f9dp-533,
     0x1.bff91771d319bp-832, 0.0, 0.0, 0x1.30f0d4e4b6022p-148, 0.0,
     0x1.462087b826216p-435, 0x1.07fc8625423d1p-673, 0.0, 0x1.b40e85b9c0c2cp-756, 0.0,
     0.0, 0x1.cfb327c096756p-76, 0.0, 0x1.ba63a81f2e9cdp-491, 0.0,
     0x1.c0c927fb5d73ap-570, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ced5608aebd9p-593,
     0x1.6154c0882ff53p-490, 0x1.267f5d9dbabe4p-24, 0.0, 0x1.e3e9aa28411dbp-482,
     0x1.4232c25b73c1p-118, 0.0, 0.0, 0x1.604bbada7eabfp-482, 0x1.d8e7282be3d94p-148,
     0x1.e653d4f095404p-873, 0x1.5aca6002bb2e9p-644, 0.0, 0x1.15344710a2a8bp-131, 0.0,
     0.0, 0x1.bcf5aa22bb4bp-772, 0x1.c3b2e4620f98bp-698, 0.0, 0.0,
     0x1.a9874e3ba7837p-833, 0x1.dd84f92964ffp-832, 0x1.f778d25ffbe29p-754, 0.0,
     0x1.830f24600a182p-863, 0x1.353b19e83b299p-852, 0x1.1135df01faf21p-205,
     0x1.4cb3f0a9d5618p-112, 0x1.5f8e5f63d897ap-15, 0.0, 0.0, 0x1.5589a032b07f9p-941,
     0.0, 0.0, 0.0, 0x1.d2df2c7632cep-907, 0x1.905b294f835abp-695, 0.0, 0.0,
     0x1.26a91a5c56bdfp-117, 0x1.5401396549f25p-848, 0.0, 0x1.57b1dd6146f5fp-19, 0.0,
     0x1.ca1f6bb1e66b1p-675, 0.0, 0x1.2dd6ca306c7abp-100, 0x1.1518e20a0f066p-445, 0.0,
     0x1.b737525cc9c82p-880, 0.0, 0.0, 0.0, 0x1.a52c2e601c4f3p-543, 0.0,
     0x1.c2e14f26a2772p-712
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
            tmp1 = Sleef_fabsd1_purecfma(tmp0);
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
    printf("Sleef_fabsd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fabsd1_purecfma bench acc %la\n", global_bench_acc);
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
