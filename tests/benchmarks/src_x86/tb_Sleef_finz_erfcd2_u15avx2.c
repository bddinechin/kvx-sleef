/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcd2_u15avx2128.c --function \
 *     Sleef_finz_erfcd2_u15avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.0351996d1017bp-176, 0x1.20616fb4223f3p-944, 0.0, 0.0, 0.0,
     0x1.53bef58a602a2p-358, 0.0, 0x1.288ee0b850a85p-895, 0.0, 0.0,
     0x1.9c4209fc592f1p-898, 0.0, 0x1.01ecdb173013dp-122, 0.0, 0.0, 0.0, 0.0,
     0x1.5c109efcdd79dp-156, 0x1.cbbe6b44be3f3p-948, 0.0, 0x1.852bd840e3f88p-120, 0.0,
     0x1.bf35bb5f6ccdap-549, 0x1.4e5f5869ea4fdp-286, 0x1.e57dcfcf58ef4p-460,
     0x1.851216919843cp-87, 0.0, 0.0, 0x1.f8c29dfb1a365p-395, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c10c112537e9ap-593, 0x1.7d89b2d8c1c0dp-297, 0x1.b795aa53407afp-506,
     0x1.858ca9f67cb0ap-373, 0x1.8ce8dbf5d4da7p-708, 0x1.1351b7cf70e91p-706, 0.0,
     0x1.b90c0f9e17c08p-247, 0x1.bc006d22462c4p-414, 0x1.e8ba471884a38p-747, 0.0, 0.0,
     0.0, 0x1.c3cabd6970689p-762, 0.0, 0.0, 0.0, 0.0, 0x1.219d4326bae79p-670, 0.0,
     0.0, 0x1.6fbd17ad06cf9p-884, 0.0, 0x1.fcf2a94ac98b2p-426, 0x1.253feeaa6e60ep-320,
     0.0, 0x1.634b4c12d3a9p-180, 0.0, 0.0, 0x1.8f9a715f6596dp-734, 0.0, 0.0, 0.0,
     0x1.6df32a1c8311ep-307, 0.0, 0x1.046daddd110c3p-640, 0.0, 0x1.0f4078ce1759cp-252,
     0.0, 0x1.c29f4b28a878bp-32, 0.0, 0.0, 0x1.7b1502a3d87ddp-348,
     0x1.d6c11b2909f91p-579, 0.0, 0x1.c9cd7024166e5p-448, 0x1.5e7bc45bd01a7p-690,
     0x1.f20537c8cb55cp-156, 0.0, 0.0, 0x1.70b5ad0429a74p-763, 0.0,
     0x1.68bf333bb1d52p-425, 0x1.f37e3f9b23e5fp-155, 0.0, 0.0, 0.0, 0.0,
     0x1.55a7f0939fc97p-639, 0.0, 0x1.7f7a0aa5f0c22p-486, 0x1.127189e79f7d5p-840, 0.0,
     0x1.0d4ca215d88ccp-196, 0.0, 0.0, 0.0, 0x1.09c80634c51e4p-532,
     0x1.54fe473690b63p-851, 0x1.1ea40859f4726p-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a2498128b628ap-98, 0.0, 0.0, 0x1.2b3c2d404a27ep-530, 0.0,
     0x1.1d7e7cc2def86p-533, 0.0, 0.0, 0.0, 0x1.d1fe1ea076602p-151,
     0x1.4096e318c3e9p-774, 0x1.0be79eb46b7bep-81, 0.0, 0.0, 0x1.f615895d55af3p-501,
     0.0, 0x1.a4c32617f1ad8p-720, 0.0, 0.0, 0.0, 0x1.2ea50eb0ec42fp-609,
     0x1.fe464c067a489p-698, 0x1.14c56e0d05e72p-832, 0.0, 0x1.0d62c3f60d3eap-482, 0.0,
     0x1.aadb0f102652cp-266, 0x1.aebb133f8a18dp-560, 0x1.461d22a6e93ebp-703, 0.0, 0.0,
     0.0, 0.0, 0x1.8cae23b6df57p-803, 0.0, 0.0, 0x1.e87d9d9930e28p-631, 0.0, 0.0,
     0x1.0336b72b1f84fp-744, 0x1.387b9d27f367dp-988, 0.0, 0.0, 0x1.df7f95e684da1p-597,
     0x1.dc97c4870b63ap-198, 0x1.4f670b3929d2dp-437, 0.0, 0.0, 0x1.f5a9795f4be7cp-12,
     0.0, 0x1.6fd99bc63a56fp-151, 0x1.25749df037f07p-355, 0x1.38da313693296p-88,
     0x1.55d25211933d1p-662, 0x1.a4cf682e57055p-265, 0x1.e0b219eff0ffep-866,
     0x1.807b09e11db46p-784, 0x1.4725a3eaa737p-74, 0.0, 0.0, 0x1.a534f210a2856p-446,
     0x1.05abb1ac495ddp-351, 0x1.d3766fd0330dfp-112, 0.0, 0x1.82b36a47a009p-892,
     0x1.ad436d4c2089fp-114, 0x1.bfdb07bb5e475p-688, 0x1.7bfa33aaa0692p-1021,
     0x1.28d8d55d6cab3p-787, 0.0, 0x1.6f88d017ecd8cp-575, 0.0, 0.0,
     0x1.f17ad1561536dp-206, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ffe00496cc1p-32, 0.0, 0.0,
     0x1.d77db4ecb9ee1p-851, 0.0, 0x1.42e46a41745p-613, 0x1.3251e1e4d98bbp-585,
     0x1.35d577f2e09ep-515, 0.0, 0.0, 0x1.0e02b67a0f9e6p-155, 0x1.e104239032b17p-35,
     0.0, 0.0, 0x1.5986148470798p-602, 0x1.a440a903a983ap-463, 0.0,
     0x1.1091f29fe296bp-1001, 0.0, 0x1.34e33ea1732d4p-458, 0x1.1f1bf3d00f978p-513,
     0.0, 0x1.305137dbe45d3p-519, 0x1.d5ff2e409e3bp-567, 0x1.3f7cf0f2e170ap-508,
     0x1.254fba523ad0ep-666, 0x1.8dc0f10fe29a9p-733, 0x1.3d7af4d752263p-278, 0.0,
     0x1.402841b040c24p-960, 0x1.240e8db4f9f2dp-38, 0x1.51f276b8a323dp-382,
     0x1.789fe4a4eb374p-793, 0x1.dd5752ac3d574p-130, 0.0, 0x1.a9b249caccda4p-1007,
     0.0, 0x1.a2eb080b2b069p-71, 0x1.2ff913381bec4p-185, 0x1.0949fdc3927d3p-1003,
     0x1.fc114755334a7p-264, 0.0, 0x1.af1d691e94a51p-86, 0.0, 0.0,
     0x1.8fb0f9e6f0abbp-958, 0x1.139d502c4b7a1p-763, 0x1.5c2b4794e1d63p-112,
     0x1.756dab1e3d1b1p-112, 0.0, 0.0, 0x1.93f35cbe3cf7bp-909, 0.0, 0.0, 0.0, 0.0,
     0x1.561ce354e272ep-1022, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd8118e0967e2p-579,
     0x1.550e8917a2473p-915, 0x1.7f19bb55c4a2dp-780, 0.0, 0.0, 0x1.aca0468bfcf3cp-727,
     0x1.89d61d000267cp-426, 0x1.acdf6da3e3779p-492, 0.0, 0.0, 0.0, 0.0,
     0x1.5257ac788b313p-335, 0.0, 0x1.359d042aee8f4p-692, 0.0, 0.0, 0.0, 0.0,
     0x1.8d03f4060f6edp-838, 0x1.be9c2c11deb5cp-347, 0x1.e9edf1fa1561ep-92, 0.0,
     0x1.2ef692d7f89c6p-578, 0.0, 0x1.b59427764049ap-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e438cfb9069c9p-668, 0.0, 0.0, 0.0, 0.0,
     0x1.2324da26d9848p-430, 0.0, 0.0, 0x1.d3014da9be0e5p-126, 0.0,
     0x1.0587a28756b4bp-233, 0x1.5181400f91d15p-911, 0x1.15a29d5831d5ep-557,
     0x1.1131be8312c9fp-315, 0.0, 0.0, 0x1.1245c2f4d7b98p-612, 0x1.f3e9338692107p-941,
     0.0, 0.0, 0.0, 0.0, 0x1.36903c9bfde3ap-250, 0x1.e6b361fa16811p-192,
     0x1.8e108b8a34c26p-79, 0.0, 0x1.7e9bfa473d0d7p-261, 0x1.ef31b2cd74c23p-578, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f98be5f57a616p-504, 0.0, 0.0,
     0x1.45afbecf9d044p-585, 0.0, 0x1.f2b23a82dc1c6p-123, 0x1.e92eaeaf29ebep-618, 0.0,
     0.0, 0.0, 0.0, 0x1.9afc508edaf4bp-570, 0.0, 0x1.ee338cfb43dfep-48,
     0x1.e6f25660dd7fdp-850, 0x1.81cd9ef354463p-437, 0x1.8e242ebb7d7bbp-552, 0.0,
     0x1.6876325a02f4ep-452, 0x1.b7ca8c97f349ep-586, 0x1.9c64709efdeb1p-693,
     0x1.a3abbdd1cd7f2p-928, 0.0, 0.0, 0x1.0d526bd0d647fp-959, 0.0,
     0x1.a98909aa3fec5p-381, 0x1.f75da404ce13ep-103, 0.0, 0x1.0fd8eddf83fcep-591, 0.0,
     0x1.f8259583dbbc7p-467, 0x1.3086b7efd5aep-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fd4c7be2a72bp-729, 0.0, 0x1.d52bd6c4b52b8p-954, 0.0, 0x1.5ac7933a0d6f4p-329,
     0.0, 0x1.7b763bbdde8b9p-896, 0x1.cae5ebc96ae48p-30, 0.0, 0x1.a0e5a132e586dp-143,
     0.0, 0x1.253d1ab18d462p-541, 0.0, 0x1.04f65e96a00b6p-864, 0.0, 0.0, 0.0, 0.0,
     0x1.1aabbdbaf8c24p-387, 0.0, 0x1.0748cd80a8cabp-556, 0.0, 0x1.a3948a2eb0c7dp-616,
     0x1.259dac361939fp-471, 0.0, 0x1.63b120145bcf1p-509, 0.0, 0.0,
     0x1.376d9ad8618d8p-533, 0x1.471511daf658ep-490, 0x1.ebb8764c5cd85p-44, 0.0,
     0x1.4528cb3b48163p-788, 0.0, 0.0, 0.0, 0x1.2ebd304e6cfd1p-596,
     0x1.1815a1dc0d28cp-24, 0.0, 0.0, 0x1.61bce9b40bb2fp-344, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8699bc57dda7p-689, 0x1.a94ac0cc23768p-366, 0x1.a1fcb6398e834p-164, 0.0,
     0x1.179ada8a480f6p-677, 0x1.4b795e95fb5c6p-819, 0x1.12b95cb78e6bcp-471, 0.0, 0.0,
     0x1.1d66561af831dp-669, 0x1.c1cbb34885815p-253, 0.0, 0.0, 0.0,
     0x1.1fc2c91736d67p-482, 0x1.93d8193a57f4p-855, 0.0, 0x1.fc067ca623165p-523, 0.0,
     0x1.cb55085fca58p-286, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.016af15d02ddbp-782, 0.0,
     0x1.87938a0aee1cfp-650, 0.0, 0x1.6c999336d95dcp-534, 0.0, 0.0, 0.0, 0.0,
     0x1.d6583c88f9c07p-410, 0.0, 0.0, 0x1.6561d40d8f54fp-70, 0.0, 0.0, 0.0,
     0x1.ab3aedca073c7p-267, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f747079281f5ap-842, 0.0, 0.0, 0x1.ed740883a31bdp-524, 0.0, 0.0,
     0x1.988ec3aca20b9p-474, 0.0, 0x1.b1580e7eca86p-122, 0x1.828160f8d0e11p-1003, 0.0,
     0x1.98a66c537a3cbp-677, 0x1.402425c669b0cp-866, 0x1.3fd61f7b60542p-128, 0.0,
     0x1.33607726fffbbp-1014, 0.0, 0x1.b42aef5d10439p-743, 0.0, 0x1.e3218e1393faep-25,
     0x1.c623446e24e46p-669, 0x1.a8b9a76fca03ep-907, 0x1.f16d0ad348a28p-142,
     0x1.6a491bf0787f7p-644, 0x1.b6761c90c8539p-268, 0.0, 0.0, 0.0,
     0x1.13854011a9094p-590, 0.0, 0.0, 0x1.ceaef7868529ap-911, 0.0,
     0x1.dd624d9688066p-296, 0x1.aa4d184783cf3p-529, 0x1.59e140b625423p-232, 0.0,
     0x1.494eb4a210c53p-217, 0x1.91d20903703d2p-759, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35dcae49b445dp-325, 0.0, 0.0, 0x1.a95b489ffed2bp-103, 0x1.c6275fd48be2bp-17,
     0x1.8194a2ffbc214p-966, 0.0, 0x1.7d82493a09f98p-552, 0.0, 0.0,
     0x1.acc36560e66c5p-178, 0x1.756171a4c4595p-678, 0.0, 0x1.14b1da69edf31p-507,
     0x1.ee099034ff319p-906, 0.0, 0.0, 0.0, 0.0, 0x1.701e3edf3b703p-913, 0.0, 0.0,
     0x1.27f30378521cfp-407, 0.0, 0x1.0a30eb89b8995p-985, 0x1.fafb92b6f325ep-774,
     0x1.e4a33c474b0c1p-321, 0x1.499f65d642d3ep-341, 0x1.130dcf4405cc7p-64, 0.0,
     0x1.a93d780487d48p-617, 0.0, 0x1.bc4c2fe946902p-737, 0x1.84a75d2d79436p-359, 0.0,
     0.0, 0x1.1af9337a6bb27p-373, 0x1.675b7737e71aep-37, 0.0, 0.0, 0.0, 0.0,
     0x1.c4848020e8658p-483, 0x1.b54904b87984p-646, 0x1.610a8110cbe93p-99,
     0x1.1937a96c04476p-24, 0.0, 0.0, 0x1.60500ae5efd54p-759, 0.0, 0.0, 0.0,
     0x1.2de2c44b80d5dp-916, 0.0, 0x1.3b3f2759aa6fbp-212, 0x1.c4e886be0513dp-679, 0.0,
     0x1.b2e0f702d1e1fp-936, 0.0, 0.0, 0x1.cb6a387c8c925p-383, 0.0,
     0x1.bfe19fc65c0fep-907, 0.0, 0.0, 0.0, 0x1.d674cd1a8ebcap-315,
     0x1.ae2324ce0b502p-890, 0.0, 0x1.c6a85cf34c7eep-229, 0x1.92aac3d3ff86fp-749, 0.0,
     0x1.4f1ba9b2f8267p-77, 0x1.fdcd99549c02p-835, 0x1.ec2b2828c4c6ep-348, 0.0, 0.0,
     0x1.2f9a04b0b7763p-708, 0.0, 0.0, 0x1.f50ca2f9024dfp-807, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.daa60599a1899p-400, 0x1.36b8603603baep-780,
     0x1.d0c31d4a859bfp-890, 0x1.6de7ba77dbacap-400, 0x1.d00184e590f3cp-814, 0.0, 0.0,
     0x1.cb48e45445a6ap-180, 0x1.55031dd24f104p-651, 0x1.dcfe978a09a4fp-238, 0.0,
     0x1.bf38d1a87a09p-387, 0.0, 0x1.c462897d66f89p-346, 0.0, 0.0, 0.0,
     0x1.d8040b2c41e1cp-40, 0x1.84b7329941255p-681, 0x1.9b8bb2d25aa3p-942, 0.0,
     0x1.b54564b82f821p-650, 0x1.905590927dec6p-412, 0.0, 0.0, 0x1.6475b2f826e3p-123,
     0x1.a17614ed6ddcfp-754, 0.0, 0x1.fedf5c040a784p-299, 0x1.88d95642a8352p-402,
     0x1.e7693508de07p-753, 0.0, 0.0, 0.0, 0x1.6842560ccac61p-284,
     0x1.d6206155e547dp-104, 0x1.7dfb8dd3cba42p-496, 0.0, 0.0, 0.0, 0.0,
     0x1.105e3311b30f1p-430, 0.0, 0x1.ee7368d052e23p-953, 0.0, 0.0,
     0x1.86264a0b5ffb8p-914, 0x1.68df788762c2dp-709, 0x1.cf80e8bf9b6bcp-818, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.79c69f36cc85bp-920, 0.0, 0x1.3d309fde2eb39p-173, 0.0,
     0x1.e3985abd68243p-304, 0x1.fe20e7a55456ep-401, 0x1.c6b6d3ccb7e1dp-824, 0.0,
     0x1.d458b5da8e3d6p-1008, 0x1.4d000b54fc62fp-237, 0x1.3c3f4dc1e6c2ep-22, 0.0,
     0x1.5573952fea2d1p-365, 0x1.81f352a9fbee9p-228, 0x1.59e74ae933da2p-581,
     0x1.432ed4bfb1288p-479, 0.0, 0.0, 0x1.cfff24776c09ep-823, 0x1.fe8284e0b076p-572,
     0.0, 0.0, 0.0, 0x1.d58be37ddd15ap-2, 0x1.6905b801fbeecp-88,
     0x1.079eafa198a1dp-883, 0x1.250fbb281b08ep-955, 0x1.bc5d7b060f46cp-585,
     0x1.ebd626fd16ee1p-270, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b704b4cc8cefp-911, 0.0, 0.0,
     0x1.5f5813cb48592p-815, 0x1.0e217d9195623p-926, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f8284922105bep-758, 0.0, 0.0, 0x1.50bb96df02e84p-343, 0x1.a92563528c985p-459,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.06303bc537b97p-830, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51b6fad63646ap-884, 0x1.f80d352ca7128p-956, 0.0, 0.0, 0.0,
     0x1.dae3ff4bb1fcp-492, 0.0, 0x1.0ec099e2c65d1p-4, 0x1.25febc465ffaap-401, 0.0,
     0x1.9526fdef2648ap-783, 0.0, 0x1.9be28cdc8fe23p-621, 0.0, 0x1.13d3e61d5be61p-504,
     0.0, 0.0, 0x1.f770c71d3d7b2p-217, 0.0, 0.0, 0x1.37ed5858223d4p-206,
     0x1.080d9d5094316p-470, 0.0, 0x1.fc11012b55e3p-219, 0.0, 0.0,
     0x1.b913c09ff0fadp-514, 0x1.18f0c77cd1e68p-666, 0x1.f4e579f8d7fa5p-781,
     0x1.80118c154c0dep-217, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b5a9b72c728f4p-308, 0.0, 0x1.48616d7999294p-68, 0.0, 0x1.05067d57ff34cp-963,
     0.0, 0.0, 0.0, 0.0, 0x1.872f1cb067009p-826, 0x1.f313f5fe8367p-525, 0.0, 0.0, 0.0,
     0x1.6769b716bd4aep-727, 0x1.98108588428e9p-477, 0.0, 0x1.48ef5c49db5fbp-185,
     0x1.c4e77ee73d5e4p-991, 0.0, 0.0, 0.0, 0x1.c76b3125c957fp-212,
     0x1.5219c0b62c9a8p-753, 0x1.302b2a8eb319fp-807, 0x1.157d701bccb7p-436, 0.0,
     0x1.7ad71a340331ep-26, 0.0, 0x1.24b61ffa65cdcp-36, 0.0, 0.0,
     0x1.9498b14ff17fbp-556, 0x1.44ed5e565d174p-392, 0x1.4c9f99d764b3bp-278, 0.0, 0.0,
     0.0, 0x1.9abcafd307859p-477, 0.0, 0.0, 0x1.fa1fb36859e48p-1011, 0.0, 0.0,
     0x1.ef28b77288da5p-631, 0x1.4f6bd85d6173fp-1008, 0x1.5a838cbd9fec4p-88,
     0x1.082816efcd04cp-689, 0x1.e4522bf1e298cp-510, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11ed287543915p-766, 0x1.3a2f413496c29p-670, 0x1.6e86f62a24e1ap-747, 0.0, 0.0,
     0.0, 0.0, 0x1.4b66caa84277p-908, 0x1.b4b69d8bffb0cp-26, 0x1.5c16f4d24add1p-599,
     0x1.e80d60f44e8e3p-700, 0.0, 0x1.6af2e6caa902cp-871, 0x1.f1339d9cb4718p-298,
     0x1.ed49204d4bd4ap-411, 0.0, 0x1.4023f41a28b33p-781, 0.0, 0x1.c42b876f2d187p-554,
     0.0, 0x1.9100d1f8e4f28p-483, 0.0, 0.0, 0x1.0703ad046c133p-353, 0.0, 0.0,
     0x1.1fd3a4ba651fp-326, 0.0, 0x1.986b94a08db02p-766, 0.0, 0x1.a97c93f87178fp-603,
     0.0, 0.0, 0.0, 0x1.710b11a7f19dcp-342, 0.0, 0x1.5019ec1107ca7p-981, 0.0, 0.0,
     0x1.3bc004cdafde4p-678, 0x1.db9764929fec2p-789, 0x1.89eeb5abbe613p-995,
     0x1.9dbc64ba14fdcp-747, 0.0, 0.0, 0x1.1056f224a02d6p-383, 0x1.da66104cf1249p-532,
     0.0, 0.0, 0x1.19a4f9cf0a4f5p-256, 0.0, 0.0, 0x1.f3dd013f9d5bap-428, 0.0, 0.0,
     0x1.4abfb54afc07dp-254, 0x1.60c616325fa27p-176, 0.0, 0x1.405ec6e8ee0e3p-186,
     0x1.07042f23829cfp-334, 0.0, 0x1.5d918526de61ap-123, 0.0, 0x1.8fbf37c6ac595p-211,
     0.0, 0.0, 0x1.17567dab1754cp-221, 0x1.15e49386e8b91p-357, 0.0, 0.0, 0.0,
     0x1.41917591439ccp-465, 0x1.0e21afb8f8ac9p-744, 0x1.5a3ebac3124dfp-319, 0.0, 0.0,
     0.0, 0x1.b2607cc346385p-828, 0x1.d4c5063b8a83dp-6, 0x1.ac143bdde9eb5p-806, 0.0,
     0x1.0437781655d5ep-488, 0x1.ec1f9d4481e86p-463, 0.0, 0x1.3a2387cd46443p-174,
     0x1.b3f347a7c09f9p-127, 0x1.4056917eba8aep-74, 0x1.56ad1f8204773p-586,
     0x1.754f6d655c6a6p-358, 0x1.9f735b32eb8d2p-734, 0x1.befe05c1a0b6ap-115,
     0x1.929c2fa8da52p-19, 0.0, 0x1.7d15f5c1418e6p-83, 0.0, 0.0, 0.0,
     0x1.8664ff67aa50fp-852, 0x1.adbc40f9a519cp-312, 0x1.0b9e3a8a85bbbp-175, 0.0,
     0x1.eb474dc263394p-30, 0x1.8081ac8eaf102p-984, 0.0, 0x1.1b8f788ed7497p-763,
     0x1.4696979878a8fp-728, 0x1.448c7adb33c83p-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8d9dad9814732p-429, 0.0, 0x1.6d28097165254p-163, 0x1.3b0fe21c925f3p-630,
     0.0, 0x1.0302c3423e7bp-910, 0.0, 0.0, 0x1.7fa20da458f8ep-433, 0.0, 0.0, 0.0,
     0x1.ecc514a9f58fep-25, 0x1.e7fa44c950565p-576, 0.0, 0.0, 0.0,
     0x1.61e012ef7ceaap-100, 0x1.a42553e8d5e3bp-823, 0.0, 0x1.9dc629a520f2ap-557, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e61abb1e25147p-744, 0.0, 0.0,
     0x1.35049c0a6b223p-734, 0x1.dbcf9ac4ac6e6p-4, 0x1.3ae959c4882d9p-647, 0.0, 0.0,
     0.0, 0x1.1aca3dbfd2abap-59, 0x1.b0b0aa5648c48p-811, 0x1.64789a1a0d89p-751, 0.0,
     0x1.deb919146bad8p-867, 0x1.078f2082d2c5cp-253, 0.0, 0.0, 0x1.10446c3e84ac9p-914,
     0.0, 0x1.eaf577f487402p-731, 0x1.0f23f8778443bp-942, 0.0, 0x1.372a0c72887a3p-857,
     0.0, 0x1.ac4849b88a106p-210, 0x1.a09bb28fc750fp-616, 0.0, 0.0, 0.0,
     0x1.0fc60f6c7f6fbp-310, 0.0, 0x1.1069d463c5946p-278, 0x1.8dd857c0f8c65p-887,
     0x1.19d73f57a3512p-601, 0.0, 0x1.7767a7e6462edp-488, 0.0, 0x1.39001c25a2dd8p-510,
     0x1.2edb6386e8844p-529, 0.0, 0x1.6c4be0931c57ep-172, 0.0, 0x1.ac1cb32c25eeap-944,
     0x1.a699e20401481p-783, 0.0, 0x1.2f8582b0af80bp-480, 0.0, 0.0,
     0x1.3a1197f0eafep-728, 0.0, 0x1.4e3465ce1bf0ep-989, 0.0, 0x1.696b6557fa21ep-945,
     0.0, 0.0, 0.0, 0x1.85e0ea1266592p-139, 0x1.13a80e8a1dd9ep-998, 0.0
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
            tmp1 = Sleef_finz_erfcd2_u15avx2128(tmp0);
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
    printf("Sleef_finz_erfcd2_u15avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_erfcd2_u15avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
