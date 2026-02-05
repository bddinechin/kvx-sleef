/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ldexpd2_kvx.c --function Sleef_finz_ldexpd2_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary64,int32 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.a96f08b103c7cp-836, 0x1.19293c06bc957p-908, 0.0,
     0x1.b20ff9a22dc72p-906, 0.0, 0.0, 0.0, 0x1.24999b47d1909p-706, 0.0,
     0x1.cea930481258dp-886, 0x1.e1497c64bd2c7p-331, 0x1.8cfcc89d5ec08p-61, 0.0,
     0x1.d4f3b60de71p-872, 0.0, 0x1.4ed4312c43f6ep-753, 0.0, 0.0,
     0x1.2485668544b6ep-925, 0.0, 0.0, 0.0, 0.0, 0x1.2dfb2b794befcp-897,
     0x1.39b839260a991p-239, 0x1.420d104cd972dp-254, 0x1.b6e78f7ae2e36p-55, 0.0, 0.0,
     0.0, 0.0, 0x1.c1c1c673c40dbp-785, 0.0, 0.0, 0.0, 0.0, 0x1.3e277c15633a7p-507,
     0x1.e240c0ff123b4p-741, 0.0, 0x1.db32f78eb331fp-161, 0x1.92c975f82417cp-1002,
     0.0, 0x1.5db16aacb1fbfp-632, 0x1.4880d41f822c9p-158, 0x1.c715c409681a4p-502, 0.0,
     0x1.781214acd2191p-483, 0.0, 0.0, 0.0, 0.0, 0x1.a56228bf6a268p-822, 0.0,
     0x1.b22a70a04522ap-847, 0x1.4ded6caeae676p-453, 0.0, 0x1.8fe02f75757d8p-113,
     0x1.9e3ed329372fep-387, 0x1.d4aa99bcd6802p-84, 0.0, 0.0, 0.0,
     0x1.868bf7e57a0bbp-888, 0.0, 0x1.f0c02d2768e11p-203, 0.0, 0.0, 0.0,
     0x1.6c2e2f718744ap-134, 0.0, 0x1.d0fd46399786dp-583, 0.0, 0x1.28b529d7342ffp-316,
     0x1.e190bb770bec6p-942, 0x1.dbbe02a69a0adp-18, 0.0, 0.0, 0.0,
     0x1.51b47c60dc2e7p-10, 0x1.bcb1a252615abp-392, 0x1.8b0e83b3bfd39p-698,
     0x1.83bda888e20e9p-965, 0.0, 0.0, 0.0, 0x1.03609bba0712ep-243, 0.0,
     0x1.02e02516cc269p-466, 0.0, 0x1.7b4f9c59c0a49p-528, 0x1.f08d301744ac9p-84, 0.0,
     0x1.52bf995092bfcp-416, 0.0, 0x1.b41a03babfaa6p-434, 0x1.4f1b694b99562p-387, 0.0,
     0x1.40c752673b4ffp-299, 0.0, 0.0, 0.0, 0.0, 0x1.34e69c981412bp-326, 0.0, 0.0,
     0.0, 0.0, 0x1.33147576d7cdp-919, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9a447ab19c8ap-704,
     0.0, 0x1.e732506fc7895p-493, 0x1.ec10903d99cacp-373, 0.0, 0x1.5ea639a18b10dp-350,
     0x1.f0c46c65ba653p-259, 0.0, 0.0, 0x1.36b737702c5b1p-799, 0x1.61e0340a65ba3p-119,
     0x1.1ed7020be07fdp-586, 0x1.15735b82a4809p-684, 0.0, 0x1.65ed372d23eefp-735, 0.0,
     0.0, 0x1.141a1a2663a66p-204, 0x1.9c8e59a25fa0ep-261, 0x1.87f28b9dd12e7p-73,
     0x1.fa0c93aaa2c6cp-650, 0x1.370f7f3ca7b1dp-923, 0x1.a5b2cd928440bp-910, 0.0,
     0x1.098a8e2798ff6p-831, 0x1.6c54fb9d1d43bp-1007, 0.0, 0.0, 0.0, 0.0,
     0x1.0d4c8582d9e03p-852, 0x1.c5b8f6ec4a1a8p-988, 0x1.0cb743f4ec41bp-429,
     0x1.00b54d99f7f04p-923, 0x1.9ec8549270b28p-24, 0x1.bccbfdbd62f73p-740, 0.0, 0.0,
     0x1.abaf2f5571984p-890, 0x1.e847e71bb206bp-765, 0.0, 0.0, 0.0,
     0x1.5c8895914bf03p-952, 0x1.68927dd159905p-927, 0x1.4a9fc1f6b34c9p-928,
     0x1.112fdfddc071ap-200, 0.0, 0x1.2f2a447cdf71ap-851, 0x1.5964699d915d6p-468, 0.0,
     0x1.aff3916a9e8c5p-175, 0.0, 0.0, 0.0, 0x1.e7ee170de6ea3p-98, 0.0, 0.0, 0.0,
     0x1.26970db36a7ep-971, 0x1.06c32da8c491cp-775, 0x1.29ec4d483b21ep-830,
     0x1.58d7cee44e17ap-647, 0x1.e35102375edecp-883, 0.0, 0.0, 0.0,
     0x1.a29aac705e1fep-687, 0.0, 0.0, 0x1.838a62914f962p-100, 0.0,
     0x1.c3cc8824527f9p-192, 0.0, 0x1.759e9c253d999p-47, 0x1.ae083cfc8ac9cp-381, 0.0,
     0x1.52591afe90f28p-871, 0.0, 0.0, 0.0, 0.0, 0x1.e799ed17bb4b2p-891,
     0x1.c555788976f85p-9, 0.0, 0.0, 0x1.5294a087bed57p-605, 0x1.522b398268d93p-68,
     0x1.960efa9571ce5p-864, 0x1.f15a24e438f2p-386, 0x1.fbbc69a143fc2p-918,
     0x1.665758342ce3bp-898, 0x1.7a931cadd4c8fp-414, 0.0, 0x1.0e6bc582fae8ap-689, 0.0,
     0x1.0f840a54f4f4p-444, 0x1.4f3de8385fe3cp-567, 0x1.a3ff9d28b2932p-247,
     0x1.e27c942a42daep-29, 0.0, 0x1.d1193e713c211p-969, 0x1.b5c54e93128b8p-878,
     0x1.f28e2e41160a2p-901, 0.0, 0.0, 0x1.0d787ee74f6dap-769, 0.0,
     0x1.7a942a71a3192p-435, 0x1.df3203c352c6ap-586, 0x1.e04b5a432c08ap-176, 0.0,
     0x1.104504ad3b76bp-841, 0.0, 0x1.05d4a2fcb0b03p-795, 0.0, 0x1.aa6b5149cd021p-910,
     0.0, 0x1.77f55d03b9ad2p-266, 0x1.e1c4707229455p-8, 0x1.5d70a52d0bb31p-599,
     0x1.9effcaabfc8bdp-543, 0.0, 0x1.b06d6b94ad0c7p-290, 0x1.ffc2f13a5e75ep-616,
     0x1.119b5990f98cap-749, 0x1.6e3904660bb4cp-630, 0.0, 0.0, 0x1.5caa3dbef13ebp-321,
     0x1.a9b1f15a930cfp-298, 0x1.63e2ec7fc259p-646, 0.0, 0x1.88b0b653e1815p-130, 0.0,
     0x1.54c46644835c9p-416, 0x1.099cb6a0dcdb6p-886, 0x1.f822cccd28f8bp-695, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9cd129aba6422p-704, 0x1.391884f8996a5p-178,
     0x1.d4c4d935fdec2p-658, 0x1.a7d6e86f83887p-143, 0x1.8a6335b5488fep-856, 0.0,
     0x1.8daa161234ef3p-866, 0.0, 0.0, 0.0, 0x1.4410ab5266317p-911, 0.0, 0.0, 0.0,
     0x1.bc358c9279e8fp-280, 0x1.afdea8653e93cp-483, 0x1.8d5ba1b03940ep-192,
     0x1.cb8bf105630d5p-816, 0x1.1cc46de2eaf14p-730, 0x1.c237b8745d0f2p-113,
     0x1.37c2dcb7222d7p-580, 0x1.cf3e718d3f70fp-932, 0.0, 0x1.c8fdf6b3fab5fp-163,
     0x1.65058d0b07017p-113, 0x1.c9eb1beeb9367p-798, 0.0, 0.0, 0.0,
     0x1.637dcf5009068p-651, 0.0, 0.0, 0x1.fd75c500f5072p-625, 0.0,
     0x1.6efee1e8824f2p-653, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.816d586faf1bdp-1016,
     0x1.806f8a5364feep-333, 0x1.4023c0e16c072p-297, 0.0, 0.0, 0.0, 0.0,
     0x1.aaafb795266dp-563, 0.0, 0.0, 0x1.c2cbca598c3a5p-274, 0x1.54613c3ff6802p-450,
     0.0, 0.0, 0.0, 0x1.21f42628fdd29p-343, 0.0, 0x1.8fa2c26264aa4p-342, 0.0,
     0x1.7667493c0f3bbp-552, 0x1.a06ed3f5fb265p-726, 0x1.678e559966f4bp-320, 0.0, 0.0,
     0.0, 0x1.7de79c5471ffp-338, 0.0, 0.0, 0x1.86f61446a161p-782, 0.0, 0.0,
     0x1.e56c8b78fac44p-80, 0x1.6b57f2ec033a8p-926, 0.0, 0.0, 0x1.f1dafc22122e1p-601,
     0x1.7eaec42b9bc52p-258, 0x1.9abd19c14b1a6p-714, 0.0, 0.0, 0x1.a61ef2f21f04fp-940,
     0x1.1b2561dcb2c55p-340, 0x1.1769fc916ddf6p-186, 0x1.67815d6f4d5c3p-405,
     0x1.1cd473df8be81p-573, 0.0, 0x1.15b5b7be3bfc6p-719, 0x1.de2174014c6adp-859,
     0x1.c7a02adc08eb2p-892, 0.0, 0.0, 0x1.16076a39bdb28p-698, 0x1.032a021aaad93p-636,
     0.0, 0x1.30155d5fcfe49p-930, 0.0, 0.0, 0x1.3666ff7bcd621p-663,
     0x1.77ac28feba393p-998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f2421dfd051bp-36, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.43de4fd13aa81p-168, 0x1.a69966ad39447p-244,
     0x1.2209231c10da9p-247, 0.0, 0x1.59dd2d8c7ecd3p-440, 0.0, 0.0,
     0x1.7ccfdec0f612fp-736, 0x1.2f8249c7ce755p-141, 0.0, 0.0, 0x1.3b722a16476ecp-788,
     0x1.b178ff151463cp-761, 0.0, 0x1.76f4f1df66a4ep-445, 0x1.31ed8673d1678p-613, 0.0,
     0.0, 0.0, 0x1.1e179936cb7b5p-526, 0x1.4b64c174a4a56p-552, 0x1.f945f8aea2f36p-642,
     0.0, 0.0, 0x1.ac1f4b333356ep-674, 0x1.9d7a48b9b3822p-307, 0x1.110601f63fe6p-670,
     0x1.70e9bdd6510ap-997, 0.0, 0x1.3c2d4925c08c8p-464, 0x1.7f7249ea757c7p-138,
     0x1.4af0737d0dab3p-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6befe1b8a185ap-284,
     0x1.ddb90db09cf13p-1018, 0x1.9355e434a4dbfp-640, 0.0, 0.0,
     0x1.ba3ef604bc8cfp-881, 0x1.c33fc3089572fp-147, 0.0, 0.0, 0x1.d1a1b727ba322p-624,
     0.0, 0x1.a675566304095p-895, 0x1.4cad8dd994e33p-141, 0.0, 0.0, 0.0,
     0x1.981cf9c184e9dp-975, 0x1.1a099c7ac6316p-892, 0x1.116ef4f5b2f3cp-76,
     0x1.c0d4626fd6184p-736, 0.0, 0x1.40c5f0004c523p-649, 0.0, 0x1.86bcb238a760bp-166,
     0x1.d6ea8782f0743p-461, 0.0, 0x1.50ff6701ffb17p-21, 0.0, 0x1.72aac3fd528cp-765,
     0x1.7254a017f99c6p-930, 0.0, 0.0, 0.0, 0x1.443b16bf2bef8p-956, 0.0,
     0x1.53798efdab3d3p-488, 0x1.08e15eb066471p-1000, 0x1.d0e7aead0ff52p-250, 0.0,
     0.0, 0x1.c86a4eeadb054p-295, 0x1.14d15f4db769cp-101, 0.0, 0x1.ce1ae05bb8dd7p-732,
     0.0, 0x1.be967fbcca47dp-804, 0x1.22504c39c4714p-886, 0x1.1a40e5a464cbp-252,
     0x1.ae3788eedb947p-638, 0.0, 0x1.436e7ec984814p-613, 0.0, 0x1.1b63bd6034c9ep-216,
     0x1.cf30e4bf019e6p-133, 0x1.3a356f80b53p-375, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c85acbe0f64fcp-787, 0.0, 0.0, 0x1.d051b11b86d9ep-854, 0x1.5ce2bed6f6029p-585,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eccc146b96c67p-170, 0.0,
     0x1.860da11204387p-563, 0x1.9227cb8113116p-366, 0.0, 0.0, 0x1.31f8f6417c324p-913,
     0.0, 0.0, 0x1.e77235f18cd7p-631, 0x1.4a47ac3145887p-732, 0x1.a2974f1f070b6p-111,
     0.0, 0x1.933ea9a642f04p-313, 0.0, 0.0, 0.0, 0x1.5596618277788p-583,
     0x1.7082c8414e30dp-710, 0x1.8c194d2e25ecap-327, 0x1.16026177834f5p-451, 0.0, 0.0,
     0.0, 0x1.bc56ac6926378p-38, 0x1.a3293111f7aedp-214, 0x1.3cb7883480a0cp-667,
     0x1.8f795e03f7396p-992, 0x1.968969f7b5dcfp-874, 0.0, 0.0, 0x1.e0021d0f6511p-456,
     0.0, 0.0, 0.0, 0x1.8dac21bb12767p-689, 0.0, 0.0, 0x1.ca701c17cc5bep-46,
     0x1.0090c1446625cp-262, 0x1.f037c26e03a74p-1014, 0.0, 0.0, 0.0, 0.0,
     0x1.924305d8d0ad5p-276, 0.0, 0x1.0408e547f3e19p-558, 0x1.82645f5280f3bp-173,
     0x1.9b8bf54dbf2d6p-677, 0.0, 0.0, 0.0, 0x1.e60b20ecce6cfp-460, 0.0,
     0x1.b234591aa4cdfp-942, 0x1.2a0be7cd9dd72p-410, 0x1.63be542838aa7p-501, 0.0,
     0x1.a2e8b4ef98b71p-248, 0x1.3d52bae67b75fp-365, 0x1.83cc65478e9fdp-822, 0.0,
     0x1.0e29ec29fc0a8p-229, 0.0, 0x1.49874086a761ap-313, 0.0, 0x1.a94c81d5bb952p-641,
     0x1.d0cb1a7b7d26bp-313, 0.0, 0x1.80d2c36e203f8p-120, 0x1.59f6faad7377ep-459,
     0x1.ef11066c758dbp-842, 0x1.1bb604fc164d9p-730, 0.0, 0.0, 0.0,
     0x1.6458c0c7a5519p-532, 0.0, 0x1.f5d6594440dc1p-598, 0.0, 0.0, 0.0,
     0x1.ed82a86d73d58p-81, 0x1.167a5882fb822p-337, 0x1.11a7f31c53005p-2,
     0x1.01d59a576525bp-839, 0x1.d2c0c2885633dp-919, 0.0, 0x1.529961df0db7fp-201,
     0x1.cab2c2a6d69dep-932, 0.0, 0x1.4c455b86a1492p-399, 0x1.53ecbd7e10a66p-160,
     0x1.e9e3640669cdp-426, 0x1.02da5619d4a54p-924, 0.0, 0.0, 0.0,
     0x1.1ef74edf6e21ep-850, 0.0, 0x1.7f43fb54c5f5cp-624, 0x1.135731cfb1506p-810, 0.0,
     0.0, 0.0, 0x1.d6be571a7fe3dp-43, 0x1.664afd9e56faap-493, 0x1.0679bebfa3e5bp-709,
     0x1.a6f158e6664f5p-353, 0.0, 0.0, 0.0, 0.0, 0x1.1b659080234fp-565,
     0x1.f8921e5630945p-915, 0.0, 0x1.75da162d52bd3p-194, 0.0, 0.0,
     0x1.208a1a6f7b695p-561, 0x1.c7dca52857eadp-212, 0x1.3d8cc0d727a0ap-257, 0.0, 0.0,
     0x1.6f4febc75e513p-242, 0.0, 0x1.e606bf2863d36p-346, 0.0, 0.0,
     0x1.c1cbf73273e6ep-354, 0x1.7c7db188d979cp-565, 0x1.1e68614d075f9p-418,
     0x1.fdf6007283d06p-480, 0x1.f4e937bbe011ep-604, 0x1.1956bbeca7f76p-1002,
     0x1.e8127bbca4964p-623, 0.0, 0x1.45c494a7ce804p-8, 0.0, 0x1.9b54b9a86269ap-339,
     0.0, 0x1.9bf09c2a2b095p-498, 0x1.13c2d0f210206p-549, 0.0, 0.0,
     0x1.4fbacba8e91d4p-356, 0.0, 0.0, 0.0, 0x1.7d3de6c8a2c17p-1002, 0.0, 0.0, 0.0,
     0x1.7f306cf8b308p-704, 0.0, 0x1.4e53e95fdf62fp-864, 0x1.a9b0746414c48p-467,
     0x1.5cd30dd30ba33p-302, 0x1.3240eb8a3d483p-370, 0.0, 0x1.57ed0ea39ab84p-546,
     0x1.188069f4f025dp-389, 0x1.f33d36d421eb9p-338, 0.0, 0.0, 0.0,
     0x1.8c0ac1beadf8cp-979, 0x1.b98724dfd1f9bp-444, 0x1.e7aa35d97849bp-502, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4cb8daaaaea9p-283, 0x1.7a2a2dd19c86ep-85,
     0x1.d662afc50f976p-479, 0x1.770f9767d1722p-389, 0.0, 0.0, 0x1.d178790e12731p-477,
     0.0, 0.0, 0.0, 0x1.7cf4c8739c6b9p-807, 0.0, 0.0, 0.0, 0x1.0356154146692p-945,
     0.0, 0x1.774fa806678fbp-620, 0x1.7265263cf4fdap-663, 0x1.9cb812f10e8ccp-276,
     0x1.fb7652ef37f3p-226, 0x1.3dc092f3938c1p-738, 0.0, 0x1.47d9c37c5558ep-176, 0.0,
     0.0, 0x1.8c53e700b884dp-232, 0.0, 0x1.849184ee3fcf6p-556, 0x1.de6c47e3c88d8p-710,
     0x1.dd2b1839cf707p-600, 0.0, 0.0, 0x1.f7e8c7903424cp-699, 0.0,
     0x1.92bfceb3730b6p-852, 0x1.310c41266ccb4p-1016, 0x1.356106549c77bp-105,
     0x1.d0d3a5847d31bp-1006, 0x1.0f7aa07a24548p-472, 0.0, 0.0,
     0x1.d281fba1be4efp-851, 0.0, 0x1.152e81f1c1facp-61, 0.0, 0x1.822aa3e458b68p-135,
     0.0, 0x1.5e1f51bbd18fbp-931, 0.0, 0.0, 0x1.c12f72cd23c89p-684, 0.0, 0.0, 0.0,
     0x1.60dc05dc2e5d5p-598, 0.0, 0.0, 0.0, 0.0, 0x1.0d17aa9e76193p-114, 0.0, 0.0,
     0x1.4255a654d00ccp-707, 0x1.955b6dde55a7bp-627, 0.0, 0x1.ded9b4b1386d8p-712, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c155d38179c57p-822, 0.0, 0.0, 0.0,
     0x1.67abd0cf961cp-605, 0.0, 0x1.9e63b9c47caaap-331, 0.0, 0.0, 0.0,
     0x1.2ae52f52657d5p-259, 0x1.041e2edf38af3p-953, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.139076d8a23c7p-208, 0x1.e21731c7d768cp-1003, 0.0, 0x1.b6f9b7e30f76p-512,
     0x1.450870b1e33c3p-316, 0.0, 0.0, 0.0, 0.0, 0x1.aa43192fd5a5ep-178, 0.0, 0.0,
     0x1.cb5a2a372856p-312, 0x1.5a14ca8d94f5bp-417, 0x1.f31d376ebafd6p-112, 0.0,
     0x1.3638fe5327d69p-60, 0.0, 0.0, 0x1.74ed5387f31aep-316, 0.0,
     0x1.bc96aece5c6cfp-532, 0.0, 0.0, 0.0, 0x1.ba74ceb16a3dfp-878,
     0x1.d27eb7778d11ep-923, 0x1.b0985c49ebfb6p-359, 0.0, 0.0,
     0x1.b21e17a4230ddp-1013, 0x1.324219f9256a5p-346, 0x1.66c30070762a5p-367, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b73ae2dc98fd7p-490, 0x1.c9bd57de81d5bp-39,
     0.0, 0.0, 0x1.656e4db957e15p-417, 0.0, 0x1.874cf02a8f22fp-433, 0.0, 0.0, 0.0,
     0x1.2d6aea8615b6p-414, 0x1.559d74abe8d6ap-243, 0x1.ab7de7761c5p-607,
     0x1.a178b58f2b7bbp-145, 0.0, 0x1.b421615b0fd94p-612, 0x1.81e515fce5514p-608, 0.0,
     0x1.f34104d152f19p-938, 0x1.3a6ff9bac9c6p-327, 0x1.fa39c4f5e49b9p-365, 0.0,
     0x1.5878fb1a756a6p-409, 0x1.87f65b664b38ap-132, 0x1.5fd08d454ccap-234, 0.0,
     0x1.af1e347b2d68ap-174, 0x1.1069ea9934d37p-465, 0.0, 0.0, 0.0,
     0x1.e6ab3ef9cd471p-780, 0x1.5f35ca0571879p-771, 0.0, 0x1.9b32d9bae8fcdp-116,
     0x1.3274e9c680acbp-489, 0x1.036f722bfcdecp-496, 0x1.60ae4a3bbbc62p-74, 0.0, 0.0,
     0x1.fe9195e755652p-180, 0x1.ef3a5615896a3p-967, 0.0, 0.0, 0x1.84fa585a000f4p-192,
     0x1.0b66d0355dba8p-673, 0x1.a97e1b8e5dcadp-319, 0x1.2123ffd349d08p-847,
     0x1.385722a1a11a9p-195, 0x1.fbad6f2c3db55p-157, 0.0, 0x1.58895081883a6p-74,
     0x1.481d03503e0fep-459, 0x1.5c559491f362cp-252, 0.0, 0.0, 0x1.d166b3610b3bp-32,
     0x1.1945c4ff4d07cp-732, 0.0, 0.0, 0x1.9ddc54d9b711ap-886, 0.0,
     0x1.1b71d25e3447dp-166, 0.0, 0x1.b55677cf9a4a1p-847, 0.0, 0.0,
     0x1.e4bd802c08509p-686, 0.0, 0.0, 0.0, 0.0, 0x1.73353c99a2c71p-271, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.72ffb2b31b9ddp-720, 0.0, 0x1.2bc1fc7647867p-714, 0.0,
     0.0, 0x1.7d75851072285p-771, 0.0, 0.0, 0.0, 0x1.3ebf15c15a974p-934, 0.0,
     0x1.78b8cb3cfc7a3p-675, 0x1.42a787c0149d2p-797, 0x1.ea6ead5f95e45p-93,
     0x1.9cd61ab11381dp-235, 0x1.be15e48391d0ep-214, 0.0, 0x1.f24356d42ad94p-636, 0.0,
     0.0, 0.0, 0.0, 0x1.3cf5fa7ecf188p-991, 0.0, 0x1.ad9528f5f29d2p-525,
     0x1.eb8383b988defp-660, 0.0, 0x1.fb110540acc6p-663, 0x1.d40faa3145207p-771,
     0x1.524c511442119p-1009, 0x1.4ca794a0571bcp-753, 0.0, 0x1.92c11a45ad5bap-881,
     0.0, 0.0, 0.0, 0.0, 0x1.92f05bf1945b9p-256, 0.0, 0.0, 0x1.fae175fc3bde8p-835,
     0.0, 0.0, 0.0, 0.0, 0x1.2051f9410eb56p-922, 0.0, 0.0, 0x1.da25d6da9896ap-499,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbe5750e1911ap-533, 0.0, 0.0, 0.0,
     0x1.e8ceffe150385p-40, 0x1.0e91a9c3d354dp-72, 0.0, 0x1.f603f7212968cp-967, 0.0,
     0x1.69b52e4a12345p-621, 0x1.9c70a8196fff1p-150, 0.0, 0x1.b675853c08f12p-781,
     0x1.f8ab4ce500f37p-740, 0x1.7c3ad2ea323a1p-291, 0.0, 0x1.c268842762d7ap-221,
     0x1.f3aad167be3efp-193, 0x1.56c2b1e5cdc48p-993, 0.0, 0x1.49b590a8e8369p-226,
     0x1.c4a4e23889e1bp-359, 0x1.cde0e92c22c59p-6, 0x1.3929a4273048cp-716,
     0x1.5985e8865e61bp-224, 0.0, 0x1.ac7b761c829cap-401, 0x1.27d2bea4bfb3bp-289, 0.0,
     0x1.babb99629342dp-399, 0x1.f5068f0985bdp-985, 0.0, 0x1.e1c1348d8b962p-762,
     0x1.18c306a709f91p-327, 0x1.f42aff9dabc7cp-757, 0x1.b7804865152c9p-338,
     0x1.0c34adbab9988p-632, 0.0, 0.0, 0.0, 0x1.aa5bc277df3d7p-384, 0.0, 0.0, 0.0,
     0.0, 0x1.e871ebccb8917p-542, 0.0, 0.0, 0x1.11f2b44f09541p-370,
     0x1.b0fa319139d9p-273, 0x1.6a994d450ad56p-669, 0x1.bf65cffc12f04p-1009,
     0x1.8b92ca1bd5a5ap-772, 0.0, 0x1.fa0d1776c46f6p-152, 0.0, 0.0, 0.0, 0.0,
     0x1.fb0153611df1fp-294, 0.0, 0.0, 0x1.5c5797727e715p-622, 0x1.eb9f361d374e8p-371,
     0x1.feada5554dc9bp-511, 0.0, 0x1.1cc6ec6ebb57dp-474, 0.0, 0.0,
     0x1.090ef65b4a5fbp-440, 0x1.6fe75d333cfb7p-167, 0x1.f73ca663e1a04p-417,
     0x1.151711b97d284p-193, 0x1.f0fe9a961ae35p-572, 0.0, 0x1.b6470a4e28f24p-896, 0.0,
     0x1.8b7dc744c2f98p-571, 0x1.980e90233bf01p-589
};
static const int32_t external_bench_wrapper_input_table_arg1[1002]  = {
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0)
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
            ml_int2_t tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_int2_t*)(external_bench_wrapper_input_table_arg1+ i)), 8);
            tmp2 = Sleef_finz_ldexpd2_kvx(tmp0, tmp1);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp2),  16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(2);
            i = tmp4;
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
    printf("Sleef_finz_ldexpd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_ldexpd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
