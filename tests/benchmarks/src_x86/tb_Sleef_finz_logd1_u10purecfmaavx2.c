/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd1_u10purecfma.c --function \
 *     Sleef_finz_logd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.6436118f76fe1p-372, 0x1.16d86103a5f41p-185, 0.0, 0.0, 0.0, 0.0,
     0x1.5381455e79ac6p-988, 0x1.03d5f8e96f911p-1003, 0.0, 0.0,
     0x1.2016b32b65682p-778, 0x1.267d7b244e7a7p-577, 0x1.ed655456d0e47p-565, 0.0,
     0x1.5b4c5120945d9p-872, 0.0, 0.0, 0.0, 0x1.a61743fb39269p-347,
     0x1.8d006bc075005p-818, 0.0, 0.0, 0x1.b97ad1492f787p-960, 0.0, 0.0,
     0x1.7b9a3bf8bcc69p-126, 0x1.0df952fbe789ep-886, 0x1.7c9e180c00466p-899,
     0x1.76022d1a1c5ebp-512, 0.0, 0x1.9a410c1287edbp-661, 0.0, 0x1.c91af4c911321p-884,
     0.0, 0x1.4535fa39726cap-455, 0x1.aa06404ff6608p-932, 0x1.bc3296ae4de92p-995,
     0x1.e0383ddf1fafep-879, 0.0, 0.0, 0x1.a651d76e19d4bp-229, 0.0,
     0x1.b3ba1703692dap-627, 0x1.6399a016d74fp-953, 0.0, 0.0, 0.0,
     0x1.4f07cc660b972p-716, 0x1.f5a1077a97d88p-736, 0x1.141a6dba4b5dfp-625, 0.0, 0.0,
     0x1.4360d7e60b7cp-765, 0x1.9d162e9b1ba99p-992, 0.0, 0.0, 0x1.3089bf78f4c0ap-780,
     0.0, 0.0, 0.0, 0.0, 0x1.ab8bc3032800dp-166, 0.0, 0.0, 0x1.31affb3c6119fp-673,
     0x1.4fcf47364a4bap-783, 0.0, 0.0, 0x1.a4cd7a89d341fp-45, 0x1.3a9b50470ece9p-619,
     0.0, 0x1.92f4f0b457f72p-907, 0x1.5ff522045700ep-887, 0x1.17c083e594b97p-502, 0.0,
     0x1.90e4cac014086p-836, 0.0, 0.0, 0.0, 0x1.9c1240db67325p-995, 0.0,
     0x1.60f942e1a72d1p-1002, 0x1.49c20f22b2118p-751, 0.0, 0x1.0b6aca04b85e1p-525,
     0x1.1fa891809fcd6p-333, 0x1.a90d8998a5ee8p-240, 0x1.d43cb509f477cp-171,
     0x1.f411f3b133bf9p-1012, 0x1.e04644f2afd1ep-520, 0x1.b71e564aae2d3p-291, 0.0,
     0x1.23f83aabf0ee1p-936, 0x1.c41aa51e3eb0cp-490, 0.0, 0.0, 0.0, 0.0,
     0x1.40d9174081bcap-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a593298a45aacp-110,
     0.0, 0x1.8803d831881aap-894, 0x1.c0a5b1347451ap-250, 0.0, 0.0,
     0x1.3591cc34300fcp-528, 0x1.bf2ac1b2a2df7p-716, 0.0, 0x1.95b51889a08b7p-48, 0.0,
     0x1.7f234d933c7d3p-67, 0x1.7f1ddbbad3089p-645, 0x1.4caabc3051535p-694, 0.0, 0.0,
     0x1.5f0f6792a883cp-877, 0.0, 0.0, 0x1.bd7fd04417312p-173, 0x1.efc6bdf7cc229p-280,
     0.0, 0x1.de2215289eb3dp-36, 0x1.e05a7230bf3b8p-522, 0.0, 0.0,
     0x1.d09c69504262ap-335, 0.0, 0.0, 0x1.d46fcde1e7524p-501, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e01df20c6ff66p-601, 0x1.a91edf3fd9216p-928, 0.0, 0.0,
     0x1.1372cf667b001p-457, 0x1.d3a1658b875a3p-217, 0.0, 0x1.350dfd9b905bbp-79,
     0x1.326cb04fdd7ddp-454, 0x1.dc458649000b8p-512, 0x1.1ca86174bdfefp-909,
     0x1.44a873625847p-441, 0x1.0fb70690fe1bcp-507, 0x1.4a7153c5cb60ep-67,
     0x1.88359317f9c13p-666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2ebe8082f7da8p-143,
     0.0, 0x1.13876cca3cfdep-536, 0.0, 0.0, 0.0, 0x1.5f934554c7612p-1017, 0.0,
     0x1.46aa219c19e61p-367, 0.0, 0.0, 0.0, 0x1.e3dc56b4a2725p-263,
     0x1.1798b2efc85d3p-993, 0.0, 0.0, 0x1.a440f52ef63bbp-957, 0.0, 0.0,
     0x1.adf2e2d8179f7p-150, 0x1.3caa8191b07a4p-251, 0.0, 0.0, 0.0, 0.0,
     0x1.f4e41341432a2p-108, 0x1.d24037d3c81d7p-367, 0.0, 0.0, 0x1.3524fb86776d8p-164,
     0x1.c340a2f13a6f2p-564, 0x1.dc33958e7eeb8p-569, 0x1.28528b7313f07p-287, 0.0, 0.0,
     0.0, 0x1.17fcaa01b5a4fp-422, 0x1.70e3380bfb0b2p-110, 0.0, 0x1.a5d27a8f71088p-225,
     0x1.5a9ec5ba7e46bp-498, 0.0, 0x1.91a10976fa813p-894, 0x1.1d2cd135343dep-426, 0.0,
     0x1.bba4d2464f3c5p-980, 0x1.e9b99897e7492p-613, 0.0, 0x1.b6b14e6ec85b7p-903,
     0x1.09430f0af4033p-1016, 0.0, 0.0, 0.0, 0.0, 0x1.cb005c3fa52a9p-532, 0.0, 0.0,
     0x1.26ba026ed477p-865, 0x1.8ceefd92a9246p-793, 0.0, 0x1.8d5631bafbef2p-342, 0.0,
     0x1.4583324158343p-271, 0x1.470fac2d64ce9p-6, 0x1.bc1a853d12e73p-262,
     0x1.ce823fd5e71d6p-637, 0x1.cdbba3ef17b24p-326, 0x1.00b8382f13e24p-50,
     0x1.67d64d8f1c15bp-642, 0.0, 0.0, 0x1.1dc6cf9146fdp-549, 0.0,
     0x1.6b7225635da64p-260, 0x1.d1ddcfbb75b6p-68, 0.0, 0.0, 0x1.2649cbcec9739p-492,
     0.0, 0x1.6123ca8d4e855p-700, 0.0, 0x1.9fd0185226ee8p-139, 0x1.08e6a8ef42b69p-591,
     0x1.35636cb2899d4p-71, 0.0, 0.0, 0x1.a13b71b8a392bp-500, 0x1.ce7f98e4cf9f6p-1019,
     0x1.9a1668c4cfba1p-233, 0x1.785d55eb6ac57p-639, 0x1.b63b7dd327cb9p-186,
     0x1.0b26ba0dce8cfp-680, 0.0, 0x1.f271ba5740903p-19, 0x1.e7f202c0c0ea2p-1020, 0.0,
     0.0, 0x1.31cef25a59911p-295, 0x1.8e3b4f8755c87p-506, 0x1.f81a9c0e5d19ap-28,
     0x1.3267120d3daa7p-908, 0x1.f8936e173d991p-79, 0x1.0dffe2a5f33ddp-155,
     0x1.bd48a8fc64c9fp-584, 0.0, 0.0, 0x1.6ff76b3654897p-972, 0x1.fc6f8f0daba76p-958,
     0x1.f163477bf11c9p-369, 0.0, 0.0, 0.0, 0x1.9ea96336fb65fp-979, 0.0,
     0x1.ffe1f3f2701d5p-389, 0.0, 0x1.8094e8ad2c1e3p-691, 0x1.d789084ef4427p-426,
     0x1.023be5e5ef099p-948, 0x1.12120c97521ffp-703, 0.0, 0x1.9ef9f3642d75ap-354,
     0x1.df6b90b2ab984p-866, 0.0, 0.0, 0x1.35554d0de47cep-908, 0x1.43a866f3daaa6p-131,
     0.0, 0x1.83f1d2b464a92p-1011, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5bb91d0d43aa1p-699,
     0x1.ebb0091df7526p-653, 0.0, 0x1.d406e0bb70bc8p-690, 0.0, 0x1.9688d609dc531p-821,
     0x1.614a6cafa21d4p-109, 0.0, 0x1.785a5e4c8ea9dp-902, 0x1.f717937a19c9bp-479, 0.0,
     0x1.761f513e3ac69p-476, 0x1.617d421f1ddbp-450, 0x1.fdef41b017c8ep-83,
     0x1.e7aa6fc8e7f9bp-753, 0x1.72bf4093ee58p-17, 0x1.5a10403caadb3p-64, 0.0, 0.0,
     0x1.184708008dc6dp-735, 0x1.bfb29e1b1ad0ap-879, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ac7fb8cced8p-429, 0x1.7344ebee30c4p-962, 0x1.ee11bc0fb420fp-428, 0.0,
     0x1.e4d7103431dc7p-322, 0.0, 0x1.653013da4914ap-434, 0x1.f74626fd46908p-116,
     0x1.a5adbff185fe9p-485, 0.0, 0x1.7d8b7a400305p-561, 0.0, 0.0, 0.0, 0.0,
     0x1.67876e034253fp-407, 0.0, 0.0, 0x1.312c5ec46a052p-18, 0x1.86fc50788b756p-945,
     0.0, 0x1.16dcf6962b3efp-285, 0x1.00b5ed5f99f08p-569, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.786cebabcbf46p-672, 0x1.9f8f816dfed3ap-27, 0x1.adf3f8433430cp-507,
     0x1.ef198c94da8a1p-502, 0x1.1ed6a51bfcc86p-419, 0x1.b1f31bca3b22p-745, 0.0, 0.0,
     0.0, 0x1.e04e62ba16c33p-115, 0.0, 0x1.f730904084fc8p-671, 0x1.d935c78283405p-774,
     0x1.03282fc8ff4f5p-798, 0.0, 0x1.34e7345277c94p-411, 0.0, 0x1.0e55b82841b03p-830,
     0x1.487035ccfc56p-476, 0.0, 0x1.bb637ceca6e2fp-422, 0x1.75885830d544fp-240,
     0x1.cb320578b70fp-487, 0x1.39e0073464d0ep-363, 0x1.637c14713ec1ep-94,
     0x1.e801b145b7569p-119, 0x1.6b0afdb0d37b2p-208, 0x1.7e924c63fe569p-550, 0.0, 0.0,
     0x1.8a26fe0e1e756p-930, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58a7424fe69c7p-773, 0.0,
     0.0, 0x1.17a553b4125a7p-174, 0.0, 0.0, 0.0, 0x1.fa16a70f7fe48p-442, 0.0, 0.0,
     0.0, 0.0, 0x1.8d262b5c14901p-508, 0x1.de37ec3c4ba3ep-92, 0x1.30f7a41f2c1dep-414,
     0.0, 0x1.66e6da3a8b3f4p-141, 0x1.e950925455b4ep-146, 0.0, 0x1.fe24ad0bf942bp-48,
     0x1.1384571d4763fp-392, 0x1.67d0016babf91p-361, 0x1.ea30a44b8b19bp-837,
     0x1.d70287a5f6ffdp-148, 0.0, 0.0, 0x1.cf7e7e5b8587ap-290, 0x1.063b906cce907p-736,
     0x1.6d7711b5fa148p-886, 0.0, 0.0, 0x1.471d3b6bbdfb3p-763, 0x1.2cc34d1a419a9p-492,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.45ad87ca9ff1p-543,
     0x1.8ec7f2c18c223p-465, 0x1.4bb93768bb949p-963, 0.0, 0.0, 0.0, 0.0,
     0x1.6d8aec1cf3d27p-953, 0x1.bb65c4ebc60dap-50, 0.0, 0x1.08e6481afd7dep-183,
     0x1.2573e97b2fea4p-895, 0.0, 0x1.5b5b21d6cf7eep-349, 0.0, 0.0, 0.0, 0.0,
     0x1.784b9ad6040a4p-270, 0.0, 0x1.048cce3babbdcp-420, 0.0, 0x1.c38c1a21f636ap-787,
     0.0, 0.0, 0.0, 0x1.7a59001c5ebbcp-569, 0.0, 0x1.8838460f86d4ep-288, 0.0, 0.0,
     0.0, 0.0, 0x1.58a39ec156d1cp-958, 0x1.50e9669b4addcp-50, 0x1.a74a23c0e4f48p-241,
     0x1.13b10ed200a39p-590, 0x1.2630cfe72010ep-701, 0.0, 0x1.763d5bf96024dp-539,
     0x1.1385aab7a2403p-685, 0x1.b074c056ceda4p-178, 0.0, 0x1.65fc0cd060c2cp-883,
     0x1.44613415da4f9p-507, 0x1.ceab3876f6d9ep-615, 0x1.039a2588faa6dp-377, 0.0,
     0x1.3b7a9743627edp-666, 0x1.fac0378a81df8p-106, 0.0, 0.0, 0x1.13bc088c4e5c8p-534,
     0x1.905960be8f69ap-1019, 0.0, 0.0, 0.0, 0x1.575dc202137e5p-597, 0.0, 0.0,
     0x1.64399bb56524fp-1014, 0x1.51384840fd229p-875, 0x1.1408a700131bap-879,
     0x1.880e07b97cadp-752, 0x1.35a51e8f99133p-918, 0.0, 0.0, 0x1.f4ea0003f53dcp-450,
     0x1.cb3bebabffb3fp-34, 0.0, 0x1.b9ab0cd6d259ap-144, 0.0, 0x1.871106ea593edp-327,
     0.0, 0.0, 0x1.478df06e8517fp-594, 0x1.319f91ada93aap-417, 0x1.c47edc56a4682p-713,
     0x1.ea07b759e04bfp-608, 0.0, 0.0, 0.0, 0x1.3ce60920a0f09p-754, 0.0, 0.0,
     0x1.0dada05ba1215p-650, 0x1.74593651733b9p-38, 0x1.68176aa32a583p-309,
     0x1.4f5daed579fcbp-698, 0x1.9243e72f2e45p-374, 0.0, 0.0, 0.0, 0.0,
     0x1.3356f8fb7fad8p-43, 0x1.c0dffda5f5b0ap-397, 0.0, 0.0, 0x1.f94496b75c92ap-455,
     0x1.cbfb4c5a89646p-551, 0.0, 0.0, 0x1.ababee8940141p-487, 0x1.c4af8644b2514p-979,
     0x1.0aab58336accbp-760, 0x1.f347828e8281p-930, 0x1.c791813b7a89ap-317, 0.0,
     0x1.7c065d95d5ae6p-554, 0x1.5e7f4f9e0fef6p-993, 0x1.2892b591242fdp-207, 0.0, 0.0,
     0.0, 0.0, 0x1.737837abf78d3p-649, 0.0, 0.0, 0x1.3920fc659d336p-564,
     0x1.4bc170edf2878p-915, 0.0, 0.0, 0x1.d26433a136b2cp-558, 0.0, 0.0,
     0x1.8660e5a065f2fp-931, 0.0, 0.0, 0x1.f891ccf6ee9cep-232,
     0x1.85030f4a9e73dp-1014, 0x1.9f8e65353768dp-551, 0.0, 0.0,
     0x1.98fb4dfbacb38p-223, 0x1.e4710acc75815p-292, 0.0, 0.0, 0.0,
     0x1.0fc9314fc829ep-432, 0x1.0c0ecd9e9be9bp-793, 0.0, 0x1.7727308e01948p-971,
     0x1.29aa29b8380dfp-652, 0x1.7f88df399a842p-786, 0x1.830aafea4c29cp-678,
     0x1.3c55c0cc38d12p-625, 0.0, 0x1.bf198ad28eb2ep-761, 0.0, 0x1.6e68c856b287ap-206,
     0x1.ed7ce10ccfe6bp-377, 0.0, 0.0, 0x1.134cb7597f426p-686, 0.0,
     0x1.3f77ffcfc8146p-460, 0.0, 0.0, 0x1.66b1713d16924p-808, 0.0, 0.0, 0.0,
     0x1.56d0a77efe0dbp-235, 0.0, 0.0, 0x1.fe7940c5618e4p-113, 0x1.3fad36a62da1fp-124,
     0x1.ae9c21078c02p-468, 0.0, 0x1.8a6a13e5fbdd1p-34, 0x1.a0059408b89c5p-660, 0.0,
     0.0, 0x1.919866d86b22fp-508, 0.0, 0x1.3941fa2b023d2p-113, 0.0, 0.0, 0.0, 0.0,
     0x1.b64b0e6a74de9p-483, 0.0, 0.0, 0x1.2345857d408bep-73, 0.0, 0.0,
     0x1.70627cfeca981p-391, 0x1.268aa792b1c17p-211, 0x1.5edf076596f63p-897,
     0x1.066ee3f2d6bcbp-418, 0.0, 0x1.b42dd5fa1ce9ap-425, 0x1.1a88dd2a2eb2cp-730,
     0x1.aae637d161bccp-957, 0x1.ab307ed97f31bp-406, 0x1.95948662de6d6p-138,
     0x1.1fb6cb059d95dp-369, 0.0, 0.0, 0x1.2649dd464d8d6p-352, 0.0, 0.0, 0.0,
     0x1.c7524f7f7ab6ap-195, 0x1.4cda6cd9b6df1p-342, 0.0, 0x1.6bfd2e233d4abp-649, 0.0,
     0x1.507f7ef202ccep-219, 0.0, 0x1.75034f57782cfp-670, 0x1.096ad7c2af3dep-632,
     0x1.620f482f59a31p-47, 0x1.3ef620ed174c7p-732, 0.0, 0.0, 0x1.74f9767adce2ep-297,
     0x1.922af0749c0d1p-794, 0.0, 0.0, 0x1.00c76d8a221a3p-591, 0x1.05a1fb347762ap-496,
     0.0, 0x1.87595d3b3af89p-817, 0.0, 0x1.b09bf14d53435p-484, 0x1.5e989fe149b82p-120,
     0.0, 0x1.d0ec7a446abap-135, 0.0, 0.0, 0.0, 0.0, 0x1.bf27eda7739f5p-650, 0.0, 0.0,
     0.0, 0x1.5bc758097f0f8p-156, 0x1.f89f2b8fa1edep-418, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0e950469f18bp-444, 0x1.e172bfc9c968bp-975, 0.0, 0.0, 0x1.794f803106247p-383,
     0x1.b6ee6e944fc6dp-87, 0.0, 0.0, 0x1.016384c0af5a4p-52, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8683bbcc18d6p-622, 0x1.721e2f5453f76p-103, 0.0, 0x1.900bcf6651682p-713,
     0x1.658fae77641d9p-932, 0x1.bd8c31abeba46p-716, 0.0, 0x1.befd62412968bp-173,
     0x1.cf5c972877253p-345, 0x1.de0517f002665p-950, 0.0, 0x1.001b7d23f496bp-129,
     0x1.2fcd4cf1f46c4p-34, 0.0, 0.0, 0.0, 0x1.0e09056a04e46p-63, 0.0,
     0x1.069e3347e6367p-309, 0.0, 0.0, 0x1.ea889a4d2e31fp-926, 0x1.6a6e1cf5c389bp-246,
     0x1.aa4b7d51daec1p-172, 0x1.374e2806fbf99p-295, 0.0, 0.0, 0x1.6b049599dac05p-649,
     0.0, 0.0, 0x1.c082a5c4b77d1p-955, 0x1.fba0ae2204108p-122, 0x1.a0fb43fef446ep-987,
     0.0, 0x1.d7fedf1ed7225p-629, 0x1.5077fe09908f3p-8, 0.0, 0.0,
     0x1.0b50817879e05p-663, 0x1.360352e2d9ec6p-25, 0.0, 0x1.30c4cfa128f2ap-378, 0.0,
     0x1.a3753708b065cp-49, 0x1.76dd56c0d2babp-153, 0x1.940da8cd4d54ap-968, 0.0, 0.0,
     0x1.388b03b508105p-259, 0.0, 0.0, 0.0, 0x1.3b37abc033ecp-1001, 0.0, 0.0,
     0x1.1890e9b902dfcp-169, 0x1.1b01b13a52a82p-598, 0x1.84784e01208dep-34,
     0x1.8a881b1610f52p-972, 0.0, 0x1.788e53e965f0dp-774, 0x1.e83b6ac89d46p-380, 0.0,
     0x1.b558fb4ed1a2p-811, 0x1.de46726257d27p-22, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5be9014344e0bp-179, 0x1.cda8d22cbd462p-110, 0.0, 0.0, 0.0, 0.0,
     0x1.7f8b951c2279dp-113, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.daf9c6e35acap-769, 0.0,
     0.0, 0.0, 0x1.f72c74b8e462ap-933, 0x1.e8cca8be6530bp-777, 0x1.432f254d060bep-491,
     0.0, 0.0, 0.0, 0x1.866ca598bc2ccp-595, 0x1.3590cf55aaee7p-120,
     0x1.e021368c84defp-725, 0.0, 0x1.72558c06417a9p-901, 0x1.2337269fb6efep-53, 0.0,
     0.0, 0.0, 0x1.f7f9edaa99678p-576, 0.0, 0.0, 0x1.85e1fe06913f2p-441, 0.0, 0.0,
     0.0, 0x1.db1a8f28f24cep-907, 0.0, 0x1.99e82dff30ca3p-36, 0x1.501eead47a6b1p-534,
     0x1.871e6d162ecc3p-465, 0.0, 0.0, 0x1.120f23789a32p-1003, 0.0, 0.0,
     0x1.7524f6935fa98p-161, 0.0, 0x1.3f65eb1b42bb6p-270, 0x1.51f604d16b17bp-745, 0.0,
     0.0, 0.0, 0.0, 0x1.d6c827f78830dp-392, 0x1.06994cde7adc3p-281, 0.0,
     0x1.77f21924567fp-533, 0x1.9e366377c9434p-863, 0.0, 0x1.f37d66d677d33p-786,
     0x1.9908f1f65db6dp-733, 0.0, 0x1.14cc687e1698dp-932, 0.0, 0.0,
     0x1.9ee61e4bae502p-378, 0.0, 0x1.4c33c057a642dp-35, 0.0, 0x1.dd7171b7d8edep-268,
     0x1.c84bf624a3169p-309, 0x1.1d8958e7b7b88p-193, 0.0, 0.0, 0.0,
     0x1.85788d126e402p-221, 0.0, 0.0, 0x1.e04fde6a7873ap-495, 0x1.32226ce46deedp-516,
     0.0, 0x1.1340f708daa84p-273, 0.0, 0x1.b16487f2a2f4ep-285, 0x1.8bc877cb92aep-399,
     0x1.99e8fc376ededp-221, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7bdb40b52ab5ep-473,
     0.0, 0x1.8512a5bab6baep-38, 0.0, 0.0, 0x1.2e80311054886p-905,
     0x1.096e0a9af3c07p-413, 0x1.22d284da420e5p-382, 0x1.2e574b6bd9553p-843, 0.0,
     0x1.870078ec1d287p-431, 0x1.687939f595274p-485, 0x1.7dae9a6bd5f8bp-873,
     0x1.022185f041589p-311, 0.0, 0.0, 0x1.1a49631c7555fp-956, 0.0,
     0x1.9d2471e6898fp-63, 0x1.34f02bbd31bp-571, 0.0, 0.0, 0x1.b80533e40376ep-37, 0.0,
     0.0, 0x1.6e9b60e5a1074p-333, 0.0, 0x1.e1d52bcaa2f4ep-910, 0.0, 0.0,
     0x1.9523eb80b8dfep-601, 0.0, 0x1.1b9d8a1d9dfdfp-562, 0.0, 0.0,
     0x1.d35983d9cf209p-304, 0x1.3da059ce4c2a6p-870, 0.0, 0.0, 0.0, 0.0,
     0x1.501e4735cd3e7p-972, 0.0, 0x1.b1075a72eee29p-620, 0x1.1d01d4ee2541cp-664,
     0x1.2cd95284654b7p-742, 0.0, 0.0, 0x1.07a2b24ea1d07p-590, 0x1.1e9a8693635dep-950,
     0.0, 0.0, 0x1.d31cd58424df4p-84, 0x1.30bec7f9d5d1dp-670, 0x1.c51b0be5de6d8p-171,
     0.0, 0.0, 0.0, 0.0, 0x1.d710d408177e4p-899, 0x1.7093a784b7b68p-101, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0b3d42224d95p-742, 0x1.dde0590746063p-846,
     0x1.35962189e8d33p-476, 0x1.4b51ebd54b674p-218, 0.0, 0x1.d2807c1e49ddbp-440,
     0x1.4e9a3ee6fb139p-207, 0x1.7ff17c1df259ep-805, 0x1.c6796f9988a59p-877, 0.0,
     0x1.35fea7044f5b8p-139, 0.0, 0.0, 0x1.17a6644f533f8p-846, 0x1.3a5d89fc2cc1dp-132,
     0.0, 0.0, 0x1.790eb77b52becp-536, 0x1.094a48d98b6a2p-977, 0.0,
     0x1.44ca21bb8ac2ap-407, 0.0, 0x1.aad2ad453edffp-553, 0x1.634d11ad8f565p-175, 0.0,
     0.0, 0.0, 0.0, 0x1.fc2c917ace57fp-430, 0x1.6d55bbae79c57p-777,
     0x1.fe50fcf1fa29ap-830, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ac7ecd70842ap-37, 0x1.f8b10f91d6da6p-714, 0.0, 0.0, 0.0,
     0x1.3f1432a6ce8adp-449, 0x1.fbf27fe463387p-895, 0x1.4f79dbaeeb6c6p-804,
     0x1.4f2aad4a60592p-476, 0.0, 0x1.f73920421410dp-437, 0.0, 0x1.c34197c9e5ed6p-823,
     0.0, 0x1.6d4efb00dffdbp-743, 0x1.541ebe8399a5cp-662, 0.0, 0.0,
     0x1.7621365236f7ap-316, 0.0, 0x1.8a2670d77f81ap-725, 0x1.e6f68b9b98495p-386,
     0x1.c297467c37b08p-69, 0x1.44a309a8042bap-256, 0x1.b23ba02842477p-308, 0.0,
     0x1.672e21803a01bp-375, 0.0, 0x1.65c807c51146cp-154, 0x1.9a862ba02468cp-480, 0.0,
     0x1.17aacc7e2decdp-200, 0.0, 0.0, 0x1.95dbbd8f20b4cp-572, 0x1.76de589535ac9p-366,
     0x1.facaec31bf4eap-955, 0.0, 0.0, 0.0, 0x1.944f41ece7836p-541
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
            tmp1 = Sleef_finz_logd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_logd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logd1_u10purecfma bench acc %la\n", global_bench_acc);
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
