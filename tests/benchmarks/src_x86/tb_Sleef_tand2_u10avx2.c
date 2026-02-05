/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand2_u10avx2128.c --function Sleef_tand2_u10avx2128 --headers \
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
     0x1.d0f9c47056b9bp-986, 0.0, 0x1.b58b79756dd1ap-439, 0.0,
     0x1.dfa4ee0af36c4p-914, 0x1.e75c4027f1e6fp-357, 0x1.41b4367808365p-155, 0.0, 0.0,
     0.0, 0x1.54af49d74d8f3p-224, 0.0, 0.0, 0x1.8d71e7eb6d1f1p-312, 0.0,
     0x1.14dac818160f9p-321, 0.0, 0x1.e2c3ceea5a6b4p-930, 0x1.e70e106d6003cp-733, 0.0,
     0.0, 0x1.0ed4bb25fed17p-670, 0x1.6e36d15ff51a6p-331, 0x1.97ed66b816431p-290, 0.0,
     0x1.f88e7c46df504p-370, 0x1.8e4238337060dp-378, 0.0, 0x1.a6d283fa1f9f5p-110,
     0x1.f96054df656ddp-333, 0x1.717022c2d2526p-4, 0x1.9b76b8f3d9dacp-66, 0.0,
     0x1.37b71c88f5a25p-840, 0.0, 0x1.f05a4afb8aea6p-983, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ef4d1b07fefefp-175, 0x1.3562ae01d27b6p-632, 0x1.b3d85d80cd181p-898, 0.0, 0.0,
     0x1.10384bf836c86p-990, 0.0, 0.0, 0.0, 0.0, 0x1.6dbb206cd9f8dp-934, 0.0,
     0x1.d280bc3fb9d8cp-601, 0x1.2fbba43eefa94p-241, 0x1.86c29cb3fedb9p-581, 0.0, 0.0,
     0.0, 0.0, 0x1.8d65761e7f565p-720, 0x1.dc7104587712ep-853, 0x1.175b64045c968p-946,
     0x1.882f769de3a19p-646, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44e6892202f93p-311,
     0x1.4490c5d27a834p-282, 0.0, 0x1.b4e85d2d71538p-284, 0.0, 0.0, 0.0, 0.0,
     0x1.646b274a049c6p-579, 0.0, 0.0, 0.0, 0x1.c0c3fd00c55fp-514,
     0x1.eebd3ac0b5c32p-832, 0.0, 0.0, 0x1.b18900cee29f5p-703, 0.0, 0.0, 0.0, 0.0,
     0x1.7b45216bc590cp-77, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07f079b7a4b1dp-1014, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fec91e697d46dp-82, 0.0,
     0x1.553528d702adfp-278, 0x1.e353c488f2d1dp-488, 0.0, 0x1.002e1ffd3a994p-512,
     0x1.eee010951d76fp-113, 0.0, 0x1.de973161c7ec5p-379, 0.0, 0x1.3bca7fadfe99bp-285,
     0.0, 0.0, 0x1.331cfd707c601p-978, 0.0, 0.0, 0x1.23247045e9331p-10,
     0x1.16c9178afc6c8p-838, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.faad67e40ffep-943, 0.0,
     0.0, 0x1.c68a6cc3967fp-14, 0.0, 0x1.1c2d23bca98efp-742, 0x1.4fdd355814d7ap-515,
     0x1.fa0a00197c928p-298, 0x1.a81f235c2fb4bp-39, 0x1.85b63cf36ab03p-865, 0.0,
     0x1.6dac9a103d45fp-708, 0x1.987adae959365p-197, 0x1.c4d88acac7ed2p-965, 0.0,
     0x1.daf1f3727b447p-449, 0.0, 0.0, 0.0, 0.0, 0x1.a62b0e8d9872ap-747,
     0x1.0220556d782d6p-883, 0.0, 0.0, 0x1.0e533bcff53dep-215, 0x1.10b892aac542bp-178,
     0x1.cf1c818a9d6acp-206, 0x1.d76f36dd243abp-578, 0x1.539b59b5f735p-49,
     0x1.e5b6bfdad5cc1p-747, 0x1.4fbccc49c3f4ep-599, 0x1.ef9556af473a3p-635,
     0x1.2f5da17257386p-199, 0.0, 0x1.4cce44cb4a36fp-94, 0.0, 0x1.56de1a7d776b5p-679,
     0x1.4b231455d486fp-502, 0x1.71fea0293187cp-190, 0x1.eb761d4fbd287p-349, 0.0,
     0x1.e2bcd6dbe49c7p-710, 0.0, 0.0, 0x1.17c09ba9a41f6p-611, 0.0,
     0x1.67b8f9b1f0165p-390, 0x1.e489a4de41e6ep-590, 0.0, 0.0, 0x1.f4987f54016cap-762,
     0x1.642d5783fa3d8p-910, 0x1.439720bab760bp-618, 0.0, 0x1.f03acebd26191p-446,
     0x1.799d86527ecd7p-408, 0.0, 0x1.e4d74ccd8d032p-183, 0.0, 0.0,
     0x1.8091d15c101a8p-364, 0x1.7ba8c99f5aed8p-915, 0.0, 0.0, 0x1.2aad0318d74b5p-312,
     0.0, 0x1.731b197b706f2p-664, 0x1.5945770c20e95p-882, 0x1.aa18c15411d1cp-31,
     0x1.0ae20bbc638d2p-553, 0.0, 0.0, 0x1.2cc17f997ef93p-42, 0.0, 0.0, 0.0, 0.0,
     0x1.c0cd4e3e2a1a8p-626, 0.0, 0.0, 0x1.f2146917edc6ep-877, 0.0,
     0x1.40228515e1f0bp-1020, 0x1.8eae9df00b2dfp-584, 0x1.c262acc8d40c4p-692,
     0x1.ad02ab75484e4p-928, 0x1.537ca7a0568cap-80, 0x1.818ec3e0da8f6p-853, 0.0,
     0x1.d1c749ee40ef6p-717, 0.0, 0x1.3d85dc057ef28p-761, 0.0, 0x1.b738ff27cf745p-723,
     0.0, 0.0, 0.0, 0x1.5ae8bcff575dep-208, 0x1.1e26153990747p-658, 0.0, 0.0, 0.0,
     0x1.1a58085888713p-787, 0.0, 0x1.59493f37fdee1p-931, 0.0, 0.0, 0.0,
     0x1.0255681b5d3f7p-969, 0x1.f9dd8425bf751p-384, 0.0, 0x1.db4063aa893e1p-71, 0.0,
     0.0, 0x1.d66c0bbbb36e4p-415, 0x1.89faf80da5046p-750, 0.0, 0.0,
     0x1.920e1346a7658p-1002, 0x1.5ba1d20ec2b42p-308, 0x1.63311854df75dp-860, 0.0,
     0x1.0463dbc924106p-380, 0.0, 0.0, 0.0, 0x1.d1f3f5cdbc7p-54,
     0x1.5c575ecf66133p-298, 0.0, 0.0, 0.0, 0x1.2a70f0ab166adp-447,
     0x1.bdaf99bcda52dp-977, 0.0, 0.0, 0x1.e3e0d6032460dp-556, 0x1.40b12b733266cp-406,
     0x1.d53b6c47a5714p-571, 0.0, 0.0, 0x1.a2a2976b8159bp-693, 0x1.1acb3b2527384p-159,
     0.0, 0x1.7e497c9df2dbdp-705, 0x1.df0ddf54df867p-292, 0.0, 0x1.1b1b29273abe7p-112,
     0x1.9344e680ed9a1p-394, 0.0, 0.0, 0x1.22377f773feccp-477, 0x1.65ad0d321df42p-397,
     0x1.ccb5a48c761e7p-839, 0x1.2ed94b2d8944bp-362, 0x1.5d3e583432681p-1017,
     0x1.0daafe6506b5fp-254, 0.0, 0.0, 0x1.876addefaf3a2p-852, 0x1.8f555553f9f75p-809,
     0.0, 0.0, 0x1.e76ed097c9b52p-958, 0x1.215b423860a23p-102, 0x1.fbde4904e5e51p-404,
     0x1.ca265a3c44f01p-356, 0.0, 0x1.7dea5a6fe1ce8p-16, 0.0, 0.0,
     0x1.c34bfe23ed54ep-954, 0x1.dde0ce57acd9ap-44, 0x1.6ac6c6db81c57p-494,
     0x1.d447c041743c5p-731, 0x1.33d412ac79aa8p-355, 0.0, 0x1.f0d4f08514a73p-864,
     0x1.f622e802a5792p-633, 0.0, 0x1.361b40a605fc5p-615, 0.0, 0.0,
     0x1.12e8a32449983p-348, 0.0, 0x1.ba7d5bf33e6e9p-181, 0.0, 0.0,
     0x1.00bf74f02f2ebp-650, 0.0, 0.0, 0x1.24dc8b64ab1a1p-819, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f865bfe0c8aa8p-216, 0x1.030c22ca5d48fp-960, 0x1.c55adce0511c2p-638,
     0x1.928c02ab21047p-479, 0.0, 0.0, 0.0, 0x1.2534c3b379a02p-200,
     0x1.d7f73a961e3dp-281, 0x1.42401dad4764dp-962, 0x1.ca8c01af7f7b7p-627,
     0x1.d45f07b24f294p-163, 0.0, 0x1.cb02ef301d392p-683, 0x1.6f73d1e555393p-530,
     0x1.caca83795afeap-816, 0x1.49c7b3edb58abp-765, 0x1.1378ab0484f7cp-268, 0.0, 0.0,
     0x1.3b63310430311p-896, 0.0, 0x1.7e441ec3d05ffp-744, 0x1.9a0a1d57ea005p-102, 0.0,
     0x1.e4108ed76c4a7p-303, 0.0, 0x1.4fa68e808c8d6p-174, 0.0, 0.0,
     0x1.eba66b1855a8dp-92, 0.0, 0x1.c72f56e510d6p-112, 0.0, 0.0,
     0x1.c316fd7b7513fp-137, 0x1.6d23f8cfcf2ecp-244, 0x1.492f54f3e9e7bp-665, 0.0, 0.0,
     0x1.c02da8a4910a9p-123, 0.0, 0x1.af51d0e1960b8p-752, 0x1.b459680b28abp-296, 0.0,
     0x1.8b194fb5f3e55p-244, 0.0, 0.0, 0x1.ca3189a13bb27p-118, 0x1.9640d4e018089p-916,
     0.0, 0.0, 0.0, 0.0, 0x1.3cc7e347ee52ep-480, 0.0, 0.0, 0.0, 0x1.30f82fc657678p-52,
     0.0, 0.0, 0x1.7bc42be0041d6p-962, 0x1.91f13ac87d3c8p-686, 0.0, 0.0, 0.0, 0.0,
     0x1.c78d70f57639dp-706, 0x1.a56d405102d63p-881, 0x1.538d7b7dcc6d2p-92, 0.0, 0.0,
     0x1.f9a9f7da9a3f4p-432, 0x1.1e5c547a12267p-222, 0.0, 0x1.96227a468074ap-922,
     0x1.56e42ebfc9446p-717, 0x1.33a8b4048ddd1p-981, 0.0, 0.0, 0x1.0e07786cb9d79p-853,
     0.0, 0x1.28e8fe4e1d75ep-648, 0x1.449943f12b4f1p-637, 0.0, 0.0, 0.0,
     0x1.354623c2b9dcdp-254, 0x1.87c58a13c98ddp-196, 0x1.2d67b092c7d63p-22,
     0x1.40c75654c5fa2p-876, 0x1.0aac13f9fb02cp-964, 0.0, 0.0, 0.0,
     0x1.c2c69cc75cd22p-743, 0.0, 0x1.ee61a37d5abc1p-71, 0x1.8771464d195eap-686, 0.0,
     0x1.3b15e6f3a25c6p-706, 0.0, 0.0, 0.0, 0x1.4452e25f7f9e9p-601, 0.0, 0.0, 0.0,
     0x1.c4d38638c4b4bp-806, 0.0, 0.0, 0.0, 0.0, 0x1.d8b72a191863p-256, 0.0, 0.0,
     0x1.27d4120d85338p-726, 0x1.5237726b67989p-364, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8c1cf0110678p-998, 0.0, 0.0, 0.0, 0.0, 0x1.622fc5a677a0dp-564,
     0x1.f901b7ada37b4p-505, 0.0, 0.0, 0x1.602322f08b8p-1016, 0x1.1e859c5062f0cp-851,
     0x1.a059c30e15b76p-832, 0.0, 0.0, 0.0, 0x1.3aba5f05b3a76p-618,
     0x1.9e49b65d62895p-531, 0x1.8e2a7e4f7ded3p-763, 0x1.df47f06293c2cp-385, 0.0,
     0x1.eef5dac7b7494p-230, 0.0, 0x1.f9c6d59f1c9c2p-316, 0x1.162042bc1efbap-546, 0.0,
     0x1.c5df8f16d13dbp-951, 0.0, 0x1.a0c247786eacep-129, 0x1.25aed9034d095p-516, 0.0,
     0.0, 0x1.4b19f89b3f1acp-89, 0x1.69e303ac86d61p-897, 0.0, 0x1.2e6e079ad7514p-220,
     0x1.2d2caeef59f7cp-867, 0.0, 0.0, 0.0, 0.0, 0x1.3378b126b62dep-989,
     0x1.daa914032b62fp-162, 0.0, 0x1.4d3da6a56b8bbp-295, 0x1.e881db0a277b6p-671,
     0x1.ec15e020d06d8p-780, 0x1.c3f889d4ea692p-185, 0x1.f75db9882019bp-860,
     0x1.eceb4e150a5b1p-775, 0x1.b3562a38fdc5ep-269, 0x1.59bc1d936bf5ap-811,
     0x1.555a161762afbp-789, 0.0, 0x1.646b119e0f759p-289, 0.0, 0.0,
     0x1.6e3da1d142616p-972, 0.0, 0.0, 0x1.594a25ec2415dp-63, 0x1.fcde5d2471fcep-269,
     0x1.5b93d92396e5ap-524, 0x1.e5ef6c316c6a8p-897, 0x1.418dd4d723007p-359,
     0x1.f4c085a859ce6p-693, 0.0, 0.0, 0x1.8c0a5d4a70939p-1014, 0.0,
     0x1.28bd47e90343dp-580, 0.0, 0.0, 0.0, 0x1.de090c9807318p-712, 0.0,
     0x1.030827fa39c15p-782, 0.0, 0x1.a68aa4753ec02p-300, 0.0, 0x1.a68ca4e58dd0ep-300,
     0x1.a9695acbeb1bfp-179, 0x1.7bcfbb00883e7p-172, 0.0, 0x1.9e7927767e9bcp-562, 0.0,
     0.0, 0x1.ebeadbd3b0f81p-738, 0.0, 0x1.f5aa5c9432d0cp-307, 0.0,
     0x1.573afe6a2be2dp-853, 0.0, 0.0, 0.0, 0x1.87394db6d997bp-681,
     0x1.e55aae59f20c4p-970, 0.0, 0x1.a0ab47de2de51p-305, 0.0, 0.0, 0.0, 0.0,
     0x1.9b47dcfe0137cp-807, 0.0, 0.0, 0x1.f9edd0c0dfaddp-310, 0x1.b83274c02f6ebp-45,
     0x1.81faacddfdca6p-236, 0.0, 0.0, 0.0, 0x1.90e9723a12f42p-144,
     0x1.f3416aaeb3965p-1016, 0.0, 0x1.b06cecc559f8fp-271, 0x1.f5419d3881256p-719,
     0.0, 0.0, 0.0, 0.0, 0x1.6c12c3960cadcp-894, 0.0, 0.0, 0.0,
     0x1.50f5bb245d75fp-127, 0x1.edb82dda223eep-911, 0.0, 0.0, 0.0,
     0x1.9f59f996f6ee9p-856, 0.0, 0x1.b1a6e573c8f62p-952, 0x1.23c2126291956p-449, 0.0,
     0x1.2743ae89fae63p-741, 0x1.36fcf45052fa2p-286, 0x1.5c21076aeb6ebp-78, 0.0,
     0x1.86997be1a0cc9p-765, 0.0, 0.0, 0x1.bce33daf4858fp-63, 0.0, 0.0,
     0x1.1a24b0fc0d8c9p-174, 0x1.c5af2a4b7a4ffp-282, 0x1.b17b59e3da56ep-6,
     0x1.b40f9ace9e063p-625, 0x1.9a6de9b714d44p-646, 0.0, 0.0, 0x1.b8da15c311db2p-739,
     0x1.69d4fcbd38467p-438, 0x1.0eb6e98266086p-781, 0x1.07bcaacd0c0b2p-132,
     0x1.cb9a5584c903p-22, 0.0, 0x1.50110f38add6cp-608, 0.0, 0x1.baa4646dc9646p-450,
     0.0, 0.0, 0x1.90a62faec94f1p-874, 0x1.d4e8f99ce75dcp-1017, 0.0,
     0x1.2d81c1e8814f8p-811, 0x1.4ef510aab6422p-544, 0x1.fa2a143d7521bp-462, 0.0,
     0x1.0e4d730a6adcap-57, 0x1.cba69534cb2f8p-979, 0x1.3892688b3d52fp-1005, 0.0,
     0x1.538448b416853p-70, 0.0, 0.0, 0x1.85f87f5d78763p-715, 0x1.41c8ce7d5531p-278,
     0.0, 0x1.0fbaef5c9527ep-931, 0x1.a53914ed0183ep-326, 0x1.6d83ceca3a445p-528,
     0x1.39d30dda8b467p-388, 0.0, 0x1.04b48c654aa3p-127, 0.0, 0.0,
     0x1.ad7c4a32ef9a6p-365, 0x1.33395e69044f8p-169, 0.0, 0.0, 0.0,
     0x1.5af20aa7476fcp-695, 0.0, 0x1.2be7b4795d90dp-371, 0.0, 0.0,
     0x1.018e8dfdc0b4p-506, 0x1.ff395c89e6765p-811, 0.0, 0x1.740a4e06ca0f2p-291,
     0x1.8edc69225aeffp-911, 0.0, 0x1.a11ab407114d2p-703, 0.0, 0.0,
     0x1.0ad976d36284fp-905, 0.0, 0x1.bbcbb9cfb3bf8p-362, 0x1.f18171a0784a4p-94, 0.0,
     0.0, 0x1.596e671d4b4bcp-34, 0x1.8fbd86edb9962p-177, 0x1.9e64c63327dcep-511, 0.0,
     0x1.cf2104231e488p-158, 0x1.3b60a994441ecp-35, 0.0, 0x1.598dd46d65d8dp-396,
     0x1.efb7141677dap-302, 0x1.1f61b308d36fap-242, 0x1.26648bf31de67p-250,
     0x1.4daab303a411bp-596, 0x1.363779d733197p-293, 0x1.dc1b9bb0ded4p-226, 0.0, 0.0,
     0.0, 0x1.f6f31fbfa45c5p-1014, 0.0, 0x1.02b0ca05e96a3p-278, 0.0, 0.0,
     0x1.e0e56b7d1276cp-13, 0.0, 0.0, 0.0, 0.0, 0x1.0c7bbda8eba85p-220, 0.0,
     0x1.27c6927898fc5p-908, 0.0, 0.0, 0x1.d6d63c483f7fcp-499, 0x1.08a2f0117b48fp-201,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81a0bacd224e9p-43, 0.0, 0.0,
     0x1.3bb65f2fb6e89p-472, 0x1.f00543969704cp-280, 0.0, 0.0, 0x1.796a7cb3f0efbp-961,
     0x1.785da4a9f9e36p-191, 0x1.a806b25f09e2fp-982, 0x1.edd922fe6d68ep-150, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d73026fb1bd44p-308, 0.0, 0.0, 0.0, 0.0,
     0x1.652005c957a2p-315, 0.0, 0x1.9d86dcdb32bfcp-899, 0x1.5d16e6fa26f42p-587,
     0x1.a20be63dacbb2p-950, 0x1.29795c89b26bap-610, 0x1.347bdd404117ap-810,
     0x1.91a3acbf1be4ap-1011, 0.0, 0.0, 0.0, 0x1.21ee564de6298p-668,
     0x1.278a359c95a84p-491, 0x1.2f8bc5777d03ap-479, 0x1.1936d60c00aap-95, 0.0, 0.0,
     0x1.2c0239e46c461p-827, 0x1.cc0d4b3883effp-736, 0x1.eab60c5487b57p-479,
     0x1.3813d29f66fe3p-958, 0.0, 0.0, 0x1.245694b47d5f7p-199, 0.0, 0.0, 0.0, 0.0,
     0x1.20bed4b3292f5p-301, 0.0, 0.0, 0.0, 0.0, 0x1.f77f2999a5733p-942,
     0x1.5fed58f7ff3e8p-335, 0x1.2f19195df643ep-269, 0.0, 0.0, 0x1.4825f7eb21a08p-404,
     0x1.d8af420f53ca1p-38, 0x1.e0e55a599fe96p-655, 0x1.47e004801c329p-228, 0.0, 0.0,
     0x1.39a5a19ebcabp-304, 0.0, 0x1.9c7463d55bccp-321, 0.0, 0x1.d9133867847b9p-608,
     0.0, 0x1.5d139f865f9cbp-124, 0.0, 0x1.a42ff8506ccaep-285, 0.0, 0.0,
     0x1.6305cc30a50cdp-477, 0.0, 0.0, 0x1.ea93389489fdap-17, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1cba372453d04p-404, 0.0, 0x1.94ff158266c53p-975, 0.0, 0x1.b861badc598e6p-410,
     0.0, 0x1.93dfe3fe236a9p-123, 0x1.362d714f4c87p-11, 0x1.7488a2c9e6063p-554,
     0x1.876d52a89ec2p-622, 0.0, 0.0, 0.0, 0x1.b6dc16d532fadp-912, 0.0, 0.0,
     0x1.dcc661101ee95p-683, 0.0, 0x1.47be1da20cf61p-440, 0.0, 0x1.f5c71be22293dp-493,
     0x1.adaad75dc286dp-748, 0.0, 0x1.9b7cd6234952bp-535, 0x1.18570240a8e9p-113,
     0x1.0ec16e064997fp-560, 0x1.ed53dae7f22efp-560, 0x1.b26e6fd4511f1p-892, 0.0,
     0x1.62e41b1d1c4b5p-130, 0x1.941e2edfe5de7p-858, 0x1.fbcf28695e072p-186,
     0x1.2b03f333a3656p-807, 0.0, 0.0, 0.0, 0.0, 0x1.b3d0a4b6c061bp-781,
     0x1.04a7a89525cf4p-59, 0.0, 0.0, 0.0, 0x1.b8247f807c4cep-166, 0.0, 0.0,
     0x1.af821e7b31baap-318, 0x1.f03b2cadceac3p-413, 0.0, 0x1.730c53102cbbfp-697,
     0x1.d0b7fed1c7e6dp-900, 0.0, 0x1.f4996c43b8d4fp-799, 0.0, 0x1.56116d64c340bp-54,
     0.0, 0.0, 0.0, 0x1.9917e4042a17dp-166, 0x1.92b9ace86ebdp-91,
     0x1.8635913a29b15p-491, 0.0, 0x1.93052946dc5fep-188, 0.0, 0x1.d2da36c071fd5p-250,
     0x1.7d874a99b60afp-488, 0x1.450e601931868p-187, 0.0, 0.0, 0.0, 0.0,
     0x1.59fae6ab91694p-154, 0x1.cc8b87444ce0dp-937, 0x1.313e6f4e704cbp-904, 0.0, 0.0,
     0.0, 0x1.cf719c2951ad3p-935, 0.0, 0x1.a5cf869d753fdp-962, 0.0,
     0x1.705bb76f4f1a8p-620, 0.0, 0.0, 0x1.e0971228e5229p-283, 0.0,
     0x1.b22abb714fd18p-349, 0x1.8ccf0946a1bc4p-675, 0x1.e8b88864473f5p-104,
     0x1.612444a0a2b96p-82, 0x1.df3d1f5855d4ap-329, 0.0, 0x1.5cc9c1b920629p-876,
     0x1.ffdf7eb35328cp-1003, 0.0, 0.0, 0.0, 0.0, 0x1.9811cb4a30dcfp-876, 0.0, 0.0,
     0x1.14e16378a1b1fp-257, 0.0, 0x1.90a09c85c3ff1p-717, 0.0, 0.0,
     0x1.4a4046715e5ebp-970, 0x1.7012962912d9ap-913, 0.0, 0x1.17893fa2cbd5cp-763,
     0x1.c44093171f35dp-571, 0.0, 0x1.9abdfddd4aa2dp-1016, 0x1.5d6b39b3e8c9cp-363,
     0.0, 0.0, 0x1.6247759d83372p-304, 0.0, 0.0, 0x1.88667bc855791p-463, 0.0,
     0x1.cf743ec2f2792p-4, 0.0, 0x1.32c3d7d59eb1ap-906, 0x1.5fc00c45789c7p-983, 0.0,
     0.0, 0x1.1233b24246791p-783, 0x1.f7f94b688f95cp-109, 0x1.f849b44fadc69p-736, 0.0,
     0x1.38a7cc69ad69ap-172, 0.0, 0.0, 0.0, 0x1.e24b86222022dp-841, 0.0,
     0x1.a789e912a106cp-384, 0.0, 0.0, 0x1.180d38217e7a8p-587, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.83856b23f3178p-204, 0x1.4ac74c641fda5p-809, 0x1.e07d3f52f9477p-413, 0.0,
     0.0, 0x1.605614e71e375p-316, 0.0, 0x1.660204d690775p-688, 0x1.e45f5ca067a8p-95,
     0.0, 0.0, 0x1.31e5a870961ccp-36, 0x1.83ffdc8125512p-277, 0x1.2e482330e9027p-112,
     0x1.63f995fbcf4b1p-537, 0x1.3ef79ab8e3901p-790, 0.0, 0x1.62b1fe133e022p-877,
     0x1.1b1267246af71p-914, 0x1.cc772f829111ep-436, 0.0, 0.0, 0x1.0fcd547ee3fep-58,
     0.0, 0x1.c7f4d49f6343dp-443, 0.0, 0x1.23574aba37afap-738, 0x1.e9e56d945af8dp-149,
     0.0, 0.0, 0x1.5b568819186c9p-830, 0x1.796c5fc3ee9e3p-783, 0x1.1b78d30701a53p-370,
     0x1.ea84b4f347ceap-641, 0.0, 0.0, 0.0, 0.0, 0x1.cc36013b9e574p-834,
     0x1.3c834ed1df50fp-939, 0.0, 0x1.6bd8c64d9c737p-444, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.75a92a673c467p-280, 0x1.4499f6cda63bcp-863,
     0x1.3ec8f28977513p-306, 0.0, 0x1.44c41220ed441p-807, 0x1.4e0a234c63637p-988, 0.0,
     0x1.d6634d282946p-924, 0.0, 0x1.bbef13d8d8836p-665, 0x1.8dd16f13d66efp-426,
     0x1.2806b8c86a033p-398, 0x1.3a1b99e75195ep-107, 0x1.e0f32deee141dp-972, 0.0, 0.0,
     0.0, 0.0
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
            tmp1 = Sleef_tand2_u10avx2128(tmp0);
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
    printf("Sleef_tand2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tand2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
