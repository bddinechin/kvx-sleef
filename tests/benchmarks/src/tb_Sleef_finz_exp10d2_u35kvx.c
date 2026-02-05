/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d2_u35kvx.c --function \
 *     Sleef_finz_exp10d2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.b4b3f781d6f3cp-408, 0.0, 0.0, 0x1.dcdfb7869f09dp-569,
     0x1.c4a3039bbea4bp-426, 0.0, 0x1.4a81f56aa7b8ap-59, 0x1.e465cc3828015p-323, 0.0,
     0.0, 0x1.a3a3cf47db26cp-404, 0.0, 0.0, 0.0, 0x1.f2bef9d653f3p-804, 0.0, 0.0,
     0x1.96dd78f6552bbp-573, 0x1.1ac3dace732f7p-440, 0x1.236fd0079a12dp-188, 0.0,
     0x1.3039fe83f1e55p-1001, 0x1.4b4f7749e50b2p-391, 0x1.f90c79d897c46p-127, 0.0,
     0x1.eee16f871247cp-688, 0x1.2d4555df8472fp-562, 0.0, 0.0, 0.0,
     0x1.2162bcab8f9aap-85, 0x1.3c8fa3a0cd011p-607, 0x1.1ea588f0cff69p-750, 0.0,
     0x1.aecc351a099e9p-25, 0x1.8a5c1b880a367p-374, 0x1.14aaa88f13befp-337, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a917f047319b7p-674, 0.0, 0.0, 0.0, 0.0,
     0x1.c84d29aeee829p-291, 0x1.cdad53a63d4e1p-931, 0x1.44e501e283a37p-259,
     0x1.ffc697129cep-275, 0.0, 0x1.d006c3643281fp-395, 0.0, 0x1.b52d95549430bp-850,
     0x1.d76eb12c96e19p-142, 0x1.19a373336e0f8p-962, 0x1.2454ba39c7d4p-955,
     0x1.5d25a48008fd2p-294, 0x1.ede3e6dcff3c7p-1009, 0x1.3187d52a08254p-694,
     0x1.110dce43dacccp-452, 0.0, 0.0, 0x1.2a1fb35c64e66p-930, 0.0,
     0x1.e879fe7f9037dp-246, 0x1.d8bcccd2ce11dp-563, 0.0, 0x1.8e85441a95f97p-335, 0.0,
     0.0, 0x1.3ab9ada1af6eap-531, 0.0, 0.0, 0x1.80e71156e1f3p-438, 0.0,
     0x1.4c5b235954e7p-547, 0x1.e1b89833952bap-979, 0x1.5258fa0fb21fp-23, 0.0,
     0x1.0f7275e4dbd2bp-621, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0d3578b202772p-975, 0x1.9ca44aab1ccd8p-735, 0.0, 0x1.8ae92e5a2cadbp-972, 0.0,
     0x1.e9cf2d903b1ffp-1014, 0x1.e3f9702838654p-461, 0x1.4efef000a0a0ep-35,
     0x1.7129d61267195p-714, 0.0, 0x1.35507f3428074p-668, 0x1.86e8dc0849235p-970, 0.0,
     0.0, 0.0, 0x1.0d0201a1d19e8p-948, 0x1.05605429c6841p-489, 0.0, 0.0, 0.0,
     0x1.62aff943a7417p-842, 0x1.28ed63d2e3d1cp-720, 0x1.ab5a6722a5df3p-120,
     0x1.9a67c586755e3p-863, 0x1.2b7cc2bd15dbp-811, 0x1.16b2f40101bf8p-701, 0.0,
     0x1.f888ca6d00b55p-338, 0x1.2f600190744b6p-602, 0.0, 0x1.0fb474ba6f75cp-207,
     0x1.a417013f5b387p-465, 0x1.5da992ce429bap-141, 0.0, 0.0, 0.0,
     0x1.4bb63410c9afbp-159, 0x1.fefb7c846238ap-440, 0.0, 0.0, 0.0,
     0x1.71dc6bcf559e7p-328, 0.0, 0x1.8c00bd081e39cp-717, 0x1.3484f7c4fcb8bp-1011,
     0x1.14705bdb12a4ep-155, 0x1.fa581f13aa07fp-719, 0x1.5107aa15dc75ap-64, 0.0,
     0x1.75160768ea591p-423, 0.0, 0.0, 0.0, 0.0, 0x1.eb0a193995864p-305, 0.0,
     0x1.a3046f5d35eaep-809, 0.0, 0.0, 0x1.19b9c91e51cf7p-450, 0.0,
     0x1.632cd550e8c63p-280, 0.0, 0x1.cfec2da5630bap-156, 0x1.9b7ca4fdde775p-433, 0.0,
     0x1.62f9b620fd73p-533, 0.0, 0x1.7a37b42d7f20dp-9, 0.0, 0x1.bd4385aae7d55p-287,
     0x1.5968b29631daap-504, 0x1.09d87537ac317p-615, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d02e5f97de43fp-270, 0x1.3216ec8e96ef3p-162, 0x1.b6912da31c9b5p-353,
     0x1.566639a48fe21p-785, 0x1.07b10e89412f6p-628, 0.0, 0x1.c9a05be006e2dp-289,
     0x1.fd3c7540133a3p-669, 0.0, 0x1.fb578af868216p-718, 0x1.b1fc778133f39p-394, 0.0,
     0.0, 0.0, 0.0, 0x1.22dadd0ef073cp-955, 0.0, 0x1.20ea7b9ae05efp-611, 0.0, 0.0,
     0.0, 0x1.d513246c793d6p-865, 0.0, 0x1.78e93fe975d11p-158, 0x1.787cbf6b81eaep-851,
     0x1.14a91f12dd423p-9, 0x1.e4070e37c2518p-692, 0x1.a35effa8d7724p-168,
     0x1.61ffb0a9d80dbp-707, 0.0, 0.0, 0x1.e49247a2821d4p-691, 0x1.0cfde4c031853p-318,
     0.0, 0.0, 0x1.e84a8f3bd686cp-895, 0x1.2d8ef0aef9919p-413, 0.0, 0.0,
     0x1.b8a259706f637p-324, 0.0, 0.0, 0.0, 0x1.27bf6085fe097p-488, 0.0, 0.0, 0.0,
     0x1.7274ff6836844p-613, 0x1.b4f897359e29fp-993, 0.0, 0.0, 0.0,
     0x1.65b5c891cb75cp-245, 0x1.6de71ec188ed3p-608, 0x1.4c0bcd4692fb7p-188, 0.0,
     0x1.0c707dc4f391ap-104, 0x1.22028b21c125cp-65, 0.0, 0x1.9a1f51b63c6d1p-624,
     0x1.c2d7137704846p-42, 0x1.7cfd54e22dac2p-175, 0x1.1d1e98af1e8acp-692,
     0x1.21086f1d7220dp-484, 0x1.f6c52c530bee1p-593, 0x1.370c4ff6fe0fcp-471, 0.0,
     0x1.6daf5e2726e4bp-594, 0.0, 0.0, 0x1.a5143b37df7fep-817, 0x1.6fc757ad80505p-377,
     0x1.a8a3e6f233e9cp-799, 0.0, 0.0, 0x1.f72de48ed9621p-569, 0x1.9a766f1c5415cp-260,
     0.0, 0.0, 0x1.a38053e64c23bp-980, 0.0, 0.0, 0x1.b4e3b246f5ad4p-999, 0.0, 0.0,
     0x1.b06405e99bab8p-801, 0x1.99e30c226e4cap-379, 0.0, 0x1.40ce184079c03p-325, 0.0,
     0.0, 0x1.a61722ceb3486p-144, 0x1.33d26d00cb0e6p-1014, 0x1.4cebc6b918fcdp-208,
     0.0, 0.0, 0x1.828cc7f635be2p-171, 0x1.f5f1e7f763076p-586, 0.0,
     0x1.88f55c7d91ba2p-753, 0.0, 0x1.37eb8e93bc2c1p-430, 0x1.31327ccb3f125p-78, 0.0,
     0.0, 0x1.ad649f57fde2bp-544, 0x1.ffa4dd7ace955p-10, 0.0, 0.0,
     0x1.d992bc927c52fp-325, 0.0, 0x1.501d97949eff5p-676, 0.0, 0.0, 0.0,
     0x1.bd8c1a325b3d4p-217, 0.0, 0.0, 0.0, 0x1.4f03dbde26bcep-1017,
     0x1.4718ba175729p-357, 0x1.47d3c5a2bfc97p-501, 0x1.960e1569a8194p-959, 0.0, 0.0,
     0.0, 0x1.5ff47081e0addp-752, 0.0, 0.0, 0x1.08c8d0023d99bp-701,
     0x1.64f69fe0b2e8fp-775, 0.0, 0x1.0c1027b3aec88p-145, 0x1.27da77845cc9fp-307,
     0x1.3d17480bb6101p-4, 0.0, 0.0, 0x1.7cc21778863e5p-436, 0.0,
     0x1.24c7a1044b521p-738, 0.0, 0.0, 0.0, 0.0, 0x1.6821aac95ffap-874,
     0x1.a7fb473c315b2p-547, 0x1.8469c40c5fa8cp-310, 0x1.edea67e686233p-828, 0.0, 0.0,
     0x1.1642ed0166fefp-509, 0.0, 0.0, 0x1.7410f6669184dp-273, 0x1.6b1d62aa10f65p-798,
     0.0, 0x1.16ffa1ceb7c97p-595, 0x1.0e51af2be97e6p-713, 0.0, 0x1.f041290aea425p-331,
     0x1.947e2fbd11dc5p-560, 0x1.e33d968d9968dp-1013, 0x1.274ba2993211dp-25, 0.0,
     0x1.839f3fba3ff3p-791, 0x1.f5243fe2fa759p-396, 0.0, 0x1.6caa7ba21e10fp-585, 0.0,
     0x1.6cf37c77c7107p-235, 0.0, 0.0, 0x1.966ddf77944a9p-945, 0x1.ffb60dc2a73dep-133,
     0.0, 0x1.5113cf6cfd2b8p-351, 0.0, 0x1.7694175107c21p-450, 0x1.4c58bc1e7fd3ap-846,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13fed09c09276p-873, 0.0, 0.0,
     0x1.8dee87dfca2fdp-184, 0x1.7eda1db474deap-786, 0x1.2e0da7a9ea8a8p-636,
     0x1.200ea66bf1c6p-308, 0.0, 0.0, 0.0, 0x1.61c6add095521p-180,
     0x1.b96710bb54057p-727, 0.0, 0x1.9e76985f1625ep-507, 0.0, 0x1.233dddfa8bc14p-525,
     0.0, 0x1.e1846fe55b783p-517, 0x1.fd6da7a65c9eap-476, 0x1.9d37071b1f97p-29,
     0x1.a8bd57bc52612p-869, 0x1.b5d569fea67bdp-657, 0.0, 0x1.42caaff422d1p-7, 0.0,
     0x1.249342717a152p-877, 0.0, 0.0, 0x1.35b3ab7571201p-203, 0.0,
     0x1.23b51ebb56c65p-127, 0x1.38ac89434682bp-324, 0.0, 0x1.763f229c5afe7p-346, 0.0,
     0x1.ca10deeca3795p-808, 0x1.c918102185467p-345, 0x1.5c826ac721813p-568, 0.0, 0.0,
     0.0, 0x1.4a43e655b87f4p-16, 0.0, 0x1.469aededd2b6p-543, 0.0,
     0x1.9161401de343ep-955, 0x1.f52748aed644ep-932, 0.0, 0.0, 0.0,
     0x1.167f2ff2723fdp-443, 0x1.f97380e299b85p-166, 0x1.91d5799f28562p-956, 0.0, 0.0,
     0.0, 0x1.26dacf46f4c7ep-353, 0x1.65f14601c66e2p-493, 0.0, 0.0,
     0x1.006623c30b5c2p-638, 0.0, 0x1.ebeca6667494bp-525, 0.0, 0x1.e27298aa769b6p-433,
     0.0, 0.0, 0.0, 0x1.8b7f51353df65p-90, 0x1.cac81361100acp-311, 0.0,
     0x1.816228bcbcc28p-221, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d574a5a630c2p-975,
     0.0, 0.0, 0x1.b3cf7d23eaeb2p-273, 0.0, 0.0, 0.0, 0x1.23d7a53dff0b7p-671, 0.0,
     0x1.f6a5a245cd62p-524, 0.0, 0x1.ce209a636bba4p-23, 0.0, 0.0,
     0x1.29ac57e68aeb3p-42, 0x1.1cca07c22da68p-1002, 0x1.72d1ca9837bap-1007,
     0x1.550ab0f0484f1p-497, 0x1.eb306827eda93p-825, 0x1.6490fbcef4decp-49, 0.0, 0.0,
     0x1.7a09a53d80671p-968, 0.0, 0.0, 0x1.5efeedb37d6fdp-294, 0.0, 0.0, 0.0,
     0x1.713192a308f4ep-758, 0.0, 0x1.ae89316859089p-940, 0x1.8f5a125464c67p-137,
     0x1.cb5ae5cf5085ep-3, 0.0, 0.0, 0.0, 0x1.fe45cf428d949p-756, 0.0, 0.0, 0.0,
     0x1.80a0eb9011d4ep-456, 0x1.f051f535126ccp-810, 0.0, 0x1.ef8457ec7c09p-973,
     0x1.10dd8b1b507f5p-494, 0.0, 0.0, 0x1.49ee534e9a861p-818, 0.0, 0.0,
     0x1.ec48a2599d6dp-687, 0x1.50ff7db244a9fp-369, 0x1.69fb665574e79p-450, 0.0, 0.0,
     0x1.b116841221ef4p-304, 0x1.880201c216c7ap-271, 0x1.081bb9a4ad502p-246, 0.0, 0.0,
     0x1.dd6f7d8e5ad2bp-598, 0x1.02fc873e57252p-472, 0x1.68e2477b675efp-985,
     0x1.43a37d8dc9c6dp-923, 0x1.65d300b90adf5p-352, 0.0, 0.0, 0.0,
     0x1.c0414ce0cd54p-243, 0.0, 0x1.9a4c536862404p-588, 0.0, 0.0, 0.0,
     0x1.7c288c4633437p-213, 0x1.bc7726ab50d0ap-151, 0x1.7e64264f4a9fp-496, 0.0,
     0x1.7d1ad3a56d8abp-319, 0x1.4ddc5bf5356f7p-777, 0x1.9ce58774c581bp-267,
     0x1.63d8bab97f151p-793, 0.0, 0.0, 0.0, 0.0, 0x1.6647f60e79c17p-686, 0.0, 0.0,
     0x1.cb4c218f12e32p-135, 0.0, 0.0, 0x1.939bb98f140cap-823, 0x1.8178848e80fbap-307,
     0.0, 0x1.f185d29edc342p-740, 0x1.9c6382730bef4p-775, 0x1.1e9d42fe15991p-895, 0.0,
     0.0, 0x1.608c65c2eaa01p-142, 0x1.2c469ab17da36p-689, 0.0,
     0x1.6ce4881231b17p-1010, 0x1.323d7b5eb0664p-844, 0.0, 0.0,
     0x1.2118ab9cbfa22p-943, 0.0, 0x1.ac4338c75073bp-211, 0x1.d0b91dad06a8ap-763, 0.0,
     0.0, 0x1.9f75c550d58b4p-548, 0.0, 0.0, 0.0, 0x1.6b0c548f05048p-1013, 0.0,
     0x1.05ad02f6d30ep-690, 0.0, 0x1.ee3e09e3d8ec8p-890, 0.0, 0x1.9aae143cdcce1p-851,
     0.0, 0.0, 0.0, 0.0, 0x1.bb8afcd1f5a3p-66, 0x1.ada6348b86d59p-274, 0.0,
     0x1.e00831e1f0832p-515, 0.0, 0x1.81ca6f7c51436p-768, 0x1.ee8b57084626cp-206, 0.0,
     0x1.7324d23d3c352p-553, 0x1.793d2ab3b8b3ap-169, 0x1.dc91f74f48ebep-983, 0.0,
     0x1.5279f56064658p-925, 0x1.0a5e1dd7ac89dp-756, 0.0, 0.0, 0x1.cbda60b392d2ep-197,
     0x1.d130226938741p-704, 0x1.be6414cce203ep-474, 0x1.4c3af55bb8165p-151,
     0x1.ea0420e6a257p-436, 0x1.86e484df7d2e9p-322, 0x1.0adb8045e2f7p-44, 0.0, 0.0,
     0x1.216261f201bd1p-463, 0.0, 0x1.bd9d0483dfd32p-466, 0x1.57bec2f65183ep-54, 0.0,
     0.0, 0.0, 0.0, 0x1.c3d413e4b6c78p-65, 0.0, 0.0, 0.0, 0.0, 0x1.49319eeb858e9p-417,
     0.0, 0.0, 0x1.3cd7f0a302f34p-626, 0.0, 0.0, 0x1.1ebe22d94fc23p-336,
     0x1.208a41720800ep-881, 0.0, 0x1.0d4fb2acac7a9p-664, 0x1.e8b1393a70bd2p-601, 0.0,
     0x1.5d103965e67d1p-432, 0x1.f7b6453f37784p-544, 0x1.300a3b9742c5bp-440, 0.0, 0.0,
     0x1.525bcb341dbd7p-162, 0.0, 0.0, 0.0, 0.0, 0x1.9e7805005e042p-675,
     0x1.e978f9eff0d11p-11, 0x1.fa974969255bbp-896, 0x1.b1c79767556b9p-861,
     0x1.0377b0ceb5bb3p-953, 0.0, 0x1.50595b124aa68p-480, 0x1.bb8f7afcf165p-333, 0.0,
     0.0, 0x1.3faf4691fa838p-165, 0.0, 0x1.72a9dc468860cp-785, 0x1.4ed65b2baf934p-113,
     0.0, 0x1.ec15d65e17eb4p-314, 0x1.9b7f054beaeadp-831, 0.0, 0x1.724e317d80f02p-66,
     0x1.5c77cc7506b32p-32, 0x1.11778934b4a34p-176, 0x1.9704fef028ab6p-354, 0.0, 0.0,
     0.0, 0x1.39f58b241f6ddp-677, 0.0, 0x1.2041d1fcac3d4p-264, 0x1.e77323bdea719p-9,
     0x1.1fd0e62f132e3p-91, 0x1.65727143ec77fp-811, 0.0, 0x1.b15d05071f436p-915, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd62fe3b671a5p-252, 0x1.fd6b7a7347d53p-362,
     0x1.2b86c4795087dp-80, 0x1.74e0dbbda36e4p-983, 0.0, 0x1.d3c604c8c8ebep-125, 0.0,
     0.0, 0.0, 0.0, 0x1.2a3fe0b53efc2p-412, 0x1.8d4664d6d3309p-364, 0.0, 0.0,
     0x1.3c26fd478e933p-387, 0x1.9f0de04bbb5efp-463, 0.0, 0x1.e37a88cc662e9p-77,
     0x1.054c4b813a9f2p-979, 0x1.18ddc19af134bp-297, 0x1.72dff06216b1dp-183, 0.0, 0.0,
     0.0, 0.0, 0x1.8754ca9f47751p-464, 0.0, 0.0, 0.0, 0x1.830679a1008ebp-246,
     0x1.e6fc64693f2aap-9, 0x1.605ff327b8afp-875, 0x1.2f4ce2a322f99p-92, 0.0,
     0x1.a261d4829699bp-894, 0.0, 0x1.9957dd166d508p-17, 0.0, 0x1.d3ab970cf4196p-663,
     0.0, 0x1.5e670335721f7p-425, 0x1.3d9399388f663p-791, 0.0, 0.0,
     0x1.d2b33033edf47p-309, 0.0, 0.0, 0.0, 0x1.bf3d5db3beefep-65,
     0x1.24ee2e9de6ac9p-939, 0.0, 0x1.aa95f8f480cefp-155, 0.0, 0.0, 0.0,
     0x1.ca193bb254584p-573, 0x1.7c662c0e39eedp-92, 0.0, 0.0, 0.0,
     0x1.f9d6298e30048p-333, 0x1.cc0ae2db2ed69p-380, 0x1.e6e86b902acdbp-869,
     0x1.9535dea296c69p-650, 0x1.430df11aadcbcp-677, 0x1.dd8a5c8425c16p-827,
     0x1.4ace5655ef904p-530, 0.0, 0.0, 0.0, 0.0, 0x1.fee1a18508a74p-508, 0.0, 0.0,
     0.0, 0x1.101d243939d95p-710, 0.0, 0x1.203c866864dacp-925, 0x1.dc43ed45fad0dp-362,
     0x1.7a58cbdba964cp-716, 0.0, 0.0, 0.0, 0x1.cbcb586f81109p-413, 0.0, 0.0,
     0x1.434af35b32a77p-598, 0.0, 0.0, 0x1.9afd240c5f1b4p-123, 0.0,
     0x1.e6cc5d63a2fc7p-378, 0.0, 0.0, 0x1.6ddbad3600304p-885, 0.0,
     0x1.6172f9b72e98fp-575, 0.0, 0.0, 0.0, 0.0, 0x1.cbc55d9409a07p-92, 0.0, 0.0, 0.0,
     0.0, 0x1.3d43a6e3a69ffp-904, 0x1.6ca51077b655p-82, 0.0, 0x1.2f4812238987ep-419,
     0.0, 0.0, 0.0, 0.0, 0x1.b8cae5aa47c6fp-1015, 0.0, 0.0, 0x1.f47645ddd524p-554,
     0x1.fac9f578ba3b8p-54, 0x1.889d15b676b36p-48, 0.0, 0.0, 0x1.6e75f2676c504p-488,
     0.0, 0.0, 0.0, 0x1.b4c4050464887p-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fccd1c8d92d02p-694, 0.0, 0x1.074f2a53d75b9p-483, 0x1.e7000de45943fp-810, 0.0,
     0.0, 0.0, 0x1.fa6bba85be0d9p-8, 0x1.f0cf18fb73b6cp-951, 0x1.2e72ed241f51dp-224,
     0.0, 0x1.972801a68e14ep-348, 0.0, 0x1.4fbbe7efb9eadp-251, 0.0,
     0x1.75098232fec01p-118, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc7143aa8aa5ep-813, 0.0,
     0.0, 0x1.46ad3bd8082bcp-955, 0x1.977d4111500e3p-398, 0x1.d4337a88d9804p-568, 0.0,
     0x1.e5886c4dc6eddp-408, 0.0, 0x1.0d171be981326p-590, 0.0, 0x1.adb57214dce22p-851,
     0x1.86cf993efff4dp-646, 0x1.71fcb90ec6a87p-477, 0.0, 0.0, 0x1.f6dc007d42c9ap-163,
     0x1.b721b093f5217p-255, 0x1.f413561423bb3p-21, 0.0, 0.0, 0x1.318af6a8cd1eep-335,
     0.0, 0x1.3f1b1512e220dp-607, 0x1.9d80101a5a8bbp-1019, 0x1.0c3dbe3145d44p-1010,
     0x1.5eb9e13c1f6e7p-661, 0.0, 0x1.643bbafe6627bp-91, 0.0, 0x1.9c78d0c9d4415p-940,
     0.0, 0x1.a43f72b9b3935p-335, 0.0, 0.0, 0.0, 0x1.dc56017cb16fp-466,
     0x1.93918f8daa3abp-98, 0.0, 0x1.e541a4612e415p-178, 0.0, 0.0,
     0x1.ffa5a03d468c7p-878, 0.0, 0x1.3efd1e2d46268p-615, 0x1.86357836eb018p-347, 0.0,
     0.0, 0.0, 0x1.29aa91f421bbfp-646, 0x1.a2d88abfb19e5p-695, 0x1.9fdc9ba9e8346p-268,
     0x1.7d851853b7a0ap-392, 0.0, 0x1.d7546a0b93a63p-40, 0x1.0b2cb41e0a486p-260,
     0x1.83b80b3a5de79p-213, 0.0, 0x1.55936a534ceccp-586, 0.0, 0x1.62d1ab60cf495p-911,
     0x1.42a05fc2ff26ap-174, 0.0, 0x1.e8bf9c7bc75c9p-610, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.38d8ee3d71e5ap-252, 0.0, 0.0, 0x1.aa3b1a1f02b64p-855, 0.0,
     0x1.805faa8c6bd7ap-248, 0x1.688d5df4457c7p-906, 0.0, 0.0, 0x1.81beab9a80402p-504,
     0x1.c8b681870702p-504, 0.0, 0x1.ddf0b8dac754p-758, 0.0, 0x1.b368179420132p-420,
     0x1.7f876e02653ep-736, 0x1.26930ae3c0318p-577, 0x1.f7327903a7fffp-771,
     0x1.91918d394533ep-922, 0.0, 0.0, 0x1.0fe0452602e2ep-748, 0.0,
     0x1.5ead410c2c17ep-110, 0x1.7de609f923afcp-723, 0x1.c337b9468ac7ep-925,
     0x1.14a274fc3bdc3p-470, 0x1.5a592d34f23cap-196, 0x1.7af030f6d9d56p-681, 0.0, 0.0,
     0x1.cb5ac03d44743p-420, 0.0, 0.0, 0.0, 0x1.0f4963b92cfe5p-295, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.144f4469522e8p-444, 0.0, 0.0, 0.0, 0x1.2f966daf35a05p-810,
     0x1.e183b9cff2fc9p-755, 0.0, 0x1.5ff9083e37c66p-663, 0.0, 0.0,
     0x1.7f50d3c084f03p-369, 0.0, 0x1.a775f7bff479dp-400, 0x1.60338c04d9718p-783, 0.0,
     0x1.d8c7fb8b5a2dbp-272, 0.0, 0.0, 0x1.2d34d70df1a6bp-69, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dd1256d9c68f9p-564, 0.0, 0.0, 0x1.468fc4f884337p-554, 0.0,
     0x1.16d871cf8eb7p-66, 0x1.474d2e6320565p-624, 0.0, 0x1.3f7de7b711388p-922,
     0x1.df235bb1443ep-630, 0x1.12d6c5cd68d4ep-778, 0x1.1b76bba50eb06p-5, 0.0, 0.0,
     0x1.ba79d0762a70cp-187, 0.0, 0.0, 0x1.67caffa11a8a2p-289, 0x1.319e29f7a45d4p-265,
     0.0, 0.0, 0.0, 0x1.faf704316f4a9p-338, 0.0, 0x1.17f88583c8b76p-969,
     0x1.e4483f1a3d229p-538, 0x1.17e35ad39b5cbp-977, 0x1.e7ecaaa72e708p-246,
     0x1.55d3df70b896ep-219, 0.0, 0x1.30fc47fd707a5p-198, 0.0, 0x1.115e959d86735p-624,
     0.0, 0.0, 0x1.ca1217d53a392p-932, 0x1.ee01102832a79p-881, 0x1.129685fb73be5p-520,
     0.0, 0.0, 0x1.f63420dc78bd3p-249, 0x1.e7e4b44b3bc4p-872, 0x1.df0acc82d4383p-552,
     0x1.4316bb224585dp-409, 0.0, 0x1.4b3b07a5228cfp-554, 0x1.cb8601ffc3b01p-555, 0.0,
     0.0
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
            tmp1 = Sleef_finz_exp10d2_u35kvx(tmp0);
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
    printf("Sleef_finz_exp10d2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp10d2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
