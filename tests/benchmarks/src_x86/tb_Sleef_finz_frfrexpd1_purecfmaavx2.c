/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpd1_purecfma.c --function \
 *     Sleef_finz_frfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.b0ecbe235e3f4p-72, 0x1.11d24d179ed89p-485, 0x1.d87b028f80aa1p-526, 0.0,
     0x1.36f79c6c9e478p-76, 0.0, 0x1.3e1b8cd38cdd2p-915, 0x1.2478f20f79922p-665,
     0x1.c7be619e011e7p-823, 0.0, 0x1.f181c3b4d630fp-19, 0.0, 0x1.3026944f64378p-709,
     0x1.196689a74b365p-618, 0.0, 0.0, 0.0, 0x1.22fdbd74d9713p-903,
     0x1.91f561cc46a92p-158, 0x1.9414cbfacecf1p-184, 0.0, 0x1.02aa0af71bb1fp-538, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e550a0d9168d9p-1012, 0.0, 0x1.562dbc27b7c27p-527, 0.0,
     0x1.c513bc916b14ep-828, 0.0, 0.0, 0x1.28bff172cb495p-439, 0x1.c286262becc19p-259,
     0.0, 0.0, 0.0, 0x1.283ca87894d72p-600, 0.0, 0x1.75bbfea8e551bp-911, 0.0, 0.0,
     0x1.3392aad830b2bp-241, 0x1.01c4303d80b4ap-764, 0x1.b1c9cb8783c47p-112,
     0x1.1166a898670c1p-521, 0.0, 0x1.23a6e2a3010fcp-146, 0.0, 0x1.52b197f6fe253p-242,
     0x1.583c44a234a3bp-697, 0x1.bab3387cedcbep-917, 0x1.d40c5fef0f275p-212,
     0x1.2995d1bc1b892p-480, 0x1.6b7a4ccc55666p-753, 0x1.e0063f100e275p-844, 0.0, 0.0,
     0x1.0135b422b8151p-654, 0x1.1f99ab582be0dp-971, 0x1.d5f6957c1657ap-856,
     0x1.273bead8e19b5p-256, 0.0, 0x1.551e4f0bfac5fp-809, 0.0, 0x1.c2a1b1a270b4p-155,
     0.0, 0x1.e5e3f509ab7dep-17, 0x1.6ac2d3ae39269p-539, 0.0, 0x1.ebc341e15a91dp-254,
     0x1.a5398546678d8p-423, 0x1.c687c1481f8c2p-45, 0x1.1189f4c3db071p-141,
     0x1.4d3bed54775eep-541, 0.0, 0x1.681d510540a71p-209, 0.0, 0x1.afe59a0a18572p-467,
     0.0, 0x1.2425fa53f547ap-699, 0x1.e5c57d626dd4p-681, 0x1.5017dd3ee5793p-836,
     0x1.9045ae347f33p-961, 0.0, 0.0, 0.0, 0x1.83cafd8f5b7b6p-159, 0.0,
     0x1.62bfe8ab5068fp-787, 0x1.2cee5da2eecc3p-6, 0.0, 0x1.3ec3b2a80a776p-526, 0.0,
     0x1.dc4282c961406p-2, 0x1.a546717750527p-1016, 0x1.306c65c655a2ep-927,
     0x1.e4711904102b5p-725, 0.0, 0.0, 0.0, 0x1.81fe2e78a1bd3p-202, 0.0, 0.0,
     0x1.9a2efff093578p-713, 0.0, 0.0, 0x1.3b36c78bd636p-817, 0.0,
     0x1.0b2313b6369e8p-151, 0.0, 0.0, 0x1.fdd2e3f300745p-752,
     0x1.f041fb1262134p-1000, 0.0, 0.0, 0x1.22dc46673948cp-482, 0x1.709140e46533p-317,
     0.0, 0.0, 0x1.da7f8b251f2a4p-641, 0.0, 0.0, 0.0, 0x1.50ec229211d74p-182, 0.0,
     0x1.20cd35eb60d6p-95, 0.0, 0.0, 0x1.0015d7ef6416bp-698, 0x1.0ad44a81cd96ap-297,
     0.0, 0x1.aecd00888ed8ep-890, 0x1.0ede9f2caa6e7p-588, 0.0, 0x1.a11cde2223ecbp-570,
     0x1.428a69ce5d657p-571, 0x1.8c710fdb1ef28p-838, 0.0, 0x1.20b8cff65b346p-586, 0.0,
     0.0, 0x1.de35b28b7c9fp-110, 0.0, 0.0, 0x1.c26226f056968p-922, 0.0, 0.0,
     0x1.86a029e87904dp-600, 0x1.917fc0eaf83d8p-909, 0x1.34693f12c88f1p-43, 0.0, 0.0,
     0x1.f5e298afb7486p-174, 0x1.22005dcde7c7cp-944, 0x1.b9f89c6dd7353p-797,
     0x1.15f29a65ce52p-976, 0x1.592c6d2bcb522p-603, 0x1.8852ce393e32p-632,
     0x1.2b83851744e8fp-41, 0.0, 0x1.c470613732405p-499, 0x1.02b08d0630f1ep-432, 0.0,
     0x1.89bb93b7115eep-999, 0x1.4ce83059572d6p-946, 0x1.f56bf3593a0f8p-309,
     0x1.77f52ba4234efp-972, 0x1.fca3079a2b444p-918, 0x1.0043098e2e498p-957, 0.0, 0.0,
     0.0, 0x1.05d4fe4875892p-675, 0.0, 0x1.b71332d02a18cp-601, 0x1.eaa0d4e1b0868p-297,
     0.0, 0x1.3a620a54bebbp-989, 0.0, 0x1.c3dff32463c1p-953, 0.0, 0.0,
     0x1.47253e6f14207p-93, 0x1.c358e5ab76299p-776, 0x1.25c069b58fe4ep-775,
     0x1.4e761300b1334p-809, 0x1.25a5748eb6fafp-106, 0x1.57c081a784ddcp-316,
     0x1.109ed1e90af3ep-98, 0x1.af373d8709adap-779, 0x1.362185cc4e655p-413, 0.0, 0.0,
     0.0, 0.0, 0x1.5868313102cb8p-923, 0x1.687acb642995ap-75, 0x1.324c5470f8c14p-28,
     0.0, 0x1.ebfceb4eec6c1p-686, 0x1.c9167fff45de9p-287, 0x1.53c907f533dffp-472,
     0x1.710a083117258p-450, 0x1.166b02946defdp-5, 0.0, 0x1.de3430a8cfba2p-630, 0.0,
     0x1.beffefa285976p-595, 0.0, 0x1.e64e0a7fce09bp-840, 0.0, 0.0,
     0x1.0154c3d62ede9p-480, 0x1.5667dc518e725p-621, 0.0, 0.0, 0x1.c39fe9ea9af1ap-428,
     0.0, 0x1.72ffba23fc232p-837, 0x1.d2e0554ccef07p-631, 0.0, 0.0,
     0x1.6c2a85e300264p-49, 0.0, 0.0, 0x1.9f5356ad18cfbp-190, 0x1.7e7afe5688a8bp-817,
     0.0, 0.0, 0x1.f89da5b73374dp-94, 0.0, 0.0, 0.0, 0x1.24f765bb5855dp-866,
     0x1.d13d7f21294c9p-467, 0x1.a76d348e5802ap-96, 0x1.ea33adaae513dp-150, 0.0,
     0x1.9b276442a0f17p-403, 0.0, 0.0, 0x1.9bc462bf0a28dp-163, 0x1.bd2c07f8b38dap-882,
     0.0, 0.0, 0.0, 0.0, 0x1.549e6e81126afp-498, 0.0, 0x1.e506c86a768c1p-432,
     0x1.6a1f586713a61p-189, 0x1.51bd7489e2619p-489, 0.0, 0x1.3c3793df9e5acp-864, 0.0,
     0x1.39944215f8876p-217, 0.0, 0x1.4c9aa1bccc0acp-712, 0.0, 0.0,
     0x1.3cdf8c78859fp-984, 0.0, 0x1.83e93d4982f7p-324, 0x1.825ba2f2dc77fp-841,
     0x1.0165f888e2c3ap-455, 0x1.25adc563a3176p-103, 0.0, 0x1.9f3df4fa489e2p-775,
     0x1.937611aa3b8bdp-660, 0x1.26376441a5af1p-97, 0.0, 0.0, 0.0,
     0x1.1e42512042babp-660, 0x1.b57aeb2df469ep-366, 0.0, 0x1.8972fde3b9007p-100, 0.0,
     0.0, 0x1.a24e6d798340ap-71, 0.0, 0.0, 0x1.96c2167bb1ed9p-144,
     0x1.4199585813d4bp-758, 0.0, 0x1.8b4617b70e904p-497, 0.0, 0x1.84434835bfc94p-458,
     0x1.e3764c21f779fp-171, 0x1.0b32784440546p-877, 0x1.ba264da4e912dp-1010,
     0x1.8107043b1499ap-696, 0x1.18431e7a563bep-120, 0.0, 0x1.dadb7880cd0e6p-610,
     0x1.f29a2d9937f86p-33, 0.0, 0.0, 0.0, 0x1.61a4ae0b03404p-898, 0.0, 0.0,
     0x1.5c9f24a257f4bp-148, 0x1.906c12336748p-527, 0x1.1865e6f49784fp-646, 0.0, 0.0,
     0x1.b7c094004df3p-757, 0.0, 0x1.0e12a2a7e1c1dp-444, 0.0, 0x1.9d694291b77b1p-36,
     0.0, 0x1.335e333a4c809p-402, 0.0, 0.0, 0.0, 0x1.2325f626d675cp-91, 0.0,
     0x1.02f08c670d37bp-511, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5839f1bd60c8bp-131,
     0.0, 0.0, 0x1.0274a137e70b9p-20, 0x1.3c23b6afa3e0ap-372, 0.0,
     0x1.0ee8d32708819p-692, 0x1.804a71654187cp-417, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.09cd40bffd908p-16, 0.0, 0x1.9b4f9a2386f9p-476, 0.0, 0x1.26205be65b297p-532,
     0x1.cbb157913261dp-784, 0x1.1bd97de8c9978p-116, 0.0, 0x1.065b28b7b2698p-352, 0.0,
     0.0, 0x1.c99308ceb084fp-554, 0.0, 0x1.a9bc3128fa5ep-429, 0x1.b345888be25cbp-526,
     0.0, 0x1.b9bd5c6065ebcp-795, 0.0, 0x1.c1393c4e2625ap-246, 0x1.2a815aa55b0e4p-467,
     0x1.fa5c5f619b445p-1013, 0x1.351bd46f7a67dp-725, 0x1.93186bfd26b16p-917, 0.0,
     0x1.89b65cdb1d7dap-647, 0.0, 0x1.b6e995963969ap-270, 0.0, 0.0,
     0x1.0f8e0ea83dfd7p-685, 0.0, 0.0, 0.0, 0x1.8b3028b33baf7p-656, 0.0,
     0x1.90b102c5c67d8p-734, 0x1.f5241a8c1c3fap-762, 0.0, 0x1.2306393acf5dap-96,
     0x1.c766622e0a82dp-100, 0x1.f06e84f2925b2p-890, 0.0, 0.0, 0.0, 0.0,
     0x1.fa82103876324p-189, 0.0, 0.0, 0.0, 0x1.822f5145e32cfp-755, 0.0,
     0x1.5750bed879458p-518, 0x1.3bab530708292p-770, 0.0, 0.0, 0x1.8e9ad892f70a2p-848,
     0x1.4778a088640bfp-229, 0x1.404f017abe224p-296, 0.0, 0.0, 0x1.36920a975d5e4p-840,
     0x1.51c3ac45ffc77p-414, 0.0, 0x1.a73c959ecb407p-87, 0.0, 0.0,
     0x1.ab9c69fc01f21p-287, 0x1.88907846188bap-51, 0x1.3bb7477265fc8p-214, 0.0, 0.0,
     0x1.fb1efe67fbc01p-855, 0.0, 0x1.af233433cbf1ep-203, 0.0, 0x1.bc61ae4cc3071p-75,
     0.0, 0.0, 0.0, 0x1.1bf174b6c4c5p-55, 0.0, 0.0, 0.0, 0x1.bd7d98cce1927p-675, 0.0,
     0.0, 0.0, 0.0, 0x1.47ee2de026278p-164, 0x1.9d52a3077f248p-830,
     0x1.77493434eb682p-143, 0.0, 0.0, 0x1.1caa3e05793adp-837, 0x1.094f5cebb976ep-510,
     0x1.b882e4b9e2f4fp-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4fee17840e867p-258, 0.0,
     0x1.7f12d475e85b5p-1016, 0x1.5adc32e6def8ep-147, 0x1.6097b2bed3decp-438, 0.0,
     0x1.ba18d115bae34p-511, 0.0, 0.0, 0x1.5a184795a8e26p-317, 0.0,
     0x1.f59631c1ccf68p-187, 0x1.c7fa8a368e361p-443, 0x1.1e6c7c94d882ap-155,
     0x1.1f0ac3f98dba1p-59, 0x1.fb2abee2a7619p-451, 0x1.905658c216658p-68,
     0x1.1fd8370226cafp-959, 0x1.2c5aa0f89ddc1p-354, 0x1.dd84719422458p-754, 0.0, 0.0,
     0.0, 0x1.fd02c30264701p-487, 0x1.c7f929432d91ep-450, 0x1.16578810f7dffp-202, 0.0,
     0.0, 0.0, 0x1.0708c28832348p-177, 0.0, 0x1.50fb39a20d878p-280,
     0x1.ae950a1c1ab7bp-856, 0x1.41276b057a438p-724, 0x1.7a6681ef54ddp-671,
     0x1.83da4fc3a336ep-750, 0x1.bca0ad8146b14p-299, 0x1.cafaa999d8d4ap-164,
     0x1.74899de102163p-392, 0x1.86dceaa5528edp-92, 0.0, 0.0, 0x1.7425b4664665bp-878,
     0.0, 0.0, 0x1.30cca36118d2dp-772, 0x1.9634b96ef8ec5p-726, 0.0,
     0x1.df8be080813f4p-96, 0x1.bdd442f95d13fp-309, 0x1.cb7586756d314p-802, 0.0,
     0x1.ba3329910f9d4p-202, 0x1.16a8b3887f3f2p-33, 0.0, 0.0, 0.0, 0.0,
     0x1.206ebf20f09cep-84, 0.0, 0x1.b18258f10a09ep-964, 0.0, 0.0,
     0x1.a3c951886c3f5p-547, 0x1.a88e9a12bf69ep-1018, 0x1.c591dd5a807fcp-615, 0.0,
     0.0, 0x1.0c9e9c63a2683p-687, 0.0, 0x1.a0f20a9cfd095p-393, 0.0,
     0x1.f5302f20bb12cp-575, 0.0, 0x1.87a93e7ac7bf9p-430, 0x1.d4613ac3180b2p-1010,
     0x1.5d1cd35908cd5p-981, 0.0, 0.0, 0.0, 0.0, 0x1.47cb661725ba7p-521, 0.0,
     0x1.44c775c42125cp-920, 0.0, 0x1.6e2cdd5efa5a6p-597, 0x1.189b96ab6adcap-292,
     0x1.c4e57d9f234fap-1021, 0.0, 0.0, 0.0, 0.0, 0x1.ce067ce8df97p-905,
     0x1.737d2e6248cf2p-874, 0x1.78958227538cfp-362, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb8c45a724fc9p-581, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63c487758ac5ap-268,
     0.0, 0x1.cf22460f03313p-289, 0.0, 0.0, 0x1.4976f8ab9ed4fp-658, 0.0, 0.0,
     0x1.df9fe790071e7p-78, 0x1.53d223ea3602ap-316, 0.0, 0.0, 0.0,
     0x1.b8f93069ea823p-958, 0x1.58a573757ee81p-836, 0x1.f92d960c0415dp-580, 0.0,
     0x1.13a4c4aaffe45p-901, 0x1.b843d296a09fp-314, 0.0, 0x1.9e0cd5130aff4p-527, 0.0,
     0x1.42bfe12669cadp-329, 0x1.69f77e5794ef3p-583, 0.0, 0.0, 0x1.15562a154ccd5p-26,
     0x1.3d1ef1be75278p-118, 0.0, 0.0, 0.0, 0.0, 0x1.ae63d62b5e49bp-1014, 0.0,
     0x1.e57a4a7d0e62bp-76, 0.0, 0.0, 0.0, 0x1.710e2a667d44fp-145,
     0x1.159515515a9bdp-543, 0x1.71a37f59ccf2dp-621, 0.0, 0x1.7e683edaf0eebp-234, 0.0,
     0x1.b9e57d10c2c78p-792, 0x1.e0fefda5d24d4p-800, 0.0, 0.0, 0x1.31aba4c615531p-971,
     0.0, 0.0, 0x1.3a37286d456a6p-845, 0.0, 0x1.1a756ed4cf378p-113,
     0x1.49b6cbe4a359ap-818, 0x1.6ed2b6e8ddb53p-490, 0.0, 0x1.2f742f596ef02p-204, 0.0,
     0.0, 0.0, 0.0, 0x1.c416980014dd1p-741, 0x1.f8505be075b46p-666,
     0x1.070fdf1ed2224p-908, 0.0, 0x1.2c0da309968e9p-383, 0.0, 0x1.6b644fe4a014fp-824,
     0x1.b0631dcf8e899p-161, 0x1.fa978ac95ad21p-239, 0.0, 0.0, 0.0, 0.0,
     0x1.fbb37bbb687a4p-686, 0x1.669027687dcf4p-949, 0.0, 0.0, 0.0,
     0x1.e487ff02d019ap-977, 0.0, 0.0, 0x1.2fc41097a9428p-932, 0x1.64f2bbc33cc8ep-728,
     0.0, 0.0, 0x1.1a57ce6064c1bp-669, 0x1.feb1b86d73e95p-664, 0.0,
     0x1.9254a5d4d36e8p-660, 0.0, 0.0, 0x1.1f57f19088476p-334, 0x1.a427e2fdfc546p-347,
     0.0, 0x1.c9a53fcac3e35p-768, 0.0, 0.0, 0.0, 0x1.1d35c0377261bp-775,
     0x1.6aca9f46457ffp-875, 0x1.a608eed6325e3p-261, 0.0, 0x1.28f5e13e10b6fp-673, 0.0,
     0.0, 0.0, 0.0, 0x1.7d6aeb84d4abbp-1022, 0.0, 0.0, 0x1.a30a2422f84ddp-1009,
     0x1.29b1ed7d13ec9p-463, 0x1.7727aad984fdap-390, 0.0, 0.0, 0.0,
     0x1.a60b71d2bc9a7p-665, 0.0, 0.0, 0x1.bfc92a55a9ae5p-839, 0x1.a85f73cc12d06p-389,
     0x1.75eeaf4964725p-633, 0x1.0965afb4f6d34p-307, 0.0, 0.0, 0x1.bc76bc8ad7d64p-931,
     0.0, 0.0, 0x1.42944d3f93f21p-101, 0.0, 0.0, 0x1.650af3fa2a8ebp-473, 0.0,
     0x1.a41cea14e9f99p-643, 0.0, 0.0, 0.0, 0x1.6c0ee535ce6d2p-9, 0.0, 0.0, 0.0, 0.0,
     0x1.0daa4383fe577p-954, 0.0, 0.0, 0x1.cb3bbc880e55bp-197, 0x1.d71e7630b322cp-239,
     0.0, 0.0, 0.0, 0.0, 0x1.5dde1cb0f01aep-952, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1598863a23fc5p-117, 0.0, 0.0, 0x1.c972a6faf9a5bp-41, 0x1.b05712e326edbp-755,
     0x1.5d4323a6ff0dbp-287, 0.0, 0x1.72b78268e09efp-15, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3bb1999b54dd5p-383, 0x1.0165df09d651ep-136, 0.0, 0.0, 0x1.66465bc2824f9p-229,
     0.0, 0.0, 0.0, 0x1.df18f93552f89p-358, 0.0, 0x1.c40fcd236c96p-1016,
     0x1.992b101a78a6dp-804, 0.0, 0x1.2ff9ba18958b8p-86, 0x1.c6c5e9fe0ca2ap-266, 0.0,
     0x1.96fa8a8b900efp-843, 0x1.368eafa840115p-528, 0x1.f855268eaa7eap-348,
     0x1.ceb195ec8ec9ep-278, 0.0, 0x1.fcbcc2be2997ep-879, 0.0, 0x1.98a7c57e8decbp-916,
     0.0, 0.0, 0.0, 0x1.ec0eb77e31dbp-230, 0.0, 0.0, 0x1.cecbc1ad62344p-727,
     0x1.e3d6b9880666fp-427, 0.0, 0x1.9c7c2d15fcabep-512, 0x1.c354b063b9daep-56, 0.0,
     0.0, 0.0, 0x1.ba71c198d7b98p-318, 0x1.19b138fcf064ep-654, 0.0,
     0x1.fb067acd291cep-615, 0x1.0f9a1771f8731p-838, 0x1.e1ba00d5e67d6p-604,
     0x1.156552bc558e7p-146, 0.0, 0x1.b2cdd7177f486p-307, 0.0, 0.0,
     0x1.a0161727eb21p-151, 0.0, 0.0, 0x1.ebbb43625f496p-863, 0x1.063a600949d31p-419,
     0.0, 0.0, 0.0, 0x1.5635b12e092c8p-759, 0x1.2163ab8b06995p-997, 0.0,
     0x1.3085825274108p-409, 0x1.551c762f2c422p-95, 0x1.2a71f480d3185p-89, 0.0, 0.0,
     0.0, 0x1.9ed593bfbdf1cp-135, 0x1.9d4f4edad8dc7p-183, 0.0, 0x1.c15d7236f5c44p-180,
     0.0, 0.0, 0.0, 0x1.8214984261bd3p-318, 0.0, 0x1.76a147eb9229p-71, 0.0,
     0x1.300c52b7cc216p-785, 0.0, 0.0, 0.0, 0x1.9b87af0cb939dp-964, 0.0, 0.0, 0.0,
     0.0, 0x1.c81c4a1c8056cp-46, 0.0, 0x1.3501a7806b488p-908, 0.0,
     0x1.1bfd0e8ac4dd1p-780, 0x1.06645d64cd013p-970, 0x1.f576f5fdc64d9p-850,
     0x1.7125f9dc67761p-841, 0x1.cd0703272a4a8p-23, 0.0, 0.0, 0x1.e537b397a1f69p-128,
     0x1.a0ded5a236ff4p-36, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6506ad8fb1ed7p-402,
     0x1.411881f9537cep-823, 0x1.da12687f8e455p-895, 0x1.7f13746a75cc2p-128, 0.0,
     0x1.9698d22cbbaebp-280, 0x1.89a0d973d72p-126, 0x1.6770fff59a3cbp-218,
     0x1.fc80b7f2be71ep-906, 0x1.7c60ea9316845p-469, 0x1.961684bc6551bp-242,
     0x1.fc431b511bcaap-170, 0x1.467c0c125ec48p-774, 0x1.d85c2dce3bdafp-721, 0.0, 0.0,
     0x1.afc9e13b2b599p-1004, 0x1.642a9a5622a2fp-84, 0x1.252dc87e16402p-896,
     0x1.01c551b89e8a9p-835, 0.0, 0.0, 0x1.85870fe10b1c7p-527, 0x1.eb02f0b59e027p-949,
     0.0, 0.0, 0x1.55994282c1d6dp-597, 0x1.c97373dfee542p-971, 0.0, 0.0, 0.0,
     0x1.9028589bf16e8p-491, 0.0, 0x1.c8bd86faa7a3fp-961, 0x1.d24a1e1bbe22bp-533,
     0x1.0995ed3528ee6p-545, 0.0, 0x1.b5cef78b0568ep-661, 0x1.45ae4dbe4878ap-373, 0.0,
     0x1.49c1973d1a49ap-467, 0.0, 0x1.bc31a5740b1afp-380, 0.0, 0x1.86e0bdc6e1af1p-547,
     0x1.6bf2a59839541p-657, 0x1.15b246be100ebp-94, 0x1.7436c6b57eb46p-510,
     0x1.ee12bb1efadc7p-241, 0x1.72ec3f3cef385p-303, 0x1.405d2b7ef1b72p-76, 0.0,
     0x1.deb065ef08df8p-960, 0.0, 0.0, 0x1.4b4e160d4e1e5p-810, 0.0,
     0x1.c978a0b57db3ap-425, 0x1.05c7d0df77053p-509, 0.0, 0x1.6108d790caf21p-207,
     0x1.4deb8b0f8b80dp-689, 0x1.ace81a71f2d11p-547, 0.0, 0x1.ce2f3cfc04b82p-19, 0.0,
     0x1.e750709054568p-680, 0x1.fb6281d6ad625p-716, 0x1.106802d9a0087p-654, 0.0, 0.0,
     0x1.584175574f8b3p-356, 0.0, 0x1.1a54de2563339p-394, 0x1.93577ce486f52p-682,
     0x1.87eb9d3ef35efp-676, 0.0, 0.0, 0x1.9cf89c276f85ep-947, 0x1.28cdba3fa02abp-889,
     0.0, 0.0, 0.0, 0x1.0480b082e9ff3p-675, 0x1.f625a8e0689f6p-626, 0.0,
     0x1.963e483218f4fp-869, 0x1.fa661c65f6db6p-57, 0x1.ba8265c097706p-555,
     0x1.5a9565fc9ff59p-611, 0x1.6f00378ff6a35p-106, 0.0, 0x1.33ae6c5e8d96cp-561,
     0x1.6ac9d7c79eee3p-75, 0x1.87063a8093381p-153, 0x1.b6c452bb7d56bp-599, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.37baefa527836p-489, 0x1.97c502f5cdf68p-86, 0.0, 0.0,
     0x1.01fbcc5e48fedp-642, 0x1.047d9ebcd30b4p-676, 0x1.f1a0dea300b95p-339,
     0x1.96c692ede48bdp-512, 0.0, 0x1.c7c49cc619d92p-111, 0x1.1a59c559d2aadp-149, 0.0,
     0x1.5506cc10fa996p-971, 0.0, 0.0, 0x1.595ff7954733cp-36, 0x1.4f95dada0e0bbp-894,
     0x1.3aa3df64ea6fbp-441, 0x1.704fc30398e79p-992, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3bfcb38ddfa52p-203, 0x1.07b7903e67537p-678, 0x1.23eae4ee2e9a9p-961, 0.0,
     0x1.c9dbd0f8fd408p-265, 0.0, 0x1.2f9f2278fdca2p-264, 0.0, 0x1.c29329f54fc33p-861,
     0.0, 0.0, 0x1.8755efcf5b959p-493, 0x1.eea18019a7d2ap-572, 0x1.e2dd524b80d4ap-231,
     0x1.ad2c9e0423a88p-16, 0.0, 0x1.c3e8fa746cde7p-873, 0.0, 0x1.044d502acc6d1p-536,
     0x1.fd7359189fcb2p-936, 0x1.ed056062dd80fp-440, 0x1.d6507df383713p-405,
     0x1.e0c810e430e88p-487, 0.0, 0x1.b20482c8a410ap-191, 0.0, 0x1.b3cc137a14c87p-102,
     0x1.04a2b334a2ac9p-931, 0x1.30c59c74c0026p-591, 0.0, 0.0, 0.0, 0.0,
     0x1.0e902b9e6c442p-911, 0.0, 0x1.fcbcf2baf181cp-780, 0x1.821df0114e312p-60,
     0x1.8ffccb5b9fde2p-519, 0x1.970115dffee87p-803, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f3c08ec700032p-788, 0.0
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
            tmp1 = Sleef_finz_frfrexpd1_purecfma(tmp0);
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
    printf("Sleef_finz_frfrexpd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpd1_purecfma bench acc %la\n", global_bench_acc);
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
