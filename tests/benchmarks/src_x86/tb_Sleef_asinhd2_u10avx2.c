/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhd2_u10avx2128.c --function Sleef_asinhd2_u10avx2128 \
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
     0.0, 0.0, 0x1.3c17b21ca4a6ap-117, 0x1.f96ca6ac959c2p-772,
     0x1.69a5d278b0803p-679, 0x1.dfb2df51c4d52p-747, 0.0, 0.0, 0x1.dbfc2a57d6477p-365,
     0.0, 0x1.eb69ca9c779f1p-996, 0x1.a39c8616a5f06p-430, 0.0, 0x1.8cc77ccac6822p-855,
     0x1.ddb033174409bp-973, 0.0, 0x1.95f90ecc64d8ep-60, 0x1.222bfbf7b8b4bp-578,
     0x1.b64a9147f1c6fp-593, 0x1.41c787772c154p-442, 0x1.a158700e1fd79p-556, 0.0, 0.0,
     0x1.d70fdab6a54bcp-277, 0x1.ee4fd3a4d9d6cp-653, 0x1.9bcca1f13668ap-57, 0.0,
     0x1.f6a309665fe6fp-419, 0x1.a2b26621daaefp-979, 0x1.ce55ebf7de5d8p-427,
     0x1.bcfcb09d50014p-803, 0x1.ae5d214440af3p-946, 0x1.47bc246c3c9d4p-849, 0.0,
     0x1.a81e7afd34db5p-612, 0.0, 0x1.899d25a9bf0a3p-667, 0x1.85cf2acc0a189p-804,
     0x1.5ee57b987a6dep-367, 0x1.bcf1753e46629p-958, 0x1.5baeebac67083p-440, 0.0, 0.0,
     0.0, 0x1.e8b1928104552p-290, 0x1.97c986e762fb5p-195, 0x1.1de664ab29c2dp-880,
     0x1.2e8b7b9a18142p-808, 0.0, 0.0, 0.0, 0x1.935881a3b009ap-760, 0.0, 0.0, 0.0,
     0x1.039eaf6565677p-427, 0.0, 0.0, 0.0, 0x1.9a63c4d7afb5ap-884, 0.0, 0.0,
     0x1.1f6682ef10fadp-87, 0.0, 0x1.f0b3606fd33b7p-266, 0.0, 0x1.315bb01206d4p-82,
     0x1.99194e6925e86p-56, 0.0, 0x1.5c5f7fb2bc74ap-613, 0x1.62c5fe91810d2p-685, 0.0,
     0x1.87754b9ec8a7p-364, 0x1.d2f8bf7b8c61p-512, 0x1.3c6c7438ee4edp-568,
     0x1.e37295395986dp-6, 0.0, 0x1.96259ec09eecap-949, 0.0, 0.0, 0.0, 0.0,
     0x1.407e8fbe26362p-686, 0x1.dc116a32b53f5p-56, 0.0, 0x1.19c586bc2e6ap-459, 0.0,
     0.0, 0x1.fc6f8c4b8622dp-468, 0x1.a343c246fdc03p-993, 0x1.838e178b2b6e9p-639, 0.0,
     0x1.8657603e1b981p-909, 0.0, 0.0, 0.0, 0x1.5ff6f3da96628p-121, 0.0, 0.0, 0.0,
     0x1.4534954d32eb5p-791, 0.0, 0x1.caf596225796ap-105, 0.0, 0x1.68d05e95bfa25p-544,
     0x1.f64d16e432324p-258, 0x1.dc320dfc68042p-423, 0x1.bba8ec0754578p-991,
     0x1.b534d1f404ae8p-277, 0x1.903b2a3170dd2p-886, 0x1.2554ee9c9ae69p-128,
     0x1.7326601bd8eep-954, 0.0, 0x1.2065d88ce6812p-173, 0x1.b0426075e2402p-717, 0.0,
     0x1.361338c1d32ebp-984, 0x1.8efa7877f62dap-742, 0.0, 0x1.45e397759635ap-800,
     0x1.2b094e9801c3cp-596, 0.0, 0.0, 0.0, 0x1.489219ed3db15p-877,
     0x1.b3a44d8b80fb5p-673, 0x1.013d810b8cde4p-562, 0.0, 0.0, 0x1.287d07e1c0009p-224,
     0.0, 0.0, 0x1.9e9e3c05f2e2p-877, 0x1.c696f229fb349p-590, 0.0, 0.0,
     0x1.3649cc20edad9p-800, 0x1.078e632351e14p-418, 0x1.325c53cb7f95fp-284, 0.0, 0.0,
     0x1.fd3646dfb2fd7p-529, 0.0, 0.0, 0x1.7321da6c5bebbp-85, 0.0,
     0x1.0652afb66baeap-526, 0.0, 0.0, 0x1.81e16cdfa62e9p-383, 0x1.5972049209d65p-540,
     0.0, 0x1.dccae837e39f8p-732, 0x1.cf912441389b6p-452, 0.0, 0x1.3fca2d7db7cb1p-626,
     0x1.1c02a3402c257p-749, 0x1.5b7b769ab535dp-797, 0.0, 0.0, 0.0,
     0x1.583f83b9867a8p-877, 0x1.59275fef48d69p-769, 0x1.cda56c4bf0d59p-123, 0.0,
     0x1.4b9f96639ebfbp-617, 0x1.2229710807d14p-90, 0.0, 0.0, 0x1.da39cf5224797p-124,
     0x1.e319fc6cd79c3p-381, 0.0, 0.0, 0.0, 0x1.ecc15cbbfb7dep-468, 0.0, 0.0, 0.0,
     0x1.e4639101bc026p-571, 0x1.c3a7d869590a4p-614, 0x1.578cf523ec8dcp-552,
     0x1.cd96630dd7ccbp-747, 0x1.8ccffa4821b5ep-571, 0.0, 0.0, 0.0,
     0x1.97ce654a76d04p-661, 0x1.ecf2d0f93b565p-55, 0x1.8282a2279bf4bp-143,
     0x1.8faa9d1181d7bp-41, 0.0, 0x1.9f1d2dba121cdp-937, 0.0, 0.0, 0.0,
     0x1.231e10bea93b1p-5, 0x1.c79cd39962ac9p-243, 0x1.5528a46a4d037p-633,
     0x1.15a6b8356108ep-431, 0.0, 0x1.212e3e9b9ab38p-418, 0x1.231ee638eec8p-750, 0.0,
     0x1.5d66f82e74ba1p-632, 0.0, 0.0, 0x1.ad012aba7a02ep-666, 0.0, 0.0, 0.0,
     0x1.c71291d572132p-942, 0x1.92117802738bap-1009, 0.0, 0x1.b2f1bbc6b81d1p-598,
     0.0, 0.0, 0.0, 0x1.31daabb58c4c3p-240, 0.0, 0.0, 0.0, 0x1.6643fc1aced4p-763,
     0x1.02167d6824d2bp-297, 0.0, 0.0, 0x1.bbb4c63084dbbp-313, 0.0, 0x1p0, 0.0, 0.0,
     0x1.63dcb17845affp-475, 0x1.384b76b751bc9p-172, 0x1.c15d6e4f1e1edp-163,
     0x1.677aeada4a0a5p-814, 0.0, 0.0, 0.0, 0x1.58dae6e04234dp-269,
     0x1.3da8ff4e7a01p-1011, 0.0, 0.0, 0x1.10370e04ed0c3p-84, 0x1.b09dd9febb646p-159,
     0.0, 0x1.bc36ab29bbce3p-242, 0.0, 0.0, 0x1.bce843b01799dp-353, 0.0, 0.0, 0.0,
     0x1.8406022724df1p-974, 0x1.e564f78bceb15p-472, 0.0, 0x1.0b5f3db8e4538p-168,
     0x1.75fc4d765f625p-643, 0.0, 0x1.33a1a80297b63p-466, 0x1.cf141afae9547p-64,
     0x1.943afe1115e6ap-602, 0.0, 0.0, 0.0, 0x1.2812682f474d4p-652,
     0x1.a23bafe5b741ep-338, 0.0, 0.0, 0.0, 0x1.1ff375927e97fp-305,
     0x1.e9dce3a80c50cp-496, 0x1.154b52ae730e7p-474, 0.0, 0.0, 0x1.ab175225bc07bp-487,
     0x1.c82d6314add93p-735, 0x1.87da8d3ca0ddfp-541, 0x1.144be1b8bf7b5p-326, 0.0, 0.0,
     0.0, 0x1.5251fc37984ap-450, 0x1.7ded8140b152p-885, 0x1.d230571e93249p-510,
     0x1.0951e5701ec87p-570, 0.0, 0.0, 0.0, 0.0, 0x1.766a1418c504ep-103, 0.0,
     0x1.ed1a89fa2b166p-945, 0x1.22567a5bc9148p-7, 0.0, 0x1.7ec2ca933e88ap-773, 0.0,
     0.0, 0.0, 0.0, 0x1.5c9f3831df7dep-810, 0.0, 0.0, 0x1.6db93bf7e03a6p-760,
     0x1.add94d0e32e67p-569, 0.0, 0x1.7afa1f4cc4c3dp-674, 0.0, 0x1.37c0207149822p-385,
     0x1.dd28e486f8cdcp-400, 0.0, 0.0, 0x1.4869aaec886ep-335, 0.0, 0.0,
     0x1.6472d552a863ep-392, 0.0, 0x1.c19958f79cf7dp-995, 0.0, 0.0,
     0x1.9a6dc5d8eecfap-555, 0.0, 0x1.09aee35bd4e21p-967, 0.0, 0.0, 0.0,
     0x1.0efd58189a5bbp-993, 0.0, 0.0, 0.0, 0x1.9d82bf11c26bdp-436,
     0x1.ee8368c22c00fp-677, 0x1.7ad44ee48c54ap-743, 0x1.f8ccba1da2bc2p-771, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dec7c5a6a7d78p-449, 0.0, 0.0, 0.0,
     0x1.f6da3d03032a3p-529, 0.0, 0.0, 0.0, 0x1.70e46b3c05a93p-153,
     0x1.b224a6be90475p-808, 0.0, 0.0, 0x1.2a17ab5c44739p-386, 0x1.c7451fcc19f36p-831,
     0.0, 0.0, 0x1.8c63ab7022efep-700, 0.0, 0.0, 0x1.7763ec2abb584p-677,
     0x1.8e8b567b2427cp-80, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f26c728533814p-800,
     0x1.6e84f094db9b9p-540, 0.0, 0x1.76a04054ad016p-249, 0.0, 0.0,
     0x1.9d543d0b263dap-547, 0x1.0e497c1f0c2b5p-283, 0x1.1f84176bf9a07p-696,
     0x1.e60be6138ea94p-145, 0.0, 0.0, 0.0, 0x1.5f35f695e1e6bp-1022,
     0x1.b495fc63a1b6p-407, 0x1.02087834453bp-84, 0x1.4a25a0e4e994fp-464,
     0x1.29506a8d59f97p-987, 0.0, 0x1.9975ea78de23ap-132, 0.0, 0x1.8aa6214854743p-137,
     0x1.75223913f84dap-761, 0.0, 0x1.4f68b7b36404fp-750, 0.0, 0x1.dfea0e51f7788p-608,
     0.0, 0x1.e4f83d5ab6da7p-582, 0x1.33f37d17e795fp-935, 0.0, 0x1.a6ffe4d256141p-661,
     0x1.1343b7b535447p-442, 0.0, 0.0, 0x1.066724fcf5babp-923, 0.0, 0.0,
     0x1.98d8e265a2636p-39, 0.0, 0.0, 0x1.800330e0fb667p-26, 0x1.951e4bd933891p-542,
     0x1.a644fc3f9ebbdp-111, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9cecd9cd02ec6p-891,
     0x1.477ea1bfa1733p-218, 0x1.31f843f6d6714p-486, 0x1.83cc73d048ef1p-477, 0.0, 0.0,
     0x1.c7970febeff1bp-387, 0x1.6694c37c2d386p-38, 0.0, 0x1.999ad81eb93d6p-204, 0.0,
     0.0, 0x1.451c7ba893e7dp-340, 0x1.38a795aded985p-849, 0x1.40eee24e9f4a2p-719, 0.0,
     0x1.929ac1e9efa9ap-922, 0x1.11efc5466c09ep-975, 0.0, 0x1.995063d4650a6p-497,
     0x1.303baa65d02fdp-752, 0.0, 0.0, 0x1.f15f422d87891p-592, 0.0, 0.0,
     0x1.5540ccf58890ep-165, 0x1.dc418a74e073ap-15, 0x1.04270001e7b87p-918, 0.0, 0.0,
     0.0, 0x1.a42ca5fd883cfp-464, 0x1.2929080766d7fp-765, 0.0, 0x1.7f652e89e527p-813,
     0.0, 0.0, 0.0, 0.0, 0x1.cb7329e6aad3p-184, 0.0, 0x1.f15937130e02cp-230, 0.0, 0.0,
     0.0, 0.0, 0x1.9c6f2d32ef646p-309, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a77b1a694623dp-310, 0.0, 0.0, 0.0, 0.0, 0x1.b5f00650da644p-854, 0.0, 0.0,
     0.0, 0.0, 0x1.452ca9469a952p-579, 0x1.fac929e7fd75p-22, 0.0, 0.0,
     0x1.9dc280ab78738p-578, 0x1.a6ffa58eede98p-153, 0.0, 0.0, 0.0,
     0x1.f15ce7acd3b7bp-43, 0.0, 0.0, 0x1.1f6b090d43883p-817, 0.0,
     0x1.e0b6790a968edp-311, 0.0, 0.0, 0.0, 0.0, 0x1.47259400e43b4p-552, 0.0,
     0x1.cfc9ad25c59c3p-345, 0x1.ce3556afb7f55p-765, 0.0, 0.0, 0x1.cceaa884c1249p-181,
     0.0, 0.0, 0.0, 0.0, 0x1.c8e06a3797f01p-940, 0x1.dfd8a04310b44p-958, 0.0, 0.0,
     0x1.8ffc70caff856p-511, 0x1.f3db8810e64f1p-939, 0x1.8be1a59e32dabp-299, 0.0, 0.0,
     0.0, 0x1.805ac42d4e46ap-777, 0.0, 0x1.55ca2acb5a0f2p-869, 0.0,
     0x1.ec86362f359f3p-569, 0x1.7d8073827e78bp-939, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dbe48b34cbb77p-967, 0x1.26cc719c4f19fp-14, 0.0, 0x1.752146ac080eep-32,
     0x1.d9cbfbfaff8cp-1, 0x1.f2bbb3095fc9ap-965, 0x1.966989c259dd3p-684, 0.0,
     0x1.56a9bb39a44a8p-688, 0.0, 0.0, 0x1.41235a070677cp-551, 0.0,
     0x1.7f04de4d91924p-665, 0.0, 0x1.37f714fec1fddp-889, 0x1.b7f7a05c2d238p-932,
     0x1.2db4b5e2bd655p-741, 0.0, 0.0, 0.0, 0x1.65bb43b7e1269p-800,
     0x1.12060dff608ebp-921, 0x1.bec68f395882p-91, 0.0, 0.0, 0.0,
     0x1.83ce612720796p-59, 0.0, 0x1.f8adfcddfced5p-628, 0x1.e66ba2ad5340ep-117, 0.0,
     0x1.c1f6ccbd8b782p-819, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.646951322d0d1p-700, 0.0,
     0.0, 0x1.22abc1541a62p-92, 0x1.025dd1765ad28p-874, 0.0, 0.0,
     0x1.49f74b51f564bp-616, 0.0, 0x1.e2653c6a35334p-246, 0x1.ef7ea6cc25ebap-730,
     0x1.ad4a00b9eb45ep-245, 0x1.c58662d078ad6p-26, 0x1.01d576efc62a9p-617, 0.0,
     0x1.3acca431a565dp-420, 0x1.db1dec5ae055ep-145, 0.0, 0.0, 0.0,
     0x1.96ed09acb6f0fp-681, 0.0, 0.0, 0x1.d7b11598547fdp-960, 0x1.962fa1d1ae79dp-453,
     0x1.6b224c3f4bbf7p-581, 0x1.1df4fa2a5ad36p-786, 0.0, 0.0, 0x1.f2765c31ce441p-816,
     0.0, 0x1.6d04071c4f181p-586, 0x1.5a13dba9f1554p-577, 0x1.b4a30fac2badcp-787,
     0x1.41980eefd3646p-26, 0.0, 0x1.dadac462b8deap-393, 0x1.ddf076b2f7f21p-519, 0.0,
     0x1.de741ae1af14bp-97, 0x1.a3aca5641bd8cp-598, 0x1.7c73b4cf1acafp-893,
     0x1.24966dbea9384p-7, 0x1.57afaf3b6cd95p-544, 0.0, 0x1.8adc013472851p-452, 0.0,
     0.0, 0.0, 0.0, 0x1.bcfe181405215p-676, 0.0, 0.0, 0x1.b87214357aa74p-207,
     0x1.cdee5d9eeb3fdp-990, 0x1.4eff688ac6ba7p-867, 0.0, 0.0, 0x1.e571a023af0cap-512,
     0.0, 0x1.dae1ffcdffa56p-588, 0x1.8ff66b74acedcp-308, 0x1.533d09cb3e6f9p-266,
     0x1.4cdf9b5c2913ap-426, 0x1.74a313761b5d4p-110, 0.0, 0x1.5613a488429d9p-516,
     0x1.41e46956b33a2p-531, 0x1.b83d7b0e7ce1fp-18, 0x1.93f844d7fdbe8p-977, 0.0, 0.0,
     0x1.4b44b50deea99p-484, 0.0, 0.0, 0x1.d719f46edc606p-163, 0x1.a1268d2c4a8fep-748,
     0.0, 0.0, 0x1.a4488e6feff17p-256, 0x1.196eedbe78744p-94, 0x1.a2e803549797ep-45,
     0x1.ef723a931a86p-957, 0x1.b787562e8d3f7p-577, 0x1.4f7336cfb84e6p-169,
     0x1.b8f5303967c4ap-844, 0x1.df76daa776dffp-674, 0.0, 0.0, 0.0,
     0x1.7c43d3406fb7ap-436, 0.0, 0x1.6a79f1e160199p-807, 0.0, 0x1.184ea0f11bdeap-870,
     0.0, 0.0, 0.0, 0x1.8f829e9daa187p-627, 0x1.62441ca4e4b04p-303,
     0x1.9f4cd00280c1fp-918, 0.0, 0.0, 0.0, 0x1.40e7294f0b8aap-680,
     0x1.0d099d278b6b6p-683, 0x1.2f47f372548acp-198, 0.0, 0x1.eaf5404db3bd8p-341, 0.0,
     0.0, 0.0, 0x1.45ca26d26726cp-122, 0.0, 0.0, 0x1.0e1e17b03deacp-663,
     0x1.fa1634b524332p-402, 0.0, 0.0, 0.0, 0x1.7664097640862p-699, 0.0,
     0x1.f31495c03c6cdp-661, 0x1.ca760831c1bdep-533, 0x1.1376f84dfcdc8p-561,
     0x1.883d67298c269p-864, 0.0, 0.0, 0x1.263c553dbebcdp-58, 0x1.d9b09a76269dfp-844,
     0.0, 0.0, 0x1.d41036c70e16ap-707, 0x1.fcda25ea9032ap-728, 0x1.744c2e65d4afep-467,
     0x1.c00bead310ab7p-43, 0.0, 0.0, 0.0, 0x1.3d909319df2f3p-656, 0.0, 0.0,
     0x1.4e0c6d5868095p-500, 0.0, 0.0, 0x1.cbd3271707ccep-706, 0.0, 0.0,
     0x1.b149b85255912p-72, 0x1.97f7d8ceb3cd8p-1022, 0.0, 0x1.c6288065c1ef3p-458,
     0x1.fb6d2e01b6fb7p-508, 0x1.2e9e96fb043b8p-262, 0.0, 0x1.b011d8c73c96ep-558,
     0x1.9792cf9123562p-330, 0x1.31aa30ba045e8p-689, 0x1.e85c0e4333169p-168, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.48d58fdd90307p-669, 0x1.2d3048d7bfb7fp-892, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fb1d0b830d099p-566, 0.0, 0.0, 0x1.b708dab87e1a3p-109,
     0x1.d55f8680b4eeap-530, 0x1.97338fdcdba56p-870, 0x1.c210811536c57p-623,
     0x1.92336fcf790ddp-731, 0.0, 0.0, 0x1.6d0d1f1b99968p-765, 0x1.11cf3a346f6f3p-278,
     0x1.5721d61a41b79p-877, 0.0, 0x1.44e9535e6f9e3p-524, 0x1.7d96b9930442p-816,
     0x1.4f8cc6cd464f3p-97, 0.0, 0.0, 0x1.27176df2bca8bp-814, 0x1.cdd0a622b9dfbp-364,
     0x1.642ba51792e02p-646, 0.0, 0x1.15339bd798484p-263, 0.0, 0x1.89967b4d790ccp-632,
     0x1.22b0eb6abe563p-58, 0.0, 0.0, 0.0, 0x1.6ee952403cbefp-827, 0.0,
     0x1.b84a65175bedbp-97, 0x1.3a99835add92cp-406, 0x1.308262f762fc4p-477,
     0x1.9ea4d44769005p-506, 0.0, 0.0, 0x1.07320eb0df2ecp-446, 0.0, 0.0,
     0x1.51646bbaf0fb5p-764, 0x1.564ad70562384p-546, 0.0, 0.0, 0.0,
     0x1.6e75e4d7287e8p-511, 0x1.889289ce26de4p-642, 0x1.4e41db9c43941p-158, 0.0, 0.0,
     0.0, 0.0, 0x1.026e018cd0c8ap-542, 0x1.44dd892370799p-22, 0.0,
     0x1.96db0a7c0cbb4p-423, 0x1.de8f13032f6f6p-910, 0.0, 0.0, 0x1.f9f52b5072ceep-283,
     0x1.480ee2ba653dep-1022, 0.0, 0.0, 0x1.27ab383d382f5p-842,
     0x1.04cf635cf789cp-163, 0.0, 0.0, 0x1.b56263a0a0e74p-767, 0x1.431416d7e93aep-209,
     0.0, 0x1.97a01b214012dp-874, 0.0, 0x1.3d36959d835e3p-885, 0.0,
     0x1.e11f52cd2938ap-202, 0x1.1a6a0ce01ee8bp-158, 0.0, 0x1.f75c0d26ab9fep-320, 0.0,
     0.0, 0x1.70a0052790327p-392, 0.0, 0x1.a0f688fa155f4p-516, 0.0,
     0x1.59b79fc7d0368p-656, 0x1.7e12ff8a71c06p-152, 0x1.4a71faa94b9dap-895, 0.0, 0.0,
     0x1.f6e2a98e60ebcp-200, 0x1.de24cbcf253ffp-224, 0x1.2ebdb4cc30f8fp-338,
     0x1.49b985a7bb229p-282, 0x1.f0a5ebb2e9667p-717, 0.0, 0x1.331f682df2345p-276,
     0x1.3b24267557f3dp-884, 0.0, 0x1.1cea4aceef6d2p-756, 0x1.1bec23c55f8acp-396, 0.0,
     0.0, 0.0, 0.0, 0x1.e0c3763d80b5dp-585, 0.0, 0.0, 0.0, 0x1.e8f51daba3984p-542,
     0.0, 0x1.6a5110d427e5fp-902, 0.0, 0x1.43b2dc50114b4p-761,
     0x1.a14649822121ep-1010, 0.0, 0.0, 0.0, 0x1.2551b26ba6c21p-667,
     0x1.c304c8472753ep-456, 0x1.0c21e18284d14p-933, 0x1.ec38712bbc4acp-761,
     0x1.a6a9d05cc77e7p-1, 0.0, 0.0, 0x1.0668d9b941631p-877, 0x1.7164dc7424eb8p-946,
     0.0, 0x1.11762af64228ap-754, 0.0, 0.0, 0x1.a8f74d1e0e888p-553, 0.0,
     0x1.77f2a88ac1b9p-675, 0.0, 0.0, 0.0, 0.0, 0x1.5137d37e0fba7p-534,
     0x1.014334ddf9c0ep-1001, 0.0, 0x1.cb7470c7d8d2dp-542, 0.0,
     0x1.a76702a5a8d59p-279, 0x1.c1b03a93d3cf8p-4, 0.0, 0x1.e91cbf09a0634p-181,
     0x1.a81c7d0d17281p-707, 0.0, 0x1.31adfa9c92eccp-452, 0.0, 0.0,
     0x1.20bd88027f4b6p-252, 0.0, 0x1.b6ea0e1860e1dp-408, 0.0, 0.0, 0.0, 0.0,
     0x1.6ef593313ca5ap-465, 0x1.2c49aa68ce2ffp-439, 0x1.d012e08378759p-275,
     0x1.4d2e1e47bbd95p-634, 0.0, 0.0, 0.0, 0x1.09d29187fe416p-715,
     0x1.0db23096f7b0cp-387, 0x1.0553a8c31c1ffp-393, 0x1.d8a6d7bcd93e3p-896, 0.0, 0.0,
     0x1.a3ecf57f6bab7p-39, 0x1.2f196f1c68f5cp-242, 0.0, 0.0, 0x1.67a9dcea84023p-955,
     0x1.a270bb75c84c4p-293, 0x1.0ef092d9be34bp-998, 0x1.6ef15ba69eba7p-890,
     0x1.87a19251d2788p-561, 0.0, 0.0, 0.0, 0x1.c87b769b42d37p-837,
     0x1.801c3dbb1252p-128, 0x1.34efd2331e86cp-678, 0.0, 0.0, 0x1.95c645afe02dep-798,
     0.0, 0x1.9139039d0bbdbp-750, 0x1.44cbd680cac01p-651, 0x1.cb05c8c194fd2p-680, 0.0,
     0x1.3907c9bfbd7c9p-266, 0.0, 0x1.104de9166354bp-668, 0x1.9be821865874p-290, 0.0,
     0x1.aa4eb01be45dcp-674, 0x1.14fb4b77e9b4bp-113, 0x1.e1d6548b90242p-903,
     0x1.a5e5891fb61d6p-485, 0x1.b1a4bf00b72cbp-242, 0.0, 0.0, 0.0,
     0x1.55b693076ce1ep-793, 0x1.195ee74b848f7p-233, 0.0, 0x1.ab9e447a8744bp-425,
     0x1.62185c991244ep-343, 0x1.69d373b7538c7p-456, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5cb505390759cp-813, 0.0, 0x1.bc549b05a2c37p-490, 0x1.f8609ffd4db2ep-669, 0.0,
     0.0, 0x1.79c3c1a00a953p-45, 0x1.560a67d9294b5p-216, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.68daecaef3419p-203, 0.0, 0.0, 0x1.9e0c58c6ac292p-15, 0.0, 0.0,
     0x1.c3eeda5ef47edp-774, 0.0, 0x1.8e0772a724ebcp-432, 0x1.0f938f29f28d7p-1001,
     0.0, 0.0, 0x1.2287549ee3ad5p-64, 0.0, 0.0, 0x1.60b1900d82336p-160,
     0x1.82028060104dp-970, 0x1.1803213610294p-908, 0.0, 0x1.78bea4c36a135p-895, 0.0,
     0x1.0f8fcb46df9d4p-803, 0.0, 0.0, 0.0, 0x1.b72a732e525a3p-594,
     0x1.d22c9b3a7e01ap-220, 0.0, 0.0
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
            tmp1 = Sleef_asinhd2_u10avx2128(tmp0);
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
    printf("Sleef_asinhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_asinhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
