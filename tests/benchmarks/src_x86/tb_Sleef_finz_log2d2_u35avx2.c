/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d2_u35avx2128.c --function \
 *     Sleef_finz_log2d2_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0, 0.0, 0.0, 0x1.dac40d0cae473p-770, 0.0, 0.0, 0.0, 0x1.e915a82f46395p-154,
     0.0, 0x1.c218423dcabbbp-226, 0.0, 0x1.04b242399171fp-212,
     0x1.8d0d69c6c6678p-1016, 0.0, 0x1.5e4b5d1f9b9d2p-797, 0x1.d8adc4b94bed9p-153,
     0.0, 0.0, 0.0, 0.0, 0x1.8fc812d56f433p-934, 0x1.d9b7f4e52db63p-67, 0.0,
     0x1.8c9d634ff8964p-222, 0x1.7121bf3309b25p-8, 0x1.96395b433bce1p-500,
     0x1.fd7f3aa9f0575p-667, 0x1.0448c9ff210a1p-861, 0x1.e2090e922621ap-524, 0.0,
     0x1.47b6ce2e5c29cp-408, 0.0, 0.0, 0x1.9a1b8ae3b042ep-618, 0x1.78fff2e3cb20cp-217,
     0.0, 0.0, 0.0, 0x1.fbdc87972c83ap-585, 0x1.c2a983a9be986p-1020,
     0x1.cb153e79539abp-1003, 0x1.f58ca20059d3dp-358, 0x1.c31388d68a9e8p-257, 0.0,
     0.0, 0x1.24110b6775b8ap-63, 0x1.51e67cb60baafp-241, 0x1.77cbfa76ed55ep-888,
     0x1.40b4c1fa768d2p-867, 0x1.05830ecd75dp-490, 0.0, 0.0, 0x1.0fb58a152c5ap-564,
     0x1.d2cf76236e4c1p-275, 0.0, 0.0, 0.0, 0x1.f8ca78c6c7534p-123, 0.0,
     0x1.06d85b082ec06p-639, 0.0, 0x1.71269f1a4921bp-867, 0x1.926a29e12d433p-241,
     0x1.812bb88eaa93p-866, 0x1.e37f4d821e736p-346, 0.0, 0x1.6f7c62309bbf4p-373,
     0x1.83e6df56c8cd3p-767, 0.0, 0x1.ff2981a5bb9dfp-159, 0.0, 0x1.85cf4b7127489p-860,
     0.0, 0x1.2089507cc69bbp-872, 0x1.71f24c640285fp-652, 0x1.32f9b93b232c5p-780, 0.0,
     0.0, 0.0, 0x1.065dfd7fa4e4p-800, 0.0, 0x1.f790d401e8d78p-993, 0.0,
     0x1.1d07417df418dp-703, 0x1.62160c8ce073p-445, 0x1.93a0ad3a1a61ap-341, 0.0,
     0x1.71f64f01f4939p-163, 0.0, 0x1.82542b1026a97p-202, 0x1.da99e6d30e3dp-642,
     0x1.311afb83ec751p-754, 0.0, 0.0, 0x1.8f8b7cd0e43f6p-655, 0x1.bde23aa8d8c87p-855,
     0x1.5da00af32a71fp-504, 0.0, 0.0, 0.0, 0.0, 0x1.230b0ded120d6p-779,
     0x1.5b99d96c09f4ep-654, 0.0, 0x1.0080f439a61efp-854, 0.0, 0.0,
     0x1.5c1663db155d5p-892, 0x1.0eb9aded0d927p-705, 0.0, 0.0, 0x1.c08a77d8319e3p-698,
     0.0, 0.0, 0x1.316db34b820d1p-202, 0.0, 0.0, 0x1.419e2e6075955p-439, 0.0,
     0x1.cace5613b710ap-670, 0x1.b854ee8e8fdadp-421, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9c07008eae80cp-731, 0x1.09247b6fcdb64p-106, 0x1.8ff63692a03f4p-550, 0.0,
     0.0, 0x1.31f87a6696df6p-712, 0.0, 0.0, 0x1.63a1f1ea498aap-609, 0.0, 0.0,
     0x1.7f14402ab8bddp-625, 0.0, 0x1.2bb374dce0aa5p-177, 0.0, 0x1.cb42c48a15819p-574,
     0x1.95db6845742bbp-443, 0x1.ecf300e6a1567p-617, 0x1.d951536be3b63p-444,
     0x1.e306fc016c5d5p-806, 0x1.1257ec409f42cp-454, 0x1.0594201410c2bp-979,
     0x1.ba7a0e4c34e65p-525, 0x1.e291ee2057b8p-482, 0.0, 0x1.4487e266377a3p-136, 0.0,
     0x1.3296b178ad5dp-482, 0.0, 0x1.725f4257a3b66p-280, 0.0, 0x1.59cb35ea483e9p-474,
     0x1.1e87b843461edp-265, 0x1.31375c4241e2p-275, 0x1.c8f3d48fe9c19p-870,
     0x1.19181281c2e0ap-337, 0x1.1a428094eba0fp-410, 0x1.115f58a3888e7p-854,
     0x1.dacef891f1792p-615, 0x1.cf1706d674514p-53, 0.0, 0x1.1d887cf0e95aep-54,
     0x1.be3eafa5d6547p-732, 0.0, 0x1.d9bf09dc6e074p-646, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.79d6f3ba51426p-277, 0.0, 0x1.225966d0fb4b1p-489,
     0x1.97c7ea94d69a2p-531, 0x1.85d093e5a9955p-691, 0.0, 0x1.2fc3802a06b42p-206,
     0x1.e57f6817e77bcp-91, 0x1.fbfdbf0c6eb08p-259, 0x1.15a269658c5p-575,
     0x1.a2913ebfa760ap-48, 0x1.4f01cc82d3d15p-62, 0x1.e46336c8976e8p-883, 0.0, 0.0,
     0x1.f7a7fb69bececp-994, 0.0, 0.0, 0.0, 0.0, 0x1.54332abc7396ap-723,
     0x1.6231de7aef222p-84, 0x1.b01ef7721a8c3p-1013, 0.0, 0.0, 0.0, 0.0,
     0x1.283c9f07285eap-718, 0x1.ba881a5ac83eap-205, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.adff379d6c31ep-939, 0x1.cb0eb2607a8e1p-899, 0.0, 0x1.76d9e91a2ed5p-800,
     0x1.16536b5d3101ep-46, 0.0, 0x1.2b939a8bcb859p-571, 0x1.bebf169ad9a5fp-190,
     0x1.98a228f45ad3cp-717, 0x1.7e6799675af61p-401, 0.0, 0.0, 0.0, 0.0,
     0x1.4ff2932876d88p-268, 0.0, 0x1.63abcdd30f4efp-459, 0.0, 0x1.c954cf1ea159fp-915,
     0.0, 0x1.f9d6f59abd5ebp-879, 0x1.445a4c83ddb7ep-269, 0x1.fe5ffba6dd6d3p-584,
     0x1.608967929e574p-138, 0.0, 0.0, 0.0, 0x1.3515f7b260cap-550,
     0x1.05cc0b2994d7dp-209, 0x1.904cc7cf4756dp-606, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9cdfe42aade5p-91, 0x1.0de4073ae646bp-18, 0x1.9e6ba048e6f8cp-905,
     0x1.98df1f7a8d94bp-588, 0.0, 0x1.86d8bc3bad80dp-497, 0x1.80cf3be6c7b4p-713,
     0x1.d5f6c49cdf378p-666, 0.0, 0.0, 0.0, 0x1.9b63b529bf477p-176, 0.0,
     0x1.b49f5284562d4p-138, 0.0, 0.0, 0.0, 0x1.d536de965d89ap-304,
     0x1.e1faacc01acb1p-889, 0x1.d0d7535493ac7p-434, 0x1.7416a3816430bp-981, 0.0, 0.0,
     0.0, 0x1.311505f37d50fp-274, 0.0, 0x1.e56a254220dcbp-503, 0x1.a44b103ffc8ddp-938,
     0.0, 0x1.4fed5d5094817p-764, 0x1.b82b58bc89dcep-486, 0x1.0e6ffa2a91814p-855, 0.0,
     0x1.41c2f688fc44ap-987, 0.0, 0x1.420d26cc4d6f1p-910, 0.0, 0x1.7504aa9e67521p-268,
     0x1.e3416bf1b095dp-195, 0.0, 0x1.f8d854c043ef9p-763, 0x1.9d914171e4cecp-884, 0.0,
     0.0, 0x1.a9e706171a5d7p-52, 0x1.f0d5c4fd35105p-832, 0x1.0352ea06c4648p-258,
     0x1.cd0be771fa045p-144, 0x1.c909c110be1c2p-1009, 0x1.5760d48e830dap-562,
     0x1.a067b276c0345p-759, 0.0, 0.0, 0.0, 0.0, 0x1.12bd8db7ad199p-501,
     0x1.9b29e32e7c3c1p-606, 0x1.1934cc2595dacp-804, 0x1.ef58d3f59117cp-808, 0.0, 0.0,
     0x1.a831bb1144f2fp-613, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c7ab7e6d444dp-450, 0.0,
     0.0, 0.0, 0x1.fa29289c925dap-122, 0.0, 0x1.7008339c69ae4p-951, 0.0,
     0x1.7fa3a5282676ep-341, 0.0, 0x1.68b56415828a3p-159, 0.0, 0.0,
     0x1.15fe86daab903p-48, 0.0, 0x1.c1b847ec429p-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.157dd54191d9dp-744, 0.0, 0x1.2a9f11da4c5b5p-947, 0x1.b58d33d9e4764p-21,
     0x1.c612841a89efdp-929, 0.0, 0.0, 0x1.7647fea3482bp-905, 0x1.1f9c7111301d9p-400,
     0x1.469f0ac7891f4p-775, 0x1.0e02e82dc42f8p-286, 0.0, 0x1.550ec97452227p-425,
     0x1p0, 0x1.a742ed2e522c5p-46, 0x1.9387885796b1bp-640, 0x1.7c80871d38515p-949,
     0x1.84cd662b4a6e2p-849, 0.0, 0x1.62088f393e6f9p-920, 0.0, 0.0,
     0x1.16f6f27d76e64p-363, 0.0, 0.0, 0x1.573ca61e6ba8fp-177, 0x1.e3f380f6b7a26p-521,
     0x1.c5e303d1d16fp-581, 0x1.137c294ea5ef5p-559, 0x1.512445a223972p-318, 0.0,
     0x1.93253bdd743c9p-62, 0.0, 0.0, 0.0, 0x1.994aaeb74f503p-608,
     0x1.c233e079d3c28p-583, 0.0, 0.0, 0x1.c7002262b7ffep-174, 0.0,
     0x1.bc360f032a237p-742, 0.0, 0x1.d18376f0cf912p-481, 0x1.b65ecb9fc13cap-40, 0.0,
     0.0, 0x1.bbc2a20829bfep-786, 0.0, 0x1.bef662a936ba8p-253, 0x1.ebc46e1dcaba8p-667,
     0x1.7541bf807fafbp-215, 0x1.8e6539097424ap-827, 0x1.e691935528a96p-457,
     0x1.632231d94c5fp-493, 0x1.bf613411a49e2p-748, 0x1.21ba1b383a3a6p-686,
     0x1.647acff3de6ecp-778, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3bd5e2b49c972p-527,
     0x1.cbe201493f207p-552, 0x1.7f1815613efd6p-563, 0x1.08f628e86f714p-174, 0.0,
     0x1.523bda2c721f8p-738, 0x1.557f93faf9576p-462, 0x1.e89a371250ac2p-633, 0.0, 0.0,
     0x1.923fbd0171c98p-717, 0x1.ea7ebf8393103p-790, 0x1.2f4729b5b39ep-464,
     0x1.ab7743a153361p-238, 0x1.b0f67b35c4276p-733, 0x1.c86da3d967e76p-292, 0.0, 0.0,
     0x1.d7c3d43b6962ep-267, 0.0, 0.0, 0.0, 0x1.7a2c294166215p-99, 0.0, 0.0,
     0x1.8e4913ca19f01p-546, 0x1.481c16bcfbba7p-40, 0.0, 0.0, 0x1.895a3ac30b9f6p-814,
     0.0, 0x1.c131d0dda8d48p-31, 0x1.25ea44fe55656p-1021, 0x1.d07299813cf1dp-251, 0.0,
     0x1.7f1c997cdbfbap-324, 0.0, 0.0, 0.0, 0x1.4a85480644834p-705, 0.0,
     0x1.c49f46ec442fp-586, 0x1.de872351000adp-872, 0.0, 0.0, 0x1.c423b7b1ede72p-116,
     0.0, 0x1.8a4705fdab1fep-67, 0.0, 0.0, 0x1.1711b3ee39c03p-44, 0.0,
     0x1.ca1984d0330a4p-549, 0.0, 0.0, 0.0, 0x1.52011b889ffcbp-399, 0.0,
     0x1.7b8f7b4ce5cffp-695, 0x1.08a53d3052b71p-151, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bd15416a815eep-54, 0.0, 0.0, 0.0, 0x1.f692e37a3fa7fp-581, 0.0,
     0x1.2ce9c4767310dp-977, 0.0, 0x1.f937fff1bec0cp-884, 0x1.5eff70d5a48e6p-770,
     0x1.1de6d584debe3p-493, 0x1.be0e5fa9c7c2ep-518, 0x1.7911869855856p-248, 0.0, 0.0,
     0x1.6ca0cb4077861p-239, 0x1.899666c191728p-269, 0x1.4e5144d93064bp-843, 0.0,
     0x1.b866881f495bep-198, 0.0, 0.0, 0x1.d90276efa1f9bp-909, 0.0, 0.0, 0.0, 0.0,
     0x1.5aabaec8515c4p-601, 0x1.600db82d6f587p-933, 0x1.eb472e6c740dp-486,
     0x1.ae99193bca4e6p-963, 0x1.7ff2fb3283567p-748, 0.0, 0.0, 0x1.df714b8c3d38cp-135,
     0.0, 0.0, 0x1.1ba9364693a4cp-302, 0x1.b564a8e3f626dp-359, 0x1.c6805894a765fp-795,
     0.0, 0.0, 0x1.cb70af6b3803ap-630, 0.0, 0x1.88d40a3a345b1p-577,
     0x1.5b3b22f3d0797p-733, 0.0, 0.0, 0x1.3db607872bf24p-980, 0x1.96c41d281db8cp-414,
     0x1.264c4835fe53cp-370, 0x1.f2424ba9cfe9p-443, 0.0, 0x1.50d03b6eda95p-992, 0.0,
     0x1.c564f0be48c64p-622, 0.0, 0.0, 0x1.c9ce9f2396b42p-861, 0.0, 0.0,
     0x1.4a94a81705a2bp-812, 0.0, 0x1.139460f885702p-622, 0x1.4647b08d325dbp-771,
     0x1.0efb9dfba82f2p-510, 0.0, 0.0, 0x1.304bb6eb77ed8p-240, 0.0, 0.0,
     0x1.0c0c8352f194ep-206, 0x1.ed15ff9417bddp-818, 0.0, 0.0, 0.0,
     0x1.f7bdcaeae1392p-47, 0.0, 0.0, 0.0, 0.0, 0x1.c941e032c1f1fp-321,
     0x1.dbd1b49ca98c8p-972, 0x1.6b17eb24094bdp-32, 0x1.68cf7e15e218p-753, 0.0, 0.0,
     0.0, 0x1.6faade0a61988p-664, 0.0, 0x1.4e6b4d40ac8a8p-541, 0.0,
     0x1.184b49b03aecap-985, 0.0, 0.0, 0x1.a8b622f3e5269p-12, 0.0,
     0x1.1c0de6d3e7c4p-992, 0x1.4184b20222a7cp-801, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1cee8e6102e96p-733, 0x1.566eb2775d3bbp-503, 0x1.85ac29ce7af6dp-886,
     0x1.9722eba3cc626p-395, 0.0, 0.0, 0.0, 0x1.593d161418919p-28,
     0x1.6fb8e3049315dp-352, 0.0, 0.0, 0x1.7075c975477f7p-300, 0.0, 0.0, 0.0,
     0x1.ad8068cd4a4f2p-331, 0x1.7fc3d29e55638p-92, 0x1.a78f6c42238ecp-475, 0.0, 0.0,
     0x1.0a386e2d8366bp-910, 0x1.1a1da5f5c667bp-857, 0x1.f3886fe758952p-464, 0.0,
     0x1.ad5b55e84e85bp-311, 0x1.f3e6b1bfd9e4bp-7, 0x1.d84fe54f61ad7p-79, 0.0,
     0x1.e5825dcfc5ad4p-352, 0.0, 0x1.344233e6a4aabp-372, 0x1.24127d1ad828p-606, 0.0,
     0.0, 0x1.9a4ab4264b274p-249, 0.0, 0x1.98dd2218604a5p-758, 0x1.7d2e2687aef39p-452,
     0.0, 0.0, 0x1.42a0022fe7a23p-610, 0x1.adfd445317662p-792, 0x1.950031610e8bdp-565,
     0.0, 0.0, 0.0, 0x1.1246159f6675dp-478, 0x1.b5a537f598699p-118,
     0x1.16218141e97d1p-819, 0x1.2d0c76bdd31e7p-773, 0x1.459540cac5c52p-964, 0.0, 0.0,
     0x1.cab1bf9c81de4p-842, 0x1.ebbcd6ebd7f5cp-475, 0.0, 0x1.8e0bb683c6d9bp-883, 0.0,
     0.0, 0x1.d3b899241e161p-880, 0x1.c1bdf961729f6p-598, 0x1.652d7ed77526cp-466,
     0x1.fa8d06bd66631p-766, 0x1.5d22f6e9772f4p-358, 0x1.a52fb4a1c28e9p-270, 0.0,
     0x1.fe481c5864bacp-494, 0x1.7b50dd920033ep-630, 0x1.f093154c7827p-381, 0.0, 0.0,
     0.0, 0x1.0921bceb73ff7p-778, 0x1.e58a7ca01fd8bp-778, 0.0, 0.0,
     0x1.4d6cc9839ff6cp-210, 0.0, 0.0, 0.0, 0.0, 0x1.b0b0a14188fe3p-531, 0.0, 0.0,
     0x1.00fb92f8c7cbap-936, 0x1.3a074ee9001acp-754, 0x1.33b1e6d668031p-938, 0.0, 0.0,
     0x1.6ee1673a595d2p-287, 0x1.fea4b57f36c52p-692, 0x1.fa714959a6c6ep-787,
     0x1.6c89ac8e5a0bcp-847, 0.0, 0x1.0543d1df553b6p-741, 0x1.47db4d11b95bp-179, 0.0,
     0x1.9f3a18f461967p-400, 0x1.3ec9541c3f0b3p-673, 0.0, 0x1.0ba869453b1ccp-110, 0.0,
     0x1.e375c502cf5p-429, 0x1.008b337eadfafp-910, 0x1.a33d745442bb2p-143,
     0x1.7b882723e1b88p-805, 0.0, 0x1.b2198b2ddf72p-325, 0.0, 0x1.9497ae005524bp-849,
     0.0, 0x1.bd0cd713474f1p-238, 0x1.bcd2d8dbcc553p-329, 0x1.86ad3006dc7d3p-858,
     0x1.12276fb94ce03p-744, 0x1.310479fe06e53p-690, 0x1.14aeb0574f782p-76,
     0x1.2df4c8a2c6ab8p-958, 0.0, 0x1.01ecba6f42da1p-699, 0.0, 0x1.07e75e3624f86p-788,
     0.0, 0x1.3442f7124359dp-951, 0x1.338a877ed1356p-296, 0.0, 0.0,
     0x1.564f7c076d5bep-189, 0.0, 0.0, 0x1.e5b3522b265aap-813, 0.0, 0.0, 0.0,
     0x1.970c228c36b38p-828, 0.0, 0x1.3e6ddde520bfep-651, 0.0, 0.0,
     0x1.ff1797628332ap-581, 0.0, 0x1.98d2506e255ffp-294, 0x1.a30fc76bcf988p-473,
     0x1.b54643ffe8258p-644, 0x1.d4da011a8fe93p-845, 0x1.4e9f4479ec935p-532, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3253f477f3914p-19, 0x1.259a5bbc97cedp-6,
     0x1.e1802d211486dp-263, 0x1.81c5db6f1fe6fp-858, 0x1.e33748d54e3b6p-645, 0.0, 0.0,
     0x1.577b283506cc2p-63, 0.0, 0.0, 0x1.dab02a151b717p-494, 0.0,
     0x1.2826e82ef3138p-537, 0x1.6cc7ae2350b05p-243, 0x1.3c1588a6fd82dp-364,
     0x1.86125c0429c99p-13, 0x1.8ed6a74bc31afp-411, 0x1.331bca9cb9631p-20, 0.0,
     0x1.55587d3627371p-885, 0.0, 0x1.61306f12b1dd9p-1019, 0x1.07c474c7df09ap-381,
     0x1.f7b63c0768f85p-309, 0x1.dc731ddb21f1dp-418, 0x1.4f551dac70598p-2, 0.0, 0.0,
     0.0, 0x1.6e74e9bddfb68p-278, 0x1.d865352f14e98p-924, 0.0, 0.0,
     0x1.b35a5ccaf384fp-699, 0.0, 0x1.918887d497392p-161, 0x1.3c55a54bf6b07p-996,
     0x1.7b17bda3c7417p-880, 0x1.120539ca8ae5dp-188, 0.0, 0.0, 0x1.642c935a126fep-212,
     0x1.60ae5c5899d65p-810, 0x1.49f41d6540ee3p-61, 0x1.d75ff3e5fd4f4p-804,
     0x1.0485636b5b7e9p-815, 0.0, 0.0, 0.0, 0x1.dcfbde7e44551p-496,
     0x1.ae52cb17c3c94p-219, 0.0, 0x1.5fe564707f903p-266, 0x1.8c0c4c53dfe7p-979,
     0x1.e8f6137f7e206p-406, 0.0, 0x1.880a3e57ee7eep-664, 0x1.7e37680f1aea2p-987, 0.0,
     0x1.6f80a4be0d60dp-339, 0x1.d98f7133d1558p-122, 0x1.7b5ff0382c998p-426,
     0x1.2265022531153p-531, 0x1.0cc78155a37b4p-800, 0x1.cd8e12f3b5ffcp-324,
     0x1.e9585a6e1d418p-40, 0x1.14af61ed079e6p-348, 0.0, 0.0, 0x1.e997b3668768dp-821,
     0.0, 0.0, 0x1.39d1a38a4c9b1p-504, 0.0, 0.0, 0.0, 0x1.a88283be9df8ap-616, 0.0,
     0x1.31856fb64ce55p-756, 0x1.8681f66ce7eedp-912, 0.0, 0.0, 0x1.5a2e4fd8a98c3p-898,
     0.0, 0.0, 0.0, 0x1.8e422d9778d45p-699, 0x1.5b27c9e493637p-917, 0.0,
     0x1.b83dd08f0b824p-20, 0x1.1afc0f57da415p-966, 0.0, 0x1.da649c93061e6p-505, 0.0,
     0.0, 0.0, 0x1.50fd59767dc0fp-755, 0.0, 0.0, 0.0, 0.0, 0x1.a6e46a4652193p-417,
     0.0, 0x1.754eae5a7d25dp-404, 0.0, 0.0, 0x1.c72f97cbc3aedp-452, 0.0,
     0x1.65d917a25618p-861, 0.0, 0.0, 0x1.a16c33e8a0d23p-323, 0x1.cfe41078da378p-759,
     0x1.1bd91e7f028cbp-621, 0.0, 0x1.efe11a180e4dcp-348, 0x1.65c32e39caf48p-627,
     0x1.3231bdef63401p-449, 0x1.aceb18010fdd6p-157, 0x1.3ec22b36606eap-977, 0.0,
     0x1.95258ffc97bdap-992, 0x1.994d641cdc39dp-469, 0.0, 0.0, 0x1.ec42aa3e8312fp-659,
     0x1.12a963fdb2f7ap-179, 0.0, 0.0, 0x1.aa8d302627433p-960, 0x1.a1c55823cb0ddp-236,
     0x1.2c151c8c44a72p-481, 0.0, 0.0, 0x1.87ff84b1c5a78p-953, 0x1.3c78e74dd8149p-739,
     0x1.c59869f8ee3aap-372, 0.0, 0.0, 0.0, 0x1.40e0391aec477p-928, 0.0,
     0x1.150b00673f097p-457, 0.0, 0x1.7586abea9ef67p-815, 0x1.c8fc64f51d16dp-819, 0.0,
     0x1.5ef3027c6f0c1p-296, 0x1.766b9657c965cp-544, 0x1.05af5348b1ec5p-222, 0.0, 0.0,
     0x1.8f64346dd8869p-556, 0.0, 0x1.e0f56fdafe8bcp-39, 0.0, 0.0,
     0x1.81536ad386694p-411, 0x1.b5edafd3b4f62p-390, 0.0, 0.0, 0x1.cd9830d0614b8p-876,
     0.0, 0.0, 0x1.4aa2968de318bp-167, 0.0, 0x1.7524dcc951398p-298, 0.0,
     0x1.dfe442b440081p-359, 0x1.8b93b0b91025p-102, 0x1.d38e35cdde0cbp-473,
     0x1.b0b35ed90630bp-787, 0.0, 0.0, 0.0, 0x1.f6b3026ff502ep-803,
     0x1.c78a6303d25b5p-244, 0x1.0ccb5b48341cbp-38, 0.0, 0.0, 0.0,
     0x1.895d8758e25fbp-732, 0x1.2b00cba1bfc68p-597, 0.0, 0x1.c1dbe2a78dcdp-833,
     0x1.e89c29366c1f1p-1010, 0.0, 0x1.72b6d5a3a5652p-679, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fd6d2afb991bdp-740, 0.0, 0.0, 0.0, 0x1.b42d6019ab81fp-915, 0.0, 0.0,
     0.0, 0x1.c128797a98d51p-723, 0.0, 0x1.caabc1f7ae5p-804, 0.0,
     0x1.74bb1eba8e28dp-940, 0.0, 0x1.15b14172070adp-536, 0x1.7e4d21a21a436p-533,
     0x1.97a9617ca542fp-247, 0x1.0ca6d027e6668p-60, 0.0, 0x1.aca6892ece78ap-191, 0.0,
     0x1.41eba6ff3d1bap-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.773e4cd36fb5bp-673,
     0x1.b47c33f1145c6p-506, 0.0, 0x1.2d7a7306b49dep-673, 0x1.b37d55244066bp-240, 0.0,
     0x1.3d6965f0d6201p-342, 0x1.d53c61a4d50b4p-394, 0x1.c12307bce9667p-740,
     0x1.82715c7777781p-64, 0x1.b49860ab8894p-85, 0.0, 0x1.f2b95584b0339p-793,
     0x1.970f84323cedcp-901, 0.0, 0.0, 0x1.593f58541ea5ep-285, 0.0,
     0x1.af5ae8b149e6ep-172, 0x1.8ae1d9870061ep-52, 0x1.f48ca489d5a8dp-600, 0.0,
     0x1.10e4b0772217ep-469, 0.0, 0x1.c0c7f184e2b6p-69, 0.0, 0x1.294a9cbcf0459p-687,
     0x1.30be727ee53d2p-593, 0.0, 0x1.5bd6129c39309p-554, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bc6a6f9832442p-718, 0.0, 0x1.41f703ee15b56p-145, 0.0, 0.0,
     0x1.a0125b12c0061p-89, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7a4868b8bc34cp-604,
     0x1.3b88a911350aep-268, 0.0, 0.0, 0x1.04e5eb33dfdc9p-531, 0.0,
     0x1.e241173753221p-422
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
            tmp1 = Sleef_finz_log2d2_u35avx2128(tmp0);
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
    printf("Sleef_finz_log2d2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log2d2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
