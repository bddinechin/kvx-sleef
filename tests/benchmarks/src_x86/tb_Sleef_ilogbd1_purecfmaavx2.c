/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ilogbd1_purecfma.c --function Sleef_ilogbd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision int32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.d6ea73a234634p-481, 0x1.0cc1825ce4f11p-551, 0.0, 0x1.8d5f68da5a89ap-417,
     0x1.e100bf0a4c7dp-960, 0.0, 0x1.8b465ce9738ap-612, 0.0, 0.0, 0.0,
     0x1.2b3952985c7f5p-267, 0.0, 0.0, 0.0, 0.0, 0x1.7cbc27a51902dp-919,
     0x1.0c27c822b581ap-538, 0.0, 0.0, 0.0, 0x1.b4729a3a06c6fp-680, 0.0, 0.0, 0.0,
     0x1.591daa8d9b6bcp-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68a223fc2ebb6p-172,
     0x1.5f16f2e763697p-898, 0x1.39774cafa579p-104, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0f3a39a3d6b1ep-147, 0x1.c74a9032bd742p-680, 0x1.43f282420eb4p-15, 0.0, 0.0,
     0.0, 0x1.250fd91ec2c19p-47, 0.0, 0x1.78536d9856e65p-785, 0x1.5679d8486c342p-143,
     0x1.17f9d8e272987p-310, 0.0, 0.0, 0x1.fdc3b2ea1e921p-842, 0x1.7b240387291ebp-801,
     0x1.c5b34bf4b12b7p-520, 0.0, 0.0, 0x1.30a2fb4a2888cp-41, 0x1.69296831c6529p-226,
     0.0, 0x1.ad736df5a7d2cp-348, 0.0, 0.0, 0x1.a4f4eb80c763cp-566, 0.0,
     0x1.348607c36c518p-214, 0.0, 0x1.dcd239684ff28p-805, 0x1.643ae042dd2f9p-893,
     0x1.9a8542e3c66ffp-62, 0x1.420359064bf98p-535, 0x1.e69204494c14cp-582,
     0x1.d6955975b2b35p-181, 0x1.a9d782637b80bp-1017, 0.0, 0x1.b9a28ff2b4152p-640,
     0x1.e5050810aa382p-548, 0x1.d2ab759c58199p-690, 0.0, 0x1.1874009ab915bp-234,
     0x1.6e249a234ece5p-72, 0.0, 0x1.808ca889e389p-622, 0x1.57cd4d2b4d1ebp-521, 0.0,
     0x1.87260f61081adp-753, 0x1.d26cbfa63bf8dp-621, 0.0, 0x1.63686467d2958p-762,
     0x1.b9fe0ee0762bep-532, 0x1.b2f3975c01283p-177, 0x1.b8207375267p-274, 0.0,
     0x1.10c82acfb0218p-723, 0x1.4f317886a0c7cp-695, 0x1.88cdc2e274d4dp-278, 0.0,
     0x1.f9ec94cbd69dp-237, 0.0, 0x1.1bd0f13d562cfp-866, 0.0, 0.0, 0.0,
     0x1.4f485a5f251a5p-149, 0x1.e09dbde3db27bp-744, 0.0, 0.0, 0.0, 0.0,
     0x1.b8672354c7895p-46, 0.0, 0.0, 0x1.1511189f7ec76p-258, 0x1.71fab8d2a3ed3p-89,
     0x1.13aa672ef816fp-735, 0x1.9a34683f4a341p-367, 0.0, 0x1.05d76c37d496fp-913, 0.0,
     0.0, 0x1.e7caef96ab70cp-94, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1f7f4fa4a623p-1008, 0.0, 0x1.95651c945a945p-732, 0x1.e656ac0c41aadp-318,
     0x1.20a6767e213fp-58, 0x1.9ef1a1538ba55p-871, 0.0, 0x1.ccc057d48a537p-196, 0.0,
     0.0, 0x1.bc8e1c7424046p-763, 0x1.99b09ae1595f7p-601, 0.0, 0.0, 0.0, 0.0,
     0x1.84e1b5584ad79p-213, 0.0, 0x1.2b06c9d3724p-14, 0.0, 0x1.f5b9e67265151p-546,
     0.0, 0x1.9c2ee92c8dce9p-176, 0x1.e13afaa1bd815p-706, 0.0, 0.0, 0.0,
     0x1.ef8316d861344p-565, 0.0, 0x1.54afb51d6c856p-8, 0.0, 0.0,
     0x1.99d2935ba8454p-809, 0x1.3c90c83fd6c23p-608, 0.0, 0x1.ec4dcdc833ed7p-141,
     0x1.55e8639863791p-218, 0x1.d16c60c6c2bb2p-603, 0.0, 0x1.cba3a5b0fe96ep-147,
     0x1.491f5bf359085p-942, 0x1.1c4f31e713aa1p-740, 0x1.fe3c7022498ebp-160,
     0x1.cf6486c18ee09p-311, 0.0, 0x1.7128d689322c3p-434, 0.0, 0x1.9f6148d0fad8ep-405,
     0x1.c2c5a7ccf47d4p-973, 0.0, 0.0, 0x1.dde7a6f236169p-808, 0x1.ddde0ce75f69fp-886,
     0x1.ddeadd6424d56p-41, 0x1.2bee99c823ccap-475, 0x1.d5d93ac30b9cp-627,
     0x1.c9da43bc76c97p-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39148949f6cc9p-886,
     0x1.5c32b5af5941ep-86, 0x1.dec2b2086df36p-922, 0.0, 0x1.d0de3c95e3759p-420,
     0x1.84dc47b1b4396p-974, 0x1.56e8472b5e513p-797, 0.0, 0x1.9fa71dda0df1cp-169, 0.0,
     0x1.741273e1060efp-442, 0.0, 0.0, 0x1.8eb1b2fe04a74p-212, 0.0, 0.0, 0.0, 0.0,
     0x1.7ad4ee7717b2fp-738, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0759a90fabb21p-947,
     0x1.1f3177c51a372p-524, 0.0, 0x1.0ae4052fc77adp-256, 0x1.449bb4045691ap-899,
     0x1.b110d1a54e837p-544, 0x1.a3968e2330d06p-626, 0x1.75cc9abeea89ap-252, 0.0, 0.0,
     0x1.6e5617dccfafp-295, 0x1.0ff5d65d6ea07p-35, 0x1.1cddca7a06e03p-917,
     0x1.be618a9c4cad2p-240, 0x1.335c79a74b012p-521, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd3a315bf23dfp-367, 0.0, 0x1.c378fd1779048p-985, 0.0, 0.0, 0.0,
     0x1.b94dc36b95c0cp-939, 0.0, 0x1.eabb4a3c3363p-306, 0.0, 0.0, 0.0, 0.0,
     0x1.6719265cdc37p-932, 0x1.36f25279f77bfp-549, 0x1.33c40b71b95afp-669, 0.0,
     0x1.06b9924ba98ffp-702, 0x1.ead8b1653d6ep-807, 0.0, 0.0, 0.0,
     0x1.5a5acee015b34p-830, 0x1.ee2d9139056e8p-880, 0.0, 0.0, 0.0,
     0x1.da9a8d5c8c193p-693, 0x1.3ae99dcd04068p-988, 0x1.c4e48839b0327p-302, 0.0, 0.0,
     0.0, 0.0, 0x1.2925cd2e17dcdp-465, 0x1.28aebc61920b4p-245,
     0x1.901276f05b3ecp-1018, 0x1.8d6dac9884209p-721, 0x1.f17b7dcf09f1cp-728,
     0x1.f2847ef664ea2p-613, 0x1.f7fc03f45ccc4p-765, 0.0, 0x1.234b4f88cd7b3p-711, 0.0,
     0x1.9ba639fd56d3cp-840, 0x1.67047b41ed3f3p-508, 0x1.6f64683c66fccp-504,
     0x1.67c0f5ceb50fbp-883, 0x1.79fab5248a247p-909, 0x1.3818218061b4p-858, 0.0, 0.0,
     0x1.622783cf5a5fap-723, 0.0, 0x1.a7f11acb5e74bp-724, 0.0, 0.0,
     0x1.37ed8aeb93c6ep-596, 0x1.65dd629e62779p-482, 0x1.24b4df31bdf26p-916, 0.0, 0.0,
     0x1.6ebf4f85b9efdp-162, 0x1.fb7fe3a7b7695p-529, 0x1.ea99c070da0adp-588,
     0x1.09b9b71463186p-74, 0.0, 0x1.d5b9acb97f5f1p-168, 0x1.7fdbdf7de09a7p-5, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7dc2f05f25d88p-626, 0x1.12ae6ecf739a4p-823,
     0x1.1805277b49d31p-278, 0x1.afd36ecb75941p-166, 0x1.9d63838337151p-551,
     0x1.038de69f8984dp-863, 0x1.1bcfb5444bdd5p-849, 0.0, 0.0, 0x1.e0dbd8879b3b9p-656,
     0x1.f9c280becff9dp-34, 0x1.6dca132066b49p-283, 0x1.846e796fc6c6p-670, 0.0, 0.0,
     0.0, 0x1.f3122874d6e37p-889, 0x1.b3bb5bad3e563p-704, 0x1.937e0b6fd3f0fp-820, 0.0,
     0x1.2d47449316ab9p-963, 0x1.cefe76d04df7ap-465, 0.0, 0.0, 0x1.982e6657a6bcfp-976,
     0.0, 0x1.6ea90a5c72f37p-724, 0.0, 0x1.5b549e0fb80d5p-613, 0.0, 0.0, 0.0, 0.0,
     0x1.a84cc5426fb57p-99, 0x1.7423dce3dda3ep-841, 0.0, 0x1.458e6dd8138b3p-439,
     0x1.7e4faa38a263dp-23, 0.0, 0x1.6a6f4751f181p-752, 0.0, 0.0, 0.0,
     0x1.2d02349f58ce6p-582, 0x1.58570e0cd021bp-279, 0x1.6d4849ab33f4cp-665,
     0x1.d4675de0fbadcp-119, 0.0, 0x1.4a5197be28a2dp-235, 0.0, 0x1.7c03bf26f69cp-903,
     0x1.70062d931d64ep-803, 0x1.518ee76564097p-756, 0.0, 0.0, 0x1.5c4856800cbcbp-10,
     0x1.d88b165b15568p-859, 0.0, 0.0, 0.0, 0.0, 0x1.c4b3b6a20e93p-399,
     0x1.80a6240fb5955p-220, 0x1.f8004b1a02d4bp-612, 0.0, 0.0, 0x1.4d8c736c2eba2p-677,
     0.0, 0x1.e698f8fad1fa1p-636, 0x1.d07f17531383dp-470, 0.0, 0.0, 0.0, 0.0,
     0x1.dec85b99de738p-199, 0x1.88702e5f0ca5dp-600, 0.0, 0.0, 0.0,
     0x1.e9b9f40df734cp-1004, 0.0, 0.0, 0x1.2388a6806ebd1p-255, 0.0,
     0x1.b835bf8386491p-301, 0.0, 0.0, 0x1.397ad5ea89a9bp-634, 0.0,
     0x1.11063826edb86p-638, 0x1.eb8914917575cp-891, 0x1.9171b373fb2d6p-122,
     0x1.4a2151a70263bp-622, 0.0, 0.0, 0.0, 0x1.765a7bae05aa3p-255,
     0x1.a2098e6398132p-823, 0.0, 0x1.80d15ee2699dcp-621, 0x1.836083801309ep-979,
     0x1.d1030d6f30d7fp-32, 0.0, 0.0, 0x1.94e03341e9ec7p-476, 0.0, 0.0,
     0x1.3c29c88886f0ep-226, 0x1.aeb3e2bbf8537p-448, 0.0, 0.0, 0x1.6acf7494ccc8cp-370,
     0.0, 0.0, 0x1.603d58760f563p-436, 0x1.fbbb75f461284p-365, 0.0, 0.0,
     0x1.5af60eff58065p-230, 0.0, 0.0, 0x1.d37930e058ec6p-269, 0.0, 0.0,
     0x1.9d949f04b40e2p-615, 0.0, 0x1.65d6d98e75b31p-257, 0.0, 0x1.7d698b87321e8p-563,
     0x1.b5642208489aep-319, 0.0, 0.0, 0.0, 0x1.dc05199e504b3p-439,
     0x1.de98e65870ecfp-293, 0x1.e4766b533dcbfp-553, 0x1.19ceacdc148bp-687,
     0x1.f5d93e999651bp-965, 0x1.564ac4d325b6fp-444, 0x1.01d51b749109ap-584,
     0x1.68913e1a1af32p-553, 0.0, 0.0, 0.0, 0x1.e68142795420dp-262, 0.0,
     0x1.773c3e17d6941p-139, 0.0, 0x1.5c4f693630a21p-563, 0.0, 0.0,
     0x1.4cae913e1dc2dp-838, 0x1.18afa929da181p-44, 0x1.a0cecd8720a11p-25,
     0x1.bcd5634743bffp-375, 0x1.db5ea10057c49p-511, 0x1.cafb9591efbeep-387, 0.0, 0.0,
     0.0, 0.0, 0x1.a2eb5acaeb51cp-707, 0x1.874db782014cap-562, 0x1.5e180f1314d5cp-173,
     0x1.3d21e754dc655p-325, 0x1.c18d452e6e41fp-627, 0x1.40d6f4fa58c1cp-748, 0.0,
     0x1.e839d2d58db3fp-185, 0x1.b5b6c6f228acap-616, 0x1.52b47929c02fep-131, 0.0,
     0x1.acf0d124cbfa2p-786, 0.0, 0x1.2c762138058e2p-166, 0.0, 0x1.8e3a2f72d23dap-711,
     0x1.cf07e89e162cep-343, 0x1.fdc5b7f260562p-721, 0x1.36a69038076c6p-342, 0.0,
     0x1.f8df6c0a04c82p-935, 0x1.e57b9740930d6p-922, 0x1.c68213cf53769p-463,
     0x1.526d82140242fp-397, 0.0, 0x1.b070bebb0784ap-923, 0.0, 0.0,
     0x1.068446f3600efp-870, 0x1.07c981979959ep-536, 0.0, 0.0, 0.0,
     0x1.869ff4a9108bfp-827, 0.0, 0.0, 0.0, 0.0, 0x1.54516651d3e89p-874,
     0x1.42830c085a469p-977, 0x1.eff3ac85f9469p-52, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70c17475c047dp-218, 0x1.a82618a7544eap-338, 0x1.12685012353f8p-547, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.169f88c5d0eb9p-931, 0.0, 0x1.6926584e7e40bp-26, 0.0,
     0.0, 0x1.e0491f4a68d22p-956, 0x1.be02080719858p-435, 0.0, 0x1.69594ac82093cp-200,
     0x1.f38adf79ef1e3p-12, 0.0, 0x1.84ac85d513819p-394, 0x1.a2730cbec5e26p-256,
     0x1.13ed1664c7451p-839, 0.0, 0x1.319b56ed4a8e3p-394, 0.0, 0.0, 0.0,
     0x1.ba4c9d5f6ac4dp-23, 0.0, 0x1.d8683242781p-941, 0x1.9a0975de6f027p-467,
     0x1.11f632c9a7b58p-801, 0.0, 0.0, 0.0, 0.0, 0x1.3360758462d07p-291, 0.0, 0.0,
     0x1.4bf1efb5abb97p-395, 0.0, 0x1.d3d69cdb48019p-522, 0x1.73208fe1077dfp-263, 0.0,
     0.0, 0x1.932726776483fp-821, 0x1.91b1a4fddf4acp-279, 0x1.c5240f73e5dcp-593,
     0x1.680a4dccfebf9p-223, 0x1.785c2ec67cd62p-282, 0.0, 0.0, 0x1.ee4b93cc7e3aap-416,
     0.0, 0.0, 0.0, 0x1.75e15a9d41db1p-39, 0.0, 0x1.74ab69b683895p-667,
     0x1.955cee62860f4p-49, 0.0, 0x1.6e46e16e799ap-253, 0x1.d507d96045fd2p-992, 0.0,
     0x1.3ebf1f9834daep-551, 0.0, 0.0, 0.0, 0.0, 0x1.cc31f6abd1173p-216, 0.0,
     0x1.bec32411f71e1p-295, 0x1.db05b277890e7p-123, 0.0, 0.0, 0.0,
     0x1.8196cd379421dp-225, 0.0, 0.0, 0x1.a44aa1de5d0f1p-844, 0x1.28a8373ac6ae2p-510,
     0x1.24cb748019909p-13, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a5ccc7b0e1277p-590, 0.0,
     0x1.97a614f5b0525p-845, 0x1.796fd47bfada3p-999, 0.0, 0x1.a2dd1362476f6p-523, 0.0,
     0.0, 0x1.83ebd00720424p-371, 0x1.a19b265013ce9p-270, 0.0, 0.0,
     0x1.3a34659c4bf1ap-23, 0.0, 0x1.f53edcdae0704p-761, 0.0, 0x1.b77efe4545a4ap-920,
     0.0, 0.0, 0x1.69d6d6f22090fp-617, 0x1.3e692612e477cp-450, 0.0,
     0x1.df2d05f719346p-392, 0x1.bd7ce040a316dp-884, 0x1.534955473900fp-233,
     0x1.d4436fd05342ep-285, 0x1.f39b449704985p-136, 0.0, 0.0, 0.0,
     0x1.3c0547fd904a6p-9, 0.0, 0x1.ac2c7233c2f27p-911, 0.0, 0x1.b80a304ef13aep-39,
     0.0, 0x1.1c8aab613753ep-641, 0.0, 0.0, 0.0, 0x1.b1e8ee2090514p-674, 0.0, 0.0,
     0.0, 0x1.765dde3de011p-1006, 0.0, 0.0, 0x1.602a6b6b37b76p-413,
     0x1.55756140b4394p-721, 0.0, 0x1.758f977be511ap-851, 0.0, 0.0,
     0x1.594f522c09ad1p-780, 0x1.c97260e310947p-865, 0.0, 0.0, 0x1.f28a7deca69ccp-954,
     0.0, 0.0, 0.0, 0.0, 0x1.c344b2ccfe783p-670, 0.0, 0.0, 0.0, 0.0,
     0x1.4acc54c9e0239p-908, 0.0, 0x1.2ca5a95784ed6p-52, 0.0, 0x1.f592ad115485fp-543,
     0x1.7610a2d7fa94bp-427, 0.0, 0.0, 0.0, 0x1.3e5a26e827702p-283,
     0x1.2792e74951d5fp-642, 0.0, 0x1.1ecde0ec41e37p-60, 0.0, 0x1.1ce98fadd3b1fp-725,
     0.0, 0.0, 0.0, 0.0, 0x1.b83aeff65c945p-723, 0x1.9d898461cfe1fp-926, 0.0, 0.0,
     0.0, 0.0, 0x1.93db26948aea2p-402, 0x1.58c6edafd5c02p-727, 0x1.4932e5863b5fep-475,
     0x1.41dc7f407a19fp-438, 0.0, 0x1.e55d568926881p-457, 0x1.6364ae3472926p-626, 0.0,
     0x1.41365c7555a64p-905, 0x1.466dd3b6e9bdcp-259, 0.0, 0.0, 0x1.70a60b22b8452p-543,
     0.0, 0x1.093baf48792f8p-50, 0x1.416c2afbc8aabp-969, 0x1.6be7121f86892p-952,
     0x1.a53c470ebf31ep-842, 0x1.f2028f6c1d3a7p-763, 0.0, 0x1.3c23d4ee9077fp-577,
     0x1.9cebc99ed4493p-867, 0.0, 0.0, 0.0, 0.0, 0x1.5e534d7723267p-670,
     0x1.6eca6c5ef86fdp-941, 0.0, 0x1.2f18ff7bff8c3p-268, 0x1.50713fd9f1974p-722,
     0x1.26633d2cecef2p-631, 0.0, 0.0, 0.0, 0x1.8d6ff986de4e8p-977, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e2f122503091dp-415, 0x1.2dd054126570dp-403, 0.0, 0.0, 0.0, 0.0,
     0x1.2ac2b46ba34b3p-678, 0x1.55793536671ecp-194, 0.0, 0.0, 0.0, 0.0,
     0x1.50b80900c1b2dp-271, 0.0, 0.0, 0x1.1824ffb356aeap-905, 0.0,
     0x1.183b8f528004dp-29, 0x1.45aa02316ad39p-76, 0.0, 0x1.7a6bba3ad4537p-365, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6db0b329d30ep-390, 0x1.b36d7cc806a4bp-848,
     0x1.2c72673e1bb6dp-309, 0.0, 0x1.f7efb7209619dp-298, 0x1.a107159073072p-344,
     0x1.184e5ce7ac574p-822, 0x1.4b41e3f1fe778p-602, 0x1.6ec8cc15fe7d8p-362, 0.0,
     0x1.76a7a3bf03d5dp-200, 0x1.ef1a03d019f95p-352, 0x1.b37163ff26435p-345,
     0x1.bb8efe96441d3p-258, 0x1.c2060919be249p-441, 0.0, 0.0, 0.0,
     0x1.c249777c3614p-1017, 0x1.968f9922dd06dp-904, 0x1.4fbb2fb8b1d97p-234,
     0x1.57cba1a08bf53p-816, 0.0, 0.0, 0x1.0cc48bdd29c9fp-984, 0x1.b657a0990ccc5p-333,
     0.0, 0.0, 0.0, 0x1.0a0fbef47954bp-470, 0x1.0e961f874c03fp-116, 0.0,
     0x1.c64ba50875b1p-957, 0.0, 0.0, 0x1.24f4448b34a24p-914, 0x1.6449628db0bdep-427,
     0x1.24120bb78b1f7p-159, 0x1.1735c43bf5101p-444, 0x1.d5e9552e8069dp-796, 0.0,
     0x1.ca9d1cc352b5bp-300, 0.0, 0x1.2535a0f44d727p-980, 0.0, 0.0,
     0x1.e9e9ea382573dp-587, 0x1.6b28ff979c501p-362, 0x1.ea6405fe8bb14p-749,
     0x1.7ce25f625ed9ap-568, 0.0, 0x1.48793caae168fp-762, 0x1.c0d53902580fdp-1019,
     0x1.ee703d5c50239p-398, 0.0, 0.0, 0.0, 0.0, 0x1.bc7e98175e3bep-1,
     0x1.5de9911e9d232p-468, 0.0, 0.0, 0x1.ca6b78d191e14p-132, 0.0, 0.0,
     0x1.536347d58ea7cp-871, 0.0, 0x1.b08f7958b99a2p-6, 0x1.d782278674bf8p-663, 0.0,
     0.0, 0.0, 0x1.7801503afa617p-292, 0.0, 0x1.6acd997ab1d1p-184, 0.0,
     0x1.6f6fa2a540059p-823, 0x1.2ba9ca0b99c02p-243, 0x1.24c5c002fd321p-15,
     0x1.073ea4603bf3fp-83, 0.0, 0.0, 0x1.1b449dc5a1b68p-5, 0.0,
     0x1.19f9083871fap-718, 0.0, 0x1.9f07f1c42e76bp-783, 0.0, 0.0,
     0x1.a096f93110a8ap-52, 0.0, 0.0, 0x1.40f96f6970a48p-306, 0x1.c99bca35fde28p-257,
     0.0, 0x1.dba01cb18b0ap-224, 0x1.d58be7328dfdap-356, 0.0, 0.0,
     0x1.4fe81606f1b15p-561, 0x1.065aba7bf4431p-891, 0.0, 0x1.204f7d3d4392dp-311, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.565c9140a86d1p-266, 0.0, 0.0, 0.0, 0.0,
     0x1.f35c70969d762p-926, 0.0, 0.0, 0.0, 0x1.673fa7bfb96d7p-974,
     0x1.abc28b02e124p-743, 0x1.fb422f9bd8a93p-667, 0.0, 0.0, 0x1.ae536d9d0c384p-463,
     0x1.f8baa99c0f18dp-262, 0x1.aef93bdab9a1fp-556, 0.0, 0.0, 0x1.41498dbb960ddp-245,
     0x1.702d90b14896p-433, 0.0, 0x1.7a6e13d9331cfp-747, 0.0, 0x1.e50f315929f26p-216,
     0x1.4e2ccc579e1afp-280, 0x1.f1e709bc6e518p-754, 0.0, 0x1.a68f494497932p-974, 0.0,
     0x1.d284b9da924f6p-323, 0x1.47ef161e1edf5p-301, 0.0, 0.0, 0x1.43d5805f81c6ep-64,
     0.0, 0.0, 0x1.83c3c158aa8e8p-325, 0.0, 0.0, 0.0, 0x1.386e4948d39f9p-243, 0.0,
     0.0, 0x1.e1e2d9c846154p-495, 0x1.1e05b84134d6bp-938, 0.0, 0.0, 0.0, 0.0,
     0x1.8e7a1539ec94bp-718, 0x1.592cf775b9c3ep-77, 0.0, 0x1.6b68e6f80ee32p-768, 0.0,
     0.0, 0.0, 0.0, 0x1.bf30803da4a92p-858, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c7d24837cd327p-364, 0x1.a795eb1e9551bp-340, 0.0, 0x1.dd7a418df2a8p-736,
     0x1.55f294905f209p-566, 0.0, 0x1.291e4aa1cd386p-406, 0.0, 0x1.1eb8a1a3c100ep-553,
     0.0, 0.0, 0.0, 0x1.478601d4a4a58p-291, 0.0, 0x1.d9927fc44aba6p-519,
     0x1.456c5dc949449p-374, 0x1.b2b5cba2be4e2p-228, 0.0, 0x1.ae6752cec56c3p-1015,
     0x1.bec6692a28c85p-1018, 0.0, 0.0, 0.0, 0x1.bfefa7cefe12cp-68, 0.0, 0.0,
     0x1.c376b38e47abdp-610, 0.0, 0.0, 0x1.87dcb703bdd54p-283, 0x1.ef667c4d167cap-379,
     0.0, 0x1.71605abe5959p-273, 0x1.b9310f42a38c5p-620, 0x1.0733ae797e9d4p-456, 0.0,
     0.0, 0.0, 0x1.56a86ba144d9cp-436, 0.0, 0.0, 0x1.92a787dbe4174p-501,
     0x1.1469835ca85b4p-82, 0.0, 0x1.3ed0671a215eap-266, 0x1.f2dea19ab1793p-1008,
     0x1.0e5419a971fedp-1007, 0x1.d8fb7d11f77dep-416, 0x1.5655c2c0b60b5p-270,
     0x1.d5c170380dc5cp-202, 0x1.8fed1a20fa296p-555, 0.0, 0x1.d313e3df1aceep-1022,
     0x1.dd7d1b2a850a5p-379, 0x1.1041e923f3b5ep-518, 0x1.0c54bbe649fd3p-869,
     0x1.ef1a732612f35p-920, 0.0, 0.0, 0.0, 0x1.5d27ce59746afp-484, 0.0, 0.0, 0.0,
     0x1.f50fbf602a879p-690
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = INT32_C(0);
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
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_ilogbd1_purecfma(tmp0);
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
    printf("Sleef_ilogbd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ilogbd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
