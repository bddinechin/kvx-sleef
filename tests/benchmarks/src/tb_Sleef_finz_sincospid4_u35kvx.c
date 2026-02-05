/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid4_u35kvx.c --function \
 *     Sleef_finz_sincospid4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.425045c19b85cp-275, 0x1.1d5ac8157807bp-610, 0x1.97eccbfbb4d14p-497,
     0x1.9a0cd8d29c84dp-799, 0.0, 0.0, 0x1.d33715ed32ed4p-554, 0x1.491497bca6d01p-701,
     0.0, 0.0, 0x1.0baec5dc15b9cp-538, 0x1.6cb121c488da2p-219, 0x1.429974994d2afp-962,
     0.0, 0.0, 0x1.b33a3f413105fp-269, 0x1.d03359bc3e948p-169, 0x1.d6827169f0f09p-540,
     0x1.464b1a7a1153bp-152, 0x1.d925c17ca4e3ap-616, 0x1.4cb0a39f3892ap-976, 0.0, 0.0,
     0.0, 0x1.1f6dfc401167ep-941, 0.0, 0x1.90e30ed37d261p-940, 0x1.ea7602abbd2efp-729,
     0x1.20ec405f9489bp-687, 0.0, 0.0, 0.0, 0x1.93f77a3fa818cp-346, 0.0, 0.0,
     0x1.f0f49b1df700fp-307, 0.0, 0x1.e1ea2632b230ap-577, 0x1.efcc72792004dp-267, 0.0,
     0.0, 0.0, 0x1.245523830331dp-957, 0.0, 0.0, 0x1.f5364ab6f3ef8p-252, 0.0, 0.0,
     0x1.e124ba175dac9p-640, 0x1.cb21ebfa51df6p-252, 0.0, 0x1.75e87757c8eafp-96, 0.0,
     0x1.4241a767c59f8p-32, 0.0, 0.0, 0x1.f5fc09260958ap-170, 0x1.30ece1d2c56a6p-264,
     0x1.4c842e394c428p-600, 0x1.31dc0d80d4e26p-403, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.68cfb572c3f7bp-430, 0.0, 0.0, 0x1.a8349e79568d7p-278, 0x1.4570922ee8b2p-158,
     0x1.6d70be551a27ap-733, 0x1.424117f90a175p-185, 0.0, 0x1.8c0fe055131e2p-800, 0.0,
     0x1.398aa2856196bp-165, 0.0, 0.0, 0x1.0169003a1be1p-570, 0x1.ea9c04a3aece6p-667,
     0.0, 0.0, 0.0, 0.0, 0x1.b11cf29fe6c03p-22, 0.0, 0x1.a599328dc1f38p-91, 0.0,
     0x1.48c1b152cb4bcp-151, 0.0, 0.0, 0x1.cb53678f80834p-81, 0.0, 0.0,
     0x1.400958c5872c2p-1013, 0.0, 0.0, 0.0, 0x1.fb4722f4ccb72p-849, 0.0, 0.0, 0.0,
     0x1.208e06122af36p-736, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8d7f288728dbp-480,
     0x1.afe4a7b156038p-38, 0.0, 0.0, 0.0, 0x1.450ae0e5c6a2dp-372, 0.0,
     0x1.31ce0b41d6a88p-523, 0x1.8baad6a70226p-655, 0x1.b764e9bd4c939p-963,
     0x1.5097acfea43abp-440, 0x1.7e1ca23a3c6ebp-821, 0.0, 0.0, 0x1.0d7bf2126b51bp-986,
     0.0, 0.0, 0x1.9fff7d254113p-17, 0.0, 0.0, 0.0, 0.0, 0x1.5c3cd75af217fp-292, 0.0,
     0.0, 0.0, 0.0, 0x1.387b2dbced6c9p-956, 0x1.b4ba1807597efp-312,
     0x1.7cd1bfe7840bbp-280, 0x1.b8c88c2b7ff1cp-452, 0x1.e98b4a9f4780dp-16, 0.0,
     0x1.b89539aab2078p-86, 0.0, 0.0, 0.0, 0x1.3946dc9a2a0bcp-340,
     0x1.c30d863dc8036p-298, 0.0, 0x1.06e933b01bbc6p-740, 0x1.3c5be36a130b3p-973, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.29d3b9e1857ep-724, 0x1.82c4ea5aaf605p-307,
     0x1.1e54f917c098fp-512, 0x1.a4dd252b9599dp-857, 0.0, 0x1.d497b0f63d309p-709,
     0x1.956dca376a17cp-948, 0.0, 0.0, 0.0, 0x1.63148db396f32p-82,
     0x1.574621280b2bep-945, 0x1.3c392ceb7761bp-775, 0x1.bbcb02a934274p-526, 0.0, 0.0,
     0.0, 0x1.b3b519b91cbffp-108, 0x1.4af416315576cp-281, 0.0, 0.0, 0.0,
     0x1.61defe56d00a6p-64, 0.0, 0x1.c7f55ba834d7ep-781, 0.0, 0.0,
     0x1.c233f00174463p-317, 0.0, 0.0, 0.0, 0.0, 0x1.e0a038e717ffbp-156,
     0x1.841125cbe0621p-63, 0.0, 0x1.773ecc793b842p-113, 0.0, 0x1.a7f9928a5dd0fp-333,
     0.0, 0.0, 0x1.fc4baee3cf028p-930, 0.0, 0x1.203b4fdc69a01p-588,
     0x1.9e198f2dcc5e6p-570, 0.0, 0.0, 0x1.a1dc40663ad62p-734, 0.0, 0.0,
     0x1.481fee96f8762p-415, 0.0, 0.0, 0.0, 0x1.2232578ec478fp-125,
     0x1.f49d22b0e6afep-806, 0x1.6f7d296ad4ca8p-876, 0x1.1fac2b0387a45p-258, 0.0, 0.0,
     0.0, 0.0, 0x1.64a0cd29c383fp-85, 0.0, 0x1.8799dec2e55eap-511, 0.0,
     0x1.002f01547215bp-907, 0.0, 0x1.737e6717d4b9ap-744, 0.0, 0.0,
     0x1.83a4374079c3cp-67, 0x1.a208a9cd543c9p-601, 0x1.c4955f27d906p-407,
     0x1.7b7df5aab736dp-870, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63d3f5f5d9f0dp-213,
     0.0, 0x1.761357dc7d4dp-242, 0.0, 0.0, 0x1.f5ae8014fcf3cp-240,
     0x1.6523385c35f1ep-331, 0.0, 0x1.a7a7acebb1c28p-325, 0.0, 0.0, 0.0,
     0x1.0a6ea2be0c6afp-462, 0.0, 0.0, 0.0, 0x1.0c54833f8cd51p-922,
     0x1.f9d473e50a93ep-141, 0x1.bc8438ad6da7dp-793, 0.0, 0x1.459bc213decdfp-639, 0.0,
     0.0, 0x1.b5f2446e5daep-863, 0.0, 0x1.170850ccc756ap-823, 0.0, 0.0,
     0x1.b002d50bfc98p-892, 0x1.ee60ed0dc024dp-926, 0x1.1f77dd1c73c87p-236,
     0x1.8804468c43c49p-116, 0.0, 0x1.6b80e17858982p-895, 0.0, 0.0,
     0x1.21054111ec6adp-620, 0.0, 0x1.30e6c28f082c4p-905, 0x1.218f98e868fep-30,
     0x1.06fbe06241ae1p-217, 0.0, 0.0, 0x1.921641bb4c4a8p-295, 0x1.855a4a528057cp-197,
     0x1.ea47a862804bfp-925, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f738401cf1d4p-99, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a5612afbddaep-906, 0.0, 0.0,
     0x1.2cab19eeeecc5p-657, 0x1.b3ecef50cbabdp-440, 0.0, 0x1.cbe57d2ac481fp-342, 0.0,
     0x1.fd820ddf64705p-487, 0x1.1db92d1404c5ap-14, 0x1.5ea462cb15cc1p-252, 0.0,
     0x1.364673e1c9981p-498, 0.0, 0x1.8368121e65537p-435, 0x1.24f846a9b8707p-15, 0.0,
     0.0, 0.0, 0.0, 0x1.efd66caa63d3dp-179, 0.0, 0.0, 0x1.7260d9f377654p-772, 0.0,
     0x1.7b50045ee6fb1p-737, 0.0, 0.0, 0.0, 0.0, 0x1.8ba581d40ecf3p-544, 0.0, 0.0,
     0.0, 0x1.e3b0583a6b6cfp-949, 0x1.7b129127c850fp-178, 0.0, 0.0,
     0x1.251aa7c77259dp-766, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8392e98bff71p-109,
     0x1.8478c3d00e38p-250, 0x1.b3ab9540d4adap-799, 0.0, 0.0, 0x1.9e9709ca386adp-848,
     0.0, 0.0, 0x1.ef07dad383b2fp-490, 0.0, 0x1.338394d94628ap-193,
     0x1.c42cbbcf07a1fp-945, 0.0, 0x1.ad884ea3f78a5p-80, 0.0, 0.0, 0.0,
     0x1.c1e7d8260a36p-495, 0x1.6b8606fa1a49p-161, 0x1.15f935a77d5a3p-238,
     0x1.f9b8aa235b278p-651, 0.0, 0x1.4e23b670b79a2p-652, 0.0, 0.0,
     0x1.2249518a9ba16p-84, 0.0, 0x1.9089f5c570f8fp-66, 0.0, 0.0,
     0x1.e4e6249879371p-241, 0x1.9c571eae530acp-318, 0.0, 0.0, 0x1.c1ed05eccedb9p-535,
     0x1.f994e2a1820a4p-464, 0.0, 0x1.8d0421a98d4aep-889, 0.0, 0x1.f91600f6184b1p-959,
     0.0, 0x1.cbe14de90500cp-384, 0.0, 0x1.411756f3bdef5p-352, 0x1.7e8c12ce941cp-628,
     0.0, 0.0, 0x1.028b62447b9b8p-212, 0x1.2b3fe80457eddp-817, 0x1.524215aa5cad4p-387,
     0.0, 0x1.54e1bcf000d11p-1004, 0.0, 0.0, 0x1.cf437eb254792p-50, 0.0,
     0x1.3f7b7fa22f66cp-1000, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8802aac0d311ep-187, 0.0,
     0x1.e3a21b1a2067dp-768, 0.0, 0x1.fed4f9fe464c4p-437, 0.0, 0.0, 0.0,
     0x1.535e7cb6dbf8cp-562, 0.0, 0.0, 0x1.094e9d53c7e7ap-41, 0.0, 0.0,
     0x1.eaeb4d4391616p-87, 0.0, 0x1.7bce185402487p-208, 0x1.adcab827bfaf5p-810,
     0x1.dac7036a3b151p-855, 0.0, 0.0, 0x1.744276e4cf6c1p-881, 0x1.a5bea43beb5e4p-514,
     0.0, 0.0, 0.0, 0x1.101bc3cbb2c95p-652, 0x1.bb72bfcc6ce8dp-675, 0.0,
     0x1.40d36055f1b52p-29, 0.0, 0x1.abcf8ac96a0c9p-513, 0x1.3b7548362fc06p-410, 0.0,
     0.0, 0x1.71412bcb5d977p-954, 0x1.7b61d34222028p-69, 0x1.a1db8d0719f9fp-681,
     0x1.041d7f90cd2efp-752, 0.0, 0.0, 0.0, 0x1.36f776cd66f93p-369, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4b074d1f6a26bp-731, 0.0, 0x1.69190bef99165p-964, 0.0,
     0.0, 0.0, 0.0, 0x1.a324e6c468707p-534, 0x1.aa6566be13321p-515, 0.0, 0.0,
     0x1.2a2c2aea6fb6dp-278, 0x1.9f536feb78dcep-324, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e1a8ef5772f4p-729, 0x1.94ac5e4f0576cp-295, 0x1.218619b3981adp-332,
     0.0, 0.0, 0.0, 0.0, 0x1.f3039ca65a8a1p-915, 0x1.c2cbc86892eddp-952,
     0x1.7f515995f0151p-276, 0x1.e18753ddaffc9p-480, 0.0, 0x1.5a1caeb182463p-590, 0.0,
     0.0, 0.0, 0x1.edbe6fb7068ecp-1010, 0x1.d738b5d5bafc7p-874,
     0x1.53ed78745c74dp-679, 0.0, 0.0, 0.0, 0.0, 0x1.01ba7d0914372p-640,
     0x1.a8cfa730d46d9p-796, 0x1.4194cbd11ab68p-365, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c802755f71261p-854, 0x1.7baecada1faf3p-570, 0x1.b1bd3584c2e2cp-127,
     0x1.5b8b798a1809fp-357, 0.0, 0.0, 0x1.06dc260518bb6p-796, 0.0, 0.0,
     0x1.2f0962c004d02p-46, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.69dcfcfcd6662p-618, 0.0, 0.0,
     0.0, 0x1.6fa53d6f56b95p-663, 0.0, 0.0, 0x1.0616e154e74cap-868,
     0x1.409cc4746f659p-593, 0x1.0eeb42bd6ecb8p-820, 0.0, 0x1.1d6246183ad01p-504, 0.0,
     0.0, 0.0, 0.0, 0x1.5c307de82f9f9p-969, 0.0, 0.0, 0x1.611948f642dffp-315,
     0x1.964136c66eefp-248, 0x1.d25368b708a05p-857, 0x1.f34d030c512a2p-934, 0.0,
     0x1.40ed6a545a751p-741, 0.0, 0x1.ab5efafa3b736p-196, 0.0, 0x1.412ba8be2935ap-802,
     0.0, 0x1.040f903fa7f53p-213, 0.0, 0x1.9152984eae8fep-852, 0.0,
     0x1.397ee9102a86cp-442, 0x1.ec2adfae179e6p-125, 0.0, 0.0, 0.0, 0.0,
     0x1.5f78fd4b13d9ep-673, 0x1.5279ebfb29c3bp-506, 0.0, 0.0, 0.0,
     0x1.7e5c7525fff17p-805, 0x1.ec9ba0ef77658p-765, 0x1.8e33c8e01cbc2p-698,
     0x1.e94b01e48fbfap-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.069cb0fb89f47p-261,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f398aebbfbbcdp-557, 0x1.5506af53e7d1cp-317,
     0x1.564d922ce7b7fp-729, 0.0, 0.0, 0x1.7aae377f4afeap-558, 0.0, 0.0,
     0x1.2373670549831p-477, 0x1.86c4d110631a7p-42, 0.0, 0.0, 0.0,
     0x1.efec718220311p-729, 0.0, 0.0, 0.0, 0.0, 0x1.e37fcbc830bd8p-311,
     0x1.68e4ebe81f4bp-60, 0.0, 0x1.0dfbf7d0d8742p-903, 0.0, 0x1.5f9b21c8b27cbp-933,
     0x1.4c8e413ae2caep-90, 0.0, 0.0, 0x1.5d5e024a8b27dp-510, 0x1.e6dc3491c081fp-259,
     0x1.541969ab082cap-645, 0.0, 0x1.c4a2069240c4cp-104, 0x1.a2df58588ea6fp-30,
     0x1.e50786a1dec98p-922, 0x1.c66f067adee49p-774, 0x1.2fe1db883a8d2p-577,
     0x1.0c831448d3cafp-205, 0x1.2dd5fe8a35717p-458, 0x1.fff8ef541c213p-421,
     0x1.d27ceb5a93292p-437, 0.0, 0.0, 0x1.8bcecef56c182p-960, 0x1.15015c7729335p-220,
     0.0, 0x1.a043b3d095a54p-65, 0.0, 0x1.9aa173854969p-121, 0x1.60535834d69acp-1020,
     0x1.b56357f1de65dp-636, 0x1.98d0fea8ea953p-811, 0.0, 0.0, 0x1.82ce2d9a6d483p-98,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e65d70c164c0cp-636, 0x1.86eda1b578448p-218, 0.0,
     0x1.b33f868633a9p-777, 0x1.d8441200a2b69p-57, 0x1.29257d12416cp-481, 0.0,
     0x1.528ed2721f5a3p-342, 0x1.de02a94a63eadp-300, 0.0, 0.0, 0x1.519a4f608a19bp-342,
     0.0, 0.0, 0.0, 0x1.c7cce7eee5ee9p-654, 0x1.bf052278ba372p-826, 0.0,
     0x1.7faff2cac2656p-262, 0.0, 0x1.3e050349d9911p-867, 0x1.c5524bf0e97c3p-186, 0.0,
     0x1.a56213d2452e4p-851, 0x1.7bc3ed2de13ap-271, 0x1.14fb2ab0e1bcdp-769, 0.0,
     0x1.d6610b627fc89p-501, 0x1.34c0ebdd7a22p-819, 0x1.9160c48aed734p-307, 0.0, 0.0,
     0.0, 0x1.9ed13d43c5f84p-773, 0.0, 0.0, 0.0, 0x1.f6d28c6228045p-405,
     0x1.df4db1d6deee4p-606, 0.0, 0x1.6259ad8965e82p-694, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2f1e132c86af2p-999, 0.0, 0.0, 0.0, 0x1.81efc73cdbbddp-586,
     0x1.0c326eea74e9p-363, 0x1.e5e9e677108f4p-409, 0x1.9de7261708344p-343,
     0x1.1f473bfa7e12ep-860, 0x1.c306e40741a76p-140, 0.0, 0.0, 0x1.cacf1eee5e4fp-915,
     0x1.dd3b54cb3cccp-790, 0x1.d69d27ed79369p-427, 0.0, 0x1.02d12193f0bd9p-263, 0.0,
     0x1.3f9753a96d6a5p-345, 0x1.1a168fc949fc4p-477, 0x1.ed61ecf4c8576p-489, 0.0,
     0x1.26369fc8843d8p-758, 0.0, 0x1.4bca6203da2dcp-867, 0x1.54b9f7bd5f6dfp-999, 0.0,
     0x1.fc7d3b15a2326p-608, 0.0, 0x1.c7ca13397ef4dp-67, 0.0, 0x1.1956beb9b64a2p-618,
     0.0, 0.0, 0.0, 0.0, 0x1.9a9096efa702bp-308, 0x1.85c07cd92986fp-124, 0.0,
     0x1.2170f682e2cb2p-115, 0x1.0e4f040560c1ap-314, 0.0, 0x1.975c8f947abcep-546, 0.0,
     0.0, 0.0, 0.0, 0x1.1d9961dbe8b22p-1009, 0x1.a5909c9c8a49dp-554,
     0x1.2490116b39f48p-113, 0x1.f63d5467349c4p-1021, 0.0, 0x1.8d50305508061p-192,
     0x1.183165410d5e2p-117, 0.0, 0.0, 0x1.e9bdcb2bab7fcp-774, 0.0,
     0x1.4006da2d7b596p-378, 0x1.adb4b763481bfp-861, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af7c04f22b4fep-951, 0x1.bbc4b26ff0864p-239,
     0x1.0dc34b9dd490cp-591, 0x1.b734bfc9c1ff1p-755, 0.0, 0.0, 0x1.5d1fb1a65df09p-153,
     0x1.917123dde31a3p-965, 0.0, 0x1.cba76395f5a56p-289, 0.0, 0.0,
     0x1.5f95ab5942229p-932, 0.0, 0.0, 0x1.65a2b42f0882p-217, 0.0, 0.0, 0.0,
     0x1.a1a15f55a79b7p-801, 0.0, 0x1.b31f18c0beb2ep-427, 0.0, 0x1.296e24cb1c352p-339,
     0x1.d1a31c1cd5e51p-800, 0.0, 0x1.ff079f7d56d65p-369, 0.0, 0.0,
     0x1.18488b38b3f79p-72, 0.0, 0.0, 0.0, 0x1.c6fc9bc5fa067p-547, 0.0, 0.0,
     0x1.5a042f6a68afbp-148, 0.0, 0.0, 0x1.eee5285e7debbp-738, 0.0,
     0x1.7b68781f34e1ep-109, 0x1.c2801d9bf4eacp-319, 0x1.234f6e9b16214p-535, 0.0,
     0x1.3d223cb18f1b7p-567, 0.0, 0x1.c3b0c833eaa37p-476, 0.0, 0.0,
     0x1.d83dc208681dbp-338, 0x1.05ff475fa2e6ap-848, 0x1.0355a3f405f93p-322, 0.0,
     0x1.24a0c07a322ccp-589, 0.0, 0.0, 0x1.56054e0a4d201p-274, 0x1.5b2cc2b8bda5dp-555,
     0.0, 0.0, 0x1.cf12b196eca4ap-77, 0.0, 0x1.783f231bafe33p-823, 0.0,
     0x1.e293054cb7512p-807, 0x1.71d09296ec4b7p-344, 0.0, 0x1.aed55959b11f6p-594, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3e7b22365c0ecp-311, 0x1.90fedaa029ff8p-277,
     0x1.b3520c8a30ed2p-184, 0.0, 0.0, 0x1.7e66f8c5845afp-339, 0.0, 0.0, 0.0, 0.0,
     0x1.8a33174f21201p-308, 0x1.e34d4e0e11c88p-371, 0x1.8e0794225862ap-2,
     0x1.30bb5a9dabd6bp-693, 0x1.80d661377cb18p-257, 0x1.be4886dab4a45p-471,
     0x1.80a06d0cd41c8p-941, 0.0, 0.0, 0.0, 0x1.0336db2c49879p-979, 0.0, 0.0,
     0x1.35ac10db9e31p-688, 0x1.6a7de3ef59c93p-754, 0x1.84168f569b123p-789,
     0x1.cebb4cccaf3dp-208, 0.0, 0x1.86bee7babe18bp-245, 0.0, 0x1.ab7d88ecde4a6p-165,
     0.0, 0x1.c54dfa39bbc3bp-225, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a8015d5e25e1p-70, 0.0,
     0x1.554e9144a70a5p-158, 0x1.b24cdee114dc3p-322, 0.0, 0.0, 0x1.b979800f8ebbp-472,
     0x1.4cc9b26ee020cp-974, 0x1.64709b7092dc2p-60, 0.0, 0x1.e1aaff8f806eap-183, 0.0,
     0.0, 0x1.0bcc2c7237e2ep-46, 0x1.a6e91758d7aebp-660, 0.0, 0x1.be54accfd19c4p-419,
     0x1.5b8b1d113d4p-130, 0.0, 0.0, 0.0, 0x1.a1cf728d1c92ep-564, 0.0, 0.0,
     0x1.290de0ed9575fp-906, 0.0, 0x1.e3e8989b3515ep-614, 0x1.387c35b211defp-853,
     0x1.dc42020372731p-933, 0.0, 0.0, 0x1.91af5c42c3375p-815, 0.0, 0.0,
     0x1.08f74bfba3476p-72, 0.0, 0.0, 0x1.38ee09e410e07p-112, 0x1.9ee4892ae5d9bp-429,
     0x1.45e3329223a3ap-130, 0.0, 0x1.9c8fe7acadc2p-916, 0x1.3287d7013ff72p-476,
     0x1.1a3a6d28d03e7p-891, 0x1.98f935b5bb741p-490, 0x1.86015f5befe8dp-323, 0.0,
     0x1.67b3e5ba5ec6fp-651, 0x1.de420e3ee2f52p-133, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c53f4338ae563p-297, 0.0, 0.0, 0x1.5e25ea88816ecp-468, 0.0,
     0x1.233088b569fd1p-60, 0.0, 0.0, 0x1.aa613f271de78p-990, 0.0,
     0x1.b1a4e48a84062p-714, 0.0, 0.0, 0x1.2e2ae7d6249d3p-747, 0x1.950db26f9309fp-624,
     0x1.b94e0460de816p-620, 0.0, 0.0, 0.0, 0x1.bd1da6d45a914p-465, 0.0,
     0x1.4331d1bf9b313p-873, 0.0, 0.0, 0x1.fb43bafa4ccb8p-697, 0.0,
     0x1.37450b41f695cp-919, 0x1.cbcab428f2d56p-998, 0.0, 0.0, 0.0,
     0x1.61a35757cf601p-677, 0.0, 0x1.3b13ee77c0938p-830, 0.0, 0.0, 0.0,
     0x1.881c381e14b11p-569, 0x1.9a1de5f08cde7p-497, 0x1.3cfddcdb3f70fp-911,
     0x1.1ead202305881p-230, 0.0, 0.0, 0.0, 0x1.30111ad8bc57bp-452, 0.0,
     0x1.a7b962be3cebap-964, 0x1.8e7b32a328ffdp-431, 0x1.b1bf6ffeb1ef8p-662, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.848e78039731ep-798, 0x1.193c70911b743p-246, 0.0, 0.0,
     0.0, 0x1.17b7223556a52p-139, 0x1.10be8c6ab481cp-518, 0.0, 0.0,
     0x1.bc9f0403ab5e6p-948, 0x1.fa12bce71657ep-498, 0x1.94af57b28859ep-101,
     0x1.389c022e4b05ap-718, 0x1.8049cc3d85cf4p-501, 0x1.5d023cfb41f5ap-421,
     0x1.a4bc04f94b077p-789, 0.0, 0.0, 0.0, 0x1.09042fd4809d2p-490,
     0x1.514e2c15d04e8p-981, 0x1.740defcfb08ap-299, 0x1.d268f50ce746cp-995
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincospid4_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincospid4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincospid4_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
