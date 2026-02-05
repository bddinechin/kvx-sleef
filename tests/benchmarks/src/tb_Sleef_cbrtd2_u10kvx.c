/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd2_u10kvx.c --function Sleef_cbrtd2_u10kvx \
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
     0x1.63851a5d62aa9p-407, 0x1.9a64dc376071ep-219, 0x1.29b9413746a84p-644, 0.0,
     0x1.4f43a7f3ba852p-220, 0x1.fb61857611c9dp-756, 0.0, 0x1.98cf8248efe0cp-263, 0.0,
     0x1.e6760722a61fdp-701, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28bd113bda24ap-750,
     0x1.0cce02d778653p-356, 0x1.1c5690538c984p-1009, 0.0, 0x1.d67274cafac14p-569,
     0.0, 0x1.7917a3a07997bp-524, 0x1.a8bf746515915p-523, 0x1.833581ddb530ep-323,
     0x1.6ef1bd61db014p-671, 0.0, 0x1.bace9acfc86d4p-367, 0.0, 0x1.f9cc76318c312p-14,
     0x1.7fa71a68d5faap-503, 0x1.4ddb41b992cc6p-88, 0x1.e9d8ad1227b3ap-505,
     0x1.da360ccace98bp-204, 0x1.3583321a2bf22p-38, 0.0, 0x1.12d518a84bf06p-437, 0.0,
     0.0, 0x1.2f661f5f4f77cp-426, 0x1.bb477e1d6708p-209, 0x1.1ed26ae0f05c7p-377,
     0x1.0c419191735c6p-140, 0x1.eef3c389521dap-512, 0x1.a64adbb31bafcp-577,
     0x1.19efc30d64eb4p-951, 0.0, 0x1.0085bd9b2ae7ep-498, 0.0, 0x1.7467278502603p-660,
     0x1.62891a7267bfep-667, 0.0, 0x1.51fae8c698a06p-361, 0x1.b6f909dd71e25p-268,
     0x1.e3121987868bcp-111, 0x1.07755cf2491aep-671, 0.0, 0x1.93b09d2337f14p-90,
     0x1.fc261f3136ca3p-474, 0x1.dc0b875b6aa26p-743, 0.0, 0.0, 0.0,
     0x1.9fdfdc438805p-308, 0.0, 0x1.94590987b73adp-381, 0x1.a608f83700378p-101, 0.0,
     0x1.612829e4ea8afp-477, 0x1.052f8c6bce979p-474, 0.0, 0x1.676815caa646fp-683, 0.0,
     0x1.7142cff961b7bp-282, 0x1.53de5fabc828dp-701, 0x1.ac0de675b7b66p-752, 0.0, 0.0,
     0x1.ef96f46bd6e15p-362, 0x1.513581cf6b8aap-1012, 0.0, 0.0,
     0x1.cab56bc4389eep-478, 0.0, 0x1.8b5984feb63cbp-626, 0x1.37e72cb23ac16p-817,
     0x1.9fefb95ad0fdap-367, 0.0, 0x1.9fa1fe27486c6p-241, 0x1.7f97d3eb572ccp-576,
     0x1.f02d6d0a784c5p-937, 0x1.73c260af45811p-308, 0x1.6cb02a1de96acp-2, 0.0,
     0x1.e70c10f8e1574p-288, 0.0, 0.0, 0x1.c84b6180e2489p-966, 0x1.17a3ac12549ap-675,
     0.0, 0x1.d58e6ab6ba04bp-190, 0.0, 0.0, 0.0, 0x1.e795bd6f8b6e6p-897,
     0x1.c8927def796dfp-402, 0x1.15bd0ba357a56p-524, 0.0, 0x1.48639cd92ed2cp-822, 0.0,
     0x1.9e74ece479ddap-392, 0x1.288bd642fec89p-486, 0x1.5cd7cc61a7826p-388, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d396283818518p-218, 0.0, 0.0, 0.0, 0x1.94a3e9ef941fap-1009,
     0.0, 0x1.f8449f72e643fp-327, 0x1.aa1cae51cdc94p-280, 0.0, 0x1.8ba44ee464493p-312,
     0.0, 0.0, 0x1.0a16d2ed9d7a9p-30, 0x1.61f0f9cea70dap-865, 0.0,
     0x1.159242c691998p-876, 0x1.38d980dbb45eap-570, 0x1.ea22984e2b65cp-875,
     0x1.a015401e5d6fap-135, 0x1.a06a16a0bdd85p-32, 0.0, 0x1.3bd9a3f993e21p-272,
     0x1.3e8188c009b55p-732, 0.0, 0.0, 0x1.df4938a26443ep-472, 0.0,
     0x1.7dc53cb65ec79p-445, 0.0, 0x1.4d17e1b351255p-999, 0x1.5a7dcab7ed0b5p-20,
     0x1.eaec2fe2d8133p-925, 0x1.1530ad1c39538p-890, 0x1.b98da3ed0883ap-476, 0.0, 0.0,
     0.0, 0x1.28639d31ffe5dp-785, 0x1.c18e367f638c6p-955, 0.0, 0x1.0bdb9c50f4bf9p-292,
     0x1.1435d2788d71p-259, 0x1.b0757a36d6cadp-130, 0x1.77a21d1993b38p-83,
     0x1.dba874cc7346cp-962, 0.0, 0x1.93ab15db39b37p-562, 0x1.0d3c542b9607ap-702, 0.0,
     0.0, 0.0, 0x1.89e4dba3703f1p-234, 0.0, 0.0, 0x1.43b76b9ee01b2p-331,
     0x1.a6de89c29703bp-286, 0x1.fcc6ed5f060c2p-577, 0x1.80489ae9cbf9fp-515,
     0x1.0a7d7f37b1dc7p-193, 0x1.49d030eb80f44p-695, 0x1.5a2e63f27e52p-721, 0.0, 0.0,
     0.0, 0.0, 0x1.417e9bea903e8p-949, 0x1.560d7987fd2b1p-504, 0.0, 0.0, 0.0, 0.0,
     0x1.65597684bea6ep-123, 0.0, 0x1.65a96175dbf62p-336, 0.0, 0x1.f342ac9571b19p-842,
     0x1.d70cc9a24b7b2p-834, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2ad94d301c0e5p-958,
     0x1.dce4989250138p-939, 0.0, 0.0, 0.0, 0x1.a975df795eb4ep-643,
     0x1.5f84415d2dc7p-985, 0x1.37fba7a987c63p-239, 0.0, 0x1.9137dca8ae257p-74,
     0x1.c8e2cc2683312p-761, 0x1.e5e94cb4072a1p-319, 0.0, 0.0, 0x1.da638ab0d0031p-845,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be29bea9e7d5ap-777, 0.0,
     0x1.525737dfb1223p-365, 0x1.f164a16d453e9p-444, 0.0, 0x1.16f462fc96598p-235, 0.0,
     0.0, 0x1.3c98f9ee9869cp-963, 0x1.36665a3dff135p-525, 0.0, 0x1.399b6a6f0fc13p-358,
     0.0, 0x1.9baeb99f5f46fp-146, 0x1.959a7e3f73b4fp-470, 0.0, 0.0,
     0x1.418da59368eadp-765, 0x1.e4d947c42d189p-84, 0x1.9a1c5bfb11838p-46, 0.0, 0.0,
     0x1.a0246fa1b37f7p-1013, 0x1.3456f610e0c1dp-775, 0.0, 0.0,
     0x1.3dc91768c6976p-590, 0.0, 0.0, 0x1.d47f756fae50ep-782, 0.0, 0.0,
     0x1.06252538ebac4p-284, 0x1.c14f1f1052adbp-604, 0x1.08c93f98d216dp-274,
     0x1.657f835a789b5p-220, 0x1.3491ffaf2895bp-756, 0x1.decb114964234p-926, 0.0,
     0x1.f812843ee6978p-65, 0x1.98f2613eb8c4bp-199, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.282eb627e75a3p-35, 0x1.a84629f1ca2b4p-254, 0x1.3c3c824beae8ep-105, 0.0,
     0x1.5c21904f467dfp-694, 0x1.986e2b0d2779ap-197, 0x1.a9ca0f4fd2b64p-411, 0.0, 0.0,
     0x1.2eb072848293p-163, 0.0, 0.0, 0x1.2fc8226385495p-618, 0x1.0aaf861da408cp-254,
     0.0, 0.0, 0x1.0df3ac1ac72b3p-725, 0x1.0c53fb75c3decp-448, 0.0, 0.0,
     0x1.4623bb8bc9ad3p-838, 0x1.5e347a9c52e62p-224, 0x1.2c26b55fef7aep-611,
     0x1.1901bcf202606p-420, 0x1.a08988c9e33c9p-249, 0.0, 0x1.f5aa328d62f53p-456, 0.0,
     0x1.f088a40e494cfp-307, 0x1.2e959e50bd4dap-748, 0.0, 0.0, 0x1.2999fa3be7b24p-12,
     0.0, 0x1.5c0e23e1985b7p-332, 0x1.5f13642a15ab3p-192, 0.0, 0x1.450481cd2cec2p-43,
     0.0, 0x1.2627fc8de82bbp-851, 0x1.bf4b55f4f78f7p-236, 0x1.fba94f1f7fceap-38,
     0x1.3ba03afde08e7p-130, 0x1.06c12077046a4p-492, 0.0, 0.0, 0.0,
     0x1.3f96babe37e02p-73, 0.0, 0x1.419c55074b98ep-568, 0.0, 0x1.90e6c2846e713p-63,
     0x1.2cc4903151d43p-551, 0.0, 0.0, 0.0, 0x1.3ecd72b0c79a2p-26, 0.0, 0.0, 0.0, 0.0,
     0x1.32576298eca6fp-812, 0x1.db781b1cc0686p-12, 0x1.e629b6862b6d2p-265,
     0x1.c764a09649ad4p-428, 0x1.5ec30340d0ef6p-1018, 0x1.b283d8a7e4183p-30, 0.0, 0.0,
     0.0, 0x1.167c9dc916b2ap-942, 0.0, 0x1.d981bcd647191p-723, 0.0, 0.0,
     0x1.ba2f4f53b0cf8p-232, 0x1.f8193cad961cbp-801, 0.0, 0.0, 0x1.c39c5007d8a37p-75,
     0x1.e506e748687e8p-164, 0x1.3e7b347308f27p-515, 0x1.c57c9c1d83477p-335, 0.0, 0.0,
     0x1.a04a343afe6ap-588, 0x1.83624fc9d8056p-568, 0.0, 0.0, 0.0,
     0x1.1c3cfb90a56abp-939, 0.0, 0x1.4dc8ffc64ac5ap-899, 0.0, 0x1.435f85e5923d7p-551,
     0x1.2052deda0634p-386, 0x1.f60663da9c756p-657, 0x1.d85ccb623966bp-314,
     0x1.1cec02659020fp-263, 0.0, 0.0, 0x1.06a0aea31266cp-592, 0.0, 0.0, 0.0,
     0x1.fb1a2eee57ebp-221, 0.0, 0.0, 0.0, 0x1.0626fecd09b2ap-424,
     0x1.173f4cadc0aeep-352, 0x1.19f297806c304p-1006, 0.0, 0.0,
     0x1.bb542c4b17b3ep-873, 0.0, 0.0, 0x1.e8b0db829bf3p-639, 0x1.972c64e2fcb07p-920,
     0.0, 0x1.427450abde841p-409, 0x1.2150e804122cfp-30, 0x1.952e91aaf7ddp-648, 0.0,
     0x1.652aa0ec45e52p-5, 0x1.c9ddd4af6ea05p-466, 0.0, 0.0, 0x1.cc73655e2f22ap-344,
     0x1.72dd94d547cf7p-292, 0.0, 0x1.585e12d5b626fp-315, 0x1.1846572eacef3p-886, 0.0,
     0.0, 0.0, 0x1.051977e9c9ffdp-103, 0.0, 0x1.05b9360c8abbap-777,
     0x1.399ffcf9406f6p-850, 0x1.4fb43103bd4a2p-465, 0.0, 0.0, 0x1.2edb7f255271dp-410,
     0.0, 0x1.c82fac1b6fcd4p-109, 0.0, 0.0, 0.0, 0.0, 0x1.bb0152386035fp-796,
     0x1.7a879dcaf9217p-861, 0x1.d1d646ae59fcfp-978, 0x1.3db863aaaddd8p-396,
     0x1.3ef8f60f51cd4p-984, 0.0, 0.0, 0x1.b2c243edcf04cp-410, 0x1.0cc63e94ce744p-189,
     0.0, 0x1.358c78a88bf04p-915, 0.0, 0x1.b9f07a0d27cb5p-417, 0x1.213e773593f5ep-570,
     0x1.cb1b7d9437f0cp-59, 0x1.caac633a4614bp-797, 0.0, 0x1.0680a83b27d19p-225, 0.0,
     0.0, 0.0, 0x1.392581e8c70d1p-934, 0x1.44dc6ac0b684cp-28, 0x1.2728126b80fc4p-864,
     0x1.adb60b7778759p-453, 0x1.9f83723f0fe7fp-971, 0.0, 0x1.c708aa8260fd6p-174, 0.0,
     0.0, 0x1.68c96051bf5b3p-668, 0.0, 0x1.ec22c6bae79e5p-442, 0x1.f493be400edfap-916,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc0bb7d5bbf36p-520, 0x1.c589054ad1145p-607,
     0x1.9333c0481cf7dp-260, 0.0, 0x1.44e27e0c74a9fp-859, 0x1.738351696ae44p-313,
     0x1.af47f667e9979p-325, 0x1.705697ff0e4dcp-244, 0x1.ed277a0e26a91p-551, 0.0,
     0x1.25262e06a41a6p-131, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fbfccb573494fp-727,
     0x1.089541b2609e4p-603, 0.0, 0x1.2680972bde86cp-270, 0x1.6fc4c2a38a7c2p-666, 0.0,
     0x1.8e992d51bfcc6p-576, 0.0, 0x1.a50b3aa2c4fd8p-99, 0.0, 0.0,
     0x1.f309362d9005cp-115, 0.0, 0.0, 0x1.244e350762e0cp-695, 0x1.2c41555a1208ap-444,
     0x1.b20343488f658p-881, 0x1.a1a0cc02daf3ep-890, 0.0, 0x1.b485486dcaf5bp-881,
     0x1.c998e366dc371p-722, 0x1.6e5121853d42p-751, 0.0, 0.0, 0x1.aa3b4ad157051p-275,
     0x1.33a2a89c179f8p-668, 0.0, 0x1.d3fae15cb8ca3p-284, 0.0, 0x1.3b569d88da32cp-28,
     0.0, 0.0, 0.0, 0.0, 0x1.501acd1592377p-979, 0x1.32e9af7cb387fp-516,
     0x1.8e84c4cd7260ep-134, 0x1.8cfe5323cd7b5p-60, 0.0, 0.0, 0x1.bf5b2474102e4p-834,
     0.0, 0.0, 0x1.0375cb7cafa7fp-100, 0x1.8236f857472b4p-18, 0.0, 0.0, 0.0,
     0x1.a1d5ea24e9789p-901, 0x1.f2c3c1f430fb2p-370, 0.0, 0x1.68aea230d8722p-655, 0.0,
     0x1.e67fdf07d9677p-805, 0.0, 0x1.d7dd6683a5212p-71, 0x1.fec48f1edbf4bp-248,
     0x1.72e84ee7db7a3p-957, 0.0, 0x1.ce1eca7e480f6p-701, 0x1.c2658a80b98fap-554, 0.0,
     0x1.fef864b7d2c1cp-509, 0.0, 0.0, 0x1.0e9b217bb28dep-989, 0.0,
     0x1.babd5a5f9823ap-705, 0.0, 0x1.1714acf275545p-922, 0.0, 0x1.97517a05549a3p-596,
     0x1.44a3248d39531p-762, 0x1.a60856c639d1ap-452, 0x1.71d982913da8ap-688, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6ecb5f8c0215ap-129, 0x1.3080d7c679325p-808, 0.0, 0.0, 0.0,
     0x1.05284d820e182p-921, 0x1.eca2203f853d1p-1019, 0x1.7501650c80ecep-587, 0.0,
     0x1.13ba2cee061dep-136, 0x1.ac25a45b5e411p-185, 0x1.ed21db7ae68aap-914, 0.0, 0.0,
     0.0, 0x1.ceb0f03e68013p-120, 0x1.e9b1439f70f1dp-455, 0.0, 0x1.488ffd6c7da0cp-183,
     0.0, 0x1.e3357a5ddad3dp-691, 0.0, 0x1.b36972c9acb14p-736, 0x1.98a4801411649p-119,
     0x1.6f441a5656beap-461, 0.0, 0x1.7c3520f9a3d94p-718, 0.0, 0x1.c80e20a601b35p-599,
     0x1.dc1098eb00eb6p-786, 0.0, 0x1.84b5dedfee51p-759, 0.0, 0x1.45405e0106312p-882,
     0.0, 0.0, 0x1.3b79e437aa245p-937, 0x1.106f49720aab1p-1022,
     0x1.ced81d88b3b84p-906, 0.0, 0x1.20f539b04p-235, 0.0, 0x1.27f799beae57p-273,
     0x1.d518473b25de7p-156, 0.0, 0x1.7a856bccf9b4fp-868, 0.0, 0.0, 0.0,
     0x1.bf50d16b64272p-912, 0x1.55aef30962985p-440, 0x1.2c05b6808e8b9p-435,
     0x1.c260a0aa95f86p-441, 0x1.b0cf5f14887bep-698, 0.0, 0.0, 0.0,
     0x1.7e8b8a2cb0062p-728, 0.0, 0.0, 0.0, 0x1.2e92fc221505ep-206,
     0x1.028b76ef6a5d5p-901, 0x1.3f470effca49p-711, 0.0, 0x1.5478f97c550b6p-943,
     0x1.585a219f74cebp-893, 0x1.1ce4214755649p-369, 0x1.fdd3cac266315p-660,
     0x1.9caf2bd60c056p-436, 0.0, 0.0, 0x1.43a4e6dc0fb54p-858, 0x1.012fa8bce06b5p-501,
     0.0, 0x1.7bb14be14ab89p-909, 0.0, 0x1.504453f82fdb5p-987, 0x1.de4101a58199bp-769,
     0.0, 0.0, 0.0, 0x1.fa49c28dcf5f3p-306, 0.0, 0x1.6c0c9976ce857p-553, 0.0, 0.0,
     0.0, 0x1.c81f9cd022b63p-740, 0x1.e0d83a595e176p-999, 0x1.ee93a277c59b9p-291, 0.0,
     0.0, 0.0, 0x1.41cc71dedec55p-325, 0x1.69d53d5e4b53ap-219, 0x1.efa1987d6804fp-153,
     0x1.bf80076a832adp-503, 0.0, 0x1.cf67579b08c39p-373, 0x1.136e7c8379479p-921,
     0x1.1b78e1ba4624fp-163, 0.0, 0x1.204f50596febfp-499, 0x1.51c8c3591f314p-221,
     0x1.18e32fc56a584p-1018, 0.0, 0.0, 0x1.9670f748c8764p-437,
     0x1.e58df045ff98cp-956, 0.0, 0x1.6fc9a01512f3p-899, 0.0, 0x1.b369ca57f3466p-971,
     0x1.4a82afb6973c2p-218, 0x1.7a0c0de3ad6a8p-207, 0.0, 0.0, 0x1.3ee3cc3578613p-319,
     0x1.e981afdcfab2cp-189, 0x1.462d6e958a70bp-142, 0.0, 0.0, 0x1.bc0c7c7c1da2fp-799,
     0x1.f29e0413e603bp-333, 0x1.e1f6aed2b0be2p-715, 0x1.be65c44c4d523p-790,
     0x1.6f23d9aa06e3ap-532, 0.0, 0x1.548a11e312f31p-911, 0.0, 0.0, 0.0, 0.0,
     0x1.3f7be52a1286ap-309, 0x1.f7f81cf75d414p-951, 0x1.e475e5ae42991p-95,
     0x1.683627c278e96p-470, 0.0, 0.0, 0.0, 0.0, 0x1.4ca8885530124p-30, 0.0,
     0x1.14e001796e4f3p-424, 0.0, 0.0, 0.0, 0x1.9dba2ad591af5p-878,
     0x1.83b97205afbdep-231, 0x1.075313b31424dp-477, 0.0, 0.0, 0.0,
     0x1.bd657eb640414p-679, 0.0, 0x1.0e40d015e47d1p-183, 0.0, 0.0,
     0x1.790fdfa2e90cbp-262, 0.0, 0x1.3581006b6d35ap-519, 0.0, 0x1.c4d1b75f831f6p-496,
     0x1.ecdad2fecf0d5p-325, 0x1.cc53512d3a10ap-449, 0.0, 0x1.784728bd7629fp-672,
     0x1.7f3cda6a2955p-990, 0.0, 0x1.4a82cb043677bp-684, 0x1.88b62625d7811p-720, 0.0,
     0x1.6d850f5a82b34p-73, 0x1.d8ff5a82f9c8ep-763, 0.0, 0.0, 0x1.69dacef7f4a3ap-369,
     0x1.ca60c5be81e4ap-742, 0.0, 0.0, 0.0, 0x1.a4bc0ab6bf78p-913, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9b3d08f2f6fc8p-437, 0.0, 0.0, 0x1.ce6b97e8dad85p-999,
     0x1.2e73c2bb4b92bp-840, 0.0, 0.0, 0.0, 0.0, 0x1.32f8832a83583p-301, 0.0, 0.0,
     0x1.e017541122dcep-164, 0x1.6985281b17e16p-594, 0x1.a40fc8791213ap-75, 0.0,
     0x1.716d39c28670cp-636, 0x1.1793bc468d005p-190, 0.0, 0x1.49f967f8eb873p-53,
     0x1.a5fd3dcfa623bp-253, 0x1.523e3925e60b9p-397, 0x1.6b2c24b81cc0ep-269,
     0x1.6ce92eba94b91p-899, 0x1.a29344a901dp-466, 0x1.a6e8ab0a0cfd3p-520, 0.0, 0.0,
     0x1.22fd4e99dce92p-781, 0x1.9d37968824578p-605, 0x1.43a73a5988e4p-703, 0.0, 0.0,
     0x1.f3dde467d8cc5p-589, 0x1.56939c7e9d4a1p-218, 0x1.3975868059e92p-136,
     0x1.0bb2ae4663e3bp-121, 0x1.1253710bdaeafp-139, 0x1.5c22b7d3c561fp-810,
     0x1.db9e2745acc91p-867, 0x1.e1093ccc717f3p-805, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dde2aa925ab8cp-602, 0.0, 0.0, 0x1.d0a60946cb6dfp-711, 0.0, 0.0,
     0x1.da0318ef24ddcp-850, 0.0, 0.0, 0.0, 0.0, 0x1.48f1564406ab6p-678,
     0x1.580bb8c2a8558p-333, 0x1.aacf9a9f547a1p-377, 0.0, 0x1.47b034c3b75bfp-976, 0.0,
     0x1.2b38b8d5444f3p-687, 0x1.20c00cf750302p-796, 0.0, 0x1.cf2a691c3e709p-212,
     0x1.3375f810a9a2bp-171, 0.0, 0.0, 0.0, 0x1.ef81c27c3a936p-820,
     0x1.e6b7b02274eeap-757, 0x1.4b8ecfbc06522p-840, 0.0, 0x1.3eaaaa05dd0bcp-901, 0.0,
     0x1.44c166f40c9c5p-769, 0.0, 0x1.230456ea3d575p-629, 0x1.47438b2bd325cp-750,
     0x1.c4825a9d1b163p-967, 0.0, 0.0, 0x1.b7d3505c5d11ep-757, 0.0,
     0x1.ec4ab2ab9ab5ap-937, 0.0, 0.0, 0x1.f689c6e02b08dp-120, 0.0,
     0x1.6be5ec110303cp-834, 0.0, 0.0, 0x1.9334fc241decfp-74, 0x1.d716f5af657c4p-299,
     0.0, 0.0, 0x1.1cecfcf7078ebp-19, 0.0, 0x1.21e95715aaf6p-922,
     0x1.4f2767950449fp-962, 0.0, 0x1.7848a408e69a1p-269, 0.0, 0x1.3d675e1a0295ep-625,
     0x1.ad382462e0d99p-44, 0.0, 0.0, 0x1.569f1f57cb656p-224, 0.0,
     0x1.3946082410285p-467, 0.0, 0x1.0f94e1a5c0c7fp-393, 0x1.b772bbc344792p-340, 0.0,
     0.0, 0x1.0394357a58b95p-783, 0x1.468dd7bbd73f4p-506, 0.0, 0.0, 0.0,
     0x1.3b36be0ca2a03p-162, 0.0, 0x1.a73ebaad9ccc5p-544, 0.0, 0.0,
     0x1.a7f53603385ecp-847, 0x1.32f810a26dc64p-654, 0x1.a4b9e3a98fb1ep-799,
     0x1.9f3c6dd4e8e2cp-417, 0x1.04fd12c7d54d3p-942, 0.0, 0.0, 0x1.5a81df96a9f09p-868,
     0.0, 0x1.68cd470e81ab1p-369, 0x1.c169dd7adc342p-709, 0.0, 0x1.c87579758f3acp-363,
     0x1.1f9e9aad9a02ap-970, 0.0, 0x1.3cbeb127220f7p-347, 0x1.784b73d196774p-161, 0.0,
     0.0, 0x1.75517b4bd784ep-942, 0.0, 0.0, 0x1.181de5cc58427p-358,
     0x1.ca7d585bbded4p-765, 0.0, 0x1.5432eebd76e5p-129, 0.0, 0.0, 0.0,
     0x1.5d20c81ae72bdp-520, 0.0, 0.0, 0.0, 0x1.b086337631339p-637,
     0x1.5d1c3f7ffde0dp-867, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.940c4dfa5db7p-914, 0.0, 0.0,
     0.0, 0.0, 0x1.ba3a6e51ad34bp-182, 0x1.a4feaa4b66445p-800, 0x1.1600e14d127d6p-311,
     0x1.6e833dbfdec95p-597, 0.0, 0.0, 0.0, 0x1.fa094f4c90efdp-431,
     0x1.4a05e41dc0ep-138, 0x1.f26ceb3dbe43p-1000, 0.0, 0x1.65b22765ef389p-292, 0.0,
     0.0, 0.0, 0.0, 0x1.ebcaa2f0da6b6p-907, 0x1.0fa8644a8527p-343, 0.0,
     0x1.3c17c8cb8df6fp-308, 0.0, 0x1.2d2969cf1e72ap-320, 0x1.b1bea4ed2bc29p-656,
     0x1.06b777843a7c5p-370, 0.0, 0.0, 0x1.74fcec50c872ep-139, 0x1.d2d1b113a9778p-283,
     0x1.efa92da707cc5p-806, 0x1.9b58d282eef79p-937, 0x1.9697dee62d091p-872, 0.0,
     0x1.0b6ab89554a72p-460, 0.0, 0x1.9e098bb6cd327p-1021, 0.0,
     0x1.083b20796f758p-458, 0x1.7ba6263ab2c1ep-974, 0x1.c532d5b92658ap-259,
     0x1.da7cecbbefea2p-152, 0.0, 0x1.1660695d7b8e1p-243, 0.0, 0.0,
     0x1.825f9efb495e2p-279, 0x1.441fce04ded2dp-903, 0x1.c7f9294f837acp-413, 0.0, 0.0,
     0.0, 0.0, 0x1.e6c3bc67af21cp-803, 0x1.fcdd891c153ffp-630, 0.0, 0.0, 0.0, 0.0,
     0x1.f9fbc8aaa3b2cp-718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5002c0dbc3006p-1021,
     0x1.97b658b2ae59ep-344, 0.0, 0x1.5dcb2d28480d2p-518, 0x1.74bd55e81b5d9p-1011,
     0x1.0cd248240c20cp-313, 0x1.fc91d404fb5abp-76, 0x1.2eb65f1b7343ep-769, 0.0, 0.0,
     0x1.7f005a0b19298p-570, 0.0, 0x1.6d2ba1e00e78bp-705, 0.0, 0.0,
     0x1.a9722d934fbfbp-376, 0x1.938180d1468ccp-530, 0x1.b75c28311da61p-792,
     0x1.1bccaf8f3413ap-961, 0.0, 0x1.481ae395538ddp-939, 0x1.28332f5671403p-661,
     0x1.53465bc0b7d8bp-520, 0.0, 0x1.afda3a02e6d63p-132
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
            tmp1 = Sleef_cbrtd2_u10kvx(tmp0);
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
    printf("Sleef_cbrtd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cbrtd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
