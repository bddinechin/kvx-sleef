/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid1_u35purecfma.c --function \
 *     Sleef_sincospid1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.b9b7244fc097cp-281, 0.0, 0.0, 0.0, 0x1.c9407a1f3fa05p-310,
     0x1.12ff700cd8401p-811, 0.0, 0x1.754e9903005b7p-316, 0x1.32131b7f2b47dp-389,
     0x1.bb5cfdecba7f5p-903, 0x1.c3155a546aaf2p-1004, 0x1.34ac4f76f80abp-446,
     0x1.b14b8a8316dfep-88, 0.0, 0x1.2aad287c701c7p-589, 0x1.3e77499accddap-272, 0.0,
     0x1.69adf9b5b82e4p-31, 0x1.ff2297e78bd3p-98, 0.0, 0x1.ce08bb8608032p-578,
     0x1.042e4bd72d51dp-606, 0.0, 0x1.f9c7c4c0e80c2p-899, 0.0, 0x1.88913fc60afabp-998,
     0.0, 0x1.2ead31f2299a2p-251, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56e7507aaa0b5p-537,
     0.0, 0x1.1eae9faaba3dep-964, 0.0, 0.0, 0x1.6f99b2314b74p-181, 0.0, 0.0,
     0x1.3d00adb48661cp-5, 0.0, 0.0, 0.0, 0x1.bb16be44bb431p-596,
     0x1.f5bfc8ab68ecep-954, 0x1.970fedc3a59dbp-788, 0x1.99cf0e6e6fcecp-432,
     0x1.c989a0d266cbp-787, 0.0, 0.0, 0.0, 0.0, 0x1.fa0efd51a55abp-345, 0.0,
     0x1.57d344713c8p-448, 0x1.4aaae582e4b14p-234, 0.0, 0.0, 0x1.b689415c5bb1fp-141,
     0.0, 0x1.6ce6ffea2bb68p-553, 0.0, 0.0, 0x1.e1d4a0169a57fp-222, 0.0, 0.0, 0.0,
     0x1.972c15b27fd38p-139, 0.0, 0x1.daa4271b59c94p-559, 0x1.d818ea03d4987p-523,
     0x1.7d299c7a66628p-642, 0x1.48cc35062e66ep-366, 0.0, 0x1.1b876e11fd5b6p-441, 0.0,
     0.0, 0.0, 0x1.e4b859dd794a4p-314, 0.0, 0.0, 0x1.f398f0912bd63p-72,
     0x1.2c5bf533e758dp-624, 0x1.f269f276fcb6fp-420, 0.0, 0.0, 0.0,
     0x1.e6bb388d080e5p-730, 0x1.06f3c8f385dbcp-209, 0x1.4eb4200f5d494p-53,
     0x1.3bea308187614p-983, 0.0, 0.0, 0x1.10b2072fe0d4ep-527, 0.0, 0.0, 0.0, 0.0,
     0x1.96c3db9a833bdp-846, 0x1.f8fec70b2a062p-1008, 0x1.4d0204a75f364p-711,
     0x1.4736c7e8270bap-564, 0.0, 0.0, 0x1.504180d60c98p-17, 0.0,
     0x1.7d671784ae15ap-793, 0.0, 0.0, 0.0, 0x1.85e53785cec8bp-804,
     0x1.b236c8a9367cdp-106, 0x1.12484b098668cp-847, 0.0, 0.0, 0x1.73ca49dad5ad2p-207,
     0.0, 0.0, 0x1.c5af0107e81e9p-96, 0x1.aaa066ad06b24p-71, 0x1.77254ff515535p-684,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.057b284da5b04p-385, 0x1.4f424affc7f5dp-351, 0.0,
     0x1.b0b47d127a3c9p-135, 0x1.9373033160e6p-899, 0.0, 0x1.f0bb3aaa5b323p-349,
     0x1.7bc8bb39578a6p-172, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0b5d23f2b0582p-725, 0.0, 0x1.251136f016719p-151, 0.0, 0.0,
     0x1.87584a0881716p-399, 0.0, 0.0, 0.0, 0x1.2bd9b257bcfbdp-263, 0.0, 0.0,
     0x1.cb47bb1d2b708p-917, 0x1.d90354bc172c8p-370, 0.0, 0x1.219a8866b8c66p-419, 0.0,
     0.0, 0x1.20035228855b2p-955, 0.0, 0x1.69fab3e67bc46p-347, 0.0,
     0x1.9f0b266b8c34bp-960, 0x1.6dbd30186a92ep-705, 0x1.504af0042d16ep-460,
     0x1.b0a7a8ab7bd4ap-312, 0x1.7982c40c426b8p-906, 0x1.832033b4a315fp-407,
     0x1.0015445bf1faap-968, 0.0, 0.0, 0x1.af7a3414188b9p-111, 0.0, 0.0,
     0x1.a61cce06798a3p-103, 0x1.ef6dd015ee0bap-401, 0x1.1d5448db260cfp-874, 0.0, 0.0,
     0.0, 0.0, 0x1.7aee80ac649ep-473, 0x1.848a728425477p-364, 0.0, 0.0,
     0x1.1f9b4b6473726p-972, 0x1.fba9f678f94d4p-670, 0.0, 0.0, 0x1.72d859716ccd1p-594,
     0.0, 0.0, 0x1.ba8cbf2f04a56p-18, 0.0, 0x1.f7fbea4c22768p-27, 0.0,
     0x1.d8d2021dc945p-425, 0x1.b92716211cb56p-282, 0x1.07b58094a3c27p-111,
     0x1.af050c805e6b8p-618, 0x1.1f13e9941b30fp-369, 0.0, 0x1.a572e8e6ad1a3p-349,
     0x1.5714f858e7ba6p-542, 0x1.7b2ed0a8a6d86p-925, 0x1.b3bf1a6fd57e3p-774,
     0x1.99dc2bd2293c2p-681, 0.0, 0x1.6027eafc7e56cp-542, 0x1.75b274f0d4d08p-441, 0.0,
     0.0, 0.0, 0.0, 0x1.a4e9ce23a4dd7p-478, 0.0, 0.0, 0.0, 0.0,
     0x1.d540e8ebcbb9dp-297, 0x1.087b5080db4c2p-410, 0.0, 0.0, 0x1.aa4964362a89ep-494,
     0x1.349efd6140f78p-778, 0x1.4e7abcb73f1f6p-89, 0.0, 0x1.82b28a0be578dp-203,
     0x1.f729bd9e45e4bp-72, 0.0, 0.0, 0.0, 0.0, 0x1.0ba4813b4ba68p-542,
     0x1.0cca55cce335cp-190, 0.0, 0.0, 0x1.fc2d976ff832p-132, 0x1.2741a2d486acbp-515,
     0.0, 0x1.f78e3daa68ffep-717, 0x1.d05423f92f24fp-937, 0.0, 0x1.fa9f6c1dd8e59p-43,
     0.0, 0.0, 0.0, 0x1.a6bf1f4dccf4dp-110, 0x1.4907a39c7b7a1p-366, 0.0,
     0x1.2e21e48f77583p-919, 0x1.b8b66c6767347p-125, 0x1.2471c3c52ae3dp-323, 0.0,
     0x1.cc8e4cceae337p-156, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.de47ad613907cp-804, 0.0, 0.0, 0x1.5d21c5a27485dp-279, 0x1.586fdaf732de4p-184,
     0x1.000a1d1d968abp-293, 0x1.c6db0bdc46857p-277, 0x1.adcaa749e388cp-790,
     0x1.ef6cd721340a4p-681, 0x1.14c8076ad23a4p-428, 0x1.f1fe1e546c739p-531, 0.0, 0.0,
     0.0, 0x1.baf35dcc3a3cep-453, 0x1.289dc147dc269p-516, 0.0, 0.0,
     0x1.8f0e7f149170fp-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49030c9f88877p-454, 0.0, 0.0, 0x1.0f530bc65639p-122, 0x1.da12d3c7373b2p-427,
     0.0, 0.0, 0x1.bd9e372b87336p-210, 0x1.6324c2cc6749fp-549, 0x1.f90716999b013p-823,
     0.0, 0.0, 0.0, 0.0, 0x1.b41346b344e16p-303, 0.0, 0x1.b9063de8ce7fp-202, 0.0, 0.0,
     0x1.b28eec6093cc4p-106, 0.0, 0x1.4649c9a229587p-796, 0x1.8f37a838166dep-640,
     0x1.fb3706ab58a7bp-269, 0x1.cd23b820171dfp-981, 0.0, 0x1.60d75c8b5666bp-950, 0.0,
     0x1.108044a4f028dp-126, 0.0, 0.0, 0x1.37d6d52255946p-322, 0.0,
     0x1.5e79ae5df1171p-360, 0.0, 0.0, 0x1.6466b8e8b4c61p-864, 0.0,
     0x1.12280e126326bp-605, 0.0, 0x1.68c2ea2eed357p-1007, 0.0, 0.0,
     0x1.353eeded3dbecp-322, 0x1.3e7d62114c925p-342, 0.0, 0.0, 0x1.1208adfcfa4a6p-700,
     0.0, 0x1.8dc7d4c3c584bp-883, 0x1.9f7a107d9ff4fp-321, 0x1.ce03acea37a9dp-81,
     0x1.bc69ec885b919p-985, 0x1.b78a5c03340f3p-84, 0x1.51e4ad7ffd40ep-897,
     0x1.2131f477f9c46p-469, 0x1.a8c7856f71656p-116, 0.0, 0.0, 0.0,
     0x1.69232ac14f228p-983, 0x1.d907323c7334cp-118, 0.0, 0x1.ed09ae8c413aep-50,
     0x1.dc89cbbbb91cbp-493, 0x1.28662395a1141p-411, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d5b30e01a2b58p-211, 0x1.1687bed81fb9cp-604, 0x1.b10f123d39c45p-189,
     0x1.152ec920d6621p-35, 0.0, 0x1.c068ab8363dadp-326, 0.0, 0.0,
     0x1.6a766055efe72p-21, 0x1.2cf1a79c435bbp-504, 0.0, 0x1.c2affd939e96ap-516, 0.0,
     0x1.f989ab66a1b79p-634, 0x1.106a87777849cp-471, 0x1.a61161483e43ap-510, 0.0, 0.0,
     0x1.ba20bdde84d34p-730, 0.0, 0x1.2049317b30cabp-947, 0.0, 0x1.7ffd37bd2cf58p-998,
     0x1.e22aab5943779p-561, 0.0, 0.0, 0x1.2f2fbeb9bd9b6p-663, 0.0,
     0x1.7f5bb6b9285ebp-608, 0.0, 0.0, 0x1.bf24e371a0ec1p-852, 0x1.8fa28203850adp-532,
     0x1.1197723a03f53p-38, 0.0, 0.0, 0.0, 0.0, 0x1.42e74330e0d89p-601, 0.0, 0.0,
     0x1.96fdbe7844d77p-82, 0x1.9e368256a640bp-343, 0.0, 0.0, 0.0,
     0x1.97dd174abfc1ap-746, 0.0, 0.0, 0.0, 0.0, 0x1.d6c534b2d7fbap-859, 0.0, 0.0,
     0x1.4938c360ea91cp-640, 0x1.e2e446ed84d37p-352, 0x1.3058f2383f35p-471,
     0x1.9def9df6b780ap-582, 0x1.992f843bcdba4p-758, 0.0, 0x1.25c159ff262cap-648,
     0x1.4997d4750c70dp-496, 0x1.72ad48901efbdp-539, 0.0, 0.0, 0.0, 0.0, 0x1p0,
     0x1.cc263383e52f5p-408, 0.0, 0.0, 0x1.5f7d9460c75cap-670, 0.0, 0.0, 0.0,
     0x1.5910c5a604afdp-215, 0x1.dd8cc634d7071p-189, 0x1.0ccc9e0e5854cp-313, 0.0, 0.0,
     0x1.65c27d506139bp-929, 0.0, 0x1.e2d2115d9740ap-306, 0x1.d0dfb34d3dfc9p-932,
     0x1.03d6f5ad63361p-39, 0x1.c23a5b2f3c6a5p-250, 0.0, 0.0, 0.0, 0.0,
     0x1.36dbcf997039fp-466, 0x1.8bb0ddb6519b8p-288, 0.0, 0.0, 0.0,
     0x1.82a28fe5e7778p-34, 0x1.c494b784a22c6p-364, 0x1.8c1d1cda8813ep-25, 0.0, 0.0,
     0x1.29c0a43b035a3p-70, 0.0, 0.0, 0.0, 0.0, 0x1.2d52b73531a25p-9,
     0x1.e677fca402ba5p-415, 0.0, 0x1.889056d584a69p-701, 0x1.efd559356853cp-509, 0.0,
     0x1.0e2ea3495b775p-209, 0x1.749d2092bc089p-550, 0.0, 0.0, 0.0,
     0x1.c5e25de255652p-902, 0x1.de109e40a0bbap-419, 0.0, 0.0, 0x1.6672078898471p-752,
     0.0, 0.0, 0x1.43fe7d0d0112ep-778, 0x1.917555426f796p-449, 0.0,
     0x1.60c3f309ee27p-957, 0x1.f967158f64904p-779, 0x1.134796e9cf30bp-227,
     0x1.17b8811f91ee1p-523, 0.0, 0x1.a509b84733e93p-162, 0.0, 0.0, 0.0,
     0x1.7ee1b3099b426p-1007, 0.0, 0x1.d0289bf257255p-557, 0x1.b3d4d200f2096p-520,
     0x1.7af8a1346bdb3p-331, 0x1.78524c89d2d5bp-489, 0.0, 0x1.732d032e002e3p-1017,
     0.0, 0x1.bee7168836b61p-837, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bd5ad9abedee9p-851, 0.0, 0x1.e89d67478885dp-286, 0.0, 0x1.9bf979746dca4p-458,
     0x1.2e3c454ea7189p-459, 0.0, 0x1.e389ce5055364p-594, 0x1.883ffa9f4a64fp-708,
     0x1.0ba2a99a685f4p-307, 0.0, 0.0, 0x1.d732731441e0bp-785, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4df2f5943d5aap-372, 0.0, 0x1.c09c5307677ep-340, 0.0,
     0x1.1c2fe652b6e6p-8, 0x1.9c9ad2d4854dcp-432, 0.0, 0.0, 0x1.85f21d93bd616p-106,
     0.0, 0x1.04a575e1f44d5p-1000, 0.0, 0.0, 0x1.fbef3d3fde93dp-81,
     0x1.6a29447530c04p-915, 0x1.05e8c4479f67p-837, 0.0, 0x1.325dc2ccc16fp-754,
     0x1.36597ea970e8cp-878, 0x1.0151c5707b132p-417, 0.0, 0x1.57ddae622fb8cp-984, 0.0,
     0x1.4fc0b64378041p-880, 0x1.c00dccb1c1091p-335, 0.0, 0x1.dff3cc39a6d0dp-805, 0.0,
     0x1.800d2c6c87bd9p-442, 0.0, 0.0, 0.0, 0.0, 0x1.56254ebe83931p-31,
     0x1.dcdccf6d16d52p-165, 0.0, 0x1.94dbb00bc12fp-503, 0x1.ab4e7eff45064p-573,
     0x1.c219baddb1265p-90, 0x1.888a64542fbc5p-352, 0.0, 0x1.9ff452a16f5c3p-523,
     0x1.635c9a8fb1573p-898, 0x1.ea8117368b929p-348, 0x1.4a55f83756e24p-261, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.775d1bde2ad2fp-744, 0.0, 0x1.af817733b877p-119, 0.0, 0.0,
     0x1.82996434ee154p-119, 0x1.c7c2d40bc9bdcp-839, 0.0, 0x1.b6123283d2908p-270,
     0x1.7eb3bf8c1a3dfp-506, 0x1.6013b5a9d9099p-305, 0x1.bc85892654ac3p-942, 0.0, 0.0,
     0x1.7a4b6c03196ffp-924, 0x1.e179e5b8c4e34p-1008, 0.0, 0x1.74cbdb4314efep-678,
     0x1.ae76bb9226bc5p-734, 0x1.6752ec12ef9fdp-505, 0.0, 0x1.c93bd3dcc8656p-207,
     0x1.a72b7cf859b8ep-265, 0.0, 0x1.9d6a80f5eb6d7p-697, 0.0, 0x1.d73544824e632p-309,
     0.0, 0x1.b331ed2ca1158p-128, 0.0, 0.0, 0x1.cd203a3dcaeb7p-739, 0.0,
     0x1.b135df14f7fe7p-722, 0.0, 0x1.246cce85badc9p-599, 0x1.346d259a6f2cep-175, 0.0,
     0x1.f5098485188ffp-819, 0x1.4fbf5198035c8p-256, 0x1.684d866b68dafp-680,
     0x1.f5ff97fbe239bp-974, 0.0, 0x1.5ff464e74444bp-212, 0.0, 0.0,
     0x1.8395c30ed33eap-982, 0.0, 0x1.232d2817d228fp-139, 0.0, 0.0,
     0x1.9b850fbce93f6p-343, 0.0, 0.0, 0x1.b8ec4720eda06p-511, 0x1.12294e19b6d9p-635,
     0x1.229c8e8459729p-547, 0x1.29d7cc82d54b9p-411, 0x1.3edfb3cdc9175p-688, 0.0,
     0x1.431179674503bp-920, 0.0, 0.0, 0.0, 0.0, 0x1.5d7e8526f7191p-788,
     0x1.8ae92bbc43ceap-685, 0x1.42cbca7c3d861p-140, 0x1.67aee34d7f981p-837,
     0x1.d8aa6ffb8a29ap-440, 0x1.398389fd43bcfp-160, 0x1.42fa6dbf8eaf1p-801,
     0x1.3b06524d612c7p-271, 0.0, 0x1.d3f1e44794269p-510, 0x1.3d36269e160f9p-427,
     0x1.452a02cc228edp-454, 0.0, 0.0, 0.0, 0x1.8aa671a8d29e9p-287, 0.0, 0.0, 0.0,
     0.0, 0x1.38572f7c906d1p-728, 0x1.a3113aad83a45p-136, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a7473878f7c23p-1012, 0.0, 0x1.0fe6772356f7fp-659, 0.0,
     0x1.1f298276bcfa8p-734, 0.0, 0x1.1ed86ecb3a557p-739, 0.0, 0x1.d59f21544bce7p-785,
     0x1.67d1743b645c8p-20, 0x1.a612480b909f6p-905, 0.0, 0x1.8226f3f250056p-199,
     0x1.17822efe961a7p-113, 0x1.bf1b58360fc69p-732, 0x1.ed1ec02341accp-288,
     0x1.8478ce0e05727p-343, 0x1.f160da3500abfp-383, 0.0, 0x1.1e318f9439355p-497, 0.0,
     0x1.253ff42131ff6p-996, 0.0, 0.0, 0.0, 0x1.b8634d7a69a2dp-653, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.495d50550a53fp-688, 0x1.20cefb30a9f2p-171, 0.0,
     0x1.61411bb9bf5dp-304, 0.0, 0.0, 0x1.5d1b3ea145dc5p-776, 0.0, 0.0,
     0x1.6b510461ada63p-476, 0x1.a1750eeb25582p-280, 0.0, 0x1.be592e1d7b1edp-370,
     0x1.8d6e60c46dfd8p-575, 0x1.ee36fe9267c73p-432, 0.0, 0x1.6429ebb4d15a4p-964, 0.0,
     0.0, 0.0, 0x1.efe1678b859a4p-368, 0.0, 0x1.ea35888c64167p-856, 0.0,
     0x1.e3537da04b509p-297, 0x1.e70fc1b80bf29p-11, 0.0, 0x1.5928072f5d3cfp-827, 0.0,
     0x1.d46adf03f97d4p-992, 0x1.08aee6c44be86p-999, 0x1.770d927e27cabp-284, 0.0,
     0x1.93d248d4f8157p-549, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.961c1fd26079bp-290,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.015c3a89bdf93p-555, 0x1.6e502fa31c8f9p-989, 0.0,
     0.0, 0x1.e171bd70a2aa6p-842, 0.0, 0.0, 0x1.1582554d23a7p-740, 0.0, 0.0,
     0x1.4bd2131c2d4edp-576, 0x1.82d10d6adfbfep-359, 0x1.a1a727da4b148p-430,
     0x1.34ca722f85744p-23, 0x1.a87fb917b8cep-912, 0.0, 0x1.099f0547f9babp-139, 0.0,
     0x1.8f3db5ed146e4p-815, 0.0, 0x1.d398a96ed7911p-320, 0.0, 0.0, 0.0, 0.0,
     0x1.532edabec5664p-530, 0.0, 0.0, 0x1.5a6110a20b487p-978, 0x1.cc5d9efee9546p-960,
     0.0, 0x1.c6d7388d047fep-949, 0.0, 0.0, 0x1.523579f863001p-315,
     0x1.9a3b4265bb025p-319, 0x1.8d8d2df909f9cp-914, 0x1.1f11e962d7e65p-485,
     0x1.049e810f4324ep-334, 0.0, 0x1.6bb66e6c5f691p-238, 0x1.f6c2274710115p-430,
     0x1.ec9b2ab6eaf23p-48, 0.0, 0x1.1cbd4bc20f894p-587, 0x1.ad02958862844p-111, 0.0,
     0x1.579766d5e6fd4p-133, 0.0, 0.0, 0.0, 0x1.d3dd0eba10729p-931,
     0x1.36687c144d59ap-739, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d01221ec2775p-743,
     0.0, 0x1.406787694322bp-128, 0x1.e11dbe3f69df4p-517, 0.0, 0.0,
     0x1.8148d8744c6a3p-93, 0x1.fb5ed6f97dfd7p-568, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5bfcd59f12c4cp-874, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75ed7d0ffb7ecp-879,
     0x1.2f58ee51bb1a4p-603, 0x1.451258f5dd339p-930, 0x1.8c824668bf715p-803,
     0x1.fd333c105e621p-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57953be8ed8d8p-533,
     0.0, 0.0, 0x1.889225526e3cep-398, 0x1.9810a4e4b1ddp-782, 0x1.b54401f80eef1p-604,
     0x1.e1a679ebcc202p-510, 0.0, 0x1.f1284ac2e3ddp-1008, 0x1.7e6c2790fb3c5p-973,
     0x1.37cce945fa21ep-190, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6b84f1bfecb95p-173,
     0x1.a4160ce38e8fdp-99, 0x1.2140ecde1f085p-745, 0.0, 0x1.8a8e6ac3fcf7ep-401,
     0x1.b05cf21e4ab53p-913, 0x1.714e23bfedbep-846, 0x1.4e7d41b0be2ebp-882,
     0x1.80de4dd81cfe9p-212, 0.0, 0x1.5220052760d2ap-288, 0x1.aa7be17396bdep-616,
     0x1.98e808868f75p-294, 0x1.8dd9ed0c9d40ep-799, 0.0, 0x1.c93e084f8f2c7p-967,
     0x1.5fda0d2e88197p-404, 0x1.3c72a013803c8p-607, 0x1.0310d373d7f16p-980,
     0x1.26d8931f0908bp-255, 0x1.f96ebca093e51p-201, 0x1.9cf721fbf667p-582,
     0x1.2b0a0b489f351p-691, 0.0, 0x1.b3a7dbc24ed6dp-716, 0x1.f549520ae6e62p-520,
     0x1.eb5c2cb3de343p-889, 0x1.2f8c49558a6b6p-428, 0x1.b75c17033752p-13,
     0x1.37365797b4793p-531, 0.0, 0x1.3e56f559beb74p-505, 0x1.a3f8f3057be8dp-196,
     0x1.ee2359e4bf54fp-624, 0x1.93f3d7ad747fp-307, 0.0, 0.0, 0.0,
     0x1.22c724372a511p-463, 0x1.3d21131ba97cdp-32, 0.0, 0x1.da3feaf9b306fp-476, 0.0,
     0x1.d14a97bde15dep-482, 0.0, 0.0, 0x1.6994772d86c52p-171, 0x1.2923229c56679p-15,
     0.0, 0.0, 0.0, 0x1.ccd8a5e356b1ap-767, 0.0, 0x1.0f21052a82e64p-802, 0.0, 0.0,
     0x1.48624abe5551dp-224, 0.0, 0x1.afb4ca077ce8dp-190, 0.0, 0.0, 0.0,
     0x1.474c6aca57ddap-156, 0x1.e65405f0332dcp-263, 0x1.4730e67c2c0a4p-825, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.01c1cbe8e6ca3p-791, 0x1.b9a7515208c75p-253, 0.0,
     0x1.0b1e95e33fd15p-22, 0x1.7606177d1fbcfp-681, 0x1.6279468a40586p-148, 0.0,
     0x1.7e6017fddd764p-702, 0x1.4bd5c93674cbdp-157, 0x1.ed31866ca1c2ap-734, 0.0, 0.0,
     0x1.be722b8b28689p-284, 0.0, 0x1.fe133ea883cecp-660, 0x1.9fef118e56b47p-604,
     0x1.633d6a070103bp-431, 0x1.9d882745ddc9bp-438, 0x1.75bc74594160cp-511,
     0x1.91786443749f4p-563, 0.0, 0x1.336b122ac11d2p-91, 0.0, 0x1.cb59b078ea7bdp-429,
     0x1.d150cf40cbe37p-378, 0x1.d45d5d317b56fp-839, 0x1.a3d7132591905p-716, 0.0,
     0x1.5783c6c524c4p-913, 0x1.4ba10c38ea69dp-67, 0.0, 0x1.af010c3f7560cp-362,
     0x1.ddaa5c9676a3dp-845, 0.0, 0x1.81579e3e0bf6bp-452, 0x1.857e7329f0b15p-242, 0.0,
     0x1.fb743e6388f79p-214, 0.0, 0.0, 0.0, 0x1.8ba7842173a3ep-300,
     0x1.0efc5a99eae17p-466, 0x1.85b374a3c866dp-338, 0.0, 0.0, 0x1.cf59a58a98ba6p-368,
     0x1.dc18fe13f3f5p-831, 0.0, 0.0, 0.0, 0x1.53f0a10e298f5p-18, 0.0,
     0x1.6efa3a36d7c5p-354, 0x1.146d06b342c1ap-516, 0x1.dd0d98bb5a3f8p-1017,
     0x1.a846778b3da06p-307, 0x1.b88a854690de1p-752, 0x1.9c48ba74105a9p-380, 0.0,
     0x1.08d6b5b3acd54p-72, 0x1.87f0a86d993b3p-920, 0.0, 0x1.1df2adbba0fc6p-82,
     0x1.d844b539e493fp-949, 0.0
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
            tmp1 = Sleef_sincospid1_u35purecfma(tmp0);
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
    printf("Sleef_sincospid1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospid1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
