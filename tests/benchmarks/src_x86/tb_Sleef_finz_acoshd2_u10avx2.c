/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshd2_u10avx2128.c --function \
 *     Sleef_finz_acoshd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.d3cdbb287309dp-214, 0x1.bdc3681a7c154p-504, 0.0, 0.0,
     0x1.7f826d7286126p-799, 0.0, 0.0, 0x1.4a538196b7ed3p-211, 0x1.62a5c91eeeb65p-31,
     0.0, 0.0, 0x1.50758f7d0faccp-532, 0.0, 0x1.bc1dd0d95106dp-1015, 0.0,
     0x1.51b9971e162bfp-119, 0.0, 0x1.3b69d15fa73ddp-780, 0.0, 0.0, 0.0,
     0x1.1e56e218746cbp-634, 0.0, 0x1.1f622ef505edcp-576, 0x1.f796dad93f205p-332, 0.0,
     0x1.78eba7474cd95p-27, 0x1.ccd8137684b67p-943, 0x1.470194147b4ffp-141,
     0x1.f6799461d8197p-1015, 0.0, 0.0, 0x1.20190ff08dbe5p-865, 0.0, 0.0, 0.0,
     0x1.5daab725c1b84p-839, 0x1.d6d3f307b8655p-760, 0.0, 0x1.ccf20875e50bcp-475, 0.0,
     0x1.c440cb487345ap-755, 0.0, 0.0, 0x1.5a9a6be475776p-875, 0.0, 0.0,
     0x1.6d4f9aceb4f6cp-786, 0.0, 0.0, 0x1.b0eccf538d9p-620, 0.0,
     0x1.1bc087ea91c0dp-347, 0.0, 0x1.278d8444c06e7p-545, 0x1.a8683b1377846p-367,
     0x1.933d8993ea291p-328, 0x1.935c5f4e1aedcp-450, 0x1.3550b774b19a9p-1008, 0.0,
     0.0, 0.0, 0x1.93b730a70c0f3p-639, 0x1.61be0a8d546a4p-31, 0.0,
     0x1.02993454dc739p-683, 0.0, 0x1.85eec005b18c9p-111, 0.0, 0x1.9d9fd66bb8755p-256,
     0x1.8613e9942efdep-722, 0.0, 0.0, 0x1.3717a9a4511a6p-605, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e33a058c38883p-733, 0x1.782e428298bfdp-20, 0.0, 0x1.eb82c3c69f9cbp-486,
     0.0, 0.0, 0x1.80d0bcd54c2afp-758, 0.0, 0.0, 0x1.7a37ae5b23d36p-209,
     0x1.2f32ec8bf935fp-653, 0.0, 0.0, 0.0, 0x1.52ff279b66058p-470,
     0x1.85329e5c7a26ap-139, 0.0, 0.0, 0.0, 0.0, 0x1.669b83b156919p-769,
     0x1.d9a9c89723de6p-746, 0.0, 0.0, 0.0, 0.0, 0x1.6ce77f7b5c8e7p-257,
     0x1.4f2d21e74167ap-759, 0x1.251259a89d625p-1011, 0x1.16dbe4bb3d12ap-807,
     0x1.5a1e14bfa48a8p-480, 0.0, 0x1.a2acff436f9e7p-546, 0.0, 0x1.4c8066d689ef6p-722,
     0x1.47f9e606b4282p-136, 0x1.920635d5db215p-633, 0.0, 0.0, 0.0,
     0x1.e270816364991p-345, 0.0, 0x1.318d8f00cb68dp-936, 0.0, 0.0,
     0x1.15d8ab6ad1c33p-1010, 0.0, 0x1.590d457f7b11dp-585, 0x1.9dfc8cdfc4a81p-247,
     0x1.59f9a97166377p-682, 0.0, 0x1.e475029eae21p-874, 0.0, 0.0, 0.0, 0.0,
     0x1.e6ac16101beefp-332, 0x1.2765535d11324p-213, 0x1.ccaf73e224f49p-258,
     0x1.e3588f5c0a581p-562, 0.0, 0.0, 0x1.348d5773a4228p-656, 0.0,
     0x1.ebbdae717f2afp-381, 0x1.bad08cf5f44eap-808, 0.0, 0x1.c5b86f1f345acp-938,
     0x1.8122c3654d371p-605, 0.0, 0x1.487a19f0e59f2p-828, 0x1.94019db77473cp-360, 0.0,
     0x1.ac59efc705f1bp-915, 0x1.0a06d702c5274p-627, 0.0, 0x1.d34393fa3d05fp-834,
     0x1.17abb3d6af8cdp-939, 0x1.a3c66ecbd2a95p-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9988e92abd65dp-51, 0.0, 0.0, 0x1.cf54ffb05f707p-324, 0.0,
     0x1.59764a6df486fp-116, 0.0, 0x1.8e72a4e17115dp-599, 0x1.56d679dd13f56p-83,
     0x1.bcf8ac2e985ddp-317, 0.0, 0x1.ba06ec11114ecp-677, 0x1.9065dea43b567p-451, 0.0,
     0x1.d1ceb74416f11p-795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0295ffc579588p-362, 0x1.0d615ec9cb4b3p-213, 0.0,
     0x1.bc0e8447f2c96p-472, 0.0, 0.0, 0.0, 0x1.946a956a0b381p-628,
     0x1.bb10a4a70bf89p-66, 0.0, 0x1.698cd928f8feep-401, 0x1.65a37ff17b47bp-211, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9a30807873d96p-104, 0x1.45c98092397bap-179, 0.0, 0.0,
     0x1.5853bb5c873c4p-205, 0.0, 0x1.28006981e3ccp-862, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ec6ed3d9618d8p-596, 0x1.7e464481e6e0ep-630, 0.0, 0x1.113a7264ccc0ep-629,
     0x1.e3ba612b4cef6p-757, 0x1.97a97ee7113f3p-978, 0.0, 0.0, 0x1.a83538a2a2f94p-173,
     0x1.c9578a6db98bdp-635, 0.0, 0.0, 0.0, 0x1.71b55dee1c8bep-5,
     0x1.d4e05c176dcbap-811, 0.0, 0.0, 0x1.a6f28c83d256cp-408, 0.0, 0.0,
     0x1.8b235dd7074fep-42, 0.0, 0.0, 0x1.4c5a1b7df1344p-456, 0x1.be03a4143df53p-18,
     0x1.4b2f356169d6ap-525, 0x1.cbd4d0455ec8cp-212, 0x1.8a059872ec7c3p-502,
     0x1.39221fdea001p-185, 0x1.23215fe0dd217p-19, 0x1.b50f15ff6a25cp-962, 0.0, 0.0,
     0.0, 0x1.dc6ebb4d60e2p-291, 0x1.add9a1db18f2ap-1005, 0x1.697cd5d440b39p-326,
     0x1.aba74bd55cabfp-356, 0.0, 0.0, 0x1.23b57be939571p-101, 0.0,
     0x1.323258d2290cfp-532, 0.0, 0x1.31e615bfb36bfp-433, 0.0, 0.0, 0.0, 0.0,
     0x1.59d60fba15f83p-60, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52c3548c4982p-266,
     0x1.23eaf6db41827p-101, 0.0, 0.0, 0.0, 0.0, 0x1.2264e6d99292dp-624,
     0x1.c0fd332f9de1ap-935, 0x1.a4c13ec124f59p-771, 0.0, 0x1.11261ddf6bffp-248, 0.0,
     0x1.7a0806e1cc032p-872, 0x1.4b1403ecf7342p-998, 0x1.f85b282a73837p-927, 0.0, 0.0,
     0x1.bb5723262a709p-176, 0.0, 0x1.a2dfad015e39bp-713, 0x1.1433af77fe6ebp-415, 0.0,
     0x1.d7245dc155e75p-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.85cc11a25154dp-544, 0.0, 0x1.d6f1e20d8dd4ep-825, 0.0, 0x1.4ad0ed5eab227p-791,
     0.0, 0x1.7b2230a3c08f5p-974, 0x1.ae7a17f2b769p-246, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1253fd07f2adcp-787, 0.0, 0x1.0fa7519e4e46cp-1009, 0x1.69df0915125fp-806,
     0x1.9cc532efa36bfp-868, 0x1.5c66a20d06e98p-677, 0.0, 0x1.363892680b442p-741,
     0x1.8221be2d748cfp-806, 0x1.a9efe9e7487bap-657, 0.0, 0.0, 0x1.092fbcd116446p-222,
     0x1.fc14aa56ad67cp-900, 0x1.293802d41c46fp-644, 0x1.2e99d619d91efp-993,
     0x1.c800eaeb54de8p-665, 0x1.3618640c8003p-833, 0x1.411a63a2754e7p-614,
     0x1.2414ec83cf8fdp-613, 0.0, 0.0, 0x1.9c10a0ba940d6p-476, 0.0,
     0x1.81b50b10f0513p-713, 0.0, 0x1.6630b54776331p-141, 0x1.aabc6cb3470b1p-50, 0.0,
     0x1.b0d118873c281p-821, 0.0, 0x1.19d0c2fa9b5a5p-942, 0.0, 0.0, 0.0, 0.0,
     0x1.1dc51241c26bbp-30, 0x1.e9e8f1406cd2fp-814, 0x1.4763ca07c6227p-110, 0.0, 0.0,
     0x1.6ca9fd80241cdp-421, 0.0, 0x1.3b83f01500547p-342, 0x1.3c8bbead8fc3ap-730,
     0x1.23df020a4a0bep-242, 0.0, 0.0, 0x1.52643fef10d0dp-152, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7142b55514776p-264, 0.0, 0.0, 0x1.0dddb970b55dbp-78, 0.0,
     0x1.bfabdf1bcdc8ap-986, 0.0, 0x1.45a512e044e2p-276, 0x1.c4f3a28b5ae12p-788, 0.0,
     0.0, 0x1.70bb7156bc5d8p-984, 0x1.269ea18adab9bp-467, 0.0, 0.0,
     0x1.c8d48c22c3f4fp-438, 0.0, 0x1.888a375d9dfaep-560, 0.0, 0.0,
     0x1.dfa1e9834401cp-945, 0.0, 0.0, 0.0, 0x1.fa9ed0245c83cp-725, 0.0,
     0x1.c237de5534564p-624, 0x1.0ee9f4ce7b94ep-465, 0.0, 0x1.5fee7d58de9b8p-676,
     0x1.6ea636596b183p-653, 0.0, 0x1.0f102f4477c15p-871, 0.0, 0.0, 0.0, 0.0,
     0x1.24e2f67c4957cp-144, 0.0, 0x1.516f6524558e5p-628, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.89239a86a4867p-526, 0x1.f5dff5519ba92p-144, 0.0, 0x1.42d01d721061dp-528,
     0.0, 0x1.737a16bcb71bfp-1, 0.0, 0.0, 0.0, 0x1.8335da11a05c6p-968,
     0x1.a8779a28d756ap-223, 0x1.b93d8e7708be7p-342, 0.0, 0.0, 0x1.ed875715a4f17p-361,
     0x1.cf471e7913e74p-531, 0x1.e0a182788afedp-878, 0x1.ae95941321169p-943,
     0x1.f2374142c02cbp-675, 0.0, 0x1.9299be22d4fcfp-144, 0x1.1121b01915849p-523,
     0x1.c71a9f7c6c888p-877, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cebdb3855ea1bp-90,
     0x1.1f5c4c0779289p-845, 0.0, 0x1.ad690f2e4d1dep-33, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8fae23dcf5787p-514, 0.0, 0x1.7268fd7347ee4p-402, 0.0, 0.0,
     0x1.3abfd40de4f02p-380, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7e0ca567fc678p-401, 0.0,
     0.0, 0x1.db453b2c16f36p-519, 0x1.d897749bbd8dcp-881, 0.0, 0.0, 0.0, 0.0,
     0x1.0530798e3bfdp-646, 0.0, 0.0, 0x1.9ee2c56d10a08p-881, 0.0, 0.0,
     0x1.f349781fdee79p-775, 0.0, 0.0, 0x1.8b494a08b04e6p-959, 0.0,
     0x1.39508df392549p-308, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c489702da824p-690, 0.0, 0x1.0b037152b5782p-163, 0x1.16669038ba13fp-939,
     0x1.ed5f6d7a452e2p-1004, 0x1.4f2431ebbb5aep-973, 0.0, 0.0,
     0x1.f0e99fd2a7342p-353, 0.0, 0x1.6a7279527cb9p-712, 0x1.613d360ddef96p-460,
     0x1.80585ca2c256ap-206, 0.0, 0.0, 0.0, 0.0, 0x1.d4c7476b2bdb8p-988, 0.0, 0.0,
     0.0, 0x1.8f61da44602efp-252, 0x1.39ff2e52fdc41p-438, 0.0, 0.0, 0.0, 0.0,
     0x1.cbcd65f5c163ep-311, 0x1.1f15fc51c2f9cp-302, 0x1.60d9b7fd8c8d3p-484, 0.0, 0.0,
     0x1.073257314dba2p-596, 0x1.9af6eaa79d409p-661, 0x1.8b0f3e9258e6ep-568, 0.0,
     0x1.a95e9ea3cdc9ap-410, 0.0, 0x1.56a958b41a216p-469, 0x1.8bab1ca34f5aap-176,
     0x1.03e8c17a1689dp-765, 0.0, 0x1.8fda279e0b98fp-288, 0x1.c36bd7b7ef30fp-516, 0.0,
     0.0, 0x1.fdd5b99980c32p-976, 0x1.45b0ad125ed5dp-766, 0.0, 0x1.7ba975a43be14p-786,
     0.0, 0.0, 0x1.8135937a16ea9p-305, 0x1.c4b54100ff065p-771, 0.0, 0.0, 0.0, 0.0,
     0x1.dc7f845286bcap-538, 0x1.c2aa736913913p-418, 0x1.46f518301fec5p-647,
     0x1.a20b8ea66ed7cp-66, 0.0, 0x1.5eb56bc93d2fcp-866, 0x1.c169fec63121bp-1007, 0.0,
     0.0, 0x1.69b3c10ec9414p-463, 0.0, 0x1.1983ae87201f6p-623, 0x1.d104ea208fd53p-846,
     0.0, 0x1.663a8fa653233p-677, 0x1.19133b750500dp-427, 0x1.358c08b8cf7acp-537, 0.0,
     0x1.9c800d2df508cp-585, 0x1.e59888228e48dp-145, 0.0, 0x1.cf7b2fc9849b5p-663, 0.0,
     0.0, 0.0, 0.0, 0x1.685c69f7b70f1p-874, 0.0, 0x1.b8b81c73f7314p-37,
     0x1.d1b17df26a26fp-846, 0.0, 0x1.8b40a3a5d8149p-428, 0x1.57c0ad6ecac11p-352, 0.0,
     0x1.11ea1a8c18b31p-340, 0.0, 0x1.87bdfc54615fdp-362, 0x1.0dc47889cadp-214,
     0x1.89e6e91001e44p-621, 0.0, 0.0, 0.0, 0.0, 0x1.a753205ef9341p-655, 0.0,
     0x1.474d7005932eap-324, 0x1.b8413959f457bp-415, 0x1.6f4e7b82be58bp-73,
     0x1.969ed54d37595p-540, 0x1.4fd95fef63fd8p-175, 0x1.6cb91b5519d48p-1015, 0.0,
     0x1.60da48403be38p-113, 0x1.373e8337fb166p-35, 0x1.05e7d2b6c5be6p-759,
     0x1.a81e49b3b2bc9p-633, 0x1.9e334bed0ab5cp-631, 0x1.7b5e01af92554p-919, 0.0,
     0x1.80ff2ea30c48ep-875, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e81a457816883p-618,
     0x1.3fbe06cd86b72p-891, 0.0, 0.0, 0.0, 0x1.c36ff6b53034ep-847,
     0x1.efb48f3cd8bcbp-679, 0x1.463ddffc83486p-62, 0x1.287b49245d018p-635, 0.0, 0.0,
     0.0, 0.0, 0x1.1f7502e38ebb9p-439, 0.0, 0.0, 0x1.7f23c8099b4f4p-404,
     0x1.2417da1aa07adp-878, 0.0, 0x1.7e3537eb94658p-161, 0.0, 0.0, 0.0,
     0x1.aa17168c2e801p-629, 0x1.cd533a7a3fd0fp-417, 0.0, 0x1.480f88e91ba13p-151, 0.0,
     0.0, 0x1.6951fcac09aadp-357, 0.0, 0x1.322aa8f4795bcp-595, 0.0,
     0x1.3972296873346p-976, 0x1.f6eef4649e511p-7, 0x1.58b512af2cd0bp-92, 0.0, 0.0,
     0.0, 0x1.0970f8d353cf7p-236, 0x1.845c1f2aa4a43p-428, 0.0, 0x1.40b25781832f1p-705,
     0x1.93b47a8a89b81p-973, 0x1.bd65b4db215b4p-932, 0.0, 0x1.43ad465ef2dp-640,
     0x1.44b133b4b8333p-723, 0.0, 0x1.b0cfaa8e6aeaep-593, 0x1.964278ee3b40bp-494,
     0x1.a5ac3b5c3b2d8p-55, 0.0, 0x1.a2e3eba8ecfa5p-650, 0.0, 0x1.d0164762dff9dp-163,
     0x1.b9bbc0857da3dp-507, 0.0, 0x1.81e3c6beb1eebp-1007, 0.0,
     0x1.86ff57b496eb9p-876, 0x1.d92aef6efd61bp-16, 0.0, 0.0, 0.0,
     0x1.e30fcd20d20f2p-895, 0x1.718c216baf7e1p-115, 0.0, 0x1.a97725ed14b0cp-690, 0.0,
     0x1.e10505463e14cp-728, 0x1.baba9017830abp-95, 0.0, 0.0, 0x1.72b0ee76220a3p-59,
     0x1.9e33c6481573dp-997, 0x1.46d468574c43bp-572, 0.0, 0x1.5c88c032e2b71p-235, 0.0,
     0x1.38546af1818f7p-6, 0x1.33b8a4a3fdc3ap-273, 0x1.fc7e9df4887e5p-928, 0.0, 0.0,
     0x1.602dc674ab285p-241, 0.0, 0.0, 0x1.7e1c57ab759bfp-482, 0.0, 0.0,
     0x1.fffa91f370119p-622, 0.0, 0.0, 0.0, 0x1.c61a1b52c52ffp-458, 0.0,
     0x1.f1b70fab91dbap-130, 0.0, 0.0, 0.0, 0x1.7f0ffee88150ap-610,
     0x1.0fa9c653618f6p-817, 0.0, 0x1.b1ed0dc25965fp-565, 0x1.e5ee6a98f13a2p-634,
     0x1.8b93cc54d4213p-233, 0x1.2cee1bd412bdap-721, 0x1.2346df3ff339fp-137,
     0x1.d2ac9cdf86b17p-419, 0.0, 0x1.39b6abff1b693p-916, 0x1.6a13bf1502d71p-823,
     0x1.1e11fbfec9337p-34, 0x1.d900ed2db47dp-660, 0.0, 0.0, 0.0,
     0x1.0110c2f02271ap-962, 0.0, 0.0, 0x1.97776b42a4b08p-363, 0x1.dc6a98f63ddacp-218,
     0.0, 0x1.e8134647ae4b6p-787, 0.0, 0.0, 0.0, 0x1.f7fe2486051c9p-537,
     0x1.ee08eb33cb591p-521, 0x1.f333e9fdfaee6p-941, 0.0, 0.0, 0x1.0fcb9358947c4p-564,
     0x1.43c46c130df7ap-703, 0x1.53bc45f930665p-503, 0x1.e38afd38b3423p-773, 0.0, 0.0,
     0.0, 0.0, 0x1.177124e35f78fp-112, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6ce4a80d7e25p-321, 0.0, 0x1.359942bdb5936p-232,
     0x1.4987aef3bc0fp-1003, 0x1.50c66d9e6ce24p-126, 0.0, 0x1.9f29ef663c7b3p-194, 0.0,
     0x1.c0ca6a9952bb2p-530, 0x1.ee3b39da7ac31p-820, 0x1.a727bd19698c5p-503, 0.0,
     0x1.0e74e5773df09p-681, 0x1.817ca0524578dp-38, 0x1.442967f10a028p-353, 0.0,
     0x1.58e74e100e2acp-84, 0x1.e231b1c90a216p-924, 0x1.adc56e413cabdp-1022, 0.0,
     0x1.06fdb519d37c9p-208, 0x1.ea2a849abe9a5p-650, 0x1.0798dd077b7cep-670, 0.0, 0.0,
     0x1.f000319ae42e6p-305, 0x1.7f2764b7eea92p-200, 0.0, 0x1.fe61fcd561fd9p-649, 0.0,
     0.0, 0.0, 0x1.6a4a69d73ba53p-981, 0x1.2e11fd1e6e08dp-522, 0.0, 0.0,
     0x1.fed2f10799883p-605, 0.0, 0.0, 0.0, 0x1.ab3c6c278cf19p-972,
     0x1.a4cf2d9c0b4e4p-695, 0x1.45caeb7fb6bf1p-470, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dcdf3446fa765p-461, 0.0, 0x1.c5d0882faa9d4p-223, 0.0,
     0x1.c79a8cd87b544p-203, 0x1.1cf3d6e556925p-379, 0x1.2937e10212f6cp-964,
     0x1.f239dbd47707fp-968, 0.0, 0x1.b38bea3efbe1cp-551, 0x1.4dcf08cf4527p-708,
     0x1.ebff514fbbba6p-314, 0x1.76bd49eff4475p-673, 0x1.160a995e78275p-364, 0.0,
     0x1.e80dc0df2ec5cp-823, 0.0, 0.0, 0x1.d9ca05eeece0fp-957, 0.0, 0.0,
     0x1.cbabc3764e105p-294, 0.0, 0.0, 0x1.843739f75ef0ep-987, 0.0,
     0x1.62203dbcb5bf3p-14, 0x1.812e1c592d1e5p-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a86e10687e89p-633, 0x1.3e09f84b9cfb9p-551, 0.0, 0x1.4f518619c4927p-890,
     0x1.6fd4faa75cb4bp-597, 0x1.79506a4820c03p-329, 0x1.6e93c31898067p-460, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.31a2c8b795018p-781, 0.0, 0x1.921a2c2e54abep-674,
     0x1.47ace4dde3f3bp-118, 0x1.7e11e514fada6p-523, 0x1.e0e74b1a5eca7p-11,
     0x1.6f533b865268cp-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.79ad2192725cbp-464, 0.0,
     0.0, 0.0, 0.0, 0x1.6ac87ed4a2724p-756, 0x1.5d2de89b8b413p-753, 0.0, 0.0, 0.0,
     0x1.0cc7376451409p-224, 0x1.3a407bf6ce187p-334, 0.0, 0.0, 0.0,
     0x1.1535760812ed2p-601, 0x1.f20b7625457p-529, 0x1.04038c5b4618cp-427, 0.0,
     0x1.02e0c9e1ac256p-263, 0.0, 0x1.9b805befb779ep-706, 0.0, 0x1.bfadf9e6cd6c7p-101,
     0x1.8db67a3b3403p-209, 0.0, 0x1.335d0b31a9477p-675, 0x1.778a5ce72d86p-190,
     0x1.baeb2428fd643p-215, 0.0, 0x1.52d02806475d5p-563, 0x1.49567ed32dbecp-872,
     0x1.3f32fff70d8e3p-212, 0.0, 0.0, 0.0, 0.0, 0x1.3d3819a997fa4p-91,
     0x1.3e64c8a8403ffp-575, 0.0, 0x1.725db395de0a7p-165, 0x1.27eaa99fbe145p-222, 0.0,
     0x1.53db9562d5b66p-543, 0.0, 0x1.76f6bef2ed58fp-62, 0x1.b2426f3e68dc5p-46, 0.0,
     0.0, 0x1.7069d1235074ap-216, 0x1.beefd9366175fp-929, 0.0, 0x1.955aeb50a810dp-659,
     0.0, 0x1.7f8d4e45c7186p-590, 0.0, 0.0, 0.0, 0.0, 0x1.980954940ce58p-764,
     0x1.3ac7204180773p-49, 0.0, 0x1.78f1d4494a347p-490, 0.0, 0x1.5e7245e683d2fp-589,
     0x1.f6e807d69f7f4p-609, 0.0, 0.0, 0.0, 0x1.86bd7ba993676p-857, 0.0, 0.0, 0.0,
     0x1.696e0da900f11p-638, 0.0, 0x1.67f66a12421b7p-555, 0.0, 0x1.abec7b883ee1fp-522,
     0x1.d125a8bf09064p-160, 0x1.7d090ed76530bp-514, 0x1.3b02eda9bbc26p-118, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ed0371bf258bdp-829, 0.0, 0x1.a3c770ba3819dp-392,
     0x1.dcf96e58a9a59p-573, 0x1.16e7967aacdacp-171, 0.0, 0x1.fb6b0e29fcb74p-274,
     0x1.51f9ee368ac66p-611, 0x1.0f5a4a20f0c7cp-742, 0x1.d6117d38a39bcp-25,
     0x1.926e2bf94e5c6p-86, 0.0, 0x1.e80366c23cdfcp-796, 0.0, 0x1.66d0655edac98p-479,
     0x1.3dc1dba73cd44p-123, 0.0, 0x1.4496cf0eef1e4p-902, 0.0, 0.0,
     0x1.47d236ae8d983p-326, 0.0, 0x1.f331c42594b27p-906, 0.0, 0.0,
     0x1.ba672fb7279f6p-365, 0.0
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
            tmp1 = Sleef_finz_acoshd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_acoshd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_acoshd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
