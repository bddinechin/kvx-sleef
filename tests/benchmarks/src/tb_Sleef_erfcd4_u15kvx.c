/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcd4_u15kvx.c --function Sleef_erfcd4_u15kvx \
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
     0.0, 0.0, 0.0, 0.0, 0x1.00d550bb94216p-705, 0x1.8efb23c88cb5p-754, 0.0,
     0x1.f81be3f8b9867p-471, 0.0, 0.0, 0x1.becc19588f755p-711, 0x1.5902966af07b3p-937,
     0.0, 0x1.579fbcb0ca874p-227, 0.0, 0.0, 0x1.b61d31c7ca77cp-276,
     0x1.4656ad62c884ep-575, 0x1.b00b8846065dp-418, 0x1.f2546a1266cfdp-41,
     0x1.9de7e9562659cp-804, 0.0, 0x1.57fea0f9903f2p-103, 0.0, 0x1.cc190d2205cedp-31,
     0x1.fb5f8a17113d3p-93, 0.0, 0.0, 0.0, 0.0, 0x1.1f1150d153d14p-160,
     0x1.4110118207a94p-843, 0.0, 0.0, 0x1.d4b60b2ca9568p-628, 0.0,
     0x1.79f04604a5c21p-770, 0x1.ba0821ab7d2c1p-536, 0x1.d7efe4f8cff5p-213, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4d63f17096f45p-328, 0x1.46f25e7539c2fp-767, 0.0, 0.0,
     0.0, 0x1.244eb219c52bep-535, 0x1.a2160a1542e8dp-851, 0x1.1c1a550542fc5p-290, 0.0,
     0x1.4abd966810679p-234, 0x1.9bcdb86eb9094p-197, 0x1.8155eb6fc0473p-279, 0.0,
     0x1.d2ee326048875p-718, 0x1.3dde452dc7cc4p-260, 0x1.b07627d77eb3p-343,
     0x1.a47fcd5517d9bp-727, 0.0, 0.0, 0.0, 0.0, 0x1.16981f8b9050ap-694, 0.0, 0.0,
     0x1.841ab41e55ba3p-883, 0x1.ec8bfa234c0c2p-417, 0x1.731cea3f78216p-352, 0.0,
     0x1.ddde786a37302p-799, 0.0, 0.0, 0.0, 0x1.fa09ddcc97a92p-919,
     0x1.244c5f5fbe37fp-840, 0.0, 0x1.e22070fa3528ap-770, 0x1.1eea44ea6901ep-657, 0.0,
     0x1.7ac5553f8c8ddp-79, 0x1.9af817f0d0ff7p-180, 0.0, 0x1.8e01c56228fefp-131,
     0x1.ebe460454cab3p-762, 0x1.311b1edfe7c5ap-833, 0x1.8c06018518df5p-649,
     0x1.1a20500c73cbp-382, 0.0, 0.0, 0x1.53dfac8dab736p-935, 0x1.ae5950d9c8a49p-502,
     0x1.f185f79e33f22p-680, 0x1.429c7f24351dep-926, 0x1.0fcfee827a59p-50,
     0x1.034db9fba46fep-104, 0x1.b5927fac9525p-215, 0x1.9d380d379923dp-215, 0.0,
     0x1.13baa4554dfb8p-689, 0.0, 0.0, 0x1.2010bb0e45986p-162, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7fefa5108a8b8p-314, 0x1.b45a3f94a3a47p-669, 0x1.8289906e2279fp-999, 0.0,
     0.0, 0.0, 0.0, 0x1.198b49db1cd71p-375, 0x1.b590585b266a8p-291,
     0x1.40f0517bffe1bp-806, 0x1.ce975c0fd8b69p-802, 0.0, 0x1.5c0c387f4116fp-527, 0.0,
     0.0, 0x1.ff6f6d8142c1ep-968, 0x1.90e7fc29fb022p-637, 0.0, 0x1.ea90243a54273p-730,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44f6c6e255f0ep-948,
     0x1.af7c4a1ab790bp-556, 0.0, 0.0, 0x1.e52c75e9a1eefp-238, 0x1.9cdeb096f0f2cp-238,
     0.0, 0x1.1eb2ca552a56dp-918, 0.0, 0.0, 0.0, 0x1.216aa0e4610e3p-813, 0.0, 0.0,
     0x1.e6b55fb444a5cp-91, 0.0, 0.0, 0x1.085f2e511cf8bp-465, 0x1.200051bf2ba3fp-704,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98a42595875bcp-190, 0.0,
     0x1.54e1c9e6bdbe3p-577, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.149062df944b9p-487, 0.0, 0x1.41993efc68c44p-826, 0.0, 0.0, 0.0,
     0x1.aeda3d6a5d127p-769, 0x1.5ece47b5563e9p-103, 0.0, 0.0, 0.0, 0.0,
     0x1.4fab43c404471p-810, 0x1.8c6026ad2e1a6p-501, 0x1.28b0b1d7d497cp-190,
     0x1.003eb9b1ce8edp-600, 0.0, 0x1.41172718436ep-60, 0x1.38ac6f3b1ec54p-1011,
     0x1.34de31434715bp-800, 0x1.f887c08c5f2p-934, 0.0, 0x1.9c2f755fbdc17p-373,
     0x1.3b941c3ab575cp-325, 0x1.a2f479f6e56f1p-758, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c7cb3cbb84627p-600, 0x1.42939b589d3dfp-639, 0x1.0903348c7fef1p-49,
     0x1.0064c0d12a346p-975, 0.0, 0.0, 0.0, 0.0, 0x1.d22fed8ffadedp-553, 0.0, 0.0,
     0.0, 0x1.61a488caa0763p-670, 0x1.5581f703b7c73p-110, 0x1.97a8389c16459p-480, 0.0,
     0x1.49130c06ecd44p-340, 0.0, 0x1.fd1a0d821ad97p-940, 0x1.45c3a4e53130ep-153,
     0x1.3f37c6b4b65b3p-740, 0.0, 0.0, 0x1.7780c7e1bd0a7p-868, 0x1.e0473575b0ff3p-986,
     0.0, 0x1.28861fb258f45p-272, 0x1.a07a8de99caffp-805, 0.0, 0x1.ade65acd51a53p-221,
     0.0, 0x1.a16d983ac8624p-319, 0.0, 0x1.d11fae6d6c02dp-820, 0x1.699dc4f99554ep-442,
     0.0, 0x1.aa29ae4a8bfabp-411, 0.0, 0x1.a6c3ab8b0444p-82, 0x1.0b24d425d7d5ep-195,
     0x1.0259b703e9f7p-464, 0x1.bf8036f936e4cp-209, 0x1.beb20b6108e43p-185,
     0x1.acdb3308362aap-821, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08a3ede9914aep-697,
     0.0, 0x1.bfc3610603d6fp-261, 0.0, 0.0, 0.0, 0x1.fe5a55bc185d1p-10, 0.0, 0.0,
     0x1.c90f174f7dd0bp-596, 0x1.efbc65391c475p-199, 0.0, 0.0, 0.0, 0.0,
     0x1.d9b7886dd88e1p-708, 0.0, 0x1.d101eca39c14p-408, 0x1.b5008e7331243p-748,
     0x1.e55454df635dfp-1012, 0.0, 0.0, 0.0, 0x1.86e01acfaa232p-197, 0.0,
     0x1.1b7531ce3a16dp-92, 0.0, 0x1.a9f80258c56a1p-329, 0.0, 0.0,
     0x1.6c0e0a01b5f04p-106, 0.0, 0x1.3478e29cd48bp-723, 0.0, 0x1.f7236e3ac509bp-537,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd206ec1eda46p-754, 0x1.5cb317ca67573p-38,
     0.0, 0.0, 0x1.f291ab461c677p-785, 0x1.b18e3d23e50c5p-856, 0x1.a54c5634d6032p-757,
     0.0, 0.0, 0x1.8fc7916d388d7p-351, 0x1.77e5c9007cf56p-840, 0x1.af7f11719090cp-513,
     0.0, 0x1.c4d0c6b532b2p-633, 0x1.e238339a70d53p-643, 0x1.4901782d60aap-744, 0.0,
     0x1.e4cd4adcfaffdp-45, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e3dc49f82c3fcp-496,
     0x1.1f942c0dfb95ep-749, 0.0, 0x1.0314f203a50f1p-783, 0.0, 0.0,
     0x1.ab84db36506e4p-643, 0.0, 0x1.8cca675d3083cp-345, 0x1.33a8a10134495p-999,
     0x1.04b9df0188fb5p-598, 0x1.5aad450e60be6p-940, 0.0, 0x1.35a8332e11779p-54, 0.0,
     0.0, 0x1.787d5ee0822d6p-238, 0.0, 0x1.788f493b8ff6ap-472, 0x1.88e53a4fa57a2p-338,
     0.0, 0x1.6d6e7b8dd9023p-146, 0.0, 0x1.8919492901f55p-180, 0x1.e4792a927b38dp-476,
     0x1.5a4b90292c593p-963, 0x1.26e84228313bap-284, 0x1.9f9db19b8f06ep-112,
     0x1.d8113d8fa373bp-960, 0.0, 0.0, 0x1.b925969424ea1p-308,
     0x1.77254950f0101p-1012, 0x1.5f3040e6154e4p-733, 0.0, 0x1.5162677fbceb4p-703,
     0x1.6b7214ba8f54dp-893, 0.0, 0.0, 0x1.85f708125e6d2p-67, 0.0,
     0x1.a62f2ed20970ep-816, 0.0, 0x1.603ccdaba9e2dp-341, 0x1.6e9431fa337ap-984,
     0x1.db03cbade1769p-658, 0.0, 0x1.0db702c3c29p-151, 0x1.ea70596addd9ep-68, 0.0,
     0.0, 0x1.cd27f28bd909dp-1004, 0x1.a1c21d81a20e3p-334, 0x1.eb2c4ec2a8636p-31,
     0x1.0011f4738fbd2p-239, 0.0, 0.0, 0.0, 0x1.f570814c516e3p-483,
     0x1.8e4c9f97b74bbp-738, 0x1.cb8449387c264p-615, 0.0, 0x1.cbc581f4cc678p-251, 0.0,
     0.0, 0x1.7741d21545ab2p-126, 0x1.dcefc4b5c37aep-122, 0x1.eabf26ee7d0b3p-200,
     0x1.3129f9db78aa5p-756, 0.0, 0.0, 0x1.3829f722786b5p-615, 0.0,
     0x1.ca59ef510a26bp-819, 0.0, 0x1.b4ce3a7a3159p-845, 0x1.fb6c1761546a9p-949,
     0x1.45799be1666dap-401, 0x1.3ea351f0ff2f8p-869, 0x1.cb2e98b89de4dp-441, 0.0, 0.0,
     0.0, 0x1.42b1b1f635055p-432, 0x1.b24a5c837733dp-162, 0x1.de3ee10fbe116p-924,
     0x1.45fe6d4aec357p-424, 0x1.1eae94e2d44f6p-234, 0.0, 0x1.8549fa4b15cadp-522, 0.0,
     0x1.e238e7f093b16p-976, 0x1.c9580cdfe8484p-378, 0.0, 0.0, 0.0,
     0x1.2704890287436p-980, 0x1.e3ed5f16e1392p-654, 0.0, 0x1.31686daea18ddp-842, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe993d59c3b56p-853, 0x1.f9914792be81dp-414,
     0x1.9b5571953ab96p-741, 0x1.1768b70b8e3efp-605, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd83ca242d05cp-306, 0.0, 0x1.7cdf1387b9048p-717, 0x1.a2679b6370e02p-992,
     0x1.03ab0dab53711p-547, 0.0, 0x1.baacfadac0a5bp-516, 0x1.48037787fad0ep-1007,
     0.0, 0.0, 0.0, 0.0, 0x1.18d555dab283dp-431, 0.0, 0.0, 0x1.c151b7eb90198p-93, 0.0,
     0x1.87ff9bd541be4p-74, 0.0, 0.0, 0.0, 0x1.c60a7d574412ap-220, 0.0, 0.0, 0.0, 0.0,
     0x1.01d72c20d8877p-480, 0.0, 0.0, 0.0, 0x1.0c714f5d9914ap-378,
     0x1.3a74cc3ea7cf2p-824, 0x1.bd3794d302308p-273, 0.0, 0x1.25c9f5eae55a6p-841, 0.0,
     0.0, 0.0, 0x1.9645f9b7dc0cdp-881, 0.0, 0.0, 0x1.bed2d00f723f9p-902,
     0x1.94211caa26edap-331, 0x1.df1f03bda4b14p-627, 0x1.261483a495395p-930, 0.0,
     0x1.e9803f6fa66d5p-638, 0x1.6b6708be123fp-606, 0x1.3fc94c13c055ep-834,
     0x1.854534bba1426p-194, 0.0, 0x1.6328db5c0348bp-945, 0x1.a4a70feaf77ecp-529,
     0x1.473271d6c4a52p-347, 0x1.061e7e6d7a625p-143, 0x1.c0d803ddd283fp-190,
     0x1.fa30391ac03e9p-873, 0.0, 0x1.7bd13ff7eafeap-890, 0.0, 0x1.bd604f5439ea7p-661,
     0x1.26b13a2b153e6p-887, 0.0, 0.0, 0x1.94f0513daba82p-789, 0x1.8c8aaff609d9fp-866,
     0.0, 0.0, 0x1.fd24acc49c294p-127, 0x1.727a6cfd3e7edp-628, 0.0,
     0x1.e50b22243a7bbp-349, 0x1.6710e637a0108p-744, 0.0, 0x1.2093aaf5d1a69p-732, 0.0,
     0.0, 0.0, 0x1.e3cdc390fdf2fp-609, 0x1.4017b44b76e48p-750, 0x1.3df87727466c3p-423,
     0x1.5518673ad2f01p-565, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6462563a4881p-1017,
     0x1.37f185c6dd842p-71, 0.0, 0x1.853168ba214d9p-610, 0.0, 0.0,
     0x1.e775e0bfc92d3p-988, 0x1.23389d17ecedcp-795, 0.0, 0.0, 0.0,
     0x1.1c48d7eaa322bp-693, 0.0, 0.0, 0x1.8904d39efe759p-284, 0x1.53a8655fae4f5p-35,
     0x1.926ecf2d48976p-56, 0x1.5317563e10078p-89, 0x1.4c20dcae4e3adp-64, 0.0,
     0x1.1a53e970d7f82p-632, 0.0, 0.0, 0.0, 0x1.d7190f8844f83p-744, 0.0, 0.0,
     0x1.da5e83f707713p-1000, 0.0, 0x1.5a5cbb1019c3dp-867, 0x1.f1b639d1dc313p-481,
     0x1.658bffe60619dp-443, 0.0, 0x1.4de8f7ee4877bp-164, 0x1.90b1ce50d03bcp-851,
     0x1.5ec503476ca58p-112, 0x1.552c2f6eed418p-567, 0.0, 0.0, 0x1.2551e71a5db68p-617,
     0x1.b079a9bda2396p-517, 0x1.35176f9b32ba4p-137, 0.0, 0.0, 0x1.f202792ef1008p-174,
     0.0, 0.0, 0x1.7be994083da4ep-625, 0x1.4ef96734666f7p-370, 0.0, 0.0,
     0x1.20ec4e4d9b907p-561, 0x1.aa0450c2f6fc4p-843, 0x1.a4646b9521362p-604, 0.0, 0.0,
     0x1.8c44090301f8ap-369, 0.0, 0x1.dc67cd4d32421p-375, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9efd58b2979ebp-997, 0.0, 0.0, 0x1.e0527884004eap-642, 0.0, 0.0,
     0x1.fb557106d4451p-168, 0x1.102900c392af8p-374, 0x1.0be95c22b0c95p-872, 0.0, 0.0,
     0.0, 0.0, 0x1.489c3c33cfc46p-612, 0x1.ac368217e7fcfp-390, 0x1.4954287142c6dp-933,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.509f6d720042fp-311, 0.0, 0.0,
     0x1.903056129f0edp-429, 0.0, 0x1.30b99c530ea06p-646, 0x1.891effe46a59cp-550,
     0x1.674be5d995714p-318, 0x1.fa02fc8fa9d5bp-392, 0x1.f8c5448082127p-732, 0.0,
     0x1.68c307ba75783p-299, 0x1.207ea22108ef2p-47, 0.0, 0.0, 0x1.4d351e66ff4d2p-626,
     0x1.e88aef60f2cf9p-37, 0x1.2b15ca9c10752p-49, 0x1.9a85fc1dc695ap-459, 0.0, 0.0,
     0x1.2b7b7c3a3703cp-457, 0.0, 0.0, 0x1.853f0ece23b95p-926, 0x1.3f6696d82d5ap-178,
     0x1.43487accbdb96p-2, 0.0, 0x1.fae18cd2a8391p-557, 0x1.48f6904051129p-767,
     0x1.44096de5ce0abp-149, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4f5da6e679b7p-561,
     0x1.e1c3400ef9b22p-871, 0x1.a76daa33ddb67p-638, 0x1.44c8ea32948d9p-143, 0.0, 0.0,
     0.0, 0x1.218c234f28027p-327, 0x1.13c3283de9f69p-528, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.178833f4cd9dcp-283, 0x1.a1687ab4b8aa2p-24, 0.0, 0x1.d09154beec9f9p-895,
     0.0, 0x1.0f6df7485154bp-67, 0x1.255eaea3077abp-561, 0x1.19c4b7ce3a3bcp-130, 0.0,
     0.0, 0.0, 0.0, 0x1.7a6110f1c1aep-435, 0.0, 0.0, 0.0, 0.0, 0x1.2537515909d9ep-96,
     0x1.3dc1406b3ededp-156, 0x1.9745a051be92ap-722, 0x1.ebb4219c9a229p-836, 0.0,
     0x1.e24a9f2462f9fp-788, 0.0, 0x1.1f9cea8eec4bp-310, 0.0, 0.0, 0.0,
     0x1.eec89641fa869p-220, 0x1.98c31e87f28e7p-858, 0x1.f90108ad199dp-943,
     0x1.5c977ac61c0ecp-213, 0x1.e6dfe1b71c89ep-1010, 0x1.a6ccbedd2454bp-84, 0.0, 0.0,
     0x1.767ef4bc03928p-595, 0x1.3ae11c5a37f53p-673, 0.0, 0x1.7f72d82d5e32cp-990, 0.0,
     0.0, 0.0, 0.0, 0x1.ecbca942b96cdp-379, 0.0, 0.0, 0.0, 0.0,
     0x1.3ecfc2b4e9a6dp-746, 0.0, 0x1.f45be04933f45p-920, 0.0, 0x1.8184667ff7ap-790,
     0x1.2aac5c622af36p-469, 0.0, 0.0, 0x1.70273ac6041dbp-469, 0x1.2d163bdb78253p-268,
     0x1.8ff675809b794p-780, 0x1.821e4b59e86ecp-374, 0x1.93809146c9d9ep-830,
     0x1.e4fcf36a77674p-621, 0.0, 0.0, 0.0, 0x1.f445c015dbca1p-471,
     0x1.b16791b1d6f2dp-378, 0x1.92ba26551982bp-57, 0.0, 0x1.7ea0c2888c563p-465, 0.0,
     0.0, 0x1.5300e407eaac4p-89, 0.0, 0x1.4e9b6f15871cp-7, 0x1.75c2d1c665c96p-208,
     0x1.35ad1c841890cp-211, 0x1.6cecc30a6ae8dp-306, 0.0, 0x1.2aadd169fc2ccp-62, 0.0,
     0x1.de08dcab7c0b3p-153, 0.0, 0.0, 0.0, 0.0, 0x1.dca29cd5ce46dp-614, 0.0, 0.0,
     0x1.0085769311945p-60, 0x1.c3470b70cd20ep-183, 0x1.e1cda784f0743p-716, 0.0,
     0x1.2e24bd4583d49p-259, 0.0, 0x1.9cdd3715f2ac2p-158, 0.0, 0.0,
     0x1.b469a97ba5e34p-50, 0.0, 0.0, 0.0, 0x1.43f0a472fe51p-452, 0.0, 0.0,
     0x1.b10bc1bc7c7b9p-862, 0x1.bd2aff2bfe288p-954, 0.0, 0.0, 0.0, 0.0,
     0x1.f23c718c17772p-238, 0.0, 0x1.de300bb7813a6p-294, 0x1.f43f06a3e614p-643, 0.0,
     0x1.cd90c335fa54p-878, 0x1.b981f33612aap-925, 0x1.61ac7bf79f816p-996, 0.0, 0.0,
     0x1.81362262cdce7p-546, 0.0, 0.0, 0x1.81569017c0ff1p-242, 0.0, 0.0, 0.0,
     0x1.fccc813c7991ep-944, 0.0, 0.0, 0.0, 0.0, 0x1.d755f0cd756d1p-229, 0.0, 0.0,
     0x1.99981443abbbep-80, 0x1.2655877a06c63p-566, 0x1.3b4d48e67457bp-393,
     0x1.9a847ecb40543p-904, 0.0, 0.0, 0x1.2ecc94d1aa9afp-153, 0.0, 0.0, 0.0, 0.0,
     0x1.e6a82bb1ee448p-875, 0x1.2e4c9fae9794p-397, 0.0, 0x1.aa3d88ebd3087p-967,
     0x1.234056acea7dbp-240, 0.0, 0x1.6c4db31bd86bdp-372, 0.0, 0x1.83963ea2caecp-555,
     0x1.f8534ddb276afp-195, 0x1.0068aa35ac337p-860, 0.0, 0x1.e1aa7521c00eep-663,
     0x1.8f37344dbe459p-271, 0x1.f627d12774d45p-112, 0x1.4dfd59e951391p-555, 0.0, 0.0,
     0x1.5b1af07c5ef34p-379, 0x1.b5b0313e8d82p-816, 0x1.4e4d860de6e1dp-275, 0.0, 0.0,
     0x1.ab80431d24b34p-174, 0x1.7d28394e995cdp-332, 0x1.895688a48420ap-620,
     0x1.2a93abf5de917p-690, 0.0, 0x1.ec24ec9fdd4bfp-186, 0x1.90f880774a9d6p-213,
     0x1.e8c93e6becb43p-231, 0.0, 0.0, 0.0, 0x1.e355b70871d8ep-805,
     0x1.98402ce07760bp-335, 0.0, 0x1.de4d862044b7ap-738, 0x1.0e029d5fe9f95p-508,
     0x1.37695b9bd7cc7p-850, 0x1.6fa9aaddae191p-821, 0x1.347fe221beac3p-108,
     0x1.64a2687aff21fp-36, 0.0, 0x1.b0c2f21e910acp-944, 0x1.0fc0ebbe7b1ebp-909,
     0x1.3cf3687409772p-14, 0x1.bdbc55423c114p-782, 0x1.1bf7302e0bb2p-283,
     0x1.83eb0ad08a3fep-337, 0.0, 0x1.d8ca4434e32f2p-319, 0.0, 0x1.73530d2621883p-827,
     0.0, 0x1.d40cf776df4cp-422, 0x1.51ca6fbbb7f75p-125, 0.0, 0.0, 0.0,
     0x1.394cc5aa36a21p-349, 0x1.2f40ce84c4f94p-286, 0x1.cb30f5a68fbd2p-1014,
     0x1.8d6554b2f29c6p-312, 0.0, 0.0, 0x1.057a753dea16cp-203, 0.0,
     0x1.15a0d7a2a6f9ep-130, 0x1.08bec67cddd7fp-495, 0x1.8b1f147e0f8f7p-849, 0.0, 0.0,
     0.0, 0x1.968ed987422bep-756, 0.0, 0.0, 0x1.14d4137551dd8p-512, 0.0,
     0x1.d531e14f85a01p-8, 0.0, 0x1.340e79e7b00cbp-443, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.939576eeabcc3p-823, 0.0, 0.0, 0x1.1df0a2630a5ap-242, 0.0,
     0x1.617a3cbe859d6p-457, 0.0, 0x1.db6174037f68dp-305, 0.0, 0x1.afc676f5f00d4p-289,
     0.0, 0.0, 0x1.965c3f69bfc55p-783, 0.0, 0x1.8e92d0399778cp-271,
     0x1.d8709f1ad4f03p-768, 0x1.ace07789b3baap-334, 0x1.c9b3527498354p-959, 0.0, 0.0,
     0x1.949bf69d5aa6fp-975, 0x1.6fef7e10359d7p-329, 0.0, 0.0, 0x1.9511b048436e3p-518,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.adb0a1a9bcdb5p-702,
     0x1.cb6f1468bfb62p-664, 0.0, 0x1.e728701979aa4p-614, 0.0, 0.0,
     0x1.d9448861e99bfp-429, 0.0, 0.0, 0x1.51c5633671e33p-657, 0x1.bef98d5e672a2p-766,
     0.0, 0x1.26001d9b3aacep-175, 0.0, 0x1.7532183538063p-319, 0x1.4c3612f497a1bp-960,
     0.0, 0x1.f13681f535e03p-301, 0x1.b59d258d8e9c3p-279, 0.0, 0.0,
     0x1.feb69c329aa1ap-938, 0.0, 0.0, 0x1.ddc88b2c05b4cp-338, 0x1.6c3825062b2f5p-885,
     0x1.dc3a970c131ap-618, 0x1.36a40479f53b2p-1017, 0x1.2dfa8bbbe03c2p-11, 0.0, 0.0,
     0x1.ff7a60f91252ep-206, 0.0, 0x1.d721e4ac616a3p-768, 0x1.65147cd9f8917p-720,
     0x1.d05b8a9224c85p-246, 0.0, 0x1.98e206795d038p-895, 0x1.06f6fbd5734f8p-930,
     0x1.0ae03d14e7d19p-588, 0.0, 0x1.f6887065828d1p-970, 0x1.13cbbc726e0bbp-819, 0.0,
     0.0, 0x1.09ba8a53499c3p-938, 0x1.46e5ea72322cdp-344, 0.0, 0x1.bf1da2d42fd05p-118,
     0x1.e978e41f5dc2p-423, 0x1.9ac609ccecc85p-724, 0x1.eae97847cc2a3p-769,
     0x1.a062e836d2ae4p-580, 0.0, 0.0, 0x1.7d8799b93c117p-736, 0.0,
     0x1.8852c48840f2cp-911, 0x1.8ec4baa6b3922p-921, 0.0, 0x1.9c967e2ce2b44p-246, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.31144a92104fap-622, 0.0, 0.0, 0x1.9cf923876cf49p-167
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
            tmp1 = Sleef_erfcd4_u15kvx(tmp0);
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
    printf("Sleef_erfcd4_u15kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_erfcd4_u15kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
