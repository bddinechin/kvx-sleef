/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid1_u35purecfma.c --function \
 *     Sleef_finz_sincospid1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.9823eef3d99c9p-109, 0.0, 0.0, 0x1.bab67e840b5b2p-102, 0.0, 0.0,
     0x1.37e2a317474f8p-302, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9f9806f9f353p-480,
     0x1.7dfb051e50debp-131, 0x1.979b76c282022p-640, 0x1.98de53dae14e9p-998,
     0x1.7bfd277eb9073p-811, 0x1.11ec7f308465ep-981, 0x1.437f9f8f4effbp-700, 0.0, 0.0,
     0.0, 0x1.d901c59b11cd5p-956, 0x1.893598597e046p-861, 0x1.cefa475c7de73p-265,
     0x1.fdf2cfe2320e2p-827, 0.0, 0.0, 0.0, 0.0, 0x1.f4c033907eb13p-744, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.28a0c101f0981p-104, 0.0, 0x1.091f0f4392529p-283, 0.0,
     0x1.320867d9c27f7p-742, 0x1.8785dbcafe14bp-770, 0x1.4bc5d250bb42fp-150, 0.0,
     0x1.79874c9af9441p-239, 0x1.d27d171c1d6dcp-450, 0.0, 0x1.5f48df35ab147p-355,
     0x1.55cc861121aa7p-21, 0.0, 0x1.da273b28fd3abp-238, 0x1.5151fe097a85ap-866,
     0x1.88e55e4f4c858p-770, 0x1.a05feca18d941p-50, 0.0, 0.0, 0.0,
     0x1.a821e0e4b8a46p-113, 0.0, 0.0, 0x1.36ae204a0158ep-324, 0x1.b18f5523d9465p-627,
     0.0, 0x1.9b86fbe164025p-771, 0x1.911dfb5ee3fd7p-497, 0x1.18e17e57a7476p-308,
     0x1.db5fcebb8d62p-352, 0x1.c51a66964445ap-140, 0.0, 0.0, 0x1.145e1ad4d1ab6p-746,
     0.0, 0.0, 0.0, 0x1.2e0cb4f86561dp-292, 0x1.b6f0f209a087dp-935,
     0x1.e70c55600e918p-985, 0.0, 0.0, 0x1.a0f9ea2f82751p-835, 0.0,
     0x1.5f82604ac12e3p-20, 0x1.463d03dd44f38p-849, 0.0, 0.0, 0.0,
     0x1.a72db947183d5p-234, 0x1.6c2ba5d18438cp-6, 0x1.2afccceee6618p-471, 0.0,
     0x1.a4a39d95406f4p-92, 0.0, 0.0, 0x1.8202d268f3d2p-344, 0x1.0fc39f1b2e3d8p-298,
     0.0, 0x1.6ae4ddffbe97fp-672, 0.0, 0x1.af780b36faceap-947, 0x1.0e9201a8a90f9p-707,
     0x1.3b7bca7911ec4p-298, 0.0, 0.0, 0.0, 0x1.828a8a1726695p-954, 0.0,
     0x1.354d59ded021bp-47, 0x1.4b1e1ade9efb8p-910, 0.0, 0x1.9c391616d7a0bp-252, 0.0,
     0x1.a996279714849p-897, 0.0, 0.0, 0.0, 0x1.7f39ceaf4f5c6p-269, 0.0,
     0x1.3ce15168cbed4p-1010, 0.0, 0x1.d421b5cb4e44dp-226, 0.0, 0.0,
     0x1.09333a300ee35p-983, 0x1.53a596646bd5p-420, 0.0, 0.0, 0.0,
     0x1.510480b3f45a2p-224, 0.0, 0.0, 0x1.008abbad54d9dp-581, 0.0, 0.0,
     0x1.4cecdc51cb4f8p-378, 0x1.7b20ac9734c51p-625, 0.0, 0x1.30ee76326639bp-961,
     0x1.af83226c86e9cp-623, 0x1.2df56df625381p-214, 0x1.7f7d2b7868e62p-827,
     0x1.031cd38d30c1ap-273, 0.0, 0x1.d0e2bc107d049p-268, 0.0, 0x1.155835774a432p-750,
     0.0, 0x1.3bc86bc2c3a4ap-23, 0.0, 0x1.9a43a6e55a643p-694, 0x1.a462868093b68p-828,
     0.0, 0x1.fb87acf9fb505p-501, 0.0, 0.0, 0.0, 0x1.2a248e1fbddcep-147,
     0x1.7ba7938492ee3p-97, 0.0, 0x1.8a13686f3eb99p-377, 0x1.8580ea3b387edp-969, 0.0,
     0x1.eaa4e0d135a31p-998, 0x1.ff96ff6fddde7p-385, 0x1.ea4be315803a4p-850, 0.0, 0.0,
     0.0, 0.0, 0x1.081780fd3295dp-855, 0.0, 0x1.c523ed7a2727bp-849,
     0x1.c57f6953f339ep-946, 0x1.f446898820144p-331, 0x1.abd84c3896c03p-212,
     0x1.dc6c30c13074ep-244, 0.0, 0x1.a815f02de5b3fp-536, 0x1.b6f10e6b0b90dp-108, 0.0,
     0x1.8b166c04ead7ep-787, 0x1.d40a73a5e01fcp-628, 0.0, 0x1.6bd831d52d777p-262,
     0x1.2f75c46ab4604p-894, 0x1.583d761d5686fp-826, 0x1.3fc16e977ea8cp-288,
     0x1.9a27e85245648p-804, 0x1.815b54c821d8cp-864, 0x1.805bda4142638p-887,
     0x1.9d5dbc20152f4p-513, 0x1.d488133480b52p-545, 0x1.5261eee266ce6p-775,
     0x1.dcaa14de09911p-133, 0.0, 0.0, 0x1.d906657377691p-269, 0.0,
     0x1.a6b1fdad8cbb6p-272, 0x1.d2a80655ae1dep-311, 0.0, 0x1.f4cb257a1a584p-199,
     0x1.43e02fd5dd0b6p-453, 0x1.50cb5ade63234p-26, 0x1.2d3b7ff4c686dp-715, 0.0, 0.0,
     0.0, 0x1.7c9e174484eebp-472, 0x1.e40f1152250e3p-1015, 0.0,
     0x1.d6d1839e7a467p-402, 0.0, 0x1.414eb536a70dfp-727, 0.0, 0x1.a1b6a49ce5453p-134,
     0.0, 0.0, 0.0, 0x1.d15f97033d4cep-988, 0x1.75e370b022e27p-562,
     0x1.b879ae985dbeap-466, 0.0, 0.0, 0x1.8c7080d7bfcb1p-747, 0.0,
     0x1.b569c6a05192p-867, 0x1.de2cd4995c3a1p-322, 0.0, 0x1.597d5d92ab22fp-279,
     0x1.0169c4096b4e7p-51, 0x1.e62e8fc03d027p-144, 0x1.f9041af5f378bp-412, 0.0,
     0x1.6a64f1ed1279dp-78, 0x1.cad3fcb5d6c8dp-439, 0.0, 0.0, 0x1.727a0463d36acp-35,
     0.0, 0x1.50590744bdd7fp-112, 0.0, 0x1.292d7543e628bp-79, 0.0, 0.0, 0.0,
     0x1.52927cd9c0752p-884, 0x1.643f64c79e317p-813, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf33b808240bdp-71, 0.0, 0.0, 0x1.ed0a618a965e8p-132, 0x1.1c15b277319adp-505,
     0.0, 0.0, 0x1.a92bffa852cd8p-621, 0x1.8894fd988d03cp-266, 0x1.8455b6dd9b071p-518,
     0x1.aea9a62f8e2cdp-484, 0.0, 0x1.43daf657e6751p-858, 0x1.271c2b7790cf7p-871, 0.0,
     0.0, 0x1.5e75fdc3724fep-37, 0x1.e6a619a48f7a3p-240, 0.0, 0.0,
     0x1.9bb049ca38097p-107, 0x1.8589cebfbd51cp-465, 0.0, 0x1.06f02c5176c4p-317, 0.0,
     0.0, 0.0, 0x1.2a7ee714b0409p-473, 0.0, 0x1.b8e959fee2909p-135,
     0x1.2ac0d75666ff7p-750, 0x1.63cbd30688dfep-192, 0.0, 0x1.741b809897983p-12, 0.0,
     0.0, 0x1.b505121d727fbp-308, 0x1.5a3ab0012ced8p-284, 0.0, 0.0, 0.0,
     0x1.73cfaf9b9b466p-491, 0x1.8294d552405dp-790, 0x1.a2b5b51801076p-807, 0.0,
     0x1.a3b8d4a33719ap-122, 0x1.57172a8022425p-142, 0.0, 0.0, 0.0, 0.0,
     0x1.0451e7468b166p-560, 0.0, 0x1.84af9a115a8d2p-513, 0x1.5b9a14213164ep-69, 0.0,
     0.0, 0x1.98aa0f7951f22p-319, 0x1.1b37ed0a4485cp-390, 0.0, 0x1.68bd1e5f377c3p-232,
     0.0, 0.0, 0.0, 0x1.a795ed439fc71p-256, 0.0, 0x1.309d9984da8d8p-148,
     0x1.0bc8d30e68bd8p-271, 0.0, 0.0, 0x1.b649fa9d03a6ap-297, 0x1.bbdd9a857cd83p-95,
     0.0, 0x1.d672f091b47e1p-10, 0.0, 0.0, 0x1.d0abf7d448414p-283,
     0x1.b5cb38558df8bp-565, 0x1.a99ba5bd2186cp-974, 0.0, 0.0, 0.0,
     0x1.c81a24825cfc8p-40, 0.0, 0x1.daea170b3abb1p-691, 0x1.ef69f8f21deb7p-736,
     0x1.3052a815075p-543, 0x1.db83e5ba8cb2ap-194, 0.0, 0.0, 0.0, 0.0,
     0x1.797a5b7f2639ap-1020, 0.0, 0.0, 0x1.f604ab64ea4aap-364,
     0x1.7430288c6d60ep-756, 0x1.1e4b8c35941c8p-49, 0x1.28c5e84a0bfc4p-792,
     0x1.55877c6f3843dp-267, 0.0, 0x1.a70cb85932f8ap-391, 0x1.5b95443b11fa2p-607,
     0x1.bf8b3e25ecabap-94, 0.0, 0x1.d698dd94c6965p-999, 0.0, 0x1.c0aaf7bb22de6p-38,
     0.0, 0x1.bed38171357bcp-859, 0x1.5788c80dcac6fp-572, 0x1.ab6c3c2a3b3eap-693, 0.0,
     0x1.35f5daafad2c6p-251, 0.0, 0x1.c20ad8ffff035p-227, 0.0, 0.0, 0.0, 0.0,
     0x1.cb0b2d94b193ap-467, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.88b9f17a93954p-108, 0.0,
     0.0, 0x1.4fa1cebc09ba9p-320, 0.0, 0.0, 0x1.1549361ce90e7p-400,
     0x1.bca5713d569f7p-325, 0x1.082eb70188f85p-51, 0x1.4866dfa0a70ffp-36,
     0x1.f0a216198f49cp-662, 0x1.63da2e9c20968p-684, 0x1.a568bad53ab3ep-245,
     0x1.69e0141042fa3p-857, 0.0, 0x1.4a0fd632fe676p-766, 0.0, 0.0,
     0x1.b9b6834411058p-63, 0x1.08251ddf83419p-654, 0x1.7982d8e3d8a26p-468,
     0x1.ba952ca8a800ap-884, 0.0, 0x1.5fdbcbee69ac1p-623, 0x1.7db1c1862516cp-528, 0.0,
     0x1.1b9b1309f990ep-627, 0x1.50342d2f00f08p-498, 0.0, 0x1.4460c3d651e6ap-88,
     0x1.a0f0dca1124d8p-511, 0.0, 0x1.c29c524f39fe3p-389, 0x1.c1464383ddffap-61, 0.0,
     0.0, 0.0, 0x1.c28e66823b494p-379, 0.0, 0.0, 0x1.46df6af551f85p-32,
     0x1.92463609f4132p-64, 0.0, 0x1.990e14b844121p-733, 0.0, 0x1.7c39574172c9p-939,
     0.0, 0.0, 0x1.1d8086bbccba1p-219, 0x1.1ef0d89e3572dp-8, 0x1.c5e3790573b77p-757,
     0.0, 0.0, 0x1.a43af12ff0952p-684, 0.0, 0x1.22abd63b02336p-723,
     0x1.f6d8a67c7db5ap-52, 0.0, 0x1.9235a277a9535p-644, 0x1.a2d86329e89ep-9,
     0x1.cc19b0eb0a532p-313, 0.0, 0x1.f330011902c11p-437, 0x1.702609f68aed1p-914, 0.0,
     0.0, 0.0, 0.0, 0x1.7dd5dba3c06f5p-543, 0.0, 0.0, 0.0, 0.0,
     0x1.3750ce9ce8241p-372, 0x1.6469dc2465eaep-751, 0x1.3d20a6ae7897ap-908,
     0x1.05d7e4958fab6p-733, 0.0, 0.0, 0x1.60309fe02fa6fp-652, 0x1.b238703f16278p-696,
     0x1.391d146c4a0fp-931, 0.0, 0x1.d6bb5e0138987p-995, 0x1.d954accfe4ed8p-536,
     0x1.012f726167d17p-37, 0x1.930533465a7ep-749, 0x1.3970a1acdd6f4p-496,
     0x1.46a416eb8670cp-919, 0x1.07d0c73436cfdp-220, 0x1.985c087dbf28fp-873,
     0x1.58c4692bd3ffap-776, 0.0, 0.0, 0.0, 0x1.8301c892f81c1p-19, 0.0, 0.0, 0.0,
     0x1.1464d996f535ep-842, 0.0, 0x1.86e8083c5dacp-661, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.42665df55f6bfp-561, 0.0, 0.0, 0x1.39c9125977b56p-488,
     0x1.34a35315ebfb1p-469, 0x1.abfe5e48164bfp-903, 0.0, 0x1.de75c369587bcp-641, 0.0,
     0.0, 0x1.36dffacf3d56fp-1002, 0.0, 0.0, 0x1.c2a18f8ac8ac5p-1, 0.0,
     0x1.ffeea11d29ac4p-358, 0.0, 0x1.ec5842de59d68p-414, 0.0, 0x1.c6abb0767b84p-781,
     0x1.28493f044ce61p-980, 0x1.2edf124f88323p-987, 0.0, 0.0, 0.0,
     0x1.079fce2899c77p-832, 0x1.b36240748cddep-487, 0x1.d7534926d69bfp-534,
     0x1.153886f58076bp-28, 0.0, 0x1.95bdb2ce8ad02p-457, 0.0, 0.0, 0.0,
     0x1.aa631dfbbd4bfp-526, 0x1.34ce8a448c81p-876, 0x1.b19d8e7d4bf04p-103,
     0x1.614bab0952f11p-762, 0.0, 0.0, 0x1.85cec021ebfefp-189, 0.0, 0.0, 0.0,
     0x1.dc68df94ae45ep-890, 0.0, 0x1.453064052bc2fp-688, 0.0, 0x1.810077b8c2216p-43,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17affe1f27ecfp-226, 0.0, 0.0,
     0x1.d1648c76fb3bp-502, 0.0, 0.0, 0.0, 0x1.c0b3fc0c72392p-648,
     0x1.e3f61fb79e439p-275, 0x1.948380185ff32p-545, 0x1.7c13663c2a362p-131, 0.0, 0.0,
     0x1.c8d3602730c57p-374, 0.0, 0.0, 0x1.7b22995a6851ep-230, 0.0,
     0x1.aeb38452bcb2p-412, 0x1.a15b4eba9562fp-823, 0x1.7a4449464e80fp-102, 0.0, 0.0,
     0x1.c84bf869768f4p-642, 0x1.471f43f039c81p-1014, 0x1.1f1105722b462p-820,
     0x1.270443cd88973p-329, 0.0, 0x1.83215cb26df6ep-137, 0x1.9133d945f78c7p-359, 0.0,
     0x1.e679f1d58877cp-504, 0x1.861ccb6eaeaabp-386, 0x1.d2422506944dfp-354,
     0x1.57b719125c5eep-428, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b798e3b0710e5p-153,
     0x1.b332852761dcdp-299, 0x1.75a81abf12efep-561, 0x1.ade95eadc1526p-727,
     0x1.37cca987f5744p-83, 0x1.df2723a741fd1p-775, 0.0, 0x1.875acbfac673ep-334, 0.0,
     0x1.b535eba5b0f59p-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ef37a98d29fdp-878,
     0x1.29c02e65aafa5p-706, 0.0, 0.0, 0x1.81c7febcf0e7ep-869, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.265f24a54871ap-119, 0.0, 0.0, 0.0, 0.0, 0x1.c32551b51f3f9p-217, 0.0,
     0x1.09e38f9a299d2p-718, 0x1.2b20eaa610c01p-58, 0x1.33f71fdafabccp-943, 0.0, 0.0,
     0x1.3273a448a908ap-269, 0x1.0fd89683614fap-701, 0.0, 0.0, 0x1.8bd47bf13e781p-85,
     0x1.bd8808654f383p-863, 0.0, 0.0, 0x1.76bb86e3ad143p-22, 0.0,
     0x1.ada94be53289ap-510, 0x1.450d5a03edc42p-340, 0x1.5f25eb337cddbp-483,
     0x1.ce31068fdb439p-556, 0x1.68597192bb384p-614, 0.0, 0.0, 0.0,
     0x1.7f7e628289fe8p-1008, 0x1.293145bd0e647p-488, 0.0, 0.0, 0x1.9c4ffee781563p-53,
     0.0, 0x1.fe2378aa4e2f1p-361, 0.0, 0.0, 0x1.9f35fdcae9ae5p-739,
     0x1.594af65199d51p-360, 0.0, 0x1.6d48d86354dd6p-781, 0x1.4370feddb77e8p-431,
     0x1.11a7e20021b94p-191, 0.0, 0.0, 0.0, 0.0, 0x1.6c7ab4f616641p-458, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f76d733242c8cp-88, 0.0, 0x1.b7b226a599892p-351,
     0x1.5413b5e89405fp-794, 0.0, 0x1.4810287b1562bp-422, 0x1.05435f1927242p-897, 0.0,
     0x1.4f475bd90cd59p-410, 0.0, 0x1.d7e829b6f2704p-985, 0x1.3eefc0ebf3a85p-719,
     0x1.64e3fe2f8ed54p-691, 0.0, 0x1.78bb0f0f60bfbp-329, 0x1.2dddb602cd4b8p-437, 0.0,
     0.0, 0.0, 0.0, 0x1.19c3efc288911p-930, 0x1.9d3a696fedcp-792,
     0x1.6c51e52ffda45p-80, 0x1.af7ec28be649bp-920, 0x1.69aa09ec18714p-948,
     0x1.60d9c7ee8c2b7p-1013, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b19eac9870bb1p-683, 0.0, 0.0, 0x1.07cf7d038b329p-531, 0.0,
     0x1.a74bd91b6afd7p-408, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a4a97b728af8p-662, 0.0,
     0x1.e354febdf32a3p-777, 0x1.49bf3a177bb7fp-923, 0.0, 0x1.e9e716640b86cp-979, 0.0,
     0x1.b252c6f2fe099p-820, 0.0, 0x1.420bd6b0de86p-426, 0x1.63d68beceac06p-893,
     0x1.8a3ecc873d9c5p-251, 0.0, 0x1.3c0634f3fa427p-312, 0.0, 0.0, 0.0,
     0x1.a78df1328a358p-418, 0.0, 0.0, 0x1.c07a9669f4075p-515, 0x1.a234bd1b3f15ep-656,
     0x1.1090a9f9ac22ep-46, 0.0, 0.0, 0x1.a2b77945633fbp-883, 0.0,
     0x1.2f4b898673b19p-117, 0.0, 0.0, 0x1.75beef2d0dab7p-558, 0.0,
     0x1.1f95cac51bf99p-543, 0x1.0b7e8a094752bp-586, 0.0, 0.0, 0x1.286e1d83ff464p-563,
     0x1.cf61776422e1ep-700, 0.0, 0.0, 0x1.37fe298ad3d55p-868, 0x1.2220f3a79f766p-156,
     0x1.025745ca92282p-70, 0x1.5213d357f0125p-612, 0x1.4be0daba09972p-754,
     0x1.7721827ecdcdbp-999, 0.0, 0x1.8adb9bc2b46c1p-9, 0.0, 0x1.cbffbcaf8eba1p-838,
     0x1.2bfbb394f3105p-635, 0x1.b17e5b0f43be9p-689, 0x1.8cc770bd2533cp-776, 0.0, 0.0,
     0x1.86f6f18a9c386p-653, 0.0, 0x1.4076d44f26344p-600, 0x1.a016f8c0e5a91p-921, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1c3a0fe680e2bp-262, 0.0, 0.0, 0x1.4abc29b93f93dp-530,
     0x1.4bcaaa41b058ap-782, 0.0, 0.0, 0.0, 0x1.b82bbec425c7bp-219,
     0x1.9847a092b2118p-357, 0.0, 0.0, 0x1.466d3e138d0bfp-306, 0.0,
     0x1.48b68747dfe83p-612, 0.0, 0x1.adcca2c02bffdp-618, 0x1.7bbf963073df7p-966,
     0x1.882d9a68163fap-344, 0.0, 0x1.7ca1e9c8248bdp-534, 0x1.329b84bb095b3p-219, 0.0,
     0x1.1f9ae2ee178e3p-365, 0.0, 0x1.f745cfc108fb7p-900, 0x1.75fbb4fa3782cp-22,
     0x1.f34c94e8308dap-218, 0x1.23ccae9f5e23cp-976, 0.0, 0x1.5aaca974fd9b1p-79,
     0x1.664e6cfb4f888p-539, 0x1.cc60761c59869p-720, 0x1.fb2ebd00342cp-771, 0.0,
     0x1.043e85c2ca4d1p-804, 0x1.8982d210327e7p-478, 0.0, 0x1.46fd7e69c5a62p-994, 0.0,
     0.0, 0x1.307df0e93d86bp-548, 0x1.1c708cfffd2b8p-279, 0x1.3772a2e9eaa49p-68,
     0x1.ed552a9fdb365p-963, 0x1.82082c78f2fa4p-857, 0.0, 0x1.30a3a1959fad2p-196, 0.0,
     0.0, 0x1.8579a9881aa27p-624, 0.0, 0.0, 0x1.7080627569c3cp-611, 0.0,
     0x1.d9406c4a83b3p-466, 0x1.42f072f5de306p-682, 0x1.25824138fddf7p-265, 0.0, 0.0,
     0.0, 0x1.4d95d7e9f3bep-215, 0.0, 0.0, 0x1.0ee55d1b00ef7p-541, 0.0, 0.0,
     0x1.53d6f480a98b8p-238, 0.0, 0.0, 0x1.059c170b886bap-585, 0x1.3b536ac5a8f6p-166,
     0x1.b318defa0186dp-576, 0x1.49d8943228bdcp-223, 0x1.fadb89fb04624p-549, 0.0,
     0x1.e83dfe0f68724p-511, 0.0, 0x1.70c3f111389aap-1022, 0.0, 0.0,
     0x1.d224248a86aa9p-377, 0x1.b13f375f40d94p-160, 0.0, 0x1.4e41f94dd7cp-573,
     0x1.1e7b724ce818bp-205, 0x1.0f5b4355243e8p-739, 0.0, 0x1.13c20af2adc8p-620,
     0x1.952e185f81dbfp-828, 0x1.9478cd6fb245bp-702, 0x1.4d1e6b27ab2cdp-40,
     0x1.29c7ac482bbddp-62, 0.0, 0x1.7f6d645ffa076p-361, 0.0, 0.0, 0.0,
     0x1.e7d1920ce7142p-476, 0.0, 0.0, 0.0, 0.0, 0x1.4261d9ae40e47p-610, 0.0,
     0x1.f6bb48b30752fp-883, 0x1.4858906365b3ap-944, 0x1.65a6aa2750d82p-441, 0.0,
     0x1.c3c52a11a91fcp-460, 0.0, 0x1.c0eecc4ba5c02p-815, 0.0, 0.0, 0.0, 0.0,
     0x1.6728fa9f26e39p-445, 0x1.e0a4a82e47865p-413, 0x1.068367e1daec3p-66, 0.0, 0.0,
     0x1.fecc8fecb9243p-138, 0x1.fb5dce8fad5a5p-430, 0.0, 0x1.6c1685bff7b7dp-670,
     0x1.d727f31b419ccp-662, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33be7ec0a70e1p-179,
     0.0, 0x1.86bfc1051259bp-813, 0x1.e836141cd6949p-22, 0x1.9b5a76d8f3252p-583,
     0x1.6d220b77cc01ep-790, 0.0, 0x1.3bf01ba317f28p-905, 0.0, 0x1.781a64f785e11p-301,
     0x1.838826f521b26p-812, 0x1.9fb716dc14855p-50, 0.0, 0.0, 0x1.8d5e905eeaecap-632,
     0.0, 0x1.b57032c83c9e4p-739, 0x1.0ac4d60921ea2p-42, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.684f7b5f48f93p-674, 0x1.07811c95db36dp-278, 0x1.83c3dbe8fc227p-607,
     0x1.73b9d7640971bp-974, 0x1.3d78a29d5f75dp-498, 0x1.463805767ba9dp-1010,
     0x1.74b3facb172dbp-364, 0.0, 0x1.a29e34277fb88p-971, 0x1.62525cde39fe9p-254, 0.0,
     0.0, 0x1.9aa452d06e6a2p-122, 0x1.aff3fb2172364p-594, 0x1.736c59fc6f032p-800, 0.0,
     0x1.a1b498707b26dp-442, 0x1.ddee8707535edp-465, 0x1.1a0c8d8537941p-516,
     0x1.793b4fa7bd58ep-941, 0.0, 0x1.fbdd3b9e20f5p-471, 0.0, 0x1.ca0c9bfdac15cp-306,
     0.0, 0.0, 0x1.1d8d758566f21p-64, 0.0, 0x1.1b4cd3251da1ep-800, 0.0,
     0x1.354d9c58e564dp-625, 0.0, 0.0, 0.0, 0x1.0e294df623ca5p-583,
     0x1.9abbbce6a31e1p-969, 0.0, 0.0, 0x1.295a77e6b82f2p-857, 0x1.fe20e4498c5e4p-693,
     0x1.0f1b198dc1e85p-195, 0.0, 0.0, 0x1.f55fa09deaf8fp-662, 0.0,
     0x1.30bddb28d897fp-462, 0x1.ff28c6a290d51p-49, 0x1.72cdc4bb19ca6p-1, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.44460a6e8f791p-648, 0.0, 0x1.c5eb99a82cc3p-267,
     0x1.e4d4d644db9e1p-623, 0x1.9c50e7e7e1705p-244, 0.0, 0x1.195ac12410d9bp-722,
     0x1.bea7d059766a7p-537, 0.0, 0x1.e7e5a3019488cp-688, 0.0, 0x1.2d7b57ce152ap-513,
     0.0, 0x1.9a54757ac35d7p-505, 0x1.ca03210df7751p-203, 0x1.aad3cd8362f1fp-341, 0.0,
     0.0, 0x1.608ed46a1f287p-558, 0x1.d7c87bad6b6ddp-172
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_sincospid1_u35purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sincospid1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospid1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
