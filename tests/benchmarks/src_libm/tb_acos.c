/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_acos.c --function acos --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.73abeea47ba4fp-796, 0x1.8994e61f7c666p-866, 0.0, 0.0, 0.0,
     0x1.42762c3815034p-688, 0x1.74b1f1c89cfa5p-443, 0x1.3181b3100c0d6p-591,
     0x1.2bfb414e2e25ep-260, 0x1.96072a5eef8c8p-886, 0.0, 0.0, 0x1.cddffca4f7d28p-368,
     0.0, 0x1.a8329c58609dep-443, 0.0, 0x1.7fa8236ec839ep-531, 0x1.4cdbe0cc66d1fp-216,
     0x1.5b681f82b5b0ep-196, 0x1.9cee492ce1b8ap-1012, 0.0, 0.0,
     0x1.a34817a5ddb98p-689, 0x1.786156df35907p-396, 0x1.ac287d2fbf4fdp-725, 0.0, 0.0,
     0.0, 0x1.833cb08a51457p-818, 0.0, 0x1.7af3bb5952f57p-717, 0x1.8309c8684973bp-327,
     0x1.dd1259f93d836p-773, 0.0, 0x1.803595cfa060cp-925, 0x1.07781fb8e7013p-876,
     0x1.fae83afc77f06p-636, 0.0, 0x1.8f6f1cc6171ffp-37, 0.0, 0x1.ec12814e49421p-334,
     0x1.5512b1d1bc089p-737, 0.0, 0.0, 0.0, 0.0, 0x1.621e569d96e9cp-488, 0.0, 0.0,
     0x1.e40e1a5b9c8e9p-482, 0x1.0d6dd45594971p-33, 0x1.94ee3eede07e1p-119, 0.0, 0.0,
     0x1.cc51b8edfc445p-327, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3650b3b79c4dep-557, 0.0, 0x1.67b99c93cd98fp-424, 0.0, 0.0,
     0x1.12e9466cbf7e9p-819, 0x1.1c9987612ba6fp-579, 0x1.2c4f493a4562bp-1000, 0.0,
     0.0, 0.0, 0.0, 0x1.b7d2a5a034dcfp-675, 0.0, 0.0, 0x1.3890344a72587p-570,
     0x1.20a0bb613fb3cp-300, 0.0, 0x1.50709b947ef9p-795, 0x1.49fad8d63071bp-897,
     0x1.673fb0b76ac8p-914, 0x1.242b159883faep-346, 0.0, 0x1.4826bec7e6662p-625,
     0x1.3ce37dcbd79adp-215, 0x1.955f2db90ea75p-503, 0x1.6742099eb7b93p-985,
     0x1.255188c824b45p-125, 0.0, 0.0, 0.0, 0x1.758e1082b65d2p-335,
     0x1.22df61daac7c2p-931, 0.0, 0x1.39766a4bfb649p-600, 0.0, 0.0, 0.0,
     0x1.f606fb79e680bp-718, 0.0, 0x1.2436f1a7421cep-320, 0x1.90643937cdebp-345, 0.0,
     0x1.062520d91bb0cp-628, 0x1.a32ff128e6654p-210, 0.0, 0.0, 0x1.b8c21b87efcbdp-722,
     0x1.7f8f668dbfb36p-899, 0x1.154e46700dbbp-1009, 0.0, 0x1.188485744559ap-566, 0.0,
     0.0, 0x1.e3fdb9101bae9p-345, 0x1.b7a48d0da8d21p-858, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40c1d734648e8p-410, 0x1.56771d5257fb1p-101, 0x1.19a902b4504c1p-799, 0.0, 0.0,
     0.0, 0x1.d4c150003e61ep-502, 0x1.fb9b2d717a24fp-313, 0.0, 0.0, 0.0,
     0x1.a4066aef6ee9fp-339, 0x1.afe378ede676dp-213, 0x1.f02db230ffa04p-995,
     0x1.c612adb8b5799p-242, 0x1.17799748d229cp-1020, 0.0, 0x1.7830cef5944c8p-946,
     0x1.e428a44def818p-114, 0.0, 0x1.190919ff37e4fp-784, 0.0, 0x1.a9346f0783ap-46,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.902e1fb0161dfp-317, 0x1.46024ec566f08p-920,
     0.0, 0x1.1c4e2c1181e7dp-709, 0x1.92ab0ea0e3b0cp-199, 0x1.571a4a75c41dcp-465, 0.0,
     0x1.588e3e73d6b66p-948, 0x1.527fc39353051p-283, 0.0, 0.0, 0.0,
     0x1.0904af59ff42ap-655, 0x1.0e2db99aa49fcp-93, 0x1.639661fac0adfp-906,
     0x1.e8307202689f9p-49, 0.0, 0x1.98e1dc98207c7p-28, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4e5dbb332eb41p-526, 0.0, 0x1.1cc5326e6f2e6p-643, 0x1.8e35b0bfa70a3p-231,
     0x1.4b20bc86ace12p-385, 0x1.02d611ec8e0ebp-945, 0.0, 0x1.07d459aa82ef9p-928, 0.0,
     0x1.152c010a359eep-793, 0.0, 0x1.337306c62ffe3p-757, 0x1.f61233d1936dep-327, 0.0,
     0.0, 0x1.bc7898f2076a9p-807, 0.0, 0.0, 0x1.f2f6e091bb531p-230, 0.0, 0.0, 0.0,
     0x1.c04dd58033aa2p-421, 0x1.0af9c04734082p-881, 0.0, 0x1.a2f5187d1f94ap-659, 0.0,
     0x1.ee935c499234ap-640, 0.0, 0.0, 0.0, 0x1.5d521a55f8974p-771, 0.0,
     0x1.c62eedd58782cp-834, 0x1.6daec50303018p-339, 0.0, 0x1.6b12b7f33e7d6p-318,
     0x1.843559474b72bp-487, 0.0, 0.0, 0x1.899ae7fd48c46p-346, 0.0,
     0x1.670a531a81be3p-177, 0x1.1541de6f9eacdp-821, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c847b1275f689p-61, 0x1.ea645b9d14f36p-258, 0x1.0f1ce84a99afcp-987,
     0x1.450631523e23fp-353, 0x1.968e693e8a397p-155, 0x1.2940d2b64612bp-150,
     0x1.45875b574e397p-858, 0x1.603f6b407b8b5p-222, 0.0, 0.0, 0x1.ee31cf65f504fp-489,
     0x1.7aca38b9b9f88p-914, 0x1.185caa2c8387bp-450, 0.0, 0.0, 0x1.402d936808d81p-640,
     0.0, 0x1.947354730864p-269, 0x1.e20bac03b98d3p-525, 0x1.760787ff66633p-877,
     0x1.0bced9c336b0dp-648, 0x1.f1d4e128b046ap-524, 0x1.ea2b10431f802p-918, 0.0,
     0x1.9f772f7df8f0dp-314, 0x1.07d103d7828a7p-37, 0.0, 0x1.5feba0e1c11a8p-226, 0.0,
     0x1.64304bcd1343p-683, 0.0, 0.0, 0x1.27f96313dc408p-537, 0x1.a83ed337f21d4p-464,
     0.0, 0x1.be81fed8ba311p-999, 0x1.3208123f0c23p-298, 0x1.fcff96642f06dp-874,
     0x1.8a566cfc8eac2p-285, 0x1.5dd8728d6777bp-909, 0x1.2aa450b8eb2a1p-943, 0.0,
     0x1.662b4827ba201p-855, 0x1.4969cd615a838p-278, 0x1.3640204546f52p-719, 0.0, 0.0,
     0.0, 0x1.be46db503254bp-454, 0.0, 0x1.b376c7cd89cd1p-1011,
     0x1.6a1e3be919577p-1007, 0x1.6ada2e9be9f99p-522, 0.0, 0x1.6112ebf987141p-231,
     0.0, 0.0, 0x1.ef2e1bd7dea28p-550, 0x1.444dfe159aa51p-644, 0.0,
     0x1.1d5dd599ab52ap-512, 0.0, 0x1.f9eb3148e34f4p-222, 0x1.06b42d67c76a4p-781, 0.0,
     0.0, 0x1.0eb2f5138c527p-827, 0.0, 0x1.80d34f132a74p-267, 0x1.db67fec902f48p-421,
     0x1.a51b00fb07b05p-619, 0.0, 0.0, 0.0, 0x1.bee77ed03b2e2p-979, 0.0,
     0x1.388df00b82507p-937, 0.0, 0x1.6f60b5482d16fp-821, 0x1.cc6190731c44bp-242, 0.0,
     0x1.13fa257a0ce58p-457, 0.0, 0.0, 0.0, 0x1.c40297e564233p-52,
     0x1.86813681b579dp-217, 0x1.6331969f0a708p-991, 0.0, 0.0, 0x1.c7d6d86b7a705p-106,
     0.0, 0.0, 0.0, 0x1.ba1e17d5c2469p-318, 0.0, 0.0, 0.0, 0.0,
     0x1.06108260ea4fbp-579, 0.0, 0.0, 0.0, 0x1.e85db382a0212p-175,
     0x1.dca11b6665453p-985, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d4f1e287934bp-947,
     0x1.4a843b782f7d4p-240, 0x1.2732e53524fddp-117, 0.0, 0x1.05da6e5f4ef4fp-679,
     0x1.255dff0b65f94p-177, 0x1.57dc4e9da7ffap-63, 0.0, 0.0, 0.0,
     0x1.3132cfad57d1ep-123, 0.0, 0x1.f9b08d88e46fap-94, 0.0, 0.0, 0.0,
     0x1.1076c87f05c8fp-287, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ea0a838bb745p-715, 0.0,
     0.0, 0x1.c5e95dd2d3519p-1008, 0x1.75423820424efp-424, 0x1.7c8989b085895p-106,
     0.0, 0x1.f45f63ffde474p-312, 0x1.bbb183fcc6cb3p-830, 0x1.786b15f80ba02p-986, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1d7d58e07ea42p-380, 0x1.ec2498853f066p-775,
     0x1.6cf68bfd13213p-943, 0.0, 0x1.2a33ae1ffe6aep-572, 0x1.a72e2c337f2d9p-566,
     0x1.a02b56b47236fp-979, 0x1.a25e7a0318fb3p-653, 0.0, 0x1.f48e347624455p-941, 0.0,
     0x1.c7fd002b2d341p-491, 0.0, 0x1.bd8de52e04402p-718, 0.0, 0.0,
     0x1.851e47aaf1ffap-254, 0x1.ba361b9ea3022p-98, 0.0, 0x1.0f4e25ca04c36p-731, 0.0,
     0.0, 0x1.b1cc0786236f4p-255, 0x1.a3253dffb14e9p-754, 0x1.c073e6c6e482p-75, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8da8006a135a6p-716, 0.0,
     0x1.21374fa08831dp-713, 0.0, 0x1.a68ca373c86a5p-529, 0.0, 0x1.5a16cc526f44fp-809,
     0x1.9f6aa2465a02bp-950, 0x1.28423ab9d907dp-866, 0x1.fe0e4320c1127p-941,
     0x1.c9b3be0a45388p-989, 0.0, 0x1.374b5765ba1e7p-345, 0x1.a42f17a194c17p-937, 0.0,
     0.0, 0x1.45171ae9258e5p-883, 0.0, 0x1.2e75aaba78137p-493, 0.0,
     0x1.b4e180e37e245p-270, 0.0, 0x1.20759c49f1382p-994, 0x1.2ffd9cbe70cffp-649,
     0x1.f878d9a01555p-1014, 0x1.dfdd4c211c02ep-532, 0x1.d9abadfe95c1ep-789, 0.0, 0.0,
     0.0, 0x1.720465a6982edp-623, 0x1.309a4a1ab6b02p-363, 0x1.a50b0d2bcc6dfp-498, 0.0,
     0.0, 0x1.3c2cf2ed7601ep-738, 0x1.4397e71a7d81bp-308, 0.0, 0.0,
     0x1.7fabf78979864p-176, 0.0, 0x1.b84b2b2fa458p-441, 0.0, 0x1.bcf1940cfdc86p-531,
     0.0, 0.0, 0x1.731ee4b252b33p-831, 0.0, 0.0, 0x1.48ab6011a2392p-262,
     0x1.83be5db0eebfdp-536, 0.0, 0.0, 0x1.b1979041004b9p-605, 0.0,
     0x1.e13c1bf3ad075p-614, 0x1.8654530eda1c8p-459, 0x1.d9c75348bf059p-520, 0.0, 0.0,
     0x1.04b7fc440933cp-396, 0x1.a86472c923a7p-102, 0.0, 0x1.28c3221566e3ep-313,
     0x1.194462127448ap-448, 0.0, 0.0, 0.0, 0x1.484ef0f244d19p-169, 0.0,
     0x1.25eada9062adp-455, 0.0, 0x1.1261eac7dd22ap-847, 0x1.23f0c461a7de8p-484, 0.0,
     0x1.c249e1729e112p-481, 0.0, 0.0, 0x1.28b7444185e25p-1003,
     0x1.066fa9880302ep-901, 0x1.9f2eb4df1f3a3p-36, 0.0, 0.0, 0x1.7d9d250fa6268p-518,
     0.0, 0.0, 0x1.c90f3f6d431a4p-839, 0x1.a814d40b1a1b4p-223, 0x1.4b14a37627c4fp-646,
     0x1.4fe25cd0147acp-910, 0x1.ba7fa7db2f1e8p-632, 0.0, 0x1.3130bb9cb0729p-474,
     0x1.7294ffc24cc1cp-86, 0x1.2858f096576c9p-184, 0.0, 0x1.679422e71218ap-973, 0.0,
     0x1.a10a86dd386b4p-454, 0x1.14eaa3e881e71p-915, 0.0, 0x1.6077300263d9dp-337, 0.0,
     0.0, 0x1.c857d74c42e0ap-467, 0.0, 0.0, 0.0, 0x1.f49812e5e87c4p-894, 0.0, 0.0,
     0.0, 0.0, 0x1.5e1f16ae4d1bcp-47, 0x1.9185c0953dbecp-82, 0.0,
     0x1.e05c5d6bbe0e3p-916, 0x1.6212b0a51ba63p-905, 0x1.0aa51be84964ep-629,
     0x1.a3ec2d6bd1d38p-209, 0x1.66c4ebc60fa45p-804, 0.0, 0.0, 0.0, 0.0,
     0x1.39b9b8b836871p-582, 0x1.b2b344f59a5ep-421, 0.0, 0.0, 0x1.7dd9eca272ea3p-189,
     0.0, 0x1.09f3d6df40f9dp-521, 0x1.c2ea3cd583e74p-951, 0x1.eee54bf8c5d7ep-859, 0.0,
     0x1.11ae0357fba1cp-383, 0x1.eea50df569505p-96, 0x1.333f3944ce856p-470, 0.0,
     0x1.8d76fc88ea0bbp-408, 0x1.ab5ee52306761p-658, 0.0, 0x1.52537ef739d7bp-186,
     0x1.837467393d5ebp-969, 0.0, 0x1.7461a9458e5cep-321, 0x1.e091da57411bbp-138, 0.0,
     0.0, 0x1.f661ec2ce857bp-845, 0.0, 0x1.39a896e4ba55dp-820, 0.0, 0.0,
     0x1.f08ab3c9f57a1p-175, 0x1.9fc71ede71c65p-556, 0x1.9fe6478e68727p-981,
     0x1.e445837404114p-446, 0x1.ad6ef6db010dep-679, 0x1.0bb9e4aba6f66p-508, 0.0, 0.0,
     0x1.557e801b6d914p-29, 0x1.bb80f49d0cc25p-472, 0.0, 0.0, 0x1.582b34623feffp-139,
     0.0, 0x1.7016587e1e44ep-179, 0.0, 0x1.c949d3a13107bp-633, 0x1.63abfa715653dp-162,
     0x1.1d94276eaa8dp-104, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af9ff947a01a2p-178, 0.0,
     0.0, 0x1.055e436598737p-622, 0.0, 0.0, 0x1.fdf39d6578efbp-141,
     0x1.065695b66ee73p-23, 0x1.29e9218692d2fp-145, 0.0, 0.0, 0.0,
     0x1.9af6da0cce2fcp-213, 0.0, 0.0, 0.0, 0x1.0472b0c6f264ep-894,
     0x1.fedfe20e7bc71p-415, 0.0, 0x1.d6de4cd4114d2p-375, 0.0, 0.0,
     0x1.8d9739f613fdcp-656, 0.0, 0.0, 0x1.c7a7903cc5b56p-746, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bc3e11b358a03p-867, 0.0, 0x1.754f6ee3723b6p-997, 0x1.4c3aa9442bfd1p-274,
     0x1.fe6c6b45ae307p-911, 0x1.2daf08e997044p-130, 0.0, 0.0, 0x1.81f6dd58e2ebap-678,
     0.0, 0x1.1dc8cd76798fap-140, 0x1.ec0d32244a3b8p-981, 0.0, 0x1.baa6e5bee8d43p-795,
     0.0, 0.0, 0.0, 0x1.78c2ea80e78ecp-252, 0.0, 0x1.0eb070a945db1p-967,
     0x1.0b00431da0fe7p-29, 0.0, 0.0, 0x1.dfcfb0f49e7cap-470, 0x1.36cfe0e4f9824p-219,
     0x1.0566ff32e1655p-885, 0.0, 0.0, 0.0, 0x1.b46100004e6ebp-740,
     0x1.f3add1df3ae26p-558, 0.0, 0.0, 0.0, 0x1.d89e3a30facecp-429,
     0x1.e1b857243c64dp-168, 0x1.2e84194af344fp-102, 0.0, 0.0, 0.0,
     0x1.162c7c1a2c99bp-480, 0.0, 0.0, 0x1.9059bdc8b57b1p-87, 0.0,
     0x1.d4a54f4d255cdp-337, 0x1.cc6668de0579ap-812, 0.0, 0.0, 0x1.3bfd7d306fcabp-309,
     0x1.c0add3cb0a4a8p-195, 0x1.d985e525e5229p-549, 0x1.39074782aac2ap-424, 0.0, 0.0,
     0x1.f15e0b3dcc246p-652, 0.0, 0x1.60f2488681667p-229, 0.0, 0x1.4e8582cd2490ap-654,
     0x1.118b9e0d82eeap-35, 0x1.d07628dfa4ef7p-59, 0x1.65ef45ec801b7p-868,
     0x1.5747def15480dp-593, 0.0, 0x1.c8be6e5493536p-389, 0.0, 0x1.0bdcbf985505fp-763,
     0x1.ef41d832efa1bp-692, 0x1.6cb9bbbf17a68p-846, 0.0, 0.0, 0x1.ad32c6d0559e4p-605,
     0.0, 0.0, 0.0, 0x1.03d0a99f8980cp-272, 0.0, 0x1.66b62699aabb1p-695, 0.0, 0.0,
     0x1.1153676b4af0ap-216, 0x1.ff27bb1a2e6a4p-23, 0x1.87bc6d81813f9p-677, 0.0, 0.0,
     0.0, 0.0, 0x1.7a6a37ddce228p-777, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21681bad0d06dp-80,
     0.0, 0.0, 0x1.2615f25630b6ep-92, 0.0, 0x1.471a6027d09bbp-825,
     0x1.d9d6d0e091939p-178, 0.0, 0.0, 0x1.6b050ed1eb72bp-472, 0.0, 0.0,
     0x1.c2ac1a39190bp-576, 0x1.e6fc6cfe45597p-677, 0x1.4516e7c10225cp-901, 0.0, 0.0,
     0.0, 0.0, 0x1.37fbfe1346215p-76, 0.0, 0.0, 0x1.ea29b48e28681p-107, 0.0,
     0x1.f2871f967800cp-352, 0.0, 0x1.a7450f5ab9dfep-817, 0x1.e61d776d8f369p-569,
     0x1.112f1989f61ddp-578, 0x1.36b0b7359d998p-496, 0x1.84457f6db9745p-192, 0.0,
     0x1.94ae493b425f1p-331, 0.0, 0.0, 0x1.253f3146b484bp-441, 0x1.60506d70b9fffp-94,
     0.0, 0.0, 0x1.51f9ad135c0f7p-664, 0.0, 0x1.53dad29646d66p-450, 0.0, 0.0,
     0x1.b333be90ed445p-717, 0x1.0d7e56749529cp-326, 0x1.4b56a11e9e193p-683,
     0x1.d65409939bc5dp-732, 0x1.72a8eb6a2f09ep-659, 0.0, 0x1.3cfe964569684p-241,
     0x1.ff95e2c051879p-947, 0x1.e139f08000dd7p-55, 0x1.189e4eb1dc931p-650,
     0x1.3dc2dc0abf09dp-449, 0x1.2dd2439605b96p-447, 0.0, 0.0, 0x1.e64b90e6a5701p-156,
     0.0, 0.0, 0x1.617da3cb4888ep-190, 0x1.4547087da352p-61, 0.0,
     0x1.b19a2c12893bep-543, 0x1.d01dcd35d161dp-955, 0x1.69f4e7e2fb26p-186,
     0x1.33874b69a4d4p-417, 0.0, 0.0, 0x1.439413dea9189p-480, 0.0, 0.0,
     0x1.b00f32c6bde76p-596, 0x1.354136bef6e3bp-414, 0x1.dcdded63a75a8p-608, 0.0,
     0x1.879b3126e95d1p-269, 0x1.2a8fce4a6c9fcp-793, 0.0, 0x1.2816ede8f9535p-641, 0.0,
     0x1.a80365eddcff7p-915, 0x1.fbc6df54ab40ep-484, 0.0, 0.0, 0x1.d333b3a350e1cp-219,
     0.0, 0.0, 0x1.81489f6a61d9dp-186, 0x1.bc33fde62eb95p-439, 0x1.9925a33e24008p-162,
     0.0, 0.0, 0.0, 0x1.57c2471427ea7p-605, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.acb6a2a155cc9p-706, 0x1.41d021af31842p-505, 0.0, 0.0,
     0x1.548aa1f5cd33dp-632, 0.0, 0x1.d71b5d48bf043p-290, 0.0, 0.0,
     0x1.ced47f42ccb0dp-157, 0.0, 0.0, 0.0, 0x1.4a061c5930562p-568, 0.0, 0.0, 0.0,
     0x1.ad324252c00b7p-581, 0x1.9d4763a41162p-860, 0x1.d7679e619f3bdp-168, 0.0,
     0x1.45ed461a78f2ap-948, 0.0, 0.0, 0.0, 0x1.56481e918f2a6p-791,
     0x1.b974874450f7cp-509, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.689a88fe8d5bcp-595,
     0.0, 0x1.60a8c52c78f7p-478, 0.0, 0.0, 0.0, 0x1.5ecb3e62ba6ep-793, 0.0,
     0x1.8d59aad1800a4p-468, 0x1.f0f1a60888693p-205, 0x1.357becfc85ba6p-911,
     0x1.2253eeba59844p-87, 0.0, 0x1.0fb70d421a8bfp-692, 0x1.a2c7ae76e2892p-533,
     0x1.1910564bc2d1cp-261, 0.0, 0x1.9af69ca891ab1p-734, 0x1.d7476d0ddc193p-646,
     0x1.090c1203a0b81p-115, 0x1.7eed2f3342974p-137, 0.0, 0x1.f3fba89b5e8d4p-569,
     0x1.59c3b85a0bd98p-495, 0.0, 0x1.b285dd0b4a85p-845, 0x1.b86d30b657e4p-532,
     0x1.d8e2d0d296afdp-773, 0.0, 0.0, 0x1.21a000f058106p-702, 0x1.dd078740c2879p-196,
     0.0, 0x1.dacc96050795ep-952, 0.0, 0x1.d38ecb14e5431p-108, 0.0, 0.0, 0.0, 0.0,
     0x1.23f239e4e8c91p-831, 0x1.d73b4796d1d7bp-710, 0x1.89227883f283ep-637, 0.0,
     0x1.b5aac5580616fp-570, 0.0, 0.0, 0.0, 0x1.5abc19ac280c2p-877, 0.0, 0.0,
     0x1.1397381874756p-1019, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a30258e0bbfa9p-689, 0.0,
     0.0, 0x1.1053fe602f935p-188, 0x1.e790de2400b55p-368, 0.0, 0x1.103c5b5c54ab8p-291,
     0.0, 0x1.bb6765c6c5c4cp-1014, 0x1.4adbbd8dda432p-967, 0.0,
     0x1.a3fd6e05ef884p-619, 0.0, 0x1.cfd76e46d1634p-604, 0x1.dbf3d79d88691p-710, 0.0,
     0x1.e65411f6847edp-31, 0.0, 0x1.38e7d519c7f21p-288, 0.0, 0.0, 0.0,
     0x1.7b78015c77b7cp-19, 0.0, 0.0, 0.0, 0x1.5779ad2e48444p-249,
     0x1.8471ff6a20f5bp-150, 0x1.1f7d216b58c5ap-331, 0x1.92de07781cbfp-471, 0.0,
     0x1.88180de6b18dep-571, 0x1.a5d832f97f34dp-151, 0x1.0e6425f05eb07p-764, 0.0,
     0x1.3f53eef960ecap-951, 0.0, 0x1.9652c1b393408p-750, 0.0, 0x1.4505ab67c5a34p-848,
     0.0, 0.0, 0x1.1e07d9269e9e2p-660, 0x1.6596151342169p-676, 0.0,
     0x1.cf75b77c37ef2p-454, 0.0, 0x1.63a5c62b99ccap-808, 0x1.8f823efe0bdafp-401, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f025e45c04a48p-147, 0x1.44f3fc47c0113p-513,
     0x1.3564c571e48d2p-568, 0.0, 0x1.4aae0354065d5p-256, 0x1.57675dcfb33d2p-234,
     0x1.10bdb9f9ec15ep-327, 0x1.898192c220e14p-362, 0.0, 0x1.e219660d7027bp-493, 0.0,
     0x1.8d226919f312ap-71, 0.0, 0x1.cc24edef66273p-330, 0.0, 0x1.17834b5db15e4p-967,
     0x1.5980af26fde81p-781, 0.0, 0x1.c79e798a63ae8p-359, 0x1.d908120c711b5p-242,
     0x1.0ab2845f92604p-334, 0.0, 0.0, 0x1.914e7759a1532p-872, 0.0,
     0x1.96bf9469a8accp-163, 0x1.90cc1014fb7d1p-768, 0.0, 0x1.84c0efcf2a18bp-222,
     0x1.de7f3cb55bbedp-989, 0.0, 0x1.543b8f1dd5d6fp-436, 0.0, 0.0, 0.0, 0.0,
     0x1.28c2a44ea9aa1p-143, 0x1.edbffcfa19868p-593, 0x1.e31e1d0dca67fp-63, 0.0,
     0x1.a91006ebfeb56p-21, 0x1.f1d4affb228ffp-910, 0x1.8e738c70cd8c6p-791,
     0x1.cbbc31122ae4bp-1002
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
            tmp1 = acos(tmp0);
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
    printf("acos %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("acos bench acc %la\n", global_bench_acc);
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
