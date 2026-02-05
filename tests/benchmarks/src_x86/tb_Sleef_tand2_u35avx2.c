/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand2_u35avx2128.c --function Sleef_tand2_u35avx2128 --headers \
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
     0x1.753390cd86f2dp-564, 0.0, 0x1.36c25f3544bb6p-596, 0.0, 0x1.92be608f4599bp-81,
     0.0, 0x1.989dc03a44e82p-169, 0.0, 0.0, 0.0, 0x1.b6f59adfbc266p-595,
     0x1.9f006e29a5c6cp-760, 0x1.9cdd4acc3de19p-174, 0x1.ad5ff6b45ebe8p-815, 0.0,
     0x1.4d4f73f262a9bp-709, 0.0, 0x1.58f4c323f1c19p-955, 0.0, 0.0,
     0x1.955811319a283p-661, 0x1.073ff31e3f57fp-140, 0x1.b7dd88577a886p-313, 0.0,
     0x1.e62acb6dc6d6cp-529, 0x1.e82e6ee1fff05p-473, 0.0, 0x1.5bf08245947b8p-223,
     0x1.0ae196d104c48p-124, 0.0, 0.0, 0.0, 0x1.ae565c3d17093p-920,
     0x1.0209b3e4bb8e4p-344, 0x1.ed0de539ab141p-64, 0x1.937ce53da8a83p-589, 0.0, 0.0,
     0.0, 0x1.b20c4cbcb2308p-602, 0x1.59cfcf5474d64p-245, 0x1.636318bc87ca7p-776, 0.0,
     0x1.4f035a10df7efp-688, 0.0, 0x1.10b3277f5d4f2p-43, 0x1.376b9e6bc7058p-573, 0.0,
     0x1.f48e310f67725p-533, 0.0, 0x1.e7fd60471babp-897, 0.0, 0x1.84884cd5dbf4p-313,
     0x1.873af11c2dac4p-317, 0.0, 0x1.7774f5e03190cp-781, 0x1.a2c428256c178p-322,
     0x1.84165161a74fap-549, 0.0, 0x1.5e510f997740cp-584, 0x1.e0d074c11d65dp-321,
     0x1.d61dc4fdba371p-590, 0x1.761c98b0790a8p-576, 0x1.cfb7433591371p-271, 0.0, 0.0,
     0x1.74eb42c849841p-970, 0.0, 0x1.7aa346264c878p-269, 0x1.91f54b9a39ec4p-155,
     0x1.3cdc433562e5p-280, 0.0, 0.0, 0x1.e4362010d6fcep-46, 0x1.7d4bfa2252151p-23,
     0.0, 0.0, 0.0, 0x1.82b01154d162bp-496, 0.0, 0.0, 0x1.49441cfdf6573p-889,
     0x1.c0f6dba239021p-899, 0x1.f6e5c7b85763fp-183, 0x1.411862581a9ep-560, 0.0,
     0x1.a83036a99c04ap-969, 0x1.13be4cc9a3955p-314, 0.0, 0.0, 0x1.12af89b0e48f5p-856,
     0.0, 0.0, 0x1.34ff56186197ep-12, 0.0, 0.0, 0.0, 0x1.3b8c7a6e79409p-782,
     0x1.d5eab7ec3f17p-711, 0x1.caa5f1f21084dp-823, 0x1.9e2470d4b7bd8p-506,
     0x1.3fa00c0b80ebcp-936, 0x1.20609bf9a1c43p-801, 0.0, 0.0, 0.0,
     0x1.43078e2687f58p-946, 0.0, 0x1.af7951ac9a6b1p-755, 0.0, 0.0,
     0x1.5b25c936379dp-96, 0.0, 0x1.91d8b4a8195d5p-133, 0x1.b470866dc02ecp-535, 0.0,
     0.0, 0x1.ddc98818f2141p-583, 0.0, 0.0, 0.0, 0.0, 0x1.0a9bcc133f8b2p-424,
     0x1.614945120c09bp-559, 0.0, 0x1.65bfeeee683e7p-855, 0.0, 0.0,
     0x1.1bb92fc8a9e9cp-619, 0x1.afad1f7991881p-1008, 0.0, 0.0,
     0x1.f95fd8a4dea69p-218, 0x1.3685c5483451ep-35, 0x1.931ff352a8c58p-546, 0.0,
     0x1.9e12a6cfa7adp-480, 0.0, 0.0, 0.0, 0.0, 0x1.090dc6c09ad9bp-413,
     0x1.81ae3694593abp-703, 0x1.a7b8637584a8fp-65, 0.0, 0x1.2d5a56cf658ecp-75,
     0x1.79a40716d915p-918, 0.0, 0.0, 0.0, 0x1.59b9f9c4c31e7p-674, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.011391b84fd5cp-816, 0.0, 0x1.a31a47f4cdae7p-649,
     0x1.b2687d9e75acfp-604, 0.0, 0x1.c4a5ac2656747p-496, 0.0, 0x1.6a1c94898f3b4p-775,
     0.0, 0x1.53f94aa9a6c49p-590, 0x1.0ef8306a6b33ap-407, 0.0, 0.0,
     0x1.0548c2b5aa7a6p-410, 0x1.4bd279522f57cp-115, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6bc21bac28926p-965, 0.0, 0x1.3aed8a0dfd0f9p-188,
     0x1.009a7af32890ap-960, 0x1.9df8dee50f319p-421, 0.0, 0.0, 0.0, 0.0,
     0x1.a021adedd652p-110, 0.0, 0x1.97166899538a4p-179, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.89902a654c91fp-457, 0.0, 0x1.29a289aff0203p-91, 0.0, 0.0,
     0x1.264629f35b2a8p-845, 0.0, 0x1.16cb2f892283cp-552, 0x1.fe5e899d0980fp-673, 0.0,
     0x1.a14459255642fp-262, 0.0, 0x1.482508d5594fep-406, 0.0, 0x1.cc333708afc28p-499,
     0x1.78e4f30808e71p-304, 0x1.f855e9253167dp-997, 0x1.f948dc7dba447p-404, 0.0, 0.0,
     0x1.c1435c8e352bfp-968, 0x1.77672282a56fap-487, 0.0, 0x1.3d47a43606b14p-631,
     0x1.6059f2d4b97e2p-382, 0.0, 0.0, 0.0, 0.0, 0x1.61c37982b1f4fp-487,
     0x1.4a8be4b1fcb6ep-337, 0.0, 0.0, 0x1.a64a48847df93p-155, 0.0, 0.0, 0.0, 0.0,
     0x1.17a3d380cd276p-393, 0.0, 0x1.d53b70451d46ep-482, 0x1.d7ae34f1f7c3fp-973, 0.0,
     0.0, 0.0, 0.0, 0x1.becac96d2e2fap-288, 0.0, 0.0, 0x1.bd29816d1baedp-141, 0.0,
     0x1.b315e985365c8p-73, 0.0, 0x1.5f79c71c1095cp-881, 0x1.0b6c34b205a5cp-564,
     0x1.4cc05410ad7b7p-592, 0x1.f2d08df3f422fp-414, 0.0, 0x1.3bc7a2e8b21bdp-733, 0.0,
     0.0, 0.0, 0x1.07ce61b9f387p-305, 0.0, 0x1.4bd7c4285875p-650, 0.0,
     0x1.b99cc5ddb66bbp-939, 0x1.f680993420262p-155, 0.0, 0x1.a66bb83838b1ap-22, 0.0,
     0x1.bde2fd2c16bd5p-171, 0x1.af044f451fce7p-189, 0.0, 0.0, 0.0,
     0x1.6d2059c4d9f2dp-389, 0.0, 0x1.490b9e078007dp-404, 0x1.b911b2329a31bp-121,
     0x1.2e5d83817e77p-647, 0.0, 0x1.77f4ddc348222p-291, 0x1.224da35c13c38p-617, 0.0,
     0.0, 0.0, 0.0, 0x1.019ab89f6e605p-738, 0.0, 0x1.3d7092165382cp-630,
     0x1.3e60765437521p-982, 0x1.84b91a2f1a117p-554, 0x1.9db955856d2e5p-378, 0.0,
     0x1.2e4f239dfb5dp-995, 0x1.910505f612176p-228, 0.0, 0.0, 0x1.c4f278cc44c8bp-447,
     0.0, 0.0, 0x1.ab70d4e94c1cep-94, 0x1.b30b00faa09bfp-633, 0x1.df9fe4726f806p-553,
     0x1.1e011511fa363p-284, 0x1.ac1c614ca83f5p-427, 0.0, 0x1.53cc84289ebbdp-553, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d45897e0336e6p-525, 0x1.c743395974b87p-51,
     0x1.330017d66390dp-874, 0.0, 0.0, 0x1.93b44b8f64e2p-20, 0x1.27147be3bd444p-770,
     0x1.fb499c35478cep-206, 0x1.3f53aef909bfp-264, 0.0, 0x1.b43719f4d6b8p-547,
     0x1.e812b9bc81f0ep-385, 0x1.f01e8910e46e7p-488, 0.0, 0.0, 0x1.5348929fd268fp-230,
     0x1.a48e7f252d589p-380, 0x1.cb21f6f24597cp-286, 0.0, 0x1.9175a41e4e72dp-57, 0.0,
     0x1.26b710729de76p-216, 0x1.84c3a5927f9bep-452, 0.0, 0.0, 0x1.8996ede785f8dp-715,
     0x1.8f8df39f9c3cp-484, 0x1.83cdac59fa761p-236, 0.0, 0x1.beb041decd8efp-978, 0.0,
     0x1.bfed70d721a39p-987, 0x1.dab795d8f572ep-30, 0x1.41060e614d2cfp-63,
     0x1.581c2cdc5500fp-618, 0.0, 0.0, 0x1.e2de3d75def4p-440, 0x1.4fa1cda344d18p-102,
     0x1.e6af098016eeep-847, 0.0, 0x1.65a928974a03cp-76, 0x1.453886e6913cdp-66, 0.0,
     0.0, 0x1.81d92dee38268p-326, 0.0, 0x1.07a5f715ed86fp-770, 0x1.59fd06571560ap-570,
     0x1.59393897fa255p-830, 0x1.4a3336196fa1ep-392, 0x1.ca459aad4e248p-169,
     0x1.9fa44af002425p-464, 0.0, 0x1.e6500851e03f5p-29, 0.0, 0x1.897b0e5d3e95fp-202,
     0.0, 0.0, 0x1.63869f8890f0ap-414, 0x1.2e2623e114179p-806, 0.0, 0.0, 0.0, 0.0,
     0x1.712081af1fa38p-909, 0x1.9cf1ab7802edbp-811, 0x1.e7bb95c05d551p-560, 0.0, 0.0,
     0.0, 0.0, 0x1.b532c710d9638p-974, 0x1.c78fd3adb69aap-818, 0.0, 0.0,
     0x1.e2a2207b70e27p-715, 0.0, 0x1.eb4ce68cb9368p-322, 0x1.4580653bfcd15p-830, 0.0,
     0x1.653adc60ba929p-3, 0x1.6758e2784dba8p-109, 0x1.c804f9ea14868p-319, 0.0, 0.0,
     0x1.a874e60245e03p-559, 0x1.ca0db67ae5c31p-263, 0.0, 0x1.5d75dbb620f76p-541,
     0x1.472b70fc8eeb3p-303, 0x1.3bc3be96bc92bp-314, 0x1.6e177e5d27d73p-630, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98221b38e49dap-881, 0x1.b9bbb7e962be1p-888, 0.0,
     0.0, 0.0, 0x1.f8ce04bb32ea2p-352, 0.0, 0x1.d5e40f6386437p-120, 0.0,
     0x1.36470b846cdecp-13, 0.0, 0.0, 0.0, 0x1.91e69a73311dp-690,
     0x1.a10a8b4090997p-86, 0.0, 0x1.ff0c9282db72p-427, 0.0, 0.0,
     0x1.1dbbabf482335p-669, 0.0, 0x1.6e6cf6ccd69b3p-603, 0x1.3bf768eb20ac2p-713, 0.0,
     0x1.42c2b4f2f762dp-912, 0x1.caed1ff5f8ef4p-909, 0x1.813dd7f7a4cb6p-371, 0.0, 0.0,
     0x1.9f683508dafd6p-678, 0x1.2f971234dcb6dp-80, 0x1.2104770273af9p-975,
     0x1.c0c4e10355acbp-243, 0x1.a16b436906571p-845, 0x1.c86321d631566p-730,
     0x1.0ae96f0fc704p-140, 0x1.f159e3c2f2756p-148, 0x1.7811b214113d2p-830, 0.0,
     0x1.8a7707e6b4bd8p-419, 0x1.659fee1f0e5a1p-474, 0.0, 0x1.6ae0660002af8p-144,
     0x1.234af81f68d45p-1004, 0.0, 0.0, 0.0, 0x1.b1469b59fdaa4p-364, 0.0, 0.0, 0.0,
     0x1.db9c8be008544p-47, 0x1.5a9615b4123f7p-248, 0x1.de0a10446ae7cp-837, 0.0,
     0x1.9c44eea6c70e3p-708, 0.0, 0x1.2c4ade6d8d4e4p-760, 0.0, 0x1.d4f44cf49bffdp-685,
     0.0, 0.0, 0x1.f844d6411881dp-991, 0x1.ff383fdac910ap-1017, 0.0, 0.0,
     0x1.26874c5e4ef3fp-962, 0x1.1793c62b1d2c2p-53, 0.0, 0x1.8ed9502745ac4p-652, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3751ba7de39aap-767, 0x1.c19762a6bdab3p-93,
     0.0, 0.0, 0.0, 0x1.6dedd67da0637p-165, 0x1.dcd75d13c5c73p-930,
     0x1.000622c101cfep-18, 0.0, 0x1.a2df0b9b98e25p-842, 0.0, 0x1.1631d294d3f73p-601,
     0x1.2b210efcaf7aap-846, 0.0, 0.0, 0x1.5f744302b1295p-983, 0.0,
     0x1.27f23d9486131p-584, 0.0, 0.0, 0.0, 0x1.7518ee116e347p-227, 0.0,
     0x1.3d3fda6461f9bp-1002, 0.0, 0x1.8f6c075a5c7b3p-499, 0.0,
     0x1.4af0a1660d172p-968, 0x1.121dbb09265a7p-200, 0.0, 0.0, 0.0, 0.0,
     0x1.7415afd65e31fp-688, 0x1.dc598e8337cf4p-853, 0.0, 0.0, 0x1.a48999c6d2cc9p-386,
     0x1.2d4b4b898adb5p-277, 0x1.e9a01d4a32425p-216, 0x1.ed0eec74c8889p-246,
     0x1.7649dbd05e2bdp-74, 0.0, 0.0, 0.0, 0x1.bb2c51fddf65fp-183,
     0x1.d6f411f7767e5p-503, 0.0, 0.0, 0.0, 0x1.64477b03fc0cep-718, 0.0, 0.0, 0.0,
     0x1.f8c2a20fa2294p-928, 0x1.b817d29d444e7p-323, 0x1.fba72360ef728p-586,
     0x1.1ab07a2b42b7fp-478, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.361a5252526e2p-987, 0.0,
     0.0, 0x1.c7d90e6791c73p-432, 0x1.f34af3b4bb31p-297, 0.0, 0x1.a77555c769d93p-715,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.512572688bf95p-694,
     0x1.b35c50f7cfd1bp-799, 0x1.b1d681b1d9387p-543, 0.0, 0x1.16c4ff338f10cp-499, 0.0,
     0x1.06c719033e7b8p-345, 0.0, 0x1.4bca76b17177p-605, 0.0, 0x1.d16d74f2d230cp-171,
     0.0, 0x1.24ba5528169e2p-232, 0x1.69eaedc9ad678p-924, 0.0, 0.0, 0.0,
     0x1.850e71dd935dap-904, 0.0, 0x1.b95e4e3b8ef61p-739, 0x1.70a8b31aa12fp-149, 0.0,
     0x1.8405b0d7e31d5p-802, 0.0, 0x1.40f352fa834cbp-348, 0.0, 0.0,
     0x1.084b930ada79cp-646, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48f4ec6a9cae1p-654,
     0.0, 0.0, 0x1.4e4ca704f8fa4p-111, 0x1.e423496ea4e7fp-178, 0x1.e7e4f5f62e511p-765,
     0x1.ad83094378a08p-596, 0.0, 0x1.ad283a06d7ec2p-832, 0x1.59e84fc08b207p-485, 0.0,
     0.0, 0x1.39501abed0f41p-19, 0.0, 0.0, 0.0, 0.0, 0x1.5502b998066c5p-86, 0.0, 0.0,
     0.0, 0x1.aab322d1ea345p-429, 0.0, 0x1.2adeb5ec6c4a1p-540, 0.0, 0.0, 0.0,
     0x1.cddec1a65e3fap-670, 0x1.2c3489f3ef77ep-269, 0x1.7d5105bb0cdf5p-130,
     0x1.dca5bf4807758p-285, 0x1.2059df1a3ab48p-666, 0x1.a84f16c333302p-327,
     0x1.55f13e517e52p-646, 0.0, 0x1.72d2fd611f66bp-389, 0.0, 0x1.92507e576e107p-652,
     0x1.5a43951335244p-986, 0.0, 0x1.05de1170a2ad2p-930, 0.0, 0.0,
     0x1.fae42ad56a8d4p-86, 0.0, 0x1.17ada7d2d893fp-118, 0x1.00d9b5eeee842p-658, 0.0,
     0.0, 0.0, 0x1.0456d16bf2902p-210, 0x1.e7e6afa797063p-799, 0.0, 0.0,
     0x1.9e7b9153e9e3ep-52, 0.0, 0x1.e6af540402bf2p-503, 0x1.6b22ad9a6f009p-567,
     0x1.63f74bd3ba096p-922, 0.0, 0x1.6dea3217b89a1p-602, 0.0, 0x1.71f44b639cd47p-92,
     0.0, 0x1.0c989f34ae9d3p-227, 0.0, 0x1.b6785da3f1d82p-607, 0.0, 0.0, 0.0,
     0x1.e7d6f19189ea1p-79, 0.0, 0.0, 0.0, 0x1.6c25ae2ef4957p-1008, 0.0,
     0x1.0b66fe243866ap-132, 0.0, 0.0, 0.0, 0.0, 0x1.44da4f345ce0fp-805,
     0x1.0c79b4fdf1facp-593, 0.0, 0.0, 0x1.7a12777983b94p-484, 0x1.c8c5041097e09p-442,
     0x1.96d8b97e045e2p-882, 0x1.63aca99b0485bp-377, 0.0, 0x1.194b0a6bec62fp-732,
     0x1.1ea5ea1490379p-986, 0.0, 0x1.4d1c3fb535be4p-221, 0x1.009af569a3903p-77, 0.0,
     0x1.d1d865437e07fp-121, 0x1.0dfe4aa107ed5p-398, 0.0, 0x1.b8f98274a2d82p-998, 0.0,
     0x1.ffb125bfd470bp-28, 0.0, 0x1.76b4581701908p-645, 0x1.fb020ef1ac077p-686,
     0x1.c20947c32dc7dp-186, 0x1.013b4310a9fd4p-301, 0x1.4290ff2ba730cp-990, 0.0, 0.0,
     0x1.a6286faeb98afp-327, 0.0, 0x1.6cdd71ec13e6bp-406, 0x1.bfe167b214d62p-894, 0.0,
     0x1.279edc6641cabp-166, 0x1.c688772679159p-80, 0x1.6a4b6608d75bdp-852,
     0x1.efadee7649e4p-194, 0x1.51ae37e100cedp-384, 0.0, 0x1.a86ec3e67d87ap-901, 0.0,
     0.0, 0x1.fdcab6571fb2bp-607, 0x1.34312b828bccp-415, 0x1.8284d26b64a78p-568,
     0x1.04d0fcef97c3fp-210, 0.0, 0x1.41fdc1440c729p-270, 0.0, 0x1.c753e455acab5p-868,
     0x1.26f86a1d1834fp-1017, 0x1.31c4f918e6dddp-314, 0x1.ffeb6a02541bep-65,
     0x1.330000bb0b965p-776, 0.0, 0x1.fc064f6f323f6p-1009, 0x1.01d87f9797761p-521,
     0.0, 0.0, 0x1.c1b8c4ab49813p-635, 0.0, 0.0, 0x1.5dd29af87b766p-465,
     0x1.8d53122f7f798p-68, 0x1.984aa09e9abc1p-934, 0x1.bac2f08a9d7f5p-21,
     0x1.fa1439c287093p-1020, 0.0, 0.0, 0x1.779866af699c3p-446, 0.0, 0.0, 0.0,
     0x1.461f48b306153p-363, 0x1.bd623b136587p-20, 0x1.3b68b96fdf0efp-485, 0.0, 0.0,
     0x1.14fd8e28a4ebcp-657, 0.0, 0.0, 0.0, 0x1.9a60494266c64p-97, 0.0, 0.0,
     0x1.b704e932a5d44p-839, 0x1.3bc27e23bb572p-103, 0x1.d7f649362e6f1p-470, 0.0,
     0x1.7996a38f4de2dp-353, 0x1.58bceb40ea513p-6, 0.0, 0x1.a8e6a8f2460dbp-386, 0.0,
     0.0, 0.0, 0x1.ca292cbd7eb44p-875, 0x1.f69730bbc3c19p-10, 0x1.deaeea4118fc1p-12,
     0x1.244bd8f4a55a6p-536, 0.0, 0x1.44959222ae297p-669, 0x1.3a963a18125d3p-660, 0.0,
     0.0, 0x1.875f2d2149e35p-78, 0.0, 0x1.85463774cc686p-368, 0.0,
     0x1.9ca32044b278p-705, 0.0, 0.0, 0x1.5228871f8c34fp-622, 0x1.b754278314d93p-516,
     0.0, 0.0, 0.0, 0x1.0311ef9cbabf1p-340, 0x1.ef0fdbcd207fbp-513, 0.0, 0.0,
     0x1.231a06639a63fp-225, 0.0, 0.0, 0.0, 0x1.a13df2902c8a2p-849, 0.0, 0.0, 0.0,
     0.0, 0x1.0d8955b5e9b6ap-328, 0.0, 0.0, 0x1.cade45a65c772p-851,
     0x1.e336563c1fe32p-943, 0.0, 0x1.87930f264296ap-973, 0.0, 0x1.06c55d8a5e8c5p-740,
     0.0, 0x1.740832d6204a9p-618, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.232c7170c06edp-109,
     0x1.d312a3c530e79p-988, 0.0, 0.0, 0.0, 0x1.b6d9636165ed3p-63,
     0x1.96e4bc8dd6e28p-113, 0.0, 0.0, 0x1.f9b6b11644bbep-557, 0.0, 0.0, 0.0,
     0x1.3ec805f588772p-609, 0x1.257a3d4709339p-311, 0x1.e67484df0d418p-471,
     0x1.5b9b1cc94a1edp-219, 0.0, 0.0, 0x1.4bc322445b26fp-824, 0x1.9dcf08e18d08cp-371,
     0x1.38366ce24cd0bp-994, 0x1.ae3ce4fa56a76p-472, 0x1.e09c7f7e64729p-2, 0.0, 0.0,
     0x1.1196d21988189p-667, 0x1.0675174e292dp-909, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d52b33a7ca7ap-50, 0x1.4f760040e5b5cp-833, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2782fccc7acb3p-804, 0.0, 0x1.9d75a03288bf2p-511, 0x1.1bccb7387b74p-180,
     0x1.3be50b7f5edf9p-418, 0x1.683e58bee1917p-475, 0.0, 0x1.b587553abf523p-714,
     0x1.39a963297427bp-80, 0x1.2abb29f354734p-538, 0x1.90318b3d5b672p-376, 0.0, 0.0,
     0x1.e8795888e8812p-256, 0x1.d7b3a764707cbp-493, 0.0, 0.0, 0.0,
     0x1.f4d094e4a47a2p-169, 0x1.8437bd7cc85f2p-987, 0.0, 0.0, 0x1.1e6cb9f2649d8p-357,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6d8d5e1e081p-351, 0.0, 0.0, 0.0,
     0x1.3acde2da0ac2cp-774, 0.0, 0.0, 0x1.6de59d2d82f4cp-338, 0x1.28eb61758129p-461,
     0.0, 0.0, 0x1.52639c95f6ae5p-610, 0.0, 0x1.302c8ed251cbbp-801, 0.0, 0.0,
     0x1.cfee51f65f0ddp-199, 0x1.18218e9efbc3fp-154, 0x1.b5eac07427f12p-55, 0.0, 0.0,
     0x1.8254d3e93369bp-239, 0x1.496a4286056b3p-789, 0.0, 0.0, 0x1.989fe07966e31p-76,
     0x1.1c23bbd8a968dp-612, 0x1.8397af0e1512ep-245, 0.0, 0.0, 0.0,
     0x1.4c91e3a033371p-509, 0x1.03967b154cdc9p-518, 0x1.c875a80424e9bp-57, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6f238dc077ac3p-965, 0x1.d0c43dfc94e65p-171,
     0x1.d37311643ad04p-976, 0x1.8b1c14dd4141fp-1018, 0.0, 0.0, 0.0, 0.0,
     0x1.851570cf90697p-854, 0.0, 0.0, 0x1.4caa3fd3ab232p-438, 0.0,
     0x1.9be172d7c8ff7p-286, 0x1.3f2838bcc24fbp-232, 0.0, 0x1.fc4ae6ec2a4fp-104, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8de21dad09143p-857, 0x1.1c03e4037b02dp-513,
     0x1.f2001834cedaep-554, 0x1.2cf87ff330e41p-149, 0x1.4a1fc4aba619bp-273, 0.0, 0.0,
     0x1.3ca234afb692ep-612, 0.0, 0.0, 0.0, 0x1.06e6ab02185f8p-622,
     0x1.fb151cf0a3338p-404, 0.0, 0.0, 0.0, 0x1.12f3a97eebba9p-632,
     0x1.b483cf4229cf4p-136, 0x1.88104ae5dc319p-799, 0x1.4c5a88327b1e8p-282,
     0x1.7f56cb00e864dp-950, 0x1.b3301be1d9dbbp-875, 0.0, 0.0, 0x1.677b6880e04a3p-937,
     0x1.e0a54b331dfc9p-271, 0.0, 0.0, 0.0, 0.0, 0x1.2fb7a1fd91f2ep-742, 0.0,
     0x1.17269d50948c5p-843, 0x1.0e630f18d5183p-48, 0x1.e70426dc03c6bp-438,
     0x1.644f47ebea1e8p-26, 0.0, 0.0, 0x1.9500535fefa56p-699, 0.0
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
            tmp1 = Sleef_tand2_u35avx2128(tmp0);
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
    printf("Sleef_tand2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tand2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
