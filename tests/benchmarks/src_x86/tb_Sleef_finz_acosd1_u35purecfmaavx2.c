/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd1_u35purecfma.c --function \
 *     Sleef_finz_acosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.1d98b982951fep-401, 0.0, 0.0, 0.0, 0x1.e3882408666cfp-933, 0.0,
     0x1.e02c9a05835cp-96, 0x1.68b4b5234bde4p-368, 0.0, 0.0, 0x1.3384ae1992b74p-605,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2cbb77bf4a41p-668,
     0x1.2667d0b329651p-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd5234a2ae53dp-888,
     0.0, 0.0, 0x1.75eaf3c9d36e4p-1001, 0x1.f4ec53d6e8f8p-244, 0x1.c701d832470fdp-970,
     0x1.9f59f6ff00fa8p-932, 0.0, 0x1.c3d3f98a92086p-166, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8701170f6e374p-394, 0.0, 0.0, 0x1.65b961dd4736ap-960, 0.0, 0.0,
     0x1.b1da59f4c27ecp-22, 0x1.08c6e6b185d2ep-968, 0.0, 0x1.cccccc12c011ap-81, 0.0,
     0x1.edeea03d45dbp-295, 0x1.57cace3ffb07dp-703, 0x1.8ecaeec622859p-383,
     0x1.2214bfe98dc07p-626, 0.0, 0x1.7762221fc7312p-160, 0x1.7084b30d51606p-298,
     0x1.cb8b15c31f726p-282, 0x1.ba3e6bc3ad114p-841, 0x1.c5dca497800d6p-507, 0.0, 0.0,
     0x1.4d69f456b46ebp-994, 0.0, 0.0, 0x1.e75b5608ecbfap-693, 0x1.a14f8d45dbbd4p-832,
     0x1.cc10de6443a15p-706, 0x1.9310d7ba1527p-23, 0x1.1e837c9b15a26p-818, 0.0, 0.0,
     0x1.bbb0838317f38p-670, 0.0, 0x1.502724d37aeb3p-35, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0dfd20596e17ap-478, 0x1.978c56943e38fp-726, 0x1.797307fad32fep-416, 0.0,
     0x1.89fdc911b4068p-515, 0.0, 0x1.6f916403e9a17p-258, 0x1.4c6dc14a44972p-526,
     0x1.ea9b3e34ac5cp-104, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec3bb37d03977p-27,
     0x1.2a97cba340543p-886, 0.0, 0.0, 0x1.5781acbc107ecp-969, 0.0,
     0x1.d66394128239bp-138, 0.0, 0.0, 0x1.bbb4f20de6d73p-741, 0x1.7f59fe88eb1fap-87,
     0.0, 0x1.84b2aa95c8892p-821, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8edbf8c5217b2p-887, 0.0, 0x1.86e2031597a1p-764, 0x1.b67e688ed52d3p-20, 0.0,
     0.0, 0.0, 0x1.a14a58829ccabp-411, 0x1.f44a8b369d017p-705, 0x1.bc52e111437dfp-837,
     0.0, 0.0, 0x1.c1e29baca8205p-135, 0.0, 0.0, 0x1.21571387a7c91p-468,
     0x1.3d43eb5352367p-51, 0.0, 0x1.9476dd6203db6p-88, 0.0, 0x1.d5de846d4da2dp-760,
     0x1.ba40eb7eb4ca5p-465, 0.0, 0.0, 0.0, 0x1.7a4fbcc0df626p-422,
     0x1.cb1a88253f509p-204, 0.0, 0x1.1ef886f542fb8p-980, 0.0, 0.0,
     0x1.deac279921e52p-58, 0.0, 0x1.1161721826d0fp-869, 0.0, 0x1.2d861b5374f69p-407,
     0.0, 0.0, 0x1.e685d6f54cd0ap-20, 0x1.5d82a61c73932p-197, 0x1.1dee6e610c772p-793,
     0x1.c252db929e00dp-440, 0.0, 0.0, 0x1.bf09482277801p-961, 0x1.8ac3eef4fc433p-802,
     0.0, 0x1.d4720789eaeb8p-190, 0x1.9f9d2aba1e472p-629, 0.0, 0.0, 0.0,
     0x1.cd512988a71dbp-765, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.37eaab61ba7dcp-302, 0x1.fb507bc2b66dbp-611, 0x1.90244972f4692p-110,
     0x1.8803debc08364p-896, 0x1.991b4838347e5p-934, 0x1.9498c8f22b42fp-459,
     0x1.d5ccda4e7f721p-116, 0.0, 0x1.e740bd3775c78p-186, 0x1.a3ae67e3ddb8bp-110, 0.0,
     0x1.6dec986f1e42dp-701, 0.0, 0x1.0f2abb9e722c5p-256, 0.0, 0x1.5642357863ceep-738,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94429f9d99c48p-484, 0x1.654a5007c9138p-99, 0.0, 0.0,
     0.0, 0.0, 0x1.cc9b799e4fc64p-560, 0.0, 0.0, 0x1.4e4fbf6b7680bp-80, 0.0, 0.0,
     0x1.ed503610c4b8p-183, 0.0, 0.0, 0.0, 0.0, 0x1.fa19c75174e4dp-836, 0.0,
     0x1.d0eb623a6c556p-820, 0.0, 0.0, 0.0, 0x1.a32f53a6ff952p-952, 0.0,
     0x1.d9a44500736bfp-811, 0.0, 0.0, 0x1.2516ffddc4ac9p-26, 0x1.8ed8306163c65p-612,
     0.0, 0x1.b66cba8c91f15p-493, 0.0, 0.0, 0.0, 0x1.38694ecf4eff9p-31,
     0x1.a05064ad53b97p-267, 0.0, 0.0, 0x1.e9e59f5a99366p-936, 0.0, 0.0,
     0x1.0fbb225db9011p-348, 0.0, 0x1.5bf9fc0e03a85p-557, 0x1.25e37f5b2194p-181, 0.0,
     0x1.7dc2a5c70d8abp-29, 0.0, 0.0, 0.0, 0.0, 0x1.5a18aa566ce58p-992, 0.0,
     0x1.b3d72ac12057dp-16, 0x1.6faf4d4168a43p-418, 0x1.f52434bc230d9p-106, 0.0, 0.0,
     0.0, 0x1.87c13a170f361p-155, 0.0, 0x1.75ecbe7563d07p-209, 0x1.e4d7aa256cc93p-219,
     0x1.041f738af5b2cp-115, 0x1.1071462f468afp-95, 0x1.b53f5c110a945p-421, 0.0, 0.0,
     0x1.4e840a5b51076p-514, 0.0, 0x1.aafae658b5bc3p-958, 0x1.0e82fe35a1ccap-212, 0.0,
     0x1.581533f47de5fp-139, 0.0, 0.0, 0x1.b1db4456201cp-219, 0.0,
     0x1.4b7859a0513e3p-1002, 0x1.8d4ab9cfc0b61p-487, 0.0, 0x1.dfa2725c8b6b3p-983,
     0.0, 0.0, 0x1.8284e9bc33b0cp-898, 0.0, 0x1.0866ce2117428p-976, 0.0,
     0x1.342d3dae23dbfp-639, 0.0, 0.0, 0.0, 0.0, 0x1.f27e4cd53a96cp-105, 0.0,
     0x1.503cfc6859c97p-480, 0.0, 0x1.dd658657babf7p-413, 0.0, 0.0,
     0x1.154fae15a0f8bp-950, 0x1.d3e0af0465674p-305, 0.0, 0x1.0946ea07fde17p-214, 0.0,
     0.0, 0x1.c6491ca70da28p-613, 0.0, 0.0, 0.0, 0.0, 0x1.dde3f26fe70e8p-654,
     0x1.301f4ef033d86p-62, 0x1.6dd7b8403848ep-468, 0.0, 0x1.d2abbb897ba5ap-887,
     0x1.ba6e716abe5dcp-327, 0x1.ac35c8bb47a6cp-629, 0.0, 0.0, 0.0, 0.0,
     0x1.bcc163e53ba93p-143, 0x1.9b20f53239e5bp-274, 0.0, 0.0, 0x1.d517765e416fdp-151,
     0x1.85c80da9f09p-642, 0x1.ed801005765ccp-822, 0x1.bc001d4785e06p-756,
     0x1.100d99cb2688ap-407, 0x1.4eb3b79c054cp-802, 0x1.aa2a7eca12111p-324, 0.0,
     0x1.e23a7c110f71fp-542, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b098d59e37e5ap-467,
     0x1.3fa4c6d478a16p-31, 0x1.d164605198963p-254, 0.0, 0x1.583e6c2f0d24ap-827, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ef3f031460a91p-250, 0x1.8f43186e7a298p-955, 0.0, 0.0,
     0.0, 0x1.3e2b3c544b4a3p-797, 0x1.ad935a2ab4da8p-266, 0.0, 0.0,
     0x1.7f7a1a47a860cp-166, 0x1.bbca1c3ef27d9p-854, 0x1.9e5f7bae4182cp-707,
     0x1.0271140f7150bp-740, 0x1.c3a6205094c7fp-741, 0x1.910e3070da4cep-171, 0.0,
     0x1.66dd028eab121p-798, 0.0, 0.0, 0.0, 0.0, 0x1.d6f4299ddd847p-570, 0.0, 0.0,
     0x1.bfcbcd082bebep-478, 0.0, 0x1.3600a08488e07p-575, 0x1.a26b0c2653734p-1021,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3524a1785d352p-546, 0x1.207fbe9c9c137p-468,
     0x1.ad050647f6fd2p-975, 0x1.2b865b3ea9b6bp-234, 0.0, 0x1.d350c518587a3p-391,
     0x1.5d3fdd604cbdfp-862, 0.0, 0.0, 0x1.6d291db8e68cep-40, 0x1.f7fb2d3dc4c8dp-721,
     0x1.17ab4cb0152a8p-164, 0x1.2cb75c9667badp-397, 0.0, 0.0, 0x1.7d5b0d979583cp-806,
     0x1.d8b44f59dbd07p-435, 0x1.48b7d21304ca3p-606, 0.0, 0.0, 0x1.795efd1ae75dbp-495,
     0x1.dbabccf205d12p-86, 0x1.114103cf1b8cep-849, 0x1.2f0f79351b7d8p-101, 0.0,
     0x1.810a6072d39c7p-401, 0.0, 0.0, 0.0, 0x1.b31ad21c22c6p-148,
     0x1.f3d25fecf19e4p-42, 0x1.122544b2acf5ap-70, 0.0, 0x1.d9aa31b0b8e7bp-428,
     0x1.3a0a53a74a738p-208, 0x1.db2e0ba76a51ep-708, 0.0, 0x1.1046032047b6p-702,
     0x1.4dc1670bf008cp-149, 0.0, 0x1.e17abcbc0926ep-876, 0.0, 0x1.f4d74a06f0c3fp-373,
     0.0, 0.0, 0x1.d6eb504bda54fp-87, 0.0, 0x1.24edc5aa289d8p-157,
     0x1.8135c5ed065dfp-1015, 0x1.8148429964b76p-867, 0x1.f21d14644ebe2p-702, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1e377de8cdd9fp-93, 0.0, 0.0, 0.0, 0x1.c0a54cf2c7fd2p-388,
     0x1.741f2205f3686p-503, 0x1.30982d21935f9p-104, 0x1.e7b0c42d634efp-966, 0.0,
     0x1.9e02588c7d421p-963, 0x1.211eac1971de3p-162, 0.0, 0.0, 0x1.d0763d4e62181p-60,
     0x1.3ce7a267c64b1p-481, 0x1.1d9d05ccaac1ep-562, 0x1.6dba9fa66968cp-79,
     0x1.43119bce3a135p-909, 0.0, 0x1.c7415599a55e4p-432, 0.0, 0.0,
     0x1.173536fedc8bcp-381, 0.0, 0x1.733d16e938b61p-902, 0.0, 0.0,
     0x1.47424236af547p-872, 0.0, 0.0, 0x1.b5a5380ab519ep-896, 0.0, 0.0,
     0x1.02d4a60dde333p-121, 0x1.dfead17429f9p-808, 0x1.49e46746d30ap-441,
     0x1.bd2a55239c3f1p-476, 0.0, 0.0, 0x1.7e224c6885795p-753, 0x1.28d93da7dc401p-254,
     0.0, 0.0, 0x1p0, 0.0, 0x1.919bc0280f1fbp-135, 0.0, 0x1.5f1d00b4796ffp-459,
     0x1.a9302c461643cp-722, 0x1.68b28baf5fc39p-35, 0x1.9588e41c1ac3p-306, 0.0,
     0x1.d47ae0d593781p-282, 0x1.4f9a45c339e39p-787, 0x1.89227e6c64396p-322,
     0x1.741735e6e2a49p-292, 0.0, 0x1.e6e850597ea5bp-796, 0x1.09a2a89aed256p-624, 0.0,
     0x1.2a1167ea6df2bp-212, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0x1.38e3dec84238ep-388,
     0x1.af0d8d1d8f766p-298, 0x1.601984ecf487dp-250, 0x1.6d579411ddf77p-281,
     0x1.8f7e56758af8ep-338, 0x1.43139aff1ddbdp-847, 0.0, 0x1.c73ee750a660bp-488,
     0x1.45134161601fap-414, 0x1.7f047772ec1cp-869, 0.0, 0x1.5d52b8df609adp-955,
     0x1.8985c761aa4dbp-237, 0.0, 0.0, 0x1.aabe68b9489a3p-662, 0.0, 0.0, 0.0, 0.0,
     0x1.4eb082f60b81dp-113, 0.0, 0.0, 0x1.e4da980a9e88bp-709, 0x1.d4081a459f115p-937,
     0.0, 0x1.38882f8682cd8p-931, 0.0, 0.0, 0x1.5eed50110ab57p-489,
     0x1.7e08b6e9fb7f4p-249, 0.0, 0x1.0d6efb86b8aa4p-862, 0x1.b666bd5f8b443p-288, 0.0,
     0x1.bd24bfbf3c78fp-515, 0x1.51da5146fa266p-583, 0x1.82eb0a318cc03p-973, 0.0, 0.0,
     0x1.0c38bc2990c96p-182, 0x1.f7d513aa0c57p-286, 0.0, 0.0, 0x1.31258692d69e6p-276,
     0.0, 0.0, 0.0, 0x1.3765dbdedeecep-627, 0x1.980a65b142104p-1020,
     0x1.4b7f603c3275dp-288, 0.0, 0.0, 0.0, 0x1.1a499c535dfap-850,
     0x1.5ccc71174fb03p-159, 0.0, 0x1.1d08abc5c7ec9p-586, 0x1.541a28fd1cf38p-82, 0.0,
     0.0, 0x1.9976eab9c81dcp-829, 0.0, 0x1.4f2fd37e264c3p-672, 0.0, 0.0,
     0x1.f2c165e3c2382p-120, 0x1.6969384e348d8p-929, 0.0, 0.0, 0.0, 0.0,
     0x1.8cbf6f4e337b2p-572, 0x1.7b280999836ddp-252, 0.0, 0x1.a5b142927bd9ep-217, 0.0,
     0.0, 0.0, 0.0, 0x1.8e4c6f727047fp-121, 0.0, 0x1.900b192b12fdp-360, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4ef5975bfc56dp-575, 0.0, 0.0, 0x1.a2d035537cb4fp-384,
     0x1.ed80dee26c9d1p-610, 0.0, 0.0, 0.0, 0x1.b41f1af1cf4bdp-320,
     0x1.3e4f68b0769b8p-19, 0.0, 0x1.5778393557f6ep-462, 0x1.90348015b3a88p-881, 0.0,
     0x1.0f472c575987cp-462, 0x1.8bc65e15917d5p-243, 0x1.55dc319baebbfp-667,
     0x1.12cc56ca1899dp-995, 0x1.081c6818d222dp-868, 0x1.209446e3bbe0cp-65, 0.0,
     0x1.e9ea122ee25e1p-18, 0x1.78ac8c12bfe89p-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6aed32797671bp-232, 0.0, 0.0, 0.0, 0x1.e5e9974cae068p-837, 0.0,
     0x1.3c0831908db74p-248, 0x1.7bd2fdea2eb92p-697, 0x1.bd2b786a8c5f1p-1014, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.567e28c9f6c94p-398, 0.0, 0x1.6df77923be611p-39, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.75b79cbd74d89p-658, 0x1.103363f83d822p-270, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6b213a637fd63p-483, 0.0,
     0x1.e1311017f6831p-275, 0.0, 0.0, 0x1.e9de08b63b604p-258, 0x1.7fa6fdb7ce455p-875,
     0.0, 0.0, 0.0, 0x1.b24abcdedbecdp-796, 0x1.77dd84c76643ap-559, 0.0, 0.0,
     0x1.08c2966b8e09cp-923, 0x1.1ce62d90a3535p-653, 0.0, 0.0, 0.0,
     0x1.2163ddd2de94ep-288, 0.0, 0.0, 0.0, 0x1.33b067e30072p-916,
     0x1.6bb98eac4d436p-666, 0.0, 0x1.a72da7b84b72ap-483, 0x1.3e343a3cbbc4ap-188,
     0x1.a034f9282d817p-840, 0.0, 0.0, 0x1.53b7c9acd2253p-182, 0x1.a200c7542f01p-839,
     0x1.0c93d2f99cffep-589, 0x1.1c95b68ca1ce8p-308, 0x1.18f0689a23567p-903, 0.0, 0.0,
     0x1.3af14049a40d9p-649, 0x1.dd49ba2c002d3p-609, 0x1.410336f0bcad3p-263,
     0x1.daec2fc985feep-150, 0.0, 0x1.e569b06ca1866p-273, 0.0, 0.0,
     0x1.65f59f77f9173p-483, 0x1.fab789aeb8dfep-477, 0x1.b90714793892p-838, 0.0,
     0x1.280f8aee8ee26p-617, 0x1.27665ca779401p-368, 0x1.b6b5f0f107701p-774, 0.0,
     0x1.0457e29df01b2p-621, 0x1.62ed929a50a82p-1019, 0x1.4f13929a41e7p-276,
     0x1.9044d0b9368abp-28, 0.0, 0x1.0e063c925d0d5p-260, 0.0, 0x1.ee0b7e21b29aap-739,
     0.0, 0.0, 0.0, 0.0, 0x1.3d16bde95285p-146, 0x1.1e03473d7aa3ep-251,
     0x1.9d4ebac842923p-133, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.049cf5a1d984bp-78,
     0x1.b2c14aa2f4cecp-409, 0x1.581ac7d7127a8p-113, 0x1.e9bd2d351c39dp-947, 0.0, 0.0,
     0x1.91cb86135f53bp-365, 0.0, 0x1.4da14b05405d5p-780, 0x1.761789f2008d9p-389,
     0x1.2247f5f694d03p-150, 0.0, 0.0, 0x1.89ac7987d9cfbp-922, 0x1.be5201aabad2fp-826,
     0x1.df7f630da5264p-59, 0.0, 0.0, 0.0, 0x1.89ca8987534d4p-791,
     0x1.40d60e0159fc6p-102, 0x1.c6908ed89461fp-569, 0x1.d9defbc1afca5p-202, 0.0, 0.0,
     0.0, 0x1.ee9f28fe6045p-372, 0.0, 0x1.4e1ee8696ebb7p-803, 0.0,
     0x1.68e462f7d1216p-440, 0.0, 0x1.7cd55bb0210a3p-453, 0.0, 0.0,
     0x1.94ab248dccf6fp-406, 0x1.a05ec49bde931p-891, 0x1.6e0c8c4031fa7p-12, 0.0, 0.0,
     0x1.469bdd6e6ec49p-935, 0.0, 0.0, 0.0, 0x1.af4a3037e0836p-360,
     0x1.1ba7c1a045b1cp-732, 0.0, 0.0, 0x1.3204b3f3b93e3p-765, 0.0,
     0x1.2a639b08bb3a8p-74, 0x1.8b4e5e842b528p-929, 0.0, 0x1.324d672cb0dabp-913,
     0x1.044be7282d993p-796, 0x1.1512f2f61afp-700, 0x1.87d0fdd1d7aa5p-236,
     0x1.6e586f5ba42c6p-155, 0x1.4c9a6c7fd1d97p-883, 0.0, 0x1.137b9e67e9132p-715,
     0x1.5de3dc088d662p-769, 0x1.271798da7bab1p-728, 0.0, 0x1.08daf0fdc538cp-638, 0.0,
     0.0, 0.0, 0.0, 0x1.0657a24298651p-455, 0.0, 0x1.6106d5577aae1p-356, 0.0,
     0x1.f8ca14fd17eb3p-41, 0x1.4bbc39015d663p-442, 0x1.6bc76da5bfc98p-104,
     0x1.e65f42d0d156cp-43, 0x1.d77e61cdb7283p-40, 0x1.185412476f2ecp-216,
     0x1.3d7e0339bb8f9p-146, 0.0, 0.0, 0.0, 0x1.3d098198f48dep-278, 0.0,
     0x1.8e60e1b33aacdp-849, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9c503985b9c1p-864,
     0x1.e6945abcdcffbp-312, 0x1.8bc9e8da5a7fdp-967, 0.0, 0.0, 0x1.f915a601e6d64p-60,
     0.0, 0x1.11b399a43630bp-735, 0.0, 0x1.9391e2465286ap-652, 0.0, 0.0,
     0x1.f9ba13ae4719p-103, 0x1.f206ef786bf32p-464, 0x1.d4f0069eac62ep-214, 0.0,
     0x1.489d3a92e31d5p-986, 0.0, 0x1.5e886173e1924p-444, 0.0, 0.0,
     0x1.6cbbeb396cc1ep-289, 0.0, 0x1.a4fa4dd8ab74fp-554, 0.0, 0x1.2394ba77e2f0cp-234,
     0x1.dc6c27264eacp-594, 0x1.aacc94a8b359ep-1020, 0.0, 0x1.378a83cb85376p-656, 0.0,
     0x1.26fda555fa47p-976, 0.0, 0x1.9c23863dec05dp-195, 0x1.cdbbb10bfa8fp-24,
     0x1.12b9697d7840cp-996, 0x1.5116981d7f31ap-836, 0.0, 0x1.6559efb981103p-949, 0.0,
     0.0, 0x1.4f92b530b291dp-147, 0x1.b1093ef0d4121p-170, 0.0, 0.0,
     0x1.3e1931d2702dbp-987, 0.0, 0x1.01e77d32b4c28p-719, 0.0, 0x1.278cbd0ea751ap-719,
     0x1.b24eca478be45p-143, 0x1.0ad2046969e46p-809, 0x1.87ecf452d78adp-1000,
     0x1.ce995fc44805dp-865, 0x1.f4774837336f4p-380, 0x1.124420cced45p-897,
     0x1.99ad5471889d4p-248, 0x1.7fd8f6ac5207p-260, 0.0, 0.0, 0.0,
     0x1.0a255c000ca27p-582, 0x1.f72ea5cfedb38p-374, 0x1.39e6202f8a05ep-1007,
     0x1.f9e910f358626p-834, 0.0, 0x1.0a089c360bc2p-307, 0x1.b73f634071e41p-552, 0.0,
     0.0, 0.0, 0.0, 0x1.38cce3a6deedfp-555, 0.0, 0x1.350dcde59c8d3p-184,
     0x1.0e0bcc75b8e61p-401, 0.0, 0x1.10aa0fb293fe3p-49, 0.0, 0.0, 0.0,
     0x1.b5e465f9832ccp-698, 0.0, 0.0, 0.0, 0x1.15a2ea27b104ap-514,
     0x1.68c253b5f1881p-165, 0x1.1479f61a8e906p-1013, 0x1.3d8d12063b4d2p-323,
     0x1.fa4588053e5aap-354, 0.0, 0x1.3fa41c2ee0298p-482, 0x1.a033983e7bf6bp-175,
     0x1.f17070a3bd54bp-406, 0x1.fd4533935caf6p-529, 0.0, 0.0, 0.0,
     0x1.6fc1dee20093dp-622, 0.0, 0x1.0e578d5edcad9p-5, 0.0, 0.0,
     0x1.2501fe473d0adp-190, 0.0, 0.0, 0x1.744210646a7afp-610, 0x1.e5c9fb07b96ecp-803,
     0.0, 0x1.eb2e2b921bfddp-272, 0x1.ba5c4be316f1ap-744, 0.0, 0x1.e257f70a298a1p-492,
     0x1.04dcecb1a6fd4p-475, 0x1.048d7342365ap-941, 0.0, 0.0, 0.0, 0.0,
     0x1.0d04a8c8dc295p-691, 0x1.b6202fd84e3cp-962, 0x1.798e264d3a6a9p-42,
     0x1.b9331fb717852p-13, 0x1.c905528223c6fp-967, 0.0, 0.0, 0x1.28ded3c7de276p-286,
     0x1.9b903494a13e3p-711, 0.0, 0.0, 0x1.6bd5472f5fad5p-151, 0x1.3a3cd51225876p-356,
     0x1.cb4af0a690cabp-568, 0x1.c246e9e3503a5p-177, 0x1.bf5036ea5e318p-322, 0.0,
     0x1.b4dc0a43de7b8p-710, 0.0, 0.0, 0x1.c7f88e9529a04p-630, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9690d070d12cp-788, 0.0, 0.0, 0x1.9bc23e97d12fdp-465, 0.0,
     0x1.81387bdcc0f34p-259, 0x1.d97e54a35ae5dp-177, 0.0, 0x1.c17586caa3f36p-739,
     0x1.d68ade126e4e2p-736, 0x1.542208a6612e4p-1013, 0x1.caa48c86b8473p-238, 0.0,
     0x1.13e48cf2be0e6p-165, 0x1.f434d46bb6f5ap-54, 0.0, 0x1.40cc6ddcc1275p-104, 0.0,
     0x1.a7a2ac2e6c9f5p-422, 0x1.07881e1a3fca4p-945, 0x1.f6bc348cd9fbbp-161, 0.0, 0.0,
     0x1.360dbac683e51p-903, 0x1.fa4797c0612c3p-64, 0.0, 0x1.9d22ca7222f65p-844, 0.0,
     0x1.443de7e9e929p-227, 0.0, 0.0
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_finz_acosd1_u35purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_acosd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
