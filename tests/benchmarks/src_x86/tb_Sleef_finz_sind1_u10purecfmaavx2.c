/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind1_u10purecfma.c --function \
 *     Sleef_finz_sind1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0x1.d69b1eb09bd54p-404, 0.0, 0.0, 0x1.7b0cefd221f38p-799,
     0x1.b3535c337beaep-894, 0.0, 0x1.9592a6e635ebep-266, 0x1.6b9df2273389p-337, 0.0,
     0.0, 0x1.6bd2f3282ee56p-451, 0.0, 0.0, 0.0, 0.0, 0x1.27b930297067dp-978,
     0x1.6042c0c081581p-181, 0.0, 0.0, 0.0, 0x1.641f875529af1p-699, 0.0,
     0x1.d23402138ec3ep-135, 0.0, 0x1.ce681efd43ecp-613, 0x1.9137762c78e29p-913,
     0x1.d179e9468eb62p-104, 0x1.506c1752d42f8p-274, 0x1.106c7a0f121b2p-981,
     0x1.83c4d9cd983a5p-241, 0.0, 0.0, 0.0, 0x1.89632359c458cp-741, 0.0,
     0x1.b56b3e28649ffp-365, 0.0, 0x1.7cc0f4d58158p-223, 0.0, 0.0,
     0x1.14ae6e4a187e8p-335, 0x1.2f90f690ff114p-180, 0x1.000a8f56a517ap-867,
     0x1.f2494bffe457ap-833, 0.0, 0.0, 0.0, 0x1.86cb5a312e6c4p-521, 0.0,
     0x1.f7c9b10bfb444p-778, 0x1.c0e46504306c7p-582, 0x1.24eea1bdd07c2p-585,
     0x1.1c977561f5fedp-210, 0x1.f1a4dabacce0dp-754, 0.0, 0.0, 0x1.3fa49e2345ac4p-952,
     0x1.6957204be5462p-610, 0x1.172df78a252e1p-387, 0x1.71f12f544b6d3p-698,
     0x1.e983f5de1896bp-141, 0.0, 0x1.f567f3ed0e991p-615, 0.0, 0x1.e78e7306fbdd9p-980,
     0.0, 0.0, 0.0, 0x1.3c0b355e09363p-689, 0.0, 0.0, 0.0, 0x1.9bb8b08bec823p-458,
     0x1.78b758da0e0bbp-386, 0x1.d24655d3bc031p-654, 0x1.b9487420b09cdp-435,
     0x1.e6af42e31aea7p-164, 0x1.c299c05eb63d6p-350, 0.0, 0x1.2128636cebfb8p-398,
     0x1.99b89c6ef5987p-778, 0x1.198bb0d4e7e2ap-229, 0.0, 0x1.69f0561049f55p-383, 0.0,
     0.0, 0.0, 0x1.f885172587eebp-598, 0.0, 0x1.8cb65072143e6p-815, 0.0, 0.0,
     0x1.5dbedf076bb4p-722, 0x1.eea2889c721e2p-627, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2de4704b3905ep-1, 0.0, 0x1.d9e9f5a341e04p-473, 0.0, 0.0, 0.0,
     0x1.3a5add9b1c40cp-818, 0x1.7b1d40b97c5cbp-296, 0.0, 0.0, 0.0, 0.0,
     0x1.7f74f5c504543p-258, 0x1.9e29b5c55a0bap-814, 0x1.0d544016f04b4p-148,
     0x1.784a799da5c58p-380, 0x1.872bbe1dbab7dp-145, 0.0, 0.0, 0.0,
     0x1.ce6dddeb12181p-946, 0.0, 0.0, 0x1.4f9834b8c60d3p-514, 0x1.800b19b46577ep-203,
     0x1.a5f244360ca9p-564, 0x1.586e2de686589p-824, 0x1.d6aa6971ee231p-427, 0.0, 0.0,
     0.0, 0.0, 0x1.2777ebf8220ffp-494, 0.0, 0.0, 0.0, 0x1.0311321a7086cp-811,
     0x1.19ecfb000f1d7p-591, 0x1.5dcf5c6b5ac68p-121, 0x1.05639e64f9f46p-880,
     0x1.83a2fddc4ff9bp-93, 0x1.78970a25b3712p-820, 0x1.dcb8a44001c95p-270,
     0x1.67cb6da700a5ap-336, 0.0, 0x1.88420e2ace484p-472, 0.0, 0x1.174a9edddbe7dp-266,
     0.0, 0.0, 0.0, 0.0, 0x1.27d66ea6b5f8ep-698, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7d3468d517a65p-98, 0.0, 0x1.40537c1d5b3ccp-884, 0.0, 0.0,
     0x1.2a7cb63d54ce9p-58, 0x1.5593105fc6af9p-50, 0.0, 0x1.f24bad8f4dd26p-325, 0.0,
     0x1.76bfe2353e752p-788, 0.0, 0.0, 0x1.ba18f21f7528bp-77, 0.0, 0.0, 0.0,
     0x1.2e311a5c3d584p-259, 0x1.6ba3a8f46ba8fp-635, 0x1.77e7a95708638p-999,
     0x1.de9f7f6592aafp-870, 0x1.947288c7d0266p-632, 0x1.7a975c2f21626p-894, 0.0, 0.0,
     0x1.69854aa539fe4p-815, 0x1.ba8d88e0c001fp-11, 0.0, 0.0, 0.0, 0.0,
     0x1.eb4196ff83e2ep-792, 0.0, 0x1.b6425bcac5574p-853, 0.0, 0x1.a3d12006cc322p-244,
     0.0, 0x1.cd251fdb770f5p-440, 0x1.5c341930e3c91p-467, 0x1.e49033deaceecp-959, 0.0,
     0.0, 0x1.e965e4f6d8ebcp-161, 0.0, 0x1.5e2db02472e9fp-2, 0.0, 0.0,
     0x1.9cc2cab9a7d9bp-262, 0.0, 0x1.4a324e024170cp-388, 0x1.94dbd590279c7p-973,
     0x1.f0ceba7e1a376p-677, 0.0, 0.0, 0x1.7f5e6fac6c7c3p-44, 0x1.7b563efce76ep-262,
     0x1.6b6a585aef136p-810, 0.0, 0x1.f3b9089f910acp-921, 0x1.ae66c29b0443p-94, 0.0,
     0.0, 0x1.b956841b5d2d6p-339, 0.0, 0x1.b91d770bf8f24p-731, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.721bfe28a0d34p-384, 0x1.955cecbb480c5p-463, 0.0, 0x1.b073661252695p-135,
     0x1.22135f52a2a29p-930, 0x1.b1d3bf852f224p-1020, 0.0, 0.0,
     0x1.ecd22c7aa0b64p-740, 0.0, 0x1.711cccb41199dp-412, 0.0, 0x1.60932d2d95ad7p-319,
     0.0, 0x1.f87bd58b59473p-887, 0x1.394f8cc782ee4p-963, 0x1.722043dcc30b2p-587,
     0x1.82d22f388e303p-459, 0.0, 0.0, 0x1.d7cdcca01282bp-105, 0.0,
     0x1.7719fcdac8b8cp-122, 0.0, 0x1.92ab1688c2bd6p-637, 0.0, 0.0,
     0x1.90ad2654ea021p-202, 0x1.c58ce1ed557ep-295, 0.0, 0.0, 0x1.c2a8f73add5b9p-298,
     0x1.d59c07af7a35p-481, 0.0, 0.0, 0.0, 0x1.1279fd6c2ced5p-133, 0.0,
     0x1.81fd486282de2p-525, 0.0, 0.0, 0x1.1d1ecc46b2ecp-536, 0.0,
     0x1.3b59c92a988cep-513, 0.0, 0.0, 0x1.f1caadedf696dp-370, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c3598959033fbp-938, 0.0, 0x1.70ff89cd8a648p-604, 0x1.d2221951303a3p-15,
     0.0, 0.0, 0.0, 0.0, 0x1.5cb1de31afd4fp-327, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd41507e62419p-809, 0x1.4211d893f6587p-875, 0.0, 0x1.414fb65ab048ap-81, 0.0,
     0.0, 0.0, 0x1.b34fd6532a2ebp-946, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5cc99daf5bd03p-171, 0.0, 0.0, 0.0, 0.0, 0x1.7fa5d5a49969ap-948, 0.0, 0.0,
     0x1.2d87028bef9f6p-557, 0.0, 0x1.3093574f6a663p-219, 0.0,
     0x1.372ed31f908b1p-1015, 0x1.d96fd3921c525p-955, 0x1.c7a499239da6cp-526, 0.0,
     0.0, 0.0, 0x1.67ca5211acb46p-90, 0x1.0d1316dcab777p-266, 0x1.76e2bc2f39c7dp-192,
     0x1.9fcb7be88847p-902, 0.0, 0x1.99f7759eba603p-794, 0x1.78f7a43b444d6p-533, 0.0,
     0.0, 0x1.0716938d4a8bp-288, 0.0, 0.0, 0x1.fa90eaa4e6f1cp-757,
     0x1.6657bd7d0c6c2p-75, 0x1.2242f6dc197dp-553, 0.0, 0x1.6dca8dd7c8c5p-328,
     0x1.6641bb319ca6p-886, 0.0, 0x1.b8582473bfe1ap-760, 0.0, 0x1.b1fbb5802c513p-473,
     0x1.8cba72af5aa12p-710, 0x1.b2eaba59be14bp-824, 0x1.3fe29cc40c23fp-798,
     0x1.39115324dd629p-482, 0x1.4f745e34f23c2p-361, 0.0, 0x1.c49e184ec92acp-954,
     0x1.378cb94936f86p-917, 0.0, 0x1.7fa487b88f9a6p-988, 0x1.388f58ce49734p-248, 0.0,
     0x1.5f3e29b72536p-977, 0x1.59b30e747abfap-731, 0x1.25926a9ef4eb4p-537, 0.0, 0.0,
     0.0, 0x1.f02e809159606p-650, 0x1.40dd6ac509633p-427, 0x1.1a2b4c6f37133p-989,
     0x1.415d13522ff34p-304, 0.0, 0x1.0f60ff5d7e8d9p-800, 0x1.ffd911ae67e4fp-200,
     0x1.6a009862d8726p-740, 0.0, 0x1.9689865f4117cp-68, 0x1.7ae2925ef7159p-266, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.95a35e1101215p-345, 0.0, 0.0, 0x1.d4873217baae6p-664,
     0.0, 0.0, 0x1.746fb4807bd6fp-385, 0.0, 0.0, 0.0, 0x1.86968815979aap-177,
     0x1.244f2b765c69ep-917, 0.0, 0x1.aca36a028d13dp-827, 0x1.8b2ce52a1244ep-482,
     0x1.43249d3f0b2dp-38, 0x1.69eebec348fdcp-176, 0.0, 0x1.3fda4e857cb79p-738, 0.0,
     0.0, 0x1.039a31602ca1dp-931, 0.0, 0.0, 0x1.0a46bb5d4a746p-52,
     0x1.70d25b55a930fp-1012, 0x1.d77010f571e4ap-229, 0.0, 0x1.6550469e397a8p-408,
     0.0, 0.0, 0.0, 0x1.2265b9be26badp-705, 0x1.bd893cb9d854p-414,
     0x1.b21f4201b74ddp-198, 0x1.51b627bd95978p-190, 0x1.260d9c4d91bccp-198,
     0x1.891a4e35c642dp-808, 0x1.02e170b29657cp-438, 0x1.1713c27611359p-636, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ecf7bce394888p-713, 0.0,
     0x1.f76cb1cd0e4ap-558, 0.0, 0x1.31891aaa45dc3p-311, 0x1.50be01db98524p-728,
     0x1.d4f0ff84a4a7ap-110, 0.0, 0x1.16dff8d0589ffp-539, 0.0, 0.0, 0.0, 0.0,
     0x1.e2a16fbcf555bp-799, 0.0, 0x1.25e9c48fee7acp-110, 0x1.a4cb824eb5e93p-1017,
     0.0, 0.0, 0x1.401a1540dd96fp-454, 0.0, 0x1.f6fb5639f55fep-281,
     0x1.2ed1855c89be2p-1010, 0x1.95e723b735cabp-783, 0x1.52a11696a1239p-807, 0.0,
     0x1.c57c9d23c3c7cp-133, 0x1.cbbe351d5256cp-933, 0x1.131e3a289e6e4p-912, 0.0,
     0x1.57bcaa7202686p-27, 0.0, 0x1.56d8ac63ddc95p-1, 0.0, 0x1.02fee03b92468p-346,
     0.0, 0.0, 0x1.d5102f2f3ec57p-503, 0.0, 0.0, 0.0, 0.0, 0x1.5254c0bec6ef5p-122,
     0x1.0b9f898647b63p-700, 0.0, 0.0, 0x1.66b9fc5692c27p-649, 0x1.4bced3fe4d30fp-396,
     0x1.41c13dac16e75p-671, 0x1.e23a9d9100152p-472, 0.0, 0x1.0fd6c0ca4451ep-629, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a41ff65f1f09p-830, 0.0, 0x1.d9ac39054298bp-884,
     0x1.2740d1b4da809p-898, 0.0, 0x1.39bc0a8507c9ep-908, 0.0, 0x1.f70f6d3664046p-399,
     0.0, 0x1.dd11e7f6f8951p-419, 0x1.0b60fa5a9ab9cp-325, 0.0, 0.0,
     0x1.a6acadb6e5824p-477, 0.0, 0x1.bd2412978f287p-170, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.953e3e298a432p-406, 0.0, 0x1.5c1ea8859de5cp-1022,
     0x1.7c1467777dd48p-967, 0x1.621e67182bd37p-431, 0x1.151ff532fa298p-615, 0.0, 0.0,
     0.0, 0x1.2f2020e588766p-638, 0.0, 0.0, 0.0, 0.0, 0x1.6615b2f3264b7p-996,
     0x1.1ac0af86b0825p-317, 0x1.622b7e6d59653p-975, 0.0, 0.0, 0x1.2dee22c967511p-696,
     0x1.333db804917e8p-985, 0x1.ce361a709d4ebp-81, 0x1.0af7a44ac2b56p-949, 0.0,
     0x1.bee66f73f1715p-399, 0.0, 0x1.98b7c35fe6848p-434, 0x1.9a5ab8251cf1p-931,
     0x1.6c2c03b4c45dbp-760, 0.0, 0.0, 0.0, 0x1.d00a53a8e019fp-604, 0.0, 0.0,
     0x1.665ec76ee9c26p-558, 0.0, 0.0, 0.0, 0x1.75dc72b2509d3p-4, 0.0, 0.0, 0.0, 0.0,
     0x1.e693f4c751728p-1020, 0x1.19f5c08393bcbp-182, 0.0, 0x1.64bedf9315329p-307,
     0x1.53e41772e802ep-601, 0x1.5eb43ca0817acp-463, 0x1.ca3d0d8654919p-494, 0.0, 0.0,
     0.0, 0.0, 0x1.2e945810e8242p-486, 0x1.e19aeb83a9151p-436, 0.0, 0.0, 0.0,
     0x1.aef7cfc2ecc02p-976, 0.0, 0x1.a85c7d21b7cc4p-589, 0.0, 0.0, 0.0, 0.0,
     0x1.cbdf88da72c7ap-1015, 0x1.77a8ce6069ce4p-89, 0.0, 0x1.46ece6a3e7361p-362, 0.0,
     0.0, 0x1.c3412dffd3dep-654, 0.0, 0x1.8493510c13405p-404, 0.0, 0.0, 0.0,
     0x1.32ac144419489p-328, 0x1.8b2ce07cebd8cp-667, 0x1.c86fa7f90f1dp-261, 0.0, 0.0,
     0x1.01be30d850fccp-790, 0x1.7c37b32669557p-204, 0x1.5e75dbf573905p-457, 0.0,
     0x1.bb08e69271435p-537, 0x1.4113a16a6993ep-997, 0x1.2cf0e7a4cd457p-624, 0.0, 0.0,
     0x1.e53f6fb17a84ep-158, 0x1.84fde306efe23p-826, 0.0, 0x1.ae410372292aap-167,
     0x1.42a112668d921p-84, 0.0, 0.0, 0.0, 0x1.373423f6ad3e2p-188, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4b054a0669fdep-495, 0x1.06cd39b8be9fcp-865, 0.0,
     0x1.9dacbb20afa67p-1005, 0x1.464bfd18de1f3p-29, 0.0, 0x1.1aaa16387f1fp-90,
     0x1.aa2264fb2bd5ep-582, 0x1.cfba6c153bc3cp-775, 0x1.7e0695b52bbf5p-618,
     0x1.a07e783e31d8bp-898, 0.0, 0x1.e3fdfa9d8ad1bp-888, 0x1.25e7827b1712bp-81,
     0x1.d4a4193b448d3p-590, 0.0, 0.0, 0x1.2b0ea7d656d4ep-94, 0x1.612105cec47c9p-854,
     0x1.3a4a6f9baf47cp-38, 0x1.f8a2e47a21adbp-996, 0.0, 0x1.b82dcdfc056c8p-497,
     0x1.79939252f1bb1p-307, 0x1.3eccf83de7e41p-1003, 0.0, 0.0,
     0x1.ca0a2204996b3p-473, 0.0, 0.0, 0x1.c7c040ff1c8eep-1020,
     0x1.54aeadcfc4839p-191, 0x1.88ad729630445p-652, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c2a41734bae1dp-64, 0.0, 0x1.00d8d43186f6ep-35, 0x1.9dc76255eccf7p-506, 0.0,
     0x1.d0235e901046ap-614, 0.0, 0x1.58c31720b1f74p-94, 0.0, 0x1.184b60ddeefe4p-305,
     0.0, 0.0, 0x1.2e8915ae4c413p-542, 0x1.e73844911b755p-855, 0.0,
     0x1.17733dbcdbfeep-961, 0.0, 0x1.74591822842fap-892, 0.0, 0.0, 0.0, 0.0,
     0x1.e293a027fdb2bp-367, 0x1.8e85a049a3087p-276, 0.0, 0.0, 0.0,
     0x1.29c4c52e9b011p-216, 0.0, 0x1.3834b5a43c023p-321, 0.0, 0.0, 0.0,
     0x1.30bd92a983adap-441, 0x1.21dc86e986781p-226, 0.0, 0x1.45a2e1d1bf909p-297, 0.0,
     0.0, 0x1.cb987a26760eap-103, 0.0, 0x1.ead83c3350f2fp-346, 0x1.68968e958f8d7p-636,
     0.0, 0.0, 0x1.e68668f49566ap-195, 0x1.2843e73e14ed3p-11, 0x1.a9e80120e4efdp-159,
     0x1.d188d1d75551cp-857, 0.0, 0x1.53aed1325eebfp-970, 0x1.4689b087fee59p-624, 0.0,
     0x1.60479e10db4e9p-277, 0.0, 0.0, 0.0, 0x1.90dbef8c93159p-710,
     0x1.02d3d6e0d7a4bp-256, 0x1.dff3f3f40a452p-161, 0x1.949139c40eac7p-43, 0.0,
     0x1.d791d7a7cecdcp-1019, 0x1.f1eeae994f041p-276, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4ca0a3e7e0c11p-824, 0x1.ce3e26fa99242p-291, 0x1.3204c3d1c8b89p-793,
     0x1.6815d9317af2dp-206, 0.0, 0.0, 0.0, 0x1.77f5395250fdep-25,
     0x1.f657c25a19e51p-665, 0x1.812d983e666fcp-915, 0.0, 0x1.4c2e303de7d67p-283, 0.0,
     0x1.150b39b0d38bp-773, 0.0, 0x1.39f85c2f52a8fp-290, 0.0, 0.0, 0.0,
     0x1.11bb1d5efffa2p-257, 0.0, 0x1.80eb1596a8aabp-577, 0.0, 0.0,
     0x1.e1b5ce5b56977p-31, 0x1.9089eb52a976dp-805, 0x1.9c81b8a16de02p-338,
     0x1.30f3b1034bfbfp-658, 0.0, 0.0, 0.0, 0x1.b6ca6ecdf0e5ep-482, 0.0,
     0x1.a7c7dd46d0e2cp-731, 0.0, 0x1.9f01aa9e5d81ep-275, 0.0, 0x1.4214966ed4196p-743,
     0.0, 0.0, 0x1.5fbf412cae0e7p-460, 0x1.ebff76b076183p-717, 0x1.e13e164b0dd03p-143,
     0.0, 0x1.a7369ee3cff73p-559, 0x1.773e3ef6727dcp-823, 0.0, 0.0,
     0x1.6f196f3fd0becp-946, 0x1.56cea82664714p-108, 0.0, 0x1.1a46dad05354bp-208, 0.0,
     0.0, 0.0, 0x1.281d7fdb1b191p-433, 0.0, 0x1.2f4d9e1de13a2p-321, 0.0,
     0x1.437e913c23457p-390, 0x1.8007c5a019a8p-736, 0x1.b919e9e8614cap-639,
     0x1.91b26ec18cce2p-772, 0x1.81fa63d6648bbp-811, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.edc5e88d25ed8p-261, 0.0, 0x1.d53fd5fc92b74p-483, 0x1.0274350ca7075p-124,
     0x1.ba3253b0174b1p-82, 0.0, 0x1.4790f1e02f7e7p-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a6a3c39e222afp-969, 0.0, 0x1.37eb2b5901ccdp-1000,
     0x1.a59bbffe07624p-518, 0.0, 0x1.edaa36550617dp-762, 0.0, 0x1.c2a5c4a20eb0bp-788,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ee849fdacfd2p-949,
     0x1.90595909f1db9p-1021, 0x1.53a976ad33258p-217, 0x1.788b3cd46fd1ap-618,
     0x1.834b6bed3638cp-433, 0x1.49dfecfec59d3p-807, 0.0, 0.0, 0.0,
     0x1.d6d791a3ebfabp-306, 0x1.078a5f37a30cp-105, 0x1.304dcec4fac92p-521,
     0x1.3dbb5e5f64067p-872, 0.0, 0x1.a5309304ea7ddp-652, 0x1.b2e68c715ddedp-385, 0.0,
     0x1.d20a22011f5cfp-369, 0.0, 0.0, 0x1.5696e6d94df65p-579, 0.0,
     0x1.1c85e998aa081p-65, 0x1.285727d43f94cp-25, 0x1.025020107702cp-726,
     0x1.5900539481ccbp-35, 0x1.8c418e5168f37p-1010, 0x1.be7123b7263a8p-74, 0.0,
     0x1.503a251a82018p-598, 0.0, 0x1.30512ab0440adp-102, 0.0, 0x1.6d7fc0633712ap-451,
     0.0, 0x1.5c38a3733e7c4p-555, 0x1.f42b6f37b0c5ep-182, 0x1.526f0edb01887p-221,
     0x1.616db80b9a44dp-655, 0x1.4a51bde701763p-792, 0x1.d63cf2e22fbd1p-762,
     0x1.eaa3f57e76f1fp-774, 0x1.3718eb7a3f195p-957, 0x1.99d8b23f4871ep-366,
     0x1.6abfd6f5e6374p-145, 0.0, 0x1.ce26ce6db723cp-166, 0.0, 0.0, 0.0,
     0x1.e57b6bad2084p-191, 0x1.d4066687a8e64p-661, 0.0, 0x1.6463cca7d82cp-183, 0.0,
     0x1.6e0709c449c91p-344, 0x1.0b6eae93a978ap-1021, 0.0, 0.0, 0.0, 0.0,
     0x1.3480c1f1ebb0ap-810, 0x1.84e8fdb67c29dp-125, 0.0, 0.0, 0x1.5fba2aeb56fe7p-142,
     0.0, 0x1.596f8f3bf555dp-618, 0.0, 0.0, 0x1.b3757726f3825p-582, 0.0, 0.0, 0.0,
     0.0, 0x1.3ead431c47788p-123, 0.0, 0x1.93caf3b95853ep-325, 0.0, 0.0, 0.0, 0.0,
     0x1.ea93fc82df345p-456, 0.0, 0.0, 0x1.61156721b3b35p-14, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8eb55ee55cc7fp-70, 0x1.6b1bbb8ad596cp-782, 0.0, 0x1.a6de4da6e2652p-566,
     0x1.a4ddfb27b6d01p-263, 0.0, 0x1.d32caabea64a8p-289, 0x1.f1f970442d73ep-413, 0.0,
     0.0, 0.0, 0x1.11c8f91d1755ep-4, 0.0, 0x1.1679ee1183febp-448, 0.0,
     0x1.187ec58ec36b1p-713, 0.0, 0x1.19b1b499f53eep-903, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.85406a1797163p-601, 0.0, 0.0, 0x1.f75491ffadc9ep-751,
     0x1.10deed95afd99p-907, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f5e4222ec6f0ep-464,
     0x1.92620165cc20cp-124, 0x1.86ff2094a6e05p-320, 0x1.06644479faa81p-783, 0.0, 0.0,
     0x1.30e2bce356977p-380, 0x1.c29b86091badep-338, 0.0, 0x1.6e6c4338e56a8p-163, 0.0,
     0x1.4081aae17292p-9, 0.0, 0.0, 0x1.635c0b71e0fa3p-720, 0x1.e06b94ce6e316p-743,
     0.0, 0.0, 0x1.2c6eacca681fdp-193, 0x1.12111ef4ae122p-892, 0x1.4089e33ba75cp-896,
     0x1.7e22de6d2bcb1p-498, 0.0, 0.0, 0.0, 0x1.88fba60fd001dp-947, 0.0,
     0x1.b0d6a2d0a63e8p-563, 0x1.747187537b485p-186, 0x1.4f62bf00a996ep-13,
     0x1.b0c1055d5462ap-367, 0x1.9b2dbfa40a9fep-932, 0x1.659f40b9ffca7p-991,
     0x1.1717cad1491cep-120, 0.0, 0.0, 0x1.0d0c411d6d16bp-1008, 0.0,
     0x1.4b804f39532fap-622, 0x1.0a41fadcaf29dp-680, 0.0, 0.0, 0x1.9d356e96476a6p-537,
     0.0
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
            tmp1 = Sleef_finz_sind1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sind1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sind1_u10purecfma bench acc %la\n", global_bench_acc);
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
