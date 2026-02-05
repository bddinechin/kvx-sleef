/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand2_u35kvx.c --function Sleef_finz_tand2_u35kvx \
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
     0x1.3fda2c28c1457p-847, 0.0, 0x1.c2bc12b01a30bp-445, 0.0, 0.0, 0.0,
     0x1.a992e278e37c1p-137, 0x1.2fb6c1cf5f884p-365, 0.0, 0x1.b9eb153eaff91p-302, 0.0,
     0x1.1fc2a8621fabep-9, 0x1.76d13c1ac1817p-179, 0.0, 0x1.42ffa9258b262p-166,
     0x1.4003f98d38cc6p-718, 0.0, 0x1.93183469eccb5p-13, 0x1.5031304b45d42p-870,
     0x1.3ec163b51bb97p-835, 0x1.6b2fb18ffd2e2p-214, 0x1.07f89e83023a1p-101,
     0x1.0f6362a7898f7p-1016, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf4723ba63f0bp-734,
     0x1.58c01982ac911p-775, 0.0, 0x1.e81fd8ab90b11p-891, 0x1.cffd475d32048p-845,
     0x1.2a6e1f3e8b1bp-837, 0x1.b219cd12188b3p-422, 0.0, 0.0, 0x1.2b55d0985a6a1p-679,
     0.0, 0.0, 0x1.1ab480b8a439dp-482, 0x1.22ab681b75b05p-272, 0x1.5b5575475235ep-286,
     0.0, 0x1.7129db694811cp-946, 0.0, 0.0, 0x1.e15491f84f36p-836,
     0x1.dd12f496b72d1p-543, 0.0, 0x1.d667f6123ea49p-257, 0x1.613e42c0f83b4p-517, 0.0,
     0.0, 0x1.940cd1be5f261p-896, 0.0, 0.0, 0x1.69a109f822075p-920, 0.0, 0.0,
     0x1.a82eea5b0e792p-386, 0x1.c77597cf23abp-4, 0x1.9be9202ed0a53p-895,
     0x1.9c006cf860026p-595, 0x1.159cb5460b0cap-604, 0x1.a48d4d108500dp-102, 0.0, 0.0,
     0.0, 0.0, 0x1.98f75dcd86f0cp-94, 0.0, 0x1.c977cc1baea22p-514, 0.0,
     0x1.b3c2ca40bd3a5p-619, 0x1.befb7306ff073p-932, 0x1.e34af57a7fdb6p-1008,
     0x1.829a0e13c14afp-846, 0x1.df903eca05852p-642, 0x1.7fefc85feedbap-599, 0.0,
     0x1.8dea271a6ba7fp-33, 0x1.166b7f16525p-181, 0.0, 0.0, 0x1.e11b2db3dcb11p-605,
     0.0, 0x1.18f2dc6a7a1cp-407, 0.0, 0.0, 0.0, 0x1.989725f5ed672p-368,
     0x1.d079ecdc4327ap-68, 0x1.3eaca67671536p-635, 0.0, 0x1.4d9ef6823b0b6p-915,
     0x1.698a763a9a81bp-666, 0x1.6d832d293e934p-103, 0.0, 0x1.94faad3c24823p-825, 0.0,
     0x1.0369bcaa9a432p-251, 0x1.75f4437d596bp-677, 0.0, 0.0, 0.0, 0.0,
     0x1.b56e07b8e3a31p-156, 0x1.9806de212e6b3p-942, 0x1.b3fb6acd48e4dp-1011,
     0x1.28b734ca43289p-999, 0.0, 0.0, 0x1.aca5e2cc77703p-76, 0x1.1572b4cda02bap-419,
     0.0, 0x1.260365ef6b1b4p-254, 0x1.8371a838decf7p-346, 0x1.64c6624baf885p-555,
     0x1.9c184c8a1a706p-157, 0x1.53016d115bca5p-857, 0.0, 0.0, 0.0, 0.0,
     0x1.57e2ee5696bbep-338, 0.0, 0.0, 0x1.7f888b1a87a83p-575, 0x1.695acc2a1429cp-294,
     0x1.54d09f33627f5p-748, 0.0, 0x1.a86eaf41f9af6p-718, 0x1.888645dc7caa6p-271,
     0x1.52eb591ca59a4p-709, 0.0, 0.0, 0x1.9122b4d4757cdp-169, 0x1.4e948ab2ed14ep-222,
     0.0, 0.0, 0x1.5a872bea03e48p-864, 0.0, 0x1.3e63546e5253ep-1019, 0.0,
     0x1.2bf6434a28718p-921, 0.0, 0x1.80b490dfa0167p-1019, 0x1.e955bdfdeba5cp-52, 0.0,
     0x1.5984e2c1e7938p-817, 0.0, 0x1.098552221d433p-833, 0.0, 0x1.7098fcde40414p-130,
     0x1.ddc0b614b1ea4p-987, 0.0, 0.0, 0.0, 0.0, 0x1.c6fb6ca7d9557p-321,
     0x1.95f1cb0f6ab29p-998, 0.0, 0x1.4513419c4d51p-387, 0x1.9fc0ca29ff841p-892,
     0x1.fc10389556a9bp-216, 0.0, 0.0, 0.0, 0x1.217559b718758p-145,
     0x1.eefa654bc607p-793, 0x1.6cd9702aa6699p-926, 0.0, 0.0, 0x1.9b98cab86dfa4p-43,
     0.0, 0.0, 0x1.543321055e45dp-990, 0x1.e642711d1c4fap-286, 0x1.c68975581f6eep-565,
     0x1.d08a0c651246p-389, 0.0, 0x1.04a0248a24276p-632, 0x1.e1c7b2c953dcp-600, 0.0,
     0.0, 0.0, 0x1.94050ec8fb9f4p-196, 0x1.d4d5e3b6d6c8cp-870, 0x1.8a41934a57ac5p-487,
     0.0, 0x1.5d80deb00bb0fp-675, 0x1.5d7e09371d5b1p-754, 0.0, 0.0,
     0x1.23d50577beb92p-306, 0.0, 0x1.2cf22c875faeep-814, 0x1.581f2d7572984p-604,
     0x1.5539bf17d6c12p-834, 0x1.b8514f62ec032p-902, 0.0, 0x1.88f9acbec98d1p-337, 0.0,
     0.0, 0.0, 0x1.601d3fe647769p-340, 0x1.64e8fe530cc83p-251, 0x1.9f3937f14aff4p-321,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f0186fb08d81p-62, 0x1.b438a2126d94ep-938,
     0x1.eb5d75a7c7399p-582, 0x1.0260eca7931ap-297, 0x1.d1365d7c0297fp-173, 0.0, 0.0,
     0x1.85a73aec9988dp-696, 0.0, 0.0, 0x1.4ef8c6811a569p-570, 0x1.105143243daeep-196,
     0.0, 0.0, 0x1.8eefa58863839p-918, 0.0, 0x1.6b89e91d6f1abp-732, 0.0, 0.0,
     0x1.eaa12cfa33ea5p-102, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36d82da163262p-16,
     0x1.46bc592faea1ep-887, 0.0, 0x1.4ff687a37807bp-385, 0.0, 0x1.2cc385cdc4e32p-576,
     0x1.a5e8827fd1201p-74, 0.0, 0.0, 0.0, 0.0, 0x1.fc6ddcaa4db39p-527, 0.0, 0.0,
     0x1.1e8a4a448ad38p-755, 0x1.07299e166f6fap-241, 0x1.842f91900178ap-568, 0.0, 0.0,
     0x1.24104ef63806bp-411, 0.0, 0x1.1c741587e434bp-461, 0x1p0,
     0x1.0228522ef0f08p-783, 0x1.7d09c3c2b1d34p-512, 0.0, 0x1.53009dec820dap-9,
     0x1.a69baf3392c16p-172, 0.0, 0x1.ba5a932ff0926p-714, 0.0, 0.0,
     0x1.7e924c77a5839p-883, 0.0, 0x1.9ee7e2ce33ba6p-586, 0x1.fa8d308cecc98p-964,
     0x1.2f0a071eebdf3p-826, 0x1.2242bf7dfa261p-420, 0.0, 0.0, 0x1.9827fc23ba1d3p-595,
     0.0, 0x1.b6eeb166dcf52p-427, 0.0, 0.0, 0.0, 0x1.e127a1711c665p-961, 0.0, 0.0,
     0.0, 0x1.7f62850d4c826p-894, 0x1.4639e47f5a0bep-99, 0.0, 0.0,
     0x1.73ca660a5f8fap-288, 0x1.2cae8763ca2cep-327, 0.0, 0.0, 0x1.8b62c9de50da4p-237,
     0.0, 0x1.4c91f28865f5p-229, 0.0, 0.0, 0x1.c0a1056c8e765p-71,
     0x1.844726c462b6ep-124, 0x1.f960a6ed52128p-205, 0x1.364117bfc4ebbp-270,
     0x1.05e4e297b7beep-395, 0.0, 0.0, 0x1.7a141b9c13b35p-543, 0x1.7659a0e206acep-505,
     0x1.fbbf149e81c7ep-378, 0x1.b455bcef2443ap-796, 0.0, 0.0, 0.0,
     0x1.a9ffdd2b91715p-46, 0x1.e2272f761da7cp-511, 0.0, 0x1.993f7b6e53162p-290, 0.0,
     0x1.d4b4cc9a9819ap-806, 0x1.b8adf0e8de521p-465, 0.0, 0x1.b4b7ea480941ep-554,
     0x1.7f6afc32d3d2ap-164, 0.0, 0.0, 0x1.87b686f97c94bp-582, 0.0,
     0x1.b0fd52458b0f9p-840, 0x1.e23628db108aap-343, 0.0, 0.0, 0x1.845e8ed26dee1p-765,
     0x1.856ee04b574f6p-736, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1494fc16331b2p-451,
     0x1.5e2cee8b898d2p-773, 0x1.04cbe7c5212e2p-828, 0x1.57fb1acafcffep-271, 0.0, 0.0,
     0.0, 0x1.0eaa026a969f3p-971, 0x1.585c5fc094b96p-924, 0.0, 0x1.2761944bf33d8p-245,
     0x1.1fca68a4b0b0fp-365, 0.0, 0x1.ccf0bc25a0328p-175, 0.0, 0x1.a790d232756dcp-166,
     0.0, 0x1.b0cb5fc4e3eddp-156, 0.0, 0.0, 0.0, 0x1.4a1ccb954db4bp-452, 0.0, 0.0,
     0x1.05fcaa498828bp-858, 0x1.96ea5fe1c0096p-889, 0.0, 0x1.324d3cbb0477fp-179, 0.0,
     0.0, 0.0, 0.0, 0x1.7e3111010a448p-913, 0.0, 0.0, 0.0, 0x1.70f1238959765p-102,
     0.0, 0.0, 0.0, 0x1.435521d0d1084p-570, 0.0, 0.0, 0x1.6b841763f7963p-624, 0.0,
     0x1.1dec3a0e1c126p-793, 0x1.ceb17337799b3p-563, 0.0, 0.0, 0x1.fe2333ccbd942p-816,
     0x1.4e200135bf126p-393, 0.0, 0x1.a052d31283397p-442, 0.0, 0.0, 0.0, 0.0,
     0x1.913eb97c5dddap-271, 0x1.400097df0b7cdp-693, 0x1.571be8eb3d606p-746, 0.0, 0.0,
     0x1.15a4661a75ba5p-879, 0x1.2081f1f868651p-729, 0.0, 0.0, 0x1.904711acd430fp-995,
     0x1.fc85a1731124ap-335, 0x1.7cd5da88a426ep-527, 0x1.6d9126e50eecfp-983,
     0x1.abba5db248f7ep-878, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.76da3b719c389p-678, 0.0,
     0.0, 0x1.09cdd328932dp-2, 0x1.38fdeb97b7cf9p-297, 0.0, 0.0, 0.0, 0.0,
     0x1.d72964be8b9ddp-579, 0x1.35f9654c768dbp-630, 0.0, 0.0, 0x1.61db22bc8c94fp-37,
     0x1.e86a1a7f9273dp-644, 0.0, 0.0, 0x1.6607e006b653p-283, 0.0,
     0x1.3024c5e1a0952p-615, 0.0, 0.0, 0.0, 0x1.c9756ef75b2c6p-275, 0.0, 0.0,
     0x1.8b995d91afc86p-773, 0.0, 0.0, 0.0, 0x1.e9036df42ae26p-235, 0.0,
     0x1.ad35276782d3fp-402, 0x1.8ee56fb46bb14p-755, 0.0, 0.0, 0x1.5e520ccb071edp-579,
     0.0, 0.0, 0x1.41d1c52a79b29p-935, 0.0, 0x1.1b57480e4f0bbp-956, 0.0,
     0x1.395daaad5676fp-145, 0x1.f0ca3d281dc9bp-44, 0x1.d0ee1f120a27dp-421,
     0x1.0a720c6700b4dp-470, 0x1.91ee5c1dd5bc1p-797, 0.0, 0x1.a254a2129c544p-149, 0.0,
     0x1.ae7a4d1ca554ep-829, 0.0, 0x1.d43ee8d6bcfa8p-240, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3eef6d9782d9bp-267, 0.0, 0x1.f227d2b007a1bp-765, 0x1.3d48ba78d9838p-518, 0.0,
     0x1.302d611962d29p-864, 0.0, 0.0, 0x1.e7a704f1a2aa6p-132, 0.0,
     0x1.4c0df772bc112p-756, 0.0, 0x1.320e791a5adc6p-298, 0.0, 0x1.6e56dfe5fd701p-589,
     0.0, 0x1.5be33ff56238ep-289, 0x1.a90772707eb66p-922, 0x1.b17dd7e8e0c8bp-891, 0.0,
     0.0, 0.0, 0x1.f7dc1f7c964d8p-573, 0x1.3623f4780f52p-851, 0.0,
     0x1.fbf6f0b256b43p-436, 0.0, 0x1.47eda22ae0f4cp-499, 0x1.c8fa3432078dcp-582,
     0x1.85ca052b29f43p-845, 0.0, 0.0, 0x1.0803256ca770cp-660, 0x1.9435eea9c88a5p-257,
     0x1.8a73bd17b8e1bp-360, 0.0, 0x1.20a5b1eb6d3d7p-1002, 0.0, 0x1.19426df4095b8p-44,
     0.0, 0x1.5d83133e41e25p-525, 0.0, 0x1.1ebce5d6ea228p-979, 0x1.bacea3eae8abp-535,
     0x1.1afcd6c45a567p-562, 0x1.04c7972093dd4p-4, 0x1.cc5ba0d51b49dp-579,
     0x1.9dff1c76d983cp-447, 0.0, 0x1.bce9044b5c33ep-223, 0.0, 0x1.0f867ed308cabp-438,
     0x1.66de8221d51fbp-977, 0.0, 0.0, 0x1.7a426bf782943p-463, 0x1.6026dbdae427cp-211,
     0x1.f3baa41788867p-407, 0.0, 0x1.2ffa9a067f6e9p-643, 0.0, 0.0, 0.0,
     0x1.a97b89a9942f2p-447, 0.0, 0.0, 0x1.c44b407d24e25p-913, 0x1.1a83221a941a7p-839,
     0.0, 0x1.264d08f206583p-36, 0x1.80a8504a29c1ap-213, 0.0, 0x1.98ba69686da32p-912,
     0x1.287817450207cp-128, 0x1.4251b05bd3c18p-30, 0x1.9e61b6955ff4bp-667, 0.0,
     0x1.5ec83d98555c5p-1000, 0.0, 0.0, 0x1.1243453338c6bp-511, 0.0, 0.0,
     0x1.e461556698df7p-544, 0.0, 0.0, 0x1.41481f59b75f3p-947, 0x1.e09848e79f60ap-256,
     0.0, 0x1.2aa3bc7ceffe6p-864, 0x1.4d56692ef154p-521, 0.0, 0.0, 0.0,
     0x1.8bde7914536a4p-288, 0x1.029b964c7ca73p-671, 0x1.6be2706d6a7ffp-709,
     0x1.48f3304656c04p-784, 0x1.72e22278f6958p-5, 0.0, 0x1.d5585737cccc6p-1006, 0.0,
     0x1.ef40ce9139999p-39, 0x1.49957f07c711fp-211, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4235eaf5bcb6p-532, 0.0, 0.0, 0x1.9dc14e56f6789p-105, 0.0,
     0x1.520bec6ed8ab2p-253, 0x1.7b6afb09b4357p-68, 0.0, 0.0, 0.0,
     0x1.1ef4e7d8c06fdp-522, 0.0, 0.0, 0.0, 0.0, 0x1.6c3bc64c8b659p-391,
     0x1.f92cf3fadf1e9p-176, 0.0, 0.0, 0x1.c4e437239dd84p-92, 0x1.a3721c211a3ddp-654,
     0x1.6efe7475fbd29p-833, 0.0, 0x1.ed57ea801a976p-226, 0.0, 0.0, 0.0,
     0x1.60f853fb9f09dp-256, 0x1.cb2c91b319c0cp-245, 0x1.6026f89c90788p-535,
     0x1.1dba1ccba1fbcp-779, 0.0, 0x1.d884ab816cf0ep-277, 0.0, 0.0,
     0x1.fbc3e64b23383p-379, 0.0, 0x1.13391df9b3b16p-201, 0x1.f5713e6581fafp-1012,
     0x1.14363b5b667b5p-793, 0x1.0516cde808422p-342, 0.0, 0x1.494b2e1e26d7fp-873,
     0x1.763b13d8377b2p-946, 0.0, 0x1.5334a7d0e08c8p-287, 0x1.e8ccefe9d29bbp-459, 0.0,
     0x1.d0d08bead63b8p-650, 0.0, 0x1.eecac8d10b2ecp-654, 0.0, 0x1.97c30d556fca6p-768,
     0x1.c1e532c9d7065p-336, 0.0, 0.0, 0.0, 0x1.544336734dd41p-140,
     0x1.5ff8f8b012632p-801, 0x1.d053efe8663d7p-981, 0x1.9fb8255a32984p-13, 0.0,
     0x1.6d0f7e16e7c99p-768, 0.0, 0x1.7600cd7476ac6p-598, 0.0, 0.0,
     0x1.9804d0f7f1fd1p-843, 0x1.515fe5ab0aa52p-17, 0.0, 0x1.a522e2bb6b572p-47,
     0x1.02ce3ab935654p-387, 0.0, 0x1.11fe8c39ae161p-399, 0x1.9ba5b4d9be5p-217,
     0x1.16447aff066b7p-529, 0x1.a68b1ac1e1ee2p-1007, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3867d58b0ab88p-857, 0x1.09f4b4050ac75p-664, 0.0, 0x1.f3b6a37a0bd21p-191, 0.0,
     0x1.e1e260f5ab8b2p-517, 0.0, 0x1.48aa0983c2d2dp-890, 0x1.f6d814a2c0fe3p-89,
     0x1.7314f4c30afc2p-658, 0.0, 0x1.113753ff9c5c4p-431, 0x1.89e71d5cde121p-728, 0.0,
     0x1.f6ba2a129bbe3p-485, 0x1.91bf140bf5426p-423, 0x1.5582d299a4744p-202, 0.0,
     0x1.9f4d9db01eea3p-986, 0x1.8dc32c060a8ep-536, 0.0, 0.0, 0x1.cea697a3e9a38p-622,
     0x1.0ce51f31fb6a7p-672, 0x1.bc9202fab4d74p-388, 0x1.057e9241f4434p-265,
     0x1.9119de061729fp-779, 0.0, 0.0, 0x1.8f9d92d639cd6p-214, 0x1.2d2db80a922abp-134,
     0.0, 0.0, 0x1.6df96ae9560efp-1014, 0.0, 0.0, 0.0, 0x1.9d0182d9a3fa5p-33, 0.0,
     0.0, 0x1.9c612ae66c798p-653, 0x1.b8000df9343f4p-343, 0x1.652b506d459a5p-1022,
     0.0, 0x1.08f54527bc355p-145, 0x1.718ca1bfdc97dp-433, 0.0, 0.0,
     0x1.b5a2e5c5e4e55p-313, 0x1.e19aa6d3c572ep-118, 0.0, 0.0, 0.0, 0.0,
     0x1.b3bdaf155148ap-101, 0x1.cdf47a6824e3bp-806, 0.0, 0.0, 0.0, 0.0,
     0x1.16117b57c1f8p-922, 0.0, 0x1.858dc0a76880dp-540, 0.0, 0x1.3c1ad6bfcfa7ep-845,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28e85b5866e89p-662, 0.0, 0x1.0427c1f6e7fe8p-268,
     0x1.0ab27c63f331p-760, 0x1.1278ccaec59f5p-112, 0x1.92f2db448f431p-458, 0.0, 0.0,
     0x1.89f3e32ae33b8p-93, 0x1.7a6498bf744e5p-974, 0x1.adbba2e273cdbp-605, 0.0, 0.0,
     0x1.d2690a714c8cbp-84, 0.0, 0x1.1ed0fb2a815dap-542, 0x1.735777c74ed1cp-339,
     0x1.fa78fcdcdc4c7p-83, 0.0, 0.0, 0x1.accdd943f39f9p-437, 0x1.506426ff3e569p-283,
     0.0, 0.0, 0.0, 0x1.a3e133420af9p-446, 0x1.f0d20c62a7b0bp-692, 0.0,
     0x1.4c6c982ee7df4p-553, 0x1.e1280777b8c6fp-48, 0x1.acf8eb86d6a68p-657,
     0x1.f88c1f241ab73p-868, 0x1.df161357517dep-999, 0x1.a34832a89d8adp-525, 0.0,
     0x1.c40081575c7cp-947, 0x1.3d7dfed08434p-549, 0x1.30ffbedd097a3p-420, 0.0, 0.0,
     0.0, 0x1.1ae230b61525dp-556, 0x1.57c95c265e2fbp-629, 0x1.88b9ba855eef8p-838,
     0x1.e6d18396ebf7cp-313, 0x1.084376c03c36fp-192, 0x1.bad7efb5c89c6p-144, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.945b6c323bd94p-192, 0.0, 0x1.f59c907519878p-819,
     0x1.e7310d172541ap-71, 0x1.7fa7d47358879p-588, 0.0, 0x1.abc6b43af37b9p-203,
     0x1.5083b8ca29c8p-967, 0.0, 0.0, 0.0, 0x1.b48a7d3fec1c7p-401, 0.0, 0.0, 0.0,
     0x1.a4ab4379fee16p-113, 0.0, 0.0, 0x1.edb057ef63182p-904, 0x1.99ab6b011af2ep-984,
     0.0, 0x1.29463d9577badp-653, 0.0, 0.0, 0.0, 0x1.449cae6027839p-983, 0.0, 0.0,
     0x1.17b1e0265877ep-623, 0.0, 0x1.e0e1d0d4d316bp-459, 0x1.f53445b0b47edp-28,
     0x1.84586050cc41bp-927, 0x1.ba8996ea392a5p-285, 0.0, 0.0, 0.0,
     0x1.4861649c3ef85p-725, 0x1.2894c5cb2aa4ep-193, 0.0, 0x1.044d0987d600ep-208,
     0x1.cdd76bf6598bep-34, 0x1.120d17c04ec15p-647, 0x1.12922e31e0bf5p-390,
     0x1.3f98de5f84cd4p-868, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35051ea5ffe7ep-622, 0x1.b11b217330859p-139, 0.0, 0.0, 0.0, 0.0,
     0x1.e32b276cf632dp-147, 0.0, 0.0, 0x1.1ca98d64e54fep-849, 0.0, 0.0, 0.0, 0.0,
     0x1.bc6eabcccb826p-453, 0x1.c17418825bd4fp-934, 0x1.546ba47ec5de3p-110, 0.0,
     0x1.a3c4ad7050f6ep-771, 0.0, 0x1.8303272b8854ap-629, 0.0, 0x1.bef33a7276498p-640,
     0x1.9b10686520297p-539, 0.0, 0.0, 0x1.ab466f21b22d9p-301, 0x1.7a1dd1997bbfbp-660,
     0.0, 0.0, 0x1.b424476bd085p-988, 0.0, 0x1.a2bdb73b78a4dp-782,
     0x1.123176e7bf48bp-275, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36758a5f95b1dp-981,
     0x1.0689943ed0337p-622, 0.0, 0x1.68661d9e72968p-524, 0x1.2f6d3e13e9107p-157,
     0x1.e2de7fc8ed0f7p-917, 0x1.b777f2c8b4b67p-559, 0.0, 0.0, 0.0,
     0x1.4075af6cb96adp-554, 0x1.e52f4b32586ddp-14, 0.0, 0x1.cbe6dae029fcp-903, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0bace0d6f1d9bp-138, 0x1.79bde14ec8cc4p-656,
     0.0, 0x1.c5a316fe7085ep-878, 0.0, 0x1.ad89753fcf36ep-976, 0x1.1d985e1bcb4f1p-232,
     0.0, 0.0, 0x1.80f29947e9172p-58, 0x1.d618f26d72829p-602, 0x1.cf0b74f577a1bp-60,
     0x1.caeb58260b688p-357, 0.0, 0.0, 0.0, 0x1.4a561e45523fep-1013, 0.0, 0.0, 0.0,
     0.0, 0x1.9b23d8a8bcc1ap-974, 0.0, 0.0, 0.0, 0.0, 0x1.ff64bbe95ae2ep-74,
     0x1.52b7285975c63p-539, 0x1.3f518a6098142p-215, 0x1.9213d9b7082c4p-578, 0.0, 0.0,
     0.0, 0.0, 0x1.4300202b99cc3p-158, 0.0, 0x1.c69b599cabb31p-94,
     0x1.79e400567b03dp-974, 0.0, 0.0, 0.0, 0.0, 0x1.6a5be5c6ef3c2p-150, 0.0, 0.0,
     0.0, 0x1.919a24e2b1004p-974, 0x1.2b7f389be31f1p-4, 0.0, 0.0, 0.0,
     0x1.1c6ddd5447a89p-60, 0x1.794bfba30bd3fp-187, 0.0, 0.0, 0x1.873c201675718p-302,
     0x1.c55957fc9cc2cp-157, 0.0, 0x1.086dd5c2ee6dbp-410, 0x1.ca4918032914ep-954,
     0x1.9461cf1b96ac9p-453, 0.0, 0x1.ca7cba5e54bdfp-605, 0x1.163db4ecf1a12p-689,
     0x1.3dcd099407a3dp-232, 0.0, 0.0, 0x1.05db1615c29dp-751, 0x1.e9f8f5139711fp-178,
     0.0, 0x1.3cd54da10ffedp-529, 0.0, 0x1.2a03328702b25p-877, 0.0,
     0x1.7a8a6e1f5766fp-753, 0x1.8a1a9476fac86p-933, 0.0, 0.0, 0x1.4568937fe521ap-152,
     0x1.7d8d2fe0a2d42p-714, 0.0, 0.0, 0x1.5efefd56c47ep-711, 0x1.57ff3e5523aa3p-899,
     0x1.9eca72ce1f766p-635, 0.0, 0x1.b0cd0a8f790e9p-90, 0x1.2504a82f9e3bdp-810, 0.0,
     0x1.f8ecbc8514da3p-593, 0.0, 0.0, 0x1.18d8dd647c584p-118, 0.0,
     0x1.bf71ab8ff3afp-636, 0x1.dcdd4f8a46555p-773, 0x1.5a052b0e2af21p-616
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
            tmp1 = Sleef_finz_tand2_u35kvx(tmp0);
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
    printf("Sleef_finz_tand2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tand2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
