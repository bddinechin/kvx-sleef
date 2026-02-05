/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modfd2_kvx.c --function Sleef_modfd2_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision \
 *     sleef_sd2 --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.46de5f668bda7p-45, 0x1.c361383b8089bp-632, 0x1.1f394799c57ebp-450, 0.0,
     0x1.776e9653b91ddp-993, 0.0, 0x1.3f798b441382fp-94, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ec35ab02dc02p-227, 0x1.d71998c5975e8p-290, 0x1.a3f7a22e8c614p-517,
     0x1.6a311d33f57eep-383, 0.0, 0.0, 0.0, 0.0, 0x1.97b4310cb2f2fp-158,
     0x1.4c58364df735p-800, 0x1.f4ce1dfbe70b9p-750, 0x1.fa8ce65b4b2bbp-861,
     0x1.8c85fa9a58ed5p-850, 0x1.66390c456d2bap-706, 0.0, 0.0, 0.0,
     0x1.76a90eb58adf3p-325, 0.0, 0.0, 0x1.d12fed769f85ap-737, 0.0, 0.0,
     0x1.96da918e91867p-2, 0.0, 0.0, 0.0, 0.0, 0x1.ae34e615a5eddp-997, 0.0,
     0x1.6daca4759cf1p-97, 0.0, 0x1.b7e3bf9a759a1p-394, 0.0, 0.0, 0.0, 0.0,
     0x1.d0c7cfca89bb8p-753, 0.0, 0x1.0cd522ce68e48p-242, 0x1.b3f51d00043e9p-372, 0.0,
     0.0, 0.0, 0.0, 0x1.ecc65df27188cp-71, 0.0, 0.0, 0.0, 0x1.c2d4e7471e91bp-26,
     0x1.8b6d0105073a6p-329, 0.0, 0x1.df613b77590c1p-533, 0x1.a79e623002095p-118, 0.0,
     0x1.f583d11116af6p-350, 0.0, 0x1.4279b008399e4p-824, 0x1.0fef13dc3cc2bp-26,
     0x1.7e84b6353e0cdp-839, 0x1.1815dd647b09dp-716, 0x1.1c4b4aab848eap-723, 0.0,
     0x1.e1291abe705cfp-169, 0x1.a9434bb303db2p-426, 0.0, 0x1.a948cdd3a2bbep-834, 0.0,
     0x1.6f8b7614f2bf2p-516, 0.0, 0.0, 0.0, 0.0, 0x1.d35bddf7b0d7bp-198, 0.0, 0.0,
     0.0, 0x1.e8e9af2485b44p-344, 0.0, 0x1.d6613163aa25bp-935, 0x1.958aaddd457cep-902,
     0x1.451ad1006f3d5p-865, 0x1.5c51dcc804452p-852, 0x1.01b9bd3f9abaep-469, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.afe23fba007dep-300, 0.0, 0x1.2814a635dcb36p-948, 0.0, 0.0,
     0.0, 0x1.b92baf70962fbp-380, 0x1.f5de8e3c5ce2dp-578, 0x1.2a01f805aa44ap-64,
     0x1.0afd982c4608cp-669, 0x1.d39a6d26b2953p-537, 0.0, 0x1.2a0cf35a03ea2p-562, 0.0,
     0x1.9870c2ed39d0ap-965, 0x1.ca5ba44192f6cp-791, 0.0, 0x1.97900b098e071p-110, 0.0,
     0.0, 0.0, 0x1.9e71851f8e329p-246, 0.0, 0x1.5b8da40ba66bdp-118, 0.0, 0.0,
     0x1.e5c0af1a95001p-80, 0.0, 0x1.d0ab574bc5408p-942, 0x1.67b6969db4c57p-11,
     0x1.4501af3bb3835p-421, 0x1.53434d86c9a2fp-665, 0x1.1723fd23dd7b5p-322, 0.0, 0.0,
     0x1.8cdae06dda61bp-372, 0x1.34918fe48171fp-301, 0x1.72219ccc6172ep-279,
     0x1.5f9cb6c675fb5p-861, 0x1.993150c0079e8p-516, 0.0, 0.0, 0x1.3d6f45fee1d06p-858,
     0.0, 0x1.0e98e58f770ep-435, 0.0, 0.0, 0.0, 0x1.813a4a707d619p-75,
     0x1.8b9c50ed061d2p-714, 0x1.a9d9fc3744d13p-366, 0x1.944494a2618dp-918,
     0x1.27ac5e0e94efbp-850, 0.0, 0.0, 0.0, 0x1.6ee672378fc69p-1019,
     0x1.e04f6ed14d421p-250, 0.0, 0x1.50cbe06c62f71p-863, 0.0, 0.0,
     0x1.7ff0fd77c4332p-470, 0x1.f646b7641dcc9p-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.49be5b9dd3946p-506, 0.0, 0x1.a35357a9ab831p-12, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4ef6a8ca2a43p-164, 0.0, 0x1.b8eec2c5e1712p-16, 0x1.f6f0ce82986eap-1006,
     0x1.cc06fcb50041fp-16, 0x1.365bab7064184p-903, 0x1.736957b67c07cp-571,
     0x1.b267fc083c3d2p-123, 0x1.603dbb517c3fp-282, 0x1.4ab3ad5581e1dp-358,
     0x1.c01b3ea85ced6p-743, 0.0, 0x1.b225c3a27f6f3p-440, 0x1.888d7d394bb26p-220, 0.0,
     0.0, 0.0, 0x1.83f2c43be4589p-82, 0.0, 0.0, 0x1.2fcb130656222p-751, 0.0, 0.0,
     0x1.5a15a422dd83bp-295, 0.0, 0.0, 0x1.5f726463b0b53p-404, 0x1.84e05683852d6p-412,
     0x1.675b74824213cp-726, 0x1.b1c700f9657p-441, 0.0, 0.0, 0x1.a6788d3812335p-788,
     0x1.791a8ea33d6b7p-609, 0x1.8d24423f35fap-649, 0x1.8d5772fc7d66bp-374,
     0x1.4f39b34bd4c65p-684, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a88670019f7p-895,
     0x1.f48f4dbf083f7p-801, 0.0, 0.0, 0.0, 0x1.9f275cd8f11a4p-607,
     0x1.27f39caa0d59ep-707, 0x1.39e84af16df0bp-152, 0.0, 0x1.8bea8f0dbaacp-219,
     0x1.ecaf0ae019722p-302, 0.0, 0.0, 0x1.9c1fccf3239e6p-546, 0x1.4d9a529c4d511p-410,
     0.0, 0.0, 0.0, 0x1.2501520ba89f9p-501, 0x1.1a710dc05e4aep-538,
     0x1.277b6388aac5dp-471, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26d2aab4ded08p-505, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41e6562c7e4cfp-343, 0x1.4ed242c3b9ecep-951, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5e76dde353204p-852, 0x1.7abc07c3f4cd9p-605,
     0x1.4c5d559187debp-310, 0.0, 0x1.d943dcda0dac6p-300, 0x1.2cd0f91e50bb6p-1002,
     0x1.c8167b1b9e61dp-827, 0.0, 0.0, 0.0, 0x1.a9abe73feb75bp-524, 0.0,
     0x1.773ca0f69aca1p-846, 0x1.19e5986f557b2p-914, 0x1.67052415612d4p-469, 0.0,
     0x1.d1f1b12574b08p-21, 0x1.0650553e30cd8p-394, 0x1.84d1c0d26c792p-366, 0.0, 0.0,
     0x1.415cc850b43d3p-475, 0.0, 0x1.0b1c8d0b4f168p-264, 0x1.764a0ffcd56a8p-385, 0.0,
     0.0, 0.0, 0x1.148aa65ff0aep-160, 0x1.211e18f8dc081p-295, 0x1.98fa8c4f7ca86p-595,
     0x1.08d8b07aefe42p-297, 0.0, 0x1.6b1694a524585p-976, 0x1.2a5c6fbad4fa2p-822, 0.0,
     0.0, 0x1.4dec4f10b9614p-518, 0.0, 0x1.5421f0ede014cp-988, 0x1.0fbe8137769e9p-888,
     0.0, 0x1.656efa71109e2p-220, 0x1.680b0aff91f72p-925, 0.0, 0x1.0a1d093a0795ap-553,
     0.0, 0.0, 0x1.3720a09a8ff31p-849, 0.0, 0.0, 0.0, 0.0, 0x1.8f612e368efb6p-1016,
     0.0, 0.0, 0.0, 0x1.c601346f976c8p-741, 0.0, 0.0, 0x1.a4bc9427e0565p-326,
     0x1.927619184d013p-461, 0.0, 0x1.cc0d549727e22p-331, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95fb26233b8fbp-519, 0.0,
     0.0, 0x1.d14df53518adap-481, 0.0, 0.0, 0x1.5d4ea8a10cd6p-197, 0.0,
     0x1.f4f431e679e7cp-119, 0.0, 0.0, 0x1.f7521604e2fbep-325, 0.0, 0.0,
     0x1.e2f1453c96ea6p-915, 0x1.feb2c6e801b4fp-397, 0x1.7a6d9fc31ffb4p-25,
     0x1.8e0eede0f3596p-858, 0x1.75bb89700a867p-92, 0x1.1367e2f974ef5p-697, 0.0,
     0x1.c5d2e78c5b03ap-174, 0.0, 0.0, 0.0, 0.0, 0x1.1e6fbfc02f825p-558,
     0x1.fc337f2e7455p-19, 0x1.971203452a2b9p-186, 0.0, 0x1.b2c0c82c9bb5bp-280, 0.0,
     0.0, 0.0, 0x1.78ebd906a7728p-136, 0x1.c3f21b953bd57p-687, 0.0, 0.0,
     0x1.584c2f6ae6abcp-403, 0x1.f8bb87878c02ep-269, 0x1.171a4bf8fbd57p-380, 0.0,
     0x1.980ed033a3d69p-139, 0.0, 0x1.a200e09e117f9p-128, 0x1.2707bf9215ff6p-171, 0.0,
     0.0, 0x1.55fce1c6cf635p-497, 0.0, 0x1.79e9c824245bap-861, 0x1.a20389429469dp-499,
     0x1.a51f3bb97df45p-553, 0.0, 0.0, 0x1.37f1cb68dc104p-305, 0.0, 0.0, 0.0, 0.0,
     0x1.86cfb8b33bfb6p-815, 0.0, 0.0, 0x1.7b8e9372eeb62p-1021, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c0c8b1141f504p-336, 0x1.0f0ae9760d1e3p-996, 0x1.ce0e347f8c2f4p-778,
     0x1.2d7a745e55977p-764, 0x1.6d524d10487adp-641, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.41804bed1acbcp-548, 0.0, 0x1.d4e1c04fe7895p-117, 0x1.67e8a722a1166p-420,
     0x1.2a3bc0c35029cp-77, 0x1.6415714ee1e32p-99, 0x1.841d809705f22p-985,
     0x1.d1efe21c9707p-620, 0.0, 0.0, 0x1.f85acc30a650bp-974, 0x1.36c7db5b5f758p-783,
     0.0, 0x1.29d4101effe1fp-144, 0.0, 0.0, 0x1.fe99a08616f7bp-438, 0.0, 0.0,
     0x1.5eb972d8f4922p-926, 0x1.abb47806a5366p-584, 0x1.0bab90c1cb646p-564, 0.0, 0.0,
     0.0, 0x1.7ea8bc4c47278p-39, 0.0, 0x1.e9daecfc3514dp-606, 0x1.3008fa87c0fbp-934,
     0.0, 0x1.4ad49262f86f7p-959, 0.0, 0x1.692680fec77f2p-481, 0.0, 0.0, 0.0, 0.0,
     0x1.ae08ee4570eb4p-450, 0x1.c9f70465d25f5p-710, 0.0, 0.0, 0.0, 0.0,
     0x1.85a62dfc130d3p-560, 0.0, 0x1.0db5b7af38d4p-837, 0.0, 0.0,
     0x1.ce3a9fb4b5e4cp-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a87b32c7727ep-803,
     0x1.fcfb1a6089d3ap-561, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cdbfd4c77757fp-655, 0.0,
     0.0, 0x1.93de156506d03p-321, 0x1.5bb184dd44d6ap-116, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b5b1db4e432fcp-784, 0.0, 0.0, 0x1.395965d50ca89p-337,
     0x1.d66473c2d3c14p-822, 0x1.70b56317a70f4p-891, 0x1.530ced70ed166p-341, 0.0,
     0x1.ddf654c042584p-474, 0x1.801c6f74bd7a4p-717, 0.0, 0.0, 0x1.493f4681ed534p-800,
     0.0, 0x1.250f212d216b8p-710, 0.0, 0.0, 0x1.a58ee44e85eedp-23,
     0x1.7f7a2c378b2b3p-735, 0x1.a43136fbd9dfbp-1020, 0.0, 0x1.1d1a0ecb7892p-482,
     0x1.7acf9f19f5417p-531, 0.0, 0.0, 0.0, 0x1.1ee265feff2d1p-443,
     0x1.8011068544cd4p-475, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ebd6a77499f9p-790,
     0.0, 0.0, 0.0, 0x1.9ff052813df49p-542, 0.0, 0.0, 0x1.4f63db645d67bp-48, 0.0, 0.0,
     0.0, 0x1.86fd455bb96bp-93, 0x1.7ffe882f254ffp-864, 0.0, 0x1.b8a4c21960dp-344,
     0.0, 0x1.320ca89fbee97p-581, 0x1.1ae3c37509207p-407, 0x1.6417b095baef9p-416,
     0x1.6a5d630619275p-935, 0x1.ff6290f481365p-233, 0.0, 0.0, 0.0, 0.0,
     0x1.7fb472c322c92p-882, 0.0, 0x1.73d1883912012p-1001, 0.0, 0.0, 0.0,
     0x1.126bf033e5de7p-170, 0.0, 0.0, 0x1.bd7b3fe568c8ap-522, 0x1.0682ef4c773fep-173,
     0.0, 0x1.ad491ad53bfe1p-900, 0x1.15772896df1f8p-795, 0x1.b5f6935a780ccp-966, 0.0,
     0.0, 0x1.7606f24e12bf2p-781, 0.0, 0.0, 0.0, 0x1.d3a7a579d1a87p-335,
     0x1.affb95561092ep-906, 0.0, 0x1.e9f392997ad3dp-832, 0x1.7bc21ccbccfe3p-840, 0.0,
     0.0, 0.0, 0x1.e3fb2c99c283ep-643, 0.0, 0x1.80c93ec6a3c7ep-75,
     0x1.15c862ae269c6p-505, 0.0, 0x1.2120b295b78fdp-191, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af8025e447b71p-1021, 0x1.e9070e5c8e8fep-458, 0.0, 0x1.a87c00388ba4ap-570,
     0x1.2ebac3515af31p-868, 0x1.9210248ab5b66p-37, 0.0, 0.0, 0.0,
     0x1.f3153cdd75513p-578, 0x1.e3025a7bbde36p-752, 0x1.c58e607eab4a7p-753, 0.0, 0.0,
     0x1.79c1e5c0aa464p-885, 0.0, 0.0, 0.0, 0.0, 0x1.39fec115df31ep-183, 0.0,
     0x1.7871d2d70197dp-793, 0.0, 0x1.87203f8741d6ep-969, 0.0, 0.0, 0.0,
     0x1.9c32d0b5546d7p-686, 0.0, 0.0, 0.0, 0x1.31f32154ff822p-869,
     0x1.a8623d2a89f26p-234, 0.0, 0x1.008ffd3778604p-80, 0.0, 0x1.4aefe807f52eep-859,
     0x1.68d36d9176accp-588, 0.0, 0x1.cd1ff807ef42cp-558, 0.0, 0.0,
     0x1.76d051fca585fp-680, 0.0, 0.0, 0x1.4e54e34f51cap-329, 0x1.55b6628d14102p-516,
     0x1.d1ee17176d417p-709, 0x1.b770f8a6fdcb5p-312, 0.0, 0x1.bb88d20afff25p-594,
     0x1.847877aa8e012p-460, 0x1.bfe406fc03c95p-308, 0x1.c4a8d35896067p-616, 0.0, 0.0,
     0.0, 0x1.85041de6e404cp-741, 0x1.33b38e20184e7p-997, 0x1.173114f016e5dp-856, 0.0,
     0.0, 0.0, 0x1.84ac4f25de695p-38, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dac33eb44c4ecp-162, 0.0, 0.0, 0x1.2fd43eec6a65fp-615, 0.0, 0.0,
     0x1.484bd16bf818ap-300, 0.0, 0x1.4ccf9dab30821p-356, 0.0, 0.0,
     0x1.f5bd01da2a1a9p-780, 0x1.e947bbf49541fp-230, 0x1.8e4754e660fdfp-333,
     0x1.c10e0577357d7p-568, 0.0, 0.0, 0x1.cfdff4c11178cp-499, 0x1.74dbcbbc14d0fp-663,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f69d733fc89p-832, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.986fd2d21ab26p-752, 0x1.83536222befc4p-393, 0.0, 0.0,
     0x1.a2c4b45fa8a7fp-910, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.727efe9c7e3e9p-566, 0.0, 0.0, 0.0, 0x1.640b4c0013599p-503,
     0x1.7fc96cecf09dbp-992, 0x1.52921aa95b747p-688, 0x1.20a410945ec1ep-531,
     0x1.95be80f2f36c1p-527, 0.0, 0x1.114c819672e9bp-753, 0x1.0c8ec750f8133p-183,
     0x1.66caed547100fp-259, 0x1.945045c40dd4p-494, 0x1.4547474300b38p-198,
     0x1.34ca45edef2f2p-756, 0x1.f98608930e46ep-154, 0x1.79c1026c823d4p-286,
     0x1.2b7c2f576db4cp-410, 0x1.1763a35a135b3p-439, 0.0, 0x1.e1e29dde319cap-300,
     0x1.3efa268e57c67p-243, 0.0, 0x1.ee239a714cc88p-469, 0.0, 0x1.8bfdb13dfc89fp-60,
     0.0, 0x1.1bb90849b35ccp-876, 0.0, 0.0, 0.0, 0x1.0846675b633b4p-905,
     0x1.c8858de5175c1p-753, 0.0, 0.0, 0x1.e081de074ab98p-181, 0x1.8af55fbc3ac91p-308,
     0.0, 0x1.360adb0fa57bdp-975, 0.0, 0.0, 0x1.5afb0b3124736p-725,
     0x1.3665f621c1bfep-496, 0x1.f93fed30976c8p-996, 0.0, 0.0, 0.0,
     0x1.dc14ea5aeba7fp-731, 0x1.6407f38c70c84p-655, 0.0, 0.0, 0.0,
     0x1.239af0579d261p-853, 0x1.641021a958373p-917, 0.0, 0.0, 0x1.c9da8650d30a2p-625,
     0x1.7fc872d48b069p-569, 0x1.d88030623a9e8p-100, 0x1.fe6105e404178p-662, 0.0, 0.0,
     0x1.ccace2ac4ef33p-567, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed4798a492834p-974,
     0.0, 0.0, 0x1.f517a88549ac8p-174, 0.0, 0.0, 0.0, 0.0, 0x1.b85c93d7f2633p-785,
     0x1.742e78dea256cp-361, 0x1.73f0eb04a2773p-324, 0.0, 0.0, 0x1.54e48d85b37f7p-234,
     0.0, 0x1.27987ab8c0ec8p-643, 0.0, 0x1.e8824fbc966afp-805, 0x1.3f21da9d8bea4p-865,
     0.0, 0.0, 0x1.e8a4bb5d05c0bp-684, 0.0, 0x1.574f27f8ad5dbp-130,
     0x1.f2a36e6309ba9p-258, 0.0, 0x1.8c16e90d98684p-250, 0x1.73f1e29964386p-312, 0.0,
     0x1.20e32d5a99efap-701, 0.0, 0x1.5add593b147dep-520, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0c05c01820419p-850, 0x1.d0caeac4402a9p-631, 0x1.6a057aa5b7d3cp-208,
     0x1.802071a931a11p-408, 0.0, 0.0, 0x1.47fc0fd4cfebcp-31, 0.0,
     0x1.e0ea3e3deba16p-253, 0x1.67f2e4df065bep-861, 0.0, 0x1.983fa9b84b904p-749, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cfdfcf63cb7aep-450, 0x1.5b7c60b041ad1p-342, 0.0,
     0.0, 0x1.0fa92df95fc36p-368, 0.0, 0x1.e17503244c99cp-662, 0x1.269b74a713031p-864,
     0x1.e7b6634ca53dbp-885, 0.0, 0x1.cb21bab39f957p-956, 0.0, 0x1.fa0cff8d1e5e8p-498,
     0x1.8540a56195535p-693, 0x1.ec8b5f5016c1ep-388, 0.0, 0.0, 0.0, 0.0,
     0x1.83d028a98da3bp-169, 0x1.9018a64b27cabp-245, 0x1.097e9c285c252p-627, 0.0, 0.0,
     0.0, 0x1.f7e9308be267p-916, 0x1.919d922c12677p-90, 0x1.61c1547e63ba4p-585, 0.0,
     0x1.9107f671a7237p-578, 0x1.853c4859f58f5p-162, 0x1.a0b0d1650529fp-522, 0.0,
     0x1.fb929438bdab9p-354, 0.0, 0x1.544773cc4ff18p-152, 0x1.72ada8df58646p-198, 0.0,
     0x1.ada4e6da996e5p-799, 0x1.e5d157ce546fep-487, 0.0, 0.0, 0.0, 0.0,
     0x1.636547bef6195p-829, 0.0, 0x1.37cf2a9b859b8p-402, 0.0, 0x1.77b67404ec337p-337,
     0x1.6acbf235c2fbbp-371, 0x1.e21fd8aedb2b3p-670, 0.0, 0.0, 0.0,
     0x1.5e0ed0a6f9d1ap-736, 0.0, 0.0, 0x1.f93725fb65fddp-558, 0x1.6dbe2d38b7c76p-710,
     0.0, 0.0, 0x1.29b840c0bdabfp-506, 0.0, 0.0, 0x1.c97e3f844909dp-678,
     0x1.081372e938251p-103, 0.0, 0x1.1a2a5b0f01ec5p-902, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8cf7bd8a937b3p-929, 0x1.f48bfa11b4b5bp-910, 0.0, 0.0, 0x1.9170e1f81c56p-357,
     0x1.2ab56f47a6123p-367, 0.0, 0x1.415e19a88f6abp-682, 0.0, 0x1.71bed1d5fba58p-739,
     0.0, 0.0, 0.0, 0x1.d66d7c08744cdp-622, 0.0, 0.0, 0.0, 0x1.dfa2f2a0e738bp-257,
     0x1.390e7a1a77083p-856, 0.0, 0.0, 0x1.e2e836c288304p-63, 0.0, 0.0,
     0x1.3b0d90099f7d6p-645, 0x1.e70c38f537446p-219, 0.0, 0x1.0092f957ebc39p-52,
     0x1.e80a8c50f11fep-754, 0x1.17a7dcd31b2a2p-388, 0.0, 0.0, 0.0,
     0x1.f5f780c64053ap-765, 0x1.4d8eb9e301cf1p-93, 0x1.3b58f084955e4p-593,
     0x1.46101268fb918p-749, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0239b8dd4527fp-190,
     0x1.cf097d723388dp-759, 0x1.d5d906f7fda5fp-333, 0.0, 0x1.ee30303a523efp-569,
     0x1.e5b17370d0979p-536, 0.0, 0x1.88dd7a86997bep-737, 0.0, 0.0,
     0x1.b6c411dcac759p-132, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68d1ffb854e47p-464,
     0x1.f8a0e2b749343p-18, 0x1.5e9c398c8b186p-67, 0.0, 0x1.59fa9b74318b4p-787, 0.0,
     0.0, 0.0, 0.0, 0x1.c80acfc59530fp-1004, 0.0, 0x1.092b11008d6f3p-855, 0.0,
     0x1.64a9696167019p-987, 0x1.60541f5e205f5p-338, 0.0, 0.0, 0.0, 0.0,
     0x1.a50410f768511p-28, 0x1.003b766f7f892p-936, 0.0, 0.0, 0x1.14d0aaaed7c6fp-685,
     0x1.d84702060161fp-380, 0x1.577cc161b5a21p-427, 0.0, 0x1.8da531c76817ap-219,
     0x1.0dd0605078ee2p-413, 0.0, 0x1.4d279aeaa31afp-103, 0x1.0dd2d8c77a4c6p-193,
     0x1.cc07117876752p-780
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
            tmp1 = Sleef_modfd2_kvx(tmp0);
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
    printf("Sleef_modfd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_modfd2_kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
