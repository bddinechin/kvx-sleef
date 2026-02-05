/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd2_u35avx2128.c --function Sleef_logd2_u35avx2128 --headers \
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
     0x1.138dab2aae18p-308, 0x1.9d0b02c18446ep-426, 0.0, 0x1.76e3b774326f6p-841,
     0x1.752f333723c91p-730, 0.0, 0x1.d3b9c7b3704f4p-433, 0x1.10c9451a5ccd3p-600, 0.0,
     0.0, 0.0, 0x1.e0d293c59f398p-45, 0x1.5104813635193p-1014, 0x1.6f5a8b694c8c3p-931,
     0.0, 0x1.63d61cae380cdp-789, 0x1.f5427edcd7bd1p-874, 0.0, 0x1.5f94228bdb7fbp-262,
     0x1.173a5eda5ddbcp-664, 0x1.d9d12679bb6edp-779, 0x1.06ddce894a2ep-500, 0.0,
     0x1.7be36b80381aap-645, 0x1.241e61cad3bd3p-581, 0.0, 0x1.d2fde29ab7f6dp-865,
     0x1.e56ce67294b99p-868, 0x1.9ed8d36f56132p-857, 0.0, 0x1.ff5a9e7aed2cep-201,
     0x1.a70c4e92fe411p-52, 0.0, 0.0, 0x1.0ebc5f1ecb416p-63, 0.0, 0.0,
     0x1.d60e05ac61bb7p-498, 0.0, 0x1.493e4128c9b4bp-944, 0.0, 0.0,
     0x1.2f8e7c0a50c0dp-344, 0.0, 0.0, 0x1.fae4180a8b787p-368, 0x1.6dd926ea520f7p-735,
     0.0, 0.0, 0x1.18845d4f3feeap-454, 0x1.5e1ddb43b59b6p-643, 0.0,
     0x1.fef4d3285e27dp-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a34ecc5837e36p-906, 0x1.f955312cd3f3ap-778, 0.0, 0.0, 0x1.dfa7d1dddd9c9p-177,
     0x1.3c5e986c23d76p-4, 0.0, 0x1.95c4e25a72a15p-776, 0x1.0805d752d5b2ap-417,
     0x1.eaa323f84392dp-622, 0x1.22a7a72b86332p-763, 0x1.7436d9e10943ep-805, 0.0,
     0x1.7470d3d9efd32p-241, 0x1.00ff3bfb09f84p-258, 0.0, 0.0, 0x1.bee217eb90badp-519,
     0x1.3d1a55e78758bp-796, 0.0, 0x1.907e9f2351f7ep-702, 0.0, 0.0, 0.0,
     0x1.96dae626af4b1p-708, 0x1.642f4bc6a5798p-278, 0.0, 0.0, 0x1.3e25ef7bdfe95p-53,
     0.0, 0.0, 0x1.59862d01a17e9p-239, 0x1.5fedbfdeee36ap-925, 0.0,
     0x1.4961db50bcddcp-159, 0.0, 0x1.cb14c8507cfdfp-873, 0x1.2a6bb98a167f1p-412, 0.0,
     0x1.5d6005af48416p-60, 0.0, 0.0, 0x1.458fc639daed7p-394, 0.0,
     0x1.d9146cf9d1a59p-78, 0.0, 0.0, 0x1.c9e6f77bd328ep-646, 0.0,
     0x1.69f91284671c9p-318, 0x1.7592f7f2139c3p-578, 0x1.661c051c33d81p-7, 0.0,
     0x1.810a15a594e14p-920, 0x1.2072347d3ad0ap-123, 0.0, 0x1.9b6cde74dfd8p-254,
     0x1.67da68726ec1ep-311, 0x1.ba25d5a6d727ep-508, 0x1.6be105836791p-1004, 0.0, 0.0,
     0.0, 0x1.b6126db60933ap-193, 0.0, 0x1.0343a7f354207p-521, 0.0, 0.0,
     0x1.d632386eaa26cp-444, 0.0, 0x1.700800936a975p-153, 0.0, 0.0,
     0x1.c46b150ae1ef8p-368, 0x1.f1cb246c7f131p-265, 0x1.0ee610996c86p-307,
     0x1.faee61eec477fp-131, 0.0, 0x1.fb2e5370e3693p-954, 0x1.19dd6ef62c4bbp-491, 0.0,
     0.0, 0x1.410e01930c5a8p-788, 0.0, 0.0, 0x1.74b541b35678fp-607, 0.0,
     0x1.c017fa548370fp-260, 0x1.fa65ca43cb124p-470, 0x1.098b19ad93cd8p-295, 0.0,
     0x1.1774bf33d076ap-934, 0x1.221f5998ee96ep-920, 0x1.c7e07ba488a38p-656,
     0x1.f6497686226dap-592, 0x1.4adf746e66631p-220, 0x1.835d4ff65d09bp-287,
     0x1.2f9ec6d556fd3p-376, 0x1.5da03cd43a851p-79, 0.0, 0x1.327535e9f5289p-377, 0.0,
     0.0, 0x1.db572a2106c1fp-224, 0.0, 0.0, 0x1.f371c510b5733p-108, 0.0, 0.0, 0.0,
     0x1.7fad0624f445ap-298, 0x1.9af96a6c82cb2p-280, 0.0, 0.0, 0.0,
     0x1.895e9425628a4p-244, 0.0, 0x1.a1922a6feb0afp-56, 0x1.462dfcc45a272p-821,
     0x1.4e8572064d6e9p-794, 0x1.544c942520667p-1021, 0.0, 0.0,
     0x1.076760a295b33p-806, 0.0, 0.0, 0.0, 0x1.0dee7617387b1p-208,
     0x1.1dc8c0589deecp-670, 0.0, 0x1.24d62163c76a6p-794, 0.0, 0x1.adc548de5e081p-259,
     0x1.b12ac8f6f149ap-983, 0.0, 0x1.565c0f41f82bep-626, 0.0, 0.0, 0.0,
     0x1.aa47cf095d63ap-67, 0x1.6c530a27f31ddp-832, 0.0, 0x1.8b80e693f205bp-389, 0.0,
     0x1.cc3e7b4c04faep-791, 0x1.def0621559938p-942, 0.0, 0.0, 0.0,
     0x1.eb3bfd06da886p-742, 0.0, 0x1.581ee938600c1p-584, 0x1.a244a536a373dp-503,
     0x1.3f8e15f34206dp-533, 0x1.1c564d955e012p-277, 0x1.bfd03b47ba7b4p-500,
     0x1.38228d5a9c96fp-946, 0.0, 0.0, 0.0, 0.0, 0x1.24ed38048aeb8p-48, 0.0,
     0x1.241ca2b174d97p-784, 0x1.9b8f8d7e6ff2ap-325, 0.0, 0x1.9e925b5b89ceep-283, 0.0,
     0.0, 0.0, 0x1.961ee7c53b84p-332, 0.0, 0x1.a08885616ad28p-655, 0.0, 0.0,
     0x1.6da5e63416da8p-268, 0x1.c935a9630118cp-141, 0x1.e5ab5239dbee6p-1022, 0.0,
     0.0, 0x1.473201c4a6136p-679, 0.0, 0.0, 0.0, 0x1.ff688578d9da6p-48,
     0x1.b076cf86fc146p-359, 0.0, 0.0, 0.0, 0.0, 0x1.addc03539fe86p-946,
     0x1.cef225f6b1bbap-52, 0.0, 0x1.1f91964af824bp-960, 0.0, 0.0,
     0x1.468e2f2e193dap-378, 0x1.537f7e4140707p-382, 0x1.06a932b721cd5p-10,
     0x1.4925980926768p-224, 0.0, 0.0, 0x1.70e96ff5883f5p-174, 0.0,
     0x1.0100b7b1e3fap-438, 0x1.e9cd651adc2f8p-34, 0x1.4d5dabc1c6b87p-63,
     0x1.40e86d6998d32p-543, 0x1.f4db321501888p-739, 0x1.fef2d656d27dcp-104, 0.0, 0.0,
     0x1.d694d16d9845ap-174, 0x1.d426233f8e907p-381, 0x1.6115aea732217p-240, 0.0,
     0x1.92be59bffe78bp-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c858cf8f7c612p-667,
     0.0, 0.0, 0x1.75e60e210bc81p-494, 0.0, 0x1.0a168e4b2bc6dp-502,
     0x1.1a30c2d3328bep-7, 0.0, 0x1.7cf1ecdfc5d9bp-318, 0x1.51818e37ee015p-432,
     0x1.39c40491dccb3p-415, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbd0dc6f8171dp-390,
     0.0, 0x1.7b8c5434737bbp-581, 0x1.085e21d7bc78dp-343, 0.0, 0x1.dc2e7e220cd04p-636,
     0x1.7dd40a1019383p-505, 0.0, 0.0, 0x1.50abfbf63336bp-349, 0x1.21b4e8109b9f8p-98,
     0x1.ff4ab06c4f26cp-266, 0.0, 0.0, 0x1.994c3988c1b85p-974, 0.0, 0.0, 0.0,
     0x1.ff145196ed56ap-517, 0.0, 0.0, 0x1.2ac58dddd6c97p-48, 0x1.7ba3117ff101cp-676,
     0x1.0ed78a26ce2e7p-163, 0x1.ebefbafcf793dp-181, 0x1.7bf0a25a78d3p-992,
     0x1.7f2c597f166dap-553, 0x1.0f84fcca8870cp-231, 0x1.7764854934ed1p-91,
     0x1.c74a2e9189bdp-1, 0.0, 0.0, 0x1.4870b603f450ap-994, 0x1.4f288a2e0f7e4p-81,
     0x1.0c0c5d4cfb76ap-402, 0.0, 0x1.3472220b629f7p-885, 0x1.ce1ee24f15255p-694, 0.0,
     0x1.dd8aca205d124p-700, 0x1.f54641a7d95f6p-689, 0.0, 0x1.7f17993a1db6fp-290,
     0x1p0, 0.0, 0x1.9e466008baa96p-804, 0x1.2f13b4c7f122fp-571, 0x1.8b395ac986b85p-9,
     0x1.de36915c18ebp-554, 0x1.ec881b70a7d2dp-926, 0x1.c06c9399f3c66p-523, 0.0,
     0x1p0, 0x1.3bcfcda3cfae5p-293, 0.0, 0.0, 0.0, 0x1.e2de7cfe38749p-32,
     0x1.e6d7fd5133147p-928, 0.0, 0x1.940061e3d9921p-163, 0x1.34fdb525fe7dbp-909, 0.0,
     0.0, 0.0, 0x1.fa2112c6d0ae5p-325, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d488da6a2b6c7p-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30bbfd2647379p-444, 0.0,
     0x1.4e19cdf4c410cp-533, 0.0, 0x1.5bd6804f590a8p-69, 0x1.d5c5d78436824p-441,
     0x1.40e96b7fdcd6fp-513, 0x1.f5d915b5d6d8p-844, 0x1.eb4a6157a2482p-811,
     0x1.ce776fd6e2b69p-4, 0.0, 0.0, 0.0, 0.0, 0x1.8316a12faf08ap-441,
     0x1.16c6fd743ae57p-436, 0x1.98ae7e3a9b191p-758, 0.0, 0x1.23da7f925fbe7p-1015,
     0.0, 0x1.a19d1601d2d6p-52, 0x1.53689a60e6505p-555, 0x1.9c72193017c65p-334, 0.0,
     0x1.393f577aafbc7p-99, 0.0, 0x1.da886c60a6e69p-549, 0.0, 0x1.99883c80c44f2p-710,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd56da6236639p-905, 0x1.fcd34b7f03e67p-573, 0.0,
     0x1.1ddd1eb3fffcap-990, 0x1.f9420daee7a71p-1004, 0.0, 0x1.84020a6d9cc62p-811,
     0x1.c44ac56e7d7b7p-654, 0x1.1b242433bb3b1p-373, 0x1.94996c91ee8c9p-172, 0.0, 0.0,
     0.0, 0.0, 0x1.c51ef530452d7p-573, 0x1.c4b71ee263eadp-759, 0.0, 0.0,
     0x1.a0830a4ba7735p-1, 0x1.6d47210ceabdbp-283, 0.0, 0.0, 0x1.ad9b5496e9856p-656,
     0.0, 0x1.1f46541a17f4cp-499, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c2f0a4154088p-513, 0.0, 0.0, 0x1.cd16caee18664p-468, 0.0,
     0x1.07931de06b124p-567, 0.0, 0x1.82fee171f37bfp-256, 0x1.e2c6179798032p-280, 0.0,
     0x1.e979c682e5ab7p-1010, 0x1.373da8c197ce2p-800, 0.0, 0.0,
     0x1.663e78c90eea5p-118, 0.0, 0.0, 0.0, 0.0, 0x1.f0e9773a03a2ep-300, 0.0,
     0x1.7a2c1dc499d8bp-292, 0.0, 0.0, 0x1.8b8f885ea0337p-517, 0x1.3f38135cf2a75p-205,
     0x1.bb2c06ba3208ap-560, 0x1.457b30da93ea3p-939, 0.0, 0x1.23ed31741db8ep-844,
     0x1.7426e1618b9e1p-675, 0.0, 0.0, 0x1.b7a8891c91a18p-758, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8f2e19510e0fep-585, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b0d691c91ebdp-490, 0x1.1e4902111c8f3p-212, 0.0, 0.0, 0x1.8f7a74c242258p-208,
     0.0, 0.0, 0.0, 0x1.2031b5bf41c92p-177, 0x1.c36e75ea86923p-192, 0.0,
     0x1.fcbaf0de5383p-974, 0x1.637b68742b414p-59, 0.0, 0x1.f8de91eb116eep-134,
     0x1.4a4c142f65d6bp-482, 0x1.3cb2868578f96p-42, 0.0, 0x1.d1cc85635d2dbp-374, 0.0,
     0x1.6fa50ffc826b3p-108, 0.0, 0.0, 0x1.88d1fbc9b8021p-639, 0x1.ea7a60d8eb797p-395,
     0.0, 0x1.e1a880585cb27p-42, 0x1.d6d9ad0740c1p-998, 0x1.136a8ee29f327p-594, 0.0,
     0.0, 0x1.a8b5b6956934p-402, 0.0, 0.0, 0x1.71518dc50056ep-574, 0.0,
     0x1.65b90f3224d53p-984, 0.0, 0x1.c4d696181f2ddp-996, 0x1.c639c78a07b4ep-76, 0.0,
     0.0, 0.0, 0x1.e92e1fff194fcp-378, 0x1.1d417820c21fap-943, 0x1.f250359725f6fp-201,
     0x1.a5cd10ee79f79p-185, 0x1.971230dfda14dp-599, 0x1.0143d01c3382p-866,
     0x1.c9224d0e4b004p-119, 0x1.114913cec63ap-788, 0x1.f88b7f82b4129p-474, 0.0,
     0x1.5f738bd7f3ef5p-55, 0x1.158b94bf3780ep-640, 0x1.cef3721462592p-79, 0.0,
     0x1.181bc9d20d7a9p-890, 0x1.4c0598497b8d4p-914, 0x1.1566678e3d66cp-975, 0.0,
     0x1.652d143da97ccp-861, 0x1.51769c7aafd37p-673, 0x1.d17f4b7afb1f8p-8, 0.0, 0.0,
     0.0, 0x1.ff6cfadcc5ac1p-864, 0.0, 0x1.6f30951f47694p-1012,
     0x1.36605dd0e22f8p-517, 0.0, 0.0, 0.0, 0x1.17c0a4b85cfecp-688, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.50fe96a355d1dp-372, 0x1.2cdf99daa89cp-154,
     0x1.f42e92f07d26dp-37, 0x1.f12ec838e1b2cp-167, 0.0, 0x1.3daeb6b9d59cdp-328, 0.0,
     0x1.34a09c4837c25p-896, 0x1.b2a3ab8d2833dp-52, 0.0, 0.0, 0.0,
     0x1.3bc36d63ef745p-858, 0.0, 0.0, 0.0, 0.0, 0x1.23999d808e784p-213,
     0x1.b08887fede33ap-1003, 0.0, 0x1.1c466498a06c2p-48, 0.0, 0x1.9f585065682bbp-879,
     0x1.8d1d14b0c5bc2p-535, 0.0, 0x1.30f4b2ac25839p-537, 0.0, 0x1.d0cdf5b89b9f4p-309,
     0x1.b71001df9fc99p-593, 0x1.57e344f577be6p-412, 0x1.9fbbeee100cf7p-858, 0.0,
     0x1.07ac39cb5ca12p-674, 0.0, 0x1.c212ad127d493p-999, 0.0, 0x1.cb5d8d794f269p-888,
     0.0, 0x1.850020a2141a4p-250, 0x1.5d6bc79e8a2dep-724, 0.0, 0.0,
     0x1.8e699fa33020bp-562, 0x1.9c60952f9eb68p-598, 0.0, 0.0, 0x1.ca2e6ed54d6d2p-157,
     0.0, 0x1.47c79aebd9fe2p-472, 0x1.721fa000190f5p-954, 0x1.c9281b7ad0f08p-147, 0.0,
     0x1.39ea43e5ae66ap-869, 0.0, 0.0, 0.0, 0x1.d8f3d49757ddap-449,
     0x1.aa6495b876affp-160, 0.0, 0x1.e50e62bbd8fbep-74, 0.0, 0x1.43d6152c813bap-962,
     0.0, 0.0, 0x1.2fb0a440c3763p-557, 0x1.0bad056df9a14p-744, 0.0,
     0x1.1a562f7720852p-715, 0.0, 0.0, 0x1.ab4aa04cb482ap-437, 0.0, 0.0, 0.0,
     0x1.7fc50b8911ff1p-140, 0.0, 0x1.b7bf137f8506bp-824, 0x1.d0be91a057de3p-975, 0.0,
     0x1.428dbc7cbe83p-499, 0.0, 0.0, 0x1.d585c5ac768d9p-224, 0.0,
     0x1.88d7ac5dfb7b9p-398, 0x1.a72fd7a10724fp-540, 0x1.684f47179fb83p-996, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5fb13ba8b5a21p-53, 0.0, 0x1.0bfb7c3c5c499p-845, 0.0,
     0x1.7418ab02f4994p-440, 0.0, 0x1.78aaf7ae5ced4p-265, 0x1.bab295b773b74p-54,
     0x1.5542a809eb542p-928, 0x1.972662d79c631p-523, 0.0, 0x1.daacf72cefb08p-972,
     0x1.5f38cb498a02ep-108, 0.0, 0x1.12a6b15431a12p-348, 0.0, 0x1.15b39d081edaep-202,
     0.0, 0.0, 0x1.92281b2cae80ep-182, 0.0, 0.0, 0.0, 0x1.02d93aaa94aeep-112, 0.0,
     0.0, 0x1.65ac1831e2ef9p-69, 0.0, 0x1.2c5f7eff3bc07p-644, 0.0, 0.0,
     0x1.5e57d5049c935p-495, 0x1.07b709a0393fep-817, 0.0, 0.0, 0.0,
     0x1.15e550f35da64p-192, 0x1.fdefa897363f7p-851, 0.0, 0x1.3ccd46b41f2a7p-497, 0.0,
     0x1.b4154badf08c8p-849, 0x1.41004e48c312bp-904, 0x1.22af96c8a2251p-426, 0.0, 0.0,
     0.0, 0x1.9928cd9a144cep-326, 0x1.d377ce5bdc54dp-337, 0.0, 0x1.af1bed192d23dp-400,
     0x1.3be81df66c122p-71, 0.0, 0.0, 0x1.04c48d27fe33fp-592, 0.0,
     0x1.3602c526abe6ep-979, 0x1.5d8f16ca1711bp-268, 0x1.359e50b89145dp-373,
     0x1.c48c1f4b16bcbp-497, 0x1.7efabd29818b2p-429, 0x1.9e9c28c8e7a64p-139,
     0x1.0c2d2cb64135bp-540, 0x1.d111f321a2d22p-396, 0x1.0ccd92bf15576p-171,
     0x1.93568890fa502p-963, 0x1.171b4916b0fafp-885, 0x1.46bd28df5243ep-615,
     0x1.8aa08443016e4p-856, 0.0, 0.0, 0.0, 0x1.73c061a1d54b4p-633,
     0x1.f487551379a7ap-702, 0.0, 0x1.baee7860f221ep-952, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b0cf2ec2fa19p-210, 0.0, 0.0, 0.0, 0x1.f203c1a32ea58p-508,
     0x1.fdba47f59996ep-102, 0x1.35a3bf5ecce88p-278, 0.0, 0x1.935c49fb92cb6p-555, 0.0,
     0x1.c44fbe69a27abp-801, 0.0, 0.0, 0x1.62fc52ca3d135p-506, 0x1.590dbf14c36f5p-849,
     0x1.db642b28a74e8p-372, 0.0, 0x1.13f432ee767c8p-802, 0.0, 0x1.f3bd874d73e68p-684,
     0.0, 0x1.badc8309bb3d3p-177, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40bde15d66bd8p-813,
     0.0, 0x1.c8b8805cd235ep-873, 0x1.66e2c72eccc8fp-296, 0x1.0e2f59f2dd2b1p-596, 0.0,
     0x1.9567d58354cdep-945, 0.0, 0x1.e0330021f51dap-129, 0x1.3ec23ce02886ap-734,
     0x1.feb1269504bfdp-251, 0.0, 0x1.8bc5b6f55cde9p-790, 0.0, 0.0,
     0x1.3cbd092b9e3bbp-28, 0.0, 0x1.edf3368dbbc36p-602, 0x1.e7e85a7dfb3cfp-42, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b9d08aa0c4e32p-719, 0x1.e758b7c857fdap-209,
     0x1.2e842fb0ee1b8p-354, 0x1.e68b70e6aa48p-818, 0x1.f979a95120e3p-847,
     0x1.564a24cfa999bp-827, 0x1.b02580aaf7a5ep-186, 0x1.d23fd3ffcf7d4p-925,
     0x1.a5a7d5df1e4bcp-369, 0.0, 0.0, 0.0, 0x1.444560720b73bp-663, 0.0, 0.0,
     0x1.3790c3c25908ep-770, 0x1.4931490a2c731p-655, 0.0, 0x1.6dd416274f7adp-992, 0.0,
     0x1.2afc74eb87504p-391, 0x1.cce060e2d5e4fp-404, 0.0, 0.0, 0x1.7c5ec64197a09p-958,
     0.0, 0x1.5df7e78be0ccp-443, 0.0, 0.0, 0x1.bc5f5be5225b9p-612,
     0x1.f949fab42b2c7p-635, 0.0, 0x1.97292a6cc2c81p-1009, 0.0, 0.0, 0.0,
     0x1.ccc7e13ab341dp-60, 0x1.b0a34aa3510c3p-14, 0.0, 0x1.9fba46cd0690bp-542,
     0x1.5ce176b014302p-629, 0x1.189f00625e78p-712, 0x1.a7147b94539fap-684, 0.0,
     0x1.828fd1441e42cp-346, 0.0, 0.0, 0x1.eb383fc094497p-546, 0.0, 0.0,
     0x1.67f9bb4e1c029p-877, 0.0, 0x1.8c0c9f61e865ap-275, 0.0, 0.0, 0.0, 0.0,
     0x1.0cf1a0ba05722p-197, 0x1.603da6eac78fdp-391, 0.0, 0x1.08761cd394443p-293, 0.0,
     0x1.7ab2202257ad1p-593, 0x1.342ebe6e54cabp-748, 0x1.5a6f6f24f81d7p-185, 0.0, 0.0,
     0x1.94be4a2b0f915p-366, 0.0, 0.0, 0x1.6fb0ec0b31fa5p-195, 0.0, 0.0,
     0x1.887a48d7d11dcp-743, 0x1.8dcbc5823e1cp-602, 0x1.eae9d13c9ff3bp-862, 0.0,
     0x1.5087072203b89p-999, 0.0, 0x1.51bac4ea703d8p-910, 0.0, 0x1.c3950dc3b31eap-249,
     0x1.1e3006f65020bp-495, 0.0, 0x1.05f38298b2383p-611, 0.0, 0x1.2636d74e1512ep-154,
     0x1.e3750eb43bc0cp-320, 0x1.b5343512f25cfp-740, 0x1.3c5891aaf20e8p-660, 0.0,
     0x1.ed66d61d3f827p-837, 0.0, 0x1.327b062972796p-685, 0x1.03395ca2d00eap-806,
     0x1.4937d69c8dc8dp-129, 0x1.d3c0547bd4669p-545, 0.0, 0x1.ede428d31c7f4p-1013,
     0.0, 0x1.bfe1510224286p-893, 0.0, 0x1.7cf98d2751f28p-639, 0x1.5b6e9499244dfp-951,
     0x1.1b1212fa8c343p-412, 0x1.86571c59bf01ap-103, 0x1.67450abf0291p-486,
     0x1.ad7d59dfdbb48p-780, 0x1.1d6d6b8e66b31p-625, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea453fb315853p-124, 0x1.8b8aa48b007b3p-617, 0.0, 0.0, 0x1.481daa3bc7e69p-392,
     0x1.3f7a9f0098fe5p-848, 0.0, 0.0, 0.0, 0.0, 0x1.d001f204a3358p-243, 0.0, 0.0,
     0.0, 0x1.59657a3dee8f5p-12, 0x1.6429fa890731p-11, 0.0, 0.0,
     0x1.ef8411659a2e5p-560, 0.0, 0x1.6c63d71a1dd12p-687, 0x1.48ee24081ededp-313, 0.0,
     0.0, 0x1.7a01156a149a1p-967, 0x1.99946e344f0d3p-371, 0.0, 0x1.5fb10a54dab5ep-122,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8bd5363d76a1p-744, 0.0, 0x1.c598e9052f92dp-412, 0.0,
     0x1.63801f4673115p-926, 0x1.17e69e3654f67p-263, 0.0, 0x1.e73c36d68047dp-887,
     0x1.10d4a76f5e998p-354, 0.0, 0.0, 0.0, 0x1.9b29e981e256cp-862,
     0x1.edd9937e91804p-543, 0x1.f8b087f1bb958p-506, 0x1.f7e46bba589ecp-584, 0.0, 0.0,
     0x1.e2daae652b2f3p-364, 0x1.3412f6922174fp-293, 0.0, 0x1.54266af3a5714p-11,
     0x1.fcef80a20bafdp-79, 0.0, 0x1.fa094938674b1p-86, 0x1.833518602c623p-875,
     0x1.eb0e131f41112p-924, 0x1.970e79d83595dp-862, 0.0, 0.0, 0.0,
     0x1.1847048e9545ep-1011, 0x1.7548498971e0fp-947, 0x1.f6e6e2f06d60cp-851, 0.0,
     0x1.f84bf33a636cep-131, 0.0, 0x1.62d050f6dba7ap-610, 0x1.4e4ca5f9c319ap-184,
     0x1.71c079ae7ce75p-317, 0.0, 0x1.b256b7d9382c2p-665, 0x1.57df7625b379ep-9,
     0x1.4056884e37a2p-426, 0x1.bdff8e411ff54p-488, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_logd2_u35avx2128(tmp0);
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
    printf("Sleef_logd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_logd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
