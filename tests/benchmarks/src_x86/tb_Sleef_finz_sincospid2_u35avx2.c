/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid2_u35avx2128.c --function \
 *     Sleef_finz_sincospid2_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.c0891a5e45c1bp-706, 0x1.bb57925ee89f9p-204, 0.0, 0x1.e30e14cf17ccdp-47,
     0x1.1ba1b1357d9bap-977, 0x1.a6bc624da0dccp-560, 0x1.2a1932ee86539p-897,
     0x1.ac1d73091197fp-594, 0x1.f9f528d0713dbp-705, 0.0, 0x1.188b46573212ap-290, 0.0,
     0x1.01783f29badf3p-279, 0.0, 0x1.ac9e75eb6005ep-415, 0x1.212ada2d7edcbp-414,
     0x1.c0a932b8ad8c2p-552, 0.0, 0x1.47d9d97250564p-456, 0x1.884e707c5f1efp-728, 0.0,
     0.0, 0x1.11199fb95f9ecp-921, 0x1.e6c58599f2da1p-520, 0.0, 0.0, 0.0,
     0x1.8970d3f68191ep-59, 0.0, 0x1.66c3daee4ad13p-654, 0.0, 0x1.af2b467655ff4p-935,
     0.0, 0.0, 0.0, 0.0, 0x1.eadc2f06570b5p-123, 0.0, 0x1.4ced06c09383cp-702,
     0x1.8b9aae7621638p-585, 0.0, 0.0, 0x1.c1de53004d803p-1007,
     0x1.d328d112c0912p-754, 0x1.b811fb4c995ep-362, 0.0, 0x1.145f4b0c36b66p-966,
     0x1.0126663a2a176p-867, 0x1.d2a97f2ebb0ebp-33, 0.0, 0.0, 0x1.1f5d78f45fd55p-460,
     0x1.6cc51fc7245cap-86, 0.0, 0x1.4a715c469877fp-948, 0x1.a8087c92b5de3p-769,
     0x1.bb3deeba0d824p-828, 0.0, 0.0, 0.0, 0x1.a3df599dd6c3ap-259, 0.0, 0.0,
     0x1.66a5428884b74p-407, 0x1.5df2e8e99044p-936, 0.0, 0.0, 0x1.8078d3ce256b2p-140,
     0.0, 0x1.7284f73944439p-853, 0x1.63f7d7d59601dp-195, 0x1.1859157f1f058p-723,
     0x1.159ec1a4efa64p-997, 0.0, 0x1.6e3974036639ap-37, 0.0, 0.0,
     0x1.49bac5bb86bcap-721, 0.0, 0x1.83b1bf0e9e48bp-53, 0x1.fb77b5ad22e24p-615,
     0x1.93de80e9cab79p-1016, 0.0, 0x1.a5a3548df83fp-521, 0x1.f5ccf49fc1b48p-460, 0.0,
     0x1.6b2ecf34aa771p-230, 0x1.77fcb686cce58p-379, 0x1.ce485171be619p-99,
     0x1.2fc6f05b69a05p-116, 0x1.d46d66362cb43p-196, 0x1.bca03b9596d61p-1002, 0.0,
     0x1.cbb7a070203b9p-253, 0x1.aa884a9f4b227p-494, 0x1.fd9e32e0a4fb6p-712, 0.0, 0.0,
     0x1.4729a4e9c9c75p-256, 0x1.03afd333527f4p-339, 0x1.c7eebfe76f1dbp-881, 0.0,
     0x1.346eee32fbe62p-738, 0.0, 0.0, 0x1.e302fb1a6f93fp-162, 0x1.69c1fb3fba7cbp-507,
     0.0, 0.0, 0x1.f914d5c6c7794p-243, 0.0, 0.0, 0.0, 0x1.472c08890799fp-793, 0.0,
     0x1.2e5c648a6a3f2p-340, 0x1.5071bc5308efbp-934, 0x1.0904505c0c35bp-330, 0.0, 0.0,
     0.0, 0.0, 0x1.b49f8db8deff8p-870, 0x1.68aadcc66924bp-488, 0x1.2f3ac2950191bp-714,
     0.0, 0x1.b09e5f453c53ep-181, 0x1.d4b0e6a42e44p-633, 0x1.f916cd25254b7p-40,
     0x1.390274a1ef68p-676, 0x1.c0af7a0baecc1p-887, 0.0, 0x1.323812375bca4p-853,
     0x1.ae62901da0554p-767, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.727cec1929dadp-214,
     0x1.cfeb52638f76p-409, 0.0, 0x1.bac95b4dfc2dbp-248, 0.0, 0x1.abe29f4df259p-465,
     0.0, 0x1.723785da78155p-932, 0.0, 0x1.a2ee0978f4c0cp-974, 0x1.9402814ea2be6p-896,
     0x1.94719f7c6c914p-474, 0.0, 0.0, 0.0, 0x1.908db5b2db6b8p-478, 0.0,
     0x1.1fc80c01420bep-638, 0x1.dc75046aba3cap-397, 0x1.d74796d8d731ep-514, 0.0,
     0x1.3234bce580d04p-135, 0.0, 0.0, 0.0, 0x1.bd509b136beaap-15, 0.0,
     0x1.b8350d91055d1p-666, 0.0, 0x1.623eed019147fp-93, 0x1.f450da31824a7p-742,
     0x1.8173be2715c66p-626, 0.0, 0x1.c48ba00c46412p-766, 0x1.e26d493ec5414p-459,
     0x1.623a7625e7ddcp-625, 0.0, 0x1.c77a0607b56b6p-208, 0x1.d8823c5b11d55p-833,
     0x1.d008c2b58e64p-945, 0x1.b616c89fc0c0ap-660, 0x1.29cb193bc74d5p-603,
     0x1.3c339128599a3p-598, 0x1.19f570b9a2a88p-43, 0x1.abd72fac23c89p-152, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5f59dbd735b08p-578, 0.0, 0x1.1ad73ab5fb608p-962,
     0x1.9a8ddaf5c2671p-609, 0.0, 0x1.e3058e6e2bbd2p-1022, 0x1.2bef1b7df524dp-622,
     0x1.baf139a601ee7p-235, 0x1.e412d02cfe912p-141, 0x1.80c724180105dp-812, 0.0, 0.0,
     0x1.ef9e00316ba5fp-907, 0x1.e0680c8cf1251p-756, 0x1.fc920e9273b47p-238, 0.0, 0.0,
     0x1.c8cc8ef84140cp-446, 0.0, 0x1.cb6662f735653p-281, 0.0, 0x1.09738c818d58dp-202,
     0x1.33071af9c55fap-164, 0.0, 0.0, 0x1.4150a391bb6edp-456, 0.0,
     0x1.24b459dd22ce8p-610, 0x1.77f7f4c09106bp-1021, 0.0, 0.0, 0x1.61fde734f954dp-34,
     0x1.2b2532e952d42p-100, 0x1.908b37cabecdfp-775, 0.0, 0.0, 0x1.44621d8b1fb44p-984,
     0x1.7bab00d81f4b4p-445, 0x1.15b2c458ecacbp-328, 0x1.3e6bf23d626a9p-1,
     0x1.265cfef58b5a9p-823, 0x1.c24e87974d8dap-364, 0.0, 0x1.26c7892960292p-688,
     0x1.c41bd1984ca64p-501, 0.0, 0.0, 0x1.62e4fa5b29fefp-299, 0x1.e367783309c6bp-623,
     0.0, 0x1.511b22ef3e73bp-394, 0.0, 0x1.839cac0cf5497p-382, 0.0, 0.0, 0.0,
     0x1.b7da57af3d1c4p-197, 0.0, 0x1.79d326cd36901p-996, 0x1.573ee63c7f1f2p-442,
     0x1.0ce6c2cac966p-944, 0.0, 0x1.0488ae938ba81p-78, 0x1.86210f8fa0cp-586, 0.0,
     0x1.e20b03b70b82ap-110, 0.0, 0x1.c8bfec37b8ae7p-125, 0.0, 0x1.1ae7f3386b72bp-757,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3c2bc96171fc1p-530, 0x1.65c649c783421p-347, 0.0,
     0x1.d6ed6d0607b6fp-63, 0x1.0c3db61838a8bp-495, 0.0, 0x1.f0a8aede5bf3bp-388,
     0x1.3001d39ae8cbbp-673, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f25a13aad0f7bp-591, 0.0, 0.0, 0.0, 0x1.3a5d633b6065fp-498,
     0x1.5692123cd3facp-408, 0.0, 0x1.cdddc750c7e2cp-832, 0.0, 0.0, 0.0,
     0x1.debcde1633326p-91, 0.0, 0.0, 0x1.97a3df68c77fdp-735, 0.0,
     0x1.9f490074e9e96p-324, 0x1.9bc9bf42dab65p-94, 0.0, 0x1.58cc215a24e8p-997, 0.0,
     0x1.fe0590012c973p-583, 0x1.e762b4967e99dp-183, 0.0, 0.0, 0x1.140652a7374a6p-471,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e2ed143609bap-597, 0x1.5cd19995f675dp-245,
     0.0, 0.0, 0x1.ac5dac2f53fc4p-962, 0.0, 0x1.e77725f454256p-609, 0.0, 0.0,
     0x1.163865f9dadbdp-756, 0x1.9c05b127025c2p-962, 0.0, 0x1.23abb76b40386p-954, 0.0,
     0x1.9fc8636dbb74p-978, 0.0, 0.0, 0x1.4916c15a13434p-21, 0.0,
     0x1.e942bb6cdfb14p-204, 0.0, 0.0, 0x1.99c35056970f7p-522, 0.0, 0.0, 0.0,
     0x1.1f7416def0dcdp-824, 0.0, 0x1.287fe66c436dcp-414, 0.0, 0.0,
     0x1.2a9a1f3ea9b2p-357, 0x1.2e27042819bd8p-643, 0.0, 0x1.50ba7a5c05c66p-935,
     0x1.61c61ab2280a1p-751, 0.0, 0.0, 0.0, 0x1.e7ff7934347fcp-808,
     0x1.e9e022e6a6e37p-171, 0.0, 0.0, 0.0, 0.0, 0x1.ab9a1d4030dbap-280, 0.0, 0.0,
     0x1.8bea733034a77p-742, 0.0, 0x1.2aea64bfc1282p-251, 0x1.ccb0306004d6dp-507,
     0x1.dbf38141cc203p-919, 0x1.331b6f40edffcp-165, 0x1.8649b8badf8ecp-387,
     0x1.0a731cfc9af35p-485, 0.0, 0x1.d6ed0cfac5025p-876, 0x1.1cc9591ab9336p-560,
     0x1.43a5b5cb63a2cp-736, 0x1.379d7eed4fa0ep-690, 0x1.284afcd8f45ep-370,
     0x1.0b8040b2f46a1p-685, 0.0, 0x1.9b78a80eafb67p-89, 0x1.197b5460713f2p-241,
     0x1.66ab40ecf4db2p-295, 0.0, 0.0, 0x1.f5422f0d49df8p-584, 0x1.b2ee073eac021p-117,
     0.0, 0x1.68e24392846c1p-908, 0.0, 0.0, 0x1.286c61d33f74cp-762,
     0x1.8ad8a866b08a5p-574, 0x1.bf5784ef1bfb6p-724, 0x1.e2b6b6114a399p-1, 0.0,
     0x1.b80a8df5f2668p-992, 0x1.4a35735593d88p-637, 0x1.a9dfad56d0eefp-893,
     0x1.d9b4220196da2p-364, 0.0, 0.0, 0x1.cdb42fe8dc61ap-1004,
     0x1.4b94c941e8c1fp-995, 0x1.c3c504f9dc1d2p-50, 0x1.c210e10f4a2e4p-406, 0.0, 0.0,
     0x1.047bf1d6406eap-953, 0x1.258852e1e7f3p-697, 0x1.cccbd33ba58bcp-95, 0.0,
     0x1.d7be2bab66258p-491, 0x1.b1205f8910794p-735, 0.0, 0x1.c1cefaf064ac9p-594,
     0x1.742205d70325ep-730, 0x1.dee21e1d3cd7bp-247, 0.0, 0.0, 0x1.a22642fa81e7ap-160,
     0x1.a21c7332a3e18p-536, 0x1.3ea4488cd0513p-676, 0x1.5f7bddca58e44p-1008, 0.0,
     0.0, 0.0, 0x1.6feb8fe12ec24p-11, 0.0, 0x1.31b72da2396ccp-189,
     0x1.f4d6db8bddf33p-983, 0x1.48e5572d7377dp-143, 0x1.42b7fa26375cdp-136,
     0x1.2292030decf16p-347, 0x1.3b753cb0e7084p-138, 0x1.1e4fe1ba502bep-1020, 0.0,
     0.0, 0x1.834e290e69dd2p-888, 0x1.2718821c2b5a5p-286, 0x1.4d1ec305b16cdp-276,
     0x1.66aa58a604391p-375, 0.0, 0x1.89b26ccbd1c9bp-513, 0.0, 0.0,
     0x1.800f8b1b6644dp-115, 0.0, 0x1.cd2884cb8293cp-441, 0x1.5b51ae2ce7fb8p-384,
     0x1.7f80d690be9c6p-523, 0.0, 0x1.785111dadf1a4p-1002, 0.0, 0.0,
     0x1.44dfb697c7db8p-534, 0x1.69edc3fb19eb9p-603, 0x1.9c109fa91079p-245, 0.0, 0.0,
     0.0, 0x1.6544ec6768bc7p-612, 0.0, 0x1.0bdcde65a96c5p-468, 0x1.688643f7a8f64p-889,
     0x1.1729722cf3421p-931, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.642ca789f8d1dp-158, 0.0,
     0x1.92d794c63e721p-48, 0x1.3797e00e4f9cfp-238, 0x1.e13c047335fccp-699, 0.0, 0.0,
     0.0, 0x1.88c4473c00e84p-923, 0.0, 0x1.232d934d89679p-984, 0x1.cdb2f606863c6p-757,
     0.0, 0x1.563d2517cc39dp-689, 0.0, 0x1.3c5e91aaab768p-97, 0x1.50747889b8edfp-213,
     0.0, 0.0, 0x1.a75ab19b119d7p-122, 0.0, 0.0, 0x1.fe34ed674d2fcp-925,
     0x1.51bbeae7240b6p-361, 0x1.f784c6ae8ac5bp-952, 0.0, 0x1.defa9ba340b81p-657,
     0x1.d23a228f2cb57p-447, 0x1.a1261bda6a8ddp-866, 0x1.d7cff33e97ff2p-980, 0.0, 0.0,
     0.0, 0.0, 0x1.84e05227dff62p-663, 0.0, 0.0, 0.0, 0x1.00ac5c503bc5ep-581,
     0x1.a92a471c44312p-439, 0.0, 0x1.dc961925e9dd7p-251, 0.0, 0.0, 0.0,
     0x1.71ae560e86b9ep-193, 0x1.0c94623498effp-789, 0.0, 0.0, 0x1.efd4551a6a518p-622,
     0.0, 0x1.03acadf5e64d5p-791, 0.0, 0x1.a3a3bb9b24072p-878, 0.0, 0.0,
     0x1.0ac13bb3b6f4dp-286, 0x1.a71786a9e2b36p-415, 0x1.a5d6496668786p-623, 0.0,
     0x1.9c8f6c217ec6ep-374, 0.0, 0.0, 0.0, 0x1.376eeffc80402p-936,
     0x1.eafdfe438a348p-931, 0x1.7c5542a6d0f9ap-420, 0x1.30a8c738cd0fdp-970,
     0x1.25b88fdbf62e2p-908, 0x1.fbca70e3b6a64p-642, 0x1.b586ba31cc95ap-657, 0.0, 0.0,
     0.0, 0.0, 0x1.5c6a675adb417p-79, 0x1.0ec1400a6299fp-52, 0x1.01ef2e930d63ep-672,
     0x1.36fbad860e51cp-157, 0x1.be3c575c84f12p-378, 0.0, 0.0, 0x1.f572491420fa5p-511,
     0x1.560d2facb967fp-102, 0x1.31070e572329cp-168, 0x1.69ee8f26315cp-815, 0.0, 0.0,
     0.0, 0x1.ace4d852c206cp-538, 0x1.411f5844ea0f1p-321, 0x1.5593a2e3e1e2ap-444,
     0x1.928528d944cbdp-867, 0.0, 0x1.cab57ab36cb4cp-185, 0x1.4c0e9922ed8dbp-68,
     0x1.e25d6ef0acb49p-412, 0.0, 0x1.337f006efecc6p-491, 0x1.b5377192ab19fp-633, 0.0,
     0.0, 0x1.6ed14f49fe031p-645, 0.0, 0.0, 0.0, 0x1.8ff5e671103fbp-244,
     0x1.09c4e8a70d93fp-350, 0x1.12ff9ce382147p-153, 0.0, 0x1.8a7d3bf400702p-548,
     0x1.90460605b954dp-594, 0.0, 0.0, 0x1.9ca0e36e6ac6dp-539, 0.0,
     0x1.b3d7f75c22cedp-630, 0.0, 0.0, 0x1.57c03ca3ae56bp-811, 0x1.90e468d76944ap-534,
     0x1.d26067cd6e254p-1014, 0.0, 0.0, 0.0, 0.0, 0x1.4eee25f0031a4p-310,
     0x1.ad43a5ffa185cp-753, 0x1.4c1ee304b5536p-924, 0.0, 0.0, 0x1.10eb8580f5813p-892,
     0x1.98322cb6542d5p-700, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74d5f3e647915p-478, 0x1.e55dcd0912e3dp-868, 0.0, 0x1.3538ba77d850ap-118,
     0x1.3ea16bd747751p-508, 0.0, 0.0, 0.0, 0x1.012dab01c4fe3p-827,
     0x1.64032f02ef9e6p-653, 0x1.2e29ec0ac6adap-276, 0x1.df82f16e8a97ap-133,
     0x1.40825be33730ep-390, 0x1.a7ee916eb5c4p-158, 0x1.1bd0558d86896p-243, 0.0,
     0x1.85767485027bap-403, 0x1.a67650c15988ep-999, 0x1.c9acc2a67b5cp-392, 0.0, 0.0,
     0x1.75bd03bb5d416p-669, 0.0, 0.0, 0x1.567a68abff9f8p-108, 0x1.4c37eccc1a48fp-480,
     0.0, 0x1.034713145c26cp-203, 0x1.76eb20b4ccf1cp-913, 0.0, 0.0, 0.0,
     0x1.ef2027e7f673ap-499, 0x1.6565ab83c0d0fp-444, 0.0, 0.0, 0.0,
     0x1.17dea919f41b5p-448, 0.0, 0.0, 0x1.18d6a062a50c1p-283, 0.0,
     0x1.285f1eacf70f8p-989, 0.0, 0x1.cb6f6d4a153fap-128, 0.0, 0x1.9cbee90d075ddp-674,
     0x1.acc584973dd16p-27, 0x1.59e70d7d41e1ap-734, 0.0, 0x1.dc942984fb986p-684, 0.0,
     0.0, 0.0, 0x1.8238af3274a84p-58, 0.0, 0x1.d97c7499c150fp-714,
     0x1.bc305aa24cc94p-872, 0.0, 0.0, 0x1.c6c7ff5aea9c1p-610, 0.0, 0.0,
     0x1.e731fbc79463ep-250, 0.0, 0x1.cc018cb0db4ecp-33, 0.0, 0.0,
     0x1.cb059a3e3a1c4p-599, 0x1.2fcdfa7f9bbedp-695, 0.0, 0.0, 0x1.eef5fff42717bp-218,
     0.0, 0x1.21c834d15c91cp-445, 0x1.58e62969e224ap-865, 0x1.c55f9a5f3f7f6p-63, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8555af85c4c11p-118, 0.0, 0x1.9ff0e707887e1p-913,
     0x1.e7e736624545dp-712, 0.0, 0x1.c87ae72b1d38bp-839, 0x1.fb2409d750b4fp-224,
     0x1.70c5bf7ad9d36p-870, 0.0, 0.0, 0.0, 0x1.d88add1f1750cp-360, 0.0, 0.0, 0.0,
     0.0, 0x1.ca276ce6204a9p-6, 0x1.8f5b55d749188p-321, 0.0, 0x1.ed17ad46187abp-271,
     0x1.e69c5cd349aedp-277, 0.0, 0.0, 0x1.9ff29b9ef21dbp-44, 0.0,
     0x1.afa9473aaf904p-149, 0x1.7f97c70d5f299p-644, 0x1.e0b85dcc82c58p-227,
     0x1.ce71b67e9d63dp-58, 0.0, 0.0, 0.0, 0x1.1049c629c3262p-579,
     0x1.9496f1fc7ed46p-398, 0.0, 0.0, 0x1.dbf18021c2091p-96, 0x1.f450d109cf283p-559,
     0x1.e52a2c68f486dp-824, 0x1.5b9c1b7a1a3fap-204, 0x1.a976ae994b778p-464,
     0x1.afb9233dab6bap-968, 0x1.61f658c4daabbp-499, 0.0, 0.0, 0.0,
     0x1.5fa7bc6e8d2e4p-934, 0.0, 0x1.d23f87e079be5p-29, 0x1.30c6b5a6f8fbap-580, 0.0,
     0x1.bad3965db408ap-847, 0x1.dcf2a36206287p-964, 0.0, 0x1.fcdaef08dcbbdp-882, 0.0,
     0x1.bb5b53575ecf9p-996, 0.0, 0x1.d9414dad963d8p-258, 0x1.01c527fb3f81dp-671,
     0x1.118b9205c1e06p-694, 0.0, 0x1.6346c92a442b8p-805, 0.0, 0.0,
     0x1.29f9304c32ee7p-211, 0x1.2554f9c1d2b39p-748, 0x1.0b9ddb4c66692p-597, 0.0, 0.0,
     0x1.ed87b83eac874p-112, 0x1.05a355ce2bd79p-890, 0.0, 0x1.44e452881365ep-175,
     0x1.0cdbf5fd8ea23p-456, 0.0, 0x1.3d3b910c6a4cbp-246, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6c42b2dec0d3bp-233, 0.0, 0x1.b99d8c60671a9p-255, 0.0,
     0x1.4d381fd38045dp-611, 0x1.c3c56aa8bc7a7p-148, 0x1.98e42742bcc79p-97,
     0x1.33226f606dd12p-790, 0.0, 0x1.129aa0d494be9p-982, 0x1.5aecb77af8f51p-760,
     0x1.7165f1545719p-161, 0.0, 0x1.f3040f2e3e96cp-519, 0x1.ebadfcb52d46dp-545, 0.0,
     0x1.29113bd9db4dbp-974, 0x1.3a01fd97881ddp-309, 0x1.2a365e76ac6bfp-9,
     0x1.fc76798cda4c8p-404, 0.0, 0x1.ce0eb8c607bc6p-667, 0.0, 0.0, 0.0,
     0x1.74069da5546f8p-994, 0x1.aa0344ba1536dp-1011, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f2c53d4db106bp-549, 0x1.e982f20f1f6b3p-99, 0.0, 0x1.b573b2b1940a9p-330,
     0x1.82fa51acfe04fp-491, 0.0, 0.0, 0.0, 0x1.7522b4b638255p-576,
     0x1.36f8fb7154b74p-139, 0.0, 0.0, 0x1.7368e2ac6f8a4p-493, 0x1.ef0657daf20cap-699,
     0.0, 0.0, 0.0, 0x1.40f55ae46e3aep-74, 0.0, 0.0, 0.0, 0x1.3831bf4eb2a72p-701, 0.0,
     0x1.bdf2a527595b2p-542, 0x1.b2c8880c81666p-507, 0x1.5e9d41beea5fap-454,
     0x1.8f7cbb2037205p-37, 0.0, 0x1.3d0c4632be923p-203, 0x1.5448a78fcc167p-55, 0.0,
     0.0, 0x1.2e7a25073c871p-261, 0x1.62b8f3092df3cp-967, 0x1.85b6de78087f1p-473,
     0x1.cda857052a70bp-1015, 0x1.fb9afdbaa9dd7p-112, 0.0, 0.0,
     0x1.7f92f5284dffdp-453, 0x1.eef996106f568p-750, 0x1.cf033c9196a9ap-172,
     0x1.addcf32ed9b65p-966, 0.0, 0.0, 0x1.3fdc230705f8cp-52, 0x1.cc61ee79a5b16p-405,
     0.0, 0x1.84a93a49a5fa7p-97, 0.0, 0x1.66715b3691a8bp-180, 0.0,
     0x1.fc8e3aced9287p-704, 0.0, 0x1.e3848d78c8bcbp-860, 0x1.6f97a46619edbp-332,
     0x1.22a1db3f1a34bp-541, 0.0, 0.0, 0.0, 0.0, 0x1.d6a93b4b4a359p-302, 0.0, 0.0,
     0x1.acba59139a2ddp-601, 0.0, 0.0, 0x1.ebaaad8c94888p-373, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.674eb8cd727aap-981, 0.0, 0.0, 0x1.cc1a8059386b4p-586,
     0x1.e843ee1f87988p-328, 0x1.253252b41d781p-942, 0x1.ba1fcd4b16fa1p-875, 0.0,
     0x1.566fb406c2ddbp-353, 0.0, 0x1.21422471b08cfp-450, 0x1.c3fd04b530d9fp-432,
     0x1.e203b33eecb32p-695, 0.0, 0.0, 0x1.9f046fe0b7683p-289, 0x1.b0e2794f1b179p-88,
     0.0, 0x1.0474db8c1fbbp-27, 0.0, 0x1.e9bb191fbb67dp-642, 0x1.fc7ee6f6cfa9p-718,
     0.0, 0x1.1e99e063e74e3p-368, 0.0, 0x1.648ee29a7911ap-52, 0x1.6b5ebb3aaf03cp-650,
     0.0, 0.0, 0x1.6250bda6a4e37p-357, 0x1.fc4f9483af387p-379, 0.0,
     0x1.9f2e6463fd4e9p-119, 0x1.7c6cafbf508b6p-820, 0x1.c0953ad9d7c42p-993,
     0x1.22a2c78d97de1p-26, 0x1.ed83943ac5a3cp-215, 0x1.865b2c4015718p-252, 0.0, 0.0,
     0x1.83407f49bf211p-288, 0.0, 0x1.fc8dc8eaea6f7p-17, 0x1.b7998e2caeabfp-856,
     0x1.6093ef2fd7907p-829, 0.0, 0.0, 0x1.ed69f6f5e97bep-178, 0x1.ab486ab798e5dp-443,
     0x1.7941f15f9a371p-934, 0.0, 0x1.8aa6ef71a3a3p-462, 0.0, 0x1.117211dde8d2dp-993,
     0.0, 0x1.3ef4a84f403b2p-274, 0.0, 0x1.c38ea100837ecp-64, 0x1.925d244d77386p-44,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f8506d07fbd9p-1022, 0.0, 0x1.bb0b8710f8638p-999,
     0.0, 0.0, 0.0, 0.0, 0x1.33e4c29731ae3p-679, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.636964b25339bp-9, 0x1.13eac42af1d2fp-481, 0x1.ca9e1f7dfe0fp-64,
     0x1.8b5207c84358fp-809, 0.0, 0x1.b66658d744b84p-861, 0.0, 0x1.3d8e389b1fb06p-956,
     0x1.8f7257b95efbap-671, 0x1.21d16a7e1d70ap-171, 0x1.c13baa4f1d90ep-223, 0.0, 0.0,
     0x1.996416a9c8d46p-283, 0x1.00c02db732cddp-679, 0.0, 0.0, 0x1.4b673fbc651bap-133,
     0x1.66e378a3b3692p-517, 0.0, 0x1.f6b4a800905ffp-74, 0.0, 0x1.018401c9d997fp-559,
     0.0, 0x1.2ca0cf1c1c05ep-809, 0x1.01137d19a853fp-165, 0.0, 0x1.3c744cc2121fbp-518,
     0.0, 0.0, 0x1.6d20125a0361p-959, 0x1.58e81a8d9b273p-355, 0.0, 0.0,
     0x1.f3e60f9dee14ep-589, 0.0, 0.0, 0x1.81a5615cd0bf3p-379, 0.0, 0.0,
     0x1.d4bc17cb6d0f3p-25
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
            tmp1 = Sleef_finz_sincospid2_u35avx2128(tmp0);
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
    printf("Sleef_finz_sincospid2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincospid2_u35avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
