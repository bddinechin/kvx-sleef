/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd4_u35kvx.c --function Sleef_cbrtd4_u35kvx \
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
     0x1.6208bdec25466p-358, 0.0, 0.0, 0.0, 0.0, 0x1.f5a6d55e5b0a4p-533,
     0x1.991d016faf0b9p-1020, 0x1.37b1aa24ab151p-58, 0.0, 0.0, 0.0, 0.0,
     0x1.ee8ad36c816bcp-715, 0.0, 0.0, 0x1.03794ad06261dp-820, 0.0,
     0x1.e92c3162dadbbp-935, 0.0, 0x1.7ba2fa9739ceep-496, 0.0, 0x1.73f4b37b0df52p-216,
     0x1.b1fcebe603828p-901, 0x1.e8be2338e2fcdp-128, 0.0, 0.0, 0.0,
     0x1.da3f6a05c2eep-335, 0.0, 0x1.8542548e17578p-114, 0.0, 0.0,
     0x1.e3e5686c5e34ap-721, 0x1.23577f25a5b59p-402, 0.0, 0x1.81316c403c57fp-808,
     0x1.f6677031aa22p-698, 0.0, 0x1.0370f6f836223p-913, 0x1.3ad61e28334dfp-319, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.429a909422bfbp-681, 0.0, 0x1.1cc502b40845bp-629, 0.0,
     0x1.2cccdfa1f38bap-1011, 0x1.a5fc7c5988366p-699, 0.0, 0.0, 0.0,
     0x1.88f95080180adp-350, 0x1.2b75fcdca8fc9p-727, 0.0, 0x1.0856e2e9eaf44p-879,
     0x1.f7a732c6462cp-274, 0x1.fc1d7536daadbp-738, 0x1.a69fc75f64354p-197,
     0x1.b7303b33a49bbp-337, 0x1.4e98803867272p-347, 0.0, 0x1.92de0dc23488cp-837,
     0x1.33a6c3cd3068p-516, 0x1.38887e7bfe5d8p-588, 0.0, 0.0, 0x1.70728b33d1b22p-668,
     0.0, 0.0, 0.0, 0x1.5fbf573065192p-704, 0.0, 0.0, 0x1.0533851c46528p-171, 0.0,
     0x1.92ddd0e09f99cp-574, 0x1.29ebefadb9592p-186, 0.0, 0x1.fe704a9114c7dp-452, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1651aee6801f8p-260, 0x1.785b6d9323a63p-342, 0.0,
     0x1.4c2dee6a53d1p-1005, 0.0, 0x1.e4539f8f19a49p-540, 0x1.c6d85d9f7dbc5p-1009,
     0x1.3b41e11f73485p-406, 0x1.21f30f6b4712ap-761, 0.0, 0x1.52f4e93433b2ap-215,
     0x1.da368f6b27689p-382, 0x1.9998623c6f9eep-339, 0x1.a95e8ed44add1p-660, 0.0, 0.0,
     0x1.ba7e4d6c8f361p-51, 0.0, 0x1.f413676d8b872p-911, 0x1.6f3d2367a7d52p-521,
     0x1.3eaea4a91709ap-702, 0x1.79fbe0a86498ep-871, 0x1.53696b8c12a3ap-111, 0.0,
     0x1.7f40f25bba3cap-255, 0.0, 0.0, 0x1.807f51b43aef5p-972, 0x1.7488eb6f9c1cp-769,
     0x1.e505bae1781c3p-825, 0x1.c76bc12c2d0a6p-198, 0.0, 0.0, 0x1.8c49bf8b018fep-644,
     0x1.64f2fa133162ap-582, 0.0, 0x1.f6248f2d0efa1p-6, 0.0, 0.0,
     0x1.5d8c01ebf9679p-628, 0.0, 0.0, 0x1.faa87523ea01dp-292, 0.0, 0.0,
     0x1.1e94ea0cdd2edp-96, 0.0, 0.0, 0.0, 0.0, 0x1.074d74ae5c6cdp-342, 0.0,
     0x1.1196b4f253631p-820, 0.0, 0.0, 0.0, 0x1.f29afd8194614p-441,
     0x1.7b5ea0f8fe43p-250, 0.0, 0.0, 0.0, 0x1.91813f52a6765p-989, 0.0,
     0x1.ad24f8b4d4bfep-712, 0.0, 0.0, 0x1.0d35623dfe088p-219, 0x1.64e858f8dee9cp-957,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dea803d87b46cp-336, 0.0, 0.0, 0.0, 0.0,
     0x1.079f9ab44c1c2p-311, 0.0, 0x1.9c794e5c9e476p-905, 0x1.0de3123c5d457p-438, 0.0,
     0x1.bc76931a46aaep-919, 0x1.79c680655b64ep-742, 0.0, 0x1.267b8ca0594d2p-692,
     0x1.065920734e63fp-154, 0x1.7bee8c94bdc85p-753, 0.0, 0x1.ec20117d24ee4p-269,
     0x1.48bbf1045b16dp-310, 0.0, 0x1.134a846f67637p-900, 0.0, 0.0,
     0x1.ed29f82a7e1b9p-441, 0x1.b0b940715a6dp-776, 0x1.8aa594ae232a9p-336, 0.0,
     0x1.6fcb8958588f4p-101, 0x1.5cdc4e2165a14p-272, 0x1.bedc28219fa13p-340,
     0x1.e955e789a8289p-854, 0x1.2623f8c58c5f1p-481, 0.0, 0.0, 0x1.bc905e4c2a30cp-952,
     0.0, 0.0, 0x1.c54877988e4dbp-571, 0.0, 0.0, 0.0, 0x1.96bdc92aeaacp-494,
     0x1.55c7cb07e68bep-247, 0.0, 0.0, 0x1.d75ab85526cb9p-428, 0x1.c0110d8e19113p-191,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.619b13622b72fp-456, 0.0,
     0x1.52eb9a3cb18b1p-302, 0.0, 0.0, 0x1.5a15ad29612ddp-772, 0.0, 0.0, 0.0,
     0x1.8ddb3fbe93d84p-56, 0x1.873e2381de484p-637, 0x1.089b46e0443b5p-182,
     0x1.e5d98384ab048p-479, 0.0, 0.0, 0x1.94686cb9ab879p-251, 0x1.12ee12e3880fep-656,
     0.0, 0x1.f78859c8e5b5ep-262, 0.0, 0.0, 0.0, 0x1.5d13ab2c092c9p-737, 0.0,
     0x1.a0616a8e67714p-263, 0x1.a34b4de183c38p-566, 0.0, 0x1.6b1525708eabbp-859,
     0x1.7b7757e4007bcp-19, 0x1.a744edd7c8422p-11, 0x1.668b9cff024dfp-977, 0.0,
     0x1.406287f3c71cdp-764, 0x1.2bb201becdefp-179, 0.0, 0.0, 0.0,
     0x1.5af8d90c39e97p-423, 0x1.a88cacb1c32d5p-572, 0.0, 0x1.32ea5f7401e4ep-919, 0.0,
     0.0, 0.0, 0x1.dd18a7051d947p-509, 0.0, 0x1.e4a45f06ede82p-803,
     0x1.424c87b798b4bp-686, 0.0, 0x1.2c906596ff0dbp-339, 0.0, 0.0,
     0x1.46c2b525acce8p-818, 0x1.022f0a06dd425p-695, 0x1.20ef66e63e0c8p-685,
     0x1.dcda1ffd6a1bdp-835, 0x1.c202e21fbf75ap-552, 0x1.22ccbd9bd8c7dp-831,
     0x1.37b5745910545p-518, 0x1.81986e588b746p-969, 0x1.56f78204aa551p-933, 0.0,
     0x1.fbbc58ad9f416p-32, 0.0, 0.0, 0.0, 0x1.3cbcded2faa16p-692,
     0x1.94fc31d30f748p-866, 0.0, 0.0, 0.0, 0x1.25265ce85b67bp-444, 0.0,
     0x1.658c8581f861fp-281, 0x1.89451ee6d360fp-673, 0.0, 0x1.d34b9c1e6ec44p-35, 0.0,
     0x1.db908342a3498p-806, 0x1.48470eee29465p-68, 0.0, 0x1.1d44f313b5ce8p-135,
     0x1.9d43e8497544bp-731, 0.0, 0x1.d1d50c6bab38ap-176, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.43435fd96c1bcp-46, 0.0, 0x1.eb898d0fede1ap-798,
     0x1.8e3b52d9f1871p-893, 0x1.940c652b599p-814, 0x1.b9e74525da7bfp-236,
     0x1.ac134223bafd4p-1020, 0x1.cee42f079777p-510, 0x1.5a9e6eba67a95p-784, 0.0,
     0x1.d0ceaa7953cd8p-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a4108145c72e3p-293, 0.0, 0.0, 0x1.8aab34d003693p-526, 0.0,
     0x1.981f2e3c9db9bp-581, 0.0, 0.0, 0x1.e3fb7b1170659p-127, 0.0,
     0x1.19d327ae47442p-917, 0x1.553efedfce2ep-11, 0x1.c4595e13c49c1p-872,
     0x1.bc9d6747f443ep-63, 0.0, 0x1.8ed47f00a79a7p-451, 0.0, 0x1.81cd3f2586e82p-797,
     0x1.67b7b3eecca5fp-370, 0x1.b9545fe6bac44p-42, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4715a14db2067p-625, 0x1.076956405ba8ep-374, 0.0, 0.0, 0x1.cd0dd78625222p-796,
     0.0, 0x1.07844ead785ap-889, 0x1.21984bcb94dfp-485, 0x1.1675064973431p-734, 0.0,
     0x1.41a760858a2f9p-367, 0x1.3a55d5090e015p-196, 0x1.b04d0ae2f7ac5p-829,
     0x1.76e311d8ce1c3p-88, 0x1.415493c0592e6p-835, 0.0, 0.0, 0x1.941ada688dc6dp-398,
     0x1.46aeffafb1162p-119, 0.0, 0x1.3938ef8c5258cp-185, 0.0, 0x1.b077d2b0595aap-956,
     0.0, 0x1.1f9f3282d5791p-110, 0.0, 0.0, 0x1.ee72864a77acdp-167,
     0x1.7d9c863ca2bf9p-157, 0x1.e106bef33fe53p-395, 0x1.3cbff7cca2be9p-625, 0.0,
     0x1.9ff0524a090eep-582, 0x1.35e626c53c7f5p-242, 0x1.fb3e898ea1809p-908,
     0x1.8ad776e91bb06p-650, 0.0, 0.0, 0x1.6e8edfe2cc8a3p-81, 0x1.99fcc060f37f1p-326,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.618957bbdfc84p-892, 0.0, 0.0,
     0x1.43bcb574ead53p-996, 0x1.b1cd831bbee8bp-36, 0.0, 0x1.1f0def964668cp-603, 0.0,
     0.0, 0.0, 0.0, 0x1.baaebc085cc6ep-952, 0.0, 0x1.37f3701dfdc2ap-965,
     0x1.7dffab036b025p-322, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c48ac2ae16bp-466, 0.0, 0x1.8e68fa0ad78d1p-628, 0x1.a8dd0fa4ee296p-363,
     0x1.d2210a3474e8fp-562, 0.0, 0.0, 0x1.8314d0dc200a1p-718, 0.0,
     0x1.1732710ea3a64p-512, 0x1.037ee7fa0bf3p-40, 0x1.f4353d3fa835cp-24, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.84bcb0a59a8c9p-14, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b11aca07abc3p-920, 0x1.ba291152c62ebp-1018, 0.0, 0x1.bcc6c09eb3e4bp-257, 0.0,
     0.0, 0.0, 0x1.8bda7393509bp-90, 0.0, 0x1.1ee4881a30be8p-250, 0.0,
     0x1.1f09de14a5e9ap-437, 0x1.f479ee2a78c99p-435, 0.0, 0x1.c50853f76d389p-599,
     0x1.9375327492a3cp-949, 0.0, 0.0, 0x1.e4c0c10b90f0dp-225, 0.0, 0.0,
     0x1.fd9877254a9fcp-840, 0.0, 0.0, 0.0, 0.0, 0x1.dbd93a16abdbep-248, 0.0,
     0x1.bdd34b60ef72ep-464, 0x1.e1ca09cc90d62p-752, 0x1.465c490dfe86ep-702, 0.0,
     0x1.0f13765cfa2bp-647, 0.0, 0x1.e5feab4f892bap-114, 0x1p0, 0.0,
     0x1.b8312ebe36729p-872, 0.0, 0x1.b3381881125b7p-643, 0x1.c4b7571a9d628p-107, 0.0,
     0x1.9f4573d263e41p-403, 0.0, 0.0, 0.0, 0x1.316e6a03143aap-694,
     0x1.004accedb3ca6p-780, 0x1.501175bf9295fp-730, 0.0, 0x1.e8e57e6f946c4p-14,
     0x1.1c4396953fe1ap-811, 0.0, 0x1.c5f4088b2196ep-675, 0.0, 0.0, 0.0,
     0x1.5321ec25d4324p-659, 0x1.96da8153a45a2p-811, 0.0, 0.0, 0.0,
     0x1.1797466aea701p-110, 0.0, 0x1.96d4ac4427e5bp-456, 0.0, 0.0,
     0x1.cce4dcfa54334p-229, 0x1.6dd98184c55e7p-656, 0x1.38de30566393fp-55,
     0x1.26ccd69c87348p-479, 0.0, 0x1.c86a5685acf3fp-550, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70a9506d344f1p-943, 0x1.1a4336660bf1bp-905, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5697c49dd9b6p-874, 0.0, 0x1.6984897d05f39p-598, 0.0, 0x1.6f2dc9a905761p-53,
     0.0, 0x1.dd3f9dd8e88dap-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7505bfedb74abp-1000,
     0x1.c0f1165004da4p-375, 0.0, 0.0, 0.0, 0x1.9a442f5f952ffp-836, 0.0,
     0x1.114f802ca72abp-615, 0.0, 0.0, 0.0, 0.0, 0x1.ef25ac806a463p-700, 0.0,
     0x1.c63a2a695769dp-629, 0.0, 0.0, 0x1.975d147934ba9p-313, 0.0,
     0x1.af8c0199f33e1p-1015, 0x1.f01c043f97774p-761, 0x1.1cd806819b493p-6, 0.0, 0.0,
     0x1.090cecd127accp-60, 0x1.aec45ecb4344ap-562, 0x1.68e16e367b0b5p-853,
     0x1.c860406707dffp-802, 0x1.2aa51788d11fdp-712, 0x1.2af1a88da39fbp-683,
     0x1.c38906749b88bp-998, 0x1.292bf80a3a8a9p-628, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f552417e51387p-369, 0.0, 0.0, 0x1.0669df1159ee4p-336, 0.0, 0.0,
     0.0, 0.0, 0x1.db6fe736428dp-769, 0x1.7c5acbbfa4625p-877, 0x1.83f8cd8b3c624p-452,
     0x1.4974520666138p-597, 0x1.220c218cd211p-553, 0.0, 0.0, 0.0, 0.0,
     0x1.009ea43fb44ccp-694, 0x1.76ffddf5ddbbep-20, 0.0, 0x1.f5e23c4fda25p-9,
     0x1.7ba6c9cf0d46bp-283, 0x1.a287aad0407e6p-316, 0.0, 0x1.bb7985a8927abp-351,
     0x1.ab713d3d1a2bap-901, 0.0, 0x1.22d5d2a7c5351p-673, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.da00caa9516f8p-268, 0.0, 0.0, 0x1.02ead0c08a173p-804,
     0x1.1b69a63e3b6a8p-782, 0.0, 0x1.337ba6fbae5b7p-801, 0.0, 0.0,
     0x1.bac355ddfaecbp-639, 0.0, 0.0, 0x1.57f82e8857d91p-341, 0.0,
     0x1.7cb94ac4e1f94p-320, 0x1.76cc0f19d1717p-30, 0.0, 0x1.1b371226bc275p-381, 0.0,
     0.0, 0x1.745365cff61efp-85, 0x1.0b4636581ff22p-254, 0x1.64d436a11557p-449, 0.0,
     0x1.64289b4221487p-354, 0.0, 0x1.5299b931cac4ep-141, 0x1.c40fd7baa805ap-606,
     0x1.1f6f519500993p-255, 0x1.152b3a6eb03fdp-677, 0x1.80ec8d2ae1d59p-801,
     0x1.13c2b0e90db68p-490, 0.0, 0x1.d4a43aac46da9p-457, 0.0, 0x1.3ee3ae8606ddep-595,
     0.0, 0.0, 0x1.7b74f7590cb88p-435, 0.0, 0.0, 0x1.2085c1be87dp-597, 0.0, 0.0,
     0x1.e666625f5adfbp-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d847c49f61f0bp-650, 0x1.5f489914c68a4p-394, 0.0, 0x1.8c67aae73cd59p-170,
     0x1.f9c0420dc1e9dp-870, 0.0, 0.0, 0x1.16b053e15a9d6p-628, 0x1.c62888c8da609p-149,
     0x1.08093c4dfbfb8p-377, 0x1.ee41e9d5231dep-882, 0x1.7c795e470e86bp-40, 0.0, 0.0,
     0x1.2831d65923b2p-873, 0x1.a8b558adb6e7ep-948, 0.0, 0.0, 0x1.f348be607e66dp-644,
     0.0, 0x1.b0337d7eceb6bp-658, 0x1.4c6618610cb41p-730, 0x1.ccd8fb65784b9p-317,
     0x1.31cc3d10f1155p-875, 0x1.4f296f3a72467p-58, 0x1.0511a646a14fap-387,
     0x1.05dcc1a90a328p-515, 0.0, 0x1.bc63a9120e35p-130, 0x1.65bb8fe28888ep-146,
     0x1.88319f3d4077ep-178, 0x1.4cf870c99cc74p-281, 0x1.26b327a55ad45p-684, 0.0, 0.0,
     0x1.1db6e6e11e034p-748, 0.0, 0x1.73bcc20df81ebp-590, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3748e7d631f33p-5, 0.0, 0.0, 0.0, 0x1.f3884a9f10753p-828,
     0x1.0a5d65f48fb5p-562, 0.0, 0x1.8e6eda23dd2b6p-139, 0x1.5eece232df43ap-113, 0.0,
     0.0, 0x1.74e2908c62d61p-214, 0x1.6d545a712f003p-813, 0x1.a008a452f87f9p-9,
     0x1.982dc7fc76e44p-184, 0x1.0a61a0876ca57p-850, 0x1.a5697126963b3p-320, 0.0, 0.0,
     0.0, 0.0, 0x1.70d6f6af868b2p-871, 0x1.ed580decce994p-112, 0.0,
     0x1.797affef06aecp-713, 0.0, 0.0, 0x1.424c406af6608p-334, 0x1.68f1b3eae8c92p-486,
     0.0, 0x1.edd396d755309p-303, 0x1.4c6e5f80c073p-774, 0.0, 0.0,
     0x1.05be7d69d648fp-321, 0x1.6db2cf5ca32a5p-105, 0.0, 0.0, 0x1.83fcee9bd59fcp-764,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3c56c96f07583p-340, 0.0, 0x1.17465b502029fp-693,
     0x1.453242cd40584p-1015, 0.0, 0x1.f5af07e463a03p-716, 0x1.1e849ad4b3e96p-574,
     0x1.f46584d75eceap-392, 0.0, 0x1.f8927882d4226p-927, 0.0, 0x1.8febe49ce90b4p-73,
     0x1.29134adb8e3e3p-578, 0x1.1f6370595d445p-332, 0.0, 0.0,
     0x1.4d7afd26f6638p-1021, 0.0, 0x1.aab1b8981eb6ep-157, 0x1.324f6906d2764p-596,
     0x1.c0b38d18be02fp-254, 0x1.cc1041ad1dcd2p-679, 0.0, 0x1.bf9b0eff0af8ap-284,
     0x1.9b7858a57e5f1p-758, 0.0, 0.0, 0x1.41d3dd986c18p-598, 0.0,
     0x1.d9d4eb3eec239p-541, 0x1.5b01b9ecafa8dp-941, 0x1.e013f2465bb6ap-396,
     0x1.8193794e7be96p-511, 0x1.dd916263d2144p-625, 0.0, 0x1.5390f4215344cp-765,
     0x1.dff738a2bd871p-643, 0x1.f60cfb975c853p-968, 0x1.39bb9f7c0b42cp-562,
     0x1.bb59a111effa9p-392, 0x1.b519e40d1a2a7p-775, 0.0, 0.0, 0x1.abd9f441aaaa5p-130,
     0x1.bc463b2e7305dp-644, 0x1.c67cfd8062dcbp-76, 0x1.f4fcd15d0f26p-801,
     0x1.cd6b641674edp-784, 0.0, 0.0, 0x1.42b955cb2c5f8p-405, 0.0,
     0x1.780bab00d7329p-46, 0.0, 0.0, 0x1.7e7b95a9f83bep-422, 0x1.fd57713a51bf9p-184,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aad1f95924bc4p-172, 0.0, 0x1.303dba658adacp-955,
     0x1.df9cbb0a2bef6p-356, 0.0, 0x1.6658a36123c6bp-548, 0.0, 0x1.a981660021e62p-7,
     0.0, 0.0, 0x1.865111e8d3901p-369, 0x1.9fc98d8987a05p-233, 0x1.c09c3c507338p-772,
     0x1.6be9a935f99a7p-752, 0x1.8b6ad89ac5541p-384, 0.0, 0x1.216d19e4f4ddcp-601, 0.0,
     0.0, 0x1.143efee77ab63p-528, 0.0, 0x1.eaab1c6ed0d2dp-775, 0x1.492d61ee5c814p-637,
     0.0, 0.0, 0.0, 0x1.812eb01dd7fafp-132, 0.0, 0x1.b73dc55ace61p-645, 0.0,
     0x1.c328d597d32a7p-822, 0x1.3ba42830f6c09p-270, 0x1.204cd9f1b636bp-529, 0.0,
     0x1.6cdc32577775cp-603, 0.0, 0x1.22fd15940a3c8p-20, 0x1.d44e3c07fea16p-807,
     0x1.abfabca21eb72p-169, 0.0, 0x1.d401af351592fp-365, 0x1.0c1933fa3d2e1p-135, 0.0,
     0.0, 0x1.ddc23259f47b1p-998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3eb62a5c25f7ap-800, 0x1.7b03d4e1923a3p-370, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.66fd26371d1bbp-1016, 0.0, 0x1.d38fc3ba0cb8ap-79, 0x1.fb72a2259dafep-258,
     0x1.ae504a82617ffp-807, 0x1.118e0f8c411c2p-624, 0x1.36e9b9a855964p-339,
     0x1.8187cab757b61p-381, 0x1.852003a83ef86p-254, 0.0, 0x1.77a56e2f549dbp-294, 0.0,
     0x1.d5b67314b4018p-993, 0.0, 0x1.410d709a8b7ccp-658, 0x1.bad61351c5de5p-985, 0.0,
     0x1.5f20d80d89245p-543, 0x1.bd03a4957a3acp-478, 0.0, 0x1.f9938df0b1b11p-270, 0.0,
     0x1.3f7e6f990ce14p-737, 0.0, 0.0, 0x1.3a150610c0c99p-726, 0.0, 0.0,
     0x1.64aa72d393da6p-431, 0x1.b04f45240f451p-737, 0x1.b6e3cf129ce34p-260,
     0x1.17f83e1d8115bp-157, 0x1.b560a47dd4d01p-282, 0x1.bbfca3458fa63p-151, 0.0,
     0x1.f158a9862ae47p-592, 0x1.f6d13bed12c0cp-144, 0.0, 0.0, 0.0,
     0x1.44530478159bp-551, 0x1.02f8fdfd0e455p-915, 0x1.62a6f1825fc84p-414,
     0x1.7f9aa750c6f55p-503, 0.0, 0.0, 0.0, 0.0, 0x1.6d6bcbf965579p-735,
     0x1.9bcbf56a12a56p-347, 0.0, 0x1.7eca20a7ff5ddp-826, 0.0, 0.0,
     0x1.ca46aba9b8dadp-636, 0x1.71b3cd24d5155p-12, 0.0, 0.0, 0.0,
     0x1.faf1e457a00f1p-630, 0.0, 0x1.48e616e7d8e9bp-455, 0.0, 0x1.291474cfab8a5p-393,
     0.0, 0x1.f46b10435f2f2p-709, 0x1.8d99407a0c8a5p-340, 0x1.1c0ec6ff4877p-43, 0.0,
     0.0, 0x1.112c1cf67af39p-5, 0x1.31faa00fc0757p-484, 0.0, 0x1.0a906be78a06bp-634,
     0.0, 0x1.c11b491c76504p-522, 0x1.c5ac9e4f0dabbp-315, 0.0, 0x1.c12ac89aa1995p-120,
     0.0, 0.0, 0x1.55c435986a5fbp-375, 0x1.860fd2f6e396cp-767, 0.0,
     0x1.364d18367dff8p-132, 0x1.a4e525360a97p-154, 0x1.33ae26a4ee292p-801, 0.0,
     0x1.b43398b834b26p-308, 0x1.410653be83df4p-647, 0.0, 0x1.654a97abd4c39p-341, 0.0,
     0.0, 0.0, 0x1.3cba86a840097p-124, 0x1.defdbaac43352p-559, 0.0, 0.0, 0.0,
     0x1.40c3a0eba3b32p-96, 0.0, 0x1.12a40ed49b7bp-659, 0.0, 0x1.94ecd6101c3b3p-115,
     0.0, 0.0, 0x1.8fcc7629f1fcdp-991, 0x1.64e4d009d0c54p-782, 0.0,
     0x1.f3098e5bd24f9p-148, 0x1.41ea83ef1114bp-831, 0.0, 0x1.be61d0a0bdcbep-489, 0.0,
     0x1.33b683f69fc87p-733, 0.0, 0.0, 0x1.c170fdfb75416p-187, 0x1.868b1e154c4eap-766
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
            tmp1 = Sleef_cbrtd4_u35kvx(tmp0);
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
    printf("Sleef_cbrtd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cbrtd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
