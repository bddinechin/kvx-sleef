/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10d2_u10kvx.c --function Sleef_log10d2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.c13be862c2894p-128, 0x1.df8c51f582b97p-879, 0x1.99d10b6e2571ap-1000, 0.0,
     0x1.3b49c391fc355p-809, 0.0, 0x1.7e00bb40d0441p-886, 0x1.b7878a9310f33p-840, 0.0,
     0x1.149f940c8a41bp-13, 0x1.a1ac13ba182d9p-969, 0x1.dadb992e17e83p-370, 0.0, 0.0,
     0.0, 0x1.61c0240c7ea7cp-509, 0x1.f99d97c2083f8p-603, 0.0, 0.0,
     0x1.61f748e739afbp-409, 0.0, 0.0, 0.0, 0x1.6e3ff8fd42066p-193,
     0x1.28b6d42c158b6p-482, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09ef8e5ce2c7ap-470,
     0x1.8e3ce55880332p-461, 0.0, 0x1.a913705bec6d8p-799, 0x1.f844999724e11p-598,
     0x1.6b7ed35111979p-606, 0x1.b8d754d65e8b1p-943, 0.0, 0.0, 0.0, 0.0,
     0x1.81a6c4edfb636p-958, 0.0, 0.0, 0x1.1052fef5e9738p-699, 0.0,
     0x1.5da0c05ce457ep-950, 0.0, 0x1.edc1e74dc211p-416, 0x1.fb4ef46b76605p-473, 0.0,
     0.0, 0x1.3cf8c170c745fp-640, 0x1.44439dd30ce22p-351, 0x1.7bfd2d5a9246p-153, 0.0,
     0x1.e95ea8167b331p-453, 0x1.c7e141a1657d4p-120, 0x1.4598e28660a17p-555, 0.0,
     0x1.9ab51934ad1d6p-116, 0.0, 0.0, 0x1.8ee89186c1003p-138, 0x1.74d60f71bb9cp-692,
     0x1.e872db9f3f8b7p-771, 0x1.4c64562564e7fp-62, 0x1.dfcafaf9e5511p-354,
     0x1.acc713552726bp-614, 0x1.c9322646eea5fp-66, 0x1.52a725925c65bp-329, 0.0,
     0x1.f3c2e7fbeb122p-87, 0x1.4e664a8996263p-495, 0.0, 0x1.370fba36468abp-141,
     0x1.a6d7a396a6f4bp-963, 0.0, 0.0, 0x1.d94910000689fp-221, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1c3d60bbc0096p-226, 0x1.918f0aac527c3p-115, 0.0, 0.0, 0.0, 0.0,
     0x1.457895a2428fdp-335, 0x1.1f7817e8abca2p-950, 0.0, 0x1.f1e9b7174bbd4p-396,
     0x1.77301ada58315p-819, 0.0, 0x1.19050702fdeadp-25, 0x1.0e1d1a3c98528p-965, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b62429cdfc9d4p-207, 0.0, 0x1.e87f8e97d2a81p-329,
     0x1.c9e67b978214bp-271, 0.0, 0.0, 0x1.3ebeb4af5478fp-928, 0.0,
     0x1.6df6e0612f9bap-296, 0x1.84d5e5cd9ea44p-472, 0x1.b758561224f8dp-673,
     0x1.7891dcbe11649p-401, 0.0, 0x1.3c557af0b4571p-801, 0x1.740efb89cd614p-761,
     0x1.9bd7e5c786d1ap-388, 0x1.933c49dfa0287p-154, 0.0, 0.0, 0x1.cae325d3e5618p-457,
     0x1.b2aed2102bd4cp-34, 0.0, 0x1.29106287ed9e9p-596, 0.0, 0.0,
     0x1.eac0f4a2bdcb5p-982, 0x1.a2c2b196ea779p-367, 0x1.41d42368182edp-313,
     0x1.9b931af5b314fp-916, 0.0, 0.0, 0x1.4ef2510dfadaep-473, 0.0,
     0x1.dd819d10b3b6bp-262, 0.0, 0x1.1f1941048566ep-334, 0.0, 0.0, 0.0,
     0x1.f42c00b1d63a6p-10, 0x1.74e459565431p-273, 0x1.2f33f8f3223ecp-898,
     0x1.0285c1edf4ffp-742, 0.0, 0.0, 0x1.924d18a78ec7ap-557, 0x1.2ac7b89823dbfp-764,
     0x1.bd8b9d4f1015dp-361, 0x1.687fd9bf6a4d4p-223, 0x1.bcf75503b15e9p-868,
     0x1.85caa9efdc1e8p-626, 0.0, 0.0, 0.0, 0.0, 0x1.48a566af3e2f6p-705, 0.0,
     0x1.ba495dee579d5p-1017, 0x1.ee322963e7988p-719, 0.0, 0x1.fb398576b3021p-254,
     0.0, 0x1.2699dcc42dd35p-153, 0x1.f803a113356dfp-842, 0x1.f9794bd5f2c19p-118,
     0x1.48ec826289361p-129, 0.0, 0x1.61ae4f702e164p-1020, 0.0, 0x1.2e3b367865f6p-907,
     0x1.dca93b79350c5p-291, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14272a437c7b9p-35,
     0x1.3e4be7c424359p-755, 0.0, 0x1.585b1ed38bebbp-819, 0.0, 0x1.fd3dde7a5e5cp-708,
     0x1.bac9b373a2b94p-795, 0.0, 0x1.fdfb464304c35p-735, 0.0, 0x1.557d4a4cb323ap-615,
     0x1.77bee82648c1cp-18, 0x1.e90f50ccb230dp-636, 0x1.6912c5e2d7295p-439, 0.0,
     0x1.216a61103a72ap-650, 0x1.9061381aac7f2p-214, 0.0, 0x1.6478234fdf644p-372, 0.0,
     0x1.593f1cc14fce1p-513, 0.0, 0.0, 0.0, 0x1.ff5d2eae7b00ap-95,
     0x1.2e220dc722152p-259, 0x1.33f75af301682p-1012, 0.0, 0x1.4278a4733da46p-442,
     0x1.dee3ad714db9cp-272, 0.0, 0.0, 0.0, 0x1.e04ced1b080e5p-225, 0.0,
     0x1.909032725a5efp-97, 0x1.f8297968799b1p-936, 0x1.387c598b0ac06p-301,
     0x1.322d304fe838dp-904, 0.0, 0.0, 0x1.5767e5b596dd2p-754, 0.0,
     0x1.036f8403e105ap-576, 0.0, 0x1.6b1938d516e72p-122, 0x1.eca6f8915545dp-303,
     0x1.360c4539f3167p-19, 0x1.c8e5592a13a3bp-659, 0.0, 0.0, 0.0,
     0x1.1f1fe3da779f5p-331, 0x1.aa79e7c89cb11p-564, 0x1.a6332eb753eebp-870,
     0x1.6bcfd653e12b3p-761, 0x1.61b2dc092c12ep-72, 0x1.b7178e65d030dp-956, 0.0, 0.0,
     0x1.b083db1be3f95p-668, 0x1.6168864c458c7p-609, 0.0, 0.0, 0.0,
     0x1.4b9ab7c282f45p-115, 0.0, 0x1.027764c02f4dcp-721, 0.0, 0.0, 0.0,
     0x1.21d420aa68f2p-880, 0.0, 0.0, 0x1.bd07d938b69cp-153, 0x1.7191d4b88e238p-1016,
     0x1.5f049938d788ap-442, 0.0, 0.0, 0x1.4760c4cd6f0e7p-810, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.df290291eee5ep-561, 0.0, 0.0, 0.0, 0x1.a2ae7126a7a48p-321, 0.0,
     0x1.3c40980154321p-547, 0x1.83523617c89b2p-659, 0x1.08c6aef3ba6a2p-758,
     0x1.2630f09b32204p-354, 0x1.f287ded12951fp-806, 0.0, 0x1.d304199a2d77ap-829, 0.0,
     0x1.72f9d0590f398p-300, 0.0, 0x1.101b9096ded11p-454, 0.0, 0x1.a5eb1c2c34afcp-707,
     0.0, 0.0, 0x1.ba2c93d68d817p-820, 0.0, 0x1.d38cf7bc4dcf7p-347,
     0x1.b3137fc26036cp-244, 0.0, 0.0, 0.0, 0.0, 0x1.6b546e21d3968p-229,
     0x1.f78868ddb51a4p-195, 0x1.350d166814c0fp-94, 0x1.a64d6c855dfd1p-561,
     0x1.08302d0ea3437p-349, 0x1.4ed2fe2db6551p-75, 0.0, 0.0, 0.0,
     0x1.48e9abf53fd19p-290, 0x1.4ebf54b615916p-435, 0.0, 0x1.ddb2abd5f3346p-169, 0.0,
     0x1.64d905e5d7f3fp-337, 0x1.3adb3b6b817cbp-685, 0x1.a7e9978808753p-1003, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f8f314071af8p-198,
     0x1.e453cfb314601p-307, 0x1.dc57e34bd0b73p-381, 0x1.281fbd1367acp-473,
     0x1.e3b0a40332543p-273, 0x1.f7ee959439ca4p-732, 0.0, 0.0, 0.0, 0.0,
     0x1.bbf9f42b1acfdp-146, 0x1.a75dcbd82b6cbp-360, 0x1.a5e3b11898009p-343,
     0x1.8656d47292a8cp-880, 0x1.3808fa9e23dacp-443, 0x1.20fe83110b3bcp-814,
     0x1.74fc68414cb23p-374, 0x1.7343fa1b38782p-196, 0.0, 0x1.6b52643f17dfbp-52, 0.0,
     0.0, 0.0, 0.0, 0x1.565be1757a4dcp-219, 0.0, 0x1.f30d0b1568dbfp-195, 0.0,
     0x1.acd379a3b4a21p-817, 0x1.e6b9c33134bcp-830, 0x1.5efa51554d9fbp-953, 0.0, 0.0,
     0.0, 0x1.3c2d361013e65p-268, 0.0, 0x1.81e3dc6d485e1p-882, 0.0,
     0x1.44ef5c455e8ffp-731, 0.0, 0x1.9d484d3140beap-482, 0.0,
     0x1.f748787c4fc59p-1014, 0x1.2320857e1299p-775, 0x1.197cdd61e6b7ep-400,
     0x1.c50c37f132b99p-510, 0x1.cb890134a5b84p-249, 0.0, 0.0, 0x1.3f52d171f05c2p-876,
     0.0, 0.0, 0.0, 0x1.b90591c645e1p-734, 0.0, 0x1.d233a8d280a8bp-118, 0.0,
     0x1.8243bd56a98b8p-650, 0.0, 0.0, 0x1.e8019630e4718p-700, 0.0,
     0x1.4e2b5ce2e9d4bp-806, 0.0, 0x1.018dca691ad4bp-382, 0.0, 0x1.a37111b895638p-700,
     0.0, 0x1.78eb6bc3c4ec6p-651, 0.0, 0.0, 0.0, 0x1.62886bf59463bp-979,
     0x1.4b66300244c88p-644, 0.0, 0x1.a2c969bf5e981p-714, 0x1.9b6d5227f439ep-44, 0.0,
     0.0, 0x1.7034d815b23fap-133, 0.0, 0x1.8a842e6309624p-364, 0.0, 0.0, 0.0,
     0x1.b694cc75c420ap-460, 0.0, 0.0, 0x1.6565251fcfdfbp-937, 0.0, 0.0,
     0x1.c4e0bad176f2ap-531, 0x1.f91e4ea7bc54ap-769, 0.0, 0x1.c54fb1ce4e531p-808,
     0x1.69a364f7a3ea3p-232, 0x1.b47c2b943b0b1p-290, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a788399859e3dp-983, 0x1.2d7b2e78e4238p-736, 0.0, 0x1.121b1dbeab035p-947, 0.0,
     0.0, 0x1.434d66e6ce433p-9, 0x1.fd0fd461982bep-534, 0x1.dc8c7f00bc793p-271, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de2f6a613ee86p-458, 0.0, 0x1.a23285feabfc7p-16, 0.0,
     0x1.1fe4a23f5cc83p-464, 0x1.48ac7561191a3p-498, 0x1.74beb02aec5bap-443,
     0x1.94ecacf83c7d4p-11, 0x1.a22e333216c3fp-190, 0.0, 0x1.b5a662bc2e202p-984,
     0x1.92127e75d2f69p-504, 0.0, 0.0, 0.0, 0x1.e2bb25164f1b4p-722, 0.0, 0.0,
     0x1.ca71152f76d72p-12, 0x1.855f945e261ddp-1009, 0.0, 0x1.c98ebe7b558d4p-266,
     0x1.67de049103155p-598, 0x1.42ed3da541b5ep-471, 0x1.d5ccf70391599p-39,
     0x1.9eac07e80a5bep-1009, 0.0, 0.0, 0x1.f18b79563c96cp-343,
     0x1.3fac2a9893859p-275, 0x1.4897f7de161efp-764, 0x1.e2520441c643dp-298, 0.0, 0.0,
     0x1.865c80cfe94d9p-734, 0x1.ae3ad5fa2a599p-799, 0x1.ce919d5467ce6p-101,
     0x1.e0f990c4f8952p-921, 0.0, 0.0, 0.0, 0x1.ac663a2fbc5cap-411, 0.0, 0.0,
     0x1.936c8e768d1b5p-492, 0.0, 0x1.bb2e64e8b0797p-242, 0x1.ff73492f8a08ep-352,
     0x1.52b3d2ba64a96p-893, 0x1.835bfcf3286fep-828, 0x1.b729ebcfb535p-193,
     0x1.ac80844dfd5d9p-864, 0.0, 0x1.9ef5d955a371fp-646, 0.0, 0.0,
     0x1.13b3c6b06ecd6p-394, 0.0, 0.0, 0x1.9807559766ef8p-867, 0.0,
     0x1.9e188513f88f2p-641, 0x1.de798cd5adacp-1006, 0.0, 0x1.646e675cf30adp-792, 0.0,
     0x1.7bb639b4d2d5dp-375, 0.0, 0.0, 0.0, 0.0, 0x1.e42f790cc31d5p-43,
     0x1.b16c24428a8a5p-625, 0x1.04e13d53178b4p-742, 0.0, 0.0, 0.0,
     0x1.e42b8b195c2b9p-763, 0x1.03c47b21711c8p-119, 0x1.a91f7596ad639p-23,
     0x1.f068fb4b316a1p-483, 0x1.cac8715c835ddp-457, 0x1.458712994a65cp-76, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.04f3d7a62732fp-809, 0x1.679422fe6758ap-500, 0.0, 0.0,
     0x1.55585b49efd9dp-63, 0.0, 0x1.492f58da66479p-692, 0x1.0c9fce29fd4c6p-354,
     0x1.d22aa93d10341p-73, 0.0, 0x1.6cf3c8853be1p-623, 0x1.10fadc1f65e7p-836, 0.0,
     0x1.8c500559398fdp-459, 0x1.42d253ad2fbfbp-614, 0.0, 0.0, 0.0, 0.0,
     0x1.cab4dccf62e8ep-821, 0.0, 0.0, 0x1.6514b1e530e52p-649, 0x1.b46e70f952f64p-889,
     0.0, 0.0, 0.0, 0.0, 0x1.ab225c91eb01p-73, 0.0, 0.0, 0x1.a2a7b2528e4edp-878,
     0x1.da17646748a82p-971, 0.0, 0.0, 0x1.af43a2b825d6dp-592, 0x1.67cc1d4cc45f8p-643,
     0.0, 0.0, 0x1.e61e0c3b03dcbp-604, 0.0, 0.0, 0.0, 0.0, 0x1.8cea9443c5e51p-974,
     0x1.04cd772b51ea7p-848, 0x1.bd379218485e1p-398, 0.0, 0.0, 0.0,
     0x1.3544c78ece6cap-583, 0x1.fc6e9fa32f1eep-611, 0.0, 0.0, 0.0,
     0x1.8541b571d67bep-578, 0x1.79c48b3a0b4adp-815, 0.0, 0x1.bf21a43fd8e65p-935, 0.0,
     0x1.82394f0d29469p-1, 0x1.1ef4e74ccd7a7p-546, 0.0, 0.0, 0.0,
     0x1.b366906d943ddp-307, 0.0, 0.0, 0x1.927b2ae9e688ep-210, 0x1.47163449ee6ep-304,
     0x1.53979cde54985p-1015, 0x1.61eb4b725c3b3p-193, 0.0, 0x1.bfc1bc3d03789p-899,
     0.0, 0x1.76bf10842a9d9p-968, 0x1.3a9b1dfbb6cb7p-452, 0x1.799bd0d25b42bp-292,
     0x1.0f6d39a1ed007p-523, 0.0, 0x1.50560788ebb61p-84, 0.0, 0x1.c0246a949ec1cp-233,
     0.0, 0.0, 0x1.dd183107fa8a1p-714, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bd1771a72fd2bp-626, 0.0, 0x1.97f1cb5ff28d7p-832, 0x1.9c541beadb796p-1022,
     0.0, 0.0, 0.0, 0x1.22ec2ecbdeb6dp-258, 0x1.c3219ce7786d3p-477,
     0x1.be824617357f8p-616, 0x1.3fcf897f7870ep-257, 0.0, 0.0, 0x1.677444790aa97p-677,
     0x1.f44ef15f4ec85p-325, 0.0, 0x1.5a61ed4b82479p-997, 0x1.1a477bd6e04c5p-584,
     0x1.be9541891249ap-965, 0x1.7e5f9f1fcd9f3p-755, 0.0, 0.0, 0x1.10dd2fb17cd8ep-853,
     0x1.4942044ec13ap-576, 0.0, 0.0, 0x1.73e24acdbe50cp-732, 0.0, 0.0,
     0x1.7e55fc0e247a1p-862, 0.0, 0x1.aaa63d69a1711p-236, 0.0, 0x1.e5aa7aa1627d8p-651,
     0x1.7d0dacb6ecf7p-868, 0.0, 0.0, 0.0, 0.0, 0x1.2cce2530b867ep-668, 0.0, 0.0,
     0x1.32789f060ac85p-745, 0.0, 0x1.718dd00097284p-293, 0x1.659e915b03d0ep-3, 0.0,
     0x1.3b7c2ca1209cep-559, 0x1.4c642f1475b06p-122, 0.0, 0x1.1d297cf4fbe01p-36, 0.0,
     0.0, 0x1.2c13d99e3daebp-213, 0.0, 0x1.73a873b49de5p-757, 0x1.7b94b02a4511dp-631,
     0.0, 0.0, 0.0, 0x1.8a41b6aff3517p-794, 0x1.30046b8a784a5p-11,
     0x1.c29bb989d3a61p-813, 0x1.9ace2f050818ep-732, 0.0, 0.0, 0x1.0b3b61ee4a91p-878,
     0x1.fe78d83fef563p-609, 0.0, 0.0, 0x1.3e302628a45c8p-524, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8a7efb415eff5p-582, 0x1.065a8395bc85ep-333, 0x1.b5afa7d079979p-749,
     0x1.c1cfa7a6b072fp-179, 0.0, 0.0, 0.0, 0x1.02bc4aeb134f6p-775,
     0x1.2619d84044abcp-133, 0.0, 0x1.491aabd8398b5p-421, 0x1.50dfbe7161569p-297,
     0x1.94bead41d8796p-91, 0.0, 0x1.8d406b229032dp-716, 0x1.af947d076c418p-54,
     0x1.4afb0df678f93p-159, 0x1.7b974c6558bc2p-287, 0.0, 0.0, 0x1.2681943c89035p-206,
     0x1.e677774173ebdp-750, 0.0, 0x1.e6af1baa65e79p-182, 0.0, 0x1.da80bf236f617p-120,
     0x1.902f061065576p-839, 0.0, 0.0, 0.0, 0.0, 0x1.74eee4e34a855p-427,
     0x1.fd46fc4a2a9ecp-389, 0x1.a6af8f81a5dc2p-956, 0x1.8121c609c557ep-82, 0.0,
     0x1.1c96c8bd70d8p-483, 0x1.079dcd736b1dap-88, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4203fac6d9d87p-166, 0.0, 0.0, 0x1.3dc1201b19a48p-796, 0x1.a69802099abc3p-642,
     0.0, 0.0, 0x1.69c0a550590a6p-642, 0.0, 0.0, 0x1.bdf6e59565a53p-522, 0.0, 0.0,
     0.0, 0x1.e38cd251900ddp-517, 0x1.fb3380295e0d1p-811, 0.0, 0.0,
     0x1.b17079f037aecp-126, 0x1.f5a67449819bdp-232, 0.0, 0x1.b01637e54084bp-380,
     0x1.112cbf0b523e7p-689, 0x1.e2cbee91e0acfp-690, 0.0, 0x1.a875a00b56928p-774,
     0x1.3005c01ba37dep-142, 0.0, 0x1.edc9e72c8c99fp-940, 0x1.91dd0cf2bbc6p-94,
     0x1.c2bec8bdbbcf1p-522, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e149a4766e08fp-642,
     0x1.0ea6ab94b918p-829, 0x1.e8f800e8f6f75p-77, 0.0, 0.0, 0x1.818e51dc6b751p-890,
     0.0, 0.0, 0x1.ff83630dd1a34p-693, 0x1.4831d69e7e1e3p-771, 0.0, 0.0, 0.0,
     0x1.2ae32da913641p-200, 0.0, 0.0, 0.0, 0x1.c319630a25da1p-679,
     0x1.4b80eaa2f2b34p-577, 0.0, 0x1.56356a302d14dp-665, 0.0, 0x1.5761bb7243c3ap-150,
     0x1.44ab9416ad19p-777, 0x1.0abb7f2894adep-858, 0x1.ac3410a6846c1p-270, 0.0, 0.0,
     0x1.799d7260a897fp-168, 0.0, 0x1.926a8790e6f28p-583, 0x1.490f0ed96387fp-546, 0.0,
     0.0, 0x1.7dbce5043eee5p-420, 0.0, 0x1.a21f8c60acb12p-86, 0x1.af83ed0761e8p-521,
     0.0, 0.0, 0.0, 0x1.ee9d8de1486aap-629, 0x1.40e8a3bd7f7e3p-155,
     0x1.7b9cb7dcb5362p-345, 0x1.608531a516a24p-1021, 0.0, 0x1.ff44bed9ca605p-954,
     0.0, 0.0, 0x1.36a043dd46eaep-313, 0.0, 0x1.3496342dc2582p-657,
     0x1.acc45b5b2f05fp-613, 0.0, 0.0, 0.0, 0.0, 0x1.e45ef9f19bec5p-272, 0.0, 0.0,
     0x1.318b5fd648fc4p-840, 0x1.b8f17e8285a94p-685, 0.0, 0.0, 0x1.427938a713e17p-873,
     0.0, 0x1.09855e63b22afp-329, 0x1.81fb605e8527ep-404, 0x1.839033ea2d92bp-309,
     0x1.0b864790a1998p-611, 0x1.1a8067bbe8bb7p-688, 0x1.ba35524f7c144p-491,
     0x1.8e131f36ab916p-619, 0x1.ff6dc6f716a0fp-248, 0.0, 0x1.8a6befbd1b30bp-276,
     0x1.d951e73b77749p-837, 0.0, 0x1.70c4144788813p-272, 0x1.cef855640238cp-429,
     0x1.7ccc1e8e09395p-475, 0x1.7d951433ad306p-613, 0x1.814b4570a1bbdp-923, 0.0,
     0x1.c91330174d04dp-252, 0x1.60ffd60b426a5p-94, 0x1.621fffadd7132p-548,
     0x1.aa4159fd74697p-5, 0.0, 0x1.78f0ba1e46ab2p-768, 0.0, 0.0,
     0x1.3ed099f1c1c01p-650, 0.0, 0x1.17f2a503a8fap-894, 0.0, 0.0,
     0x1.284d3fd8b769p-526, 0x1.beca90bc37616p-719, 0x1.c54229b3ba302p-849,
     0x1.29734bf2e49e3p-408, 0.0, 0.0, 0.0, 0x1.3da1a50bac751p-306,
     0x1.b3f409cb4d1fp-635, 0.0, 0.0, 0.0, 0.0, 0x1.3b767f47ba4adp-327,
     0x1.a14ecb8d918c5p-943, 0.0, 0.0, 0x1.6766e2d58ce0bp-193, 0x1.4cebccbdff364p-685,
     0x1.14c75369169c6p-873, 0.0, 0.0, 0.0, 0x1.0105ad61bc706p-487,
     0x1.e06c991134d71p-324, 0x1.7e551afb58352p-819, 0.0, 0.0, 0x1.ce8909ac078f2p-287,
     0.0, 0.0, 0.0, 0x1.bacc771f3bc48p-482, 0x1.688223d7b7e9ep-731,
     0x1.ebb9684740dcp-284, 0.0, 0.0, 0x1.571dfe7be6819p-283, 0x1.7dd54fdebcfcfp-444,
     0x1.46776d4fe6d9p-332, 0x1.c6dff286f2d86p-911, 0.0, 0.0, 0.0,
     0x1.a27a8469902e8p-898, 0x1.f68a77b52948fp-263, 0x1.1cb5a12515634p-911,
     0x1.534ef788482cp-512, 0x1.fc14b8030d448p-189, 0x1.e7acbb8810bfep-1006,
     0x1.30c511edb825ep-622, 0x1.e841ed10b97d2p-130, 0x1.d7e4533d98b1ep-824,
     0x1.d986229b020e4p-877, 0.0, 0x1.edccf2c5cfdebp-38, 0.0, 0.0, 0.0,
     0x1.89edfc7457605p-522, 0x1.428ccef5d5477p-774, 0.0, 0.0, 0.0, 0.0,
     0x1.b241855cd8313p-603, 0x1.e5401872cb23dp-967, 0.0, 0x1.bfd31cd96f4ccp-654,
     0x1.516c0c7087225p-775, 0x1.0ecc9bf2d4cc2p-13, 0.0, 0x1.9c06313dcb628p-102,
     0x1.f3a0500ab42fp-630, 0x1.0fde6a2bbbab7p-193, 0.0, 0.0, 0x1.34300770aa69bp-794,
     0.0, 0x1.03ec1497158fap-682, 0.0, 0x1.59a9af75b4a3p-977, 0.0, 0.0,
     0x1.b0f3d21e5e41p-478, 0.0, 0.0, 0x1.01d1acfc97d36p-108, 0.0, 0.0, 0.0,
     0x1.a9eb95655f08cp-627, 0x1.5099b4d44efa1p-540, 0.0, 0x1.9820a42783d0ap-14,
     0x1.6bc4a3d781424p-326, 0x1.bd18ccd1587c8p-838, 0.0, 0.0, 0x1.d357f998a1ce7p-860,
     0.0, 0x1.83700d30fd0ap-800, 0.0, 0x1.fd78905c7ddb5p-405, 0.0, 0.0, 0.0,
     0x1.d388bb75dacfcp-310, 0x1.2b143de3ef781p-867, 0.0, 0.0, 0x1.7d1e102c7885bp-590,
     0x1.7718bd27dfb9ep-294, 0x1.acc855986cfd8p-919, 0x1.2f995df9867f7p-734, 0.0, 0.0,
     0x1.4768a4787be95p-675, 0.0, 0.0, 0x1.a1b04168e7fdfp-799, 0.0,
     0x1.e994b0a840625p-131, 0x1.8e02449578c5dp-926, 0.0, 0x1.f08079f102184p-414, 0.0,
     0x1.b3619a7bccfedp-381, 0x1.1bc1b6bc1d756p-145, 0.0, 0.0
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
            tmp1 = Sleef_log10d2_u10kvx(tmp0);
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
    printf("Sleef_log10d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log10d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
