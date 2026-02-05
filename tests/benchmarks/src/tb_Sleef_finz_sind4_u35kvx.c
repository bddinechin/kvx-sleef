/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind4_u35kvx.c --function Sleef_finz_sind4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.12292dbc59543p-685, 0x1.8f23d14fc3c41p-488, 0x1.a23488812eb49p-206,
     0x1.d1ca5d4e15b01p-20, 0.0, 0.0, 0x1.e3bc7574413f5p-60, 0.0, 0.0, 0.0,
     0x1.3b707b5782e7ep-448, 0.0, 0x1.c8f0f58dfd35ep-1021, 0x1.c60814b352b73p-883,
     0x1.2614629771876p-460, 0x1.e3fbc6e9190c2p-651, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.103f156b6ae6ap-947, 0x1.df999d9a93946p-521, 0.0,
     0x1.03e76adafae04p-263, 0x1.de352fca82bdcp-280, 0x1.cbb10f5b6cc8p-735, 0.0, 0.0,
     0.0, 0.0, 0x1.39e94104c7612p-188, 0.0, 0.0, 0x1.e044b3722436ep-412,
     0x1.a3ced41770b3fp-892, 0x1.5f4d82a46d9e8p-812, 0x1.024d084650dcep-488, 0.0, 0.0,
     0.0, 0.0, 0x1.4ee02dc17a358p-1022, 0x1.35090aa0679c8p-823, 0.0,
     0x1.6dd70f34eaa05p-150, 0x1.863ea70019a22p-680, 0.0, 0x1.45a572de7cd2bp-451, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08d1dc860539ep-333, 0x1.97b7896a8044ap-980, 0.0,
     0x1.5526b74a75babp-400, 0.0, 0x1.b04c2bb59b1eap-612, 0x1.3c30ae95fad7p-497,
     0x1.d0f0529c76624p-820, 0x1.e12a18c8f4937p-11, 0.0, 0.0, 0.0,
     0x1.50b82fa6cbe86p-202, 0.0, 0x1.c2ef11c49e04fp-926, 0.0, 0x1.76d14fdc20f6cp-132,
     0.0, 0x1.1031551d2b3c6p-857, 0x1.60bfe1077e0b7p-761, 0x1.070af13282bd5p-623,
     0x1.9b185b25edb8dp-239, 0.0, 0x1.12377a86e6c6bp-1005, 0x1.8ada594daeb68p-467,
     0.0, 0.0, 0x1.afe59b03d02ccp-747, 0x1.421cba542cb48p-615, 0.0, 0.0,
     0x1.0ba9b275989efp-596, 0x1.c59f5c5cf91fdp-128, 0.0, 0.0, 0.0,
     0x1.a3bb00f539bb8p-593, 0.0, 0x1.cc126d138c545p-979, 0x1.9650e2734fe47p-217, 0.0,
     0.0, 0.0, 0x1.6090d6f220a89p-763, 0.0, 0x1.084ab5cb6841ap-633, 0.0,
     0x1.6eadd84c255eep-496, 0x1.982f8a3f00cf3p-354, 0.0, 0x1.5107797c845ffp-918, 0.0,
     0x1.f113f6952e1d6p-500, 0x1.a47e0f3ec236dp-654, 0x1.02478a76a7e4bp-110,
     0x1.6e7f19ab61279p-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d2374284425d4p-611, 0.0,
     0x1.384ad815ff9c2p-501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5dfb259ce4c97p-589,
     0.0, 0.0, 0x1.53cb187d0436ep-312, 0.0, 0x1.17166c28f6a27p-858, 0.0, 0.0,
     0x1.bf3984cec6915p-16, 0x1.f4e66b96ffefap-593, 0x1.81d6844bfc6fdp-605,
     0x1.cf387b7b57c77p-621, 0.0, 0.0, 0.0, 0x1.b60da571cd32p-482,
     0x1.3c55f79c252c4p-379, 0.0, 0.0, 0x1.009c76f4929e9p-48, 0.0,
     0x1.7f570c3ade08fp-842, 0x1.65fa99d3dab57p-628, 0x1.18fc5b16b58a5p-265, 0.0, 0.0,
     0x1.bc37aadaff88bp-90, 0.0, 0x1.273b039ded5d1p-1013, 0.0, 0x1.6647417f5f1b6p-778,
     0.0, 0x1.bc6416d1bd604p-332, 0x1.42020ad0eb8afp-934, 0x1.ca2e7b8194485p-673, 0.0,
     0.0, 0x1.94abc1066b13cp-947, 0x1.8b422439f066fp-555, 0x1.563618d79bb6cp-393, 0.0,
     0x1.8ecb5c3df7cc7p-452, 0x1.1a8278399d0b9p-488, 0x1.f509dfc015a69p-743,
     0x1.dc9e70a26261p-947, 0x1.fd0166a4e08f1p-459, 0x1.2fe2df602664ap-900, 0.0,
     0x1.35db68315a2b9p-973, 0x1.7cb576c86ee24p-586, 0.0, 0.0, 0x1.c07e2a5157bd1p-501,
     0.0, 0.0, 0x1.74ab954d89f0ep-1000, 0x1.36ac8a2ea386bp-939,
     0x1.c555d0f58f32fp-821, 0x1.f21560deff49p-124, 0x1.de49f276e2f5p-203, 0.0, 0.0,
     0x1.152b8f7f7fe92p-969, 0x1.0d58c1c9bf4bp-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c48789de276p-616, 0x1.deccbb2ca2b1dp-675, 0.0, 0.0, 0.0, 0.0,
     0x1.df497df32effcp-255, 0x1.8a363a6a22dabp-52, 0x1.ce917b4c1fb24p-718, 0.0, 0.0,
     0.0, 0.0, 0x1.86092abef5c5p-28, 0x1.d267f31bbd09p-543, 0.0, 0.0, 0.0,
     0x1.e0790359e684bp-738, 0.0, 0x1.09ac50c7b1b1ep-918, 0.0, 0.0, 0.0,
     0x1.db265719cfd6cp-202, 0x1.d7fe6f30e0959p-590, 0x1.7188c63c7388bp-570, 0.0, 0.0,
     0.0, 0x1.557a9aa034ee4p-119, 0.0, 0x1.8b8cf8b860ecap-190, 0.0, 0.0, 0.0,
     0x1.51d5d644e5353p-418, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c41b810bbd65fp-852, 0.0, 0x1.715ed32bef6e9p-945, 0x1.e2a4e7a2bf66p-592,
     0x1.cfd2e63f48eefp-21, 0x1.f61bc25c55428p-253, 0.0, 0x1.9fe270f8ed75p-1011,
     0x1.331ce214e375ap-115, 0x1.5759dfc3db3b7p-679, 0.0, 0.0, 0.0,
     0x1.8cafe4600e88p-396, 0x1.222af166bd76p-366, 0x1.85703cfa73c0ap-1000, 0.0, 0.0,
     0x1.00d1e8622de5cp-509, 0x1.0c028f1be2f31p-292, 0.0, 0.0, 0.0,
     0x1.01af1f15af9c9p-616, 0.0, 0x1.7be4f1c1f1afcp-589, 0x1.486e6a7e040a6p-549, 0.0,
     0x1.4dd101165b239p-18, 0.0, 0.0, 0.0, 0.0, 0x1.1a1f2b96c0edp-44, 0.0, 0.0,
     0x1.dc6d19f02f103p-271, 0x1.86d8ceed6cf02p-765, 0.0, 0.0, 0x1.c3d8401699f61p-844,
     0x1.6dd5dc777784cp-83, 0.0, 0.0, 0.0, 0x1.8c0b5abee5b7dp-640, 0.0, 0.0,
     0x1.35f9f651bdc59p-31, 0x1.71609574e9a38p-728, 0.0, 0.0, 0x1.87f86e3637ee3p-56,
     0x1.57ae95a8b0bdp-232, 0.0, 0.0, 0x1.a5957650a0617p-412, 0.0, 0.0, 0.0, 0.0,
     0x1.f4d91a696f9dap-631, 0x1.998306420c507p-952, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.42c8ec5299048p-84, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09c2a9826960dp-986,
     0x1.e2399c6cdd03ep-522, 0.0, 0x1.6a48fe085efp-86, 0.0, 0x1.e30ce744d9654p-816,
     0x1.a562b29bb2e77p-225, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.23d43d89e975cp-299, 0x1.1cf598b4ade61p-104, 0.0, 0x1.6ca9c9d8c5335p-132,
     0x1.073e8afe6a35dp-922, 0.0, 0x1.25643d366e10fp-185, 0.0, 0x1.8b7834e31dd7bp-274,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35ec6575739aep-574, 0x1.f7c95af9e614ap-527,
     0x1.90948deddec87p-194, 0.0, 0x1.d2cac615ce3c6p-162, 0x1.3951dfbdf548dp-220,
     0x1.eb9297b87f2f1p-559, 0x1.db351e2d029aep-388, 0.0, 0.0, 0x1.3e1d1dbeb0feap-321,
     0.0, 0.0, 0x1.2b027bd753013p-278, 0x1.b71f61301435fp-626, 0x1.c2d64707bb405p-162,
     0x1.1b8ec3a7c825ep-797, 0.0, 0.0, 0x1.3750f05bb0bd7p-308, 0x1.582bfc7e9c2c3p-494,
     0.0, 0x1.ec779524353bap-612, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.72c41e6f543e8p-1003,
     0x1.73a5e525fb8ebp-161, 0x1.9bfdc92bac0a6p-490, 0x1.2c3a88e825aa2p-707, 0.0, 0.0,
     0x1.183c291ff66b2p-174, 0x1.edae6d05d988p-891, 0.0, 0x1.e0a58a86287b1p-578,
     0x1.7e8cd6e787ff9p-150, 0.0, 0.0, 0x1.daf6d21339487p-430, 0.0, 0.0,
     0x1.d76a30c1e5299p-257, 0.0, 0x1.f7329d7259c12p-936, 0x1.54623b05f1d76p-675,
     0x1.f7fec70bb66d4p-505, 0x1.ccfe39f39fa7p-73, 0x1.636ce4cc76121p-182, 0.0,
     0x1.008506c577961p-272, 0x1.95aaeea6f231ep-214, 0x1.1eee6cd4be53dp-729, 0.0, 0.0,
     0x1.9b97a8a439c7p-96, 0x1.06dda07c4db4ap-945, 0.0, 0x1.fb4633801e1b1p-418,
     0x1.5b7195abe1c7cp-588, 0x1.914a06b852be2p-722, 0x1.7929433c3c54dp-351, 0.0,
     0x1.080f8f9dcd7a4p-897, 0.0, 0x1.f81255bfa92d9p-258, 0.0, 0.0,
     0x1.7a7de7c5af6bap-837, 0.0, 0x1.2ab92e8efeff6p-733, 0.0, 0x1.82460760016c9p-657,
     0.0, 0.0, 0.0, 0x1.27a78961c632bp-932, 0.0, 0x1.d5293d4951dbbp-285,
     0x1.f55957d14efc6p-268, 0.0, 0x1.429148aea2015p-348, 0x1.d605460b640c2p-268,
     0x1.8f75cc43eda98p-274, 0.0, 0x1.30f949d646b39p-439, 0x1.826ffe4adfa0ap-67, 0.0,
     0x1.f5d568ee89e1p-439, 0.0, 0.0, 0.0, 0.0, 0x1.d9be9fe133fa2p-677, 0.0, 0.0, 0.0,
     0x1.d40faa967df23p-165, 0.0, 0x1.188acdaf8a81cp-797, 0.0, 0.0,
     0x1.969fe6d24bc69p-243, 0.0, 0x1.1cad8689d2047p-671, 0x1.ff706c584e6f1p-687,
     0x1.6512f89f53ee8p-249, 0x1.06ed7e9b64027p-309, 0x1.88014fe4684fap-628, 0.0, 0.0,
     0x1.acaf113825411p-549, 0x1.1379c2329578cp-384, 0x1.a11b37bd7b8efp-688, 0.0, 0.0,
     0x1.7015799d25be6p-894, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1ea9b8b654f2ap-33, 0.0, 0.0,
     0.0, 0.0, 0x1.adb56ac51259bp-665, 0.0, 0x1.76331783fa315p-541, 0.0,
     0x1.6397a6b6fa632p-823, 0.0, 0.0, 0x1.add58aec40734p-102, 0x1.9ba73d170843fp-274,
     0x1.efc10ed2e2b4bp-96, 0.0, 0.0, 0x1.a49461c24fb69p-507, 0.0,
     0x1.293f27adc8d66p-992, 0x1.64f7c2e8f0f8fp-731, 0.0, 0x1.e6a64d7859091p-430,
     0x1.e09ebbfc3fde4p-699, 0x1.d4f871e3268efp-627, 0.0, 0x1.981103d59c379p-638, 0.0,
     0.0, 0.0, 0x1.f30039cfad466p-916, 0.0, 0.0, 0.0, 0x1.8dd6376b28afcp-117, 0.0,
     0x1.fe655f6012e33p-840, 0x1.d03a294ba38b2p-152, 0x1.5345ad04a79c6p-334,
     0x1.6fd81495e78bdp-527, 0x1.13e6db59366b7p-673, 0x1.001c348380eafp-628, 0.0, 0.0,
     0x1.0c97d89714fc4p-202, 0.0, 0x1.0d6fb47c903e4p-499, 0x1.e3858e31092cdp-35, 0.0,
     0x1.6ad648c74105fp-732, 0x1.8ac167dbe29f4p-277, 0x1.fb69ad6495113p-13, 0.0,
     0x1.82bc1c9828a1ap-405, 0x1.f9295b83dceb8p-310, 0.0, 0x1.66b6895e9969bp-541, 0.0,
     0.0, 0x1.175c6fb08d0e1p-473, 0.0, 0.0, 0x1.db4911d2f3152p-285, 0.0,
     0x1.c3afa253062f1p-419, 0.0, 0x1.84c2bd9f9abap-405, 0.0, 0.0,
     0x1.a8d5b5b8fdb61p-674, 0x1.edb726cbefb75p-105, 0.0, 0x1.1315ed4d40ab5p-634,
     0x1.d48419f3a8629p-101, 0x1.f51d9d4ca8883p-468, 0x1.c28bd41812facp-82, 0.0, 0.0,
     0x1.41c8a82bdb4c7p-525, 0.0, 0x1.1eedb19641f77p-230, 0x1.aa3ce463cf055p-971,
     0x1.cd12709a5325p-785, 0x1.d1b725d55cc86p-531, 0x1.f6abbae2ac5f1p-465, 0.0, 0.0,
     0.0, 0.0, 0x1.87e5bce743adfp-102, 0.0, 0.0, 0x1.657bdc8477af7p-593,
     0x1.8f1745eeee2dp-974, 0x1.ce6719333521cp-452, 0x1.5fd944660e891p-309,
     0x1.c3c551392cbdfp-85, 0x1.9fa195ce560e7p-685, 0.0, 0.0, 0.0,
     0x1.90e910b625d6dp-763, 0x1.8aa31c4b3fa1ep-825, 0.0, 0x1.4f6edbc730fc8p-38, 0.0,
     0x1.7648867e2b591p-469, 0.0, 0x1.4dd078ca41c26p-803, 0x1.67017da215a1dp-574,
     0x1.b5ed0e8a38c22p-227, 0x1.97463fc54f0c6p-470, 0x1.f31180a4ab529p-600, 0.0, 0.0,
     0x1.293de77a2d4bdp-1, 0x1.7308a985df2ep-772, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8d087510c883cp-23, 0x1.37bcbc6f5e0e6p-719, 0.0, 0x1.c53231e6f7d59p-392,
     0.0, 0x1.f684f5795fd75p-919, 0x1.4978edfd2ea1bp-925, 0.0, 0.0, 0.0,
     0x1.f15b038ecf4e7p-270, 0.0, 0.0, 0.0, 0x1.b9473f6ee4591p-342,
     0x1.9b90a0a8d3e3ep-692, 0x1.5ac8da3f02ffap-278, 0x1.91a9fbaa3569ap-342,
     0x1.60958a8839c3p-36, 0x1.a7bd254a09667p-743, 0x1.a09d72d6ed9a6p-769, 0.0, 0.0,
     0x1.00424ecbc0b29p-667, 0x1.3750046387a02p-756, 0.0, 0.0, 0x1.fb0aefc0b618ep-550,
     0.0, 0.0, 0.0, 0x1.4b1fbd5b35f87p-882, 0.0, 0x1.fe9aa8fbeb10bp-57,
     0x1.91be6cc85d796p-678, 0x1.62e1bb7c44336p-503, 0.0, 0x1.cf0aaaf53a5c8p-904,
     0x1.5e45c5295206cp-856, 0.0, 0.0, 0x1.2bf686cf2e926p-119, 0x1.622145b685f6fp-751,
     0x1.bfcf8999c4279p-449, 0.0, 0x1.fe18880d6c8ebp-252, 0.0, 0.0,
     0x1.f658d90997c7ep-463, 0x1.1406dd8cc101ap-426, 0x1.6b56d8940e824p-519,
     0x1.ed921407106c1p-241, 0.0, 0x1.ff5e0a6a5dc42p-933, 0x1.576cd87b823aap-460, 0.0,
     0x1.677422f7d3cc4p-291, 0x1.e52aa9eb399fp-371, 0.0, 0.0, 0x1.02eabc54a7bd8p-164,
     0x1.a7f7c1074a2e5p-866, 0.0, 0x1.fafe5998230f7p-3, 0.0, 0x1.e4df8e95b519bp-834,
     0.0, 0.0, 0.0, 0.0, 0x1.94e454dc38b2p-556, 0.0, 0.0, 0.0, 0x1.3b3818738481ep-530,
     0x1.ec4ea9edb8ee7p-613, 0x1.7199ee33bca52p-595, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.080198a9311d1p-556, 0x1.b8331926edbdcp-217, 0.0, 0x1.d4093c26ba3cdp-213, 0.0,
     0x1.a030d1b455694p-456, 0x1.decba2b583515p-184, 0x1.69c8d2145f91bp-721, 0.0, 0.0,
     0.0, 0x1.24cafd12d45c7p-871, 0x1.00fa5782e960cp-591, 0x1.0c55b4823796fp-467, 0.0,
     0x1.80befb3b17b64p-132, 0.0, 0x1.5d472e3a39c48p-652, 0x1.15bac62d411dbp-135, 0.0,
     0x1.887c848a951a6p-450, 0.0, 0.0, 0x1.b51f617e921a6p-866, 0.0,
     0x1.70fa82f8c8e95p-523, 0.0, 0.0, 0x1.99057e78a2ebfp-772, 0.0, 0.0, 0.0,
     0x1.bd6422b8bf8ffp-956, 0x1.f142ae3f34ea9p-891, 0x1.32f88412822ffp-836,
     0x1.a2b5939c41378p-922, 0x1.81e10fd1fa10fp-434, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b0d77fc9c33bp-9, 0.0, 0.0, 0x1.c980394c39a42p-700, 0x1.99b18207ea499p-691,
     0.0, 0.0, 0x1.0219b14595496p-157, 0x1.5c632a2f866dap-151, 0.0,
     0x1.1f13470c21a54p-390, 0.0, 0.0, 0x1.d673b10cd2c6p-1014, 0x1.e8ac0a2f9b82cp-815,
     0.0, 0x1.22f179136ddfcp-193, 0x1.3f33e476aebb8p-975, 0x1.3213d38f86628p-8,
     0x1.353ed4810358cp-449, 0x1.03af716bd2b51p-942, 0x1.329c043f93d59p-6, 0.0,
     0x1.cc06564acfa5ep-824, 0x1.b2100ed794e95p-1020, 0x1.bce0703dc20efp-498,
     0x1.d85ea0fdffeadp-608, 0x1.e1631e2d6805p-555, 0.0, 0.0, 0x1.06a93b0d44e2dp-137,
     0.0, 0x1.7e91c213ebc7ep-51, 0x1.ccccb2c7b0945p-153, 0.0, 0.0,
     0x1.5daacd8e187f1p-521, 0x1.e8e5b2d3fb51dp-273, 0.0, 0x1.77a5759da8abep-171,
     0x1.d4f153163b0c2p-767, 0.0, 0x1.2b2a9e197947bp-265, 0.0, 0x1.264d435cc9827p-746,
     0.0, 0x1.e2f94938962ebp-214, 0.0, 0.0, 0.0, 0x1.2ee2faa61609fp-532,
     0x1.479af2534c304p-212, 0.0, 0x1.0aeef1c9fb0cfp-483, 0x1.d5f0c7bea68b9p-742,
     0x1.0c93fa0819736p-390, 0.0, 0x1.ebac23b887e12p-452, 0.0, 0.0,
     0x1.64ec0b6a55fb9p-898, 0.0, 0x1.b2565062e3a53p-154, 0.0, 0x1.49cc5b10409ep-80,
     0.0, 0x1.4813a4bcf2abfp-285, 0.0, 0x1.682904f5451ebp-628, 0.0,
     0x1.ac7d774721a96p-999, 0x1.6942ee6ea5717p-2, 0x1.43d5d72af239bp-756, 0.0,
     0x1.eb3c22c1717e7p-478, 0x1.3f70887350cf8p-665, 0.0, 0.0, 0x1.5175b109dbf11p-249,
     0.0, 0x1.31fc8172b717dp-422, 0x1.8134a3f91e09dp-961, 0.0, 0x1.97feed5927024p-512,
     0.0, 0x1.2b29af0b01a47p-688, 0x1.e0dc58b9a8e15p-647, 0.0, 0.0, 0.0,
     0x1.413731a6d7c6bp-311, 0x1.63b71987fbe1fp-225, 0x1.43b8cbdd16d7ap-329,
     0x1.40d9f14aad002p-263, 0x1.9105f714b75bcp-566, 0x1.6ed1812577291p-565,
     0x1.ebf77d2359e11p-437, 0.0, 0.0, 0x1.47e78e1a417f2p-742, 0x1.ad145bb8beb8cp-157,
     0x1.9d6f70bf94f8ap-728, 0.0, 0x1.8124aec1187efp-652, 0.0, 0.0, 0.0,
     0x1.b5e2075e3ff5ep-372, 0x1.7b1293423e614p-943, 0x1.8af33b9f4f5bp-386,
     0x1.cb3124a844fa2p-788, 0x1.068de0318e7f9p-684, 0x1.84ba2d5e39273p-282, 0.0, 0.0,
     0x1.ae2ff7e119414p-221, 0.0, 0.0, 0x1.3d7cbc00667a2p-771, 0x1.ed4d74cfce729p-217,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.64933d269532bp-786, 0.0, 0.0,
     0x1.40c82152478ecp-991, 0x1.8711249c4c9a4p-453, 0.0, 0.0, 0x1.045793b64b929p-251,
     0x1.b71f40a1a5c2ep-815, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4bbc98697f3d4p-658, 0x1.3b0c38664dc6ep-370, 0x1.2417e3bcb4d1dp-930,
     0x1.d8286a820f2acp-513, 0.0, 0x1.2d9ab0e2828dfp-855, 0.0, 0x1.9ea321a5722e1p-140,
     0x1.322fa4674acc4p-119, 0.0, 0.0, 0.0, 0x1.fd935e1453634p-693, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.da272bb0d9d67p-997, 0.0, 0.0, 0x1.83abb5486dfaap-393,
     0x1.341481127ff4p-231, 0.0, 0x1.ec0096d5b9603p-181, 0x1.93b4a0b0a4dbap-712,
     0x1.88e0aba5543cp-1011, 0x1.859df4df1d777p-955, 0.0, 0x1.2176ac6935c59p-904, 0.0,
     0.0, 0x1.932d47b4d38a3p-649, 0.0, 0.0, 0.0, 0x1.213ff498b1a71p-791,
     0x1.ec102046cedc1p-281, 0.0, 0x1.ff55a8d2ceb4cp-224, 0x1.016a150b86686p-306, 0.0,
     0.0, 0x1.7a655e6ff22d9p-583, 0.0, 0.0, 0x1.3dffbe922758bp-887,
     0x1.3588a38c6e62fp-643, 0x1.fa0af78f5e5e3p-355, 0x1.57da8757b6eeap-894, 0.0, 0.0,
     0x1.366d59d01c278p-830, 0.0, 0.0, 0.0, 0x1.a02b1d70e797dp-192, 0.0,
     0x1.0321439179c22p-892, 0x1.3bc456cc24175p-883, 0.0, 0.0, 0.0,
     0x1.6282767babac2p-925, 0x1.fffb067f17accp-787, 0x1.0202a8ec80febp-657, 0.0,
     0x1.1f0f8b8e9245fp-594, 0x1.2cfec66fc266fp-840, 0x1.61b5a9187c6ddp-954,
     0x1.9669525928c13p-12, 0x1.cb0640d6159bfp-176, 0x1.a19d60e148d3bp-750,
     0x1.94d1809942214p-454, 0x1.f0d9117401af8p-353, 0x1.1143b69e7c5c2p-104, 0.0, 0.0,
     0.0, 0.0, 0x1.7b026ec43cda1p-545, 0x1.df26cf6ec147p-433, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.11eaec3de8e2bp-760, 0.0, 0x1.eeb4393fb5066p-35,
     0x1.9463b4c509ee7p-204, 0x1.9fbd4cf56cae5p-606, 0.0, 0.0, 0x1.fed61844470cap-327,
     0x1.e08c1cc19ac9fp-574, 0x1.f42dacccef285p-705, 0.0, 0x1.1541395a5c18p-441, 0.0,
     0.0, 0.0, 0x1.306f79caa58d8p-603, 0x1.4e0efedf879d2p-304, 0x1.40884d09ef037p-107,
     0.0, 0x1.271d78be05217p-708, 0.0, 0x1.2b3b8281d7479p-850, 0x1.c151a328629b2p-130,
     0x1.6dc500d1e173fp-814, 0x1.2d79cbbd30434p-482, 0.0, 0x1.1fbeae38966d2p-994,
     0x1.40247f90ecd6bp-454, 0x1.708f7157af695p-51, 0.0, 0x1.9b03337f8e2b9p-540,
     0x1.35b1d2684c1b8p-18, 0.0, 0x1.bc8b826de86bp-947, 0.0, 0x1.a920e9a0f0b27p-347,
     0x1.78d634f30d695p-225, 0x1.ac482e7b9de9dp-692, 0.0, 0x1.e57e8205b6bf9p-341,
     0x1.1709367c1258ep-521, 0.0
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
            tmp1 = Sleef_finz_sind4_u35kvx(tmp0);
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
    printf("Sleef_finz_sind4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sind4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
