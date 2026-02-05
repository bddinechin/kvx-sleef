/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd2_u10avx2128.c --function \
 *     Sleef_finz_sinhd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.518922739ef6ap-959, 0.0, 0x1.726f3d19482d1p-851, 0.0, 0.0,
     0x1.71275284f77f9p-186, 0.0, 0.0, 0x1.2d4e2ae0a7b0dp-863, 0.0,
     0x1.bc7622172e023p-706, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c3c3923e882d4p-123, 0.0,
     0x1.ae5775465c317p-288, 0x1.dd9493e39f345p-242, 0.0, 0x1.0507ae3797641p-49, 0.0,
     0x1.774e4f1c37709p-584, 0x1.9f77bfb717fc1p-292, 0.0, 0.0, 0x1.7a1d9034705cfp-234,
     0x1.0ae6246b5918bp-340, 0.0, 0.0, 0x1.b4bf6c5abc015p-420, 0.0, 0.0, 0.0,
     0x1.ece74fcb3ae4bp-992, 0x1.0f42e4aa2aeb1p-25, 0.0, 0x1.081972c17135bp-336, 0.0,
     0x1.0498bd676f55p-204, 0.0, 0x1.0f6dd6fe9135cp-963, 0x1.c7589a8d3407dp-69,
     0x1.813302f60671fp-792, 0.0, 0x1.2d0100d0a9a0ap-385, 0.0, 0x1.d29a20e99ba4bp-758,
     0.0, 0.0, 0x1.2d0651f3e063bp-829, 0x1.e16ddf3a231ebp-498, 0x1.460a9ff07e385p-698,
     0x1.34fffda46881bp-324, 0x1.c1444956a29b1p-137, 0x1.09fd8cf87b8d9p-267,
     0x1.55389a4ba4831p-405, 0.0, 0.0, 0.0, 0x1.ac68cb961ed98p-832, 0.0, 0.0, 0.0,
     0x1.1769b799935ffp-372, 0x1.eca07408ede09p-243, 0.0, 0.0, 0x1.7c700621c43cp-701,
     0.0, 0.0, 0.0, 0x1.182700468faf1p-987, 0x1.2d507ccf5ce98p-352,
     0x1.61ab8f8e7118p-175, 0.0, 0x1.7fb729db0347cp-346, 0.0, 0.0,
     0x1.d44ddd91ed76dp-628, 0.0, 0.0, 0x1.3de9b6b363df1p-18, 0.0,
     0x1.543d9675f213bp-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a51b8e0d4e76p-772,
     0x1.c9fc5a3bb803ap-720, 0.0, 0x1.5ee7ebb8f9c3dp-801, 0x1.27a734cdfc87cp-682,
     0x1.aa9c5746235aap-186, 0.0, 0.0, 0x1.596edbb95b92ap-601, 0.0,
     0x1.2be48ba44a2bcp-14, 0.0, 0x1.e065c8a4e8819p-213, 0x1.7938a8bf20617p-274,
     0x1.622af393dbd9p-607, 0.0, 0x1.b3d37cdb02e28p-318, 0.0, 0.0, 0.0,
     0x1.10a205832f8a9p-50, 0.0, 0.0, 0x1.9b8e3bf81775p-897, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f2cabf958ae0ep-682, 0x1.29ce9d86e798p-594, 0x1.0828d98fe81d5p-721, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e56497c04b61cp-315, 0.0,
     0x1.c59c83b81bb7fp-539, 0x1.6d8eb5c2fc872p-431, 0.0, 0.0, 0x1.30eb8a0658151p-722,
     0.0, 0x1.6b21b632b0e21p-579, 0x1.622d79b3a2d05p-636, 0x1.e95b8f601ccddp-222,
     0x1.cce12b0428645p-788, 0x1.6ecdac813c48cp-91, 0.0, 0x1.1a64b732f3fb4p-863, 0.0,
     0x1.ab6d822cdc072p-820, 0x1.a058d92acae6bp-671, 0.0, 0.0, 0.0,
     0x1.6ab0f921699a1p-462, 0x1.e31444874cd5p-696, 0x1.097521bfe98d3p-321,
     0x1.45dc007f51217p-591, 0x1.25bba748f1cd5p-514, 0x1.8ff43022d5094p-225, 0.0,
     0x1.bc5975a50d854p-743, 0x1.ca66d031281edp-544, 0x1.29b9a9343bbdbp-54, 0.0, 0.0,
     0x1.5daa7f01da473p-704, 0x1.6836b81086a76p-378, 0.0, 0.0, 0.0, 0.0,
     0x1.74d0c8754251ep-831, 0.0, 0x1.8f1db6a70f721p-264, 0x1.cdd7620162c2fp-697, 0.0,
     0x1.f7272421bbd17p-402, 0x1.cd9c66f8a700dp-246, 0x1.f8739ec05b46ep-742, 0.0, 0.0,
     0x1.e41faf239db22p-82, 0.0, 0.0, 0.0, 0x1.74dd6f48d92d9p-743, 0.0,
     0x1.5a0c217a52354p-627, 0.0, 0x1.ad45380cff0b2p-822, 0.0, 0x1.79ef1f23e983fp-227,
     0.0, 0x1.575ebce54f169p-354, 0x1.bf509c4de45dcp-469, 0x1.814819c53717ep-11, 0.0,
     0.0, 0.0, 0x1.9d460c5860738p-856, 0x1.7c5892c0b1e91p-1010, 0.0, 0.0,
     0x1.95a3273d3d6b6p-627, 0.0, 0x1.85ce6ed8520c8p-968, 0.0, 0x1.fed7312335ddbp-310,
     0.0, 0.0, 0x1.0be49ca06be95p-57, 0x1.7af99fe8d3c9cp-1003, 0.0, 0.0,
     0x1.5c0c13c6a54bbp-427, 0x1.c872e431cf22p-914, 0x1.1dd9de3fec347p-110,
     0x1.406080268c2b7p-890, 0.0, 0x1.7cead2534df52p-725, 0.0, 0x1.96ec30e80d8a3p-446,
     0.0, 0x1.653bb9cf8e78p-589, 0.0, 0.0, 0.0, 0.0, 0x1.f429cc27d2647p-873, 0.0,
     0x1.94aba74cd8ff6p-268, 0x1.c420617e62f81p-331, 0.0, 0x1.c9cc8e47bd57bp-203,
     0x1.25ea222fd0995p-775, 0x1.c3b3060d7dc88p-478, 0x1.b98aa3d2aab1bp-35, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.78f854a178e82p-444, 0x1.26874422ba087p-467,
     0x1.5b71f5824ff8fp-803, 0.0, 0.0, 0x1.63149b1a4b3e1p-449, 0.0,
     0x1.0c2993f72e1a9p-952, 0x1.30d335de6db33p-349, 0x1.78168cd35892dp-600,
     0x1.92fe697844501p-814, 0x1.ce92feee4fda7p-107, 0.0, 0x1.70b3fa9b94667p-357,
     0x1.c720299d45885p-936, 0.0, 0.0, 0.0, 0x1.aec19f03a1b6fp-103, 0.0, 0.0, 0.0,
     0x1.bd0ff29966dccp-3, 0.0, 0x1.78dd6e840b599p-32, 0.0, 0.0, 0.0,
     0x1.565f0de182d16p-124, 0.0, 0.0, 0.0, 0.0, 0x1.943c589e66058p-743, 0.0,
     0x1.43a30006558fp-729, 0x1.b937a18f36accp-811, 0x1.b4e2d68bbb396p-619,
     0x1.bc5b7d1e53c96p-409, 0x1.84c54dc0d8b8p-344, 0x1.cdfa7861886fap-837, 0.0, 0.0,
     0.0, 0.0, 0x1.3d7b06bc31c6fp-997, 0x1.610abd395d6abp-192, 0.0,
     0x1.809ddcfdc8df9p-569, 0x1.207481a8c9696p-49, 0x1.acaf8da1e4053p-630,
     0x1.317f37ddc3494p-411, 0x1.79020fb326849p-676, 0x1.b33b225f56b61p-696, 0.0, 0.0,
     0.0, 0.0, 0x1.bf1eee79bc658p-490, 0x1.a0ec7d75dfd09p-10, 0x1.92736f6d710b3p-830,
     0x1.1a7d20f7e561bp-436, 0.0, 0.0, 0x1.15bbe919ca188p-466, 0.0, 0.0,
     0x1.7b2e319ddb776p-627, 0.0, 0.0, 0x1.4e17ad01470c4p-876, 0.0, 0.0,
     0x1.3b3b3e36648e4p-815, 0x1.114ec05f2aa8dp-472, 0x1.e02a3854b3402p-634, 0.0,
     0x1.92ba95ad85a69p-916, 0.0, 0x1.c93f28329e7bcp-678, 0.0, 0x1.4b93fa4ca8312p-960,
     0.0, 0x1.77fcf1df50b1bp-550, 0x1.830004bc7e599p-543, 0x1.e687319a0908bp-319,
     0x1.01eaf31c174cep-490, 0.0, 0x1.6150930e526f8p-742, 0x1.0a63bf8958856p-673,
     0x1.1a955fbb61874p-325, 0.0, 0x1.859d90c1b74a6p-306, 0x1.01f36115a3fdap-588, 0.0,
     0x1.af00a73ce8fffp-713, 0x1.80a49646cbfbap-619, 0.0, 0x1.e6d4ff8ace2f1p-168, 0.0,
     0x1.c45778d00b50fp-699, 0.0, 0x1.c35d2fc3175dcp-878, 0x1.9e232bcb32c5bp-147,
     0x1.83f004b071a16p-50, 0x1.76f8d117720afp-957, 0.0, 0.0, 0x1.67a5988bad0fap-616,
     0.0, 0.0, 0.0, 0x1.4edce939f8324p-351, 0.0, 0x1.b35eeaebfd4f2p-485, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e4ac4c8f08ad9p-543, 0x1.125cec680f60ap-794,
     0x1.a1585a4d63eabp-224, 0.0, 0.0, 0.0, 0.0, 0x1.dec1d4dcc48bfp-654,
     0x1.82892d5f98319p-342, 0x1.f54804adfe1dfp-447, 0.0, 0x1.5f1bcb71dba4p-241, 0.0,
     0.0, 0x1.23f59e423509p-249, 0.0, 0x1.4c98e5c0fe47cp-546, 0x1.59fbeb042d13p-306,
     0x1.47601d85f80bap-322, 0x1.b0cf48a85145cp-458, 0x1.75cfaf2a2b28ep-91,
     0x1.9b086b6f32e38p-803, 0x1.11e8148822223p-589, 0x1.d010e05fc320cp-917,
     0x1.27edad7e732dep-477, 0x1.6854f6b644e13p-732, 0.0, 0x1.a3d61c4f099ecp-254,
     0x1.660eb1574d6b9p-4, 0.0, 0.0, 0.0, 0x1.44e91ef7b2f2ap-452, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.58d58b61f4ff7p-239, 0x1.f62651990ec72p-907, 0.0,
     0x1.d0e0473ca16a6p-283, 0.0, 0x1.669c310971accp-383, 0.0, 0x1.001eba6a97bd4p-705,
     0.0, 0x1.363f899e6b682p-943, 0x1.56d380be2fc0ep-1014, 0.0, 0.0, 0.0,
     0x1.22877acbc38d9p-744, 0.0, 0.0, 0x1.812e719ca6384p-755, 0x1.4641f2597ce31p-200,
     0.0, 0x1.b816f405bbd4p-853, 0x1.69de8f44bbe18p-448, 0.0, 0.0,
     0x1.85a42a250c424p-727, 0.0, 0.0, 0x1.66038ccd90e7fp-715, 0x1.e9933008dd075p-389,
     0.0, 0x1.7d3cace8bca5ep-643, 0x1.7fef1b119057cp-476, 0x1.c8616d211a0fep-807,
     0x1.faa6a756e066ep-206, 0.0, 0.0, 0.0, 0.0, 0x1.359c05943445bp-736, 0.0,
     0x1.ac106b9f2fca2p-906, 0x1.24f447208373p-938, 0.0, 0.0, 0.0, 0.0,
     0x1.9b2c96fc606fep-542, 0x1.ef8e60ba12f1p-749, 0.0, 0.0, 0.0,
     0x1.9b2e02794286dp-591, 0x1.be18ff242a4a3p-807, 0.0, 0x1.91bc75be1c062p-692, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cbc96f4e2f9a3p-486, 0.0, 0.0, 0.0,
     0x1.4e0b90659cf16p-529, 0x1.249e487356f1bp-982, 0.0, 0.0, 0.0, 0.0,
     0x1.790d1659f46f6p-686, 0.0, 0.0, 0.0, 0x1.28b74d11e4e55p-581,
     0x1.04f2aa46f5d9ap-864, 0x1.aa9530dc2513cp-261, 0x1.b6a097256629dp-114,
     0x1.b3c2236981631p-322, 0.0, 0.0, 0x1.60d9e0128f6c1p-806, 0.0, 0.0,
     0x1.ee74f66db100dp-891, 0x1.766c3396a8266p-384, 0.0, 0x1.e4b5af4802e3p-309, 0.0,
     0x1.faed3826e7497p-404, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ab4f814fada7p-382,
     0x1.0ad869becd73p-377, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6ddb7de91329p-452,
     0x1.7622e51306cap-119, 0.0, 0.0, 0x1.e34e4695c9befp-311, 0.0,
     0x1.c9ffac5ff97f7p-429, 0.0, 0.0, 0x1.71ff3be5fefb5p-923, 0x1.9d8132e42f852p-399,
     0.0, 0x1.159d903a407c6p-476, 0.0, 0x1.63b260cd8422p-75, 0.0,
     0x1.0a4ea8246d575p-904, 0.0, 0.0, 0x1.eb7df7fd2a932p-676, 0.0,
     0x1.ed30725a08019p-345, 0x1.60810f7926b2ap-945, 0x1.dde85f4b516c6p-871, 0.0, 0.0,
     0x1.7369881bd621cp-932, 0x1.8324b2fedbaf6p-660, 0.0, 0x1.8ade1a6b1411ep-383, 0.0,
     0.0, 0x1.79f179f9066d9p-664, 0x1.1c09b8f991047p-207, 0.0, 0x1.f041fa32bf2cp-929,
     0x1.10a0780d1efa7p-916, 0x1.52ec36a532c8bp-438, 0x1.c8d3fcea25bbdp-826,
     0x1.d862f947c0686p-281, 0.0, 0x1.9ff2cfccb7b08p-275, 0.0, 0x1.73958cf569cb9p-952,
     0.0, 0x1.704c9284b0893p-14, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48a2721d20fb8p-401, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9693624f7bbdp-699, 0.0, 0.0, 0x1.8acc1f1f847acp-662, 0.0,
     0.0, 0.0, 0.0, 0x1.864f6fb44bf0ep-710, 0x1.376c24dc8bbe5p-876,
     0x1.ed5025e1de8b5p-793, 0.0, 0x1.c488d3c3cc53ap-1015, 0.0, 0.0, 0.0, 0.0,
     0x1.025f214e86d9dp-641, 0.0, 0.0, 0x1.5bef7e06d593fp-1002, 0.0, 0.0,
     0x1.0884a7a154c72p-294, 0x1.5123704b02afap-280, 0x1.811330569bc91p-234,
     0x1.5f832ffb292fp-662, 0.0, 0x1.96c0311975ff8p-995, 0x1.169fca3f2fe39p-287,
     0x1.444c1fb0d1987p-77, 0x1.d5f72e8adf962p-495, 0x1.392af295303d9p-686,
     0x1.9766611899179p-210, 0.0, 0x1.416ac3ccf40d7p-812, 0.0, 0x1.7516373065172p-399,
     0.0, 0x1.d46d3f1bc3c58p-999, 0x1.0fa699a252b4bp-977, 0x1.5cd9847affc14p-638, 0.0,
     0x1.18285b39f2e15p-875, 0x1.4f5bad8d51a01p-420, 0x1.7e52def69cc78p-71, 0.0,
     0x1.a817dbba057dcp-1016, 0x1.ccb95e2c39b8fp-848, 0x1.2bb735e36cf0dp-948,
     0x1.6395820c1ed47p-896, 0.0, 0x1.2561aaccc9bbbp-906, 0.0, 0.0,
     0x1.7c1fc10834f82p-823, 0x1.e9e46db9e7126p-98, 0.0, 0x1.910d1887710bbp-334,
     0x1.d274b0f0861bap-827, 0x1.5d4193c9d0b32p-693, 0x1.32b69e079a4fep-160,
     0x1.e6e4d7105ac42p-169, 0.0, 0x1.0c5b52441af71p-1017, 0.0,
     0x1.7567bd82e2175p-621, 0.0, 0.0, 0.0, 0.0, 0x1.1058461d5b061p-500, 0.0,
     0x1.4438828a22ce3p-803, 0x1.a740df8ea6946p-861, 0.0, 0x1.3dd06676654f9p-211, 0.0,
     0x1.a694a629d7a3p-680, 0.0, 0x1.bb91febac070ep-980, 0.0, 0x1.487723d16ceb9p-605,
     0.0, 0x1.f8118d88ef7a2p-874, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5375e2b951edbp-87,
     0x1.5b76d4c8b1711p-739, 0.0, 0x1.9eba5ea902c7ap-303, 0x1.6d043d168ea7dp-706, 0.0,
     0.0, 0x1.57d729f212e1ap-48, 0.0, 0x1.7dcfed6df4ee4p-89, 0x1.bbb12b23b5a88p-361,
     0.0, 0x1.fa29c16715825p-362, 0.0, 0x1.b15fa7ae21354p-999, 0x1.da32c124633e7p-842,
     0x1.89e37d45948edp-869, 0.0, 0x1.b59a8ccc392afp-780, 0x1.648599e8cfd91p-582, 0.0,
     0.0, 0.0, 0x1.252bae4163783p-150, 0x1.dc1e8aa33c838p-432, 0x1.4dfc903c49774p-294,
     0.0, 0x1.b87dc5c3b80cdp-766, 0x1.8c806aa15bdfcp-675, 0.0, 0x1.c37811bdf18cfp-598,
     0x1.1e61889d187b7p-802, 0.0, 0x1.9dfeefbbf21eep-404, 0.0, 0.0, 0.0,
     0x1.741fd2804dc96p-106, 0.0, 0x1.37116ef5d8342p-11, 0.0, 0x1.304ac40a11265p-665,
     0x1.17a8c558d67e7p-745, 0x1.d41b397a993f5p-1010, 0.0, 0.0,
     0x1.6e7eb03e97e72p-218, 0x1.665c76d4c7a98p-777, 0x1.93e26e6fd0b1fp-495, 0.0,
     0x1.310fb333c75d6p-246, 0x1.2beb980e26186p-280, 0x1.f9881b3c2bf8dp-917, 0.0,
     0x1.db73a65cde4f4p-556, 0.0, 0.0, 0x1.74d4387645cb8p-381, 0x1.f84bf84313ac4p-579,
     0x1.58af3ab54a894p-311, 0x1.443c1565632b7p-970, 0x1.40c2f96683a14p-517, 0.0, 0.0,
     0.0, 0.0, 0x1.78b70553b118ap-699, 0.0, 0.0, 0x1.c0cb0086bc2b8p-239, 0.0, 0.0,
     0x1.8edb648d6212cp-284, 0.0, 0.0, 0x1.025a953b8da73p-795, 0x1.503c88d870295p-750,
     0x1.6f6122349d311p-224, 0.0, 0.0, 0x1.f8cb54d4e4ed7p-111, 0.0,
     0x1.fe83b7590e332p-548, 0x1.f6b6a5eee8ea5p-766, 0x1.ae1d6b720b494p-798,
     0x1.216c7ac0bf063p-842, 0.0, 0.0, 0.0, 0x1.602f9136e6e81p-605,
     0x1.4bde87439efd2p-402, 0x1.0a7a509cc8eebp-673, 0x1.70d4d64274cd2p-419,
     0x1.062f0fac3cee4p-1019, 0x1.6d1e347e318b8p-182, 0.0, 0x1.d9480e3e14867p-85,
     0x1.1b093d72e294cp-390, 0x1.10efb21ef7b1ep-784, 0x1.5d8795f039b3bp-293, 0.0, 0.0,
     0.0, 0x1.db09c1e6715dbp-954, 0x1.b73f07571faa8p-632, 0.0, 0x1.36c2ae1a13162p-105,
     0x1.d0fdc4e91795fp-147, 0x1.e23abe4fd8af9p-266, 0x1.56cbc1aa22ecdp-611, 0.0, 0.0,
     0x1.47057debf1244p-532, 0x1.5f1bb4bb4e615p-491, 0.0, 0.0, 0.0,
     0x1.71b9477f5014cp-544, 0.0, 0.0, 0x1.c6183b72d9582p-60, 0x1.9e3138210ce39p-265,
     0x1.a2aa60c36a74dp-956, 0x1.89d96ea6ce26ap-914, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.77dded427baebp-972, 0.0, 0.0, 0x1.bf399fbb36599p-631, 0.0, 0.0, 0.0, 0.0,
     0x1.a3c787207cbdfp-530, 0.0, 0.0, 0.0, 0x1.9ab8954fa27d9p-896, 0.0, 0.0, 0.0,
     0.0, 0x1.cb8863fc8e6c1p-487, 0.0, 0x1.67e8ba812357ap-679, 0x1.8f79e58b705e5p-390,
     0x1.153fa5a8512d6p-931, 0.0, 0.0, 0.0, 0x1.f9b98f6f26365p-73, 0.0,
     0x1.1536d93b16e8cp-113, 0.0, 0x1.9a2c123724483p-476, 0.0, 0.0, 0.0,
     0x1.a0d6d49607203p-792, 0.0, 0.0, 0x1.6211dcc5d7cdcp-891, 0x1.7f47bb3d7c233p-11,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc7a93949d22cp-803, 0.0,
     0x1.0e5698f02a54p-483, 0.0, 0x1.a1ee36feac882p-120, 0x1.15099ca074d63p-213, 0.0,
     0.0, 0x1.ba91279a57c47p-997, 0.0, 0x1.0ee306c3838a8p-386, 0x1.744a86862a318p-560,
     0.0, 0.0, 0.0, 0.0, 0x1.a577a5adc18d1p-129, 0x1.b30d2018004fdp-2, 0.0,
     0x1.79d9f832908f5p-200, 0x1.66a08c87973d8p-371, 0x1.b48027cac70f4p-366, 0.0,
     0x1.c5db7cda05a91p-372, 0x1.81a857bb3a459p-111, 0x1.a0bde5746436cp-482,
     0x1.8101ef74e86cdp-170, 0x1.b0e6ac31e5592p-460, 0x1.a8d34dc3507c3p-420, 0.0, 0.0,
     0.0, 0x1.bd118faef2f9bp-530, 0.0, 0x1.d4be5ec4c5452p-788, 0x1.7b2b57e8ee51ep-762,
     0.0, 0x1.b9745a4ed58ecp-572, 0.0, 0.0, 0x1.ea30103d9acfcp-8, 0.0,
     0x1.da94a127c622bp-160, 0x1.8f8c642b4f07bp-935, 0.0, 0x1.aa30df07cad1ap-472,
     0x1.8b245ff953f83p-352, 0x1.361a6c590e26cp-896, 0x1.ab1edb4a904bep-712,
     0x1.9a68d6ffc230dp-683, 0.0, 0x1.42562298e5a96p-605, 0.0, 0x1.e828a87afc027p-467,
     0x1.6da3270322b11p-485, 0x1.7455c60f57cbbp-856, 0.0, 0x1.2e3961e7dbfffp-818,
     0x1.0240b799d8e72p-207, 0.0, 0x1.b84b31ad01a9fp-569, 0x1.f0f827971f263p-650,
     0x1.aec7b870578cp-620, 0x1.5762a202305dfp-879, 0x1.ee9a2118b98dp-633,
     0x1.5b4e82193ec9fp-160, 0x1.ed2541f144531p-391, 0.0, 0.0, 0.0, 0.0,
     0x1.4fbc91b48cf5p-794, 0.0, 0.0, 0x1.7db40e862e7a5p-111, 0x1.e9902e4af633cp-575,
     0x1.95ca780f281bap-493, 0.0, 0x1.946796790ce3ap-595, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2a14c8e56f68fp-17, 0.0, 0x1.79dc19dd03eb7p-510, 0x1.2768efb1d0bccp-140,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f0e09785bb22p-25, 0x1.e9fac5fe52fe8p-388,
     0x1.7c320398d6a16p-121, 0x1.5c1ac23f195e2p-933, 0x1.9f31e80efbf1p-506, 0.0, 0.0,
     0x1.4a68073b64f9dp-1010, 0.0, 0.0, 0x1.0a0496fc654c1p-184,
     0x1.71cfe86ac42e8p-721, 0.0, 0.0, 0x1.a5189ad2809d1p-564, 0.0,
     0x1.012442cba93f1p-619, 0x1.59c1bf9b4c822p-34, 0.0, 0x1.4104c333dfecdp-445, 0.0,
     0x1.e8e4a255d7e13p-235, 0x1.cd50833c55bcp-895, 0x1.5a3caff51b81dp-845, 0.0, 0.0,
     0x1.290bc28162608p-265, 0x1.bfe76cab449b2p-704, 0x1.94ee5549cf24ap-531, 0.0,
     0x1.3455571c42425p-974, 0x1.b9cfe3c4f207ep-882, 0x1.77ae416b06c0ep-792,
     0x1.ef9c9e4ac4d3fp-156, 0x1.45f23f6726d34p-438, 0.0, 0x1.327aa79163213p-249,
     0x1.8a737dcb755dbp-552, 0x1.d67ba614f36c4p-692, 0x1.38a45fc4ac4eap-884,
     0x1.97b8444fe42c9p-209, 0.0, 0x1.e7777ce53cf16p-832, 0.0, 0.0,
     0x1.1ac6c5bded468p-850, 0x1.ab1e212e48e13p-308, 0.0, 0x1.b9f10ef525e6bp-774, 0.0,
     0x1.b9bc8a9dbd38fp-277, 0.0, 0.0, 0.0, 0x1.588d4a33a7386p-855, 0.0,
     0x1.63d114d218c55p-467, 0.0, 0x1.4d7dfd9397a34p-467, 0.0, 0x1.edee37094cc1bp-534,
     0.0, 0x1.2f302d2e72c33p-132, 0.0, 0.0, 0x1.80b6a4fdc16ebp-159, 0.0,
     0x1.4d7f52a3dc9b1p-825, 0.0, 0.0, 0.0, 0x1.ceecf3aa9af81p-462, 0.0,
     0x1.2951ce8ecc95ap-778, 0x1.330c3f4f811f7p-421
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
            tmp1 = Sleef_finz_sinhd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_sinhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sinhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
