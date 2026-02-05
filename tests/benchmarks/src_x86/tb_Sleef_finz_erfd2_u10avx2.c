/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfd2_u10avx2128.c --function Sleef_finz_erfd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.efd81a816bd22p-863,
     0x1.80d9d943ae332p-496, 0x1.7d97bed125be1p-435, 0.0, 0x1.e0183ce6b2914p-814, 0.0,
     0x1.8349733c570e4p-124, 0x1.bd61fdba0ae6ap-130, 0x1.56bd8e00d145ep-291,
     0x1.661b8bea152b6p-572, 0.0, 0x1.6b8392dd50007p-11, 0.0, 0.0, 0.0,
     0x1.319a5dea11ad6p-138, 0x1.9958d27e90b27p-806, 0x1.ddea0850f5dddp-469,
     0x1.9f8c9f6c7291bp-563, 0.0, 0.0, 0.0, 0x1.f199c3d51692ep-409,
     0x1.95a3c2e88d86fp-715, 0x1.3e5714c041544p-581, 0x1.19b785d443473p-504, 0.0, 0.0,
     0.0, 0x1.ec7d958ebcf13p-569, 0x1.b636599f7a4p-901, 0.0, 0x1.f848ff1e23f49p-74,
     0.0, 0x1.4ad4ead85ec5bp-233, 0.0, 0.0, 0x1.5434ff89d6c5ap-566,
     0x1.b41e57730bcfap-332, 0x1.881f58de269fap-173, 0.0, 0.0, 0x1.74b2a6a4d4c39p-705,
     0.0, 0x1.e5d14980803c1p-597, 0.0, 0x1.81dab111ed034p-238, 0.0, 0.0,
     0x1.fe8e08e69a62cp-822, 0.0, 0x1.8dbdce96c125dp-704, 0x1.a01b14b366d5ap-238,
     0x1.89bbaefc5620ep-457, 0x1.9dbae86d8fbbp-283, 0x1.d86597a0a1b6ep-827,
     0x1.edb104c2a9755p-884, 0.0, 0x1.bef1f52ab3058p-407, 0x1.2159938f7c1bap-778,
     0x1.bf1656463b6aep-700, 0.0, 0x1.df8e0af316062p-371, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1692f0d0e749ap-69, 0.0, 0x1.cbd05571616b4p-299, 0.0, 0.0, 0.0, 0.0,
     0x1.88c4acee9e8e5p-708, 0x1.5e7b02c2152fbp-521, 0x1.20e29339ced9fp-743, 0.0, 0.0,
     0x1.9b874f4b04a48p-484, 0x1.ad700b84f8254p-683, 0x1.4c4cdb917eff7p-305,
     0x1.5990b85ab0c11p-938, 0.0, 0x1.dd8f80b38fe09p-479, 0x1.11f8e7d1aeb3cp-68,
     0x1.9aad1e6082bcap-21, 0x1.56d91ba13b6b4p-315, 0.0, 0x1.744da5004a5edp-952,
     0x1.394f686923802p-840, 0.0, 0.0, 0x1.5f78622035645p-419, 0.0, 0.0,
     0x1.3b7f464e8f862p-702, 0x1.7463f6e902d57p-306, 0x1.e3eea16e4eb08p-90,
     0x1.da0cffb2a22edp-650, 0.0, 0.0, 0x1.cef05243cb71p-444, 0x1.92f26e882a3c5p-329,
     0x1.d6ea161b939a8p-179, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34ebdc3e2005cp-1,
     0x1.fc385a6df1d13p-514, 0.0, 0.0, 0x1.dc989cde7d298p-260, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2934f0b32a143p-1000, 0.0, 0.0, 0x1.b38905bc1c185p-907, 0.0, 0.0,
     0x1.222c4b0d1dbbbp-91, 0.0, 0x1.85f3159e1e546p-232, 0x1.ec89000158d03p-317, 0.0,
     0.0, 0x1.e6033fbabd6bap-757, 0x1.ddd9b201b05fap-493, 0.0, 0x1.8f9a32029b08bp-189,
     0.0, 0x1.044068d61b372p-268, 0.0, 0x1.01f4dffb4a12fp-959, 0.0, 0.0, 0.0, 0.0,
     0x1.bd904ef8e6e2bp-769, 0x1.2b52de947fd11p-251, 0.0, 0.0, 0x1.236e999a9a835p-522,
     0x1.b223140187d6p-740, 0x1.67c8d12ecc562p-725, 0.0, 0x1.5e9d2d7f5eeddp-520,
     0x1.44d2dd168f4ccp-388, 0.0, 0x1.1628a95b613b4p-325, 0x1.7c8aabe0fe71cp-652,
     0x1.b3e6e769a90a2p-867, 0x1.49a02f7824239p-876, 0x1.27e78127e13cap-124,
     0x1.c166dfdfee5p-141, 0.0, 0x1.c111ac626942cp-952, 0x1.16bec8b84d09bp-180,
     0x1.49dcdff226882p-409, 0x1.8d7e80ee712a4p-454, 0.0, 0.0, 0.0,
     0x1.96574dd2b5129p-349, 0x1.cf33d6d6b32acp-457, 0x1.5b07adfbf0a3cp-201, 0.0,
     0x1.42ce78acbbe3ap-224, 0.0, 0.0, 0.0, 0.0, 0x1.60adca355037ep-953,
     0x1.452f36d17f164p-244, 0x1.cd47ff8d7192bp-218, 0x1.835ed279212d3p-350,
     0x1.433de22ce7ce8p-5, 0.0, 0.0, 0.0, 0.0, 0x1.dc38290361fbdp-140,
     0x1.079b673e6d39ep-904, 0x1.3fefc91d2e38cp-312, 0.0, 0x1.127b372244a2ap-842,
     0x1.f05cdc921c86ap-946, 0x1.08a220fef84a3p-271, 0x1.2c6f3189d3035p-304, 0.0,
     0x1.c3d60e84fb46cp-53, 0.0, 0x1.9f5492c0349e8p-509, 0.0, 0x1.c14771473690ap-241,
     0.0, 0x1.412abcc0af1c1p-407, 0x1.978b864bc30a9p-721, 0.0, 0.0, 0.0,
     0x1.255f8bfc1087ep-245, 0x1.2a3f78388b03fp-640, 0x1.7daade546e281p-162,
     0x1.55ed9780a55fbp-679, 0.0, 0x1.a74350ad3004dp-834, 0x1.cda9c312b51b7p-584, 0.0,
     0x1.2a446c1e3006ep-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac376bfb96efp-204,
     0x1.e44939eb3dc37p-908, 0x1.3d9ea70ef1bdap-815, 0x1.b4c48d0008e94p-689, 0.0,
     0x1.fb131d859954ap-478, 0.0, 0x1.cb5fcb3431425p-142, 0x1.80ffc4e70fa65p-794,
     0x1.3c0c422bfb44fp-979, 0x1.9a8a8f824497ep-302, 0.0, 0.0, 0x1.9d537e35070f9p-47,
     0x1.34967e809d47ep-381, 0.0, 0x1.6069bd4c20e48p-359, 0.0, 0x1.ea41950a64acbp-840,
     0x1.6196fc5da3fc7p-436, 0x1.4f1a69f945e51p-396, 0.0, 0.0, 0x1.d39bd4d2d04fap-474,
     0x1.f1fba5478c008p-620, 0x1.925479fe9f3bfp-845, 0.0, 0x1.bb73d6454717fp-927,
     0x1.c531dc1c043ffp-354, 0.0, 0.0, 0x1.86fd6dcaa63cbp-70, 0x1.237f683418499p-856,
     0x1.e97d59f5aa6bdp-621, 0x1.d20101addb96bp-152, 0x1.78f3538247c5fp-250,
     0x1.81ac310a11e89p-36, 0.0, 0x1.7b1182716ded8p-925, 0.0, 0x1.82d7816628969p-96,
     0.0, 0.0, 0x1.a0a0268f3e7ccp-503, 0x1.643eba88088d7p-27, 0x1.b5318452b04b2p-222,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c831501b02344p-157,
     0x1.0f912baf6562cp-593, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c817fd80d4ef9p-637, 0.0,
     0x1.84b43ed3d3e9fp-448, 0x1.a652ae6f839ffp-853, 0x1.61006c85658dep-562, 0.0,
     0x1.32553a21995a5p-11, 0x1.8c9522f03527ep-818, 0.0, 0x1.6b2677f51238ap-611, 0.0,
     0x1.2cf4f3f2cab74p-566, 0x1.31c7dd66abe29p-617, 0.0, 0x1.7ccbdabbd8f84p-333,
     0x1.cfd6f5a11b2fap-45, 0x1.28d91495f0d4ap-817, 0.0, 0x1.0cc277b8aa25p-447,
     0x1.010d3d42168fp-772, 0.0, 0x1.267e1982ceeb3p-818, 0x1.eae2633c7c82p-546, 0.0,
     0x1.60223851230b7p-487, 0x1.bcaf78ca3c488p-763, 0x1.751de21a1b0a8p-129, 0.0,
     0x1.6b1d298d858fbp-243, 0.0, 0.0, 0.0, 0.0, 0x1.d6b979e8694bcp-2,
     0x1.0d5d0a4668561p-562, 0x1.9c6155119995p-761, 0.0, 0x1.364a46961b4b8p-956, 0.0,
     0.0, 0x1.20143b70a0643p-681, 0.0, 0.0, 0x1.f4eb6d3d187e9p-209,
     0x1.085b07c3ae2dp-322, 0x1.acebaafacd8dfp-172, 0x1.4e61adce71696p-537,
     0x1.4bb342807ddc7p-658, 0.0, 0.0, 0.0, 0x1.b1677a5a4dd12p-74, 0.0, 0.0,
     0x1.4d6d91bede0b6p-978, 0x1.ba83611087205p-290, 0x1.749236ce06424p-894,
     0x1.6098e20c9975cp-859, 0x1.9d5c546485408p-112, 0x1.add575c041483p-368, 0.0, 0.0,
     0x1.5a55a9f6320d4p-1017, 0x1.5aca6b1b65d61p-1007, 0.0, 0.0,
     0x1.c761fff77fdbbp-767, 0.0, 0.0, 0x1.1fe0bb5b3adcp-351, 0.0,
     0x1.85761c954bfcbp-726, 0.0, 0.0, 0x1.4c68d556f28fcp-377, 0x1.5c60a237f374dp-402,
     0x1.76c3ef917d76bp-680, 0.0, 0.0, 0x1.639c3896dec69p-926, 0x1.76e5891dbe32dp-524,
     0.0, 0x1.8b7f34ff1f28p-351, 0x1.614362c9f6dfdp-773, 0.0, 0.0,
     0x1.117d1129952e7p-196, 0x1.65c41778145f1p-454, 0.0, 0x1.7337ba3a57b6ap-856,
     0x1.7ccec6198514cp-691, 0x1.b76aa0924609dp-777, 0.0, 0.0, 0.0,
     0x1.916bdc411b4c7p-956, 0.0, 0.0, 0x1.d9752c6a1ad56p-935, 0x1.d6dade607f93dp-828,
     0x1.280af822ab9a3p-641, 0.0, 0x1.a7b3be6d5799bp-979, 0x1.fd1e1dcc04302p-17,
     0x1.be033f9af930ap-236, 0.0, 0.0, 0.0, 0.0, 0x1.662250146a6bp-114,
     0x1.ce22d5a655ab2p-302, 0.0, 0.0, 0.0, 0x1.9a36213fc8128p-527,
     0x1.bacbedf785aefp-142, 0x1.104c921d2609cp-556, 0.0, 0x1.cffb0e4112da1p-960, 0.0,
     0.0, 0.0, 0.0, 0x1.16874e6ca69a8p-818, 0x1.ef5aa9ee143fap-996, 0.0,
     0x1.1fee0097e5cc7p-755, 0x1.8ce422a7bc7cdp-135, 0x1.490bb088e8c7ep-659, 0.0,
     0x1.7323c8fbb5ef7p-220, 0x1.8d638bacd879fp-929, 0x1.62da45c7056e6p-212, 0.0,
     0x1.cf5e990716cc4p-405, 0.0, 0.0, 0.0, 0x1.6346e6e5bcdf7p-684, 0.0, 0.0, 0.0,
     0x1.4f86102265cdep-374, 0.0, 0x1.3279461a4ae8cp-396, 0x1.78e04eb7fc23fp-863,
     0x1.86ffd2cb24e58p-125, 0x1.7813a4103fb71p-793, 0x1.da34f54ee43dap-493,
     0x1.5911b98ba09f1p-15, 0.0, 0x1.c6db2cccd4c31p-6, 0x1.c63e74b72edafp-356, 0.0,
     0x1.7add8bc6423c2p-242, 0x1.39b114714054cp-57, 0x1.6e51fbe70136cp-677, 0.0, 0.0,
     0.0, 0x1.57bec53a40119p-651, 0.0, 0x1.5f13645ad61a4p-895, 0.0,
     0x1.6268dd827054dp-12, 0x1.96ea1ccad77f1p-379, 0.0, 0x1.1acbab746ab2dp-614, 0.0,
     0.0, 0.0, 0x1.1a915befe68cp-579, 0x1.07b7e6239a2d6p-951, 0x1.0f3d5114572bbp-230,
     0x1.a4c756340b61dp-705, 0x1.528027fd09205p-806, 0.0, 0x1.b142274dfca5dp-237, 0.0,
     0.0, 0.0, 0x1.909af1af30bbep-689, 0x1.bbe69855057ccp-652, 0x1.df1ce6565025cp-93,
     0x1.0ad5587c3e922p-663, 0.0, 0.0, 0x1.9550ef76cc80ep-902, 0.0, 0.0,
     0x1.d9ccb65eb6447p-343, 0.0, 0x1.594b8831f95c6p-51, 0x1.3217fd2eeeff8p-961,
     0x1.81aec6b1b3007p-817, 0.0, 0.0, 0x1.ac2a092f7e702p-889, 0.0, 0.0,
     0x1.7da552a3e2733p-47, 0.0, 0.0, 0x1.d4cb599d1ce73p-794, 0.0, 0.0, 0.0,
     0x1.9172146f265f9p-386, 0x1.b2086188e737fp-619, 0.0, 0x1.794d8320bef9bp-710,
     0x1.4fa468b565621p-868, 0.0, 0.0, 0.0, 0x1.9b7563b70b3a8p-33,
     0x1.d07a233ac06dap-919, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cbc4a29b5b66cp-962, 0.0,
     0x1.4fadf807ca5e6p-1001, 0.0, 0.0, 0x1.d6e187b21d3f3p-782,
     0x1.87a98626e7108p-633, 0.0, 0.0, 0x1.16b2ed071a3f1p-153, 0x1.99827d0300451p-200,
     0x1.31ac562c3acc8p-672, 0x1.782b7aece10adp-879, 0x1.188ed151c746p-828,
     0x1.b8257224c8776p-892, 0x1.0159012d890c5p-789, 0x1.a644abf231122p-208,
     0x1.f0cd3982b406p-994, 0x1.5eca4564ee1b1p-141, 0x1.44fbf0b98971ap-177,
     0x1.77aaca1b1229p-59, 0x1.1b63a58042bd3p-11, 0.0, 0.0, 0x1.78d0ad6e9d0cap-56,
     0.0, 0.0, 0.0, 0x1.9ac0faa63cd5bp-286, 0x1.55b9aff5190cap-133, 0.0,
     0x1.0c0495f171feep-679, 0x1.7acb0c44c489p-763, 0.0, 0.0, 0.0,
     0x1.7bf26ef352fcep-734, 0.0, 0x1.5b6509e9b7228p-624, 0.0, 0x1.298a6c218fde1p-878,
     0x1.7e510eb796fc9p-325, 0.0, 0x1.d6d228adf1d72p-269, 0x1.81a0d94355692p-791, 0.0,
     0x1.3927c5d6b01cbp-810, 0.0, 0.0, 0x1.db6ac7e320545p-199, 0x1.b1b9996d0b0a2p-779,
     0x1.6c609681806a8p-86, 0x1.0845df02c5dddp-306, 0x1.651e131c0d84cp-145,
     0x1.a95fce3f76abap-188, 0.0, 0x1.733d6fdd086cbp-403, 0.0, 0.0, 0.0, 0.0,
     0x1.24664349a1f3fp-614, 0.0, 0x1.23879aa2bcafdp-742, 0x1.fdc369f706abcp-537, 0.0,
     0.0, 0x1.2f037ac32bd0ap-675, 0x1.8612df6ed752dp-430, 0.0, 0x1.ea8db58b8c4eep-735,
     0.0, 0.0, 0.0, 0.0, 0x1.f639ad2ad2a58p-156, 0.0, 0x1.e149f18c76661p-830, 0.0,
     0.0, 0x1.b6d3424ff83d8p-723, 0.0, 0x1.d2ab211a350fcp-400, 0x1.1bed30c379677p-498,
     0.0, 0.0, 0x1.a56fa1d7f36e8p-575, 0x1.af974062c2f79p-11, 0x1.0397850bcb4bdp-756,
     0.0, 0.0, 0.0, 0.0, 0x1.564f62ec584a2p-16, 0.0, 0.0, 0x1.701520a230972p-190,
     0x1.2d9d8d72ee16ep-866, 0x1.38c7092df4862p-318, 0.0, 0.0, 0x1.c5180f82fcebfp-99,
     0.0, 0.0, 0.0, 0x1.c0a68f0a7a657p-994, 0.0, 0x1.ff88b0bdf2f97p-992,
     0x1.15fd8696f83e5p-593, 0x1.675610aec441p-388, 0x1.0ec4a0f6493afp-78, 0.0,
     0x1.0fe0d22ae361dp-793, 0x1.e7822bc49fee6p-601, 0.0, 0x1.eb22eb5f55f2bp-947,
     0x1.5bef718650222p-661, 0x1.1e3367332df84p-703, 0.0, 0x1.fdb8fa22dfdcep-925,
     0x1.52bbe991a575dp-112, 0.0, 0.0, 0.0, 0.0, 0x1.cb4525c0ea4eap-514,
     0x1.ce4c53bbc2663p-69, 0x1.dcfbe58777556p-6, 0.0, 0x1.70dd11641b4c5p-237, 0.0,
     0x1.655e6d420ab8bp-559, 0.0, 0.0, 0.0, 0x1.47f3c1ed1ccd1p-453,
     0x1.89b9f1b573ea9p-506, 0.0, 0x1.341045bf098cbp-581, 0x1.8f5e4ae3c5f1dp-2,
     0x1.f5fe208124fbp-764, 0x1.91a9c6ae0badp-657, 0.0, 0.0, 0x1.42b9306c0546fp-923,
     0x1.ca4c5275096adp-34, 0x1.f8a7d073b216cp-183, 0x1.ba8274f6cea9ap-854,
     0x1.5a9291c809e8cp-588, 0x1.69f1e5d878cdap-161, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.19289fb8b1504p-418, 0x1.ef6102cfa1e9dp-553, 0.0, 0x1.f525cdc5fdbe5p-445, 0.0,
     0x1.eb9550007ffb6p-289, 0.0, 0x1.e9e8fc1dab0b4p-39, 0x1.eb9f459045988p-60,
     0x1.b46c59edfa459p-742, 0.0, 0.0, 0x1.f6fa1af1487ddp-655, 0.0,
     0x1.8a9f0c98be63ap-671, 0x1.65f77fa50fc23p-52, 0.0, 0x1.9ea21f3853333p-445, 0.0,
     0x1.039797b4fa381p-188, 0x1.77b244236a63ap-672, 0.0, 0x1.7af6554cdd53cp-922,
     0x1.de2b6f23fe951p-791, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74b711fcefbd3p-850,
     0x1.1675609231ebcp-79, 0x1.9ccd7b595d168p-821, 0x1.b58a5129ecffdp-893, 0.0,
     0x1.bfbc2d562dafcp-442, 0.0, 0x1.5c2345f56e6ap-824, 0.0, 0.0, 0.0, 0.0,
     0x1.d1f86d394d629p-744, 0.0, 0.0, 0.0, 0.0, 0x1.3b81c2abca308p-712,
     0x1.402ac80905eep-569, 0x1.c5ce1aa2e9e02p-933, 0.0, 0x1.d59443ddae404p-930,
     0x1.e6ca1d72a8716p-425, 0.0, 0x1.c08cb10b9a678p-904, 0.0, 0x1.58ed1471a1048p-298,
     0x1.0a2bf0089dc13p-5, 0x1.c816a4221406bp-65, 0.0, 0.0, 0.0,
     0x1.2be2a5019abb1p-679, 0x1.4c8c6a1220edp-727, 0.0, 0x1.36b98e810d293p-210, 0.0,
     0.0, 0x1.e04c2a4ed1a82p-964, 0.0, 0.0, 0x1.00c814b82d9b6p-826, 0.0, 0.0,
     0x1.3d98db54d3b61p-332, 0x1.ed6bb152c65f8p-272, 0x1.fe22ef1a25b7cp-739, 0.0, 0.0,
     0x1.12e1cb8bd4415p-831, 0x1.6bf040660f861p-699, 0x1.71a3b54f67122p-901, 0.0, 0.0,
     0.0, 0x1.df8f63bc82a06p-977, 0.0, 0.0, 0.0, 0x1p0, 0x1.8a38756c661d3p-633, 0.0,
     0x1.387a53000f17p-399, 0.0, 0.0, 0.0, 0x1.720989aa0b225p-904, 0.0,
     0x1.860887da8dd43p-676, 0x1.0b512fb858af2p-503, 0x1.b0ed3a98f0558p-511, 0.0, 0.0,
     0.0, 0x1.13aeb8e90ad1ep-850, 0x1.d2acc3d870994p-355, 0x1.bda62d61a6a95p-40, 0.0,
     0x1.25345fc99f45cp-658, 0.0, 0.0, 0x1.e3efbc62d959ap-235, 0.0, 0.0,
     0x1.af1e132f688b5p-773, 0x1.03c36f2eebe7cp-8, 0.0, 0x1.c4ed6a0683591p-787,
     0x1.f4a869de3a6cbp-969, 0x1.ffcfb88d0e387p-847, 0x1.a683bd8371ba7p-1011, 0.0,
     0.0, 0x1.d4f92c0a4baa2p-205, 0.0, 0.0, 0.0, 0x1.5372846812524p-906, 0.0, 0.0,
     0.0, 0x1.c64c912178aa3p-61, 0.0, 0x1.bba3fc1b7d15ep-1020, 0.0, 0.0,
     0x1.1f6512073ee0bp-375, 0x1.bf9b3b797e1a8p-88, 0.0, 0.0, 0x1.a6ab3f2223e5fp-104,
     0.0, 0.0, 0.0, 0.0, 0x1.5abc3de1cd17cp-253, 0x1.0a8927c86852ep-444,
     0x1.73d92ab6dcea6p-694, 0x1.1a1b2c6324727p-12, 0.0, 0.0, 0x1.519887ac73dd3p-278,
     0x1.e00892e6a4b61p-438, 0x1.449c171635874p-322, 0x1.6f9b2c59ead26p-507,
     0x1.2e708e1c8acdbp-968, 0x1.24d4f616c1c3dp-727, 0x1.00bd045e5e76fp-717, 0.0,
     0x1.935bc456b6b2cp-568, 0.0, 0x1.7120e4e88deb3p-813, 0x1.ff328209299dbp-958,
     0x1.f825535e3c2eep-731, 0.0, 0.0, 0.0, 0.0, 0x1.d9dc91c108592p-552, 0.0, 0.0,
     0.0, 0x1.3ec1a24176f37p-635, 0x1.26093183e8501p-36, 0.0, 0x1.5e70fad3eaa59p-381,
     0x1.f49cdf2204ef2p-598, 0x1.7f8af2dc3e403p-167, 0x1.1c5e14699b1d1p-64,
     0x1.a896320ff9cf9p-971, 0x1.0ae81be99cf41p-883, 0.0, 0.0, 0x1.dc7451d598b6ep-699,
     0.0, 0.0, 0.0, 0x1.61400dd9973fdp-473, 0.0, 0.0, 0x1.59184c3ab622cp-748,
     0x1.6d5919a3e7ec5p-501, 0.0, 0.0, 0x1.119178002945cp-383, 0.0,
     0x1.3155356a7dde6p-161, 0.0, 0.0, 0x1.86a2e4db6013ep-955, 0x1.82c4e19924327p-81,
     0.0, 0x1.364e8fba2016fp-860, 0x1.0aafc6306ae24p-854, 0.0, 0.0,
     0x1.a1ce591836717p-868, 0.0, 0x1.5ade671762958p-128, 0.0, 0x1.c78825e7f425p-369,
     0.0, 0x1.c76fb6461c4cp-634, 0.0, 0x1.b07bfa5e75b09p-642, 0.0,
     0x1.ec320398427ccp-615, 0x1.8c2f225fd3539p-605, 0.0, 0x1.fd172f7b279abp-293,
     0x1.703d870aabfap-835, 0x1.180cab82fff92p-88, 0x1.68cad2816c53dp-572, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.93ca766266376p-454, 0x1.fc6c660a5eeap-883,
     0x1.a1641572d9ed5p-651, 0.0, 0x1.93d7fb377398cp-107, 0x1.9239cf4c24749p-736, 0.0,
     0.0, 0.0, 0.0, 0x1.c40fb310c4889p-955, 0.0, 0.0, 0.0, 0x1.023d3ba666845p-934,
     0.0, 0x1.cf777c2c1102cp-951, 0.0, 0.0, 0.0, 0x1.66022107c8053p-813,
     0x1.183cff78687fcp-289, 0.0, 0x1.1f292456ce423p-600, 0.0, 0x1.b9231c8ee4dd6p-876,
     0.0, 0x1.df30b226b252fp-639, 0x1.930b4fc35bb95p-898, 0x1.e2e0b38490b1cp-70,
     0x1.a453af931c9ccp-199, 0x1.d11e68f8d547cp-863, 0.0, 0x1.c0bc1ae78a9d5p-674, 0.0,
     0x1.6a2bb255f5dfcp-394, 0x1.86e44cfb8c313p-423, 0.0, 0.0, 0x1.a1fb530da8f83p-683,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.540da6d2a26eap-492, 0x1.eee943cf6b652p-454, 0.0,
     0.0, 0.0, 0.0, 0x1.b4cc9aa53a85ap-847, 0x1.8d39fe93c8818p-158,
     0x1.0b3b7ed39351bp-353, 0x1.3332765053d74p-200, 0.0, 0.0, 0.0,
     0x1.deeeb472acdb6p-834, 0.0, 0.0, 0x1.6dfe13dd015dp-63, 0.0, 0.0,
     0x1.582cefdd6eb44p-14, 0.0, 0x1.f27f61738a30dp-270, 0.0, 0.0,
     0x1.cc6159ef69de5p-531, 0x1.3bf6ed6992a68p-422, 0.0, 0.0, 0.0,
     0x1.e114e6afc714fp-553, 0.0, 0x1.5423bebebb042p-316, 0.0,
     0x1.2b3676a3c3628p-1008, 0.0, 0x1.90d90d3729851p-901, 0.0, 0x1.99afbb9be553cp-2,
     0.0, 0x1.ca007ff35ee0ap-389, 0.0, 0x1.a4a1d65501bf4p-942, 0x1.4f5bc9eef2437p-571,
     0.0, 0x1.61639817a991cp-513, 0.0, 0.0, 0.0, 0.0, 0x1.d2ce594ff6912p-182, 0.0,
     0x1.69f81ba6353ffp-844, 0.0, 0x1.f7d41c29c7ef4p-841, 0x1.b20021e595a7bp-738, 0.0,
     0.0
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
            tmp1 = Sleef_finz_erfd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_erfd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_erfd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
