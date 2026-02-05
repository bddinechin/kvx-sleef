/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modfd2_kvx.c --function Sleef_finz_modfd2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.415da7c03de35p-777, 0x1.cbc5dd70a1919p-466, 0x1.f5bcdc24e7b31p-563,
     0x1.8b2cf6f82dbbbp-835, 0x1.6b722b10cd63p-445, 0.0, 0.0, 0x1.8d54482f80d33p-577,
     0x1.45fbcd28dc7c3p-739, 0x1.d7ceb4a851072p-371, 0x1.13533bf77c6e6p-987,
     0x1.931b4d82bd71fp-286, 0.0, 0.0, 0.0, 0.0, 0x1.0eedd81b701ep-997, 0.0, 0.0, 0.0,
     0x1.359e2d92f34acp-759, 0.0, 0.0, 0.0, 0.0, 0x1.d12049d18166bp-669, 0.0, 0.0,
     0.0, 0.0, 0x1.d052462d0596p-523, 0x1.a87838ae5b8eep-993, 0x1.73c697881cb59p-946,
     0.0, 0x1.aeb19c00b3555p-324, 0.0, 0.0, 0x1.438437ef6034ep-677, 0.0,
     0x1.5c8f15fba78b5p-912, 0.0, 0x1.d9ae7a1cd10bfp-695, 0x1.e014b1c61aeb1p-437, 0.0,
     0.0, 0.0, 0.0, 0x1.77e83e4273403p-160, 0.0, 0x1.6c47c692f6415p-68, 0.0,
     0x1.b2d40de40f41ap-458, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b822817041e2dp-508, 0.0,
     0x1.4615a6202a775p-407, 0x1.59f46c6b304e4p-255, 0x1.3eb333e237b65p-766,
     0x1.c4bf5267bad92p-123, 0.0, 0x1.080247a83be81p-38, 0.0, 0x1.e0a3b11973786p-951,
     0x1.fd03258601783p-547, 0x1.5782241558cf2p-260, 0x1.b4082697a25e2p-521, 0.0, 0.0,
     0x1.32b63d748a037p-269, 0.0, 0.0, 0.0, 0.0, 0x1.166113eafa7p-814,
     0x1.75529381c517bp-19, 0x1.42da5b561072dp-79, 0.0, 0.0, 0.0, 0.0,
     0x1.7818bfce8810cp-309, 0.0, 0x1.b5777d16070b7p-700, 0x1.b5b2de8ddf43bp-990, 0.0,
     0.0, 0.0, 0x1.d05aa74415ab2p-225, 0x1.e2ac1f2f7eae7p-695, 0x1.038d8504f1812p-480,
     0.0, 0.0, 0.0, 0.0, 0x1.a2690e3d56ec3p-339, 0.0, 0x1.b59da204a5ab1p-679, 0.0,
     0x1.ccc13cd0b653ap-437, 0.0, 0x1.a5b7c1f659f6dp-350, 0x1.d1a5e0a83e91dp-500, 0.0,
     0.0, 0x1.c2f1cee21346ap-702, 0.0, 0.0, 0.0, 0.0, 0x1.6b5a283030499p-963, 0.0,
     0.0, 0x1.bac778833d096p-906, 0x1.6aa17160aa40ap-802, 0.0, 0x1.bb44ebe9ee772p-847,
     0.0, 0.0, 0.0, 0.0, 0x1.09e9247bab5a4p-320, 0x1.e569accc31888p-368,
     0x1.10d4d084d242p-538, 0x1.1dd7573c65deap-189, 0x1.1860ab878c726p-1002, 0.0,
     0x1.a8260f2a17ac9p-891, 0.0, 0.0, 0.0, 0x1.0baeadf06e13p-255,
     0x1.f96822b45b7cbp-850, 0x1.739060dd67333p-51, 0x1.eb8fd9e9e5efap-144, 0.0, 0.0,
     0x1.90ac36a5b2b9bp-296, 0x1.c4c233aeea64dp-969, 0.0, 0.0, 0x1.9d4bd654b6ac5p-885,
     0.0, 0x1.26de16840d326p-361, 0x1.e3c9e3d3de6bfp-739, 0.0, 0x1.e96d2dff4f366p-1,
     0x1.31dd4adfd748ap-650, 0x1.879b72a2d038p-693, 0.0, 0x1.d6499697e640cp-247,
     0x1.8512d22d85d61p-814, 0x1.786537836acb8p-522, 0.0, 0x1.ed2b35823bf83p-566,
     0x1.7fce6cb51db65p-899, 0x1.6b443ff018106p-41, 0.0, 0x1.415b221e1d8aep-352,
     0x1.46b9a71c5e349p-990, 0x1.4a3d9ee9602a6p-43, 0x1.2f473bcf11a66p-926, 0.0, 0.0,
     0x1.daadff755fc0dp-48, 0.0, 0.0, 0x1.f46baf790722ap-853, 0x1.b58aecd6e7515p-208,
     0x1.6903f71becd11p-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4aa7b181cd1bcp-671, 0.0, 0.0, 0.0, 0x1.638c45d166fd3p-737, 0.0, 0.0,
     0x1.37f948146fc01p-363, 0.0, 0.0, 0.0, 0x1.a2f2435f1efe5p-485, 0.0, 0.0,
     0x1.17afa991c204ep-952, 0.0, 0x1.b3a4f8a182e72p-457, 0x1.c905767ac4aaep-727,
     0x1.afd850ce4984dp-140, 0.0, 0x1.4a266d4c1f90cp-810, 0x1.f3a53e890580ep-486, 0.0,
     0x1.20e840e23b65ap-660, 0.0, 0.0, 0x1.ac99e5006ff19p-655, 0x1.d70159e7f5fe3p-653,
     0.0, 0.0, 0x1.eca9093fb55dbp-693, 0.0, 0.0, 0.0, 0x1.95d974ed9de27p-65,
     0x1.52e3bb52557a7p-455, 0.0, 0x1.185b590fa6cfbp-773, 0.0, 0x1.e8e70ba4eb43p-217,
     0x1.c8e4e1132b37bp-438, 0x1.7d51c1346b71ep-75, 0x1.706e04735a8ap-425, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bf1f0c9baeebbp-578, 0.0, 0x1.76e1a92d1542fp-271, 0.0,
     0x1.030371c7c8a01p-478, 0.0, 0.0, 0.0, 0x1.acec453d879dap-593,
     0x1.d0d28cfd7cefp-131, 0x1.d0cceb444718ap-863, 0.0, 0.0, 0.0,
     0x1.8de8b40f4d638p-392, 0.0, 0.0, 0x1.317afd30b69bdp-774, 0x1.09f2af9a76323p-230,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d85294608318p-548, 0.0, 0x1.6836970d51dbp-782, 0.0,
     0x1.861cc6a76048bp-315, 0x1.54403a7b7afffp-199, 0x1.d4c3d781db896p-836,
     0x1.a8928caa7e2dbp-638, 0.0, 0x1.36141bd92e95bp-778, 0.0, 0x1.44c35195a52dbp-166,
     0x1.338d0285369ccp-911, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2326e27a578ap-425,
     0x1.d2734df682b3fp-227, 0.0, 0.0, 0.0, 0.0, 0x1.25ed59a293d3bp-131, 0.0, 0.0,
     0x1.c13c84a56cecap-230, 0x1.8476bb9420717p-364, 0.0, 0x1.cfb80a66d690dp-1003,
     0x1.25bac36e4420ap-98, 0x1.fab1c225e8c54p-568, 0.0, 0x1.f40ae0953fab5p-22,
     0x1.708eabcc32815p-72, 0x1.c91e216421198p-394, 0x1.b03e3166a2f92p-94, 0.0,
     0x1.4b70eddaee121p-165, 0x1.bfec407cf2538p-845, 0x1.ffa84dfaa0b5bp-244,
     0x1.4322fc3438c5dp-950, 0x1.bf765b5fe8018p-2, 0.0, 0.0, 0x1.45e2957fe36cdp-412,
     0.0, 0x1.d4c8812f0e0a1p-429, 0x1.adff404bee936p-634, 0x1.0df3745df49b8p-395, 0.0,
     0.0, 0x1.518775a55e45ep-913, 0x1.6d4f5b0ec13dap-693, 0x1.445bacd8291b3p-180,
     0x1.3ed78fd84506p-231, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2a0361febad43p-998, 0x1.87ce81f0d8136p-187, 0x1.1e5c998657da5p-88, 0.0, 0.0,
     0x1.c63c2cb739adep-805, 0.0, 0.0, 0x1.e9d8c1e840f35p-762, 0x1.2b42302174b6p-448,
     0x1.f6b607e16cbecp-1004, 0.0, 0x1.41329c7d122c8p-486, 0.0, 0.0, 0.0,
     0x1.048ccc4234b4fp-231, 0x1.ba7a6e7fe5afp-460, 0.0, 0x1.e95a5aa8f372bp-23, 0.0,
     0x1.bd30844a31fep-508, 0.0, 0.0, 0x1.55f89604c6p-427, 0x1.15a4d284dc205p-906,
     0x1.39bfc18e81aefp-101, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a768686549f6p-915, 0.0, 0.0, 0.0, 0x1.2ff5497527e87p-933, 0.0, 0.0, 0.0,
     0x1.5abb89f41c8e3p-953, 0.0, 0.0, 0x1.ebedbcf42736dp-81, 0x1.8e7ae7b0c833fp-752,
     0.0, 0.0, 0.0, 0x1.e67a71527ec87p-722, 0.0, 0x1.52bdcd304af69p-522, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.93e5569655076p-536, 0.0, 0x1.860286eab5b12p-504, 0.0,
     0.0, 0.0, 0x1.4440f1b5bfc39p-149, 0x1.588d8056fd9a9p-171, 0x1.4989498f226fp-51,
     0x1.8923feed49ff4p-30, 0x1.6166a0ef2a7c8p-935, 0x1.64078e61ae51ep-842, 0.0, 0.0,
     0x1.ca213dac63853p-88, 0.0, 0x1.64d7458d088e9p-57, 0.0, 0x1.8fc8b5db03522p-88,
     0.0, 0.0, 0.0, 0x1.25ef884581585p-808, 0x1.8c52549c9a482p-189,
     0x1.4cb7d681e37fdp-883, 0x1.c2cf1308a2faap-812, 0x1.ac19b476eb613p-1,
     0x1.857392597e6c3p-501, 0x1.1614ecde03547p-436, 0.0, 0x1.d2369899f468bp-805, 0.0,
     0.0, 0x1.4c30c394ff9d6p-168, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18db04daf13d1p-863,
     0x1.7a99b1ad34fd6p-786, 0.0, 0.0, 0.0, 0.0, 0x1.ec87339002776p-530,
     0x1.fa1126b21b5d6p-4, 0.0, 0x1.ede7c7f661debp-676, 0.0, 0x1.12412f2843e95p-286,
     0x1.3889c47cbc611p-933, 0x1.18ae2606dc5bfp-240, 0x1.f66d6166b26b1p-874, 0.0,
     0x1.a2e48656230ccp-875, 0x1.a43f1a97e1bd1p-852, 0x1.909e0241fdb8cp-480, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f21a6fe2ca08p-208, 0.0, 0.0, 0.0, 0.0,
     0x1.bd2ff7005412bp-908, 0.0, 0.0, 0x1.0d7f3eace8737p-289, 0.0, 0.0,
     0x1.122e4765cde81p-863, 0.0, 0.0, 0x1.809d2908b4554p-617, 0.0,
     0x1.de67bd3ba132dp-536, 0x1.cbab493e800d3p-545, 0.0, 0.0, 0.0,
     0x1.420f7cd76336cp-823, 0.0, 0x1.64fc62b6b442fp-495, 0x1.4e9c15e5e24e9p-939, 0.0,
     0x1.6fccf6f2b66efp-778, 0.0, 0.0, 0.0, 0x1.19a63a9992338p-731,
     0x1.f7865496e80a3p-67, 0.0, 0.0, 0x1.d5b8f7674b4acp-729, 0x1.c0458f1c910c6p-896,
     0x1.bc6abbf863785p-627, 0x1.ac09cef6b2e11p-345, 0x1.a3a9d1f6f92f5p-147, 0.0, 0.0,
     0x1.7889278bb8139p-88, 0x1.8825b5aaf67a2p-797, 0x1.1c008d879f979p-677, 0.0,
     0x1.2212da129d114p-388, 0.0, 0x1.e1b366c1525d6p-975, 0.0, 0x1.3bea507a573ddp-741,
     0x1.788af66523p-930, 0.0, 0.0, 0.0, 0x1.ad8cc275dfca9p-709,
     0x1.69f7c073ae01fp-281, 0.0, 0.0, 0x1.4e4438d0f0892p-762, 0.0,
     0x1.7358122c3daf5p-487, 0.0, 0x1.93e8c56509da3p-1020, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.36dd181d4c363p-603, 0.0, 0x1.6bc8044c6f689p-860, 0.0,
     0x1.13a0a8601a692p-120, 0x1.0fc906cf9d0f8p-456, 0x1.f0b764c8d0a5ep-975,
     0x1.5633c47603e5ep-881, 0.0, 0.0, 0.0, 0x1.1cd2c96c5ce2ep-747,
     0x1.6570df484addfp-717, 0x1.db3ae7a4f3049p-193, 0.0, 0x1.7b4c643fc3d2cp-194, 0.0,
     0.0, 0x1.aedddffa50808p-433, 0x1.55193a9ccb4bcp-769, 0x1.4d77a832e0f14p-315,
     0x1.b8c54d8aaca46p-217, 0.0, 0x1.f5c6157989c95p-82, 0.0, 0x1.23b6d394e8e0ap-967,
     0.0, 0.0, 0.0, 0x1.1abf3b64580e5p-881, 0.0, 0.0, 0x1.513feb2b85215p-6,
     0x1.719f874ba5abp-281, 0x1.417a16acead03p-75, 0.0, 0x1.4833b51de7035p-446,
     0x1.981b3c4056756p-810, 0x1.c4efc37e80727p-549, 0.0, 0.0, 0x1.9b34eb8320ba7p-673,
     0x1.493aa9036704bp-933, 0.0, 0x1.9d5c545d28fcp-826, 0.0, 0.0, 0.0,
     0x1.dda4a065ce0e3p-835, 0.0, 0x1.bf55904a282a8p-335, 0.0, 0.0,
     0x1.0a71d7e04aa9p-198, 0.0, 0x1.b5160d4e6ca74p-677, 0x1.9bca33cf3bb12p-667, 0.0,
     0.0, 0.0, 0.0, 0x1.0810fae31fb7bp-723, 0x1.631823a9c01bbp-887, 0.0, 0.0,
     0x1.c7f0417e31c8cp-51, 0.0, 0x1.84ad1191cc27ap-979, 0x1.2cc101e294a46p-163, 0.0,
     0x1.62448b8983552p-312, 0.0, 0.0, 0x1.d5fd08217bb1ep-587, 0x1.42f2e57a173e7p-20,
     0x1.4f3f37c915833p-731, 0.0, 0x1.643f8808ff434p-521, 0x1.5b3da86787759p-230,
     0x1.3ed12d0f7599bp-24, 0x1.d0acb9547fd3cp-22, 0x1.e4d94bd2a77bbp-236, 0.0,
     0x1.5a160b96b519bp-8, 0.0, 0x1.b7dda1b2ce6dp-16, 0.0, 0.0,
     0x1.ba16fa5ffef89p-240, 0.0, 0.0, 0x1.1bde7fb7901e2p-1004, 0.0,
     0x1.f01b654055ep-318, 0.0, 0x1.57fc838ecae93p-862, 0.0, 0.0,
     0x1.e7e91224006cbp-85, 0.0, 0x1.509ea181bcbe3p-285, 0.0, 0x1.8c18bed520f5p-301,
     0x1.cbb37c6b43e9bp-429, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d91180d2c96f4p-221,
     0x1.d5ced8ac08844p-5, 0.0, 0.0, 0x1.b98a87a6debe7p-126, 0.0,
     0x1.b58057d8ec63ep-790, 0.0, 0x1.e8fb051da26b1p-882, 0.0, 0x1.c8e313232cbe7p-56,
     0.0, 0x1.7a966c33a720bp-795, 0.0, 0x1.79c1e3fefc564p-296, 0.0,
     0x1.6b6c88678f0e7p-368, 0.0, 0x1.b96b07b9ab0dbp-30, 0x1.002c1dd79e462p-623,
     0x1.974d2ac5f6e44p-272, 0x1.cfb4b68705a9fp-630, 0.0, 0x1.7b7fdd2f0bc6ep-407,
     0x1.f01aef00e593p-849, 0x1.20c710420d5d3p-269, 0.0, 0x1.572de52a3cad5p-682, 0.0,
     0x1.8a7c2709a9674p-378, 0x1.0423890a37ecdp-763, 0x1.2aaba3e1e9e4fp-877,
     0x1.c82c5d3a97aebp-438, 0.0, 0x1.ced63d9ea7e12p-198, 0x1.10f178d415c67p-527,
     0x1.d978ef18b8f1ep-46, 0x1.03070d64d202cp-396, 0.0, 0.0, 0x1.ea0625dd5c191p-268,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2190350ce63p-570, 0x1.3d9f0b54cfd18p-606,
     0x1.13d49571fd897p-658, 0.0, 0x1.fe2aa7f05c51bp-542, 0x1.2092209e4e1e5p-929,
     0x1.6134ea018deccp-441, 0x1.d45da834e7b59p-631, 0.0, 0x1.8e3b5b20cef8bp-598, 0.0,
     0.0, 0x1.cdc0e3852df95p-474, 0x1.ae766c5cbe4a2p-199, 0x1.4b4007a17e82p-58, 0.0,
     0x1.98f7a2eb2afa4p-98, 0.0, 0x1.78670667d9176p-452, 0.0, 0.0,
     0x1.0bb21b918f15p-642, 0x1.086fd28e48829p-681, 0.0, 0.0, 0x1.d33c3f142c2ep-241,
     0.0, 0x1.0bda6e4bc3284p-756, 0x1.d267338cd48ap-687, 0.0, 0x1.fee41b8ec912ep-965,
     0.0, 0.0, 0.0, 0.0, 0x1.2245d0cc137f2p-914, 0x1.2c88a19a9a9acp-33, 0.0,
     0x1.d9127590bdcccp-283, 0.0, 0x1.5eb3cddabb1adp-374, 0.0,
     0x1.a836a07f971f8p-1005, 0x1.40648f0878879p-317, 0x1.c7f1163cb4d45p-246,
     0x1.d2061e4c97ffp-539, 0.0, 0x1.e9833d9bbbd7cp-173, 0x1.c9b59c3012546p-210, 0.0,
     0x1.9db4c2b6e0c6p-696, 0.0, 0.0, 0.0, 0.0, 0x1.70c0da248d5cdp-168,
     0x1.1bf616d47f1ccp-321, 0x1.588e1df8a54fep-331, 0.0, 0.0, 0.0, 0.0,
     0x1.8344404958822p-475, 0x1.f69c1367f7c91p-293, 0.0, 0.0, 0.0,
     0x1.64fcceb026942p-924, 0.0, 0x1.1e60ef41275b8p-678, 0x1.6854d36e0b967p-77, 0.0,
     0.0, 0x1.b72bb158107bep-34, 0.0, 0x1.10aafa2a42a72p-412, 0.0, 0.0,
     0x1.496be17c7f32bp-912, 0.0, 0.0, 0x1.07a993d9dc3dp-829, 0.0, 0.0,
     0x1.b559ca450619p-111, 0x1.71351c8aecc75p-470, 0x1.4c59e5eb96a8fp-815, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2efc4230f2997p-247, 0.0, 0.0, 0.0, 0.0,
     0x1.9ad89fad7ea91p-852, 0x1.9ded7dbc7d2dbp-443, 0.0, 0.0, 0x1.eaefdbfb7e3f1p-727,
     0.0, 0x1.5384504618103p-751, 0.0, 0.0, 0x1.da0ff34f9af19p-999,
     0x1.b1f01cd010474p-1013, 0x1.ae4f3fefa41d7p-560, 0.0, 0.0, 0.0, 0.0,
     0x1.f17414a050f1fp-194, 0x1.5ef07b32f03e2p-745, 0x1.39517fc7aa144p-287,
     0x1.9f5f4ede324dep-613, 0x1.822a9c7f557eap-719, 0.0, 0.0, 0x1.627b473c25179p-918,
     0.0, 0.0, 0x1.a4d4d72a152e8p-683, 0.0, 0.0, 0x1.3d9ab2734369bp-92, 0.0, 0.0,
     0x1.5a79ee7235af5p-486, 0.0, 0.0, 0.0, 0.0, 0x1.9ba2aed180351p-302,
     0x1.5e4da9eaf7344p-940, 0.0, 0.0, 0.0, 0.0, 0x1.d2b01dee5b39bp-206, 0.0, 0.0,
     0x1.9003242f258e4p-821, 0.0, 0x1.5840aae64116ap-839, 0.0, 0x1.b3f25017db64cp-995,
     0.0, 0.0, 0x1.82c08841854efp-714, 0.0, 0x1.4c34e1cc4bb8fp-898, 0.0,
     0x1.67a9659b4c2dap-801, 0.0, 0x1.b3e181198e83bp-22, 0x1.4e3aa662ea9c7p-61,
     0x1.f8fe6598d599cp-915, 0.0, 0.0, 0.0, 0x1.f714d3d29837dp-941, 0.0, 0.0,
     0x1.481957abf5059p-400, 0.0, 0x1.3730f439f5106p-780, 0.0, 0x1.d25169846c51p-75,
     0.0, 0x1.6c490b191be2fp-901, 0.0, 0x1.5439873a54971p-391, 0.0, 0.0,
     0x1.1a2fb121f5411p-669, 0x1.40d7ced4e17a8p-467, 0x1.68a850f6f15dap-925,
     0x1.7330973441f75p-128, 0x1.2aadacf8ac5bcp-402, 0x1.bdb441daed4fap-416,
     0x1.4b6a19e560013p-962, 0.0, 0x1.7b8357733adeap-350, 0x1.7db21601375e2p-547,
     0x1.328761d97a923p-765, 0x1.97f44e7157efp-789, 0x1.bb839fc63966bp-788, 0.0,
     0x1.f281ccc877d2ap-434, 0x1.046ad5b077af9p-364, 0.0, 0.0, 0x1.1ec33d139cea4p-751,
     0x1.63c7b2c0f165ep-616, 0.0, 0x1.40b3f6a603188p-790, 0.0, 0x1.6c2ca177b5c12p-208,
     0.0, 0.0, 0.0, 0x1.7e505f6f0e677p-707, 0x1.fb0c61aaad002p-855, 0.0,
     0x1.268f3ddcacadep-650, 0.0, 0.0, 0.0, 0x1.42a036a8946b5p-256,
     0x1.60075977c80a9p-196, 0.0, 0x1.59cb04cf14de1p-607, 0x1.a065a0b227874p-474,
     0x1.82587f92e60bfp-236, 0x1.79c10a4534bf9p-221, 0.0, 0.0, 0x1.3dcdd17a224c2p-84,
     0.0, 0x1.0fc5c302225e4p-899, 0x1.12e967311eea3p-589, 0.0, 0x1.04b4d3f7d2adfp-162,
     0.0, 0.0, 0x1.d24514efe6257p-218, 0x1.d5d4c3c7b8438p-962, 0x1.310790a7f659fp-625,
     0x1.57c18ab14a114p-91, 0x1.dc96fcaccda48p-428, 0.0, 0.0, 0x1.d3dc37a1e4dep-31,
     0x1.2b6a226d6b11ep-579, 0.0, 0.0, 0x1.c3de9d3ab2af9p-70, 0.0, 0.0,
     0x1.2052eff393585p-175, 0.0, 0.0, 0x1.96bcfdba5d6e5p-85, 0x1.602d07226d752p-365,
     0.0, 0x1.7d0e3cac16e19p-168, 0.0, 0x1.bbb5c5c7b0e29p-848, 0.0, 0.0,
     0x1.7e21b0afa9fb9p-742, 0x1.4c45d342f0ac2p-958, 0x1.e12f702ec0cfep-686, 0.0,
     0x1.48424f6a5cfbep-568, 0x1.2c405428dcfdp-477, 0.0, 0x1.e46de5ae8afdbp-699,
     0x1.5bcc59d907c02p-991, 0.0, 0x1.66ea0a26ce80bp-82, 0.0, 0.0, 0.0,
     0x1.8ee8efe26ba5ep-322, 0.0, 0x1.1a4dcc05f731fp-674, 0.0, 0x1.ecbbd0a694102p-464,
     0x1.e3a551310f60cp-697, 0.0, 0.0, 0x1.c61e32c0c0d31p-598, 0.0,
     0x1.2880ff2acbcd6p-72, 0.0, 0x1.7e93c06b763c6p-239, 0.0, 0.0, 0.0,
     0x1.99480429df0cap-895, 0x1.5331c93b9f747p-702, 0.0, 0x1.0b2d71b45d477p-85, 0.0,
     0x1.f438245cd7575p-529, 0.0, 0x1.3c277d7c221c7p-254, 0.0, 0x1.101c839e8e02fp-195,
     0.0, 0.0, 0.0, 0x1.bf903fddb6e34p-446, 0.0, 0.0, 0x1.c4de3dce80c07p-397,
     0x1.00788437e8d1cp-679, 0.0, 0x1.4d6d058019e7fp-261, 0.0, 0x1.3164385c404dep-848,
     0.0, 0x1.98d3a772da4d4p-879, 0.0, 0.0, 0x1.f7030d6ff1aaap-393,
     0x1.98efac32b8c6dp-746, 0.0, 0.0, 0.0, 0x1.db6f0714652c8p-559,
     0x1.dbec01e81df6bp-535, 0.0, 0.0, 0.0, 0x1.630d5b7be8e35p-741,
     0x1.7ec7e663342c4p-803, 0x1.e6e5f086be638p-865, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_modfd2_kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_modfd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_modfd2_kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
