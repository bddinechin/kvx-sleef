/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand4_u10kvx.c --function Sleef_tand4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0x1.e90267897f9b1p-410, 0.0, 0x1.a75f86660e4a7p-112, 0x1.9ea55a5537df2p-52,
     0x1.c69eea62ddda6p-939, 0x1.44817debe9cd2p-233, 0.0, 0.0, 0.0, 0.0,
     0x1.0a753e1ea243p-594, 0.0, 0x1.1b4e8287aeb4cp-585, 0.0, 0x1.0aee112c4e1cp-329,
     0.0, 0.0, 0x1.4d0f4e3319618p-78, 0x1.65361ee5cf9aap-418, 0.0,
     0x1.36805531a45fbp-783, 0.0, 0.0, 0x1.f0a4f7b04c6d2p-611, 0.0,
     0x1.9d07c9776e9e4p-43, 0x1.a5a4d7bc204e9p-470, 0.0, 0.0, 0x1.b30ac84393778p-552,
     0x1.fd24bfb4537d6p-403, 0x1.8b832e846bd1ep-168, 0x1.434441afebb89p-233, 0.0,
     0x1.5ac32cb846917p-555, 0.0, 0.0, 0x1.69c7eba64706fp-353, 0x1.06636776d5358p-525,
     0x1.c648b24038e7p-375, 0.0, 0x1.7cfda2778253p-810, 0x1.5786352ecb109p-1006,
     0x1.73a46ad1fd8d7p-104, 0.0, 0x1.c36a92d3c1658p-181, 0x1.9e3261cc4725cp-349,
     0x1.c8cb6f7165b8bp-299, 0x1.af61123e01338p-685, 0x1.7f99cf91f5e87p-18, 0.0,
     0x1.4a2049b81315fp-1015, 0.0, 0x1.188f08bafc459p-462, 0x1.367237fa5946ep-890,
     0.0, 0x1.987972e45e8e9p-1008, 0.0, 0x1.c8c6fb09c3ffap-737,
     0x1.2b6dbb2cc9161p-714, 0.0, 0.0, 0.0, 0x1.e82535e28e07cp-128,
     0x1.2e8753c009c5cp-746, 0x1.2e0df436080b1p-839, 0x1.4ff691ddcc012p-860,
     0x1.4583bb63bfffap-781, 0.0, 0x1.f0be6274c3705p-475, 0x1.dbab7fa151891p-75, 0.0,
     0x1.058bbf1dbd1dbp-976, 0.0, 0.0, 0.0, 0x1.c1912359571e8p-969,
     0x1.f46b1e4cdfea5p-188, 0.0, 0x1.dc891196b37f3p-504, 0x1.80c115a7b91c3p-740, 0.0,
     0.0, 0x1.b4a357afa4c03p-314, 0x1.d7a0c01295055p-19, 0.0, 0x1.e010173157cd5p-935,
     0x1.c0206c9809a2bp-49, 0.0, 0.0, 0x1.8097109d2519dp-662, 0.0,
     0x1.cdc0360511ff7p-68, 0x1.2b4018b76d191p-138, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.32edcfb029285p-934, 0.0, 0x1.14f52a99fe2a2p-284, 0x1.237d7c94dd32dp-666, 0.0,
     0.0, 0x1.a1464ede622ebp-605, 0x1.a418d1c34fbc4p-578, 0.0, 0x1.d03f8c9ff3cfep-994,
     0.0, 0x1.cf93aa4d6855ap-785, 0x1.cbc1659ec5bddp-666, 0x1.4f592e8fccd8ap-298, 0.0,
     0x1.91fcf6d6420dep-631, 0.0, 0.0, 0x1.6f3399f8069bbp-840, 0x1.1bc39f40ec854p-756,
     0x1.6da47889ea489p-1015, 0x1.3a06e862a805bp-325, 0.0, 0.0,
     0x1.e6a3a004e3108p-379, 0.0, 0.0, 0x1.9449f3a1552e7p-455, 0x1.3e4a9c5160086p-900,
     0.0, 0x1.87a5e1b6ba842p-589, 0x1.8bf9f81bc76cfp-293, 0.0, 0.0, 0.0, 0.0,
     0x1.6ddad0a7f1082p-664, 0x1.eddf78b3401a3p-591, 0.0, 0.0, 0.0,
     0x1.13a7f5f1b49d5p-186, 0x1.f2a84bd8ae63cp-868, 0x1.f3f428af60269p-84, 0.0, 0.0,
     0x1.f587c40df3d0ep-513, 0x1.d4f6154c3355bp-69, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5d35e13359881p-313, 0x1.bf47a51b2e655p-248, 0.0, 0x1.43233d4561024p-261,
     0x1.96461a80b644ap-88, 0x1.5eecffdadedc5p-511, 0.0, 0.0, 0x1.54e6025ca90adp-799,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5db105ad03bc7p-312, 0.0, 0x1.510a0f9fdcf3ap-764,
     0x1.70b7aa6385cd1p-591, 0.0, 0x1.05913c177abf5p-14, 0.0, 0x1.cb7666e430515p-305,
     0.0, 0.0, 0x1.e757a685f435fp-529, 0.0, 0x1.84129c67791cbp-950, 0.0, 0.0, 0.0,
     0x1.e87c890f4064dp-455, 0x1.cf8d8e49fe43dp-517, 0x1.41f33824599dep-229,
     0x1.a8a0e871278b1p-1012, 0x1.94dd27169f574p-277, 0.0, 0.0, 0.0,
     0x1.436081f0e8506p-184, 0.0, 0x1.16a98b575489dp-799, 0.0, 0.0, 0.0, 0.0,
     0x1.0baffa452f856p-485, 0x1.ee73e65672e28p-664, 0.0, 0x1.89c8c3828377ep-424,
     0x1.2d5f1c44a4495p-502, 0.0, 0.0, 0x1.6baf3dd7d88cp-63, 0.0,
     0x1.2ff8c0727895bp-720, 0x1.e65b256f4fab4p-290, 0x1.59219b4f61764p-896,
     0x1.9fa7fcf1ef3f3p-558, 0x1.a37e190b58058p-914, 0x1.fe7de6e4dfe89p-251,
     0x1.03561cb033618p-135, 0.0, 0.0, 0x1.cc7b554a639e5p-596, 0.0,
     0x1.1c8531e48287bp-8, 0x1.c5b1768f3ab27p-641, 0x1.99de9519277dbp-95,
     0x1.af5a5730c872p-106, 0.0, 0.0, 0x1.11ebd1cfcbd08p-357, 0.0,
     0x1.8ff745d413423p-2, 0.0, 0x1.a53fa923b6a36p-854, 0.0, 0.0,
     0x1.f03846893c535p-322, 0.0, 0x1.74c01d28d516ep-942, 0.0, 0.0, 0.0,
     0x1.f78fc85535453p-926, 0x1.0cd8c5e0c2061p-8, 0.0, 0.0, 0.0,
     0x1.c97a422147cfcp-566, 0.0, 0x1.2500e939e8408p-194, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c2d19847df98p-248, 0x1.85615ef1c334ep-537, 0.0, 0x1.22a644a03de76p-844,
     0x1.64c75807a8f57p-1010, 0.0, 0x1.20cf63369a166p-421, 0.0, 0.0, 0.0,
     0x1.dcda01f0fe073p-997, 0.0, 0x1.8bb65957fc3e1p-347, 0x1.81c2490ca23d7p-286,
     0x1.805080327eec2p-746, 0.0, 0.0, 0x1.e3e7ab863a7bdp-196, 0x1.0aafe3fe5dae4p-332,
     0x1.3e38337b5d3b6p-286, 0.0, 0x1.ab87be1adb18cp-205, 0x1.8cddb12689a5fp-576,
     0x1.6744fb7b9e63fp-441, 0x1.384f1d54ff15p-716, 0x1.746a1e27f64d4p-61,
     0x1.92c26a366eea1p-176, 0x1.646e3dc83c7a5p-101, 0.0, 0x1.64367baed4b4ap-341,
     0x1.4914ed0f9da42p-531, 0x1.30ef39bb5b609p-736, 0.0, 0x1.6388c1f97266p-556,
     0x1.64fbb88c5419ep-46, 0x1.c9ea6d6f47861p-442, 0.0, 0x1.ee0ee10b48a5ap-130, 0.0,
     0x1.483293178ea65p-333, 0x1.6b0cc767b46b9p-719, 0.0, 0.0, 0x1.3f86598e86764p-172,
     0x1.607553ecec91cp-924, 0x1.c34472a595e57p-614, 0x1.dc37016da892fp-569, 0.0,
     0x1.eba95c9eb6a0dp-707, 0x1.efbe2d539754ap-121, 0x1.9ee31b7b03e42p-738,
     0x1.bbf2aee515998p-235, 0x1.5d68087c0d0e3p-747, 0.0, 0x1.0988503dbf514p-455,
     0x1.7a1188bfea241p-621, 0x1.32ae7a5327a98p-30, 0x1.cf7bcad8dbdcdp-406, 0.0, 0.0,
     0x1.93f35a3244581p-969, 0.0, 0x1.1e8db921e6d0cp-310, 0.0, 0.0,
     0x1.13e8b097dc133p-781, 0x1.26922acce40e7p-313, 0x1.4c93f94c0e88ap-297,
     0x1.64b2321936d53p-916, 0x1.d1726e7e2cf7p-105, 0x1.21dd29fcb9e94p-2, 0.0,
     0x1.acaba86698c02p-316, 0x1.da3af1e66d177p-920, 0.0, 0.0, 0.0,
     0x1.187c384699d0ep-647, 0x1.c714b6193d442p-749, 0x1.721218830686fp-311, 0.0,
     0x1.1acd916308fe2p-611, 0.0, 0.0, 0.0, 0x1.823dbe791f192p-734,
     0x1.4dfee669d9841p-347, 0x1.05e6d5b66971fp-904, 0.0, 0.0, 0x1.c454663ad0462p-293,
     0x1.8470ffc78db14p-977, 0x1.9bf1c9b9bf8cp-185, 0x1.368f4024fd971p-32, 0.0,
     0x1.ebd5d6e67412cp-143, 0.0, 0x1.35744f5c89169p-549, 0.0, 0x1.67f835a0b60a9p-719,
     0.0, 0x1.3d2b3ede41b0ap-916, 0x1.6160905ab94edp-939, 0.0, 0.0,
     0x1.10d9d4b2e6bb5p-644, 0.0, 0.0, 0.0, 0x1.717c85b0756b9p-202, 0.0, 0.0, 0.0,
     0x1.5c7975e890d6p-553, 0.0, 0.0, 0x1.adce6125c575bp-419, 0.0, 0.0,
     0x1.d23d974a79eecp-278, 0x1.b0958c60fbc42p-897, 0x1.d89cb345cfbd1p-69,
     0x1.1074b73178983p-435, 0x1.cb9462e9ede33p-347, 0x1.88b5a2b0f7dap-920,
     0x1.9b950a0af815cp-967, 0.0, 0x1.757ba00a6d12fp-44, 0.0, 0.0, 0.0, 0.0,
     0x1.1f38b5d1cbd1p-301, 0.0, 0x1.48c00cfabc29dp-223, 0x1.3c8b1ed7dbd7fp-148,
     0x1.a080110ae7bdcp-77, 0x1.aab844547f94dp-349, 0.0, 0x1.3b20620abc21ap-488, 0.0,
     0.0, 0.0, 0x1.48fa82f9a8024p-224, 0x1.067eb7707f75bp-274, 0.0, 0.0,
     0x1.bc84d2bcd3896p-850, 0.0, 0x1.548c1cdb1a718p-505, 0x1.c945ea52f7685p-983, 0.0,
     0x1.87d9c6231633ep-587, 0x1.a6ac99cb73dfp-991, 0x1.5cd528dd306p-668,
     0x1.39526eaa10c53p-545, 0.0, 0.0, 0x1.8c2afa02db86ep-713, 0.0,
     0x1.f5637b4ae9fdbp-893, 0x1.616ce3d3a0de6p-884, 0.0, 0.0, 0x1.07c0e089bb655p-912,
     0.0, 0.0, 0.0, 0x1.2e32dc696ac0cp-441, 0x1.80cdec2ad102fp-844,
     0x1.a1574cf0d6d76p-116, 0.0, 0x1.b793b738f0e7p-89, 0x1.2f6dfacf55e52p-392, 0.0,
     0x1.c5152ad21a4a4p-146, 0x1.428b05b3eace8p-744, 0x1.bb40b19eb589p-622, 0.0,
     0x1.ed881fb817997p-237, 0x1.f4636982b2371p-8, 0x1.3b850efe2c639p-985,
     0x1.3950f67871f0ap-376, 0.0, 0x1.58e3f2cbf61d7p-194, 0x1.61860230ad75bp-607, 0.0,
     0.0, 0x1.81d606f54dff5p-164, 0.0, 0.0, 0.0, 0x1.c82473feff247p-954, 0.0, 0.0,
     0.0, 0x1.00490c752b5b7p-68, 0x1.08e955f017a58p-325, 0x1.2429796bd4547p-1012, 0.0,
     0x1.719eba82a95c7p-489, 0.0, 0.0, 0x1.ad9d619f5cce8p-780, 0.0, 0.0,
     0x1.c5a3ad0032838p-688, 0.0, 0.0, 0x1.a09ca6ecdf736p-347, 0x1.259e5021b99fep-147,
     0x1.3c2b1dc3cbb5p-562, 0.0, 0x1.5524218d5dbc4p-130, 0x1.b180a7ed39a68p-67, 0.0,
     0x1.9f3499d14d362p-451, 0.0, 0x1.7d35aa25c1218p-506, 0.0, 0x1.a320a5fee7f4dp-833,
     0x1.19db0650f4ddep-338, 0.0, 0x1.c8bd23053fca6p-950, 0.0, 0.0, 0.0, 0.0,
     0x1.5f597bc0fdf0cp-694, 0.0, 0.0, 0.0, 0.0, 0x1.fb2e9d2f28f67p-635,
     0x1.c99a33326c6bfp-374, 0x1.220526aac4ea5p-182, 0.0, 0x1.7298c5f7aecdep-298,
     0x1.9e74da074012cp-165, 0x1.539e2fa6e07cbp-805, 0x1.fabf27182096cp-396,
     0x1.c681515e45e9cp-948, 0x1.b6dd1c7f2c05fp-547, 0x1.0e967d4a2ef7fp-824,
     0x1.3ba99fa61191cp-77, 0.0, 0.0, 0x1.f1104db1d5117p-771, 0x1.b4b3e9cdc999ap-960,
     0x1.f5848e480b07bp-96, 0.0, 0x1.a530c5d409fcap-686, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7e493c02e7449p-996, 0x1.df44ab82c1d79p-708,
     0x1.5d7ea29c6d9b9p-154, 0.0, 0.0, 0x1.cc4d86c2d55a3p-648, 0x1.f5217b4c273fbp-496,
     0.0, 0x1.86b0c0309a33ap-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a74824c596c6p-516,
     0x1.a4a2fea3c588cp-815, 0x1.406afe4d24e4p-581, 0.0, 0x1.6ae1e51bba8d6p-605, 0.0,
     0x1.b6f9ce2bc329dp-988, 0x1.91a0c4029ec83p-86, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08baf8b900773p-471, 0.0, 0x1.6b9741c7971f3p-140, 0.0, 0.0,
     0x1.20e780bb7bcc4p-630, 0x1.f36fba286066cp-331, 0.0, 0x1.b0df41e3e24eap-803, 0.0,
     0.0, 0x1.b81a96670361p-848, 0.0, 0x1.8fa31ce682ca1p-407, 0x1.baae4b4725edcp-967,
     0.0, 0x1.40ae3af155706p-457, 0x1.f8577841579bp-252, 0x1.a344733069b4dp-521,
     0x1.0cfe73b6028fdp-836, 0x1.26d909c957175p-134, 0x1.f5a88aaf6b68fp-232, 0.0, 0.0,
     0.0, 0.0, 0x1.b37e32bfd1853p-587, 0.0, 0x1.2d579a22b47c2p-29, 0.0,
     0x1.f011e6ffdea69p-30, 0x1.0a878d2059949p-679, 0.0, 0x1.f4ea2d1b41f4dp-257,
     0x1.31e5a5cc62635p-614, 0.0, 0x1.2bf93d43e4f9ap-56, 0.0, 0x1.7cbdce61b4805p-670,
     0x1.f6d07f2682469p-446, 0.0, 0.0, 0x1.28547d874a20fp-917, 0x1.43e60bf44d29p-284,
     0.0, 0x1.d8535dc5ec99p-96, 0.0, 0x1.96a9485e51fbfp-783, 0.0,
     0x1.25c168aa45443p-205, 0.0, 0x1.079f73ac2df97p-81, 0.0, 0x1.7cbb059e80e3cp-803,
     0x1.4ab602b342001p-604, 0.0, 0.0, 0.0, 0x1.daa707922bc51p-59,
     0x1.d8add421142a3p-563, 0x1.6dfc4dd7aec3fp-200, 0.0, 0x1.fe791bdd8da06p-65,
     0x1.2acd49e46893bp-257, 0x1.49aede09f0401p-342, 0x1.176de63f3a05bp-977,
     0x1.024e137812317p-857, 0x1.f7a3df4b94bep-407, 0x1.e6269c2f8405fp-167,
     0x1.6e16eb00eb77ap-865, 0x1.f96919e95008cp-460, 0.0, 0x1.83e5addd1a868p-628, 0.0,
     0x1.6eaa63d13320fp-750, 0x1.830bd711c4425p-732, 0x1.4b86f7f4e648p-849,
     0x1.c9ea3a04acadbp-937, 0x1.c280d78623275p-633, 0x1.21fe6299ba09bp-891, 0.0, 0.0,
     0.0, 0.0, 0x1.585cb4bd47905p-738, 0x1.aabf9e84b54f3p-803,
     0x1.7e3f09ec1e0f3p-1008, 0.0, 0.0, 0x1.dcec10eabf444p-197, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.53bf58151943dp-546, 0x1.81565ad185264p-980, 0.0,
     0x1.4f48d440e63d1p-815, 0x1.49d03e4dafaabp-726, 0.0, 0x1.8043a19b5fc18p-46,
     0x1.423a949f5ecaap-766, 0x1.0b128c142507p-487, 0.0, 0x1.f2eae72c5c984p-260, 0.0,
     0.0, 0x1.5c2a31500effap-497, 0.0, 0x1.6e2fdde1664cbp-569, 0x1.784f24c11206dp-162,
     0.0, 0.0, 0.0, 0x1.79677ff063dbbp-588, 0x1.001195e06d8fep-868, 0.0,
     0x1.45d78bbd6aa3ep-949, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49e40d3e654d5p-493, 0.0,
     0x1.abc26c25cfbf9p-785, 0x1.57f79b6318f45p-55, 0.0, 0x1.758fe44301378p-496, 0.0,
     0x1.361c8bee8f3b4p-623, 0x1.50a3f22191818p-393, 0x1.76508c117b28fp-264,
     0x1.c05244c1a026ap-566, 0x1.e449b1f7888d3p-958, 0x1.f903311aca07bp-355,
     0x1.4488b56ade848p-756, 0x1.7fe1538606abfp-274, 0.0, 0x1.7037098e73358p-592, 0.0,
     0x1.21ea2d1dff425p-487, 0.0, 0.0, 0x1.68517467ce8fcp-50, 0x1.33b1779bd5d52p-745,
     0.0, 0x1.774d0de726c14p-914, 0x1.e6abb227a2c7p-531, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.574e817de3825p-27, 0.0, 0.0, 0.0, 0x1.6e03493fc28eap-162,
     0x1.ecac0c505e0dcp-1001, 0.0, 0x1.80f96d58379cbp-1005, 0x1.460fecf36c38ep-677,
     0.0, 0x1.a06bc51e940d3p-416, 0.0, 0.0, 0x1.42ef87f7386cap-950, 0.0, 0.0, 0.0,
     0x1.fc62163edf782p-891, 0x1.fdc28aa6e0911p-480, 0x1.f9cdac87f9fbcp-524, 0.0,
     0x1.b456050083c1dp-678, 0x1.41d51920e1263p-96, 0.0, 0.0, 0x1.9b4e9c79b8031p-871,
     0.0, 0.0, 0x1.0342ddfbbcb69p-754, 0.0, 0x1.8449b030af834p-466,
     0x1.1e8fb8303e885p-388, 0x1.cb38f273f8974p-380, 0x1.8aee277b871b3p-750, 0.0,
     0x1.d55beeedc197cp-337, 0x1.646bd89f9cc15p-265, 0x1.095399928c3f8p-91, 0.0,
     0x1.65877b383c8aep-950, 0.0, 0x1.b0e3335f5c25fp-1000, 0.0, 0.0,
     0x1.97cb144e8b66bp-772, 0.0, 0.0, 0x1.9376718d25092p-212, 0.0, 0.0,
     0x1.37a5b736e78a1p-797, 0.0, 0x1.1557706902f3cp-374, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b42c9c42c7fd1p-97, 0.0, 0x1.d05fa56b14e92p-441, 0x1.e4d1958f66b0dp-768, 0.0,
     0.0, 0x1.867a5f280914cp-33, 0x1.9ce40bc08c924p-4, 0x1.4df7056d608bbp-993,
     0x1.590b0f1cae69cp-972, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.656c04d883051p-234, 0x1.7b4e52a477ccp-570, 0.0, 0x1.bd5b6d0fcbec6p-869, 0.0,
     0.0, 0.0, 0x1.ce448639aaefdp-148, 0x1.cb42fcede0db9p-392, 0.0,
     0x1.04ba028a2c3cdp-607, 0x1.22964d542334p-777, 0x1.a97bc77c8707dp-592, 0.0, 0.0,
     0x1.558e5e6c48855p-205, 0x1.09e40f70958a6p-133, 0x1.c8b5b689a7461p-496, 0.0,
     0x1.9943238666e78p-332, 0x1.082a8e925bb13p-909, 0.0, 0.0, 0.0,
     0x1.4c7d984430a9ep-265, 0x1.b75a83f9e65cap-985, 0.0, 0x1.73e09e77c90bbp-92,
     0x1.2ed7491b778acp-301, 0.0, 0x1.b97979eed2403p-2, 0.0, 0.0,
     0x1.d8e5ecba1fa06p-394, 0.0, 0.0, 0x1.9728a024ccbfcp-762, 0x1.e69729d5ad151p-980,
     0x1.865538e330934p-759, 0x1.ad4f50869b1d7p-420, 0.0, 0x1.52cd3286b111fp-854,
     0x1.78de04a69808bp-901, 0x1.ff1f04fe2a723p-364, 0x1.2348082554977p-957,
     0x1.3e500e8b7d96cp-801, 0x1.140d48351acbdp-479, 0x1.64e8a2745120cp-658, 0.0,
     0x1.385bed0eb11cdp-369, 0x1.3e23bb2ed40c2p-649, 0x1.6f5fe06854c1p-261, 0.0, 0.0,
     0x1.d25c033f842dcp-737, 0.0, 0x1.2e9df2a11ae33p-151, 0.0, 0x1.b2bfc2dffddap-245,
     0.0, 0x1.f5b7da47ee917p-437, 0x1.f67ff854238dbp-481, 0x1.b77cd62f0bab9p-388, 0.0,
     0.0, 0x1.f7d40213041dp-177, 0.0, 0x1.5743b83841357p-592, 0.0, 0.0, 0.0,
     0x1.e14eaeb152c3bp-1013, 0.0, 0x1.155a24ff0de99p-424, 0x1.57516f0a7c5d8p-142,
     0.0, 0.0, 0x1.dd7c15d48f1b7p-393, 0x1.d563d3371600ep-231, 0.0,
     0x1.70359c9f8ac95p-132, 0.0, 0x1.c94cd2edd920bp-369, 0.0, 0x1.15eb663db7cep-272,
     0.0, 0.0, 0x1.2a6e65db0160cp-736, 0.0, 0x1.f5295b86a0c3bp-346,
     0x1.f3a477a4d53adp-83, 0x1.d818c81f07b19p-804, 0.0, 0x1.31bb501071fcp-651, 0.0,
     0x1.2016f764243f7p-868, 0.0, 0x1.af3343670be6p-13, 0x1.e3c5cd7c01eeep-78,
     0x1.79522e4f84ea9p-43, 0x1.45ef185223caep-697, 0.0, 0x1.0ff69b729adc2p-933, 0.0,
     0x1.ff67b55f9cdc4p-514, 0x1.3e6fc5e76fdd3p-349, 0x1.d43ae6cbf397bp-219, 0.0,
     0x1.12c2e7377da08p-507, 0x1.98e815467430ep-400, 0.0, 0x1.c2efe7dc6302ep-291,
     0x1.8a5f040fc641fp-167, 0x1.8fe6a20628585p-348, 0x1.c5ddda5eb9089p-404, 0.0,
     0x1.da9db27702e42p-115, 0x1.d8bcdfe57a3cp-472, 0.0, 0x1.57a3d9cd38d82p-699, 0.0,
     0x1.d9a703570fc3dp-969, 0.0, 0.0, 0x1.27d901f9853bfp-527, 0.0, 0.0,
     0x1.cf6287064913fp-57, 0.0, 0x1.f6068dfc09ee3p-672, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e02191eef4145p-822, 0x1.c36bdffc17696p-599, 0.0, 0.0, 0x1.ba4c2945cfe68p-489,
     0.0, 0.0, 0x1.712c967308844p-27, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5402d629cfcbep-160,
     0x1.97ec6ba7ff3f9p-913, 0x1.af0a9339a6ccdp-66, 0x1.4fed1fa8b940dp-208,
     0x1.1439309eff9edp-533, 0.0, 0x1.0b993a93d39a2p-598, 0x1.31fb4ece17364p-590, 0.0,
     0x1.75c2f33759c18p-625, 0.0, 0x1.a63ee513ec0dep-671, 0x1.0f1de5370ae7dp-3, 0.0,
     0.0, 0x1.5c1552c2d546dp-294, 0x1.b2444b075cf17p-270, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40c9ce5f5dde3p-762, 0.0, 0x1.6fbf780038bf4p-547, 0x1.5439d15a7b3ecp-137, 0.0,
     0x1.804da83c9ea2cp-586, 0.0, 0.0, 0.0, 0x1.c565f22a0cb27p-70,
     0x1.572406859a4a7p-248, 0x1.7714800a1beb1p-313, 0.0, 0.0, 0.0, 0.0,
     0x1.e81c18b519b4p-738, 0x1.36405955e23acp-441, 0x1.5d6e134af90bep-496,
     0x1.ad7a8c2f17632p-71, 0.0, 0x1.a665944d71759p-675, 0.0, 0.0,
     0x1.bb86d73eefe99p-262, 0.0, 0.0, 0.0, 0x1.7fc341b1e32ffp-577, 0.0, 0.0, 0.0,
     0.0, 0x1.9b71c4a26c8p-53, 0x1.87809599c9edfp-223, 0x1.b2ab138abc507p-700, 0.0,
     0x1.a43dd478679acp-2, 0.0, 0x1.360162f5fd52bp-183, 0x1.cb70e61c972bfp-943, 0.0,
     0.0, 0x1.e7822d85fd90bp-959, 0x1.20d4deda234dap-902, 0x1.2b5d3f4171f4bp-249,
     0x1.8cfad16abdc11p-107, 0x1.1a531c5492a2ep-182, 0x1.51efe8d926158p-857,
     0x1.b126ca93bec25p-409, 0.0, 0x1.49e156c636a0dp-838, 0.0, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_tand4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_tand4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tand4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
