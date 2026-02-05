/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd1_u35purecfma.c --function \
 *     Sleef_finz_logd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.b963b983085cfp-1004, 0x1.5529798f9695fp-901, 0x1.801647372e275p-843,
     0x1.869c462038052p-601, 0x1.15fb16094cc09p-411, 0x1.42c4ac676b11cp-754,
     0x1.e85171ae7921bp-992, 0.0, 0x1.1719cfd2c5966p-298, 0x1.4fdd79545a764p-561,
     0x1.91db72def4344p-760, 0.0, 0x1.54695be90b259p-289, 0x1.1fe38f8810737p-584, 0.0,
     0x1.2dfefe8eb19b1p-46, 0.0, 0x1.7c9df7a70d381p-342, 0.0, 0x1.49b3361fac253p-7,
     0.0, 0x1.55c4d91739c01p-581, 0x1.ddc2a8ca803eep-893, 0x1.c701100cd46b3p-26,
     0x1.fc2dc38cc987ep-442, 0.0, 0x1.ae21cb2e19fa4p-614, 0x1.b996d0c1888a9p-984, 0.0,
     0.0, 0.0, 0x1.6451ebddf429dp-286, 0x1.7d7d633e1d455p-500, 0x1.c0fc70f2f3c2cp-720,
     0.0, 0x1.0dc6b599db3d4p-162, 0x1.8dc9079b049ccp-832, 0.0, 0x1.bb5f260349afcp-89,
     0.0, 0x1.53aa19414bed6p-655, 0.0, 0.0, 0x1.15dc7bdce16b8p-284, 0.0, 0.0,
     0x1.e496d1c478b7bp-220, 0.0, 0.0, 0x1.49be0f369ad8ep-215, 0x1.ab9d9bb96f176p-308,
     0x1.b298f8b89f12p-875, 0.0, 0x1.4e1d8c3e48cebp-148, 0.0, 0.0,
     0x1.9aaab7482a899p-11, 0.0, 0.0, 0x1.35e2d6f707999p-879, 0.0,
     0x1.443e9b52a7bfap-805, 0x1.3aa4333fd9b69p-582, 0.0, 0.0, 0x1.d5a91169cf813p-418,
     0.0, 0.0, 0x1.477d6644d0d79p-160, 0.0, 0x1.1909e462679efp-611, 0.0,
     0x1.3e8610cbeafe2p-558, 0.0, 0x1.0afb850336c95p-873, 0.0, 0x1.1a80935fb64c7p-591,
     0.0, 0x1.8788b87497175p-657, 0.0, 0x1.2718a623e735ap-822, 0.0,
     0x1.08be0668030cep-764, 0.0, 0x1.3aeb155e30141p-652, 0.0, 0x1.fcd11d2c2c1dcp-63,
     0x1.98044b9dc6c5cp-6, 0.0, 0.0, 0.0, 0x1.fca2f7087c0c3p-889,
     0x1.f389136554897p-381, 0x1.99e89a2ffa91ep-412, 0.0, 0x1.1831af797c48ep-570,
     0x1.abe1e1a94728p-38, 0.0, 0x1.17044ba05211ap-880, 0x1.91a7b238e6045p-903, 0.0,
     0.0, 0x1.920f920762067p-420, 0x1.fd78faff10415p-913, 0.0, 0.0,
     0x1.abecead0b057ep-693, 0.0, 0x1.c4caeaf3ab81bp-276, 0.0, 0x1.ac31be293102bp-479,
     0x1.0cba098c642f9p-227, 0x1.0f0383349a546p-185, 0.0, 0x1.f211a0f547f4ep-499, 0.0,
     0.0, 0x1.8e9339ad542c5p-262, 0x1.11f225de72c29p-502, 0x1.625f2cb8054ecp-499, 0.0,
     0x1.53bd7042cafd7p-980, 0.0, 0x1.e701a5161ba7ap-510, 0x1.cd65278d8ffa4p-107, 0.0,
     0x1.0a3b1946f1ef6p-188, 0.0, 0.0, 0x1.afa3c56fa2e16p-494, 0x1.bdaaa857b5cfbp-124,
     0.0, 0x1.6b4b31ebacf9bp-354, 0x1.41b3b219b7774p-506, 0x1.6c4e884d6edc5p-740,
     0x1.701846a77bff9p-961, 0x1.514e2d5ab690bp-493, 0x1.1875fbcc9b46ap-180,
     0x1.4d3ddf9340ac2p-986, 0x1.62e3ff2c0a868p-764, 0.0, 0.0, 0x1.48e7a9e3a7245p-724,
     0x1.43f07568f4d24p-73, 0x1.ab27228a35dbbp-734, 0x1.e5bafb9bf9a92p-473,
     0x1.129d1ef97ce7ep-537, 0x1.9bd0ff79827a3p-912, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8ddaac4a42f1p-920, 0x1.fb4d1c9bc2595p-886, 0.0, 0.0, 0x1.4f1232fd55c93p-383,
     0.0, 0x1.45eee7397ec93p-520, 0x1.c11a72e948e5fp-806, 0.0, 0x1.9aba0af3755ccp-593,
     0x1.67ad5b44bd8dcp-704, 0x1.f1530d780a3a2p-629, 0.0, 0.0, 0x1.bbdf8441ba62p-763,
     0x1.71e0e0404276ap-1016, 0.0, 0.0, 0x1.f413020ca6c7p-136, 0.0, 0.0, 0.0,
     0x1.d6bfe54a534c6p-732, 0.0, 0.0, 0x1.34b11e987695ap-286, 0x1.cd8d92389ec1cp-489,
     0x1.ea6c78339b8bbp-726, 0x1.9a7d15ae5fb59p-420, 0.0, 0x1.f67d0a4035609p-908, 0.0,
     0x1.8550acef98c5fp-136, 0x1.f5f156c9a5548p-86, 0x1.d0b46bdead0b8p-1012,
     0x1.570d7bccb5925p-569, 0.0, 0.0, 0x1.474d8f1122fb9p-321, 0.0,
     0x1.25faa59582a6dp-23, 0x1.5b442f32fef62p-144, 0x1.126b269f0c4b7p-814, 0.0, 0.0,
     0.0, 0.0, 0x1.1560c070f9cb4p-743, 0x1.6e91bd93ab8aap-271, 0.0, 0.0,
     0x1.220997f3a95d4p-917, 0x1.2bc9d5ee632ebp-913, 0x1.685598f622e2fp-962, 0.0, 0.0,
     0.0, 0x1.8477a5e24011p-218, 0x1.66d23db5f6696p-316, 0.0, 0.0,
     0x1.b1291421ccf8ap-259, 0x1.6492f9bce5c24p-290, 0.0, 0.0, 0.0, 0.0,
     0x1.9bf11be12536ap-605, 0x1.081b50e07a1ebp-240, 0.0, 0.0, 0x1.8eba6b51dc528p-844,
     0x1.4cdcf42370c89p-758, 0x1.357f360d1e6ffp-582, 0.0, 0.0, 0.0, 0.0,
     0x1.c5411457d3853p-45, 0.0, 0.0, 0x1.d96c8e405efa8p-258, 0x1.cfb8b5d6b6076p-405,
     0x1.1f2b960aae1ap-947, 0x1.f099da85d44d7p-362, 0.0, 0.0, 0x1.e901480686dd8p-264,
     0x1.6ca93fc044c33p-208, 0.0, 0.0, 0x1.7acbb67ceb156p-663, 0.0, 0.0,
     0x1.cb38a8962255p-544, 0x1.0324491a11713p-968, 0x1.8172918c18a1ap-469,
     0x1.a0be62820adfap-89, 0.0, 0x1.1d586f39037ebp-187, 0.0, 0.0, 0.0,
     0x1.3a60ab6ad9cc8p-523, 0x1.0508bd3f8cbe6p-114, 0x1.5f1093bbacc5fp-303, 0.0,
     0x1.89ec31b77dc9fp-733, 0x1.dfa4152df0a34p-323, 0x1.52c96f68e584p-693,
     0x1.538c7bfeffbdfp-628, 0.0, 0.0, 0x1.169b4b62716d7p-395, 0.0, 0.0, 0.0,
     0x1.6f66b2aa996e9p-192, 0.0, 0.0, 0x1.bfd9ff36e3b37p-844, 0x1.f6b9c6e48e1b2p-754,
     0.0, 0.0, 0.0, 0x1.7c7a68939e6d1p-921, 0x1.61e5d3bd03c6p-845,
     0x1.007bc6f7e4f26p-834, 0.0, 0x1.f3b9b63db6c07p-820, 0x1.be25a45912425p-970, 0.0,
     0x1.a9f75de3e375ep-131, 0.0, 0.0, 0.0, 0x1.9976312a88f9fp-231, 0.0, 0.0,
     0x1.6cbf967d76637p-980, 0.0, 0.0, 0x1.da41a2a5249p-893, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b7b0871ee60d4p-14, 0.0, 0.0, 0.0, 0x1.e974840be2269p-847,
     0x1.5d0f53c546357p-525, 0x1.b16cfbe679af3p-750, 0x1.dc4db6a58b0c2p-964, 0.0, 0.0,
     0.0, 0.0, 0x1.7300c42e01e47p-296, 0.0, 0x1.a58c52b59be7fp-996, 0.0, 0.0,
     0x1.b0ca43341cccfp-419, 0x1.9d353887378a3p-790, 0x1.0a84b9d568fc7p-391,
     0x1.e3c63d3bb7106p-378, 0x1.0d4805a2b5d48p-706, 0x1.d6da4124a3421p-197,
     0x1.a5d17426ae43cp-414, 0.0, 0x1.8e2167f39dc15p-168, 0.0, 0.0, 0.0,
     0x1.749634823abacp-435, 0x1.d43dfbd2a63cfp-861, 0x1.97c7e7360d0bcp-881,
     0x1.285f27484e1e7p-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9501345227cd9p-257,
     0x1.64f464457235ap-149, 0.0, 0x1.da97f9309e9c6p-636, 0.0, 0x1.55d7b8465177fp-495,
     0.0, 0x1.b7a9d80e7b244p-592, 0x1.87a665740074cp-324, 0.0, 0x1.e2cdc1c8f574fp-827,
     0x1.6f5c69674b3c8p-1011, 0x1.f361ffbcd589fp-1003, 0x1.79ff054a2b2f4p-843, 0.0,
     0.0, 0.0, 0x1.49658d90d82d8p-659, 0x1.d7875f515daccp-191, 0.0, 0.0, 0.0,
     0x1.c2f54dbeff201p-826, 0x1.7c6887300be3ap-607, 0.0, 0x1.99e3230828f1bp-992, 0.0,
     0x1.639dc4bb57198p-836, 0.0, 0.0, 0x1.91dd7a7b38ed2p-607, 0.0,
     0x1.12b39a5fd6077p-169, 0x1.a78e2eadc31ap-714, 0.0, 0.0, 0x1.cb7ab4e595c69p-683,
     0x1.5a63a93b52e02p-18, 0.0, 0x1.557ff1bddd10ap-931, 0x1.683604b3e8aa5p-17, 0.0,
     0x1.85aab3563e287p-863, 0.0, 0.0, 0x1.5946813b1442ep-674, 0x1.a8b97e3b07e4bp-92,
     0.0, 0x1.0a92426b7e72p-875, 0x1.2116beae552b5p-328, 0.0, 0x1.3c017b4cfa473p-324,
     0.0, 0.0, 0.0, 0x1.c5dae6a4216ap-770, 0.0, 0x1.1de391ced61d5p-722,
     0x1.645e8e3d26f36p-727, 0x1.01d92bfa7162fp-168, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4674d89fdccb7p-901, 0x1.4a6d626383907p-733, 0.0, 0.0, 0x1.1def80b34f1f1p-627,
     0x1.efb0ba2047627p-537, 0x1.fcd655bd2d5e3p-504, 0.0, 0x1.8671b3be2c62dp-809, 0.0,
     0.0, 0x1.7c494f341f234p-898, 0x1.c813c1d8120cdp-866, 0x1.3f8671ef1c1bfp-538, 0.0,
     0x1.5d0b87e25ad4ep-637, 0.0, 0x1.2318d6eb1341dp-604, 0.0, 0.0,
     0x1.ecc856755ec29p-985, 0x1.48016effc75f3p-571, 0.0, 0x1.f3e22eb331572p-539, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ea3abc9d2aba5p-828, 0.0, 0x1.09366e12e089dp-506,
     0x1.37a7fcf3ac058p-766, 0.0, 0x1.45708c7a80a87p-865, 0.0, 0.0, 0.0, 0.0,
     0x1.da9a7b84addf2p-30, 0x1.71702dd929475p-86, 0x1.3fb71698adab8p-501,
     0x1.384dc47bc9603p-855, 0x1.32c2e33481afep-596, 0.0, 0x1.ab337b92825a4p-265,
     0x1.bf1699cf27fa6p-637, 0x1.bfcb271169caep-661, 0.0, 0.0, 0x1.8e146a1aebed1p-118,
     0.0, 0x1.a54a189285d31p-711, 0x1.bd647920e2aa9p-354, 0x1.e5ad2998ebf08p-703, 0.0,
     0x1.55f3e1e79dc9cp-565, 0x1.3c6ea175ed743p-648, 0x1.11a1ccaff4eeap-1002, 0.0,
     0x1.285121f1d512ap-539, 0.0, 0.0, 0.0, 0x1.8f175be5d1aap-398,
     0x1.b3d430bb9ef65p-546, 0x1.51ea39db6278bp-901, 0x1.69c6d049c8914p-95,
     0x1.9d1049648fdc8p-469, 0x1.e71dfc2c9cc35p-897, 0x1.544fe1433e63bp-499,
     0x1.e445b0e990837p-355, 0.0, 0x1.829dd01298ef1p-838, 0.0, 0x1.9128a5bce93ep-565,
     0x1.8013e7ce3f456p-540, 0x1.6e23e8458e4e3p-183, 0x1.23ea91f51a1c9p-149, 0.0, 0.0,
     0x1.de78a43506e87p-585, 0x1.86b105ca4e266p-957, 0x1.577ccb0a518a8p-337, 0.0, 0.0,
     0x1.c98698e340925p-587, 0x1.549a58c3e5ef6p-562, 0x1.e128ed31a92bcp-1011,
     0x1.4768ab189bfd2p-512, 0x1.31cf96447d516p-7, 0.0, 0.0, 0x1.72df751651974p-872,
     0x1.1c7c6893b8e88p-360, 0.0, 0.0, 0x1.bc16623358f8cp-162, 0x1.f8d5a6e9ab49ep-290,
     0x1.350aad93add64p-445, 0.0, 0x1.2923f73448244p-991, 0.0, 0.0,
     0x1.750fe2b89a22bp-199, 0x1.7907ae048f3aep-534, 0x1.4d4defb900036p-434, 0.0, 0.0,
     0.0, 0.0, 0x1.3c069e326599fp-950, 0x1.926176d9224c2p-468, 0x1.6cc47b56c7d5ep-338,
     0.0, 0.0, 0.0, 0x1.1d1972d60ab39p-928, 0.0, 0.0, 0x1.da50b01bdf752p-462, 0.0,
     0.0, 0.0, 0x1.35d0044992f7ep-547, 0x1.be13f1c393c56p-173, 0x1.332ed7e32bc3bp-891,
     0.0, 0.0, 0x1.3e8a4d8b94b5ep-115, 0.0, 0x1.a40c1dac32507p-649, 0.0, 0.0,
     0x1.829df5b5bbe9p-363, 0x1.2fc21571c3fc2p-329, 0.0, 0.0, 0x1.eedd03f701f21p-329,
     0.0, 0x1.bee3ade9cd064p-318, 0x1.1b4aa6eca5311p-434, 0.0, 0.0, 0.0, 0.0,
     0x1.9b900757e07d1p-136, 0x1.0bbe9d6b52098p-900, 0.0, 0x1.30c34e2535692p-700,
     0x1.a6973a08600e2p-399, 0.0, 0.0, 0x1.8e964fba17945p-233, 0x1.211d1b5137397p-740,
     0x1.be60e3426e3a8p-418, 0x1.ac634ff14842p-1011, 0.0, 0x1.ba69840e2caafp-988, 0.0,
     0x1.c236eaf0f39b1p-344, 0x1.204857588b351p-447, 0.0, 0x1.96a449c9606f2p-971,
     0x1.2fe5b49b3be9dp-176, 0x1.0d3db08344e1cp-20, 0.0, 0x1.816f8021ebb2cp-260, 0.0,
     0.0, 0.0, 0.0, 0x1.2249b747b511bp-507, 0x1.d640870a47a48p-693,
     0x1.6796cfd28c1b9p-247, 0.0, 0.0, 0x1.d1b4c8c1dd47dp-854, 0x1.0895798dcee0ap-983,
     0.0, 0x1.6ed51cd808e8fp-486, 0.0, 0x1.9f8010c0ffbcdp-938, 0.0, 0.0, 0.0,
     0x1.d76731862cedfp-364, 0x1.2aad7270a3acp-709, 0x1.92a63807fb849p-126,
     0x1.075bdcab430f4p-327, 0x1.2607e56562be9p-38, 0.0, 0x1.297cb53d466c6p-521,
     0x1.b7130176ac924p-860, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.840fd0a6c799ap-908, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1a2c4dcb7ccd1p-321, 0.0, 0x1.6750f35f627c6p-135, 0.0,
     0.0, 0x1.746be72859a61p-111, 0x1.977ffb0378458p-562, 0.0, 0.0, 0.0, 0.0,
     0x1.74361f503c37bp-787, 0x1.ca9156ab07094p-426, 0.0, 0x1.8d3a638ee5549p-641, 0.0,
     0.0, 0x1.be42624e172d2p-227, 0x1.e7491f7faa66bp-41, 0x1.c0c000312deb5p-402, 0.0,
     0x1.97abd9118b1c3p-373, 0.0, 0.0, 0.0, 0x1.fbdad99eed48bp-935, 0.0, 0.0,
     0x1.216369bb9d3a1p-804, 0x1.169276807e5b1p-57, 0x1.041d7c2b1ae96p-784, 0.0, 0.0,
     0.0, 0x1.db39b10588e3bp-756, 0x1.b702fd4b57c62p-496, 0x1.5768edb2512eap-396, 0.0,
     0.0, 0x1.2745b9cd8f4dp-403, 0x1.1c9484221d977p-615, 0.0, 0x1.2bdb038f63ed3p-514,
     0.0, 0x1.f9698dca53343p-205, 0x1.b96a2ee880c5ep-27, 0x1.4a7b159755415p-170,
     0x1.73fa47c139b72p-279, 0x1.48b87b51ac7e5p-65, 0x1.49933d1a038b1p-283, 0.0, 0.0,
     0x1.2124108cf84ep-73, 0.0, 0.0, 0x1.deaf3de1d6b06p-23, 0.0, 0.0, 0.0,
     0x1.21570dcd50c15p-498, 0.0, 0.0, 0x1.eea81ab92f9bcp-2, 0.0, 0.0,
     0x1.676c09de9bf23p-169, 0x1.bb000e97ed55dp-659, 0x1.8265b2204bd4p-505,
     0x1.ab73ac027558ap-610, 0.0, 0x1.7e85637035a5ap-940, 0.0, 0x1.be885607f0f2ap-623,
     0.0, 0.0, 0.0, 0x1.5eaf5724d95f7p-429, 0x1.e1f535814ba8bp-111, 0.0,
     0x1.aa958bda0bc42p-602, 0.0, 0.0, 0x1.d1068cc3f1863p-1014,
     0x1.71119f1ce842cp-697, 0x1.32c7163a84b77p-794, 0.0, 0.0, 0.0, 0.0,
     0x1.65ce6863e80a8p-814, 0.0, 0.0, 0x1.5a61afa581c09p-455, 0x1.c542a11b55732p-833,
     0.0, 0.0, 0.0, 0x1.4e92455ebcb6bp-222, 0x1.e37c007d5ef8p-641, 0.0,
     0x1.505f5192e8721p-944, 0.0, 0x1.ad43b27d2ebc8p-750, 0x1.3a3b1f8c24671p-120, 0.0,
     0.0, 0.0, 0x1.6e1f96c49062ap-569, 0.0, 0.0, 0x1.27e767f0a0e0cp-622,
     0x1.27dbfaf1f3077p-968, 0.0, 0.0, 0x1.f08e157d5162bp-649, 0x1.16ec88461eaebp-766,
     0.0, 0x1.72bf20adf757ep-291, 0.0, 0x1.ee5051c88971dp-418, 0.0,
     0x1.4f19e473757f8p-241, 0.0, 0.0, 0.0, 0.0, 0x1.34df3251bb17p-900, 0.0, 0.0,
     0x1.96453c131a4ffp-104, 0.0, 0.0, 0x1.fba476ff83288p-735, 0.0, 0.0, 0.0,
     0x1.a2767412d3b7ep-977, 0x1.a10b03d5c2716p-245, 0x1.4a58d1f74bebfp-709,
     0x1.772e443f7fa19p-902, 0.0, 0x1.b28ca12a20816p-434, 0x1.2c16905a070a6p-436, 0.0,
     0.0, 0x1.db92a41b698f9p-394, 0.0, 0x1.f9892d6a180bap-455, 0.0, 0.0, 0.0,
     0x1.6d31a18296b17p-9, 0.0, 0.0, 0.0, 0x1.47a6a145ce36p-805, 0.0,
     0x1.73ac4ccf9cb5dp-86, 0.0, 0x1.2b79121d8c8d7p-228, 0.0, 0.0,
     0x1.91d685e2b384bp-68, 0x1.83a3a1e976a24p-335, 0x1.48dc161ead86bp-982,
     0x1.fda1b31afe3b9p-216, 0.0, 0x1.4bd36997058f2p-620, 0.0, 0x1.79118b4ffb169p-67,
     0.0, 0x1.9b7d7d6c7c129p-938, 0.0, 0.0, 0x1.d908dcfb578e6p-525,
     0x1.b4cd9f7d1f468p-401, 0x1.82bfa34465f2cp-50, 0.0, 0x1.978a5cf207e12p-919,
     0x1.9e1b2b95b44aep-381, 0.0, 0x1.e962ab384943ap-594, 0x1.52dd26cbda44p-762,
     0x1.9602a2919b787p-163, 0.0, 0x1.39936ada23de7p-67, 0.0, 0x1.e1539f4b1907ap-261,
     0x1.1491046dbcaf3p-914, 0.0, 0x1.23a3af05f794dp-837, 0x1.d7962f0978946p-508, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.21c5f59664545p-275, 0x1.d104c67745d1p-778,
     0x1.04e18977f941ap-983, 0x1.7ff93da5883efp-988, 0x1.88e9bfa69a43ap-541,
     0x1.37672ce70ca38p-977, 0x1.36ceefedee10dp-743, 0.0, 0x1.166b6d93159ffp-1005,
     0.0, 0x1.60bcf2954243fp-172, 0x1.98d13f78a8883p-401, 0x1.878c3bd85ffa6p-322,
     0x1.9d8abc7c2a1bdp-128, 0x1.b7bec56b02025p-890, 0.0, 0.0, 0.0,
     0x1.119e2c12acca9p-697, 0.0, 0x1.0ac5fef2d53eap-400, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cbd125d008d94p-790, 0x1.a17b0a5bb23afp-642, 0.0, 0x1.cf7ff66b44461p-269, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6145d6690a529p-101, 0.0, 0.0, 0.0,
     0x1.ffd1e44569e47p-896, 0x1.bcd0f75a23fd5p-526, 0x1.17c015c0efa99p-481, 0.0,
     0x1.e367915d6db3p-232, 0x1.c447245527dc9p-810, 0.0, 0x1.cc9161a5526e3p-22, 0.0,
     0.0, 0x1.14f0c803d79edp-656, 0.0, 0.0, 0.0, 0.0, 0x1.b206062fa6bb9p-944,
     0x1.7146da91323b7p-540, 0.0, 0x1.a05cb8cf20205p-149, 0x1.776316d7dc49bp-686,
     0x1.41babe08c696dp-78, 0x1.d5b36ed926678p-968, 0.0, 0.0, 0x1.8b8e39a8ca03fp-591,
     0.0, 0.0, 0x1.f217d1f6bcddap-380, 0x1.b6b181c82b1ebp-711, 0x1.0b96e1d3182dcp-721,
     0x1.3bbfa3c825aadp-273, 0.0, 0x1.7fcfa250438cep-907, 0x1.4a70bbf55d4e7p-780,
     0x1.c553957514f4fp-314, 0x1.4ec0551ce01d9p-543, 0x1.31974997902ddp-63,
     0x1.a87095b26553cp-148, 0.0, 0.0, 0x1.e180e0c6504ap-361, 0.0,
     0x1.cd3424edba752p-251, 0.0, 0.0, 0x1.85df75d2b0561p-177, 0.0, 0.0,
     0x1.73b7909b16eap-51, 0.0, 0.0, 0x1.b1276a96f4b98p-639, 0x1.58fc65851a12dp-953,
     0.0, 0.0, 0.0, 0x1.dafa97bec4d35p-110, 0.0, 0x1.87e8983472d28p-613, 0.0,
     0x1.662ec7521deddp-318, 0.0, 0x1.2d2be0d6054d3p-453, 0.0, 0x1.687c5069ea653p-178,
     0x1.80377e3df02bcp-477, 0x1.a8222ef73cdcbp-509, 0.0, 0x1.062f5012636bcp-523, 0.0,
     0x1.5b004e7513f03p-409, 0.0, 0.0, 0.0, 0.0, 0x1.59cda37478556p-627, 0.0, 0.0,
     0x1.145a159633d92p-618, 0.0, 0.0, 0x1.fefc94706f3a4p-654, 0.0, 0.0,
     0x1.148132a24701dp-350, 0x1.6d16a75a27b3fp-675, 0.0, 0.0, 0x1.6040a12a4ad12p-738,
     0.0, 0.0, 0x1.685f975ec8915p-137, 0x1.59ed3581812acp-98, 0.0,
     0x1.5f04bebb057acp-363, 0x1.002dbbe464c37p-787, 0.0, 0.0, 0x1.dc18c397117ap-352,
     0.0, 0.0, 0x1.931281c379c03p-759, 0x1.e7d45104eb9ep-482, 0.0,
     0x1.3352cf1e2985cp-383, 0.0, 0x1.9bb48bb500454p-351, 0.0, 0x1.23c47bde6c35dp-696,
     0.0, 0.0, 0x1.b93bacfac83fp-665, 0.0, 0x1.96d877c4e544p-159,
     0x1.ee8a34e88df8dp-631, 0.0, 0x1.0ef7311d7953bp-41, 0x1.d49985279e35fp-58, 0.0,
     0x1.8cf8c5b242da1p-784, 0.0, 0.0, 0x1.3bac4d6012777p-108, 0x1.c52e002c0c0ep-558,
     0.0, 0.0, 0.0, 0x1.00d18eb653e5fp-829, 0.0, 0x1.4c502a2f562edp-287,
     0x1.7fa0fa154e8f3p-994, 0x1.b1fbe58d01a29p-590, 0.0, 0x1.2e26e9bcf231bp-429,
     0x1.bf340d8a78f0cp-591, 0.0, 0x1.1841d27f44bdbp-496, 0.0, 0x1.a13e91f51c4ep-723,
     0x1.f792c7e8f995p-865, 0.0, 0x1.ca4a143a489adp-276, 0.0, 0.0,
     0x1.e58b53cf1ae9ep-721, 0x1.afca7fed127adp-855, 0x1.deba2fa5a267p-753, 0.0,
     0x1.64e2d3fc5e904p-29, 0.0, 0x1.1c4c9f5a16dfep-18, 0x1.14ec9fab95197p-333,
     0x1.1437608887587p-699, 0x1.4a1da4d968108p-768
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
            tmp1 = Sleef_finz_logd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_logd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logd1_u35purecfma bench acc %la\n", global_bench_acc);
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
