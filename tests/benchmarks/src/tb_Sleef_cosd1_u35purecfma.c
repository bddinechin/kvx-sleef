/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd1_u35purecfma.c --function Sleef_cosd1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.a0186cad9efb2p-848, 0.0, 0.0, 0x1.08ecb0941a4a4p-867, 0.0, 0.0,
     0x1.6bca35d5c7551p-567, 0.0, 0.0, 0.0, 0x1.23e905c385928p-944, 0.0,
     0x1.0c4dcc63619b9p-296, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a8653004b0e4p-373, 0x1.979501730d625p-939, 0x1.0ea2b979d7851p-786, 0.0, 0.0,
     0x1.8ba480ec3c499p-620, 0.0, 0x1.0c9a941f7aeb1p-424, 0.0, 0x1.06fa0bfe8849fp-127,
     0.0, 0x1.fcc1bbe6f755cp-170, 0x1.bbe2d380b3ad6p-377, 0.0, 0.0,
     0x1.b315c2b90bee4p-313, 0.0, 0.0, 0x1.ca94e81b82aa6p-1020,
     0x1.8f69b3daf4285p-734, 0x1.f16c9598ae76p-330, 0x1.e7dfb34893cacp-991, 0.0, 0.0,
     0.0, 0.0, 0x1.ee3be94421a57p-595, 0.0, 0x1.bf52742d66944p-443, 0.0,
     0x1.394487017a98bp-928, 0.0, 0.0, 0.0, 0x1.d38d453083927p-129,
     0x1.c630056fe780dp-883, 0.0, 0x1.874fd12de079fp-264, 0.0, 0x1.00b4273f48a4dp-316,
     0x1.cf6bb5c3d553dp-829, 0x1.27717991d9f37p-467, 0.0, 0x1.0e9269c662b4ap-609, 0.0,
     0.0, 0x1.e8cdfbdea8e7ap-858, 0.0, 0.0, 0x1.b4bbce4e29983p-249, 0.0,
     0x1.d391529080963p-190, 0.0, 0x1.e6ac80e484a35p-42, 0.0, 0.0,
     0x1.ba78e435151dap-112, 0x1.e69cd4d1ba0dap-242, 0.0, 0.0, 0x1.ec54232995072p-73,
     0.0, 0x1.597ec47ee082bp-630, 0x1.3f9037ea0c74bp-862, 0.0, 0.0, 0.0, 0.0,
     0x1.3b102e288b699p-849, 0.0, 0x1.49612d8eb2629p-845, 0.0, 0.0,
     0x1.9d6a17160dadbp-363, 0.0, 0x1.5a6895a9d86dp-302, 0x1.0a2de82340ad3p-443, 0.0,
     0x1.388b470f73026p-822, 0.0, 0.0, 0x1.e34d39900be99p-672, 0.0,
     0x1.05172340e453cp-622, 0.0, 0x1.1b80c601852bfp-1014, 0.0, 0.0, 0.0,
     0x1.08437a995e0dbp-873, 0x1.70345d4d38029p-496, 0x1.7e3a86b3a5495p-46, 0.0,
     0x1.7594876828699p-1019, 0x1.a1e96aff216a9p-316, 0.0, 0x1.576026d7dbd98p-330,
     0.0, 0x1.3c33642d1406p-531, 0x1.43b23bf5e6586p-379, 0.0, 0.0, 0.0,
     0x1.59f72599cc052p-844, 0.0, 0x1.50eb9540a6d5ap-957, 0x1.3ce61fe0ade88p-314,
     0x1.b66c3167f8f3ap-316, 0.0, 0.0, 0x1.3e42df27e4378p-271, 0x1.b4de855f402e7p-502,
     0.0, 0x1.a39de31b8fbafp-903, 0.0, 0x1.8d35a4cf77166p-324, 0x1.98d5c7b1ff76fp-530,
     0.0, 0.0, 0x1.02a72af4bd76cp-1015, 0x1.2cb935226ad06p-443,
     0x1.92db17466847dp-720, 0.0, 0x1.f8e216eb1f122p-874, 0x1.1c40ac7486d3bp-97, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee5aa23f59edep-504, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fe9ff2264a4dbp-865, 0.0, 0.0, 0x1.8bb98f48e27b3p-458, 0.0, 0.0, 0.0, 0.0,
     0x1.b01acb0f13c1ap-141, 0x1.90d8856d92602p-323, 0x1.c0ede0a532205p-194, 0.0, 0.0,
     0.0, 0x1.e16520b811e47p-947, 0x1.3892433877bcp-723, 0.0, 0.0,
     0x1.5e3ef0da7fbadp-366, 0.0, 0.0, 0.0, 0.0, 0x1.a8bd5f63de5a4p-744, 0.0,
     0x1.d746f980ef623p-213, 0x1.5d3c00223d08dp-820, 0.0, 0.0, 0x1.58f31d4a8cf43p-627,
     0x1.65f967d456b0ep-840, 0x1.8736934ee6796p-421, 0x1.2c8afbececd59p-763,
     0x1.4c22818276f62p-721, 0.0, 0x1.f46617d47df3ep-719, 0.0, 0.0,
     0x1.857f01bf9b6f2p-13, 0x1.125c5660378afp-253, 0.0, 0.0, 0x1.cded28a02b5d7p-391,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2fa029b6e2736p-996, 0.0,
     0x1.c8ab2ff6da77dp-200, 0x1.7f8e0ecb5b949p-484, 0.0, 0x1.ccc6953bb9994p-517,
     0x1.b6a5fa3a32e6dp-906, 0x1.7b9e66164f979p-105, 0.0, 0x1.8ee6dd6f703d5p-549,
     0x1.19dcb6ffdcb9ep-572, 0x1.5b6220b0160e7p-948, 0.0, 0.0, 0.0,
     0x1.93abe5f301e86p-370, 0.0, 0x1.a60d2f03c36a1p-354, 0x1.b754be7405cc2p-113, 0.0,
     0.0, 0x1.3b6c508c14c5dp-127, 0.0, 0x1.d72e26a49ec52p-537, 0.0, 0.0,
     0x1.31778ca65fb1bp-236, 0.0, 0.0, 0.0, 0x1.3a42886072863p-659, 0.0,
     0x1.5f7551e324de8p-817, 0x1.5542bf5c36a72p-529, 0x1.7fe0fa63005ecp-194, 0.0, 0.0,
     0x1.aa2c086cdcea8p-751, 0x1.4ebf471e12f44p-75, 0x1.baf07d906343bp-147,
     0x1.6c84616d2f4ffp-127, 0x1.3771f130f081p-862, 0x1.6544fc1d86e8dp-460,
     0x1.2fcb1d7978d1ep-738, 0.0, 0x1.dc53d28c27cdp-68, 0x1.c9ad36f42be0cp-271,
     0x1.97105e19c5168p-776, 0.0, 0x1.75d7dcfa63978p-155, 0x1.4874ac823dcefp-120, 0.0,
     0.0, 0.0, 0x1.fe7868148c9d1p-984, 0x1.4a0e0e329b363p-680, 0.0, 0.0, 0.0,
     0x1.235fab4430da3p-932, 0x1.95315752856dbp-129, 0.0, 0.0, 0x1.d2c926efbc56fp-837,
     0x1.98d06f5781f4fp-949, 0x1.32f3e0c79d667p-768, 0x1.34400850ba657p-672,
     0x1.9a5935df56e01p-662, 0x1.1b2c55058b6e9p-13, 0x1.7451213d06182p-945, 0.0,
     0x1.d178b65ecc887p-403, 0.0, 0.0, 0x1.19b87f00656eap-51, 0x1.0f83a94d4b13p-580,
     0.0, 0.0, 0x1.a9609be6a221ap-495, 0.0, 0.0, 0x1.ca4246aec9a28p-392, 0.0,
     0x1.d39dd3c752dffp-524, 0.0, 0.0, 0.0, 0x1.58d48b0fadac5p-297, 0.0, 0.0,
     0x1.f508bc18ebbe8p-336, 0x1.86f4302e5572ap-532, 0.0, 0.0, 0x1.a64a89cad5b5fp-538,
     0.0, 0x1.00e55864dd74cp-275, 0x1.8d852aa687805p-342, 0.0, 0.0, 0.0,
     0x1.92266fefe1a8dp-553, 0.0, 0.0, 0x1.46e58a803927ap-706, 0.0, 0.0, 0.0, 0.0,
     0x1.59a20916f7e5ap-963, 0.0, 0.0, 0x1.6659dd7d625d8p-92, 0.0, 0.0, 0.0,
     0x1.19c669035223ap-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b11909dae9311p-307, 0.0, 0x1.e76286dc0f97cp-834, 0.0, 0x1.17bba76c37249p-419,
     0.0, 0x1.d40b98de136dfp-596, 0.0, 0x1.c7c000ce4730dp-683, 0x1.932e7dd5b430ap-677,
     0x1.5a2300e531af6p-363, 0.0, 0.0, 0.0, 0x1.2afca82b1a936p-126,
     0x1.1f3edd3aadf92p-779, 0.0, 0x1.03726d2aaa122p-868, 0.0, 0x1.cc9f366be057bp-503,
     0x1.7f92b7c69ab44p-608, 0.0, 0x1.ae11f745ba99dp-500, 0x1.473c4a1916db3p-781, 0.0,
     0x1.d52f0eccc7e39p-174, 0x1.2160a279eeb15p-127, 0x1.ea571b2842d86p-777, 0.0,
     0x1.3cb33e7674cf2p-66, 0x1.9e46eb6a26828p-168, 0x1.9e617467edb0ap-886,
     0x1.1a07eafcfb343p-341, 0.0, 0x1.3f4da09fba632p-596, 0x1.a58eb0a7c0f46p-426, 0.0,
     0.0, 0.0, 0x1.ea89f088437c8p-734, 0.0, 0.0, 0x1.68249b20fffp-661,
     0x1.916548151b7c5p-499, 0x1.f65b2a3f2f437p-696, 0.0, 0.0, 0x1.7ba6d610356f9p-348,
     0x1.8f734030082fcp-382, 0.0, 0.0, 0x1.eaa2aa9de5768p-219, 0.0, 0.0,
     0x1.fb11832b2ff6p-416, 0x1.9a2551974070cp-358, 0.0, 0x1.c797ad4579116p-257, 0.0,
     0x1.8e617ac042319p-859, 0x1.bcc38e0851a46p-596, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ac96ca3f7812p-573, 0x1.4719aef06ddb7p-514, 0.0, 0x1.f26d066976112p-892,
     0x1.1e672ffedaaf7p-407, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a5db66fb22dfp-628,
     0x1.fec41d0991535p-317, 0.0, 0x1.8c65b49b5fd5p-720, 0.0, 0x1.a2448783b8e2ep-916,
     0.0, 0.0, 0.0, 0x1.e9e61258a09b8p-603, 0x1.8fed3928cc647p-147, 0.0,
     0x1.c3ebac65fce05p-577, 0.0, 0.0, 0x1.13f8641452be5p-855, 0.0, 0.0,
     0x1.fd4119723004p-910, 0.0, 0x1.5b5fdb2ff2628p-965, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.43900ffd1e75ap-966, 0.0, 0.0, 0x1.7dcf8f557423ep-361, 0.0,
     0x1.35ca5604ebb1ep-51, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b13fc7e252c7cp-717, 0.0,
     0.0, 0.0, 0x1.fc43e5d89b23ep-963, 0.0, 0.0, 0x1.6607bb9c3d7ffp-594, 0.0,
     0x1.173647f10018p-892, 0x1.eca7bbcf5adb3p-320, 0.0, 0.0, 0x1.a1dc3ae8bb95dp-965,
     0x1.4eb4a5dda7efep-862, 0x1.2dd3b2f434123p-1018, 0x1.8c0f0d69a1922p-477, 0.0,
     0.0, 0x1.88044b73dff86p-187, 0x1.e6f62738bcacfp-346, 0x1.47319af73599ap-897, 0.0,
     0x1.311a50780a84ap-99, 0x1.86a37df11150fp-954, 0.0, 0.0, 0x1.31eb88ef352e4p-237,
     0.0, 0x1.ee758bfb46b93p-639, 0x1.e9cf85b6e0b56p-316, 0.0, 0x1.862d0944cff9dp-777,
     0x1.a8d407276d423p-479, 0.0, 0x1.5a537ed778f4bp-334, 0x1.ead3050eb0cc4p-149,
     0x1.92395bc4ee783p-609, 0x1.a8dbb1f118856p-1005, 0.0, 0x1.679d6e54369e2p-209,
     0x1.78474b8c412c7p-587, 0.0, 0x1.c051b8e13a692p-587, 0.0, 0x1.d45921ad1212bp-538,
     0x1.f45ab5c8b029bp-249, 0.0, 0.0, 0.0, 0x1.93b5840c80108p-740,
     0x1.f02b22eed75b9p-155, 0.0, 0x1.63a3e1bc4babcp-530, 0.0, 0x1.d09a4162ece4bp-23,
     0x1.9ae685c8cbc43p-550, 0x1.4e5ef0c0864b5p-133, 0x1.8c4844efa57cfp-676, 0.0,
     0x1.e4aaefe20ba83p-352, 0x1.4b21efacb5493p-296, 0x1.345d4a1d65529p-935,
     0x1.892c8f1b05393p-915, 0.0, 0.0, 0x1.be9287e24ff31p-873, 0x1.edd889050678ep-302,
     0.0, 0x1.f7e226227661cp-745, 0.0, 0.0, 0x1.f79c9b0591eabp-300, 0.0,
     0x1.b2fd234791d6dp-41, 0x1.6aa16afa32eb6p-194, 0x1.cd717f7beb0e5p-571, 0.0, 0.0,
     0.0, 0x1.0b2b86ffbb078p-516, 0.0, 0x1.e9e700f3f1f38p-991, 0x1.ffcaed2ed741p-196,
     0x1.2d4e769b8cccbp-431, 0x1.9439b0a8e8afap-551, 0x1.19df38c2b32cp-113,
     0x1.2ac18241a8fbp-606, 0.0, 0x1.0abeaabe01aaep-245, 0.0, 0.0,
     0x1.50b92980da079p-123, 0x1.88b68901f69b8p-377, 0x1.ca0a35e98b538p-996,
     0x1.1b733166d8ea1p-286, 0.0, 0x1.657382f8e60ccp-574, 0x1.df5998184ff56p-937,
     0x1.34f8a6cf69d8bp-419, 0x1.d6365e6d8f26cp-354, 0.0, 0.0, 0.0,
     0x1.09149bb56d558p-867, 0.0, 0.0, 0x1.745c2465be7eap-1012,
     0x1.5c44d5536e656p-233, 0.0, 0x1.38ce6da64b68cp-776, 0.0, 0x1.b76f7123671f1p-409,
     0x1.f36e2766692fap-934, 0.0, 0.0, 0.0, 0x1.8561463806eb6p-974,
     0x1.276032ef01fddp-260, 0x1.10f9fd0e417f6p-574, 0.0, 0x1.6b94316c69d3p-809, 0.0,
     0.0, 0x1.91ca4d267b5d4p-754, 0.0, 0x1.f7fbf1d27566p-633, 0x1.c94d7f71cbcc5p-41,
     0x1.368fc86f9f5f5p-932, 0.0, 0.0, 0.0, 0x1.8f5068e1cb99ap-287,
     0x1.94090846a4734p-1018, 0x1.c936821f8aee8p-463, 0.0, 0x1.a7ac900075c6dp-443,
     0x1.76c0ed4759eb4p-664, 0.0, 0x1.ecaf09151699ap-138, 0x1.621f5fde42c93p-915, 0.0,
     0.0, 0x1.cc91ba9375885p-253, 0.0, 0.0, 0x1.a8daff0ff20f2p-929, 0.0, 0.0,
     0x1.a443cb46c46cfp-268, 0x1.a784c50a62a1dp-714, 0.0, 0x1.2a4d2064b3913p-265,
     0x1.c102333091c8ep-135, 0x1.06990d60c0998p-322, 0x1.981a2516855abp-225, 0.0, 0.0,
     0x1.ab65487334675p-128, 0.0, 0x1.1228e7c65959bp-357, 0x1.cc34f0a1c821ap-668,
     0x1.c51f4f25a1efep-806, 0.0, 0x1.f044469412dfap-629, 0.0, 0x1.17b88e37d7c74p-557,
     0x1.91de9c650a677p-376, 0.0, 0x1.7b3b315f26238p-350, 0x1.12e26fd6d1cafp-211,
     0x1.ae9629d1f8c96p-741, 0.0, 0.0, 0.0, 0x1.1af66bcb08be7p-86,
     0x1.407626fa50eeep-421, 0x1.d3da5f3b29bdbp-749, 0x1.5b5d42e26ca75p-583,
     0x1.7e0388f714555p-185, 0x1.7644b94487c91p-818, 0x1.749ed767c2584p-228,
     0x1.fa2a55299b1c4p-318, 0.0, 0x1.5db11a4ba8b35p-219, 0x1.201655c799479p-175, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7b56ba5e2f03cp-405, 0.0, 0.0, 0x1.0b739fee5f763p-237,
     0x1.0015940249a33p-710, 0x1.067e4cae5f174p-273, 0.0, 0x1.5b5690a1888e3p-769,
     0x1.236e0ed81656ep-331, 0x1.9291638ae6869p-116, 0.0, 0.0, 0.0,
     0x1.eb7f6fd4c6eb2p-325, 0.0, 0x1.8cc8657efddfdp-383, 0.0, 0x1.25b804999b801p-340,
     0x1.65f530eca89bcp-452, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48bf403e9c40ap-551,
     0x1.8a395247a69adp-506, 0.0, 0.0, 0x1.dbd609f832599p-66, 0x1.ea1d3aefaf24cp-254,
     0x1.819c77df92c5cp-864, 0.0, 0.0, 0.0, 0.0, 0x1.78765fb3ba70ep-218, 0.0,
     0x1.b3e4b5281c4aap-644, 0.0, 0.0, 0x1.3bf427fd56341p-504, 0x1.aec3a5848f968p-994,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.757d6ba04320cp-187,
     0x1.0ae085b8fcdc6p-535, 0x1.65c4ced5dbf9cp-256, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9ca5003cf9616p-702, 0x1.df3e5b3ca8e78p-892, 0.0, 0.0,
     0x1.1669ad46b9f8ep-526, 0x1.d4f173614b082p-56, 0.0, 0x1.ef90341a7ce79p-125, 0.0,
     0x1.483c40b3b23b7p-637, 0.0, 0x1.14c2d4049d16cp-175, 0x1.5585a822c13f6p-305, 0.0,
     0x1.12eff6981aeacp-831, 0.0, 0x1.0b78eb81e6c3dp-994, 0.0, 0x1.1312e5400ed84p-500,
     0.0, 0x1.4c5c1609d8df7p-464, 0.0, 0x1.5aa43cb831e7dp-502, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.866ff73c5a216p-574, 0.0, 0.0, 0.0, 0.0, 0x1.6ada0173ef7dfp-530,
     0x1.77671c665e81ap-536, 0.0, 0x1.9a35fe593bdb4p-322, 0x1.f8bc2cf3ba418p-866,
     0x1.10de9e2057b8fp-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cbb737113bf7cp-245, 0.0, 0x1.ab3bd9e889debp-537, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.250cde293c48ep-149, 0.0, 0.0, 0x1.0509de0475b4ap-281,
     0x1.0f01e63c7d15dp-43, 0.0, 0.0, 0x1.e15f857a9a90ep-940, 0x1.a91fb88efbb26p-390,
     0x1.185b6ef929ddep-737, 0x1.1d81e2fc8d05dp-573, 0.0, 0x1.b8f8edd15c1f5p-900, 0.0,
     0x1.ff254165cb017p-53, 0.0, 0x1.a5a4a04dda51ep-562, 0.0, 0.0, 0.0,
     0x1.c25ea9052abedp-876, 0.0, 0.0, 0x1.fcf321c672366p-49, 0.0,
     0x1.94bba1cba823dp-708, 0x1.a20d80ae9b6p-995, 0x1.a9579bc1a760ep-614, 0.0,
     0x1.8b60dc2b7012cp-268, 0.0, 0.0, 0x1.4c448cbb09a21p-646, 0.0,
     0x1.f0c772f4d0682p-904, 0.0, 0.0, 0.0, 0x1.e0906d69943a7p-455, 0.0, 0.0, 0.0,
     0.0, 0x1.070984ad10e9ep-489, 0.0, 0.0, 0.0, 0x1.647adcc8b0e5bp-120,
     0x1.e3150cdf95d25p-613, 0x1.f0e5f706e1fbp-190, 0.0, 0x1.3e2a156133d28p-726,
     0x1.f06c0753a23c4p-106, 0x1.87ea8faa24b81p-535, 0.0, 0.0, 0.0,
     0x1.caef06c8202c9p-16, 0.0, 0x1.100513224135cp-623, 0.0, 0.0,
     0x1.f360e538d4218p-291, 0x1.f06c4bdcba55fp-489, 0.0, 0x1.73641dd01376bp-52,
     0x1.8ec9900f3fcacp-462, 0x1.6b0730bee193bp-219, 0x1.f46688f7b151ep-20, 0.0,
     0x1.a971af50baa66p-664, 0.0, 0.0, 0.0, 0x1.33950ae0b09bep-552, 0.0, 0.0,
     0x1.68a725e688bbcp-701, 0x1.c481576b6949p-391, 0.0, 0x1.4e0315e89c298p-244, 0.0,
     0.0, 0.0, 0x1.9d686790074ecp-765, 0x1.d64fe9e7b4d0ep-999, 0x1.3642da4be39d5p-415,
     0.0, 0x1.2b62dff036e1ep-421, 0x1.b1f25cd1b3e67p-382, 0x1.f3eee3a6107bbp-1020,
     0.0, 0.0, 0x1.b52a37e0d02ap-12, 0.0, 0.0, 0x1.980c0e1518383p-824, 0.0,
     0x1.ebaacd17ab3f9p-670, 0x1.5d8003391fdb4p-93, 0x1.1607015dcc771p-140,
     0x1.c267dde4a80e9p-598, 0.0, 0x1.40507993513bdp-666, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5e161f67da561p-988, 0x1.0df898ee01ab1p-739, 0x1.722fe6d12241cp-609,
     0x1.fe31ca1cf1287p-714, 0.0, 0x1.4fcef85b3efd4p-630, 0.0, 0x1.f031d194b4709p-616,
     0.0, 0x1.5c646f76d5761p-680, 0.0, 0x1.99d6a4c0a746p-131, 0x1.12866ac2e82bap-883,
     0x1.b2041b0f20c6cp-91, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc81cc68c80a8p-622,
     0x1.3e43a3e0b5da6p-248, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1cf3d6a0a9c9dp-933, 0.0, 0x1.fff152f424b49p-895, 0x1.b3df18910ad4bp-781, 0.0,
     0.0, 0x1.f20fe500525fbp-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bdb310ddf5065p-274,
     0.0, 0.0, 0x1.032b021b1d3dbp-189, 0x1.93980a74fea13p-371, 0.0,
     0x1.2d3e0b9962554p-90, 0x1.2d492cfdf6bc6p-746, 0x1.f836dcb96ab98p-419,
     0x1.cc1030a03d671p-211, 0.0, 0.0, 0x1.0fa915967e683p-35, 0x1.f12e7d5ca20e2p-175,
     0x1.9093274dd05e3p-258, 0x1.7c744f27d32e6p-449, 0x1.c6f3faeed099ep-577,
     0x1.5383ddca174ep-16, 0x1.15efabfede438p-334, 0.0, 0.0, 0.0,
     0x1.638d741f19f32p-329, 0.0, 0.0, 0x1.249b26bcabbeep-922, 0x1.ec351a7d6c865p-636,
     0.0, 0x1.895abe6cc118bp-238, 0x1.31fdb9b360773p-262, 0x1.685f71f151277p-624, 0.0,
     0x1.e59058ddd2301p-981, 0x1.64c245988b4b9p-818, 0x1.8517891e999abp-491,
     0x1.9ffd054bc1afep-702, 0x1.91311bdcb54afp-143, 0x1.a7f34adc7a25ap-974, 0.0,
     0x1.2ab369d716567p-893, 0x1.53d141475e5aep-315, 0.0, 0x1.0d1a8d5a0f7c6p-960, 0.0,
     0.0, 0x1.4e0bffde09266p-543, 0.0, 0.0, 0.0, 0.0, 0x1.95342c6a1bb87p-289,
     0x1.0c01e07930dfbp-400, 0x1.59d036eb148dbp-627, 0.0, 0.0, 0x1.693c4e70ca143p-180,
     0x1.0e4f1d5698b03p-463, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a92e98b0d32dp-318,
     0.0, 0x1.886498080c872p-266, 0x1.1938fc5c747bfp-781, 0.0, 0x1.7a2d7d286a79dp-937,
     0x1.d34972d5371c8p-247, 0x1.baa6bcc01a214p-628, 0x1.fb7e55c69ffe7p-653, 0.0,
     0x1.ff4445c9a8ee9p-305, 0x1.71b41e459ec8p-12, 0x1.e5a5a9f983adfp-996, 0.0, 0.0,
     0x1.54deb212cdf88p-546, 0x1.acaaf1a5b64b6p-587, 0x1.d3b7a3a8db1c5p-963, 0.0, 0.0,
     0x1.ac1f4761aa32ep-662, 0x1.c99fd7ab8c428p-201, 0x1.c8b4bef6d5974p-568,
     0x1.5a6032c76582ap-223, 0.0, 0x1.9469b5a9afbadp-856, 0x1.4be9d2105b468p-865,
     0x1.1a41a5aed890dp-19, 0.0, 0x1.f2f5cff799f28p-749
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_cosd1_u35purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_cosd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
