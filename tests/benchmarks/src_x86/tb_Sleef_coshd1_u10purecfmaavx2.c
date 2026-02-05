/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd1_u10purecfma.c --function \
 *     Sleef_coshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.da7288ad00c3ep-184, 0.0, 0x1.eaf3cdaf56fb5p-40, 0x1.529569e0e1e02p-763,
     0x1.4552709c0235cp-335, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f642b958b2dd8p-578,
     0x1.6d78d905b4907p-257, 0.0, 0x1.95b209660e90dp-115, 0x1.11aa36a2cc054p-918, 0.0,
     0x1.fb6af658a4613p-524, 0.0, 0.0, 0.0, 0x1.4daaefcce671dp-618,
     0x1.ece983e907568p-723, 0x1.d5c652061e8aap-172, 0x1.cd2571c0ad585p-510, 0.0, 0.0,
     0x1.852b73ff1f881p-23, 0.0, 0x1.12204c8bd658ep-190, 0.0, 0.0, 0.0,
     0x1.3da32b8f429dcp-150, 0x1.2b57e02ae9e6fp-410, 0x1.f924838d8e917p-457, 0.0, 0.0,
     0x1.6417dd0aa73b7p-504, 0.0, 0.0, 0.0, 0x1.9c79d9f97fe93p-508, 0.0,
     0x1.27a180bb90819p-492, 0.0, 0x1.c237f38e970eep-63, 0x1.a1731aa897ee7p-132,
     0x1.881be9df9099ep-981, 0x1.4751cc7c9d39ap-840, 0x1.497cd1acf296p-72,
     0x1.1b4d8110a1b58p-694, 0x1.c3cb3a6c2f218p-951, 0.0, 0.0, 0.0,
     0x1.f31cdb58096d6p-536, 0.0, 0.0, 0.0, 0x1.efb58fff934dep-7, 0.0, 0.0, 0.0, 0.0,
     0x1.f79bd48c45cd9p-724, 0.0, 0.0, 0.0, 0x1.a79f93e264906p-1003,
     0x1.16afe29d5615dp-569, 0x1.f5b40cf35630cp-1017, 0x1.5ef0b8dcfe265p-504, 0.0,
     0x1.33786f131b676p-541, 0.0, 0.0, 0x1.ae92a54c7972p-221, 0.0,
     0x1.5925084c55b11p-556, 0.0, 0x1.cebc8fb6e194cp-477, 0x1.451429df8787cp-60,
     0x1.d8de28d9e5f01p-314, 0x1.b71cce1f84ac5p-955, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3b842b88a9fe4p-684, 0.0, 0x1.af4a1d84d535dp-87, 0.0, 0x1.3a5cec0a3fc9p-747,
     0x1.4f7b559d36f5bp-728, 0.0, 0x1.7793435bc74c9p-57, 0x1.eed330249622ep-345,
     0x1.30f0b578e4fe5p-894, 0x1.f0e6e58562b32p-627, 0.0, 0.0, 0x1.ba1b90054cc33p-576,
     0x1.e2c9124a37887p-754, 0.0, 0.0, 0x1.2129df6e9c66dp-725, 0.0, 0.0,
     0x1.9d1163f59f529p-649, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea46f2e976b0ap-771,
     0x1.4312f74886d72p-145, 0x1.41594b7824a28p-462, 0.0, 0.0, 0x1.aadb0cfc9184ap-285,
     0x1.2b99c8f28fd6fp-405, 0.0, 0x1.e83d3176956b8p-6, 0x1.a198a900a17e5p-756, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.71f82db0d7c03p-799, 0.0, 0.0, 0x1.10d3c119fd47dp-880,
     0x1.e7a03dae45457p-446, 0.0, 0x1.4047b87bfb3b7p-345, 0.0, 0x1.95085836952f1p-611,
     0x1.6a2c479bc16bep-528, 0x1.e88325e281701p-245, 0.0, 0x1.f698bf81fc6b5p-342,
     0x1.89b05e030e758p-204, 0x1.44bfa8bc91db8p-830, 0x1.fa02c36220483p-660, 0.0,
     0x1.c5826eb0c3079p-401, 0x1.75c9339d53e44p-757, 0x1.8405b9587e6c5p-995, 0.0, 0.0,
     0x1.715d5c6747705p-761, 0x1.56a14ca3a3a49p-231, 0x1.0ccbe94023729p-519,
     0x1.b11c87e5fd561p-12, 0x1.cf73ed1440abcp-386, 0.0, 0x1.a7873e70ad6d5p-568, 0.0,
     0.0, 0x1.ef2d500f077d2p-429, 0x1.888d634a6decep-772, 0x1.e2d7035cf4068p-796,
     0x1.c297e9928e872p-675, 0x1.f9c1cd5374c1ap-526, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1951d23c99e4fp-339, 0.0, 0.0, 0.0, 0x1.82fb3730a8946p-698, 0.0, 0.0,
     0.0, 0.0, 0x1.65f841c2c1808p-249, 0x1.a8450afa79fdep-344, 0.0, 0.0,
     0x1.d7ec30947eadp-78, 0x1.578b65927b1e7p-350, 0.0, 0.0, 0x1.28c90b77d804bp-155,
     0.0, 0x1.3b2ec915dc33ep-618, 0x1.ce914378e44e2p-839, 0x1.9dfb76fa83563p-941,
     0x1.b76b6328b4685p-172, 0x1.1001990f395a8p-213, 0x1.e2de2e0a56f29p-364, 0.0, 0.0,
     0x1.4d7f9769f52d7p-194, 0x1.50ccc988742afp-607, 0x1.17049cb1e4e75p-190, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d2780dc0df799p-778, 0.0, 0.0, 0.0, 0.0,
     0x1.64568d6b65193p-697, 0.0, 0.0, 0.0, 0x1.d80f9940052ccp-576,
     0x1.ad37d84c0ec34p-552, 0.0, 0x1.8e352ac1feea6p-118, 0.0, 0.0, 0.0,
     0x1.06d9fafe456ep-913, 0x1.b77cf1ef233d7p-647, 0x1.3c7c8d5ef67ecp-203,
     0x1.ca14cf64cfeacp-489, 0x1.7fe0250f81ea3p-94, 0x1.05a93746616c1p-411, 0.0, 0.0,
     0x1.a43e1e375fcf8p-246, 0x1.26c7796e30e22p-101, 0.0, 0.0, 0x1.7745644cf266ep-664,
     0x1.417499748d5a7p-19, 0.0, 0.0, 0.0, 0x1.e5b19b23a4ddep-730,
     0x1.f04125982eea7p-857, 0x1.72c1f6272da56p-732, 0x1.72bce606c71b8p-139, 0.0, 0.0,
     0x1.ff32f6cedd63cp-485, 0x1.9d2d81d444719p-130, 0x1.0ff7fbd822565p-468,
     0x1.c8de2210844efp-283, 0x1.c340328e0cd48p-431, 0x1.73ecab38bfbb6p-977,
     0x1.6dd7ae9f592dbp-704, 0x1.e2e18acf41ec6p-784, 0.0, 0x1.8825ee4bb283cp-447,
     0x1.3bfec1f879cc7p-504, 0.0, 0x1.4cc41f22990f4p-483, 0x1.ae60cf9ea0328p-981,
     0x1.a77f07833890ap-987, 0.0, 0x1.fd057a43d624fp-64, 0.0, 0.0, 0.0, 0.0,
     0x1.ffa8fca94fb1ep-201, 0.0, 0.0, 0.0, 0x1.df1c7a37bf55cp-966,
     0x1.a6c2448a31fdbp-487, 0x1.f6dfc1da98521p-45, 0.0, 0x1.46eea131ff0f3p-296,
     0x1.d0c75d2b4613dp-730, 0.0, 0x1.2a685fd081c52p-119, 0x1.4bce744404e06p-851, 0.0,
     0x1.23222656c2329p-793, 0x1.c6a1a256ef76fp-812, 0x1.112f5dfb1048cp-495, 0.0,
     0x1.118a56d724167p-596, 0.0, 0.0, 0.0, 0.0, 0x1.1d5205aeae5p-454, 0.0, 0.0,
     0x1.43d9e864c7094p-377, 0x1.718dc6521d4f8p-88, 0x1.efcf17ee50a1p-959, 0.0,
     0x1.46927dec24522p-525, 0.0, 0x1.2ef62a0429141p-15, 0x1.2a0c69b188027p-186,
     0x1.2adc6b19ad85cp-228, 0x1.a415a27bd2f99p-872, 0x1.385ac86d0034ap-167,
     0x1.7e5a22d4f81ccp-127, 0x1.8e10afa158e21p-370, 0.0, 0.0, 0x1.6b38b77b07362p-83,
     0x1.cfe75ac6e67d4p-485, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3cd791adf1233p-880,
     0x1.98c939f43f1b8p-613, 0.0, 0x1.7444338389a6ap-840, 0x1.0962f4188363ep-950,
     0x1.6e375397a1ec8p-497, 0x1.06eefbdb2c97bp-586, 0x1.788d47cf97bf7p-274,
     0x1.c662c4dab6851p-86, 0.0, 0x1.1ebad1c624989p-322, 0x1.290b3f179a662p-295,
     0x1.17d22a1e25d4p-757, 0x1.19204b741fbd1p-57, 0x1.bb7084a3c8737p-30,
     0x1.68696d6725c1cp-297, 0.0, 0.0, 0x1.55d0c55098a05p-453, 0x1.681d456285b39p-471,
     0.0, 0.0, 0x1.6a9f88336c42ap-227, 0.0, 0x1.dcba9bbc57e29p-199,
     0x1.530e4fa8d2b85p-451, 0.0, 0x1.15f80bed8a3e1p-723, 0x1.6bb7fc398be39p-251, 0.0,
     0x1.54faa8cbf359fp-987, 0x1.6f907166923efp-308, 0.0, 0.0, 0x1.372f9332e2718p-197,
     0.0, 0.0, 0x1.72b85807c2b62p-495, 0x1.61a63e3c4573cp-167, 0x1.7b83b037604e4p-870,
     0.0, 0x1.27f068f0fa89bp-1010, 0x1.51033a44a585p-141, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.097aa9d92d17cp-457, 0.0, 0x1.b9af755215251p-230,
     0x1.5ba87f912fd02p-574, 0.0, 0.0, 0x1.40c15f1e90d4dp-827, 0x1.1fb999573fadep-640,
     0.0, 0x1.ffd99d03c1993p-117, 0x1.cea9b490993f9p-192, 0x1.ca3d3a175a0acp-825,
     0x1.88af5d21d0d2dp-686, 0.0, 0.0, 0.0, 0x1.4ac39b1446c18p-315,
     0x1.869f48ee20b1ap-996, 0x1.30c4b4cca6851p-670, 0.0, 0x1.2850f9f6b2a61p-505,
     0x1.0cd574a67b05p-561, 0.0, 0.0, 0x1.e82f326b9e232p-173, 0.0,
     0x1.0e86c984e3ecfp-64, 0.0, 0.0, 0x1.6a1505783aa5p-721, 0.0, 0.0,
     0x1.17f0ce5b9dff3p-545, 0x1.1049c93b30991p-14, 0.0, 0.0, 0x1.a693088fb04adp-243,
     0.0, 0x1.6facc704d96ccp-396, 0x1.e0b14293bafe6p-742, 0x1.b5d817a3c1c61p-712, 0.0,
     0x1.7be549e11ba77p-464, 0x1.811e2533f5766p-406, 0x1.682009431a3fep-393, 0.0, 0.0,
     0.0, 0.0, 0x1.33887534acc39p-395, 0x1.06a9cd9505ca8p-417, 0x1.9d813a3ad56c6p-187,
     0.0, 0.0, 0.0, 0.0, 0x1.04509941f8e11p-34, 0x1.4d7edaa599729p-632, 0.0,
     0x1.d6d4391f2fc8dp-680, 0x1.f132b764deb1cp-915, 0x1.128947791489ep-256,
     0x1.e5b7ecfdf3f7cp-111, 0x1.27ffcccfca6c1p-580, 0x1.a95f19e52a2f9p-719,
     0x1.91899fea277f2p-354, 0x1.2fbd69e03ea43p-801, 0x1.2e70d14f4a63dp-28,
     0x1.3e6454623f68ap-745, 0x1.09bbec3aee96p-593, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c09298609235cp-698, 0.0, 0.0, 0x1.175a9e5f6b617p-238, 0x1.754868d573819p-148,
     0x1.18e70af1ee57ap-270, 0x1.3191d52747ad3p-926, 0.0, 0.0, 0x1.0ac6f7196be35p-360,
     0x1.f1e077f4cc476p-595, 0.0, 0.0, 0x1.a3199ec3a91b7p-781, 0x1.f95c6271b8d4bp-528,
     0x1.b72911fbf81fbp-368, 0.0, 0.0, 0.0, 0.0, 0x1.3d2787a6257dbp-121,
     0x1.3fc268f706d1ep-109, 0.0, 0.0, 0x1.bc045ed75a017p-748, 0.0, 0.0,
     0x1.1b6719c2768ffp-152, 0x1.edcaf40adc8fdp-310, 0x1.24c56868659abp-192,
     0x1.26860fc1d7c89p-568, 0.0, 0.0, 0x1.6e6f904417d98p-217, 0x1.90f584dfb0c73p-86,
     0.0, 0.0, 0x1.49188c4cbec08p-498, 0x1.70be449cda5bdp-564, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.528aba52ec7e7p-721, 0x1.8ecf9735601p-524, 0.0, 0x1.daf80dee98aabp-288,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e88bd7c68e416p-140, 0x1.84a5c6962f076p-320,
     0.0, 0.0, 0.0, 0.0, 0x1.99c02747157bap-612, 0.0, 0.0, 0x1.e1a2e7595a088p-440,
     0x1.aba091a931b9ep-303, 0x1.1539caea972cap-983, 0x1.b69f6d71bc5dbp-350,
     0x1.1a3e58387f0c4p-190, 0.0, 0x1.3277a55ca1167p-635, 0x1.0ed893841f2fbp-129, 0.0,
     0x1.3ed6331e18f44p-20, 0x1.06b94a21b471fp-153, 0.0, 0x1.c70621ac808ecp-831, 0.0,
     0x1.1f7ea1ee0f814p-871, 0x1.fb16b75a4e452p-172, 0x1.991df81e9eda9p-2, 0.0,
     0x1.aca3744cf2d59p-151, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.45407428d57a7p-479, 0.0,
     0.0, 0x1.8a036fb93e21fp-870, 0x1.8dda770efe509p-481, 0x1.3f2072f0f9491p-519, 0.0,
     0x1.ae79cdf5ecc72p-6, 0x1.81225d80fefb8p-124, 0.0, 0x1.4e1c841c72cd2p-205, 0.0,
     0.0, 0x1.e3b3445680427p-50, 0.0, 0.0, 0.0, 0x1.5ec76f3b482edp-828, 0.0,
     0x1.30d9a796eab75p-758, 0x1.28854af3c39d3p-68, 0x1.485ba94d9e1d6p-618, 0.0, 0.0,
     0x1.cf79a35a7ae4cp-503, 0.0, 0.0, 0x1.dabbdd31bb667p-164, 0.0,
     0x1.04a6121c01cbap-597, 0.0, 0.0, 0x1.d25448148369cp-122, 0.0,
     0x1.e4ec685fe48d6p-458, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.115abad3a4b6ep-137,
     0x1.6271458444edfp-974, 0x1.33d663c9612dbp-850, 0x1.fc9279ade2158p-808,
     0x1.48889e3fdd609p-16, 0x1.36f9ea6afd96ap-552, 0x1.a3da92576e92ap-155, 0.0,
     0x1.2f255290cf56p-95, 0x1.26925804e33b2p-591, 0x1.a5cf1d87a7ce8p-767, 0.0,
     0x1.cce5a780edc1ap-526, 0x1.c7d2b0f3d031ep-940, 0x1.55eef3e767208p-296,
     0x1.e9785a3fe39f9p-207, 0x1.6fc3e91c5d523p-578, 0.0, 0x1.f172c41521d07p-413, 0.0,
     0x1.7750e45b99f2p-79, 0.0, 0.0, 0x1.5e934813dc1aep-947, 0.0, 0.0, 0.0, 0.0,
     0x1.3eb96053bb0d4p-76, 0x1.93e575aa30ebap-880, 0x1.005f7c1702957p-249,
     0x1.3876a2424f83bp-730, 0x1.b1aa0585d6712p-641, 0x1.55de77ae9e919p-271, 0.0,
     0x1.544f2c7b862b5p-571, 0.0, 0x1.70d797e2d0e9ap-228, 0x1.40390e43f512fp-179,
     0x1.952ced570b8f7p-899, 0x1.b7dd3fe064f85p-427, 0x1.baa07b0d88152p-973, 0.0, 0.0,
     0x1.eafc61fb09a55p-240, 0.0, 0.0, 0.0, 0.0, 0x1.13fd81c0c2f85p-66,
     0x1.549a22de5b98dp-816, 0x1.3d4447cbaa6e7p-930, 0x1.4be2a1edd50acp-784, 0.0, 0.0,
     0x1.b689d8d7cfecbp-994, 0x1.51996b238096ap-527, 0x1.8d74d5aa23e6dp-244, 0.0,
     0x1.aa13c02b8a75dp-609, 0.0, 0x1.2bc038bc416acp-575, 0.0, 0.0,
     0x1.d646e0f97d01cp-405, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8abc19accce1dp-28, 0.0, 0.0,
     0x1.738a94d77e094p-348, 0.0, 0.0, 0x1.eeab2a1961c3ap-89, 0x1.86249aedd72b5p-923,
     0.0, 0.0, 0.0, 0.0, 0x1.aa13bd3349a26p-580, 0.0, 0.0, 0x1.f81c9ef7926e1p-243,
     0x1.3ba698726c888p-31, 0x1.99dccdf69839bp-331, 0.0, 0x1.cb5db123e536dp-155, 0.0,
     0.0, 0x1.8bc6be0aaa2ffp-227, 0x1.54645a7e792a5p-352, 0x1.b7fc4f678f702p-573,
     0x1.594fab2e8fa0bp-840, 0.0, 0x1.35385687bb663p-647, 0.0, 0x1.48a9ca54c3633p-604,
     0x1.803eb67331befp-218, 0.0, 0x1.fabb381d876ddp-752, 0x1.1ce62976b72bbp-443,
     0x1.5fb115bc9e412p-88, 0.0, 0x1.15753f6b201dfp-757, 0x1.76fdaad9d18f1p-449, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.422a4004806ebp-968, 0.0, 0.0, 0x1.2b7c2ffb6b69p-557,
     0x1.66b8eed7e93e5p-805, 0x1.906a1ab9e3e03p-756, 0.0, 0x1.63b29ea5fd9f4p-106, 0.0,
     0x1.83f873f78cefbp-366, 0x1.7f6ea69fa9a1cp-969, 0x1.5789a466317e2p-278, 0.0, 0.0,
     0.0, 0.0, 0x1.71b9ad8613414p-444, 0x1.5d5d6830ed95dp-905, 0x1.812088cc739f4p-560,
     0x1.454a75e8173adp-469, 0x1.09acc9c11d1d8p-750, 0x1.235cd7a5800f5p-409,
     0x1.9de19577df1eap-728, 0.0, 0x1.96fa2af3a0423p-597, 0x1.cacbdaf4909a4p-2, 0.0,
     0x1.b1ffa295e6bbcp-20, 0x1.3ef5079a9f13ap-327, 0.0, 0x1.7be47e2f8332ep-821,
     0x1.2231d52474025p-987, 0.0, 0.0, 0x1.bd0f7dd9db732p-848, 0x1.cec7e37148da5p-959,
     0x1.d936538f069ffp-254, 0.0, 0x1.69c0a108552f2p-164, 0.0, 0x1.b0957173c138ap-822,
     0x1.811eaeb47561cp-911, 0x1.019b3583fc136p-481, 0x1.bd95209e5c7c6p-630,
     0x1.333f779d6ae13p-517, 0x1.c9ac4f388b47ap-320, 0x1.c7fc1d5c89a9dp-567,
     0x1.c4bbbf8dc81d6p-168, 0.0, 0x1.3743413381bap-77, 0x1.56228dfd7dc9dp-477,
     0x1.f828cc07332b8p-982, 0x1.0dd96a898ebd9p-646, 0.0, 0x1.23dfb0d9fa7f9p-787,
     0x1.314278d08c9e3p-741, 0.0, 0.0, 0x1.b2a1f49833ea9p-480, 0.0, 0.0, 0.0,
     0x1.e130d6a90a1dfp-281, 0x1.521e0c3746acap-115, 0x1.98fe5e137bacep-770, 0.0,
     0x1.4145728c14e6p-441, 0.0, 0.0, 0.0, 0x1.5b83662279ab4p-288,
     0x1.f35d88a8a199fp-619, 0.0, 0.0, 0x1.fd120bf40ad92p-337, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.661e84d186ce6p-583, 0.0, 0x1.ad9e02207ac3p-831,
     0x1.383da4d928a86p-839, 0.0, 0x1.5d164c3f44423p-559, 0.0, 0.0, 0.0, 0.0,
     0x1.c28be445a40abp-372, 0.0, 0x1.80c09977dc3aap-350, 0x1.e60231a004454p-701, 0.0,
     0.0, 0x1.279b6657a3b41p-212, 0.0, 0.0, 0x1.9febe8457b144p-756, 0.0, 0.0, 0.0,
     0x1.fa5cb3e7215b7p-510, 0x1.0e797f6e915afp-295, 0x1.c2c71a0c134c6p-868,
     0x1.bdee584cad7e7p-212, 0.0, 0x1.20b7d698e5b02p-665, 0.0, 0.0,
     0x1.3d6bca991ad05p-967, 0x1.57d42afa7bc3bp-740, 0.0, 0x1.74c8801f95d57p-544,
     0x1.f8c1a041e82ap-961, 0x1.ec15fe9261fd4p-990, 0x1.827285af80a4bp-702, 0.0, 0.0,
     0.0, 0x1.bd94325795f8ap-682, 0.0, 0.0, 0.0, 0.0, 0x1.d52acc68fd7dep-925,
     0x1.f85e163336313p-449, 0.0, 0x1.74e11d4318356p-883, 0.0, 0.0,
     0x1.c235eeb03b76ep-223, 0x1.2a6aa9909f899p-46, 0.0, 0.0, 0.0,
     0x1.0d28c14ed8211p-36, 0x1.1e221382ececdp-819, 0.0, 0.0, 0.0, 0.0,
     0x1.6c9e6f8e63a91p-105, 0.0, 0x1.11b03e94ea00dp-788, 0.0, 0.0,
     0x1.44c9d35b831dfp-142, 0x1.ea286573d3044p-999, 0.0, 0.0, 0x1.5d37caa242ef9p-982,
     0x1.69b8cbbd7569p-180, 0.0, 0x1.3ae11e6aee0a9p-64, 0x1.2e44ab51c2b2cp-689, 0.0,
     0x1.857e74b4b9ab7p-84, 0.0, 0.0, 0x1.efb359f5c44d4p-852, 0.0, 0.0, 0.0,
     0x1.0cf6537b2bec4p-111, 0.0, 0.0, 0.0, 0x1.49cf22926723cp-926,
     0x1.6e9edcf11d67fp-845, 0.0, 0x1.e0bd5d1232095p-995, 0.0, 0x1.71a1be668bf29p-41,
     0x1.2e09d0cf8c621p-935, 0x1.f534630a35785p-576, 0x1.e42ba6687fc0dp-112, 0.0,
     0x1.f3fa2d63c5acbp-999, 0x1.e329fc6082a05p-700, 0.0, 0.0, 0x1.339f8ff347d5fp-756,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62875f866fd39p-920, 0x1.051cfe7b4e4f3p-510,
     0x1.7218937e758fcp-841, 0.0, 0.0, 0.0, 0x1.428c80fdf52efp-738,
     0x1.617667316da9bp-760, 0.0, 0x1.b9eafd858f705p-363, 0x1.f4429ba3c4207p-158,
     0x1.7d60bdfa68bcdp-691, 0x1.7c7565b56e027p-757, 0.0, 0.0, 0.0, 0.0,
     0x1.587007244dd85p-422, 0x1.8ac5d4a25d23bp-118, 0.0, 0.0, 0x1.b555002e3f64ep-552,
     0.0, 0.0, 0x1.4066dbeba5672p-763, 0x1.1701185427c01p-716, 0x1.f611370bfcea3p-544,
     0x1.544769cce8433p-744, 0x1.293c2a88cc56ep-799, 0.0, 0.0, 0x1.5040c8a3b52d2p-240,
     0.0, 0.0, 0.0, 0x1.12a146d9cd425p-25, 0.0, 0x1.33cca253b1887p-319, 0.0, 0.0,
     0x1.a872a32d2217ap-402, 0.0, 0.0, 0x1.7f5dfa7b4b88bp-979, 0x1.3b6740b8c7af7p-931,
     0x1.ed21f53e6043bp-189, 0x1.96b2a06da4bf5p-313, 0x1.7b3cad0b1879dp-684,
     0x1.fc66c4a80e4f2p-532, 0x1.b791179122002p-813, 0x1.3d3bfd3b44bf8p-372,
     0x1.39ed791860707p-666, 0.0, 0.0, 0x1.272481778a1a4p-346, 0x1.3a6ab6b4b3a1p-131,
     0.0, 0.0, 0.0, 0x1.954ea22083578p-856, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0d9ab8c2aeb8p-68, 0.0, 0.0, 0x1.11c9015343906p-395, 0x1.9d568f4b8148fp-616,
     0.0, 0.0, 0x1.8c244875dd48cp-373, 0.0, 0x1.cb9318b5def8dp-178, 0.0,
     0x1.207839ed12477p-557, 0x1.0e63db73071f6p-7, 0x1.08fef2ea6a449p-421,
     0x1.c754ac291a7eep-271, 0.0, 0x1.0c393161d9113p-384, 0.0, 0.0,
     0x1.63d4a185a9999p-705, 0x1.d71b964df53c5p-574, 0x1.a5009d84faae5p-606,
     0x1.90c4a89caacd1p-154, 0.0, 0x1.687162e302d28p-876, 0x1.c53dfecfcc0e8p-684, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6ddc5098a5e79p-695, 0x1.0eeaaaf7caaddp-254, 0.0,
     0x1.befbdfb0d6d2ep-768, 0.0, 0x1.8622102131404p-410, 0x1.adcb8de7ffe5dp-65,
     0x1.04b41b578effep-720, 0x1.8a795d4adafe2p-143, 0.0, 0.0, 0x1.4045d433c1469p-251,
     0x1.bc08dd0a481e8p-245, 0x1.5a1999377f0a7p-646, 0.0, 0x1.38dc2a075f2d5p-211, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c4a537d826badp-870, 0x1.77f8bbf3b845fp-185,
     0x1.5f8f5337ebb25p-757, 0.0, 0x1.b1bbc641b2a34p-449, 0.0
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
            tmp1 = Sleef_coshd1_u10purecfma(tmp0);
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
    printf("Sleef_coshd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
