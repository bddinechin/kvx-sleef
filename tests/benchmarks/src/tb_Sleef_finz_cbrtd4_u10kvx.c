/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd4_u10kvx.c --function \
 *     Sleef_finz_cbrtd4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0.0, 0x1.1e575939693cbp-978, 0.0, 0.0, 0x1.9299145e66b88p-297, 0.0,
     0.0, 0x1.febff9f338997p-485, 0x1.cc2ab10a25402p-839, 0x1.cf3cfd1e9911p-977, 0.0,
     0x1.0ca7ad83f3954p-984, 0.0, 0.0, 0x1.9603b9938259bp-339, 0.0, 0.0,
     0x1.10e29a8f88a17p-458, 0x1.bbf587bb9703p-692, 0.0, 0.0, 0x1.e15b36b2d098dp-498,
     0x1.71f4a528845b9p-4, 0.0, 0.0, 0.0, 0x1.d9ee257d246cfp-971, 0.0,
     0x1.9b8bb32914e3dp-3, 0.0, 0.0, 0x1.212c60628964bp-711, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.431f0ae517576p-637, 0x1.5bdf649ea16b1p-486, 0.0, 0x1.d908f51557a1ap-73, 0.0,
     0x1.1cdeb8f79c5c1p-609, 0.0, 0.0, 0x1.6efb79e72bc0bp-259, 0x1.ce4dc9fcce0f8p-653,
     0x1.6337579b9633fp-627, 0x1.46fc7ca6de733p-602, 0x1.9fe20f415483fp-750, 0.0,
     0x1.d680d52b240fcp-902, 0.0, 0x1.3eddacdb7da4ep-487, 0x1.f922352546cep-416,
     0x1.a10450ca530d9p-812, 0.0, 0x1.bbaea77ed75c6p-633, 0x1.10f51c6a35b3bp-176,
     0x1.54179050320fep-256, 0.0, 0.0, 0.0, 0x1.04e2dc3256044p-377,
     0x1.a4794301a103bp-673, 0.0, 0x1.7ac5d837ebbbcp-579, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.086ef704975e8p-928, 0x1.8833c02374cdcp-554, 0x1.b7b8eeea8bab3p-859,
     0x1.77f61b716fd86p-436, 0x1.ab5d19c7ccea4p-406, 0x1.bffc2dec4aff5p-683, 0.0,
     0x1.8e5017a6ca138p-596, 0x1.b0cad7007d015p-404, 0.0, 0.0, 0x1.87785f6548f58p-490,
     0x1.28717abb476ap-873, 0.0, 0.0, 0x1.b9beb1f4c1247p-304, 0x1.2e17e47e75d4ep-705,
     0x1.1f685965cc8f1p-271, 0.0, 0.0, 0.0, 0.0, 0x1.0f944cfc6c358p-513,
     0x1.c7d3025a388b7p-271, 0x1.49197307cee34p-178, 0x1.514df5d83aa99p-432, 0.0,
     0x1.76417213c3f54p-288, 0.0, 0x1.8e31c006ecbf4p-652, 0.0, 0x1.65092e468790dp-136,
     0.0, 0.0, 0x1.84d4eaf75a881p-524, 0.0, 0.0, 0x1.e7cc6092f6b8bp-710, 0.0, 0.0,
     0x1.7312686c6c5d1p-370, 0x1.5f08eb0a5c96fp-305, 0.0, 0.0, 0x1.4876c57a4eee1p-143,
     0x1.1050d7a75c877p-982, 0x1.8971c95628e5fp-680, 0x1.6a7a857bfff93p-831, 0.0, 0.0,
     0x1.6c186ae2624bdp-422, 0.0, 0x1.445a5a4104489p-141, 0x1.262a3063a9631p-758, 0.0,
     0.0, 0x1.f8413a1d9d731p-815, 0x1.9cd43c0de3564p-473, 0x1.2d15e0060b5ebp-179,
     0x1.3524600baa3a3p-15, 0x1.d7f74ef597f6cp-430, 0x1.bf4d329788bcp-179,
     0x1.e588a0938d32fp-412, 0x1.92aa274fb9a17p-824, 0x1.bec47f87dbe4ep-261,
     0x1.89602e4541f9p-72, 0x1.6ceb6eb66f2abp-671, 0x1.15081e1868214p-533, 0.0,
     0x1.8dde284105098p-369, 0.0, 0x1.40187185222efp-720, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3776a2c235c31p-606, 0.0, 0.0, 0x1.4623643ce9254p-664, 0x1.b6f401c7fb31p-278,
     0x1.89020bbc6904fp-384, 0.0, 0.0, 0x1.cbc688e25ad4ep-245, 0.0, 0.0, 0.0,
     0x1.96b7c8d260e41p-999, 0x1.b2a75be04a054p-972, 0x1.95ff6b0075dbdp-472, 0.0, 0.0,
     0x1.941d52942cb56p-811, 0x1.da6278c36dbdbp-365, 0x1.c1946989336a6p-925,
     0x1.1eba899ca5399p-265, 0x1.f339b4c36209bp-299, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fab33328a92d9p-1009, 0.0, 0x1.15b28ba6a4aaep-108, 0.0, 0.0,
     0x1.f54aaed7424b8p-243, 0x1.2e64a4c90e71cp-262, 0.0, 0x1.70b5b64238ebp-157, 0.0,
     0.0, 0.0, 0.0, 0x1.b160d41e759b5p-266, 0.0, 0.0, 0x1.3a866812aed1ep-1013, 0.0,
     0x1.9a47cef73ee27p-385, 0x1.1f96c0e4750a9p-988, 0x1.06130136787d5p-760, 0.0,
     0x1.c9e3a4972ff6cp-655, 0.0, 0.0, 0x1.cde3862781aap-315, 0.0,
     0x1.b004a7fb809c8p-370, 0x1.975497fbabcbfp-302, 0.0, 0.0, 0x1.65cad50dcc526p-59,
     0.0, 0x1.aea4558724da2p-149, 0x1.eaff6a060d4ecp-105, 0x1.725f1ff6d1f01p-171, 0.0,
     0x1.04d2598e38e5dp-408, 0x1.1f0178a125831p-1007, 0x1.1cdb206c71044p-436,
     0x1.eb3b06168e513p-808, 0x1.9188cba49dba3p-641, 0x1.7a879297c326fp-989,
     0x1.709fd614eaca8p-118, 0x1.581678f895e58p-521, 0.0, 0x1.92bf777531601p-576, 0.0,
     0.0, 0x1.7973fe528a596p-765, 0x1.6d6e2d69f649ep-642, 0x1.c0be67a0d32bfp-523, 0.0,
     0x1.adeda862a0dc8p-40, 0.0, 0x1.80b178a497bb5p-612, 0.0, 0.0, 0.0,
     0x1.39335b546e692p-729, 0.0, 0.0, 0.0, 0.0, 0x1.e84022c465687p-371, 0.0, 0.0,
     0x1.4c8c0705eec42p-162, 0x1.93dc9f9940685p-101, 0x1.3e844cd7eb5d6p-175,
     0x1.57d1a54c053aap-844, 0x1.11c9c06faea08p-905, 0x1.b67745753cbc1p-46,
     0x1.7c5938a0b14a9p-637, 0.0, 0x1.b0a1f6c59df54p-1003, 0x1.c9a0adcc5b683p-248,
     0x1.7b130535ed6e4p-265, 0x1.bb0f65fdaca9dp-379, 0.0, 0.0, 0x1.5ee4b3dc6bc9dp-622,
     0.0, 0x1.84d3e1237d81ep-718, 0x1.d04bf6417e2cbp-342, 0.0, 0.0,
     0x1.ef957384e8f63p-557, 0x1.e2a2561d3319cp-495, 0x1.ca333f3cfe3cdp-541,
     0x1.77e55de331aa1p-773, 0x1.3cfcb1b25571ap-683, 0x1.748ef7434a47cp-657,
     0x1.3b5bcdb277b77p-925, 0x1.e8fc41a9f8e4dp-638, 0.0, 0.0, 0x1.1e7a1d484c864p-354,
     0.0, 0x1.9d9e134f17968p-379, 0.0, 0.0, 0.0, 0x1.c12aa8c187252p-640,
     0x1.7733a3bfe5255p-693, 0.0, 0.0, 0.0, 0x1.de430eb6d564ep-559,
     0x1.0f8e681870371p-329, 0x1.75d1b662d2009p-59, 0x1.3e3ef104239abp-742, 0.0,
     0x1.4888aa19bfb68p-993, 0.0, 0.0, 0x1.0f39ffbbf7443p-252, 0x1.acdaf5a7afc97p-328,
     0.0, 0x1p0, 0x1.86819fd82842ep-944, 0x1.2715f427e40acp-76, 0.0,
     0x1.a41f7d7d01ca4p-676, 0.0, 0.0, 0x1.8af2d05ef5aeep-942, 0x1.e22526c88cb97p-675,
     0x1.e01d2dc94a869p-791, 0x1.60ac4616c4e95p-679, 0x1.cb33cc7c3feb2p-203,
     0x1.d757aac58e8e1p-346, 0.0, 0x1.ae1e22cae0462p-879, 0x1.1e83e368b708ep-947,
     0x1.1ce8517adebdp-533, 0x1.1e1208898c6fap-862, 0.0, 0x1p0, 0.0,
     0x1.fbc99fb1969fp-534, 0x1.4e20d86ea6c84p-283, 0x1.dbcf552685148p-195, 0.0,
     0x1.7adfdae8aac4ep-220, 0.0, 0x1.4b0fc5ee18c9ap-663, 0x1.15d66b5537dfap-662, 0.0,
     0x1.3ac78b2f467a7p-733, 0x1.5e4abb750d92ap-786, 0x1.ac87a01025077p-935, 0.0,
     0x1.923c9f08d4343p-561, 0.0, 0.0, 0.0, 0x1.5bb3c0a5668ep-402, 0.0,
     0x1.3058913d51e61p-42, 0.0, 0x1.878bb0da5695p-272, 0.0, 0.0, 0.0, 0.0,
     0x1.b06f1d2edab22p-116, 0x1.cf109e68c18e7p-497, 0x1.c1fbc31d23accp-431,
     0x1.8f7f5dcbb55f6p-164, 0x1.664a9587ff96ep-147, 0.0, 0.0, 0x1.c5bd05ca5f496p-556,
     0x1.e2c93f28c42d7p-682, 0x1.b7ae93de9541fp-420, 0.0, 0x1.1e7aae16f1b65p-189, 0.0,
     0.0, 0.0, 0.0, 0x1.9c0929d07a0cep-385, 0x1.93d1b7ced5cc4p-557, 0.0,
     0x1.ed2aa1cbebc82p-858, 0.0, 0.0, 0.0, 0.0, 0x1.1c3fa35621a55p-332, 0.0,
     0x1.d1344e91c08c1p-868, 0x1.96c0eb4d674c3p-239, 0.0, 0.0, 0x1.fb087f6877fd2p-738,
     0.0, 0x1.653256ebd2823p-237, 0.0, 0x1.4e92125215359p-593, 0x1.a1e9338535553p-832,
     0.0, 0.0, 0x1.47ef65ddba9eep-283, 0x1.e1bbf640e4daap-143, 0.0,
     0x1.205f74f9ceb09p-732, 0x1.d2ff86ccce5f7p-799, 0x1.7d4189bc93d99p-255, 0.0,
     0x1.7f3e6c354217cp-1022, 0x1.8b9d2b001f006p-338, 0.0, 0x1.7577fc3ba54e2p-952,
     0.0, 0x1.a2b69ded1b617p-45, 0.0, 0x1.65a4df2504a7fp-778, 0x1.fe002fab293b3p-655,
     0x1.e4166c0b083b4p-813, 0x1.d18a7cdeef43ap-748, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1p0,
     0.0, 0x1.7d481c4815a77p-83, 0x1.3efb2e244b56dp-453, 0.0, 0.0,
     0x1.f8fd9342cb7edp-582, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b3f11b09303ep-261,
     0x1.95fde7273927p-680, 0.0, 0x1.24724064e28a9p-175, 0x1.d053c1beec03ap-341,
     0x1.ad78c0eb29162p-660, 0x1.a8bdb1364a3dcp-46, 0.0, 0.0, 0.0, 0.0,
     0x1.8418c2d31895cp-1007, 0.0, 0x1.447bdf6c1029ep-986, 0x1.f2406e3f422dap-902,
     0x1.8c187b8640299p-670, 0x1.49b19c40865f6p-75, 0x1.e317b54556b8bp-797,
     0x1.2690d40a8755p-248, 0x1.0adfca42ea1f7p-978, 0.0, 0x1.bca7aee43e7a6p-200, 0.0,
     0.0, 0.0, 0x1.d79ffd8ebc598p-972, 0.0, 0.0, 0x1.0f55f95536034p-865,
     0x1.d97c4d6739f0ep-136, 0x1.b5fc12bb5c38fp-384, 0x1.8e02e2f895547p-502, 0.0,
     0x1.aa23aa5072fc5p-788, 0x1.c3a3389b03e06p-495, 0.0, 0x1.b1878f2e096fap-165, 0.0,
     0.0, 0.0, 0x1.8299e08a6f505p-740, 0x1.d9a851c17ef0cp-786, 0.0, 0.0,
     0x1.539f218ce3ccdp-691, 0.0, 0.0, 0.0, 0.0, 0x1.b6bfbe0383f95p-163, 0.0,
     0x1.ca09abc20254fp-553, 0x1.f96ac3e62c3ddp-468, 0.0, 0.0, 0.0,
     0x1.a899e6cf7be8bp-763, 0.0, 0.0, 0.0, 0.0, 0x1.7ca7d85ace3b5p-718, 0.0, 0.0,
     0x1.76221fd923d93p-817, 0x1.627ea695d1692p-209, 0.0, 0x1.ed6a2b91a7745p-842, 0.0,
     0x1.0128b4aef50e9p-409, 0.0, 0x1.e64e0e7848b71p-410, 0.0, 0x1.e2a5a1f25167cp-439,
     0x1.420d4924d0bc3p-871, 0x1.351e52ec46f7fp-432, 0x1.ff5b33f2820c5p-152,
     0x1.81088ef35deebp-792, 0.0, 0.0, 0.0, 0x1.c41e2e53a287cp-331,
     0x1.d0ed24a1da3f7p-718, 0.0, 0.0, 0.0, 0x1.0afc0b24c8ac6p-459,
     0x1.e403eee2b4f38p-30, 0x1.dfe09933e6d45p-981, 0x1.91e7b9d099df5p-530,
     0x1.67e70d1a30a86p-745, 0.0, 0.0, 0x1.484264a80ff96p-270, 0.0, 0.0,
     0x1.740d81f3733aap-374, 0.0, 0.0, 0.0, 0.0, 0x1.0e01c536ce549p-115, 0.0, 0.0,
     0.0, 0x1.cd45677bbf514p-299, 0x1.39c12fbdf669ap-892, 0x1.78545d1f0dc6cp-780, 0.0,
     0x1.6a7e7c2ad6a5ep-73, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c11acc89e4585p-1000, 0.0,
     0x1.1ae14dfd0aeb4p-923, 0.0, 0.0, 0x1.5f13ccb04331fp-35, 0x1.efde40ffc744fp-592,
     0x1.60618304c4edp-211, 0.0, 0x1.1ef528bc3fba6p-957, 0.0, 0.0,
     0x1.5b5573c10e609p-780, 0.0, 0.0, 0x1.bc4a44b8bc476p-207, 0.0, 0.0, 0.0,
     0x1.363e9af0e5001p-12, 0.0, 0x1.6049215d0bd6cp-444, 0.0, 0.0,
     0x1.e9d37f4bd79ccp-567, 0x1.61c0b04474b66p-11, 0x1.1be6785f9040ep-1003,
     0x1.768fecbea6084p-741, 0.0, 0x1.c30dd6fe6f916p-999, 0.0, 0.0, 0.0, 0.0,
     0x1.f8a5f6b7b5903p-232, 0.0, 0x1.aa58fd51ea37ap-117, 0.0, 0x1.525e2459cfd06p-41,
     0.0, 0x1.5b0edbada7c21p-186, 0x1.13c6d725cdf8dp-986, 0x1.340cc8e914e1fp-27, 0.0,
     0.0, 0x1.4809da447f32fp-880, 0x1.fcd28b411793dp-62, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.20a56eb85befap-396, 0x1.efa789830d841p-162, 0.0, 0.0, 0x1.e957dc486af98p-489,
     0.0, 0.0, 0.0, 0.0, 0x1.8ace2ff042f83p-188, 0.0, 0.0, 0x1.bc56b5d3c7b6ep-778,
     0x1.058bc6d117331p-169, 0x1.1e0d977519d12p-975, 0.0, 0.0, 0x1.875f1038cfdbdp-29,
     0.0, 0.0, 0x1.86c94f43c74b6p-515, 0.0, 0.0, 0x1.908d7280717f9p-528,
     0x1.e14387d47469dp-246, 0x1.eb1e5d2648feep-898, 0.0, 0.0, 0x1.9693890ba635ap-240,
     0.0, 0.0, 0x1.d9572617025dcp-182, 0x1.92fc0cf38fee7p-167, 0.0, 0.0,
     0x1.1a19608b86901p-276, 0.0, 0x1.827eaf1eb1944p-289, 0.0, 0.0,
     0x1.ab8838cbdd824p-43, 0x1.3e6bb29801a49p-649, 0x1.99af9309e3c06p-833, 0.0, 0.0,
     0x1.952c1455ee288p-640, 0.0, 0x1.852d60cb64de3p-906, 0.0, 0x1.c6a81500e8caep-447,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1fe0797e7c8a5p-955, 0x1.22c3835856e73p-543,
     0.0, 0x1.c44a0088f9698p-836, 0.0, 0x1.ab0814c109e79p-746, 0x1.797da34767c7cp-746,
     0x1.eedceade3b76ep-435, 0x1.96b6c5f9d4384p-380, 0.0, 0.0, 0x1.5dfd38f933e6bp-112,
     0x1.6b876cdf1b0cp-575, 0.0, 0.0, 0x1.d9588536bf15dp-40, 0x1.386881534004p-717,
     0.0, 0x1.cab424c78168ep-764, 0x1.4cfdac5e6c475p-949, 0.0, 0.0,
     0x1.7e8cc87946933p-684, 0.0, 0.0, 0x1.e282f363289a6p-218, 0.0, 0.0,
     0x1.5c920fd018a55p-785, 0x1.f0ed27fa7e87cp-539, 0x1.815c3cf8d8b8bp-792,
     0x1.3c4883bea0d9fp-307, 0x1.2b85d9d4c6b6cp-715, 0x1.e2a7a978a0c8ep-358,
     0x1.bf3e1eb210696p-452, 0x1.4eb1db8d04621p-761, 0.0, 0x1.3e49f8be62cbdp-539,
     0x1.0995e3a43ce26p-954, 0x1.ef8f8f1b87c1cp-514, 0.0, 0x1.de8020dffc1fep-975,
     0x1.3d2af50b0ad11p-1016, 0x1.31e51e8dca601p-80, 0x1.71031219bc6dcp-623, 0.0, 0.0,
     0x1.a2d3149078ea1p-435, 0x1.89d28a5415c09p-160, 0.0, 0.0, 0x1.fdb106d25aa9cp-123,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.606b61ccf943cp-735, 0x1.91fde054d1f8ep-883, 0.0,
     0.0, 0x1.67a994f331f8ap-620, 0x1.1bad946cb0ae7p-98, 0.0, 0x1.bac393a8a371bp-329,
     0.0, 0x1.db1f5e059aa1bp-1013, 0x1.cb6a19bc3b2e1p-617, 0.0,
     0x1.1d191c0a831cdp-299, 0x1.3332adae87bfp-428, 0x1.211c1963241cep-209, 0.0, 0.0,
     0x1.44a0a2ef8b4dbp-572, 0.0, 0x1.d696dc07664d5p-533, 0x1.72c1a8fc494f1p-118, 0.0,
     0.0, 0x1.8ef88bfb41c76p-60, 0.0, 0.0, 0.0, 0x1.752fb030d4107p-97,
     0x1.7a45710ef40e4p-812, 0x1.17fa5188a9e32p-471, 0x1.e4d0c9954ecf6p-208, 0.0,
     0x1.9f5062b165008p-77, 0x1.6e23b50f3bc69p-17, 0.0, 0.0, 0.0,
     0x1.e699a65648139p-937, 0x1.59a4aed86a512p-648, 0x1.a5d2ed30267f3p-787,
     0x1.762021905e52ap-224, 0x1.38a29ea501af6p-305, 0x1.d9e03935a91f8p-688, 0.0, 0.0,
     0.0, 0x1.1dcfbcea6bafbp-809, 0x1.7124d2eb2bbbdp-405, 0x1.7e4a6c1baea83p-621,
     0x1.9023259034eb1p-674, 0.0, 0.0, 0x1.fb6f93ec05629p-716, 0x1.36f09d558030ep-28,
     0.0, 0x1.6e89a618d651ep-429, 0x1.68aa09b044446p-655, 0.0, 0x1.6498f24abc4bcp-777,
     0x1.d130c6e1071eap-967, 0.0, 0.0, 0x1.913e08525cca1p-479,
     0x1.20c7daf05b9e9p-1009, 0.0, 0x1.054d3a54d80f3p-9, 0.0, 0x1.3fd2623b8308ep-311,
     0x1.31f91d76e5572p-845, 0.0, 0x1.2c66ebf8711e6p-42, 0x1.e5d20ed7fcd99p-817,
     0x1.d88d4a3e659bdp-31, 0.0, 0x1.40e1960a003fep-570, 0x1.82da491d30627p-485, 0.0,
     0x1.678021fbc717dp-164, 0x1.f7814b7e77ffp-774, 0.0, 0x1.431360f9a0302p-737,
     0x1.98081ee302db9p-607, 0x1.5e2f1ef5aeab7p-75, 0.0, 0.0, 0.0, 0.0,
     0x1.dd3a122a8f2ddp-915, 0.0, 0x1.75b67b6bc56f1p-912, 0.0, 0x1.ca0b446bb2dadp-446,
     0.0, 0x1.cb1f25d33c48ap-826, 0x1.02baec47252d3p-43, 0x1.e3ddcecc91e0fp-710, 0.0,
     0x1.614860af1a7b2p-817, 0x1.26282d9be8a1ep-258, 0x1.133f8508d6c7ap-50, 0.0, 0.0,
     0x1.e7c22eb901354p-795, 0.0, 0.0, 0.0, 0x1.101bc45a8aa8p-169,
     0x1.777894e22dcb3p-902, 0.0, 0x1.a367df4b45ccbp-87, 0.0, 0x1.cdee8df002c93p-7,
     0.0, 0.0, 0.0, 0x1.28b214c287131p-631, 0.0, 0.0, 0x1.a2efbf818a58dp-103, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.25056fb8da855p-734, 0x1.64c1482e0a194p-554,
     0x1.e6c82dab97474p-688, 0x1.6e8e8da2ae3cp-929, 0x1.2812c5e67b02bp-205,
     0x1.0f0aea9bcd24ep-954, 0.0, 0.0, 0x1.324218bfec7fbp-84, 0.0, 0.0, 0.0,
     0x1.a6e0c08893695p-248, 0.0, 0x1.822b71a725148p-898, 0.0, 0.0, 0.0, 0.0,
     0x1.93abb2fcd9344p-939, 0.0, 0x1.2288ecb86f866p-10, 0.0, 0.0, 0.0,
     0x1.0d6b726dadd9ap-557, 0x1.9658c161e3f93p-949, 0.0, 0.0, 0x1.b2b4485a6ef63p-795,
     0.0, 0x1.1509b38ec8764p-111, 0.0, 0x1.ef4a8e6c05009p-559, 0x1.a390b75cedff4p-70,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97dd9bae9d1bep-4, 0x1.ecfeec20ca475p-517,
     0.0, 0x1.f0a5aa0b6e7a6p-267, 0.0, 0.0, 0x1.9d3947c48743dp-574,
     0x1.8d1219c9a9c9bp-342, 0x1.53e4878cadfb3p-528, 0.0, 0.0, 0.0,
     0x1.522d338f36752p-155, 0x1.043d872698eap-743, 0x1.6a8cc3fc9040ep-891,
     0x1.72500d67040d6p-279, 0.0, 0x1.4f0b3fec01011p-289, 0.0, 0.0,
     0x1.82ff1e177f988p-291, 0x1.fe275481754p-633, 0x1.4932be7d40e86p-568, 0.0,
     0x1.1aacc7fe85958p-663, 0.0, 0x1.39e1fe33a71eap-275, 0x1.654ef64a31f8fp-744, 0.0,
     0.0, 0x1.6bef602984d8ap-326, 0x1.1a15b81182629p-966, 0.0, 0.0, 0.0, 0.0,
     0x1.f906445eeac8ap-746, 0.0, 0.0, 0.0, 0.0, 0x1.15dc047b77a4ep-87, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0b7ad19ae7594p-606, 0x1.dd11480625ce8p-880, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d8befe6518933p-871, 0x1.06c7bc934b07ep-830, 0.0, 0.0, 0.0,
     0x1.283353fe8c21dp-280, 0.0, 0.0, 0x1.0c8cd4a1b35c7p-243, 0x1.daf1ec7d7e9cp-156,
     0x1.0c6d88105bf32p-618, 0x1.93321bdebf259p-580, 0x1.49482e112112bp-299, 0.0,
     0x1.00eb27f320db5p-608, 0.0, 0.0, 0x1.f201eb3e77258p-596, 0x1.bfdc669a13851p-517,
     0.0, 0x1.2d39cf2e0f6a7p-378, 0x1.c8ba5a7e6bdeep-700, 0.0, 0x1.33d75254faea4p-114,
     0.0, 0x1.68888b035c00ep-406, 0.0, 0.0, 0x1.003700ad70cd2p-927,
     0x1.355636a1d68d3p-134, 0.0, 0x1.10a637234808fp-852, 0x1.04dd4e9c17adep-662, 0.0,
     0.0, 0.0, 0x1.68df19046f0ffp-990, 0x1.bf63d837bbefap-200, 0x1.464a3f31fd992p-957,
     0x1.5bc85d591c0b5p-1013, 0.0, 0.0, 0x1.ccb961522f17cp-474, 0.0, 0.0, 0.0, 0.0,
     0x1.73e88da877b53p-880, 0x1.046c6929c7391p-647, 0x1.4b7fb10709c8cp-107, 0.0,
     0x1.7128d00a90083p-582, 0x1.e55752f39a8a8p-178, 0.0, 0.0, 0.0,
     0x1.5a51297353695p-385, 0.0, 0.0, 0.0, 0x1.669b54d1d711cp-937, 0.0,
     0x1.28dd8febe4036p-15, 0.0, 0.0, 0x1.336f188b175fdp-318, 0.0, 0.0, 0.0,
     0x1.1f5eb21b44cf4p-722, 0x1.a936511badfdap-397, 0.0, 0.0, 0x1.20f43438dfd4fp-252,
     0x1.3199f6d3fcf8bp-131, 0.0, 0.0, 0x1.ff0d663105347p-839, 0.0, 0.0, 0.0,
     0x1.ae75ac7e0e279p-441, 0x1.ab8c1f9dc5602p-902, 0.0, 0.0
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
            tmp1 = Sleef_finz_cbrtd4_u10kvx(tmp0);
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
    printf("Sleef_finz_cbrtd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
