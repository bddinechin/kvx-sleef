/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd2_u35avx2128.c --function Sleef_sinhd2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0.0, 0x1.01da4c9fe3ffdp-332, 0x1.b46c1f25dcb28p-908, 0.0,
     0x1.7acc9aebd9fbcp-66, 0x1.e6d99e690e0eep-284, 0x1.d8a870d44a533p-589,
     0x1.00cffd173e565p-444, 0.0, 0x1.2ac8557cb58a2p-471, 0x1.9960a61578ac3p-862, 0.0,
     0.0, 0.0, 0.0, 0x1.8e7378bb789efp-532, 0.0, 0.0, 0x1.d582866cc263bp-34,
     0x1.98d838feed64dp-252, 0x1.cf6bc7fa1c38bp-145, 0x1.9c9146656669ap-861, 0.0, 0.0,
     0.0, 0x1.8e6a3efef43eap-332, 0.0, 0.0, 0.0, 0x1.3b5fb5dfd7326p-334,
     0x1.5dd17484b534ep-946, 0.0, 0.0, 0x1.f51dc099f60a8p-532, 0.0,
     0x1.dc857e9a63325p-923, 0.0, 0x1.64c09c0e12b0ep-272, 0x1.a8ebf2b41d3c3p-279, 0.0,
     0x1.ad46ad6900569p-1013, 0x1.99f66ed069f01p-534, 0x1.4f04ce808f641p-928, 0.0,
     0.0, 0.0, 0.0, 0x1.8c379a9ba7722p-349, 0.0, 0x1.6033482097e54p-999, 0.0,
     0x1.74db9b0c0d44ep-293, 0x1.dbb3df69a8977p-75, 0x1.9b744dff2ff3bp-461,
     0x1.e5ac046069a18p-744, 0.0, 0x1.88fcb511d4d15p-780, 0x1.12afa3ddcb0c8p-302, 0.0,
     0x1.cadab63242bd5p-926, 0.0, 0.0, 0.0, 0.0, 0x1.1e65394a01461p-169,
     0x1.352a8d419cba2p-709, 0.0, 0.0, 0.0, 0.0, 0x1.d50d8a5e57d12p-893,
     0x1.e9af4a62b4814p-362, 0.0, 0x1.1ab154e1e1de4p-109, 0x1.15483f04d27fap-368,
     0x1.286e63ff676f6p-580, 0x1.1b610df35a592p-976, 0x1.0f5fcbe39b761p-656, 0.0, 0.0,
     0.0, 0.0, 0x1.a4545004ac82cp-85, 0.0, 0x1.9535f484aa60fp-74, 0.0, 0.0,
     0x1.d9bfbf23319a6p-446, 0x1.eb16192319f3fp-44, 0x1.35d606a3c0709p-560,
     0x1.b6d2bfb9dec65p-882, 0x1.4041b2fc61f5ep-512, 0.0, 0x1.06852415c81c4p-301,
     0x1.24973ae870f63p-867, 0x1.54d734504bd31p-34, 0x1.e1faa190242e7p-722, 0.0,
     0x1.8e5e44fa583c1p-323, 0x1.f8923aef54954p-988, 0.0, 0x1.1977ad5dd5897p-438,
     0x1.77fce664c666p-466, 0x1.e27f655bb2cd7p-73, 0.0, 0x1.aae4380bcc592p-475,
     0x1.b4ab83116be0ap-508, 0x1.7f082036f61a1p-1008, 0x1.1cf6ba7ad7c97p-747, 0.0,
     0x1.5e084625eea46p-678, 0x1.6c3dbc38080dcp-782, 0.0, 0x1.3f3a8d3581bfdp-282,
     0x1.b1914bfa2d92fp-984, 0.0, 0.0, 0x1.9a9bf32553d53p-339, 0x1.0cfdf22dd17d6p-690,
     0.0, 0.0, 0x1.9f47c949a7ae1p-220, 0x1.72a4b39d0cb3dp-717, 0.0,
     0x1.d528229cb6577p-498, 0x1.f4d9af1389b7p-747, 0.0, 0x1.2e3873767eef9p-490, 0.0,
     0.0, 0x1.2a5ef2290f6d6p-659, 0.0, 0.0, 0.0, 0x1.06e3c53e5e50bp-52,
     0x1.82e4b1759982ap-71, 0.0, 0x1.391a0ad9997fp-127, 0.0, 0x1.de250e9db36f4p-36,
     0.0, 0.0, 0x1.23e1ed1153c99p-798, 0.0, 0x1.b4925a0f1054ap-741, 0.0, 0.0,
     0x1.83b8a30ea3403p-6, 0x1.892becddedfc9p-915, 0.0, 0x1.f3e100b71f772p-33, 0.0,
     0.0, 0.0, 0.0, 0x1.f1496319fe51cp-577, 0.0, 0x1.f3cb00c33d1ddp-585,
     0x1.35568bf0305eap-791, 0x1.8afc86ed6274cp-525, 0x1.22363aaacec75p-730, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8b3e706e0d40fp-101, 0x1.7bca96cfe6724p-781,
     0x1.bec718257a18cp-443, 0.0, 0.0, 0x1.86cc0250b1a96p-35, 0x1.09a35177afb6fp-640,
     0.0, 0x1.977b15b3cc4c8p-957, 0x1.94cc41167453p-262, 0.0, 0.0, 0.0,
     0x1.c7e9319d00b1ep-998, 0.0, 0.0, 0x1.a51684be2f27dp-409, 0.0, 0.0, 0.0, 0.0,
     0x1.0ce44e5621a96p-768, 0x1.d2ef6d62e515ap-709, 0.0, 0x1.bda4d83809cc7p-109,
     0x1.c9314e9642e26p-395, 0.0, 0x1.2f96f1e5b5adap-729, 0.0, 0x1.b5235f2522eacp-160,
     0x1.e3b5b9d44f68ap-54, 0x1.586c906a931eep-528, 0x1.33e7ddbbcf8aep-331, 0.0, 0.0,
     0.0, 0x1.1e8344a566ec7p-212, 0x1.0e02dcfa38e4dp-894, 0.0, 0x1.d5a2143bfeb35p-651,
     0.0, 0.0, 0x1.ddd0e13bcfa6bp-425, 0.0, 0x1.91683bfb248b1p-979,
     0x1.bad1ad4a45869p-985, 0x1.a3104b393f41bp-502, 0.0, 0.0, 0x1.5f4d9602fa052p-289,
     0x1.565d99d10fd1ap-389, 0.0, 0.0, 0.0, 0x1.178978b192956p-383,
     0x1.015e3bffe0bd3p-572, 0.0, 0.0, 0x1.c66a0a558c70ap-650, 0x1.d820b291292f1p-191,
     0.0, 0x1.8aa42b9ecc15cp-374, 0.0, 0.0, 0x1.159616575918ap-470, 0.0,
     0x1.0d3fc42cdb1b6p-497, 0.0, 0x1.55fed692e2976p-399, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2b6589bf7905p-934, 0.0, 0x1.34957fd4b77a3p-487,
     0x1.8bc1989f49e9cp-292, 0.0, 0x1.ed116f020bed2p-270, 0.0, 0x1.1edefc8bccd9ap-766,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48cd0c7f6b19fp-443, 0.0, 0x1.21df4d4fce971p-440,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8811642475d8cp-645, 0.0,
     0x1.4b0ee8d803c8fp-363, 0x1.3f7a277f871c8p-319, 0.0, 0.0, 0.0,
     0x1.fe58c9f419571p-491, 0.0, 0x1.28c56b242851cp-850, 0.0, 0x1.00a7a647c3449p-685,
     0x1.50ca7cdb2b393p-769, 0.0, 0x1.2aff58111d07fp-646, 0x1.c1d5cbb9222a4p-661,
     0x1.42a58135fa241p-414, 0.0, 0.0, 0.0, 0x1.c5a822fc1abf2p-442,
     0x1.595ce1fc36296p-479, 0x1.ead61ad3eafcfp-451, 0x1.1c1c4921c7752p-867, 0.0,
     0x1.c062898473f32p-231, 0.0, 0x1.f66c017c1e1dp-467, 0.0, 0x1.70ff03e8a6165p-644,
     0.0, 0.0, 0x1.3d8b505269a46p-755, 0x1.589fcf8213ee8p-783, 0.0,
     0x1.01b744d0dd394p-428, 0.0, 0.0, 0.0, 0x1.74a0412417a2cp-262,
     0x1.2dbba9d86c105p-592, 0x1.a29578c1b993fp-188, 0.0, 0.0, 0x1.ef89f01dfa0bp-155,
     0.0, 0x1.bfb83f43a8b4cp-771, 0x1.b81fa2b678242p-420, 0.0, 0.0,
     0x1.524f6a187ad73p-564, 0x1.569cf8750c2b4p-321, 0x1.316eba5df0115p-842, 0.0,
     0x1.5afac5e005dc6p-487, 0x1.588c1f655e202p-526, 0.0, 0.0, 0.0, 0.0,
     0x1.67184862b2258p-787, 0.0, 0.0, 0x1.88f35c8539761p-901, 0.0, 0.0,
     0x1.cae00b2d31af7p-766, 0x1.158758307b23bp-404, 0x1.3c9c511a927b7p-776, 0.0,
     0x1.1c0396d9310f6p-802, 0.0, 0x1.f3881114635ebp-83, 0.0, 0x1.79418c900424ep-569,
     0.0, 0.0, 0.0, 0x1.fb3b85881914ep-295, 0.0, 0.0, 0.0, 0x1.7813c3ea594dbp-867,
     0.0, 0x1.e36304aec91c6p-18, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6cc889e2c57c5p-359,
     0x1.5a26468f65221p-564, 0.0, 0x1.bcaa81c83ba5bp-931, 0.0, 0.0,
     0x1.c3554b6f45e6cp-524, 0.0, 0.0, 0x1.959b447f879afp-997, 0.0, 0.0, 0.0,
     0x1.a129a5237a5ffp-15, 0.0, 0x1.acf0a6b538f94p-227, 0x1.098e00cfe2216p-380,
     0x1.2ff7737447b56p-669, 0.0, 0x1.959054bc44e6p-7, 0.0, 0.0,
     0x1.4dd10b6d016ffp-575, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e546a6c1dcf4ep-251,
     0x1.2f5fa17174f49p-969, 0.0, 0.0, 0.0, 0x1.89dde79906fdp-440,
     0x1.d5a23fd5f8a56p-982, 0x1.311213aaefb16p-595, 0.0, 0.0, 0x1.1f377194fe6a1p-462,
     0x1.4028c11881e6ep-496, 0.0, 0x1.6b4c62a33d05ep-551, 0x1.05f2f86b050b1p-403,
     0x1.6c0fa0d2fa7adp-122, 0.0, 0x1.13507937b1b2ep-968, 0x1.1f4702fb4a4f7p-49,
     0x1.f5e48221e6ceep-520, 0.0, 0x1.a70314c64c8a6p-914, 0.0, 0x1.245c6d0a63e01p-910,
     0x1.9298c88bb9c9cp-598, 0.0, 0.0, 0.0, 0x1.d497a85602a97p-966, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3b355cdef1919p-239, 0.0, 0x1.1c16d3096daa8p-440,
     0x1.46150e2435c97p-67, 0.0, 0x1.dcad09cef4ec3p-59, 0.0, 0.0,
     0x1.408c7f8fbccp-890, 0.0, 0.0, 0.0, 0x1.33fd746107374p-518, 0.0, 0.0,
     0x1.bd60699a7d9ecp-484, 0.0, 0.0, 0.0, 0x1.18dc5b9b05074p-468, 0.0,
     0x1.467b245e63b5ap-63, 0x1.36e9b5acbf55bp-167, 0x1.4b2a41886d8a7p-926, 0.0, 0.0,
     0.0, 0x1.0c80c950895e1p-93, 0x1.7a2cc0d68362ap-706, 0.0, 0x1.c0657c7d4472ap-537,
     0x1.39cd98a4d658dp-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1292454851ec8p-750, 0.0, 0x1.68c2749770657p-642, 0x1.fcc46308d6442p-351,
     0x1.1739f121d5a81p-725, 0.0, 0x1.0e55acecef7bp-6, 0x1.db3409cb77bcap-553,
     0x1.b493a59615b3bp-240, 0.0, 0x1.e5c238ced52dfp-729, 0.0, 0.0,
     0x1.61fc6d9dd4083p-388, 0.0, 0.0, 0.0, 0x1.8e70e71423eebp-225,
     0x1.be40e71d87c35p-702, 0x1.979cd030b213p-943, 0.0, 0.0, 0.0,
     0x1.be63a47d4cef8p-878, 0.0, 0.0, 0x1.b7fa4d51fe7fp-903, 0.0, 0.0,
     0x1.3f218a8556191p-805, 0.0, 0.0, 0.0, 0x1.cf529981fc35fp-336,
     0x1.ad17e546dd978p-768, 0x1.ebac1e161b1fdp-280, 0.0, 0x1.31de803b8c5fcp-815,
     0x1.182831f5c0d67p-733, 0x1.b84a92a39e309p-933, 0x1.2e46980fdb3dcp-656, 0.0, 0.0,
     0.0, 0x1.f67d9dd54b6cdp-953, 0x1.75116d15ab3ebp-239, 0.0, 0x1.821104f9eca2fp-825,
     0x1.df6bcbc957c33p-893, 0x1.7b54d3cccad32p-261, 0x1.631a8e524fb6fp-855,
     0x1.8230b85a0579cp-894, 0x1.8de9ab6a218d9p-116, 0.0, 0.0, 0.0, 0.0,
     0x1.eba087b372764p-508, 0.0, 0x1.53c3891d7ab66p-660, 0.0, 0.0, 0.0,
     0x1.2896a11d53d4fp-934, 0.0, 0x1.4eb316ec2a8fbp-1006, 0x1.c301977324b7p-689,
     0x1.4693f86cc85fp-555, 0.0, 0x1.1ebd27d22576cp-608, 0x1.bf196ab939546p-416, 0.0,
     0.0, 0.0, 0x1.0b960268b558bp-476, 0x1.fde38d7c583f9p-388, 0.0,
     0x1.1f10cfbf2de23p-683, 0.0, 0x1.f1a8227aa8bacp-464, 0.0, 0x1.b540951a85e5dp-566,
     0x1.bc44a547bda92p-331, 0.0, 0.0, 0x1.b043d2a5c3d0fp-711, 0.0, 0.0, 0.0,
     0x1.bdb5f217fdd95p-970, 0x1.14e0df4dc62d1p-613, 0.0, 0.0, 0x1.a0780840d2e01p-416,
     0x1.b16b0e22326eap-925, 0x1.f8e3ba0cfd01ep-216, 0.0, 0.0, 0.0, 0.0,
     0x1.096aff97facafp-947, 0.0, 0.0, 0.0, 0x1.87d50dec8848p-154,
     0x1.10eff1aabd1bp-980, 0.0, 0x1.e9c552a6ca7c8p-284, 0x1.be3659f7a3bcp-750,
     0x1.4d75ad3b17d4ep-38, 0.0, 0.0, 0x1.5403aa0482dd7p-613, 0.0,
     0x1.cc3ee191c8589p-708, 0.0, 0.0, 0x1.94792e92df97bp-134, 0x1.5286316167b97p-610,
     0.0, 0.0, 0.0, 0x1.ec12e2712c8d8p-116, 0x1.419c7da6efb2cp-480, 0.0,
     0x1.b767936454839p-153, 0.0, 0.0, 0x1.b0fccc7d5417fp-980, 0x1.8f897747e95dbp-664,
     0.0, 0.0, 0x1.a935f7473015ep-305, 0.0, 0x1.6858d4ab2826cp-704, 0.0, 0.0,
     0x1.be32956d6fcd3p-322, 0x1.c69a99ea60e9ep-25, 0.0, 0.0, 0x1.384daea246c52p-746,
     0.0, 0x1.f9056c034d77ep-192, 0.0, 0x1.18e99e0bba4eep-1022,
     0x1.97a8e1119a5d3p-521, 0x1.be1e167fa80fbp-419, 0x1.0d44b52963035p-996,
     0x1.dfe0e075ffc1p-608, 0x1.4b02e1c56b851p-996, 0x1.2d705b30a6709p-917, 0.0,
     0x1.2532a104d6dd1p-764, 0x1.fdb772a496079p-187, 0x1.2f146541a8b76p-320,
     0x1.69b9c16a06322p-886, 0x1.7a608d35fd45fp-852, 0x1.252e615bbc5a2p-596, 0.0,
     0x1.74e65b0bae746p-413, 0x1.6efd6b9e9c305p-217, 0x1.336e83af3deb2p-729,
     0x1.02a92ed1e5e6ap-72, 0x1.d504f7c71592bp-304, 0.0, 0x1.bf5107413f515p-442, 0.0,
     0x1.652d7c1a44f5dp-406, 0.0, 0x1.dbe43b28df4aep-124, 0.0, 0x1.d5f76feb0cecfp-558,
     0x1.ba4185a4c90dap-905, 0.0, 0x1.83c6c18d181d9p-793, 0.0, 0x1.f80718e779fb1p-66,
     0x1.e02db97f703p-53, 0x1.18ac74f21836bp-329, 0x1.625b5a241080ep-555,
     0x1.ad1033f4fe8f7p-958, 0x1.f93c89bc646c2p-449, 0.0, 0.0, 0.0,
     0x1.d94140aea83a6p-444, 0x1.3988b4e57e469p-447, 0x1.4db39dce0c9cdp-602, 0.0, 0.0,
     0.0, 0.0, 0x1.e1f186d35ff37p-1000, 0x1.ae04bab39cd1bp-77, 0x1.e136242fd803p-178,
     0.0, 0x1.6de46427a372fp-755, 0x1.be9cdd2c7c63fp-860, 0x1.4296f0b5a0309p-123,
     0x1.60961e9b668e5p-779, 0x1.14e1526ce1b3bp-32, 0x1.e4a55e9dd54aap-792,
     0x1.3f797347cecb5p-295, 0.0, 0.0, 0.0, 0x1.25924d34e3026p-453, 0.0,
     0x1.1b44d5bea823ep-258, 0x1.70099c8cc058dp-593, 0x1.0a3c83c1f0d53p-362, 0.0, 0.0,
     0x1.5dccf780fd774p-758, 0x1.97caa1a3b7918p-281, 0.0, 0x1.f714ddc4619d1p-31,
     0x1.5233cf5d9e971p-676, 0x1.0b9c12e433b9p-252, 0x1.06335ba91a515p-760,
     0x1.53ddf4f4475a9p-860, 0x1.b223b195b6f7bp-235, 0x1.57a7e94f0141p-792,
     0x1.68ac3e10bd8efp-791, 0.0, 0x1.abd3ab27f0cd7p-310, 0x1.1f235d529efa1p-688,
     0x1.e2d06acd75e09p-654, 0.0, 0x1.d35613730e96bp-476, 0.0, 0x1.063d143151825p-152,
     0.0, 0.0, 0.0, 0x1.9c7cb1253f575p-513, 0x1.be07482226e32p-548, 0.0,
     0x1.1f9e8cfca905ap-442, 0x1.a7964e772b53ap-917, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.196ccd32876c2p-868, 0x1.72aae45d0277cp-203, 0x1.669908f9679c3p-698,
     0x1.74d564b529047p-501, 0x1.a61d8fe1fd3efp-556, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e78d3e7e82cebp-86, 0x1.9d6f802c1979fp-314, 0x1.a22e76f54d606p-552, 0.0, 0.0,
     0x1.d035018cdc59p-717, 0.0, 0.0, 0.0, 0x1.66ad7619bbecdp-400,
     0x1.6c4cb4dac7e19p-301, 0x1.d9ec184f2022dp-130, 0x1.67ec925e91fbap-618,
     0x1.7d70af32da6d4p-150, 0x1.51e069dc23c99p-582, 0.0, 0x1.ec88a70e1188ep-107,
     0x1.6b7e196f6bccfp-469, 0x1.4d9a25d2550ddp-593, 0x1.3d9ed26d1861fp-231, 0.0, 0.0,
     0.0, 0.0, 0x1.454dd9a9c0e08p-589, 0.0, 0x1.6e267e379fdcfp-1004, 0.0, 0.0, 0.0,
     0.0, 0x1.11fc63d61192bp-348, 0.0, 0.0, 0.0, 0.0, 0x1.a14845269bc97p-185,
     0x1.f1a0b02b3a36p-522, 0.0, 0.0, 0.0, 0x1.210e5b4db2656p-309, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2a4da49382c0fp-759, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.05509eb8f8aeap-490, 0.0, 0x1.f0962c61fd598p-294, 0.0, 0x1.16326373c906p-554,
     0x1.bbc532df9211fp-1004, 0.0, 0.0, 0x1.4add859e3b8b1p-17, 0x1.46560585dd99p-23,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34d717d741895p-861,
     0x1.b32995e7edd41p-199, 0.0, 0x1.f4fe1bdc5eab9p-67, 0.0, 0x1.915727b5e427ap-374,
     0x1.6c7134dd866bcp-578, 0x1.aa435182ce7a9p-498, 0x1.5eab7ad3e087p-491, 0.0,
     0x1.da7eceb7a3a4dp-846, 0x1.cf84e4030986cp-866, 0.0, 0x1.30c87b27ac7eep-644, 0.0,
     0.0, 0.0, 0x1.7e1deee34c7aep-819, 0x1.9eb29b748ade8p-1012, 0.0, 0.0, 0.0,
     0x1.12b8b8b073239p-13, 0.0, 0x1.9c4d9eb2925c7p-933, 0.0, 0x1.613d0c3dad34fp-457,
     0x1.452740429c11fp-174, 0.0, 0x1.d2d0497baec23p-316, 0x1.ea12543806009p-95, 0.0,
     0.0, 0x1.4cf76c93cd8f7p-546, 0x1.bdb178304b414p-997, 0.0, 0x1.35bc9739b7eb9p-986,
     0.0, 0x1.a5085ec0f4d4fp-52, 0.0, 0.0, 0x1.b0dc2d4afe396p-568, 0.0,
     0x1.824b9f6e846eap-52, 0.0, 0.0, 0x1.3133fcc9e0f2bp-291, 0.0,
     0x1.6f14c80332ad1p-535, 0x1.2e28fb90fd211p-969, 0x1.99586f7063226p-823, 0.0, 0.0,
     0x1.3b27e625623f2p-135, 0x1.b77f4d9d8d269p-699, 0x1.898fc8894162ep-4, 0.0,
     0x1.fb8bc3029cc9bp-732, 0.0, 0.0, 0x1.b8be60fe8273cp-639, 0x1.d8208d5e4b4f1p-771,
     0.0, 0.0, 0x1.2bb04c3db480fp-329, 0x1.30b56ba02ca0ep-338, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fb2bd35022be2p-570, 0.0, 0x1.93b9ec234d207p-834, 0.0,
     0x1.4bc2a1728b94ap-907, 0x1.5ef4dc4bf1815p-518, 0x1.fc47e6af4b62dp-119, 0.0,
     0x1.219545be33804p-921, 0x1.98fafde029861p-946, 0.0, 0x1.d0c2ac198c4c4p-341,
     0x1.a7e4084f5c0fp-644, 0.0, 0.0, 0x1.885fb4abffd7dp-485, 0x1.ee64a849df722p-471,
     0x1.acc68a7e78e62p-497, 0x1.93dff8fa7f6aap-494, 0x1.333ba652bbe54p-85,
     0x1.a29061fa28253p-536, 0.0, 0.0, 0x1.f48dba29cf688p-564, 0x1.d5c7cfa5f31aep-410,
     0.0, 0.0, 0x1.5473524709edep-237, 0x1.1048131242221p-257, 0.0,
     0x1.f1b35773299b5p-91, 0.0, 0x1.cd09386392eacp-676, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f00ac1b316a63p-821, 0.0, 0x1.763dbd1f5d16ap-772, 0x1.503527291ee92p-623,
     0x1.93c426e95f071p-961, 0x1.3b11225914b23p-610, 0.0, 0.0, 0x1.91fc54155d46ep-239,
     0x1.524d17b8496c4p-355, 0x1.e66dbcaa8cd15p-252, 0x1.3361edff124bdp-375,
     0x1.243a17efc7d62p-638, 0.0, 0.0, 0x1.070d6bdc6f37cp-759, 0x1.2631a96270f4dp-397,
     0x1.4557846fe73cbp-198, 0x1.5ca06155ddd65p-778, 0.0, 0x1.d564c6b0fca5fp-131,
     0x1.9419ba05595fcp-365, 0.0, 0x1.da8489b04e4cp-513, 0x1.e3f871073606ep-129,
     0x1.d1ad22ff35a37p-659, 0x1.5cf0738ebcc7p-278, 0x1.4b355e77a02fcp-961,
     0x1.03def525db425p-178, 0x1.39826481011f1p-32, 0x1.14d77a0d4ffa3p-183,
     0x1.15f5e2853530cp-728, 0x1.03978438cd4cbp-930, 0.0, 0x1.96f58539eb259p-416,
     0x1.f7c1cdb7baf78p-175, 0.0, 0.0, 0x1.c30addb5b50b6p-114, 0.0, 0.0,
     0x1.8e147380a6b6bp-720, 0x1.72f3b31f5002ap-537, 0.0, 0x1.a0a4a3c226a31p-566,
     0x1.8cbca92698722p-394, 0x1.52c5e5423d406p-295, 0.0, 0x1.191488f5bbd71p-968,
     0x1.67a2426eec9f4p-352, 0.0, 0.0, 0x1.fa4cfa7989bf1p-952, 0.0, 0.0,
     0x1.6d395b24c36f7p-70, 0.0, 0x1.28e41b0e7e4d3p-491, 0x1.83ca79c8486aap-461, 0.0,
     0x1.56d5567387108p-866, 0x1.4e521023b7cddp-409, 0.0, 0x1.8eb294187e3c2p-197, 0.0,
     0x1.ba425e8dfc823p-56, 0x1.fb6d0f8afd072p-1001, 0.0, 0x1.6ec7422ac7787p-777, 0.0,
     0.0, 0.0, 0x1.ac9402fa1a38dp-39, 0x1.e3f27eb088199p-966, 0.0, 0.0, 0.0,
     0x1.8e2397d1c8985p-72, 0x1.1ab0f496d04e9p-643, 0x1.981f55a55a2d2p-686, 0.0,
     0x1.6ea182f2d0a28p-892, 0.0, 0.0, 0x1.2b476b64c36f9p-714, 0.0, 0.0, 0.0,
     0x1.bc65f8b2c419bp-637, 0x1.2b04d5e1871acp-366, 0.0, 0x1.bc0709fd33ac6p-635, 0.0,
     0.0, 0x1.cab99be527cb3p-588, 0x1.a1369db1e762ep-784, 0x1.7b59a526ac826p-961, 0.0,
     0.0, 0.0, 0x1.fb271edd09a6fp-193, 0.0
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
            tmp1 = Sleef_sinhd2_u35avx2128(tmp0);
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
    printf("Sleef_sinhd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sinhd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
