/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid1_u05purecfma.c --function \
 *     Sleef_sincospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.b65bc569b40d5p-197, 0.0, 0.0, 0x1.c545baac429c5p-676,
     0x1.4cddc23bc9305p-912, 0.0, 0.0, 0.0, 0.0, 0x1.1e8023967dbd1p-95,
     0x1.bf8e9a967e1f4p-817, 0.0, 0x1.c865e86f8102fp-182, 0.0, 0.0, 0.0, 0.0,
     0x1.6aeaeb93171bap-705, 0.0, 0.0, 0.0, 0.0, 0x1.ab80fcff877f1p-499, 0.0, 0.0,
     0x1.114da2a7bc014p-530, 0x1.183bb05adc75bp-158, 0.0, 0x1.1498ca35b650ep-913,
     0x1.281aae60e007p-184, 0.0, 0.0, 0x1.39a07abb53784p-656, 0.0,
     0x1.5e55093dbc0ap-352, 0x1.8616855f63935p-400, 0.0, 0x1.c45b2deabea2cp-381,
     0x1.0d490152f0939p-871, 0x1.2df9e9b8a5e3bp-757, 0.0, 0.0, 0.0, 0.0,
     0x1.4155122b49712p-97, 0.0, 0x1.76787c5a9b52bp-112, 0.0, 0.0, 0.0,
     0x1.bf71ffdb94df6p-972, 0x1.4c48db5dbcb3bp-114, 0x1.d35dfe6eb5388p-51, 0.0, 0.0,
     0x1.11599d6216ccfp-79, 0.0, 0x1.d5c2ccd9e7b2cp-476, 0.0, 0.0,
     0x1.c12eb95b38e69p-188, 0.0, 0.0, 0x1.4bb14ddc4f596p-795, 0.0,
     0x1.26d607a164471p-650, 0x1.24393ebe5bb19p-872, 0.0, 0x1.875e0645dac4ap-328, 0.0,
     0x1.cbe164aca8541p-285, 0.0, 0x1.775050ebd8d3ap-223, 0.0, 0.0, 0.0,
     0x1.5cde192b6198p-315, 0.0, 0x1.13cfadc86b431p-53, 0.0, 0.0,
     0x1.44b46f987784cp-318, 0x1.feb601ebbc78fp-208, 0.0, 0.0, 0x1.d3013122879a9p-244,
     0.0, 0x1.dfd7e3f28e05ep-924, 0x1.f968f965bafcp-357, 0x1.9839e660371b5p-221, 0.0,
     0.0, 0x1.f85abf2c3586cp-954, 0x1.ac5b379b263e2p-249, 0.0, 0.0,
     0x1.77ed766050202p-134, 0.0, 0x1.7ad45ef7aa4dfp-371, 0x1.f7a1edb17a6e7p-672,
     0x1.2b22a5eb50f34p-642, 0x1.1e67d16dd5e72p-830, 0.0, 0x1.23c46cab3539dp-909, 0.0,
     0x1.a6552aa074367p-412, 0x1.318491232366dp-876, 0x1.69f3db8012d8ap-615,
     0x1.63bf962c09247p-843, 0x1.7cf878bbd350fp-597, 0.0, 0x1.c9f5ef1799e77p-853,
     0x1.ee50cfd02c7ap-370, 0.0, 0.0, 0x1.730f5d2b8e6d9p-513, 0x1.35e5bf2adc202p-67,
     0.0, 0x1.f1529d6033544p-697, 0.0, 0.0, 0x1.18b90bd3b5c6ap-543,
     0x1.0dc85a872b152p-485, 0x1.989617f9b80d4p-237, 0x1.49f5b44f4fea2p-753, 0.0,
     0x1.bf6a949c23d71p-841, 0x1.91aec1cc1a911p-259, 0x1.7606e35d0bc52p-595,
     0x1.23dc62dd5e0bep-564, 0x1.411c5749f0ddfp-948, 0x1.0cec618c683d9p-92,
     0x1.7b94d7d42cc06p-634, 0x1.496b53fe39c13p-176, 0.0, 0.0, 0x1.a717f2ef9f18dp-86,
     0.0, 0x1.59267cb8542edp-520, 0x1.98ecd6860cc54p-657, 0x1.cd61e550ff12bp-969, 0.0,
     0.0, 0x1.2d2ede618372ep-69, 0x1.04a63e10543abp-187, 0.0, 0.0, 0.0,
     0x1.52d248a058fcp-182, 0.0, 0.0, 0x1.b2a32ab807b35p-978, 0x1.2f9479e2e5d76p-255,
     0.0, 0.0, 0x1.e324265d05244p-192, 0x1.4fa531c66dd3fp-44, 0x1.983a1369dc5bbp-561,
     0x1.08478c5196658p-704, 0.0, 0x1.0370e8672c836p-466, 0.0, 0x1.37843a31892dep-683,
     0x1.033f94e068633p-994, 0x1.f831bef7aa1f5p-840, 0.0, 0.0, 0x1.7dda2bce2ff81p-335,
     0.0, 0.0, 0.0, 0.0, 0x1.849b2b170123dp-922, 0x1.c5aa7cad31a8dp-390, 0.0, 0.0,
     0.0, 0x1.956d1a7262928p-1009, 0x1.ac8c4696dc9a5p-540, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.826b901628738p-709, 0x1.40bae438b5c52p-683, 0.0, 0.0, 0x1.f483e533cd46fp-155,
     0x1.95dc17ed56b69p-480, 0.0, 0x1.97fd50befe5e4p-181, 0.0, 0x1.f1aaec5b8ec1dp-273,
     0.0, 0x1.f69e87d45617dp-25, 0.0, 0x1.3dee6d282866dp-78, 0.0,
     0x1.adcc75f8484dcp-226, 0x1.66914c7da6907p-328, 0.0, 0x1.8ce7dd01bf63p-336,
     0x1.0dbaa27d492fbp-63, 0x1.9c6df18cbb037p-638, 0x1.2a26d3f3b1e51p-857, 0.0,
     0x1.b49461e257787p-73, 0.0, 0x1.3fe0c49dded6ep-212, 0.0, 0x1.84d9a4a461ccfp-189,
     0x1.311c592a5d099p-664, 0x1.d60bace3c06eap-287, 0x1.f7f43a875ae73p-669, 0.0,
     0x1.19883e3125792p-755, 0.0, 0.0, 0x1.fe742d1f067eep-812, 0.0, 0.0,
     0x1.239c1aee03dep-475, 0x1.fb1673e20a59cp-465, 0.0, 0x1.ed1f91c40b7d9p-972, 0.0,
     0.0, 0x1.7c6e287a6bb65p-833, 0.0, 0.0, 0.0, 0x1.e4d37f69dbedfp-63, 0.0,
     0x1.7a5e44001193ap-740, 0.0, 0x1.26a9ecc2b262ap-889, 0x1.c32c18c0cb1b5p-996,
     0x1.2491bf35169b1p-538, 0.0, 0x1.4458c29213b6cp-509, 0x1.682451871761bp-525,
     0x1.77438c2ba0fa1p-996, 0x1.07cb086c579c3p-528, 0.0, 0x1.3c10f76d878f2p-755,
     0x1.2885d75c4375bp-658, 0.0, 0x1.054756dbbc743p-1022, 0.0,
     0x1.5a41efc8baeb9p-623, 0.0, 0x1.3c522150369ep-689, 0x1.883ceecf8a96dp-477,
     0x1.9e21566fff48cp-675, 0x1.6467b7a8b5f12p-404, 0x1.7c9cce8e3645p-175,
     0x1.d66322ffaa4e1p-141, 0.0, 0.0, 0x1.f875085808af8p-719, 0x1.58a05818e81cp-73,
     0x1.bf63457180b14p-645, 0x1.b130fa1e88df3p-194, 0x1.d51c1267235e1p-59,
     0x1.bd9d6802dc562p-969, 0x1.031dad86d977p-357, 0.0, 0x1.0ca13fae38c59p-65,
     0x1.6cc605c4e98acp-250, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00a86db36ee01p-361, 0.0,
     0.0, 0x1.a1e9656c5d75p-646, 0.0, 0.0, 0.0, 0x1.171c0fd2cf9ffp-376,
     0x1.0aa1fc8321eacp-251, 0x1.7eb3ebbb88d12p-426, 0.0, 0.0, 0x1.70effc05e201ep-122,
     0.0, 0x1.b083567e4c412p-738, 0x1.5fbd77c769367p-629, 0x1.b270bf81f2d6cp-579,
     0x1.82aac539e06d2p-932, 0.0, 0x1.442a3a1189e26p-932, 0.0, 0.0, 0.0,
     0x1.1ec7ed8cc6fedp-126, 0.0, 0x1.1d55e1956a366p-865, 0.0, 0.0,
     0x1.7b9fff6ad7ec7p-676, 0x1.e26bf55984bd8p-714, 0x1.f7abf5e6142c4p-798,
     0x1.1f64d73423cd9p-555, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e2c747e77b1bap-538,
     0x1.46bf6d2c69d02p-619, 0x1.18e595813512ap-412, 0x1.b9b5f3eb1eadfp-683, 0.0, 0.0,
     0x1.e0a851c2697afp-537, 0.0, 0.0, 0x1.e065ee51ca255p-757, 0x1.f4c5d38eeee32p-259,
     0x1.6b2bb6177e819p-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af4239e15071p-152, 0.0,
     0.0, 0x1.709b404fa6b74p-505, 0.0, 0x1.aff5d955dec06p-513, 0.0, 0.0, 0.0,
     0x1.ab5b53bfe880ap-319, 0x1.d1471f893d2f1p-112, 0x1.6bdbf17ebf17ep-302, 0.0, 0.0,
     0x1.164087da860d5p-906, 0x1.c47b3c1e035c3p-331, 0.0, 0x1.46a0426c3a684p-846,
     0x1.82c95bfebd528p-522, 0x1.5a49e6b71648dp-713, 0.0, 0.0, 0.0,
     0x1.bf2545eb3a38bp-287, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.018d4a720a47bp-883, 0.0,
     0x1.3d97a3eaabc03p-213, 0x1.f3713177102adp-322, 0x1.6b9ac97973451p-423, 0.0, 0.0,
     0x1.74eee55f8920ap-789, 0x1.ce63c15cccca6p-505, 0x1.d6833d0fd642ap-77,
     0x1.3cb0e6ad7983ap-332, 0x1.8582e04c355d2p-873, 0x1.9bdfb871a265dp-932, 0.0,
     0x1.dbd5473c3e385p-951, 0.0, 0.0, 0x1.ebed78394ab98p-449, 0.0, 0.0,
     0x1.fa44dff84bd79p-1013, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61d7eb09ee42ep-505,
     0x1.354ddcc79ed7dp-528, 0.0, 0x1.e873168dd2376p-952, 0.0, 0x1.91e363c3782d1p-226,
     0x1.393c208b4d7c7p-445, 0x1.f6da1accaf1a8p-266, 0.0, 0x1.4b341c731a2f8p-963,
     0x1.0689fdde9f235p-738, 0.0, 0x1.57fac9bdaf8aap-735, 0x1.b5ecfbef09838p-568, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.194de60f93b49p-320, 0.0, 0.0,
     0x1.b6de7632ed3acp-675, 0.0, 0x1.7abe4d29ae033p-811, 0x1.02bcc7d511962p-114,
     0x1.749a979faac96p-145, 0.0, 0x1.fcc2d03e2aadep-628, 0.0, 0x1.7802d85f13be6p-160,
     0.0, 0x1.f3d8ede74c4d5p-779, 0.0, 0x1.4b8ce73f7c3edp-805, 0.0, 0.0,
     0x1.78ddfdc2e69b1p-457, 0x1.951a303a8d4f9p-658, 0x1.671b2e17f6194p-458, 0.0,
     0x1.369c2e8344d43p-693, 0x1.bd1eecb344189p-839, 0.0, 0x1.f3d8463fc4427p-92, 0.0,
     0.0, 0x1.ef226d15884d7p-147, 0x1.c3da074f01cd4p-279, 0.0, 0.0,
     0x1.15f3cdf8bd4eap-1007, 0x1.6e8f972ae47f9p-995, 0x1.0a15d5c1e8217p-770, 0.0,
     0x1.f30d4fb6a21a8p-894, 0x1.6ae2f702923ap-874, 0x1.9f64c2334949ap-576, 0.0,
     0x1.2b151ece7ac7ep-341, 0.0, 0.0, 0.0, 0x1.2f139e9c43fe5p-863,
     0x1.951b020551bbbp-296, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.108c8ba7713e6p-729,
     0x1.edd6bdefb822bp-192, 0x1.2ca62a7676ed7p-768, 0x1.120a7736454a6p-814, 0.0,
     0x1.fbf2e05f79182p-1016, 0.0, 0.0, 0x1.c538b60fd90bdp-91, 0.0, 0.0, 0.0,
     0x1.b6777f74cbe8ep-749, 0x1.1affb47cc34cp-585, 0x1.2bab1b9d491bbp-17, 0.0, 0.0,
     0x1.d120cf6ed5b2dp-715, 0.0, 0x1.902fba8747e81p-154, 0x1.d2fb94516d606p-636, 0.0,
     0.0, 0x1.55153da8e0326p-560, 0x1.867ff22a24bbap-551, 0.0, 0x1.8ed37ecc0a65bp-955,
     0x1.298ff401bfa95p-569, 0x1.4afda222f600fp-459, 0.0, 0x1.826a3cc5a6f9p-335, 0.0,
     0x1.1c706d99cdb5ep-280, 0.0, 0.0, 0x1.73fc15b65442ep-837, 0.0, 0.0, 0.0, 0.0,
     0x1.b404bec843248p-63, 0x1.dfa3f82237ec9p-398, 0x1.27d38102bdf87p-455,
     0x1.7c5f4af6d7c7dp-1005, 0x1.3fd0f9676489bp-235, 0x1.f33f9fb27370ep-921, 0.0,
     0.0, 0x1.e68e3f74225e9p-245, 0x1.564cd6f56d3ecp-74, 0x1.9fcca75bdecb3p-906, 0.0,
     0x1.bca7f8ae3dd46p-193, 0x1.a16cd46ecf0b6p-649, 0x1.1b82d43d16963p-199, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81f0f9ec658ebp-843, 0.0, 0x1.889ed974e7f6p-850,
     0x1.e19213cc0f0b2p-647, 0x1.13e7ce4cde111p-252, 0.0, 0x1.3b3a914b97db4p-168, 0.0,
     0.0, 0x1.b543b6a875a75p-671, 0.0, 0x1.1c67da5dcdadap-1010, 0.0, 0.0,
     0x1.4a4248c6171fep-616, 0.0, 0.0, 0.0, 0x1.98f9d0719c71ap-273,
     0x1.c19e2341e7b32p-268, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e0cf1648e7982p-848,
     0.0, 0.0, 0x1.d6589a3cfb87p-699, 0.0, 0.0, 0x1.51770efd4450fp-432, 0.0,
     0x1.51af3b180241dp-513, 0.0, 0.0, 0x1.a2df6d4c8a2ffp-1004,
     0x1.9ca8b6e022e0ap-734, 0.0, 0x1.20ad93ce9befp-473, 0x1.927350f454ffcp-607,
     0x1.5d9c8d2e75413p-946, 0x1.539848b6b8fcbp-19, 0.0, 0.0, 0x1.413259769481fp-433,
     0x1.d7ab91a410608p-197, 0.0, 0x1.73c2808b05bc2p-131, 0.0, 0.0,
     0x1.cc2f19af39af8p-94, 0x1.30e349f232283p-794, 0.0, 0x1.63e14a7a0e521p-693, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ba3195793bf34p-242, 0.0, 0x1.36b81cf021a88p-36,
     0x1.05a65b35c7a92p-273, 0.0, 0.0, 0x1.24c135a40a595p-820, 0x1.380af6f4a197p-535,
     0x1.6578ea8c7d307p-17, 0x1.c07aa61bf869p-535, 0x1.5e9f9c9866535p-836, 0.0,
     0x1.6bfc1abb5d962p-649, 0x1.3a68b64467d49p-547, 0x1.85d5d7aee3f02p-141,
     0x1.0aeb45634569ap-65, 0x1.6ec7ed74e8f8dp-931, 0.0, 0.0, 0.0,
     0x1.3a6942558e656p-427, 0.0, 0x1.c5aea56fd7a36p-81, 0.0, 0.0,
     0x1.a332f6d07ab46p-434, 0.0, 0x1.0201a862ec2c7p-782, 0.0, 0x1.696803f70ef1dp-63,
     0x1.d2ef684fbfbdp-5, 0.0, 0.0, 0x1.a2fb0250144bfp-587, 0x1.1e6e983d86eacp-266,
     0x1.c0c6f303c29cbp-996, 0.0, 0.0, 0x1.1607fc1fa7401p-23, 0x1.ffbe82beceaafp-1002,
     0x1.731aec476e8bcp-296, 0.0, 0x1.194b9f0125564p-39, 0.0, 0.0, 0.0,
     0x1.9c812ef65d1f6p-495, 0x1.b0182f569d267p-489, 0x1.d92296b093acfp-226, 0.0,
     0x1.2e1a10bb854fp-190, 0.0, 0x1.6b5053923df7cp-342, 0.0, 0.0, 0.0, 0.0,
     0x1.c9ff7b2a5e26ep-471, 0x1.8a2cc7cbc93aap-419, 0x1.a9e3ae1f8daf1p-187, 0.0, 0.0,
     0x1.4cd75aefdcbbbp-880, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bfc7d9fd7a494p-618, 0x1.d01b43cf51078p-947, 0.0, 0.0, 0x1.ee8c603c12abp-418,
     0.0, 0x1.643575590ac3ep-432, 0.0, 0.0, 0.0, 0x1.b3c27cd368773p-692, 0.0,
     0x1.5472cb3e0e3a2p-703, 0.0, 0x1.167704e7986a5p-320, 0x1.36cf069795bf7p-614,
     0x1.e3d73e2d606bp-561, 0x1.adca5af7e2f5bp-847, 0x1.a3eb8c770ec2fp-260, 0.0,
     0x1.12c08dc039257p-705, 0x1.e3bb67cbd19a8p-1, 0x1.93803640632b5p-470, 0.0,
     0x1.57a77c06beb8cp-730, 0.0, 0.0, 0x1.4b5e403fe46d3p-425, 0x1.32c06c551879ap-716,
     0x1.c8460fbcfefddp-907, 0.0, 0x1.0e9c0f485f65fp-773, 0x1.92be4a7821112p-540,
     0x1.97fc5c7cbee34p-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.50a69127c0708p-480,
     0.0, 0x1.def5a6ecf7906p-786, 0x1.480b987705928p-694, 0.0, 0.0,
     0x1.4a64f72996f1cp-672, 0x1.2007c4971b6cbp-1011, 0.0, 0x1.a3e546e0527dbp-909,
     0x1.bd52117ec053p-919, 0x1.efc2a7be8651cp-945, 0.0, 0x1.1983a97fcc662p-607,
     0x1.9cacb8651afefp-849, 0.0, 0.0, 0x1.0cdcbe01f2b57p-618, 0.0,
     0x1.c00fe22e3662dp-457, 0.0, 0.0, 0x1.06134c8648b1p-777, 0.0,
     0x1.1f985eeadb1dp-579, 0x1.af3a99463b8fp-371, 0x1.cc1a40ee70039p-666, 0.0, 0.0,
     0.0, 0x1.425082869c903p-193, 0.0, 0.0, 0x1.8c93abe63e423p-1010,
     0x1.ef26f876ed9e2p-119, 0.0, 0.0, 0x1.6a77d01ebd52ap-121, 0x1.20d20c29839fp-26,
     0.0, 0.0, 0x1.a21fb843454f2p-284, 0x1.708f3d7589f56p-721, 0x1.0c8d14e630eb7p-906,
     0x1.f0fc419c1b812p-174, 0x1.6bf9286ab31f9p-310, 0x1.2b692b110fd8ep-235, 0.0, 0.0,
     0.0, 0x1.b29706a29fe64p-634, 0.0, 0x1.9166fe8a55d51p-118, 0.0,
     0x1.5fd62131ae964p-192, 0x1.232dd4759c372p-994, 0x1.ac9815f932c06p-668,
     0x1.f944a97d09443p-575, 0x1.db2917a898f99p-353, 0x1.d318f659829a3p-759, 0.0, 0.0,
     0x1.3e86a4e4c3756p-819, 0.0, 0x1.5ce656c7ffa96p-579, 0.0, 0x1.62d9048bb0f03p-747,
     0.0, 0x1.5476b004fbad6p-461, 0x1.a5de676e6cedbp-939, 0.0, 0x1.ea0f5d8537d7fp-725,
     0x1.f3b5d4a802b3fp-987, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb4e982a02f9bp-591,
     0x1.058d7940d4b15p-224, 0x1.8e395bf1f134cp-971, 0.0, 0x1.d4ce84701a3b8p-778, 0.0,
     0.0, 0.0, 0x1.72c65af5441d1p-15, 0x1.348f2dbfc8303p-687, 0x1.8ec9579319336p-734,
     0x1.f06568facc042p-8, 0x1.23dd538d5981dp-519, 0x1.03f4bbffff45dp-459,
     0x1.82cad692c69f9p-729, 0.0, 0.0, 0.0, 0.0, 0x1.8b9e6efa27539p-161, 0.0,
     0x1.44636551b670cp-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36187c7c022bdp-402,
     0x1.2581aef831c4ap-118, 0x1.9f830ab70d747p-705, 0.0, 0.0, 0x1.01082e5c22d6dp-887,
     0x1.a40a47f620459p-411, 0x1.01b41054ca36bp-552, 0x1.c5dc6878e6632p-606, 0.0, 0.0,
     0x1.c2b9bb887dd37p-858, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.16b66dfdf95f5p-447,
     0x1.03edae86fd9f1p-478, 0.0, 0.0, 0x1.690ffa1a103ep-357, 0.0, 0.0,
     0x1.f07251965a7d2p-342, 0.0, 0x1.379a7fc692733p-309, 0x1.ae12aba7a74adp-206, 0.0,
     0x1.8b44859a21116p-864, 0x1.0bcdad6f13ea2p-265, 0x1.f8b98edc101e9p-179,
     0x1.b673f4d548192p-437, 0x1.1ce378a5ba65ap-160, 0.0, 0x1.e6ea57e804445p-941,
     0x1.a1fab4c311966p-375, 0.0, 0x1.199ae6f6e10a6p-272, 0.0, 0.0, 0.0,
     0x1.5ebaa6f86ee33p-524, 0x1.0b99ef434f0fdp-438, 0x1.e379be5d9fea1p-307, 0.0, 0.0,
     0x1.afac0b324d7b8p-729, 0x1.0c31bb1180abbp-395, 0.0, 0x1.7bb1389f90f27p-327,
     0x1.813cc04d752cep-263, 0x1.7c7deb32eebf5p-944, 0.0, 0x1.ee83297965621p-663,
     0x1.5bbf08fced956p-37, 0x1.658752fc18eeap-1021, 0x1.509c303091163p-243, 0.0, 0.0,
     0x1.d17890c447ef6p-771, 0.0, 0.0, 0x1.b37b00ceb48a6p-299, 0x1.f725943eacaeap-887,
     0x1.ec0d65727a8d4p-983, 0x1.20f66fa307c0fp-580, 0.0, 0x1.1a1846cccb1f4p-512,
     0x1.155a67d112326p-50, 0x1.904ed0960c36p-597, 0.0, 0.0, 0x1.55eaab62b0d42p-560,
     0x1.57d281a85427cp-735, 0.0, 0x1.953c85ef4c9b3p-908, 0.0, 0.0,
     0x1.41f1e94206ca3p-1018, 0x1.8b66e01a707d4p-25, 0x1.b0dbf24a27b53p-182,
     0x1.63eccbddab986p-568, 0x1.bd01482dc5998p-245, 0.0, 0x1.f38941407586dp-711, 0.0,
     0x1.451fd755f7f2bp-386, 0.0, 0x1.5996a9ec25ddep-196, 0.0, 0.0, 0.0,
     0x1.fa8c7ff5fc3b8p-55, 0.0, 0.0, 0x1.e325d5c36eb9ep-942, 0.0, 0.0, 0.0, 0.0,
     0x1.07398f99d7199p-535, 0x1.ac6a19cfe0e35p-422, 0x1.5e5d492ff7076p-843,
     0x1.92864e607c3a9p-842, 0x1.0e11ab557d41p-936, 0x1.71becb72b04acp-998, 0.0,
     0x1.4b030c868d21fp-822, 0.0, 0x1.58efc343a7f9fp-331, 0.0, 0.0,
     0x1.84ffbd44de876p-708, 0x1.69fb1f2b6fd1ep-509, 0x1.16ea92ad7527p-467,
     0x1.6c361b8ee7bf4p-667, 0x1.525737732b52cp-433, 0.0, 0x1.f9590ab2e69b5p-802, 0.0,
     0x1.0f04efa3fc653p-1000, 0x1.5ad85fb2eb6b5p-355, 0.0, 0x1.779bf66b5deeep-636,
     0.0, 0.0, 0x1.c5a5a8bc28469p-845, 0x1.431f676e9d06fp-158, 0.0,
     0x1.218b2b17f6eefp-767, 0x1.35aadab3d65e1p-115, 0.0, 0x1.69ed4de574e9p-682,
     0x1.35ead73541e8ep-674, 0x1.75c44e554fcfcp-811, 0x1.c98bb9f968b9fp-718,
     0x1.8814a20796815p-111, 0x1.b14d111a52c64p-553, 0x1.35e3be7e95b19p-574,
     0x1.9ba25a8853f8ap-644, 0.0, 0x1.e5105ccf6aeb4p-512, 0.0, 0x1.d90ba051f8d28p-687,
     0.0, 0.0, 0.0, 0x1.52cab388b2a9dp-266, 0.0, 0.0, 0.0, 0x1.87860cac4d7a8p-738,
     0x1.fbce3734fe031p-283, 0.0, 0.0, 0x1.635b6e2644d95p-571, 0x1.46787466d98bp-852,
     0.0, 0.0, 0.0, 0x1.5df3a1cbe04b8p-431, 0.0, 0x1.57a84e3f38362p-82, 0.0,
     0x1.e0ea889f7a5bp-454, 0.0, 0x1.e48197811f02p-623, 0x1.6bfa67a909c0bp-902, 0.0,
     0.0, 0x1.9aaf28acbbd37p-956, 0.0, 0.0, 0.0, 0x1.fab6b3fae4181p-725, 0.0, 0.0,
     0x1.c9a8ab69e82c1p-590, 0.0, 0.0, 0x1.d65bba9410b29p-445, 0.0,
     0x1.3e07b6f134b29p-35, 0.0, 0.0, 0x1.be4671d91332cp-549, 0.0, 0.0,
     0x1.584dcb4f932f4p-197, 0.0, 0.0, 0x1.dc0e1e6168e44p-34, 0x1.b346f56db4fa1p-119,
     0.0, 0.0, 0x1.4f8af84f9f8a6p-283, 0.0, 0.0, 0x1.fda43d657d5e5p-449, 0.0, 0.0,
     0x1.9bcb6c92b5aa9p-378
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincospid1_u05purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincospid1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospid1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
