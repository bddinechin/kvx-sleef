/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind1_u35purecfma.c --function \
 *     Sleef_asind1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.528f9e8c396d8p-495, 0x1.a76fdf44dfd8cp-244, 0.0,
     0x1.5b27e87ec5b1ep-594, 0.0, 0.0, 0x1.04ab45beebd23p-992, 0.0, 0.0,
     0x1.a9b855f096f7ep-706, 0x1.9cd62fc947a48p-469, 0x1.5233bdabf2a0bp-887, 0.0,
     0x1.a5c3155662818p-664, 0x1.afd3af29ba72fp-942, 0.0, 0.0, 0x1.bd76c86478a32p-250,
     0x1.8ef3c81024c79p-779, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.636240f8add24p-498,
     0x1.e76c6c22c3a62p-750, 0.0, 0.0, 0.0, 0x1.bcf5878e977e9p-978, 0.0,
     0x1.d7ed804cbafecp-371, 0.0, 0x1.7563bd58b31dap-674, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f796138bbd90cp-242, 0x1.22feebd2aeb26p-10, 0x1.e523fe7109517p-234, 0.0, 0.0,
     0.0, 0x1.15b59d94970f6p-822, 0x1.9a5675755c9e3p-540, 0.0, 0.0, 0.0,
     0x1.33a4d1c0cc70ap-298, 0.0, 0.0, 0x1.a63462e8018f1p-30, 0x1.0d220435de50cp-962,
     0.0, 0x1.2391d3feebe88p-112, 0x1.07625515b8815p-402, 0x1.ecf2d63a8dfa4p-552, 0.0,
     0.0, 0.0, 0x1.e446a30b72358p-116, 0.0, 0x1.79019756960f4p-1, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.48da8071da3acp-483, 0.0, 0x1.21b144354c8dp-739, 0x1.74ce0eb8bf81bp-825,
     0x1.839ae2e507085p-5, 0.0, 0.0, 0.0, 0x1.7fedb833a39f7p-392,
     0x1.b6f8808424019p-833, 0x1.1b92385c96087p-47, 0.0, 0.0, 0.0,
     0x1.5378c5ab0980bp-68, 0.0, 0x1.084cb1473cf44p-765, 0.0, 0.0,
     0x1.eebc3b9288b28p-294, 0.0, 0x1.ef7048ce69ff4p-386, 0x1.55f3dc4964ab6p-220,
     0x1.b88c3f8ae8313p-249, 0x1.a014a3c06e354p-1002, 0x1.3712f5e1b9eb1p-978, 0.0,
     0.0, 0x1.112b36856f03cp-666, 0.0, 0x1.4512cd139a02cp-701, 0.0,
     0x1.d8628d9b7a096p-879, 0x1.6a7f4a1f0e11p-912, 0.0, 0.0, 0.0,
     0x1.d291039777edbp-46, 0x1.f14b26d83972ep-424, 0x1.815b3bc9d1db4p-219,
     0x1.daaa6fb068644p-53, 0.0, 0x1.f99e39851a42ep-358, 0.0, 0x1.52a66188b221p-658,
     0x1.d9c12b5fd56d7p-257, 0x1.c4c62250eb377p-263, 0.0, 0.0,
     0x1.eae11d3d4ccb1p-1021, 0x1.bb42c1486d7c2p-999, 0.0, 0x1.0f1d93cfad6dp-280,
     0x1.d9e7f8cdcb81cp-921, 0.0, 0.0, 0x1.a6db9126c03afp-313, 0.0,
     0x1.c4b0dc833a67ap-240, 0.0, 0x1.3aee14203418ep-290, 0.0, 0.0,
     0x1.6734bc045e9p-939, 0x1.3efac75608046p-164, 0.0, 0x1.245d6288056a6p-432,
     0x1.ed640f709e052p-240, 0.0, 0x1.bd4e21677ffdap-437, 0x1.f2843664e0ba2p-606, 0.0,
     0.0, 0x1.80efdc4ba5d8p-392, 0.0, 0x1.bfd0a954514b3p-1011, 0.0,
     0x1.cb693d1b8ce05p-969, 0.0, 0.0, 0.0, 0x1.61fab07fdc721p-89, 0.0, 0.0, 0.0, 0.0,
     0x1.9a38e2cc80ab1p-426, 0x1.3e1ae242734ccp-113, 0x1.521ad87955059p-381, 0.0,
     0x1.ec5aa863f0682p-514, 0x1.ff21e621b905ep-679, 0.0, 0x1.1d629d4c8c59ep-652,
     0x1.a05b7ad9f430ap-913, 0x1.6fa0bd9ef6cb3p-19, 0.0, 0.0, 0.0, 0.0,
     0x1.0e4031aadbf48p-657, 0.0, 0x1.380795baad675p-475, 0.0, 0x1.52ef67f49d612p-521,
     0x1.8003e1c5cf8eep-982, 0.0, 0x1.1cc145710d75cp-223, 0x1.5c354dd540e3cp-428, 0.0,
     0x1.3fe9f26dd65edp-701, 0.0, 0x1.41a44bbe4c489p-358, 0x1.50faf866f4447p-939,
     0x1.c4e4fac02e1bp-669, 0.0, 0x1.4363f5ff7a32cp-625, 0x1.735d34ea6229cp-726, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f360f7336c4c6p-863, 0x1.3817ccba15d22p-335, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.af79124eb1546p-234, 0x1.22213ffe8b89ap-783, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.15075925652c2p-767, 0x1.c9e47223dc123p-285,
     0x1.1433c10c1360bp-546, 0x1.bc563946006d9p-596, 0.0, 0.0, 0.0,
     0x1.34f1bd9e8eb2ap-396, 0x1.6b4e5f6f8aa44p-633, 0.0, 0.0, 0.0, 0.0,
     0x1.2377a482710bep-35, 0x1.b2bf9720c002bp-810, 0.0, 0.0, 0x1.5bfcc6db419e2p-945,
     0x1.4b97ccadcb19bp-294, 0.0, 0x1.43aa055c47764p-404, 0x1.b195b71398ae5p-980, 0.0,
     0.0, 0.0, 0x1.8800bed260e1cp-796, 0x1.0358a6fb33b7ap-529, 0.0,
     0x1.6d3080e784abcp-164, 0.0, 0x1.41762c3b140f8p-490, 0x1.66dfeda7615p-549,
     0x1.e9ce5a285aeabp-520, 0x1.7f7161cce5c2dp-370, 0x1.007fbb077eadap-767, 0.0,
     0x1.565c84f6c245ep-158, 0.0, 0.0, 0.0, 0.0, 0x1.955514bdf61bfp-335, 0.0, 0.0,
     0x1.46e9794a4d036p-479, 0x1.586d71d1a2f61p-210, 0x1.e050dad65e9cep-996,
     0x1.b67e5b4a85887p-825, 0.0, 0x1.e9c2975b524e3p-82, 0x1.32b75490be2aep-43,
     0x1.a4da39583187cp-819, 0x1.643c558ef626bp-103, 0.0, 0.0, 0.0,
     0x1.8dd9a9fa648a3p-950, 0x1.71b6132046f7cp-981, 0x1.588a2d182e13ep-1022, 0.0,
     0.0, 0x1.fd4c1b21cf4e2p-963, 0x1.64c599299cf0ap-720, 0x1.e3b7b462116b1p-577, 0.0,
     0x1.90e898742eae6p-570, 0.0, 0.0, 0x1.c085d31737b3p-707, 0.0,
     0x1.06f348de13fc2p-397, 0.0, 0.0, 0x1.33f8e0dc3d3eep-668, 0.0,
     0x1.28780dba3c852p-558, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c3f39d64f13b8p-471,
     0.0, 0.0, 0x1.4c3a8675867a5p-857, 0.0, 0x1.46c84b4c3395fp-752, 0.0, 0.0, 0.0,
     0x1.7b56d78937393p-374, 0x1.6ea48ad31a1cdp-800, 0.0, 0x1.a4165851b4708p-206, 0.0,
     0x1.2dd70127ffbf2p-489, 0x1.bf217dd7a3f4bp-716, 0.0, 0.0, 0x1.7fc8a9dc42808p-239,
     0.0, 0.0, 0x1.5b92ec1548d6dp-690, 0.0, 0x1.2c0b85be16ffbp-17,
     0x1.bd7a551a80f64p-194, 0.0, 0x1.02bd8b132d829p-916, 0x1.971e8f9c366acp-481,
     0x1.bafbbf1c5e5d5p-887, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c181f01002e2p-754, 0x1.9a581f5d72621p-301, 0.0, 0x1.25f78cb1feeddp-287, 0.0,
     0x1.5248edeb3a52p-392, 0.0, 0.0, 0x1.06818f63aa8cp-813, 0x1.2623cb4b9ac39p-357,
     0.0, 0x1.fbca6845f8d4bp-563, 0x1.4947c929e64cfp-47, 0.0, 0.0, 0.0,
     0x1.8f8caf69dab02p-615, 0x1.8a04c485a158ep-357, 0x1.1b5e108a17817p-804, 0.0, 0.0,
     0x1.4b866aeb6f9d2p-402, 0.0, 0.0, 0x1.3d04456547d9fp-1009,
     0x1.3236b922c0072p-794, 0.0, 0.0, 0x1.5caf35f65a3e9p-613, 0x1.710cc777fdb75p-116,
     0.0, 0.0, 0x1.90153e0064b03p-127, 0.0, 0x1.48090a3a3a619p-219,
     0x1.cf3584292ab43p-1009, 0x1.305b12e9b6ff6p-1, 0.0, 0x1.6716e75be9154p-48,
     0x1.d74bc7403f7a3p-186, 0.0, 0.0, 0x1.dfc8681c22651p-776, 0x1.90dc00ec22b2p-769,
     0.0, 0x1.fc4de7d90a795p-46, 0.0, 0x1.3429fd66e4aa8p-808, 0x1.c0151749454fdp-223,
     0.0, 0x1.585fb26ab7751p-747, 0x1.ee3dbadf34fcdp-510, 0.0, 0x1.89039cde2fb84p-329,
     0.0, 0x1.06be77e6a5035p-90, 0x1.c7093d41a0be3p-113, 0.0, 0.0, 0.0, 0.0,
     0x1.bd35310db49c4p-179, 0x1.df24e7cb4fa37p-778, 0.0, 0x1.050378a38235cp-119,
     0x1.144b9955c1bbep-822, 0.0, 0x1.3439119549f2ap-739, 0.0,
     0x1.ba175b06febb7p-1006, 0.0, 0x1.bf732c2148df4p-763, 0x1.603ae58ff56d2p-994,
     0x1.a577c0aa67711p-382, 0.0, 0.0, 0x1.fb72c9d84bd41p-247, 0x1.1cb8e867a214ap-514,
     0x1.7210f402e1ca2p-666, 0x1.161524994c96ap-87, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f48b36dd46c9p-1022, 0.0, 0x1.9fd762740d0b1p-215, 0.0, 0.0,
     0x1.28baae3ae0ab8p-436, 0x1.71f3804b02fa4p-72, 0x1.ff558e0751cbcp-905, 0.0, 0.0,
     0x1.0d5b22dc4e017p-312, 0x1.031626363a2cep-343, 0x1.278dcf114043fp-595,
     0x1.8351638c2dabdp-976, 0.0, 0x1.52136220cd9ebp-465, 0x1.70af41a8cb5fp-262,
     0x1.2dfb5782ca80ap-666, 0.0, 0x1.9e88a3a1ed245p-21, 0.0, 0.0, 0.0,
     0x1.39781ae0d8464p-439, 0.0, 0.0, 0.0, 0.0, 0x1.be8b1d33801ccp-202,
     0x1.fd91109a9c8dfp-288, 0.0, 0x1.e51744c0c1796p-103, 0.0, 0x1.1e8221c292d3ep-72,
     0x1.f454ffc85b922p-712, 0.0, 0.0, 0.0, 0x1.c7e3bd7e283e4p-305,
     0x1.65cf76f559a73p-769, 0.0, 0x1.2dab4db674f64p-83, 0.0, 0.0, 0.0,
     0x1.bbb9ab303a71cp-899, 0x1.65dde3ff829bfp-49, 0.0, 0.0, 0.0, 0.0,
     0x1.fa0902a4322ddp-91, 0.0, 0x1.912c664a90c58p-640, 0x1.c76fa5c7ee0a9p-797,
     0x1.cd95200e9681fp-142, 0.0, 0.0, 0.0, 0.0, 0x1.4b786c908e9f4p-115, 0.0,
     0x1.0c032d2539ee5p-572, 0x1.789fb70cbb85bp-605, 0x1.a47319af8c749p-163, 0.0,
     0x1.9e236846e3e4ep-692, 0x1.e86fd36c77686p-710, 0x1.4ffdac75b897ep-96, 0.0,
     0x1.ce9eac3e92327p-47, 0.0, 0x1.2aa55f97bd7ap-132, 0x1.333b442c33edp-616, 0.0,
     0x1.939021583b036p-1007, 0.0, 0x1.37b31dcecc03dp-701, 0.0,
     0x1.f19f61de39d15p-798, 0x1.354a5caa25d72p-20, 0.0, 0x1.3083cf70da4b3p-876, 0.0,
     0.0, 0.0, 0x1.5ee2078831ba3p-270, 0x1.aad299e460f0bp-282, 0.0, 0.0, 0.0,
     0x1.93727b3c23289p-74, 0.0, 0x1.b8c83c89d27b6p-538, 0x1.7e9b385ba4cc7p-873, 0.0,
     0x1.e57402336e487p-623, 0x1.992dab1d9b8bcp-206, 0.0, 0x1.c1a403b5f341p-342, 0.0,
     0x1.35fb69e545ce6p-333, 0x1.56b56288f7201p-422, 0x1.3db1404f81623p-411, 0.0, 0.0,
     0.0, 0.0, 0x1.34f5d66ecc565p-205, 0.0, 0.0, 0x1.a04f96f14a545p-112, 0.0,
     0x1.4ae4652dbd248p-218, 0.0, 0.0, 0x1.3685f3263eb0bp-796, 0x1.6387b1aa94bacp-759,
     0.0, 0.0, 0.0, 0x1.fb9a9685b50dap-87, 0x1.5edf200fa12ebp-460,
     0x1.774e1e362aaf7p-770, 0.0, 0.0, 0x1.06f385a2d8b9cp-921, 0.0, 0.0,
     0x1.63109278e40f6p-709, 0.0, 0x1.b516aa69e2738p-985, 0x1.9a86bf6c50b61p-537, 0.0,
     0x1.c0995def206c6p-992, 0x1.09527e3839473p-480, 0x1.1d0d720a459bdp-40, 0.0, 0.0,
     0x1.54f6271a4213fp-561, 0.0, 0x1.e9bf18c3155bap-360, 0.0, 0x1.a4e027bbf6082p-257,
     0.0, 0.0, 0x1.e4b6c00b8d3e5p-760, 0.0, 0.0, 0.0, 0x1.f0cf7b343b108p-28,
     0x1.3bb4f5f3b412dp-692, 0x1.fd4bbc356420ap-167, 0.0, 0x1.d3809df8ffd07p-917, 0.0,
     0x1.47bb60161d92ap-1003, 0.0, 0x1.86c969ac5e5a3p-79, 0.0, 0x1.f627cd80694cfp-406,
     0x1.7e77fb9d886c5p-472, 0.0, 0x1.1930c8d198c77p-30, 0.0, 0x1.7de94f2593267p-300,
     0x1.3f5998ef55ed5p-554, 0.0, 0.0, 0x1.4a789a1b468f7p-705, 0.0, 0.0, 0.0, 0.0,
     0x1.c26e6b2497a63p-786, 0x1.56e9831fcfa9bp-209, 0.0, 0x1.3efe8279d9bb3p-361, 0.0,
     0.0, 0x1.d782ab3b4c335p-500, 0.0, 0.0, 0x1.65ebe42bb7f1bp-929, 0.0,
     0x1.b241898022e5bp-1002, 0.0, 0x1.609728bd168c2p-111, 0x1.963db81a08989p-13, 0.0,
     0.0, 0x1.4d46d2e7e968fp-683, 0.0, 0x1.f53b76849df62p-882, 0x1.7ee9463d8c315p-185,
     0x1.62edf9cde5705p-735, 0x1.7d0faa62dd5f3p-445, 0.0, 0.0, 0x1.cb5db815a35b9p-654,
     0.0, 0.0, 0.0, 0.0, 0x1.4afe6f543ba51p-475, 0x1.f84fb5eb7935dp-409,
     0x1.1e2b831a362efp-510, 0x1.5e65ab4a0df53p-121, 0x1.3927a9ae8fa51p-598, 0.0, 0.0,
     0.0, 0.0, 0x1.e7ea582131979p-161, 0.0, 0x1.bcc7756641e5cp-887,
     0x1.2e4bfbb17b4ddp-573, 0.0, 0.0, 0x1.92fb680ddee6cp-849, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8ae07d60b3082p-172, 0x1.33935d1a04bd2p-997, 0x1.5a3f10a84f123p-363, 0.0,
     0.0, 0x1.01d508b696ac8p-953, 0.0, 0.0, 0x1.366167ab96221p-636, 0.0, 0.0,
     0x1.d77382cd6ffecp-531, 0.0, 0x1.55de23af52214p-523, 0.0,
     0x1.81f766a8f2481p-1021, 0.0, 0x1.fd9a09acfa81ep-460, 0x1.f0584969144f9p-670,
     0.0, 0.0, 0x1.700261f0937d9p-223, 0x1.964dae15a26b7p-105, 0x1.77a09cbe00441p-646,
     0.0, 0x1.4c65a8c70a47cp-566, 0x1.49abd6c61b86fp-140, 0x1.23f75726a198dp-921, 0.0,
     0.0, 0x1.c9f0c7d9bc774p-268, 0.0, 0x1.7e2cfcfd52c75p-123, 0x1.9be44fa8ea35dp-423,
     0.0, 0.0, 0.0, 0x1.826693470b9f7p-464, 0x1.0293bffc84d78p-578,
     0x1.b5773e30d58a1p-709, 0.0, 0.0, 0x1.3296691757a54p-259, 0x1.af182c9768555p-111,
     0x1.1c51ab4720095p-651, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5e0518a63638dp-543, 0x1.83cc050ffc42p-806, 0x1.ed5b4e731a8a5p-979,
     0x1.01e9068fe2257p-625, 0.0, 0x1.b5e5347cac3dap-255, 0.0, 0x1.d490b4b158acbp-324,
     0x1.9c9cba5fe7a2dp-919, 0.0, 0x1.1404ec28e42fdp-165, 0.0, 0x1.d361558b0992ap-873,
     0.0, 0.0, 0x1.9983aacdf4dcdp-584, 0x1.cb3598d7c11adp-104, 0.0, 0.0, 0.0,
     0x1.f6be42304a2c4p-169, 0x1.7316f4b043eb3p-881, 0.0, 0x1.77df08bcbd535p-909, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e2c168a593a47p-336,
     0x1.e0d8770629007p-543, 0.0, 0.0, 0x1.c3649ae775c27p-69, 0.0,
     0x1.65e87330b2d87p-867, 0x1.a31675de2feeep-652, 0.0, 0x1.5ed245a95d43dp-143,
     0x1.c6892d88a43d2p-660, 0x1.b2e22bf28069bp-72, 0.0, 0x1.acf8400de53b9p-665,
     0x1.7b7bbd7e8817fp-593, 0x1.ba304c486e7f8p-180, 0.0, 0.0, 0.0,
     0x1.80b9127d6d138p-336, 0.0, 0.0, 0x1.26fdf2d74837dp-648, 0x1.ce12732063dadp-924,
     0x1.3bbf166a6830ap-799, 0x1.8ec0c19107c9bp-962, 0.0, 0.0, 0.0,
     0x1.29f234030a78cp-476, 0.0, 0.0, 0.0, 0x1.15f19447227bep-717, 0.0,
     0x1.e3ddc4fa137bfp-696, 0.0, 0x1.c39d4f6a11724p-238, 0x1.fe3406306ea17p-469,
     0x1.1c9569c2ebd5ep-453, 0.0, 0.0, 0.0, 0x1.b251e45ebb33dp-905, 0.0,
     0x1.bb938c2bf449fp-9, 0.0, 0.0, 0x1.c7b19c53670edp-55, 0.0,
     0x1.78e05b0d2e463p-157, 0x1.b30ae94b085cbp-755, 0x1.65994cdc88dddp-812,
     0x1.5aeb6836bc38p-205, 0.0, 0x1.bb28b69a5cc84p-484, 0.0, 0x1.5959b3c6a650dp-558,
     0.0, 0x1.64916d6c14a53p-498, 0.0, 0.0, 0.0, 0x1.66a2d0be8f969p-88,
     0x1.54d7365713ae2p-204, 0x1.e4ff5cdee1953p-554, 0.0, 0.0, 0.0,
     0x1.eb659c909854dp-74, 0.0, 0.0, 0x1.f5023e3f9864ap-432, 0x1.021513f33f5d3p-55,
     0x1.b541a75f84c3p-82, 0x1.6444a932d69dfp-456, 0.0, 0.0, 0x1.f16032c8445e4p-178,
     0.0, 0.0, 0x1.b893a768017f9p-354, 0.0, 0.0, 0x1.07c5dae3732d1p-982, 0.0, 0.0,
     0.0, 0x1.0bd99a36c80c9p-438, 0x1.3a30be365c3fdp-994, 0.0, 0x1.dd536bc70ca6ap-365,
     0x1.2e127ce4b24a8p-932, 0x1.90035efe83411p-403, 0.0, 0x1.96f796833475bp-968,
     0x1.1b4de3748b6f7p-49, 0.0, 0x1.8924a89021a4ep-665, 0x1.b774a8a3d7ba7p-204,
     0x1.fd26c84627698p-894, 0x1.12a8d90506082p-852, 0.0, 0.0, 0x1.29de6f5628addp-455,
     0x1.3d8e910f26edp-54, 0.0, 0.0, 0x1.7b8cf5c368d9ap-126, 0x1.257fe3381e44cp-414,
     0.0, 0x1.b4532b02481d3p-18, 0.0, 0.0, 0x1.0c5fc5a0605d7p-56, 0.0, 0.0,
     0x1.2ceffecd4eb13p-353, 0x1.9c9808a747f75p-520, 0x1.7a81fa62b3e75p-762, 0.0,
     0x1.76c7b3b3b08e8p-842, 0.0, 0.0, 0x1.23775cc4d20f4p-301, 0.0, 0.0, 0.0,
     0x1.ebc0644184077p-45, 0.0, 0x1.66ef5cc1aed49p-472, 0x1.b540ab5193c6bp-978,
     0x1.ed4d8b6e7094p-656, 0.0, 0.0, 0.0, 0.0, 0x1.6024734488369p-947, 0.0, 0.0,
     0x1.2707b1c8f9fa5p-955, 0x1.f2f6172b22fp-582, 0x1.08a7724ad67ap-64, 0.0, 0.0,
     0x1.0d0f16f97a433p-619, 0x1.9c35c9b44265ep-38, 0.0, 0x1.8ccd8e83e9b19p-953,
     0x1.a7d935be04d0bp-978, 0.0, 0.0, 0x1.71a2fcd87dafep-200, 0x1.6f23ecfdf2e36p-574,
     0x1.d4efdf593419fp-765, 0x1.2db786b2f3f79p-551, 0.0, 0.0, 0.0, 0.0,
     0x1.05c958e1ced21p-710, 0.0, 0.0, 0x1.adaeda9fa5d64p-665, 0.0, 0.0, 0.0,
     0x1.04680d36dcae7p-228, 0.0, 0.0, 0.0, 0.0, 0x1.81eda366dbec6p-680,
     0x1.40da49a7397dbp-323, 0x1.3ff1f1b4bf54fp-712, 0.0, 0x1.40b4596841014p-204,
     0x1.43361b67a9c1fp-15, 0.0, 0.0, 0.0, 0x1.b9d17d34613f6p-909, 0.0,
     0x1.0085789d7e28fp-564, 0.0, 0x1.da0950b9513b9p-765, 0x1.4b97acad08322p-965, 0.0,
     0.0, 0x1.074a64cf6ac86p-587, 0x1.c52799f39e9d2p-923, 0x1.a64b178ab8624p-652,
     0x1.c34e6c2edf245p-668, 0x1.7b86456eac588p-678, 0x1.c7eb3f71a71cdp-53, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb635405ccd01p-82, 0.0,
     0x1.25ca3aacc8806p-1000, 0x1.b871a3749d1ffp-972, 0x1.6bf44956da168p-110,
     0x1.b366eb6a9aeecp-708, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.169d81a99f459p-939, 0x1.c4af94c3ba06ep-940, 0.0, 0.0, 0.0,
     0x1.579c0c0c31011p-932, 0.0, 0x1.82c97a68763aep-899, 0x1.cf57a73ab53d6p-694,
     0x1.2ecf25afe33afp-200, 0x1.fe491d99f26e3p-699, 0.0, 0x1.e5f5cbe3d5585p-788, 0.0,
     0.0, 0.0, 0.0, 0x1.f31fd518f9caep-300, 0x1.43ecf4424b1fdp-257,
     0x1.89ed85b9b1759p-503, 0x1.739254d80431dp-430, 0x1.61520ad4efbd8p-996, 0.0,
     0x1.8fd86c729da72p-989, 0.0, 0x1.c921ce8480c16p-243, 0x1.3b309e8a31522p-932, 0.0,
     0x1.10179d8b1bc4bp-653, 0.0, 0x1.a8aed5623afe4p-788, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4528b1aa32224p-620, 0x1.1a669e9d225b2p-972, 0x1.408df9be7fe4ep-755,
     0x1.d73f031a5895ap-197, 0x1.5ddb4377b9cfep-74, 0x1.013cdfde520cp-264, 0.0, 0.0,
     0x1.9a236535bc3c2p-306, 0.0, 0.0, 0x1.4bb52ed702f2fp-548, 0.0,
     0x1.1a788eda96d05p-980, 0x1.ebe784546b98fp-682, 0x1.f06dbe7a26784p-466,
     0x1.0e3a158fc254dp-799, 0x1.63dfaeb7ed963p-55, 0x1.432416656f762p-545, 0.0,
     0x1.3c4864e4264adp-292, 0x1.f83f78982ec9ep-463, 0.0, 0.0, 0x1.2ca8f2be6b74dp-159
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0;
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
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_asind1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_asind1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asind1_u35purecfma bench acc %la\n", global_bench_acc);
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
