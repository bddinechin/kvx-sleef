/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ilogbd2_kvx.c --function Sleef_ilogbd2_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --vector-size 2 \
 *     --function-input-vector-size 2 --precision int32 --bench \
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


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.20ecb430124bap-840, 0x1.536bc60d1297fp-883, 0.0, 0.0, 0.0, 0.0,
     0x1.5004bcf92bb5ap-464, 0x1.b15c2dd6f0aa7p-305, 0x1.d3d021a39c8bfp-950, 0.0, 0.0,
     0.0, 0x1.d7b5b0494e81bp-806, 0x1.1e14ecc1b9953p-153, 0.0, 0x1.9dc3316220a61p-123,
     0x1.ccf80f5c71eb9p-22, 0.0, 0.0, 0x1.ed4207e126923p-298, 0.0, 0.0,
     0x1.3ee0a28dc786bp-1008, 0x1.283cfcb5f1bb5p-275, 0.0, 0.0,
     0x1.09575784d99c3p-582, 0x1.660fccfbc6e6bp-315, 0.0, 0x1.e9bf6e3c7d3e7p-83, 0.0,
     0.0, 0x1.e4a1d2bd664ccp-826, 0x1.053c9dd3aea7ep-641, 0x1.253e1fe722a7ep-863, 0.0,
     0x1.a53c296559279p-920, 0x1.3ae1200dc40fap-421, 0.0, 0.0, 0x1.797ae3f602d7fp-389,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e3bdbdab4ce9p-501, 0.0, 0.0,
     0x1.1dc9555b43234p-197, 0.0, 0x1.0802190914e29p-432, 0.0, 0.0, 0.0,
     0x1.603e81ba263c1p-786, 0x1.40a39388a59f7p-558, 0x1.6ac19598b823p-266,
     0x1.3ba11ee3e2c57p-830, 0.0, 0x1.e16e3957b63f4p-249, 0.0, 0x1.4f67a802e8b05p-397,
     0x1.9ed6767464feap-908, 0.0, 0.0, 0.0, 0x1.0957ab157ccbdp-459, 0.0,
     0x1.14ffba28d34a8p-720, 0.0, 0.0, 0x1.de0e0df37c61ap-636, 0.0, 0.0,
     0x1.363e50e38096dp-364, 0x1.da8367237e755p-71, 0.0, 0x1.a527f43978dcfp-435,
     0x1.7583293b01926p-736, 0x1.feb779a9b02bdp-45, 0x1.554b6c21de748p-327, 0.0,
     0x1.59e28f85b3a99p-416, 0x1.86b6eb5e6198ep-689, 0x1.40ba750873f15p-47,
     0x1.e06efdab00f8fp-886, 0x1.08e469ab1a06cp-901, 0x1.d9c5dd0aa8917p-911, 0.0, 0.0,
     0x1.36e8b89d3b0aep-92, 0x1.b93055b81f645p-146, 0.0, 0x1.ed61aec3a1a48p-912,
     0x1.ff6cf32f840fp-164, 0x1.315a9e397182cp-987, 0x1.0e20241baf449p-668, 0.0,
     0x1.7e6d41e9f7d1p-554, 0x1.8046a93486dbfp-589, 0.0, 0.0, 0.0,
     0x1.2ea254d29b4dbp-993, 0.0, 0.0, 0.0, 0.0, 0x1.d85afe46f3a83p-966, 0.0, 0.0,
     0.0, 0x1.c9e1a93d60a9dp-348, 0x1.b109f2220235cp-424, 0x1.0ae6f06e268e5p-928,
     0x1.0ef94ed1b7f4bp-924, 0x1.7a26ad01eecd8p-262, 0x1.3ad01e4444bbdp-152,
     0x1.3ffe146f73108p-947, 0x1.dc5aaab5ab80ap-972, 0x1.ba4288b397c1dp-962,
     0x1.df47207488472p-750, 0.0, 0x1.f979c1516c4ap-576, 0.0, 0.0, 0.0,
     0x1.5fab664b2ec5dp-925, 0x1.39d444c196472p-581, 0.0, 0x1.b321f30ec2e66p-266,
     0x1.1a91bc81e1236p-426, 0.0, 0.0, 0x1.6636701e72595p-227, 0.0,
     0x1.a19b901bb9e1p-78, 0.0, 0.0, 0.0, 0x1.bfe1167028a5bp-476,
     0x1.f837aabec7292p-1003, 0x1.e8f2c738f2bc7p-371, 0x1.d132074db3495p-506, 0.0,
     0x1.5c9f9f7588419p-529, 0.0, 0.0, 0.0, 0x1.4cef934602d4bp-261,
     0x1.de9c204046816p-883, 0.0, 0.0, 0x1.c990167c3139ep-473, 0x1.4b1acda399c5fp-787,
     0x1.e461fccd444bap-817, 0.0, 0.0, 0x1.6e8ddaa5c79a3p-560, 0.0, 0.0, 0.0,
     0x1.71a24c60d69f1p-174, 0.0, 0x1.9bc098b2349b9p-742, 0.0, 0x1.e81844140fdddp-750,
     0.0, 0x1.7b80894e63ac7p-537, 0.0, 0.0, 0x1.a9de964df9fecp-848, 0.0,
     0x1.042bba2dedebdp-661, 0.0, 0x1.10e603bf40e26p-396, 0x1.5ad013fb8a8fep-247,
     0x1.0d4d1a4909c2bp-662, 0.0, 0x1.eb0e307a209d9p-835, 0.0, 0.0,
     0x1.f99c61595a65ap-980, 0x1.3ed9f8b948127p-556, 0x1.677e932ca36d3p-417, 0.0,
     0x1.c8501c27c271fp-132, 0.0, 0.0, 0x1.da12f222d1a77p-683, 0.0,
     0x1.35f188cdd1754p-355, 0x1.b17b00bb495ap-910, 0.0, 0x1.270b9a90658ap-868,
     0x1.de48d2f1337cep-283, 0.0, 0x1.a1c1f4c5c432dp-728, 0x1.b2d850bcc10e5p-928, 0.0,
     0x1.18c3eb48dce7bp-600, 0x1.b0317c1d72b4p-735, 0x1.09a9196fa2559p-209, 0.0,
     0x1.bcbb0f5420307p-315, 0.0, 0.0, 0x1.473393e9a3e9ap-182, 0x1.2b34c8cef1009p-958,
     0x1.c1c16f14fd78p-319, 0x1.d3701476a9e0fp-487, 0.0, 0.0, 0.0, 0.0,
     0x1.148a1f2fb9921p-836, 0.0, 0x1.8f088051c38a9p-990, 0.0, 0x1.f7766dc4a7e17p-881,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a4bc34ab93e5p-81, 0.0, 0.0, 0.0, 0.0,
     0x1.3917135186d7p-438, 0.0, 0x1.c1f0c2fd5c039p-21, 0x1.d36219594a14ep-142, 0.0,
     0.0, 0.0, 0x1.314160cee1bb8p-370, 0.0, 0x1.f71089df841edp-876,
     0x1.87c567f2a1826p-508, 0x1.837883a1df465p-273, 0.0, 0.0, 0x1.be7f4c89dc584p-808,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7dc9280547531p-899, 0.0, 0x1.bae9b76a35f6p-134, 0.0,
     0x1.50aab676d742cp-418, 0.0, 0x1.f22a9414e33ffp-396, 0x1.d04edd43c61dbp-752,
     0x1.bef953582efd9p-955, 0x1.ce317b5bf789ep-928, 0.0, 0x1.de8239808f5c4p-660, 0.0,
     0x1.9f4089c63edacp-102, 0x1.f3d4f30715d42p-37, 0x1.59d11b351577dp-545, 0.0,
     0x1.b1cd7d6c63e65p-113, 0x1.1f1578da38c65p-895, 0.0, 0x1.cd0a13ab83cdp-295,
     0x1.b6d08bcc36b0fp-104, 0x1.0a9aea0d45d07p-750, 0.0, 0x1.df3e319ae3438p-48,
     0x1.05b3bdbda68a4p-249, 0.0, 0.0, 0x1.e5367131dae86p-556, 0x1.a43a3a3a704ddp-623,
     0.0, 0.0, 0.0, 0x1.1b37917df2bdap-617, 0x1.35d1ebcc2597ep-393, 0.0,
     0x1.22a2038dd2822p-590, 0x1.ea6e88d63f718p-324, 0.0, 0.0, 0x1.8aa1fc117157ap-108,
     0.0, 0x1.b49a8230e7c1ep-299, 0x1.fefd7bc691542p-195, 0x1.3460dd4966f5ap-528,
     0x1.5d7ef5b26b60ep-910, 0.0, 0.0, 0.0, 0x1.97d2f89a43132p-609, 0.0,
     0x1.208d9cc64d1bfp-1022, 0.0, 0x1.63026d6689ce2p-354, 0.0,
     0x1.323ece0f5349ap-825, 0x1.00b3321d1a654p-653, 0x1.b3cd30b658a39p-436,
     0x1.34cae854b618cp-319, 0.0, 0x1.2c509f35032fbp-536, 0x1.d47a462bab67bp-91, 0.0,
     0x1.fff090c6fe6bp-304, 0x1.069a75e6dc4d2p-138, 0x1.b6127c82f32ecp-287, 0.0,
     0x1.63d7974c60485p-835, 0.0, 0.0, 0.0, 0x1.2e3b2325a1022p-841, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.25842a8e986b2p-211, 0.0, 0x1.bc03f79173e85p-188, 0.0,
     0x1.ed0856e2eb45dp-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d7ca7e3fadf5p-767,
     0x1.0d955ac25fc16p-986, 0x1.aed1c846eab5cp-202, 0.0, 0x1.f260bff41d525p-1, 0.0,
     0.0, 0x1.52ea081dcc2a6p-536, 0x1.f5d8678c3e455p-668, 0.0, 0.0,
     0x1.5e30475af2d8fp-157, 0x1.c258e32cfd4b4p-382, 0x1.4e7271814bbbfp-631, 0.0, 0.0,
     0x1.5dfab5c8f9c83p-39, 0.0, 0x1.41cd40791d9a6p-554, 0.0, 0.0,
     0x1.64923c3265379p-551, 0x1.b47395e32c77p-1012, 0x1.30e1aa2b919e3p-691, 0.0,
     0x1.a470b705e749ep-853, 0x1.0df3246e6d65p-617, 0x1.4aea0bd39679fp-988, 0.0,
     0x1.da50eb39babcbp-1015, 0x1.85a41ab1057ecp-340, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.04c2dcbe3cb27p-11, 0.0, 0.0, 0.0, 0x1.4dab36a154cbap-671, 0.0, 0.0,
     0x1.cf6c666c17068p-31, 0x1.dcbb91cab2e34p-824, 0.0, 0.0, 0x1.cdaefac725fcbp-83,
     0.0, 0.0, 0x1.87e9bd461f7eap-968, 0.0, 0x1.b10c49d55c41fp-909,
     0x1.b68476a155249p-700, 0.0, 0x1.82f548a01484dp-746, 0x1.1628d8cd0d82fp-959,
     0x1.0510e660b2c08p-330, 0x1.18ec32a46bd4bp-220, 0x1.0dc3d06d8e595p-1000,
     0x1.324368d3f0b6bp-565, 0x1.ca217fe1fd45p-878, 0.0, 0.0, 0x1.574e82d9060b5p-93,
     0.0, 0.0, 0x1.f8269ba709e14p-815, 0x1.c268e95909cf3p-745, 0x1.5cb36a67720fap-656,
     0.0, 0x1.9c8ec5eb3ec99p-630, 0.0, 0.0, 0x1.f5e52530bde74p-73,
     0x1.e641315824cfp-969, 0.0, 0.0, 0.0, 0x1.fce6e7664b5ap-850,
     0x1.6303363af1043p-613, 0x1.7def4f44bf5f9p-551, 0x1.7d42d23fd4fd3p-652, 0.0, 0.0,
     0.0, 0x1.8e5447b795f4cp-846, 0x1.52f9acd87a3f2p-874, 0x1.ae9cf34fc17ebp-221,
     0x1.4f52051f27081p-834, 0x1.98b79fbb44192p-330, 0.0, 0.0, 0x1.f4f5dc202bb3ap-986,
     0x1.c5fd2a5ce1df6p-116, 0x1.c2bc4597ecea4p-935, 0x1.2a2ca23dfbb7p-906,
     0x1.648399353c227p-509, 0x1.83ed540f33525p-971, 0x1.f4b35b71347bap-736,
     0x1.bec398e459baep-75, 0x1.d5405616ca835p-249, 0.0, 0.0, 0x1.0fa2399189656p-77,
     0.0, 0x1.0f011d7bccd98p-661, 0.0, 0.0, 0x1.1c8e741b8fe1dp-307,
     0x1.3443ead8d886ep-843, 0.0, 0x1.35d612cfe71ccp-939, 0x1.edda347fca1f8p-559,
     0x1.ac883f61b8605p-954, 0.0, 0.0, 0x1.9088b5aeb8788p-508, 0x1.9522da78432afp-320,
     0x1.65f78bb68c2fp-213, 0x1.df0507340287p-595, 0x1.76aa9fcc5106fp-958,
     0x1.8fc3e4c5eb02cp-641, 0x1.e4e98d8bd4ef3p-570, 0x1.434b33093eb47p-91, 0.0, 0.0,
     0.0, 0x1.9709828e5064bp-544, 0x1.77aa483e10101p-350, 0x1.2bd5af155619ep-312, 0.0,
     0.0, 0x1.6e6dab1acd13dp-518, 0x1.46682d93483aep-984, 0x1.f8936fd2cbf7fp-615, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b734dcff0a98cp-617, 0.0, 0.0, 0x1.8961e07dec76ap-119,
     0x1.ce9f8a52b1418p-536, 0.0, 0x1.83c63359ac77ap-472, 0x1.3b7dd46301f04p-482, 0.0,
     0x1.4bf2c03350abfp-933, 0.0, 0x1.25e2d225f5765p-729, 0x1.59f890e1b680bp-232, 0.0,
     0x1.4f2f2a4176bc2p-770, 0.0, 0x1.42ae68710955ep-403, 0x1.f427dcf42a59dp-468, 0.0,
     0x1.46d6f077408e9p-702, 0x1.3d743b70d18ccp-648, 0x1.ac1786081a4fp-374,
     0x1.860bfbcbad604p-744, 0x1.09393016259dp-52, 0x1.706477d169d14p-337,
     0x1.d863e5681af24p-238, 0x1.d56b5a8a1d96bp-779, 0x1.50012b610da2cp-351, 0.0, 0.0,
     0.0, 0.0, 0x1.6a098547e7104p-218, 0x1.b05ea7d52db1fp-494, 0x1.5dcabb5330915p-657,
     0.0, 0x1.6eb930f208964p-590, 0.0, 0.0, 0.0, 0.0, 0x1.747fb175c5206p-262,
     0x1.c00575bac7cefp-1011, 0.0, 0x1.6c6292e81f9c2p-546, 0.0, 0.0, 0.0, 0.0,
     0x1.af94f0def3376p-243, 0.0, 0x1.57dd8b20fde98p-834, 0x1.b3a42cc98ec3ap-919,
     0x1.3d8a16ff6d40dp-842, 0x1.1a52db90e2c78p-200, 0.0, 0.0, 0.0, 0.0,
     0x1.f37fc4134e762p-834, 0x1.8f97eef9e83eep-33, 0x1.b1c5e07d4a6a8p-101,
     0x1.6009b569988f2p-581, 0x1.227cec265222bp-423, 0.0, 0.0, 0.0,
     0x1.860ec1379e145p-300, 0x1.002732bc01c99p-446, 0.0, 0x1.126a0fb63be08p-851, 0.0,
     0.0, 0x1.05c215d467265p-933, 0x1.6e92f2f11936ap-902, 0x1.0fdf7ce818cf1p-733,
     0x1.e88add133df92p-422, 0x1.e0c2ad5baa4e1p-980, 0x1.b229087253d9ep-794,
     0x1.cb4b03176c504p-547, 0x1.acaffec7c9832p-170, 0.0, 0x1.a92ea8939390bp-560, 0.0,
     0.0, 0x1.688dbbb8ccbc6p-10, 0x1.1f7f07012f455p-220, 0.0, 0.0, 0.0, 0.0,
     0x1.1eb7306a1472p-180, 0.0, 0.0, 0.0, 0x1.43ede6d77a31cp-1007, 0.0, 0.0,
     0x1.8b8db0a1ad2e2p-1002, 0.0, 0x1.f6ef071e43f54p-711, 0x1.35e92fbf033b2p-343,
     0x1.79f1fb2a44cecp-499, 0x1.e29cf1d8b9393p-432, 0.0, 0x1.0df29f3749fe4p-45,
     0x1.26c510885c234p-152, 0x1.497c0720a66a8p-681, 0.0, 0.0, 0x1.d6024d9fbf76p-232,
     0.0, 0.0, 0.0, 0.0, 0x1.0d7e626e42f42p-42, 0x1.c5e4c7bc9becbp-612,
     0x1.2f0562fcd91e1p-955, 0.0, 0.0, 0x1.4522d5c4ee993p-548, 0.0, 0.0,
     0x1.b159451721d94p-302, 0.0, 0x1.abb1ab0949566p-224, 0x1.c93ad3dbf6205p-485,
     0x1.b11c5a970ce86p-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.66a2e8027a871p-968, 0.0, 0.0, 0x1.0b67ac5c8765cp-318, 0.0,
     0x1.334df8f092e8ap-620, 0x1.91166939a67aap-555, 0.0, 0x1.89b402f25fa8cp-612,
     0x1.c69d4d9beb7bfp-302, 0.0, 0.0, 0.0, 0x1.ad71291ff1c75p-863,
     0x1.112bf0a38af8cp-82, 0.0, 0x1.6e000bb9ee5fcp-450, 0x1.e20c5634e988bp-466, 0.0,
     0x1.6c17abc0c20d9p-487, 0.0, 0.0, 0x1.f2416d1284b79p-657, 0.0, 0.0,
     0x1.0c47e6ba1d9e7p-249, 0x1.43388aeba8133p-864, 0x1.62d37869784bfp-91, 0.0,
     0x1.d55c68f913648p-751, 0.0, 0x1.03d5c436c0b1cp-957, 0.0, 0.0, 0.0, 0.0,
     0x1.9bfc7e545c1ccp-129, 0x1.39357f2639da7p-761, 0x1.de666a202cffbp-316,
     0x1.051058accd161p-287, 0x1.6c362e0aab331p-199, 0.0, 0x1.e9eeda0c7046ap-69,
     0x1.e207d8319e4a5p-216, 0x1.7169575bb60cbp-736, 0x1.6e264bb50992ep-822, 0.0, 0.0,
     0x1.4da7ce58c82cp-764, 0.0, 0x1.3224af51a7fc7p-790, 0.0, 0.0,
     0x1.03ab11b27273dp-567, 0x1.5d33b83af9e12p-438, 0x1.f5eadeb097b7bp-382, 0.0,
     0x1.8307e99441a9ap-10, 0.0, 0.0, 0.0, 0.0, 0x1.28ae39cf1f108p-149,
     0x1.99a563e97a07fp-522, 0.0, 0x1.f2f5dd8a28fdp-1022, 0x1.8899c29167122p-575, 0.0,
     0x1.fe0e569551058p-523, 0x1.eb9b7d025af7ep-533, 0x1p0, 0x1.c7c42e223cd05p-588,
     0x1.e9f64ba1d1277p-634, 0x1.72af9568548bep-834, 0x1.99ce546504962p-643,
     0x1.b3f29b1a5ff11p-275, 0x1.2b916c4388e14p-810, 0.0, 0x1.c7761901ece03p-717, 0.0,
     0.0, 0x1.fbc9d0fc0bf6fp-997, 0x1.572a7f08204f2p-661, 0x1.9c56fc8853a73p-96, 0.0,
     0x1.0e2ba98b78a54p-385, 0.0, 0x1.71f10b1268727p-214, 0x1.6bdc5ee438b47p-549, 0.0,
     0.0, 0x1.7792bbbb5b66dp-390, 0x1.91a0e0b2c0bf3p-42, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5a61a89f0014fp-616, 0x1.15fa3e127c24bp-100,
     0x1.0169c870c54a5p-714, 0.0, 0.0, 0x1.ccd5b49d7f398p-707, 0.0,
     0x1.66562b7c94436p-729, 0x1.29e392e078f6p-789, 0x1.7f38646a9f121p-451, 0.0, 0.0,
     0.0, 0.0, 0x1.1479daa720f31p-781, 0x1.d6b221d984bafp-599, 0.0, 0.0,
     0x1.ca5deaec9f1bfp-281, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.922ef55e4fba9p-451, 0x1.bb6a7cac70011p-787, 0.0, 0.0, 0x1.0f6ae836d02a7p-754,
     0.0, 0x1.14fde2fed2e19p-808, 0.0, 0.0, 0.0, 0x1.34e86b9004484p-940,
     0x1.7bd15361c0ae4p-469, 0.0, 0x1.a9bf32ee4539cp-741, 0x1.f0337b6044de3p-279,
     0x1.c42b4db99c567p-116, 0.0, 0.0, 0.0, 0x1.9bbecd58b486ep-632, 0.0, 0.0, 0.0,
     0x1.15725a05d2239p-125, 0.0, 0x1.b02d8730e9582p-537, 0.0, 0.0, 0.0, 0.0,
     0x1.c4a797f6eb1b1p-671, 0.0, 0.0, 0.0, 0x1.66d1c490fd2fbp-108,
     0x1.173e317915e91p-459, 0x1.cba1eebadd5b7p-102, 0.0, 0.0, 0.0,
     0x1.b1d4b75e5c1f2p-594, 0.0, 0x1.7eadd7d8efe36p-258, 0x1.26bbfc81d5694p-795,
     0x1.c5a42dda7ac58p-394, 0.0, 0.0, 0.0, 0x1.f39c904b7e738p-241, 0.0,
     0x1.e5b0dbe926aeap-548, 0x1.81eb22f7eedbcp-311, 0.0, 0.0, 0.0,
     0x1.42169a106261ap-815, 0.0, 0x1.3f32e76dae629p-713, 0.0, 0x1.eaaad7ab26027p-205,
     0.0, 0.0, 0.0, 0x1.05bbc49a4eaf6p-466, 0.0, 0x1.662f798d6c5f8p-916, 0.0,
     0x1.2419146011a21p-142, 0.0, 0x1.93ac280d9d106p-15, 0x1.063eed09c730cp-188, 0.0,
     0x1.e2ef1de3bb239p-841, 0x1.7751d60f6d60ap-479, 0.0, 0.0, 0.0, 0.0,
     0x1.2093b4144aa19p-630, 0x1.ee339b0376201p-897, 0.0, 0x1.b63fdff68706cp-35,
     0x1.715bb9d7b53abp-361, 0.0, 0x1.d9ecaedfd9437p-739, 0x1.14d16f68e3de8p-642, 0.0,
     0.0, 0.0, 0.0, 0x1.f89ee8c16b8e7p-473, 0.0, 0.0, 0.0, 0x1.5dbf534719939p-661,
     0.0, 0x1.71e1638698f81p-1006, 0.0, 0.0, 0x1.4ede2ae89d4f1p-819, 0.0,
     0x1.f420c386d5483p-56, 0.0, 0.0, 0.0, 0x1.d476dd2b76917p-837, 0.0,
     0x1.a77babfa0e2b5p-262, 0.0, 0x1.1dddde7c475p-305, 0x1.683e50693eb3ap-995,
     0x1.d8c7ba788a589p-110, 0x1.e6ff07927c28ep-639, 0x1.a845a08d06bf5p-515,
     0x1.f797b17e44dfap-92, 0x1.b7569f8885828p-629, 0x1.aa435d45da2f9p-579,
     0x1.ce0185424a6a7p-637, 0.0, 0.0, 0x1.54359b4a9f68cp-362, 0.0, 0.0,
     0x1.b3c227ea6aacbp-22, 0.0, 0x1.3011a0adc73acp-3, 0x1.7faae85a6ffadp-661,
     0x1.938971e8c4ba1p-330, 0x1.a3a2963f53a5bp-177, 0.0, 0.0, 0x1.3fe3f71330147p-505,
     0x1.baee6f8cd7156p-572, 0.0, 0.0, 0x1.e8e5399063552p-957, 0.0,
     0x1.6dc8a65d84d29p-110, 0.0, 0.0, 0.0, 0.0, 0x1.617ee5c0239d4p-242, 0.0,
     0x1.22454a46c1c13p-272, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ede97d50f88ep-446, 0.0,
     0x1.7aaf4afb4a3aep-532, 0x1.1a21ab1bb02c8p-658, 0x1.ce5b659a512b9p-846, 0.0,
     0x1.dcdfbdc2debddp-756, 0.0, 0.0, 0x1.47843dec28831p-316, 0x1.c0c8a789a1207p-885,
     0.0, 0.0, 0.0, 0.0, 0x1.308d9b7c7a0e4p-862, 0.0, 0.0, 0.0,
     0x1.7f640a1a919a5p-1020, 0x1.1cd0ec29572afp-820, 0.0, 0.0,
     0x1.c34826cc45d61p-112, 0.0, 0.0, 0x1.6fd2fb8ee5034p-713, 0x1.3404fd8be9425p-863,
     0x1.05a7d6f104cbep-2, 0.0, 0x1.4107c1c9771acp-835, 0.0, 0x1.f5f933dd69413p-237,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a6265e2e6d0d6p-295, 0x1.76d5328e6bc97p-572, 0.0,
     0.0, 0x1.d60e632f924abp-53, 0.0, 0x1.d7b0b1ed5f6bap-159, 0x1.181270a8c7f63p-614,
     0x1.b673946682a0fp-438, 0.0, 0x1.c542ad28457bcp-899, 0.0, 0.0,
     0x1.e657e3ecf9f41p-355, 0.0, 0x1.6bfb60ff8270cp-638, 0.0, 0x1.ca267c54ec16p-40,
     0.0, 0x1.4e4b3d37feae9p-561, 0.0, 0.0, 0x1.bcdf9662d3911p-51, 0.0,
     0x1.3572ac1b65addp-535, 0x1.5f546ffd73f13p-520, 0x1.9a83668af4cebp-731,
     0x1.dc866074f6737p-978, 0x1.ea8b4315bd32ep-21, 0.0, 0.0, 0x1.c5462ab48eb4ep-522,
     0.0, 0.0, 0x1.dc0b925b6285ap-174, 0x1.89fd1de167db3p-381, 0.0,
     0x1.7ccb1936b82d8p-196, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.77718c790b48cp-352, 0.0, 0x1.44debd3928906p-397, 0x1.df418ad4c9bep-365, 0.0,
     0x1.02b5a03163c3fp-64, 0x1.af5b5b25439edp-804, 0x1.5adc8b9f6932fp-740, 0.0, 0.0,
     0x1.b47c4d13a9754p-1007, 0x1.8e82e44cacc46p-341, 0x1.a9c5f22b8b544p-492,
     0x1.e7a99d0d5026dp-416, 0.0, 0.0, 0x1.ea021ea2d35dfp-404, 0x1.8ef53fc6bedc5p-986,
     0x1.ec5bacc135116p-856, 0.0, 0.0, 0.0, 0.0, 0x1.1ec29c1235fd5p-326
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_ilogbd2_kvx(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    printf("Sleef_ilogbd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_ilogbd2_kvx bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
