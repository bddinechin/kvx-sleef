/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd2_u10avx2128.c --function \
 *     Sleef_finz_sincosd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.0669d7b1eea45p-924, 0x1.ff2d75f814d95p-675, 0x1.eb94100f79986p-578,
     0x1.c61e19eba2eb2p-638, 0.0, 0.0, 0x1.85fa3c2d62a4p-651, 0x1.6128d5dd22073p-467,
     0.0, 0.0, 0.0, 0.0, 0x1.5f9f69c5bfccdp-629, 0.0, 0x1.9e1e0852177a4p-626, 0.0,
     0.0, 0.0, 0.0, 0x1.54c71756f951cp-357, 0.0, 0x1.dc9a0fde90574p-165, 0.0, 0.0,
     0x1.c56d9d007a7f6p-777, 0x1.b6bc4f52fc6aap-18, 0x1.9223abe342acdp-396,
     0x1.fad996382b4c1p-171, 0x1.720e3736c8374p-711, 0.0, 0.0, 0x1.925bb6f4499fep-922,
     0.0, 0x1.61d63a93365c6p-146, 0.0, 0x1.1a2cd20a674b2p-618, 0x1.1cf637bdc2821p-765,
     0x1.10835c71fd057p-480, 0x1.65f92736d4ec7p-645, 0.0, 0x1.dbb48d1af4e76p-818,
     0x1.866ae7104dbep-308, 0.0, 0x1.9597dbdf31323p-503, 0.0, 0.0,
     0x1.5e7cef2a9c1ep-650, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c19ebb928b1bp-88,
     0x1.08fd6655e6ebfp-782, 0.0, 0x1.e28011f973c8bp-417, 0.0, 0x1.eebec3b8a2a98p-216,
     0x1.cd7d13d0b1744p-799, 0.0, 0.0, 0.0, 0.0, 0x1.b55e4e74adf5fp-865,
     0x1.a1bfcf15b607p-579, 0.0, 0x1.5692cfc03b1abp-405, 0x1.d8edf04c8be9cp-861,
     0x1.7285c32d149a7p-643, 0.0, 0x1.02972418d3be7p-500, 0.0, 0.0,
     0x1.622bdf3a1fdb6p-441, 0.0, 0.0, 0x1.8369d185cb1e3p-720, 0.0,
     0x1.a0c05df7d7061p-324, 0.0, 0.0, 0x1.c2c52445bf0fcp-658, 0.0, 0.0,
     0x1.3514744a11991p-595, 0x1.68ab8a8d348d3p-152, 0.0, 0.0, 0.0, 0.0,
     0x1.f0daf19981c62p-211, 0x1.1bae30ae4aa21p-78, 0x1.e27b2ae298e5ap-622, 0.0,
     0x1.96ea228f8bb89p-828, 0.0, 0.0, 0x1.68c02d7fb29b7p-99, 0x1.47e41adbe13c8p-591,
     0x1.5d318ee476af3p-694, 0x1.e094e148b3db3p-164, 0x1.6337459760508p-650,
     0x1.15c8b36f89b6bp-487, 0.0, 0.0, 0x1.24db5993690d4p-146, 0.0,
     0x1.938173b1bc148p-630, 0.0, 0x1.e50426e80402fp-980, 0.0, 0x1.007aba2da5a81p-732,
     0x1.2e374fab495a1p-108, 0x1.a4e7eedf7b0aap-1013, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c3e5691d50112p-260, 0x1.60c3128bd3034p-1007, 0x1.5be36f7cc70d6p-882,
     0x1.b1b5b8a042d31p-219, 0x1.cadeadf657a21p-909, 0.0, 0x1.49a671ac0dad5p-982, 0.0,
     0x1.8038705068afep-605, 0x1.0f98d2cb7cdbcp-114, 0x1.a20b3ead20cabp-301,
     0x1.829561e98eb12p-826, 0x1.101a0ca65b3ccp-1000, 0x1.c877d27844c6bp-626,
     0x1.c18003ccbaea1p-693, 0.0, 0.0, 0.0, 0.0, 0x1.e0e510bc7077cp-562,
     0x1.e073f7f6da21dp-792, 0.0, 0.0, 0.0, 0x1.f901485d06a09p-276, 0.0,
     0x1.f74120f8e3dc3p-403, 0.0, 0.0, 0x1.8c85ac3e53f4bp-361, 0.0,
     0x1.30bf8241f177fp-7, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a963b6fd6dadp-734,
     0.0, 0x1.3704bac6a5df6p-363, 0x1.2073633048aa3p-589, 0x1.df1a3f82bfa34p-939,
     0x1.6d276608f3697p-610, 0x1.a97c4bc259911p-718, 0x1.8f098bced6b33p-6,
     0x1.478290ca46dfep-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77ee25492e7bcp-325,
     0x1.8ab593c8d8daep-50, 0.0, 0x1.cfb8acc505c88p-256, 0x1.303a20b20e7d6p-510, 0.0,
     0x1.8d6ea72d207fep-427, 0x1.986ba22fbd4ffp-942, 0.0, 0.0, 0.0,
     0x1.76b571f53ebc9p-507, 0x1.8dd5ba729f397p-69, 0x1.0484bcc23bbc9p-942,
     0x1.e86d925983deap-129, 0x1.0c72774daa00fp-518, 0.0, 0.0, 0.0,
     0x1.5643776e25147p-254, 0x1.0d2d5828a309dp-388, 0x1.9e6db7ecea251p-72,
     0x1.ea87f5104e169p-292, 0.0, 0.0, 0.0, 0.0, 0x1.47b1481cba09p-795, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b15960f12f1cp-750, 0x1.21896834c256dp-27,
     0.0, 0x1.c3a0584b12602p-719, 0.0, 0x1.a4224e6c99f53p-129, 0x1.f5ae6b09d40cap-628,
     0x1.ba1b3c6a9afe2p-549, 0.0, 0x1.746243cf947e9p-370, 0x1.a8d9416fa37ep-80,
     0x1.a0b3e36d13b14p-700, 0.0, 0.0, 0x1.13858e6601ef6p-246, 0x1.f1d4026dc65cep-639,
     0.0, 0x1.a4b0669ea90cbp-806, 0.0, 0.0, 0x1.bdffdf0356c4ap-588,
     0x1.7044048a6c464p-402, 0x1.c848c7285dfc5p-716, 0.0, 0x1.7cbb38c5434c1p-1018,
     0x1.8048fafc5a74bp-80, 0.0, 0x1.00e4412efe7d9p-974, 0.0, 0x1.ef38f784b4772p-620,
     0x1.bc6c02b1d92a2p-496, 0.0, 0.0, 0x1.3e9dcaf03ee71p-251, 0x1.595023b1ffd4cp-134,
     0x1.9f7c01cbe586fp-642, 0x1.ab11e88d46707p-958, 0x1.ec4047af332a5p-769, 0.0,
     0x1.1fe52d9bc8419p-127, 0x1.ec0d0eb77daf1p-894, 0x1.528053d6e7bf1p-957,
     0x1.4256a5016e22fp-546, 0.0, 0x1.a4e77894418d3p-109, 0x1.4a2af17df4baap-366, 0.0,
     0x1.e64697bc21a09p-977, 0.0, 0.0, 0.0, 0x1.05017d4c82678p-523,
     0x1.d4ba2edf80196p-903, 0.0, 0.0, 0x1.17c13303a0b14p-550, 0x1.3ca6e0a87a8c3p-652,
     0.0, 0.0, 0x1.6814ecaf7704bp-395, 0x1.b96a9d59999ecp-764, 0x1.dc409f439642p-49,
     0x1.d6d91e2bed706p-858, 0.0, 0x1.25c72688976f7p-338, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.cddec61fb519bp-801, 0x1.d0390bd3f996fp-934,
     0x1.e7d1ef9ced693p-1020, 0.0, 0x1.3d155a2c6546ep-575, 0.0, 0.0,
     0x1.8b67017389c21p-777, 0x1.2ce4f22b5b2d7p-269, 0x1.6cc3630ec185p-196, 0.0,
     0x1.506f87e4564e1p-386, 0.0, 0.0, 0x1.e1c6508d6264dp-214, 0.0, 0.0, 0.0,
     0x1.f226b23fdbf2dp-519, 0x1.975caa6cafa88p-253, 0.0, 0.0, 0x1.3ae35b2365d1cp-988,
     0.0, 0x1.256431894fc9p-343, 0.0, 0.0, 0x1.25d5e9902b487p-599,
     0x1.8d1fbd475cf1ep-110, 0x1.dc73a9eb721c9p-259, 0.0, 0x1.41eb037fd6251p-193,
     0x1.86767aabce6acp-157, 0.0, 0.0, 0x1.d58f8cfc001d3p-186, 0.0,
     0x1.0ebf4e62cb9ep-556, 0x1.43819877c08cfp-38, 0x1.22ddfb91cb377p-654,
     0x1.57a055350e35ap-625, 0.0, 0x1.343dbb125f4bep-249, 0x1.730841b5bfb56p-551, 0.0,
     0.0, 0x1.5746b85534fcp-757, 0.0, 0x1.f3c6b60927f8bp-357, 0x1.8bfdf3d58b1ecp-906,
     0.0, 0x1.99d0168e87d3bp-229, 0.0, 0.0, 0.0, 0x1.76797c7752899p-970,
     0x1.47a28fbf100bp-521, 0x1.5151ce5a5db13p-641, 0x1.36f1358804431p-317, 0.0,
     0x1.bf253db20c743p-759, 0.0, 0.0, 0x1.ded24b1de8128p-708, 0.0, 0.0, 0.0,
     0x1.6cdd039e46265p-859, 0.0, 0.0, 0.0, 0.0, 0x1.72365fd896499p-191,
     0x1.dff4444228e6ep-172, 0.0, 0x1.afddada3540b4p-470, 0x1.12bcade8719f8p-859,
     0x1.e45ecebaf206dp-680, 0x1.0f88aae1aa89ap-346, 0.0, 0x1.f1e4b0b756d77p-375, 0.0,
     0.0, 0.0, 0x1.64e33e360c903p-993, 0x1.5563267813b9cp-904, 0x1.3f35a362c8441p-947,
     0x1.e0b848fac8b8ap-120, 0x1.ee2829f771fd2p-172, 0.0, 0x1.625a271a6721fp-771, 0.0,
     0x1.e950c23bafed8p-582, 0x1.f353072efc6a9p-751, 0.0, 0x1.d31cb67e3b27dp-201, 0.0,
     0.0, 0x1.3f73663311a9dp-269, 0.0, 0x1.dd048512c92a5p-756, 0x1.d6d59413a678dp-157,
     0x1.3489ce1f45eb6p-56, 0.0, 0x1.505e62ce2c146p-174, 0.0, 0x1.a997fd79e0f3p-669,
     0.0, 0x1.f9f099e0305b4p-1017, 0x1.d6067a693a321p-18, 0.0, 0.0,
     0x1.1e88786aad1d6p-775, 0x1.ef4c8df3718a9p-328, 0x1.c9a2423bf8115p-691, 0.0,
     0x1.5a0167c18ae73p-559, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3119c4f3be92dp-894,
     0x1.6d4518eb5fecbp-283, 0.0, 0x1.157df1ebb7285p-934, 0.0, 0.0, 0.0,
     0x1.1d13dad07a83p-886, 0.0, 0x1.350a61872050ep-882, 0.0, 0.0,
     0x1.e70d8b71af30fp-279, 0x1.3ac2265127cefp-287, 0.0, 0x1.182b850675ac8p-553,
     0x1.d28cdfabb7d26p-406, 0.0, 0.0, 0.0, 0x1.25f74a6f167a8p-772,
     0x1.f7267cc5b0bdbp-305, 0x1.f0459eb836e34p-295, 0.0, 0x1.83fef0d792f17p-807,
     0x1.7bc440cfafa76p-37, 0.0, 0x1.3247ac2125fb5p-127, 0.0, 0x1.e7fd15e7fb712p-84,
     0x1.86461c3439d2ep-497, 0.0, 0x1.ac46ae2a46a6ep-650, 0.0, 0x1.2d1303ba6c232p-648,
     0.0, 0x1.a47c6fce0b04fp-202, 0.0, 0x1.de84fc349e82bp-928, 0.0,
     0x1.f2881c6f4f356p-379, 0.0, 0.0, 0x1.1b60d3e5a7519p-143, 0x1.a35b62c9f25b9p-61,
     0.0, 0x1.70a63cdcfc676p-579, 0x1.b07912fda3932p-895, 0x1.919bec274cadp-972, 0.0,
     0x1.a11b2ba0d2b4bp-932, 0x1.eb2b9bdd7d19p-853, 0.0, 0x1.749190fc1292dp-127,
     0x1.d5e0d93987a2fp-379, 0.0, 0.0, 0x1.79f33a46cd568p-50, 0.0,
     0x1.35474523f15fep-892, 0.0, 0.0, 0x1.ede48b9eb0d6ep-620, 0x1.827c5ab118993p-825,
     0.0, 0.0, 0x1.5663ddb2de166p-458, 0.0, 0x1.1c8041c8c5b67p-131, 0.0,
     0x1.93455f1512ec6p-450, 0.0, 0.0, 0.0, 0.0, 0x1.4c6a413a0dbfdp-588, 0.0,
     0x1.c026a47eef88ep-605, 0.0, 0x1.73b130bf5a9eep-431, 0.0, 0.0, 0.0, 0.0,
     0x1.8553e58688842p-905, 0x1.515cda70b9769p-176, 0.0, 0.0, 0x1.75cdc42e99891p-369,
     0.0, 0.0, 0x1.d22e1596289f7p-445, 0x1.2f015a7998dep-865, 0x1.078bf23e3fff5p-695,
     0x1.91ff8048c7a97p-412, 0.0, 0x1.00f56b0fa4405p-721, 0x1.f924e051a07e9p-726, 0.0,
     0x1.9f716a662093p-149, 0x1.207ec365f9164p-218, 0x1.12d94011d5cf6p-123,
     0x1.c2e063cf15c6fp-665, 0.0, 0.0, 0.0, 0.0, 0x1.efc717b463c96p-820,
     0x1.01678f371b56cp-399, 0.0, 0.0, 0.0, 0x1.29fa47e3e870ep-209,
     0x1.87413fc5025c1p-592, 0x1.fa15f7e09de3bp-480, 0x1.d78142f568e6bp-926, 0.0, 0.0,
     0x1.b6034f1bbaa4ep-720, 0.0, 0x1.3d545ebde0adep-80, 0x1.30f5b9e97c318p-467, 0.0,
     0.0, 0x1.535b43948b43fp-178, 0x1.f83d88e513243p-870, 0x1.0f2d25f29c418p-947, 0.0,
     0.0, 0.0, 0x1.aeefcfa800513p-319, 0.0, 0x1.444b8a626acfap-1004,
     0x1.bed3734ae0cc7p-560, 0.0, 0x1.36afd13817bc8p-264, 0x1.321912a620854p-1018,
     0x1.7e182a7f21b4ap-69, 0.0, 0x1.1e61a102c5afap-735, 0.0, 0x1.b7ab60802f199p-597,
     0.0, 0x1.8e71afc44a35bp-292, 0.0, 0x1.46bb18f8ba87fp-424, 0.0,
     0x1.66045b4b5ab78p-533, 0.0, 0.0, 0x1.6067f0fa3a7ep-56, 0.0,
     0x1.82c062ce3725p-270, 0x1.e989c3fd4d41ep-356, 0x1.025d256d3779fp-110, 0.0,
     0x1.d669c7952175p-87, 0x1.f4ccb6f927826p-264, 0x1.f97b534889ccdp-597, 0.0, 0.0,
     0x1.f5041702132eep-203, 0x1.62b786aa03d78p-516, 0.0, 0.0, 0x1.b3f0d18806696p-352,
     0x1.3e3ec37dde498p-400, 0x1.f22ce61a05ad1p-472, 0.0, 0x1.9fa78c6e6d8c6p-879, 0.0,
     0x1.8a4e5a263d712p-59, 0x1.706d8ae75f65cp-260, 0.0, 0x1.24e4b2d1b0e07p-887,
     0x1.ef1ee73bcbef9p-552, 0.0, 0x1.3e8774e256318p-993, 0.0, 0.0,
     0x1.e7e9d9cca0cbfp-774, 0.0, 0x1.2910923eec1e5p-411, 0x1.829784c74f9c6p-611,
     0x1.eda51f21ef047p-311, 0x1.8b017e37fe1e7p-479, 0x1.78d321830b82ep-381, 0.0,
     0x1.bf11b5645d255p-198, 0x1.f4394cb2ac3f4p-283, 0.0, 0.0, 0x1.27fd2b3ef53b2p-981,
     0.0, 0x1.7b2048a0a932p-683, 0.0, 0x1.86c8aeabaeadp-897, 0x1.c5ced08cbab3cp-92,
     0.0, 0x1.e0fc3be9cdda4p-355, 0.0, 0.0, 0.0, 0x1.a56b429ea440ap-1007,
     0x1.71abc07f142fcp-674, 0.0, 0x1.8d1a813e38dc6p-616, 0.0, 0.0, 0.0,
     0x1.3a0224fe40d34p-512, 0x1.3e1596c1f8e0fp-870, 0.0, 0.0, 0.0,
     0x1.1bb18c7af4cb5p-128, 0x1.1885144a61c1ap-970, 0.0, 0.0, 0x1.192190ca73453p-407,
     0x1.974ea042ddb84p-8, 0x1.933f639fafa6bp-907, 0.0, 0x1.e59e69c9a3c7ap-770,
     0x1.ee54f5174cb0dp-465, 0x1.7a7a11a24f856p-516, 0.0, 0.0, 0x1.4451c14da2097p-220,
     0.0, 0.0, 0.0, 0x1.a6db872987c15p-976, 0.0, 0.0, 0.0, 0x1.35b1127423e0bp-827,
     0.0, 0x1.691a77a96d532p-48, 0x1.dc580b28d191p-115, 0x1.4dbeb92963e6fp-655,
     0x1.9bfe6f51dbdd3p-712, 0x1.cdec4b3c16e2bp-9, 0x1.d248df0a7b67bp-366,
     0x1.0978ecb499c5ep-932, 0.0, 0.0, 0x1.802633ffa83e3p-778, 0.0,
     0x1.fa49d9f8ee8cbp-329, 0.0, 0.0, 0x1.058da26ef8c15p-956, 0.0,
     0x1.d08d032e954efp-943, 0.0, 0.0, 0x1.c46a486b8aac2p-29, 0x1.fbb6dd5c4ae7bp-812,
     0x1.60d11695cb2b9p-879, 0x1.faeeb29b00b45p-870, 0x1.4287b87098c4ep-392, 0.0, 0.0,
     0x1.86c3fa9d4b8c1p-784, 0x1.c06aa15a6fc77p-409, 0x1.ebe7f5f5ae8cfp-192,
     0x1.99dbbc0e76fbep-580, 0x1.148ca07936825p-533, 0x1.c52e4020b5684p-839,
     0x1.4c5a25b3158a2p-269, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31a5f449bfa2dp-955,
     0x1.51ffbade37ee4p-447, 0x1.f7bff55da62d3p-423, 0.0, 0.0, 0x1.3960e8dd22dp-342,
     0.0, 0.0, 0.0, 0.0, 0x1.fe97e48a934b5p-931, 0.0, 0x1.59ec19ceb16b9p-440,
     0x1.3f8077419f81p-476, 0.0, 0x1.3a7ccdb949f2cp-673, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fdaf84f84a534p-947, 0x1.fbf44b7f75055p-136, 0x1.42c8af88d54abp-722, 0.0,
     0x1.11fc1c73e683cp-67, 0.0, 0x1.7bfe7163d1c99p-940, 0.0, 0x1.cabaae3a20bb4p-886,
     0.0, 0x1.3c5570c2f001ap-801, 0x1.cb875b62f1f8dp-640, 0x1.8b91b8e7e5b51p-930,
     0x1.0fccea0f99875p-484, 0.0, 0x1.7aaa81ebc2d57p-491, 0.0, 0x1.e365c4871e5b2p-57,
     0.0, 0x1.dbe46432a33d9p-116, 0.0, 0x1.a690e5255ee85p-810, 0.0,
     0x1.f863e5f4f7949p-523, 0.0, 0.0, 0.0, 0x1.6915aa02fb504p-603,
     0x1.379b17bbf9929p-849, 0x1.70932274f1aadp-663, 0.0, 0.0, 0x1.20cc71ba5d5d4p-124,
     0.0, 0x1.ade9b2517e7fp-252, 0.0, 0.0, 0x1.7faa08d19b0e5p-190, 0.0, 0.0,
     0x1.4d1372705bd03p-61, 0.0, 0x1.e6f9d576c2fcfp-796, 0x1.603ba8919115fp-904,
     0x1.9bc02152a86ddp-761, 0x1.1713e0abeb3a8p-135, 0.0, 0.0, 0x1.e9bdc29a649eap-161,
     0x1.e66f666a10568p-853, 0x1.dbd1bee8c8b11p-552, 0x1.9099d4fd6e8f8p-45, 0.0,
     0x1.c5d4e28f9cce5p-419, 0x1.5db6def3c24dp-931, 0x1.98945e45025e3p-1006,
     0x1.99f3561284bf9p-659, 0.0, 0.0, 0.0, 0.0, 0x1.0f5dedcc6743p-780, 0.0, 0.0,
     0x1.2121ff4fb5d13p-110, 0x1.258590155eedfp-81, 0.0, 0.0, 0x1.7296e403ff2d5p-326,
     0.0, 0.0, 0.0, 0x1.31a48a22692dbp-127, 0x1.c885a12561ebp-593,
     0x1.5ba7af90232f5p-566, 0x1.318385f2dbc5ep-870, 0.0, 0x1.655784d798e5dp-828, 0.0,
     0.0, 0.0, 0x1.52746ad8acc0ep-484, 0x1.7fbe8d3e7cdebp-613, 0x1.ab37fcadc6847p-297,
     0.0, 0x1.2708afeab4956p-589, 0.0, 0.0, 0x1.32c375a2fc3ecp-761,
     0x1.30a8e8c4a2d1dp-414, 0x1.21f8017ba6ea4p-411, 0x1.087d00e77643ep-757,
     0x1.a99081e236f96p-27, 0.0, 0x1.705d76fe83be4p-193, 0.0, 0x1.a02ae50517f13p-1005,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af4b40aafb1c1p-456, 0x1.bb54eaf6b27c9p-730,
     0.0, 0x1.dbc68e6d8e342p-169, 0x1.0837aac46cc23p-352, 0.0, 0x1.a210ac4f9ed6fp-280,
     0x1.146d305775804p-900, 0.0, 0.0, 0x1.538d7a3716cf2p-163, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb9a44e92f624p-444, 0.0, 0.0, 0.0,
     0x1.2ff71bf86622dp-423, 0x1.c6443a9c1b632p-555, 0x1.6ae157a5bbb75p-519, 0.0,
     0x1.c41fa19856ce1p-144, 0.0, 0x1.2fe90df4aaf4ap-684, 0.0, 0.0, 0.0,
     0x1.fc76d2a3a7a26p-254, 0x1.10c4b8ea7ab84p-766, 0.0, 0.0, 0x1.122de318086e2p-598,
     0x1.2c4869cab463cp-751, 0x1.247c41bccb3a5p-241, 0.0, 0.0, 0.0,
     0x1.0d23c8798a315p-757, 0.0, 0x1.06ca6268de932p-813, 0.0, 0.0, 0.0,
     0x1.8b2a784b2135dp-45, 0x1.cbbd4a0f50569p-716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bdb172fc74f0ap-35, 0.0, 0x1.5eae483c2e8dap-168, 0x1.6aa12f8b2909ap-33,
     0x1.87cece29a587fp-595, 0.0, 0x1.7142f5d2152e8p-839, 0.0, 0x1.5a136dd1a05aap-590,
     0.0, 0x1.a3b5c676cb868p-490, 0x1.a85f97d01105fp-865, 0x1.0efe4e69911adp-296,
     0x1.56326d3b6de18p-4, 0.0, 0x1.690ead2e212cfp-737, 0x1.15381aad6c0e5p-161,
     0x1.600270e241c42p-779, 0x1.12ce452e97cdap-574, 0x1.04cf28060bd7dp-271,
     0x1.62ed4f62283bap-983, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58373d83d80b7p-482,
     0x1.8cf8ceb271abfp-89, 0x1.f60bb38d26d9ep-539, 0.0, 0.0, 0x1.adf06011b4497p-17,
     0x1.951556e384b09p-452, 0x1.60bc82fdb0614p-763, 0.0, 0.0, 0x1.51b29cf7a063ap-418,
     0x1.27aa2b9e61de9p-966, 0x1.3fec2a854b724p-305, 0.0, 0.0, 0x1.bb39b277a12cfp-308,
     0.0, 0.0, 0x1.70ddf40493f77p-975, 0x1.8ffcf6bc136dcp-774, 0.0, 0.0, 0.0,
     0x1.a4f7da541612ap-1014, 0.0, 0x1.5c8daedd7adbdp-219, 0x1.94c8a12ec04a1p-761,
     0x1.1e1d4df320fcap-252, 0.0, 0.0, 0x1.fcc4b2534eacap-765, 0x1.72df1d68b15fdp-726,
     0x1.2b13f1d6df7ebp-39, 0x1.519d23f959fa2p-368, 0x1.9584e77185bc3p-518, 0.0, 0.0,
     0.0, 0x1.d5b8b6ab5b1bp-802, 0.0, 0x1.4f34d35cc0dfcp-92, 0.0,
     0x1.caacbfb0d1635p-383, 0x1.b3a898846edp-308, 0x1.bf78f7285d527p-506, 0.0, 0.0,
     0.0, 0x1.a7f15bad0d154p-732, 0x1.e333c38ef16b3p-315, 0x1.ed8e4a88bef24p-165, 0.0,
     0x1.cd6d62462ecfdp-252, 0.0, 0.0, 0.0, 0x1.1eccf19465b63p-886, 0.0,
     0x1.c090c35d28365p-697, 0x1.3437d46b3e36ap-320, 0.0, 0.0, 0.0, 0.0,
     0x1.7310f142fca44p-630, 0x1.9632be3b599fcp-41, 0.0, 0.0, 0.0,
     0x1.f0a29b9a335dep-217, 0.0, 0.0, 0x1.48df6ae68af7p-606, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06a65f46103b2p-443, 0x1.84f6f3dad4801p-1001, 0.0, 0x1.92c32a70abdaep-774,
     0.0, 0.0, 0.0, 0.0, 0x1.89301e2906ee3p-231, 0.0, 0x1.6af4f8f16985ap-594,
     0x1.e54a11e1f7904p-575, 0.0, 0.0, 0.0, 0x1.eee2673416e45p-381,
     0x1.feeb485af720bp-261, 0x1.ef1d0548a1e7cp-1015, 0x1.39a99fb32cc22p-335,
     0x1.fe44e60467e55p-164, 0.0, 0x1.eb4635beaf009p-801, 0.0, 0x1.f16126e2c7cd6p-316,
     0.0, 0x1.a100b7096ae5ep-852, 0x1.63bfab1fbd7c9p-808, 0.0, 0x1.d4a654f14275ap-900,
     0.0, 0x1.dc5db3b372f8ap-727, 0.0, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
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
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincosd2_u10avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
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
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincosd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincosd2_u10avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
