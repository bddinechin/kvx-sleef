/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd2_u35avx2128.c --function Sleef_cosd2_u35avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.8ccd6328d2e8fp-450, 0x1.ebf6158b24773p-32, 0x1.37294b2659532p-813,
     0x1.6c3a134b8c646p-157, 0x1.b5d042499e1c5p-242, 0x1.a218312ba7e5p-410, 0.0,
     0x1.5baa83a9c71afp-364, 0x1.589a30dd6670bp-194, 0x1.f7c7be3e8fe8p-897,
     0x1.f1a92918ad6a3p-510, 0.0, 0x1.1523fe976f477p-90, 0x1.19d2905f8443ep-244, 0.0,
     0x1.8fa06a0708d3bp-405, 0x1.885fbf0969789p-714, 0x1.ff604402b33b2p-863, 0.0, 0.0,
     0.0, 0x1.057c089587ebcp-1015, 0.0, 0.0, 0.0, 0x1.e00b8119e5a98p-747,
     0x1.55f4bbf7d687ap-714, 0.0, 0x1.ee555f90b4a52p-844, 0x1.0dbb0dab022f5p-380,
     0x1.7459dca5ac774p-243, 0.0, 0x1.29b3e3a5d541ap-441, 0.0, 0x1.ca6d64720cf0cp-104,
     0x1.c3c1e5790a961p-124, 0x1.33fe0b725045p-69, 0x1.d7bb7614f03acp-993, 0.0,
     0x1.0a8adf0b4abfdp-686, 0.0, 0.0, 0.0, 0x1.747d2f70dbf08p-585,
     0x1.4e6baa91c4346p-573, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6765ff1ef818cp-327,
     0x1.a25faff136a4cp-184, 0x1.93a81c4d24587p-900, 0.0, 0.0, 0.0, 0.0,
     0x1.872f04a059397p-516, 0x1.81e450601b282p-935, 0x1.9c7455301e37bp-135,
     0x1.4c4f54c454da6p-362, 0x1.cbf090c504febp-935, 0x1.56765cc3af9d4p-99, 0.0,
     0x1.cc091b2262053p-412, 0x1.1f3732d8af28p-290, 0.0, 0x1.90a90d411c028p-816, 0.0,
     0.0, 0x1.8c12793701776p-396, 0.0, 0.0, 0x1.35bf04d1b4ac9p-16,
     0x1.b05a678299af6p-17, 0.0, 0.0, 0x1.6593041386376p-718, 0x1.21a1105c2f805p-774,
     0x1.a8f82e32cd7dfp-587, 0x1.8150e067a67b2p-3, 0x1.7b84db3dcae2bp-278, 0.0,
     0x1.9444d29264bbdp-766, 0.0, 0x1.a6bd786373d65p-938, 0x1.de2c54af46d2dp-428, 0.0,
     0x1.b7dd1c5db671cp-460, 0x1.b1db56953e7cbp-148, 0.0, 0x1.0cc5b49689c93p-735, 0.0,
     0x1.4a32b407c1ffdp-907, 0.0, 0.0, 0.0, 0x1.3938e74dfea48p-576,
     0x1.26b5b9ba4134ep-703, 0x1.131516de07863p-781, 0.0, 0.0, 0.0,
     0x1.9ee970b0a92dp-114, 0.0, 0x1.0a113c711789ap-878, 0.0, 0x1.bb0eec494e658p-649,
     0.0, 0.0, 0x1.1c50e22a6ec28p-589, 0x1.dfd66b6833319p-105, 0x1.a47e87d50b81bp-17,
     0x1.88f13c60bfa1dp-826, 0x1.97427df31973fp-656, 0x1.a53f15d399ac7p-114,
     0x1.0a879c449485fp-876, 0x1.e2cf6aae70758p-807, 0.0, 0.0, 0x1.f5deaba58f7c2p-716,
     0x1.4be9e57b4c97ep-14, 0x1.80afcb93f0397p-974, 0x1.77558de2f519ep-426, 0.0, 0.0,
     0.0, 0x1.56b3f0234a5cbp-523, 0x1.d5a80e9b5a03dp-225, 0x1.1d2687ff46cf8p-1016,
     0.0, 0.0, 0x1.05f38871b64dp-594, 0.0, 0.0, 0.0, 0x1.8d13c2c8b12e5p-305, 0.0, 0.0,
     0.0, 0.0, 0x1.90edd334d2298p-220, 0x1.fa36e5f835b4ep-1005, 0.0,
     0x1.0bc7e0e2a7cb4p-594, 0x1.759891b185d0cp-930, 0x1.20a650b544b71p-1016, 0.0,
     0.0, 0x1.a5a9d22c67c32p-219, 0.0, 0.0, 0x1.2c67aa8c03f2fp-823, 0.0, 0.0, 0.0,
     0.0, 0x1.c106bebceccfp-102, 0x1.cada14d011795p-455, 0.0, 0x1.a4e003d9d77d6p-825,
     0.0, 0x1.e77a227a5c9b4p-235, 0x1.9657858d1cd51p-492, 0.0, 0.0,
     0x1.026f58e21976ep-298, 0x1.b3cbc2f5a6e64p-645, 0x1.1ea7a76e8641fp-376,
     0x1.fb353aa693625p-490, 0.0, 0.0, 0x1.33c59dec88aabp-805, 0x1.f0231f61e3d11p-519,
     0x1.4bbe617ba3577p-300, 0x1.35e1366138e0cp-147, 0.0, 0x1.b7418249a61b4p-846,
     0x1.42317d3d429a8p-655, 0x1.7dae9a628ecf8p-187, 0.0, 0x1.0c361ed6ecaefp-987,
     0x1.a4c487a2950cap-240, 0x1.3ddaca5080c5bp-501, 0.0, 0x1.fd9fbdbf5a227p-468,
     0x1.b8bb637c454fcp-304, 0.0, 0.0, 0.0, 0.0, 0x1.99b1d9311f399p-854, 0.0,
     0x1.8511b4023880bp-542, 0.0, 0x1.ee71573b94361p-907, 0.0, 0x1.1b1441ddfcd86p-765,
     0.0, 0.0, 0.0, 0.0, 0x1.f0f557e035468p-205, 0x1.38c9cf8b8423ep-381,
     0x1.97a7530437fc6p-18, 0.0, 0.0, 0x1.4158dd3792873p-523, 0x1.3718ac93f4d83p-765,
     0x1.90eec0a2393adp-933, 0.0, 0.0, 0x1.a78b622ab85fdp-933, 0x1.9eb5a9f68d341p-641,
     0x1.d1375519e3349p-678, 0.0, 0x1.08a0620a1753dp-320, 0.0, 0x1.3168b14615f2p-630,
     0.0, 0.0, 0x1.390a04b9d6367p-1013, 0.0, 0x1.c548207148ae4p-773,
     0x1.7dec3ba67e4b1p-519, 0x1.5865f2ddef212p-114, 0.0, 0.0, 0x1.ae488abebe874p-666,
     0.0, 0x1.94440e43e26e9p-813, 0.0, 0x1.11dfd5a6a6d57p-246, 0x1.cdd5d6c6ee259p-577,
     0.0, 0x1.91406e1442e99p-510, 0x1.0b2883fc11827p-922, 0.0, 0x1.404f6d7f5677ep-237,
     0x1.2d37e7c8cbf4cp-859, 0.0, 0x1.6cf6d0bc782fbp-411, 0x1.f4bca104d73f8p-711, 0.0,
     0.0, 0.0, 0x1.07df9043548c2p-818, 0.0, 0.0, 0x1.299110f5187dp-355,
     0x1.f7902fef687f8p-507, 0x1.36e3f0d20d579p-863, 0.0, 0.0, 0x1.80488515269bbp-451,
     0x1.8d31099208b68p-361, 0.0, 0.0, 0.0, 0.0, 0x1.26b1d147b9394p-470, 0.0, 0.0,
     0.0, 0x1.959bb98965867p-577, 0x1.dc5d0c7447a97p-6, 0.0, 0.0,
     0x1.259aa5a9fbd19p-745, 0x1.36b8436345d8dp-701, 0.0, 0.0, 0x1.67d93f327cce7p-357,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c7871598ffb9p-761, 0x1.502ff9c002f95p-605,
     0x1.c7cf5512f303dp-473, 0.0, 0.0, 0x1.6f3df09d7f54fp-399, 0.0, 0.0,
     0x1.0184cee7e7033p-450, 0x1.6b6e856df86a7p-325, 0x1.ab3c8286f912ep-27, 0.0, 0.0,
     0x1.7e2613a08b574p-527, 0x1.4bc4eb438ff34p-95, 0x1.80a1c2f234cfep-835, 0.0, 0.0,
     0x1.86695f4d887bdp-494, 0x1.b50a5b806c07cp-439, 0x1.54faabeccdabp-851, 0.0, 0.0,
     0.0, 0x1.b396b0173fb7cp-667, 0.0, 0.0, 0x1.fb0d1dd298ab4p-204,
     0x1.a61d133751b5ep-237, 0x1.db861415f8c58p-640, 0.0, 0.0, 0.0,
     0x1.7324d199c0372p-357, 0x1.f2b6f1cf42af1p-132, 0.0, 0.0, 0x1.c41cc886d601cp-964,
     0x1.d75fa92a774a3p-375, 0x1.8b62dd31ce784p-476, 0x1.f51653b2e4612p-666,
     0x1.ea009bd8275dap-684, 0x1.1c18ad784c4f2p-394, 0.0, 0x1.5a33534f08106p-967,
     0x1.28206b9b4b6a3p-125, 0x1.e923ad8e3fe56p-803, 0x1.fa3e48c754917p-922,
     0x1.f45496e513efp-969, 0.0, 0.0, 0.0, 0x1.ae3c6611c61fp-120,
     0x1.4ff6409702d1p-504, 0x1.89f6addd6e329p-4, 0.0, 0x1.ed37585437f5fp-335,
     0x1.9af84e0efde98p-558, 0x1.e2633f3055d54p-849, 0.0, 0x1.92952dd6c13c8p-905,
     0x1.e6035d9f3125ep-625, 0x1.6bcc4b4d9f7a4p-772, 0x1.096758c37b1e6p-26,
     0x1.9ea3c21285e8p-194, 0x1.4baf4ad77a376p-822, 0x1.7cd5976306a7ep-827,
     0x1.7b7f87b394b3bp-848, 0x1.b62b983597f09p-214, 0x1.5a03c7f2454afp-226, 0.0,
     0x1.bca86779acc9ep-12, 0.0, 0x1.5294976f7592fp-675, 0.0, 0.0,
     0x1.58e4b28050633p-616, 0.0, 0x1.fbd1d85da233bp-556, 0.0, 0.0,
     0x1.bec114afc179ep-105, 0.0, 0.0, 0.0, 0x1.36595fb5a04a4p-137, 0.0, 0.0,
     0x1.10a052474e623p-15, 0.0, 0.0, 0.0, 0x1.b3a9f4f43d143p-621,
     0x1.94f489bbcf5a2p-720, 0x1.805c7492045e9p-791, 0x1.5a28928391edep-505, 0.0, 0.0,
     0.0, 0x1.077481bb4d54bp-868, 0x1.24e133b3991fep-415, 0x1.54f641a6ae68bp-445, 0.0,
     0.0, 0.0, 0x1.6557b9dbf339fp-697, 0.0, 0.0, 0x1.6ec15f4923582p-242,
     0x1.0ea2e7fbad8dbp-851, 0.0, 0x1.79b91ef0355ap-296, 0.0, 0.0,
     0x1.03047863e301dp-374, 0x1.fbae713783d5cp-644, 0.0, 0x1.bf81b74a355c7p-188, 0.0,
     0.0, 0x1.8b8d15d94ea64p-140, 0x1.efde91c556ac1p-710, 0.0, 0.0,
     0x1.bd00de059f996p-253, 0x1.6095e18711ac2p-236, 0x1.4b7e21e012bf2p-906, 0.0, 0.0,
     0.0, 0.0, 0x1.ce841dbb0f99ap-929, 0.0, 0x1.f218eff3b9076p-942,
     0x1.03980c1033f9ap-782, 0.0, 0x1.61cfd4043eae6p-727, 0x1.3e74de73f1533p-480, 0.0,
     0x1.886ddb8ac9749p-903, 0x1.8f2c0ac9e4cf4p-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7b958433217ecp-400, 0.0, 0.0, 0.0, 0.0, 0x1.5fb677a250f95p-970, 0.0, 0.0,
     0.0, 0x1.425913b6c6569p-896, 0.0, 0.0, 0.0, 0.0, 0x1.2a73317d9dedcp-268,
     0x1.2dc0e1be17eaep-692, 0x1.ebc95c6e7cfe8p-845, 0x1.521254205fc17p-397, 0.0, 0.0,
     0x1.7a054c9c90087p-275, 0x1.d872c79887237p-20, 0.0, 0.0, 0x1.1cf7af9e79d47p-774,
     0.0, 0x1.c60717c5847fbp-677, 0.0, 0x1.1c09ec032ccedp-1016, 0x1.023d72f332c9p-66,
     0x1.03290cff4414ep-17, 0.0, 0.0, 0x1.17ada2773bfcfp-943, 0.0,
     0x1.a24f513fcc548p-214, 0.0, 0.0, 0x1.9b85bacfdae7bp-770, 0x1.11e5bb9a3e225p-363,
     0.0, 0.0, 0x1.8affdb3a704fcp-967, 0.0, 0x1.92a0a8563da21p-614,
     0x1.353ce81569703p-16, 0.0, 0.0, 0x1.1b89fc783822bp-222, 0.0,
     0x1.d3dff42ac5cdcp-427, 0.0, 0x1.9d88e0ada065ap-474, 0x1.600ac2c1ceb27p-204, 0.0,
     0x1.0f2614646bfbap-788, 0.0, 0.0, 0.0, 0x1.8c3ca8339a545p-217, 0.0,
     0x1.d4516f0a701ffp-132, 0x1.2a2132506bed3p-843, 0x1.0665e733be092p-830, 0.0,
     0x1.68237884524d5p-550, 0.0, 0.0, 0x1.4a2f8dc62a3d4p-870, 0.0, 0.0,
     0x1.14d77051a7cf3p-444, 0.0, 0x1.8261db8ad1cadp-106, 0.0,
     0x1.758346c8d7e4fp-1019, 0.0, 0.0, 0x1.c1fe8491e7cffp-615, 0x1.3215729830c1ap-24,
     0x1.a9d77f9c7a82ap-695, 0x1.bb9653b35bb22p-899, 0.0, 0x1.e608c6192e1dcp-837, 0.0,
     0x1.25190017909e7p-560, 0x1.8a605f8167c14p-605, 0x1.beef08414e444p-866, 0.0,
     0x1.7336b744a250ep-633, 0.0, 0x1.71bf704df2efcp-690, 0.0, 0x1.b2837225553e5p-805,
     0x1.b445cb3f9bf21p-50, 0.0, 0x1.4fc7d97954a19p-919, 0.0, 0.0,
     0x1.2dbcc716e3379p-992, 0x1.9b68054ccbe57p-172, 0.0, 0x1.21b9a87d95ae1p-723, 0.0,
     0x1.c4bf735f38574p-816, 0x1.29c6a8f88bb0ap-343, 0.0, 0.0, 0.0,
     0x1.a799d1b70695p-756, 0x1.b6f341590cb23p-638, 0x1.1d8992983e82fp-825, 0.0,
     0x1.cc37b5084ef59p-23, 0x1.1abd813dbff4ep-525, 0.0, 0x1.8b44cab68048p-800,
     0x1.82ad212675e3p-413, 0x1.9b7b8c2f452c5p-426, 0x1.9aa56b499f55bp-494, 0.0, 0.0,
     0x1.254dc6185e719p-499, 0x1.c6a261574ea97p-845, 0.0, 0.0, 0.0,
     0x1.45ab47d3905b5p-329, 0x1.dfefbb62d9e36p-399, 0.0, 0.0, 0.0, 0.0,
     0x1.0ae623b4da917p-510, 0.0, 0.0, 0.0, 0.0, 0x1.49af66d642c7dp-315,
     0x1.68a1aa4203c96p-626, 0x1.e9b312257b298p-200, 0.0, 0x1.d00b02a264e05p-199, 0.0,
     0.0, 0.0, 0x1.eb398e8a085cap-345, 0.0, 0.0, 0.0, 0x1.2d9c6d76e1b3fp-143,
     0x1.416230b056017p-431, 0x1.76a7ff95a8f08p-131, 0x1.800696cd5b677p-982, 0.0, 0.0,
     0x1.077732f776a46p-833, 0x1.21d8b31bb22d9p-1003, 0.0, 0.0,
     0x1.4f36a6d72db7ap-482, 0.0, 0.0, 0.0, 0x1.da617ea8bcaf7p-863, 0.0, 0.0,
     0x1.056b8d389c2e3p-966, 0.0, 0.0, 0x1.2f5d45036edfep-220, 0.0, 0.0,
     0x1.e9d1c00a9952dp-459, 0x1.a0a11d62f3d3ap-29, 0x1.83476c4bd74bbp-379,
     0x1.7159d7a6da6aep-533, 0x1.65d52ffd5d53p-442, 0x1.2297172aab9efp-474,
     0x1.2a4807ad46926p-194, 0x1.539d2088a7aadp-626, 0.0, 0.0, 0.0,
     0x1.7cac0c1912d9p-690, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a62b810fd5a5fp-349, 0.0,
     0x1.8868b0e8a651ep-241, 0x1.4aa3d4d8e606fp-606, 0.0, 0x1.b70e6efea55c4p-659, 0.0,
     0.0, 0x1.d318a6c21899cp-449, 0.0, 0.0, 0.0, 0x1.a5e86b8352753p-771,
     0x1.b52c62d81f2ebp-321, 0x1.0972602b3de3p-143, 0.0, 0.0, 0x1.d6ec30d99eaffp-884,
     0x1.664057478675fp-945, 0.0, 0.0, 0x1.b69885485164ap-565, 0x1.a261a545f62b8p-148,
     0.0, 0.0, 0x1.c2a02b318a0fp-834, 0x1.c13b0d2c72012p-181, 0x1.aba8e690c3247p-845,
     0x1.a06dc7a016ab4p-75, 0x1.db7e9c0a6ce19p-295, 0x1.89d1750e49514p-435,
     0x1.cd05e4b1890e2p-202, 0.0, 0x1.cded2ba01d1a1p-499, 0.0, 0.0, 0.0, 0.0,
     0x1.0ffd52c737345p-159, 0x1.63d0fe968dff2p-333, 0x1.7644cc479dc0ep-898,
     0x1.d3eabbd2570d8p-158, 0.0, 0.0, 0.0, 0.0, 0x1.cbfde6a21bdep-785, 0.0, 0.0,
     0x1.b8f12ab797ac5p-953, 0x1.2b039979b4882p-172, 0.0, 0.0, 0.0,
     0x1.e95a543cfe9fbp-72, 0.0, 0x1.2d9d89eff43abp-494, 0x1.73243fa6b0258p-318,
     0x1.9aa9ff2381996p-944, 0x1.56adad5b4ef6p-640, 0x1.a0acb55590d8ep-501,
     0x1.697527cf2b0c9p-823, 0x1.308d3fb367a86p-558, 0.0, 0.0, 0x1.3c12d13c60fc5p-355,
     0.0, 0x1.565d3fa02a41bp-980, 0x1.7304278568759p-162, 0x1.407eb90d4bad6p-350,
     0x1.501374800887ap-583, 0.0, 0x1.0e79957edec76p-192, 0.0, 0.0, 0.0,
     0x1.604db32783a0bp-33, 0x1.1869b5e73ca1bp-234, 0x1.afe69f6ebb741p-879, 0.0, 0.0,
     0x1.610c16744483ep-1005, 0x1.43aedd55c2745p-962, 0.0, 0x1.82cb3fd3c7edfp-749,
     0x1.75c1a99f9402p-520, 0x1.5f3c6acab1a39p-300, 0.0, 0x1.a374a0c3c66eap-169, 0.0,
     0.0, 0.0, 0.0, 0x1.5b33367c59fd8p-762, 0x1.48e9464c5cc64p-281, 0.0,
     0x1.7df64588c5afcp-902, 0x1.4d3d6f039ec17p-238, 0.0, 0x1.2c5aa62a0c714p-964,
     0x1.6fa15acba126fp-868, 0x1.f001f43acebdcp-953, 0.0, 0x1.84a98d128eecp-929,
     0x1.d86b5903be318p-321, 0x1.87ef24ac848a1p-36, 0x1.a9228681b08b9p-123, 0.0,
     0x1.cfd6634f283a2p-672, 0x1.59991031e4e72p-842, 0x1.784f6d37aab7cp-204,
     0x1.52bbfc556ccbp-934, 0x1.65dbdcf1cbb97p-637, 0x1.591e9fab6b59ap-398, 0.0,
     0x1p0, 0.0, 0x1.77e5c4731e16ap-838, 0x1.01454365680d9p-901, 0.0,
     0x1.63837cbb70e28p-866, 0.0, 0x1.10249650b676cp-570, 0x1.0a53a9070cd87p-426, 0.0,
     0.0, 0x1.f3a2131f9f7a6p-936, 0.0, 0x1.e491267b50711p-478, 0.0, 0.0, 0.0,
     0x1.4fb9f003aae96p-151, 0x1.2cbc8bb5e8046p-588, 0x1.b82b41a9c7383p-971,
     0x1.ab8f62c7551a8p-279, 0x1.aea5baf4aa724p-725, 0x1.2931208c77513p-253, 0.0, 0.0,
     0.0, 0x1.dcdc33973dd8ap-38, 0.0, 0.0, 0.0, 0x1.07cd0cc302bd9p-1013,
     0x1.589525eb16ff7p-84, 0x1.0143c046ca7f3p-839, 0.0, 0x1.85c6932da0ddbp-108,
     0x1.aa1416c4ff03cp-886, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae90280494f3bp-565, 0.0,
     0.0, 0.0, 0.0, 0x1.96050dae74158p-108, 0x1.9c3d5c600a88cp-449, 0.0,
     0x1.7b16a7391191p-382, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07b0fe76a85c7p-823, 0.0,
     0x1.6384a6d2b9217p-475, 0x1.2e105f5d9e737p-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ee86c9ca1787p-710, 0.0, 0x1.8cac2691f56d8p-868, 0.0, 0x1.c88b8c4f9e2c5p-897,
     0.0, 0x1.7eda76adbf395p-397, 0.0, 0.0, 0.0, 0x1.11faeb977c1eap-920,
     0x1.07fb8663a0becp-311, 0.0, 0.0, 0.0, 0x1.c78fb1f1cca14p-16,
     0x1.1f8e50d961ac1p-591, 0x1.ac45364a49addp-395, 0.0, 0.0, 0x1.cd0e859671249p-402,
     0x1.456454657f41cp-380, 0.0, 0.0, 0x1.019a614493df8p-745, 0x1.58af32b5dc1f5p-214,
     0x1.ce69a925a71aap-555, 0x1.669a829e79698p-333, 0.0, 0x1.924eb3db62b8fp-717,
     0x1.e9bcf8a52915ap-373, 0x1.5b4c35d897e97p-985, 0.0, 0x1.042f4af8ff1f8p-664, 0.0,
     0.0, 0.0, 0x1.061bc5457948cp-591, 0x1.0a2591de1d54fp-868, 0.0,
     0x1.bde43cb14f253p-737, 0.0, 0.0, 0x1.82141409062p-334, 0x1.88ce988746f0dp-418,
     0.0, 0.0, 0x1.27e93c0fb037bp-641, 0x1.62dd66856e24fp-99, 0x1.f287aecf75ff1p-991,
     0x1.28395d10da626p-609, 0.0, 0.0, 0x1.21341baf21cd4p-474, 0x1.8b11dc5dd3723p-212,
     0.0, 0.0, 0x1.ed7d00abbdf63p-356, 0.0, 0x1.ca7b1fa8276a9p-93, 0.0, 0.0, 0.0,
     0x1.8859bcb88c047p-226, 0x1.3a83ebcf37a4dp-262, 0x1.f1e99895968c2p-342, 0.0, 0.0,
     0x1.76f92d5ec7676p-555, 0x1.6def6714823fep-764, 0.0, 0.0, 0.0,
     0x1.26cdd68c8dff4p-902, 0x1.a8e996d03eeacp-294, 0x1.44d5c5f9ea6dap-227,
     0x1.1ff98749190c7p-154, 0.0, 0.0, 0x1.e981b181dfcb7p-519, 0.0,
     0x1.24928554a343ap-1011, 0x1.73c8e3b643841p-830, 0x1.9d3cb016cc31ap-76, 0.0,
     0x1.ccb107f081ba3p-929, 0.0, 0x1.9981ccd03a0d1p-112, 0x1.42f397c9111b3p-537,
     0x1.88303b401c18p-990, 0x1.9ef0b082303efp-962, 0.0, 0.0, 0.0, 0.0,
     0x1.ea69bab7a7558p-439, 0.0, 0x1.7cd04d969f115p-1016, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c94c31781730cp-728, 0.0, 0x1.460d81b312bf5p-325, 0x1.9fa6741b42577p-72,
     0.0, 0.0, 0x1.1569dc1e75a2ap-543, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2a9f53ea87f54p-539, 0x1.58839831ca7ffp-309, 0.0, 0.0, 0.0,
     0x1.7019438e25011p-727, 0x1.35b45ffd393bdp-523, 0.0, 0x1.3bfee6903400fp-368, 0.0,
     0x1.f14b694f16b0ep-907, 0x1.514f2f79b47b3p-51, 0x1.eec8d8e779a45p-46,
     0x1.b18442963c1p-649, 0x1.fe98273b219bp-343, 0.0, 0.0, 0.0,
     0x1.e19663abb091dp-626, 0x1.5ced58401ec87p-250, 0x1.0a9aacd0a47ecp-494,
     0x1.72037bfbe46b5p-1002, 0.0, 0x1.aa954e2dd13e2p-904, 0x1.d529501a2dc8cp-135,
     0.0, 0.0, 0x1.1154dde4e800ap-590, 0.0, 0x1.bd4b4a3388c5ap-183, 0.0,
     0x1.5e0afe35861c3p-239, 0.0, 0.0, 0x1.8fbdfce23c077p-782, 0.0,
     0x1.4c30739e3b4c3p-531, 0.0, 0x1.a177a4518d7afp-605, 0x1.512778723f426p-485,
     0x1.09177b994b2ebp-992, 0.0, 0.0, 0.0, 0x1.932e3c19db59p-568, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09fbf7d3160bfp-317, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aca7b08ecbe7dp-605, 0.0, 0.0, 0.0, 0.0, 0x1.1b599cc5e299fp-18, 0.0, 0.0,
     0x1.bc9f0d210e41cp-202, 0.0, 0x1.efd7927d1c07cp-406, 0.0, 0x1.5e71f24b9afe6p-953,
     0.0, 0.0, 0x1.37d5b63fa5d0fp-922, 0x1.01b014bdd0101p-805, 0.0,
     0x1.daf1815843eafp-199, 0.0, 0x1.ea7ee7f31bbd6p-995, 0.0, 0.0,
     0x1.f31306a809386p-634, 0.0, 0.0, 0.0, 0.0, 0x1.6624d6f86e811p-312
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
            tmp1 = Sleef_cosd2_u35avx2128(tmp0);
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
    printf("Sleef_cosd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cosd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
