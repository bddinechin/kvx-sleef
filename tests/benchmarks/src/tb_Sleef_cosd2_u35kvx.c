/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd2_u35kvx.c --function Sleef_cosd2_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.1a79476641878p-182, 0.0, 0.0, 0x1.052d5e18c9d7ap-675,
     0x1.12da33d395e5cp-220, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08e7790aef678p-836, 0.0,
     0.0, 0.0, 0.0, 0x1.5134aa81ad1cep-830, 0x1.1519379e87bf8p-35, 0.0,
     0x1.cfac8d1b0b224p-783, 0x1.84f5d3ad3000ap-451, 0.0, 0.0, 0x1.f117d1fb64f67p-969,
     0x1.e722be7e29dd9p-607, 0x1.cdfc5af743b29p-304, 0.0, 0x1.cd1419d353a8fp-786,
     0x1.c58eadaa02843p-693, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff04199860636p-821,
     0.0, 0.0, 0x1.1d84ff22a7988p-33, 0.0, 0x1.d4aaad7cf71a9p-167,
     0x1.4a9e973864cdfp-946, 0x1.6e3c087957af5p-744, 0.0, 0x1.7dc031f515e47p-198, 0.0,
     0.0, 0.0, 0x1.ca05b0f6ae024p-473, 0x1.b99931c00df84p-122, 0.0, 0.0,
     0x1.cd8a145291eabp-583, 0x1.9e857511566ddp-849, 0x1.9ec3c05075e45p-946, 0.0,
     0x1.d2780083f48c7p-456, 0x1.1e2012cdea37cp-136, 0.0, 0.0, 0x1.94e496d4813ap-36,
     0.0, 0x1.94ccb1f162e3bp-241, 0x1.e9f0a57329ab8p-684, 0x1.9a15b4dfc21e9p-402,
     0x1.584d42f8a9beep-883, 0.0, 0.0, 0.0, 0.0, 0x1.14cd2534bd6e2p-751,
     0x1.84faccfa36fb6p-499, 0.0, 0.0, 0x1.03aa3936918c6p-505, 0.0,
     0x1.37d74b601fcdap-915, 0x1.fbb8f01de5189p-463, 0x1.d2a6269e6bb1p-818,
     0x1.305c2b94c4f09p-242, 0x1.441e2a266c37fp-794, 0x1.726231c6154e2p-14,
     0x1.cabd27a45fe6bp-743, 0.0, 0x1.964ae7f52677ep-771, 0x1.5f71c0723b659p-421,
     0x1.76d56771a646fp-804, 0.0, 0x1.549897a67e3cdp-358, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.508ab2423f94fp-487, 0x1.473cb1643d1bfp-944, 0x1.157d52ea12dc7p-944, 0.0,
     0x1.09b6c1e490e23p-780, 0.0, 0x1.bbadc11edd9d9p-789, 0.0, 0.0, 0.0,
     0x1.37bd523c929bcp-619, 0.0, 0x1.12cf3434a21d3p-58, 0.0, 0.0, 0.0,
     0x1.50da5ae6a193cp-469, 0x1.28a1bf281dac5p-547, 0x1.ea2d4b81c4e4dp-119, 0.0,
     0x1.13d13b00760adp-847, 0x1.92c91bc215ae5p-825, 0x1.34dcd2936a3a5p-314, 0.0,
     0x1.96ee54ddb0c8ap-815, 0.0, 0.0, 0.0, 0x1.ef7d8e73da774p-807, 0.0, 0.0, 0.0,
     0.0, 0x1.aa8aa83e89eacp-356, 0x1.20981ef840218p-336, 0x1.eb74b5f087d65p-133,
     0x1.1355c4de9fb35p-10, 0.0, 0x1.e013a319680a6p-748, 0.0, 0.0, 0.0,
     0x1.78d52d5e2230bp-888, 0x1.915968eb82d51p-378, 0x1.9db5d1aa2d65bp-826,
     0x1.43b70873900d6p-611, 0x1.75c1eec1d1bb1p-644, 0x1.b34e5cf0af497p-469, 0.0,
     0x1.6ba5cfee4e582p-860, 0x1.af7b0b3db3c05p-686, 0.0, 0.0, 0x1.df2d528a832d7p-265,
     0.0, 0x1.94157a7cf0bbfp-184, 0.0, 0x1.a61b15223f8a2p-338, 0.0, 0.0,
     0x1.1b099cbdb6dddp-985, 0.0, 0.0, 0.0, 0x1.57994bfd3042cp-908,
     0x1.17a06eaaeab32p-254, 0.0, 0x1.ba210a4d063ddp-31, 0.0, 0x1.d077c926b1dd4p-200,
     0x1.79a9c3096dfd5p-391, 0.0, 0.0, 0.0, 0x1.83876faea262fp-718, 0.0, 0.0,
     0x1.875dbd8bc7531p-973, 0x1.8a0fcfd9208f5p-528, 0x1.4852f51a1a273p-633,
     0x1.ba30f1edfdd6bp-438, 0x1.766e8e2591bf5p-106, 0x1.5e6362de1c4ddp-190,
     0x1.a6325a39ff13cp-462, 0x1.493d7b86e0e9cp-181, 0x1.6ee9517945d11p-703, 0.0,
     0x1.85a59e36e3615p-255, 0x1.5804e97299b2ap-65, 0.0, 0x1.9f8fa73d28514p-625,
     0x1.072a22c617b45p-232, 0x1.d87f0866d0c6bp-606, 0x1.98b17264d33f6p-146, 0.0, 0.0,
     0.0, 0.0, 0x1.048fa1b8941aep-471, 0x1.2dd8b5560b94ap-999, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b32f741008193p-272, 0.0, 0.0,
     0x1.eaed003483f5ap-226, 0x1.558f099091405p-693, 0.0, 0.0, 0.0,
     0x1.824e31f48413p-981, 0.0, 0x1.241ee8ee32187p-1016, 0.0, 0x1.7b8d9f43f2ad5p-234,
     0.0, 0.0, 0.0, 0x1.7e50ecb29ea16p-391, 0.0, 0.0, 0.0, 0x1.d2f2f1cfdca38p-630,
     0x1.503e54f9a893ap-153, 0x1.850213ed6a791p-202, 0x1.8f8ba6a450a28p-907, 0.0,
     0x1.07d56302698bbp-262, 0x1.ec3677c324248p-559, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.25d6c70629664p-939, 0.0, 0.0, 0.0, 0x1.d214c8dedd58fp-210,
     0x1.ec1df79c19603p-901, 0x1.4522d43bb3b78p-327, 0.0, 0x1.e9b15028b881dp-64,
     0x1.8fbbcbd51b8fep-21, 0x1.27c2d034b5292p-439, 0x1.d445f21db30aep-222,
     0x1.1a39390fe3c7ap-80, 0x1.e4fe3a4d4e831p-53, 0.0, 0x1.0dc8d86c12426p-445,
     0x1.e7f0d414dcca1p-123, 0.0, 0x1.6392f9e3e5f66p-453, 0.0, 0x1.9b3bd90fd9418p-741,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ca78454da536p-525, 0x1.559b19755ebd6p-122, 0.0,
     0.0, 0.0, 0.0, 0x1.f7db27eb845f7p-304, 0x1p0, 0x1.47b0e9cfadbb4p-789,
     0x1.2fd7d28c6269bp-818, 0.0, 0.0, 0x1.707ad1c8fd838p-261, 0x1.621a1c9aa7798p-294,
     0.0, 0x1.25205dd18862dp-270, 0x1.289843b9f8fe8p-647, 0x1.d4f4a0f68af94p-222, 0.0,
     0x1.eb327a32781d9p-174, 0.0, 0.0, 0x1.510f04c6a3a6ep-281, 0x1.589a0deadcae9p-938,
     0.0, 0x1.7b17e95b8d4bcp-328, 0.0, 0x1.22a7b3244607bp-385, 0x1.ef76bd7f965adp-376,
     0.0, 0.0, 0x1.870118a42771p-811, 0x1.86ea776ae2aa1p-293, 0.0, 0.0,
     0x1.1bfca33b1e12dp-844, 0.0, 0x1.eef09f1aad481p-134, 0x1.b1799df3b35d2p-954,
     0x1.5467415e2a55dp-227, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff67bd9c7bd26p-527, 0.0,
     0x1.9dbadcb989f95p-925, 0.0, 0.0, 0x1.bbecc1c351d51p-114, 0.0, 0.0, 0.0,
     0x1.e4394cc85292p-148, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d75933ddcbc6p-818,
     0.0, 0.0, 0x1.705e8ddaa801dp-292, 0x1.1fac167765b0bp-572, 0.0, 0.0,
     0x1.0d4b1e4b9b31p-939, 0x1.9a5bfddc4b7a3p-615, 0x1.78b1b9bc91726p-432,
     0x1.6d6eb3d30aa87p-213, 0x1.deda52cf438b9p-485, 0x1.18ec6a24b01dfp-648, 0.0,
     0x1.bbd0035e33075p-777, 0.0, 0.0, 0x1.9b484b63b7f96p-3, 0x1.b841b7a4c03f7p-512,
     0.0, 0x1.8498b8df50fdcp-868, 0.0, 0.0, 0x1.ffd15dedbfaf5p-908, 0.0,
     0x1.89661b31f7efcp-23, 0x1.8c38a6ed0d61dp-377, 0x1.a8aa591a0708ep-139,
     0x1.910de49e0d7efp-734, 0x1.d0e5285914146p-166, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.695a84c1fe1d5p-317, 0.0, 0x1.fc8fd31aae804p-476, 0.0, 0.0, 0.0,
     0x1.fbf1e89279d3ep-742, 0.0, 0.0, 0.0, 0x1.ab6639772883fp-915, 0.0, 0.0, 0.0,
     0x1.6b971780273f6p-238, 0x1.f401193fcb57bp-838, 0.0, 0.0, 0.0, 0.0,
     0x1.78029d0ab64bp-648, 0.0, 0.0, 0x1.a8c0e2e2e006ep-24, 0x1.6126d77652fdcp-238,
     0.0, 0x1.4fe153b767cfcp-409, 0x1.58cdd8dbb21bcp-831, 0x1.8f66ab3a2db51p-813, 0.0,
     0.0, 0x1.65faf2185beeap-314, 0.0, 0x1.7ea4e8cdc0363p-432, 0x1.12b341f2b6cd2p-750,
     0.0, 0.0, 0.0, 0x1.387fd7a7cf517p-623, 0.0, 0x1.21196430e16bdp-1019,
     0x1.d896840ae8719p-248, 0.0, 0.0, 0.0, 0.0, 0x1.4178f76d100ecp-358, 0.0, 0.0,
     0.0, 0x1.2801ee4cba271p-714, 0x1.d6fd2affd5c63p-978, 0.0, 0.0, 0.0, 0.0,
     0x1.39c30ba5cbdd3p-665, 0.0, 0.0, 0.0, 0x1.789881f896cb6p-166, 0.0,
     0x1.775a2f563869bp-330, 0x1.64f053941fbc1p-853, 0.0, 0.0, 0x1.412c7034687c4p-173,
     0x1.95988fc545305p-253, 0.0, 0.0, 0x1.bc3f5232accd1p-408, 0x1.af45f5dd9557p-673,
     0.0, 0.0, 0.0, 0.0, 0x1.306554ead9abfp-207, 0x1.45bd255ecc28bp-419,
     0x1.2f6550922281p-493, 0.0, 0.0, 0x1.64d2740b7c90bp-925, 0x1.eb49c9b123349p-697,
     0.0, 0.0, 0x1.e1421081679e5p-785, 0.0, 0x1.7a6e082590514p-885, 0.0,
     0x1.b490bff704824p-845, 0.0, 0x1.543a5c07854fep-913, 0.0, 0x1.a1574f5cf270cp-590,
     0.0, 0x1.702c2682d4362p-392, 0.0, 0.0, 0x1.4cbde6535d055p-534, 0.0,
     0x1.2a2fc5178dbf5p-395, 0.0, 0.0, 0x1.2a5777ebd1e4ep-323, 0.0,
     0x1.a391063e9fc72p-457, 0x1.193c78dddfae4p-869, 0.0, 0.0, 0x1.f422a62caba72p-769,
     0.0, 0.0, 0x1.107c1cd4ceccfp-60, 0x1.454d6243ad16cp-942, 0x1.09a23d06f87bbp-746,
     0.0, 0x1.d90fb1937abdfp-742, 0x1.8c9b80d32d49bp-254, 0.0, 0.0,
     0x1.812b333964b99p-401, 0.0, 0.0, 0x1.82b475bba84c1p-581, 0.0, 0.0, 0.0,
     0x1.2fa94f0acce8ep-784, 0x1.2c4bfceb3dcf8p-409, 0.0, 0.0, 0.0,
     0x1.56ce617b8e776p-482, 0x1.3cc4328b1d3c7p-903, 0.0, 0x1.2805b5555f9e7p-696, 0.0,
     0.0, 0.0, 0.0, 0x1.61b861ec7b06dp-728, 0.0, 0.0, 0.0, 0x1.5eea2814298d9p-837,
     0.0, 0x1.03dfcd362b053p-1001, 0.0, 0.0, 0.0, 0x1.e8d4bb7492104p-249, 0.0,
     0x1.0e3a2acd3f5a6p-104, 0.0, 0x1.9dcd3a52ee9fp-125, 0x1.cfb7ac09a185ep-886, 0.0,
     0x1.c3792830db57dp-610, 0.0, 0x1.f1652dc9cc21cp-461, 0.0, 0x1.bfc3483f23b3ap-105,
     0.0, 0.0, 0.0, 0.0, 0x1.81385b19d1398p-54, 0.0, 0x1.39eaecb3ef2e6p-291,
     0x1.5d771ba9fa2cep-647, 0x1.deda578e497f7p-377, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4d29ff18a605bp-183, 0x1.6d64c23885975p-741, 0.0, 0.0, 0x1.75166be2bfd62p-987,
     0.0, 0.0, 0.0, 0x1p0, 0x1.761c880bf17c2p-996, 0.0, 0.0, 0x1.065e1f0364984p-988,
     0.0, 0x1.549a509b7422ep-680, 0.0, 0x1.90163f5ef5399p-800, 0.0,
     0x1.1179ea64b6da2p-249, 0.0, 0.0, 0x1.b1b73673e64cp-82, 0x1.0af963ac0248fp-178,
     0.0, 0x1.a3666dc5265cbp-122, 0x1.e7ee0b04affe5p-654, 0x1.9d0a3a8d6e001p-196, 0.0,
     0.0, 0.0, 0x1.28a1b007e0aeap-860, 0x1.60b7189a1cdf1p-465, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.56fe6cfc60d35p-252, 0.0, 0.0, 0x1.33ec87f4867f3p-395, 0.0,
     0x1.90607c6c7aebbp-827, 0.0, 0x1.4ffbcbda4d5cp-922, 0x1.b23a6511b2731p-591, 0.0,
     0.0, 0x1.f2609f9ff4e9p-963, 0.0, 0x1.59edeecb360a2p-845, 0.0, 0.0, 0.0, 0.0,
     0x1.85eec234c3c42p-746, 0x1.131bc1e220fbcp-156, 0x1.593843cd8aab6p-108, 0.0, 0.0,
     0x1.59ab6ebd3efp-923, 0.0, 0x1.22fd18f0a2cdfp-404, 0.0, 0x1.ec917c5187374p-738,
     0x1.0a3694a0f1e3cp-816, 0.0, 0x1.5555f5622dbbdp-566, 0.0, 0x1.1d955a3d7b383p-225,
     0.0, 0.0, 0.0, 0.0, 0x1.701882bfb303ep-927, 0x1.71d5f9aa9004p-872, 0.0,
     0x1.69839ac8b242cp-210, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.06d52af907093p-727,
     0.0, 0.0, 0x1.e916e7f556409p-676, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.310f0c19fcf6p-813, 0x1.086b257337c1bp-242, 0x1.13ead1553e1e6p-341,
     0x1.30d1c23d01fe9p-449, 0x1.9a46a126a73ecp-207, 0.0, 0.0, 0x1.17b60b425a27ap-452,
     0x1.ad3be4995bed6p-916, 0.0, 0x1.3bd75033e3331p-231, 0x1.3c69891ae96c7p-348, 0.0,
     0x1.f1a6550a6d45ep-686, 0.0, 0x1.a5fc5dc754f24p-322, 0x1.2709ed37a78ap-22,
     0x1.5be50147a866fp-1020, 0.0, 0.0, 0x1.63202c34ac98fp-509, 0.0, 0.0,
     0x1.9effa92927f9p-196, 0x1.4a1f8fb0377b7p-980, 0x1.a69533bda1cd3p-313,
     0x1.ccee19c1fef01p-234, 0.0, 0.0, 0x1.88aa8628dd467p-158, 0x1.924543130003p-1016,
     0x1.03d947239a72fp-326, 0x1.5d95146aad105p-572, 0.0, 0.0, 0.0, 0.0,
     0x1.cec0ccfd6a0ap-970, 0x1.dc1d7295bd146p-164, 0.0, 0x1.687688eaab2ecp-906, 0.0,
     0.0, 0.0, 0x1.5d8987e4ca3ecp-223, 0x1.9fe47aafb90b2p-161, 0.0, 0.0, 0.0,
     0x1.18bb2ba018eb7p-311, 0.0, 0x1.fe3114335d7e6p-101, 0x1.afe364ae04dd7p-672, 0.0,
     0.0, 0.0, 0x1.29fcfaec5b4ap-554, 0.0, 0.0, 0x1.4d3c4e3972e36p-790,
     0x1.43dae4be21802p-752, 0x1.6b1aced720222p-212, 0.0, 0x1.8f87e5d2b0f1fp-477,
     0x1.a0cf6e8a11a14p-246, 0x1.3673b6c313738p-852, 0.0, 0x1.4ce21cfa66561p-413, 0.0,
     0x1.6565b129a03a9p-403, 0x1.f08d4711c9e7ep-97, 0x1.bb324959ace9ep-445, 0.0,
     0x1.53f58ac8b95cep-833, 0.0, 0x1.5846e750b2bbbp-65, 0.0, 0x1.13e3b0987d1dep-381,
     0x1.2fb1f2846091ap-812, 0.0, 0.0, 0x1.6dcc862e37012p-783, 0x1.6bce91d27e8p-888,
     0x1.11c6c3acc67a5p-996, 0x1.5d20256c795f6p-839, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7be8c86eefdd2p-547, 0.0, 0.0, 0.0, 0.0, 0x1.931fe8d788778p-888, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.854c086268271p-621, 0.0, 0.0, 0.0, 0x1.05583274f776ap-28, 0.0,
     0.0, 0.0, 0x1.a72a027474f18p-274, 0.0, 0x1.9a75b6201e507p-642, 0.0, 0.0, 0.0,
     0x1.e0ccadacc41cdp-1020, 0.0, 0.0, 0.0, 0x1.807a7fb6fa916p-1013,
     0x1.080d2c57408d7p-40, 0.0, 0.0, 0.0, 0x1.163a082c00bdp-279,
     0x1.d490c76dd10f7p-949, 0.0, 0x1.4feb2fc1e7624p-140, 0.0, 0x1.35d296c42a287p-347,
     0x1.5b50c3492eab2p-391, 0x1.a99437f362cebp-841, 0x1.b10c423989fc4p-949,
     0x1.bdb3030fe1b66p-465, 0x1.6b30a821aaabfp-264, 0x1.9fe8eb6c75879p-303,
     0x1.3361d07121bcbp-985, 0x1.2f2707ca40ebep-145, 0x1.9c193a9ea8724p-69, 0.0,
     0x1.de8edf29e4fb4p-729, 0x1.a42279a32325ap-804, 0x1.cdae36da18b9p-474, 0.0,
     0x1.ba6d95f9ec054p-864, 0x1.60715b3972142p-596, 0.0, 0.0, 0x1.188a66ac4e5a3p-27,
     0x1.a457d89f68931p-792, 0x1.7bb31b98b3532p-1019, 0.0, 0.0, 0.0, 0.0,
     0x1.ee517b768c604p-867, 0x1.b610260f0104p-379, 0.0, 0x1.7a95998388efcp-956, 0.0,
     0x1.898bdd896342cp-130, 0.0, 0x1.0180705aa8037p-979, 0.0, 0.0,
     0x1.ea5ecaa79bfb5p-375, 0x1.e7c264a1d47f4p-815, 0x1.5bae2b2e8b958p-378,
     0x1.51efdd7f7eaf7p-289, 0.0, 0.0, 0.0, 0x1.5e92567af822fp-933,
     0x1.cbc2a13d793ep-887, 0x1.215190037d3dap-975, 0.0, 0x1.f457bdaf91208p-965,
     0x1.73cd2bdfb8528p-801, 0.0, 0x1.e4713a3045a63p-675, 0x1.4d5a61cdc4f4bp-28,
     0x1.21a416669f5a7p-251, 0x1.84d1c155e3f3ap-981, 0x1.2973da8cb89d5p-336,
     0x1.1924e1180465fp-557, 0x1.1c5b3707a7a85p-272, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.893fb77991176p-847, 0x1.d246389c282bcp-247, 0x1.800210c89fd66p-624, 0.0,
     0x1.66eb5abfcd8a9p-866, 0.0, 0x1.7f09468e22ffp-463, 0.0, 0x1.7998d92f8fd8bp-735,
     0.0, 0x1.3848df1d3bf34p-859, 0x1.119036c65d2f1p-689, 0x1.c7cdb99d997a4p-282,
     0x1.246dc375eb546p-140, 0x1.ff17bbabe65bfp-91, 0x1.fcd6bf944b654p-754,
     0x1.6055d5de93955p-524, 0.0, 0.0, 0x1.dbfae02e5e479p-504, 0.0,
     0x1.5a83bf83377f2p-550, 0.0, 0.0, 0x1.f00c2bd9eaf54p-710, 0x1.ed3550a896defp-23,
     0x1.6e685912039a2p-897, 0x1.72bde3cc72fc5p-254, 0.0, 0.0, 0.0, 0.0,
     0x1.90ce387d5919cp-58, 0x1.d4e5511f9ca61p-171, 0.0, 0x1.4be1bdc2bb3c8p-467,
     0x1.f435f0bfff02cp-789, 0x1.fdd70713d5ea8p-739, 0x1.adb51360f5131p-979, 0.0, 0.0,
     0x1.7e919706a9e03p-930, 0x1.6a13e1c9da557p-710, 0x1.311dfc55e3c2fp-195, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6f258e3a979cap-1012, 0x1.074703f5ef10dp-706, 0.0,
     0x1.d99ee989e1d1dp-915, 0x1.ec348b52cd2e3p-78, 0x1.1d353c3d34f6p-301,
     0x1.bf4181f94152fp-473, 0.0, 0.0, 0.0, 0x1.3dcc90f9e48c1p-217, 0.0, 0.0,
     0x1.209d73043ed31p-504, 0x1.bae81e0a263dp-526, 0x1.daf4fe21a9da1p-94, 0.0, 0.0,
     0.0, 0x1.5d10ceee82791p-980, 0.0, 0x1.a1bfea7d8d86bp-63, 0.0,
     0x1.2044933fb9b0fp-620, 0.0, 0x1.9c3557efd39f2p-310, 0.0, 0x1.3c2edfb56084dp-280,
     0x1.faebf630a9c02p-825, 0.0, 0.0, 0x1.a9917a27648c8p-298, 0.0,
     0x1.b1b6d8ecfdf42p-433, 0x1.93cab88cd6347p-618, 0x1.383843bac1db5p-485,
     0x1.dc4b9e9c26b46p-63, 0x1.a64c18f47952bp-557, 0x1.519410aa0a19ap-676,
     0x1.e897b87d95af7p-548, 0x1.f5f6642019871p-271, 0x1.0b6d92c82bb49p-18, 0.0,
     0x1.81240ffd32c7bp-108, 0.0, 0x1.4ad9acc1dfd9ap-741, 0.0, 0.0,
     0x1.6a9756aa28a72p-337, 0.0, 0x1.96e7e632caf4p-180, 0.0, 0.0,
     0x1.0843bd04729ffp-194, 0x1.33fb32d34d4dcp-847, 0x1.de5c5cbaf72c3p-724, 0.0, 0.0,
     0x1.3622b570989f7p-722, 0.0, 0x1.db86e03e9d0c7p-603, 0x1.5cc11b3a00711p-627, 0.0,
     0x1.e6fda6f685a23p-448, 0x1.f82efe0485b92p-152, 0x1.af0b4bfc2ac81p-241,
     0x1.b8d8d47e6a6a2p-560, 0x1.27bbea5d57761p-251, 0x1.fe69f5bfc3021p-827,
     0x1.5afa2781b0db3p-475, 0.0, 0x1.d08c16d3c58c2p-394, 0.0, 0x1.20102cf81b525p-438,
     0x1.def8074089069p-784, 0.0, 0x1.88d6cd391afeap-81, 0.0, 0x1.3bf463077ab06p-326,
     0x1.29dea77772a37p-812, 0.0, 0x1.23624774037ecp-659, 0x1.ae6ecfaa438f1p-154,
     0x1.370ae8f466ba8p-454, 0.0, 0x1.53aaea601cde7p-651, 0x1.43807c15cbbf5p-799, 0.0,
     0x1.2efd5a90d6288p-968, 0.0, 0.0, 0x1.7b982e3aac82dp-648, 0x1.fbd3cff8bbba5p-669,
     0.0, 0x1.fb37bd449e19fp-135, 0x1.8f8ae66668103p-637, 0x1.72dfc210b5ee8p-665, 0.0,
     0x1.4b29b8479da9bp-82, 0x1.0b4bf1da20d82p-516, 0.0, 0x1.3cae7a22f75bep-335,
     0x1.3576e7e9eaf1dp-971, 0.0, 0x1.328090ba6978bp-425, 0x1.99da3595600c9p-312, 0.0,
     0x1.0f429713187b9p-406, 0x1.af2013e00a1bp-171, 0x1.e81ce25bd98d9p-196,
     0x1.9ef5c30751f38p-49, 0.0, 0x1.2c27f9aade8abp-93, 0.0, 0.0, 0.0, 0.0,
     0x1.6be38bfded003p-581, 0x1.f83810bf7eaf4p-38, 0x1.dbb4d2a40992cp-941, 0.0, 0.0,
     0x1.5b34c0e266726p-231, 0.0, 0x1.08e2bd814656dp-428, 0x1.7fc80c6b06279p-201,
     0x1.8afe6ed9ee7c3p-346, 0.0, 0.0, 0x1.d93bdadbc34p-854, 0x1.0082a33804c8p-937,
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_cosd2_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_cosd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cosd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
